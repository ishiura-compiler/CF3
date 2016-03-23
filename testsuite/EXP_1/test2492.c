
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

static int8_t x1 = INT8_MAX;
static uint64_t x5 = UINT64_MAX;
static int8_t x14 = INT8_MAX;
volatile int64_t x19 = INT64_MIN;
uint64_t x28 = UINT64_MAX;
static int8_t x29 = INT8_MIN;
uint64_t x31 = UINT64_MAX;
volatile int32_t t8 = -45784;
int16_t x44 = INT16_MAX;
int32_t t10 = 2711;
static int32_t t11 = -161;
uint8_t x49 = UINT8_MAX;
static int32_t t12 = 38834;
int16_t x59 = 84;
uint64_t x66 = UINT64_MAX;
volatile int64_t x86 = INT64_MAX;
static volatile uint32_t x98 = UINT32_MAX;
volatile int8_t x107 = 3;
static int8_t x108 = -1;
int32_t t27 = -47;
int64_t x114 = -1LL;
int16_t x119 = -1;
int64_t x120 = -1LL;
int8_t x126 = INT8_MIN;
static uint8_t x132 = 1U;
int64_t x146 = -1LL;
uint8_t x149 = 1U;
volatile int64_t t38 = INT64_MIN;
int32_t x157 = INT32_MAX;
uint8_t x161 = UINT8_MAX;
static volatile int32_t t40 = 1718209;
uint16_t x168 = UINT16_MAX;
volatile int16_t x172 = -1;
volatile int32_t t42 = 209339777;
uint32_t x173 = 479U;
volatile int32_t t43 = -39334764;
int64_t x177 = INT64_MIN;
uint16_t x182 = 29333U;
int8_t x185 = INT8_MIN;
int16_t x187 = -737;
static int32_t x190 = -3058;
static int64_t x195 = 1038403560361920388LL;
int64_t x198 = INT64_MIN;
int64_t x199 = INT64_MIN;
static int32_t t49 = 18;
static volatile int32_t x203 = INT32_MAX;
int32_t t51 = -84;
volatile uint32_t x210 = 98U;
int32_t x213 = INT32_MIN;
volatile uint32_t x217 = 3873793U;
static int8_t x223 = -1;
int64_t x228 = INT64_MAX;
int64_t x232 = INT64_MIN;
volatile int8_t x233 = 2;
volatile int32_t t58 = -5645026;
uint32_t x242 = 220350U;
volatile int32_t t66 = 152;
int32_t t67 = -6418;
uint16_t x291 = UINT16_MAX;
static int8_t x292 = INT8_MAX;
int64_t x294 = -14748LL;
volatile int32_t t74 = 7413;
static volatile uint32_t t75 = 853226U;
uint16_t x324 = UINT16_MAX;
volatile int32_t t82 = -52237780;
static volatile int32_t x341 = -397285330;
int32_t x342 = 1;
int32_t t85 = 106605;
volatile uint32_t t86 = 16U;
int32_t t89 = INT32_MAX;
int32_t x362 = -1;
int32_t t90 = 145546;
int32_t x365 = -1;
int32_t x374 = INT32_MIN;
int64_t t93 = -181043896LL;
int32_t x381 = INT32_MIN;
int64_t x390 = 8057429591LL;
uint8_t x392 = UINT8_MAX;
int32_t t97 = 1915697;
volatile int32_t t98 = -21023;
static volatile int64_t x397 = -52LL;
int64_t x417 = INT64_MAX;
int8_t x418 = INT8_MIN;
static int64_t x423 = INT64_MAX;
int32_t t105 = -572;
static uint16_t x428 = 1U;
static int32_t x431 = INT32_MIN;
static int8_t x432 = 52;
int64_t t108 = -214LL;
int32_t x439 = 6940;
static volatile int32_t t109 = 8045495;
int64_t x441 = INT64_MIN;
uint64_t x447 = 986820LLU;
int8_t x448 = INT8_MIN;
int16_t x449 = INT16_MIN;
int16_t x451 = INT16_MIN;
int16_t x456 = -1;
int32_t t113 = -34214938;
int32_t x457 = INT32_MIN;
uint16_t x460 = 518U;
int64_t x463 = -1LL;
int8_t x469 = -3;
static int8_t x482 = -1;
uint64_t x490 = UINT64_MAX;
volatile int32_t t125 = 17763;
volatile int16_t x508 = -15802;
int64_t x510 = 1LL;
int32_t t127 = 2032284;
volatile int64_t t132 = -795357004768LL;
static int8_t x536 = 2;
static volatile int32_t t133 = -51867193;
int32_t t134 = -74;
uint32_t x541 = UINT32_MAX;
int64_t x543 = INT64_MIN;
int32_t t135 = 0;
uint8_t x550 = 4U;
volatile int64_t x551 = INT64_MIN;
int32_t t138 = -2;
volatile uint64_t x561 = UINT64_MAX;
static int16_t x563 = INT16_MIN;
static int32_t x564 = INT32_MAX;
int32_t x565 = INT32_MIN;
int64_t x567 = INT64_MIN;
static int8_t x568 = 0;
int16_t x573 = INT16_MAX;
int32_t x575 = INT32_MIN;
volatile int64_t t143 = INT64_MIN;
uint64_t x579 = 3LLU;
int32_t t144 = -328205;
uint32_t x582 = 219795U;
static volatile int32_t t145 = 419;
uint64_t x595 = 38145252671369LLU;
volatile uint16_t x598 = UINT16_MAX;
uint32_t x599 = 3036U;
int16_t x600 = INT16_MIN;
int32_t t149 = -245445;
int32_t t150 = -515505937;
volatile int8_t x610 = INT8_MAX;
volatile uint32_t t153 = 196901494U;
uint16_t x624 = 9983U;
int32_t x629 = -1;
static uint16_t x630 = 0U;
volatile int32_t t159 = -2219;
volatile int8_t x655 = -9;
int64_t x656 = INT64_MAX;
int32_t x658 = -1;
int16_t x663 = INT16_MIN;
uint8_t x667 = 7U;
int8_t x668 = INT8_MIN;
uint64_t x669 = 509406649LLU;
uint16_t x675 = UINT16_MAX;
int32_t x677 = -1;
static volatile int32_t x679 = -20;
volatile int64_t x685 = -13429777761LL;
static int32_t t174 = -281868991;
int8_t x701 = INT8_MIN;
int16_t x708 = INT16_MAX;
volatile int32_t x715 = 2;
int8_t x718 = INT8_MAX;
volatile int64_t t185 = 323100269766459310LL;
uint8_t x753 = 6U;
static int8_t x755 = -1;
uint64_t x761 = UINT64_MAX;
int32_t x763 = -1;
volatile int64_t t191 = -3193785892947775LL;
volatile int8_t x770 = -1;
int32_t t192 = -8198331;
uint32_t x773 = UINT32_MAX;
int64_t t193 = 9022435578591479LL;
volatile int16_t x781 = -1;
int32_t x783 = 640034037;
uint16_t x785 = UINT16_MAX;
static volatile uint16_t x788 = 5U;
static volatile uint32_t x791 = 398299109U;
uint8_t x794 = 0U;
uint16_t x796 = 1U;
volatile int32_t t198 = -3034381;


