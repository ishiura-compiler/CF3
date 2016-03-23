
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

int8_t x16 = INT8_MIN;
uint64_t x21 = UINT64_MAX;
int8_t x23 = INT8_MIN;
uint16_t x26 = UINT16_MAX;
static int16_t x32 = INT16_MIN;
int16_t x42 = INT16_MAX;
uint64_t t9 = 16163587LLU;
uint64_t x57 = UINT64_MAX;
volatile uint16_t x59 = 20454U;
int16_t x60 = -19;
static volatile int32_t t14 = 474;
static int16_t x65 = INT16_MIN;
int8_t x67 = -1;
static int8_t x76 = -1;
int16_t x81 = 96;
volatile int8_t x83 = -1;
volatile int32_t t19 = -32837818;
static int64_t x87 = INT64_MIN;
volatile uint16_t x90 = 1U;
int32_t x93 = -1;
int64_t x96 = 5928963LL;
volatile uint8_t x100 = 9U;
volatile int64_t t23 = -1214LL;
uint32_t x102 = 1458U;
uint32_t x104 = 127958953U;
int64_t x108 = INT64_MAX;
int16_t x109 = -1;
int64_t x114 = -655823021380LL;
static uint8_t x115 = 6U;
volatile int64_t t27 = -66LL;
static uint64_t x140 = 6908707693405066922LLU;
uint64_t x143 = 473800064085186832LLU;
volatile uint64_t t34 = 917LLU;
volatile int32_t t35 = 481271;
uint32_t x151 = UINT32_MAX;
static volatile int32_t x153 = -14376;
volatile int64_t x154 = -1LL;
uint64_t x158 = 36190664277LLU;
uint64_t x159 = 23106385765394462LLU;
int32_t x164 = INT32_MIN;
volatile uint32_t x166 = UINT32_MAX;
uint16_t x171 = UINT16_MAX;
volatile uint32_t x175 = UINT32_MAX;
int16_t x187 = -2;
int64_t x189 = -1LL;
static int32_t x193 = -37975;
int64_t x194 = INT64_MIN;
int64_t x197 = INT64_MAX;
static volatile uint32_t x199 = UINT32_MAX;
uint64_t x204 = UINT64_MAX;
int32_t x215 = -128361;
uint16_t x216 = UINT16_MAX;
uint32_t t51 = 257U;
int32_t x227 = -353;
static int64_t x231 = INT64_MAX;
volatile uint8_t x232 = 1U;
int64_t x234 = INT64_MAX;
uint8_t x235 = UINT8_MAX;
static int64_t x236 = INT64_MAX;
volatile int64_t t56 = 10LL;
int16_t x237 = INT16_MIN;
volatile int64_t x238 = INT64_MIN;
uint8_t x240 = UINT8_MAX;
int8_t x243 = 1;
uint16_t x246 = UINT16_MAX;
static int64_t x253 = INT64_MIN;
volatile int8_t x255 = -1;
volatile uint64_t t61 = 2030LLU;
int16_t x259 = INT16_MIN;
uint32_t x262 = 860U;
volatile uint32_t x267 = 211994U;
uint32_t x274 = 52574U;
static int8_t x276 = -1;
int8_t x279 = -1;
volatile uint16_t x283 = 770U;
int16_t x291 = INT16_MIN;
int32_t x292 = -19853103;
int64_t t71 = -877LL;
int32_t t73 = 501;
volatile uint32_t x307 = 4U;
uint64_t t74 = 188122709066LLU;
volatile uint32_t x310 = 1389U;
uint64_t t75 = 2485257LLU;
uint8_t x322 = 0U;
int32_t t77 = 326;
volatile uint8_t x334 = 1U;
static volatile uint64_t t79 = 45795265645LLU;
volatile int32_t x337 = 117581;
uint16_t x339 = UINT16_MAX;
volatile int32_t t80 = 6;
int64_t x349 = 92341LL;
static uint64_t x360 = 47269627325252LLU;
volatile uint64_t t85 = 64577690845LLU;
int16_t x361 = INT16_MIN;
int16_t x370 = INT16_MIN;
static int32_t x374 = INT32_MAX;
volatile int8_t x375 = INT8_MIN;
volatile int32_t x380 = 2585579;
static int16_t x400 = -1;
int16_t x401 = INT16_MIN;
int64_t x405 = -900279219122995419LL;
int32_t x409 = 15992;
int64_t x426 = -277387550260413LL;
uint16_t x429 = 19459U;
volatile uint16_t x431 = 5840U;
uint16_t x435 = 27U;
uint64_t t103 = 1682LLU;
int16_t x442 = INT16_MAX;
int64_t x456 = INT64_MAX;
static volatile uint64_t t109 = 10707643113567LLU;
static volatile int8_t x473 = 2;
int16_t x480 = INT16_MIN;
int64_t x481 = INT64_MAX;
static volatile int32_t x483 = INT32_MIN;
uint64_t x485 = 5596055942LLU;
uint8_t x490 = UINT8_MAX;
volatile uint16_t x492 = 0U;
uint64_t t116 = 7484LLU;
uint16_t x493 = UINT16_MAX;
int32_t x495 = INT32_MIN;
volatile uint64_t t117 = 1086387925690342LLU;
uint64_t t118 = 4575923183940628209LLU;
static int64_t x506 = INT64_MIN;
int8_t x511 = INT8_MIN;
static int8_t x512 = INT8_MIN;
uint64_t t121 = 4590318782542LLU;
int64_t x516 = INT64_MIN;
uint64_t t122 = 3331851891637894LLU;
volatile int16_t x518 = -16069;
uint32_t x522 = UINT32_MAX;
uint32_t x527 = 13U;
volatile uint64_t t125 = 85LLU;
uint8_t x532 = 1U;
int16_t x533 = -1;
int16_t x534 = -1;
uint16_t x535 = 60U;
int8_t x553 = INT8_MAX;
static int32_t x562 = 355;
volatile int8_t x574 = 0;
uint64_t x579 = UINT64_MAX;
uint16_t x582 = 170U;
volatile int64_t t139 = 1178LL;
volatile uint8_t x595 = 0U;
volatile int8_t x600 = INT8_MAX;
static uint64_t x604 = 3813163749063LLU;
uint8_t x609 = UINT8_MAX;
volatile int64_t x611 = -10506750LL;
static uint64_t x617 = 286356783819583LLU;
int16_t x623 = -27;
uint32_t t146 = 0U;
int8_t x640 = -1;
int32_t x642 = INT32_MIN;
int32_t x650 = -1;
static uint64_t x652 = UINT64_MAX;
uint64_t t150 = 27498LLU;
int8_t x658 = 2;
int64_t x659 = -37066LL;
int8_t x674 = 3;
static volatile int64_t t156 = -1001274206726079601LL;
int16_t x679 = -1;
volatile int32_t t159 = 1457;
uint8_t x697 = 1U;
int16_t x701 = INT16_MIN;
static int32_t x702 = INT32_MAX;
static uint32_t x704 = 6295626U;
uint64_t t163 = 291LLU;
uint32_t x715 = 236336U;
int8_t x717 = -1;
uint64_t x718 = UINT64_MAX;
volatile uint32_t t167 = 3775U;
int16_t x737 = -22;
static uint32_t x738 = 475U;
int8_t x743 = INT8_MIN;
uint64_t x746 = 213LLU;
uint64_t t171 = 2664245LLU;
int16_t x756 = INT16_MIN;
uint64_t x761 = 2989944892336LLU;
static uint32_t x765 = UINT32_MAX;
uint32_t x766 = 136U;
int8_t x774 = INT8_MIN;
static int8_t x778 = INT8_MIN;
uint32_t x782 = UINT32_MAX;
uint64_t t182 = 10801168820LLU;
volatile uint8_t x794 = 73U;
int32_t x795 = -3;
volatile int32_t t183 = 2485;
volatile int32_t x807 = 11997063;
uint32_t x810 = 107U;
int32_t x816 = INT32_MAX;
volatile uint32_t t187 = 18U;
int32_t x827 = INT32_MIN;
volatile uint32_t t191 = 29238103U;
int8_t x836 = 0;
int64_t x840 = 16570LL;
uint64_t t193 = 491956LLU;
volatile uint16_t x848 = 18U;
static volatile int64_t t195 = 16151112LL;
uint8_t x855 = 5U;
uint32_t t198 = 504208193U;
int8_t x863 = INT8_MIN;


