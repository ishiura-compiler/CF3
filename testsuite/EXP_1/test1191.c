
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

int8_t x6 = -1;
volatile uint64_t x10 = 49LLU;
uint64_t x50 = 103906569091476273LLU;
uint8_t x61 = UINT8_MAX;
volatile int32_t t8 = 453939;
int32_t x66 = 111596;
volatile int16_t x69 = INT16_MIN;
volatile int16_t x70 = INT16_MIN;
volatile uint16_t x71 = 5U;
uint32_t t10 = 26333U;
static volatile int8_t x78 = 0;
uint32_t x80 = 100U;
static int8_t x88 = 15;
int16_t x93 = INT16_MIN;
int16_t x102 = INT16_MAX;
int8_t x106 = INT8_MAX;
uint32_t x110 = 5701974U;
static int32_t x114 = INT32_MAX;
uint32_t x116 = UINT32_MAX;
int64_t x128 = -100621127LL;
int64_t t22 = 85021846554LL;
int64_t t23 = -1LL;
int16_t x136 = -1;
int32_t x141 = 11697;
static int16_t x142 = INT16_MAX;
volatile int32_t t25 = 55;
volatile uint16_t x155 = 14797U;
int8_t x158 = 0;
static int8_t x160 = INT8_MIN;
static int32_t t28 = -953;
uint16_t x164 = 4176U;
static int32_t t29 = -5690;
int8_t x168 = INT8_MAX;
uint64_t t30 = 14469428377LLU;
int8_t x172 = INT8_MIN;
int64_t x178 = INT64_MIN;
uint16_t x179 = 44U;
int32_t x188 = -1;
static int32_t t34 = -34735;
static int16_t x195 = 1;
uint32_t x201 = UINT32_MAX;
volatile int8_t x203 = INT8_MAX;
static volatile int8_t x204 = -1;
int32_t t37 = -13;
uint64_t t38 = 11116850LLU;
int32_t x209 = -1;
volatile int64_t x210 = 3929648958329761LL;
int32_t x211 = -7;
uint8_t x212 = 1U;
static int16_t x218 = INT16_MAX;
int8_t x227 = INT8_MIN;
int32_t x231 = 15958269;
int8_t x238 = INT8_MIN;
int16_t x239 = 13980;
volatile int16_t x240 = -1;
volatile int32_t x244 = -1;
int8_t x246 = 0;
int32_t t46 = -348;
int64_t x255 = -1LL;
static int64_t x258 = -1LL;
volatile int64_t t49 = 4810681650135LL;
uint32_t t50 = 957480U;
int64_t x277 = INT64_MIN;
volatile int64_t t52 = 428413310926LL;
static int16_t x292 = -1;
static uint32_t x297 = 183U;
int8_t x300 = -1;
int32_t t57 = -46;
int64_t x305 = INT64_MIN;
volatile uint16_t x311 = UINT16_MAX;
int32_t t59 = 4102374;
int16_t x326 = 50;
static uint8_t x327 = UINT8_MAX;
int64_t x329 = INT64_MAX;
volatile int64_t x332 = -1LL;
int64_t x339 = INT64_MAX;
volatile int8_t x340 = 2;
volatile int64_t t65 = -4839648912933LL;
int64_t x343 = -1LL;
int32_t x346 = INT32_MIN;
int8_t x356 = INT8_MIN;
int32_t x357 = INT32_MIN;
int32_t x360 = -126980;
uint32_t x361 = 191U;
static int8_t x363 = -1;
volatile uint64_t x368 = 82647059106475LLU;
uint64_t t71 = 96LLU;
uint32_t x379 = 743853508U;
volatile uint32_t t73 = 0U;
static volatile uint16_t x382 = 56U;
int8_t x389 = -1;
volatile int16_t x393 = INT16_MIN;
static volatile int8_t x397 = INT8_MIN;
static uint64_t x402 = UINT64_MAX;
static int64_t x404 = -1LL;
int8_t x411 = 37;
uint64_t x415 = 82363277778LLU;
volatile uint8_t x421 = UINT8_MAX;
volatile uint32_t t84 = 182195U;
volatile int64_t x431 = -192171425195418642LL;
int64_t x440 = INT64_MIN;
uint16_t x444 = UINT16_MAX;
uint64_t t87 = 21388LLU;
volatile int8_t x446 = INT8_MIN;
volatile int32_t t88 = -131028;
static volatile int8_t x450 = INT8_MAX;
int16_t x452 = INT16_MIN;
volatile int16_t x464 = INT16_MIN;
uint16_t x466 = 15U;
static int64_t t93 = -22729248681733LL;
int8_t x477 = INT8_MIN;
int16_t x478 = INT16_MAX;
int16_t x483 = INT16_MAX;
volatile int32_t t99 = -1;
static int32_t t101 = 896;
uint64_t t102 = 2658948LLU;
volatile int16_t x527 = -108;
int8_t x528 = -16;
volatile int8_t x551 = INT8_MIN;
int8_t x564 = INT8_MIN;
static volatile int32_t x566 = 24501788;
int32_t x568 = -1;
volatile int32_t t111 = -13294;
volatile int64_t x573 = INT64_MIN;
int8_t x576 = -23;
int16_t x579 = INT16_MIN;
int32_t t114 = 15;
volatile uint16_t x583 = 22U;
uint32_t x585 = 122550187U;
uint32_t x590 = 728U;
volatile int32_t x594 = INT32_MIN;
int64_t x598 = INT64_MIN;
int8_t x600 = -17;
int64_t x601 = -21217LL;
static uint16_t x614 = UINT16_MAX;
int32_t t123 = 134;
volatile int32_t t124 = 32046829;
int8_t x626 = 0;
volatile int32_t t125 = -267330012;
int16_t x631 = -1;
volatile uint32_t t127 = 872U;
static int64_t x648 = -1LL;
uint8_t x649 = UINT8_MAX;
int32_t x650 = -1;
int32_t x663 = -1;
int64_t t136 = -80LL;
int8_t x690 = -1;
int64_t x691 = 269LL;
int32_t x697 = INT32_MIN;
volatile int8_t x698 = INT8_MIN;
uint8_t x702 = 67U;
volatile uint64_t t142 = 250359LLU;
uint16_t x708 = 0U;
volatile int32_t t143 = -248917;
int64_t t145 = -2384429317472118185LL;
int8_t x718 = 38;
volatile int32_t t146 = -67246337;
int16_t x724 = 7194;
uint64_t x739 = UINT64_MAX;
int32_t x741 = 197889;
int8_t x751 = INT8_MAX;
uint32_t x752 = 1208U;
static int16_t x753 = INT16_MIN;
volatile int32_t t154 = 75963841;
volatile int32_t x757 = -1;
int8_t x759 = -2;
uint32_t x760 = UINT32_MAX;
volatile int8_t x761 = -1;
uint16_t x764 = 11U;
int64_t x765 = INT64_MAX;
uint64_t x767 = 2956LLU;
static volatile uint64_t t157 = 98717321053LLU;
int32_t x769 = INT32_MIN;
uint8_t x770 = UINT8_MAX;
int8_t x776 = INT8_MIN;
static uint64_t t160 = 5619177LLU;
uint32_t x783 = 253U;
uint16_t x786 = UINT16_MAX;
volatile int8_t x788 = INT8_MAX;
uint64_t x791 = UINT64_MAX;
uint32_t t165 = 127U;
uint32_t x802 = 678651698U;
static int8_t x805 = 4;
static uint64_t t167 = 1159631117LLU;
volatile int8_t x810 = -3;
volatile int32_t t168 = 5253630;
uint16_t x815 = 24U;
static volatile uint16_t x817 = UINT16_MAX;
int64_t t173 = -4122618032038053118LL;
int8_t x837 = INT8_MAX;
int64_t x845 = INT64_MIN;
int64_t x846 = INT64_MAX;
int8_t x847 = INT8_MIN;
uint16_t x859 = 234U;
uint32_t t177 = 1U;
int16_t x866 = INT16_MIN;
volatile int8_t x868 = -9;
volatile int32_t t178 = 189319;
int16_t x871 = 1;
int16_t x876 = INT16_MIN;
uint8_t x885 = 1U;
int64_t x886 = INT64_MAX;
volatile int32_t t183 = 761063;
int16_t x893 = INT16_MIN;
static int16_t x895 = 25;
static volatile uint32_t x923 = 183594U;
int64_t x924 = 2086871188754LL;
int64_t x925 = 1135722126919160LL;
int16_t x926 = INT16_MIN;
uint64_t x952 = 304005049LLU;
uint8_t x960 = 45U;
uint64_t x966 = 6LLU;


