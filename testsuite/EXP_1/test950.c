
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

static uint64_t x1 = UINT64_MAX;
int32_t x12 = INT32_MIN;
int32_t t2 = 275457;
int64_t x27 = 1568362708685747LL;
int8_t x31 = INT8_MIN;
volatile uint64_t t6 = 561329987046311LLU;
int64_t x34 = INT64_MIN;
static int64_t x40 = INT64_MAX;
uint16_t x46 = UINT16_MAX;
static uint16_t x49 = UINT16_MAX;
uint16_t x50 = 15U;
int32_t t11 = 96213292;
uint64_t x55 = 355809LLU;
uint64_t t12 = 10374052278865LLU;
uint64_t t13 = 46033009076386LLU;
int8_t x62 = -1;
static volatile int32_t t15 = -93;
static int32_t x73 = 35972312;
int16_t x76 = -4;
static uint8_t x80 = UINT8_MAX;
static int32_t t19 = 45928;
static uint8_t x90 = 1U;
int64_t t21 = -104149304362303293LL;
volatile int64_t x106 = INT64_MIN;
int64_t x108 = INT64_MIN;
int32_t x117 = INT32_MAX;
int16_t x124 = INT16_MAX;
int64_t x129 = INT64_MIN;
uint32_t t33 = 1574942850U;
int16_t x143 = -1;
uint32_t x144 = 1U;
int64_t t34 = -2851382LL;
static int64_t x151 = 2LL;
int64_t x153 = INT64_MIN;
int32_t t40 = -24;
volatile uint8_t x171 = 5U;
int32_t x172 = -187054530;
static int64_t x173 = 140459112669961LL;
uint16_t x175 = 94U;
static uint64_t x183 = UINT64_MAX;
int64_t x184 = INT64_MIN;
static int16_t x202 = INT16_MIN;
static int16_t x205 = -1;
int32_t t50 = 34538;
int64_t x220 = INT64_MIN;
int16_t x221 = 2668;
volatile int64_t x222 = INT64_MAX;
uint16_t x225 = UINT16_MAX;
static uint32_t x234 = UINT32_MAX;
int8_t x246 = INT8_MIN;
int16_t x248 = INT16_MIN;
static volatile int64_t x250 = 1LL;
static int64_t x252 = INT64_MIN;
uint64_t x260 = 3779646982855LLU;
uint64_t x261 = UINT64_MAX;
static uint64_t t65 = 2217LLU;
int32_t x271 = INT32_MIN;
int64_t x272 = -6200782179723LL;
static uint8_t x282 = UINT8_MAX;
volatile uint32_t t71 = 144U;
volatile int64_t t72 = -230216860804246267LL;
volatile int8_t x298 = INT8_MAX;
volatile int16_t x299 = 1523;
uint16_t x302 = 23998U;
int16_t x305 = 1;
int8_t x311 = 0;
int8_t x315 = 0;
int64_t x316 = -24711LL;
uint8_t x319 = 1U;
int8_t x325 = -15;
volatile uint32_t t80 = 3763U;
static int64_t x343 = INT64_MIN;
int8_t x346 = INT8_MIN;
volatile int16_t x348 = 10482;
static int64_t x350 = -1LL;
int64_t x366 = INT64_MIN;
int8_t x367 = INT8_MIN;
volatile int64_t x372 = INT64_MAX;
uint64_t x378 = UINT64_MAX;
uint64_t t91 = 31324328817LLU;
int64_t x381 = INT64_MIN;
int8_t x382 = -1;
static int64_t x383 = -4364866762714LL;
int8_t x388 = INT8_MIN;
static uint8_t x389 = UINT8_MAX;
uint16_t x390 = UINT16_MAX;
int64_t t94 = -318LL;
volatile int32_t t95 = -7;
static volatile int8_t x397 = INT8_MIN;
volatile int16_t x403 = INT16_MIN;
uint64_t x417 = UINT64_MAX;
static uint16_t x418 = UINT16_MAX;
volatile int16_t x419 = -1;
static uint64_t t101 = 27790LLU;
int16_t x422 = INT16_MIN;
static volatile int64_t t102 = -15884185084129279LL;
uint32_t x433 = 185953U;
uint16_t x434 = UINT16_MAX;
int32_t x439 = INT32_MIN;
int64_t t106 = -8486452795LL;
int64_t x450 = 13212LL;
uint64_t t109 = 12922864LLU;
uint32_t x461 = 102259687U;
static volatile uint8_t x462 = UINT8_MAX;
int8_t x463 = INT8_MAX;
uint32_t x467 = UINT32_MAX;
volatile uint32_t x469 = 17915372U;
static int64_t x472 = INT64_MAX;
int32_t x476 = INT32_MIN;
volatile uint64_t t116 = 862701714524135LLU;
uint8_t x484 = 1U;
int64_t x487 = INT64_MIN;
uint64_t x488 = UINT64_MAX;
int64_t x490 = -1LL;
int16_t x495 = INT16_MIN;
int8_t x498 = -1;
uint32_t x502 = UINT32_MAX;
int64_t x506 = 70669LL;
volatile int64_t t123 = 120063619230233854LL;
volatile int64_t x509 = INT64_MIN;
int8_t x522 = INT8_MIN;
static int64_t x524 = INT64_MIN;
int64_t x530 = -1LL;
static int8_t x531 = -22;
uint8_t x544 = 2U;
uint64_t t133 = 106221289215LLU;
volatile int32_t x559 = INT32_MIN;
static uint64_t x566 = UINT64_MAX;
volatile uint64_t t137 = 42964030LLU;
int32_t x572 = 391;
int64_t x574 = 806464583199417LL;
uint16_t x582 = 175U;
uint64_t t141 = 875LLU;
uint8_t x586 = UINT8_MAX;
static volatile int64_t x600 = -1LL;
static int64_t t145 = 34LL;
volatile uint64_t t146 = 550085636260LLU;
volatile uint64_t t147 = 289452384045043091LLU;
static volatile uint64_t t148 = 1737LLU;
volatile uint16_t x621 = 230U;
int8_t x623 = -47;
int64_t x628 = INT64_MIN;
static volatile int64_t t153 = 759938303487232LL;
int64_t x638 = INT64_MIN;
volatile int64_t t155 = -516680637089LL;
uint32_t x642 = 54480206U;
int8_t x648 = INT8_MIN;
int32_t x649 = 2285624;
static uint8_t x652 = 9U;
static uint64_t x657 = UINT64_MAX;
int16_t x662 = -1;
uint32_t x670 = UINT32_MAX;
int16_t x674 = 1;
int8_t x683 = INT8_MIN;
static volatile uint64_t x685 = UINT64_MAX;
int64_t x694 = INT64_MAX;
int64_t x697 = INT64_MIN;
uint16_t x703 = 15737U;
static uint32_t x709 = UINT32_MAX;
uint8_t x712 = 45U;
uint64_t t174 = 4LLU;
uint8_t x718 = UINT8_MAX;
int8_t x719 = -1;
int64_t x723 = 1644LL;
int32_t x724 = -23891;
volatile int64_t t176 = 9261194224111LL;
volatile uint64_t t179 = 10LLU;
int8_t x748 = -1;
volatile int32_t t182 = -40095;
volatile uint64_t t184 = 1591633745322LLU;
int64_t x764 = -1LL;
int64_t t185 = -189382872535585LL;
static int32_t x766 = -1;
uint64_t x775 = 28590395552233847LLU;
int32_t x777 = INT32_MAX;
int8_t x781 = INT8_MIN;
int32_t x794 = INT32_MIN;
int64_t x797 = -1LL;
int8_t x802 = -1;
uint64_t t195 = 0LLU;
int16_t x810 = -1;
volatile uint64_t t196 = 273108648307635LLU;
int64_t x814 = 774LL;
volatile int64_t t197 = 8475836027630LL;
int8_t x817 = -1;
int16_t x818 = INT16_MIN;
uint64_t x819 = 208072LLU;
static int64_t x822 = -16800883982103LL;
uint32_t x823 = 890367U;


