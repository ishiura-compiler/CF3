
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

static int16_t x5 = -1;
int64_t x6 = INT64_MAX;
static volatile int32_t t3 = -45;
volatile uint64_t x25 = 870486LLU;
int64_t x27 = INT64_MIN;
static int8_t x32 = -7;
uint32_t x33 = UINT32_MAX;
uint64_t x40 = 24298582882LLU;
static int8_t x42 = 2;
int16_t x43 = -98;
volatile int64_t x46 = INT64_MIN;
static int16_t x48 = -14;
int8_t x51 = -1;
volatile uint32_t x55 = 118831U;
static volatile int32_t t13 = -145879715;
int16_t x67 = -1;
int8_t x77 = INT8_MIN;
static uint32_t x86 = 1543781139U;
int16_t x94 = -1;
int32_t t23 = 2;
uint16_t x98 = 29U;
uint8_t x104 = UINT8_MAX;
volatile int32_t t25 = 13390902;
int64_t x106 = INT64_MIN;
uint64_t x108 = UINT64_MAX;
int64_t x110 = 134900307947967LL;
int16_t x112 = INT16_MIN;
uint64_t x114 = UINT64_MAX;
volatile int32_t t28 = 69;
volatile int32_t x118 = INT32_MIN;
volatile int16_t x122 = INT16_MIN;
uint32_t x129 = UINT32_MAX;
int8_t x132 = INT8_MAX;
int16_t x133 = INT16_MIN;
int64_t x134 = 25965628873452862LL;
static int32_t x137 = -1;
static int16_t x139 = -4;
volatile int32_t t34 = -488433;
volatile int32_t t35 = 1;
int32_t x149 = INT32_MIN;
static uint16_t x150 = UINT16_MAX;
volatile int32_t t37 = -3;
int32_t t40 = -200;
static volatile int16_t x167 = 0;
int32_t x171 = INT32_MAX;
int32_t x172 = INT32_MIN;
int32_t x173 = -12032;
static int32_t t44 = 56;
uint64_t x184 = 2293086597967LLU;
uint16_t x188 = 436U;
volatile int32_t t46 = 348063;
int32_t x189 = -1;
int8_t x194 = INT8_MAX;
int64_t x200 = -3154230976837254LL;
uint8_t x201 = 7U;
uint64_t x202 = UINT64_MAX;
static volatile uint8_t x214 = 59U;
int32_t x221 = 112;
volatile uint32_t x223 = UINT32_MAX;
static int32_t x227 = INT32_MIN;
static uint32_t x231 = 571U;
uint8_t x233 = 3U;
int32_t x234 = -1;
uint8_t x235 = 5U;
int16_t x241 = INT16_MIN;
int32_t t60 = -74121;
int64_t x248 = INT64_MAX;
int32_t t61 = 535639414;
volatile uint8_t x249 = 1U;
volatile int32_t t62 = -3953891;
uint8_t x256 = 1U;
static volatile int32_t t64 = 35519;
static int8_t x262 = 0;
volatile int32_t x267 = INT32_MIN;
static int32_t x271 = INT32_MIN;
uint8_t x272 = 0U;
int8_t x276 = -16;
int32_t t68 = 0;
uint64_t x277 = 9583701649498LLU;
static int64_t x279 = INT64_MIN;
int64_t x288 = -989274LL;
static uint16_t x289 = 3170U;
int16_t x291 = 3;
uint64_t x292 = UINT64_MAX;
volatile int32_t t72 = -1501766;
volatile uint32_t x303 = 431817790U;
int8_t x304 = INT8_MIN;
int16_t x313 = INT16_MAX;
int32_t x329 = 184822;
static volatile int32_t t82 = -420300696;
int16_t x337 = INT16_MIN;
int32_t x345 = INT32_MAX;
volatile uint32_t x346 = 19U;
volatile int32_t x348 = INT32_MIN;
int16_t x351 = INT16_MAX;
int8_t x360 = INT8_MAX;
int32_t t89 = 9445290;
int8_t x364 = -1;
static volatile int32_t t90 = -5467;
uint16_t x365 = 1986U;
int8_t x374 = 49;
static int32_t x377 = INT32_MIN;
int32_t x387 = INT32_MIN;
int32_t x388 = -1;
int16_t x389 = -207;
int16_t x397 = -1;
uint64_t x398 = 1519983636381LLU;
int8_t x399 = INT8_MIN;
volatile uint64_t x406 = 2211901183926425501LLU;
int32_t t102 = 224864;
int16_t x415 = INT16_MIN;
int32_t t103 = -176586034;
uint64_t x420 = UINT64_MAX;
int32_t t104 = -33833;
int8_t x423 = -1;
uint16_t x430 = UINT16_MAX;
int16_t x436 = INT16_MIN;
int32_t t108 = 636728361;
uint16_t x437 = 1590U;
int16_t x438 = INT16_MIN;
uint16_t x439 = UINT16_MAX;
uint16_t x441 = 6U;
uint8_t x443 = 1U;
volatile int32_t t111 = -98;
int8_t x452 = -1;
int32_t t113 = 5762;
int64_t x458 = INT64_MIN;
int8_t x463 = -1;
int32_t t115 = 2623776;
int16_t x473 = INT16_MIN;
static volatile int32_t t118 = -520205;
int32_t x479 = -31;
int32_t x480 = -1;
uint16_t x484 = UINT16_MAX;
uint8_t x485 = 51U;
int64_t x486 = -66829338390LL;
static int16_t x488 = INT16_MIN;
int8_t x497 = -1;
volatile int64_t x502 = -1855847372848029LL;
int32_t x505 = -1;
int8_t x508 = 28;
int16_t x509 = 0;
int16_t x516 = INT16_MIN;
uint8_t x518 = UINT8_MAX;
uint16_t x520 = UINT16_MAX;
int8_t x521 = -1;
int16_t x526 = INT16_MIN;
volatile uint8_t x528 = UINT8_MAX;
uint8_t x529 = UINT8_MAX;
uint16_t x535 = 9U;
int32_t t133 = -1367;
uint8_t x539 = 84U;
uint16_t x540 = 20981U;
volatile int32_t t134 = 1;
static volatile int16_t x542 = 0;
uint64_t x546 = 59LLU;
int16_t x551 = 1;
uint8_t x556 = 0U;
uint16_t x559 = UINT16_MAX;
int8_t x571 = INT8_MIN;
volatile int32_t t142 = 0;
int16_t x573 = -1;
int16_t x578 = INT16_MIN;
volatile uint32_t x583 = 962315U;
uint16_t x590 = 16U;
static int8_t x594 = -5;
int32_t x600 = 25066090;
volatile int8_t x601 = -1;
static volatile int16_t x602 = -1;
volatile uint16_t x603 = 378U;
int64_t x608 = -551386262275564LL;
int64_t x613 = INT64_MIN;
int16_t x619 = INT16_MAX;
uint64_t x620 = UINT64_MAX;
int8_t x636 = -6;
static int32_t t159 = 57;
static int64_t x641 = INT64_MIN;
int32_t x649 = -9870482;
int8_t x666 = INT8_MIN;
uint16_t x668 = 328U;
int16_t x671 = INT16_MIN;
int64_t x679 = 1333525406442LL;
int8_t x688 = 9;
static volatile int8_t x689 = INT8_MIN;
int32_t t172 = 814229;
volatile int32_t x695 = 855450;
static int32_t x696 = -172264;
uint64_t x703 = 686012572952782873LLU;
int16_t x706 = -1;
volatile int32_t x711 = -1;
volatile int16_t x713 = INT16_MIN;
int8_t x714 = INT8_MIN;
uint64_t x724 = 120894042828717644LLU;
volatile int32_t t180 = -4759453;
uint16_t x736 = UINT16_MAX;
uint64_t x737 = UINT64_MAX;
uint16_t x744 = 2U;
int32_t x748 = INT32_MIN;
static int32_t x749 = INT32_MAX;
static volatile int32_t t188 = -14770;
int64_t x757 = INT64_MAX;
static int16_t x761 = INT16_MIN;
volatile int32_t x766 = INT32_MIN;
static volatile int16_t x768 = INT16_MAX;
static uint64_t x769 = 193LLU;
static int32_t x771 = INT32_MAX;
int64_t x773 = INT64_MIN;
uint32_t x778 = 801224U;
int32_t t194 = 1012169;
static int16_t x781 = INT16_MIN;
static int32_t t195 = 85051;
int32_t x788 = INT32_MIN;
uint64_t x791 = UINT64_MAX;
static int32_t x792 = 3;
int16_t x793 = INT16_MIN;
volatile int32_t t198 = 123;
volatile uint8_t x798 = UINT8_MAX;


