
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

uint16_t x1 = 2U;
int16_t x2 = INT16_MIN;
int64_t x4 = -1LL;
int32_t x5 = INT32_MIN;
uint8_t x8 = UINT8_MAX;
int32_t t1 = -1709;
volatile int32_t t3 = -4645;
uint64_t x23 = 215366991943759742LLU;
int64_t x24 = INT64_MIN;
uint64_t t5 = 115089779515985LLU;
int64_t x26 = 1851900929659058LL;
int32_t x36 = INT32_MAX;
int8_t x43 = -1;
static volatile int8_t x45 = INT8_MIN;
volatile uint64_t t10 = 1395416LLU;
static uint8_t x53 = UINT8_MAX;
int64_t x57 = -1LL;
static volatile uint16_t x59 = 610U;
static uint64_t t14 = 41LLU;
volatile uint32_t t15 = 1U;
int16_t x71 = 501;
int8_t x72 = INT8_MAX;
int64_t x74 = -7788243924412LL;
static uint8_t x75 = 36U;
int16_t x76 = -44;
int8_t x77 = INT8_MIN;
int64_t x83 = INT64_MIN;
volatile int16_t x85 = INT16_MIN;
static int16_t x90 = INT16_MIN;
static int8_t x91 = 1;
int8_t x92 = 0;
int8_t x93 = INT8_MAX;
uint32_t x94 = 14U;
uint64_t t22 = 114352234772725LLU;
static uint64_t x105 = 22081486383LLU;
static int8_t x106 = INT8_MIN;
static volatile uint64_t t25 = 3054031463610505267LLU;
static int64_t x110 = -228876313734055LL;
static int8_t x111 = -1;
int16_t x112 = 952;
static volatile int8_t x114 = 60;
static int8_t x121 = INT8_MIN;
static int8_t x123 = -1;
static int8_t x124 = -1;
uint16_t x128 = 89U;
uint64_t t30 = 3463927LLU;
int64_t x130 = INT64_MAX;
int64_t x134 = INT64_MIN;
volatile int8_t x139 = -1;
volatile int16_t x140 = INT16_MIN;
volatile int32_t t33 = 6571401;
uint64_t t34 = 408456765813425501LLU;
int32_t x146 = -1;
uint32_t x148 = 118746U;
uint8_t x153 = UINT8_MAX;
volatile int64_t x156 = 9020343LL;
uint8_t x179 = 1U;
int64_t t43 = 26998507LL;
uint8_t x185 = 49U;
int8_t x192 = 7;
static uint64_t x196 = 29LLU;
uint8_t x197 = 24U;
volatile int8_t x207 = INT8_MIN;
int16_t x213 = INT16_MIN;
int8_t x214 = INT8_MAX;
static volatile int8_t x220 = 8;
volatile int64_t x226 = INT64_MIN;
uint8_t x227 = 69U;
static int8_t x232 = INT8_MIN;
int64_t x238 = INT64_MIN;
uint64_t t57 = 7676453555090LLU;
static int8_t x242 = -11;
volatile uint64_t x246 = 210552LLU;
int32_t x247 = -1;
uint16_t x249 = UINT16_MAX;
volatile uint64_t x251 = 2280261LLU;
static int32_t x252 = 119523107;
int8_t x255 = INT8_MIN;
volatile int64_t t61 = 113544743588LL;
static int8_t x272 = INT8_MAX;
static volatile uint8_t x274 = UINT8_MAX;
static volatile int32_t x278 = 6794;
int64_t t66 = 1028217032860215LL;
volatile int32_t x282 = INT32_MAX;
uint32_t x291 = UINT32_MAX;
volatile int64_t t69 = -256686LL;
static volatile int8_t x293 = -1;
volatile uint8_t x296 = UINT8_MAX;
static uint8_t x298 = 4U;
int64_t x313 = INT64_MIN;
int32_t x329 = INT32_MIN;
int16_t x339 = INT16_MAX;
int8_t x340 = -15;
volatile uint8_t x344 = UINT8_MAX;
int64_t x347 = INT64_MAX;
int8_t x349 = INT8_MIN;
uint64_t x351 = 12LLU;
static volatile int64_t x367 = INT64_MIN;
volatile int64_t x372 = 898387LL;
int64_t x379 = -1LL;
uint64_t t91 = 47427230259019306LLU;
uint8_t x383 = 0U;
int32_t x388 = -1;
static volatile uint16_t x398 = 1U;
volatile int16_t x401 = 432;
uint8_t x403 = UINT8_MAX;
uint32_t t98 = 62U;
static uint64_t t99 = 1043LLU;
volatile int64_t t100 = -642422LL;
static int16_t x427 = INT16_MIN;
uint32_t x428 = 20608101U;
volatile int16_t x434 = INT16_MAX;
uint8_t x438 = UINT8_MAX;
int8_t x439 = INT8_MAX;
int64_t x444 = 10053807729LL;
volatile int64_t t106 = -407548091603938090LL;
uint8_t x446 = 3U;
uint8_t x454 = 2U;
uint32_t x463 = UINT32_MAX;
static int64_t x465 = -44959351LL;
uint32_t x472 = 83481U;
int32_t x475 = -1;
static int64_t t114 = 2670LL;
int64_t x477 = 0LL;
volatile int8_t x479 = INT8_MIN;
volatile int16_t x483 = INT16_MIN;
int16_t x491 = 194;
static uint16_t x496 = 59U;
volatile uint32_t t120 = 49733741U;
volatile uint16_t x503 = 606U;
volatile int16_t x511 = 1;
volatile uint64_t x514 = 677516654734968501LLU;
volatile int8_t x521 = INT8_MAX;
volatile int16_t x525 = -460;
uint8_t x526 = 56U;
volatile int64_t t128 = -475370036553207LL;
static uint16_t x538 = 1U;
int16_t x541 = INT16_MIN;
int16_t x542 = INT16_MIN;
int32_t x543 = INT32_MIN;
volatile uint16_t x551 = 30367U;
int16_t x556 = INT16_MIN;
static uint32_t x557 = 695077628U;
volatile int16_t x564 = INT16_MAX;
volatile int32_t t136 = -2;
int8_t x568 = 35;
static uint32_t x572 = 16080U;
static uint32_t t138 = 101U;
static int8_t x573 = 1;
volatile int8_t x582 = INT8_MAX;
int8_t x583 = -4;
uint32_t t142 = 11615125U;
int64_t x594 = -537272642489LL;
int16_t x598 = INT16_MIN;
volatile int8_t x599 = INT8_MAX;
volatile int64_t t145 = 942549145045462LL;
uint8_t x604 = UINT8_MAX;
int16_t x606 = INT16_MAX;
static int64_t x607 = -1LL;
int32_t x608 = INT32_MIN;
int32_t x618 = 706390597;
uint64_t t150 = 6580140891LLU;
int16_t x625 = -1;
int16_t x626 = -1;
int16_t x633 = INT16_MIN;
static int8_t x635 = INT8_MIN;
uint16_t x636 = 465U;
uint32_t x639 = UINT32_MAX;
static int64_t x642 = INT64_MIN;
volatile uint64_t t156 = 270351819168252LLU;
uint32_t x649 = 7U;
int64_t t159 = 6341836393LL;
volatile uint64_t t160 = 68968337332839LLU;
int32_t x662 = INT32_MIN;
uint32_t x666 = UINT32_MAX;
volatile int64_t t162 = 180492978461389LL;
int16_t x670 = INT16_MIN;
uint32_t x679 = 130618U;
volatile int64_t t165 = -6897750819LL;
volatile int32_t x682 = INT32_MIN;
volatile int64_t t167 = -741387036851333LL;
uint64_t x692 = 4805634615354LLU;
uint64_t t168 = 42892LLU;
volatile uint32_t t169 = 16608U;
int16_t x699 = -1;
int64_t t170 = -4039476013834501LL;
volatile int8_t x702 = INT8_MIN;
static int8_t x704 = INT8_MAX;
volatile int64_t t176 = 1395829716970LL;
volatile int64_t x733 = -501322622817653141LL;
int8_t x735 = INT8_MAX;
uint64_t x740 = UINT64_MAX;
volatile uint64_t t180 = 260LLU;
int32_t x748 = INT32_MIN;
int64_t x751 = -1LL;
static uint64_t x756 = UINT64_MAX;
static int8_t x758 = INT8_MIN;
int16_t x766 = -1;
volatile uint64_t x767 = 128047LLU;
int32_t x770 = -1;
static uint32_t t186 = 2722U;
int16_t x773 = -1;
uint8_t x776 = 1U;
int8_t x778 = -27;
int64_t x793 = -3880660439316544LL;
volatile int8_t x799 = -1;
static volatile uint16_t x807 = UINT16_MAX;
volatile uint8_t x809 = 0U;
int32_t x810 = -3406599;
uint8_t x812 = UINT8_MAX;
int32_t x821 = -5155122;
volatile int64_t x827 = -1022023LL;