void f0(void) {
    	static volatile int64_t x1 = -1LL;
	static int64_t x2 = INT64_MAX;
	int8_t x3 = 31;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 5;

    t0 = (((x1!=x2)-x3)+x4);

    if (t0 != -158) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 2269U;
	int32_t x7 = 3010;
	uint64_t x8 = 54566228659141LLU;
	volatile uint64_t t1 = 13235642LLU;

    t1 = (((x5!=x6)-x7)+x8);

    if (t1 != 54566228656132LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = INT32_MIN;
	volatile int32_t x11 = -1;
	int16_t x12 = -99;
	int32_t t2 = 18504;

    t2 = (((x9!=x10)-x11)+x12);

    if (t2 != -97) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x25 = UINT32_MAX;
	int16_t x26 = -1;
	int8_t x27 = -1;
	static volatile int16_t x28 = -7697;
	volatile int32_t t3 = 9358362;

    t3 = (((x25!=x26)-x27)+x28);

    if (t3 != -7696) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x37 = 94710U;
	int32_t x38 = 999;
	volatile int8_t x39 = INT8_MIN;
	int16_t x40 = INT16_MAX;
	int32_t t4 = 111332;

    t4 = (((x37!=x38)-x39)+x40);

    if (t4 != 32896) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x41 = -1;
	uint8_t x42 = 13U;
	volatile uint32_t x43 = 3186244U;
	int64_t x44 = INT64_MIN;
	static volatile int64_t t5 = 66651LL;

    t5 = (((x41!=x42)-x43)+x44);

    if (t5 != -9223372032562994755LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x49 = UINT16_MAX;
	static int8_t x51 = INT8_MIN;
	int16_t x52 = 713;
	int32_t t6 = -22;

    t6 = (((x49!=x50)-x51)+x52);

    if (t6 != 842) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x57 = -47815136LL;
	uint64_t x58 = UINT64_MAX;
	int32_t x59 = -2647;
	volatile int16_t x60 = INT16_MAX;
	volatile int32_t t7 = -1162;

    t7 = (((x57!=x58)-x59)+x60);

    if (t7 != 35415) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x62 = 5404678797181LLU;
	int8_t x63 = INT8_MIN;
	int32_t x64 = INT32_MIN;

    t8 = (((x61!=x62)-x63)+x64);

    if (t8 != -2147483519) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x65 = 20U;
	int32_t x67 = -1;
	int16_t x68 = INT16_MAX;
	volatile int32_t t9 = -1;

    t9 = (((x65!=x66)-x67)+x68);

    if (t9 != 32769) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x72 = 1025400100U;

    t10 = (((x69!=x70)-x71)+x72);

    if (t10 != 1025400095U) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x73 = INT64_MIN;
	int8_t x74 = -1;
	uint32_t x75 = 25936815U;
	int8_t x76 = 4;
	volatile uint32_t t11 = 746852145U;

    t11 = (((x73!=x74)-x75)+x76);

    if (t11 != 4269030486U) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint64_t x77 = 434149678577LLU;
	volatile uint8_t x79 = 1U;
	uint32_t t12 = 647U;

    t12 = (((x77!=x78)-x79)+x80);

    if (t12 != 100U) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x85 = -1;
	uint32_t x86 = 62U;
	int64_t x87 = -1LL;
	volatile int64_t t13 = -17244916261901985LL;

    t13 = (((x85!=x86)-x87)+x88);

    if (t13 != 17LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x89 = INT8_MIN;
	int64_t x90 = INT64_MAX;
	uint64_t x91 = UINT64_MAX;
	volatile int32_t x92 = -1;
	uint64_t t14 = 8169424187180179LLU;

    t14 = (((x89!=x90)-x91)+x92);

    if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	int32_t x96 = INT32_MIN;
	static int32_t t15 = 122841;

    t15 = (((x93!=x94)-x95)+x96);

    if (t15 != -2147450880) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x97 = 2720U;
	int64_t x98 = 4454LL;
	uint8_t x99 = 1U;
	int16_t x100 = INT16_MAX;
	int32_t t16 = 633;

    t16 = (((x97!=x98)-x99)+x100);

    if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x101 = INT16_MIN;
	volatile uint8_t x103 = UINT8_MAX;
	int8_t x104 = INT8_MIN;
	volatile int32_t t17 = -601230987;

    t17 = (((x101!=x102)-x103)+x104);

    if (t17 != -382) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x105 = INT32_MAX;
	int32_t x107 = -1;
	int8_t x108 = INT8_MIN;
	volatile int32_t t18 = 1;

    t18 = (((x105!=x106)-x107)+x108);

    if (t18 != -126) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x109 = INT64_MIN;
	uint16_t x111 = UINT16_MAX;
	static int8_t x112 = INT8_MIN;
	int32_t t19 = 155;

    t19 = (((x109!=x110)-x111)+x112);

    if (t19 != -65662) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x113 = 5866U;
	int64_t x115 = INT64_MAX;
	static volatile int64_t t20 = 1091929629026LL;

    t20 = (((x113!=x114)-x115)+x116);

    if (t20 != -9223372032559808511LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x117 = INT16_MAX;
	uint16_t x118 = 0U;
	uint8_t x119 = UINT8_MAX;
	uint8_t x120 = 3U;
	int32_t t21 = 101589;

    t21 = (((x117!=x118)-x119)+x120);

    if (t21 != -251) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x125 = INT32_MIN;
	int32_t x126 = 94571;
	int32_t x127 = 3793882;

    t22 = (((x125!=x126)-x127)+x128);

    if (t22 != -104415008LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x129 = 606818LLU;
	uint8_t x130 = 1U;
	int64_t x131 = INT64_MAX;
	static int16_t x132 = 0;

    t23 = (((x129!=x130)-x131)+x132);

    if (t23 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x133 = UINT32_MAX;
	uint64_t x134 = 79032892LLU;
	int32_t x135 = -7;
	volatile int32_t t24 = 254557;

    t24 = (((x133!=x134)-x135)+x136);

    if (t24 != 7) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x143 = INT16_MIN;
	int32_t x144 = 51860;

    t25 = (((x141!=x142)-x143)+x144);

    if (t25 != 84629) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x145 = 15U;
	int8_t x146 = INT8_MAX;
	static uint8_t x147 = UINT8_MAX;
	int64_t x148 = INT64_MAX;
	int64_t t26 = 47975910LL;

    t26 = (((x145!=x146)-x147)+x148);

    if (t26 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x153 = INT8_MAX;
	int16_t x154 = -1;
	uint32_t x156 = 371964U;
	volatile uint32_t t27 = 150594U;

    t27 = (((x153!=x154)-x155)+x156);

    if (t27 != 357168U) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x157 = UINT32_MAX;
	uint16_t x159 = UINT16_MAX;

    t28 = (((x157!=x158)-x159)+x160);

    if (t28 != -65662) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x161 = 12534836830LLU;
	int8_t x162 = 5;
	uint16_t x163 = 1U;

    t29 = (((x161!=x162)-x163)+x164);

    if (t29 != 4176) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x165 = 25U;
	uint32_t x166 = 112U;
	static volatile uint64_t x167 = 1166328970652LLU;

    t30 = (((x165!=x166)-x167)+x168);

    if (t30 != 18446742907380581092LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x169 = INT8_MIN;
	uint32_t x170 = 10196301U;
	int16_t x171 = INT16_MIN;
	volatile int32_t t31 = 2;

    t31 = (((x169!=x170)-x171)+x172);

    if (t31 != 32641) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x177 = 390;
	volatile uint16_t x180 = 12U;
	int32_t t32 = -13564;

    t32 = (((x177!=x178)-x179)+x180);

    if (t32 != -31) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x185 = INT64_MIN;
	static uint64_t x186 = 231156736667923LLU;
	static volatile int32_t x187 = -8;
	int32_t t33 = 104019953;

    t33 = (((x185!=x186)-x187)+x188);

    if (t33 != 8) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x189 = 12255541968820192LLU;
	static int16_t x190 = -3;
	int16_t x191 = 4;
	volatile int8_t x192 = INT8_MIN;

    t34 = (((x189!=x190)-x191)+x192);

    if (t34 != -131) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x193 = UINT16_MAX;
	uint32_t x194 = 93760U;
	uint16_t x196 = 1387U;
	static volatile int32_t t35 = -3807;

    t35 = (((x193!=x194)-x195)+x196);

    if (t35 != 1387) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x197 = INT8_MAX;
	static volatile uint64_t x198 = 0LLU;
	uint32_t x199 = 364U;
	volatile uint32_t x200 = 9312U;
	uint32_t t36 = 11U;

    t36 = (((x197!=x198)-x199)+x200);

    if (t36 != 8949U) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x202 = 130791624U;

    t37 = (((x201!=x202)-x203)+x204);

    if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x205 = UINT8_MAX;
	static volatile int32_t x206 = -1;
	int64_t x207 = INT64_MAX;
	uint64_t x208 = 17340744070LLU;

    t38 = (((x205!=x206)-x207)+x208);

    if (t38 != 9223372054195519880LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t t39 = -120548;

    t39 = (((x209!=x210)-x211)+x212);

    if (t39 != 9) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x213 = INT8_MIN;
	int64_t x214 = -23696481332LL;
	int32_t x215 = 48046381;
	uint64_t x216 = UINT64_MAX;
	uint64_t t40 = 610358126151537LLU;

    t40 = (((x213!=x214)-x215)+x216);

    if (t40 != 18446744073661505235LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x217 = 3;
	static volatile int16_t x219 = INT16_MIN;
	uint8_t x220 = 3U;
	int32_t t41 = -1642;

    t41 = (((x217!=x218)-x219)+x220);

    if (t41 != 32772) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x225 = 2;
	static uint64_t x226 = 4LLU;
	int8_t x228 = INT8_MIN;
	volatile int32_t t42 = 27;

    t42 = (((x225!=x226)-x227)+x228);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x229 = INT32_MIN;
	volatile uint64_t x230 = 7004522808856616LLU;
	uint16_t x232 = 2U;
	volatile int32_t t43 = 142;

    t43 = (((x229!=x230)-x231)+x232);

    if (t43 != -15958266) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x237 = 6U;
	int32_t t44 = 2571;

    t44 = (((x237!=x238)-x239)+x240);

    if (t44 != -13980) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x241 = INT32_MIN;
	volatile int32_t x242 = INT32_MIN;
	uint64_t x243 = UINT64_MAX;
	uint64_t t45 = 2103656205348173LLU;

    t45 = (((x241!=x242)-x243)+x244);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x245 = INT64_MAX;
	int32_t x247 = -17464;
	static int8_t x248 = -25;

    t46 = (((x245!=x246)-x247)+x248);

    if (t46 != 17440) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x249 = INT64_MAX;
	uint64_t x250 = UINT64_MAX;
	int64_t x251 = -2018021432LL;
	uint64_t x252 = 73361079112232LLU;
	uint64_t t47 = 80508272621310019LLU;

    t47 = (((x249!=x250)-x251)+x252);

    if (t47 != 73363097133665LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x253 = 114U;
	int64_t x254 = -34915302325899878LL;
	int32_t x256 = INT32_MIN;
	int64_t t48 = 334236418724534LL;

    t48 = (((x253!=x254)-x255)+x256);

    if (t48 != -2147483646LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x257 = UINT8_MAX;
	static volatile int64_t x259 = -12359863LL;
	int8_t x260 = -3;

    t49 = (((x257!=x258)-x259)+x260);

    if (t49 != 12359861LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint8_t x273 = 1U;
	int8_t x274 = 1;
	volatile uint32_t x275 = 420765U;
	int32_t x276 = 118864;

    t50 = (((x273!=x274)-x275)+x276);

    if (t50 != 4294665395U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x278 = INT16_MAX;
	volatile int64_t x279 = -1LL;
	int16_t x280 = 1290;
	int64_t t51 = -128945339544215099LL;

    t51 = (((x277!=x278)-x279)+x280);

    if (t51 != 1292LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x281 = 63294320U;
	uint8_t x282 = UINT8_MAX;
	static volatile int16_t x283 = INT16_MAX;
	static int64_t x284 = -1LL;

    t52 = (((x281!=x282)-x283)+x284);

    if (t52 != -32767LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int32_t x285 = INT32_MIN;
	int32_t x286 = INT32_MAX;
	static int16_t x287 = -1;
	int16_t x288 = -314;
	int32_t t53 = 85227145;

    t53 = (((x285!=x286)-x287)+x288);

    if (t53 != -312) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x289 = INT8_MIN;
	int32_t x290 = INT32_MIN;
	int8_t x291 = 0;
	int32_t t54 = 40;

    t54 = (((x289!=x290)-x291)+x292);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x293 = 0;
	volatile int64_t x294 = -1607813710651LL;
	int32_t x295 = -1;
	int32_t x296 = INT32_MIN;
	int32_t t55 = -8036669;

    t55 = (((x293!=x294)-x295)+x296);

    if (t55 != -2147483646) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x298 = UINT64_MAX;
	static uint8_t x299 = 2U;
	int32_t t56 = 12827941;

    t56 = (((x297!=x298)-x299)+x300);

    if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x301 = 14U;
	volatile int64_t x302 = -1LL;
	int8_t x303 = -3;
	int16_t x304 = INT16_MIN;

    t57 = (((x301!=x302)-x303)+x304);

    if (t57 != -32764) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x306 = INT32_MIN;
	int32_t x307 = 9;
	uint16_t x308 = UINT16_MAX;
	int32_t t58 = 2023;

    t58 = (((x305!=x306)-x307)+x308);

    if (t58 != 65527) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x309 = INT64_MIN;
	static uint32_t x310 = UINT32_MAX;
	int32_t x312 = 218317793;

    t59 = (((x309!=x310)-x311)+x312);

    if (t59 != 218252259) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x313 = -1;
	uint32_t x314 = 80972U;
	int16_t x315 = 4;
	int64_t x316 = INT64_MAX;
	volatile int64_t t60 = -253LL;

    t60 = (((x313!=x314)-x315)+x316);

    if (t60 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x321 = 48;
	int8_t x322 = INT8_MIN;
	static volatile int16_t x323 = 12;
	static int32_t x324 = 2089;
	int32_t t61 = 946513001;

    t61 = (((x321!=x322)-x323)+x324);

    if (t61 != 2078) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x325 = INT32_MAX;
	int32_t x328 = INT32_MAX;
	int32_t t62 = 1218;

    t62 = (((x325!=x326)-x327)+x328);

    if (t62 != 2147483393) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x330 = 809994283472LL;
	volatile int16_t x331 = 248;
	static volatile int64_t t63 = -248LL;

    t63 = (((x329!=x330)-x331)+x332);

    if (t63 != -248LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x333 = 2861933U;
	volatile uint16_t x334 = 3U;
	int32_t x335 = -1;
	volatile int32_t x336 = INT32_MIN;
	int32_t t64 = 21;

    t64 = (((x333!=x334)-x335)+x336);

    if (t64 != -2147483646) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x337 = -1442;
	int64_t x338 = -1LL;

    t65 = (((x337!=x338)-x339)+x340);

    if (t65 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x341 = 116210515LLU;
	int64_t x342 = -1LL;
	uint64_t x344 = 460463286414134LLU;
	static volatile uint64_t t66 = 414156LLU;

    t66 = (((x341!=x342)-x343)+x344);

    if (t66 != 460463286414136LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int16_t x345 = INT16_MIN;
	static volatile int16_t x347 = INT16_MIN;
	static volatile uint64_t x348 = 797LLU;
	static uint64_t t67 = 25226937376846299LLU;

    t67 = (((x345!=x346)-x347)+x348);

    if (t67 != 33566LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x353 = UINT64_MAX;
	int32_t x354 = -1;
	static int16_t x355 = INT16_MIN;
	static int32_t t68 = 3;

    t68 = (((x353!=x354)-x355)+x356);

    if (t68 != 32640) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x358 = 15;
	volatile int8_t x359 = 7;
	static volatile int32_t t69 = -3;

    t69 = (((x357!=x358)-x359)+x360);

    if (t69 != -126986) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x362 = -1LL;
	static volatile int16_t x364 = -536;
	volatile int32_t t70 = 2817;

    t70 = (((x361!=x362)-x363)+x364);

    if (t70 != -534) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x365 = INT64_MAX;
	uint16_t x366 = 12U;
	volatile int8_t x367 = INT8_MAX;

    t71 = (((x365!=x366)-x367)+x368);

    if (t71 != 82647059106349LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x373 = INT16_MAX;
	uint32_t x374 = 325599U;
	volatile int32_t x375 = -1;
	int32_t x376 = 1;
	int32_t t72 = 11;

    t72 = (((x373!=x374)-x375)+x376);

    if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x377 = 9U;
	int64_t x378 = -8277490LL;
	int8_t x380 = -1;

    t73 = (((x377!=x378)-x379)+x380);

    if (t73 != 3551113788U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x381 = UINT8_MAX;
	uint64_t x383 = UINT64_MAX;
	volatile int8_t x384 = INT8_MAX;
	uint64_t t74 = 975171LLU;

    t74 = (((x381!=x382)-x383)+x384);

    if (t74 != 129LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x390 = UINT16_MAX;
	uint32_t x391 = 13U;
	int32_t x392 = 1692033;
	volatile uint32_t t75 = 432033884U;

    t75 = (((x389!=x390)-x391)+x392);

    if (t75 != 1692021U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x394 = INT32_MIN;
	uint16_t x395 = 1646U;
	int8_t x396 = INT8_MAX;
	volatile int32_t t76 = -1;

    t76 = (((x393!=x394)-x395)+x396);

    if (t76 != -1518) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x398 = INT32_MAX;
	static int16_t x399 = -1;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t77 = 316LLU;

    t77 = (((x397!=x398)-x399)+x400);

    if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x401 = INT64_MIN;
	volatile int8_t x403 = -1;
	volatile int64_t t78 = 12LL;

    t78 = (((x401!=x402)-x403)+x404);

    if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x405 = INT32_MIN;
	int16_t x406 = INT16_MIN;
	uint32_t x407 = 928530886U;
	int16_t x408 = -1;
	uint32_t t79 = 2768U;

    t79 = (((x405!=x406)-x407)+x408);

    if (t79 != 3366436410U) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x409 = -1;
	volatile uint32_t x410 = UINT32_MAX;
	static volatile int16_t x412 = 1;
	int32_t t80 = 2581;

    t80 = (((x409!=x410)-x411)+x412);

    if (t80 != -36) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x413 = INT16_MIN;
	volatile uint8_t x414 = 40U;
	volatile int64_t x416 = INT64_MAX;
	volatile uint64_t t81 = 49223377202722LLU;

    t81 = (((x413!=x414)-x415)+x416);

    if (t81 != 9223371954491498030LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x417 = 35U;
	int8_t x418 = 8;
	volatile int8_t x419 = INT8_MIN;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t82 = -19759622;

    t82 = (((x417!=x418)-x419)+x420);

    if (t82 != 65664) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x422 = UINT16_MAX;
	int64_t x423 = 61LL;
	int8_t x424 = INT8_MIN;
	int64_t t83 = -3673676318033957LL;

    t83 = (((x421!=x422)-x423)+x424);

    if (t83 != -188LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x425 = INT8_MIN;
	volatile uint16_t x426 = 2054U;
	uint32_t x427 = 153U;
	uint8_t x428 = 1U;

    t84 = (((x425!=x426)-x427)+x428);

    if (t84 != 4294967145U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x429 = 20U;
	static volatile int64_t x430 = INT64_MAX;
	uint16_t x432 = 666U;
	int64_t t85 = 799LL;

    t85 = (((x429!=x430)-x431)+x432);

    if (t85 != 192171425195419309LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint32_t x437 = 4004219U;
	volatile int32_t x438 = INT32_MIN;
	uint64_t x439 = 32551LLU;
	static uint64_t t86 = 15435435LLU;

    t86 = (((x437!=x438)-x439)+x440);

    if (t86 != 9223372036854743258LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x441 = 603;
	static int32_t x442 = -1;
	uint64_t x443 = 9704731167108121LLU;

    t87 = (((x441!=x442)-x443)+x444);

    if (t87 != 18437039342542509031LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x445 = 0U;
	int16_t x447 = INT16_MIN;
	uint16_t x448 = 12271U;

    t88 = (((x445!=x446)-x447)+x448);

    if (t88 != 45040) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x449 = -1;
	static int8_t x451 = -8;
	int32_t t89 = 47120;

    t89 = (((x449!=x450)-x451)+x452);

    if (t89 != -32759) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x453 = 0;
	static int16_t x454 = 11;
	static int64_t x455 = INT64_MAX;
	uint8_t x456 = UINT8_MAX;
	int64_t t90 = 3783506835148950LL;

    t90 = (((x453!=x454)-x455)+x456);

    if (t90 != -9223372036854775551LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x461 = 3U;
	static uint16_t x462 = 0U;
	int8_t x463 = INT8_MIN;
	int32_t t91 = -1964;

    t91 = (((x461!=x462)-x463)+x464);

    if (t91 != -32639) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x465 = -27LL;
	uint32_t x467 = 246U;
	uint64_t x468 = 8006900759925LLU;
	volatile uint64_t t92 = 194LLU;

    t92 = (((x465!=x466)-x467)+x468);

    if (t92 != 8011195726976LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint16_t x473 = 9U;
	uint16_t x474 = UINT16_MAX;
	int32_t x475 = -1;
	static volatile int64_t x476 = 328206934LL;

    t93 = (((x473!=x474)-x475)+x476);

    if (t93 != 328206936LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x479 = INT64_MAX;
	volatile uint8_t x480 = 116U;
	volatile int64_t t94 = 34047648296LL;

    t94 = (((x477!=x478)-x479)+x480);

    if (t94 != -9223372036854775690LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x481 = 13U;
	static int8_t x482 = INT8_MIN;
	int8_t x484 = 5;
	int32_t t95 = 4219599;

    t95 = (((x481!=x482)-x483)+x484);

    if (t95 != -32761) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x485 = 16U;
	int32_t x486 = INT32_MAX;
	uint8_t x487 = 5U;
	uint8_t x488 = UINT8_MAX;
	volatile int32_t t96 = -17454;

    t96 = (((x485!=x486)-x487)+x488);

    if (t96 != 251) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x493 = 10U;
	static int16_t x494 = INT16_MIN;
	int8_t x495 = -1;
	uint16_t x496 = 6220U;
	volatile int32_t t97 = 9026;

    t97 = (((x493!=x494)-x495)+x496);

    if (t97 != 6222) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x497 = INT32_MAX;
	int64_t x498 = -1LL;
	uint16_t x499 = 103U;
	int64_t x500 = INT64_MAX;
	int64_t t98 = -1723825491010699LL;

    t98 = (((x497!=x498)-x499)+x500);

    if (t98 != 9223372036854775705LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x501 = 0;
	uint64_t x502 = 3018525783LLU;
	int8_t x503 = INT8_MAX;
	int8_t x504 = -1;

    t99 = (((x501!=x502)-x503)+x504);

    if (t99 != -127) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x505 = INT32_MAX;
	int16_t x506 = INT16_MIN;
	int16_t x507 = INT16_MIN;
	int8_t x508 = INT8_MIN;
	static int32_t t100 = 230952;

    t100 = (((x505!=x506)-x507)+x508);

    if (t100 != 32641) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x513 = INT32_MIN;
	int8_t x514 = -1;
	int16_t x515 = 14090;
	int8_t x516 = INT8_MIN;

    t101 = (((x513!=x514)-x515)+x516);

    if (t101 != -14217) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x517 = 26U;
	int64_t x518 = 1LL;
	uint64_t x519 = 6180587103469LLU;
	int8_t x520 = 0;

    t102 = (((x517!=x518)-x519)+x520);

    if (t102 != 18446737893122448148LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x521 = -993319LL;
	int8_t x522 = INT8_MAX;
	static uint16_t x523 = 27U;
	int64_t x524 = INT64_MAX;
	static int64_t t103 = 30737010LL;

    t103 = (((x521!=x522)-x523)+x524);

    if (t103 != 9223372036854775781LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x525 = 1200366663466LLU;
	int64_t x526 = -1LL;
	int32_t t104 = 113;

    t104 = (((x525!=x526)-x527)+x528);

    if (t104 != 93) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x529 = -51523;
	uint32_t x530 = 444418U;
	uint16_t x531 = 109U;
	static int16_t x532 = INT16_MIN;
	static int32_t t105 = 68733105;

    t105 = (((x529!=x530)-x531)+x532);

    if (t105 != -32876) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x545 = 56;
	static int32_t x546 = INT32_MAX;
	volatile int16_t x547 = INT16_MIN;
	volatile int64_t x548 = 3024753236LL;
	int64_t t106 = -2370LL;

    t106 = (((x545!=x546)-x547)+x548);

    if (t106 != 3024786005LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x549 = INT8_MIN;
	int16_t x550 = -12;
	static volatile uint64_t x552 = 3LLU;
	uint64_t t107 = 2LLU;

    t107 = (((x549!=x550)-x551)+x552);

    if (t107 != 132LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x553 = 35182;
	uint8_t x554 = 32U;
	int32_t x555 = -2017;
	volatile int64_t x556 = -50754250776955LL;
	volatile int64_t t108 = -364662027LL;

    t108 = (((x553!=x554)-x555)+x556);

    if (t108 != -50754250774937LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x557 = UINT8_MAX;
	static uint32_t x558 = UINT32_MAX;
	static volatile uint64_t x559 = 157LLU;
	static int64_t x560 = INT64_MAX;
	uint64_t t109 = 552031219LLU;

    t109 = (((x557!=x558)-x559)+x560);

    if (t109 != 9223372036854775651LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x561 = 7U;
	static int8_t x562 = -6;
	int64_t x563 = -1LL;
	volatile int64_t t110 = -471314LL;

    t110 = (((x561!=x562)-x563)+x564);

    if (t110 != -126LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x565 = -1LL;
	uint8_t x567 = 1U;

    t111 = (((x565!=x566)-x567)+x568);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x569 = -284;
	int16_t x570 = 6444;
	uint32_t x571 = 46915U;
	uint32_t x572 = 94533U;
	volatile uint32_t t112 = 238379355U;

    t112 = (((x569!=x570)-x571)+x572);

    if (t112 != 47619U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x574 = INT8_MIN;
	int16_t x575 = INT16_MIN;
	volatile int32_t t113 = 1716;

    t113 = (((x573!=x574)-x575)+x576);

    if (t113 != 32746) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x577 = -488384880728651716LL;
	int64_t x578 = -1LL;
	int16_t x580 = INT16_MIN;

    t114 = (((x577!=x578)-x579)+x580);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x581 = UINT8_MAX;
	int16_t x582 = 1;
	int64_t x584 = -7456LL;
	static int64_t t115 = 102282LL;

    t115 = (((x581!=x582)-x583)+x584);

    if (t115 != -7477LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x586 = INT32_MAX;
	int16_t x587 = -1;
	static int64_t x588 = 42627128LL;
	static volatile int64_t t116 = 29LL;

    t116 = (((x585!=x586)-x587)+x588);

    if (t116 != 42627130LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x589 = INT16_MAX;
	static int64_t x591 = 1540LL;
	static int64_t x592 = INT64_MAX;
	volatile int64_t t117 = 128239286929955920LL;

    t117 = (((x589!=x590)-x591)+x592);

    if (t117 != 9223372036854774268LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x593 = -1;
	static int16_t x595 = INT16_MAX;
	int8_t x596 = INT8_MIN;
	volatile int32_t t118 = 330563695;

    t118 = (((x593!=x594)-x595)+x596);

    if (t118 != -32894) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x597 = -9;
	int64_t x599 = -7304999797LL;
	int64_t t119 = -4207LL;

    t119 = (((x597!=x598)-x599)+x600);

    if (t119 != 7304999781LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x602 = -970;
	uint64_t x603 = 1950112592513363LLU;
	static int8_t x604 = INT8_MIN;
	uint64_t t120 = 327326LLU;

    t120 = (((x601!=x602)-x603)+x604);

    if (t120 != 18444793961117038126LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x605 = -1;
	static int16_t x606 = INT16_MIN;
	uint16_t x607 = UINT16_MAX;
	static volatile uint16_t x608 = UINT16_MAX;
	int32_t t121 = 0;

    t121 = (((x605!=x606)-x607)+x608);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x609 = 18U;
	int8_t x610 = INT8_MIN;
	int32_t x611 = 1;
	int16_t x612 = INT16_MIN;
	volatile int32_t t122 = -158008;

    t122 = (((x609!=x610)-x611)+x612);

    if (t122 != -32768) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x613 = UINT16_MAX;
	int16_t x615 = 38;
	int32_t x616 = 175267919;

    t123 = (((x613!=x614)-x615)+x616);

    if (t123 != 175267881) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int64_t x617 = INT64_MIN;
	static int32_t x618 = -2266;
	int32_t x619 = INT32_MAX;
	int16_t x620 = -1;

    t124 = (((x617!=x618)-x619)+x620);

    if (t124 != -2147483647) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x625 = 308;
	uint8_t x627 = 14U;
	int8_t x628 = INT8_MAX;

    t125 = (((x625!=x626)-x627)+x628);

    if (t125 != 114) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x629 = 292140094U;
	uint8_t x630 = 0U;
	int64_t x632 = INT64_MIN;
	volatile int64_t t126 = -416314984167263LL;

    t126 = (((x629!=x630)-x631)+x632);

    if (t126 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x633 = UINT8_MAX;
	static volatile uint8_t x634 = 67U;
	int16_t x635 = -1;
	uint32_t x636 = 8U;

    t127 = (((x633!=x634)-x635)+x636);

    if (t127 != 10U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x637 = INT64_MIN;
	volatile int8_t x638 = INT8_MIN;
	volatile uint64_t x639 = UINT64_MAX;
	static volatile uint8_t x640 = UINT8_MAX;
	static uint64_t t128 = 1505887570LLU;

    t128 = (((x637!=x638)-x639)+x640);

    if (t128 != 257LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x641 = UINT64_MAX;
	uint32_t x642 = 509152U;
	int16_t x643 = INT16_MIN;
	volatile int64_t x644 = INT64_MIN;
	int64_t t129 = 106LL;

    t129 = (((x641!=x642)-x643)+x644);

    if (t129 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x645 = -435201368LL;
	uint8_t x646 = 5U;
	int64_t x647 = 1447459169344628LL;
	int64_t t130 = -1LL;

    t130 = (((x645!=x646)-x647)+x648);

    if (t130 != -1447459169344628LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x651 = 121LL;
	int64_t x652 = -4LL;
	int64_t t131 = -1LL;

    t131 = (((x649!=x650)-x651)+x652);

    if (t131 != -124LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x653 = INT32_MIN;
	volatile uint8_t x654 = 56U;
	static int16_t x655 = INT16_MAX;
	uint64_t x656 = 84963210766LLU;
	volatile uint64_t t132 = 4957673739153LLU;

    t132 = (((x653!=x654)-x655)+x656);

    if (t132 != 84963178000LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x661 = 41442;
	int32_t x662 = INT32_MIN;
	uint32_t x664 = UINT32_MAX;
	volatile uint32_t t133 = 54U;

    t133 = (((x661!=x662)-x663)+x664);

    if (t133 != 1U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x665 = -1;
	static uint8_t x666 = 33U;
	int64_t x667 = 106480665618177610LL;
	volatile int16_t x668 = INT16_MIN;
	static volatile int64_t t134 = -7815759954118LL;

    t134 = (((x665!=x666)-x667)+x668);

    if (t134 != -106480665618210377LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x669 = UINT8_MAX;
	uint32_t x670 = 7418911U;
	static volatile int64_t x671 = -9LL;
	int64_t x672 = 81LL;
	volatile int64_t t135 = -127647803LL;

    t135 = (((x669!=x670)-x671)+x672);

    if (t135 != 91LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x673 = INT16_MIN;
	int64_t x674 = 147749LL;
	static int16_t x675 = INT16_MIN;
	int64_t x676 = INT64_MIN;

    t136 = (((x673!=x674)-x675)+x676);

    if (t136 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x677 = UINT16_MAX;
	int64_t x678 = INT64_MAX;
	volatile uint8_t x679 = UINT8_MAX;
	volatile int8_t x680 = -1;
	volatile int32_t t137 = 221555;

    t137 = (((x677!=x678)-x679)+x680);

    if (t137 != -255) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x685 = INT64_MAX;
	int64_t x686 = 3873102125LL;
	volatile int16_t x687 = 16;
	int64_t x688 = 63LL;
	static volatile int64_t t138 = -147730746LL;

    t138 = (((x685!=x686)-x687)+x688);

    if (t138 != 48LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x689 = INT8_MIN;
	volatile uint8_t x692 = UINT8_MAX;
	volatile int64_t t139 = -29769290144374411LL;

    t139 = (((x689!=x690)-x691)+x692);

    if (t139 != -13LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x693 = 1U;
	int8_t x694 = -1;
	uint8_t x695 = 0U;
	volatile int16_t x696 = -12;
	volatile int32_t t140 = -3401;

    t140 = (((x693!=x694)-x695)+x696);

    if (t140 != -11) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x699 = UINT16_MAX;
	int8_t x700 = -1;
	static volatile int32_t t141 = -43691107;

    t141 = (((x697!=x698)-x699)+x700);

    if (t141 != -65535) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x701 = 124U;
	int8_t x703 = 12;
	volatile uint64_t x704 = 48LLU;

    t142 = (((x701!=x702)-x703)+x704);

    if (t142 != 37LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x705 = UINT16_MAX;
	volatile int16_t x706 = INT16_MAX;
	static uint8_t x707 = 3U;

    t143 = (((x705!=x706)-x707)+x708);

    if (t143 != -2) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x709 = 192956567801263LLU;
	static volatile int32_t x710 = -18;
	uint16_t x711 = 360U;
	int16_t x712 = INT16_MAX;
	int32_t t144 = -20;

    t144 = (((x709!=x710)-x711)+x712);

    if (t144 != 32408) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x713 = 0U;
	int8_t x714 = -1;
	int64_t x715 = INT64_MAX;
	int8_t x716 = INT8_MAX;

    t145 = (((x713!=x714)-x715)+x716);

    if (t145 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x717 = INT16_MIN;
	volatile int8_t x719 = INT8_MIN;
	int16_t x720 = -1;

    t146 = (((x717!=x718)-x719)+x720);

    if (t146 != 128) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x721 = 0U;
	volatile uint16_t x722 = 36U;
	int16_t x723 = INT16_MIN;
	int32_t t147 = -1373997;

    t147 = (((x721!=x722)-x723)+x724);

    if (t147 != 39963) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x725 = -1069921034699594LL;
	int16_t x726 = INT16_MIN;
	uint16_t x727 = UINT16_MAX;
	int32_t x728 = INT32_MAX;
	int32_t t148 = 99239;

    t148 = (((x725!=x726)-x727)+x728);

    if (t148 != 2147418113) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x733 = INT32_MIN;
	static int8_t x734 = 16;
	uint16_t x735 = UINT16_MAX;
	uint64_t x736 = 5762823134985020LLU;
	volatile uint64_t t149 = 30100108330660742LLU;

    t149 = (((x733!=x734)-x735)+x736);

    if (t149 != 5762823134919486LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x737 = INT64_MAX;
	volatile uint8_t x738 = 20U;
	int64_t x740 = -1221809381076900355LL;
	volatile uint64_t t150 = 6693885LLU;

    t150 = (((x737!=x738)-x739)+x740);

    if (t150 != 17224934692632651263LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x742 = UINT8_MAX;
	int32_t x743 = -1;
	volatile int8_t x744 = INT8_MIN;
	int32_t t151 = 149014224;

    t151 = (((x741!=x742)-x743)+x744);

    if (t151 != -126) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x745 = -1;
	int32_t x746 = INT32_MAX;
	int32_t x747 = INT32_MAX;
	int32_t x748 = INT32_MAX;
	int32_t t152 = -232296;

    t152 = (((x745!=x746)-x747)+x748);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x749 = INT8_MIN;
	uint32_t x750 = 7581352U;
	uint32_t t153 = 18U;

    t153 = (((x749!=x750)-x751)+x752);

    if (t153 != 1082U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x754 = INT32_MIN;
	static int16_t x755 = -1;
	volatile uint16_t x756 = 4U;

    t154 = (((x753!=x754)-x755)+x756);

    if (t154 != 6) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x758 = INT64_MIN;
	volatile uint32_t t155 = 1646931U;

    t155 = (((x757!=x758)-x759)+x760);

    if (t155 != 2U) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x762 = -391;
	uint32_t x763 = 225761455U;
	volatile uint32_t t156 = 54461082U;

    t156 = (((x761!=x762)-x763)+x764);

    if (t156 != 4069205853U) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint32_t x766 = 6U;
	uint64_t x768 = 506781LLU;

    t157 = (((x765!=x766)-x767)+x768);

    if (t157 != 503826LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x771 = INT16_MAX;
	int16_t x772 = INT16_MAX;
	int32_t t158 = -15185;

    t158 = (((x769!=x770)-x771)+x772);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x773 = INT8_MIN;
	volatile int8_t x774 = -1;
	int32_t x775 = -1;
	static volatile int32_t t159 = 2068;

    t159 = (((x773!=x774)-x775)+x776);

    if (t159 != -126) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x777 = -2973252544799LL;
	static uint8_t x778 = 0U;
	static uint64_t x779 = 2484833290LLU;
	int16_t x780 = -1;

    t160 = (((x777!=x778)-x779)+x780);

    if (t160 != 18446744071224718326LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x781 = 0U;
	uint32_t x782 = 1128942U;
	int8_t x784 = INT8_MIN;
	volatile uint32_t t161 = 5617165U;

    t161 = (((x781!=x782)-x783)+x784);

    if (t161 != 4294966916U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x785 = INT64_MIN;
	static int16_t x787 = -1;
	static volatile int32_t t162 = -234256430;

    t162 = (((x785!=x786)-x787)+x788);

    if (t162 != 129) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x789 = 0U;
	int16_t x790 = INT16_MIN;
	int32_t x792 = INT32_MIN;
	uint64_t t163 = 28LLU;

    t163 = (((x789!=x790)-x791)+x792);

    if (t163 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x793 = -1;
	uint8_t x794 = 1U;
	int8_t x795 = INT8_MIN;
	volatile int16_t x796 = 0;
	volatile int32_t t164 = -29091509;

    t164 = (((x793!=x794)-x795)+x796);

    if (t164 != 129) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x797 = 25U;
	int64_t x798 = INT64_MAX;
	volatile uint16_t x799 = 114U;
	uint32_t x800 = UINT32_MAX;

    t165 = (((x797!=x798)-x799)+x800);

    if (t165 != 4294967182U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x801 = -15559233271136182LL;
	volatile uint8_t x803 = UINT8_MAX;
	int8_t x804 = -1;
	static int32_t t166 = 1160631;

    t166 = (((x801!=x802)-x803)+x804);

    if (t166 != -255) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x806 = INT16_MIN;
	int16_t x807 = INT16_MIN;
	uint64_t x808 = 1700188285304908LLU;

    t167 = (((x805!=x806)-x807)+x808);

    if (t167 != 1700188285337677LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x809 = -3;
	int16_t x811 = INT16_MIN;
	static volatile int8_t x812 = INT8_MIN;

    t168 = (((x809!=x810)-x811)+x812);

    if (t168 != 32640) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x813 = -1;
	int8_t x814 = 21;
	int64_t x816 = -3764LL;
	static volatile int64_t t169 = -6305822043219821LL;

    t169 = (((x813!=x814)-x815)+x816);

    if (t169 != -3787LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x818 = INT64_MAX;
	static uint16_t x819 = UINT16_MAX;
	int8_t x820 = -1;
	int32_t t170 = 465874;

    t170 = (((x817!=x818)-x819)+x820);

    if (t170 != -65535) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x821 = -1;
	uint16_t x822 = 29U;
	uint8_t x823 = 1U;
	int32_t x824 = -113907;
	int32_t t171 = -14142434;

    t171 = (((x821!=x822)-x823)+x824);

    if (t171 != -113907) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x829 = INT64_MIN;
	volatile int64_t x830 = 10221020657664LL;
	int8_t x831 = INT8_MAX;
	uint64_t x832 = UINT64_MAX;
	volatile uint64_t t172 = 4986318895339LLU;

    t172 = (((x829!=x830)-x831)+x832);

    if (t172 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x833 = 51U;
	int16_t x834 = INT16_MAX;
	int64_t x835 = -1LL;
	volatile int16_t x836 = INT16_MAX;

    t173 = (((x833!=x834)-x835)+x836);

    if (t173 != 32769LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x838 = -6;
	uint32_t x839 = 47837U;
	uint64_t x840 = UINT64_MAX;
	uint64_t t174 = 13486909LLU;

    t174 = (((x837!=x838)-x839)+x840);

    if (t174 != 4294919459LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint64_t x848 = UINT64_MAX;
	uint64_t t175 = 25991082916LLU;

    t175 = (((x845!=x846)-x847)+x848);

    if (t175 != 128LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x857 = -4;
	volatile int8_t x858 = -4;
	static int16_t x860 = -1;
	int32_t t176 = -329;

    t176 = (((x857!=x858)-x859)+x860);

    if (t176 != -235) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x861 = -342;
	volatile uint8_t x862 = 0U;
	uint16_t x863 = UINT16_MAX;
	uint32_t x864 = UINT32_MAX;

    t177 = (((x861!=x862)-x863)+x864);

    if (t177 != 4294901761U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x865 = -1LL;
	static uint16_t x867 = 44U;

    t178 = (((x865!=x866)-x867)+x868);

    if (t178 != -52) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x869 = 56U;
	int32_t x870 = 45;
	int8_t x872 = -5;
	volatile int32_t t179 = 0;

    t179 = (((x869!=x870)-x871)+x872);

    if (t179 != -5) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x873 = -6695136725LL;
	int8_t x874 = -1;
	volatile uint16_t x875 = 2577U;
	int32_t t180 = -822;

    t180 = (((x873!=x874)-x875)+x876);

    if (t180 != -35344) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x877 = 10684249322073LL;
	static uint16_t x878 = UINT16_MAX;
	uint16_t x879 = UINT16_MAX;
	uint16_t x880 = 134U;
	static int32_t t181 = -98903;

    t181 = (((x877!=x878)-x879)+x880);

    if (t181 != -65400) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x881 = -1;
	int8_t x882 = -1;
	uint64_t x883 = UINT64_MAX;
	int8_t x884 = -1;
	static volatile uint64_t t182 = 3061LLU;

    t182 = (((x881!=x882)-x883)+x884);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x887 = UINT8_MAX;
	static int8_t x888 = INT8_MIN;

    t183 = (((x885!=x886)-x887)+x888);

    if (t183 != -382) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x889 = 0;
	int32_t x890 = INT32_MIN;
	int32_t x891 = INT32_MAX;
	int64_t x892 = INT64_MAX;
	int64_t t184 = -4831337113330675LL;

    t184 = (((x889!=x890)-x891)+x892);

    if (t184 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x894 = UINT16_MAX;
	uint8_t x896 = 64U;
	int32_t t185 = 740417714;

    t185 = (((x893!=x894)-x895)+x896);

    if (t185 != 40) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x897 = 10U;
	uint8_t x898 = 0U;
	int16_t x899 = 180;
	int8_t x900 = 0;
	int32_t t186 = -6643787;

    t186 = (((x897!=x898)-x899)+x900);

    if (t186 != -179) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x901 = INT16_MAX;
	volatile int16_t x902 = INT16_MIN;
	int8_t x903 = INT8_MAX;
	static uint64_t x904 = 87715LLU;
	volatile uint64_t t187 = 33539475392078LLU;

    t187 = (((x901!=x902)-x903)+x904);

    if (t187 != 87589LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x913 = INT16_MIN;
	volatile uint16_t x914 = 14263U;
	int64_t x915 = 1324401474724000LL;
	volatile int16_t x916 = 1;
	static int64_t t188 = -2783739LL;

    t188 = (((x913!=x914)-x915)+x916);

    if (t188 != -1324401474723998LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x917 = UINT64_MAX;
	int32_t x918 = INT32_MIN;
	int8_t x919 = 21;
	int8_t x920 = INT8_MIN;
	static int32_t t189 = -200794349;

    t189 = (((x917!=x918)-x919)+x920);

    if (t189 != -148) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x921 = 1108;
	static int32_t x922 = INT32_MIN;
	int64_t t190 = 496674079314392149LL;

    t190 = (((x921!=x922)-x923)+x924);

    if (t190 != 2091165972457LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x927 = INT16_MIN;
	int8_t x928 = INT8_MIN;
	volatile int32_t t191 = 0;

    t191 = (((x925!=x926)-x927)+x928);

    if (t191 != 32641) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x929 = 101U;
	int64_t x930 = -1LL;
	int32_t x931 = -30482;
	int16_t x932 = -13;
	volatile int32_t t192 = 371740500;

    t192 = (((x929!=x930)-x931)+x932);

    if (t192 != 30470) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x937 = INT32_MIN;
	int32_t x938 = 802;
	static uint32_t x939 = 541005207U;
	volatile uint8_t x940 = 5U;
	uint32_t t193 = 6U;

    t193 = (((x937!=x938)-x939)+x940);

    if (t193 != 3753962095U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x941 = -1;
	int8_t x942 = -1;
	uint32_t x943 = UINT32_MAX;
	static int64_t x944 = -197757024265LL;
	int64_t t194 = 62716375225107914LL;

    t194 = (((x941!=x942)-x943)+x944);

    if (t194 != -197757024264LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x945 = INT16_MIN;
	static uint64_t x946 = 1944473LLU;
	volatile uint8_t x947 = UINT8_MAX;
	volatile uint8_t x948 = 1U;
	volatile int32_t t195 = -114;

    t195 = (((x945!=x946)-x947)+x948);

    if (t195 != -253) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x949 = UINT8_MAX;
	volatile uint16_t x950 = UINT16_MAX;
	static int16_t x951 = INT16_MIN;
	volatile uint64_t t196 = 6404541060502326904LLU;

    t196 = (((x949!=x950)-x951)+x952);

    if (t196 != 304037818LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x953 = 0U;
	uint16_t x954 = UINT16_MAX;
	static volatile int32_t x955 = -35542272;
	uint32_t x956 = 4142U;
	volatile uint32_t t197 = 348657021U;

    t197 = (((x953!=x954)-x955)+x956);

    if (t197 != 35546415U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x957 = -13;
	static uint32_t x958 = 62U;
	static uint8_t x959 = 25U;
	int32_t t198 = 65483;

    t198 = (((x957!=x958)-x959)+x960);

    if (t198 != 21) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x965 = 0U;
	uint64_t x967 = 29425638LLU;
	static uint32_t x968 = 173U;
	static volatile uint64_t t199 = 2785493LLU;

    t199 = (((x965!=x966)-x967)+x968);

    if (t199 != 18446744073680126152LLU) { NG(); } else { ; }
	
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

