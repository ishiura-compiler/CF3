
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

volatile int16_t x1 = -1;
int8_t x2 = INT8_MIN;
volatile uint16_t x12 = UINT16_MAX;
int8_t x14 = INT8_MIN;
volatile int8_t x16 = 5;
static volatile int32_t t3 = -353519330;
static int32_t x17 = INT32_MIN;
int64_t x20 = INT64_MIN;
static int16_t x27 = INT16_MAX;
static uint16_t x29 = 33U;
volatile int16_t x47 = INT16_MIN;
uint16_t x51 = 27U;
static uint16_t x53 = 23160U;
int32_t x56 = INT32_MIN;
static int16_t x58 = -1;
uint64_t x60 = UINT64_MAX;
int64_t x61 = INT64_MIN;
int64_t x62 = -1LL;
static int64_t x70 = 30899374LL;
int8_t x73 = -3;
int64_t x74 = INT64_MIN;
int8_t x80 = 5;
volatile int64_t t18 = -898021014LL;
static int64_t x90 = -423254927493436LL;
static volatile int64_t x97 = INT64_MAX;
uint64_t x98 = 662527421737559LLU;
volatile int32_t x103 = INT32_MIN;
int32_t x107 = -37649;
uint8_t x111 = 13U;
int64_t t27 = -74286067LL;
volatile uint32_t x118 = UINT32_MAX;
uint64_t x120 = 1161156279328LLU;
int16_t x121 = -948;
int8_t x125 = 1;
static int64_t x127 = -36546093849LL;
volatile int64_t t30 = -542LL;
volatile uint32_t x133 = UINT32_MAX;
volatile int32_t x134 = -467067768;
int16_t x136 = INT16_MIN;
static int32_t x137 = 99312084;
uint32_t t33 = 944601695U;
static int64_t x142 = INT64_MIN;
int64_t t34 = 136999784LL;
int8_t x154 = -28;
uint16_t x161 = UINT16_MAX;
uint32_t x167 = 30539111U;
int64_t x168 = INT64_MIN;
uint64_t t40 = 3691850203LLU;
uint16_t x172 = 126U;
int32_t t41 = -266;
int8_t x174 = 0;
static int32_t x182 = 5223040;
static volatile int8_t x184 = 4;
int64_t x192 = INT64_MAX;
static volatile uint32_t t47 = 559769176U;
int32_t x198 = INT32_MIN;
static int16_t x200 = 7370;
uint32_t x205 = 6U;
uint8_t x207 = 9U;
int16_t x208 = INT16_MAX;
volatile uint8_t x212 = 118U;
volatile int32_t t55 = 25114031;
volatile uint32_t t56 = 5U;
int16_t x234 = INT16_MIN;
volatile int64_t x235 = INT64_MAX;
volatile int8_t x237 = INT8_MAX;
volatile int32_t x238 = INT32_MIN;
int32_t x244 = -1;
uint32_t x250 = 19841923U;
int32_t x251 = INT32_MIN;
uint64_t x257 = UINT64_MAX;
int16_t x258 = INT16_MAX;
int32_t x264 = INT32_MAX;
uint32_t t64 = 442072312U;
int32_t x268 = -1;
volatile int8_t x269 = 3;
uint32_t x276 = UINT32_MAX;
int16_t x282 = -1;
volatile int32_t x284 = -77;
volatile int64_t x292 = 7439470505583LL;
volatile int64_t t69 = -235457469630LL;
int32_t x303 = 4144689;
int64_t x304 = INT64_MAX;
int16_t x311 = -1;
int32_t t75 = 1573;
static uint32_t x319 = 55365759U;
volatile int16_t x324 = -62;
int16_t x326 = -3;
int8_t x332 = -52;
volatile uint8_t x333 = 62U;
uint32_t t83 = 7267705U;
volatile int64_t x356 = -1LL;
uint16_t x362 = 22U;
static volatile uint8_t x364 = UINT8_MAX;
uint32_t x365 = 14U;
int64_t x371 = INT64_MAX;
int32_t x374 = -21946610;
int64_t x385 = -1LL;
int32_t x394 = -1;
int8_t x395 = 27;
volatile int64_t t95 = 475572LL;
int8_t x401 = INT8_MIN;
static int8_t x403 = INT8_MIN;
static int64_t x409 = INT64_MAX;
static volatile int64_t t99 = -224834464LL;
static uint8_t x414 = 0U;
int64_t x423 = 17734701825780077LL;
int64_t t102 = 3302370LL;
uint64_t t104 = 20544158102578682LLU;
uint16_t x439 = 0U;
volatile int64_t x441 = INT64_MIN;
int64_t x458 = -1LL;
int32_t x463 = INT32_MIN;
int8_t x467 = INT8_MIN;
int8_t x468 = -1;
uint64_t x485 = 3798611180LLU;
static uint16_t x488 = 1079U;
volatile uint64_t t115 = 18329395319LLU;
uint64_t t116 = 127LLU;
volatile int16_t x494 = -1;
static int64_t x512 = INT64_MAX;
static uint64_t t121 = 2712LLU;
int64_t x516 = -40558591140969LL;
volatile int8_t x518 = -10;
uint64_t t123 = 0LLU;
static int64_t x521 = INT64_MIN;
int16_t x522 = -1;
volatile int64_t x529 = INT64_MIN;
int64_t x531 = -1LL;
uint64_t t126 = 378227LLU;
uint32_t x533 = 14593319U;
int16_t x540 = INT16_MIN;
static volatile uint32_t t129 = 4029527U;
volatile uint32_t t130 = 151749U;
int32_t x560 = 20909;
int16_t x561 = -289;
int32_t t132 = -440702085;
volatile int32_t x565 = INT32_MIN;
static uint64_t x569 = 29444364LLU;
uint16_t x571 = UINT16_MAX;
uint64_t t134 = 381460LLU;
uint32_t x573 = UINT32_MAX;
int64_t x574 = INT64_MIN;
uint16_t x576 = UINT16_MAX;
int32_t x578 = INT32_MIN;
int32_t x580 = 26735086;
uint8_t x595 = 24U;
int16_t x601 = INT16_MIN;
volatile int32_t x604 = -137153;
int64_t x605 = INT64_MAX;
volatile uint32_t x610 = UINT32_MAX;
int64_t x611 = INT64_MIN;
int16_t x613 = INT16_MAX;
int16_t x616 = INT16_MIN;
int16_t x619 = -1;
static uint64_t t146 = 801044869LLU;
int32_t t148 = 64332;
volatile int64_t x629 = INT64_MIN;
int16_t x632 = INT16_MAX;
volatile uint16_t x633 = 7325U;
uint64_t t150 = 9467557369415LLU;
int64_t x648 = -1LL;
volatile int64_t x651 = 136442154710298LL;
static uint8_t x652 = 3U;
static uint64_t x654 = UINT64_MAX;
static int16_t x655 = INT16_MAX;
static uint16_t x663 = 10U;
static int64_t x668 = -1LL;
int16_t x670 = INT16_MIN;
uint64_t x672 = 215LLU;
uint32_t x677 = 33U;
int8_t x678 = -1;
int32_t x679 = INT32_MIN;
static volatile uint32_t t161 = 479U;
int16_t x681 = -11;
int64_t t163 = 1321806762833567LL;
int64_t x716 = -1LL;
volatile int64_t t170 = 11597618239894LL;
static int32_t x724 = -1;
int16_t x726 = -1;
int32_t x730 = INT32_MAX;
int64_t t174 = 1LL;
int16_t x738 = 6;
uint32_t x742 = UINT32_MAX;
volatile uint32_t t176 = 176527393U;
int16_t x748 = -13;
int16_t x750 = -4;
uint64_t t178 = 8379284435589187280LLU;
uint64_t t179 = 3LLU;
uint8_t x758 = UINT8_MAX;
int8_t x767 = -1;
uint64_t x770 = 125LLU;
int8_t x778 = -7;
static uint64_t x788 = 15280909LLU;
uint8_t x790 = 3U;
uint64_t t188 = 1264LLU;
volatile int16_t x793 = 5194;
int64_t x794 = INT64_MIN;
int64_t t189 = 50LL;
volatile int8_t x807 = -1;
volatile int32_t x810 = 566312928;
uint16_t x814 = UINT16_MAX;
volatile int16_t x816 = INT16_MIN;
uint64_t x817 = UINT64_MAX;
uint64_t x827 = 12462LLU;
volatile int8_t x828 = 0;
uint64_t t196 = 5433804701305LLU;
volatile uint64_t x829 = UINT64_MAX;
int8_t x830 = 43;
static int8_t x833 = INT8_MIN;
int16_t x840 = INT16_MIN;


