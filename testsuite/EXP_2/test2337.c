
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

uint8_t x1 = 0U;
int8_t x12 = INT8_MAX;
static int32_t x15 = INT32_MIN;
volatile uint64_t x18 = UINT64_MAX;
int8_t x19 = -1;
static uint16_t x21 = 108U;
volatile uint32_t t6 = UINT32_MAX;
uint64_t t7 = 743997584805LLU;
volatile int16_t x33 = INT16_MIN;
static int32_t t8 = -15483678;
uint8_t x42 = UINT8_MAX;
uint64_t x43 = UINT64_MAX;
int8_t x47 = 0;
uint8_t x48 = 109U;
volatile uint32_t x49 = 6803896U;
uint16_t x51 = 2502U;
int8_t x55 = INT8_MIN;
uint16_t x56 = UINT16_MAX;
uint32_t t13 = 7U;
int64_t x59 = 39511167200207LL;
static uint64_t t14 = 59477852LLU;
int16_t x64 = 1192;
uint16_t x72 = 13749U;
uint64_t t17 = 673LLU;
uint16_t x73 = 15U;
static uint32_t x77 = 843346797U;
int16_t x78 = INT16_MIN;
uint64_t x91 = 5082187433386488844LLU;
uint8_t x95 = UINT8_MAX;
uint8_t x98 = 3U;
int8_t x101 = INT8_MAX;
int32_t t25 = 47;
volatile uint16_t x109 = 53U;
int64_t x112 = -273LL;
static int8_t x116 = -30;
static int64_t t28 = -7643575238LL;
int8_t x119 = INT8_MIN;
int64_t t29 = INT64_MAX;
uint32_t x121 = 1923784979U;
static int8_t x122 = INT8_MAX;
int64_t x124 = -1LL;
int64_t t30 = 221LL;
uint32_t x126 = UINT32_MAX;
static int32_t x132 = INT32_MAX;
static uint64_t x134 = 422LLU;
int64_t x140 = INT64_MIN;
int64_t t34 = 3476845893LL;
static int64_t x153 = -1LL;
volatile uint16_t x154 = UINT16_MAX;
int64_t t38 = 67248LL;
static uint64_t x166 = UINT64_MAX;
static int32_t x168 = -445446;
int32_t x173 = 430;
uint32_t x174 = UINT32_MAX;
static volatile uint64_t t44 = UINT64_MAX;
volatile uint64_t x189 = 4LLU;
int32_t x192 = INT32_MAX;
int16_t x196 = -1;
volatile uint64_t t50 = 14341976311LLU;
uint32_t x213 = 3U;
uint64_t x215 = 135LLU;
static uint32_t x226 = UINT32_MAX;
static uint16_t x228 = UINT16_MAX;
int64_t x229 = INT64_MAX;
int64_t x230 = INT64_MIN;
int64_t x232 = -16LL;
volatile int16_t x238 = -9375;
uint32_t x239 = 3U;
int8_t x240 = 56;
uint16_t x241 = UINT16_MAX;
static int16_t x242 = INT16_MIN;
static volatile int64_t t60 = 9455980870393944LL;
static int64_t x246 = 1028236280LL;
int64_t x248 = -1LL;
uint16_t x250 = UINT16_MAX;
static volatile int16_t x251 = INT16_MAX;
int8_t x266 = -1;
volatile uint32_t t66 = UINT32_MAX;
uint16_t x278 = 5U;
int64_t x280 = INT64_MAX;
uint32_t x281 = 465U;
uint8_t x287 = 23U;
static int64_t x289 = INT64_MAX;
uint32_t x298 = UINT32_MAX;
int8_t x300 = -1;
volatile int64_t t76 = -27398997814526371LL;
int16_t x314 = INT16_MIN;
uint64_t t78 = 263551347671650LLU;
uint8_t x318 = 11U;
uint8_t x324 = 8U;
int64_t t81 = 754048630050196561LL;
static volatile int32_t x330 = -2489;
uint64_t x332 = 1049462903648602264LLU;
int16_t x337 = INT16_MIN;
uint64_t t86 = 3276548308340LLU;
uint8_t x365 = UINT8_MAX;
int16_t x370 = -1;
int32_t x371 = 481;
int8_t x372 = INT8_MIN;
int32_t x374 = -1;
int16_t x376 = -1;
volatile uint32_t t93 = UINT32_MAX;
int32_t x384 = 28099;
int32_t x385 = INT32_MIN;
int32_t x393 = 318954;
int32_t x398 = -1;
uint16_t x400 = UINT16_MAX;
uint64_t t102 = 15669393LLU;
volatile uint64_t t103 = 103485959731533094LLU;
static int16_t x420 = -1;
int32_t x423 = -1;
int64_t t105 = 3902589087591438073LL;
int64_t x433 = -1LL;
uint64_t t108 = UINT64_MAX;
volatile int64_t x440 = INT64_MAX;
static int64_t x442 = INT64_MIN;
static volatile int64_t t110 = 1388049074324716847LL;
volatile int32_t x448 = INT32_MIN;
int64_t t111 = -30LL;
int8_t x450 = 7;
int32_t t112 = 3692;
static int64_t x460 = 10217638824LL;
uint16_t x462 = 11743U;
uint16_t x477 = 4356U;
static int32_t x492 = 87948495;
int32_t t122 = 512595857;
uint16_t x495 = UINT16_MAX;
volatile int64_t x496 = 9489112493296159LL;
volatile int64_t t123 = -638481099859LL;
int16_t x497 = INT16_MIN;
uint16_t x502 = 1U;
int64_t x505 = INT64_MIN;
volatile int64_t x508 = -97LL;
volatile int8_t x509 = INT8_MIN;
volatile uint64_t x516 = UINT64_MAX;
static volatile uint64_t t128 = UINT64_MAX;
volatile uint16_t x518 = 0U;
int64_t x521 = -1LL;
volatile int64_t t130 = 3476591335128905LL;
volatile int16_t x526 = -806;
int8_t x535 = INT8_MAX;
static int64_t t133 = -413875705LL;
volatile int64_t x538 = INT64_MIN;
int64_t x541 = 59170LL;
int32_t x543 = INT32_MIN;
volatile int16_t x560 = INT16_MIN;
uint32_t x564 = 1U;
static int32_t t141 = 1864;
int32_t x570 = -1;
uint16_t x572 = 6U;
int64_t x575 = -1LL;
int32_t t144 = INT32_MAX;
uint32_t x584 = UINT32_MAX;
static uint16_t x587 = 1469U;
int8_t x588 = INT8_MIN;
uint8_t x589 = 2U;
int32_t x591 = INT32_MAX;
uint16_t x596 = 2494U;
uint64_t t148 = UINT64_MAX;
int64_t x597 = 15074912LL;
volatile uint16_t x600 = UINT16_MAX;
int16_t x609 = INT16_MIN;
int16_t x620 = INT16_MIN;
int16_t x621 = INT16_MAX;
int64_t x629 = -1LL;
int32_t x637 = -1;
uint32_t x643 = 4930570U;
int64_t x644 = INT64_MIN;
volatile uint32_t x646 = UINT32_MAX;
static uint32_t t161 = UINT32_MAX;
int8_t x652 = -1;
static uint64_t x658 = 147138731728LLU;
static int32_t t165 = -18;
volatile int8_t x665 = INT8_MIN;
static int8_t x672 = 0;
int16_t x692 = INT16_MIN;
volatile uint64_t t172 = UINT64_MAX;
uint16_t x696 = UINT16_MAX;
int32_t x703 = INT32_MAX;
uint8_t x707 = UINT8_MAX;
int8_t x710 = INT8_MIN;
volatile int64_t x711 = INT64_MIN;
int32_t x712 = -1;
uint16_t x714 = UINT16_MAX;
int16_t x717 = INT16_MIN;
uint8_t x722 = 87U;
int8_t x723 = INT8_MAX;
static int16_t x731 = 8;
int16_t x735 = -1;
uint8_t x736 = 18U;
static uint8_t x737 = 7U;
int16_t x741 = INT16_MAX;
int64_t x742 = -11426975060371823LL;
int64_t x747 = INT64_MIN;
volatile uint64_t t187 = UINT64_MAX;
static int8_t x754 = INT8_MAX;
int32_t t188 = 2;
int32_t t190 = -572003;
uint32_t x766 = UINT32_MAX;
uint32_t x772 = 139538U;
uint32_t t192 = 1875421569U;
int64_t x773 = -178LL;
uint64_t x776 = UINT64_MAX;
volatile int8_t x782 = 0;
volatile uint32_t t197 = UINT32_MAX;
uint64_t x794 = 575240230464892539LLU;
int8_t x795 = -1;
static int64_t x798 = INT64_MIN;
uint8_t x800 = UINT8_MAX;
int64_t t199 = -287647LL;


