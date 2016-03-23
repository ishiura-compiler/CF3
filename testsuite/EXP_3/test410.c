
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

int32_t x1 = 330241650;
uint32_t x3 = 19160415U;
uint32_t t1 = 837U;
int8_t x9 = 26;
uint16_t x14 = 1239U;
volatile int8_t x15 = INT8_MAX;
static uint64_t t3 = 6759671397LLU;
uint8_t x31 = 9U;
volatile int64_t x32 = 12077064454754LL;
int64_t t4 = -221075268330324LL;
int16_t x37 = INT16_MIN;
int8_t x40 = INT8_MIN;
volatile uint32_t t7 = 115481616U;
volatile uint64_t t8 = 1213539758LLU;
volatile int8_t x91 = INT8_MIN;
static volatile int8_t x94 = 27;
static volatile uint64_t t12 = 934435219LLU;
static uint8_t x100 = UINT8_MAX;
uint64_t x101 = UINT64_MAX;
static int8_t x107 = INT8_MIN;
volatile int8_t x108 = INT8_MIN;
uint64_t x115 = UINT64_MAX;
volatile int64_t x122 = -1LL;
static uint8_t x123 = 23U;
volatile uint16_t x129 = 2991U;
static int8_t x138 = 0;
int64_t x139 = -79481LL;
int64_t t20 = 7860048328771LL;
static int32_t x154 = INT32_MIN;
uint8_t x165 = UINT8_MAX;
static int8_t x166 = INT8_MIN;
uint8_t x173 = 1U;
volatile int64_t x178 = INT64_MIN;
static int64_t t26 = 7609104LL;
volatile uint32_t t28 = 87U;
uint32_t x212 = 13847772U;
static volatile uint32_t t30 = 21657U;
uint8_t x213 = 6U;
uint8_t x233 = UINT8_MAX;
int8_t x236 = INT8_MIN;
uint32_t x245 = 596788U;
int64_t x256 = INT64_MAX;
uint64_t t37 = 69984928003620156LLU;
int16_t x273 = -1;
volatile uint16_t x274 = 5U;
volatile int64_t t41 = -45LL;
static uint16_t x327 = UINT16_MAX;
static uint16_t x334 = 30741U;
int32_t x337 = INT32_MIN;
static volatile int32_t t44 = -7321938;
uint64_t x351 = 432LLU;
uint16_t x355 = 326U;
volatile uint64_t t47 = 3096773575678703LLU;
volatile int32_t t48 = 28528;
volatile int16_t x377 = INT16_MAX;
uint32_t x380 = 8U;
volatile int64_t t51 = 435690634LL;
uint64_t x382 = 1521LLU;
volatile uint32_t x388 = 1188905U;
uint32_t x408 = 3U;
volatile int64_t x414 = 2LL;
uint64_t x416 = 95796LLU;
static int8_t x426 = 2;
int32_t x445 = -7678058;
int64_t x448 = -1LL;
volatile int8_t x478 = INT8_MAX;
uint64_t x497 = UINT64_MAX;
int32_t x498 = -1;
uint64_t t70 = 1176056282463423LLU;
volatile uint64_t x506 = 1591349LLU;
int16_t x507 = -941;
uint64_t x515 = 116578012LLU;
int8_t x523 = 33;
int64_t x524 = 34LL;
volatile int64_t t76 = -16204739784427LL;
volatile int8_t x541 = -1;
int32_t x542 = 0;
uint8_t x543 = 57U;
static int16_t x550 = -1;
int32_t x552 = -4619298;
static int8_t x578 = INT8_MIN;
volatile uint16_t x581 = 32531U;
int8_t x582 = INT8_MAX;
int32_t x583 = 11;
static volatile int64_t t87 = -62LL;
int32_t x597 = -3844;
uint32_t x651 = UINT32_MAX;
static int16_t x660 = INT16_MIN;
int32_t x668 = INT32_MAX;
static int32_t x696 = -14408;
int16_t x702 = INT16_MAX;
int8_t x710 = INT8_MIN;
uint8_t x712 = 26U;
static int8_t x715 = -5;
uint32_t x718 = 1U;
static int16_t x721 = INT16_MIN;
int8_t x730 = -31;
int8_t x733 = INT8_MIN;
static int16_t x738 = -762;
uint64_t x739 = 22LLU;
volatile uint64_t t107 = 1602890LLU;
uint64_t x749 = 333LLU;
uint8_t x761 = 1U;
int32_t x762 = 4373384;
int64_t t109 = 3669642139744301204LL;
static int8_t x765 = INT8_MIN;
volatile int32_t t110 = -1;
volatile int8_t x775 = -12;
volatile uint8_t x780 = UINT8_MAX;
volatile uint64_t x788 = 314LLU;
uint64_t x803 = 64331243246LLU;
int8_t x804 = -1;
int64_t x810 = -1LL;
int8_t x812 = -1;
static volatile int64_t x821 = INT64_MIN;
int16_t x838 = INT16_MIN;
volatile int64_t t123 = -27627006671068LL;
int16_t x867 = 100;
uint32_t x878 = 731U;
int32_t x909 = -637342;
uint64_t t132 = 3339730868002LLU;
uint32_t x913 = 15660U;
int32_t x935 = -1;
int64_t x950 = INT64_MIN;
int64_t x952 = INT64_MAX;
int64_t x955 = -1LL;
int32_t t139 = 50635209;
uint8_t x988 = 102U;
uint8_t x1003 = 1U;
int16_t x1012 = INT16_MAX;
int64_t x1017 = 328636861929649697LL;
volatile int8_t x1020 = 1;
int16_t x1032 = -1;
uint8_t x1050 = 14U;
uint8_t x1052 = UINT8_MAX;
int32_t t151 = 0;
int32_t x1070 = INT32_MAX;
int32_t x1071 = INT32_MIN;
volatile int64_t t154 = -8235490495565352LL;
volatile int16_t x1076 = 90;
volatile uint64_t x1077 = UINT64_MAX;
int8_t x1087 = 2;
static volatile uint64_t x1090 = 12LLU;
uint64_t x1122 = UINT64_MAX;
uint64_t t161 = 1LLU;
volatile uint64_t t162 = 1554LLU;
int16_t x1140 = INT16_MAX;
volatile int32_t t164 = -7934338;
static uint64_t x1154 = 85476011585837LLU;
static uint16_t x1156 = UINT16_MAX;
uint8_t x1175 = 2U;
int16_t x1183 = INT16_MAX;
volatile int64_t t171 = -17721639849LL;
int64_t x1190 = INT64_MIN;
int8_t x1191 = INT8_MIN;
volatile int8_t x1209 = INT8_MIN;
uint8_t x1220 = 4U;
uint32_t x1233 = 3504U;
int16_t x1241 = -1000;
int64_t t181 = -2132871LL;
int8_t x1251 = -1;
int64_t x1255 = -1LL;
int32_t x1261 = -878301694;
volatile int8_t x1262 = -1;
int64_t x1290 = -62662124450LL;
volatile uint32_t t189 = 0U;
uint16_t x1303 = 107U;
uint32_t x1321 = UINT32_MAX;
volatile int64_t t192 = -1183688987342593682LL;
int64_t x1328 = -61684342LL;
int64_t x1337 = -129284362552194983LL;
uint64_t x1350 = 1179LLU;
volatile uint64_t t196 = 5177LLU;
uint64_t x1367 = 3992LLU;
int16_t x1368 = INT16_MAX;
uint64_t t197 = 2527851363861LLU;
static uint32_t x1375 = 8925816U;
uint16_t x1383 = 20928U;
uint64_t x1384 = 7333593102533LLU;
volatile uint64_t t199 = 0LLU;


