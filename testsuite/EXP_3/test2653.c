
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

volatile int32_t x4 = INT32_MIN;
static uint8_t x7 = 1U;
int64_t x13 = -1LL;
int32_t x14 = 1;
int32_t x22 = -1;
int64_t x24 = INT64_MIN;
volatile int64_t x28 = INT64_MIN;
int16_t x30 = -1;
static int32_t t7 = -84149;
static int32_t x37 = -1;
volatile uint64_t x40 = 465868LLU;
uint32_t x42 = UINT32_MAX;
int8_t x48 = -1;
uint64_t x57 = 263103954246718140LLU;
volatile int32_t x58 = -1;
volatile uint32_t x60 = 15275U;
int32_t t15 = -972832;
int16_t x67 = -152;
int16_t x69 = -1;
int32_t t20 = 345897;
uint64_t x85 = 438004LLU;
volatile int32_t t23 = 905;
int64_t x100 = -83320727996468LL;
uint8_t x102 = 2U;
uint32_t x104 = 5082700U;
static uint32_t x106 = 12U;
uint32_t x108 = 84177492U;
uint32_t x125 = 621611800U;
volatile int32_t t31 = -715725280;
volatile int8_t x129 = INT8_MIN;
int32_t x133 = -1;
static int64_t x137 = -1970971969011337345LL;
static uint32_t x138 = UINT32_MAX;
uint16_t x140 = 35U;
static int32_t t37 = 1;
static int8_t x164 = -1;
int32_t x167 = INT32_MIN;
static volatile int32_t t42 = 5;
int64_t x173 = INT64_MIN;
uint8_t x174 = 5U;
volatile int16_t x179 = INT16_MIN;
static int8_t x182 = INT8_MIN;
volatile int32_t t46 = -17;
int64_t x192 = INT64_MAX;
int32_t t47 = 1530382;
volatile int16_t x201 = 320;
int32_t t50 = -228657393;
uint16_t x209 = 447U;
uint16_t x210 = 98U;
volatile int32_t x216 = INT32_MIN;
int8_t x219 = INT8_MIN;
int8_t x224 = INT8_MIN;
uint32_t x226 = UINT32_MAX;
volatile int32_t t56 = 0;
int64_t x236 = INT64_MIN;
volatile uint32_t x241 = 5826U;
static volatile uint64_t x244 = 2133882536LLU;
int32_t t60 = 2;
volatile int32_t t62 = 42122764;
static uint8_t x253 = 3U;
int64_t x254 = -29516113413LL;
static uint8_t x255 = UINT8_MAX;
uint16_t x256 = 0U;
int16_t x257 = INT16_MAX;
volatile uint8_t x259 = 8U;
volatile int32_t t64 = 382576;
int64_t x262 = 3587LL;
uint16_t x264 = 28611U;
int64_t x267 = -1LL;
int32_t x268 = INT32_MIN;
uint8_t x271 = 7U;
int32_t t67 = -415;
int16_t x273 = INT16_MAX;
static int32_t x274 = INT32_MIN;
int8_t x291 = -32;
static volatile int16_t x295 = -744;
int8_t x296 = 0;
static volatile int64_t x306 = INT64_MIN;
uint16_t x313 = 19U;
int32_t x317 = -679910643;
int64_t x319 = 23522247426310LL;
int64_t x320 = INT64_MAX;
static volatile uint8_t x321 = 43U;
int64_t x326 = INT64_MIN;
volatile int32_t t81 = 1;
volatile int16_t x330 = 0;
int8_t x335 = -21;
static uint8_t x337 = 0U;
static volatile int64_t x351 = -1LL;
static volatile int32_t t87 = 1;
volatile int16_t x356 = -1;
uint64_t x357 = UINT64_MAX;
uint32_t x374 = 256U;
static int32_t t93 = 219;
int8_t x379 = -62;
int8_t x388 = INT8_MIN;
static volatile int32_t t96 = -211021;
volatile int8_t x400 = 1;
int32_t t99 = -1037174145;
uint16_t x401 = 6U;
int8_t x408 = INT8_MIN;
int32_t x414 = -200624;
static volatile int64_t x418 = -1LL;
int64_t x421 = INT64_MIN;
static volatile int32_t t105 = 31783;
volatile uint64_t x433 = 3586818308380LLU;
int32_t x435 = 106265;
int8_t x436 = -1;
int32_t x440 = INT32_MIN;
static int32_t x446 = 955897;
volatile int8_t x453 = INT8_MAX;
int32_t x454 = INT32_MAX;
volatile int32_t t115 = 14;
int32_t x466 = INT32_MIN;
int64_t x467 = INT64_MIN;
int8_t x469 = -17;
static int16_t x471 = -5;
int64_t x484 = INT64_MAX;
int8_t x486 = INT8_MIN;
int32_t x492 = INT32_MAX;
volatile int64_t x495 = INT64_MIN;
volatile int32_t t124 = -210;
static volatile int8_t x501 = INT8_MAX;
uint8_t x510 = UINT8_MAX;
int8_t x514 = INT8_MIN;
uint16_t x515 = 9U;
static uint32_t x517 = 954U;
int16_t x522 = INT16_MAX;
static uint16_t x524 = UINT16_MAX;
int64_t x537 = INT64_MAX;
uint64_t x542 = 23090477320578LLU;
volatile int16_t x546 = INT16_MAX;
int16_t x551 = INT16_MIN;
uint64_t x562 = 2380836952918757LLU;
static int32_t t141 = 2;
volatile uint8_t x575 = 6U;
static uint64_t x576 = UINT64_MAX;
volatile int32_t t143 = -490355480;
int16_t x577 = INT16_MIN;
static int32_t x578 = INT32_MIN;
static uint64_t x588 = 279923076664729836LLU;
int16_t x591 = INT16_MAX;
int32_t x597 = INT32_MIN;
static volatile uint16_t x608 = UINT16_MAX;
volatile int16_t x616 = -483;
int64_t x617 = INT64_MIN;
uint64_t x620 = UINT64_MAX;
static volatile int32_t t156 = 603633;
uint16_t x630 = 4U;
static volatile uint8_t x631 = 0U;
int32_t t159 = -595;
volatile int8_t x645 = INT8_MIN;
static int16_t x648 = INT16_MAX;
volatile uint64_t x655 = 11227412150LLU;
int32_t t166 = 17;
volatile uint64_t x672 = 0LLU;
volatile uint64_t x674 = 3212793411644629839LLU;
volatile uint8_t x676 = 4U;
int8_t x678 = INT8_MIN;
int32_t x679 = 0;
int32_t x689 = -6;
volatile uint64_t x690 = 277536LLU;
uint64_t x697 = 7573063387910LLU;
static int8_t x700 = INT8_MAX;
uint8_t x701 = UINT8_MAX;
volatile int16_t x702 = -77;
int16_t x704 = 10;
volatile int64_t x714 = -1LL;
int8_t x717 = INT8_MAX;
static uint8_t x732 = 2U;
uint16_t x733 = UINT16_MAX;
int8_t x734 = -1;
volatile int32_t t184 = 125489531;
uint32_t x743 = 0U;
uint32_t x744 = 13202204U;
static uint16_t x755 = 1411U;
volatile uint16_t x757 = 0U;
int16_t x758 = INT16_MAX;
volatile int32_t t189 = -2035017;
static int32_t x762 = INT32_MIN;
uint32_t x763 = 676511U;
volatile int32_t t190 = 6324723;
int64_t x768 = -129803LL;
volatile int32_t t192 = -29;
int8_t x773 = INT8_MIN;
static volatile int32_t t194 = 27227;
uint32_t x787 = UINT32_MAX;
uint64_t x793 = 40023746066LLU;


