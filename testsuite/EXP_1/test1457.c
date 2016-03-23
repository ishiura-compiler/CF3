
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

static int64_t x1 = -1LL;
volatile int32_t x2 = -1;
int8_t x9 = -1;
uint32_t x10 = 247909U;
volatile int8_t x12 = INT8_MIN;
volatile int16_t x14 = -116;
int64_t x15 = INT64_MIN;
int64_t x16 = INT64_MIN;
static int32_t x21 = INT32_MIN;
uint16_t x33 = 1698U;
int32_t x36 = -1;
int16_t x39 = INT16_MAX;
uint32_t x54 = 80U;
volatile uint16_t x59 = 5U;
int32_t x61 = INT32_MIN;
int8_t x63 = -10;
int32_t x64 = INT32_MIN;
int8_t x68 = INT8_MAX;
uint32_t x78 = 101U;
uint64_t x80 = UINT64_MAX;
uint64_t x81 = UINT64_MAX;
static int32_t t20 = -29561810;
uint16_t x88 = 19843U;
uint32_t x89 = 40018692U;
uint16_t x92 = UINT16_MAX;
int16_t x93 = -955;
static int64_t x94 = -124043285LL;
uint32_t x98 = 894155564U;
int64_t x101 = -17LL;
static uint64_t x103 = UINT64_MAX;
int32_t x106 = INT32_MAX;
int64_t x107 = -1LL;
int8_t x108 = -58;
volatile int64_t t28 = -502LL;
uint32_t x118 = 1259U;
uint16_t x119 = UINT16_MAX;
int8_t x124 = -1;
int8_t x127 = 30;
static int8_t x129 = INT8_MIN;
volatile int32_t t32 = -485;
static volatile int32_t t34 = 7692;
int64_t x144 = -8141874460470LL;
int16_t x150 = -1;
uint64_t x154 = UINT64_MAX;
volatile uint16_t x156 = UINT16_MAX;
volatile int16_t x160 = 52;
static int64_t t40 = 6402LL;
int32_t x168 = -759;
int64_t x169 = INT64_MAX;
volatile uint32_t x173 = 971U;
int8_t x174 = INT8_MIN;
uint8_t x175 = 1U;
volatile int64_t x179 = INT64_MIN;
int32_t t44 = -960052655;
int64_t x181 = INT64_MIN;
int32_t x182 = 47225;
volatile int16_t x197 = -5;
uint8_t x198 = UINT8_MAX;
int32_t x221 = INT32_MIN;
volatile uint8_t x224 = 0U;
int8_t x226 = INT8_MIN;
int16_t x232 = -1;
int8_t x237 = -1;
int32_t t59 = 304901;
int32_t x245 = INT32_MIN;
uint16_t x248 = UINT16_MAX;
static volatile int8_t x249 = -14;
int64_t x257 = INT64_MIN;
int16_t x263 = INT16_MIN;
int8_t x271 = INT8_MIN;
uint16_t x272 = 125U;
int16_t x274 = -1;
int64_t t68 = 26078639931453527LL;
int16_t x292 = INT16_MIN;
int64_t x305 = -1LL;
volatile int8_t x306 = INT8_MIN;
int32_t x318 = INT32_MIN;
volatile int32_t t78 = 1;
int32_t x325 = INT32_MIN;
int16_t x328 = INT16_MIN;
static int8_t x330 = INT8_MAX;
int16_t x333 = INT16_MIN;
uint32_t x336 = 133U;
static uint32_t t81 = 57U;
int32_t x347 = INT32_MIN;
static int8_t x348 = -1;
volatile int8_t x352 = 33;
int32_t x354 = INT32_MAX;
uint8_t x360 = UINT8_MAX;
volatile int64_t x362 = INT64_MAX;
int16_t x363 = -1;
volatile uint8_t x371 = 93U;
int32_t x375 = 18;
int8_t x377 = -1;
uint16_t x381 = UINT16_MAX;
volatile uint8_t x382 = 42U;
volatile int8_t x386 = -1;
static int64_t x390 = -1LL;
int64_t x396 = INT64_MIN;
static int64_t t96 = -3154558926LL;
int32_t x397 = INT32_MIN;
int8_t x405 = 1;
uint16_t x406 = 28U;
uint32_t x409 = 563430U;
uint16_t x411 = 5U;
int64_t x412 = 68600329231LL;
uint32_t x413 = 795391231U;
volatile int16_t x414 = INT16_MIN;
int8_t x416 = -1;
int8_t x425 = INT8_MIN;
volatile int32_t t105 = -1784815;
uint32_t x440 = 303658811U;
uint16_t x448 = 21017U;
uint32_t t109 = 12703041U;
static int64_t x460 = 0LL;
int64_t t110 = 23484LL;
static uint32_t x461 = 456U;
uint64_t x475 = 3873172146855061347LLU;
static volatile int32_t t114 = -243571;
int8_t x494 = INT8_MIN;
volatile uint8_t x495 = 3U;
volatile int32_t t118 = -433136;
int64_t x504 = INT64_MIN;
uint8_t x508 = UINT8_MAX;
int32_t t122 = -402;
int8_t x519 = 19;
int32_t x521 = INT32_MIN;
int32_t x524 = -94164;
static volatile uint32_t x526 = 6233264U;
int8_t x536 = INT8_MAX;
volatile int32_t t129 = -89272;
int64_t x548 = -1LL;
int64_t x557 = 2809320503LL;
int64_t t136 = 2229439103599698783LL;
volatile int32_t t137 = -939452492;
int8_t x578 = INT8_MIN;
uint16_t x579 = 4005U;
int8_t x580 = -1;
uint8_t x585 = 24U;
int8_t x587 = INT8_MIN;
static uint64_t t142 = 536487662010285LLU;
int64_t x598 = -19LL;
int64_t x610 = INT64_MIN;
int16_t x615 = INT16_MIN;
volatile int32_t t146 = -72;
int32_t x618 = INT32_MIN;
int16_t x623 = INT16_MAX;
int16_t x624 = 162;
static int32_t t148 = 5243502;
uint8_t x632 = UINT8_MAX;
int32_t t149 = -30688;
int32_t x639 = INT32_MIN;
uint32_t t151 = 35U;
int8_t x646 = INT8_MIN;
uint16_t x656 = UINT16_MAX;
int16_t x658 = INT16_MAX;
int64_t x664 = -1LL;
volatile int16_t x675 = INT16_MIN;
int16_t x683 = INT16_MIN;
int16_t x684 = INT16_MAX;
int16_t x690 = -11583;
int32_t t162 = 6088;
int8_t x694 = INT8_MAX;
static volatile uint32_t x695 = 2007U;
int16_t x700 = INT16_MIN;
static uint16_t x701 = 30031U;
int16_t x702 = INT16_MAX;
volatile int8_t x733 = INT8_MIN;
volatile int32_t t173 = 23648582;
static int64_t x747 = -107158LL;
static int16_t x749 = -1;
int32_t x751 = INT32_MAX;
int64_t t176 = 621157364168345LL;
int16_t x757 = INT16_MAX;
uint64_t x761 = 808819506072883LLU;
int32_t t181 = -35;
static int64_t x782 = -18589983219895919LL;
uint64_t t183 = 27167726966277LLU;
static int32_t x791 = -256;
int8_t x792 = -3;
int32_t x796 = -1;
volatile int8_t x798 = 13;
volatile int32_t t187 = 1180992;
static uint32_t x812 = 1767438U;
volatile uint32_t t190 = 1U;
volatile int32_t t191 = 1;
int32_t x824 = INT32_MIN;
int32_t x826 = 437135974;
int32_t x834 = -1103;
static volatile int32_t x841 = -1;


