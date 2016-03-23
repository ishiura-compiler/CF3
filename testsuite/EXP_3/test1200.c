
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

static int32_t x2 = INT32_MAX;
volatile uint32_t x4 = UINT32_MAX;
int32_t t1 = -180;
int32_t x17 = -1;
volatile int32_t t4 = 2;
int8_t x24 = 0;
volatile uint16_t x33 = 0U;
int32_t t9 = 843101;
int16_t x52 = -1;
static volatile int32_t t10 = -2;
int32_t x56 = INT32_MIN;
uint32_t x57 = 32U;
int8_t x58 = INT8_MIN;
int32_t t12 = 15608539;
int64_t x61 = INT64_MIN;
volatile int32_t x64 = -104;
uint32_t x68 = UINT32_MAX;
int8_t x70 = INT8_MIN;
volatile int32_t t15 = -1;
int64_t x78 = -529694909241LL;
int32_t x80 = INT32_MIN;
int32_t x85 = -1;
volatile int32_t x86 = INT32_MIN;
int8_t x87 = INT8_MAX;
static uint16_t x96 = UINT16_MAX;
uint8_t x100 = UINT8_MAX;
static uint64_t x109 = 4LLU;
int32_t t21 = -873;
static int64_t x113 = -2810974771514018LL;
volatile uint16_t x116 = UINT16_MAX;
volatile int64_t x121 = -1LL;
int32_t x124 = INT32_MIN;
int8_t x125 = 1;
int16_t x138 = INT16_MIN;
int16_t x142 = INT16_MIN;
volatile int32_t t27 = 48413373;
static volatile int32_t t29 = -3037;
int64_t x157 = -1LL;
static volatile int16_t x161 = INT16_MIN;
int16_t x162 = INT16_MIN;
volatile int32_t t31 = 0;
static uint64_t x171 = UINT64_MAX;
volatile int32_t t32 = -4048904;
static uint32_t x173 = UINT32_MAX;
volatile int32_t t34 = 1;
volatile int32_t t35 = 684;
volatile uint32_t x185 = UINT32_MAX;
volatile int32_t x202 = INT32_MIN;
int16_t x214 = INT16_MIN;
static int16_t x215 = INT16_MIN;
static volatile int32_t t41 = -7128;
static int32_t x219 = 1;
uint8_t x221 = UINT8_MAX;
int32_t t46 = -169731;
int64_t x244 = -1LL;
uint64_t x247 = UINT64_MAX;
int16_t x248 = INT16_MAX;
static int32_t t49 = 297611468;
static volatile int64_t x253 = -1LL;
int64_t x255 = -1LL;
int64_t x263 = 13679405259LL;
uint8_t x264 = 2U;
static int16_t x265 = 16;
int8_t x266 = 6;
static uint8_t x268 = 3U;
int64_t x270 = -1LL;
int32_t t54 = 461458;
int64_t x277 = INT64_MIN;
volatile int64_t x292 = -6LL;
uint8_t x294 = UINT8_MAX;
int64_t x295 = -47096082111153040LL;
static int32_t t59 = -369279904;
int64_t x297 = INT64_MIN;
volatile int8_t x298 = INT8_MIN;
static int8_t x300 = -58;
int64_t x304 = INT64_MIN;
int8_t x306 = 0;
uint16_t x312 = UINT16_MAX;
static volatile int32_t t63 = -14628;
uint8_t x314 = 1U;
uint16_t x326 = UINT16_MAX;
volatile uint8_t x330 = UINT8_MAX;
int16_t x345 = INT16_MAX;
int32_t t70 = -25101;
int8_t x352 = INT8_MAX;
int32_t t71 = -527021481;
static int16_t x355 = INT16_MIN;
volatile int32_t x356 = 30462;
uint32_t x357 = 21U;
volatile int32_t t73 = 20;
int64_t x369 = -1LL;
int32_t t76 = -486481;
int64_t x378 = -285958787387819886LL;
volatile uint64_t x384 = 14931530791416LLU;
volatile int32_t t79 = 3636;
static int8_t x393 = -1;
static volatile int32_t x397 = -1;
int64_t x398 = INT64_MAX;
volatile int32_t x399 = -227;
uint8_t x400 = 67U;
int32_t t82 = -2;
volatile int32_t t84 = -25;
int32_t x409 = -28353027;
int8_t x415 = 1;
int32_t t86 = 1;
static int16_t x417 = INT16_MIN;
int8_t x432 = -12;
uint32_t x435 = 6546342U;
volatile int64_t x436 = INT64_MIN;
int32_t x443 = INT32_MIN;
static int16_t x444 = -1;
int64_t x459 = INT64_MIN;
int16_t x465 = INT16_MAX;
int16_t x468 = INT16_MAX;
int64_t x469 = INT64_MAX;
static int64_t x472 = 108199223561LL;
int8_t x479 = INT8_MIN;
int32_t x484 = -1;
volatile int32_t t101 = -381902;
uint16_t x496 = 0U;
volatile uint32_t x503 = 15499753U;
uint32_t x509 = 1628989U;
int32_t t105 = -3;
volatile uint64_t x521 = 95096760906344072LLU;
volatile int32_t t108 = 6;
static int8_t x525 = -10;
volatile int16_t x526 = -397;
static volatile int32_t t109 = -866655854;
static volatile int32_t t110 = -1;
volatile uint16_t x533 = UINT16_MAX;
int32_t x537 = -1;
int64_t x539 = 11536LL;
int32_t x544 = INT32_MIN;
int32_t t113 = 246;
static int16_t x545 = 29;
int64_t x548 = -1LL;
int32_t x553 = INT32_MIN;
int16_t x561 = 4;
int16_t x566 = 5242;
static int64_t x567 = INT64_MAX;
volatile uint16_t x570 = 12869U;
int64_t x576 = -4LL;
volatile int32_t t121 = -12;
int16_t x580 = 0;
int32_t t122 = -2934927;
int64_t x585 = 939015LL;
volatile int8_t x588 = -1;
volatile int8_t x589 = INT8_MAX;
uint64_t x596 = 194262LLU;
volatile int32_t t127 = 1022;
int16_t x604 = INT16_MAX;
uint8_t x607 = UINT8_MAX;
int64_t x609 = -722LL;
int8_t x611 = -1;
uint32_t x612 = 0U;
int32_t x618 = INT32_MIN;
int32_t t132 = 0;
uint16_t x622 = 7U;
uint8_t x630 = UINT8_MAX;
int16_t x631 = INT16_MAX;
int64_t x632 = INT64_MIN;
uint64_t x633 = 1500561839368LLU;
static int32_t x659 = 201024;
int32_t x660 = INT32_MAX;
int32_t t141 = -1;
int16_t x664 = 4981;
int8_t x669 = -1;
int64_t x676 = INT64_MAX;
volatile int8_t x678 = 1;
int16_t x684 = -15744;
volatile int32_t t146 = 20259028;
volatile int32_t t147 = -620;
volatile int32_t x692 = 24082046;
uint32_t x693 = 40U;
static int32_t x694 = INT32_MIN;
volatile int32_t x719 = -1;
int64_t x720 = -1LL;
int16_t x721 = -13410;
static int16_t x724 = -1;
int8_t x726 = 1;
uint64_t x729 = 7539842LLU;
uint32_t x738 = UINT32_MAX;
int16_t x739 = INT16_MAX;
int64_t x743 = INT64_MIN;
static uint32_t x744 = 18U;
static volatile int32_t t162 = 0;
int32_t x759 = INT32_MIN;
int16_t x762 = INT16_MIN;
int64_t x769 = -1051222532829103654LL;
int32_t x772 = INT32_MIN;
volatile int32_t t166 = -55;
static volatile int32_t t167 = 19620;
int32_t t168 = 2914;
int32_t x795 = INT32_MIN;
volatile uint8_t x796 = 20U;
volatile uint16_t x800 = UINT16_MAX;
uint16_t x801 = 13U;
uint8_t x802 = 25U;
static uint16_t x804 = 2695U;
int32_t x808 = INT32_MAX;
uint64_t x813 = 405LLU;
int32_t x817 = -4;
volatile int64_t x820 = INT64_MIN;
uint32_t x822 = UINT32_MAX;
static int32_t x823 = INT32_MIN;
static volatile int8_t x824 = 3;
int32_t t178 = -3281166;
int64_t x831 = 128661945842503139LL;
int64_t x844 = INT64_MIN;
volatile int32_t t184 = -3627303;
uint16_t x852 = 17702U;
uint16_t x857 = 58U;
static int32_t x870 = 207873885;
volatile int16_t x873 = INT16_MAX;
int16_t x874 = 2729;
int8_t x876 = INT8_MAX;
int16_t x879 = INT16_MIN;
int32_t t189 = -13;
int32_t x882 = -43363561;
uint64_t x883 = 4019068930476LLU;
volatile int32_t t190 = 28;
static int8_t x888 = -1;
uint64_t x890 = UINT64_MAX;
int32_t x894 = -1;
int16_t x897 = INT16_MAX;
uint8_t x915 = 1U;
int8_t x920 = INT8_MIN;
uint8_t x921 = 1U;
uint16_t x928 = 439U;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	int64_t x3 = INT64_MIN;
	volatile int32_t t0 = -265551944;

    t0 = ((x1-x2)<=(x3!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MIN;
	uint64_t x6 = UINT64_MAX;
	volatile int16_t x7 = INT16_MAX;
	int32_t x8 = -1;

    t1 = ((x5-x6)<=(x7!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = 15342;
	static uint16_t x10 = 15U;
	volatile int16_t x11 = INT16_MIN;
	static uint64_t x12 = 47LLU;
	volatile int32_t t2 = -240383;

    t2 = ((x9-x10)<=(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = 33005U;
	volatile int32_t x14 = 1151;
	uint16_t x15 = 1804U;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -1060458027;

    t3 = ((x13-x14)<=(x15!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = INT64_MIN;
	int64_t x19 = -1LL;
	uint64_t x20 = UINT64_MAX;

    t4 = ((x17-x18)<=(x19!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -2702;
	uint64_t x22 = 7897964996136LLU;
	volatile uint16_t x23 = 37U;
	int32_t t5 = -32235;

    t5 = ((x21-x22)<=(x23!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = -5;
	int8_t x30 = INT8_MIN;
	uint16_t x31 = UINT16_MAX;
	uint8_t x32 = 29U;
	int32_t t6 = 258722;

    t6 = ((x29-x30)<=(x31!=x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x34 = INT64_MAX;
	int16_t x35 = -1;
	static int32_t x36 = INT32_MAX;
	static volatile int32_t t7 = 134228;

    t7 = ((x33-x34)<=(x35!=x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = -9;
	int8_t x42 = INT8_MAX;
	static volatile uint32_t x43 = 32255U;
	int8_t x44 = INT8_MAX;
	int32_t t8 = -58;

    t8 = ((x41-x42)<=(x43!=x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x45 = 40U;
	volatile int8_t x46 = 1;
	volatile uint8_t x47 = 2U;
	int64_t x48 = 1912822878861366228LL;

    t9 = ((x45-x46)<=(x47!=x48));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x49 = 0U;
	volatile int64_t x50 = INT64_MAX;
	uint64_t x51 = UINT64_MAX;

    t10 = ((x49-x50)<=(x51!=x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x53 = 1253042200766767591LLU;
	int16_t x54 = 6087;
	int32_t x55 = INT32_MIN;
	volatile int32_t t11 = 5;

    t11 = ((x53-x54)<=(x55!=x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x59 = INT64_MAX;
	int32_t x60 = INT32_MIN;

    t12 = ((x57-x58)<=(x59!=x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x62 = INT8_MIN;
	uint16_t x63 = 100U;
	volatile int32_t t13 = -269219118;

    t13 = ((x61-x62)<=(x63!=x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x65 = -1;
	int32_t x66 = INT32_MIN;
	uint8_t x67 = 123U;
	static volatile int32_t t14 = -40569740;

    t14 = ((x65-x66)<=(x67!=x68));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x69 = 25596318LL;
	volatile int8_t x71 = INT8_MAX;
	int64_t x72 = INT64_MIN;

    t15 = ((x69-x70)<=(x71!=x72));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x77 = UINT16_MAX;
	volatile uint8_t x79 = 28U;
	volatile int32_t t16 = 7774;

    t16 = ((x77-x78)<=(x79!=x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x88 = 20U;
	static int32_t t17 = 62;

    t17 = ((x85-x86)<=(x87!=x88));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x93 = 47541278623362LL;
	static volatile int8_t x94 = 21;
	uint8_t x95 = 40U;
	static int32_t t18 = -429021;

    t18 = ((x93-x94)<=(x95!=x96));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x97 = 3;
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = INT64_MAX;
	volatile int32_t t19 = 1;

    t19 = ((x97-x98)<=(x99!=x100));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x101 = 23424U;
	volatile int64_t x102 = 3531808121775629LL;
	static uint16_t x103 = 662U;
	static volatile int32_t x104 = -1;
	volatile int32_t t20 = 60101;

    t20 = ((x101-x102)<=(x103!=x104));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x110 = INT8_MIN;
	int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MAX;

    t21 = ((x109-x110)<=(x111!=x112));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x114 = -9;
	uint16_t x115 = UINT16_MAX;
	volatile int32_t t22 = 337;

    t22 = ((x113-x114)<=(x115!=x116));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x122 = 22577116686455420LLU;
	static int16_t x123 = INT16_MAX;
	int32_t t23 = -26;

    t23 = ((x121-x122)<=(x123!=x124));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x126 = 198U;
	int8_t x127 = -1;
	uint32_t x128 = UINT32_MAX;
	static volatile int32_t t24 = -10947;

    t24 = ((x125-x126)<=(x127!=x128));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x133 = -175435812158803099LL;
	int16_t x134 = INT16_MAX;
	int16_t x135 = 668;
	int64_t x136 = -1LL;
	static volatile int32_t t25 = -176859;

    t25 = ((x133-x134)<=(x135!=x136));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x137 = INT16_MIN;
	uint8_t x139 = UINT8_MAX;
	static int64_t x140 = -668585313739587LL;
	int32_t t26 = 0;

    t26 = ((x137-x138)<=(x139!=x140));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x141 = 551639520425009LL;
	uint32_t x143 = UINT32_MAX;
	uint8_t x144 = UINT8_MAX;

    t27 = ((x141-x142)<=(x143!=x144));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x145 = INT8_MAX;
	volatile int16_t x146 = INT16_MIN;
	volatile int16_t x147 = 9;
	int8_t x148 = INT8_MAX;
	int32_t t28 = 91120274;

    t28 = ((x145-x146)<=(x147!=x148));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x153 = 12300U;
	static uint64_t x154 = UINT64_MAX;
	volatile int32_t x155 = -12507558;
	volatile int32_t x156 = -384290173;

    t29 = ((x153-x154)<=(x155!=x156));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x158 = 472LL;
	volatile int16_t x159 = INT16_MIN;
	volatile int32_t x160 = -1;
	volatile int32_t t30 = -1405;

    t30 = ((x157-x158)<=(x159!=x160));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x163 = 3U;
	int8_t x164 = -1;

    t31 = ((x161-x162)<=(x163!=x164));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x169 = 411619447U;
	uint8_t x170 = UINT8_MAX;
	static volatile int32_t x172 = INT32_MIN;

    t32 = ((x169-x170)<=(x171!=x172));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x174 = INT16_MIN;
	int64_t x175 = -167719LL;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t33 = 4302;

    t33 = ((x173-x174)<=(x175!=x176));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x177 = 112LLU;
	uint16_t x178 = 20U;
	int32_t x179 = 13812;
	uint32_t x180 = 708273818U;

    t34 = ((x177-x178)<=(x179!=x180));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x181 = 1;
	int16_t x182 = -209;
	uint8_t x183 = UINT8_MAX;
	static int8_t x184 = INT8_MIN;

    t35 = ((x181-x182)<=(x183!=x184));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x186 = INT32_MIN;
	uint32_t x187 = UINT32_MAX;
	static int8_t x188 = INT8_MAX;
	volatile int32_t t36 = -33;

    t36 = ((x185-x186)<=(x187!=x188));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x193 = 8U;
	uint32_t x194 = UINT32_MAX;
	int32_t x195 = -246414911;
	static uint16_t x196 = 5539U;
	int32_t t37 = 8052961;

    t37 = ((x193-x194)<=(x195!=x196));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x197 = 4003;
	int64_t x198 = 152613854137389LL;
	static uint8_t x199 = 13U;
	volatile int64_t x200 = -1LL;
	volatile int32_t t38 = -1570;

    t38 = ((x197-x198)<=(x199!=x200));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x201 = UINT32_MAX;
	uint32_t x203 = UINT32_MAX;
	int16_t x204 = 0;
	volatile int32_t t39 = 0;

    t39 = ((x201-x202)<=(x203!=x204));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x205 = UINT8_MAX;
	static uint32_t x206 = 3613972U;
	static uint32_t x207 = 80399611U;
	static uint16_t x208 = UINT16_MAX;
	static volatile int32_t t40 = -36;

    t40 = ((x205-x206)<=(x207!=x208));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x213 = -1LL;
	static int32_t x216 = 6919;

    t41 = ((x213-x214)<=(x215!=x216));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x217 = UINT16_MAX;
	uint8_t x218 = 10U;
	uint64_t x220 = 139917231856922642LLU;
	volatile int32_t t42 = -934545122;

    t42 = ((x217-x218)<=(x219!=x220));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x222 = UINT16_MAX;
	uint32_t x223 = 229581U;
	static int32_t x224 = INT32_MIN;
	int32_t t43 = 319;

    t43 = ((x221-x222)<=(x223!=x224));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x229 = 65884959;
	int8_t x230 = 18;
	int32_t x231 = 207;
	uint32_t x232 = UINT32_MAX;
	volatile int32_t t44 = -1830351;

    t44 = ((x229-x230)<=(x231!=x232));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x233 = INT16_MAX;
	static int64_t x234 = 4093LL;
	volatile int64_t x235 = -88635443800LL;
	int32_t x236 = INT32_MAX;
	int32_t t45 = 378746;

    t45 = ((x233-x234)<=(x235!=x236));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x237 = INT16_MIN;
	volatile uint64_t x238 = 4163468128330LLU;
	uint64_t x239 = UINT64_MAX;
	static int32_t x240 = -1500;

    t46 = ((x237-x238)<=(x239!=x240));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int32_t x241 = INT32_MIN;
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = -1;
	int32_t t47 = 288;

    t47 = ((x241-x242)<=(x243!=x244));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x245 = 118139321LL;
	int32_t x246 = 2758799;
	static volatile int32_t t48 = 5;

    t48 = ((x245-x246)<=(x247!=x248));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x249 = INT16_MIN;
	uint32_t x250 = 270U;
	int64_t x251 = INT64_MAX;
	static int64_t x252 = 13548LL;

    t49 = ((x249-x250)<=(x251!=x252));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x254 = INT64_MAX;
	int8_t x256 = -1;
	volatile int32_t t50 = -9031;

    t50 = ((x253-x254)<=(x255!=x256));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x261 = 3075;
	uint16_t x262 = 46U;
	static volatile int32_t t51 = 47335172;

    t51 = ((x261-x262)<=(x263!=x264));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x267 = INT32_MIN;
	int32_t t52 = -244;

    t52 = ((x265-x266)<=(x267!=x268));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x269 = 1180077065265LLU;
	int8_t x271 = INT8_MAX;
	volatile int32_t x272 = INT32_MIN;
	volatile int32_t t53 = 1325451;

    t53 = ((x269-x270)<=(x271!=x272));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x273 = 114U;
	int64_t x274 = -14196749628LL;
	int16_t x275 = 5490;
	uint16_t x276 = 136U;

    t54 = ((x273-x274)<=(x275!=x276));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x278 = INT8_MIN;
	static volatile int16_t x279 = INT16_MIN;
	int64_t x280 = INT64_MIN;
	int32_t t55 = -153322040;

    t55 = ((x277-x278)<=(x279!=x280));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x281 = 48U;
	static uint32_t x282 = UINT32_MAX;
	volatile int8_t x283 = INT8_MIN;
	int64_t x284 = -458325229LL;
	int32_t t56 = -889;

    t56 = ((x281-x282)<=(x283!=x284));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x285 = 4518836127559LLU;
	uint32_t x286 = 27032574U;
	uint16_t x287 = UINT16_MAX;
	static int32_t x288 = -1;
	int32_t t57 = 379;

    t57 = ((x285-x286)<=(x287!=x288));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x289 = 2691U;
	static int16_t x290 = -26;
	volatile uint8_t x291 = UINT8_MAX;
	volatile int32_t t58 = -4662;

    t58 = ((x289-x290)<=(x291!=x292));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x293 = INT8_MAX;
	int8_t x296 = INT8_MIN;

    t59 = ((x293-x294)<=(x295!=x296));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x299 = UINT32_MAX;
	int32_t t60 = -2;

    t60 = ((x297-x298)<=(x299!=x300));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x301 = -206202;
	uint64_t x302 = UINT64_MAX;
	uint8_t x303 = 3U;
	volatile int32_t t61 = -1383;

    t61 = ((x301-x302)<=(x303!=x304));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x305 = INT8_MAX;
	static uint32_t x307 = 16828928U;
	volatile uint8_t x308 = UINT8_MAX;
	int32_t t62 = -1526;

    t62 = ((x305-x306)<=(x307!=x308));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x309 = -435858986LL;
	uint64_t x310 = 51810263159LLU;
	int64_t x311 = 776LL;

    t63 = ((x309-x310)<=(x311!=x312));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x313 = -37LL;
	int64_t x315 = -1263413594255LL;
	int8_t x316 = -1;
	int32_t t64 = 3968;

    t64 = ((x313-x314)<=(x315!=x316));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x317 = -6;
	uint32_t x318 = 48986967U;
	int8_t x319 = INT8_MAX;
	int64_t x320 = -1LL;
	static volatile int32_t t65 = -5169;

    t65 = ((x317-x318)<=(x319!=x320));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x321 = 318LLU;
	volatile uint8_t x322 = UINT8_MAX;
	int32_t x323 = -690999709;
	static uint32_t x324 = UINT32_MAX;
	int32_t t66 = -2093435;

    t66 = ((x321-x322)<=(x323!=x324));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x325 = 1U;
	volatile int8_t x327 = -1;
	static int32_t x328 = INT32_MAX;
	static volatile int32_t t67 = -1;

    t67 = ((x325-x326)<=(x327!=x328));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x329 = 49;
	static int16_t x331 = INT16_MAX;
	static uint32_t x332 = 14665123U;
	volatile int32_t t68 = -5093868;

    t68 = ((x329-x330)<=(x331!=x332));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x333 = 44U;
	uint16_t x334 = 3306U;
	volatile uint32_t x335 = 770U;
	int16_t x336 = 3639;
	volatile int32_t t69 = 3894;

    t69 = ((x333-x334)<=(x335!=x336));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x346 = -653188;
	int8_t x347 = -1;
	int32_t x348 = INT32_MIN;

    t70 = ((x345-x346)<=(x347!=x348));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x349 = -1;
	static uint8_t x350 = 3U;
	int32_t x351 = INT32_MIN;

    t71 = ((x349-x350)<=(x351!=x352));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x353 = 107U;
	int16_t x354 = -45;
	volatile int32_t t72 = -931993188;

    t72 = ((x353-x354)<=(x355!=x356));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x358 = INT8_MIN;
	uint16_t x359 = 341U;
	int32_t x360 = 1916;

    t73 = ((x357-x358)<=(x359!=x360));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x361 = 695759201LL;
	static int8_t x362 = 0;
	uint16_t x363 = UINT16_MAX;
	int16_t x364 = 748;
	int32_t t74 = 1014375487;

    t74 = ((x361-x362)<=(x363!=x364));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x365 = INT64_MIN;
	volatile int8_t x366 = -32;
	uint64_t x367 = 262331242039623LLU;
	int32_t x368 = 15997754;
	int32_t t75 = 5850169;

    t75 = ((x365-x366)<=(x367!=x368));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint16_t x370 = 3324U;
	volatile int32_t x371 = INT32_MAX;
	uint64_t x372 = 91606LLU;

    t76 = ((x369-x370)<=(x371!=x372));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x377 = UINT32_MAX;
	uint16_t x379 = UINT16_MAX;
	uint64_t x380 = 1539LLU;
	int32_t t77 = -133494224;

    t77 = ((x377-x378)<=(x379!=x380));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x381 = UINT16_MAX;
	uint8_t x382 = 56U;
	int64_t x383 = INT64_MIN;
	int32_t t78 = 2656116;

    t78 = ((x381-x382)<=(x383!=x384));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x385 = -692100;
	static uint32_t x386 = 40181156U;
	int16_t x387 = INT16_MIN;
	uint16_t x388 = 6U;

    t79 = ((x385-x386)<=(x387!=x388));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x389 = 3;
	static int64_t x390 = 51LL;
	int16_t x391 = -1;
	int16_t x392 = -4642;
	int32_t t80 = 60;

    t80 = ((x389-x390)<=(x391!=x392));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x394 = UINT16_MAX;
	static int32_t x395 = INT32_MAX;
	uint16_t x396 = 7832U;
	int32_t t81 = 55;

    t81 = ((x393-x394)<=(x395!=x396));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    

    t82 = ((x397-x398)<=(x399!=x400));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x401 = UINT8_MAX;
	int8_t x402 = -20;
	int32_t x403 = INT32_MIN;
	int32_t x404 = -1;
	int32_t t83 = -499;

    t83 = ((x401-x402)<=(x403!=x404));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x405 = 232958U;
	int32_t x406 = INT32_MAX;
	uint8_t x407 = 3U;
	static int64_t x408 = INT64_MIN;

    t84 = ((x405-x406)<=(x407!=x408));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x410 = 1150868U;
	uint8_t x411 = 8U;
	int32_t x412 = 21366;
	int32_t t85 = 10;

    t85 = ((x409-x410)<=(x411!=x412));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x413 = 1;
	int8_t x414 = -1;
	int32_t x416 = -40;

    t86 = ((x413-x414)<=(x415!=x416));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x418 = INT64_MIN;
	uint32_t x419 = 15560238U;
	int16_t x420 = INT16_MIN;
	volatile int32_t t87 = 18651;

    t87 = ((x417-x418)<=(x419!=x420));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x421 = INT32_MIN;
	volatile int16_t x422 = INT16_MIN;
	volatile int8_t x423 = INT8_MIN;
	int8_t x424 = INT8_MAX;
	volatile int32_t t88 = -215957;

    t88 = ((x421-x422)<=(x423!=x424));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x425 = -59698567;
	uint64_t x426 = 212524849LLU;
	int8_t x427 = -3;
	static volatile uint32_t x428 = UINT32_MAX;
	static volatile int32_t t89 = 29770699;

    t89 = ((x425-x426)<=(x427!=x428));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x429 = -1352014;
	uint64_t x430 = UINT64_MAX;
	uint16_t x431 = 17U;
	volatile int32_t t90 = 141881898;

    t90 = ((x429-x430)<=(x431!=x432));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x433 = INT32_MIN;
	int64_t x434 = INT64_MIN;
	volatile int32_t t91 = -96;

    t91 = ((x433-x434)<=(x435!=x436));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x437 = 161942LLU;
	uint64_t x438 = UINT64_MAX;
	int16_t x439 = INT16_MAX;
	int16_t x440 = 12654;
	static int32_t t92 = -187;

    t92 = ((x437-x438)<=(x439!=x440));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x441 = 3;
	int32_t x442 = -1;
	volatile int32_t t93 = 124;

    t93 = ((x441-x442)<=(x443!=x444));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x445 = INT16_MIN;
	static volatile int16_t x446 = INT16_MIN;
	static uint8_t x447 = 31U;
	int8_t x448 = -1;
	int32_t t94 = 1576625;

    t94 = ((x445-x446)<=(x447!=x448));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x457 = -45;
	static int16_t x458 = -22;
	static int64_t x460 = -1LL;
	int32_t t95 = 17893280;

    t95 = ((x457-x458)<=(x459!=x460));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x461 = 31167LL;
	int64_t x462 = -1LL;
	static int8_t x463 = INT8_MIN;
	static int8_t x464 = -1;
	int32_t t96 = -17431;

    t96 = ((x461-x462)<=(x463!=x464));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x466 = UINT64_MAX;
	volatile int16_t x467 = -1;
	static int32_t t97 = 852048935;

    t97 = ((x465-x466)<=(x467!=x468));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x470 = INT8_MAX;
	uint16_t x471 = 5657U;
	volatile int32_t t98 = 72790;

    t98 = ((x469-x470)<=(x471!=x472));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x473 = -6;
	uint16_t x474 = 4491U;
	static int64_t x475 = -1760538318476LL;
	static int16_t x476 = INT16_MIN;
	int32_t t99 = -128;

    t99 = ((x473-x474)<=(x475!=x476));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x477 = 187850536503LLU;
	int32_t x478 = INT32_MAX;
	int8_t x480 = 5;
	volatile int32_t t100 = 60;

    t100 = ((x477-x478)<=(x479!=x480));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x481 = 2174U;
	int32_t x482 = -1;
	uint16_t x483 = 106U;

    t101 = ((x481-x482)<=(x483!=x484));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x485 = 8U;
	static uint64_t x486 = UINT64_MAX;
	int32_t x487 = INT32_MIN;
	int8_t x488 = 19;
	int32_t t102 = -1;

    t102 = ((x485-x486)<=(x487!=x488));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x493 = INT16_MAX;
	uint8_t x494 = UINT8_MAX;
	volatile int8_t x495 = -15;
	volatile int32_t t103 = -2654;

    t103 = ((x493-x494)<=(x495!=x496));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x501 = INT16_MIN;
	static int16_t x502 = INT16_MIN;
	uint32_t x504 = UINT32_MAX;
	int32_t t104 = 7980;

    t104 = ((x501-x502)<=(x503!=x504));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x510 = -38;
	static int8_t x511 = -1;
	int16_t x512 = 2;

    t105 = ((x509-x510)<=(x511!=x512));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x513 = INT64_MAX;
	uint16_t x514 = UINT16_MAX;
	uint32_t x515 = 2U;
	volatile int64_t x516 = -8655839621719705LL;
	volatile int32_t t106 = -7090584;

    t106 = ((x513-x514)<=(x515!=x516));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x517 = 21953746U;
	static uint32_t x518 = 24285U;
	static int8_t x519 = 4;
	uint64_t x520 = 17490008648965LLU;
	static volatile int32_t t107 = -185;

    t107 = ((x517-x518)<=(x519!=x520));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x522 = INT64_MIN;
	int64_t x523 = INT64_MIN;
	static uint32_t x524 = UINT32_MAX;

    t108 = ((x521-x522)<=(x523!=x524));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x527 = INT64_MAX;
	uint16_t x528 = UINT16_MAX;

    t109 = ((x525-x526)<=(x527!=x528));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x529 = INT16_MIN;
	uint16_t x530 = 14U;
	uint8_t x531 = 18U;
	uint16_t x532 = 14299U;

    t110 = ((x529-x530)<=(x531!=x532));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x534 = UINT16_MAX;
	uint8_t x535 = UINT8_MAX;
	uint32_t x536 = UINT32_MAX;
	volatile int32_t t111 = -3615;

    t111 = ((x533-x534)<=(x535!=x536));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x538 = 98U;
	int16_t x540 = INT16_MIN;
	volatile int32_t t112 = 3;

    t112 = ((x537-x538)<=(x539!=x540));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x541 = INT8_MAX;
	int8_t x542 = -1;
	int8_t x543 = INT8_MIN;

    t113 = ((x541-x542)<=(x543!=x544));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x546 = INT32_MAX;
	int32_t x547 = INT32_MIN;
	volatile int32_t t114 = 13661120;

    t114 = ((x545-x546)<=(x547!=x548));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x549 = -16547308147162366LL;
	static int8_t x550 = INT8_MIN;
	int64_t x551 = 1066137LL;
	int8_t x552 = -3;
	volatile int32_t t115 = 7;

    t115 = ((x549-x550)<=(x551!=x552));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x554 = -156;
	static volatile int8_t x555 = -60;
	int16_t x556 = INT16_MIN;
	volatile int32_t t116 = -787483672;

    t116 = ((x553-x554)<=(x555!=x556));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x557 = 4351700322742729049LLU;
	int8_t x558 = 7;
	static int8_t x559 = INT8_MIN;
	int64_t x560 = 525517622619855770LL;
	volatile int32_t t117 = 5;

    t117 = ((x557-x558)<=(x559!=x560));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x562 = INT8_MIN;
	int8_t x563 = INT8_MAX;
	volatile int8_t x564 = INT8_MAX;
	int32_t t118 = -935924073;

    t118 = ((x561-x562)<=(x563!=x564));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x565 = -1;
	int64_t x568 = -659189LL;
	int32_t t119 = 227902654;

    t119 = ((x565-x566)<=(x567!=x568));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x569 = INT8_MIN;
	static volatile int16_t x571 = INT16_MIN;
	static int16_t x572 = INT16_MIN;
	static volatile int32_t t120 = 1;

    t120 = ((x569-x570)<=(x571!=x572));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x573 = -1LL;
	static int8_t x574 = -1;
	volatile int8_t x575 = INT8_MIN;

    t121 = ((x573-x574)<=(x575!=x576));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x577 = 65U;
	uint16_t x578 = 401U;
	volatile int8_t x579 = INT8_MIN;

    t122 = ((x577-x578)<=(x579!=x580));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x581 = 40U;
	static int16_t x582 = -1;
	volatile uint64_t x583 = 15039LLU;
	static uint16_t x584 = 3152U;
	static int32_t t123 = 278959593;

    t123 = ((x581-x582)<=(x583!=x584));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x586 = UINT64_MAX;
	uint32_t x587 = 836001U;
	volatile int32_t t124 = 11;

    t124 = ((x585-x586)<=(x587!=x588));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x590 = 1954;
	int64_t x591 = 177LL;
	volatile uint16_t x592 = UINT16_MAX;
	volatile int32_t t125 = 25;

    t125 = ((x589-x590)<=(x591!=x592));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int16_t x593 = -1;
	static int32_t x594 = INT32_MIN;
	int32_t x595 = 1;
	volatile int32_t t126 = -6143093;

    t126 = ((x593-x594)<=(x595!=x596));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x597 = 76;
	uint64_t x598 = UINT64_MAX;
	volatile int32_t x599 = 13;
	uint16_t x600 = 2752U;

    t127 = ((x597-x598)<=(x599!=x600));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x601 = INT32_MAX;
	uint16_t x602 = 818U;
	int64_t x603 = -1LL;
	volatile int32_t t128 = 2735;

    t128 = ((x601-x602)<=(x603!=x604));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x605 = UINT16_MAX;
	uint32_t x606 = UINT32_MAX;
	volatile uint8_t x608 = UINT8_MAX;
	volatile int32_t t129 = 14;

    t129 = ((x605-x606)<=(x607!=x608));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x610 = UINT32_MAX;
	volatile int32_t t130 = 600216898;

    t130 = ((x609-x610)<=(x611!=x612));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x613 = INT8_MIN;
	uint64_t x614 = 6883548381LLU;
	uint64_t x615 = 408508LLU;
	static int16_t x616 = INT16_MIN;
	int32_t t131 = 5521378;

    t131 = ((x613-x614)<=(x615!=x616));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x617 = 0U;
	static int64_t x619 = INT64_MIN;
	volatile int8_t x620 = INT8_MIN;

    t132 = ((x617-x618)<=(x619!=x620));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x621 = 0LL;
	static int16_t x623 = -10;
	static volatile uint8_t x624 = UINT8_MAX;
	volatile int32_t t133 = -38;

    t133 = ((x621-x622)<=(x623!=x624));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x625 = INT32_MIN;
	volatile int16_t x626 = -7;
	int8_t x627 = -1;
	uint8_t x628 = 30U;
	volatile int32_t t134 = 92717473;

    t134 = ((x625-x626)<=(x627!=x628));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x629 = 0;
	volatile int32_t t135 = 1;

    t135 = ((x629-x630)<=(x631!=x632));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x634 = INT64_MIN;
	volatile int16_t x635 = -87;
	int16_t x636 = -1;
	volatile int32_t t136 = -185626;

    t136 = ((x633-x634)<=(x635!=x636));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x641 = 0U;
	int16_t x642 = -790;
	volatile uint16_t x643 = 7020U;
	static int32_t x644 = -1;
	volatile int32_t t137 = 2892;

    t137 = ((x641-x642)<=(x643!=x644));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x645 = 2U;
	int64_t x646 = -74290000665270569LL;
	int64_t x647 = 312528341193781LL;
	static int64_t x648 = -164163LL;
	int32_t t138 = 99;

    t138 = ((x645-x646)<=(x647!=x648));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x649 = UINT64_MAX;
	uint32_t x650 = 933789U;
	volatile uint64_t x651 = 7LLU;
	static volatile int64_t x652 = -222LL;
	static volatile int32_t t139 = 3878433;

    t139 = ((x649-x650)<=(x651!=x652));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x653 = -1;
	uint32_t x654 = 2699882U;
	int64_t x655 = -1LL;
	int16_t x656 = INT16_MIN;
	volatile int32_t t140 = 514200714;

    t140 = ((x653-x654)<=(x655!=x656));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x657 = 201;
	uint8_t x658 = 0U;

    t141 = ((x657-x658)<=(x659!=x660));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x661 = 100U;
	uint16_t x662 = UINT16_MAX;
	uint8_t x663 = UINT8_MAX;
	volatile int32_t t142 = -15;

    t142 = ((x661-x662)<=(x663!=x664));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x670 = UINT32_MAX;
	int32_t x671 = -1;
	static int8_t x672 = INT8_MIN;
	static volatile int32_t t143 = 716;

    t143 = ((x669-x670)<=(x671!=x672));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x673 = -1;
	int16_t x674 = INT16_MIN;
	uint8_t x675 = 1U;
	int32_t t144 = -5809104;

    t144 = ((x673-x674)<=(x675!=x676));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x677 = 740501U;
	int32_t x679 = INT32_MIN;
	volatile int64_t x680 = INT64_MIN;
	volatile int32_t t145 = 11;

    t145 = ((x677-x678)<=(x679!=x680));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x681 = -1LL;
	uint8_t x682 = 7U;
	int8_t x683 = INT8_MIN;

    t146 = ((x681-x682)<=(x683!=x684));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x685 = 1;
	int32_t x686 = -6818405;
	volatile uint8_t x687 = 6U;
	int32_t x688 = -1024616;

    t147 = ((x685-x686)<=(x687!=x688));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x689 = UINT32_MAX;
	static volatile uint8_t x690 = 36U;
	static volatile int64_t x691 = -748744602134263094LL;
	int32_t t148 = 1;

    t148 = ((x689-x690)<=(x691!=x692));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x695 = 16038;
	uint16_t x696 = UINT16_MAX;
	int32_t t149 = -128280;

    t149 = ((x693-x694)<=(x695!=x696));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x697 = UINT8_MAX;
	int64_t x698 = 252939471711413LL;
	static uint8_t x699 = 25U;
	int8_t x700 = 2;
	volatile int32_t t150 = 135;

    t150 = ((x697-x698)<=(x699!=x700));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x705 = INT8_MIN;
	int32_t x706 = INT32_MIN;
	int64_t x707 = INT64_MIN;
	static int64_t x708 = 13706901LL;
	volatile int32_t t151 = -100662;

    t151 = ((x705-x706)<=(x707!=x708));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x709 = -1LL;
	uint16_t x710 = 2U;
	uint16_t x711 = 3U;
	int64_t x712 = 110966212174435LL;
	static volatile int32_t t152 = -9653;

    t152 = ((x709-x710)<=(x711!=x712));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x717 = INT8_MIN;
	int64_t x718 = -6162LL;
	volatile int32_t t153 = -79014528;

    t153 = ((x717-x718)<=(x719!=x720));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x722 = INT16_MAX;
	uint16_t x723 = UINT16_MAX;
	volatile int32_t t154 = 518;

    t154 = ((x721-x722)<=(x723!=x724));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x725 = INT16_MIN;
	int8_t x727 = 3;
	volatile int16_t x728 = -3255;
	int32_t t155 = 1052833428;

    t155 = ((x725-x726)<=(x727!=x728));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x730 = INT32_MIN;
	static int32_t x731 = -221;
	uint32_t x732 = 41169U;
	volatile int32_t t156 = -6000176;

    t156 = ((x729-x730)<=(x731!=x732));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x733 = -1;
	int8_t x734 = INT8_MAX;
	int32_t x735 = -3;
	int64_t x736 = INT64_MIN;
	volatile int32_t t157 = 46473;

    t157 = ((x733-x734)<=(x735!=x736));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x737 = 39U;
	int16_t x740 = -14541;
	volatile int32_t t158 = 1941071;

    t158 = ((x737-x738)<=(x739!=x740));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x741 = UINT64_MAX;
	uint8_t x742 = 5U;
	static int32_t t159 = 106450;

    t159 = ((x741-x742)<=(x743!=x744));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x745 = 27;
	uint8_t x746 = 10U;
	static int32_t x747 = INT32_MIN;
	static volatile int16_t x748 = INT16_MAX;
	static volatile int32_t t160 = 788021853;

    t160 = ((x745-x746)<=(x747!=x748));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x749 = INT16_MIN;
	int32_t x750 = INT32_MIN;
	static int64_t x751 = -1LL;
	volatile int8_t x752 = INT8_MIN;
	volatile int32_t t161 = -505419;

    t161 = ((x749-x750)<=(x751!=x752));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x753 = UINT32_MAX;
	int32_t x754 = 1795;
	int32_t x755 = -1;
	int8_t x756 = INT8_MAX;

    t162 = ((x753-x754)<=(x755!=x756));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x757 = INT8_MAX;
	volatile int8_t x758 = 0;
	volatile int32_t x760 = INT32_MIN;
	volatile int32_t t163 = -2;

    t163 = ((x757-x758)<=(x759!=x760));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x761 = -1;
	int64_t x763 = INT64_MAX;
	uint16_t x764 = 23406U;
	volatile int32_t t164 = -87537136;

    t164 = ((x761-x762)<=(x763!=x764));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x765 = -3338248LL;
	int16_t x766 = INT16_MAX;
	int32_t x767 = -167769056;
	static int16_t x768 = INT16_MIN;
	volatile int32_t t165 = -118;

    t165 = ((x765-x766)<=(x767!=x768));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x770 = -1LL;
	uint8_t x771 = 2U;

    t166 = ((x769-x770)<=(x771!=x772));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x777 = INT64_MIN;
	volatile int16_t x778 = -5346;
	static int32_t x779 = -1;
	int16_t x780 = -3;

    t167 = ((x777-x778)<=(x779!=x780));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x781 = INT8_MIN;
	int32_t x782 = 2711719;
	volatile int32_t x783 = INT32_MIN;
	int64_t x784 = -1LL;

    t168 = ((x781-x782)<=(x783!=x784));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x785 = -1LL;
	int64_t x786 = INT64_MIN;
	static int32_t x787 = 3564082;
	static uint64_t x788 = 258047951LLU;
	volatile int32_t t169 = 0;

    t169 = ((x785-x786)<=(x787!=x788));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x789 = INT8_MIN;
	int8_t x790 = -1;
	volatile uint64_t x791 = 1852754380307LLU;
	int8_t x792 = INT8_MIN;
	int32_t t170 = -118;

    t170 = ((x789-x790)<=(x791!=x792));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x793 = INT16_MIN;
	volatile int16_t x794 = -14578;
	static int32_t t171 = 198;

    t171 = ((x793-x794)<=(x795!=x796));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x797 = 965349432517LLU;
	int8_t x798 = INT8_MIN;
	int8_t x799 = INT8_MIN;
	volatile int32_t t172 = -5339037;

    t172 = ((x797-x798)<=(x799!=x800));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x803 = -19222;
	volatile int32_t t173 = 912535;

    t173 = ((x801-x802)<=(x803!=x804));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int8_t x805 = -1;
	static int64_t x806 = -1LL;
	uint64_t x807 = UINT64_MAX;
	static volatile int32_t t174 = 240;

    t174 = ((x805-x806)<=(x807!=x808));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x809 = INT16_MIN;
	int8_t x810 = -1;
	static uint32_t x811 = 1010458102U;
	static int16_t x812 = INT16_MIN;
	volatile int32_t t175 = -451107850;

    t175 = ((x809-x810)<=(x811!=x812));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x814 = 1429933205461LL;
	int16_t x815 = INT16_MIN;
	uint8_t x816 = 0U;
	static volatile int32_t t176 = 1;

    t176 = ((x813-x814)<=(x815!=x816));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x818 = INT8_MAX;
	uint32_t x819 = 5U;
	volatile int32_t t177 = -227476021;

    t177 = ((x817-x818)<=(x819!=x820));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x821 = 29U;

    t178 = ((x821-x822)<=(x823!=x824));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x825 = 27U;
	int32_t x826 = -588901;
	static uint16_t x827 = UINT16_MAX;
	static int8_t x828 = -1;
	static volatile int32_t t179 = -17403;

    t179 = ((x825-x826)<=(x827!=x828));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x829 = -1;
	int32_t x830 = INT32_MAX;
	int8_t x832 = INT8_MIN;
	int32_t t180 = 706902053;

    t180 = ((x829-x830)<=(x831!=x832));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x833 = UINT8_MAX;
	uint32_t x834 = 55990U;
	static int16_t x835 = 7;
	uint64_t x836 = UINT64_MAX;
	volatile int32_t t181 = -9220102;

    t181 = ((x833-x834)<=(x835!=x836));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x837 = INT8_MIN;
	static int16_t x838 = 63;
	int8_t x839 = 5;
	volatile int32_t x840 = -8;
	int32_t t182 = 3519152;

    t182 = ((x837-x838)<=(x839!=x840));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x841 = 0U;
	int8_t x842 = INT8_MIN;
	uint16_t x843 = UINT16_MAX;
	int32_t t183 = -1401;

    t183 = ((x841-x842)<=(x843!=x844));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x845 = -1LL;
	static uint64_t x846 = 3707682245167633LLU;
	static int8_t x847 = -1;
	volatile uint32_t x848 = UINT32_MAX;

    t184 = ((x845-x846)<=(x847!=x848));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint16_t x849 = 7325U;
	int8_t x850 = INT8_MAX;
	static volatile int64_t x851 = 1928LL;
	volatile int32_t t185 = -88565155;

    t185 = ((x849-x850)<=(x851!=x852));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x858 = INT8_MAX;
	int16_t x859 = 0;
	volatile uint64_t x860 = 471383LLU;
	static volatile int32_t t186 = 73437663;

    t186 = ((x857-x858)<=(x859!=x860));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x869 = 3984U;
	static uint32_t x871 = 28516U;
	uint64_t x872 = UINT64_MAX;
	static volatile int32_t t187 = -4941;

    t187 = ((x869-x870)<=(x871!=x872));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x875 = UINT8_MAX;
	volatile int32_t t188 = 19807928;

    t188 = ((x873-x874)<=(x875!=x876));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x877 = UINT16_MAX;
	int64_t x878 = 6964159LL;
	int64_t x880 = INT64_MIN;

    t189 = ((x877-x878)<=(x879!=x880));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x881 = -7149190417343993LL;
	uint16_t x884 = UINT16_MAX;

    t190 = ((x881-x882)<=(x883!=x884));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x885 = 12U;
	uint64_t x886 = 5LLU;
	int64_t x887 = 333921LL;
	volatile int32_t t191 = 7725010;

    t191 = ((x885-x886)<=(x887!=x888));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x889 = 26;
	static int32_t x891 = INT32_MIN;
	int16_t x892 = INT16_MIN;
	int32_t t192 = 0;

    t192 = ((x889-x890)<=(x891!=x892));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x893 = 1953U;
	uint64_t x895 = UINT64_MAX;
	int32_t x896 = -15;
	static volatile int32_t t193 = -356;

    t193 = ((x893-x894)<=(x895!=x896));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x898 = INT32_MAX;
	int32_t x899 = -1;
	int32_t x900 = -1;
	volatile int32_t t194 = 5004340;

    t194 = ((x897-x898)<=(x899!=x900));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x901 = -70162LL;
	uint32_t x902 = 5016U;
	int32_t x903 = INT32_MAX;
	int8_t x904 = 11;
	int32_t t195 = -39524700;

    t195 = ((x901-x902)<=(x903!=x904));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x913 = 1U;
	volatile uint8_t x914 = 87U;
	int64_t x916 = INT64_MIN;
	int32_t t196 = -26717;

    t196 = ((x913-x914)<=(x915!=x916));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x917 = 1828915638LLU;
	int16_t x918 = 0;
	int64_t x919 = INT64_MAX;
	int32_t t197 = 1047690484;

    t197 = ((x917-x918)<=(x919!=x920));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x922 = UINT64_MAX;
	int16_t x923 = -12140;
	int32_t x924 = INT32_MAX;
	volatile int32_t t198 = -13;

    t198 = ((x921-x922)<=(x923!=x924));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x925 = 9527U;
	volatile int16_t x926 = -31;
	static int16_t x927 = -135;
	static volatile int32_t t199 = -6188019;

    t199 = ((x925-x926)<=(x927!=x928));

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