void f0(void) {
    	uint32_t x1 = 2031868221U;
	volatile int16_t x2 = 366;
	int64_t x3 = INT64_MIN;
	volatile int32_t t0 = 28797467;

    t0 = ((x1==x2)!=(x3^x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	volatile uint64_t x6 = 3188LLU;
	volatile uint16_t x8 = 11278U;
	volatile int32_t t1 = -2;

    t1 = ((x5==x6)!=(x7^x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = 0;
	static uint8_t x10 = UINT8_MAX;
	uint64_t x11 = UINT64_MAX;
	static volatile int32_t x12 = INT32_MAX;
	int32_t t2 = -1004;

    t2 = ((x9==x10)!=(x11^x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x15 = UINT64_MAX;
	int32_t x16 = INT32_MAX;
	int32_t t3 = -3;

    t3 = ((x13==x14)!=(x15^x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 6573808U;
	static uint64_t x18 = 302776063043LLU;
	int16_t x19 = -1;
	volatile int8_t x20 = 2;
	int32_t t4 = 3;

    t4 = ((x17==x18)!=(x19^x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x21 = 4U;
	static uint16_t x23 = 0U;
	volatile int32_t t5 = 77352004;

    t5 = ((x21==x22)!=(x23^x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	static uint8_t x26 = UINT8_MAX;
	uint32_t x27 = 0U;
	volatile int32_t t6 = 85;

    t6 = ((x25==x26)!=(x27^x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x29 = UINT16_MAX;
	int32_t x31 = INT32_MIN;
	static uint16_t x32 = 11594U;

    t7 = ((x29==x30)!=(x31^x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int8_t x34 = -13;
	static int32_t x35 = -1;
	uint64_t x36 = UINT64_MAX;
	int32_t t8 = -225985;

    t8 = ((x33==x34)!=(x35^x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = -1;
	volatile int32_t x39 = 6166;
	int32_t t9 = -3484;

    t9 = ((x37==x38)!=(x39^x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = UINT16_MAX;
	uint16_t x43 = 44U;
	uint16_t x44 = 11453U;
	int32_t t10 = 167130947;

    t10 = ((x41==x42)!=(x43^x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	static int16_t x46 = -1;
	int8_t x47 = INT8_MIN;
	volatile int32_t t11 = -10118600;

    t11 = ((x45==x46)!=(x47^x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = 364629170;
	volatile int8_t x50 = INT8_MAX;
	int16_t x51 = -1;
	int16_t x52 = 77;
	static int32_t t12 = 258629;

    t12 = ((x49==x50)!=(x51^x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = -1;
	int32_t x54 = INT32_MIN;
	static int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MIN;
	int32_t t13 = 463795;

    t13 = ((x53==x54)!=(x55^x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x59 = 5U;
	volatile int32_t t14 = -675963;

    t14 = ((x57==x58)!=(x59^x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MAX;
	static uint64_t x62 = 3251LLU;
	volatile int32_t x63 = -51;
	int64_t x64 = INT64_MIN;

    t15 = ((x61==x62)!=(x63^x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 2481U;
	volatile int16_t x66 = INT16_MIN;
	static int16_t x68 = -1;
	int32_t t16 = -61;

    t16 = ((x65==x66)!=(x67^x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = 15;
	int8_t x71 = INT8_MIN;
	int8_t x72 = INT8_MIN;
	int32_t t17 = 27100;

    t17 = ((x69==x70)!=(x71^x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint64_t x73 = 26440097LLU;
	volatile int8_t x74 = INT8_MAX;
	int16_t x75 = -6;
	int8_t x76 = 0;
	int32_t t18 = -21;

    t18 = ((x73==x74)!=(x75^x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x77 = -1;
	uint8_t x78 = UINT8_MAX;
	int32_t x79 = INT32_MIN;
	static volatile int64_t x80 = INT64_MIN;
	int32_t t19 = 62331284;

    t19 = ((x77==x78)!=(x79^x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = UINT8_MAX;
	int64_t x82 = INT64_MAX;
	uint64_t x83 = UINT64_MAX;
	int32_t x84 = INT32_MIN;

    t20 = ((x81==x82)!=(x83^x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x86 = INT16_MIN;
	uint32_t x87 = 179U;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = -990764;

    t21 = ((x85==x86)!=(x87^x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int64_t x89 = -25049724LL;
	uint64_t x90 = UINT64_MAX;
	int32_t x91 = -1;
	int8_t x92 = INT8_MAX;
	int32_t t22 = 27633285;

    t22 = ((x89==x90)!=(x91^x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x93 = INT32_MAX;
	int16_t x94 = -99;
	int32_t x95 = INT32_MIN;
	int16_t x96 = INT16_MAX;

    t23 = ((x93==x94)!=(x95^x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = 1871;
	int32_t x98 = 213643;
	int8_t x99 = -14;
	int32_t t24 = -1737869;

    t24 = ((x97==x98)!=(x99^x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	volatile uint32_t x103 = 202U;
	volatile int32_t t25 = 1556;

    t25 = ((x101==x102)!=(x103^x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = -312335959994063LL;
	int64_t x107 = INT64_MIN;
	static volatile int32_t t26 = -2348;

    t26 = ((x105==x106)!=(x107^x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 13592U;
	uint64_t x110 = 11484176LLU;
	volatile int8_t x111 = INT8_MIN;
	int16_t x112 = -27;
	volatile int32_t t27 = 111759;

    t27 = ((x109==x110)!=(x111^x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 492012U;
	uint16_t x114 = 17065U;
	uint64_t x115 = 249292858272LLU;
	int8_t x116 = -1;
	static volatile int32_t t28 = -84275646;

    t28 = ((x113==x114)!=(x115^x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x117 = UINT16_MAX;
	uint16_t x118 = 559U;
	int32_t x119 = 797018;
	int16_t x120 = 731;
	volatile int32_t t29 = 130505;

    t29 = ((x117==x118)!=(x119^x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int8_t x122 = -1;
	volatile int16_t x123 = 42;
	int16_t x124 = INT16_MIN;
	int32_t t30 = 7;

    t30 = ((x121==x122)!=(x123^x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x126 = -1;
	volatile int8_t x127 = INT8_MAX;
	static volatile int32_t x128 = INT32_MIN;

    t31 = ((x125==x126)!=(x127^x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x130 = UINT64_MAX;
	int16_t x131 = -1;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t32 = 111349;

    t32 = ((x129==x130)!=(x131^x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x134 = 2013704491887292666LLU;
	int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MIN;
	int32_t t33 = 8796411;

    t33 = ((x133==x134)!=(x135^x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x139 = 25072725U;
	static int32_t t34 = -364656;

    t34 = ((x137==x138)!=(x139^x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MAX;
	int8_t x142 = 1;
	volatile uint16_t x143 = 3853U;
	uint64_t x144 = 11443045729978LLU;
	volatile int32_t t35 = -2485882;

    t35 = ((x141==x142)!=(x143^x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MAX;
	uint64_t x146 = 13823636LLU;
	volatile int64_t x147 = 25LL;
	static int16_t x148 = INT16_MIN;
	int32_t t36 = 276078;

    t36 = ((x145==x146)!=(x147^x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = 2;
	int32_t x150 = -1251;
	int8_t x151 = 21;
	int64_t x152 = INT64_MAX;

    t37 = ((x149==x150)!=(x151^x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x153 = INT32_MAX;
	int8_t x154 = INT8_MAX;
	static uint8_t x155 = 0U;
	uint64_t x156 = 402393893200679LLU;
	int32_t t38 = -48313;

    t38 = ((x153==x154)!=(x155^x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = INT16_MAX;
	int32_t x158 = INT32_MIN;
	static int64_t x159 = -512491416013LL;
	int16_t x160 = -1;
	int32_t t39 = 52428249;

    t39 = ((x157==x158)!=(x159^x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = INT8_MIN;
	int32_t x162 = -1;
	int32_t x163 = 16630737;
	volatile int32_t t40 = -789846313;

    t40 = ((x161==x162)!=(x163^x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x165 = -1;
	uint32_t x166 = 7U;
	volatile int8_t x168 = INT8_MAX;
	int32_t t41 = 6572;

    t41 = ((x165==x166)!=(x167^x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = -1;
	static int16_t x170 = 0;
	int8_t x171 = -1;
	int16_t x172 = INT16_MIN;

    t42 = ((x169==x170)!=(x171^x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x175 = UINT8_MAX;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t43 = 0;

    t43 = ((x173==x174)!=(x175^x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x177 = INT16_MIN;
	static int16_t x178 = INT16_MIN;
	int64_t x180 = -4LL;
	int32_t t44 = 13;

    t44 = ((x177==x178)!=(x179^x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	static int16_t x183 = -1;
	static int64_t x184 = INT64_MIN;
	int32_t t45 = -1816;

    t45 = ((x181==x182)!=(x183^x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = INT32_MIN;
	static int16_t x186 = INT16_MAX;
	static int64_t x187 = INT64_MIN;
	uint8_t x188 = 58U;

    t46 = ((x185==x186)!=(x187^x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -1;
	int16_t x190 = INT16_MIN;
	volatile int32_t x191 = -1;

    t47 = ((x189==x190)!=(x191^x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -1;
	uint16_t x194 = 53U;
	uint32_t x195 = 166959142U;
	int32_t x196 = INT32_MIN;
	static volatile int32_t t48 = -32;

    t48 = ((x193==x194)!=(x195^x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MAX;
	volatile int64_t x198 = INT64_MIN;
	int8_t x199 = 0;
	int8_t x200 = INT8_MAX;
	volatile int32_t t49 = 65892603;

    t49 = ((x197==x198)!=(x199^x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x202 = 25;
	volatile int8_t x203 = 0;
	int32_t x204 = INT32_MAX;

    t50 = ((x201==x202)!=(x203^x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MAX;
	static volatile int32_t x206 = INT32_MIN;
	static int64_t x207 = -262677718LL;
	int8_t x208 = 9;
	volatile int32_t t51 = -1;

    t51 = ((x205==x206)!=(x207^x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x211 = UINT32_MAX;
	static volatile int16_t x212 = INT16_MIN;
	int32_t t52 = -11958161;

    t52 = ((x209==x210)!=(x211^x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = INT16_MIN;
	uint64_t x214 = 29916LLU;
	int64_t x215 = -1LL;
	int32_t t53 = -15017431;

    t53 = ((x213==x214)!=(x215^x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	int16_t x218 = -1;
	int64_t x220 = INT64_MAX;
	int32_t t54 = 25872738;

    t54 = ((x217==x218)!=(x219^x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MAX;
	static volatile int32_t x222 = 329;
	uint16_t x223 = 1517U;
	volatile int32_t t55 = -252;

    t55 = ((x221==x222)!=(x223^x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x225 = INT32_MAX;
	int32_t x227 = INT32_MIN;
	static volatile int16_t x228 = 10868;

    t56 = ((x225==x226)!=(x227^x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x229 = INT32_MAX;
	int32_t x230 = INT32_MIN;
	volatile int8_t x231 = INT8_MIN;
	int8_t x232 = 46;
	volatile int32_t t57 = -1032249277;

    t57 = ((x229==x230)!=(x231^x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = -1;
	static int16_t x234 = -1;
	volatile uint16_t x235 = UINT16_MAX;
	volatile int32_t t58 = 4434;

    t58 = ((x233==x234)!=(x235^x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = 14U;
	volatile int16_t x238 = -61;
	int64_t x239 = 15829761LL;
	uint8_t x240 = 1U;
	volatile int32_t t59 = 56;

    t59 = ((x237==x238)!=(x239^x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x242 = 2;
	static uint8_t x243 = UINT8_MAX;

    t60 = ((x241==x242)!=(x243^x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -423364;
	uint8_t x246 = UINT8_MAX;
	int32_t x247 = INT32_MIN;
	int64_t x248 = INT64_MIN;
	volatile int32_t t61 = -455;

    t61 = ((x245==x246)!=(x247^x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x249 = -1;
	int32_t x250 = INT32_MIN;
	static volatile uint8_t x251 = 0U;
	int32_t x252 = -10056799;

    t62 = ((x249==x250)!=(x251^x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t t63 = -35;

    t63 = ((x253==x254)!=(x255^x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x258 = 16;
	static int64_t x260 = INT64_MAX;

    t64 = ((x257==x258)!=(x259^x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MAX;
	int32_t x263 = INT32_MIN;
	int32_t t65 = 0;

    t65 = ((x261==x262)!=(x263^x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = -1;
	int16_t x266 = -1;
	volatile int32_t t66 = -3;

    t66 = ((x265==x266)!=(x267^x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = 1U;
	int8_t x270 = INT8_MIN;
	int32_t x272 = 559368;

    t67 = ((x269==x270)!=(x271^x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x275 = 448U;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t68 = 2874574;

    t68 = ((x273==x274)!=(x275^x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 30U;
	int32_t x278 = INT32_MAX;
	static int64_t x279 = -1LL;
	uint8_t x280 = UINT8_MAX;
	volatile int32_t t69 = 91055;

    t69 = ((x277==x278)!=(x279^x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MAX;
	int8_t x282 = INT8_MIN;
	static uint64_t x283 = 3601LLU;
	static uint64_t x284 = 53448296LLU;
	int32_t t70 = -29;

    t70 = ((x281==x282)!=(x283^x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -1;
	uint8_t x286 = 3U;
	int16_t x287 = 53;
	volatile int32_t x288 = -1;
	volatile int32_t t71 = -180;

    t71 = ((x285==x286)!=(x287^x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -1;
	volatile int16_t x290 = -1;
	int16_t x292 = INT16_MIN;
	volatile int32_t t72 = -25142;

    t72 = ((x289==x290)!=(x291^x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x293 = UINT64_MAX;
	uint16_t x294 = 2701U;
	volatile int32_t t73 = -1;

    t73 = ((x293==x294)!=(x295^x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	static int32_t x298 = -266960;
	volatile int8_t x299 = -3;
	int16_t x300 = 1;
	volatile int32_t t74 = 6657;

    t74 = ((x297==x298)!=(x299^x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = 77102184LLU;
	uint8_t x302 = 1U;
	static int16_t x303 = -232;
	int8_t x304 = INT8_MAX;
	volatile int32_t t75 = -10;

    t75 = ((x301==x302)!=(x303^x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = UINT64_MAX;
	volatile int64_t x307 = -3695836LL;
	int64_t x308 = 13788902911837LL;
	volatile int32_t t76 = -3655;

    t76 = ((x305==x306)!=(x307^x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	uint16_t x310 = 4586U;
	uint8_t x311 = 46U;
	volatile int16_t x312 = INT16_MIN;
	volatile int32_t t77 = -974790;

    t77 = ((x309==x310)!=(x311^x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x314 = INT64_MAX;
	int8_t x315 = -12;
	int16_t x316 = -1;
	int32_t t78 = -53368;

    t78 = ((x313==x314)!=(x315^x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x318 = INT16_MAX;
	volatile int32_t t79 = -7387453;

    t79 = ((x317==x318)!=(x319^x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x322 = -1;
	volatile uint32_t x323 = 3U;
	int8_t x324 = -16;
	volatile int32_t t80 = -706250;

    t80 = ((x321==x322)!=(x323^x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MAX;
	int32_t x327 = -1;
	volatile int64_t x328 = INT64_MIN;

    t81 = ((x325==x326)!=(x327^x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MIN;
	static int16_t x331 = INT16_MAX;
	static int32_t x332 = -1;
	int32_t t82 = 696524495;

    t82 = ((x329==x330)!=(x331^x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MIN;
	static int16_t x334 = INT16_MIN;
	volatile uint16_t x336 = UINT16_MAX;
	volatile int32_t t83 = 0;

    t83 = ((x333==x334)!=(x335^x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x338 = 88U;
	int8_t x339 = INT8_MAX;
	int8_t x340 = INT8_MAX;
	int32_t t84 = 25;

    t84 = ((x337==x338)!=(x339^x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = 0U;
	int8_t x342 = INT8_MAX;
	static int8_t x343 = INT8_MIN;
	static int16_t x344 = INT16_MAX;
	int32_t t85 = -145955644;

    t85 = ((x341==x342)!=(x343^x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = -4755;
	uint16_t x346 = 1008U;
	static int32_t x347 = 0;
	int16_t x348 = INT16_MAX;
	volatile int32_t t86 = 392324;

    t86 = ((x345==x346)!=(x347^x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint16_t x349 = 1U;
	int64_t x350 = -1LL;
	static int8_t x352 = INT8_MIN;

    t87 = ((x349==x350)!=(x351^x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x353 = -1;
	uint64_t x354 = 115736LLU;
	volatile int8_t x355 = 0;
	int32_t t88 = 115;

    t88 = ((x353==x354)!=(x355^x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x358 = -9;
	int16_t x359 = INT16_MIN;
	static uint8_t x360 = UINT8_MAX;
	static int32_t t89 = 7110;

    t89 = ((x357==x358)!=(x359^x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = -15812074213LL;
	uint32_t x362 = 423U;
	int32_t x363 = INT32_MAX;
	int32_t x364 = INT32_MIN;
	static volatile int32_t t90 = 83;

    t90 = ((x361==x362)!=(x363^x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = 459LLU;
	volatile uint16_t x366 = UINT16_MAX;
	volatile int64_t x367 = INT64_MIN;
	int16_t x368 = -282;
	int32_t t91 = 11;

    t91 = ((x365==x366)!=(x367^x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x369 = -7538LL;
	int8_t x370 = INT8_MAX;
	static uint64_t x371 = 46971905LLU;
	int16_t x372 = INT16_MIN;
	static int32_t t92 = 1;

    t92 = ((x369==x370)!=(x371^x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = 7U;
	uint8_t x375 = 6U;
	int8_t x376 = -1;

    t93 = ((x373==x374)!=(x375^x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = UINT16_MAX;
	uint64_t x378 = 1LLU;
	static int8_t x380 = INT8_MAX;
	volatile int32_t t94 = 36974;

    t94 = ((x377==x378)!=(x379^x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = 0LL;
	int16_t x382 = 0;
	static uint16_t x383 = 0U;
	static int8_t x384 = 1;
	int32_t t95 = -45;

    t95 = ((x381==x382)!=(x383^x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x385 = 4U;
	static uint8_t x386 = 35U;
	uint8_t x387 = 73U;

    t96 = ((x385==x386)!=(x387^x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 19634428U;
	uint8_t x390 = 4U;
	int64_t x391 = 3789065952LL;
	int8_t x392 = 1;
	volatile int32_t t97 = 3;

    t97 = ((x389==x390)!=(x391^x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = 1190U;
	int16_t x394 = INT16_MIN;
	volatile uint32_t x395 = 282452U;
	int64_t x396 = INT64_MAX;
	volatile int32_t t98 = 1022;

    t98 = ((x393==x394)!=(x395^x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x397 = INT8_MIN;
	int32_t x398 = 193;
	int32_t x399 = INT32_MAX;

    t99 = ((x397==x398)!=(x399^x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x402 = INT64_MIN;
	int64_t x403 = -1LL;
	volatile int64_t x404 = -10506LL;
	volatile int32_t t100 = -7632;

    t100 = ((x401==x402)!=(x403^x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	int32_t x406 = -673458155;
	volatile uint8_t x407 = 3U;
	volatile int32_t t101 = 3;

    t101 = ((x405==x406)!=(x407^x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = UINT16_MAX;
	int16_t x410 = 10;
	int32_t x411 = INT32_MIN;
	static int16_t x412 = INT16_MIN;
	volatile int32_t t102 = 5708652;

    t102 = ((x409==x410)!=(x411^x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = 10U;
	volatile uint64_t x415 = 32891692LLU;
	volatile int8_t x416 = INT8_MAX;
	static int32_t t103 = 11988356;

    t103 = ((x413==x414)!=(x415^x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x417 = INT8_MIN;
	uint64_t x419 = UINT64_MAX;
	volatile int32_t x420 = INT32_MAX;
	int32_t t104 = 31971169;

    t104 = ((x417==x418)!=(x419^x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x422 = INT8_MIN;
	int8_t x423 = 0;
	static volatile int8_t x424 = INT8_MIN;

    t105 = ((x421==x422)!=(x423^x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x425 = 22;
	static int16_t x426 = -1;
	static int32_t x427 = 1;
	uint16_t x428 = 32750U;
	int32_t t106 = -290043;

    t106 = ((x425==x426)!=(x427^x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = 18897582;
	uint8_t x430 = 33U;
	int8_t x431 = INT8_MIN;
	int32_t x432 = INT32_MIN;
	int32_t t107 = -7434726;

    t107 = ((x429==x430)!=(x431^x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x434 = 7475LLU;
	volatile int32_t t108 = 1;

    t108 = ((x433==x434)!=(x435^x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	static uint8_t x438 = 26U;
	int8_t x439 = INT8_MIN;
	volatile int32_t t109 = -10282;

    t109 = ((x437==x438)!=(x439^x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x441 = 2LL;
	static int8_t x442 = INT8_MIN;
	int64_t x443 = INT64_MAX;
	int16_t x444 = INT16_MIN;
	int32_t t110 = 0;

    t110 = ((x441==x442)!=(x443^x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 57920U;
	int8_t x447 = 1;
	int32_t x448 = INT32_MIN;
	static int32_t t111 = 28;

    t111 = ((x445==x446)!=(x447^x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint64_t x449 = UINT64_MAX;
	uint8_t x450 = 103U;
	int8_t x451 = 0;
	int32_t x452 = INT32_MIN;
	int32_t t112 = 2892550;

    t112 = ((x449==x450)!=(x451^x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x455 = 16;
	uint16_t x456 = 0U;
	volatile int32_t t113 = -1;

    t113 = ((x453==x454)!=(x455^x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x457 = 1888U;
	int32_t x458 = -184661793;
	static uint16_t x459 = 51U;
	static int16_t x460 = INT16_MIN;
	int32_t t114 = 11127351;

    t114 = ((x457==x458)!=(x459^x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x461 = -1;
	int32_t x462 = -1;
	uint32_t x463 = UINT32_MAX;
	volatile uint16_t x464 = 72U;

    t115 = ((x461==x462)!=(x463^x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MIN;
	uint16_t x468 = UINT16_MAX;
	static volatile int32_t t116 = -11821;

    t116 = ((x465==x466)!=(x467^x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x470 = 1U;
	int32_t x472 = -1495454;
	int32_t t117 = -1;

    t117 = ((x469==x470)!=(x471^x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x473 = 25;
	volatile int64_t x474 = INT64_MIN;
	int16_t x475 = INT16_MAX;
	int8_t x476 = -1;
	int32_t t118 = -172;

    t118 = ((x473==x474)!=(x475^x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x477 = 1U;
	static volatile int16_t x478 = INT16_MIN;
	int32_t x479 = INT32_MIN;
	volatile int8_t x480 = INT8_MIN;
	int32_t t119 = -13;

    t119 = ((x477==x478)!=(x479^x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MIN;
	uint32_t x482 = 64215U;
	uint64_t x483 = 147407691988129LLU;
	static int32_t t120 = -12726781;

    t120 = ((x481==x482)!=(x483^x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 82U;
	int64_t x487 = INT64_MAX;
	volatile int16_t x488 = 14;
	int32_t t121 = 5726698;

    t121 = ((x485==x486)!=(x487^x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x489 = -1;
	int32_t x490 = INT32_MIN;
	int32_t x491 = INT32_MIN;
	volatile int32_t t122 = -359583921;

    t122 = ((x489==x490)!=(x491^x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x493 = UINT32_MAX;
	int64_t x494 = INT64_MAX;
	int32_t x496 = INT32_MIN;
	static volatile int32_t t123 = 109;

    t123 = ((x493==x494)!=(x495^x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x497 = 2237U;
	uint8_t x498 = 3U;
	int32_t x499 = -1;
	int16_t x500 = INT16_MAX;

    t124 = ((x497==x498)!=(x499^x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x502 = 51460208752543LLU;
	uint16_t x503 = UINT16_MAX;
	int64_t x504 = -1LL;
	int32_t t125 = 18;

    t125 = ((x501==x502)!=(x503^x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	int16_t x506 = -1;
	int8_t x507 = -1;
	int32_t x508 = INT32_MAX;
	volatile int32_t t126 = -38022406;

    t126 = ((x505==x506)!=(x507^x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x509 = UINT16_MAX;
	uint16_t x511 = 14541U;
	static volatile int8_t x512 = INT8_MIN;
	volatile int32_t t127 = -16065;

    t127 = ((x509==x510)!=(x511^x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x513 = INT16_MIN;
	volatile int32_t x516 = INT32_MAX;
	int32_t t128 = -25021;

    t128 = ((x513==x514)!=(x515^x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x518 = INT32_MIN;
	int16_t x519 = -1;
	int8_t x520 = -1;
	int32_t t129 = 51668387;

    t129 = ((x517==x518)!=(x519^x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = -68269568;
	volatile int8_t x523 = -63;
	volatile int32_t t130 = -380;

    t130 = ((x521==x522)!=(x523^x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = INT64_MAX;
	uint32_t x526 = 242992U;
	volatile uint8_t x527 = 69U;
	int8_t x528 = -1;
	volatile int32_t t131 = 53607462;

    t131 = ((x525==x526)!=(x527^x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x529 = 6LLU;
	static int64_t x530 = INT64_MIN;
	int64_t x531 = -1LL;
	uint64_t x532 = UINT64_MAX;
	int32_t t132 = -19324527;

    t132 = ((x529==x530)!=(x531^x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	uint8_t x534 = UINT8_MAX;
	int8_t x535 = -23;
	volatile int64_t x536 = -1LL;
	int32_t t133 = -29;

    t133 = ((x533==x534)!=(x535^x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int64_t x538 = INT64_MIN;
	int8_t x539 = -6;
	uint64_t x540 = UINT64_MAX;
	volatile int32_t t134 = 6327247;

    t134 = ((x537==x538)!=(x539^x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -1;
	int8_t x543 = INT8_MIN;
	int32_t x544 = -1;
	int32_t t135 = -12631;

    t135 = ((x541==x542)!=(x543^x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MAX;
	int32_t x547 = 19975016;
	int8_t x548 = INT8_MIN;
	int32_t t136 = -23879341;

    t136 = ((x545==x546)!=(x547^x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x549 = INT32_MIN;
	uint16_t x550 = UINT16_MAX;
	int8_t x552 = INT8_MIN;
	int32_t t137 = 32745;

    t137 = ((x549==x550)!=(x551^x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = -1;
	uint16_t x554 = UINT16_MAX;
	int8_t x555 = -9;
	int16_t x556 = -1;
	int32_t t138 = 24855176;

    t138 = ((x553==x554)!=(x555^x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x557 = INT64_MIN;
	int8_t x558 = 36;
	int64_t x559 = INT64_MIN;
	int8_t x560 = -1;
	volatile int32_t t139 = -4;

    t139 = ((x557==x558)!=(x559^x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x561 = -1LL;
	int64_t x563 = INT64_MIN;
	int16_t x564 = 3;
	static int32_t t140 = 157;

    t140 = ((x561==x562)!=(x563^x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 153U;
	volatile uint64_t x566 = UINT64_MAX;
	int16_t x567 = 3667;
	uint8_t x568 = 1U;

    t141 = ((x565==x566)!=(x567^x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = 1;
	int32_t x570 = INT32_MAX;
	uint8_t x571 = 5U;
	static uint64_t x572 = 380495LLU;
	int32_t t142 = 6099;

    t142 = ((x569==x570)!=(x571^x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x573 = 2U;
	int8_t x574 = INT8_MAX;

    t143 = ((x573==x574)!=(x575^x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x579 = 54;
	static volatile uint64_t x580 = 1697LLU;
	volatile int32_t t144 = -10;

    t144 = ((x577==x578)!=(x579^x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x581 = UINT32_MAX;
	int64_t x582 = INT64_MIN;
	int32_t x583 = INT32_MIN;
	uint8_t x584 = 1U;
	volatile int32_t t145 = -34;

    t145 = ((x581==x582)!=(x583^x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x585 = -40;
	static int16_t x586 = -1;
	volatile uint16_t x587 = UINT16_MAX;
	static int32_t t146 = 55087;

    t146 = ((x585==x586)!=(x587^x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x589 = INT64_MIN;
	int32_t x590 = -1;
	uint8_t x592 = 6U;
	int32_t t147 = -805;

    t147 = ((x589==x590)!=(x591^x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x593 = 8610U;
	uint8_t x594 = UINT8_MAX;
	uint64_t x595 = 130924226145729626LLU;
	uint64_t x596 = 4039821LLU;
	volatile int32_t t148 = 52;

    t148 = ((x593==x594)!=(x595^x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x598 = INT64_MIN;
	int8_t x599 = INT8_MIN;
	int16_t x600 = -1;
	volatile int32_t t149 = 7;

    t149 = ((x597==x598)!=(x599^x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MAX;
	int16_t x602 = 165;
	uint16_t x603 = 658U;
	int16_t x604 = -923;
	int32_t t150 = 389;

    t150 = ((x601==x602)!=(x603^x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MIN;
	int64_t x606 = INT64_MAX;
	volatile uint32_t x607 = 498465784U;
	int32_t t151 = -1;

    t151 = ((x605==x606)!=(x607^x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -1;
	volatile int16_t x610 = -1;
	int16_t x611 = INT16_MIN;
	uint8_t x612 = 6U;
	volatile int32_t t152 = -30;

    t152 = ((x609==x610)!=(x611^x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	int64_t x614 = 1770378192649686LL;
	uint16_t x615 = 12U;
	static int32_t t153 = 16;

    t153 = ((x613==x614)!=(x615^x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x618 = UINT8_MAX;
	int32_t x619 = INT32_MIN;
	int32_t t154 = 1;

    t154 = ((x617==x618)!=(x619^x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x621 = 6U;
	int32_t x622 = 68;
	int32_t x623 = INT32_MIN;
	int64_t x624 = INT64_MIN;
	int32_t t155 = 3;

    t155 = ((x621==x622)!=(x623^x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -1;
	uint64_t x626 = 4079558LLU;
	volatile int16_t x627 = -3350;
	volatile int16_t x628 = INT16_MAX;

    t156 = ((x625==x626)!=(x627^x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x629 = UINT8_MAX;
	int32_t x632 = INT32_MIN;
	volatile int32_t t157 = -25837;

    t157 = ((x629==x630)!=(x631^x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x633 = -45;
	static uint16_t x634 = UINT16_MAX;
	int16_t x635 = 120;
	int16_t x636 = -1;
	static int32_t t158 = -1;

    t158 = ((x633==x634)!=(x635^x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 40U;
	static uint16_t x638 = UINT16_MAX;
	static uint64_t x639 = 31147253991917LLU;
	int64_t x640 = INT64_MAX;

    t159 = ((x637==x638)!=(x639^x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x641 = INT32_MIN;
	uint64_t x642 = 7616436840336LLU;
	uint64_t x643 = 2077843541395LLU;
	int32_t x644 = INT32_MIN;
	volatile int32_t t160 = -658856;

    t160 = ((x641==x642)!=(x643^x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x646 = -1;
	static int16_t x647 = -1091;
	int32_t t161 = 750986728;

    t161 = ((x645==x646)!=(x647^x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x649 = 503825425860LLU;
	uint8_t x650 = 15U;
	int32_t x651 = INT32_MIN;
	int16_t x652 = 3161;
	int32_t t162 = -228709133;

    t162 = ((x649==x650)!=(x651^x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x653 = INT8_MIN;
	uint8_t x654 = 1U;
	int64_t x656 = 14022000LL;
	int32_t t163 = 8;

    t163 = ((x653==x654)!=(x655^x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x657 = INT32_MAX;
	uint64_t x658 = UINT64_MAX;
	volatile uint32_t x659 = UINT32_MAX;
	volatile uint16_t x660 = UINT16_MAX;
	int32_t t164 = -15841821;

    t164 = ((x657==x658)!=(x659^x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x661 = -1;
	static uint16_t x662 = 80U;
	int64_t x663 = 5458LL;
	int8_t x664 = INT8_MAX;
	static int32_t t165 = -537;

    t165 = ((x661==x662)!=(x663^x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = -1;
	volatile int16_t x666 = INT16_MAX;
	static int16_t x667 = INT16_MAX;
	volatile uint32_t x668 = 5340U;

    t166 = ((x665==x666)!=(x667^x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x669 = -1;
	int8_t x670 = INT8_MAX;
	uint32_t x671 = 8758943U;
	int32_t t167 = 20915;

    t167 = ((x669==x670)!=(x671^x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x673 = INT16_MIN;
	int32_t x675 = INT32_MIN;
	int32_t t168 = 112706;

    t168 = ((x673==x674)!=(x675^x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = 331727U;
	int8_t x680 = INT8_MIN;
	static volatile int32_t t169 = -15596788;

    t169 = ((x677==x678)!=(x679^x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x681 = INT32_MIN;
	uint32_t x682 = 347U;
	uint32_t x683 = 59U;
	static int32_t x684 = INT32_MIN;
	static volatile int32_t t170 = 10129;

    t170 = ((x681==x682)!=(x683^x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = 129268;
	int32_t x686 = INT32_MAX;
	int32_t x687 = -1;
	uint16_t x688 = UINT16_MAX;
	static int32_t t171 = -468;

    t171 = ((x685==x686)!=(x687^x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x691 = INT32_MIN;
	volatile int16_t x692 = 44;
	int32_t t172 = -7960521;

    t172 = ((x689==x690)!=(x691^x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint16_t x693 = UINT16_MAX;
	int16_t x694 = -1;
	uint32_t x695 = UINT32_MAX;
	int16_t x696 = INT16_MIN;
	volatile int32_t t173 = 1033136731;

    t173 = ((x693==x694)!=(x695^x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x698 = -1;
	int32_t x699 = -13892754;
	int32_t t174 = -24587;

    t174 = ((x697==x698)!=(x699^x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x703 = -6904297LL;
	static volatile int32_t t175 = -36808609;

    t175 = ((x701==x702)!=(x703^x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x705 = 136851537742471952LLU;
	volatile int64_t x706 = -30LL;
	int32_t x707 = INT32_MIN;
	static int32_t x708 = INT32_MIN;
	int32_t t176 = 5284;

    t176 = ((x705==x706)!=(x707^x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MAX;
	int32_t x710 = INT32_MAX;
	volatile int32_t x711 = INT32_MAX;
	int64_t x712 = INT64_MAX;
	volatile int32_t t177 = -7767755;

    t177 = ((x709==x710)!=(x711^x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x713 = UINT16_MAX;
	uint64_t x715 = 2757310LLU;
	int16_t x716 = INT16_MAX;
	static int32_t t178 = 502060527;

    t178 = ((x713==x714)!=(x715^x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x718 = 0;
	int64_t x719 = INT64_MIN;
	uint32_t x720 = 610877209U;
	int32_t t179 = 140;

    t179 = ((x717==x718)!=(x719^x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x721 = 0;
	int8_t x722 = 0;
	volatile uint32_t x723 = 31505U;
	int16_t x724 = -1;
	int32_t t180 = -14004;

    t180 = ((x721==x722)!=(x723^x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = UINT8_MAX;
	static int8_t x726 = 45;
	uint16_t x727 = 4153U;
	int16_t x728 = -1;
	static int32_t t181 = 199404215;

    t181 = ((x725==x726)!=(x727^x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x729 = 19427U;
	uint8_t x730 = UINT8_MAX;
	uint8_t x731 = UINT8_MAX;
	int32_t t182 = -85817590;

    t182 = ((x729==x730)!=(x731^x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x735 = 14U;
	uint8_t x736 = 122U;
	int32_t t183 = -1;

    t183 = ((x733==x734)!=(x735^x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MIN;
	uint32_t x738 = 886634U;
	volatile int16_t x739 = INT16_MIN;
	int32_t x740 = INT32_MIN;

    t184 = ((x737==x738)!=(x739^x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x741 = 1355126293082LL;
	static volatile int16_t x742 = INT16_MAX;
	volatile int32_t t185 = 166485451;

    t185 = ((x741==x742)!=(x743^x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = INT16_MAX;
	int8_t x746 = INT8_MAX;
	static volatile int16_t x747 = INT16_MAX;
	uint16_t x748 = 1U;
	int32_t t186 = -16093;

    t186 = ((x745==x746)!=(x747^x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = INT16_MIN;
	int32_t x750 = INT32_MAX;
	uint16_t x751 = 36U;
	int32_t x752 = INT32_MIN;
	int32_t t187 = 5;

    t187 = ((x749==x750)!=(x751^x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x753 = INT8_MIN;
	uint64_t x754 = 2707756969108LLU;
	uint8_t x756 = 50U;
	static volatile int32_t t188 = -3589462;

    t188 = ((x753==x754)!=(x755^x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x759 = INT64_MIN;
	uint32_t x760 = 129U;

    t189 = ((x757==x758)!=(x759^x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = UINT64_MAX;
	uint8_t x764 = 76U;

    t190 = ((x761==x762)!=(x763^x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = 1993254LL;
	static uint32_t x766 = UINT32_MAX;
	uint64_t x767 = UINT64_MAX;
	int32_t t191 = -3377140;

    t191 = ((x765==x766)!=(x767^x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x769 = INT16_MIN;
	int64_t x770 = 186380774985240206LL;
	int32_t x771 = -1;
	static uint8_t x772 = 68U;

    t192 = ((x769==x770)!=(x771^x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x774 = UINT64_MAX;
	int32_t x775 = -2814;
	int32_t x776 = -1;
	static volatile int32_t t193 = 0;

    t193 = ((x773==x774)!=(x775^x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x777 = 3U;
	static volatile uint16_t x778 = 677U;
	int8_t x779 = INT8_MIN;
	volatile int8_t x780 = -1;

    t194 = ((x777==x778)!=(x779^x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x781 = -99;
	volatile int32_t x782 = 5;
	int32_t x783 = -413517;
	uint32_t x784 = 2797U;
	volatile int32_t t195 = -212;

    t195 = ((x781==x782)!=(x783^x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x785 = 0U;
	int8_t x786 = INT8_MIN;
	int32_t x788 = 2661;
	static volatile int32_t t196 = -63176138;

    t196 = ((x785==x786)!=(x787^x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	static uint16_t x790 = 76U;
	static volatile int64_t x791 = -488073390879LL;
	int64_t x792 = INT64_MIN;
	static int32_t t197 = 866435624;

    t197 = ((x789==x790)!=(x791^x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x794 = INT8_MIN;
	static volatile int32_t x795 = INT32_MIN;
	static uint16_t x796 = UINT16_MAX;
	int32_t t198 = 1;

    t198 = ((x793==x794)!=(x795^x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x797 = 1U;
	volatile int16_t x798 = 4;
	int64_t x799 = 11LL;
	uint16_t x800 = UINT16_MAX;
	static volatile int32_t t199 = 13420;

    t199 = ((x797==x798)!=(x799^x800));

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

