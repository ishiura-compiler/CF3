
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

uint8_t x5 = UINT8_MAX;
int16_t x16 = INT16_MAX;
uint32_t x24 = 63736255U;
volatile int32_t t2 = 37;
static uint16_t x27 = UINT16_MAX;
int32_t t3 = 1482228;
static int16_t x30 = -1;
int32_t t4 = -90038124;
volatile uint16_t x53 = 3070U;
static int8_t x55 = -1;
int16_t x64 = -127;
static int16_t x73 = -111;
int8_t x74 = -1;
static volatile int64_t x98 = -1LL;
int32_t x101 = -1;
volatile int32_t t16 = 373;
int16_t x128 = 16;
volatile int32_t t20 = -28;
int32_t x135 = -4061978;
int32_t t23 = 7117374;
volatile uint32_t x158 = 28875U;
volatile int32_t t26 = 819491359;
static int32_t x175 = -1;
volatile uint64_t x184 = 916840044796LLU;
int32_t t30 = 66013;
static int64_t x185 = -780986964247268LL;
static int16_t x186 = -3399;
int32_t t32 = 6570820;
int8_t x196 = INT8_MIN;
int8_t x197 = INT8_MIN;
int64_t x199 = INT64_MIN;
uint32_t x202 = 28773723U;
uint32_t x206 = 753235U;
static int16_t x211 = 377;
uint32_t x224 = 81U;
int8_t x239 = -1;
static int16_t x245 = 145;
int8_t x248 = 3;
static volatile int32_t x262 = INT32_MIN;
uint16_t x267 = 3U;
static int16_t x268 = 1274;
uint32_t x283 = UINT32_MAX;
int32_t x299 = -1;
int32_t t50 = -496;
volatile int32_t x331 = -1;
int64_t x352 = INT64_MIN;
static uint64_t x367 = 41507083028LLU;
int8_t x375 = -1;
int32_t t59 = 0;
static volatile int32_t t60 = -388207501;
int64_t x382 = INT64_MIN;
int32_t t61 = -13166;
int8_t x395 = INT8_MIN;
uint64_t x396 = 2043149409412083LLU;
volatile int32_t x408 = -105270;
uint64_t x419 = UINT64_MAX;
static int8_t x420 = 1;
static int8_t x428 = -1;
static volatile uint64_t x453 = 24711268249LLU;
static uint64_t x456 = 120526414LLU;
uint64_t x466 = 84401355060383LLU;
int32_t x471 = 15;
int32_t t76 = 3;
static uint8_t x477 = 11U;
int32_t t77 = -121716071;
static volatile uint32_t x484 = 443307478U;
volatile int32_t t78 = 63414;
static int8_t x486 = -1;
volatile int32_t t79 = -430517;
uint64_t x494 = UINT64_MAX;
uint32_t x514 = UINT32_MAX;
volatile int32_t t83 = 6923;
static uint16_t x521 = UINT16_MAX;
volatile int32_t x526 = INT32_MIN;
int16_t x546 = INT16_MAX;
static volatile int32_t t86 = -71;
uint16_t x565 = UINT16_MAX;
volatile uint16_t x567 = 421U;
uint64_t x569 = 8205031671LLU;
volatile int32_t t91 = -22201;
int32_t x586 = -700334;
int32_t t92 = 273;
int8_t x596 = -1;
int64_t x603 = -1LL;
int32_t t95 = 3312;
volatile int16_t x605 = INT16_MIN;
static volatile int32_t x607 = 486;
int64_t x612 = 72LL;
int8_t x617 = 0;
int64_t x620 = -8945LL;
static uint64_t x625 = 8306645592LLU;
int8_t x632 = -1;
int32_t t103 = 18962470;
volatile int32_t x639 = -1;
volatile uint8_t x646 = 93U;
static volatile int32_t x648 = INT32_MAX;
int64_t x668 = INT64_MAX;
uint16_t x696 = UINT16_MAX;
static uint32_t x697 = 12133921U;
int8_t x702 = INT8_MIN;
int32_t t116 = 1;
static volatile int8_t x718 = INT8_MIN;
volatile int32_t x732 = 8;
volatile uint16_t x742 = 86U;
uint32_t x745 = 54U;
int16_t x758 = -80;
static int8_t x768 = INT8_MIN;
int8_t x774 = INT8_MIN;
volatile uint16_t x777 = 5421U;
int16_t x781 = INT16_MIN;
int16_t x789 = INT16_MIN;
int8_t x790 = 4;
int32_t x798 = INT32_MIN;
int8_t x801 = INT8_MAX;
volatile uint16_t x809 = 523U;
int64_t x812 = -414696LL;
volatile int32_t t133 = 82;
volatile uint16_t x822 = 15U;
int8_t x834 = INT8_MIN;
int8_t x853 = INT8_MAX;
int8_t x867 = -1;
static int32_t x877 = -1;
static volatile int32_t t142 = -30;
uint64_t x894 = 99LLU;
int32_t x906 = -1;
int32_t t144 = 1;
int32_t x921 = -1;
int64_t x936 = INT64_MIN;
static volatile int32_t t150 = 13313643;
static volatile int32_t t151 = 250060472;
static int16_t x949 = INT16_MAX;
static int32_t x952 = INT32_MAX;
volatile int32_t t152 = -317;
static int8_t x954 = -9;
int16_t x957 = INT16_MIN;
int32_t t156 = -741802044;
uint16_t x972 = 16602U;
volatile int64_t x976 = INT64_MAX;
int64_t x977 = INT64_MIN;
int64_t x985 = 41703442LL;
int64_t x993 = INT64_MIN;
uint32_t x996 = UINT32_MAX;
int64_t x1011 = INT64_MIN;
static uint8_t x1012 = UINT8_MAX;
int32_t t168 = -3978119;
static volatile int32_t x1023 = -48776;
static volatile int64_t x1026 = -1LL;
int16_t x1035 = -1;
static volatile int64_t x1039 = -950090816641932434LL;
uint16_t x1043 = UINT16_MAX;
int16_t x1047 = INT16_MIN;
volatile int32_t t176 = 35284647;
uint16_t x1064 = 202U;
int32_t t179 = 619645133;
int8_t x1065 = INT8_MIN;
static int64_t x1068 = -1LL;
uint16_t x1071 = 5629U;
static volatile int32_t t181 = -3;
volatile uint8_t x1082 = 3U;
uint32_t x1084 = 176U;
int32_t t184 = 109250053;
static int8_t x1091 = -29;
static volatile int32_t t187 = 665323;
volatile int32_t t188 = 8627486;
static volatile int32_t t189 = 173095;
uint16_t x1105 = UINT16_MAX;
static uint32_t x1106 = UINT32_MAX;
int16_t x1110 = -1;
static int64_t x1112 = INT64_MIN;
static int32_t t191 = -433;
int8_t x1115 = INT8_MIN;
uint8_t x1123 = 1U;
volatile int32_t t194 = 53;
int8_t x1131 = -1;
uint8_t x1133 = 0U;
int8_t x1134 = 9;
int16_t x1135 = -27;
int32_t x1143 = INT32_MIN;
volatile int32_t t197 = -979408876;
uint16_t x1145 = 930U;
uint64_t x1147 = UINT64_MAX;
int32_t t198 = -1999061;