void f0(void) {
    	int32_t x1 = -39;
	static uint8_t x2 = UINT8_MAX;
	static int8_t x3 = INT8_MAX;
	int32_t x4 = -1;
	int32_t t0 = 4764;

    t0 = ((x1*(x2!=x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x7 = 3060;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 1;

    t1 = ((x5*(x6!=x7))<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x9 = UINT32_MAX;
	int32_t x10 = -1;
	int16_t x11 = -1;
	volatile int8_t x12 = 5;
	static volatile int32_t t2 = -19776;

    t2 = ((x9*(x10!=x11))<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	int16_t x14 = -3733;
	int32_t x15 = INT32_MIN;
	int8_t x16 = 1;

    t3 = ((x13*(x14!=x15))<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = INT32_MIN;
	int64_t x18 = -806422980LL;
	volatile uint64_t x19 = UINT64_MAX;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -15;

    t4 = ((x17*(x18!=x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = 25;
	volatile int8_t x22 = INT8_MIN;
	volatile int32_t x23 = -1;
	static uint32_t x24 = 3U;
	int32_t t5 = -445028;

    t5 = ((x21*(x22!=x23))<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x26 = 574726791302363401LLU;
	int64_t x28 = 598303LL;
	int32_t t6 = -173268;

    t6 = ((x25*(x26!=x27))<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 893LLU;
	uint32_t x30 = 662708755U;
	int16_t x31 = -1;
	volatile int32_t t7 = -309;

    t7 = ((x29*(x30!=x31))<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x34 = 7U;
	uint8_t x35 = 9U;
	static uint32_t x36 = 1U;
	int32_t t8 = -207000727;

    t8 = ((x33*(x34!=x35))<=x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 0U;
	int16_t x38 = INT16_MIN;
	static int8_t x39 = INT8_MIN;
	volatile int32_t t9 = 4650964;

    t9 = ((x37*(x38!=x39))<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -15917545;
	int32_t x44 = INT32_MIN;
	static int32_t t10 = -1;

    t10 = ((x41*(x42!=x43))<=x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -3;
	int16_t x47 = INT16_MIN;
	volatile int32_t t11 = 0;

    t11 = ((x45*(x46!=x47))<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = UINT8_MAX;
	volatile int64_t x50 = -275998534081917LL;
	int32_t x52 = -1;
	int32_t t12 = -367496980;

    t12 = ((x49*(x50!=x51))<=x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 4834LLU;
	int64_t x54 = -1LL;
	int8_t x56 = INT8_MIN;

    t13 = ((x53*(x54!=x55))<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = UINT16_MAX;
	static int8_t x58 = INT8_MIN;
	int32_t x59 = -1;
	static volatile int32_t x60 = INT32_MIN;
	static int32_t t14 = -1;

    t14 = ((x57*(x58!=x59))<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int16_t x61 = 9158;
	volatile int16_t x62 = INT16_MIN;
	int32_t x63 = INT32_MIN;
	uint8_t x64 = 42U;
	int32_t t15 = 4;

    t15 = ((x61*(x62!=x63))<=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -306264864933203505LL;
	int64_t x66 = -79211428194314LL;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 795852382;

    t16 = ((x65*(x66!=x67))<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = -8LL;
	int8_t x70 = 1;
	volatile int16_t x71 = INT16_MAX;
	int32_t x72 = -1;
	int32_t t17 = 33236374;

    t17 = ((x69*(x70!=x71))<=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -5;
	uint8_t x74 = UINT8_MAX;
	static int32_t x75 = 1;
	uint32_t x76 = 86U;
	static volatile int32_t t18 = 925974027;

    t18 = ((x73*(x74!=x75))<=x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x78 = 7882U;
	static int8_t x79 = INT8_MIN;
	static int16_t x80 = INT16_MIN;
	int32_t t19 = -184026913;

    t19 = ((x77*(x78!=x79))<=x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	int64_t x82 = 17889144803985LL;
	volatile int64_t x83 = -1LL;
	int8_t x84 = -1;
	volatile int32_t t20 = 8038547;

    t20 = ((x81*(x82!=x83))<=x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -372602414LL;
	int16_t x87 = 223;
	static volatile int32_t x88 = INT32_MIN;
	volatile int32_t t21 = -506758666;

    t21 = ((x85*(x86!=x87))<=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x89 = 4U;
	static int64_t x90 = INT64_MAX;
	uint32_t x91 = UINT32_MAX;
	int8_t x92 = INT8_MAX;
	int32_t t22 = 844133;

    t22 = ((x89*(x90!=x91))<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = -7947;
	volatile int8_t x95 = 1;
	int16_t x96 = INT16_MIN;

    t23 = ((x93*(x94!=x95))<=x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = INT64_MIN;
	volatile int32_t x99 = -1;
	volatile uint8_t x100 = 12U;
	int32_t t24 = 310;

    t24 = ((x97*(x98!=x99))<=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 339841728529LLU;
	int32_t x102 = INT32_MAX;
	uint32_t x103 = 0U;

    t25 = ((x101*(x102!=x103))<=x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = UINT8_MAX;
	static uint32_t x107 = 7U;
	int32_t t26 = 0;

    t26 = ((x105*(x106!=x107))<=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x109 = INT32_MIN;
	int8_t x111 = -16;
	static volatile int32_t t27 = 3423;

    t27 = ((x109*(x110!=x111))<=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -197;
	volatile int32_t x115 = INT32_MAX;
	volatile int32_t x116 = INT32_MAX;

    t28 = ((x113*(x114!=x115))<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = UINT16_MAX;
	uint16_t x119 = 910U;
	static int64_t x120 = -1LL;
	int32_t t29 = -255949041;

    t29 = ((x117*(x118!=x119))<=x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = INT16_MIN;
	static int16_t x123 = -1;
	static uint16_t x124 = 26U;
	volatile int32_t t30 = -13;

    t30 = ((x121*(x122!=x123))<=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 0;
	static int64_t x126 = INT64_MIN;
	static int16_t x127 = -2132;
	int64_t x128 = INT64_MIN;
	static volatile int32_t t31 = -277059159;

    t31 = ((x125*(x126!=x127))<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x130 = 120650096824721221LLU;
	uint8_t x131 = 0U;
	int32_t t32 = 1;

    t32 = ((x129*(x130!=x131))<=x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x135 = -183;
	int64_t x136 = INT64_MIN;
	int32_t t33 = 5;

    t33 = ((x133*(x134!=x135))<=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x138 = INT32_MIN;
	int32_t x140 = 3;

    t34 = ((x137*(x138!=x139))<=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x141 = INT64_MIN;
	static int16_t x142 = INT16_MIN;
	volatile int16_t x143 = -1;
	uint8_t x144 = 1U;

    t35 = ((x141*(x142!=x143))<=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x145 = 108122U;
	static uint32_t x146 = 6050475U;
	int64_t x147 = -165141776325906LL;
	int64_t x148 = 119480885250350064LL;
	int32_t t36 = 19016;

    t36 = ((x145*(x146!=x147))<=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x151 = -55353496226LL;
	volatile uint64_t x152 = 393392132LLU;

    t37 = ((x149*(x150!=x151))<=x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = 76U;
	int8_t x154 = INT8_MIN;
	uint8_t x155 = 10U;
	static volatile int16_t x156 = INT16_MIN;
	int32_t t38 = -232;

    t38 = ((x153*(x154!=x155))<=x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = UINT64_MAX;
	int8_t x158 = 1;
	int64_t x159 = -312640051944631061LL;
	volatile int64_t x160 = INT64_MIN;
	int32_t t39 = 5407154;

    t39 = ((x157*(x158!=x159))<=x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = UINT32_MAX;
	int64_t x162 = -143970LL;
	static int32_t x163 = INT32_MAX;
	int32_t x164 = INT32_MIN;

    t40 = ((x161*(x162!=x163))<=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x165 = 52U;
	uint32_t x166 = UINT32_MAX;
	int16_t x168 = -9063;
	int32_t t41 = -217878;

    t41 = ((x165*(x166!=x167))<=x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -6278759759LL;
	int8_t x170 = -1;
	volatile int32_t t42 = -114;

    t42 = ((x169*(x170!=x171))<=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x174 = INT8_MIN;
	uint32_t x175 = 50264U;
	static uint8_t x176 = UINT8_MAX;
	volatile int32_t t43 = 655160641;

    t43 = ((x173*(x174!=x175))<=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = 805859861U;
	volatile uint64_t x178 = UINT64_MAX;
	volatile int64_t x179 = INT64_MIN;
	int8_t x180 = INT8_MIN;

    t44 = ((x177*(x178!=x179))<=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 176U;
	int32_t x182 = INT32_MAX;
	int16_t x183 = 0;
	int32_t t45 = 101;

    t45 = ((x181*(x182!=x183))<=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = INT16_MIN;
	uint32_t x186 = 45479466U;
	int32_t x187 = 9992857;

    t46 = ((x185*(x186!=x187))<=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x190 = UINT32_MAX;
	uint16_t x191 = UINT16_MAX;
	volatile uint64_t x192 = 300108993004149737LLU;
	int32_t t47 = -10278644;

    t47 = ((x189*(x190!=x191))<=x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x193 = INT32_MIN;
	uint16_t x195 = 0U;
	int8_t x196 = -3;
	static volatile int32_t t48 = -194575;

    t48 = ((x193*(x194!=x195))<=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MAX;
	static int16_t x198 = -1;
	uint8_t x199 = 14U;
	int32_t t49 = -2509621;

    t49 = ((x197*(x198!=x199))<=x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x203 = -1LL;
	static int32_t x204 = 1776793;
	int32_t t50 = 531;

    t50 = ((x201*(x202!=x203))<=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x205 = 11U;
	int32_t x206 = INT32_MIN;
	uint64_t x207 = UINT64_MAX;
	uint16_t x208 = 21U;
	volatile int32_t t51 = -3;

    t51 = ((x205*(x206!=x207))<=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x209 = 3;
	int16_t x210 = -1;
	int16_t x211 = -273;
	int64_t x212 = 8510036LL;
	int32_t t52 = -5261263;

    t52 = ((x209*(x210!=x211))<=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x213 = -1;
	static int16_t x215 = 501;
	uint16_t x216 = 401U;
	int32_t t53 = -857745;

    t53 = ((x213*(x214!=x215))<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MAX;
	uint16_t x218 = 22U;
	uint16_t x219 = 2U;
	static uint8_t x220 = 1U;
	static int32_t t54 = 0;

    t54 = ((x217*(x218!=x219))<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x222 = 17310890;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = 417365;

    t55 = ((x221*(x222!=x223))<=x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = -1;
	int8_t x226 = -1;
	int32_t x228 = -10455005;
	int32_t t56 = 102;

    t56 = ((x225*(x226!=x227))<=x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -144862;
	static int8_t x230 = INT8_MIN;
	volatile uint64_t x232 = UINT64_MAX;
	static int32_t t57 = 17;

    t57 = ((x229*(x230!=x231))<=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x236 = INT64_MAX;
	int32_t t58 = 13270667;

    t58 = ((x233*(x234!=x235))<=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = UINT64_MAX;
	volatile uint16_t x238 = 5901U;
	int16_t x239 = INT16_MAX;
	int32_t x240 = -1;
	int32_t t59 = 10102;

    t59 = ((x237*(x238!=x239))<=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x242 = INT8_MIN;
	static volatile int64_t x243 = INT64_MIN;
	volatile int32_t x244 = INT32_MAX;

    t60 = ((x241*(x242!=x243))<=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = -1LL;
	static int64_t x246 = INT64_MIN;
	volatile int64_t x247 = -7129265LL;

    t61 = ((x245*(x246!=x247))<=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x250 = INT16_MAX;
	int64_t x251 = INT64_MIN;
	int64_t x252 = INT64_MIN;

    t62 = ((x249*(x250!=x251))<=x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x253 = 14799561528575LLU;
	int16_t x254 = 15;
	volatile uint16_t x255 = 12367U;
	volatile int32_t t63 = 3;

    t63 = ((x253*(x254!=x255))<=x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = UINT32_MAX;
	int32_t x258 = INT32_MAX;
	volatile int64_t x259 = INT64_MIN;
	uint64_t x260 = 7152417756LLU;

    t64 = ((x257*(x258!=x259))<=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = UINT64_MAX;
	volatile int64_t x263 = INT64_MIN;
	int16_t x264 = 12627;
	volatile int32_t t65 = 7;

    t65 = ((x261*(x262!=x263))<=x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x265 = INT64_MAX;
	static int64_t x266 = INT64_MAX;
	static uint32_t x268 = 615197983U;
	int32_t t66 = -3;

    t66 = ((x265*(x266!=x267))<=x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = 7U;
	int64_t x270 = INT64_MIN;
	volatile int32_t t67 = -3;

    t67 = ((x269*(x270!=x271))<=x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MAX;
	int64_t x274 = 6309LL;
	int32_t x275 = -1;

    t68 = ((x273*(x274!=x275))<=x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x278 = -20392LL;
	volatile uint8_t x280 = UINT8_MAX;
	volatile int32_t t69 = -428117621;

    t69 = ((x277*(x278!=x279))<=x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = 0;
	volatile uint8_t x282 = UINT8_MAX;
	volatile uint16_t x283 = 1U;
	int8_t x284 = -1;
	int32_t t70 = -62723120;

    t70 = ((x281*(x282!=x283))<=x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MAX;
	int16_t x286 = 41;
	uint32_t x287 = UINT32_MAX;
	volatile int32_t t71 = 1;

    t71 = ((x285*(x286!=x287))<=x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x290 = 63U;

    t72 = ((x289*(x290!=x291))<=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x293 = INT32_MAX;
	int16_t x294 = INT16_MAX;
	static uint8_t x295 = UINT8_MAX;
	int64_t x296 = 419906029848701LL;
	int32_t t73 = -248;

    t73 = ((x293*(x294!=x295))<=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MIN;
	int16_t x298 = -55;
	static volatile int64_t x299 = INT64_MIN;
	int16_t x300 = INT16_MIN;
	int32_t t74 = -1385;

    t74 = ((x297*(x298!=x299))<=x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x301 = INT32_MAX;
	int64_t x302 = 1LL;
	int32_t t75 = -90;

    t75 = ((x301*(x302!=x303))<=x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	volatile int32_t x306 = -161830;
	static int16_t x307 = -110;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t76 = 331162;

    t76 = ((x305*(x306!=x307))<=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = UINT8_MAX;
	volatile int64_t x310 = -425LL;
	int64_t x311 = INT64_MIN;
	int16_t x312 = INT16_MAX;
	static volatile int32_t t77 = 10928;

    t77 = ((x309*(x310!=x311))<=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x314 = 23U;
	uint8_t x315 = 2U;
	int32_t x316 = INT32_MIN;
	static int32_t t78 = -1513;

    t78 = ((x313*(x314!=x315))<=x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MAX;
	uint8_t x318 = UINT8_MAX;
	static volatile int64_t x319 = INT64_MAX;
	uint64_t x320 = UINT64_MAX;
	volatile int32_t t79 = -161856732;

    t79 = ((x317*(x318!=x319))<=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x321 = UINT16_MAX;
	volatile uint64_t x322 = 5151244LLU;
	volatile uint16_t x323 = 14456U;
	int64_t x324 = INT64_MAX;
	int32_t t80 = 1;

    t80 = ((x321*(x322!=x323))<=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = 59LLU;
	int8_t x326 = INT8_MAX;
	volatile uint16_t x327 = 52U;
	int64_t x328 = INT64_MIN;
	int32_t t81 = -7221;

    t81 = ((x325*(x326!=x327))<=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x330 = UINT32_MAX;
	int16_t x331 = INT16_MAX;
	int8_t x332 = INT8_MAX;

    t82 = ((x329*(x330!=x331))<=x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = UINT16_MAX;
	int64_t x334 = -1LL;
	uint16_t x335 = 10U;
	int32_t x336 = INT32_MIN;
	int32_t t83 = -73055456;

    t83 = ((x333*(x334!=x335))<=x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x338 = -145;
	uint8_t x339 = 66U;
	uint16_t x340 = 0U;
	static int32_t t84 = -5336204;

    t84 = ((x337*(x338!=x339))<=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = -1LL;
	static uint16_t x342 = 11U;
	int32_t x343 = -1;
	uint16_t x344 = 28U;
	volatile int32_t t85 = -517;

    t85 = ((x341*(x342!=x343))<=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x347 = -1;
	int32_t t86 = 233730018;

    t86 = ((x345*(x346!=x347))<=x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MAX;
	uint32_t x350 = 41U;
	volatile int16_t x352 = -1;
	int32_t t87 = 7;

    t87 = ((x349*(x350!=x351))<=x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x353 = UINT16_MAX;
	uint32_t x354 = 8U;
	uint8_t x355 = 30U;
	volatile uint16_t x356 = UINT16_MAX;
	static volatile int32_t t88 = -14123;

    t88 = ((x353*(x354!=x355))<=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x357 = UINT32_MAX;
	static int32_t x358 = -1;
	uint32_t x359 = UINT32_MAX;

    t89 = ((x357*(x358!=x359))<=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -1;
	int8_t x362 = INT8_MIN;
	static int16_t x363 = -1;

    t90 = ((x361*(x362!=x363))<=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x366 = UINT32_MAX;
	volatile int8_t x367 = INT8_MIN;
	volatile int16_t x368 = 555;
	volatile int32_t t91 = -5653490;

    t91 = ((x365*(x366!=x367))<=x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = 104;
	int32_t x370 = INT32_MAX;
	volatile uint8_t x371 = 14U;
	static volatile int64_t x372 = 7169LL;
	int32_t t92 = 16124;

    t92 = ((x369*(x370!=x371))<=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = 36;
	uint8_t x375 = UINT8_MAX;
	int8_t x376 = INT8_MIN;
	int32_t t93 = 302485;

    t93 = ((x373*(x374!=x375))<=x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = INT64_MAX;
	static int8_t x379 = INT8_MIN;
	static volatile uint16_t x380 = UINT16_MAX;
	volatile int32_t t94 = -87665124;

    t94 = ((x377*(x378!=x379))<=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x381 = -41;
	uint32_t x382 = 3117U;
	int32_t x383 = 3615;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = 146444148;

    t95 = ((x381*(x382!=x383))<=x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x385 = 11467U;
	volatile int16_t x386 = -1;
	volatile int32_t t96 = 1570;

    t96 = ((x385*(x386!=x387))<=x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x390 = -1;
	int8_t x391 = 0;
	static int16_t x392 = INT16_MAX;
	int32_t t97 = -448;

    t97 = ((x389*(x390!=x391))<=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = 440341684LL;
	volatile int16_t x394 = -1;
	int8_t x395 = INT8_MIN;
	uint8_t x396 = 28U;
	int32_t t98 = 3650002;

    t98 = ((x393*(x394!=x395))<=x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x400 = INT16_MIN;
	volatile int32_t t99 = -223526326;

    t99 = ((x397*(x398!=x399))<=x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = UINT32_MAX;
	int64_t x402 = -1LL;
	uint8_t x403 = 19U;
	int64_t x404 = -82LL;
	int32_t t100 = 239;

    t100 = ((x401*(x402!=x403))<=x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -1;
	static uint16_t x407 = 4040U;
	volatile int16_t x408 = -1;
	static volatile int32_t t101 = -32670249;

    t101 = ((x405*(x406!=x407))<=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x409 = 120U;
	uint8_t x410 = 57U;
	volatile int64_t x411 = INT64_MIN;
	uint16_t x412 = 8U;

    t102 = ((x409*(x410!=x411))<=x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x413 = INT64_MAX;
	int64_t x414 = -1LL;
	static uint64_t x416 = UINT64_MAX;

    t103 = ((x413*(x414!=x415))<=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = UINT8_MAX;
	int8_t x418 = 1;
	static int64_t x419 = -193797LL;

    t104 = ((x417*(x418!=x419))<=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -1;
	int32_t x422 = INT32_MAX;
	int8_t x424 = -1;
	int32_t t105 = -3160256;

    t105 = ((x421*(x422!=x423))<=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = 2;
	int32_t x426 = INT32_MIN;
	uint32_t x427 = 13278U;
	volatile int16_t x428 = 969;
	int32_t t106 = 23378071;

    t106 = ((x425*(x426!=x427))<=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = -898;
	volatile int64_t x431 = INT64_MAX;
	volatile uint16_t x432 = UINT16_MAX;
	int32_t t107 = 67106;

    t107 = ((x429*(x430!=x431))<=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 221183LLU;
	static volatile int16_t x434 = -1;
	static int64_t x435 = INT64_MIN;

    t108 = ((x433*(x434!=x435))<=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x440 = INT16_MIN;
	static int32_t t109 = -55744;

    t109 = ((x437*(x438!=x439))<=x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x442 = INT32_MIN;
	int8_t x444 = -5;
	int32_t t110 = 462890;

    t110 = ((x441*(x442!=x443))<=x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -101LL;
	uint16_t x446 = 647U;
	static volatile int64_t x447 = INT64_MIN;
	static int64_t x448 = INT64_MAX;

    t111 = ((x445*(x446!=x447))<=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = -258735LL;
	static uint32_t x450 = UINT32_MAX;
	int64_t x451 = -1LL;
	int32_t t112 = 6;

    t112 = ((x449*(x450!=x451))<=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MAX;
	static uint32_t x454 = 1428405875U;
	uint16_t x455 = UINT16_MAX;
	volatile int8_t x456 = 14;

    t113 = ((x453*(x454!=x455))<=x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x457 = 28997LLU;
	uint16_t x459 = 20U;
	volatile int64_t x460 = -1LL;
	volatile int32_t t114 = 231;

    t114 = ((x457*(x458!=x459))<=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = 320919U;
	int64_t x462 = INT64_MAX;
	int8_t x464 = 1;

    t115 = ((x461*(x462!=x463))<=x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x465 = -1;
	static uint8_t x466 = 57U;
	uint8_t x467 = UINT8_MAX;
	int16_t x468 = INT16_MAX;
	volatile int32_t t116 = 3012279;

    t116 = ((x465*(x466!=x467))<=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x469 = INT32_MIN;
	int32_t x470 = INT32_MIN;
	int8_t x471 = INT8_MIN;
	uint8_t x472 = 4U;
	volatile int32_t t117 = -481178;

    t117 = ((x469*(x470!=x471))<=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x474 = -1;
	int64_t x475 = 13872356929855LL;
	uint64_t x476 = 22LLU;

    t118 = ((x473*(x474!=x475))<=x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MAX;
	int64_t x478 = 1LL;
	static volatile int32_t t119 = 1812570;

    t119 = ((x477*(x478!=x479))<=x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 1U;
	volatile int64_t x482 = INT64_MIN;
	static volatile uint16_t x483 = 0U;
	volatile int32_t t120 = -3766;

    t120 = ((x481*(x482!=x483))<=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x487 = INT32_MIN;
	int32_t t121 = 2;

    t121 = ((x485*(x486!=x487))<=x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MAX;
	int8_t x490 = INT8_MAX;
	volatile int16_t x491 = -1;
	static int64_t x492 = INT64_MIN;
	static volatile int32_t t122 = -3431208;

    t122 = ((x489*(x490!=x491))<=x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	volatile uint32_t x494 = 2435U;
	volatile int64_t x495 = INT64_MAX;
	volatile int64_t x496 = INT64_MIN;
	int32_t t123 = 51;

    t123 = ((x493*(x494!=x495))<=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x498 = UINT8_MAX;
	uint64_t x499 = UINT64_MAX;
	int8_t x500 = -1;
	int32_t t124 = 0;

    t124 = ((x497*(x498!=x499))<=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MAX;
	int16_t x503 = INT16_MAX;
	volatile int32_t x504 = INT32_MIN;
	int32_t t125 = 375567;

    t125 = ((x501*(x502!=x503))<=x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x506 = UINT64_MAX;
	int8_t x507 = INT8_MIN;
	volatile int32_t t126 = 421;

    t126 = ((x505*(x506!=x507))<=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x510 = INT8_MIN;
	int16_t x511 = 0;
	static volatile int64_t x512 = INT64_MAX;
	int32_t t127 = -17;

    t127 = ((x509*(x510!=x511))<=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x513 = -190425305186301312LL;
	uint8_t x514 = 13U;
	int16_t x515 = 1;
	volatile int32_t t128 = -2886;

    t128 = ((x513*(x514!=x515))<=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -1;
	int8_t x519 = -1;
	int32_t t129 = -280812831;

    t129 = ((x517*(x518!=x519))<=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x522 = 4U;
	static int32_t x523 = INT32_MIN;
	uint32_t x524 = UINT32_MAX;
	volatile int32_t t130 = 1;

    t130 = ((x521*(x522!=x523))<=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MIN;
	int64_t x527 = -67720956089LL;
	static int32_t t131 = -54208518;

    t131 = ((x525*(x526!=x527))<=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x530 = 686;
	int16_t x531 = INT16_MIN;
	uint8_t x532 = 11U;
	volatile int32_t t132 = -1744;

    t132 = ((x529*(x530!=x531))<=x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = 452715;
	static int16_t x534 = -1;
	int32_t x536 = INT32_MAX;

    t133 = ((x533*(x534!=x535))<=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x537 = -1;
	int32_t x538 = INT32_MAX;

    t134 = ((x537*(x538!=x539))<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -12;
	volatile int8_t x543 = -12;
	int16_t x544 = 4;
	volatile int32_t t135 = 750;

    t135 = ((x541*(x542!=x543))<=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = 12U;
	int32_t x547 = -1;
	static int64_t x548 = INT64_MIN;
	volatile int32_t t136 = -3860;

    t136 = ((x545*(x546!=x547))<=x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x549 = UINT16_MAX;
	uint32_t x550 = 12299U;
	int64_t x552 = -1446745LL;
	volatile int32_t t137 = -13;

    t137 = ((x549*(x550!=x551))<=x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x553 = INT64_MIN;
	int64_t x554 = INT64_MAX;
	uint32_t x555 = UINT32_MAX;
	int32_t t138 = -96661809;

    t138 = ((x553*(x554!=x555))<=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x557 = INT8_MAX;
	int16_t x558 = INT16_MIN;
	volatile uint8_t x560 = 11U;
	int32_t t139 = 2187;

    t139 = ((x557*(x558!=x559))<=x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = 1U;
	int16_t x562 = 45;
	static int32_t x563 = INT32_MIN;
	uint16_t x564 = 1784U;
	volatile int32_t t140 = -31621936;

    t140 = ((x561*(x562!=x563))<=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x565 = UINT8_MAX;
	volatile uint16_t x566 = UINT16_MAX;
	int32_t x567 = INT32_MIN;
	int32_t x568 = INT32_MIN;
	volatile int32_t t141 = 31403;

    t141 = ((x565*(x566!=x567))<=x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MIN;
	int64_t x570 = INT64_MAX;
	int64_t x572 = INT64_MAX;

    t142 = ((x569*(x570!=x571))<=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x574 = 11U;
	int64_t x575 = INT64_MAX;
	int8_t x576 = INT8_MIN;
	volatile int32_t t143 = 3384172;

    t143 = ((x573*(x574!=x575))<=x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x577 = 3620U;
	static volatile int8_t x579 = INT8_MAX;
	static uint16_t x580 = 15U;
	static int32_t t144 = 22;

    t144 = ((x577*(x578!=x579))<=x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MIN;
	int32_t x582 = INT32_MIN;
	int32_t x584 = -1;
	volatile int32_t t145 = -17;

    t145 = ((x581*(x582!=x583))<=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	int16_t x586 = INT16_MAX;
	volatile int16_t x587 = 3604;
	static uint8_t x588 = 0U;
	volatile int32_t t146 = -366;

    t146 = ((x585*(x586!=x587))<=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x589 = INT8_MIN;
	volatile uint32_t x591 = 1835445U;
	int8_t x592 = INT8_MIN;
	int32_t t147 = 141164;

    t147 = ((x589*(x590!=x591))<=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x593 = 213644219U;
	int64_t x595 = -1LL;
	uint16_t x596 = UINT16_MAX;
	static int32_t t148 = 1994;

    t148 = ((x593*(x594!=x595))<=x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x597 = INT16_MIN;
	static uint64_t x598 = 3LLU;
	int16_t x599 = -21;
	int32_t t149 = -487572;

    t149 = ((x597*(x598!=x599))<=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x604 = UINT32_MAX;
	int32_t t150 = 78;

    t150 = ((x601*(x602!=x603))<=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 1075342060784933968LLU;
	uint16_t x606 = 0U;
	int64_t x607 = INT64_MIN;
	int32_t t151 = 36;

    t151 = ((x605*(x606!=x607))<=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x609 = INT64_MIN;
	int8_t x610 = INT8_MIN;
	int8_t x611 = 1;
	uint64_t x612 = 55103348401LLU;
	volatile int32_t t152 = 26109;

    t152 = ((x609*(x610!=x611))<=x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x614 = INT32_MIN;
	int16_t x615 = -10;
	static int16_t x616 = -2909;
	volatile int32_t t153 = 2893265;

    t153 = ((x613*(x614!=x615))<=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = 0;
	static int64_t x618 = INT64_MIN;
	volatile int32_t t154 = 6;

    t154 = ((x617*(x618!=x619))<=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x621 = -1LL;
	int16_t x622 = -1;
	uint64_t x623 = 2547LLU;
	uint64_t x624 = UINT64_MAX;
	int32_t t155 = 84;

    t155 = ((x621*(x622!=x623))<=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint8_t x625 = 5U;
	volatile int32_t x626 = INT32_MIN;
	uint16_t x627 = 211U;
	static uint16_t x628 = UINT16_MAX;
	volatile int32_t t156 = -796103757;

    t156 = ((x625*(x626!=x627))<=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = INT32_MIN;
	int64_t x630 = INT64_MAX;
	int32_t x631 = -1;
	static int32_t x632 = 52723;
	int32_t t157 = 1284;

    t157 = ((x629*(x630!=x631))<=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = UINT64_MAX;
	int16_t x634 = INT16_MIN;
	int32_t x635 = -1;
	volatile int32_t t158 = -274;

    t158 = ((x633*(x634!=x635))<=x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MIN;
	uint32_t x638 = UINT32_MAX;
	uint16_t x639 = 1U;
	static int16_t x640 = INT16_MIN;

    t159 = ((x637*(x638!=x639))<=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x642 = -21355;
	static int16_t x643 = INT16_MIN;
	uint32_t x644 = 1242832496U;
	static volatile int32_t t160 = 10039139;

    t160 = ((x641*(x642!=x643))<=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x645 = 11U;
	int64_t x646 = INT64_MIN;
	int32_t x647 = -1;
	int32_t x648 = -2385952;
	static int32_t t161 = 5166;

    t161 = ((x645*(x646!=x647))<=x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x650 = INT32_MIN;
	volatile int64_t x651 = INT64_MAX;
	int64_t x652 = -1LL;
	int32_t t162 = -5;

    t162 = ((x649*(x650!=x651))<=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = UINT16_MAX;
	int16_t x654 = INT16_MIN;
	int16_t x655 = 1;
	static uint32_t x656 = UINT32_MAX;
	volatile int32_t t163 = -14653291;

    t163 = ((x653*(x654!=x655))<=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = 438528099852LL;
	volatile uint32_t x658 = UINT32_MAX;
	static volatile uint32_t x659 = UINT32_MAX;
	int8_t x660 = 7;
	int32_t t164 = 2297;

    t164 = ((x657*(x658!=x659))<=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x661 = 35;
	uint64_t x662 = UINT64_MAX;
	uint32_t x663 = UINT32_MAX;
	uint64_t x664 = UINT64_MAX;
	int32_t t165 = -13665;

    t165 = ((x661*(x662!=x663))<=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x665 = 3;
	int8_t x667 = INT8_MAX;
	int32_t t166 = -115560157;

    t166 = ((x665*(x666!=x667))<=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MAX;
	volatile int64_t x670 = INT64_MAX;
	int64_t x672 = INT64_MIN;
	int32_t t167 = 282;

    t167 = ((x669*(x670!=x671))<=x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x673 = 79181430LLU;
	static uint8_t x674 = 0U;
	int64_t x675 = -1LL;
	static uint8_t x676 = 0U;
	volatile int32_t t168 = -119;

    t168 = ((x673*(x674!=x675))<=x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	uint16_t x678 = UINT16_MAX;
	int32_t x680 = 1675461;
	volatile int32_t t169 = -1549;

    t169 = ((x677*(x678!=x679))<=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = 355;
	int16_t x682 = INT16_MIN;
	static int32_t x683 = -110003;
	uint16_t x684 = 4U;
	int32_t t170 = -34930241;

    t170 = ((x681*(x682!=x683))<=x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 3U;
	int32_t x686 = -1;
	static uint64_t x687 = 180928018633099LLU;
	volatile int32_t t171 = 166903;

    t171 = ((x685*(x686!=x687))<=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x690 = 223666LL;
	int16_t x691 = INT16_MIN;
	int64_t x692 = 548096915986LL;

    t172 = ((x689*(x690!=x691))<=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = -94;
	uint32_t x694 = 229864U;
	volatile int32_t t173 = 349443313;

    t173 = ((x693*(x694!=x695))<=x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x697 = INT64_MIN;
	int16_t x698 = INT16_MIN;
	volatile int16_t x699 = 4733;
	int8_t x700 = INT8_MAX;
	volatile int32_t t174 = -2736;

    t174 = ((x697*(x698!=x699))<=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = 3U;
	int32_t x702 = INT32_MAX;
	int32_t x704 = INT32_MIN;
	int32_t t175 = 15878;

    t175 = ((x701*(x702!=x703))<=x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x705 = 1U;
	int32_t x707 = INT32_MAX;
	int16_t x708 = 0;
	static int32_t t176 = 193859236;

    t176 = ((x705*(x706!=x707))<=x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = 7355;
	static int8_t x710 = 1;
	int8_t x712 = 16;
	volatile int32_t t177 = 10098;

    t177 = ((x709*(x710!=x711))<=x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x715 = INT8_MAX;
	volatile int64_t x716 = INT64_MAX;
	volatile int32_t t178 = 228997291;

    t178 = ((x713*(x714!=x715))<=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x717 = -1;
	int64_t x718 = INT64_MAX;
	int32_t x719 = 317892;
	uint8_t x720 = 6U;
	static int32_t t179 = 3536566;

    t179 = ((x717*(x718!=x719))<=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	int64_t x722 = -1LL;
	int64_t x723 = INT64_MIN;

    t180 = ((x721*(x722!=x723))<=x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x725 = UINT64_MAX;
	uint8_t x726 = 3U;
	int32_t x727 = 39033;
	uint8_t x728 = UINT8_MAX;
	int32_t t181 = 27;

    t181 = ((x725*(x726!=x727))<=x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = 0;
	int8_t x730 = INT8_MIN;
	uint32_t x731 = UINT32_MAX;
	volatile int64_t x732 = -2903558499903577LL;
	volatile int32_t t182 = 3284;

    t182 = ((x729*(x730!=x731))<=x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x733 = 126U;
	static int16_t x734 = -1;
	int32_t x735 = 0;
	int32_t t183 = 7956;

    t183 = ((x733*(x734!=x735))<=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x738 = -1;
	int64_t x739 = -1LL;
	int32_t x740 = INT32_MAX;
	int32_t t184 = 347661;

    t184 = ((x737*(x738!=x739))<=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x741 = INT32_MAX;
	static uint16_t x742 = 10U;
	static volatile uint64_t x743 = UINT64_MAX;
	volatile int32_t t185 = -7;

    t185 = ((x741*(x742!=x743))<=x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = -1;
	int32_t x746 = INT32_MIN;
	int32_t x747 = -1153479;
	volatile int32_t t186 = 377078;

    t186 = ((x745*(x746!=x747))<=x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x750 = INT32_MAX;
	int8_t x751 = INT8_MIN;
	static int8_t x752 = INT8_MIN;
	static int32_t t187 = -10;

    t187 = ((x749*(x750!=x751))<=x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x753 = 37;
	volatile int16_t x754 = -1;
	uint32_t x755 = UINT32_MAX;
	uint16_t x756 = 431U;

    t188 = ((x753*(x754!=x755))<=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x758 = 1952;
	volatile uint32_t x759 = 55U;
	int64_t x760 = -102169543908LL;
	static volatile int32_t t189 = 878110961;

    t189 = ((x757*(x758!=x759))<=x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x762 = INT32_MIN;
	static int64_t x763 = 825LL;
	int8_t x764 = -1;
	static volatile int32_t t190 = -2432;

    t190 = ((x761*(x762!=x763))<=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = INT16_MIN;
	int64_t x767 = -1LL;
	volatile int32_t t191 = -68441;

    t191 = ((x765*(x766!=x767))<=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x770 = INT8_MIN;
	static volatile int32_t x772 = -1;
	volatile int32_t t192 = -24937;

    t192 = ((x769*(x770!=x771))<=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x774 = -14052407;
	volatile uint8_t x775 = 51U;
	volatile int16_t x776 = INT16_MAX;
	int32_t t193 = -1015;

    t193 = ((x773*(x774!=x775))<=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = UINT16_MAX;
	uint16_t x779 = 30U;
	int8_t x780 = -1;

    t194 = ((x777*(x778!=x779))<=x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x782 = UINT32_MAX;
	volatile int64_t x783 = INT64_MAX;
	static int64_t x784 = INT64_MAX;

    t195 = ((x781*(x782!=x783))<=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	volatile uint16_t x786 = 79U;
	int64_t x787 = INT64_MIN;
	volatile int32_t t196 = -3;

    t196 = ((x785*(x786!=x787))<=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = 33;
	int32_t x790 = -352190;
	volatile int32_t t197 = 13987;

    t197 = ((x789*(x790!=x791))<=x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x794 = -1LL;
	static int16_t x795 = -1;
	static uint8_t x796 = 91U;

    t198 = ((x793*(x794!=x795))<=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 38106182U;
	int8_t x799 = -1;
	int16_t x800 = -1;
	volatile int32_t t199 = -169438282;

    t199 = ((x797*(x798!=x799))<=x800);

    if (t199 != 1) { NG(); } else { ; }
	
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

