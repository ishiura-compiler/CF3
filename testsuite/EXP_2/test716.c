
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

uint32_t x10 = UINT32_MAX;
uint16_t x22 = 8U;
uint64_t t6 = 1609652635863978LLU;
uint8_t x31 = 6U;
static int32_t x39 = -1;
int8_t x40 = INT8_MAX;
int32_t x54 = -1;
volatile int16_t x64 = INT16_MIN;
volatile uint16_t x78 = UINT16_MAX;
volatile int32_t t16 = -176298;
int8_t x84 = INT8_MIN;
static volatile int32_t x85 = INT32_MIN;
uint64_t x89 = 187394916437LLU;
volatile uint8_t x94 = 94U;
int16_t x105 = -1;
int8_t x113 = INT8_MIN;
int64_t x119 = 34207LL;
volatile int64_t x122 = INT64_MIN;
volatile int16_t x126 = INT16_MIN;
volatile int32_t t28 = -625;
int64_t x143 = INT64_MAX;
uint8_t x148 = 0U;
uint64_t x149 = 497717159LLU;
uint32_t x152 = 38932U;
static volatile int32_t t34 = -203;
int8_t x165 = 16;
int16_t x167 = INT16_MIN;
uint64_t x168 = 102054078LLU;
static int64_t x186 = INT64_MAX;
static int32_t t43 = -402;
volatile int32_t t46 = 653;
int16_t x220 = -2381;
volatile uint32_t x225 = UINT32_MAX;
int64_t x240 = -882637LL;
volatile int8_t x241 = -1;
static int32_t x246 = -1;
static uint32_t x249 = UINT32_MAX;
static volatile int32_t t58 = 1374;
int32_t x262 = -1;
uint8_t x270 = 1U;
volatile int32_t t66 = 0;
uint8_t x295 = 9U;
static int32_t t67 = 30416650;
static uint32_t x310 = UINT32_MAX;
volatile int16_t x324 = INT16_MIN;
int32_t t74 = -63301305;
volatile int8_t x361 = INT8_MIN;
uint32_t x364 = 14629U;
int16_t x365 = INT16_MIN;
volatile int64_t x373 = 242875890LL;
int32_t x378 = INT32_MIN;
volatile int8_t x380 = INT8_MIN;
int32_t t85 = 1903;
uint8_t x384 = UINT8_MAX;
int32_t x403 = INT32_MIN;
volatile int64_t x406 = INT64_MAX;
volatile int32_t x429 = -1;
volatile int32_t x431 = -1;
int64_t x433 = 156625177323395372LL;
uint16_t x434 = 0U;
int32_t t98 = 359002612;
int16_t x437 = -1;
int8_t x443 = -1;
uint64_t x444 = 16420804111153LLU;
volatile uint16_t x447 = 33U;
int16_t x450 = INT16_MIN;
int64_t x458 = INT64_MIN;
volatile int64_t t104 = -23LL;
volatile uint64_t t105 = 2956115704403LLU;
static volatile int64_t x473 = -1LL;
int64_t x477 = -93791LL;
int32_t t109 = -10504;
int32_t x483 = INT32_MIN;
int8_t x484 = INT8_MAX;
uint32_t x491 = UINT32_MAX;
int32_t t111 = 2032286;
int8_t x494 = INT8_MAX;
static int32_t t112 = -14152;
int16_t x497 = -118;
volatile int32_t t113 = 2530;
int32_t t114 = 238419;
static volatile int32_t x510 = 258325;
volatile int16_t x512 = INT16_MAX;
int16_t x522 = -1;
int64_t x530 = 86819367662LL;
int32_t x538 = -1;
static uint64_t x540 = 2734749645882762LLU;
int16_t x543 = 5;
int8_t x545 = -1;
volatile int16_t x553 = 96;
volatile int8_t x557 = -1;
uint16_t x560 = 7U;
int32_t t127 = 11531380;
static int8_t x561 = INT8_MAX;
int16_t x562 = 0;
static int16_t x567 = INT16_MIN;
static uint8_t x573 = 12U;
int64_t t131 = -4082787LL;
static volatile uint16_t x589 = UINT16_MAX;
int16_t x601 = 16135;
uint32_t x613 = 24612640U;
int64_t x614 = INT64_MIN;
uint32_t x619 = 637478U;
uint32_t x622 = 216778U;
uint32_t x623 = UINT32_MAX;
static int32_t t144 = -16232;
static volatile int32_t t146 = 1192819;
int32_t t148 = -51;
int16_t x653 = -1;
static int8_t x660 = INT8_MAX;
volatile uint64_t t152 = 90LLU;
uint16_t x670 = 2660U;
volatile int64_t x672 = -237LL;
int8_t x673 = INT8_MIN;
int32_t x677 = 343294;
int32_t t156 = -9257;
uint16_t x694 = UINT16_MAX;
int8_t x701 = 0;
static uint16_t x709 = 29203U;
int32_t x710 = -1359611;
volatile uint32_t x712 = 50146283U;
int16_t x722 = INT16_MIN;
uint16_t x724 = 13U;
int32_t t167 = -6;
int16_t x742 = INT16_MAX;
int64_t x743 = -28LL;
uint16_t x760 = 1280U;
int32_t t173 = 111;
int64_t x770 = INT64_MIN;
volatile uint32_t x773 = 3619276U;
static int16_t x777 = INT16_MAX;
uint32_t x778 = UINT32_MAX;
int64_t x785 = -960904LL;
int16_t x792 = -1;
int32_t x793 = -8052;
volatile uint16_t x802 = 3U;
uint32_t x803 = 27464U;
volatile int32_t t184 = 429;
int16_t x825 = -1;
volatile int32_t t186 = 1245058;
volatile int16_t x829 = INT16_MIN;
int8_t x830 = 0;
static volatile int32_t t188 = -950469368;
volatile int64_t t189 = 3475623621606475211LL;
int64_t t190 = 6652605LL;
static uint8_t x849 = UINT8_MAX;
uint64_t x852 = 1430128403LLU;
uint32_t t195 = 56415U;
static int32_t x886 = INT32_MIN;


