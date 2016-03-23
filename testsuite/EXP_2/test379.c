
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

int32_t x1 = INT32_MIN;
uint64_t x3 = 2090404820153804LLU;
static uint64_t x11 = 207190664LLU;
static uint32_t x12 = UINT32_MAX;
int8_t x15 = -3;
volatile int16_t x17 = INT16_MAX;
int64_t x18 = -13425LL;
volatile int64_t t3 = -41442LL;
int16_t x23 = INT16_MIN;
volatile int32_t t5 = 0;
uint64_t x39 = UINT64_MAX;
volatile uint64_t t7 = 578183LLU;
int16_t x41 = 3093;
uint8_t x44 = UINT8_MAX;
int8_t x45 = 0;
static uint16_t x65 = 135U;
int16_t x66 = 8;
int8_t x67 = INT8_MIN;
uint8_t x70 = UINT8_MAX;
int16_t x72 = INT16_MAX;
static volatile int32_t t19 = -92;
volatile int8_t x94 = INT8_MIN;
uint8_t x101 = 11U;
uint32_t x110 = 1008225U;
static volatile uint64_t t27 = 308LLU;
int32_t x133 = -1762386;
int16_t x136 = INT16_MAX;
int32_t x146 = INT32_MAX;
volatile uint64_t t32 = 115513512618618088LLU;
volatile int8_t x150 = -1;
volatile int64_t t34 = -11590279515692LL;
int32_t x159 = INT32_MAX;
int32_t x170 = INT32_MAX;
int8_t x183 = 0;
uint64_t x184 = UINT64_MAX;
uint64_t x188 = UINT64_MAX;
int64_t x192 = -1LL;
uint64_t x197 = UINT64_MAX;
int64_t x200 = INT64_MIN;
volatile uint64_t t44 = 1943283LLU;
int64_t x203 = -14298548LL;
int16_t x207 = -1;
int16_t x210 = 1;
static volatile uint64_t t47 = 25062288065608LLU;
int8_t x219 = INT8_MIN;
int64_t x220 = -35714859142360846LL;
uint64_t t49 = 68568621291LLU;
int64_t x221 = 2827982972LL;
uint8_t x223 = 1U;
int16_t x233 = -7751;
int32_t x242 = -127;
int8_t x245 = -1;
uint8_t x248 = 1U;
volatile int64_t x250 = INT64_MAX;
static int64_t x256 = -1LL;
int64_t t56 = -86499529640272403LL;
int16_t x257 = -1;
static uint16_t x260 = UINT16_MAX;
volatile int32_t x261 = INT32_MAX;
uint64_t x267 = UINT64_MAX;
volatile int8_t x272 = INT8_MIN;
uint16_t x280 = 580U;
volatile uint32_t x289 = 279U;
int32_t x299 = 133958;
int32_t x300 = INT32_MAX;
static int32_t x302 = -1;
volatile int64_t x303 = INT64_MIN;
int64_t x307 = -196826LL;
int64_t x308 = -1LL;
static int8_t x309 = -1;
volatile int32_t t71 = -3791684;
int8_t x322 = INT8_MIN;
volatile uint32_t t72 = 416403961U;
uint16_t x331 = 11U;
static uint16_t x341 = UINT16_MAX;
uint64_t x346 = 14658200129075LLU;
int32_t x351 = INT32_MAX;
volatile uint32_t x356 = UINT32_MAX;
static volatile int32_t t80 = -655;
volatile int32_t t81 = 902084;
uint8_t x365 = 1U;
volatile uint16_t x374 = 4U;
uint8_t x382 = 3U;
int32_t x388 = -2350147;
volatile int16_t x397 = INT16_MIN;
volatile int64_t x406 = -1LL;
int64_t x408 = INT64_MIN;
static uint8_t x413 = 6U;
int8_t x418 = INT8_MIN;
static int32_t x424 = INT32_MIN;
int64_t x426 = INT64_MIN;
uint8_t x434 = 1U;
int64_t x445 = -48697LL;
int8_t x446 = INT8_MIN;
uint32_t x452 = UINT32_MAX;
static int16_t x454 = -1;
int16_t x460 = INT16_MAX;
int32_t x468 = INT32_MIN;
uint32_t x480 = 976622590U;
int64_t x481 = INT64_MIN;
uint64_t x483 = 1LLU;
static volatile int8_t x484 = -20;
int8_t x489 = INT8_MIN;
static int8_t x490 = INT8_MIN;
int64_t x492 = -1LL;
static int64_t t108 = -856677516223978LL;
static uint64_t x503 = 7LLU;
static volatile uint16_t x518 = UINT16_MAX;
uint16_t x520 = 5034U;
volatile int32_t t113 = 153;
int32_t x522 = INT32_MAX;
int16_t x527 = INT16_MIN;
int8_t x550 = INT8_MIN;
uint64_t x558 = 2335581674068861140LLU;
int64_t t121 = 28984018750669LL;
static volatile int64_t t123 = -3255384993LL;
uint8_t x590 = UINT8_MAX;
int32_t t127 = -39126330;
int8_t x597 = INT8_MIN;
int8_t x598 = -1;
int8_t x599 = INT8_MAX;
uint16_t x600 = UINT16_MAX;
static volatile int16_t x607 = 630;
volatile int64_t t130 = -19204887LL;
int16_t x612 = -2;
int32_t t131 = 29387;
uint8_t x615 = 67U;
static int32_t x619 = INT32_MIN;
int16_t x620 = -1;
volatile int8_t x622 = INT8_MIN;
uint32_t x627 = UINT32_MAX;
uint32_t x631 = UINT32_MAX;
int8_t x633 = INT8_MAX;
volatile int64_t x638 = -1LL;
volatile int64_t x644 = -3333LL;
int8_t x645 = INT8_MAX;
static int32_t x648 = INT32_MIN;
int16_t x651 = INT16_MIN;
int8_t x652 = -1;
volatile int8_t x658 = INT8_MIN;
int64_t t143 = -2987960560149119LL;
uint64_t t144 = 9089028907LLU;
uint64_t x670 = 12044841374710LLU;
int32_t x671 = 0;
volatile int16_t x679 = INT16_MIN;
int32_t x681 = -26;
uint64_t x683 = 13945503347720LLU;
static int64_t x687 = 2090LL;
int64_t x688 = INT64_MIN;
uint64_t x698 = 4483727030335204LLU;
int16_t x701 = 18;
int8_t x702 = INT8_MAX;
int16_t x705 = 5145;
volatile int64_t t153 = 9297091LL;
static uint64_t x710 = 529716306LLU;
int64_t x713 = INT64_MIN;
int32_t x714 = INT32_MIN;
int8_t x717 = 0;
uint32_t x720 = 0U;
int32_t x723 = INT32_MIN;
static int32_t x724 = INT32_MAX;
static volatile uint32_t x727 = 50111741U;
uint32_t t158 = 6896693U;
static volatile int64_t t162 = -84LL;
uint32_t x749 = 15U;
volatile int32_t x767 = INT32_MAX;
volatile int8_t x769 = -1;
volatile uint16_t x776 = 22U;
uint16_t x778 = 28062U;
volatile int64_t x783 = -973730LL;
static volatile int64_t x792 = INT64_MAX;
int32_t t173 = -35691076;
static int32_t x809 = -1;
int64_t x816 = INT64_MIN;
volatile int32_t x821 = INT32_MIN;
uint16_t x824 = 20U;
int32_t x826 = INT32_MIN;
uint32_t x833 = UINT32_MAX;
int16_t x843 = -20;
int64_t t181 = 0LL;
uint8_t x853 = 0U;
volatile int16_t x863 = -10653;
int64_t x869 = -27LL;
uint64_t x873 = 966342153606955LLU;
volatile int32_t t190 = -60232226;
uint64_t x898 = 8233966137487963921LLU;
uint16_t x900 = 4445U;
int16_t x901 = INT16_MIN;
int8_t x902 = 0;
uint64_t x908 = 4289601510924150LLU;
uint64_t t196 = 456LLU;
volatile int64_t x912 = INT64_MIN;
uint16_t x916 = UINT16_MAX;
uint64_t t198 = 113020745LLU;
uint32_t t199 = 9U;


