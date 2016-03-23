
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
volatile int16_t x7 = -1;
volatile uint32_t x9 = 64413357U;
volatile int8_t x16 = -48;
static uint16_t x18 = UINT16_MAX;
int32_t x20 = 2523;
volatile int64_t t4 = -1579LL;
int8_t x28 = INT8_MAX;
int64_t x29 = INT64_MIN;
int64_t x31 = INT64_MAX;
static int32_t x45 = INT32_MIN;
static int64_t x46 = INT64_MIN;
static int8_t x48 = 52;
int32_t x49 = 0;
int16_t x50 = 75;
int16_t x54 = INT16_MIN;
volatile uint32_t x56 = UINT32_MAX;
static uint16_t x59 = 25U;
uint64_t x62 = UINT64_MAX;
volatile int32_t t15 = 55;
int16_t x65 = INT16_MIN;
uint64_t x66 = 3174595419516878LLU;
static int32_t x75 = 7;
int8_t x78 = INT8_MIN;
uint64_t x87 = UINT64_MAX;
uint32_t x88 = UINT32_MAX;
int16_t x100 = 89;
uint64_t t25 = 452468591309377LLU;
static volatile int64_t x108 = INT64_MIN;
static uint32_t t27 = 610U;
int8_t x114 = -20;
volatile int32_t x117 = INT32_MAX;
int64_t x125 = 12781959979356LL;
uint8_t x130 = 1U;
volatile int16_t x131 = INT16_MIN;
int8_t x135 = -2;
int32_t x167 = -1;
int32_t x174 = INT32_MAX;
int64_t t43 = 275737836385300LL;
static int8_t x178 = 0;
int32_t x189 = INT32_MAX;
volatile uint64_t t47 = 2789LLU;
int32_t x198 = INT32_MIN;
volatile int16_t x199 = -1;
static uint64_t x206 = UINT64_MAX;
int16_t x212 = 0;
static uint32_t t53 = 1436853U;
uint8_t x217 = 4U;
static int32_t t54 = 16347;
int8_t x224 = 5;
volatile uint32_t t55 = 109U;
int32_t x235 = 11725753;
int32_t x245 = -1;
static int8_t x250 = 27;
static uint16_t x257 = 3U;
int16_t x262 = INT16_MAX;
static volatile uint32_t t65 = 151U;
int8_t x270 = INT8_MAX;
int64_t x272 = 9LL;
int64_t x276 = INT64_MIN;
int64_t t68 = -127LL;
volatile int32_t x278 = INT32_MIN;
uint32_t x279 = 1174U;
volatile int64_t x288 = INT64_MIN;
static int32_t x298 = INT32_MIN;
static int64_t x302 = -855788301LL;
volatile int64_t t75 = 106973554LL;
int32_t t76 = 598069857;
int8_t x321 = -1;
int8_t x323 = -19;
int32_t t80 = -13802;
int64_t t81 = -52LL;
int64_t x334 = -1LL;
int64_t x335 = -26835LL;
static volatile uint64_t t84 = 36940850535531610LLU;
int64_t x342 = 709LL;
int8_t x343 = INT8_MIN;
volatile int32_t t85 = 209180;
int32_t x346 = INT32_MAX;
static uint32_t x353 = 1U;
uint16_t x354 = 29666U;
int32_t x364 = INT32_MIN;
volatile uint64_t t90 = 3661288986373146250LLU;
volatile int64_t x369 = -2485066058514158300LL;
uint8_t x370 = UINT8_MAX;
uint32_t x383 = 20U;
uint8_t x388 = 3U;
uint32_t x393 = 175399891U;
volatile uint64_t x400 = UINT64_MAX;
int16_t x401 = -830;
int16_t x402 = INT16_MIN;
volatile uint8_t x403 = UINT8_MAX;
int64_t x404 = 3922622981615981781LL;
int32_t t101 = -200687418;
int64_t x410 = INT64_MIN;
volatile int8_t x426 = INT8_MAX;
int8_t x435 = INT8_MIN;
volatile uint16_t x436 = 1U;
int32_t x439 = INT32_MIN;
uint8_t x440 = UINT8_MAX;
static volatile int32_t x441 = INT32_MIN;
uint8_t x443 = 54U;
int32_t t110 = 1;
static volatile uint8_t x451 = 9U;
int16_t x458 = INT16_MAX;
int64_t x464 = -1LL;
int8_t x469 = -1;
uint16_t x471 = 15026U;
int8_t x480 = -1;
static volatile uint16_t x483 = UINT16_MAX;
volatile int32_t t120 = 1952;
int16_t x486 = INT16_MIN;
uint32_t x489 = 114991U;
static int8_t x491 = INT8_MAX;
static int32_t x492 = INT32_MIN;
int16_t x505 = INT16_MAX;
volatile uint8_t x515 = 19U;
uint64_t x523 = UINT64_MAX;
static uint64_t t130 = 31552392LLU;
uint64_t x528 = 11159LLU;
volatile int8_t x532 = 19;
static volatile int64_t t132 = 3349129084607735LL;
uint8_t x533 = 62U;
int32_t x534 = INT32_MIN;
volatile uint8_t x536 = 1U;
uint16_t x541 = 29U;
volatile int32_t t135 = -5126550;
int16_t x552 = INT16_MIN;
static int16_t x555 = INT16_MAX;
static int32_t t138 = -309;
static volatile int32_t x557 = -26526169;
int8_t x559 = -1;
uint32_t x568 = 0U;
int64_t t141 = -255LL;
volatile int64_t x572 = 1310366706LL;
static uint16_t x580 = UINT16_MAX;
int32_t t145 = 69338474;
static int8_t x590 = 2;
int64_t x593 = INT64_MAX;
int16_t x596 = INT16_MAX;
uint32_t x601 = UINT32_MAX;
volatile uint8_t x603 = 0U;
int8_t x607 = INT8_MIN;
int32_t x608 = INT32_MIN;
int16_t x609 = INT16_MIN;
volatile int64_t x613 = 21085LL;
int16_t x620 = INT16_MIN;
static volatile int8_t x622 = 0;
int64_t x625 = -1LL;
int8_t x631 = 2;
int64_t x633 = -1LL;
int16_t x640 = 0;
volatile int64_t x643 = INT64_MIN;
int64_t t160 = -40745121896205150LL;
volatile int32_t t162 = -64507561;
uint32_t x655 = UINT32_MAX;
int32_t x657 = -1;
uint64_t x659 = UINT64_MAX;
uint8_t x664 = 2U;
int32_t x668 = -15177;
uint8_t x670 = 6U;
int32_t x672 = INT32_MIN;
static int64_t x677 = INT64_MIN;
int32_t x680 = -1299;
int64_t t169 = 15838632295564119LL;
int32_t x683 = INT32_MAX;
int64_t x688 = INT64_MIN;
uint16_t x690 = 13556U;
volatile uint32_t x693 = 84173570U;
int16_t x694 = INT16_MIN;
int16_t x710 = INT16_MIN;
uint16_t x711 = 2U;
int32_t x713 = 4261211;
static int32_t t179 = -5029;
static int16_t x729 = INT16_MAX;
volatile uint32_t x731 = UINT32_MAX;
static volatile int32_t x735 = -5271546;
volatile int32_t t183 = 347;
static int8_t x742 = INT8_MAX;
uint16_t x747 = 1U;
int32_t t186 = 9386019;
static int32_t t187 = 616642;
int64_t x754 = INT64_MIN;
uint16_t x756 = UINT16_MAX;
volatile uint64_t t190 = 193396307499LLU;
int64_t x766 = -1LL;
uint64_t x780 = 13084125229043LLU;
uint64_t x782 = UINT64_MAX;
static volatile int32_t t196 = -7556;
uint32_t x791 = UINT32_MAX;
uint8_t x792 = 0U;
static int64_t x794 = INT64_MIN;
int64_t x797 = 1LL;
int8_t x800 = -1;


