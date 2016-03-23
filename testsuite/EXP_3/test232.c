
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

int16_t x2 = -1;
uint64_t x4 = 333339566781740LLU;
volatile uint64_t x15 = UINT64_MAX;
uint16_t x19 = 3U;
int32_t t3 = -40;
volatile int32_t t4 = 164194582;
int32_t t5 = -24;
int8_t x33 = INT8_MIN;
volatile int16_t x40 = 15;
int8_t x47 = INT8_MIN;
static int32_t x58 = -1;
int8_t x59 = -1;
int32_t t10 = 1987040;
volatile uint32_t x76 = UINT32_MAX;
int32_t t13 = -703799211;
int32_t x94 = -1534696;
int8_t x95 = INT8_MIN;
int16_t x100 = INT16_MAX;
static int8_t x108 = INT8_MIN;
volatile int32_t t18 = 381993778;
uint32_t x116 = 452460U;
int8_t x118 = INT8_MIN;
int16_t x119 = INT16_MAX;
int32_t x127 = INT32_MIN;
static int64_t x128 = -72252678LL;
static uint64_t x148 = UINT64_MAX;
uint8_t x149 = UINT8_MAX;
static int64_t x151 = 204510LL;
int8_t x179 = INT8_MIN;
volatile int64_t x180 = -882928LL;
uint32_t x181 = UINT32_MAX;
int16_t x182 = INT16_MIN;
int32_t x183 = -44911070;
volatile int32_t x186 = INT32_MIN;
int8_t x188 = -12;
int16_t x192 = INT16_MIN;
volatile int32_t t31 = 442696;
static volatile uint8_t x197 = 0U;
static uint16_t x199 = 1U;
volatile int32_t t36 = 5685;
uint16_t x217 = UINT16_MAX;
volatile uint8_t x224 = 10U;
static volatile int32_t t38 = -32227;
int32_t x225 = -1;
uint16_t x228 = UINT16_MAX;
static uint64_t x234 = 2LLU;
int16_t x236 = -1033;
static uint8_t x240 = 32U;
int32_t x242 = 17166216;
static int32_t t42 = -18688654;
int64_t x245 = -1LL;
uint16_t x246 = 19841U;
int32_t x247 = 16007;
int32_t t43 = -3185982;
int16_t x254 = INT16_MIN;
static volatile uint32_t x255 = UINT32_MAX;
int32_t t44 = -3;
uint32_t x278 = 558516U;
static int32_t x294 = -1;
volatile uint32_t x297 = 1U;
static uint16_t x298 = UINT16_MAX;
uint64_t x301 = UINT64_MAX;
int16_t x306 = INT16_MIN;
volatile int32_t x308 = -6677;
int16_t x314 = 0;
static int64_t x316 = -1LL;
static volatile int16_t x317 = -7;
int8_t x322 = INT8_MIN;
uint64_t x324 = 1370096520587LLU;
int64_t x328 = 20291LL;
volatile int32_t x330 = -1315;
int8_t x350 = -1;
volatile uint64_t x353 = 580226782861740LLU;
uint16_t x354 = 23486U;
int32_t t62 = -513;
uint16_t x360 = 15773U;
static volatile uint8_t x369 = 16U;
volatile int64_t x371 = -1LL;
volatile uint32_t x401 = UINT32_MAX;
int16_t x407 = INT16_MIN;
uint32_t x408 = 18603381U;
uint32_t x412 = 8U;
volatile int64_t x422 = -6LL;
int16_t x423 = INT16_MIN;
int16_t x429 = -119;
int16_t x432 = -1;
int32_t t74 = -3;
static int32_t x444 = INT32_MIN;
volatile int32_t t77 = -1437;
int32_t x455 = INT32_MIN;
static volatile int64_t x460 = -1LL;
int8_t x464 = -1;
int32_t t80 = 475336;
int16_t x488 = 0;
static uint16_t x493 = 1U;
int32_t x497 = -1;
uint32_t x499 = 3U;
volatile int32_t t88 = -42;
int8_t x514 = 0;
int64_t x515 = INT64_MAX;
uint64_t x523 = 469343796774040318LLU;
volatile int64_t x524 = -1LL;
uint16_t x538 = UINT16_MAX;
static int16_t x545 = -248;
volatile int32_t t96 = -12190725;
int32_t x560 = INT32_MAX;
volatile int32_t t97 = 9029299;
int32_t t98 = 112;
volatile int16_t x572 = 4;
static int64_t x579 = -30379170645767498LL;
uint32_t x582 = UINT32_MAX;
int32_t t101 = 295;
static int16_t x602 = -110;
static uint64_t x605 = 163046660149412916LLU;
int32_t x606 = INT32_MIN;
int16_t x613 = INT16_MIN;
static int16_t x620 = INT16_MAX;
int8_t x621 = -1;
volatile int32_t t112 = 720168834;
static volatile int32_t t113 = 16291;
volatile int16_t x661 = 62;
int32_t x663 = 3;
int8_t x674 = INT8_MAX;
uint64_t x676 = 1569469574633LLU;
int16_t x683 = -1;
int32_t t118 = 23385;
volatile uint8_t x700 = 2U;
int32_t x704 = 18;
static uint8_t x706 = 6U;
uint32_t x709 = 2488052U;
static int8_t x710 = 1;
uint32_t x726 = 12956U;
uint64_t x730 = 200352513LLU;
int64_t x732 = INT64_MIN;
int16_t x746 = INT16_MIN;
int32_t x753 = -412596445;
uint8_t x760 = 95U;
static int8_t x762 = -2;
int64_t x768 = -469537091550716LL;
int32_t x771 = INT32_MAX;
volatile int32_t x776 = -5289;
static int16_t x793 = INT16_MIN;
int8_t x796 = -1;
int64_t x799 = -13673192LL;
uint64_t x816 = 51528333LLU;
volatile int32_t x845 = INT32_MAX;
volatile int32_t t147 = -39325;
int16_t x866 = -1;
int32_t t149 = -857183090;
int16_t x878 = INT16_MIN;
volatile int8_t x879 = INT8_MIN;
volatile int8_t x880 = 0;
uint16_t x886 = 67U;
uint16_t x897 = UINT16_MAX;
static volatile int32_t t156 = 394038671;
static int32_t x912 = 22705242;
volatile uint16_t x918 = 28U;
static volatile int32_t t159 = 25;
volatile uint64_t x927 = UINT64_MAX;
int16_t x931 = INT16_MIN;
uint16_t x933 = UINT16_MAX;
int8_t x935 = 1;
static int32_t t162 = -5224839;
int8_t x949 = -1;
volatile int16_t x959 = INT16_MIN;
int16_t x968 = -3;
uint32_t x986 = UINT32_MAX;
uint32_t x991 = 1784755U;
volatile int32_t t169 = 1232360;
volatile int32_t t170 = -41854180;
int16_t x999 = -1;
static int16_t x1010 = -5;
volatile int32_t t173 = 100212;
int16_t x1017 = -1;
volatile int8_t x1018 = INT8_MIN;
static volatile int32_t x1019 = 4065043;
static int64_t x1028 = INT64_MIN;
volatile int8_t x1034 = 56;
int16_t x1036 = INT16_MAX;
uint32_t x1045 = 85889U;
int8_t x1047 = 1;
static volatile int8_t x1049 = INT8_MIN;
static int32_t x1056 = -21180270;
volatile int16_t x1061 = -807;
int32_t x1080 = -1;
uint64_t x1087 = UINT64_MAX;
int16_t x1094 = -1;
volatile int64_t x1100 = INT64_MIN;
int16_t x1101 = INT16_MAX;
uint16_t x1107 = 123U;
uint8_t x1120 = 55U;
int64_t x1124 = -471602085910084326LL;
static uint8_t x1135 = UINT8_MAX;
volatile int32_t t193 = 1389;
int8_t x1144 = INT8_MIN;
int16_t x1152 = INT16_MIN;
int8_t x1154 = INT8_MIN;


