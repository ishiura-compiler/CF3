
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

int8_t x1 = 0;
int16_t x3 = INT16_MAX;
int16_t x6 = INT16_MIN;
int16_t x8 = -31;
uint8_t x10 = 11U;
uint16_t x11 = UINT16_MAX;
volatile int64_t x15 = INT64_MAX;
volatile int64_t t3 = 58683LL;
uint32_t x20 = 11143U;
int64_t x23 = INT64_MAX;
int32_t x24 = INT32_MIN;
int32_t x26 = INT32_MIN;
volatile int64_t x27 = 343584496570810859LL;
uint8_t x34 = 1U;
volatile int64_t t7 = 3018758414145LL;
uint16_t x39 = 4U;
volatile int32_t t10 = 1504040;
volatile int64_t t15 = -2358996LL;
volatile int32_t x81 = -57581973;
uint8_t x85 = 3U;
int64_t x90 = -38397586625LL;
volatile int32_t t19 = 635760;
int32_t t20 = -17978;
int8_t x102 = INT8_MAX;
int8_t x106 = -1;
uint32_t x112 = 7795669U;
volatile uint32_t t24 = 127U;
int8_t x116 = INT8_MIN;
int32_t x119 = -6;
int64_t x121 = -1LL;
volatile uint64_t x124 = 56324726LLU;
volatile uint64_t t27 = 6758310LLU;
volatile int16_t x141 = 32;
int32_t t33 = 12447535;
volatile uint8_t x157 = 47U;
int32_t x159 = INT32_MIN;
uint32_t x164 = 504058875U;
static volatile int16_t x166 = -1;
volatile int64_t t37 = -8416LL;
int16_t x178 = INT16_MIN;
int16_t x188 = -1;
uint16_t x190 = 1U;
static uint32_t x192 = UINT32_MAX;
static uint8_t x203 = 2U;
int16_t x207 = INT16_MAX;
int8_t x210 = INT8_MIN;
int64_t t48 = -89877838LL;
int8_t x221 = INT8_MIN;
int64_t x225 = INT64_MAX;
int32_t x226 = INT32_MAX;
uint64_t x227 = 7660121LLU;
static volatile int8_t x251 = 7;
volatile uint64_t t54 = 77490556012LLU;
int64_t x270 = -21828LL;
uint64_t x276 = UINT64_MAX;
int16_t x297 = INT16_MIN;
volatile uint64_t t64 = 2215427906LLU;
int32_t t66 = -77234430;
volatile int16_t x317 = INT16_MIN;
volatile int8_t x333 = -1;
int64_t t72 = -301424532LL;
volatile uint8_t x347 = UINT8_MAX;
int8_t x348 = -1;
volatile uint8_t x349 = UINT8_MAX;
volatile int8_t x351 = INT8_MIN;
int8_t x355 = -39;
int8_t x363 = INT8_MIN;
volatile uint32_t t78 = 59U;
volatile int32_t t80 = 3;
volatile uint64_t t81 = 29072119333338488LLU;
uint64_t t84 = 58762LLU;
static int32_t x393 = 627;
int8_t x397 = -1;
int16_t x400 = -1;
int64_t x408 = -1LL;
uint64_t t90 = 11672743495LLU;
uint32_t x426 = 5700U;
static volatile int32_t t92 = 150880305;
uint8_t x432 = 3U;
static uint32_t t96 = 334U;
static volatile int32_t x446 = -39818473;
volatile int32_t t97 = -433;
static int64_t x469 = INT64_MIN;
uint64_t t101 = 1542323478134LLU;
int32_t x474 = INT32_MIN;
volatile int16_t x486 = -1;
int16_t x488 = INT16_MIN;
volatile uint64_t t103 = 7919712026095LLU;
static int8_t x504 = -1;
static uint64_t t106 = 9814698857030LLU;
int8_t x509 = INT8_MIN;
int8_t x511 = 16;
volatile uint64_t x512 = 8479927LLU;
int8_t x524 = INT8_MIN;
static uint16_t x530 = 13U;
static volatile uint64_t x534 = 2411245LLU;
int8_t x538 = INT8_MIN;
int16_t x540 = 15;
uint64_t x542 = UINT64_MAX;
volatile int16_t x548 = -52;
static uint64_t x550 = 1217307629520LLU;
static int32_t x558 = -1;
uint16_t x559 = 8U;
int32_t x560 = INT32_MIN;
uint8_t x563 = 1U;
volatile uint32_t t119 = 160620U;
static uint8_t x575 = 28U;
volatile uint64_t t123 = 285108679LLU;
int64_t x586 = -1LL;
uint32_t x588 = 304477580U;
volatile uint32_t t125 = 7675333U;
uint16_t x589 = 42U;
uint32_t x597 = 329482175U;
static volatile int16_t x605 = INT16_MIN;
volatile int8_t x607 = 11;
int8_t x608 = INT8_MAX;
volatile int32_t x614 = -1;
static volatile uint8_t x616 = 12U;
uint64_t x620 = UINT64_MAX;
int8_t x622 = 1;
uint32_t x626 = 1841415U;
static int16_t x627 = 420;
uint8_t x628 = 1U;
int64_t x631 = -638851993944207681LL;
int16_t x635 = 129;
uint64_t x643 = UINT64_MAX;
int32_t x645 = INT32_MIN;
int64_t x647 = INT64_MIN;
int64_t t140 = -11652357204253177LL;
int64_t x652 = 239LL;
uint16_t x653 = UINT16_MAX;
static int8_t x656 = INT8_MIN;
static volatile int32_t t142 = 221;
volatile int64_t x658 = -9212284283335LL;
uint32_t x659 = 220870U;
uint8_t x662 = 110U;
static int8_t x663 = -1;
int32_t x665 = -1;
static uint32_t x669 = 10U;
static uint64_t x672 = 395152797LLU;
uint64_t t146 = 1330281122313LLU;
static volatile uint64_t x684 = 131223078801475781LLU;
volatile uint64_t t149 = 3106891063442711LLU;
int32_t x691 = -106323754;
int16_t x692 = -1;
static int16_t x693 = -1043;
int8_t x698 = 1;
int8_t x699 = INT8_MIN;
int8_t x700 = 0;
uint8_t x701 = 70U;
uint16_t x710 = 217U;
uint64_t t154 = 1957643LLU;
volatile int64_t t156 = 228127806LL;
uint64_t t157 = 8119873918LLU;
uint16_t x735 = 215U;
int64_t x737 = INT64_MAX;
int64_t x740 = -3333677326139220861LL;
static volatile int16_t x741 = -490;
uint64_t x748 = 19409677LLU;
int32_t x749 = INT32_MAX;
uint32_t x750 = 4289159U;
uint8_t x751 = 43U;
uint16_t x753 = UINT16_MAX;
uint16_t x767 = UINT16_MAX;
uint32_t x769 = 13U;
uint64_t x770 = UINT64_MAX;
int64_t x784 = -8324108364880LL;
volatile int8_t x785 = INT8_MIN;
int8_t x788 = -1;
uint64_t x789 = 772507271907LLU;
static int8_t x791 = INT8_MIN;
volatile int64_t t173 = -32308134073LL;
int8_t x800 = INT8_MIN;
volatile int64_t x806 = -1LL;
int32_t x809 = INT32_MIN;
static uint32_t x812 = 581224532U;
int32_t x816 = INT32_MAX;
int64_t t178 = 55868963568844LL;
uint8_t x822 = 0U;
uint8_t x835 = UINT8_MAX;
volatile int16_t x847 = INT16_MIN;
int32_t x848 = -1;
int32_t x849 = INT32_MIN;
int32_t x853 = 64157014;
int16_t x855 = 210;
int16_t x856 = -107;
uint16_t x858 = UINT16_MAX;
uint32_t t191 = 780655082U;
int8_t x875 = INT8_MIN;
int16_t x876 = 359;
volatile int32_t t193 = 7491;
volatile uint32_t x900 = 2U;
static int8_t x905 = -1;
int8_t x908 = -1;