void f0(void) {
    	static int32_t x1 = INT32_MIN;
	volatile uint8_t x2 = 4U;
	volatile int32_t x3 = -4828753;
	int64_t x4 = INT64_MIN;
	int64_t t0 = -543117LL;

    t0 = ((x1==x2)&(x3^x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x6 = 1026LLU;
	volatile uint8_t x8 = 29U;
	volatile int32_t t1 = 777;

    t1 = ((x5==x6)&(x7^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MAX;
	int8_t x11 = -1;
	static int64_t x12 = -1LL;
	int64_t t2 = -191178LL;

    t2 = ((x9==x10)&(x11^x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = INT16_MIN;
	uint8_t x14 = UINT8_MAX;
	volatile int8_t x15 = INT8_MIN;
	static volatile int32_t t3 = -104;

    t3 = ((x13==x14)&(x15^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = -1;
	int64_t x19 = INT64_MIN;

    t4 = ((x17==x18)&(x19^x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = UINT32_MAX;
	static uint32_t x22 = 2060457180U;
	static uint8_t x23 = 1U;
	int64_t x24 = INT64_MAX;
	int64_t t5 = 308540LL;

    t5 = ((x21==x22)&(x23^x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = 7;
	uint16_t x26 = UINT16_MAX;
	uint64_t x27 = 65386LLU;
	static uint64_t t6 = 2017753403959946615LLU;

    t6 = ((x25==x26)&(x27^x28));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x30 = INT64_MIN;
	static int8_t x32 = 7;
	volatile int64_t t7 = -4020593363782066879LL;

    t7 = ((x29==x30)&(x31^x32));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = -1LL;
	volatile uint64_t x34 = UINT64_MAX;
	uint16_t x35 = 623U;
	int16_t x36 = 365;
	int32_t t8 = -1;

    t8 = ((x33==x34)&(x35^x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	volatile int16_t x38 = INT16_MIN;
	int32_t x39 = INT32_MIN;
	static int32_t x40 = 3702440;
	volatile int32_t t9 = 182;

    t9 = ((x37==x38)&(x39^x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	int16_t x42 = 17;
	volatile int8_t x43 = INT8_MIN;
	volatile int8_t x44 = INT8_MIN;
	static int32_t t10 = -167172467;

    t10 = ((x41==x42)&(x43^x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x47 = 99208U;
	uint32_t t11 = 522634U;

    t11 = ((x45==x46)&(x47^x48));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x51 = UINT32_MAX;
	int64_t x52 = INT64_MIN;
	volatile int64_t t12 = -1LL;

    t12 = ((x49==x50)&(x51^x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -2;
	int64_t x55 = INT64_MIN;
	volatile int64_t t13 = -205660LL;

    t13 = ((x53==x54)&(x55^x56));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	uint8_t x58 = 7U;
	static int16_t x60 = INT16_MIN;
	volatile int32_t t14 = -1415;

    t14 = ((x57==x58)&(x59^x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 1U;
	static uint16_t x63 = 1U;
	int8_t x64 = INT8_MAX;

    t15 = ((x61==x62)&(x63^x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x67 = -7835;
	static int32_t x68 = 0;
	static int32_t t16 = 16676321;

    t16 = ((x65==x66)&(x67^x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = INT64_MIN;
	static int32_t x70 = 29;
	int16_t x71 = INT16_MIN;
	static uint32_t x72 = 22170673U;
	uint32_t t17 = 1U;

    t17 = ((x69==x70)&(x71^x72));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = UINT32_MAX;
	int16_t x74 = INT16_MAX;
	int64_t x76 = -989109695678134668LL;
	volatile int64_t t18 = 470792053452LL;

    t18 = ((x73==x74)&(x75^x76));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x77 = 1;
	uint64_t x79 = 775926306118670LLU;
	static volatile int16_t x80 = 1;
	volatile uint64_t t19 = 4064LLU;

    t19 = ((x77==x78)&(x79^x80));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1;
	int8_t x82 = INT8_MIN;
	int32_t x83 = -1001;
	uint64_t x84 = UINT64_MAX;
	static volatile uint64_t t20 = 503902893179395292LLU;

    t20 = ((x81==x82)&(x83^x84));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MAX;
	static uint64_t x86 = 99139537850LLU;
	volatile uint64_t t21 = 0LLU;

    t21 = ((x85==x86)&(x87^x88));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = INT64_MIN;
	volatile int16_t x90 = INT16_MIN;
	static int64_t x91 = -1LL;
	uint64_t x92 = 82741814471LLU;
	uint64_t t22 = 199689111LLU;

    t22 = ((x89==x90)&(x91^x92));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = INT16_MIN;
	volatile int64_t x94 = INT64_MAX;
	uint16_t x95 = UINT16_MAX;
	int32_t x96 = 836741;
	int32_t t23 = 53725;

    t23 = ((x93==x94)&(x95^x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 448U;
	int64_t x98 = INT64_MIN;
	volatile int64_t x99 = INT64_MAX;
	volatile int64_t t24 = 1247980228LL;

    t24 = ((x97==x98)&(x99^x100));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x101 = -34;
	volatile int64_t x102 = INT64_MAX;
	int8_t x103 = INT8_MAX;
	uint64_t x104 = UINT64_MAX;

    t25 = ((x101==x102)&(x103^x104));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MAX;
	uint64_t x106 = 3117777319798655LLU;
	int16_t x107 = -172;
	int64_t t26 = 2918145LL;

    t26 = ((x105==x106)&(x107^x108));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = 42051429633LL;
	static int8_t x110 = INT8_MIN;
	volatile uint8_t x111 = 1U;
	static volatile uint32_t x112 = 9U;

    t27 = ((x109==x110)&(x111^x112));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 3U;
	int16_t x115 = 1;
	uint32_t x116 = 25815U;
	volatile uint32_t t28 = 1910811194U;

    t28 = ((x113==x114)&(x115^x116));

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x118 = INT32_MIN;
	uint32_t x119 = 10373625U;
	int16_t x120 = INT16_MIN;
	volatile uint32_t t29 = 15U;

    t29 = ((x117==x118)&(x119^x120));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -168069559;
	uint8_t x122 = UINT8_MAX;
	int32_t x123 = INT32_MIN;
	static int32_t x124 = -1;
	volatile int32_t t30 = -11178443;

    t30 = ((x121==x122)&(x123^x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x126 = 29U;
	uint8_t x127 = 2U;
	uint64_t x128 = 4964LLU;
	volatile uint64_t t31 = 7LLU;

    t31 = ((x125==x126)&(x127^x128));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint32_t x129 = 3977468U;
	static volatile uint8_t x132 = 12U;
	static int32_t t32 = -1;

    t32 = ((x129==x130)&(x131^x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MAX;
	volatile uint8_t x134 = 2U;
	uint64_t x136 = 1147311666722131LLU;
	uint64_t t33 = 3342109LLU;

    t33 = ((x133==x134)&(x135^x136));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x137 = 557304U;
	volatile int32_t x138 = INT32_MAX;
	static int64_t x139 = INT64_MIN;
	static int32_t x140 = INT32_MIN;
	volatile int64_t t34 = 34809771535065299LL;

    t34 = ((x137==x138)&(x139^x140));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x141 = INT64_MIN;
	int32_t x142 = INT32_MIN;
	volatile int16_t x143 = -1;
	static uint64_t x144 = UINT64_MAX;
	volatile uint64_t t35 = 4LLU;

    t35 = ((x141==x142)&(x143^x144));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = -14;
	int8_t x146 = -29;
	int64_t x147 = INT64_MIN;
	uint64_t x148 = UINT64_MAX;
	volatile uint64_t t36 = 23273LLU;

    t36 = ((x145==x146)&(x147^x148));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MAX;
	int16_t x150 = INT16_MIN;
	volatile int16_t x151 = INT16_MAX;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = 53380107;

    t37 = ((x149==x150)&(x151^x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -26;
	int32_t x154 = INT32_MIN;
	static int32_t x155 = 15;
	int64_t x156 = -1LL;
	int64_t t38 = 449479732LL;

    t38 = ((x153==x154)&(x155^x156));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MIN;
	uint8_t x158 = 82U;
	int64_t x159 = -1LL;
	int8_t x160 = INT8_MIN;
	volatile int64_t t39 = -458699648066LL;

    t39 = ((x157==x158)&(x159^x160));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = 2;
	static uint32_t x162 = 121U;
	volatile uint16_t x163 = 1010U;
	static int32_t x164 = INT32_MAX;
	static int32_t t40 = 5726138;

    t40 = ((x161==x162)&(x163^x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 588901945344LLU;
	int8_t x166 = INT8_MIN;
	volatile uint32_t x168 = 139U;
	uint32_t t41 = 422056U;

    t41 = ((x165==x166)&(x167^x168));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 12438U;
	int32_t x170 = INT32_MIN;
	static uint16_t x171 = 124U;
	uint32_t x172 = UINT32_MAX;
	uint32_t t42 = 25537U;

    t42 = ((x169==x170)&(x171^x172));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x173 = UINT16_MAX;
	static int8_t x175 = INT8_MIN;
	static int64_t x176 = INT64_MIN;

    t43 = ((x173==x174)&(x175^x176));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint64_t x177 = 8725494487034LLU;
	int16_t x179 = INT16_MAX;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t44 = 14682U;

    t44 = ((x177==x178)&(x179^x180));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MAX;
	int64_t x182 = -7199LL;
	volatile int8_t x183 = 0;
	uint64_t x184 = UINT64_MAX;
	volatile uint64_t t45 = 33480912399LLU;

    t45 = ((x181==x182)&(x183^x184));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x185 = -16122456LL;
	int64_t x186 = 6214357743191LL;
	int32_t x187 = 1;
	int16_t x188 = 2034;
	volatile int32_t t46 = 1525567;

    t46 = ((x185==x186)&(x187^x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x190 = 136659577237LL;
	uint64_t x191 = UINT64_MAX;
	uint8_t x192 = UINT8_MAX;

    t47 = ((x189==x190)&(x191^x192));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x193 = 0U;
	volatile int64_t x194 = INT64_MIN;
	int8_t x195 = -6;
	static int8_t x196 = 1;
	volatile int32_t t48 = 11960227;

    t48 = ((x193==x194)&(x195^x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	int8_t x200 = INT8_MAX;
	volatile int32_t t49 = 11511;

    t49 = ((x197==x198)&(x199^x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	int32_t x202 = -1;
	int8_t x203 = -1;
	volatile uint64_t x204 = 164665793008235LLU;
	volatile uint64_t t50 = 783319431755359001LLU;

    t50 = ((x201==x202)&(x203^x204));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x205 = 307952378446LLU;
	int8_t x207 = 8;
	uint32_t x208 = UINT32_MAX;
	uint32_t t51 = 188U;

    t51 = ((x205==x206)&(x207^x208));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = 133817729919LLU;
	volatile int16_t x210 = 25;
	uint16_t x211 = 24004U;
	volatile int32_t t52 = -6442517;

    t52 = ((x209==x210)&(x211^x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x213 = -260106906;
	int8_t x214 = INT8_MIN;
	uint32_t x215 = 967616U;
	int32_t x216 = INT32_MIN;

    t53 = ((x213==x214)&(x215^x216));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x218 = INT32_MAX;
	volatile int8_t x219 = 0;
	volatile int16_t x220 = INT16_MAX;

    t54 = ((x217==x218)&(x219^x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	static int64_t x222 = -1LL;
	volatile uint32_t x223 = UINT32_MAX;

    t55 = ((x221==x222)&(x223^x224));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MAX;
	volatile uint16_t x226 = 14348U;
	static int8_t x227 = 2;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = -724;

    t56 = ((x225==x226)&(x227^x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x229 = UINT8_MAX;
	uint8_t x230 = 30U;
	static int16_t x231 = -57;
	uint64_t x232 = UINT64_MAX;
	uint64_t t57 = 12377730LLU;

    t57 = ((x229==x230)&(x231^x232));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x233 = -1;
	uint32_t x234 = 0U;
	static int64_t x236 = -1188636668LL;
	volatile int64_t t58 = -680285071353081596LL;

    t58 = ((x233==x234)&(x235^x236));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x237 = -4;
	static int32_t x238 = 10446523;
	volatile int16_t x239 = INT16_MIN;
	int8_t x240 = INT8_MIN;
	volatile int32_t t59 = -120589;

    t59 = ((x237==x238)&(x239^x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x241 = INT8_MAX;
	int8_t x242 = INT8_MAX;
	uint32_t x243 = 123033U;
	static int8_t x244 = INT8_MIN;
	volatile uint32_t t60 = 1116300U;

    t60 = ((x241==x242)&(x243^x244));

    if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x246 = -1LL;
	uint64_t x247 = 973970371400116625LLU;
	static uint16_t x248 = 7542U;
	volatile uint64_t t61 = 74632397733LLU;

    t61 = ((x245==x246)&(x247^x248));

    if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = -7172962893LL;
	uint16_t x251 = UINT16_MAX;
	int16_t x252 = INT16_MIN;
	volatile int32_t t62 = 2560244;

    t62 = ((x249==x250)&(x251^x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 26313LLU;
	int32_t x254 = -1;
	volatile int8_t x255 = 9;
	int16_t x256 = 1922;
	static volatile int32_t t63 = -2288;

    t63 = ((x253==x254)&(x255^x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x258 = -6801466;
	uint16_t x259 = 52U;
	static uint16_t x260 = 1081U;
	static int32_t t64 = -29;

    t64 = ((x257==x258)&(x259^x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = -2699;
	static uint32_t x263 = UINT32_MAX;
	volatile int8_t x264 = INT8_MAX;

    t65 = ((x261==x262)&(x263^x264));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x265 = 77U;
	int64_t x266 = -1LL;
	int16_t x267 = INT16_MIN;
	uint64_t x268 = 6045LLU;
	uint64_t t66 = 13313563705958LLU;

    t66 = ((x265==x266)&(x267^x268));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MIN;
	int8_t x271 = INT8_MAX;
	int64_t t67 = 1068181195885418287LL;

    t67 = ((x269==x270)&(x271^x272));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -1LL;
	uint8_t x274 = 8U;
	int64_t x275 = INT64_MAX;

    t68 = ((x273==x274)&(x275^x276));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x277 = -1;
	uint64_t x280 = 49587719988LLU;
	static volatile uint64_t t69 = 1596483389833495LLU;

    t69 = ((x277==x278)&(x279^x280));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x281 = 3712U;
	int16_t x282 = INT16_MIN;
	int8_t x283 = INT8_MIN;
	static uint8_t x284 = 3U;
	volatile int32_t t70 = 29748;

    t70 = ((x281==x282)&(x283^x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MAX;
	uint8_t x286 = UINT8_MAX;
	volatile int8_t x287 = INT8_MIN;
	volatile int64_t t71 = -132288LL;

    t71 = ((x285==x286)&(x287^x288));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x289 = 1150352258U;
	volatile int8_t x290 = INT8_MIN;
	uint8_t x291 = UINT8_MAX;
	int64_t x292 = INT64_MAX;
	volatile int64_t t72 = -9144431916LL;

    t72 = ((x289==x290)&(x291^x292));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MAX;
	int64_t x294 = -1LL;
	int8_t x295 = INT8_MAX;
	int8_t x296 = INT8_MIN;
	volatile int32_t t73 = -179;

    t73 = ((x293==x294)&(x295^x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -3;
	static int16_t x299 = INT16_MAX;
	uint16_t x300 = 2235U;
	static int32_t t74 = -520620;

    t74 = ((x297==x298)&(x299^x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 31U;
	int64_t x303 = INT64_MAX;
	int64_t x304 = -993LL;

    t75 = ((x301==x302)&(x303^x304));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x305 = -5;
	uint64_t x306 = 58287LLU;
	volatile int8_t x307 = INT8_MAX;
	static volatile int8_t x308 = INT8_MAX;

    t76 = ((x305==x306)&(x307^x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = -3399154725LL;
	int32_t x310 = INT32_MIN;
	uint32_t x311 = 171U;
	uint64_t x312 = 897308727939813388LLU;
	uint64_t t77 = 2807LLU;

    t77 = ((x309==x310)&(x311^x312));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = -1;
	int64_t x314 = -137271150373LL;
	int32_t x315 = INT32_MIN;
	int16_t x316 = -1;
	int32_t t78 = 6;

    t78 = ((x313==x314)&(x315^x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = -1;
	int64_t x318 = -1683984435LL;
	int8_t x319 = -1;
	int16_t x320 = INT16_MIN;
	static int32_t t79 = -269583085;

    t79 = ((x317==x318)&(x319^x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x322 = -2226518358LL;
	int8_t x324 = -7;

    t80 = ((x321==x322)&(x323^x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x325 = 150674479LLU;
	static int8_t x326 = INT8_MIN;
	uint32_t x327 = 1047U;
	volatile int64_t x328 = INT64_MIN;

    t81 = ((x325==x326)&(x327^x328));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MIN;
	volatile int16_t x330 = INT16_MIN;
	uint8_t x331 = 6U;
	static volatile int64_t x332 = INT64_MAX;
	volatile int64_t t82 = -65614517LL;

    t82 = ((x329==x330)&(x331^x332));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = UINT32_MAX;
	static int32_t x336 = -1933565;
	static volatile int64_t t83 = -444240LL;

    t83 = ((x333==x334)&(x335^x336));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint64_t x337 = 63232238LLU;
	int32_t x338 = INT32_MAX;
	uint64_t x339 = 2043558431LLU;
	volatile uint64_t x340 = UINT64_MAX;

    t84 = ((x337==x338)&(x339^x340));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 41989102U;
	volatile uint16_t x344 = UINT16_MAX;

    t85 = ((x341==x342)&(x343^x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = -9;
	static int64_t x347 = INT64_MIN;
	int8_t x348 = -1;
	int64_t t86 = 1995040048005LL;

    t86 = ((x345==x346)&(x347^x348));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = 38452U;
	int32_t x350 = -31;
	int16_t x351 = INT16_MIN;
	static volatile int16_t x352 = 915;
	int32_t t87 = 1631;

    t87 = ((x349==x350)&(x351^x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x355 = UINT16_MAX;
	static volatile int64_t x356 = 28897732LL;
	int64_t t88 = -1032785313285290LL;

    t88 = ((x353==x354)&(x355^x356));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = 71U;
	int8_t x358 = -31;
	uint16_t x359 = 2315U;
	volatile uint64_t x360 = 6086LLU;
	uint64_t t89 = 609LLU;

    t89 = ((x357==x358)&(x359^x360));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MAX;
	int64_t x362 = 454258283278413937LL;
	uint64_t x363 = 6894454LLU;

    t90 = ((x361==x362)&(x363^x364));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = 125;
	uint16_t x366 = UINT16_MAX;
	static int16_t x367 = -1;
	static uint16_t x368 = 29469U;
	static volatile int32_t t91 = 4;

    t91 = ((x365==x366)&(x367^x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x371 = -16;
	int32_t x372 = -1;
	volatile int32_t t92 = -5857;

    t92 = ((x369==x370)&(x371^x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = 0;
	volatile int64_t x374 = INT64_MAX;
	int64_t x375 = -708867440933461796LL;
	static uint64_t x376 = UINT64_MAX;
	uint64_t t93 = 102357423LLU;

    t93 = ((x373==x374)&(x375^x376));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = UINT32_MAX;
	int32_t x378 = -23;
	static volatile int64_t x379 = INT64_MIN;
	static volatile int16_t x380 = INT16_MIN;
	int64_t t94 = -129549792137900LL;

    t94 = ((x377==x378)&(x379^x380));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x381 = -1;
	int16_t x382 = INT16_MIN;
	int16_t x384 = 526;
	uint32_t t95 = 502892686U;

    t95 = ((x381==x382)&(x383^x384));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = 24018U;
	volatile int32_t x386 = INT32_MAX;
	int32_t x387 = INT32_MIN;
	volatile int32_t t96 = 1740501;

    t96 = ((x385==x386)&(x387^x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 1U;
	uint32_t x390 = 1087U;
	volatile int8_t x391 = INT8_MIN;
	int8_t x392 = 0;
	int32_t t97 = -740;

    t97 = ((x389==x390)&(x391^x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x394 = UINT16_MAX;
	static int16_t x395 = -1;
	uint32_t x396 = 27U;
	static uint32_t t98 = 1U;

    t98 = ((x393==x394)&(x395^x396));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = -9;
	int64_t x398 = -1LL;
	int32_t x399 = -1;
	uint64_t t99 = 4146792252874910602LLU;

    t99 = ((x397==x398)&(x399^x400));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t t100 = 5495117894737909LL;

    t100 = ((x401==x402)&(x403^x404));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MAX;
	int64_t x406 = -1LL;
	static int8_t x407 = INT8_MIN;
	int8_t x408 = INT8_MAX;

    t101 = ((x405==x406)&(x407^x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = -3278389574LL;
	uint8_t x411 = 0U;
	uint32_t x412 = UINT32_MAX;
	volatile uint32_t t102 = 1U;

    t102 = ((x409==x410)&(x411^x412));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x413 = 15U;
	volatile uint64_t x414 = UINT64_MAX;
	int8_t x415 = INT8_MIN;
	uint32_t x416 = UINT32_MAX;
	volatile uint32_t t103 = 503600487U;

    t103 = ((x413==x414)&(x415^x416));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x417 = 34U;
	int16_t x418 = INT16_MIN;
	static int32_t x419 = INT32_MIN;
	static volatile uint32_t x420 = UINT32_MAX;
	uint32_t t104 = 726U;

    t104 = ((x417==x418)&(x419^x420));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = INT8_MIN;
	static volatile int32_t x422 = -47606359;
	uint32_t x423 = 0U;
	uint64_t x424 = UINT64_MAX;
	uint64_t t105 = 210760682421813LLU;

    t105 = ((x421==x422)&(x423^x424));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 413U;
	int8_t x427 = -54;
	int64_t x428 = -1LL;
	static int64_t t106 = 60674LL;

    t106 = ((x425==x426)&(x427^x428));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x429 = -3548375LL;
	volatile int64_t x430 = INT64_MAX;
	static uint32_t x431 = UINT32_MAX;
	static uint8_t x432 = 70U;
	volatile uint32_t t107 = 10656U;

    t107 = ((x429==x430)&(x431^x432));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = -1012706311105382125LL;
	uint32_t x434 = 947U;
	int32_t t108 = 708415;

    t108 = ((x433==x434)&(x435^x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MAX;
	volatile uint16_t x438 = 1U;
	volatile int32_t t109 = -1598911;

    t109 = ((x437==x438)&(x439^x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x442 = 18U;
	int16_t x444 = INT16_MAX;

    t110 = ((x441==x442)&(x443^x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 241781464U;
	uint8_t x446 = UINT8_MAX;
	int32_t x447 = INT32_MAX;
	int8_t x448 = 7;
	volatile int32_t t111 = -3868;

    t111 = ((x445==x446)&(x447^x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = 8678287943469986LL;
	static int64_t x450 = INT64_MIN;
	volatile uint16_t x452 = UINT16_MAX;
	static volatile int32_t t112 = 1772154;

    t112 = ((x449==x450)&(x451^x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MAX;
	uint8_t x454 = 1U;
	static volatile int64_t x455 = 18930627864081868LL;
	int8_t x456 = -2;
	volatile int64_t t113 = 33524831LL;

    t113 = ((x453==x454)&(x455^x456));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x457 = INT8_MIN;
	int32_t x459 = -2437;
	static int32_t x460 = INT32_MAX;
	volatile int32_t t114 = -13125;

    t114 = ((x457==x458)&(x459^x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x461 = UINT64_MAX;
	static uint64_t x462 = UINT64_MAX;
	int16_t x463 = -3;
	int64_t t115 = 1400210308LL;

    t115 = ((x461==x462)&(x463^x464));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = UINT8_MAX;
	uint16_t x466 = 3273U;
	int8_t x467 = INT8_MIN;
	uint32_t x468 = UINT32_MAX;
	uint32_t t116 = 7661724U;

    t116 = ((x465==x466)&(x467^x468));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x470 = INT8_MIN;
	int64_t x472 = INT64_MAX;
	volatile int64_t t117 = -2149LL;

    t117 = ((x469==x470)&(x471^x472));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = -1;
	int8_t x474 = -1;
	int64_t x475 = INT64_MIN;
	static uint32_t x476 = 99U;
	volatile int64_t t118 = -19930455LL;

    t118 = ((x473==x474)&(x475^x476));

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = 22242U;
	uint8_t x478 = 0U;
	static uint16_t x479 = 16374U;
	static int32_t t119 = 68715008;

    t119 = ((x477==x478)&(x479^x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = 1740;
	volatile int16_t x482 = INT16_MIN;
	int8_t x484 = INT8_MAX;

    t120 = ((x481==x482)&(x483^x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x485 = INT64_MIN;
	int64_t x487 = -1LL;
	int32_t x488 = INT32_MIN;
	int64_t t121 = -1814883444LL;

    t121 = ((x485==x486)&(x487^x488));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x490 = INT8_MIN;
	volatile int32_t t122 = 0;

    t122 = ((x489==x490)&(x491^x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = UINT32_MAX;
	int64_t x494 = INT64_MIN;
	static uint64_t x495 = 50320714047LLU;
	volatile uint16_t x496 = 485U;
	uint64_t t123 = 4576717250516140LLU;

    t123 = ((x493==x494)&(x495^x496));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x497 = 7054255084646525LL;
	int8_t x498 = INT8_MAX;
	static int8_t x499 = -5;
	int8_t x500 = INT8_MIN;
	int32_t t124 = 211;

    t124 = ((x497==x498)&(x499^x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x501 = UINT64_MAX;
	int64_t x502 = -1LL;
	static int64_t x503 = INT64_MIN;
	static int32_t x504 = INT32_MAX;
	static int64_t t125 = 2154206476496306167LL;

    t125 = ((x501==x502)&(x503^x504));

    if (t125 != 1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x506 = -1LL;
	uint32_t x507 = 222U;
	int64_t x508 = INT64_MIN;
	int64_t t126 = -248989662796LL;

    t126 = ((x505==x506)&(x507^x508));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x509 = -300;
	static int16_t x510 = -1;
	uint16_t x511 = UINT16_MAX;
	volatile int32_t x512 = 1;
	volatile int32_t t127 = -128;

    t127 = ((x509==x510)&(x511^x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = 7;
	int16_t x514 = INT16_MIN;
	uint64_t x516 = 69LLU;
	uint64_t t128 = 15619LLU;

    t128 = ((x513==x514)&(x515^x516));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -118204521131229665LL;
	int16_t x518 = 598;
	static int64_t x519 = INT64_MAX;
	int8_t x520 = INT8_MAX;
	int64_t t129 = 974LL;

    t129 = ((x517==x518)&(x519^x520));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = -1;
	uint32_t x522 = 1U;
	uint32_t x524 = 527637402U;

    t130 = ((x521==x522)&(x523^x524));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	static int32_t x526 = INT32_MAX;
	volatile int32_t x527 = -1;
	volatile uint64_t t131 = 285616084336181170LLU;

    t131 = ((x525==x526)&(x527^x528));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x529 = -1LL;
	static volatile int16_t x530 = 234;
	int64_t x531 = -1LL;

    t132 = ((x529==x530)&(x531^x532));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x535 = UINT8_MAX;
	volatile int32_t t133 = 2101;

    t133 = ((x533==x534)&(x535^x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MAX;
	int16_t x538 = 3846;
	uint8_t x539 = 51U;
	int16_t x540 = INT16_MIN;
	int32_t t134 = 2056;

    t134 = ((x537==x538)&(x539^x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x542 = 6449003392LLU;
	uint8_t x543 = 0U;
	int8_t x544 = -1;

    t135 = ((x541==x542)&(x543^x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MAX;
	uint8_t x546 = 3U;
	uint8_t x547 = 1U;
	uint16_t x548 = 1260U;
	int32_t t136 = -2611;

    t136 = ((x545==x546)&(x547^x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x549 = -7;
	int8_t x550 = -1;
	int32_t x551 = 1;
	volatile int32_t t137 = -6580836;

    t137 = ((x549==x550)&(x551^x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	int8_t x554 = INT8_MAX;
	int16_t x556 = INT16_MAX;

    t138 = ((x553==x554)&(x555^x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int32_t x558 = INT32_MAX;
	static int64_t x560 = 873597172475625821LL;
	volatile int64_t t139 = 1LL;

    t139 = ((x557==x558)&(x559^x560));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x561 = 95U;
	int32_t x562 = -1;
	static volatile int32_t x563 = INT32_MAX;
	uint32_t x564 = 19920826U;
	static volatile uint32_t t140 = 1712U;

    t140 = ((x561==x562)&(x563^x564));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MAX;
	uint64_t x566 = UINT64_MAX;
	volatile int64_t x567 = 54872798492540923LL;

    t141 = ((x565==x566)&(x567^x568));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = 1294;
	volatile int32_t x570 = INT32_MIN;
	uint64_t x571 = UINT64_MAX;
	uint64_t t142 = 307LLU;

    t142 = ((x569==x570)&(x571^x572));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x573 = 272108435LLU;
	int64_t x574 = INT64_MIN;
	static int16_t x575 = -1;
	volatile uint32_t x576 = 1527960587U;
	volatile uint32_t t143 = 50U;

    t143 = ((x573==x574)&(x575^x576));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	uint32_t x578 = 18872U;
	uint16_t x579 = UINT16_MAX;
	int32_t t144 = 27680;

    t144 = ((x577==x578)&(x579^x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x581 = UINT32_MAX;
	static int64_t x582 = 1948894279330LL;
	static int32_t x583 = INT32_MIN;
	static volatile uint16_t x584 = 838U;

    t145 = ((x581==x582)&(x583^x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = 3U;
	uint32_t x586 = 3U;
	volatile uint64_t x587 = 122997513682632LLU;
	volatile uint16_t x588 = 26868U;
	uint64_t t146 = 2248966574091090LLU;

    t146 = ((x585==x586)&(x587^x588));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = 9U;
	uint32_t x591 = 505653885U;
	volatile int16_t x592 = -1;
	uint32_t t147 = 1283U;

    t147 = ((x589==x590)&(x591^x592));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x594 = 1U;
	volatile uint32_t x595 = 390U;
	uint32_t t148 = 121U;

    t148 = ((x593==x594)&(x595^x596));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x597 = 477700U;
	int16_t x598 = -1;
	static uint64_t x599 = UINT64_MAX;
	uint64_t x600 = 59450LLU;
	static uint64_t t149 = 203393902LLU;

    t149 = ((x597==x598)&(x599^x600));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x602 = INT16_MAX;
	int64_t x604 = INT64_MIN;
	int64_t t150 = 52648605763LL;

    t150 = ((x601==x602)&(x603^x604));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	int32_t x606 = 4;
	int32_t t151 = -84;

    t151 = ((x605==x606)&(x607^x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x610 = 20LL;
	static uint8_t x611 = 0U;
	volatile int8_t x612 = -1;
	volatile int32_t t152 = 877;

    t152 = ((x609==x610)&(x611^x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x614 = 123059416;
	uint16_t x615 = UINT16_MAX;
	volatile int64_t x616 = INT64_MIN;
	int64_t t153 = 133850783906208LL;

    t153 = ((x613==x614)&(x615^x616));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint32_t x617 = 268968808U;
	int16_t x618 = 6299;
	volatile uint16_t x619 = 2606U;
	int32_t t154 = -3;

    t154 = ((x617==x618)&(x619^x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = 3;
	volatile int64_t x623 = INT64_MIN;
	uint16_t x624 = UINT16_MAX;
	int64_t t155 = -3692829725104991LL;

    t155 = ((x621==x622)&(x623^x624));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x626 = UINT8_MAX;
	int32_t x627 = 41;
	int32_t x628 = -474;
	int32_t t156 = 869472;

    t156 = ((x625==x626)&(x627^x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = INT32_MIN;
	uint8_t x630 = 2U;
	int16_t x632 = INT16_MIN;
	volatile int32_t t157 = 4;

    t157 = ((x629==x630)&(x631^x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x634 = 41360631LLU;
	uint16_t x635 = 50U;
	volatile uint8_t x636 = 33U;
	int32_t t158 = 109;

    t158 = ((x633==x634)&(x635^x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x637 = 3U;
	uint16_t x638 = UINT16_MAX;
	int8_t x639 = INT8_MAX;
	int32_t t159 = 6988;

    t159 = ((x637==x638)&(x639^x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x641 = 2U;
	int8_t x642 = -44;
	int8_t x644 = INT8_MIN;

    t160 = ((x641==x642)&(x643^x644));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	static uint32_t x646 = 8321303U;
	static uint8_t x647 = 2U;
	int32_t x648 = INT32_MIN;
	int32_t t161 = -100393;

    t161 = ((x645==x646)&(x647^x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = 1993U;
	static int16_t x650 = INT16_MIN;
	static int32_t x651 = 499254174;
	static int8_t x652 = INT8_MAX;

    t162 = ((x649==x650)&(x651^x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = -1LL;
	int8_t x654 = 1;
	static int32_t x656 = INT32_MIN;
	static volatile uint32_t t163 = 1663U;

    t163 = ((x653==x654)&(x655^x656));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x658 = INT16_MIN;
	uint8_t x660 = UINT8_MAX;
	uint64_t t164 = 90LLU;

    t164 = ((x657==x658)&(x659^x660));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x661 = INT32_MIN;
	int8_t x662 = INT8_MAX;
	static int32_t x663 = INT32_MIN;
	int32_t t165 = 7594518;

    t165 = ((x661==x662)&(x663^x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = 1;
	int64_t x666 = INT64_MAX;
	volatile int64_t x667 = INT64_MIN;
	int64_t t166 = 1LL;

    t166 = ((x665==x666)&(x667^x668));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x669 = UINT16_MAX;
	int16_t x671 = -1;
	volatile int32_t t167 = 433192;

    t167 = ((x669==x670)&(x671^x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 6U;
	uint64_t x674 = 11910739333857LLU;
	int8_t x675 = -1;
	uint64_t x676 = UINT64_MAX;
	volatile uint64_t t168 = 1388LLU;

    t168 = ((x673==x674)&(x675^x676));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x678 = -1;
	volatile int64_t x679 = INT64_MIN;

    t169 = ((x677==x678)&(x679^x680));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x681 = -1;
	int16_t x682 = -48;
	volatile int8_t x684 = INT8_MAX;
	static volatile int32_t t170 = 714235538;

    t170 = ((x681==x682)&(x683^x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MIN;
	volatile int32_t x686 = INT32_MIN;
	volatile int32_t x687 = -1;
	int64_t t171 = 63LL;

    t171 = ((x685==x686)&(x687^x688));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x689 = -4730;
	volatile int64_t x691 = -1LL;
	static volatile int64_t x692 = INT64_MIN;
	int64_t t172 = -535824LL;

    t172 = ((x689==x690)&(x691^x692));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x695 = UINT32_MAX;
	int64_t x696 = 15196343218LL;
	int64_t t173 = 6305558276163LL;

    t173 = ((x693==x694)&(x695^x696));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x697 = UINT16_MAX;
	int16_t x698 = 92;
	int8_t x699 = INT8_MIN;
	uint8_t x700 = 7U;
	int32_t t174 = 942176;

    t174 = ((x697==x698)&(x699^x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = -12;
	uint8_t x702 = 0U;
	int64_t x703 = -1LL;
	uint64_t x704 = UINT64_MAX;
	static volatile uint64_t t175 = 1721562539221163216LLU;

    t175 = ((x701==x702)&(x703^x704));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	static volatile uint8_t x706 = UINT8_MAX;
	uint32_t x707 = UINT32_MAX;
	int64_t x708 = INT64_MIN;
	volatile int64_t t176 = -111844LL;

    t176 = ((x705==x706)&(x707^x708));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = 61U;
	uint32_t x712 = 182554U;
	uint32_t t177 = 558754280U;

    t177 = ((x709==x710)&(x711^x712));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x714 = UINT16_MAX;
	uint32_t x715 = 5916960U;
	static uint32_t x716 = UINT32_MAX;
	volatile uint32_t t178 = 171U;

    t178 = ((x713==x714)&(x715^x716));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x717 = 8578LLU;
	int64_t x718 = INT64_MIN;
	static int8_t x719 = INT8_MAX;
	int16_t x720 = INT16_MIN;

    t179 = ((x717==x718)&(x719^x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MIN;
	static uint16_t x722 = UINT16_MAX;
	int8_t x723 = INT8_MIN;
	int32_t x724 = 23;
	int32_t t180 = 247176048;

    t180 = ((x721==x722)&(x723^x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x725 = 6LLU;
	int64_t x726 = INT64_MIN;
	int16_t x727 = INT16_MIN;
	uint16_t x728 = UINT16_MAX;
	volatile int32_t t181 = 11840;

    t181 = ((x725==x726)&(x727^x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x730 = -1LL;
	static int64_t x732 = -1LL;
	int64_t t182 = 3LL;

    t182 = ((x729==x730)&(x731^x732));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = 4;
	static uint16_t x734 = UINT16_MAX;
	int32_t x736 = INT32_MAX;

    t183 = ((x733==x734)&(x735^x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -1;
	int32_t x738 = INT32_MIN;
	volatile int16_t x739 = -541;
	uint32_t x740 = UINT32_MAX;
	volatile uint32_t t184 = 3390023U;

    t184 = ((x737==x738)&(x739^x740));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = 862U;
	volatile int8_t x743 = 0;
	int8_t x744 = INT8_MAX;
	int32_t t185 = -92;

    t185 = ((x741==x742)&(x743^x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x745 = INT64_MAX;
	int16_t x746 = -971;
	uint8_t x748 = UINT8_MAX;

    t186 = ((x745==x746)&(x747^x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = UINT32_MAX;
	volatile int64_t x750 = INT64_MAX;
	int16_t x751 = -81;
	static int32_t x752 = INT32_MIN;

    t187 = ((x749==x750)&(x751^x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = INT16_MAX;
	int32_t x755 = INT32_MIN;
	int32_t t188 = -32339391;

    t188 = ((x753==x754)&(x755^x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -595682861;
	int8_t x758 = INT8_MAX;
	static uint16_t x759 = 136U;
	static uint64_t x760 = 85132500286448586LLU;
	uint64_t t189 = 2687110125LLU;

    t189 = ((x757==x758)&(x759^x760));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = 15;
	int16_t x762 = INT16_MIN;
	static int64_t x763 = INT64_MIN;
	static uint64_t x764 = 33976LLU;

    t190 = ((x761==x762)&(x763^x764));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x765 = 0U;
	int8_t x767 = 5;
	uint8_t x768 = 39U;
	volatile int32_t t191 = 963;

    t191 = ((x765==x766)&(x767^x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MIN;
	uint8_t x770 = 14U;
	int16_t x771 = -10671;
	int32_t x772 = INT32_MAX;
	volatile int32_t t192 = 501984;

    t192 = ((x769==x770)&(x771^x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x773 = 3U;
	uint32_t x774 = 10140U;
	uint16_t x775 = 93U;
	uint32_t x776 = 1634748272U;
	volatile uint32_t t193 = 67956752U;

    t193 = ((x773==x774)&(x775^x776));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = -1;
	uint32_t x778 = 63191U;
	int64_t x779 = 19347951555938LL;
	static uint64_t t194 = 1LLU;

    t194 = ((x777==x778)&(x779^x780));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = 13U;
	uint16_t x783 = 48U;
	uint8_t x784 = UINT8_MAX;
	int32_t t195 = -12;

    t195 = ((x781==x782)&(x783^x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x785 = -1;
	volatile int8_t x786 = INT8_MIN;
	uint8_t x787 = 72U;
	volatile int32_t x788 = INT32_MIN;

    t196 = ((x785==x786)&(x787^x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x789 = -1;
	uint32_t x790 = UINT32_MAX;
	volatile uint32_t t197 = 6717996U;

    t197 = ((x789==x790)&(x791^x792));

    if (t197 != 1U) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x793 = UINT32_MAX;
	int64_t x795 = INT64_MIN;
	int32_t x796 = INT32_MAX;
	int64_t t198 = 269623887208122LL;

    t198 = ((x793==x794)&(x795^x796));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x798 = INT32_MAX;
	int16_t x799 = INT16_MIN;
	volatile int32_t t199 = -48;

    t199 = ((x797==x798)&(x799^x800));

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

