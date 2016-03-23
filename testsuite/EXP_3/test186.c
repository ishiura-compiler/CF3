
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

int8_t x9 = -7;
static int8_t x11 = -1;
static volatile int8_t x21 = -1;
volatile uint8_t x28 = UINT8_MAX;
uint16_t x31 = UINT16_MAX;
volatile int16_t x35 = -1727;
int16_t x41 = -8;
int8_t x45 = -1;
uint64_t t10 = 7053762LLU;
int8_t x51 = INT8_MIN;
static volatile uint16_t x65 = 36U;
static int32_t t15 = 1509;
int16_t x70 = 1;
int32_t x72 = INT32_MAX;
static int32_t t16 = -1;
volatile int64_t x76 = INT64_MIN;
volatile uint8_t x85 = UINT8_MAX;
int8_t x86 = INT8_MIN;
int32_t x90 = INT32_MAX;
uint32_t x92 = UINT32_MAX;
static uint16_t x94 = UINT16_MAX;
volatile uint16_t x96 = 4U;
static uint16_t x97 = UINT16_MAX;
uint16_t x102 = UINT16_MAX;
int64_t x104 = -2LL;
uint16_t x105 = 1471U;
static int8_t x106 = -1;
volatile int64_t t25 = 173195548608887LL;
volatile uint16_t x111 = 10976U;
static uint32_t x112 = UINT32_MAX;
int64_t t26 = -10935063937LL;
int32_t x119 = -1;
volatile uint16_t x120 = UINT16_MAX;
static int8_t x122 = -1;
static uint32_t x123 = 305529514U;
int64_t x124 = INT64_MIN;
volatile int64_t t29 = 16548591281928679LL;
static uint64_t x128 = UINT64_MAX;
static int16_t x132 = INT16_MIN;
int32_t x134 = -1;
static uint8_t x139 = 117U;
volatile int8_t x142 = INT8_MIN;
int8_t x143 = INT8_MIN;
uint16_t x144 = 6U;
static uint8_t x146 = UINT8_MAX;
uint64_t x148 = 5733LLU;
int8_t x161 = -1;
int8_t x164 = -1;
int8_t x176 = -1;
static volatile int64_t t39 = 79144914524322LL;
uint32_t t44 = 448766U;
uint64_t x202 = 6798LLU;
int16_t x203 = -1;
int8_t x204 = INT8_MIN;
uint16_t x206 = 14U;
int16_t x228 = INT16_MIN;
int16_t x233 = INT16_MAX;
int8_t x234 = INT8_MAX;
static int16_t x247 = INT16_MAX;
uint32_t t56 = 601U;
volatile int32_t x251 = 86;
static int16_t x253 = INT16_MAX;
int8_t x257 = INT8_MIN;
static volatile int64_t x276 = -1LL;
int64_t t63 = -6230310LL;
volatile uint8_t x277 = 0U;
uint16_t x281 = 2501U;
static int16_t x282 = -1;
int8_t x283 = 61;
int32_t t65 = 220253;
static int16_t x294 = INT16_MIN;
uint64_t t67 = 37953458585LLU;
static int64_t x300 = INT64_MIN;
static int64_t t68 = 20091845630472571LL;
static int32_t x301 = INT32_MIN;
int64_t x306 = INT64_MIN;
volatile int8_t x308 = INT8_MIN;
static int16_t x314 = INT16_MAX;
static volatile int16_t x315 = 11090;
int64_t x317 = INT64_MAX;
uint16_t x318 = 1U;
int8_t x321 = INT8_MIN;
volatile int64_t x327 = -17341692680178668LL;
int64_t t75 = 2820074122821924966LL;
int8_t x330 = INT8_MIN;
int32_t x331 = INT32_MIN;
int16_t x343 = -1;
int64_t t83 = -287739364159LL;
int64_t x367 = 7571148290LL;
volatile uint8_t x368 = 0U;
volatile uint16_t x369 = 15605U;
volatile int32_t t87 = 58323;
static int32_t x381 = -1;
static uint16_t x384 = 510U;
int16_t x394 = INT16_MIN;
uint32_t x400 = 433U;
int8_t x419 = -1;
volatile int32_t t95 = 348265;
static uint32_t x432 = 38101U;
uint64_t x436 = 25419LLU;
volatile uint64_t t97 = 73601835120527LLU;
volatile uint64_t x441 = 3337084898929726208LLU;
volatile uint64_t t99 = 490087870048904312LLU;
static uint64_t x456 = 622260355LLU;
static volatile uint64_t t100 = 38558154575059LLU;
static int8_t x462 = INT8_MAX;
static uint16_t x470 = UINT16_MAX;
uint64_t t105 = 3257815443561LLU;
uint32_t x479 = UINT32_MAX;
static volatile int64_t t106 = 62LL;
uint32_t x481 = 1572U;
int8_t x483 = -7;
int64_t t108 = 10135LL;
int16_t x500 = INT16_MIN;
uint32_t x504 = 63408621U;
int32_t x509 = INT32_MIN;
int32_t x512 = -1;
volatile uint64_t x520 = 230488039868LLU;
static volatile uint64_t t115 = 56LLU;
int64_t x522 = -2134326942363741873LL;
int16_t x523 = 5670;
static uint8_t x534 = 124U;
int32_t t117 = -4301;
volatile int16_t x537 = INT16_MIN;
volatile uint64_t t118 = 137LLU;
static int8_t x556 = INT8_MAX;
volatile uint16_t x557 = 48U;
volatile int8_t x559 = INT8_MAX;
static uint16_t x562 = 1470U;
int64_t x563 = INT64_MIN;
int8_t x568 = INT8_MIN;
int32_t t125 = -19895;
volatile int64_t t126 = 944342LL;
int16_t x580 = INT16_MAX;
int64_t x582 = INT64_MIN;
uint8_t x588 = UINT8_MAX;
int64_t x596 = -34193533LL;
static int16_t x602 = -1;
int8_t x605 = -1;
volatile int64_t t135 = -123544332LL;
int64_t x614 = INT64_MIN;
int16_t x617 = -1;
static uint16_t x619 = UINT16_MAX;
int16_t x625 = -1;
int16_t x629 = INT16_MIN;
static int16_t x630 = -2246;
volatile int32_t t140 = -111311;
static uint64_t x634 = 9554LLU;
int32_t x638 = INT32_MAX;
int8_t x640 = INT8_MIN;
uint16_t x647 = UINT16_MAX;
int64_t t144 = -226944659609594469LL;
uint8_t x651 = 4U;
int16_t x660 = -1;
int32_t x668 = 73291;
int64_t t149 = 3185995975099201910LL;
int64_t x673 = INT64_MAX;
uint32_t x676 = 98U;
volatile int64_t t150 = 1089369499432963633LL;
volatile uint64_t t151 = 5848107413576161991LLU;
int64_t x685 = -1LL;
uint16_t x692 = 911U;
int64_t x696 = INT64_MIN;
int32_t x700 = INT32_MIN;
uint32_t x701 = UINT32_MAX;
static uint16_t x721 = 15938U;
static int16_t x725 = -16320;
static uint8_t x731 = UINT8_MAX;
int32_t x732 = INT32_MIN;
static int8_t x738 = INT8_MAX;
int16_t x740 = -15066;
static volatile int32_t t162 = -93705894;
uint16_t x742 = 15829U;
volatile int64_t x749 = -1LL;
volatile int16_t x752 = -1;
static int64_t t164 = 739633238480388LL;
int32_t x756 = -7300052;
uint64_t t165 = 3971LLU;
volatile int64_t x757 = 1378014854LL;
uint16_t x759 = UINT16_MAX;
static int64_t t166 = 894LL;
int16_t x761 = 22;
int64_t x765 = INT64_MAX;
int32_t x768 = INT32_MAX;
uint64_t x780 = 1688288LLU;
static int32_t x785 = -1;
int64_t x786 = INT64_MIN;
volatile int16_t x787 = -1;
static int16_t x790 = INT16_MAX;
volatile int16_t x791 = -15562;
volatile int64_t t174 = 309298LL;
uint16_t x807 = 34U;
uint64_t x808 = 1295715607058454LLU;
volatile uint64_t t176 = 29118933137957310LLU;
volatile int32_t x814 = 59046;
static int16_t x815 = INT16_MIN;
volatile int8_t x816 = 16;
uint16_t x820 = UINT16_MAX;
uint8_t x828 = 71U;
uint64_t x829 = 224415965013838LLU;
uint32_t t183 = 26U;
uint8_t x845 = 40U;
uint32_t x848 = UINT32_MAX;
uint32_t t186 = 5221U;
static int64_t t187 = 17360805300LL;
static int8_t x857 = 0;
volatile int64_t t189 = 172444151423403LL;
int32_t t190 = 459876517;
volatile int64_t x875 = 0LL;
int32_t x888 = -1;
volatile int64_t t194 = 28248945661LL;
int64_t x889 = 18113547229LL;
int16_t x890 = 3;
static uint16_t x891 = UINT16_MAX;
uint16_t x893 = 1654U;
static int64_t x901 = -28586LL;
uint8_t x905 = 61U;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	int16_t x2 = INT16_MIN;
	int8_t x3 = INT8_MAX;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 253397;

    t0 = ((x1^x2)/(x3+x4));

    if (t0 != 32641) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MAX;
	uint16_t x6 = UINT16_MAX;
	int16_t x7 = -13;
	int16_t x8 = -508;
	static volatile int32_t t1 = -2;

    t1 = ((x5^x6)/(x7+x8));

    if (t1 != -125) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = 12;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = 1;

    t2 = ((x9^x10)/(x11+x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 15U;
	uint32_t x14 = UINT32_MAX;
	volatile uint8_t x15 = 4U;
	int32_t x16 = -54;
	uint32_t t3 = 7619U;

    t3 = ((x13^x14)/(x15+x16));

    if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = -1;
	uint8_t x18 = 0U;
	int64_t x19 = INT64_MIN;
	int64_t x20 = 12210183792LL;
	volatile int64_t t4 = -3763238LL;

    t4 = ((x17^x18)/(x19+x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = -1;
	int32_t x23 = -12;
	uint64_t x24 = 5872361647309921LLU;
	volatile uint64_t t5 = 2LLU;

    t5 = ((x21^x22)/(x23+x24));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	uint16_t x26 = 6152U;
	static uint8_t x27 = 3U;
	int32_t t6 = 36544;

    t6 = ((x25^x26)/(x27+x28));

    if (t6 != -23) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = -5;
	static int8_t x30 = INT8_MIN;
	int32_t x32 = -823327020;
	static int32_t t7 = -29;

    t7 = ((x29^x30)/(x31+x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MAX;
	static int32_t x34 = -29;
	uint8_t x36 = 77U;
	volatile int32_t t8 = -780;

    t8 = ((x33^x34)/(x35+x36));

    if (t8 != 19) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x42 = UINT32_MAX;
	int64_t x43 = -1LL;
	int8_t x44 = INT8_MIN;
	static volatile int64_t t9 = -157002102596530LL;

    t9 = ((x41^x42)/(x43+x44));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x46 = INT8_MIN;
	static uint64_t x47 = UINT64_MAX;
	uint8_t x48 = 3U;

    t10 = ((x45^x46)/(x47+x48));

    if (t10 != 63LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x49 = 44576LLU;
	int64_t x50 = -4646LL;
	uint64_t x52 = 2777719LLU;
	volatile uint64_t t11 = 6415LLU;

    t11 = ((x49^x50)/(x51+x52));

    if (t11 != 6641274425827LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = 5350250LLU;
	volatile uint64_t x54 = 105650661LLU;
	int16_t x55 = -1;
	volatile int16_t x56 = 3;
	uint64_t t12 = 25998703LLU;

    t12 = ((x53^x54)/(x55+x56));

    if (t12 != 51305799LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x57 = 4U;
	int8_t x58 = INT8_MAX;
	uint16_t x59 = UINT16_MAX;
	int16_t x60 = INT16_MIN;
	volatile int32_t t13 = -228046;

    t13 = ((x57^x58)/(x59+x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x61 = INT8_MAX;
	int32_t x62 = 1603582;
	static uint32_t x63 = 24585U;
	int32_t x64 = -751;
	volatile uint32_t t14 = 12U;

    t14 = ((x61^x62)/(x63+x64));

    if (t14 != 67U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x66 = -12;
	int32_t x67 = INT32_MIN;
	uint8_t x68 = 7U;

    t15 = ((x65^x66)/(x67+x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = -1;
	int16_t x71 = INT16_MIN;

    t16 = ((x69^x70)/(x71+x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = 0U;
	int16_t x74 = INT16_MIN;
	int8_t x75 = INT8_MAX;
	volatile int64_t t17 = -1526933704773LL;

    t17 = ((x73^x74)/(x75+x76));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = -26119735LL;
	int32_t x78 = -1;
	uint16_t x79 = 490U;
	int64_t x80 = -15734976649438LL;
	static int64_t t18 = 5831130767937507LL;

    t18 = ((x77^x78)/(x79+x80));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = INT16_MAX;
	volatile int16_t x82 = INT16_MIN;
	int16_t x83 = INT16_MIN;
	static volatile int16_t x84 = INT16_MIN;
	volatile int32_t t19 = 3466658;

    t19 = ((x81^x82)/(x83+x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x87 = 15686;
	uint32_t x88 = 218009U;
	uint32_t t20 = 932U;

    t20 = ((x85^x86)/(x87+x88));

    if (t20 != 18378U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x89 = 6632U;
	int32_t x91 = -3776;
	volatile uint32_t t21 = 371720538U;

    t21 = ((x89^x90)/(x91+x92));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x93 = -158124LL;
	uint32_t x95 = 267U;
	static int64_t t22 = -787LL;

    t22 = ((x93^x94)/(x95+x96));

    if (t22 != -625LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x98 = 5017256462007LLU;
	static uint8_t x99 = UINT8_MAX;
	int8_t x100 = 7;
	uint64_t t23 = 347054727190LLU;

    t23 = ((x97^x98)/(x99+x100));

    if (t23 != 19149834061LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = -2;
	uint32_t x103 = UINT32_MAX;
	static int64_t t24 = 73577620799924411LL;

    t24 = ((x101^x102)/(x103+x104));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x107 = -1LL;
	volatile int64_t x108 = -1LL;

    t25 = ((x105^x106)/(x107+x108));

    if (t25 != 736LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = INT64_MIN;
	int64_t x110 = INT64_MIN;

    t26 = ((x109^x110)/(x111+x112));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = -70541LL;
	int32_t x114 = 0;
	int32_t x115 = -436;
	static uint8_t x116 = UINT8_MAX;
	volatile int64_t t27 = -8337LL;

    t27 = ((x113^x114)/(x115+x116));

    if (t27 != 389LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = INT64_MIN;
	uint16_t x118 = 3U;
	static volatile int64_t t28 = -10772LL;

    t28 = ((x117^x118)/(x119+x120));

    if (t28 != -140741783453700LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = INT64_MIN;

    t29 = ((x121^x122)/(x123+x124));

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x125 = 41364778018777LL;
	volatile int8_t x126 = INT8_MIN;
	int64_t x127 = INT64_MIN;
	uint64_t t30 = 7750LLU;

    t30 = ((x125^x126)/(x127+x128));

    if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = 182LL;
	uint32_t x130 = 13U;
	uint32_t x131 = 2U;
	static volatile int64_t t31 = -8348143455563LL;

    t31 = ((x129^x130)/(x131+x132));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x133 = 0U;
	int8_t x135 = 3;
	uint16_t x136 = UINT16_MAX;
	volatile uint32_t t32 = 46161259U;

    t32 = ((x133^x134)/(x135+x136));

    if (t32 != 65534U) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint16_t x137 = UINT16_MAX;
	int64_t x138 = INT64_MIN;
	static uint32_t x140 = UINT32_MAX;
	int64_t t33 = 3LL;

    t33 = ((x137^x138)/(x139+x140));

    if (t33 != -79511827903919916LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x141 = INT32_MAX;
	volatile int32_t t34 = -925714;

    t34 = ((x141^x142)/(x143+x144));

    if (t34 != 17602323) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = -1;
	uint64_t x147 = 13421846705LLU;
	uint64_t t35 = 422LLU;

    t35 = ((x145^x146)/(x147+x148));

    if (t35 != 1374381379LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x153 = -1;
	int16_t x154 = -1;
	int16_t x155 = -119;
	int16_t x156 = INT16_MAX;
	volatile int32_t t36 = 1436;

    t36 = ((x153^x154)/(x155+x156));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x157 = 146526693U;
	int32_t x158 = INT32_MIN;
	int8_t x159 = INT8_MIN;
	int8_t x160 = -1;
	static volatile uint32_t t37 = 134428855U;

    t37 = ((x157^x158)/(x159+x160));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x162 = INT32_MAX;
	int8_t x163 = INT8_MIN;
	volatile int32_t t38 = -50406;

    t38 = ((x161^x162)/(x163+x164));

    if (t38 != 16647160) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x173 = 0;
	int8_t x174 = 26;
	int64_t x175 = 214827LL;

    t39 = ((x173^x174)/(x175+x176));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x177 = INT16_MAX;
	int16_t x178 = 145;
	int64_t x179 = INT64_MIN;
	static uint32_t x180 = UINT32_MAX;
	volatile int64_t t40 = -20997669467379LL;

    t40 = ((x177^x178)/(x179+x180));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x181 = -17574562448009LL;
	int32_t x182 = INT32_MIN;
	static int16_t x183 = INT16_MIN;
	volatile int16_t x184 = 0;
	volatile int64_t t41 = -1143LL;

    t41 = ((x181^x182)/(x183+x184));

    if (t41 != -536294629LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x185 = 3524;
	uint16_t x186 = UINT16_MAX;
	int16_t x187 = INT16_MIN;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t42 = 58635855;

    t42 = ((x185^x186)/(x187+x188));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x189 = 51683404629LL;
	int32_t x190 = 139155289;
	volatile uint8_t x191 = 0U;
	static int8_t x192 = INT8_MIN;
	int64_t t43 = -126948856LL;

    t43 = ((x189^x190)/(x191+x192));

    if (t43 != -402764536LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x193 = UINT32_MAX;
	int32_t x194 = INT32_MAX;
	uint16_t x195 = 3U;
	static uint8_t x196 = 13U;

    t44 = ((x193^x194)/(x195+x196));

    if (t44 != 134217728U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x197 = 1;
	static int16_t x198 = 3;
	int8_t x199 = 0;
	int64_t x200 = INT64_MIN;
	volatile int64_t t45 = 12LL;

    t45 = ((x197^x198)/(x199+x200));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x201 = 43379LL;
	volatile uint64_t t46 = 642733974305LLU;

    t46 = ((x201^x202)/(x203+x204));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x205 = INT16_MIN;
	uint16_t x207 = 347U;
	int64_t x208 = -1LL;
	static int64_t t47 = 480LL;

    t47 = ((x205^x206)/(x207+x208));

    if (t47 != -94LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x209 = -1;
	uint32_t x210 = 1U;
	static int16_t x211 = INT16_MAX;
	uint32_t x212 = 18U;
	uint32_t t48 = 3028384U;

    t48 = ((x209^x210)/(x211+x212));

    if (t48 != 131004U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x217 = -1;
	int8_t x218 = INT8_MIN;
	static volatile uint64_t x219 = UINT64_MAX;
	int32_t x220 = INT32_MIN;
	uint64_t t49 = 6963518903819LLU;

    t49 = ((x217^x218)/(x219+x220));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x221 = UINT64_MAX;
	static int64_t x222 = INT64_MIN;
	uint32_t x223 = 3450U;
	static int8_t x224 = 1;
	uint64_t t50 = 8169LLU;

    t50 = ((x221^x222)/(x223+x224));

    if (t50 != 2672666484165394LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x225 = INT8_MIN;
	static int64_t x226 = INT64_MIN;
	static int32_t x227 = INT32_MAX;
	volatile int64_t t51 = -396378LL;

    t51 = ((x225^x226)/(x227+x228));

    if (t51 != 4295032835LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x229 = 0;
	volatile int32_t x230 = -1;
	int16_t x231 = INT16_MIN;
	int8_t x232 = -1;
	int32_t t52 = 7896;

    t52 = ((x229^x230)/(x231+x232));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x235 = INT64_MAX;
	volatile int64_t x236 = INT64_MIN;
	int64_t t53 = -44280135039LL;

    t53 = ((x233^x234)/(x235+x236));

    if (t53 != -32640LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x237 = 650U;
	int8_t x238 = 2;
	int16_t x239 = -1356;
	static uint16_t x240 = 79U;
	static int32_t t54 = 1202007;

    t54 = ((x237^x238)/(x239+x240));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x241 = UINT32_MAX;
	volatile int64_t x242 = INT64_MIN;
	int64_t x243 = INT64_MIN;
	static int16_t x244 = 0;
	int64_t t55 = 637352LL;

    t55 = ((x241^x242)/(x243+x244));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x245 = 29U;
	int8_t x246 = INT8_MIN;
	int8_t x248 = -1;

    t56 = ((x245^x246)/(x247+x248));

    if (t56 != 131079U) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x249 = INT8_MAX;
	static int16_t x250 = -3469;
	int16_t x252 = INT16_MAX;
	int32_t t57 = 55;

    t57 = ((x249^x250)/(x251+x252));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x254 = 120U;
	uint64_t x255 = UINT64_MAX;
	int32_t x256 = -228;
	uint64_t t58 = 116171648LLU;

    t58 = ((x253^x254)/(x255+x256));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x258 = UINT64_MAX;
	int16_t x259 = 61;
	int8_t x260 = INT8_MIN;
	volatile uint64_t t59 = 470LLU;

    t59 = ((x257^x258)/(x259+x260));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x261 = -1LL;
	uint8_t x262 = 125U;
	int16_t x263 = -1146;
	volatile uint64_t x264 = 2037364529452LLU;
	uint64_t t60 = 50250302943LLU;

    t60 = ((x261^x262)/(x263+x264));

    if (t60 != 9054218LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x265 = INT8_MIN;
	uint16_t x266 = 0U;
	int8_t x267 = INT8_MIN;
	static int16_t x268 = INT16_MIN;
	int32_t t61 = -474797;

    t61 = ((x265^x266)/(x267+x268));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x269 = INT32_MIN;
	uint8_t x270 = 103U;
	uint64_t x271 = 476882LLU;
	volatile int64_t x272 = INT64_MIN;
	volatile uint64_t t62 = 38824612470880LLU;

    t62 = ((x269^x270)/(x271+x272));

    if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x273 = INT8_MIN;
	volatile int16_t x274 = INT16_MIN;
	uint16_t x275 = UINT16_MAX;

    t63 = ((x273^x274)/(x275+x276));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x278 = 1;
	int16_t x279 = INT16_MIN;
	int32_t x280 = 663804393;
	int32_t t64 = 70197;

    t64 = ((x277^x278)/(x279+x280));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x284 = INT8_MIN;

    t65 = ((x281^x282)/(x283+x284));

    if (t65 != 37) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x285 = -2;
	uint32_t x286 = 10684U;
	static int64_t x287 = INT64_MIN;
	static volatile int8_t x288 = INT8_MAX;
	int64_t t66 = 12539249LL;

    t66 = ((x285^x286)/(x287+x288));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x293 = INT32_MAX;
	int16_t x295 = INT16_MIN;
	uint64_t x296 = UINT64_MAX;

    t67 = ((x293^x294)/(x295+x296));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x297 = -1;
	static int32_t x298 = INT32_MIN;
	uint32_t x299 = 248U;

    t68 = ((x297^x298)/(x299+x300));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x302 = INT8_MIN;
	int8_t x303 = -22;
	uint8_t x304 = UINT8_MAX;
	int32_t t69 = 4302;

    t69 = ((x301^x302)/(x303+x304));

    if (t69 != 9216667) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x305 = 258U;
	int32_t x307 = -154811;
	volatile int64_t t70 = 29809209825921436LL;

    t70 = ((x305^x306)/(x307+x308));

    if (t70 != 59529053607256LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x309 = -1;
	int32_t x310 = 110107;
	int32_t x311 = 633846743;
	volatile uint64_t x312 = 1904331LLU;
	volatile uint64_t t71 = 830273016121524899LLU;

    t71 = ((x309^x310)/(x311+x312));

    if (t71 != 29015671114LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x313 = INT32_MIN;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t72 = 74;

    t72 = ((x313^x314)/(x315+x316));

    if (t72 != -28025) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x319 = -29509740244752619LL;
	int16_t x320 = INT16_MIN;
	volatile int64_t t73 = 6594951644800236LL;

    t73 = ((x317^x318)/(x319+x320));

    if (t73 != -312LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x322 = 14902893781364LLU;
	static int64_t x323 = INT64_MAX;
	int32_t x324 = -1;
	volatile uint64_t t74 = 113154095LLU;

    t74 = ((x321^x322)/(x323+x324));

    if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x325 = UINT8_MAX;
	int16_t x326 = 38;
	int32_t x328 = INT32_MIN;

    t75 = ((x325^x326)/(x327+x328));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x329 = -1;
	int32_t x332 = 160689;
	volatile int32_t t76 = 7327158;

    t76 = ((x329^x330)/(x331+x332));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x337 = 155446U;
	volatile int16_t x338 = 430;
	static int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MAX;
	uint32_t t77 = 25U;

    t77 = ((x337^x338)/(x339+x340));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x341 = -4212;
	uint16_t x342 = 149U;
	int32_t x344 = 18995;
	volatile int32_t t78 = -2797;

    t78 = ((x341^x342)/(x343+x344));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x345 = INT32_MIN;
	int32_t x346 = INT32_MIN;
	uint64_t x347 = 23721LLU;
	static uint16_t x348 = 482U;
	static uint64_t t79 = 23359172030382LLU;

    t79 = ((x345^x346)/(x347+x348));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x349 = 3U;
	static int32_t x350 = INT32_MIN;
	int64_t x351 = INT64_MAX;
	int32_t x352 = INT32_MIN;
	int64_t t80 = 2103698656141LL;

    t80 = ((x349^x350)/(x351+x352));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x353 = 3U;
	int16_t x354 = 1612;
	uint32_t x355 = 163913580U;
	volatile int64_t x356 = 686941279833891780LL;
	volatile int64_t t81 = 6LL;

    t81 = ((x353^x354)/(x355+x356));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x357 = 1;
	static uint64_t x358 = UINT64_MAX;
	uint8_t x359 = 0U;
	int16_t x360 = 196;
	volatile uint64_t t82 = 106080119LLU;

    t82 = ((x357^x358)/(x359+x360));

    if (t82 != 94116041192395671LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x361 = -1LL;
	volatile int32_t x362 = -1;
	uint16_t x363 = 3388U;
	static int16_t x364 = 444;

    t83 = ((x361^x362)/(x363+x364));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x365 = INT16_MAX;
	uint64_t x366 = UINT64_MAX;
	volatile uint64_t t84 = 1896450631176397159LLU;

    t84 = ((x365^x366)/(x367+x368));

    if (t84 != 2436452618LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x370 = INT64_MIN;
	volatile uint16_t x371 = UINT16_MAX;
	static int64_t x372 = -5143423LL;
	static volatile int64_t t85 = -8492207038LL;

    t85 = ((x369^x370)/(x371+x372));

    if (t85 != 1816379572935LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x373 = 0;
	volatile int32_t x374 = INT32_MAX;
	volatile int32_t x375 = INT32_MIN;
	volatile uint32_t x376 = 63963U;
	static volatile uint32_t t86 = 492552182U;

    t86 = ((x373^x374)/(x375+x376));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x377 = -1;
	int8_t x378 = INT8_MAX;
	int16_t x379 = INT16_MAX;
	int32_t x380 = 1;

    t87 = ((x377^x378)/(x379+x380));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x382 = 1U;
	int64_t x383 = -2858097325LL;
	int64_t t88 = 281441860187711LL;

    t88 = ((x381^x382)/(x383+x384));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x385 = 16179742LL;
	volatile int64_t x386 = INT64_MIN;
	int16_t x387 = -1;
	uint16_t x388 = UINT16_MAX;
	volatile int64_t t89 = -212200647297340LL;

    t89 = ((x385^x386)/(x387+x388));

    if (t89 != -140741783453453LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x393 = INT16_MAX;
	static int16_t x395 = 0;
	int32_t x396 = INT32_MIN;
	int32_t t90 = 1;

    t90 = ((x393^x394)/(x395+x396));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x397 = INT16_MIN;
	int64_t x398 = 1376730378LL;
	uint8_t x399 = 3U;
	int64_t t91 = -7882198LL;

    t91 = ((x397^x398)/(x399+x400));

    if (t91 != -3157641LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x401 = UINT16_MAX;
	int16_t x402 = 15905;
	int64_t x403 = INT64_MIN;
	int16_t x404 = INT16_MAX;
	volatile int64_t t92 = -543475126LL;

    t92 = ((x401^x402)/(x403+x404));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x405 = 1;
	int8_t x406 = INT8_MIN;
	uint32_t x407 = 3U;
	uint16_t x408 = UINT16_MAX;
	volatile uint32_t t93 = 3U;

    t93 = ((x405^x406)/(x407+x408));

    if (t93 != 65533U) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x413 = 1U;
	volatile int16_t x414 = -500;
	uint32_t x415 = UINT32_MAX;
	int16_t x416 = -38;
	volatile uint32_t t94 = 116289398U;

    t94 = ((x413^x414)/(x415+x416));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x417 = INT32_MIN;
	uint8_t x418 = 0U;
	int32_t x420 = INT32_MAX;

    t95 = ((x417^x418)/(x419+x420));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x429 = -124;
	int32_t x430 = INT32_MAX;
	static uint8_t x431 = UINT8_MAX;
	volatile uint32_t t96 = 1621600642U;

    t96 = ((x429^x430)/(x431+x432));

    if (t96 != 55988U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x433 = 0U;
	int64_t x434 = -1LL;
	int32_t x435 = INT32_MIN;

    t97 = ((x433^x434)/(x435+x436));

    if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x437 = -1715861625339279LL;
	int8_t x438 = -1;
	int16_t x439 = INT16_MIN;
	int64_t x440 = 31LL;
	int64_t t98 = -937848LL;

    t98 = ((x437^x438)/(x439+x440));

    if (t98 != -52413526753LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x442 = 7U;
	int16_t x443 = -395;
	int32_t x444 = INT32_MAX;

    t99 = ((x441^x442)/(x443+x444));

    if (t99 != 1553951536LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x453 = -1LL;
	static volatile int64_t x454 = INT64_MIN;
	int16_t x455 = -3;

    t100 = ((x453^x454)/(x455+x456));

    if (t100 != 14822368173LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x457 = INT8_MAX;
	int32_t x458 = INT32_MIN;
	uint32_t x459 = 181U;
	uint64_t x460 = UINT64_MAX;
	uint64_t t101 = 2059697272240545LLU;

    t101 = ((x457^x458)/(x459+x460));

    if (t101 != 102481911508678156LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x461 = -29277105280390956LL;
	static int8_t x463 = INT8_MAX;
	int8_t x464 = INT8_MIN;
	volatile int64_t t102 = -1736747875299945340LL;

    t102 = ((x461^x462)/(x463+x464));

    if (t102 != 29277105280390997LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x465 = 5698486LLU;
	uint8_t x466 = 112U;
	int8_t x467 = -6;
	int8_t x468 = 47;
	static volatile uint64_t t103 = 836187176227243LLU;

    t103 = ((x465^x466)/(x467+x468));

    if (t103 != 138987LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x469 = 1024U;
	int32_t x471 = -1;
	uint16_t x472 = 619U;
	int32_t t104 = -928;

    t104 = ((x469^x470)/(x471+x472));

    if (t104 != 104) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x473 = -1503;
	int64_t x474 = INT64_MIN;
	int16_t x475 = 3;
	uint64_t x476 = 7973178LLU;

    t105 = ((x473^x474)/(x475+x476));

    if (t105 != 1156799530432LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x477 = -1;
	int64_t x478 = 1019469280LL;
	int8_t x480 = -1;

    t106 = ((x477^x478)/(x479+x480));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x482 = INT8_MIN;
	int32_t x484 = -456;
	static volatile uint32_t t107 = 6U;

    t107 = ((x481^x482)/(x483+x484));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x485 = INT32_MAX;
	int64_t x486 = INT64_MIN;
	uint32_t x487 = UINT32_MAX;
	static uint16_t x488 = 4U;

    t108 = ((x485^x486)/(x487+x488));

    if (t108 != -3074457344902430720LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x493 = 0LLU;
	int64_t x494 = -31495069584LL;
	volatile int8_t x495 = INT8_MIN;
	int64_t x496 = 0LL;
	volatile uint64_t t109 = 22055486LLU;

    t109 = ((x493^x494)/(x495+x496));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x497 = INT32_MIN;
	int16_t x498 = INT16_MAX;
	int64_t x499 = INT64_MAX;
	int64_t t110 = -579248LL;

    t110 = ((x497^x498)/(x499+x500));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x501 = UINT16_MAX;
	int64_t x502 = INT64_MIN;
	volatile int64_t x503 = INT64_MIN;
	int64_t t111 = -8314622704501223LL;

    t111 = ((x501^x502)/(x503+x504));

    if (t111 != 1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x505 = INT32_MIN;
	int32_t x506 = INT32_MIN;
	volatile int64_t x507 = 3407019388720391LL;
	volatile uint64_t x508 = 294798LLU;
	uint64_t t112 = 502655891598113LLU;

    t112 = ((x505^x506)/(x507+x508));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x510 = 204;
	int16_t x511 = -180;
	int32_t t113 = -32640;

    t113 = ((x509^x510)/(x511+x512));

    if (t113 != 11864549) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x513 = INT32_MAX;
	volatile int64_t x514 = 7LL;
	volatile uint32_t x515 = 70756U;
	int8_t x516 = INT8_MIN;
	static int64_t t114 = 2568776LL;

    t114 = ((x513^x514)/(x515+x516));

    if (t114 != 30405LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x517 = -22;
	int8_t x518 = INT8_MAX;
	uint64_t x519 = 489668461LLU;

    t115 = ((x517^x518)/(x519+x520));

    if (t115 != 79863741LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x521 = 13;
	int8_t x524 = -1;
	static volatile int64_t t116 = 19LL;

    t116 = ((x521^x522)/(x523+x524));

    if (t116 != -376490905338462LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x533 = 28;
	int8_t x535 = INT8_MIN;
	static uint8_t x536 = UINT8_MAX;

    t117 = ((x533^x534)/(x535+x536));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x538 = 4072;
	uint64_t x539 = 2813146275LLU;
	static volatile uint64_t x540 = 110LLU;

    t118 = ((x537^x538)/(x539+x540));

    if (t118 != 6557335292LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x541 = 202162612494434448LLU;
	int8_t x542 = 3;
	static int16_t x543 = INT16_MIN;
	uint8_t x544 = 1U;
	uint64_t t119 = 622LLU;

    t119 = ((x541^x542)/(x543+x544));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x545 = -1LL;
	int16_t x546 = INT16_MIN;
	int16_t x547 = 12;
	volatile int16_t x548 = -1;
	int64_t t120 = -65LL;

    t120 = ((x545^x546)/(x547+x548));

    if (t120 != 2978LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x549 = -1;
	volatile uint32_t x550 = UINT32_MAX;
	static int64_t x551 = -1LL;
	uint64_t x552 = 13574865868000LLU;
	uint64_t t121 = 43532529114237LLU;

    t121 = ((x549^x550)/(x551+x552));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x553 = INT16_MAX;
	volatile int64_t x554 = INT64_MAX;
	int32_t x555 = 0;
	volatile int64_t t122 = -35050565LL;

    t122 = ((x553^x554)/(x555+x556));

    if (t122 != 72624976668147582LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x558 = 81U;
	int32_t x560 = -1;
	volatile int32_t t123 = 3351;

    t123 = ((x557^x558)/(x559+x560));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x561 = INT64_MAX;
	uint32_t x564 = UINT32_MAX;
	int64_t t124 = 57732962LL;

    t124 = ((x561^x562)/(x563+x564));

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x565 = -4;
	static uint8_t x566 = 1U;
	int32_t x567 = 2863794;

    t125 = ((x565^x566)/(x567+x568));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x569 = 2145599976U;
	static int32_t x570 = INT32_MIN;
	volatile int64_t x571 = INT64_MIN;
	volatile int8_t x572 = INT8_MAX;

    t126 = ((x569^x570)/(x571+x572));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x573 = UINT64_MAX;
	volatile int8_t x574 = INT8_MIN;
	static uint32_t x575 = UINT32_MAX;
	int32_t x576 = INT32_MAX;
	volatile uint64_t t127 = 155414LLU;

    t127 = ((x573^x574)/(x575+x576));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x577 = 801689U;
	uint8_t x578 = UINT8_MAX;
	static int16_t x579 = INT16_MIN;
	volatile uint32_t t128 = 2218365U;

    t128 = ((x577^x578)/(x579+x580));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x581 = 9U;
	int16_t x583 = INT16_MIN;
	static uint64_t x584 = 37LLU;
	uint64_t t129 = 20467846504LLU;

    t129 = ((x581^x582)/(x583+x584));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x585 = -1;
	int32_t x586 = INT32_MIN;
	uint8_t x587 = 36U;
	volatile int32_t t130 = 305078052;

    t130 = ((x585^x586)/(x587+x588));

    if (t130 != 7379668) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x589 = -1;
	static uint32_t x590 = 90228U;
	int8_t x591 = -1;
	int64_t x592 = -28168583517785LL;
	volatile int64_t t131 = 29305772LL;

    t131 = ((x589^x590)/(x591+x592));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x593 = UINT16_MAX;
	int32_t x594 = INT32_MAX;
	int64_t x595 = -1668753848LL;
	volatile int64_t t132 = -102472234666LL;

    t132 = ((x593^x594)/(x595+x596));

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x597 = 396118880LLU;
	int64_t x598 = -1LL;
	uint16_t x599 = UINT16_MAX;
	int16_t x600 = INT16_MIN;
	static uint64_t t133 = 6LLU;

    t133 = ((x597^x598)/(x599+x600));

    if (t133 != 562967133802711LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x601 = INT64_MIN;
	static int8_t x603 = 1;
	int64_t x604 = -450LL;
	volatile int64_t t134 = -106598373923009LL;

    t134 = ((x601^x602)/(x603+x604));

    if (t134 != -20542031262482796LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x606 = 28U;
	int64_t x607 = -2944430883612465619LL;
	int8_t x608 = INT8_MIN;

    t135 = ((x605^x606)/(x607+x608));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x613 = 9U;
	volatile int64_t x615 = INT64_MIN;
	int8_t x616 = INT8_MAX;
	int64_t t136 = 62LL;

    t136 = ((x613^x614)/(x615+x616));

    if (t136 != 1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x618 = -139945;
	int32_t x620 = 523113;
	volatile int32_t t137 = -15742345;

    t137 = ((x617^x618)/(x619+x620));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x621 = -467955;
	volatile int32_t x622 = -1;
	volatile uint64_t x623 = 20071428211498808LLU;
	int64_t x624 = -1LL;
	volatile uint64_t t138 = 1LLU;

    t138 = ((x621^x622)/(x623+x624));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x626 = 0;
	uint64_t x627 = 733846761LLU;
	uint16_t x628 = UINT16_MAX;
	uint64_t t139 = 141LLU;

    t139 = ((x625^x626)/(x627+x628));

    if (t139 != 25134807216LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x631 = 1;
	uint8_t x632 = 110U;

    t140 = ((x629^x630)/(x631+x632));

    if (t140 != 274) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x633 = 6207074920LLU;
	int64_t x635 = -1024139779123748445LL;
	static int16_t x636 = INT16_MIN;
	uint64_t t141 = 260862803837064LLU;

    t141 = ((x633^x634)/(x635+x636));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x637 = -7;
	uint8_t x639 = 2U;
	volatile int32_t t142 = -517731389;

    t142 = ((x637^x638)/(x639+x640));

    if (t142 != 17043520) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x641 = -348;
	static volatile int16_t x642 = -40;
	uint32_t x643 = 210008U;
	volatile int32_t x644 = INT32_MIN;
	uint32_t t143 = 300044508U;

    t143 = ((x641^x642)/(x643+x644));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x645 = INT64_MIN;
	volatile int32_t x646 = INT32_MIN;
	uint16_t x648 = UINT16_MAX;

    t144 = ((x645^x646)/(x647+x648));

    if (t144 != 70369817919488LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x649 = INT32_MAX;
	volatile uint16_t x650 = UINT16_MAX;
	int8_t x652 = -1;
	int32_t t145 = 25290;

    t145 = ((x649^x650)/(x651+x652));

    if (t145 != 715806037) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x653 = INT64_MIN;
	int8_t x654 = -7;
	int8_t x655 = INT8_MAX;
	int8_t x656 = INT8_MAX;
	static volatile int64_t t146 = -3978813LL;

    t146 = ((x653^x654)/(x655+x656));

    if (t146 != 36312488334073920LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x657 = 1489695U;
	volatile int8_t x658 = 1;
	uint64_t x659 = 89784383LLU;
	volatile uint64_t t147 = 1472449647459925411LLU;

    t147 = ((x657^x658)/(x659+x660));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x665 = INT8_MIN;
	int32_t x666 = INT32_MIN;
	int16_t x667 = -1;
	int32_t t148 = -692144;

    t148 = ((x665^x666)/(x667+x668));

    if (t148 != 29301) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x669 = INT64_MIN;
	int64_t x670 = -7397LL;
	int8_t x671 = 4;
	int8_t x672 = INT8_MIN;

    t149 = ((x669^x670)/(x671+x672));

    if (t149 != -74382032555280390LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x674 = -1LL;
	volatile int8_t x675 = -1;

    t150 = ((x673^x674)/(x675+x676));

    if (t150 != -95086309658296657LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x681 = UINT32_MAX;
	volatile uint64_t x682 = 1439LLU;
	uint8_t x683 = UINT8_MAX;
	int8_t x684 = INT8_MIN;

    t151 = ((x681^x682)/(x683+x684));

    if (t151 != 33818628LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x686 = INT32_MIN;
	int16_t x687 = INT16_MAX;
	int64_t x688 = -1048917712364LL;
	volatile int64_t t152 = 347539LL;

    t152 = ((x685^x686)/(x687+x688));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x689 = INT32_MAX;
	uint8_t x690 = UINT8_MAX;
	int64_t x691 = -86841325LL;
	int64_t t153 = -1LL;

    t153 = ((x689^x690)/(x691+x692));

    if (t153 != -24LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x693 = -1;
	int64_t x694 = INT64_MIN;
	volatile uint64_t x695 = 29LLU;
	static volatile uint64_t t154 = 9744092392923269LLU;

    t154 = ((x693^x694)/(x695+x696));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x697 = 260104U;
	int32_t x698 = INT32_MIN;
	volatile uint16_t x699 = 8467U;
	static volatile uint32_t t155 = 3U;

    t155 = ((x697^x698)/(x699+x700));

    if (t155 != 1U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x702 = INT64_MIN;
	int8_t x703 = INT8_MAX;
	uint8_t x704 = UINT8_MAX;
	volatile int64_t t156 = -323265890509993LL;

    t156 = ((x701^x702)/(x703+x704));

    if (t156 != -24144952964816252LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int64_t x713 = INT64_MAX;
	int32_t x714 = INT32_MIN;
	static volatile int16_t x715 = INT16_MIN;
	int16_t x716 = -268;
	int64_t t157 = 19LL;

    t157 = ((x713^x714)/(x715+x716));

    if (t157 != 279191549664223LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x722 = -1;
	static uint16_t x723 = 252U;
	static int8_t x724 = INT8_MIN;
	volatile int32_t t158 = 3596070;

    t158 = ((x721^x722)/(x723+x724));

    if (t158 != -128) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x726 = -1;
	uint8_t x727 = 15U;
	int32_t x728 = INT32_MIN;
	int32_t t159 = 4;

    t159 = ((x725^x726)/(x727+x728));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x729 = -1;
	int16_t x730 = 7;
	volatile int32_t t160 = 16112549;

    t160 = ((x729^x730)/(x731+x732));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x733 = INT64_MAX;
	static int32_t x734 = INT32_MIN;
	static uint16_t x735 = 390U;
	volatile int64_t x736 = -6648LL;
	int64_t t161 = 64LL;

    t161 = ((x733^x734)/(x735+x736));

    if (t161 != 1473852993721203LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x737 = INT8_MIN;
	int8_t x739 = INT8_MIN;

    t162 = ((x737^x738)/(x739+x740));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x741 = 19;
	uint64_t x743 = 19453654277795LLU;
	uint32_t x744 = 43382U;
	volatile uint64_t t163 = 320840293888059LLU;

    t163 = ((x741^x742)/(x743+x744));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x750 = 152833U;
	static uint8_t x751 = 15U;

    t164 = ((x749^x750)/(x751+x752));

    if (t164 != -10916LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x753 = -1;
	uint8_t x754 = UINT8_MAX;
	uint64_t x755 = UINT64_MAX;

    t165 = ((x753^x754)/(x755+x756));

    if (t165 != 1LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x758 = 28U;
	static int8_t x760 = -1;

    t166 = ((x757^x758)/(x759+x760));

    if (t166 != 21027LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x762 = INT16_MIN;
	uint8_t x763 = 5U;
	static int8_t x764 = INT8_MIN;
	volatile int32_t t167 = 3452;

    t167 = ((x761^x762)/(x763+x764));

    if (t167 != 266) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x766 = -3086996031811LL;
	int64_t x767 = -1LL;
	volatile int64_t t168 = 1LL;

    t168 = ((x765^x766)/(x767+x768));

    if (t168 != -4294965862LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x769 = 1072LL;
	static uint32_t x770 = 29U;
	int32_t x771 = 1;
	volatile int16_t x772 = INT16_MAX;
	int64_t t169 = 853937576LL;

    t169 = ((x769^x770)/(x771+x772));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x777 = 2039U;
	static int16_t x778 = 139;
	int16_t x779 = 8805;
	volatile uint64_t t170 = 983102186059467LLU;

    t170 = ((x777^x778)/(x779+x780));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x781 = INT32_MIN;
	int32_t x782 = -1;
	uint32_t x783 = UINT32_MAX;
	volatile int32_t x784 = INT32_MIN;
	uint32_t t171 = 11340U;

    t171 = ((x781^x782)/(x783+x784));

    if (t171 != 1U) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x788 = UINT32_MAX;
	volatile int64_t t172 = 25015362095860LL;

    t172 = ((x785^x786)/(x787+x788));

    if (t172 != 2147483649LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x789 = INT16_MAX;
	static int16_t x792 = -1;
	int32_t t173 = -1778670;

    t173 = ((x789^x790)/(x791+x792));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x793 = -112486LL;
	int64_t x794 = INT64_MIN;
	int32_t x795 = INT32_MIN;
	int64_t x796 = INT64_MAX;

    t174 = ((x793^x794)/(x795+x796));

    if (t174 != 1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x801 = INT8_MIN;
	int16_t x802 = INT16_MIN;
	int8_t x803 = -1;
	static volatile int8_t x804 = 3;
	int32_t t175 = -1;

    t175 = ((x801^x802)/(x803+x804));

    if (t175 != 16320) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x805 = INT16_MIN;
	static uint16_t x806 = 6656U;

    t176 = ((x805^x806)/(x807+x808));

    if (t176 != 14236LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x809 = 7268000U;
	int8_t x810 = -41;
	int16_t x811 = -3354;
	int8_t x812 = INT8_MIN;
	volatile uint32_t t177 = 1U;

    t177 = ((x809^x810)/(x811+x812));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x813 = -19583LL;
	static volatile int64_t t178 = 20072LL;

    t178 = ((x813^x814)/(x815+x816));

    if (t178 != 1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x817 = UINT16_MAX;
	int16_t x818 = INT16_MIN;
	static int64_t x819 = INT64_MIN;
	volatile int64_t t179 = 179119605388048821LL;

    t179 = ((x817^x818)/(x819+x820));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x821 = INT16_MAX;
	uint8_t x822 = UINT8_MAX;
	int8_t x823 = -1;
	uint8_t x824 = 36U;
	volatile int32_t t180 = 4342;

    t180 = ((x821^x822)/(x823+x824));

    if (t180 != 928) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x825 = -1;
	int64_t x826 = 946LL;
	static volatile int16_t x827 = INT16_MIN;
	volatile int64_t t181 = 1579LL;

    t181 = ((x825^x826)/(x827+x828));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x830 = -7;
	int64_t x831 = INT64_MIN;
	static uint16_t x832 = UINT16_MAX;
	volatile uint64_t t182 = 2990260640LLU;

    t182 = ((x829^x830)/(x831+x832));

    if (t182 != 1LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x833 = 28463155U;
	volatile int32_t x834 = INT32_MIN;
	int32_t x835 = 3452;
	volatile int32_t x836 = 1500667;

    t183 = ((x833^x834)/(x835+x836));

    if (t183 != 1446U) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x837 = UINT16_MAX;
	volatile uint32_t x838 = 118634644U;
	int16_t x839 = 12;
	int16_t x840 = INT16_MIN;
	volatile uint32_t t184 = 2299444U;

    t184 = ((x837^x838)/(x839+x840));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x841 = UINT8_MAX;
	int64_t x842 = 39LL;
	int16_t x843 = INT16_MIN;
	static int64_t x844 = INT64_MAX;
	int64_t t185 = 9LL;

    t185 = ((x841^x842)/(x843+x844));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x846 = 1937;
	static uint32_t x847 = 480536U;

    t186 = ((x845^x846)/(x847+x848));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x853 = INT16_MAX;
	uint32_t x854 = 58U;
	uint16_t x855 = 0U;
	int64_t x856 = INT64_MAX;

    t187 = ((x853^x854)/(x855+x856));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x858 = UINT64_MAX;
	static uint8_t x859 = 1U;
	volatile int64_t x860 = INT64_MIN;
	static uint64_t t188 = 29846273LLU;

    t188 = ((x857^x858)/(x859+x860));

    if (t188 != 1LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x865 = INT16_MIN;
	int64_t x866 = INT64_MAX;
	int32_t x867 = INT32_MIN;
	int64_t x868 = -621051849LL;

    t189 = ((x865^x866)/(x867+x868));

    if (t189 != 3331498565LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x869 = -4958;
	int8_t x870 = -1;
	volatile int8_t x871 = INT8_MIN;
	volatile uint16_t x872 = UINT16_MAX;

    t190 = ((x869^x870)/(x871+x872));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x873 = -7312;
	int8_t x874 = INT8_MAX;
	int32_t x876 = INT32_MAX;
	volatile int64_t t191 = 53797LL;

    t191 = ((x873^x874)/(x875+x876));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x877 = INT8_MIN;
	volatile int64_t x878 = INT64_MAX;
	int32_t x879 = INT32_MIN;
	uint32_t x880 = UINT32_MAX;
	static int64_t t192 = 25993LL;

    t192 = ((x877^x878)/(x879+x880));

    if (t192 != -4294967297LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x881 = 1;
	int64_t x882 = 123LL;
	volatile int16_t x883 = INT16_MAX;
	static volatile uint16_t x884 = 154U;
	int64_t t193 = -263445729044520193LL;

    t193 = ((x881^x882)/(x883+x884));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x885 = -748;
	int32_t x886 = INT32_MIN;
	volatile int64_t x887 = INT64_MAX;

    t194 = ((x885^x886)/(x887+x888));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x892 = INT32_MIN;
	static int64_t t195 = -107504389731857LL;

    t195 = ((x889^x890)/(x891+x892));

    if (t195 != -8LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x894 = UINT64_MAX;
	volatile int32_t x895 = INT32_MIN;
	int64_t x896 = INT64_MAX;
	static volatile uint64_t t196 = 10LLU;

    t196 = ((x893^x894)/(x895+x896));

    if (t196 != 2LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x897 = INT64_MIN;
	int16_t x898 = -1;
	volatile uint32_t x899 = 58U;
	uint32_t x900 = 1993630714U;
	volatile int64_t t197 = -1106371LL;

    t197 = ((x897^x898)/(x899+x900));

    if (t197 != 4626419378LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x902 = 701U;
	int16_t x903 = -1;
	int8_t x904 = INT8_MIN;
	int64_t t198 = -299LL;

    t198 = ((x901^x902)/(x903+x904));

    if (t198 != 216LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x906 = 157962107;
	int32_t x907 = INT32_MIN;
	int64_t x908 = 681794234861822LL;
	static int64_t t199 = 116423020385437LL;

    t199 = ((x905^x906)/(x907+x908));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