void f0(void) {
    	uint32_t x2 = 13608793U;
	int8_t x4 = INT8_MAX;
	volatile uint32_t t0 = 1246U;

    t0 = ((x1-x2)/(x3*x4));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 16616;
	int16_t x6 = INT16_MAX;
	uint32_t x7 = 3031U;
	static int16_t x8 = 139;

    t1 = ((x5-x6)/(x7*x8));

    if (t1 != 10194U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x10 = -3229;
	int8_t x11 = INT8_MIN;
	volatile uint32_t x12 = UINT32_MAX;
	volatile uint32_t t2 = 13768U;

    t2 = ((x9-x10)/(x11*x12));

    if (t2 != 25U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x13 = UINT64_MAX;
	volatile uint8_t x16 = UINT8_MAX;

    t3 = ((x13-x14)/(x15*x16));

    if (t3 != 569607660142335LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x29 = INT32_MAX;
	volatile uint8_t x30 = 13U;

    t4 = ((x29-x30)/(x31*x32));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x33 = UINT8_MAX;
	int32_t x34 = -12137;
	volatile uint8_t x35 = 78U;
	int16_t x36 = INT16_MIN;
	volatile int32_t t5 = -1514;

    t5 = ((x33-x34)/(x35*x36));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x38 = INT64_MIN;
	uint32_t x39 = 703040U;
	int64_t t6 = -950LL;

    t6 = ((x37-x38)/(x39*x40));

    if (t6 != 2193441119LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int16_t x45 = INT16_MIN;
	static uint32_t x46 = 10U;
	int16_t x47 = 3;
	int16_t x48 = INT16_MAX;

    t7 = ((x45-x46)/(x47*x48));

    if (t7 != 43691U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x53 = 1957980967571419LLU;
	int16_t x54 = -7468;
	volatile uint32_t x55 = 1506427U;
	int32_t x56 = INT32_MAX;

    t8 = ((x53-x54)/(x55*x56));

    if (t8 != 912395LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x69 = INT8_MIN;
	uint32_t x70 = UINT32_MAX;
	static volatile int8_t x71 = INT8_MIN;
	volatile uint16_t x72 = 1U;
	uint32_t t9 = 7U;

    t9 = ((x69-x70)/(x71*x72));

    if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x81 = -1LL;
	int8_t x82 = INT8_MAX;
	static volatile int32_t x83 = INT32_MAX;
	int32_t x84 = -1;
	static int64_t t10 = -42970712994619LL;

    t10 = ((x81-x82)/(x83*x84));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x89 = INT32_MIN;
	int16_t x90 = -1;
	int8_t x92 = INT8_MAX;
	int32_t t11 = -2482014;

    t11 = ((x89-x90)/(x91*x92));

    if (t11 != 132104) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x93 = 58LLU;
	uint64_t x95 = UINT64_MAX;
	int32_t x96 = INT32_MIN;

    t12 = ((x93-x94)/(x95*x96));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x97 = -13;
	uint32_t x98 = UINT32_MAX;
	int32_t x99 = -15486;
	static uint32_t t13 = 1086906074U;

    t13 = ((x97-x98)/(x99*x100));

    if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x102 = -5918LL;
	static volatile uint16_t x103 = 8063U;
	uint16_t x104 = 4047U;
	uint64_t t14 = 4147373068784LLU;

    t14 = ((x101-x102)/(x103*x104));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x105 = INT32_MIN;
	volatile int64_t x106 = INT64_MIN;
	volatile int64_t t15 = -75373LL;

    t15 = ((x105-x106)/(x107*x108));

    if (t15 != 562949953290240LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x113 = 5;
	uint8_t x114 = 1U;
	uint32_t x116 = 76828459U;
	volatile uint64_t t16 = 6116380533645LLU;

    t16 = ((x113-x114)/(x115*x116));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x121 = INT32_MIN;
	uint64_t x124 = UINT64_MAX;
	uint64_t t17 = 9095298149LLU;

    t17 = ((x121-x122)/(x123*x124));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int32_t x125 = -134102646;
	static int32_t x126 = INT32_MIN;
	int64_t x127 = -1LL;
	int64_t x128 = 2281LL;
	int64_t t18 = 139105844390903868LL;

    t18 = ((x125-x126)/(x127*x128));

    if (t18 != -882674LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x130 = UINT16_MAX;
	static uint8_t x131 = 1U;
	int8_t x132 = INT8_MIN;
	static int32_t t19 = -2724513;

    t19 = ((x129-x130)/(x131*x132));

    if (t19 != 488) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x137 = INT8_MIN;
	volatile int64_t x140 = -757132992LL;

    t20 = ((x137-x138)/(x139*x140));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x141 = -38;
	volatile uint32_t x142 = UINT32_MAX;
	static int64_t x143 = INT64_MIN;
	int8_t x144 = 1;
	volatile int64_t t21 = -12704151808321766LL;

    t21 = ((x141-x142)/(x143*x144));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x149 = 5653U;
	int32_t x150 = INT32_MAX;
	volatile uint64_t x151 = 1LLU;
	volatile int8_t x152 = INT8_MIN;
	static uint64_t t22 = 13613406407102487LLU;

    t22 = ((x149-x150)/(x151*x152));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x153 = -283;
	int8_t x155 = INT8_MIN;
	static volatile int16_t x156 = INT16_MIN;
	int32_t t23 = 1;

    t23 = ((x153-x154)/(x155*x156));

    if (t23 != 511) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x167 = 678819LL;
	static uint16_t x168 = 424U;
	int64_t t24 = 118718LL;

    t24 = ((x165-x166)/(x167*x168));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x174 = 35772445570LLU;
	int16_t x175 = INT16_MIN;
	static int64_t x176 = -1LL;
	uint64_t t25 = 182811270895LLU;

    t25 = ((x173-x174)/(x175*x176));

    if (t25 != 562949952329623LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x177 = -1;
	uint8_t x179 = 14U;
	int16_t x180 = -17;

    t26 = ((x177-x178)/(x179*x180));

    if (t26 != -38753664020398217LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x185 = INT32_MIN;
	static int32_t x186 = INT32_MIN;
	volatile uint8_t x187 = UINT8_MAX;
	int8_t x188 = -1;
	int32_t t27 = 500;

    t27 = ((x185-x186)/(x187*x188));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x197 = 1U;
	uint32_t x198 = 14U;
	volatile uint16_t x199 = 74U;
	uint32_t x200 = UINT32_MAX;

    t28 = ((x197-x198)/(x199*x200));

    if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x205 = 28440884LLU;
	uint16_t x206 = 94U;
	int8_t x207 = INT8_MIN;
	int32_t x208 = -1;
	static volatile uint64_t t29 = 16339LLU;

    t29 = ((x205-x206)/(x207*x208));

    if (t29 != 222193LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x209 = INT32_MIN;
	uint32_t x210 = 2750575U;
	int16_t x211 = -154;

    t30 = ((x209-x210)/(x211*x212));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x214 = 114U;
	uint8_t x215 = UINT8_MAX;
	int16_t x216 = -799;
	static int32_t t31 = -1303837;

    t31 = ((x213-x214)/(x215*x216));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x217 = INT64_MIN;
	int64_t x218 = INT64_MIN;
	int8_t x219 = INT8_MIN;
	static volatile int8_t x220 = INT8_MAX;
	volatile int64_t t32 = 16149LL;

    t32 = ((x217-x218)/(x219*x220));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x225 = 5678U;
	volatile int16_t x226 = INT16_MAX;
	int32_t x227 = INT32_MIN;
	uint64_t x228 = 411360623156127762LLU;
	volatile uint64_t t33 = 445960212201376571LLU;

    t33 = ((x225-x226)/(x227*x228));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x234 = 14U;
	static uint8_t x235 = UINT8_MAX;
	int32_t t34 = 0;

    t34 = ((x233-x234)/(x235*x236));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x246 = -1;
	volatile uint32_t x247 = 255133U;
	uint64_t x248 = 93787LLU;
	volatile uint64_t t35 = 979820783314982LLU;

    t35 = ((x245-x246)/(x247*x248));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x249 = UINT8_MAX;
	int16_t x250 = INT16_MIN;
	uint16_t x251 = 9146U;
	int8_t x252 = INT8_MAX;
	static int32_t t36 = -211;

    t36 = ((x249-x250)/(x251*x252));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x253 = 728832362U;
	static uint8_t x254 = UINT8_MAX;
	uint64_t x255 = 65439LLU;

    t37 = ((x253-x254)/(x255*x256));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x275 = INT16_MIN;
	int16_t x276 = -1;
	static volatile int32_t t38 = 12;

    t38 = ((x273-x274)/(x275*x276));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x301 = -83;
	uint32_t x302 = 950U;
	int16_t x303 = INT16_MIN;
	uint32_t x304 = UINT32_MAX;
	static volatile uint32_t t39 = 1023323159U;

    t39 = ((x301-x302)/(x303*x304));

    if (t39 != 131071U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x309 = 82U;
	volatile uint64_t x310 = UINT64_MAX;
	int32_t x311 = INT32_MIN;
	int8_t x312 = 1;
	uint64_t t40 = 3552573LLU;

    t40 = ((x309-x310)/(x311*x312));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x321 = INT8_MAX;
	int64_t x322 = -14206LL;
	int64_t x323 = 17663621798757LL;
	uint16_t x324 = 54U;

    t41 = ((x321-x322)/(x323*x324));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x325 = 5183U;
	static uint32_t x326 = UINT32_MAX;
	int16_t x328 = INT16_MAX;
	volatile uint32_t t42 = 130087U;

    t42 = ((x325-x326)/(x327*x328));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x333 = UINT8_MAX;
	int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MIN;
	volatile int32_t t43 = -1422268;

    t43 = ((x333-x334)/(x335*x336));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x338 = -1;
	int16_t x339 = 6447;
	uint16_t x340 = UINT16_MAX;

    t44 = ((x337-x338)/(x339*x340));

    if (t44 != -5) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x345 = 31U;
	uint32_t x346 = UINT32_MAX;
	int8_t x347 = -1;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t45 = 32422104LLU;

    t45 = ((x345-x346)/(x347*x348));

    if (t45 != 32LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x349 = -1;
	uint16_t x350 = UINT16_MAX;
	uint8_t x352 = 1U;
	uint64_t t46 = 15695LLU;

    t46 = ((x349-x350)/(x351*x352));

    if (t46 != 42700796466920106LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x353 = -1;
	uint8_t x354 = UINT8_MAX;
	volatile uint64_t x356 = 508876557093931353LLU;

    t47 = ((x353-x354)/(x355*x356));

    if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x357 = INT32_MIN;
	int32_t x358 = INT32_MIN;
	static volatile int16_t x359 = INT16_MAX;
	static volatile uint16_t x360 = 903U;

    t48 = ((x357-x358)/(x359*x360));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x365 = -30129LL;
	uint8_t x366 = UINT8_MAX;
	volatile int16_t x367 = INT16_MAX;
	int16_t x368 = INT16_MIN;
	static int64_t t49 = -195268682LL;

    t49 = ((x365-x366)/(x367*x368));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x373 = -1;
	int64_t x374 = -1LL;
	static int16_t x375 = INT16_MIN;
	uint64_t x376 = 738520420LLU;
	volatile uint64_t t50 = 40598857LLU;

    t50 = ((x373-x374)/(x375*x376));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x378 = -49;
	int64_t x379 = 138857585382766LL;

    t51 = ((x377-x378)/(x379*x380));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x381 = INT16_MIN;
	uint8_t x383 = 9U;
	int8_t x384 = 13;
	volatile uint64_t t52 = 9279470447038597LLU;

    t52 = ((x381-x382)/(x383*x384));

    if (t52 != 157664479262474507LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x385 = INT8_MAX;
	static int32_t x386 = INT32_MAX;
	int8_t x387 = 51;
	volatile uint32_t t53 = 5U;

    t53 = ((x385-x386)/(x387*x388));

    if (t53 != 35U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x405 = -171;
	uint16_t x406 = UINT16_MAX;
	int64_t x407 = 348916475329LL;
	int64_t t54 = -64071LL;

    t54 = ((x405-x406)/(x407*x408));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x413 = 9;
	static volatile int32_t x415 = INT32_MAX;
	volatile uint64_t t55 = 839289743793035LLU;

    t55 = ((x413-x414)/(x415*x416));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x417 = -11;
	int16_t x418 = -2;
	uint32_t x419 = UINT32_MAX;
	int16_t x420 = INT16_MIN;
	volatile uint32_t t56 = 489U;

    t56 = ((x417-x418)/(x419*x420));

    if (t56 != 131071U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x421 = INT32_MIN;
	int64_t x422 = 6661604547LL;
	uint32_t x423 = UINT32_MAX;
	static int8_t x424 = INT8_MIN;
	int64_t t57 = -107595557575558698LL;

    t57 = ((x421-x422)/(x423*x424));

    if (t57 != -68821001LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x425 = 0LL;
	uint16_t x427 = UINT16_MAX;
	volatile int8_t x428 = 1;
	volatile int64_t t58 = 1197522869846169109LL;

    t58 = ((x425-x426)/(x427*x428));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x433 = -249941LL;
	int8_t x434 = -1;
	uint16_t x435 = 1U;
	int32_t x436 = -1;
	int64_t t59 = 110774005367LL;

    t59 = ((x433-x434)/(x435*x436));

    if (t59 != 249940LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x437 = UINT32_MAX;
	volatile int64_t x438 = -2068LL;
	volatile uint32_t x439 = 32387U;
	static volatile uint16_t x440 = UINT16_MAX;
	static volatile int64_t t60 = 25575155780270LL;

    t60 = ((x437-x438)/(x439*x440));

    if (t60 != 2LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x446 = INT64_MIN;
	static int32_t x447 = -1;
	volatile int64_t t61 = 435157619658494LL;

    t61 = ((x445-x446)/(x447*x448));

    if (t61 != 9223372036847097750LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x453 = -1303;
	uint8_t x454 = 0U;
	int64_t x455 = 6954LL;
	static volatile int32_t x456 = -1;
	int64_t t62 = 0LL;

    t62 = ((x453-x454)/(x455*x456));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x457 = 19340U;
	volatile int16_t x458 = -65;
	int16_t x459 = -1;
	int64_t x460 = -2225952944LL;
	int64_t t63 = 959610054471394LL;

    t63 = ((x457-x458)/(x459*x460));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x465 = 2064U;
	uint32_t x466 = 828580U;
	static int16_t x467 = INT16_MAX;
	int16_t x468 = INT16_MIN;
	static volatile uint32_t t64 = 2U;

    t64 = ((x465-x466)/(x467*x468));

    if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x469 = 5;
	static uint8_t x470 = UINT8_MAX;
	static uint16_t x471 = UINT16_MAX;
	int16_t x472 = -843;
	int32_t t65 = -1734386;

    t65 = ((x469-x470)/(x471*x472));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x477 = 1;
	int8_t x479 = 7;
	static int32_t x480 = -1;
	volatile int32_t t66 = -14211027;

    t66 = ((x477-x478)/(x479*x480));

    if (t66 != 18) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x481 = 218953553442368749LL;
	int16_t x482 = INT16_MIN;
	int16_t x483 = -14167;
	uint8_t x484 = UINT8_MAX;
	volatile int64_t t67 = -2470LL;

    t67 = ((x481-x482)/(x483*x484));

    if (t67 != -60608554108LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x485 = -56;
	int32_t x486 = INT32_MIN;
	uint16_t x487 = 415U;
	static int8_t x488 = INT8_MIN;
	volatile int32_t t68 = 106333218;

    t68 = ((x485-x486)/(x487*x488));

    if (t68 != -40427) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x489 = INT8_MIN;
	uint32_t x490 = 728U;
	uint8_t x491 = 21U;
	int8_t x492 = -1;
	uint32_t t69 = 7357U;

    t69 = ((x489-x490)/(x491*x492));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x499 = -1;
	int16_t x500 = INT16_MIN;

    t70 = ((x497-x498)/(x499*x500));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x501 = 7481475LLU;
	static volatile int32_t x502 = INT32_MIN;
	int8_t x503 = -1;
	int8_t x504 = INT8_MAX;
	volatile uint64_t t71 = 4957030LLU;

    t71 = ((x501-x502)/(x503*x504));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x505 = INT16_MIN;
	uint32_t x508 = UINT32_MAX;
	static volatile uint64_t t72 = 57840076LLU;

    t72 = ((x505-x506)/(x507*x508));

    if (t72 != 19603341204790571LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x513 = 1823787529207320998LLU;
	int16_t x514 = INT16_MIN;
	uint64_t x516 = 2192792749902559LLU;
	volatile uint64_t t73 = 3083019315530088LLU;

    t73 = ((x513-x514)/(x515*x516));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x521 = 284325452802376007LLU;
	static int16_t x522 = 4419;
	uint64_t t74 = 70LLU;

    t74 = ((x521-x522)/(x523*x524));

    if (t74 != 253409494476267LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x525 = UINT64_MAX;
	int16_t x526 = 26;
	uint16_t x527 = 29U;
	static uint8_t x528 = 24U;
	static volatile uint64_t t75 = 33601044497LLU;

    t75 = ((x525-x526)/(x527*x528));

    if (t75 != 26503942634640160LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x529 = -234833308268LL;
	volatile int32_t x530 = -1;
	uint32_t x531 = 27439U;
	volatile uint16_t x532 = 1U;

    t76 = ((x529-x530)/(x531*x532));

    if (t76 != -8558377LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x533 = INT64_MIN;
	int8_t x534 = INT8_MIN;
	static int8_t x535 = -2;
	int16_t x536 = -1;
	volatile int64_t t77 = 175247884426794024LL;

    t77 = ((x533-x534)/(x535*x536));

    if (t77 != -4611686018427387840LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x544 = 333U;
	int32_t t78 = -136969;

    t78 = ((x541-x542)/(x543*x544));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x549 = 517766538LL;
	static uint8_t x551 = UINT8_MAX;
	int64_t t79 = 10716630379LL;

    t79 = ((x549-x550)/(x551*x552));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x553 = 47U;
	static volatile int8_t x554 = 2;
	uint8_t x555 = 2U;
	static int16_t x556 = INT16_MAX;
	int32_t t80 = 1751;

    t80 = ((x553-x554)/(x555*x556));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x557 = 174843787299642LL;
	int8_t x558 = -1;
	uint64_t x559 = 10642313714LLU;
	static int64_t x560 = 677052LL;
	uint64_t t81 = 2299365033975LLU;

    t81 = ((x557-x558)/(x559*x560));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x569 = INT32_MAX;
	uint32_t x570 = 13911U;
	static int32_t x571 = -1;
	volatile int8_t x572 = 29;
	volatile uint32_t t82 = 606888008U;

    t82 = ((x569-x570)/(x571*x572));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x573 = 38487596U;
	int32_t x574 = -23725911;
	int32_t x575 = -3;
	volatile int8_t x576 = INT8_MIN;
	uint32_t t83 = 319001816U;

    t83 = ((x573-x574)/(x575*x576));

    if (t83 != 162014U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x577 = 6U;
	int32_t x579 = -1;
	volatile int64_t x580 = -1LL;
	int64_t t84 = 69532LL;

    t84 = ((x577-x578)/(x579*x580));

    if (t84 != 134LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x584 = 117;
	static int32_t t85 = -337940556;

    t85 = ((x581-x582)/(x583*x584));

    if (t85 != 25) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x589 = 0U;
	uint64_t x590 = UINT64_MAX;
	uint32_t x591 = 281636260U;
	int16_t x592 = INT16_MIN;
	static uint64_t t86 = 52796258857LLU;

    t86 = ((x589-x590)/(x591*x592));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x593 = 15;
	int32_t x594 = INT32_MAX;
	int64_t x595 = -1LL;
	static volatile int16_t x596 = -1;

    t87 = ((x593-x594)/(x595*x596));

    if (t87 != -2147483632LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x598 = 641355;
	int8_t x599 = -21;
	uint64_t x600 = UINT64_MAX;
	volatile uint64_t t88 = 13769104LLU;

    t88 = ((x597-x598)/(x599*x600));

    if (t88 != 878416384462328877LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x605 = INT8_MAX;
	int16_t x606 = INT16_MIN;
	int64_t x607 = -80391LL;
	static int8_t x608 = -24;
	volatile int64_t t89 = -11191872LL;

    t89 = ((x605-x606)/(x607*x608));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x617 = 6481967321LL;
	static int16_t x618 = 66;
	int16_t x619 = -1;
	uint64_t x620 = UINT64_MAX;
	uint64_t t90 = 52546LLU;

    t90 = ((x617-x618)/(x619*x620));

    if (t90 != 6481967255LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x629 = -1;
	uint16_t x630 = 871U;
	int8_t x631 = 24;
	volatile int8_t x632 = INT8_MIN;
	int32_t t91 = 25;

    t91 = ((x629-x630)/(x631*x632));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x649 = INT64_MIN;
	static int8_t x650 = INT8_MIN;
	int16_t x652 = INT16_MIN;
	volatile int64_t t92 = 23043814702LL;

    t92 = ((x649-x650)/(x651*x652));

    if (t92 != -281474976710655LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x653 = 1730949167908455467LLU;
	int16_t x654 = INT16_MAX;
	uint32_t x655 = UINT32_MAX;
	int16_t x656 = INT16_MIN;
	volatile uint64_t t93 = 13834LLU;

    t93 = ((x653-x654)/(x655*x656));

    if (t93 != 52824376462049LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x657 = -1LL;
	int64_t x658 = 45383867308LL;
	volatile int16_t x659 = 2;
	volatile int64_t t94 = -4816067642LL;

    t94 = ((x657-x658)/(x659*x660));

    if (t94 != 692502LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x661 = 3U;
	int64_t x662 = -1LL;
	volatile uint32_t x663 = 4006U;
	int8_t x664 = -1;
	static volatile int64_t t95 = 169291370LL;

    t95 = ((x661-x662)/(x663*x664));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x665 = 18;
	uint64_t x666 = 29942LLU;
	int64_t x667 = 262072961LL;
	volatile uint64_t t96 = 154LLU;

    t96 = ((x665-x666)/(x667*x668));

    if (t96 != 32LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x681 = 797;
	int16_t x682 = INT16_MIN;
	static uint64_t x683 = UINT64_MAX;
	uint32_t x684 = UINT32_MAX;
	uint64_t t97 = 6057134712870662936LLU;

    t97 = ((x681-x682)/(x683*x684));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x693 = 1028617174398LLU;
	volatile uint8_t x694 = 31U;
	int16_t x695 = -1;
	static volatile uint64_t t98 = 1041312254LLU;

    t98 = ((x693-x694)/(x695*x696));

    if (t98 != 71392085LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x701 = -1644;
	uint32_t x703 = 1191791U;
	volatile uint16_t x704 = 112U;
	uint32_t t99 = 160516U;

    t99 = ((x701-x702)/(x703*x704));

    if (t99 != 32U) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int32_t x709 = INT32_MIN;
	int16_t x711 = INT16_MIN;
	volatile int32_t t100 = -30012;

    t100 = ((x709-x710)/(x711*x712));

    if (t100 != 2520) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x713 = 191U;
	int64_t x714 = INT64_MAX;
	int16_t x716 = INT16_MIN;
	volatile int64_t t101 = -42347414759288942LL;

    t101 = ((x713-x714)/(x715*x716));

    if (t101 != -56294995342131LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x717 = INT8_MIN;
	int8_t x719 = INT8_MAX;
	int32_t x720 = -1962;
	static volatile uint32_t t102 = 1489941494U;

    t102 = ((x717-x718)/(x719*x720));

    if (t102 != 1U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x722 = 2U;
	volatile uint32_t x723 = UINT32_MAX;
	volatile uint32_t x724 = 8U;
	volatile uint32_t t103 = 0U;

    t103 = ((x721-x722)/(x723*x724));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x729 = -16;
	static int8_t x731 = -1;
	static int64_t x732 = 4161438LL;
	static volatile int64_t t104 = 0LL;

    t104 = ((x729-x730)/(x731*x732));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x734 = INT16_MAX;
	static volatile int16_t x735 = 4;
	int8_t x736 = INT8_MAX;
	volatile int32_t t105 = 1579947;

    t105 = ((x733-x734)/(x735*x736));

    if (t105 != -64) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x737 = UINT16_MAX;
	uint16_t x740 = UINT16_MAX;
	volatile uint64_t t106 = 166942LLU;

    t106 = ((x737-x738)/(x739*x740));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x745 = 72235184627453LLU;
	int64_t x746 = -1LL;
	int8_t x747 = INT8_MAX;
	static volatile uint16_t x748 = 60U;

    t107 = ((x745-x746)/(x747*x748));

    if (t107 != 9479683021LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x750 = -1;
	int16_t x751 = -1;
	volatile uint64_t x752 = 2967566335LLU;
	uint64_t t108 = 52403688521692LLU;

    t108 = ((x749-x750)/(x751*x752));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x763 = INT8_MIN;
	int64_t x764 = 14LL;

    t109 = ((x761-x762)/(x763*x764));

    if (t109 != 2440LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x766 = 17237747;
	int8_t x767 = INT8_MAX;
	int8_t x768 = INT8_MAX;

    t110 = ((x765-x766)/(x767*x768));

    if (t110 != -1068) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x773 = UINT32_MAX;
	int64_t x774 = -1LL;
	int32_t x776 = -1;
	volatile int64_t t111 = 114366209144020LL;

    t111 = ((x773-x774)/(x775*x776));

    if (t111 != 357913941LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x777 = INT32_MIN;
	int64_t x778 = INT64_MIN;
	int32_t x779 = -3019;
	static volatile int64_t t112 = -1249227LL;

    t112 = ((x777-x778)/(x779*x780));

    if (t112 != -11980816962774LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x781 = INT32_MAX;
	uint16_t x782 = 77U;
	volatile uint64_t x783 = UINT64_MAX;
	uint16_t x784 = UINT16_MAX;
	volatile uint64_t t113 = 6431609397703408577LLU;

    t113 = ((x781-x782)/(x783*x784));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x785 = -41;
	uint64_t x786 = UINT64_MAX;
	uint32_t x787 = 1U;
	uint64_t t114 = 30LLU;

    t114 = ((x785-x786)/(x787*x788));

    if (t114 != 58747592591431692LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x801 = -1LL;
	static uint8_t x802 = 12U;
	uint64_t t115 = 476LLU;

    t115 = ((x801-x802)/(x803*x804));

    if (t115 != 1LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x805 = -1;
	static uint16_t x806 = 2875U;
	uint16_t x807 = 2197U;
	volatile int16_t x808 = -1502;
	int32_t t116 = 28419356;

    t116 = ((x805-x806)/(x807*x808));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x809 = -81497;
	volatile int8_t x811 = -1;
	volatile int64_t t117 = -441104040614234732LL;

    t117 = ((x809-x810)/(x811*x812));

    if (t117 != -81496LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x813 = -7;
	static volatile uint8_t x814 = 0U;
	static volatile uint64_t x815 = 246247799897385484LLU;
	volatile int8_t x816 = INT8_MIN;
	uint64_t t118 = 385831312764LLU;

    t118 = ((x813-x814)/(x815*x816));

    if (t118 != 3LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x817 = INT64_MAX;
	uint64_t x818 = 226534020LLU;
	int8_t x819 = INT8_MIN;
	uint64_t x820 = UINT64_MAX;
	volatile uint64_t t119 = 2045355824301LLU;

    t119 = ((x817-x818)/(x819*x820));

    if (t119 != 72057594036158138LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x822 = INT16_MIN;
	int16_t x823 = INT16_MIN;
	int8_t x824 = -1;
	volatile int64_t t120 = 2844992LL;

    t120 = ((x821-x822)/(x823*x824));

    if (t120 != -281474976710655LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x825 = INT64_MAX;
	int32_t x826 = INT32_MAX;
	int16_t x827 = 1020;
	int8_t x828 = 52;
	volatile int64_t t121 = 44LL;

    t121 = ((x825-x826)/(x827*x828));

    if (t121 != 173894646204888LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x829 = 70183905036530LL;
	uint16_t x830 = 3340U;
	volatile int16_t x831 = 1;
	int64_t x832 = INT64_MAX;
	int64_t t122 = 13788337711598338LL;

    t122 = ((x829-x830)/(x831*x832));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x837 = -1059845176308703LL;
	int8_t x839 = -1;
	volatile uint16_t x840 = 884U;

    t123 = ((x837-x838)/(x839*x840));

    if (t123 != 1198919882665LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x857 = 3330U;
	int32_t x858 = 244386322;
	static uint32_t x859 = UINT32_MAX;
	int8_t x860 = INT8_MIN;
	static uint32_t t124 = 90769U;

    t124 = ((x857-x858)/(x859*x860));

    if (t124 != 31645189U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x865 = INT32_MIN;
	int64_t x866 = INT64_MIN;
	uint8_t x868 = 76U;
	volatile int64_t t125 = -671770453062548102LL;

    t125 = ((x865-x866)/(x867*x868));

    if (t125 != 1213601583514117LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x873 = UINT64_MAX;
	static int16_t x874 = INT16_MIN;
	int16_t x875 = INT16_MIN;
	uint8_t x876 = 25U;
	uint64_t t126 = 24714321294261707LLU;

    t126 = ((x873-x874)/(x875*x876));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x877 = INT16_MAX;
	int8_t x879 = INT8_MIN;
	int32_t x880 = -1;
	volatile uint32_t t127 = 382U;

    t127 = ((x877-x878)/(x879*x880));

    if (t127 != 250U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x885 = -1;
	int8_t x886 = -1;
	volatile uint32_t x887 = 3237295U;
	int8_t x888 = 27;
	volatile uint32_t t128 = 495U;

    t128 = ((x885-x886)/(x887*x888));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x893 = INT16_MIN;
	volatile int8_t x894 = INT8_MIN;
	uint64_t x895 = 93715LLU;
	int64_t x896 = -119LL;
	volatile uint64_t t129 = 4554212850643784470LLU;

    t129 = ((x893-x894)/(x895*x896));

    if (t129 != 1LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x901 = UINT32_MAX;
	int8_t x902 = INT8_MAX;
	volatile int32_t x903 = INT32_MAX;
	uint32_t x904 = 33U;
	uint32_t t130 = 88U;

    t130 = ((x901-x902)/(x903*x904));

    if (t130 != 1U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x905 = 70;
	int16_t x906 = INT16_MIN;
	int8_t x907 = -52;
	int64_t x908 = 40351634214LL;
	static volatile int64_t t131 = 45039972LL;

    t131 = ((x905-x906)/(x907*x908));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x910 = 294273LLU;
	static int64_t x911 = 4LL;
	int16_t x912 = -7;

    t132 = ((x909-x910)/(x911*x912));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x914 = INT8_MIN;
	int32_t x915 = INT32_MIN;
	static uint64_t x916 = UINT64_MAX;
	volatile uint64_t t133 = 42LLU;

    t133 = ((x913-x914)/(x915*x916));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x917 = UINT64_MAX;
	volatile int16_t x918 = INT16_MIN;
	static uint64_t x919 = 7890LLU;
	uint8_t x920 = 41U;
	static uint64_t t134 = 603300498LLU;

    t134 = ((x917-x918)/(x919*x920));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x933 = -23313201LL;
	int16_t x934 = -919;
	static int16_t x936 = INT16_MIN;
	int64_t t135 = -954429LL;

    t135 = ((x933-x934)/(x935*x936));

    if (t135 != -711LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x945 = UINT32_MAX;
	volatile uint16_t x946 = 114U;
	volatile int16_t x947 = INT16_MIN;
	volatile uint8_t x948 = 18U;
	uint32_t t136 = 34872382U;

    t136 = ((x945-x946)/(x947*x948));

    if (t136 != 1U) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x949 = -9346;
	static uint64_t x951 = UINT64_MAX;
	uint64_t t137 = 234755203890LLU;

    t137 = ((x949-x950)/(x951*x952));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x953 = 120U;
	uint32_t x954 = UINT32_MAX;
	uint32_t x956 = 35695U;
	int64_t t138 = 1LL;

    t138 = ((x953-x954)/(x955*x956));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x957 = -1;
	static int8_t x958 = 0;
	static int32_t x959 = INT32_MAX;
	int32_t x960 = -1;

    t139 = ((x957-x958)/(x959*x960));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x981 = INT8_MIN;
	volatile uint8_t x982 = 13U;
	int8_t x983 = -1;
	static int64_t x984 = INT64_MAX;
	volatile int64_t t140 = 183753429523LL;

    t140 = ((x981-x982)/(x983*x984));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x985 = INT64_MIN;
	int8_t x986 = -8;
	int16_t x987 = -1;
	int64_t t141 = -2054905564LL;

    t141 = ((x985-x986)/(x987*x988));

    if (t141 != 90425216047595841LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x989 = INT32_MIN;
	int8_t x990 = -1;
	static int32_t x991 = 11;
	volatile uint32_t x992 = 56268629U;
	static volatile uint32_t t142 = 57095510U;

    t142 = ((x989-x990)/(x991*x992));

    if (t142 != 3U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x1001 = 2;
	static int32_t x1002 = -1;
	int16_t x1004 = -8117;
	static int32_t t143 = -1744;

    t143 = ((x1001-x1002)/(x1003*x1004));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x1005 = INT32_MIN;
	int64_t x1006 = -20688LL;
	uint64_t x1007 = UINT64_MAX;
	int64_t x1008 = INT64_MIN;
	uint64_t t144 = 52378062LLU;

    t144 = ((x1005-x1006)/(x1007*x1008));

    if (t144 != 1LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x1009 = 2772039LL;
	int16_t x1010 = -1;
	static int8_t x1011 = 1;
	volatile int64_t t145 = 1040998218365280437LL;

    t145 = ((x1009-x1010)/(x1011*x1012));

    if (t145 != 84LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1018 = -3;
	volatile int8_t x1019 = INT8_MIN;
	int64_t t146 = 214290439LL;

    t146 = ((x1017-x1018)/(x1019*x1020));

    if (t146 != -2567475483825388LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x1021 = 96520980594750521LLU;
	uint16_t x1022 = 3276U;
	volatile uint64_t x1023 = UINT64_MAX;
	static int8_t x1024 = INT8_MIN;
	uint64_t t147 = 786780664179022LLU;

    t147 = ((x1021-x1022)/(x1023*x1024));

    if (t147 != 754070160896462LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x1025 = 94086259987520210LLU;
	int8_t x1026 = INT8_MIN;
	int16_t x1027 = -9608;
	uint16_t x1028 = 112U;
	static uint64_t t148 = 67154LLU;

    t148 = ((x1025-x1026)/(x1027*x1028));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x1029 = 11U;
	int32_t x1030 = -1;
	int16_t x1031 = INT16_MIN;
	volatile int32_t t149 = 22164;

    t149 = ((x1029-x1030)/(x1031*x1032));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x1033 = 49;
	int32_t x1034 = -1;
	static int32_t x1035 = INT32_MIN;
	int64_t x1036 = 3135417615LL;
	volatile int64_t t150 = -81010LL;

    t150 = ((x1033-x1034)/(x1035*x1036));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x1049 = INT32_MAX;
	uint16_t x1051 = 3U;

    t151 = ((x1049-x1050)/(x1051*x1052));

    if (t151 != 2807168) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x1061 = UINT32_MAX;
	int32_t x1062 = INT32_MIN;
	int32_t x1063 = -1;
	int8_t x1064 = INT8_MAX;
	uint32_t t152 = 33741358U;

    t152 = ((x1061-x1062)/(x1063*x1064));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x1065 = 4416U;
	uint64_t x1066 = 3598345210497325LLU;
	int16_t x1067 = INT16_MIN;
	uint16_t x1068 = 797U;
	volatile uint64_t t153 = 1LLU;

    t153 = ((x1065-x1066)/(x1067*x1068));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x1069 = INT16_MAX;
	int64_t x1072 = -1LL;

    t154 = ((x1069-x1070)/(x1071*x1072));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x1073 = 27347U;
	int64_t x1074 = INT64_MAX;
	uint8_t x1075 = UINT8_MAX;
	static volatile int64_t t155 = 7890643LL;

    t155 = ((x1073-x1074)/(x1075*x1076));

    if (t155 != -401889849100424LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x1078 = INT16_MIN;
	uint64_t x1079 = 834LLU;
	static int16_t x1080 = -83;
	volatile uint64_t t156 = 3LLU;

    t156 = ((x1077-x1078)/(x1079*x1080));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x1081 = 0U;
	uint32_t x1082 = UINT32_MAX;
	int64_t x1083 = -86905802216LL;
	static volatile int16_t x1084 = -13;
	int64_t t157 = -812051925687LL;

    t157 = ((x1081-x1082)/(x1083*x1084));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x1085 = INT8_MIN;
	static uint8_t x1086 = UINT8_MAX;
	static int32_t x1088 = 304;
	volatile int32_t t158 = -1;

    t158 = ((x1085-x1086)/(x1087*x1088));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x1089 = INT32_MIN;
	static volatile uint8_t x1091 = UINT8_MAX;
	int16_t x1092 = INT16_MIN;
	uint64_t t159 = 408412291077793LLU;

    t159 = ((x1089-x1090)/(x1091*x1092));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1117 = 0;
	volatile int64_t x1118 = 5LL;
	uint64_t x1119 = UINT64_MAX;
	static int16_t x1120 = -7;
	uint64_t t160 = 141187LLU;

    t160 = ((x1117-x1118)/(x1119*x1120));

    if (t160 != 2635249153387078801LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x1121 = UINT8_MAX;
	static uint64_t x1123 = 17673LLU;
	int32_t x1124 = INT32_MAX;

    t161 = ((x1121-x1122)/(x1123*x1124));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x1129 = 1889485096LLU;
	volatile uint8_t x1130 = UINT8_MAX;
	uint16_t x1131 = 15139U;
	int8_t x1132 = INT8_MAX;

    t162 = ((x1129-x1130)/(x1131*x1132));

    if (t162 != 982LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x1137 = 15993U;
	uint64_t x1138 = UINT64_MAX;
	uint16_t x1139 = 776U;
	volatile uint64_t t163 = 6914851211722LLU;

    t163 = ((x1137-x1138)/(x1139*x1140));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x1141 = UINT8_MAX;
	int8_t x1142 = 51;
	static int16_t x1143 = INT16_MIN;
	static volatile int8_t x1144 = INT8_MIN;

    t164 = ((x1141-x1142)/(x1143*x1144));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x1149 = INT16_MAX;
	int8_t x1150 = INT8_MIN;
	static int16_t x1151 = -2616;
	uint8_t x1152 = UINT8_MAX;
	volatile int32_t t165 = -1547268;

    t165 = ((x1149-x1150)/(x1151*x1152));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1153 = -4LL;
	volatile int8_t x1155 = -1;
	uint64_t t166 = 653050461723LLU;

    t166 = ((x1153-x1154)/(x1155*x1156));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1157 = 0;
	int64_t x1158 = INT64_MAX;
	int16_t x1159 = INT16_MAX;
	uint16_t x1160 = UINT16_MAX;
	int64_t t167 = 1986205LL;

    t167 = ((x1157-x1158)/(x1159*x1160));

    if (t167 != -4295163911LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x1161 = INT16_MIN;
	volatile uint16_t x1162 = 35U;
	volatile int16_t x1163 = -1;
	int64_t x1164 = -1LL;
	int64_t t168 = 196682215LL;

    t168 = ((x1161-x1162)/(x1163*x1164));

    if (t168 != -32803LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1173 = -1;
	int32_t x1174 = -10;
	static volatile int32_t x1176 = -1;
	volatile int32_t t169 = -37656432;

    t169 = ((x1173-x1174)/(x1175*x1176));

    if (t169 != -4) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x1181 = -1;
	int8_t x1182 = INT8_MAX;
	uint32_t x1184 = 3852816U;
	volatile uint32_t t170 = 11308438U;

    t170 = ((x1181-x1182)/(x1183*x1184));

    if (t170 != 2U) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x1185 = INT32_MAX;
	int64_t x1186 = -12164364467190LL;
	static int64_t x1187 = 59055LL;
	int32_t x1188 = -29210;

    t171 = ((x1185-x1186)/(x1187*x1188));

    if (t171 != -7053LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x1189 = INT32_MIN;
	static int16_t x1192 = -6523;
	int64_t t172 = -127386153LL;

    t172 = ((x1189-x1190)/(x1191*x1192));

    if (t172 != 11046695388801LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1197 = -1;
	volatile int64_t x1198 = INT64_MAX;
	static uint8_t x1199 = UINT8_MAX;
	int32_t x1200 = 3;
	volatile int64_t t173 = 463050527650733LL;

    t173 = ((x1197-x1198)/(x1199*x1200));

    if (t173 != -12056695473012778LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1205 = 3U;
	static int64_t x1206 = INT64_MAX;
	uint32_t x1207 = 3231U;
	static uint32_t x1208 = 2420415U;
	volatile int64_t t174 = -821291073816651LL;

    t174 = ((x1205-x1206)/(x1207*x1208));

    if (t174 != -2616267334LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1210 = 0;
	int32_t x1211 = INT32_MIN;
	static uint64_t x1212 = UINT64_MAX;
	static volatile uint64_t t175 = 95963999748309LLU;

    t175 = ((x1209-x1210)/(x1211*x1212));

    if (t175 != 8589934591LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x1217 = 24U;
	uint16_t x1218 = 0U;
	int32_t x1219 = 101286243;
	int32_t t176 = -3768;

    t176 = ((x1217-x1218)/(x1219*x1220));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x1221 = UINT64_MAX;
	uint64_t x1222 = 5133148LLU;
	int8_t x1223 = INT8_MIN;
	uint8_t x1224 = UINT8_MAX;
	volatile uint64_t t177 = 17582LLU;

    t177 = ((x1221-x1222)/(x1223*x1224));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x1225 = -89;
	uint8_t x1226 = 88U;
	static int32_t x1227 = INT32_MAX;
	uint8_t x1228 = 1U;
	int32_t t178 = -54804;

    t178 = ((x1225-x1226)/(x1227*x1228));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x1234 = 1676;
	uint16_t x1235 = 50U;
	static int16_t x1236 = INT16_MIN;
	volatile uint32_t t179 = 3233U;

    t179 = ((x1233-x1234)/(x1235*x1236));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1237 = 18487U;
	uint16_t x1238 = 2U;
	int64_t x1239 = -171876300470228LL;
	int16_t x1240 = INT16_MAX;
	int64_t t180 = -370845130039029694LL;

    t180 = ((x1237-x1238)/(x1239*x1240));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x1242 = -1079889894501314LL;
	int8_t x1243 = -1;
	uint16_t x1244 = UINT16_MAX;

    t181 = ((x1241-x1242)/(x1243*x1244));

    if (t181 != -16478063546LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1245 = UINT16_MAX;
	static int64_t x1246 = -15747187LL;
	uint64_t x1247 = UINT64_MAX;
	int8_t x1248 = -1;
	uint64_t t182 = 3506LLU;

    t182 = ((x1245-x1246)/(x1247*x1248));

    if (t182 != 15812722LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1249 = INT8_MAX;
	int8_t x1250 = INT8_MAX;
	static uint64_t x1252 = 513713855840676286LLU;
	volatile uint64_t t183 = 247088175437511LLU;

    t183 = ((x1249-x1250)/(x1251*x1252));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1253 = INT16_MIN;
	int32_t x1254 = -196;
	uint8_t x1256 = 14U;
	int64_t t184 = 84LL;

    t184 = ((x1253-x1254)/(x1255*x1256));

    if (t184 != 2326LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1263 = -1LL;
	volatile uint32_t x1264 = UINT32_MAX;
	int64_t t185 = 287111188924494813LL;

    t185 = ((x1261-x1262)/(x1263*x1264));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1265 = INT64_MIN;
	volatile int64_t x1266 = -1LL;
	uint16_t x1267 = 284U;
	int16_t x1268 = INT16_MAX;
	volatile int64_t t186 = 550LL;

    t186 = ((x1265-x1266)/(x1267*x1268));

    if (t186 != -991139320096LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1281 = 0;
	volatile int64_t x1282 = -1LL;
	int32_t x1283 = -26;
	int8_t x1284 = INT8_MIN;
	volatile int64_t t187 = 952150396LL;

    t187 = ((x1281-x1282)/(x1283*x1284));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1289 = -25;
	int64_t x1291 = -1LL;
	static volatile int16_t x1292 = -3;
	volatile int64_t t188 = 236LL;

    t188 = ((x1289-x1290)/(x1291*x1292));

    if (t188 != 20887374808LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1293 = INT8_MIN;
	uint32_t x1294 = 15U;
	static volatile uint16_t x1295 = 17U;
	static uint16_t x1296 = 2U;

    t189 = ((x1293-x1294)/(x1295*x1296));

    if (t189 != 126322563U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1301 = 81667697LLU;
	int32_t x1302 = 1;
	static int8_t x1304 = INT8_MAX;
	uint64_t t190 = 303426023248158LLU;

    t190 = ((x1301-x1302)/(x1303*x1304));

    if (t190 != 6009LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1309 = 3454538LL;
	static int8_t x1310 = INT8_MIN;
	uint64_t x1311 = UINT64_MAX;
	int8_t x1312 = -1;
	volatile uint64_t t191 = 59212251121LLU;

    t191 = ((x1309-x1310)/(x1311*x1312));

    if (t191 != 3454666LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1322 = -1;
	int64_t x1323 = -763785213658088LL;
	int8_t x1324 = INT8_MIN;

    t192 = ((x1321-x1322)/(x1323*x1324));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1325 = -1;
	int32_t x1326 = -3;
	int16_t x1327 = 3;
	volatile int64_t t193 = 0LL;

    t193 = ((x1325-x1326)/(x1327*x1328));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1338 = -1;
	int16_t x1339 = 127;
	uint8_t x1340 = UINT8_MAX;
	static int64_t t194 = -1743885743162985484LL;

    t194 = ((x1337-x1338)/(x1339*x1340));

    if (t194 != -3992106300824LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1341 = UINT16_MAX;
	uint16_t x1342 = UINT16_MAX;
	uint8_t x1343 = 1U;
	int16_t x1344 = -7;
	int32_t t195 = 1;

    t195 = ((x1341-x1342)/(x1343*x1344));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1349 = UINT8_MAX;
	static uint8_t x1351 = 2U;
	uint8_t x1352 = UINT8_MAX;

    t196 = ((x1349-x1350)/(x1351*x1352));

    if (t196 != 36170086419038334LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1365 = 0;
	int16_t x1366 = -490;

    t197 = ((x1365-x1366)/(x1367*x1368));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x1373 = 3U;
	uint32_t x1374 = UINT32_MAX;
	int8_t x1376 = -1;
	static volatile uint32_t t198 = 947796U;

    t198 = ((x1373-x1374)/(x1375*x1376));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1381 = INT32_MAX;
	int64_t x1382 = 81776383254474LL;

    t199 = ((x1381-x1382)/(x1383*x1384));

    if (t199 != 120LLU) { NG(); } else { ; }
	
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