void f0(void) {
    	static volatile int8_t x2 = INT8_MIN;
	int16_t x3 = INT16_MAX;
	volatile int32_t x4 = 15453;
	volatile uint64_t t0 = 328LLU;

    t0 = (((x1%x2)&x3)&x4);

    if (t0 != 93LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 1976U;
	int32_t x6 = INT32_MIN;
	static volatile int8_t x7 = INT8_MAX;
	int8_t x8 = INT8_MAX;
	int32_t t1 = 5755882;

    t1 = (((x5%x6)&x7)&x8);

    if (t1 != 56) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 3U;
	uint8_t x10 = 3U;
	int8_t x11 = INT8_MIN;

    t2 = (((x9%x10)&x11)&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -36929242724618090LL;
	uint8_t x14 = 20U;
	int64_t x15 = -1LL;
	int16_t x16 = 16152;
	static volatile int64_t t3 = -416832885406LL;

    t3 = (((x13%x14)&x15)&x16);

    if (t3 != 16144LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = UINT64_MAX;
	int8_t x22 = INT8_MIN;
	uint16_t x23 = UINT16_MAX;
	static volatile int8_t x24 = -1;
	static volatile uint64_t t4 = 1791166282536LLU;

    t4 = (((x21%x22)&x23)&x24);

    if (t4 != 127LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x25 = -1;
	int16_t x26 = -1;
	static volatile uint8_t x28 = 3U;
	volatile int64_t t5 = 85048008496LL;

    t5 = (((x25%x26)&x27)&x28);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x29 = 102396431238339LLU;
	static uint32_t x30 = UINT32_MAX;
	int32_t x32 = INT32_MAX;

    t6 = (((x29%x30)&x31)&x32);

    if (t6 != 115958144LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int8_t x33 = -1;
	int8_t x35 = INT8_MIN;
	static volatile uint8_t x36 = 111U;
	volatile int64_t t7 = -15415503767002368LL;

    t7 = (((x33%x34)&x35)&x36);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = UINT16_MAX;
	uint8_t x38 = UINT8_MAX;
	uint32_t x39 = 5915U;
	volatile int64_t t8 = -239095740515941LL;

    t8 = (((x37%x38)&x39)&x40);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x41 = 30U;
	int32_t x42 = INT32_MIN;
	int8_t x43 = 0;
	uint32_t x44 = 1501786U;
	volatile uint32_t t9 = 22U;

    t9 = (((x41%x42)&x43)&x44);

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x45 = -1;
	uint64_t x47 = 4814LLU;
	int8_t x48 = 1;
	volatile uint64_t t10 = 48931022807LLU;

    t10 = (((x45%x46)&x47)&x48);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x51 = INT32_MIN;
	static int32_t x52 = -1;

    t11 = (((x49%x50)&x51)&x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x53 = -487973LL;
	int16_t x54 = INT16_MIN;
	int16_t x56 = INT16_MIN;

    t12 = (((x53%x54)&x55)&x56);

    if (t12 != 327680LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MIN;
	int32_t x58 = 887108;
	uint64_t x59 = 25467212836208535LLU;
	int32_t x60 = INT32_MAX;

    t13 = (((x57%x58)&x59)&x60);

    if (t13 != 243603088LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = 127U;
	uint16_t x63 = UINT16_MAX;
	static int32_t x64 = INT32_MIN;
	volatile uint32_t t14 = 1038676U;

    t14 = (((x61%x62)&x63)&x64);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = INT32_MAX;
	int16_t x66 = -6030;
	uint8_t x67 = 127U;
	int16_t x68 = INT16_MIN;

    t15 = (((x65%x66)&x67)&x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = -6572;
	static int32_t x70 = -1;
	volatile int8_t x71 = INT8_MAX;
	uint16_t x72 = UINT16_MAX;
	int32_t t16 = -1;

    t16 = (((x69%x70)&x71)&x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x74 = -1;
	int64_t x75 = -1LL;
	volatile int64_t t17 = 3LL;

    t17 = (((x73%x74)&x75)&x76);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = -3982;
	int32_t x78 = INT32_MIN;
	static uint16_t x79 = 1978U;
	static int32_t t18 = -42581855;

    t18 = (((x77%x78)&x79)&x80);

    if (t18 != 50) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = -1;
	int8_t x82 = -1;
	int8_t x83 = INT8_MIN;
	int32_t x84 = -1;

    t19 = (((x81%x82)&x83)&x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = 975148408;
	int32_t x86 = 242;
	int8_t x87 = -1;
	uint64_t x88 = 10661852731007238LLU;
	volatile uint64_t t20 = 1383425562300LLU;

    t20 = (((x85%x86)&x87)&x88);

    if (t20 != 4LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = 90359397LL;
	volatile int8_t x91 = INT8_MIN;
	int8_t x92 = INT8_MAX;

    t21 = (((x89%x90)&x91)&x92);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = INT16_MIN;
	static int64_t x94 = -1240144748724738990LL;
	int8_t x95 = INT8_MAX;
	uint16_t x96 = UINT16_MAX;
	volatile int64_t t22 = -5757LL;

    t22 = (((x93%x94)&x95)&x96);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = -2;
	int32_t x98 = INT32_MIN;
	volatile int8_t x99 = INT8_MIN;
	int32_t x100 = INT32_MIN;
	int32_t t23 = INT32_MIN;

    t23 = (((x97%x98)&x99)&x100);

    if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = 2;
	static uint8_t x102 = 116U;
	int32_t x103 = -1;
	int32_t x104 = INT32_MIN;
	static int32_t t24 = -1961883;

    t24 = (((x101%x102)&x103)&x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = INT32_MAX;
	static int32_t x107 = INT32_MAX;
	static int64_t t25 = -17332LL;

    t25 = (((x105%x106)&x107)&x108);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x109 = -11;
	static int32_t x110 = -86960;
	uint16_t x111 = UINT16_MAX;
	uint32_t x112 = 18U;
	uint32_t t26 = 12U;

    t26 = (((x109%x110)&x111)&x112);

    if (t26 != 16U) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = 446009699;
	uint64_t x114 = 1130LLU;
	int8_t x115 = -21;
	int32_t x116 = -425869;
	volatile uint64_t t27 = 1072757952LLU;

    t27 = (((x113%x114)&x115)&x116);

    if (t27 != 35LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x118 = 206168375U;
	int16_t x119 = INT16_MAX;
	int16_t x120 = -242;
	static volatile uint32_t t28 = 6239U;

    t28 = (((x117%x118)&x119)&x120);

    if (t28 != 13064U) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x121 = UINT8_MAX;
	static int32_t x122 = -1;
	uint16_t x123 = UINT16_MAX;
	static int32_t t29 = 1;

    t29 = (((x121%x122)&x123)&x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = -1;
	uint32_t x126 = 53U;
	uint64_t x127 = 230LLU;
	uint16_t x128 = 2243U;
	uint64_t t30 = 297337LLU;

    t30 = (((x125%x126)&x127)&x128);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x130 = 5U;
	uint16_t x131 = 1279U;
	int8_t x132 = 0;
	volatile int64_t t31 = 9603LL;

    t31 = (((x129%x130)&x131)&x132);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x133 = 4981U;
	volatile uint8_t x134 = UINT8_MAX;
	int64_t x135 = -1LL;
	uint32_t x136 = UINT32_MAX;
	volatile int64_t t32 = -294297791948284509LL;

    t32 = (((x133%x134)&x135)&x136);

    if (t32 != 136LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x137 = UINT8_MAX;
	int8_t x138 = INT8_MAX;
	int32_t x139 = 1;
	volatile uint32_t x140 = UINT32_MAX;

    t33 = (((x137%x138)&x139)&x140);

    if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x141 = UINT16_MAX;
	int64_t x142 = INT64_MIN;

    t34 = (((x141%x142)&x143)&x144);

    if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = INT32_MIN;
	volatile int64_t x146 = INT64_MIN;
	static int32_t x147 = 0;
	int16_t x148 = INT16_MIN;
	int64_t t35 = 154LL;

    t35 = (((x145%x146)&x147)&x148);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x149 = -1;
	int16_t x150 = INT16_MIN;
	static int32_t x152 = INT32_MIN;
	int64_t t36 = -184600963971158LL;

    t36 = (((x149%x150)&x151)&x152);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x154 = 1;
	uint64_t x155 = UINT64_MAX;
	int16_t x156 = 74;
	uint64_t t37 = 4024451LLU;

    t37 = (((x153%x154)&x155)&x156);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x157 = 128121433LLU;
	int16_t x158 = -184;
	uint16_t x159 = 9U;
	uint32_t x160 = 37U;
	static uint64_t t38 = 12LLU;

    t38 = (((x157%x158)&x159)&x160);

    if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x161 = INT64_MIN;
	int32_t x162 = -15528149;
	static int64_t x163 = INT64_MIN;
	volatile int64_t x164 = -1LL;
	int64_t t39 = INT64_MIN;

    t39 = (((x161%x162)&x163)&x164);

    if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint8_t x165 = UINT8_MAX;
	int16_t x166 = INT16_MIN;
	volatile uint16_t x167 = 14842U;
	int16_t x168 = -1104;

    t40 = (((x165%x166)&x167)&x168);

    if (t40 != 176) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x169 = 521472860925LLU;
	int16_t x170 = INT16_MIN;
	volatile uint64_t t41 = 48LLU;

    t41 = (((x169%x170)&x171)&x172);

    if (t41 != 4LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x174 = 1391;
	int32_t x176 = INT32_MAX;
	volatile int64_t t42 = -2646499612894118LL;

    t42 = (((x173%x174)&x175)&x176);

    if (t42 != 70LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x177 = INT16_MIN;
	int32_t x178 = -488;
	static uint32_t x179 = 124U;
	int64_t x180 = INT64_MAX;
	int64_t t43 = 176686786LL;

    t43 = (((x177%x178)&x179)&x180);

    if (t43 != 56LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x181 = 550750;
	uint8_t x182 = 1U;
	static uint64_t t44 = 0LLU;

    t44 = (((x181%x182)&x183)&x184);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x185 = UINT32_MAX;
	uint64_t x186 = 5809127LLU;
	int64_t x187 = -129LL;
	int32_t x188 = INT32_MIN;
	static volatile uint64_t t45 = 46717507186849776LLU;

    t45 = (((x185%x186)&x187)&x188);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x189 = INT32_MIN;
	int32_t x190 = -1;
	static int16_t x191 = 359;
	uint32_t x192 = UINT32_MAX;
	uint32_t t46 = 93063U;

    t46 = (((x189%x190)&x191)&x192);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x193 = INT64_MAX;
	uint32_t x194 = 17185U;
	int16_t x195 = -1;
	int64_t x196 = INT64_MIN;
	volatile int64_t t47 = -36308711410129LL;

    t47 = (((x193%x194)&x195)&x196);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x197 = 24;
	uint8_t x198 = 1U;
	static int64_t x199 = INT64_MIN;
	int8_t x200 = INT8_MIN;
	static volatile int64_t t48 = -4548323035485333509LL;

    t48 = (((x197%x198)&x199)&x200);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x201 = -1;
	volatile uint8_t x203 = UINT8_MAX;
	int32_t x204 = 2;
	int32_t t49 = 9607742;

    t49 = (((x201%x202)&x203)&x204);

    if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x206 = -1;
	int8_t x207 = -3;
	volatile int16_t x208 = INT16_MAX;

    t50 = (((x205%x206)&x207)&x208);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x209 = INT64_MIN;
	volatile uint16_t x210 = 49U;
	volatile int8_t x211 = INT8_MAX;
	static int32_t x212 = 281;
	int64_t t51 = 412LL;

    t51 = (((x209%x210)&x211)&x212);

    if (t51 != 25LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = INT64_MIN;
	int8_t x214 = 1;
	static volatile uint64_t x215 = 12420253162LLU;
	uint16_t x216 = 0U;
	volatile uint64_t t52 = 15838166375788795LLU;

    t52 = (((x213%x214)&x215)&x216);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x217 = 1;
	int64_t x218 = INT64_MIN;
	static uint8_t x219 = UINT8_MAX;
	volatile int64_t t53 = 1LL;

    t53 = (((x217%x218)&x219)&x220);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x223 = 70U;
	int64_t x224 = INT64_MIN;
	int64_t t54 = -50025047192LL;

    t54 = (((x221%x222)&x223)&x224);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x226 = 5013;
	int32_t x227 = INT32_MIN;
	int32_t x228 = INT32_MIN;
	int32_t t55 = 27;

    t55 = (((x225%x226)&x227)&x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x229 = 2LLU;
	int64_t x230 = 99614LL;
	static uint8_t x231 = 0U;
	int64_t x232 = -3655940872LL;
	uint64_t t56 = 12222248735279LLU;

    t56 = (((x229%x230)&x231)&x232);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x233 = INT32_MAX;
	int8_t x235 = -1;
	static int32_t x236 = -1;
	volatile uint32_t t57 = 2U;

    t57 = (((x233%x234)&x235)&x236);

    if (t57 != 2147483647U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x237 = 14U;
	int16_t x238 = -1;
	int64_t x239 = INT64_MAX;
	int32_t x240 = INT32_MIN;
	int64_t t58 = 6855488LL;

    t58 = (((x237%x238)&x239)&x240);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x241 = 3188LLU;
	int32_t x242 = INT32_MIN;
	static volatile int8_t x243 = INT8_MAX;
	uint16_t x244 = UINT16_MAX;
	uint64_t t59 = 1916031945608739LLU;

    t59 = (((x241%x242)&x243)&x244);

    if (t59 != 116LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x245 = -113097890506LL;
	int16_t x247 = INT16_MIN;
	int64_t t60 = -25LL;

    t60 = (((x245%x246)&x247)&x248);

    if (t60 != -32768LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x249 = 30U;
	int8_t x251 = INT8_MIN;
	static int64_t t61 = -105941809414LL;

    t61 = (((x249%x250)&x251)&x252);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x253 = 152U;
	int8_t x254 = -27;
	static uint16_t x255 = 29U;
	int8_t x256 = 3;
	volatile int32_t t62 = -2;

    t62 = (((x253%x254)&x255)&x256);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x257 = INT16_MIN;
	int32_t x258 = INT32_MIN;
	int16_t x259 = INT16_MAX;
	volatile uint64_t t63 = 1815789915774352041LLU;

    t63 = (((x257%x258)&x259)&x260);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x262 = 94U;
	static int64_t x263 = INT64_MAX;
	static int16_t x264 = -1;
	uint64_t t64 = 24030LLU;

    t64 = (((x261%x262)&x263)&x264);

    if (t64 != 71LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x265 = 450U;
	uint64_t x266 = 111039885220467911LLU;
	int64_t x267 = INT64_MAX;
	int32_t x268 = INT32_MIN;

    t65 = (((x265%x266)&x267)&x268);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x269 = -1;
	static int64_t x270 = -1LL;
	int64_t t66 = 520389897989694571LL;

    t66 = (((x269%x270)&x271)&x272);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x273 = INT32_MAX;
	uint64_t x274 = 1001603316618LLU;
	int32_t x275 = INT32_MIN;
	int8_t x276 = INT8_MIN;
	volatile uint64_t t67 = 3442LLU;

    t67 = (((x273%x274)&x275)&x276);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x277 = -1;
	int32_t x278 = -1;
	uint16_t x279 = 3146U;
	uint32_t x280 = 1009U;
	static uint32_t t68 = 1246264142U;

    t68 = (((x277%x278)&x279)&x280);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x281 = INT8_MAX;
	int64_t x283 = 393468LL;
	uint16_t x284 = UINT16_MAX;
	int64_t t69 = 38111LL;

    t69 = (((x281%x282)&x283)&x284);

    if (t69 != 124LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x285 = 1;
	uint16_t x286 = 85U;
	volatile int32_t x287 = INT32_MIN;
	uint16_t x288 = 5U;
	static int32_t t70 = 6562;

    t70 = (((x285%x286)&x287)&x288);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x289 = UINT32_MAX;
	int32_t x290 = 1351257;
	static uint32_t x291 = UINT32_MAX;
	int8_t x292 = 0;

    t71 = (((x289%x290)&x291)&x292);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x293 = 54U;
	int64_t x294 = INT64_MAX;
	volatile int16_t x295 = -1;
	volatile uint32_t x296 = 0U;

    t72 = (((x293%x294)&x295)&x296);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x297 = INT8_MAX;
	int32_t x300 = INT32_MIN;
	volatile int32_t t73 = 3;

    t73 = (((x297%x298)&x299)&x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x301 = INT8_MIN;
	static volatile int32_t x303 = 476761;
	volatile uint64_t x304 = UINT64_MAX;
	uint64_t t74 = 3382758947LLU;

    t74 = (((x301%x302)&x303)&x304);

    if (t74 != 476672LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x306 = INT16_MAX;
	int8_t x307 = 0;
	volatile int8_t x308 = INT8_MAX;
	static int32_t t75 = 103;

    t75 = (((x305%x306)&x307)&x308);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x309 = UINT16_MAX;
	volatile int32_t x310 = INT32_MAX;
	int16_t x312 = INT16_MAX;
	static volatile int32_t t76 = -376;

    t76 = (((x309%x310)&x311)&x312);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x313 = 3894U;
	int16_t x314 = 30;
	volatile int64_t t77 = -1076LL;

    t77 = (((x313%x314)&x315)&x316);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x317 = 571668;
	int8_t x318 = INT8_MIN;
	int32_t x320 = INT32_MAX;
	static int32_t t78 = 1155508;

    t78 = (((x317%x318)&x319)&x320);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x321 = 479717U;
	int32_t x322 = INT32_MIN;
	int16_t x323 = INT16_MIN;
	int64_t x324 = INT64_MIN;
	volatile int64_t t79 = 179329216082034497LL;

    t79 = (((x321%x322)&x323)&x324);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x326 = 3U;
	int32_t x327 = INT32_MAX;
	uint32_t x328 = 27060U;

    t80 = (((x325%x326)&x327)&x328);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x329 = 903232961700873LLU;
	uint8_t x330 = 45U;
	uint8_t x331 = 7U;
	int8_t x332 = INT8_MIN;
	volatile uint64_t t81 = 25430LLU;

    t81 = (((x329%x330)&x331)&x332);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x337 = UINT16_MAX;
	volatile uint16_t x338 = 12110U;
	volatile int32_t x339 = INT32_MAX;
	int8_t x340 = INT8_MIN;
	static volatile int32_t t82 = 23;

    t82 = (((x337%x338)&x339)&x340);

    if (t82 != 4864) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x341 = 3708104LL;
	int16_t x342 = INT16_MIN;
	int16_t x344 = 8704;
	int64_t t83 = 1442LL;

    t83 = (((x341%x342)&x343)&x344);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x345 = 13U;
	int64_t x347 = 1LL;
	volatile int64_t t84 = 0LL;

    t84 = (((x345%x346)&x347)&x348);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x349 = UINT16_MAX;
	static int16_t x351 = INT16_MIN;
	uint16_t x352 = UINT16_MAX;
	int64_t t85 = 16LL;

    t85 = (((x349%x350)&x351)&x352);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x353 = 5LL;
	int64_t x354 = INT64_MIN;
	volatile uint32_t x355 = 305515U;
	uint64_t x356 = UINT64_MAX;
	uint64_t t86 = 344658736LLU;

    t86 = (((x353%x354)&x355)&x356);

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x357 = INT8_MAX;
	static volatile int8_t x358 = -1;
	int32_t x359 = -1;
	int8_t x360 = INT8_MIN;
	volatile int32_t t87 = 1836;

    t87 = (((x357%x358)&x359)&x360);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x361 = 216673605LLU;
	int32_t x362 = -1;
	int32_t x363 = INT32_MIN;
	uint8_t x364 = 2U;
	volatile uint64_t t88 = 14434287075878LLU;

    t88 = (((x361%x362)&x363)&x364);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x365 = INT64_MIN;
	int64_t x368 = -2LL;
	volatile int64_t t89 = 1LL;

    t89 = (((x365%x366)&x367)&x368);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x369 = INT64_MIN;
	int8_t x370 = INT8_MIN;
	uint8_t x371 = UINT8_MAX;
	static volatile int64_t t90 = 54634LL;

    t90 = (((x369%x370)&x371)&x372);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x377 = -1;
	int64_t x379 = 7443353105LL;
	int32_t x380 = -2869969;

    t91 = (((x377%x378)&x379)&x380);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x384 = 22U;
	volatile int64_t t92 = -106710402225868LL;

    t92 = (((x381%x382)&x383)&x384);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x385 = 848U;
	static int32_t x386 = INT32_MIN;
	uint8_t x387 = UINT8_MAX;
	volatile uint32_t t93 = 0U;

    t93 = (((x385%x386)&x387)&x388);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x391 = INT32_MAX;
	int64_t x392 = -1LL;

    t94 = (((x389%x390)&x391)&x392);

    if (t94 != 255LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x393 = 3U;
	static int8_t x394 = -1;
	int8_t x395 = INT8_MIN;
	uint16_t x396 = 50U;

    t95 = (((x393%x394)&x395)&x396);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x398 = 15664255;
	uint32_t x399 = UINT32_MAX;
	int16_t x400 = INT16_MIN;
	uint32_t t96 = 5091870U;

    t96 = (((x397%x398)&x399)&x400);

    if (t96 != 4294934528U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x401 = INT32_MIN;
	static int32_t x402 = INT32_MIN;
	volatile int16_t x404 = INT16_MIN;
	static int32_t t97 = -5971;

    t97 = (((x401%x402)&x403)&x404);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x405 = 135;
	volatile uint32_t x406 = 464753288U;
	static volatile int16_t x407 = -3322;
	volatile int64_t x408 = INT64_MIN;
	volatile int64_t t98 = -9462233LL;

    t98 = (((x405%x406)&x407)&x408);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x409 = INT16_MAX;
	static int64_t x410 = -1LL;
	int16_t x411 = -1;
	int16_t x412 = 14;
	int64_t t99 = 23977LL;

    t99 = (((x409%x410)&x411)&x412);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x413 = INT8_MAX;
	int32_t x414 = 492;
	int64_t x415 = 213209952109179LL;
	volatile uint16_t x416 = 401U;
	int64_t t100 = 184545LL;

    t100 = (((x413%x414)&x415)&x416);

    if (t100 != 17LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x420 = INT32_MIN;

    t101 = (((x417%x418)&x419)&x420);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x421 = 23U;
	int64_t x423 = INT64_MIN;
	uint32_t x424 = 26U;

    t102 = (((x421%x422)&x423)&x424);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x425 = -1;
	static uint32_t x426 = 111U;
	uint8_t x427 = 1U;
	uint32_t x428 = UINT32_MAX;
	static uint32_t t103 = 4339U;

    t103 = (((x425%x426)&x427)&x428);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x429 = 41299315U;
	int64_t x430 = 433608002775887960LL;
	uint32_t x431 = UINT32_MAX;
	int64_t x432 = INT64_MAX;
	static int64_t t104 = 0LL;

    t104 = (((x429%x430)&x431)&x432);

    if (t104 != 41299315LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x435 = INT16_MIN;
	int8_t x436 = INT8_MIN;
	static volatile uint32_t t105 = 5U;

    t105 = (((x433%x434)&x435)&x436);

    if (t105 != 32768U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x437 = INT8_MIN;
	static int64_t x438 = -1LL;
	int64_t x440 = INT64_MIN;

    t106 = (((x437%x438)&x439)&x440);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint8_t x441 = 3U;
	int16_t x442 = INT16_MIN;
	int32_t x443 = INT32_MIN;
	int16_t x444 = INT16_MAX;
	volatile int32_t t107 = -984411133;

    t107 = (((x441%x442)&x443)&x444);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x445 = -1LL;
	volatile int8_t x446 = -1;
	uint8_t x447 = 33U;
	int64_t x448 = 169444920LL;
	volatile int64_t t108 = -322201697LL;

    t108 = (((x445%x446)&x447)&x448);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x449 = 24LLU;
	static int64_t x451 = INT64_MIN;
	volatile uint32_t x452 = UINT32_MAX;

    t109 = (((x449%x450)&x451)&x452);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x453 = INT16_MIN;
	static int64_t x454 = INT64_MIN;
	uint8_t x455 = UINT8_MAX;
	static uint64_t x456 = 16087497LLU;
	static volatile uint64_t t110 = 62996LLU;

    t110 = (((x453%x454)&x455)&x456);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x457 = INT64_MIN;
	uint16_t x458 = UINT16_MAX;
	volatile int8_t x459 = INT8_MIN;
	uint64_t x460 = UINT64_MAX;
	static uint64_t t111 = 11366LLU;

    t111 = (((x457%x458)&x459)&x460);

    if (t111 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x464 = 4U;
	static volatile uint32_t t112 = 1992641079U;

    t112 = (((x461%x462)&x463)&x464);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x465 = 1U;
	int8_t x466 = -1;
	uint64_t x468 = 14LLU;
	uint64_t t113 = 1LLU;

    t113 = (((x465%x466)&x467)&x468);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x470 = INT16_MAX;
	volatile int8_t x471 = -8;
	volatile int64_t t114 = 225LL;

    t114 = (((x469%x470)&x471)&x472);

    if (t114 != 24584LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x473 = INT32_MAX;
	volatile int64_t x474 = INT64_MIN;
	static volatile uint64_t x475 = 25014349LLU;
	volatile uint64_t t115 = 2146653500432LLU;

    t115 = (((x473%x474)&x475)&x476);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x477 = 3;
	int16_t x478 = -5;
	volatile uint64_t x479 = UINT64_MAX;
	int8_t x480 = INT8_MIN;

    t116 = (((x477%x478)&x479)&x480);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x481 = -2;
	volatile int64_t x482 = -8277209449LL;
	static volatile uint32_t x483 = 1U;
	int64_t t117 = 1618731LL;

    t117 = (((x481%x482)&x483)&x484);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x485 = INT64_MIN;
	static int64_t x486 = INT64_MIN;
	volatile uint64_t t118 = 14294054149335844LLU;

    t118 = (((x485%x486)&x487)&x488);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x489 = 187;
	uint8_t x491 = 1U;
	uint16_t x492 = 1U;
	static int64_t t119 = 982LL;

    t119 = (((x489%x490)&x491)&x492);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int32_t x493 = -1;
	int8_t x494 = -14;
	int8_t x496 = INT8_MIN;
	volatile int32_t t120 = -76025007;

    t120 = (((x493%x494)&x495)&x496);

    if (t120 != -32768) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x497 = INT64_MIN;
	uint16_t x499 = 40U;
	int8_t x500 = -7;
	volatile int64_t t121 = 56196009954LL;

    t121 = (((x497%x498)&x499)&x500);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x501 = -1LL;
	int64_t x503 = INT64_MIN;
	volatile int16_t x504 = 165;
	volatile int64_t t122 = -2281422852570033LL;

    t122 = (((x501%x502)&x503)&x504);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x505 = INT8_MIN;
	volatile uint16_t x507 = UINT16_MAX;
	volatile int16_t x508 = -2;

    t123 = (((x505%x506)&x507)&x508);

    if (t123 != 65408LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x510 = -1;
	int32_t x511 = -58487654;
	uint32_t x512 = 14U;
	int64_t t124 = 4847556634201LL;

    t124 = (((x509%x510)&x511)&x512);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x513 = -1;
	static int16_t x514 = INT16_MIN;
	static uint8_t x515 = 0U;
	uint32_t x516 = UINT32_MAX;
	volatile uint32_t t125 = 1702U;

    t125 = (((x513%x514)&x515)&x516);

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x517 = INT16_MAX;
	uint32_t x518 = 268168889U;
	uint64_t x519 = 4692826LLU;
	uint16_t x520 = UINT16_MAX;
	uint64_t t126 = 237746398545524LLU;

    t126 = (((x517%x518)&x519)&x520);

    if (t126 != 7002LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x521 = INT8_MAX;
	int8_t x523 = -1;
	volatile int64_t t127 = 60826377953423LL;

    t127 = (((x521%x522)&x523)&x524);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x525 = -1LL;
	static volatile int16_t x526 = -1694;
	volatile int64_t x527 = INT64_MIN;
	int16_t x528 = -21;
	int64_t t128 = INT64_MIN;

    t128 = (((x525%x526)&x527)&x528);

    if (t128 != INT64_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x529 = 2275020;
	volatile uint8_t x532 = UINT8_MAX;
	int64_t t129 = 11LL;

    t129 = (((x529%x530)&x531)&x532);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x533 = 62342489204590001LLU;
	int8_t x534 = INT8_MAX;
	volatile uint64_t x535 = 1061700074LLU;
	int16_t x536 = -2;
	static volatile uint64_t t130 = 870568441441845231LLU;

    t130 = (((x533%x534)&x535)&x536);

    if (t130 != 10LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x537 = INT8_MAX;
	uint32_t x538 = 675U;
	volatile int8_t x539 = -11;
	static uint32_t x540 = UINT32_MAX;
	volatile uint32_t t131 = 4301157U;

    t131 = (((x537%x538)&x539)&x540);

    if (t131 != 117U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x541 = INT32_MAX;
	int32_t x542 = 84210689;
	volatile int32_t x543 = 1;
	int32_t t132 = 4485239;

    t132 = (((x541%x542)&x543)&x544);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x549 = UINT64_MAX;
	int64_t x550 = -3500444103276083028LL;
	uint64_t x551 = 415LLU;
	static int64_t x552 = -26564121278888LL;

    t133 = (((x549%x550)&x551)&x552);

    if (t133 != 16LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x553 = UINT64_MAX;
	volatile int16_t x554 = INT16_MAX;
	int32_t x555 = INT32_MIN;
	volatile uint16_t x556 = UINT16_MAX;
	volatile uint64_t t134 = 7075858LLU;

    t134 = (((x553%x554)&x555)&x556);

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x557 = 127U;
	static uint16_t x558 = UINT16_MAX;
	int64_t x560 = INT64_MAX;
	static volatile int64_t t135 = -1LL;

    t135 = (((x557%x558)&x559)&x560);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x561 = 4233;
	int8_t x562 = -1;
	uint64_t x563 = 16346LLU;
	volatile int8_t x564 = 7;
	uint64_t t136 = 50878644142LLU;

    t136 = (((x561%x562)&x563)&x564);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x565 = 1192342532191023347LLU;
	int16_t x567 = INT16_MIN;
	static int8_t x568 = -1;

    t137 = (((x565%x566)&x567)&x568);

    if (t137 != 1192342532190994432LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x569 = 177514U;
	int32_t x570 = 62665;
	volatile uint16_t x571 = 0U;
	volatile uint32_t t138 = 162625U;

    t138 = (((x569%x570)&x571)&x572);

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x573 = 21;
	int16_t x575 = -60;
	int16_t x576 = -1;
	int64_t t139 = 31301LL;

    t139 = (((x573%x574)&x575)&x576);

    if (t139 != 4LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x577 = 199342U;
	uint16_t x578 = UINT16_MAX;
	int16_t x579 = -7959;
	volatile int8_t x580 = INT8_MIN;
	volatile uint32_t t140 = 2049U;

    t140 = (((x577%x578)&x579)&x580);

    if (t140 != 128U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x581 = UINT64_MAX;
	volatile uint32_t x583 = UINT32_MAX;
	int32_t x584 = INT32_MAX;

    t141 = (((x581%x582)&x583)&x584);

    if (t141 != 15LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x585 = -582482537LL;
	int16_t x587 = INT16_MIN;
	static int32_t x588 = INT32_MAX;
	int64_t t142 = 3234826468014LL;

    t142 = (((x585%x586)&x587)&x588);

    if (t142 != 2147450880LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x589 = UINT16_MAX;
	int16_t x590 = -28;
	int32_t x591 = INT32_MIN;
	int32_t x592 = 266;
	int32_t t143 = 1854388;

    t143 = (((x589%x590)&x591)&x592);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x593 = INT32_MIN;
	static uint16_t x594 = UINT16_MAX;
	volatile uint16_t x595 = 4U;
	int64_t x596 = INT64_MIN;
	int64_t t144 = -4090565540498155LL;

    t144 = (((x593%x594)&x595)&x596);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x597 = INT32_MIN;
	volatile int8_t x598 = INT8_MIN;
	volatile int32_t x599 = -12;

    t145 = (((x597%x598)&x599)&x600);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x601 = INT64_MIN;
	uint64_t x602 = UINT64_MAX;
	static int64_t x603 = 45180LL;
	int8_t x604 = -1;

    t146 = (((x601%x602)&x603)&x604);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x605 = UINT32_MAX;
	static volatile int16_t x606 = INT16_MIN;
	int32_t x607 = -1058;
	uint64_t x608 = 448067911LLU;

    t147 = (((x605%x606)&x607)&x608);

    if (t147 != 31046LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x609 = INT16_MIN;
	uint64_t x610 = 23849797636429LLU;
	int16_t x611 = -113;
	int8_t x612 = INT8_MAX;

    t148 = (((x609%x610)&x611)&x612);

    if (t148 != 10LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x613 = 23U;
	int8_t x614 = -1;
	volatile uint16_t x615 = UINT16_MAX;
	int16_t x616 = INT16_MAX;
	static int32_t t149 = 127090;

    t149 = (((x613%x614)&x615)&x616);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x617 = 67720586369271LLU;
	uint32_t x618 = 911618U;
	volatile uint64_t x619 = UINT64_MAX;
	volatile uint8_t x620 = UINT8_MAX;
	volatile uint64_t t150 = 172LLU;

    t150 = (((x617%x618)&x619)&x620);

    if (t150 != 119LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x622 = -6888LL;
	static uint8_t x624 = 6U;
	volatile int64_t t151 = 21LL;

    t151 = (((x621%x622)&x623)&x624);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x625 = INT16_MAX;
	int8_t x626 = 1;
	static int16_t x627 = -1;
	volatile int64_t t152 = -14715208126360872LL;

    t152 = (((x625%x626)&x627)&x628);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x629 = INT16_MAX;
	int64_t x630 = -1LL;
	volatile int8_t x631 = INT8_MIN;
	int16_t x632 = INT16_MIN;

    t153 = (((x629%x630)&x631)&x632);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x633 = 2450U;
	volatile uint16_t x634 = 219U;
	uint32_t x635 = 0U;
	int64_t x636 = -357639895LL;
	static int64_t t154 = 3214130541794938LL;

    t154 = (((x633%x634)&x635)&x636);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x637 = 439LL;
	static uint32_t x639 = 425433104U;
	int64_t x640 = INT64_MIN;

    t155 = (((x637%x638)&x639)&x640);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x641 = INT8_MIN;
	int64_t x643 = -932LL;
	static volatile uint32_t x644 = UINT32_MAX;
	volatile int64_t t156 = 3732943LL;

    t156 = (((x641%x642)&x643)&x644);

    if (t156 != 45510684LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x645 = -1;
	volatile int16_t x646 = -5;
	uint32_t x647 = UINT32_MAX;
	uint32_t t157 = 80977049U;

    t157 = (((x645%x646)&x647)&x648);

    if (t157 != 4294967168U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x650 = INT32_MIN;
	static int64_t x651 = INT64_MIN;
	volatile int64_t t158 = 3881401538LL;

    t158 = (((x649%x650)&x651)&x652);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int16_t x653 = -1;
	uint8_t x654 = 6U;
	uint8_t x655 = 30U;
	int16_t x656 = -1;
	int32_t t159 = 4695;

    t159 = (((x653%x654)&x655)&x656);

    if (t159 != 30) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x658 = -1;
	uint8_t x659 = 2U;
	uint16_t x660 = UINT16_MAX;
	uint64_t t160 = 2120656546488550953LLU;

    t160 = (((x657%x658)&x659)&x660);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x661 = INT64_MIN;
	static int32_t x663 = 524654511;
	uint32_t x664 = UINT32_MAX;
	int64_t t161 = -42752206222LL;

    t161 = (((x661%x662)&x663)&x664);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x665 = -1;
	uint64_t x666 = UINT64_MAX;
	int16_t x667 = INT16_MIN;
	int8_t x668 = 0;
	volatile uint64_t t162 = 59190415815LLU;

    t162 = (((x665%x666)&x667)&x668);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x669 = 246440885362343LLU;
	static int64_t x671 = INT64_MIN;
	uint16_t x672 = 105U;
	volatile uint64_t t163 = 2018229267021115818LLU;

    t163 = (((x669%x670)&x671)&x672);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x673 = 5U;
	int16_t x675 = INT16_MIN;
	static volatile uint16_t x676 = 10U;
	uint32_t t164 = 7U;

    t164 = (((x673%x674)&x675)&x676);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x677 = INT32_MIN;
	uint64_t x678 = UINT64_MAX;
	uint32_t x679 = UINT32_MAX;
	int16_t x680 = INT16_MIN;
	volatile uint64_t t165 = 10LLU;

    t165 = (((x677%x678)&x679)&x680);

    if (t165 != 2147483648LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x681 = INT16_MIN;
	volatile int8_t x682 = 2;
	volatile int16_t x684 = -1;
	volatile int32_t t166 = 112753;

    t166 = (((x681%x682)&x683)&x684);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x686 = -1;
	uint16_t x687 = UINT16_MAX;
	static uint16_t x688 = 883U;
	volatile uint64_t t167 = 2424496708875LLU;

    t167 = (((x685%x686)&x687)&x688);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x689 = -252398;
	int32_t x690 = -1;
	int8_t x691 = 31;
	int64_t x692 = 1425380247139647LL;
	volatile int64_t t168 = -848881819LL;

    t168 = (((x689%x690)&x691)&x692);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x693 = UINT64_MAX;
	uint16_t x695 = 26922U;
	uint16_t x696 = UINT16_MAX;
	volatile uint64_t t169 = 439145564LLU;

    t169 = (((x693%x694)&x695)&x696);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x698 = INT16_MIN;
	uint32_t x699 = UINT32_MAX;
	uint8_t x700 = 42U;
	int64_t t170 = 220769964487070826LL;

    t170 = (((x697%x698)&x699)&x700);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x701 = UINT16_MAX;
	volatile int16_t x702 = -8;
	int16_t x704 = -92;
	volatile int32_t t171 = -6694888;

    t171 = (((x701%x702)&x703)&x704);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x705 = 62U;
	int16_t x706 = -1;
	uint64_t x707 = 117122LLU;
	static int8_t x708 = INT8_MIN;
	static volatile uint64_t t172 = 790122985LLU;

    t172 = (((x705%x706)&x707)&x708);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x710 = -1;
	int64_t x711 = -1LL;
	volatile int64_t t173 = 280444719818856157LL;

    t173 = (((x709%x710)&x711)&x712);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x713 = UINT64_MAX;
	uint16_t x714 = UINT16_MAX;
	static int32_t x715 = -2;
	int32_t x716 = -8268;

    t174 = (((x713%x714)&x715)&x716);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x717 = INT32_MIN;
	volatile int64_t x720 = -1LL;
	volatile int64_t t175 = 718LL;

    t175 = (((x717%x718)&x719)&x720);

    if (t175 != -128LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x721 = INT64_MIN;
	int64_t x722 = -1LL;

    t176 = (((x721%x722)&x723)&x724);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x725 = 7298U;
	int16_t x726 = 10991;
	volatile int32_t x727 = INT32_MAX;
	static int16_t x728 = 3;
	volatile uint32_t t177 = 1865U;

    t177 = (((x725%x726)&x727)&x728);

    if (t177 != 2U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x729 = 939U;
	uint64_t x730 = UINT64_MAX;
	static uint64_t x731 = UINT64_MAX;
	uint8_t x732 = 0U;
	volatile uint64_t t178 = 27LLU;

    t178 = (((x729%x730)&x731)&x732);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x733 = INT64_MAX;
	volatile int8_t x734 = INT8_MIN;
	uint64_t x735 = UINT64_MAX;
	int8_t x736 = INT8_MAX;

    t179 = (((x733%x734)&x735)&x736);

    if (t179 != 127LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x737 = INT32_MIN;
	volatile uint32_t x738 = 34U;
	volatile uint32_t x739 = 205136063U;
	uint16_t x740 = UINT16_MAX;
	uint32_t t180 = 35U;

    t180 = (((x737%x738)&x739)&x740);

    if (t180 != 26U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x741 = 0U;
	static int8_t x742 = -1;
	volatile int32_t x743 = INT32_MIN;
	static int64_t x744 = INT64_MIN;
	volatile int64_t t181 = -1204LL;

    t181 = (((x741%x742)&x743)&x744);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x745 = 91U;
	int8_t x746 = INT8_MAX;
	int32_t x747 = INT32_MIN;

    t182 = (((x745%x746)&x747)&x748);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x749 = INT8_MIN;
	uint8_t x750 = 1U;
	uint8_t x751 = 121U;
	uint32_t x752 = 101604445U;
	static uint32_t t183 = 268250U;

    t183 = (((x749%x750)&x751)&x752);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x753 = INT16_MIN;
	uint64_t x754 = 151150674118585LLU;
	int8_t x755 = INT8_MIN;
	int8_t x756 = INT8_MIN;

    t184 = (((x753%x754)&x755)&x756);

    if (t184 != 13502929168256LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int16_t x761 = -1;
	static int32_t x762 = -1;
	static volatile int32_t x763 = -1;

    t185 = (((x761%x762)&x763)&x764);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x765 = 4;
	static uint64_t x767 = 34442756LLU;
	int8_t x768 = INT8_MIN;
	uint64_t t186 = 1951553509852LLU;

    t186 = (((x765%x766)&x767)&x768);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x769 = 488;
	int16_t x770 = INT16_MAX;
	int16_t x771 = INT16_MIN;
	uint16_t x772 = UINT16_MAX;
	int32_t t187 = -825760496;

    t187 = (((x769%x770)&x771)&x772);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x773 = INT32_MIN;
	uint64_t x774 = UINT64_MAX;
	int32_t x776 = -45344;
	uint64_t t188 = 119261248088043LLU;

    t188 = (((x773%x774)&x775)&x776);

    if (t188 != 28590394698629120LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x778 = INT64_MAX;
	uint8_t x779 = 6U;
	uint8_t x780 = UINT8_MAX;
	int64_t t189 = 97849885073LL;

    t189 = (((x777%x778)&x779)&x780);

    if (t189 != 6LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x782 = INT32_MIN;
	int16_t x783 = INT16_MIN;
	uint16_t x784 = 23248U;
	volatile int32_t t190 = 857862;

    t190 = (((x781%x782)&x783)&x784);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x785 = INT32_MIN;
	uint8_t x786 = 3U;
	int8_t x787 = -1;
	uint64_t x788 = 3721524170845LLU;
	uint64_t t191 = 12164LLU;

    t191 = (((x785%x786)&x787)&x788);

    if (t191 != 3721524170844LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x789 = -1;
	int8_t x790 = -1;
	static int32_t x791 = -10312;
	volatile int16_t x792 = INT16_MAX;
	volatile int32_t t192 = 146;

    t192 = (((x789%x790)&x791)&x792);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x793 = 963956356275592434LLU;
	int16_t x795 = INT16_MAX;
	int16_t x796 = INT16_MIN;
	uint64_t t193 = 2826LLU;

    t193 = (((x793%x794)&x795)&x796);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x798 = UINT64_MAX;
	int16_t x799 = -406;
	int16_t x800 = INT16_MIN;
	uint64_t t194 = 21605LLU;

    t194 = (((x797%x798)&x799)&x800);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x801 = INT32_MIN;
	int16_t x803 = INT16_MIN;
	uint64_t x804 = 6437545LLU;

    t195 = (((x801%x802)&x803)&x804);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int64_t x809 = INT64_MAX;
	int64_t x811 = -1LL;
	uint64_t x812 = 699856589465LLU;

    t196 = (((x809%x810)&x811)&x812);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x813 = 15440U;
	int32_t x815 = 12;
	int64_t x816 = -80793LL;

    t197 = (((x813%x814)&x815)&x816);

    if (t197 != 4LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x820 = -1LL;
	uint64_t t198 = 1014090807269395LLU;

    t198 = (((x817%x818)&x819)&x820);

    if (t198 != 208072LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint32_t x821 = 4087U;
	uint32_t x824 = UINT32_MAX;
	int64_t t199 = 9706LL;

    t199 = (((x821%x822)&x823)&x824);

    if (t199 != 1527LL) { NG(); } else { ; }
	
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

