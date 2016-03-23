
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

static int8_t x8 = -20;
int8_t x10 = INT8_MAX;
uint64_t t2 = 1059185676710LLU;
uint64_t x15 = UINT64_MAX;
static int8_t x18 = -1;
int32_t x20 = INT32_MAX;
volatile int16_t x22 = INT16_MIN;
int64_t t5 = -24LL;
int8_t x27 = -1;
volatile int32_t t6 = 5703279;
uint32_t x31 = 123557713U;
uint64_t x37 = 21835658531708354LLU;
static int32_t x46 = INT32_MIN;
uint32_t x47 = UINT32_MAX;
int32_t x52 = INT32_MIN;
int8_t x53 = INT8_MAX;
static int16_t x55 = 468;
static int32_t x61 = INT32_MIN;
int32_t x65 = -6426;
int32_t x69 = INT32_MAX;
volatile int64_t x71 = -1LL;
static int8_t x72 = INT8_MIN;
int32_t t17 = 1;
int32_t x77 = 4565705;
int16_t x83 = INT16_MAX;
int64_t x86 = INT64_MIN;
uint16_t x88 = UINT16_MAX;
volatile int32_t x91 = -1;
int64_t t22 = 1355708281756164LL;
int64_t x97 = -1LL;
volatile int16_t x98 = INT16_MIN;
int8_t x103 = INT8_MAX;
uint8_t x104 = UINT8_MAX;
int16_t x107 = INT16_MIN;
int32_t x116 = 135;
volatile int32_t x119 = 805;
volatile uint8_t x120 = 1U;
int32_t t29 = 3;
uint64_t x129 = 55450116LLU;
int16_t x132 = -1;
volatile int8_t x133 = -5;
int32_t x135 = INT32_MIN;
uint32_t x137 = 467420176U;
static int32_t x138 = -1;
volatile int32_t t34 = -12111;
int32_t x141 = -1;
uint8_t x143 = UINT8_MAX;
int64_t x144 = -1LL;
int32_t x145 = INT32_MIN;
uint64_t x147 = 126763954354015LLU;
static volatile uint32_t t37 = 1U;
int8_t x153 = INT8_MIN;
static int64_t x156 = INT64_MIN;
volatile int64_t t38 = 89975282333LL;
uint8_t x158 = UINT8_MAX;
uint64_t t39 = UINT64_MAX;
int64_t t40 = 1LL;
int16_t x169 = -4609;
int32_t t42 = -1;
int64_t x173 = 3LL;
int8_t x175 = INT8_MIN;
uint16_t x184 = 658U;
static int16_t x190 = -6909;
int16_t x191 = INT16_MIN;
int64_t x208 = INT64_MAX;
static int16_t x218 = INT16_MIN;
int64_t x220 = INT64_MAX;
int64_t t54 = INT64_MAX;
volatile int32_t x223 = 11;
int8_t x226 = 3;
uint32_t x227 = 188509820U;
uint64_t x229 = 104711LLU;
int64_t x233 = -1LL;
int8_t x244 = INT8_MIN;
uint64_t x248 = 9389365134693774LLU;
uint16_t x250 = UINT16_MAX;
volatile int32_t t62 = -7658;
int16_t x263 = 2;
static uint64_t x265 = 21451240369LLU;
volatile int32_t t66 = 321169832;
int32_t x269 = 0;
int8_t x274 = -11;
int16_t x282 = 17;
volatile int8_t x289 = INT8_MAX;
int32_t x305 = -1;
int64_t t77 = 0LL;
uint16_t x313 = UINT16_MAX;
volatile int64_t t79 = INT64_MAX;
int32_t x331 = INT32_MIN;
uint32_t x338 = 25U;
int64_t t84 = 3926349843447670516LL;
int64_t x349 = 16382017LL;
static int32_t t89 = -2;
volatile int16_t x361 = INT16_MIN;
int32_t t91 = -336874088;
int16_t x372 = 3587;
static int64_t x377 = 219677595LL;
static volatile int32_t x385 = -1;
uint64_t x388 = UINT64_MAX;
int8_t x394 = INT8_MIN;
int32_t x395 = INT32_MAX;
static volatile uint16_t x403 = 0U;
int32_t t101 = 1018264857;
int8_t x409 = INT8_MIN;
int64_t x412 = -1LL;
int64_t t102 = -14533572574LL;
int64_t x413 = INT64_MIN;
static int8_t x419 = INT8_MIN;
uint8_t x421 = UINT8_MAX;
volatile int32_t t105 = 39847;
int64_t x427 = 69380LL;
int16_t x433 = INT16_MIN;
static volatile int16_t x438 = INT16_MAX;
static uint64_t x440 = UINT64_MAX;
volatile uint8_t x442 = 73U;
static volatile int16_t x444 = INT16_MIN;
static int32_t x446 = -1;
uint16_t x454 = 6250U;
int64_t t114 = -3687445587238086535LL;
volatile uint64_t x466 = UINT64_MAX;
volatile int32_t t119 = -462062;
static volatile int64_t x482 = -1LL;
volatile uint64_t t122 = 100461492895273LLU;
static int64_t x494 = -1006048603083376LL;
int32_t x502 = -1;
static volatile int64_t t125 = INT64_MAX;
int64_t x505 = -3993342LL;
int16_t x516 = INT16_MAX;
volatile uint8_t x520 = 126U;
uint16_t x521 = 17990U;
volatile int64_t x523 = -1LL;
volatile int32_t t130 = -1;
int64_t x532 = -1LL;
uint8_t x533 = UINT8_MAX;
uint32_t t133 = 166U;
uint64_t x539 = 619931LLU;
volatile int32_t x556 = INT32_MIN;
volatile int32_t t139 = 10;
volatile int8_t x564 = -1;
static uint32_t x567 = UINT32_MAX;
uint16_t x573 = 4875U;
volatile int8_t x580 = -51;
static volatile int32_t t144 = -349194;
uint32_t x581 = UINT32_MAX;
static int64_t t145 = 11169LL;
uint16_t x587 = 6U;
int8_t x591 = -1;
int8_t x598 = INT8_MIN;
int32_t t150 = 308639;
uint16_t x609 = 2U;
volatile int8_t x610 = INT8_MAX;
int16_t x614 = INT16_MAX;
int32_t x615 = -680988306;
int32_t t154 = 2199;
uint32_t x622 = 40068506U;
int32_t x624 = 59;
int32_t x629 = INT32_MAX;
int32_t x644 = INT32_MAX;
int8_t x650 = -17;
volatile int8_t x654 = -1;
int64_t x655 = INT64_MAX;
uint32_t x665 = 246U;
volatile int64_t t167 = INT64_MAX;
uint16_t x678 = 3U;
static int64_t x680 = 355229275305932LL;
int32_t x682 = INT32_MIN;
volatile int64_t x683 = -764222261LL;
int16_t x688 = INT16_MIN;
static uint64_t x699 = 10LLU;
int8_t x702 = 2;
uint8_t x706 = 7U;
int16_t x708 = 2;
int16_t x711 = -69;
volatile int16_t x712 = -1;
static int64_t x715 = INT64_MIN;
int64_t x726 = INT64_MAX;
uint16_t x732 = 222U;
uint32_t x743 = UINT32_MAX;
int64_t t186 = 1LL;
static uint32_t x750 = UINT32_MAX;
int32_t x754 = INT32_MIN;
int8_t x758 = INT8_MIN;
int8_t x768 = INT8_MIN;
volatile int32_t t192 = -1;
static volatile int64_t x773 = 85326927LL;
static int64_t x774 = -2100LL;
int8_t x778 = INT8_MIN;
int64_t x780 = -1LL;
static int16_t x784 = -1;
volatile int32_t t195 = 14;
int64_t x788 = -1LL;
volatile uint16_t x791 = UINT16_MAX;
int8_t x792 = INT8_MIN;
volatile uint8_t x797 = 0U;


