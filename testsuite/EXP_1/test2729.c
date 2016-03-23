
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

static int16_t x1 = -1;
static uint64_t x3 = 1547776178220LLU;
uint16_t x4 = 60U;
int64_t t1 = 196345914265293LL;
static int16_t x9 = INT16_MIN;
static int32_t x11 = INT32_MAX;
int32_t x12 = INT32_MIN;
uint32_t t2 = UINT32_MAX;
int8_t x18 = -1;
static int8_t x26 = 1;
uint8_t x31 = UINT8_MAX;
volatile uint32_t x36 = 30077U;
int32_t x37 = INT32_MIN;
volatile int64_t x40 = 3391254757223LL;
volatile int64_t t9 = 31115LL;
int64_t t10 = -92635LL;
int16_t x45 = INT16_MIN;
uint8_t x46 = 0U;
static int8_t x52 = INT8_MAX;
int32_t x53 = INT32_MIN;
static uint64_t x54 = 14612518673680250LLU;
static int64_t x64 = -1LL;
int16_t x73 = -1;
volatile uint32_t t18 = 217566294U;
volatile int8_t x77 = 35;
int32_t t19 = 0;
volatile int64_t x94 = INT64_MAX;
int64_t t24 = 817LL;
int64_t x103 = INT64_MIN;
int64_t x106 = INT64_MAX;
int64_t x108 = -436781LL;
uint64_t x121 = 11970819045804124LLU;
uint64_t x125 = 18202LLU;
volatile int16_t x128 = INT16_MAX;
volatile int8_t x134 = INT8_MIN;
int16_t x135 = INT16_MIN;
int32_t x136 = INT32_MAX;
int64_t t33 = 51133818LL;
uint8_t x143 = 10U;
int16_t x146 = INT16_MIN;
int8_t x148 = -1;
uint16_t x152 = 232U;
uint32_t x155 = 236U;
static volatile int8_t x158 = INT8_MAX;
int16_t x162 = 13;
int8_t x168 = 18;
uint64_t x176 = 4044051LLU;
volatile int64_t t44 = 1LL;
int64_t x181 = -1LL;
uint8_t x182 = UINT8_MAX;
static int8_t x189 = -1;
uint64_t t47 = 636061508320686LLU;
static volatile int8_t x195 = -1;
volatile int32_t t48 = 1361;
int32_t x215 = INT32_MIN;
uint64_t x224 = 23798006035387360LLU;
uint64_t t55 = 92575LLU;
int64_t t56 = 387727LL;
volatile int8_t x236 = INT8_MAX;
uint64_t x238 = UINT64_MAX;
int16_t x242 = INT16_MIN;
volatile int64_t t61 = 312586589LL;
static int32_t x249 = -23795;
static volatile int64_t t62 = -66844065401800LL;
int8_t x256 = -1;
int8_t x263 = INT8_MIN;
int32_t t65 = -40416;
int8_t x272 = INT8_MIN;
int64_t x275 = INT64_MAX;
uint16_t x279 = 4U;
int32_t x280 = INT32_MAX;
uint16_t x283 = 5207U;
uint64_t x286 = 215799482644903LLU;
uint64_t x301 = 5773137LLU;
uint64_t x306 = 1396306178LLU;
int16_t x308 = INT16_MAX;
static uint32_t t77 = UINT32_MAX;
uint8_t x317 = 30U;
static uint64_t x320 = 24973276LLU;
int8_t x326 = INT8_MIN;
uint64_t x330 = 4269LLU;
static volatile uint32_t x334 = UINT32_MAX;
int32_t x336 = -1;
volatile int32_t t84 = 6669159;
int32_t t85 = -331465800;
volatile uint16_t x346 = 0U;
int16_t x347 = INT16_MIN;
int16_t x348 = INT16_MIN;
static int32_t x351 = INT32_MAX;
static int32_t x357 = INT32_MAX;
volatile int16_t x358 = -1060;
int32_t t90 = 427;
uint64_t x375 = UINT64_MAX;
int8_t x381 = -3;
static int64_t x384 = -1LL;
volatile uint64_t t96 = UINT64_MAX;
int16_t x389 = 1;
static int32_t x399 = -1;
uint64_t x401 = UINT64_MAX;
volatile int64_t t102 = 264386467260590304LL;
int64_t x414 = -8453476644452LL;
int32_t x418 = -178280193;
static int32_t x421 = INT32_MAX;
int64_t t105 = 1LL;
int16_t x430 = INT16_MAX;
int32_t t108 = 1786474;
int16_t x439 = -1;
static volatile int32_t x441 = 2;
int32_t t111 = 0;
static int8_t x454 = -33;
volatile int16_t x460 = INT16_MIN;
uint64_t x465 = 321258793590275LLU;
uint64_t t116 = UINT64_MAX;
static uint64_t t117 = 16967480390LLU;
int16_t x476 = INT16_MAX;
int32_t t118 = 3124719;
volatile int32_t t120 = -219085;
static uint64_t x487 = 1863979959205854LLU;
static int32_t x491 = -1180329;
static int32_t x497 = INT32_MIN;
volatile int8_t x501 = INT8_MAX;
int16_t x508 = INT16_MIN;
volatile uint64_t t126 = UINT64_MAX;
int64_t x510 = 824794595518662524LL;
static uint16_t x513 = UINT16_MAX;
int8_t x519 = INT8_MAX;
uint64_t x523 = 63746607967223LLU;
static uint8_t x525 = 0U;
volatile int8_t x526 = -1;
int16_t x529 = INT16_MAX;
int32_t x535 = INT32_MAX;
int64_t t133 = 5221414751497LL;
static int32_t x541 = -1;
volatile uint32_t t135 = 1935733U;
int16_t x548 = INT16_MIN;
uint64_t x551 = 973981278952515511LLU;
static int32_t x552 = -11576;
volatile uint64_t t137 = 786057220LLU;
static uint64_t x559 = 2119980475204796LLU;
uint16_t x562 = UINT16_MAX;
volatile int16_t x563 = -32;
static int32_t x564 = -2729443;
int64_t x575 = INT64_MAX;
volatile int64_t t144 = -10052LL;
volatile uint32_t x582 = 636U;
uint32_t t145 = UINT32_MAX;
uint32_t t146 = 3U;
static int32_t x590 = INT32_MIN;
int8_t x596 = INT8_MIN;
int64_t t150 = 145217647336LL;
int16_t x605 = 1;
uint16_t x621 = 425U;
volatile uint32_t x623 = 93U;
uint64_t x626 = UINT64_MAX;
int16_t x629 = INT16_MIN;
int32_t x635 = INT32_MIN;
int64_t x638 = 2117346LL;
int64_t x640 = 121575224661165182LL;
uint32_t x641 = 1005309252U;
static uint64_t x643 = UINT64_MAX;
uint16_t x644 = UINT16_MAX;
int64_t x648 = -1LL;
uint8_t x649 = 3U;
volatile uint16_t x651 = 5U;
static int32_t x654 = -1;
int16_t x657 = 1;
static int64_t t167 = -124985999LL;
static uint64_t x674 = 905615937479LLU;
volatile int8_t x676 = -1;
int64_t x677 = INT64_MAX;
uint16_t x679 = 609U;
int64_t x684 = -1LL;
volatile int64_t t170 = -135622643LL;
static int16_t x690 = INT16_MIN;
static int64_t x694 = 129LL;
static uint16_t x699 = 7U;
static uint32_t x711 = UINT32_MAX;
uint32_t x722 = 3248U;
static int32_t x723 = 6740;
static int8_t x725 = INT8_MAX;
int16_t x729 = -14165;
static int64_t x733 = -1LL;
int32_t x738 = INT32_MIN;
static uint16_t x739 = UINT16_MAX;
int8_t x743 = INT8_MAX;
uint32_t x748 = UINT32_MAX;
uint8_t x758 = 90U;
static volatile uint32_t x762 = 4U;
int64_t x763 = 6635577748LL;
int8_t x766 = -1;
uint8_t x767 = UINT8_MAX;
uint8_t x772 = 10U;
uint16_t x782 = UINT16_MAX;
uint8_t x788 = 20U;
uint8_t x792 = UINT8_MAX;
static volatile uint64_t t198 = UINT64_MAX;
int32_t x799 = INT32_MIN;