void f0(void) {
    	uint32_t x6 = 0U;
	uint32_t x7 = 1599141U;
	static int64_t x8 = INT64_MIN;
	volatile int32_t t0 = 2950;

    t0 = ((x5*(x6-x7))==x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x13 = UINT32_MAX;
	uint32_t x14 = 479U;
	int32_t x15 = INT32_MIN;
	int32_t t1 = 39682487;

    t1 = ((x13*(x14-x15))==x16);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint64_t x21 = UINT64_MAX;
	int16_t x22 = INT16_MAX;
	volatile uint64_t x23 = UINT64_MAX;

    t2 = ((x21*(x22-x23))==x24);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x25 = 3860U;
	static int16_t x26 = -1;
	int32_t x28 = -2914;

    t3 = ((x25*(x26-x27))==x28);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x29 = INT32_MIN;
	static volatile uint32_t x31 = 214U;
	uint8_t x32 = 1U;

    t4 = ((x29*(x30-x31))==x32);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x41 = 401123314976176956LLU;
	uint8_t x42 = UINT8_MAX;
	int16_t x43 = INT16_MIN;
	static uint16_t x44 = UINT16_MAX;
	static volatile int32_t t5 = 211549984;

    t5 = ((x41*(x42-x43))==x44);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x45 = -44;
	static uint32_t x46 = 101651U;
	uint64_t x47 = UINT64_MAX;
	int16_t x48 = INT16_MIN;
	volatile int32_t t6 = 134667720;

    t6 = ((x45*(x46-x47))==x48);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x54 = 6;
	int16_t x56 = 1;
	int32_t t7 = 54597875;

    t7 = ((x53*(x54-x55))==x56);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x57 = INT16_MIN;
	int16_t x58 = -1;
	int8_t x59 = INT8_MAX;
	uint64_t x60 = UINT64_MAX;
	static volatile int32_t t8 = -469228;

    t8 = ((x57*(x58-x59))==x60);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x61 = UINT32_MAX;
	uint32_t x62 = 2U;
	uint32_t x63 = 13U;
	static volatile int32_t t9 = -951514898;

    t9 = ((x61*(x62-x63))==x64);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x69 = INT32_MIN;
	int64_t x70 = 25668380937688572LL;
	uint64_t x71 = 3324728146775LLU;
	volatile int8_t x72 = INT8_MAX;
	volatile int32_t t10 = -17388610;

    t10 = ((x69*(x70-x71))==x72);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x75 = -3591822;
	int64_t x76 = -12250919874898920LL;
	int32_t t11 = -12046117;

    t11 = ((x73*(x74-x75))==x76);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x77 = 0U;
	int32_t x78 = -689;
	uint64_t x79 = 16973543072340LLU;
	static int32_t x80 = -1;
	volatile int32_t t12 = -396649;

    t12 = ((x77*(x78-x79))==x80);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x85 = INT64_MIN;
	uint16_t x86 = 18U;
	uint64_t x87 = 754LLU;
	int32_t x88 = INT32_MIN;
	static volatile int32_t t13 = -19;

    t13 = ((x85*(x86-x87))==x88);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x89 = 12U;
	static int16_t x90 = INT16_MIN;
	int8_t x91 = 3;
	int32_t x92 = INT32_MIN;
	volatile int32_t t14 = -10296224;

    t14 = ((x89*(x90-x91))==x92);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x97 = 7U;
	static volatile uint32_t x99 = UINT32_MAX;
	static uint16_t x100 = UINT16_MAX;
	static volatile int32_t t15 = 1043311;

    t15 = ((x97*(x98-x99))==x100);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x102 = INT16_MIN;
	int64_t x103 = INT64_MIN;
	int32_t x104 = INT32_MIN;

    t16 = ((x101*(x102-x103))==x104);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x105 = INT8_MAX;
	int64_t x106 = 13707115LL;
	int32_t x107 = 4148802;
	uint64_t x108 = 4162363024510LLU;
	static int32_t t17 = 31;

    t17 = ((x105*(x106-x107))==x108);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x109 = -1LL;
	int64_t x110 = -1LL;
	int64_t x111 = INT64_MIN;
	int16_t x112 = INT16_MIN;
	static volatile int32_t t18 = 1;

    t18 = ((x109*(x110-x111))==x112);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x113 = 36U;
	static int16_t x114 = INT16_MIN;
	int64_t x115 = -1LL;
	int64_t x116 = 133846LL;
	int32_t t19 = 1;

    t19 = ((x113*(x114-x115))==x116);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x125 = -1;
	uint8_t x126 = 3U;
	static volatile int32_t x127 = INT32_MAX;

    t20 = ((x125*(x126-x127))==x128);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x129 = 24;
	volatile int64_t x130 = 63LL;
	uint64_t x131 = 25449459222LLU;
	static volatile int64_t x132 = 1625585940498444945LL;
	int32_t t21 = -1825;

    t21 = ((x129*(x130-x131))==x132);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x133 = 85U;
	int16_t x134 = -3;
	int32_t x136 = 810321;
	volatile int32_t t22 = 403412559;

    t22 = ((x133*(x134-x135))==x136);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x141 = -1LL;
	uint32_t x142 = 1487404U;
	int64_t x143 = 229475120792957489LL;
	static int8_t x144 = 2;

    t23 = ((x141*(x142-x143))==x144);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x145 = INT16_MIN;
	static volatile int16_t x146 = INT16_MAX;
	static uint16_t x147 = 26155U;
	uint32_t x148 = 615U;
	int32_t t24 = -367359;

    t24 = ((x145*(x146-x147))==x148);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x149 = INT8_MIN;
	volatile uint64_t x150 = UINT64_MAX;
	uint16_t x151 = UINT16_MAX;
	volatile uint64_t x152 = UINT64_MAX;
	int32_t t25 = -566;

    t25 = ((x149*(x150-x151))==x152);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x157 = INT8_MIN;
	static int64_t x159 = 12550895872LL;
	int8_t x160 = -1;

    t26 = ((x157*(x158-x159))==x160);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x161 = INT8_MIN;
	int64_t x162 = INT64_MIN;
	static int64_t x163 = INT64_MIN;
	int32_t x164 = -68533;
	int32_t t27 = 192097;

    t27 = ((x161*(x162-x163))==x164);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x165 = INT8_MIN;
	int8_t x166 = -1;
	volatile uint32_t x167 = UINT32_MAX;
	uint64_t x168 = 32LLU;
	volatile int32_t t28 = -1072901;

    t28 = ((x165*(x166-x167))==x168);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x173 = -11;
	static uint32_t x174 = UINT32_MAX;
	int16_t x176 = INT16_MAX;
	int32_t t29 = -2208140;

    t29 = ((x173*(x174-x175))==x176);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x181 = 60;
	static uint8_t x182 = 1U;
	uint32_t x183 = 7U;

    t30 = ((x181*(x182-x183))==x184);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x187 = 4112U;
	int32_t x188 = INT32_MIN;
	volatile int32_t t31 = 386;

    t31 = ((x185*(x186-x187))==x188);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x189 = 1;
	uint16_t x190 = 0U;
	int16_t x191 = -1;
	int8_t x192 = -1;

    t32 = ((x189*(x190-x191))==x192);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x193 = 190U;
	static uint32_t x194 = UINT32_MAX;
	int8_t x195 = -10;
	int32_t t33 = -123395697;

    t33 = ((x193*(x194-x195))==x196);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x198 = INT64_MIN;
	static uint16_t x200 = 13U;
	int32_t t34 = 187957153;

    t34 = ((x197*(x198-x199))==x200);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x201 = INT32_MIN;
	volatile int64_t x203 = -1LL;
	int32_t x204 = -1;
	int32_t t35 = 479925876;

    t35 = ((x201*(x202-x203))==x204);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x205 = -1;
	static int32_t x207 = INT32_MIN;
	int32_t x208 = INT32_MIN;
	static int32_t t36 = -32663758;

    t36 = ((x205*(x206-x207))==x208);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x209 = 17340U;
	int16_t x210 = -1;
	int8_t x212 = -1;
	static volatile int32_t t37 = 680;

    t37 = ((x209*(x210-x211))==x212);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x217 = -1;
	int8_t x218 = -1;
	static volatile int16_t x219 = INT16_MIN;
	uint32_t x220 = UINT32_MAX;
	volatile int32_t t38 = 215145708;

    t38 = ((x217*(x218-x219))==x220);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x221 = 0;
	int16_t x222 = INT16_MIN;
	volatile int8_t x223 = 1;
	int32_t t39 = 23;

    t39 = ((x221*(x222-x223))==x224);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x233 = 56LLU;
	uint32_t x234 = 28023358U;
	int64_t x235 = -891321554368110LL;
	volatile uint32_t x236 = UINT32_MAX;
	static int32_t t40 = 615;

    t40 = ((x233*(x234-x235))==x236);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x237 = INT16_MIN;
	int16_t x238 = INT16_MIN;
	int64_t x240 = INT64_MIN;
	volatile int32_t t41 = -9730;

    t41 = ((x237*(x238-x239))==x240);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x241 = 22415691LLU;
	volatile uint64_t x242 = 1946LLU;
	int64_t x243 = INT64_MIN;
	int64_t x244 = INT64_MIN;
	volatile int32_t t42 = -11765;

    t42 = ((x241*(x242-x243))==x244);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x246 = INT16_MIN;
	int64_t x247 = -1LL;
	volatile int32_t t43 = -14;

    t43 = ((x245*(x246-x247))==x248);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x261 = INT32_MIN;
	uint32_t x263 = 63U;
	static int8_t x264 = INT8_MIN;
	volatile int32_t t44 = 57710;

    t44 = ((x261*(x262-x263))==x264);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x265 = UINT32_MAX;
	volatile uint8_t x266 = 0U;
	int32_t t45 = -212846316;

    t45 = ((x265*(x266-x267))==x268);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x269 = -17;
	uint32_t x270 = UINT32_MAX;
	static uint64_t x271 = UINT64_MAX;
	static int64_t x272 = INT64_MAX;
	int32_t t46 = -16100158;

    t46 = ((x269*(x270-x271))==x272);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x281 = -1;
	static uint32_t x282 = 227573863U;
	volatile int16_t x284 = INT16_MIN;
	volatile int32_t t47 = -1729;

    t47 = ((x281*(x282-x283))==x284);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x297 = -1;
	int64_t x298 = 106LL;
	uint64_t x300 = 102647559637446527LLU;
	static int32_t t48 = 291689;

    t48 = ((x297*(x298-x299))==x300);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x305 = 24U;
	int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MIN;
	static int16_t x308 = -852;
	static int32_t t49 = 92;

    t49 = ((x305*(x306-x307))==x308);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x309 = 1;
	uint16_t x310 = UINT16_MAX;
	uint32_t x311 = UINT32_MAX;
	volatile int64_t x312 = -3622321402LL;

    t50 = ((x309*(x310-x311))==x312);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x313 = 402LLU;
	static int64_t x314 = -14119837LL;
	int64_t x315 = 13336552731175LL;
	volatile int32_t x316 = -113088;
	volatile int32_t t51 = 22276512;

    t51 = ((x313*(x314-x315))==x316);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x321 = 1;
	static uint64_t x322 = UINT64_MAX;
	int32_t x323 = INT32_MIN;
	int64_t x324 = INT64_MIN;
	int32_t t52 = -682872;

    t52 = ((x321*(x322-x323))==x324);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x329 = INT8_MIN;
	uint32_t x330 = 469147394U;
	static volatile int32_t x332 = INT32_MIN;
	static volatile int32_t t53 = -3090603;

    t53 = ((x329*(x330-x331))==x332);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x333 = UINT8_MAX;
	int16_t x334 = -3;
	static volatile int16_t x335 = INT16_MIN;
	static int16_t x336 = INT16_MAX;
	static volatile int32_t t54 = -3;

    t54 = ((x333*(x334-x335))==x336);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x349 = 0U;
	int16_t x350 = -1;
	int32_t x351 = 1811;
	static int32_t t55 = 10522;

    t55 = ((x349*(x350-x351))==x352);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x353 = INT16_MIN;
	static volatile int8_t x354 = INT8_MIN;
	uint8_t x355 = UINT8_MAX;
	int64_t x356 = INT64_MIN;
	int32_t t56 = 0;

    t56 = ((x353*(x354-x355))==x356);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x365 = -20;
	int8_t x366 = -1;
	uint16_t x368 = 75U;
	static volatile int32_t t57 = -176;

    t57 = ((x365*(x366-x367))==x368);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x369 = -3287;
	int32_t x370 = INT32_MIN;
	volatile int64_t x371 = 4075LL;
	volatile uint64_t x372 = 351167LLU;
	volatile int32_t t58 = 247785657;

    t58 = ((x369*(x370-x371))==x372);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x373 = 31U;
	int16_t x374 = INT16_MIN;
	int8_t x376 = INT8_MIN;

    t59 = ((x373*(x374-x375))==x376);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x377 = UINT64_MAX;
	int64_t x378 = -393985667803LL;
	uint32_t x379 = 231U;
	int32_t x380 = -15022228;

    t60 = ((x377*(x378-x379))==x380);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x381 = INT32_MAX;
	uint64_t x383 = UINT64_MAX;
	static volatile int64_t x384 = INT64_MIN;

    t61 = ((x381*(x382-x383))==x384);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x389 = INT8_MIN;
	uint8_t x390 = 21U;
	uint8_t x391 = UINT8_MAX;
	int16_t x392 = 101;
	int32_t t62 = 6375627;

    t62 = ((x389*(x390-x391))==x392);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x393 = -1;
	static int32_t x394 = INT32_MIN;
	volatile int32_t t63 = -2;

    t63 = ((x393*(x394-x395))==x396);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x397 = INT32_MIN;
	int16_t x398 = INT16_MIN;
	uint32_t x399 = 112889U;
	int64_t x400 = -114528621425910LL;
	volatile int32_t t64 = -5311146;

    t64 = ((x397*(x398-x399))==x400);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x401 = UINT32_MAX;
	uint8_t x402 = UINT8_MAX;
	uint32_t x403 = 634922398U;
	int8_t x404 = INT8_MIN;
	int32_t t65 = -75;

    t65 = ((x401*(x402-x403))==x404);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x405 = -1;
	uint16_t x406 = 48U;
	static volatile uint16_t x407 = 3U;
	int32_t t66 = 171289;

    t66 = ((x405*(x406-x407))==x408);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x417 = 160996671558LLU;
	int32_t x418 = INT32_MIN;
	int32_t t67 = -26;

    t67 = ((x417*(x418-x419))==x420);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x425 = INT16_MAX;
	int32_t x426 = -517;
	int8_t x427 = INT8_MAX;
	int32_t t68 = -40746703;

    t68 = ((x425*(x426-x427))==x428);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x429 = -1;
	int8_t x430 = INT8_MIN;
	int32_t x431 = INT32_MIN;
	int32_t x432 = INT32_MAX;
	volatile int32_t t69 = 162;

    t69 = ((x429*(x430-x431))==x432);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x437 = -1;
	volatile int8_t x438 = INT8_MAX;
	static uint8_t x439 = 11U;
	volatile int32_t x440 = INT32_MIN;
	int32_t t70 = -6;

    t70 = ((x437*(x438-x439))==x440);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x449 = UINT64_MAX;
	int64_t x450 = INT64_MIN;
	uint8_t x451 = 0U;
	int8_t x452 = -13;
	static int32_t t71 = 65438;

    t71 = ((x449*(x450-x451))==x452);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x454 = INT8_MIN;
	int16_t x455 = INT16_MIN;
	int32_t t72 = -29;

    t72 = ((x453*(x454-x455))==x456);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x461 = UINT8_MAX;
	static volatile int16_t x462 = -1;
	int16_t x463 = INT16_MAX;
	uint64_t x464 = 212222369826067LLU;
	volatile int32_t t73 = -1;

    t73 = ((x461*(x462-x463))==x464);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x465 = INT64_MAX;
	int16_t x467 = INT16_MAX;
	static uint64_t x468 = 2610157808006413LLU;
	int32_t t74 = 8524;

    t74 = ((x465*(x466-x467))==x468);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x469 = 130U;
	int8_t x470 = -1;
	static uint16_t x472 = 54U;
	volatile int32_t t75 = -2503;

    t75 = ((x469*(x470-x471))==x472);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x473 = UINT64_MAX;
	static uint16_t x474 = 537U;
	int8_t x475 = 3;
	int32_t x476 = INT32_MIN;

    t76 = ((x473*(x474-x475))==x476);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x478 = -1LL;
	static uint64_t x479 = 2LLU;
	int64_t x480 = INT64_MIN;

    t77 = ((x477*(x478-x479))==x480);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x481 = INT32_MIN;
	static int8_t x482 = INT8_MIN;
	uint64_t x483 = UINT64_MAX;

    t78 = ((x481*(x482-x483))==x484);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x485 = 1LL;
	volatile int64_t x487 = INT64_MAX;
	int32_t x488 = INT32_MIN;

    t79 = ((x485*(x486-x487))==x488);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x493 = 3335113289LLU;
	static volatile int64_t x495 = 1056589344047973LL;
	uint8_t x496 = 0U;
	static int32_t t80 = 1;

    t80 = ((x493*(x494-x495))==x496);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x501 = -1;
	int64_t x502 = -1LL;
	static int64_t x503 = -1LL;
	int16_t x504 = -1;
	volatile int32_t t81 = 1;

    t81 = ((x501*(x502-x503))==x504);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x505 = 3295;
	uint16_t x506 = UINT16_MAX;
	uint16_t x507 = UINT16_MAX;
	volatile int16_t x508 = INT16_MIN;
	volatile int32_t t82 = 37;

    t82 = ((x505*(x506-x507))==x508);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x513 = INT32_MAX;
	int32_t x515 = INT32_MIN;
	volatile int64_t x516 = INT64_MIN;

    t83 = ((x513*(x514-x515))==x516);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x522 = 116LL;
	uint64_t x523 = 130570292766846978LLU;
	int16_t x524 = INT16_MIN;
	static volatile int32_t t84 = 20743210;

    t84 = ((x521*(x522-x523))==x524);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x525 = -1;
	uint32_t x527 = UINT32_MAX;
	int32_t x528 = INT32_MAX;
	volatile int32_t t85 = 0;

    t85 = ((x525*(x526-x527))==x528);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x545 = -1;
	int8_t x547 = INT8_MIN;
	int32_t x548 = -57872540;

    t86 = ((x545*(x546-x547))==x548);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x549 = 32;
	volatile int8_t x550 = INT8_MAX;
	int16_t x551 = INT16_MAX;
	uint8_t x552 = 0U;
	static volatile int32_t t87 = 421;

    t87 = ((x549*(x550-x551))==x552);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x557 = UINT32_MAX;
	int8_t x558 = -1;
	int32_t x559 = INT32_MIN;
	int64_t x560 = INT64_MIN;
	static int32_t t88 = -270906369;

    t88 = ((x557*(x558-x559))==x560);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x566 = INT8_MIN;
	int32_t x568 = -1;
	volatile int32_t t89 = 111;

    t89 = ((x565*(x566-x567))==x568);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x570 = 4026843228028074LLU;
	static uint64_t x571 = 1507884175LLU;
	int8_t x572 = -23;
	volatile int32_t t90 = -787549;

    t90 = ((x569*(x570-x571))==x572);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x577 = 25835934059121LLU;
	int8_t x578 = INT8_MIN;
	volatile uint8_t x579 = 5U;
	static volatile int8_t x580 = -1;

    t91 = ((x577*(x578-x579))==x580);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x585 = 413275LL;
	int16_t x587 = INT16_MIN;
	volatile int64_t x588 = -336110377542540LL;

    t92 = ((x585*(x586-x587))==x588);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x589 = -86085931;
	int32_t x590 = -1;
	static int8_t x591 = 1;
	static volatile int64_t x592 = 106LL;
	int32_t t93 = -3929438;

    t93 = ((x589*(x590-x591))==x592);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x593 = UINT32_MAX;
	int8_t x594 = 11;
	int8_t x595 = INT8_MIN;
	static int32_t t94 = -1;

    t94 = ((x593*(x594-x595))==x596);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x601 = -1;
	static volatile int8_t x602 = -1;
	volatile int16_t x604 = -1;

    t95 = ((x601*(x602-x603))==x604);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x606 = INT16_MIN;
	int16_t x608 = INT16_MIN;
	volatile int32_t t96 = -160;

    t96 = ((x605*(x606-x607))==x608);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x609 = UINT16_MAX;
	static int64_t x610 = -1LL;
	int8_t x611 = -6;
	static int32_t t97 = 79247;

    t97 = ((x609*(x610-x611))==x612);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x613 = -11;
	int16_t x614 = INT16_MIN;
	volatile uint32_t x615 = UINT32_MAX;
	int16_t x616 = 0;
	int32_t t98 = 3213242;

    t98 = ((x613*(x614-x615))==x616);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x618 = -63;
	int32_t x619 = INT32_MIN;
	static volatile int32_t t99 = 780991;

    t99 = ((x617*(x618-x619))==x620);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x621 = UINT8_MAX;
	uint8_t x622 = 0U;
	volatile uint64_t x623 = 14765494957420LLU;
	uint16_t x624 = UINT16_MAX;
	int32_t t100 = -170;

    t100 = ((x621*(x622-x623))==x624);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x626 = UINT16_MAX;
	int32_t x627 = 4410814;
	int16_t x628 = INT16_MIN;
	volatile int32_t t101 = -644992;

    t101 = ((x625*(x626-x627))==x628);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x629 = -1;
	int8_t x630 = INT8_MIN;
	uint32_t x631 = 378168U;
	int32_t t102 = -5265;

    t102 = ((x629*(x630-x631))==x632);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x633 = 30U;
	static uint64_t x634 = 2766084687289614LLU;
	int64_t x635 = -1LL;
	int16_t x636 = -1;

    t103 = ((x633*(x634-x635))==x636);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x637 = -67;
	int64_t x638 = -122924417134663LL;
	uint32_t x640 = 443U;
	int32_t t104 = -383445;

    t104 = ((x637*(x638-x639))==x640);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x641 = 743414555U;
	int16_t x642 = 7;
	static int8_t x643 = INT8_MAX;
	int32_t x644 = -1;
	int32_t t105 = -262127;

    t105 = ((x641*(x642-x643))==x644);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x645 = 1998733589U;
	int8_t x647 = 0;
	int32_t t106 = 53359;

    t106 = ((x645*(x646-x647))==x648);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int32_t x653 = -108211318;
	volatile int64_t x654 = -1LL;
	uint8_t x655 = 3U;
	uint32_t x656 = 13U;
	static volatile int32_t t107 = 100815936;

    t107 = ((x653*(x654-x655))==x656);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x657 = INT32_MAX;
	static int8_t x658 = 1;
	int64_t x659 = -1LL;
	static volatile int64_t x660 = INT64_MIN;
	int32_t t108 = 979;

    t108 = ((x657*(x658-x659))==x660);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x665 = 2298070954LL;
	int16_t x666 = INT16_MAX;
	static uint8_t x667 = 6U;
	int32_t t109 = -22396780;

    t109 = ((x665*(x666-x667))==x668);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x673 = 94U;
	int64_t x674 = 4563520436470LL;
	int64_t x675 = 211881565990940LL;
	int32_t x676 = INT32_MIN;
	volatile int32_t t110 = -502139048;

    t110 = ((x673*(x674-x675))==x676);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x681 = -1;
	int32_t x682 = -1;
	int64_t x683 = INT64_MIN;
	int32_t x684 = INT32_MIN;
	int32_t t111 = -3;

    t111 = ((x681*(x682-x683))==x684);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x689 = -1;
	volatile int32_t x690 = -1461917;
	int64_t x691 = -386854LL;
	static uint8_t x692 = 103U;
	volatile int32_t t112 = 6926802;

    t112 = ((x689*(x690-x691))==x692);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x693 = 127;
	volatile int32_t x694 = -1;
	uint64_t x695 = 217437543LLU;
	int32_t t113 = -30936960;

    t113 = ((x693*(x694-x695))==x696);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x698 = 4074U;
	int64_t x699 = -1LL;
	volatile int16_t x700 = INT16_MIN;
	volatile int32_t t114 = -2528302;

    t114 = ((x697*(x698-x699))==x700);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x701 = 1241550U;
	uint64_t x703 = 97LLU;
	int64_t x704 = INT64_MAX;
	int32_t t115 = 2112825;

    t115 = ((x701*(x702-x703))==x704);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x709 = INT16_MIN;
	uint64_t x710 = UINT64_MAX;
	int64_t x711 = -1LL;
	uint16_t x712 = 23810U;

    t116 = ((x709*(x710-x711))==x712);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x717 = UINT32_MAX;
	int64_t x719 = 16230326LL;
	int16_t x720 = INT16_MIN;
	int32_t t117 = 6995374;

    t117 = ((x717*(x718-x719))==x720);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x729 = INT16_MAX;
	uint8_t x730 = 13U;
	uint16_t x731 = UINT16_MAX;
	int32_t t118 = 59534;

    t118 = ((x729*(x730-x731))==x732);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x733 = -454842927;
	int64_t x734 = -1LL;
	int32_t x735 = -1;
	volatile int64_t x736 = -7142293299966305LL;
	int32_t t119 = 4145;

    t119 = ((x733*(x734-x735))==x736);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x741 = 3U;
	uint8_t x743 = UINT8_MAX;
	int16_t x744 = INT16_MIN;
	volatile int32_t t120 = -36712;

    t120 = ((x741*(x742-x743))==x744);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x746 = 40U;
	static int64_t x747 = -91147948176860LL;
	int16_t x748 = INT16_MIN;
	static int32_t t121 = 58918;

    t121 = ((x745*(x746-x747))==x748);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x757 = 0U;
	static int8_t x759 = INT8_MIN;
	uint32_t x760 = UINT32_MAX;
	int32_t t122 = -58783553;

    t122 = ((x757*(x758-x759))==x760);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x761 = INT16_MIN;
	int32_t x762 = -1;
	int8_t x763 = -1;
	static int32_t x764 = 16;
	volatile int32_t t123 = -222832;

    t123 = ((x761*(x762-x763))==x764);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x765 = INT16_MIN;
	uint64_t x766 = 23557235291LLU;
	static uint64_t x767 = UINT64_MAX;
	volatile int32_t t124 = -61;

    t124 = ((x765*(x766-x767))==x768);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x769 = 2U;
	volatile uint64_t x770 = UINT64_MAX;
	int16_t x771 = -1;
	volatile int32_t x772 = INT32_MAX;
	int32_t t125 = 12652648;

    t125 = ((x769*(x770-x771))==x772);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x773 = -1;
	int64_t x775 = INT64_MIN;
	int64_t x776 = -69621219386LL;
	volatile int32_t t126 = -110453;

    t126 = ((x773*(x774-x775))==x776);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x778 = -1LL;
	int8_t x779 = INT8_MIN;
	int8_t x780 = 11;
	volatile int32_t t127 = 768;

    t127 = ((x777*(x778-x779))==x780);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x782 = 1393087819U;
	uint64_t x783 = UINT64_MAX;
	int8_t x784 = INT8_MIN;
	volatile int32_t t128 = -9756;

    t128 = ((x781*(x782-x783))==x784);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x785 = -1LL;
	int64_t x786 = -379835886175596537LL;
	int64_t x787 = -99651895802877090LL;
	static uint32_t x788 = 4389185U;
	volatile int32_t t129 = -7771;

    t129 = ((x785*(x786-x787))==x788);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x791 = 248U;
	int16_t x792 = INT16_MIN;
	volatile int32_t t130 = -139;

    t130 = ((x789*(x790-x791))==x792);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x797 = INT8_MIN;
	volatile int64_t x799 = -1005LL;
	static uint16_t x800 = 27644U;
	int32_t t131 = -519272;

    t131 = ((x797*(x798-x799))==x800);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x802 = -1;
	volatile int8_t x803 = 1;
	static volatile uint64_t x804 = 7LLU;
	volatile int32_t t132 = 0;

    t132 = ((x801*(x802-x803))==x804);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x810 = 6077U;
	uint64_t x811 = UINT64_MAX;

    t133 = ((x809*(x810-x811))==x812);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x813 = UINT32_MAX;
	int8_t x814 = INT8_MIN;
	volatile int32_t x815 = 30846159;
	int16_t x816 = 1420;
	int32_t t134 = -5016;

    t134 = ((x813*(x814-x815))==x816);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x821 = 12;
	uint32_t x823 = UINT32_MAX;
	int16_t x824 = INT16_MIN;
	int32_t t135 = 16303904;

    t135 = ((x821*(x822-x823))==x824);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x833 = INT16_MIN;
	int8_t x835 = INT8_MIN;
	uint64_t x836 = 14798028LLU;
	static int32_t t136 = 0;

    t136 = ((x833*(x834-x835))==x836);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x854 = INT32_MAX;
	static volatile int64_t x855 = -192LL;
	int64_t x856 = INT64_MIN;
	int32_t t137 = 2338145;

    t137 = ((x853*(x854-x855))==x856);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x865 = 14;
	int32_t x866 = -1;
	static int64_t x868 = 5414392397321516LL;
	int32_t t138 = -60;

    t138 = ((x865*(x866-x867))==x868);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x873 = INT16_MIN;
	int16_t x874 = INT16_MIN;
	static volatile uint32_t x875 = UINT32_MAX;
	int16_t x876 = INT16_MAX;
	int32_t t139 = 1372;

    t139 = ((x873*(x874-x875))==x876);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x878 = 540727;
	int32_t x879 = 0;
	static uint32_t x880 = 0U;
	static int32_t t140 = -7041628;

    t140 = ((x877*(x878-x879))==x880);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x885 = 11;
	uint16_t x886 = 30U;
	uint32_t x887 = 115U;
	volatile uint8_t x888 = 0U;
	static int32_t t141 = -3646;

    t141 = ((x885*(x886-x887))==x888);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x889 = 1;
	static uint64_t x890 = UINT64_MAX;
	uint64_t x891 = 206626LLU;
	static volatile int16_t x892 = INT16_MIN;

    t142 = ((x889*(x890-x891))==x892);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x893 = INT32_MIN;
	static int32_t x895 = INT32_MIN;
	volatile int8_t x896 = 1;
	static int32_t t143 = -747882090;

    t143 = ((x893*(x894-x895))==x896);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x905 = -1;
	int8_t x907 = -1;
	int64_t x908 = INT64_MIN;

    t144 = ((x905*(x906-x907))==x908);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x913 = INT16_MIN;
	volatile int64_t x914 = INT64_MIN;
	volatile uint64_t x915 = 3LLU;
	int8_t x916 = 6;
	static int32_t t145 = -166662;

    t145 = ((x913*(x914-x915))==x916);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x917 = 5;
	static int32_t x918 = 28946129;
	uint8_t x919 = 96U;
	int32_t x920 = INT32_MAX;
	int32_t t146 = 8;

    t146 = ((x917*(x918-x919))==x920);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x922 = INT8_MIN;
	volatile int16_t x923 = INT16_MIN;
	uint8_t x924 = 48U;
	volatile int32_t t147 = -8400377;

    t147 = ((x921*(x922-x923))==x924);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x933 = 99U;
	uint16_t x934 = 0U;
	static int16_t x935 = INT16_MIN;
	volatile int32_t t148 = 2;

    t148 = ((x933*(x934-x935))==x936);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x937 = -1LL;
	volatile int16_t x938 = -1;
	int64_t x939 = INT64_MIN;
	static uint32_t x940 = UINT32_MAX;
	int32_t t149 = 57407;

    t149 = ((x937*(x938-x939))==x940);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x941 = UINT8_MAX;
	volatile int32_t x942 = INT32_MAX;
	uint64_t x943 = 450842401500909986LLU;
	int16_t x944 = 1;

    t150 = ((x941*(x942-x943))==x944);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x945 = UINT64_MAX;
	int16_t x946 = INT16_MIN;
	int64_t x947 = -3488LL;
	static int64_t x948 = INT64_MIN;

    t151 = ((x945*(x946-x947))==x948);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x950 = -1;
	uint32_t x951 = 1397214U;

    t152 = ((x949*(x950-x951))==x952);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x953 = 10U;
	static uint8_t x955 = UINT8_MAX;
	static volatile uint64_t x956 = UINT64_MAX;
	int32_t t153 = -1018;

    t153 = ((x953*(x954-x955))==x956);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x958 = UINT32_MAX;
	int64_t x959 = 7771886402LL;
	static int64_t x960 = -1LL;
	static volatile int32_t t154 = 11;

    t154 = ((x957*(x958-x959))==x960);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x961 = INT32_MIN;
	volatile uint64_t x962 = UINT64_MAX;
	volatile uint32_t x963 = 647975679U;
	int32_t x964 = -125964242;
	int32_t t155 = -125480894;

    t155 = ((x961*(x962-x963))==x964);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x965 = 45;
	int8_t x966 = INT8_MIN;
	static volatile uint8_t x967 = 1U;
	int64_t x968 = 270887LL;

    t156 = ((x965*(x966-x967))==x968);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x969 = INT32_MAX;
	volatile int16_t x970 = INT16_MIN;
	static uint64_t x971 = UINT64_MAX;
	volatile int32_t t157 = 22;

    t157 = ((x969*(x970-x971))==x972);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x973 = INT16_MIN;
	int16_t x974 = INT16_MIN;
	int32_t x975 = -1;
	static int32_t t158 = -9496;

    t158 = ((x973*(x974-x975))==x976);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x978 = 8U;
	static uint64_t x979 = 102511025LLU;
	int8_t x980 = -1;
	int32_t t159 = -17402;

    t159 = ((x977*(x978-x979))==x980);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x981 = UINT16_MAX;
	int8_t x982 = INT8_MIN;
	uint16_t x983 = 31U;
	static int64_t x984 = INT64_MAX;
	static int32_t t160 = 197;

    t160 = ((x981*(x982-x983))==x984);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x986 = 1U;
	uint64_t x987 = 16610198868184LLU;
	int16_t x988 = INT16_MIN;
	volatile int32_t t161 = 4;

    t161 = ((x985*(x986-x987))==x988);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x989 = INT64_MAX;
	volatile uint64_t x990 = 2927367438LLU;
	volatile int8_t x991 = INT8_MIN;
	int64_t x992 = -275067307866LL;
	volatile int32_t t162 = 225713285;

    t162 = ((x989*(x990-x991))==x992);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x994 = INT32_MIN;
	uint64_t x995 = 3908632698336479LLU;
	volatile int32_t t163 = -1;

    t163 = ((x993*(x994-x995))==x996);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x997 = -1;
	uint8_t x998 = 13U;
	uint8_t x999 = 3U;
	uint16_t x1000 = UINT16_MAX;
	int32_t t164 = 38171;

    t164 = ((x997*(x998-x999))==x1000);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x1001 = 25U;
	uint16_t x1002 = 1U;
	int8_t x1003 = INT8_MIN;
	int8_t x1004 = 1;
	int32_t t165 = 119471;

    t165 = ((x1001*(x1002-x1003))==x1004);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x1005 = 39U;
	int8_t x1006 = INT8_MIN;
	static int16_t x1007 = -4;
	int16_t x1008 = INT16_MAX;
	volatile int32_t t166 = 6375389;

    t166 = ((x1005*(x1006-x1007))==x1008);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1009 = -1;
	int64_t x1010 = -1LL;
	int32_t t167 = -3294;

    t167 = ((x1009*(x1010-x1011))==x1012);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x1013 = 413930947LLU;
	int64_t x1014 = -48175943LL;
	static int64_t x1015 = 1603478981575LL;
	volatile int32_t x1016 = INT32_MIN;

    t168 = ((x1013*(x1014-x1015))==x1016);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1017 = -13443;
	int8_t x1018 = 1;
	int8_t x1019 = -1;
	static uint8_t x1020 = 7U;
	volatile int32_t t169 = -18031551;

    t169 = ((x1017*(x1018-x1019))==x1020);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1021 = 4040U;
	int16_t x1022 = 150;
	volatile int8_t x1024 = INT8_MAX;
	volatile int32_t t170 = 4;

    t170 = ((x1021*(x1022-x1023))==x1024);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1025 = 73;
	volatile int32_t x1027 = 12255;
	uint64_t x1028 = 56551LLU;
	volatile int32_t t171 = 0;

    t171 = ((x1025*(x1026-x1027))==x1028);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x1029 = -2;
	int8_t x1030 = -1;
	uint8_t x1031 = 22U;
	volatile uint32_t x1032 = UINT32_MAX;
	int32_t t172 = -166912503;

    t172 = ((x1029*(x1030-x1031))==x1032);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1033 = 56;
	int8_t x1034 = 20;
	int64_t x1036 = 51LL;
	volatile int32_t t173 = 447470;

    t173 = ((x1033*(x1034-x1035))==x1036);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x1037 = 3U;
	int8_t x1038 = -1;
	static volatile uint64_t x1040 = 28981697LLU;
	int32_t t174 = -2450;

    t174 = ((x1037*(x1038-x1039))==x1040);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint8_t x1041 = 1U;
	int8_t x1042 = INT8_MIN;
	int32_t x1044 = INT32_MIN;
	volatile int32_t t175 = -1036021999;

    t175 = ((x1041*(x1042-x1043))==x1044);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x1045 = -158;
	volatile uint8_t x1046 = UINT8_MAX;
	volatile int64_t x1048 = INT64_MIN;

    t176 = ((x1045*(x1046-x1047))==x1048);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1049 = INT8_MIN;
	int32_t x1050 = 1668553;
	static int64_t x1051 = -1LL;
	int8_t x1052 = INT8_MIN;
	int32_t t177 = 354843463;

    t177 = ((x1049*(x1050-x1051))==x1052);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1053 = INT8_MAX;
	uint32_t x1054 = 19733U;
	static int8_t x1055 = INT8_MAX;
	static uint8_t x1056 = 1U;
	volatile int32_t t178 = 7;

    t178 = ((x1053*(x1054-x1055))==x1056);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x1061 = 7872U;
	uint64_t x1062 = UINT64_MAX;
	uint32_t x1063 = UINT32_MAX;

    t179 = ((x1061*(x1062-x1063))==x1064);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1066 = 16106404053LLU;
	int32_t x1067 = INT32_MIN;
	int32_t t180 = 1;

    t180 = ((x1065*(x1066-x1067))==x1068);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1069 = 2U;
	static int16_t x1070 = -1;
	uint16_t x1072 = 6U;

    t181 = ((x1069*(x1070-x1071))==x1072);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x1073 = UINT8_MAX;
	uint8_t x1074 = 15U;
	uint32_t x1075 = 382634U;
	volatile uint16_t x1076 = UINT16_MAX;
	volatile int32_t t182 = 76;

    t182 = ((x1073*(x1074-x1075))==x1076);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1077 = -1LL;
	static volatile int16_t x1078 = -1;
	int32_t x1079 = INT32_MIN;
	uint32_t x1080 = UINT32_MAX;
	int32_t t183 = 10644727;

    t183 = ((x1077*(x1078-x1079))==x1080);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x1081 = 10U;
	uint32_t x1083 = 9675208U;

    t184 = ((x1081*(x1082-x1083))==x1084);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1085 = UINT64_MAX;
	uint16_t x1086 = 47U;
	uint16_t x1087 = 153U;
	uint8_t x1088 = 1U;
	static int32_t t185 = 166830272;

    t185 = ((x1085*(x1086-x1087))==x1088);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x1089 = -2915LL;
	uint8_t x1090 = 52U;
	volatile int8_t x1092 = -1;
	int32_t t186 = 8;

    t186 = ((x1089*(x1090-x1091))==x1092);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1093 = 1U;
	int64_t x1094 = -1LL;
	int32_t x1095 = -1;
	uint8_t x1096 = 90U;

    t187 = ((x1093*(x1094-x1095))==x1096);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x1097 = 17U;
	volatile int16_t x1098 = 1477;
	int8_t x1099 = -1;
	uint16_t x1100 = 1U;

    t188 = ((x1097*(x1098-x1099))==x1100);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x1101 = -1;
	static int8_t x1102 = -1;
	int32_t x1103 = INT32_MIN;
	int32_t x1104 = 1;

    t189 = ((x1101*(x1102-x1103))==x1104);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1107 = -1LL;
	int32_t x1108 = INT32_MAX;
	volatile int32_t t190 = -28621;

    t190 = ((x1105*(x1106-x1107))==x1108);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x1109 = UINT64_MAX;
	volatile int64_t x1111 = INT64_MIN;

    t191 = ((x1109*(x1110-x1111))==x1112);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1113 = UINT64_MAX;
	int16_t x1114 = INT16_MIN;
	int16_t x1116 = -1;
	volatile int32_t t192 = 827964;

    t192 = ((x1113*(x1114-x1115))==x1116);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1121 = -1;
	int64_t x1122 = 31713366893LL;
	static volatile int8_t x1124 = -1;
	volatile int32_t t193 = 0;

    t193 = ((x1121*(x1122-x1123))==x1124);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1125 = UINT32_MAX;
	volatile int8_t x1126 = -4;
	int16_t x1127 = INT16_MAX;
	uint8_t x1128 = UINT8_MAX;

    t194 = ((x1125*(x1126-x1127))==x1128);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x1129 = 469927321414LLU;
	volatile uint8_t x1130 = UINT8_MAX;
	int32_t x1132 = -134462;
	volatile int32_t t195 = 108;

    t195 = ((x1129*(x1130-x1131))==x1132);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x1136 = -1;
	static volatile int32_t t196 = -23777;

    t196 = ((x1133*(x1134-x1135))==x1136);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1141 = -84;
	static uint32_t x1142 = 5238741U;
	static int64_t x1144 = INT64_MIN;

    t197 = ((x1141*(x1142-x1143))==x1144);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x1146 = 1007;
	int64_t x1148 = 2604191905173LL;

    t198 = ((x1145*(x1146-x1147))==x1148);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1149 = 7794LLU;
	uint32_t x1150 = 14141U;
	int16_t x1151 = INT16_MIN;
	uint16_t x1152 = UINT16_MAX;
	int32_t t199 = 2;

    t199 = ((x1149*(x1150-x1151))==x1152);

    if (t199 != 0) { NG(); } else { ; }
	
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

