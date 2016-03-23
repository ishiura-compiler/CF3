
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

static int16_t x1 = -1;
volatile int8_t x5 = INT8_MAX;
int32_t x6 = INT32_MAX;
uint64_t x24 = 1LLU;
int16_t x28 = INT16_MIN;
int32_t t7 = -387591483;
static uint8_t x36 = 116U;
volatile int64_t x37 = 73426947LL;
uint16_t x38 = 23U;
uint32_t x44 = 1513873U;
int64_t x50 = INT64_MIN;
int8_t x53 = 0;
volatile int8_t x55 = 2;
static uint16_t x56 = UINT16_MAX;
volatile int32_t t14 = 1;
volatile int16_t x65 = -1;
int32_t t16 = 135601;
volatile int32_t t17 = -12;
uint16_t x73 = 6746U;
uint32_t t18 = UINT32_MAX;
static int16_t x82 = INT16_MAX;
volatile int32_t t20 = 569281948;
int32_t x85 = INT32_MIN;
uint16_t x92 = UINT16_MAX;
int32_t x95 = INT32_MIN;
static volatile int8_t x96 = 28;
volatile uint64_t x100 = 481074293566LLU;
uint64_t x101 = 4311639715397618LLU;
volatile uint64_t x105 = UINT64_MAX;
int32_t t26 = -25962;
volatile uint32_t t27 = 178U;
static int8_t x113 = INT8_MIN;
int16_t x124 = INT16_MIN;
int64_t x130 = -1LL;
int16_t x144 = INT16_MIN;
uint8_t x157 = UINT8_MAX;
uint8_t x160 = 2U;
int16_t x167 = INT16_MIN;
volatile uint64_t x178 = UINT64_MAX;
int32_t t43 = 5;
int32_t t46 = 440866;
uint8_t x194 = UINT8_MAX;
volatile uint32_t t47 = 8221518U;
int32_t x198 = INT32_MAX;
uint32_t x201 = 195U;
int64_t x205 = -1LL;
volatile int32_t t50 = 20183;
int16_t x210 = -73;
int64_t x213 = -1LL;
int16_t x218 = -104;
volatile int32_t t54 = -535;
int32_t t59 = 45207348;
static uint32_t x247 = UINT32_MAX;
int16_t x248 = -62;
volatile int16_t x249 = -13;
uint8_t x250 = UINT8_MAX;
uint16_t x262 = UINT16_MAX;
uint64_t x266 = UINT64_MAX;
int64_t x269 = INT64_MAX;
volatile int64_t x275 = 20581LL;
volatile int8_t x276 = -1;
int32_t t66 = 1580;
int16_t x277 = INT16_MAX;
int8_t x288 = INT8_MIN;
volatile int32_t t69 = -9;
volatile int32_t x290 = -231874;
int64_t x296 = -1LL;
static volatile int32_t x297 = INT32_MIN;
volatile int16_t x299 = 1;
uint16_t x307 = 113U;
uint8_t x308 = 4U;
volatile int32_t t77 = INT32_MAX;
static volatile int8_t x322 = INT8_MAX;
int8_t x324 = -21;
int16_t x325 = -1;
int8_t x326 = -1;
int8_t x333 = -1;
static int64_t x336 = -49688421335364LL;
static volatile int8_t x338 = 25;
int64_t t82 = INT64_MAX;
int64_t t83 = 33LL;
int8_t x346 = -11;
int64_t x348 = INT64_MIN;
static uint32_t x354 = 7160U;
volatile int32_t t86 = -450035620;
volatile int8_t x371 = INT8_MAX;
int16_t x375 = INT16_MIN;
volatile int32_t t91 = -132222;
int32_t x380 = 1124;
static volatile int32_t t92 = 0;
int64_t x383 = INT64_MIN;
static volatile uint8_t x385 = 0U;
int8_t x388 = INT8_MIN;
volatile int32_t x392 = 40043371;
int32_t x395 = INT32_MIN;
volatile int16_t x403 = 784;
int8_t x406 = INT8_MIN;
int16_t x407 = -1;
int32_t t99 = -2575870;
int32_t t100 = -16493;
uint8_t x418 = 65U;
int16_t x424 = INT16_MAX;
uint64_t x427 = 15LLU;
static int8_t x430 = INT8_MIN;
uint64_t x433 = 1118303312241767753LLU;
int64_t t107 = INT64_MIN;
static int8_t x443 = -1;
uint8_t x448 = UINT8_MAX;
int32_t t109 = 46353;
int16_t x451 = 27;
volatile int64_t x456 = -1294524111595513LL;
int64_t x467 = 6910362651349LL;
uint64_t x474 = 2442738100453891LLU;
int64_t x478 = INT64_MIN;
uint64_t t117 = 18937594103LLU;
int32_t x486 = INT32_MAX;
volatile int32_t t119 = -32061;
int32_t x489 = INT32_MAX;
volatile int8_t x497 = INT8_MAX;
uint32_t x501 = 1U;
uint8_t x513 = UINT8_MAX;
static uint32_t t126 = 12U;
int16_t x519 = -1;
int32_t x520 = INT32_MIN;
static int32_t x525 = -1;
volatile uint64_t t129 = 717340733LLU;
static int32_t x532 = INT32_MIN;
int8_t x536 = INT8_MAX;
int16_t x542 = 10;
volatile uint16_t x546 = 13416U;
static int32_t t135 = -3410483;
volatile int8_t x555 = INT8_MIN;
static int64_t x557 = -1LL;
static int16_t x563 = INT16_MIN;
static uint32_t x566 = 16497713U;
int16_t x575 = INT16_MIN;
static volatile int32_t t141 = -119171415;
static int32_t t143 = -8307970;
static int16_t x593 = INT16_MAX;
uint8_t x613 = UINT8_MAX;
volatile uint8_t x614 = UINT8_MAX;
int16_t x615 = INT16_MIN;
uint16_t x622 = UINT16_MAX;
int16_t x628 = INT16_MIN;
static volatile int32_t t154 = 1;
static int8_t x636 = INT8_MAX;
int8_t x646 = INT8_MIN;
volatile int32_t t158 = 163944608;
volatile int64_t t160 = INT64_MIN;
int16_t x657 = INT16_MAX;
int32_t x658 = -3;
int32_t x660 = -1;
volatile uint32_t x664 = 24057274U;
volatile int16_t x666 = INT16_MAX;
static uint32_t x667 = 120503866U;
static int8_t x668 = INT8_MIN;
volatile uint16_t x672 = UINT16_MAX;
uint8_t x674 = UINT8_MAX;
int16_t x676 = INT16_MAX;
uint16_t x680 = 973U;
int32_t t166 = 198;
volatile int8_t x685 = -1;
int8_t x687 = -4;
uint32_t x688 = 83U;
uint16_t x690 = 0U;
static int64_t x703 = -1001LL;
uint16_t x711 = 5U;
int32_t t173 = -1;
static uint16_t x713 = UINT16_MAX;
int32_t x720 = INT32_MIN;
static int16_t x721 = -1;
uint8_t x725 = 15U;
int64_t x732 = INT64_MIN;
volatile uint32_t x733 = 1441738U;
static uint32_t x734 = UINT32_MAX;
volatile int32_t t180 = INT32_MIN;
volatile int16_t x745 = INT16_MAX;
int64_t x748 = 17067315753502437LL;
static int64_t x751 = -1LL;
int32_t x758 = INT32_MIN;
volatile int32_t x759 = 3061;
volatile uint64_t x772 = UINT64_MAX;
uint8_t x776 = 5U;
int8_t x784 = -1;
volatile int32_t x787 = -112;
static int8_t x789 = -1;
uint16_t x791 = 4019U;
static uint32_t x796 = 44722028U;
volatile int64_t x798 = -1LL;
int16_t x801 = INT16_MAX;
int8_t x803 = INT8_MIN;
static volatile int64_t x806 = -408LL;
static int64_t x810 = INT64_MIN;


