
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

int8_t x1 = INT8_MIN;
int32_t x3 = 6104;
uint8_t x14 = 8U;
static int64_t x16 = -49282LL;
int8_t x28 = -1;
volatile uint16_t x38 = 14805U;
int64_t x43 = INT64_MAX;
int64_t x44 = INT64_MAX;
int64_t t9 = 754761LL;
uint64_t t10 = 16LLU;
int32_t x67 = INT32_MIN;
volatile int32_t t11 = -2391677;
static volatile int8_t x69 = 16;
int32_t x77 = 3;
int32_t x79 = -1;
static int16_t x80 = -165;
int32_t t13 = 10;
volatile int64_t t14 = -211LL;
uint16_t x90 = UINT16_MAX;
volatile uint8_t x95 = UINT8_MAX;
int16_t x102 = -1;
int16_t x104 = INT16_MIN;
static uint8_t x105 = UINT8_MAX;
volatile uint64_t x107 = UINT64_MAX;
int32_t x120 = -1;
volatile int32_t t21 = -81944;
static int32_t t23 = -52;
uint16_t x129 = UINT16_MAX;
static uint64_t t24 = 5315468541LLU;
uint32_t x133 = 884U;
volatile int8_t x134 = INT8_MIN;
static volatile int8_t x142 = INT8_MAX;
int32_t t27 = 315722243;
int64_t t30 = 735415367020019403LL;
static uint64_t x162 = UINT64_MAX;
int32_t x169 = 14393710;
uint8_t x172 = UINT8_MAX;
uint32_t x178 = UINT32_MAX;
volatile int64_t t34 = 16295371152LL;
static int8_t x183 = INT8_MAX;
int32_t t35 = -127;
uint32_t x189 = UINT32_MAX;
static volatile uint32_t t38 = 1234U;
int32_t x204 = INT32_MAX;
static uint16_t x214 = 738U;
static int32_t x227 = -1;
uint64_t x233 = UINT64_MAX;
volatile int16_t x236 = INT16_MIN;
int64_t x241 = -1LL;
volatile int32_t t49 = -818;
static uint32_t x258 = UINT32_MAX;
uint64_t t50 = 30778155970073LLU;
int64_t x266 = -1LL;
int32_t t52 = 1;
int64_t t55 = 55015791320LL;
static volatile int32_t t57 = -219185;
uint32_t x314 = 29723U;
volatile uint64_t x316 = UINT64_MAX;
volatile uint64_t t58 = 16366LLU;
volatile uint32_t x322 = 26U;
int8_t x336 = INT8_MIN;
static int8_t x338 = -61;
uint32_t x340 = UINT32_MAX;
uint8_t x345 = 65U;
int16_t x346 = -1;
int32_t x351 = INT32_MIN;
int32_t x353 = INT32_MIN;
volatile uint32_t x355 = 10211U;
static uint8_t x365 = 4U;
uint32_t x367 = 7229U;
int64_t x371 = -1LL;
int64_t x377 = 127876LL;
int32_t x379 = INT32_MIN;
int8_t x380 = INT8_MIN;
volatile int8_t x388 = INT8_MIN;
volatile uint32_t t71 = 0U;
int32_t x394 = 0;
volatile int64_t t72 = -496774569232135LL;
static volatile int64_t t73 = 123LL;
uint8_t x404 = UINT8_MAX;
static volatile int64_t t75 = -2192533008343331LL;
int64_t x411 = INT64_MIN;
static int8_t x414 = -1;
static volatile int64_t x432 = -1LL;
int64_t x443 = -1LL;
static volatile uint64_t x450 = 730432818181672454LLU;
static int32_t x452 = -3;
volatile int8_t x455 = INT8_MAX;
uint64_t x456 = 122LLU;
volatile uint64_t t84 = 192LLU;
static int8_t x458 = INT8_MAX;
volatile uint64_t t85 = 18883LLU;
uint16_t x463 = 100U;
uint16_t x464 = 3276U;
int16_t x470 = -1;
static uint64_t t88 = 14327767LLU;
volatile int16_t x494 = -2463;
uint32_t x495 = UINT32_MAX;
static volatile uint32_t t89 = 1044024348U;
static volatile uint8_t x500 = UINT8_MAX;
static volatile int16_t x515 = INT16_MAX;
static uint8_t x525 = 96U;
int32_t x538 = -1;
volatile int16_t x539 = 3877;
uint8_t x547 = 59U;
volatile int16_t x557 = INT16_MIN;
volatile int8_t x566 = INT8_MIN;
uint8_t x568 = UINT8_MAX;
volatile uint64_t t102 = 8174LLU;
static int8_t x570 = INT8_MIN;
int32_t x573 = -1;
volatile uint32_t t111 = 3U;
volatile int32_t x611 = INT32_MAX;
int8_t x619 = 1;
int8_t x620 = -1;
int16_t x623 = INT16_MAX;
static uint32_t x627 = UINT32_MAX;
volatile int8_t x650 = INT8_MIN;
int16_t x654 = 18;
int64_t x663 = INT64_MIN;
int16_t x669 = 3246;
volatile uint8_t x670 = 3U;
volatile int64_t x673 = 0LL;
uint8_t x674 = 9U;
static int64_t x676 = -1LL;
volatile uint64_t t125 = 7911582LLU;
static int32_t x686 = 32;
int64_t t128 = 224346LL;
static int32_t x699 = INT32_MIN;
int32_t x700 = -1;
volatile int32_t t132 = 2;
int16_t x717 = -1;
volatile uint64_t t133 = 80945LLU;
int16_t x741 = -5;
int8_t x742 = 0;
volatile int16_t x747 = INT16_MAX;
static uint32_t t136 = 121652076U;
int32_t x749 = -1;
int64_t x758 = -520958949725LL;
int8_t x765 = INT8_MIN;
static uint16_t x768 = 163U;
int64_t x772 = -1LL;
static volatile uint64_t x787 = 16852873LLU;
int64_t x790 = 21292519209LL;
volatile int16_t x795 = INT16_MAX;
uint32_t x797 = 338431U;
uint32_t x802 = 332723287U;
static uint8_t x826 = 3U;
static int64_t t150 = 69634741902794LL;
static volatile uint32_t x840 = 1049650181U;
uint16_t x841 = 10U;
int8_t x844 = INT8_MIN;
int32_t x849 = 29843;
volatile int32_t x858 = INT32_MIN;
int64_t x874 = INT64_MAX;
int8_t x885 = 1;
uint16_t x902 = 1741U;
int8_t x903 = -1;
int64_t t162 = 694529156LL;
uint8_t x908 = 59U;
volatile uint64_t t164 = 324471819145926767LLU;
uint64_t x920 = 518157878994301LLU;
int8_t x930 = INT8_MIN;
int16_t x938 = -1;
uint64_t x950 = UINT64_MAX;
uint8_t x964 = 10U;
int32_t x975 = INT32_MIN;
volatile int32_t x988 = 12;
static volatile int32_t t175 = -1;
int8_t x993 = 3;
int8_t x994 = INT8_MAX;
uint16_t x995 = 12U;
static uint64_t x996 = 8694630889759026LLU;
int8_t x1003 = INT8_MAX;
uint64_t x1009 = UINT64_MAX;
int16_t x1020 = 7;
uint8_t x1021 = UINT8_MAX;
volatile int32_t x1028 = -1;
static int64_t x1049 = -19089057153LL;
int8_t x1050 = 12;
volatile int64_t t186 = -23LL;
static volatile uint64_t x1056 = 13892837704064LLU;
int8_t x1058 = 56;
int32_t x1068 = 268030319;
static volatile uint8_t x1075 = 96U;
int64_t x1085 = -1LL;
static int64_t x1086 = -1LL;
int64_t x1091 = -3320LL;
volatile int32_t t195 = 3983;
int8_t x1104 = 4;
int32_t x1107 = INT32_MIN;
int64_t x1108 = 392305327129LL;
int64_t t197 = -8408684336958952LL;
int16_t x1121 = INT16_MIN;
uint8_t x1122 = 0U;