void f0(void) {
    	int8_t x2 = INT8_MIN;
	int32_t x3 = INT32_MIN;
	uint32_t x4 = 551U;
	static volatile uint32_t t0 = 73413U;

    t0 = ((x1|(x2&x3))|x4);

    if (t0 != 2147484199U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	int16_t x6 = INT16_MIN;
	static uint64_t x7 = UINT64_MAX;
	int64_t x8 = -1LL;
	volatile uint64_t t1 = UINT64_MAX;

    t1 = ((x5|(x6&x7))|x8);

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = INT64_MIN;
	uint16_t x10 = 4U;
	int8_t x11 = INT8_MIN;
	volatile int64_t t2 = -80LL;

    t2 = ((x9|(x10&x11))|x12);

    if (t2 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int8_t x14 = -1;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 3078;

    t3 = ((x13|(x14&x15))|x16);

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	static int64_t x20 = INT64_MAX;
	static uint64_t t4 = UINT64_MAX;

    t4 = ((x17|(x18&x19))|x20);

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = INT8_MIN;
	static volatile int32_t x23 = -1;
	uint32_t x24 = 89509326U;
	static volatile uint32_t t5 = 251U;

    t5 = ((x21|(x22&x23))|x24);

    if (t5 != 4294967278U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x25 = 146209U;
	int8_t x26 = 1;
	uint8_t x27 = 9U;
	static uint32_t x28 = UINT32_MAX;

    t6 = ((x25|(x26&x27))|x28);

    if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint64_t x29 = 171490978LLU;
	volatile int16_t x30 = 7018;
	static int16_t x31 = 257;
	int16_t x32 = 13;

    t7 = ((x29|(x30&x31))|x32);

    if (t7 != 171491247LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = INT32_MAX;
	volatile int16_t x35 = INT16_MIN;
	uint8_t x36 = 50U;

    t8 = ((x33|(x34&x35))|x36);

    if (t8 != -32718) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x37 = 266LLU;
	static uint64_t x38 = 29756166041863LLU;
	int32_t x39 = 60;
	uint16_t x40 = UINT16_MAX;
	uint64_t t9 = 0LLU;

    t9 = ((x37|(x38&x39))|x40);

    if (t9 != 65535LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -1;
	int16_t x44 = 756;
	volatile uint64_t t10 = UINT64_MAX;

    t10 = ((x41|(x42&x43))|x44);

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = 14841045LL;
	static uint64_t x46 = UINT64_MAX;
	volatile uint64_t t11 = 41642642947LLU;

    t11 = ((x45|(x46&x47))|x48);

    if (t11 != 14841085LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x50 = -1;
	int32_t x52 = 5596;
	uint32_t t12 = 1051153018U;

    t12 = ((x49|(x50&x51))|x52);

    if (t12 != 6807038U) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x53 = 665U;
	uint8_t x54 = 15U;

    t13 = ((x53|(x54&x55))|x56);

    if (t13 != 65535U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 914U;
	uint64_t x58 = UINT64_MAX;
	int8_t x60 = INT8_MIN;

    t14 = ((x57|(x58&x59))|x60);

    if (t14 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -680;
	int64_t x62 = 463457151487679LL;
	int16_t x63 = -1;
	volatile int64_t t15 = 14LL;

    t15 = ((x61|(x62&x63))|x64);

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 6661;
	int64_t x66 = INT64_MAX;
	static volatile int16_t x67 = 7;
	int8_t x68 = -25;
	volatile int64_t t16 = -1668850LL;

    t16 = ((x65|(x66&x67))|x68);

    if (t16 != -25LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = 32532095713553246LL;
	uint64_t x70 = 102067LLU;
	uint8_t x71 = 0U;

    t17 = ((x69|(x70&x71))|x72);

    if (t17 != 32532095713558527LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x74 = 19U;
	int16_t x75 = INT16_MIN;
	int64_t x76 = INT64_MIN;
	volatile int64_t t18 = -23683777918LL;

    t18 = ((x73|(x74&x75))|x76);

    if (t18 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x79 = 3U;
	int8_t x80 = INT8_MIN;
	volatile uint32_t t19 = 23681U;

    t19 = ((x77|(x78&x79))|x80);

    if (t19 != 4294967277U) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 127214;
	int32_t x82 = INT32_MIN;
	static volatile int16_t x83 = INT16_MIN;
	uint16_t x84 = 320U;
	static volatile int32_t t20 = -14391801;

    t20 = ((x81|(x82&x83))|x84);

    if (t20 != -2147356178) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x85 = -1;
	static int64_t x86 = -1LL;
	volatile uint32_t x87 = 31960185U;
	uint8_t x88 = 3U;
	int64_t t21 = 19LL;

    t21 = ((x85|(x86&x87))|x88);

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = 1;
	volatile int32_t x90 = 1080;
	volatile int16_t x92 = -15;
	uint64_t t22 = 3479514110LLU;

    t22 = ((x89|(x90&x91))|x92);

    if (t22 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = UINT8_MAX;
	static uint8_t x94 = 47U;
	int64_t x96 = INT64_MIN;
	int64_t t23 = -411109272673LL;

    t23 = ((x93|(x94&x95))|x96);

    if (t23 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	uint8_t x99 = UINT8_MAX;
	static int16_t x100 = -7791;
	int32_t t24 = -75;

    t24 = ((x97|(x98&x99))|x100);

    if (t24 != -7789) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x102 = -6;
	volatile int16_t x103 = INT16_MIN;
	uint8_t x104 = 5U;

    t25 = ((x101|(x102&x103))|x104);

    if (t25 != -32641) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	volatile uint16_t x106 = UINT16_MAX;
	int64_t x107 = 1242979105LL;
	int32_t x108 = -4085;
	int64_t t26 = -1892LL;

    t26 = ((x105|(x106&x107))|x108);

    if (t26 != -85LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x110 = 39627013LLU;
	uint8_t x111 = 7U;
	uint64_t t27 = 708810623579130LLU;

    t27 = ((x109|(x110&x111))|x112);

    if (t27 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x113 = 53U;
	int32_t x114 = 385;
	int64_t x115 = 24723755LL;

    t28 = ((x113|(x114&x115))|x116);

    if (t28 != -9LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MAX;
	uint8_t x118 = 0U;
	uint32_t x120 = UINT32_MAX;

    t29 = ((x117|(x118&x119))|x120);

    if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x123 = 140101;

    t30 = ((x121|(x122&x123))|x124);

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 3;
	uint16_t x127 = 562U;
	static volatile int32_t x128 = INT32_MIN;
	uint32_t t31 = 71U;

    t31 = ((x125|(x126&x127))|x128);

    if (t31 != 2147484211U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	int64_t x130 = 6658090LL;
	static uint64_t x131 = UINT64_MAX;
	static volatile uint64_t t32 = UINT64_MAX;

    t32 = ((x129|(x130&x131))|x132);

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -1;
	static uint8_t x135 = 120U;
	int64_t x136 = -14971645512047LL;
	uint64_t t33 = UINT64_MAX;

    t33 = ((x133|(x134&x135))|x136);

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 6U;
	volatile int8_t x138 = INT8_MIN;
	int32_t x139 = -1;

    t34 = ((x137|(x138&x139))|x140);

    if (t34 != -122LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x141 = 1237212118U;
	int16_t x142 = -26;
	uint32_t x143 = 432768U;
	volatile int8_t x144 = -3;
	uint32_t t35 = UINT32_MAX;

    t35 = ((x141|(x142&x143))|x144);

    if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = 74;
	int32_t x146 = -1;
	int32_t x147 = -1;
	int16_t x148 = INT16_MIN;
	int32_t t36 = 366663705;

    t36 = ((x145|(x146&x147))|x148);

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int16_t x149 = -1;
	uint64_t x150 = 1625471051405799LLU;
	uint16_t x151 = 83U;
	static uint8_t x152 = 23U;
	uint64_t t37 = UINT64_MAX;

    t37 = ((x149|(x150&x151))|x152);

    if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x155 = -1LL;
	volatile int64_t x156 = INT64_MIN;

    t38 = ((x153|(x154&x155))|x156);

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x157 = 1U;
	int64_t x158 = INT64_MIN;
	volatile int16_t x159 = -1;
	static int8_t x160 = 7;
	static int64_t t39 = -10301LL;

    t39 = ((x157|(x158&x159))|x160);

    if (t39 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x161 = INT16_MIN;
	static uint16_t x162 = 333U;
	volatile int16_t x163 = -12;
	volatile uint8_t x164 = 20U;
	static volatile int32_t t40 = 2532;

    t40 = ((x161|(x162&x163))|x164);

    if (t40 != -32428) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -1;
	int32_t x167 = INT32_MAX;
	volatile uint64_t t41 = UINT64_MAX;

    t41 = ((x165|(x166&x167))|x168);

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MAX;
	uint16_t x170 = UINT16_MAX;
	static volatile int64_t x171 = INT64_MAX;
	int64_t x172 = 62LL;
	static int64_t t42 = 158LL;

    t42 = ((x169|(x170&x171))|x172);

    if (t42 != 2147483647LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x175 = -1LL;
	int16_t x176 = -1;
	volatile int64_t t43 = 1LL;

    t43 = ((x173|(x174&x175))|x176);

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x177 = -1;
	uint64_t x178 = UINT64_MAX;
	int16_t x179 = INT16_MIN;
	int32_t x180 = INT32_MIN;

    t44 = ((x177|(x178&x179))|x180);

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x181 = UINT32_MAX;
	int8_t x182 = 2;
	static uint16_t x183 = 214U;
	int16_t x184 = 1;
	volatile uint32_t t45 = UINT32_MAX;

    t45 = ((x181|(x182&x183))|x184);

    if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = 18;
	volatile int16_t x186 = -828;
	int32_t x187 = -1;
	int32_t x188 = -1;
	volatile int32_t t46 = 326;

    t46 = ((x185|(x186&x187))|x188);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x190 = UINT64_MAX;
	int8_t x191 = INT8_MAX;
	uint64_t t47 = 50343684093447709LLU;

    t47 = ((x189|(x190&x191))|x192);

    if (t47 != 2147483647LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 0;
	int8_t x194 = -1;
	int16_t x195 = 3257;
	static volatile int32_t t48 = -5719983;

    t48 = ((x193|(x194&x195))|x196);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MAX;
	uint8_t x198 = UINT8_MAX;
	int64_t x199 = INT64_MIN;
	uint64_t x200 = 2153053113210377526LLU;
	volatile uint64_t t49 = 2224458287949479LLU;

    t49 = ((x197|(x198&x199))|x200);

    if (t49 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = INT32_MIN;
	int32_t x202 = -1;
	uint64_t x203 = 9537957709LLU;
	uint64_t x204 = 8541072253LLU;

    t50 = ((x201|(x202&x203))|x204);

    if (t50 != 18446744073669177213LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x205 = INT32_MAX;
	uint64_t x206 = UINT64_MAX;
	uint8_t x207 = 35U;
	static uint8_t x208 = UINT8_MAX;
	uint64_t t51 = 444442229617218LLU;

    t51 = ((x205|(x206&x207))|x208);

    if (t51 != 2147483647LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x209 = INT8_MIN;
	uint8_t x210 = 3U;
	uint16_t x211 = UINT16_MAX;
	int8_t x212 = INT8_MAX;
	volatile int32_t t52 = -31;

    t52 = ((x209|(x210&x211))|x212);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x214 = 640;
	static uint8_t x216 = 16U;
	uint64_t t53 = 61852593LLU;

    t53 = ((x213|(x214&x215))|x216);

    if (t53 != 147LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x217 = 3;
	uint64_t x218 = UINT64_MAX;
	int32_t x219 = INT32_MIN;
	int64_t x220 = INT64_MIN;
	volatile uint64_t t54 = 1945312LLU;

    t54 = ((x217|(x218&x219))|x220);

    if (t54 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 32557017527640LLU;
	int32_t x222 = INT32_MAX;
	volatile int16_t x223 = INT16_MIN;
	static int8_t x224 = INT8_MAX;
	volatile uint64_t t55 = 5615726671726LLU;

    t55 = ((x221|(x222&x223))|x224);

    if (t55 != 32557999584639LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x225 = 8564660810730LLU;
	volatile int8_t x227 = INT8_MAX;
	uint64_t t56 = 172040LLU;

    t56 = ((x225|(x226&x227))|x228);

    if (t56 != 8564660830207LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x231 = INT32_MIN;
	volatile int64_t t57 = -379454176782357301LL;

    t57 = ((x229|(x230&x231))|x232);

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x233 = INT32_MIN;
	static uint32_t x234 = UINT32_MAX;
	int32_t x235 = 407544372;
	volatile int16_t x236 = 14233;
	uint32_t t58 = 259U;

    t58 = ((x233|(x234&x235))|x236);

    if (t58 != 2555033533U) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = 1190;
	uint32_t t59 = 86785317U;

    t59 = ((x237|(x238&x239))|x240);

    if (t59 != 1215U) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x243 = INT64_MIN;
	volatile int8_t x244 = -1;

    t60 = ((x241|(x242&x243))|x244);

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = 43;
	static uint32_t x247 = UINT32_MAX;
	volatile int64_t t61 = -48640125185908379LL;

    t61 = ((x245|(x246&x247))|x248);

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x249 = UINT64_MAX;
	int32_t x252 = 820164;
	uint64_t t62 = UINT64_MAX;

    t62 = ((x249|(x250&x251))|x252);

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x253 = 3;
	int16_t x254 = 1;
	int16_t x255 = INT16_MIN;
	static int32_t x256 = -27128;
	int32_t t63 = 28219397;

    t63 = ((x253|(x254&x255))|x256);

    if (t63 != -27125) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 61971953U;
	int32_t x258 = -1;
	static int64_t x259 = -6596142630273LL;
	static volatile int64_t x260 = -1LL;
	int64_t t64 = -56228202509147LL;

    t64 = ((x257|(x258&x259))|x260);

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	int64_t x262 = -1LL;
	int16_t x263 = INT16_MAX;
	uint8_t x264 = UINT8_MAX;
	volatile int64_t t65 = 1811302623944LL;

    t65 = ((x261|(x262&x263))|x264);

    if (t65 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	uint32_t x267 = 99374U;
	static volatile int32_t x268 = -1;

    t66 = ((x265|(x266&x267))|x268);

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = -1;
	uint64_t x270 = 1916771851LLU;
	uint8_t x271 = 3U;
	int64_t x272 = INT64_MIN;
	uint64_t t67 = UINT64_MAX;

    t67 = ((x269|(x270&x271))|x272);

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = 996U;
	int8_t x274 = INT8_MAX;
	int16_t x275 = 0;
	uint8_t x276 = 59U;
	int32_t t68 = 71385050;

    t68 = ((x273|(x274&x275))|x276);

    if (t68 != 1023) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x277 = 2919U;
	uint32_t x279 = 1072307174U;
	static int64_t t69 = INT64_MAX;

    t69 = ((x277|(x278&x279))|x280);

    if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x282 = 62876LLU;
	volatile int32_t x283 = INT32_MAX;
	int32_t x284 = -770;
	uint64_t t70 = 1051625121620LLU;

    t70 = ((x281|(x282&x283))|x284);

    if (t70 != 18446744073709551103LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x285 = INT32_MAX;
	static int8_t x286 = INT8_MIN;
	static uint16_t x288 = 16798U;
	int32_t t71 = INT32_MAX;

    t71 = ((x285|(x286&x287))|x288);

    if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x290 = 12;
	uint16_t x291 = UINT16_MAX;
	int8_t x292 = INT8_MIN;
	int64_t t72 = -414491243330828036LL;

    t72 = ((x289|(x290&x291))|x292);

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int32_t x293 = -1;
	volatile int64_t x294 = -347315732609LL;
	static int8_t x295 = -1;
	static int64_t x296 = -1LL;
	static volatile int64_t t73 = -31004LL;

    t73 = ((x293|(x294&x295))|x296);

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = -1;
	int64_t x299 = INT64_MIN;
	volatile int64_t t74 = -329394587104829798LL;

    t74 = ((x297|(x298&x299))|x300);

    if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = -1;
	int16_t x302 = 45;
	uint8_t x303 = 14U;
	int32_t x304 = INT32_MAX;
	int32_t t75 = 1997768;

    t75 = ((x301|(x302&x303))|x304);

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	uint8_t x306 = 7U;
	volatile uint16_t x307 = 418U;
	int64_t x308 = INT64_MAX;

    t76 = ((x305|(x306&x307))|x308);

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MAX;
	int32_t x310 = INT32_MIN;
	uint64_t x311 = 760683889261261LLU;
	int64_t x312 = INT64_MAX;
	uint64_t t77 = 1344183237LLU;

    t77 = ((x309|(x310&x311))|x312);

    if (t77 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	static uint64_t x315 = UINT64_MAX;
	volatile uint32_t x316 = 1545U;

    t78 = ((x313|(x314&x315))|x316);

    if (t78 != 18446744073709520639LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x317 = -1LL;
	static int8_t x319 = -1;
	uint8_t x320 = 2U;
	volatile int64_t t79 = -41896825LL;

    t79 = ((x317|(x318&x319))|x320);

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MAX;
	int64_t x322 = INT64_MIN;
	int64_t x323 = -15LL;
	int64_t t80 = 205043LL;

    t80 = ((x321|(x322&x323))|x324);

    if (t80 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = 2U;
	int64_t x326 = -1LL;
	volatile int16_t x327 = INT16_MAX;
	int32_t x328 = INT32_MAX;

    t81 = ((x325|(x326&x327))|x328);

    if (t81 != 2147483647LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = -2;
	uint32_t x331 = 1236594U;
	uint64_t t82 = 429458910891LLU;

    t82 = ((x329|(x330&x331))|x332);

    if (t82 != 1049462906451656702LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MAX;
	int8_t x334 = -16;
	uint8_t x335 = 3U;
	uint64_t x336 = 11LLU;
	static uint64_t t83 = 157891144LLU;

    t83 = ((x333|(x334&x335))|x336);

    if (t83 != 127LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x338 = -33970338;
	int8_t x339 = 61;
	uint32_t x340 = UINT32_MAX;
	volatile uint32_t t84 = UINT32_MAX;

    t84 = ((x337|(x338&x339))|x340);

    if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x341 = UINT64_MAX;
	int32_t x342 = 927757160;
	int16_t x343 = INT16_MIN;
	int64_t x344 = INT64_MIN;
	uint64_t t85 = UINT64_MAX;

    t85 = ((x341|(x342&x343))|x344);

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x345 = INT16_MAX;
	static volatile int64_t x346 = INT64_MIN;
	uint64_t x347 = 933647157684LLU;
	static uint16_t x348 = 16U;

    t86 = ((x345|(x346&x347))|x348);

    if (t86 != 32767LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x349 = INT32_MAX;
	static int32_t x350 = -4;
	uint32_t x351 = 3U;
	static int64_t x352 = INT64_MIN;
	int64_t t87 = -1LL;

    t87 = ((x349|(x350&x351))|x352);

    if (t87 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	int8_t x354 = 3;
	volatile uint16_t x355 = 4864U;
	int16_t x356 = -39;
	int32_t t88 = -4851;

    t88 = ((x353|(x354&x355))|x356);

    if (t88 != -39) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	uint32_t x358 = 14267359U;
	int16_t x359 = -1;
	int8_t x360 = INT8_MIN;
	uint32_t t89 = 0U;

    t89 = ((x357|(x358&x359))|x360);

    if (t89 != 4294967263U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = -13;
	volatile uint64_t x362 = UINT64_MAX;
	static int8_t x363 = INT8_MAX;
	int16_t x364 = INT16_MAX;
	volatile uint64_t t90 = UINT64_MAX;

    t90 = ((x361|(x362&x363))|x364);

    if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x366 = -107;
	volatile int64_t x367 = 30253LL;
	volatile int32_t x368 = INT32_MIN;
	volatile int64_t t91 = -234LL;

    t91 = ((x365|(x366&x367))|x368);

    if (t91 != -2147453185LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x369 = 0;
	volatile int32_t t92 = -18;

    t92 = ((x369|(x370&x371))|x372);

    if (t92 != -31) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MIN;
	volatile uint32_t x375 = 3667U;

    t93 = ((x373|(x374&x375))|x376);

    if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MIN;
	uint8_t x378 = UINT8_MAX;
	int8_t x379 = 0;
	int64_t x380 = -1LL;
	int64_t t94 = 8487717497548LL;

    t94 = ((x377|(x378&x379))|x380);

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 12U;
	int64_t x382 = INT64_MIN;
	int32_t x383 = 296015894;
	int64_t t95 = -2LL;

    t95 = ((x381|(x382&x383))|x384);

    if (t95 != 28111LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x386 = INT16_MIN;
	int8_t x387 = -1;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t96 = 104;

    t96 = ((x385|(x386&x387))|x388);

    if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -1;
	int64_t x390 = -1LL;
	uint32_t x391 = UINT32_MAX;
	static int8_t x392 = 1;
	volatile int64_t t97 = -23874LL;

    t97 = ((x389|(x390&x391))|x392);

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x394 = -1;
	int16_t x395 = INT16_MIN;
	int8_t x396 = -1;
	volatile int32_t t98 = -12;

    t98 = ((x393|(x394&x395))|x396);

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x397 = 7072429U;
	volatile int64_t x399 = -57207236161LL;
	int64_t t99 = 8348726906LL;

    t99 = ((x397|(x398&x399))|x400);

    if (t99 != -57202966529LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -1;
	uint8_t x402 = 7U;
	static volatile uint64_t x403 = 5434814220LLU;
	int8_t x404 = INT8_MIN;
	uint64_t t100 = UINT64_MAX;

    t100 = ((x401|(x402&x403))|x404);

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x405 = -1;
	uint64_t x406 = 26LLU;
	uint8_t x407 = 41U;
	volatile int32_t x408 = -1;
	uint64_t t101 = UINT64_MAX;

    t101 = ((x405|(x406&x407))|x408);

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	int16_t x410 = 423;
	static uint32_t x411 = 16544916U;
	volatile uint64_t x412 = 9195102403722420089LLU;

    t102 = ((x409|(x410&x411))|x412);

    if (t102 != 18418474440577196029LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = 106871LLU;
	volatile uint32_t x414 = 7612832U;
	volatile int32_t x415 = INT32_MIN;
	static int64_t x416 = INT64_MIN;

    t103 = ((x413|(x414&x415))|x416);

    if (t103 != 9223372036854882679LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	static int32_t x418 = INT32_MAX;
	int16_t x419 = INT16_MIN;
	volatile int32_t t104 = -468509794;

    t104 = ((x417|(x418&x419))|x420);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x421 = INT64_MIN;
	uint8_t x422 = 0U;
	volatile int64_t x424 = 156LL;

    t105 = ((x421|(x422&x423))|x424);

    if (t105 != -9223372036854775652LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	uint32_t x426 = UINT32_MAX;
	int32_t x427 = INT32_MIN;
	int32_t x428 = -19338453;
	volatile int64_t t106 = 3898575251057749039LL;

    t106 = ((x425|(x426&x427))|x428);

    if (t106 != -19338453LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 6U;
	static uint32_t x430 = UINT32_MAX;
	volatile int8_t x431 = 6;
	int8_t x432 = 3;
	volatile uint32_t t107 = 1878401U;

    t107 = ((x429|(x430&x431))|x432);

    if (t107 != 7U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x434 = INT32_MAX;
	int16_t x435 = -13;
	static volatile uint64_t x436 = 1743622139612680168LLU;

    t108 = ((x433|(x434&x435))|x436);

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	uint32_t x438 = UINT32_MAX;
	uint64_t x439 = UINT64_MAX;
	volatile uint64_t t109 = UINT64_MAX;

    t109 = ((x437|(x438&x439))|x440);

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = -1;
	volatile int16_t x443 = INT16_MIN;
	uint32_t x444 = 235922U;

    t110 = ((x441|(x442&x443))|x444);

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x445 = INT16_MIN;
	int64_t x446 = 914LL;
	static volatile int32_t x447 = INT32_MAX;

    t111 = ((x445|(x446&x447))|x448);

    if (t111 != -31854LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = -19;
	volatile int32_t x451 = INT32_MIN;
	int8_t x452 = -1;

    t112 = ((x449|(x450&x451))|x452);

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 46U;
	int64_t x454 = INT64_MAX;
	int32_t x455 = -1;
	int64_t x456 = -1LL;
	int64_t t113 = 16243534592LL;

    t113 = ((x453|(x454&x455))|x456);

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 7U;
	int64_t x458 = -756582448102684LL;
	int8_t x459 = 0;
	static int64_t t114 = -113228332LL;

    t114 = ((x457|(x458&x459))|x460);

    if (t114 != 10217638831LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x461 = 3U;
	static int64_t x463 = INT64_MIN;
	uint8_t x464 = UINT8_MAX;
	int64_t t115 = 4160123923583LL;

    t115 = ((x461|(x462&x463))|x464);

    if (t115 != 255LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = UINT32_MAX;
	static uint32_t x466 = UINT32_MAX;
	volatile int8_t x467 = INT8_MAX;
	int8_t x468 = INT8_MAX;
	volatile uint32_t t116 = UINT32_MAX;

    t116 = ((x465|(x466&x467))|x468);

    if (t116 != UINT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 344348LLU;
	int32_t x470 = INT32_MIN;
	uint32_t x471 = 0U;
	uint8_t x472 = 1U;
	uint64_t t117 = 6867LLU;

    t117 = ((x469|(x470&x471))|x472);

    if (t117 != 344349LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 4836450U;
	int8_t x474 = INT8_MAX;
	int32_t x475 = INT32_MIN;
	int32_t x476 = INT32_MAX;
	static volatile uint32_t t118 = 22238U;

    t118 = ((x473|(x474&x475))|x476);

    if (t118 != 2147483647U) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x478 = -1LL;
	volatile uint16_t x479 = 127U;
	volatile uint64_t x480 = 2732198005LLU;
	volatile uint64_t t119 = 218184884436117680LLU;

    t119 = ((x477|(x478&x479))|x480);

    if (t119 != 2732202367LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	uint64_t x482 = 2072806096425850LLU;
	int64_t x483 = -1LL;
	int32_t x484 = INT32_MIN;
	uint64_t t120 = 3945552266410LLU;

    t120 = ((x481|(x482&x483))|x484);

    if (t120 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = UINT8_MAX;
	uint16_t x486 = UINT16_MAX;
	int8_t x487 = -1;
	volatile int8_t x488 = -1;
	volatile int32_t t121 = -36795957;

    t121 = ((x485|(x486&x487))|x488);

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MIN;
	volatile int16_t x490 = INT16_MAX;
	volatile uint8_t x491 = 41U;

    t122 = ((x489|(x490&x491))|x492);

    if (t122 != -2059535121) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = -1;
	static int8_t x494 = INT8_MIN;

    t123 = ((x493|(x494&x495))|x496);

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x498 = 15649;
	static volatile uint32_t x499 = UINT32_MAX;
	uint16_t x500 = 3U;
	uint32_t t124 = 133598U;

    t124 = ((x497|(x498&x499))|x500);

    if (t124 != 4294950179U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = UINT64_MAX;
	uint32_t x503 = UINT32_MAX;
	int64_t x504 = -1019256LL;
	uint64_t t125 = UINT64_MAX;

    t125 = ((x501|(x502&x503))|x504);

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x506 = 6U;
	static uint64_t x507 = 1705716563153882903LLU;
	uint64_t t126 = 3843427803294LLU;

    t126 = ((x505|(x506&x507))|x508);

    if (t126 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x510 = 20099113LLU;
	uint16_t x511 = UINT16_MAX;
	int64_t x512 = 1398LL;
	uint64_t t127 = UINT64_MAX;

    t127 = ((x509|(x510&x511))|x512);

    if (t127 != UINT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	uint32_t x514 = UINT32_MAX;
	static uint8_t x515 = 8U;

    t128 = ((x513|(x514&x515))|x516);

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -117731304016603LL;
	static int8_t x519 = INT8_MIN;
	int32_t x520 = 66130;
	int64_t t129 = -615815373243334519LL;

    t129 = ((x517|(x518&x519))|x520);

    if (t129 != -117731304016009LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x522 = 269321851214346544LL;
	int32_t x523 = 792029;
	int16_t x524 = INT16_MIN;

    t130 = ((x521|(x522&x523))|x524);

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x525 = UINT64_MAX;
	uint64_t x527 = 24393165839LLU;
	static int16_t x528 = INT16_MAX;
	uint64_t t131 = UINT64_MAX;

    t131 = ((x525|(x526&x527))|x528);

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x529 = 11145121LLU;
	static int8_t x530 = INT8_MIN;
	volatile int8_t x531 = INT8_MAX;
	int32_t x532 = 7359557;
	uint64_t t132 = 115487954LLU;

    t132 = ((x529|(x530&x531))|x532);

    if (t132 != 16404453LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MIN;
	int32_t x534 = INT32_MIN;
	volatile uint8_t x536 = UINT8_MAX;

    t133 = ((x533|(x534&x535))|x536);

    if (t133 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = UINT16_MAX;
	volatile int8_t x539 = INT8_MIN;
	int64_t x540 = -1LL;
	volatile int64_t t134 = -68384199964964881LL;

    t134 = ((x537|(x538&x539))|x540);

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x542 = 0U;
	int32_t x544 = INT32_MAX;
	int64_t t135 = -2007903365LL;

    t135 = ((x541|(x542&x543))|x544);

    if (t135 != 2147483647LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -6084798;
	uint64_t x546 = 710476566875828LLU;
	int8_t x547 = 3;
	uint32_t x548 = 3788U;
	volatile uint64_t t136 = 1749809342747329LLU;

    t136 = ((x545|(x546&x547))|x548);

    if (t136 != 18446744073703469006LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = -1;
	uint64_t x550 = 62944LLU;
	int64_t x551 = INT64_MIN;
	int8_t x552 = -42;
	uint64_t t137 = UINT64_MAX;

    t137 = ((x549|(x550&x551))|x552);

    if (t137 != UINT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	int8_t x554 = -41;
	int8_t x555 = INT8_MIN;
	int32_t x556 = -31325;
	int32_t t138 = 339;

    t138 = ((x553|(x554&x555))|x556);

    if (t138 != -93) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x557 = 60;
	int32_t x558 = -241727460;
	int32_t x559 = -16428942;
	static volatile int32_t t139 = -2;

    t139 = ((x557|(x558&x559))|x560);

    if (t139 != -32708) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = 2U;
	static int32_t x562 = -23645;
	static int32_t x563 = 28431599;
	volatile uint32_t t140 = 26249U;

    t140 = ((x561|(x562&x563))|x564);

    if (t140 != 28410019U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -4402979;
	uint8_t x566 = 16U;
	int32_t x567 = -1;
	volatile int32_t x568 = 3;

    t141 = ((x565|(x566&x567))|x568);

    if (t141 != -4402977) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = INT16_MAX;
	static int16_t x571 = INT16_MIN;
	static int32_t t142 = -66465340;

    t142 = ((x569|(x570&x571))|x572);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = UINT64_MAX;
	volatile int16_t x574 = 2;
	int8_t x576 = INT8_MIN;
	uint64_t t143 = UINT64_MAX;

    t143 = ((x573|(x574&x575))|x576);

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = 10U;
	uint8_t x578 = UINT8_MAX;
	volatile int8_t x579 = -1;
	static int32_t x580 = INT32_MAX;

    t144 = ((x577|(x578&x579))|x580);

    if (t144 != INT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = -416;
	uint32_t x582 = UINT32_MAX;
	int64_t x583 = INT64_MIN;
	int64_t t145 = -326168LL;

    t145 = ((x581|(x582&x583))|x584);

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = INT32_MIN;
	int8_t x586 = -1;
	volatile int32_t t146 = 25;

    t146 = ((x585|(x586&x587))|x588);

    if (t146 != -67) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x590 = INT16_MIN;
	int32_t x592 = -1;
	volatile int32_t t147 = -11908920;

    t147 = ((x589|(x590&x591))|x592);

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -57LL;
	uint64_t x594 = 112141634695LLU;
	uint16_t x595 = 994U;

    t148 = ((x593|(x594&x595))|x596);

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x598 = -17824067000597988LL;
	uint64_t x599 = 3868993489069LLU;
	uint64_t t149 = 30587585273169LLU;

    t149 = ((x597|(x598&x599))|x600);

    if (t149 != 1099545116671LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MAX;
	int8_t x602 = INT8_MIN;
	int32_t x603 = INT32_MAX;
	int16_t x604 = INT16_MIN;
	int32_t t150 = -9;

    t150 = ((x601|(x602&x603))|x604);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = 3346LL;
	static volatile uint32_t x606 = 2326U;
	int8_t x607 = INT8_MIN;
	uint64_t x608 = 5979713505958379LLU;
	uint64_t t151 = 123896030756857110LLU;

    t151 = ((x605|(x606&x607))|x608);

    if (t151 != 5979713505959419LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x610 = INT32_MAX;
	int64_t x611 = INT64_MAX;
	int64_t x612 = INT64_MIN;
	static int64_t t152 = -87252823796625006LL;

    t152 = ((x609|(x610&x611))|x612);

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = -1;
	static int16_t x614 = -270;
	int16_t x615 = INT16_MIN;
	int32_t x616 = -1967009;
	volatile int32_t t153 = 63580423;

    t153 = ((x613|(x614&x615))|x616);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = 3102290U;
	int64_t x618 = -1653422109LL;
	volatile uint16_t x619 = 418U;
	static volatile int64_t t154 = 473866780286591LL;

    t154 = ((x617|(x618&x619))|x620);

    if (t154 != -10254LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x622 = INT16_MIN;
	int8_t x623 = -14;
	volatile int32_t x624 = INT32_MIN;
	int32_t t155 = 146410180;

    t155 = ((x621|(x622&x623))|x624);

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -981LL;
	uint32_t x626 = UINT32_MAX;
	int8_t x627 = -1;
	int8_t x628 = INT8_MIN;
	volatile int64_t t156 = -24431606293404690LL;

    t156 = ((x625|(x626&x627))|x628);

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x630 = UINT16_MAX;
	int8_t x631 = INT8_MIN;
	uint8_t x632 = 3U;
	int64_t t157 = -447063LL;

    t157 = ((x629|(x630&x631))|x632);

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x633 = -1;
	uint8_t x634 = 0U;
	int32_t x635 = INT32_MIN;
	static int32_t x636 = -1;
	static volatile int32_t t158 = -190148627;

    t158 = ((x633|(x634&x635))|x636);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x638 = -1LL;
	int64_t x639 = INT64_MIN;
	uint8_t x640 = UINT8_MAX;
	static int64_t t159 = -62187398LL;

    t159 = ((x637|(x638&x639))|x640);

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x641 = -1;
	uint64_t x642 = UINT64_MAX;
	volatile uint64_t t160 = UINT64_MAX;

    t160 = ((x641|(x642&x643))|x644);

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = UINT32_MAX;
	int16_t x647 = -1;
	uint16_t x648 = 12994U;

    t161 = ((x645|(x646&x647))|x648);

    if (t161 != UINT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	int16_t x650 = 33;
	static volatile int16_t x651 = INT16_MIN;
	volatile int32_t t162 = -164709791;

    t162 = ((x649|(x650&x651))|x652);

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = 141252411U;
	static int32_t x654 = -327952;
	static int8_t x655 = -27;
	uint32_t x656 = 472U;
	volatile uint32_t t163 = 60091978U;

    t163 = ((x653|(x654&x655))|x656);

    if (t163 != 4294705147U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = 1U;
	int64_t x659 = INT64_MIN;
	int8_t x660 = -1;
	volatile uint64_t t164 = UINT64_MAX;

    t164 = ((x657|(x658&x659))|x660);

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = UINT8_MAX;
	volatile int32_t x662 = INT32_MIN;
	volatile int8_t x663 = 1;
	int32_t x664 = -1;

    t165 = ((x661|(x662&x663))|x664);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x666 = -1LL;
	static volatile uint16_t x667 = UINT16_MAX;
	int64_t x668 = INT64_MIN;
	volatile int64_t t166 = -403147LL;

    t166 = ((x665|(x666&x667))|x668);

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MIN;
	static volatile uint16_t x670 = 147U;
	int8_t x671 = INT8_MAX;
	volatile int32_t t167 = 8881;

    t167 = ((x669|(x670&x671))|x672);

    if (t167 != -32749) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MAX;
	int16_t x674 = INT16_MAX;
	int64_t x675 = INT64_MIN;
	int16_t x676 = 49;
	int64_t t168 = INT64_MAX;

    t168 = ((x673|(x674&x675))|x676);

    if (t168 != INT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MIN;
	uint16_t x678 = 16857U;
	uint32_t x679 = 3213175U;
	int64_t x680 = INT64_MIN;
	volatile int64_t t169 = 482650396259LL;

    t169 = ((x677|(x678&x679))|x680);

    if (t169 != -9223372032559840943LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = UINT16_MAX;
	int64_t x682 = 378704LL;
	int16_t x683 = INT16_MAX;
	uint16_t x684 = 382U;
	int64_t t170 = -3586194322876736LL;

    t170 = ((x681|(x682&x683))|x684);

    if (t170 != 65535LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MIN;
	volatile uint16_t x686 = UINT16_MAX;
	volatile int8_t x687 = 27;
	static volatile int64_t x688 = 1LL;
	static volatile int64_t t171 = 7482340582592LL;

    t171 = ((x685|(x686&x687))|x688);

    if (t171 != -101LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x689 = -1LL;
	int16_t x690 = INT16_MIN;
	uint64_t x691 = 241627905161LLU;

    t172 = ((x689|(x690&x691))|x692);

    if (t172 != UINT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = -64;
	int32_t x694 = INT32_MIN;
	int16_t x695 = INT16_MIN;
	int32_t t173 = 1079;

    t173 = ((x693|(x694&x695))|x696);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 12U;
	uint32_t x698 = UINT32_MAX;
	volatile int16_t x699 = INT16_MIN;
	int32_t x700 = INT32_MIN;
	volatile uint32_t t174 = 268920U;

    t174 = ((x697|(x698&x699))|x700);

    if (t174 != 4294934540U) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int32_t x701 = -327;
	int32_t x702 = INT32_MAX;
	volatile int16_t x704 = INT16_MIN;
	int32_t t175 = -3954;

    t175 = ((x701|(x702&x703))|x704);

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = UINT8_MAX;
	uint64_t x706 = 235LLU;
	volatile int32_t x708 = INT32_MIN;
	uint64_t t176 = 7469LLU;

    t176 = ((x705|(x706&x707))|x708);

    if (t176 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MIN;
	int64_t t177 = -229LL;

    t177 = ((x709|(x710&x711))|x712);

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MAX;
	volatile int32_t x715 = -1;
	volatile int8_t x716 = 7;
	volatile int32_t t178 = INT32_MAX;

    t178 = ((x713|(x714&x715))|x716);

    if (t178 != INT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x718 = INT8_MIN;
	int32_t x719 = INT32_MIN;
	static int8_t x720 = INT8_MIN;
	static int32_t t179 = 0;

    t179 = ((x717|(x718&x719))|x720);

    if (t179 != -128) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 5484U;
	int32_t x724 = INT32_MAX;
	volatile int32_t t180 = INT32_MAX;

    t180 = ((x721|(x722&x723))|x724);

    if (t180 != INT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = -2;
	int8_t x726 = -1;
	volatile int64_t x727 = -1686856961075661LL;
	uint8_t x728 = 110U;
	volatile int64_t t181 = 55326054298750597LL;

    t181 = ((x725|(x726&x727))|x728);

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x729 = 118917414U;
	int8_t x730 = -5;
	uint64_t x732 = 1291LLU;
	volatile uint64_t t182 = 10561274LLU;

    t182 = ((x729|(x730&x731))|x732);

    if (t182 != 118918447LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int64_t x733 = INT64_MIN;
	int32_t x734 = INT32_MIN;
	int64_t t183 = -214209048561339LL;

    t183 = ((x733|(x734&x735))|x736);

    if (t183 != -2147483630LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x738 = UINT8_MAX;
	uint16_t x739 = UINT16_MAX;
	int16_t x740 = 43;
	int32_t t184 = 0;

    t184 = ((x737|(x738&x739))|x740);

    if (t184 != 255) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x743 = -2;
	static int16_t x744 = INT16_MIN;
	volatile int64_t t185 = 214090059222299222LL;

    t185 = ((x741|(x742&x743))|x744);

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = 1857U;
	int16_t x746 = 25;
	int8_t x748 = -1;
	int64_t t186 = -44616883169632810LL;

    t186 = ((x745|(x746&x747))|x748);

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -1;
	uint32_t x750 = 223U;
	uint64_t x751 = 9763954LLU;
	int64_t x752 = INT64_MIN;

    t187 = ((x749|(x750&x751))|x752);

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = 3584;
	volatile int32_t x755 = INT32_MAX;
	static int16_t x756 = 28;

    t188 = ((x753|(x754&x755))|x756);

    if (t188 != 3711) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	int8_t x758 = INT8_MAX;
	int64_t x759 = 129300LL;
	int32_t x760 = -427934;
	int64_t t189 = -8287LL;

    t189 = ((x757|(x758&x759))|x760);

    if (t189 != -427914LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = 24;
	uint16_t x762 = 31U;
	static int16_t x763 = INT16_MIN;
	static uint16_t x764 = 6U;

    t190 = ((x761|(x762&x763))|x764);

    if (t190 != 30) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = 1954933748780102210LLU;
	uint8_t x767 = UINT8_MAX;
	static uint16_t x768 = 23156U;
	volatile uint64_t t191 = 145895915775LLU;

    t191 = ((x765|(x766&x767))|x768);

    if (t191 != 1954933748780104447LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = 20U;
	int16_t x770 = INT16_MAX;
	uint8_t x771 = 12U;

    t192 = ((x769|(x770&x771))|x772);

    if (t192 != 139550U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x774 = -1;
	int32_t x775 = -180;
	static uint64_t t193 = UINT64_MAX;

    t193 = ((x773|(x774&x775))|x776);

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = -5;
	int16_t x778 = INT16_MIN;
	uint64_t x779 = UINT64_MAX;
	int32_t x780 = -1;
	volatile uint64_t t194 = UINT64_MAX;

    t194 = ((x777|(x778&x779))|x780);

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = 787;
	int32_t x783 = INT32_MAX;
	uint32_t x784 = 111U;
	uint32_t t195 = 111552169U;

    t195 = ((x781|(x782&x783))|x784);

    if (t195 != 895U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	int8_t x786 = INT8_MIN;
	static int64_t x787 = -1LL;
	int8_t x788 = -14;
	int64_t t196 = -289076LL;

    t196 = ((x785|(x786&x787))|x788);

    if (t196 != -14LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = INT32_MAX;
	int32_t x790 = INT32_MAX;
	uint32_t x791 = 9865U;
	int16_t x792 = -1;

    t197 = ((x789|(x790&x791))|x792);

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x793 = 1;
	volatile int8_t x796 = INT8_MIN;
	volatile uint64_t t198 = 18403076201320106LLU;

    t198 = ((x793|(x794&x795))|x796);

    if (t198 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x797 = 2714U;
	int32_t x799 = INT32_MIN;

    t199 = ((x797|(x798&x799))|x800);

    if (t199 != -9223372036854772993LL) { NG(); } else { ; }
	
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

