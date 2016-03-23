
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

volatile int16_t x1 = -1;
volatile int8_t x2 = 3;
uint8_t x3 = UINT8_MAX;
volatile uint8_t x12 = UINT8_MAX;
int64_t x13 = INT64_MIN;
int64_t x15 = INT64_MIN;
int16_t x25 = -25;
volatile int8_t x32 = 5;
static int64_t x41 = INT64_MIN;
volatile int64_t t9 = 1457LL;
volatile int64_t x47 = -9LL;
int16_t x49 = INT16_MIN;
static int16_t x51 = -1;
int64_t t11 = -9389787638LL;
uint16_t x55 = UINT16_MAX;
int32_t x65 = INT32_MAX;
int64_t x68 = -67109473336983LL;
volatile int64_t x72 = INT64_MIN;
int8_t x76 = 36;
int32_t x83 = 0;
uint64_t t19 = 31110LLU;
volatile int32_t t22 = 5157;
int32_t x100 = -21140;
int64_t x101 = INT64_MIN;
uint64_t x112 = 339953955750123LLU;
static volatile int16_t x113 = INT16_MAX;
int8_t x118 = -3;
volatile uint16_t x119 = UINT16_MAX;
static int32_t x136 = -2572008;
static volatile int32_t t32 = 157299184;
uint64_t x141 = 7882920449815774194LLU;
volatile int16_t x143 = INT16_MIN;
volatile int64_t x148 = -50LL;
static int8_t x150 = -2;
static int64_t x155 = -1LL;
int32_t x156 = INT32_MAX;
int64_t t36 = 333457810301947652LL;
int32_t x163 = 146636;
volatile int64_t t38 = -3307434079430253716LL;
volatile uint32_t x170 = 3U;
static int16_t x177 = INT16_MIN;
static int64_t x178 = -1LL;
volatile int16_t x183 = INT16_MAX;
int16_t x185 = INT16_MIN;
int64_t x192 = INT64_MAX;
volatile int8_t x194 = INT8_MIN;
int16_t x204 = INT16_MAX;
static uint8_t x205 = 15U;
uint16_t x206 = UINT16_MAX;
uint8_t x209 = 41U;
volatile int16_t x215 = -1;
static volatile uint32_t x217 = 13764U;
int64_t t52 = INT64_MAX;
static volatile int32_t t54 = -1410346;
uint8_t x248 = UINT8_MAX;
int8_t x251 = INT8_MAX;
int8_t x260 = -5;
volatile int64_t t65 = INT64_MIN;
volatile uint16_t x282 = 5U;
int8_t x293 = 0;
int16_t x300 = INT16_MIN;
uint16_t x302 = UINT16_MAX;
int32_t x304 = -21353;
static uint32_t x306 = 15864387U;
uint64_t x312 = 19143LLU;
volatile int64_t t73 = -3546LL;
volatile uint16_t x313 = 25223U;
volatile int32_t t75 = 11162;
int64_t x322 = 164507LL;
int8_t x331 = INT8_MAX;
volatile int8_t x332 = -41;
uint64_t x337 = 280949LLU;
uint64_t x340 = UINT64_MAX;
uint64_t x342 = 24LLU;
uint16_t x346 = UINT16_MAX;
static int32_t x359 = INT32_MIN;
static int8_t x360 = INT8_MIN;
int8_t x364 = -1;
int16_t x368 = INT16_MAX;
volatile int16_t x375 = INT16_MAX;
uint64_t x376 = 247313499197925450LLU;
static volatile uint64_t t89 = UINT64_MAX;
static int64_t t90 = -153424023621LL;
static uint8_t x383 = UINT8_MAX;
int64_t x389 = 86420347LL;
int32_t x404 = -10868908;
uint32_t x412 = UINT32_MAX;
int16_t x416 = INT16_MAX;
static int16_t x419 = -1;
volatile int64_t t101 = -1LL;
int16_t x432 = INT16_MIN;
int8_t x443 = INT8_MIN;
static uint8_t x447 = 54U;
int64_t t106 = INT64_MAX;
volatile int16_t x452 = INT16_MIN;
uint32_t t107 = 1006725U;
int32_t t108 = 30386371;
int32_t x467 = INT32_MIN;
int32_t t111 = 54247812;
int32_t x470 = INT32_MIN;
static int64_t x472 = -15LL;
int32_t x478 = INT32_MAX;
volatile int64_t x488 = INT64_MIN;
int32_t x489 = 1;
int32_t x491 = INT32_MIN;
static volatile int32_t t117 = 535412739;
volatile uint32_t x493 = UINT32_MAX;
volatile int64_t x498 = INT64_MIN;
int8_t x505 = -1;
int32_t x515 = INT32_MAX;
uint32_t x516 = 1917035U;
int8_t x517 = -1;
int64_t x524 = -1LL;
volatile int32_t t125 = -411480669;
uint64_t x525 = UINT64_MAX;
volatile int32_t x528 = -25750;
uint32_t x531 = 289417U;
uint16_t x533 = 698U;
int64_t x537 = -1LL;
int64_t x543 = INT64_MIN;
int16_t x548 = INT16_MAX;
volatile uint16_t x550 = 0U;
int32_t x551 = -1;
uint64_t x559 = UINT64_MAX;
volatile uint32_t x560 = 6U;
int64_t x561 = INT64_MIN;
uint32_t x565 = 29U;
static int16_t x566 = INT16_MAX;
static int16_t x570 = -66;
volatile int16_t x571 = INT16_MAX;
uint16_t x574 = 437U;
static volatile int8_t x580 = INT8_MAX;
int16_t x585 = INT16_MIN;
uint16_t x589 = 1072U;
volatile int32_t t142 = -196;
uint64_t x595 = 136003528091LLU;
uint64_t x597 = 558186LLU;
uint8_t x598 = 25U;
static int32_t x602 = -1094843;
volatile int64_t x615 = INT64_MIN;
int16_t x621 = 3;
int64_t x625 = INT64_MAX;
int32_t x631 = -1;
int32_t x639 = -99052;
volatile int32_t t153 = 288242910;
int64_t x644 = -46441317LL;
volatile int32_t t154 = 365303;
int32_t x648 = INT32_MAX;
int8_t x652 = INT8_MIN;
uint64_t t156 = 1047832LLU;
uint32_t x654 = 13782U;
volatile uint64_t x665 = UINT64_MAX;
volatile int32_t t161 = -7075528;
uint8_t x676 = 18U;
volatile int8_t x677 = INT8_MIN;
static uint32_t x682 = UINT32_MAX;
uint16_t x687 = UINT16_MAX;
uint64_t x700 = UINT64_MAX;
volatile int64_t x703 = INT64_MIN;
static uint8_t x708 = UINT8_MAX;
uint64_t x710 = 26734316600609904LLU;
int16_t x711 = 105;
volatile int16_t x735 = -16205;
int8_t x738 = -1;
uint16_t x748 = 22686U;
int32_t x753 = INT32_MIN;
static int8_t x759 = INT8_MIN;
uint16_t x761 = UINT16_MAX;
static uint16_t x763 = UINT16_MAX;
volatile uint64_t x769 = 157250532112740LLU;
volatile uint64_t t184 = 385LLU;
int64_t x777 = -1LL;
volatile int64_t x781 = INT64_MIN;
uint64_t t188 = 11299633584595LLU;
uint16_t x798 = 20751U;
int32_t t191 = 286253394;
static volatile uint64_t x805 = 7674LLU;
uint8_t x810 = 2U;
int16_t x811 = INT16_MIN;
int64_t x827 = -9040377644628410LL;