void f0(void) {
    	static int32_t x2 = 719;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 535806743LL;

    t0 = (((x1*x2)^x3)-x4);

    if (t0 != 9223372036854681432LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int16_t x6 = -2241;
	int64_t x7 = -1LL;
	uint8_t x8 = 3U;
	int64_t t1 = -2582430838LL;

    t1 = (((x5*x6)^x7)-x8);

    if (t1 != -286852LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 3U;
	uint32_t x10 = 346U;
	volatile uint32_t x11 = 0U;
	volatile int32_t x12 = INT32_MIN;
	volatile uint32_t t2 = 45470U;

    t2 = (((x9*x10)^x11)-x12);

    if (t2 != 2147484686U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 1;
	volatile int16_t x15 = -1;
	int64_t t3 = 27537469841407996LL;

    t3 = (((x13*x14)^x15)-x16);

    if (t3 != 49273LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = -1222164099028250LL;
	volatile int32_t x18 = 5084;
	static int16_t x19 = INT16_MIN;
	uint8_t x20 = UINT8_MAX;
	int64_t t4 = -42196812895161LL;

    t4 = (((x17*x18)^x19)-x20);

    if (t4 != 6213482279459647145LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x25 = 1433383LLU;
	uint32_t x26 = 150538891U;
	static int8_t x27 = -1;
	uint64_t t5 = 255999543007753LLU;

    t5 = (((x25*x26)^x27)-x28);

    if (t5 != 18446528293822353363LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x33 = -1;
	uint8_t x34 = UINT8_MAX;
	int8_t x35 = INT8_MAX;
	int8_t x36 = INT8_MIN;
	int32_t t6 = 11;

    t6 = (((x33*x34)^x35)-x36);

    if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x37 = 904U;
	uint8_t x39 = UINT8_MAX;
	int64_t x40 = 1LL;
	int64_t t7 = 255672LL;

    t7 = (((x37*x38)^x39)-x40);

    if (t7 != 13383894LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = INT32_MIN;
	uint32_t x42 = UINT32_MAX;
	volatile int64_t t8 = 113128333866797103LL;

    t8 = (((x41*x42)^x43)-x44);

    if (t8 != -2147483648LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = -4894;
	uint8_t x50 = 1U;
	int64_t x51 = 873168342LL;
	int32_t x52 = -1;

    t9 = (((x49*x50)^x51)-x52);

    if (t9 != -873164491LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x57 = 5;
	static int16_t x58 = 0;
	int8_t x59 = INT8_MAX;
	uint64_t x60 = 26594287512719475LLU;

    t10 = (((x57*x58)^x59)-x60);

    if (t10 != 18420149786196832268LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x65 = 1U;
	int32_t x66 = INT32_MIN;
	uint8_t x68 = 13U;

    t11 = (((x65*x66)^x67)-x68);

    if (t11 != -13) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x70 = INT8_MAX;
	uint64_t x71 = 519408LLU;
	uint32_t x72 = UINT32_MAX;
	uint64_t t12 = 2753954336LLU;

    t12 = (((x69*x70)^x71)-x72);

    if (t12 != 18446744069415103233LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x78 = 60U;

    t13 = (((x77*x78)^x79)-x80);

    if (t13 != -16) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x85 = INT8_MIN;
	uint32_t x86 = 1U;
	uint16_t x87 = UINT16_MAX;
	static int64_t x88 = 43740673510723LL;

    t14 = (((x85*x86)^x87)-x88);

    if (t14 != -43736378608836LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x89 = UINT8_MAX;
	volatile int32_t x91 = INT32_MAX;
	int64_t x92 = 876196937687LL;
	static volatile int64_t t15 = -16265105940203LL;

    t15 = (((x89*x90)^x91)-x92);

    if (t15 != -874066165465LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x93 = 1744U;
	volatile uint8_t x94 = UINT8_MAX;
	int16_t x96 = INT16_MIN;
	volatile int32_t t16 = -35;

    t16 = (((x93*x94)^x95)-x96);

    if (t16 != 477647) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x97 = 2U;
	int16_t x98 = INT16_MAX;
	int64_t x99 = INT64_MAX;
	volatile int16_t x100 = INT16_MIN;
	volatile int64_t t17 = 26LL;

    t17 = (((x97*x98)^x99)-x100);

    if (t17 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x101 = 13;
	volatile uint64_t x103 = 13923LLU;
	static volatile uint64_t t18 = 2644557523042LLU;

    t18 = (((x101*x102)^x103)-x104);

    if (t18 != 18832LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x106 = -1;
	uint8_t x108 = UINT8_MAX;
	volatile uint64_t t19 = UINT64_MAX;

    t19 = (((x105*x106)^x107)-x108);

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x113 = -1;
	int16_t x114 = INT16_MAX;
	uint32_t x115 = 3154U;
	volatile int32_t x116 = -12658;
	static uint32_t t20 = 192331822U;

    t20 = (((x113*x114)^x115)-x116);

    if (t20 != 4294950341U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x117 = 0;
	int8_t x118 = INT8_MAX;
	int32_t x119 = INT32_MIN;

    t21 = (((x117*x118)^x119)-x120);

    if (t21 != -2147483647) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x121 = UINT32_MAX;
	int16_t x122 = INT16_MIN;
	int16_t x123 = INT16_MAX;
	volatile uint8_t x124 = 7U;
	static volatile uint32_t t22 = 264488997U;

    t22 = (((x121*x122)^x123)-x124);

    if (t22 != 65528U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x125 = INT16_MIN;
	uint8_t x126 = 88U;
	uint8_t x127 = 2U;
	static int32_t x128 = INT32_MIN;

    t23 = (((x125*x126)^x127)-x128);

    if (t23 != 2144600066) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint64_t x130 = UINT64_MAX;
	int8_t x131 = -1;
	volatile uint64_t x132 = UINT64_MAX;

    t24 = (((x129*x130)^x131)-x132);

    if (t24 != 65535LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x135 = INT32_MAX;
	int32_t x136 = -613772;
	uint32_t t25 = 691U;

    t25 = (((x133*x134)^x135)-x136);

    if (t25 != 2148210571U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x137 = 34U;
	int8_t x138 = -39;
	static uint64_t x139 = 117774LLU;
	int64_t x140 = INT64_MIN;
	uint64_t t26 = 3LLU;

    t26 = (((x137*x138)^x139)-x140);

    if (t26 != 9223372041149626076LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x141 = 1U;
	int8_t x143 = INT8_MIN;
	static volatile uint8_t x144 = 27U;

    t27 = (((x141*x142)^x143)-x144);

    if (t27 != -28) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x145 = 3874U;
	uint64_t x146 = UINT64_MAX;
	int8_t x147 = INT8_MIN;
	int16_t x148 = INT16_MAX;
	volatile uint64_t t28 = 2209874847LLU;

    t28 = (((x145*x146)^x147)-x148);

    if (t28 != 18446744073709522783LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x149 = -17201473;
	uint8_t x150 = 122U;
	volatile uint8_t x151 = 48U;
	int8_t x152 = INT8_MIN;
	int32_t t29 = -10;

    t29 = (((x149*x150)^x151)-x152);

    if (t29 != -2098579530) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x153 = -1LL;
	int16_t x154 = INT16_MIN;
	int16_t x155 = INT16_MIN;
	uint32_t x156 = 2490415U;

    t30 = (((x153*x154)^x155)-x156);

    if (t30 != -2555951LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x161 = INT16_MIN;
	uint8_t x163 = 2U;
	volatile uint32_t x164 = UINT32_MAX;
	static volatile uint64_t t31 = 38962598017436LLU;

    t31 = (((x161*x162)^x163)-x164);

    if (t31 != 18446744069414617091LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x165 = -1;
	int16_t x166 = -1;
	int32_t x167 = -63763225;
	static uint64_t x168 = UINT64_MAX;
	volatile uint64_t t32 = 224845308LLU;

    t32 = (((x165*x166)^x167)-x168);

    if (t32 != 18446744073645788391LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x170 = 12U;
	static int8_t x171 = 2;
	volatile int32_t t33 = 176386880;

    t33 = (((x169*x170)^x171)-x172);

    if (t33 != 172724267) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x177 = 183867841LL;
	int8_t x179 = INT8_MIN;
	uint16_t x180 = UINT16_MAX;

    t34 = (((x177*x178)^x179)-x180);

    if (t34 != -789706363697325632LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x181 = UINT8_MAX;
	int8_t x182 = INT8_MAX;
	volatile uint16_t x184 = 247U;

    t35 = (((x181*x182)^x183)-x184);

    if (t35 != 32263) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x185 = -32;
	uint32_t x186 = UINT32_MAX;
	volatile int64_t x187 = INT64_MIN;
	uint8_t x188 = 14U;
	volatile int64_t t36 = -2416541182760449LL;

    t36 = (((x185*x186)^x187)-x188);

    if (t36 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x190 = 85508962U;
	uint8_t x191 = UINT8_MAX;
	int8_t x192 = INT8_MIN;
	volatile uint32_t t37 = 10U;

    t37 = (((x189*x190)^x191)-x192);

    if (t37 != 4209458401U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x193 = 7U;
	uint8_t x194 = 2U;
	volatile uint32_t x195 = 10510U;
	static int16_t x196 = 2;

    t38 = (((x193*x194)^x195)-x196);

    if (t38 != 10494U) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x201 = 2U;
	uint8_t x202 = UINT8_MAX;
	int32_t x203 = -1;
	volatile uint32_t t39 = 7041U;

    t39 = (((x201*x202)^x203)-x204);

    if (t39 != 2147483138U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x209 = 15814339633744LLU;
	static uint16_t x210 = 79U;
	static int32_t x211 = -1;
	int64_t x212 = 1465851723554LL;
	volatile uint64_t t40 = 106814049816297779LLU;

    t40 = (((x209*x210)^x211)-x212);

    if (t40 != 18445493275026762285LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x213 = 4;
	uint16_t x215 = 62U;
	uint16_t x216 = 1023U;
	int32_t t41 = -803;

    t41 = (((x213*x214)^x215)-x216);

    if (t41 != 1975) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x221 = 50789;
	static uint16_t x222 = 1649U;
	static int8_t x223 = 4;
	int64_t x224 = 34094LL;
	volatile int64_t t42 = -2668LL;

    t42 = (((x221*x222)^x223)-x224);

    if (t42 != 83716963LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x225 = 6U;
	static uint8_t x226 = UINT8_MAX;
	int16_t x228 = INT16_MIN;
	volatile int32_t t43 = -505133;

    t43 = (((x225*x226)^x227)-x228);

    if (t43 != 31237) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x234 = 115975U;
	static volatile uint64_t x235 = 761361456567831328LLU;
	volatile uint64_t t44 = 13417299LLU;

    t44 = (((x233*x234)^x235)-x236);

    if (t44 != 17685382617141670361LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x237 = -1;
	volatile int32_t x238 = -16;
	volatile int64_t x239 = INT64_MIN;
	int64_t x240 = INT64_MIN;
	static volatile int64_t t45 = -1LL;

    t45 = (((x237*x238)^x239)-x240);

    if (t45 != 16LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x242 = INT64_MAX;
	int32_t x243 = INT32_MIN;
	int32_t x244 = -26;
	static int64_t t46 = 24243166500224258LL;

    t46 = (((x241*x242)^x243)-x244);

    if (t46 != 9223372034707292187LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x245 = -1;
	volatile int16_t x246 = -1;
	uint64_t x247 = UINT64_MAX;
	int8_t x248 = INT8_MIN;
	static volatile uint64_t t47 = 11855738395LLU;

    t47 = (((x245*x246)^x247)-x248);

    if (t47 != 126LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x249 = INT16_MIN;
	volatile uint64_t x250 = UINT64_MAX;
	int16_t x251 = -310;
	uint32_t x252 = 1847676U;
	volatile uint64_t t48 = 28432802684LLU;

    t48 = (((x249*x250)^x251)-x252);

    if (t48 != 18446744073707670862LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x253 = 1U;
	volatile int8_t x254 = 62;
	volatile int8_t x255 = INT8_MIN;
	int8_t x256 = INT8_MAX;

    t49 = (((x253*x254)^x255)-x256);

    if (t49 != -193) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x257 = 1723370513U;
	uint32_t x259 = UINT32_MAX;
	uint64_t x260 = 392037764352LLU;

    t50 = (((x257*x258)^x259)-x260);

    if (t50 != 18446743683395157776LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x265 = UINT8_MAX;
	static uint16_t x267 = 205U;
	static int64_t x268 = INT64_MIN;
	volatile int64_t t51 = 5565LL;

    t51 = (((x265*x266)^x267)-x268);

    if (t51 != 9223372036854775756LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x269 = 1;
	int8_t x270 = -1;
	volatile int8_t x271 = 59;
	int8_t x272 = INT8_MAX;

    t52 = (((x269*x270)^x271)-x272);

    if (t52 != -187) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x281 = INT8_MAX;
	int16_t x282 = -2001;
	uint32_t x283 = 2047675U;
	int8_t x284 = -1;
	volatile uint32_t t53 = 395583U;

    t53 = (((x281*x282)^x283)-x284);

    if (t53 != 4293075435U) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x285 = 15322U;
	static uint8_t x286 = UINT8_MAX;
	uint16_t x287 = 9642U;
	int16_t x288 = 5852;
	volatile uint32_t t54 = 63698U;

    t54 = (((x285*x286)^x287)-x288);

    if (t54 != 3908784U) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x289 = INT8_MIN;
	int64_t x290 = -297074898222122LL;
	volatile int64_t x291 = -1LL;
	int32_t x292 = INT32_MIN;

    t55 = (((x289*x290)^x291)-x292);

    if (t55 != -38025584824947969LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x305 = UINT64_MAX;
	volatile int8_t x306 = INT8_MIN;
	static uint64_t x307 = 56242786581LLU;
	static uint16_t x308 = 34U;
	uint64_t t56 = 1550770LLU;

    t56 = (((x305*x306)^x307)-x308);

    if (t56 != 56242786675LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x309 = -14435;
	static int32_t x310 = -10;
	volatile int8_t x311 = INT8_MAX;
	uint8_t x312 = UINT8_MAX;

    t57 = (((x309*x310)^x311)-x312);

    if (t57 != 144034) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x313 = -1;
	uint16_t x315 = 228U;

    t58 = (((x313*x314)^x315)-x316);

    if (t58 != 4294937346LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x321 = INT16_MAX;
	int64_t x323 = INT64_MIN;
	int16_t x324 = INT16_MAX;
	volatile int64_t t59 = -235LL;

    t59 = (((x321*x322)^x323)-x324);

    if (t59 != -9223372036853956633LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x333 = 22U;
	int8_t x334 = INT8_MIN;
	volatile int8_t x335 = INT8_MIN;
	int32_t t60 = -31001;

    t60 = (((x333*x334)^x335)-x336);

    if (t60 != 2816) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x337 = -4613539;
	int8_t x339 = INT8_MIN;
	volatile uint32_t t61 = 1558U;

    t61 = (((x337*x338)^x339)-x340);

    if (t61 != 4013541464U) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x341 = 6;
	int16_t x342 = 219;
	uint16_t x343 = UINT16_MAX;
	int8_t x344 = -1;
	volatile int32_t t62 = 17;

    t62 = (((x341*x342)^x343)-x344);

    if (t62 != 64222) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x347 = INT64_MAX;
	static int8_t x348 = INT8_MIN;
	volatile int64_t t63 = 1396695LL;

    t63 = (((x345*x346)^x347)-x348);

    if (t63 != -9223372036854775616LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x349 = UINT16_MAX;
	static int64_t x350 = -955201662302LL;
	volatile int64_t x352 = -1LL;
	static volatile int64_t t64 = 24934LL;

    t64 = (((x349*x350)^x351)-x352);

    if (t64 != 62599140707052895LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x354 = 27183110U;
	static int64_t x356 = -5106LL;
	int64_t t65 = 3381179LL;

    t65 = (((x353*x354)^x355)-x356);

    if (t65 != 15317LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x366 = 53U;
	int16_t x368 = -1;
	volatile uint32_t t66 = 94U;

    t66 = (((x365*x366)^x367)-x368);

    if (t66 != 7402U) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x369 = 3447LLU;
	static int16_t x370 = INT16_MAX;
	int16_t x372 = INT16_MIN;
	uint64_t t67 = 20222829780795LLU;

    t67 = (((x369*x370)^x371)-x372);

    if (t67 != 18446744073596636534LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x373 = -2024718;
	uint8_t x374 = UINT8_MAX;
	uint16_t x375 = 108U;
	int32_t x376 = -1;
	volatile int32_t t68 = -302780;

    t68 = (((x373*x374)^x375)-x376);

    if (t68 != -516303005) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x378 = 210804LL;
	int64_t t69 = -15065406601LL;

    t69 = (((x377*x378)^x379)-x380);

    if (t69 != -26730318768LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x381 = UINT16_MAX;
	uint64_t x382 = UINT64_MAX;
	int64_t x383 = 11LL;
	int64_t x384 = INT64_MAX;
	static uint64_t t70 = 397527LLU;

    t70 = (((x381*x382)^x383)-x384);

    if (t70 != 9223372036854710283LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x385 = INT32_MIN;
	uint32_t x386 = 31U;
	static int16_t x387 = INT16_MIN;

    t71 = (((x385*x386)^x387)-x388);

    if (t71 != 2147451008U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x393 = INT64_MAX;
	int16_t x395 = -1;
	int16_t x396 = 12788;

    t72 = (((x393*x394)^x395)-x396);

    if (t72 != -12789LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x397 = INT8_MIN;
	static volatile int16_t x398 = INT16_MAX;
	int64_t x399 = INT64_MAX;
	static int8_t x400 = 3;

    t73 = (((x397*x398)^x399)-x400);

    if (t73 != -9223372036850581636LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x401 = UINT16_MAX;
	static int16_t x402 = INT16_MIN;
	volatile int64_t x403 = INT64_MIN;
	int64_t t74 = 0LL;

    t74 = (((x401*x402)^x403)-x404);

    if (t74 != 9223372034707324673LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x405 = -1LL;
	uint16_t x406 = UINT16_MAX;
	uint16_t x407 = 37U;
	int64_t x408 = -1LL;

    t75 = (((x405*x406)^x407)-x408);

    if (t75 != -65499LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x409 = 76U;
	int16_t x410 = 19;
	int8_t x412 = -1;
	int64_t t76 = -103478676LL;

    t76 = (((x409*x410)^x411)-x412);

    if (t76 != -9223372036854774363LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x413 = INT16_MIN;
	int32_t x415 = INT32_MAX;
	static int16_t x416 = -1;
	volatile int32_t t77 = 0;

    t77 = (((x413*x414)^x415)-x416);

    if (t77 != 2147450880) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x417 = 17U;
	uint32_t x418 = UINT32_MAX;
	static uint32_t x419 = 132262833U;
	int8_t x420 = INT8_MAX;
	static uint32_t t78 = 125900U;

    t78 = (((x417*x418)^x419)-x420);

    if (t78 != 4162704351U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x421 = INT16_MIN;
	static int8_t x422 = -1;
	int32_t x423 = INT32_MAX;
	int16_t x424 = -1531;
	int32_t t79 = -1;

    t79 = (((x421*x422)^x423)-x424);

    if (t79 != 2147452410) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x429 = -1145;
	volatile int32_t x430 = -1;
	int16_t x431 = INT16_MIN;
	int64_t t80 = -1874416911143713611LL;

    t80 = (((x429*x430)^x431)-x432);

    if (t80 != -31622LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x433 = -1;
	uint8_t x434 = 1U;
	int32_t x435 = 50587;
	int64_t x436 = -8511044074LL;
	int64_t t81 = 195270047461LL;

    t81 = (((x433*x434)^x435)-x436);

    if (t81 != 8510993486LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x441 = -1LL;
	static int64_t x442 = INT64_MAX;
	uint32_t x444 = 14237692U;
	static int64_t t82 = -644424857016247LL;

    t82 = (((x441*x442)^x443)-x444);

    if (t82 != 9223372036840538114LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x449 = INT8_MIN;
	uint32_t x451 = 496936U;
	volatile uint64_t t83 = 885LLU;

    t83 = (((x449*x450)^x451)-x452);

    if (t83 != 17185063715003656235LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x453 = 23U;
	int8_t x454 = INT8_MIN;

    t84 = (((x453*x454)^x455)-x456);

    if (t84 != 18446744073709548677LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x457 = UINT64_MAX;
	static int8_t x459 = -1;
	static int8_t x460 = -1;

    t85 = (((x457*x458)^x459)-x460);

    if (t85 != 127LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x461 = 43502509278LLU;
	static volatile int64_t x462 = INT64_MAX;
	static uint64_t t86 = 1322939LLU;

    t86 = (((x461*x462)^x463)-x464);

    if (t86 != 18446744030207039098LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x469 = INT16_MIN;
	uint8_t x471 = UINT8_MAX;
	uint16_t x472 = 3971U;
	int32_t t87 = -463457;

    t87 = (((x469*x470)^x471)-x472);

    if (t87 != 29052) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x477 = INT8_MIN;
	static volatile uint64_t x478 = UINT64_MAX;
	static int8_t x479 = INT8_MIN;
	int8_t x480 = 0;

    t88 = (((x477*x478)^x479)-x480);

    if (t88 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x493 = 6U;
	static int32_t x496 = -1;

    t89 = (((x493*x494)^x495)-x496);

    if (t89 != 14778U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x497 = UINT32_MAX;
	volatile int8_t x498 = -21;
	volatile int8_t x499 = 0;
	uint32_t t90 = 1U;

    t90 = (((x497*x498)^x499)-x500);

    if (t90 != 4294967062U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x505 = INT8_MIN;
	int8_t x506 = 4;
	int32_t x507 = -129008;
	static int16_t x508 = -1;
	volatile int32_t t91 = 3496;

    t91 = (((x505*x506)^x507)-x508);

    if (t91 != 128529) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x509 = UINT16_MAX;
	volatile int64_t x510 = -799009LL;
	int32_t x511 = INT32_MAX;
	int64_t x512 = 7LL;
	volatile int64_t t92 = 7464240223600070LL;

    t92 = (((x509*x510)^x511)-x512);

    if (t92 != -52863643945LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x513 = INT16_MAX;
	uint32_t x514 = 1916U;
	static uint32_t x516 = 16U;
	volatile uint32_t t93 = 3U;

    t93 = (((x513*x514)^x515)-x516);

    if (t93 != 62752619U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x517 = 2558U;
	int32_t x518 = -30675095;
	int32_t x519 = -889678162;
	volatile int32_t x520 = INT32_MAX;
	uint32_t t94 = 0U;

    t94 = (((x517*x518)^x519)-x520);

    if (t94 != 4059737473U) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x526 = -15;
	int16_t x527 = INT16_MIN;
	uint16_t x528 = 0U;
	int32_t t95 = 3;

    t95 = (((x525*x526)^x527)-x528);

    if (t95 != 31328) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x529 = UINT16_MAX;
	int64_t x530 = -1LL;
	int8_t x531 = INT8_MIN;
	int8_t x532 = -1;
	volatile int64_t t96 = -3599LL;

    t96 = (((x529*x530)^x531)-x532);

    if (t96 != 65410LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int16_t x533 = 77;
	uint64_t x534 = UINT64_MAX;
	volatile int64_t x535 = INT64_MAX;
	int16_t x536 = INT16_MIN;
	uint64_t t97 = 494885230727791LLU;

    t97 = (((x533*x534)^x535)-x536);

    if (t97 != 9223372036854808652LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x537 = 0LL;
	volatile int16_t x540 = -1;
	volatile int64_t t98 = 1LL;

    t98 = (((x537*x538)^x539)-x540);

    if (t98 != 3878LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x545 = 142598259U;
	static uint32_t x546 = 230U;
	volatile uint8_t x548 = UINT8_MAX;
	static volatile uint32_t t99 = 10587367U;

    t99 = (((x545*x546)^x547)-x548);

    if (t99 != 2732828266U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x549 = INT16_MAX;
	int16_t x550 = -12363;
	static volatile int16_t x551 = INT16_MAX;
	volatile int16_t x552 = INT16_MIN;
	static volatile int32_t t100 = 197;

    t100 = (((x549*x550)^x551)-x552);

    if (t100 != -405057612) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x558 = -1;
	static uint16_t x559 = 115U;
	uint32_t x560 = 1137U;
	uint32_t t101 = 93U;

    t101 = (((x557*x558)^x559)-x560);

    if (t101 != 31746U) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint32_t x565 = UINT32_MAX;
	static volatile uint64_t x567 = UINT64_MAX;

    t102 = (((x565*x566)^x567)-x568);

    if (t102 != 18446744073709551232LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int8_t x569 = INT8_MAX;
	volatile uint8_t x571 = UINT8_MAX;
	uint64_t x572 = 1813732880408150703LLU;
	volatile uint64_t t103 = 127678LLU;

    t103 = (((x569*x570)^x571)-x572);

    if (t103 != 16633011193301384656LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x574 = INT8_MAX;
	int16_t x575 = -1;
	int8_t x576 = INT8_MIN;
	int32_t t104 = -18698205;

    t104 = (((x573*x574)^x575)-x576);

    if (t104 != 254) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x581 = 517543LLU;
	uint32_t x582 = UINT32_MAX;
	static int32_t x583 = 511;
	int64_t x584 = INT64_MIN;
	uint64_t t105 = 188LLU;

    t105 = (((x581*x582)^x583)-x584);

    if (t105 != 9225594867113532326LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x585 = -1LL;
	int16_t x586 = INT16_MIN;
	volatile int32_t x587 = INT32_MIN;
	static volatile int8_t x588 = -1;
	int64_t t106 = -181352728LL;

    t106 = (((x585*x586)^x587)-x588);

    if (t106 != -2147450879LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x589 = 7;
	uint64_t x590 = 462186246LLU;
	uint64_t x591 = 6044793682084414LLU;
	static volatile int16_t x592 = INT16_MIN;
	volatile uint64_t t107 = 6359759LLU;

    t107 = (((x589*x590)^x591)-x592);

    if (t107 != 6044796917388052LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x593 = -15;
	static int8_t x594 = INT8_MIN;
	static uint32_t x595 = 1U;
	static volatile int32_t x596 = INT32_MAX;
	volatile uint32_t t108 = 15746717U;

    t108 = (((x593*x594)^x595)-x596);

    if (t108 != 2147485570U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x597 = -1;
	uint8_t x598 = 25U;
	int8_t x599 = 1;
	static int8_t x600 = -1;
	int32_t t109 = -14684;

    t109 = (((x597*x598)^x599)-x600);

    if (t109 != -25) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x601 = -1;
	int32_t x602 = -1;
	static uint32_t x603 = 27077U;
	int32_t x604 = 46587;
	uint32_t t110 = 204882235U;

    t110 = (((x601*x602)^x603)-x604);

    if (t110 != 4294947785U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x605 = UINT32_MAX;
	int8_t x606 = -1;
	volatile int8_t x607 = -1;
	int16_t x608 = INT16_MIN;

    t111 = (((x605*x606)^x607)-x608);

    if (t111 != 32766U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x609 = 154524809769226619LLU;
	int8_t x610 = INT8_MAX;
	int16_t x612 = INT16_MAX;
	uint64_t t112 = 60692LLU;

    t112 = (((x609*x610)^x611)-x612);

    if (t112 != 1177906767233700859LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x613 = UINT64_MAX;
	uint8_t x614 = 61U;
	int16_t x615 = INT16_MIN;
	int32_t x616 = INT32_MIN;
	static volatile uint64_t t113 = 22344523LLU;

    t113 = (((x613*x614)^x615)-x616);

    if (t113 != 2147516355LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x617 = 3;
	int64_t x618 = 3140LL;
	volatile int64_t t114 = -2024566089LL;

    t114 = (((x617*x618)^x619)-x620);

    if (t114 != 9422LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x621 = 55;
	int8_t x622 = 0;
	uint32_t x624 = UINT32_MAX;
	volatile uint32_t t115 = 1022269918U;

    t115 = (((x621*x622)^x623)-x624);

    if (t115 != 32768U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x625 = 8484U;
	volatile int8_t x626 = 6;
	int8_t x628 = INT8_MIN;
	uint32_t t116 = 218U;

    t116 = (((x625*x626)^x627)-x628);

    if (t116 != 4294916519U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x645 = 3700U;
	int8_t x646 = INT8_MAX;
	volatile int32_t x647 = INT32_MAX;
	uint32_t x648 = UINT32_MAX;
	volatile uint32_t t117 = 794230U;

    t117 = (((x645*x646)^x647)-x648);

    if (t117 != 2147013748U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x649 = 770820276LLU;
	int8_t x651 = 0;
	volatile int32_t x652 = 2545899;
	static volatile uint64_t t118 = 384231570LLU;

    t118 = (((x649*x650)^x651)-x652);

    if (t118 != 18446743975042010389LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x653 = INT8_MAX;
	int32_t x655 = INT32_MIN;
	static int64_t x656 = INT64_MIN;
	volatile int64_t t119 = -4102387628LL;

    t119 = (((x653*x654)^x655)-x656);

    if (t119 != 9223372034707294446LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x657 = INT16_MAX;
	int16_t x658 = INT16_MAX;
	int16_t x659 = INT16_MAX;
	int64_t x660 = -8LL;
	int64_t t120 = 4653636058381472LL;

    t120 = (((x657*x658)^x659)-x660);

    if (t120 != 1073709062LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x661 = 8299286339LLU;
	int32_t x662 = 235312125;
	int32_t x664 = -1;
	uint64_t t121 = 3522246921LLU;

    t121 = (((x661*x662)^x663)-x664);

    if (t121 != 11176294741268336184LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x665 = -1;
	static uint64_t x666 = UINT64_MAX;
	volatile uint16_t x667 = UINT16_MAX;
	int16_t x668 = -1;
	uint64_t t122 = 62LLU;

    t122 = (((x665*x666)^x667)-x668);

    if (t122 != 65535LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x671 = 1;
	static uint16_t x672 = 13996U;
	static int32_t t123 = -13954463;

    t123 = (((x669*x670)^x671)-x672);

    if (t123 != -4257) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x675 = -1LL;
	static volatile int64_t t124 = -984359524800400LL;

    t124 = (((x673*x674)^x675)-x676);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x677 = -1;
	int16_t x678 = INT16_MIN;
	volatile uint64_t x679 = UINT64_MAX;
	static uint8_t x680 = 5U;

    t125 = (((x677*x678)^x679)-x680);

    if (t125 != 18446744073709518842LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x681 = 1;
	int16_t x682 = INT16_MAX;
	static int16_t x683 = 12;
	int32_t x684 = INT32_MAX;
	volatile int32_t t126 = 1;

    t126 = (((x681*x682)^x683)-x684);

    if (t126 != -2147450892) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x685 = -1;
	int64_t x687 = -42685937392681LL;
	uint32_t x688 = 7192U;
	int64_t t127 = 2253269337250439988LL;

    t127 = (((x685*x686)^x687)-x688);

    if (t127 != 42685937385503LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x693 = INT8_MAX;
	int64_t x694 = -1LL;
	volatile int32_t x695 = 799;
	int16_t x696 = 13413;

    t128 = (((x693*x694)^x695)-x696);

    if (t128 != -14279LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x697 = 1507778LL;
	int16_t x698 = INT16_MIN;
	int64_t t129 = 379955LL;

    t129 = (((x697*x698)^x699)-x700);

    if (t129 != 51524861953LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x701 = 4;
	int8_t x702 = INT8_MIN;
	uint16_t x703 = 306U;
	uint16_t x704 = UINT16_MAX;
	static int32_t t130 = 10;

    t130 = (((x701*x702)^x703)-x704);

    if (t130 != -65741) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x709 = 419U;
	uint64_t x710 = 60446134002LLU;
	int64_t x711 = 5985068084391LL;
	volatile int64_t x712 = INT64_MAX;
	volatile uint64_t t131 = 5614030919LLU;

    t131 = (((x709*x710)^x711)-x712);

    if (t131 != 9223392349423917746LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x713 = -1;
	int32_t x714 = -95;
	volatile uint8_t x715 = 87U;
	int8_t x716 = INT8_MIN;

    t132 = (((x713*x714)^x715)-x716);

    if (t132 != 136) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x718 = 251668363;
	int32_t x719 = 1;
	uint64_t x720 = 0LLU;

    t133 = (((x717*x718)^x719)-x720);

    if (t133 != 18446744073457883252LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x721 = 0;
	int32_t x722 = -4744;
	uint32_t x723 = 2103U;
	int32_t x724 = INT32_MIN;
	volatile uint32_t t134 = 2U;

    t134 = (((x721*x722)^x723)-x724);

    if (t134 != 2147485751U) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x743 = 861463LL;
	volatile uint64_t x744 = UINT64_MAX;
	volatile uint64_t t135 = 253341582941LLU;

    t135 = (((x741*x742)^x743)-x744);

    if (t135 != 861464LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x745 = 731U;
	static int8_t x746 = INT8_MIN;
	static int8_t x748 = -2;

    t136 = (((x745*x746)^x747)-x748);

    if (t136 != 4294897025U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x750 = 184U;
	int8_t x751 = INT8_MAX;
	static volatile uint32_t x752 = UINT32_MAX;
	volatile uint32_t t137 = 1844053434U;

    t137 = (((x749*x750)^x751)-x752);

    if (t137 != 4294967096U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x753 = 935668LLU;
	uint16_t x754 = UINT16_MAX;
	volatile int64_t x755 = INT64_MIN;
	volatile int8_t x756 = -1;
	volatile uint64_t t138 = 2671095093LLU;

    t138 = (((x753*x754)^x755)-x756);

    if (t138 != 9223372098173778189LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x757 = 0U;
	int8_t x759 = 3;
	static int8_t x760 = -53;
	volatile int64_t t139 = -131669696310LL;

    t139 = (((x757*x758)^x759)-x760);

    if (t139 != 56LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x761 = UINT64_MAX;
	uint16_t x762 = 0U;
	int64_t x763 = INT64_MIN;
	int16_t x764 = INT16_MIN;
	volatile uint64_t t140 = 498LLU;

    t140 = (((x761*x762)^x763)-x764);

    if (t140 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x766 = 1U;
	int16_t x767 = -13751;
	int32_t t141 = -4020;

    t141 = (((x765*x766)^x767)-x768);

    if (t141 != 13606) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x769 = 1;
	uint64_t x770 = 14LLU;
	static int32_t x771 = INT32_MIN;
	uint64_t t142 = 30068754864846LLU;

    t142 = (((x769*x770)^x771)-x772);

    if (t142 != 18446744071562067983LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x785 = INT8_MAX;
	uint32_t x786 = 982188906U;
	static int32_t x788 = INT32_MAX;
	uint64_t t143 = 919138020680532LLU;

    t143 = (((x785*x786)^x787)-x788);

    if (t143 != 18446744071762843168LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x789 = -1LL;
	int8_t x791 = INT8_MIN;
	int32_t x792 = 217134145;
	int64_t t144 = -74245612754LL;

    t144 = (((x789*x790)^x791)-x792);

    if (t144 != 21075385110LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x793 = INT8_MAX;
	uint32_t x794 = 11193877U;
	int8_t x796 = INT8_MIN;
	volatile uint32_t t145 = 2U;

    t145 = (((x793*x794)^x795)-x796);

    if (t145 != 1421624340U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x798 = 20U;
	int8_t x799 = INT8_MIN;
	static uint32_t x800 = UINT32_MAX;
	volatile uint32_t t146 = 102U;

    t146 = (((x797*x798)^x799)-x800);

    if (t146 != 4288198765U) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x801 = 500636U;
	int64_t x803 = -1LL;
	volatile int32_t x804 = 1;
	volatile int64_t t147 = 1235LL;

    t147 = (((x801*x802)^x803)-x804);

    if (t147 != -1538869766LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x809 = 0U;
	int8_t x810 = INT8_MAX;
	static uint8_t x811 = 5U;
	int32_t x812 = -291062989;
	static int32_t t148 = 36445011;

    t148 = (((x809*x810)^x811)-x812);

    if (t148 != 291062994) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x813 = UINT64_MAX;
	int8_t x814 = INT8_MIN;
	int32_t x815 = -1;
	int64_t x816 = 12138065LL;
	volatile uint64_t t149 = 23643LLU;

    t149 = (((x813*x814)^x815)-x816);

    if (t149 != 18446744073697413422LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x825 = -55;
	uint8_t x827 = UINT8_MAX;
	volatile int64_t x828 = INT64_MIN;

    t150 = (((x825*x826)^x827)-x828);

    if (t150 != 9223372036854775716LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x833 = UINT32_MAX;
	uint16_t x834 = UINT16_MAX;
	int32_t x835 = -1;
	int32_t x836 = INT32_MAX;
	uint32_t t151 = 34U;

    t151 = (((x833*x834)^x835)-x836);

    if (t151 != 2147549183U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x837 = -2;
	uint64_t x838 = UINT64_MAX;
	int32_t x839 = 404915382;
	uint64_t t152 = 2827641749LLU;

    t152 = (((x837*x838)^x839)-x840);

    if (t152 != 18446744073064816815LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x842 = INT16_MIN;
	int8_t x843 = INT8_MIN;
	volatile int32_t t153 = 37927;

    t153 = (((x841*x842)^x843)-x844);

    if (t153 != 327680) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x850 = 3U;
	int64_t x851 = -24846LL;
	int64_t x852 = INT64_MIN;
	static volatile int64_t t154 = -1748514889LL;

    t154 = (((x849*x850)^x851)-x852);

    if (t154 != 9223372036854694731LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x853 = INT8_MIN;
	static uint16_t x854 = 2U;
	static uint32_t x855 = UINT32_MAX;
	int8_t x856 = INT8_MIN;
	uint32_t t155 = 4663113U;

    t155 = (((x853*x854)^x855)-x856);

    if (t155 != 383U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x857 = -93LL;
	int16_t x859 = INT16_MIN;
	int32_t x860 = 178784;
	volatile int64_t t156 = -114712385LL;

    t156 = (((x857*x858)^x859)-x860);

    if (t156 != -199716190816LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x873 = UINT64_MAX;
	volatile uint32_t x875 = 26161U;
	int8_t x876 = 24;
	volatile uint64_t t157 = 31LLU;

    t157 = (((x873*x874)^x875)-x876);

    if (t157 != 9223372036854801944LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x881 = INT8_MAX;
	int8_t x882 = -1;
	uint64_t x883 = UINT64_MAX;
	int8_t x884 = -1;
	uint64_t t158 = 1331965LLU;

    t158 = (((x881*x882)^x883)-x884);

    if (t158 != 127LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x886 = 739272LLU;
	volatile uint64_t x887 = 100789828LLU;
	int8_t x888 = -11;
	volatile uint64_t t159 = 2593799LLU;

    t159 = (((x885*x886)^x887)-x888);

    if (t159 != 101362071LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x893 = 160U;
	int16_t x894 = INT16_MIN;
	volatile int16_t x895 = INT16_MIN;
	volatile uint32_t x896 = 10U;
	uint32_t t160 = 6970814U;

    t160 = (((x893*x894)^x895)-x896);

    if (t160 != 5210102U) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x897 = INT16_MIN;
	int32_t x898 = -174;
	volatile int8_t x899 = INT8_MAX;
	uint64_t x900 = 22299174LLU;
	volatile uint64_t t161 = 159525446LLU;

    t161 = (((x897*x898)^x899)-x900);

    if (t161 != 18446744073692954201LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x901 = UINT8_MAX;
	int64_t x904 = INT64_MIN;

    t162 = (((x901*x902)^x903)-x904);

    if (t162 != 9223372036854331852LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x905 = UINT64_MAX;
	int16_t x906 = -4721;
	int64_t x907 = -1LL;
	volatile uint64_t t163 = 3032899029LLU;

    t163 = (((x905*x906)^x907)-x908);

    if (t163 != 18446744073709546835LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x913 = 15847016942LLU;
	int8_t x914 = INT8_MIN;
	uint16_t x915 = 19U;
	int8_t x916 = INT8_MAX;

    t164 = (((x913*x914)^x915)-x916);

    if (t164 != 18446742045291382932LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x917 = 2371245507747LLU;
	int16_t x918 = -87;
	int32_t x919 = -1733571;
	static volatile uint64_t t165 = 0LLU;

    t165 = (((x917*x918)^x919)-x920);

    if (t165 != 18446432214190144297LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x921 = -1;
	volatile int8_t x922 = -1;
	int16_t x923 = -1;
	int16_t x924 = 13719;
	static int32_t t166 = 12;

    t166 = (((x921*x922)^x923)-x924);

    if (t166 != -13721) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x925 = 182;
	static uint64_t x926 = UINT64_MAX;
	int16_t x927 = INT16_MIN;
	volatile int16_t x928 = -1;
	volatile uint64_t t167 = 2598718LLU;

    t167 = (((x925*x926)^x927)-x928);

    if (t167 != 32587LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x929 = 2;
	int64_t x931 = INT64_MIN;
	int16_t x932 = 0;
	static volatile int64_t t168 = 3669287959LL;

    t168 = (((x929*x930)^x931)-x932);

    if (t168 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x937 = 88LL;
	int32_t x939 = -1;
	int16_t x940 = INT16_MIN;
	volatile int64_t t169 = -960441192495LL;

    t169 = (((x937*x938)^x939)-x940);

    if (t169 != 32855LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x949 = 4032830LL;
	static int8_t x951 = INT8_MAX;
	static int32_t x952 = 763584277;
	uint64_t t170 = 102917476088LLU;

    t170 = (((x949*x950)^x951)-x952);

    if (t170 != 18446744072941934504LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x957 = INT16_MIN;
	static volatile int16_t x958 = -1;
	int32_t x959 = -56298;
	int64_t x960 = INT64_MIN;
	volatile int64_t t171 = 16996819243LL;

    t171 = (((x957*x958)^x959)-x960);

    if (t171 != 9223372036854752278LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x961 = -7535LL;
	static volatile uint8_t x962 = 0U;
	static int32_t x963 = -1;
	volatile int64_t t172 = -14463327LL;

    t172 = (((x961*x962)^x963)-x964);

    if (t172 != -11LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x969 = INT32_MIN;
	uint16_t x970 = 1U;
	int16_t x971 = INT16_MAX;
	uint32_t x972 = 22U;
	volatile uint32_t t173 = 42833946U;

    t173 = (((x969*x970)^x971)-x972);

    if (t173 != 2147516393U) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x973 = -1;
	uint8_t x974 = 2U;
	int32_t x976 = INT32_MAX;
	static volatile int32_t t174 = 1496572;

    t174 = (((x973*x974)^x975)-x976);

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x985 = INT8_MIN;
	static volatile int8_t x986 = INT8_MIN;
	static int8_t x987 = 18;

    t175 = (((x985*x986)^x987)-x988);

    if (t175 != 16390) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t t176 = 2147933142269597LLU;

    t176 = (((x993*x994)^x995)-x996);

    if (t176 != 18438049442819792959LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1001 = INT16_MAX;
	uint64_t x1002 = 571953135521LLU;
	int64_t x1004 = INT64_MIN;
	uint64_t t177 = 48354175168272LLU;

    t177 = (((x1001*x1002)^x1003)-x1004);

    if (t177 != 9242113225246392352LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1005 = -1;
	volatile int64_t x1006 = 6920885LL;
	static uint64_t x1007 = 147LLU;
	int8_t x1008 = INT8_MIN;
	static volatile uint64_t t178 = 24250993674651992LLU;

    t178 = (((x1005*x1006)^x1007)-x1008);

    if (t178 != 18446744073702631000LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1010 = INT16_MIN;
	volatile int16_t x1011 = -1;
	int32_t x1012 = INT32_MIN;
	static volatile uint64_t t179 = 624319890630481934LLU;

    t179 = (((x1009*x1010)^x1011)-x1012);

    if (t179 != 2147450879LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1013 = INT32_MIN;
	static uint32_t x1014 = 748U;
	int16_t x1015 = INT16_MIN;
	static int32_t x1016 = INT32_MIN;
	volatile uint32_t t180 = 83U;

    t180 = (((x1013*x1014)^x1015)-x1016);

    if (t180 != 2147450880U) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint32_t x1017 = 100U;
	volatile int32_t x1018 = -78583674;
	static int64_t x1019 = 6585486415720340LL;
	static volatile int64_t t181 = 3316322681LL;

    t181 = (((x1017*x1018)^x1019)-x1020);

    if (t181 != 6585486808300485LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x1022 = UINT16_MAX;
	uint64_t x1023 = 4LLU;
	static uint64_t x1024 = UINT64_MAX;
	volatile uint64_t t182 = 63616760LLU;

    t182 = (((x1021*x1022)^x1023)-x1024);

    if (t182 != 16711430LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1025 = -1;
	static int8_t x1026 = -1;
	int16_t x1027 = -1;
	volatile int32_t t183 = 19;

    t183 = (((x1025*x1026)^x1027)-x1028);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1033 = UINT16_MAX;
	static int16_t x1034 = INT16_MAX;
	uint8_t x1035 = UINT8_MAX;
	int16_t x1036 = INT16_MIN;
	static volatile int32_t t184 = -187;

    t184 = (((x1033*x1034)^x1035)-x1036);

    if (t184 != 2147418366) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1037 = 28;
	uint32_t x1038 = 43796U;
	int64_t x1039 = INT64_MAX;
	int16_t x1040 = INT16_MAX;
	volatile int64_t t185 = -39891022522LL;

    t185 = (((x1037*x1038)^x1039)-x1040);

    if (t185 != 9223372036853516752LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1051 = -64751;
	volatile int8_t x1052 = INT8_MAX;

    t186 = (((x1049*x1050)^x1051)-x1052);

    if (t186 != 229068652134LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x1053 = INT8_MAX;
	uint32_t x1054 = 20037U;
	uint16_t x1055 = 970U;
	uint64_t t187 = 1731247963918LLU;

    t187 = (((x1053*x1054)^x1055)-x1056);

    if (t187 != 18446730180874393201LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1057 = INT8_MIN;
	int32_t x1059 = -234118;
	int8_t x1060 = 61;
	static int32_t t188 = -130571;

    t188 = (((x1057*x1058)^x1059)-x1060);

    if (t188 != 231741) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1065 = INT32_MIN;
	uint64_t x1066 = 18455915711506LLU;
	int16_t x1067 = -1;
	uint64_t t189 = 5759LLU;

    t189 = (((x1065*x1066)^x1067)-x1068);

    if (t189 != 10170928997035552400LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1069 = UINT16_MAX;
	int16_t x1070 = -1;
	int8_t x1071 = -1;
	int32_t x1072 = -1;
	volatile int32_t t190 = 2856;

    t190 = (((x1069*x1070)^x1071)-x1072);

    if (t190 != 65535) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x1073 = INT16_MAX;
	static int16_t x1074 = INT16_MIN;
	uint64_t x1076 = 33023134153LLU;
	volatile uint64_t t191 = 86485695016052LLU;

    t191 = (((x1073*x1074)^x1075)-x1076);

    if (t191 != 18446744039612708503LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1077 = 1703552444493LLU;
	int8_t x1078 = INT8_MIN;
	uint8_t x1079 = UINT8_MAX;
	static volatile int8_t x1080 = 1;
	volatile uint64_t t192 = 4262LLU;

    t192 = (((x1077*x1078)^x1079)-x1080);

    if (t192 != 18446526018996656510LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x1087 = UINT16_MAX;
	uint16_t x1088 = 18U;
	static volatile int64_t t193 = 494399125LL;

    t193 = (((x1085*x1086)^x1087)-x1088);

    if (t193 != 65516LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x1089 = UINT16_MAX;
	uint32_t x1090 = 27U;
	int8_t x1092 = 3;
	volatile int64_t t194 = -333163LL;

    t194 = (((x1089*x1090)^x1091)-x1092);

    if (t194 != -1766166LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1093 = INT8_MIN;
	volatile uint16_t x1094 = 22U;
	volatile uint16_t x1095 = 0U;
	uint8_t x1096 = 1U;

    t195 = (((x1093*x1094)^x1095)-x1096);

    if (t195 != -2817) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1101 = INT16_MIN;
	static uint8_t x1102 = 5U;
	int64_t x1103 = INT64_MIN;
	int64_t t196 = -96LL;

    t196 = (((x1101*x1102)^x1103)-x1104);

    if (t196 != 9223372036854611964LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x1105 = 51969883;
	volatile int64_t x1106 = -1LL;

    t197 = (((x1105*x1106)^x1107)-x1108);

    if (t197 != -390209813364LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1123 = -850979;
	static int32_t x1124 = INT32_MIN;
	static int32_t t198 = 138347192;

    t198 = (((x1121*x1122)^x1123)-x1124);

    if (t198 != 2146632669) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1125 = UINT8_MAX;
	int16_t x1126 = -13;
	volatile int16_t x1127 = 225;
	static uint8_t x1128 = 48U;
	static int32_t t199 = 796;

    t199 = (((x1125*x1126)^x1127)-x1128);

    if (t199 != -3140) { NG(); } else { ; }
	
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

