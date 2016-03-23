
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

static int8_t x2 = -1;
uint8_t x7 = 23U;
volatile uint32_t x14 = 472100201U;
uint64_t t2 = 3203270460008103246LLU;
uint8_t x20 = UINT8_MAX;
int8_t x23 = INT8_MIN;
static int64_t t6 = -35408439848387603LL;
volatile int8_t x41 = INT8_MAX;
uint64_t x60 = 34916850218836217LLU;
int32_t x61 = -64687;
static int8_t x68 = -1;
uint16_t x71 = 6308U;
uint16_t x76 = 528U;
uint32_t x85 = 915774499U;
int16_t x86 = -1;
uint64_t x87 = UINT64_MAX;
int64_t x89 = INT64_MIN;
volatile uint64_t t15 = 11426834412555226LLU;
int64_t x102 = 272869293760413277LL;
static volatile int64_t t16 = -781LL;
int16_t x110 = INT16_MAX;
volatile uint64_t t19 = 15763LLU;
volatile int32_t x120 = 102644;
volatile int32_t t20 = 61729989;
int64_t x132 = -1LL;
uint16_t x139 = 37U;
static uint32_t x144 = 1360U;
volatile uint64_t t25 = 3646LLU;
int16_t x146 = -824;
int64_t x162 = INT64_MIN;
int8_t x165 = 58;
static int8_t x166 = INT8_MAX;
int32_t x168 = INT32_MIN;
int64_t x170 = INT64_MIN;
int64_t x174 = 14825956770LL;
int16_t x185 = 10;
int16_t x188 = INT16_MIN;
int32_t x190 = -1;
static volatile int8_t x212 = INT8_MAX;
volatile int16_t x217 = -3390;
int32_t x220 = -1;
static int64_t x221 = 13157607912793LL;
int8_t x222 = 3;
volatile uint64_t x233 = 946576743616952LLU;
static int16_t x235 = INT16_MAX;
volatile uint8_t x240 = UINT8_MAX;
int64_t x244 = 4LL;
int64_t x250 = -1LL;
int16_t x251 = -1;
uint32_t x255 = UINT32_MAX;
int16_t x256 = INT16_MAX;
volatile int64_t t46 = 257437LL;
volatile int64_t t47 = -14550381964LL;
int32_t x271 = -1;
volatile int64_t t48 = 0LL;
volatile int64_t x274 = INT64_MAX;
uint16_t x276 = UINT16_MAX;
volatile int64_t t49 = 807999257194LL;
volatile int16_t x278 = -1;
volatile int64_t t50 = 2140612442983668805LL;
volatile uint32_t x295 = UINT32_MAX;
volatile int32_t x312 = -1;
int16_t x315 = INT16_MAX;
int32_t x316 = -1;
int8_t x317 = INT8_MIN;
volatile int64_t t59 = 750LL;
volatile int32_t t60 = 9;
static int8_t x326 = INT8_MIN;
int32_t x343 = INT32_MIN;
int64_t x344 = 12LL;
int8_t x353 = INT8_MIN;
static uint8_t x365 = 0U;
int8_t x367 = INT8_MIN;
uint32_t t67 = 28287U;
int16_t x375 = 1;
int16_t x383 = INT16_MAX;
volatile int64_t t71 = -1LL;
uint64_t x389 = 42728490072407975LLU;
int8_t x390 = 1;
int8_t x391 = -14;
static volatile int16_t x392 = INT16_MIN;
uint64_t x396 = 407LLU;
static uint64_t t73 = 4LLU;
volatile int32_t x398 = INT32_MIN;
volatile int8_t x399 = -15;
int32_t x401 = INT32_MIN;
uint32_t t76 = 12U;
int32_t x409 = -1;
int64_t x410 = INT64_MIN;
uint64_t x412 = 1747691252328LLU;
volatile uint64_t t77 = 113682329LLU;
uint8_t x416 = UINT8_MAX;
static uint32_t x420 = 26823670U;
int8_t x427 = INT8_MIN;
uint8_t x432 = 17U;
uint8_t x433 = UINT8_MAX;
static int8_t x436 = -1;
volatile uint32_t x440 = UINT32_MAX;
int32_t t84 = -1;
static int64_t x445 = -6LL;
static volatile int32_t t86 = 0;
uint32_t x461 = UINT32_MAX;
int8_t x472 = 11;
int64_t t89 = -1LL;
int16_t x517 = INT16_MAX;
volatile int16_t x519 = 0;
int32_t t93 = 0;
int8_t x521 = -1;
int8_t x525 = INT8_MAX;
uint16_t x527 = UINT16_MAX;
volatile uint64_t x532 = UINT64_MAX;
static int8_t x533 = INT8_MIN;
static int32_t x535 = -389310;
static volatile int64_t x546 = INT64_MAX;
int64_t x547 = -1LL;
uint8_t x551 = UINT8_MAX;
int16_t x553 = -13;
int8_t x556 = -2;
volatile int64_t x560 = -1LL;
uint64_t x564 = UINT64_MAX;
volatile uint64_t t103 = 3929926648273552183LLU;
static int32_t x567 = INT32_MAX;
uint8_t x586 = 4U;
int64_t x587 = INT64_MAX;
int8_t x588 = -1;
volatile uint16_t x596 = 20U;
uint16_t x617 = UINT16_MAX;
static int64_t x625 = INT64_MIN;
volatile int64_t x627 = -1495042678LL;
uint32_t x629 = 83206727U;
int8_t x630 = INT8_MAX;
int32_t x681 = 128408199;
static volatile uint32_t x683 = 454102U;
volatile uint64_t t119 = 43423566081721987LLU;
int16_t x705 = -1;
int8_t x710 = INT8_MAX;
static int64_t t122 = -121492LL;
int32_t t124 = -6079;
int64_t x724 = -34117359195810248LL;
int64_t x732 = -454715050103LL;
int8_t x745 = -1;
static volatile int32_t x746 = INT32_MAX;
int8_t x747 = INT8_MAX;
int8_t x748 = INT8_MIN;
uint16_t x752 = 347U;
int16_t x753 = 243;
int64_t t130 = 30567792469565333LL;
volatile int8_t x760 = INT8_MIN;
volatile int64_t t131 = 1LL;
static uint64_t x766 = 5168LLU;
static uint8_t x768 = UINT8_MAX;
uint64_t x778 = 68031924329LLU;
int32_t x780 = 2927;
uint8_t x793 = 10U;
volatile uint64_t t138 = 8637127188506314LLU;
int16_t x804 = INT16_MIN;
uint64_t x806 = UINT64_MAX;
uint64_t x807 = 158562860906LLU;
int8_t x815 = INT8_MAX;
int16_t x816 = -1;
int64_t x817 = INT64_MAX;
volatile int64_t x820 = 418489140LL;
int64_t x825 = INT64_MIN;
int8_t x830 = 1;
int64_t t146 = -32187998020002144LL;
static volatile uint16_t x836 = 81U;
volatile int16_t x847 = INT16_MIN;
static int16_t x850 = INT16_MAX;
static int32_t x851 = INT32_MIN;
static uint64_t t149 = 45133387987LLU;
int8_t x855 = INT8_MIN;
int8_t x864 = -1;
volatile int64_t t152 = -2414684039031832338LL;
int16_t x875 = -9515;
volatile int64_t t153 = -1062273877571258LL;
uint64_t t154 = 4126680435104LLU;
uint64_t t155 = 439LLU;
int8_t x890 = 48;
int8_t x891 = 0;
volatile int8_t x895 = -3;
volatile int16_t x897 = INT16_MAX;
volatile uint64_t x903 = 7566LLU;
uint8_t x904 = UINT8_MAX;
uint32_t x917 = 69890U;
int64_t x923 = 127LL;
volatile int64_t t161 = -597494652103LL;
volatile int64_t x942 = -1343865273872LL;
uint16_t x953 = 5816U;
static int64_t x956 = INT64_MIN;
static int64_t x963 = INT64_MIN;
int32_t x985 = INT32_MAX;
volatile int64_t t169 = -25LL;
int16_t x992 = -1;
static uint8_t x1002 = 14U;
volatile uint64_t x1040 = 4809432835LLU;
int8_t x1044 = INT8_MIN;
int64_t x1048 = -1LL;
int64_t t180 = 554194LL;
uint32_t x1071 = 30578U;
volatile uint32_t x1073 = 6337706U;
static uint64_t t185 = 258LLU;
int8_t x1093 = -1;
int16_t x1109 = 0;
int32_t x1112 = -1;
uint32_t x1125 = UINT32_MAX;
int64_t t194 = -48110690186433LL;
int64_t x1138 = -1LL;
int16_t x1153 = -1;


