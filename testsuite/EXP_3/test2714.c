
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

uint8_t x3 = 0U;
uint64_t x6 = 16190LLU;
int64_t x11 = INT64_MIN;
uint32_t x20 = 15150016U;
uint32_t t4 = 10509U;
static uint64_t x21 = UINT64_MAX;
static int32_t x22 = -7;
int64_t x24 = -105315463600214189LL;
int32_t x30 = 2;
int32_t x36 = INT32_MIN;
int8_t x38 = INT8_MAX;
int16_t x39 = 12960;
static int32_t t9 = -667961;
static int8_t x41 = -1;
static uint32_t x44 = 48576U;
int64_t x47 = INT64_MIN;
int8_t x48 = -1;
volatile int32_t x52 = INT32_MAX;
volatile int32_t t12 = 303161906;
int16_t x54 = -15723;
int64_t x57 = INT64_MAX;
int16_t x67 = INT16_MIN;
int32_t t17 = -203;
static volatile int16_t x74 = 833;
int32_t x78 = INT32_MIN;
static volatile int8_t x79 = INT8_MIN;
volatile int64_t x82 = 1018407726131382954LL;
volatile int8_t x85 = INT8_MAX;
static uint8_t x87 = UINT8_MAX;
uint64_t x91 = 93400220256808011LLU;
static volatile int32_t x101 = -1;
int16_t x102 = 2186;
int64_t x103 = INT64_MAX;
static int16_t x106 = INT16_MAX;
int64_t x112 = -1LL;
volatile int64_t t30 = 397297307665998LL;
int16_t x127 = INT16_MAX;
uint64_t t31 = 15988555813LLU;
int16_t x130 = -44;
int16_t x140 = INT16_MAX;
int64_t x142 = INT64_MIN;
int32_t x143 = 129238;
static volatile int64_t t35 = 13LL;
static uint64_t x147 = 13036LLU;
int32_t t37 = 390;
static int64_t x156 = -3694222977LL;
int16_t x162 = 97;
uint16_t x163 = 1494U;
int64_t x177 = INT64_MAX;
uint32_t x178 = UINT32_MAX;
static int8_t x180 = 0;
int16_t x187 = 26;
uint32_t x188 = 1897318376U;
int64_t x190 = 135951856475LL;
uint64_t x194 = 509216142159843LLU;
volatile uint64_t t48 = 7783895LLU;
volatile int8_t x197 = -1;
uint64_t t49 = 1389LLU;
volatile int32_t x203 = INT32_MIN;
int64_t x213 = -189949376LL;
int64_t x226 = INT64_MIN;
volatile int64_t t56 = 0LL;
int8_t x240 = 0;
int16_t x244 = 1184;
uint8_t x246 = 18U;
volatile int64_t x248 = INT64_MIN;
int16_t x250 = INT16_MIN;
uint32_t x251 = 80517U;
int32_t x252 = INT32_MIN;
static volatile uint8_t x253 = 32U;
volatile int16_t x259 = INT16_MAX;
volatile uint64_t x262 = 581142909937LLU;
uint16_t x270 = 1U;
volatile int32_t t67 = 96;
volatile int8_t x277 = INT8_MAX;
int8_t x279 = INT8_MIN;
uint8_t x285 = 1U;
static int64_t x287 = INT64_MAX;
int64_t x288 = -1LL;
static volatile int16_t x290 = 14;
volatile uint32_t t73 = 357976703U;
static int16_t x297 = INT16_MIN;
int64_t x308 = 1872201918640445LL;
volatile uint8_t x312 = UINT8_MAX;
uint64_t x318 = 1LLU;
int64_t x328 = INT64_MAX;
static int16_t x336 = INT16_MIN;
int8_t x337 = INT8_MAX;
int64_t x340 = -1LL;
int8_t x350 = -1;
volatile uint32_t t87 = 146U;
volatile int16_t x354 = -1;
volatile int64_t x356 = INT64_MIN;
int8_t x357 = INT8_MIN;
volatile int8_t x359 = INT8_MIN;
static int64_t t89 = -17538480979493313LL;
volatile int64_t t90 = 261990771189990432LL;
uint16_t x366 = 91U;
volatile int8_t x369 = INT8_MIN;
static volatile int64_t x371 = -319851877LL;
int64_t t92 = -11231LL;
int32_t x377 = INT32_MAX;
int64_t x378 = INT64_MIN;
static int64_t x379 = -1LL;
int64_t t94 = 3340533156755079LL;
volatile int16_t x381 = -1;
int32_t x388 = -32020;
static uint64_t x407 = UINT64_MAX;
static volatile int64_t x410 = INT64_MIN;
int16_t x414 = INT16_MIN;
int64_t x417 = INT64_MIN;
static int16_t x420 = -23;
int16_t x429 = INT16_MIN;
volatile int64_t x431 = -3483341758LL;
int64_t t107 = 99722245321821352LL;
volatile int8_t x440 = INT8_MAX;
static int64_t x445 = -1017076LL;
int16_t x451 = INT16_MIN;
int32_t x453 = INT32_MIN;
volatile int64_t t113 = -421901274494LL;
uint32_t x462 = UINT32_MAX;
static volatile int64_t t119 = 4LL;
volatile int64_t t121 = -37305257038474939LL;
uint8_t x490 = 8U;
static volatile int8_t x492 = 2;
volatile int8_t x495 = INT8_MAX;
int64_t x508 = INT64_MIN;
int16_t x510 = INT16_MIN;
static int8_t x512 = INT8_MAX;
static int32_t t128 = 1;
volatile int16_t x519 = INT16_MAX;
volatile int8_t x535 = INT8_MIN;
uint16_t x536 = UINT16_MAX;
int32_t x538 = -254;
int64_t x542 = INT64_MIN;
int64_t x547 = INT64_MIN;
static volatile int64_t t136 = 14227384LL;
int32_t t138 = INT32_MIN;
int8_t x557 = INT8_MIN;
volatile uint8_t x558 = 0U;
uint64_t x563 = 199994808159468LLU;
static uint64_t t140 = 52292958038811LLU;
int64_t x573 = INT64_MIN;
volatile uint16_t x578 = 9U;
volatile uint64_t t144 = 6443865280657797LLU;
uint32_t t145 = 635287198U;
int64_t t146 = 2504457139557LL;
int32_t x593 = INT32_MAX;
int64_t x594 = -1LL;
uint64_t t149 = 66275527696708177LLU;
static int32_t x601 = INT32_MIN;
static volatile uint8_t x602 = 59U;
uint16_t x608 = 881U;
uint64_t x612 = 965870134005107LLU;
int64_t x614 = 9093LL;
static int64_t x624 = INT64_MIN;
uint8_t x626 = 13U;
volatile int32_t t157 = -1083326;
int64_t x635 = 22040LL;
int32_t x636 = INT32_MIN;
volatile int64_t t158 = 11769034509927LL;
int64_t x643 = INT64_MIN;
static int32_t x650 = 39636589;
volatile uint32_t t162 = 368348U;
uint64_t x657 = 622714LLU;
int16_t x661 = -1;
static volatile int16_t x663 = 2407;
int32_t x673 = -1102;
int64_t t168 = 113173668803201111LL;
uint8_t x677 = UINT8_MAX;
uint16_t x681 = 43U;
int64_t x682 = 3311846051866313LL;
uint16_t x690 = 2241U;
static int64_t x692 = -1LL;
static int32_t x693 = INT32_MIN;
uint8_t x695 = 4U;
volatile int32_t t173 = -190;
int64_t t174 = 53547812LL;
int32_t x707 = INT32_MIN;
volatile int16_t x708 = -3;
static volatile int32_t t176 = -188623;
int64_t x713 = 1LL;
int32_t x715 = INT32_MIN;
volatile uint64_t x723 = 12LLU;
static volatile int64_t t181 = 16701711LL;
int8_t x737 = INT8_MIN;
uint8_t x751 = 2U;
uint64_t t187 = 1816063119392424LLU;
static int64_t x762 = -1LL;
volatile uint64_t t190 = 29LLU;
volatile int64_t x772 = INT64_MIN;
int16_t x777 = -26;
int32_t x784 = -1;
int8_t x786 = INT8_MAX;
volatile int64_t t196 = 58957012841624LL;
int32_t x791 = 8736479;
volatile uint32_t x794 = 70557189U;