void f0(void) {
    	int64_t x3 = INT64_MIN;
	uint64_t x4 = 506878278355LLU;
	volatile uint64_t t0 = 865177719825991LLU;

    t0 = ((x1&x2)/(x3^x4));

    if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MIN;
	int8_t x6 = INT8_MIN;
	static int32_t x7 = -26097328;
	volatile int32_t x8 = -592789530;
	volatile int32_t t1 = -993;

    t1 = ((x5&x6)/(x7^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 370;
	int64_t x10 = INT64_MAX;
	volatile int16_t x11 = INT16_MIN;
	volatile int64_t t2 = -6494LL;

    t2 = ((x9&x10)/(x11^x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	int32_t x15 = -1;

    t3 = ((x13&x14)/(x15^x16));

    if (t3 != 5461) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = -166650LL;
	uint64_t x19 = 54833057554LLU;
	uint64_t t4 = 162LLU;

    t4 = ((x17&x18)/(x19^x20));

    if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 1721654U;
	volatile int16_t x22 = INT16_MAX;
	volatile int64_t x23 = -1LL;
	volatile int16_t x24 = -9142;
	volatile int64_t t5 = -1LL;

    t5 = ((x21&x22)/(x23^x24));

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	int8_t x26 = INT8_MAX;
	int32_t x28 = -313332;
	volatile int32_t t6 = 15;

    t6 = ((x25&x26)/(x27^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int8_t x30 = INT8_MAX;
	int8_t x31 = -31;
	int8_t x32 = -1;
	static volatile int32_t t7 = 110;

    t7 = ((x29&x30)/(x31^x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = 107U;
	int32_t x38 = 76;
	int8_t x39 = INT8_MIN;
	int16_t x40 = INT16_MIN;
	static int32_t t8 = -1;

    t8 = ((x37&x38)/(x39^x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MIN;
	static volatile int32_t x42 = -451847;
	static volatile int16_t x43 = INT16_MIN;
	volatile int64_t x44 = -1981527690618440LL;
	volatile int64_t t9 = -30LL;

    t9 = ((x41&x42)/(x43^x44));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = UINT32_MAX;
	uint64_t x46 = 4175604936014LLU;
	static uint64_t x48 = UINT64_MAX;
	uint64_t t10 = 207022626LLU;

    t10 = ((x45&x46)/(x47^x48));

    if (t10 != 27366LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = -1;
	int8_t x50 = INT8_MIN;
	volatile int8_t x52 = -1;
	static int32_t t11 = 48;

    t11 = ((x49&x50)/(x51^x52));

    if (t11 != 4) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x54 = -1LL;
	int8_t x55 = -1;
	static int64_t t12 = -2766307787900265LL;

    t12 = ((x53&x54)/(x55^x56));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = -1;
	uint32_t x59 = 5871U;
	volatile uint64_t t13 = 16370LLU;

    t13 = ((x57&x58)/(x59^x60));

    if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x63 = INT64_MIN;
	int32_t x64 = INT32_MIN;
	int64_t t14 = 35951646168425268LL;

    t14 = ((x61&x62)/(x63^x64));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint64_t x65 = 587LLU;
	int8_t x66 = -1;
	volatile int8_t x67 = 16;
	static int8_t x68 = -1;
	uint64_t t15 = 3858LLU;

    t15 = ((x65&x66)/(x67^x68));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x69 = 0;
	uint8_t x71 = 33U;
	uint64_t x72 = 3344964713083LLU;
	uint64_t t16 = 26413294LLU;

    t16 = ((x69&x70)/(x71^x72));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x75 = 208712431123357984LLU;
	volatile int16_t x76 = -1;
	uint64_t t17 = 12456630937810199LLU;

    t17 = ((x73&x74)/(x75^x76));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x77 = UINT32_MAX;
	int64_t x78 = 29042522LL;
	static int8_t x79 = INT8_MIN;

    t18 = ((x77&x78)/(x79^x80));

    if (t18 != -236118LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x81 = INT32_MIN;
	static uint8_t x82 = UINT8_MAX;
	static uint32_t x83 = 2977541U;
	int8_t x84 = 23;
	volatile uint32_t t19 = 4275U;

    t19 = ((x81&x82)/(x83^x84));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x85 = 158021432U;
	int16_t x86 = INT16_MAX;
	int8_t x87 = 38;
	int16_t x88 = INT16_MIN;
	static uint32_t t20 = 48930430U;

    t20 = ((x85&x86)/(x87^x88));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x89 = 0U;
	uint16_t x91 = 33U;
	volatile int8_t x92 = INT8_MAX;
	volatile int64_t t21 = -66543960LL;

    t21 = ((x89&x90)/(x91^x92));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MAX;
	int64_t x95 = 637LL;
	int32_t x96 = -1;
	volatile int64_t t22 = -1LL;

    t22 = ((x93&x94)/(x95^x96));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int64_t x99 = -1LL;
	int32_t x100 = -44;
	volatile uint64_t t23 = 18679244837336203LLU;

    t23 = ((x97&x98)/(x99^x100));

    if (t23 != 15407614459013LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x101 = 56U;
	uint8_t x102 = UINT8_MAX;
	int16_t x104 = -1;
	volatile int32_t t24 = 3826;

    t24 = ((x101&x102)/(x103^x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x105 = 3976657U;
	uint32_t x106 = 1U;
	int8_t x108 = 5;
	uint32_t t25 = 1683398004U;

    t25 = ((x105&x106)/(x107^x108));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = 10433;
	uint16_t x110 = 26265U;
	volatile int16_t x112 = INT16_MIN;
	int32_t t26 = 84600901;

    t26 = ((x109&x110)/(x111^x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x113 = INT64_MIN;
	int16_t x114 = 163;
	int32_t x115 = INT32_MAX;
	volatile int16_t x116 = INT16_MIN;

    t27 = ((x113&x114)/(x115^x116));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x117 = -1;
	int64_t x119 = -1LL;
	uint64_t t28 = 24883421039LLU;

    t28 = ((x117&x118)/(x119^x120));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x122 = -1;
	static int16_t x123 = -739;
	volatile uint64_t x124 = 12550745515741925LLU;
	uint64_t t29 = 1403961528912LLU;

    t29 = ((x121&x122)/(x123^x124));

    if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x126 = INT16_MIN;
	int8_t x128 = 0;

    t30 = ((x125&x126)/(x127^x128));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = -1;
	uint32_t x130 = 1U;
	static int8_t x131 = 10;
	int8_t x132 = 0;
	uint32_t t31 = 16U;

    t31 = ((x129&x130)/(x131^x132));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint32_t x135 = 371742U;
	static uint32_t t32 = 440751U;

    t32 = ((x133&x134)/(x135^x136));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x138 = 0U;
	volatile int8_t x139 = 1;
	uint32_t x140 = 810U;

    t33 = ((x137&x138)/(x139^x140));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x141 = INT16_MIN;
	volatile int16_t x143 = 7837;
	int8_t x144 = INT8_MIN;

    t34 = ((x141&x142)/(x143^x144));

    if (t34 != 1166481856184997LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x145 = -1806;
	volatile int16_t x146 = INT16_MIN;
	static int64_t x147 = INT64_MAX;
	int16_t x148 = 961;
	static int64_t t35 = 5LL;

    t35 = ((x145&x146)/(x147^x148));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = INT64_MIN;
	int8_t x150 = -1;
	static int32_t x151 = INT32_MIN;
	uint8_t x152 = UINT8_MAX;
	volatile int64_t t36 = 1489LL;

    t36 = ((x149&x150)/(x151^x152));

    if (t36 != 4294967806LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x153 = INT64_MIN;
	uint64_t x155 = 192338LLU;
	static int64_t x156 = 28LL;
	uint64_t t37 = 3LLU;

    t37 = ((x153&x154)/(x155^x156));

    if (t37 != 47954974351153LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = INT16_MAX;
	int8_t x158 = INT8_MAX;
	uint8_t x159 = UINT8_MAX;
	int32_t x160 = INT32_MAX;
	volatile int32_t t38 = -436547;

    t38 = ((x157&x158)/(x159^x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x162 = -1;
	int64_t x163 = INT64_MIN;
	int8_t x164 = -1;
	volatile int64_t t39 = 780823LL;

    t39 = ((x161&x162)/(x163^x164));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x165 = 33317611LLU;
	static int32_t x166 = -3;

    t40 = ((x165&x166)/(x167^x168));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x169 = 38U;
	int16_t x170 = -5;
	int32_t x171 = 52;

    t41 = ((x169&x170)/(x171^x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x173 = 51099706;
	uint64_t x175 = 87089155806243LLU;
	int16_t x176 = -1;
	static volatile uint64_t t42 = 710125LLU;

    t42 = ((x173&x174)/(x175^x176));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x177 = -1465662842LL;
	int32_t x178 = INT32_MAX;
	static uint64_t x179 = 0LLU;
	volatile int16_t x180 = -1838;
	volatile uint64_t t43 = 820321717070188173LLU;

    t43 = ((x177&x178)/(x179^x180));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x181 = UINT8_MAX;
	int8_t x183 = INT8_MIN;
	volatile int32_t t44 = 103;

    t44 = ((x181&x182)/(x183^x184));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x185 = INT32_MIN;
	int8_t x186 = -1;
	int32_t x187 = 1371800;
	int8_t x188 = INT8_MIN;
	static int32_t t45 = 1;

    t45 = ((x185&x186)/(x187^x188));

    if (t45 != 1565) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x189 = INT32_MIN;
	static uint64_t x190 = 211LLU;
	static volatile uint32_t x191 = 51296U;
	volatile uint64_t t46 = 155542645725127LLU;

    t46 = ((x189&x190)/(x191^x192));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x193 = INT8_MIN;
	volatile int16_t x194 = 1;
	int16_t x195 = -1;
	uint32_t x196 = 165347U;

    t47 = ((x193&x194)/(x195^x196));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x197 = 19U;
	int16_t x199 = -11789;
	int32_t t48 = 1;

    t48 = ((x197&x198)/(x199^x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x201 = 2;
	uint32_t x202 = 3322531U;
	int8_t x203 = INT8_MIN;
	uint32_t x204 = 2581U;
	static uint32_t t49 = 1635985996U;

    t49 = ((x201&x202)/(x203^x204));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x206 = 3U;
	volatile uint32_t t50 = 166322785U;

    t50 = ((x205&x206)/(x207^x208));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x209 = 305U;
	static uint32_t x210 = 12757U;
	volatile uint32_t x211 = 42U;
	volatile uint32_t t51 = 473U;

    t51 = ((x209&x210)/(x211^x212));

    if (t51 != 2U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x213 = 50952414954127LLU;
	static int64_t x214 = INT64_MIN;
	volatile int16_t x215 = -651;
	int32_t x216 = -1;
	volatile uint64_t t52 = 8259922LLU;

    t52 = ((x213&x214)/(x215^x216));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x217 = -1;
	static volatile int32_t x218 = 669;
	int16_t x219 = 1;
	int8_t x220 = -1;
	volatile int32_t t53 = 21;

    t53 = ((x217&x218)/(x219^x220));

    if (t53 != -334) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x221 = UINT32_MAX;
	static volatile int8_t x222 = 15;
	static volatile int32_t x223 = INT32_MAX;
	uint64_t x224 = UINT64_MAX;
	uint64_t t54 = 32880361771663LLU;

    t54 = ((x221&x222)/(x223^x224));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x225 = UINT16_MAX;
	volatile int16_t x226 = INT16_MAX;
	static int16_t x227 = INT16_MAX;
	int32_t x228 = -1;

    t55 = ((x225&x226)/(x227^x228));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x229 = INT32_MIN;
	int32_t x230 = 18;
	static uint32_t x231 = 32594U;
	uint8_t x232 = 1U;

    t56 = ((x229&x230)/(x231^x232));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x233 = 1;
	volatile uint8_t x236 = UINT8_MAX;
	int64_t t57 = 6LL;

    t57 = ((x233&x234)/(x235^x236));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x239 = -7653;
	int16_t x240 = INT16_MIN;
	volatile int32_t t58 = -2040;

    t58 = ((x237&x238)/(x239^x240));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x241 = UINT64_MAX;
	uint8_t x242 = UINT8_MAX;
	static volatile uint64_t x243 = 1519LLU;
	uint64_t t59 = 7265049268624085LLU;

    t59 = ((x241&x242)/(x243^x244));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x245 = INT16_MIN;
	int8_t x246 = -1;
	uint16_t x247 = UINT16_MAX;
	static int16_t x248 = INT16_MAX;
	int32_t t60 = -296705;

    t60 = ((x245&x246)/(x247^x248));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x249 = 1653U;
	int64_t x252 = INT64_MIN;
	int64_t t61 = 10507232064089548LL;

    t61 = ((x249&x250)/(x251^x252));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x253 = INT8_MAX;
	int32_t x254 = INT32_MIN;
	int32_t x255 = 117;
	static volatile int32_t x256 = 65701;
	int32_t t62 = 0;

    t62 = ((x253&x254)/(x255^x256));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x259 = -1;
	int16_t x260 = INT16_MAX;
	volatile uint64_t t63 = 4376185LLU;

    t63 = ((x257&x258)/(x259^x260));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x261 = 386597U;
	int16_t x262 = 1;
	uint32_t x263 = 112U;

    t64 = ((x261&x262)/(x263^x264));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x265 = INT32_MIN;
	volatile int8_t x266 = INT8_MIN;
	int16_t x267 = INT16_MAX;
	volatile int32_t t65 = -6;

    t65 = ((x265&x266)/(x267^x268));

    if (t65 != 65536) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x270 = UINT64_MAX;
	uint64_t x271 = UINT64_MAX;
	int32_t x272 = INT32_MAX;
	volatile uint64_t t66 = 617880087045LLU;

    t66 = ((x269&x270)/(x271^x272));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x273 = INT32_MIN;
	int8_t x274 = INT8_MAX;
	uint32_t x275 = 250U;
	volatile uint32_t t67 = 2109452U;

    t67 = ((x273&x274)/(x275^x276));

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x281 = 276U;
	uint64_t x283 = 7068584152LLU;
	uint64_t t68 = 23LLU;

    t68 = ((x281&x282)/(x283^x284));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x289 = UINT8_MAX;
	int64_t x290 = INT64_MIN;
	int32_t x291 = INT32_MAX;

    t69 = ((x289&x290)/(x291^x292));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x293 = 3U;
	int32_t x294 = INT32_MAX;
	uint32_t x295 = UINT32_MAX;
	int16_t x296 = 78;
	uint32_t t70 = 31U;

    t70 = ((x293&x294)/(x295^x296));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x297 = INT64_MIN;
	int32_t x298 = INT32_MIN;
	volatile int32_t x299 = INT32_MAX;
	uint32_t x300 = UINT32_MAX;
	int64_t t71 = -165692410500LL;

    t71 = ((x297&x298)/(x299^x300));

    if (t71 != -4294967296LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x301 = UINT8_MAX;
	int32_t x302 = INT32_MAX;
	static int64_t t72 = 1LL;

    t72 = ((x301&x302)/(x303^x304));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int16_t x305 = INT16_MIN;
	int16_t x306 = INT16_MIN;
	uint16_t x307 = UINT16_MAX;
	int16_t x308 = INT16_MAX;
	int32_t t73 = 82;

    t73 = ((x305&x306)/(x307^x308));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x309 = INT32_MIN;
	int16_t x310 = 7579;
	int32_t x312 = INT32_MAX;
	volatile int32_t t74 = 17;

    t74 = ((x309&x310)/(x311^x312));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x313 = -47;
	uint8_t x314 = 2U;
	uint16_t x315 = 15913U;
	volatile uint16_t x316 = UINT16_MAX;

    t75 = ((x313&x314)/(x315^x316));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x317 = 3U;
	int8_t x318 = -1;
	int8_t x320 = -8;
	volatile uint32_t t76 = 66026466U;

    t76 = ((x317&x318)/(x319^x320));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x321 = INT8_MAX;
	int32_t x322 = -1;
	volatile int8_t x323 = -1;
	int32_t t77 = 1045;

    t77 = ((x321&x322)/(x323^x324));

    if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int8_t x325 = -1;
	int16_t x327 = -1;
	uint64_t x328 = 431500LLU;
	static uint64_t t78 = 208886769341502377LLU;

    t78 = ((x325&x326)/(x327^x328));

    if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x329 = UINT8_MAX;
	uint16_t x330 = 554U;
	int64_t x331 = INT64_MIN;
	volatile int64_t t79 = -1583782690532250LL;

    t79 = ((x329&x330)/(x331^x332));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x334 = UINT32_MAX;
	uint64_t x335 = 22843LLU;
	uint8_t x336 = UINT8_MAX;
	volatile uint64_t t80 = 1101759403LLU;

    t80 = ((x333&x334)/(x335^x336));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x337 = -63811LL;
	int8_t x338 = INT8_MIN;
	int64_t x339 = 15725LL;
	int8_t x340 = INT8_MIN;
	volatile int64_t t81 = 43122LL;

    t81 = ((x337&x338)/(x339^x340));

    if (t81 != 4LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x341 = INT16_MIN;
	uint32_t x342 = 17804196U;
	volatile int64_t x343 = INT64_MIN;
	volatile uint16_t x344 = UINT16_MAX;
	int64_t t82 = 3332421LL;

    t82 = ((x341&x342)/(x343^x344));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x345 = UINT32_MAX;
	int32_t x346 = INT32_MIN;
	static uint8_t x347 = UINT8_MAX;
	static int8_t x348 = INT8_MAX;

    t83 = ((x345&x346)/(x347^x348));

    if (t83 != 16777216U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x349 = -1;
	int64_t x350 = INT64_MAX;
	uint8_t x351 = 56U;
	int32_t x352 = INT32_MIN;
	int64_t t84 = 66539LL;

    t84 = ((x349&x350)/(x351^x352));

    if (t84 != -4294967408LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x353 = 668920408290280LLU;
	static volatile int32_t x354 = -1;
	int8_t x355 = INT8_MAX;
	volatile uint64_t t85 = 53LLU;

    t85 = ((x353&x354)/(x355^x356));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x357 = INT64_MAX;
	volatile uint8_t x358 = UINT8_MAX;
	int8_t x359 = INT8_MIN;
	static uint32_t x360 = UINT32_MAX;
	static volatile int64_t t86 = -601283461950304406LL;

    t86 = ((x357&x358)/(x359^x360));

    if (t86 != 2LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x361 = INT16_MAX;
	static uint16_t x363 = UINT16_MAX;
	static int32_t t87 = 66141614;

    t87 = ((x361&x362)/(x363^x364));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x366 = -1;
	uint16_t x367 = 3U;
	int16_t x368 = 1;
	volatile uint32_t t88 = 352351U;

    t88 = ((x365&x366)/(x367^x368));

    if (t88 != 7U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x369 = INT16_MAX;
	volatile uint32_t x370 = UINT32_MAX;
	volatile int32_t x372 = -1;
	int64_t t89 = -56LL;

    t89 = ((x369&x370)/(x371^x372));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x373 = INT32_MIN;
	int64_t x375 = INT64_MAX;
	uint32_t x376 = UINT32_MAX;
	volatile int64_t t90 = 660001417938457LL;

    t90 = ((x373&x374)/(x375^x376));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x377 = INT8_MAX;
	static int64_t x378 = 6348260026842565LL;
	uint8_t x379 = UINT8_MAX;
	int16_t x380 = INT16_MIN;
	volatile int64_t t91 = 1LL;

    t91 = ((x377&x378)/(x379^x380));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x381 = 2724330LLU;
	int16_t x382 = -1;
	volatile int32_t x383 = INT32_MIN;
	volatile int16_t x384 = -1584;
	uint64_t t92 = 1049777874920LLU;

    t92 = ((x381&x382)/(x383^x384));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int16_t x386 = 2;
	volatile uint64_t x387 = 8153070713310227LLU;
	uint8_t x388 = UINT8_MAX;
	volatile uint64_t t93 = 4330324712475890LLU;

    t93 = ((x385&x386)/(x387^x388));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x389 = INT8_MIN;
	static int16_t x390 = 1309;
	int64_t x391 = INT64_MIN;
	volatile int8_t x392 = INT8_MIN;
	int64_t t94 = 2677476682983462LL;

    t94 = ((x389&x390)/(x391^x392));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x393 = INT32_MIN;
	int64_t x396 = INT64_MIN;

    t95 = ((x393&x394)/(x395^x396));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x397 = 421001U;
	uint16_t x398 = 713U;
	int16_t x399 = INT16_MAX;
	uint32_t x400 = UINT32_MAX;
	uint32_t t96 = 64U;

    t96 = ((x397&x398)/(x399^x400));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x402 = INT8_MAX;
	int64_t x404 = INT64_MAX;
	int64_t t97 = -1872426231LL;

    t97 = ((x401&x402)/(x403^x404));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x405 = -1;
	static int64_t x406 = INT64_MIN;
	int64_t x407 = 1LL;
	int64_t x408 = 0LL;
	volatile int64_t t98 = INT64_MIN;

    t98 = ((x405&x406)/(x407^x408));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x410 = -1;
	volatile uint8_t x411 = UINT8_MAX;
	int64_t x412 = -1495922769900LL;

    t99 = ((x409&x410)/(x411^x412));

    if (t99 != -6165673LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x413 = 60274U;
	int16_t x415 = -1;
	uint8_t x416 = 5U;
	static volatile uint32_t t100 = 967233565U;

    t100 = ((x413&x414)/(x415^x416));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x417 = 0;
	static int64_t x418 = INT64_MAX;
	static int8_t x419 = INT8_MIN;
	static volatile int16_t x420 = INT16_MIN;
	static volatile int64_t t101 = 1739053531266773LL;

    t101 = ((x417&x418)/(x419^x420));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x421 = UINT16_MAX;
	static int32_t x422 = INT32_MIN;
	static int8_t x424 = INT8_MAX;

    t102 = ((x421&x422)/(x423^x424));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x425 = 203647U;
	int16_t x426 = -1;
	uint32_t x427 = 9662U;
	volatile int8_t x428 = INT8_MAX;
	volatile uint32_t t103 = 252712U;

    t103 = ((x425&x426)/(x427^x428));

    if (t103 != 21U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x429 = 1661758230371607LLU;
	volatile int32_t x430 = INT32_MAX;
	uint16_t x431 = 7874U;
	uint32_t x432 = 6875U;

    t104 = ((x429&x430)/(x431^x432));

    if (t104 != 975987LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x437 = -5726326;
	int64_t x438 = -1LL;
	volatile int16_t x440 = -7;
	int64_t t105 = 2655278078LL;

    t105 = ((x437&x438)/(x439^x440));

    if (t105 != 818046LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x442 = UINT16_MAX;
	int8_t x443 = INT8_MIN;
	static uint32_t x444 = 1439U;
	volatile int64_t t106 = -2119LL;

    t106 = ((x441&x442)/(x443^x444));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x445 = INT64_MIN;
	int32_t x446 = INT32_MAX;
	volatile uint32_t x447 = 577854U;
	volatile int64_t x448 = 328562721208LL;
	volatile int64_t t107 = 168572441559654LL;

    t107 = ((x445&x446)/(x447^x448));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x453 = -26;
	int32_t x454 = INT32_MIN;
	int8_t x455 = INT8_MIN;
	uint8_t x456 = UINT8_MAX;
	volatile int32_t t108 = 7859677;

    t108 = ((x453&x454)/(x455^x456));

    if (t108 != 16647160) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x457 = INT64_MIN;
	int64_t x459 = INT64_MIN;
	int64_t x460 = -1LL;
	int64_t t109 = 40946LL;

    t109 = ((x457&x458)/(x459^x460));

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x461 = 14880421U;
	int32_t x462 = -1;
	int16_t x464 = INT16_MAX;
	uint32_t t110 = 48909U;

    t110 = ((x461&x462)/(x463^x464));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x465 = -54;
	uint16_t x466 = 2868U;
	volatile int32_t t111 = 10356852;

    t111 = ((x465&x466)/(x467^x468));

    if (t111 != 22) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x473 = INT64_MIN;
	static int8_t x474 = INT8_MAX;
	int8_t x475 = INT8_MIN;
	volatile uint8_t x476 = 6U;
	volatile int64_t t112 = 1022500826610292LL;

    t112 = ((x473&x474)/(x475^x476));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x477 = UINT64_MAX;
	int16_t x478 = -1;
	static int64_t x479 = INT64_MIN;
	static uint64_t x480 = 1177958106LLU;
	uint64_t t113 = 3791059LLU;

    t113 = ((x477&x478)/(x479^x480));

    if (t113 != 1LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x481 = 3U;
	int32_t x482 = -1;
	static int64_t x483 = -48084213LL;
	int64_t x484 = -1LL;
	volatile int64_t t114 = 87759LL;

    t114 = ((x481&x482)/(x483^x484));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x486 = -1;
	static volatile int8_t x487 = -1;

    t115 = ((x485&x486)/(x487^x488));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x489 = -1;
	volatile uint64_t x490 = UINT64_MAX;
	volatile uint64_t x491 = UINT64_MAX;
	uint8_t x492 = UINT8_MAX;

    t116 = ((x489&x490)/(x491^x492));

    if (t116 != 1LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x493 = 83U;
	uint64_t x495 = 15676756006264LLU;
	int16_t x496 = INT16_MIN;
	uint64_t t117 = 201350824862LLU;

    t117 = ((x493&x494)/(x495^x496));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x497 = UINT8_MAX;
	int8_t x498 = 0;
	int8_t x499 = INT8_MIN;
	int16_t x500 = INT16_MAX;
	volatile int32_t t118 = 1336;

    t118 = ((x497&x498)/(x499^x500));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x501 = -1;
	volatile int64_t x502 = INT64_MIN;
	int16_t x503 = -50;
	int16_t x504 = INT16_MAX;
	volatile int64_t t119 = -57479LL;

    t119 = ((x501&x502)/(x503^x504));

    if (t119 != 281896513856009LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x505 = -1;
	volatile uint64_t x506 = UINT64_MAX;
	uint8_t x507 = UINT8_MAX;
	int8_t x508 = INT8_MIN;
	uint64_t t120 = 7126848815LLU;

    t120 = ((x505&x506)/(x507^x508));

    if (t120 != 1LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x509 = INT16_MAX;
	static volatile uint64_t x510 = 799LLU;
	static int8_t x511 = INT8_MAX;

    t121 = ((x509&x510)/(x511^x512));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x513 = INT32_MIN;
	int32_t x514 = 39838;
	int32_t x515 = INT32_MAX;
	int64_t t122 = -3473567194252056406LL;

    t122 = ((x513&x514)/(x515^x516));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x517 = -1;
	static volatile int8_t x519 = INT8_MIN;
	uint64_t x520 = UINT64_MAX;

    t123 = ((x517&x518)/(x519^x520));

    if (t123 != 145249953336295681LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x523 = -1;
	static int32_t x524 = INT32_MIN;
	int64_t t124 = 21LL;

    t124 = ((x521&x522)/(x523^x524));

    if (t124 != -4294967298LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x525 = -36LL;
	static volatile int32_t x526 = -3;
	int32_t x527 = -1;
	int64_t x528 = INT64_MIN;
	volatile int64_t t125 = -3156981762177000201LL;

    t125 = ((x525&x526)/(x527^x528));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x530 = 255101775152143615LLU;
	int64_t x532 = 92LL;

    t126 = ((x529&x530)/(x531^x532));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x534 = 5;
	int64_t x535 = -45206401487132LL;
	uint16_t x536 = 12U;
	int64_t t127 = -19235642147LL;

    t127 = ((x533&x534)/(x535^x536));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x537 = INT64_MIN;
	volatile int8_t x538 = INT8_MIN;
	static int32_t x539 = INT32_MIN;
	volatile int64_t t128 = 1696361376836328067LL;

    t128 = ((x537&x538)/(x539^x540));

    if (t128 != -4295032833LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x541 = -1;
	int32_t x542 = INT32_MIN;
	static int8_t x543 = 0;
	uint32_t x544 = 1U;

    t129 = ((x541&x542)/(x543^x544));

    if (t129 != 2147483648U) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x549 = 24;
	static volatile int16_t x550 = INT16_MIN;
	volatile uint32_t x551 = UINT32_MAX;
	volatile int32_t x552 = INT32_MAX;

    t130 = ((x549&x550)/(x551^x552));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x557 = INT64_MIN;
	uint32_t x558 = 1524358532U;
	volatile int32_t x559 = INT32_MIN;
	int64_t t131 = 11429196LL;

    t131 = ((x557&x558)/(x559^x560));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x562 = INT8_MIN;
	int8_t x563 = INT8_MIN;
	int16_t x564 = INT16_MAX;

    t132 = ((x561&x562)/(x563^x564));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x566 = -1;
	volatile int16_t x567 = INT16_MIN;
	int8_t x568 = -1;
	int32_t t133 = -41957527;

    t133 = ((x565&x566)/(x567^x568));

    if (t133 != -65538) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int16_t x570 = -1;
	static int64_t x572 = -167074794LL;

    t134 = ((x569&x570)/(x571^x572));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x575 = -26943;
	volatile int64_t t135 = 136331488901LL;

    t135 = ((x573&x574)/(x575^x576));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x577 = -219;
	uint8_t x579 = 102U;
	volatile int32_t t136 = 7221;

    t136 = ((x577&x578)/(x579^x580));

    if (t136 != -80) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x581 = 167609875145205LLU;
	static int16_t x582 = INT16_MIN;
	volatile int64_t x583 = 3177188262142032LL;
	int64_t x584 = INT64_MIN;
	uint64_t t137 = 7615091470064LLU;

    t137 = ((x581&x582)/(x583^x584));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x585 = -191091322265LL;
	int16_t x586 = -1;
	static int16_t x587 = INT16_MIN;
	int32_t x588 = INT32_MAX;
	volatile int64_t t138 = -320735LL;

    t138 = ((x585&x586)/(x587^x588));

    if (t138 != 88LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x589 = -1;
	uint16_t x590 = UINT16_MAX;
	uint64_t x591 = 118797010065683LLU;
	int8_t x592 = 2;
	volatile uint64_t t139 = 172108LLU;

    t139 = ((x589&x590)/(x591^x592));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x593 = -1352;
	int16_t x594 = -15455;
	int16_t x596 = -1;
	int32_t t140 = -884775;

    t140 = ((x593&x594)/(x595^x596));

    if (t140 != 628) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x597 = 762190218742052647LL;
	int16_t x598 = INT16_MIN;
	volatile uint8_t x599 = 27U;
	uint8_t x600 = UINT8_MAX;
	static volatile int64_t t141 = 730329365776148445LL;

    t141 = ((x597&x598)/(x599^x600));

    if (t141 != 3342939555886133LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x602 = -333259664515958888LL;
	int16_t x603 = 21;
	static volatile int64_t t142 = 204941661LL;

    t142 = ((x601&x602)/(x603^x604));

    if (t142 != 2429466695700LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x606 = -3;
	volatile int16_t x607 = -1;
	static int32_t x608 = INT32_MIN;
	int64_t t143 = -76961LL;

    t143 = ((x605&x606)/(x607^x608));

    if (t143 != 4294967297LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x609 = INT64_MIN;
	volatile uint16_t x612 = 11U;
	static int64_t t144 = -1LL;

    t144 = ((x609&x610)/(x611^x612));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x614 = -184258;
	static uint8_t x615 = 0U;
	int32_t t145 = -809;

    t145 = ((x613&x614)/(x615^x616));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x617 = INT8_MIN;
	int32_t x618 = INT32_MIN;
	uint64_t x620 = 796LLU;

    t146 = ((x617&x618)/(x619^x620));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x621 = INT64_MAX;
	uint32_t x622 = 7209384U;
	int32_t x623 = -1;
	static int8_t x624 = -3;
	static int64_t t147 = 567LL;

    t147 = ((x621&x622)/(x623^x624));

    if (t147 != 3604692LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x625 = INT32_MIN;
	volatile uint16_t x626 = UINT16_MAX;
	int32_t x627 = 229498;
	static uint16_t x628 = 11575U;

    t148 = ((x625&x626)/(x627^x628));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x630 = INT64_MIN;
	int16_t x631 = 4;
	volatile int64_t t149 = -2268752364086486LL;

    t149 = ((x629&x630)/(x631^x632));

    if (t149 != -281517932938216LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x634 = UINT64_MAX;
	int64_t x635 = INT64_MIN;
	int32_t x636 = INT32_MAX;

    t150 = ((x633&x634)/(x635^x636));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x637 = UINT8_MAX;
	volatile int32_t x638 = INT32_MAX;
	uint16_t x639 = 39U;
	int64_t x640 = INT64_MIN;
	static volatile int64_t t151 = 4037360LL;

    t151 = ((x637&x638)/(x639^x640));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x641 = 137716;
	uint32_t x642 = 7228U;
	int64_t x643 = -1LL;
	uint32_t x644 = 360U;
	volatile int64_t t152 = 10346111LL;

    t152 = ((x641&x642)/(x643^x644));

    if (t152 != -17LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x645 = INT64_MAX;
	volatile int32_t x646 = -610983678;
	int32_t x647 = 57547;
	static volatile int64_t t153 = -6455440LL;

    t153 = ((x645&x646)/(x647^x648));

    if (t153 != -160272677351841LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x649 = 1855216550LLU;
	volatile uint64_t x650 = 114714278781034LLU;
	static volatile uint64_t t154 = 780313031LLU;

    t154 = ((x649&x650)/(x651^x652));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x653 = 3799LL;
	int32_t x656 = 87;
	uint64_t t155 = 27992612977LLU;

    t155 = ((x653&x654)/(x655^x656));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x657 = 2859;
	uint64_t x658 = 16200093353832944LLU;
	uint8_t x659 = 3U;
	int16_t x660 = INT16_MAX;
	uint64_t t156 = 239LLU;

    t156 = ((x657&x658)/(x659^x660));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x661 = INT32_MIN;
	static uint64_t x662 = UINT64_MAX;
	volatile uint64_t x664 = 559064LLU;
	static uint64_t t157 = 3176077853703LLU;

    t157 = ((x661&x662)/(x663^x664));

    if (t157 != 32996118598717LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x665 = INT8_MIN;
	uint16_t x666 = 250U;
	int8_t x667 = 0;
	volatile int64_t t158 = 4363190LL;

    t158 = ((x665&x666)/(x667^x668));

    if (t158 != -128LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x669 = INT16_MAX;
	int64_t x671 = -47LL;
	uint64_t t159 = 1320402707519300LLU;

    t159 = ((x669&x670)/(x671^x672));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x673 = UINT32_MAX;
	uint64_t x674 = 115LLU;
	int64_t x675 = INT64_MAX;
	int64_t x676 = 1779358767760LL;
	static volatile uint64_t t160 = 225290770394000981LLU;

    t160 = ((x673&x674)/(x675^x676));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x680 = 1728U;

    t161 = ((x677&x678)/(x679^x680));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x682 = -1;
	int16_t x683 = -1;
	int16_t x684 = INT16_MAX;
	int32_t t162 = 260;

    t162 = ((x681&x682)/(x683^x684));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x685 = INT64_MIN;
	int64_t x686 = 178418539572LL;
	static int32_t x687 = -9592;
	int32_t x688 = INT32_MAX;

    t163 = ((x685&x686)/(x687^x688));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x689 = 2287799LLU;
	static int64_t x690 = INT64_MIN;
	static int32_t x691 = 2902;
	volatile uint8_t x692 = UINT8_MAX;
	static volatile uint64_t t164 = 1371590916929269868LLU;

    t164 = ((x689&x690)/(x691^x692));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x693 = INT8_MAX;
	int32_t x694 = -1;
	int64_t x695 = -182029LL;
	int16_t x696 = 3309;
	int64_t t165 = 236820686873824518LL;

    t165 = ((x693&x694)/(x695^x696));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x697 = 0U;
	static uint64_t x698 = 43301933604049305LLU;
	static int64_t x699 = INT64_MIN;
	int16_t x700 = INT16_MAX;
	volatile uint64_t t166 = 131130939168902366LLU;

    t166 = ((x697&x698)/(x699^x700));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x701 = 2;
	volatile int16_t x702 = INT16_MIN;
	uint16_t x703 = UINT16_MAX;
	int64_t x704 = INT64_MIN;
	int64_t t167 = -75LL;

    t167 = ((x701&x702)/(x703^x704));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x705 = 72858604932LLU;
	static uint16_t x706 = 433U;
	int16_t x707 = INT16_MAX;
	int64_t x708 = -964LL;
	uint64_t t168 = 958434LLU;

    t168 = ((x705&x706)/(x707^x708));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x709 = 1U;
	int64_t x710 = INT64_MIN;
	int32_t x711 = -1;
	uint8_t x712 = 2U;
	static int64_t t169 = -92345751LL;

    t169 = ((x709&x710)/(x711^x712));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x713 = INT32_MIN;
	static int8_t x714 = 16;
	int8_t x715 = INT8_MAX;

    t170 = ((x713&x714)/(x715^x716));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x721 = -3195;
	int8_t x722 = -1;
	int16_t x723 = 78;
	int32_t t171 = 126;

    t171 = ((x721&x722)/(x723^x724));

    if (t171 != 40) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x725 = -1490;
	static int32_t x727 = -1;
	uint32_t x728 = 50425082U;
	volatile uint32_t t172 = 168U;

    t172 = ((x725&x726)/(x727^x728));

    if (t172 != 1U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x729 = 0U;
	int32_t x731 = INT32_MIN;
	uint16_t x732 = 16U;
	int32_t t173 = -4;

    t173 = ((x729&x730)/(x731^x732));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x733 = INT64_MIN;
	int32_t x734 = INT32_MIN;
	volatile uint16_t x735 = 1U;
	volatile int64_t x736 = -1LL;

    t174 = ((x733&x734)/(x735^x736));

    if (t174 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x737 = 472;
	int8_t x739 = -1;
	static int32_t x740 = INT32_MIN;
	int32_t t175 = -153977;

    t175 = ((x737&x738)/(x739^x740));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x741 = UINT8_MAX;
	volatile int16_t x743 = INT16_MIN;
	uint32_t x744 = 2721U;

    t176 = ((x741&x742)/(x743^x744));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x745 = INT64_MIN;
	uint64_t x746 = UINT64_MAX;
	int16_t x747 = -42;
	volatile uint64_t t177 = 15699LLU;

    t177 = ((x745&x746)/(x747^x748));

    if (t177 != 249280325320399346LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x749 = -149137LL;
	int8_t x751 = 5;
	uint64_t x752 = 5432LLU;

    t178 = ((x749&x750)/(x751^x752));

    if (t178 != 3392816640373257LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x753 = -1LL;
	static int8_t x754 = 6;
	uint64_t x755 = 719301878389LLU;
	uint64_t x756 = 4005796769000LLU;

    t179 = ((x753&x754)/(x755^x756));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x757 = INT64_MIN;
	int8_t x759 = -14;
	volatile uint16_t x760 = 0U;
	volatile int64_t t180 = 1907236924765876LL;

    t180 = ((x757&x758)/(x759^x760));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x761 = INT64_MAX;
	int64_t x762 = INT64_MIN;
	static volatile uint64_t x763 = UINT64_MAX;
	int32_t x764 = INT32_MAX;
	volatile uint64_t t181 = 1253978LLU;

    t181 = ((x761&x762)/(x763^x764));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x765 = UINT64_MAX;
	int64_t x766 = 28945763743631LL;
	int8_t x768 = 1;
	volatile uint64_t t182 = 82949LLU;

    t182 = ((x765&x766)/(x767^x768));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x769 = INT64_MIN;
	volatile uint32_t x771 = 101383U;
	int64_t x772 = 5743035LL;
	uint64_t t183 = 750735LLU;

    t183 = ((x769&x770)/(x771^x772));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x773 = INT64_MIN;
	volatile uint64_t x774 = UINT64_MAX;
	int8_t x775 = 1;
	int64_t x776 = INT64_MIN;
	volatile uint64_t t184 = 1LLU;

    t184 = ((x773&x774)/(x775^x776));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x777 = UINT32_MAX;
	int16_t x779 = INT16_MIN;
	uint32_t x780 = 30862U;
	static uint32_t t185 = 4902969U;

    t185 = ((x777&x778)/(x779^x780));

    if (t185 != 1U) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint32_t x781 = UINT32_MAX;
	int8_t x782 = -1;
	uint16_t x783 = 7464U;
	int8_t x784 = -1;
	volatile uint32_t t186 = 114408U;

    t186 = ((x781&x782)/(x783^x784));

    if (t186 != 1U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x785 = INT32_MIN;
	static uint8_t x786 = 43U;
	int8_t x787 = -24;
	volatile uint64_t t187 = 43700505913419LLU;

    t187 = ((x785&x786)/(x787^x788));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x789 = INT8_MIN;
	static uint64_t x791 = 467222776178LLU;
	volatile uint64_t x792 = UINT64_MAX;

    t188 = ((x789&x790)/(x791^x792));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x795 = 0;
	uint16_t x796 = 588U;

    t189 = ((x793&x794)/(x795^x796));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x801 = 1;
	int64_t x802 = INT64_MAX;
	int8_t x803 = INT8_MIN;
	uint64_t x804 = UINT64_MAX;
	volatile uint64_t t190 = 0LLU;

    t190 = ((x801&x802)/(x803^x804));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x805 = UINT8_MAX;
	int8_t x806 = INT8_MIN;
	static int64_t x808 = INT64_MIN;
	int64_t t191 = -35094691087508244LL;

    t191 = ((x805&x806)/(x807^x808));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x809 = UINT16_MAX;
	uint8_t x811 = 75U;
	volatile int8_t x812 = INT8_MIN;
	volatile int32_t t192 = -103215;

    t192 = ((x809&x810)/(x811^x812));

    if (t192 != -308) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int16_t x813 = INT16_MIN;
	uint64_t x815 = UINT64_MAX;
	static volatile uint64_t t193 = 105LLU;

    t193 = ((x813&x814)/(x815^x816));

    if (t193 != 1LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x818 = 2;
	volatile uint16_t x819 = 1U;
	int16_t x820 = -1;
	volatile uint64_t t194 = 130869LLU;

    t194 = ((x817&x818)/(x819^x820));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x821 = INT16_MIN;
	uint8_t x822 = 1U;
	volatile uint16_t x823 = 31974U;
	volatile int16_t x824 = -1;
	volatile int32_t t195 = -39263526;

    t195 = ((x821&x822)/(x823^x824));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x825 = -2269475335621LL;
	volatile int16_t x826 = 12;

    t196 = ((x825&x826)/(x827^x828));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x831 = 1233U;
	int32_t x832 = INT32_MIN;
	uint64_t t197 = 12369573LLU;

    t197 = ((x829&x830)/(x831^x832));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x834 = 38908394LLU;
	int16_t x835 = 87;
	int32_t x836 = INT32_MAX;
	uint64_t t198 = 778042778882239LLU;

    t198 = ((x833&x834)/(x835^x836));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x837 = -1;
	uint32_t x838 = 93164610U;
	uint32_t x839 = UINT32_MAX;
	uint32_t t199 = 30U;

    t199 = ((x837&x838)/(x839^x840));

    if (t199 != 2843U) { NG(); } else { ; }
	
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