void f0(void) {
    	uint64_t x1 = 2453698137758472LLU;
	int16_t x3 = 0;
	int32_t t0 = 336939;

    t0 = ((x1*x2)==(x3-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x13 = INT8_MIN;
	static int16_t x14 = -1;
	volatile int16_t x16 = -6821;
	int32_t t1 = -711;

    t1 = ((x13*x14)==(x15-x16));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = INT8_MIN;
	volatile int64_t x18 = -1LL;
	volatile uint64_t x20 = 504753205426226LLU;
	int32_t t2 = -3746914;

    t2 = ((x17*x18)==(x19-x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x21 = 478U;
	int32_t x22 = INT32_MIN;
	uint8_t x23 = 17U;
	int16_t x24 = INT16_MAX;

    t3 = ((x21*x22)==(x23-x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x25 = UINT8_MAX;
	static int8_t x26 = INT8_MIN;
	static int8_t x27 = -1;
	int32_t x28 = 48;

    t4 = ((x25*x26)==(x27-x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x29 = INT8_MIN;
	int8_t x30 = INT8_MAX;
	static volatile uint32_t x31 = 484025556U;
	int64_t x32 = -210LL;

    t5 = ((x29*x30)==(x31-x32));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x34 = 1826466;
	static int8_t x35 = INT8_MIN;
	volatile uint64_t x36 = 215127516813LLU;
	int32_t t6 = 2732263;

    t6 = ((x33*x34)==(x35-x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x37 = 152;
	uint64_t x38 = 5597578637LLU;
	static int8_t x39 = INT8_MIN;
	int32_t t7 = -4452;

    t7 = ((x37*x38)==(x39-x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x45 = INT16_MIN;
	volatile uint64_t x46 = 1973485193195484501LLU;
	static int64_t x48 = INT64_MIN;
	static volatile int32_t t8 = 312;

    t8 = ((x45*x46)==(x47-x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x49 = INT8_MAX;
	int16_t x50 = -5;
	int32_t x51 = INT32_MIN;
	int32_t x52 = INT32_MIN;
	int32_t t9 = -155;

    t9 = ((x49*x50)==(x51-x52));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x57 = 58888U;
	int64_t x60 = 409283679157LL;

    t10 = ((x57*x58)==(x59-x60));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x61 = -1LL;
	uint64_t x62 = 1LLU;
	int16_t x63 = -6549;
	int64_t x64 = -1LL;
	static int32_t t11 = 577872;

    t11 = ((x61*x62)==(x63-x64));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x69 = 0U;
	uint32_t x70 = 92053U;
	int8_t x71 = INT8_MIN;
	int16_t x72 = -1;
	volatile int32_t t12 = 19;

    t12 = ((x69*x70)==(x71-x72));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x73 = -1;
	int8_t x74 = INT8_MAX;
	int8_t x75 = INT8_MIN;

    t13 = ((x73*x74)==(x75-x76));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x89 = 703LLU;
	static volatile int8_t x90 = -1;
	volatile int32_t x91 = INT32_MAX;
	int64_t x92 = INT64_MAX;
	int32_t t14 = -2;

    t14 = ((x89*x90)==(x91-x92));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x93 = -1;
	int32_t x96 = 0;
	volatile int32_t t15 = 9;

    t15 = ((x93*x94)==(x95-x96));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x97 = INT8_MIN;
	static uint32_t x98 = 52U;
	int64_t x99 = -1LL;
	int32_t t16 = 408693130;

    t16 = ((x97*x98)==(x99-x100));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x105 = UINT64_MAX;
	volatile uint32_t x106 = 3218644U;
	uint16_t x107 = UINT16_MAX;
	int32_t t17 = 3719;

    t17 = ((x105*x106)==(x107-x108));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x109 = INT8_MIN;
	int8_t x110 = INT8_MIN;
	uint32_t x111 = UINT32_MAX;
	int8_t x112 = INT8_MIN;

    t18 = ((x109*x110)==(x111-x112));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x113 = 204;
	uint16_t x114 = 106U;
	uint64_t x115 = 7613687690LLU;
	int32_t t19 = -9;

    t19 = ((x113*x114)==(x115-x116));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x117 = 4327876438242458177LLU;
	int16_t x120 = -1;
	int32_t t20 = 31369;

    t20 = ((x117*x118)==(x119-x120));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x125 = UINT16_MAX;
	static uint32_t x126 = UINT32_MAX;
	volatile int32_t t21 = 195202856;

    t21 = ((x125*x126)==(x127-x128));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x129 = -30;
	static volatile int32_t x130 = -719446;
	int8_t x131 = INT8_MAX;
	int8_t x132 = -7;
	int32_t t22 = 400;

    t22 = ((x129*x130)==(x131-x132));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint32_t x141 = 898862942U;
	int32_t x142 = INT32_MAX;
	static int8_t x143 = -1;
	int16_t x144 = 1;
	volatile int32_t t23 = 62507;

    t23 = ((x141*x142)==(x143-x144));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x145 = 13132946U;
	static int16_t x146 = -1;
	int32_t x147 = 66;
	int32_t t24 = 163954906;

    t24 = ((x145*x146)==(x147-x148));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x150 = -51;
	int32_t x152 = INT32_MAX;
	volatile int32_t t25 = -9758626;

    t25 = ((x149*x150)==(x151-x152));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x153 = 325406563LLU;
	int32_t x154 = INT32_MIN;
	uint32_t x155 = 156215U;
	int64_t x156 = 38918229LL;
	volatile int32_t t26 = 1066;

    t26 = ((x153*x154)==(x155-x156));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x161 = 1U;
	uint8_t x162 = UINT8_MAX;
	int16_t x163 = INT16_MIN;
	static int64_t x164 = -52253067218LL;
	volatile int32_t t27 = -1056316890;

    t27 = ((x161*x162)==(x163-x164));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x177 = 69770462U;
	volatile int32_t x178 = INT32_MAX;
	static volatile int32_t t28 = -3017;

    t28 = ((x177*x178)==(x179-x180));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x184 = 62417631357858LLU;
	volatile int32_t t29 = 0;

    t29 = ((x181*x182)==(x183-x184));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x185 = 0U;
	int32_t x187 = -417570;
	int32_t t30 = -8272;

    t30 = ((x185*x186)==(x187-x188));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x189 = UINT32_MAX;
	int32_t x190 = 7;
	int8_t x191 = INT8_MIN;

    t31 = ((x189*x190)==(x191-x192));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x193 = UINT16_MAX;
	uint64_t x194 = 1LLU;
	volatile int64_t x195 = INT64_MAX;
	int8_t x196 = INT8_MAX;
	static volatile int32_t t32 = 702202;

    t32 = ((x193*x194)==(x195-x196));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x198 = UINT8_MAX;
	volatile uint8_t x200 = 12U;
	static volatile int32_t t33 = 166466;

    t33 = ((x197*x198)==(x199-x200));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x201 = INT8_MIN;
	int32_t x202 = -123897;
	volatile int8_t x203 = INT8_MIN;
	int64_t x204 = 4870124LL;
	volatile int32_t t34 = 0;

    t34 = ((x201*x202)==(x203-x204));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x209 = 464U;
	int64_t x210 = 9138LL;
	static uint16_t x211 = 8494U;
	int64_t x212 = -54463783307394LL;
	volatile int32_t t35 = 61;

    t35 = ((x209*x210)==(x211-x212));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x213 = 361U;
	int8_t x214 = 1;
	volatile int64_t x215 = 4303LL;
	int32_t x216 = INT32_MIN;

    t36 = ((x213*x214)==(x215-x216));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x218 = -465;
	volatile int16_t x219 = INT16_MAX;
	static uint64_t x220 = UINT64_MAX;
	int32_t t37 = 5466672;

    t37 = ((x217*x218)==(x219-x220));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x221 = -1367;
	volatile int8_t x222 = INT8_MIN;
	int16_t x223 = INT16_MIN;

    t38 = ((x221*x222)==(x223-x224));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x226 = 14LLU;
	static uint8_t x227 = 95U;
	static int32_t t39 = -104516;

    t39 = ((x225*x226)==(x227-x228));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x233 = UINT16_MAX;
	uint32_t x235 = UINT32_MAX;
	volatile int32_t t40 = 1357723;

    t40 = ((x233*x234)==(x235-x236));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x237 = UINT32_MAX;
	static int16_t x238 = INT16_MAX;
	volatile uint32_t x239 = 51796126U;
	int32_t t41 = -1034;

    t41 = ((x237*x238)==(x239-x240));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x241 = -1;
	static int8_t x243 = 2;
	uint16_t x244 = 647U;

    t42 = ((x241*x242)==(x243-x244));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x248 = INT16_MIN;

    t43 = ((x245*x246)==(x247-x248));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x253 = 9511891U;
	int8_t x256 = INT8_MIN;

    t44 = ((x253*x254)==(x255-x256));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x265 = -3578LL;
	int16_t x266 = INT16_MIN;
	int8_t x267 = -1;
	int8_t x268 = 2;
	volatile int32_t t45 = 1945;

    t45 = ((x265*x266)==(x267-x268));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x273 = INT16_MIN;
	uint32_t x274 = 3084U;
	volatile int16_t x275 = INT16_MAX;
	int8_t x276 = INT8_MIN;
	int32_t t46 = 759485;

    t46 = ((x273*x274)==(x275-x276));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x277 = INT16_MIN;
	int8_t x279 = INT8_MIN;
	volatile int16_t x280 = -1;
	int32_t t47 = 56247562;

    t47 = ((x277*x278)==(x279-x280));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint32_t x285 = 171245U;
	uint8_t x286 = 116U;
	static volatile int8_t x287 = INT8_MIN;
	uint8_t x288 = UINT8_MAX;
	static int32_t t48 = 35;

    t48 = ((x285*x286)==(x287-x288));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x293 = -1;
	static volatile uint64_t x295 = 514966168202LLU;
	uint16_t x296 = 40U;
	int32_t t49 = 1772;

    t49 = ((x293*x294)==(x295-x296));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x299 = 56;
	int8_t x300 = -1;
	static volatile int32_t t50 = 126;

    t50 = ((x297*x298)==(x299-x300));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x302 = INT32_MAX;
	static int16_t x303 = INT16_MAX;
	int16_t x304 = -2;
	int32_t t51 = -517470;

    t51 = ((x301*x302)==(x303-x304));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x305 = UINT16_MAX;
	volatile int32_t x307 = INT32_MIN;
	volatile int32_t t52 = 1099076;

    t52 = ((x305*x306)==(x307-x308));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x309 = 996627U;
	uint64_t x310 = UINT64_MAX;
	volatile int32_t x311 = 56350;
	int32_t x312 = INT32_MAX;
	static volatile int32_t t53 = -123;

    t53 = ((x309*x310)==(x311-x312));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x313 = 17546086374LLU;
	static volatile uint8_t x315 = 2U;
	volatile int32_t t54 = 28829;

    t54 = ((x313*x314)==(x315-x316));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x318 = UINT32_MAX;
	uint16_t x319 = UINT16_MAX;
	int16_t x320 = INT16_MIN;
	volatile int32_t t55 = -2797;

    t55 = ((x317*x318)==(x319-x320));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x321 = 31439335U;
	int32_t x323 = -1043436;
	volatile int32_t t56 = -15448;

    t56 = ((x321*x322)==(x323-x324));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x325 = INT64_MAX;
	volatile uint64_t x326 = 18559906326215LLU;
	static volatile int64_t x327 = -4LL;
	static volatile int32_t t57 = -1823281;

    t57 = ((x325*x326)==(x327-x328));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x329 = INT8_MIN;
	int32_t x331 = INT32_MAX;
	volatile int8_t x332 = INT8_MAX;
	int32_t t58 = -352483;

    t58 = ((x329*x330)==(x331-x332));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x333 = 3;
	static uint64_t x334 = 132955528807688LLU;
	int64_t x335 = -1LL;
	uint16_t x336 = UINT16_MAX;
	volatile int32_t t59 = 2251;

    t59 = ((x333*x334)==(x335-x336));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x345 = 186596749317LLU;
	int32_t x346 = 1235;
	static int8_t x347 = INT8_MIN;
	int64_t x348 = INT64_MIN;
	static volatile int32_t t60 = -42;

    t60 = ((x345*x346)==(x347-x348));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint32_t x349 = 772061744U;
	int64_t x351 = INT64_MIN;
	uint64_t x352 = 60LLU;
	volatile int32_t t61 = 20754;

    t61 = ((x349*x350)==(x351-x352));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x355 = INT16_MAX;
	uint32_t x356 = 888865U;

    t62 = ((x353*x354)==(x355-x356));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x357 = INT8_MIN;
	int8_t x358 = 3;
	int16_t x359 = 13;
	static volatile int32_t t63 = 133710049;

    t63 = ((x357*x358)==(x359-x360));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x370 = 358U;
	static uint8_t x372 = 60U;
	static volatile int32_t t64 = 0;

    t64 = ((x369*x370)==(x371-x372));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x385 = 0;
	int64_t x386 = INT64_MIN;
	volatile uint64_t x387 = UINT64_MAX;
	static uint16_t x388 = 11963U;
	volatile int32_t t65 = -27251;

    t65 = ((x385*x386)==(x387-x388));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x393 = 7319LL;
	volatile int64_t x394 = -1LL;
	int16_t x395 = -2;
	int32_t x396 = -1771;
	int32_t t66 = 474356731;

    t66 = ((x393*x394)==(x395-x396));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x402 = -1;
	volatile int64_t x403 = INT64_MIN;
	static int32_t x404 = -1;
	static int32_t t67 = -34659;

    t67 = ((x401*x402)==(x403-x404));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x405 = UINT16_MAX;
	static uint16_t x406 = 0U;
	int32_t t68 = -15400995;

    t68 = ((x405*x406)==(x407-x408));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x409 = 15450U;
	uint16_t x410 = 1816U;
	uint16_t x411 = 1U;
	volatile int32_t t69 = 522536;

    t69 = ((x409*x410)==(x411-x412));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x413 = INT16_MIN;
	static uint32_t x414 = 1295355757U;
	volatile uint32_t x415 = 1238961U;
	uint16_t x416 = UINT16_MAX;
	int32_t t70 = -141831669;

    t70 = ((x413*x414)==(x415-x416));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x417 = 528U;
	uint8_t x418 = 31U;
	uint32_t x419 = 699345U;
	static int32_t x420 = -1;
	int32_t t71 = -29612738;

    t71 = ((x417*x418)==(x419-x420));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x421 = 0;
	volatile int64_t x424 = INT64_MIN;
	volatile int32_t t72 = 38384393;

    t72 = ((x421*x422)==(x423-x424));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x425 = INT16_MIN;
	uint16_t x426 = 16706U;
	volatile int32_t x427 = -7574896;
	static int32_t x428 = INT32_MIN;
	int32_t t73 = 251;

    t73 = ((x425*x426)==(x427-x428));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x430 = -9;
	volatile int16_t x431 = INT16_MIN;

    t74 = ((x429*x430)==(x431-x432));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x437 = INT32_MIN;
	int64_t x438 = -1LL;
	static uint32_t x439 = UINT32_MAX;
	static int16_t x440 = INT16_MIN;
	volatile int32_t t75 = 1013871;

    t75 = ((x437*x438)==(x439-x440));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x441 = UINT8_MAX;
	uint8_t x442 = 1U;
	int16_t x443 = INT16_MIN;
	volatile int32_t t76 = -49142714;

    t76 = ((x441*x442)==(x443-x444));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x445 = -1;
	static uint32_t x446 = UINT32_MAX;
	uint16_t x447 = 5937U;
	volatile int32_t x448 = 2;

    t77 = ((x445*x446)==(x447-x448));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x453 = INT64_MAX;
	uint64_t x454 = UINT64_MAX;
	int16_t x456 = -5972;
	int32_t t78 = -223498970;

    t78 = ((x453*x454)==(x455-x456));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x457 = INT16_MAX;
	static int16_t x458 = INT16_MIN;
	uint64_t x459 = 15044207050324230LLU;
	int32_t t79 = -15;

    t79 = ((x457*x458)==(x459-x460));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x461 = UINT32_MAX;
	static int8_t x462 = 0;
	int32_t x463 = -1;

    t80 = ((x461*x462)==(x463-x464));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x465 = INT64_MAX;
	uint64_t x466 = 1031608914LLU;
	uint32_t x467 = 415762U;
	int32_t x468 = INT32_MIN;
	int32_t t81 = -3;

    t81 = ((x465*x466)==(x467-x468));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x469 = 0U;
	int32_t x470 = -204599;
	static volatile int16_t x471 = INT16_MIN;
	int16_t x472 = INT16_MAX;
	int32_t t82 = -6328;

    t82 = ((x469*x470)==(x471-x472));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x477 = -2361;
	int16_t x478 = -1;
	static uint16_t x479 = UINT16_MAX;
	int64_t x480 = INT64_MAX;
	volatile int32_t t83 = 662851;

    t83 = ((x477*x478)==(x479-x480));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x485 = 1;
	int16_t x486 = INT16_MIN;
	uint32_t x487 = 0U;
	int32_t t84 = -11171574;

    t84 = ((x485*x486)==(x487-x488));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x489 = 3U;
	static volatile int8_t x490 = INT8_MIN;
	volatile uint32_t x491 = 4389503U;
	int8_t x492 = INT8_MAX;
	int32_t t85 = -1047242;

    t85 = ((x489*x490)==(x491-x492));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x494 = INT8_MIN;
	volatile int8_t x495 = -1;
	int8_t x496 = INT8_MIN;
	int32_t t86 = 24819045;

    t86 = ((x493*x494)==(x495-x496));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x498 = INT64_MAX;
	uint32_t x500 = 3U;
	volatile int32_t t87 = -147;

    t87 = ((x497*x498)==(x499-x500));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x501 = INT8_MAX;
	uint16_t x502 = UINT16_MAX;
	uint64_t x503 = 1142481519179068369LLU;
	int64_t x504 = -1LL;

    t88 = ((x501*x502)==(x503-x504));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x505 = UINT64_MAX;
	int64_t x506 = INT64_MAX;
	int64_t x507 = -1LL;
	int32_t x508 = INT32_MIN;
	static volatile int32_t t89 = -1088;

    t89 = ((x505*x506)==(x507-x508));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x509 = 2;
	uint16_t x510 = UINT16_MAX;
	int16_t x511 = INT16_MIN;
	uint8_t x512 = 7U;
	int32_t t90 = 4;

    t90 = ((x509*x510)==(x511-x512));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x513 = INT32_MIN;
	volatile uint64_t x516 = 24982LLU;
	static int32_t t91 = 253515;

    t91 = ((x513*x514)==(x515-x516));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x517 = -289;
	uint32_t x518 = 50174U;
	static volatile int8_t x519 = INT8_MIN;
	static int8_t x520 = 12;
	int32_t t92 = -19084;

    t92 = ((x517*x518)==(x519-x520));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x521 = UINT32_MAX;
	volatile int8_t x522 = INT8_MIN;
	volatile int32_t t93 = 311;

    t93 = ((x521*x522)==(x523-x524));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x533 = INT8_MIN;
	volatile uint64_t x534 = 22LLU;
	static int32_t x535 = INT32_MAX;
	uint32_t x536 = UINT32_MAX;
	volatile int32_t t94 = -1311;

    t94 = ((x533*x534)==(x535-x536));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x537 = 13;
	static int32_t x539 = -1;
	static uint16_t x540 = UINT16_MAX;
	int32_t t95 = 865266108;

    t95 = ((x537*x538)==(x539-x540));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x546 = -1LL;
	volatile int8_t x547 = INT8_MIN;
	uint64_t x548 = UINT64_MAX;

    t96 = ((x545*x546)==(x547-x548));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x557 = 1012446789U;
	volatile int8_t x558 = -1;
	int64_t x559 = 4809803036300LL;

    t97 = ((x557*x558)==(x559-x560));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x561 = -1LL;
	static uint16_t x562 = 3U;
	volatile uint16_t x563 = 7U;
	uint8_t x564 = 0U;

    t98 = ((x561*x562)==(x563-x564));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x569 = 19;
	uint16_t x570 = UINT16_MAX;
	static int64_t x571 = 1335868369205492LL;
	int32_t t99 = 109182;

    t99 = ((x569*x570)==(x571-x572));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x577 = UINT16_MAX;
	static uint64_t x578 = 67442090308761LLU;
	uint16_t x580 = 2U;
	volatile int32_t t100 = -247141614;

    t100 = ((x577*x578)==(x579-x580));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x581 = 4LLU;
	int32_t x583 = -1;
	volatile uint32_t x584 = UINT32_MAX;

    t101 = ((x581*x582)==(x583-x584));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x585 = -235;
	int8_t x586 = -1;
	uint16_t x587 = UINT16_MAX;
	int16_t x588 = INT16_MAX;
	volatile int32_t t102 = 70513977;

    t102 = ((x585*x586)==(x587-x588));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x589 = 15U;
	int8_t x590 = -4;
	static int32_t x591 = -1;
	volatile int8_t x592 = -1;
	volatile int32_t t103 = 2756879;

    t103 = ((x589*x590)==(x591-x592));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x601 = -269;
	int16_t x603 = INT16_MIN;
	uint8_t x604 = 50U;
	int32_t t104 = -3;

    t104 = ((x601*x602)==(x603-x604));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x607 = INT32_MAX;
	uint32_t x608 = 7203U;
	volatile int32_t t105 = 80028;

    t105 = ((x605*x606)==(x607-x608));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x609 = 111U;
	int16_t x610 = -58;
	int8_t x611 = INT8_MIN;
	int16_t x612 = -1;
	int32_t t106 = 3620;

    t106 = ((x609*x610)==(x611-x612));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x614 = 17LL;
	volatile int64_t x615 = INT64_MIN;
	int16_t x616 = -1;
	int32_t t107 = 4662996;

    t107 = ((x613*x614)==(x615-x616));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x617 = INT8_MAX;
	int32_t x618 = -1;
	static volatile uint16_t x619 = 3047U;
	static volatile int32_t t108 = 3;

    t108 = ((x617*x618)==(x619-x620));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x622 = -1;
	uint16_t x623 = 13U;
	volatile uint64_t x624 = 1944665858751418LLU;
	volatile int32_t t109 = 1615721;

    t109 = ((x621*x622)==(x623-x624));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x637 = INT16_MAX;
	uint64_t x638 = UINT64_MAX;
	int16_t x639 = INT16_MAX;
	uint32_t x640 = UINT32_MAX;
	volatile int32_t t110 = -649373815;

    t110 = ((x637*x638)==(x639-x640));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x641 = 834636;
	static volatile int8_t x642 = INT8_MIN;
	int32_t x643 = -2;
	static int16_t x644 = -1;
	static volatile int32_t t111 = 78;

    t111 = ((x641*x642)==(x643-x644));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x645 = INT32_MIN;
	uint32_t x646 = 22U;
	int8_t x647 = 13;
	int32_t x648 = -1;

    t112 = ((x645*x646)==(x647-x648));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x657 = -1LL;
	int32_t x658 = INT32_MAX;
	volatile int32_t x659 = INT32_MAX;
	uint32_t x660 = UINT32_MAX;

    t113 = ((x657*x658)==(x659-x660));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x662 = -1;
	uint16_t x664 = UINT16_MAX;
	volatile int32_t t114 = -485875;

    t114 = ((x661*x662)==(x663-x664));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x673 = -7909;
	int32_t x675 = -7847;
	static volatile int32_t t115 = 8066571;

    t115 = ((x673*x674)==(x675-x676));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x681 = 470404943340691789LL;
	volatile uint64_t x682 = 74193231749752LLU;
	int8_t x684 = INT8_MAX;
	volatile int32_t t116 = 342262229;

    t116 = ((x681*x682)==(x683-x684));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x685 = 7081560U;
	uint16_t x686 = 9U;
	int64_t x687 = -2275064692LL;
	int32_t x688 = INT32_MIN;
	volatile int32_t t117 = -447273;

    t117 = ((x685*x686)==(x687-x688));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x689 = -22212684;
	uint64_t x690 = UINT64_MAX;
	volatile int16_t x691 = INT16_MAX;
	static int16_t x692 = INT16_MIN;

    t118 = ((x689*x690)==(x691-x692));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x697 = 1U;
	int16_t x698 = -4;
	uint16_t x699 = 4U;
	volatile int32_t t119 = -24538552;

    t119 = ((x697*x698)==(x699-x700));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x701 = INT8_MIN;
	int64_t x702 = -261127LL;
	volatile int16_t x703 = -2997;
	int32_t t120 = -5050120;

    t120 = ((x701*x702)==(x703-x704));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x705 = UINT8_MAX;
	int8_t x707 = INT8_MAX;
	volatile int16_t x708 = 5;
	volatile int32_t t121 = 1870;

    t121 = ((x705*x706)==(x707-x708));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x711 = INT8_MIN;
	static int16_t x712 = INT16_MIN;
	int32_t t122 = -537571;

    t122 = ((x709*x710)==(x711-x712));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x713 = INT16_MIN;
	int64_t x714 = -1LL;
	int64_t x715 = INT64_MIN;
	volatile int32_t x716 = INT32_MIN;
	volatile int32_t t123 = 114;

    t123 = ((x713*x714)==(x715-x716));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint16_t x721 = 3U;
	int8_t x722 = INT8_MIN;
	static uint16_t x723 = 397U;
	static uint8_t x724 = 7U;
	volatile int32_t t124 = -16968528;

    t124 = ((x721*x722)==(x723-x724));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x725 = UINT64_MAX;
	uint16_t x727 = 6U;
	static volatile int16_t x728 = 47;
	volatile int32_t t125 = -1808;

    t125 = ((x725*x726)==(x727-x728));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x729 = 0;
	int16_t x731 = -1;
	int32_t t126 = -10273;

    t126 = ((x729*x730)==(x731-x732));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x733 = INT16_MAX;
	int8_t x734 = INT8_MIN;
	uint64_t x735 = UINT64_MAX;
	static int8_t x736 = INT8_MIN;
	static int32_t t127 = -16726503;

    t127 = ((x733*x734)==(x735-x736));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x737 = 56;
	uint16_t x738 = 1013U;
	uint64_t x739 = 1667169LLU;
	int8_t x740 = INT8_MIN;
	volatile int32_t t128 = -54291100;

    t128 = ((x737*x738)==(x739-x740));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x741 = -1;
	static int8_t x742 = INT8_MIN;
	int32_t x743 = INT32_MIN;
	static volatile int64_t x744 = INT64_MIN;
	int32_t t129 = -200936158;

    t129 = ((x741*x742)==(x743-x744));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x745 = 15117;
	int32_t x747 = -1;
	uint16_t x748 = 28U;
	volatile int32_t t130 = -331372;

    t130 = ((x745*x746)==(x747-x748));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint8_t x754 = 1U;
	int8_t x755 = INT8_MIN;
	int16_t x756 = 1;
	int32_t t131 = -670977179;

    t131 = ((x753*x754)==(x755-x756));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x757 = INT8_MAX;
	uint64_t x758 = 2226976LLU;
	int8_t x759 = INT8_MIN;
	volatile int32_t t132 = 28;

    t132 = ((x757*x758)==(x759-x760));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x761 = -1LL;
	static uint64_t x763 = 3630636621323LLU;
	uint32_t x764 = 6810U;
	volatile int32_t t133 = -1029521828;

    t133 = ((x761*x762)==(x763-x764));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x765 = UINT8_MAX;
	volatile int16_t x766 = INT16_MIN;
	uint8_t x767 = 1U;
	int32_t t134 = 1433795;

    t134 = ((x765*x766)==(x767-x768));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x769 = UINT32_MAX;
	int8_t x770 = INT8_MIN;
	static int16_t x772 = INT16_MAX;
	volatile int32_t t135 = 131;

    t135 = ((x769*x770)==(x771-x772));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x773 = 2U;
	uint16_t x774 = UINT16_MAX;
	int8_t x775 = INT8_MAX;
	int32_t t136 = 0;

    t136 = ((x773*x774)==(x775-x776));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x781 = -1;
	int32_t x782 = -1;
	uint32_t x783 = 23045U;
	int32_t x784 = -379530;
	int32_t t137 = -1003;

    t137 = ((x781*x782)==(x783-x784));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x794 = -464993137LL;
	int16_t x795 = INT16_MAX;
	int32_t t138 = 188;

    t138 = ((x793*x794)==(x795-x796));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x797 = 7U;
	int16_t x798 = 5;
	uint32_t x800 = 1529U;
	static int32_t t139 = 565519625;

    t139 = ((x797*x798)==(x799-x800));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x805 = INT16_MAX;
	volatile int32_t x806 = -1;
	static int64_t x807 = -415773207031LL;
	int64_t x808 = INT64_MIN;
	static int32_t t140 = -153;

    t140 = ((x805*x806)==(x807-x808));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x813 = INT8_MIN;
	uint32_t x814 = 4U;
	int8_t x815 = INT8_MIN;
	int32_t t141 = 605065;

    t141 = ((x813*x814)==(x815-x816));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x821 = 3766U;
	int8_t x822 = INT8_MAX;
	int64_t x823 = INT64_MIN;
	int8_t x824 = -61;
	volatile int32_t t142 = 110;

    t142 = ((x821*x822)==(x823-x824));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x825 = INT8_MIN;
	int16_t x826 = INT16_MAX;
	int16_t x827 = INT16_MIN;
	static uint8_t x828 = UINT8_MAX;
	int32_t t143 = 152;

    t143 = ((x825*x826)==(x827-x828));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x829 = UINT16_MAX;
	uint8_t x830 = 3U;
	uint32_t x831 = 504U;
	static uint16_t x832 = 613U;
	volatile int32_t t144 = 16210473;

    t144 = ((x829*x830)==(x831-x832));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x837 = -1;
	int64_t x838 = 1260598LL;
	int8_t x839 = -1;
	volatile int16_t x840 = INT16_MAX;
	volatile int32_t t145 = 3364;

    t145 = ((x837*x838)==(x839-x840));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x841 = 0U;
	int64_t x842 = -1LL;
	uint32_t x843 = 1U;
	int32_t x844 = INT32_MAX;
	volatile int32_t t146 = -102642;

    t146 = ((x841*x842)==(x843-x844));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x846 = 3786593U;
	int32_t x847 = 0;
	uint32_t x848 = 579819985U;

    t147 = ((x845*x846)==(x847-x848));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x849 = -1;
	int32_t x850 = INT32_MAX;
	uint16_t x851 = 1U;
	int8_t x852 = INT8_MAX;
	int32_t t148 = 351839920;

    t148 = ((x849*x850)==(x851-x852));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x865 = 40U;
	static int32_t x867 = INT32_MAX;
	uint16_t x868 = UINT16_MAX;

    t149 = ((x865*x866)==(x867-x868));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x869 = -1;
	uint64_t x870 = 39LLU;
	int8_t x871 = INT8_MIN;
	uint16_t x872 = 150U;
	static volatile int32_t t150 = 245691;

    t150 = ((x869*x870)==(x871-x872));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x873 = INT16_MAX;
	uint16_t x874 = 1843U;
	uint32_t x875 = UINT32_MAX;
	static int64_t x876 = -1LL;
	volatile int32_t t151 = 117;

    t151 = ((x873*x874)==(x875-x876));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x877 = INT16_MIN;
	int32_t t152 = -10;

    t152 = ((x877*x878)==(x879-x880));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x885 = UINT64_MAX;
	int32_t x887 = INT32_MIN;
	int16_t x888 = INT16_MIN;
	volatile int32_t t153 = -63;

    t153 = ((x885*x886)==(x887-x888));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x889 = -277;
	int16_t x890 = 2;
	static int32_t x891 = 1752;
	int16_t x892 = INT16_MIN;
	volatile int32_t t154 = 220678839;

    t154 = ((x889*x890)==(x891-x892));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x898 = INT8_MIN;
	int8_t x899 = INT8_MAX;
	int16_t x900 = INT16_MAX;
	int32_t t155 = -4520976;

    t155 = ((x897*x898)==(x899-x900));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x901 = INT8_MAX;
	uint16_t x902 = 5U;
	static int8_t x903 = -3;
	volatile uint8_t x904 = UINT8_MAX;

    t156 = ((x901*x902)==(x903-x904));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x909 = -4;
	static uint8_t x910 = 26U;
	int16_t x911 = INT16_MAX;
	int32_t t157 = 8200;

    t157 = ((x909*x910)==(x911-x912));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x917 = INT8_MAX;
	uint8_t x919 = UINT8_MAX;
	uint16_t x920 = 1U;
	volatile int32_t t158 = 178188;

    t158 = ((x917*x918)==(x919-x920));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x921 = 5449513587LLU;
	uint32_t x922 = 84945994U;
	static int16_t x923 = INT16_MIN;
	int64_t x924 = INT64_MIN;

    t159 = ((x921*x922)==(x923-x924));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x925 = 1022;
	static uint32_t x926 = UINT32_MAX;
	int32_t x928 = -8233;
	static int32_t t160 = 16;

    t160 = ((x925*x926)==(x927-x928));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x929 = 2249161U;
	int64_t x930 = 489LL;
	volatile uint64_t x932 = 2530290397610897298LLU;
	volatile int32_t t161 = -398299273;

    t161 = ((x929*x930)==(x931-x932));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x934 = -1;
	static volatile int32_t x936 = INT32_MAX;

    t162 = ((x933*x934)==(x935-x936));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x950 = 625944345LLU;
	int16_t x951 = 0;
	int16_t x952 = INT16_MAX;
	static volatile int32_t t163 = 0;

    t163 = ((x949*x950)==(x951-x952));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x957 = 9U;
	volatile uint64_t x958 = 27034549222LLU;
	volatile int64_t x960 = INT64_MIN;
	volatile int32_t t164 = -7;

    t164 = ((x957*x958)==(x959-x960));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x961 = 0U;
	int8_t x962 = INT8_MAX;
	int8_t x963 = INT8_MIN;
	static uint8_t x964 = UINT8_MAX;
	static int32_t t165 = 54230381;

    t165 = ((x961*x962)==(x963-x964));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x965 = 5LLU;
	int32_t x966 = -301366;
	static int64_t x967 = INT64_MIN;
	int32_t t166 = -50016;

    t166 = ((x965*x966)==(x967-x968));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x981 = -12;
	int16_t x982 = INT16_MAX;
	int8_t x983 = INT8_MIN;
	int64_t x984 = -36898910686LL;
	int32_t t167 = -12;

    t167 = ((x981*x982)==(x983-x984));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x985 = -1LL;
	uint64_t x987 = 4221867552LLU;
	static int8_t x988 = INT8_MIN;
	volatile int32_t t168 = -9572;

    t168 = ((x985*x986)==(x987-x988));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x989 = 16326379U;
	uint16_t x990 = 427U;
	volatile int8_t x992 = -5;

    t169 = ((x989*x990)==(x991-x992));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x993 = INT16_MIN;
	int32_t x994 = 0;
	uint64_t x995 = UINT64_MAX;
	int8_t x996 = -1;

    t170 = ((x993*x994)==(x995-x996));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x997 = 0;
	volatile int64_t x998 = INT64_MIN;
	volatile int8_t x1000 = -1;
	int32_t t171 = 7253276;

    t171 = ((x997*x998)==(x999-x1000));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x1001 = 179699815LL;
	uint8_t x1002 = 1U;
	static int16_t x1003 = -3;
	int16_t x1004 = -31;
	int32_t t172 = 143154821;

    t172 = ((x1001*x1002)==(x1003-x1004));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1009 = 2010610958U;
	static uint16_t x1011 = UINT16_MAX;
	static uint16_t x1012 = 0U;

    t173 = ((x1009*x1010)==(x1011-x1012));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1020 = -1;
	int32_t t174 = 92311334;

    t174 = ((x1017*x1018)==(x1019-x1020));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1025 = 45147140127460748LLU;
	int32_t x1026 = 1131984;
	static uint64_t x1027 = 92LLU;
	volatile int32_t t175 = 42203;

    t175 = ((x1025*x1026)==(x1027-x1028));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1029 = -65579967LL;
	volatile uint32_t x1030 = 58292U;
	int8_t x1031 = INT8_MAX;
	int8_t x1032 = INT8_MIN;
	int32_t t176 = -1;

    t176 = ((x1029*x1030)==(x1031-x1032));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x1033 = 1U;
	int8_t x1035 = -1;
	volatile int32_t t177 = 456130;

    t177 = ((x1033*x1034)==(x1035-x1036));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1041 = INT64_MIN;
	int32_t x1042 = 1;
	int32_t x1043 = INT32_MAX;
	int64_t x1044 = -223127719495686LL;
	volatile int32_t t178 = -11310;

    t178 = ((x1041*x1042)==(x1043-x1044));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1046 = INT8_MAX;
	static int32_t x1048 = -926;
	int32_t t179 = -90;

    t179 = ((x1045*x1046)==(x1047-x1048));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1050 = 4;
	static volatile int32_t x1051 = 192;
	int64_t x1052 = -28565LL;
	volatile int32_t t180 = 2;

    t180 = ((x1049*x1050)==(x1051-x1052));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1053 = -3507;
	uint32_t x1054 = 249105111U;
	volatile int8_t x1055 = -16;
	int32_t t181 = -189;

    t181 = ((x1053*x1054)==(x1055-x1056));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x1062 = 1U;
	static int8_t x1063 = INT8_MAX;
	int16_t x1064 = -1;
	int32_t t182 = 4;

    t182 = ((x1061*x1062)==(x1063-x1064));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1073 = INT16_MAX;
	uint32_t x1074 = 19330640U;
	int32_t x1075 = 0;
	int16_t x1076 = INT16_MIN;
	int32_t t183 = 109;

    t183 = ((x1073*x1074)==(x1075-x1076));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x1077 = 3;
	int8_t x1078 = -1;
	int8_t x1079 = INT8_MIN;
	volatile int32_t t184 = -1883;

    t184 = ((x1077*x1078)==(x1079-x1080));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1081 = 2U;
	int32_t x1082 = 9827959;
	uint16_t x1083 = UINT16_MAX;
	volatile int64_t x1084 = 1259635162105656LL;
	volatile int32_t t185 = 1;

    t185 = ((x1081*x1082)==(x1083-x1084));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1085 = INT8_MIN;
	int32_t x1086 = -1;
	int16_t x1088 = -1;
	int32_t t186 = -489520178;

    t186 = ((x1085*x1086)==(x1087-x1088));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint16_t x1093 = 31963U;
	static uint64_t x1095 = 146269172246LLU;
	static volatile uint32_t x1096 = UINT32_MAX;
	volatile int32_t t187 = -2192;

    t187 = ((x1093*x1094)==(x1095-x1096));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1097 = -1;
	uint64_t x1098 = 48454010LLU;
	int32_t x1099 = INT32_MIN;
	volatile int32_t t188 = 0;

    t188 = ((x1097*x1098)==(x1099-x1100));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1102 = UINT32_MAX;
	int64_t x1103 = 3078565998143LL;
	static int8_t x1104 = -50;
	static int32_t t189 = 18114964;

    t189 = ((x1101*x1102)==(x1103-x1104));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1105 = INT8_MIN;
	int64_t x1106 = -1176188314LL;
	int32_t x1108 = -325004;
	volatile int32_t t190 = -1577;

    t190 = ((x1105*x1106)==(x1107-x1108));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint16_t x1117 = 876U;
	static int16_t x1118 = -1;
	int64_t x1119 = INT64_MAX;
	volatile int32_t t191 = -3018;

    t191 = ((x1117*x1118)==(x1119-x1120));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1121 = INT32_MIN;
	static uint64_t x1122 = UINT64_MAX;
	int16_t x1123 = INT16_MIN;
	static int32_t t192 = 64417;

    t192 = ((x1121*x1122)==(x1123-x1124));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1133 = INT8_MAX;
	volatile uint64_t x1134 = UINT64_MAX;
	int16_t x1136 = -12835;

    t193 = ((x1133*x1134)==(x1135-x1136));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1137 = INT16_MIN;
	int16_t x1138 = -1;
	static int32_t x1139 = -1;
	int64_t x1140 = INT64_MIN;
	volatile int32_t t194 = 136860;

    t194 = ((x1137*x1138)==(x1139-x1140));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1141 = INT16_MIN;
	uint8_t x1142 = 7U;
	static int16_t x1143 = 40;
	volatile int32_t t195 = -695;

    t195 = ((x1141*x1142)==(x1143-x1144));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1149 = UINT16_MAX;
	static uint64_t x1150 = 505682705523LLU;
	static volatile uint32_t x1151 = UINT32_MAX;
	static int32_t t196 = -16;

    t196 = ((x1149*x1150)==(x1151-x1152));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1153 = 778U;
	uint16_t x1155 = 29U;
	int16_t x1156 = -366;
	static volatile int32_t t197 = 1262;

    t197 = ((x1153*x1154)==(x1155-x1156));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x1161 = UINT16_MAX;
	int64_t x1162 = -1LL;
	static int32_t x1163 = -1;
	uint32_t x1164 = 529709U;
	volatile int32_t t198 = 0;

    t198 = ((x1161*x1162)==(x1163-x1164));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x1165 = 112U;
	uint8_t x1166 = 3U;
	int8_t x1167 = INT8_MIN;
	static int16_t x1168 = INT16_MIN;
	volatile int32_t t199 = 75763586;

    t199 = ((x1165*x1166)==(x1167-x1168));

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

