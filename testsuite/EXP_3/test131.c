
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

static uint8_t x1 = 20U;
int16_t x5 = INT16_MAX;
uint64_t x8 = 5479LLU;
static volatile uint32_t x10 = UINT32_MAX;
uint32_t x11 = 76U;
volatile int8_t x30 = INT8_MAX;
static uint16_t x32 = UINT16_MAX;
volatile uint8_t x42 = UINT8_MAX;
int32_t x45 = 1;
int64_t x50 = 989685691LL;
static int32_t t12 = -1;
int8_t x53 = INT8_MAX;
volatile uint32_t x60 = 16U;
uint32_t t14 = 16118U;
volatile int16_t x67 = 3773;
int32_t x69 = INT32_MIN;
int16_t x70 = INT16_MIN;
int64_t t18 = 1210265LL;
volatile int8_t x80 = 29;
uint8_t x82 = 4U;
static volatile int64_t x96 = -1LL;
static uint8_t x97 = UINT8_MAX;
static uint64_t x99 = 7434LLU;
uint64_t t24 = 1319LLU;
static int8_t x107 = 1;
volatile int64_t t25 = 8169004083645851LL;
volatile uint32_t x111 = UINT32_MAX;
uint64_t t28 = 19022393217195LLU;
static int32_t x127 = INT32_MIN;
int8_t x129 = INT8_MAX;
volatile uint64_t x132 = 54247232085LLU;
int8_t x144 = INT8_MIN;
int16_t x146 = 0;
static int64_t t36 = -62859073289906766LL;
static int8_t x163 = INT8_MAX;
static int16_t x168 = INT16_MAX;
volatile uint32_t t38 = 142320U;
uint16_t x170 = 850U;
static int8_t x173 = -1;
uint32_t x174 = 253U;
static int64_t x181 = 3297LL;
volatile int64_t x182 = INT64_MAX;
int64_t t42 = -5387997018293LL;
uint16_t x186 = UINT16_MAX;
static volatile int32_t t43 = -31968336;
uint16_t x191 = 26U;
int32_t x193 = -13921098;
static int32_t x195 = -407367;
static volatile int32_t t46 = 8145;
int64_t x214 = INT64_MIN;
volatile int32_t x216 = -1;
int16_t x224 = -1;
static uint64_t x233 = UINT64_MAX;
int8_t x237 = -1;
static int64_t x240 = -97431LL;
int32_t x243 = -254554;
int32_t x244 = -1;
int32_t x245 = INT32_MAX;
int8_t x248 = INT8_MAX;
volatile int16_t x249 = -1;
volatile uint16_t x254 = 520U;
static int16_t x255 = 4;
static volatile uint64_t t59 = 181029711674772LLU;
static volatile int16_t x257 = INT16_MIN;
volatile int16_t x266 = INT16_MIN;
int32_t t65 = 237;
volatile int8_t x286 = 1;
int32_t x298 = INT32_MIN;
static int16_t x307 = -1;
volatile int32_t t71 = -804316;
static int8_t x311 = INT8_MAX;
volatile int8_t x312 = INT8_MAX;
int32_t x320 = -1;
static volatile int32_t t74 = 619;
static int64_t x323 = INT64_MIN;
int32_t x324 = INT32_MAX;
volatile uint64_t x339 = UINT64_MAX;
static int64_t x341 = INT64_MIN;
int8_t x354 = INT8_MAX;
int32_t t84 = 1;
int16_t x370 = INT16_MIN;
static uint16_t x388 = 460U;
volatile int16_t x390 = -2;
int32_t x394 = 3201;
uint64_t x400 = 330965867LLU;
int16_t x413 = INT16_MIN;
int16_t x420 = -1;
uint8_t x424 = UINT8_MAX;
volatile int32_t t98 = 1;
uint16_t x425 = 4969U;
int32_t x426 = INT32_MAX;
int16_t x429 = INT16_MIN;
volatile uint32_t x430 = UINT32_MAX;
int32_t x439 = 0;
volatile int8_t x454 = -1;
static volatile uint32_t t106 = 1U;
int64_t x466 = -1LL;
uint32_t x468 = UINT32_MAX;
int16_t x474 = -1;
uint64_t x488 = UINT64_MAX;
int64_t x490 = -4022142325089132LL;
uint64_t x494 = 41166243849122283LLU;
static volatile int32_t t113 = 751712097;
volatile int8_t x502 = 4;
volatile int64_t t115 = 2624806135537747LL;
uint64_t x509 = 800LLU;
int32_t x510 = INT32_MAX;
int32_t x512 = -1;
int32_t x514 = 0;
int64_t x515 = 151362449126890LL;
int32_t x518 = INT32_MAX;
int64_t x526 = INT64_MIN;
volatile uint16_t x528 = 21368U;
int32_t t123 = -481858;
uint32_t t124 = 719974201U;
int32_t x554 = INT32_MIN;
static int32_t x556 = -39911906;
static int16_t x559 = INT16_MIN;
static volatile int32_t t128 = 13972465;
static int16_t x561 = INT16_MIN;
static uint64_t x569 = UINT64_MAX;
volatile uint64_t t132 = 2230499626LLU;
static int32_t x583 = -1;
volatile int64_t x596 = -257833391LL;
int64_t t137 = -448313136430570148LL;
static int8_t x599 = INT8_MIN;
int32_t x602 = INT32_MIN;
int8_t x606 = 46;
uint32_t x608 = 14213247U;
static uint64_t x610 = UINT64_MAX;
volatile uint64_t x613 = UINT64_MAX;
int64_t t142 = 28292LL;
volatile int32_t x617 = 36875632;
int16_t x624 = INT16_MAX;
int32_t t144 = -211656;
int16_t x631 = 0;
static int64_t x632 = -263289325427115988LL;
volatile int64_t t145 = 5LL;
int64_t x650 = -1LL;
volatile uint8_t x651 = 24U;
int16_t x652 = -3;
volatile int64_t x655 = -1LL;
volatile int32_t x659 = -1323854;
int64_t x666 = INT64_MIN;
static int16_t x668 = INT16_MAX;
int16_t x673 = INT16_MIN;
static int16_t x677 = INT16_MAX;
static int64_t x678 = INT64_MIN;
int16_t x683 = 0;
static int32_t t157 = -44;
volatile int32_t x686 = INT32_MIN;
static int8_t x689 = INT8_MIN;
static int64_t x694 = INT64_MIN;
volatile int32_t x695 = -242270;
int64_t x696 = -1LL;
volatile uint64_t t162 = 5995779078205130755LLU;
int32_t x705 = 1034337;
static int64_t x716 = INT64_MIN;
volatile uint64_t t164 = 3421160612626LLU;
int8_t x719 = -7;
volatile int64_t x721 = -33124301883696LL;
static int32_t t166 = -9707;
int8_t x726 = 1;
uint32_t x727 = 6423U;
int64_t x734 = INT64_MAX;
volatile int32_t t169 = -16778007;
uint32_t x740 = 131099U;
static int8_t x747 = -1;
int8_t x754 = 1;
int32_t x761 = INT32_MIN;
static uint32_t x764 = UINT32_MAX;
int8_t x770 = INT8_MIN;
volatile uint8_t x790 = 7U;
static volatile int32_t x810 = -4189;
int16_t x819 = -1;
int32_t x820 = 182864489;
int32_t t186 = 60164;
int64_t x839 = -1LL;
static int64_t x844 = INT64_MIN;
int8_t x850 = -1;
uint32_t x852 = 28743U;
static int32_t x857 = INT32_MIN;
uint32_t x860 = 912U;
uint8_t x862 = 7U;
static volatile int32_t x868 = INT32_MIN;
uint8_t x871 = 104U;
volatile int64_t t196 = 439973907991712116LL;
uint16_t x877 = UINT16_MAX;
volatile int8_t x891 = INT8_MAX;


