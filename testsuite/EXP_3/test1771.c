
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

static uint32_t x2 = 87424256U;
uint16_t x9 = 41U;
uint8_t x11 = 30U;
int16_t x19 = INT16_MAX;
int8_t x20 = INT8_MIN;
uint32_t x25 = 5622348U;
volatile int32_t t6 = -302080821;
volatile int8_t x31 = INT8_MIN;
uint64_t x34 = 3549295846838371LLU;
int64_t x36 = INT64_MAX;
volatile int32_t t8 = -5157404;
uint64_t x43 = 1497230045030LLU;
static int8_t x46 = -1;
int16_t x47 = 31;
int64_t x52 = INT64_MAX;
int32_t t12 = -265413389;
volatile int64_t x68 = -3472489203LL;
static int32_t t15 = 63410537;
int16_t x77 = INT16_MAX;
int32_t x78 = INT32_MIN;
int32_t x79 = INT32_MIN;
int32_t t17 = 2;
int32_t x81 = -9287487;
int8_t x89 = 9;
uint16_t x90 = 10533U;
static int32_t t23 = -4570;
static int8_t x117 = INT8_MAX;
uint64_t x120 = 30LLU;
int64_t x123 = INT64_MIN;
int32_t x124 = INT32_MAX;
volatile int32_t t26 = -43265548;
uint32_t x134 = 442808U;
static volatile int16_t x137 = INT16_MIN;
int16_t x140 = -1;
int32_t x149 = -1;
static volatile uint64_t x157 = UINT64_MAX;
uint16_t x158 = 2276U;
int16_t x159 = 5829;
static int64_t x160 = -1034830261257540355LL;
volatile int32_t t32 = 16;
int32_t x172 = 11944123;
int16_t x173 = 242;
int32_t t35 = -3;
volatile uint8_t x178 = 97U;
volatile int32_t t37 = -1403;
int16_t x185 = 1;
int8_t x191 = INT8_MIN;
static uint8_t x194 = UINT8_MAX;
int16_t x199 = INT16_MIN;
static volatile uint8_t x218 = 1U;
int64_t x221 = -1LL;
int32_t x223 = -1;
volatile int32_t t47 = 2618706;
int32_t x229 = -348834;
uint16_t x234 = 237U;
int16_t x246 = INT16_MAX;
int8_t x252 = -1;
uint64_t x255 = UINT64_MAX;
volatile uint64_t x256 = 1862LLU;
static uint64_t x262 = 1527688284892474LLU;
volatile int32_t t54 = 10;
int64_t x272 = INT64_MAX;
volatile int8_t x273 = 0;
uint32_t x278 = UINT32_MAX;
int16_t x282 = -96;
int32_t x297 = -1;
int32_t x307 = 216784789;
uint32_t x309 = UINT32_MAX;
static volatile int32_t t64 = -597;
uint64_t x321 = 1LLU;
int16_t x323 = 10;
int32_t t68 = -184923;
uint64_t x329 = UINT64_MAX;
int8_t x335 = -1;
int64_t x343 = -1752030698614LL;
int16_t x344 = 1613;
int32_t x357 = INT32_MIN;
uint32_t x358 = UINT32_MAX;
int32_t x360 = -1;
volatile int32_t t74 = 18;
int32_t x364 = 428290;
volatile int32_t t75 = -3;
int8_t x365 = -1;
int64_t x366 = 1LL;
static int64_t x368 = INT64_MAX;
volatile int8_t x376 = INT8_MIN;
int8_t x383 = 3;
volatile int8_t x396 = INT8_MAX;
volatile int32_t t82 = 18626;
int64_t x397 = -1LL;
volatile int32_t x400 = 141935982;
int16_t x402 = -1;
volatile int16_t x404 = INT16_MAX;
static volatile int32_t t84 = -7;
volatile int32_t x409 = -1;
volatile int8_t x418 = INT8_MIN;
int8_t x419 = -57;
int64_t x427 = -128676863133470LL;
int32_t t90 = -15411;
volatile int32_t t92 = 27184395;
volatile uint8_t x439 = 30U;
volatile int32_t t95 = 2;
uint8_t x454 = 1U;
int32_t x456 = 252;
volatile int64_t x458 = INT64_MIN;
static int16_t x460 = -4;
int64_t x461 = -1LL;
uint8_t x472 = UINT8_MAX;
int16_t x478 = INT16_MAX;
uint32_t x484 = 5474U;
volatile int32_t t103 = 477269110;
uint32_t x486 = 4424339U;
volatile int8_t x492 = INT8_MAX;
int32_t t106 = 167;
static volatile int8_t x498 = -1;
int16_t x499 = INT16_MAX;
uint16_t x500 = 16U;
volatile int8_t x502 = INT8_MIN;
int16_t x503 = INT16_MIN;
int64_t x508 = 4760986149581LL;
volatile int32_t t109 = -40572;
static volatile uint16_t x510 = 11902U;
volatile uint64_t x517 = UINT64_MAX;
static int64_t x518 = -1LL;
int32_t t112 = 34501589;
static volatile int32_t x522 = -766274;
static uint32_t x524 = 1673455074U;
volatile int32_t t114 = -7;
volatile uint16_t x530 = UINT16_MAX;
volatile int32_t x536 = -60;
int32_t x539 = INT32_MIN;
int8_t x549 = -1;
static uint16_t x550 = UINT16_MAX;
int32_t t122 = 671159;
static int16_t x563 = 3299;
volatile int16_t x568 = INT16_MIN;
static volatile int16_t x572 = INT16_MIN;
uint16_t x580 = UINT16_MAX;
int32_t t128 = 165914;
int64_t x590 = -1LL;
int64_t x591 = INT64_MAX;
int16_t x611 = 671;
volatile int32_t t133 = 15;
uint8_t x629 = UINT8_MAX;
int64_t x631 = INT64_MIN;
int8_t x634 = INT8_MIN;
uint8_t x637 = 27U;
uint16_t x639 = 2117U;
uint64_t x643 = 24530LLU;
static int32_t x646 = INT32_MIN;
int64_t x648 = -3838431397414743339LL;
static int16_t x652 = -1664;
uint32_t x656 = UINT32_MAX;
int32_t x658 = -23;
static int16_t x671 = INT16_MIN;
int8_t x673 = INT8_MAX;
int16_t x687 = INT16_MIN;
int8_t x690 = INT8_MAX;
volatile int32_t t148 = 862;
volatile uint64_t x702 = UINT64_MAX;
int32_t x706 = INT32_MIN;
volatile int32_t t153 = -93922955;
uint64_t x715 = 82668LLU;
volatile uint32_t x720 = 66923U;
static volatile int8_t x721 = 1;
volatile int8_t x724 = 55;
int16_t x727 = -5;
volatile int32_t t157 = -424513;
uint16_t x756 = UINT16_MAX;
volatile int32_t x762 = 1;
volatile uint16_t x774 = 1543U;
volatile int32_t x778 = -1;
uint32_t x782 = UINT32_MAX;
int32_t t169 = -1;
int32_t x787 = INT32_MIN;
volatile int32_t x788 = INT32_MAX;
uint8_t x790 = UINT8_MAX;
int32_t x791 = INT32_MIN;
uint16_t x797 = 59U;
int16_t x800 = INT16_MAX;
static volatile int32_t x809 = 145;
static int32_t x820 = INT32_MIN;
int32_t t177 = -1616;
volatile int16_t x823 = INT16_MIN;
int32_t x830 = INT32_MIN;
uint8_t x845 = 120U;
static int16_t x848 = 1781;
int32_t t183 = 598013749;
uint32_t x853 = 51251U;
int8_t x857 = -1;
int64_t x866 = INT64_MIN;
uint8_t x867 = 54U;
static int8_t x878 = -4;
uint32_t x879 = 104U;
static int8_t x882 = INT8_MIN;
volatile uint8_t x897 = 11U;
static int8_t x900 = -1;
static int32_t t195 = -1;
static uint16_t x901 = 28U;
int16_t x902 = -1;
uint8_t x905 = 113U;
int32_t x907 = INT32_MIN;
int16_t x908 = -3;


