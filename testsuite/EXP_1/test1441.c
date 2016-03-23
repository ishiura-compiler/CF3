
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

static int8_t x1 = INT8_MIN;
int64_t x3 = INT64_MAX;
int32_t x4 = 0;
static volatile int64_t t0 = -85384633LL;
volatile int64_t x5 = INT64_MIN;
volatile uint32_t t1 = 97U;
uint16_t x11 = 30711U;
volatile int32_t t2 = -26;
volatile int32_t x16 = INT32_MIN;
uint64_t x25 = UINT64_MAX;
volatile int64_t t6 = 319086740958872LL;
int32_t t8 = 29705773;
uint16_t x38 = 720U;
uint8_t x46 = UINT8_MAX;
int32_t x48 = INT32_MIN;
volatile uint8_t x49 = UINT8_MAX;
int32_t x60 = -7240;
volatile int8_t x69 = -2;
volatile uint64_t t18 = 122192524644939LLU;
int32_t t19 = -19;
volatile int64_t t21 = -54164727182297869LL;
uint64_t x91 = UINT64_MAX;
int32_t x93 = 0;
int64_t x95 = INT64_MIN;
volatile int16_t x101 = -1;
int64_t x103 = 106822507LL;
uint16_t x113 = 3U;
int32_t x116 = 245561328;
int32_t x120 = 1016173948;
uint16_t x122 = 11185U;
volatile int32_t x133 = -179547;
uint16_t x136 = UINT16_MAX;
static volatile uint16_t x139 = 2074U;
int64_t x140 = INT64_MIN;
int32_t x148 = INT32_MIN;
int64_t x149 = 1668158LL;
uint8_t x153 = 32U;
uint64_t x161 = UINT64_MAX;
int32_t x164 = 127;
volatile int16_t x167 = -1;
int8_t x169 = INT8_MIN;
static int32_t x186 = -1;
int8_t x198 = 1;
int8_t x206 = INT8_MAX;
int32_t t50 = 460565;
int8_t x211 = INT8_MIN;
static volatile int64_t x219 = INT64_MAX;
uint64_t x223 = UINT64_MAX;
static int32_t x224 = INT32_MAX;
uint32_t x229 = 23043465U;
int64_t x238 = INT64_MIN;
int8_t x239 = INT8_MIN;
int8_t x240 = 0;
static volatile uint64_t x244 = 285641443560337LLU;
uint64_t x245 = 671LLU;
volatile int16_t x248 = INT16_MIN;
int16_t x249 = -1;
int8_t x264 = -1;
uint8_t x267 = 2U;
uint32_t t63 = 14U;
volatile int16_t x271 = INT16_MIN;
static volatile int8_t x273 = -13;
static int8_t x279 = -5;
volatile int32_t t67 = 1489;
static uint64_t t68 = UINT64_MAX;
int32_t t69 = 40832;
static int64_t x296 = INT64_MAX;
static uint64_t t70 = 42169LLU;
uint16_t x300 = 0U;
uint8_t x302 = 57U;
int32_t t72 = -30197;
volatile int32_t x305 = 6;
volatile int8_t x330 = -46;
int64_t x331 = INT64_MAX;
volatile uint8_t x336 = UINT8_MAX;
int64_t x337 = INT64_MAX;
volatile uint16_t x340 = UINT16_MAX;
uint8_t x347 = UINT8_MAX;
static volatile uint32_t x349 = 3286934U;
volatile int32_t t83 = -357;
int16_t x360 = INT16_MAX;
int64_t x363 = INT64_MAX;
volatile uint64_t t87 = 37LLU;
uint8_t x377 = 6U;
int16_t x379 = INT16_MIN;
static volatile int32_t x381 = INT32_MIN;
int32_t x383 = INT32_MIN;
int32_t x392 = 6889;
int64_t x397 = -1LL;
volatile uint32_t t95 = 107931691U;
int8_t x404 = INT8_MAX;
static volatile int8_t x410 = -1;
uint32_t x415 = 38U;
int8_t x418 = -1;
static uint64_t x419 = UINT64_MAX;
static volatile int8_t x428 = INT8_MIN;
volatile int32_t t102 = 266098905;
uint8_t x433 = 16U;
int32_t x436 = -9304332;
volatile int32_t t104 = -1379;
int64_t x437 = -86807662443536LL;
uint8_t x441 = 14U;
volatile int16_t x443 = INT16_MIN;
int64_t x458 = INT64_MIN;
volatile int64_t t110 = 372293468214061LL;
uint8_t x461 = UINT8_MAX;
static int32_t x465 = INT32_MIN;
int16_t x470 = INT16_MAX;
int64_t x475 = -1LL;
volatile int64_t t115 = INT64_MIN;
int8_t x481 = -1;
volatile int32_t x488 = INT32_MIN;
int16_t x503 = 4;
volatile int32_t t120 = 94801400;
static volatile int32_t t122 = 1;
uint32_t x543 = UINT32_MAX;
uint16_t x544 = UINT16_MAX;
volatile uint16_t x548 = UINT16_MAX;
static uint16_t x550 = UINT16_MAX;
volatile uint16_t x557 = UINT16_MAX;
int64_t x558 = -1LL;
int8_t x559 = INT8_MIN;
volatile int64_t t134 = 1853192LL;
volatile int32_t t135 = -24606;
uint64_t x569 = 96418511LLU;
int32_t x572 = INT32_MIN;
uint64_t x574 = UINT64_MAX;
uint32_t x578 = 1892246U;
uint16_t x579 = 41U;
static volatile int64_t x580 = 2930791LL;
static int8_t x581 = -1;
int32_t x584 = -89;
uint8_t x585 = 19U;
volatile int64_t t141 = 51LL;
int64_t x593 = 15LL;
int8_t x595 = 1;
volatile int16_t x601 = -269;
int32_t x604 = INT32_MIN;
volatile uint8_t x608 = 5U;
static uint32_t x633 = UINT32_MAX;
int8_t x643 = INT8_MIN;
static int32_t t155 = -266765;
int32_t x649 = INT32_MAX;
volatile uint16_t x655 = UINT16_MAX;
int16_t x659 = 1068;
uint8_t x668 = 0U;
static volatile uint16_t x676 = 9U;
static uint32_t t162 = 9434U;
int8_t x678 = INT8_MAX;
volatile uint32_t t163 = UINT32_MAX;
uint16_t x682 = 0U;
int32_t x684 = 155;
static volatile int16_t x687 = 24;
int64_t t167 = -1572395790417108LL;
uint32_t x701 = 58146U;
uint64_t x703 = 18185166951052LLU;
volatile int32_t x710 = 1921771;
int64_t x714 = INT64_MIN;
uint64_t x715 = 7398444204767162567LLU;
uint16_t x718 = 24U;
int32_t t174 = 7894;
volatile uint32_t x729 = UINT32_MAX;
uint32_t x733 = 4050317U;
static volatile int64_t t176 = INT64_MIN;
static uint32_t x738 = UINT32_MAX;
uint16_t x739 = 936U;
uint16_t x742 = UINT16_MAX;
int8_t x746 = 58;
uint8_t x748 = UINT8_MAX;
static int16_t x757 = INT16_MIN;
volatile int64_t x758 = INT64_MIN;
int16_t x778 = -1;
uint16_t x783 = 698U;
volatile int32_t t188 = 93787;
volatile int32_t x791 = -1;
uint32_t x795 = 6592U;
uint32_t x797 = UINT32_MAX;
int32_t t197 = INT32_MIN;