void f0(void) {
    	uint8_t x1 = 51U;
	uint32_t x2 = UINT32_MAX;
	uint8_t x4 = 6U;
	volatile uint32_t t0 = 22U;

    t0 = ((x1&x2)&(x3^x4));

    if (t0 != 2U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MIN;
	uint64_t x7 = 97676LLU;
	volatile uint16_t x8 = 24U;
	volatile uint64_t t1 = 3217567826493LLU;

    t1 = ((x5&x6)&(x7^x8));

    if (t1 != 15616LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	static volatile int8_t x10 = -17;
	uint32_t x12 = 10U;
	static volatile int64_t t2 = INT64_MIN;

    t2 = ((x9&x10)&(x11^x12));

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	uint64_t x14 = 13120LLU;
	int8_t x15 = -26;
	int64_t x16 = -1LL;
	static uint64_t t3 = 5LLU;

    t3 = ((x13&x14)&(x15^x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = -1;
	static uint16_t x18 = UINT16_MAX;
	int16_t x19 = -162;

    t4 = ((x17&x18)&(x19^x20));

    if (t4 != 54430U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x23 = 1U;
	volatile uint64_t t5 = 93409618901054LLU;

    t5 = ((x21&x22)&(x23^x24));

    if (t5 != 18341428610109337424LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	int32_t x26 = -1;
	uint8_t x27 = UINT8_MAX;
	uint16_t x28 = 42U;
	int32_t t6 = 0;

    t6 = ((x25&x26)&(x27^x28));

    if (t6 != 213) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = INT8_MIN;
	int64_t x31 = INT64_MIN;
	static volatile uint16_t x32 = 509U;
	volatile int64_t t7 = 329LL;

    t7 = ((x29&x30)&(x31^x32));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 1736U;
	int32_t x34 = 5;
	int8_t x35 = 15;
	int32_t t8 = 247265;

    t8 = ((x33&x34)&(x35^x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 124U;
	int32_t x40 = INT32_MIN;

    t9 = ((x37&x38)&(x39^x40));

    if (t9 != 32) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x42 = UINT16_MAX;
	uint16_t x43 = 28509U;
	static uint32_t t10 = 81U;

    t10 = ((x41&x42)&(x43^x44));

    if (t10 != 53917U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = -111;
	int32_t x46 = INT32_MIN;
	int64_t t11 = 74298400LL;

    t11 = ((x45&x46)&(x47^x48));

    if (t11 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = 3735;
	int32_t x50 = 82;
	int32_t x51 = INT32_MIN;

    t12 = ((x49&x50)&(x51^x52));

    if (t12 != 18) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = INT32_MIN;
	uint8_t x55 = 3U;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = INT32_MIN;

    t13 = ((x53&x54)&(x55^x56));

    if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = 21;
	int32_t x59 = 0;
	int8_t x60 = 45;
	volatile int64_t t14 = 3694215899LL;

    t14 = ((x57&x58)&(x59^x60));

    if (t14 != 5LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -3;
	int32_t x62 = INT32_MAX;
	int8_t x63 = INT8_MIN;
	static uint16_t x64 = 0U;
	volatile int32_t t15 = -710434180;

    t15 = ((x61&x62)&(x63^x64));

    if (t15 != 2147483520) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -1;
	uint8_t x66 = 8U;
	int64_t x68 = INT64_MIN;
	volatile int64_t t16 = 73816608619LL;

    t16 = ((x65&x66)&(x67^x68));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = 3023;
	int32_t x70 = -1;
	uint16_t x71 = 3722U;
	uint8_t x72 = 89U;

    t17 = ((x69&x70)&(x71^x72));

    if (t17 != 2755) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 1646U;
	int8_t x75 = 33;
	int16_t x76 = INT16_MIN;
	int32_t t18 = 0;

    t18 = ((x73&x74)&(x75^x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	volatile uint8_t x80 = UINT8_MAX;
	volatile int32_t t19 = INT32_MIN;

    t19 = ((x77&x78)&(x79^x80));

    if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 1U;
	int32_t x83 = INT32_MIN;
	int8_t x84 = 30;
	int64_t t20 = 1LL;

    t20 = ((x81&x82)&(x83^x84));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int16_t x86 = INT16_MIN;
	static uint8_t x88 = UINT8_MAX;
	int32_t t21 = 508295546;

    t21 = ((x85&x86)&(x87^x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	int16_t x90 = INT16_MIN;
	volatile int64_t x92 = INT64_MAX;
	static volatile uint64_t t22 = 2321088LLU;

    t22 = ((x89&x90)&(x91^x92));

    if (t22 != 9129971816597946368LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	int16_t x94 = -1;
	int64_t x95 = -1LL;
	uint16_t x96 = 0U;
	volatile int64_t t23 = 20131202649784287LL;

    t23 = ((x93&x94)&(x95^x96));

    if (t23 != -2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MAX;
	uint8_t x98 = UINT8_MAX;
	volatile int8_t x99 = INT8_MIN;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -891;

    t24 = ((x97&x98)&(x99^x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x104 = INT16_MIN;
	volatile int64_t t25 = 0LL;

    t25 = ((x101&x102)&(x103^x104));

    if (t25 != 2186LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x105 = -1LL;
	int8_t x107 = -1;
	uint16_t x108 = 1617U;
	int64_t t26 = 2484217102790LL;

    t26 = ((x105&x106)&(x107^x108));

    if (t26 != 31150LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = UINT16_MAX;
	int8_t x110 = INT8_MAX;
	int32_t x111 = -1;
	volatile int64_t t27 = 25085LL;

    t27 = ((x109&x110)&(x111^x112));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	uint32_t x114 = 1834079297U;
	int32_t x115 = INT32_MIN;
	int32_t x116 = -1;
	uint32_t t28 = 342U;

    t28 = ((x113&x114)&(x115^x116));

    if (t28 != 1834079232U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x117 = 14U;
	static int32_t x118 = 104698;
	volatile int8_t x119 = INT8_MIN;
	uint64_t x120 = 787LLU;
	uint64_t t29 = 14403792LLU;

    t29 = ((x117&x118)&(x119^x120));

    if (t29 != 2LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	uint32_t x122 = UINT32_MAX;
	volatile int64_t x123 = INT64_MAX;
	int16_t x124 = 1;

    t30 = ((x121&x122)&(x123^x124));

    if (t30 != 4294934528LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 12884473U;
	volatile uint64_t x126 = 23703994LLU;
	int32_t x128 = 15058;

    t31 = ((x125&x126)&(x127^x128));

    if (t31 != 296LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	static int16_t x131 = INT16_MIN;
	static int8_t x132 = 8;
	static volatile int32_t t32 = INT32_MIN;

    t32 = ((x129&x130)&(x131^x132));

    if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -1;
	uint64_t x134 = 11869566930LLU;
	static int64_t x135 = -1079568345851788LL;
	int64_t x136 = INT64_MAX;
	static uint64_t t33 = 23969866897947LLU;

    t33 = ((x133&x134)&(x135^x136));

    if (t33 != 2202216322LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = 87;
	static int64_t x138 = 2148769LL;
	int32_t x139 = INT32_MAX;
	static int64_t t34 = 11LL;

    t34 = ((x137&x138)&(x139^x140));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x141 = INT32_MAX;
	int16_t x144 = INT16_MIN;

    t35 = ((x141&x142)&(x143^x144));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = 12;
	volatile uint8_t x146 = UINT8_MAX;
	static int8_t x148 = INT8_MIN;
	uint64_t t36 = 1639493500624LLU;

    t36 = ((x145&x146)&(x147^x148));

    if (t36 != 12LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = 22;
	volatile int32_t x150 = -1;
	int8_t x151 = INT8_MIN;
	int16_t x152 = INT16_MAX;

    t37 = ((x149&x150)&(x151^x152));

    if (t37 != 22) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x153 = 990594029795LLU;
	int8_t x154 = -1;
	int32_t x155 = INT32_MIN;
	uint64_t t38 = 329LLU;

    t38 = ((x153&x154)&(x155^x156));

    if (t38 != 2684354659LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = 36438633U;
	static int32_t x158 = 5;
	static int32_t x159 = 247486173;
	uint16_t x160 = UINT16_MAX;
	volatile uint32_t t39 = 790248975U;

    t39 = ((x157&x158)&(x159^x160));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = 1;
	volatile int16_t x164 = INT16_MIN;
	volatile int32_t t40 = 920596;

    t40 = ((x161&x162)&(x163^x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MAX;
	int16_t x166 = INT16_MIN;
	uint8_t x167 = UINT8_MAX;
	uint32_t x168 = UINT32_MAX;
	volatile uint32_t t41 = 14316594U;

    t41 = ((x165&x166)&(x167^x168));

    if (t41 != 2147450880U) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x169 = INT32_MIN;
	volatile int64_t x170 = 579172LL;
	uint64_t x171 = UINT64_MAX;
	int64_t x172 = -1LL;
	volatile uint64_t t42 = 3908886261252272712LLU;

    t42 = ((x169&x170)&(x171^x172));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MAX;
	uint32_t x174 = 759U;
	uint8_t x175 = 22U;
	int32_t x176 = INT32_MAX;
	static int64_t t43 = -1364398LL;

    t43 = ((x173&x174)&(x175^x176));

    if (t43 != 737LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x179 = -1LL;
	static int64_t t44 = 180395993368LL;

    t44 = ((x177&x178)&(x179^x180));

    if (t44 != 4294967295LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x181 = UINT64_MAX;
	int32_t x182 = INT32_MIN;
	volatile int64_t x183 = 216491452127LL;
	static uint16_t x184 = 28U;
	volatile uint64_t t45 = 4132465334LLU;

    t45 = ((x181&x182)&(x183^x184));

    if (t45 != 214748364800LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MIN;
	uint32_t t46 = 257469U;

    t46 = ((x185&x186)&(x187^x188));

    if (t46 != 1897299968U) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MAX;
	uint8_t x191 = 19U;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t47 = 6991277975844204LLU;

    t47 = ((x189&x190)&(x191^x192));

    if (t47 != 660386632LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MAX;
	static int32_t x195 = 109531046;
	static uint32_t x196 = UINT32_MAX;

    t48 = ((x193&x194)&(x195^x196));

    if (t48 != 423632961LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x198 = UINT64_MAX;
	static uint32_t x199 = 124U;
	int8_t x200 = INT8_MIN;

    t49 = ((x197&x198)&(x199^x200));

    if (t49 != 4294967292LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	static uint8_t x202 = 1U;
	static int64_t x204 = INT64_MIN;
	volatile int64_t t50 = -1847577632LL;

    t50 = ((x201&x202)&(x203^x204));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = UINT16_MAX;
	static uint32_t x206 = 1176384U;
	uint16_t x207 = 29674U;
	volatile int16_t x208 = -16050;
	static volatile uint32_t t51 = 5459U;

    t51 = ((x205&x206)&(x207^x208));

    if (t51 != 45568U) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MAX;
	volatile int8_t x210 = INT8_MAX;
	int32_t x211 = -1;
	volatile int64_t x212 = -2190235518LL;
	volatile int64_t t52 = -524188374793LL;

    t52 = ((x209&x210)&(x211^x212));

    if (t52 != 125LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x214 = -1001654697LL;
	uint16_t x215 = UINT16_MAX;
	volatile uint64_t x216 = UINT64_MAX;
	volatile uint64_t t53 = 204046781LLU;

    t53 = ((x213&x214)&(x215^x216));

    if (t53 != 18446744072703508480LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x217 = -1;
	int32_t x218 = INT32_MIN;
	int8_t x219 = INT8_MAX;
	uint32_t x220 = UINT32_MAX;
	static uint32_t t54 = 339U;

    t54 = ((x217&x218)&(x219^x220));

    if (t54 != 2147483648U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = UINT64_MAX;
	uint16_t x222 = 1U;
	int16_t x223 = INT16_MIN;
	static volatile int32_t x224 = -1;
	uint64_t t55 = 78135044LLU;

    t55 = ((x221&x222)&(x223^x224));

    if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = 169U;
	static int64_t x227 = INT64_MAX;
	volatile int32_t x228 = 0;

    t56 = ((x225&x226)&(x227^x228));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = -5LL;
	int8_t x230 = INT8_MAX;
	int32_t x231 = 82868390;
	volatile int16_t x232 = -474;
	volatile int64_t t57 = 406615LL;

    t57 = ((x229&x230)&(x231^x232));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x233 = -9;
	uint64_t x234 = 75LLU;
	static volatile uint16_t x235 = UINT16_MAX;
	volatile int16_t x236 = INT16_MIN;
	static volatile uint64_t t58 = 2142440554922LLU;

    t58 = ((x233&x234)&(x235^x236));

    if (t58 != 67LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MAX;
	volatile uint16_t x238 = UINT16_MAX;
	int32_t x239 = INT32_MIN;
	static volatile int64_t t59 = -5570541LL;

    t59 = ((x237&x238)&(x239^x240));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -1LL;
	int16_t x242 = -121;
	volatile uint16_t x243 = UINT16_MAX;
	int64_t t60 = -1797LL;

    t60 = ((x241&x242)&(x243^x244));

    if (t60 != 64263LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 48672724U;
	int8_t x247 = -1;
	int64_t t61 = 978561831209LL;

    t61 = ((x245&x246)&(x247^x248));

    if (t61 != 16LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x249 = INT64_MIN;
	int64_t t62 = 197622909255946661LL;

    t62 = ((x249&x250)&(x251^x252));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x254 = 444992876LL;
	int8_t x255 = -1;
	static int16_t x256 = INT16_MAX;
	volatile int64_t t63 = -55266458392812LL;

    t63 = ((x253&x254)&(x255^x256));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = 1;
	volatile int8_t x258 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	static int32_t t64 = 2722;

    t64 = ((x257&x258)&(x259^x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x261 = -1;
	int16_t x263 = INT16_MIN;
	volatile uint16_t x264 = 2U;
	static uint64_t t65 = 591LLU;

    t65 = ((x261&x262)&(x263^x264));

    if (t65 != 581142904832LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x265 = 113;
	int16_t x266 = INT16_MIN;
	int8_t x267 = -39;
	volatile int16_t x268 = INT16_MAX;
	int32_t t66 = -3570;

    t66 = ((x265&x266)&(x267^x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	volatile int32_t x271 = INT32_MAX;
	int16_t x272 = -9964;

    t67 = ((x269&x270)&(x271^x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = 1;
	volatile int32_t x274 = -24105335;
	static int64_t x275 = INT64_MIN;
	int16_t x276 = -1;
	int64_t t68 = 6657353LL;

    t68 = ((x273&x274)&(x275^x276));

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x278 = -1LL;
	uint64_t x280 = 48110880025LLU;
	volatile uint64_t t69 = 14639LLU;

    t69 = ((x277&x278)&(x279^x280));

    if (t69 != 25LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MIN;
	uint32_t x282 = UINT32_MAX;
	static int32_t x283 = -1;
	int32_t x284 = INT32_MIN;
	volatile uint32_t t70 = 59U;

    t70 = ((x281&x282)&(x283^x284));

    if (t70 != 2147483520U) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x286 = -105326566;
	static int64_t t71 = -2115112654411567777LL;

    t71 = ((x285&x286)&(x287^x288));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = INT16_MIN;
	int32_t x291 = INT32_MIN;
	uint32_t x292 = UINT32_MAX;
	uint32_t t72 = 25U;

    t72 = ((x289&x290)&(x291^x292));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x293 = -1;
	uint32_t x294 = 1349U;
	int16_t x295 = -60;
	int8_t x296 = -31;

    t73 = ((x293&x294)&(x295^x296));

    if (t73 != 5U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x298 = 2;
	int32_t x299 = -1;
	int16_t x300 = INT16_MIN;
	int32_t t74 = -863;

    t74 = ((x297&x298)&(x299^x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x301 = -70;
	uint8_t x302 = 1U;
	int8_t x303 = INT8_MAX;
	volatile int32_t x304 = -1;
	volatile int32_t t75 = -1321;

    t75 = ((x301&x302)&(x303^x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x305 = -914574;
	volatile uint64_t x306 = UINT64_MAX;
	int8_t x307 = INT8_MAX;
	volatile uint64_t t76 = 3LLU;

    t76 = ((x305&x306)&(x307^x308));

    if (t76 != 1872201917792578LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = 7U;
	uint8_t x310 = UINT8_MAX;
	int8_t x311 = INT8_MAX;
	int32_t t77 = -101529410;

    t77 = ((x309&x310)&(x311^x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = UINT32_MAX;
	uint8_t x314 = 96U;
	int8_t x315 = 8;
	uint16_t x316 = 112U;
	uint32_t t78 = 85U;

    t78 = ((x313&x314)&(x315^x316));

    if (t78 != 96U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MIN;
	uint64_t x319 = 3094LLU;
	volatile uint8_t x320 = 8U;
	uint64_t t79 = 3127276059819LLU;

    t79 = ((x317&x318)&(x319^x320));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MAX;
	static uint64_t x322 = 52796862080936LLU;
	static int32_t x323 = INT32_MIN;
	static volatile uint64_t x324 = 3279284853321253LLU;
	uint64_t t80 = 2581898381942LLU;

    t80 = ((x321&x322)&(x323^x324));

    if (t80 != 9760LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x325 = -1;
	int8_t x326 = INT8_MAX;
	volatile uint32_t x327 = 24848360U;
	volatile int64_t t81 = 27LL;

    t81 = ((x325&x326)&(x327^x328));

    if (t81 != 23LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x329 = -2;
	static volatile uint32_t x330 = 364356577U;
	int64_t x331 = INT64_MIN;
	volatile int8_t x332 = -23;
	int64_t t82 = 1804542524451657LL;

    t82 = ((x329&x330)&(x331^x332));

    if (t82 != 364356576LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = -1834852455440385LL;
	uint16_t x334 = UINT16_MAX;
	volatile int16_t x335 = -2867;
	static volatile int64_t t83 = 489575874216LL;

    t83 = ((x333&x334)&(x335^x336));

    if (t83 != 5325LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x338 = INT32_MAX;
	int16_t x339 = -1;
	int64_t t84 = 1249682945616LL;

    t84 = ((x337&x338)&(x339^x340));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x341 = 1U;
	uint64_t x342 = 29768LLU;
	static uint8_t x343 = UINT8_MAX;
	volatile uint32_t x344 = 218536U;
	static uint64_t t85 = 2430314409325793118LLU;

    t85 = ((x341&x342)&(x343^x344));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	static uint8_t x346 = 42U;
	int8_t x347 = -6;
	int8_t x348 = -2;
	volatile int32_t t86 = -207;

    t86 = ((x345&x346)&(x347^x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x349 = 0U;
	uint32_t x351 = UINT32_MAX;
	static int8_t x352 = INT8_MAX;

    t87 = ((x349&x350)&(x351^x352));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x353 = 2U;
	int64_t x355 = 22513099800477LL;
	static volatile int64_t t88 = -4369037LL;

    t88 = ((x353&x354)&(x355^x356));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x358 = -1;
	int64_t x360 = -1LL;

    t89 = ((x357&x358)&(x359^x360));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = UINT8_MAX;
	int16_t x362 = -1;
	static uint16_t x363 = 120U;
	int64_t x364 = -135514LL;

    t90 = ((x361&x362)&(x363^x364));

    if (t90 != 222LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = -1;
	int64_t x367 = -7LL;
	int8_t x368 = INT8_MIN;
	int64_t t91 = -2140571477526437LL;

    t91 = ((x365&x366)&(x367^x368));

    if (t91 != 89LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x370 = 0U;
	static int16_t x372 = -1;

    t92 = ((x369&x370)&(x371^x372));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = 410221LL;
	uint32_t x374 = 18U;
	uint16_t x375 = UINT16_MAX;
	static uint16_t x376 = 6U;
	int64_t t93 = 3411228090611185437LL;

    t93 = ((x373&x374)&(x375^x376));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x380 = -1;

    t94 = ((x377&x378)&(x379^x380));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x382 = INT16_MIN;
	int16_t x383 = INT16_MIN;
	volatile int16_t x384 = -1;
	volatile int32_t t95 = 183680043;

    t95 = ((x381&x382)&(x383^x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MAX;
	volatile uint32_t x386 = 13993021U;
	int8_t x387 = 2;
	volatile uint32_t t96 = 763U;

    t96 = ((x385&x386)&(x387^x388));

    if (t96 != 13991980U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = 5124823523937827LL;
	uint8_t x390 = 11U;
	int64_t x391 = -368677618570LL;
	int64_t x392 = -850595136603609LL;
	volatile int64_t t97 = 557693123662269379LL;

    t97 = ((x389&x390)&(x391^x392));

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x393 = UINT16_MAX;
	int64_t x394 = 190618LL;
	static uint16_t x395 = 3U;
	int64_t x396 = -1LL;
	volatile int64_t t98 = 143459650598LL;

    t98 = ((x393&x394)&(x395^x396));

    if (t98 != 59544LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = UINT8_MAX;
	int64_t x398 = INT64_MIN;
	int32_t x399 = -404;
	int8_t x400 = INT8_MIN;
	int64_t t99 = 64880298207LL;

    t99 = ((x397&x398)&(x399^x400));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	int32_t x402 = -6758;
	static volatile int8_t x403 = -58;
	int32_t x404 = -540382;
	int32_t t100 = 1;

    t100 = ((x401&x402)&(x403^x404));

    if (t100 != 533632) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = 5;
	uint32_t x406 = 10284U;
	int16_t x408 = -2756;
	static uint64_t t101 = 8118LLU;

    t101 = ((x405&x406)&(x407^x408));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x409 = 8139U;
	uint16_t x411 = UINT16_MAX;
	uint64_t x412 = UINT64_MAX;
	volatile uint64_t t102 = 6759672493LLU;

    t102 = ((x409&x410)&(x411^x412));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x413 = INT32_MAX;
	uint16_t x415 = 2100U;
	volatile int64_t x416 = INT64_MIN;
	int64_t t103 = 0LL;

    t103 = ((x413&x414)&(x415^x416));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x418 = -1;
	volatile uint16_t x419 = 194U;
	volatile int64_t t104 = INT64_MIN;

    t104 = ((x417&x418)&(x419^x420));

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = 7299957U;
	static uint64_t x422 = UINT64_MAX;
	int64_t x423 = INT64_MIN;
	int64_t x424 = INT64_MAX;
	uint64_t t105 = 47091228LLU;

    t105 = ((x421&x422)&(x423^x424));

    if (t105 != 7299957LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x425 = -1;
	static int64_t x426 = INT64_MAX;
	int8_t x427 = INT8_MIN;
	int64_t x428 = -36893671LL;
	int64_t t106 = 225109145442203LL;

    t106 = ((x425&x426)&(x427^x428));

    if (t106 != 36893593LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x430 = INT8_MAX;
	int32_t x432 = INT32_MAX;

    t107 = ((x429&x430)&(x431^x432));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = 23204297169471925LL;
	int8_t x434 = -1;
	int32_t x435 = INT32_MIN;
	int32_t x436 = INT32_MIN;
	int64_t t108 = -2453461919318LL;

    t108 = ((x433&x434)&(x435^x436));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x437 = -1LL;
	static int32_t x438 = -1;
	static int32_t x439 = INT32_MIN;
	static int64_t t109 = 355085217LL;

    t109 = ((x437&x438)&(x439^x440));

    if (t109 != -2147483521LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -1;
	volatile int64_t x442 = INT64_MIN;
	volatile int32_t x443 = -1;
	static int8_t x444 = INT8_MAX;
	static int64_t t110 = INT64_MIN;

    t110 = ((x441&x442)&(x443^x444));

    if (t110 != INT64_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x446 = 95960U;
	volatile uint32_t x447 = 0U;
	int64_t x448 = 108876604467314LL;
	volatile int64_t t111 = 59140275440393625LL;

    t111 = ((x445&x446)&(x447^x448));

    if (t111 != 24576LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = 0;
	uint16_t x450 = UINT16_MAX;
	static volatile int64_t x452 = INT64_MIN;
	int64_t t112 = -1332564LL;

    t112 = ((x449&x450)&(x451^x452));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x454 = 163026831706162LL;
	uint8_t x455 = 12U;
	uint16_t x456 = 12837U;

    t113 = ((x453&x454)&(x455^x456));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 1003031093U;
	volatile int32_t x458 = -1;
	static int16_t x459 = -10;
	volatile int64_t x460 = -801257LL;
	int64_t t114 = -1587710032LL;

    t114 = ((x457&x458)&(x459^x460));

    if (t114 != 526369LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x461 = INT8_MIN;
	static int8_t x463 = INT8_MIN;
	int32_t x464 = INT32_MIN;
	uint32_t t115 = 857412U;

    t115 = ((x461&x462)&(x463^x464));

    if (t115 != 2147483520U) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = 1;
	int32_t x466 = -1;
	int8_t x467 = -12;
	int8_t x468 = -1;
	volatile int32_t t116 = 1120125;

    t116 = ((x465&x466)&(x467^x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 30250425392LLU;
	volatile uint16_t x470 = 3U;
	int64_t x471 = -143575927LL;
	int16_t x472 = INT16_MAX;
	volatile uint64_t t117 = 12049LLU;

    t117 = ((x469&x470)&(x471^x472));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 10368U;
	int8_t x474 = INT8_MIN;
	int32_t x475 = -1;
	volatile int8_t x476 = 59;
	static volatile int32_t t118 = 28737;

    t118 = ((x473&x474)&(x475^x476));

    if (t118 != 10368) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MAX;
	volatile int16_t x478 = INT16_MIN;
	uint32_t x479 = 149U;
	int32_t x480 = INT32_MIN;

    t119 = ((x477&x478)&(x479^x480));

    if (t119 != 2147483648LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x481 = 1237833635U;
	int64_t x482 = -15396596295372LL;
	int32_t x483 = INT32_MAX;
	int64_t x484 = INT64_MIN;
	int64_t t120 = -2048136LL;

    t120 = ((x481&x482)&(x483^x484));

    if (t120 != 21025056LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x485 = INT16_MAX;
	volatile int8_t x486 = INT8_MIN;
	volatile int32_t x487 = -1;
	int64_t x488 = INT64_MAX;

    t121 = ((x485&x486)&(x487^x488));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MIN;
	static volatile uint16_t x491 = 124U;
	int32_t t122 = -15251775;

    t122 = ((x489&x490)&(x491^x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint64_t x493 = UINT64_MAX;
	int8_t x494 = -36;
	static int16_t x496 = -1;
	static uint64_t t123 = 338225026667LLU;

    t123 = ((x493&x494)&(x495^x496));

    if (t123 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = 80U;
	uint16_t x498 = 34U;
	int8_t x499 = INT8_MIN;
	volatile int16_t x500 = -90;
	volatile int32_t t124 = 88989727;

    t124 = ((x497&x498)&(x499^x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = INT32_MAX;
	int64_t x502 = INT64_MIN;
	uint32_t x503 = UINT32_MAX;
	static int8_t x504 = -1;
	volatile int64_t t125 = -11147598106097LL;

    t125 = ((x501&x502)&(x503^x504));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int8_t x505 = INT8_MIN;
	volatile uint32_t x506 = 25852U;
	int16_t x507 = 770;
	static volatile int64_t t126 = 231LL;

    t126 = ((x505&x506)&(x507^x508));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int64_t x509 = -1279538LL;
	int64_t x511 = INT64_MAX;
	static volatile int64_t t127 = -941512365LL;

    t127 = ((x509&x510)&(x511^x512));

    if (t127 != 9223372036853465088LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MAX;
	int8_t x514 = -1;
	uint8_t x515 = UINT8_MAX;
	uint16_t x516 = 3206U;

    t128 = ((x513&x514)&(x515^x516));

    if (t128 != 3193) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = UINT16_MAX;
	volatile int32_t x518 = -1;
	int16_t x520 = INT16_MAX;
	volatile int32_t t129 = 257243;

    t129 = ((x517&x518)&(x519^x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MIN;
	static volatile int8_t x522 = INT8_MIN;
	uint16_t x523 = 15U;
	volatile int8_t x524 = 3;
	volatile int32_t t130 = 615128751;

    t130 = ((x521&x522)&(x523^x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int16_t x525 = INT16_MAX;
	static uint64_t x526 = 0LLU;
	static uint64_t x527 = 1297783285538187LLU;
	uint8_t x528 = UINT8_MAX;
	uint64_t t131 = 1062418603678LLU;

    t131 = ((x525&x526)&(x527^x528));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MIN;
	volatile int32_t x530 = -1;
	int8_t x531 = 0;
	int64_t x532 = -1LL;
	volatile int64_t t132 = 163603075175443LL;

    t132 = ((x529&x530)&(x531^x532));

    if (t132 != -2147483648LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = UINT64_MAX;
	volatile uint32_t x534 = 7U;
	static volatile uint64_t t133 = 182LLU;

    t133 = ((x533&x534)&(x535^x536));

    if (t133 != 7LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = 384901U;
	uint64_t x539 = 2037933900272LLU;
	uint16_t x540 = 0U;
	uint64_t t134 = 932102748248565LLU;

    t134 = ((x537&x538)&(x539^x540));

    if (t134 != 98560LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x541 = INT16_MIN;
	uint64_t x543 = 3180170655067939LLU;
	static int8_t x544 = INT8_MIN;
	uint64_t t135 = 31LLU;

    t135 = ((x541&x542)&(x543^x544));

    if (t135 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MAX;
	int64_t x546 = INT64_MIN;
	uint32_t x548 = UINT32_MAX;

    t136 = ((x545&x546)&(x547^x548));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = 1251493447832683411LL;
	int32_t x550 = INT32_MAX;
	int8_t x551 = INT8_MIN;
	int32_t x552 = INT32_MIN;
	volatile int64_t t137 = 13LL;

    t137 = ((x549&x550)&(x551^x552));

    if (t137 != 2093728640LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = -1;
	int32_t x554 = INT32_MIN;
	static int8_t x555 = 2;
	int32_t x556 = INT32_MIN;

    t138 = ((x553&x554)&(x555^x556));

    if (t138 != INT32_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x559 = 678912288;
	int64_t x560 = -667LL;
	volatile int64_t t139 = 4605143LL;

    t139 = ((x557&x558)&(x559^x560));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x561 = UINT16_MAX;
	int64_t x562 = 3706LL;
	uint64_t x564 = 0LLU;

    t140 = ((x561&x562)&(x563^x564));

    if (t140 != 3176LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MAX;
	int8_t x566 = 39;
	int16_t x567 = INT16_MAX;
	int8_t x568 = -20;
	int64_t t141 = -15384087826717LL;

    t141 = ((x565&x566)&(x567^x568));

    if (t141 != 3LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MIN;
	static uint32_t x570 = 1859959U;
	uint16_t x571 = UINT16_MAX;
	int64_t x572 = -1LL;
	static int64_t t142 = 16660930385919LL;

    t142 = ((x569&x570)&(x571^x572));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x574 = 4091827;
	int32_t x575 = INT32_MIN;
	static int32_t x576 = -6;
	static int64_t t143 = 1550024685857454LL;

    t143 = ((x573&x574)&(x575^x576));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -15639089;
	static uint64_t x579 = 3125294349LLU;
	int8_t x580 = -3;

    t144 = ((x577&x578)&(x579^x580));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x581 = 8;
	static volatile uint8_t x582 = 30U;
	int8_t x583 = 12;
	uint32_t x584 = 7246184U;

    t145 = ((x581&x582)&(x583^x584));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = -1LL;
	volatile uint8_t x586 = 115U;
	static int16_t x587 = -1;
	uint32_t x588 = 196958225U;

    t146 = ((x585&x586)&(x587^x588));

    if (t146 != 98LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -1;
	uint16_t x590 = UINT16_MAX;
	int8_t x591 = -1;
	int32_t x592 = INT32_MIN;
	int32_t t147 = 601855;

    t147 = ((x589&x590)&(x591^x592));

    if (t147 != 65535) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x595 = -1LL;
	static int8_t x596 = -1;
	static int64_t t148 = -3138158693241229LL;

    t148 = ((x593&x594)&(x595^x596));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x597 = -10609631;
	uint64_t x598 = 738068582656LLU;
	int32_t x599 = -1;
	int64_t x600 = 8011LL;

    t149 = ((x597&x598)&(x599^x600));

    if (t149 != 738068529152LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x603 = INT32_MIN;
	int64_t x604 = -1LL;
	static int64_t t150 = 44023639195760559LL;

    t150 = ((x601&x602)&(x603^x604));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x605 = -1;
	uint8_t x606 = UINT8_MAX;
	int16_t x607 = INT16_MIN;
	volatile int32_t t151 = 27900585;

    t151 = ((x605&x606)&(x607^x608));

    if (t151 != 113) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = UINT16_MAX;
	int16_t x610 = INT16_MIN;
	int64_t x611 = INT64_MIN;
	volatile uint64_t t152 = 9399006859LLU;

    t152 = ((x609&x610)&(x611^x612));

    if (t152 != 32768LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -1;
	static volatile int32_t x615 = 411454761;
	int32_t x616 = INT32_MIN;
	volatile int64_t t153 = 16474662982431212LL;

    t153 = ((x613&x614)&(x615^x616));

    if (t153 != 257LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x617 = -1;
	int8_t x618 = INT8_MIN;
	int8_t x619 = -1;
	int8_t x620 = 10;
	volatile int32_t t154 = 366679;

    t154 = ((x617&x618)&(x619^x620));

    if (t154 != -128) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x621 = 440LL;
	uint32_t x622 = 4U;
	volatile uint32_t x623 = 12057315U;
	int64_t t155 = 211371624LL;

    t155 = ((x621&x622)&(x623^x624));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = 9981759LL;
	static int8_t x627 = INT8_MAX;
	volatile int32_t x628 = INT32_MAX;
	volatile int64_t t156 = 1728038223052014713LL;

    t156 = ((x625&x626)&(x627^x628));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x629 = 0;
	uint16_t x630 = UINT16_MAX;
	int32_t x631 = 466024346;
	int8_t x632 = INT8_MIN;

    t157 = ((x629&x630)&(x631^x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 46555U;
	static int8_t x634 = 2;

    t158 = ((x633&x634)&(x635^x636));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MIN;
	uint16_t x638 = 0U;
	int16_t x639 = -1058;
	static int64_t x640 = -469459LL;
	int64_t t159 = 4962035190332902LL;

    t159 = ((x637&x638)&(x639^x640));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -8;
	int32_t x642 = -1;
	int8_t x644 = INT8_MAX;
	int64_t t160 = 6478170915LL;

    t160 = ((x641&x642)&(x643^x644));

    if (t160 != -9223372036854775688LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = 4662U;
	static uint16_t x646 = 9U;
	int64_t x647 = 5835978330LL;
	volatile uint8_t x648 = 6U;
	static volatile int64_t t161 = -330914178973765826LL;

    t161 = ((x645&x646)&(x647^x648));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 10U;
	uint32_t x651 = 10990870U;
	uint32_t x652 = 497586578U;

    t162 = ((x649&x650)&(x651^x652));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MAX;
	volatile uint8_t x654 = 35U;
	volatile int32_t x655 = -1;
	static volatile int32_t x656 = INT32_MIN;
	static int32_t t163 = 3;

    t163 = ((x653&x654)&(x655^x656));

    if (t163 != 35) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x658 = INT8_MAX;
	int16_t x659 = -1;
	static int32_t x660 = 8;
	static uint64_t t164 = 167041LLU;

    t164 = ((x657&x658)&(x659^x660));

    if (t164 != 114LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x662 = 1U;
	uint32_t x664 = 140U;
	volatile uint32_t t165 = 17U;

    t165 = ((x661&x662)&(x663^x664));

    if (t165 != 1U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	int16_t x666 = -1695;
	int32_t x667 = -1;
	static int64_t x668 = INT64_MIN;
	int64_t t166 = 1LL;

    t166 = ((x665&x666)&(x667^x668));

    if (t166 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = -1;
	int8_t x670 = -5;
	int8_t x671 = -1;
	volatile int64_t x672 = -13453001605705606LL;
	static volatile int64_t t167 = 318076910LL;

    t167 = ((x669&x670)&(x671^x672));

    if (t167 != 13453001605705601LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x674 = 49825034916LL;
	int8_t x675 = -1;
	volatile int64_t x676 = INT64_MIN;

    t168 = ((x673&x674)&(x675^x676));

    if (t168 != 49825034912LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x678 = 7181557;
	static volatile int32_t x679 = INT32_MIN;
	int64_t x680 = -1881311LL;
	int64_t t169 = 13LL;

    t169 = ((x677&x678)&(x679^x680));

    if (t169 != 33LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x683 = -1;
	uint64_t x684 = UINT64_MAX;
	static uint64_t t170 = 1180778913042311LLU;

    t170 = ((x681&x682)&(x683^x684));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 55U;
	static volatile uint64_t x686 = 1918493196704662LLU;
	int16_t x687 = INT16_MIN;
	uint16_t x688 = UINT16_MAX;
	volatile uint64_t t171 = 63635680LLU;

    t171 = ((x685&x686)&(x687^x688));

    if (t171 != 22LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = 5575U;
	static int32_t x691 = INT32_MAX;
	int64_t t172 = -52378815747165355LL;

    t172 = ((x689&x690)&(x691^x692));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x694 = 15U;
	int16_t x696 = INT16_MIN;

    t173 = ((x693&x694)&(x695^x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MAX;
	int64_t x698 = -4850LL;
	static int8_t x699 = 1;
	int32_t x700 = -1;

    t174 = ((x697&x698)&(x699^x700));

    if (t174 != 27918LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x701 = -1;
	int8_t x702 = -1;
	uint32_t x703 = 5496U;
	static volatile uint32_t x704 = 118517U;
	volatile uint32_t t175 = 40356276U;

    t175 = ((x701&x702)&(x703^x704));

    if (t175 != 121741U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = 0;
	int32_t x706 = -1;

    t176 = ((x705&x706)&(x707^x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = 2U;
	static volatile int64_t x710 = 508LL;
	uint8_t x711 = UINT8_MAX;
	int64_t x712 = INT64_MIN;
	volatile int64_t t177 = 2353693696288LL;

    t177 = ((x709&x710)&(x711^x712));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x714 = -395561385;
	int16_t x716 = 14965;
	int64_t t178 = 249905727LL;

    t178 = ((x713&x714)&(x715^x716));

    if (t178 != 1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x717 = INT32_MIN;
	static uint16_t x718 = 2U;
	static int16_t x719 = 236;
	static int64_t x720 = INT64_MIN;
	static volatile int64_t t179 = -1318998196158LL;

    t179 = ((x717&x718)&(x719^x720));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x721 = INT32_MIN;
	uint32_t x722 = 5897U;
	int8_t x724 = 0;
	static uint64_t t180 = 165922524054LLU;

    t180 = ((x721&x722)&(x723^x724));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = INT32_MAX;
	static int32_t x726 = 1322;
	int64_t x727 = -434439LL;
	int16_t x728 = -1;

    t181 = ((x725&x726)&(x727^x728));

    if (t181 != 258LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = 1972LLU;
	uint16_t x730 = 15U;
	uint32_t x731 = UINT32_MAX;
	uint8_t x732 = 14U;
	volatile uint64_t t182 = 1986119779LLU;

    t182 = ((x729&x730)&(x731^x732));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x733 = UINT64_MAX;
	uint32_t x734 = 23098196U;
	uint16_t x735 = 252U;
	static int16_t x736 = 1;
	uint64_t t183 = 104737793184LLU;

    t183 = ((x733&x734)&(x735^x736));

    if (t183 != 84LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x738 = -1;
	int16_t x739 = -1;
	uint8_t x740 = 2U;
	int32_t t184 = 50324121;

    t184 = ((x737&x738)&(x739^x740));

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MAX;
	volatile int16_t x742 = INT16_MIN;
	int16_t x743 = -380;
	int32_t x744 = -4;
	volatile int32_t t185 = 27930035;

    t185 = ((x741&x742)&(x743^x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = 47U;
	int32_t x746 = INT32_MIN;
	int16_t x747 = 168;
	int64_t x748 = INT64_MIN;
	int64_t t186 = -729616LL;

    t186 = ((x745&x746)&(x747^x748));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = UINT64_MAX;
	int16_t x750 = 81;
	uint64_t x752 = 400566287443613330LLU;

    t187 = ((x749&x750)&(x751^x752));

    if (t187 != 16LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x753 = UINT64_MAX;
	int8_t x754 = 1;
	volatile uint64_t x755 = UINT64_MAX;
	int8_t x756 = INT8_MAX;
	volatile uint64_t t188 = 0LLU;

    t188 = ((x753&x754)&(x755^x756));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	static uint64_t x758 = UINT64_MAX;
	volatile uint16_t x759 = UINT16_MAX;
	static uint8_t x760 = UINT8_MAX;
	uint64_t t189 = 743993434LLU;

    t189 = ((x757&x758)&(x759^x760));

    if (t189 != 32768LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = 575420LLU;
	int16_t x763 = 12557;
	int64_t x764 = -32722931LL;

    t190 = ((x761&x762)&(x763^x764));

    if (t190 != 557312LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MAX;
	uint64_t x766 = 166313333264LLU;
	static int64_t x767 = -1LL;
	uint16_t x768 = UINT16_MAX;
	volatile uint64_t t191 = 1083234956353880LLU;

    t191 = ((x765&x766)&(x767^x768));

    if (t191 != 957087744LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 881030753962991LLU;
	volatile int32_t x770 = 84;
	static uint32_t x771 = UINT32_MAX;
	uint64_t t192 = 2207081LLU;

    t192 = ((x769&x770)&(x771^x772));

    if (t192 != 68LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = 112799040U;
	int8_t x774 = INT8_MIN;
	int64_t x775 = -1LL;
	int64_t x776 = INT64_MAX;
	volatile int64_t t193 = 68LL;

    t193 = ((x773&x774)&(x775^x776));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x778 = INT32_MIN;
	volatile int8_t x779 = INT8_MAX;
	int16_t x780 = -5833;
	int32_t t194 = INT32_MIN;

    t194 = ((x777&x778)&(x779^x780));

    if (t194 != INT32_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x781 = 197U;
	static int32_t x782 = 6114246;
	static uint16_t x783 = UINT16_MAX;
	static uint32_t t195 = 12973224U;

    t195 = ((x781&x782)&(x783^x784));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = -1;
	static int64_t x787 = INT64_MIN;
	volatile int64_t x788 = INT64_MIN;

    t196 = ((x785&x786)&(x787^x788));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x789 = INT8_MIN;
	uint64_t x790 = UINT64_MAX;
	int8_t x792 = -28;
	uint64_t t197 = 1736192883LLU;

    t197 = ((x789&x790)&(x791^x792));

    if (t197 != 18446744073700815104LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = -1;
	uint16_t x795 = UINT16_MAX;
	uint64_t x796 = 14LLU;
	volatile uint64_t t198 = 5872LLU;

    t198 = ((x793&x794)&(x795^x796));

    if (t198 != 40449LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 624U;
	static int64_t x798 = 14348LL;
	int64_t x799 = INT64_MAX;
	int8_t x800 = -1;
	volatile int64_t t199 = 71927711084944991LL;

    t199 = ((x797&x798)&(x799^x800));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