void f0(void) {
    	uint32_t x3 = 7U;
	volatile int64_t t0 = -854LL;

    t0 = ((x1/x2)/(x3|x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x6 = INT8_MIN;
	uint16_t x7 = 13U;

    t1 = ((x5/x6)/(x7|x8));

    if (t1 != 65793) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 3339413831LLU;
	int32_t x10 = INT32_MAX;
	int8_t x11 = -20;
	int8_t x12 = -1;
	uint64_t t2 = 12461698032405LLU;

    t2 = ((x9/x10)/(x11|x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	volatile uint16_t x14 = 691U;
	static uint8_t x15 = 22U;
	int16_t x16 = INT16_MIN;

    t3 = ((x13/x14)/(x15|x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = 26;
	uint16_t x18 = 550U;
	int64_t x19 = 53080089889LL;
	static uint32_t x20 = UINT32_MAX;
	static int64_t t4 = 1080201688101122LL;

    t4 = ((x17/x18)/(x19|x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	int32_t x22 = 296837754;

    t5 = ((x21/x22)/(x23|x24));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	uint64_t x27 = 619583175176329715LLU;
	int64_t x28 = INT64_MIN;
	volatile uint64_t t6 = 35984296061LLU;

    t6 = ((x25/x26)/(x27|x28));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x33 = -1LL;
	uint8_t x34 = UINT8_MAX;
	int16_t x35 = 1;
	int64_t t7 = 0LL;

    t7 = ((x33/x34)/(x35|x36));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = -1;
	static int32_t x38 = 45;
	static int16_t x39 = 677;
	volatile int32_t x40 = INT32_MIN;
	volatile int32_t t8 = -234064;

    t8 = ((x37/x38)/(x39|x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = -1;
	static int8_t x42 = -61;
	static int32_t x44 = 55452223;
	int32_t t9 = 15910;

    t9 = ((x41/x42)/(x43|x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x46 = UINT64_MAX;
	int32_t x47 = INT32_MIN;
	int8_t x48 = INT8_MIN;

    t10 = ((x45/x46)/(x47|x48));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = -1704;
	int32_t x50 = -1;
	uint64_t x51 = 227128995951LLU;
	static int32_t x52 = INT32_MAX;
	volatile uint64_t t11 = 15LLU;

    t11 = ((x49/x50)/(x51|x52));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x54 = -6;
	uint16_t x55 = UINT16_MAX;
	int64_t x56 = INT64_MIN;
	int64_t t12 = -949559LL;

    t12 = ((x53/x54)/(x55|x56));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x58 = INT32_MAX;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t13 = 2981005961170182243LLU;

    t13 = ((x57/x58)/(x59|x60));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = 78677LL;
	volatile uint64_t x62 = 270415946322LLU;
	uint64_t x63 = UINT64_MAX;
	int8_t x64 = INT8_MIN;

    t14 = ((x61/x62)/(x63|x64));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x65 = 65301304U;
	int32_t x66 = 23319916;
	int8_t x67 = -29;
	static int32_t x68 = -1;

    t15 = ((x65/x66)/(x67|x68));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x69 = INT32_MIN;
	static uint64_t x70 = 1LLU;
	uint64_t t16 = 90702224382LLU;

    t16 = ((x69/x70)/(x71|x72));

    if (t16 != 36099303466853361LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = INT16_MIN;
	volatile int64_t t17 = -3899LL;

    t17 = ((x73/x74)/(x75|x76));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x78 = UINT32_MAX;
	int32_t x79 = INT32_MIN;
	uint64_t x80 = UINT64_MAX;
	uint64_t t18 = 12LLU;

    t18 = ((x77/x78)/(x79|x80));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = -1668441LL;
	int32_t x82 = INT32_MIN;
	uint64_t x84 = 922601123398LLU;
	static uint64_t t19 = 194518844318818LLU;

    t19 = ((x81/x82)/(x83|x84));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x86 = 14U;
	uint64_t x87 = 33210136411594444LLU;
	static int8_t x88 = -1;
	uint64_t t20 = 2036077887386LLU;

    t20 = ((x85/x86)/(x87|x88));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x89 = 550U;
	uint32_t t21 = 315U;

    t21 = ((x89/x90)/(x91|x92));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x95 = UINT32_MAX;
	uint64_t x96 = 5LLU;

    t22 = ((x93/x94)/(x95|x96));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = -110;
	uint16_t x98 = UINT16_MAX;
	volatile int8_t x99 = 0;
	uint64_t x100 = 8LLU;
	volatile uint64_t t23 = 4560LLU;

    t23 = ((x97/x98)/(x99|x100));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint32_t x101 = 901110U;
	uint32_t x102 = UINT32_MAX;
	int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MIN;
	volatile uint32_t t24 = 398225519U;

    t24 = ((x101/x102)/(x103|x104));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x107 = UINT8_MAX;
	int16_t x108 = INT16_MAX;

    t25 = ((x105/x106)/(x107|x108));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x109 = -1;
	static int64_t t26 = -122LL;

    t26 = ((x109/x110)/(x111|x112));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = INT32_MIN;
	uint32_t x115 = 803469753U;
	static int8_t x116 = INT8_MAX;
	uint32_t t27 = 41895065U;

    t27 = ((x113/x114)/(x115|x116));

    if (t27 != 5U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x117 = UINT32_MAX;
	volatile uint64_t x118 = UINT64_MAX;
	static int32_t x119 = -22;
	volatile int16_t x120 = 114;
	volatile uint64_t t28 = 1836408529825897LLU;

    t28 = ((x117/x118)/(x119|x120));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x122 = 16870345315193LL;
	int64_t t29 = -22LL;

    t29 = ((x121/x122)/(x123|x124));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x125 = -57954318475LL;
	uint64_t x126 = UINT64_MAX;
	int32_t x127 = 12;

    t30 = ((x125/x126)/(x127|x128));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x129 = 3U;
	volatile uint64_t x131 = 329LLU;
	int16_t x132 = -1;
	volatile uint64_t t31 = 1486521LLU;

    t31 = ((x129/x130)/(x131|x132));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = INT16_MAX;
	int8_t x135 = INT8_MIN;
	int16_t x136 = INT16_MIN;
	int64_t t32 = 476870249362LL;

    t32 = ((x133/x134)/(x135|x136));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x137 = -6;
	int8_t x138 = -13;

    t33 = ((x137/x138)/(x139|x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x141 = 65962082LL;
	static uint8_t x142 = 40U;
	uint64_t x143 = 110963364689LLU;
	uint64_t x144 = UINT64_MAX;

    t34 = ((x141/x142)/(x143|x144));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint16_t x145 = UINT16_MAX;
	int64_t x147 = INT64_MIN;
	volatile int64_t t35 = 345173702LL;

    t35 = ((x145/x146)/(x147|x148));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x149 = -818664;
	uint64_t x150 = 366368835630176830LLU;
	volatile uint8_t x151 = 93U;
	static int16_t x152 = -2153;
	volatile uint64_t t36 = 121084138LLU;

    t36 = ((x149/x150)/(x151|x152));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x154 = UINT8_MAX;
	uint8_t x155 = 14U;
	static int64_t t37 = 1099242427421907765LL;

    t37 = ((x153/x154)/(x155|x156));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x157 = -15933165LL;
	uint16_t x158 = 12U;
	uint32_t x159 = 3479U;
	int32_t x160 = INT32_MAX;
	int64_t t38 = -63090264310LL;

    t38 = ((x157/x158)/(x159|x160));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x161 = INT16_MAX;
	int64_t x162 = 1LL;
	static uint64_t x163 = 10LLU;
	int8_t x164 = -1;
	volatile uint64_t t39 = 791850950842818629LLU;

    t39 = ((x161/x162)/(x163|x164));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x165 = 4U;
	static volatile uint8_t x166 = 46U;
	int64_t x167 = INT64_MAX;
	static int32_t x168 = -1642402;
	volatile int64_t t40 = -17LL;

    t40 = ((x165/x166)/(x167|x168));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x169 = INT32_MAX;
	volatile int8_t x170 = INT8_MIN;
	int32_t x171 = INT32_MIN;
	int16_t x172 = 6817;
	int32_t t41 = 207;

    t41 = ((x169/x170)/(x171|x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x173 = 410LL;
	int64_t x174 = INT64_MIN;
	int64_t x175 = -1LL;
	int16_t x176 = INT16_MIN;
	static volatile int64_t t42 = -32935579280LL;

    t42 = ((x173/x174)/(x175|x176));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x177 = 17U;
	uint8_t x178 = 1U;
	int64_t x180 = -1LL;

    t43 = ((x177/x178)/(x179|x180));

    if (t43 != -17LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x186 = INT64_MIN;
	uint16_t x187 = UINT16_MAX;
	uint8_t x188 = 1U;
	int64_t t44 = 14LL;

    t44 = ((x185/x186)/(x187|x188));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x189 = INT64_MAX;
	int32_t x190 = -1;
	uint8_t x191 = UINT8_MAX;
	int64_t t45 = 28010072793434LL;

    t45 = ((x189/x190)/(x191|x192));

    if (t45 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = INT8_MIN;
	uint16_t x194 = 81U;
	uint64_t x195 = UINT64_MAX;
	uint64_t t46 = 30430275818107LLU;

    t46 = ((x193/x194)/(x195|x196));

    if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x198 = INT16_MIN;
	int16_t x199 = -1;
	static volatile int8_t x200 = INT8_MAX;
	volatile int32_t t47 = 3024725;

    t47 = ((x197/x198)/(x199|x200));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x201 = 630;
	uint8_t x202 = 3U;
	int16_t x203 = INT16_MAX;
	volatile uint32_t x204 = 792096U;
	volatile uint32_t t48 = 2U;

    t48 = ((x201/x202)/(x203|x204));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x205 = 56U;
	int8_t x206 = INT8_MAX;
	int8_t x208 = -1;
	int32_t t49 = -51674;

    t49 = ((x205/x206)/(x207|x208));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint32_t x209 = UINT32_MAX;
	int16_t x210 = INT16_MAX;
	volatile int32_t x211 = INT32_MIN;
	uint64_t x212 = 2LLU;
	uint64_t t50 = 2577LLU;

    t50 = ((x209/x210)/(x211|x212));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x215 = INT8_MAX;
	volatile int16_t x216 = -1;
	static volatile int32_t t51 = -435212;

    t51 = ((x213/x214)/(x215|x216));

    if (t51 != 258) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x217 = 2607U;
	uint64_t x218 = 4902084744063258LLU;
	int64_t x219 = 3713814LL;
	volatile uint64_t t52 = 932LLU;

    t52 = ((x217/x218)/(x219|x220));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x221 = UINT16_MAX;
	volatile int32_t x222 = INT32_MIN;
	static uint32_t x223 = UINT32_MAX;
	uint8_t x224 = UINT8_MAX;
	uint32_t t53 = 1385U;

    t53 = ((x221/x222)/(x223|x224));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x225 = -1;
	static volatile int16_t x228 = INT16_MAX;
	volatile int64_t t54 = -324724LL;

    t54 = ((x225/x226)/(x227|x228));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x229 = INT64_MIN;
	int8_t x230 = 28;
	int64_t x231 = INT64_MIN;
	int64_t t55 = -17801303411293LL;

    t55 = ((x229/x230)/(x231|x232));

    if (t55 != 2573485501354569LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x233 = 1400;
	int64_t x234 = INT64_MIN;
	uint8_t x235 = UINT8_MAX;
	int64_t x236 = -1LL;
	int64_t t56 = -60LL;

    t56 = ((x233/x234)/(x235|x236));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x237 = 0U;
	uint64_t x239 = UINT64_MAX;
	uint64_t x240 = UINT64_MAX;

    t57 = ((x237/x238)/(x239|x240));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x241 = -1;
	uint16_t x243 = UINT16_MAX;
	static volatile int8_t x244 = INT8_MIN;
	int32_t t58 = 4356;

    t58 = ((x241/x242)/(x243|x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x245 = INT64_MAX;
	uint8_t x248 = 4U;
	volatile uint64_t t59 = 11662860297349LLU;

    t59 = ((x245/x246)/(x247|x248));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x250 = -10;
	static volatile uint64_t t60 = 61544045LLU;

    t60 = ((x249/x250)/(x251|x252));

    if (t60 != 151672289524LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x253 = INT32_MIN;
	int8_t x254 = INT8_MIN;
	int64_t x256 = INT64_MIN;

    t61 = ((x253/x254)/(x255|x256));

    if (t61 != -131072LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x257 = INT16_MIN;
	int8_t x258 = 26;
	int64_t x259 = -1LL;
	int32_t x260 = INT32_MIN;
	int64_t t62 = -797777285755193626LL;

    t62 = ((x257/x258)/(x259|x260));

    if (t62 != 1260LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x265 = INT64_MIN;
	int64_t x266 = INT64_MIN;
	volatile int16_t x267 = INT16_MIN;
	int8_t x268 = INT8_MIN;
	static volatile int64_t t63 = 6LL;

    t63 = ((x265/x266)/(x267|x268));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x269 = INT64_MIN;
	uint64_t x270 = UINT64_MAX;
	static int16_t x271 = -1;
	static uint64_t t64 = 259117328433947627LLU;

    t64 = ((x269/x270)/(x271|x272));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x273 = INT16_MIN;
	uint16_t x275 = 3U;
	int16_t x276 = -1;
	int32_t t65 = 483;

    t65 = ((x273/x274)/(x275|x276));

    if (t65 != 128) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x277 = 0;
	volatile uint32_t x279 = UINT32_MAX;
	int64_t x280 = 844374LL;

    t66 = ((x277/x278)/(x279|x280));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x281 = INT64_MIN;
	int64_t x283 = INT64_MIN;
	uint8_t x284 = UINT8_MAX;
	int64_t t67 = 28281307LL;

    t67 = ((x281/x282)/(x283|x284));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint32_t x285 = 2U;
	int16_t x286 = 4301;
	int8_t x287 = -2;
	int64_t x288 = INT64_MAX;
	int64_t t68 = 133LL;

    t68 = ((x285/x286)/(x287|x288));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x289 = INT32_MAX;
	int64_t x290 = -1LL;
	int8_t x292 = 10;

    t69 = ((x289/x290)/(x291|x292));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x294 = 420960U;
	static volatile int8_t x295 = -50;
	volatile uint32_t t70 = 465U;

    t70 = ((x293/x294)/(x295|x296));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x297 = UINT8_MAX;
	volatile int16_t x299 = 7;
	uint32_t x300 = 647909U;
	static uint32_t t71 = 21508120U;

    t71 = ((x297/x298)/(x299|x300));

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x301 = -1;
	uint16_t x302 = 15625U;
	uint64_t x303 = 3183681891132696409LLU;
	uint16_t x304 = UINT16_MAX;
	volatile uint64_t t72 = 4289703026414967674LLU;

    t72 = ((x301/x302)/(x303|x304));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x305 = 626LLU;
	volatile int32_t x306 = INT32_MIN;
	static int32_t x307 = INT32_MAX;
	static uint8_t x308 = 107U;
	uint64_t t73 = 1227165329457LLU;

    t73 = ((x305/x306)/(x307|x308));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x309 = 88U;
	int64_t x310 = INT64_MIN;
	int8_t x311 = INT8_MIN;
	volatile uint64_t x312 = 307193152475LLU;
	uint64_t t74 = 87018017856497532LLU;

    t74 = ((x309/x310)/(x311|x312));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x314 = UINT16_MAX;
	static uint64_t x315 = 120533127095183579LLU;
	volatile uint64_t x316 = UINT64_MAX;
	static uint64_t t75 = 1232414150650LLU;

    t75 = ((x313/x314)/(x315|x316));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x317 = -4;
	volatile int8_t x318 = INT8_MIN;
	int8_t x319 = 48;
	volatile uint16_t x320 = UINT16_MAX;
	volatile int32_t t76 = 395042;

    t76 = ((x317/x318)/(x319|x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x321 = UINT32_MAX;
	uint8_t x322 = 1U;
	volatile int8_t x323 = INT8_MIN;
	int32_t x324 = INT32_MIN;
	uint32_t t77 = 224U;

    t77 = ((x321/x322)/(x323|x324));

    if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x325 = INT32_MIN;
	volatile uint64_t x326 = 81795LLU;
	volatile int8_t x327 = -1;
	uint64_t x328 = 0LLU;
	uint64_t t78 = 113576LLU;

    t78 = ((x325/x326)/(x327|x328));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint64_t x330 = UINT64_MAX;
	int64_t x331 = INT64_MAX;
	int16_t x332 = 0;
	uint64_t t79 = 43587567469LLU;

    t79 = ((x329/x330)/(x331|x332));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x333 = -1LL;
	int8_t x334 = 54;
	uint32_t x335 = UINT32_MAX;
	volatile int32_t x336 = INT32_MIN;
	int64_t t80 = -100LL;

    t80 = ((x333/x334)/(x335|x336));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x337 = UINT32_MAX;
	static uint16_t x338 = 1U;
	uint32_t t81 = 3U;

    t81 = ((x337/x338)/(x339|x340));

    if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x341 = INT32_MIN;
	uint8_t x342 = 118U;
	int8_t x343 = INT8_MAX;
	volatile int32_t t82 = 0;

    t82 = ((x341/x342)/(x343|x344));

    if (t82 != -71368) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x345 = -3780;
	int32_t x346 = 3882837;
	int8_t x348 = 47;
	volatile int64_t t83 = 690LL;

    t83 = ((x345/x346)/(x347|x348));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x350 = INT64_MIN;
	int64_t x352 = 85661649175585LL;
	volatile uint64_t t84 = 948LLU;

    t84 = ((x349/x350)/(x351|x352));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x353 = INT16_MIN;
	int8_t x354 = -1;
	int8_t x355 = INT8_MAX;
	volatile int8_t x356 = -1;
	volatile int32_t t85 = -638996;

    t85 = ((x353/x354)/(x355|x356));

    if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x357 = INT64_MAX;
	int32_t x358 = -1;
	int32_t x359 = INT32_MAX;
	int32_t x360 = -1;
	int64_t t86 = INT64_MAX;

    t86 = ((x357/x358)/(x359|x360));

    if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x361 = UINT8_MAX;
	int64_t x362 = -1024491064413LL;
	static int32_t x363 = -1;
	volatile int64_t x364 = -1LL;
	static volatile int64_t t87 = -808927166458191LL;

    t87 = ((x361/x362)/(x363|x364));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x365 = 27U;
	static int32_t x366 = -380732;
	int64_t x368 = INT64_MIN;
	volatile int64_t t88 = -61756LL;

    t88 = ((x365/x366)/(x367|x368));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x369 = 17;
	volatile int32_t x370 = -37253;
	int16_t x371 = -486;
	static int64_t t89 = -138905848820769LL;

    t89 = ((x369/x370)/(x371|x372));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x373 = INT8_MIN;
	static int8_t x374 = INT8_MIN;
	int8_t x375 = 1;
	int32_t x376 = -1;
	volatile int32_t t90 = 59699;

    t90 = ((x373/x374)/(x375|x376));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x377 = INT32_MAX;
	uint64_t x378 = 5320436847812438524LLU;
	uint32_t x380 = 7U;

    t91 = ((x377/x378)/(x379|x380));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x381 = -888;
	uint32_t x382 = UINT32_MAX;
	int32_t x384 = -112;
	volatile uint32_t t92 = 533U;

    t92 = ((x381/x382)/(x383|x384));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x385 = UINT8_MAX;
	int8_t x386 = 3;
	volatile int64_t x387 = -12710167230LL;
	volatile int64_t t93 = -52990655621389LL;

    t93 = ((x385/x386)/(x387|x388));

    if (t93 != -85LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x389 = INT16_MIN;
	static uint32_t x390 = 62645538U;
	volatile int16_t x391 = -15;
	int8_t x392 = INT8_MIN;
	static volatile uint32_t t94 = 152978391U;

    t94 = ((x389/x390)/(x391|x392));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x393 = -460868;
	uint32_t x394 = 59378378U;
	int8_t x395 = INT8_MIN;
	int64_t x396 = -169336LL;
	volatile int64_t t95 = 201524654656826LL;

    t95 = ((x393/x394)/(x395|x396));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x397 = 1U;
	int16_t x399 = -1;
	static uint8_t x400 = 0U;
	static int32_t t96 = 48229483;

    t96 = ((x397/x398)/(x399|x400));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x402 = 137U;
	int8_t x404 = INT8_MAX;
	uint32_t t97 = 0U;

    t97 = ((x401/x402)/(x403|x404));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x405 = INT32_MIN;
	volatile uint8_t x406 = UINT8_MAX;
	uint32_t x407 = 14277U;
	int8_t x408 = 0;

    t98 = ((x405/x406)/(x407|x408));

    if (t98 != 300241U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x409 = -1;
	int16_t x410 = -1;
	uint16_t x411 = 4U;
	uint64_t x412 = UINT64_MAX;

    t99 = ((x409/x410)/(x411|x412));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x413 = 0;
	int16_t x414 = -1;
	uint16_t x415 = UINT16_MAX;
	int64_t x416 = INT64_MIN;

    t100 = ((x413/x414)/(x415|x416));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x417 = 3216U;
	volatile uint64_t x418 = UINT64_MAX;
	int64_t x419 = INT64_MIN;
	int8_t x420 = -1;
	static uint64_t t101 = 195633LLU;

    t101 = ((x417/x418)/(x419|x420));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x425 = INT64_MIN;
	int16_t x426 = INT16_MAX;
	volatile int64_t t102 = -767LL;

    t102 = ((x425/x426)/(x427|x428));

    if (t102 != -65538LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x429 = 920;
	static uint32_t x430 = 9U;
	static uint8_t x431 = 0U;
	int32_t x432 = -1;
	uint32_t t103 = 223680U;

    t103 = ((x429/x430)/(x431|x432));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x433 = 905LL;
	uint16_t x435 = 125U;
	static uint16_t x436 = UINT16_MAX;
	int64_t t104 = -2822861657187LL;

    t104 = ((x433/x434)/(x435|x436));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x437 = INT16_MIN;
	uint16_t x440 = 34U;
	static int32_t t105 = 402804;

    t105 = ((x437/x438)/(x439|x440));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x441 = INT16_MAX;
	static uint16_t x442 = 317U;
	static int16_t x443 = -1;

    t106 = ((x441/x442)/(x443|x444));

    if (t106 != -103LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x445 = INT32_MIN;
	int32_t x447 = -272987515;
	uint16_t x448 = 5U;
	static int32_t t107 = -27959;

    t107 = ((x445/x446)/(x447|x448));

    if (t107 != 2) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x449 = INT8_MIN;
	static volatile int16_t x450 = INT16_MAX;
	uint8_t x451 = UINT8_MAX;
	volatile uint32_t x452 = 47U;
	volatile uint32_t t108 = 5935470U;

    t108 = ((x449/x450)/(x451|x452));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x453 = 0;
	int8_t x455 = -33;
	int8_t x456 = -1;
	int32_t t109 = 290566;

    t109 = ((x453/x454)/(x455|x456));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint64_t x457 = 7519357040080LLU;
	int32_t x458 = INT32_MIN;
	uint16_t x459 = 13042U;
	int8_t x460 = INT8_MIN;
	volatile uint64_t t110 = 443340LLU;

    t110 = ((x457/x458)/(x459|x460));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x461 = 99LL;
	volatile int8_t x462 = -1;
	uint64_t x464 = 747695312585392832LLU;
	volatile uint64_t t111 = 4480815947143621LLU;

    t111 = ((x461/x462)/(x463|x464));

    if (t111 != 24LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int64_t x466 = INT64_MAX;
	uint8_t x467 = 3U;
	uint32_t x468 = 8707186U;
	static volatile int64_t t112 = -1843496049472974073LL;

    t112 = ((x465/x466)/(x467|x468));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x469 = INT64_MIN;
	int16_t x470 = -21;
	static uint32_t x471 = UINT32_MAX;
	volatile int64_t t113 = -123758506566582801LL;

    t113 = ((x469/x470)/(x471|x472));

    if (t113 != 102261126LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x473 = -520146938LL;
	int16_t x474 = -1;
	uint16_t x476 = UINT16_MAX;

    t114 = ((x473/x474)/(x475|x476));

    if (t114 != -520146938LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x478 = 32240U;
	int64_t x480 = INT64_MAX;
	volatile int64_t t115 = -244952866313LL;

    t115 = ((x477/x478)/(x479|x480));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x481 = INT32_MAX;
	uint32_t x482 = UINT32_MAX;
	volatile int64_t x484 = INT64_MAX;
	int64_t t116 = 1721023425684971LL;

    t116 = ((x481/x482)/(x483|x484));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x485 = 379574975;
	static volatile uint16_t x486 = UINT16_MAX;
	static int16_t x487 = -6;
	uint16_t x488 = 0U;
	int32_t t117 = -302;

    t117 = ((x485/x486)/(x487|x488));

    if (t117 != -965) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x489 = INT8_MIN;
	uint64_t x490 = 193LLU;
	int32_t x492 = -4;
	uint64_t t118 = 5479206003946LLU;

    t118 = ((x489/x490)/(x491|x492));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x493 = 15U;
	int64_t x494 = INT64_MAX;
	int8_t x495 = -1;
	volatile int64_t t119 = -118800651758749LL;

    t119 = ((x493/x494)/(x495|x496));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x497 = INT16_MAX;
	uint32_t x498 = 72519U;
	int8_t x499 = INT8_MAX;
	int8_t x500 = -2;

    t120 = ((x497/x498)/(x499|x500));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int8_t x501 = 15;
	int8_t x502 = -57;
	static int32_t x504 = INT32_MIN;
	int32_t t121 = -183934;

    t121 = ((x501/x502)/(x503|x504));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint16_t x505 = 21U;
	int8_t x506 = INT8_MIN;
	int32_t x507 = INT32_MIN;
	int32_t x508 = 14;
	int32_t t122 = -373462;

    t122 = ((x505/x506)/(x507|x508));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x509 = INT8_MAX;
	uint32_t x510 = UINT32_MAX;
	uint32_t x512 = 2747991U;
	uint32_t t123 = 1228U;

    t123 = ((x509/x510)/(x511|x512));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x513 = INT16_MIN;
	volatile int64_t x515 = INT64_MIN;
	int32_t x516 = 9883;
	uint64_t t124 = 753089674188933639LLU;

    t124 = ((x513/x514)/(x515|x516));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x517 = 3198897U;
	static uint32_t x518 = 50U;
	uint64_t x519 = UINT64_MAX;
	static int64_t x520 = INT64_MIN;
	volatile uint64_t t125 = 1164497LLU;

    t125 = ((x517/x518)/(x519|x520));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x522 = INT8_MAX;
	int64_t x523 = -302LL;
	volatile int64_t x524 = INT64_MIN;
	volatile int64_t t126 = -555LL;

    t126 = ((x521/x522)/(x523|x524));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x527 = 902LL;
	int8_t x528 = -5;
	int64_t t127 = 36600581479461LL;

    t127 = ((x525/x526)/(x527|x528));

    if (t127 != 8LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x529 = UINT32_MAX;
	uint32_t x530 = 75U;
	int64_t x531 = INT64_MIN;
	uint16_t x532 = 4U;

    t128 = ((x529/x530)/(x531|x532));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x533 = INT32_MAX;
	int8_t x534 = INT8_MAX;
	static volatile uint32_t x535 = 32578U;
	volatile int8_t x536 = -1;
	static volatile uint32_t t129 = 59U;

    t129 = ((x533/x534)/(x535|x536));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x537 = 1;
	int8_t x539 = INT8_MAX;
	int64_t x540 = 83876LL;
	int64_t t130 = -23483LL;

    t130 = ((x537/x538)/(x539|x540));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x544 = -561162232362LL;
	int64_t t131 = -6862799104886143LL;

    t131 = ((x541/x542)/(x543|x544));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x545 = 276021LLU;
	int8_t x546 = -1;
	static uint16_t x547 = 149U;
	int8_t x548 = INT8_MIN;
	static volatile uint64_t t132 = 215590162657942LLU;

    t132 = ((x545/x546)/(x547|x548));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x549 = INT8_MIN;
	int8_t x550 = -39;
	int8_t x552 = INT8_MIN;
	volatile int32_t t133 = 40052;

    t133 = ((x549/x550)/(x551|x552));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x553 = INT32_MIN;
	uint16_t x554 = 211U;
	int32_t x555 = INT32_MIN;
	int32_t t134 = -53;

    t134 = ((x553/x554)/(x555|x556));

    if (t134 != 310) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x558 = -1;
	int32_t x559 = -340184;
	int8_t x560 = -1;
	static volatile uint32_t t135 = 102U;

    t135 = ((x557/x558)/(x559|x560));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x561 = -12;
	int16_t x562 = -5457;
	volatile uint16_t x563 = 0U;

    t136 = ((x561/x562)/(x563|x564));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x565 = 51620749LLU;
	static uint64_t x566 = 233LLU;
	static int64_t x567 = INT64_MIN;
	uint64_t t137 = 611380910LLU;

    t137 = ((x565/x566)/(x567|x568));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x569 = 2226U;
	uint32_t x570 = UINT32_MAX;
	int32_t x571 = INT32_MAX;

    t138 = ((x569/x570)/(x571|x572));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x574 = INT8_MIN;
	uint8_t x575 = 3U;
	uint32_t x576 = UINT32_MAX;
	volatile uint32_t t139 = 341U;

    t139 = ((x573/x574)/(x575|x576));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x577 = INT16_MIN;
	volatile int8_t x578 = INT8_MAX;
	static int32_t x579 = INT32_MAX;
	int32_t x580 = -1;
	volatile int32_t t140 = -851;

    t140 = ((x577/x578)/(x579|x580));

    if (t140 != 258) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x581 = 12U;
	volatile int16_t x584 = INT16_MIN;
	static int32_t t141 = 0;

    t141 = ((x581/x582)/(x583|x584));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x585 = INT32_MAX;
	static uint32_t x586 = 940647022U;
	int32_t x587 = INT32_MAX;
	uint8_t x588 = 3U;

    t142 = ((x585/x586)/(x587|x588));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x589 = -5;
	int64_t x590 = INT64_MIN;
	int64_t x591 = INT64_MIN;
	int8_t x592 = INT8_MAX;
	int64_t t143 = 61673692710018LL;

    t143 = ((x589/x590)/(x591|x592));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x593 = -26;
	volatile uint8_t x595 = 4U;
	uint8_t x596 = UINT8_MAX;
	static volatile int64_t t144 = 120833199869LL;

    t144 = ((x593/x594)/(x595|x596));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x597 = 14U;
	int64_t x600 = 536955989030LL;

    t145 = ((x597/x598)/(x599|x600));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x601 = INT16_MIN;
	uint32_t x602 = 5246726U;
	int32_t x603 = -32582888;
	static uint32_t t146 = 0U;

    t146 = ((x601/x602)/(x603|x604));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x605 = 52593930604732790LL;
	volatile int64_t t147 = 29970591827487LL;

    t147 = ((x605/x606)/(x607|x608));

    if (t147 != -1605088369540LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x609 = 27078039U;
	int8_t x610 = -1;
	int32_t x611 = 528376;
	int32_t x612 = INT32_MAX;
	static volatile uint32_t t148 = 19026911U;

    t148 = ((x609/x610)/(x611|x612));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x613 = 314810U;
	static volatile uint64_t x614 = 12036323LLU;
	uint16_t x615 = 535U;
	uint8_t x616 = UINT8_MAX;
	uint64_t t149 = 15996297005LLU;

    t149 = ((x613/x614)/(x615|x616));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x617 = 100454224806166LLU;
	static volatile int8_t x619 = -1;
	int64_t x620 = INT64_MIN;

    t150 = ((x617/x618)/(x619|x620));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x621 = UINT16_MAX;
	static uint32_t x622 = 35311944U;
	int8_t x623 = -1;
	int64_t x624 = -5LL;
	int64_t t151 = -194932LL;

    t151 = ((x621/x622)/(x623|x624));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x627 = UINT16_MAX;
	uint16_t x628 = 3960U;
	int32_t t152 = -2075;

    t152 = ((x625/x626)/(x627|x628));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x629 = INT8_MIN;
	int32_t x630 = INT32_MIN;
	uint32_t x631 = 921589037U;
	int32_t x632 = INT32_MAX;
	volatile uint32_t t153 = 174161U;

    t153 = ((x629/x630)/(x631|x632));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x634 = INT32_MAX;
	volatile int32_t t154 = 95;

    t154 = ((x633/x634)/(x635|x636));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x637 = -1;
	volatile int32_t x638 = INT32_MIN;
	int8_t x640 = INT8_MAX;
	volatile uint32_t t155 = 0U;

    t155 = ((x637/x638)/(x639|x640));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x641 = 21U;
	int32_t x643 = -252;
	uint64_t x644 = UINT64_MAX;

    t156 = ((x641/x642)/(x643|x644));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x645 = 1;
	uint8_t x646 = UINT8_MAX;
	int8_t x647 = INT8_MAX;
	int8_t x648 = INT8_MIN;
	volatile int32_t t157 = 3317;

    t157 = ((x645/x646)/(x647|x648));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x650 = 44;
	volatile uint8_t x651 = 24U;
	uint64_t x652 = 183858LLU;
	static volatile uint64_t t158 = 31047229LLU;

    t158 = ((x649/x650)/(x651|x652));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x653 = 1U;
	int32_t x654 = 922;
	int32_t x655 = -15;
	int64_t x656 = 994647281LL;

    t159 = ((x653/x654)/(x655|x656));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x657 = 25U;
	static uint64_t x658 = UINT64_MAX;
	int16_t x659 = INT16_MIN;
	static volatile int16_t x660 = INT16_MIN;

    t160 = ((x657/x658)/(x659|x660));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x661 = -1;
	int64_t x663 = -1LL;
	int32_t x664 = 436900;
	static int64_t t161 = 1LL;

    t161 = ((x661/x662)/(x663|x664));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x665 = INT64_MIN;
	int32_t x667 = -576;
	static volatile uint16_t x668 = 206U;

    t162 = ((x665/x666)/(x667|x668));

    if (t162 != 3821145LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x669 = -1;
	int16_t x671 = INT16_MAX;
	int16_t x672 = INT16_MIN;
	volatile int32_t t163 = -1630336;

    t163 = ((x669/x670)/(x671|x672));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x673 = -1;
	uint64_t x674 = 10150073023093LLU;
	static uint32_t x675 = 4U;
	uint32_t x676 = 6U;
	volatile uint64_t t164 = 1LLU;

    t164 = ((x673/x674)/(x675|x676));

    if (t164 != 302900LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x677 = UINT8_MAX;
	uint16_t x678 = UINT16_MAX;
	static volatile int64_t x680 = -1LL;

    t165 = ((x677/x678)/(x679|x680));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x681 = 7U;
	int64_t x683 = -13204998726853LL;
	int8_t x684 = INT8_MIN;
	volatile int64_t t166 = -67121574328912263LL;

    t166 = ((x681/x682)/(x683|x684));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x685 = 202419U;
	int16_t x686 = INT16_MAX;
	int64_t x687 = INT64_MIN;
	int32_t x688 = INT32_MIN;

    t167 = ((x685/x686)/(x687|x688));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x689 = UINT32_MAX;
	int16_t x690 = INT16_MIN;
	volatile int64_t x691 = INT64_MIN;

    t168 = ((x689/x690)/(x691|x692));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x693 = INT16_MIN;
	static volatile uint32_t x694 = UINT32_MAX;
	static volatile uint16_t x695 = 0U;
	int16_t x696 = -1;

    t169 = ((x693/x694)/(x695|x696));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x697 = INT16_MIN;
	int64_t x698 = -1LL;
	int64_t x700 = INT64_MIN;

    t170 = ((x697/x698)/(x699|x700));

    if (t170 != -32768LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x701 = INT8_MIN;
	volatile uint16_t x703 = 1990U;
	static int32_t t171 = -299927;

    t171 = ((x701/x702)/(x703|x704));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x705 = INT32_MAX;
	static uint16_t x706 = 1074U;
	volatile int32_t x707 = INT32_MIN;
	int16_t x708 = -1;
	volatile int32_t t172 = 60;

    t172 = ((x705/x706)/(x707|x708));

    if (t172 != -1999519) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x713 = 2725774750LL;
	uint8_t x714 = UINT8_MAX;
	int32_t x715 = 525595079;
	uint8_t x716 = UINT8_MAX;
	static int64_t t173 = -40606LL;

    t173 = ((x713/x714)/(x715|x716));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x717 = INT8_MIN;
	int64_t x718 = INT64_MAX;
	static volatile int8_t x719 = INT8_MAX;
	int64_t x720 = INT64_MIN;
	static int64_t t174 = -1LL;

    t174 = ((x717/x718)/(x719|x720));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x721 = INT32_MAX;
	volatile int16_t x722 = -1;
	int16_t x723 = INT16_MIN;
	volatile uint32_t x724 = 0U;
	static uint32_t t175 = 1155299873U;

    t175 = ((x721/x722)/(x723|x724));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x725 = INT8_MAX;
	uint32_t x726 = 521442U;
	int64_t x727 = INT64_MIN;
	int64_t x728 = -1LL;

    t176 = ((x725/x726)/(x727|x728));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x729 = 25U;
	int64_t x730 = INT64_MIN;
	volatile int32_t x731 = -1;
	uint16_t x732 = 2U;
	int64_t t177 = 1LL;

    t177 = ((x729/x730)/(x731|x732));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x734 = 5922454915671LL;
	int8_t x736 = 6;
	volatile int64_t t178 = -15520139573124LL;

    t178 = ((x733/x734)/(x735|x736));

    if (t178 != -666LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x737 = INT32_MIN;
	int8_t x738 = INT8_MIN;
	volatile uint32_t x739 = UINT32_MAX;
	volatile uint64_t t179 = 45391449499687LLU;

    t179 = ((x737/x738)/(x739|x740));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x741 = 32;
	volatile int64_t x742 = 11333398302LL;
	static uint64_t x743 = 40953991LLU;
	volatile int64_t x744 = -255949439624495600LL;

    t180 = ((x741/x742)/(x743|x744));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x745 = INT32_MAX;
	uint64_t x746 = 924013LLU;
	static int16_t x747 = -2957;
	uint64_t t181 = 773269145917LLU;

    t181 = ((x745/x746)/(x747|x748));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x749 = INT16_MIN;
	volatile int16_t x750 = INT16_MIN;
	static uint8_t x752 = 5U;
	volatile int64_t t182 = -132884251057264LL;

    t182 = ((x749/x750)/(x751|x752));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x753 = INT16_MIN;
	volatile int32_t x754 = INT32_MIN;
	int16_t x755 = INT16_MIN;
	uint64_t t183 = 3581330691615029567LLU;

    t183 = ((x753/x754)/(x755|x756));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x757 = 19340071LLU;
	uint32_t x759 = UINT32_MAX;
	uint32_t x760 = UINT32_MAX;
	uint64_t t184 = 7808LLU;

    t184 = ((x757/x758)/(x759|x760));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x765 = 74497033LL;
	volatile int64_t x768 = INT64_MIN;
	volatile uint64_t t185 = 99214LLU;

    t185 = ((x765/x766)/(x767|x768));

    if (t185 != 1LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x769 = UINT32_MAX;
	static uint32_t x771 = 127099802U;
	static int32_t x772 = INT32_MIN;

    t186 = ((x769/x770)/(x771|x772));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x774 = 54097309;
	uint16_t x775 = 7498U;
	volatile int32_t t187 = 2120712;

    t187 = ((x773/x774)/(x775|x776));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x777 = 90U;
	int32_t x779 = -1;
	int16_t x780 = INT16_MIN;
	int32_t t188 = 27546;

    t188 = ((x777/x778)/(x779|x780));

    if (t188 != 3) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x781 = 11165;
	int32_t x782 = INT32_MIN;
	volatile int64_t x783 = INT64_MIN;
	int8_t x784 = INT8_MAX;
	static volatile int64_t t189 = 26694810924LL;

    t189 = ((x781/x782)/(x783|x784));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x785 = 0;
	uint32_t x786 = 3U;
	int8_t x787 = -1;
	int16_t x788 = INT16_MIN;
	uint32_t t190 = 149U;

    t190 = ((x785/x786)/(x787|x788));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x794 = 1188U;
	static uint32_t x795 = UINT32_MAX;
	int16_t x796 = INT16_MIN;
	int64_t t191 = -74389LL;

    t191 = ((x793/x794)/(x795|x796));

    if (t191 != -760LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x797 = UINT32_MAX;
	static int64_t x798 = -1LL;
	int32_t x800 = -2011978;
	int64_t t192 = 877LL;

    t192 = ((x797/x798)/(x799|x800));

    if (t192 != 4294967295LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x801 = -39;
	volatile int32_t x802 = -525085684;
	static int16_t x803 = INT16_MIN;
	int16_t x804 = -1;
	volatile int32_t t193 = -1378120;

    t193 = ((x801/x802)/(x803|x804));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x805 = 249;
	int64_t x806 = -144104679195224890LL;
	int32_t x808 = INT32_MAX;
	int64_t t194 = -5LL;

    t194 = ((x805/x806)/(x807|x808));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x811 = UINT16_MAX;
	int32_t t195 = -2594;

    t195 = ((x809/x810)/(x811|x812));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x813 = -1;
	int32_t x814 = INT32_MIN;
	static int64_t x815 = INT64_MIN;
	int8_t x816 = 0;
	static volatile int64_t t196 = -43161LL;

    t196 = ((x813/x814)/(x815|x816));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x817 = 0U;
	int64_t x818 = INT64_MAX;
	int8_t x819 = INT8_MIN;
	int32_t x820 = INT32_MIN;
	int64_t t197 = 32022564615513LL;

    t197 = ((x817/x818)/(x819|x820));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x822 = -1;
	volatile int8_t x823 = INT8_MAX;
	uint8_t x824 = 0U;
	int32_t t198 = 44;

    t198 = ((x821/x822)/(x823|x824));

    if (t198 != 40591) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x825 = UINT32_MAX;
	int64_t x826 = -494676513868510407LL;
	volatile uint16_t x828 = 640U;
	volatile int64_t t199 = 1LL;

    t199 = ((x825/x826)/(x827|x828));

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

