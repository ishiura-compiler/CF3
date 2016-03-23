
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

static int64_t x1 = INT64_MIN;
static int16_t x2 = INT16_MAX;
int8_t x3 = INT8_MIN;
int64_t x10 = INT64_MAX;
int32_t x13 = INT32_MIN;
int32_t x14 = 122501765;
uint8_t x16 = 0U;
volatile int32_t t4 = -2041384;
static volatile int32_t x21 = -1;
int64_t x25 = -1LL;
uint16_t x28 = 1746U;
uint64_t x35 = 4016LLU;
uint16_t x37 = 137U;
int32_t x39 = INT32_MIN;
static int32_t x45 = -4904714;
uint32_t x46 = UINT32_MAX;
int16_t x52 = -1;
int32_t t12 = 8;
int32_t x62 = 116;
int32_t x75 = 18302;
int32_t x76 = 1;
static volatile uint64_t x84 = 101109LLU;
uint32_t x86 = UINT32_MAX;
uint16_t x87 = 8620U;
static int32_t x88 = INT32_MIN;
int16_t x89 = -10;
int16_t x93 = INT16_MAX;
volatile int16_t x95 = INT16_MIN;
uint32_t x97 = 1397189U;
static volatile int32_t x98 = INT32_MAX;
volatile int32_t t24 = 2278;
volatile int8_t x110 = INT8_MIN;
int64_t x115 = -68LL;
volatile int32_t x119 = -1;
volatile uint32_t x122 = 0U;
volatile int64_t x123 = 110LL;
volatile int64_t x130 = -7129325979664LL;
int32_t x132 = 97;
uint32_t x135 = UINT32_MAX;
uint64_t x142 = UINT64_MAX;
static uint16_t x144 = UINT16_MAX;
static int32_t t33 = -2295933;
int16_t x147 = INT16_MAX;
volatile int32_t t34 = -126;
uint64_t x151 = 5933279069LLU;
int32_t x152 = INT32_MIN;
volatile uint64_t t35 = 24639634988197684LLU;
volatile int16_t x158 = INT16_MIN;
volatile uint64_t t37 = 990094903395757LLU;
int16_t x161 = -1;
int32_t x168 = -10;
int64_t x180 = -51175LL;
int32_t x190 = -2;
int16_t x191 = INT16_MIN;
int8_t x196 = INT8_MAX;
volatile int64_t x197 = -1LL;
volatile int64_t t47 = -57253372106LL;
uint64_t x204 = 31654334662942023LLU;
uint64_t t48 = 196980LLU;
volatile int64_t x209 = -1LL;
int64_t x222 = INT64_MIN;
volatile int8_t x223 = -1;
int32_t t53 = 20;
static volatile int64_t x235 = INT64_MAX;
volatile int32_t x238 = -1;
static int32_t x240 = -239;
volatile int8_t x245 = -9;
uint32_t x248 = 58678U;
uint32_t t58 = 4U;
volatile int64_t t59 = 497046940194LL;
static int64_t x268 = INT64_MIN;
int32_t x275 = 78221;
uint16_t x276 = UINT16_MAX;
volatile uint64_t t65 = UINT64_MAX;
static volatile uint64_t x289 = UINT64_MAX;
uint64_t x290 = 16LLU;
int16_t x296 = INT16_MAX;
volatile int32_t t69 = -2085271;
int16_t x299 = -1;
static uint8_t x303 = UINT8_MAX;
static volatile int32_t x305 = 858032;
int32_t x306 = 6257;
volatile int8_t x307 = 0;
int8_t x310 = INT8_MIN;
uint64_t t73 = 0LLU;
uint16_t x318 = UINT16_MAX;
uint8_t x321 = UINT8_MAX;
int16_t x323 = -7;
uint8_t x328 = UINT8_MAX;
int8_t x329 = INT8_MIN;
uint32_t x330 = 29U;
volatile uint32_t x337 = 31241796U;
static uint8_t x346 = 54U;
volatile int64_t t82 = -377935303575571101LL;
uint64_t t84 = 354737186LLU;
volatile int16_t x357 = 104;
int32_t x360 = 3700;
int32_t t85 = 18215242;
uint32_t x367 = 30160015U;
int8_t x372 = -30;
static volatile int8_t x376 = -9;
static uint16_t x377 = 6531U;
static volatile int64_t t92 = -584207098211LL;
static int64_t x391 = INT64_MAX;
uint64_t x406 = 24051463376003152LLU;
static volatile int32_t t97 = -16285044;
int8_t x414 = 0;
static uint32_t x425 = 1U;
int32_t x430 = INT32_MIN;
static int8_t x434 = INT8_MIN;
int16_t x435 = -1;
static int32_t x437 = INT32_MAX;
int16_t x438 = 293;
uint16_t x447 = UINT16_MAX;
static volatile int64_t x450 = -1LL;
volatile int32_t t107 = 1580;
static uint32_t x461 = 212U;
volatile uint32_t x463 = UINT32_MAX;
int64_t t112 = -9680224152LL;
static int32_t x478 = INT32_MAX;
int16_t x480 = INT16_MAX;
int16_t x485 = INT16_MIN;
int16_t x487 = -1533;
uint32_t x491 = 1U;
volatile int16_t x497 = INT16_MIN;
volatile int32_t x499 = INT32_MAX;
int64_t x500 = -1LL;
static volatile int32_t x502 = INT32_MIN;
int64_t x505 = -40645824547633LL;
uint8_t x520 = 0U;
volatile int64_t x521 = -242712690928LL;
static uint32_t t124 = 174822174U;
int32_t x531 = INT32_MAX;
int32_t t126 = 2690;
uint8_t x544 = 3U;
static volatile int64_t t132 = -1623LL;
int16_t x562 = INT16_MAX;
static volatile int32_t t134 = -38;
static uint32_t x575 = UINT32_MAX;
static int16_t x580 = -12;
int8_t x585 = -1;
volatile int32_t x587 = INT32_MIN;
uint8_t x601 = 10U;
int16_t x603 = 1;
static volatile int32_t t143 = -121;
volatile int64_t x605 = -261753688951666LL;
int64_t x606 = INT64_MIN;
int32_t x608 = 2;
int32_t t144 = 38407732;
volatile uint32_t x609 = UINT32_MAX;
volatile int8_t x610 = INT8_MIN;
uint16_t x620 = 61U;
int64_t x622 = 40LL;
int64_t x627 = INT64_MAX;
volatile uint16_t x634 = 232U;
int32_t x636 = INT32_MIN;
static volatile uint16_t x638 = UINT16_MAX;
int32_t x644 = 0;
int64_t x649 = INT64_MIN;
static int16_t x650 = INT16_MAX;
uint8_t x653 = 3U;
volatile int64_t x659 = -35254LL;
int16_t x661 = -1;
uint32_t x662 = 55724U;
uint64_t t158 = 225295LLU;
int8_t x670 = -5;
volatile int32_t x671 = 171417188;
uint16_t x677 = 1661U;
uint8_t x679 = 93U;
uint16_t x682 = UINT16_MAX;
volatile int64_t x695 = INT64_MIN;
static volatile int8_t x696 = INT8_MAX;
int32_t t167 = -8;
int16_t x709 = INT16_MIN;
static int32_t x710 = INT32_MIN;
int32_t x718 = INT32_MIN;
volatile int8_t x719 = INT8_MIN;
static int16_t x725 = -1;
int16_t x735 = INT16_MIN;
volatile int16_t x738 = -1;
uint16_t x742 = 116U;
uint8_t x747 = 13U;
volatile uint32_t t181 = 1518479U;
volatile int64_t x757 = INT64_MIN;
uint8_t x760 = UINT8_MAX;
static volatile int64_t x765 = -1LL;
int32_t x768 = INT32_MIN;
static int64_t x773 = 4060566688519768LL;
int8_t x776 = -13;
int64_t x779 = INT64_MIN;
int8_t x780 = 14;
static int64_t t187 = 1LL;
uint64_t x781 = 983493LLU;
volatile int8_t x783 = INT8_MIN;
volatile uint16_t x806 = 114U;
int32_t x820 = -1;
static int16_t x830 = INT16_MIN;
int32_t x832 = 55404;


