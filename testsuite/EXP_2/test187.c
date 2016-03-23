
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

static volatile int16_t x1 = -9512;
volatile int32_t x3 = -1;
uint64_t x4 = 298408462391071237LLU;
uint32_t x10 = 0U;
volatile uint16_t x14 = UINT16_MAX;
volatile int32_t x16 = INT32_MIN;
int32_t x18 = -57137;
static volatile int16_t x21 = INT16_MIN;
volatile uint32_t t6 = 1826841U;
uint16_t x34 = UINT16_MAX;
volatile int16_t x42 = -754;
int32_t x45 = INT32_MIN;
int32_t x47 = INT32_MIN;
int32_t t14 = -1801784;
volatile int8_t x111 = 14;
int32_t x118 = -1;
uint32_t t22 = 17745662U;
volatile int32_t x124 = 80;
int16_t x127 = -14;
volatile int32_t x129 = INT32_MIN;
uint16_t x130 = UINT16_MAX;
int8_t x132 = -1;
int8_t x133 = -6;
static int64_t x134 = INT64_MIN;
int64_t x143 = INT64_MAX;
uint8_t x147 = UINT8_MAX;
volatile int64_t x159 = -1LL;
int8_t x168 = 1;
int64_t x171 = INT64_MIN;
volatile int32_t x175 = INT32_MIN;
uint32_t x177 = 662786934U;
volatile int8_t x183 = INT8_MAX;
volatile int64_t t37 = 182299176022LL;
static int8_t x185 = 8;
uint8_t x196 = UINT8_MAX;
uint64_t x202 = 2639LLU;
volatile uint8_t x204 = 71U;
uint64_t t41 = 126770017LLU;
int8_t x207 = INT8_MIN;
uint64_t x219 = UINT64_MAX;
int32_t x220 = INT32_MIN;
uint64_t x234 = 217661965797682LLU;
int8_t x235 = 0;
uint32_t x256 = 1835297024U;
static uint64_t x263 = 90633179045912LLU;
int64_t x264 = INT64_MIN;
static int64_t t53 = 33821760LL;
volatile uint64_t x272 = UINT64_MAX;
volatile uint64_t x278 = 3271462141862181417LLU;
static int8_t x279 = INT8_MIN;
int32_t t59 = 63826034;
int64_t x293 = 170529100460LL;
int16_t x295 = INT16_MIN;
uint64_t x299 = 3890132701312662202LLU;
int16_t x300 = -1;
int16_t x304 = INT16_MIN;
static uint16_t x308 = 3U;
int64_t t63 = -90799LL;
static int32_t t64 = 1513;
int64_t x316 = -1LL;
uint32_t x320 = UINT32_MAX;
int32_t x323 = 25017305;
uint32_t x325 = 381642618U;
static int32_t x327 = INT32_MIN;
static int64_t x328 = INT64_MIN;
volatile int64_t t69 = -554422563788454LL;
int64_t t70 = 427019272124LL;
volatile uint8_t x344 = UINT8_MAX;
volatile int8_t x348 = -1;
uint8_t x351 = 65U;
volatile int32_t x358 = 2;
uint64_t t76 = 51817741726638369LLU;
uint64_t x363 = 26205808127LLU;
static uint64_t t77 = 3041638266634LLU;
int32_t x372 = -1;
int64_t t79 = -2134114888200668LL;
uint8_t x381 = 61U;
volatile uint32_t t80 = 69325U;
int8_t x386 = 1;
int64_t x387 = 4493314891677933LL;
int16_t x389 = INT16_MIN;
int16_t x391 = INT16_MIN;
int64_t x393 = INT64_MIN;
uint64_t x407 = 93083924LLU;
uint16_t x408 = 6525U;
uint64_t t86 = 111749190096018LLU;
uint64_t x412 = UINT64_MAX;
int8_t x414 = INT8_MIN;
int8_t x418 = 1;
static uint16_t x424 = 57U;
static int16_t x439 = -1;
int32_t t94 = 1701;
int16_t x444 = INT16_MAX;
int16_t x448 = INT16_MIN;
int64_t t96 = -29034717LL;
int64_t x450 = INT64_MAX;
int32_t x453 = 406750665;
uint64_t x461 = 14500699569LLU;
uint32_t x463 = 431355911U;
int16_t x464 = INT16_MAX;
volatile uint64_t t100 = 588LLU;
volatile int16_t x468 = INT16_MIN;
volatile int8_t x475 = -1;
int64_t x477 = INT64_MIN;
int16_t x479 = -1;
int64_t t104 = 16682404049153955LL;
volatile int8_t x482 = -26;
volatile int64_t t105 = 493346836783823LL;
static volatile uint64_t x485 = 68795181822LLU;
int64_t t107 = -39451537LL;
volatile int32_t x498 = INT32_MIN;
volatile int16_t x502 = INT16_MAX;
static int32_t x504 = INT32_MIN;
volatile int8_t x507 = INT8_MAX;
uint16_t x526 = 196U;
uint8_t x527 = 34U;
int64_t x528 = INT64_MAX;
static int64_t t113 = -2875351101401LL;
uint8_t x529 = 104U;
volatile int8_t x531 = -1;
uint16_t x535 = 1U;
int16_t x536 = INT16_MAX;
int64_t t115 = 104502LL;
uint16_t x549 = 15153U;
int8_t x551 = -14;
volatile int32_t x554 = INT32_MIN;
volatile uint64_t x555 = 840117LLU;
int16_t x569 = -8;
int64_t x571 = INT64_MIN;
uint32_t x573 = 431682U;
uint32_t x578 = 11236U;
int32_t x583 = -2640;
volatile int16_t x590 = 58;
int16_t x593 = INT16_MIN;
volatile int64_t t127 = -129733244898LL;
volatile uint64_t t128 = 30123428025953710LLU;
static int8_t x609 = INT8_MAX;
int8_t x612 = INT8_MAX;
uint64_t x616 = UINT64_MAX;
volatile int32_t t131 = -243144852;
volatile int8_t x621 = -1;
int64_t x636 = -1LL;
uint16_t x653 = 1U;
static int8_t x657 = -1;
volatile int64_t t141 = 56048899LL;
int32_t x670 = INT32_MIN;
static uint32_t x673 = UINT32_MAX;
volatile uint32_t x676 = UINT32_MAX;
uint16_t x697 = UINT16_MAX;
int64_t t151 = -4482780527552LL;
uint32_t x717 = 24U;
int64_t x724 = INT64_MIN;
volatile uint64_t t153 = 0LLU;
static int16_t x728 = INT16_MAX;
int64_t t154 = -3407581171424LL;
static volatile int16_t x733 = 0;
static uint16_t x736 = UINT16_MAX;
uint16_t x737 = 194U;
int8_t x746 = 1;
volatile uint8_t x747 = 15U;
int16_t x748 = 6;
volatile uint16_t x751 = UINT16_MAX;
volatile int32_t x752 = 58;
static int16_t x761 = INT16_MIN;
volatile uint64_t t163 = 359LLU;
volatile uint16_t x781 = UINT16_MAX;
static int8_t x783 = -1;
int64_t x789 = -8552551299LL;
volatile int16_t x793 = 0;
uint64_t x795 = 1481334529868250LLU;
int16_t x796 = INT16_MIN;
uint64_t t169 = 113002113525865LLU;
volatile int32_t x799 = -1;
int64_t x802 = 498597304546743LL;
static volatile int32_t x809 = INT32_MIN;
static int32_t x810 = INT32_MIN;
static volatile int64_t t173 = -108279388164LL;
int64_t x814 = -1168298688671356233LL;
int8_t x820 = -1;
volatile int64_t t175 = 9146893275918LL;
volatile int64_t t176 = -59LL;
volatile uint32_t x825 = UINT32_MAX;
uint8_t x831 = 23U;
static int32_t x838 = 1;
int64_t x840 = INT64_MIN;
uint32_t x845 = UINT32_MAX;
static volatile uint32_t t182 = 697752754U;
uint32_t t183 = 24353935U;
static int16_t x867 = INT16_MIN;
int64_t x868 = -1LL;
uint8_t x871 = UINT8_MAX;
int16_t x886 = INT16_MIN;
volatile int32_t x887 = INT32_MAX;
volatile uint32_t t190 = 1U;
int32_t x900 = -33931898;
volatile int16_t x902 = -1;
int64_t x903 = -1LL;
volatile int8_t x912 = -1;
uint32_t x919 = 158265U;
volatile uint32_t t197 = 0U;
uint32_t x931 = 59185U;