void f0(void) {
    	volatile int8_t x3 = 12;
	uint64_t x4 = UINT64_MAX;
	static uint64_t t0 = 86883LLU;

    t0 = (((x1==x2)!=x3)+x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x5 = 82U;
	static volatile int8_t x6 = -2;
	static int32_t x7 = INT32_MAX;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 3610440;

    t1 = (((x5==x6)!=x7)+x8);

    if (t1 != -2147483647) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x11 = 11452699584645076LLU;
	int32_t t2 = 120210;

    t2 = (((x9==x10)!=x11)+x12);

    if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	static volatile int64_t t3 = -2164362307051521797LL;

    t3 = (((x13==x14)!=x15)+x16);

    if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x17 = UINT16_MAX;
	int32_t x18 = INT32_MIN;
	volatile int64_t x19 = -247LL;
	uint8_t x20 = 92U;
	int32_t t4 = 156269241;

    t4 = (((x17==x18)!=x19)+x20);

    if (t4 != 93) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = -1LL;
	volatile int32_t x23 = INT32_MIN;
	volatile int64_t x24 = INT64_MIN;
	volatile int64_t t5 = 36253167059574282LL;

    t5 = (((x21==x22)!=x23)+x24);

    if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x25 = UINT16_MAX;
	uint8_t x26 = UINT8_MAX;
	static int32_t x27 = INT32_MIN;
	int64_t x28 = -784LL;
	volatile int64_t t6 = -368906795493011759LL;

    t6 = (((x25==x26)!=x27)+x28);

    if (t6 != -783LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = UINT8_MAX;
	uint64_t x30 = UINT64_MAX;
	int64_t x31 = -320501259074214LL;
	volatile uint8_t x32 = UINT8_MAX;
	static int32_t t7 = 1;

    t7 = (((x29==x30)!=x31)+x32);

    if (t7 != 256) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x34 = 396;
	uint32_t x35 = 3900U;
	volatile int32_t t8 = -2951230;

    t8 = (((x33==x34)!=x35)+x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -36LL;
	static int64_t x38 = -16892LL;
	volatile uint32_t x40 = UINT32_MAX;
	uint32_t t9 = 23U;

    t9 = (((x37==x38)!=x39)+x40);

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	static int64_t x42 = INT64_MIN;
	static uint64_t x43 = UINT64_MAX;
	int64_t x44 = 4187157550899716177LL;
	static volatile int64_t t10 = -785372346413164LL;

    t10 = (((x41==x42)!=x43)+x44);

    if (t10 != 4187157550899716178LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -49;
	uint64_t x46 = UINT64_MAX;
	uint16_t x47 = UINT16_MAX;
	static uint8_t x48 = 28U;
	static int32_t t11 = -28;

    t11 = (((x45==x46)!=x47)+x48);

    if (t11 != 29) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = 79402153;
	int64_t x50 = INT64_MIN;
	volatile int8_t x51 = INT8_MAX;
	int64_t x52 = 999LL;
	static int64_t t12 = -86LL;

    t12 = (((x49==x50)!=x51)+x52);

    if (t12 != 1000LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MAX;
	static volatile uint32_t x55 = 5201U;
	uint8_t x56 = UINT8_MAX;
	static volatile int32_t t13 = 230668;

    t13 = (((x53==x54)!=x55)+x56);

    if (t13 != 256) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = INT8_MIN;
	int8_t x58 = -30;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = -11771599;

    t14 = (((x57==x58)!=x59)+x60);

    if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x62 = -1;
	int32_t t15 = 58;

    t15 = (((x61==x62)!=x63)+x64);

    if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 30U;
	int16_t x66 = INT16_MIN;
	uint32_t x67 = UINT32_MAX;
	int32_t t16 = -13;

    t16 = (((x65==x66)!=x67)+x68);

    if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = INT64_MIN;
	int16_t x70 = INT16_MAX;
	int16_t x71 = 348;
	uint16_t x72 = UINT16_MAX;
	int32_t t17 = -75956933;

    t17 = (((x69==x70)!=x71)+x72);

    if (t17 != 65536) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -310002508885LL;
	int32_t x74 = -218;
	uint16_t x75 = 636U;
	int64_t x76 = INT64_MIN;
	int64_t t18 = -219123445774644984LL;

    t18 = (((x73==x74)!=x75)+x76);

    if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -1;
	int8_t x79 = -2;
	static uint64_t t19 = 1014274707728011582LLU;

    t19 = (((x77==x78)!=x79)+x80);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x82 = -163;
	int8_t x83 = INT8_MAX;
	uint16_t x84 = UINT16_MAX;

    t20 = (((x81==x82)!=x83)+x84);

    if (t20 != 65536) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 1962926881915360013LLU;
	volatile int16_t x86 = -1;
	static uint32_t x87 = 5285943U;
	int32_t t21 = -7369;

    t21 = (((x85==x86)!=x87)+x88);

    if (t21 != 19844) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x90 = 9053067698921LL;
	uint8_t x91 = 60U;
	int32_t t22 = -82107;

    t22 = (((x89==x90)!=x91)+x92);

    if (t22 != 65536) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x95 = INT16_MAX;
	int32_t x96 = INT32_MIN;
	static volatile int32_t t23 = -1793457;

    t23 = (((x93==x94)!=x95)+x96);

    if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = -15654;
	uint64_t x99 = 4939314079340LLU;
	int16_t x100 = 6549;
	volatile int32_t t24 = -2;

    t24 = (((x97==x98)!=x99)+x100);

    if (t24 != 6550) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x102 = -1;
	int32_t x104 = INT32_MIN;
	volatile int32_t t25 = -207037;

    t25 = (((x101==x102)!=x103)+x104);

    if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 397404594LLU;
	int32_t t26 = 1877988;

    t26 = (((x105==x106)!=x107)+x108);

    if (t26 != -57) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	static int16_t x110 = -10;
	int8_t x111 = INT8_MAX;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = -1;

    t27 = (((x109==x110)!=x111)+x112);

    if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MAX;
	int32_t x114 = INT32_MIN;
	static uint64_t x115 = 28737472LLU;
	static int64_t x116 = -1LL;

    t28 = (((x113==x114)!=x115)+x116);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = UINT8_MAX;
	static volatile uint32_t x120 = UINT32_MAX;
	static uint32_t t29 = 439388U;

    t29 = (((x117==x118)!=x119)+x120);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x121 = 7U;
	volatile int8_t x122 = INT8_MIN;
	uint32_t x123 = 4U;
	volatile int32_t t30 = -342383;

    t30 = (((x121==x122)!=x123)+x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 1351350403207LLU;
	static uint32_t x126 = 1659879885U;
	int32_t x128 = 720;
	volatile int32_t t31 = 22422;

    t31 = (((x125==x126)!=x127)+x128);

    if (t31 != 721) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x130 = UINT16_MAX;
	int8_t x131 = INT8_MIN;
	uint16_t x132 = 26U;

    t32 = (((x129==x130)!=x131)+x132);

    if (t32 != 27) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 4429640537081957LLU;
	uint16_t x134 = UINT16_MAX;
	uint8_t x135 = UINT8_MAX;
	uint16_t x136 = 83U;
	int32_t t33 = 83257;

    t33 = (((x133==x134)!=x135)+x136);

    if (t33 != 84) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MAX;
	int8_t x138 = -1;
	uint64_t x139 = 767904LLU;
	int8_t x140 = INT8_MIN;

    t34 = (((x137==x138)!=x139)+x140);

    if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = UINT16_MAX;
	int32_t x142 = INT32_MIN;
	uint32_t x143 = 46U;
	volatile int64_t t35 = 1097LL;

    t35 = (((x141==x142)!=x143)+x144);

    if (t35 != -8141874460469LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MAX;
	static int32_t x146 = -13858;
	int32_t x147 = INT32_MIN;
	uint8_t x148 = 49U;
	static volatile int32_t t36 = 334364;

    t36 = (((x145==x146)!=x147)+x148);

    if (t36 != 50) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x149 = UINT64_MAX;
	int64_t x151 = INT64_MAX;
	uint8_t x152 = 0U;
	volatile int32_t t37 = 4105789;

    t37 = (((x149==x150)!=x151)+x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = UINT8_MAX;
	static int32_t x155 = -1;
	static volatile int32_t t38 = -11042;

    t38 = (((x153==x154)!=x155)+x156);

    if (t38 != 65536) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = -1;
	int64_t x158 = -2238383762056416LL;
	uint32_t x159 = 22580U;
	volatile int32_t t39 = 199;

    t39 = (((x157==x158)!=x159)+x160);

    if (t39 != 53) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -1;
	int32_t x162 = 94807440;
	static int16_t x163 = INT16_MAX;
	int64_t x164 = 12725721878629190LL;

    t40 = (((x161==x162)!=x163)+x164);

    if (t40 != 12725721878629191LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -1;
	uint64_t x166 = 923LLU;
	int64_t x167 = INT64_MIN;
	volatile int32_t t41 = -936382;

    t41 = (((x165==x166)!=x167)+x168);

    if (t41 != -758) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x170 = INT8_MIN;
	static uint32_t x171 = UINT32_MAX;
	int16_t x172 = INT16_MAX;
	volatile int32_t t42 = 3;

    t42 = (((x169==x170)!=x171)+x172);

    if (t42 != 32768) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x176 = 428LL;
	int64_t t43 = -2717526048LL;

    t43 = (((x173==x174)!=x175)+x176);

    if (t43 != 429LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = -1;
	static int32_t x178 = INT32_MIN;
	int8_t x180 = -1;

    t44 = (((x177==x178)!=x179)+x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x183 = 190U;
	int16_t x184 = -1;
	static int32_t t45 = -6415162;

    t45 = (((x181==x182)!=x183)+x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MAX;
	int64_t x186 = INT64_MAX;
	int8_t x187 = 0;
	volatile int32_t x188 = -1;
	volatile int32_t t46 = 1884604;

    t46 = (((x185==x186)!=x187)+x188);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	static volatile int32_t x190 = INT32_MAX;
	int32_t x191 = -1;
	uint32_t x192 = UINT32_MAX;
	volatile uint32_t t47 = 17355U;

    t47 = (((x189==x190)!=x191)+x192);

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x193 = 3558U;
	static int16_t x194 = INT16_MIN;
	volatile int32_t x195 = -1;
	int64_t x196 = INT64_MIN;
	static int64_t t48 = -25LL;

    t48 = (((x193==x194)!=x195)+x196);

    if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x199 = INT64_MIN;
	uint8_t x200 = 3U;
	volatile int32_t t49 = 3710829;

    t49 = (((x197==x198)!=x199)+x200);

    if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -1;
	int8_t x202 = INT8_MIN;
	int32_t x203 = INT32_MIN;
	int8_t x204 = INT8_MAX;
	static volatile int32_t t50 = 14200830;

    t50 = (((x201==x202)!=x203)+x204);

    if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 5291906123LLU;
	static int32_t x206 = INT32_MAX;
	int16_t x207 = INT16_MAX;
	volatile int16_t x208 = 5;
	volatile int32_t t51 = -28065060;

    t51 = (((x205==x206)!=x207)+x208);

    if (t51 != 6) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MAX;
	int16_t x210 = INT16_MIN;
	uint8_t x211 = 56U;
	int64_t x212 = 32454439524414178LL;
	volatile int64_t t52 = 649864803872LL;

    t52 = (((x209==x210)!=x211)+x212);

    if (t52 != 32454439524414179LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x217 = INT32_MIN;
	uint8_t x218 = UINT8_MAX;
	uint16_t x219 = 14359U;
	uint8_t x220 = 34U;
	static int32_t t53 = 0;

    t53 = (((x217==x218)!=x219)+x220);

    if (t53 != 35) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x222 = INT8_MIN;
	uint16_t x223 = UINT16_MAX;
	volatile int32_t t54 = 32685;

    t54 = (((x221==x222)!=x223)+x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x225 = -2LL;
	int32_t x227 = -268502;
	volatile int32_t x228 = INT32_MIN;
	volatile int32_t t55 = 8814;

    t55 = (((x225==x226)!=x227)+x228);

    if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x229 = -107937;
	int32_t x230 = -1044048715;
	int8_t x231 = INT8_MIN;
	int32_t t56 = -6578;

    t56 = (((x229==x230)!=x231)+x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint16_t x233 = 3U;
	uint8_t x234 = 1U;
	static int32_t x235 = INT32_MAX;
	volatile uint32_t x236 = 1649U;
	static volatile uint32_t t57 = 2249U;

    t57 = (((x233==x234)!=x235)+x236);

    if (t57 != 1650U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x238 = 54;
	int8_t x239 = 45;
	int16_t x240 = 15227;
	static volatile int32_t t58 = -3;

    t58 = (((x237==x238)!=x239)+x240);

    if (t58 != 15228) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x241 = 2394912;
	int16_t x242 = 0;
	static int8_t x243 = 2;
	int8_t x244 = INT8_MAX;

    t59 = (((x241==x242)!=x243)+x244);

    if (t59 != 128) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int64_t x246 = INT64_MIN;
	int16_t x247 = INT16_MAX;
	int32_t t60 = 0;

    t60 = (((x245==x246)!=x247)+x248);

    if (t60 != 65536) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x250 = INT8_MAX;
	volatile int8_t x251 = INT8_MAX;
	int64_t x252 = -1LL;
	volatile int64_t t61 = 31981475490LL;

    t61 = (((x249==x250)!=x251)+x252);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x253 = UINT8_MAX;
	static int64_t x254 = INT64_MAX;
	uint64_t x255 = UINT64_MAX;
	uint16_t x256 = 44U;
	volatile int32_t t62 = -1;

    t62 = (((x253==x254)!=x255)+x256);

    if (t62 != 45) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x258 = -3;
	int32_t x259 = -1;
	uint16_t x260 = 5U;
	volatile int32_t t63 = 0;

    t63 = (((x257==x258)!=x259)+x260);

    if (t63 != 6) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x261 = -961779089;
	int8_t x262 = INT8_MAX;
	int8_t x264 = -1;
	int32_t t64 = -4706600;

    t64 = (((x261==x262)!=x263)+x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x269 = 12;
	static volatile int8_t x270 = INT8_MIN;
	volatile int32_t t65 = 14;

    t65 = (((x269==x270)!=x271)+x272);

    if (t65 != 126) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x273 = INT32_MIN;
	uint8_t x275 = 10U;
	uint16_t x276 = 478U;
	volatile int32_t t66 = -23;

    t66 = (((x273==x274)!=x275)+x276);

    if (t66 != 479) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = -16;
	volatile uint32_t x278 = 984U;
	static int8_t x279 = INT8_MAX;
	int8_t x280 = -1;
	static volatile int32_t t67 = 30695401;

    t67 = (((x277==x278)!=x279)+x280);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x281 = 1325LL;
	uint16_t x282 = 0U;
	uint64_t x283 = 4283543LLU;
	int64_t x284 = 2LL;

    t68 = (((x281==x282)!=x283)+x284);

    if (t68 != 3LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x285 = INT8_MIN;
	int32_t x286 = 1008;
	int64_t x287 = INT64_MAX;
	uint32_t x288 = UINT32_MAX;
	volatile uint32_t t69 = 694U;

    t69 = (((x285==x286)!=x287)+x288);

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x289 = 1420413664LL;
	static uint64_t x290 = 41415405LLU;
	int16_t x291 = 61;
	volatile int32_t t70 = -1048638;

    t70 = (((x289==x290)!=x291)+x292);

    if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x293 = INT32_MAX;
	uint16_t x294 = UINT16_MAX;
	int64_t x295 = INT64_MAX;
	volatile int32_t x296 = -1;
	volatile int32_t t71 = -17339;

    t71 = (((x293==x294)!=x295)+x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x297 = INT64_MIN;
	static int64_t x298 = INT64_MIN;
	int64_t x299 = INT64_MIN;
	int32_t x300 = -48127;
	volatile int32_t t72 = -4067590;

    t72 = (((x297==x298)!=x299)+x300);

    if (t72 != -48126) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x301 = 0LLU;
	volatile int16_t x302 = 868;
	int8_t x303 = 20;
	static volatile uint8_t x304 = 0U;
	static volatile int32_t t73 = 293837881;

    t73 = (((x301==x302)!=x303)+x304);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x307 = -808;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t74 = 71770142;

    t74 = (((x305==x306)!=x307)+x308);

    if (t74 != 256) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x309 = -1LL;
	int32_t x310 = -502;
	static uint8_t x311 = 3U;
	uint32_t x312 = 638215194U;
	uint32_t t75 = 58585111U;

    t75 = (((x309==x310)!=x311)+x312);

    if (t75 != 638215195U) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int32_t x313 = -206897;
	int16_t x314 = -1;
	int16_t x315 = INT16_MIN;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t76 = 7749;

    t76 = (((x313==x314)!=x315)+x316);

    if (t76 != 65536) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x317 = 61;
	int64_t x319 = -1LL;
	int64_t x320 = INT64_MIN;
	volatile int64_t t77 = 1LL;

    t77 = (((x317==x318)!=x319)+x320);

    if (t77 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x321 = 2;
	volatile int16_t x322 = -1;
	volatile int32_t x323 = INT32_MIN;
	volatile uint16_t x324 = 14U;

    t78 = (((x321==x322)!=x323)+x324);

    if (t78 != 15) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x326 = UINT8_MAX;
	int8_t x327 = -1;
	volatile int32_t t79 = 506;

    t79 = (((x325==x326)!=x327)+x328);

    if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x329 = -192LL;
	int16_t x331 = INT16_MIN;
	int8_t x332 = 7;
	volatile int32_t t80 = -107691;

    t80 = (((x329==x330)!=x331)+x332);

    if (t80 != 8) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x334 = 14U;
	static volatile int16_t x335 = INT16_MIN;

    t81 = (((x333==x334)!=x335)+x336);

    if (t81 != 134U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x337 = -1569;
	int16_t x338 = INT16_MIN;
	volatile uint16_t x339 = 31U;
	int16_t x340 = INT16_MAX;
	volatile int32_t t82 = 589976447;

    t82 = (((x337==x338)!=x339)+x340);

    if (t82 != 32768) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x341 = INT64_MAX;
	int64_t x342 = -6430122935241LL;
	static volatile uint8_t x343 = UINT8_MAX;
	int16_t x344 = 285;
	static int32_t t83 = -536854;

    t83 = (((x341==x342)!=x343)+x344);

    if (t83 != 286) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x345 = UINT32_MAX;
	volatile int16_t x346 = INT16_MIN;
	volatile int32_t t84 = -8461;

    t84 = (((x345==x346)!=x347)+x348);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x349 = INT64_MIN;
	uint32_t x350 = 18554U;
	uint8_t x351 = UINT8_MAX;
	int32_t t85 = 3016;

    t85 = (((x349==x350)!=x351)+x352);

    if (t85 != 34) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x353 = 4U;
	int8_t x355 = 0;
	int32_t x356 = -4509;
	volatile int32_t t86 = -16712184;

    t86 = (((x353==x354)!=x355)+x356);

    if (t86 != -4509) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x357 = -3381509614048510LL;
	int16_t x358 = INT16_MIN;
	volatile int32_t x359 = -20487;
	static volatile int32_t t87 = 2040465;

    t87 = (((x357==x358)!=x359)+x360);

    if (t87 != 256) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x361 = -2201;
	int64_t x364 = -1LL;
	static volatile int64_t t88 = -1LL;

    t88 = (((x361==x362)!=x363)+x364);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x365 = INT64_MAX;
	int8_t x366 = INT8_MIN;
	int64_t x367 = INT64_MAX;
	volatile int32_t x368 = -85691;
	static volatile int32_t t89 = 36;

    t89 = (((x365==x366)!=x367)+x368);

    if (t89 != -85690) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x369 = -1;
	int64_t x370 = INT64_MAX;
	uint16_t x372 = 0U;
	int32_t t90 = 108318;

    t90 = (((x369==x370)!=x371)+x372);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x373 = -27383833432292431LL;
	int32_t x374 = -2775;
	int8_t x376 = -1;
	int32_t t91 = 3;

    t91 = (((x373==x374)!=x375)+x376);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x378 = -763418736LL;
	int64_t x379 = 3021041761LL;
	int8_t x380 = INT8_MIN;
	static volatile int32_t t92 = -18;

    t92 = (((x377==x378)!=x379)+x380);

    if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x383 = INT32_MIN;
	uint64_t x384 = 715494374094971222LLU;
	volatile uint64_t t93 = 866LLU;

    t93 = (((x381==x382)!=x383)+x384);

    if (t93 != 715494374094971223LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x385 = INT64_MIN;
	int16_t x387 = INT16_MIN;
	static volatile int16_t x388 = 2;
	volatile int32_t t94 = 1;

    t94 = (((x385==x386)!=x387)+x388);

    if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x389 = 1079941679012827LLU;
	uint16_t x391 = UINT16_MAX;
	uint64_t x392 = UINT64_MAX;
	static uint64_t t95 = 3773493987942LLU;

    t95 = (((x389==x390)!=x391)+x392);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x393 = UINT8_MAX;
	volatile int8_t x394 = -1;
	static volatile uint64_t x395 = 5LLU;

    t96 = (((x393==x394)!=x395)+x396);

    if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint16_t x398 = 11U;
	uint64_t x399 = 5235587008149648LLU;
	uint64_t x400 = 2LLU;
	uint64_t t97 = 218LLU;

    t97 = (((x397==x398)!=x399)+x400);

    if (t97 != 3LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x401 = INT8_MIN;
	volatile uint64_t x402 = 652172487814446203LLU;
	static volatile int64_t x403 = INT64_MAX;
	volatile uint64_t x404 = UINT64_MAX;
	volatile uint64_t t98 = 20LLU;

    t98 = (((x401==x402)!=x403)+x404);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x407 = 75U;
	volatile uint64_t x408 = 4LLU;
	static volatile uint64_t t99 = 3317620859552539LLU;

    t99 = (((x405==x406)!=x407)+x408);

    if (t99 != 5LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x410 = UINT16_MAX;
	static volatile int64_t t100 = -3677950583LL;

    t100 = (((x409==x410)!=x411)+x412);

    if (t100 != 68600329232LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x415 = INT32_MAX;
	int32_t t101 = -1;

    t101 = (((x413==x414)!=x415)+x416);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x417 = 2;
	int32_t x418 = INT32_MIN;
	int8_t x419 = INT8_MIN;
	volatile uint8_t x420 = 1U;
	volatile int32_t t102 = -225945;

    t102 = (((x417==x418)!=x419)+x420);

    if (t102 != 2) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x426 = 7749077619420LLU;
	int8_t x427 = 1;
	volatile uint8_t x428 = 21U;
	int32_t t103 = 1;

    t103 = (((x425==x426)!=x427)+x428);

    if (t103 != 22) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x429 = INT32_MIN;
	static uint64_t x430 = 343768121LLU;
	uint64_t x431 = 6282778642789LLU;
	uint16_t x432 = 681U;
	static int32_t t104 = 23838;

    t104 = (((x429==x430)!=x431)+x432);

    if (t104 != 682) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x433 = 548855015955470072LL;
	int64_t x434 = INT64_MIN;
	int64_t x435 = 138190LL;
	int16_t x436 = INT16_MIN;

    t105 = (((x433==x434)!=x435)+x436);

    if (t105 != -32767) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x437 = INT32_MIN;
	int16_t x438 = INT16_MIN;
	volatile uint64_t x439 = 12052959346147254LLU;
	uint32_t t106 = 77009U;

    t106 = (((x437==x438)!=x439)+x440);

    if (t106 != 303658812U) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x441 = -1LL;
	uint32_t x442 = 944707066U;
	static int8_t x443 = INT8_MAX;
	int32_t x444 = -1;
	int32_t t107 = 488886;

    t107 = (((x441==x442)!=x443)+x444);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x445 = 12U;
	volatile int64_t x446 = -63386634LL;
	int32_t x447 = -1;
	int32_t t108 = -288191537;

    t108 = (((x445==x446)!=x447)+x448);

    if (t108 != 21018) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x449 = INT8_MAX;
	int8_t x450 = 24;
	uint8_t x451 = 54U;
	uint32_t x452 = 14619497U;

    t109 = (((x449==x450)!=x451)+x452);

    if (t109 != 14619498U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x457 = 7U;
	int32_t x458 = INT32_MIN;
	int64_t x459 = -1LL;

    t110 = (((x457==x458)!=x459)+x460);

    if (t110 != 1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x462 = 427255626LLU;
	static int64_t x463 = INT64_MIN;
	uint32_t x464 = 385751U;
	uint32_t t111 = 19U;

    t111 = (((x461==x462)!=x463)+x464);

    if (t111 != 385752U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x465 = UINT16_MAX;
	static uint16_t x466 = 2U;
	uint8_t x467 = 13U;
	int8_t x468 = -45;
	int32_t t112 = -125256;

    t112 = (((x465==x466)!=x467)+x468);

    if (t112 != -44) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x469 = 443831;
	uint64_t x470 = UINT64_MAX;
	uint16_t x471 = UINT16_MAX;
	static int32_t x472 = 212;
	int32_t t113 = 118349;

    t113 = (((x469==x470)!=x471)+x472);

    if (t113 != 213) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x473 = -628754777;
	volatile int16_t x474 = INT16_MIN;
	int32_t x476 = -1;

    t114 = (((x473==x474)!=x475)+x476);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint32_t x481 = 0U;
	int64_t x482 = -218LL;
	static int64_t x483 = INT64_MIN;
	uint64_t x484 = UINT64_MAX;
	uint64_t t115 = 16LLU;

    t115 = (((x481==x482)!=x483)+x484);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int32_t x485 = 1;
	int16_t x486 = -1;
	int8_t x487 = INT8_MAX;
	uint8_t x488 = 0U;
	int32_t t116 = 4;

    t116 = (((x485==x486)!=x487)+x488);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x489 = UINT32_MAX;
	int16_t x490 = INT16_MIN;
	volatile int64_t x491 = -1LL;
	volatile int8_t x492 = 0;
	static volatile int32_t t117 = -25504;

    t117 = (((x489==x490)!=x491)+x492);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x493 = UINT64_MAX;
	uint16_t x496 = UINT16_MAX;

    t118 = (((x493==x494)!=x495)+x496);

    if (t118 != 65536) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x497 = INT16_MAX;
	int64_t x498 = INT64_MAX;
	uint32_t x499 = UINT32_MAX;
	static volatile uint32_t x500 = 7599U;
	volatile uint32_t t119 = 219U;

    t119 = (((x497==x498)!=x499)+x500);

    if (t119 != 7600U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x501 = INT16_MIN;
	static volatile int32_t x502 = INT32_MIN;
	static uint32_t x503 = UINT32_MAX;
	int64_t t120 = -8LL;

    t120 = (((x501==x502)!=x503)+x504);

    if (t120 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x505 = 0U;
	uint16_t x506 = 26678U;
	uint64_t x507 = UINT64_MAX;
	volatile int32_t t121 = 152;

    t121 = (((x505==x506)!=x507)+x508);

    if (t121 != 256) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x509 = 3LL;
	int8_t x510 = INT8_MAX;
	int8_t x511 = INT8_MIN;
	int32_t x512 = -14690;

    t122 = (((x509==x510)!=x511)+x512);

    if (t122 != -14689) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x513 = 244U;
	int64_t x514 = INT64_MIN;
	uint8_t x515 = 47U;
	volatile uint8_t x516 = 126U;
	int32_t t123 = 3;

    t123 = (((x513==x514)!=x515)+x516);

    if (t123 != 127) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x517 = 217153013043154LLU;
	static int16_t x518 = -242;
	uint8_t x520 = 0U;
	int32_t t124 = 47113251;

    t124 = (((x517==x518)!=x519)+x520);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x522 = -1789137;
	volatile int32_t x523 = 52;
	static int32_t t125 = -5;

    t125 = (((x521==x522)!=x523)+x524);

    if (t125 != -94163) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x525 = 1035641775697581089LL;
	int64_t x527 = INT64_MIN;
	uint64_t x528 = 726786LLU;
	static volatile uint64_t t126 = 13471585032315812LLU;

    t126 = (((x525==x526)!=x527)+x528);

    if (t126 != 726787LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x529 = 2850974080131014598LLU;
	static int32_t x530 = 14226925;
	volatile int64_t x531 = INT64_MAX;
	volatile uint8_t x532 = 109U;
	static int32_t t127 = 159;

    t127 = (((x529==x530)!=x531)+x532);

    if (t127 != 110) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x533 = -1LL;
	volatile int64_t x534 = -1LL;
	volatile int8_t x535 = INT8_MAX;
	int32_t t128 = -235;

    t128 = (((x533==x534)!=x535)+x536);

    if (t128 != 128) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x537 = 62U;
	int64_t x538 = 1LL;
	int32_t x539 = 4;
	static int32_t x540 = -699338;

    t129 = (((x537==x538)!=x539)+x540);

    if (t129 != -699337) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x541 = INT32_MIN;
	uint32_t x542 = 64281U;
	static uint16_t x543 = 7U;
	volatile int64_t x544 = -1LL;
	int64_t t130 = -8001427LL;

    t130 = (((x541==x542)!=x543)+x544);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x545 = INT64_MIN;
	volatile int16_t x546 = -1252;
	int64_t x547 = -28562213308LL;
	volatile int64_t t131 = 253LL;

    t131 = (((x545==x546)!=x547)+x548);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x553 = INT8_MIN;
	volatile uint64_t x554 = 571LLU;
	volatile int64_t x555 = 4229744240286427617LL;
	volatile int8_t x556 = -13;
	static volatile int32_t t132 = 14742551;

    t132 = (((x553==x554)!=x555)+x556);

    if (t132 != -12) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x558 = -1LL;
	int16_t x559 = -1;
	volatile int16_t x560 = -176;
	volatile int32_t t133 = -1;

    t133 = (((x557==x558)!=x559)+x560);

    if (t133 != -175) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x561 = -3699362LL;
	static volatile uint16_t x562 = UINT16_MAX;
	static uint16_t x563 = 128U;
	volatile int64_t x564 = 4754143164929LL;
	int64_t t134 = 0LL;

    t134 = (((x561==x562)!=x563)+x564);

    if (t134 != 4754143164930LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x565 = UINT64_MAX;
	int64_t x566 = INT64_MAX;
	int16_t x567 = INT16_MIN;
	uint16_t x568 = UINT16_MAX;
	volatile int32_t t135 = 2158949;

    t135 = (((x565==x566)!=x567)+x568);

    if (t135 != 65536) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x569 = INT16_MIN;
	int32_t x570 = INT32_MIN;
	volatile uint64_t x571 = 8653387524714406LLU;
	int64_t x572 = INT64_MIN;

    t136 = (((x569==x570)!=x571)+x572);

    if (t136 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x573 = INT32_MIN;
	volatile uint8_t x574 = UINT8_MAX;
	int32_t x575 = INT32_MAX;
	int16_t x576 = -1;

    t137 = (((x573==x574)!=x575)+x576);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x577 = 14008827U;
	volatile int32_t t138 = 216104;

    t138 = (((x577==x578)!=x579)+x580);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x581 = 6395515LLU;
	int64_t x582 = -1LL;
	volatile int8_t x583 = -1;
	int64_t x584 = -1125LL;
	static volatile int64_t t139 = 5995745680LL;

    t139 = (((x581==x582)!=x583)+x584);

    if (t139 != -1124LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x586 = -1;
	static int64_t x588 = INT64_MIN;
	volatile int64_t t140 = 4268307426285185LL;

    t140 = (((x585==x586)!=x587)+x588);

    if (t140 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x589 = UINT16_MAX;
	static int16_t x590 = INT16_MAX;
	static int8_t x591 = -1;
	static uint16_t x592 = 0U;
	int32_t t141 = -88934;

    t141 = (((x589==x590)!=x591)+x592);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x593 = 1443U;
	static volatile int8_t x594 = 1;
	static int32_t x595 = -1;
	volatile uint64_t x596 = UINT64_MAX;

    t142 = (((x593==x594)!=x595)+x596);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x597 = 11527U;
	int16_t x599 = INT16_MIN;
	uint64_t x600 = UINT64_MAX;
	uint64_t t143 = 29305329717728026LLU;

    t143 = (((x597==x598)!=x599)+x600);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x601 = 13;
	volatile uint64_t x602 = UINT64_MAX;
	static int32_t x603 = -1;
	int16_t x604 = INT16_MIN;
	volatile int32_t t144 = -56;

    t144 = (((x601==x602)!=x603)+x604);

    if (t144 != -32767) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x609 = UINT8_MAX;
	volatile int8_t x611 = 2;
	uint64_t x612 = UINT64_MAX;
	volatile uint64_t t145 = 4611782130338362LLU;

    t145 = (((x609==x610)!=x611)+x612);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x613 = INT8_MIN;
	int16_t x614 = -1;
	int8_t x616 = -2;

    t146 = (((x613==x614)!=x615)+x616);

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x617 = INT32_MAX;
	volatile int16_t x619 = 24;
	int64_t x620 = 0LL;
	volatile int64_t t147 = -7350550659024407LL;

    t147 = (((x617==x618)!=x619)+x620);

    if (t147 != 1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x621 = UINT32_MAX;
	uint64_t x622 = UINT64_MAX;

    t148 = (((x621==x622)!=x623)+x624);

    if (t148 != 163) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x629 = INT16_MAX;
	int32_t x630 = -468;
	int32_t x631 = INT32_MIN;

    t149 = (((x629==x630)!=x631)+x632);

    if (t149 != 256) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x633 = -1;
	uint64_t x634 = UINT64_MAX;
	uint16_t x635 = UINT16_MAX;
	volatile uint32_t x636 = 1238482U;
	volatile uint32_t t150 = 13175831U;

    t150 = (((x633==x634)!=x635)+x636);

    if (t150 != 1238483U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x637 = 8U;
	static volatile int32_t x638 = -5757181;
	uint32_t x640 = 5U;

    t151 = (((x637==x638)!=x639)+x640);

    if (t151 != 6U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x641 = 11U;
	int32_t x642 = 1;
	uint64_t x643 = 792976109014LLU;
	int64_t x644 = INT64_MIN;
	volatile int64_t t152 = -222507991LL;

    t152 = (((x641==x642)!=x643)+x644);

    if (t152 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x645 = 63636LL;
	static int8_t x647 = -1;
	int32_t x648 = INT32_MIN;
	volatile int32_t t153 = 123032658;

    t153 = (((x645==x646)!=x647)+x648);

    if (t153 != -2147483647) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x649 = 48;
	int32_t x650 = INT32_MAX;
	static int32_t x651 = -1755225;
	int32_t x652 = -1;
	int32_t t154 = 6777;

    t154 = (((x649==x650)!=x651)+x652);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x653 = 62956183594366LL;
	int8_t x654 = -1;
	int32_t x655 = -1;
	volatile int32_t t155 = -1;

    t155 = (((x653==x654)!=x655)+x656);

    if (t155 != 65536) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x657 = INT32_MIN;
	volatile uint16_t x659 = 437U;
	static uint16_t x660 = 7U;
	volatile int32_t t156 = -19509;

    t156 = (((x657==x658)!=x659)+x660);

    if (t156 != 8) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x661 = INT64_MIN;
	int8_t x662 = INT8_MAX;
	uint64_t x663 = UINT64_MAX;
	volatile int64_t t157 = 1115609677553638256LL;

    t157 = (((x661==x662)!=x663)+x664);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x665 = -1;
	static uint8_t x666 = 44U;
	static volatile int64_t x667 = INT64_MIN;
	static volatile uint8_t x668 = 0U;
	int32_t t158 = -16861311;

    t158 = (((x665==x666)!=x667)+x668);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x669 = 24U;
	int8_t x670 = INT8_MIN;
	int64_t x671 = 8520437676247LL;
	int16_t x672 = INT16_MIN;
	volatile int32_t t159 = 1635777;

    t159 = (((x669==x670)!=x671)+x672);

    if (t159 != -32767) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x673 = 244U;
	uint32_t x674 = UINT32_MAX;
	uint8_t x676 = 54U;
	static volatile int32_t t160 = -7183;

    t160 = (((x673==x674)!=x675)+x676);

    if (t160 != 55) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x681 = -1;
	uint64_t x682 = 0LLU;
	int32_t t161 = -4711010;

    t161 = (((x681==x682)!=x683)+x684);

    if (t161 != 32768) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x689 = UINT8_MAX;
	int32_t x691 = 0;
	volatile int8_t x692 = -1;

    t162 = (((x689==x690)!=x691)+x692);

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x693 = 0U;
	uint16_t x696 = 15860U;
	static volatile int32_t t163 = -192653;

    t163 = (((x693==x694)!=x695)+x696);

    if (t163 != 15861) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x697 = 4U;
	int32_t x698 = -2;
	volatile int8_t x699 = -1;
	static volatile int32_t t164 = 74;

    t164 = (((x697==x698)!=x699)+x700);

    if (t164 != -32767) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x703 = -186;
	volatile int32_t x704 = -1;
	static int32_t t165 = -13948;

    t165 = (((x701==x702)!=x703)+x704);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x705 = INT16_MAX;
	int16_t x706 = INT16_MIN;
	int32_t x707 = 228943788;
	int16_t x708 = -1;
	volatile int32_t t166 = 75383;

    t166 = (((x705==x706)!=x707)+x708);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x713 = INT32_MIN;
	int8_t x714 = 6;
	volatile uint32_t x715 = UINT32_MAX;
	uint64_t x716 = 3813493LLU;
	volatile uint64_t t167 = 118954184390370062LLU;

    t167 = (((x713==x714)!=x715)+x716);

    if (t167 != 3813494LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x717 = 20186247U;
	int8_t x718 = INT8_MIN;
	int64_t x719 = -1LL;
	int16_t x720 = INT16_MAX;
	volatile int32_t t168 = -18;

    t168 = (((x717==x718)!=x719)+x720);

    if (t168 != 32768) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x721 = 32U;
	uint16_t x722 = 3U;
	static uint64_t x723 = 2LLU;
	static uint8_t x724 = 0U;
	int32_t t169 = 22723241;

    t169 = (((x721==x722)!=x723)+x724);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x725 = 31274;
	static int32_t x726 = INT32_MIN;
	int32_t x727 = -92068;
	int16_t x728 = 0;
	static int32_t t170 = 1074;

    t170 = (((x725==x726)!=x727)+x728);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x729 = INT16_MIN;
	int16_t x730 = 73;
	int32_t x731 = INT32_MIN;
	static uint16_t x732 = 5U;
	int32_t t171 = 5;

    t171 = (((x729==x730)!=x731)+x732);

    if (t171 != 6) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x734 = 788543U;
	int32_t x735 = INT32_MIN;
	int16_t x736 = INT16_MIN;
	volatile int32_t t172 = -1;

    t172 = (((x733==x734)!=x735)+x736);

    if (t172 != -32767) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x737 = 37255;
	int64_t x738 = 535495518LL;
	static int8_t x739 = -36;
	volatile uint8_t x740 = 14U;

    t173 = (((x737==x738)!=x739)+x740);

    if (t173 != 15) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x741 = 9813935243821LLU;
	int8_t x742 = -1;
	int32_t x743 = -1;
	static int8_t x744 = 1;
	int32_t t174 = 1;

    t174 = (((x741==x742)!=x743)+x744);

    if (t174 != 2) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x745 = -11889;
	int64_t x746 = INT64_MAX;
	uint32_t x748 = 198779220U;
	uint32_t t175 = 5693U;

    t175 = (((x745==x746)!=x747)+x748);

    if (t175 != 198779221U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x750 = 14LL;
	int64_t x752 = INT64_MIN;

    t176 = (((x749==x750)!=x751)+x752);

    if (t176 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x753 = 689116401U;
	int64_t x754 = -316LL;
	static volatile uint32_t x755 = 828U;
	int32_t x756 = INT32_MIN;
	volatile int32_t t177 = 231870930;

    t177 = (((x753==x754)!=x755)+x756);

    if (t177 != -2147483647) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint8_t x758 = UINT8_MAX;
	uint16_t x759 = UINT16_MAX;
	int32_t x760 = INT32_MIN;
	volatile int32_t t178 = 429828729;

    t178 = (((x757==x758)!=x759)+x760);

    if (t178 != -2147483647) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x762 = 2013910102335921LLU;
	static uint8_t x763 = UINT8_MAX;
	volatile int64_t x764 = 4LL;
	volatile int64_t t179 = 143306400300676522LL;

    t179 = (((x761==x762)!=x763)+x764);

    if (t179 != 5LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x765 = UINT16_MAX;
	uint16_t x766 = UINT16_MAX;
	int32_t x767 = INT32_MAX;
	int32_t x768 = -1;
	int32_t t180 = 99;

    t180 = (((x765==x766)!=x767)+x768);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x773 = INT64_MIN;
	volatile int64_t x774 = 2011063873088912845LL;
	int16_t x775 = INT16_MAX;
	int16_t x776 = -1;

    t181 = (((x773==x774)!=x775)+x776);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x777 = INT32_MIN;
	int16_t x778 = -1;
	static volatile int16_t x779 = INT16_MAX;
	static int16_t x780 = -1;
	int32_t t182 = -15083629;

    t182 = (((x777==x778)!=x779)+x780);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x781 = -1;
	uint64_t x783 = 3104230LLU;
	uint64_t x784 = 514256LLU;

    t183 = (((x781==x782)!=x783)+x784);

    if (t183 != 514257LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x785 = INT64_MIN;
	uint64_t x786 = 441LLU;
	volatile int16_t x787 = -1;
	int16_t x788 = INT16_MAX;
	int32_t t184 = -228431049;

    t184 = (((x785==x786)!=x787)+x788);

    if (t184 != 32768) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x789 = INT16_MAX;
	int8_t x790 = INT8_MIN;
	volatile int32_t t185 = 0;

    t185 = (((x789==x790)!=x791)+x792);

    if (t185 != -2) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x793 = 11U;
	volatile int16_t x794 = -1;
	volatile int64_t x795 = -9678020LL;
	int32_t t186 = -289;

    t186 = (((x793==x794)!=x795)+x796);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x797 = 3U;
	static int32_t x799 = 715162;
	int16_t x800 = INT16_MIN;

    t187 = (((x797==x798)!=x799)+x800);

    if (t187 != -32767) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x801 = INT64_MIN;
	int32_t x802 = -271985;
	static int8_t x803 = -1;
	static uint64_t x804 = 732426252052LLU;
	volatile uint64_t t188 = 6LLU;

    t188 = (((x801==x802)!=x803)+x804);

    if (t188 != 732426252053LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x805 = 6;
	int16_t x806 = INT16_MIN;
	uint64_t x807 = 90358313442LLU;
	int64_t x808 = INT64_MIN;
	volatile int64_t t189 = -246014LL;

    t189 = (((x805==x806)!=x807)+x808);

    if (t189 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x809 = -119;
	int8_t x810 = 32;
	static int32_t x811 = INT32_MIN;

    t190 = (((x809==x810)!=x811)+x812);

    if (t190 != 1767439U) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint8_t x817 = UINT8_MAX;
	int32_t x818 = -1;
	static int16_t x819 = INT16_MAX;
	int8_t x820 = -1;

    t191 = (((x817==x818)!=x819)+x820);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x821 = 17U;
	int32_t x822 = INT32_MAX;
	volatile int16_t x823 = 67;
	int32_t t192 = 4668;

    t192 = (((x821==x822)!=x823)+x824);

    if (t192 != -2147483647) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x825 = 608689;
	static int64_t x827 = INT64_MIN;
	uint16_t x828 = UINT16_MAX;
	volatile int32_t t193 = 1;

    t193 = (((x825==x826)!=x827)+x828);

    if (t193 != 65536) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x829 = UINT16_MAX;
	static volatile int16_t x830 = 6629;
	static int8_t x831 = INT8_MIN;
	int8_t x832 = -20;
	volatile int32_t t194 = 5;

    t194 = (((x829==x830)!=x831)+x832);

    if (t194 != -19) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x833 = UINT64_MAX;
	static int32_t x835 = INT32_MAX;
	int8_t x836 = INT8_MIN;
	int32_t t195 = -96639880;

    t195 = (((x833==x834)!=x835)+x836);

    if (t195 != -127) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x837 = 707;
	int32_t x838 = INT32_MIN;
	static uint16_t x839 = 15U;
	static volatile int64_t x840 = INT64_MIN;
	int64_t t196 = 49183303371515507LL;

    t196 = (((x837==x838)!=x839)+x840);

    if (t196 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x842 = INT32_MAX;
	int8_t x843 = -1;
	volatile uint8_t x844 = UINT8_MAX;
	int32_t t197 = -596980432;

    t197 = (((x841==x842)!=x843)+x844);

    if (t197 != 256) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x845 = 13U;
	volatile int32_t x846 = -7;
	volatile uint8_t x847 = 0U;
	int32_t x848 = 13;
	static int32_t t198 = -7;

    t198 = (((x845==x846)!=x847)+x848);

    if (t198 != 13) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x849 = 8;
	static volatile int64_t x850 = INT64_MAX;
	static uint64_t x851 = 2570989383629630174LLU;
	int32_t x852 = INT32_MIN;
	volatile int32_t t199 = -854259;

    t199 = (((x849==x850)!=x851)+x852);

    if (t199 != -2147483647) { NG(); } else { ; }
	
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