void f0(void) {
    	int64_t x1 = -1LL;
	int8_t x2 = INT8_MIN;
	int16_t x3 = -1;
	static int8_t x4 = INT8_MIN;
	static int64_t t0 = -1666391635468449955LL;

    t0 = ((x1|(x2&x3))-x4);

    if (t0 != 127LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -606;
	int16_t x6 = INT16_MAX;
	static int64_t x7 = INT64_MIN;
	int32_t x8 = -1;
	volatile int64_t t1 = -16500941342704LL;

    t1 = ((x5|(x6&x7))-x8);

    if (t1 != -605LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x13 = 0;
	int64_t x14 = INT64_MIN;
	int8_t x15 = INT8_MIN;
	static int64_t t2 = 16734LL;

    t2 = ((x13|(x14&x15))-x16);

    if (t2 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x17 = 0U;
	volatile int16_t x18 = -1311;
	volatile int32_t x19 = -1;
	static volatile int16_t x20 = INT16_MAX;
	int32_t t3 = -867;

    t3 = ((x17|(x18&x19))-x20);

    if (t3 != -34078) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x22 = 2LLU;
	uint8_t x24 = 22U;
	static volatile uint64_t t4 = 1453LLU;

    t4 = ((x21|(x22&x23))-x24);

    if (t4 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x25 = UINT64_MAX;
	static int16_t x27 = -1;
	static int8_t x28 = -1;
	volatile uint64_t t5 = 424979733631LLU;

    t5 = ((x25|(x26&x27))-x28);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x29 = INT32_MAX;
	uint64_t x30 = 149379497273182LLU;
	uint32_t x31 = UINT32_MAX;
	static uint64_t t6 = 39509981LLU;

    t6 = ((x29|(x30&x31))-x32);

    if (t6 != 2147516415LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int8_t x33 = INT8_MIN;
	static int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MIN;
	int16_t x36 = INT16_MIN;
	volatile int32_t t7 = 503072236;

    t7 = ((x33|(x34&x35))-x36);

    if (t7 != 32640) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x37 = 227711U;
	int8_t x38 = INT8_MAX;
	int64_t x39 = -1LL;
	static int8_t x40 = -1;
	volatile int64_t t8 = 183705123LL;

    t8 = ((x37|(x38&x39))-x40);

    if (t8 != 227712LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x41 = 14U;
	uint64_t x43 = 6LLU;
	static int16_t x44 = INT16_MAX;

    t9 = ((x41|(x42&x43))-x44);

    if (t9 != 18446744073709518863LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MIN;
	volatile int8_t x46 = -1;
	uint32_t x47 = 127U;
	static volatile uint8_t x48 = UINT8_MAX;
	uint32_t t10 = 1395025U;

    t10 = ((x45|(x46&x47))-x48);

    if (t10 != 4294934400U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = 27938U;
	static volatile int32_t x50 = INT32_MIN;
	static uint32_t x51 = 1U;
	static int8_t x52 = INT8_MAX;
	volatile uint32_t t11 = 1206104960U;

    t11 = ((x49|(x50&x51))-x52);

    if (t11 != 27811U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x53 = 166770528U;
	static uint32_t x54 = 1159996936U;
	int16_t x55 = INT16_MIN;
	int8_t x56 = 0;
	static uint32_t t12 = 1U;

    t12 = ((x53|(x54&x55))-x56);

    if (t12 != 1307883360U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x58 = -61296655481LL;
	volatile uint64_t t13 = 4LLU;

    t13 = ((x57|(x58&x59))-x60);

    if (t13 != 18LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x61 = INT16_MIN;
	volatile int32_t x62 = INT32_MIN;
	volatile int8_t x63 = INT8_MIN;
	uint8_t x64 = 32U;

    t14 = ((x61|(x62&x63))-x64);

    if (t14 != -32800) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x66 = INT64_MIN;
	int16_t x68 = INT16_MIN;
	int64_t t15 = -751597778461028778LL;

    t15 = ((x65|(x66&x67))-x68);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MIN;
	uint16_t x70 = 112U;
	int16_t x71 = INT16_MIN;
	int32_t x72 = INT32_MIN;
	static int64_t t16 = -141242805942898654LL;

    t16 = ((x69|(x70&x71))-x72);

    if (t16 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = -1;
	int32_t x74 = INT32_MIN;
	volatile int32_t x75 = INT32_MIN;
	static int32_t t17 = -1754474;

    t17 = ((x73|(x74&x75))-x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x77 = 1;
	int16_t x78 = -1;
	uint8_t x79 = 123U;
	static uint64_t x80 = UINT64_MAX;
	uint64_t t18 = 226LLU;

    t18 = ((x77|(x78&x79))-x80);

    if (t18 != 124LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x82 = -1766673;
	int32_t x84 = 21178833;

    t19 = ((x81|(x82&x83))-x84);

    if (t19 != -22945506) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = 7649852961443550LL;
	int16_t x86 = 395;
	volatile int8_t x88 = 0;
	static int64_t t20 = -25634LL;

    t20 = ((x85|(x86&x87))-x88);

    if (t20 != 7649852961443550LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MIN;
	uint64_t x91 = UINT64_MAX;
	volatile int16_t x92 = -91;
	volatile uint64_t t21 = 369640506LLU;

    t21 = ((x89|(x90&x91))-x92);

    if (t21 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x94 = UINT16_MAX;
	uint64_t x95 = UINT64_MAX;
	uint64_t t22 = 1603870447LLU;

    t22 = ((x93|(x94&x95))-x96);

    if (t22 != 18446744073703622652LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = 43U;
	volatile int32_t x98 = INT32_MIN;
	volatile int64_t x99 = INT64_MIN;

    t23 = ((x97|(x98&x99))-x100);

    if (t23 != -9223372036854775774LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x101 = UINT16_MAX;
	int64_t x103 = 1565877479455484840LL;
	volatile int64_t t24 = 8043652755159LL;

    t24 = ((x101|(x102&x103))-x104);

    if (t24 != -127893418LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x105 = 765208695LLU;
	int8_t x106 = INT8_MIN;
	uint8_t x107 = 34U;
	volatile uint64_t t25 = 845524163745232946LLU;

    t25 = ((x105|(x106&x107))-x108);

    if (t25 != 9223372037619984504LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x110 = -1;
	volatile int8_t x111 = -1;
	volatile uint64_t x112 = 400033008375858237LLU;
	volatile uint64_t t26 = 10549977189466LLU;

    t26 = ((x109|(x110&x111))-x112);

    if (t26 != 18046711065333693378LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = INT32_MAX;
	static uint8_t x116 = 15U;

    t27 = ((x113|(x114&x115))-x116);

    if (t27 != 2147483632LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x117 = 445U;
	static volatile int32_t x118 = INT32_MIN;
	volatile int64_t x119 = -1LL;
	uint8_t x120 = UINT8_MAX;
	volatile int64_t t28 = 54817833LL;

    t28 = ((x117|(x118&x119))-x120);

    if (t28 != -2147483458LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MIN;
	uint8_t x123 = UINT8_MAX;
	uint32_t x124 = 4223U;
	static uint32_t t29 = 24477103U;

    t29 = ((x121|(x122&x123))-x124);

    if (t29 != 4294930433U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x125 = 0LLU;
	uint16_t x126 = 4U;
	int64_t x127 = INT64_MAX;
	volatile uint32_t x128 = UINT32_MAX;
	uint64_t t30 = 83079LLU;

    t30 = ((x125|(x126&x127))-x128);

    if (t30 != 18446744069414584325LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x129 = 889U;
	uint64_t x130 = 164650152813927LLU;
	int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MAX;
	volatile uint64_t t31 = 31218844924LLU;

    t31 = ((x129|(x130&x131))-x132);

    if (t31 != 164650152756090LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x133 = 98LLU;
	int16_t x134 = 77;
	static uint16_t x135 = 11U;
	int8_t x136 = -1;
	volatile uint64_t t32 = 15172433477759595LLU;

    t32 = ((x133|(x134&x135))-x136);

    if (t32 != 108LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x137 = 30;
	int16_t x138 = INT16_MIN;
	uint64_t x139 = UINT64_MAX;
	uint64_t t33 = 108363LLU;

    t33 = ((x137|(x138&x139))-x140);

    if (t33 != 11538036380304451956LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x141 = INT64_MIN;
	int16_t x142 = 7408;
	int8_t x144 = 5;

    t34 = ((x141|(x142&x143))-x144);

    if (t34 != 9223372036854781963LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x145 = UINT16_MAX;
	int32_t x146 = INT32_MIN;
	int8_t x147 = INT8_MAX;
	int16_t x148 = -2937;

    t35 = ((x145|(x146&x147))-x148);

    if (t35 != 68472) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = INT64_MIN;
	uint32_t x150 = UINT32_MAX;
	uint32_t x152 = UINT32_MAX;
	volatile int64_t t36 = INT64_MIN;

    t36 = ((x149|(x150&x151))-x152);

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x155 = INT16_MIN;
	static int8_t x156 = INT8_MIN;
	volatile int64_t t37 = 4676LL;

    t37 = ((x153|(x154&x155))-x156);

    if (t37 != -14248LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = INT8_MAX;
	static volatile uint16_t x160 = 56U;
	volatile uint64_t t38 = 2501971500589948LLU;

    t38 = ((x157|(x158&x159))-x160);

    if (t38 != 687906887LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x161 = INT64_MIN;
	int8_t x162 = INT8_MAX;
	int64_t x163 = 104208LL;
	int64_t t39 = 33380969317878841LL;

    t39 = ((x161|(x162&x163))-x164);

    if (t39 != -9223372034707292144LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x165 = 497685287LLU;
	int8_t x167 = INT8_MAX;
	static volatile uint64_t x168 = UINT64_MAX;
	uint64_t t40 = 4887022860316LLU;

    t40 = ((x165|(x166&x167))-x168);

    if (t40 != 497685376LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x169 = INT64_MIN;
	uint32_t x170 = UINT32_MAX;
	int64_t x172 = INT64_MIN;
	int64_t t41 = -156221494935813LL;

    t41 = ((x169|(x170&x171))-x172);

    if (t41 != 65535LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x173 = 2884887;
	volatile int32_t x174 = 55692;
	uint16_t x176 = UINT16_MAX;
	volatile uint32_t t42 = 3U;

    t42 = ((x173|(x174&x175))-x176);

    if (t42 != 2874784U) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint8_t x177 = 3U;
	static int32_t x178 = INT32_MAX;
	int16_t x179 = INT16_MIN;
	int32_t x180 = 18;
	int32_t t43 = 517992107;

    t43 = ((x177|(x178&x179))-x180);

    if (t43 != 2147450865) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x181 = -1;
	uint8_t x182 = 127U;
	static uint64_t x183 = 1440338654LLU;
	static volatile int8_t x184 = INT8_MIN;
	static uint64_t t44 = 111165881568217LLU;

    t44 = ((x181|(x182&x183))-x184);

    if (t44 != 127LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = 0;
	volatile uint8_t x186 = 0U;
	int8_t x188 = -1;
	volatile int32_t t45 = -157;

    t45 = ((x185|(x186&x187))-x188);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x190 = INT64_MAX;
	uint16_t x191 = 2U;
	int64_t x192 = INT64_MAX;
	int64_t t46 = INT64_MIN;

    t46 = ((x189|(x190&x191))-x192);

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x195 = UINT16_MAX;
	volatile uint32_t x196 = UINT32_MAX;
	int64_t t47 = -4378992731996005557LL;

    t47 = ((x193|(x194&x195))-x196);

    if (t47 != -4295005270LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x198 = INT8_MIN;
	volatile uint64_t x200 = 3LLU;
	uint64_t t48 = 213439858581779LLU;

    t48 = ((x197|(x198&x199))-x200);

    if (t48 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x201 = UINT32_MAX;
	static int32_t x202 = -1;
	uint64_t x203 = 1928166493LLU;
	volatile uint64_t t49 = 2387766314209088346LLU;

    t49 = ((x201|(x202&x203))-x204);

    if (t49 != 4294967296LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x209 = 1;
	int64_t x210 = INT64_MIN;
	uint8_t x211 = 32U;
	int16_t x212 = 4779;
	volatile int64_t t50 = 35835757LL;

    t50 = ((x209|(x210&x211))-x212);

    if (t50 != -4778LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x213 = UINT32_MAX;
	uint32_t x214 = UINT32_MAX;

    t51 = ((x213|(x214&x215))-x216);

    if (t51 != 4294901760U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x217 = UINT8_MAX;
	uint64_t x218 = 405926570305674LLU;
	volatile uint8_t x219 = UINT8_MAX;
	int16_t x220 = 1;
	uint64_t t52 = 3667LLU;

    t52 = ((x217|(x218&x219))-x220);

    if (t52 != 254LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x221 = INT32_MAX;
	int8_t x222 = INT8_MIN;
	uint16_t x223 = 3526U;
	uint16_t x224 = 14555U;
	int32_t t53 = 4052866;

    t53 = ((x221|(x222&x223))-x224);

    if (t53 != 2147469092) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x225 = -11072973105160322LL;
	volatile int16_t x226 = INT16_MIN;
	int16_t x228 = INT16_MIN;
	volatile int64_t t54 = -4LL;

    t54 = ((x225|(x226&x227))-x228);

    if (t54 != 8062LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x229 = 1U;
	int16_t x230 = INT16_MIN;
	volatile int64_t t55 = 11163771775LL;

    t55 = ((x229|(x230&x231))-x232);

    if (t55 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x233 = 51138453U;

    t56 = ((x233|(x234&x235))-x236);

    if (t56 != -9223372036803637248LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x239 = UINT64_MAX;
	volatile uint64_t t57 = 8LLU;

    t57 = ((x237|(x238&x239))-x240);

    if (t57 != 18446744073709518593LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x241 = UINT64_MAX;
	uint16_t x242 = UINT16_MAX;
	volatile int64_t x244 = -54LL;
	uint64_t t58 = 20LLU;

    t58 = ((x241|(x242&x243))-x244);

    if (t58 != 53LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x245 = UINT16_MAX;
	int32_t x247 = INT32_MIN;
	uint64_t x248 = 136020267192LLU;
	uint64_t t59 = 170503665036125229LLU;

    t59 = ((x245|(x246&x247))-x248);

    if (t59 != 18446743937689349959LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x249 = -1LL;
	uint8_t x250 = 41U;
	volatile uint16_t x251 = 77U;
	static int8_t x252 = INT8_MIN;
	static volatile int64_t t60 = 2342968325704465799LL;

    t60 = ((x249|(x250&x251))-x252);

    if (t60 != 127LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x254 = UINT8_MAX;
	uint64_t x256 = UINT64_MAX;

    t61 = ((x253|(x254&x255))-x256);

    if (t61 != 9223372036854776064LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x257 = 100U;
	int64_t x258 = INT64_MAX;
	volatile int8_t x260 = -1;
	volatile int64_t t62 = -10940301111269LL;

    t62 = ((x257|(x258&x259))-x260);

    if (t62 != 9223372036854743141LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x261 = -1;
	int32_t x263 = 3337885;
	int8_t x264 = INT8_MIN;
	static uint32_t t63 = 1U;

    t63 = ((x261|(x262&x263))-x264);

    if (t63 != 127U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x265 = INT64_MIN;
	int16_t x266 = -112;
	volatile int8_t x268 = INT8_MIN;
	volatile int64_t t64 = 161584125063LL;

    t64 = ((x265|(x266&x267))-x268);

    if (t64 != -9223372036854563696LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x269 = INT8_MIN;
	uint64_t x270 = 0LLU;
	uint64_t x271 = UINT64_MAX;
	volatile int8_t x272 = -1;
	static volatile uint64_t t65 = 96097256878411LLU;

    t65 = ((x269|(x270&x271))-x272);

    if (t65 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x273 = -55296;
	int64_t x275 = INT64_MIN;
	volatile int64_t t66 = -1LL;

    t66 = ((x273|(x274&x275))-x276);

    if (t66 != -55295LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x277 = INT64_MIN;
	uint32_t x278 = 24156U;
	int64_t x280 = -7272LL;
	volatile int64_t t67 = -8261LL;

    t67 = ((x277|(x278&x279))-x280);

    if (t67 != -9223372036854744380LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int8_t x281 = INT8_MIN;
	int8_t x282 = -3;
	static int32_t x284 = INT32_MIN;
	int32_t t68 = 6;

    t68 = ((x281|(x282&x283))-x284);

    if (t68 != 2147483520) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x285 = 66;
	uint8_t x286 = 30U;
	int32_t x287 = INT32_MAX;
	int64_t x288 = -1LL;
	static volatile int64_t t69 = -210107260871051212LL;

    t69 = ((x285|(x286&x287))-x288);

    if (t69 != 95LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x289 = UINT64_MAX;
	volatile uint32_t x290 = 141111U;
	uint64_t t70 = 3811137690286450LLU;

    t70 = ((x289|(x290&x291))-x292);

    if (t70 != 19853102LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x293 = 5U;
	uint8_t x294 = 4U;
	uint8_t x295 = 4U;
	volatile int64_t x296 = -1LL;

    t71 = ((x293|(x294&x295))-x296);

    if (t71 != 6LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x297 = -1820;
	int32_t x298 = -5847;
	int8_t x299 = INT8_MIN;
	static volatile int64_t x300 = 1088641LL;
	volatile int64_t t72 = 1LL;

    t72 = ((x297|(x298&x299))-x300);

    if (t72 != -1090205LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint16_t x301 = UINT16_MAX;
	volatile int8_t x302 = INT8_MAX;
	volatile uint16_t x303 = 17U;
	uint16_t x304 = 2U;

    t73 = ((x301|(x302&x303))-x304);

    if (t73 != 65533) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x305 = -18LL;
	uint64_t x306 = 12323357363540190LLU;
	int16_t x308 = INT16_MIN;

    t74 = ((x305|(x306&x307))-x308);

    if (t74 != 32750LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x309 = UINT64_MAX;
	int32_t x311 = INT32_MIN;
	static uint16_t x312 = 52U;

    t75 = ((x309|(x310&x311))-x312);

    if (t75 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x317 = -1;
	int8_t x318 = INT8_MIN;
	int16_t x319 = INT16_MIN;
	int64_t x320 = INT64_MAX;
	volatile int64_t t76 = INT64_MIN;

    t76 = ((x317|(x318&x319))-x320);

    if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x321 = UINT8_MAX;
	int32_t x323 = INT32_MIN;
	int16_t x324 = INT16_MIN;

    t77 = ((x321|(x322&x323))-x324);

    if (t77 != 33023) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x325 = -3;
	uint64_t x326 = UINT64_MAX;
	static int64_t x327 = INT64_MIN;
	volatile int8_t x328 = 1;
	uint64_t t78 = 250040923535618128LLU;

    t78 = ((x325|(x326&x327))-x328);

    if (t78 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x333 = 85560LLU;
	int16_t x335 = 53;
	int8_t x336 = -1;

    t79 = ((x333|(x334&x335))-x336);

    if (t79 != 85562LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x338 = INT32_MAX;
	static int16_t x340 = INT16_MAX;

    t80 = ((x337|(x338&x339))-x340);

    if (t80 != 98304) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x341 = INT64_MIN;
	static volatile int8_t x342 = 2;
	uint16_t x343 = UINT16_MAX;
	int16_t x344 = -7;
	int64_t t81 = 19623850495902LL;

    t81 = ((x341|(x342&x343))-x344);

    if (t81 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x345 = -521070;
	static int16_t x346 = INT16_MIN;
	int8_t x347 = INT8_MIN;
	int8_t x348 = -1;
	static volatile int32_t t82 = 27546;

    t82 = ((x345|(x346&x347))-x348);

    if (t82 != -29549) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x350 = 1301U;
	static int16_t x351 = -18;
	static int32_t x352 = -1;
	int64_t t83 = -95LL;

    t83 = ((x349|(x350&x351))-x352);

    if (t83 != 93622LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x353 = INT8_MIN;
	int32_t x354 = 0;
	int16_t x355 = 3;
	int16_t x356 = 100;
	int32_t t84 = -94530;

    t84 = ((x353|(x354&x355))-x356);

    if (t84 != -228) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x357 = INT64_MIN;
	uint8_t x358 = 4U;
	int16_t x359 = INT16_MIN;

    t85 = ((x357|(x358&x359))-x360);

    if (t85 != 9223324767227450556LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x362 = 45U;
	int8_t x363 = INT8_MAX;
	int16_t x364 = INT16_MIN;
	volatile int32_t t86 = -31177;

    t86 = ((x361|(x362&x363))-x364);

    if (t86 != 45) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x369 = -864;
	uint64_t x371 = 8749142357678111LLU;
	int32_t x372 = INT32_MAX;
	uint64_t t87 = 30166675LLU;

    t87 = ((x369|(x370&x371))-x372);

    if (t87 != 18446744071562067105LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x373 = INT16_MAX;
	uint64_t x376 = UINT64_MAX;
	uint64_t t88 = 523410442383614706LLU;

    t88 = ((x373|(x374&x375))-x376);

    if (t88 != 2147483648LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x377 = INT16_MIN;
	static uint32_t x378 = 153865U;
	static volatile int32_t x379 = INT32_MIN;
	uint32_t t89 = 458799U;

    t89 = ((x377|(x378&x379))-x380);

    if (t89 != 4292348949U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x381 = UINT8_MAX;
	int16_t x382 = INT16_MAX;
	static uint64_t x383 = 17500309017747LLU;
	static uint64_t x384 = 0LLU;
	volatile uint64_t t90 = 264365755016364362LLU;

    t90 = ((x381|(x382&x383))-x384);

    if (t90 != 21759LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x385 = UINT64_MAX;
	int16_t x386 = INT16_MIN;
	static int16_t x387 = 214;
	uint64_t x388 = UINT64_MAX;
	uint64_t t91 = 47183899596LLU;

    t91 = ((x385|(x386&x387))-x388);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint32_t x389 = 8069U;
	int32_t x390 = INT32_MAX;
	int64_t x391 = 1LL;
	int64_t x392 = INT64_MAX;
	volatile int64_t t92 = 5LL;

    t92 = ((x389|(x390&x391))-x392);

    if (t92 != -9223372036854767738LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x393 = UINT32_MAX;
	volatile int16_t x394 = -1;
	static volatile uint8_t x395 = 1U;
	int64_t x396 = INT64_MAX;
	volatile int64_t t93 = 15029153152703900LL;

    t93 = ((x393|(x394&x395))-x396);

    if (t93 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x397 = UINT8_MAX;
	static uint16_t x398 = 5632U;
	int32_t x399 = INT32_MIN;
	volatile int32_t t94 = 6;

    t94 = ((x397|(x398&x399))-x400);

    if (t94 != 256) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x402 = INT32_MAX;
	volatile int64_t x403 = 2880105570LL;
	static uint32_t x404 = 814U;
	volatile int64_t t95 = 17859605LL;

    t95 = ((x401|(x402&x403))-x404);

    if (t95 != -5836LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x406 = INT8_MAX;
	int16_t x407 = INT16_MAX;
	volatile int64_t x408 = 2922LL;
	int64_t t96 = 3583863117597LL;

    t96 = ((x405|(x406&x407))-x408);

    if (t96 != -900279219122998251LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x410 = INT8_MIN;
	static int32_t x411 = INT32_MIN;
	volatile uint8_t x412 = 8U;
	int32_t t97 = 9112;

    t97 = ((x409|(x410&x411))-x412);

    if (t97 != -2147467664) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x413 = 30321068790390878LLU;
	uint32_t x414 = 87U;
	volatile uint32_t x415 = UINT32_MAX;
	volatile uint16_t x416 = 8092U;
	volatile uint64_t t98 = 197216044500536LLU;

    t98 = ((x413|(x414&x415))-x416);

    if (t98 != 30321068790382787LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x421 = -671;
	int8_t x422 = INT8_MIN;
	int8_t x423 = 46;
	uint8_t x424 = 5U;
	volatile int32_t t99 = -734011;

    t99 = ((x421|(x422&x423))-x424);

    if (t99 != -676) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x425 = 14313227762LLU;
	int16_t x427 = -1;
	int16_t x428 = -1;
	uint64_t t100 = 1607571178528875334LLU;

    t100 = ((x425|(x426&x427))-x428);

    if (t100 != 18446466687503599604LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x430 = INT16_MIN;
	uint8_t x432 = UINT8_MAX;
	int32_t t101 = -17791;

    t101 = ((x429|(x430&x431))-x432);

    if (t101 != 19204) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x433 = 2795345926LL;
	uint8_t x434 = 18U;
	int64_t x436 = INT64_MAX;
	volatile int64_t t102 = 266159068LL;

    t102 = ((x433|(x434&x435))-x436);

    if (t102 != -9223372034059429865LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x437 = -1;
	static uint64_t x438 = UINT64_MAX;
	uint32_t x439 = 33541424U;
	static uint8_t x440 = 1U;

    t103 = ((x437|(x438&x439))-x440);

    if (t103 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x441 = 255U;
	static volatile int16_t x443 = INT16_MAX;
	int16_t x444 = 94;
	volatile uint32_t t104 = 84584776U;

    t104 = ((x441|(x442&x443))-x444);

    if (t104 != 32673U) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x445 = 698093U;
	uint64_t x446 = 2546307460680LLU;
	volatile int64_t x447 = -510141998452386707LL;
	static int64_t x448 = -1LL;
	uint64_t t105 = 148944399837563965LLU;

    t105 = ((x445|(x446&x447))-x448);

    if (t105 != 17491694LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint64_t x449 = UINT64_MAX;
	int32_t x450 = INT32_MIN;
	int64_t x451 = 102LL;
	int64_t x452 = INT64_MIN;
	volatile uint64_t t106 = 36553812LLU;

    t106 = ((x449|(x450&x451))-x452);

    if (t106 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x453 = -1LL;
	volatile int8_t x454 = -1;
	volatile uint16_t x455 = 2U;
	static int64_t t107 = INT64_MIN;

    t107 = ((x453|(x454&x455))-x456);

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x457 = -15663309545072933LL;
	int64_t x458 = -1LL;
	uint32_t x459 = 8U;
	static uint64_t x460 = UINT64_MAX;
	uint64_t t108 = 1307024718LLU;

    t108 = ((x457|(x458&x459))-x460);

    if (t108 != 18431080764164478684LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x461 = INT16_MAX;
	uint64_t x462 = 361945630901610LLU;
	uint8_t x463 = 6U;
	static int32_t x464 = -1;

    t109 = ((x461|(x462&x463))-x464);

    if (t109 != 32768LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x465 = INT8_MAX;
	uint64_t x466 = UINT64_MAX;
	volatile int32_t x467 = INT32_MIN;
	volatile int16_t x468 = INT16_MIN;
	volatile uint64_t t110 = 4LLU;

    t110 = ((x465|(x466&x467))-x468);

    if (t110 != 18446744071562100863LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x469 = -1;
	uint64_t x470 = UINT64_MAX;
	int64_t x471 = -1LL;
	uint64_t x472 = UINT64_MAX;
	uint64_t t111 = 1194272LLU;

    t111 = ((x469|(x470&x471))-x472);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x474 = -1;
	static int8_t x475 = INT8_MIN;
	int8_t x476 = -16;
	int32_t t112 = 949754;

    t112 = ((x473|(x474&x475))-x476);

    if (t112 != -110) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x477 = INT8_MAX;
	uint32_t x478 = 57175U;
	volatile uint8_t x479 = 9U;
	uint32_t t113 = 2U;

    t113 = ((x477|(x478&x479))-x480);

    if (t113 != 32895U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x482 = UINT64_MAX;
	static int32_t x484 = -59462275;
	static volatile uint64_t t114 = 1446967195LLU;

    t114 = ((x481|(x482&x483))-x484);

    if (t114 != 59462274LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x486 = -1;
	uint32_t x487 = 4U;
	static int64_t x488 = -1LL;
	volatile uint64_t t115 = 377776174LLU;

    t115 = ((x485|(x486&x487))-x488);

    if (t115 != 5596055943LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x489 = INT8_MAX;
	uint64_t x491 = 19656LLU;

    t116 = ((x489|(x490&x491))-x492);

    if (t116 != 255LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x494 = -1;
	uint64_t x496 = UINT64_MAX;

    t117 = ((x493|(x494&x495))-x496);

    if (t117 != 18446744071562133504LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x497 = -1;
	int16_t x498 = -1;
	int32_t x499 = -1;
	uint64_t x500 = 95128682506LLU;

    t118 = ((x497|(x498&x499))-x500);

    if (t118 != 18446743978580869109LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x501 = 2;
	uint16_t x502 = 2810U;
	int32_t x503 = 12992763;
	static int8_t x504 = INT8_MAX;
	int32_t t119 = 125;

    t119 = ((x501|(x502&x503))-x504);

    if (t119 != 123) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x505 = -1LL;
	int8_t x507 = INT8_MAX;
	uint32_t x508 = 14U;
	static int64_t t120 = 65371695107LL;

    t120 = ((x505|(x506&x507))-x508);

    if (t120 != -15LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x509 = 13063187861680LLU;
	static int32_t x510 = INT32_MAX;

    t121 = ((x509|(x510&x511))-x512);

    if (t121 != 13065290514480LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x513 = 1217LLU;
	volatile int32_t x514 = INT32_MIN;
	volatile int8_t x515 = -1;

    t122 = ((x513|(x514&x515))-x516);

    if (t122 != 9223372034707293377LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x517 = 0U;
	int16_t x519 = 0;
	int32_t x520 = INT32_MAX;
	volatile int32_t t123 = -41106;

    t123 = ((x517|(x518&x519))-x520);

    if (t123 != -2147483647) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x521 = UINT32_MAX;
	uint32_t x523 = UINT32_MAX;
	volatile int64_t x524 = 10818219904LL;
	int64_t t124 = -1235322LL;

    t124 = ((x521|(x522&x523))-x524);

    if (t124 != -6523252609LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x525 = INT16_MAX;
	uint8_t x526 = UINT8_MAX;
	uint64_t x528 = 1489485753LLU;

    t125 = ((x525|(x526&x527))-x528);

    if (t125 != 18446744072220098630LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x529 = 1U;
	static int32_t x530 = INT32_MAX;
	int16_t x531 = -1;
	static uint32_t t126 = 16686495U;

    t126 = ((x529|(x530&x531))-x532);

    if (t126 != 2147483646U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x536 = 2;
	static int32_t t127 = 1635;

    t127 = ((x533|(x534&x535))-x536);

    if (t127 != -3) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x537 = INT16_MIN;
	int8_t x538 = INT8_MAX;
	static int16_t x539 = -1;
	int16_t x540 = INT16_MAX;
	static volatile int32_t t128 = -442291;

    t128 = ((x537|(x538&x539))-x540);

    if (t128 != -65408) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x541 = -5765346938784LL;
	uint32_t x542 = UINT32_MAX;
	static volatile uint32_t x543 = 222886204U;
	volatile int64_t x544 = INT64_MIN;
	int64_t t129 = -14107560LL;

    t129 = ((x541|(x542&x543))-x544);

    if (t129 != 9223366271663077756LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x545 = INT16_MIN;
	volatile uint16_t x546 = 4U;
	int16_t x547 = -1;
	volatile int64_t x548 = -46145925LL;
	volatile int64_t t130 = 30441LL;

    t130 = ((x545|(x546&x547))-x548);

    if (t130 != 46113161LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x549 = -1;
	uint16_t x550 = UINT16_MAX;
	int16_t x551 = INT16_MIN;
	int64_t x552 = -429LL;
	int64_t t131 = 4293125LL;

    t131 = ((x549|(x550&x551))-x552);

    if (t131 != 428LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x554 = -79167770158912081LL;
	int16_t x555 = -1;
	uint64_t x556 = 2605LLU;
	volatile uint64_t t132 = 105921454LLU;

    t132 = ((x553|(x554&x555))-x556);

    if (t132 != 18367576303550637010LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x557 = INT8_MAX;
	int32_t x558 = INT32_MAX;
	int16_t x559 = -1;
	int8_t x560 = INT8_MAX;
	int32_t t133 = 0;

    t133 = ((x557|(x558&x559))-x560);

    if (t133 != 2147483520) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x561 = 980046U;
	uint32_t x563 = 53327U;
	volatile uint64_t x564 = UINT64_MAX;
	uint64_t t134 = 1686510500LLU;

    t134 = ((x561|(x562&x563))-x564);

    if (t134 != 980048LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x573 = INT64_MIN;
	int8_t x575 = INT8_MAX;
	int32_t x576 = -1;
	static int64_t t135 = -29566442168071LL;

    t135 = ((x573|(x574&x575))-x576);

    if (t135 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x577 = INT64_MAX;
	uint16_t x578 = UINT16_MAX;
	volatile int8_t x580 = -1;
	uint64_t t136 = 26LLU;

    t136 = ((x577|(x578&x579))-x580);

    if (t136 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x581 = 440U;
	int32_t x583 = 21617346;
	uint16_t x584 = UINT16_MAX;
	int32_t t137 = -44722612;

    t137 = ((x581|(x582&x583))-x584);

    if (t137 != -65093) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x585 = -1;
	static uint64_t x586 = 82666LLU;
	static volatile int16_t x587 = INT16_MAX;
	int16_t x588 = INT16_MIN;
	volatile uint64_t t138 = 0LLU;

    t138 = ((x585|(x586&x587))-x588);

    if (t138 != 32767LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x589 = -91LL;
	int16_t x590 = 2032;
	int16_t x591 = -1212;
	uint8_t x592 = 1U;

    t139 = ((x589|(x590&x591))-x592);

    if (t139 != -28LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x593 = 3U;
	uint16_t x594 = 164U;
	uint16_t x596 = UINT16_MAX;
	volatile int32_t t140 = -94597766;

    t140 = ((x593|(x594&x595))-x596);

    if (t140 != -65532) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x597 = -10;
	uint64_t x598 = 1027612567643862LLU;
	int16_t x599 = -18;
	volatile uint64_t t141 = 310308706LLU;

    t141 = ((x597|(x598&x599))-x600);

    if (t141 != 18446744073709551479LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x601 = -1;
	uint16_t x602 = 676U;
	int32_t x603 = INT32_MIN;
	volatile uint64_t t142 = 432825LLU;

    t142 = ((x601|(x602&x603))-x604);

    if (t142 != 18446740260545802552LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x610 = INT16_MAX;
	int32_t x612 = INT32_MAX;
	static volatile int64_t t143 = -20553704732993LL;

    t143 = ((x609|(x610&x611))-x612);

    if (t143 != -2147471616LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint32_t x618 = UINT32_MAX;
	int32_t x619 = -163;
	uint16_t x620 = UINT16_MAX;
	volatile uint64_t t144 = 882951935489LLU;

    t144 = ((x617|(x618&x619))-x620);

    if (t144 != 286358354460544LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x621 = -4409672;
	int8_t x622 = -29;
	uint16_t x624 = UINT16_MAX;
	int32_t t145 = 7691;

    t145 = ((x621|(x622&x623))-x624);

    if (t145 != -65542) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x625 = -1;
	uint32_t x626 = 51U;
	int16_t x627 = INT16_MIN;
	static int32_t x628 = -1;

    t146 = ((x625|(x626&x627))-x628);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x633 = INT8_MIN;
	static uint32_t x634 = UINT32_MAX;
	int32_t x635 = INT32_MIN;
	int8_t x636 = -1;
	volatile uint32_t t147 = 17U;

    t147 = ((x633|(x634&x635))-x636);

    if (t147 != 4294967169U) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x637 = -1;
	int16_t x638 = INT16_MAX;
	int16_t x639 = -1;
	volatile int32_t t148 = -176266874;

    t148 = ((x637|(x638&x639))-x640);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x641 = UINT8_MAX;
	volatile uint16_t x643 = UINT16_MAX;
	static volatile uint8_t x644 = 3U;
	volatile int32_t t149 = -825;

    t149 = ((x641|(x642&x643))-x644);

    if (t149 != 252) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x649 = UINT64_MAX;
	static int8_t x651 = INT8_MIN;

    t150 = ((x649|(x650&x651))-x652);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x653 = 0;
	static int32_t x654 = INT32_MAX;
	int8_t x655 = -1;
	int64_t x656 = INT64_MAX;
	int64_t t151 = -196875478LL;

    t151 = ((x653|(x654&x655))-x656);

    if (t151 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x657 = 2966U;
	static int64_t x660 = INT64_MAX;
	volatile int64_t t152 = 1LL;

    t152 = ((x657|(x658&x659))-x660);

    if (t152 != -9223372036854772841LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x661 = 574U;
	int64_t x662 = INT64_MIN;
	static int8_t x663 = 1;
	int16_t x664 = INT16_MIN;
	static volatile int64_t t153 = 248150538138090LL;

    t153 = ((x661|(x662&x663))-x664);

    if (t153 != 33342LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x665 = 5858U;
	int16_t x666 = -1;
	volatile uint64_t x667 = 1LLU;
	static uint32_t x668 = 234U;
	static uint64_t t154 = 108LLU;

    t154 = ((x665|(x666&x667))-x668);

    if (t154 != 5625LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x669 = -1;
	volatile int16_t x670 = INT16_MAX;
	static int32_t x671 = -1;
	static volatile int16_t x672 = -1;
	volatile int32_t t155 = -133;

    t155 = ((x669|(x670&x671))-x672);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x673 = -1LL;
	uint16_t x675 = UINT16_MAX;
	int16_t x676 = 86;

    t156 = ((x673|(x674&x675))-x676);

    if (t156 != -87LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x677 = -15;
	int8_t x678 = INT8_MAX;
	uint8_t x680 = 1U;
	static int32_t t157 = -39096;

    t157 = ((x677|(x678&x679))-x680);

    if (t157 != -2) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x681 = 118705128LLU;
	uint16_t x682 = UINT16_MAX;
	int64_t x683 = -1LL;
	volatile uint8_t x684 = UINT8_MAX;
	uint64_t t158 = 557966258960045796LLU;

    t158 = ((x681|(x682&x683))-x684);

    if (t158 != 118750976LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x685 = 1U;
	uint16_t x686 = 31309U;
	uint16_t x687 = UINT16_MAX;
	uint8_t x688 = 93U;

    t159 = ((x685|(x686&x687))-x688);

    if (t159 != 31216) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x689 = -2435741;
	int32_t x690 = 926980947;
	int8_t x691 = 1;
	uint32_t x692 = UINT32_MAX;
	static volatile uint32_t t160 = 20U;

    t160 = ((x689|(x690&x691))-x692);

    if (t160 != 4292531556U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x698 = INT32_MIN;
	volatile uint64_t x699 = UINT64_MAX;
	static volatile uint8_t x700 = UINT8_MAX;
	volatile uint64_t t161 = 9LLU;

    t161 = ((x697|(x698&x699))-x700);

    if (t161 != 18446744071562067714LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x703 = 7112356550699139LLU;
	uint64_t t162 = 407LLU;

    t162 = ((x701|(x702&x703))-x704);

    if (t162 != 18446744073703249977LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x709 = 59;
	int32_t x710 = INT32_MIN;
	int64_t x711 = INT64_MAX;
	uint64_t x712 = UINT64_MAX;

    t163 = ((x709|(x710&x711))-x712);

    if (t163 != 9223372034707292220LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x713 = -715371;
	static uint32_t x714 = 30166U;
	uint32_t x716 = 963U;
	static volatile uint32_t t164 = 358600075U;

    t164 = ((x713|(x714&x715))-x716);

    if (t164 != 4294250962U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x719 = 183U;
	int32_t x720 = INT32_MAX;
	volatile uint64_t t165 = 16130211753998LLU;

    t165 = ((x717|(x718&x719))-x720);

    if (t165 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x725 = -1;
	int32_t x726 = -1;
	uint8_t x727 = UINT8_MAX;
	static int64_t x728 = -1LL;
	volatile int64_t t166 = 89972456LL;

    t166 = ((x725|(x726&x727))-x728);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x729 = 0U;
	volatile uint8_t x730 = 48U;
	static volatile uint32_t x731 = 1U;
	uint32_t x732 = 1711U;

    t167 = ((x729|(x730&x731))-x732);

    if (t167 != 4294965585U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x733 = INT16_MIN;
	int32_t x734 = -1;
	static uint64_t x735 = 244LLU;
	uint64_t x736 = UINT64_MAX;
	volatile uint64_t t168 = 156LLU;

    t168 = ((x733|(x734&x735))-x736);

    if (t168 != 18446744073709519093LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x739 = UINT8_MAX;
	static uint16_t x740 = UINT16_MAX;
	volatile uint32_t t169 = 207687U;

    t169 = ((x737|(x738&x739))-x740);

    if (t169 != 4294901756U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x741 = INT64_MIN;
	int16_t x742 = INT16_MIN;
	static volatile int64_t x744 = -1LL;
	volatile int64_t t170 = 5245197017322993LL;

    t170 = ((x741|(x742&x743))-x744);

    if (t170 != -32767LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x745 = INT32_MIN;
	volatile int8_t x747 = -10;
	volatile uint32_t x748 = 147U;

    t171 = ((x745|(x746&x747))-x748);

    if (t171 != 18446744071562068033LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x749 = INT16_MIN;
	volatile int32_t x750 = 5397;
	int64_t x751 = 46946030LL;
	static int8_t x752 = 1;
	volatile int64_t t172 = 5462979486666LL;

    t172 = ((x749|(x750&x751))-x752);

    if (t172 != -27645LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x753 = 11;
	uint64_t x754 = UINT64_MAX;
	static int8_t x755 = INT8_MAX;
	volatile uint64_t t173 = 560042686645677305LLU;

    t173 = ((x753|(x754&x755))-x756);

    if (t173 != 32895LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x757 = UINT16_MAX;
	volatile uint8_t x758 = 44U;
	volatile uint16_t x759 = 805U;
	uint16_t x760 = 247U;
	static int32_t t174 = -30;

    t174 = ((x757|(x758&x759))-x760);

    if (t174 != 65288) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x762 = 6U;
	int32_t x763 = -223;
	int8_t x764 = INT8_MIN;
	volatile uint64_t t175 = 2038624454837752419LLU;

    t175 = ((x761|(x762&x763))-x764);

    if (t175 != 2989944892464LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x767 = UINT8_MAX;
	static int8_t x768 = INT8_MIN;
	volatile uint32_t t176 = 138U;

    t176 = ((x765|(x766&x767))-x768);

    if (t176 != 127U) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x769 = INT64_MIN;
	static uint32_t x770 = 180U;
	volatile uint16_t x771 = 15U;
	int16_t x772 = -1;
	int64_t t177 = 77668831483LL;

    t177 = ((x769|(x770&x771))-x772);

    if (t177 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x773 = INT8_MAX;
	static int8_t x775 = -1;
	int64_t x776 = INT64_MAX;
	int64_t t178 = INT64_MIN;

    t178 = ((x773|(x774&x775))-x776);

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x777 = -1;
	volatile int8_t x779 = INT8_MAX;
	static int64_t x780 = -1LL;
	volatile int64_t t179 = -25041659LL;

    t179 = ((x777|(x778&x779))-x780);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x781 = INT32_MIN;
	volatile int32_t x783 = 359869242;
	uint8_t x784 = UINT8_MAX;
	volatile uint32_t t180 = 44064812U;

    t180 = ((x781|(x782&x783))-x784);

    if (t180 != 2507352635U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x785 = 104U;
	uint8_t x786 = UINT8_MAX;
	int8_t x787 = 1;
	volatile int64_t x788 = -1LL;
	volatile int64_t t181 = -66454LL;

    t181 = ((x785|(x786&x787))-x788);

    if (t181 != 106LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x789 = INT64_MIN;
	int32_t x790 = 14;
	uint64_t x791 = 2780014LLU;
	int16_t x792 = INT16_MIN;

    t182 = ((x789|(x790&x791))-x792);

    if (t182 != 9223372036854808590LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x793 = INT16_MAX;
	uint8_t x796 = 12U;

    t183 = ((x793|(x794&x795))-x796);

    if (t183 != 32755) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x797 = UINT16_MAX;
	volatile int32_t x798 = -58;
	uint16_t x799 = 1857U;
	static uint32_t x800 = 42U;
	volatile uint32_t t184 = 77U;

    t184 = ((x797|(x798&x799))-x800);

    if (t184 != 65493U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x805 = 59254946U;
	int64_t x806 = INT64_MIN;
	int16_t x808 = INT16_MAX;
	volatile int64_t t185 = -33179343LL;

    t185 = ((x805|(x806&x807))-x808);

    if (t185 != 59222179LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x809 = -2919777815LL;
	volatile int16_t x811 = 1661;
	int16_t x812 = INT16_MIN;
	volatile int64_t t186 = 8439822892LL;

    t186 = ((x809|(x810&x811))-x812);

    if (t186 != -2919745047LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x813 = 19475U;
	int32_t x814 = INT32_MAX;
	int8_t x815 = 2;

    t187 = ((x813|(x814&x815))-x816);

    if (t187 != 2147503124U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x817 = UINT32_MAX;
	int16_t x818 = 0;
	static volatile int8_t x819 = INT8_MIN;
	volatile int8_t x820 = INT8_MIN;
	uint32_t t188 = 358U;

    t188 = ((x817|(x818&x819))-x820);

    if (t188 != 127U) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int32_t x821 = 223932642;
	uint32_t x822 = 900U;
	int8_t x823 = INT8_MAX;
	static uint64_t x824 = 58LLU;
	uint64_t t189 = 3508171603001LLU;

    t189 = ((x821|(x822&x823))-x824);

    if (t189 != 223932588LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x825 = INT64_MAX;
	volatile int16_t x826 = INT16_MIN;
	static volatile uint8_t x828 = 20U;
	volatile int64_t t190 = -253LL;

    t190 = ((x825|(x826&x827))-x828);

    if (t190 != -21LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x829 = UINT32_MAX;
	int16_t x830 = INT16_MAX;
	static int32_t x831 = -1;
	static uint32_t x832 = 453U;

    t191 = ((x829|(x830&x831))-x832);

    if (t191 != 4294966842U) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x833 = UINT32_MAX;
	int64_t x834 = -21723LL;
	static int64_t x835 = INT64_MIN;
	static int64_t t192 = -79852918780117LL;

    t192 = ((x833|(x834&x835))-x836);

    if (t192 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x837 = 103U;
	uint64_t x838 = 481277741382727116LLU;
	static volatile uint64_t x839 = UINT64_MAX;

    t193 = ((x837|(x838&x839))-x840);

    if (t193 != 481277741382710581LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x841 = 31;
	int16_t x842 = INT16_MIN;
	int64_t x843 = INT64_MAX;
	volatile int32_t x844 = -27448;
	int64_t t194 = -15304LL;

    t194 = ((x841|(x842&x843))-x844);

    if (t194 != 9223372036854770519LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x845 = UINT8_MAX;
	int8_t x846 = INT8_MIN;
	int64_t x847 = INT64_MIN;

    t195 = ((x845|(x846&x847))-x848);

    if (t195 != -9223372036854775571LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x849 = INT8_MIN;
	static int8_t x850 = -1;
	int16_t x851 = -129;
	static int8_t x852 = INT8_MAX;
	volatile int32_t t196 = 233;

    t196 = ((x849|(x850&x851))-x852);

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x853 = -383920133655589224LL;
	int64_t x854 = INT64_MIN;
	volatile int8_t x856 = -52;
	int64_t t197 = -18787125087732LL;

    t197 = ((x853|(x854&x855))-x856);

    if (t197 != -383920133655589172LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x857 = 25U;
	int32_t x858 = 16;
	static volatile int8_t x859 = 16;
	uint32_t x860 = 2020U;

    t198 = ((x857|(x858&x859))-x860);

    if (t198 != 4294965301U) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint16_t x861 = UINT16_MAX;
	uint8_t x862 = UINT8_MAX;
	static volatile int32_t x864 = 13;
	volatile int32_t t199 = -978443190;

    t199 = ((x861|(x862&x863))-x864);

    if (t199 != 65522) { NG(); } else { ; }
	
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