void f0(void) {
    	static int8_t x2 = 24;
	volatile uint64_t t0 = UINT64_MAX;

    t0 = (((x1^x2)|x3)|x4);

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	int16_t x6 = INT16_MAX;
	int64_t x7 = INT64_MIN;
	int32_t x8 = INT32_MAX;

    t1 = (((x5^x6)|x7)|x8);

    if (t1 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint32_t x10 = UINT32_MAX;

    t2 = (((x9^x10)|x11)|x12);

    if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = INT16_MIN;
	uint64_t x14 = 305000628814LLU;
	uint32_t x15 = 1U;
	static uint8_t x16 = UINT8_MAX;
	volatile uint64_t t3 = 228LLU;

    t3 = (((x13^x14)|x15)|x16);

    if (t3 != 18446743768708924159LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MAX;
	volatile int8_t x19 = 2;
	int32_t x20 = INT32_MIN;
	int32_t t4 = -87;

    t4 = (((x17^x18)|x19)|x20);

    if (t4 != -126) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = 51;
	static volatile uint16_t x22 = UINT16_MAX;
	static int32_t x23 = INT32_MIN;
	int64_t x24 = -436177244LL;
	static int64_t t5 = -468LL;

    t5 = (((x21^x22)|x23)|x24);

    if (t5 != -436142100LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	uint32_t x27 = UINT32_MAX;
	uint8_t x28 = UINT8_MAX;
	volatile uint32_t t6 = UINT32_MAX;

    t6 = (((x25^x26)|x27)|x28);

    if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -432574358544877LL;
	uint64_t x30 = 11373798902LLU;
	int64_t x32 = INT64_MIN;
	uint64_t t7 = 87474289910632426LLU;

    t7 = (((x29^x30)|x31)|x32);

    if (t7 != 18446311492302896127LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 25537U;
	volatile int8_t x34 = 2;
	volatile uint8_t x35 = 27U;
	volatile uint32_t t8 = 10887706U;

    t8 = (((x33^x34)|x35)|x36);

    if (t8 != 30719U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x38 = 4U;
	volatile int16_t x39 = INT16_MIN;

    t9 = (((x37^x38)|x39)|x40);

    if (t9 != -153LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -1LL;
	volatile int32_t x42 = 0;
	int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MAX;

    t10 = (((x41^x42)|x43)|x44);

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x47 = -1;
	volatile int64_t x48 = INT64_MAX;
	volatile int64_t t11 = -79228069LL;

    t11 = (((x45^x46)|x47)|x48);

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MAX;
	int8_t x50 = -1;
	volatile uint32_t x51 = 11U;
	volatile uint32_t t12 = 2355U;

    t12 = (((x49^x50)|x51)|x52);

    if (t12 != 4294934655U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x55 = INT32_MAX;
	int32_t x56 = INT32_MAX;
	static volatile uint64_t t13 = 3LLU;

    t13 = (((x53^x54)|x55)|x56);

    if (t13 != 18432131555586473983LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x57 = UINT64_MAX;
	int64_t x58 = 953146661480802LL;
	int32_t x59 = INT32_MIN;
	uint8_t x60 = 33U;
	uint64_t t14 = 119676LLU;

    t14 = (((x57^x58)|x59)|x60);

    if (t14 != 18446744072632850109LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = 0LL;
	int8_t x62 = INT8_MAX;
	volatile uint16_t x63 = UINT16_MAX;
	int64_t t15 = -209LL;

    t15 = (((x61^x62)|x63)|x64);

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 341335LLU;
	static uint16_t x66 = 32U;
	volatile int64_t x67 = INT64_MIN;
	int8_t x68 = 1;
	uint64_t t16 = 120440962075461LLU;

    t16 = (((x65^x66)|x67)|x68);

    if (t16 != 9223372036855117175LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	int64_t x70 = -281415903908234369LL;
	volatile int16_t x71 = -1;
	uint16_t x72 = 2266U;
	int64_t t17 = -2506466LL;

    t17 = (((x69^x70)|x71)|x72);

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x74 = 415U;
	static int16_t x75 = INT16_MIN;
	volatile uint32_t x76 = 2489U;

    t18 = (((x73^x74)|x75)|x76);

    if (t18 != 4294967289U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x78 = UINT8_MAX;
	uint16_t x79 = 22U;
	volatile int8_t x80 = -1;

    t19 = (((x77^x78)|x79)|x80);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1668912;
	int32_t x82 = 255774;
	uint64_t x83 = UINT64_MAX;
	static volatile uint16_t x84 = 106U;
	uint64_t t20 = UINT64_MAX;

    t20 = (((x81^x82)|x83)|x84);

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MIN;
	uint32_t x86 = UINT32_MAX;
	int8_t x87 = -1;
	uint8_t x88 = 95U;
	int64_t t21 = -2LL;

    t21 = (((x85^x86)|x87)|x88);

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = 244963LL;
	static volatile int8_t x90 = 0;
	static uint16_t x91 = 3U;
	uint64_t x92 = 43340403LLU;
	uint64_t t22 = 203891334789736884LLU;

    t22 = (((x89^x90)|x91)|x92);

    if (t22 != 43515635LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -7;
	int64_t x95 = -1LL;
	int64_t x96 = -153814101LL;
	static int64_t t23 = -323656045622507LL;

    t23 = (((x93^x94)|x95)|x96);

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = 1;
	int8_t x98 = INT8_MIN;
	int64_t x99 = -1LL;
	int64_t x100 = INT64_MIN;

    t24 = (((x97^x98)|x99)|x100);

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 6016U;
	int32_t x102 = 2;
	int64_t x104 = INT64_MIN;
	int64_t t25 = -12767082499769LL;

    t25 = (((x101^x102)|x103)|x104);

    if (t25 != -9223372036854769790LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x105 = -1;
	int64_t x107 = 33243903341467163LL;
	volatile int64_t t26 = -137255434240233228LL;

    t26 = (((x105^x106)|x107)|x108);

    if (t26 != -141349LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x109 = 3407U;
	volatile int32_t x110 = 28928365;
	uint32_t x111 = 0U;
	static int8_t x112 = INT8_MAX;
	static uint32_t t27 = 7U;

    t27 = (((x109^x110)|x111)|x112);

    if (t27 != 28927103U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = 10249LL;
	static int16_t x114 = INT16_MIN;
	uint32_t x115 = 13467601U;
	uint32_t x116 = UINT32_MAX;
	static volatile int64_t t28 = 221LL;

    t28 = (((x113^x114)|x115)|x116);

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x117 = 9430897447689758LLU;
	static int32_t x118 = INT32_MIN;
	int32_t x119 = INT32_MIN;
	uint64_t x120 = 17LLU;
	uint64_t t29 = 276532532340LLU;

    t29 = (((x117^x118)|x119)|x120);

    if (t29 != 18446744073378749983LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x122 = INT64_MIN;
	uint64_t x123 = 391666717LLU;
	int16_t x124 = -1;
	volatile uint64_t t30 = UINT64_MAX;

    t30 = (((x121^x122)|x123)|x124);

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x126 = -1LL;
	volatile int16_t x127 = -1;
	uint64_t t31 = UINT64_MAX;

    t31 = (((x125^x126)|x127)|x128);

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 1963LLU;
	static int64_t x130 = 40LL;
	int16_t x131 = -2;
	uint32_t x132 = 1U;
	uint64_t t32 = UINT64_MAX;

    t32 = (((x129^x130)|x131)|x132);

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;

    t33 = (((x133^x134)|x135)|x136);

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = UINT64_MAX;
	int32_t x138 = 3314532;
	uint16_t x139 = 1684U;
	int8_t x140 = -1;
	volatile uint64_t t34 = UINT64_MAX;

    t34 = (((x137^x138)|x139)|x140);

    if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	int8_t x142 = -1;
	volatile int64_t x144 = 3330818103LL;
	volatile int64_t t35 = 29475695LL;

    t35 = (((x141^x142)|x143)|x144);

    if (t35 != 3330818175LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = INT8_MAX;
	uint64_t x147 = UINT64_MAX;
	static volatile uint64_t t36 = UINT64_MAX;

    t36 = (((x145^x146)|x147)|x148);

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	uint32_t x150 = 6U;
	int8_t x151 = INT8_MIN;
	int64_t t37 = -130226LL;

    t37 = (((x149^x150)|x151)|x152);

    if (t37 != -18LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -1;
	int32_t x154 = INT32_MIN;
	uint8_t x156 = UINT8_MAX;
	volatile uint32_t t38 = 6U;

    t38 = (((x153^x154)|x155)|x156);

    if (t38 != 2147483647U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	int8_t x159 = INT8_MIN;
	int16_t x160 = -1909;
	volatile int32_t t39 = -31;

    t39 = (((x157^x158)|x159)|x160);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -41;
	volatile int64_t x163 = 285127LL;
	uint32_t x164 = UINT32_MAX;
	int64_t t40 = 0LL;

    t40 = (((x161^x162)|x163)|x164);

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = 24;
	int64_t x166 = -1LL;
	volatile uint32_t x167 = UINT32_MAX;
	int64_t t41 = -2LL;

    t41 = (((x165^x166)|x167)|x168);

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x169 = 16U;
	int64_t x170 = INT64_MAX;
	int8_t x171 = -1;
	volatile int64_t x172 = -31760LL;
	int64_t t42 = -1LL;

    t42 = (((x169^x170)|x171)|x172);

    if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x173 = INT8_MIN;
	int8_t x174 = -1;
	uint8_t x175 = 2U;
	volatile uint64_t t43 = 23020LLU;

    t43 = (((x173^x174)|x175)|x176);

    if (t43 != 4044159LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = -1;
	static int64_t x178 = -1LL;
	int8_t x179 = -1;
	int64_t x180 = -1LL;

    t44 = (((x177^x178)|x179)|x180);

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x183 = INT64_MAX;
	static uint32_t x184 = 198264208U;
	volatile int64_t t45 = 925995711LL;

    t45 = (((x181^x182)|x183)|x184);

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = 114603313762161021LLU;
	int8_t x186 = INT8_MAX;
	uint32_t x187 = UINT32_MAX;
	volatile int16_t x188 = INT16_MIN;
	volatile uint64_t t46 = UINT64_MAX;

    t46 = (((x185^x186)|x187)|x188);

    if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x190 = 6522135607LLU;
	uint16_t x191 = UINT16_MAX;
	static volatile uint8_t x192 = UINT8_MAX;

    t47 = (((x189^x190)|x191)|x192);

    if (t47 != 18446744067187474431LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -1;
	static volatile int8_t x194 = INT8_MIN;
	static uint8_t x196 = 28U;

    t48 = (((x193^x194)|x195)|x196);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	static int32_t x198 = -1;
	static int16_t x199 = INT16_MAX;
	volatile int32_t x200 = 147224;
	int32_t t49 = INT32_MAX;

    t49 = (((x197^x198)|x199)|x200);

    if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = 829913283616376LL;
	static uint64_t x202 = 56LLU;
	int16_t x203 = INT16_MIN;
	int64_t x204 = INT64_MAX;
	static uint64_t t50 = UINT64_MAX;

    t50 = (((x201^x202)|x203)|x204);

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 370780683424933387LLU;
	int64_t x206 = -572822183815726LL;
	volatile int8_t x207 = INT8_MIN;
	uint16_t x208 = 15U;
	volatile uint64_t t51 = 70477186098908LLU;

    t51 = (((x205^x206)|x207)|x208);

    if (t51 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 0U;
	int32_t x210 = 40364;
	int16_t x211 = 1;
	int8_t x212 = -21;
	volatile int32_t t52 = -1;

    t52 = (((x209^x210)|x211)|x212);

    if (t52 != -17) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = 1;
	int8_t x214 = INT8_MIN;
	static volatile int8_t x216 = INT8_MAX;
	int32_t t53 = 198215;

    t53 = (((x213^x214)|x215)|x216);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -1;
	int16_t x218 = -1;
	volatile int32_t x219 = INT32_MIN;
	uint64_t x220 = UINT64_MAX;
	static uint64_t t54 = UINT64_MAX;

    t54 = (((x217^x218)|x219)|x220);

    if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x221 = UINT64_MAX;
	int64_t x222 = 29225682241LL;
	int16_t x223 = -826;

    t55 = (((x221^x222)|x223)|x224);

    if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -1;
	uint8_t x226 = UINT8_MAX;
	volatile int16_t x227 = INT16_MIN;
	static int64_t x228 = -119392989454LL;

    t56 = (((x225^x226)|x227)|x228);

    if (t56 != -14LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = UINT16_MAX;
	volatile int64_t x230 = INT64_MAX;
	int32_t x231 = -1;
	uint32_t x232 = 33U;
	volatile int64_t t57 = -2987748LL;

    t57 = (((x229^x230)|x231)|x232);

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -1;
	int32_t x234 = INT32_MIN;
	int32_t x235 = INT32_MIN;
	int32_t t58 = -24493750;

    t58 = (((x233^x234)|x235)|x236);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -1;
	static volatile int32_t x239 = INT32_MIN;
	int64_t x240 = INT64_MIN;
	uint64_t t59 = 300LLU;

    t59 = (((x237^x238)|x239)|x240);

    if (t59 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MAX;
	volatile uint32_t x243 = 1U;
	volatile int32_t x244 = INT32_MIN;
	static uint32_t t60 = 15000590U;

    t60 = (((x241^x242)|x243)|x244);

    if (t60 != 4294934655U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x245 = -1;
	int8_t x246 = INT8_MIN;
	int64_t x247 = INT64_MIN;
	int32_t x248 = INT32_MAX;

    t61 = (((x245^x246)|x247)|x248);

    if (t61 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x250 = INT32_MIN;
	int64_t x251 = INT64_MIN;
	int8_t x252 = -48;

    t62 = (((x249^x250)|x251)|x252);

    if (t62 != -35LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x253 = 1;
	int32_t x254 = 873;
	static int8_t x255 = 15;
	int32_t t63 = 4072;

    t63 = (((x253^x254)|x255)|x256);

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 2232238036LLU;
	int8_t x258 = -1;
	static volatile int32_t x259 = 960647;
	static int32_t x260 = -1;
	volatile uint64_t t64 = UINT64_MAX;

    t64 = (((x257^x258)|x259)|x260);

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 3609U;
	static int32_t x262 = INT32_MAX;
	uint8_t x264 = 0U;

    t65 = (((x261^x262)|x263)|x264);

    if (t65 != -26) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x265 = INT8_MAX;
	uint32_t x266 = UINT32_MAX;
	static volatile int32_t x267 = INT32_MIN;
	static uint64_t x268 = 14377787426801267LLU;
	uint64_t t66 = 15865499891698LLU;

    t66 = (((x265^x266)|x267)|x268);

    if (t66 != 14377789570416627LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x269 = 5U;
	static int16_t x270 = -1;
	uint32_t x271 = 1115988343U;
	uint32_t t67 = UINT32_MAX;

    t67 = (((x269^x270)|x271)|x272);

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = UINT32_MAX;
	static uint32_t x274 = UINT32_MAX;
	volatile int32_t x276 = 330;
	int64_t t68 = INT64_MAX;

    t68 = (((x273^x274)|x275)|x276);

    if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = -1;
	static uint64_t x278 = 86LLU;
	static uint64_t t69 = UINT64_MAX;

    t69 = (((x277^x278)|x279)|x280);

    if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 219U;
	uint64_t x282 = UINT64_MAX;
	uint32_t x284 = 229979U;
	volatile uint64_t t70 = 30619159935LLU;

    t70 = (((x281^x282)|x283)|x284);

    if (t70 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	volatile int32_t x287 = INT32_MAX;
	static int8_t x288 = INT8_MAX;
	uint64_t t71 = 38819446515415233LLU;

    t71 = (((x285^x286)|x287)|x288);

    if (t71 != 9223587837486563327LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = 3;
	static uint64_t x290 = 33831759166797096LLU;
	uint16_t x291 = 0U;
	uint32_t x292 = UINT32_MAX;
	volatile uint64_t t72 = 11290246LLU;

    t72 = (((x289^x290)|x291)|x292);

    if (t72 != 33831762333270015LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = 36U;
	int8_t x294 = INT8_MIN;
	int32_t x295 = -1;
	uint8_t x296 = 56U;
	volatile int32_t t73 = 358566;

    t73 = (((x293^x294)|x295)|x296);

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x297 = -4879644LL;
	static int32_t x298 = 13;
	int32_t x299 = INT32_MIN;
	static uint16_t x300 = 1764U;
	int64_t t74 = 15137LL;

    t74 = (((x297^x298)|x299)|x300);

    if (t74 != -4878611LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x302 = INT64_MIN;
	volatile int8_t x303 = INT8_MIN;
	int64_t x304 = 1993689301471540LL;
	volatile uint64_t t75 = 172325LLU;

    t75 = (((x301^x302)|x303)|x304);

    if (t75 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = 2201273317703LL;
	int8_t x307 = -24;
	uint64_t t76 = UINT64_MAX;

    t76 = (((x305^x306)|x307)|x308);

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x309 = UINT32_MAX;
	int16_t x310 = INT16_MAX;
	uint16_t x311 = UINT16_MAX;
	volatile int32_t x312 = INT32_MAX;

    t77 = (((x309^x310)|x311)|x312);

    if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MIN;
	volatile uint32_t x314 = 215646624U;
	volatile int64_t x315 = -1LL;
	volatile int32_t x316 = 108597607;
	volatile int64_t t78 = -536897082LL;

    t78 = (((x313^x314)|x315)|x316);

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x318 = UINT16_MAX;
	volatile uint8_t x319 = 21U;
	static uint64_t t79 = 2880639887LLU;

    t79 = (((x317^x318)|x319)|x320);

    if (t79 != 25034749LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x321 = INT32_MIN;
	volatile int16_t x322 = INT16_MIN;
	static int8_t x323 = -1;
	uint32_t x324 = 212819U;
	uint32_t t80 = UINT32_MAX;

    t80 = (((x321^x322)|x323)|x324);

    if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = 0U;
	static int32_t x327 = INT32_MIN;
	uint32_t x328 = 28U;
	uint32_t t81 = 10U;

    t81 = (((x325^x326)|x327)|x328);

    if (t81 != 4294967196U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x329 = -43406641222263LL;
	int64_t x331 = 16027592LL;
	int32_t x332 = INT32_MAX;
	volatile uint64_t t82 = 4350910560849506LLU;

    t82 = (((x329^x330)|x331)|x332);

    if (t82 != 18446700668770058239LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 455U;
	uint16_t x335 = UINT16_MAX;
	volatile uint32_t t83 = UINT32_MAX;

    t83 = (((x333^x334)|x335)|x336);

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = 1777U;
	uint8_t x338 = 32U;
	uint16_t x339 = UINT16_MAX;
	int32_t x340 = -1;

    t84 = (((x337^x338)|x339)|x340);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x341 = -5610851;
	static volatile int32_t x342 = INT32_MAX;
	uint8_t x343 = UINT8_MAX;
	volatile uint16_t x344 = 3U;

    t85 = (((x341^x342)|x343)|x344);

    if (t85 != -2141872641) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int16_t x345 = -1;
	int32_t t86 = -897651116;

    t86 = (((x345^x346)|x347)|x348);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MIN;
	int8_t x350 = INT8_MIN;
	volatile int16_t x352 = INT16_MIN;
	static volatile int32_t t87 = -9;

    t87 = (((x349^x350)|x351)|x352);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MIN;
	static uint32_t x354 = 1774588U;
	uint64_t x355 = 6657066331362826979LLU;
	int64_t x356 = INT64_MIN;
	static uint64_t t88 = 1317762020032724LLU;

    t88 = (((x353^x354)|x355)|x356);

    if (t88 != 15880438369172102143LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MIN;
	int32_t t89 = -125219;

    t89 = (((x357^x358)|x359)|x360);

    if (t89 != -31709) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = UINT8_MAX;
	uint16_t x362 = UINT16_MAX;
	volatile int16_t x363 = INT16_MIN;
	static int32_t x364 = -661143910;

    t90 = (((x361^x362)|x363)|x364);

    if (t90 != -102) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = 56517LLU;
	int8_t x366 = INT8_MIN;
	volatile int16_t x367 = -13;
	int8_t x368 = INT8_MIN;
	uint64_t t91 = 27LLU;

    t91 = (((x365^x366)|x367)|x368);

    if (t91 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = 574901586512LLU;
	int32_t x370 = INT32_MIN;
	int32_t x371 = 103544359;
	int32_t x372 = -7934747;
	volatile uint64_t t92 = 0LLU;

    t92 = (((x369^x370)|x371)|x372);

    if (t92 != 18446744073708502775LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -6758344158718LL;
	uint64_t x374 = UINT64_MAX;
	int16_t x376 = -1;
	uint64_t t93 = UINT64_MAX;

    t93 = (((x373^x374)|x375)|x376);

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MAX;
	int8_t x378 = -1;
	int32_t x379 = INT32_MIN;
	uint8_t x380 = 61U;
	volatile int32_t t94 = 6446;

    t94 = (((x377^x378)|x379)|x380);

    if (t94 != -2147483587) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x382 = -25;
	static uint32_t x383 = 23U;
	volatile int64_t t95 = -39881777898LL;

    t95 = (((x381^x382)|x383)|x384);

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 0U;
	uint64_t x386 = 9792LLU;
	uint64_t x387 = 6372412051640285041LLU;
	uint64_t x388 = UINT64_MAX;

    t96 = (((x385^x386)|x387)|x388);

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x390 = INT64_MIN;
	static uint64_t x391 = 957343180133806LLU;
	static uint16_t x392 = 1U;
	uint64_t t97 = 18717666894LLU;

    t97 = (((x389^x390)|x391)|x392);

    if (t97 != 9224329380034909615LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MAX;
	int8_t x394 = INT8_MIN;
	int64_t x395 = INT64_MIN;
	uint32_t x396 = UINT32_MAX;
	volatile int64_t t98 = -243424464LL;

    t98 = (((x393^x394)|x395)|x396);

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MIN;
	uint32_t x398 = 221U;
	static uint32_t x400 = UINT32_MAX;
	volatile uint32_t t99 = UINT32_MAX;

    t99 = (((x397^x398)|x399)|x400);

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x402 = 33U;
	int16_t x403 = 7904;
	static int8_t x404 = INT8_MIN;
	static volatile uint64_t t100 = 205057LLU;

    t100 = (((x401^x402)|x403)|x404);

    if (t100 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x405 = INT64_MIN;
	int16_t x406 = -3;
	int64_t x407 = -1LL;
	volatile int8_t x408 = -3;
	int64_t t101 = 21313LL;

    t101 = (((x405^x406)|x407)|x408);

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x409 = 2261880U;
	int8_t x410 = -23;
	int8_t x411 = INT8_MIN;
	int64_t x412 = -1LL;

    t102 = (((x409^x410)|x411)|x412);

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x413 = 112U;
	static int32_t x415 = INT32_MAX;
	uint16_t x416 = 1032U;
	volatile int64_t t103 = 12LL;

    t103 = (((x413^x414)|x415)|x416);

    if (t103 != -8452495638529LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = 0;
	volatile uint16_t x419 = 2577U;
	int16_t x420 = INT16_MIN;
	volatile int32_t t104 = 21;

    t104 = (((x417^x418)|x419)|x420);

    if (t104 != -21761) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x422 = INT16_MAX;
	int32_t x423 = INT32_MAX;
	volatile int64_t x424 = -7LL;

    t105 = (((x421^x422)|x423)|x424);

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x425 = 641599085932662984LLU;
	int32_t x426 = INT32_MIN;
	uint8_t x427 = UINT8_MAX;
	int64_t x428 = -1LL;
	static volatile uint64_t t106 = UINT64_MAX;

    t106 = (((x425^x426)|x427)|x428);

    if (t106 != UINT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	uint8_t x431 = UINT8_MAX;
	int16_t x432 = INT16_MIN;
	int32_t t107 = 182918;

    t107 = (((x429^x430)|x431)|x432);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = UINT16_MAX;
	static int16_t x434 = INT16_MIN;
	volatile int16_t x435 = INT16_MAX;
	volatile uint8_t x436 = UINT8_MAX;

    t108 = (((x433^x434)|x435)|x436);

    if (t108 != -32769) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	uint32_t x438 = 7494335U;
	static volatile int64_t x440 = 3857LL;
	int64_t t109 = 28309LL;

    t109 = (((x437^x438)|x439)|x440);

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x442 = UINT64_MAX;
	uint64_t x443 = 1LLU;
	int32_t x444 = INT32_MIN;
	volatile uint64_t t110 = 2096543580630260753LLU;

    t110 = (((x441^x442)|x443)|x444);

    if (t110 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	static volatile int32_t x446 = INT32_MIN;
	static int16_t x447 = INT16_MIN;
	int8_t x448 = 1;

    t111 = (((x445^x446)|x447)|x448);

    if (t111 != -127) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x449 = 97230U;
	static uint32_t x450 = 2043263U;
	uint16_t x451 = 171U;
	int64_t x452 = INT64_MIN;
	volatile int64_t t112 = -74451994LL;

    t112 = (((x449^x450)|x451)|x452);

    if (t112 != -9223372036852787525LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x453 = 31U;
	static uint64_t x455 = 45454609493789LLU;
	uint32_t x456 = 26739162U;
	static uint64_t t113 = 7583LLU;

    t113 = (((x453^x454)|x455)|x456);

    if (t113 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MAX;
	static uint64_t x458 = 210590336246525202LLU;
	int64_t x459 = -1LL;
	uint64_t t114 = UINT64_MAX;

    t114 = (((x457^x458)|x459)|x460);

    if (t114 != UINT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = 50538819U;
	uint64_t x462 = UINT64_MAX;
	int32_t x463 = -1;
	volatile int32_t x464 = INT32_MIN;
	volatile uint64_t t115 = UINT64_MAX;

    t115 = (((x461^x462)|x463)|x464);

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x466 = -1;
	volatile int16_t x467 = INT16_MIN;
	volatile uint16_t x468 = UINT16_MAX;

    t116 = (((x465^x466)|x467)|x468);

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = 36U;
	volatile int32_t x470 = 377206;
	static int16_t x471 = INT16_MAX;
	static uint64_t x472 = 12693351968457852LLU;

    t117 = (((x469^x470)|x471)|x472);

    if (t117 != 12693351968538623LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = 26U;
	int8_t x474 = INT8_MAX;
	uint8_t x475 = 15U;

    t118 = (((x473^x474)|x475)|x476);

    if (t118 != 32767) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = 37893134815228LL;
	int32_t x478 = INT32_MIN;
	static int8_t x479 = -9;
	int8_t x480 = -1;
	static volatile int64_t t119 = -23LL;

    t119 = (((x477^x478)|x479)|x480);

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x481 = 401;
	int32_t x482 = 6;
	int32_t x483 = -5756082;
	int16_t x484 = 35;

    t120 = (((x481^x482)|x483)|x484);

    if (t120 != -5755905) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = UINT32_MAX;
	int16_t x486 = INT16_MIN;
	static int64_t x488 = INT64_MIN;
	uint64_t t121 = 8LLU;

    t121 = (((x485^x486)|x487)|x488);

    if (t121 != 9225236016813998079LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -234582;
	uint16_t x490 = UINT16_MAX;
	static int64_t x492 = -1LL;
	volatile int64_t t122 = 697965129561601480LL;

    t122 = (((x489^x490)|x491)|x492);

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 740686U;
	static int16_t x494 = INT16_MIN;
	uint32_t x495 = UINT32_MAX;
	uint16_t x496 = UINT16_MAX;
	volatile uint32_t t123 = UINT32_MAX;

    t123 = (((x493^x494)|x495)|x496);

    if (t123 != UINT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x498 = 3U;
	uint32_t x499 = UINT32_MAX;
	volatile int64_t x500 = INT64_MIN;
	int64_t t124 = -736894LL;

    t124 = (((x497^x498)|x499)|x500);

    if (t124 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x502 = 10U;
	int8_t x503 = INT8_MIN;
	int32_t x504 = INT32_MAX;
	static uint32_t t125 = UINT32_MAX;

    t125 = (((x501^x502)|x503)|x504);

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = 3;
	uint64_t x506 = 5LLU;
	static uint32_t x507 = UINT32_MAX;

    t126 = (((x505^x506)|x507)|x508);

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = UINT8_MAX;
	uint16_t x511 = 2654U;
	volatile uint8_t x512 = 33U;
	volatile int64_t t127 = -16248393LL;

    t127 = (((x509^x510)|x511)|x512);

    if (t127 != 824794595518664703LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x514 = INT8_MIN;
	volatile int8_t x515 = -32;
	uint16_t x516 = 44U;
	int32_t t128 = -363042;

    t128 = (((x513^x514)|x515)|x516);

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	int64_t x518 = 44LL;
	static int64_t x520 = INT64_MAX;
	volatile int64_t t129 = 922943062628LL;

    t129 = (((x517^x518)|x519)|x520);

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MAX;
	static int32_t x522 = 0;
	int16_t x524 = INT16_MIN;
	static volatile uint64_t t130 = UINT64_MAX;

    t130 = (((x521^x522)|x523)|x524);

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x527 = INT8_MIN;
	int32_t x528 = -4520599;
	volatile int32_t t131 = 83313203;

    t131 = (((x525^x526)|x527)|x528);

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x530 = -1;
	static volatile uint8_t x531 = UINT8_MAX;
	int8_t x532 = -1;
	volatile int32_t t132 = -1;

    t132 = (((x529^x530)|x531)|x532);

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x533 = -1LL;
	int64_t x534 = -1LL;
	int32_t x536 = -1;

    t133 = (((x533^x534)|x535)|x536);

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = UINT8_MAX;
	static int8_t x538 = INT8_MIN;
	uint16_t x539 = 298U;
	int16_t x540 = INT16_MAX;
	int32_t t134 = 2;

    t134 = (((x537^x538)|x539)|x540);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x542 = -1;
	uint32_t x543 = 37U;
	volatile int16_t x544 = 804;

    t135 = (((x541^x542)|x543)|x544);

    if (t135 != 805U) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -11971;
	uint32_t x546 = UINT32_MAX;
	int8_t x547 = 29;
	volatile uint32_t t136 = 30569506U;

    t136 = (((x545^x546)|x547)|x548);

    if (t136 != 4294946527U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = -3244801674LL;
	static int16_t x550 = 390;

    t137 = (((x549^x550)|x551)|x552);

    if (t137 != 18446744073709549567LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x553 = UINT32_MAX;
	volatile uint64_t x554 = UINT64_MAX;
	static int8_t x555 = 0;
	uint16_t x556 = 2502U;
	volatile uint64_t t138 = 639699005095LLU;

    t138 = (((x553^x554)|x555)|x556);

    if (t138 != 18446744069414586822LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -1LL;
	volatile uint8_t x558 = UINT8_MAX;
	int8_t x560 = -1;
	volatile uint64_t t139 = UINT64_MAX;

    t139 = (((x557^x558)|x559)|x560);

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = 5U;
	int32_t t140 = -2299;

    t140 = (((x561^x562)|x563)|x564);

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = 0;
	volatile uint64_t x566 = 95996739398018036LLU;
	static uint32_t x567 = UINT32_MAX;
	static int16_t x568 = INT16_MIN;
	static volatile uint64_t t141 = UINT64_MAX;

    t141 = (((x565^x566)|x567)|x568);

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = 178U;
	int16_t x570 = -1;
	volatile int64_t x571 = INT64_MIN;
	int32_t x572 = INT32_MIN;
	int64_t t142 = 0LL;

    t142 = (((x569^x570)|x571)|x572);

    if (t142 != -179LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x573 = -1;
	int8_t x574 = INT8_MAX;
	volatile int64_t x576 = -1LL;
	int64_t t143 = 497545513518499529LL;

    t143 = (((x573^x574)|x575)|x576);

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MAX;
	int32_t x578 = INT32_MIN;
	int64_t x579 = INT64_MIN;
	volatile int16_t x580 = -1;

    t144 = (((x577^x578)|x579)|x580);

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 2U;
	uint16_t x583 = 3437U;
	int8_t x584 = INT8_MIN;

    t145 = (((x581^x582)|x583)|x584);

    if (t145 != UINT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -793;
	volatile uint32_t x586 = 2308455U;
	static int16_t x587 = 22;
	int16_t x588 = INT16_MAX;

    t146 = (((x585^x586)|x587)|x588);

    if (t146 != 4292673535U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -1;
	uint16_t x591 = UINT16_MAX;
	int64_t x592 = -88LL;
	volatile int64_t t147 = -28LL;

    t147 = (((x589^x590)|x591)|x592);

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = 35U;
	static volatile int16_t x594 = 35;
	int16_t x595 = INT16_MIN;
	volatile int32_t t148 = -126;

    t148 = (((x593^x594)|x595)|x596);

    if (t148 != -128) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x597 = UINT32_MAX;
	int16_t x598 = INT16_MIN;
	int8_t x599 = -1;
	int16_t x600 = INT16_MIN;
	static volatile uint32_t t149 = UINT32_MAX;

    t149 = (((x597^x598)|x599)|x600);

    if (t149 != UINT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x601 = 4U;
	int8_t x602 = INT8_MIN;
	volatile int64_t x603 = 11789203381LL;
	static uint8_t x604 = 0U;

    t150 = (((x601^x602)|x603)|x604);

    if (t150 != -75LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x606 = UINT32_MAX;
	uint16_t x607 = UINT16_MAX;
	uint16_t x608 = 27866U;
	uint32_t t151 = UINT32_MAX;

    t151 = (((x605^x606)|x607)|x608);

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint8_t x609 = 0U;
	uint64_t x610 = 129LLU;
	static uint8_t x611 = UINT8_MAX;
	volatile int64_t x612 = INT64_MAX;
	static volatile uint64_t t152 = 1181481LLU;

    t152 = (((x609^x610)|x611)|x612);

    if (t152 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 2524LLU;
	volatile int8_t x614 = INT8_MIN;
	int64_t x615 = INT64_MIN;
	static int64_t x616 = -35878631591LL;
	volatile uint64_t t153 = 25634177787093844LLU;

    t153 = (((x613^x614)|x615)|x616);

    if (t153 != 18446744073709549405LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x617 = INT16_MAX;
	int32_t x618 = 359130;
	int64_t x619 = INT64_MAX;
	int16_t x620 = -1;
	int64_t t154 = 61349LL;

    t154 = (((x617^x618)|x619)|x620);

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x622 = -8;
	static int32_t x624 = -1;
	volatile uint32_t t155 = UINT32_MAX;

    t155 = (((x621^x622)|x623)|x624);

    if (t155 != UINT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int8_t x625 = -1;
	int8_t x627 = 7;
	uint8_t x628 = UINT8_MAX;
	uint64_t t156 = 42225861695481LLU;

    t156 = (((x625^x626)|x627)|x628);

    if (t156 != 255LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x630 = 1U;
	int8_t x631 = INT8_MAX;
	int8_t x632 = INT8_MIN;
	static int32_t t157 = -1994;

    t157 = (((x629^x630)|x631)|x632);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MIN;
	uint32_t x634 = UINT32_MAX;
	uint8_t x636 = UINT8_MAX;
	int64_t t158 = -1LL;

    t158 = (((x633^x634)|x635)|x636);

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MIN;
	int64_t x639 = 44LL;
	int64_t t159 = -2477LL;

    t159 = (((x637^x638)|x639)|x640);

    if (t159 != -12546LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x642 = -2555518404214111LL;
	uint64_t t160 = UINT64_MAX;

    t160 = (((x641^x642)|x643)|x644);

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x645 = UINT32_MAX;
	static int16_t x646 = INT16_MAX;
	volatile int16_t x647 = -1;
	volatile int64_t t161 = 507000804468LL;

    t161 = (((x645^x646)|x647)|x648);

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x650 = UINT32_MAX;
	volatile uint16_t x652 = UINT16_MAX;
	volatile uint32_t t162 = UINT32_MAX;

    t162 = (((x649^x650)|x651)|x652);

    if (t162 != UINT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 1U;
	int16_t x655 = INT16_MIN;
	int8_t x656 = 3;
	int32_t t163 = 173;

    t163 = (((x653^x654)|x655)|x656);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x658 = UINT16_MAX;
	int8_t x659 = INT8_MAX;
	volatile int8_t x660 = INT8_MIN;
	int32_t t164 = -2930732;

    t164 = (((x657^x658)|x659)|x660);

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = 0U;
	int32_t x662 = INT32_MIN;
	int64_t x663 = -1LL;
	volatile int16_t x664 = -1;
	int64_t t165 = 672648170LL;

    t165 = (((x661^x662)|x663)|x664);

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x665 = INT64_MAX;
	int8_t x666 = INT8_MAX;
	volatile int32_t x667 = -1;
	uint8_t x668 = 63U;
	int64_t t166 = -485205092118LL;

    t166 = (((x665^x666)|x667)|x668);

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	volatile int16_t x670 = 121;
	int16_t x671 = INT16_MAX;
	static volatile uint16_t x672 = UINT16_MAX;

    t167 = (((x669^x670)|x671)|x672);

    if (t167 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	int64_t x675 = -1LL;
	volatile uint64_t t168 = UINT64_MAX;

    t168 = (((x673^x674)|x675)|x676);

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x678 = INT32_MIN;
	volatile int8_t x680 = -60;
	int64_t t169 = -99441268528168LL;

    t169 = (((x677^x678)|x679)|x680);

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x681 = -4620280;
	int32_t x682 = INT32_MAX;
	uint32_t x683 = UINT32_MAX;

    t170 = (((x681^x682)|x683)|x684);

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MIN;
	volatile int8_t x686 = INT8_MAX;
	volatile int64_t x687 = INT64_MIN;
	volatile int8_t x688 = INT8_MAX;
	int64_t t171 = -166LL;

    t171 = (((x685^x686)|x687)|x688);

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = -14;
	uint16_t x691 = 51U;
	int64_t x692 = -230858546546LL;
	int64_t t172 = -16144150510LL;

    t172 = (((x689^x690)|x691)|x692);

    if (t172 != -230858522625LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MAX;
	uint64_t x695 = UINT64_MAX;
	uint32_t x696 = 21U;
	volatile uint64_t t173 = UINT64_MAX;

    t173 = (((x693^x694)|x695)|x696);

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MAX;
	volatile int64_t x698 = -1LL;
	int16_t x700 = 8080;
	static volatile int64_t t174 = -9113631912LL;

    t174 = (((x697^x698)|x699)|x700);

    if (t174 != -24681LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 62U;
	uint32_t x702 = 379U;
	int8_t x703 = INT8_MAX;
	int64_t x704 = -1LL;
	int64_t t175 = -192953LL;

    t175 = (((x701^x702)|x703)|x704);

    if (t175 != -1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = -3502;
	uint8_t x706 = 15U;
	int16_t x707 = -3;
	int32_t x708 = INT32_MAX;
	volatile int32_t t176 = -5034888;

    t176 = (((x705^x706)|x707)|x708);

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = UINT64_MAX;
	int32_t x710 = -15633;
	uint8_t x712 = 0U;
	volatile uint64_t t177 = 15LLU;

    t177 = (((x709^x710)|x711)|x712);

    if (t177 != 4294967295LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MIN;
	int64_t x714 = INT64_MAX;
	uint64_t x715 = UINT64_MAX;
	uint64_t x716 = 67587478LLU;
	volatile uint64_t t178 = UINT64_MAX;

    t178 = (((x713^x714)|x715)|x716);

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MAX;
	uint64_t x718 = 138974LLU;
	volatile uint64_t x719 = 64906918LLU;
	int16_t x720 = INT16_MIN;
	uint64_t t179 = 1086532736902788846LLU;

    t179 = (((x717^x718)|x719)|x720);

    if (t179 != 18446744073709545383LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = UINT8_MAX;
	uint16_t x724 = 1U;
	volatile uint32_t t180 = 19510U;

    t180 = (((x721^x722)|x723)|x724);

    if (t180 != 7775U) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint8_t x726 = UINT8_MAX;
	int32_t x727 = INT32_MIN;
	int32_t x728 = INT32_MAX;
	int32_t t181 = 182262886;

    t181 = (((x725^x726)|x727)|x728);

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x730 = UINT32_MAX;
	uint8_t x731 = 1U;
	static int64_t x732 = -1LL;
	static volatile int64_t t182 = 6846322685LL;

    t182 = (((x729^x730)|x731)|x732);

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x734 = INT16_MIN;
	uint16_t x735 = 983U;
	volatile uint64_t x736 = UINT64_MAX;
	uint64_t t183 = UINT64_MAX;

    t183 = (((x733^x734)|x735)|x736);

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = 543841213271552LL;
	uint64_t x740 = UINT64_MAX;
	uint64_t t184 = UINT64_MAX;

    t184 = (((x737^x738)|x739)|x740);

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x741 = INT16_MIN;
	static uint32_t x742 = UINT32_MAX;
	static volatile uint8_t x744 = UINT8_MAX;
	volatile uint32_t t185 = 13383045U;

    t185 = (((x741^x742)|x743)|x744);

    if (t185 != 32767U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MAX;
	static int8_t x746 = -1;
	int8_t x747 = -1;
	int64_t t186 = -6222029LL;

    t186 = (((x745^x746)|x747)|x748);

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x749 = -1LL;
	int32_t x750 = INT32_MIN;
	uint32_t x751 = 3039U;
	int8_t x752 = INT8_MAX;
	int64_t t187 = -140619099812066LL;

    t187 = (((x749^x750)|x751)|x752);

    if (t187 != 2147483647LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = UINT32_MAX;
	uint8_t x754 = 62U;
	volatile int64_t x755 = -1LL;
	int16_t x756 = INT16_MIN;
	int64_t t188 = -270104110LL;

    t188 = (((x753^x754)|x755)|x756);

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x757 = INT32_MAX;
	uint8_t x759 = UINT8_MAX;
	int32_t x760 = -1;
	static int32_t t189 = -69254635;

    t189 = (((x757^x758)|x759)|x760);

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MAX;
	volatile uint8_t x764 = 3U;
	int64_t t190 = INT64_MAX;

    t190 = (((x761^x762)|x763)|x764);

    if (t190 != INT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	uint32_t x768 = 34763U;
	uint32_t t191 = 151468U;

    t191 = (((x765^x766)|x767)|x768);

    if (t191 != 34815U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MAX;
	int8_t x770 = INT8_MIN;
	int8_t x771 = INT8_MAX;
	volatile int32_t t192 = 23;

    t192 = (((x769^x770)|x771)|x772);

    if (t192 != -32641) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x773 = UINT16_MAX;
	volatile uint32_t x774 = UINT32_MAX;
	volatile uint16_t x775 = 22U;
	int64_t x776 = -1LL;
	volatile int64_t t193 = 271434258LL;

    t193 = (((x773^x774)|x775)|x776);

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint64_t x777 = UINT64_MAX;
	uint64_t x778 = 10234LLU;
	int16_t x779 = INT16_MIN;
	uint16_t x780 = UINT16_MAX;
	static volatile uint64_t t194 = UINT64_MAX;

    t194 = (((x777^x778)|x779)|x780);

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MIN;
	int32_t x783 = 1382;
	volatile int32_t x784 = -1;
	volatile int32_t t195 = 1;

    t195 = (((x781^x782)|x783)|x784);

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = 0U;
	uint8_t x786 = 48U;
	uint32_t x787 = 698678U;
	uint32_t t196 = 1U;

    t196 = (((x785^x786)|x787)|x788);

    if (t196 != 698678U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = 1U;
	int16_t x790 = INT16_MIN;
	static int8_t x791 = 26;
	volatile int32_t t197 = 318012147;

    t197 = (((x789^x790)|x791)|x792);

    if (t197 != -32513) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = UINT64_MAX;
	uint8_t x794 = UINT8_MAX;
	volatile uint32_t x795 = 20201U;
	static int16_t x796 = INT16_MAX;

    t198 = (((x793^x794)|x795)|x796);

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = UINT16_MAX;
	int64_t x798 = -1LL;
	uint16_t x800 = 3U;
	volatile int64_t t199 = 421781365139LL;

    t199 = (((x797^x798)|x799)|x800);

    if (t199 != -65533LL) { NG(); } else { ; }
	
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