void f0(void) {
    	volatile int16_t x2 = INT16_MAX;
	int32_t x4 = -388;
	static volatile uint64_t t0 = 163702908639874LLU;

    t0 = ((x1^(x2-x3))+x4);

    if (t0 != 2090404392634543LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = INT16_MIN;
	volatile int32_t x10 = 2;
	uint64_t t1 = 599986244LLU;

    t1 = ((x9^(x10-x11))+x12);

    if (t1 != 4502127993LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x13 = 23;
	int16_t x14 = INT16_MAX;
	int16_t x16 = -2;
	int32_t t2 = 937850912;

    t2 = ((x13^(x14-x15))+x16);

    if (t2 != 32787) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x19 = 117;
	int32_t x20 = INT32_MIN;

    t3 = ((x17^(x18-x19))+x20);

    if (t3 != -2147502875LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x21 = UINT32_MAX;
	uint64_t x22 = 10389514900LLU;
	int64_t x24 = INT64_MAX;
	uint64_t t4 = 2LLU;

    t4 = ((x21^(x22-x23))+x24);

    if (t4 != 9223372047940064618LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x29 = INT16_MIN;
	uint16_t x30 = UINT16_MAX;
	int32_t x31 = 1795695;
	int8_t x32 = INT8_MIN;

    t5 = ((x29^(x30-x31))+x32);

    if (t5 != 1710352) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x33 = UINT8_MAX;
	uint32_t x34 = 332U;
	static volatile uint32_t x35 = UINT32_MAX;
	volatile uint16_t x36 = 7553U;
	volatile uint32_t t6 = 60179970U;

    t6 = ((x33^(x34-x35))+x36);

    if (t6 != 7987U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x37 = 37;
	int16_t x38 = INT16_MIN;
	int8_t x40 = 1;

    t7 = ((x37^(x38-x39))+x40);

    if (t7 != 18446744073709518885LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x42 = INT8_MIN;
	uint32_t x43 = 77561U;
	static uint32_t t8 = 78U;

    t8 = ((x41^(x42-x43))+x44);

    if (t8 != 4294892945U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x46 = INT8_MAX;
	static uint16_t x47 = UINT16_MAX;
	uint16_t x48 = 1383U;
	volatile int32_t t9 = 467;

    t9 = ((x45^(x46-x47))+x48);

    if (t9 != -64025) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x49 = 759U;
	int16_t x50 = INT16_MIN;
	uint8_t x51 = 16U;
	uint64_t x52 = UINT64_MAX;
	uint64_t t10 = 18267LLU;

    t10 = ((x49^(x50-x51))+x52);

    if (t10 != 4294933766LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x53 = 1417667101U;
	int32_t x54 = INT32_MIN;
	int8_t x55 = -18;
	static int32_t x56 = INT32_MIN;
	volatile uint32_t t11 = 51U;

    t11 = ((x53^(x54-x55))+x56);

    if (t11 != 1417667087U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x57 = INT32_MIN;
	static uint64_t x58 = 0LLU;
	uint64_t x59 = 157LLU;
	int8_t x60 = 50;
	uint64_t t12 = 121046530050472430LLU;

    t12 = ((x57^(x58-x59))+x60);

    if (t12 != 2147483541LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x61 = 802U;
	static uint64_t x62 = 475LLU;
	static int16_t x63 = -2;
	int16_t x64 = -1;
	uint64_t t13 = 1466172991321LLU;

    t13 = ((x61^(x62-x63))+x64);

    if (t13 != 766LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x68 = 13U;
	int32_t t14 = 0;

    t14 = ((x65^(x66-x67))+x68);

    if (t14 != 28) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = -109;
	int64_t x71 = -40799LL;
	int64_t t15 = 114LL;

    t15 = ((x69^(x70-x71))+x72);

    if (t15 != -8244LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x77 = INT64_MIN;
	uint64_t x78 = 16244814LLU;
	static uint16_t x79 = 6531U;
	uint8_t x80 = UINT8_MAX;
	uint64_t t16 = 1730660584778818LLU;

    t16 = ((x77^(x78-x79))+x80);

    if (t16 != 9223372036871014346LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x81 = 30;
	static volatile int64_t x82 = INT64_MIN;
	static uint64_t x83 = 261LLU;
	volatile int64_t x84 = -408732223247864175LL;
	volatile uint64_t t17 = 208031586018LLU;

    t17 = ((x81^(x82-x83))+x84);

    if (t17 != 8814639813606911350LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x85 = -1;
	int64_t x86 = INT64_MAX;
	static volatile uint64_t x87 = 774853256504896LLU;
	uint16_t x88 = UINT16_MAX;
	volatile uint64_t t18 = 8310640LLU;

    t18 = ((x85^(x86-x87))+x88);

    if (t18 != 9224146890111346239LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x89 = 1;
	static int8_t x90 = INT8_MIN;
	uint16_t x91 = UINT16_MAX;
	volatile int8_t x92 = 39;

    t19 = ((x89^(x90-x91))+x92);

    if (t19 != -65625) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x93 = 0;
	volatile int8_t x95 = -28;
	int8_t x96 = INT8_MIN;
	static int32_t t20 = 1;

    t20 = ((x93^(x94-x95))+x96);

    if (t20 != -228) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x97 = 29422U;
	volatile uint16_t x98 = 22512U;
	int16_t x99 = 37;
	static int8_t x100 = -1;
	int32_t t21 = 1148;

    t21 = ((x97^(x98-x99))+x100);

    if (t21 != 9508) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x102 = INT8_MAX;
	volatile int8_t x103 = INT8_MIN;
	uint64_t x104 = 16396915LLU;
	volatile uint64_t t22 = 3460368190107610056LLU;

    t22 = ((x101^(x102-x103))+x104);

    if (t22 != 16397159LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x105 = 6U;
	int32_t x106 = INT32_MIN;
	uint64_t x107 = 3780986080126775644LLU;
	int32_t x108 = 165788636;
	static volatile uint64_t t23 = 1289337059LLU;

    t23 = ((x105^(x106-x107))+x108);

    if (t23 != 14665757991601080958LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x109 = 14LLU;
	static volatile uint8_t x111 = 0U;
	volatile int64_t x112 = 44767461095387202LL;
	uint64_t t24 = 1118480191092091LLU;

    t24 = ((x109^(x110-x111))+x112);

    if (t24 != 44767461096395441LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x113 = 1;
	int16_t x114 = INT16_MAX;
	int8_t x115 = INT8_MAX;
	int8_t x116 = -52;
	int32_t t25 = -18144;

    t25 = ((x113^(x114-x115))+x116);

    if (t25 != 32589) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x117 = 1;
	uint64_t x118 = UINT64_MAX;
	static volatile int16_t x119 = 1;
	static int32_t x120 = -44153;
	uint64_t t26 = 3009931955947660931LLU;

    t26 = ((x117^(x118-x119))+x120);

    if (t26 != 18446744073709507462LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x121 = -1LL;
	static volatile int64_t x122 = 389002150835486768LL;
	uint64_t x123 = 32774LLU;
	int32_t x124 = INT32_MAX;

    t27 = ((x121^(x122-x123))+x124);

    if (t27 != 18057741925021581268LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x125 = 33543665349LL;
	int32_t x126 = INT32_MAX;
	static uint16_t x127 = 3U;
	static uint16_t x128 = 274U;
	volatile int64_t t28 = 87486LL;

    t28 = ((x125^(x126-x127))+x128);

    if (t28 != 33028328011LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x129 = 10U;
	uint16_t x130 = UINT16_MAX;
	int16_t x131 = 3;
	uint8_t x132 = 39U;
	volatile uint32_t t29 = 39249375U;

    t29 = ((x129^(x130-x131))+x132);

    if (t29 != 65565U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x134 = 11;
	uint64_t x135 = UINT64_MAX;
	static uint64_t t30 = 10LLU;

    t30 = ((x133^(x134-x135))+x136);

    if (t30 != 18446744073707821985LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x137 = INT8_MAX;
	static int64_t x138 = 63762743LL;
	static volatile int8_t x139 = -1;
	volatile uint16_t x140 = 3580U;
	int64_t t31 = -1539582LL;

    t31 = ((x137^(x138-x139))+x140);

    if (t31 != 63766339LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x145 = 218921357LLU;
	static int64_t x147 = -1LL;
	int64_t x148 = INT64_MAX;

    t32 = ((x145^(x146-x147))+x148);

    if (t32 != 9223372039221180812LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x149 = -1;
	uint64_t x151 = 29519133709LLU;
	volatile uint16_t x152 = 6359U;
	uint64_t t33 = 2070568721721425LLU;

    t33 = ((x149^(x150-x151))+x152);

    if (t33 != 29519140068LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x153 = 318U;
	static uint32_t x154 = 576U;
	int64_t x155 = INT64_MAX;
	volatile int64_t x156 = INT64_MAX;

    t34 = ((x153^(x154-x155))+x156);

    if (t34 != 894LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x157 = INT16_MAX;
	volatile int16_t x158 = INT16_MAX;
	int32_t x160 = -1;
	static int32_t t35 = 32;

    t35 = ((x157^(x158-x159))+x160);

    if (t35 != -2147418114) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x161 = 26046LLU;
	int32_t x162 = INT32_MAX;
	uint8_t x163 = 1U;
	uint8_t x164 = 94U;
	static uint64_t t36 = 947507748029973LLU;

    t36 = ((x161^(x162-x163))+x164);

    if (t36 != 2147457694LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x169 = UINT16_MAX;
	uint64_t x171 = 12347497343656584LLU;
	int16_t x172 = INT16_MIN;
	volatile uint64_t t37 = 283004016621LLU;

    t37 = ((x169^(x170-x171))+x172);

    if (t37 != 18434396578513363592LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x173 = -1;
	uint8_t x174 = 1U;
	volatile int16_t x175 = INT16_MIN;
	static volatile int8_t x176 = INT8_MIN;
	static volatile int32_t t38 = 7704;

    t38 = ((x173^(x174-x175))+x176);

    if (t38 != -32898) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x177 = 153007104892742521LLU;
	uint32_t x178 = UINT32_MAX;
	int32_t x179 = INT32_MIN;
	int32_t x180 = -13;
	static volatile uint64_t t39 = 2LLU;

    t39 = ((x177^(x178-x179))+x180);

    if (t39 != 153007105186583673LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x181 = 11928398742614150LL;
	int16_t x182 = -68;
	volatile uint64_t t40 = 305805355937554LLU;

    t40 = ((x181^(x182-x183))+x184);

    if (t40 != 18434815674966937401LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x185 = -1;
	static uint64_t x186 = UINT64_MAX;
	int8_t x187 = -6;
	uint64_t t41 = 2022822973935437529LLU;

    t41 = ((x185^(x186-x187))+x188);

    if (t41 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x189 = UINT64_MAX;
	uint16_t x190 = 3965U;
	uint16_t x191 = UINT16_MAX;
	static volatile uint64_t t42 = 3LLU;

    t42 = ((x189^(x190-x191))+x192);

    if (t42 != 61568LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x193 = 1491U;
	volatile int8_t x194 = INT8_MAX;
	uint8_t x195 = 0U;
	static int32_t x196 = INT32_MIN;
	int32_t t43 = -22127;

    t43 = ((x193^(x194-x195))+x196);

    if (t43 != -2147482196) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x198 = INT32_MAX;
	int32_t x199 = INT32_MAX;

    t44 = ((x197^(x198-x199))+x200);

    if (t44 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x201 = 67LLU;
	volatile int16_t x202 = 95;
	int64_t x204 = 38891248797372LL;
	static volatile uint64_t t45 = 210940980774535LLU;

    t45 = ((x201^(x202-x203))+x204);

    if (t45 != 38891263096076LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x205 = INT16_MIN;
	uint8_t x206 = UINT8_MAX;
	uint16_t x208 = UINT16_MAX;
	int32_t t46 = 78;

    t46 = ((x205^(x206-x207))+x208);

    if (t46 != 33023) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x209 = -43;
	static uint64_t x211 = 14850669148LLU;
	int32_t x212 = INT32_MAX;

    t47 = ((x209^(x210-x211))+x212);

    if (t47 != 16998152815LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x213 = -9;
	uint8_t x214 = 52U;
	uint8_t x215 = 6U;
	int64_t x216 = 13235373LL;
	volatile int64_t t48 = 11612056LL;

    t48 = ((x213^(x214-x215))+x216);

    if (t48 != 13235334LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x217 = INT8_MIN;
	volatile uint64_t x218 = 38429992LLU;

    t49 = ((x217^(x218-x219))+x220);

    if (t49 != 18411029214528760602LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x222 = UINT8_MAX;
	uint16_t x224 = 1861U;
	int64_t t50 = -76557672947405LL;

    t50 = ((x221^(x222-x223))+x224);

    if (t50 != 2827984839LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x229 = 955723990865LL;
	int16_t x230 = INT16_MIN;
	volatile uint64_t x231 = 10LLU;
	uint16_t x232 = 3U;
	volatile uint64_t t51 = 10141LLU;

    t51 = ((x229^(x230-x231))+x232);

    if (t51 != 18446743117985593514LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x234 = -1;
	volatile int16_t x235 = 3;
	static int16_t x236 = 789;
	volatile int32_t t52 = 752495;

    t52 = ((x233^(x234-x235))+x236);

    if (t52 != 8538) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x241 = 3078010507870220LLU;
	volatile uint16_t x243 = 1U;
	int16_t x244 = -1;
	static volatile uint64_t t53 = 65869071901430LLU;

    t53 = ((x241^(x242-x243))+x244);

    if (t53 != 18443666063201681291LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x246 = -4;
	uint8_t x247 = 98U;
	volatile int32_t t54 = -493343100;

    t54 = ((x245^(x246-x247))+x248);

    if (t54 != 102) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x249 = 457267473031LLU;
	int64_t x251 = 0LL;
	volatile int16_t x252 = INT16_MIN;
	volatile uint64_t t55 = 4270117823039497LLU;

    t55 = ((x249^(x250-x251))+x252);

    if (t55 != 9223371579587270008LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x253 = -92134236;
	volatile int16_t x254 = -1;
	uint32_t x255 = UINT32_MAX;

    t56 = ((x253^(x254-x255))+x256);

    if (t56 != 4202833059LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x258 = 1LLU;
	int64_t x259 = INT64_MIN;
	volatile uint64_t t57 = 5527230829762LLU;

    t57 = ((x257^(x258-x259))+x260);

    if (t57 != 9223372036854841341LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x262 = 11U;
	uint8_t x263 = 9U;
	uint32_t x264 = UINT32_MAX;
	uint32_t t58 = 5236558U;

    t58 = ((x261^(x262-x263))+x264);

    if (t58 != 2147483644U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x265 = -1;
	volatile int16_t x266 = 1797;
	static uint16_t x268 = 26U;
	static volatile uint64_t t59 = 140LLU;

    t59 = ((x265^(x266-x267))+x268);

    if (t59 != 18446744073709549843LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x269 = UINT8_MAX;
	uint8_t x270 = UINT8_MAX;
	static volatile uint16_t x271 = 14U;
	int32_t t60 = 27830907;

    t60 = ((x269^(x270-x271))+x272);

    if (t60 != -114) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x273 = 8;
	int32_t x274 = -1;
	uint16_t x275 = 1958U;
	uint32_t x276 = UINT32_MAX;
	static uint32_t t61 = 11578U;

    t61 = ((x273^(x274-x275))+x276);

    if (t61 != 4294965328U) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x277 = INT8_MIN;
	uint16_t x278 = 1U;
	int16_t x279 = INT16_MIN;
	volatile int32_t t62 = 2840;

    t62 = ((x277^(x278-x279))+x280);

    if (t62 != -32315) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x281 = 0;
	int64_t x282 = INT64_MIN;
	static int64_t x283 = INT64_MIN;
	volatile int16_t x284 = -1;
	int64_t t63 = 64161895522160930LL;

    t63 = ((x281^(x282-x283))+x284);

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x285 = UINT64_MAX;
	int32_t x286 = INT32_MIN;
	int32_t x287 = INT32_MIN;
	int16_t x288 = INT16_MIN;
	uint64_t t64 = 106389329309839LLU;

    t64 = ((x285^(x286-x287))+x288);

    if (t64 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x290 = 57;
	int8_t x291 = INT8_MIN;
	int64_t x292 = INT64_MIN;
	volatile int64_t t65 = -190211258983594054LL;

    t65 = ((x289^(x290-x291))+x292);

    if (t65 != -9223372036854775378LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x293 = INT8_MIN;
	static int64_t x294 = INT64_MIN;
	volatile int16_t x295 = INT16_MIN;
	int64_t x296 = -1013246LL;
	static volatile int64_t t66 = 23LL;

    t66 = ((x293^(x294-x295))+x296);

    if (t66 != 9223372036853729666LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int8_t x297 = 2;
	int16_t x298 = -1;
	volatile int32_t t67 = -3;

    t67 = ((x297^(x298-x299))+x300);

    if (t67 != 2147349690) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x301 = 14U;
	int16_t x304 = -1;
	int64_t t68 = 619404861684957LL;

    t68 = ((x301^(x302-x303))+x304);

    if (t68 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x305 = 879U;
	uint32_t x306 = 33354728U;
	int64_t t69 = -308792762205504LL;

    t69 = ((x305^(x306-x307))+x308);

    if (t69 != 33552300LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x310 = -92912362865LL;
	uint32_t x311 = UINT32_MAX;
	static int32_t x312 = INT32_MIN;
	int64_t t70 = -45766011550868997LL;

    t70 = ((x309^(x310-x311))+x312);

    if (t70 != 95059846511LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x313 = 1U;
	static int32_t x314 = INT32_MIN;
	int8_t x315 = INT8_MIN;
	int16_t x316 = 763;

    t71 = ((x313^(x314-x315))+x316);

    if (t71 != -2147482756) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x321 = INT8_MIN;
	static volatile uint32_t x323 = 0U;
	int8_t x324 = INT8_MIN;

    t72 = ((x321^(x322-x323))+x324);

    if (t72 != 4294967168U) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x329 = UINT8_MAX;
	int32_t x330 = INT32_MAX;
	int16_t x332 = -1;
	static volatile int32_t t73 = 61;

    t73 = ((x329^(x330-x331))+x332);

    if (t73 != 2147483402) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x333 = 0U;
	int32_t x334 = INT32_MIN;
	int64_t x335 = INT64_MIN;
	volatile uint16_t x336 = 226U;
	volatile int64_t t74 = 3LL;

    t74 = ((x333^(x334-x335))+x336);

    if (t74 != 9223372034707292386LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x337 = 0U;
	volatile int8_t x338 = -1;
	static uint64_t x339 = 84369215543840LLU;
	uint8_t x340 = 1U;
	volatile uint64_t t75 = 3007447912008271614LLU;

    t75 = ((x337^(x338-x339))+x340);

    if (t75 != 18446659704494007776LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x342 = INT16_MIN;
	uint16_t x343 = UINT16_MAX;
	int8_t x344 = INT8_MIN;
	volatile int32_t t76 = 32120109;

    t76 = ((x341^(x342-x343))+x344);

    if (t76 != -98434) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x345 = 764;
	int32_t x347 = 9504;
	int32_t x348 = INT32_MAX;
	volatile uint64_t t77 = 38LLU;

    t77 = ((x345^(x346-x347))+x348);

    if (t77 != 14660347603950LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x349 = -1;
	int64_t x350 = -47582832767LL;
	int64_t x352 = 2LL;
	int64_t t78 = -3843093865027197800LL;

    t78 = ((x349^(x350-x351))+x352);

    if (t78 != 49730316415LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x353 = 63855092U;
	static volatile int8_t x354 = INT8_MAX;
	int8_t x355 = -1;
	static volatile uint32_t t79 = 974955U;

    t79 = ((x353^(x354-x355))+x356);

    if (t79 != 63854963U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x357 = -1;
	int32_t x358 = 41;
	int32_t x359 = 1;
	volatile int8_t x360 = -2;

    t80 = ((x357^(x358-x359))+x360);

    if (t80 != -43) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x361 = -1;
	int32_t x362 = -80371;
	int8_t x363 = INT8_MIN;
	static int32_t x364 = INT32_MIN;

    t81 = ((x361^(x362-x363))+x364);

    if (t81 != -2147403406) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x366 = UINT32_MAX;
	int64_t x367 = -3219996LL;
	static uint32_t x368 = UINT32_MAX;
	volatile int64_t t82 = -2927831LL;

    t82 = ((x365^(x366-x367))+x368);

    if (t82 != 8593154585LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x369 = -4004892LL;
	volatile uint16_t x370 = UINT16_MAX;
	static int64_t x371 = INT64_MAX;
	static int32_t x372 = -1;
	int64_t t83 = -530087560205624LL;

    t83 = ((x369^(x370-x371))+x372);

    if (t83 != 9223372036850836451LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x373 = INT64_MIN;
	uint16_t x375 = 894U;
	volatile uint8_t x376 = 99U;
	int64_t t84 = -40LL;

    t84 = ((x373^(x374-x375))+x376);

    if (t84 != 9223372036854775017LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x381 = UINT64_MAX;
	uint32_t x383 = 71459U;
	volatile uint32_t x384 = 4248967U;
	uint64_t t85 = 92697080LLU;

    t85 = ((x381^(x382-x383))+x384);

    if (t85 != 18446744069418904742LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x385 = INT16_MIN;
	uint8_t x386 = 0U;
	int16_t x387 = INT16_MIN;
	volatile int32_t t86 = 23;

    t86 = ((x385^(x386-x387))+x388);

    if (t86 != -2415683) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x389 = INT64_MIN;
	static int32_t x390 = INT32_MAX;
	int64_t x391 = 39942671LL;
	int32_t x392 = -1;
	static int64_t t87 = 1944966425077106LL;

    t87 = ((x389^(x390-x391))+x392);

    if (t87 != -9223372034747234833LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x393 = -1;
	int16_t x394 = INT16_MAX;
	uint32_t x395 = 1518154U;
	uint16_t x396 = UINT16_MAX;
	static volatile uint32_t t88 = 15U;

    t88 = ((x393^(x394-x395))+x396);

    if (t88 != 1550921U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x398 = 233LLU;
	uint32_t x399 = 2535U;
	uint16_t x400 = 189U;
	uint64_t t89 = 3621LLU;

    t89 = ((x397^(x398-x399))+x400);

    if (t89 != 30655LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x401 = -1;
	static uint64_t x402 = 1076423LLU;
	int64_t x403 = INT64_MIN;
	int8_t x404 = -1;
	uint64_t t90 = 794525643LLU;

    t90 = ((x401^(x402-x403))+x404);

    if (t90 != 9223372036853699383LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x405 = -1;
	static uint32_t x407 = 367970836U;
	static int64_t t91 = 17062283628683588LL;

    t91 = ((x405^(x406-x407))+x408);

    if (t91 != -9223372036486804972LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x409 = 19U;
	static volatile uint8_t x410 = 1U;
	uint32_t x411 = 64290211U;
	int8_t x412 = -1;
	static uint32_t t92 = 340U;

    t92 = ((x409^(x410-x411))+x412);

    if (t92 != 4230677068U) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x414 = -41;
	int8_t x415 = -1;
	int8_t x416 = -9;
	int32_t t93 = -2738612;

    t93 = ((x413^(x414-x415))+x416);

    if (t93 != -43) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x417 = -1LL;
	int64_t x419 = -2LL;
	uint64_t x420 = 130668250706583LLU;
	volatile uint64_t t94 = 15278LLU;

    t94 = ((x417^(x418-x419))+x420);

    if (t94 != 130668250706708LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x421 = UINT16_MAX;
	int32_t x422 = -1;
	int16_t x423 = INT16_MIN;
	int32_t t95 = -818875;

    t95 = ((x421^(x422-x423))+x424);

    if (t95 != -2147450880) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x425 = 23U;
	int16_t x427 = -1;
	volatile int8_t x428 = 7;
	int64_t t96 = -71611971419LL;

    t96 = ((x425^(x426-x427))+x428);

    if (t96 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x433 = UINT32_MAX;
	uint8_t x435 = 101U;
	uint8_t x436 = 1U;
	uint32_t t97 = 3384U;

    t97 = ((x433^(x434-x435))+x436);

    if (t97 != 100U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x437 = -5;
	int64_t x438 = -1LL;
	uint32_t x439 = 5129U;
	int64_t x440 = 3597800999359392397LL;
	volatile int64_t t98 = -884LL;

    t98 = ((x437^(x438-x439))+x440);

    if (t98 != 3597800999359397530LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x447 = -264637076LL;
	int32_t x448 = -43905;
	volatile int64_t t99 = 17400186286714LL;

    t99 = ((x445^(x446-x447))+x448);

    if (t99 != -264724398LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x449 = 5;
	uint64_t x450 = 126469052795740LLU;
	int16_t x451 = INT16_MIN;
	volatile uint64_t t100 = 6LLU;

    t100 = ((x449^(x450-x451))+x452);

    if (t100 != 126473347795800LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x453 = INT32_MIN;
	int16_t x455 = INT16_MAX;
	int16_t x456 = INT16_MIN;
	int32_t t101 = -1;

    t101 = ((x453^(x454-x455))+x456);

    if (t101 != 2147418112) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x457 = -63705080149875LL;
	int32_t x458 = -1;
	volatile uint64_t x459 = UINT64_MAX;
	volatile uint64_t t102 = 649213LLU;

    t102 = ((x457^(x458-x459))+x460);

    if (t102 != 18446680368629434508LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x465 = UINT8_MAX;
	static uint64_t x466 = 336256158LLU;
	int32_t x467 = 57172;
	volatile uint64_t t103 = 2457947638295665LLU;

    t103 = ((x465^(x466-x467))+x468);

    if (t103 != 18446744071898267061LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x473 = -1;
	int8_t x474 = 17;
	int16_t x475 = INT16_MIN;
	volatile int8_t x476 = -27;
	int32_t t104 = 781880;

    t104 = ((x473^(x474-x475))+x476);

    if (t104 != -32813) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x477 = 10;
	uint8_t x478 = 79U;
	volatile int16_t x479 = -1;
	uint32_t t105 = 13698888U;

    t105 = ((x477^(x478-x479))+x480);

    if (t105 != 976622680U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x482 = 1249706479493LL;
	volatile uint64_t t106 = 11277993LLU;

    t106 = ((x481^(x482-x483))+x484);

    if (t106 != 9223373286561255280LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x485 = -1;
	volatile uint32_t x486 = 7U;
	static volatile int8_t x487 = INT8_MIN;
	uint32_t x488 = UINT32_MAX;
	volatile uint32_t t107 = 839636U;

    t107 = ((x485^(x486-x487))+x488);

    if (t107 != 4294967159U) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x491 = INT16_MIN;

    t108 = ((x489^(x490-x491))+x492);

    if (t108 != -32769LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x493 = UINT64_MAX;
	uint32_t x494 = UINT32_MAX;
	int64_t x495 = INT64_MAX;
	static uint32_t x496 = 14U;
	volatile uint64_t t109 = 206393310127759LLU;

    t109 = ((x493^(x494-x495))+x496);

    if (t109 != 9223372032559808525LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x501 = -1;
	static int32_t x502 = INT32_MIN;
	uint16_t x504 = 25U;
	static uint64_t t110 = 130617942LLU;

    t110 = ((x501^(x502-x503))+x504);

    if (t110 != 2147483679LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x505 = 1964;
	int8_t x506 = -12;
	int8_t x507 = -2;
	uint16_t x508 = 665U;
	int32_t t111 = 1708;

    t111 = ((x505^(x506-x507))+x508);

    if (t111 != -1293) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x513 = UINT32_MAX;
	int8_t x514 = INT8_MIN;
	volatile int32_t x515 = 27;
	static int16_t x516 = INT16_MIN;
	uint32_t t112 = 409478U;

    t112 = ((x513^(x514-x515))+x516);

    if (t112 != 4294934682U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x517 = -15942;
	int8_t x519 = 14;

    t113 = ((x517^(x518-x519))+x520);

    if (t113 != -44555) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x521 = 63931;
	static uint32_t x523 = UINT32_MAX;
	int16_t x524 = -1647;
	uint32_t t114 = 7U;

    t114 = ((x521^(x522-x523))+x524);

    if (t114 != 2147545932U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x525 = INT16_MAX;
	volatile uint32_t x526 = 15987U;
	volatile int16_t x528 = -1;
	uint32_t t115 = 15657U;

    t115 = ((x525^(x526-x527))+x528);

    if (t115 != 49547U) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x533 = -1LL;
	int64_t x534 = INT64_MIN;
	int32_t x535 = INT32_MIN;
	static volatile int32_t x536 = INT32_MAX;
	int64_t t116 = 25032860131LL;

    t116 = ((x533^(x534-x535))+x536);

    if (t116 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x537 = UINT64_MAX;
	uint32_t x538 = 1744922U;
	int64_t x539 = INT64_MAX;
	int32_t x540 = -6083;
	volatile uint64_t t117 = 8005LLU;

    t117 = ((x537^(x538-x539))+x540);

    if (t117 != 9223372036853024801LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x541 = INT8_MAX;
	uint8_t x542 = UINT8_MAX;
	static int16_t x543 = -1655;
	volatile int16_t x544 = 0;
	volatile int32_t t118 = 298;

    t118 = ((x541^(x542-x543))+x544);

    if (t118 != 1801) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x549 = -1LL;
	int16_t x551 = INT16_MIN;
	int8_t x552 = INT8_MIN;
	volatile int64_t t119 = -187701294766438233LL;

    t119 = ((x549^(x550-x551))+x552);

    if (t119 != -32769LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x557 = -1;
	static int8_t x559 = -1;
	volatile int16_t x560 = INT16_MIN;
	volatile uint64_t t120 = 16364953LLU;

    t120 = ((x557^(x558-x559))+x560);

    if (t120 != 16111162399640657706LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x561 = -1;
	volatile uint16_t x562 = 17918U;
	int8_t x563 = -1;
	int64_t x564 = INT64_MAX;

    t121 = ((x561^(x562-x563))+x564);

    if (t121 != 9223372036854757887LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x569 = INT64_MIN;
	static int32_t x570 = -4;
	uint8_t x571 = 125U;
	volatile int64_t x572 = -1LL;
	volatile int64_t t122 = 0LL;

    t122 = ((x569^(x570-x571))+x572);

    if (t122 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x573 = 0;
	int64_t x574 = INT64_MAX;
	volatile int16_t x575 = INT16_MAX;
	int8_t x576 = -1;

    t123 = ((x573^(x574-x575))+x576);

    if (t123 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x577 = INT64_MIN;
	int16_t x578 = INT16_MIN;
	volatile uint16_t x579 = 841U;
	int16_t x580 = INT16_MIN;
	int64_t t124 = 2528135478LL;

    t124 = ((x577^(x578-x579))+x580);

    if (t124 != 9223372036854709431LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x581 = INT64_MAX;
	static uint64_t x582 = 991140LLU;
	volatile int32_t x583 = -1;
	static uint16_t x584 = 99U;
	uint64_t t125 = 1945221351013LLU;

    t125 = ((x581^(x582-x583))+x584);

    if (t125 != 9223372036853784765LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x585 = -5;
	static volatile int8_t x586 = INT8_MIN;
	volatile int32_t x587 = INT32_MIN;
	uint16_t x588 = 99U;
	static volatile int32_t t126 = 54;

    t126 = ((x585^(x586-x587))+x588);

    if (t126 != -2147483426) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x589 = -926;
	int32_t x591 = 1568607;
	static int16_t x592 = INT16_MAX;

    t127 = ((x589^(x590-x591))+x592);

    if (t127 != 1600961) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int32_t t128 = -9;

    t128 = ((x597^(x598-x599))+x600);

    if (t128 != 65535) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x601 = -1;
	int8_t x602 = -1;
	volatile uint32_t x603 = 147675U;
	int32_t x604 = INT32_MIN;
	volatile uint32_t t129 = 208274600U;

    t129 = ((x601^(x602-x603))+x604);

    if (t129 != 2147631323U) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x605 = INT16_MAX;
	volatile int16_t x606 = INT16_MIN;
	static int64_t x608 = INT64_MAX;

    t130 = ((x605^(x606-x607))+x608);

    if (t130 != 9223372036854710900LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int16_t x609 = -374;
	int32_t x610 = INT32_MIN;
	int8_t x611 = INT8_MIN;

    t131 = ((x609^(x610-x611))+x612);

    if (t131 != 2147483144) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x613 = INT64_MAX;
	int16_t x614 = 13120;
	static int32_t x616 = INT32_MIN;
	int64_t t132 = 1226LL;

    t132 = ((x613^(x614-x615))+x616);

    if (t132 != 9223372034707279106LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x617 = 6054U;
	volatile uint64_t x618 = UINT64_MAX;
	uint64_t t133 = 47LLU;

    t133 = ((x617^(x618-x619))+x620);

    if (t133 != 2147477592LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x621 = INT32_MAX;
	int16_t x623 = INT16_MIN;
	int32_t x624 = INT32_MIN;
	volatile int32_t t134 = -871830226;

    t134 = ((x621^(x622-x623))+x624);

    if (t134 != -32641) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x625 = 0LLU;
	int8_t x626 = -1;
	int8_t x628 = 12;
	static uint64_t t135 = 13736886LLU;

    t135 = ((x625^(x626-x627))+x628);

    if (t135 != 12LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x629 = -14734420360LL;
	volatile int8_t x630 = INT8_MAX;
	int32_t x632 = INT32_MAX;
	volatile int64_t t136 = -33476959234876LL;

    t136 = ((x629^(x630-x631))+x632);

    if (t136 != -12586936585LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint8_t x634 = 15U;
	volatile uint8_t x635 = 32U;
	volatile uint16_t x636 = 15845U;
	int32_t t137 = 51;

    t137 = ((x633^(x634-x635))+x636);

    if (t137 != 15733) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int8_t x637 = INT8_MIN;
	uint64_t x639 = 96714430263LLU;
	int16_t x640 = INT16_MIN;
	uint64_t t138 = 7422LLU;

    t138 = ((x637^(x638-x639))+x640);

    if (t138 != 96714397512LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x641 = -2;
	static int32_t x642 = INT32_MIN;
	static int64_t x643 = INT64_MIN;
	volatile int64_t t139 = 3473055LL;

    t139 = ((x641^(x642-x643))+x644);

    if (t139 != -9223372034707295495LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x646 = 0;
	volatile int8_t x647 = INT8_MIN;
	int32_t t140 = 2;

    t140 = ((x645^(x646-x647))+x648);

    if (t140 != -2147483393) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x649 = INT16_MIN;
	uint32_t x650 = UINT32_MAX;
	volatile uint32_t t141 = 62745U;

    t141 = ((x649^(x650-x651))+x652);

    if (t141 != 4294967294U) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x657 = INT32_MIN;
	volatile int32_t x659 = INT32_MIN;
	static int16_t x660 = INT16_MIN;
	int32_t t142 = 1644;

    t142 = ((x657^(x658-x659))+x660);

    if (t142 != -32896) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x661 = INT64_MIN;
	uint16_t x662 = 1025U;
	static uint8_t x663 = 6U;
	int64_t x664 = 10233LL;

    t143 = ((x661^(x662-x663))+x664);

    if (t143 != -9223372036854764556LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x665 = UINT8_MAX;
	static int32_t x666 = -1;
	int16_t x667 = INT16_MAX;
	static uint64_t x668 = 708204562021625814LLU;

    t144 = ((x665^(x666-x667))+x668);

    if (t144 != 708204562021593301LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x669 = -1LL;
	uint32_t x672 = 179U;
	uint64_t t145 = 250982LLU;

    t145 = ((x669^(x670-x671))+x672);

    if (t145 != 18446732028868177084LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x673 = INT8_MIN;
	volatile int8_t x674 = INT8_MAX;
	int32_t x675 = INT32_MAX;
	volatile int32_t x676 = -46507083;
	volatile int32_t t146 = -127793448;

    t146 = ((x673^(x674-x675))+x676);

    if (t146 != 2100976309) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x677 = INT16_MIN;
	volatile uint64_t x678 = 846343037LLU;
	int16_t x680 = -1;
	static volatile uint64_t t147 = 3567516448745757LLU;

    t147 = ((x677^(x678-x679))+x680);

    if (t147 != 18446744072863165308LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x682 = INT64_MIN;
	volatile int64_t x684 = INT64_MIN;
	uint64_t t148 = 3846006LLU;

    t148 = ((x681^(x682-x683))+x684);

    if (t148 != 13945503347742LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x685 = UINT8_MAX;
	uint32_t x686 = 4599379U;
	volatile int64_t t149 = 57146911438624596LL;

    t149 = ((x685^(x686-x687))+x688);

    if (t149 != -9223372036850178346LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x693 = UINT32_MAX;
	volatile uint16_t x694 = 30509U;
	static uint64_t x695 = 67405576973LLU;
	int8_t x696 = -1;
	static volatile uint64_t t150 = 4347997091805568188LLU;

    t150 = ((x693^(x694-x695))+x696);

    if (t150 != 18446744007971111902LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x697 = 2485;
	int64_t x699 = -1LL;
	uint8_t x700 = UINT8_MAX;
	uint64_t t151 = 456133910558001LLU;

    t151 = ((x697^(x698-x699))+x700);

    if (t151 != 4483727030337615LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x703 = UINT32_MAX;
	int16_t x704 = -3871;
	volatile uint32_t t152 = 6400017U;

    t152 = ((x701^(x702-x703))+x704);

    if (t152 != 4294963571U) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x706 = INT64_MAX;
	static int16_t x707 = 40;
	static int64_t x708 = INT64_MIN;

    t153 = ((x705^(x706-x707))+x708);

    if (t153 != -5170LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x709 = 1333;
	volatile int64_t x711 = 841724LL;
	int64_t x712 = INT64_MIN;
	static uint64_t t154 = 1LLU;

    t154 = ((x709^(x710-x711))+x712);

    if (t154 != 9223372037383649635LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x715 = INT8_MIN;
	int32_t x716 = INT32_MIN;
	static int64_t t155 = -24570456LL;

    t155 = ((x713^(x714-x715))+x716);

    if (t155 != 9223372032559808640LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x718 = -1;
	int32_t x719 = INT32_MIN;
	volatile uint32_t t156 = 249U;

    t156 = ((x717^(x718-x719))+x720);

    if (t156 != 2147483647U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x721 = INT32_MAX;
	int64_t x722 = -1LL;
	static volatile int64_t t157 = -259LL;

    t157 = ((x721^(x722-x723))+x724);

    if (t157 != 2147483647LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x725 = INT32_MIN;
	int16_t x726 = INT16_MIN;
	volatile int16_t x728 = -1;

    t158 = ((x725^(x726-x727))+x728);

    if (t158 != 2097339138U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x729 = UINT64_MAX;
	volatile int64_t x730 = -94064LL;
	int64_t x731 = INT64_MIN;
	int8_t x732 = INT8_MIN;
	static uint64_t t159 = 88LLU;

    t159 = ((x729^(x730-x731))+x732);

    if (t159 != 9223372036854869743LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x733 = INT8_MAX;
	static volatile int32_t x734 = INT32_MAX;
	uint32_t x735 = 62809495U;
	volatile int16_t x736 = INT16_MAX;
	uint32_t t160 = 1352395U;

    t160 = ((x733^(x734-x735))+x736);

    if (t160 != 2084706838U) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x737 = INT64_MAX;
	static uint64_t x738 = 8618LLU;
	int32_t x739 = -61967014;
	volatile int64_t x740 = INT64_MAX;
	uint64_t t161 = 12572239LLU;

    t161 = ((x737^(x738-x739))+x740);

    if (t161 != 18446744073647575982LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x741 = -2;
	int64_t x742 = 33449896319853321LL;
	static volatile int16_t x743 = INT16_MAX;
	int64_t x744 = INT64_MAX;

    t162 = ((x741^(x742-x743))+x744);

    if (t162 != 9189922140534955251LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x750 = 26593116;
	int8_t x751 = INT8_MIN;
	int64_t x752 = -1LL;
	static volatile int64_t t163 = -116232220125131LL;

    t163 = ((x749^(x750-x751))+x752);

    if (t163 != 26593234LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x761 = INT16_MIN;
	static int8_t x762 = -13;
	int16_t x763 = -1428;
	int16_t x764 = 7176;
	volatile int32_t t164 = -1252;

    t164 = ((x761^(x762-x763))+x764);

    if (t164 != -24177) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x765 = 11732222U;
	volatile int64_t x766 = -1LL;
	uint32_t x768 = 308554U;
	static volatile int64_t t165 = 437771743442LL;

    t165 = ((x765^(x766-x767))+x768);

    if (t165 != -2135442872LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x770 = 3U;
	volatile int8_t x771 = INT8_MIN;
	int32_t x772 = -36;
	uint32_t t166 = 25U;

    t166 = ((x769^(x770-x771))+x772);

    if (t166 != 4294967128U) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint32_t x773 = 2710654U;
	uint8_t x774 = 45U;
	uint32_t x775 = 52591U;
	volatile uint32_t t167 = 2806506U;

    t167 = ((x773^(x774-x775))+x776);

    if (t167 != 4292243158U) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x777 = -1;
	int16_t x779 = INT16_MAX;
	static volatile uint16_t x780 = 1U;
	volatile int32_t t168 = 14627;

    t168 = ((x777^(x778-x779))+x780);

    if (t168 != 4705) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x781 = UINT8_MAX;
	int16_t x782 = INT16_MIN;
	int16_t x784 = INT16_MIN;
	volatile int64_t t169 = -1LL;

    t169 = ((x781^(x782-x783))+x784);

    if (t169 != 908125LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x785 = UINT8_MAX;
	static volatile uint8_t x786 = 49U;
	int8_t x787 = INT8_MAX;
	uint16_t x788 = 15884U;
	volatile int32_t t170 = 6250;

    t170 = ((x785^(x786-x787))+x788);

    if (t170 != 15705) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x789 = INT32_MIN;
	uint64_t x790 = 75382111647358LLU;
	uint32_t x791 = 574U;
	volatile uint64_t t171 = 31807LLU;

    t171 = ((x789^(x790-x791))+x792);

    if (t171 != 9223296654876914751LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x793 = 0U;
	uint8_t x794 = 18U;
	int32_t x795 = INT32_MAX;
	int8_t x796 = INT8_MAX;
	volatile int32_t t172 = -3;

    t172 = ((x793^(x794-x795))+x796);

    if (t172 != -2147483502) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x805 = -774;
	int16_t x806 = -1;
	uint16_t x807 = 6U;
	uint16_t x808 = 24189U;

    t173 = ((x805^(x806-x807))+x808);

    if (t173 != 24960) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x810 = UINT32_MAX;
	int8_t x811 = INT8_MIN;
	int8_t x812 = INT8_MIN;
	volatile uint32_t t174 = 320159U;

    t174 = ((x809^(x810-x811))+x812);

    if (t174 != 4294967040U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x813 = 4U;
	uint32_t x814 = UINT32_MAX;
	static int8_t x815 = -4;
	static int64_t t175 = 1LL;

    t175 = ((x813^(x814-x815))+x816);

    if (t175 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x817 = 87;
	volatile int32_t x818 = INT32_MAX;
	int64_t x819 = INT64_MAX;
	uint16_t x820 = UINT16_MAX;
	volatile int64_t t176 = -607LL;

    t176 = ((x817^(x818-x819))+x820);

    if (t176 != -9223372034707226538LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x822 = 232U;
	uint16_t x823 = UINT16_MAX;
	int32_t t177 = 671;

    t177 = ((x821^(x822-x823))+x824);

    if (t177 != 2147418365) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x825 = INT16_MIN;
	int16_t x827 = -3;
	uint16_t x828 = 509U;
	volatile int32_t t178 = -1;

    t178 = ((x825^(x826-x827))+x828);

    if (t178 != 2147451392) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x829 = 10655;
	int16_t x830 = INT16_MIN;
	uint32_t x831 = 1890862751U;
	int16_t x832 = INT16_MIN;
	volatile uint32_t t179 = 1U;

    t179 = ((x829^(x830-x831))+x832);

    if (t179 != 2404028670U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x834 = 213933;
	uint16_t x835 = 9U;
	uint16_t x836 = 87U;
	volatile uint32_t t180 = 28563757U;

    t180 = ((x833^(x834-x835))+x836);

    if (t180 != 4294753458U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x841 = -1LL;
	int16_t x842 = INT16_MAX;
	uint8_t x844 = UINT8_MAX;

    t181 = ((x841^(x842-x843))+x844);

    if (t181 != -32533LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint8_t x845 = 6U;
	static int64_t x846 = -1LL;
	int8_t x847 = 0;
	uint32_t x848 = 361841U;
	volatile int64_t t182 = -213755887913754LL;

    t182 = ((x845^(x846-x847))+x848);

    if (t182 != 361834LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x849 = INT16_MIN;
	volatile uint8_t x850 = 2U;
	int8_t x851 = 1;
	uint32_t x852 = UINT32_MAX;
	uint32_t t183 = 5U;

    t183 = ((x849^(x850-x851))+x852);

    if (t183 != 4294934528U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x854 = 0;
	int64_t x855 = -1LL;
	volatile uint16_t x856 = 354U;
	volatile int64_t t184 = 235100756587290LL;

    t184 = ((x853^(x854-x855))+x856);

    if (t184 != 355LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x857 = UINT16_MAX;
	static uint16_t x858 = 0U;
	uint16_t x859 = UINT16_MAX;
	volatile uint64_t x860 = 7447419065060960LLU;
	uint64_t t185 = 97LLU;

    t185 = ((x857^(x858-x859))+x860);

    if (t185 != 7447419065060958LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x861 = INT64_MAX;
	int16_t x862 = INT16_MAX;
	uint16_t x864 = 2458U;
	volatile int64_t t186 = -4LL;

    t186 = ((x861^(x862-x863))+x864);

    if (t186 != 9223372036854734845LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x870 = -67602LL;
	volatile int16_t x871 = INT16_MAX;
	uint8_t x872 = 100U;
	volatile int64_t t187 = -3561165LL;

    t187 = ((x869^(x870-x871))+x872);

    if (t187 != 100462LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x874 = 61;
	static uint32_t x875 = UINT32_MAX;
	int16_t x876 = 326;
	static uint64_t t188 = 501980566049900LLU;

    t188 = ((x873^(x874-x875))+x876);

    if (t188 != 966342153607259LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x877 = INT8_MIN;
	uint16_t x878 = 7U;
	static int32_t x879 = 0;
	volatile int32_t x880 = 5966550;
	volatile int32_t t189 = -2846;

    t189 = ((x877^(x878-x879))+x880);

    if (t189 != 5966429) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x881 = INT32_MAX;
	int16_t x882 = INT16_MIN;
	volatile uint16_t x883 = 1U;
	int8_t x884 = -1;

    t190 = ((x881^(x882-x883))+x884);

    if (t190 != -2147450881) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x885 = INT32_MIN;
	int8_t x886 = -1;
	uint16_t x887 = 5414U;
	int16_t x888 = INT16_MIN;
	volatile int32_t t191 = -601;

    t191 = ((x885^(x886-x887))+x888);

    if (t191 != 2147445465) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x889 = -1;
	int16_t x890 = 10570;
	static volatile uint32_t x891 = 982390U;
	static volatile uint64_t x892 = 871190388735LLU;
	volatile uint64_t t192 = 40616861254LLU;

    t192 = ((x889^(x890-x891))+x892);

    if (t192 != 871191360554LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x893 = INT8_MAX;
	uint32_t x894 = 474U;
	uint64_t x895 = 2923LLU;
	static volatile uint64_t x896 = 73LLU;
	uint64_t t193 = 83908429LLU;

    t193 = ((x893^(x894-x895))+x896);

    if (t193 != 18446744073709549145LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x897 = -16120;
	volatile uint16_t x899 = UINT16_MAX;
	uint64_t t194 = 19905890LLU;

    t194 = ((x897^(x898-x899))+x900);

    if (t194 != 10212777936221669239LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x903 = UINT64_MAX;
	int32_t x904 = INT32_MIN;
	volatile uint64_t t195 = 2755627693801129559LLU;

    t195 = ((x901^(x902-x903))+x904);

    if (t195 != 18446744071562035201LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x905 = UINT8_MAX;
	int16_t x906 = -1;
	uint16_t x907 = 99U;

    t196 = ((x905^(x906-x907))+x908);

    if (t196 != 4289601510923993LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x909 = -782618078744LL;
	static volatile uint64_t x910 = 558744863346192320LLU;
	int16_t x911 = INT16_MIN;
	uint64_t t197 = 254770LLU;

    t197 = ((x909^(x910-x911))+x912);

    if (t197 != 8664626855938145832LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x913 = INT16_MAX;
	uint64_t x914 = UINT64_MAX;
	volatile int32_t x915 = INT32_MIN;

    t198 = ((x913^(x914-x915))+x916);

    if (t198 != 2147516415LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x917 = UINT8_MAX;
	int8_t x918 = INT8_MIN;
	uint32_t x919 = 5860U;
	static int8_t x920 = -1;

    t199 = ((x917^(x918-x919))+x920);

    if (t199 != 4294961250U) { NG(); } else { ; }
	
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

