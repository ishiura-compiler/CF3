
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

static volatile int32_t x1 = -739;
uint64_t x2 = 668686470618224850LLU;
int32_t x4 = 28;
static int64_t x12 = INT64_MIN;
uint64_t x15 = UINT64_MAX;
static volatile int64_t x16 = INT64_MAX;
uint8_t x20 = 4U;
volatile int16_t x27 = -1;
uint16_t x29 = 6651U;
int8_t x35 = INT8_MIN;
volatile uint32_t x55 = UINT32_MAX;
uint32_t x58 = 2U;
int32_t x63 = -1;
uint32_t x66 = 2795U;
static uint64_t x69 = 54LLU;
uint8_t x74 = 13U;
int8_t x77 = 26;
static volatile int16_t x78 = 178;
volatile uint16_t x79 = 151U;
int32_t t19 = INT32_MAX;
int32_t x82 = 363;
static int64_t x83 = INT64_MIN;
int64_t t21 = -28LL;
int32_t x100 = INT32_MIN;
static uint8_t x106 = 107U;
volatile int8_t x119 = -7;
int32_t x120 = INT32_MIN;
int32_t x121 = INT32_MIN;
static int64_t x122 = INT64_MIN;
uint32_t x127 = UINT32_MAX;
static int64_t x148 = INT64_MAX;
int64_t x150 = INT64_MAX;
volatile int8_t x151 = -1;
volatile int32_t t38 = -7;
volatile int32_t x167 = -330226112;
volatile uint32_t x172 = 5U;
uint8_t x176 = 63U;
volatile uint64_t t42 = 52LLU;
int32_t x178 = -878;
volatile int64_t x192 = INT64_MAX;
int8_t x194 = 3;
uint64_t t48 = 96240554605307LLU;
uint32_t x208 = UINT32_MAX;
static uint8_t x212 = 3U;
volatile int32_t x215 = 1684;
int32_t t51 = 3;
static uint8_t x223 = 13U;
int32_t x224 = -1;
int16_t x232 = INT16_MIN;
static int32_t x236 = 7815554;
uint32_t x237 = UINT32_MAX;
uint16_t x242 = 31U;
int32_t x243 = INT32_MIN;
int16_t x247 = INT16_MIN;
volatile int64_t t60 = -24576345LL;
volatile int64_t x256 = INT64_MAX;
static int8_t x262 = INT8_MIN;
int32_t x270 = INT32_MAX;
volatile uint64_t t65 = UINT64_MAX;
static int32_t x273 = -644997;
uint16_t x275 = UINT16_MAX;
volatile uint64_t t67 = 614LLU;
int64_t x290 = INT64_MAX;
volatile int32_t x291 = INT32_MAX;
volatile int64_t x292 = -42024LL;
static uint32_t x296 = UINT32_MAX;
static int32_t x298 = -1;
static volatile uint32_t t72 = UINT32_MAX;
int16_t x301 = INT16_MIN;
int16_t x307 = -1676;
volatile uint16_t x308 = 3U;
static volatile uint64_t t74 = 3223680786496962LLU;
int16_t x309 = -6;
volatile int32_t x316 = -1;
int8_t x321 = 33;
static volatile uint64_t x322 = 1737473825LLU;
int64_t x324 = INT64_MIN;
static int32_t x325 = INT32_MIN;
static uint16_t x326 = 125U;
static uint16_t x332 = 0U;
static int64_t x338 = -1LL;
uint16_t x348 = 13U;
int32_t x356 = -2;
int64_t t88 = -1043945344103185LL;
static int16_t x378 = -14341;
int64_t t92 = 2018285LL;
int64_t x387 = INT64_MAX;
static uint64_t x391 = 103888810498169LLU;
int64_t x392 = INT64_MIN;
static volatile int64_t x395 = -1LL;
volatile int64_t t95 = -1536296572642406LL;
int16_t x398 = 0;
uint16_t x410 = 2U;
uint16_t x413 = 79U;
int16_t x414 = 0;
int64_t x417 = -1036523LL;
int32_t x422 = -1;
static uint16_t x423 = 30477U;
int32_t x425 = 1632;
uint64_t t103 = 517176496661964LLU;
static volatile int64_t x437 = INT64_MIN;
uint64_t x442 = 12581843854185701LLU;
int32_t x444 = 875325;
static int8_t x446 = -7;
int16_t x451 = -16191;
int64_t x456 = -1LL;
int32_t x457 = INT32_MIN;
uint32_t x461 = UINT32_MAX;
int64_t x464 = 335784309149359195LL;
static int64_t t113 = 37LL;
int8_t x471 = -1;
volatile int8_t x472 = -1;
uint32_t t116 = 197U;
static uint8_t x483 = UINT8_MAX;
uint64_t t117 = 32644617503618LLU;
volatile int32_t x487 = -1;
static volatile int64_t x491 = INT64_MIN;
uint64_t x493 = UINT64_MAX;
static int64_t x496 = INT64_MAX;
uint64_t t120 = UINT64_MAX;
uint8_t x504 = UINT8_MAX;
volatile int64_t t122 = -57289LL;
int8_t x511 = INT8_MIN;
volatile int16_t x516 = INT16_MIN;
int64_t x528 = INT64_MIN;
int32_t x536 = 459;
volatile uint64_t t130 = UINT64_MAX;
volatile int64_t t131 = 102391510500082728LL;
int32_t x553 = 7013317;
static volatile int32_t x554 = INT32_MIN;
int32_t t135 = -193276569;
int8_t x564 = -1;
volatile uint32_t x569 = 6868U;
volatile int64_t t138 = -794614LL;
uint64_t x574 = 15930128864015878LLU;
volatile int64_t x582 = INT64_MAX;
static int64_t x583 = -59288215LL;
static volatile int32_t x584 = INT32_MAX;
uint16_t x591 = 33U;
volatile int32_t t143 = 0;
int16_t x593 = -1;
int8_t x597 = -1;
static volatile uint32_t x600 = 28748427U;
volatile uint32_t x609 = 1597772U;
uint32_t t148 = 116098U;
int8_t x614 = INT8_MIN;
int16_t x616 = INT16_MAX;
volatile uint16_t x618 = UINT16_MAX;
uint64_t t151 = 9LLU;
uint64_t t152 = 1059685861603LLU;
uint16_t x637 = 3U;
uint64_t t155 = 26586701033644218LLU;
uint8_t x645 = 2U;
volatile int64_t t159 = -4381653107967007350LL;
uint16_t x671 = 14U;
uint8_t x672 = 2U;
static int8_t x675 = INT8_MAX;
int8_t x677 = INT8_MIN;
int32_t x679 = INT32_MIN;
volatile int64_t x683 = -20639954604084817LL;
volatile int64_t x684 = -594528LL;
static volatile int32_t x695 = INT32_MIN;
int16_t x698 = INT16_MIN;
int32_t x701 = 314;
uint16_t x702 = 10241U;
int16_t x704 = -61;
uint8_t x706 = 79U;
uint8_t x708 = 0U;
int64_t x710 = 703649090810LL;
static volatile uint32_t x715 = 2110853734U;
int64_t x718 = INT64_MIN;
volatile int64_t t174 = 56LL;
uint32_t t175 = 1326085922U;
uint32_t x727 = 254U;
uint8_t x731 = 85U;
uint16_t x735 = 1U;
int32_t x736 = INT32_MAX;
volatile uint16_t x737 = UINT16_MAX;
int16_t x740 = 26;
volatile uint32_t t180 = 248U;
uint32_t x747 = 246009U;
int8_t x748 = INT8_MAX;
uint8_t x755 = 7U;
int32_t t183 = 508;
volatile int64_t x757 = INT64_MAX;
static volatile uint64_t x760 = 145758394896578LLU;
volatile int16_t x763 = -1;
uint32_t x764 = 4089U;
int8_t x765 = 1;
int32_t x768 = INT32_MAX;
volatile uint64_t t188 = 3480793439454LLU;
static volatile int8_t x778 = -50;
static uint64_t x780 = UINT64_MAX;
int16_t x785 = INT16_MIN;
static uint8_t x787 = 21U;
uint64_t x792 = UINT64_MAX;
volatile int64_t x795 = INT64_MAX;
uint64_t x800 = 325662560224LLU;
int64_t x811 = 92177393140LL;
int32_t x814 = 514339915;
uint8_t x819 = 8U;