void f0(void) {
    	int8_t x2 = 4;
	volatile uint64_t t0 = 28106994013LLU;

    t0 = ((x1^(x2+x3))%x4);

    if (t0 != 243827867854196650LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = -1LL;
	volatile int32_t x6 = INT32_MAX;
	int8_t x7 = INT8_MIN;
	int64_t x8 = -1LL;
	volatile int64_t t1 = -503656LL;

    t1 = ((x5^(x6+x7))%x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = 1203386;
	int32_t x11 = INT32_MAX;
	volatile uint64_t x12 = 556934157715123LLU;
	uint64_t t2 = 16662366LLU;

    t2 = ((x9^(x10+x11))%x12);

    if (t2 != 2146280261LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int16_t x15 = INT16_MIN;
	int32_t t3 = -198;

    t3 = ((x13^(x14+x15))%x16);

    if (t3 != -32641) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 16U;
	uint8_t x19 = 2U;
	int8_t x20 = INT8_MIN;
	static int32_t t4 = -436827;

    t4 = ((x17^(x18+x19))%x20);

    if (t4 != -63) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MAX;
	int8_t x23 = -1;
	int32_t x24 = -1;
	int32_t t5 = 6228;

    t5 = ((x21^(x22+x23))%x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = -235736;
	int8_t x26 = INT8_MIN;
	uint32_t x27 = 489U;
	uint8_t x28 = 26U;

    t6 = ((x25^(x26+x27))%x28);

    if (t6 != 5U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x33 = -6838LL;
	uint32_t x35 = UINT32_MAX;
	static int16_t x36 = INT16_MAX;
	static volatile int64_t t7 = -304165531879930898LL;

    t7 = ((x33^(x34+x35))%x36);

    if (t7 != -25933LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int64_t x41 = INT64_MIN;
	int64_t x43 = INT64_MAX;
	int8_t x44 = -2;
	int64_t t8 = -477926092820LL;

    t8 = ((x41^(x42+x43))%x44);

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x46 = INT64_MAX;
	uint32_t x48 = 510818U;
	volatile int64_t t9 = 1094445156233LL;

    t9 = ((x45^(x46+x47))%x48);

    if (t9 != -147999LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x49 = INT64_MAX;
	static uint64_t x50 = 4583507344233042457LLU;
	int16_t x51 = INT16_MAX;
	int32_t x52 = -391729374;
	static volatile uint64_t t10 = 17037416361010LLU;

    t10 = ((x49^(x50+x51))%x52);

    if (t10 != 4639864692621700583LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x53 = 312950042U;
	static uint32_t x54 = 2068894U;
	volatile int16_t x55 = -1;
	int8_t x56 = -1;
	uint32_t t11 = 1697784976U;

    t11 = ((x53^(x54+x55))%x56);

    if (t11 != 314092679U) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x57 = UINT16_MAX;
	uint32_t x58 = 969437119U;
	uint32_t x59 = 1958356361U;
	int8_t x60 = INT8_MIN;
	uint32_t t12 = 3864586U;

    t12 = ((x57^(x58+x59))%x60);

    if (t12 != 2927782583U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x61 = INT64_MIN;
	int32_t x62 = INT32_MIN;
	volatile uint64_t x63 = 495928881323LLU;
	int64_t x64 = INT64_MIN;
	volatile uint64_t t13 = 190853971LLU;

    t13 = ((x61^(x62+x63))%x64);

    if (t13 != 493781397675LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x65 = 86U;
	volatile int8_t x66 = INT8_MAX;
	int32_t x67 = INT32_MIN;
	int32_t x68 = INT32_MIN;

    t14 = ((x65^(x66+x67))%x68);

    if (t14 != -2147483607) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x69 = UINT8_MAX;
	int64_t x70 = -42467LL;
	uint16_t x71 = 1U;
	uint16_t x72 = 7U;
	int64_t t15 = 63LL;

    t15 = ((x69^(x70+x71))%x72);

    if (t15 != -5LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x77 = INT32_MIN;
	int64_t x78 = -1LL;
	int8_t x79 = -1;
	volatile int64_t x80 = 1939061057494499LL;
	volatile int64_t t16 = -99337LL;

    t16 = ((x77^(x78+x79))%x80);

    if (t16 != 2147483646LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x85 = 4;
	int64_t x86 = -1LL;
	int16_t x87 = -1;
	int32_t x88 = INT32_MIN;
	static volatile int64_t t17 = -673664051503LL;

    t17 = ((x85^(x86+x87))%x88);

    if (t17 != -6LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x93 = 0;
	int16_t x94 = INT16_MAX;
	uint64_t x95 = 19000218LLU;
	uint8_t x96 = UINT8_MAX;
	uint64_t t18 = 82LLU;

    t18 = ((x93^(x94+x95))%x96);

    if (t18 != 40LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x97 = 2486447893317046LLU;
	uint16_t x98 = 1231U;
	int32_t x99 = 1687004;
	static uint64_t x100 = UINT64_MAX;
	volatile uint64_t t19 = 4766LLU;

    t19 = ((x97^(x98+x99))%x100);

    if (t19 != 2486447893825309LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x105 = INT8_MIN;
	int64_t x106 = -2367058857LL;
	int8_t x107 = 4;
	uint8_t x108 = 57U;
	volatile int64_t t20 = 6LL;

    t20 = ((x105^(x106+x107))%x108);

    if (t20 != 14LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x109 = INT32_MIN;
	uint16_t x110 = 69U;
	static int16_t x112 = -1;
	volatile int32_t t21 = 850696124;

    t21 = ((x109^(x110+x111))%x112);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x117 = 1;
	int32_t x119 = 4035;
	static uint32_t x120 = 3536653U;

    t22 = ((x117^(x118+x119))%x120);

    if (t22 != 4035U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x121 = 1807653587139154759LLU;
	int16_t x122 = -1;
	static uint8_t x123 = UINT8_MAX;
	static volatile uint64_t t23 = 11088997LLU;

    t23 = ((x121^(x122+x123))%x124);

    if (t23 != 73LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x125 = -6719;
	int8_t x126 = 1;
	int8_t x128 = 6;
	volatile int32_t t24 = -23697148;

    t24 = ((x125^(x126+x127))%x128);

    if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x131 = 1209427844417868LLU;
	static uint64_t t25 = 4752670930629016126LLU;

    t25 = ((x129^(x130+x131))%x132);

    if (t25 != 18445534646839888203LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x135 = 0;
	uint32_t x136 = UINT32_MAX;
	volatile int64_t t26 = -467457077182483LL;

    t26 = ((x133^(x134+x135))%x136);

    if (t26 != 2147483642LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x137 = 3;
	static int64_t x138 = -1LL;
	volatile uint16_t x139 = 0U;
	int64_t x140 = INT64_MAX;
	static int64_t t27 = 147134LL;

    t27 = ((x137^(x138+x139))%x140);

    if (t27 != -4LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x141 = INT16_MAX;
	volatile int64_t x142 = INT64_MIN;
	static volatile int8_t x144 = INT8_MIN;
	volatile int64_t t28 = -779180349063LL;

    t28 = ((x141^(x142+x143))%x144);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x145 = -12;
	int8_t x146 = 7;
	static uint32_t x148 = 39U;
	static volatile uint32_t t29 = 187387138U;

    t29 = ((x145^(x146+x147))%x148);

    if (t29 != 25U) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x149 = INT32_MIN;
	uint8_t x150 = UINT8_MAX;
	uint8_t x151 = UINT8_MAX;
	int64_t x152 = -24LL;
	int64_t t30 = -760795464347343LL;

    t30 = ((x149^(x150+x151))%x152);

    if (t30 != -2LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x153 = 28U;
	static int32_t x154 = INT32_MIN;
	uint32_t x155 = 67U;
	int64_t x156 = INT64_MIN;
	int64_t t31 = -636684850598LL;

    t31 = ((x153^(x154+x155))%x156);

    if (t31 != 2147483743LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x157 = UINT64_MAX;
	int8_t x158 = INT8_MAX;
	int16_t x160 = -1;
	volatile uint64_t t32 = 2626142128LLU;

    t32 = ((x157^(x158+x159))%x160);

    if (t32 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x165 = 5;
	static int16_t x166 = INT16_MAX;
	static uint32_t x167 = UINT32_MAX;
	uint32_t t33 = 0U;

    t33 = ((x165^(x166+x167))%x168);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x169 = -1;
	int8_t x170 = INT8_MAX;
	int8_t x172 = -1;
	int64_t t34 = -28667654856LL;

    t34 = ((x169^(x170+x171))%x172);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x173 = UINT8_MAX;
	volatile uint32_t x174 = 361262371U;
	volatile int64_t x176 = INT64_MAX;
	volatile int64_t t35 = 1814481816169545147LL;

    t35 = ((x173^(x174+x175))%x176);

    if (t35 != 2508746204LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x178 = UINT64_MAX;
	int8_t x179 = 31;
	uint32_t x180 = UINT32_MAX;
	uint64_t t36 = 36095168687727839LLU;

    t36 = ((x177^(x178+x179))%x180);

    if (t36 != 662786920LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x181 = -1LL;
	volatile int8_t x182 = 63;
	int32_t x184 = 15115;

    t37 = ((x181^(x182+x183))%x184);

    if (t37 != -191LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x186 = 30U;
	volatile int8_t x187 = 12;
	static int16_t x188 = INT16_MIN;
	static int32_t t38 = -236097;

    t38 = ((x185^(x186+x187))%x188);

    if (t38 != 34) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x193 = -2762129176004LL;
	volatile int8_t x194 = INT8_MIN;
	volatile int32_t x195 = 3785;
	volatile int64_t t39 = -63159286LL;

    t39 = ((x193^(x194+x195))%x196);

    if (t39 != -98LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x197 = INT64_MAX;
	static volatile uint64_t x198 = 186357517727LLU;
	int32_t x199 = INT32_MAX;
	int8_t x200 = -2;
	uint64_t t40 = 38271813900492LLU;

    t40 = ((x197^(x198+x199))%x200);

    if (t40 != 9223371848349774433LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x201 = -9;
	uint32_t x203 = UINT32_MAX;

    t41 = ((x201^(x202+x203))%x204);

    if (t41 != 68LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x205 = INT8_MIN;
	int16_t x206 = -309;
	int16_t x208 = INT16_MIN;
	int32_t t42 = -54;

    t42 = ((x205^(x206+x207))%x208);

    if (t42 != 459) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x213 = -1;
	uint8_t x214 = 1U;
	int8_t x215 = -1;
	uint32_t x216 = UINT32_MAX;
	uint32_t t43 = 43U;

    t43 = ((x213^(x214+x215))%x216);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x217 = -1;
	uint32_t x218 = 648U;
	uint64_t t44 = 115497LLU;

    t44 = ((x217^(x218+x219))%x220);

    if (t44 != 2147483000LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x221 = -3179617396216756LL;
	uint32_t x222 = 25520696U;
	uint64_t x223 = 651LLU;
	uint32_t x224 = 3174U;
	uint64_t t45 = 1022402667996907LLU;

    t45 = ((x221^(x222+x223))%x224);

    if (t45 != 5LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x229 = INT16_MIN;
	uint32_t x230 = 1U;
	int64_t x231 = INT64_MIN;
	int16_t x232 = INT16_MIN;
	int64_t t46 = 125LL;

    t46 = ((x229^(x230+x231))%x232);

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x233 = INT64_MAX;
	volatile uint64_t x236 = 44332245605612LLU;
	static uint64_t t47 = 0LLU;

    t47 = ((x233^(x234+x235))%x236);

    if (t47 != 8005623823973LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x245 = -1LL;
	uint64_t x246 = UINT64_MAX;
	int16_t x247 = 14770;
	volatile uint8_t x248 = 31U;
	volatile uint64_t t48 = 10092123435492LLU;

    t48 = ((x245^(x246+x247))%x248);

    if (t48 != 2LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x249 = UINT64_MAX;
	uint64_t x250 = UINT64_MAX;
	static volatile int64_t x251 = -1LL;
	static int32_t x252 = 660;
	uint64_t t49 = 2219570080034808414LLU;

    t49 = ((x249^(x250+x251))%x252);

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x253 = INT64_MIN;
	int8_t x254 = 2;
	int8_t x255 = INT8_MIN;
	static volatile int64_t t50 = -33614158828413LL;

    t50 = ((x253^(x254+x255))%x256);

    if (t50 != 158194050LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x257 = -41348672803144225LL;
	int8_t x258 = INT8_MIN;
	static uint32_t x259 = 58075676U;
	uint64_t x260 = 1940140LLU;
	uint64_t t51 = 24037186846LLU;

    t51 = ((x257^(x258+x259))%x260);

    if (t51 != 1484235LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x261 = UINT8_MAX;
	int16_t x262 = 0;
	static uint64_t t52 = 6438LLU;

    t52 = ((x261^(x262+x263))%x264);

    if (t52 != 90633179046119LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x265 = INT16_MIN;
	int8_t x266 = 36;
	int8_t x267 = -1;
	volatile int64_t x268 = -19455450LL;

    t53 = ((x265^(x266+x267))%x268);

    if (t53 != -32733LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x269 = -2698LL;
	int32_t x270 = 852757382;
	int64_t x271 = -1LL;
	uint64_t t54 = 66029762LLU;

    t54 = ((x269^(x270+x271))%x272);

    if (t54 != 18446744072856796915LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x273 = INT16_MIN;
	static uint32_t x274 = UINT32_MAX;
	int16_t x275 = INT16_MAX;
	int32_t x276 = INT32_MIN;
	uint32_t t55 = 0U;

    t55 = ((x273^(x274+x275))%x276);

    if (t55 != 2147483646U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x277 = 2U;
	uint8_t x280 = UINT8_MAX;
	static volatile uint64_t t56 = 13057020148751715LLU;

    t56 = ((x277^(x278+x279))%x280);

    if (t56 != 201LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x281 = INT32_MIN;
	int16_t x282 = INT16_MIN;
	volatile int8_t x283 = -1;
	int64_t x284 = -134800LL;
	volatile int64_t t57 = 0LL;

    t57 = ((x281^(x282+x283))%x284);

    if (t57 != 86879LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x285 = -1;
	int64_t x286 = -1LL;
	static int32_t x287 = INT32_MAX;
	static uint32_t x288 = 40239U;
	int64_t t58 = 2338217824473894LL;

    t58 = ((x285^(x286+x287))%x288);

    if (t58 != -8695LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint8_t x289 = 1U;
	static uint16_t x290 = 12U;
	uint16_t x291 = 421U;
	static volatile int32_t x292 = INT32_MAX;

    t59 = ((x289^(x290+x291))%x292);

    if (t59 != 432) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x294 = 7193;
	int32_t x296 = INT32_MAX;
	volatile int64_t t60 = -2488778535LL;

    t60 = ((x293^(x294+x295))%x296);

    if (t60 != -877916570LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x297 = 2162;
	volatile int32_t x298 = 3;
	static volatile uint64_t t61 = 325532599LLU;

    t61 = ((x297^(x298+x299))%x300);

    if (t61 != 3890132701312660175LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x301 = UINT8_MAX;
	uint8_t x302 = 123U;
	uint64_t x303 = 28296009465LLU;
	uint64_t t62 = 466078217946LLU;

    t62 = ((x301^(x302+x303))%x304);

    if (t62 != 28296009611LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x305 = INT8_MIN;
	int64_t x306 = -2648652LL;
	volatile int32_t x307 = INT32_MIN;

    t63 = ((x305^(x306+x307))%x308);

    if (t63 != 2LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x309 = -1;
	static int8_t x310 = INT8_MIN;
	int16_t x311 = -1;
	int16_t x312 = -730;

    t64 = ((x309^(x310+x311))%x312);

    if (t64 != 128) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x313 = INT32_MIN;
	int16_t x314 = 14;
	uint32_t x315 = 58317704U;
	static int64_t t65 = 1074712384686672LL;

    t65 = ((x313^(x314+x315))%x316);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x317 = INT64_MIN;
	static uint64_t x318 = 5364342LLU;
	int64_t x319 = -2492139399555LL;
	uint64_t t66 = 3045581LLU;

    t66 = ((x317^(x318+x319))%x320);

    if (t66 != 1094479535LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x321 = INT32_MAX;
	static uint64_t x322 = 5024750488192407LLU;
	static uint64_t x324 = 225920LLU;
	uint64_t t67 = 5083632677418416LLU;

    t67 = ((x321^(x322+x323))%x324);

    if (t67 != 73871LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x326 = UINT16_MAX;
	int64_t t68 = 365385685897127530LL;

    t68 = ((x325^(x326+x327))%x328);

    if (t68 != 2529138821LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x329 = -29;
	volatile int64_t x330 = -1LL;
	int8_t x331 = -1;
	static uint32_t x332 = UINT32_MAX;

    t69 = ((x329^(x330+x331))%x332);

    if (t69 != 29LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x333 = 4441;
	int16_t x334 = -1;
	volatile int16_t x335 = -1;
	int64_t x336 = INT64_MAX;

    t70 = ((x333^(x334+x335))%x336);

    if (t70 != -4441LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x337 = INT16_MAX;
	static uint64_t x338 = UINT64_MAX;
	volatile int8_t x339 = INT8_MIN;
	uint16_t x340 = 115U;
	static uint64_t t71 = 89021LLU;

    t71 = ((x337^(x338+x339))%x340);

    if (t71 != 26LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x341 = INT16_MAX;
	static int8_t x342 = 1;
	int16_t x343 = 25;
	volatile int32_t t72 = -150;

    t72 = ((x341^(x342+x343))%x344);

    if (t72 != 101) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x345 = 21062U;
	int32_t x346 = 26854522;
	int32_t x347 = 3;
	volatile int32_t t73 = -209434217;

    t73 = ((x345^(x346+x347))%x348);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x349 = UINT64_MAX;
	volatile uint16_t x350 = UINT16_MAX;
	static int8_t x352 = -1;
	volatile uint64_t t74 = 1740014539393851LLU;

    t74 = ((x349^(x350+x351))%x352);

    if (t74 != 18446744073709486015LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x353 = INT8_MAX;
	static int8_t x354 = INT8_MIN;
	static int32_t x355 = -1;
	int64_t x356 = INT64_MIN;
	int64_t t75 = -101196732622291654LL;

    t75 = ((x353^(x354+x355))%x356);

    if (t75 != -256LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x357 = 13430174238020228LLU;
	volatile int32_t x359 = -1;
	int16_t x360 = INT16_MIN;

    t76 = ((x357^(x358+x359))%x360);

    if (t76 != 13430174238020229LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x361 = 1U;
	int32_t x362 = INT32_MIN;
	uint64_t x364 = 24LLU;

    t77 = ((x361^(x362+x363))%x364);

    if (t77 != 14LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x369 = INT64_MIN;
	volatile uint8_t x370 = 23U;
	static uint32_t x371 = UINT32_MAX;
	int64_t t78 = 23441LL;

    t78 = ((x369^(x370+x371))%x372);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x377 = -1;
	uint8_t x378 = 37U;
	static int64_t x379 = -1LL;
	static int16_t x380 = -1;

    t79 = ((x377^(x378+x379))%x380);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x382 = 2362U;
	static volatile int16_t x383 = -99;
	int8_t x384 = INT8_MIN;

    t80 = ((x381^(x382+x383))%x384);

    if (t80 != 2282U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x385 = INT64_MAX;
	int8_t x388 = -21;
	int64_t t81 = -89570256147LL;

    t81 = ((x385^(x386+x387))%x388);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x390 = -49;
	int16_t x392 = INT16_MAX;
	static volatile int32_t t82 = -724935770;

    t82 = ((x389^(x390+x391))%x392);

    if (t82 != 32720) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x394 = UINT64_MAX;
	int32_t x395 = INT32_MIN;
	volatile int32_t x396 = -1;
	volatile uint64_t t83 = 27LLU;

    t83 = ((x393^(x394+x395))%x396);

    if (t83 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x397 = INT64_MIN;
	int8_t x398 = -5;
	static volatile uint32_t x399 = 1271441379U;
	int16_t x400 = -5;
	int64_t t84 = 12880132LL;

    t84 = ((x397^(x398+x399))%x400);

    if (t84 != -4LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x401 = -1;
	int32_t x402 = -120906239;
	static int16_t x403 = INT16_MIN;
	int16_t x404 = INT16_MAX;
	volatile int32_t t85 = 95577615;

    t85 = ((x401^(x402+x403))%x404);

    if (t85 != 28776) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x405 = -2;
	volatile int64_t x406 = INT64_MIN;

    t86 = ((x405^(x406+x407))%x408);

    if (t86 != 5332LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x409 = INT32_MIN;
	uint16_t x410 = 9U;
	int32_t x411 = INT32_MIN;
	volatile uint64_t t87 = 8LLU;

    t87 = ((x409^(x410+x411))%x412);

    if (t87 != 9LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x413 = INT32_MAX;
	uint16_t x415 = 884U;
	int16_t x416 = -2;
	static volatile int32_t t88 = 229617494;

    t88 = ((x413^(x414+x415))%x416);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x417 = UINT32_MAX;
	int16_t x419 = INT16_MIN;
	int64_t x420 = INT64_MIN;
	static int64_t t89 = -28992884522118754LL;

    t89 = ((x417^(x418+x419))%x420);

    if (t89 != 32766LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x421 = -1;
	int8_t x422 = INT8_MAX;
	uint8_t x423 = 15U;
	int32_t t90 = 25514620;

    t90 = ((x421^(x422+x423))%x424);

    if (t90 != -29) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x425 = UINT64_MAX;
	volatile uint64_t x426 = 6662268733955313LLU;
	volatile uint32_t x427 = 783967U;
	static uint8_t x428 = 1U;
	uint64_t t91 = 4347975286047827788LLU;

    t91 = ((x425^(x426+x427))%x428);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x429 = 27606087;
	static uint8_t x430 = 11U;
	int64_t x431 = -1LL;
	static uint8_t x432 = 11U;
	volatile int64_t t92 = -280LL;

    t92 = ((x429^(x430+x431))%x432);

    if (t92 != 9LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x433 = 6LL;
	volatile int8_t x434 = INT8_MAX;
	static uint8_t x435 = 5U;
	uint64_t x436 = 26840LLU;
	volatile uint64_t t93 = 1770401438582069352LLU;

    t93 = ((x433^(x434+x435))%x436);

    if (t93 != 130LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x437 = -53922762;
	int8_t x438 = INT8_MIN;
	int32_t x440 = INT32_MAX;

    t94 = ((x437^(x438+x439))%x440);

    if (t94 != 53922633) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x441 = UINT8_MAX;
	volatile uint32_t x442 = UINT32_MAX;
	static volatile int8_t x443 = INT8_MAX;
	static volatile uint32_t t95 = 1247196U;

    t95 = ((x441^(x442+x443))%x444);

    if (t95 != 129U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x445 = INT64_MAX;
	int16_t x446 = INT16_MIN;
	uint8_t x447 = 0U;

    t96 = ((x445^(x446+x447))%x448);

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x449 = INT8_MAX;
	int64_t x451 = INT64_MIN;
	static int32_t x452 = INT32_MIN;
	static volatile int64_t t97 = 1LL;

    t97 = ((x449^(x450+x451))%x452);

    if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint32_t x454 = 3025019U;
	static int8_t x455 = -1;
	uint32_t x456 = 522374U;
	static volatile uint32_t t98 = 1301740822U;

    t98 = ((x453^(x454+x455))%x456);

    if (t98 != 473499U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x457 = INT16_MIN;
	int16_t x458 = INT16_MAX;
	static int16_t x459 = INT16_MIN;
	static int8_t x460 = -8;
	volatile int32_t t99 = -155181153;

    t99 = ((x457^(x458+x459))%x460);

    if (t99 != 7) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int8_t x462 = INT8_MIN;

    t100 = ((x461^(x462+x463))%x464);

    if (t100 != 24121LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x465 = INT8_MIN;
	int32_t x466 = 3;
	int64_t x467 = INT64_MIN;
	volatile int64_t t101 = 272598656541LL;

    t101 = ((x465^(x466+x467))%x468);

    if (t101 != 32643LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x469 = 2;
	int8_t x470 = -1;
	int16_t x471 = -1;
	int64_t x472 = 321127695512644LL;
	volatile int64_t t102 = -22661LL;

    t102 = ((x469^(x470+x471))%x472);

    if (t102 != -4LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x473 = -50030898;
	volatile int8_t x474 = INT8_MIN;
	uint32_t x476 = 25820U;
	volatile uint32_t t103 = 32604U;

    t103 = ((x473^(x474+x475))%x476);

    if (t103 != 17685U) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x478 = -256454;
	int8_t x480 = 1;

    t104 = ((x477^(x478+x479))%x480);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x481 = INT64_MAX;
	uint8_t x483 = 41U;
	volatile int16_t x484 = -28;

    t105 = ((x481^(x482+x483))%x484);

    if (t105 != 20LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int8_t x486 = INT8_MIN;
	volatile int64_t x487 = -1LL;
	int8_t x488 = INT8_MAX;
	uint64_t t106 = 840626988303LLU;

    t106 = ((x485^(x486+x487))%x488);

    if (t106 != 122LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x493 = INT64_MAX;
	int16_t x494 = INT16_MIN;
	uint8_t x495 = 1U;
	volatile int8_t x496 = -1;

    t107 = ((x493^(x494+x495))%x496);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x497 = UINT16_MAX;
	int64_t x499 = -1200280LL;
	int32_t x500 = -1;
	static volatile int64_t t108 = -26711LL;

    t108 = ((x497^(x498+x499))%x500);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x501 = 10166LLU;
	uint32_t x503 = 232064U;
	uint64_t t109 = 9513147LLU;

    t109 = ((x501^(x502+x503))%x504);

    if (t109 != 273865LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x505 = INT64_MAX;
	static uint64_t x506 = 25424596488LLU;
	int16_t x508 = 9684;
	uint64_t t110 = 92582359273937338LLU;

    t110 = ((x505^(x506+x507))%x508);

    if (t110 != 7680LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x509 = 87U;
	static int32_t x510 = -1;
	volatile int16_t x511 = 59;
	volatile int64_t x512 = 41415LL;
	volatile int64_t t111 = -106268385LL;

    t111 = ((x509^(x510+x511))%x512);

    if (t111 != 109LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint64_t x513 = 6434710773534281298LLU;
	volatile uint8_t x514 = UINT8_MAX;
	volatile int32_t x515 = 5;
	uint32_t x516 = UINT32_MAX;
	static volatile uint64_t t112 = 1LLU;

    t112 = ((x513^(x514+x515))%x516);

    if (t112 != 2049998513LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x525 = UINT8_MAX;

    t113 = ((x525^(x526+x527))%x528);

    if (t113 != 25LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x530 = -1LL;
	int32_t x532 = -1;
	int64_t t114 = -9LL;

    t114 = ((x529^(x530+x531))%x532);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x533 = 63205510148286LL;
	static int64_t x534 = INT64_MIN;

    t115 = ((x533^(x534+x535))%x536);

    if (t115 != -19808LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x537 = INT32_MIN;
	volatile uint32_t x538 = UINT32_MAX;
	uint64_t x539 = UINT64_MAX;
	int16_t x540 = 767;
	static uint64_t t116 = 1077385242268584LLU;

    t116 = ((x537^(x538+x539))%x540);

    if (t116 != 302LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x541 = 54U;
	uint8_t x542 = 13U;
	int64_t x543 = 26787LL;
	int32_t x544 = 833063127;
	static volatile int64_t t117 = -6665831LL;

    t117 = ((x541^(x542+x543))%x544);

    if (t117 != 26758LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x545 = -1;
	int64_t x546 = INT64_MIN;
	uint16_t x547 = 6U;
	int32_t x548 = -25995;
	int64_t t118 = 0LL;

    t118 = ((x545^(x546+x547))%x548);

    if (t118 != 14476LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x550 = INT16_MAX;
	int32_t x552 = -1;
	int32_t t119 = 663;

    t119 = ((x549^(x550+x551))%x552);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x553 = INT8_MIN;
	int64_t x556 = 57LL;
	uint64_t t120 = 126LLU;

    t120 = ((x553^(x554+x555))%x556);

    if (t120 != 25LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x565 = 133045U;
	volatile int16_t x566 = INT16_MIN;
	volatile int8_t x567 = INT8_MAX;
	int16_t x568 = -1;
	uint32_t t121 = 789U;

    t121 = ((x565^(x566+x567))%x568);

    if (t121 != 4294805450U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x570 = 444446168962379LLU;
	int32_t x572 = -1;
	uint64_t t122 = 4044114LLU;

    t122 = ((x569^(x570+x571))%x572);

    if (t122 != 9222927590685813427LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x574 = INT16_MAX;
	int16_t x575 = INT16_MIN;
	volatile int16_t x576 = -99;
	uint32_t t123 = 133493U;

    t123 = ((x573^(x574+x575))%x576);

    if (t123 != 4294535613U) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x577 = INT8_MIN;
	int32_t x579 = INT32_MAX;
	int16_t x580 = INT16_MAX;
	uint32_t t124 = 19801774U;

    t124 = ((x577^(x578+x579))%x580);

    if (t124 != 21604U) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x581 = INT64_MIN;
	int16_t x582 = 4770;
	int16_t x584 = INT16_MAX;
	volatile int64_t t125 = -11177LL;

    t125 = ((x581^(x582+x583))%x584);

    if (t125 != -30645LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x589 = INT64_MAX;
	static uint16_t x591 = UINT16_MAX;
	uint16_t x592 = 5U;
	int64_t t126 = -3553601520LL;

    t126 = ((x589^(x590+x591))%x592);

    if (t126 != 4LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x594 = UINT8_MAX;
	int16_t x595 = INT16_MAX;
	volatile int64_t x596 = INT64_MAX;

    t127 = ((x593^(x594+x595))%x596);

    if (t127 != -65282LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x601 = -1LL;
	volatile uint64_t x602 = UINT64_MAX;
	int32_t x603 = INT32_MIN;
	int32_t x604 = INT32_MIN;

    t128 = ((x601^(x602+x603))%x604);

    if (t128 != 2147483648LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x610 = 341959249;
	volatile int32_t x611 = INT32_MIN;
	int32_t t129 = -10991;

    t129 = ((x609^(x610+x611))%x612);

    if (t129 != -105) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x613 = 5U;
	static volatile int16_t x614 = INT16_MIN;
	int8_t x615 = -1;
	static uint64_t t130 = 8LLU;

    t130 = ((x613^(x614+x615))%x616);

    if (t130 != 18446744073709518842LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x617 = INT32_MIN;
	uint8_t x618 = 1U;
	int16_t x619 = 57;
	volatile int32_t x620 = -1;

    t131 = ((x617^(x618+x619))%x620);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x622 = INT16_MIN;
	int16_t x623 = -2;
	static int16_t x624 = INT16_MIN;
	volatile int32_t t132 = 7427;

    t132 = ((x621^(x622+x623))%x624);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x629 = INT32_MAX;
	uint16_t x630 = 0U;
	static volatile uint16_t x631 = UINT16_MAX;
	uint64_t x632 = 729933LLU;
	uint64_t t133 = 133LLU;

    t133 = ((x629^(x630+x631))%x632);

    if (t133 != 685159LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x633 = INT8_MIN;
	int64_t x634 = INT64_MIN;
	volatile uint16_t x635 = 1U;
	volatile int64_t t134 = -1038330400204549LL;

    t134 = ((x633^(x634+x635))%x636);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x637 = 29660U;
	uint64_t x638 = UINT64_MAX;
	int8_t x639 = -1;
	static volatile int8_t x640 = INT8_MAX;
	volatile uint64_t t135 = 33920772LLU;

    t135 = ((x637^(x638+x639))%x640);

    if (t135 != 58LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x641 = -580873950LL;
	uint16_t x642 = 62U;
	int16_t x643 = -1;
	uint16_t x644 = 5U;
	static volatile int64_t t136 = 0LL;

    t136 = ((x641^(x642+x643))%x644);

    if (t136 != -3LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x645 = INT16_MIN;
	int32_t x646 = -73;
	static int16_t x647 = -399;
	volatile int16_t x648 = INT16_MIN;
	static volatile int32_t t137 = 44295;

    t137 = ((x645^(x646+x647))%x648);

    if (t137 != 32296) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x649 = -107726214806LL;
	uint16_t x650 = 1U;
	int64_t x651 = INT64_MIN;
	int64_t x652 = -59455LL;
	int64_t t138 = -298346660719263750LL;

    t138 = ((x649^(x650+x651))%x652);

    if (t138 != 58198LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x654 = 6556U;
	int16_t x655 = INT16_MIN;
	static int8_t x656 = -6;
	volatile int32_t t139 = 5;

    t139 = ((x653^(x654+x655))%x656);

    if (t139 != -3) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x658 = INT32_MAX;
	uint64_t x659 = 259LLU;
	static int64_t x660 = INT64_MIN;
	uint64_t t140 = 1261826672LLU;

    t140 = ((x657^(x658+x659))%x660);

    if (t140 != 9223372034707291901LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x661 = 5037699882798LL;
	int16_t x662 = -1;
	volatile int16_t x663 = INT16_MIN;
	int8_t x664 = INT8_MIN;

    t141 = ((x661^(x662+x663))%x664);

    if (t141 != -47LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x665 = 1LLU;
	static uint16_t x666 = 244U;
	uint32_t x667 = 21U;
	int32_t x668 = INT32_MIN;
	volatile uint64_t t142 = 2844842921113LLU;

    t142 = ((x665^(x666+x667))%x668);

    if (t142 != 264LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x669 = INT8_MIN;
	int32_t x671 = 141;
	uint64_t x672 = 957747615679915LLU;
	uint64_t t143 = 18368LLU;

    t143 = ((x669^(x670+x671))%x672);

    if (t143 != 2147483405LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x674 = 91U;
	int8_t x675 = -6;
	uint32_t t144 = 2509158U;

    t144 = ((x673^(x674+x675))%x676);

    if (t144 != 4294967210U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x685 = 11703452727942LLU;
	int32_t x686 = -1;
	int64_t x687 = -99LL;
	static int16_t x688 = INT16_MIN;
	volatile uint64_t t145 = 1281302424456339LLU;

    t145 = ((x685^(x686+x687))%x688);

    if (t145 != 18446732370256823578LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x693 = -1;
	uint16_t x694 = 25U;
	uint8_t x695 = UINT8_MAX;
	int32_t x696 = INT32_MAX;
	volatile int32_t t146 = -1932;

    t146 = ((x693^(x694+x695))%x696);

    if (t146 != -281) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x698 = 22LLU;
	int64_t x699 = -1LL;
	static volatile int64_t x700 = INT64_MIN;
	volatile uint64_t t147 = 557111881052261646LLU;

    t147 = ((x697^(x698+x699))%x700);

    if (t147 != 65514LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x701 = -401221928316426131LL;
	int8_t x702 = -1;
	volatile int16_t x703 = INT16_MIN;
	static int16_t x704 = INT16_MIN;
	int64_t t148 = 2897622056381545LL;

    t148 = ((x701^(x702+x703))%x704);

    if (t148 != 22418LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x705 = INT64_MIN;
	int64_t x706 = -21015201LL;
	uint64_t x707 = 24922267545250LLU;
	uint8_t x708 = 43U;
	uint64_t t149 = 34620318940864LLU;

    t149 = ((x705^(x706+x707))%x708);

    if (t149 != 33LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int32_t x709 = 1790339;
	volatile uint8_t x710 = 2U;
	static uint32_t x711 = UINT32_MAX;
	int32_t x712 = 61443507;
	uint32_t t150 = 98580348U;

    t150 = ((x709^(x710+x711))%x712);

    if (t150 != 1790338U) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x713 = 9LL;
	static int16_t x714 = INT16_MIN;
	int32_t x715 = -1;
	uint16_t x716 = 463U;

    t151 = ((x713^(x714+x715))%x716);

    if (t151 != -368LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x718 = 7U;
	int32_t x719 = INT32_MIN;
	volatile int32_t x720 = -1;
	volatile uint32_t t152 = 6768835U;

    t152 = ((x717^(x718+x719))%x720);

    if (t152 != 2147483679U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x721 = INT16_MIN;
	uint64_t x722 = 93LLU;
	volatile int64_t x723 = 242475758LL;

    t153 = ((x721^(x722+x723))%x724);

    if (t153 != 9223372036612318027LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x725 = -1LL;
	uint8_t x726 = 7U;
	int16_t x727 = 7;

    t154 = ((x725^(x726+x727))%x728);

    if (t154 != -15LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x729 = INT32_MIN;
	int16_t x730 = INT16_MIN;
	static int16_t x731 = INT16_MIN;
	int32_t x732 = -27961072;
	int32_t t155 = 1;

    t155 = ((x729^(x730+x731))%x732);

    if (t155 != 22376640) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x734 = INT32_MAX;
	int16_t x735 = INT16_MIN;
	static int32_t t156 = -171875576;

    t156 = ((x733^(x734+x735))%x736);

    if (t156 != 65534) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x738 = INT8_MIN;
	uint64_t x739 = 3669LLU;
	uint8_t x740 = 4U;
	uint64_t t157 = 1966LLU;

    t157 = ((x737^(x738+x739))%x740);

    if (t157 != 3LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x745 = 772751567846251LLU;
	volatile uint64_t t158 = 7554501121415LLU;

    t158 = ((x745^(x746+x747))%x748);

    if (t158 != 5LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x749 = -5;
	volatile int64_t x750 = INT64_MIN;
	int64_t t159 = 2726077951LL;

    t159 = ((x749^(x750+x751))%x752);

    if (t159 != 20LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x757 = INT64_MIN;
	int64_t x758 = -1LL;
	volatile int8_t x759 = 0;
	int64_t x760 = -1LL;
	int64_t t160 = 8072620666964LL;

    t160 = ((x757^(x758+x759))%x760);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x762 = 1817410LL;
	uint64_t x763 = 3433460662LLU;
	int8_t x764 = 3;
	uint64_t t161 = 18503081LLU;

    t161 = ((x761^(x762+x763))%x764);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x765 = INT8_MAX;
	int16_t x766 = -3;
	static int32_t x767 = -24618182;
	static volatile int8_t x768 = INT8_MIN;
	static int32_t t162 = 76;

    t162 = ((x765^(x766+x767))%x768);

    if (t162 != -56) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x769 = 181U;
	static int16_t x770 = 458;
	uint8_t x771 = UINT8_MAX;
	uint64_t x772 = 31072596023316LLU;

    t163 = ((x769^(x770+x771))%x772);

    if (t163 != 636LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x773 = -1;
	volatile int64_t x774 = 162037253822418LL;
	int64_t x775 = INT64_MIN;
	int16_t x776 = INT16_MIN;
	volatile int64_t t164 = -57987394LL;

    t164 = ((x773^(x774+x775))%x776);

    if (t164 != 10285LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x777 = -1;
	volatile int64_t x778 = INT64_MIN;
	static int8_t x779 = 1;
	int8_t x780 = 1;
	volatile int64_t t165 = 357613676LL;

    t165 = ((x777^(x778+x779))%x780);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x782 = INT16_MIN;
	static uint32_t x784 = 717292U;
	volatile uint32_t t166 = 3465521U;

    t166 = ((x781^(x782+x783))%x784);

    if (t166 != 507324U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x785 = 0U;
	int8_t x786 = INT8_MIN;
	int8_t x787 = INT8_MAX;
	static int8_t x788 = -1;
	int32_t t167 = -248433;

    t167 = ((x785^(x786+x787))%x788);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x790 = INT8_MIN;
	uint16_t x791 = UINT16_MAX;
	static uint64_t x792 = UINT64_MAX;
	volatile uint64_t t168 = 94437621248394976LLU;

    t168 = ((x789^(x790+x791))%x792);

    if (t168 != 18446744065157010178LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x794 = 94;

    t169 = ((x793^(x794+x795))%x796);

    if (t169 != 1481334529868344LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x797 = INT64_MIN;
	int64_t x798 = 823648045384LL;
	static int64_t x800 = INT64_MIN;
	volatile int64_t t170 = 6779750255980LL;

    t170 = ((x797^(x798+x799))%x800);

    if (t170 != -9223371213206730425LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x801 = INT64_MIN;
	static int8_t x803 = -1;
	int32_t x804 = -1;
	int64_t t171 = -1763936931LL;

    t171 = ((x801^(x802+x803))%x804);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x805 = INT8_MIN;
	int32_t x806 = -342;
	int16_t x807 = -7703;
	volatile int16_t x808 = 2;
	int32_t t172 = -3;

    t172 = ((x805^(x806+x807))%x808);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x811 = INT64_MAX;
	int32_t x812 = INT32_MAX;

    t173 = ((x809^(x810+x811))%x812);

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x813 = -1;
	int8_t x815 = INT8_MAX;
	static volatile int32_t x816 = -1;
	volatile int64_t t174 = 6656297652857LL;

    t174 = ((x813^(x814+x815))%x816);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x817 = -2681;
	static volatile int64_t x818 = INT64_MIN;
	uint8_t x819 = UINT8_MAX;

    t175 = ((x817^(x818+x819))%x820);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x821 = -2226379211160704LL;
	uint32_t x822 = UINT32_MAX;
	int64_t x823 = 98521716263512LL;
	static volatile int16_t x824 = -640;

    t176 = ((x821^(x822+x823))%x824);

    if (t176 != -425LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x826 = UINT64_MAX;
	uint8_t x827 = 7U;
	uint16_t x828 = UINT16_MAX;
	volatile uint64_t t177 = 4651345227366645LLU;

    t177 = ((x825^(x826+x827))%x828);

    if (t177 != 65529LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x829 = 1053710U;
	int32_t x830 = 1;
	static int16_t x832 = INT16_MIN;
	uint32_t t178 = 4048425U;

    t178 = ((x829^(x830+x831))%x832);

    if (t178 != 1053718U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x833 = 48U;
	int32_t x834 = 3821827;
	uint64_t x835 = 18279059LLU;
	static int32_t x836 = INT32_MIN;
	volatile uint64_t t179 = 298558998384LLU;

    t179 = ((x833^(x834+x835))%x836);

    if (t179 != 22100902LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x837 = 21U;
	int64_t x839 = INT64_MIN;
	static int64_t t180 = 3LL;

    t180 = ((x837^(x838+x839))%x840);

    if (t180 != -9223372036854775788LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x841 = INT32_MAX;
	uint16_t x842 = 3758U;
	uint16_t x843 = 14U;
	int32_t x844 = -2377159;
	int32_t t181 = 200657693;

    t181 = ((x841^(x842+x843))%x844);

    if (t181 != 905298) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x846 = -26;
	volatile uint16_t x847 = 771U;
	static volatile int32_t x848 = 15410020;

    t182 = ((x845^(x846+x847))%x848);

    if (t182 != 10980990U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x849 = 1U;
	uint32_t x850 = 6233U;
	volatile int32_t x851 = INT32_MIN;
	int32_t x852 = 1;

    t183 = ((x849^(x850+x851))%x852);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x853 = -1;
	static uint32_t x854 = 7004301U;
	uint8_t x855 = 14U;
	volatile int8_t x856 = INT8_MIN;
	volatile uint32_t t184 = 2U;

    t184 = ((x853^(x854+x855))%x856);

    if (t184 != 4287962980U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x861 = -3930251LL;
	uint16_t x862 = 24U;
	volatile int16_t x863 = INT16_MAX;
	uint16_t x864 = 19316U;
	volatile int64_t t185 = 230569543530605LL;

    t185 = ((x861^(x862+x863))%x864);

    if (t185 != -14986LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x865 = INT64_MAX;
	int32_t x866 = INT32_MAX;
	static int64_t t186 = 2657170199008362LL;

    t186 = ((x865^(x866+x867))%x868);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x869 = 0LLU;
	int32_t x870 = 310;
	int16_t x872 = INT16_MIN;
	volatile uint64_t t187 = 463239573738LLU;

    t187 = ((x869^(x870+x871))%x872);

    if (t187 != 565LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x877 = 1U;
	static int64_t x878 = -1LL;
	volatile int8_t x879 = INT8_MIN;
	int32_t x880 = -492234920;
	volatile int64_t t188 = 59351322LL;

    t188 = ((x877^(x878+x879))%x880);

    if (t188 != -130LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x881 = 63U;
	int8_t x882 = -1;
	volatile uint8_t x883 = UINT8_MAX;
	int32_t x884 = INT32_MIN;
	int32_t t189 = 256961985;

    t189 = ((x881^(x882+x883))%x884);

    if (t189 != 193) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x885 = 0U;
	uint8_t x888 = 6U;

    t190 = ((x885^(x886+x887))%x888);

    if (t190 != 5U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x893 = INT8_MIN;
	static int8_t x894 = -1;
	uint16_t x895 = 366U;
	int64_t x896 = 1384136332LL;
	volatile int64_t t191 = -61999436265LL;

    t191 = ((x893^(x894+x895))%x896);

    if (t191 != -275LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x897 = -334755070386146LL;
	uint8_t x898 = 58U;
	volatile int8_t x899 = -11;
	int64_t t192 = -1LL;

    t192 = ((x897^(x898+x899))%x900);

    if (t192 != -32462821LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x901 = INT64_MIN;
	int64_t x904 = 21403031507124822LL;
	int64_t t193 = -535054506758LL;

    t193 = ((x901^(x902+x903))%x904);

    if (t193 != 20068488791102346LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x905 = INT8_MIN;
	volatile int16_t x906 = -1;
	volatile int8_t x907 = -1;
	volatile int16_t x908 = -1;
	static volatile int32_t t194 = 390;

    t194 = ((x905^(x906+x907))%x908);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x909 = UINT64_MAX;
	uint64_t x910 = 99LLU;
	static uint16_t x911 = 334U;
	static volatile uint64_t t195 = 81499654422LLU;

    t195 = ((x909^(x910+x911))%x912);

    if (t195 != 18446744073709551182LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x913 = 7151U;
	volatile int8_t x914 = INT8_MAX;
	int64_t x915 = INT64_MIN;
	static int32_t x916 = INT32_MIN;
	volatile int64_t t196 = 495452294LL;

    t196 = ((x913^(x914+x915))%x916);

    if (t196 != -2147476592LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint32_t x917 = UINT32_MAX;
	volatile int8_t x918 = -38;
	volatile int32_t x920 = INT32_MIN;

    t197 = ((x917^(x918+x919))%x920);

    if (t197 != 2147325420U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x921 = INT32_MIN;
	int8_t x922 = 7;
	int16_t x923 = INT16_MIN;
	uint32_t x924 = UINT32_MAX;
	volatile uint32_t t198 = 62121U;

    t198 = ((x921^(x922+x923))%x924);

    if (t198 != 2147450887U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x929 = 61U;
	static int64_t x930 = INT64_MIN;
	uint8_t x932 = 50U;
	volatile int64_t t199 = -313LL;

    t199 = ((x929^(x930+x931))%x932);

    if (t199 != -10LL) { NG(); } else { ; }
	
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

