
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

uint64_t x10 = 10786LLU;
volatile int64_t x11 = INT64_MIN;
volatile uint64_t t1 = 10LLU;
int8_t x14 = INT8_MIN;
uint64_t x20 = 1LLU;
static uint32_t x29 = 21U;
int32_t x36 = -161400;
volatile int64_t x41 = INT64_MIN;
volatile int64_t x45 = 31LL;
int64_t x57 = INT64_MAX;
volatile int8_t x63 = INT8_MIN;
uint8_t x64 = 1U;
volatile int16_t x65 = -1713;
volatile uint32_t x68 = UINT32_MAX;
volatile int8_t x76 = -1;
int64_t t13 = -495LL;
uint64_t x84 = 34378LLU;
int8_t x85 = INT8_MIN;
uint32_t x88 = 8386U;
uint32_t t18 = 109U;
volatile int64_t t19 = -43947433317LL;
int8_t x111 = -1;
volatile int64_t t21 = -7633478540074LL;
int8_t x117 = INT8_MIN;
int64_t t25 = -52417116079837658LL;
static volatile int8_t x153 = INT8_MIN;
uint64_t x162 = UINT64_MAX;
int64_t x163 = -1LL;
int16_t x189 = INT16_MIN;
uint8_t x191 = UINT8_MAX;
int64_t t32 = 2477356232435LL;
static int64_t x241 = -106179490358956418LL;
uint64_t t36 = 22216626LLU;
static int64_t x252 = -1042445377LL;
static int16_t x256 = 19;
volatile int8_t x263 = 3;
volatile int64_t t40 = 11LL;
int8_t x270 = INT8_MIN;
int8_t x279 = -5;
int16_t x283 = 1;
static int16_t x289 = INT16_MAX;
volatile uint8_t x294 = UINT8_MAX;
int64_t x295 = -1LL;
int32_t x296 = -235539724;
int64_t t46 = 140LL;
static int64_t x297 = INT64_MIN;
int64_t x299 = -19987003794LL;
volatile int8_t x300 = -1;
int32_t t48 = 1001534;
uint32_t x309 = 143U;
uint8_t x320 = UINT8_MAX;
int32_t t51 = 4793339;
volatile uint64_t t52 = 39677264869LLU;
int16_t x327 = 255;
int32_t x353 = -184;
volatile int32_t t62 = -1;
volatile int16_t x400 = 0;
volatile uint8_t x402 = UINT8_MAX;
int16_t x422 = INT16_MIN;
static uint32_t x423 = 1U;
uint16_t x430 = 314U;
int64_t x442 = -1LL;
volatile uint32_t x446 = 1396221U;
static int16_t x448 = 2124;
static int16_t x456 = -654;
int32_t x461 = 0;
static int32_t x462 = INT32_MIN;
uint64_t t74 = 28887552LLU;
uint16_t x470 = 434U;
int32_t x479 = -1;
int16_t x480 = INT16_MAX;
static int32_t x481 = -218661;
volatile int8_t x493 = 5;
static int8_t x497 = -1;
int8_t x516 = -13;
volatile int64_t x518 = 155334389868LL;
int8_t x529 = INT8_MAX;
int32_t x540 = INT32_MAX;
volatile uint64_t t88 = 4051785822716LLU;
volatile uint32_t x543 = UINT32_MAX;
uint32_t t89 = 166925U;
int8_t x545 = INT8_MIN;
volatile int8_t x553 = INT8_MIN;
uint8_t x557 = 86U;
static int8_t x558 = INT8_MIN;
int16_t x568 = INT16_MAX;
uint32_t t93 = 22563U;
int32_t x571 = 1696;
int32_t t95 = 6;
uint64_t t97 = 4285LLU;
volatile int64_t x610 = 491216LL;
volatile uint64_t t100 = 7LLU;
uint8_t x638 = 15U;
uint8_t x647 = 73U;
int8_t x649 = 1;
uint16_t x650 = 325U;
int8_t x655 = 6;
uint32_t x656 = 31364U;
volatile uint32_t t107 = 3U;
int8_t x657 = 11;
static volatile int64_t t108 = -2956677602922137482LL;
static uint32_t x663 = 9966U;
uint64_t x666 = 547280215070445871LLU;
static int16_t x673 = INT16_MIN;
int64_t x697 = -1LL;
uint16_t x702 = 255U;
volatile int32_t t114 = 43205137;
int16_t x706 = INT16_MAX;
volatile uint8_t x710 = UINT8_MAX;
volatile int32_t x712 = -156488;
uint8_t x724 = 2U;
int8_t x735 = -1;
volatile int16_t x736 = INT16_MAX;
volatile uint8_t x753 = 31U;
static volatile int32_t t122 = -273330809;
int16_t x760 = INT16_MAX;
volatile int8_t x764 = INT8_MIN;
uint8_t x766 = UINT8_MAX;
int64_t x771 = -1LL;
volatile uint32_t x787 = 1U;
static uint16_t x789 = UINT16_MAX;
volatile int8_t x799 = 1;
static int64_t t132 = -2398334821717LL;
static uint8_t x801 = 0U;
uint64_t t134 = 3383124061315632LLU;
int64_t x818 = INT64_MIN;
static volatile int64_t t135 = -738054217495426214LL;
int16_t x821 = INT16_MIN;
static int32_t x824 = INT32_MIN;
volatile int32_t x845 = INT32_MAX;
volatile int8_t x846 = -21;
volatile uint32_t x849 = UINT32_MAX;
static int16_t x858 = INT16_MAX;
uint8_t x870 = 0U;
static uint64_t x874 = UINT64_MAX;
volatile uint8_t x879 = 6U;
int8_t x886 = -1;
static int32_t x888 = INT32_MIN;
int16_t x889 = INT16_MIN;
uint64_t x902 = 191294294224116284LLU;
static uint32_t x907 = 6403U;
int8_t x913 = -3;
static int32_t x915 = INT32_MIN;
volatile int32_t t152 = 397;
int16_t x923 = -1;
int16_t x925 = INT16_MIN;
uint16_t x927 = UINT16_MAX;
uint64_t x935 = UINT64_MAX;
int32_t x939 = -1;
static int8_t x958 = INT8_MIN;
volatile int64_t t159 = -1421566303744550LL;
uint8_t x966 = 0U;
uint16_t x967 = UINT16_MAX;
static volatile uint8_t x968 = 1U;
int32_t t160 = -44244124;
int8_t x984 = -10;
volatile uint64_t t162 = 2219541594516491323LLU;
static uint64_t t163 = 1573457300LLU;
int16_t x991 = INT16_MIN;
uint32_t t165 = 13738176U;
static int16_t x1011 = -1;
uint16_t x1019 = UINT16_MAX;
static int16_t x1023 = INT16_MAX;
int16_t x1024 = 4868;
uint8_t x1031 = 6U;
uint16_t x1032 = UINT16_MAX;
int32_t t170 = -83743;
volatile uint32_t x1058 = 8U;
static uint32_t t171 = 31U;
volatile uint32_t x1061 = 248U;
int32_t x1064 = -1;
static int64_t x1065 = 47439525099520LL;
static volatile uint32_t t174 = 46U;
int64_t t175 = 12LL;
volatile int16_t x1082 = 375;
uint32_t x1084 = 5U;
volatile int8_t x1088 = INT8_MIN;
volatile int32_t x1089 = INT32_MAX;
volatile int16_t x1093 = INT16_MAX;
static int16_t x1108 = INT16_MIN;
static volatile uint32_t t182 = 550854U;
static int8_t x1125 = INT8_MIN;
int8_t x1126 = -1;
int8_t x1127 = INT8_MIN;
uint8_t x1130 = UINT8_MAX;
static int32_t t185 = 105677468;
int32_t x1137 = INT32_MIN;
int8_t x1146 = INT8_MIN;
volatile int32_t x1162 = -1;
volatile uint64_t x1168 = UINT64_MAX;
volatile uint64_t t189 = 194921947692354LLU;
volatile uint8_t x1172 = 39U;
static int64_t x1179 = -1LL;
volatile int8_t x1185 = 1;
int16_t x1189 = -1602;
uint32_t x1191 = 4U;
static uint32_t t194 = 18769549U;
int8_t x1196 = 0;
static int32_t x1198 = INT32_MAX;
int16_t x1200 = -14;
volatile int64_t t196 = 335841101071076052LL;
uint64_t x1201 = 64LLU;
uint8_t x1203 = UINT8_MAX;
uint64_t x1211 = 122058LLU;