void f0(void) {
    	int8_t x1 = 18;
	int8_t x3 = INT8_MIN;
	uint64_t x4 = 33723543905692260LLU;
	volatile uint64_t t0 = 576653666LLU;

    t0 = ((x1%x2)+(x3*x4));

    if (t0 != 14130130453780942336LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	volatile int64_t x6 = -435523168LL;
	uint16_t x8 = 79U;
	volatile int64_t t1 = 70171LL;

    t1 = ((x5%x6)+(x7*x8));

    if (t1 != 1816LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = -1;
	static volatile uint64_t x15 = 462132746394LLU;
	uint64_t x16 = UINT64_MAX;

    t2 = ((x13%x14)+(x15*x16));

    if (t2 != 18446743611622870708LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = UINT32_MAX;
	int8_t x18 = INT8_MAX;
	uint32_t x19 = 3580U;
	static volatile uint32_t t3 = 1U;

    t3 = ((x17%x18)+(x19*x20));

    if (t3 != 912915U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x21 = INT64_MIN;
	uint64_t x22 = 3916368247419LLU;
	int16_t x24 = INT16_MAX;
	volatile uint64_t t4 = 4153770144LLU;

    t4 = ((x21%x22)+(x23*x24));

    if (t4 != 3671982548274LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x33 = INT16_MIN;
	int32_t x34 = INT32_MIN;
	static int16_t x35 = INT16_MAX;
	volatile int32_t x36 = -1;
	volatile int32_t t5 = -301153;

    t5 = ((x33%x34)+(x35*x36));

    if (t5 != -65535) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x37 = 8;
	uint32_t x38 = 34837U;
	int64_t x39 = -1LL;
	int64_t x40 = -1LL;

    t6 = ((x37%x38)+(x39*x40));

    if (t6 != 9LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x42 = INT64_MIN;
	static uint64_t x43 = UINT64_MAX;
	uint64_t x44 = 142LLU;
	volatile uint64_t t7 = 45954768LLU;

    t7 = ((x41%x42)+(x43*x44));

    if (t7 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x49 = 3LLU;
	int8_t x50 = INT8_MAX;
	int32_t x51 = INT32_MIN;
	volatile uint8_t x52 = 0U;
	volatile uint64_t t8 = 18666836850483LLU;

    t8 = ((x49%x50)+(x51*x52));

    if (t8 != 3LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x57 = -1;
	int64_t x58 = INT64_MIN;
	volatile int16_t x59 = -1;
	volatile uint64_t t9 = 381278088544718LLU;

    t9 = ((x57%x58)+(x59*x60));

    if (t9 != 18411827223490715398LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x62 = INT16_MIN;
	int8_t x63 = 7;
	int16_t x64 = INT16_MIN;
	volatile int32_t t10 = -1853;

    t10 = ((x61%x62)+(x63*x64));

    if (t10 != -261295) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x65 = INT64_MIN;
	int16_t x66 = INT16_MAX;
	int16_t x67 = INT16_MIN;
	int64_t t11 = 3453051364761LL;

    t11 = ((x65%x66)+(x67*x68));

    if (t11 != 32760LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x69 = 42U;
	volatile uint8_t x70 = UINT8_MAX;
	uint64_t x72 = UINT64_MAX;
	uint64_t t12 = 924959879627507341LLU;

    t12 = ((x69%x70)+(x71*x72));

    if (t12 != 18446744073709545350LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x73 = 12LLU;
	uint64_t x74 = 358389LLU;
	volatile uint32_t x75 = 3847306U;
	uint64_t t13 = 4647684093703LLU;

    t13 = ((x73%x74)+(x75*x76));

    if (t13 != 2031377580LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x88 = -1;
	volatile uint64_t t14 = 220901LLU;

    t14 = ((x85%x86)+(x87*x88));

    if (t14 != 915774500LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x90 = INT64_MAX;
	uint32_t x91 = 397081164U;
	static uint64_t x92 = UINT64_MAX;

    t15 = ((x89%x90)+(x91*x92));

    if (t15 != 18446744073312470451LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x101 = INT8_MAX;
	volatile uint8_t x103 = 27U;
	static int16_t x104 = -3;

    t16 = ((x101%x102)+(x103*x104));

    if (t16 != 46LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x105 = INT64_MIN;
	uint32_t x106 = 746U;
	static int8_t x107 = INT8_MIN;
	int16_t x108 = INT16_MAX;
	int64_t t17 = 6616167208921LL;

    t17 = ((x105%x106)+(x107*x108));

    if (t17 != -4194746LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x109 = -1LL;
	int8_t x111 = INT8_MIN;
	static uint64_t x112 = UINT64_MAX;
	static volatile uint64_t t18 = 99553621352945LLU;

    t18 = ((x109%x110)+(x111*x112));

    if (t18 != 127LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x113 = INT32_MAX;
	int8_t x114 = INT8_MIN;
	static int8_t x115 = INT8_MIN;
	static uint64_t x116 = UINT64_MAX;

    t19 = ((x113%x114)+(x115*x116));

    if (t19 != 255LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x117 = 7636U;
	int8_t x118 = INT8_MAX;
	static int8_t x119 = -49;

    t20 = ((x117%x118)+(x119*x120));

    if (t20 != -5029540) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MIN;
	int32_t x123 = INT32_MIN;
	uint32_t x124 = UINT32_MAX;
	uint32_t t21 = 3131696U;

    t21 = ((x121%x122)+(x123*x124));

    if (t21 != 2147483648U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x129 = INT64_MIN;
	int32_t x130 = -1;
	volatile uint16_t x131 = 2374U;
	volatile int64_t t22 = 64753371992LL;

    t22 = ((x129%x130)+(x131*x132));

    if (t22 != -2374LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x133 = INT8_MIN;
	volatile int64_t x134 = 13363LL;
	int16_t x135 = -1;
	static uint16_t x136 = 296U;
	int64_t t23 = 8971539469188828LL;

    t23 = ((x133%x134)+(x135*x136));

    if (t23 != -424LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x137 = INT8_MIN;
	static int64_t x138 = -1LL;
	uint64_t x140 = 78024882171357LLU;
	volatile uint64_t t24 = 5482705874001616631LLU;

    t24 = ((x137%x138)+(x139*x140));

    if (t24 != 2886920640340209LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x141 = 222;
	int64_t x142 = -272710LL;
	uint64_t x143 = 917621527LLU;

    t25 = ((x141%x142)+(x143*x144));

    if (t25 != 1247965276942LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x145 = INT16_MIN;
	volatile int16_t x147 = -1;
	static int16_t x148 = INT16_MIN;
	int32_t t26 = 3123061;

    t26 = ((x145%x146)+(x147*x148));

    if (t26 != 32136) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x149 = INT64_MIN;
	volatile uint64_t x150 = UINT64_MAX;
	uint32_t x151 = 4042U;
	int8_t x152 = INT8_MAX;
	static uint64_t t27 = 17707055982LLU;

    t27 = ((x149%x150)+(x151*x152));

    if (t27 != 9223372036855289142LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x161 = 0U;
	int32_t x163 = -1;
	int8_t x164 = -5;
	static volatile int64_t t28 = -36282235LL;

    t28 = ((x161%x162)+(x163*x164));

    if (t28 != 5LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint32_t x167 = UINT32_MAX;
	uint32_t t29 = 178687U;

    t29 = ((x165%x166)+(x167*x168));

    if (t29 != 2147483706U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x169 = 0;
	int16_t x171 = INT16_MIN;
	static uint64_t x172 = UINT64_MAX;
	volatile uint64_t t30 = 999LLU;

    t30 = ((x169%x170)+(x171*x172));

    if (t30 != 32768LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x173 = INT64_MIN;
	uint32_t x175 = 181769U;
	int16_t x176 = 0;
	int64_t t31 = -2184515LL;

    t31 = ((x173%x174)+(x175*x176));

    if (t31 != -14374576628LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x186 = INT64_MAX;
	uint32_t x187 = 0U;
	int64_t t32 = -3197412LL;

    t32 = ((x185%x186)+(x187*x188));

    if (t32 != 10LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x189 = 15;
	volatile int8_t x191 = INT8_MAX;
	volatile uint32_t x192 = 3524U;
	volatile uint32_t t33 = 87212930U;

    t33 = ((x189%x190)+(x191*x192));

    if (t33 != 447548U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x193 = INT32_MAX;
	static int8_t x194 = 62;
	int16_t x195 = INT16_MAX;
	int8_t x196 = -1;
	static volatile int32_t t34 = -340742565;

    t34 = ((x193%x194)+(x195*x196));

    if (t34 != -32766) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x197 = UINT64_MAX;
	int8_t x198 = INT8_MAX;
	uint32_t x199 = UINT32_MAX;
	int8_t x200 = -14;
	volatile uint64_t t35 = 1526840469235956262LLU;

    t35 = ((x197%x198)+(x199*x200));

    if (t35 != 15LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x209 = -1;
	int32_t x210 = INT32_MAX;
	int16_t x211 = INT16_MIN;
	int32_t t36 = 12;

    t36 = ((x209%x210)+(x211*x212));

    if (t36 != -4161537) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x218 = -1;
	uint16_t x219 = UINT16_MAX;
	volatile int32_t t37 = 280515;

    t37 = ((x217%x218)+(x219*x220));

    if (t37 != -65535) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x223 = -190658073376163294LL;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t38 = 2704462519373084594LLU;

    t38 = ((x221%x222)+(x223*x224));

    if (t38 != 190658073376163295LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x234 = -42;
	uint16_t x236 = 19U;
	uint64_t t39 = 42376208395791126LLU;

    t39 = ((x233%x234)+(x235*x236));

    if (t39 != 946576744239525LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int32_t x237 = INT32_MIN;
	int8_t x238 = INT8_MIN;
	static uint64_t x239 = UINT64_MAX;
	static uint64_t t40 = 6LLU;

    t40 = ((x237%x238)+(x239*x240));

    if (t40 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x241 = INT32_MIN;
	uint8_t x242 = UINT8_MAX;
	int64_t x243 = 1357154473075037LL;
	volatile int64_t t41 = -5293970975LL;

    t41 = ((x241%x242)+(x243*x244));

    if (t41 != 5428617892300020LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x245 = INT64_MIN;
	volatile uint64_t x246 = UINT64_MAX;
	int16_t x247 = INT16_MIN;
	int16_t x248 = INT16_MAX;
	uint64_t t42 = 2684LLU;

    t42 = ((x245%x246)+(x247*x248));

    if (t42 != 9223372035781066752LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x249 = 17367U;
	int8_t x252 = INT8_MIN;
	volatile int64_t t43 = -4LL;

    t43 = ((x249%x250)+(x251*x252));

    if (t43 != 128LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x253 = UINT32_MAX;
	int16_t x254 = INT16_MIN;
	volatile uint32_t t44 = 2111U;

    t44 = ((x253%x254)+(x255*x256));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x257 = INT64_MIN;
	int8_t x258 = INT8_MIN;
	volatile uint16_t x259 = 6305U;
	int8_t x260 = INT8_MAX;
	volatile int64_t t45 = 14003715LL;

    t45 = ((x257%x258)+(x259*x260));

    if (t45 != 800735LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x261 = UINT8_MAX;
	int16_t x262 = -1;
	int16_t x263 = INT16_MAX;
	static volatile int64_t x264 = 1LL;

    t46 = ((x261%x262)+(x263*x264));

    if (t46 != 32767LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x265 = INT64_MIN;
	int8_t x266 = -13;
	int32_t x267 = 826;
	int64_t x268 = -1LL;

    t47 = ((x265%x266)+(x267*x268));

    if (t47 != -834LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x269 = -882646912061540554LL;
	int64_t x270 = INT64_MIN;
	uint8_t x272 = 0U;

    t48 = ((x269%x270)+(x271*x272));

    if (t48 != -882646912061540554LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x273 = INT32_MIN;
	volatile uint32_t x275 = 26778688U;

    t49 = ((x273%x274)+(x275*x276));

    if (t49 != 447177664LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x277 = -66597578898310769LL;
	static uint32_t x279 = 11U;
	int8_t x280 = -1;

    t50 = ((x277%x278)+(x279*x280));

    if (t50 != 4294967285LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x281 = INT16_MAX;
	uint32_t x282 = 7929U;
	volatile int16_t x283 = -1;
	int16_t x284 = -1;
	uint32_t t51 = 509451093U;

    t51 = ((x281%x282)+(x283*x284));

    if (t51 != 1052U) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x289 = -13257;
	uint8_t x290 = 10U;
	static int32_t x291 = -15;
	static int64_t x292 = 12818127LL;
	int64_t t52 = -743516816LL;

    t52 = ((x289%x290)+(x291*x292));

    if (t52 != -192271912LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x293 = INT8_MIN;
	volatile uint64_t x294 = UINT64_MAX;
	static int8_t x296 = -9;
	static uint64_t t53 = 7490LLU;

    t53 = ((x293%x294)+(x295*x296));

    if (t53 != 18446744073709551497LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x297 = 14U;
	uint32_t x298 = UINT32_MAX;
	int64_t x299 = 1547434545670LL;
	uint32_t x300 = 101803U;
	int64_t t54 = -1836060328302185071LL;

    t54 = ((x297%x298)+(x299*x300));

    if (t54 != 157533479052843024LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x301 = INT16_MAX;
	static volatile int32_t x302 = 1023;
	static uint32_t x303 = 78773399U;
	static int8_t x304 = INT8_MAX;
	uint32_t t55 = 190U;

    t55 = ((x301%x302)+(x303*x304));

    if (t55 != 1414287112U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x305 = -1;
	static volatile int64_t x306 = INT64_MAX;
	int64_t x307 = -1LL;
	int32_t x308 = -277718324;
	volatile int64_t t56 = 30419162181168355LL;

    t56 = ((x305%x306)+(x307*x308));

    if (t56 != 277718323LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x309 = UINT64_MAX;
	int32_t x310 = INT32_MIN;
	int64_t x311 = 251858056976LL;
	uint64_t t57 = 32427875507462354LLU;

    t57 = ((x309%x310)+(x311*x312));

    if (t57 != 18446743823998978287LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x313 = INT8_MIN;
	static int32_t x314 = 261;
	volatile int32_t t58 = 79597;

    t58 = ((x313%x314)+(x315*x316));

    if (t58 != -32895) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x318 = INT64_MIN;
	uint16_t x319 = 1871U;
	uint16_t x320 = 1939U;

    t59 = ((x317%x318)+(x319*x320));

    if (t59 != 3627741LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x321 = INT8_MAX;
	int16_t x322 = INT16_MAX;
	int8_t x323 = 12;
	int32_t x324 = 0;

    t60 = ((x321%x322)+(x323*x324));

    if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x325 = INT64_MAX;
	uint8_t x327 = 69U;
	volatile int8_t x328 = INT8_MAX;
	volatile int64_t t61 = -1803167592LL;

    t61 = ((x325%x326)+(x327*x328));

    if (t61 != 8890LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x333 = 3U;
	int64_t x334 = INT64_MIN;
	static int64_t x335 = INT64_MIN;
	volatile uint64_t x336 = 5LLU;
	uint64_t t62 = 399366LLU;

    t62 = ((x333%x334)+(x335*x336));

    if (t62 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x341 = INT64_MAX;
	int32_t x342 = INT32_MIN;
	volatile int64_t t63 = 31687096844183307LL;

    t63 = ((x341%x342)+(x343*x344));

    if (t63 != -23622320129LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x354 = INT8_MIN;
	uint32_t x355 = 102U;
	static uint8_t x356 = UINT8_MAX;
	volatile uint32_t t64 = 130332U;

    t64 = ((x353%x354)+(x355*x356));

    if (t64 != 26010U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x357 = INT32_MIN;
	volatile uint64_t x358 = 3631931LLU;
	int8_t x359 = 2;
	static volatile uint64_t x360 = UINT64_MAX;
	volatile uint64_t t65 = 13LLU;

    t65 = ((x357%x358)+(x359*x360));

    if (t65 != 281952LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x366 = INT16_MIN;
	uint8_t x368 = 27U;
	volatile int32_t t66 = -159847036;

    t66 = ((x365%x366)+(x367*x368));

    if (t66 != -3456) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x369 = INT16_MIN;
	uint16_t x370 = 851U;
	int32_t x371 = -26;
	uint32_t x372 = 46U;

    t67 = ((x369%x370)+(x371*x372));

    if (t67 != 4294965670U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x373 = 17780U;
	static volatile uint32_t x374 = 14755U;
	int32_t x376 = INT32_MIN;
	static uint32_t t68 = 0U;

    t68 = ((x373%x374)+(x375*x376));

    if (t68 != 2147486673U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x377 = -133647530587810LL;
	volatile uint32_t x378 = 174101730U;
	uint64_t x379 = UINT64_MAX;
	static int8_t x380 = INT8_MIN;
	static uint64_t t69 = 7445608544702914LLU;

    t69 = ((x377%x378)+(x379*x380));

    if (t69 != 18446744073630981134LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x381 = -1;
	uint64_t x382 = UINT64_MAX;
	int16_t x384 = -3;
	volatile uint64_t t70 = 95384171453567LLU;

    t70 = ((x381%x382)+(x383*x384));

    if (t70 != 18446744073709453315LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x385 = 7U;
	int64_t x386 = INT64_MIN;
	int32_t x387 = 219395;
	int64_t x388 = -1LL;

    t71 = ((x385%x386)+(x387*x388));

    if (t71 != -219388LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t t72 = 115668020LLU;

    t72 = ((x389%x390)+(x391*x392));

    if (t72 != 458752LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x393 = INT32_MIN;
	static int16_t x394 = 1;
	static uint32_t x395 = UINT32_MAX;

    t73 = ((x393%x394)+(x395*x396));

    if (t73 != 1748051689065LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x397 = 27;
	volatile int64_t x400 = 82433671125249984LL;
	volatile int64_t t74 = 119357LL;

    t74 = ((x397%x398)+(x399*x400));

    if (t74 != -1236505066878749733LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x402 = 107032U;
	int8_t x403 = 56;
	uint64_t x404 = 293662670LLU;
	uint64_t t75 = 9898647LLU;

    t75 = ((x401%x402)+(x403*x404));

    if (t75 != 16445210152LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x405 = -4;
	int16_t x406 = INT16_MAX;
	uint32_t x407 = 11U;
	volatile uint8_t x408 = 19U;

    t76 = ((x405%x406)+(x407*x408));

    if (t76 != 205U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x411 = -1;

    t77 = ((x409%x410)+(x411*x412));

    if (t77 != 18446742326018299287LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x413 = 1645U;
	uint32_t x414 = 120036199U;
	static uint16_t x415 = UINT16_MAX;
	uint32_t t78 = 1168674U;

    t78 = ((x413%x414)+(x415*x416));

    if (t78 != 16713070U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x417 = -1;
	int8_t x418 = INT8_MIN;
	uint16_t x419 = 2U;
	uint32_t t79 = 80084U;

    t79 = ((x417%x418)+(x419*x420));

    if (t79 != 53647339U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x425 = 11U;
	static uint64_t x426 = UINT64_MAX;
	int32_t x428 = 6;
	uint64_t t80 = 31673390482765161LLU;

    t80 = ((x425%x426)+(x427*x428));

    if (t80 != 18446744073709550859LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x429 = 242U;
	volatile uint64_t x430 = 483167633276LLU;
	int8_t x431 = INT8_MIN;
	uint64_t t81 = 1213100773082225LLU;

    t81 = ((x429%x430)+(x431*x432));

    if (t81 != 18446744073709549682LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x434 = -1;
	uint64_t x435 = UINT64_MAX;
	static uint64_t t82 = 40LLU;

    t82 = ((x433%x434)+(x435*x436));

    if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint8_t x437 = 62U;
	int8_t x438 = -1;
	int8_t x439 = INT8_MIN;
	uint32_t t83 = 1564189181U;

    t83 = ((x437%x438)+(x439*x440));

    if (t83 != 128U) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x441 = INT32_MIN;
	uint8_t x442 = 5U;
	volatile int8_t x443 = INT8_MIN;
	int8_t x444 = INT8_MIN;

    t84 = ((x441%x442)+(x443*x444));

    if (t84 != 16381) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x446 = INT8_MIN;
	uint16_t x447 = 1106U;
	uint32_t x448 = UINT32_MAX;
	int64_t t85 = 92609202517LL;

    t85 = ((x445%x446)+(x447*x448));

    if (t85 != 4294966184LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x457 = -61;
	int32_t x458 = INT32_MAX;
	static int16_t x459 = 11;
	int8_t x460 = INT8_MAX;

    t86 = ((x457%x458)+(x459*x460));

    if (t86 != 1336) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x462 = 1103U;
	uint32_t x463 = 26874034U;
	static int8_t x464 = INT8_MIN;
	static volatile uint32_t t87 = 22628U;

    t87 = ((x461%x462)+(x463*x464));

    if (t87 != 855090951U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x465 = 774;
	int16_t x466 = INT16_MAX;
	int32_t x467 = 58258568;
	int16_t x468 = 2;
	volatile int32_t t88 = 1;

    t88 = ((x465%x466)+(x467*x468));

    if (t88 != 116517910) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x469 = -1;
	static volatile int8_t x470 = INT8_MAX;
	int64_t x471 = 78829786680LL;

    t89 = ((x469%x470)+(x471*x472));

    if (t89 != 867127653479LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x493 = INT32_MAX;
	int16_t x494 = INT16_MAX;
	volatile int16_t x495 = INT16_MIN;
	uint64_t x496 = 4372587192850797633LLU;
	volatile uint64_t t90 = 791822383199649LLU;

    t90 = ((x493%x494)+(x495*x496));

    if (t90 != 13370829240860114945LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x497 = -1;
	int16_t x498 = INT16_MIN;
	static volatile uint8_t x499 = 2U;
	volatile uint16_t x500 = 24U;
	int32_t t91 = -9208125;

    t91 = ((x497%x498)+(x499*x500));

    if (t91 != 47) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x501 = 1;
	uint8_t x502 = 22U;
	int16_t x503 = INT16_MIN;
	static uint8_t x504 = 19U;
	volatile int32_t t92 = 506;

    t92 = ((x501%x502)+(x503*x504));

    if (t92 != -622591) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x518 = UINT16_MAX;
	uint8_t x520 = UINT8_MAX;

    t93 = ((x517%x518)+(x519*x520));

    if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x522 = INT64_MIN;
	int16_t x523 = INT16_MIN;
	static uint64_t x524 = 58096952LLU;
	uint64_t t94 = 27LLU;

    t94 = ((x521%x522)+(x523*x524));

    if (t94 != 18446742169988628479LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x526 = 10306668456155420LLU;
	int16_t x528 = INT16_MAX;
	volatile uint64_t t95 = 1686707064264LLU;

    t95 = ((x525%x526)+(x527*x528));

    if (t95 != 2147385472LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x529 = 116447685LLU;
	uint64_t x530 = 1665756216LLU;
	static int16_t x531 = -6395;
	uint64_t t96 = 836466417485134945LLU;

    t96 = ((x529%x530)+(x531*x532));

    if (t96 != 116454080LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x534 = -1LL;
	volatile int16_t x536 = -2;
	int64_t t97 = 484162954261154911LL;

    t97 = ((x533%x534)+(x535*x536));

    if (t97 != 778620LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x537 = INT16_MIN;
	int64_t x538 = -24487102742200LL;
	int16_t x539 = INT16_MAX;
	uint64_t x540 = UINT64_MAX;
	static volatile uint64_t t98 = 82289310LLU;

    t98 = ((x537%x538)+(x539*x540));

    if (t98 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x545 = INT32_MAX;
	int16_t x548 = 1;
	volatile int64_t t99 = -3LL;

    t99 = ((x545%x546)+(x547*x548));

    if (t99 != 2147483646LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x549 = 403192962414930393LLU;
	static uint32_t x550 = 190U;
	uint8_t x552 = 0U;
	volatile uint64_t t100 = 106958461871379LLU;

    t100 = ((x549%x550)+(x551*x552));

    if (t100 != 143LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int16_t x554 = -1;
	uint16_t x555 = 7U;
	volatile int32_t t101 = -1;

    t101 = ((x553%x554)+(x555*x556));

    if (t101 != -14) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x557 = 25821885715313085LLU;
	volatile int16_t x558 = INT16_MIN;
	uint32_t x559 = UINT32_MAX;
	volatile uint64_t t102 = 412LLU;

    t102 = ((x557%x558)+(x559*x560));

    if (t102 != 25821881420345790LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x561 = -19789464662LL;
	int64_t x562 = INT64_MIN;
	static int8_t x563 = INT8_MIN;

    t103 = ((x561%x562)+(x563*x564));

    if (t103 != 18446744053920087082LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x565 = INT16_MIN;
	static int32_t x566 = INT32_MIN;
	volatile uint64_t x568 = UINT64_MAX;
	volatile uint64_t t104 = 8724052LLU;

    t104 = ((x565%x566)+(x567*x568));

    if (t104 != 18446744071562035201LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x573 = INT64_MAX;
	int32_t x574 = INT32_MIN;
	int8_t x575 = -10;
	int64_t x576 = -1LL;
	volatile int64_t t105 = 8144756LL;

    t105 = ((x573%x574)+(x575*x576));

    if (t105 != 2147483657LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x581 = UINT64_MAX;
	int64_t x582 = 342850LL;
	int16_t x583 = -1;
	int8_t x584 = 1;
	volatile uint64_t t106 = 126796620684LLU;

    t106 = ((x581%x582)+(x583*x584));

    if (t106 != 91464LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x585 = -5960;
	int64_t t107 = 1834LL;

    t107 = ((x585%x586)+(x587*x588));

    if (t107 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x589 = 2026;
	static uint16_t x590 = 29629U;
	static int64_t x591 = 238019LL;
	int32_t x592 = -1;
	static int64_t t108 = -3052473LL;

    t108 = ((x589%x590)+(x591*x592));

    if (t108 != -235993LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x593 = -10255231;
	volatile int64_t x594 = 7LL;
	volatile uint16_t x595 = 762U;
	volatile int64_t t109 = -23097741955LL;

    t109 = ((x593%x594)+(x595*x596));

    if (t109 != 15240LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x613 = INT64_MIN;
	uint8_t x614 = 40U;
	uint16_t x615 = 0U;
	static int8_t x616 = -22;
	int64_t t110 = -186026710455LL;

    t110 = ((x613%x614)+(x615*x616));

    if (t110 != -8LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x618 = INT16_MAX;
	volatile int8_t x619 = INT8_MIN;
	uint32_t x620 = 103609778U;
	uint32_t t111 = 10U;

    t111 = ((x617%x618)+(x619*x620));

    if (t111 != 3917817601U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x621 = INT64_MIN;
	int16_t x622 = INT16_MIN;
	uint32_t x623 = 4237468U;
	static uint16_t x624 = 6202U;
	static int64_t t112 = -1951LL;

    t112 = ((x621%x622)+(x623*x624));

    if (t112 != 510972760LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x626 = 1U;
	int32_t x628 = INT32_MAX;
	int64_t t113 = 7LL;

    t113 = ((x625%x626)+(x627*x628));

    if (t113 != -3210579702572086666LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x631 = INT8_MAX;
	int16_t x632 = INT16_MIN;
	volatile uint32_t t114 = 9650462U;

    t114 = ((x629%x630)+(x631*x632));

    if (t114 != 4290805770U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x633 = -1;
	volatile uint16_t x634 = 2066U;
	volatile uint16_t x635 = 30U;
	static uint8_t x636 = 11U;
	static volatile int32_t t115 = 113123519;

    t115 = ((x633%x634)+(x635*x636));

    if (t115 != 329) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x637 = INT64_MIN;
	volatile uint16_t x638 = 14U;
	int64_t x639 = -2272603LL;
	uint64_t x640 = 517080463LLU;
	uint64_t t116 = 57205415716805LLU;

    t116 = ((x637%x638)+(x639*x640));

    if (t116 != 18445568955098096419LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x661 = -1;
	volatile uint16_t x662 = 755U;
	uint8_t x663 = 47U;
	uint32_t x664 = 36843378U;
	volatile uint32_t t117 = 205678297U;

    t117 = ((x661%x662)+(x663*x664));

    if (t117 != 1731638765U) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x682 = INT32_MIN;
	int8_t x684 = 1;
	static uint32_t t118 = 12U;

    t118 = ((x681%x682)+(x683*x684));

    if (t118 != 128862301U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x689 = 232U;
	uint64_t x690 = 757658942LLU;
	static int64_t x691 = -439540LL;
	volatile int32_t x692 = INT32_MAX;

    t119 = ((x689%x690)+(x691*x692));

    if (t119 != 18445800168747349468LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x697 = -100498167282438LL;
	uint32_t x698 = 1U;
	uint32_t x699 = UINT32_MAX;
	static int64_t x700 = -1LL;
	static int64_t t120 = 3835109646LL;

    t120 = ((x697%x698)+(x699*x700));

    if (t120 != -4294967295LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x706 = 10743;
	int64_t x707 = INT64_MIN;
	uint8_t x708 = 0U;
	volatile int64_t t121 = -4627074050073406LL;

    t121 = ((x705%x706)+(x707*x708));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x709 = INT64_MIN;
	int64_t x711 = 27637066399187868LL;
	int64_t x712 = -1LL;

    t122 = ((x709%x710)+(x711*x712));

    if (t122 != -27637066399187869LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x713 = UINT8_MAX;
	int64_t x714 = 22602155LL;
	volatile uint64_t x715 = 230722721434773659LLU;
	int16_t x716 = -1;
	uint64_t t123 = 90097052677245713LLU;

    t123 = ((x713%x714)+(x715*x716));

    if (t123 != 18216021352274778212LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x717 = UINT16_MAX;
	volatile int32_t x718 = 166495;
	static volatile uint16_t x719 = UINT16_MAX;
	static uint8_t x720 = 7U;

    t124 = ((x717%x718)+(x719*x720));

    if (t124 != 524280) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x721 = UINT16_MAX;
	int64_t x722 = -2921750384LL;
	volatile int64_t x723 = -1LL;
	int64_t t125 = -1597492859565824LL;

    t125 = ((x721%x722)+(x723*x724));

    if (t125 != 34117359195875783LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x729 = -101851544;
	int64_t x730 = INT64_MAX;
	uint32_t x731 = 44487U;
	volatile int64_t t126 = 2496689LL;

    t126 = ((x729%x730)+(x731*x732));

    if (t126 != -20228908535783705LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x741 = INT64_MIN;
	int8_t x742 = INT8_MIN;
	static volatile uint8_t x743 = 119U;
	uint16_t x744 = 8U;
	static volatile int64_t t127 = 3630699802331LL;

    t127 = ((x741%x742)+(x743*x744));

    if (t127 != 952LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int32_t t128 = -203863368;

    t128 = ((x745%x746)+(x747*x748));

    if (t128 != -16257) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x749 = 107U;
	int32_t x750 = -1;
	int32_t x751 = 2086;
	volatile uint32_t t129 = 867972U;

    t129 = ((x749%x750)+(x751*x752));

    if (t129 != 723949U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x754 = -1LL;
	uint32_t x755 = UINT32_MAX;
	static volatile int16_t x756 = -1;

    t130 = ((x753%x754)+(x755*x756));

    if (t130 != 1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x757 = -3632LL;
	uint16_t x758 = UINT16_MAX;
	int16_t x759 = INT16_MIN;

    t131 = ((x757%x758)+(x759*x760));

    if (t131 != 4190672LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x761 = UINT8_MAX;
	uint32_t x762 = UINT32_MAX;
	int8_t x763 = INT8_MAX;
	volatile int8_t x764 = -5;
	volatile uint32_t t132 = 536U;

    t132 = ((x761%x762)+(x763*x764));

    if (t132 != 4294966916U) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int64_t x765 = -190348417LL;
	int8_t x767 = INT8_MAX;
	uint64_t t133 = 72562365446651LLU;

    t133 = ((x765%x766)+(x767*x768));

    if (t133 != 35808LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x769 = 1U;
	int16_t x770 = INT16_MIN;
	volatile uint8_t x771 = 0U;
	volatile int8_t x772 = -1;
	int32_t t134 = 268684;

    t134 = ((x769%x770)+(x771*x772));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x777 = 3U;
	uint8_t x779 = 1U;
	volatile uint64_t t135 = 1041452LLU;

    t135 = ((x777%x778)+(x779*x780));

    if (t135 != 2930LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x785 = -1LL;
	volatile int16_t x786 = INT16_MAX;
	static uint16_t x787 = 120U;
	uint8_t x788 = 13U;
	volatile int64_t t136 = 4440261825601639LL;

    t136 = ((x785%x786)+(x787*x788));

    if (t136 != 1559LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x789 = UINT32_MAX;
	uint16_t x790 = UINT16_MAX;
	uint32_t x791 = 3284213U;
	uint64_t x792 = 474924816139LLU;
	static volatile uint64_t t137 = 3054LLU;

    t137 = ((x789%x790)+(x791*x792));

    if (t137 != 1559754255186313607LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x794 = UINT32_MAX;
	uint64_t x795 = 9094514293484504LLU;
	int8_t x796 = INT8_MIN;

    t138 = ((x793%x794)+(x795*x796));

    if (t138 != 17282646244143535114LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x797 = -1LL;
	int64_t x798 = 13496696865428142LL;
	static int8_t x799 = INT8_MIN;
	static int8_t x800 = INT8_MAX;
	static volatile int64_t t139 = 11121393558902148LL;

    t139 = ((x797%x798)+(x799*x800));

    if (t139 != -16257LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x801 = INT64_MAX;
	uint64_t x802 = UINT64_MAX;
	int64_t x803 = 16077LL;
	static volatile uint64_t t140 = 1426514245037LLU;

    t140 = ((x801%x802)+(x803*x804));

    if (t140 != 9223372036327964671LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x805 = -1;
	int16_t x808 = INT16_MIN;
	uint64_t t141 = 515LLU;

    t141 = ((x805%x806)+(x807*x808));

    if (t141 != 18441548285883383808LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x809 = INT32_MIN;
	static int64_t x810 = INT64_MAX;
	int16_t x811 = 25;
	static uint8_t x812 = UINT8_MAX;
	int64_t t142 = -16705111LL;

    t142 = ((x809%x810)+(x811*x812));

    if (t142 != -2147477273LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x813 = INT8_MIN;
	int64_t x814 = INT64_MIN;
	static volatile int64_t t143 = -22252543LL;

    t143 = ((x813%x814)+(x815*x816));

    if (t143 != -255LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x818 = INT16_MIN;
	int16_t x819 = 182;
	static int64_t t144 = -287145676898215LL;

    t144 = ((x817%x818)+(x819*x820));

    if (t144 != 76165056247LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x826 = UINT8_MAX;
	static uint32_t x827 = 65988832U;
	volatile int8_t x828 = INT8_MIN;
	volatile int64_t t145 = -774607258LL;

    t145 = ((x825%x826)+(x827*x828));

    if (t145 != 143363968LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x829 = INT64_MAX;
	static int32_t x831 = 545601603;
	uint32_t x832 = 184289U;

    t146 = ((x829%x830)+(x831*x832));

    if (t146 != 3189415907LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x833 = 5;
	int16_t x834 = -3409;
	int8_t x835 = 1;
	int32_t t147 = 7654;

    t147 = ((x833%x834)+(x835*x836));

    if (t147 != 86) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x845 = -1;
	uint16_t x846 = 87U;
	static uint8_t x848 = UINT8_MAX;
	int32_t t148 = -1;

    t148 = ((x845%x846)+(x847*x848));

    if (t148 != -8355841) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x849 = -1922;
	uint64_t x852 = UINT64_MAX;

    t149 = ((x849%x850)+(x851*x852));

    if (t149 != 2147481726LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x853 = -3;
	int64_t x854 = INT64_MAX;
	volatile int16_t x856 = -1;
	int64_t t150 = 57410561711130LL;

    t150 = ((x853%x854)+(x855*x856));

    if (t150 != 125LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x861 = -2LL;
	static int32_t x862 = INT32_MIN;
	uint16_t x863 = UINT16_MAX;
	volatile int64_t t151 = -134343766961LL;

    t151 = ((x861%x862)+(x863*x864));

    if (t151 != -65537LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x869 = INT64_MIN;
	int64_t x870 = INT64_MIN;
	uint16_t x871 = 2U;
	static int16_t x872 = 2;

    t152 = ((x869%x870)+(x871*x872));

    if (t152 != 4LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x873 = 2U;
	int64_t x874 = 3278LL;
	uint32_t x876 = 349U;

    t153 = ((x873%x874)+(x875*x876));

    if (t153 != 4291646563LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x877 = UINT64_MAX;
	uint16_t x878 = 13254U;
	int16_t x879 = -1;
	int16_t x880 = INT16_MAX;

    t154 = ((x877%x878)+(x879*x880));

    if (t154 != 18446744073709519014LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x881 = 4;
	volatile int8_t x882 = -1;
	int64_t x883 = INT64_MIN;
	volatile uint64_t x884 = 513919524729764LLU;

    t155 = ((x881%x882)+(x883*x884));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x889 = 2046U;
	int16_t x892 = 15;
	uint32_t t156 = 6739072U;

    t156 = ((x889%x890)+(x891*x892));

    if (t156 != 30U) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x893 = UINT8_MAX;
	volatile int64_t x894 = -1LL;
	int64_t x896 = -1009062LL;
	volatile int64_t t157 = -67LL;

    t157 = ((x893%x894)+(x895*x896));

    if (t157 != 3027186LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x898 = INT32_MIN;
	uint8_t x899 = UINT8_MAX;
	int64_t x900 = 1121196847130520LL;
	volatile int64_t t158 = -499871670043682178LL;

    t158 = ((x897%x898)+(x899*x900));

    if (t158 != 285905196018315367LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x901 = 1LLU;
	int8_t x902 = -3;
	volatile uint64_t t159 = 185342906183252LLU;

    t159 = ((x901%x902)+(x903*x904));

    if (t159 != 1929331LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x918 = -1;
	int32_t x919 = INT32_MAX;
	static int64_t x920 = -1LL;
	static volatile int64_t t160 = -1717787LL;

    t160 = ((x917%x918)+(x919*x920));

    if (t160 != -2147413757LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x921 = INT16_MIN;
	uint8_t x922 = 35U;
	int32_t x924 = INT32_MIN;

    t161 = ((x921%x922)+(x923*x924));

    if (t161 != -272730423304LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x925 = INT8_MIN;
	uint16_t x926 = 1U;
	volatile int64_t x927 = -1LL;
	int16_t x928 = INT16_MAX;
	volatile int64_t t162 = 6308LL;

    t162 = ((x925%x926)+(x927*x928));

    if (t162 != -32767LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x941 = 1367U;
	uint64_t x943 = 24897589606364704LLU;
	int64_t x944 = INT64_MAX;
	uint64_t t163 = 11302729LLU;

    t163 = ((x941%x942)+(x943*x944));

    if (t163 != 18421846484103188279LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x954 = UINT16_MAX;
	uint64_t x955 = 33128407089062095LLU;
	volatile uint64_t t164 = 4986537327540431977LLU;

    t164 = ((x953%x954)+(x955*x956));

    if (t164 != 9223372036854781624LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x957 = 1;
	int16_t x958 = -1;
	uint16_t x959 = UINT16_MAX;
	int16_t x960 = INT16_MIN;
	int32_t t165 = 4;

    t165 = ((x957%x958)+(x959*x960));

    if (t165 != -2147450880) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x961 = INT32_MIN;
	int64_t x962 = INT64_MIN;
	static uint64_t x964 = 5LLU;
	volatile uint64_t t166 = 230631172790LLU;

    t166 = ((x961%x962)+(x963*x964));

    if (t166 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x965 = 124LL;
	uint16_t x966 = 13441U;
	static volatile int8_t x967 = -1;
	int16_t x968 = INT16_MAX;
	static int64_t t167 = 454558718698LL;

    t167 = ((x965%x966)+(x967*x968));

    if (t167 != -32643LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x973 = 72596651U;
	int64_t x974 = INT64_MIN;
	int16_t x975 = INT16_MIN;
	static int8_t x976 = 0;
	int64_t t168 = -4519351729LL;

    t168 = ((x973%x974)+(x975*x976));

    if (t168 != 72596651LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x986 = INT64_MAX;
	int16_t x987 = 212;
	uint8_t x988 = 5U;

    t169 = ((x985%x986)+(x987*x988));

    if (t169 != 2147484707LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x989 = INT16_MAX;
	int16_t x990 = INT16_MIN;
	uint16_t x991 = 52U;
	volatile int32_t t170 = 1920;

    t170 = ((x989%x990)+(x991*x992));

    if (t170 != 32715) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x1001 = 2LLU;
	int16_t x1003 = 1;
	int64_t x1004 = INT64_MAX;
	volatile uint64_t t171 = 1LLU;

    t171 = ((x1001%x1002)+(x1003*x1004));

    if (t171 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x1005 = 2397U;
	int8_t x1006 = -1;
	static uint16_t x1007 = 32017U;
	volatile uint16_t x1008 = UINT16_MAX;
	int32_t t172 = 1352902;

    t172 = ((x1005%x1006)+(x1007*x1008));

    if (t172 != 2098234095) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1013 = INT32_MIN;
	static int8_t x1014 = INT8_MIN;
	static uint64_t x1015 = UINT64_MAX;
	static int32_t x1016 = -1;
	uint64_t t173 = 356048223422838LLU;

    t173 = ((x1013%x1014)+(x1015*x1016));

    if (t173 != 1LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x1017 = 7U;
	volatile int16_t x1018 = -2137;
	static uint64_t x1019 = 32917267558972LLU;
	uint32_t x1020 = UINT32_MAX;
	volatile uint64_t t174 = 89947587LLU;

    t174 = ((x1017%x1018)+(x1019*x1020));

    if (t174 != 2741025639220235723LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1021 = 11U;
	volatile int8_t x1022 = 6;
	static uint64_t x1023 = 2347117957028039LLU;
	int32_t x1024 = -110211112;
	volatile uint64_t t175 = 735749086432LLU;

    t175 = ((x1021%x1022)+(x1023*x1024));

    if (t175 != 212106400648941805LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x1025 = INT16_MIN;
	int16_t x1026 = 8176;
	int32_t x1027 = -215131;
	int8_t x1028 = INT8_MIN;
	int32_t t176 = -41665586;

    t176 = ((x1025%x1026)+(x1027*x1028));

    if (t176 != 27536704) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1029 = INT32_MIN;
	int8_t x1030 = INT8_MIN;
	int16_t x1031 = INT16_MIN;
	static uint64_t x1032 = UINT64_MAX;
	uint64_t t177 = 19LLU;

    t177 = ((x1029%x1030)+(x1031*x1032));

    if (t177 != 32768LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1037 = INT64_MIN;
	int16_t x1038 = INT16_MIN;
	int8_t x1039 = INT8_MIN;
	volatile uint64_t t178 = 377LLU;

    t178 = ((x1037%x1038)+(x1039*x1040));

    if (t178 != 18446743458102148736LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1041 = -27LL;
	static int64_t x1042 = -803883LL;
	int16_t x1043 = 4717;
	int64_t t179 = 937327385224836175LL;

    t179 = ((x1041%x1042)+(x1043*x1044));

    if (t179 != -603803LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1045 = INT16_MAX;
	volatile int16_t x1046 = 306;
	int16_t x1047 = 6108;

    t180 = ((x1045%x1046)+(x1047*x1048));

    if (t180 != -6083LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x1049 = -1;
	uint8_t x1050 = UINT8_MAX;
	int16_t x1051 = 4814;
	int16_t x1052 = INT16_MIN;
	static int32_t t181 = 0;

    t181 = ((x1049%x1050)+(x1051*x1052));

    if (t181 != -157745153) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1069 = 647LL;
	int32_t x1070 = -6042722;
	int64_t x1072 = -91804LL;
	volatile int64_t t182 = 6156LL;

    t182 = ((x1069%x1070)+(x1071*x1072));

    if (t182 != -2807182065LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1074 = UINT64_MAX;
	uint32_t x1075 = 197236656U;
	uint16_t x1076 = 8289U;
	volatile uint64_t t183 = 5411512LLU;

    t183 = ((x1073%x1074)+(x1075*x1076));

    if (t183 != 2813406810LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x1077 = -1;
	uint32_t x1078 = 1U;
	volatile int64_t x1079 = -1LL;
	int16_t x1080 = INT16_MAX;
	int64_t t184 = -6217LL;

    t184 = ((x1077%x1078)+(x1079*x1080));

    if (t184 != -32767LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1081 = 356U;
	static uint32_t x1082 = UINT32_MAX;
	uint64_t x1083 = 8356826403608995523LLU;
	static int8_t x1084 = -1;

    t185 = ((x1081%x1082)+(x1083*x1084));

    if (t185 != 10089917670100556449LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1085 = INT8_MIN;
	volatile int32_t x1086 = INT32_MIN;
	static volatile int32_t x1087 = -3;
	int32_t x1088 = -1;
	volatile int32_t t186 = -285171;

    t186 = ((x1085%x1086)+(x1087*x1088));

    if (t186 != -125) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1089 = INT16_MIN;
	int32_t x1090 = INT32_MIN;
	int8_t x1091 = 8;
	int64_t x1092 = 705506246667940102LL;
	volatile int64_t t187 = 201184251LL;

    t187 = ((x1089%x1090)+(x1091*x1092));

    if (t187 != 5644049973343488048LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x1094 = INT8_MIN;
	uint8_t x1095 = 48U;
	uint16_t x1096 = 1207U;
	volatile int32_t t188 = -1;

    t188 = ((x1093%x1094)+(x1095*x1096));

    if (t188 != 57935) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1097 = 2;
	int16_t x1098 = INT16_MIN;
	volatile int16_t x1099 = -2150;
	int16_t x1100 = -7;
	static int32_t t189 = -113353;

    t189 = ((x1097%x1098)+(x1099*x1100));

    if (t189 != 15052) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1110 = 7226568U;
	static int16_t x1111 = INT16_MIN;
	volatile uint32_t t190 = 11U;

    t190 = ((x1109%x1110)+(x1111*x1112));

    if (t190 != 32768U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x1113 = -1;
	int16_t x1114 = INT16_MIN;
	int8_t x1115 = 5;
	static uint32_t x1116 = 2907738U;
	uint32_t t191 = 770U;

    t191 = ((x1113%x1114)+(x1115*x1116));

    if (t191 != 14538689U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x1117 = -1;
	uint16_t x1118 = 2646U;
	int32_t x1119 = -1;
	int16_t x1120 = -1;
	int32_t t192 = -124;

    t192 = ((x1117%x1118)+(x1119*x1120));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1126 = INT8_MIN;
	static uint64_t x1127 = 17327637168341907LLU;
	int32_t x1128 = 3737582;
	static volatile uint64_t t193 = 20802320873252LLU;

    t193 = ((x1125%x1126)+(x1127*x1128));

    if (t193 != 15393084205155276841LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1133 = -1;
	int8_t x1134 = 1;
	int64_t x1135 = -1LL;
	int8_t x1136 = -31;

    t194 = ((x1133%x1134)+(x1135*x1136));

    if (t194 != 31LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x1137 = 14LL;
	volatile int32_t x1139 = 45448;
	uint64_t x1140 = 1523267098441512170LLU;
	volatile uint64_t t195 = 4157799535885LLU;

    t195 = ((x1137%x1138)+(x1139*x1140));

    if (t195 != 17259325411607438928LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint8_t x1141 = 0U;
	int16_t x1142 = INT16_MIN;
	static volatile uint32_t x1143 = UINT32_MAX;
	static volatile uint32_t x1144 = UINT32_MAX;
	uint32_t t196 = 5U;

    t196 = ((x1141%x1142)+(x1143*x1144));

    if (t196 != 1U) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1145 = INT64_MAX;
	volatile int32_t x1146 = INT32_MIN;
	static int8_t x1147 = 5;
	uint32_t x1148 = 45911U;
	volatile int64_t t197 = 221735695861LL;

    t197 = ((x1145%x1146)+(x1147*x1148));

    if (t197 != 2147713202LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1149 = 105;
	int16_t x1150 = -2;
	uint8_t x1151 = 45U;
	static int64_t x1152 = -1LL;
	volatile int64_t t198 = -202134565LL;

    t198 = ((x1149%x1150)+(x1151*x1152));

    if (t198 != -44LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1154 = UINT16_MAX;
	static uint32_t x1155 = UINT32_MAX;
	uint32_t x1156 = 3088914U;
	volatile uint32_t t199 = 500U;

    t199 = ((x1153%x1154)+(x1155*x1156));

    if (t199 != 4291878381U) { NG(); } else { ; }
	
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