void f0(void) {
    	int64_t x4 = 461658LL;
	volatile int32_t t0 = 18353525;

    t0 = ((x1|x2)+(x3>x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	volatile uint16_t x6 = UINT16_MAX;
	uint64_t x7 = 41LLU;
	uint64_t x8 = 16877171LLU;
	int64_t t1 = -23423289LL;

    t1 = ((x5|x6)+(x7>x8));

    if (t1 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MIN;
	int8_t x10 = 0;
	int32_t x11 = INT32_MAX;
	volatile int64_t t2 = -3856524LL;

    t2 = ((x9|x10)+(x11>x12));

    if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x14 = INT64_MAX;
	volatile int64_t x16 = INT64_MIN;
	int64_t t3 = 544513404244053LL;

    t3 = ((x13|x14)+(x15>x16));

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = 494989914LL;
	static int32_t x18 = INT32_MAX;
	volatile uint64_t x19 = 61176307117576LLU;
	uint32_t x20 = UINT32_MAX;
	volatile int64_t t4 = 868000991626LL;

    t4 = ((x17|x18)+(x19>x20));

    if (t4 != 2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = -1;
	int16_t x22 = INT16_MIN;
	static uint8_t x23 = UINT8_MAX;
	int64_t x24 = -4284370LL;
	static volatile int32_t t5 = 965461021;

    t5 = ((x21|x22)+(x23>x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x26 = INT64_MIN;
	uint8_t x27 = 39U;
	volatile int16_t x28 = INT16_MAX;
	int64_t t6 = -196930975LL;

    t6 = ((x25|x26)+(x27>x28));

    if (t6 != -25LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = INT8_MIN;
	int32_t x30 = INT32_MIN;
	static uint16_t x31 = 29820U;
	volatile int32_t t7 = 44;

    t7 = ((x29|x30)+(x31>x32));

    if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	int64_t x34 = 7090276960479596LL;
	int8_t x35 = -61;
	uint32_t x36 = UINT32_MAX;
	volatile int64_t t8 = 6824584149274382LL;

    t8 = ((x33|x34)+(x35>x36));

    if (t8 != -9216281759894296212LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x42 = -5LL;
	static int16_t x43 = INT16_MIN;
	int16_t x44 = -1;

    t9 = ((x41|x42)+(x43>x44));

    if (t9 != -5LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MAX;
	static int64_t x48 = -1805LL;
	static volatile int32_t t10 = 604870;

    t10 = ((x45|x46)+(x47>x48));

    if (t10 != -32640) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x50 = 3891838103204525LL;
	volatile int32_t x52 = -843234354;

    t11 = ((x49|x50)+(x51>x52));

    if (t11 != -19794LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x53 = -7;
	int16_t x54 = -20;
	int16_t x56 = INT16_MIN;
	int32_t t12 = -28;

    t12 = ((x53|x54)+(x55>x56));

    if (t12 != -2) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = INT16_MAX;
	static volatile int16_t x58 = INT16_MIN;
	int16_t x59 = -1170;
	static int32_t x60 = -126747;
	volatile int32_t t13 = 1712414;

    t13 = ((x57|x58)+(x59>x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x61 = INT8_MIN;
	static int16_t x62 = 0;
	static int16_t x63 = -1;
	int64_t x64 = INT64_MIN;
	int32_t t14 = 14723;

    t14 = ((x61|x62)+(x63>x64));

    if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x66 = 422332683571821LL;
	uint16_t x67 = UINT16_MAX;
	int64_t t15 = -1661897944326527LL;

    t15 = ((x65|x66)+(x67>x68));

    if (t15 != 422332724150272LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = 4;
	volatile uint64_t x70 = 13229230867LLU;
	int8_t x71 = 1;
	volatile uint64_t t16 = 3820536840LLU;

    t16 = ((x69|x70)+(x71>x72));

    if (t16 != 13229230872LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x73 = 315229661579004LL;
	int8_t x74 = INT8_MIN;
	volatile int32_t x75 = -1;
	volatile int64_t t17 = -314196864381LL;

    t17 = ((x73|x74)+(x75>x76));

    if (t17 != -4LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x77 = 2244275969700000LLU;
	volatile int64_t x78 = -1LL;
	int64_t x79 = -1LL;
	int8_t x80 = 1;
	volatile uint64_t t18 = UINT64_MAX;

    t18 = ((x77|x78)+(x79>x80));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x81 = UINT64_MAX;
	uint32_t x82 = UINT32_MAX;
	int16_t x84 = -98;

    t19 = ((x81|x82)+(x83>x84));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x85 = UINT64_MAX;
	volatile int64_t x86 = 1805314803973LL;
	volatile uint64_t x87 = UINT64_MAX;
	int64_t x88 = INT64_MIN;
	uint64_t t20 = 86864718511407039LLU;

    t20 = ((x85|x86)+(x87>x88));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = 204084134956354LL;
	uint16_t x90 = UINT16_MAX;
	static int8_t x91 = -1;
	int64_t x92 = 795441178476LL;
	int64_t t21 = 4545LL;

    t21 = ((x89|x90)+(x91>x92));

    if (t21 != 204084135002111LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = -9;
	int32_t x94 = -1;
	uint8_t x95 = 0U;
	uint64_t x96 = 135857248LLU;

    t22 = ((x93|x94)+(x95>x96));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = -3;
	uint16_t x98 = UINT16_MAX;
	int32_t x99 = INT32_MIN;
	int32_t t23 = 54952315;

    t23 = ((x97|x98)+(x99>x100));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x102 = UINT16_MAX;
	int8_t x103 = INT8_MAX;
	static volatile int64_t x104 = INT64_MIN;
	volatile int64_t t24 = 67533LL;

    t24 = ((x101|x102)+(x103>x104));

    if (t24 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x105 = 1754844U;
	volatile int16_t x106 = INT16_MIN;
	uint8_t x107 = UINT8_MAX;
	static int16_t x108 = -1;
	volatile uint32_t t25 = 134U;

    t25 = ((x105|x106)+(x107>x108));

    if (t25 != 4294952669U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = -1;
	uint64_t x110 = 2960148563LLU;
	uint64_t x111 = 32795881375LLU;
	static volatile uint64_t t26 = UINT64_MAX;

    t26 = ((x109|x110)+(x111>x112));

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x114 = 5U;
	static int64_t x115 = INT64_MIN;
	static uint32_t x116 = UINT32_MAX;
	static volatile int32_t t27 = -26619;

    t27 = ((x113|x114)+(x115>x116));

    if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x117 = INT8_MIN;
	uint16_t x120 = 6325U;
	volatile int32_t t28 = 0;

    t28 = ((x117|x118)+(x119>x120));

    if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x121 = 35U;
	volatile int8_t x122 = 13;
	int64_t x123 = INT64_MIN;
	static volatile int8_t x124 = -14;
	volatile int32_t t29 = 5;

    t29 = ((x121|x122)+(x123>x124));

    if (t29 != 47) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MIN;
	volatile int64_t x131 = INT64_MIN;
	uint8_t x132 = 37U;
	volatile int32_t t30 = INT32_MIN;

    t30 = ((x129|x130)+(x131>x132));

    if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x133 = INT32_MIN;
	int64_t x134 = INT64_MIN;
	int16_t x135 = INT16_MIN;
	static int64_t t31 = -2LL;

    t31 = ((x133|x134)+(x135>x136));

    if (t31 != -2147483647LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x137 = 1;
	static int32_t x138 = 0;
	volatile int32_t x139 = 489277019;
	static int32_t x140 = -1;

    t32 = ((x137|x138)+(x139>x140));

    if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x142 = INT8_MAX;
	static int16_t x144 = -1;
	volatile uint64_t t33 = 7576933143283LLU;

    t33 = ((x141|x142)+(x143>x144));

    if (t33 != 7882920449815774207LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x145 = 214;
	int64_t x146 = INT64_MIN;
	static int16_t x147 = INT16_MAX;
	volatile int64_t t34 = 1527591952257LL;

    t34 = ((x145|x146)+(x147>x148));

    if (t34 != -9223372036854775593LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int8_t x149 = 0;
	volatile uint8_t x151 = UINT8_MAX;
	uint8_t x152 = 2U;
	volatile int32_t t35 = -2838;

    t35 = ((x149|x150)+(x151>x152));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x153 = -1;
	int64_t x154 = -3633LL;

    t36 = ((x153|x154)+(x155>x156));

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x161 = -1;
	volatile uint16_t x162 = 789U;
	volatile int32_t x164 = INT32_MAX;
	volatile int32_t t37 = 2040;

    t37 = ((x161|x162)+(x163>x164));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x165 = -442615LL;
	uint8_t x166 = UINT8_MAX;
	uint32_t x167 = 698481U;
	int8_t x168 = INT8_MIN;

    t38 = ((x165|x166)+(x167>x168));

    if (t38 != -442369LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x169 = 15647U;
	volatile int32_t x171 = -723156;
	uint8_t x172 = 1U;
	volatile uint32_t t39 = 77323922U;

    t39 = ((x169|x170)+(x171>x172));

    if (t39 != 15647U) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x173 = 47U;
	static int32_t x174 = -1;
	volatile int16_t x175 = INT16_MAX;
	volatile int8_t x176 = INT8_MAX;
	int32_t t40 = -248214640;

    t40 = ((x173|x174)+(x175>x176));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x179 = 10811U;
	static int64_t x180 = INT64_MIN;
	static volatile int64_t t41 = 102092LL;

    t41 = ((x177|x178)+(x179>x180));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = INT8_MIN;
	volatile int64_t x182 = INT64_MAX;
	int64_t x184 = INT64_MAX;
	volatile int64_t t42 = -1LL;

    t42 = ((x181|x182)+(x183>x184));

    if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x186 = 6572029796026772190LLU;
	static uint32_t x187 = UINT32_MAX;
	int32_t x188 = -1;
	volatile uint64_t t43 = 127435LLU;

    t43 = ((x185|x186)+(x187>x188));

    if (t43 != 18446744073709546206LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x189 = -1;
	int16_t x190 = INT16_MIN;
	volatile uint16_t x191 = 1484U;
	volatile int32_t t44 = -4137;

    t44 = ((x189|x190)+(x191>x192));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x193 = 33246U;
	uint32_t x195 = 4455U;
	int32_t x196 = 17;
	volatile uint32_t t45 = 58U;

    t45 = ((x193|x194)+(x195>x196));

    if (t45 != 4294967263U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x197 = INT8_MIN;
	static volatile uint8_t x198 = 22U;
	int8_t x199 = INT8_MIN;
	uint32_t x200 = UINT32_MAX;
	volatile int32_t t46 = -12744720;

    t46 = ((x197|x198)+(x199>x200));

    if (t46 != -106) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x201 = 66126LL;
	int16_t x202 = -1;
	int32_t x203 = -1;
	volatile int64_t t47 = -1480931690LL;

    t47 = ((x201|x202)+(x203>x204));

    if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x207 = UINT8_MAX;
	static int64_t x208 = INT64_MIN;
	int32_t t48 = -16173866;

    t48 = ((x205|x206)+(x207>x208));

    if (t48 != 65536) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x210 = 354U;
	volatile uint64_t x211 = 1021881657803LLU;
	static int32_t x212 = -1;
	int32_t t49 = 11;

    t49 = ((x209|x210)+(x211>x212));

    if (t49 != 363) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x213 = -1;
	static volatile int64_t x214 = -1LL;
	volatile uint8_t x216 = UINT8_MAX;
	int64_t t50 = -100481817602LL;

    t50 = ((x213|x214)+(x215>x216));

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x218 = INT8_MAX;
	uint16_t x219 = 207U;
	static uint32_t x220 = 58660649U;
	volatile uint32_t t51 = 107U;

    t51 = ((x217|x218)+(x219>x220));

    if (t51 != 13823U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x225 = 123841LL;
	int64_t x226 = INT64_MAX;
	int64_t x227 = INT64_MIN;
	static int32_t x228 = INT32_MIN;

    t52 = ((x225|x226)+(x227>x228));

    if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x229 = -1LL;
	static int64_t x230 = INT64_MAX;
	int32_t x231 = -59;
	int16_t x232 = -29;
	volatile int64_t t53 = -844588062LL;

    t53 = ((x229|x230)+(x231>x232));

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x233 = INT16_MAX;
	int16_t x234 = INT16_MAX;
	static volatile int64_t x235 = INT64_MIN;
	int8_t x236 = INT8_MAX;

    t54 = ((x233|x234)+(x235>x236));

    if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x237 = UINT64_MAX;
	int64_t x238 = INT64_MIN;
	static int64_t x239 = 958700805LL;
	int8_t x240 = 7;
	uint64_t t55 = 356LLU;

    t55 = ((x237|x238)+(x239>x240));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x241 = INT16_MIN;
	uint8_t x242 = 15U;
	int64_t x243 = INT64_MIN;
	static int32_t x244 = INT32_MIN;
	volatile int32_t t56 = 7924;

    t56 = ((x241|x242)+(x243>x244));

    if (t56 != -32753) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x245 = 43988968;
	int32_t x246 = INT32_MIN;
	static int16_t x247 = 1;
	volatile int32_t t57 = 1;

    t57 = ((x245|x246)+(x247>x248));

    if (t57 != -2103494680) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x249 = 56774187102LLU;
	int16_t x250 = -1;
	uint16_t x252 = 127U;
	volatile uint64_t t58 = UINT64_MAX;

    t58 = ((x249|x250)+(x251>x252));

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x253 = 88U;
	static volatile int8_t x254 = -1;
	int32_t x255 = INT32_MIN;
	volatile int64_t x256 = -1LL;
	static volatile int32_t t59 = 557320749;

    t59 = ((x253|x254)+(x255>x256));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x257 = INT64_MIN;
	static int64_t x258 = 164LL;
	volatile int64_t x259 = -1LL;
	int64_t t60 = 11267393039045403LL;

    t60 = ((x257|x258)+(x259>x260));

    if (t60 != -9223372036854775643LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x261 = UINT32_MAX;
	uint64_t x262 = UINT64_MAX;
	uint16_t x263 = 31683U;
	static int64_t x264 = INT64_MAX;
	uint64_t t61 = UINT64_MAX;

    t61 = ((x261|x262)+(x263>x264));

    if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x265 = 1420755;
	static volatile int16_t x266 = INT16_MAX;
	volatile uint16_t x267 = 51U;
	uint64_t x268 = UINT64_MAX;
	int32_t t62 = 50561402;

    t62 = ((x265|x266)+(x267>x268));

    if (t62 != 1441791) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x269 = -2;
	int16_t x270 = INT16_MAX;
	static uint16_t x271 = 842U;
	int8_t x272 = -15;
	int32_t t63 = 65541921;

    t63 = ((x269|x270)+(x271>x272));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x273 = INT8_MAX;
	static int64_t x274 = INT64_MAX;
	int16_t x275 = 1;
	uint32_t x276 = UINT32_MAX;
	int64_t t64 = INT64_MAX;

    t64 = ((x273|x274)+(x275>x276));

    if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x277 = 0U;
	int64_t x278 = INT64_MIN;
	volatile int16_t x279 = INT16_MIN;
	static uint8_t x280 = 3U;

    t65 = ((x277|x278)+(x279>x280));

    if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x281 = INT64_MIN;
	static uint16_t x283 = 3523U;
	int32_t x284 = INT32_MIN;
	volatile int64_t t66 = -708LL;

    t66 = ((x281|x282)+(x283>x284));

    if (t66 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x285 = 17U;
	int16_t x286 = 816;
	uint32_t x287 = 444778486U;
	uint8_t x288 = 1U;
	volatile int32_t t67 = -3;

    t67 = ((x285|x286)+(x287>x288));

    if (t67 != 818) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x289 = -1804;
	int8_t x290 = INT8_MAX;
	uint16_t x291 = 3999U;
	volatile uint16_t x292 = 280U;
	static volatile int32_t t68 = -274538;

    t68 = ((x289|x290)+(x291>x292));

    if (t68 != -1792) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x294 = 3LLU;
	volatile int32_t x295 = INT32_MIN;
	uint32_t x296 = 13U;
	uint64_t t69 = 7066LLU;

    t69 = ((x293|x294)+(x295>x296));

    if (t69 != 4LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x297 = -2301;
	int16_t x298 = 472;
	static int64_t x299 = INT64_MAX;
	volatile int32_t t70 = -317976;

    t70 = ((x297|x298)+(x299>x300));

    if (t70 != -2084) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x301 = UINT16_MAX;
	uint32_t x303 = 25399101U;
	volatile int32_t t71 = 3;

    t71 = ((x301|x302)+(x303>x304));

    if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x305 = -90;
	static int8_t x307 = -1;
	int64_t x308 = -1LL;
	volatile uint32_t t72 = 0U;

    t72 = ((x305|x306)+(x307>x308));

    if (t72 != 4294967271U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x309 = 725327U;
	static int64_t x310 = -1LL;
	int8_t x311 = -39;

    t73 = ((x309|x310)+(x311>x312));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x314 = INT16_MIN;
	uint8_t x315 = UINT8_MAX;
	volatile uint32_t x316 = UINT32_MAX;
	static volatile int32_t t74 = 2;

    t74 = ((x313|x314)+(x315>x316));

    if (t74 != -7545) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x317 = INT8_MIN;
	static int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MAX;
	static uint64_t x320 = UINT64_MAX;

    t75 = ((x317|x318)+(x319>x320));

    if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x321 = -5;
	static volatile int8_t x323 = -1;
	static uint64_t x324 = 7LLU;
	volatile int64_t t76 = 4LL;

    t76 = ((x321|x322)+(x323>x324));

    if (t76 != -4LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x325 = INT16_MAX;
	int16_t x326 = 3059;
	int8_t x327 = INT8_MIN;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t77 = 1011;

    t77 = ((x325|x326)+(x327>x328));

    if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x329 = 78U;
	volatile int16_t x330 = INT16_MIN;
	static int32_t t78 = 140;

    t78 = ((x329|x330)+(x331>x332));

    if (t78 != -32689) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x333 = INT16_MAX;
	uint32_t x334 = 7798U;
	int64_t x335 = INT64_MIN;
	volatile int64_t x336 = INT64_MIN;
	volatile uint32_t t79 = 12263U;

    t79 = ((x333|x334)+(x335>x336));

    if (t79 != 32767U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x338 = -1;
	int32_t x339 = -49880;
	volatile uint64_t t80 = UINT64_MAX;

    t80 = ((x337|x338)+(x339>x340));

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int8_t x341 = INT8_MIN;
	uint64_t x343 = UINT64_MAX;
	volatile int64_t x344 = -1LL;
	volatile uint64_t t81 = 4806LLU;

    t81 = ((x341|x342)+(x343>x344));

    if (t81 != 18446744073709551512LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x345 = UINT64_MAX;
	static int64_t x347 = -1049882337LL;
	uint16_t x348 = 998U;
	volatile uint64_t t82 = UINT64_MAX;

    t82 = ((x345|x346)+(x347>x348));

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x349 = INT32_MIN;
	uint8_t x350 = UINT8_MAX;
	static int16_t x351 = INT16_MIN;
	volatile int32_t x352 = 4108643;
	int32_t t83 = -31549782;

    t83 = ((x349|x350)+(x351>x352));

    if (t83 != -2147483393) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x353 = UINT8_MAX;
	uint64_t x354 = UINT64_MAX;
	int32_t x355 = 757320353;
	uint32_t x356 = UINT32_MAX;
	uint64_t t84 = UINT64_MAX;

    t84 = ((x353|x354)+(x355>x356));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x357 = -1;
	int64_t x358 = INT64_MAX;
	static volatile int64_t t85 = -867763556812LL;

    t85 = ((x357|x358)+(x359>x360));

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x361 = INT8_MIN;
	int16_t x362 = -1;
	uint64_t x363 = UINT64_MAX;
	int32_t t86 = 17370;

    t86 = ((x361|x362)+(x363>x364));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x365 = 10031778694262LL;
	int16_t x366 = -6641;
	int64_t x367 = 678LL;
	static volatile int64_t t87 = -308266617264499LL;

    t87 = ((x365|x366)+(x367>x368));

    if (t87 != -6529LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x369 = 0LL;
	uint64_t x370 = UINT64_MAX;
	uint16_t x371 = UINT16_MAX;
	int32_t x372 = INT32_MIN;
	uint64_t t88 = 2906034216968288462LLU;

    t88 = ((x369|x370)+(x371>x372));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x373 = INT32_MAX;
	static uint64_t x374 = UINT64_MAX;

    t89 = ((x373|x374)+(x375>x376));

    if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x377 = -1LL;
	volatile int32_t x378 = INT32_MIN;
	static uint64_t x379 = 3440LLU;
	static int8_t x380 = INT8_MIN;

    t90 = ((x377|x378)+(x379>x380));

    if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x381 = INT64_MIN;
	uint16_t x382 = 4U;
	volatile uint32_t x384 = UINT32_MAX;
	int64_t t91 = -22521280LL;

    t91 = ((x381|x382)+(x383>x384));

    if (t91 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x385 = 5;
	int64_t x386 = -20470418753922LL;
	uint16_t x387 = 6U;
	static int8_t x388 = INT8_MIN;
	int64_t t92 = 121747089LL;

    t92 = ((x385|x386)+(x387>x388));

    if (t92 != -20470418753920LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x390 = -44;
	volatile int8_t x391 = INT8_MIN;
	volatile int8_t x392 = INT8_MIN;
	volatile int64_t t93 = 2827908223220LL;

    t93 = ((x389|x390)+(x391>x392));

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x393 = 156682LLU;
	uint8_t x394 = 123U;
	uint16_t x395 = 452U;
	static uint8_t x396 = 92U;
	uint64_t t94 = 96726619LLU;

    t94 = ((x393|x394)+(x395>x396));

    if (t94 != 156796LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x397 = 140U;
	int8_t x398 = INT8_MIN;
	static uint64_t x399 = 14LLU;
	volatile uint64_t x400 = UINT64_MAX;
	int32_t t95 = -5;

    t95 = ((x397|x398)+(x399>x400));

    if (t95 != -116) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x401 = UINT16_MAX;
	static int32_t x402 = INT32_MIN;
	uint64_t x403 = 163194709606619061LLU;
	volatile int32_t t96 = 10138;

    t96 = ((x401|x402)+(x403>x404));

    if (t96 != -2147418113) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x405 = UINT16_MAX;
	static int16_t x406 = INT16_MIN;
	volatile uint32_t x407 = 2U;
	uint16_t x408 = UINT16_MAX;
	static volatile int32_t t97 = -3914;

    t97 = ((x405|x406)+(x407>x408));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x409 = 40U;
	volatile int8_t x410 = -1;
	int16_t x411 = -1;
	volatile int32_t t98 = 1218;

    t98 = ((x409|x410)+(x411>x412));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x413 = INT64_MIN;
	volatile int16_t x414 = -15;
	static volatile int16_t x415 = INT16_MIN;
	int64_t t99 = 836060159622915742LL;

    t99 = ((x413|x414)+(x415>x416));

    if (t99 != -15LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x417 = INT8_MIN;
	int32_t x418 = -1;
	int16_t x420 = 1045;
	int32_t t100 = -931578049;

    t100 = ((x417|x418)+(x419>x420));

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int64_t x421 = INT64_MIN;
	uint16_t x422 = 4U;
	int8_t x423 = -3;
	int8_t x424 = INT8_MIN;

    t101 = ((x421|x422)+(x423>x424));

    if (t101 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x429 = 1U;
	int32_t x430 = INT32_MIN;
	uint64_t x431 = 6992092885057190LLU;
	volatile uint32_t t102 = 1912531U;

    t102 = ((x429|x430)+(x431>x432));

    if (t102 != 2147483649U) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x433 = -1;
	volatile int32_t x434 = INT32_MIN;
	static uint8_t x435 = 0U;
	static uint64_t x436 = 23173218LLU;
	volatile int32_t t103 = 203;

    t103 = ((x433|x434)+(x435>x436));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x437 = INT64_MIN;
	static volatile uint8_t x438 = UINT8_MAX;
	uint8_t x439 = UINT8_MAX;
	volatile int32_t x440 = 210600290;
	volatile int64_t t104 = 595133056964LL;

    t104 = ((x437|x438)+(x439>x440));

    if (t104 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x441 = UINT8_MAX;
	int64_t x442 = 8502LL;
	int16_t x444 = INT16_MAX;
	volatile int64_t t105 = 207LL;

    t105 = ((x441|x442)+(x443>x444));

    if (t105 != 8703LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x445 = INT64_MAX;
	uint16_t x446 = 29U;
	static uint64_t x448 = UINT64_MAX;

    t106 = ((x445|x446)+(x447>x448));

    if (t106 != INT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x449 = 0U;
	static uint32_t x450 = UINT32_MAX;
	uint8_t x451 = 63U;

    t107 = ((x449|x450)+(x451>x452));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x453 = 11;
	static volatile int8_t x454 = -1;
	int64_t x455 = -2507949399LL;
	static volatile int8_t x456 = INT8_MAX;

    t108 = ((x453|x454)+(x455>x456));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x457 = -1;
	int16_t x458 = -1;
	int64_t x459 = -1LL;
	static int8_t x460 = -63;
	static volatile int32_t t109 = -1110;

    t109 = ((x457|x458)+(x459>x460));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x461 = -1;
	int16_t x462 = INT16_MIN;
	int8_t x463 = -48;
	int16_t x464 = 2713;
	static int32_t t110 = -29236128;

    t110 = ((x461|x462)+(x463>x464));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x465 = 605U;
	int8_t x466 = INT8_MIN;
	int8_t x468 = -1;

    t111 = ((x465|x466)+(x467>x468));

    if (t111 != -35) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x469 = -1;
	volatile uint16_t x471 = 26873U;
	int32_t t112 = 1;

    t112 = ((x469|x470)+(x471>x472));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x473 = INT32_MIN;
	volatile uint64_t x474 = UINT64_MAX;
	static volatile int8_t x475 = 4;
	uint16_t x476 = 2788U;
	uint64_t t113 = UINT64_MAX;

    t113 = ((x473|x474)+(x475>x476));

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x477 = -104LL;
	int8_t x479 = -1;
	int32_t x480 = -6;
	volatile int64_t t114 = 197LL;

    t114 = ((x477|x478)+(x479>x480));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x481 = -201;
	static volatile int64_t x482 = INT64_MIN;
	uint8_t x483 = 97U;
	int8_t x484 = 2;
	int64_t t115 = 35600875146970605LL;

    t115 = ((x481|x482)+(x483>x484));

    if (t115 != -200LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x485 = -1;
	int64_t x486 = INT64_MIN;
	int64_t x487 = -1LL;
	volatile int64_t t116 = 64645812631201606LL;

    t116 = ((x485|x486)+(x487>x488));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x490 = INT8_MIN;
	uint64_t x492 = UINT64_MAX;

    t117 = ((x489|x490)+(x491>x492));

    if (t117 != -127) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x494 = 26U;
	volatile uint32_t x495 = 8241U;
	static volatile uint32_t x496 = UINT32_MAX;
	uint32_t t118 = UINT32_MAX;

    t118 = ((x493|x494)+(x495>x496));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x497 = 232251;
	uint8_t x499 = UINT8_MAX;
	volatile int8_t x500 = 49;
	volatile int64_t t119 = 4876247925213LL;

    t119 = ((x497|x498)+(x499>x500));

    if (t119 != -9223372036854543556LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x501 = 24798749LL;
	uint16_t x502 = UINT16_MAX;
	int64_t x503 = -772056LL;
	int16_t x504 = INT16_MAX;
	static int64_t t120 = 192400759LL;

    t120 = ((x501|x502)+(x503>x504));

    if (t120 != 24838143LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x506 = INT8_MIN;
	int64_t x507 = INT64_MIN;
	static int8_t x508 = INT8_MIN;
	int32_t t121 = 3311;

    t121 = ((x505|x506)+(x507>x508));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x509 = -1;
	static volatile int16_t x510 = -1;
	int32_t x511 = INT32_MAX;
	static int32_t x512 = INT32_MIN;
	volatile int32_t t122 = 3;

    t122 = ((x509|x510)+(x511>x512));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x513 = -3;
	int64_t x514 = INT64_MIN;
	volatile int64_t t123 = -739LL;

    t123 = ((x513|x514)+(x515>x516));

    if (t123 != -2LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x518 = INT64_MIN;
	int16_t x519 = INT16_MIN;
	int8_t x520 = INT8_MIN;
	volatile int64_t t124 = 27476707809LL;

    t124 = ((x517|x518)+(x519>x520));

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x521 = -7;
	int8_t x522 = -1;
	uint64_t x523 = 1345342167773LLU;

    t125 = ((x521|x522)+(x523>x524));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x526 = INT64_MIN;
	uint8_t x527 = 77U;
	volatile uint64_t t126 = 5064LLU;

    t126 = ((x525|x526)+(x527>x528));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x529 = 1871;
	int8_t x530 = INT8_MAX;
	int32_t x532 = -1;
	volatile int32_t t127 = 134767779;

    t127 = ((x529|x530)+(x531>x532));

    if (t127 != 1919) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x534 = -1;
	volatile uint64_t x535 = 212603780524863270LLU;
	int32_t x536 = -1;
	int32_t t128 = 987679;

    t128 = ((x533|x534)+(x535>x536));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x538 = 10357;
	uint8_t x539 = 1U;
	uint8_t x540 = 0U;
	int64_t t129 = -175193313LL;

    t129 = ((x537|x538)+(x539>x540));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x541 = 13U;
	int64_t x542 = INT64_MIN;
	int16_t x544 = 1;
	int64_t t130 = 15329176343LL;

    t130 = ((x541|x542)+(x543>x544));

    if (t130 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x545 = UINT16_MAX;
	uint64_t x546 = UINT64_MAX;
	static int32_t x547 = 246;
	uint64_t t131 = UINT64_MAX;

    t131 = ((x545|x546)+(x547>x548));

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x549 = 15;
	int8_t x552 = 0;
	static volatile int32_t t132 = -19802332;

    t132 = ((x549|x550)+(x551>x552));

    if (t132 != 15) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x553 = -1LL;
	int32_t x554 = -2347671;
	volatile int64_t x555 = -455268844906LL;
	uint8_t x556 = 49U;
	int64_t t133 = 1934LL;

    t133 = ((x553|x554)+(x555>x556));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x557 = -1;
	static int16_t x558 = 101;
	int32_t t134 = 711404053;

    t134 = ((x557|x558)+(x559>x560));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x562 = INT32_MIN;
	int16_t x563 = INT16_MIN;
	static volatile int64_t x564 = 10370LL;
	static volatile int64_t t135 = 6LL;

    t135 = ((x561|x562)+(x563>x564));

    if (t135 != -2147483648LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x567 = 202593U;
	uint32_t x568 = UINT32_MAX;
	static uint32_t t136 = 106464319U;

    t136 = ((x565|x566)+(x567>x568));

    if (t136 != 32767U) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x569 = INT32_MIN;
	volatile int16_t x572 = -81;
	volatile int32_t t137 = -13262;

    t137 = ((x569|x570)+(x571>x572));

    if (t137 != -65) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x573 = -1;
	uint8_t x575 = UINT8_MAX;
	static int32_t x576 = -8;
	volatile int32_t t138 = -4;

    t138 = ((x573|x574)+(x575>x576));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x577 = INT64_MAX;
	static int64_t x578 = INT64_MIN;
	int8_t x579 = INT8_MIN;
	volatile int64_t t139 = 27792408LL;

    t139 = ((x577|x578)+(x579>x580));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x581 = 622891U;
	static volatile uint64_t x582 = 5586319187LLU;
	uint32_t x583 = 810230179U;
	int8_t x584 = INT8_MIN;
	volatile uint64_t t140 = 265581342LLU;

    t140 = ((x581|x582)+(x583>x584));

    if (t140 != 5586417531LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x586 = 8071465455198LLU;
	uint64_t x587 = 25555LLU;
	int64_t x588 = INT64_MIN;
	uint64_t t141 = 117164617640458813LLU;

    t141 = ((x585|x586)+(x587>x588));

    if (t141 != 18446744073709538910LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x590 = 5U;
	volatile int64_t x591 = -41738952040LL;
	int16_t x592 = -1;

    t142 = ((x589|x590)+(x591>x592));

    if (t142 != 1077) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x593 = INT16_MIN;
	volatile int64_t x594 = INT64_MIN;
	int8_t x596 = INT8_MIN;
	int64_t t143 = -11366232LL;

    t143 = ((x593|x594)+(x595>x596));

    if (t143 != -32768LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x599 = INT8_MAX;
	volatile uint8_t x600 = 51U;
	uint64_t t144 = 8468532730470086443LLU;

    t144 = ((x597|x598)+(x599>x600));

    if (t144 != 558204LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x601 = UINT8_MAX;
	static int8_t x603 = INT8_MIN;
	int32_t x604 = -5;
	int32_t t145 = -3186;

    t145 = ((x601|x602)+(x603>x604));

    if (t145 != -1094657) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x609 = 1U;
	int64_t x610 = INT64_MIN;
	uint8_t x611 = 18U;
	int16_t x612 = INT16_MIN;
	volatile int64_t t146 = -275187LL;

    t146 = ((x609|x610)+(x611>x612));

    if (t146 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x613 = -138446;
	int32_t x614 = INT32_MAX;
	int8_t x616 = -1;
	int32_t t147 = 0;

    t147 = ((x613|x614)+(x615>x616));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x617 = -13145;
	static volatile int8_t x618 = 14;
	int8_t x619 = INT8_MAX;
	static uint8_t x620 = 3U;
	int32_t t148 = -50;

    t148 = ((x617|x618)+(x619>x620));

    if (t148 != -13136) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x622 = INT32_MAX;
	static int16_t x623 = -1;
	int8_t x624 = -1;
	volatile int32_t t149 = INT32_MAX;

    t149 = ((x621|x622)+(x623>x624));

    if (t149 != INT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x626 = INT16_MIN;
	volatile int32_t x627 = INT32_MAX;
	static uint32_t x628 = 5U;
	volatile int64_t t150 = 419386381230533288LL;

    t150 = ((x625|x626)+(x627>x628));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x629 = INT32_MIN;
	volatile int32_t x630 = INT32_MIN;
	volatile int16_t x632 = INT16_MIN;
	int32_t t151 = -39841;

    t151 = ((x629|x630)+(x631>x632));

    if (t151 != -2147483647) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x633 = 3U;
	int16_t x634 = 2256;
	static int64_t x635 = 60014LL;
	static uint32_t x636 = UINT32_MAX;
	int32_t t152 = -13;

    t152 = ((x633|x634)+(x635>x636));

    if (t152 != 2259) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x637 = -182907;
	static int16_t x638 = INT16_MIN;
	int64_t x640 = -1LL;

    t153 = ((x637|x638)+(x639>x640));

    if (t153 != -19067) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x641 = 329;
	int32_t x642 = -36;
	int32_t x643 = INT32_MAX;

    t154 = ((x641|x642)+(x643>x644));

    if (t154 != -34) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x645 = 13U;
	int32_t x646 = INT32_MIN;
	uint64_t x647 = 1088277514513419LLU;
	int32_t t155 = -502060624;

    t155 = ((x645|x646)+(x647>x648));

    if (t155 != -2147483634) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x649 = 51LLU;
	volatile uint64_t x650 = 6810849LLU;
	volatile int16_t x651 = 13379;

    t156 = ((x649|x650)+(x651>x652));

    if (t156 != 6810868LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x653 = UINT16_MAX;
	uint32_t x655 = 12292U;
	int64_t x656 = INT64_MIN;
	static uint32_t t157 = 95989250U;

    t157 = ((x653|x654)+(x655>x656));

    if (t157 != 65536U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x657 = -8012;
	volatile int16_t x658 = INT16_MIN;
	int16_t x659 = 15105;
	uint16_t x660 = UINT16_MAX;
	volatile int32_t t158 = 10929327;

    t158 = ((x657|x658)+(x659>x660));

    if (t158 != -8012) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x661 = 1;
	int8_t x662 = INT8_MIN;
	static uint16_t x663 = 51U;
	static uint32_t x664 = 291078U;
	int32_t t159 = -164912;

    t159 = ((x661|x662)+(x663>x664));

    if (t159 != -127) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x666 = UINT8_MAX;
	static uint64_t x667 = 412013421673951LLU;
	static uint32_t x668 = 1021558010U;
	static uint64_t t160 = 5LLU;

    t160 = ((x665|x666)+(x667>x668));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x669 = INT16_MAX;
	volatile uint16_t x670 = UINT16_MAX;
	volatile int64_t x671 = INT64_MIN;
	int8_t x672 = -3;

    t161 = ((x669|x670)+(x671>x672));

    if (t161 != 65535) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x673 = INT64_MIN;
	uint32_t x674 = 52064U;
	volatile int64_t x675 = 14538334636646LL;
	int64_t t162 = -11962LL;

    t162 = ((x673|x674)+(x675>x676));

    if (t162 != -9223372036854723743LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x678 = INT64_MIN;
	int16_t x679 = INT16_MIN;
	int8_t x680 = INT8_MIN;
	int64_t t163 = -90668399639965427LL;

    t163 = ((x677|x678)+(x679>x680));

    if (t163 != -128LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x681 = 16U;
	int32_t x683 = -33909;
	volatile uint8_t x684 = 1U;
	volatile uint32_t t164 = UINT32_MAX;

    t164 = ((x681|x682)+(x683>x684));

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int32_t x685 = -1;
	uint32_t x686 = UINT32_MAX;
	static int32_t x688 = INT32_MIN;
	volatile uint32_t t165 = 6425224U;

    t165 = ((x685|x686)+(x687>x688));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x693 = 957129U;
	int8_t x694 = -1;
	uint32_t x695 = 134U;
	static uint8_t x696 = 90U;
	static volatile uint32_t t166 = 178115486U;

    t166 = ((x693|x694)+(x695>x696));

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x697 = INT32_MAX;
	int64_t x698 = 170449774201229083LL;
	int8_t x699 = -1;
	volatile int64_t t167 = 326888787585810892LL;

    t167 = ((x697|x698)+(x699>x700));

    if (t167 != 170449775756312575LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x701 = UINT32_MAX;
	int16_t x702 = INT16_MIN;
	int8_t x704 = 27;
	volatile uint32_t t168 = UINT32_MAX;

    t168 = ((x701|x702)+(x703>x704));

    if (t168 != UINT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x705 = 1;
	int16_t x706 = -1;
	static volatile uint16_t x707 = 8041U;
	static int32_t t169 = 6;

    t169 = ((x705|x706)+(x707>x708));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x709 = INT8_MIN;
	int32_t x712 = INT32_MIN;
	volatile uint64_t t170 = 237432185551LLU;

    t170 = ((x709|x710)+(x711>x712));

    if (t170 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x713 = INT32_MAX;
	static uint8_t x714 = UINT8_MAX;
	static int8_t x715 = INT8_MIN;
	volatile int16_t x716 = -1;
	int32_t t171 = INT32_MAX;

    t171 = ((x713|x714)+(x715>x716));

    if (t171 != INT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x717 = UINT32_MAX;
	volatile int8_t x718 = INT8_MIN;
	int64_t x719 = -1LL;
	int32_t x720 = INT32_MIN;
	uint32_t t172 = 238681U;

    t172 = ((x717|x718)+(x719>x720));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x725 = INT8_MAX;
	int8_t x726 = -1;
	int32_t x727 = -34326870;
	static volatile uint32_t x728 = UINT32_MAX;
	static int32_t t173 = 805602272;

    t173 = ((x725|x726)+(x727>x728));

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x729 = INT8_MIN;
	uint8_t x730 = UINT8_MAX;
	uint64_t x731 = 60135017633919LLU;
	int64_t x732 = INT64_MIN;
	static int32_t t174 = -8185246;

    t174 = ((x729|x730)+(x731>x732));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x733 = 204606;
	int32_t x734 = INT32_MIN;
	volatile int64_t x736 = INT64_MIN;
	int32_t t175 = 6;

    t175 = ((x733|x734)+(x735>x736));

    if (t175 != -2147279041) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x737 = UINT8_MAX;
	static int64_t x739 = INT64_MIN;
	int64_t x740 = INT64_MAX;
	int32_t t176 = -884861454;

    t176 = ((x737|x738)+(x739>x740));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x741 = UINT32_MAX;
	uint32_t x742 = 96968U;
	int32_t x743 = INT32_MIN;
	static int32_t x744 = 830114942;
	volatile uint32_t t177 = UINT32_MAX;

    t177 = ((x741|x742)+(x743>x744));

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x745 = 33LL;
	int16_t x746 = INT16_MIN;
	uint32_t x747 = 0U;
	int64_t t178 = 0LL;

    t178 = ((x745|x746)+(x747>x748));

    if (t178 != -32735LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x749 = INT64_MAX;
	static volatile uint32_t x750 = UINT32_MAX;
	int16_t x751 = INT16_MIN;
	volatile uint8_t x752 = 0U;
	int64_t t179 = INT64_MAX;

    t179 = ((x749|x750)+(x751>x752));

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x754 = UINT8_MAX;
	static uint32_t x755 = 513594095U;
	int32_t x756 = -1;
	volatile int32_t t180 = 0;

    t180 = ((x753|x754)+(x755>x756));

    if (t180 != -2147483393) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x757 = -1;
	int8_t x758 = -1;
	int16_t x760 = -28;
	static int32_t t181 = 5;

    t181 = ((x757|x758)+(x759>x760));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x762 = 25229U;
	int32_t x764 = -13426131;
	int32_t t182 = 107227;

    t182 = ((x761|x762)+(x763>x764));

    if (t182 != 65536) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x765 = INT64_MAX;
	int32_t x766 = INT32_MIN;
	int32_t x767 = -1;
	static volatile uint16_t x768 = 495U;
	volatile int64_t t183 = 1197291555368LL;

    t183 = ((x765|x766)+(x767>x768));

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x770 = 798985242047790LLU;
	int64_t x771 = 1LL;
	volatile int16_t x772 = INT16_MIN;

    t184 = ((x769|x770)+(x771>x772));

    if (t184 != 808882995428719LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x773 = 3;
	volatile uint64_t x774 = UINT64_MAX;
	uint16_t x775 = UINT16_MAX;
	uint32_t x776 = 39U;
	static volatile uint64_t t185 = 2647357777LLU;

    t185 = ((x773|x774)+(x775>x776));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x778 = INT32_MAX;
	static volatile int64_t x779 = INT64_MIN;
	int64_t x780 = 14490420LL;
	volatile int64_t t186 = 1423728722LL;

    t186 = ((x777|x778)+(x779>x780));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x782 = UINT8_MAX;
	int64_t x783 = INT64_MIN;
	static uint32_t x784 = 52U;
	volatile int64_t t187 = -15575623976692362LL;

    t187 = ((x781|x782)+(x783>x784));

    if (t187 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x785 = -1;
	static uint64_t x786 = UINT64_MAX;
	static int64_t x787 = INT64_MAX;
	int16_t x788 = 624;

    t188 = ((x785|x786)+(x787>x788));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x789 = -1;
	volatile int32_t x790 = INT32_MIN;
	volatile uint8_t x791 = 106U;
	static uint64_t x792 = UINT64_MAX;
	volatile int32_t t189 = 62012;

    t189 = ((x789|x790)+(x791>x792));

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x793 = -6101;
	static uint8_t x794 = 75U;
	volatile int64_t x795 = INT64_MIN;
	int64_t x796 = 1719956143LL;
	volatile int32_t t190 = -1183413;

    t190 = ((x793|x794)+(x795>x796));

    if (t190 != -6037) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x797 = 10075;
	uint32_t x799 = 446U;
	int8_t x800 = -1;

    t191 = ((x797|x798)+(x799>x800));

    if (t191 != 30559) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x801 = INT64_MIN;
	uint64_t x802 = UINT64_MAX;
	volatile int16_t x803 = 1;
	uint8_t x804 = 1U;
	uint64_t t192 = UINT64_MAX;

    t192 = ((x801|x802)+(x803>x804));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x806 = -170;
	static uint32_t x807 = 25U;
	uint32_t x808 = UINT32_MAX;
	volatile uint64_t t193 = 21373570763387LLU;

    t193 = ((x805|x806)+(x807>x808));

    if (t193 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x809 = 8670505428503593810LLU;
	uint16_t x812 = 0U;
	static uint64_t t194 = 1876321414LLU;

    t194 = ((x809|x810)+(x811>x812));

    if (t194 != 8670505428503593810LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x813 = -744;
	volatile uint64_t x814 = 29273770424LLU;
	uint16_t x815 = UINT16_MAX;
	static int8_t x816 = INT8_MIN;
	uint64_t t195 = 76475622341LLU;

    t195 = ((x813|x814)+(x815>x816));

    if (t195 != 18446744073709551033LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x817 = UINT64_MAX;
	volatile uint16_t x818 = UINT16_MAX;
	int16_t x819 = -73;
	uint16_t x820 = UINT16_MAX;
	static volatile uint64_t t196 = UINT64_MAX;

    t196 = ((x817|x818)+(x819>x820));

    if (t196 != UINT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x821 = INT64_MIN;
	int8_t x822 = -6;
	int8_t x823 = INT8_MAX;
	volatile int8_t x824 = INT8_MIN;
	int64_t t197 = 0LL;

    t197 = ((x821|x822)+(x823>x824));

    if (t197 != -5LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x825 = 606U;
	int8_t x826 = 25;
	int32_t x828 = 1;
	int32_t t198 = -16584420;

    t198 = ((x825|x826)+(x827>x828));

    if (t198 != 607) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x829 = UINT16_MAX;
	uint16_t x830 = UINT16_MAX;
	uint8_t x831 = UINT8_MAX;
	uint32_t x832 = 3912U;
	int32_t t199 = -112329915;

    t199 = ((x829|x830)+(x831>x832));

    if (t199 != 65535) { NG(); } else { ; }
	
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