void f0(void) {
    	int16_t x5 = INT16_MAX;
	volatile int64_t x6 = 171412LL;
	int32_t x7 = -1;
	static uint8_t x8 = 3U;
	volatile int64_t t0 = -169216728LL;

    t0 = ((x5|(x6*x7))*x8);

    if (t0 != -491523LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x9 = UINT32_MAX;
	volatile int8_t x12 = 2;

    t1 = ((x9|(x10*x11))*x12);

    if (t1 != 8589934590LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = INT8_MIN;
	volatile int64_t x15 = 1146LL;
	volatile uint16_t x16 = 6U;
	volatile int64_t t2 = 6957259287LL;

    t2 = ((x13|(x14*x15))*x16);

    if (t2 != -768LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint32_t x17 = 58311404U;
	uint16_t x18 = 21384U;
	int64_t x19 = -240229LL;
	volatile uint64_t t3 = 2807358LLU;

    t3 = ((x17|(x18*x19))*x20);

    if (t3 != 18446744068609276924LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x30 = 0U;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = INT16_MIN;
	uint64_t t4 = 21317LLU;

    t4 = ((x29|(x30*x31))*x32);

    if (t4 != 18446744073708863488LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x33 = UINT32_MAX;
	uint8_t x34 = 87U;
	static volatile uint64_t x35 = 3LLU;
	static volatile uint64_t t5 = 11064462LLU;

    t5 = ((x33|(x34*x35))*x36);

    if (t5 != 18446050865988138616LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x37 = -1;
	volatile uint64_t x38 = 1708793418219119684LLU;
	uint8_t x39 = 30U;
	uint16_t x40 = UINT16_MAX;
	uint64_t t6 = 13509971230770LLU;

    t6 = ((x37|(x38*x39))*x40);

    if (t6 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x42 = 1;
	int64_t x43 = -10327LL;
	uint8_t x44 = 60U;
	volatile int64_t t7 = 497577813167102774LL;

    t7 = ((x41|(x42*x43))*x44);

    if (t7 != -619620LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x46 = INT8_MIN;
	volatile uint16_t x47 = 0U;
	uint16_t x48 = 1433U;
	volatile int64_t t8 = 0LL;

    t8 = ((x45|(x46*x47))*x48);

    if (t8 != 44423LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x58 = -12;
	int64_t x59 = -142410992466928796LL;
	volatile int8_t x60 = -1;
	volatile int64_t t9 = 1LL;

    t9 = ((x57|(x58*x59))*x60);

    if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x61 = INT8_MIN;
	int32_t x62 = 95;
	int32_t t10 = -344514090;

    t10 = ((x61|(x62*x63))*x64);

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x66 = 18106;
	int8_t x67 = 50;
	static uint32_t t11 = 544487538U;

    t11 = ((x65|(x66*x67))*x68);

    if (t11 != 1697U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x73 = 22668;
	static volatile int8_t x74 = 14;
	uint8_t x75 = 115U;
	int32_t t12 = -4;

    t12 = ((x73|(x74*x75))*x76);

    if (t12 != -24270) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x77 = 13107;
	static int8_t x78 = INT8_MIN;
	volatile int64_t x79 = -227LL;
	static int32_t x80 = INT32_MIN;

    t13 = ((x77|(x78*x79))*x80);

    if (t13 != -63606318170112LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x81 = UINT16_MAX;
	int16_t x82 = INT16_MAX;
	volatile int32_t x83 = 1;
	uint64_t t14 = 85521349023LLU;

    t14 = ((x81|(x82*x83))*x84);

    if (t14 != 2252962230LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x86 = UINT16_MAX;
	static int64_t x87 = -74LL;
	int64_t t15 = 7521683357434576LL;

    t15 = ((x85|(x86*x87))*x88);

    if (t15 != -452844LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x89 = UINT16_MAX;
	volatile uint32_t x90 = 75582859U;
	static int32_t x91 = INT32_MIN;
	static int32_t x92 = INT32_MIN;
	uint32_t t16 = 221617364U;

    t16 = ((x89|(x90*x91))*x92);

    if (t16 != 2147483648U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x97 = 14588426LLU;
	static int8_t x98 = -17;
	static volatile int32_t x99 = -115075249;
	int64_t x100 = 71037037LL;
	volatile uint64_t t17 = 6357612371325427LLU;

    t17 = ((x97|(x98*x99))*x100);

    if (t17 != 139287327054267759LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x101 = UINT8_MAX;
	int32_t x102 = -3934671;
	uint32_t x103 = 1189U;
	int32_t x104 = -1;

    t18 = ((x101|(x102*x103))*x104);

    if (t18 != 383356417U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x105 = INT16_MIN;
	int16_t x106 = INT16_MIN;
	uint16_t x107 = 30112U;
	static volatile int64_t x108 = 55149862LL;

    t19 = ((x105|(x106*x107))*x108);

    if (t19 != -1807150678016LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x109 = INT16_MIN;
	volatile uint64_t x110 = 461LLU;
	volatile int32_t x112 = 15;
	uint64_t t20 = 19943652080334LLU;

    t20 = ((x109|(x110*x111))*x112);

    if (t20 != 18446744073709544701LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x113 = INT8_MIN;
	volatile uint16_t x114 = UINT16_MAX;
	int64_t x115 = -1LL;
	volatile int32_t x116 = -1;

    t21 = ((x113|(x114*x115))*x116);

    if (t21 != 127LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int32_t x118 = -1;
	volatile uint64_t x119 = 4218017346LLU;
	int8_t x120 = INT8_MAX;
	uint64_t t22 = 19LLU;

    t22 = ((x117|(x118*x119))*x120);

    if (t22 != 18446744073709543234LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x129 = 25LL;
	uint64_t x130 = 131158841917LLU;
	uint16_t x131 = 23128U;
	uint32_t x132 = UINT32_MAX;
	volatile uint64_t t23 = 13522908981522697LLU;

    t23 = ((x129|(x130*x131))*x132);

    if (t23 != 3364101041535944967LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x133 = INT32_MIN;
	volatile uint16_t x134 = 0U;
	volatile uint32_t x135 = 831U;
	uint64_t x136 = 27834996902820860LLU;
	uint64_t t24 = 10867LLU;

    t24 = ((x133|(x134*x135))*x136);

    if (t24 != 2259608536675778560LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x141 = -22865722LL;
	int8_t x142 = INT8_MIN;
	uint16_t x143 = UINT16_MAX;
	int32_t x144 = INT32_MIN;

    t25 = ((x141|(x142*x143))*x144);

    if (t25 != 13074967075749888LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x154 = INT8_MAX;
	int16_t x155 = 379;
	int32_t x156 = -1;
	int32_t t26 = 10;

    t26 = ((x153|(x154*x155))*x156);

    if (t26 != 123) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x161 = 775U;
	int64_t x164 = INT64_MIN;
	uint64_t t27 = 108821677547097LLU;

    t27 = ((x161|(x162*x163))*x164);

    if (t27 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x165 = UINT8_MAX;
	volatile int8_t x166 = INT8_MIN;
	static int16_t x167 = -9136;
	volatile uint8_t x168 = 0U;
	static volatile int32_t t28 = 26446683;

    t28 = ((x165|(x166*x167))*x168);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x173 = -32;
	static volatile int8_t x174 = -1;
	uint32_t x175 = 628U;
	int8_t x176 = 0;
	uint32_t t29 = 1U;

    t29 = ((x173|(x174*x175))*x176);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x177 = 13591U;
	uint8_t x178 = 42U;
	int8_t x179 = -16;
	int16_t x180 = INT16_MIN;
	static volatile int32_t t30 = 1;

    t30 = ((x177|(x178*x179))*x180);

    if (t30 != 21266432) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x190 = INT16_MAX;
	uint8_t x192 = 39U;
	int32_t t31 = -1;

    t31 = ((x189|(x190*x191))*x192);

    if (t31 != -9945) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x201 = 1;
	int64_t x202 = 0LL;
	int16_t x203 = -8;
	uint32_t x204 = 12U;

    t32 = ((x201|(x202*x203))*x204);

    if (t32 != 12LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x209 = INT16_MAX;
	static volatile int32_t x210 = -1;
	volatile int32_t x211 = 1;
	volatile int16_t x212 = -1;
	int32_t t33 = 0;

    t33 = ((x209|(x210*x211))*x212);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x221 = INT64_MIN;
	int8_t x222 = -1;
	int32_t x223 = INT32_MAX;
	int32_t x224 = -1;
	static volatile int64_t t34 = -538024540086243LL;

    t34 = ((x221|(x222*x223))*x224);

    if (t34 != 2147483647LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x229 = INT16_MAX;
	static int32_t x230 = -4;
	int8_t x231 = INT8_MIN;
	int8_t x232 = -1;
	volatile int32_t t35 = 20445;

    t35 = ((x229|(x230*x231))*x232);

    if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x242 = UINT8_MAX;
	uint32_t x243 = 72529U;
	volatile uint64_t x244 = 10LLU;

    t36 = ((x241|(x242*x243))*x244);

    if (t36 != 17384949170289115126LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x249 = INT8_MIN;
	volatile uint32_t x250 = 1787U;
	uint64_t x251 = 690709099642445LLU;
	uint64_t t37 = 686088379LLU;

    t37 = ((x249|(x250*x251))*x252);

    if (t37 != 1042445377LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x253 = 1330667268U;
	uint32_t x254 = UINT32_MAX;
	volatile int64_t x255 = -1LL;
	int64_t t38 = 22489034941488620LL;

    t38 = ((x253|(x254*x255))*x256);

    if (t38 != -56321700513LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x261 = INT16_MAX;
	static int64_t x262 = -1LL;
	int16_t x264 = INT16_MAX;
	volatile int64_t t39 = 738208LL;

    t39 = ((x261|(x262*x263))*x264);

    if (t39 != -32767LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x265 = INT32_MAX;
	static int16_t x266 = -377;
	int64_t x267 = -1LL;
	static int16_t x268 = -666;

    t40 = ((x265|(x266*x267))*x268);

    if (t40 != -1430224108902LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x269 = UINT64_MAX;
	int16_t x271 = 29;
	int64_t x272 = -1LL;
	uint64_t t41 = 5953173771548498495LLU;

    t41 = ((x269|(x270*x271))*x272);

    if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x277 = -2;
	static uint64_t x278 = 7723781714498021LLU;
	int64_t x280 = 2131875595977LL;
	volatile uint64_t t42 = 131058123351LLU;

    t42 = ((x277|(x278*x279))*x280);

    if (t42 != 18446741941833955639LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x281 = -94;
	uint64_t x282 = 3324823020109304LLU;
	uint16_t x284 = 21925U;
	uint64_t t43 = 24383390LLU;

    t43 = ((x281|(x282*x283))*x284);

    if (t43 != 18446744073709420066LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x285 = UINT8_MAX;
	int64_t x286 = INT64_MAX;
	volatile uint16_t x287 = 1U;
	uint64_t x288 = 11134580LLU;
	uint64_t t44 = 450867320534200559LLU;

    t44 = ((x285|(x286*x287))*x288);

    if (t44 != 18446744073698417036LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x290 = 13384U;
	int32_t x291 = 650;
	static volatile uint16_t x292 = 65U;
	volatile int32_t t45 = -181461225;

    t45 = ((x289|(x290*x291))*x292);

    if (t45 != 566558655) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x293 = -1;

    t46 = ((x293|(x294*x295))*x296);

    if (t46 != 235539724LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x298 = 42U;
	int64_t t47 = -2000725LL;

    t47 = ((x297|(x298*x299))*x300);

    if (t47 != 839454159348LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x305 = 3;
	int16_t x306 = -1;
	int8_t x307 = -1;
	volatile uint8_t x308 = 22U;

    t48 = ((x305|(x306*x307))*x308);

    if (t48 != 66) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x310 = 65738902U;
	volatile int64_t x311 = -1LL;
	static int8_t x312 = INT8_MIN;
	volatile int64_t t49 = -9108510LL;

    t49 = ((x309|(x310*x311))*x312);

    if (t49 != 8414562432LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x313 = -2;
	uint64_t x314 = 1132618307761858759LLU;
	volatile int16_t x315 = -318;
	volatile int16_t x316 = INT16_MAX;
	static volatile uint64_t t50 = 3LLU;

    t50 = ((x313|(x314*x315))*x316);

    if (t50 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x317 = -1;
	volatile int32_t x318 = 0;
	volatile int16_t x319 = 2176;

    t51 = ((x317|(x318*x319))*x320);

    if (t51 != -255) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x321 = 29127437662239LLU;
	uint32_t x322 = 277559U;
	static int16_t x323 = INT16_MAX;
	int32_t x324 = INT32_MIN;

    t52 = ((x321|(x322*x323))*x324);

    if (t52 != 1203659639049158656LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x325 = 13116U;
	volatile int32_t x326 = 537;
	uint32_t x328 = 1823872U;
	uint32_t t53 = 1031163241U;

    t53 = ((x325|(x326*x327))*x328);

    if (t53 != 3210750848U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x337 = UINT16_MAX;
	uint64_t x338 = 6465LLU;
	uint32_t x339 = 14U;
	int16_t x340 = 7064;
	volatile uint64_t t54 = 10LLU;

    t54 = ((x337|(x338*x339))*x340);

    if (t54 != 925885544LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x345 = 186018U;
	static uint64_t x346 = 38651373349LLU;
	int64_t x347 = -1LL;
	int8_t x348 = INT8_MIN;
	static uint64_t t55 = 66936LLU;

    t55 = ((x345|(x346*x347))*x348);

    if (t55 != 4947375587968LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x349 = 1298957066884LLU;
	uint8_t x350 = 2U;
	int32_t x351 = -1;
	volatile int32_t x352 = INT32_MIN;
	volatile uint64_t t56 = 26LLU;

    t56 = ((x349|(x350*x351))*x352);

    if (t56 != 4294967296LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x354 = INT8_MAX;
	uint8_t x355 = 2U;
	int8_t x356 = -1;
	int32_t t57 = -387274;

    t57 = ((x353|(x354*x355))*x356);

    if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x357 = UINT16_MAX;
	static uint64_t x358 = 110465LLU;
	int64_t x359 = -114800461434146959LL;
	int64_t x360 = -1LL;
	volatile uint64_t t58 = 9899742862102LLU;

    t58 = ((x357|(x358*x359))*x360);

    if (t58 != 8519793684581842945LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x361 = INT64_MIN;
	int16_t x362 = 3;
	uint16_t x363 = 11982U;
	uint64_t x364 = 3449614621186810LLU;
	static uint64_t t59 = 4941691081LLU;

    t59 = ((x361|(x362*x363))*x364);

    if (t59 != 13319382730923762564LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x365 = 1U;
	uint8_t x366 = 25U;
	uint32_t x367 = 138854U;
	uint16_t x368 = UINT16_MAX;
	static volatile uint32_t t60 = 238U;

    t60 = ((x365|(x366*x367))*x368);

    if (t60 != 4156688393U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x369 = -1;
	int8_t x370 = INT8_MIN;
	int8_t x371 = -12;
	uint16_t x372 = UINT16_MAX;
	int32_t t61 = -8;

    t61 = ((x369|(x370*x371))*x372);

    if (t61 != -65535) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x373 = 12;
	int32_t x374 = 2800;
	int8_t x375 = INT8_MIN;
	static volatile int32_t x376 = 152;

    t62 = ((x373|(x374*x375))*x376);

    if (t62 != -54474976) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x377 = 44809U;
	uint64_t x378 = 16167LLU;
	uint32_t x379 = 217129U;
	int32_t x380 = INT32_MAX;
	uint64_t t63 = 10997905130197005LLU;

    t63 = ((x377|(x378*x379))*x380);

    if (t63 != 7538453612197056705LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x397 = UINT32_MAX;
	uint32_t x398 = UINT32_MAX;
	volatile uint16_t x399 = 63U;
	static uint32_t t64 = 38U;

    t64 = ((x397|(x398*x399))*x400);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x401 = INT8_MAX;
	static uint64_t x403 = UINT64_MAX;
	int32_t x404 = -1;
	volatile uint64_t t65 = 452920190063731377LLU;

    t65 = ((x401|(x402*x403))*x404);

    if (t65 != 129LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x413 = -97672058LL;
	uint16_t x414 = 1800U;
	uint32_t x415 = UINT32_MAX;
	int16_t x416 = INT16_MIN;
	volatile int64_t t66 = -1074936726028889062LL;

    t66 = ((x413|(x414*x415))*x416);

    if (t66 != 25231360LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x417 = 1;
	int16_t x418 = -8456;
	volatile uint64_t x419 = UINT64_MAX;
	static int64_t x420 = INT64_MIN;
	static volatile uint64_t t67 = 699509979975896LLU;

    t67 = ((x417|(x418*x419))*x420);

    if (t67 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x421 = 8U;
	int8_t x424 = INT8_MIN;
	uint32_t t68 = 403U;

    t68 = ((x421|(x422*x423))*x424);

    if (t68 != 4193280U) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x429 = -1;
	uint32_t x431 = 21558944U;
	uint64_t x432 = 311012818937LLU;
	volatile uint64_t t69 = 321975401363967LLU;

    t69 = ((x429|(x430*x431))*x432);

    if (t69 != 7624312353083949063LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x441 = -4;
	uint16_t x443 = UINT16_MAX;
	uint32_t x444 = 544522U;
	int64_t t70 = 9574894266557788LL;

    t70 = ((x441|(x442*x443))*x444);

    if (t70 != -1633566LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x445 = INT32_MAX;
	static int8_t x447 = -1;
	volatile uint32_t t71 = 14U;

    t71 = ((x445|(x446*x447))*x448);

    if (t71 != 4294965172U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x453 = INT8_MAX;
	uint16_t x454 = 0U;
	static int64_t x455 = INT64_MIN;
	volatile int64_t t72 = 7019116LL;

    t72 = ((x453|(x454*x455))*x456);

    if (t72 != -83058LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x457 = INT64_MAX;
	uint8_t x458 = UINT8_MAX;
	uint8_t x459 = 0U;
	static uint64_t x460 = 898180189554LLU;
	volatile uint64_t t73 = 121107120085336459LLU;

    t73 = ((x457|(x458*x459))*x460);

    if (t73 != 18446743175529362062LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x463 = UINT64_MAX;
	static int8_t x464 = -1;

    t74 = ((x461|(x462*x463))*x464);

    if (t74 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x465 = INT64_MIN;
	volatile uint64_t x466 = 14219775338573LLU;
	volatile int16_t x467 = INT16_MAX;
	int16_t x468 = -8683;
	uint64_t t75 = 13514672861827LLU;

    t75 = ((x465|(x466*x467))*x468);

    if (t75 != 3308700498582973359LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x469 = 285088817LL;
	volatile int16_t x471 = -1;
	uint32_t x472 = UINT32_MAX;
	int64_t t76 = -1LL;

    t76 = ((x469|(x470*x471))*x472);

    if (t76 != -1653562408575LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x477 = -152;
	int64_t x478 = -1LL;
	volatile int64_t t77 = -1322121885937501LL;

    t77 = ((x477|(x478*x479))*x480);

    if (t77 != -4947817LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x482 = 6U;
	static int16_t x483 = INT16_MAX;
	static int64_t x484 = -1LL;
	int64_t t78 = -138651999274876365LL;

    t78 = ((x481|(x482*x483))*x484);

    if (t78 != 65541LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x489 = -3;
	int64_t x490 = 4LL;
	int8_t x491 = INT8_MIN;
	uint32_t x492 = UINT32_MAX;
	volatile int64_t t79 = -1200029LL;

    t79 = ((x489|(x490*x491))*x492);

    if (t79 != -12884901885LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x494 = 91LLU;
	int8_t x495 = INT8_MAX;
	int64_t x496 = 0LL;
	uint64_t t80 = 1264822812500044445LLU;

    t80 = ((x493|(x494*x495))*x496);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x498 = INT8_MIN;
	volatile int16_t x499 = INT16_MIN;
	uint64_t x500 = 4756389991932806LLU;
	volatile uint64_t t81 = 28983938566538771LLU;

    t81 = ((x497|(x498*x499))*x500);

    if (t81 != 18441987683717618810LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x501 = UINT8_MAX;
	int32_t x502 = 8113;
	static uint64_t x503 = 1055833004948393LLU;
	uint32_t x504 = UINT32_MAX;
	volatile uint64_t t82 = 21428789LLU;

    t82 = ((x501|(x502*x503))*x504);

    if (t82 != 548809995542710529LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x509 = 7514;
	static int64_t x510 = INT64_MIN;
	uint64_t x511 = 293708094447LLU;
	volatile uint16_t x512 = 2U;
	static volatile uint64_t t83 = 1LLU;

    t83 = ((x509|(x510*x511))*x512);

    if (t83 != 15028LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x513 = INT8_MIN;
	volatile int8_t x514 = INT8_MAX;
	int64_t x515 = -1LL;
	int64_t t84 = -157LL;

    t84 = ((x513|(x514*x515))*x516);

    if (t84 != 1651LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x517 = UINT64_MAX;
	int32_t x519 = 25030539;
	uint64_t x520 = 1260266LLU;
	uint64_t t85 = 699752LLU;

    t85 = ((x517|(x518*x519))*x520);

    if (t85 != 18446744073708291350LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x530 = -21;
	volatile uint32_t x531 = 68251458U;
	int8_t x532 = INT8_MIN;
	static uint32_t t86 = 22672778U;

    t86 = ((x529|(x530*x531))*x532);

    if (t86 != 3071279232U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x533 = 224978U;
	volatile int16_t x534 = INT16_MIN;
	static int16_t x535 = -3;
	static volatile int8_t x536 = -1;
	volatile uint32_t t87 = 1321U;

    t87 = ((x533|(x534*x535))*x536);

    if (t87 != 4294709550U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x537 = INT16_MIN;
	uint64_t x538 = 254199978640LLU;
	static int64_t x539 = -1LL;

    t88 = ((x537|(x538*x539))*x540);

    if (t88 != 18446694286448679568LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x541 = INT8_MIN;
	volatile int16_t x542 = INT16_MIN;
	volatile int16_t x544 = INT16_MIN;

    t89 = ((x541|(x542*x543))*x544);

    if (t89 != 4194304U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x546 = UINT16_MAX;
	uint32_t x547 = 141U;
	int16_t x548 = INT16_MIN;
	static uint32_t t90 = 437333U;

    t90 = ((x545|(x546*x547))*x548);

    if (t90 != 425984U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x554 = 6;
	int8_t x555 = INT8_MIN;
	uint32_t x556 = 13322U;
	static volatile uint32_t t91 = 165615U;

    t91 = ((x553|(x554*x555))*x556);

    if (t91 != 4293262080U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x559 = 157U;
	int16_t x560 = INT16_MAX;
	volatile int32_t t92 = -55617765;

    t92 = ((x557|(x558*x559))*x560);

    if (t92 != -655667670) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x565 = INT32_MIN;
	volatile int32_t x566 = INT32_MIN;
	uint32_t x567 = UINT32_MAX;

    t93 = ((x565|(x566*x567))*x568);

    if (t93 != 2147483648U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x569 = -224463;
	static int64_t x570 = -242231LL;
	static int8_t x572 = -1;
	int64_t t94 = -364931LL;

    t94 = ((x569|(x570*x571))*x572);

    if (t94 != 11343LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x573 = 28U;
	int8_t x574 = -1;
	int8_t x575 = INT8_MIN;
	int16_t x576 = -64;

    t95 = ((x573|(x574*x575))*x576);

    if (t95 != -9984) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x581 = INT8_MIN;
	uint32_t x582 = UINT32_MAX;
	int8_t x583 = 39;
	int32_t x584 = INT32_MAX;
	uint32_t t96 = 9959491U;

    t96 = ((x581|(x582*x583))*x584);

    if (t96 != 2147483687U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x585 = 2069729567LL;
	volatile uint64_t x586 = UINT64_MAX;
	static uint16_t x587 = UINT16_MAX;
	int8_t x588 = -1;

    t97 = ((x585|(x586*x587))*x588);

    if (t97 != 28385LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x597 = INT16_MAX;
	static volatile int8_t x598 = INT8_MAX;
	int8_t x599 = -1;
	int16_t x600 = INT16_MIN;
	static volatile int32_t t98 = 1194;

    t98 = ((x597|(x598*x599))*x600);

    if (t98 != 32768) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x601 = UINT32_MAX;
	volatile uint32_t x602 = 0U;
	volatile uint16_t x603 = 15935U;
	volatile uint8_t x604 = UINT8_MAX;
	volatile uint32_t t99 = 18651709U;

    t99 = ((x601|(x602*x603))*x604);

    if (t99 != 4294967041U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x609 = UINT16_MAX;
	int32_t x611 = 1;
	static uint64_t x612 = 55LLU;

    t100 = ((x609|(x610*x611))*x612);

    if (t100 != 28835785LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x613 = -1;
	int8_t x614 = INT8_MIN;
	uint8_t x615 = 1U;
	volatile int8_t x616 = -1;
	volatile int32_t t101 = -51323547;

    t101 = ((x613|(x614*x615))*x616);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x621 = -1;
	uint16_t x622 = 3U;
	volatile uint16_t x623 = 14U;
	static volatile int64_t x624 = -1LL;
	volatile int64_t t102 = 724639LL;

    t102 = ((x621|(x622*x623))*x624);

    if (t102 != 1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x629 = UINT64_MAX;
	int32_t x630 = INT32_MIN;
	uint64_t x631 = 19319062228525396LLU;
	volatile int32_t x632 = -1;
	volatile uint64_t t103 = 8LLU;

    t103 = ((x629|(x630*x631))*x632);

    if (t103 != 1LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x637 = INT16_MAX;
	uint32_t x639 = UINT32_MAX;
	uint64_t x640 = 126LLU;
	static uint64_t t104 = 868994007LLU;

    t104 = ((x637|(x638*x639))*x640);

    if (t104 != 541165879170LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x645 = 1282LLU;
	static int16_t x646 = -9;
	volatile int64_t x648 = INT64_MIN;
	uint64_t t105 = 120623LLU;

    t105 = ((x645|(x646*x647))*x648);

    if (t105 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x651 = INT8_MIN;
	uint8_t x652 = UINT8_MAX;
	static int32_t t106 = 1;

    t106 = ((x649|(x650*x651))*x652);

    if (t106 != -10607745) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x653 = INT8_MAX;
	int8_t x654 = 11;

    t107 = ((x653|(x654*x655))*x656);

    if (t107 != 3983228U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x658 = -3562652LL;
	uint16_t x659 = 13706U;
	int32_t x660 = -1;

    t108 = ((x657|(x658*x659))*x660);

    if (t108 != 48829708309LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x661 = 891U;
	int16_t x662 = INT16_MIN;
	int16_t x664 = -1;
	uint32_t t109 = 1072158204U;

    t109 = ((x661|(x662*x663))*x664);

    if (t109 != 326564997U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x665 = -1;
	volatile int64_t x667 = 951576021517337950LL;
	int64_t x668 = 1563135751010971395LL;
	volatile uint64_t t110 = 6790893924LLU;

    t110 = ((x665|(x666*x667))*x668);

    if (t110 != 16883608322698580221LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x674 = INT8_MIN;
	volatile int16_t x675 = INT16_MIN;
	static int8_t x676 = -1;
	volatile int32_t t111 = -65448157;

    t111 = ((x673|(x674*x675))*x676);

    if (t111 != 32768) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x681 = 1U;
	volatile int16_t x682 = -1;
	int8_t x683 = 0;
	int32_t x684 = INT32_MAX;
	int32_t t112 = INT32_MAX;

    t112 = ((x681|(x682*x683))*x684);

    if (t112 != INT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x698 = INT8_MAX;
	static int16_t x699 = -1;
	uint32_t x700 = 24003951U;
	int64_t t113 = -196733718LL;

    t113 = ((x697|(x698*x699))*x700);

    if (t113 != -24003951LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x701 = 18;
	uint16_t x703 = 20289U;
	int16_t x704 = -59;

    t114 = ((x701|(x702*x703))*x704);

    if (t114 != -305248005) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x705 = UINT8_MAX;
	int8_t x707 = 2;
	static uint16_t x708 = 168U;
	int32_t t115 = -23307413;

    t115 = ((x705|(x706*x707))*x708);

    if (t115 != 11009880) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x709 = 67815352494LLU;
	volatile uint16_t x711 = UINT16_MAX;
	volatile uint64_t t116 = 47110LLU;

    t116 = ((x709|(x710*x711))*x712);

    if (t116 != 18436129458450164168LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x713 = 276439604580LL;
	static volatile int16_t x714 = INT16_MIN;
	uint64_t x715 = UINT64_MAX;
	uint64_t x716 = 207866LLU;
	volatile uint64_t t117 = 2113894298840225LLU;

    t117 = ((x713|(x714*x715))*x716);

    if (t117 != 57462394845626280LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x717 = INT32_MIN;
	static int64_t x718 = -42573274438268LL;
	static int32_t x719 = -1;
	int16_t x720 = INT16_MIN;
	volatile int64_t t118 = 1LL;

    t118 = ((x717|(x718*x719))*x720);

    if (t118 != 19296529022976LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x721 = 3U;
	static int8_t x722 = 14;
	int16_t x723 = INT16_MIN;
	volatile int32_t t119 = -407;

    t119 = ((x721|(x722*x723))*x724);

    if (t119 != -917498) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x733 = 1;
	int32_t x734 = 866;
	static volatile int32_t t120 = -7463;

    t120 = ((x733|(x734*x735))*x736);

    if (t120 != -28343455) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x737 = 46;
	int16_t x738 = INT16_MAX;
	static int8_t x739 = 2;
	int8_t x740 = -1;
	static volatile int32_t t121 = -3756867;

    t121 = ((x737|(x738*x739))*x740);

    if (t121 != -65534) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x754 = 16;
	uint16_t x755 = 281U;
	int8_t x756 = INT8_MIN;

    t122 = ((x753|(x754*x755))*x756);

    if (t122 != -577408) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x757 = INT8_MIN;
	volatile int16_t x758 = INT16_MIN;
	uint16_t x759 = UINT16_MAX;
	int32_t t123 = -157856236;

    t123 = ((x757|(x758*x759))*x760);

    if (t123 != -4194176) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x761 = INT32_MAX;
	int32_t x762 = 0;
	int64_t x763 = INT64_MIN;
	volatile int64_t t124 = 6723464761716317LL;

    t124 = ((x761|(x762*x763))*x764);

    if (t124 != -274877906816LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint8_t x765 = 65U;
	static int8_t x767 = -13;
	volatile uint64_t x768 = UINT64_MAX;
	volatile uint64_t t125 = 1997024246LLU;

    t125 = ((x765|(x766*x767))*x768);

    if (t125 != 3251LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x769 = UINT64_MAX;
	volatile int16_t x770 = INT16_MIN;
	static int64_t x772 = -1LL;
	volatile uint64_t t126 = 111505394202486262LLU;

    t126 = ((x769|(x770*x771))*x772);

    if (t126 != 1LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x773 = 121U;
	uint64_t x774 = 0LLU;
	static int32_t x775 = -16067;
	int64_t x776 = -30037057LL;
	static uint64_t t127 = 2224582438LLU;

    t127 = ((x773|(x774*x775))*x776);

    if (t127 != 18446744070075067719LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x781 = -1;
	uint64_t x782 = UINT64_MAX;
	uint8_t x783 = UINT8_MAX;
	volatile int8_t x784 = INT8_MIN;
	volatile uint64_t t128 = 1204LLU;

    t128 = ((x781|(x782*x783))*x784);

    if (t128 != 128LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x785 = INT32_MIN;
	uint32_t x786 = UINT32_MAX;
	volatile int32_t x788 = INT32_MIN;
	volatile uint32_t t129 = 27986938U;

    t129 = ((x785|(x786*x787))*x788);

    if (t129 != 2147483648U) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x790 = 78651727LL;
	static uint8_t x791 = UINT8_MAX;
	int8_t x792 = INT8_MIN;
	int64_t t130 = -49027LL;

    t130 = ((x789|(x790*x791))*x792);

    if (t130 != -2567199260544LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x793 = INT64_MAX;
	static uint64_t x794 = 3601853495LLU;
	static uint8_t x795 = 0U;
	static int64_t x796 = 29LL;
	static volatile uint64_t t131 = 1444321696LLU;

    t131 = ((x793|(x794*x795))*x796);

    if (t131 != 9223372036854775779LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x797 = -174056473;
	int64_t x798 = INT64_MIN;
	uint32_t x800 = 1303480U;

    t132 = ((x797|(x798*x799))*x800);

    if (t132 != -226879131426040LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x802 = -5108106322424LL;
	uint8_t x803 = 1U;
	uint8_t x804 = UINT8_MAX;
	int64_t t133 = 65653217642400398LL;

    t133 = ((x801|(x802*x803))*x804);

    if (t133 != -1302567112218120LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x809 = INT64_MIN;
	volatile uint64_t x810 = 742231767557926LLU;
	int64_t x811 = INT64_MIN;
	int8_t x812 = INT8_MAX;

    t134 = ((x809|(x810*x811))*x812);

    if (t134 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x817 = INT16_MIN;
	int8_t x819 = 0;
	int32_t x820 = INT32_MIN;

    t135 = ((x817|(x818*x819))*x820);

    if (t135 != 70368744177664LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x822 = 889764492441LLU;
	static uint16_t x823 = 0U;
	volatile uint64_t t136 = 2056570LLU;

    t136 = ((x821|(x822*x823))*x824);

    if (t136 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x833 = INT64_MIN;
	uint8_t x834 = 1U;
	static int64_t x835 = INT64_MIN;
	volatile int32_t x836 = 1;
	int64_t t137 = INT64_MIN;

    t137 = ((x833|(x834*x835))*x836);

    if (t137 != INT64_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x841 = UINT32_MAX;
	int16_t x842 = 6;
	static uint64_t x843 = UINT64_MAX;
	volatile int32_t x844 = 1;
	volatile uint64_t t138 = UINT64_MAX;

    t138 = ((x841|(x842*x843))*x844);

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x847 = -1;
	static uint32_t x848 = 1528U;
	static volatile uint32_t t139 = 1U;

    t139 = ((x845|(x846*x847))*x848);

    if (t139 != 4294965768U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x850 = INT16_MAX;
	volatile int32_t x851 = -48015;
	int32_t x852 = -107161;
	uint32_t t140 = 65725539U;

    t140 = ((x849|(x850*x851))*x852);

    if (t140 != 107161U) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x853 = INT32_MIN;
	int8_t x854 = INT8_MAX;
	int64_t x855 = -1LL;
	int8_t x856 = INT8_MIN;
	volatile int64_t t141 = 14928976920LL;

    t141 = ((x853|(x854*x855))*x856);

    if (t141 != 16256LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x857 = -1;
	volatile uint32_t x859 = 12274179U;
	int16_t x860 = -1;
	volatile uint32_t t142 = 133723967U;

    t142 = ((x857|(x858*x859))*x860);

    if (t142 != 1U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x869 = INT8_MIN;
	static uint16_t x871 = UINT16_MAX;
	volatile int8_t x872 = INT8_MIN;
	int32_t t143 = -31;

    t143 = ((x869|(x870*x871))*x872);

    if (t143 != 16384) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x873 = INT16_MIN;
	int32_t x875 = INT32_MIN;
	int32_t x876 = -1;
	uint64_t t144 = 10LLU;

    t144 = ((x873|(x874*x875))*x876);

    if (t144 != 32768LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x877 = 0;
	static uint16_t x878 = 789U;
	static int64_t x880 = 47822963526221LL;
	int64_t t145 = -7244LL;

    t145 = ((x877|(x878*x879))*x880);

    if (t145 != 226393909333130214LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x881 = INT16_MAX;
	volatile uint64_t x882 = 875478907LLU;
	int64_t x883 = 4549704LL;
	static uint16_t x884 = UINT16_MAX;
	uint64_t t146 = 163999384563220501LLU;

    t146 = ((x881|(x882*x883))*x884);

    if (t146 != 2782621388767887361LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x885 = 877146;
	static int64_t x887 = -1LL;
	int64_t t147 = 5502681529540LL;

    t147 = ((x885|(x886*x887))*x888);

    if (t147 != -1883658839392256LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x890 = 4;
	int8_t x891 = INT8_MIN;
	volatile uint32_t x892 = 505587U;
	static uint32_t t148 = 1U;

    t148 = ((x889|(x890*x891))*x892);

    if (t148 != 4036106752U) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x901 = INT64_MIN;
	int32_t x903 = INT32_MIN;
	int32_t x904 = INT32_MIN;
	static uint64_t t149 = 50494LLU;

    t149 = ((x901|(x902*x903))*x904);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x905 = INT64_MIN;
	int64_t x906 = -1LL;
	static uint32_t x908 = 1519949U;
	int64_t t150 = -494LL;

    t150 = ((x905|(x906*x907))*x908);

    if (t150 != -9732233447LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x914 = -1LL;
	static int8_t x916 = 3;
	int64_t t151 = 3740727637812034LL;

    t151 = ((x913|(x914*x915))*x916);

    if (t151 != -9LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x917 = INT16_MIN;
	uint16_t x918 = 1191U;
	int16_t x919 = INT16_MIN;
	int16_t x920 = -1;

    t152 = ((x917|(x918*x919))*x920);

    if (t152 != 32768) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x921 = -34;
	volatile int8_t x922 = -48;
	static int64_t x924 = 3742565095LL;
	volatile int64_t t153 = 15LL;

    t153 = ((x921|(x922*x923))*x924);

    if (t153 != -7485130190LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x926 = -1;
	int16_t x928 = -10;
	volatile int32_t t154 = -9463257;

    t154 = ((x925|(x926*x927))*x928);

    if (t154 != 327670) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x933 = -13;
	static int32_t x934 = -1;
	int64_t x936 = -1LL;
	uint64_t t155 = 3985580432LLU;

    t155 = ((x933|(x934*x935))*x936);

    if (t155 != 13LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int8_t x937 = -1;
	int32_t x938 = -9001;
	int16_t x940 = -26;
	int32_t t156 = 19;

    t156 = ((x937|(x938*x939))*x940);

    if (t156 != 26) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x953 = -3;
	static uint64_t x954 = UINT64_MAX;
	volatile uint64_t x955 = 215442LLU;
	volatile int8_t x956 = 1;
	uint64_t t157 = UINT64_MAX;

    t157 = ((x953|(x954*x955))*x956);

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x957 = INT32_MIN;
	int16_t x959 = INT16_MAX;
	uint8_t x960 = UINT8_MAX;
	static volatile int32_t t158 = 9625;

    t158 = ((x957|(x958*x959))*x960);

    if (t158 != -1069514880) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x961 = INT32_MIN;
	uint8_t x962 = UINT8_MAX;
	static int8_t x963 = -15;
	int64_t x964 = 8549440090946LL;

    t159 = ((x961|(x962*x963))*x964);

    if (t159 != -32701608347868450LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x965 = 479;

    t160 = ((x965|(x966*x967))*x968);

    if (t160 != 479) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x977 = 0U;
	static uint32_t x978 = 11720575U;
	static int16_t x979 = INT16_MIN;
	int8_t x980 = INT8_MAX;
	volatile uint32_t t161 = 22181U;

    t161 = ((x977|(x978*x979))*x980);

    if (t161 != 2348777472U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x981 = 336589872806LLU;
	int64_t x982 = -1827331LL;
	int8_t x983 = INT8_MIN;

    t162 = ((x981|(x982*x983))*x984);

    if (t162 != 18446740707538191236LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x985 = 457143986898LLU;
	int32_t x986 = -1;
	volatile uint16_t x987 = 1U;
	uint8_t x988 = 44U;

    t163 = ((x985|(x986*x987))*x988);

    if (t163 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x989 = 3680;
	static int64_t x990 = -1LL;
	volatile uint64_t x992 = 82944453756664LLU;
	static volatile uint64_t t164 = 8175LLU;

    t164 = ((x989|(x990*x991))*x992);

    if (t164 != 3023159450522889472LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x997 = INT32_MIN;
	uint32_t x998 = 730263U;
	static uint32_t x999 = 185U;
	uint8_t x1000 = 34U;

    t165 = ((x997|(x998*x999))*x1000);

    if (t165 != 298386974U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1005 = INT32_MIN;
	static int16_t x1006 = 39;
	int16_t x1007 = INT16_MIN;
	volatile int16_t x1008 = -436;
	volatile int32_t t166 = -1177;

    t166 = ((x1005|(x1006*x1007))*x1008);

    if (t166 != 557187072) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x1009 = 3469416U;
	int64_t x1010 = -1LL;
	int32_t x1012 = INT32_MAX;
	static int64_t t167 = 356998LL;

    t167 = ((x1009|(x1010*x1011))*x1012);

    if (t167 != 7450516272123799LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1017 = INT8_MAX;
	int16_t x1018 = -1;
	int16_t x1020 = INT16_MIN;
	volatile int32_t t168 = 0;

    t168 = ((x1017|(x1018*x1019))*x1020);

    if (t168 != 2143322112) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1021 = INT32_MIN;
	static int64_t x1022 = -214765832712LL;
	static volatile int64_t t169 = 0LL;

    t169 = ((x1021|(x1022*x1023))*x1024);

    if (t169 != -5551574958048LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1029 = INT16_MIN;
	uint16_t x1030 = 2U;

    t170 = ((x1029|(x1030*x1031))*x1032);

    if (t170 != -2146664460) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x1057 = INT8_MIN;
	static int16_t x1059 = INT16_MIN;
	static int32_t x1060 = 66923446;

    t171 = ((x1057|(x1058*x1059))*x1060);

    if (t171 != 23733504U) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x1062 = -4669756178LL;
	int8_t x1063 = INT8_MIN;
	volatile int64_t t172 = -1787LL;

    t172 = ((x1061|(x1062*x1063))*x1064);

    if (t172 != -597728791032LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1066 = INT8_MIN;
	uint8_t x1067 = UINT8_MAX;
	int16_t x1068 = INT16_MIN;
	volatile int64_t t173 = -99191034146737762LL;

    t173 = ((x1065|(x1066*x1067))*x1068);

    if (t173 != 599785472LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1069 = INT32_MIN;
	uint32_t x1070 = 11U;
	int32_t x1071 = INT32_MAX;
	int16_t x1072 = -1;

    t174 = ((x1069|(x1070*x1071))*x1072);

    if (t174 != 11U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1077 = 1534U;
	static uint32_t x1078 = 613U;
	int32_t x1079 = INT32_MIN;
	int64_t x1080 = -1LL;

    t175 = ((x1077|(x1078*x1079))*x1080);

    if (t175 != -2147485182LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1081 = 5U;
	uint8_t x1083 = UINT8_MAX;
	static volatile uint32_t t176 = 488315U;

    t176 = ((x1081|(x1082*x1083))*x1084);

    if (t176 != 478145U) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1085 = 618;
	int64_t x1086 = -1LL;
	int16_t x1087 = INT16_MIN;
	volatile int64_t t177 = 5303LL;

    t177 = ((x1085|(x1086*x1087))*x1088);

    if (t177 != -4273408LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1090 = 15879U;
	int16_t x1091 = INT16_MIN;
	static int64_t x1092 = INT64_MAX;
	volatile int64_t t178 = -6LL;

    t178 = ((x1089|(x1090*x1091))*x1092);

    if (t178 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1094 = -1;
	int16_t x1095 = -1;
	volatile uint64_t x1096 = 297LLU;
	static uint64_t t179 = 11001140514690LLU;

    t179 = ((x1093|(x1094*x1095))*x1096);

    if (t179 != 9731799LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1097 = INT16_MAX;
	uint16_t x1098 = 433U;
	int8_t x1099 = -1;
	int16_t x1100 = -2086;
	static volatile int32_t t180 = -199;

    t180 = ((x1097|(x1098*x1099))*x1100);

    if (t180 != 2086) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x1101 = 164413LLU;
	uint16_t x1102 = 3U;
	int8_t x1103 = INT8_MAX;
	volatile int16_t x1104 = INT16_MIN;
	uint64_t t181 = 3776233824350143LLU;

    t181 = ((x1101|(x1102*x1103))*x1104);

    if (t181 != 18446744068311580672LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x1105 = 17864251U;
	int8_t x1106 = INT8_MIN;
	static volatile uint16_t x1107 = 230U;

    t182 = ((x1105|(x1106*x1107))*x1108);

    if (t182 != 811761664U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1113 = INT16_MIN;
	volatile uint32_t x1114 = 6404U;
	uint64_t x1115 = UINT64_MAX;
	uint16_t x1116 = 0U;
	static uint64_t t183 = 3185117925756525880LLU;

    t183 = ((x1113|(x1114*x1115))*x1116);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1128 = 2750738681LLU;
	uint64_t t184 = 56924257673559829LLU;

    t184 = ((x1125|(x1126*x1127))*x1128);

    if (t184 != 18446743721615000448LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int8_t x1129 = 3;
	uint8_t x1131 = 5U;
	int32_t x1132 = -1;

    t185 = ((x1129|(x1130*x1131))*x1132);

    if (t185 != -1275) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x1138 = 242U;
	static int64_t x1139 = 131485007588912LL;
	uint16_t x1140 = 0U;
	volatile int64_t t186 = 6690LL;

    t186 = ((x1137|(x1138*x1139))*x1140);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x1145 = INT8_MIN;
	int8_t x1147 = INT8_MIN;
	int16_t x1148 = INT16_MAX;
	int32_t t187 = 215;

    t187 = ((x1145|(x1146*x1147))*x1148);

    if (t187 != -4194176) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1161 = 46;
	volatile int16_t x1163 = INT16_MIN;
	uint8_t x1164 = 0U;
	volatile int32_t t188 = 84;

    t188 = ((x1161|(x1162*x1163))*x1164);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1165 = -10620011908LL;
	static volatile uint8_t x1166 = 10U;
	int16_t x1167 = INT16_MIN;

    t189 = ((x1165|(x1166*x1167))*x1168);

    if (t189 != 34180LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x1169 = 2438U;
	uint8_t x1170 = 26U;
	volatile int8_t x1171 = INT8_MIN;
	uint32_t t190 = 2026120U;

    t190 = ((x1169|(x1170*x1171))*x1172);

    if (t190 != 4294922602U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x1173 = INT8_MIN;
	int8_t x1174 = -1;
	uint16_t x1175 = UINT16_MAX;
	volatile int16_t x1176 = -1861;
	static int32_t t191 = -3;

    t191 = ((x1173|(x1174*x1175))*x1176);

    if (t191 != 236347) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1177 = INT8_MIN;
	static uint16_t x1178 = UINT16_MAX;
	static int64_t x1180 = -1LL;
	int64_t t192 = -12LL;

    t192 = ((x1177|(x1178*x1179))*x1180);

    if (t192 != 127LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x1186 = -14960762187161LL;
	static volatile uint8_t x1187 = UINT8_MAX;
	int8_t x1188 = INT8_MAX;
	volatile int64_t t193 = -1471425248879339656LL;

    t193 = ((x1185|(x1186*x1187))*x1188);

    if (t193 != -484504283431208985LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int8_t x1190 = INT8_MIN;
	uint8_t x1192 = UINT8_MAX;

    t194 = ((x1189|(x1190*x1191))*x1192);

    if (t194 != 4294950466U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x1193 = -38;
	static volatile uint16_t x1194 = 7U;
	uint16_t x1195 = 194U;
	int32_t t195 = -185445;

    t195 = ((x1193|(x1194*x1195))*x1196);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1197 = INT64_MIN;
	int8_t x1199 = -1;

    t196 = ((x1197|(x1198*x1199))*x1200);

    if (t196 != 30064771058LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1202 = -950;
	int8_t x1204 = -1;
	static volatile uint64_t t197 = 441443300893359LLU;

    t197 = ((x1201|(x1202*x1203))*x1204);

    if (t197 != 242186LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint32_t x1209 = 0U;
	static int32_t x1210 = INT32_MIN;
	static volatile int8_t x1212 = INT8_MAX;
	static uint64_t t198 = 15515859563LLU;

    t198 = ((x1209|(x1210*x1211))*x1212);

    if (t198 != 18413455143702888448LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1213 = 48;
	static volatile int8_t x1214 = INT8_MIN;
	uint32_t x1215 = 1U;
	int8_t x1216 = -36;
	static uint32_t t199 = 159542932U;

    t199 = ((x1213|(x1214*x1215))*x1216);

    if (t199 != 2880U) { NG(); } else { ; }
	
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

