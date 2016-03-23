
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

int64_t x2 = INT64_MIN;
static uint8_t x5 = 5U;
static volatile uint8_t x7 = UINT8_MAX;
volatile int64_t t1 = 53583240LL;
int32_t x11 = INT32_MIN;
int32_t x24 = 523136862;
volatile int32_t t5 = -7;
int16_t x26 = -1;
int32_t x29 = -30641;
static volatile int16_t x33 = -1;
volatile uint64_t x39 = 3204LLU;
static int32_t x40 = 3828;
volatile uint32_t x49 = 1091358824U;
volatile uint64_t t12 = 5738888775053759122LLU;
int64_t x54 = INT64_MAX;
volatile int64_t t13 = 25530289799244489LL;
volatile uint32_t t14 = 219103U;
int16_t x62 = INT16_MIN;
int32_t x66 = 4;
static int32_t x70 = -245535311;
int64_t t18 = -104LL;
uint32_t x80 = 1399U;
uint32_t x85 = 6686U;
volatile uint64_t t22 = 64804LLU;
int64_t x97 = -1LL;
static uint64_t t25 = 0LLU;
uint16_t x108 = UINT16_MAX;
volatile uint16_t x113 = UINT16_MAX;
static int32_t x115 = -1;
uint16_t x117 = UINT16_MAX;
int64_t t29 = -58705863510LL;
uint16_t x121 = 29U;
int64_t t30 = 272702LL;
uint16_t x129 = UINT16_MAX;
static int32_t x131 = -1;
volatile int32_t t32 = -11126449;
int32_t x134 = INT32_MIN;
uint32_t t34 = 237U;
int32_t t37 = -215394560;
int8_t x153 = -1;
uint64_t x156 = 5349577148010088LLU;
uint32_t x162 = UINT32_MAX;
static volatile int64_t x167 = INT64_MIN;
static uint8_t x168 = 84U;
int64_t x177 = INT64_MAX;
uint16_t x185 = UINT16_MAX;
volatile uint64_t t48 = 405947809LLU;
int32_t x201 = -396179223;
uint32_t x203 = 9U;
uint8_t x204 = 46U;
int16_t x212 = INT16_MAX;
int32_t x216 = -961039477;
uint64_t x218 = 4327905798303970631LLU;
int32_t x220 = INT32_MAX;
uint64_t t54 = 3773900438470LLU;
volatile int64_t t55 = -29994735214LL;
int32_t x227 = -652;
static uint32_t x236 = UINT32_MAX;
int8_t x237 = -7;
int8_t x238 = -23;
volatile int64_t t58 = -5LL;
int8_t x245 = -3;
uint8_t x259 = 75U;
uint32_t x262 = 30198593U;
volatile int16_t x263 = INT16_MAX;
volatile int64_t x264 = -1LL;
int32_t x266 = INT32_MAX;
volatile int32_t x271 = INT32_MIN;
uint16_t x272 = 78U;
uint8_t x277 = 1U;
int16_t x278 = INT16_MIN;
volatile int64_t x280 = -158028278927111916LL;
static int8_t x282 = INT8_MIN;
int8_t x283 = 7;
volatile int32_t t69 = 1;
int8_t x286 = INT8_MIN;
uint64_t x287 = 491663266871525LLU;
uint16_t x309 = 81U;
int64_t x310 = -1LL;
int16_t x312 = 6;
int8_t x323 = 3;
int64_t x326 = INT64_MIN;
static uint64_t x328 = UINT64_MAX;
volatile int32_t x331 = INT32_MIN;
static uint64_t t81 = 1LLU;
int32_t x338 = INT32_MIN;
int16_t x344 = INT16_MAX;
uint32_t t83 = 9996058U;
static volatile int8_t x348 = -1;
int16_t x350 = INT16_MIN;
uint16_t x351 = 228U;
static volatile int64_t x354 = INT64_MIN;
static uint64_t x361 = UINT64_MAX;
int16_t x368 = INT16_MIN;
int16_t x369 = -1;
uint64_t x371 = 8553675195LLU;
uint64_t x372 = 350326851035LLU;
int16_t x381 = -1047;
static uint32_t x383 = 3U;
int16_t x386 = -14434;
static uint32_t x389 = 120U;
volatile uint32_t t94 = 2752U;
volatile uint32_t x393 = 51U;
static volatile int16_t x394 = 1073;
int32_t x406 = INT32_MIN;
int16_t x426 = 834;
int16_t x427 = -46;
int8_t x429 = -1;
uint64_t t104 = 10970LLU;
int32_t x436 = -1;
int64_t t105 = 45LL;
uint64_t x439 = 1398485592563LLU;
uint64_t t106 = 1009970788793468112LLU;
static volatile uint16_t x442 = 2U;
int8_t x443 = INT8_MAX;
uint32_t x445 = UINT32_MAX;
uint64_t t108 = 5536LLU;
volatile uint16_t x449 = 18557U;
static uint16_t x454 = UINT16_MAX;
int16_t x455 = -1;
static int32_t x462 = INT32_MAX;
volatile int32_t x463 = INT32_MIN;
int32_t x464 = -5225;
volatile int32_t t112 = 97170;
static uint64_t x466 = 429877732LLU;
int64_t x469 = -12244263022537627LL;
uint32_t x473 = 1817U;
static int32_t x474 = INT32_MAX;
static uint32_t t115 = 82U;
uint16_t x482 = UINT16_MAX;
static int8_t x485 = INT8_MIN;
volatile uint64_t t118 = 224830844616546LLU;
int16_t x490 = INT16_MIN;
int16_t x492 = -5715;
static uint32_t t120 = 113U;
int64_t x497 = 3393024253LL;
uint16_t x505 = 280U;
static int64_t x511 = INT64_MAX;
uint8_t x515 = 2U;
int8_t x519 = INT8_MAX;
int8_t x520 = INT8_MIN;
static volatile uint16_t x524 = 151U;
volatile int32_t t127 = -253067;
static volatile int32_t t128 = 11;
volatile int32_t x543 = INT32_MIN;
uint16_t x548 = UINT16_MAX;
static int16_t x551 = 5;
int64_t x555 = INT64_MIN;
static volatile int64_t t135 = 3032136LL;
static uint64_t t136 = 8193248LLU;
uint8_t x562 = UINT8_MAX;
static uint16_t x567 = 4027U;
static volatile uint64_t x568 = 2LLU;
static int16_t x574 = -47;
static int16_t x575 = INT16_MIN;
static uint16_t x576 = 9U;
uint32_t x579 = 1257U;
volatile int32_t x582 = -13365;
int32_t x585 = 11518;
int64_t x588 = -1LL;
uint8_t x592 = 9U;
volatile int16_t x595 = INT16_MIN;
int64_t x596 = -53609144128LL;
int16_t x602 = INT16_MAX;
static uint32_t x603 = 438558U;
static uint32_t x604 = 3U;
volatile uint32_t t148 = 852596U;
static int32_t x615 = 7;
int8_t x616 = INT8_MIN;
uint32_t x618 = 170U;
volatile uint32_t x627 = 56048965U;
volatile int32_t t154 = -2265545;
volatile int32_t t155 = 264582;
int64_t x641 = INT64_MIN;
static volatile int64_t t156 = -16206831277LL;
uint64_t x648 = 1753697398771LLU;
volatile int64_t t159 = 31365486777893494LL;
int16_t x661 = INT16_MAX;
int32_t x666 = INT32_MAX;
uint32_t x667 = UINT32_MAX;
int64_t t165 = 8034400373LL;
int32_t x681 = INT32_MIN;
int16_t x682 = -25;
static uint64_t t169 = 55715077147LLU;
int8_t x702 = -1;
uint64_t t172 = 2164837152577LLU;
int16_t x709 = 6306;
volatile uint64_t x714 = UINT64_MAX;
static uint64_t t174 = 10LLU;
volatile int16_t x717 = INT16_MIN;
int32_t x727 = INT32_MAX;
volatile uint64_t t177 = 2983LLU;
uint32_t x738 = 11490348U;
int8_t x740 = -1;
int16_t x744 = -1;
int8_t x745 = INT8_MIN;
static int32_t x748 = INT32_MIN;
int8_t x756 = -23;
uint32_t x758 = 70U;
uint32_t x760 = 1U;
volatile uint8_t x762 = 59U;
uint8_t x765 = 9U;
int16_t x766 = 1;
int64_t x768 = INT64_MIN;
uint64_t x775 = 265669451659LLU;
static uint64_t t188 = 59275648409757023LLU;
volatile int64_t x784 = INT64_MAX;
int64_t x790 = INT64_MIN;
uint32_t x793 = UINT32_MAX;
int8_t x796 = INT8_MAX;
volatile uint32_t t193 = 358493U;
volatile uint64_t t194 = 52LLU;
int64_t x802 = -1LL;
static uint32_t x804 = 29997U;
int64_t t195 = -105229997974570LL;
int64_t t196 = -87LL;
volatile uint16_t x809 = 33U;
static int32_t x818 = -1;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	uint32_t x3 = 873554486U;
	int16_t x4 = INT16_MIN;
	int64_t t0 = 6045762837LL;

    t0 = (((x1^x2)&x3)/x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = -1;
	int64_t x8 = -32434071888441268LL;

    t1 = (((x5^x6)&x7)/x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = INT16_MIN;
	volatile int8_t x10 = -1;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 1;

    t2 = (((x9^x10)&x11)/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 21755474LL;
	uint16_t x14 = UINT16_MAX;
	static int8_t x15 = -11;
	uint32_t x16 = UINT32_MAX;
	int64_t t3 = 239593343262451LL;

    t3 = (((x13^x14)&x15)/x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = UINT8_MAX;
	volatile uint64_t x18 = UINT64_MAX;
	int64_t x19 = -1LL;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = 22562198275376LLU;

    t4 = (((x17^x18)&x19)/x20);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	int16_t x22 = INT16_MAX;
	int32_t x23 = -1;

    t5 = (((x21^x22)&x23)/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	uint32_t x27 = 55129U;
	int16_t x28 = INT16_MAX;
	static uint32_t t6 = 68U;

    t6 = (((x25^x26)&x27)/x28);

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = INT8_MIN;
	int64_t x31 = -1603035120870791LL;
	int32_t x32 = 103379656;
	volatile int64_t t7 = -82170040328403LL;

    t7 = (((x29^x30)&x31)/x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x34 = 4U;
	int64_t x35 = -1LL;
	int32_t x36 = INT32_MIN;
	int64_t t8 = -1933203LL;

    t8 = (((x33^x34)&x35)/x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MAX;
	int16_t x38 = INT16_MAX;
	static uint64_t t9 = 2428382113697LLU;

    t9 = (((x37^x38)&x39)/x40);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	static int32_t x42 = -1;
	static int32_t x43 = 3623;
	static int64_t x44 = INT64_MIN;
	volatile int64_t t10 = -7LL;

    t10 = (((x41^x42)&x43)/x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = 0;
	static int8_t x46 = INT8_MIN;
	uint16_t x47 = UINT16_MAX;
	static volatile int8_t x48 = -1;
	volatile int32_t t11 = 21944;

    t11 = (((x45^x46)&x47)/x48);

    if (t11 != -65408) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = INT8_MIN;
	static uint8_t x51 = 19U;
	volatile uint64_t x52 = UINT64_MAX;

    t12 = (((x49^x50)&x51)/x52);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = 1;
	volatile int16_t x55 = 5393;
	static int8_t x56 = INT8_MAX;

    t13 = (((x53^x54)&x55)/x56);

    if (t13 != 42LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = -1;
	int32_t x58 = 56;
	uint32_t x59 = 149840748U;
	uint8_t x60 = 1U;

    t14 = (((x57^x58)&x59)/x60);

    if (t14 != 149840708U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 28141451515LLU;
	int32_t x63 = -2;
	int64_t x64 = INT64_MIN;
	uint64_t t15 = 260937LLU;

    t15 = (((x61^x62)&x63)/x64);

    if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint32_t x65 = 8473U;
	volatile uint64_t x67 = 4067950677732704LLU;
	static volatile uint64_t x68 = 3511526933LLU;
	uint64_t t16 = 17649718LLU;

    t16 = (((x65^x66)&x67)/x68);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x69 = UINT32_MAX;
	volatile uint16_t x71 = UINT16_MAX;
	volatile int32_t x72 = INT32_MIN;
	volatile uint32_t t17 = 224U;

    t17 = (((x69^x70)&x71)/x72);

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x73 = INT64_MAX;
	volatile int8_t x74 = -1;
	static int64_t x75 = INT64_MAX;
	uint32_t x76 = UINT32_MAX;

    t18 = (((x73^x74)&x75)/x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x77 = 37U;
	int16_t x78 = -29;
	int64_t x79 = -1LL;
	int64_t t19 = 732920311LL;

    t19 = (((x77^x78)&x79)/x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = -11;
	int16_t x82 = INT16_MIN;
	uint64_t x83 = UINT64_MAX;
	uint16_t x84 = UINT16_MAX;
	static uint64_t t20 = 7783LLU;

    t20 = (((x81^x82)&x83)/x84);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x86 = -1;
	int16_t x87 = INT16_MIN;
	static uint16_t x88 = UINT16_MAX;
	static uint32_t t21 = 2U;

    t21 = (((x85^x86)&x87)/x88);

    if (t21 != 65536U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	static uint8_t x90 = 2U;
	static volatile uint8_t x91 = UINT8_MAX;
	volatile uint16_t x92 = UINT16_MAX;

    t22 = (((x89^x90)&x91)/x92);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -918589085018LL;
	static uint16_t x94 = 10U;
	volatile int32_t x95 = INT32_MAX;
	volatile uint32_t x96 = 25U;
	int64_t t23 = -12640757169LL;

    t23 = (((x93^x94)&x95)/x96);

    if (t23 != 21356653LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x98 = 1U;
	uint8_t x99 = 8U;
	int8_t x100 = -18;
	volatile int64_t t24 = 53597262929794768LL;

    t24 = (((x97^x98)&x99)/x100);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = UINT8_MAX;
	int32_t x102 = INT32_MIN;
	static int64_t x103 = -1568505056LL;
	uint64_t x104 = 4479LLU;

    t25 = (((x101^x102)&x103)/x104);

    if (t25 != 4118496108855116LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MAX;
	uint16_t x106 = UINT16_MAX;
	int16_t x107 = INT16_MIN;
	int64_t t26 = -69699LL;

    t26 = (((x105^x106)&x107)/x108);

    if (t26 != 140739635871743LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x109 = 108U;
	int16_t x110 = INT16_MIN;
	int16_t x111 = INT16_MIN;
	int8_t x112 = -12;
	volatile uint32_t t27 = 3497869U;

    t27 = (((x109^x110)&x111)/x112);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x114 = 62;
	static volatile int64_t x116 = INT64_MIN;
	volatile int64_t t28 = -6002013401730417LL;

    t28 = (((x113^x114)&x115)/x116);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x118 = INT16_MAX;
	int32_t x119 = INT32_MIN;
	volatile int64_t x120 = INT64_MAX;

    t29 = (((x117^x118)&x119)/x120);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x122 = 244U;
	static int64_t x123 = -2464010752LL;
	int64_t x124 = -1LL;

    t30 = (((x121^x122)&x123)/x124);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = UINT16_MAX;
	static int8_t x126 = INT8_MAX;
	volatile int16_t x127 = INT16_MAX;
	volatile int16_t x128 = INT16_MAX;
	volatile int32_t t31 = -1;

    t31 = (((x125^x126)&x127)/x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x130 = -2;
	int16_t x132 = INT16_MAX;

    t32 = (((x129^x130)&x131)/x132);

    if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x133 = INT32_MAX;
	volatile int8_t x135 = 3;
	int32_t x136 = INT32_MIN;
	volatile int32_t t33 = -23151218;

    t33 = (((x133^x134)&x135)/x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	volatile int8_t x138 = INT8_MIN;
	static int16_t x139 = INT16_MIN;
	uint32_t x140 = 502372U;

    t34 = (((x137^x138)&x139)/x140);

    if (t34 != 4274U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -36708;
	volatile int8_t x142 = 1;
	uint16_t x143 = 4U;
	static int16_t x144 = INT16_MIN;
	int32_t t35 = 66292;

    t35 = (((x141^x142)&x143)/x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MIN;
	volatile uint64_t x146 = 415335683179673LLU;
	volatile uint8_t x147 = 15U;
	static uint64_t x148 = UINT64_MAX;
	uint64_t t36 = 102617327084041LLU;

    t36 = (((x145^x146)&x147)/x148);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	static int8_t x150 = INT8_MAX;
	int8_t x151 = INT8_MIN;
	int16_t x152 = -1;

    t37 = (((x149^x150)&x151)/x152);

    if (t37 != 32768) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x154 = -529519941;
	volatile int16_t x155 = 498;
	volatile uint64_t t38 = 2071217854168991854LLU;

    t38 = (((x153^x154)&x155)/x156);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	int64_t x158 = INT64_MAX;
	int16_t x159 = 152;
	int32_t x160 = INT32_MIN;
	volatile int64_t t39 = 2245097810412638LL;

    t39 = (((x157^x158)&x159)/x160);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MIN;
	int64_t x163 = INT64_MIN;
	uint16_t x164 = 2U;
	int64_t t40 = -11875319LL;

    t40 = (((x161^x162)&x163)/x164);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x165 = UINT8_MAX;
	static int16_t x166 = 8;
	int64_t t41 = -2082730626765538LL;

    t41 = (((x165^x166)&x167)/x168);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 22080227U;
	int32_t x170 = INT32_MIN;
	int8_t x171 = 1;
	static int32_t x172 = 111909144;
	volatile uint32_t t42 = 6024763U;

    t42 = (((x169^x170)&x171)/x172);

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 19878U;
	volatile uint32_t x174 = UINT32_MAX;
	uint32_t x175 = 3146579U;
	int8_t x176 = INT8_MAX;
	static uint32_t t43 = 492454U;

    t43 = (((x173^x174)&x175)/x176);

    if (t43 != 24774U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x178 = INT8_MAX;
	int16_t x179 = INT16_MIN;
	int32_t x180 = -125;
	volatile int64_t t44 = 176618605LL;

    t44 = (((x177^x178)&x179)/x180);

    if (t44 != -73786976294837944LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 0U;
	int32_t x182 = -1;
	int32_t x183 = -4011310;
	int32_t x184 = -1;
	static volatile int32_t t45 = 8;

    t45 = (((x181^x182)&x183)/x184);

    if (t45 != 4011310) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x186 = -1;
	static uint16_t x187 = UINT16_MAX;
	int32_t x188 = -741;
	int32_t t46 = -2324849;

    t46 = (((x185^x186)&x187)/x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x189 = -983LL;
	int8_t x190 = INT8_MIN;
	volatile int32_t x191 = -1311367;
	int16_t x192 = -1;
	volatile int64_t t47 = -28516924LL;

    t47 = (((x189^x190)&x191)/x192);

    if (t47 != -297LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 644760LLU;
	uint16_t x194 = 0U;
	int16_t x195 = -1;
	volatile int16_t x196 = -18;

    t48 = (((x193^x194)&x195)/x196);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	int8_t x198 = 13;
	int16_t x199 = -4087;
	int16_t x200 = 121;
	volatile int64_t t49 = 109374939049LL;

    t49 = (((x197^x198)&x199)/x200);

    if (t49 != -76226215180617981LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x202 = 5334U;
	volatile uint32_t t50 = 61U;

    t50 = (((x201^x202)&x203)/x204);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = INT8_MIN;
	int16_t x206 = -423;
	uint16_t x207 = UINT16_MAX;
	uint8_t x208 = UINT8_MAX;
	static int32_t t51 = 17;

    t51 = (((x205^x206)&x207)/x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	int32_t x210 = INT32_MAX;
	static int64_t x211 = INT64_MIN;
	volatile int64_t t52 = 123803038781443LL;

    t52 = (((x209^x210)&x211)/x212);

    if (t52 != -281483566907400LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	int32_t x214 = 498;
	uint8_t x215 = UINT8_MAX;
	volatile int32_t t53 = 63031;

    t53 = (((x213^x214)&x215)/x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	int16_t x219 = INT16_MAX;

    t54 = (((x217^x218)&x219)/x220);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x221 = INT64_MAX;
	int8_t x222 = -26;
	int32_t x223 = 1;
	uint8_t x224 = 1U;

    t55 = (((x221^x222)&x223)/x224);

    if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -27;
	int64_t x226 = -6995697889LL;
	int32_t x228 = -1;
	int64_t t56 = -57665575366LL;

    t56 = (((x225^x226)&x227)/x228);

    if (t56 != -6995697776LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x233 = UINT32_MAX;
	static int64_t x234 = 80024638674775LL;
	static int16_t x235 = -14791;
	int64_t t57 = -41224842253LL;

    t57 = (((x233^x234)&x235)/x236);

    if (t57 != 18632LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x239 = 7U;
	static int64_t x240 = -1LL;

    t58 = (((x237^x238)&x239)/x240);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x241 = INT16_MAX;
	int16_t x242 = INT16_MIN;
	volatile int32_t x243 = INT32_MIN;
	static volatile int8_t x244 = INT8_MIN;
	int32_t t59 = -1000;

    t59 = (((x241^x242)&x243)/x244);

    if (t59 != 16777216) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x246 = -1LL;
	static volatile int16_t x247 = -1;
	int64_t x248 = INT64_MIN;
	int64_t t60 = 28804596LL;

    t60 = (((x245^x246)&x247)/x248);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x249 = 1980U;
	int64_t x250 = -1LL;
	static uint32_t x251 = 13161485U;
	int16_t x252 = -13476;
	volatile int64_t t61 = -3974387159730114536LL;

    t61 = (((x249^x250)&x251)/x252);

    if (t61 != -976LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x253 = -1;
	volatile uint32_t x254 = 92669351U;
	static uint8_t x255 = 6U;
	volatile int64_t x256 = -1LL;
	int64_t t62 = -7152135884632LL;

    t62 = (((x253^x254)&x255)/x256);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x257 = 4048456U;
	volatile int16_t x258 = INT16_MAX;
	volatile uint64_t x260 = 5LLU;
	volatile uint64_t t63 = 3780699LLU;

    t63 = (((x257^x258)&x259)/x260);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x261 = 0;
	volatile int64_t t64 = -94474353130233595LL;

    t64 = (((x261^x262)&x263)/x264);

    if (t64 != -19265LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x265 = INT8_MIN;
	uint16_t x267 = 21631U;
	int64_t x268 = -111700304LL;
	volatile int64_t t65 = -167099782LL;

    t65 = (((x265^x266)&x267)/x268);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x269 = 737LLU;
	static int32_t x270 = -25;
	static volatile uint64_t t66 = 1993098553612726863LLU;

    t66 = (((x269^x270)&x271)/x272);

    if (t66 != 236496718866180358LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x273 = UINT32_MAX;
	volatile int8_t x274 = INT8_MIN;
	int64_t x275 = INT64_MAX;
	uint8_t x276 = UINT8_MAX;
	int64_t t67 = 91398156398LL;

    t67 = (((x273^x274)&x275)/x276);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x279 = -1;
	int64_t t68 = -128167385697151236LL;

    t68 = (((x277^x278)&x279)/x280);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x281 = 3;
	int32_t x284 = 8;

    t69 = (((x281^x282)&x283)/x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x285 = 3648318U;
	int8_t x288 = INT8_MIN;
	uint64_t t70 = 56110LLU;

    t70 = (((x285^x286)&x287)/x288);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x289 = INT16_MIN;
	volatile int16_t x290 = -1;
	int8_t x291 = INT8_MIN;
	volatile int32_t x292 = INT32_MAX;
	int32_t t71 = -829068630;

    t71 = (((x289^x290)&x291)/x292);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x293 = UINT64_MAX;
	static uint8_t x294 = UINT8_MAX;
	int32_t x295 = 128958;
	uint8_t x296 = UINT8_MAX;
	volatile uint64_t t72 = 945LLU;

    t72 = (((x293^x294)&x295)/x296);

    if (t72 != 504LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x297 = 6291096LLU;
	int8_t x298 = INT8_MIN;
	int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MIN;
	volatile uint64_t t73 = 1246101850LLU;

    t73 = (((x297^x298)&x299)/x300);

    if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x301 = INT32_MIN;
	int32_t x302 = -14422;
	int16_t x303 = 1851;
	static uint8_t x304 = 3U;
	volatile int32_t t74 = 117998;

    t74 = (((x301^x302)&x303)/x304);

    if (t74 != 611) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x305 = -42074LL;
	uint32_t x306 = 1165U;
	int32_t x307 = INT32_MIN;
	uint32_t x308 = 5028U;
	int64_t t75 = -16442011096205376LL;

    t75 = (((x305^x306)&x307)/x308);

    if (t75 != -427104LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x311 = -1;
	volatile int64_t t76 = -15453732280722750LL;

    t76 = (((x309^x310)&x311)/x312);

    if (t76 != -13LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x317 = -13;
	int32_t x318 = INT32_MIN;
	static int8_t x319 = INT8_MIN;
	int8_t x320 = -1;
	volatile int32_t t77 = -139;

    t77 = (((x317^x318)&x319)/x320);

    if (t77 != -2147483520) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x321 = INT16_MIN;
	static int8_t x322 = INT8_MAX;
	int8_t x324 = INT8_MIN;
	static int32_t t78 = 0;

    t78 = (((x321^x322)&x323)/x324);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x325 = INT32_MAX;
	int8_t x327 = INT8_MIN;
	uint64_t t79 = 51243LLU;

    t79 = (((x325^x326)&x327)/x328);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x329 = -1;
	int16_t x330 = INT16_MIN;
	int64_t x332 = INT64_MIN;
	static volatile int64_t t80 = 2787332LL;

    t80 = (((x329^x330)&x331)/x332);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x333 = -1;
	int64_t x334 = -281031LL;
	static uint64_t x335 = 3369141695211LLU;
	uint16_t x336 = 281U;

    t81 = (((x333^x334)&x335)/x336);

    if (t81 != 991LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x337 = 3U;
	int32_t x339 = INT32_MIN;
	uint32_t x340 = 1792013U;
	volatile uint32_t t82 = 78212U;

    t82 = (((x337^x338)&x339)/x340);

    if (t82 != 1198U) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x341 = INT16_MIN;
	int32_t x342 = 151842379;
	uint32_t x343 = 38U;

    t83 = (((x341^x342)&x343)/x344);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x345 = UINT32_MAX;
	int32_t x346 = INT32_MIN;
	uint64_t x347 = 24911LLU;
	uint64_t t84 = 6302270515LLU;

    t84 = (((x345^x346)&x347)/x348);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x349 = UINT16_MAX;
	static int64_t x352 = INT64_MAX;
	volatile int64_t t85 = -5LL;

    t85 = (((x349^x350)&x351)/x352);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x353 = INT8_MIN;
	int32_t x355 = INT32_MIN;
	uint8_t x356 = UINT8_MAX;
	static int64_t t86 = 147032876135LL;

    t86 = (((x353^x354)&x355)/x356);

    if (t86 != 36170086410616832LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x357 = 492U;
	volatile uint16_t x358 = 16546U;
	static int64_t x359 = -21496LL;
	int32_t x360 = -3947;
	int64_t t87 = -30032418599LL;

    t87 = (((x357^x358)&x359)/x360);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x362 = 724872618;
	int32_t x363 = INT32_MIN;
	static uint32_t x364 = UINT32_MAX;
	static volatile uint64_t t88 = 127504917282560LLU;

    t88 = (((x361^x362)&x363)/x364);

    if (t88 != 4294967296LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint16_t x365 = 8U;
	volatile int64_t x366 = INT64_MIN;
	int32_t x367 = 50160;
	volatile int64_t t89 = 1215LL;

    t89 = (((x365^x366)&x367)/x368);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x370 = -1;
	volatile uint64_t t90 = 474107282801LLU;

    t90 = (((x369^x370)&x371)/x372);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x373 = UINT64_MAX;
	int64_t x374 = INT64_MIN;
	int16_t x375 = INT16_MIN;
	int16_t x376 = INT16_MIN;
	volatile uint64_t t91 = 133508836861932LLU;

    t91 = (((x373^x374)&x375)/x376);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x382 = INT8_MAX;
	int32_t x384 = -1;
	volatile uint32_t t92 = 110196984U;

    t92 = (((x381^x382)&x383)/x384);

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x385 = INT16_MIN;
	int8_t x387 = -1;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t93 = 30538721;

    t93 = (((x385^x386)&x387)/x388);

    if (t93 != 71) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x390 = UINT32_MAX;
	static uint32_t x391 = UINT32_MAX;
	static uint16_t x392 = UINT16_MAX;

    t94 = (((x389^x390)&x391)/x392);

    if (t94 != 65536U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x395 = UINT64_MAX;
	int32_t x396 = INT32_MIN;
	static volatile uint64_t t95 = 399081431877882LLU;

    t95 = (((x393^x394)&x395)/x396);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x397 = -915197;
	uint32_t x398 = 203333993U;
	static volatile uint16_t x399 = 82U;
	uint32_t x400 = UINT32_MAX;
	uint32_t t96 = 17781280U;

    t96 = (((x397^x398)&x399)/x400);

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x401 = INT32_MIN;
	int16_t x402 = 2883;
	volatile int16_t x403 = INT16_MIN;
	static uint64_t x404 = UINT64_MAX;
	static uint64_t t97 = 523343333LLU;

    t97 = (((x401^x402)&x403)/x404);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x405 = 0U;
	int64_t x407 = INT64_MIN;
	static int32_t x408 = -3403;
	int64_t t98 = 3708091533760175980LL;

    t98 = (((x405^x406)&x407)/x408);

    if (t98 != 2710364982913539LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x409 = 3521U;
	static volatile uint16_t x410 = 7989U;
	uint64_t x411 = UINT64_MAX;
	int8_t x412 = INT8_MIN;
	uint64_t t99 = 176LLU;

    t99 = (((x409^x410)&x411)/x412);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x413 = -90115368;
	uint16_t x414 = 26790U;
	volatile int8_t x415 = 1;
	static uint32_t x416 = 106U;
	volatile uint32_t t100 = 390U;

    t100 = (((x413^x414)&x415)/x416);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x417 = 18U;
	int8_t x418 = 10;
	int32_t x419 = INT32_MAX;
	int32_t x420 = 24873;
	int32_t t101 = 23207;

    t101 = (((x417^x418)&x419)/x420);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x421 = -15;
	volatile int16_t x422 = -3;
	uint8_t x423 = 4U;
	int32_t x424 = INT32_MAX;
	int32_t t102 = -883174;

    t102 = (((x421^x422)&x423)/x424);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x425 = -110952183;
	uint16_t x428 = 30U;
	volatile int32_t t103 = 1989523;

    t103 = (((x425^x426)&x427)/x428);

    if (t103 != -3698395) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x430 = INT8_MIN;
	int32_t x431 = -152;
	uint64_t x432 = 8234LLU;

    t104 = (((x429^x430)&x431)/x432);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint32_t x433 = UINT32_MAX;
	static volatile int64_t x434 = -2LL;
	volatile int16_t x435 = 1302;

    t105 = (((x433^x434)&x435)/x436);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x437 = INT16_MIN;
	int8_t x438 = 3;
	int16_t x440 = INT16_MAX;

    t106 = (((x437^x438)&x439)/x440);

    if (t106 != 42679695LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x441 = -150916;
	int64_t x444 = -1LL;
	volatile int64_t t107 = -1LL;

    t107 = (((x441^x442)&x443)/x444);

    if (t107 != -126LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x446 = 253962303LLU;
	volatile int16_t x447 = INT16_MIN;
	static uint8_t x448 = 6U;

    t108 = (((x445^x446)&x447)/x448);

    if (t108 != 673497088LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x450 = INT8_MIN;
	static volatile int16_t x451 = INT16_MAX;
	volatile int64_t x452 = INT64_MAX;
	volatile int64_t t109 = 16847586284LL;

    t109 = (((x449^x450)&x451)/x452);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x453 = -1;
	volatile int16_t x456 = INT16_MAX;
	static int32_t t110 = 118531;

    t110 = (((x453^x454)&x455)/x456);

    if (t110 != -2) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x457 = -1LL;
	volatile uint16_t x458 = UINT16_MAX;
	uint64_t x459 = UINT64_MAX;
	static volatile uint8_t x460 = UINT8_MAX;
	static volatile uint64_t t111 = 19781178773LLU;

    t111 = (((x457^x458)&x459)/x460);

    if (t111 != 72340172838076416LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x461 = 22633542;

    t112 = (((x461^x462)&x463)/x464);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x465 = -1LL;
	int16_t x467 = 1;
	int8_t x468 = -1;
	uint64_t t113 = 4139217903944LLU;

    t113 = (((x465^x466)&x467)/x468);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x470 = INT8_MIN;
	int64_t x471 = -1LL;
	uint64_t x472 = UINT64_MAX;
	uint64_t t114 = 3822856945655LLU;

    t114 = (((x469^x470)&x471)/x472);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x475 = 103774;
	int8_t x476 = INT8_MIN;

    t115 = (((x473^x474)&x475)/x476);

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x477 = -1;
	uint32_t x478 = 217771217U;
	int64_t x479 = 1248099697385538826LL;
	int64_t x480 = INT64_MAX;
	volatile int64_t t116 = -1338025941547713498LL;

    t116 = (((x477^x478)&x479)/x480);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x481 = -153483294584954LL;
	volatile int64_t x483 = 17232620LL;
	static int64_t x484 = -1LL;
	volatile int64_t t117 = -710641LL;

    t117 = (((x481^x482)&x483)/x484);

    if (t117 != -438376LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x486 = INT64_MIN;
	static uint64_t x487 = 43943087LLU;
	int64_t x488 = INT64_MIN;

    t118 = (((x485^x486)&x487)/x488);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x489 = -1;
	int8_t x491 = 11;
	int32_t t119 = 1943;

    t119 = (((x489^x490)&x491)/x492);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x493 = INT16_MIN;
	int16_t x494 = -701;
	int8_t x495 = 2;
	static uint32_t x496 = 16524U;

    t120 = (((x493^x494)&x495)/x496);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x498 = INT8_MAX;
	volatile int16_t x499 = 247;
	static int8_t x500 = 9;
	int64_t t121 = 835635LL;

    t121 = (((x497^x498)&x499)/x500);

    if (t121 != 14LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x501 = 13616LLU;
	int32_t x502 = -1;
	int16_t x503 = -161;
	volatile int8_t x504 = INT8_MIN;
	volatile uint64_t t122 = 13694055LLU;

    t122 = (((x501^x502)&x503)/x504);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x506 = 2U;
	uint16_t x507 = 17533U;
	static uint32_t x508 = UINT32_MAX;
	volatile uint32_t t123 = 59U;

    t123 = (((x505^x506)&x507)/x508);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x509 = -1LL;
	uint8_t x510 = UINT8_MAX;
	int8_t x512 = -1;
	static volatile int64_t t124 = -5472186208944LL;

    t124 = (((x509^x510)&x511)/x512);

    if (t124 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x513 = INT64_MIN;
	int32_t x514 = INT32_MAX;
	int8_t x516 = -54;
	int64_t t125 = 14974943369LL;

    t125 = (((x513^x514)&x515)/x516);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x517 = 133U;
	static int16_t x518 = INT16_MIN;
	volatile int32_t t126 = 22;

    t126 = (((x517^x518)&x519)/x520);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x521 = -2287;
	uint16_t x522 = UINT16_MAX;
	static uint16_t x523 = UINT16_MAX;

    t127 = (((x521^x522)&x523)/x524);

    if (t127 != 15) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x525 = INT8_MIN;
	static int32_t x526 = INT32_MAX;
	volatile int32_t x527 = 104341695;
	int16_t x528 = INT16_MAX;

    t128 = (((x525^x526)&x527)/x528);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x529 = INT32_MIN;
	int16_t x530 = INT16_MIN;
	uint64_t x531 = 142847332LLU;
	uint8_t x532 = UINT8_MAX;
	volatile uint64_t t129 = 23531LLU;

    t129 = (((x529^x530)&x531)/x532);

    if (t129 != 560140LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x533 = -1;
	int16_t x534 = 384;
	int32_t x535 = -1;
	static volatile int32_t x536 = -1;
	volatile int32_t t130 = -11;

    t130 = (((x533^x534)&x535)/x536);

    if (t130 != 385) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x537 = INT64_MIN;
	int32_t x538 = -1;
	static volatile uint16_t x539 = UINT16_MAX;
	uint8_t x540 = 3U;
	volatile int64_t t131 = -1LL;

    t131 = (((x537^x538)&x539)/x540);

    if (t131 != 21845LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x541 = 11227190260LLU;
	static volatile uint8_t x542 = UINT8_MAX;
	static uint16_t x544 = 27U;
	static volatile uint64_t t132 = 2472004LLU;

    t132 = (((x541^x542)&x543)/x544);

    if (t132 != 397682157LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x545 = UINT32_MAX;
	static int8_t x546 = INT8_MIN;
	uint8_t x547 = 0U;
	uint32_t t133 = 1U;

    t133 = (((x545^x546)&x547)/x548);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x549 = INT32_MIN;
	volatile uint8_t x550 = UINT8_MAX;
	int32_t x552 = -587177617;
	volatile int32_t t134 = 1;

    t134 = (((x549^x550)&x551)/x552);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x553 = 156U;
	volatile int16_t x554 = INT16_MAX;
	volatile int8_t x556 = -1;

    t135 = (((x553^x554)&x555)/x556);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x557 = INT32_MAX;
	int8_t x558 = INT8_MAX;
	int8_t x559 = 5;
	static volatile uint64_t x560 = 784052581LLU;

    t136 = (((x557^x558)&x559)/x560);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x561 = 0;
	int8_t x563 = INT8_MAX;
	static volatile uint32_t x564 = UINT32_MAX;
	static uint32_t t137 = 59U;

    t137 = (((x561^x562)&x563)/x564);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x565 = 9U;
	int64_t x566 = -204LL;
	static uint64_t t138 = 30LLU;

    t138 = (((x565^x566)&x567)/x568);

    if (t138 != 1948LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x569 = INT8_MAX;
	int32_t x570 = -1;
	int32_t x571 = -1;
	uint8_t x572 = 1U;
	int32_t t139 = -28540;

    t139 = (((x569^x570)&x571)/x572);

    if (t139 != -128) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x573 = INT16_MIN;
	static int32_t t140 = -107;

    t140 = (((x573^x574)&x575)/x576);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x577 = 43;
	static int16_t x578 = -12;
	static volatile int32_t x580 = -593553583;
	uint32_t t141 = 0U;

    t141 = (((x577^x578)&x579)/x580);

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x581 = INT32_MAX;
	static int32_t x583 = INT32_MIN;
	static uint8_t x584 = UINT8_MAX;
	volatile int32_t t142 = -53;

    t142 = (((x581^x582)&x583)/x584);

    if (t142 != -8421504) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x586 = INT32_MIN;
	volatile int32_t x587 = INT32_MIN;
	volatile int64_t t143 = 56050285129924138LL;

    t143 = (((x585^x586)&x587)/x588);

    if (t143 != 2147483648LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x589 = INT32_MIN;
	static int64_t x590 = INT64_MIN;
	int32_t x591 = -229462674;
	static int64_t t144 = -592LL;

    t144 = (((x589^x590)&x591)/x592);

    if (t144 != 1024819114967476906LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x593 = INT8_MIN;
	int16_t x594 = 8171;
	int64_t t145 = 72LL;

    t145 = (((x593^x594)&x595)/x596);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x597 = 8717812795487841LLU;
	static int32_t x598 = 7;
	static uint16_t x599 = 27U;
	static uint16_t x600 = 5U;
	static uint64_t t146 = 4284991367243526751LLU;

    t146 = (((x597^x598)&x599)/x600);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x601 = INT8_MIN;
	uint32_t t147 = 2263U;

    t147 = (((x601^x602)&x603)/x604);

    if (t147 != 142004U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x605 = 102342U;
	static volatile uint32_t x606 = 31U;
	int8_t x607 = INT8_MIN;
	int8_t x608 = -1;

    t148 = (((x605^x606)&x607)/x608);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x613 = INT16_MAX;
	static volatile int64_t x614 = -982681LL;
	int64_t t149 = -19LL;

    t149 = (((x613^x614)&x615)/x616);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x617 = INT64_MAX;
	uint16_t x619 = 3U;
	uint8_t x620 = UINT8_MAX;
	volatile int64_t t150 = -86006004494199501LL;

    t150 = (((x617^x618)&x619)/x620);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x621 = -1;
	uint32_t x622 = UINT32_MAX;
	int32_t x623 = INT32_MIN;
	static int16_t x624 = INT16_MAX;
	uint32_t t151 = 4U;

    t151 = (((x621^x622)&x623)/x624);

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x625 = UINT32_MAX;
	volatile int16_t x626 = INT16_MAX;
	static volatile int8_t x628 = INT8_MIN;
	volatile uint32_t t152 = 330U;

    t152 = (((x625^x626)&x627)/x628);

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x629 = 5248LLU;
	uint32_t x630 = UINT32_MAX;
	uint32_t x631 = 394U;
	int32_t x632 = INT32_MIN;
	uint64_t t153 = 3739860618LLU;

    t153 = (((x629^x630)&x631)/x632);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x633 = INT32_MAX;
	int16_t x634 = -3;
	static volatile int32_t x635 = 3;
	int32_t x636 = INT32_MIN;

    t154 = (((x633^x634)&x635)/x636);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x637 = INT16_MIN;
	static int32_t x638 = INT32_MAX;
	int16_t x639 = -1;
	int8_t x640 = INT8_MIN;

    t155 = (((x637^x638)&x639)/x640);

    if (t155 != 16776960) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x642 = INT32_MAX;
	int16_t x643 = INT16_MAX;
	volatile int64_t x644 = INT64_MAX;

    t156 = (((x641^x642)&x643)/x644);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x645 = INT8_MIN;
	int64_t x646 = INT64_MIN;
	volatile uint16_t x647 = 7014U;
	volatile uint64_t t157 = 10LLU;

    t157 = (((x645^x646)&x647)/x648);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x649 = 23;
	volatile uint8_t x650 = 3U;
	int8_t x651 = INT8_MAX;
	uint8_t x652 = 3U;
	int32_t t158 = -1785;

    t158 = (((x649^x650)&x651)/x652);

    if (t158 != 6) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x653 = -128;
	int8_t x654 = INT8_MIN;
	uint16_t x655 = 7584U;
	int64_t x656 = -2629385390LL;

    t159 = (((x653^x654)&x655)/x656);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x657 = 17U;
	volatile int16_t x658 = INT16_MIN;
	int16_t x659 = -5978;
	int8_t x660 = 12;
	int32_t t160 = 7;

    t160 = (((x657^x658)&x659)/x660);

    if (t160 != -2730) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x662 = INT64_MAX;
	uint32_t x663 = 11251335U;
	int8_t x664 = -1;
	int64_t t161 = 19890899794221889LL;

    t161 = (((x661^x662)&x663)/x664);

    if (t161 != -11239424LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint32_t x665 = UINT32_MAX;
	int16_t x668 = INT16_MAX;
	static uint32_t t162 = 68397U;

    t162 = (((x665^x666)&x667)/x668);

    if (t162 != 65538U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x669 = -1;
	int8_t x670 = INT8_MIN;
	int8_t x671 = INT8_MAX;
	int32_t x672 = INT32_MAX;
	int32_t t163 = 47636229;

    t163 = (((x669^x670)&x671)/x672);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x673 = -1;
	static int64_t x674 = INT64_MAX;
	volatile int16_t x675 = -1;
	int64_t x676 = INT64_MAX;
	int64_t t164 = 1LL;

    t164 = (((x673^x674)&x675)/x676);

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x677 = INT16_MIN;
	static int16_t x678 = 3;
	uint32_t x679 = 59862U;
	int64_t x680 = INT64_MAX;

    t165 = (((x677^x678)&x679)/x680);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x683 = 7U;
	uint64_t x684 = 24965388812874LLU;
	uint64_t t166 = 643430738LLU;

    t166 = (((x681^x682)&x683)/x684);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x685 = -1LL;
	int64_t x686 = INT64_MAX;
	uint16_t x687 = 608U;
	volatile int16_t x688 = INT16_MIN;
	volatile int64_t t167 = 425502593LL;

    t167 = (((x685^x686)&x687)/x688);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x689 = INT32_MIN;
	uint8_t x690 = 21U;
	uint32_t x691 = UINT32_MAX;
	static int8_t x692 = INT8_MAX;
	static volatile uint32_t t168 = 64646U;

    t168 = (((x689^x690)&x691)/x692);

    if (t168 != 16909320U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x693 = UINT64_MAX;
	int8_t x694 = -1;
	int8_t x695 = INT8_MAX;
	int8_t x696 = INT8_MAX;

    t169 = (((x693^x694)&x695)/x696);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x697 = -1;
	int32_t x698 = INT32_MIN;
	int16_t x699 = -2;
	int16_t x700 = 8236;
	int32_t t170 = 530988479;

    t170 = (((x697^x698)&x699)/x700);

    if (t170 != 260743) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x701 = UINT8_MAX;
	uint8_t x703 = 3U;
	volatile int32_t x704 = 4395;
	static int32_t t171 = 196729842;

    t171 = (((x701^x702)&x703)/x704);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x705 = INT8_MIN;
	int16_t x706 = INT16_MIN;
	static volatile int64_t x707 = INT64_MIN;
	uint64_t x708 = 136331181303LLU;

    t172 = (((x705^x706)&x707)/x708);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x710 = -506;
	int8_t x711 = INT8_MIN;
	static uint8_t x712 = 5U;
	int32_t t173 = -67389272;

    t173 = (((x709^x710)&x711)/x712);

    if (t173 != -1305) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x713 = 11838;
	volatile int8_t x715 = INT8_MAX;
	int8_t x716 = 1;

    t174 = (((x713^x714)&x715)/x716);

    if (t174 != 65LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x718 = 16U;
	int16_t x719 = INT16_MIN;
	uint16_t x720 = 505U;
	int32_t t175 = -387795508;

    t175 = (((x717^x718)&x719)/x720);

    if (t175 != -64) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x721 = 2LLU;
	int8_t x722 = INT8_MAX;
	uint64_t x723 = UINT64_MAX;
	static uint64_t x724 = 14840151703311LLU;
	volatile uint64_t t176 = 59436921LLU;

    t176 = (((x721^x722)&x723)/x724);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x725 = 256530U;
	uint64_t x726 = 2460551901059987594LLU;
	static uint32_t x728 = 38U;

    t177 = (((x725^x726)&x727)/x728);

    if (t177 != 41536583LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x729 = 3;
	int64_t x730 = 7921739433916LL;
	uint8_t x731 = 14U;
	uint32_t x732 = 3U;
	static volatile int64_t t178 = -26615428911011319LL;

    t178 = (((x729^x730)&x731)/x732);

    if (t178 != 4LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x737 = 0;
	int16_t x739 = -1;
	volatile uint32_t t179 = 12495322U;

    t179 = (((x737^x738)&x739)/x740);

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x741 = 77U;
	uint8_t x742 = 0U;
	int16_t x743 = INT16_MAX;
	volatile int32_t t180 = 24292375;

    t180 = (((x741^x742)&x743)/x744);

    if (t180 != -77) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x746 = INT16_MIN;
	static uint64_t x747 = UINT64_MAX;
	uint64_t t181 = 161128LLU;

    t181 = (((x745^x746)&x747)/x748);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x749 = 11U;
	static volatile int16_t x750 = INT16_MIN;
	int32_t x751 = INT32_MIN;
	uint16_t x752 = 30U;
	int32_t t182 = 67295981;

    t182 = (((x749^x750)&x751)/x752);

    if (t182 != -71582788) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x753 = -119538562916792177LL;
	uint16_t x754 = UINT16_MAX;
	uint64_t x755 = 593971546LLU;
	uint64_t t183 = 6841784LLU;

    t183 = (((x753^x754)&x755)/x756);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x757 = UINT16_MAX;
	uint16_t x759 = 923U;
	volatile uint32_t t184 = 256962U;

    t184 = (((x757^x758)&x759)/x760);

    if (t184 != 921U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x761 = 81U;
	volatile uint32_t x763 = UINT32_MAX;
	volatile uint16_t x764 = 16U;
	static uint32_t t185 = 266268U;

    t185 = (((x761^x762)&x763)/x764);

    if (t185 != 6U) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x767 = INT8_MIN;
	int64_t t186 = -617279827341LL;

    t186 = (((x765^x766)&x767)/x768);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x769 = -883760963;
	uint32_t x770 = UINT32_MAX;
	volatile int8_t x771 = -4;
	static int64_t x772 = -1LL;
	static volatile int64_t t187 = -1066LL;

    t187 = (((x769^x770)&x771)/x772);

    if (t187 != -883760960LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x773 = 0U;
	volatile int8_t x774 = INT8_MIN;
	int32_t x776 = -4;

    t188 = (((x773^x774)&x775)/x776);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x777 = 5;
	int64_t x778 = INT64_MIN;
	volatile uint32_t x779 = 7509072U;
	int16_t x780 = -1;
	int64_t t189 = -6481LL;

    t189 = (((x777^x778)&x779)/x780);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x781 = INT64_MIN;
	int32_t x782 = -1;
	int32_t x783 = 1785422;
	volatile int64_t t190 = 117LL;

    t190 = (((x781^x782)&x783)/x784);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x785 = UINT64_MAX;
	static uint32_t x786 = 12244379U;
	int64_t x787 = 3179271342062546980LL;
	volatile int8_t x788 = -60;
	uint64_t t191 = 11552708LLU;

    t191 = (((x785^x786)&x787)/x788);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x789 = INT32_MIN;
	int8_t x791 = -6;
	int32_t x792 = 854950;
	volatile int64_t t192 = -2674405760LL;

    t192 = (((x789^x790)&x791)/x792);

    if (t192 != 10788200520155LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x794 = INT16_MAX;
	static volatile uint8_t x795 = 5U;

    t193 = (((x793^x794)&x795)/x796);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x797 = INT16_MIN;
	uint64_t x798 = 91LLU;
	int8_t x799 = -39;
	int32_t x800 = INT32_MAX;

    t194 = (((x797^x798)&x799)/x800);

    if (t194 != 8589934595LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x801 = INT64_MAX;
	static uint32_t x803 = UINT32_MAX;

    t195 = (((x801^x802)&x803)/x804);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x805 = INT64_MAX;
	int8_t x806 = 0;
	uint16_t x807 = UINT16_MAX;
	int8_t x808 = INT8_MAX;

    t196 = (((x805^x806)&x807)/x808);

    if (t196 != 516LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x810 = 149377LLU;
	int32_t x811 = INT32_MIN;
	static int8_t x812 = INT8_MAX;
	uint64_t t197 = 27719LLU;

    t197 = (((x809^x810)&x811)/x812);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x813 = 584165189813062594LL;
	int64_t x814 = -1542LL;
	int16_t x815 = -1;
	volatile int64_t x816 = INT64_MAX;
	volatile int64_t t198 = 1LL;

    t198 = (((x813^x814)&x815)/x816);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x817 = INT64_MIN;
	uint8_t x819 = 0U;
	uint64_t x820 = 466010LLU;
	volatile uint64_t t199 = 1LLU;

    t199 = (((x817^x818)&x819)/x820);

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