void f0(void) {
    	static uint8_t x2 = 55U;

    t0 = (((x1==x2)%x3)|x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x6 = UINT16_MAX;
	uint32_t x7 = 576146U;
	int32_t x8 = INT32_MIN;

    t1 = (((x5==x6)%x7)|x8);

    if (t1 != 2147483648U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 17891LLU;
	uint32_t x10 = 4103U;
	volatile int8_t x12 = -1;

    t2 = (((x9==x10)%x11)|x12);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	uint8_t x14 = 30U;
	volatile int64_t x15 = -5368246LL;
	volatile int64_t t3 = 105977423LL;

    t3 = (((x13==x14)%x15)|x16);

    if (t3 != -2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = INT8_MAX;
	uint16_t x18 = 3U;
	uint64_t x19 = 9920335131723359LLU;
	uint8_t x20 = 103U;
	volatile uint64_t t4 = 201668422964998716LLU;

    t4 = (((x17==x18)%x19)|x20);

    if (t4 != 103LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	uint8_t x22 = 59U;
	uint32_t x23 = UINT32_MAX;
	volatile uint8_t x24 = UINT8_MAX;
	volatile uint32_t t5 = 13177328U;

    t5 = (((x21==x22)%x23)|x24);

    if (t5 != 255U) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x26 = INT8_MAX;
	static int64_t x27 = -16LL;
	int8_t x28 = INT8_MAX;

    t6 = (((x25==x26)%x27)|x28);

    if (t6 != 127LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 2;
	static int32_t x30 = INT32_MAX;
	uint8_t x31 = 81U;
	int8_t x32 = -6;
	volatile int32_t t7 = 15;

    t7 = (((x29==x30)%x31)|x32);

    if (t7 != -6) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = 2;
	int64_t x34 = INT64_MAX;
	uint16_t x35 = UINT16_MAX;
	int8_t x36 = -19;

    t8 = (((x33==x34)%x35)|x36);

    if (t8 != -19) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	uint32_t x39 = 62U;
	static int16_t x40 = INT16_MIN;
	volatile uint32_t t9 = 864596U;

    t9 = (((x37==x38)%x39)|x40);

    if (t9 != 4294934528U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x41 = 18676;
	static int64_t x42 = 10958LL;
	uint8_t x43 = UINT8_MAX;
	static int32_t x44 = INT32_MIN;
	static int32_t t10 = INT32_MIN;

    t10 = (((x41==x42)%x43)|x44);

    if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MAX;
	int8_t x47 = -1;
	int32_t t11 = INT32_MIN;

    t11 = (((x45==x46)%x47)|x48);

    if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = -1;
	int16_t x51 = -7798;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t12 = UINT64_MAX;

    t12 = (((x49==x50)%x51)|x52);

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	static int8_t x54 = -1;
	volatile uint16_t x55 = UINT16_MAX;
	int64_t x56 = 347LL;
	int64_t t13 = 168LL;

    t13 = (((x53==x54)%x55)|x56);

    if (t13 != 347LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MAX;
	uint8_t x58 = UINT8_MAX;
	int16_t x59 = INT16_MAX;
	static volatile int32_t t14 = -1160257;

    t14 = (((x57==x58)%x59)|x60);

    if (t14 != -7240) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	volatile uint16_t x62 = 7993U;
	static uint64_t x63 = UINT64_MAX;
	volatile int8_t x64 = 11;
	volatile uint64_t t15 = 647798252648081LLU;

    t15 = (((x61==x62)%x63)|x64);

    if (t15 != 11LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 7U;
	static uint32_t x66 = UINT32_MAX;
	int32_t x67 = INT32_MAX;
	uint8_t x68 = 108U;
	volatile int32_t t16 = 15561848;

    t16 = (((x65==x66)%x67)|x68);

    if (t16 != 108) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x70 = 17166845U;
	int8_t x71 = INT8_MIN;
	static volatile uint32_t x72 = 1728U;
	volatile uint32_t t17 = 14U;

    t17 = (((x69==x70)%x71)|x72);

    if (t17 != 1728U) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	static int8_t x74 = 12;
	static volatile uint64_t x75 = 23447372204335045LLU;
	int32_t x76 = INT32_MIN;

    t18 = (((x73==x74)%x75)|x76);

    if (t18 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x77 = 2599929U;
	int8_t x78 = -61;
	int16_t x79 = 478;
	int16_t x80 = INT16_MAX;

    t19 = (((x77==x78)%x79)|x80);

    if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	static int16_t x82 = INT16_MIN;
	int64_t x83 = -1LL;
	uint32_t x84 = UINT32_MAX;
	int64_t t20 = -396628LL;

    t20 = (((x81==x82)%x83)|x84);

    if (t20 != 4294967295LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 16566547530294LLU;
	volatile uint32_t x86 = 15U;
	static volatile int64_t x87 = INT64_MIN;
	static uint16_t x88 = 30902U;

    t21 = (((x85==x86)%x87)|x88);

    if (t21 != 30902LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = -1LL;
	uint16_t x90 = 111U;
	uint32_t x92 = 662U;
	volatile uint64_t t22 = 8738137128870063LLU;

    t22 = (((x89==x90)%x91)|x92);

    if (t22 != 662LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x94 = INT16_MIN;
	static uint32_t x96 = 4416486U;
	volatile int64_t t23 = 702379445712608LL;

    t23 = (((x93==x94)%x95)|x96);

    if (t23 != 4416486LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MAX;
	int32_t x98 = INT32_MIN;
	int64_t x99 = INT64_MIN;
	static int32_t x100 = -1;
	volatile int64_t t24 = -108410804LL;

    t24 = (((x97==x98)%x99)|x100);

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x102 = 3479572351989LL;
	int32_t x104 = INT32_MAX;
	int64_t t25 = 240457370960289LL;

    t25 = (((x101==x102)%x103)|x104);

    if (t25 != 2147483647LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x109 = -4;
	uint64_t x110 = UINT64_MAX;
	int16_t x111 = INT16_MIN;
	int32_t x112 = INT32_MIN;
	int32_t t26 = INT32_MIN;

    t26 = (((x109==x110)%x111)|x112);

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x114 = 0;
	int32_t x115 = INT32_MIN;
	volatile int32_t t27 = 4159;

    t27 = (((x113==x114)%x115)|x116);

    if (t27 != 245561328) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = -243238668LL;
	int32_t x118 = 18;
	uint8_t x119 = UINT8_MAX;
	volatile int32_t t28 = -11;

    t28 = (((x117==x118)%x119)|x120);

    if (t28 != 1016173948) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x121 = UINT32_MAX;
	int32_t x123 = INT32_MIN;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t29 = 1009401022;

    t29 = (((x121==x122)%x123)|x124);

    if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = -4142;
	static uint32_t x126 = UINT32_MAX;
	int8_t x127 = INT8_MAX;
	int32_t x128 = -1;
	int32_t t30 = 24874;

    t30 = (((x125==x126)%x127)|x128);

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x129 = 0U;
	int16_t x130 = -1;
	int64_t x131 = -172601LL;
	volatile uint16_t x132 = 20319U;
	int64_t t31 = 217725LL;

    t31 = (((x129==x130)%x131)|x132);

    if (t31 != 20319LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x134 = INT16_MAX;
	volatile int16_t x135 = 3;
	volatile int32_t t32 = -47003;

    t32 = (((x133==x134)%x135)|x136);

    if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = INT32_MIN;
	static int64_t x138 = 452116445LL;
	static int64_t t33 = INT64_MIN;

    t33 = (((x137==x138)%x139)|x140);

    if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x141 = 20641U;
	int64_t x142 = INT64_MIN;
	static int8_t x143 = -1;
	int16_t x144 = INT16_MIN;
	int32_t t34 = 53442;

    t34 = (((x141==x142)%x143)|x144);

    if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint8_t x145 = 2U;
	volatile uint16_t x146 = UINT16_MAX;
	static volatile int64_t x147 = INT64_MIN;
	int64_t t35 = 16235LL;

    t35 = (((x145==x146)%x147)|x148);

    if (t35 != -2147483648LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x150 = INT32_MIN;
	uint64_t x151 = 322083189898135315LLU;
	volatile int64_t x152 = INT64_MIN;
	volatile uint64_t t36 = 2396820203LLU;

    t36 = (((x149==x150)%x151)|x152);

    if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x154 = 646338U;
	uint16_t x155 = UINT16_MAX;
	volatile int32_t x156 = -19;
	int32_t t37 = 1620;

    t37 = (((x153==x154)%x155)|x156);

    if (t37 != -19) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x157 = 0U;
	static volatile int64_t x158 = -1LL;
	int8_t x159 = INT8_MIN;
	int32_t x160 = 806;
	volatile int32_t t38 = 0;

    t38 = (((x157==x158)%x159)|x160);

    if (t38 != 806) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x162 = 363;
	volatile int32_t x163 = -1;
	int32_t t39 = 1;

    t39 = (((x161==x162)%x163)|x164);

    if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x165 = INT32_MIN;
	uint32_t x166 = 0U;
	int32_t x168 = -1;
	static volatile int32_t t40 = 38;

    t40 = (((x165==x166)%x167)|x168);

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x170 = 31728U;
	uint64_t x171 = UINT64_MAX;
	int16_t x172 = INT16_MAX;
	volatile uint64_t t41 = 5441202344322640LLU;

    t41 = (((x169==x170)%x171)|x172);

    if (t41 != 32767LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x173 = INT32_MAX;
	uint64_t x174 = 1489486931508040616LLU;
	int16_t x175 = 138;
	uint16_t x176 = 79U;
	volatile int32_t t42 = -300353935;

    t42 = (((x173==x174)%x175)|x176);

    if (t42 != 79) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x177 = INT8_MIN;
	int64_t x178 = -18050LL;
	uint16_t x179 = 826U;
	volatile int32_t x180 = -1;
	volatile int32_t t43 = 95028998;

    t43 = (((x177==x178)%x179)|x180);

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x181 = -1;
	int32_t x182 = INT32_MIN;
	static volatile int32_t x183 = INT32_MIN;
	static uint64_t x184 = 143580491446LLU;
	uint64_t t44 = 1736360615754759654LLU;

    t44 = (((x181==x182)%x183)|x184);

    if (t44 != 143580491446LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x185 = INT32_MAX;
	static uint16_t x187 = 920U;
	uint32_t x188 = 12120696U;
	uint32_t t45 = 59U;

    t45 = (((x185==x186)%x187)|x188);

    if (t45 != 12120696U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = -430;
	int64_t x190 = INT64_MIN;
	int8_t x191 = -1;
	static int32_t x192 = INT32_MIN;
	volatile int32_t t46 = INT32_MIN;

    t46 = (((x189==x190)%x191)|x192);

    if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x193 = UINT8_MAX;
	uint32_t x194 = 2048538U;
	int8_t x195 = INT8_MAX;
	uint16_t x196 = UINT16_MAX;
	static volatile int32_t t47 = -1524915;

    t47 = (((x193==x194)%x195)|x196);

    if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = -1;
	int32_t x199 = 802520;
	static volatile int16_t x200 = INT16_MAX;
	int32_t t48 = -2;

    t48 = (((x197==x198)%x199)|x200);

    if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x201 = 0;
	int64_t x202 = -714658543LL;
	volatile uint16_t x203 = 5256U;
	int16_t x204 = INT16_MIN;
	int32_t t49 = -33590859;

    t49 = (((x201==x202)%x203)|x204);

    if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x205 = 18371LLU;
	int8_t x207 = INT8_MIN;
	uint16_t x208 = 12188U;

    t50 = (((x205==x206)%x207)|x208);

    if (t50 != 12188) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x209 = 10458U;
	static volatile uint16_t x210 = 5U;
	static int32_t x212 = INT32_MIN;
	volatile int32_t t51 = INT32_MIN;

    t51 = (((x209==x210)%x211)|x212);

    if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x217 = 3U;
	int16_t x218 = 2320;
	int32_t x220 = INT32_MIN;
	volatile int64_t t52 = 8206553LL;

    t52 = (((x217==x218)%x219)|x220);

    if (t52 != -2147483648LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = INT16_MAX;
	int32_t x222 = INT32_MIN;
	volatile uint64_t t53 = 32311558729757277LLU;

    t53 = (((x221==x222)%x223)|x224);

    if (t53 != 2147483647LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x225 = -107;
	int32_t x226 = INT32_MIN;
	volatile uint16_t x227 = 1672U;
	int16_t x228 = INT16_MIN;
	static int32_t t54 = -1;

    t54 = (((x225==x226)%x227)|x228);

    if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x230 = UINT8_MAX;
	volatile int16_t x231 = INT16_MIN;
	volatile int32_t x232 = 20;
	volatile int32_t t55 = -49;

    t55 = (((x229==x230)%x231)|x232);

    if (t55 != 20) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = INT16_MIN;
	uint32_t x234 = 0U;
	volatile int32_t x235 = INT32_MIN;
	uint64_t x236 = 68832310LLU;
	volatile uint64_t t56 = 258LLU;

    t56 = (((x233==x234)%x235)|x236);

    if (t56 != 68832310LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x237 = INT8_MAX;
	int32_t t57 = -5698942;

    t57 = (((x237==x238)%x239)|x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x241 = 4782U;
	int64_t x242 = INT64_MIN;
	int16_t x243 = INT16_MIN;
	uint64_t t58 = 3160550296LLU;

    t58 = (((x241==x242)%x243)|x244);

    if (t58 != 285641443560337LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x246 = INT16_MAX;
	int32_t x247 = 606;
	volatile int32_t t59 = 14161;

    t59 = (((x245==x246)%x247)|x248);

    if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x250 = -28873096;
	uint32_t x251 = 136443U;
	int8_t x252 = 1;
	uint32_t t60 = 15705943U;

    t60 = (((x249==x250)%x251)|x252);

    if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x257 = INT8_MIN;
	static int8_t x258 = 7;
	uint8_t x259 = 3U;
	volatile int32_t x260 = -1;
	int32_t t61 = 3;

    t61 = (((x257==x258)%x259)|x260);

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x261 = INT32_MAX;
	int32_t x262 = 117907;
	volatile int8_t x263 = INT8_MIN;
	static volatile int32_t t62 = 983371009;

    t62 = (((x261==x262)%x263)|x264);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x265 = INT32_MAX;
	volatile int32_t x266 = -1709302;
	uint32_t x268 = 64760U;

    t63 = (((x265==x266)%x267)|x268);

    if (t63 != 64760U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x269 = INT8_MIN;
	static int32_t x270 = 50953;
	uint8_t x272 = 30U;
	int32_t t64 = 0;

    t64 = (((x269==x270)%x271)|x272);

    if (t64 != 30) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x274 = INT32_MIN;
	uint8_t x275 = 70U;
	int32_t x276 = INT32_MIN;
	int32_t t65 = INT32_MIN;

    t65 = (((x273==x274)%x275)|x276);

    if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int32_t x277 = -94;
	int32_t x278 = INT32_MIN;
	static int8_t x280 = -1;
	static volatile int32_t t66 = 107;

    t66 = (((x277==x278)%x279)|x280);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int16_t x281 = 0;
	uint64_t x282 = 14625LLU;
	int32_t x283 = INT32_MAX;
	volatile int16_t x284 = -1;

    t67 = (((x281==x282)%x283)|x284);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x285 = UINT16_MAX;
	volatile int8_t x286 = -1;
	int32_t x287 = INT32_MAX;
	uint64_t x288 = UINT64_MAX;

    t68 = (((x285==x286)%x287)|x288);

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x289 = INT16_MIN;
	int64_t x290 = -148LL;
	static int8_t x291 = -34;
	int8_t x292 = -1;

    t69 = (((x289==x290)%x291)|x292);

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x293 = 3139970144831LLU;
	volatile int32_t x294 = 473;
	uint64_t x295 = 566624457765LLU;

    t70 = (((x293==x294)%x295)|x296);

    if (t70 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x297 = 2U;
	volatile int8_t x298 = 2;
	volatile int64_t x299 = 2383367049612280LL;
	int64_t t71 = 109LL;

    t71 = (((x297==x298)%x299)|x300);

    if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x301 = -6;
	static int16_t x303 = -1;
	uint16_t x304 = 87U;

    t72 = (((x301==x302)%x303)|x304);

    if (t72 != 87) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x306 = 23U;
	int64_t x307 = -601560057LL;
	int16_t x308 = 54;
	int64_t t73 = -127393521LL;

    t73 = (((x305==x306)%x307)|x308);

    if (t73 != 54LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x309 = -1;
	uint32_t x310 = 962740U;
	volatile int64_t x311 = -1LL;
	static int16_t x312 = INT16_MIN;
	static int64_t t74 = -86970071266803LL;

    t74 = (((x309==x310)%x311)|x312);

    if (t74 != -32768LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x313 = UINT16_MAX;
	uint8_t x314 = 40U;
	uint16_t x315 = 183U;
	uint8_t x316 = 71U;
	int32_t t75 = -4768;

    t75 = (((x313==x314)%x315)|x316);

    if (t75 != 71) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint32_t x317 = 15404713U;
	int64_t x318 = INT64_MIN;
	uint32_t x319 = 1283055U;
	int32_t x320 = INT32_MIN;
	volatile uint32_t t76 = 1680742087U;

    t76 = (((x317==x318)%x319)|x320);

    if (t76 != 2147483648U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x325 = -1;
	volatile int8_t x326 = -1;
	volatile int16_t x327 = INT16_MAX;
	int16_t x328 = INT16_MAX;
	static volatile int32_t t77 = 7;

    t77 = (((x325==x326)%x327)|x328);

    if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x329 = 337726;
	int64_t x332 = -1088499LL;
	static int64_t t78 = 39LL;

    t78 = (((x329==x330)%x331)|x332);

    if (t78 != -1088499LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x333 = 15U;
	static int32_t x334 = 0;
	int64_t x335 = INT64_MIN;
	int64_t t79 = 458126009374646052LL;

    t79 = (((x333==x334)%x335)|x336);

    if (t79 != 255LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x338 = 2320U;
	int8_t x339 = INT8_MAX;
	int32_t t80 = 7269861;

    t80 = (((x337==x338)%x339)|x340);

    if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x341 = INT16_MIN;
	int16_t x342 = -15;
	uint16_t x343 = 1665U;
	volatile uint16_t x344 = 1U;
	static volatile int32_t t81 = 2045;

    t81 = (((x341==x342)%x343)|x344);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x345 = INT32_MIN;
	static volatile int16_t x346 = -1;
	int64_t x348 = -1266815809LL;
	int64_t t82 = 64003199967LL;

    t82 = (((x345==x346)%x347)|x348);

    if (t82 != -1266815809LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x350 = 3;
	int16_t x351 = -1;
	uint8_t x352 = 0U;

    t83 = (((x349==x350)%x351)|x352);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint64_t x353 = UINT64_MAX;
	static int32_t x354 = INT32_MIN;
	int16_t x355 = INT16_MAX;
	int16_t x356 = -910;
	volatile int32_t t84 = 1620655;

    t84 = (((x353==x354)%x355)|x356);

    if (t84 != -910) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x357 = -1;
	int64_t x358 = INT64_MIN;
	int32_t x359 = -1;
	static int32_t t85 = -169148;

    t85 = (((x357==x358)%x359)|x360);

    if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x361 = -8104592774239LL;
	static volatile uint16_t x362 = 15101U;
	uint32_t x364 = UINT32_MAX;
	volatile int64_t t86 = 0LL;

    t86 = (((x361==x362)%x363)|x364);

    if (t86 != 4294967295LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int8_t x365 = INT8_MIN;
	static uint8_t x366 = 0U;
	int8_t x367 = -5;
	volatile uint64_t x368 = 5981742480020LLU;

    t87 = (((x365==x366)%x367)|x368);

    if (t87 != 5981742480020LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x369 = INT16_MIN;
	static int16_t x370 = -2880;
	int16_t x371 = -2;
	int64_t x372 = -1LL;
	static volatile int64_t t88 = -255258168101159LL;

    t88 = (((x369==x370)%x371)|x372);

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x373 = 185071508LLU;
	static uint64_t x374 = 48645056781621278LLU;
	uint32_t x375 = UINT32_MAX;
	int16_t x376 = INT16_MIN;
	static volatile uint32_t t89 = 24U;

    t89 = (((x373==x374)%x375)|x376);

    if (t89 != 4294934528U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x378 = 1867524890LL;
	uint16_t x380 = 67U;
	static volatile int32_t t90 = -212428598;

    t90 = (((x377==x378)%x379)|x380);

    if (t90 != 67) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x382 = 1244953374LL;
	uint16_t x384 = 23636U;
	int32_t t91 = -32856276;

    t91 = (((x381==x382)%x383)|x384);

    if (t91 != 23636) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x385 = 5U;
	static int32_t x386 = 858171756;
	uint8_t x387 = UINT8_MAX;
	volatile int8_t x388 = 1;
	static int32_t t92 = -30593708;

    t92 = (((x385==x386)%x387)|x388);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x389 = INT32_MAX;
	int32_t x390 = INT32_MAX;
	uint32_t x391 = UINT32_MAX;
	uint32_t t93 = 757U;

    t93 = (((x389==x390)%x391)|x392);

    if (t93 != 6889U) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x393 = 2132193499LL;
	int64_t x394 = INT64_MIN;
	uint8_t x395 = 7U;
	static uint32_t x396 = UINT32_MAX;
	uint32_t t94 = UINT32_MAX;

    t94 = (((x393==x394)%x395)|x396);

    if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x398 = 7746;
	uint32_t x399 = UINT32_MAX;
	static uint16_t x400 = 171U;

    t95 = (((x397==x398)%x399)|x400);

    if (t95 != 171U) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x401 = INT8_MIN;
	volatile uint64_t x402 = 79498910370310LLU;
	int16_t x403 = -1;
	volatile int32_t t96 = -5376;

    t96 = (((x401==x402)%x403)|x404);

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x405 = INT64_MAX;
	volatile int8_t x406 = -9;
	uint8_t x407 = 24U;
	int32_t x408 = INT32_MIN;
	volatile int32_t t97 = INT32_MIN;

    t97 = (((x405==x406)%x407)|x408);

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x409 = 6819U;
	volatile int32_t x411 = -1;
	int16_t x412 = INT16_MIN;
	volatile int32_t t98 = -45286;

    t98 = (((x409==x410)%x411)|x412);

    if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x413 = 6998882U;
	int64_t x414 = 47912714937798LL;
	int64_t x416 = INT64_MIN;
	volatile int64_t t99 = INT64_MIN;

    t99 = (((x413==x414)%x415)|x416);

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x417 = INT8_MAX;
	static uint32_t x420 = 78U;
	uint64_t t100 = 0LLU;

    t100 = (((x417==x418)%x419)|x420);

    if (t100 != 78LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x421 = -186;
	int8_t x422 = INT8_MIN;
	uint32_t x423 = UINT32_MAX;
	int32_t x424 = INT32_MIN;
	uint32_t t101 = 620U;

    t101 = (((x421==x422)%x423)|x424);

    if (t101 != 2147483648U) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x425 = 1;
	volatile int32_t x426 = INT32_MIN;
	int16_t x427 = 554;

    t102 = (((x425==x426)%x427)|x428);

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x429 = INT16_MIN;
	int32_t x430 = -31511879;
	int16_t x431 = INT16_MIN;
	volatile int32_t x432 = INT32_MAX;
	int32_t t103 = INT32_MAX;

    t103 = (((x429==x430)%x431)|x432);

    if (t103 != INT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x434 = 27U;
	volatile int16_t x435 = 10;

    t104 = (((x433==x434)%x435)|x436);

    if (t104 != -9304332) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x438 = UINT64_MAX;
	static volatile int8_t x439 = -1;
	static uint16_t x440 = 128U;
	static int32_t t105 = -1;

    t105 = (((x437==x438)%x439)|x440);

    if (t105 != 128) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x442 = INT16_MIN;
	int32_t x444 = -1;
	volatile int32_t t106 = -8025;

    t106 = (((x441==x442)%x443)|x444);

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x445 = INT64_MIN;
	int32_t x446 = INT32_MAX;
	int64_t x447 = -1LL;
	static int8_t x448 = INT8_MIN;
	int64_t t107 = -107518834LL;

    t107 = (((x445==x446)%x447)|x448);

    if (t107 != -128LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x449 = INT16_MAX;
	volatile int64_t x450 = -1LL;
	uint16_t x451 = 4U;
	uint64_t x452 = UINT64_MAX;
	volatile uint64_t t108 = UINT64_MAX;

    t108 = (((x449==x450)%x451)|x452);

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x453 = INT64_MIN;
	uint16_t x454 = 1255U;
	volatile int8_t x455 = -1;
	volatile uint64_t x456 = UINT64_MAX;
	uint64_t t109 = UINT64_MAX;

    t109 = (((x453==x454)%x455)|x456);

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x457 = 2587708LL;
	static int64_t x459 = INT64_MIN;
	volatile int32_t x460 = 10780;

    t110 = (((x457==x458)%x459)|x460);

    if (t110 != 10780LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x462 = INT32_MIN;
	int64_t x463 = INT64_MAX;
	int64_t x464 = 115LL;
	volatile int64_t t111 = -3312631675242260311LL;

    t111 = (((x461==x462)%x463)|x464);

    if (t111 != 115LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x466 = INT16_MIN;
	uint8_t x467 = UINT8_MAX;
	static uint16_t x468 = UINT16_MAX;
	volatile int32_t t112 = 1520;

    t112 = (((x465==x466)%x467)|x468);

    if (t112 != 65535) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x469 = -6;
	volatile int64_t x471 = 127498LL;
	static volatile int8_t x472 = INT8_MIN;
	int64_t t113 = -1599LL;

    t113 = (((x469==x470)%x471)|x472);

    if (t113 != -128LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x473 = INT64_MIN;
	static volatile int32_t x474 = INT32_MIN;
	uint16_t x476 = UINT16_MAX;
	volatile int64_t t114 = 67LL;

    t114 = (((x473==x474)%x475)|x476);

    if (t114 != 65535LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x477 = INT8_MIN;
	uint64_t x478 = 64967135LLU;
	uint32_t x479 = 51033177U;
	volatile int64_t x480 = INT64_MIN;

    t115 = (((x477==x478)%x479)|x480);

    if (t115 != INT64_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x482 = -252LL;
	uint16_t x483 = 1U;
	volatile int64_t x484 = 2005LL;
	int64_t t116 = 975191LL;

    t116 = (((x481==x482)%x483)|x484);

    if (t116 != 2005LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x485 = 0;
	int16_t x486 = INT16_MIN;
	static int32_t x487 = INT32_MAX;
	volatile int32_t t117 = INT32_MIN;

    t117 = (((x485==x486)%x487)|x488);

    if (t117 != INT32_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x489 = INT8_MIN;
	int16_t x490 = INT16_MIN;
	uint16_t x491 = 29U;
	volatile int8_t x492 = 0;
	int32_t t118 = 748124;

    t118 = (((x489==x490)%x491)|x492);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x497 = 7586328769543637LLU;
	int32_t x498 = INT32_MAX;
	volatile int8_t x499 = 1;
	uint8_t x500 = 33U;
	int32_t t119 = -14;

    t119 = (((x497==x498)%x499)|x500);

    if (t119 != 33) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x501 = INT8_MIN;
	static int16_t x502 = -1;
	uint8_t x504 = UINT8_MAX;

    t120 = (((x501==x502)%x503)|x504);

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x505 = UINT64_MAX;
	static volatile int32_t x506 = 3036;
	int8_t x507 = -1;
	int32_t x508 = -43767193;
	int32_t t121 = -1;

    t121 = (((x505==x506)%x507)|x508);

    if (t121 != -43767193) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x509 = 49LL;
	static int64_t x510 = INT64_MIN;
	uint8_t x511 = 1U;
	uint8_t x512 = UINT8_MAX;

    t122 = (((x509==x510)%x511)|x512);

    if (t122 != 255) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x513 = 1U;
	static int32_t x514 = INT32_MAX;
	uint16_t x515 = 1U;
	uint16_t x516 = UINT16_MAX;
	int32_t t123 = -1;

    t123 = (((x513==x514)%x515)|x516);

    if (t123 != 65535) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x517 = -1;
	int32_t x518 = -1;
	static volatile int8_t x519 = -1;
	uint8_t x520 = 23U;
	volatile int32_t t124 = 22;

    t124 = (((x517==x518)%x519)|x520);

    if (t124 != 23) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x521 = INT8_MIN;
	volatile uint16_t x522 = 13467U;
	int32_t x523 = 6;
	static int64_t x524 = -1560902386LL;
	static int64_t t125 = 539590429674899LL;

    t125 = (((x521==x522)%x523)|x524);

    if (t125 != -1560902386LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x525 = INT64_MAX;
	int8_t x526 = INT8_MIN;
	volatile uint8_t x527 = 5U;
	int16_t x528 = INT16_MIN;
	volatile int32_t t126 = 34230;

    t126 = (((x525==x526)%x527)|x528);

    if (t126 != -32768) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int64_t x529 = INT64_MIN;
	int8_t x530 = INT8_MIN;
	int16_t x531 = INT16_MIN;
	uint64_t x532 = UINT64_MAX;
	uint64_t t127 = UINT64_MAX;

    t127 = (((x529==x530)%x531)|x532);

    if (t127 != UINT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x533 = UINT16_MAX;
	volatile int8_t x534 = 8;
	int32_t x535 = INT32_MIN;
	int32_t x536 = -66480684;
	volatile int32_t t128 = 1;

    t128 = (((x533==x534)%x535)|x536);

    if (t128 != -66480684) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x537 = 52530U;
	static uint64_t x538 = UINT64_MAX;
	uint16_t x539 = 1820U;
	volatile uint32_t x540 = 10087664U;
	volatile uint32_t t129 = 1020365795U;

    t129 = (((x537==x538)%x539)|x540);

    if (t129 != 10087664U) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x541 = INT8_MIN;
	int16_t x542 = INT16_MIN;
	static uint32_t t130 = 11660590U;

    t130 = (((x541==x542)%x543)|x544);

    if (t130 != 65535U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x545 = INT64_MIN;
	int64_t x546 = -1LL;
	int32_t x547 = INT32_MIN;
	volatile int32_t t131 = 2;

    t131 = (((x545==x546)%x547)|x548);

    if (t131 != 65535) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x549 = UINT8_MAX;
	static int16_t x551 = -1;
	static int32_t x552 = INT32_MAX;
	int32_t t132 = INT32_MAX;

    t132 = (((x549==x550)%x551)|x552);

    if (t132 != INT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x553 = -3727;
	volatile int64_t x554 = INT64_MAX;
	uint32_t x555 = 194U;
	int8_t x556 = -1;
	uint32_t t133 = UINT32_MAX;

    t133 = (((x553==x554)%x555)|x556);

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x560 = 6578998417395129LL;

    t134 = (((x557==x558)%x559)|x560);

    if (t134 != 6578998417395129LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x561 = INT64_MIN;
	int64_t x562 = -1LL;
	int8_t x563 = -1;
	int8_t x564 = 6;

    t135 = (((x561==x562)%x563)|x564);

    if (t135 != 6) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x565 = INT8_MIN;
	uint16_t x566 = UINT16_MAX;
	uint64_t x567 = UINT64_MAX;
	int16_t x568 = -1;
	volatile uint64_t t136 = UINT64_MAX;

    t136 = (((x565==x566)%x567)|x568);

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x570 = INT32_MAX;
	int8_t x571 = INT8_MIN;
	static int32_t t137 = INT32_MIN;

    t137 = (((x569==x570)%x571)|x572);

    if (t137 != INT32_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x573 = INT64_MIN;
	static uint16_t x575 = UINT16_MAX;
	static volatile uint8_t x576 = 15U;
	volatile int32_t t138 = 6761685;

    t138 = (((x573==x574)%x575)|x576);

    if (t138 != 15) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x577 = -10;
	int64_t t139 = 41400LL;

    t139 = (((x577==x578)%x579)|x580);

    if (t139 != 2930791LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x582 = 5;
	int64_t x583 = INT64_MAX;
	int64_t t140 = -1LL;

    t140 = (((x581==x582)%x583)|x584);

    if (t140 != -89LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x586 = 1;
	int64_t x587 = -578LL;
	uint32_t x588 = 1U;

    t141 = (((x585==x586)%x587)|x588);

    if (t141 != 1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x589 = 32958750112654530LLU;
	int16_t x590 = INT16_MAX;
	uint8_t x591 = 21U;
	int32_t x592 = INT32_MIN;
	int32_t t142 = INT32_MIN;

    t142 = (((x589==x590)%x591)|x592);

    if (t142 != INT32_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x594 = -1;
	uint32_t x596 = 99640U;
	volatile uint32_t t143 = 19656546U;

    t143 = (((x593==x594)%x595)|x596);

    if (t143 != 99640U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x597 = INT32_MIN;
	volatile int8_t x598 = INT8_MAX;
	int64_t x599 = -1LL;
	uint16_t x600 = 160U;
	int64_t t144 = -1412481665741LL;

    t144 = (((x597==x598)%x599)|x600);

    if (t144 != 160LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x602 = UINT8_MAX;
	static int8_t x603 = -1;
	volatile int32_t t145 = INT32_MIN;

    t145 = (((x601==x602)%x603)|x604);

    if (t145 != INT32_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x605 = 1LL;
	int16_t x606 = INT16_MAX;
	int8_t x607 = INT8_MAX;
	volatile int32_t t146 = 41982;

    t146 = (((x605==x606)%x607)|x608);

    if (t146 != 5) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x609 = -4953LL;
	static int16_t x610 = -1;
	static volatile int16_t x611 = 107;
	uint8_t x612 = 2U;
	int32_t t147 = 12123;

    t147 = (((x609==x610)%x611)|x612);

    if (t147 != 2) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x613 = 4253477126659644LL;
	uint32_t x614 = 17909348U;
	static int16_t x615 = -150;
	uint64_t x616 = 1729183LLU;
	volatile uint64_t t148 = 244455589951744473LLU;

    t148 = (((x613==x614)%x615)|x616);

    if (t148 != 1729183LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int8_t x617 = INT8_MIN;
	volatile uint8_t x618 = 5U;
	volatile int64_t x619 = INT64_MIN;
	uint64_t x620 = 6LLU;
	uint64_t t149 = 3336425978291331LLU;

    t149 = (((x617==x618)%x619)|x620);

    if (t149 != 6LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x621 = INT16_MIN;
	uint8_t x622 = 15U;
	static int8_t x623 = -1;
	volatile int16_t x624 = -1;
	static int32_t t150 = 1;

    t150 = (((x621==x622)%x623)|x624);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x625 = -2;
	static uint8_t x626 = 41U;
	int8_t x627 = INT8_MIN;
	volatile int8_t x628 = INT8_MIN;
	static int32_t t151 = 453763999;

    t151 = (((x625==x626)%x627)|x628);

    if (t151 != -128) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x629 = INT8_MIN;
	static uint16_t x630 = 11676U;
	volatile uint16_t x631 = UINT16_MAX;
	uint64_t x632 = UINT64_MAX;
	static uint64_t t152 = UINT64_MAX;

    t152 = (((x629==x630)%x631)|x632);

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x634 = INT64_MIN;
	int16_t x635 = 13;
	static int16_t x636 = -1;
	int32_t t153 = 7441;

    t153 = (((x633==x634)%x635)|x636);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x637 = 7;
	uint32_t x638 = UINT32_MAX;
	volatile int32_t x639 = 174975064;
	uint64_t x640 = UINT64_MAX;
	volatile uint64_t t154 = UINT64_MAX;

    t154 = (((x637==x638)%x639)|x640);

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x641 = UINT8_MAX;
	int16_t x642 = -1;
	int8_t x644 = INT8_MIN;

    t155 = (((x641==x642)%x643)|x644);

    if (t155 != -128) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x645 = 1107235468142992240LLU;
	int32_t x646 = INT32_MAX;
	static int32_t x647 = INT32_MIN;
	volatile uint8_t x648 = 1U;
	static int32_t t156 = 511199;

    t156 = (((x645==x646)%x647)|x648);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x650 = 2U;
	uint8_t x651 = 75U;
	int32_t x652 = INT32_MAX;
	static volatile int32_t t157 = INT32_MAX;

    t157 = (((x649==x650)%x651)|x652);

    if (t157 != INT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x653 = 10U;
	uint32_t x654 = 47294752U;
	int8_t x656 = -1;
	int32_t t158 = 87810;

    t158 = (((x653==x654)%x655)|x656);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x657 = -1;
	int32_t x658 = INT32_MIN;
	int8_t x660 = INT8_MIN;
	volatile int32_t t159 = -27974;

    t159 = (((x657==x658)%x659)|x660);

    if (t159 != -128) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x665 = INT64_MAX;
	static int64_t x666 = INT64_MIN;
	uint64_t x667 = UINT64_MAX;
	static uint64_t t160 = 7LLU;

    t160 = (((x665==x666)%x667)|x668);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x669 = -1;
	uint16_t x670 = UINT16_MAX;
	static uint16_t x671 = UINT16_MAX;
	int32_t x672 = INT32_MIN;
	int32_t t161 = INT32_MIN;

    t161 = (((x669==x670)%x671)|x672);

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x673 = 2;
	int8_t x674 = -1;
	uint32_t x675 = UINT32_MAX;

    t162 = (((x673==x674)%x675)|x676);

    if (t162 != 9U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x677 = INT16_MIN;
	uint32_t x679 = 57181404U;
	int32_t x680 = -1;

    t163 = (((x677==x678)%x679)|x680);

    if (t163 != UINT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x681 = 21U;
	int32_t x683 = INT32_MAX;
	int32_t t164 = 129800151;

    t164 = (((x681==x682)%x683)|x684);

    if (t164 != 155) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x685 = -1LL;
	volatile uint32_t x686 = 18962869U;
	uint8_t x688 = UINT8_MAX;
	volatile int32_t t165 = 3608;

    t165 = (((x685==x686)%x687)|x688);

    if (t165 != 255) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x689 = INT32_MIN;
	uint8_t x690 = 0U;
	static int16_t x691 = INT16_MIN;
	uint8_t x692 = 79U;
	volatile int32_t t166 = -119144612;

    t166 = (((x689==x690)%x691)|x692);

    if (t166 != 79) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x693 = INT64_MIN;
	int64_t x694 = INT64_MIN;
	int16_t x695 = -96;
	static int64_t x696 = INT64_MIN;

    t167 = (((x693==x694)%x695)|x696);

    if (t167 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x697 = -1LL;
	static uint8_t x698 = UINT8_MAX;
	uint16_t x699 = UINT16_MAX;
	static int64_t x700 = -1LL;
	volatile int64_t t168 = -31950LL;

    t168 = (((x697==x698)%x699)|x700);

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x702 = 3211281664161626LLU;
	uint16_t x704 = 194U;
	volatile uint64_t t169 = 130901127891LLU;

    t169 = (((x701==x702)%x703)|x704);

    if (t169 != 194LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x705 = 1U;
	uint32_t x706 = 7712750U;
	uint32_t x707 = 97U;
	int8_t x708 = -1;
	uint32_t t170 = UINT32_MAX;

    t170 = (((x705==x706)%x707)|x708);

    if (t170 != UINT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x709 = 2525;
	uint32_t x711 = UINT32_MAX;
	volatile int64_t x712 = -1LL;
	static int64_t t171 = 8790397898739LL;

    t171 = (((x709==x710)%x711)|x712);

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x713 = INT16_MIN;
	int64_t x716 = INT64_MIN;
	uint64_t t172 = 3667LLU;

    t172 = (((x713==x714)%x715)|x716);

    if (t172 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x717 = -1;
	int32_t x719 = INT32_MIN;
	volatile int8_t x720 = -1;
	volatile int32_t t173 = 14694884;

    t173 = (((x717==x718)%x719)|x720);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x721 = 2953512U;
	uint64_t x722 = 107709958LLU;
	int8_t x723 = INT8_MIN;
	volatile int32_t x724 = 90938778;

    t174 = (((x721==x722)%x723)|x724);

    if (t174 != 90938778) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x730 = -351976103774LL;
	static uint32_t x731 = 89803708U;
	int8_t x732 = INT8_MIN;
	static uint32_t t175 = 712U;

    t175 = (((x729==x730)%x731)|x732);

    if (t175 != 4294967168U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x734 = INT16_MAX;
	volatile int32_t x735 = 30;
	int64_t x736 = INT64_MIN;

    t176 = (((x733==x734)%x735)|x736);

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x737 = UINT64_MAX;
	uint16_t x740 = UINT16_MAX;
	int32_t t177 = -3312189;

    t177 = (((x737==x738)%x739)|x740);

    if (t177 != 65535) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x741 = 82U;
	int16_t x743 = INT16_MIN;
	int64_t x744 = -8983465581711378LL;
	int64_t t178 = -228316699191576LL;

    t178 = (((x741==x742)%x743)|x744);

    if (t178 != -8983465581711378LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x745 = INT32_MIN;
	static uint32_t x747 = 1508259U;
	volatile uint32_t t179 = 22U;

    t179 = (((x745==x746)%x747)|x748);

    if (t179 != 255U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x749 = 3U;
	static int64_t x750 = INT64_MIN;
	int8_t x751 = INT8_MAX;
	int16_t x752 = INT16_MAX;
	int32_t t180 = -49;

    t180 = (((x749==x750)%x751)|x752);

    if (t180 != 32767) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x753 = INT8_MAX;
	static volatile int16_t x754 = INT16_MAX;
	volatile int32_t x755 = -102303023;
	uint8_t x756 = 7U;
	volatile int32_t t181 = 4;

    t181 = (((x753==x754)%x755)|x756);

    if (t181 != 7) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x759 = INT64_MIN;
	static volatile int16_t x760 = -100;
	int64_t t182 = 66LL;

    t182 = (((x757==x758)%x759)|x760);

    if (t182 != -100LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x761 = -1LL;
	uint16_t x762 = UINT16_MAX;
	int64_t x763 = -1LL;
	uint32_t x764 = 55U;
	static int64_t t183 = -7442831379275LL;

    t183 = (((x761==x762)%x763)|x764);

    if (t183 != 55LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x765 = -1638637536210902LL;
	static volatile uint8_t x766 = UINT8_MAX;
	volatile uint32_t x767 = 36468587U;
	int8_t x768 = INT8_MIN;
	static uint32_t t184 = 637267U;

    t184 = (((x765==x766)%x767)|x768);

    if (t184 != 4294967168U) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x769 = INT64_MAX;
	uint16_t x770 = UINT16_MAX;
	uint16_t x771 = 3U;
	int16_t x772 = -1;
	volatile int32_t t185 = 10553;

    t185 = (((x769==x770)%x771)|x772);

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x773 = -17;
	int64_t x774 = 1630LL;
	volatile int64_t x775 = -419130995008LL;
	uint64_t x776 = UINT64_MAX;
	volatile uint64_t t186 = UINT64_MAX;

    t186 = (((x773==x774)%x775)|x776);

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x777 = 415258766U;
	int8_t x779 = INT8_MIN;
	int32_t x780 = INT32_MIN;
	volatile int32_t t187 = INT32_MIN;

    t187 = (((x777==x778)%x779)|x780);

    if (t187 != INT32_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x781 = INT32_MIN;
	volatile int8_t x782 = -1;
	int8_t x784 = INT8_MIN;

    t188 = (((x781==x782)%x783)|x784);

    if (t188 != -128) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x785 = UINT16_MAX;
	int32_t x786 = -10258102;
	int8_t x787 = INT8_MIN;
	uint32_t x788 = 61339U;
	uint32_t t189 = 247982005U;

    t189 = (((x785==x786)%x787)|x788);

    if (t189 != 61339U) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x789 = INT32_MIN;
	volatile int16_t x790 = -5749;
	int16_t x792 = 1559;
	volatile int32_t t190 = 2227;

    t190 = (((x789==x790)%x791)|x792);

    if (t190 != 1559) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x793 = -1LL;
	volatile uint64_t x794 = 154681LLU;
	int8_t x796 = 1;
	uint32_t t191 = 650U;

    t191 = (((x793==x794)%x795)|x796);

    if (t191 != 1U) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int8_t x798 = INT8_MIN;
	int16_t x799 = -1;
	int32_t x800 = -42;
	int32_t t192 = 20413063;

    t192 = (((x797==x798)%x799)|x800);

    if (t192 != -42) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int64_t x801 = INT64_MIN;
	static int8_t x802 = INT8_MIN;
	uint8_t x803 = UINT8_MAX;
	uint32_t x804 = 1U;
	volatile uint32_t t193 = 3683U;

    t193 = (((x801==x802)%x803)|x804);

    if (t193 != 1U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x805 = 5382911;
	volatile int8_t x806 = INT8_MIN;
	int32_t x807 = -1;
	uint32_t x808 = 7047792U;
	volatile uint32_t t194 = 0U;

    t194 = (((x805==x806)%x807)|x808);

    if (t194 != 7047792U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x809 = -31;
	uint64_t x810 = 4LLU;
	static int64_t x811 = INT64_MIN;
	int8_t x812 = INT8_MIN;
	volatile int64_t t195 = 7257LL;

    t195 = (((x809==x810)%x811)|x812);

    if (t195 != -128LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x813 = INT8_MIN;
	volatile int16_t x814 = 104;
	static uint16_t x815 = 31010U;
	int16_t x816 = INT16_MIN;
	volatile int32_t t196 = -67475;

    t196 = (((x813==x814)%x815)|x816);

    if (t196 != -32768) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x817 = -4;
	static int8_t x818 = INT8_MAX;
	volatile int16_t x819 = -118;
	int32_t x820 = INT32_MIN;

    t197 = (((x817==x818)%x819)|x820);

    if (t197 != INT32_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x821 = -16;
	int8_t x822 = INT8_MAX;
	volatile uint8_t x823 = 2U;
	int32_t x824 = INT32_MIN;
	volatile int32_t t198 = INT32_MIN;

    t198 = (((x821==x822)%x823)|x824);

    if (t198 != INT32_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x825 = -12;
	static uint8_t x826 = 1U;
	int32_t x827 = -1035181;
	uint32_t x828 = 32612U;
	volatile uint32_t t199 = 4994U;

    t199 = (((x825==x826)%x827)|x828);

    if (t199 != 32612U) { NG(); } else { ; }
	
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