void f0(void) {
    	int8_t x3 = 1;
	uint64_t t0 = 500588189402LLU;

    t0 = ((x1^(x2%x3))|x4);

    if (t0 != 18446744073709550877LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MIN;
	static volatile uint16_t x6 = UINT16_MAX;
	int8_t x7 = 1;
	static uint8_t x8 = 1U;
	int32_t t1 = -193;

    t1 = ((x5^(x6%x7))|x8);

    if (t1 != -2147483647) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = -1;
	int8_t x10 = INT8_MAX;
	int8_t x11 = -13;
	int64_t t2 = -62378504905LL;

    t2 = ((x9^(x10%x11))|x12);

    if (t2 != -11LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	volatile int64_t x14 = INT64_MIN;
	uint64_t t3 = 2856626870129580516LLU;

    t3 = ((x13^(x14%x15))|x16);

    if (t3 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	int64_t x18 = -1LL;
	volatile int16_t x19 = INT16_MIN;
	volatile int64_t t4 = 4174966246LL;

    t4 = ((x17^(x18%x19))|x20);

    if (t4 != 4LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = INT64_MIN;
	static uint8_t x22 = UINT8_MAX;
	int16_t x23 = -507;
	volatile int32_t x24 = INT32_MIN;
	int64_t t5 = 199313783LL;

    t5 = ((x21^(x22%x23))|x24);

    if (t5 != -2147483393LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MIN;
	volatile int16_t x26 = -1;
	uint8_t x28 = UINT8_MAX;
	int32_t t6 = -1605;

    t6 = ((x25^(x26%x27))|x28);

    if (t6 != -32513) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = -1;
	static int32_t x31 = 1122845;
	int8_t x32 = INT8_MAX;
	static int32_t t7 = 488544614;

    t7 = ((x29^(x30%x31))|x32);

    if (t7 != -6529) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 4U;
	static uint32_t x34 = 3829957U;
	uint32_t x36 = 298851U;
	static uint32_t t8 = 15365U;

    t8 = ((x33^(x34%x35))|x36);

    if (t8 != 4128739U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	uint16_t x38 = UINT16_MAX;
	uint16_t x39 = 10U;
	int16_t x40 = INT16_MAX;
	static uint64_t t9 = UINT64_MAX;

    t9 = ((x37^(x38%x39))|x40);

    if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 289196248LLU;
	int32_t x42 = -1;
	int16_t x43 = -1;
	volatile int16_t x44 = -1;
	volatile uint64_t t10 = UINT64_MAX;

    t10 = ((x41^(x42%x43))|x44);

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 3U;
	volatile int8_t x46 = -1;
	int16_t x47 = INT16_MAX;
	volatile uint16_t x48 = UINT16_MAX;
	volatile int32_t t11 = -93504;

    t11 = ((x45^(x46%x47))|x48);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = 413;
	int8_t x50 = -1;
	volatile int64_t x51 = INT64_MIN;
	volatile int64_t x52 = 176318921466786186LL;
	int64_t t12 = 12696741367903LL;

    t12 = ((x49^(x50%x51))|x52);

    if (t12 != -22LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = INT16_MIN;
	int16_t x54 = -1;
	int8_t x56 = INT8_MIN;
	volatile uint32_t t13 = 113855U;

    t13 = ((x53^(x54%x55))|x56);

    if (t13 != 4294967168U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 13U;
	int32_t x59 = 6364787;
	int16_t x60 = -49;
	uint32_t t14 = 3499979U;

    t14 = ((x57^(x58%x59))|x60);

    if (t14 != 4294967247U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 45;
	int32_t x62 = INT32_MAX;
	volatile int16_t x64 = INT16_MIN;
	int32_t t15 = -2093;

    t15 = ((x61^(x62%x63))|x64);

    if (t15 != -32723) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	uint16_t x67 = UINT16_MAX;
	static int8_t x68 = INT8_MIN;
	static uint32_t t16 = 41926335U;

    t16 = ((x65^(x66%x67))|x68);

    if (t16 != 4294967275U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x70 = 2U;
	volatile int32_t x71 = -1;
	int8_t x72 = INT8_MAX;
	uint64_t t17 = 8113LLU;

    t17 = ((x69^(x70%x71))|x72);

    if (t17 != 127LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -2020472;
	uint64_t x75 = 2747119224545822LLU;
	int64_t x76 = INT64_MIN;
	static volatile uint64_t t18 = 86484222613475009LLU;

    t18 = ((x73^(x74%x75))|x76);

    if (t18 != 18446744073707531141LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x80 = INT32_MAX;

    t19 = ((x77^(x78%x79))|x80);

    if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	int64_t x84 = INT64_MAX;
	volatile int64_t t20 = -1321LL;

    t20 = ((x81^(x82%x83))|x84);

    if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -1;
	static uint16_t x86 = 13686U;
	static int64_t x87 = 6LL;
	static int8_t x88 = 1;

    t21 = ((x85^(x86%x87))|x88);

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = UINT32_MAX;
	int8_t x90 = 0;
	int32_t x91 = INT32_MAX;
	int16_t x92 = -234;
	volatile uint32_t t22 = UINT32_MAX;

    t22 = ((x89^(x90%x91))|x92);

    if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 63U;
	int16_t x94 = INT16_MAX;
	volatile int16_t x95 = -120;
	int32_t x96 = INT32_MAX;
	volatile uint32_t t23 = 227286U;

    t23 = ((x93^(x94%x95))|x96);

    if (t23 != 2147483647U) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = -2;
	volatile int64_t x98 = INT64_MIN;
	volatile uint32_t x99 = 2561353U;
	volatile int64_t t24 = 3206286LL;

    t24 = ((x97^(x98%x99))|x100);

    if (t24 != -2146768695LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 7U;
	uint8_t x102 = 2U;
	int32_t x103 = -94;
	int32_t x104 = INT32_MAX;
	volatile int32_t t25 = INT32_MAX;

    t25 = ((x101^(x102%x103))|x104);

    if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = 3238;
	uint32_t x107 = 63722156U;
	static volatile int16_t x108 = -3;
	volatile uint32_t t26 = 5294967U;

    t26 = ((x105^(x106%x107))|x108);

    if (t26 != 4294967293U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = UINT32_MAX;
	static int8_t x110 = INT8_MAX;
	int8_t x111 = INT8_MIN;
	static uint32_t x112 = UINT32_MAX;
	uint32_t t27 = UINT32_MAX;

    t27 = ((x109^(x110%x111))|x112);

    if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x113 = 15U;
	int64_t x114 = INT64_MAX;
	volatile int64_t x115 = 37738343631LL;
	static volatile int16_t x116 = INT16_MIN;
	volatile int64_t t28 = 54017LL;

    t28 = ((x113^(x114%x115))|x116);

    if (t28 != -19858LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MAX;
	static uint32_t x118 = UINT32_MAX;
	volatile uint32_t t29 = 150577083U;

    t29 = ((x117^(x118%x119))|x120);

    if (t29 != 2147483769U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x123 = UINT8_MAX;
	static uint8_t x124 = UINT8_MAX;
	int64_t t30 = -813459898LL;

    t30 = ((x121^(x122%x123))|x124);

    if (t30 != 2147483647LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 56458049LLU;
	int8_t x126 = -1;
	static uint32_t x128 = 148674051U;
	static uint64_t t31 = 62LLU;

    t31 = ((x125^(x126%x127))|x128);

    if (t31 != 199098179LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x129 = 22U;
	int32_t x130 = 1;
	uint16_t x131 = 1U;
	int8_t x132 = INT8_MAX;
	int32_t t32 = 134324;

    t32 = ((x129^(x130%x131))|x132);

    if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x133 = UINT64_MAX;
	int32_t x134 = 3040843;
	static uint16_t x135 = 2035U;
	volatile int16_t x136 = INT16_MAX;
	uint64_t t33 = UINT64_MAX;

    t33 = ((x133^(x134%x135))|x136);

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x137 = UINT16_MAX;
	static uint16_t x138 = 663U;
	volatile int16_t x139 = -244;
	int32_t x140 = 43;
	static volatile int32_t t34 = -105113;

    t34 = ((x137^(x138%x139))|x140);

    if (t34 != 65403) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 0;
	static volatile int16_t x142 = INT16_MAX;
	volatile uint64_t x143 = 643LLU;
	static uint32_t x144 = 449687145U;
	volatile uint64_t t35 = 82847LLU;

    t35 = ((x141^(x142%x143))|x144);

    if (t35 != 449687145LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = UINT8_MAX;
	uint8_t x146 = UINT8_MAX;
	uint64_t x147 = 11939LLU;
	static volatile uint64_t t36 = 10971534870533LLU;

    t36 = ((x145^(x146%x147))|x148);

    if (t36 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = -1LL;
	volatile int32_t x152 = 3510;
	volatile int64_t t37 = -3252LL;

    t37 = ((x149^(x150%x151))|x152);

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x153 = 56U;
	volatile int8_t x154 = INT8_MIN;
	int32_t x155 = -1;
	int8_t x156 = INT8_MIN;

    t38 = ((x153^(x154%x155))|x156);

    if (t38 != -72) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = INT16_MIN;
	static int64_t x158 = INT64_MIN;
	int16_t x159 = INT16_MIN;
	int32_t x160 = INT32_MIN;
	int64_t t39 = -21158LL;

    t39 = ((x157^(x158%x159))|x160);

    if (t39 != -32768LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x165 = 13739U;
	static int32_t x166 = INT32_MAX;
	volatile int64_t x168 = 37642970LL;
	static volatile int64_t t40 = 449440595LL;

    t40 = ((x165^(x166%x167))|x168);

    if (t40 != 201257694LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x169 = UINT16_MAX;
	static uint32_t x170 = 963522U;
	uint8_t x171 = UINT8_MAX;
	volatile uint32_t t41 = 150067U;

    t41 = ((x169^(x170%x171))|x172);

    if (t41 != 65407U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = INT8_MIN;
	int8_t x174 = 16;
	static uint64_t x175 = 156LLU;

    t42 = ((x173^(x174%x175))|x176);

    if (t42 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x177 = 3174;
	uint8_t x179 = UINT8_MAX;
	int64_t x180 = INT64_MAX;
	volatile int64_t t43 = 7661141859LL;

    t43 = ((x177^(x178%x179))|x180);

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x185 = 13;
	int32_t x186 = INT32_MAX;
	int8_t x187 = -6;
	int64_t x188 = 68152LL;
	int64_t t44 = -67900846767043540LL;

    t44 = ((x185^(x186%x187))|x188);

    if (t44 != 68156LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x189 = UINT32_MAX;
	volatile int8_t x190 = 7;
	volatile int8_t x191 = INT8_MIN;
	volatile int64_t t45 = INT64_MAX;

    t45 = ((x189^(x190%x191))|x192);

    if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x193 = UINT16_MAX;
	volatile int8_t x195 = INT8_MAX;
	int16_t x196 = 4671;
	int32_t t46 = -196620979;

    t46 = ((x193^(x194%x195))|x196);

    if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x197 = 3;
	int16_t x198 = INT16_MAX;
	int32_t x199 = -8317;
	volatile uint32_t x200 = UINT32_MAX;
	volatile uint32_t t47 = UINT32_MAX;

    t47 = ((x197^(x198%x199))|x200);

    if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x201 = -1;
	uint64_t x202 = 27LLU;
	static volatile int16_t x203 = INT16_MAX;
	uint32_t x204 = 1767868905U;

    t48 = ((x201^(x202%x203))|x204);

    if (t48 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x205 = 7LLU;
	int32_t x206 = INT32_MIN;
	volatile int8_t x207 = INT8_MAX;
	static uint64_t t49 = UINT64_MAX;

    t49 = ((x205^(x206%x207))|x208);

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x209 = INT8_MIN;
	int8_t x210 = 54;
	int8_t x211 = INT8_MIN;
	int32_t t50 = 9342385;

    t50 = ((x209^(x210%x211))|x212);

    if (t50 != -73) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x213 = 3768U;
	int32_t x214 = INT32_MIN;
	uint16_t x216 = UINT16_MAX;

    t51 = ((x213^(x214%x215))|x216);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x217 = -1LL;
	static uint32_t x218 = 9015U;
	volatile int16_t x219 = -62;
	int64_t x220 = INT64_MIN;
	int64_t t52 = -166LL;

    t52 = ((x217^(x218%x219))|x220);

    if (t52 != -9016LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x221 = 29325U;
	static int8_t x222 = 1;
	uint32_t t53 = UINT32_MAX;

    t53 = ((x221^(x222%x223))|x224);

    if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x225 = INT8_MIN;
	uint8_t x226 = UINT8_MAX;
	static int64_t x227 = INT64_MIN;
	volatile uint8_t x228 = 16U;
	volatile int64_t t54 = 966LL;

    t54 = ((x225^(x226%x227))|x228);

    if (t54 != -129LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x229 = 2U;
	static int32_t x230 = INT32_MIN;
	static int8_t x231 = INT8_MIN;
	int32_t t55 = 2626;

    t55 = ((x229^(x230%x231))|x232);

    if (t55 != -32766) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x233 = 32810571296101LLU;
	uint64_t x234 = 113629LLU;
	int8_t x235 = INT8_MIN;
	volatile uint64_t t56 = 113664LLU;

    t56 = ((x233^(x234%x235))|x236);

    if (t56 != 32810571651002LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x238 = 9531635459LL;
	int32_t x239 = INT32_MAX;
	volatile int16_t x240 = INT16_MIN;
	static volatile int64_t t57 = -2988570LL;

    t57 = ((x237^(x238%x239))|x240);

    if (t57 != -14088LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x241 = 49U;
	uint32_t x244 = UINT32_MAX;
	volatile uint32_t t58 = UINT32_MAX;

    t58 = ((x241^(x242%x243))|x244);

    if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x245 = -1;
	int8_t x246 = INT8_MIN;
	int8_t x248 = INT8_MIN;
	int32_t t59 = -68118;

    t59 = ((x245^(x246%x247))|x248);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x249 = INT8_MIN;
	int64_t x250 = INT64_MIN;
	int32_t x251 = INT32_MAX;
	int8_t x252 = INT8_MAX;

    t60 = ((x249^(x250%x251))|x252);

    if (t60 != 127LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x253 = -1;
	int64_t x254 = INT64_MAX;
	uint16_t x255 = 9285U;
	volatile int64_t t61 = 2467469323643345794LL;

    t61 = ((x253^(x254%x255))|x256);

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x257 = 15;
	static uint16_t x258 = 5319U;
	int16_t x259 = 164;
	volatile int16_t x260 = INT16_MIN;
	volatile int32_t t62 = 497213821;

    t62 = ((x257^(x258%x259))|x260);

    if (t62 != -32696) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = INT32_MIN;
	volatile uint16_t x263 = 7546U;
	int8_t x264 = INT8_MIN;
	volatile int32_t t63 = -211344552;

    t63 = ((x261^(x262%x263))|x264);

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x265 = -2634;
	int32_t x266 = 30046815;
	volatile int32_t x267 = INT32_MIN;
	int32_t x268 = INT32_MIN;
	int32_t t64 = -200;

    t64 = ((x265^(x266%x267))|x268);

    if (t64 != -30044183) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x269 = INT32_MIN;
	int32_t x271 = INT32_MIN;
	uint64_t x272 = 26334489LLU;

    t65 = ((x269^(x270%x271))|x272);

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x274 = -1;
	int8_t x276 = 1;
	int32_t t66 = -53255375;

    t66 = ((x273^(x274%x275))|x276);

    if (t66 != 644997) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x277 = 13381158084LLU;
	int32_t x278 = INT32_MIN;
	volatile int16_t x279 = -1;
	int8_t x280 = -8;

    t67 = ((x277^(x278%x279))|x280);

    if (t67 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x281 = -1569842351LL;
	static int8_t x282 = 42;
	int32_t x283 = INT32_MIN;
	static int16_t x284 = INT16_MIN;
	static int64_t t68 = 0LL;

    t68 = ((x281^(x282%x283))|x284);

    if (t68 != -25733LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x285 = -1;
	uint8_t x286 = UINT8_MAX;
	int16_t x287 = INT16_MIN;
	volatile uint8_t x288 = 16U;
	volatile int32_t t69 = 30619819;

    t69 = ((x285^(x286%x287))|x288);

    if (t69 != -240) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x289 = 296U;
	int64_t t70 = 64856167544130883LL;

    t70 = ((x289^(x290%x291))|x292);

    if (t70 != -41991LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x293 = INT16_MAX;
	uint16_t x294 = UINT16_MAX;
	volatile int16_t x295 = INT16_MAX;
	static uint32_t t71 = UINT32_MAX;

    t71 = ((x293^(x294%x295))|x296);

    if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x297 = 0U;
	uint8_t x299 = 6U;
	volatile int16_t x300 = -1;

    t72 = ((x297^(x298%x299))|x300);

    if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x302 = INT16_MIN;
	uint64_t x303 = 31LLU;
	volatile int32_t x304 = 1;
	volatile uint64_t t73 = 12886LLU;

    t73 = ((x301^(x302%x303))|x304);

    if (t73 != 18446744073709518863LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint64_t x305 = 550LLU;
	volatile int32_t x306 = INT32_MIN;

    t74 = ((x305^(x306%x307))|x308);

    if (t74 != 18446744073709549759LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x310 = -1;
	static int64_t x311 = -1LL;
	uint8_t x312 = 1U;
	int64_t t75 = 86197496787994LL;

    t75 = ((x309^(x310%x311))|x312);

    if (t75 != -5LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x313 = 997893720;
	static int64_t x314 = 4455057080505186LL;
	static uint32_t x315 = UINT32_MAX;
	static int64_t t76 = 5885143271LL;

    t76 = ((x313^(x314%x315))|x316);

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x317 = INT32_MIN;
	int16_t x318 = INT16_MIN;
	int64_t x319 = -1LL;
	int8_t x320 = -42;
	int64_t t77 = -20447LL;

    t77 = ((x317^(x318%x319))|x320);

    if (t77 != -42LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x323 = -220849LL;
	volatile uint64_t t78 = 21367745LLU;

    t78 = ((x321^(x322%x323))|x324);

    if (t78 != 9223372038592249600LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x327 = 58U;
	uint8_t x328 = 5U;
	static int32_t t79 = 7;

    t79 = ((x325^(x326%x327))|x328);

    if (t79 != -2147483635) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x329 = 150372U;
	int8_t x330 = INT8_MIN;
	static int32_t x331 = -1054759571;
	uint32_t t80 = 196712U;

    t80 = ((x329^(x330%x331))|x332);

    if (t80 != 4294816996U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x337 = INT32_MIN;
	uint64_t x339 = UINT64_MAX;
	uint32_t x340 = 4983U;
	volatile uint64_t t81 = 228100LLU;

    t81 = ((x337^(x338%x339))|x340);

    if (t81 != 18446744071562072951LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x341 = -1;
	uint8_t x342 = UINT8_MAX;
	int32_t x343 = -1;
	static int32_t x344 = INT32_MIN;
	int32_t t82 = -6434;

    t82 = ((x341^(x342%x343))|x344);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x345 = 310313535143LLU;
	int32_t x346 = INT32_MIN;
	uint64_t x347 = UINT64_MAX;
	volatile uint64_t t83 = 783LLU;

    t83 = ((x345^(x346%x347))|x348);

    if (t83 != 18446743763400312495LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x349 = -3958913103826LL;
	volatile int32_t x350 = -1;
	int32_t x351 = INT32_MIN;
	int32_t x352 = -1;
	volatile int64_t t84 = -2633738109685LL;

    t84 = ((x349^(x350%x351))|x352);

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x353 = UINT8_MAX;
	static int32_t x354 = -1006691994;
	int64_t x355 = -25876850LL;
	int64_t t85 = 3LL;

    t85 = ((x353^(x354%x355))|x356);

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x357 = INT8_MIN;
	static volatile uint32_t x358 = 16U;
	uint32_t x359 = 83U;
	int16_t x360 = -14;
	uint32_t t86 = 162822U;

    t86 = ((x357^(x358%x359))|x360);

    if (t86 != 4294967282U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x361 = UINT8_MAX;
	int64_t x362 = -29932476775LL;
	static int8_t x363 = INT8_MIN;
	int8_t x364 = INT8_MIN;
	int64_t t87 = -672560064643LL;

    t87 = ((x361^(x362%x363))|x364);

    if (t87 != -26LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x365 = 730841U;
	int32_t x366 = 128;
	int64_t x367 = -1LL;
	uint8_t x368 = UINT8_MAX;

    t88 = ((x365^(x366%x367))|x368);

    if (t88 != 730879LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x369 = 106873968962394LLU;
	int64_t x370 = -66LL;
	int8_t x371 = INT8_MIN;
	volatile uint64_t x372 = 27795LLU;
	uint64_t t89 = 1103422559877658LLU;

    t89 = ((x369^(x370%x371))|x372);

    if (t89 != 18446637199740599543LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x373 = INT8_MAX;
	static volatile int32_t x374 = 436261;
	volatile int8_t x375 = INT8_MAX;
	uint8_t x376 = 1U;
	int32_t t90 = 343;

    t90 = ((x373^(x374%x375))|x376);

    if (t90 != 111) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x377 = INT8_MIN;
	uint16_t x379 = 24U;
	int32_t x380 = -1;
	volatile int32_t t91 = -712632;

    t91 = ((x377^(x378%x379))|x380);

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x381 = -1LL;
	uint8_t x382 = UINT8_MAX;
	static uint16_t x383 = 3221U;
	static int16_t x384 = INT16_MAX;

    t92 = ((x381^(x382%x383))|x384);

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x385 = INT16_MIN;
	int32_t x386 = -30075453;
	static int64_t x388 = -751LL;
	int64_t t93 = -135026042295522LL;

    t93 = ((x385^(x386%x387))|x388);

    if (t93 != -557LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x389 = 1;
	uint64_t x390 = UINT64_MAX;
	volatile uint64_t t94 = 245702568681077065LLU;

    t94 = ((x389^(x390%x391))|x392);

    if (t94 != 9223411140888443444LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x393 = 20U;
	int8_t x394 = INT8_MAX;
	uint8_t x396 = 34U;

    t95 = ((x393^(x394%x395))|x396);

    if (t95 != 54LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x397 = INT32_MAX;
	uint64_t x399 = 96635018291LLU;
	static volatile uint8_t x400 = 6U;
	uint64_t t96 = 21LLU;

    t96 = ((x397^(x398%x399))|x400);

    if (t96 != 2147483647LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x401 = INT32_MIN;
	static int64_t x402 = INT64_MIN;
	uint32_t x403 = UINT32_MAX;
	uint8_t x404 = UINT8_MAX;
	static volatile int64_t t97 = -26LL;

    t97 = ((x401^(x402%x403))|x404);

    if (t97 != 255LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x405 = INT8_MAX;
	uint64_t x406 = 2628335130962764LLU;
	volatile uint64_t x407 = 12LLU;
	int16_t x408 = -180;
	uint64_t t98 = 16506LLU;

    t98 = ((x405^(x406%x407))|x408);

    if (t98 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x409 = 18U;
	int16_t x411 = INT16_MAX;
	int8_t x412 = INT8_MIN;
	volatile int32_t t99 = -2694;

    t99 = ((x409^(x410%x411))|x412);

    if (t99 != -112) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x415 = UINT64_MAX;
	int64_t x416 = -1LL;
	static uint64_t t100 = UINT64_MAX;

    t100 = ((x413^(x414%x415))|x416);

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x418 = 47U;
	int16_t x419 = INT16_MIN;
	static int64_t x420 = INT64_MAX;
	int64_t t101 = -2313662939486696000LL;

    t101 = ((x417^(x418%x419))|x420);

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x421 = INT16_MAX;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t102 = 851113448;

    t102 = ((x421^(x422%x423))|x424);

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x426 = 1;
	int64_t x427 = 7542712727711LL;
	uint64_t x428 = 484901965622028LLU;

    t103 = ((x425^(x426%x427))|x428);

    if (t103 != 484901965623149LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x429 = -6;
	uint16_t x430 = 465U;
	int32_t x431 = INT32_MAX;
	uint32_t x432 = 356U;
	uint32_t t104 = 17702955U;

    t104 = ((x429^(x430%x431))|x432);

    if (t104 != 4294967151U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x433 = UINT32_MAX;
	uint64_t x434 = UINT64_MAX;
	static volatile int8_t x435 = INT8_MAX;
	uint32_t x436 = UINT32_MAX;
	volatile uint64_t t105 = 22399735LLU;

    t105 = ((x433^(x434%x435))|x436);

    if (t105 != 4294967295LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x438 = 4U;
	volatile int16_t x439 = 15894;
	static volatile int32_t x440 = INT32_MIN;
	int64_t t106 = -3699788380622121LL;

    t106 = ((x437^(x438%x439))|x440);

    if (t106 != -2147483644LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x441 = INT64_MIN;
	int16_t x443 = -1;
	uint64_t t107 = 1546LLU;

    t107 = ((x441^(x442%x443))|x444);

    if (t107 != 9235953880709029885LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x445 = 41U;
	static int8_t x447 = -5;
	uint8_t x448 = 83U;
	int32_t t108 = 134899;

    t108 = ((x445^(x446%x447))|x448);

    if (t108 != -41) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x449 = UINT16_MAX;
	int16_t x450 = -1;
	int32_t x452 = INT32_MIN;
	volatile int32_t t109 = 765;

    t109 = ((x449^(x450%x451))|x452);

    if (t109 != -65536) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint64_t x453 = 9276248LLU;
	volatile uint64_t x454 = UINT64_MAX;
	int16_t x455 = INT16_MAX;
	volatile uint64_t t110 = UINT64_MAX;

    t110 = ((x453^(x454%x455))|x456);

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x458 = INT64_MIN;
	int16_t x459 = 4;
	int8_t x460 = INT8_MIN;
	volatile int64_t t111 = 227246LL;

    t111 = ((x457^(x458%x459))|x460);

    if (t111 != -128LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x462 = INT8_MIN;
	static int32_t x463 = INT32_MAX;
	int64_t t112 = 873LL;

    t112 = ((x461^(x462%x463))|x464);

    if (t112 != 335784309149359231LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x465 = 2277U;
	int16_t x466 = -1;
	int64_t x467 = INT64_MIN;
	int32_t x468 = -800;

    t113 = ((x465^(x466%x467))|x468);

    if (t113 != -6LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x469 = 4501LL;
	int64_t x470 = INT64_MIN;
	static int64_t t114 = -2670LL;

    t114 = ((x469^(x470%x471))|x472);

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x473 = INT32_MIN;
	static int8_t x474 = -42;
	int64_t x475 = INT64_MIN;
	int32_t x476 = 0;
	static volatile int64_t t115 = 664LL;

    t115 = ((x473^(x474%x475))|x476);

    if (t115 != 2147483606LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x477 = 290231122U;
	volatile int32_t x478 = INT32_MIN;
	static volatile int8_t x479 = INT8_MIN;
	int16_t x480 = 70;

    t116 = ((x477^(x478%x479))|x480);

    if (t116 != 290231126U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x481 = -1LL;
	static uint8_t x482 = 34U;
	static uint64_t x484 = 551858470824277LLU;

    t117 = ((x481^(x482%x483))|x484);

    if (t117 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x485 = INT64_MIN;
	static volatile int64_t x486 = INT64_MAX;
	int64_t x488 = INT64_MIN;
	int64_t t118 = INT64_MIN;

    t118 = ((x485^(x486%x487))|x488);

    if (t118 != INT64_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x489 = -23;
	uint64_t x490 = 58122079468LLU;
	int64_t x492 = -1LL;
	uint64_t t119 = UINT64_MAX;

    t119 = ((x489^(x490%x491))|x492);

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x494 = 0;
	int64_t x495 = INT64_MIN;

    t120 = ((x493^(x494%x495))|x496);

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x497 = INT64_MIN;
	static volatile uint16_t x498 = 45U;
	static uint32_t x499 = 698871215U;
	static int8_t x500 = INT8_MAX;
	int64_t t121 = -490133134978384LL;

    t121 = ((x497^(x498%x499))|x500);

    if (t121 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x501 = 219U;
	static volatile int64_t x502 = INT64_MIN;
	int64_t x503 = INT64_MIN;

    t122 = ((x501^(x502%x503))|x504);

    if (t122 != 255LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x505 = INT8_MAX;
	int8_t x506 = 5;
	int16_t x507 = -1923;
	int16_t x508 = INT16_MIN;
	int32_t t123 = 53;

    t123 = ((x505^(x506%x507))|x508);

    if (t123 != -32646) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x509 = INT32_MIN;
	int64_t x510 = -6853328286245LL;
	static uint32_t x512 = 1285358514U;
	static volatile int64_t t124 = -597352250LL;

    t124 = ((x509^(x510%x511))|x512);

    if (t124 != 2147483643LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x513 = 27U;
	static volatile uint64_t x514 = 0LLU;
	int64_t x515 = INT64_MAX;
	volatile uint64_t t125 = 49047793559LLU;

    t125 = ((x513^(x514%x515))|x516);

    if (t125 != 18446744073709518875LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x517 = 59U;
	uint32_t x518 = UINT32_MAX;
	volatile int16_t x519 = INT16_MIN;
	volatile int16_t x520 = -103;
	uint32_t t126 = 124338428U;

    t126 = ((x517^(x518%x519))|x520);

    if (t126 != 4294967261U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x521 = -40;
	static uint8_t x522 = 2U;
	uint64_t x523 = 212193629894LLU;
	volatile uint64_t x524 = 745LLU;
	uint64_t t127 = 26809703134LLU;

    t127 = ((x521^(x522%x523))|x524);

    if (t127 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x525 = INT8_MIN;
	uint16_t x526 = UINT16_MAX;
	static int8_t x527 = INT8_MIN;
	volatile int64_t t128 = -46LL;

    t128 = ((x525^(x526%x527))|x528);

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x529 = 25821U;
	uint32_t x530 = 3U;
	volatile int32_t x531 = INT32_MIN;
	int16_t x532 = INT16_MAX;
	volatile uint32_t t129 = 3760U;

    t129 = ((x529^(x530%x531))|x532);

    if (t129 != 32767U) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x533 = UINT64_MAX;
	uint32_t x534 = UINT32_MAX;
	uint8_t x535 = UINT8_MAX;

    t130 = ((x533^(x534%x535))|x536);

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x537 = INT64_MAX;
	int32_t x538 = INT32_MIN;
	volatile uint16_t x539 = 1U;
	int16_t x540 = -1391;

    t131 = ((x537^(x538%x539))|x540);

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x545 = INT16_MAX;
	int16_t x546 = -1;
	uint32_t x547 = UINT32_MAX;
	uint16_t x548 = 89U;
	volatile uint32_t t132 = 8U;

    t132 = ((x545^(x546%x547))|x548);

    if (t132 != 32767U) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x549 = INT32_MIN;
	int32_t x550 = -13;
	int32_t x551 = -1;
	int8_t x552 = INT8_MIN;
	static int32_t t133 = -3484231;

    t133 = ((x549^(x550%x551))|x552);

    if (t133 != -128) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x555 = INT8_MAX;
	volatile int32_t x556 = 2803295;
	int32_t t134 = 2995595;

    t134 = ((x553^(x554%x555))|x556);

    if (t134 != -4260225) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x557 = INT32_MIN;
	int8_t x558 = 25;
	int8_t x559 = INT8_MAX;
	static int32_t x560 = INT32_MIN;

    t135 = ((x557^(x558%x559))|x560);

    if (t135 != -2147483623) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x561 = INT32_MAX;
	int16_t x562 = -1;
	uint64_t x563 = UINT64_MAX;
	volatile uint64_t t136 = UINT64_MAX;

    t136 = ((x561^(x562%x563))|x564);

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x565 = 0;
	static int16_t x566 = -4760;
	int64_t x567 = -1LL;
	int16_t x568 = -1;
	static int64_t t137 = -10LL;

    t137 = ((x565^(x566%x567))|x568);

    if (t137 != -1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x570 = INT32_MIN;
	static int64_t x571 = INT64_MIN;
	int32_t x572 = INT32_MIN;

    t138 = ((x569^(x570%x571))|x572);

    if (t138 != -2147476780LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x573 = -1;
	volatile int8_t x575 = INT8_MAX;
	int32_t x576 = INT32_MIN;
	volatile uint64_t t139 = 35294078766604099LLU;

    t139 = ((x573^(x574%x575))|x576);

    if (t139 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x577 = -1;
	static int8_t x578 = INT8_MIN;
	static uint64_t x579 = UINT64_MAX;
	static int8_t x580 = INT8_MAX;
	volatile uint64_t t140 = 159057891LLU;

    t140 = ((x577^(x578%x579))|x580);

    if (t140 != 127LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x581 = 12;
	int64_t t141 = -43111301201028319LL;

    t141 = ((x581^(x582%x583))|x584);

    if (t141 != 2147483647LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x585 = INT8_MIN;
	int8_t x586 = INT8_MAX;
	int16_t x587 = INT16_MIN;
	int16_t x588 = -1;
	int32_t t142 = -646;

    t142 = ((x585^(x586%x587))|x588);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x589 = 1516;
	volatile uint8_t x590 = 5U;
	volatile uint8_t x592 = UINT8_MAX;

    t143 = ((x589^(x590%x591))|x592);

    if (t143 != 1535) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x594 = -1LL;
	static uint64_t x595 = UINT64_MAX;
	int8_t x596 = INT8_MIN;
	uint64_t t144 = UINT64_MAX;

    t144 = ((x593^(x594%x595))|x596);

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x598 = 5;
	volatile int32_t x599 = INT32_MIN;
	uint32_t t145 = 106037417U;

    t145 = ((x597^(x598%x599))|x600);

    if (t145 != 4294967291U) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x601 = INT64_MIN;
	volatile uint32_t x602 = UINT32_MAX;
	volatile int32_t x603 = INT32_MAX;
	int16_t x604 = INT16_MIN;
	volatile int64_t t146 = -28669863LL;

    t146 = ((x601^(x602%x603))|x604);

    if (t146 != -32767LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x605 = -378425954948936LL;
	static int32_t x606 = -1;
	int64_t x607 = -1897190070969357LL;
	uint32_t x608 = 3511285U;
	volatile int64_t t147 = 121002413069LL;

    t147 = ((x605^(x606%x607))|x608);

    if (t147 != 378425957144567LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x610 = 18U;
	int16_t x611 = -1;
	volatile uint32_t x612 = 1813132U;

    t148 = ((x609^(x610%x611))|x612);

    if (t148 != 1829836U) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x613 = -1;
	uint8_t x615 = 121U;
	int32_t t149 = 40328124;

    t149 = ((x613^(x614%x615))|x616);

    if (t149 != 32767) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x617 = 1;
	int16_t x619 = 482;
	int64_t x620 = INT64_MAX;
	int64_t t150 = INT64_MAX;

    t150 = ((x617^(x618%x619))|x620);

    if (t150 != INT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x621 = -9083LL;
	uint64_t x622 = UINT64_MAX;
	static int32_t x623 = INT32_MIN;
	static uint8_t x624 = 1U;

    t151 = ((x621^(x622%x623))|x624);

    if (t151 != 18446744071562077051LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint64_t x625 = 29988151189LLU;
	int8_t x626 = 29;
	int32_t x627 = -1;
	int32_t x628 = INT32_MAX;

    t152 = ((x625^(x626%x627))|x628);

    if (t152 != 30064771071LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x629 = 2;
	int32_t x630 = INT32_MIN;
	int64_t x631 = 704402LL;
	int16_t x632 = -3;
	int64_t t153 = 267618344834062LL;

    t153 = ((x629^(x630%x631))|x632);

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x633 = 3575985;
	int16_t x634 = 11;
	int64_t x635 = -3LL;
	int8_t x636 = INT8_MIN;
	int64_t t154 = 1755LL;

    t154 = ((x633^(x634%x635))|x636);

    if (t154 != -77LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x638 = INT8_MIN;
	uint64_t x639 = 1299600LLU;
	volatile int64_t x640 = 3136570372LL;

    t155 = ((x637^(x638%x639))|x640);

    if (t155 != 3137109239LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x641 = -1;
	int16_t x642 = INT16_MIN;
	int64_t x643 = 7LL;
	uint32_t x644 = 12212348U;
	int64_t t156 = 10009344587437LL;

    t156 = ((x641^(x642%x643))|x644);

    if (t156 != 12212348LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x646 = INT8_MIN;
	static int64_t x647 = INT64_MIN;
	static volatile int16_t x648 = 4;
	volatile int64_t t157 = 349255478LL;

    t157 = ((x645^(x646%x647))|x648);

    if (t157 != -122LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x653 = UINT16_MAX;
	static volatile int64_t x654 = INT64_MIN;
	static uint32_t x655 = UINT32_MAX;
	int64_t x656 = INT64_MIN;
	volatile int64_t t158 = 1177LL;

    t158 = ((x653^(x654%x655))|x656);

    if (t158 != -2147418113LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x657 = -107922484781619LL;
	static int8_t x658 = INT8_MAX;
	int64_t x659 = INT64_MIN;
	static int32_t x660 = 106;

    t159 = ((x657^(x658%x659))|x660);

    if (t159 != -107922484781574LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x661 = INT8_MIN;
	int8_t x662 = INT8_MIN;
	uint64_t x663 = 11839244030LLU;
	int8_t x664 = INT8_MIN;
	uint64_t t160 = 9042594903217175630LLU;

    t160 = ((x661^(x662%x663))|x664);

    if (t160 != 18446744073709551512LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x665 = -167LL;
	static int16_t x666 = INT16_MIN;
	int32_t x667 = INT32_MIN;
	int64_t x668 = INT64_MIN;
	int64_t t161 = 8857232988471834LL;

    t161 = ((x665^(x666%x667))|x668);

    if (t161 != -9223372036854743207LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x669 = 132321019923LLU;
	uint64_t x670 = 793207294024415LLU;
	uint64_t t162 = 1582503463LLU;

    t162 = ((x669^(x670%x671))|x672);

    if (t162 != 132321019930LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x673 = 82;
	int32_t x674 = 237938;
	int16_t x676 = INT16_MIN;
	static int32_t t163 = -12;

    t163 = ((x673^(x674%x675))|x676);

    if (t163 != -32751) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x678 = 87339005U;
	uint16_t x680 = 1U;
	uint32_t t164 = 77033804U;

    t164 = ((x677^(x678%x679))|x680);

    if (t164 != 4207628413U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x681 = -1;
	int16_t x682 = 1;
	int64_t t165 = -142968283754935LL;

    t165 = ((x681^(x682%x683))|x684);

    if (t165 != -2LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x685 = INT8_MIN;
	int16_t x686 = INT16_MIN;
	static volatile uint8_t x687 = UINT8_MAX;
	int64_t x688 = -1LL;
	int64_t t166 = -3085943231287437395LL;

    t166 = ((x685^(x686%x687))|x688);

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x689 = -2083068LL;
	int8_t x690 = 17;
	uint64_t x691 = 120316LLU;
	static uint8_t x692 = UINT8_MAX;
	uint64_t t167 = 3639411LLU;

    t167 = ((x689^(x690%x691))|x692);

    if (t167 != 18446744073707468799LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x693 = INT16_MIN;
	static volatile int64_t x694 = 240577840LL;
	int32_t x696 = INT32_MAX;
	static volatile int64_t t168 = 2267800058LL;

    t168 = ((x693^(x694%x695))|x696);

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x697 = 192973U;
	uint32_t x699 = 2792941U;
	uint32_t x700 = 7741U;
	uint32_t t169 = 22U;

    t169 = ((x697^(x698%x699))|x700);

    if (t169 != 2342911U) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x703 = -1;
	int32_t t170 = -41;

    t170 = ((x701^(x702%x703))|x704);

    if (t170 != -5) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x705 = INT8_MAX;
	static int16_t x707 = INT16_MIN;
	volatile int32_t t171 = 12;

    t171 = ((x705^(x706%x707))|x708);

    if (t171 != 48) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x709 = INT8_MIN;
	int16_t x711 = INT16_MIN;
	static int16_t x712 = INT16_MIN;
	volatile int64_t t172 = 1677LL;

    t172 = ((x709^(x710%x711))|x712);

    if (t172 != -3206LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x713 = -1;
	uint8_t x714 = 0U;
	volatile int8_t x716 = INT8_MAX;
	uint32_t t173 = UINT32_MAX;

    t173 = ((x713^(x714%x715))|x716);

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x717 = -1;
	uint8_t x719 = 1U;
	int16_t x720 = INT16_MIN;

    t174 = ((x717^(x718%x719))|x720);

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x721 = 333682U;
	uint16_t x722 = 3381U;
	int16_t x723 = -1;
	uint8_t x724 = 0U;

    t175 = ((x721^(x722%x723))|x724);

    if (t175 != 333682U) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x725 = INT64_MAX;
	uint32_t x726 = 925U;
	volatile int32_t x728 = INT32_MAX;
	int64_t t176 = INT64_MAX;

    t176 = ((x725^(x726%x727))|x728);

    if (t176 != INT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x729 = 309416906LLU;
	int32_t x730 = -5639;
	volatile uint8_t x732 = UINT8_MAX;
	static volatile uint64_t t177 = 217932277722LLU;

    t177 = ((x729^(x730%x731))|x732);

    if (t177 != 18446744073400134911LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x733 = 0U;
	volatile uint32_t x734 = UINT32_MAX;
	uint32_t t178 = 100U;

    t178 = ((x733^(x734%x735))|x736);

    if (t178 != 2147483647U) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x738 = INT16_MIN;
	uint8_t x739 = 67U;
	volatile int32_t t179 = 688319;

    t179 = ((x737^(x738%x739))|x740);

    if (t179 != -65506) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x741 = 34U;
	uint32_t x742 = UINT32_MAX;
	int16_t x743 = -1;
	volatile int16_t x744 = INT16_MIN;

    t180 = ((x741^(x742%x743))|x744);

    if (t180 != 4294934562U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x745 = UINT8_MAX;
	uint16_t x746 = 19U;
	static uint32_t t181 = 4795U;

    t181 = ((x745^(x746%x747))|x748);

    if (t181 != 255U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x749 = 1;
	int8_t x750 = INT8_MAX;
	static int8_t x751 = -13;
	static int16_t x752 = -1206;
	volatile int32_t t182 = -4256;

    t182 = ((x749^(x750%x751))|x752);

    if (t182 != -1205) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x753 = INT32_MIN;
	int16_t x754 = INT16_MIN;
	int8_t x756 = -1;

    t183 = ((x753^(x754%x755))|x756);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x758 = INT8_MIN;
	int64_t x759 = 26490153799269625LL;
	volatile uint64_t t184 = 20760045041LLU;

    t184 = ((x757^(x758%x759))|x760);

    if (t184 != 9223517795249672447LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x761 = -3526;
	static uint16_t x762 = UINT16_MAX;
	static uint32_t t185 = 40057234U;

    t185 = ((x761^(x762%x763))|x764);

    if (t185 != 4294967291U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x766 = -1;
	static volatile int64_t x767 = -1LL;
	int64_t t186 = 16611998LL;

    t186 = ((x765^(x766%x767))|x768);

    if (t186 != 2147483647LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int16_t x769 = -1;
	int64_t x770 = -1LL;
	int16_t x771 = -1;
	int32_t x772 = -5;
	int64_t t187 = 131887663982LL;

    t187 = ((x769^(x770%x771))|x772);

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x773 = INT8_MIN;
	int8_t x774 = 1;
	uint64_t x775 = UINT64_MAX;
	uint16_t x776 = 3053U;

    t188 = ((x773^(x774%x775))|x776);

    if (t188 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x777 = UINT64_MAX;
	int16_t x779 = -1;
	uint64_t t189 = UINT64_MAX;

    t189 = ((x777^(x778%x779))|x780);

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x781 = INT32_MIN;
	static int16_t x782 = INT16_MAX;
	int8_t x783 = -1;
	int32_t x784 = INT32_MIN;
	static int32_t t190 = INT32_MIN;

    t190 = ((x781^(x782%x783))|x784);

    if (t190 != INT32_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x786 = INT16_MIN;
	int8_t x788 = INT8_MIN;
	volatile int32_t t191 = 591446;

    t191 = ((x785^(x786%x787))|x788);

    if (t191 != -8) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x789 = 198670858819LLU;
	int32_t x790 = -902;
	int16_t x791 = -10;
	uint64_t t192 = UINT64_MAX;

    t192 = ((x789^(x790%x791))|x792);

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int32_t x793 = 3865654;
	static int8_t x794 = -1;
	static int8_t x796 = INT8_MIN;
	int64_t t193 = -1LL;

    t193 = ((x793^(x794%x795))|x796);

    if (t193 != -55LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x797 = INT64_MIN;
	int32_t x798 = INT32_MAX;
	static uint32_t x799 = 39291U;
	static volatile uint64_t t194 = 141249104LLU;

    t194 = ((x797^(x798%x799))|x800);

    if (t194 != 9223372362517368826LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x801 = 10258LLU;
	int64_t x802 = -5005714105086188LL;
	volatile int64_t x803 = INT64_MIN;
	int64_t x804 = INT64_MAX;
	uint64_t t195 = UINT64_MAX;

    t195 = ((x801^(x802%x803))|x804);

    if (t195 != UINT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x809 = INT32_MIN;
	int8_t x810 = -7;
	int32_t x812 = INT32_MIN;
	volatile int64_t t196 = 834689135254LL;

    t196 = ((x809^(x810%x811))|x812);

    if (t196 != -7LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x813 = -137352;
	int32_t x815 = INT32_MAX;
	volatile int16_t x816 = -1;
	int32_t t197 = -10281844;

    t197 = ((x813^(x814%x815))|x816);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x817 = UINT64_MAX;
	int16_t x818 = -1;
	static uint64_t x820 = 24455937LLU;
	uint64_t t198 = 768780392968427779LLU;

    t198 = ((x817^(x818%x819))|x820);

    if (t198 != 24455937LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x821 = 1462U;
	static uint16_t x822 = UINT16_MAX;
	int8_t x823 = -1;
	int8_t x824 = INT8_MAX;
	int32_t t199 = 9653371;

    t199 = ((x821^(x822%x823))|x824);

    if (t199 != 1535) { NG(); } else { ; }
	
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