void f0(void) {
    	int16_t x4 = -1;
	volatile int32_t t0 = 183;

    t0 = ((x1!=x2)+(x3^x4));

    if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	static volatile int8_t x6 = INT8_MIN;
	uint8_t x7 = UINT8_MAX;
	int16_t x8 = INT16_MIN;
	int32_t t1 = 332214;

    t1 = ((x5!=x6)+(x7^x8));

    if (t1 != -32512) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 22517U;
	int16_t x11 = -1;
	static int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 581;

    t2 = ((x9!=x10)+(x11^x12));

    if (t2 != 32768) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x15 = 1U;
	static int32_t t3 = -341;

    t3 = ((x13!=x14)+(x15^x16));

    if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MAX;
	int8_t x18 = INT8_MIN;
	int32_t x19 = -1;
	static int8_t x20 = -1;

    t4 = ((x17!=x18)+(x19^x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = INT8_MAX;
	static volatile uint32_t x23 = UINT32_MAX;
	uint64_t x24 = 3334874730LLU;
	volatile uint64_t t5 = 2LLU;

    t5 = ((x21!=x22)+(x23^x24));

    if (t5 != 960092566LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x26 = INT32_MAX;
	int64_t x27 = 153759922058690LL;
	int64_t t6 = 214644798439537LL;

    t6 = ((x25!=x26)+(x27^x28));

    if (t6 != 153759922058001LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MAX;
	uint16_t x30 = 254U;
	uint8_t x31 = 0U;
	int64_t x32 = INT64_MIN;
	static volatile int64_t t7 = -11LL;

    t7 = ((x29!=x30)+(x31^x32));

    if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = -3665;
	uint64_t x34 = 653565253364038261LLU;
	uint32_t x36 = 415798998U;
	volatile uint64_t t8 = 98647459LLU;

    t8 = ((x33!=x34)+(x35^x36));

    if (t8 != 415799655LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = INT64_MIN;
	int16_t x40 = INT16_MIN;
	int32_t t9 = 262180618;

    t9 = ((x37!=x38)+(x39^x40));

    if (t9 != 2147450881) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x41 = 5985U;
	int8_t x42 = -1;
	static uint64_t x43 = UINT64_MAX;
	int64_t x44 = INT64_MAX;
	static uint64_t t10 = 3319824LLU;

    t10 = ((x41!=x42)+(x43^x44));

    if (t10 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x47 = -4127;
	static int32_t x48 = 7467422;
	volatile int32_t t11 = -235527549;

    t11 = ((x45!=x46)+(x47^x48));

    if (t11 != -7463296) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -1LL;
	int32_t x50 = INT32_MIN;
	uint8_t x51 = UINT8_MAX;

    t12 = ((x49!=x50)+(x51^x52));

    if (t12 != -255) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = -1;
	int64_t x54 = -720741167755LL;
	static uint64_t x55 = 112498LLU;
	int32_t x56 = INT32_MIN;
	uint64_t t13 = 4035LLU;

    t13 = ((x53!=x54)+(x55^x56));

    if (t13 != 18446744071562180467LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	int32_t x58 = INT32_MAX;
	static uint64_t x59 = 5780706LLU;
	int8_t x60 = INT8_MAX;
	static volatile uint64_t t14 = 838089896LLU;

    t14 = ((x57!=x58)+(x59^x60));

    if (t14 != 5780638LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x61 = -6;
	int32_t x63 = 48;
	int64_t x64 = INT64_MIN;
	static int64_t t15 = -836LL;

    t15 = ((x61!=x62)+(x63^x64));

    if (t15 != -9223372036854775759LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = 0;
	int32_t x70 = 499431;
	uint64_t x71 = 6LLU;
	volatile int64_t x72 = INT64_MAX;
	uint64_t t16 = 861072524981589LLU;

    t16 = ((x69!=x70)+(x71^x72));

    if (t16 != 9223372036854775802LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MIN;
	static volatile int32_t t17 = 20;

    t17 = ((x73!=x74)+(x75^x76));

    if (t17 != 18304) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x77 = INT8_MAX;
	uint32_t x78 = 2689U;
	uint64_t x79 = 1046149567506LLU;
	static int8_t x80 = INT8_MIN;
	volatile uint64_t t18 = 3LLU;

    t18 = ((x77!=x78)+(x79^x80));

    if (t18 != 18446743027559984019LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x81 = INT32_MIN;
	int16_t x82 = -34;
	static uint8_t x83 = 7U;
	static volatile uint64_t t19 = 6094573325599329885LLU;

    t19 = ((x81!=x82)+(x83^x84));

    if (t19 != 101107LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x85 = 786729468646893LL;
	volatile int32_t t20 = -444180;

    t20 = ((x85!=x86)+(x87^x88));

    if (t20 != -2147475027) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x90 = INT32_MIN;
	int64_t x91 = INT64_MAX;
	uint16_t x92 = 11U;
	int64_t t21 = 610535750685759239LL;

    t21 = ((x89!=x90)+(x91^x92));

    if (t21 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x94 = -1266418;
	static uint32_t x96 = 213369759U;
	uint32_t t22 = 72846U;

    t22 = ((x93!=x94)+(x95^x96));

    if (t22 != 4081599392U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x99 = UINT32_MAX;
	int16_t x100 = 59;
	volatile uint32_t t23 = 47U;

    t23 = ((x97!=x98)+(x99^x100));

    if (t23 != 4294967237U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x101 = 4U;
	uint32_t x102 = 69U;
	static uint16_t x103 = 33U;
	uint16_t x104 = UINT16_MAX;

    t24 = ((x101!=x102)+(x103^x104));

    if (t24 != 65503) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x105 = 613U;
	int16_t x106 = 171;
	volatile uint32_t x107 = 25425U;
	int64_t x108 = INT64_MAX;
	int64_t t25 = -332163147LL;

    t25 = ((x105!=x106)+(x107^x108));

    if (t25 != 9223372036854750383LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x109 = 10U;
	static uint16_t x111 = 1U;
	int64_t x112 = -1LL;
	int64_t t26 = 155265464660665LL;

    t26 = ((x109!=x110)+(x111^x112));

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint64_t x113 = UINT64_MAX;
	int32_t x114 = INT32_MIN;
	volatile uint8_t x116 = 61U;
	static volatile int64_t t27 = 1048049308LL;

    t27 = ((x113!=x114)+(x115^x116));

    if (t27 != -126LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = -40060LL;
	int8_t x118 = INT8_MIN;
	volatile uint8_t x120 = UINT8_MAX;
	volatile int32_t t28 = 211;

    t28 = ((x117!=x118)+(x119^x120));

    if (t28 != -255) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = INT16_MAX;
	int32_t x124 = -329253;
	volatile int64_t t29 = -454022LL;

    t29 = ((x121!=x122)+(x123^x124));

    if (t29 != -329290LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x129 = 19U;
	static int16_t x131 = INT16_MAX;
	int32_t t30 = -333;

    t30 = ((x129!=x130)+(x131^x132));

    if (t30 != 32671) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x133 = INT16_MIN;
	int16_t x134 = -1;
	uint16_t x136 = 244U;
	uint32_t t31 = 4U;

    t31 = ((x133!=x134)+(x135^x136));

    if (t31 != 4294967052U) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x137 = INT8_MIN;
	int8_t x138 = -1;
	int16_t x139 = -509;
	int64_t x140 = INT64_MIN;
	volatile int64_t t32 = -1263LL;

    t32 = ((x137!=x138)+(x139^x140));

    if (t32 != 9223372036854775300LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int32_t x141 = 6987826;
	static int16_t x143 = -5;

    t33 = ((x141!=x142)+(x143^x144));

    if (t33 != -65531) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x145 = 0;
	int64_t x146 = INT64_MIN;
	static uint16_t x148 = 70U;

    t34 = ((x145!=x146)+(x147^x148));

    if (t34 != 32698) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x149 = -2;
	int16_t x150 = 787;

    t35 = ((x149!=x150)+(x151^x152));

    if (t35 != 18446744068905412446LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x153 = UINT8_MAX;
	volatile uint32_t x154 = 157591U;
	uint16_t x155 = 241U;
	static volatile int64_t x156 = 518131LL;
	int64_t t36 = -75374084026156330LL;

    t36 = ((x153!=x154)+(x155^x156));

    if (t36 != 517891LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x157 = INT64_MIN;
	volatile uint64_t x159 = 7LLU;
	volatile int16_t x160 = INT16_MAX;

    t37 = ((x157!=x158)+(x159^x160));

    if (t37 != 32761LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x162 = UINT32_MAX;
	volatile uint8_t x163 = UINT8_MAX;
	uint32_t x164 = 123U;
	static volatile uint32_t t38 = 120557499U;

    t38 = ((x161!=x162)+(x163^x164));

    if (t38 != 132U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = INT16_MIN;
	static uint64_t x166 = 7651LLU;
	int64_t x167 = INT64_MIN;
	int64_t t39 = 141462736358673285LL;

    t39 = ((x165!=x166)+(x167^x168));

    if (t39 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int64_t x169 = -1LL;
	volatile uint16_t x170 = 249U;
	int32_t x171 = INT32_MIN;
	static int16_t x172 = INT16_MAX;
	int32_t t40 = -32823189;

    t40 = ((x169!=x170)+(x171^x172));

    if (t40 != -2147450880) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x173 = -1LL;
	static uint64_t x174 = 419LLU;
	int8_t x175 = INT8_MIN;
	volatile int64_t x176 = INT64_MAX;
	volatile int64_t t41 = 1LL;

    t41 = ((x173!=x174)+(x175^x176));

    if (t41 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x177 = INT8_MIN;
	int16_t x178 = 320;
	volatile int8_t x179 = -7;
	int64_t t42 = -39040162036304LL;

    t42 = ((x177!=x178)+(x179^x180));

    if (t42 != 51169LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x181 = INT32_MIN;
	uint32_t x182 = UINT32_MAX;
	volatile uint32_t x183 = UINT32_MAX;
	static volatile int8_t x184 = INT8_MIN;
	volatile uint32_t t43 = 583451U;

    t43 = ((x181!=x182)+(x183^x184));

    if (t43 != 128U) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x185 = 1U;
	int16_t x186 = INT16_MIN;
	int64_t x187 = INT64_MAX;
	int32_t x188 = -362525972;
	int64_t t44 = -999147398LL;

    t44 = ((x185!=x186)+(x187^x188));

    if (t44 != -9223372036492249836LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x189 = 0U;
	static int64_t x192 = 775996LL;
	static volatile int64_t t45 = -125LL;

    t45 = ((x189!=x190)+(x191^x192));

    if (t45 != -764099LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x193 = 32334303LLU;
	int32_t x194 = INT32_MAX;
	int16_t x195 = INT16_MAX;
	volatile int32_t t46 = 201467;

    t46 = ((x193!=x194)+(x195^x196));

    if (t46 != 32641) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x198 = INT32_MAX;
	int8_t x199 = -56;
	int64_t x200 = INT64_MIN;

    t47 = ((x197!=x198)+(x199^x200));

    if (t47 != 9223372036854775753LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x201 = INT8_MIN;
	volatile uint32_t x202 = UINT32_MAX;
	static int32_t x203 = -1;

    t48 = ((x201!=x202)+(x203^x204));

    if (t48 != 18415089739046609593LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x205 = -1LL;
	volatile int64_t x206 = -6341748451582LL;
	int64_t x207 = INT64_MIN;
	int16_t x208 = INT16_MIN;
	static volatile int64_t t49 = -96104LL;

    t49 = ((x205!=x206)+(x207^x208));

    if (t49 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int8_t x210 = -6;
	volatile int16_t x211 = INT16_MAX;
	int32_t x212 = INT32_MAX;
	volatile int32_t t50 = 1651;

    t50 = ((x209!=x210)+(x211^x212));

    if (t50 != 2147450881) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x217 = INT8_MIN;
	volatile int32_t x218 = INT32_MIN;
	int16_t x219 = INT16_MAX;
	volatile uint64_t x220 = 134397900571135LLU;
	volatile uint64_t t51 = 44LLU;

    t51 = ((x217!=x218)+(x219^x220));

    if (t51 != 134397900570113LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x221 = 85U;
	int8_t x224 = INT8_MAX;
	int32_t t52 = 1;

    t52 = ((x221!=x222)+(x223^x224));

    if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x225 = 1;
	int64_t x226 = 6098010490660LL;
	uint16_t x227 = 1U;
	int8_t x228 = 2;

    t53 = ((x225!=x226)+(x227^x228));

    if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x229 = UINT8_MAX;
	uint16_t x230 = 18U;
	volatile uint32_t x231 = 6543U;
	volatile uint16_t x232 = UINT16_MAX;
	volatile uint32_t t54 = 381U;

    t54 = ((x229!=x230)+(x231^x232));

    if (t54 != 58993U) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x233 = INT16_MIN;
	int16_t x234 = INT16_MIN;
	uint8_t x236 = 8U;
	static int64_t t55 = -579865639355800701LL;

    t55 = ((x233!=x234)+(x235^x236));

    if (t55 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x237 = 171780U;
	int8_t x239 = INT8_MIN;
	volatile int32_t t56 = -14848672;

    t56 = ((x237!=x238)+(x239^x240));

    if (t56 != 146) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x241 = INT32_MIN;
	int64_t x242 = 12LL;
	static volatile int8_t x243 = -1;
	int64_t x244 = INT64_MAX;
	volatile int64_t t57 = 5380984935977LL;

    t57 = ((x241!=x242)+(x243^x244));

    if (t57 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x246 = INT16_MAX;
	int32_t x247 = INT32_MIN;

    t58 = ((x245!=x246)+(x247^x248));

    if (t58 != 2147542327U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x253 = -1065572889;
	static int16_t x254 = -238;
	volatile int64_t x255 = -1586360635922550LL;
	int64_t x256 = -1LL;

    t59 = ((x253!=x254)+(x255^x256));

    if (t59 != 1586360635922550LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x257 = 13U;
	uint8_t x258 = 0U;
	uint16_t x259 = UINT16_MAX;
	int8_t x260 = -1;
	int32_t t60 = -19;

    t60 = ((x257!=x258)+(x259^x260));

    if (t60 != -65535) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x261 = INT64_MIN;
	int64_t x262 = INT64_MIN;
	int64_t x263 = -881214116LL;
	int64_t x264 = -34054325718527125LL;
	static int64_t t61 = -145LL;

    t61 = ((x261!=x262)+(x263^x264));

    if (t61 != 34054326045568567LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x265 = 6736672912LLU;
	int32_t x266 = INT32_MAX;
	static volatile int64_t x267 = INT64_MAX;
	volatile int64_t t62 = 5581018445633254LL;

    t62 = ((x265!=x266)+(x267^x268));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x269 = 1137855U;
	uint32_t x270 = 2U;
	int16_t x271 = -159;
	int64_t x272 = -1677122695LL;
	int64_t t63 = -284913319848LL;

    t63 = ((x269!=x270)+(x271^x272));

    if (t63 != 1677122585LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x273 = INT32_MIN;
	static uint16_t x274 = 3219U;
	static volatile int32_t t64 = -237096929;

    t64 = ((x273!=x274)+(x275^x276));

    if (t64 != 118387) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x277 = UINT64_MAX;
	int64_t x278 = INT64_MIN;
	int32_t x279 = 1;
	uint64_t x280 = UINT64_MAX;

    t65 = ((x277!=x278)+(x279^x280));

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x281 = -1;
	volatile uint8_t x282 = 14U;
	int16_t x283 = INT16_MAX;
	uint8_t x284 = UINT8_MAX;
	static volatile int32_t t66 = 0;

    t66 = ((x281!=x282)+(x283^x284));

    if (t66 != 32513) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x285 = 7529;
	int32_t x286 = -1;
	int64_t x287 = INT64_MIN;
	static int8_t x288 = -16;
	int64_t t67 = 13852259866117901LL;

    t67 = ((x285!=x286)+(x287^x288));

    if (t67 != 9223372036854775793LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x291 = -489;
	int64_t x292 = INT64_MIN;
	int64_t t68 = -15409978316LL;

    t68 = ((x289!=x290)+(x291^x292));

    if (t68 != 9223372036854775320LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x293 = INT16_MAX;
	uint64_t x294 = UINT64_MAX;
	int8_t x295 = INT8_MIN;

    t69 = ((x293!=x294)+(x295^x296));

    if (t69 != -32640) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x297 = 2U;
	uint64_t x298 = UINT64_MAX;
	int8_t x300 = INT8_MAX;
	volatile int32_t t70 = 229035;

    t70 = ((x297!=x298)+(x299^x300));

    if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x301 = -1LL;
	uint8_t x302 = UINT8_MAX;
	volatile int32_t x304 = 92;
	static int32_t t71 = 27;

    t71 = ((x301!=x302)+(x303^x304));

    if (t71 != 164) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x308 = 1911U;
	volatile uint32_t t72 = 3U;

    t72 = ((x305!=x306)+(x307^x308));

    if (t72 != 1912U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x309 = INT8_MAX;
	volatile uint64_t x311 = UINT64_MAX;
	volatile int16_t x312 = INT16_MAX;

    t73 = ((x309!=x310)+(x311^x312));

    if (t73 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x313 = -122;
	int32_t x314 = -15;
	uint16_t x315 = UINT16_MAX;
	volatile int64_t x316 = INT64_MAX;
	int64_t t74 = 496LL;

    t74 = ((x313!=x314)+(x315^x316));

    if (t74 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x317 = UINT32_MAX;
	volatile uint16_t x319 = UINT16_MAX;
	int32_t x320 = -1;
	volatile int32_t t75 = -87389613;

    t75 = ((x317!=x318)+(x319^x320));

    if (t75 != -65535) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x322 = -1;
	static uint8_t x324 = 12U;
	int32_t t76 = -440971;

    t76 = ((x321!=x322)+(x323^x324));

    if (t76 != -10) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x325 = INT32_MAX;
	static int16_t x326 = INT16_MIN;
	uint16_t x327 = UINT16_MAX;
	int32_t t77 = -1513118;

    t77 = ((x325!=x326)+(x327^x328));

    if (t77 != 65281) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x331 = INT32_MAX;
	int64_t x332 = 1LL;
	int64_t t78 = 0LL;

    t78 = ((x329!=x330)+(x331^x332));

    if (t78 != 2147483647LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x333 = 15U;
	static int64_t x334 = -20975243194LL;
	static int16_t x335 = INT16_MIN;
	int16_t x336 = INT16_MIN;
	static int32_t t79 = 12;

    t79 = ((x333!=x334)+(x335^x336));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x338 = -1;
	volatile int16_t x339 = INT16_MIN;
	uint32_t x340 = 2049652U;
	uint32_t t80 = 2965U;

    t80 = ((x337!=x338)+(x339^x340));

    if (t80 != 4292920949U) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x341 = 0;
	static volatile int64_t x342 = -592590190688259LL;
	uint8_t x343 = 60U;
	int16_t x344 = INT16_MIN;
	volatile int32_t t81 = 549;

    t81 = ((x341!=x342)+(x343^x344));

    if (t81 != -32707) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x345 = 12906U;
	int32_t x347 = 35572;
	int64_t x348 = INT64_MAX;

    t82 = ((x345!=x346)+(x347^x348));

    if (t82 != 9223372036854740236LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x349 = INT16_MIN;
	uint16_t x350 = UINT16_MAX;
	volatile uint8_t x351 = 2U;
	uint8_t x352 = UINT8_MAX;
	int32_t t83 = -1;

    t83 = ((x349!=x350)+(x351^x352));

    if (t83 != 254) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x353 = 1U;
	int16_t x354 = -1;
	uint64_t x355 = UINT64_MAX;
	volatile uint64_t x356 = UINT64_MAX;

    t84 = ((x353!=x354)+(x355^x356));

    if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x358 = -907680169005185LL;
	static uint8_t x359 = UINT8_MAX;

    t85 = ((x357!=x358)+(x359^x360));

    if (t85 != 3724) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x361 = 38LLU;
	uint16_t x362 = 93U;
	int16_t x363 = INT16_MIN;
	int64_t x364 = INT64_MIN;
	static volatile int64_t t86 = -1240444468395LL;

    t86 = ((x361!=x362)+(x363^x364));

    if (t86 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x365 = 716U;
	static uint8_t x366 = UINT8_MAX;
	volatile int32_t x368 = INT32_MIN;
	uint32_t t87 = 9U;

    t87 = ((x365!=x366)+(x367^x368));

    if (t87 != 2177643664U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x369 = 13421;
	int32_t x370 = INT32_MAX;
	int8_t x371 = INT8_MAX;
	int32_t t88 = 98812;

    t88 = ((x369!=x370)+(x371^x372));

    if (t88 != -98) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MIN;
	static volatile uint16_t x375 = UINT16_MAX;
	volatile int32_t t89 = 323361947;

    t89 = ((x373!=x374)+(x375^x376));

    if (t89 != -65528) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x378 = INT64_MIN;
	volatile int16_t x379 = 3320;
	int8_t x380 = 29;
	int32_t t90 = -928;

    t90 = ((x377!=x378)+(x379^x380));

    if (t90 != 3302) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x381 = INT32_MAX;
	int16_t x382 = INT16_MAX;
	uint32_t x383 = UINT32_MAX;
	int32_t x384 = INT32_MIN;
	uint32_t t91 = 43950573U;

    t91 = ((x381!=x382)+(x383^x384));

    if (t91 != 2147483648U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x385 = UINT32_MAX;
	int16_t x386 = INT16_MAX;
	uint32_t x387 = 4U;
	static int64_t x388 = -512373LL;

    t92 = ((x385!=x386)+(x387^x388));

    if (t92 != -512368LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x389 = INT32_MAX;
	uint64_t x390 = 2567LLU;
	uint16_t x392 = UINT16_MAX;
	int64_t t93 = -167584787LL;

    t93 = ((x389!=x390)+(x391^x392));

    if (t93 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x393 = INT64_MAX;
	int64_t x394 = 88900048569LL;
	static int64_t x395 = INT64_MAX;
	uint16_t x396 = 21U;
	static int64_t t94 = 1178627642277532LL;

    t94 = ((x393!=x394)+(x395^x396));

    if (t94 != 9223372036854775787LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x397 = UINT16_MAX;
	uint32_t x398 = UINT32_MAX;
	int64_t x399 = -1LL;
	volatile int16_t x400 = INT16_MIN;
	int64_t t95 = -110237305LL;

    t95 = ((x397!=x398)+(x399^x400));

    if (t95 != 32768LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x401 = 0U;
	int64_t x402 = INT64_MIN;
	static int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MIN;
	int32_t t96 = -123318564;

    t96 = ((x401!=x402)+(x403^x404));

    if (t96 != 2147483521) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x405 = 1LL;
	volatile int32_t x407 = -1;
	volatile uint8_t x408 = 1U;

    t97 = ((x405!=x406)+(x407^x408));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x409 = 737U;
	int64_t x410 = 27LL;
	uint16_t x411 = UINT16_MAX;
	int32_t x412 = -1;
	volatile int32_t t98 = -11433783;

    t98 = ((x409!=x410)+(x411^x412));

    if (t98 != -65535) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x413 = 3LLU;
	uint32_t x415 = 50519U;
	int8_t x416 = -5;
	uint32_t t99 = 58U;

    t99 = ((x413!=x414)+(x415^x416));

    if (t99 != 4294916781U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x426 = UINT8_MAX;
	uint64_t x427 = UINT64_MAX;
	uint64_t x428 = 7126133LLU;
	uint64_t t100 = 1105LLU;

    t100 = ((x425!=x426)+(x427^x428));

    if (t100 != 18446744073702425483LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x429 = 6011U;
	uint8_t x431 = 1U;
	int32_t x432 = 1;
	volatile int32_t t101 = -1831;

    t101 = ((x429!=x430)+(x431^x432));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x433 = -1;
	int8_t x436 = INT8_MIN;
	volatile int32_t t102 = -5194;

    t102 = ((x433!=x434)+(x435^x436));

    if (t102 != 128) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x439 = INT32_MIN;
	int32_t x440 = 32387;
	int32_t t103 = -3;

    t103 = ((x437!=x438)+(x439^x440));

    if (t103 != -2147451260) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x441 = 2727U;
	static int64_t x442 = INT64_MIN;
	int64_t x443 = INT64_MIN;
	uint8_t x444 = 0U;
	static volatile int64_t t104 = 873LL;

    t104 = ((x441!=x442)+(x443^x444));

    if (t104 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x445 = INT8_MIN;
	int16_t x446 = INT16_MIN;
	static int32_t x448 = INT32_MIN;
	int32_t t105 = -826;

    t105 = ((x445!=x446)+(x447^x448));

    if (t105 != -2147418112) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x449 = -3;
	volatile uint32_t x451 = UINT32_MAX;
	uint32_t x452 = UINT32_MAX;
	volatile uint32_t t106 = 33198U;

    t106 = ((x449!=x450)+(x451^x452));

    if (t106 != 1U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x453 = -62796;
	uint8_t x454 = 9U;
	uint8_t x455 = UINT8_MAX;
	volatile int32_t x456 = INT32_MAX;

    t107 = ((x453!=x454)+(x455^x456));

    if (t107 != 2147483393) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x457 = -1;
	static int16_t x458 = INT16_MIN;
	int16_t x459 = INT16_MIN;
	volatile int16_t x460 = -493;
	int32_t t108 = -1;

    t108 = ((x457!=x458)+(x459^x460));

    if (t108 != 32276) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x462 = 5;
	uint32_t x464 = UINT32_MAX;
	uint32_t t109 = 7U;

    t109 = ((x461!=x462)+(x463^x464));

    if (t109 != 1U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x465 = INT32_MIN;
	int32_t x466 = INT32_MIN;
	volatile int16_t x467 = -1;
	volatile int8_t x468 = INT8_MIN;
	static int32_t t110 = 5659;

    t110 = ((x465!=x466)+(x467^x468));

    if (t110 != 127) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x469 = -1006;
	int32_t x470 = INT32_MIN;
	uint32_t x471 = 3U;
	uint64_t x472 = 218973266525LLU;
	uint64_t t111 = 50272975701332574LLU;

    t111 = ((x469!=x470)+(x471^x472));

    if (t111 != 218973266527LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x473 = 2U;
	static volatile int16_t x474 = -1;
	int16_t x475 = INT16_MIN;
	int64_t x476 = -2434680LL;

    t112 = ((x473!=x474)+(x475^x476));

    if (t112 != 2447753LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x477 = 923133U;
	int32_t x479 = 601;
	static volatile int32_t t113 = -1040375;

    t113 = ((x477!=x478)+(x479^x480));

    if (t113 != 32167) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x481 = INT16_MAX;
	static uint8_t x482 = UINT8_MAX;
	int32_t x483 = -43;
	int8_t x484 = INT8_MIN;
	static int32_t t114 = -43271721;

    t114 = ((x481!=x482)+(x483^x484));

    if (t114 != 86) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x486 = 5056U;
	int8_t x488 = INT8_MIN;
	volatile int32_t t115 = -3;

    t115 = ((x485!=x486)+(x487^x488));

    if (t115 != 1412) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x489 = UINT16_MAX;
	volatile int64_t x490 = 9451000254150738LL;
	int32_t x492 = INT32_MAX;
	volatile uint32_t t116 = 56104299U;

    t116 = ((x489!=x490)+(x491^x492));

    if (t116 != 2147483647U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x493 = INT8_MAX;
	int64_t x494 = 11160128790LL;
	uint16_t x495 = UINT16_MAX;
	volatile int16_t x496 = 1447;
	static volatile int32_t t117 = 84818;

    t117 = ((x493!=x494)+(x495^x496));

    if (t117 != 64089) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x498 = INT64_MIN;
	static volatile int64_t t118 = 387LL;

    t118 = ((x497!=x498)+(x499^x500));

    if (t118 != -2147483647LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x501 = 6U;
	uint32_t x503 = 277018504U;
	int8_t x504 = -1;
	uint32_t t119 = 65405U;

    t119 = ((x501!=x502)+(x503^x504));

    if (t119 != 4017948792U) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x506 = UINT32_MAX;
	uint32_t x507 = 2782U;
	int32_t x508 = -1;
	volatile uint32_t t120 = 114786077U;

    t120 = ((x505!=x506)+(x507^x508));

    if (t120 != 4294964514U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x509 = INT8_MIN;
	static volatile uint16_t x510 = 8U;
	static uint8_t x511 = UINT8_MAX;
	static volatile int64_t x512 = INT64_MIN;
	volatile int64_t t121 = -55122317710807LL;

    t121 = ((x509!=x510)+(x511^x512));

    if (t121 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x513 = 1479U;
	static uint16_t x514 = UINT16_MAX;
	uint32_t x515 = 1694U;
	uint8_t x516 = 3U;
	volatile uint32_t t122 = 845U;

    t122 = ((x513!=x514)+(x515^x516));

    if (t122 != 1694U) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x517 = INT32_MAX;
	int64_t x518 = -1LL;
	int8_t x519 = INT8_MAX;
	volatile int32_t t123 = -234;

    t123 = ((x517!=x518)+(x519^x520));

    if (t123 != 128) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x522 = INT16_MAX;
	static uint32_t x523 = 38366U;
	int8_t x524 = -14;

    t124 = ((x521!=x522)+(x523^x524));

    if (t124 != 4294928941U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x525 = 2U;
	uint64_t x526 = UINT64_MAX;
	uint32_t x527 = 936109336U;
	uint64_t x528 = 117551931497790LLU;
	volatile uint64_t t125 = 32542360712LLU;

    t125 = ((x525!=x526)+(x527^x528));

    if (t125 != 117551222061095LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x529 = 1U;
	uint64_t x530 = UINT64_MAX;
	volatile uint8_t x532 = 14U;

    t126 = ((x529!=x530)+(x531^x532));

    if (t126 != 2147483634) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x533 = 4614065U;
	volatile uint16_t x534 = UINT16_MAX;
	int16_t x535 = INT16_MIN;
	static int16_t x536 = -10109;
	int32_t t127 = 268042559;

    t127 = ((x533!=x534)+(x535^x536));

    if (t127 != 22660) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x537 = INT16_MIN;
	int32_t x538 = -227293225;
	static uint8_t x539 = 0U;
	int8_t x540 = -1;
	volatile int32_t t128 = 137464327;

    t128 = ((x537!=x538)+(x539^x540));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x541 = -207036124231LL;
	static uint8_t x542 = UINT8_MAX;
	uint64_t x543 = 107LLU;
	static volatile uint64_t t129 = 2LLU;

    t129 = ((x541!=x542)+(x543^x544));

    if (t129 != 105LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x549 = -6;
	volatile uint16_t x550 = UINT16_MAX;
	volatile uint64_t x551 = 34970959178454671LLU;
	uint16_t x552 = 78U;
	uint64_t t130 = 9548227LLU;

    t130 = ((x549!=x550)+(x551^x552));

    if (t130 != 34970959178454722LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x553 = INT64_MIN;
	static uint8_t x554 = UINT8_MAX;
	static int64_t x555 = INT64_MIN;
	static volatile uint32_t x556 = 60U;
	volatile int64_t t131 = -3875621LL;

    t131 = ((x553!=x554)+(x555^x556));

    if (t131 != -9223372036854775747LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x557 = -1;
	uint32_t x558 = 58U;
	int64_t x559 = -6575587LL;
	int64_t x560 = -1LL;

    t132 = ((x557!=x558)+(x559^x560));

    if (t132 != 6575587LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x561 = 4752U;
	int8_t x563 = -1;
	uint64_t x564 = 49124964LLU;
	volatile uint64_t t133 = 20LLU;

    t133 = ((x561!=x562)+(x563^x564));

    if (t133 != 18446744073660426652LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x565 = INT64_MIN;
	int32_t x566 = -226;
	uint16_t x567 = 14391U;
	static uint16_t x568 = 73U;

    t134 = ((x565!=x566)+(x567^x568));

    if (t134 != 14463) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x569 = INT16_MAX;
	uint8_t x570 = 1U;
	volatile uint32_t x571 = 1832279U;
	uint32_t x572 = 1287893799U;
	volatile uint32_t t135 = 1696006439U;

    t135 = ((x569!=x570)+(x571^x572));

    if (t135 != 1289242225U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x573 = 0U;
	volatile int32_t x574 = 1;
	volatile uint64_t x576 = 2021266373060102968LLU;
	uint64_t t136 = 70846703338735LLU;

    t136 = ((x573!=x574)+(x575^x576));

    if (t136 != 2021266371896112328LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x577 = -1LL;
	volatile uint64_t x578 = UINT64_MAX;
	volatile int8_t x579 = 1;
	volatile int32_t t137 = 67;

    t137 = ((x577!=x578)+(x579^x580));

    if (t137 != -11) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x581 = INT64_MIN;
	static uint64_t x582 = 57LLU;
	uint32_t x583 = UINT32_MAX;
	int32_t x584 = INT32_MIN;
	uint32_t t138 = 9374970U;

    t138 = ((x581!=x582)+(x583^x584));

    if (t138 != 2147483648U) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x586 = INT16_MIN;
	uint16_t x588 = 5567U;
	int32_t t139 = 62;

    t139 = ((x585!=x586)+(x587^x588));

    if (t139 != -2147478080) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x589 = INT64_MIN;
	int8_t x590 = -1;
	int64_t x591 = -1LL;
	volatile int16_t x592 = -6;
	int64_t t140 = -206LL;

    t140 = ((x589!=x590)+(x591^x592));

    if (t140 != 6LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x593 = 12;
	uint32_t x594 = 820678062U;
	int64_t x595 = INT64_MIN;
	int16_t x596 = -2;
	volatile int64_t t141 = INT64_MAX;

    t141 = ((x593!=x594)+(x595^x596));

    if (t141 != INT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x597 = 85U;
	volatile int8_t x598 = INT8_MIN;
	uint16_t x599 = 15U;
	volatile int16_t x600 = INT16_MIN;
	volatile int32_t t142 = -122795922;

    t142 = ((x597!=x598)+(x599^x600));

    if (t142 != -32752) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x602 = 0;
	static int32_t x604 = 383127520;

    t143 = ((x601!=x602)+(x603^x604));

    if (t143 != 383127522) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x607 = INT8_MIN;

    t144 = ((x605!=x606)+(x607^x608));

    if (t144 != -125) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x611 = -1;
	int32_t x612 = -1;
	volatile int32_t t145 = -912453963;

    t145 = ((x609!=x610)+(x611^x612));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x613 = 11U;
	volatile int32_t x614 = INT32_MIN;
	uint8_t x615 = 119U;
	int64_t x616 = -1LL;
	volatile int64_t t146 = -7567972656868LL;

    t146 = ((x613!=x614)+(x615^x616));

    if (t146 != -119LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x617 = 36;
	int8_t x618 = -1;
	static int64_t x619 = 58LL;
	int64_t t147 = -1665753613214LL;

    t147 = ((x617!=x618)+(x619^x620));

    if (t147 != 8LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x621 = INT8_MIN;
	volatile int16_t x623 = 689;
	int64_t x624 = 8LL;
	int64_t t148 = 746145LL;

    t148 = ((x621!=x622)+(x623^x624));

    if (t148 != 698LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x625 = UINT16_MAX;
	int8_t x626 = INT8_MIN;
	int16_t x628 = 1;
	static int64_t t149 = INT64_MAX;

    t149 = ((x625!=x626)+(x627^x628));

    if (t149 != INT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x629 = -28245LL;
	uint8_t x630 = UINT8_MAX;
	volatile uint32_t x631 = 51381U;
	static int16_t x632 = INT16_MAX;
	static uint32_t t150 = 16227U;

    t150 = ((x629!=x630)+(x631^x632));

    if (t150 != 46923U) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x633 = INT8_MIN;
	static int32_t x635 = -56;
	volatile int32_t t151 = -9039101;

    t151 = ((x633!=x634)+(x635^x636));

    if (t151 != 2147483593) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x637 = -968;
	static volatile int64_t x639 = INT64_MIN;
	static int8_t x640 = INT8_MIN;
	int64_t t152 = -708465948LL;

    t152 = ((x637!=x638)+(x639^x640));

    if (t152 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x641 = INT64_MAX;
	static uint8_t x642 = 0U;
	volatile int16_t x643 = INT16_MIN;
	static volatile int32_t t153 = -99;

    t153 = ((x641!=x642)+(x643^x644));

    if (t153 != -32767) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x645 = -1LL;
	int8_t x646 = INT8_MAX;
	int8_t x647 = 0;
	int64_t x648 = -1LL;
	volatile int64_t t154 = -614LL;

    t154 = ((x645!=x646)+(x647^x648));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint32_t x651 = UINT32_MAX;
	int32_t x652 = 137;
	volatile uint32_t t155 = 3091199U;

    t155 = ((x649!=x650)+(x651^x652));

    if (t155 != 4294967159U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x654 = -1;
	uint8_t x655 = 31U;
	volatile int8_t x656 = -1;
	int32_t t156 = -1158138;

    t156 = ((x653!=x654)+(x655^x656));

    if (t156 != -31) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x657 = 27U;
	int8_t x658 = INT8_MIN;
	int64_t x660 = INT64_MAX;
	volatile int64_t t157 = 1939592695469LL;

    t157 = ((x657!=x658)+(x659^x660));

    if (t157 != -9223372036854740554LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x663 = 24215U;
	uint64_t x664 = UINT64_MAX;

    t158 = ((x661!=x662)+(x663^x664));

    if (t158 != 18446744073709527401LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x665 = 1;
	int32_t x666 = INT32_MIN;
	int16_t x667 = INT16_MIN;
	int16_t x668 = 505;
	static int32_t t159 = 6847;

    t159 = ((x665!=x666)+(x667^x668));

    if (t159 != -32262) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x669 = 60247U;
	static int8_t x672 = INT8_MAX;
	static volatile int32_t t160 = -49969667;

    t160 = ((x669!=x670)+(x671^x672));

    if (t160 != 171417116) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x673 = -33946684252798346LL;
	int64_t x674 = -1LL;
	volatile uint8_t x675 = 84U;
	int8_t x676 = INT8_MAX;
	volatile int32_t t161 = 24929527;

    t161 = ((x673!=x674)+(x675^x676));

    if (t161 != 44) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x678 = INT16_MIN;
	static uint32_t x680 = 0U;
	uint32_t t162 = 17U;

    t162 = ((x677!=x678)+(x679^x680));

    if (t162 != 94U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x681 = INT8_MIN;
	uint64_t x683 = 4082367LLU;
	uint32_t x684 = UINT32_MAX;
	uint64_t t163 = 11950LLU;

    t163 = ((x681!=x682)+(x683^x684));

    if (t163 != 4290884929LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x685 = INT64_MIN;
	static int8_t x686 = -2;
	static int32_t x687 = INT32_MAX;
	int8_t x688 = INT8_MIN;
	volatile int32_t t164 = -5283;

    t164 = ((x685!=x686)+(x687^x688));

    if (t164 != -2147483520) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x689 = INT8_MAX;
	volatile uint8_t x690 = 68U;
	int8_t x691 = INT8_MIN;
	int16_t x692 = -39;
	int32_t t165 = 1895702;

    t165 = ((x689!=x690)+(x691^x692));

    if (t165 != 90) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x693 = -1;
	uint64_t x694 = UINT64_MAX;
	int64_t t166 = 0LL;

    t166 = ((x693!=x694)+(x695^x696));

    if (t166 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x697 = INT8_MIN;
	int64_t x698 = 10410634459691LL;
	int32_t x699 = -1;
	int16_t x700 = INT16_MIN;

    t167 = ((x697!=x698)+(x699^x700));

    if (t167 != 32768) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x701 = UINT8_MAX;
	uint64_t x702 = 3979258036065LLU;
	int64_t x703 = INT64_MIN;
	volatile uint8_t x704 = 0U;
	int64_t t168 = 3076281996480241LL;

    t168 = ((x701!=x702)+(x703^x704));

    if (t168 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x705 = 0;
	static int8_t x706 = INT8_MIN;
	uint64_t x707 = UINT64_MAX;
	static int16_t x708 = -1;
	uint64_t t169 = 140391714484LLU;

    t169 = ((x705!=x706)+(x707^x708));

    if (t169 != 1LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x711 = INT16_MIN;
	int32_t x712 = INT32_MIN;
	volatile int32_t t170 = -1418;

    t170 = ((x709!=x710)+(x711^x712));

    if (t170 != 2147450881) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x713 = 63;
	uint16_t x714 = UINT16_MAX;
	int32_t x715 = INT32_MIN;
	volatile int8_t x716 = INT8_MIN;
	volatile int32_t t171 = -40;

    t171 = ((x713!=x714)+(x715^x716));

    if (t171 != 2147483521) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x717 = 95267550;
	static int32_t x720 = -1;
	int32_t t172 = -2037804;

    t172 = ((x717!=x718)+(x719^x720));

    if (t172 != 128) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x721 = INT8_MAX;
	int64_t x722 = INT64_MIN;
	static int16_t x723 = INT16_MIN;
	int8_t x724 = INT8_MAX;
	static volatile int32_t t173 = 12150599;

    t173 = ((x721!=x722)+(x723^x724));

    if (t173 != -32640) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x726 = 3347U;
	int8_t x727 = 0;
	uint64_t x728 = 2207547905LLU;
	static volatile uint64_t t174 = 19402LLU;

    t174 = ((x725!=x726)+(x727^x728));

    if (t174 != 2207547906LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x729 = INT32_MAX;
	volatile uint32_t x730 = UINT32_MAX;
	uint64_t x731 = 3762324712132828102LLU;
	int64_t x732 = INT64_MIN;
	volatile uint64_t t175 = 271LLU;

    t175 = ((x729!=x730)+(x731^x732));

    if (t175 != 12985696748987603911LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x733 = -1;
	int32_t x734 = INT32_MAX;
	uint16_t x736 = UINT16_MAX;
	volatile int32_t t176 = -17057524;

    t176 = ((x733!=x734)+(x735^x736));

    if (t176 != -32768) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x737 = -1LL;
	int32_t x739 = INT32_MAX;
	uint32_t x740 = UINT32_MAX;
	volatile uint32_t t177 = 57U;

    t177 = ((x737!=x738)+(x739^x740));

    if (t177 != 2147483648U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x741 = 1U;
	static uint8_t x743 = UINT8_MAX;
	volatile uint8_t x744 = 25U;
	int32_t t178 = 703723;

    t178 = ((x741!=x742)+(x743^x744));

    if (t178 != 231) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x745 = INT64_MIN;
	volatile uint8_t x746 = 16U;
	int8_t x748 = -56;
	int32_t t179 = 38629934;

    t179 = ((x745!=x746)+(x747^x748));

    if (t179 != -58) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x749 = 874U;
	volatile int64_t x750 = INT64_MIN;
	int16_t x751 = -36;
	uint64_t x752 = 8829LLU;
	volatile uint64_t t180 = 14LLU;

    t180 = ((x749!=x750)+(x751^x752));

    if (t180 != 18446744073709542818LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x753 = -1;
	int16_t x754 = INT16_MIN;
	int16_t x755 = INT16_MIN;
	uint32_t x756 = 424244231U;

    t181 = ((x753!=x754)+(x755^x756));

    if (t181 != 3870749704U) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x758 = -6;
	int16_t x759 = 0;
	volatile int32_t t182 = -94319;

    t182 = ((x757!=x758)+(x759^x760));

    if (t182 != 256) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x761 = -2;
	int64_t x762 = INT64_MIN;
	uint8_t x763 = 7U;
	int64_t x764 = -1766132727503023599LL;
	volatile int64_t t183 = -33443LL;

    t183 = ((x761!=x762)+(x763^x764));

    if (t183 != -1766132727503023593LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x766 = 0;
	static int64_t x767 = INT64_MIN;
	volatile int64_t t184 = 30869072840014LL;

    t184 = ((x765!=x766)+(x767^x768));

    if (t184 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x769 = 49060U;
	int32_t x770 = INT32_MAX;
	static int16_t x771 = INT16_MAX;
	int32_t x772 = -1;
	int32_t t185 = -7811693;

    t185 = ((x769!=x770)+(x771^x772));

    if (t185 != -32767) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x774 = 3U;
	static uint16_t x775 = 17U;
	static int32_t t186 = -501538;

    t186 = ((x773!=x774)+(x775^x776));

    if (t186 != -29) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x777 = 16U;
	int16_t x778 = INT16_MIN;

    t187 = ((x777!=x778)+(x779^x780));

    if (t187 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x782 = 447LLU;
	int8_t x784 = INT8_MIN;
	int32_t t188 = 313;

    t188 = ((x781!=x782)+(x783^x784));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x785 = -191018283651817272LL;
	uint16_t x786 = UINT16_MAX;
	volatile uint16_t x787 = 20255U;
	uint64_t x788 = 21LLU;
	volatile uint64_t t189 = 3274647261LLU;

    t189 = ((x785!=x786)+(x787^x788));

    if (t189 != 20235LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x789 = 0U;
	int32_t x790 = INT32_MIN;
	static volatile uint64_t x791 = UINT64_MAX;
	uint8_t x792 = UINT8_MAX;
	volatile uint64_t t190 = 2864510652686297LLU;

    t190 = ((x789!=x790)+(x791^x792));

    if (t190 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x793 = 3U;
	static int8_t x794 = INT8_MAX;
	static int64_t x795 = -1LL;
	int16_t x796 = INT16_MIN;
	int64_t t191 = -9605649201316LL;

    t191 = ((x793!=x794)+(x795^x796));

    if (t191 != 32768LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x797 = INT16_MIN;
	int16_t x798 = INT16_MIN;
	volatile int16_t x799 = INT16_MIN;
	int32_t x800 = INT32_MIN;
	volatile int32_t t192 = -4848;

    t192 = ((x797!=x798)+(x799^x800));

    if (t192 != 2147450880) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x801 = UINT16_MAX;
	volatile int8_t x802 = INT8_MIN;
	uint8_t x803 = 88U;
	uint16_t x804 = UINT16_MAX;
	int32_t t193 = 28;

    t193 = ((x801!=x802)+(x803^x804));

    if (t193 != 65448) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x805 = -1421087550582LL;
	volatile int16_t x807 = INT16_MIN;
	uint32_t x808 = 246730368U;
	static uint32_t t194 = 1831009142U;

    t194 = ((x805!=x806)+(x807^x808));

    if (t194 != 4048244353U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x809 = -1;
	static volatile int16_t x810 = 8;
	uint32_t x811 = 5213779U;
	uint64_t x812 = 116708435LLU;
	uint64_t t195 = 24LLU;

    t195 = ((x809!=x810)+(x811^x812));

    if (t195 != 112941569LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x817 = INT32_MIN;
	int64_t x818 = INT64_MIN;
	uint8_t x819 = UINT8_MAX;
	int32_t t196 = -26951;

    t196 = ((x817!=x818)+(x819^x820));

    if (t196 != -255) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x821 = -6983LL;
	volatile int16_t x822 = 51;
	int8_t x823 = INT8_MIN;
	static int32_t x824 = INT32_MIN;
	int32_t t197 = 23096910;

    t197 = ((x821!=x822)+(x823^x824));

    if (t197 != 2147483521) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x825 = 6421LLU;
	volatile int16_t x826 = -1;
	uint64_t x827 = UINT64_MAX;
	int32_t x828 = INT32_MAX;
	uint64_t t198 = 12LLU;

    t198 = ((x825!=x826)+(x827^x828));

    if (t198 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x829 = INT64_MIN;
	int16_t x831 = INT16_MIN;
	volatile int32_t t199 = 261740579;

    t199 = ((x829!=x830)+(x831^x832));

    if (t199 != -42899) { NG(); } else { ; }
	
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