void f0(void) {
    	uint64_t x2 = UINT64_MAX;
	uint8_t x4 = UINT8_MAX;
	static int32_t t0 = -27736164;

    t0 = ((x1<=x2)-(x3+x4));

    if (t0 != -33021) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MIN;
	int8_t x7 = INT8_MIN;
	int32_t t1 = 0;

    t1 = ((x5<=x6)-(x7+x8));

    if (t1 != 160) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MAX;
	uint16_t x12 = 182U;
	int32_t t2 = 290563673;

    t2 = ((x9<=x10)-(x11+x12));

    if (t2 != -65717) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 0U;
	int8_t x14 = 9;
	volatile int8_t x16 = -31;

    t3 = ((x13<=x14)-(x15+x16));

    if (t3 != -9223372036854775775LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	int8_t x18 = -1;
	int64_t x19 = -7369049756LL;
	volatile int64_t t4 = -1491251884303295LL;

    t4 = ((x17<=x18)-(x19+x20));

    if (t4 != 7369038614LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 30U;
	uint16_t x22 = 32380U;
	int64_t t5 = -8332080035LL;

    t5 = ((x21<=x22)-(x23+x24));

    if (t5 != -9223372034707292158LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	uint16_t x28 = 55U;
	int64_t t6 = -185617801LL;

    t6 = ((x25<=x26)-(x27+x28));

    if (t6 != -343584496570810914LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MAX;
	volatile uint32_t x35 = 2U;
	int64_t x36 = -1LL;

    t7 = ((x33<=x34)-(x35+x36));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint16_t x37 = 5573U;
	static uint16_t x38 = 7960U;
	volatile uint32_t x40 = 10601810U;
	uint32_t t8 = 6912U;

    t8 = ((x37<=x38)-(x39+x40));

    if (t8 != 4284365483U) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x41 = 162671LL;
	static volatile int8_t x42 = INT8_MIN;
	int8_t x43 = INT8_MIN;
	static volatile int8_t x44 = INT8_MIN;
	int32_t t9 = 462576799;

    t9 = ((x41<=x42)-(x43+x44));

    if (t9 != 256) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x49 = INT8_MIN;
	int8_t x50 = -1;
	int16_t x51 = -1;
	int32_t x52 = -1;

    t10 = ((x49<=x50)-(x51+x52));

    if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x53 = 13;
	volatile uint8_t x54 = 0U;
	static int16_t x55 = -1;
	int64_t x56 = -2919LL;
	static int64_t t11 = 289268043LL;

    t11 = ((x53<=x54)-(x55+x56));

    if (t11 != 2920LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = -1212442330695141LL;
	static volatile int32_t x58 = 4;
	int64_t x59 = -13496569LL;
	int32_t x60 = -1;
	volatile int64_t t12 = -842LL;

    t12 = ((x57<=x58)-(x59+x60));

    if (t12 != 13496571LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x65 = -988612743LL;
	uint64_t x66 = 1LLU;
	uint32_t x67 = UINT32_MAX;
	volatile int8_t x68 = 1;
	volatile uint32_t t13 = 424766855U;

    t13 = ((x65<=x66)-(x67+x68));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x69 = INT64_MAX;
	static int64_t x70 = 134889998880975LL;
	int8_t x71 = -1;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t14 = 42892;

    t14 = ((x69<=x70)-(x71+x72));

    if (t14 != -65534) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x73 = 331462;
	int16_t x74 = -16247;
	volatile int64_t x75 = 31258821898LL;
	int8_t x76 = -1;

    t15 = ((x73<=x74)-(x75+x76));

    if (t15 != -31258821897LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = INT16_MIN;
	int32_t x78 = INT32_MAX;
	static volatile int16_t x79 = -1892;
	uint16_t x80 = UINT16_MAX;
	static volatile int32_t t16 = -1141;

    t16 = ((x77<=x78)-(x79+x80));

    if (t16 != -63642) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x82 = INT16_MIN;
	static uint8_t x83 = 6U;
	volatile uint8_t x84 = 88U;
	volatile int32_t t17 = -48437341;

    t17 = ((x81<=x82)-(x83+x84));

    if (t17 != -93) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int8_t x86 = -2;
	int32_t x87 = 63;
	int16_t x88 = -1;
	int32_t t18 = -60;

    t18 = ((x85<=x86)-(x87+x88));

    if (t18 != -62) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x89 = INT32_MIN;
	uint8_t x91 = 8U;
	int32_t x92 = 58764448;

    t19 = ((x89<=x90)-(x91+x92));

    if (t19 != -58764456) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x93 = 3U;
	int64_t x94 = INT64_MIN;
	int8_t x95 = INT8_MIN;
	uint16_t x96 = UINT16_MAX;

    t20 = ((x93<=x94)-(x95+x96));

    if (t20 != -65407) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = -1;
	int16_t x98 = -140;
	uint8_t x99 = 42U;
	volatile uint8_t x100 = UINT8_MAX;
	volatile int32_t t21 = 21514;

    t21 = ((x97<=x98)-(x99+x100));

    if (t21 != -297) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x101 = 9U;
	uint8_t x103 = 0U;
	uint16_t x104 = 9474U;
	int32_t t22 = -1;

    t22 = ((x101<=x102)-(x103+x104));

    if (t22 != -9473) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = INT16_MIN;
	volatile uint64_t x107 = 207067441LLU;
	int64_t x108 = 1048000LL;
	volatile uint64_t t23 = 208010337006450LLU;

    t23 = ((x105<=x106)-(x107+x108));

    if (t23 != 18446744073501436176LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = -1;
	static volatile int32_t x110 = INT32_MIN;
	uint32_t x111 = 1U;

    t24 = ((x109<=x110)-(x111+x112));

    if (t24 != 4287171626U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x113 = UINT16_MAX;
	uint32_t x114 = 677311142U;
	int16_t x115 = 0;
	int32_t t25 = 202489232;

    t25 = ((x113<=x114)-(x115+x116));

    if (t25 != 129) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x117 = INT16_MIN;
	int8_t x118 = INT8_MIN;
	static uint32_t x120 = 42198U;
	uint32_t t26 = 133U;

    t26 = ((x117<=x118)-(x119+x120));

    if (t26 != 4294925105U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x122 = 27U;
	volatile int8_t x123 = -1;

    t27 = ((x121<=x122)-(x123+x124));

    if (t27 != 18446744073653226892LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = INT16_MIN;
	int64_t x126 = INT64_MIN;
	uint16_t x127 = 146U;
	volatile int16_t x128 = INT16_MIN;
	volatile int32_t t28 = 130822;

    t28 = ((x125<=x126)-(x127+x128));

    if (t28 != 32622) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x133 = -37;
	static uint64_t x134 = UINT64_MAX;
	int8_t x135 = INT8_MIN;
	int64_t x136 = INT64_MAX;
	int64_t t29 = 225151306543195LL;

    t29 = ((x133<=x134)-(x135+x136));

    if (t29 != -9223372036854775678LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x137 = 3549U;
	static int8_t x138 = INT8_MAX;
	int8_t x139 = 2;
	int64_t x140 = INT64_MIN;
	static int64_t t30 = 9496LL;

    t30 = ((x137<=x138)-(x139+x140));

    if (t30 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x142 = 10U;
	static int8_t x143 = 1;
	int32_t x144 = INT32_MIN;
	int32_t t31 = INT32_MAX;

    t31 = ((x141<=x142)-(x143+x144));

    if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x145 = 14572;
	uint64_t x146 = 107498068761LLU;
	uint8_t x147 = 19U;
	int16_t x148 = INT16_MIN;
	volatile int32_t t32 = -702575891;

    t32 = ((x145<=x146)-(x147+x148));

    if (t32 != 32750) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x149 = 11;
	uint64_t x150 = 11916917LLU;
	int16_t x151 = 119;
	int32_t x152 = 500653;

    t33 = ((x149<=x150)-(x151+x152));

    if (t33 != -500771) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x153 = -1LL;
	int32_t x154 = INT32_MIN;
	int8_t x155 = -1;
	int16_t x156 = INT16_MIN;
	volatile int32_t t34 = 143156963;

    t34 = ((x153<=x154)-(x155+x156));

    if (t34 != 32769) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x158 = -1LL;
	uint8_t x160 = 3U;
	int32_t t35 = 1284817;

    t35 = ((x157<=x158)-(x159+x160));

    if (t35 != 2147483645) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x161 = UINT64_MAX;
	uint8_t x162 = 3U;
	static uint8_t x163 = 100U;
	uint32_t t36 = 37142151U;

    t36 = ((x161<=x162)-(x163+x164));

    if (t36 != 3790908321U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x165 = UINT8_MAX;
	static volatile int32_t x167 = INT32_MIN;
	int64_t x168 = 689474832093980LL;

    t37 = ((x165<=x166)-(x167+x168));

    if (t37 != -689472684610332LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x169 = 46;
	uint64_t x170 = 11LLU;
	volatile int8_t x171 = INT8_MAX;
	int64_t x172 = 145LL;
	static volatile int64_t t38 = 457312LL;

    t38 = ((x169<=x170)-(x171+x172));

    if (t38 != -272LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x173 = -34751643609LL;
	int8_t x174 = -3;
	volatile int32_t x175 = INT32_MIN;
	int8_t x176 = 14;
	volatile int32_t t39 = 2182668;

    t39 = ((x173<=x174)-(x175+x176));

    if (t39 != 2147483635) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x177 = -223475LL;
	static uint64_t x179 = UINT64_MAX;
	volatile uint32_t x180 = 117987585U;
	uint64_t t40 = 28888751354LLU;

    t40 = ((x177<=x178)-(x179+x180));

    if (t40 != 18446744073591564033LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x181 = 16637LLU;
	uint8_t x182 = 21U;
	uint16_t x183 = 21801U;
	volatile uint32_t x184 = 212749551U;
	volatile uint32_t t41 = 8366030U;

    t41 = ((x181<=x182)-(x183+x184));

    if (t41 != 4082195944U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x185 = INT8_MIN;
	int8_t x186 = INT8_MIN;
	uint8_t x187 = 3U;
	volatile int32_t t42 = 22074576;

    t42 = ((x185<=x186)-(x187+x188));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x189 = INT64_MIN;
	uint16_t x191 = 27U;
	uint32_t t43 = 776704324U;

    t43 = ((x189<=x190)-(x191+x192));

    if (t43 != 4294967271U) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x193 = -13868030;
	static int8_t x194 = -1;
	uint64_t x195 = 2363007874985LLU;
	volatile int16_t x196 = INT16_MIN;
	volatile uint64_t t44 = 1510382039257LLU;

    t44 = ((x193<=x194)-(x195+x196));

    if (t44 != 18446741710701709400LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x201 = -836;
	static volatile int8_t x202 = -4;
	int8_t x204 = INT8_MIN;
	volatile int32_t t45 = -166285;

    t45 = ((x201<=x202)-(x203+x204));

    if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x205 = 116U;
	uint64_t x206 = 54091182739526LLU;
	int8_t x208 = 0;
	volatile int32_t t46 = 1078349;

    t46 = ((x205<=x206)-(x207+x208));

    if (t46 != -32766) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x209 = -1LL;
	uint32_t x211 = UINT32_MAX;
	uint8_t x212 = UINT8_MAX;
	volatile uint32_t t47 = 788U;

    t47 = ((x209<=x210)-(x211+x212));

    if (t47 != 4294967042U) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x213 = INT16_MIN;
	int16_t x214 = INT16_MAX;
	static int32_t x215 = INT32_MAX;
	int64_t x216 = INT64_MIN;

    t48 = ((x213<=x214)-(x215+x216));

    if (t48 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int64_t x222 = -1LL;
	int32_t x223 = -816;
	uint32_t x224 = UINT32_MAX;
	uint32_t t49 = 30842U;

    t49 = ((x221<=x222)-(x223+x224));

    if (t49 != 818U) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x228 = 2U;
	uint64_t t50 = 2989534851039797059LLU;

    t50 = ((x225<=x226)-(x227+x228));

    if (t50 != 18446744073701891493LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x233 = 46205802LLU;
	int16_t x234 = INT16_MAX;
	uint16_t x235 = 1U;
	int64_t x236 = -224676LL;
	int64_t t51 = -1685990132132924LL;

    t51 = ((x233<=x234)-(x235+x236));

    if (t51 != 224675LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x241 = 0U;
	uint16_t x242 = UINT16_MAX;
	uint8_t x243 = UINT8_MAX;
	volatile uint64_t x244 = 55LLU;
	volatile uint64_t t52 = 233427532505080LLU;

    t52 = ((x241<=x242)-(x243+x244));

    if (t52 != 18446744073709551307LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x245 = 747244114312736816LLU;
	int16_t x246 = INT16_MIN;
	volatile int32_t x247 = -3;
	int16_t x248 = -1818;
	int32_t t53 = 10159609;

    t53 = ((x245<=x246)-(x247+x248));

    if (t53 != 1822) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x249 = INT32_MAX;
	int32_t x250 = -1;
	uint64_t x252 = UINT64_MAX;

    t54 = ((x249<=x250)-(x251+x252));

    if (t54 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x253 = INT64_MIN;
	int32_t x254 = INT32_MIN;
	int16_t x255 = 1430;
	int32_t x256 = -1;
	static int32_t t55 = -105;

    t55 = ((x253<=x254)-(x255+x256));

    if (t55 != -1428) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x261 = -68639872LL;
	int64_t x262 = -1LL;
	int64_t x263 = -1LL;
	uint32_t x264 = 20936044U;
	volatile int64_t t56 = 1075530457448279779LL;

    t56 = ((x261<=x262)-(x263+x264));

    if (t56 != -20936042LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x269 = 1U;
	int32_t x271 = INT32_MAX;
	uint64_t x272 = 6043447514LLU;
	volatile uint64_t t57 = 134671LLU;

    t57 = ((x269<=x270)-(x271+x272));

    if (t57 != 18446744065518620455LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x273 = -1;
	volatile int32_t x274 = INT32_MAX;
	uint32_t x275 = 1011315U;
	uint64_t t58 = 466566783LLU;

    t58 = ((x273<=x274)-(x275+x276));

    if (t58 != 18446744073708540303LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x277 = -7712793;
	int64_t x278 = 3286556199LL;
	int32_t x279 = -62;
	volatile int8_t x280 = INT8_MIN;
	int32_t t59 = 0;

    t59 = ((x277<=x278)-(x279+x280));

    if (t59 != 191) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x281 = INT64_MIN;
	uint32_t x282 = UINT32_MAX;
	volatile int32_t x283 = -1;
	int64_t x284 = INT64_MAX;
	volatile int64_t t60 = 1793289977981728LL;

    t60 = ((x281<=x282)-(x283+x284));

    if (t60 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x285 = INT32_MIN;
	volatile int64_t x286 = INT64_MIN;
	uint8_t x287 = UINT8_MAX;
	int64_t x288 = -1LL;
	int64_t t61 = -35609027870409526LL;

    t61 = ((x285<=x286)-(x287+x288));

    if (t61 != -254LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x289 = -307;
	uint16_t x290 = 1748U;
	uint16_t x291 = UINT16_MAX;
	int32_t x292 = -8059945;
	int32_t t62 = 822;

    t62 = ((x289<=x290)-(x291+x292));

    if (t62 != 7994411) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x293 = INT8_MIN;
	uint32_t x294 = 241U;
	int32_t x295 = INT32_MAX;
	static int8_t x296 = -1;
	int32_t t63 = -7;

    t63 = ((x293<=x294)-(x295+x296));

    if (t63 != -2147483646) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x298 = 21474878U;
	volatile uint64_t x299 = 201429009LLU;
	uint16_t x300 = UINT16_MAX;

    t64 = ((x297<=x298)-(x299+x300));

    if (t64 != 18446744073508057072LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x301 = 1932828U;
	uint32_t x302 = 1759U;
	volatile int8_t x303 = -1;
	uint8_t x304 = 0U;
	int32_t t65 = 7162551;

    t65 = ((x301<=x302)-(x303+x304));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x305 = INT8_MIN;
	uint32_t x306 = 18U;
	int16_t x307 = INT16_MIN;
	uint8_t x308 = UINT8_MAX;

    t66 = ((x305<=x306)-(x307+x308));

    if (t66 != 32513) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x309 = INT64_MIN;
	volatile int64_t x310 = 0LL;
	static int8_t x311 = -1;
	int16_t x312 = -1;
	volatile int32_t t67 = 47404;

    t67 = ((x309<=x310)-(x311+x312));

    if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x313 = 411545366314571391LLU;
	uint64_t x314 = 25719LLU;
	int64_t x315 = 34838645555803935LL;
	int32_t x316 = INT32_MIN;
	static int64_t t68 = -154894182LL;

    t68 = ((x313<=x314)-(x315+x316));

    if (t68 != -34838643408320287LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x318 = UINT16_MAX;
	volatile uint16_t x319 = UINT16_MAX;
	static int32_t x320 = INT32_MIN;
	static int32_t t69 = -389075195;

    t69 = ((x317<=x318)-(x319+x320));

    if (t69 != 2147418114) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x321 = 4884571LLU;
	uint8_t x322 = 10U;
	uint8_t x323 = 29U;
	volatile uint32_t x324 = 443U;
	volatile uint32_t t70 = 965U;

    t70 = ((x321<=x322)-(x323+x324));

    if (t70 != 4294966824U) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x325 = INT16_MAX;
	static int16_t x326 = -15;
	int8_t x327 = -3;
	int8_t x328 = -1;
	static int32_t t71 = -19336;

    t71 = ((x325<=x326)-(x327+x328));

    if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x334 = -95LL;
	int8_t x335 = -1;
	int64_t x336 = -1LL;

    t72 = ((x333<=x334)-(x335+x336));

    if (t72 != 2LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x341 = -1;
	int8_t x342 = -2;
	int8_t x343 = -1;
	int16_t x344 = -1;
	volatile int32_t t73 = -1;

    t73 = ((x341<=x342)-(x343+x344));

    if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x345 = -1;
	int8_t x346 = -1;
	int32_t t74 = 1368;

    t74 = ((x345<=x346)-(x347+x348));

    if (t74 != -253) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x350 = -67911833;
	int16_t x352 = 7;
	int32_t t75 = -536794;

    t75 = ((x349<=x350)-(x351+x352));

    if (t75 != 121) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x353 = INT64_MIN;
	int8_t x354 = 3;
	int8_t x356 = INT8_MAX;
	volatile int32_t t76 = 1;

    t76 = ((x353<=x354)-(x355+x356));

    if (t76 != -87) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x357 = INT8_MIN;
	int8_t x358 = INT8_MAX;
	int8_t x359 = INT8_MIN;
	int8_t x360 = 12;
	int32_t t77 = -158209;

    t77 = ((x357<=x358)-(x359+x360));

    if (t77 != 117) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x361 = INT32_MAX;
	int16_t x362 = INT16_MIN;
	static uint32_t x364 = 2280568U;

    t78 = ((x361<=x362)-(x363+x364));

    if (t78 != 4292686856U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x365 = INT32_MIN;
	uint32_t x366 = UINT32_MAX;
	int8_t x367 = INT8_MIN;
	int16_t x368 = INT16_MAX;
	static volatile int32_t t79 = -246488652;

    t79 = ((x365<=x366)-(x367+x368));

    if (t79 != -32638) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x369 = 112865LLU;
	static uint32_t x370 = UINT32_MAX;
	int32_t x371 = INT32_MAX;
	int16_t x372 = -1;

    t80 = ((x369<=x370)-(x371+x372));

    if (t80 != -2147483645) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x373 = INT64_MIN;
	uint16_t x374 = 0U;
	static int32_t x375 = 95;
	uint64_t x376 = UINT64_MAX;

    t81 = ((x373<=x374)-(x375+x376));

    if (t81 != 18446744073709551523LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x377 = 768313LLU;
	uint64_t x378 = 53866279462436274LLU;
	int8_t x379 = -50;
	uint8_t x380 = 4U;
	volatile int32_t t82 = 498965734;

    t82 = ((x377<=x378)-(x379+x380));

    if (t82 != 47) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x381 = INT8_MIN;
	static uint8_t x382 = UINT8_MAX;
	volatile int8_t x383 = -48;
	static volatile int64_t x384 = -1LL;
	volatile int64_t t83 = 11779LL;

    t83 = ((x381<=x382)-(x383+x384));

    if (t83 != 50LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x389 = 1534U;
	static int16_t x390 = INT16_MAX;
	int16_t x391 = -3973;
	uint64_t x392 = 7LLU;

    t84 = ((x389<=x390)-(x391+x392));

    if (t84 != 3967LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x394 = INT32_MAX;
	uint64_t x395 = 5065799756819070929LLU;
	int32_t x396 = INT32_MIN;
	volatile uint64_t t85 = 33525721LLU;

    t85 = ((x393<=x394)-(x395+x396));

    if (t85 != 13380944319037964336LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x398 = INT16_MIN;
	volatile int16_t x399 = INT16_MAX;
	int32_t t86 = -1;

    t86 = ((x397<=x398)-(x399+x400));

    if (t86 != -32766) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x405 = INT8_MIN;
	int64_t x406 = 390164LL;
	int32_t x407 = INT32_MAX;
	int64_t t87 = 2LL;

    t87 = ((x405<=x406)-(x407+x408));

    if (t87 != -2147483645LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x409 = INT8_MIN;
	int16_t x410 = INT16_MAX;
	volatile int32_t x411 = -139671;
	int8_t x412 = -5;
	int32_t t88 = -109761200;

    t88 = ((x409<=x410)-(x411+x412));

    if (t88 != 139677) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t x413 = INT32_MIN;
	uint8_t x414 = 14U;
	int32_t x415 = 141825414;
	uint16_t x416 = UINT16_MAX;
	int32_t t89 = 38949;

    t89 = ((x413<=x414)-(x415+x416));

    if (t89 != -141890948) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x417 = UINT8_MAX;
	volatile int32_t x418 = -1;
	volatile uint32_t x419 = 1U;
	uint64_t x420 = UINT64_MAX;

    t90 = ((x417<=x418)-(x419+x420));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x421 = INT32_MIN;
	volatile int8_t x422 = 1;
	uint32_t x423 = 0U;
	uint64_t x424 = 0LLU;
	volatile uint64_t t91 = 1507453926850LLU;

    t91 = ((x421<=x422)-(x423+x424));

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x425 = 0;
	int16_t x427 = INT16_MAX;
	int16_t x428 = INT16_MAX;

    t92 = ((x425<=x426)-(x427+x428));

    if (t92 != -65533) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x429 = INT64_MIN;
	static uint8_t x430 = UINT8_MAX;
	int16_t x431 = INT16_MAX;
	static volatile int32_t t93 = -4001746;

    t93 = ((x429<=x430)-(x431+x432));

    if (t93 != -32769) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x433 = 242069;
	static uint32_t x434 = UINT32_MAX;
	static uint64_t x435 = 2813LLU;
	int64_t x436 = -1LL;
	uint64_t t94 = 30740LLU;

    t94 = ((x433<=x434)-(x435+x436));

    if (t94 != 18446744073709548805LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x437 = INT8_MIN;
	int32_t x438 = INT32_MIN;
	volatile int64_t x439 = -1LL;
	int64_t x440 = 3606LL;
	volatile int64_t t95 = -2032LL;

    t95 = ((x437<=x438)-(x439+x440));

    if (t95 != -3605LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x441 = INT8_MIN;
	volatile int32_t x442 = INT32_MIN;
	static uint32_t x443 = UINT32_MAX;
	static int32_t x444 = 10562;

    t96 = ((x441<=x442)-(x443+x444));

    if (t96 != 4294956735U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x445 = -3746;
	int8_t x447 = 26;
	int16_t x448 = -1;

    t97 = ((x445<=x446)-(x447+x448));

    if (t97 != -25) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x449 = -358052;
	volatile int64_t x450 = INT64_MIN;
	uint8_t x451 = 85U;
	int32_t x452 = -1;
	int32_t t98 = -1;

    t98 = ((x449<=x450)-(x451+x452));

    if (t98 != -84) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x457 = 1U;
	uint64_t x458 = UINT64_MAX;
	int16_t x459 = INT16_MIN;
	int32_t x460 = -1;
	int32_t t99 = 42;

    t99 = ((x457<=x458)-(x459+x460));

    if (t99 != 32770) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x465 = INT16_MIN;
	uint16_t x466 = UINT16_MAX;
	int8_t x467 = INT8_MAX;
	uint64_t x468 = 1402279626807460577LLU;
	volatile uint64_t t100 = 6224136150035LLU;

    t100 = ((x465<=x466)-(x467+x468));

    if (t100 != 17044464446902090913LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x470 = -208;
	static volatile uint64_t x471 = UINT64_MAX;
	volatile int16_t x472 = 0;

    t101 = ((x469<=x470)-(x471+x472));

    if (t101 != 2LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x473 = INT8_MAX;
	static volatile int32_t x475 = -1;
	uint32_t x476 = 10488U;
	volatile uint32_t t102 = 22923U;

    t102 = ((x473<=x474)-(x475+x476));

    if (t102 != 4294956809U) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x485 = INT8_MIN;
	static uint64_t x487 = UINT64_MAX;

    t103 = ((x485<=x486)-(x487+x488));

    if (t103 != 32770LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x493 = 61728558;
	uint32_t x494 = 3U;
	uint64_t x495 = 888301378266135607LLU;
	volatile int16_t x496 = -6030;
	volatile uint64_t t104 = 20200LLU;

    t104 = ((x493<=x494)-(x495+x496));

    if (t104 != 17558442695443422039LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x497 = INT16_MIN;
	int16_t x498 = -513;
	volatile uint16_t x499 = 16009U;
	volatile uint32_t x500 = 5900831U;
	volatile uint32_t t105 = 13609U;

    t105 = ((x497<=x498)-(x499+x500));

    if (t105 != 4289050457U) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x501 = INT64_MAX;
	int64_t x502 = INT64_MAX;
	uint64_t x503 = UINT64_MAX;

    t106 = ((x501<=x502)-(x503+x504));

    if (t106 != 3LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x505 = INT16_MIN;
	uint8_t x506 = 7U;
	volatile uint8_t x507 = 7U;
	uint8_t x508 = 7U;
	volatile int32_t t107 = -300385;

    t107 = ((x505<=x506)-(x507+x508));

    if (t107 != -13) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x510 = -1LL;
	static volatile uint64_t t108 = 16532505660LLU;

    t108 = ((x509<=x510)-(x511+x512));

    if (t108 != 18446744073701071674LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x521 = 588;
	int32_t x522 = 49304108;
	int8_t x523 = INT8_MAX;
	int32_t t109 = 914618;

    t109 = ((x521<=x522)-(x523+x524));

    if (t109 != 2) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x525 = INT32_MAX;
	int8_t x526 = 19;
	int16_t x527 = 4;
	int16_t x528 = -1;
	volatile int32_t t110 = -6315;

    t110 = ((x525<=x526)-(x527+x528));

    if (t110 != -3) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x529 = INT16_MIN;
	uint64_t x531 = UINT64_MAX;
	int64_t x532 = -1LL;
	uint64_t t111 = 0LLU;

    t111 = ((x529<=x530)-(x531+x532));

    if (t111 != 3LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x533 = UINT16_MAX;
	int8_t x535 = -17;
	static volatile int16_t x536 = INT16_MIN;
	int32_t t112 = -132548156;

    t112 = ((x533<=x534)-(x535+x536));

    if (t112 != 32786) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x537 = UINT16_MAX;
	int32_t x539 = -481;
	volatile int32_t t113 = -1146154;

    t113 = ((x537<=x538)-(x539+x540));

    if (t113 != 466) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x541 = 15U;
	static int64_t x543 = -1LL;
	int32_t x544 = -160849824;
	int64_t t114 = -96258517076715LL;

    t114 = ((x541<=x542)-(x543+x544));

    if (t114 != 160849826LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x545 = 50;
	static int32_t x546 = -560366;
	int32_t x547 = -77078;
	volatile int32_t t115 = -242;

    t115 = ((x545<=x546)-(x547+x548));

    if (t115 != 77130) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x549 = -1850968217057556LL;
	int32_t x551 = INT32_MAX;
	int16_t x552 = -3;
	volatile int32_t t116 = 149;

    t116 = ((x549<=x550)-(x551+x552));

    if (t116 != -2147483644) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x553 = 5347;
	uint64_t x554 = 13013LLU;
	volatile uint32_t x555 = UINT32_MAX;
	int16_t x556 = INT16_MIN;
	volatile uint32_t t117 = 1604U;

    t117 = ((x553<=x554)-(x555+x556));

    if (t117 != 32770U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x557 = 9;
	static volatile int32_t t118 = 2;

    t118 = ((x557<=x558)-(x559+x560));

    if (t118 != 2147483640) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x561 = -4429117LL;
	int64_t x562 = INT64_MIN;
	uint32_t x564 = UINT32_MAX;

    t119 = ((x561<=x562)-(x563+x564));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x565 = INT16_MIN;
	int8_t x566 = -54;
	static uint64_t x567 = 12212930461627070LLU;
	uint32_t x568 = UINT32_MAX;
	uint64_t t120 = 8004094146808536709LLU;

    t120 = ((x565<=x566)-(x567+x568));

    if (t120 != 18434531138952957252LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x569 = UINT8_MAX;
	volatile uint16_t x570 = 5U;
	volatile int16_t x571 = INT16_MIN;
	int8_t x572 = INT8_MIN;
	static int32_t t121 = -65652177;

    t121 = ((x569<=x570)-(x571+x572));

    if (t121 != 32896) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x573 = UINT32_MAX;
	int16_t x574 = INT16_MAX;
	static int8_t x576 = -20;
	volatile int32_t t122 = -1;

    t122 = ((x573<=x574)-(x575+x576));

    if (t122 != -8) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x577 = UINT8_MAX;
	int16_t x578 = -1;
	uint32_t x579 = 4846U;
	uint64_t x580 = 17762606720754082LLU;

    t123 = ((x577<=x578)-(x579+x580));

    if (t123 != 18428981466988792688LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x581 = INT64_MIN;
	uint64_t x582 = 475600107226437LLU;
	static volatile int16_t x583 = INT16_MAX;
	static volatile int8_t x584 = 1;
	int32_t t124 = 941036477;

    t124 = ((x581<=x582)-(x583+x584));

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x585 = -1LL;
	int32_t x587 = 6459598;

    t125 = ((x585<=x586)-(x587+x588));

    if (t125 != 3984030119U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x590 = 23870U;
	uint16_t x591 = UINT16_MAX;
	uint64_t x592 = 321168879LLU;
	volatile uint64_t t126 = 3LLU;

    t126 = ((x589<=x590)-(x591+x592));

    if (t126 != 18446744073388317203LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x593 = 2U;
	uint8_t x594 = UINT8_MAX;
	volatile int16_t x595 = INT16_MIN;
	int64_t x596 = 16027362520265LL;
	int64_t t127 = -45819LL;

    t127 = ((x593<=x594)-(x595+x596));

    if (t127 != -16027362487496LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x598 = INT8_MIN;
	int8_t x599 = 19;
	int64_t x600 = INT64_MIN;
	volatile int64_t t128 = -2023LL;

    t128 = ((x597<=x598)-(x599+x600));

    if (t128 != 9223372036854775790LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int16_t x601 = INT16_MAX;
	static volatile uint32_t x602 = 83U;
	static uint8_t x603 = UINT8_MAX;
	int8_t x604 = INT8_MAX;
	volatile int32_t t129 = -269902;

    t129 = ((x601<=x602)-(x603+x604));

    if (t129 != -382) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x606 = UINT64_MAX;
	int32_t t130 = 18;

    t130 = ((x605<=x606)-(x607+x608));

    if (t130 != -137) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x609 = -898;
	int32_t x610 = INT32_MIN;
	static int16_t x611 = -131;
	uint64_t x612 = 11143499LLU;
	volatile uint64_t t131 = 88296LLU;

    t131 = ((x609<=x610)-(x611+x612));

    if (t131 != 18446744073698408248LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x613 = -190948;
	int32_t x615 = -1;
	volatile int32_t t132 = -182;

    t132 = ((x613<=x614)-(x615+x616));

    if (t132 != -10) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x617 = -1LL;
	int32_t x618 = -504;
	static uint16_t x619 = 978U;
	uint64_t t133 = 1572550773233LLU;

    t133 = ((x617<=x618)-(x619+x620));

    if (t133 != 18446744073709550639LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x621 = INT16_MIN;
	uint8_t x623 = UINT8_MAX;
	int32_t x624 = 768903;
	volatile int32_t t134 = 392912101;

    t134 = ((x621<=x622)-(x623+x624));

    if (t134 != -769157) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x625 = 112LL;
	int32_t t135 = 817235910;

    t135 = ((x625<=x626)-(x627+x628));

    if (t135 != -420) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x629 = INT16_MIN;
	int32_t x630 = INT32_MAX;
	static uint16_t x632 = 99U;
	volatile int64_t t136 = 67905713815LL;

    t136 = ((x629<=x630)-(x631+x632));

    if (t136 != 638851993944207583LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x633 = INT8_MAX;
	volatile int8_t x634 = INT8_MAX;
	static int8_t x636 = -14;
	volatile int32_t t137 = -14961288;

    t137 = ((x633<=x634)-(x635+x636));

    if (t137 != -114) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x637 = INT32_MIN;
	static int32_t x638 = 2;
	uint8_t x639 = 87U;
	volatile uint8_t x640 = UINT8_MAX;
	volatile int32_t t138 = -1;

    t138 = ((x637<=x638)-(x639+x640));

    if (t138 != -341) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x641 = UINT8_MAX;
	uint32_t x642 = 2873U;
	int8_t x644 = 52;
	volatile uint64_t t139 = 10LLU;

    t139 = ((x641<=x642)-(x643+x644));

    if (t139 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x646 = INT32_MIN;
	static int32_t x648 = 28355432;

    t140 = ((x645<=x646)-(x647+x648));

    if (t140 != 9223372036826420377LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x649 = INT64_MIN;
	static int8_t x650 = 54;
	static int16_t x651 = -2353;
	int64_t t141 = -41780068856305LL;

    t141 = ((x649<=x650)-(x651+x652));

    if (t141 != 2115LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x654 = UINT8_MAX;
	uint8_t x655 = 24U;

    t142 = ((x653<=x654)-(x655+x656));

    if (t142 != 104) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x657 = UINT16_MAX;
	uint8_t x660 = 1U;
	volatile uint32_t t143 = 3799420U;

    t143 = ((x657<=x658)-(x659+x660));

    if (t143 != 4294746425U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x661 = 970;
	int16_t x664 = INT16_MIN;
	int32_t t144 = 2020;

    t144 = ((x661<=x662)-(x663+x664));

    if (t144 != 32769) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x666 = 5;
	int64_t x667 = -1LL;
	static uint8_t x668 = UINT8_MAX;
	volatile int64_t t145 = -122LL;

    t145 = ((x665<=x666)-(x667+x668));

    if (t145 != -253LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x670 = INT16_MAX;
	int8_t x671 = -4;

    t146 = ((x669<=x670)-(x671+x672));

    if (t146 != 18446744073314398824LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x673 = 4;
	int32_t x674 = INT32_MAX;
	int16_t x675 = -2;
	int32_t x676 = -1;
	int32_t t147 = 266434957;

    t147 = ((x673<=x674)-(x675+x676));

    if (t147 != 4) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x677 = UINT64_MAX;
	static int64_t x678 = 8379336548314829LL;
	int8_t x679 = INT8_MIN;
	static uint8_t x680 = UINT8_MAX;
	static volatile int32_t t148 = 6142537;

    t148 = ((x677<=x678)-(x679+x680));

    if (t148 != -127) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x681 = INT64_MIN;
	int16_t x682 = INT16_MIN;
	uint64_t x683 = 16428837391LLU;

    t149 = ((x681<=x682)-(x683+x684));

    if (t149 != 18315520978479238445LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x689 = INT32_MIN;
	uint8_t x690 = UINT8_MAX;
	volatile int32_t t150 = 352631;

    t150 = ((x689<=x690)-(x691+x692));

    if (t150 != 106323756) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x694 = -1LL;
	uint16_t x695 = 1128U;
	static int8_t x696 = -3;
	int32_t t151 = 0;

    t151 = ((x693<=x694)-(x695+x696));

    if (t151 != -1124) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x697 = -3051021;
	int32_t t152 = 247757822;

    t152 = ((x697<=x698)-(x699+x700));

    if (t152 != 129) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x702 = INT64_MAX;
	int64_t x703 = -1398153332898272LL;
	int32_t x704 = INT32_MIN;
	int64_t t153 = -92063881LL;

    t153 = ((x701<=x702)-(x703+x704));

    if (t153 != 1398155480381921LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x709 = INT64_MAX;
	uint32_t x711 = 666694263U;
	uint64_t x712 = 318LLU;

    t154 = ((x709<=x710)-(x711+x712));

    if (t154 != 18446744073042857035LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x721 = INT8_MIN;
	uint32_t x722 = UINT32_MAX;
	uint64_t x723 = 38319882LLU;
	int16_t x724 = 920;
	volatile uint64_t t155 = 2931772182324242LLU;

    t155 = ((x721<=x722)-(x723+x724));

    if (t155 != 18446744073671230815LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x725 = INT16_MIN;
	static volatile int16_t x726 = INT16_MIN;
	int32_t x727 = -674905232;
	int64_t x728 = INT64_MAX;

    t156 = ((x725<=x726)-(x727+x728));

    if (t156 != -9223372036179870574LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x729 = -3583895939513LL;
	int8_t x730 = INT8_MAX;
	volatile uint8_t x731 = 31U;
	static uint64_t x732 = UINT64_MAX;

    t157 = ((x729<=x730)-(x731+x732));

    if (t157 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x733 = UINT32_MAX;
	int32_t x734 = -1;
	int64_t x736 = INT64_MIN;
	int64_t t158 = -259536298LL;

    t158 = ((x733<=x734)-(x735+x736));

    if (t158 != 9223372036854775594LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x738 = 3202909U;
	uint16_t x739 = UINT16_MAX;
	int64_t t159 = 90239236516295269LL;

    t159 = ((x737<=x738)-(x739+x740));

    if (t159 != 3333677326139155326LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x742 = 28051570691LL;
	uint64_t x743 = 920012LLU;
	int64_t x744 = INT64_MIN;
	volatile uint64_t t160 = 729648391275LLU;

    t160 = ((x741<=x742)-(x743+x744));

    if (t160 != 9223372036853855797LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x745 = -1;
	int64_t x746 = -1LL;
	static volatile int8_t x747 = -1;
	volatile uint64_t t161 = 125625181087LLU;

    t161 = ((x745<=x746)-(x747+x748));

    if (t161 != 18446744073690141941LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x752 = INT16_MIN;
	volatile int32_t t162 = 505414948;

    t162 = ((x749<=x750)-(x751+x752));

    if (t162 != 32725) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x754 = INT8_MIN;
	uint64_t x755 = 82910LLU;
	int16_t x756 = INT16_MIN;
	volatile uint64_t t163 = 1LLU;

    t163 = ((x753<=x754)-(x755+x756));

    if (t163 != 18446744073709501474LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x757 = 612814359U;
	uint64_t x758 = 26LLU;
	int16_t x759 = -14;
	int8_t x760 = INT8_MAX;
	volatile int32_t t164 = 2624;

    t164 = ((x757<=x758)-(x759+x760));

    if (t164 != -113) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x761 = INT8_MAX;
	volatile uint16_t x762 = UINT16_MAX;
	volatile uint64_t x763 = 29LLU;
	static uint8_t x764 = 34U;
	uint64_t t165 = 48136852880876365LLU;

    t165 = ((x761<=x762)-(x763+x764));

    if (t165 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x765 = 2022569203U;
	static int16_t x766 = INT16_MAX;
	static volatile int16_t x768 = INT16_MAX;
	int32_t t166 = -104934447;

    t166 = ((x765<=x766)-(x767+x768));

    if (t166 != -98302) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x771 = 2;
	int64_t x772 = -1LL;
	volatile int64_t t167 = -279LL;

    t167 = ((x769<=x770)-(x771+x772));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x773 = 1;
	int8_t x774 = INT8_MAX;
	uint32_t x775 = 7821U;
	int32_t x776 = 32334990;
	uint32_t t168 = 5U;

    t168 = ((x773<=x774)-(x775+x776));

    if (t168 != 4262624486U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x777 = INT32_MIN;
	static int64_t x778 = INT64_MIN;
	int64_t x779 = 723410462166LL;
	static int64_t x780 = 2798924426755036831LL;
	static int64_t t169 = 249111131LL;

    t169 = ((x777<=x778)-(x779+x780));

    if (t169 != -2798925150165498997LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x781 = 29U;
	uint32_t x782 = 60U;
	int8_t x783 = INT8_MIN;
	int64_t t170 = 7764LL;

    t170 = ((x781<=x782)-(x783+x784));

    if (t170 != 8324108365009LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x786 = INT32_MIN;
	static int8_t x787 = INT8_MIN;
	int32_t t171 = -47549831;

    t171 = ((x785<=x786)-(x787+x788));

    if (t171 != 129) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x790 = 411717107261778LL;
	static int16_t x792 = -1;
	int32_t t172 = 6217104;

    t172 = ((x789<=x790)-(x791+x792));

    if (t172 != 130) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x793 = 87117474722581402LLU;
	uint8_t x794 = UINT8_MAX;
	int64_t x795 = INT64_MIN;
	volatile uint8_t x796 = 54U;

    t173 = ((x793<=x794)-(x795+x796));

    if (t173 != 9223372036854775754LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x797 = UINT64_MAX;
	int16_t x798 = INT16_MIN;
	int8_t x799 = INT8_MIN;
	static volatile int32_t t174 = 91687986;

    t174 = ((x797<=x798)-(x799+x800));

    if (t174 != 256) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x801 = UINT16_MAX;
	int64_t x802 = -60412892LL;
	int8_t x803 = 28;
	int8_t x804 = 0;
	volatile int32_t t175 = 1942;

    t175 = ((x801<=x802)-(x803+x804));

    if (t175 != -28) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x805 = UINT64_MAX;
	volatile uint8_t x807 = UINT8_MAX;
	uint32_t x808 = 3198446U;
	volatile uint32_t t176 = 137328726U;

    t176 = ((x805<=x806)-(x807+x808));

    if (t176 != 4291768596U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x810 = INT8_MIN;
	volatile uint8_t x811 = UINT8_MAX;
	uint32_t t177 = 661U;

    t177 = ((x809<=x810)-(x811+x812));

    if (t177 != 3713742510U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x813 = INT16_MIN;
	int32_t x814 = -62433693;
	int64_t x815 = -216928317201004589LL;

    t178 = ((x813<=x814)-(x815+x816));

    if (t178 != 216928315053520942LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x817 = INT16_MIN;
	uint8_t x818 = 7U;
	int32_t x819 = -155762;
	uint16_t x820 = 264U;
	volatile int32_t t179 = -159199;

    t179 = ((x817<=x818)-(x819+x820));

    if (t179 != 155499) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x821 = 14U;
	uint64_t x823 = UINT64_MAX;
	int32_t x824 = INT32_MIN;
	volatile uint64_t t180 = 121440722LLU;

    t180 = ((x821<=x822)-(x823+x824));

    if (t180 != 2147483649LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x825 = 0U;
	int32_t x826 = INT32_MIN;
	int16_t x827 = INT16_MIN;
	int32_t x828 = 18490;
	static int32_t t181 = -28873023;

    t181 = ((x825<=x826)-(x827+x828));

    if (t181 != 14278) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x829 = INT16_MAX;
	int8_t x830 = INT8_MIN;
	uint64_t x831 = UINT64_MAX;
	static int8_t x832 = -1;
	static uint64_t t182 = 869998324LLU;

    t182 = ((x829<=x830)-(x831+x832));

    if (t182 != 2LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x833 = 0U;
	volatile uint32_t x834 = 1642267U;
	int32_t x836 = -3153;
	volatile int32_t t183 = -367;

    t183 = ((x833<=x834)-(x835+x836));

    if (t183 != 2899) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x837 = 51U;
	static volatile int64_t x838 = -1220638LL;
	int16_t x839 = INT16_MIN;
	volatile uint16_t x840 = UINT16_MAX;
	volatile int32_t t184 = -1;

    t184 = ((x837<=x838)-(x839+x840));

    if (t184 != -32767) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x841 = INT32_MIN;
	int32_t x842 = INT32_MIN;
	uint8_t x843 = UINT8_MAX;
	static uint32_t x844 = 709686U;
	uint32_t t185 = 1641417904U;

    t185 = ((x841<=x842)-(x843+x844));

    if (t185 != 4294257356U) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x845 = -1143;
	uint8_t x846 = 6U;
	static volatile int32_t t186 = -849863;

    t186 = ((x845<=x846)-(x847+x848));

    if (t186 != 32770) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x850 = INT8_MIN;
	static volatile int16_t x851 = -2970;
	int64_t x852 = -1LL;
	int64_t t187 = -42873983785549026LL;

    t187 = ((x849<=x850)-(x851+x852));

    if (t187 != 2972LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x854 = 65019019U;
	volatile int32_t t188 = -3451733;

    t188 = ((x853<=x854)-(x855+x856));

    if (t188 != -102) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x857 = 0;
	volatile uint32_t x859 = 1698U;
	uint8_t x860 = UINT8_MAX;
	uint32_t t189 = 415499819U;

    t189 = ((x857<=x858)-(x859+x860));

    if (t189 != 4294965344U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x865 = -4415;
	int32_t x866 = -458306259;
	int16_t x867 = 3997;
	int8_t x868 = 22;
	int32_t t190 = 21;

    t190 = ((x865<=x866)-(x867+x868));

    if (t190 != -4019) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x869 = 5U;
	int32_t x870 = -1;
	volatile uint32_t x871 = 5414U;
	uint32_t x872 = UINT32_MAX;

    t191 = ((x869<=x870)-(x871+x872));

    if (t191 != 4294961883U) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x873 = 41U;
	volatile uint16_t x874 = 3301U;
	int32_t t192 = 54;

    t192 = ((x873<=x874)-(x875+x876));

    if (t192 != -230) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x877 = 188258U;
	static int16_t x878 = INT16_MIN;
	uint8_t x879 = 1U;
	uint16_t x880 = UINT16_MAX;

    t193 = ((x877<=x878)-(x879+x880));

    if (t193 != -65535) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x885 = -277919476859LL;
	static uint16_t x886 = 13U;
	int16_t x887 = INT16_MIN;
	uint8_t x888 = UINT8_MAX;
	int32_t t194 = -229;

    t194 = ((x885<=x886)-(x887+x888));

    if (t194 != 32514) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x889 = INT16_MAX;
	static int8_t x890 = INT8_MAX;
	volatile uint32_t x891 = 3374U;
	int64_t x892 = -1288LL;
	static volatile int64_t t195 = 723763380455703LL;

    t195 = ((x889<=x890)-(x891+x892));

    if (t195 != -2086LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x893 = 27902869U;
	int32_t x894 = -1;
	int8_t x895 = INT8_MAX;
	int32_t x896 = INT32_MIN;
	int32_t t196 = 7448048;

    t196 = ((x893<=x894)-(x895+x896));

    if (t196 != 2147483522) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x897 = -1;
	int16_t x898 = INT16_MIN;
	volatile uint16_t x899 = UINT16_MAX;
	static volatile uint32_t t197 = 315U;

    t197 = ((x897<=x898)-(x899+x900));

    if (t197 != 4294901759U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x901 = 239524048397LL;
	int16_t x902 = INT16_MIN;
	static int64_t x903 = -14029208098LL;
	static int8_t x904 = 7;
	volatile int64_t t198 = 5479343LL;

    t198 = ((x901<=x902)-(x903+x904));

    if (t198 != 14029208091LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x906 = INT8_MAX;
	static int8_t x907 = -1;
	int32_t t199 = -41725;

    t199 = ((x905<=x906)-(x907+x908));

    if (t199 != 3) { NG(); } else { ; }
	
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