void f0(void) {
    	volatile uint16_t x1 = 14015U;
	volatile int8_t x3 = INT8_MIN;
	int8_t x4 = INT8_MIN;
	static int32_t t0 = 97686676;

    t0 = ((x1+x2)!=(x3<=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 0;
	uint16_t x6 = 8407U;
	int8_t x7 = -1;
	static int16_t x8 = INT16_MAX;
	volatile int32_t t1 = -3932301;

    t1 = ((x5+x6)!=(x7<=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x10 = 724U;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -6054312;

    t2 = ((x9+x10)!=(x11<=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = -1;
	int8_t x14 = INT8_MAX;
	volatile int64_t x15 = -4175213738407509769LL;
	uint8_t x16 = 1U;
	volatile int32_t t3 = 1;

    t3 = ((x13+x14)!=(x15<=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	int32_t x18 = INT32_MIN;
	int32_t t4 = -49863174;

    t4 = ((x17+x18)!=(x19<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 767097;
	int16_t x22 = -3;
	int64_t x23 = -138407LL;
	volatile int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 250348;

    t5 = ((x21+x22)!=(x23<=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = 390724295;
	uint8_t x27 = 11U;
	int8_t x28 = -1;

    t6 = ((x25+x26)!=(x27<=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	volatile int32_t x30 = -1;
	int16_t x32 = 2;
	volatile int32_t t7 = 1;

    t7 = ((x29+x30)!=(x31<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = INT32_MAX;
	int16_t x35 = -1613;

    t8 = ((x33+x34)!=(x35<=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = INT64_MAX;
	int16_t x38 = INT16_MIN;
	static int16_t x39 = -14;
	int8_t x40 = INT8_MIN;
	int32_t t9 = 28421;

    t9 = ((x37+x38)!=(x39<=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 4534940159469192054LLU;
	int16_t x42 = INT16_MIN;
	uint8_t x44 = 2U;
	volatile int32_t t10 = -1405312;

    t10 = ((x41+x42)!=(x43<=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 0;
	int16_t x48 = INT16_MIN;
	static volatile int32_t t11 = -2205805;

    t11 = ((x45+x46)!=(x47<=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x49 = -1LL;
	int8_t x50 = INT8_MIN;
	int8_t x51 = INT8_MAX;

    t12 = ((x49+x50)!=(x51<=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	int8_t x54 = -1;
	volatile int8_t x55 = 0;
	volatile uint64_t x56 = 127624993725602883LLU;
	int32_t t13 = -472;

    t13 = ((x53+x54)!=(x55<=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = INT64_MIN;
	uint32_t x58 = 3388308U;
	int16_t x59 = 0;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = -71079811;

    t14 = ((x57+x58)!=(x59<=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x65 = UINT8_MAX;
	int32_t x66 = INT32_MIN;
	uint16_t x67 = 105U;

    t15 = ((x65+x66)!=(x67<=x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x73 = UINT32_MAX;
	int16_t x74 = INT16_MIN;
	int32_t x75 = INT32_MAX;
	static volatile int64_t x76 = INT64_MIN;
	static volatile int32_t t16 = 30474;

    t16 = ((x73+x74)!=(x75<=x76));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x80 = INT16_MIN;

    t17 = ((x77+x78)!=(x79<=x80));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x82 = UINT16_MAX;
	volatile int16_t x83 = INT16_MIN;
	static int32_t x84 = INT32_MAX;
	volatile int32_t t18 = 20411279;

    t18 = ((x81+x82)!=(x83<=x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x85 = UINT64_MAX;
	uint16_t x86 = 154U;
	int16_t x87 = -2;
	uint16_t x88 = 583U;
	static int32_t t19 = 3504;

    t19 = ((x85+x86)!=(x87<=x88));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x91 = -1LL;
	uint32_t x92 = 3U;
	int32_t t20 = 87;

    t20 = ((x89+x90)!=(x91<=x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x97 = UINT64_MAX;
	volatile uint32_t x98 = 3215149U;
	int8_t x99 = -33;
	int32_t x100 = INT32_MIN;
	static volatile int32_t t21 = -24;

    t21 = ((x97+x98)!=(x99<=x100));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x101 = INT64_MIN;
	int8_t x102 = INT8_MAX;
	volatile int16_t x103 = INT16_MIN;
	volatile int32_t x104 = 7;
	int32_t t22 = 495505;

    t22 = ((x101+x102)!=(x103<=x104));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int16_t x105 = 1;
	int32_t x106 = -31866;
	uint64_t x107 = 5097926557LLU;
	int32_t x108 = 2;

    t23 = ((x105+x106)!=(x107<=x108));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x113 = INT16_MAX;
	volatile int16_t x114 = INT16_MAX;
	volatile uint16_t x115 = 7573U;
	uint16_t x116 = 18U;
	int32_t t24 = -1;

    t24 = ((x113+x114)!=(x115<=x116));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x118 = INT32_MIN;
	static uint8_t x119 = 0U;
	volatile int32_t t25 = 10317;

    t25 = ((x117+x118)!=(x119<=x120));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x121 = INT16_MIN;
	int64_t x122 = 428LL;

    t26 = ((x121+x122)!=(x123<=x124));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x129 = -6;
	int64_t x130 = -1LL;
	static volatile int32_t x131 = -1;
	static int16_t x132 = INT16_MIN;
	int32_t t27 = 20439;

    t27 = ((x129+x130)!=(x131<=x132));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x133 = INT8_MIN;
	volatile int64_t x135 = INT64_MIN;
	int8_t x136 = -11;
	static int32_t t28 = -77;

    t28 = ((x133+x134)!=(x135<=x136));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x138 = 1154U;
	int32_t x139 = -471979582;
	volatile int32_t t29 = -72282;

    t29 = ((x137+x138)!=(x139<=x140));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x141 = -26135321;
	static int32_t x142 = -1;
	int64_t x143 = INT64_MIN;
	uint16_t x144 = UINT16_MAX;
	static int32_t t30 = 1;

    t30 = ((x141+x142)!=(x143<=x144));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x150 = INT16_MAX;
	uint32_t x151 = 14U;
	uint32_t x152 = 16U;
	static int32_t t31 = 2941;

    t31 = ((x149+x150)!=(x151<=x152));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    

    t32 = ((x157+x158)!=(x159<=x160));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x161 = 3U;
	volatile uint8_t x162 = 37U;
	volatile int8_t x163 = INT8_MAX;
	volatile int64_t x164 = INT64_MIN;
	volatile int32_t t33 = 302474070;

    t33 = ((x161+x162)!=(x163<=x164));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x169 = 172LL;
	int32_t x170 = INT32_MIN;
	volatile int32_t x171 = INT32_MIN;
	static volatile int32_t t34 = 920680962;

    t34 = ((x169+x170)!=(x171<=x172));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x174 = UINT8_MAX;
	int8_t x175 = -1;
	volatile int8_t x176 = -1;

    t35 = ((x173+x174)!=(x175<=x176));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x177 = INT8_MIN;
	int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	volatile int32_t t36 = -5;

    t36 = ((x177+x178)!=(x179<=x180));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x181 = UINT64_MAX;
	static volatile int32_t x182 = INT32_MAX;
	volatile uint32_t x183 = UINT32_MAX;
	int8_t x184 = INT8_MIN;

    t37 = ((x181+x182)!=(x183<=x184));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint64_t x186 = 82903305467562LLU;
	uint32_t x187 = 1966019515U;
	int8_t x188 = -1;
	volatile int32_t t38 = -7760676;

    t38 = ((x185+x186)!=(x187<=x188));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x189 = INT16_MAX;
	int64_t x190 = INT64_MIN;
	int32_t x192 = -1;
	volatile int32_t t39 = -589;

    t39 = ((x189+x190)!=(x191<=x192));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x193 = INT16_MIN;
	volatile int64_t x195 = INT64_MAX;
	static int64_t x196 = -1LL;
	volatile int32_t t40 = 3422;

    t40 = ((x193+x194)!=(x195<=x196));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x197 = 3U;
	int16_t x198 = INT16_MAX;
	int8_t x200 = -1;
	volatile int32_t t41 = 0;

    t41 = ((x197+x198)!=(x199<=x200));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x201 = 7;
	int32_t x202 = -866385;
	uint8_t x203 = UINT8_MAX;
	int16_t x204 = INT16_MAX;
	int32_t t42 = 780053;

    t42 = ((x201+x202)!=(x203<=x204));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x205 = INT64_MIN;
	volatile int8_t x206 = INT8_MAX;
	int64_t x207 = INT64_MIN;
	volatile int32_t x208 = 0;
	volatile int32_t t43 = 22;

    t43 = ((x205+x206)!=(x207<=x208));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x213 = -1;
	volatile uint8_t x214 = UINT8_MAX;
	uint32_t x215 = UINT32_MAX;
	volatile int16_t x216 = 1090;
	int32_t t44 = 940;

    t44 = ((x213+x214)!=(x215<=x216));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x217 = INT8_MAX;
	volatile uint16_t x219 = 2228U;
	static uint16_t x220 = UINT16_MAX;
	int32_t t45 = 39881;

    t45 = ((x217+x218)!=(x219<=x220));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x222 = -1;
	uint64_t x224 = 21322369201703LLU;
	volatile int32_t t46 = 30520;

    t46 = ((x221+x222)!=(x223<=x224));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int32_t x225 = -279;
	int8_t x226 = -1;
	int16_t x227 = -12;
	uint64_t x228 = 1761LLU;

    t47 = ((x225+x226)!=(x227<=x228));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x230 = -1LL;
	static int64_t x231 = -1LL;
	int32_t x232 = -70017450;
	static int32_t t48 = -394394084;

    t48 = ((x229+x230)!=(x231<=x232));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x233 = 15U;
	int8_t x235 = -1;
	static int8_t x236 = INT8_MIN;
	int32_t t49 = -335748892;

    t49 = ((x233+x234)!=(x235<=x236));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x245 = UINT16_MAX;
	int8_t x247 = -47;
	int64_t x248 = -42438LL;
	volatile int32_t t50 = -226885248;

    t50 = ((x245+x246)!=(x247<=x248));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x249 = INT8_MIN;
	uint64_t x250 = UINT64_MAX;
	uint32_t x251 = UINT32_MAX;
	int32_t t51 = -49539;

    t51 = ((x249+x250)!=(x251<=x252));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint64_t x253 = UINT64_MAX;
	volatile uint32_t x254 = UINT32_MAX;
	volatile int32_t t52 = -14247;

    t52 = ((x253+x254)!=(x255<=x256));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x261 = -1;
	int8_t x263 = INT8_MIN;
	volatile uint32_t x264 = 3423946U;
	static volatile int32_t t53 = -6;

    t53 = ((x261+x262)!=(x263<=x264));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x265 = INT16_MIN;
	int32_t x266 = INT32_MAX;
	volatile uint32_t x267 = UINT32_MAX;
	int16_t x268 = INT16_MIN;

    t54 = ((x265+x266)!=(x267<=x268));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x269 = -1;
	int64_t x270 = 1LL;
	int32_t x271 = INT32_MIN;
	volatile int32_t t55 = -6388;

    t55 = ((x269+x270)!=(x271<=x272));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x274 = INT8_MIN;
	uint16_t x275 = 18U;
	uint64_t x276 = 998909864136822798LLU;
	static volatile int32_t t56 = 9187;

    t56 = ((x273+x274)!=(x275<=x276));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x277 = -3;
	uint16_t x279 = 168U;
	uint64_t x280 = UINT64_MAX;
	static volatile int32_t t57 = -770446;

    t57 = ((x277+x278)!=(x279<=x280));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x281 = 2409U;
	int8_t x283 = -1;
	volatile uint64_t x284 = UINT64_MAX;
	volatile int32_t t58 = 900951;

    t58 = ((x281+x282)!=(x283<=x284));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x289 = 1U;
	int64_t x290 = INT64_MIN;
	uint32_t x291 = UINT32_MAX;
	int8_t x292 = INT8_MIN;
	int32_t t59 = 3804703;

    t59 = ((x289+x290)!=(x291<=x292));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x293 = INT16_MIN;
	static uint32_t x294 = 44U;
	uint32_t x295 = 232184U;
	static int32_t x296 = -11167901;
	int32_t t60 = -6;

    t60 = ((x293+x294)!=(x295<=x296));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x298 = INT8_MAX;
	volatile int32_t x299 = -32123559;
	int32_t x300 = INT32_MAX;
	int32_t t61 = 29;

    t61 = ((x297+x298)!=(x299<=x300));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x301 = INT32_MIN;
	int32_t x302 = INT32_MAX;
	volatile uint64_t x303 = 66502246875LLU;
	int64_t x304 = -29LL;
	volatile int32_t t62 = 792;

    t62 = ((x301+x302)!=(x303<=x304));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x305 = -14607LL;
	int16_t x306 = -1;
	int64_t x308 = INT64_MIN;
	int32_t t63 = -840215019;

    t63 = ((x305+x306)!=(x307<=x308));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x310 = -1LL;
	int16_t x311 = -1;
	static int8_t x312 = -1;

    t64 = ((x309+x310)!=(x311<=x312));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x313 = INT64_MIN;
	uint8_t x314 = UINT8_MAX;
	static uint64_t x315 = 25811146LLU;
	int32_t x316 = INT32_MIN;
	static int32_t t65 = 1495;

    t65 = ((x313+x314)!=(x315<=x316));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x317 = UINT64_MAX;
	uint64_t x318 = 2LLU;
	int64_t x319 = -1LL;
	int64_t x320 = -1LL;
	int32_t t66 = 0;

    t66 = ((x317+x318)!=(x319<=x320));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x322 = UINT32_MAX;
	int64_t x324 = 2372854LL;
	int32_t t67 = -1263764;

    t67 = ((x321+x322)!=(x323<=x324));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x325 = -18;
	volatile int16_t x326 = INT16_MIN;
	static int64_t x327 = -1LL;
	uint8_t x328 = 2U;

    t68 = ((x325+x326)!=(x327<=x328));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x330 = 12538U;
	volatile int32_t x331 = -1;
	int16_t x332 = -1;
	int32_t t69 = 2;

    t69 = ((x329+x330)!=(x331<=x332));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x333 = UINT64_MAX;
	int8_t x334 = -17;
	int16_t x336 = 12;
	int32_t t70 = -2224908;

    t70 = ((x333+x334)!=(x335<=x336));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x337 = INT8_MIN;
	static volatile uint32_t x338 = 3U;
	int64_t x339 = -127447510691814LL;
	int64_t x340 = INT64_MIN;
	volatile int32_t t71 = 13;

    t71 = ((x337+x338)!=(x339<=x340));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x341 = 2U;
	int32_t x342 = -1;
	volatile int32_t t72 = -1;

    t72 = ((x341+x342)!=(x343<=x344));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x349 = INT8_MAX;
	int8_t x350 = INT8_MIN;
	uint16_t x351 = 452U;
	uint32_t x352 = 63552U;
	static volatile int32_t t73 = -111807072;

    t73 = ((x349+x350)!=(x351<=x352));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x359 = -237502;

    t74 = ((x357+x358)!=(x359<=x360));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x361 = 392833790LL;
	volatile uint32_t x362 = 392U;
	int32_t x363 = -1;

    t75 = ((x361+x362)!=(x363<=x364));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x367 = 28895U;
	static volatile int32_t t76 = -29;

    t76 = ((x365+x366)!=(x367<=x368));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x369 = INT32_MIN;
	int32_t x370 = 458;
	int64_t x371 = -1LL;
	uint8_t x372 = 22U;
	int32_t t77 = 797;

    t77 = ((x369+x370)!=(x371<=x372));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x373 = 11U;
	volatile int8_t x374 = 25;
	uint16_t x375 = 536U;
	volatile int32_t t78 = -2817182;

    t78 = ((x373+x374)!=(x375<=x376));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x377 = 681555LLU;
	volatile int64_t x378 = -21499046433LL;
	static uint16_t x379 = 4119U;
	volatile uint64_t x380 = 4981LLU;
	volatile int32_t t79 = 0;

    t79 = ((x377+x378)!=(x379<=x380));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x381 = 273U;
	int8_t x382 = INT8_MIN;
	int16_t x384 = -1;
	volatile int32_t t80 = -129487;

    t80 = ((x381+x382)!=(x383<=x384));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x389 = 11;
	static volatile uint16_t x390 = 182U;
	volatile uint32_t x391 = 64677U;
	int8_t x392 = INT8_MAX;
	int32_t t81 = -232413;

    t81 = ((x389+x390)!=(x391<=x392));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x393 = INT32_MAX;
	int32_t x394 = INT32_MIN;
	static volatile int64_t x395 = INT64_MIN;

    t82 = ((x393+x394)!=(x395<=x396));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x398 = 1;
	volatile int8_t x399 = INT8_MAX;
	volatile int32_t t83 = -20;

    t83 = ((x397+x398)!=(x399<=x400));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x401 = INT64_MAX;
	uint64_t x403 = 241832695311LLU;

    t84 = ((x401+x402)!=(x403<=x404));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x405 = INT8_MAX;
	static volatile uint32_t x406 = 4743U;
	int32_t x407 = -1;
	uint32_t x408 = UINT32_MAX;
	volatile int32_t t85 = 6173;

    t85 = ((x405+x406)!=(x407<=x408));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x410 = 14U;
	static volatile int16_t x411 = INT16_MIN;
	static int16_t x412 = -1;
	static int32_t t86 = 0;

    t86 = ((x409+x410)!=(x411<=x412));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x413 = INT64_MAX;
	static int64_t x414 = INT64_MIN;
	volatile uint8_t x415 = 3U;
	static int16_t x416 = 3945;
	static int32_t t87 = 33;

    t87 = ((x413+x414)!=(x415<=x416));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x417 = 6136LL;
	static volatile int16_t x420 = INT16_MAX;
	int32_t t88 = -92;

    t88 = ((x417+x418)!=(x419<=x420));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x421 = INT8_MIN;
	int32_t x422 = 206916;
	int32_t x423 = INT32_MIN;
	uint16_t x424 = 892U;
	int32_t t89 = 583;

    t89 = ((x421+x422)!=(x423<=x424));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x425 = INT64_MAX;
	static uint64_t x426 = 117906180427819LLU;
	volatile int32_t x428 = 2;

    t90 = ((x425+x426)!=(x427<=x428));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x429 = 789U;
	static int32_t x430 = INT32_MIN;
	int8_t x431 = INT8_MAX;
	volatile int64_t x432 = INT64_MIN;
	static int32_t t91 = 14;

    t91 = ((x429+x430)!=(x431<=x432));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x433 = INT32_MIN;
	uint32_t x434 = UINT32_MAX;
	int16_t x435 = INT16_MIN;
	static volatile int32_t x436 = 0;

    t92 = ((x433+x434)!=(x435<=x436));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x437 = INT32_MIN;
	static uint16_t x438 = 85U;
	int32_t x440 = INT32_MIN;
	volatile int32_t t93 = -891633029;

    t93 = ((x437+x438)!=(x439<=x440));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x441 = 230690336U;
	int64_t x442 = INT64_MIN;
	int16_t x443 = INT16_MAX;
	static int16_t x444 = INT16_MIN;
	volatile int32_t t94 = -1;

    t94 = ((x441+x442)!=(x443<=x444));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x445 = INT64_MAX;
	int32_t x446 = INT32_MIN;
	uint16_t x447 = UINT16_MAX;
	static uint8_t x448 = 6U;

    t95 = ((x445+x446)!=(x447<=x448));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x453 = INT16_MIN;
	static volatile int32_t x455 = INT32_MIN;
	static volatile int32_t t96 = 262071;

    t96 = ((x453+x454)!=(x455<=x456));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x457 = 11U;
	int32_t x459 = INT32_MIN;
	int32_t t97 = -141624408;

    t97 = ((x457+x458)!=(x459<=x460));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x462 = INT16_MAX;
	int64_t x463 = 121374032332LL;
	int64_t x464 = -136LL;
	volatile int32_t t98 = 130;

    t98 = ((x461+x462)!=(x463<=x464));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x465 = INT64_MAX;
	int8_t x466 = -24;
	int16_t x467 = INT16_MAX;
	int64_t x468 = INT64_MIN;
	int32_t t99 = -6;

    t99 = ((x465+x466)!=(x467<=x468));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x469 = -655946LL;
	int16_t x470 = INT16_MIN;
	uint32_t x471 = 9416U;
	int32_t t100 = 63316757;

    t100 = ((x469+x470)!=(x471<=x472));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x473 = 214U;
	uint8_t x474 = UINT8_MAX;
	uint32_t x475 = 249U;
	int16_t x476 = INT16_MIN;
	int32_t t101 = 4721;

    t101 = ((x473+x474)!=(x475<=x476));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x477 = INT32_MIN;
	static uint8_t x479 = 4U;
	uint64_t x480 = 61LLU;
	volatile int32_t t102 = 1107496;

    t102 = ((x477+x478)!=(x479<=x480));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x481 = 1521;
	static int16_t x482 = -48;
	static int32_t x483 = INT32_MIN;

    t103 = ((x481+x482)!=(x483<=x484));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x485 = 3197215772887724LL;
	int8_t x487 = -3;
	uint32_t x488 = 1829200546U;
	volatile int32_t t104 = 67678;

    t104 = ((x485+x486)!=(x487<=x488));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x489 = 441745U;
	int64_t x490 = 5269734LL;
	static int64_t x491 = -16169829193965740LL;
	static int32_t t105 = 0;

    t105 = ((x489+x490)!=(x491<=x492));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x493 = UINT8_MAX;
	int16_t x494 = -1;
	volatile uint32_t x495 = 33087U;
	static volatile uint16_t x496 = UINT16_MAX;

    t106 = ((x493+x494)!=(x495<=x496));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x497 = -1LL;
	int32_t t107 = 813122;

    t107 = ((x497+x498)!=(x499<=x500));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x501 = 4;
	int16_t x504 = -1;
	volatile int32_t t108 = 919103;

    t108 = ((x501+x502)!=(x503<=x504));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x505 = 106176U;
	volatile uint64_t x506 = UINT64_MAX;
	int64_t x507 = -7945076907881544LL;

    t109 = ((x505+x506)!=(x507<=x508));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x509 = 8097U;
	int32_t x511 = INT32_MAX;
	volatile uint64_t x512 = 623815157225221278LLU;
	static int32_t t110 = -115;

    t110 = ((x509+x510)!=(x511<=x512));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x513 = 21;
	uint32_t x514 = 669930657U;
	uint64_t x515 = UINT64_MAX;
	static volatile uint32_t x516 = UINT32_MAX;
	int32_t t111 = -2406688;

    t111 = ((x513+x514)!=(x515<=x516));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x519 = UINT16_MAX;
	int8_t x520 = INT8_MIN;

    t112 = ((x517+x518)!=(x519<=x520));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x521 = INT8_MIN;
	int8_t x523 = INT8_MAX;
	volatile int32_t t113 = 0;

    t113 = ((x521+x522)!=(x523<=x524));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x525 = 30734487354206923LLU;
	volatile int32_t x526 = INT32_MIN;
	int32_t x527 = INT32_MIN;
	uint16_t x528 = 243U;

    t114 = ((x525+x526)!=(x527<=x528));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x529 = -2;
	uint8_t x531 = UINT8_MAX;
	int16_t x532 = INT16_MAX;
	volatile int32_t t115 = 29;

    t115 = ((x529+x530)!=(x531<=x532));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x533 = -3852;
	volatile int16_t x534 = INT16_MAX;
	volatile int64_t x535 = INT64_MAX;
	volatile int32_t t116 = -147;

    t116 = ((x533+x534)!=(x535<=x536));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x537 = 146U;
	uint64_t x538 = 665964817014730LLU;
	int8_t x540 = INT8_MIN;
	int32_t t117 = 581649;

    t117 = ((x537+x538)!=(x539<=x540));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x541 = UINT32_MAX;
	int16_t x542 = INT16_MIN;
	int32_t x543 = INT32_MIN;
	int16_t x544 = INT16_MIN;
	volatile int32_t t118 = -32919193;

    t118 = ((x541+x542)!=(x543<=x544));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x545 = INT32_MAX;
	int64_t x546 = -423764400LL;
	int8_t x547 = INT8_MIN;
	int32_t x548 = 135420;
	int32_t t119 = -55045;

    t119 = ((x545+x546)!=(x547<=x548));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x551 = -5862;
	int32_t x552 = INT32_MAX;
	volatile int32_t t120 = 2558261;

    t120 = ((x549+x550)!=(x551<=x552));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x553 = INT16_MAX;
	volatile uint16_t x554 = 442U;
	int32_t x555 = INT32_MIN;
	int16_t x556 = INT16_MIN;
	volatile int32_t t121 = 122517;

    t121 = ((x553+x554)!=(x555<=x556));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x557 = 1067LLU;
	int32_t x558 = INT32_MAX;
	uint32_t x559 = UINT32_MAX;
	static int8_t x560 = -14;

    t122 = ((x557+x558)!=(x559<=x560));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x561 = 3928086;
	static uint64_t x562 = 1503045LLU;
	static volatile int16_t x564 = INT16_MIN;
	static int32_t t123 = -2;

    t123 = ((x561+x562)!=(x563<=x564));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x565 = -1;
	int16_t x566 = -1;
	uint32_t x567 = 2U;
	int32_t t124 = 3237;

    t124 = ((x565+x566)!=(x567<=x568));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x569 = INT8_MIN;
	static int64_t x570 = 4481LL;
	int8_t x571 = INT8_MIN;
	int32_t t125 = -8856128;

    t125 = ((x569+x570)!=(x571<=x572));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x573 = 47456U;
	static int32_t x574 = INT32_MAX;
	int32_t x575 = -1;
	int64_t x576 = -1LL;
	int32_t t126 = -6;

    t126 = ((x573+x574)!=(x575<=x576));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x577 = INT32_MAX;
	volatile int16_t x578 = INT16_MIN;
	int8_t x579 = INT8_MIN;
	volatile int32_t t127 = -213;

    t127 = ((x577+x578)!=(x579<=x580));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x581 = -239163957927405623LL;
	int8_t x582 = INT8_MIN;
	int32_t x583 = INT32_MIN;
	uint16_t x584 = 1U;

    t128 = ((x581+x582)!=(x583<=x584));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x585 = -1LL;
	uint64_t x586 = 33504158657842330LLU;
	int16_t x587 = INT16_MIN;
	volatile int64_t x588 = INT64_MIN;
	volatile int32_t t129 = -31183;

    t129 = ((x585+x586)!=(x587<=x588));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x589 = INT16_MIN;
	static uint32_t x592 = UINT32_MAX;
	volatile int32_t t130 = 1050;

    t130 = ((x589+x590)!=(x591<=x592));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x593 = -363602256065LL;
	int8_t x594 = -1;
	int16_t x595 = INT16_MIN;
	int32_t x596 = -106;
	volatile int32_t t131 = 282;

    t131 = ((x593+x594)!=(x595<=x596));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x605 = 2;
	int8_t x606 = INT8_MIN;
	uint64_t x607 = UINT64_MAX;
	int16_t x608 = INT16_MAX;
	int32_t t132 = 15;

    t132 = ((x605+x606)!=(x607<=x608));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x609 = INT32_MIN;
	int64_t x610 = INT64_MAX;
	uint32_t x612 = 310867U;

    t133 = ((x609+x610)!=(x611<=x612));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x617 = 14734;
	uint16_t x618 = UINT16_MAX;
	uint8_t x619 = 1U;
	int8_t x620 = 1;
	volatile int32_t t134 = 27;

    t134 = ((x617+x618)!=(x619<=x620));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x621 = 4950611403643LLU;
	static volatile int16_t x622 = -1;
	volatile int64_t x623 = -1LL;
	static volatile int64_t x624 = INT64_MAX;
	int32_t t135 = 1;

    t135 = ((x621+x622)!=(x623<=x624));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x630 = INT32_MIN;
	int8_t x632 = INT8_MIN;
	int32_t t136 = 4207716;

    t136 = ((x629+x630)!=(x631<=x632));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x633 = -1;
	static uint16_t x635 = 4519U;
	uint8_t x636 = UINT8_MAX;
	volatile int32_t t137 = 149927;

    t137 = ((x633+x634)!=(x635<=x636));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x638 = -1;
	int8_t x640 = -1;
	int32_t t138 = 133833587;

    t138 = ((x637+x638)!=(x639<=x640));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x641 = -12;
	int64_t x642 = INT64_MAX;
	int16_t x644 = -1553;
	int32_t t139 = 1076;

    t139 = ((x641+x642)!=(x643<=x644));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x645 = 120211971LLU;
	volatile int16_t x647 = -5;
	static int32_t t140 = 121;

    t140 = ((x645+x646)!=(x647<=x648));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x649 = 2748987;
	int16_t x650 = INT16_MIN;
	volatile int64_t x651 = -1LL;
	volatile int32_t t141 = -482065034;

    t141 = ((x649+x650)!=(x651<=x652));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x653 = -25;
	int16_t x654 = INT16_MIN;
	uint16_t x655 = 2352U;
	int32_t t142 = -976192574;

    t142 = ((x653+x654)!=(x655<=x656));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x657 = 99U;
	volatile uint32_t x659 = 255857986U;
	int32_t x660 = INT32_MIN;
	static int32_t t143 = 1555;

    t143 = ((x657+x658)!=(x659<=x660));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x669 = INT16_MAX;
	static int64_t x670 = -1LL;
	int16_t x672 = INT16_MIN;
	volatile int32_t t144 = -1637;

    t144 = ((x669+x670)!=(x671<=x672));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x674 = INT8_MIN;
	int64_t x675 = -3237645594534479365LL;
	volatile uint16_t x676 = UINT16_MAX;
	int32_t t145 = 47971745;

    t145 = ((x673+x674)!=(x675<=x676));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x677 = -8699LL;
	int16_t x678 = -1;
	static uint8_t x679 = 112U;
	int64_t x680 = INT64_MIN;
	int32_t t146 = -34648;

    t146 = ((x677+x678)!=(x679<=x680));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x685 = 1;
	int8_t x686 = 22;
	static volatile int16_t x688 = INT16_MAX;
	int32_t t147 = -7;

    t147 = ((x685+x686)!=(x687<=x688));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x689 = INT32_MIN;
	static int16_t x691 = -1;
	static int32_t x692 = INT32_MIN;

    t148 = ((x689+x690)!=(x691<=x692));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x693 = 90349372313LLU;
	int16_t x694 = -4;
	volatile int64_t x695 = INT64_MIN;
	int8_t x696 = INT8_MAX;
	int32_t t149 = 499;

    t149 = ((x693+x694)!=(x695<=x696));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x697 = -87685050;
	int32_t x698 = -1;
	int16_t x699 = 30;
	volatile int64_t x700 = -1LL;
	int32_t t150 = -20;

    t150 = ((x697+x698)!=(x699<=x700));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x701 = UINT16_MAX;
	volatile int32_t x703 = INT32_MIN;
	volatile uint16_t x704 = 1151U;
	volatile int32_t t151 = -16;

    t151 = ((x701+x702)!=(x703<=x704));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x705 = 881U;
	int16_t x707 = 774;
	uint16_t x708 = UINT16_MAX;
	int32_t t152 = 20844254;

    t152 = ((x705+x706)!=(x707<=x708));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x709 = -1;
	static volatile uint8_t x710 = 0U;
	int32_t x711 = -27;
	int32_t x712 = INT32_MAX;

    t153 = ((x709+x710)!=(x711<=x712));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x713 = INT8_MIN;
	volatile int8_t x714 = INT8_MIN;
	int8_t x716 = -1;
	volatile int32_t t154 = 12;

    t154 = ((x713+x714)!=(x715<=x716));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x717 = INT16_MAX;
	int16_t x718 = INT16_MAX;
	uint32_t x719 = 98467U;
	int32_t t155 = -5;

    t155 = ((x717+x718)!=(x719<=x720));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x722 = 28436U;
	int8_t x723 = INT8_MIN;
	int32_t t156 = -416;

    t156 = ((x721+x722)!=(x723<=x724));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x725 = 2746811272044636964LLU;
	volatile int32_t x726 = -912408060;
	int32_t x728 = INT32_MIN;

    t157 = ((x725+x726)!=(x727<=x728));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x729 = UINT64_MAX;
	volatile int32_t x730 = INT32_MIN;
	int16_t x731 = INT16_MAX;
	static int64_t x732 = INT64_MIN;
	int32_t t158 = -1;

    t158 = ((x729+x730)!=(x731<=x732));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x733 = INT32_MIN;
	static uint8_t x734 = 1U;
	int16_t x735 = INT16_MIN;
	uint16_t x736 = 454U;
	volatile int32_t t159 = 115214;

    t159 = ((x733+x734)!=(x735<=x736));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x741 = INT16_MIN;
	int16_t x742 = INT16_MIN;
	uint8_t x743 = 3U;
	int32_t x744 = INT32_MIN;
	volatile int32_t t160 = -3458078;

    t160 = ((x741+x742)!=(x743<=x744));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x745 = INT16_MAX;
	volatile int64_t x746 = -1865621775150785519LL;
	volatile int64_t x747 = INT64_MIN;
	uint16_t x748 = UINT16_MAX;
	volatile int32_t t161 = 3;

    t161 = ((x745+x746)!=(x747<=x748));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x753 = INT16_MIN;
	uint8_t x754 = 0U;
	volatile int8_t x755 = 5;
	int32_t t162 = 13220341;

    t162 = ((x753+x754)!=(x755<=x756));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x757 = INT8_MIN;
	volatile int32_t x758 = 455;
	uint32_t x759 = 464780404U;
	int8_t x760 = INT8_MIN;
	volatile int32_t t163 = -57392039;

    t163 = ((x757+x758)!=(x759<=x760));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x761 = INT32_MIN;
	int16_t x763 = INT16_MIN;
	int32_t x764 = -6632;
	volatile int32_t t164 = -25;

    t164 = ((x761+x762)!=(x763<=x764));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x765 = 2U;
	uint32_t x766 = 63704315U;
	static int16_t x767 = INT16_MIN;
	static int16_t x768 = INT16_MIN;
	int32_t t165 = -728724145;

    t165 = ((x765+x766)!=(x767<=x768));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x769 = -2777LL;
	uint64_t x770 = 35LLU;
	static uint64_t x771 = 70466646LLU;
	int64_t x772 = INT64_MIN;
	int32_t t166 = -76;

    t166 = ((x769+x770)!=(x771<=x772));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x773 = 790LLU;
	int64_t x775 = 124054987123594LL;
	static int64_t x776 = INT64_MAX;
	int32_t t167 = 157102;

    t167 = ((x773+x774)!=(x775<=x776));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x777 = -1;
	int8_t x779 = INT8_MAX;
	volatile int8_t x780 = INT8_MAX;
	volatile int32_t t168 = 276645;

    t168 = ((x777+x778)!=(x779<=x780));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint8_t x781 = 7U;
	uint16_t x783 = 24009U;
	uint8_t x784 = 38U;

    t169 = ((x781+x782)!=(x783<=x784));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x785 = 17U;
	int8_t x786 = -1;
	volatile int32_t t170 = 235985;

    t170 = ((x785+x786)!=(x787<=x788));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x789 = INT32_MIN;
	static int64_t x792 = INT64_MIN;
	static int32_t t171 = -3;

    t171 = ((x789+x790)!=(x791<=x792));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x793 = 13493342615229241LLU;
	int32_t x794 = -166;
	volatile uint64_t x795 = UINT64_MAX;
	int8_t x796 = INT8_MIN;
	volatile int32_t t172 = 3425;

    t172 = ((x793+x794)!=(x795<=x796));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x798 = UINT64_MAX;
	uint16_t x799 = 363U;
	int32_t t173 = -14434839;

    t173 = ((x797+x798)!=(x799<=x800));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x805 = -3;
	uint64_t x806 = UINT64_MAX;
	int32_t x807 = INT32_MAX;
	int8_t x808 = -1;
	static int32_t t174 = 19645;

    t174 = ((x805+x806)!=(x807<=x808));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x810 = UINT16_MAX;
	static int32_t x811 = -1;
	int64_t x812 = -1LL;
	volatile int32_t t175 = 51;

    t175 = ((x809+x810)!=(x811<=x812));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x813 = -28;
	uint16_t x814 = 2918U;
	int32_t x815 = INT32_MIN;
	volatile int32_t x816 = -1;
	int32_t t176 = 0;

    t176 = ((x813+x814)!=(x815<=x816));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x817 = 220668U;
	uint16_t x818 = 3U;
	int8_t x819 = -1;

    t177 = ((x817+x818)!=(x819<=x820));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x821 = 19U;
	int16_t x822 = INT16_MIN;
	int8_t x824 = INT8_MIN;
	int32_t t178 = -25375;

    t178 = ((x821+x822)!=(x823<=x824));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x825 = 0U;
	int32_t x826 = INT32_MIN;
	int16_t x827 = INT16_MIN;
	uint64_t x828 = 1065514917LLU;
	volatile int32_t t179 = -1;

    t179 = ((x825+x826)!=(x827<=x828));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x829 = 39;
	volatile int64_t x831 = 119LL;
	uint32_t x832 = 22U;
	static int32_t t180 = 50372652;

    t180 = ((x829+x830)!=(x831<=x832));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x833 = -1;
	static uint32_t x834 = 17735U;
	int16_t x835 = INT16_MAX;
	uint32_t x836 = 5U;
	volatile int32_t t181 = 3;

    t181 = ((x833+x834)!=(x835<=x836));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x837 = -1;
	uint16_t x838 = 16U;
	int32_t x839 = INT32_MIN;
	static uint32_t x840 = UINT32_MAX;
	static volatile int32_t t182 = 88;

    t182 = ((x837+x838)!=(x839<=x840));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x846 = INT64_MIN;
	int8_t x847 = INT8_MAX;

    t183 = ((x845+x846)!=(x847<=x848));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x849 = UINT64_MAX;
	int64_t x850 = INT64_MAX;
	uint8_t x851 = UINT8_MAX;
	static uint32_t x852 = 414403874U;
	static int32_t t184 = -267051;

    t184 = ((x849+x850)!=(x851<=x852));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x854 = UINT64_MAX;
	int8_t x855 = INT8_MIN;
	int32_t x856 = -470;
	int32_t t185 = 22729;

    t185 = ((x853+x854)!=(x855<=x856));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x858 = -7LL;
	uint32_t x859 = UINT32_MAX;
	static int32_t x860 = INT32_MAX;
	volatile int32_t t186 = 502;

    t186 = ((x857+x858)!=(x859<=x860));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x865 = 64902708359427LLU;
	int8_t x868 = 0;
	int32_t t187 = 880770;

    t187 = ((x865+x866)!=(x867<=x868));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x869 = -1;
	uint8_t x870 = UINT8_MAX;
	int32_t x871 = INT32_MIN;
	int8_t x872 = INT8_MAX;
	static volatile int32_t t188 = 125;

    t188 = ((x869+x870)!=(x871<=x872));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x873 = INT8_MIN;
	uint16_t x874 = 12668U;
	uint8_t x875 = 98U;
	int16_t x876 = INT16_MIN;
	int32_t t189 = -1;

    t189 = ((x873+x874)!=(x875<=x876));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x877 = 122U;
	int64_t x880 = -33509673962611LL;
	int32_t t190 = -675514340;

    t190 = ((x877+x878)!=(x879<=x880));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x881 = -2;
	uint16_t x883 = 46U;
	int32_t x884 = INT32_MAX;
	static int32_t t191 = -41;

    t191 = ((x881+x882)!=(x883<=x884));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x885 = UINT32_MAX;
	volatile uint16_t x886 = 768U;
	volatile int8_t x887 = -1;
	uint32_t x888 = 29U;
	volatile int32_t t192 = -8474980;

    t192 = ((x885+x886)!=(x887<=x888));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x889 = -490;
	uint32_t x890 = UINT32_MAX;
	static int8_t x891 = 1;
	static int64_t x892 = INT64_MAX;
	volatile int32_t t193 = -8219;

    t193 = ((x889+x890)!=(x891<=x892));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x893 = 3U;
	static int64_t x894 = -3114130545900LL;
	static int8_t x895 = INT8_MAX;
	uint16_t x896 = 22906U;
	volatile int32_t t194 = 1921;

    t194 = ((x893+x894)!=(x895<=x896));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x898 = INT64_MIN;
	static volatile int64_t x899 = INT64_MAX;

    t195 = ((x897+x898)!=(x899<=x900));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x903 = INT16_MAX;
	uint32_t x904 = 31176818U;
	volatile int32_t t196 = 15;

    t196 = ((x901+x902)!=(x903<=x904));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x906 = INT8_MIN;
	volatile int32_t t197 = 7622;

    t197 = ((x905+x906)!=(x907<=x908));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x909 = -81041094178093LL;
	uint8_t x910 = UINT8_MAX;
	static volatile int32_t x911 = -7432541;
	int64_t x912 = INT64_MIN;
	volatile int32_t t198 = 1405;

    t198 = ((x909+x910)!=(x911<=x912));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x913 = UINT16_MAX;
	uint32_t x914 = 41775258U;
	uint32_t x915 = 339917U;
	int16_t x916 = INT16_MIN;
	int32_t t199 = 25;

    t199 = ((x913+x914)!=(x915<=x916));

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