void f0(void) {
    	int64_t x2 = -1LL;
	int64_t x3 = INT64_MIN;
	volatile int32_t x4 = -1;
	volatile int32_t t0 = 0;

    t0 = ((x1>(x2&x3))+x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x7 = INT32_MIN;
	uint16_t x8 = 9U;
	int32_t t1 = 0;

    t1 = ((x5>(x6&x7))+x8);

    if (t1 != 10) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 22;
	int32_t x10 = 12710;
	uint8_t x11 = UINT8_MAX;
	volatile uint8_t x12 = 1U;
	int32_t t2 = 259819;

    t2 = ((x9>(x10&x11))+x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int16_t x14 = -3495;
	int16_t x15 = INT16_MIN;
	volatile int8_t x16 = INT8_MIN;
	int32_t t3 = -7577;

    t3 = ((x13>(x14&x15))+x16);

    if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MIN;
	volatile int64_t x18 = 251LL;
	static int64_t x19 = 1859641145268LL;
	uint64_t x20 = 5661047023253268324LLU;
	volatile uint64_t t4 = 1576206829845LLU;

    t4 = ((x17>(x18&x19))+x20);

    if (t4 != 5661047023253268324LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 21;
	int16_t x22 = INT16_MAX;
	uint16_t x23 = UINT16_MAX;
	volatile uint64_t t5 = 1581096057393941LLU;

    t5 = ((x21>(x22&x23))+x24);

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x25 = 1;
	static uint8_t x26 = 4U;
	static uint8_t x27 = 1U;
	volatile int32_t t6 = 0;

    t6 = ((x25>(x26&x27))+x28);

    if (t6 != -32767) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint16_t x29 = UINT16_MAX;
	volatile int64_t x30 = INT64_MAX;
	uint16_t x31 = UINT16_MAX;
	int16_t x32 = -1;

    t7 = ((x29>(x30&x31))+x32);

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int64_t x33 = 8067532889662LL;
	int8_t x34 = INT8_MAX;
	static int64_t x35 = 86366894578998279LL;
	static volatile int32_t t8 = 4524;

    t8 = ((x33>(x34&x35))+x36);

    if (t8 != 117) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x39 = -1;
	static int8_t x40 = INT8_MIN;
	int32_t t9 = 254828304;

    t9 = ((x37>(x38&x39))+x40);

    if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	int8_t x42 = -1;
	int32_t x43 = INT32_MIN;
	static uint32_t t10 = 21500U;

    t10 = ((x41>(x42&x43))+x44);

    if (t10 != 1513874U) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x45 = -8119;
	uint8_t x46 = UINT8_MAX;
	int16_t x47 = INT16_MIN;
	int64_t x48 = INT64_MAX;
	volatile int64_t t11 = INT64_MAX;

    t11 = ((x45>(x46&x47))+x48);

    if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 0U;
	int16_t x51 = INT16_MIN;
	static int32_t x52 = INT32_MIN;
	int32_t t12 = -9813299;

    t12 = ((x49>(x50&x51))+x52);

    if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x54 = -1;
	volatile int32_t t13 = 5;

    t13 = ((x53>(x54&x55))+x56);

    if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = UINT64_MAX;
	uint16_t x58 = 5U;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = UINT16_MAX;

    t14 = ((x57>(x58&x59))+x60);

    if (t14 != 65536) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	int32_t x62 = 36;
	int8_t x63 = -6;
	uint16_t x64 = 10U;
	volatile int32_t t15 = 49;

    t15 = ((x61>(x62&x63))+x64);

    if (t15 != 10) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x66 = UINT8_MAX;
	int8_t x67 = -4;
	volatile uint8_t x68 = 49U;

    t16 = ((x65>(x66&x67))+x68);

    if (t16 != 49) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = -1;
	static int16_t x70 = 1696;
	volatile int16_t x71 = -12;
	static volatile uint8_t x72 = 39U;

    t17 = ((x69>(x70&x71))+x72);

    if (t17 != 39) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = 1339276;
	int64_t x75 = -8443176560454065LL;
	uint32_t x76 = UINT32_MAX;

    t18 = ((x73>(x74&x75))+x76);

    if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = 33U;
	int64_t x78 = -1LL;
	volatile uint32_t x79 = 0U;
	static int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -29307;

    t19 = ((x77>(x78&x79))+x80);

    if (t19 != -2147483647) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x81 = INT64_MIN;
	int8_t x83 = 3;
	volatile int8_t x84 = 57;

    t20 = ((x81>(x82&x83))+x84);

    if (t20 != 57) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x86 = INT16_MAX;
	int64_t x87 = INT64_MAX;
	static int8_t x88 = -1;
	int32_t t21 = -37037;

    t21 = ((x85>(x86&x87))+x88);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	int64_t x90 = INT64_MIN;
	int32_t x91 = INT32_MIN;
	int32_t t22 = 69967;

    t22 = ((x89>(x90&x91))+x92);

    if (t22 != 65536) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = 18605411;
	int8_t x94 = -1;
	volatile int32_t t23 = 18732093;

    t23 = ((x93>(x94&x95))+x96);

    if (t23 != 29) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MAX;
	uint32_t x98 = 1710426U;
	static int32_t x99 = INT32_MAX;
	volatile uint64_t t24 = 306571369837070LLU;

    t24 = ((x97>(x98&x99))+x100);

    if (t24 != 481074293566LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x102 = 13;
	static int8_t x103 = -14;
	volatile int64_t x104 = INT64_MIN;
	volatile int64_t t25 = 10786702656LL;

    t25 = ((x101>(x102&x103))+x104);

    if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x106 = 767089LLU;
	static int8_t x107 = INT8_MAX;
	int8_t x108 = INT8_MAX;

    t26 = ((x105>(x106&x107))+x108);

    if (t26 != 128) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = UINT64_MAX;
	uint16_t x110 = 29U;
	int8_t x111 = INT8_MIN;
	uint32_t x112 = 26352U;

    t27 = ((x109>(x110&x111))+x112);

    if (t27 != 26353U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x114 = -1LL;
	static volatile int8_t x115 = -9;
	int64_t x116 = INT64_MAX;
	volatile int64_t t28 = INT64_MAX;

    t28 = ((x113>(x114&x115))+x116);

    if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x117 = INT8_MAX;
	int16_t x118 = INT16_MIN;
	int64_t x119 = INT64_MIN;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t29 = 6850U;

    t29 = ((x117>(x118&x119))+x120);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = UINT8_MAX;
	uint16_t x122 = 214U;
	uint8_t x123 = 47U;
	int32_t t30 = 53739434;

    t30 = ((x121>(x122&x123))+x124);

    if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x125 = -6442760;
	uint16_t x126 = 9U;
	volatile uint8_t x127 = 6U;
	uint16_t x128 = 0U;
	volatile int32_t t31 = 9037;

    t31 = ((x125>(x126&x127))+x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = -1LL;
	static volatile uint8_t x131 = 124U;
	static int8_t x132 = INT8_MIN;
	volatile int32_t t32 = -11807;

    t32 = ((x129>(x130&x131))+x132);

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 2747178U;
	static int8_t x134 = INT8_MAX;
	static volatile int32_t x135 = -1;
	int16_t x136 = INT16_MAX;
	volatile int32_t t33 = -41;

    t33 = ((x133>(x134&x135))+x136);

    if (t33 != 32768) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = 1912548LL;
	int32_t x138 = -1;
	uint16_t x139 = 348U;
	int64_t x140 = INT64_MIN;
	static volatile int64_t t34 = 4797LL;

    t34 = ((x137>(x138&x139))+x140);

    if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -1;
	uint32_t x142 = UINT32_MAX;
	static volatile int32_t x143 = 0;
	int32_t t35 = 1080895;

    t35 = ((x141>(x142&x143))+x144);

    if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int32_t x145 = -1888732;
	volatile uint16_t x146 = UINT16_MAX;
	int64_t x147 = INT64_MIN;
	volatile int32_t x148 = INT32_MIN;
	volatile int32_t t36 = INT32_MIN;

    t36 = ((x145>(x146&x147))+x148);

    if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = -1;
	uint32_t x154 = 7596U;
	volatile int64_t x155 = -16LL;
	static volatile int8_t x156 = INT8_MIN;
	int32_t t37 = 15;

    t37 = ((x153>(x154&x155))+x156);

    if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x158 = INT16_MIN;
	static uint64_t x159 = 14204171774LLU;
	static volatile int32_t t38 = 752570;

    t38 = ((x157>(x158&x159))+x160);

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x161 = 640354714U;
	volatile uint32_t x162 = UINT32_MAX;
	int64_t x163 = INT64_MIN;
	uint16_t x164 = UINT16_MAX;
	int32_t t39 = 86;

    t39 = ((x161>(x162&x163))+x164);

    if (t39 != 65536) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = -3;
	int64_t x166 = -1LL;
	volatile int64_t x168 = INT64_MIN;
	static int64_t t40 = 71LL;

    t40 = ((x165>(x166&x167))+x168);

    if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x169 = -1;
	static int32_t x170 = INT32_MIN;
	static int64_t x171 = -1LL;
	int16_t x172 = INT16_MAX;
	static int32_t t41 = 413171;

    t41 = ((x169>(x170&x171))+x172);

    if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x173 = 48473LLU;
	uint32_t x174 = 2U;
	volatile uint16_t x175 = 28427U;
	volatile int8_t x176 = -1;
	int32_t t42 = -7135;

    t42 = ((x173>(x174&x175))+x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x177 = -4;
	int32_t x179 = INT32_MAX;
	static int32_t x180 = INT32_MIN;

    t43 = ((x177>(x178&x179))+x180);

    if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x181 = -1;
	uint16_t x182 = 6U;
	uint16_t x183 = 2U;
	volatile int16_t x184 = INT16_MAX;
	int32_t t44 = -15700429;

    t44 = ((x181>(x182&x183))+x184);

    if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x185 = -1LL;
	int64_t x186 = INT64_MIN;
	volatile uint64_t x187 = 67LLU;
	int64_t x188 = -1LL;
	volatile int64_t t45 = -20695688764781836LL;

    t45 = ((x185>(x186&x187))+x188);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x189 = -1LL;
	int16_t x190 = INT16_MAX;
	int16_t x191 = INT16_MIN;
	int8_t x192 = -1;

    t46 = ((x189>(x190&x191))+x192);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x193 = INT16_MIN;
	static int32_t x195 = -107;
	uint32_t x196 = 585658U;

    t47 = ((x193>(x194&x195))+x196);

    if (t47 != 585658U) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x197 = UINT16_MAX;
	int8_t x199 = -1;
	int8_t x200 = -1;
	int32_t t48 = -10;

    t48 = ((x197>(x198&x199))+x200);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x202 = INT8_MAX;
	uint64_t x203 = 370LLU;
	uint16_t x204 = 3110U;
	int32_t t49 = -71;

    t49 = ((x201>(x202&x203))+x204);

    if (t49 != 3111) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x206 = 12U;
	int8_t x207 = INT8_MIN;
	int16_t x208 = -1;

    t50 = ((x205>(x206&x207))+x208);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x209 = INT8_MAX;
	int16_t x211 = 2636;
	static int32_t x212 = INT32_MIN;
	volatile int32_t t51 = INT32_MIN;

    t51 = ((x209>(x210&x211))+x212);

    if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x214 = -1;
	int8_t x215 = -1;
	static int16_t x216 = -1;
	volatile int32_t t52 = -4003;

    t52 = ((x213>(x214&x215))+x216);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x217 = INT16_MAX;
	int8_t x219 = 4;
	int64_t x220 = -1317281387046979LL;
	volatile int64_t t53 = 1LL;

    t53 = ((x217>(x218&x219))+x220);

    if (t53 != -1317281387046978LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x221 = 89U;
	int64_t x222 = INT64_MIN;
	static int8_t x223 = -1;
	int8_t x224 = INT8_MIN;

    t54 = ((x221>(x222&x223))+x224);

    if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x225 = INT32_MIN;
	uint32_t x226 = 11402U;
	int32_t x227 = 3;
	static uint16_t x228 = UINT16_MAX;
	int32_t t55 = 7899;

    t55 = ((x225>(x226&x227))+x228);

    if (t55 != 65536) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x229 = 99U;
	int8_t x230 = INT8_MIN;
	int16_t x231 = -2354;
	static uint8_t x232 = 0U;
	int32_t t56 = 198994116;

    t56 = ((x229>(x230&x231))+x232);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x233 = -1;
	static int32_t x234 = -342903;
	int16_t x235 = INT16_MIN;
	static volatile uint16_t x236 = 9U;
	volatile int32_t t57 = 3159485;

    t57 = ((x233>(x234&x235))+x236);

    if (t57 != 10) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x237 = UINT8_MAX;
	int8_t x238 = -52;
	int8_t x239 = -1;
	int16_t x240 = 12339;
	int32_t t58 = 7;

    t58 = ((x237>(x238&x239))+x240);

    if (t58 != 12340) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x241 = INT8_MAX;
	int64_t x242 = 79172773007697370LL;
	int32_t x243 = INT32_MAX;
	int16_t x244 = INT16_MAX;

    t59 = ((x241>(x242&x243))+x244);

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x245 = 0U;
	int16_t x246 = -1;
	volatile int32_t t60 = -31;

    t60 = ((x245>(x246&x247))+x248);

    if (t60 != -62) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x251 = -520;
	volatile int8_t x252 = INT8_MIN;
	static int32_t t61 = -518651;

    t61 = ((x249>(x250&x251))+x252);

    if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x257 = INT32_MIN;
	int16_t x258 = -4;
	int32_t x259 = 753458805;
	uint32_t x260 = UINT32_MAX;
	uint32_t t62 = UINT32_MAX;

    t62 = ((x257>(x258&x259))+x260);

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x261 = 17571U;
	uint64_t x263 = 91308290LLU;
	static uint8_t x264 = UINT8_MAX;
	volatile int32_t t63 = -409876300;

    t63 = ((x261>(x262&x263))+x264);

    if (t63 != 256) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x265 = -22235LL;
	static int16_t x267 = INT16_MIN;
	uint64_t x268 = UINT64_MAX;
	static uint64_t t64 = 9LLU;

    t64 = ((x265>(x266&x267))+x268);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x270 = INT32_MAX;
	static uint64_t x271 = 0LLU;
	uint32_t x272 = 6U;
	uint32_t t65 = 222891U;

    t65 = ((x269>(x270&x271))+x272);

    if (t65 != 7U) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x273 = -155LL;
	uint8_t x274 = UINT8_MAX;

    t66 = ((x273>(x274&x275))+x276);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x278 = -7133;
	volatile int16_t x279 = 26;
	int16_t x280 = INT16_MAX;
	int32_t t67 = 2008;

    t67 = ((x277>(x278&x279))+x280);

    if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x281 = -1541866814616LL;
	static int8_t x282 = 60;
	uint8_t x283 = 121U;
	volatile uint8_t x284 = 124U;
	volatile int32_t t68 = 3536;

    t68 = ((x281>(x282&x283))+x284);

    if (t68 != 124) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x285 = 1;
	static volatile int32_t x286 = -12048;
	int64_t x287 = -1LL;

    t69 = ((x285>(x286&x287))+x288);

    if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x289 = 114U;
	int32_t x291 = 239654;
	static uint16_t x292 = 708U;
	volatile int32_t t70 = 470894129;

    t70 = ((x289>(x290&x291))+x292);

    if (t70 != 708) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x293 = INT64_MIN;
	int64_t x294 = 172654470668LL;
	static int16_t x295 = INT16_MIN;
	int64_t t71 = 182646738533371957LL;

    t71 = ((x293>(x294&x295))+x296);

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x298 = -3;
	static int16_t x300 = -12;
	int32_t t72 = -95228882;

    t72 = ((x297>(x298&x299))+x300);

    if (t72 != -12) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x301 = INT16_MIN;
	int16_t x302 = -52;
	uint8_t x303 = UINT8_MAX;
	int32_t x304 = 60;
	int32_t t73 = -1888;

    t73 = ((x301>(x302&x303))+x304);

    if (t73 != 60) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x305 = -64356189032660LL;
	static uint64_t x306 = 2108995533932LLU;
	int32_t t74 = -1;

    t74 = ((x305>(x306&x307))+x308);

    if (t74 != 5) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x309 = INT8_MAX;
	int8_t x310 = INT8_MIN;
	volatile int32_t x311 = -1;
	int8_t x312 = INT8_MAX;
	int32_t t75 = -4;

    t75 = ((x309>(x310&x311))+x312);

    if (t75 != 128) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x313 = INT32_MIN;
	int16_t x314 = -1;
	int32_t x315 = -693032;
	int16_t x316 = -1;
	volatile int32_t t76 = 36787934;

    t76 = ((x313>(x314&x315))+x316);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x317 = INT64_MIN;
	static uint8_t x318 = UINT8_MAX;
	volatile int16_t x319 = -1;
	int32_t x320 = INT32_MAX;

    t77 = ((x317>(x318&x319))+x320);

    if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x321 = 65246;
	uint16_t x323 = 19U;
	int32_t t78 = 1028;

    t78 = ((x321>(x322&x323))+x324);

    if (t78 != -20) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x327 = 1U;
	int32_t x328 = 571;
	int32_t t79 = -6456974;

    t79 = ((x325>(x326&x327))+x328);

    if (t79 != 571) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x329 = -3448141LL;
	int16_t x330 = INT16_MIN;
	uint8_t x331 = 1U;
	volatile uint8_t x332 = 48U;
	int32_t t80 = -16036;

    t80 = ((x329>(x330&x331))+x332);

    if (t80 != 48) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x334 = INT64_MIN;
	static volatile int8_t x335 = 1;
	int64_t t81 = -1628362674611552LL;

    t81 = ((x333>(x334&x335))+x336);

    if (t81 != -49688421335364LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x337 = -65312LL;
	int16_t x339 = 425;
	volatile int64_t x340 = INT64_MAX;

    t82 = ((x337>(x338&x339))+x340);

    if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x341 = 291U;
	static int32_t x342 = INT32_MAX;
	static int8_t x343 = 6;
	int64_t x344 = INT64_MIN;

    t83 = ((x341>(x342&x343))+x344);

    if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x345 = 0;
	uint16_t x347 = UINT16_MAX;
	volatile int64_t t84 = INT64_MIN;

    t84 = ((x345>(x346&x347))+x348);

    if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x349 = 500678;
	uint32_t x350 = 1760358U;
	uint32_t x351 = 65620872U;
	static int8_t x352 = INT8_MIN;
	static int32_t t85 = 0;

    t85 = ((x349>(x350&x351))+x352);

    if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x353 = 125U;
	static int16_t x355 = INT16_MIN;
	volatile int16_t x356 = 75;

    t86 = ((x353>(x354&x355))+x356);

    if (t86 != 76) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x357 = 30U;
	int16_t x358 = -1;
	static int32_t x359 = INT32_MIN;
	int64_t x360 = 21571875LL;
	static int64_t t87 = 3907380651421LL;

    t87 = ((x357>(x358&x359))+x360);

    if (t87 != 21571876LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x361 = UINT32_MAX;
	volatile int64_t x362 = INT64_MIN;
	int8_t x363 = INT8_MIN;
	volatile uint64_t x364 = UINT64_MAX;
	volatile uint64_t t88 = 70736LLU;

    t88 = ((x361>(x362&x363))+x364);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x365 = INT16_MAX;
	int32_t x366 = -1;
	uint8_t x367 = 17U;
	static int32_t x368 = -1;
	volatile int32_t t89 = 382;

    t89 = ((x365>(x366&x367))+x368);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x369 = -1;
	static int64_t x370 = INT64_MIN;
	static int16_t x372 = INT16_MAX;
	int32_t t90 = -103;

    t90 = ((x369>(x370&x371))+x372);

    if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x373 = 28554;
	uint32_t x374 = UINT32_MAX;
	int8_t x376 = INT8_MAX;

    t91 = ((x373>(x374&x375))+x376);

    if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x377 = INT16_MIN;
	int32_t x378 = -251806;
	static int16_t x379 = -1999;

    t92 = ((x377>(x378&x379))+x380);

    if (t92 != 1125) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x381 = 694U;
	uint8_t x382 = 79U;
	uint64_t x384 = 332LLU;
	uint64_t t93 = 213587624LLU;

    t93 = ((x381>(x382&x383))+x384);

    if (t93 != 333LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x386 = UINT8_MAX;
	int8_t x387 = 3;
	volatile int32_t t94 = -1;

    t94 = ((x385>(x386&x387))+x388);

    if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x389 = INT32_MIN;
	volatile int64_t x390 = -17234LL;
	volatile uint16_t x391 = 120U;
	int32_t t95 = -2248;

    t95 = ((x389>(x390&x391))+x392);

    if (t95 != 40043371) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x393 = -283808574218099LL;
	static uint64_t x394 = 148798194995LLU;
	int8_t x396 = 0;
	static int32_t t96 = 1;

    t96 = ((x393>(x394&x395))+x396);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x397 = UINT64_MAX;
	volatile int16_t x398 = INT16_MAX;
	volatile int16_t x399 = 1;
	static int64_t x400 = 2944334877977698LL;
	int64_t t97 = 319347LL;

    t97 = ((x397>(x398&x399))+x400);

    if (t97 != 2944334877977699LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x401 = UINT16_MAX;
	uint8_t x402 = 5U;
	int16_t x404 = -1;
	volatile int32_t t98 = -15;

    t98 = ((x401>(x402&x403))+x404);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x405 = -1;
	volatile int8_t x408 = 1;

    t99 = ((x405>(x406&x407))+x408);

    if (t99 != 2) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x409 = 12476719;
	int8_t x410 = -1;
	static volatile uint64_t x411 = UINT64_MAX;
	static int16_t x412 = -208;

    t100 = ((x409>(x410&x411))+x412);

    if (t100 != -208) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x413 = -1;
	uint64_t x414 = 3271393861LLU;
	int64_t x415 = 9048LL;
	int32_t x416 = -48855;
	static volatile int32_t t101 = 735;

    t101 = ((x413>(x414&x415))+x416);

    if (t101 != -48854) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x417 = 345351786411217468LLU;
	static int64_t x419 = 19LL;
	int64_t x420 = INT64_MIN;
	volatile int64_t t102 = 6460230819679004LL;

    t102 = ((x417>(x418&x419))+x420);

    if (t102 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x421 = 12;
	int8_t x422 = -1;
	uint32_t x423 = UINT32_MAX;
	static volatile int32_t t103 = 1;

    t103 = ((x421>(x422&x423))+x424);

    if (t103 != 32767) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x425 = 0;
	int64_t x426 = INT64_MIN;
	int32_t x428 = 64578;
	volatile int32_t t104 = -2;

    t104 = ((x425>(x426&x427))+x428);

    if (t104 != 64578) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x429 = INT16_MIN;
	int32_t x431 = -1;
	static int64_t x432 = INT64_MIN;
	int64_t t105 = INT64_MIN;

    t105 = ((x429>(x430&x431))+x432);

    if (t105 != INT64_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x434 = 3571LLU;
	volatile int8_t x435 = INT8_MAX;
	static uint8_t x436 = UINT8_MAX;
	int32_t t106 = -1129979;

    t106 = ((x433>(x434&x435))+x436);

    if (t106 != 256) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x437 = 6300U;
	volatile int32_t x438 = 2618142;
	uint32_t x439 = 106512647U;
	volatile int64_t x440 = INT64_MIN;

    t107 = ((x437>(x438&x439))+x440);

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x441 = -1LL;
	int8_t x442 = INT8_MAX;
	int16_t x444 = -1;
	int32_t t108 = -11648;

    t108 = ((x441>(x442&x443))+x444);

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x445 = INT32_MIN;
	int8_t x446 = INT8_MIN;
	volatile uint64_t x447 = UINT64_MAX;

    t109 = ((x445>(x446&x447))+x448);

    if (t109 != 255) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x449 = UINT8_MAX;
	volatile uint64_t x450 = UINT64_MAX;
	int64_t x452 = INT64_MIN;
	static int64_t t110 = 249124LL;

    t110 = ((x449>(x450&x451))+x452);

    if (t110 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x453 = INT32_MIN;
	volatile uint64_t x454 = 1807915304300358119LLU;
	int32_t x455 = 800;
	static int64_t t111 = -10041LL;

    t111 = ((x453>(x454&x455))+x456);

    if (t111 != -1294524111595512LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x457 = INT64_MIN;
	int64_t x458 = 2647LL;
	uint8_t x459 = 17U;
	int16_t x460 = INT16_MAX;
	static volatile int32_t t112 = -25137;

    t112 = ((x457>(x458&x459))+x460);

    if (t112 != 32767) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x461 = 193411;
	int16_t x462 = INT16_MIN;
	static volatile int8_t x463 = INT8_MAX;
	volatile uint8_t x464 = 4U;
	static volatile int32_t t113 = -3180;

    t113 = ((x461>(x462&x463))+x464);

    if (t113 != 5) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x465 = INT32_MIN;
	uint32_t x466 = UINT32_MAX;
	int32_t x468 = -208834;
	volatile int32_t t114 = 24845215;

    t114 = ((x465>(x466&x467))+x468);

    if (t114 != -208834) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x469 = INT64_MIN;
	static int8_t x470 = INT8_MIN;
	uint8_t x471 = 98U;
	int8_t x472 = 2;
	int32_t t115 = -15563002;

    t115 = ((x469>(x470&x471))+x472);

    if (t115 != 2) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x473 = 53U;
	static int16_t x475 = INT16_MAX;
	int16_t x476 = 28;
	static volatile int32_t t116 = 487936238;

    t116 = ((x473>(x474&x475))+x476);

    if (t116 != 28) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint16_t x477 = UINT16_MAX;
	int16_t x479 = INT16_MAX;
	uint64_t x480 = UINT64_MAX;

    t117 = ((x477>(x478&x479))+x480);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x481 = 2230453LLU;
	static int64_t x482 = INT64_MAX;
	uint8_t x483 = 51U;
	static uint8_t x484 = UINT8_MAX;
	volatile int32_t t118 = -4;

    t118 = ((x481>(x482&x483))+x484);

    if (t118 != 256) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x485 = 29;
	int32_t x487 = -1;
	static int16_t x488 = -59;

    t119 = ((x485>(x486&x487))+x488);

    if (t119 != -59) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x490 = INT8_MIN;
	uint64_t x491 = 4418060961491386LLU;
	int8_t x492 = -1;
	volatile int32_t t120 = -5332410;

    t120 = ((x489>(x490&x491))+x492);

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x493 = UINT8_MAX;
	static volatile int32_t x494 = INT32_MAX;
	uint16_t x495 = UINT16_MAX;
	int64_t x496 = INT64_MAX;
	volatile int64_t t121 = INT64_MAX;

    t121 = ((x493>(x494&x495))+x496);

    if (t121 != INT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x498 = 4603944U;
	uint16_t x499 = UINT16_MAX;
	int8_t x500 = 3;
	static int32_t t122 = -646831;

    t122 = ((x497>(x498&x499))+x500);

    if (t122 != 3) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x502 = INT8_MIN;
	int8_t x503 = INT8_MAX;
	static int8_t x504 = 1;
	int32_t t123 = 96609;

    t123 = ((x501>(x502&x503))+x504);

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x505 = INT32_MIN;
	static int64_t x506 = -1LL;
	int64_t x507 = 1294881131987544LL;
	uint16_t x508 = 3191U;
	volatile int32_t t124 = 1;

    t124 = ((x505>(x506&x507))+x508);

    if (t124 != 3191) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x509 = UINT32_MAX;
	int8_t x510 = -2;
	int8_t x511 = -1;
	uint64_t x512 = 108938743410850LLU;
	uint64_t t125 = 128786706979188LLU;

    t125 = ((x509>(x510&x511))+x512);

    if (t125 != 108938743410851LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x514 = 38U;
	volatile uint8_t x515 = UINT8_MAX;
	volatile uint32_t x516 = 386674U;

    t126 = ((x513>(x514&x515))+x516);

    if (t126 != 386675U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x517 = UINT32_MAX;
	int32_t x518 = INT32_MAX;
	static int32_t t127 = -21;

    t127 = ((x517>(x518&x519))+x520);

    if (t127 != -2147483647) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x521 = -410983;
	int32_t x522 = 1303;
	static int16_t x523 = INT16_MIN;
	uint8_t x524 = 0U;
	int32_t t128 = -21;

    t128 = ((x521>(x522&x523))+x524);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x526 = 13602741242LLU;
	int16_t x527 = INT16_MIN;
	volatile uint64_t x528 = 166715080LLU;

    t129 = ((x525>(x526&x527))+x528);

    if (t129 != 166715081LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x529 = 163845;
	uint8_t x530 = UINT8_MAX;
	uint8_t x531 = UINT8_MAX;
	static volatile int32_t t130 = -6699;

    t130 = ((x529>(x530&x531))+x532);

    if (t130 != -2147483647) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x533 = -1;
	int32_t x534 = INT32_MAX;
	int16_t x535 = INT16_MIN;
	int32_t t131 = -377;

    t131 = ((x533>(x534&x535))+x536);

    if (t131 != 127) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x537 = -3380;
	uint16_t x538 = 665U;
	volatile uint8_t x539 = 1U;
	int16_t x540 = -14;
	int32_t t132 = 6427;

    t132 = ((x537>(x538&x539))+x540);

    if (t132 != -14) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x541 = -152;
	uint64_t x543 = 29483309768LLU;
	static int32_t x544 = 1;
	volatile int32_t t133 = 0;

    t133 = ((x541>(x542&x543))+x544);

    if (t133 != 2) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x545 = UINT32_MAX;
	int32_t x547 = INT32_MIN;
	volatile int16_t x548 = INT16_MIN;
	volatile int32_t t134 = -25600287;

    t134 = ((x545>(x546&x547))+x548);

    if (t134 != -32767) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint16_t x549 = 5489U;
	uint8_t x550 = 6U;
	int32_t x551 = INT32_MIN;
	int32_t x552 = INT32_MIN;

    t135 = ((x549>(x550&x551))+x552);

    if (t135 != -2147483647) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x553 = 1LLU;
	int64_t x554 = INT64_MIN;
	uint64_t x556 = 3919866081268873LLU;
	volatile uint64_t t136 = 907LLU;

    t136 = ((x553>(x554&x555))+x556);

    if (t136 != 3919866081268873LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x558 = INT16_MIN;
	int32_t x559 = 124;
	static int64_t x560 = INT64_MAX;
	volatile int64_t t137 = INT64_MAX;

    t137 = ((x557>(x558&x559))+x560);

    if (t137 != INT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x561 = INT32_MIN;
	int16_t x562 = INT16_MAX;
	int8_t x564 = INT8_MIN;
	int32_t t138 = 104;

    t138 = ((x561>(x562&x563))+x564);

    if (t138 != -128) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x565 = 6U;
	int32_t x567 = INT32_MAX;
	int64_t x568 = INT64_MIN;
	volatile int64_t t139 = INT64_MIN;

    t139 = ((x565>(x566&x567))+x568);

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x569 = 155U;
	static int8_t x570 = INT8_MIN;
	int32_t x571 = INT32_MIN;
	volatile uint64_t x572 = 267478748LLU;
	volatile uint64_t t140 = 9052LLU;

    t140 = ((x569>(x570&x571))+x572);

    if (t140 != 267478749LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x573 = UINT8_MAX;
	static int64_t x574 = INT64_MIN;
	volatile int8_t x576 = INT8_MAX;

    t141 = ((x573>(x574&x575))+x576);

    if (t141 != 128) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x577 = INT32_MAX;
	static int64_t x578 = -799504LL;
	int16_t x579 = -1;
	uint16_t x580 = 1U;
	int32_t t142 = 1045380;

    t142 = ((x577>(x578&x579))+x580);

    if (t142 != 2) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x581 = INT32_MIN;
	int8_t x582 = INT8_MIN;
	int64_t x583 = 798933LL;
	int8_t x584 = -1;

    t143 = ((x581>(x582&x583))+x584);

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x585 = 1U;
	int16_t x586 = -33;
	volatile int8_t x587 = -1;
	volatile int16_t x588 = INT16_MIN;
	volatile int32_t t144 = -106;

    t144 = ((x585>(x586&x587))+x588);

    if (t144 != -32767) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x589 = -285154445270317110LL;
	uint64_t x590 = 489947690LLU;
	static int64_t x591 = INT64_MAX;
	int64_t x592 = INT64_MIN;
	int64_t t145 = 909959609516922934LL;

    t145 = ((x589>(x590&x591))+x592);

    if (t145 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x594 = INT16_MIN;
	int16_t x595 = -70;
	uint32_t x596 = 484U;
	static volatile uint32_t t146 = 873492U;

    t146 = ((x593>(x594&x595))+x596);

    if (t146 != 485U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x601 = 3098;
	int8_t x602 = -1;
	volatile int32_t x603 = INT32_MIN;
	static int8_t x604 = 0;
	volatile int32_t t147 = -1035118865;

    t147 = ((x601>(x602&x603))+x604);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x605 = UINT32_MAX;
	static volatile int32_t x606 = 3702;
	uint64_t x607 = 6LLU;
	uint64_t x608 = 1467717272567LLU;
	uint64_t t148 = 145173564642LLU;

    t148 = ((x605>(x606&x607))+x608);

    if (t148 != 1467717272568LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x609 = INT64_MAX;
	uint64_t x610 = UINT64_MAX;
	static int16_t x611 = 171;
	static int16_t x612 = -1;
	volatile int32_t t149 = -13571;

    t149 = ((x609>(x610&x611))+x612);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x616 = UINT64_MAX;
	uint64_t t150 = 8277060242749LLU;

    t150 = ((x613>(x614&x615))+x616);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x617 = UINT32_MAX;
	int8_t x618 = -1;
	static int8_t x619 = INT8_MAX;
	int64_t x620 = 2471LL;
	static volatile int64_t t151 = 358727163095LL;

    t151 = ((x617>(x618&x619))+x620);

    if (t151 != 2472LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x621 = -38;
	int64_t x623 = INT64_MIN;
	int16_t x624 = -96;
	static int32_t t152 = 29;

    t152 = ((x621>(x622&x623))+x624);

    if (t152 != -96) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x625 = INT32_MAX;
	static int16_t x626 = -3826;
	int64_t x627 = INT64_MIN;
	volatile int32_t t153 = 25383;

    t153 = ((x625>(x626&x627))+x628);

    if (t153 != -32767) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x629 = INT16_MAX;
	uint64_t x630 = 264612592738525275LLU;
	uint16_t x631 = UINT16_MAX;
	uint8_t x632 = 16U;

    t154 = ((x629>(x630&x631))+x632);

    if (t154 != 17) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x633 = INT32_MIN;
	uint16_t x634 = 563U;
	static uint8_t x635 = 60U;
	volatile int32_t t155 = -66057;

    t155 = ((x633>(x634&x635))+x636);

    if (t155 != 127) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x637 = INT16_MIN;
	static volatile int32_t x638 = INT32_MIN;
	static uint16_t x639 = 1611U;
	int32_t x640 = INT32_MAX;
	int32_t t156 = INT32_MAX;

    t156 = ((x637>(x638&x639))+x640);

    if (t156 != INT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x641 = UINT64_MAX;
	int8_t x642 = -1;
	volatile int8_t x643 = -1;
	int8_t x644 = INT8_MAX;
	volatile int32_t t157 = -13164056;

    t157 = ((x641>(x642&x643))+x644);

    if (t157 != 127) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x645 = -1;
	uint16_t x647 = 3U;
	volatile uint8_t x648 = 1U;

    t158 = ((x645>(x646&x647))+x648);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x649 = -3;
	int32_t x650 = INT32_MAX;
	volatile int32_t x651 = 172033;
	uint64_t x652 = UINT64_MAX;
	volatile uint64_t t159 = UINT64_MAX;

    t159 = ((x649>(x650&x651))+x652);

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x653 = -1LL;
	uint8_t x654 = UINT8_MAX;
	int64_t x655 = INT64_MAX;
	int64_t x656 = INT64_MIN;

    t160 = ((x653>(x654&x655))+x656);

    if (t160 != INT64_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x659 = INT16_MIN;
	volatile int32_t t161 = -210540;

    t161 = ((x657>(x658&x659))+x660);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x661 = 0U;
	volatile int8_t x662 = INT8_MIN;
	volatile int64_t x663 = 2711926600LL;
	uint32_t t162 = 1810740U;

    t162 = ((x661>(x662&x663))+x664);

    if (t162 != 24057274U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x665 = 1LL;
	int32_t t163 = 62796;

    t163 = ((x665>(x666&x667))+x668);

    if (t163 != -128) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x669 = -56443;
	int8_t x670 = -1;
	int32_t x671 = 63267;
	int32_t t164 = 39;

    t164 = ((x669>(x670&x671))+x672);

    if (t164 != 65535) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x673 = INT32_MIN;
	uint32_t x675 = UINT32_MAX;
	volatile int32_t t165 = 97;

    t165 = ((x673>(x674&x675))+x676);

    if (t165 != 32768) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x677 = -533407LL;
	int16_t x678 = -1;
	int64_t x679 = -158389810248LL;

    t166 = ((x677>(x678&x679))+x680);

    if (t166 != 974) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x681 = -1;
	static int32_t x682 = INT32_MIN;
	int8_t x683 = -26;
	uint32_t x684 = 76637U;
	volatile uint32_t t167 = 20U;

    t167 = ((x681>(x682&x683))+x684);

    if (t167 != 76638U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x686 = -21;
	static uint32_t t168 = 258237U;

    t168 = ((x685>(x686&x687))+x688);

    if (t168 != 84U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x689 = INT64_MIN;
	static int64_t x691 = INT64_MIN;
	int8_t x692 = 3;
	int32_t t169 = -837622140;

    t169 = ((x689>(x690&x691))+x692);

    if (t169 != 3) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x693 = -8;
	uint64_t x694 = UINT64_MAX;
	int8_t x695 = 1;
	int64_t x696 = -138585779762324LL;
	static volatile int64_t t170 = 15701533898805LL;

    t170 = ((x693>(x694&x695))+x696);

    if (t170 != -138585779762323LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x701 = 3U;
	static volatile uint8_t x702 = UINT8_MAX;
	int8_t x704 = 60;
	volatile int32_t t171 = 7828;

    t171 = ((x701>(x702&x703))+x704);

    if (t171 != 60) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x705 = -1LL;
	uint32_t x706 = UINT32_MAX;
	int8_t x707 = -5;
	int16_t x708 = 7024;
	static volatile int32_t t172 = -8656;

    t172 = ((x705>(x706&x707))+x708);

    if (t172 != 7024) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x709 = INT64_MIN;
	uint16_t x710 = 2287U;
	uint8_t x712 = 0U;

    t173 = ((x709>(x710&x711))+x712);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x714 = 24265U;
	int16_t x715 = INT16_MIN;
	volatile int16_t x716 = -1;
	volatile int32_t t174 = 22;

    t174 = ((x713>(x714&x715))+x716);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x717 = -1LL;
	int16_t x718 = -1;
	int16_t x719 = 0;
	int32_t t175 = INT32_MIN;

    t175 = ((x717>(x718&x719))+x720);

    if (t175 != INT32_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x722 = UINT32_MAX;
	int8_t x723 = -9;
	int16_t x724 = 340;
	volatile int32_t t176 = 5727753;

    t176 = ((x721>(x722&x723))+x724);

    if (t176 != 341) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x726 = -1685;
	static uint16_t x727 = 557U;
	static volatile uint8_t x728 = 100U;
	int32_t t177 = -6610;

    t177 = ((x725>(x726&x727))+x728);

    if (t177 != 100) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x729 = UINT64_MAX;
	int32_t x730 = -1;
	volatile uint8_t x731 = 0U;
	volatile int64_t t178 = -2060LL;

    t178 = ((x729>(x730&x731))+x732);

    if (t178 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x735 = 1U;
	int16_t x736 = 209;
	static int32_t t179 = -3166;

    t179 = ((x733>(x734&x735))+x736);

    if (t179 != 210) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x737 = 24U;
	uint64_t x738 = UINT64_MAX;
	uint64_t x739 = 16006038LLU;
	int32_t x740 = INT32_MIN;

    t180 = ((x737>(x738&x739))+x740);

    if (t180 != INT32_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x741 = -1;
	static int8_t x742 = -12;
	int32_t x743 = -4;
	static uint16_t x744 = UINT16_MAX;
	volatile int32_t t181 = -45685;

    t181 = ((x741>(x742&x743))+x744);

    if (t181 != 65536) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x746 = 211953LLU;
	static uint16_t x747 = 1U;
	volatile int64_t t182 = -42LL;

    t182 = ((x745>(x746&x747))+x748);

    if (t182 != 17067315753502438LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x749 = INT32_MIN;
	uint8_t x750 = 6U;
	int64_t x752 = -2323490LL;
	volatile int64_t t183 = -854LL;

    t183 = ((x749>(x750&x751))+x752);

    if (t183 != -2323490LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x753 = 352040179;
	int32_t x754 = -14762;
	static int16_t x755 = INT16_MIN;
	int8_t x756 = -1;
	static int32_t t184 = -6;

    t184 = ((x753>(x754&x755))+x756);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x757 = 14493U;
	volatile int8_t x760 = -1;
	int32_t t185 = 91350051;

    t185 = ((x757>(x758&x759))+x760);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x761 = INT16_MIN;
	static int16_t x762 = INT16_MIN;
	static int8_t x763 = -1;
	volatile uint64_t x764 = 966461609319963098LLU;
	volatile uint64_t t186 = 633795527235LLU;

    t186 = ((x761>(x762&x763))+x764);

    if (t186 != 966461609319963098LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x765 = -1;
	int64_t x766 = INT64_MIN;
	int32_t x767 = INT32_MAX;
	int8_t x768 = INT8_MIN;
	int32_t t187 = -44;

    t187 = ((x765>(x766&x767))+x768);

    if (t187 != -128) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x769 = -1;
	uint64_t x770 = 10002831672LLU;
	int64_t x771 = INT64_MAX;
	volatile uint64_t t188 = 20372847873753793LLU;

    t188 = ((x769>(x770&x771))+x772);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x773 = INT32_MIN;
	int8_t x774 = -7;
	static volatile int64_t x775 = INT64_MIN;
	volatile int32_t t189 = -115044271;

    t189 = ((x773>(x774&x775))+x776);

    if (t189 != 6) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x777 = INT8_MIN;
	int32_t x778 = -352031143;
	uint64_t x779 = UINT64_MAX;
	volatile uint32_t x780 = 1631335565U;
	static volatile uint32_t t190 = 7U;

    t190 = ((x777>(x778&x779))+x780);

    if (t190 != 1631335566U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x781 = UINT32_MAX;
	int16_t x782 = INT16_MIN;
	uint8_t x783 = 7U;
	int32_t t191 = 36386012;

    t191 = ((x781>(x782&x783))+x784);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x785 = 24U;
	int16_t x786 = -1;
	int16_t x788 = -1;
	int32_t t192 = -3;

    t192 = ((x785>(x786&x787))+x788);

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x790 = UINT8_MAX;
	static int64_t x792 = 8383417LL;
	volatile int64_t t193 = -280733259579736663LL;

    t193 = ((x789>(x790&x791))+x792);

    if (t193 != 8383417LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x793 = 0;
	int64_t x794 = INT64_MAX;
	uint64_t x795 = 933996243164688832LLU;
	uint32_t t194 = 23600489U;

    t194 = ((x793>(x794&x795))+x796);

    if (t194 != 44722028U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x797 = 120743U;
	uint16_t x799 = 812U;
	int64_t x800 = INT64_MIN;
	static volatile int64_t t195 = 11513743LL;

    t195 = ((x797>(x798&x799))+x800);

    if (t195 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x802 = UINT64_MAX;
	volatile int32_t x804 = 114606;
	volatile int32_t t196 = -26777;

    t196 = ((x801>(x802&x803))+x804);

    if (t196 != 114606) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x805 = 1U;
	uint64_t x807 = 5758907866018LLU;
	volatile int64_t x808 = -11299577LL;
	volatile int64_t t197 = -1236LL;

    t197 = ((x805>(x806&x807))+x808);

    if (t197 != -11299577LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x809 = UINT8_MAX;
	uint32_t x811 = 1218U;
	uint32_t x812 = UINT32_MAX;
	volatile uint32_t t198 = 2U;

    t198 = ((x809>(x810&x811))+x812);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x813 = INT16_MIN;
	static volatile uint8_t x814 = 21U;
	int8_t x815 = 52;
	static uint16_t x816 = UINT16_MAX;
	volatile int32_t t199 = 2274;

    t199 = ((x813>(x814&x815))+x816);

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