void f0(void) {
    	int16_t x1 = -1;
	uint16_t x2 = 100U;
	int64_t x3 = INT64_MIN;
	int8_t x4 = -1;
	int32_t t0 = -194210;

    t0 = ((x1<=(x2/x3))-x4);

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -9383823;
	int32_t x6 = INT32_MAX;
	uint16_t x7 = 147U;
	int8_t x8 = -1;
	volatile int32_t t1 = 2;

    t1 = ((x5<=(x6/x7))-x8);

    if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 15781154972422000LLU;
	uint8_t x11 = 1U;
	int32_t x12 = 354811;
	volatile int32_t t2 = 3529474;

    t2 = ((x9<=(x10/x11))-x12);

    if (t2 != -354811) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	volatile int64_t x14 = -1LL;
	static int64_t x15 = INT64_MAX;
	int32_t x16 = -7741;
	int32_t t3 = -346;

    t3 = ((x13<=(x14/x15))-x16);

    if (t3 != 7741) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x17 = 79289U;
	int8_t x18 = INT8_MIN;
	int8_t x19 = -1;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = 58850;

    t4 = ((x17<=(x18/x19))-x20);

    if (t4 != -65535) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 4485972525050201137LLU;
	static int16_t x23 = INT16_MIN;
	int64_t x24 = 1LL;
	static int64_t t5 = -6687077987273201LL;

    t5 = ((x21<=(x22/x23))-x24);

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = 47;
	uint64_t x26 = 82155799984918LLU;
	uint32_t x27 = 68U;
	uint64_t x28 = UINT64_MAX;

    t6 = ((x25<=(x26/x27))-x28);

    if (t6 != 2LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = -1;
	uint64_t x30 = UINT64_MAX;
	uint8_t x32 = 5U;
	volatile int32_t t7 = -108;

    t7 = ((x29<=(x30/x31))-x32);

    if (t7 != -5) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = INT64_MAX;
	uint64_t x34 = 696285045985LLU;
	uint64_t x35 = UINT64_MAX;
	static uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = 220040;

    t8 = ((x33<=(x34/x35))-x36);

    if (t8 != -255) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint8_t x37 = 82U;
	static uint8_t x38 = UINT8_MAX;
	int32_t t9 = -3;

    t9 = ((x37<=(x38/x39))-x40);

    if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = INT8_MIN;
	uint8_t x46 = 0U;
	uint8_t x47 = UINT8_MAX;
	uint64_t x48 = UINT64_MAX;
	uint64_t t10 = 1014362813720026LLU;

    t10 = ((x45<=(x46/x47))-x48);

    if (t10 != 2LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = -1;
	static volatile int64_t x50 = -1LL;
	int8_t x51 = INT8_MIN;
	int8_t x52 = INT8_MAX;
	int32_t t11 = -67743769;

    t11 = ((x49<=(x50/x51))-x52);

    if (t11 != -126) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x53 = -1LL;
	static uint64_t x55 = UINT64_MAX;
	volatile int16_t x56 = INT16_MIN;
	int32_t t12 = -3257;

    t12 = ((x53<=(x54/x55))-x56);

    if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x61 = INT8_MIN;
	int8_t x62 = -2;
	int64_t x63 = -2526LL;
	int32_t t13 = 466618;

    t13 = ((x61<=(x62/x63))-x64);

    if (t13 != 32769) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x69 = INT32_MAX;
	int8_t x70 = INT8_MAX;
	int64_t x71 = INT64_MAX;
	static int32_t x72 = 9051803;
	static int32_t t14 = -4956;

    t14 = ((x69<=(x70/x71))-x72);

    if (t14 != -9051803) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x73 = 15U;
	static int64_t x74 = -1LL;
	int64_t x75 = INT64_MAX;
	uint64_t x76 = 772945076503842732LLU;
	static volatile uint64_t t15 = 73777LLU;

    t15 = ((x73<=(x74/x75))-x76);

    if (t15 != 17673798997205708884LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x77 = INT8_MAX;
	int16_t x79 = -1;
	static int8_t x80 = 7;

    t16 = ((x77<=(x78/x79))-x80);

    if (t16 != -7) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x81 = 6U;
	uint64_t x82 = 301520325503945485LLU;
	volatile int8_t x83 = INT8_MAX;
	int32_t t17 = 872265105;

    t17 = ((x81<=(x82/x83))-x84);

    if (t17 != 129) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x86 = INT16_MAX;
	uint8_t x87 = 43U;
	volatile int32_t x88 = -1;
	static volatile int32_t t18 = -1;

    t18 = ((x85<=(x86/x87))-x88);

    if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x90 = 8230U;
	volatile uint64_t x91 = UINT64_MAX;
	uint8_t x92 = 30U;
	static int32_t t19 = -786;

    t19 = ((x89<=(x90/x91))-x92);

    if (t19 != -30) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x93 = INT8_MAX;
	uint32_t x95 = 491362U;
	volatile int16_t x96 = -1;
	volatile int32_t t20 = -215;

    t20 = ((x93<=(x94/x95))-x96);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x97 = -1;
	int8_t x98 = INT8_MIN;
	int16_t x99 = INT16_MIN;
	volatile int8_t x100 = INT8_MIN;
	volatile int32_t t21 = -47;

    t21 = ((x97<=(x98/x99))-x100);

    if (t21 != 129) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = -1297;
	static int64_t x102 = -203564055384365LL;
	int64_t x103 = INT64_MIN;
	int16_t x104 = -1;
	int32_t t22 = -2428797;

    t22 = ((x101<=(x102/x103))-x104);

    if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x106 = -1;
	int16_t x107 = -1;
	int32_t x108 = -1;
	static int32_t t23 = -1952;

    t23 = ((x105<=(x106/x107))-x108);

    if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x109 = INT32_MIN;
	int64_t x110 = 57624283363782403LL;
	static volatile uint16_t x111 = 58U;
	int8_t x112 = 7;
	int32_t t24 = 10293;

    t24 = ((x109<=(x110/x111))-x112);

    if (t24 != -6) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x114 = INT32_MIN;
	int16_t x115 = -15;
	volatile int64_t x116 = 747372816906963LL;
	int64_t t25 = 734967691389LL;

    t25 = ((x113<=(x114/x115))-x116);

    if (t25 != -747372816906962LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x117 = 9050U;
	static volatile int64_t x118 = INT64_MIN;
	uint32_t x120 = 5439U;
	volatile uint32_t t26 = 762084U;

    t26 = ((x117<=(x118/x119))-x120);

    if (t26 != 4294961857U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x121 = 322195LLU;
	uint32_t x123 = 24322U;
	volatile uint8_t x124 = 1U;
	int32_t t27 = -16;

    t27 = ((x121<=(x122/x123))-x124);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x125 = UINT32_MAX;
	uint64_t x127 = 14LLU;
	static uint16_t x128 = 3U;

    t28 = ((x125<=(x126/x127))-x128);

    if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x129 = INT32_MIN;
	int8_t x130 = -11;
	uint8_t x131 = 37U;
	static int32_t x132 = -48967796;
	volatile int32_t t29 = 412215531;

    t29 = ((x129<=(x130/x131))-x132);

    if (t29 != 48967797) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x137 = INT32_MIN;
	uint16_t x138 = UINT16_MAX;
	int64_t x139 = INT64_MAX;
	int16_t x140 = INT16_MIN;
	int32_t t30 = -33426408;

    t30 = ((x137<=(x138/x139))-x140);

    if (t30 != 32769) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x141 = INT8_MIN;
	uint8_t x142 = 115U;
	static int32_t x144 = -1;
	volatile int32_t t31 = -358;

    t31 = ((x141<=(x142/x143))-x144);

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x145 = -8160754LL;
	static volatile uint64_t x146 = 8417136606493939LLU;
	volatile uint16_t x147 = 195U;
	volatile int32_t t32 = 283420;

    t32 = ((x145<=(x146/x147))-x148);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x150 = INT8_MIN;
	static int8_t x151 = INT8_MIN;
	volatile uint32_t t33 = 396U;

    t33 = ((x149<=(x150/x151))-x152);

    if (t33 != 4294928364U) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x153 = INT64_MIN;
	int64_t x154 = INT64_MIN;
	uint16_t x155 = 1389U;
	uint16_t x156 = UINT16_MAX;

    t34 = ((x153<=(x154/x155))-x156);

    if (t34 != -65534) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x157 = UINT64_MAX;
	uint32_t x158 = UINT32_MAX;
	uint16_t x159 = 959U;
	uint16_t x160 = 498U;
	int32_t t35 = 351;

    t35 = ((x157<=(x158/x159))-x160);

    if (t35 != -498) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x161 = -1;
	uint64_t x162 = UINT64_MAX;
	int64_t x163 = -890LL;
	int8_t x164 = INT8_MIN;
	int32_t t36 = -860;

    t36 = ((x161<=(x162/x163))-x164);

    if (t36 != 128) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x166 = UINT16_MAX;
	volatile uint64_t t37 = 54134448206867753LLU;

    t37 = ((x165<=(x166/x167))-x168);

    if (t37 != 18446744073607497538LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x173 = INT32_MIN;
	int32_t x174 = -60;
	static int32_t x175 = INT32_MIN;
	int8_t x176 = INT8_MAX;
	int32_t t38 = 1;

    t38 = ((x173<=(x174/x175))-x176);

    if (t38 != -126) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x177 = -7;
	uint16_t x178 = 32609U;
	uint32_t x179 = 7U;
	volatile int16_t x180 = 28;
	int32_t t39 = -2292294;

    t39 = ((x177<=(x178/x179))-x180);

    if (t39 != -28) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x181 = UINT64_MAX;
	int8_t x182 = 1;
	int8_t x183 = INT8_MAX;
	int64_t x184 = -1LL;
	volatile int64_t t40 = -1405905738815017912LL;

    t40 = ((x181<=(x182/x183))-x184);

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x185 = 218U;
	int64_t x187 = -1LL;
	uint64_t x188 = 6248379425172201823LLU;
	static volatile uint64_t t41 = 426505LLU;

    t41 = ((x185<=(x186/x187))-x188);

    if (t41 != 12198364648537349793LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x189 = INT16_MIN;
	int8_t x190 = 31;
	static int64_t x191 = 39742909022835563LL;
	int64_t x192 = INT64_MAX;
	volatile int64_t t42 = -207290246594787LL;

    t42 = ((x189<=(x190/x191))-x192);

    if (t42 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x193 = 66001836836114070LLU;
	volatile uint64_t x194 = UINT64_MAX;
	int32_t x195 = INT32_MIN;
	static int32_t x196 = -1;

    t43 = ((x193<=(x194/x195))-x196);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x197 = 444U;
	static int16_t x198 = INT16_MIN;
	static volatile uint64_t x199 = 109LLU;
	int16_t x200 = INT16_MIN;
	int32_t t44 = 2159;

    t44 = ((x197<=(x198/x199))-x200);

    if (t44 != 32769) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x201 = -1;
	int16_t x202 = INT16_MAX;
	int8_t x203 = -4;
	int16_t x204 = INT16_MAX;
	int32_t t45 = -53;

    t45 = ((x201<=(x202/x203))-x204);

    if (t45 != -32767) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x205 = INT16_MAX;
	static uint8_t x206 = 26U;
	int16_t x207 = INT16_MIN;
	int32_t x208 = INT32_MAX;

    t46 = ((x205<=(x206/x207))-x208);

    if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = INT8_MIN;
	volatile int32_t x210 = INT32_MIN;
	uint16_t x211 = 2U;
	int32_t x212 = -530872961;
	volatile int32_t t47 = -28947877;

    t47 = ((x209<=(x210/x211))-x212);

    if (t47 != 530872961) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x213 = INT64_MIN;
	int64_t x214 = INT64_MIN;
	int8_t x215 = INT8_MIN;
	int8_t x216 = 2;
	volatile int32_t t48 = -4113;

    t48 = ((x213<=(x214/x215))-x216);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x217 = 48280U;
	volatile uint32_t x218 = 1189459284U;
	int64_t x219 = -1LL;
	static volatile int32_t t49 = 3;

    t49 = ((x217<=(x218/x219))-x220);

    if (t49 != 2381) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x221 = INT8_MAX;
	static volatile int64_t x222 = INT64_MIN;
	uint16_t x223 = UINT16_MAX;
	uint16_t x224 = UINT16_MAX;
	static volatile int32_t t50 = 15462;

    t50 = ((x221<=(x222/x223))-x224);

    if (t50 != -65535) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x226 = 2LLU;
	uint8_t x227 = 54U;
	static uint16_t x228 = 10U;
	volatile int32_t t51 = 51452;

    t51 = ((x225<=(x226/x227))-x228);

    if (t51 != -10) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x229 = INT64_MAX;
	int8_t x230 = INT8_MIN;
	static int8_t x231 = -1;
	uint64_t x232 = 678273592LLU;
	static uint64_t t52 = 27252529189LLU;

    t52 = ((x229<=(x230/x231))-x232);

    if (t52 != 18446744073031278024LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x233 = -2;
	int32_t x234 = 121;
	static int32_t x235 = -1;
	int64_t x236 = INT64_MAX;
	volatile int64_t t53 = -204103401897932472LL;

    t53 = ((x233<=(x234/x235))-x236);

    if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x237 = INT16_MAX;
	static int16_t x238 = 0;
	static int32_t x239 = INT32_MIN;
	volatile int64_t t54 = 1595LL;

    t54 = ((x237<=(x238/x239))-x240);

    if (t54 != 882637LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x242 = UINT8_MAX;
	static int32_t x243 = INT32_MIN;
	int32_t x244 = INT32_MAX;
	int32_t t55 = 7758;

    t55 = ((x241<=(x242/x243))-x244);

    if (t55 != -2147483646) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x245 = INT16_MIN;
	uint8_t x247 = 58U;
	uint16_t x248 = 2359U;
	int32_t t56 = 0;

    t56 = ((x245<=(x246/x247))-x248);

    if (t56 != -2358) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x250 = 1;
	uint64_t x251 = 14227761LLU;
	volatile uint8_t x252 = 2U;
	int32_t t57 = 6349169;

    t57 = ((x249<=(x250/x251))-x252);

    if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x253 = -1LL;
	uint32_t x254 = UINT32_MAX;
	volatile int64_t x255 = 11316020402225487LL;
	int32_t x256 = INT32_MAX;

    t58 = ((x253<=(x254/x255))-x256);

    if (t58 != -2147483646) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x257 = 568424767605804LL;
	int8_t x258 = INT8_MIN;
	static int32_t x259 = INT32_MAX;
	static int64_t x260 = INT64_MAX;
	int64_t t59 = 21248600168LL;

    t59 = ((x257<=(x258/x259))-x260);

    if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x261 = INT64_MIN;
	uint16_t x263 = 54U;
	static uint32_t x264 = 179U;
	volatile uint32_t t60 = 32U;

    t60 = ((x261<=(x262/x263))-x264);

    if (t60 != 4294967118U) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x265 = 0;
	uint16_t x266 = 44U;
	uint16_t x267 = UINT16_MAX;
	static int8_t x268 = 1;
	volatile int32_t t61 = -2024;

    t61 = ((x265<=(x266/x267))-x268);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x269 = INT16_MIN;
	int16_t x271 = -1881;
	uint32_t x272 = 2017196650U;
	uint32_t t62 = 644U;

    t62 = ((x269<=(x270/x271))-x272);

    if (t62 != 2277770647U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x273 = -128142LL;
	uint8_t x274 = 6U;
	int8_t x275 = -49;
	int32_t x276 = INT32_MAX;
	int32_t t63 = -57923997;

    t63 = ((x273<=(x274/x275))-x276);

    if (t63 != -2147483646) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x281 = INT64_MAX;
	uint8_t x282 = UINT8_MAX;
	static uint16_t x283 = UINT16_MAX;
	uint64_t x284 = 82536493444619LLU;
	uint64_t t64 = 444223260096LLU;

    t64 = ((x281<=(x282/x283))-x284);

    if (t64 != 18446661537216106997LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x285 = -16;
	int16_t x286 = 1490;
	uint32_t x287 = 130180U;
	static int64_t x288 = INT64_MAX;
	int64_t t65 = -851610LL;

    t65 = ((x285<=(x286/x287))-x288);

    if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x289 = UINT16_MAX;
	static uint64_t x290 = UINT64_MAX;
	int64_t x291 = 6982746377864001LL;
	int16_t x292 = 16099;

    t66 = ((x289<=(x290/x291))-x292);

    if (t66 != -16099) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x293 = INT32_MIN;
	int32_t x294 = -1;
	static int32_t x296 = -11;

    t67 = ((x293<=(x294/x295))-x296);

    if (t67 != 12) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x297 = 1242;
	int8_t x298 = -1;
	int64_t x299 = INT64_MIN;
	volatile int16_t x300 = INT16_MAX;
	volatile int32_t t68 = -24329;

    t68 = ((x297<=(x298/x299))-x300);

    if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x301 = INT8_MAX;
	int32_t x302 = 4048363;
	uint8_t x303 = 12U;
	int8_t x304 = INT8_MIN;
	volatile int32_t t69 = 35588;

    t69 = ((x301<=(x302/x303))-x304);

    if (t69 != 129) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x305 = -1;
	static uint8_t x306 = 57U;
	static int64_t x307 = INT64_MAX;
	int16_t x308 = INT16_MIN;
	int32_t t70 = -7112;

    t70 = ((x305<=(x306/x307))-x308);

    if (t70 != 32769) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x309 = INT8_MAX;
	volatile int16_t x311 = INT16_MAX;
	static volatile int32_t x312 = 8124;
	volatile int32_t t71 = 0;

    t71 = ((x309<=(x310/x311))-x312);

    if (t71 != -8123) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x313 = 7970834182792392LLU;
	int16_t x314 = -1;
	uint64_t x315 = UINT64_MAX;
	volatile uint16_t x316 = 10U;
	volatile int32_t t72 = 7;

    t72 = ((x313<=(x314/x315))-x316);

    if (t72 != -10) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x317 = 245;
	static volatile int64_t x318 = INT64_MIN;
	int64_t x319 = INT64_MIN;
	volatile int8_t x320 = -1;
	static int32_t t73 = 13825386;

    t73 = ((x317<=(x318/x319))-x320);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x321 = -1;
	static int16_t x322 = 1;
	int8_t x323 = 38;

    t74 = ((x321<=(x322/x323))-x324);

    if (t74 != 32769) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x325 = UINT64_MAX;
	static volatile int32_t x326 = -1;
	uint8_t x327 = 4U;
	int64_t x328 = -325212036508155526LL;
	static volatile int64_t t75 = 15827024110584LL;

    t75 = ((x325<=(x326/x327))-x328);

    if (t75 != 325212036508155526LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x333 = INT16_MAX;
	uint8_t x334 = 1U;
	int8_t x335 = INT8_MAX;
	static int16_t x336 = INT16_MAX;
	int32_t t76 = 227355;

    t76 = ((x333<=(x334/x335))-x336);

    if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x337 = 46LLU;
	int32_t x338 = -1;
	uint64_t x339 = UINT64_MAX;
	int64_t x340 = 30072507LL;
	volatile int64_t t77 = -503LL;

    t77 = ((x337<=(x338/x339))-x340);

    if (t77 != -30072507LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x341 = INT64_MAX;
	static volatile int64_t x342 = INT64_MIN;
	int32_t x343 = INT32_MIN;
	int8_t x344 = -8;
	int32_t t78 = -116213503;

    t78 = ((x341<=(x342/x343))-x344);

    if (t78 != 8) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x345 = INT64_MIN;
	volatile uint16_t x346 = 3849U;
	volatile int16_t x347 = 3647;
	uint8_t x348 = 60U;
	volatile int32_t t79 = -38182654;

    t79 = ((x345<=(x346/x347))-x348);

    if (t79 != -59) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x349 = -7;
	uint8_t x350 = UINT8_MAX;
	int64_t x351 = INT64_MAX;
	volatile int32_t x352 = INT32_MAX;
	volatile int32_t t80 = -887002;

    t80 = ((x349<=(x350/x351))-x352);

    if (t80 != -2147483646) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x353 = -3728;
	static volatile int8_t x354 = INT8_MIN;
	uint64_t x355 = UINT64_MAX;
	volatile int16_t x356 = INT16_MIN;
	volatile int32_t t81 = 3;

    t81 = ((x353<=(x354/x355))-x356);

    if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x362 = INT16_MIN;
	static uint64_t x363 = 13806601905293636LLU;
	uint32_t t82 = 57U;

    t82 = ((x361<=(x362/x363))-x364);

    if (t82 != 4294952667U) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x366 = INT8_MIN;
	static volatile int8_t x367 = INT8_MIN;
	uint8_t x368 = 11U;
	volatile int32_t t83 = -775;

    t83 = ((x365<=(x366/x367))-x368);

    if (t83 != -10) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int8_t x374 = INT8_MIN;
	int8_t x375 = -2;
	int64_t x376 = -1LL;
	volatile int64_t t84 = -9469413LL;

    t84 = ((x373<=(x374/x375))-x376);

    if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x377 = INT8_MIN;
	volatile int8_t x379 = INT8_MAX;

    t85 = ((x377<=(x378/x379))-x380);

    if (t85 != 128) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x381 = -15;
	int64_t x382 = -22312633560871223LL;
	static int64_t x383 = 511522549527377318LL;
	int32_t t86 = -1170746;

    t86 = ((x381<=(x382/x383))-x384);

    if (t86 != -254) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x385 = INT8_MIN;
	int32_t x386 = 1158756;
	int16_t x387 = INT16_MIN;
	static volatile int16_t x388 = -1;
	static int32_t t87 = -22041195;

    t87 = ((x385<=(x386/x387))-x388);

    if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x389 = INT8_MIN;
	static uint8_t x390 = 112U;
	uint8_t x391 = UINT8_MAX;
	uint16_t x392 = UINT16_MAX;
	int32_t t88 = -6;

    t88 = ((x389<=(x390/x391))-x392);

    if (t88 != -65534) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MIN;
	int64_t x395 = 1146LL;
	static int16_t x396 = 6;
	static int32_t t89 = 1;

    t89 = ((x393<=(x394/x395))-x396);

    if (t89 != -5) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x397 = -1;
	uint8_t x398 = 9U;
	int8_t x399 = INT8_MIN;
	uint16_t x400 = 26U;
	volatile int32_t t90 = 65987;

    t90 = ((x397<=(x398/x399))-x400);

    if (t90 != -25) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x401 = 7954794753742864875LLU;
	volatile int16_t x402 = INT16_MIN;
	uint16_t x404 = 90U;
	int32_t t91 = 195425511;

    t91 = ((x401<=(x402/x403))-x404);

    if (t91 != -90) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x405 = -1;
	uint8_t x407 = UINT8_MAX;
	volatile int32_t x408 = -1;
	volatile int32_t t92 = -1;

    t92 = ((x405<=(x406/x407))-x408);

    if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x409 = UINT8_MAX;
	int32_t x410 = INT32_MAX;
	int32_t x411 = -1;
	volatile int16_t x412 = -28;
	int32_t t93 = 12520738;

    t93 = ((x409<=(x410/x411))-x412);

    if (t93 != 28) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x413 = INT32_MIN;
	int16_t x414 = INT16_MIN;
	int64_t x415 = INT64_MAX;
	static int64_t x416 = 15928639092638302LL;
	int64_t t94 = -48LL;

    t94 = ((x413<=(x414/x415))-x416);

    if (t94 != -15928639092638301LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x417 = 1981U;
	static uint16_t x418 = 1U;
	int64_t x419 = -1LL;
	uint8_t x420 = 110U;
	volatile int32_t t95 = 91644046;

    t95 = ((x417<=(x418/x419))-x420);

    if (t95 != -110) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x421 = 10132;
	int32_t x422 = 38;
	static int32_t x423 = 9;
	static uint64_t x424 = UINT64_MAX;
	volatile uint64_t t96 = 1041178LLU;

    t96 = ((x421<=(x422/x423))-x424);

    if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x430 = INT16_MIN;
	int32_t x432 = 4;
	volatile int32_t t97 = 560;

    t97 = ((x429<=(x430/x431))-x432);

    if (t97 != -3) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x435 = 23U;
	static int16_t x436 = -388;

    t98 = ((x433<=(x434/x435))-x436);

    if (t98 != 388) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x438 = -236701;
	static volatile uint32_t x439 = 95U;
	volatile int8_t x440 = INT8_MIN;
	int32_t t99 = -1494;

    t99 = ((x437<=(x438/x439))-x440);

    if (t99 != 128) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x441 = -1;
	volatile int16_t x442 = 6689;
	uint64_t t100 = 12565204071LLU;

    t100 = ((x441<=(x442/x443))-x444);

    if (t100 != 18446727652905440463LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x445 = -17889596533248605LL;
	volatile int16_t x446 = -1;
	uint16_t x448 = 253U;
	static int32_t t101 = -2;

    t101 = ((x445<=(x446/x447))-x448);

    if (t101 != -252) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x449 = 1004U;
	int8_t x451 = -1;
	int16_t x452 = 2920;
	volatile int32_t t102 = 131;

    t102 = ((x449<=(x450/x451))-x452);

    if (t102 != -2919) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x453 = INT32_MIN;
	static int32_t x454 = -421454509;
	static volatile int32_t x455 = -1;
	static int32_t x456 = -1;
	volatile int32_t t103 = -48887;

    t103 = ((x453<=(x454/x455))-x456);

    if (t103 != 2) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x457 = UINT8_MAX;
	int16_t x459 = INT16_MAX;
	volatile int64_t x460 = -1LL;

    t104 = ((x457<=(x458/x459))-x460);

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x461 = 32572U;
	static int32_t x462 = -1;
	volatile int32_t x463 = INT32_MAX;
	uint64_t x464 = UINT64_MAX;

    t105 = ((x461<=(x462/x463))-x464);

    if (t105 != 1LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x465 = 2051934U;
	static int8_t x466 = -1;
	uint32_t x467 = 121U;
	volatile uint16_t x468 = UINT16_MAX;
	int32_t t106 = -1211;

    t106 = ((x465<=(x466/x467))-x468);

    if (t106 != -65534) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x469 = UINT64_MAX;
	int64_t x470 = -1LL;
	volatile int64_t x471 = 3137LL;
	int16_t x472 = INT16_MAX;
	volatile int32_t t107 = 0;

    t107 = ((x469<=(x470/x471))-x472);

    if (t107 != -32767) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x474 = INT64_MIN;
	uint16_t x475 = UINT16_MAX;
	static volatile int8_t x476 = INT8_MIN;
	volatile int32_t t108 = 8856620;

    t108 = ((x473<=(x474/x475))-x476);

    if (t108 != 128) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x478 = INT16_MAX;
	static uint32_t x479 = 41879492U;
	volatile int32_t x480 = -726473727;

    t109 = ((x477<=(x478/x479))-x480);

    if (t109 != 726473728) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x481 = -1;
	static int32_t x482 = INT32_MIN;
	int32_t t110 = 4705291;

    t110 = ((x481<=(x482/x483))-x484);

    if (t110 != -126) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x489 = 287229LLU;
	uint64_t x490 = 224LLU;
	int32_t x492 = -30259028;

    t111 = ((x489<=(x490/x491))-x492);

    if (t111 != 30259028) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x493 = 90036728012972LL;
	uint32_t x495 = 315483392U;
	int32_t x496 = 2712827;

    t112 = ((x493<=(x494/x495))-x496);

    if (t112 != -2712827) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x498 = UINT32_MAX;
	static volatile uint64_t x499 = 181223448995698LLU;
	static int8_t x500 = INT8_MAX;

    t113 = ((x497<=(x498/x499))-x500);

    if (t113 != -127) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x501 = -1;
	int8_t x502 = -13;
	uint16_t x503 = UINT16_MAX;
	uint8_t x504 = 25U;

    t114 = ((x501<=(x502/x503))-x504);

    if (t114 != -24) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x509 = UINT16_MAX;
	int8_t x511 = 1;
	int32_t t115 = 39505;

    t115 = ((x509<=(x510/x511))-x512);

    if (t115 != -32766) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x513 = 5U;
	uint16_t x514 = 172U;
	uint16_t x515 = 238U;
	uint64_t x516 = UINT64_MAX;
	uint64_t t116 = 109585433LLU;

    t116 = ((x513<=(x514/x515))-x516);

    if (t116 != 1LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x517 = -15;
	uint32_t x518 = UINT32_MAX;
	int16_t x519 = INT16_MIN;
	int16_t x520 = 13377;
	int32_t t117 = 1159;

    t117 = ((x517<=(x518/x519))-x520);

    if (t117 != -13377) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x521 = 86U;
	int8_t x523 = INT8_MAX;
	int8_t x524 = INT8_MAX;
	int32_t t118 = -516772;

    t118 = ((x521<=(x522/x523))-x524);

    if (t118 != -127) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int16_t x525 = INT16_MIN;
	int64_t x526 = INT64_MIN;
	int64_t x527 = INT64_MIN;
	static int16_t x528 = INT16_MIN;
	volatile int32_t t119 = 33394;

    t119 = ((x525<=(x526/x527))-x528);

    if (t119 != 32769) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x529 = INT64_MAX;
	int8_t x531 = -15;
	int64_t x532 = -1LL;
	int64_t t120 = -6305LL;

    t120 = ((x529<=(x530/x531))-x532);

    if (t120 != 1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x533 = UINT32_MAX;
	static volatile int16_t x534 = -1;
	int8_t x535 = -1;
	volatile int16_t x536 = -1;
	volatile int32_t t121 = -1;

    t121 = ((x533<=(x534/x535))-x536);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x537 = -3LL;
	volatile int8_t x539 = INT8_MAX;
	volatile uint64_t t122 = 15231838914252LLU;

    t122 = ((x537<=(x538/x539))-x540);

    if (t122 != 18444009324063668855LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x541 = -1;
	static uint32_t x542 = 57622U;
	static int8_t x544 = INT8_MIN;
	volatile int32_t t123 = 8966096;

    t123 = ((x541<=(x542/x543))-x544);

    if (t123 != 128) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x546 = INT16_MIN;
	int8_t x547 = -3;
	uint8_t x548 = UINT8_MAX;
	volatile int32_t t124 = -31874;

    t124 = ((x545<=(x546/x547))-x548);

    if (t124 != -254) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x549 = -1;
	int64_t x550 = 6814069LL;
	uint8_t x551 = UINT8_MAX;
	int16_t x552 = 0;
	int32_t t125 = -1;

    t125 = ((x549<=(x550/x551))-x552);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x554 = UINT8_MAX;
	int16_t x555 = INT16_MIN;
	static volatile uint16_t x556 = UINT16_MAX;
	int32_t t126 = 207531980;

    t126 = ((x553<=(x554/x555))-x556);

    if (t126 != -65535) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x558 = 1;
	int32_t x559 = INT32_MIN;

    t127 = ((x557<=(x558/x559))-x560);

    if (t127 != -6) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x563 = INT8_MIN;
	volatile uint8_t x564 = 0U;
	static volatile int32_t t128 = -360309;

    t128 = ((x561<=(x562/x563))-x564);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x565 = 4U;
	int64_t x566 = -3002119LL;
	int16_t x568 = -14;
	int32_t t129 = 0;

    t129 = ((x565<=(x566/x567))-x568);

    if (t129 != 15) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x569 = 39U;
	uint8_t x570 = 48U;
	int32_t x571 = -1;
	volatile int8_t x572 = -1;
	int32_t t130 = -2;

    t130 = ((x569<=(x570/x571))-x572);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x574 = INT8_MIN;
	int64_t x575 = INT64_MIN;
	static int64_t x576 = -1LL;

    t131 = ((x573<=(x574/x575))-x576);

    if (t131 != 1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x577 = 14910;
	int8_t x578 = INT8_MAX;
	volatile uint32_t x579 = 145324U;
	uint64_t x580 = 63995LLU;
	volatile uint64_t t132 = 12738601956616LLU;

    t132 = ((x577<=(x578/x579))-x580);

    if (t132 != 18446744073709487621LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x581 = UINT16_MAX;
	int8_t x582 = 4;
	int8_t x583 = INT8_MAX;
	static int8_t x584 = -1;
	volatile int32_t t133 = -3;

    t133 = ((x581<=(x582/x583))-x584);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x585 = -1;
	int16_t x586 = INT16_MAX;
	int64_t x587 = INT64_MAX;
	uint32_t x588 = 193821976U;
	volatile uint32_t t134 = 0U;

    t134 = ((x585<=(x586/x587))-x588);

    if (t134 != 4101145321U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x590 = 310LL;
	uint16_t x591 = UINT16_MAX;
	volatile int64_t x592 = INT64_MAX;
	static int64_t t135 = 1LL;

    t135 = ((x589<=(x590/x591))-x592);

    if (t135 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x593 = 19971440997285LLU;
	uint32_t x594 = UINT32_MAX;
	volatile uint64_t x595 = 12913218380253LLU;
	uint64_t x596 = 25188691771LLU;
	static volatile uint64_t t136 = 1003048563835LLU;

    t136 = ((x593<=(x594/x595))-x596);

    if (t136 != 18446744048520859845LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x597 = INT32_MAX;
	int16_t x598 = 109;
	uint64_t x599 = 59LLU;
	static uint8_t x600 = 5U;
	int32_t t137 = 136994592;

    t137 = ((x597<=(x598/x599))-x600);

    if (t137 != -5) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x602 = INT32_MAX;
	int8_t x603 = -1;
	int32_t x604 = -1;
	volatile int32_t t138 = 30988;

    t138 = ((x601<=(x602/x603))-x604);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x605 = 1859U;
	static uint16_t x606 = UINT16_MAX;
	uint16_t x607 = 401U;
	uint64_t x608 = 917869833LLU;
	volatile uint64_t t139 = 28143027461180713LLU;

    t139 = ((x605<=(x606/x607))-x608);

    if (t139 != 18446744072791681783LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x609 = 194U;
	volatile int32_t x610 = INT32_MAX;
	int16_t x611 = INT16_MIN;
	uint8_t x612 = 13U;
	static int32_t t140 = 3;

    t140 = ((x609<=(x610/x611))-x612);

    if (t140 != -12) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x615 = 123LL;
	int8_t x616 = INT8_MIN;
	volatile int32_t t141 = 1536;

    t141 = ((x613<=(x614/x615))-x616);

    if (t141 != 128) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x617 = INT32_MIN;
	uint64_t x618 = 8238322714633546LLU;
	int16_t x620 = 7743;
	int32_t t142 = 21;

    t142 = ((x617<=(x618/x619))-x620);

    if (t142 != -7743) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x621 = INT32_MIN;
	volatile uint32_t x624 = 218325U;
	static uint32_t t143 = 21047123U;

    t143 = ((x621<=(x622/x623))-x624);

    if (t143 != 4294748971U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x625 = INT16_MIN;
	uint32_t x626 = 125386U;
	static int64_t x627 = INT64_MIN;
	int32_t x628 = INT32_MAX;

    t144 = ((x625<=(x626/x627))-x628);

    if (t144 != -2147483646) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x633 = -1;
	volatile int64_t x634 = INT64_MAX;
	int8_t x635 = INT8_MAX;
	uint16_t x636 = UINT16_MAX;
	int32_t t145 = -125;

    t145 = ((x633<=(x634/x635))-x636);

    if (t145 != -65534) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x637 = 62071701U;
	volatile int64_t x638 = -1LL;
	int16_t x639 = INT16_MIN;
	uint16_t x640 = 3904U;

    t146 = ((x637<=(x638/x639))-x640);

    if (t146 != -3904) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x641 = INT64_MIN;
	int64_t x642 = INT64_MIN;
	int64_t x643 = -50170LL;
	int8_t x644 = -1;
	int32_t t147 = -181252678;

    t147 = ((x641<=(x642/x643))-x644);

    if (t147 != 2) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x649 = INT32_MIN;
	static int16_t x650 = INT16_MAX;
	static int64_t x651 = INT64_MIN;
	static int32_t x652 = INT32_MAX;

    t148 = ((x649<=(x650/x651))-x652);

    if (t148 != -2147483646) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x654 = INT32_MIN;
	uint64_t x655 = 2446LLU;
	volatile int16_t x656 = -1;
	static volatile int32_t t149 = -165362645;

    t149 = ((x653<=(x654/x655))-x656);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x657 = 22;
	volatile int8_t x658 = INT8_MAX;
	static volatile int32_t x659 = -1;
	volatile int32_t t150 = 233498424;

    t150 = ((x657<=(x658/x659))-x660);

    if (t150 != -127) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x661 = -1LL;
	uint32_t x662 = 240277U;
	int8_t x663 = -1;
	int64_t x664 = -1LL;
	int64_t t151 = -55096290906525829LL;

    t151 = ((x661<=(x662/x663))-x664);

    if (t151 != 2LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x665 = INT64_MIN;
	int64_t x666 = INT64_MIN;
	static int64_t x667 = INT64_MIN;
	uint64_t x668 = 436988461488198550LLU;

    t152 = ((x665<=(x666/x667))-x668);

    if (t152 != 18009755612221353067LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x669 = UINT64_MAX;
	int64_t x671 = INT64_MIN;
	int64_t t153 = 146497145730LL;

    t153 = ((x669<=(x670/x671))-x672);

    if (t153 != 237LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x674 = 16;
	static uint32_t x675 = 58003U;
	int8_t x676 = -2;
	int32_t t154 = -38;

    t154 = ((x673<=(x674/x675))-x676);

    if (t154 != 2) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x678 = 1389;
	int8_t x679 = 2;
	uint8_t x680 = 5U;
	static int32_t t155 = 13894141;

    t155 = ((x677<=(x678/x679))-x680);

    if (t155 != -5) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int8_t x681 = -1;
	int64_t x682 = -2LL;
	static int32_t x683 = -286740327;
	int8_t x684 = INT8_MAX;

    t156 = ((x681<=(x682/x683))-x684);

    if (t156 != -126) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x689 = -1;
	static uint32_t x690 = UINT32_MAX;
	volatile int64_t x691 = -12220448LL;
	uint16_t x692 = UINT16_MAX;
	volatile int32_t t157 = -263860;

    t157 = ((x689<=(x690/x691))-x692);

    if (t157 != -65535) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x693 = INT32_MIN;
	static uint32_t x695 = 230326U;
	static int16_t x696 = -1;
	int32_t t158 = 9;

    t158 = ((x693<=(x694/x695))-x696);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x697 = 43257LLU;
	static int64_t x698 = INT64_MAX;
	uint16_t x699 = 1U;
	uint16_t x700 = 2U;
	volatile int32_t t159 = 770;

    t159 = ((x697<=(x698/x699))-x700);

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x702 = 1;
	volatile uint32_t x703 = 7842983U;
	int16_t x704 = INT16_MIN;
	static volatile int32_t t160 = 53926;

    t160 = ((x701<=(x702/x703))-x704);

    if (t160 != 32769) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x705 = INT16_MIN;
	volatile uint32_t x706 = 27U;
	static int32_t x707 = -1;
	static uint32_t x708 = 4458703U;
	volatile uint32_t t161 = 7U;

    t161 = ((x705<=(x706/x707))-x708);

    if (t161 != 4290508593U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x711 = 25U;
	volatile uint32_t t162 = 224U;

    t162 = ((x709<=(x710/x711))-x712);

    if (t162 != 4244821013U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x717 = INT8_MAX;
	int32_t x718 = INT32_MIN;
	static int64_t x719 = INT64_MIN;
	static uint8_t x720 = 11U;
	int32_t t163 = 237600;

    t163 = ((x717<=(x718/x719))-x720);

    if (t163 != -11) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int64_t x721 = -1LL;
	uint64_t x723 = 130222658528012LLU;
	int32_t t164 = -536;

    t164 = ((x721<=(x722/x723))-x724);

    if (t164 != -13) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int64_t x725 = INT64_MAX;
	static uint64_t x726 = UINT64_MAX;
	static int64_t x727 = 1241209029275LL;
	int32_t x728 = -1;
	volatile int32_t t165 = -383;

    t165 = ((x725<=(x726/x727))-x728);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x729 = -1;
	static volatile int32_t x730 = INT32_MAX;
	volatile int8_t x731 = INT8_MAX;
	uint16_t x732 = 372U;
	volatile int32_t t166 = 1;

    t166 = ((x729<=(x730/x731))-x732);

    if (t166 != -371) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x733 = -1LL;
	static int8_t x734 = INT8_MIN;
	volatile uint32_t x735 = 528437614U;
	int16_t x736 = 19;

    t167 = ((x733<=(x734/x735))-x736);

    if (t167 != -18) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x741 = INT16_MIN;
	int8_t x744 = -2;
	volatile int32_t t168 = 43929;

    t168 = ((x741<=(x742/x743))-x744);

    if (t168 != 3) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x745 = INT8_MIN;
	int16_t x746 = INT16_MIN;
	int16_t x747 = INT16_MIN;
	uint8_t x748 = 1U;
	volatile int32_t t169 = -31616;

    t169 = ((x745<=(x746/x747))-x748);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x753 = INT64_MAX;
	int32_t x754 = INT32_MIN;
	uint32_t x755 = 222329U;
	uint64_t x756 = 94869090271157885LLU;
	volatile uint64_t t170 = 106727117103456LLU;

    t170 = ((x753<=(x754/x755))-x756);

    if (t170 != 18351874983438393731LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x757 = 14848U;
	volatile int16_t x758 = INT16_MIN;
	uint32_t x759 = 6U;
	static volatile int32_t t171 = 12;

    t171 = ((x757<=(x758/x759))-x760);

    if (t171 != -1279) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x761 = 60196U;
	int64_t x762 = INT64_MIN;
	volatile int16_t x763 = INT16_MIN;
	int8_t x764 = INT8_MIN;
	volatile int32_t t172 = -10496;

    t172 = ((x761<=(x762/x763))-x764);

    if (t172 != 129) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x765 = -1;
	uint8_t x766 = UINT8_MAX;
	static volatile int64_t x767 = -134007880014709LL;
	int16_t x768 = -1;

    t173 = ((x765<=(x766/x767))-x768);

    if (t173 != 2) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x769 = 96U;
	int64_t x771 = INT64_MIN;
	static volatile int16_t x772 = -1;
	volatile int32_t t174 = 2;

    t174 = ((x769<=(x770/x771))-x772);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x774 = 2087U;
	uint16_t x775 = UINT16_MAX;
	int8_t x776 = 3;
	volatile int32_t t175 = 1;

    t175 = ((x773<=(x774/x775))-x776);

    if (t175 != -3) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x779 = 1;
	volatile uint8_t x780 = 6U;
	volatile int32_t t176 = 10674;

    t176 = ((x777<=(x778/x779))-x780);

    if (t176 != -5) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x781 = -1;
	static int16_t x782 = INT16_MIN;
	int64_t x783 = -1LL;
	int64_t x784 = INT64_MAX;
	int64_t t177 = 6279570LL;

    t177 = ((x781<=(x782/x783))-x784);

    if (t177 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x786 = INT16_MIN;
	volatile int16_t x787 = INT16_MIN;
	static int32_t x788 = -48780492;
	int32_t t178 = -8531;

    t178 = ((x785<=(x786/x787))-x788);

    if (t178 != 48780493) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x789 = -1;
	static int8_t x790 = INT8_MAX;
	volatile uint16_t x791 = 11099U;
	int32_t t179 = 30;

    t179 = ((x789<=(x790/x791))-x792);

    if (t179 != 2) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x794 = 46399798462LLU;
	static int32_t x795 = 2203250;
	uint64_t x796 = 798016821503254LLU;
	static volatile uint64_t t180 = 64518015LLU;

    t180 = ((x793<=(x794/x795))-x796);

    if (t180 != 18445946056888048362LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x797 = 1U;
	uint8_t x798 = 4U;
	volatile int64_t x799 = 925176087176815LL;
	uint32_t x800 = UINT32_MAX;
	volatile uint32_t t181 = 12506U;

    t181 = ((x797<=(x798/x799))-x800);

    if (t181 != 1U) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x801 = INT8_MIN;
	uint8_t x804 = 49U;
	int32_t t182 = 4114864;

    t182 = ((x801<=(x802/x803))-x804);

    if (t182 != -49) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x805 = 15U;
	int8_t x806 = 2;
	uint64_t x807 = 1041661718009859003LLU;
	uint32_t x808 = UINT32_MAX;
	uint32_t t183 = 188041634U;

    t183 = ((x805<=(x806/x807))-x808);

    if (t183 != 1U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x813 = 13769;
	volatile int64_t x814 = -671LL;
	uint32_t x815 = 1388480U;
	int32_t x816 = 36863196;

    t184 = ((x813<=(x814/x815))-x816);

    if (t184 != -36863196) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x821 = 5894509538LLU;
	static volatile int32_t x822 = INT32_MIN;
	int8_t x823 = 3;
	int64_t x824 = -8048337LL;
	int64_t t185 = -296591441LL;

    t185 = ((x821<=(x822/x823))-x824);

    if (t185 != 8048338LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x826 = 3860411282684769440LLU;
	volatile int64_t x827 = 10364377699546538LL;
	static int16_t x828 = INT16_MIN;

    t186 = ((x825<=(x826/x827))-x828);

    if (t186 != 32768) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x831 = 3U;
	volatile int8_t x832 = -23;
	static volatile int32_t t187 = 7630297;

    t187 = ((x829<=(x830/x831))-x832);

    if (t187 != 24) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x833 = -34031528528LL;
	int16_t x834 = INT16_MAX;
	static int16_t x835 = INT16_MAX;
	int16_t x836 = 600;

    t188 = ((x833<=(x834/x835))-x836);

    if (t188 != -599) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x837 = -1;
	int8_t x838 = INT8_MIN;
	int8_t x839 = -12;
	int64_t x840 = -216LL;

    t189 = ((x837<=(x838/x839))-x840);

    if (t189 != 217LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x841 = INT64_MIN;
	int8_t x842 = INT8_MAX;
	int8_t x843 = -1;
	int64_t x844 = INT64_MAX;

    t190 = ((x841<=(x842/x843))-x844);

    if (t190 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x845 = -1;
	uint16_t x846 = 7187U;
	volatile int8_t x847 = INT8_MIN;
	int32_t x848 = -1;
	volatile int32_t t191 = 1;

    t191 = ((x845<=(x846/x847))-x848);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x850 = -1;
	volatile uint16_t x851 = 6955U;
	uint64_t t192 = 3068756732LLU;

    t192 = ((x849<=(x850/x851))-x852);

    if (t192 != 18446744072279423213LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x853 = INT32_MIN;
	uint64_t x854 = UINT64_MAX;
	volatile int8_t x855 = INT8_MIN;
	uint32_t x856 = 1735762U;
	uint32_t t193 = 1533U;

    t193 = ((x853<=(x854/x855))-x856);

    if (t193 != 4293231534U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x861 = INT32_MAX;
	int16_t x862 = 3509;
	int16_t x863 = -1314;
	uint32_t x864 = UINT32_MAX;
	static volatile uint32_t t194 = 88U;

    t194 = ((x861<=(x862/x863))-x864);

    if (t194 != 1U) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x865 = 47;
	uint32_t x866 = 1U;
	int8_t x867 = INT8_MIN;
	uint32_t x868 = 5U;

    t195 = ((x865<=(x866/x867))-x868);

    if (t195 != 4294967291U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x869 = 1U;
	volatile int64_t x870 = -1LL;
	static volatile int32_t x871 = INT32_MIN;
	int8_t x872 = -1;
	volatile int32_t t196 = 1244;

    t196 = ((x869<=(x870/x871))-x872);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x873 = UINT32_MAX;
	int64_t x874 = INT64_MIN;
	int32_t x875 = -251938;
	uint32_t x876 = 244U;
	volatile uint32_t t197 = 88590856U;

    t197 = ((x873<=(x874/x875))-x876);

    if (t197 != 4294967053U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x881 = INT16_MAX;
	uint64_t x882 = 25706642LLU;
	volatile int8_t x883 = -1;
	uint32_t x884 = 9432U;
	uint32_t t198 = 565U;

    t198 = ((x881<=(x882/x883))-x884);

    if (t198 != 4294957864U) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x885 = 1261211904066689730LL;
	int64_t x887 = -1LL;
	uint64_t x888 = 666LLU;
	volatile uint64_t t199 = 2356680933945145062LLU;

    t199 = ((x885<=(x886/x887))-x888);

    if (t199 != 18446744073709550950LLU) { NG(); } else { ; }
	
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