void f0(void) {
    	static int32_t x2 = INT32_MIN;
	int32_t x3 = -1;
	int8_t x4 = 0;
	int32_t t0 = -1;

    t0 = (((x1|x2)<=x3)^x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x6 = UINT8_MAX;
	int64_t x7 = INT64_MAX;
	uint32_t x8 = 261422U;
	volatile uint32_t t1 = 222829566U;

    t1 = (((x5|x6)<=x7)^x8);

    if (t1 != 261422U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = UINT64_MAX;
	int16_t x10 = INT16_MIN;
	volatile uint8_t x11 = UINT8_MAX;
	volatile int8_t x12 = -1;
	int32_t t2 = -2;

    t2 = (((x9|x10)<=x11)^x12);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	static int16_t x15 = INT16_MIN;
	static int16_t x16 = -26;
	volatile int32_t t3 = 38;

    t3 = (((x13|x14)<=x15)^x16);

    if (t3 != -26) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = 34159202986110252LL;
	uint8_t x18 = 3U;
	volatile uint64_t x20 = 446LLU;
	uint64_t t4 = 11374933711968LLU;

    t4 = (((x17|x18)<=x19)^x20);

    if (t4 != 446LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = 6714497882LL;
	uint8_t x22 = 16U;
	int16_t x23 = INT16_MIN;
	uint32_t x24 = UINT32_MAX;
	volatile uint32_t t5 = UINT32_MAX;

    t5 = (((x21|x22)<=x23)^x24);

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 1U;
	int64_t x26 = INT64_MIN;
	int32_t x27 = INT32_MIN;
	static volatile uint64_t t6 = 3996390111833200LLU;

    t6 = (((x25|x26)<=x27)^x28);

    if (t6 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = INT64_MAX;
	int8_t x32 = INT8_MIN;
	static int32_t t7 = -46071;

    t7 = (((x29|x30)<=x31)^x32);

    if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MAX;
	volatile int32_t x34 = -1;
	static int8_t x35 = -1;
	static int8_t x36 = INT8_MIN;

    t8 = (((x33|x34)<=x35)^x36);

    if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -14267756LL;
	static int64_t x38 = INT64_MIN;
	static int32_t x39 = INT32_MAX;
	volatile int32_t x40 = -732;
	static int32_t t9 = 5973537;

    t9 = (((x37|x38)<=x39)^x40);

    if (t9 != -731) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	int32_t x42 = INT32_MAX;
	static uint8_t x43 = UINT8_MAX;

    t10 = (((x41|x42)<=x43)^x44);

    if (t10 != 32766) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = 278;
	int32_t x46 = -1;
	static int32_t x47 = -1;
	volatile int32_t x48 = INT32_MIN;

    t11 = (((x45|x46)<=x47)^x48);

    if (t11 != -2147483647) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = INT8_MAX;
	volatile int8_t x51 = 1;
	int32_t x52 = -1;

    t12 = (((x49|x50)<=x51)^x52);

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 2U;
	uint64_t x54 = UINT64_MAX;
	uint64_t x55 = 113579LLU;
	int32_t x56 = INT32_MIN;
	int32_t t13 = INT32_MIN;

    t13 = (((x53|x54)<=x55)^x56);

    if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x57 = 1U;
	int64_t x58 = -1LL;
	int16_t x60 = INT16_MIN;
	int32_t t14 = -7;

    t14 = (((x57|x58)<=x59)^x60);

    if (t14 != -32767) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x61 = 21;
	int64_t x62 = INT64_MIN;
	uint32_t x63 = UINT32_MAX;
	int16_t x64 = -415;
	int32_t t15 = 506;

    t15 = (((x61|x62)<=x63)^x64);

    if (t15 != -416) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 36U;
	volatile uint16_t x67 = 44U;
	volatile uint64_t x68 = 35137277LLU;
	static volatile uint64_t t16 = 6186179129494581337LLU;

    t16 = (((x65|x66)<=x67)^x68);

    if (t16 != 35137277LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 4U;
	static int8_t x70 = 1;
	uint64_t x71 = UINT64_MAX;
	volatile uint16_t x72 = 21029U;
	static int32_t t17 = 1976180;

    t17 = (((x69|x70)<=x71)^x72);

    if (t17 != 21028) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = 4;
	int64_t x74 = INT64_MIN;
	volatile int16_t x75 = INT16_MIN;
	volatile uint8_t x76 = 1U;
	volatile int32_t t18 = -5;

    t18 = (((x73|x74)<=x75)^x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x77 = 8889U;
	volatile uint32_t x78 = 73878813U;
	int32_t x79 = INT32_MIN;
	volatile uint16_t x80 = 19U;
	static volatile int32_t t19 = 104;

    t19 = (((x77|x78)<=x79)^x80);

    if (t19 != 18) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	static int16_t x82 = INT16_MIN;
	volatile uint16_t x83 = 2U;
	static int32_t x84 = INT32_MIN;
	int32_t t20 = 335;

    t20 = (((x81|x82)<=x83)^x84);

    if (t20 != -2147483647) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x85 = -1;
	int8_t x87 = -1;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t21 = 1375847766693LLU;

    t21 = (((x85|x86)<=x87)^x88);

    if (t21 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	static volatile uint64_t x90 = 2058861381676436943LLU;
	int64_t x91 = INT64_MIN;
	int16_t x92 = -1;
	int32_t t22 = -241995997;

    t22 = (((x89|x90)<=x91)^x92);

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	uint64_t x94 = 7LLU;
	int8_t x95 = INT8_MAX;
	uint16_t x96 = UINT16_MAX;
	int32_t t23 = -2489;

    t23 = (((x93|x94)<=x95)^x96);

    if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 347U;
	int8_t x99 = 0;
	static int32_t x100 = INT32_MAX;
	int32_t t24 = INT32_MAX;

    t24 = (((x97|x98)<=x99)^x100);

    if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -8;
	uint16_t x102 = 12120U;
	volatile int8_t x103 = -3;
	int64_t x104 = INT64_MAX;
	int64_t t25 = 1092LL;

    t25 = (((x101|x102)<=x103)^x104);

    if (t25 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	int32_t x106 = -1;
	volatile int32_t t26 = -1636202;

    t26 = (((x105|x106)<=x107)^x108);

    if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	static int64_t x110 = INT64_MIN;
	uint8_t x111 = 88U;
	int8_t x112 = INT8_MIN;

    t27 = (((x109|x110)<=x111)^x112);

    if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = -1;
	int32_t x115 = INT32_MIN;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t28 = -48901872;

    t28 = (((x113|x114)<=x115)^x116);

    if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -7;
	uint32_t x118 = UINT32_MAX;
	static volatile int64_t t29 = 7302316509LL;

    t29 = (((x117|x118)<=x119)^x120);

    if (t29 != -2LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MAX;
	uint8_t x122 = UINT8_MAX;
	int32_t x123 = -249690633;
	static int32_t x124 = -1;
	volatile int32_t t30 = -2236;

    t30 = (((x121|x122)<=x123)^x124);

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x125 = UINT64_MAX;
	volatile uint64_t x127 = 1915288610355LLU;
	int64_t x128 = INT64_MAX;
	volatile int64_t t31 = INT64_MAX;

    t31 = (((x125|x126)<=x127)^x128);

    if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 6979516U;
	static volatile uint16_t x130 = UINT16_MAX;
	int64_t x131 = -1LL;
	static volatile int32_t t32 = -3331;

    t32 = (((x129|x130)<=x131)^x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x133 = 636U;
	int8_t x134 = INT8_MIN;
	int64_t x135 = 432990748LL;
	static volatile int64_t x136 = INT64_MIN;
	volatile int64_t t33 = INT64_MIN;

    t33 = (((x133|x134)<=x135)^x136);

    if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -917160;
	int32_t x138 = -1;
	volatile int32_t x139 = -1;
	static int64_t x140 = INT64_MAX;
	volatile int64_t t34 = -28323579103LL;

    t34 = (((x137|x138)<=x139)^x140);

    if (t34 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x141 = -1;
	uint16_t x142 = UINT16_MAX;
	int16_t x143 = -1;
	static volatile uint64_t x144 = 6284742394768416LLU;
	volatile uint64_t t35 = 7962500845829221085LLU;

    t35 = (((x141|x142)<=x143)^x144);

    if (t35 != 6284742394768417LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = UINT32_MAX;
	volatile uint64_t x147 = 35816851841005539LLU;
	int32_t x148 = INT32_MIN;
	int32_t t36 = INT32_MIN;

    t36 = (((x145|x146)<=x147)^x148);

    if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MIN;
	int32_t x152 = INT32_MIN;
	int32_t t37 = INT32_MIN;

    t37 = (((x149|x150)<=x151)^x152);

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MAX;
	uint8_t x154 = 1U;
	int16_t x155 = -278;
	volatile int64_t x156 = INT64_MIN;

    t38 = (((x153|x154)<=x155)^x156);

    if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x158 = INT64_MIN;
	volatile int16_t x159 = -1;
	int32_t x160 = INT32_MIN;
	static int32_t t39 = -5339807;

    t39 = (((x157|x158)<=x159)^x160);

    if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x162 = -1004125LL;
	static int32_t x163 = -1;
	int8_t x164 = -1;

    t40 = (((x161|x162)<=x163)^x164);

    if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	uint16_t x166 = UINT16_MAX;
	static volatile uint8_t x167 = 0U;
	volatile int32_t t41 = 905;

    t41 = (((x165|x166)<=x167)^x168);

    if (t41 != 65534) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	uint8_t x171 = 0U;

    t42 = (((x169|x170)<=x171)^x172);

    if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x174 = 1970778333U;
	int16_t x175 = INT16_MAX;
	uint16_t x176 = UINT16_MAX;

    t43 = (((x173|x174)<=x175)^x176);

    if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x178 = INT16_MIN;
	volatile uint32_t x179 = UINT32_MAX;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t44 = 59U;

    t44 = (((x177|x178)<=x179)^x180);

    if (t44 != 4294967294U) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x181 = 29234808U;
	int32_t x183 = 8327839;
	volatile uint32_t x184 = UINT32_MAX;
	uint32_t t45 = UINT32_MAX;

    t45 = (((x181|x182)<=x183)^x184);

    if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x186 = INT64_MIN;
	int8_t x188 = INT8_MAX;
	volatile int32_t t46 = -22075069;

    t46 = (((x185|x186)<=x187)^x188);

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = 364;
	static uint64_t x191 = UINT64_MAX;
	static int32_t x192 = INT32_MIN;
	int32_t t47 = 132;

    t47 = (((x189|x190)<=x191)^x192);

    if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -10;
	int16_t x194 = 34;
	int16_t x196 = 7;
	int32_t t48 = -3310;

    t48 = (((x193|x194)<=x195)^x196);

    if (t48 != 6) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = -12612360LL;
	int8_t x200 = 1;

    t49 = (((x197|x198)<=x199)^x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x201 = 2LL;
	uint64_t x202 = 169967685163LLU;
	int8_t x204 = 2;
	int32_t t50 = 11523280;

    t50 = (((x201|x202)<=x203)^x204);

    if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = INT8_MIN;
	int8_t x206 = INT8_MIN;
	static int32_t x207 = -1;
	int32_t x208 = -1;

    t51 = (((x205|x206)<=x207)^x208);

    if (t51 != -2) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	static int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MAX;
	volatile int64_t t52 = -129569253LL;

    t52 = (((x209|x210)<=x211)^x212);

    if (t52 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x214 = -1;
	uint16_t x215 = 9958U;
	int64_t x216 = -1LL;
	int64_t t53 = 149081094835LL;

    t53 = (((x213|x214)<=x215)^x216);

    if (t53 != -2LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x218 = 52U;
	int8_t x219 = 20;
	int16_t x220 = 18;
	int32_t t54 = -54591934;

    t54 = (((x217|x218)<=x219)^x220);

    if (t54 != 18) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = 1944750935085116719LL;
	int32_t x222 = -1;
	volatile int16_t x224 = -2945;
	int32_t t55 = 16269;

    t55 = (((x221|x222)<=x223)^x224);

    if (t55 != -2946) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x225 = -255883174937LL;
	int16_t x226 = -1;
	int16_t x227 = INT16_MIN;
	int64_t t56 = INT64_MAX;

    t56 = (((x225|x226)<=x227)^x228);

    if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = 164LL;
	int8_t x230 = -1;
	int64_t x231 = INT64_MIN;
	volatile int64_t t57 = INT64_MIN;

    t57 = (((x229|x230)<=x231)^x232);

    if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x234 = UINT8_MAX;
	int32_t x235 = 1438684;
	int16_t x236 = INT16_MIN;

    t58 = (((x233|x234)<=x235)^x236);

    if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 14715U;
	uint64_t x238 = UINT64_MAX;
	int32_t x239 = -1;
	int16_t x240 = INT16_MIN;
	int32_t t59 = -33793287;

    t59 = (((x237|x238)<=x239)^x240);

    if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x241 = UINT32_MAX;
	static uint32_t x243 = 80003U;
	static uint8_t x244 = UINT8_MAX;
	volatile int32_t t60 = 15225322;

    t60 = (((x241|x242)<=x243)^x244);

    if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x245 = INT64_MIN;
	volatile int8_t x246 = 17;
	volatile int32_t x247 = INT32_MAX;
	volatile int64_t x248 = -1LL;
	static volatile int64_t t61 = 3388625724094854LL;

    t61 = (((x245|x246)<=x247)^x248);

    if (t61 != -2LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = 2071;
	static volatile uint32_t x250 = UINT32_MAX;
	static int64_t x251 = 2611574449473166171LL;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = 156189;

    t62 = (((x249|x250)<=x251)^x252);

    if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x253 = INT64_MAX;
	volatile int32_t x254 = INT32_MIN;
	static volatile int32_t x255 = INT32_MIN;
	uint16_t x256 = 11706U;
	int32_t t63 = -9221;

    t63 = (((x253|x254)<=x255)^x256);

    if (t63 != 11706) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x257 = INT16_MIN;
	static volatile uint32_t x258 = 9U;
	uint64_t x259 = UINT64_MAX;
	static uint32_t x260 = UINT32_MAX;
	volatile uint32_t t64 = 2U;

    t64 = (((x257|x258)<=x259)^x260);

    if (t64 != 4294967294U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 2570U;
	int16_t x262 = -4;
	uint16_t x263 = 3281U;
	int32_t x264 = -1;
	volatile int32_t t65 = -1993;

    t65 = (((x261|x262)<=x263)^x264);

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x265 = -1;
	uint16_t x266 = 14U;
	int8_t x267 = 7;
	volatile int8_t x268 = INT8_MIN;

    t66 = (((x265|x266)<=x267)^x268);

    if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = 2686;
	int64_t x270 = -1LL;
	uint16_t x271 = 3044U;
	int8_t x272 = -1;

    t67 = (((x269|x270)<=x271)^x272);

    if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	uint8_t x274 = UINT8_MAX;
	static int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MAX;
	static int32_t t68 = -25;

    t68 = (((x273|x274)<=x275)^x276);

    if (t68 != 126) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int64_t x277 = 33117LL;
	int16_t x278 = INT16_MIN;
	static int16_t x279 = -1;
	int16_t x280 = -12;
	int32_t t69 = -32714950;

    t69 = (((x277|x278)<=x279)^x280);

    if (t69 != -11) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x281 = 26761U;
	uint16_t x282 = 1800U;
	int64_t x283 = INT64_MIN;
	static volatile uint8_t x284 = 1U;
	static volatile int32_t t70 = 72357;

    t70 = (((x281|x282)<=x283)^x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x285 = INT16_MIN;
	static volatile int16_t x286 = 2;
	int64_t x287 = INT64_MAX;
	static uint64_t x288 = 36569133744718LLU;
	volatile uint64_t t71 = 55LLU;

    t71 = (((x285|x286)<=x287)^x288);

    if (t71 != 36569133744719LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x289 = -1;
	int16_t x290 = -1;
	volatile int32_t t72 = -36013;

    t72 = (((x289|x290)<=x291)^x292);

    if (t72 != 126) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = UINT32_MAX;
	uint16_t x295 = 1U;
	volatile int16_t x296 = -1;
	int32_t t73 = 19286;

    t73 = (((x293|x294)<=x295)^x296);

    if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MAX;
	int32_t x298 = INT32_MIN;
	uint32_t x299 = UINT32_MAX;
	int32_t x300 = INT32_MIN;

    t74 = (((x297|x298)<=x299)^x300);

    if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -1;
	int16_t x302 = INT16_MIN;
	uint8_t x303 = 9U;
	uint32_t x304 = 45269807U;

    t75 = (((x301|x302)<=x303)^x304);

    if (t75 != 45269806U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MAX;
	uint8_t x306 = 77U;
	int64_t x307 = 1807809150LL;
	int64_t x308 = -63789673905LL;
	volatile int64_t t76 = 13LL;

    t76 = (((x305|x306)<=x307)^x308);

    if (t76 != -63789673906LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x309 = INT32_MIN;
	static int32_t x310 = 176761;
	volatile int16_t x311 = INT16_MAX;
	volatile uint64_t x312 = 81LLU;
	volatile uint64_t t77 = 339159295639LLU;

    t77 = (((x309|x310)<=x311)^x312);

    if (t77 != 80LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = 1;
	volatile uint16_t x314 = 9U;
	int16_t x315 = INT16_MIN;
	uint8_t x316 = 6U;
	int32_t t78 = 4;

    t78 = (((x313|x314)<=x315)^x316);

    if (t78 != 6) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 1480242U;
	uint64_t x318 = UINT64_MAX;
	int16_t x319 = -1;
	uint8_t x320 = UINT8_MAX;
	static int32_t t79 = 743551054;

    t79 = (((x317|x318)<=x319)^x320);

    if (t79 != 254) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = 5707;
	int64_t x322 = INT64_MIN;
	static uint64_t x323 = 6794616996LLU;
	volatile int32_t t80 = -459257192;

    t80 = (((x321|x322)<=x323)^x324);

    if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = UINT16_MAX;
	int64_t x326 = INT64_MAX;
	int32_t x327 = INT32_MIN;
	uint32_t x328 = 1U;
	uint32_t t81 = 591U;

    t81 = (((x325|x326)<=x327)^x328);

    if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 4571669881130LLU;
	static int8_t x330 = INT8_MAX;
	int16_t x331 = 96;
	int32_t x332 = -1;

    t82 = (((x329|x330)<=x331)^x332);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = -1LL;
	volatile int8_t x334 = INT8_MAX;
	int32_t x335 = INT32_MIN;
	uint32_t x336 = 26706U;
	uint32_t t83 = 132U;

    t83 = (((x333|x334)<=x335)^x336);

    if (t83 != 26706U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = 8U;
	volatile int64_t x338 = -1LL;
	volatile uint64_t x339 = 707291715394038836LLU;
	volatile int32_t x340 = 38456;
	volatile int32_t t84 = -13077;

    t84 = (((x337|x338)<=x339)^x340);

    if (t84 != 38456) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x343 = 3742556635045800LLU;
	volatile int32_t x344 = -19;

    t85 = (((x341|x342)<=x343)^x344);

    if (t85 != -19) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x345 = INT16_MIN;
	int64_t x346 = -1LL;
	uint8_t x347 = 65U;
	uint32_t x348 = UINT32_MAX;

    t86 = (((x345|x346)<=x347)^x348);

    if (t86 != 4294967294U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = 526U;
	static int16_t x350 = INT16_MAX;
	int8_t x351 = -1;
	uint32_t x352 = UINT32_MAX;
	volatile uint32_t t87 = 16U;

    t87 = (((x349|x350)<=x351)^x352);

    if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x353 = -15975477755425LL;
	volatile uint8_t x354 = UINT8_MAX;
	int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MIN;
	volatile int32_t t88 = 2;

    t88 = (((x353|x354)<=x355)^x356);

    if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x357 = INT16_MAX;
	uint16_t x358 = UINT16_MAX;
	static int8_t x359 = 9;
	static volatile int32_t x360 = INT32_MAX;

    t89 = (((x357|x358)<=x359)^x360);

    if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MAX;
	uint16_t x363 = UINT16_MAX;
	int8_t x364 = INT8_MAX;

    t90 = (((x361|x362)<=x363)^x364);

    if (t90 != 126) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x366 = UINT64_MAX;
	int64_t x367 = 381269398LL;
	int64_t x368 = 31192819815LL;
	int64_t t91 = -1326190406246591206LL;

    t91 = (((x365|x366)<=x367)^x368);

    if (t91 != 31192819815LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = 93U;
	volatile int64_t x370 = 57889498LL;
	int8_t x371 = INT8_MIN;
	int32_t x372 = 860;
	int32_t t92 = 289;

    t92 = (((x369|x370)<=x371)^x372);

    if (t92 != 860) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x373 = -1;
	volatile int8_t x375 = INT8_MAX;
	int64_t x376 = -1LL;

    t93 = (((x373|x374)<=x375)^x376);

    if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = -298382203048134003LL;
	uint16_t x378 = UINT16_MAX;
	static volatile int8_t x379 = INT8_MIN;
	int64_t x380 = -1LL;
	static int64_t t94 = -7281007LL;

    t94 = (((x377|x378)<=x379)^x380);

    if (t94 != -2LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x382 = 4748153;
	static int32_t x383 = INT32_MIN;
	int8_t x384 = INT8_MAX;
	volatile int32_t t95 = 0;

    t95 = (((x381|x382)<=x383)^x384);

    if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = 67656170674LLU;
	int64_t x386 = 407056711LL;
	volatile int64_t x387 = INT64_MAX;
	uint16_t x388 = 621U;
	volatile int32_t t96 = 371684251;

    t96 = (((x385|x386)<=x387)^x388);

    if (t96 != 620) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x389 = 0U;
	int16_t x391 = -5694;

    t97 = (((x389|x390)<=x391)^x392);

    if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = -1;
	volatile int8_t x394 = -1;
	uint32_t x395 = 23979608U;
	int32_t x396 = -1;

    t98 = (((x393|x394)<=x395)^x396);

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x398 = 12U;
	int32_t x399 = INT32_MAX;
	int32_t x400 = -1;
	static volatile int32_t t99 = -11;

    t99 = (((x397|x398)<=x399)^x400);

    if (t99 != -2) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x401 = -1;
	int32_t x402 = -1;
	volatile int32_t x403 = INT32_MIN;
	uint64_t x404 = 18LLU;
	static uint64_t t100 = 34LLU;

    t100 = (((x401|x402)<=x403)^x404);

    if (t100 != 18LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 5620U;
	uint8_t x406 = 1U;
	static volatile int16_t x407 = 3;
	int16_t x408 = INT16_MAX;
	int32_t t101 = 7343;

    t101 = (((x405|x406)<=x407)^x408);

    if (t101 != 32767) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x409 = 2U;
	int16_t x410 = INT16_MIN;
	int64_t x411 = 1528704777LL;
	int64_t x412 = -1LL;
	int64_t t102 = 80LL;

    t102 = (((x409|x410)<=x411)^x412);

    if (t102 != -2LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = -1LL;
	int8_t x414 = 1;
	int16_t x415 = INT16_MIN;
	volatile int16_t x416 = -1;
	int32_t t103 = -53632633;

    t103 = (((x413|x414)<=x415)^x416);

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x419 = 5189287122079LL;
	static int32_t x420 = 4;
	static int32_t t104 = -318;

    t104 = (((x417|x418)<=x419)^x420);

    if (t104 != 5) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x421 = UINT16_MAX;
	volatile int64_t x422 = -1LL;
	int32_t x424 = -203555;

    t105 = (((x421|x422)<=x423)^x424);

    if (t105 != -203556) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = -1LL;
	uint32_t x426 = 479068U;
	volatile int64_t x427 = 190414735398411732LL;
	volatile int32_t t106 = 3863328;

    t106 = (((x425|x426)<=x427)^x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MAX;
	volatile uint8_t x430 = 15U;
	volatile int32_t t107 = 7229;

    t107 = (((x429|x430)<=x431)^x432);

    if (t107 != 52) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x433 = -30;
	static volatile int8_t x434 = INT8_MAX;
	int16_t x435 = INT16_MAX;
	int64_t x436 = -12778254936425LL;

    t108 = (((x433|x434)<=x435)^x436);

    if (t108 != -12778254936426LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x437 = INT32_MIN;
	static int64_t x438 = INT64_MIN;
	static uint16_t x440 = 46U;

    t109 = (((x437|x438)<=x439)^x440);

    if (t109 != 47) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x442 = INT8_MAX;
	int32_t x443 = INT32_MAX;
	static uint8_t x444 = 2U;
	int32_t t110 = -898;

    t110 = (((x441|x442)<=x443)^x444);

    if (t110 != 3) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	uint32_t x446 = UINT32_MAX;
	static int32_t t111 = 1;

    t111 = (((x445|x446)<=x447)^x448);

    if (t111 != -128) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x450 = INT8_MIN;
	int8_t x452 = INT8_MAX;
	volatile int32_t t112 = 293447;

    t112 = (((x449|x450)<=x451)^x452);

    if (t112 != 127) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = -1LL;
	int16_t x454 = 12;
	int8_t x455 = INT8_MIN;

    t113 = (((x453|x454)<=x455)^x456);

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x458 = 52LL;
	static int32_t x459 = -464225804;
	volatile int32_t t114 = -15478644;

    t114 = (((x457|x458)<=x459)^x460);

    if (t114 != 519) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 1U;
	uint8_t x462 = 0U;
	uint64_t x464 = 13459051450676LLU;
	volatile uint64_t t115 = 19LLU;

    t115 = (((x461|x462)<=x463)^x464);

    if (t115 != 13459051450676LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MAX;
	uint8_t x466 = 60U;
	uint16_t x467 = 715U;
	static int32_t x468 = 18;
	int32_t t116 = 1618;

    t116 = (((x465|x466)<=x467)^x468);

    if (t116 != 19) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x470 = 9259U;
	static uint64_t x471 = 5502722019388LLU;
	uint16_t x472 = 7U;
	static int32_t t117 = 100104;

    t117 = (((x469|x470)<=x471)^x472);

    if (t117 != 6) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = 806134;
	volatile uint16_t x474 = UINT16_MAX;
	int64_t x475 = -381295158LL;
	int8_t x476 = -1;
	static int32_t t118 = 316352;

    t118 = (((x473|x474)<=x475)^x476);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = 1;
	uint64_t x478 = 1440976LLU;
	uint8_t x479 = 27U;
	static volatile int16_t x480 = 875;
	volatile int32_t t119 = -454;

    t119 = (((x477|x478)<=x479)^x480);

    if (t119 != 875) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = 4536609U;
	int32_t x483 = INT32_MAX;
	static int8_t x484 = 27;
	static volatile int32_t t120 = -5;

    t120 = (((x481|x482)<=x483)^x484);

    if (t120 != 27) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -46;
	volatile uint32_t x486 = 3787182U;
	int32_t x487 = 1;
	uint16_t x488 = 27U;
	volatile int32_t t121 = 24422816;

    t121 = (((x485|x486)<=x487)^x488);

    if (t121 != 27) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint64_t x489 = 274379553123942340LLU;
	static volatile int32_t x491 = INT32_MIN;
	static int64_t x492 = 56LL;
	volatile int64_t t122 = -13807982189832LL;

    t122 = (((x489|x490)<=x491)^x492);

    if (t122 != 56LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x493 = INT16_MIN;
	int32_t x494 = INT32_MAX;
	static int64_t x495 = INT64_MIN;
	volatile int16_t x496 = INT16_MAX;
	int32_t t123 = -106;

    t123 = (((x493|x494)<=x495)^x496);

    if (t123 != 32767) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	int8_t x498 = INT8_MIN;
	static volatile uint8_t x499 = 2U;
	volatile uint16_t x500 = UINT16_MAX;
	static int32_t t124 = 1;

    t124 = (((x497|x498)<=x499)^x500);

    if (t124 != 65534) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -1;
	int32_t x502 = INT32_MIN;
	uint8_t x503 = UINT8_MAX;
	int16_t x504 = 215;

    t125 = (((x501|x502)<=x503)^x504);

    if (t125 != 214) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x505 = 42U;
	int8_t x506 = INT8_MIN;
	static volatile int32_t x507 = INT32_MIN;
	int32_t t126 = 14211;

    t126 = (((x505|x506)<=x507)^x508);

    if (t126 != -15802) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MIN;
	int16_t x511 = INT16_MIN;
	uint16_t x512 = 1U;

    t127 = (((x509|x510)<=x511)^x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x513 = 55U;
	static int16_t x514 = INT16_MAX;
	static uint32_t x515 = UINT32_MAX;
	uint64_t x516 = UINT64_MAX;
	static volatile uint64_t t128 = 112LLU;

    t128 = (((x513|x514)<=x515)^x516);

    if (t128 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = 0;
	volatile int8_t x518 = INT8_MAX;
	int64_t x519 = -112LL;
	int8_t x520 = INT8_MAX;
	volatile int32_t t129 = 6940474;

    t129 = (((x517|x518)<=x519)^x520);

    if (t129 != 127) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x521 = INT8_MAX;
	static uint8_t x522 = 0U;
	int16_t x523 = -1;
	static int8_t x524 = INT8_MIN;
	volatile int32_t t130 = -2;

    t130 = (((x521|x522)<=x523)^x524);

    if (t130 != -128) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = 313070735LLU;
	static volatile uint16_t x526 = UINT16_MAX;
	int16_t x527 = INT16_MIN;
	uint8_t x528 = UINT8_MAX;
	volatile int32_t t131 = -289870;

    t131 = (((x525|x526)<=x527)^x528);

    if (t131 != 254) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = -1LL;
	int8_t x530 = -27;
	int8_t x531 = INT8_MIN;
	volatile int64_t x532 = 464138284501LL;

    t132 = (((x529|x530)<=x531)^x532);

    if (t132 != 464138284501LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x533 = 1573U;
	static int8_t x534 = INT8_MIN;
	static int8_t x535 = -1;

    t133 = (((x533|x534)<=x535)^x536);

    if (t133 != 3) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = 59;
	static int16_t x538 = INT16_MIN;
	static volatile int64_t x539 = INT64_MAX;
	static uint8_t x540 = 21U;

    t134 = (((x537|x538)<=x539)^x540);

    if (t134 != 20) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int64_t x542 = INT64_MIN;
	int32_t x544 = 308782;

    t135 = (((x541|x542)<=x543)^x544);

    if (t135 != 308782) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = UINT8_MAX;
	volatile int16_t x546 = -7;
	int32_t x547 = INT32_MAX;
	int16_t x548 = INT16_MIN;
	volatile int32_t t136 = 26;

    t136 = (((x545|x546)<=x547)^x548);

    if (t136 != -32767) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x549 = 586799461;
	static int16_t x552 = INT16_MIN;
	int32_t t137 = 256;

    t137 = (((x549|x550)<=x551)^x552);

    if (t137 != -32768) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = 2U;
	uint32_t x554 = 65334506U;
	int32_t x555 = INT32_MIN;
	volatile uint16_t x556 = UINT16_MAX;

    t138 = (((x553|x554)<=x555)^x556);

    if (t138 != 65534) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = 37U;
	uint16_t x558 = 5376U;
	int64_t x559 = INT64_MAX;
	uint32_t x560 = UINT32_MAX;
	uint32_t t139 = 52083U;

    t139 = (((x557|x558)<=x559)^x560);

    if (t139 != 4294967294U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x562 = INT8_MIN;
	int32_t t140 = INT32_MAX;

    t140 = (((x561|x562)<=x563)^x564);

    if (t140 != INT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x566 = 110U;
	volatile int32_t t141 = 182628;

    t141 = (((x565|x566)<=x567)^x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x569 = INT16_MIN;
	static volatile int8_t x570 = -1;
	static uint16_t x571 = UINT16_MAX;
	volatile int8_t x572 = -1;
	int32_t t142 = 51392;

    t142 = (((x569|x570)<=x571)^x572);

    if (t142 != -2) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x574 = -1;
	volatile int64_t x576 = INT64_MIN;

    t143 = (((x573|x574)<=x575)^x576);

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -25;
	uint8_t x578 = UINT8_MAX;
	int16_t x580 = -1;

    t144 = (((x577|x578)<=x579)^x580);

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = -1;
	static int64_t x583 = INT64_MIN;
	volatile int16_t x584 = 1;

    t145 = (((x581|x582)<=x583)^x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x585 = INT32_MIN;
	static int64_t x586 = -1LL;
	int32_t x587 = -1;
	int8_t x588 = -1;
	volatile int32_t t146 = -191790;

    t146 = (((x585|x586)<=x587)^x588);

    if (t146 != -2) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x589 = 712539225LL;
	uint8_t x590 = 1U;
	static int8_t x591 = INT8_MAX;
	int8_t x592 = 0;
	int32_t t147 = 4933;

    t147 = (((x589|x590)<=x591)^x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x593 = -7;
	int8_t x594 = -3;
	uint16_t x596 = 85U;
	int32_t t148 = 462787378;

    t148 = (((x593|x594)<=x595)^x596);

    if (t148 != 85) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x597 = 139926;

    t149 = (((x597|x598)<=x599)^x600);

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = UINT64_MAX;
	int8_t x602 = INT8_MIN;
	volatile uint64_t x603 = 36657029952LLU;
	int32_t x604 = -1;

    t150 = (((x601|x602)<=x603)^x604);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MAX;
	volatile int16_t x606 = 333;
	int32_t x607 = -18086;
	uint32_t x608 = UINT32_MAX;
	uint32_t t151 = UINT32_MAX;

    t151 = (((x605|x606)<=x607)^x608);

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = -1;
	uint16_t x611 = 2122U;
	int32_t x612 = -1;
	volatile int32_t t152 = -10901;

    t152 = (((x609|x610)<=x611)^x612);

    if (t152 != -2) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x613 = INT8_MIN;
	int16_t x614 = 0;
	int16_t x615 = INT16_MIN;
	uint32_t x616 = 1537150557U;

    t153 = (((x613|x614)<=x615)^x616);

    if (t153 != 1537150557U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x617 = -1;
	uint16_t x618 = 5196U;
	static int32_t x619 = INT32_MAX;
	int8_t x620 = INT8_MAX;
	volatile int32_t t154 = 15686041;

    t154 = (((x617|x618)<=x619)^x620);

    if (t154 != 126) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = -1;
	uint16_t x622 = 214U;
	static volatile uint16_t x623 = 19U;
	int32_t t155 = 26179203;

    t155 = (((x621|x622)<=x623)^x624);

    if (t155 != 9982) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = 214U;
	uint16_t x626 = UINT16_MAX;
	int16_t x627 = -1;
	int8_t x628 = -52;
	static volatile int32_t t156 = -6;

    t156 = (((x625|x626)<=x627)^x628);

    if (t156 != -52) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x631 = 27U;
	volatile uint64_t x632 = 417033727LLU;
	uint64_t t157 = 427009818517LLU;

    t157 = (((x629|x630)<=x631)^x632);

    if (t157 != 417033726LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MIN;
	volatile int32_t x634 = -1;
	volatile uint8_t x635 = 0U;
	int64_t x636 = -1LL;
	static volatile int64_t t158 = -407568379LL;

    t158 = (((x633|x634)<=x635)^x636);

    if (t158 != -2LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MIN;
	int64_t x638 = -1LL;
	volatile int32_t x639 = 41879;
	int32_t x640 = 3519608;

    t159 = (((x637|x638)<=x639)^x640);

    if (t159 != 3519609) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -19777919308770033LL;
	uint16_t x642 = 129U;
	volatile int32_t x643 = INT32_MAX;
	int16_t x644 = INT16_MIN;
	int32_t t160 = -1;

    t160 = (((x641|x642)<=x643)^x644);

    if (t160 != -32767) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x645 = -1LL;
	static volatile uint64_t x646 = 86LLU;
	volatile int32_t x647 = INT32_MIN;
	static int64_t x648 = INT64_MIN;
	volatile int64_t t161 = INT64_MIN;

    t161 = (((x645|x646)<=x647)^x648);

    if (t161 != INT64_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 27225191107082LLU;
	int8_t x650 = INT8_MIN;
	static int16_t x651 = -1;
	int8_t x652 = 1;
	static volatile int32_t t162 = -27313161;

    t162 = (((x649|x650)<=x651)^x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	int32_t x654 = 2430;
	int64_t t163 = 3226242LL;

    t163 = (((x653|x654)<=x655)^x656);

    if (t163 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = UINT8_MAX;
	int32_t x659 = -2993;
	int16_t x660 = -1;
	static volatile int32_t t164 = 32760;

    t164 = (((x657|x658)<=x659)^x660);

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MIN;
	static uint8_t x662 = 25U;
	uint16_t x664 = UINT16_MAX;
	static int32_t t165 = 219059;

    t165 = (((x661|x662)<=x663)^x664);

    if (t165 != 65535) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int64_t x665 = INT64_MAX;
	static volatile int16_t x666 = -1;
	static int32_t t166 = -26482018;

    t166 = (((x665|x666)<=x667)^x668);

    if (t166 != -127) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x670 = INT32_MIN;
	int64_t x671 = INT64_MIN;
	static int32_t x672 = INT32_MIN;
	volatile int32_t t167 = INT32_MIN;

    t167 = (((x669|x670)<=x671)^x672);

    if (t167 != INT32_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x673 = -1;
	static int32_t x674 = INT32_MIN;
	uint8_t x676 = UINT8_MAX;
	static int32_t t168 = 226;

    t168 = (((x673|x674)<=x675)^x676);

    if (t168 != 254) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x678 = INT8_MAX;
	uint8_t x680 = 19U;
	volatile int32_t t169 = 816;

    t169 = (((x677|x678)<=x679)^x680);

    if (t169 != 19) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x681 = INT64_MAX;
	int64_t x682 = -297523336564LL;
	static volatile int8_t x683 = -1;
	static int64_t x684 = INT64_MAX;
	int64_t t170 = 253674265858910225LL;

    t170 = (((x681|x682)<=x683)^x684);

    if (t170 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x686 = INT8_MIN;
	int16_t x687 = -1;
	volatile uint64_t x688 = UINT64_MAX;
	uint64_t t171 = 4257401614242376874LLU;

    t171 = (((x685|x686)<=x687)^x688);

    if (t171 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	uint64_t x690 = UINT64_MAX;
	static uint16_t x691 = UINT16_MAX;
	volatile int16_t x692 = INT16_MAX;
	static volatile int32_t t172 = 2280905;

    t172 = (((x689|x690)<=x691)^x692);

    if (t172 != 32767) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = -1;
	volatile int32_t x694 = -1;
	static int32_t x695 = INT32_MIN;
	uint8_t x696 = 0U;
	int32_t t173 = -234443;

    t173 = (((x693|x694)<=x695)^x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = 1LLU;
	int32_t x698 = INT32_MIN;
	uint64_t x699 = UINT64_MAX;
	int32_t x700 = INT32_MIN;

    t174 = (((x697|x698)<=x699)^x700);

    if (t174 != -2147483647) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x702 = -1LL;
	int16_t x703 = 3;
	int32_t x704 = 6971930;
	static int32_t t175 = -1620642;

    t175 = (((x701|x702)<=x703)^x704);

    if (t175 != 6971931) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MAX;
	uint16_t x706 = 2U;
	int8_t x707 = INT8_MIN;
	int32_t t176 = 63797;

    t176 = (((x705|x706)<=x707)^x708);

    if (t176 != 32767) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x709 = INT64_MAX;
	int16_t x710 = INT16_MIN;
	int64_t x711 = -1LL;
	uint16_t x712 = 6U;
	int32_t t177 = 178128;

    t177 = (((x709|x710)<=x711)^x712);

    if (t177 != 7) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x713 = INT32_MAX;
	static volatile int8_t x714 = -1;
	static volatile uint8_t x716 = UINT8_MAX;
	int32_t t178 = -30;

    t178 = (((x713|x714)<=x715)^x716);

    if (t178 != 254) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = -88431LL;
	int32_t x719 = INT32_MAX;
	static int16_t x720 = INT16_MIN;
	static volatile int32_t t179 = -509439097;

    t179 = (((x717|x718)<=x719)^x720);

    if (t179 != -32767) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 1652U;
	volatile int64_t x722 = INT64_MAX;
	static volatile uint64_t x723 = 1677776LLU;
	volatile int8_t x724 = -1;
	int32_t t180 = 1007;

    t180 = (((x721|x722)<=x723)^x724);

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x725 = UINT64_MAX;
	int16_t x726 = INT16_MIN;
	int32_t x727 = -1;
	int16_t x728 = INT16_MIN;
	int32_t t181 = 10292;

    t181 = (((x725|x726)<=x727)^x728);

    if (t181 != -32767) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = 39;
	int8_t x730 = -4;
	uint32_t x731 = 379U;
	int32_t x732 = 3315913;
	volatile int32_t t182 = -161761;

    t182 = (((x729|x730)<=x731)^x732);

    if (t182 != 3315913) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = UINT16_MAX;
	static uint8_t x734 = 2U;
	int64_t x735 = INT64_MIN;
	uint8_t x736 = 0U;
	int32_t t183 = 2;

    t183 = (((x733|x734)<=x735)^x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x737 = -1;
	static uint32_t x738 = UINT32_MAX;
	int32_t x739 = 1;
	int16_t x740 = -1;
	int32_t t184 = 616553837;

    t184 = (((x737|x738)<=x739)^x740);

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 11881256U;
	uint32_t x742 = 1392946700U;
	uint64_t x743 = 4LLU;
	int64_t x744 = -32485034578LL;

    t185 = (((x741|x742)<=x743)^x744);

    if (t185 != -32485034578LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = -42;
	int16_t x746 = INT16_MAX;
	int8_t x747 = -8;
	int8_t x748 = INT8_MIN;
	static volatile int32_t t186 = -258250480;

    t186 = (((x745|x746)<=x747)^x748);

    if (t186 != -128) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = 8;
	uint32_t x750 = 1931181022U;
	int64_t x751 = INT64_MIN;
	int8_t x752 = INT8_MIN;
	int32_t t187 = 373;

    t187 = (((x749|x750)<=x751)^x752);

    if (t187 != -128) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x754 = 5;
	int16_t x756 = -1;
	int32_t t188 = -1029734;

    t188 = (((x753|x754)<=x755)^x756);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	int32_t x758 = INT32_MIN;
	static int8_t x759 = INT8_MAX;
	static volatile int16_t x760 = INT16_MIN;
	static volatile int32_t t189 = -196950;

    t189 = (((x757|x758)<=x759)^x760);

    if (t189 != -32767) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x762 = UINT64_MAX;
	volatile int8_t x764 = INT8_MIN;
	int32_t t190 = -10;

    t190 = (((x761|x762)<=x763)^x764);

    if (t190 != -127) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MAX;
	int8_t x766 = -1;
	static int8_t x767 = 5;
	static int64_t x768 = -1LL;

    t191 = (((x765|x766)<=x767)^x768);

    if (t191 != -2LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x769 = 676348643U;
	int32_t x771 = -2395605;
	uint8_t x772 = UINT8_MAX;

    t192 = (((x769|x770)<=x771)^x772);

    if (t192 != 255) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x774 = 3;
	static int8_t x775 = INT8_MAX;
	int64_t x776 = -1LL;

    t193 = (((x773|x774)<=x775)^x776);

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MAX;
	int8_t x778 = INT8_MIN;
	static int64_t x779 = INT64_MIN;
	int32_t x780 = INT32_MAX;
	static volatile int32_t t194 = INT32_MAX;

    t194 = (((x777|x778)<=x779)^x780);

    if (t194 != INT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x782 = UINT64_MAX;
	static int64_t x784 = -48899707LL;
	int64_t t195 = 124204021248796LL;

    t195 = (((x781|x782)<=x783)^x784);

    if (t195 != -48899707LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x786 = -1LL;
	int32_t x787 = -1;
	int32_t t196 = -6653;

    t196 = (((x785|x786)<=x787)^x788);

    if (t196 != 4) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x789 = INT64_MAX;
	int8_t x790 = INT8_MIN;
	uint32_t x792 = UINT32_MAX;
	volatile uint32_t t197 = 7U;

    t197 = (((x789|x790)<=x791)^x792);

    if (t197 != 4294967294U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 100614U;
	uint64_t x795 = 39940LLU;

    t198 = (((x793|x794)<=x795)^x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = 141067716921566LL;
	static uint8_t x798 = 14U;
	static volatile int16_t x799 = 1059;
	uint8_t x800 = 0U;
	int32_t t199 = -96711;

    t199 = (((x797|x798)<=x799)^x800);

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

