
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

int16_t x2 = INT16_MIN;
int64_t x3 = INT64_MIN;
uint16_t x6 = UINT16_MAX;
int32_t t1 = -12549999;
uint8_t x9 = 3U;
uint32_t x16 = 288172U;
static uint64_t t3 = 23LLU;
int8_t x22 = INT8_MIN;
static int32_t t6 = -5056554;
int64_t x29 = 12651LL;
static uint8_t x30 = 0U;
uint32_t x32 = 1386950U;
int64_t t7 = 2LL;
volatile int16_t x33 = -1;
int8_t x35 = INT8_MIN;
uint16_t x40 = UINT16_MAX;
volatile uint32_t x43 = 53U;
uint64_t t10 = 685287319380LLU;
int8_t x45 = INT8_MAX;
uint8_t x47 = 82U;
int8_t x52 = INT8_MIN;
int8_t x53 = -14;
volatile int8_t x54 = INT8_MAX;
volatile int64_t t14 = 7086LL;
int8_t x69 = -1;
uint64_t x75 = 234461LLU;
int8_t x76 = -6;
uint16_t x89 = UINT16_MAX;
int64_t x97 = 23234489310LL;
int8_t x107 = 1;
static int64_t x120 = -1LL;
int32_t x122 = -33;
static uint8_t x123 = 54U;
uint8_t x129 = UINT8_MAX;
volatile int64_t t31 = -6506074LL;
uint16_t x138 = UINT16_MAX;
int64_t x140 = INT64_MIN;
static volatile int32_t t34 = 3712640;
volatile int8_t x152 = 1;
int64_t x155 = INT64_MAX;
int16_t x161 = INT16_MIN;
int32_t x175 = INT32_MIN;
uint32_t x181 = 278669U;
volatile int32_t x194 = INT32_MIN;
volatile int64_t x200 = 972LL;
int32_t x201 = INT32_MIN;
int32_t x202 = -3533412;
volatile int64_t t46 = -3091681945LL;
static volatile int64_t t47 = -411LL;
int8_t x216 = 0;
int64_t t48 = -13LL;
int32_t x217 = -8;
int16_t x218 = 23;
uint16_t x219 = UINT16_MAX;
int32_t x226 = INT32_MIN;
volatile int32_t t51 = INT32_MAX;
volatile int64_t x235 = 53553797256756LL;
uint64_t x236 = 112804339254LLU;
int32_t x241 = INT32_MIN;
uint64_t x252 = 83785LLU;
volatile int32_t x253 = 12418;
static int8_t x256 = INT8_MIN;
volatile int32_t t57 = 7285351;
uint64_t t62 = 14LLU;
uint16_t x284 = UINT16_MAX;
int8_t x285 = -1;
int64_t t67 = -439244967LL;
int8_t x297 = -26;
int8_t x298 = 2;
uint8_t x299 = 4U;
int32_t t68 = -10624137;
volatile int64_t t70 = 271522862335128LL;
int8_t x309 = INT8_MAX;
int8_t x310 = -1;
int64_t x311 = INT64_MAX;
volatile uint16_t x312 = UINT16_MAX;
int64_t t71 = 81132LL;
volatile int16_t x313 = -2509;
volatile int16_t x323 = -3971;
uint64_t x325 = 1004750488LLU;
volatile int16_t x331 = INT16_MAX;
volatile int64_t t76 = -32282LL;
int32_t x336 = -1422;
int32_t t77 = -383;
static int32_t x351 = INT32_MAX;
uint32_t x356 = UINT32_MAX;
int32_t x357 = -1030420;
int32_t x374 = INT32_MIN;
int16_t x378 = -7;
int16_t x380 = 117;
volatile int32_t x387 = INT32_MIN;
int16_t x388 = INT16_MAX;
static int32_t x403 = INT32_MIN;
uint32_t x405 = 161U;
uint32_t x406 = UINT32_MAX;
int8_t x410 = -45;
int64_t x416 = 4133166374LL;
static uint8_t x419 = 0U;
int8_t x421 = -1;
int32_t x424 = INT32_MIN;
volatile uint64_t t94 = 81858524LLU;
uint32_t x427 = 0U;
int16_t x444 = INT16_MIN;
int64_t x450 = 1070802182165553448LL;
static int32_t x454 = INT32_MIN;
volatile int64_t t101 = -39602272454LL;
int8_t x460 = INT8_MIN;
uint64_t x468 = UINT64_MAX;
volatile uint32_t x475 = UINT32_MAX;
int32_t x476 = 111;
int16_t x477 = INT16_MAX;
volatile int32_t t107 = 63219967;
static volatile int32_t x500 = 418462180;
int64_t t108 = 19194995LL;
int8_t x501 = -1;
static int32_t x511 = -100911;
int8_t x514 = -1;
int64_t x521 = INT64_MIN;
int16_t x522 = INT16_MIN;
int64_t x537 = -4663LL;
static uint32_t x543 = 34032U;
uint32_t t115 = 197841U;
volatile int8_t x556 = INT8_MAX;
uint64_t x559 = 3509534094119246118LLU;
uint8_t x565 = UINT8_MAX;
static int8_t x570 = 0;
volatile int64_t t122 = 1046LL;
int16_t x585 = -1;
int16_t x596 = 0;
int64_t t127 = 55545916678132089LL;
int8_t x601 = -1;
uint32_t x604 = 1U;
volatile int64_t x618 = 51338428435108067LL;
int64_t t130 = 2604320818871261LL;
static int8_t x622 = -1;
volatile int8_t x624 = -2;
volatile uint16_t x629 = 143U;
static int8_t x630 = 2;
static int32_t x634 = 87;
volatile uint64_t t135 = 488LLU;
static uint16_t x646 = 130U;
volatile int32_t x651 = -28459;
int16_t x652 = 188;
int16_t x654 = -467;
volatile int32_t x661 = -1;
int64_t x664 = 538189187643LL;
int64_t t140 = 1651611LL;
int16_t x667 = INT16_MIN;
static uint64_t t141 = 5257244037445785LLU;
static int8_t x672 = INT8_MIN;
volatile int8_t x675 = INT8_MIN;
volatile uint16_t x687 = UINT16_MAX;
static volatile int64_t x704 = INT64_MIN;
int64_t x711 = -1LL;
int16_t x719 = INT16_MIN;
uint64_t t154 = 188506152LLU;
static int64_t x726 = 5632LL;
int64_t x740 = INT64_MIN;
int16_t x742 = 1;
int32_t x744 = 259;
volatile uint16_t x749 = UINT16_MAX;
volatile int16_t x753 = -2;
uint64_t x754 = 441978994521843366LLU;
volatile int16_t x758 = INT16_MAX;
uint16_t x763 = UINT16_MAX;
uint16_t x767 = UINT16_MAX;
int8_t x768 = -1;
uint8_t x771 = UINT8_MAX;
static uint8_t x775 = 47U;
volatile int16_t x779 = -1799;
uint64_t x780 = 1396804587763LLU;
volatile uint32_t t167 = 7U;
int16_t x785 = 0;
static int8_t x793 = INT8_MIN;
int8_t x795 = -1;
int16_t x796 = INT16_MIN;
int32_t t171 = -1685;
int16_t x801 = INT16_MAX;
static int64_t x809 = -2502644960LL;
int8_t x812 = INT8_MIN;
int64_t x814 = 0LL;
volatile int16_t x821 = -252;
volatile int32_t x822 = -43;
int32_t x831 = 0;
uint16_t x832 = 19589U;
int16_t x835 = -17;
int64_t x837 = INT64_MIN;
int64_t t180 = 978986478352221025LL;
static uint8_t x843 = 110U;
uint64_t x846 = 79372LLU;
uint16_t x848 = 1479U;
uint64_t t182 = 15025LLU;
uint32_t x851 = 1324462U;
uint32_t t183 = 7737475U;
volatile uint64_t t184 = 1788676727628705LLU;
int8_t x862 = -1;
uint64_t t185 = 4867LLU;
int64_t t187 = -1LL;
static uint16_t x881 = UINT16_MAX;
int8_t x884 = -1;
int16_t x885 = INT16_MIN;
uint64_t x890 = 1LLU;
int32_t x893 = INT32_MAX;
uint16_t x896 = 53U;
volatile uint16_t x902 = UINT16_MAX;
volatile uint16_t x904 = 1U;
int64_t t197 = 40325115682577LL;
static uint8_t x921 = 1U;
static uint32_t x922 = 2U;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	static int16_t x4 = INT16_MIN;
	volatile int64_t t0 = 3341499087343689228LL;

    t0 = (((x1-x2)&x3)&x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x5 = -1;
	static int16_t x7 = -1;
	uint16_t x8 = 5U;

    t1 = (((x5-x6)&x7)&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = 3LL;
	static int64_t x11 = -3965LL;
	int8_t x12 = INT8_MAX;
	static int64_t t2 = -5LL;

    t2 = (((x9-x10)&x11)&x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 120121564953LLU;
	int64_t x14 = INT64_MAX;
	volatile uint32_t x15 = 182594U;

    t3 = (((x13-x14)&x15)&x16);

    if (t3 != 256LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	volatile uint16_t x18 = 1U;
	int32_t x19 = INT32_MIN;
	int64_t x20 = -1LL;
	volatile int64_t t4 = 124434165458045LL;

    t4 = (((x17-x18)&x19)&x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	int32_t x23 = -55;
	static int16_t x24 = INT16_MIN;
	static int32_t t5 = -1658;

    t5 = (((x21-x22)&x23)&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -6;
	static int8_t x26 = -1;
	int16_t x27 = INT16_MAX;
	int32_t x28 = -1;

    t6 = (((x25-x26)&x27)&x28);

    if (t6 != 32763) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x31 = INT8_MAX;

    t7 = (((x29-x30)&x31)&x32);

    if (t7 != 66LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x34 = 2U;
	uint8_t x36 = 49U;
	int32_t t8 = -112177835;

    t8 = (((x33-x34)&x35)&x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	int8_t x38 = 12;
	static int32_t x39 = INT32_MIN;
	volatile int32_t t9 = 153;

    t9 = (((x37-x38)&x39)&x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x41 = UINT8_MAX;
	static uint64_t x42 = 1817932LLU;
	int8_t x44 = INT8_MIN;

    t10 = (((x41-x42)&x43)&x44);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x46 = 996LLU;
	uint64_t x48 = 101799357914305LLU;
	uint64_t t11 = 4101432933667LLU;

    t11 = (((x45-x46)&x47)&x48);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = INT32_MIN;
	static uint32_t x50 = UINT32_MAX;
	static uint8_t x51 = 62U;
	volatile uint32_t t12 = 166U;

    t12 = (((x49-x50)&x51)&x52);

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x55 = UINT8_MAX;
	int64_t x56 = INT64_MAX;
	static volatile int64_t t13 = -17LL;

    t13 = (((x53-x54)&x55)&x56);

    if (t13 != 115LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	int8_t x58 = -3;
	int64_t x59 = -1LL;
	volatile int8_t x60 = INT8_MAX;

    t14 = (((x57-x58)&x59)&x60);

    if (t14 != 2LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	static int16_t x62 = INT16_MIN;
	int16_t x63 = INT16_MIN;
	static int32_t x64 = INT32_MIN;
	volatile int64_t t15 = INT64_MIN;

    t15 = (((x61-x62)&x63)&x64);

    if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = -1;
	int32_t x66 = 265553783;
	int64_t x67 = INT64_MAX;
	uint32_t x68 = UINT32_MAX;
	int64_t t16 = -2383004873315960660LL;

    t16 = (((x65-x66)&x67)&x68);

    if (t16 != 4029413512LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x70 = 0U;
	uint32_t x71 = UINT32_MAX;
	volatile int64_t x72 = INT64_MIN;
	volatile int64_t t17 = -1025494290315LL;

    t17 = (((x69-x70)&x71)&x72);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint64_t x73 = 85386437059166LLU;
	int64_t x74 = -1LL;
	uint64_t t18 = 27009010LLU;

    t18 = (((x73-x74)&x75)&x76);

    if (t18 != 229976LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	volatile int32_t x78 = INT32_MAX;
	int32_t x79 = INT32_MIN;
	int32_t x80 = -1;
	static int64_t t19 = -4557LL;

    t19 = (((x77-x78)&x79)&x80);

    if (t19 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x85 = UINT64_MAX;
	int32_t x86 = INT32_MAX;
	static uint64_t x87 = 7865423LLU;
	int64_t x88 = INT64_MAX;
	uint64_t t20 = 7104210153LLU;

    t20 = (((x85-x86)&x87)&x88);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint64_t x90 = 86677860300LLU;
	static int64_t x91 = INT64_MIN;
	uint64_t x92 = UINT64_MAX;
	uint64_t t21 = 16434377609LLU;

    t21 = (((x89-x90)&x91)&x92);

    if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = 31;
	static int64_t x94 = 1118LL;
	uint16_t x95 = 99U;
	volatile int32_t x96 = -760316462;
	int64_t t22 = -12862506LL;

    t22 = (((x93-x94)&x95)&x96);

    if (t22 != 64LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x98 = 486U;
	uint64_t x99 = 0LLU;
	uint32_t x100 = 16010U;
	uint64_t t23 = 80247LLU;

    t23 = (((x97-x98)&x99)&x100);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x101 = 18LL;
	volatile uint32_t x102 = 0U;
	int64_t x103 = -42971780869416LL;
	int64_t x104 = -50515LL;
	volatile int64_t t24 = 65029LL;

    t24 = (((x101-x102)&x103)&x104);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = 48;
	int32_t x106 = -1;
	int32_t x108 = -1;
	int32_t t25 = 500962722;

    t25 = (((x105-x106)&x107)&x108);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x109 = 1U;
	uint64_t x110 = 368812761LLU;
	int16_t x111 = INT16_MIN;
	int64_t x112 = INT64_MIN;
	static uint64_t t26 = 165342LLU;

    t26 = (((x109-x110)&x111)&x112);

    if (t26 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x113 = INT8_MIN;
	int8_t x114 = 0;
	int16_t x115 = INT16_MAX;
	int64_t x116 = -1882980461466874214LL;
	int64_t t27 = 14098359LL;

    t27 = (((x113-x114)&x115)&x116);

    if (t27 != 3712LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x117 = 6733;
	static int8_t x118 = INT8_MAX;
	int8_t x119 = -1;
	volatile int64_t t28 = -6575LL;

    t28 = (((x117-x118)&x119)&x120);

    if (t28 != 6606LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = INT16_MIN;
	uint64_t x124 = UINT64_MAX;
	static uint64_t t29 = 14201344780718902LLU;

    t29 = (((x121-x122)&x123)&x124);

    if (t29 != 32LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x125 = INT64_MIN;
	static int16_t x126 = INT16_MIN;
	int64_t x127 = INT64_MAX;
	int64_t x128 = INT64_MIN;
	int64_t t30 = 4LL;

    t30 = (((x125-x126)&x127)&x128);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x130 = -1;
	int64_t x131 = INT64_MIN;
	int32_t x132 = 256;

    t31 = (((x129-x130)&x131)&x132);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x133 = -1;
	int64_t x134 = INT64_MIN;
	int16_t x135 = -2;
	volatile uint8_t x136 = 3U;
	static volatile int64_t t32 = -61835LL;

    t32 = (((x133-x134)&x135)&x136);

    if (t32 != 2LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x137 = 33;
	int8_t x139 = INT8_MAX;
	volatile int64_t t33 = 805775LL;

    t33 = (((x137-x138)&x139)&x140);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = INT32_MAX;
	int8_t x142 = INT8_MAX;
	uint16_t x143 = UINT16_MAX;
	static int16_t x144 = INT16_MIN;

    t34 = (((x141-x142)&x143)&x144);

    if (t34 != 32768) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x145 = INT16_MIN;
	volatile int64_t x146 = -1LL;
	int64_t x147 = 36039537068LL;
	static int8_t x148 = 7;
	static volatile int64_t t35 = -11845370LL;

    t35 = (((x145-x146)&x147)&x148);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x149 = 15;
	int8_t x150 = -1;
	int64_t x151 = INT64_MIN;
	int64_t t36 = 3164LL;

    t36 = (((x149-x150)&x151)&x152);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = -1;
	static int16_t x154 = INT16_MIN;
	uint64_t x156 = 47586517LLU;
	uint64_t t37 = 4141288807LLU;

    t37 = (((x153-x154)&x155)&x156);

    if (t37 != 7381LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x157 = 133864043;
	int8_t x158 = -25;
	int64_t x159 = INT64_MIN;
	static int16_t x160 = -2354;
	int64_t t38 = -798049LL;

    t38 = (((x157-x158)&x159)&x160);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x162 = 461;
	uint8_t x163 = 68U;
	int32_t x164 = 38;
	volatile int32_t t39 = 11229;

    t39 = (((x161-x162)&x163)&x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x173 = -1;
	int8_t x174 = -1;
	volatile int8_t x176 = -1;
	int32_t t40 = 1;

    t40 = (((x173-x174)&x175)&x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x177 = -550;
	int64_t x178 = 629983842LL;
	int16_t x179 = 3652;
	int32_t x180 = INT32_MIN;
	volatile int64_t t41 = 1690382806588703LL;

    t41 = (((x177-x178)&x179)&x180);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x182 = 272;
	static int8_t x183 = INT8_MAX;
	static volatile int64_t x184 = 27122055LL;
	int64_t t42 = 2795965639740235958LL;

    t42 = (((x181-x182)&x183)&x184);

    if (t42 != 5LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x189 = INT8_MIN;
	static int16_t x190 = -1;
	static int32_t x191 = -1;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t43 = -158815454;

    t43 = (((x189-x190)&x191)&x192);

    if (t43 != 65409) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x193 = INT16_MIN;
	int32_t x195 = -219275;
	int64_t x196 = INT64_MIN;
	volatile int64_t t44 = -241178LL;

    t44 = (((x193-x194)&x195)&x196);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x197 = UINT16_MAX;
	int16_t x198 = INT16_MAX;
	uint16_t x199 = UINT16_MAX;
	static int64_t t45 = 427842840LL;

    t45 = (((x197-x198)&x199)&x200);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x203 = 1541;
	int64_t x204 = -1693858867LL;

    t46 = (((x201-x202)&x203)&x204);

    if (t46 != 516LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x209 = INT64_MIN;
	int16_t x210 = -1;
	static int64_t x211 = INT64_MIN;
	int16_t x212 = INT16_MAX;

    t47 = (((x209-x210)&x211)&x212);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x213 = 84842760686789843LL;
	int8_t x214 = -1;
	static int16_t x215 = INT16_MIN;

    t48 = (((x213-x214)&x215)&x216);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x220 = 25U;
	int32_t t49 = 113285151;

    t49 = (((x217-x218)&x219)&x220);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x221 = INT8_MAX;
	uint16_t x222 = 17400U;
	int32_t x223 = INT32_MIN;
	int32_t x224 = -8024;
	int32_t t50 = INT32_MIN;

    t50 = (((x221-x222)&x223)&x224);

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x225 = -1;
	volatile int16_t x227 = -1;
	int32_t x228 = -1;

    t51 = (((x225-x226)&x227)&x228);

    if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x229 = -1;
	uint32_t x230 = 56U;
	int8_t x231 = INT8_MAX;
	volatile int8_t x232 = -1;
	volatile uint32_t t52 = 51504U;

    t52 = (((x229-x230)&x231)&x232);

    if (t52 != 71U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x233 = -4;
	int16_t x234 = INT16_MAX;
	uint64_t t53 = 37LLU;

    t53 = (((x233-x234)&x235)&x236);

    if (t53 != 69844145716LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x242 = 97790U;
	uint16_t x243 = 1164U;
	static int8_t x244 = 2;
	static uint32_t t54 = 784381U;

    t54 = (((x241-x242)&x243)&x244);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x245 = 737868608757LLU;
	int64_t x246 = -1LL;
	volatile int64_t x247 = INT64_MIN;
	int16_t x248 = 1;
	volatile uint64_t t55 = 225713224244LLU;

    t55 = (((x245-x246)&x247)&x248);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x249 = 79U;
	static int8_t x250 = INT8_MAX;
	int16_t x251 = INT16_MIN;
	uint64_t t56 = 14LLU;

    t56 = (((x249-x250)&x251)&x252);

    if (t56 != 65536LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x254 = INT32_MAX;
	int16_t x255 = 54;

    t57 = (((x253-x254)&x255)&x256);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x257 = -1;
	static int64_t x258 = INT64_MIN;
	volatile uint64_t x259 = 14266LLU;
	uint64_t x260 = 784926480LLU;
	volatile uint64_t t58 = 5378LLU;

    t58 = (((x257-x258)&x259)&x260);

    if (t58 != 1808LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x261 = 10U;
	int64_t x262 = 844262592936LL;
	int32_t x263 = INT32_MIN;
	int8_t x264 = -1;
	volatile int64_t t59 = -1951725268585203358LL;

    t59 = (((x261-x262)&x263)&x264);

    if (t59 != -846108557312LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x265 = 39991LLU;
	int64_t x266 = -1LL;
	int8_t x267 = -15;
	static volatile int32_t x268 = -1;
	volatile uint64_t t60 = 3534LLU;

    t60 = (((x265-x266)&x267)&x268);

    if (t60 != 39984LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x269 = INT8_MAX;
	int8_t x270 = -1;
	static uint32_t x271 = 948668U;
	static volatile uint32_t x272 = 6036U;
	static uint32_t t61 = 0U;

    t61 = (((x269-x270)&x271)&x272);

    if (t61 != 128U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x273 = 342563312880220188LL;
	int16_t x274 = INT16_MAX;
	uint64_t x275 = 180529LLU;
	int32_t x276 = -1;

    t62 = (((x273-x274)&x275)&x276);

    if (t62 != 49169LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x277 = 13U;
	int32_t x278 = INT32_MAX;
	static volatile int8_t x279 = INT8_MIN;
	int64_t x280 = INT64_MAX;
	volatile int64_t t63 = 613136359908273LL;

    t63 = (((x277-x278)&x279)&x280);

    if (t63 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MAX;
	uint8_t x283 = 18U;
	int32_t t64 = 14;

    t64 = (((x281-x282)&x283)&x284);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x286 = INT8_MIN;
	volatile uint32_t x287 = 485120U;
	int32_t x288 = 542;
	volatile uint32_t t65 = 456056U;

    t65 = (((x285-x286)&x287)&x288);

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x289 = INT64_MAX;
	uint64_t x290 = 2120375573987LLU;
	uint32_t x291 = UINT32_MAX;
	int16_t x292 = INT16_MIN;
	uint64_t t66 = 13056447912542LLU;

    t66 = (((x289-x290)&x291)&x292);

    if (t66 != 1338245120LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x293 = 533;
	int64_t x294 = -1LL;
	int64_t x295 = INT64_MIN;
	volatile uint32_t x296 = 2575U;

    t67 = (((x293-x294)&x295)&x296);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x300 = INT8_MIN;

    t68 = (((x297-x298)&x299)&x300);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x301 = 52341807616LL;
	static uint16_t x302 = 31013U;
	int16_t x303 = INT16_MIN;
	int32_t x304 = 1;
	static volatile int64_t t69 = -202LL;

    t69 = (((x301-x302)&x303)&x304);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x305 = 35757U;
	int64_t x306 = -8603830406669971LL;
	uint16_t x307 = 394U;
	volatile uint16_t x308 = 2U;

    t70 = (((x305-x306)&x307)&x308);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    

    t71 = (((x309-x310)&x311)&x312);

    if (t71 != 128LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x314 = UINT32_MAX;
	uint32_t x315 = UINT32_MAX;
	static int16_t x316 = INT16_MAX;
	uint32_t t72 = 103000U;

    t72 = (((x313-x314)&x315)&x316);

    if (t72 != 30260U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x317 = UINT16_MAX;
	static int32_t x318 = -3521833;
	int32_t x319 = INT32_MAX;
	int32_t x320 = INT32_MIN;
	static volatile int32_t t73 = -190154203;

    t73 = (((x317-x318)&x319)&x320);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x321 = UINT8_MAX;
	int64_t x322 = INT64_MAX;
	volatile int16_t x324 = INT16_MIN;
	int64_t t74 = INT64_MIN;

    t74 = (((x321-x322)&x323)&x324);

    if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x326 = 1U;
	int32_t x327 = -3004039;
	int8_t x328 = -13;
	volatile uint64_t t75 = 217LLU;

    t75 = (((x325-x326)&x327)&x328);

    if (t75 != 1002569745LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x329 = -3;
	int8_t x330 = INT8_MIN;
	int64_t x332 = 124109956LL;

    t76 = (((x329-x330)&x331)&x332);

    if (t76 != 4LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x333 = INT16_MIN;
	int16_t x334 = INT16_MAX;
	volatile int8_t x335 = INT8_MAX;

    t77 = (((x333-x334)&x335)&x336);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x337 = -1;
	uint32_t x338 = 343U;
	int8_t x339 = INT8_MIN;
	volatile int16_t x340 = INT16_MIN;
	volatile uint32_t t78 = 27U;

    t78 = (((x337-x338)&x339)&x340);

    if (t78 != 4294934528U) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x341 = INT8_MIN;
	volatile int8_t x342 = 8;
	int64_t x343 = INT64_MIN;
	volatile uint64_t x344 = UINT64_MAX;
	uint64_t t79 = 13139353221561LLU;

    t79 = (((x341-x342)&x343)&x344);

    if (t79 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x349 = INT32_MAX;
	int32_t x350 = 23694;
	int8_t x352 = INT8_MAX;
	int32_t t80 = 37968913;

    t80 = (((x349-x350)&x351)&x352);

    if (t80 != 113) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x353 = 2885U;
	static uint32_t x354 = 2068317U;
	uint16_t x355 = UINT16_MAX;
	volatile uint32_t t81 = 41U;

    t81 = (((x353-x354)&x355)&x356);

    if (t81 != 31720U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x358 = 2309298U;
	static int32_t x359 = INT32_MIN;
	uint16_t x360 = 62U;
	uint32_t t82 = 14U;

    t82 = (((x357-x358)&x359)&x360);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x361 = -1;
	uint32_t x362 = UINT32_MAX;
	int8_t x363 = -54;
	uint16_t x364 = 0U;
	volatile uint32_t t83 = 3622U;

    t83 = (((x361-x362)&x363)&x364);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x369 = UINT64_MAX;
	volatile int8_t x370 = INT8_MIN;
	uint32_t x371 = 9U;
	volatile uint8_t x372 = UINT8_MAX;
	uint64_t t84 = 870LLU;

    t84 = (((x369-x370)&x371)&x372);

    if (t84 != 9LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x373 = -1LL;
	int16_t x375 = INT16_MIN;
	int16_t x376 = -1;
	static int64_t t85 = -1783466620493LL;

    t85 = (((x373-x374)&x375)&x376);

    if (t85 != 2147450880LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x377 = 17112LL;
	int16_t x379 = INT16_MIN;
	int64_t t86 = 27309420972303605LL;

    t86 = (((x377-x378)&x379)&x380);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x385 = 1102267492854474914LLU;
	int64_t x386 = INT64_MIN;
	uint64_t t87 = 1571623LLU;

    t87 = (((x385-x386)&x387)&x388);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x393 = -1LL;
	uint8_t x394 = 42U;
	int16_t x395 = -8;
	static volatile int32_t x396 = INT32_MIN;
	int64_t t88 = -3223054613234174LL;

    t88 = (((x393-x394)&x395)&x396);

    if (t88 != -2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x401 = INT64_MIN;
	uint64_t x402 = 179084346350588LLU;
	int64_t x404 = INT64_MAX;
	uint64_t t89 = 6991319105474769LLU;

    t89 = (((x401-x402)&x403)&x404);

    if (t89 != 9223192951750918144LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x407 = 8715;
	static volatile int16_t x408 = -1;
	volatile uint32_t t90 = 20400U;

    t90 = (((x405-x406)&x407)&x408);

    if (t90 != 2U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x409 = 1;
	int16_t x411 = INT16_MAX;
	int16_t x412 = -2068;
	static int32_t t91 = 24101952;

    t91 = (((x409-x410)&x411)&x412);

    if (t91 != 44) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x413 = INT16_MIN;
	static int8_t x414 = INT8_MIN;
	uint64_t x415 = 3888LLU;
	uint64_t t92 = 187741738LLU;

    t92 = (((x413-x414)&x415)&x416);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x417 = INT8_MIN;
	uint32_t x418 = 8U;
	volatile int8_t x420 = -1;
	uint32_t t93 = 79337U;

    t93 = (((x417-x418)&x419)&x420);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x422 = UINT8_MAX;
	uint64_t x423 = UINT64_MAX;

    t94 = (((x421-x422)&x423)&x424);

    if (t94 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x425 = 1;
	static volatile int16_t x426 = INT16_MAX;
	uint64_t x428 = 109886LLU;
	volatile uint64_t t95 = 243LLU;

    t95 = (((x425-x426)&x427)&x428);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x429 = 0;
	static int8_t x430 = -1;
	uint16_t x431 = 5U;
	static uint8_t x432 = 0U;
	int32_t t96 = 647773;

    t96 = (((x429-x430)&x431)&x432);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x433 = 9856;
	volatile int64_t x434 = INT64_MAX;
	volatile uint64_t x435 = UINT64_MAX;
	int64_t x436 = -476488125192606589LL;
	volatile uint64_t t97 = 6474602318LLU;

    t97 = (((x433-x434)&x435)&x436);

    if (t97 != 9223372036854785153LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x437 = INT16_MIN;
	volatile int16_t x438 = 10;
	static int64_t x439 = 31433139638LL;
	uint8_t x440 = 0U;
	volatile int64_t t98 = 2325701LL;

    t98 = (((x437-x438)&x439)&x440);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x441 = INT16_MIN;
	int8_t x442 = INT8_MIN;
	static int64_t x443 = -4055008LL;
	int64_t t99 = 8375484087LL;

    t99 = (((x441-x442)&x443)&x444);

    if (t99 != -4063232LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x449 = 124U;
	volatile int16_t x451 = INT16_MAX;
	uint32_t x452 = UINT32_MAX;
	int64_t t100 = -179LL;

    t100 = (((x449-x450)&x451)&x452);

    if (t100 != 8020LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x453 = -24772795599LL;
	uint8_t x455 = 2U;
	uint16_t x456 = 3158U;

    t101 = (((x453-x454)&x455)&x456);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x457 = 13U;
	int32_t x458 = -1;
	uint64_t x459 = UINT64_MAX;
	uint64_t t102 = 1LLU;

    t102 = (((x457-x458)&x459)&x460);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x465 = -5454912666475219LL;
	uint16_t x466 = 6U;
	int16_t x467 = INT16_MIN;
	uint64_t t103 = 14LLU;

    t103 = (((x465-x466)&x467)&x468);

    if (t103 != 18441289161043050496LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x473 = 206U;
	volatile int32_t x474 = INT32_MIN;
	uint32_t t104 = 8349U;

    t104 = (((x473-x474)&x475)&x476);

    if (t104 != 78U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x478 = -1;
	uint16_t x479 = UINT16_MAX;
	volatile uint8_t x480 = UINT8_MAX;
	volatile int32_t t105 = 3085;

    t105 = (((x477-x478)&x479)&x480);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x481 = 1184239702144773355LL;
	int32_t x482 = -1;
	int32_t x483 = INT32_MAX;
	uint32_t x484 = 138U;
	volatile int64_t t106 = -24016473LL;

    t106 = (((x481-x482)&x483)&x484);

    if (t106 != 136LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x493 = -1;
	int16_t x494 = -1;
	static int8_t x495 = -1;
	static int32_t x496 = INT32_MAX;

    t107 = (((x493-x494)&x495)&x496);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int64_t x497 = -1LL;
	int8_t x498 = INT8_MIN;
	volatile uint32_t x499 = 4309U;

    t108 = (((x497-x498)&x499)&x500);

    if (t108 != 68LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x502 = INT32_MAX;
	int32_t x503 = INT32_MAX;
	uint64_t x504 = 3783138079LLU;
	uint64_t t109 = 136256305576872524LLU;

    t109 = (((x501-x502)&x503)&x504);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x509 = UINT32_MAX;
	static volatile int8_t x510 = -1;
	uint8_t x512 = 6U;
	uint32_t t110 = 20U;

    t110 = (((x509-x510)&x511)&x512);

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x513 = INT64_MIN;
	volatile uint8_t x515 = 8U;
	int8_t x516 = -1;
	int64_t t111 = -998259413790757479LL;

    t111 = (((x513-x514)&x515)&x516);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x517 = 2U;
	uint8_t x518 = 2U;
	static int16_t x519 = INT16_MAX;
	static int32_t x520 = INT32_MAX;
	volatile int32_t t112 = 63838471;

    t112 = (((x517-x518)&x519)&x520);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint16_t x523 = UINT16_MAX;
	int16_t x524 = INT16_MAX;
	volatile int64_t t113 = -7648370002227LL;

    t113 = (((x521-x522)&x523)&x524);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x538 = 3896428U;
	static int64_t x539 = INT64_MIN;
	int16_t x540 = INT16_MAX;
	int64_t t114 = 2LL;

    t114 = (((x537-x538)&x539)&x540);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x541 = 3055950U;
	static int32_t x542 = INT32_MIN;
	int16_t x544 = -1;

    t115 = (((x541-x542)&x543)&x544);

    if (t115 != 32832U) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x549 = INT16_MIN;
	uint64_t x550 = 287930356LLU;
	int32_t x551 = INT32_MAX;
	int8_t x552 = INT8_MAX;
	uint64_t t116 = 6610998228LLU;

    t116 = (((x549-x550)&x551)&x552);

    if (t116 != 12LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x553 = -1;
	int16_t x554 = -1;
	int32_t x555 = -1;
	int32_t t117 = 1452400;

    t117 = (((x553-x554)&x555)&x556);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x557 = -5;
	int16_t x558 = -1;
	volatile int64_t x560 = 13016923LL;
	uint64_t t118 = 2959790473188320553LLU;

    t118 = (((x557-x558)&x559)&x560);

    if (t118 != 39168LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x561 = -1;
	int64_t x562 = -1LL;
	uint16_t x563 = 2U;
	int8_t x564 = -1;
	volatile int64_t t119 = -1571576610173846822LL;

    t119 = (((x561-x562)&x563)&x564);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x566 = 14U;
	uint8_t x567 = 44U;
	int32_t x568 = -5795;
	int32_t t120 = -213;

    t120 = (((x565-x566)&x567)&x568);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x569 = INT32_MIN;
	volatile int16_t x571 = INT16_MIN;
	int8_t x572 = INT8_MIN;
	volatile int32_t t121 = INT32_MIN;

    t121 = (((x569-x570)&x571)&x572);

    if (t121 != INT32_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x573 = INT64_MIN;
	int16_t x574 = -1;
	int16_t x575 = -24;
	int64_t x576 = INT64_MAX;

    t122 = (((x573-x574)&x575)&x576);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x577 = UINT32_MAX;
	int8_t x578 = 1;
	volatile uint64_t x579 = 44681389771364LLU;
	volatile uint8_t x580 = 1U;
	uint64_t t123 = 477563LLU;

    t123 = (((x577-x578)&x579)&x580);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x581 = INT8_MIN;
	uint8_t x582 = 2U;
	int16_t x583 = INT16_MIN;
	int8_t x584 = INT8_MIN;
	int32_t t124 = 253037115;

    t124 = (((x581-x582)&x583)&x584);

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x586 = -1;
	int64_t x587 = -1LL;
	volatile int16_t x588 = INT16_MIN;
	static volatile int64_t t125 = 33672113048LL;

    t125 = (((x585-x586)&x587)&x588);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x589 = UINT8_MAX;
	volatile uint16_t x590 = UINT16_MAX;
	int16_t x591 = INT16_MIN;
	int32_t x592 = -1;
	int32_t t126 = -138;

    t126 = (((x589-x590)&x591)&x592);

    if (t126 != -65536) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x593 = INT8_MAX;
	int16_t x594 = -1;
	int64_t x595 = 5810248476332LL;

    t127 = (((x593-x594)&x595)&x596);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x597 = INT32_MAX;
	uint16_t x598 = UINT16_MAX;
	int64_t x599 = INT64_MIN;
	static int16_t x600 = -1;
	volatile int64_t t128 = 666LL;

    t128 = (((x597-x598)&x599)&x600);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x602 = 6;
	int8_t x603 = 4;
	volatile uint32_t t129 = 1U;

    t129 = (((x601-x602)&x603)&x604);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x617 = 8U;
	int16_t x619 = 1391;
	uint32_t x620 = UINT32_MAX;

    t130 = (((x617-x618)&x619)&x620);

    if (t130 != 1317LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x621 = 8409U;
	int16_t x623 = -3;
	static volatile uint32_t t131 = 87886U;

    t131 = (((x621-x622)&x623)&x624);

    if (t131 != 8408U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x625 = INT64_MIN;
	static volatile uint64_t x626 = 51370557885LLU;
	int16_t x627 = -101;
	int16_t x628 = -1;
	uint64_t t132 = 533322363768975549LLU;

    t132 = (((x625-x626)&x627)&x628);

    if (t132 != 9223371985484217859LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x631 = 7738;
	int16_t x632 = INT16_MIN;
	int32_t t133 = -1285;

    t133 = (((x629-x630)&x631)&x632);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x633 = 7812657U;
	uint64_t x635 = 129254797952040LLU;
	static uint32_t x636 = UINT32_MAX;
	volatile uint64_t t134 = 1209321429LLU;

    t134 = (((x633-x634)&x635)&x636);

    if (t134 != 5309448LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x637 = UINT8_MAX;
	int8_t x638 = -1;
	int64_t x639 = -62619LL;
	static volatile uint64_t x640 = 1236258019650LLU;

    t135 = (((x637-x638)&x639)&x640);

    if (t135 != 256LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x641 = -910;
	int64_t x642 = INT64_MIN;
	volatile int8_t x643 = INT8_MAX;
	volatile uint8_t x644 = 8U;
	volatile int64_t t136 = 16033LL;

    t136 = (((x641-x642)&x643)&x644);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x645 = 0;
	static int64_t x647 = INT64_MAX;
	uint32_t x648 = UINT32_MAX;
	int64_t t137 = -137345781393718LL;

    t137 = (((x645-x646)&x647)&x648);

    if (t137 != 4294967166LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x649 = -1;
	int64_t x650 = -2594777705418LL;
	int64_t t138 = 131555895919144359LL;

    t138 = (((x649-x650)&x651)&x652);

    if (t138 != 128LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x653 = 0U;
	static int8_t x655 = -1;
	volatile int8_t x656 = 21;
	static volatile int32_t t139 = 292908;

    t139 = (((x653-x654)&x655)&x656);

    if (t139 != 17) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x662 = 7U;
	int16_t x663 = -16;

    t140 = (((x661-x662)&x663)&x664);

    if (t140 != 538189187632LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x665 = 0;
	volatile uint64_t x666 = 3065590673914966LLU;
	int16_t x668 = INT16_MIN;

    t141 = (((x665-x666)&x667)&x668);

    if (t141 != 18443678483035619328LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x669 = 197076U;
	volatile uint16_t x670 = UINT16_MAX;
	int64_t x671 = -1LL;
	volatile int64_t t142 = 574614557192678LL;

    t142 = (((x669-x670)&x671)&x672);

    if (t142 != 131456LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x673 = INT16_MAX;
	static volatile int16_t x674 = -1209;
	int8_t x676 = -22;
	volatile int32_t t143 = -2;

    t143 = (((x673-x674)&x675)&x676);

    if (t143 != 33920) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x681 = 465013U;
	volatile uint64_t x682 = 7973583074823758LLU;
	volatile int8_t x683 = INT8_MAX;
	uint32_t x684 = UINT32_MAX;
	volatile uint64_t t144 = 8282965507196299LLU;

    t144 = (((x681-x682)&x683)&x684);

    if (t144 != 39LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x685 = 0;
	uint8_t x686 = UINT8_MAX;
	uint64_t x688 = UINT64_MAX;
	static volatile uint64_t t145 = 10768864748699LLU;

    t145 = (((x685-x686)&x687)&x688);

    if (t145 != 65281LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x689 = 10741;
	int16_t x690 = INT16_MAX;
	uint8_t x691 = 2U;
	int64_t x692 = -1LL;
	volatile int64_t t146 = -43LL;

    t146 = (((x689-x690)&x691)&x692);

    if (t146 != 2LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x693 = -1LL;
	static int16_t x694 = -1;
	static int64_t x695 = -1LL;
	static int8_t x696 = -1;
	volatile int64_t t147 = 26314909349639067LL;

    t147 = (((x693-x694)&x695)&x696);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x697 = UINT32_MAX;
	int64_t x698 = 286LL;
	int8_t x699 = INT8_MIN;
	static volatile int16_t x700 = 1;
	int64_t t148 = 94236987LL;

    t148 = (((x697-x698)&x699)&x700);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x701 = INT32_MAX;
	uint64_t x702 = UINT64_MAX;
	int8_t x703 = 1;
	static volatile uint64_t t149 = 7LLU;

    t149 = (((x701-x702)&x703)&x704);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x705 = INT8_MIN;
	uint64_t x706 = UINT64_MAX;
	static int8_t x707 = INT8_MIN;
	int16_t x708 = -3;
	uint64_t t150 = 476784510LLU;

    t150 = (((x705-x706)&x707)&x708);

    if (t150 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x709 = -1;
	int32_t x710 = INT32_MAX;
	volatile int8_t x712 = INT8_MAX;
	int64_t t151 = 185347760689LL;

    t151 = (((x709-x710)&x711)&x712);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x713 = 1257U;
	uint16_t x714 = 23962U;
	int8_t x715 = INT8_MAX;
	volatile int16_t x716 = -1;
	static int32_t t152 = 0;

    t152 = (((x713-x714)&x715)&x716);

    if (t152 != 79) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x717 = INT32_MIN;
	int32_t x718 = INT32_MIN;
	int16_t x720 = INT16_MIN;
	static int32_t t153 = 42;

    t153 = (((x717-x718)&x719)&x720);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x721 = 3095022043021LLU;
	uint64_t x722 = UINT64_MAX;
	uint16_t x723 = UINT16_MAX;
	static uint8_t x724 = 29U;

    t154 = (((x721-x722)&x723)&x724);

    if (t154 != 12LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x725 = INT32_MIN;
	static int32_t x727 = -11179;
	int16_t x728 = INT16_MIN;
	static volatile int64_t t155 = -13929530328247625LL;

    t155 = (((x725-x726)&x727)&x728);

    if (t155 != -2147516416LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x733 = UINT32_MAX;
	volatile int32_t x734 = INT32_MIN;
	int64_t x735 = INT64_MIN;
	uint16_t x736 = 6712U;
	static volatile int64_t t156 = -12890615LL;

    t156 = (((x733-x734)&x735)&x736);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x737 = 7240;
	static volatile int64_t x738 = INT64_MAX;
	int16_t x739 = INT16_MAX;
	volatile int64_t t157 = 7908LL;

    t157 = (((x737-x738)&x739)&x740);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x741 = UINT32_MAX;
	int16_t x743 = INT16_MIN;
	uint32_t t158 = 3314U;

    t158 = (((x741-x742)&x743)&x744);

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x750 = UINT16_MAX;
	static uint16_t x751 = UINT16_MAX;
	int64_t x752 = -7955730194LL;
	volatile int64_t t159 = -663377583LL;

    t159 = (((x749-x750)&x751)&x752);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x755 = INT64_MAX;
	uint32_t x756 = 1883215733U;
	uint64_t t160 = 56673LLU;

    t160 = (((x753-x754)&x755)&x756);

    if (t160 != 806818128LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x757 = INT64_MAX;
	static int8_t x759 = -21;
	int32_t x760 = INT32_MIN;
	volatile int64_t t161 = 235407160746358829LL;

    t161 = (((x757-x758)&x759)&x760);

    if (t161 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x761 = UINT8_MAX;
	uint16_t x762 = 32096U;
	int32_t x764 = INT32_MAX;
	int32_t t162 = -120788;

    t162 = (((x761-x762)&x763)&x764);

    if (t162 != 33695) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x765 = INT16_MAX;
	volatile int8_t x766 = INT8_MIN;
	int32_t t163 = 606;

    t163 = (((x765-x766)&x767)&x768);

    if (t163 != 32895) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x769 = 7LLU;
	int8_t x770 = -10;
	volatile int32_t x772 = 5620;
	static uint64_t t164 = 154956592699991LLU;

    t164 = (((x769-x770)&x771)&x772);

    if (t164 != 16LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x773 = UINT16_MAX;
	static uint8_t x774 = 11U;
	volatile int64_t x776 = INT64_MIN;
	int64_t t165 = 253818153182LL;

    t165 = (((x773-x774)&x775)&x776);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x777 = INT16_MAX;
	static int8_t x778 = INT8_MIN;
	uint64_t t166 = 3042512LLU;

    t166 = (((x777-x778)&x779)&x780);

    if (t166 != 32881LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x781 = -1;
	volatile uint32_t x782 = 2030998U;
	int32_t x783 = INT32_MAX;
	int16_t x784 = -4053;

    t167 = (((x781-x782)&x783)&x784);

    if (t167 != 2145452073U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x786 = -55;
	static int32_t x787 = -1;
	static volatile int16_t x788 = INT16_MAX;
	volatile int32_t t168 = -58627;

    t168 = (((x785-x786)&x787)&x788);

    if (t168 != 55) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x789 = 3U;
	int64_t x790 = -1LL;
	static int16_t x791 = -17;
	int32_t x792 = INT32_MIN;
	static volatile int64_t t169 = 4149276094639LL;

    t169 = (((x789-x790)&x791)&x792);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x794 = INT8_MAX;
	volatile int32_t t170 = 17608571;

    t170 = (((x793-x794)&x795)&x796);

    if (t170 != -32768) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x797 = INT8_MIN;
	int8_t x798 = 2;
	int16_t x799 = -766;
	int8_t x800 = -1;

    t171 = (((x797-x798)&x799)&x800);

    if (t171 != -766) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x802 = 3392;
	int32_t x803 = INT32_MIN;
	uint32_t x804 = 360011U;
	uint32_t t172 = 387905626U;

    t172 = (((x801-x802)&x803)&x804);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x805 = 465U;
	volatile uint8_t x806 = 106U;
	static uint8_t x807 = 62U;
	uint64_t x808 = 3LLU;
	uint64_t t173 = 33421469535910LLU;

    t173 = (((x805-x806)&x807)&x808);

    if (t173 != 2LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x810 = INT64_MIN;
	int64_t x811 = INT64_MIN;
	int64_t t174 = 1650463987LL;

    t174 = (((x809-x810)&x811)&x812);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x813 = 1968;
	int16_t x815 = INT16_MIN;
	int32_t x816 = -1;
	volatile int64_t t175 = -115LL;

    t175 = (((x813-x814)&x815)&x816);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x817 = -1LL;
	uint16_t x818 = 0U;
	int16_t x819 = -1;
	int16_t x820 = INT16_MIN;
	volatile int64_t t176 = 233LL;

    t176 = (((x817-x818)&x819)&x820);

    if (t176 != -32768LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint8_t x823 = 21U;
	int32_t x824 = INT32_MIN;
	int32_t t177 = -68179334;

    t177 = (((x821-x822)&x823)&x824);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x829 = INT16_MAX;
	uint32_t x830 = 211831989U;
	uint32_t t178 = 308U;

    t178 = (((x829-x830)&x831)&x832);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x833 = INT32_MIN;
	int8_t x834 = INT8_MIN;
	uint64_t x836 = UINT64_MAX;
	volatile uint64_t t179 = 8012364026LLU;

    t179 = (((x833-x834)&x835)&x836);

    if (t179 != 18446744071562068096LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x838 = -1566;
	uint16_t x839 = 510U;
	static int32_t x840 = INT32_MIN;

    t180 = (((x837-x838)&x839)&x840);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x841 = -1;
	int8_t x842 = INT8_MIN;
	int64_t x844 = 249198136872622703LL;
	int64_t t181 = 2912841304185296LL;

    t181 = (((x841-x842)&x843)&x844);

    if (t181 != 110LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x845 = UINT32_MAX;
	volatile int16_t x847 = INT16_MAX;

    t182 = (((x845-x846)&x847)&x848);

    if (t182 != 451LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x849 = 0U;
	int8_t x850 = INT8_MAX;
	int8_t x852 = INT8_MIN;

    t183 = (((x849-x850)&x851)&x852);

    if (t183 != 1324416U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x857 = 948760403389913625LLU;
	int8_t x858 = -1;
	static uint32_t x859 = 34U;
	int8_t x860 = INT8_MIN;

    t184 = (((x857-x858)&x859)&x860);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x861 = INT16_MIN;
	uint64_t x863 = 480006979201LLU;
	uint64_t x864 = UINT64_MAX;

    t185 = (((x861-x862)&x863)&x864);

    if (t185 != 480006963201LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x865 = 14463678U;
	static uint32_t x866 = UINT32_MAX;
	int32_t x867 = INT32_MAX;
	volatile int32_t x868 = INT32_MIN;
	static uint32_t t186 = 56U;

    t186 = (((x865-x866)&x867)&x868);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x869 = 139221290081LL;
	int8_t x870 = INT8_MIN;
	static volatile int8_t x871 = INT8_MIN;
	int32_t x872 = INT32_MAX;

    t187 = (((x869-x870)&x871)&x872);

    if (t187 != 1782336640LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x873 = 13U;
	uint32_t x874 = 1U;
	int16_t x875 = -1;
	uint64_t x876 = 33733608LLU;
	volatile uint64_t t188 = 134135LLU;

    t188 = (((x873-x874)&x875)&x876);

    if (t188 != 8LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x877 = -1;
	int32_t x878 = INT32_MIN;
	int32_t x879 = INT32_MIN;
	int64_t x880 = INT64_MIN;
	volatile int64_t t189 = -427296406LL;

    t189 = (((x877-x878)&x879)&x880);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x882 = 43;
	int32_t x883 = 0;
	int32_t t190 = -845447;

    t190 = (((x881-x882)&x883)&x884);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x886 = 693348;
	int64_t x887 = -1LL;
	int8_t x888 = 9;
	int64_t t191 = 53751383935058825LL;

    t191 = (((x885-x886)&x887)&x888);

    if (t191 != 8LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x889 = UINT32_MAX;
	static volatile int16_t x891 = INT16_MIN;
	static int32_t x892 = INT32_MIN;
	volatile uint64_t t192 = 424478LLU;

    t192 = (((x889-x890)&x891)&x892);

    if (t192 != 2147483648LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x894 = UINT16_MAX;
	int32_t x895 = INT32_MIN;
	volatile int32_t t193 = 181413793;

    t193 = (((x893-x894)&x895)&x896);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x897 = -3;
	int16_t x898 = INT16_MIN;
	static volatile int16_t x899 = -1;
	uint32_t x900 = UINT32_MAX;
	volatile uint32_t t194 = 406870840U;

    t194 = (((x897-x898)&x899)&x900);

    if (t194 != 32765U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x901 = INT16_MAX;
	int8_t x903 = INT8_MAX;
	volatile int32_t t195 = 23994;

    t195 = (((x901-x902)&x903)&x904);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x905 = 50740364U;
	static int8_t x906 = -1;
	int8_t x907 = -1;
	int8_t x908 = INT8_MAX;
	volatile uint32_t t196 = 26321131U;

    t196 = (((x905-x906)&x907)&x908);

    if (t196 != 13U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x909 = 1927U;
	volatile int32_t x910 = INT32_MIN;
	int64_t x911 = INT64_MAX;
	volatile int32_t x912 = INT32_MIN;

    t197 = (((x909-x910)&x911)&x912);

    if (t197 != 2147483648LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x913 = 11203;
	uint64_t x914 = 3128579634073LLU;
	uint16_t x915 = 6U;
	static uint64_t x916 = UINT64_MAX;
	static volatile uint64_t t198 = 778288263446035028LLU;

    t198 = (((x913-x914)&x915)&x916);

    if (t198 != 2LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x923 = 482981831U;
	volatile int32_t x924 = INT32_MIN;
	static volatile uint32_t t199 = 65U;

    t199 = (((x921-x922)&x923)&x924);

    if (t199 != 0U) { NG(); } else { ; }
	
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