void f0(void) {
    	static volatile uint16_t x2 = 30812U;
	int16_t x3 = -1;
	uint8_t x4 = 7U;
	static volatile int32_t t0 = 162;

    t0 = ((x1<=x2)%(x3+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x6 = INT64_MIN;
	uint16_t x7 = 24U;
	static volatile uint64_t t1 = 21738369712571LLU;

    t1 = ((x5<=x6)%(x7+x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -14029LL;
	volatile uint64_t x12 = 1390LLU;
	static uint64_t t2 = 7895789592460174451LLU;

    t2 = ((x9<=x10)%(x11+x12));

    if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 7U;
	int8_t x14 = -6;
	uint16_t x15 = 22U;
	static uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 2635144004281971LLU;

    t3 = ((x13<=x14)%(x15+x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MAX;
	int8_t x18 = -1;
	int64_t x19 = -1LL;
	int32_t x20 = INT32_MIN;
	static volatile int64_t t4 = -160064LL;

    t4 = ((x17<=x18)%(x19+x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = -1;
	uint8_t x22 = 3U;
	int16_t x23 = -1;
	int64_t x24 = -21594550676603LL;
	static int64_t t5 = 3314225557331LL;

    t5 = ((x21<=x22)%(x23+x24));

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	static int8_t x26 = 0;
	static uint64_t x27 = UINT64_MAX;
	int8_t x28 = -9;
	uint64_t t6 = 22378082LLU;

    t6 = ((x25<=x26)%(x27+x28));

    if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	volatile int64_t x31 = -2636LL;
	int64_t t7 = -230100LL;

    t7 = ((x29<=x30)%(x31+x32));

    if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = 1212757563569LL;
	volatile int64_t x34 = INT64_MIN;
	int32_t x35 = INT32_MAX;
	int16_t x36 = INT16_MIN;
	static volatile int32_t t8 = -178;

    t8 = ((x33<=x34)%(x35+x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x37 = UINT16_MAX;
	int8_t x38 = INT8_MIN;
	int32_t x39 = 3;
	volatile int8_t x40 = INT8_MIN;
	static volatile int32_t t9 = -814;

    t9 = ((x37<=x38)%(x39+x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int16_t x41 = 204;
	static int32_t x43 = 3;
	uint64_t x44 = UINT64_MAX;
	uint64_t t10 = 49195LLU;

    t10 = ((x41<=x42)%(x43+x44));

    if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x46 = 0U;
	uint8_t x47 = UINT8_MAX;
	int8_t x48 = INT8_MIN;
	volatile int32_t t11 = -2558;

    t11 = ((x45<=x46)%(x47+x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x49 = 1U;
	static int8_t x51 = -1;
	volatile int32_t x52 = -1;

    t12 = ((x49<=x50)%(x51+x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x54 = -4073;
	static uint16_t x55 = 176U;
	int64_t x56 = -39378741835753LL;
	static int64_t t13 = -197585818544LL;

    t13 = ((x53<=x54)%(x55+x56));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -1;
	int64_t x58 = INT64_MIN;
	static int8_t x59 = INT8_MIN;

    t14 = ((x57<=x58)%(x59+x60));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = INT32_MAX;
	int8_t x62 = INT8_MAX;
	int32_t x63 = 19680;
	static volatile int16_t x64 = 3757;
	volatile int32_t t15 = -142;

    t15 = ((x61<=x62)%(x63+x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = UINT32_MAX;
	int8_t x66 = 0;
	uint64_t x68 = 10715194553962579LLU;
	uint64_t t16 = 112862770927LLU;

    t16 = ((x65<=x66)%(x67+x68));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x71 = INT32_MAX;
	int64_t x72 = INT64_MIN;
	int64_t t17 = 2681276794LL;

    t17 = ((x69<=x70)%(x71+x72));

    if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -325160;
	int8_t x74 = 62;
	volatile int64_t x75 = -1630439431008LL;
	int8_t x76 = -1;

    t18 = ((x73<=x74)%(x75+x76));

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -3;
	volatile int8_t x78 = 1;
	volatile int32_t x79 = -4924228;
	volatile int32_t t19 = -82;

    t19 = ((x77<=x78)%(x79+x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MAX;
	int8_t x83 = INT8_MIN;
	int8_t x84 = INT8_MIN;
	int32_t t20 = 5;

    t20 = ((x81<=x82)%(x83+x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = 1;
	int16_t x86 = -3989;
	int8_t x87 = -1;
	int32_t x88 = -1;
	int32_t t21 = -15;

    t21 = ((x85<=x86)%(x87+x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x89 = 1U;
	int16_t x90 = INT16_MAX;
	volatile int64_t x91 = -1LL;
	int16_t x92 = -1;
	volatile int64_t t22 = -744LL;

    t22 = ((x89<=x90)%(x91+x92));

    if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	static volatile uint32_t x94 = UINT32_MAX;
	int16_t x95 = INT16_MAX;
	volatile int64_t t23 = 1LL;

    t23 = ((x93<=x94)%(x95+x96));

    if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x98 = INT64_MIN;
	uint8_t x100 = UINT8_MAX;

    t24 = ((x97<=x98)%(x99+x100));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x105 = 16;
	static volatile int16_t x106 = INT16_MIN;
	volatile int64_t x108 = INT64_MIN;

    t25 = ((x105<=x106)%(x107+x108));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x109 = 36;
	int8_t x110 = -12;
	static int32_t x112 = 464208;
	static volatile uint32_t t26 = 1812007U;

    t26 = ((x109<=x110)%(x111+x112));

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x113 = -1;
	int64_t x114 = 910899LL;
	int32_t x115 = -1;
	volatile uint32_t x116 = UINT32_MAX;
	volatile uint32_t t27 = 125357436U;

    t27 = ((x113<=x114)%(x115+x116));

    if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x117 = 414LLU;
	volatile int64_t x118 = INT64_MAX;
	int8_t x119 = INT8_MIN;
	volatile uint64_t x120 = 752032284723141462LLU;

    t28 = ((x117<=x118)%(x119+x120));

    if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x121 = 616006U;
	int8_t x122 = INT8_MIN;
	int64_t x123 = INT64_MIN;
	static uint64_t x124 = 24LLU;
	uint64_t t29 = 156LLU;

    t29 = ((x121<=x122)%(x123+x124));

    if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x125 = UINT32_MAX;
	int16_t x126 = INT16_MIN;
	int64_t x128 = INT64_MAX;
	volatile int64_t t30 = -1LL;

    t30 = ((x125<=x126)%(x127+x128));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x130 = 30;
	int16_t x131 = -1;
	static uint64_t t31 = 264796253013LLU;

    t31 = ((x129<=x130)%(x131+x132));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x133 = 164U;
	int32_t x134 = INT32_MIN;
	uint16_t x135 = 1984U;
	int16_t x136 = 3665;
	static volatile int32_t t32 = 3340066;

    t32 = ((x133<=x134)%(x135+x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x141 = -1;
	int8_t x142 = 1;
	int16_t x143 = INT16_MIN;
	static volatile int32_t t33 = -39;

    t33 = ((x141<=x142)%(x143+x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x145 = INT32_MIN;
	int64_t x147 = -1LL;
	int64_t x148 = 1700704318118829495LL;
	int64_t t34 = -32808913LL;

    t34 = ((x145<=x146)%(x147+x148));

    if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x149 = INT64_MIN;
	int64_t x150 = INT64_MIN;
	uint16_t x151 = 31567U;
	uint16_t x152 = 11U;
	static int32_t t35 = 1;

    t35 = ((x149<=x150)%(x151+x152));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x153 = UINT64_MAX;
	uint8_t x154 = UINT8_MAX;
	static volatile int64_t x155 = INT64_MAX;
	int64_t x156 = -1LL;

    t36 = ((x153<=x154)%(x155+x156));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x161 = -8971;
	static volatile int64_t x162 = INT64_MAX;
	int16_t x164 = INT16_MIN;
	static int32_t t37 = 0;

    t37 = ((x161<=x162)%(x163+x164));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x165 = -85LL;
	int64_t x166 = -1LL;
	volatile uint32_t x167 = UINT32_MAX;

    t38 = ((x165<=x166)%(x167+x168));

    if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x169 = INT32_MIN;
	int16_t x171 = INT16_MAX;
	uint64_t x172 = 10LLU;
	uint64_t t39 = 75429778242795619LLU;

    t39 = ((x169<=x170)%(x171+x172));

    if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x175 = UINT32_MAX;
	int16_t x176 = INT16_MIN;
	static uint32_t t40 = 613U;

    t40 = ((x173<=x174)%(x175+x176));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x177 = UINT8_MAX;
	int32_t x178 = 861;
	volatile int32_t x179 = -1;
	int16_t x180 = -1;
	volatile int32_t t41 = 730279366;

    t41 = ((x177<=x178)%(x179+x180));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x183 = INT8_MIN;
	static int64_t x184 = -1LL;

    t42 = ((x181<=x182)%(x183+x184));

    if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x185 = 1;
	static int16_t x187 = -1;
	uint16_t x188 = 48U;

    t43 = ((x185<=x186)%(x187+x188));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x189 = -1;
	int64_t x190 = -1211LL;
	int64_t x192 = INT64_MIN;
	static int64_t t44 = -114525998682LL;

    t44 = ((x189<=x190)%(x191+x192));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x194 = INT16_MIN;
	static uint8_t x196 = 42U;
	volatile int32_t t45 = 36327;

    t45 = ((x193<=x194)%(x195+x196));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x197 = -27223;
	int64_t x198 = 1914262875631702LL;
	int8_t x199 = INT8_MAX;
	int32_t x200 = INT32_MIN;

    t46 = ((x197<=x198)%(x199+x200));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = -1;
	volatile int64_t x202 = 0LL;
	uint64_t x203 = UINT64_MAX;
	uint64_t x204 = UINT64_MAX;
	volatile uint64_t t47 = 66991LLU;

    t47 = ((x201<=x202)%(x203+x204));

    if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x205 = -1LL;
	int8_t x206 = INT8_MIN;
	volatile int32_t x207 = -4;
	static uint64_t x208 = 1LLU;
	volatile uint64_t t48 = 5821755585055576LLU;

    t48 = ((x205<=x206)%(x207+x208));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x209 = INT16_MAX;
	int8_t x210 = INT8_MIN;
	uint8_t x211 = UINT8_MAX;
	static uint32_t x212 = 210459576U;
	uint32_t t49 = 689U;

    t49 = ((x209<=x210)%(x211+x212));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x213 = UINT16_MAX;
	volatile int16_t x215 = -1;
	static int32_t t50 = 186;

    t50 = ((x213<=x214)%(x215+x216));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x221 = INT16_MIN;
	int8_t x222 = INT8_MIN;
	int64_t x223 = -1LL;
	static volatile int64_t t51 = 658LL;

    t51 = ((x221<=x222)%(x223+x224));

    if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x225 = INT64_MAX;
	int8_t x226 = INT8_MAX;
	int64_t x227 = INT64_MIN;
	uint8_t x228 = 119U;
	int64_t t52 = 2475496971LL;

    t52 = ((x225<=x226)%(x227+x228));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x229 = INT8_MIN;
	int8_t x230 = INT8_MIN;
	static volatile int32_t x231 = -429063;
	int64_t x232 = 974LL;
	static int64_t t53 = 780704974815471LL;

    t53 = ((x229<=x230)%(x231+x232));

    if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint8_t x234 = 0U;
	static volatile int8_t x235 = -1;
	volatile int8_t x236 = -1;
	static int32_t t54 = -385600;

    t54 = ((x233<=x234)%(x235+x236));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x238 = INT32_MIN;
	int32_t x239 = INT32_MAX;
	volatile int64_t t55 = 1260100120035LL;

    t55 = ((x237<=x238)%(x239+x240));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x241 = INT32_MIN;
	volatile int32_t x242 = INT32_MIN;
	int32_t t56 = -10410;

    t56 = ((x241<=x242)%(x243+x244));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x246 = 0LL;
	uint8_t x247 = 6U;
	volatile int32_t t57 = 1;

    t57 = ((x245<=x246)%(x247+x248));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x250 = INT8_MAX;
	uint64_t x251 = UINT64_MAX;
	int64_t x252 = INT64_MIN;
	uint64_t t58 = 42918LLU;

    t58 = ((x249<=x250)%(x251+x252));

    if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x253 = -1LL;
	uint64_t x256 = 1374803669LLU;

    t59 = ((x253<=x254)%(x255+x256));

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x258 = INT64_MIN;
	static volatile int32_t x259 = -1;
	int16_t x260 = -1;
	int32_t t60 = -77212903;

    t60 = ((x257<=x258)%(x259+x260));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x261 = UINT16_MAX;
	static int8_t x262 = -1;
	int32_t x263 = INT32_MAX;
	static int8_t x264 = INT8_MIN;
	volatile int32_t t61 = -254;

    t61 = ((x261<=x262)%(x263+x264));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x265 = INT16_MIN;
	int32_t x267 = INT32_MIN;
	int8_t x268 = 1;
	int32_t t62 = -59450;

    t62 = ((x265<=x266)%(x267+x268));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x269 = 523807U;
	static int32_t x270 = -1;
	uint16_t x271 = 4868U;
	int8_t x272 = INT8_MAX;
	int32_t t63 = -260467681;

    t63 = ((x269<=x270)%(x271+x272));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x273 = 675659278;
	static int8_t x274 = -1;
	uint32_t x275 = 785602448U;
	uint8_t x276 = 22U;
	uint32_t t64 = 8446182U;

    t64 = ((x273<=x274)%(x275+x276));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x277 = 8931748U;
	int32_t x278 = INT32_MAX;
	int8_t x279 = INT8_MIN;
	static uint8_t x280 = 6U;

    t65 = ((x277<=x278)%(x279+x280));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x281 = INT8_MAX;
	uint16_t x282 = 11U;
	int16_t x283 = -1;
	volatile int32_t x284 = -80697;
	static int32_t t66 = 222262;

    t66 = ((x281<=x282)%(x283+x284));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x285 = UINT8_MAX;
	int8_t x287 = INT8_MIN;
	static int32_t x288 = -1;
	volatile int32_t t67 = -1183;

    t67 = ((x285<=x286)%(x287+x288));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x289 = -1;
	int64_t x290 = 135328267892574271LL;
	volatile int16_t x291 = INT16_MIN;
	uint64_t x292 = 8362503LLU;
	uint64_t t68 = 10418447752LLU;

    t68 = ((x289<=x290)%(x291+x292));

    if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x293 = 20U;
	static int64_t x294 = 553087919008101LL;
	volatile uint32_t x295 = 4634U;
	volatile uint8_t x296 = 97U;
	volatile uint32_t t69 = 103627U;

    t69 = ((x293<=x294)%(x295+x296));

    if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x297 = 1U;
	uint16_t x299 = UINT16_MAX;
	uint64_t x300 = 3185552893107LLU;
	static uint64_t t70 = 256802LLU;

    t70 = ((x297<=x298)%(x299+x300));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x305 = UINT32_MAX;
	static int32_t x306 = -1;
	uint8_t x308 = UINT8_MAX;

    t71 = ((x305<=x306)%(x307+x308));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x309 = -1;
	static int64_t x310 = -1LL;
	int32_t t72 = -3830388;

    t72 = ((x309<=x310)%(x311+x312));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x313 = 803;
	static int16_t x314 = INT16_MAX;
	int8_t x315 = -1;
	volatile int16_t x316 = INT16_MIN;
	int32_t t73 = 1;

    t73 = ((x313<=x314)%(x315+x316));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x317 = UINT8_MAX;
	int8_t x318 = INT8_MAX;
	int32_t x319 = 909901382;

    t74 = ((x317<=x318)%(x319+x320));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x321 = INT32_MIN;
	static uint64_t x322 = 21358688LLU;
	volatile int64_t t75 = 757352LL;

    t75 = ((x321<=x322)%(x323+x324));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x325 = -1;
	int8_t x326 = INT8_MAX;
	static uint16_t x327 = UINT16_MAX;
	static uint64_t x328 = 70126LLU;
	uint64_t t76 = 56617218136LLU;

    t76 = ((x325<=x326)%(x327+x328));

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x329 = 1776LLU;
	int8_t x330 = INT8_MIN;
	volatile uint32_t x331 = UINT32_MAX;
	int8_t x332 = -3;
	uint32_t t77 = 104U;

    t77 = ((x329<=x330)%(x331+x332));

    if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x337 = -1LL;
	static int16_t x338 = INT16_MIN;
	uint8_t x340 = 0U;
	static uint64_t t78 = 48LLU;

    t78 = ((x337<=x338)%(x339+x340));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x342 = INT64_MAX;
	int16_t x343 = INT16_MIN;
	int8_t x344 = -1;
	int32_t t79 = -287499696;

    t79 = ((x341<=x342)%(x343+x344));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x345 = INT32_MAX;
	int64_t x346 = -1LL;
	uint32_t x347 = 2U;
	int8_t x348 = -3;
	uint32_t t80 = 0U;

    t80 = ((x345<=x346)%(x347+x348));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x353 = -1;
	uint16_t x355 = 5089U;
	volatile int8_t x356 = INT8_MIN;
	volatile int32_t t81 = -1135080;

    t81 = ((x353<=x354)%(x355+x356));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x357 = -1;
	volatile int32_t x358 = INT32_MIN;
	int16_t x359 = INT16_MIN;
	int8_t x360 = -1;
	int32_t t82 = 114566;

    t82 = ((x357<=x358)%(x359+x360));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x361 = 939U;
	int16_t x362 = -1;
	static volatile uint64_t x363 = UINT64_MAX;
	int32_t x364 = INT32_MIN;
	uint64_t t83 = 93063LLU;

    t83 = ((x361<=x362)%(x363+x364));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x365 = -2008;
	uint64_t x366 = 3054357LLU;
	static int8_t x367 = 9;
	int32_t x368 = INT32_MIN;

    t84 = ((x365<=x366)%(x367+x368));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x369 = INT32_MIN;
	int8_t x371 = INT8_MAX;
	uint32_t x372 = 213578U;
	volatile uint32_t t85 = 8054004U;

    t85 = ((x369<=x370)%(x371+x372));

    if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x373 = INT32_MIN;
	uint16_t x374 = UINT16_MAX;
	uint64_t x375 = 5503031145LLU;
	int8_t x376 = 11;
	static uint64_t t86 = 50982820966049384LLU;

    t86 = ((x373<=x374)%(x375+x376));

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x377 = 29U;
	int16_t x378 = -1;
	static int32_t x379 = -1809;
	int32_t x380 = INT32_MAX;
	volatile int32_t t87 = 441;

    t87 = ((x377<=x378)%(x379+x380));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x381 = UINT16_MAX;
	static uint32_t x382 = UINT32_MAX;
	uint32_t x383 = UINT32_MAX;
	int8_t x384 = INT8_MIN;
	static volatile uint32_t t88 = 11593313U;

    t88 = ((x381<=x382)%(x383+x384));

    if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x385 = INT32_MIN;
	int32_t x386 = 54828454;
	volatile int8_t x387 = -1;
	int32_t t89 = 25;

    t89 = ((x385<=x386)%(x387+x388));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x389 = UINT16_MAX;
	static int64_t x391 = INT64_MIN;
	int64_t x392 = 28690346LL;
	static int64_t t90 = -125LL;

    t90 = ((x389<=x390)%(x391+x392));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x393 = INT16_MIN;
	static int8_t x395 = INT8_MIN;
	int32_t x396 = -1;
	volatile int32_t t91 = 1;

    t91 = ((x393<=x394)%(x395+x396));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x397 = -950836264705370LL;
	int32_t x398 = -1;
	int16_t x399 = -6439;
	volatile uint64_t t92 = 1636LLU;

    t92 = ((x397<=x398)%(x399+x400));

    if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x401 = 738689U;
	uint16_t x402 = 627U;
	volatile uint64_t x403 = UINT64_MAX;
	static volatile uint64_t x404 = 14060LLU;
	uint64_t t93 = 566571184614751526LLU;

    t93 = ((x401<=x402)%(x403+x404));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x405 = INT32_MAX;
	uint32_t x406 = 268U;
	static int16_t x407 = INT16_MIN;
	int16_t x408 = -1;
	static volatile int32_t t94 = -91002845;

    t94 = ((x405<=x406)%(x407+x408));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x409 = 160185U;
	int32_t x410 = INT32_MIN;
	uint8_t x411 = 104U;
	volatile int32_t x412 = -1;
	int32_t t95 = 2139;

    t95 = ((x409<=x410)%(x411+x412));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x414 = -1LL;
	int8_t x415 = INT8_MAX;
	static uint16_t x416 = 616U;
	int32_t t96 = 243;

    t96 = ((x413<=x414)%(x415+x416));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x417 = INT32_MIN;
	int32_t x418 = INT32_MIN;
	int32_t x419 = INT32_MAX;
	volatile int32_t t97 = 2149273;

    t97 = ((x417<=x418)%(x419+x420));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x421 = 0U;
	int16_t x422 = -1;
	int32_t x423 = -1;

    t98 = ((x421<=x422)%(x423+x424));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x427 = UINT16_MAX;
	static volatile int8_t x428 = 1;
	volatile int32_t t99 = 16;

    t99 = ((x425<=x426)%(x427+x428));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x431 = 1228U;
	volatile int8_t x432 = 11;
	static volatile uint32_t t100 = 967167625U;

    t100 = ((x429<=x430)%(x431+x432));

    if (t100 != 1U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x433 = 23729287U;
	int64_t x434 = -1LL;
	uint8_t x435 = 24U;
	static volatile int16_t x436 = INT16_MIN;
	static int32_t t101 = 1;

    t101 = ((x433<=x434)%(x435+x436));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x437 = 0;
	volatile int64_t x438 = -30037215LL;
	int16_t x440 = 1;
	static int32_t t102 = 874316866;

    t102 = ((x437<=x438)%(x439+x440));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x445 = UINT8_MAX;
	volatile int32_t x446 = -1;
	volatile uint32_t x447 = 1U;
	int8_t x448 = INT8_MIN;
	static volatile uint32_t t103 = 2406U;

    t103 = ((x445<=x446)%(x447+x448));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x449 = -627119;
	uint32_t x450 = 207256U;
	static uint64_t x451 = 1428734776LLU;
	uint16_t x452 = UINT16_MAX;
	volatile uint64_t t104 = 10935594431LLU;

    t104 = ((x449<=x450)%(x451+x452));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x453 = INT32_MIN;
	int16_t x455 = INT16_MAX;
	volatile int16_t x456 = INT16_MAX;
	volatile int32_t t105 = -1282211;

    t105 = ((x453<=x454)%(x455+x456));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x457 = INT8_MIN;
	volatile int16_t x458 = INT16_MIN;
	uint32_t x459 = 33765U;
	volatile int16_t x460 = INT16_MIN;

    t106 = ((x457<=x458)%(x459+x460));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x461 = -40;
	static volatile uint64_t x462 = 120176034654LLU;
	int16_t x463 = INT16_MIN;
	uint8_t x464 = 55U;
	static volatile int32_t t107 = -264687;

    t107 = ((x461<=x462)%(x463+x464));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x465 = 23742020;
	int16_t x467 = 931;
	static uint32_t t108 = 100814229U;

    t108 = ((x465<=x466)%(x467+x468));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x469 = -1;
	volatile int16_t x470 = INT16_MIN;
	static int16_t x471 = -1;
	int64_t x472 = INT64_MAX;
	static volatile int64_t t109 = 65001LL;

    t109 = ((x469<=x470)%(x471+x472));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x473 = 3338936683795LLU;
	volatile int8_t x475 = 1;
	int16_t x476 = INT16_MIN;
	static volatile int32_t t110 = -1803;

    t110 = ((x473<=x474)%(x475+x476));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x485 = -1;
	int16_t x486 = INT16_MIN;
	int8_t x487 = INT8_MIN;
	uint64_t t111 = 246872595LLU;

    t111 = ((x485<=x486)%(x487+x488));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x489 = 105911978269299310LLU;
	int8_t x491 = INT8_MIN;
	uint16_t x492 = UINT16_MAX;
	static volatile int32_t t112 = -21451411;

    t112 = ((x489<=x490)%(x491+x492));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x493 = INT64_MIN;
	int16_t x495 = INT16_MIN;
	int16_t x496 = 553;

    t113 = ((x493<=x494)%(x495+x496));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x497 = UINT8_MAX;
	int8_t x498 = INT8_MIN;
	int8_t x499 = -1;
	int32_t x500 = -1;
	int32_t t114 = 27;

    t114 = ((x497<=x498)%(x499+x500));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x501 = INT8_MIN;
	volatile int8_t x503 = 42;
	int64_t x504 = -731683520381237LL;

    t115 = ((x501<=x502)%(x503+x504));

    if (t115 != 1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x505 = 1U;
	int8_t x506 = -1;
	int32_t x507 = -1;
	volatile int64_t x508 = 29494103287636328LL;
	volatile int64_t t116 = -5765270LL;

    t116 = ((x505<=x506)%(x507+x508));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x511 = 12951;
	static int32_t t117 = 49978;

    t117 = ((x509<=x510)%(x511+x512));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x513 = INT16_MAX;
	int32_t x516 = -101791478;
	static int64_t t118 = 4907620231687LL;

    t118 = ((x513<=x514)%(x515+x516));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x517 = UINT32_MAX;
	int32_t x519 = INT32_MIN;
	uint16_t x520 = UINT16_MAX;
	int32_t t119 = 859328;

    t119 = ((x517<=x518)%(x519+x520));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x521 = -3880;
	uint8_t x522 = 16U;
	int64_t x523 = INT64_MAX;
	int64_t x524 = -7878109387LL;
	int64_t t120 = -10910029613957757LL;

    t120 = ((x521<=x522)%(x523+x524));

    if (t120 != 1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x525 = -8;
	int32_t x527 = -1;
	static int32_t t121 = -229112;

    t121 = ((x525<=x526)%(x527+x528));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x529 = INT64_MIN;
	int16_t x530 = INT16_MAX;
	int64_t x531 = -1LL;
	int8_t x532 = 15;
	static int64_t t122 = 161LL;

    t122 = ((x529<=x530)%(x531+x532));

    if (t122 != 1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x533 = INT32_MIN;
	int32_t x534 = -1;
	volatile uint8_t x535 = UINT8_MAX;
	int8_t x536 = -1;

    t123 = ((x533<=x534)%(x535+x536));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x537 = 31U;
	int16_t x538 = 2497;
	volatile uint32_t x539 = UINT32_MAX;
	static uint8_t x540 = UINT8_MAX;

    t124 = ((x537<=x538)%(x539+x540));

    if (t124 != 1U) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x541 = 253;
	int32_t x542 = INT32_MIN;
	int8_t x543 = INT8_MIN;
	static int8_t x544 = 4;
	static int32_t t125 = -1;

    t125 = ((x541<=x542)%(x543+x544));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x549 = 0;
	int32_t x550 = INT32_MIN;
	volatile int64_t x551 = 48485035021799924LL;
	int32_t x552 = INT32_MAX;
	int64_t t126 = -804LL;

    t126 = ((x549<=x550)%(x551+x552));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x553 = 0;
	static int16_t x555 = -1;
	volatile int32_t t127 = 1010455028;

    t127 = ((x553<=x554)%(x555+x556));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x557 = UINT64_MAX;
	uint64_t x558 = UINT64_MAX;
	uint16_t x560 = 2U;

    t128 = ((x557<=x558)%(x559+x560));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x562 = 1811LLU;
	int16_t x563 = INT16_MAX;
	int16_t x564 = INT16_MIN;
	volatile int32_t t129 = -2;

    t129 = ((x561<=x562)%(x563+x564));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x565 = INT16_MAX;
	int64_t x566 = INT64_MAX;
	volatile uint64_t x567 = 7615623272929236157LLU;
	uint8_t x568 = 90U;
	static uint64_t t130 = 16741748605902LLU;

    t130 = ((x565<=x566)%(x567+x568));

    if (t130 != 1LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x570 = -1;
	uint32_t x571 = 0U;
	volatile int32_t x572 = INT32_MIN;
	static uint32_t t131 = 21160U;

    t131 = ((x569<=x570)%(x571+x572));

    if (t131 != 1U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x573 = INT16_MIN;
	int8_t x574 = -1;
	uint64_t x575 = UINT64_MAX;
	int8_t x576 = -5;

    t132 = ((x573<=x574)%(x575+x576));

    if (t132 != 1LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x577 = INT8_MIN;
	volatile uint32_t x578 = 957589U;
	static int8_t x579 = INT8_MIN;
	int16_t x580 = -1;
	volatile int32_t t133 = -691229;

    t133 = ((x577<=x578)%(x579+x580));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x581 = INT64_MIN;
	int64_t x582 = 13045LL;
	int8_t x584 = INT8_MIN;
	int32_t t134 = 835050;

    t134 = ((x581<=x582)%(x583+x584));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x585 = 13;
	int8_t x586 = -1;
	int8_t x587 = INT8_MIN;
	int8_t x588 = INT8_MIN;
	static volatile int32_t t135 = 2533;

    t135 = ((x585<=x586)%(x587+x588));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x589 = 4505;
	uint64_t x590 = 3911008042410403LLU;
	static uint64_t x591 = 415997966908073056LLU;
	uint32_t x592 = 5580U;
	volatile uint64_t t136 = 569LLU;

    t136 = ((x589<=x590)%(x591+x592));

    if (t136 != 1LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x593 = 0U;
	int32_t x594 = INT32_MAX;
	int64_t x595 = -127409274757LL;

    t137 = ((x593<=x594)%(x595+x596));

    if (t137 != 1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x597 = -1;
	static int16_t x598 = -1;
	static uint32_t x600 = 709175688U;
	static uint32_t t138 = 13U;

    t138 = ((x597<=x598)%(x599+x600));

    if (t138 != 1U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x601 = 139058392068412LLU;
	int8_t x603 = INT8_MIN;
	int16_t x604 = 102;
	volatile int32_t t139 = 781451;

    t139 = ((x601<=x602)%(x603+x604));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x605 = UINT32_MAX;
	int8_t x607 = INT8_MIN;
	uint32_t t140 = 3501684U;

    t140 = ((x605<=x606)%(x607+x608));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x609 = -10378687;
	static int32_t x611 = -1038326924;
	int32_t x612 = -1;
	static volatile int32_t t141 = -28531072;

    t141 = ((x609<=x610)%(x611+x612));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x614 = 12482;
	uint32_t x615 = UINT32_MAX;
	volatile int64_t x616 = -27LL;

    t142 = ((x613<=x614)%(x615+x616));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x618 = 7284U;
	static int32_t x619 = INT32_MIN;
	int64_t x620 = 192495368791939879LL;
	int64_t t143 = -28729886174060LL;

    t143 = ((x617<=x618)%(x619+x620));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint64_t x621 = 1147167580952LLU;
	int32_t x622 = INT32_MIN;
	int32_t x623 = 316;

    t144 = ((x621<=x622)%(x623+x624));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x629 = INT16_MAX;
	uint32_t x630 = 646317U;

    t145 = ((x629<=x630)%(x631+x632));

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x633 = 281U;
	int64_t x634 = INT64_MIN;
	uint8_t x635 = 7U;
	static volatile int8_t x636 = -8;
	volatile int32_t t146 = 77797853;

    t146 = ((x633<=x634)%(x635+x636));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x641 = UINT64_MAX;
	volatile int64_t x642 = 703LL;
	static int8_t x643 = INT8_MIN;
	uint32_t x644 = 130729932U;
	static uint32_t t147 = 482722544U;

    t147 = ((x641<=x642)%(x643+x644));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x645 = INT64_MIN;
	volatile int16_t x646 = INT16_MIN;
	static int64_t x647 = INT64_MIN;
	volatile uint16_t x648 = 5U;
	int64_t t148 = 16165653135LL;

    t148 = ((x645<=x646)%(x647+x648));

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x649 = -1;
	volatile int32_t t149 = 496;

    t149 = ((x649<=x650)%(x651+x652));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x653 = 2U;
	static volatile int32_t x654 = INT32_MAX;
	static int16_t x656 = -170;
	int64_t t150 = 240LL;

    t150 = ((x653<=x654)%(x655+x656));

    if (t150 != 1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x657 = INT16_MIN;
	static volatile uint8_t x658 = 14U;
	uint8_t x660 = UINT8_MAX;
	volatile int32_t t151 = -30522;

    t151 = ((x657<=x658)%(x659+x660));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint32_t x661 = 5U;
	int32_t x662 = INT32_MIN;
	static int32_t x663 = -1;
	static int8_t x664 = -12;
	volatile int32_t t152 = -3;

    t152 = ((x661<=x662)%(x663+x664));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x665 = INT8_MIN;
	int32_t x667 = 613556415;
	volatile int32_t t153 = 53627;

    t153 = ((x665<=x666)%(x667+x668));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x669 = -12354;
	volatile int64_t x670 = INT64_MAX;
	int64_t x671 = -616LL;
	int64_t x672 = -1LL;
	static int64_t t154 = -546683894626557724LL;

    t154 = ((x669<=x670)%(x671+x672));

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x674 = -40;
	static int8_t x675 = -1;
	uint32_t x676 = UINT32_MAX;
	static uint32_t t155 = 406U;

    t155 = ((x673<=x674)%(x675+x676));

    if (t155 != 1U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x679 = 0U;
	int64_t x680 = INT64_MAX;
	volatile int64_t t156 = -10003819324LL;

    t156 = ((x677<=x678)%(x679+x680));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x681 = INT32_MIN;
	static volatile int64_t x682 = INT64_MIN;
	static int16_t x684 = INT16_MIN;

    t157 = ((x681<=x682)%(x683+x684));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint32_t x685 = UINT32_MAX;
	int16_t x687 = INT16_MIN;
	static int64_t x688 = -55298814618670LL;
	volatile int64_t t158 = 13510263531394LL;

    t158 = ((x685<=x686)%(x687+x688));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x690 = 1U;
	uint64_t x691 = 3194187008LLU;
	int64_t x692 = INT64_MIN;
	uint64_t t159 = 845575LLU;

    t159 = ((x689<=x690)%(x691+x692));

    if (t159 != 1LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x693 = INT8_MAX;
	volatile int64_t t160 = 280135068LL;

    t160 = ((x693<=x694)%(x695+x696));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x697 = INT64_MAX;
	uint64_t x698 = UINT64_MAX;
	uint64_t x699 = UINT64_MAX;
	uint8_t x700 = UINT8_MAX;
	uint64_t t161 = 9862695LLU;

    t161 = ((x697<=x698)%(x699+x700));

    if (t161 != 1LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x701 = 4;
	int64_t x702 = -91427148197036925LL;
	uint64_t x703 = UINT64_MAX;
	static uint32_t x704 = UINT32_MAX;

    t162 = ((x701<=x702)%(x703+x704));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x706 = 53U;
	uint64_t x707 = 643757LLU;
	volatile int32_t x708 = -57;
	static volatile uint64_t t163 = 290020034LLU;

    t163 = ((x705<=x706)%(x707+x708));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x713 = 2;
	static volatile int32_t x714 = INT32_MIN;
	uint64_t x715 = UINT64_MAX;

    t164 = ((x713<=x714)%(x715+x716));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x717 = UINT32_MAX;
	uint16_t x718 = 0U;
	static int16_t x720 = INT16_MIN;
	volatile int32_t t165 = -19986;

    t165 = ((x717<=x718)%(x719+x720));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x722 = INT8_MAX;
	static int8_t x723 = 0;
	uint8_t x724 = UINT8_MAX;

    t166 = ((x721<=x722)%(x723+x724));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x725 = INT16_MIN;
	uint8_t x728 = UINT8_MAX;
	static volatile uint32_t t167 = 1668853377U;

    t167 = ((x725<=x726)%(x727+x728));

    if (t167 != 1U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x729 = INT16_MIN;
	int16_t x730 = -97;
	static int64_t x731 = 164979509688LL;
	static volatile int32_t x732 = INT32_MIN;
	int64_t t168 = 74902699606392LL;

    t168 = ((x729<=x730)%(x731+x732));

    if (t168 != 1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint8_t x733 = UINT8_MAX;
	static uint8_t x735 = 121U;
	static int8_t x736 = INT8_MIN;

    t169 = ((x733<=x734)%(x735+x736));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x737 = 2U;
	volatile uint8_t x738 = 2U;
	uint16_t x739 = UINT16_MAX;
	volatile uint32_t t170 = 34443U;

    t170 = ((x737<=x738)%(x739+x740));

    if (t170 != 1U) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x741 = 667643958548LL;
	uint16_t x742 = UINT16_MAX;
	int64_t x743 = -45391964LL;
	static int16_t x744 = INT16_MIN;
	static int64_t t171 = 2841557090127944LL;

    t171 = ((x741<=x742)%(x743+x744));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x745 = -1LL;
	int8_t x746 = -1;
	static int8_t x748 = -1;
	int32_t t172 = -55;

    t172 = ((x745<=x746)%(x747+x748));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x753 = 51U;
	uint32_t x755 = 170U;
	int16_t x756 = 1;
	volatile uint32_t t173 = 3850U;

    t173 = ((x753<=x754)%(x755+x756));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x762 = 1U;
	int8_t x763 = INT8_MIN;
	volatile uint32_t t174 = 8749312U;

    t174 = ((x761<=x762)%(x763+x764));

    if (t174 != 1U) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x769 = 30;
	int16_t x771 = INT16_MIN;
	volatile uint32_t x772 = 27U;
	volatile uint32_t t175 = 127U;

    t175 = ((x769<=x770)%(x771+x772));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x773 = INT64_MAX;
	int16_t x774 = INT16_MIN;
	int64_t x775 = INT64_MIN;
	uint64_t x776 = 32732376751LLU;
	static uint64_t t176 = 32902564352665070LLU;

    t176 = ((x773<=x774)%(x775+x776));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x781 = 16U;
	volatile uint16_t x782 = 13U;
	uint32_t x783 = 1015U;
	int64_t x784 = INT64_MIN;
	volatile int64_t t177 = 105882LL;

    t177 = ((x781<=x782)%(x783+x784));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x789 = -1;
	volatile uint16_t x791 = UINT16_MAX;
	int8_t x792 = INT8_MAX;
	int32_t t178 = 2034;

    t178 = ((x789<=x790)%(x791+x792));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x793 = 19;
	volatile uint64_t x794 = 17731LLU;
	int8_t x795 = -1;
	volatile int8_t x796 = 15;
	volatile int32_t t179 = 21732288;

    t179 = ((x793<=x794)%(x795+x796));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x797 = INT32_MIN;
	int8_t x798 = INT8_MIN;
	uint64_t x799 = 4077882608676011LLU;
	static volatile int16_t x800 = INT16_MAX;
	volatile uint64_t t180 = 135166698270200LLU;

    t180 = ((x797<=x798)%(x799+x800));

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x801 = UINT16_MAX;
	uint32_t x802 = 89U;
	int32_t x803 = 686;
	int8_t x804 = INT8_MAX;
	volatile int32_t t181 = 1;

    t181 = ((x801<=x802)%(x803+x804));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x805 = INT8_MAX;
	volatile int32_t x806 = INT32_MIN;
	int32_t x807 = INT32_MIN;
	static uint64_t x808 = UINT64_MAX;
	volatile uint64_t t182 = 7616214688131702475LLU;

    t182 = ((x805<=x806)%(x807+x808));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x809 = 1;
	uint8_t x811 = 3U;
	int64_t x812 = INT64_MIN;
	static volatile int64_t t183 = -837017408978LL;

    t183 = ((x809<=x810)%(x811+x812));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x813 = 56;
	int8_t x814 = -1;
	int8_t x815 = INT8_MIN;
	int64_t x816 = INT64_MAX;
	static volatile int64_t t184 = -331951LL;

    t184 = ((x813<=x814)%(x815+x816));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x817 = INT32_MIN;
	int8_t x818 = -1;
	static int32_t t185 = -203;

    t185 = ((x817<=x818)%(x819+x820));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x821 = INT8_MIN;
	int16_t x822 = -1;
	static int16_t x823 = -34;
	uint16_t x824 = UINT16_MAX;

    t186 = ((x821<=x822)%(x823+x824));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x833 = INT32_MAX;
	int8_t x834 = INT8_MIN;
	static uint64_t x835 = UINT64_MAX;
	uint32_t x836 = 1207857U;
	static volatile uint64_t t187 = 154682323925768337LLU;

    t187 = ((x833<=x834)%(x835+x836));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x837 = 28087961991192LL;
	uint16_t x838 = 2625U;
	static int64_t x840 = INT64_MAX;
	static volatile int64_t t188 = 15699904196LL;

    t188 = ((x837<=x838)%(x839+x840));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x841 = INT32_MAX;
	int32_t x842 = INT32_MAX;
	int16_t x843 = 2;
	volatile int64_t t189 = 1896159646772LL;

    t189 = ((x841<=x842)%(x843+x844));

    if (t189 != 1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x849 = -22;
	static volatile int8_t x851 = INT8_MIN;
	volatile uint32_t t190 = 14565U;

    t190 = ((x849<=x850)%(x851+x852));

    if (t190 != 1U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x853 = -26962705;
	int8_t x854 = -1;
	uint16_t x855 = 267U;
	volatile uint64_t x856 = 5632488LLU;
	volatile uint64_t t191 = 12730196054LLU;

    t191 = ((x853<=x854)%(x855+x856));

    if (t191 != 1LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x858 = INT16_MAX;
	int32_t x859 = 0;
	volatile uint32_t t192 = 1U;

    t192 = ((x857<=x858)%(x859+x860));

    if (t192 != 1U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x861 = 6755771LL;
	volatile int16_t x863 = 8257;
	uint32_t x864 = UINT32_MAX;
	volatile uint32_t t193 = 2581220U;

    t193 = ((x861<=x862)%(x863+x864));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x865 = INT64_MIN;
	int64_t x866 = -1LL;
	uint16_t x867 = 13658U;
	volatile int32_t t194 = -161616684;

    t194 = ((x865<=x866)%(x867+x868));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x869 = INT16_MIN;
	volatile int8_t x870 = 0;
	volatile uint8_t x872 = UINT8_MAX;
	static volatile int32_t t195 = -706459946;

    t195 = ((x869<=x870)%(x871+x872));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x873 = -1;
	int8_t x874 = -3;
	int64_t x875 = INT64_MIN;
	uint32_t x876 = 31U;

    t196 = ((x873<=x874)%(x875+x876));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x878 = INT64_MAX;
	volatile int8_t x879 = 0;
	static uint8_t x880 = 1U;
	static int32_t t197 = 11083282;

    t197 = ((x877<=x878)%(x879+x880));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint64_t x885 = UINT64_MAX;
	uint64_t x886 = 702463LLU;
	int64_t x887 = -201523289578156357LL;
	int32_t x888 = INT32_MIN;
	volatile int64_t t198 = 12161751LL;

    t198 = ((x885<=x886)%(x887+x888));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x889 = 108;
	int16_t x890 = INT16_MAX;
	uint64_t x892 = UINT64_MAX;
	static volatile uint64_t t199 = 27762497741582910LLU;

    t199 = ((x889<=x890)%(x891+x892));

    if (t199 != 1LLU) { NG(); } else { ; }
	
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