void f0(void) {
    	volatile int16_t x1 = -1;
	int8_t x2 = INT8_MIN;
	volatile int64_t x3 = -1LL;
	uint8_t x4 = 73U;
	static int32_t t0 = -2062;

    t0 = ((x1!=(x2^x3))|x4);

    if (t0 != 73) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 139503LLU;
	volatile int8_t x6 = INT8_MIN;
	int64_t x7 = 534LL;
	static int32_t t1 = -28;

    t1 = ((x5!=(x6^x7))|x8);

    if (t1 != -19) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	volatile uint8_t x11 = UINT8_MAX;
	uint64_t x12 = 131884527849050LLU;

    t2 = ((x9!=(x10^x11))|x12);

    if (t2 != 131884527849051LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 7U;
	uint8_t x14 = 14U;
	static volatile int8_t x16 = -25;
	static int32_t t3 = -12990056;

    t3 = ((x13!=(x14^x15))|x16);

    if (t3 != -25) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	uint64_t x19 = UINT64_MAX;
	int32_t t4 = INT32_MAX;

    t4 = ((x17!=(x18^x19))|x20);

    if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = INT8_MIN;
	int64_t x23 = -5752LL;
	int64_t x24 = -133181164282175237LL;

    t5 = ((x21!=(x22^x23))|x24);

    if (t5 != -133181164282175237LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = 0;
	int8_t x26 = -1;
	uint16_t x28 = 3U;

    t6 = ((x25!=(x26^x27))|x28);

    if (t6 != 3) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = 987746121LL;
	int16_t x30 = 420;
	int8_t x32 = -1;
	int32_t t7 = -3764;

    t7 = ((x29!=(x30^x31))|x32);

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 330U;
	int64_t x34 = INT64_MAX;
	int64_t x35 = INT64_MAX;
	uint8_t x36 = UINT8_MAX;
	int32_t t8 = 1002838;

    t8 = ((x33!=(x34^x35))|x36);

    if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x38 = INT8_MIN;
	int16_t x39 = -1;
	volatile int8_t x40 = -1;
	int32_t t9 = -1573045;

    t9 = ((x37!=(x38^x39))|x40);

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	uint8_t x42 = 97U;
	volatile uint16_t x43 = 1371U;
	int64_t x44 = -918443LL;
	int64_t t10 = -1LL;

    t10 = ((x41!=(x42^x43))|x44);

    if (t10 != -918443LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 102U;
	int64_t x48 = INT64_MIN;
	volatile int64_t t11 = -104169870838766246LL;

    t11 = ((x45!=(x46^x47))|x48);

    if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint32_t x49 = UINT32_MAX;
	volatile int32_t x50 = INT32_MAX;
	int32_t x51 = INT32_MIN;
	int32_t t12 = INT32_MIN;

    t12 = ((x49!=(x50^x51))|x52);

    if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x54 = -1;
	int16_t x56 = INT16_MIN;
	static volatile int32_t t13 = -101830;

    t13 = ((x53!=(x54^x55))|x56);

    if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	uint32_t x58 = UINT32_MAX;
	int64_t x59 = INT64_MAX;
	uint8_t x60 = UINT8_MAX;
	int32_t t14 = 108862918;

    t14 = ((x57!=(x58^x59))|x60);

    if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x62 = INT32_MIN;
	int16_t x63 = 12537;
	uint16_t x64 = 2U;
	int32_t t15 = 3287;

    t15 = ((x61!=(x62^x63))|x64);

    if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x66 = INT64_MIN;
	static int32_t x67 = INT32_MAX;
	int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 55;

    t16 = ((x65!=(x66^x67))|x68);

    if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x70 = UINT64_MAX;

    t17 = ((x69!=(x70^x71))|x72);

    if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -7354033541922LL;
	int16_t x74 = INT16_MIN;
	volatile uint32_t x75 = 1U;
	static volatile int32_t x76 = -1;
	int32_t t18 = 5454628;

    t18 = ((x73!=(x74^x75))|x76);

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x78 = 5U;
	int64_t x79 = INT64_MIN;
	uint64_t x80 = 28387890853118LLU;
	volatile uint64_t t19 = 12257108147304926LLU;

    t19 = ((x77!=(x78^x79))|x80);

    if (t19 != 28387890853119LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x81 = 3U;
	static uint16_t x82 = UINT16_MAX;
	int32_t x84 = INT32_MIN;
	static volatile int32_t t20 = 79;

    t20 = ((x81!=(x82^x83))|x84);

    if (t20 != -2147483647) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MAX;
	int8_t x87 = 1;
	static int32_t t21 = -5;

    t21 = ((x85!=(x86^x87))|x88);

    if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -1;
	uint16_t x90 = 2039U;
	static volatile int64_t x92 = 6428945LL;

    t22 = ((x89!=(x90^x91))|x92);

    if (t22 != 6428945LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	int64_t x94 = INT64_MIN;
	uint32_t x95 = 16U;
	int8_t x96 = -7;
	int32_t t23 = 144568;

    t23 = ((x93!=(x94^x95))|x96);

    if (t23 != -7) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x99 = UINT8_MAX;
	int32_t x100 = -1;
	volatile int32_t t24 = -177;

    t24 = ((x97!=(x98^x99))|x100);

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -1;
	volatile int64_t x102 = INT64_MAX;
	volatile int32_t t25 = 2719;

    t25 = ((x101!=(x102^x103))|x104);

    if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	volatile uint64_t x106 = 5683186LLU;
	uint32_t x108 = 72U;
	volatile uint32_t t26 = 1975801998U;

    t26 = ((x105!=(x106^x107))|x108);

    if (t26 != 73U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x109 = INT16_MIN;
	uint64_t x110 = 3096583365945LLU;
	uint16_t x111 = UINT16_MAX;
	int16_t x112 = INT16_MAX;
	volatile int32_t t27 = -1752512;

    t27 = ((x109!=(x110^x111))|x112);

    if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 1467704LLU;
	volatile int64_t x114 = INT64_MAX;
	uint16_t x115 = 11482U;
	volatile int32_t t28 = -18605;

    t28 = ((x113!=(x114^x115))|x116);

    if (t28 != 135) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = 23;
	volatile int8_t x118 = INT8_MIN;

    t29 = ((x117!=(x118^x119))|x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = UINT8_MAX;
	int16_t x122 = -1;
	static int64_t x123 = INT64_MIN;
	volatile uint64_t x124 = UINT64_MAX;
	uint64_t t30 = UINT64_MAX;

    t30 = ((x121!=(x122^x123))|x124);

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x125 = -1;
	int8_t x126 = 0;
	int16_t x127 = INT16_MAX;
	uint16_t x128 = UINT16_MAX;
	int32_t t31 = -129513;

    t31 = ((x125!=(x126^x127))|x128);

    if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x130 = 320141583129LL;
	uint64_t x131 = UINT64_MAX;
	int32_t t32 = -53194387;

    t32 = ((x129!=(x130^x131))|x132);

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x134 = 91326620LL;
	uint32_t x136 = 4477U;
	volatile uint32_t t33 = 93640840U;

    t33 = ((x133!=(x134^x135))|x136);

    if (t33 != 4477U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x139 = INT32_MIN;
	uint8_t x140 = 4U;

    t34 = ((x137!=(x138^x139))|x140);

    if (t34 != 5) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x142 = -3776;
	int64_t t35 = -19329LL;

    t35 = ((x141!=(x142^x143))|x144);

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x146 = INT32_MIN;
	static int16_t x148 = INT16_MAX;
	int32_t t36 = -491340850;

    t36 = ((x145!=(x146^x147))|x148);

    if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x149 = -2817401438311LL;
	volatile int64_t x150 = INT64_MAX;
	int16_t x151 = -1;
	uint32_t x152 = 15185330U;

    t37 = ((x149!=(x150^x151))|x152);

    if (t37 != 15185331U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x154 = INT8_MIN;
	uint16_t x155 = UINT16_MAX;

    t38 = ((x153!=(x154^x155))|x156);

    if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x157 = INT32_MAX;
	uint16_t x159 = 34U;
	volatile uint64_t x160 = UINT64_MAX;

    t39 = ((x157!=(x158^x159))|x160);

    if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MIN;
	static int8_t x162 = 37;
	int8_t x163 = INT8_MIN;
	int64_t x164 = -106955616029LL;

    t40 = ((x161!=(x162^x163))|x164);

    if (t40 != -106955616029LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x165 = -1LL;
	uint32_t x166 = UINT32_MAX;
	int16_t x167 = -27;
	int8_t x168 = INT8_MAX;
	int32_t t41 = 7125734;

    t41 = ((x165!=(x166^x167))|x168);

    if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x170 = 9077803;
	uint16_t x171 = 7995U;
	volatile int8_t x172 = INT8_MAX;

    t42 = ((x169!=(x170^x171))|x172);

    if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x174 = 6U;
	int8_t x176 = 0;
	volatile int32_t t43 = 94;

    t43 = ((x173!=(x174^x175))|x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x177 = 169157057U;
	uint32_t x178 = 201U;
	volatile int32_t x179 = -1;
	volatile uint64_t x180 = 80295LLU;
	uint64_t t44 = 887512403387688698LLU;

    t44 = ((x177!=(x178^x179))|x180);

    if (t44 != 80295LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	uint16_t x182 = UINT16_MAX;
	uint32_t x183 = UINT32_MAX;
	volatile int32_t t45 = 90532457;

    t45 = ((x181!=(x182^x183))|x184);

    if (t45 != 659) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = 0U;
	volatile int32_t x186 = INT32_MIN;
	volatile int8_t x187 = -1;
	int32_t x188 = -242214443;
	volatile int32_t t46 = 3817009;

    t46 = ((x185!=(x186^x187))|x188);

    if (t46 != -242214443) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = UINT16_MAX;
	int16_t x192 = 1081;
	int32_t t47 = -13;

    t47 = ((x189!=(x190^x191))|x192);

    if (t47 != 1081) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = 1120846LL;
	int32_t x194 = -117397722;
	int16_t x195 = -91;
	volatile uint16_t x196 = 1U;
	volatile int32_t t48 = 3203;

    t48 = ((x193!=(x194^x195))|x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x197 = -4107171LL;
	int8_t x198 = 12;
	int32_t x199 = INT32_MIN;
	uint64_t x200 = 431548253421LLU;
	uint64_t t49 = 1280288095255346LLU;

    t49 = ((x197!=(x198^x199))|x200);

    if (t49 != 431548253421LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x201 = UINT64_MAX;
	int16_t x202 = 123;
	int8_t x203 = 1;
	int32_t x204 = -103163;
	int32_t t50 = -35;

    t50 = ((x201!=(x202^x203))|x204);

    if (t50 != -103163) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 10U;
	volatile int8_t x206 = INT8_MIN;
	static volatile int16_t x207 = 1814;
	static int64_t t51 = INT64_MAX;

    t51 = ((x205!=(x206^x207))|x208);

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = 40U;
	static volatile uint8_t x210 = 0U;
	volatile int8_t x211 = INT8_MAX;
	int64_t x212 = -1LL;
	volatile int64_t t52 = 3889225961950841LL;

    t52 = ((x209!=(x210^x211))|x212);

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	uint16_t x214 = UINT16_MAX;
	uint64_t x215 = UINT64_MAX;
	volatile uint8_t x216 = 116U;
	volatile int32_t t53 = 1;

    t53 = ((x213!=(x214^x215))|x216);

    if (t53 != 117) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = 0U;
	int32_t x219 = INT32_MAX;

    t54 = ((x217!=(x218^x219))|x220);

    if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x221 = 13027U;
	int16_t x222 = INT16_MAX;
	static uint8_t x224 = 24U;
	volatile int32_t t55 = 2112101;

    t55 = ((x221!=(x222^x223))|x224);

    if (t55 != 25) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x225 = 56U;
	int8_t x228 = INT8_MIN;
	int32_t t56 = -81326859;

    t56 = ((x225!=(x226^x227))|x228);

    if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x230 = INT8_MAX;
	int64_t x231 = INT64_MAX;
	int8_t x232 = -4;
	int32_t t57 = -60;

    t57 = ((x229!=(x230^x231))|x232);

    if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x234 = 83U;
	static int32_t x235 = INT32_MAX;
	uint8_t x236 = UINT8_MAX;
	int32_t t58 = -4209821;

    t58 = ((x233!=(x234^x235))|x236);

    if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x237 = 106U;
	int16_t x238 = INT16_MIN;
	volatile uint8_t x239 = UINT8_MAX;
	int16_t x240 = INT16_MIN;
	int32_t t59 = -1;

    t59 = ((x237!=(x238^x239))|x240);

    if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MAX;
	uint32_t x242 = UINT32_MAX;
	int8_t x243 = -3;
	int32_t t60 = -2556747;

    t60 = ((x241!=(x242^x243))|x244);

    if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MAX;
	volatile int32_t x246 = 134373;
	uint32_t x247 = 1U;
	uint64_t t61 = 231455392LLU;

    t61 = ((x245!=(x246^x247))|x248);

    if (t61 != 9389365134693775LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 1U;
	volatile int8_t x251 = -6;
	int16_t x252 = INT16_MAX;

    t62 = ((x249!=(x250^x251))|x252);

    if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -1;
	uint64_t x254 = UINT64_MAX;
	uint32_t x255 = UINT32_MAX;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t63 = 51034407;

    t63 = ((x253!=(x254^x255))|x256);

    if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x257 = INT16_MAX;
	int32_t x258 = -1;
	uint32_t x259 = 585008U;
	uint8_t x260 = UINT8_MAX;
	int32_t t64 = 870;

    t64 = ((x257!=(x258^x259))|x260);

    if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MAX;
	int8_t x262 = INT8_MIN;
	int32_t x264 = 251;
	int32_t t65 = -504;

    t65 = ((x261!=(x262^x263))|x264);

    if (t65 != 251) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x266 = -1LL;
	int64_t x267 = INT64_MAX;
	int8_t x268 = INT8_MIN;

    t66 = ((x265!=(x266^x267))|x268);

    if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x270 = INT16_MAX;
	int16_t x271 = INT16_MIN;
	int64_t x272 = -1LL;
	int64_t t67 = -125193804296LL;

    t67 = ((x269!=(x270^x271))|x272);

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x273 = UINT8_MAX;
	uint8_t x275 = UINT8_MAX;
	int8_t x276 = INT8_MIN;
	int32_t t68 = 354;

    t68 = ((x273!=(x274^x275))|x276);

    if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MAX;
	uint8_t x278 = UINT8_MAX;
	int8_t x279 = -1;
	uint32_t x280 = 24U;
	uint32_t t69 = 127677461U;

    t69 = ((x277!=(x278^x279))|x280);

    if (t69 != 25U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x281 = INT32_MAX;
	int64_t x283 = -1LL;
	volatile uint16_t x284 = 570U;
	static int32_t t70 = -262;

    t70 = ((x281!=(x282^x283))|x284);

    if (t70 != 571) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = 9958703LL;
	uint8_t x286 = UINT8_MAX;
	volatile int64_t x287 = INT64_MIN;
	int32_t x288 = INT32_MAX;
	volatile int32_t t71 = INT32_MAX;

    t71 = ((x285!=(x286^x287))|x288);

    if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x290 = -1;
	static int16_t x291 = -7;
	int16_t x292 = -1;
	static volatile int32_t t72 = -2;

    t72 = ((x289!=(x290^x291))|x292);

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MAX;
	uint32_t x294 = 3U;
	int8_t x295 = -1;
	int8_t x296 = INT8_MAX;
	volatile int32_t t73 = 1355185;

    t73 = ((x293!=(x294^x295))|x296);

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x297 = UINT32_MAX;
	uint8_t x298 = 4U;
	static volatile int8_t x299 = INT8_MIN;
	int8_t x300 = -15;
	int32_t t74 = 211;

    t74 = ((x297!=(x298^x299))|x300);

    if (t74 != -15) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x301 = 461U;
	static int32_t x302 = -21957179;
	int16_t x303 = INT16_MAX;
	int32_t x304 = -665087;
	int32_t t75 = -317;

    t75 = ((x301!=(x302^x303))|x304);

    if (t75 != -665087) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x306 = -1;
	int32_t x307 = INT32_MIN;
	uint8_t x308 = UINT8_MAX;
	int32_t t76 = 235859275;

    t76 = ((x305!=(x306^x307))|x308);

    if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x309 = -10820798LL;
	uint8_t x310 = UINT8_MAX;
	int64_t x311 = -1LL;
	int64_t x312 = -1LL;

    t77 = ((x309!=(x310^x311))|x312);

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x314 = INT64_MIN;
	static volatile int16_t x315 = -1;
	int64_t x316 = 9595LL;
	static int64_t t78 = -32240410LL;

    t78 = ((x313!=(x314^x315))|x316);

    if (t78 != 9595LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x317 = -1;
	int8_t x318 = 19;
	int32_t x319 = INT32_MAX;
	int64_t x320 = INT64_MAX;

    t79 = ((x317!=(x318^x319))|x320);

    if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x321 = INT8_MAX;
	volatile int32_t x322 = -1;
	uint16_t x323 = 3568U;
	uint16_t x324 = 6U;
	int32_t t80 = -28;

    t80 = ((x321!=(x322^x323))|x324);

    if (t80 != 7) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 36U;
	int32_t x326 = INT32_MAX;
	int16_t x327 = -23;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t81 = -125;

    t81 = ((x325!=(x326^x327))|x328);

    if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MAX;
	int32_t x330 = INT32_MAX;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = -216593603;

    t82 = ((x329!=(x330^x331))|x332);

    if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int64_t x333 = 6717320794650165LL;
	volatile int16_t x334 = INT16_MIN;
	static int8_t x335 = 0;
	volatile int8_t x336 = INT8_MAX;
	int32_t t83 = -6;

    t83 = ((x333!=(x334^x335))|x336);

    if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = 2;
	uint16_t x339 = 63U;
	volatile int64_t x340 = INT64_MIN;

    t84 = ((x337!=(x338^x339))|x340);

    if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = 77U;
	uint32_t x342 = 19157U;
	int16_t x343 = INT16_MIN;
	volatile uint64_t x344 = 201138506549604LLU;
	uint64_t t85 = 2535787558744LLU;

    t85 = ((x341!=(x342^x343))|x344);

    if (t85 != 201138506549605LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MAX;
	static volatile int8_t x346 = -1;
	static int32_t x347 = INT32_MAX;
	int16_t x348 = INT16_MAX;
	volatile int32_t t86 = 254983;

    t86 = ((x345!=(x346^x347))|x348);

    if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x350 = -4861;
	int32_t x351 = INT32_MIN;
	volatile int16_t x352 = -15;
	int32_t t87 = 32842731;

    t87 = ((x349!=(x350^x351))|x352);

    if (t87 != -15) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MAX;
	int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MIN;
	int32_t t88 = -61249339;

    t88 = ((x353!=(x354^x355))|x356);

    if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = 0;
	volatile int32_t x358 = INT32_MIN;
	int32_t x359 = 115196867;
	int32_t x360 = INT32_MIN;

    t89 = ((x357!=(x358^x359))|x360);

    if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x362 = -22;
	int8_t x363 = INT8_MAX;
	volatile uint8_t x364 = UINT8_MAX;
	static volatile int32_t t90 = -8;

    t90 = ((x361!=(x362^x363))|x364);

    if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MIN;
	uint32_t x366 = UINT32_MAX;
	int8_t x367 = INT8_MIN;
	int8_t x368 = 3;

    t91 = ((x365!=(x366^x367))|x368);

    if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x369 = 1348;
	int8_t x370 = INT8_MIN;
	int32_t x371 = INT32_MAX;
	int32_t t92 = -11;

    t92 = ((x369!=(x370^x371))|x372);

    if (t92 != 3587) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x373 = INT64_MAX;
	static int64_t x374 = INT64_MIN;
	volatile uint64_t x375 = UINT64_MAX;
	int32_t x376 = 521;
	int32_t t93 = -31;

    t93 = ((x373!=(x374^x375))|x376);

    if (t93 != 521) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x378 = 2618895454728LLU;
	int32_t x379 = -2960;
	static uint64_t x380 = 77LLU;
	volatile uint64_t t94 = 175672601212LLU;

    t94 = ((x377!=(x378^x379))|x380);

    if (t94 != 77LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = -1;
	uint32_t x382 = UINT32_MAX;
	uint32_t x383 = 61521U;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t95 = -123063;

    t95 = ((x381!=(x382^x383))|x384);

    if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x386 = -1;
	int32_t x387 = INT32_MAX;
	uint64_t t96 = UINT64_MAX;

    t96 = ((x385!=(x386^x387))|x388);

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x389 = INT64_MAX;
	int32_t x390 = 54087;
	int32_t x391 = INT32_MIN;
	int8_t x392 = INT8_MIN;
	static volatile int32_t t97 = -1125;

    t97 = ((x389!=(x390^x391))|x392);

    if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = 1;
	uint8_t x396 = UINT8_MAX;
	static volatile int32_t t98 = -2;

    t98 = ((x393!=(x394^x395))|x396);

    if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = -1;
	int8_t x398 = INT8_MAX;
	int8_t x399 = INT8_MIN;
	int16_t x400 = 1;
	static volatile int32_t t99 = -388986119;

    t99 = ((x397!=(x398^x399))|x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MAX;
	uint16_t x402 = UINT16_MAX;
	volatile int8_t x404 = INT8_MIN;
	static int32_t t100 = -648;

    t100 = ((x401!=(x402^x403))|x404);

    if (t100 != -127) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = UINT32_MAX;
	int32_t x406 = INT32_MAX;
	uint16_t x407 = 31308U;
	volatile int8_t x408 = INT8_MAX;

    t101 = ((x405!=(x406^x407))|x408);

    if (t101 != 127) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x410 = INT16_MAX;
	static int64_t x411 = 173LL;

    t102 = ((x409!=(x410^x411))|x412);

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x414 = INT8_MAX;
	uint32_t x415 = 235761U;
	volatile uint8_t x416 = 36U;
	volatile int32_t t103 = 0;

    t103 = ((x413!=(x414^x415))|x416);

    if (t103 != 37) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x417 = INT64_MIN;
	volatile uint32_t x418 = 253U;
	int16_t x420 = 0;
	static int32_t t104 = -1139;

    t104 = ((x417!=(x418^x419))|x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x422 = INT32_MIN;
	uint16_t x423 = 668U;
	volatile uint8_t x424 = UINT8_MAX;

    t105 = ((x421!=(x422^x423))|x424);

    if (t105 != 255) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MIN;
	int8_t x426 = -55;
	uint16_t x428 = UINT16_MAX;
	int32_t t106 = -2644;

    t106 = ((x425!=(x426^x427))|x428);

    if (t106 != 65535) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int8_t x429 = -3;
	int8_t x430 = INT8_MIN;
	int16_t x431 = INT16_MAX;
	int16_t x432 = INT16_MIN;
	int32_t t107 = 0;

    t107 = ((x429!=(x430^x431))|x432);

    if (t107 != -32767) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x434 = 1770856362021LLU;
	uint16_t x435 = 5905U;
	static uint16_t x436 = 1U;
	volatile int32_t t108 = 3099051;

    t108 = ((x433!=(x434^x435))|x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MAX;
	int64_t x439 = INT64_MAX;
	volatile uint64_t t109 = UINT64_MAX;

    t109 = ((x437!=(x438^x439))|x440);

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x441 = INT8_MIN;
	volatile int64_t x443 = INT64_MAX;
	volatile int32_t t110 = -48;

    t110 = ((x441!=(x442^x443))|x444);

    if (t110 != -32767) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MIN;
	int32_t x447 = 64;
	int32_t x448 = 7;
	int32_t t111 = -16;

    t111 = ((x445!=(x446^x447))|x448);

    if (t111 != 7) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x449 = INT16_MIN;
	uint16_t x450 = 455U;
	int32_t x451 = -1;
	uint32_t x452 = 11093U;
	uint32_t t112 = 20453504U;

    t112 = ((x449!=(x450^x451))|x452);

    if (t112 != 11093U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x453 = -1601;
	uint8_t x455 = UINT8_MAX;
	int16_t x456 = -1;
	volatile int32_t t113 = -99019470;

    t113 = ((x453!=(x454^x455))|x456);

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x457 = INT64_MAX;
	uint64_t x458 = 29552942612271738LLU;
	uint64_t x459 = UINT64_MAX;
	static int64_t x460 = -890445323353101900LL;

    t114 = ((x457!=(x458^x459))|x460);

    if (t114 != -890445323353101899LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = 15834137U;
	int16_t x462 = -1;
	static int8_t x463 = INT8_MIN;
	volatile int16_t x464 = INT16_MAX;
	int32_t t115 = 1;

    t115 = ((x461!=(x462^x463))|x464);

    if (t115 != 32767) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -59;
	int32_t x467 = INT32_MIN;
	static volatile uint64_t x468 = 39LLU;
	volatile uint64_t t116 = 39633628219487682LLU;

    t116 = ((x465!=(x466^x467))|x468);

    if (t116 != 39LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int8_t x469 = -1;
	int32_t x470 = -1;
	int32_t x471 = -1;
	int16_t x472 = 1;
	static int32_t t117 = 31680;

    t117 = ((x469!=(x470^x471))|x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = -1LL;
	volatile int16_t x474 = -1000;
	int32_t x475 = INT32_MIN;
	volatile int32_t x476 = 1;
	volatile int32_t t118 = -6945286;

    t118 = ((x473!=(x474^x475))|x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x477 = 744545363508249425LL;
	static int16_t x478 = INT16_MIN;
	int16_t x479 = INT16_MIN;
	uint8_t x480 = 5U;

    t119 = ((x477!=(x478^x479))|x480);

    if (t119 != 5) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = UINT8_MAX;
	int16_t x483 = INT16_MIN;
	static uint64_t x484 = 140192424767508905LLU;
	uint64_t t120 = 1240LLU;

    t120 = ((x481!=(x482^x483))|x484);

    if (t120 != 140192424767508905LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -7;
	static uint32_t x486 = 14U;
	static int64_t x487 = INT64_MIN;
	int32_t x488 = INT32_MIN;
	int32_t t121 = 64842655;

    t121 = ((x485!=(x486^x487))|x488);

    if (t121 != -2147483647) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 0LLU;
	static uint32_t x490 = 724536329U;
	int16_t x491 = INT16_MAX;
	static uint64_t x492 = 88290994LLU;

    t122 = ((x489!=(x490^x491))|x492);

    if (t122 != 88290995LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x493 = -1;
	static int32_t x495 = INT32_MIN;
	int64_t x496 = -38524LL;
	int64_t t123 = -7841LL;

    t123 = ((x493!=(x494^x495))|x496);

    if (t123 != -38523LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = -1;
	uint32_t x498 = UINT32_MAX;
	static int8_t x499 = -55;
	int16_t x500 = -1;
	int32_t t124 = 32698700;

    t124 = ((x497!=(x498^x499))|x500);

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x501 = UINT16_MAX;
	static int64_t x503 = INT64_MIN;
	volatile int64_t x504 = INT64_MAX;

    t125 = ((x501!=(x502^x503))|x504);

    if (t125 != INT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x506 = INT32_MAX;
	int8_t x507 = -1;
	uint8_t x508 = UINT8_MAX;
	volatile int32_t t126 = 253554;

    t126 = ((x505!=(x506^x507))|x508);

    if (t126 != 255) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 0U;
	volatile int16_t x510 = 73;
	uint8_t x511 = 2U;
	uint32_t x512 = UINT32_MAX;
	static uint32_t t127 = UINT32_MAX;

    t127 = ((x509!=(x510^x511))|x512);

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = 2U;
	static volatile int16_t x514 = 11479;
	int32_t x515 = INT32_MAX;
	static volatile int32_t t128 = 1037690;

    t128 = ((x513!=(x514^x515))|x516);

    if (t128 != 32767) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MIN;
	uint32_t x518 = 1882964061U;
	static volatile int32_t x519 = -1;
	volatile int32_t t129 = -52836;

    t129 = ((x517!=(x518^x519))|x520);

    if (t129 != 127) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x522 = -1LL;
	int8_t x524 = INT8_MIN;

    t130 = ((x521!=(x522^x523))|x524);

    if (t130 != -127) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MIN;
	volatile uint32_t x526 = 62U;
	int8_t x527 = -7;
	volatile int32_t x528 = -248631;
	int32_t t131 = 61849666;

    t131 = ((x525!=(x526^x527))|x528);

    if (t131 != -248631) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = -124;
	uint8_t x530 = UINT8_MAX;
	static int8_t x531 = INT8_MAX;
	static volatile int64_t t132 = 44LL;

    t132 = ((x529!=(x530^x531))|x532);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x534 = 1;
	static int32_t x535 = -1;
	uint32_t x536 = 2U;

    t133 = ((x533!=(x534^x535))|x536);

    if (t133 != 3U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	int64_t x538 = INT64_MIN;
	static int8_t x540 = 8;
	static volatile int32_t t134 = 78615;

    t134 = ((x537!=(x538^x539))|x540);

    if (t134 != 9) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x541 = INT8_MAX;
	static volatile int16_t x542 = 2;
	uint16_t x543 = UINT16_MAX;
	int16_t x544 = -34;
	volatile int32_t t135 = 4989053;

    t135 = ((x541!=(x542^x543))|x544);

    if (t135 != -33) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 5U;
	int8_t x546 = -2;
	uint32_t x547 = 2847147U;
	int16_t x548 = -1;
	volatile int32_t t136 = 0;

    t136 = ((x545!=(x546^x547))|x548);

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MIN;
	int64_t x550 = INT64_MIN;
	int16_t x551 = 0;
	volatile int16_t x552 = -425;
	int32_t t137 = -22;

    t137 = ((x549!=(x550^x551))|x552);

    if (t137 != -425) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = 32U;
	int32_t x554 = INT32_MIN;
	int32_t x555 = -1;
	volatile int32_t t138 = 2934115;

    t138 = ((x553!=(x554^x555))|x556);

    if (t138 != -2147483647) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MIN;
	int16_t x558 = -1;
	int16_t x559 = -34;
	int8_t x560 = 13;

    t139 = ((x557!=(x558^x559))|x560);

    if (t139 != 13) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x561 = 862LLU;
	volatile uint32_t x562 = 602958021U;
	volatile uint32_t x563 = 189U;
	volatile int32_t t140 = -1303697;

    t140 = ((x561!=(x562^x563))|x564);

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MIN;
	int32_t x566 = INT32_MIN;
	volatile uint32_t x568 = UINT32_MAX;
	volatile uint32_t t141 = UINT32_MAX;

    t141 = ((x565!=(x566^x567))|x568);

    if (t141 != UINT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MAX;
	uint8_t x570 = 0U;
	int32_t x571 = INT32_MIN;
	int64_t x572 = 10882153372LL;
	static volatile int64_t t142 = 11415310864LL;

    t142 = ((x569!=(x570^x571))|x572);

    if (t142 != 10882153373LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x574 = -1;
	int8_t x575 = -11;
	uint32_t x576 = 2621U;
	volatile uint32_t t143 = 1902055518U;

    t143 = ((x573!=(x574^x575))|x576);

    if (t143 != 2621U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x577 = INT32_MAX;
	uint8_t x578 = 22U;
	uint8_t x579 = 4U;

    t144 = ((x577!=(x578^x579))|x580);

    if (t144 != -51) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x582 = INT32_MIN;
	int8_t x583 = INT8_MAX;
	int64_t x584 = 441140LL;

    t145 = ((x581!=(x582^x583))|x584);

    if (t145 != 441141LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = INT32_MIN;
	uint16_t x586 = 91U;
	uint8_t x588 = 11U;
	static int32_t t146 = 55916;

    t146 = ((x585!=(x586^x587))|x588);

    if (t146 != 11) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	uint8_t x590 = 4U;
	volatile uint32_t x592 = 32850375U;
	uint32_t t147 = 274U;

    t147 = ((x589!=(x590^x591))|x592);

    if (t147 != 32850375U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = 1U;
	uint8_t x594 = 1U;
	static int8_t x595 = INT8_MAX;
	int16_t x596 = INT16_MIN;
	static volatile int32_t t148 = 1909727;

    t148 = ((x593!=(x594^x595))|x596);

    if (t148 != -32767) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	volatile int32_t x599 = INT32_MAX;
	int64_t x600 = -1LL;
	int64_t t149 = 10846931994927751LL;

    t149 = ((x597!=(x598^x599))|x600);

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x601 = 14038LL;
	volatile uint8_t x602 = 116U;
	int64_t x603 = INT64_MAX;
	int32_t x604 = INT32_MIN;

    t150 = ((x601!=(x602^x603))|x604);

    if (t150 != -2147483647) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = UINT16_MAX;
	int16_t x606 = -1;
	int32_t x607 = INT32_MIN;
	volatile int16_t x608 = INT16_MIN;
	static int32_t t151 = -1562;

    t151 = ((x605!=(x606^x607))|x608);

    if (t151 != -32767) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x611 = 508571U;
	static int64_t x612 = INT64_MAX;
	int64_t t152 = INT64_MAX;

    t152 = ((x609!=(x610^x611))|x612);

    if (t152 != INT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 7612315282900LLU;
	static volatile int64_t x616 = 1532LL;
	int64_t t153 = 57343LL;

    t153 = ((x613!=(x614^x615))|x616);

    if (t153 != 1533LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x617 = INT16_MIN;
	int32_t x618 = INT32_MAX;
	int64_t x619 = -2537694LL;
	int8_t x620 = -1;

    t154 = ((x617!=(x618^x619))|x620);

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MIN;
	int8_t x623 = -2;
	int32_t t155 = 5794;

    t155 = ((x621!=(x622^x623))|x624);

    if (t155 != 59) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = UINT8_MAX;
	uint64_t x626 = 614LLU;
	int8_t x627 = INT8_MIN;
	static uint32_t x628 = UINT32_MAX;
	volatile uint32_t t156 = UINT32_MAX;

    t156 = ((x625!=(x626^x627))|x628);

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x630 = -25066400LL;
	int8_t x631 = -7;
	int32_t x632 = INT32_MAX;
	int32_t t157 = INT32_MAX;

    t157 = ((x629!=(x630^x631))|x632);

    if (t157 != INT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MIN;
	uint64_t x634 = 2326324252256208LLU;
	static int64_t x635 = -1LL;
	int32_t x636 = 6290;
	int32_t t158 = 55;

    t158 = ((x633!=(x634^x635))|x636);

    if (t158 != 6291) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x637 = 12554988375LLU;
	int8_t x638 = INT8_MAX;
	int16_t x639 = INT16_MIN;
	static uint64_t x640 = UINT64_MAX;
	uint64_t t159 = UINT64_MAX;

    t159 = ((x637!=(x638^x639))|x640);

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = 5036411;
	uint8_t x642 = 1U;
	int16_t x643 = INT16_MAX;
	int32_t t160 = INT32_MAX;

    t160 = ((x641!=(x642^x643))|x644);

    if (t160 != INT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x645 = 48;
	int16_t x646 = -1;
	static volatile int8_t x647 = -1;
	int64_t x648 = -26205998960824826LL;
	int64_t t161 = -230145LL;

    t161 = ((x645!=(x646^x647))|x648);

    if (t161 != -26205998960824825LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 1123145677646179123LLU;
	int64_t x651 = INT64_MIN;
	int8_t x652 = INT8_MAX;
	int32_t t162 = 95;

    t162 = ((x649!=(x650^x651))|x652);

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MAX;
	volatile int16_t x656 = INT16_MIN;
	int32_t t163 = -27;

    t163 = ((x653!=(x654^x655))|x656);

    if (t163 != -32767) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x657 = INT16_MIN;
	static int32_t x658 = 29469239;
	static int16_t x659 = 0;
	volatile int16_t x660 = INT16_MIN;
	static volatile int32_t t164 = -5975508;

    t164 = ((x657!=(x658^x659))|x660);

    if (t164 != -32767) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	int32_t x662 = INT32_MIN;
	int64_t x663 = INT64_MAX;
	uint16_t x664 = 731U;
	int32_t t165 = -43163751;

    t165 = ((x661!=(x662^x663))|x664);

    if (t165 != 731) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x666 = -1;
	int8_t x667 = INT8_MIN;
	static int8_t x668 = -1;
	volatile int32_t t166 = -2502;

    t166 = ((x665!=(x666^x667))|x668);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -1;
	volatile int32_t x670 = INT32_MAX;
	int32_t x671 = INT32_MIN;
	volatile int64_t x672 = INT64_MAX;

    t167 = ((x669!=(x670^x671))|x672);

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x673 = 449031807288484LLU;
	int16_t x674 = -1;
	uint16_t x675 = UINT16_MAX;
	int64_t x676 = INT64_MAX;
	volatile int64_t t168 = INT64_MAX;

    t168 = ((x673!=(x674^x675))|x676);

    if (t168 != INT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = -2112;
	int8_t x679 = 29;
	int64_t t169 = 1LL;

    t169 = ((x677!=(x678^x679))|x680);

    if (t169 != 355229275305933LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = 5336;
	int16_t x684 = INT16_MAX;
	volatile int32_t t170 = -65047377;

    t170 = ((x681!=(x682^x683))|x684);

    if (t170 != 32767) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MIN;
	static int8_t x686 = 9;
	int32_t x687 = INT32_MIN;
	static int32_t t171 = 1;

    t171 = ((x685!=(x686^x687))|x688);

    if (t171 != -32767) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x689 = -5;
	int8_t x690 = -1;
	uint32_t x691 = 6U;
	int16_t x692 = INT16_MIN;
	static volatile int32_t t172 = 15;

    t172 = ((x689!=(x690^x691))|x692);

    if (t172 != -32767) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x693 = UINT8_MAX;
	static uint32_t x694 = 361165531U;
	static int64_t x695 = 42955837911591LL;
	volatile uint16_t x696 = 27U;
	static volatile int32_t t173 = -31;

    t173 = ((x693!=(x694^x695))|x696);

    if (t173 != 27) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = UINT16_MAX;
	volatile int8_t x698 = 0;
	uint64_t x700 = UINT64_MAX;
	static uint64_t t174 = UINT64_MAX;

    t174 = ((x697!=(x698^x699))|x700);

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x701 = INT64_MIN;
	static int16_t x703 = INT16_MIN;
	volatile int32_t x704 = INT32_MIN;
	static volatile int32_t t175 = 320;

    t175 = ((x701!=(x702^x703))|x704);

    if (t175 != -2147483647) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int64_t x705 = -1LL;
	uint8_t x707 = 6U;
	volatile int32_t t176 = -18135;

    t176 = ((x705!=(x706^x707))|x708);

    if (t176 != 3) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int32_t x709 = -2;
	volatile uint64_t x710 = 307LLU;
	static volatile int32_t t177 = -793;

    t177 = ((x709!=(x710^x711))|x712);

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x713 = 349U;
	volatile uint16_t x714 = 0U;
	volatile uint16_t x716 = 15611U;
	static volatile int32_t t178 = -15945870;

    t178 = ((x713!=(x714^x715))|x716);

    if (t178 != 15611) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x717 = -1874;
	uint32_t x718 = 482247114U;
	static int16_t x719 = 26;
	int64_t x720 = INT64_MAX;
	int64_t t179 = INT64_MAX;

    t179 = ((x717!=(x718^x719))|x720);

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x721 = 10781U;
	static uint64_t x722 = 96088701566LLU;
	int16_t x723 = -1;
	int8_t x724 = 1;
	int32_t t180 = -795;

    t180 = ((x721!=(x722^x723))|x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -1;
	static int64_t x727 = INT64_MIN;
	int32_t x728 = INT32_MIN;
	volatile int32_t t181 = INT32_MIN;

    t181 = ((x725!=(x726^x727))|x728);

    if (t181 != INT32_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = 4560;
	uint16_t x730 = 3U;
	uint64_t x731 = 1040284589237748LLU;
	static volatile int32_t t182 = 52;

    t182 = ((x729!=(x730^x731))|x732);

    if (t182 != 223) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MAX;
	static uint16_t x734 = UINT16_MAX;
	static int8_t x735 = INT8_MIN;
	int64_t x736 = 9857539677735243LL;
	volatile int64_t t183 = 348162679203LL;

    t183 = ((x733!=(x734^x735))|x736);

    if (t183 != 9857539677735243LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = 4U;
	static int16_t x738 = -1;
	int64_t x739 = INT64_MIN;
	uint32_t x740 = UINT32_MAX;
	uint32_t t184 = UINT32_MAX;

    t184 = ((x737!=(x738^x739))|x740);

    if (t184 != UINT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -1;
	int8_t x742 = -1;
	uint8_t x744 = 0U;
	int32_t t185 = -4772096;

    t185 = ((x741!=(x742^x743))|x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = -1;
	uint16_t x746 = UINT16_MAX;
	int64_t x747 = 4419378128LL;
	int64_t x748 = 65676376301268LL;

    t186 = ((x745!=(x746^x747))|x748);

    if (t186 != 65676376301269LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -1;
	int8_t x751 = INT8_MIN;
	uint64_t x752 = 8LLU;
	uint64_t t187 = 2300549046301659452LLU;

    t187 = ((x749!=(x750^x751))|x752);

    if (t187 != 9LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int32_t x753 = INT32_MIN;
	uint16_t x755 = UINT16_MAX;
	int32_t x756 = -1;
	volatile int32_t t188 = -3;

    t188 = ((x753!=(x754^x755))|x756);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = 0U;
	int16_t x759 = INT16_MIN;
	static int8_t x760 = 14;
	int32_t t189 = -198155;

    t189 = ((x757!=(x758^x759))|x760);

    if (t189 != 15) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	uint8_t x762 = UINT8_MAX;
	int32_t x763 = INT32_MAX;
	static uint8_t x764 = UINT8_MAX;
	volatile int32_t t190 = -2495;

    t190 = ((x761!=(x762^x763))|x764);

    if (t190 != 255) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = -51973LL;
	int32_t x766 = INT32_MIN;
	int64_t x767 = INT64_MIN;
	volatile int32_t t191 = -3;

    t191 = ((x765!=(x766^x767))|x768);

    if (t191 != -127) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = 380U;
	uint16_t x770 = 12109U;
	int32_t x771 = INT32_MAX;
	int8_t x772 = 50;

    t192 = ((x769!=(x770^x771))|x772);

    if (t192 != 51) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x775 = 8;
	static int8_t x776 = 1;
	int32_t t193 = -3530;

    t193 = ((x773!=(x774^x775))|x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = -1;
	static int8_t x779 = 48;
	volatile int64_t t194 = -3LL;

    t194 = ((x777!=(x778^x779))|x780);

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = UINT8_MAX;
	volatile int64_t x782 = INT64_MIN;
	uint16_t x783 = 0U;

    t195 = ((x781!=(x782^x783))|x784);

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -1LL;
	int16_t x786 = -1;
	uint64_t x787 = 1776254238082LLU;
	static int64_t t196 = 89LL;

    t196 = ((x785!=(x786^x787))|x788);

    if (t196 != -1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MIN;
	uint16_t x790 = 487U;
	static int32_t t197 = 0;

    t197 = ((x789!=(x790^x791))|x792);

    if (t197 != -127) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x793 = 225LLU;
	uint16_t x794 = 537U;
	static int64_t x795 = -1LL;
	uint64_t x796 = 1LLU;
	uint64_t t198 = 176LLU;

    t198 = ((x793!=(x794^x795))|x796);

    if (t198 != 1LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x798 = 0;
	static int16_t x799 = 2653;
	volatile uint16_t x800 = UINT16_MAX;
	static volatile int32_t t199 = 2385;

    t199 = ((x797!=(x798^x799))|x800);

    if (t199 != 65535) { NG(); } else { ; }
	
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

