
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

volatile int8_t x3 = 0;
uint64_t x4 = UINT64_MAX;
volatile int16_t x8 = INT16_MAX;
static volatile int64_t x11 = INT64_MIN;
int16_t x12 = INT16_MIN;
static int32_t x15 = -25699;
volatile int16_t x17 = INT16_MIN;
uint16_t x18 = UINT16_MAX;
volatile int32_t t4 = 2932732;
int32_t x25 = -16;
int64_t x34 = INT64_MIN;
uint64_t x38 = 699562039392LLU;
int8_t x39 = INT8_MAX;
int32_t x42 = -1;
uint64_t x45 = 14282831LLU;
uint8_t x47 = 4U;
uint32_t t12 = 34U;
int16_t x59 = -352;
volatile uint8_t x62 = 28U;
uint8_t x72 = 44U;
static int8_t x86 = INT8_MIN;
uint64_t t19 = 23547980602LLU;
int64_t x91 = INT64_MIN;
uint16_t x94 = 1U;
int32_t x98 = INT32_MIN;
int32_t x99 = 385323018;
int32_t x100 = INT32_MIN;
int64_t t26 = -22904808836989795LL;
uint64_t x121 = UINT64_MAX;
int8_t x123 = -8;
volatile int32_t x124 = INT32_MIN;
int32_t t30 = 0;
int8_t x150 = -1;
static int64_t x154 = INT64_MIN;
static volatile int16_t x164 = 272;
static int64_t t40 = -331176213572042LL;
int32_t x174 = -1;
static int32_t x181 = -57835439;
static uint64_t t43 = 145259499868LLU;
uint16_t x187 = 0U;
int8_t x189 = INT8_MIN;
int32_t x193 = INT32_MAX;
uint64_t x206 = UINT64_MAX;
int8_t x208 = INT8_MIN;
static int32_t x220 = -416284;
static int32_t x221 = INT32_MIN;
volatile uint64_t x225 = 6LLU;
int8_t x226 = INT8_MAX;
volatile uint64_t t54 = 11353813LLU;
int16_t x232 = -4878;
static volatile int8_t x234 = -1;
int16_t x239 = 3;
static volatile int64_t t57 = -80330LL;
static int64_t x241 = INT64_MIN;
uint64_t x243 = 570641626880LLU;
static volatile int64_t t58 = 2090079855660801202LL;
int8_t x247 = -12;
volatile int32_t x249 = 573557619;
int8_t x253 = INT8_MIN;
int64_t x256 = -3854LL;
int64_t t61 = 1047171637851280LL;
uint64_t x269 = 2LLU;
volatile uint64_t t64 = 8949383174849142LLU;
volatile uint8_t x275 = 1U;
static uint8_t x276 = 98U;
uint32_t t66 = 0U;
static volatile int64_t x281 = INT64_MAX;
int64_t x282 = INT64_MIN;
int16_t x289 = -1;
static int32_t x298 = INT32_MAX;
int8_t x301 = INT8_MAX;
volatile int32_t t73 = 16438832;
uint32_t x318 = 262119371U;
uint32_t x319 = 4869U;
volatile int8_t x322 = 1;
int64_t x341 = -1LL;
volatile int32_t x349 = -1;
int16_t x357 = INT16_MIN;
int64_t x366 = 167022274157552537LL;
int16_t x371 = -1;
volatile int32_t t89 = 0;
uint64_t t90 = 216360LLU;
static int8_t x377 = INT8_MIN;
uint8_t x383 = 1U;
int8_t x384 = INT8_MIN;
int8_t x385 = 24;
static int32_t x388 = INT32_MIN;
volatile int8_t x390 = INT8_MIN;
int64_t x391 = -1LL;
uint32_t x393 = 195392458U;
static int32_t x396 = -12712529;
uint64_t x398 = 1190LLU;
uint64_t x403 = 964871239268961510LLU;
volatile int64_t x407 = INT64_MIN;
int64_t t100 = -25897039LL;
int16_t x417 = 5847;
static int64_t x421 = -1LL;
int32_t x427 = INT32_MAX;
uint16_t x428 = 1732U;
int32_t t103 = 43;
int8_t x435 = INT8_MIN;
int64_t x439 = INT64_MIN;
int16_t x440 = 3;
static int64_t x446 = INT64_MIN;
uint16_t x448 = 74U;
uint32_t x454 = UINT32_MAX;
static uint64_t x456 = 8162920546LLU;
volatile int16_t x466 = INT16_MIN;
volatile int8_t x475 = 0;
uint32_t x478 = 46087698U;
static uint64_t x480 = 1882506267943325LLU;
int32_t x483 = INT32_MIN;
volatile int32_t t117 = -28486;
int8_t x488 = INT8_MAX;
uint32_t x490 = 5743631U;
static int64_t x496 = -1LL;
int32_t x499 = INT32_MIN;
static uint8_t x502 = UINT8_MAX;
volatile int64_t x510 = 438LL;
int32_t x519 = INT32_MIN;
int8_t x521 = 2;
int64_t t128 = -178338LL;
uint32_t x534 = UINT32_MAX;
static uint32_t x536 = 2556255U;
static volatile int32_t x545 = INT32_MIN;
int64_t x546 = -1LL;
uint16_t x548 = UINT16_MAX;
uint16_t x549 = 44U;
int16_t x554 = 13;
uint64_t t137 = 117517LLU;
static uint16_t x571 = 10U;
static int16_t x575 = 95;
uint8_t x585 = UINT8_MAX;
int64_t x592 = INT64_MAX;
static int64_t t144 = -5656211LL;
uint64_t x599 = UINT64_MAX;
volatile uint32_t x604 = 45686U;
volatile uint32_t t147 = 17289102U;
int16_t x607 = -7866;
uint8_t x621 = UINT8_MAX;
volatile int32_t t152 = -4;
static uint16_t x634 = 2U;
volatile int8_t x635 = INT8_MAX;
int32_t x636 = -1;
int32_t x640 = 484;
volatile int8_t x641 = 24;
volatile int64_t t157 = -51877383LL;
uint8_t x645 = 11U;
int16_t x652 = 250;
int8_t x653 = -1;
int8_t x655 = INT8_MIN;
static volatile int32_t x664 = 16705558;
static int64_t x669 = -43578940765335292LL;
int64_t x670 = 178405958354949661LL;
volatile uint32_t x674 = UINT32_MAX;
uint8_t x681 = 67U;
static int8_t x691 = -1;
int64_t x693 = INT64_MAX;
volatile int16_t x699 = INT16_MAX;
uint32_t x703 = 4U;
int16_t x704 = INT16_MAX;
static volatile int64_t t173 = -848933774719LL;
static uint8_t x709 = UINT8_MAX;
int8_t x715 = INT8_MIN;
static int64_t x718 = INT64_MAX;
int16_t x720 = INT16_MIN;
volatile uint16_t x721 = UINT16_MAX;
static int32_t x723 = -2324834;
static uint32_t x728 = 3588254U;
static volatile int8_t x729 = 5;
int8_t x730 = -2;
static int8_t x731 = INT8_MAX;
volatile int8_t x736 = 17;
uint32_t x739 = UINT32_MAX;
static uint16_t x740 = 167U;
int16_t x747 = -1;
int8_t x752 = -1;
uint64_t t185 = 1825293737123859LLU;
int32_t x758 = INT32_MAX;
int32_t x767 = INT32_MAX;
int32_t t188 = 0;
int8_t x776 = INT8_MAX;
volatile uint32_t t189 = 28911U;
int16_t x784 = INT16_MIN;
int64_t t191 = -1041LL;
volatile int8_t x794 = INT8_MAX;
static uint64_t x804 = UINT64_MAX;
static uint8_t x806 = 41U;
static volatile int32_t t198 = 73906053;
volatile int16_t x819 = 21;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	uint32_t x2 = 130016748U;
	uint64_t t0 = 39671991085LLU;

    t0 = ((x1&(x2!=x3))%x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = INT16_MAX;
	int64_t x6 = INT64_MIN;
	volatile int8_t x7 = -1;
	int32_t t1 = 5;

    t1 = ((x5&(x6!=x7))%x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -118466LL;
	static uint64_t x10 = UINT64_MAX;
	volatile int64_t t2 = -3947307LL;

    t2 = ((x9&(x10!=x11))%x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int64_t x14 = INT64_MIN;
	volatile int8_t x16 = INT8_MAX;
	int32_t t3 = 188230;

    t3 = ((x13&(x14!=x15))%x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x19 = 1010LL;
	int32_t x20 = -54210;

    t4 = ((x17&(x18!=x19))%x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 4425U;
	uint64_t x22 = 364927508LLU;
	static int64_t x23 = INT64_MIN;
	volatile int32_t x24 = INT32_MIN;
	uint32_t t5 = 22189U;

    t5 = ((x21&(x22!=x23))%x24);

    if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = 296702305LL;
	volatile int32_t x27 = INT32_MIN;
	uint32_t x28 = UINT32_MAX;
	volatile uint32_t t6 = 1123U;

    t6 = ((x25&(x26!=x27))%x28);

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -351LL;
	uint32_t x30 = 243U;
	uint32_t x31 = 9810U;
	int64_t x32 = INT64_MIN;
	int64_t t7 = 247LL;

    t7 = ((x29&(x30!=x31))%x32);

    if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 486043058U;
	int32_t x35 = 6;
	static uint16_t x36 = 26U;
	volatile uint32_t t8 = 63094U;

    t8 = ((x33&(x34!=x35))%x36);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x37 = UINT32_MAX;
	int8_t x40 = INT8_MAX;
	volatile uint32_t t9 = 9142389U;

    t9 = ((x37&(x38!=x39))%x40);

    if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	static uint8_t x43 = 1U;
	int8_t x44 = 7;
	int32_t t10 = 37588420;

    t10 = ((x41&(x42!=x43))%x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x46 = -33165293682663LL;
	int8_t x48 = INT8_MIN;
	volatile uint64_t t11 = 207348LLU;

    t11 = ((x45&(x46!=x47))%x48);

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 1489880U;
	uint32_t x50 = UINT32_MAX;
	int64_t x51 = -24808371634033LL;
	int16_t x52 = 4;

    t12 = ((x49&(x50!=x51))%x52);

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x57 = 7062;
	int64_t x58 = -85LL;
	int16_t x60 = INT16_MAX;
	volatile int32_t t13 = -1441;

    t13 = ((x57&(x58!=x59))%x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x61 = 7477613592666145LL;
	uint16_t x63 = 669U;
	uint8_t x64 = UINT8_MAX;
	int64_t t14 = 135774734LL;

    t14 = ((x61&(x62!=x63))%x64);

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = 59833513U;
	volatile int8_t x66 = -1;
	int64_t x67 = INT64_MAX;
	static volatile int64_t x68 = INT64_MAX;
	static int64_t t15 = -9903922188879LL;

    t15 = ((x65&(x66!=x67))%x68);

    if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = INT8_MIN;
	volatile uint16_t x70 = UINT16_MAX;
	int32_t x71 = -1;
	static volatile int32_t t16 = -7255;

    t16 = ((x69&(x70!=x71))%x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MIN;
	int32_t x74 = INT32_MIN;
	int64_t x75 = 0LL;
	int8_t x76 = INT8_MIN;
	int32_t t17 = 26;

    t17 = ((x73&(x74!=x75))%x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = 27;
	int32_t x78 = 91763876;
	uint64_t x79 = UINT64_MAX;
	int32_t x80 = -1;
	int32_t t18 = -359498;

    t18 = ((x77&(x78!=x79))%x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x85 = INT8_MIN;
	volatile int16_t x87 = 511;
	volatile uint64_t x88 = UINT64_MAX;

    t19 = ((x85&(x86!=x87))%x88);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x89 = INT64_MIN;
	uint16_t x90 = 1797U;
	int8_t x92 = -1;
	int64_t t20 = 453159283174LL;

    t20 = ((x89&(x90!=x91))%x92);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x93 = INT32_MIN;
	uint8_t x95 = UINT8_MAX;
	int32_t x96 = -12324909;
	volatile int32_t t21 = -30757384;

    t21 = ((x93&(x94!=x95))%x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x97 = 120U;
	int32_t t22 = 41;

    t22 = ((x97&(x98!=x99))%x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x101 = INT8_MIN;
	static uint64_t x102 = 40955538929LLU;
	int16_t x103 = -1;
	int8_t x104 = INT8_MAX;
	int32_t t23 = 209944;

    t23 = ((x101&(x102!=x103))%x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x105 = 3807818808LLU;
	volatile int8_t x106 = 8;
	int8_t x107 = 1;
	volatile int64_t x108 = INT64_MAX;
	volatile uint64_t t24 = 166633176015146LLU;

    t24 = ((x105&(x106!=x107))%x108);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x109 = 84189669LLU;
	uint8_t x110 = 15U;
	int64_t x111 = -5912443386477LL;
	uint64_t x112 = 6812762540818584LLU;
	static volatile uint64_t t25 = 11LLU;

    t25 = ((x109&(x110!=x111))%x112);

    if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = INT32_MAX;
	volatile uint8_t x114 = UINT8_MAX;
	int32_t x115 = -1;
	static int64_t x116 = INT64_MAX;

    t26 = ((x113&(x114!=x115))%x116);

    if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x117 = INT8_MIN;
	int64_t x118 = -505699LL;
	volatile int16_t x119 = 175;
	int16_t x120 = INT16_MIN;
	int32_t t27 = -292165;

    t27 = ((x117&(x118!=x119))%x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x122 = INT64_MIN;
	volatile uint64_t t28 = 3633520654LLU;

    t28 = ((x121&(x122!=x123))%x124);

    if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x125 = INT16_MAX;
	int64_t x126 = 375270377167LL;
	static uint8_t x127 = 114U;
	int16_t x128 = 29;
	int32_t t29 = -13087;

    t29 = ((x125&(x126!=x127))%x128);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x129 = INT32_MIN;
	volatile uint8_t x130 = 24U;
	uint16_t x131 = 1U;
	uint8_t x132 = 56U;

    t30 = ((x129&(x130!=x131))%x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = INT8_MIN;
	int64_t x134 = INT64_MIN;
	int16_t x135 = -1;
	static int16_t x136 = INT16_MIN;
	volatile int32_t t31 = -501;

    t31 = ((x133&(x134!=x135))%x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x137 = -906;
	int8_t x138 = INT8_MIN;
	static int32_t x139 = INT32_MAX;
	uint32_t x140 = 2U;
	static volatile uint32_t t32 = 491U;

    t32 = ((x137&(x138!=x139))%x140);

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x141 = 2U;
	int16_t x142 = 3;
	volatile int8_t x143 = -1;
	uint16_t x144 = UINT16_MAX;
	int32_t t33 = -3822;

    t33 = ((x141&(x142!=x143))%x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x145 = UINT64_MAX;
	volatile int64_t x146 = INT64_MIN;
	volatile uint8_t x147 = 1U;
	uint8_t x148 = UINT8_MAX;
	uint64_t t34 = 1141257315631709LLU;

    t34 = ((x145&(x146!=x147))%x148);

    if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x149 = UINT8_MAX;
	int64_t x151 = -1LL;
	uint8_t x152 = 1U;
	volatile int32_t t35 = 1;

    t35 = ((x149&(x150!=x151))%x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x153 = INT8_MAX;
	uint8_t x155 = 19U;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t36 = 2;

    t36 = ((x153&(x154!=x155))%x156);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x157 = -506;
	int64_t x158 = -4753012324LL;
	int16_t x159 = INT16_MIN;
	uint64_t x160 = UINT64_MAX;
	uint64_t t37 = 563LLU;

    t37 = ((x157&(x158!=x159))%x160);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x161 = -1;
	static uint16_t x162 = UINT16_MAX;
	static int32_t x163 = 29;
	int32_t t38 = -67011039;

    t38 = ((x161&(x162!=x163))%x164);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x165 = INT64_MIN;
	static uint8_t x166 = 1U;
	int32_t x167 = INT32_MIN;
	volatile uint64_t x168 = 13479820LLU;
	uint64_t t39 = 755295812LLU;

    t39 = ((x165&(x166!=x167))%x168);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = -12559182LL;
	static int8_t x170 = -1;
	static int64_t x171 = INT64_MAX;
	uint8_t x172 = 1U;

    t40 = ((x169&(x170!=x171))%x172);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x173 = 12;
	static uint64_t x175 = UINT64_MAX;
	int16_t x176 = -1;
	volatile int32_t t41 = 15;

    t41 = ((x173&(x174!=x175))%x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x177 = 413385143782909191LL;
	int8_t x178 = INT8_MAX;
	volatile int16_t x179 = -5681;
	int16_t x180 = INT16_MIN;
	int64_t t42 = 462706558901LL;

    t42 = ((x177&(x178!=x179))%x180);

    if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x182 = INT16_MIN;
	uint8_t x183 = 27U;
	uint64_t x184 = 14362018243241LLU;

    t43 = ((x181&(x182!=x183))%x184);

    if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x185 = INT64_MAX;
	volatile int32_t x186 = INT32_MIN;
	volatile uint32_t x188 = UINT32_MAX;
	static volatile int64_t t44 = 1943LL;

    t44 = ((x185&(x186!=x187))%x188);

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x190 = 1U;
	volatile int8_t x191 = -30;
	int16_t x192 = -1;
	static int32_t t45 = -207266476;

    t45 = ((x189&(x190!=x191))%x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x194 = INT64_MIN;
	int16_t x195 = 6108;
	int8_t x196 = INT8_MAX;
	static int32_t t46 = 7643106;

    t46 = ((x193&(x194!=x195))%x196);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x197 = INT32_MAX;
	uint16_t x198 = 8157U;
	int16_t x199 = -1679;
	int8_t x200 = -1;
	volatile int32_t t47 = 88;

    t47 = ((x197&(x198!=x199))%x200);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x201 = 6948605676LLU;
	int32_t x202 = INT32_MIN;
	uint8_t x203 = UINT8_MAX;
	volatile uint64_t x204 = 2332578093409211285LLU;
	volatile uint64_t t48 = 1906525503593544LLU;

    t48 = ((x201&(x202!=x203))%x204);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x205 = 20740991LLU;
	static uint64_t x207 = 39LLU;
	uint64_t t49 = 116LLU;

    t49 = ((x205&(x206!=x207))%x208);

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x209 = 10;
	int8_t x210 = -52;
	int32_t x211 = INT32_MAX;
	volatile uint32_t x212 = 384429U;
	volatile uint32_t t50 = 370216U;

    t50 = ((x209&(x210!=x211))%x212);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x213 = -1LL;
	int16_t x214 = INT16_MIN;
	static volatile uint16_t x215 = 1094U;
	uint8_t x216 = 2U;
	volatile int64_t t51 = 96935924891141LL;

    t51 = ((x213&(x214!=x215))%x216);

    if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x217 = 53;
	int16_t x218 = -1;
	int8_t x219 = -1;
	int32_t t52 = 2846104;

    t52 = ((x217&(x218!=x219))%x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x222 = INT16_MIN;
	uint16_t x223 = UINT16_MAX;
	static uint64_t x224 = 246024423LLU;
	volatile uint64_t t53 = 59734283765922LLU;

    t53 = ((x221&(x222!=x223))%x224);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int64_t x227 = INT64_MAX;
	int32_t x228 = INT32_MIN;

    t54 = ((x225&(x226!=x227))%x228);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x229 = INT64_MIN;
	uint64_t x230 = 10800278LLU;
	uint64_t x231 = UINT64_MAX;
	int64_t t55 = -3317058515404344LL;

    t55 = ((x229&(x230!=x231))%x232);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x233 = 2U;
	static uint8_t x235 = 42U;
	int64_t x236 = INT64_MAX;
	volatile int64_t t56 = 0LL;

    t56 = ((x233&(x234!=x235))%x236);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x237 = -1LL;
	static uint64_t x238 = 903323775LLU;
	static volatile int64_t x240 = INT64_MAX;

    t57 = ((x237&(x238!=x239))%x240);

    if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x242 = INT32_MIN;
	int8_t x244 = 33;

    t58 = ((x241&(x242!=x243))%x244);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x245 = INT32_MIN;
	uint64_t x246 = 348LLU;
	int32_t x248 = -1;
	volatile int32_t t59 = 116121047;

    t59 = ((x245&(x246!=x247))%x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x250 = -1LL;
	volatile int32_t x251 = 1;
	int64_t x252 = INT64_MAX;
	volatile int64_t t60 = -12808LL;

    t60 = ((x249&(x250!=x251))%x252);

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x254 = 19U;
	static uint32_t x255 = 593U;

    t61 = ((x253&(x254!=x255))%x256);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x257 = 1;
	int64_t x258 = -33146581LL;
	uint8_t x259 = UINT8_MAX;
	int32_t x260 = INT32_MIN;
	int32_t t62 = 57140123;

    t62 = ((x257&(x258!=x259))%x260);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x265 = -73573128744587852LL;
	int16_t x266 = 1;
	volatile uint16_t x267 = 284U;
	int32_t x268 = INT32_MIN;
	static int64_t t63 = -24597LL;

    t63 = ((x265&(x266!=x267))%x268);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x270 = INT32_MIN;
	int16_t x271 = INT16_MAX;
	int8_t x272 = -4;

    t64 = ((x269&(x270!=x271))%x272);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x273 = UINT64_MAX;
	int64_t x274 = INT64_MIN;
	static uint64_t t65 = 123178675461LLU;

    t65 = ((x273&(x274!=x275))%x276);

    if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x277 = 37943357U;
	static uint8_t x278 = 124U;
	static int16_t x279 = 1;
	int8_t x280 = 45;

    t66 = ((x277&(x278!=x279))%x280);

    if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x283 = UINT64_MAX;
	uint16_t x284 = 1706U;
	int64_t t67 = 19118035LL;

    t67 = ((x281&(x282!=x283))%x284);

    if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x285 = 28935220034231656LLU;
	int64_t x286 = INT64_MAX;
	uint32_t x287 = 1603U;
	int8_t x288 = 46;
	uint64_t t68 = 83LLU;

    t68 = ((x285&(x286!=x287))%x288);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x290 = 28888332268611LLU;
	int8_t x291 = INT8_MIN;
	uint32_t x292 = 165U;
	uint32_t t69 = 13564U;

    t69 = ((x289&(x290!=x291))%x292);

    if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x293 = INT16_MIN;
	uint64_t x294 = 5750758014398232LLU;
	int64_t x295 = -56015LL;
	uint16_t x296 = 49U;
	int32_t t70 = -969821;

    t70 = ((x293&(x294!=x295))%x296);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x297 = INT16_MIN;
	static int8_t x299 = INT8_MAX;
	static int64_t x300 = INT64_MAX;
	volatile int64_t t71 = -581990796560LL;

    t71 = ((x297&(x298!=x299))%x300);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x302 = -1;
	int16_t x303 = INT16_MIN;
	int32_t x304 = -1;
	volatile int32_t t72 = -147;

    t72 = ((x301&(x302!=x303))%x304);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x305 = UINT16_MAX;
	uint64_t x306 = UINT64_MAX;
	int8_t x307 = INT8_MAX;
	volatile int16_t x308 = INT16_MAX;

    t73 = ((x305&(x306!=x307))%x308);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x309 = INT64_MIN;
	int16_t x310 = INT16_MAX;
	volatile uint8_t x311 = UINT8_MAX;
	volatile int32_t x312 = INT32_MAX;
	int64_t t74 = -3698707810950233991LL;

    t74 = ((x309&(x310!=x311))%x312);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x313 = INT32_MAX;
	int8_t x314 = INT8_MIN;
	uint32_t x315 = 2U;
	int64_t x316 = INT64_MAX;
	int64_t t75 = 589573772058476157LL;

    t75 = ((x313&(x314!=x315))%x316);

    if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x317 = INT64_MIN;
	volatile uint32_t x320 = 1U;
	static int64_t t76 = -11295699LL;

    t76 = ((x317&(x318!=x319))%x320);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x321 = UINT64_MAX;
	volatile uint64_t x323 = 16441183081428LLU;
	static int64_t x324 = INT64_MIN;
	volatile uint64_t t77 = 3598799321863378LLU;

    t77 = ((x321&(x322!=x323))%x324);

    if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x325 = INT8_MAX;
	volatile uint8_t x326 = UINT8_MAX;
	static int32_t x327 = INT32_MIN;
	int64_t x328 = INT64_MAX;
	static volatile int64_t t78 = 139578672LL;

    t78 = ((x325&(x326!=x327))%x328);

    if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x329 = INT8_MIN;
	static int64_t x330 = INT64_MAX;
	static uint8_t x331 = UINT8_MAX;
	uint64_t x332 = 6LLU;
	volatile uint64_t t79 = 888175LLU;

    t79 = ((x329&(x330!=x331))%x332);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x333 = -490079087;
	uint64_t x334 = UINT64_MAX;
	uint8_t x335 = 9U;
	volatile uint16_t x336 = UINT16_MAX;
	static int32_t t80 = -66929;

    t80 = ((x333&(x334!=x335))%x336);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x337 = UINT64_MAX;
	static uint16_t x338 = UINT16_MAX;
	uint8_t x339 = 27U;
	int8_t x340 = 1;
	static uint64_t t81 = 224531364303643LLU;

    t81 = ((x337&(x338!=x339))%x340);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x342 = 547726933243372LL;
	int16_t x343 = INT16_MIN;
	static volatile int16_t x344 = -137;
	static int64_t t82 = 60135192LL;

    t82 = ((x341&(x342!=x343))%x344);

    if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x345 = 1;
	int16_t x346 = INT16_MAX;
	volatile int64_t x347 = 97871552639703LL;
	uint16_t x348 = UINT16_MAX;
	int32_t t83 = 940386402;

    t83 = ((x345&(x346!=x347))%x348);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x350 = INT32_MAX;
	uint16_t x351 = 1327U;
	volatile uint64_t x352 = 160LLU;
	volatile uint64_t t84 = 376831305746LLU;

    t84 = ((x349&(x350!=x351))%x352);

    if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x353 = INT16_MAX;
	uint64_t x354 = 95184328333LLU;
	volatile uint8_t x355 = 31U;
	int8_t x356 = INT8_MIN;
	volatile int32_t t85 = 0;

    t85 = ((x353&(x354!=x355))%x356);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x358 = INT8_MIN;
	int8_t x359 = INT8_MAX;
	uint32_t x360 = UINT32_MAX;
	volatile uint32_t t86 = 6975421U;

    t86 = ((x357&(x358!=x359))%x360);

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x361 = INT32_MIN;
	int32_t x362 = 6355;
	volatile uint8_t x363 = 0U;
	int8_t x364 = INT8_MIN;
	int32_t t87 = 30970940;

    t87 = ((x361&(x362!=x363))%x364);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x365 = -1;
	volatile int8_t x367 = INT8_MIN;
	uint16_t x368 = 4756U;
	int32_t t88 = 0;

    t88 = ((x365&(x366!=x367))%x368);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x369 = -9946;
	volatile uint64_t x370 = 122155225399LLU;
	static int8_t x372 = INT8_MIN;

    t89 = ((x369&(x370!=x371))%x372);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x373 = 503624376538LLU;
	uint32_t x374 = 2U;
	int64_t x375 = -1705LL;
	volatile int8_t x376 = -1;

    t90 = ((x373&(x374!=x375))%x376);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x378 = -1;
	int8_t x379 = INT8_MIN;
	int32_t x380 = -1;
	volatile int32_t t91 = -1;

    t91 = ((x377&(x378!=x379))%x380);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x381 = INT32_MIN;
	static int32_t x382 = INT32_MAX;
	int32_t t92 = 987816;

    t92 = ((x381&(x382!=x383))%x384);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x386 = INT32_MIN;
	int16_t x387 = -1;
	volatile int32_t t93 = -18340;

    t93 = ((x385&(x386!=x387))%x388);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x389 = INT16_MIN;
	uint64_t x392 = 66LLU;
	static volatile uint64_t t94 = 47144985LLU;

    t94 = ((x389&(x390!=x391))%x392);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x394 = INT32_MIN;
	int16_t x395 = -1;
	static volatile uint32_t t95 = 90329U;

    t95 = ((x393&(x394!=x395))%x396);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x397 = INT32_MAX;
	int64_t x399 = -1LL;
	volatile int64_t x400 = -1LL;
	volatile int64_t t96 = -117821824LL;

    t96 = ((x397&(x398!=x399))%x400);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x401 = 477675327LLU;
	int8_t x402 = INT8_MIN;
	int8_t x404 = INT8_MAX;
	volatile uint64_t t97 = 720LLU;

    t97 = ((x401&(x402!=x403))%x404);

    if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x405 = UINT64_MAX;
	uint16_t x406 = 0U;
	int32_t x408 = INT32_MIN;
	static uint64_t t98 = 106826748960103LLU;

    t98 = ((x405&(x406!=x407))%x408);

    if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x409 = 3U;
	static int16_t x410 = INT16_MIN;
	int64_t x411 = 11173174374790165LL;
	static int16_t x412 = -1210;
	int32_t t99 = 1063349206;

    t99 = ((x409&(x410!=x411))%x412);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x413 = 20LL;
	int8_t x414 = -1;
	static int32_t x415 = -1;
	static uint16_t x416 = 46U;

    t100 = ((x413&(x414!=x415))%x416);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x418 = UINT32_MAX;
	int8_t x419 = -1;
	uint16_t x420 = 3571U;
	volatile int32_t t101 = 54;

    t101 = ((x417&(x418!=x419))%x420);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x422 = UINT16_MAX;
	uint64_t x423 = 1430LLU;
	static uint8_t x424 = 5U;
	int64_t t102 = 232712378278LL;

    t102 = ((x421&(x422!=x423))%x424);

    if (t102 != 1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x425 = -2268;
	volatile int8_t x426 = -1;

    t103 = ((x425&(x426!=x427))%x428);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x429 = INT16_MIN;
	int64_t x430 = INT64_MIN;
	uint16_t x431 = UINT16_MAX;
	static int16_t x432 = -1296;
	static int32_t t104 = 1;

    t104 = ((x429&(x430!=x431))%x432);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x433 = INT32_MAX;
	int32_t x434 = -1;
	static uint32_t x436 = 35U;
	volatile uint32_t t105 = 418U;

    t105 = ((x433&(x434!=x435))%x436);

    if (t105 != 1U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x437 = INT16_MAX;
	static int64_t x438 = -1LL;
	volatile int32_t t106 = -2893791;

    t106 = ((x437&(x438!=x439))%x440);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x441 = 23959589141921472LLU;
	uint64_t x442 = UINT64_MAX;
	static volatile int32_t x443 = INT32_MIN;
	uint64_t x444 = UINT64_MAX;
	uint64_t t107 = 5LLU;

    t107 = ((x441&(x442!=x443))%x444);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x445 = 5902551808592LLU;
	volatile uint64_t x447 = 137318172LLU;
	uint64_t t108 = 428660LLU;

    t108 = ((x445&(x446!=x447))%x448);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x449 = INT16_MIN;
	int32_t x450 = 210;
	int8_t x451 = -1;
	uint8_t x452 = UINT8_MAX;
	volatile int32_t t109 = 876;

    t109 = ((x449&(x450!=x451))%x452);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x453 = UINT32_MAX;
	static uint64_t x455 = UINT64_MAX;
	static uint64_t t110 = 840496440733LLU;

    t110 = ((x453&(x454!=x455))%x456);

    if (t110 != 1LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x457 = -21856;
	static int64_t x458 = INT64_MAX;
	uint64_t x459 = 15559172LLU;
	uint32_t x460 = 1724779897U;
	static volatile uint32_t t111 = 1591735U;

    t111 = ((x457&(x458!=x459))%x460);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x461 = 122U;
	static uint8_t x462 = 14U;
	int64_t x463 = -129301989300205LL;
	int32_t x464 = -56233466;
	static int32_t t112 = 356271;

    t112 = ((x461&(x462!=x463))%x464);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x465 = INT16_MAX;
	uint16_t x467 = 21808U;
	int16_t x468 = INT16_MIN;
	int32_t t113 = -3;

    t113 = ((x465&(x466!=x467))%x468);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x469 = UINT16_MAX;
	static int32_t x470 = -68;
	volatile int8_t x471 = INT8_MIN;
	static int8_t x472 = INT8_MAX;
	volatile int32_t t114 = -878806500;

    t114 = ((x469&(x470!=x471))%x472);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x473 = INT16_MAX;
	static int64_t x474 = -1LL;
	int64_t x476 = INT64_MAX;
	int64_t t115 = 38LL;

    t115 = ((x473&(x474!=x475))%x476);

    if (t115 != 1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x477 = UINT8_MAX;
	int16_t x479 = INT16_MAX;
	static uint64_t t116 = 89397308064326LLU;

    t116 = ((x477&(x478!=x479))%x480);

    if (t116 != 1LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x481 = INT8_MAX;
	int16_t x482 = -13029;
	int32_t x484 = -14270;

    t117 = ((x481&(x482!=x483))%x484);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x485 = -1;
	uint16_t x486 = 14U;
	volatile int16_t x487 = -637;
	static volatile int32_t t118 = 12228;

    t118 = ((x485&(x486!=x487))%x488);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x489 = INT64_MAX;
	static volatile uint32_t x491 = UINT32_MAX;
	static volatile uint64_t x492 = 1648LLU;
	static uint64_t t119 = 478540400090620033LLU;

    t119 = ((x489&(x490!=x491))%x492);

    if (t119 != 1LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x493 = INT8_MIN;
	static uint64_t x494 = UINT64_MAX;
	int32_t x495 = INT32_MIN;
	int64_t t120 = 160990195497142LL;

    t120 = ((x493&(x494!=x495))%x496);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x497 = INT32_MIN;
	int64_t x498 = 1216LL;
	int32_t x500 = -18306319;
	int32_t t121 = 22536;

    t121 = ((x497&(x498!=x499))%x500);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x501 = INT64_MIN;
	int16_t x503 = 189;
	int64_t x504 = -1LL;
	volatile int64_t t122 = 120813218LL;

    t122 = ((x501&(x502!=x503))%x504);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x505 = 48740869843995837LLU;
	static int8_t x506 = 31;
	int64_t x507 = INT64_MIN;
	volatile int16_t x508 = INT16_MIN;
	uint64_t t123 = 26957872335461LLU;

    t123 = ((x505&(x506!=x507))%x508);

    if (t123 != 1LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x509 = INT8_MAX;
	static int32_t x511 = INT32_MAX;
	volatile int32_t x512 = -1;
	volatile int32_t t124 = -13;

    t124 = ((x509&(x510!=x511))%x512);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x513 = -1LL;
	uint8_t x514 = 3U;
	int16_t x515 = INT16_MIN;
	int64_t x516 = 1LL;
	volatile int64_t t125 = 0LL;

    t125 = ((x513&(x514!=x515))%x516);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x517 = -1;
	static uint32_t x518 = 394U;
	int16_t x520 = -1;
	volatile int32_t t126 = 146709;

    t126 = ((x517&(x518!=x519))%x520);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x522 = -15692534179914149LL;
	int8_t x523 = INT8_MAX;
	int8_t x524 = -1;
	volatile int32_t t127 = 2070777;

    t127 = ((x521&(x522!=x523))%x524);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x525 = INT8_MAX;
	int16_t x526 = -10984;
	uint16_t x527 = 6U;
	int64_t x528 = INT64_MAX;

    t128 = ((x525&(x526!=x527))%x528);

    if (t128 != 1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x529 = INT64_MIN;
	int8_t x530 = -1;
	static uint32_t x531 = 245709600U;
	uint32_t x532 = UINT32_MAX;
	volatile int64_t t129 = 811561648976LL;

    t129 = ((x529&(x530!=x531))%x532);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x533 = -16927;
	uint32_t x535 = UINT32_MAX;
	volatile uint32_t t130 = 449086U;

    t130 = ((x533&(x534!=x535))%x536);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x537 = 50776931LLU;
	static int16_t x538 = -6429;
	int8_t x539 = 1;
	int64_t x540 = INT64_MIN;
	volatile uint64_t t131 = 1439731942LLU;

    t131 = ((x537&(x538!=x539))%x540);

    if (t131 != 1LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x541 = 43;
	int8_t x542 = 34;
	volatile int8_t x543 = -1;
	static uint64_t x544 = 117633245773267510LLU;
	volatile uint64_t t132 = 89467LLU;

    t132 = ((x541&(x542!=x543))%x544);

    if (t132 != 1LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x547 = -1;
	volatile int32_t t133 = 44311557;

    t133 = ((x545&(x546!=x547))%x548);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x550 = -1;
	static uint32_t x551 = 87333133U;
	int64_t x552 = INT64_MIN;
	static int64_t t134 = -394LL;

    t134 = ((x549&(x550!=x551))%x552);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x553 = UINT16_MAX;
	volatile int8_t x555 = 3;
	int8_t x556 = INT8_MIN;
	static volatile int32_t t135 = 31612;

    t135 = ((x553&(x554!=x555))%x556);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x557 = INT64_MAX;
	int16_t x558 = 0;
	volatile int16_t x559 = INT16_MAX;
	uint32_t x560 = 3U;
	int64_t t136 = 3346083726816261LL;

    t136 = ((x557&(x558!=x559))%x560);

    if (t136 != 1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x561 = UINT64_MAX;
	static int64_t x562 = INT64_MAX;
	uint32_t x563 = UINT32_MAX;
	static int16_t x564 = 8610;

    t137 = ((x561&(x562!=x563))%x564);

    if (t137 != 1LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x565 = -188;
	int32_t x566 = -910487891;
	static int32_t x567 = 0;
	int32_t x568 = -1;
	volatile int32_t t138 = 236307621;

    t138 = ((x565&(x566!=x567))%x568);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x569 = 1;
	volatile int16_t x570 = INT16_MAX;
	static int64_t x572 = -119LL;
	int64_t t139 = 1643476603770662LL;

    t139 = ((x569&(x570!=x571))%x572);

    if (t139 != 1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x573 = -1LL;
	static int16_t x574 = INT16_MAX;
	int16_t x576 = -989;
	int64_t t140 = 3484330727407LL;

    t140 = ((x573&(x574!=x575))%x576);

    if (t140 != 1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x577 = -1;
	int16_t x578 = INT16_MIN;
	int16_t x579 = INT16_MIN;
	int64_t x580 = INT64_MIN;
	int64_t t141 = 206288602854282LL;

    t141 = ((x577&(x578!=x579))%x580);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x581 = -1;
	int64_t x582 = INT64_MAX;
	int64_t x583 = -316149785209051010LL;
	int64_t x584 = INT64_MAX;
	static volatile int64_t t142 = -534838LL;

    t142 = ((x581&(x582!=x583))%x584);

    if (t142 != 1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x586 = 12U;
	static volatile int32_t x587 = INT32_MAX;
	volatile uint32_t x588 = UINT32_MAX;
	uint32_t t143 = 830039184U;

    t143 = ((x585&(x586!=x587))%x588);

    if (t143 != 1U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x589 = 1U;
	static int64_t x590 = -1LL;
	int64_t x591 = 0LL;

    t144 = ((x589&(x590!=x591))%x592);

    if (t144 != 1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x593 = INT32_MIN;
	int64_t x594 = -1LL;
	int8_t x595 = 0;
	uint16_t x596 = 2341U;
	static volatile int32_t t145 = 290673;

    t145 = ((x593&(x594!=x595))%x596);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x597 = -27;
	int64_t x598 = INT64_MIN;
	int32_t x600 = -1;
	volatile int32_t t146 = 6;

    t146 = ((x597&(x598!=x599))%x600);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x601 = 38U;
	uint16_t x602 = 10655U;
	static volatile uint8_t x603 = 7U;

    t147 = ((x601&(x602!=x603))%x604);

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x605 = INT8_MAX;
	static int64_t x606 = INT64_MAX;
	volatile int8_t x608 = -20;
	int32_t t148 = -2338739;

    t148 = ((x605&(x606!=x607))%x608);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x609 = 16;
	int64_t x610 = -1LL;
	volatile int64_t x611 = -1LL;
	int64_t x612 = -523795030502704LL;
	volatile int64_t t149 = 13225LL;

    t149 = ((x609&(x610!=x611))%x612);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x613 = INT16_MIN;
	static int64_t x614 = INT64_MIN;
	static int32_t x615 = -968343117;
	uint32_t x616 = 32226U;
	uint32_t t150 = 32391458U;

    t150 = ((x613&(x614!=x615))%x616);

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint16_t x617 = UINT16_MAX;
	uint16_t x618 = 6649U;
	int32_t x619 = INT32_MIN;
	static int8_t x620 = INT8_MAX;
	volatile int32_t t151 = 189839717;

    t151 = ((x617&(x618!=x619))%x620);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x622 = INT8_MAX;
	uint8_t x623 = 123U;
	int8_t x624 = INT8_MIN;

    t152 = ((x621&(x622!=x623))%x624);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x625 = -1;
	int32_t x626 = INT32_MIN;
	uint16_t x627 = UINT16_MAX;
	int32_t x628 = INT32_MAX;
	static int32_t t153 = 1147;

    t153 = ((x625&(x626!=x627))%x628);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x629 = -1LL;
	uint16_t x630 = 4U;
	static int16_t x631 = -1;
	int16_t x632 = INT16_MIN;
	int64_t t154 = -174871179809481LL;

    t154 = ((x629&(x630!=x631))%x632);

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x633 = 1;
	volatile int32_t t155 = 205696308;

    t155 = ((x633&(x634!=x635))%x636);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x637 = 6151770943433748063LLU;
	int8_t x638 = INT8_MIN;
	int8_t x639 = 0;
	uint64_t t156 = 537897628808LLU;

    t156 = ((x637&(x638!=x639))%x640);

    if (t156 != 1LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x642 = 2LL;
	int64_t x643 = 65626086LL;
	volatile int64_t x644 = -1LL;

    t157 = ((x641&(x642!=x643))%x644);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x646 = INT16_MIN;
	static volatile uint16_t x647 = UINT16_MAX;
	int64_t x648 = INT64_MAX;
	int64_t t158 = 999151110179927154LL;

    t158 = ((x645&(x646!=x647))%x648);

    if (t158 != 1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x649 = 1U;
	uint64_t x650 = 1554342494481585LLU;
	int32_t x651 = INT32_MIN;
	volatile int32_t t159 = -54;

    t159 = ((x649&(x650!=x651))%x652);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x654 = 1882;
	uint16_t x656 = 3699U;
	int32_t t160 = -165;

    t160 = ((x653&(x654!=x655))%x656);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x657 = UINT64_MAX;
	uint64_t x658 = 7984671142297514LLU;
	int8_t x659 = -7;
	int8_t x660 = INT8_MIN;
	uint64_t t161 = 13681047LLU;

    t161 = ((x657&(x658!=x659))%x660);

    if (t161 != 1LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x661 = 189;
	int64_t x662 = INT64_MIN;
	uint8_t x663 = 1U;
	static int32_t t162 = 0;

    t162 = ((x661&(x662!=x663))%x664);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x665 = -1LL;
	volatile uint64_t x666 = UINT64_MAX;
	uint8_t x667 = UINT8_MAX;
	uint32_t x668 = UINT32_MAX;
	int64_t t163 = 22115LL;

    t163 = ((x665&(x666!=x667))%x668);

    if (t163 != 1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x671 = UINT64_MAX;
	int16_t x672 = INT16_MIN;
	volatile int64_t t164 = -778136LL;

    t164 = ((x669&(x670!=x671))%x672);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x673 = INT64_MIN;
	int64_t x675 = -1LL;
	int8_t x676 = -2;
	int64_t t165 = 1549945297507234LL;

    t165 = ((x673&(x674!=x675))%x676);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x677 = INT8_MIN;
	volatile uint16_t x678 = 62U;
	int64_t x679 = INT64_MIN;
	static uint16_t x680 = 78U;
	volatile int32_t t166 = 15385;

    t166 = ((x677&(x678!=x679))%x680);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x682 = INT8_MAX;
	int8_t x683 = -1;
	uint8_t x684 = 7U;
	volatile int32_t t167 = -127015966;

    t167 = ((x681&(x682!=x683))%x684);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x685 = -1LL;
	int32_t x686 = INT32_MAX;
	static uint8_t x687 = 7U;
	uint8_t x688 = 50U;
	int64_t t168 = 2009140LL;

    t168 = ((x685&(x686!=x687))%x688);

    if (t168 != 1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x689 = UINT16_MAX;
	int8_t x690 = -1;
	static int32_t x692 = INT32_MIN;
	int32_t t169 = -8;

    t169 = ((x689&(x690!=x691))%x692);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x694 = 1061U;
	int8_t x695 = 3;
	static volatile int16_t x696 = INT16_MIN;
	volatile int64_t t170 = 665398727454223645LL;

    t170 = ((x693&(x694!=x695))%x696);

    if (t170 != 1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x697 = 120U;
	static int32_t x698 = INT32_MIN;
	int32_t x700 = INT32_MAX;
	volatile uint32_t t171 = 1U;

    t171 = ((x697&(x698!=x699))%x700);

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x701 = 3730187074568937LL;
	static volatile int16_t x702 = -1;
	int64_t t172 = -10372LL;

    t172 = ((x701&(x702!=x703))%x704);

    if (t172 != 1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x705 = 0;
	static volatile int8_t x706 = INT8_MAX;
	uint32_t x707 = 26940U;
	int64_t x708 = -1LL;

    t173 = ((x705&(x706!=x707))%x708);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x710 = 12U;
	int32_t x711 = INT32_MAX;
	volatile int16_t x712 = INT16_MIN;
	volatile int32_t t174 = -1;

    t174 = ((x709&(x710!=x711))%x712);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x713 = INT16_MIN;
	static volatile int32_t x714 = INT32_MIN;
	volatile int32_t x716 = -1;
	static volatile int32_t t175 = -2;

    t175 = ((x713&(x714!=x715))%x716);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x717 = -1;
	volatile int32_t x719 = 6868;
	int32_t t176 = 1;

    t176 = ((x717&(x718!=x719))%x720);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int16_t x722 = -1;
	int8_t x724 = INT8_MIN;
	volatile int32_t t177 = -36602;

    t177 = ((x721&(x722!=x723))%x724);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x725 = INT32_MAX;
	uint16_t x726 = 0U;
	int16_t x727 = -1;
	static uint32_t t178 = 820U;

    t178 = ((x725&(x726!=x727))%x728);

    if (t178 != 1U) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x732 = INT8_MIN;
	int32_t t179 = -14;

    t179 = ((x729&(x730!=x731))%x732);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x733 = INT32_MIN;
	uint64_t x734 = 56015LLU;
	static int64_t x735 = 2415900321LL;
	static int32_t t180 = 8503117;

    t180 = ((x733&(x734!=x735))%x736);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x737 = 92;
	int64_t x738 = INT64_MIN;
	static int32_t t181 = -57894;

    t181 = ((x737&(x738!=x739))%x740);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x741 = 46787063673LLU;
	uint64_t x742 = 6798909851156121LLU;
	uint64_t x743 = UINT64_MAX;
	uint32_t x744 = 5U;
	volatile uint64_t t182 = 35491242296689135LLU;

    t182 = ((x741&(x742!=x743))%x744);

    if (t182 != 1LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x745 = INT8_MIN;
	static int64_t x746 = 623706LL;
	static volatile uint32_t x748 = UINT32_MAX;
	uint32_t t183 = 426838072U;

    t183 = ((x745&(x746!=x747))%x748);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x749 = -1;
	volatile uint32_t x750 = UINT32_MAX;
	volatile uint16_t x751 = UINT16_MAX;
	int32_t t184 = -850;

    t184 = ((x749&(x750!=x751))%x752);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x753 = UINT64_MAX;
	int64_t x754 = -1LL;
	uint32_t x755 = UINT32_MAX;
	int8_t x756 = INT8_MIN;

    t185 = ((x753&(x754!=x755))%x756);

    if (t185 != 1LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x757 = INT8_MIN;
	volatile uint32_t x759 = UINT32_MAX;
	static uint32_t x760 = 320145U;
	volatile uint32_t t186 = 69687U;

    t186 = ((x757&(x758!=x759))%x760);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x761 = 589237;
	volatile int32_t x762 = INT32_MAX;
	static volatile int8_t x763 = -1;
	static int32_t x764 = 190;
	int32_t t187 = -58;

    t187 = ((x761&(x762!=x763))%x764);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x765 = INT8_MIN;
	int32_t x766 = -1;
	static int16_t x768 = -1846;

    t188 = ((x765&(x766!=x767))%x768);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x773 = 131564096U;
	static int64_t x774 = INT64_MIN;
	uint8_t x775 = UINT8_MAX;

    t189 = ((x773&(x774!=x775))%x776);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x777 = INT64_MIN;
	volatile int32_t x778 = -871999989;
	int8_t x779 = 3;
	static volatile int8_t x780 = INT8_MAX;
	int64_t t190 = -947212546280121940LL;

    t190 = ((x777&(x778!=x779))%x780);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x781 = INT64_MIN;
	volatile uint16_t x782 = 195U;
	int16_t x783 = INT16_MIN;

    t191 = ((x781&(x782!=x783))%x784);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x785 = 2414;
	static int32_t x786 = -1;
	int32_t x787 = INT32_MIN;
	static volatile int32_t x788 = -1;
	int32_t t192 = -586982;

    t192 = ((x785&(x786!=x787))%x788);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x793 = UINT16_MAX;
	uint16_t x795 = 81U;
	int8_t x796 = INT8_MIN;
	volatile int32_t t193 = -382150475;

    t193 = ((x793&(x794!=x795))%x796);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x797 = INT16_MIN;
	volatile int16_t x798 = INT16_MIN;
	uint32_t x799 = 6U;
	static volatile int64_t x800 = -1LL;
	volatile int64_t t194 = -10LL;

    t194 = ((x797&(x798!=x799))%x800);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x801 = INT16_MAX;
	int32_t x802 = -5054;
	uint16_t x803 = UINT16_MAX;
	static volatile uint64_t t195 = 4041387101LLU;

    t195 = ((x801&(x802!=x803))%x804);

    if (t195 != 1LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x805 = 694882042;
	uint32_t x807 = 94045U;
	int32_t x808 = INT32_MIN;
	volatile int32_t t196 = 1;

    t196 = ((x805&(x806!=x807))%x808);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x809 = -1;
	uint8_t x810 = 3U;
	uint64_t x811 = UINT64_MAX;
	int32_t x812 = -6393691;
	volatile int32_t t197 = 0;

    t197 = ((x809&(x810!=x811))%x812);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x813 = 23U;
	volatile int8_t x814 = INT8_MIN;
	int64_t x815 = -175518389676LL;
	int32_t x816 = 16;

    t198 = ((x813&(x814!=x815))%x816);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x817 = -1LL;
	volatile int32_t x818 = -213972;
	uint8_t x820 = 106U;
	volatile int64_t t199 = 34990LL;

    t199 = ((x817&(x818!=x819))%x820);

    if (t199 != 1LL) { NG(); } else { ; }
	
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

