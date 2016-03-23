
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

static int8_t x5 = 3;
int16_t x8 = INT16_MIN;
static int64_t x10 = -49LL;
int8_t x13 = INT8_MAX;
volatile int32_t t2 = 5199566;
static int64_t x18 = -1LL;
uint64_t x31 = 735427946528LLU;
static int64_t x37 = -3477008LL;
int32_t x40 = INT32_MIN;
int32_t x41 = 461611;
uint8_t x43 = 5U;
uint64_t x44 = 3495644298108968774LLU;
uint16_t x53 = UINT16_MAX;
uint64_t x56 = 5967LLU;
uint16_t x72 = 8015U;
uint64_t t15 = 7891LLU;
static int64_t x88 = INT64_MIN;
uint32_t x89 = 225U;
int8_t x91 = -1;
uint8_t x93 = UINT8_MAX;
int8_t x95 = INT8_MIN;
uint32_t t18 = 965723U;
int32_t x99 = -1;
uint64_t x115 = 2006813760LLU;
volatile uint64_t t20 = 5598551759125801984LLU;
volatile uint8_t x118 = 36U;
volatile int32_t x123 = -1;
static uint32_t t22 = 3666032U;
uint16_t x126 = 3U;
volatile int64_t x127 = -1170857LL;
volatile uint64_t x128 = 15086LLU;
int32_t x135 = -33300;
int32_t x136 = 30583;
int8_t x137 = -1;
static int32_t x140 = INT32_MAX;
uint8_t x142 = 59U;
uint8_t x161 = 2U;
static volatile uint64_t t32 = 5247339504682545LLU;
static int16_t x185 = -6;
volatile int8_t x187 = 58;
static uint32_t t34 = 2969237U;
uint8_t x197 = 5U;
volatile int32_t t36 = -361;
uint8_t x205 = UINT8_MAX;
static volatile int8_t x212 = INT8_MIN;
int32_t t39 = 56;
volatile uint32_t t41 = 756235700U;
int32_t x226 = 6;
int16_t x228 = INT16_MIN;
volatile int64_t t43 = INT64_MAX;
static int32_t x244 = -1;
volatile int32_t t44 = -6;
int16_t x247 = -1;
int64_t x254 = INT64_MIN;
uint32_t x256 = 3701U;
int16_t x257 = INT16_MIN;
volatile int16_t x258 = INT16_MIN;
uint16_t x265 = 16726U;
uint32_t x266 = UINT32_MAX;
static volatile int32_t t50 = 719515;
int16_t x278 = INT16_MIN;
static int32_t t52 = INT32_MIN;
volatile int64_t x285 = 18732076824700866LL;
uint16_t x286 = UINT16_MAX;
uint16_t x295 = 5828U;
int64_t t54 = 452504740516078528LL;
uint16_t x297 = UINT16_MAX;
static uint32_t x301 = 1312363603U;
volatile int8_t x313 = INT8_MAX;
volatile uint16_t x320 = 16317U;
int8_t x330 = -1;
uint64_t t61 = 130288173815868912LLU;
uint64_t x333 = 4901927LLU;
uint64_t x336 = 488873792LLU;
int64_t x339 = -454613425190481532LL;
static int16_t x340 = -1;
static volatile int64_t t63 = -1811012967042143LL;
int64_t t64 = -28918LL;
int16_t x349 = -1;
volatile uint64_t t66 = 11307746453LLU;
volatile uint16_t x360 = 4U;
static volatile int32_t t68 = -1282159;
uint8_t x372 = 3U;
static int32_t x376 = INT32_MIN;
static uint16_t x381 = 91U;
volatile uint32_t t72 = 8000U;
int8_t x396 = INT8_MIN;
int64_t t74 = -139355LL;
int8_t x405 = -14;
uint64_t x408 = 165290LLU;
static int64_t x412 = INT64_MIN;
int32_t x414 = -1;
int8_t x431 = -18;
volatile int16_t x434 = -1;
uint16_t x435 = 1U;
static uint32_t x436 = UINT32_MAX;
uint32_t t81 = 31556U;
int64_t x456 = INT64_MAX;
int64_t x464 = -1LL;
static uint32_t x471 = UINT32_MAX;
int8_t x472 = -1;
volatile int64_t t89 = 1099801645253043LL;
int8_t x473 = -1;
volatile int32_t x477 = -1;
static int32_t t91 = 15568497;
uint16_t x489 = 1872U;
uint32_t x499 = UINT32_MAX;
static uint32_t t95 = 11527U;
int64_t x508 = 697LL;
int8_t x515 = INT8_MAX;
static int8_t x524 = -1;
volatile int32_t t100 = -54;
uint16_t x541 = UINT16_MAX;
volatile uint32_t x543 = 852U;
uint8_t x544 = 1U;
int8_t x545 = 1;
int16_t x547 = INT16_MIN;
int16_t x550 = -1;
static int8_t x558 = INT8_MIN;
int8_t x567 = -1;
uint64_t t109 = 3281793446645080985LLU;
uint32_t x579 = 468716U;
static volatile int64_t x585 = INT64_MIN;
volatile int64_t t113 = 34283883899LL;
static volatile int32_t x592 = INT32_MIN;
volatile int16_t x600 = INT16_MIN;
volatile int64_t t116 = -1410363LL;
volatile uint64_t x605 = 71870183LLU;
int64_t x608 = INT64_MAX;
static volatile int8_t x613 = -1;
static uint64_t x614 = UINT64_MAX;
static volatile uint64_t t119 = 3851642049436145LLU;
volatile uint64_t t121 = 70228688560044210LLU;
volatile uint8_t x627 = 0U;
int16_t x630 = 7;
int16_t x636 = INT16_MIN;
int8_t x645 = -1;
uint32_t x646 = UINT32_MAX;
static int32_t x649 = 417;
int16_t x654 = 6890;
volatile int16_t x657 = INT16_MIN;
uint64_t t130 = 182905346374LLU;
static int64_t x673 = INT64_MIN;
uint16_t x674 = 329U;
volatile uint64_t t134 = 60LLU;
int64_t x680 = INT64_MIN;
int64_t t135 = -450LL;
static int16_t x682 = INT16_MAX;
volatile uint64_t x683 = 17456772788201482LLU;
volatile int32_t t137 = INT32_MAX;
int16_t x689 = INT16_MAX;
int64_t x690 = -250687117266612809LL;
volatile uint32_t x693 = 2238U;
static uint64_t x696 = 73820LLU;
int16_t x701 = -484;
int32_t x704 = 12;
int64_t x706 = -28203812LL;
volatile uint8_t x710 = 4U;
volatile uint16_t x713 = UINT16_MAX;
int8_t x721 = -3;
int8_t x724 = -1;
int8_t x730 = -1;
static uint64_t x732 = 6802414532LLU;
volatile uint16_t x735 = 5796U;
static int64_t t149 = -985LL;
static uint64_t x737 = 5052214581LLU;
int16_t x739 = INT16_MAX;
volatile uint64_t t150 = 94964795LLU;
static uint64_t x748 = 2014LLU;
volatile uint8_t x750 = 3U;
int32_t x760 = INT32_MIN;
volatile uint32_t x766 = 382U;
uint32_t t157 = 141124U;
int64_t x774 = -1LL;
int16_t x779 = -1;
static volatile uint16_t x784 = 7137U;
volatile uint64_t x791 = 8310164343481978256LLU;
volatile int64_t x797 = -26408555188LL;
static uint16_t x811 = UINT16_MAX;
int64_t t165 = 1LL;
uint32_t x821 = 61620U;
uint64_t x822 = 4056549LLU;
static uint16_t x823 = UINT16_MAX;
static uint64_t x824 = 33765798336946LLU;
volatile uint64_t x828 = 2838435926033609259LLU;
int8_t x830 = INT8_MIN;
static uint64_t x831 = 591637751844858LLU;
static int64_t x834 = -1LL;
int16_t x840 = -1;
volatile uint64_t t172 = 40175LLU;
int32_t x859 = INT32_MIN;
volatile uint64_t t176 = 1LLU;
volatile int64_t t177 = 2395782697125392LL;
int8_t x874 = INT8_MAX;
static volatile uint32_t t181 = 91177503U;
int16_t x889 = -84;
int8_t x890 = -1;
int64_t x893 = INT64_MAX;
volatile uint16_t x904 = UINT16_MAX;
volatile uint64_t t185 = 1741870223LLU;
static int64_t t187 = 9920060LL;
int64_t x924 = INT64_MIN;
static volatile int64_t t188 = -338LL;
static volatile uint16_t x926 = 969U;
volatile int64_t t189 = 4634LL;
int32_t x935 = -1;
int16_t x936 = -1089;
volatile uint64_t t193 = 28405LLU;
static int8_t x950 = 2;
int32_t t194 = 383;
int8_t x954 = INT8_MAX;
volatile uint16_t x955 = 168U;
static int16_t x967 = -755;


void f0(void) {
    	int64_t x6 = INT64_MIN;
	int8_t x7 = INT8_MIN;
	int64_t t0 = 684169476LL;

    t0 = ((x5%(x6-x7))^x8);

    if (t0 != -32765LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = INT16_MIN;
	uint8_t x11 = 2U;
	uint8_t x12 = 8U;
	int64_t t1 = 102779913496LL;

    t1 = ((x9%(x10-x11))^x12);

    if (t1 != -18LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x14 = UINT8_MAX;
	int16_t x15 = -1;
	static volatile int8_t x16 = -33;

    t2 = ((x13%(x14-x15))^x16);

    if (t2 != -96) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = 76250818U;
	uint64_t x19 = 1573977896533528LLU;
	uint32_t x20 = 128134535U;
	uint64_t t3 = 514985857LLU;

    t3 = ((x17%(x18-x19))^x20);

    if (t3 != 52974405LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x21 = 15;
	int32_t x22 = -1;
	static uint8_t x23 = 55U;
	int32_t x24 = INT32_MAX;
	volatile int32_t t4 = 1;

    t4 = ((x21%(x22-x23))^x24);

    if (t4 != 2147483632) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x25 = 30538;
	uint32_t x26 = 1238985203U;
	int32_t x27 = -1;
	int32_t x28 = -195;
	uint32_t t5 = 4066411U;

    t5 = ((x25%(x26-x27))^x28);

    if (t5 != 4294936695U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = UINT8_MAX;
	uint16_t x30 = UINT16_MAX;
	int8_t x32 = -8;
	static volatile uint64_t t6 = 2369904612LLU;

    t6 = ((x29%(x30-x31))^x32);

    if (t6 != 18446744073709551367LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x38 = INT8_MIN;
	volatile int8_t x39 = -1;
	int64_t t7 = 982017554266LL;

    t7 = ((x37%(x38-x39))^x40);

    if (t7 != 2147483646LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x42 = -1;
	uint64_t t8 = 59757971291878LLU;

    t8 = ((x41%(x42-x43))^x44);

    if (t8 != 3495644298108968775LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x45 = -1LL;
	int8_t x46 = -7;
	static int64_t x47 = -1LL;
	int8_t x48 = -1;
	int64_t t9 = 19883606874117131LL;

    t9 = ((x45%(x46-x47))^x48);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = -1;
	int64_t x50 = INT64_MAX;
	int32_t x51 = 270;
	uint64_t x52 = 171875530LLU;
	volatile uint64_t t10 = 2067474033539750669LLU;

    t10 = ((x49%(x50-x51))^x52);

    if (t10 != 18446744073537676085LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x54 = INT8_MAX;
	uint8_t x55 = 7U;
	static uint64_t t11 = 23197381LLU;

    t11 = ((x53%(x54-x55))^x56);

    if (t11 != 5952LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x61 = 594537301LL;
	static volatile uint32_t x62 = 82052U;
	uint64_t x63 = UINT64_MAX;
	uint8_t x64 = UINT8_MAX;
	volatile uint64_t t12 = 34LLU;

    t12 = ((x61%(x62-x63))^x64);

    if (t12 != 63403LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x69 = -6;
	int32_t x70 = 97009675;
	static volatile uint8_t x71 = UINT8_MAX;
	int32_t t13 = -13295150;

    t13 = ((x69%(x70-x71))^x72);

    if (t13 != -8011) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x77 = INT64_MIN;
	static int32_t x78 = -3141;
	volatile uint64_t x79 = 5272691519LLU;
	static volatile int64_t x80 = 1891995591144LL;
	uint64_t t14 = 5210291533763836LLU;

    t14 = ((x77%(x78-x79))^x80);

    if (t14 != 9223373928850366952LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x81 = -1;
	volatile int64_t x82 = INT64_MIN;
	uint64_t x83 = 14659319188943LLU;
	int16_t x84 = INT16_MIN;

    t15 = ((x81%(x82-x83))^x84);

    if (t15 != 18446714755071155101LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x85 = INT8_MIN;
	int32_t x86 = 402;
	static uint8_t x87 = 41U;
	int64_t t16 = -3227177LL;

    t16 = ((x85%(x86-x87))^x88);

    if (t16 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x90 = 6U;
	int8_t x92 = -1;
	volatile uint32_t t17 = 59U;

    t17 = ((x89%(x90-x91))^x92);

    if (t17 != 4294967294U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x94 = 60U;
	static int32_t x96 = 4614509;

    t18 = ((x93%(x94-x95))^x96);

    if (t18 != 4614446U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x97 = INT32_MIN;
	int16_t x98 = INT16_MAX;
	int64_t x100 = -7201966LL;
	volatile int64_t t19 = 523LL;

    t19 = ((x97%(x98-x99))^x100);

    if (t19 != -7201966LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x113 = UINT64_MAX;
	int8_t x114 = INT8_MIN;
	int32_t x116 = INT32_MAX;

    t20 = ((x113%(x114-x115))^x116);

    if (t20 != 140669760LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x117 = INT16_MIN;
	uint8_t x119 = 1U;
	int16_t x120 = -1;
	int32_t t21 = -30250478;

    t21 = ((x117%(x118-x119))^x120);

    if (t21 != 7) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x121 = 20U;
	uint32_t x122 = 2U;
	static uint32_t x124 = 60459U;

    t22 = ((x121%(x122-x123))^x124);

    if (t22 != 60457U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x125 = INT16_MAX;
	volatile uint64_t t23 = 8095592567072270LLU;

    t23 = ((x125%(x126-x127))^x128);

    if (t23 != 17681LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x133 = INT8_MAX;
	static int16_t x134 = -7265;
	volatile int32_t t24 = 11918;

    t24 = ((x133%(x134-x135))^x136);

    if (t24 != 30472) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x138 = 14665U;
	volatile int8_t x139 = INT8_MAX;
	volatile int32_t t25 = INT32_MIN;

    t25 = ((x137%(x138-x139))^x140);

    if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x141 = 46287776829693LLU;
	static uint32_t x143 = UINT32_MAX;
	int64_t x144 = -1LL;
	uint64_t t26 = 6915232123678766623LLU;

    t26 = ((x141%(x142-x143))^x144);

    if (t26 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x145 = -1;
	volatile int32_t x146 = INT32_MIN;
	uint32_t x147 = UINT32_MAX;
	int32_t x148 = -1724;
	volatile uint32_t t27 = 963U;

    t27 = ((x145%(x146-x147))^x148);

    if (t27 != 2147485370U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x153 = 0U;
	static int8_t x154 = 5;
	volatile int16_t x155 = 1;
	static uint64_t x156 = 105LLU;
	volatile uint64_t t28 = 57LLU;

    t28 = ((x153%(x154-x155))^x156);

    if (t28 != 105LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x162 = -1;
	int16_t x163 = -6962;
	int16_t x164 = INT16_MIN;
	int32_t t29 = 4828;

    t29 = ((x161%(x162-x163))^x164);

    if (t29 != -32766) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x165 = 6U;
	static uint16_t x166 = 3U;
	volatile uint32_t x167 = UINT32_MAX;
	uint32_t x168 = 1480279U;
	uint32_t t30 = 4831U;

    t30 = ((x165%(x166-x167))^x168);

    if (t30 != 1480277U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x169 = INT16_MIN;
	int32_t x170 = 592;
	int32_t x171 = -1;
	int16_t x172 = -11138;
	int32_t t31 = -238104187;

    t31 = ((x169%(x170-x171))^x172);

    if (t31 != 11033) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x173 = 3U;
	volatile int8_t x174 = INT8_MIN;
	uint32_t x175 = UINT32_MAX;
	static uint64_t x176 = UINT64_MAX;

    t32 = ((x173%(x174-x175))^x176);

    if (t32 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x177 = INT16_MIN;
	int8_t x178 = INT8_MIN;
	static int8_t x179 = -1;
	int64_t x180 = INT64_MIN;
	static int64_t t33 = 245528317058225LL;

    t33 = ((x177%(x178-x179))^x180);

    if (t33 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x186 = 41U;
	static int16_t x188 = -1;

    t34 = ((x185%(x186-x187))^x188);

    if (t34 != 4294967284U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x189 = INT32_MIN;
	volatile int32_t x190 = 52628;
	int8_t x191 = 2;
	static int32_t x192 = -1;
	int32_t t35 = 67;

    t35 = ((x189%(x190-x191))^x192);

    if (t35 != 27091) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x198 = 0U;
	int16_t x199 = INT16_MIN;
	volatile uint16_t x200 = 25U;

    t36 = ((x197%(x198-x199))^x200);

    if (t36 != 28) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x201 = -1;
	uint64_t x202 = 212649957924820LLU;
	static uint32_t x203 = UINT32_MAX;
	volatile int16_t x204 = -1;
	volatile uint64_t t37 = 7LLU;

    t37 = ((x201%(x202-x203))^x204);

    if (t37 != 18446585970239378700LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x206 = INT32_MIN;
	uint32_t x207 = 107U;
	int32_t x208 = -7116575;
	volatile uint32_t t38 = 102618922U;

    t38 = ((x205%(x206-x207))^x208);

    if (t38 != 4287850526U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x209 = INT16_MIN;
	static int16_t x210 = INT16_MAX;
	volatile int8_t x211 = 3;

    t39 = ((x209%(x210-x211))^x212);

    if (t39 != 124) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x213 = INT32_MAX;
	int8_t x214 = INT8_MIN;
	int64_t x215 = INT64_MIN;
	int8_t x216 = INT8_MIN;
	volatile int64_t t40 = -453926248029163147LL;

    t40 = ((x213%(x214-x215))^x216);

    if (t40 != -2147483521LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x221 = 2974U;
	uint8_t x222 = 70U;
	uint32_t x223 = 22U;
	static uint16_t x224 = 7809U;

    t41 = ((x221%(x222-x223))^x224);

    if (t41 != 7855U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x225 = 67U;
	uint64_t x227 = 79820729LLU;
	uint64_t t42 = 2258290099122807116LLU;

    t42 = ((x225%(x226-x227))^x228);

    if (t42 != 18446744073709518915LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x233 = -1;
	volatile int32_t x234 = INT32_MAX;
	volatile uint16_t x235 = UINT16_MAX;
	int64_t x236 = INT64_MIN;

    t43 = ((x233%(x234-x235))^x236);

    if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x241 = 16;
	uint8_t x242 = UINT8_MAX;
	int8_t x243 = INT8_MIN;

    t44 = ((x241%(x242-x243))^x244);

    if (t44 != -17) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x245 = -1910462LL;
	int16_t x246 = 49;
	int32_t x248 = -1;
	int64_t t45 = 675273567157615LL;

    t45 = ((x245%(x246-x247))^x248);

    if (t45 != 11LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x249 = INT64_MAX;
	int32_t x250 = -3262;
	int16_t x251 = -54;
	int16_t x252 = INT16_MIN;
	volatile int64_t t46 = 142723LL;

    t46 = ((x249%(x250-x251))^x252);

    if (t46 != -32537LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x253 = INT8_MAX;
	static int16_t x255 = -1;
	volatile int64_t t47 = 960040571703823457LL;

    t47 = ((x253%(x254-x255))^x256);

    if (t47 != 3594LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x259 = INT8_MAX;
	int8_t x260 = -4;
	static int32_t t48 = -29;

    t48 = ((x257%(x258-x259))^x260);

    if (t48 != 32764) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x267 = INT8_MIN;
	static int32_t x268 = 556473430;
	volatile uint32_t t49 = 632U;

    t49 = ((x265%(x266-x267))^x268);

    if (t49 != 556473359U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x269 = 96080;
	int16_t x270 = INT16_MIN;
	int16_t x271 = 1;
	int32_t x272 = INT32_MIN;

    t50 = ((x269%(x270-x271))^x272);

    if (t50 != -2147453106) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x277 = 184U;
	int8_t x279 = 35;
	int8_t x280 = INT8_MAX;
	static int32_t t51 = -161;

    t51 = ((x277%(x278-x279))^x280);

    if (t51 != 199) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MIN;
	static int16_t x283 = -1;
	int32_t x284 = INT32_MAX;

    t52 = ((x281%(x282-x283))^x284);

    if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x287 = -1;
	int8_t x288 = -1;
	volatile int64_t t53 = 1811648243752LL;

    t53 = ((x285%(x286-x287))^x288);

    if (t53 != -42947LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x293 = UINT8_MAX;
	volatile int8_t x294 = INT8_MIN;
	int64_t x296 = 6820LL;

    t54 = ((x293%(x294-x295))^x296);

    if (t54 != 6747LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x298 = UINT32_MAX;
	static int16_t x299 = INT16_MIN;
	static uint64_t x300 = 610979645LLU;
	uint64_t t55 = 212045010798LLU;

    t55 = ((x297%(x298-x299))^x300);

    if (t55 != 610979644LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x302 = 992777269631LL;
	uint16_t x303 = UINT16_MAX;
	int8_t x304 = INT8_MIN;
	volatile int64_t t56 = 220788277LL;

    t56 = ((x301%(x302-x303))^x304);

    if (t56 != -1312363565LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x309 = INT64_MIN;
	static int8_t x310 = 12;
	volatile int32_t x311 = 9221;
	uint64_t x312 = 12869438LLU;
	volatile uint64_t t57 = 137994LLU;

    t57 = ((x309%(x310-x311))^x312);

    if (t57 != 18446744073696684436LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x314 = INT16_MIN;
	static uint32_t x315 = 320359U;
	static int32_t x316 = INT32_MAX;
	volatile uint32_t t58 = 5304U;

    t58 = ((x313%(x314-x315))^x316);

    if (t58 != 2147483520U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x317 = 2356510880LLU;
	static int32_t x318 = 1;
	int8_t x319 = 13;
	volatile uint64_t t59 = 7527LLU;

    t59 = ((x317%(x318-x319))^x320);

    if (t59 != 2356526877LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x325 = 5111U;
	static int8_t x326 = 4;
	uint64_t x327 = 30146LLU;
	int32_t x328 = INT32_MAX;
	uint64_t t60 = 1510612LLU;

    t60 = ((x325%(x326-x327))^x328);

    if (t60 != 2147478536LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x329 = INT8_MIN;
	volatile uint16_t x331 = UINT16_MAX;
	uint64_t x332 = UINT64_MAX;

    t61 = ((x329%(x330-x331))^x332);

    if (t61 != 127LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x334 = 812396716U;
	uint8_t x335 = UINT8_MAX;
	static volatile uint64_t t62 = 222012894225355LLU;

    t62 = ((x333%(x334-x335))^x336);

    if (t62 != 493441895LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x337 = -1;
	int64_t x338 = -1040567674897241641LL;

    t63 = ((x337%(x338-x339))^x340);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x341 = 7273051;
	static int8_t x342 = -1;
	int64_t x343 = 25477LL;
	static uint16_t x344 = 4U;

    t64 = ((x341%(x342-x343))^x344);

    if (t64 != 11817LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x345 = INT8_MAX;
	int64_t x346 = -1LL;
	static uint32_t x347 = 22023707U;
	int64_t x348 = INT64_MIN;
	volatile int64_t t65 = 11691336379LL;

    t65 = ((x345%(x346-x347))^x348);

    if (t65 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x350 = 521039674229563LL;
	uint64_t x351 = 44860878862742LLU;
	static int8_t x352 = -7;

    t66 = ((x349%(x350-x351))^x352);

    if (t66 != 18446690353715278713LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x353 = INT16_MIN;
	int32_t x354 = -1;
	int8_t x355 = INT8_MAX;
	uint64_t x356 = 710LLU;
	uint64_t t67 = 388394624038025987LLU;

    t67 = ((x353%(x354-x355))^x356);

    if (t67 != 710LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x357 = -1;
	int16_t x358 = -1;
	int32_t x359 = INT32_MIN;

    t68 = ((x357%(x358-x359))^x360);

    if (t68 != -5) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x365 = UINT16_MAX;
	volatile int16_t x366 = INT16_MAX;
	volatile uint8_t x367 = 0U;
	static volatile int8_t x368 = INT8_MAX;
	static int32_t t69 = 133607;

    t69 = ((x365%(x366-x367))^x368);

    if (t69 != 126) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x369 = INT64_MAX;
	uint8_t x370 = UINT8_MAX;
	int64_t x371 = 1755LL;
	int64_t t70 = 250252690LL;

    t70 = ((x369%(x370-x371))^x372);

    if (t70 != 304LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x373 = 3U;
	uint64_t x374 = 38690746073877LLU;
	int32_t x375 = -1;
	static uint64_t t71 = 2640LLU;

    t71 = ((x373%(x374-x375))^x376);

    if (t71 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x382 = 484658407U;
	uint32_t x383 = 24423U;
	int32_t x384 = INT32_MAX;

    t72 = ((x381%(x382-x383))^x384);

    if (t72 != 2147483556U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x385 = 556876783;
	uint16_t x386 = UINT16_MAX;
	static int32_t x387 = -1;
	static volatile int8_t x388 = -1;
	volatile int32_t t73 = -32363832;

    t73 = ((x385%(x386-x387))^x388);

    if (t73 != -17392) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x393 = INT64_MIN;
	uint32_t x394 = UINT32_MAX;
	int16_t x395 = -4413;

    t74 = ((x393%(x394-x395))^x396);

    if (t74 != 96LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x397 = 9903295U;
	uint8_t x398 = UINT8_MAX;
	uint16_t x399 = 6431U;
	uint64_t x400 = 2142237887088522809LLU;
	uint64_t t75 = 1404350LLU;

    t75 = ((x397%(x398-x399))^x400);

    if (t75 != 2142237887098022534LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x406 = UINT16_MAX;
	uint64_t x407 = 3572542606LLU;
	uint64_t t76 = 1157841269987516LLU;

    t76 = ((x405%(x406-x407))^x408);

    if (t76 != 3572312363LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x409 = INT16_MIN;
	int32_t x410 = INT32_MIN;
	int16_t x411 = -4683;
	int64_t t77 = 0LL;

    t77 = ((x409%(x410-x411))^x412);

    if (t77 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint64_t x413 = 404807LLU;
	volatile int32_t x415 = 446648;
	int32_t x416 = INT32_MAX;
	volatile uint64_t t78 = 1LLU;

    t78 = ((x413%(x414-x415))^x416);

    if (t78 != 2147078840LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x421 = 59236U;
	int64_t x422 = INT64_MIN;
	uint64_t x423 = 3332278LLU;
	uint16_t x424 = UINT16_MAX;
	volatile uint64_t t79 = 53650855873079824LLU;

    t79 = ((x421%(x422-x423))^x424);

    if (t79 != 6299LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x429 = 105138LL;
	volatile uint64_t x430 = 251500220866866LLU;
	uint16_t x432 = UINT16_MAX;
	static uint64_t t80 = 1LLU;

    t80 = ((x429%(x430-x431))^x432);

    if (t80 != 91469LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x433 = INT8_MAX;

    t81 = ((x433%(x434-x435))^x436);

    if (t81 != 4294967294U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x437 = INT8_MAX;
	volatile uint8_t x438 = UINT8_MAX;
	static uint64_t x439 = 29705315503LLU;
	uint32_t x440 = 58U;
	volatile uint64_t t82 = 61316LLU;

    t82 = ((x437%(x438-x439))^x440);

    if (t82 != 69LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x441 = INT16_MIN;
	static uint16_t x442 = 115U;
	uint64_t x443 = UINT64_MAX;
	volatile int32_t x444 = -26;
	uint64_t t83 = 203078LLU;

    t83 = ((x441%(x442-x443))^x444);

    if (t83 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x445 = INT16_MIN;
	volatile int32_t x446 = -10093361;
	int64_t x447 = -2352201606757309876LL;
	int64_t x448 = INT64_MIN;
	volatile int64_t t84 = -21580682794608822LL;

    t84 = ((x445%(x446-x447))^x448);

    if (t84 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x453 = -1;
	int8_t x454 = 0;
	int8_t x455 = INT8_MIN;
	int64_t t85 = INT64_MIN;

    t85 = ((x453%(x454-x455))^x456);

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x457 = INT64_MIN;
	uint32_t x458 = 0U;
	volatile int32_t x459 = INT32_MIN;
	int64_t x460 = INT64_MAX;
	volatile int64_t t86 = INT64_MAX;

    t86 = ((x457%(x458-x459))^x460);

    if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x461 = -30;
	int32_t x462 = INT32_MIN;
	int8_t x463 = INT8_MIN;
	int64_t t87 = -1760LL;

    t87 = ((x461%(x462-x463))^x464);

    if (t87 != 29LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x465 = INT32_MIN;
	static uint64_t x466 = 3794931712404071LLU;
	volatile uint32_t x467 = UINT32_MAX;
	uint8_t x468 = 43U;
	volatile uint64_t t88 = 18428315901LLU;

    t88 = ((x465%(x466-x467))^x468);

    if (t88 != 3396822819336587LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x469 = 102873189089957LL;
	uint16_t x470 = 459U;

    t89 = ((x469%(x470-x471))^x472);

    if (t89 != -398LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x474 = INT64_MIN;
	int64_t x475 = -1LL;
	int32_t x476 = INT32_MIN;
	int64_t t90 = 1LL;

    t90 = ((x473%(x474-x475))^x476);

    if (t90 != 2147483647LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x478 = UINT8_MAX;
	volatile uint8_t x479 = 39U;
	int8_t x480 = 2;

    t91 = ((x477%(x478-x479))^x480);

    if (t91 != -3) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x481 = 2621;
	static int16_t x482 = -27;
	int16_t x483 = INT16_MIN;
	uint64_t x484 = 1096612764804LLU;
	uint64_t t92 = 0LLU;

    t92 = ((x481%(x482-x483))^x484);

    if (t92 != 1096612763321LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x485 = UINT64_MAX;
	volatile int32_t x486 = INT32_MAX;
	uint32_t x487 = UINT32_MAX;
	int16_t x488 = INT16_MIN;
	uint64_t t93 = 1290393534112841LLU;

    t93 = ((x485%(x486-x487))^x488);

    if (t93 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x490 = INT32_MIN;
	static int16_t x491 = -1;
	int8_t x492 = -1;
	volatile int32_t t94 = 775087;

    t94 = ((x489%(x490-x491))^x492);

    if (t94 != -1873) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x497 = 1U;
	int16_t x498 = INT16_MIN;
	volatile uint32_t x500 = 58782U;

    t95 = ((x497%(x498-x499))^x500);

    if (t95 != 58783U) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x501 = 723;
	int16_t x502 = -94;
	volatile uint16_t x503 = UINT16_MAX;
	static uint32_t x504 = UINT32_MAX;
	uint32_t t96 = 31281663U;

    t96 = ((x501%(x502-x503))^x504);

    if (t96 != 4294966572U) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x505 = INT32_MIN;
	int16_t x506 = INT16_MIN;
	uint64_t x507 = 3185784105839150122LLU;
	uint64_t t97 = 942747717LLU;

    t97 = ((x505%(x506-x507))^x508);

    if (t97 != 3185784103691699859LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x513 = INT8_MAX;
	volatile uint64_t x514 = 303979665959494LLU;
	int16_t x516 = INT16_MAX;
	uint64_t t98 = 30LLU;

    t98 = ((x513%(x514-x515))^x516);

    if (t98 != 32640LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x517 = INT16_MIN;
	static volatile uint8_t x518 = UINT8_MAX;
	static uint64_t x519 = 7748342071LLU;
	int8_t x520 = 22;
	static uint64_t t99 = 32820363633393LLU;

    t99 = ((x517%(x518-x519))^x520);

    if (t99 != 7748309038LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint8_t x521 = 94U;
	uint16_t x522 = UINT16_MAX;
	uint8_t x523 = UINT8_MAX;

    t100 = ((x521%(x522-x523))^x524);

    if (t100 != -95) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x529 = INT8_MAX;
	static int8_t x530 = -3;
	int64_t x531 = INT64_MIN;
	static int16_t x532 = -52;
	volatile int64_t t101 = 253458153759776909LL;

    t101 = ((x529%(x530-x531))^x532);

    if (t101 != -77LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x533 = -1;
	int32_t x534 = INT32_MIN;
	uint32_t x535 = UINT32_MAX;
	int8_t x536 = -1;
	static uint32_t t102 = 38U;

    t102 = ((x533%(x534-x535))^x536);

    if (t102 != 2147483649U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x537 = 2667013LL;
	volatile int32_t x538 = 10713;
	uint8_t x539 = 53U;
	int32_t x540 = -1;
	volatile int64_t t103 = 1985031498495LL;

    t103 = ((x537%(x538-x539))^x540);

    if (t103 != -2014LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x542 = INT8_MIN;
	volatile uint32_t t104 = 1621U;

    t104 = ((x541%(x542-x543))^x544);

    if (t104 != 65534U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x546 = INT64_MIN;
	static volatile uint64_t x548 = 5399873061LLU;
	uint64_t t105 = 350046358013LLU;

    t105 = ((x545%(x546-x547))^x548);

    if (t105 != 5399873060LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x549 = INT16_MIN;
	int64_t x551 = INT64_MIN;
	int16_t x552 = 0;
	int64_t t106 = 5973924438590LL;

    t106 = ((x549%(x550-x551))^x552);

    if (t106 != -32768LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x553 = INT64_MIN;
	int8_t x554 = INT8_MAX;
	volatile uint8_t x555 = 1U;
	int16_t x556 = INT16_MAX;
	int64_t t107 = -214419102269037630LL;

    t107 = ((x553%(x554-x555))^x556);

    if (t107 != -32761LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x557 = 33LLU;
	volatile uint8_t x559 = UINT8_MAX;
	int8_t x560 = INT8_MAX;
	static uint64_t t108 = 175964LLU;

    t108 = ((x557%(x558-x559))^x560);

    if (t108 != 94LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x565 = UINT16_MAX;
	uint64_t x566 = 28341837880896430LLU;
	int32_t x568 = -268462006;

    t109 = ((x565%(x566-x567))^x568);

    if (t109 != 18446744073441077173LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x573 = 109357332U;
	static uint8_t x574 = 3U;
	int32_t x575 = -341;
	volatile uint16_t x576 = 24091U;
	volatile uint32_t t110 = 219317208U;

    t110 = ((x573%(x574-x575))^x576);

    if (t110 != 24151U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x577 = -1;
	volatile uint32_t x578 = UINT32_MAX;
	static int16_t x580 = INT16_MIN;
	volatile uint32_t t111 = 31U;

    t111 = ((x577%(x578-x579))^x580);

    if (t111 != 4294485740U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x581 = 0U;
	int16_t x582 = 116;
	static int8_t x583 = INT8_MAX;
	int64_t x584 = INT64_MAX;
	int64_t t112 = INT64_MAX;

    t112 = ((x581%(x582-x583))^x584);

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x586 = 3U;
	volatile int8_t x587 = -3;
	static uint32_t x588 = UINT32_MAX;

    t113 = ((x585%(x586-x587))^x588);

    if (t113 != -4294967295LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x589 = INT32_MAX;
	int32_t x590 = -1;
	volatile uint8_t x591 = UINT8_MAX;
	volatile int32_t t114 = -338012006;

    t114 = ((x589%(x590-x591))^x592);

    if (t114 != -2147483393) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x593 = INT32_MIN;
	int8_t x594 = -53;
	uint16_t x595 = UINT16_MAX;
	int32_t x596 = INT32_MIN;
	volatile int32_t t115 = 24;

    t115 = ((x593%(x594-x595))^x596);

    if (t115 != 2147482296) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x597 = 1191U;
	static uint32_t x598 = 27U;
	static int64_t x599 = INT64_MAX;

    t116 = ((x597%(x598-x599))^x600);

    if (t116 != -31577LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x606 = INT8_MAX;
	uint32_t x607 = 6U;
	static uint64_t t117 = 69889785977684826LLU;

    t117 = ((x605%(x606-x607))^x608);

    if (t117 != 9223372036854775752LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x609 = 3185;
	int32_t x610 = -1;
	int32_t x611 = INT32_MIN;
	int16_t x612 = INT16_MIN;
	int32_t t118 = 584;

    t118 = ((x609%(x610-x611))^x612);

    if (t118 != -29583) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x615 = UINT32_MAX;
	uint8_t x616 = UINT8_MAX;

    t119 = ((x613%(x614-x615))^x616);

    if (t119 != 4294967040LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x617 = INT8_MIN;
	uint32_t x618 = 177U;
	volatile int64_t x619 = INT64_MAX;
	int64_t x620 = INT64_MIN;
	static int64_t t120 = -69391942486427LL;

    t120 = ((x617%(x618-x619))^x620);

    if (t120 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x621 = INT16_MIN;
	static int16_t x622 = INT16_MAX;
	uint16_t x623 = 847U;
	uint64_t x624 = 527206709244062LLU;

    t121 = ((x621%(x622-x623))^x624);

    if (t121 != 18446216867000306734LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x625 = 5272361U;
	volatile uint32_t x626 = 167225U;
	int8_t x628 = -1;
	volatile uint32_t t122 = 3397U;

    t122 = ((x625%(x626-x627))^x628);

    if (t122 != 4294878909U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x629 = -1;
	volatile uint64_t x631 = 3883523196059LLU;
	int16_t x632 = INT16_MAX;
	static volatile uint64_t t123 = 17319979398908LLU;

    t123 = ((x629%(x630-x631))^x632);

    if (t123 != 3883523193708LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x633 = INT16_MIN;
	int16_t x634 = 7648;
	int64_t x635 = INT64_MAX;
	volatile int64_t t124 = -68LL;

    t124 = ((x633%(x634-x635))^x636);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x637 = INT16_MIN;
	int32_t x638 = INT32_MAX;
	volatile uint8_t x639 = 111U;
	int32_t x640 = INT32_MIN;
	int32_t t125 = -10;

    t125 = ((x637%(x638-x639))^x640);

    if (t125 != 2147450880) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x641 = INT32_MAX;
	volatile uint8_t x642 = 1U;
	uint16_t x643 = UINT16_MAX;
	volatile int64_t x644 = INT64_MAX;
	volatile int64_t t126 = 53965393873214LL;

    t126 = ((x641%(x642-x643))^x644);

    if (t126 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x647 = 6U;
	static int32_t x648 = INT32_MIN;
	static volatile uint32_t t127 = 112U;

    t127 = ((x645%(x646-x647))^x648);

    if (t127 != 2147483654U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x650 = INT64_MIN;
	volatile int32_t x651 = INT32_MIN;
	uint64_t x652 = UINT64_MAX;
	uint64_t t128 = 104LLU;

    t128 = ((x649%(x650-x651))^x652);

    if (t128 != 18446744073709551198LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x653 = 3LLU;
	int16_t x655 = INT16_MIN;
	int64_t x656 = INT64_MAX;
	uint64_t t129 = 23209882056002202LLU;

    t129 = ((x653%(x654-x655))^x656);

    if (t129 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x658 = INT16_MIN;
	static uint16_t x659 = 5U;
	uint64_t x660 = 6LLU;

    t130 = ((x657%(x658-x659))^x660);

    if (t130 != 18446744073709518854LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x661 = 2U;
	uint16_t x662 = UINT16_MAX;
	uint8_t x663 = 6U;
	uint64_t x664 = 7919LLU;
	volatile uint64_t t131 = 50028816LLU;

    t131 = ((x661%(x662-x663))^x664);

    if (t131 != 7917LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x665 = INT64_MAX;
	volatile uint16_t x666 = 172U;
	uint8_t x667 = 23U;
	volatile uint64_t x668 = 59LLU;
	uint64_t t132 = 59589953289LLU;

    t132 = ((x665%(x666-x667))^x668);

    if (t132 != 9LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x669 = 1U;
	volatile int64_t x670 = INT64_MIN;
	int16_t x671 = -1;
	static int16_t x672 = INT16_MIN;
	int64_t t133 = 4028653661221156730LL;

    t133 = ((x669%(x670-x671))^x672);

    if (t133 != -32767LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x675 = 4338008775003969LLU;
	static volatile int64_t x676 = 40066LL;

    t134 = ((x673%(x674-x675))^x676);

    if (t134 != 9223372036854815874LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x677 = INT8_MAX;
	int16_t x678 = INT16_MAX;
	int16_t x679 = -1;

    t135 = ((x677%(x678-x679))^x680);

    if (t135 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x681 = -1;
	volatile int64_t x684 = -1LL;
	static volatile uint64_t t136 = 3724665LLU;

    t136 = ((x681%(x682-x683))^x684);

    if (t136 != 18429287300921382901LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x685 = -1;
	int32_t x686 = -87374;
	static volatile int32_t x687 = -1;
	volatile int32_t x688 = INT32_MIN;

    t137 = ((x685%(x686-x687))^x688);

    if (t137 != INT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x691 = 53U;
	volatile int16_t x692 = INT16_MAX;
	int64_t t138 = -44156992973416316LL;

    t138 = ((x689%(x690-x691))^x692);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x694 = INT8_MIN;
	int32_t x695 = 2084265;
	volatile uint64_t t139 = 2080LLU;

    t139 = ((x693%(x694-x695))^x696);

    if (t139 != 76002LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x697 = -1;
	int8_t x698 = INT8_MIN;
	volatile uint64_t x699 = 7123972964LLU;
	uint32_t x700 = 37U;
	uint64_t t140 = 1525LLU;

    t140 = ((x697%(x698-x699))^x700);

    if (t140 != 7123973062LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x702 = 0;
	volatile uint16_t x703 = 3076U;
	volatile int32_t t141 = 149;

    t141 = ((x701%(x702-x703))^x704);

    if (t141 != -496) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x705 = UINT32_MAX;
	static int8_t x707 = -1;
	int32_t x708 = -1;
	static volatile int64_t t142 = 1534564LL;

    t142 = ((x705%(x706-x707))^x708);

    if (t142 != -7988024LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x709 = 49266U;
	uint32_t x711 = 1128006U;
	int16_t x712 = -1;
	uint32_t t143 = 3U;

    t143 = ((x709%(x710-x711))^x712);

    if (t143 != 4294918029U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x714 = -14808;
	int16_t x715 = INT16_MAX;
	uint8_t x716 = UINT8_MAX;
	int32_t t144 = -8844;

    t144 = ((x713%(x714-x715))^x716);

    if (t144 != 18135) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x717 = 0;
	int64_t x718 = INT64_MIN;
	static int8_t x719 = INT8_MIN;
	static volatile uint16_t x720 = UINT16_MAX;
	int64_t t145 = -145LL;

    t145 = ((x717%(x718-x719))^x720);

    if (t145 != 65535LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x722 = 84U;
	int8_t x723 = -1;
	volatile uint32_t t146 = 14200U;

    t146 = ((x721%(x722-x723))^x724);

    if (t146 != 4294967212U) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x725 = -675122793;
	int16_t x726 = INT16_MIN;
	static int64_t x727 = -1LL;
	volatile uint16_t x728 = UINT16_MAX;
	volatile int64_t t147 = 68168519728038667LL;

    t147 = ((x725%(x726-x727))^x728);

    if (t147 != -41245LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x729 = -1LL;
	int64_t x731 = INT64_MIN;
	static uint64_t t148 = 223LLU;

    t148 = ((x729%(x730-x731))^x732);

    if (t148 != 18446744066907137083LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x733 = -1;
	volatile int64_t x734 = 38657884262977167LL;
	int8_t x736 = 52;

    t149 = ((x733%(x734-x735))^x736);

    if (t149 != -53LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x738 = INT8_MIN;
	volatile int32_t x740 = -1;

    t150 = ((x737%(x738-x739))^x740);

    if (t150 != 18446744068657337034LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x741 = 16U;
	int16_t x742 = INT16_MIN;
	volatile int8_t x743 = INT8_MIN;
	volatile int32_t x744 = INT32_MAX;
	int32_t t151 = 268042417;

    t151 = ((x741%(x742-x743))^x744);

    if (t151 != 2147483631) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x745 = 806U;
	int64_t x746 = INT64_MAX;
	int16_t x747 = INT16_MAX;
	uint64_t t152 = 3970613LLU;

    t152 = ((x745%(x746-x747))^x748);

    if (t152 != 1272LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x749 = 20286U;
	uint8_t x751 = UINT8_MAX;
	uint64_t x752 = UINT64_MAX;
	volatile uint64_t t153 = 1196933222398752022LLU;

    t153 = ((x749%(x750-x751))^x752);

    if (t153 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x753 = 23038757U;
	volatile uint16_t x754 = 131U;
	int64_t x755 = -402LL;
	volatile int64_t x756 = -1852892LL;
	int64_t t154 = 1LL;

    t154 = ((x753%(x754-x755))^x756);

    if (t154 != -1852599LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x757 = 62;
	int32_t x758 = -295091970;
	uint64_t x759 = 18773410107234009LLU;
	static uint64_t t155 = 389859640LLU;

    t155 = ((x757%(x758-x759))^x760);

    if (t155 != 18446744071562068030LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x761 = 27159U;
	uint32_t x762 = UINT32_MAX;
	uint32_t x763 = 107595772U;
	int32_t x764 = INT32_MIN;
	uint32_t t156 = 3643U;

    t156 = ((x761%(x762-x763))^x764);

    if (t156 != 2147510807U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x765 = UINT16_MAX;
	int8_t x767 = -1;
	static int32_t x768 = INT32_MIN;

    t157 = ((x765%(x766-x767))^x768);

    if (t157 != 2147483690U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x773 = 38;
	static int32_t x775 = -699;
	int16_t x776 = 0;
	int64_t t158 = 375207LL;

    t158 = ((x773%(x774-x775))^x776);

    if (t158 != 38LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x777 = 1U;
	static int64_t x778 = INT64_MIN;
	uint64_t x780 = 3574LLU;
	volatile uint64_t t159 = 15LLU;

    t159 = ((x777%(x778-x779))^x780);

    if (t159 != 3575LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x781 = 32U;
	volatile uint16_t x782 = 11U;
	volatile int64_t x783 = 377LL;
	volatile int64_t t160 = 2097935069LL;

    t160 = ((x781%(x782-x783))^x784);

    if (t160 != 7105LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x789 = 7;
	static volatile uint64_t x790 = UINT64_MAX;
	static volatile uint8_t x792 = UINT8_MAX;
	static uint64_t t161 = 29500499725145057LLU;

    t161 = ((x789%(x790-x791))^x792);

    if (t161 != 248LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x793 = 100LLU;
	static int8_t x794 = -61;
	static int32_t x795 = 13123392;
	volatile int32_t x796 = -14696922;
	uint64_t t162 = 604LLU;

    t162 = ((x793%(x794-x795))^x796);

    if (t162 != 18446744073694854722LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x798 = -92517715180356LL;
	static uint16_t x799 = UINT16_MAX;
	int32_t x800 = INT32_MIN;
	volatile int64_t t163 = 23011484034LL;

    t163 = ((x797%(x798-x799))^x800);

    if (t163 != 27278536012LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x801 = -1;
	volatile uint8_t x802 = UINT8_MAX;
	int8_t x803 = -10;
	int32_t x804 = INT32_MIN;
	volatile int32_t t164 = INT32_MAX;

    t164 = ((x801%(x802-x803))^x804);

    if (t164 != INT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x809 = 205U;
	volatile int64_t x810 = -1LL;
	int16_t x812 = 0;

    t165 = ((x809%(x810-x811))^x812);

    if (t165 != 205LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x813 = 980328591718818LL;
	static int8_t x814 = -1;
	uint32_t x815 = 30U;
	static volatile int64_t x816 = 15LL;
	volatile int64_t t166 = -194591LL;

    t166 = ((x813%(x814-x815))^x816);

    if (t166 != 2313482567LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t t167 = 410LLU;

    t167 = ((x821%(x822-x823))^x824);

    if (t167 != 33765798357254LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x825 = INT16_MIN;
	static volatile int64_t x826 = -17279821LL;
	volatile int16_t x827 = INT16_MIN;
	volatile uint64_t t168 = 263181405LLU;

    t168 = ((x825%(x826-x827))^x828);

    if (t168 != 15608308147675935275LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x829 = -1LL;
	uint32_t x832 = UINT32_MAX;
	volatile uint64_t t169 = 191018941926627LLU;

    t169 = ((x829%(x830-x831))^x832);

    if (t169 != 591638623104902LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x833 = -115359;
	int8_t x835 = INT8_MAX;
	static uint64_t x836 = UINT64_MAX;
	uint64_t t170 = 2272852078957874LLU;

    t170 = ((x833%(x834-x835))^x836);

    if (t170 != 30LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x837 = 8211U;
	static int8_t x838 = INT8_MAX;
	int16_t x839 = -511;
	volatile uint32_t t171 = 3612U;

    t171 = ((x837%(x838-x839))^x840);

    if (t171 != 4294966740U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x841 = 1326226793724466LLU;
	int16_t x842 = -1;
	volatile uint16_t x843 = 16U;
	int32_t x844 = INT32_MAX;

    t172 = ((x841%(x842-x843))^x844);

    if (t172 != 1326226896684493LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x845 = INT32_MIN;
	int32_t x846 = INT32_MAX;
	int8_t x847 = 4;
	int64_t x848 = -813198378036LL;
	static volatile int64_t t173 = 224LL;

    t173 = ((x845%(x846-x847))^x848);

    if (t173 != 813198378039LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x853 = 33175312U;
	volatile uint8_t x854 = 2U;
	volatile uint64_t x855 = UINT64_MAX;
	int8_t x856 = INT8_MAX;
	static volatile uint64_t t174 = 5LLU;

    t174 = ((x853%(x854-x855))^x856);

    if (t174 != 126LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x857 = INT8_MIN;
	volatile uint64_t x858 = 561047036517767LLU;
	static uint32_t x860 = 30U;
	volatile uint64_t t175 = 7470LLU;

    t175 = ((x857%(x858-x859))^x860);

    if (t175 != 7952927027689LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x861 = INT8_MAX;
	static uint64_t x862 = UINT64_MAX;
	int16_t x863 = INT16_MAX;
	uint8_t x864 = 0U;

    t176 = ((x861%(x862-x863))^x864);

    if (t176 != 127LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x865 = UINT32_MAX;
	static int16_t x866 = 11466;
	int64_t x867 = -551338307016070099LL;
	int32_t x868 = INT32_MAX;

    t177 = ((x865%(x866-x867))^x868);

    if (t177 != 2147483648LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x869 = UINT16_MAX;
	uint32_t x870 = 59248U;
	int64_t x871 = -1LL;
	int8_t x872 = -1;
	volatile int64_t t178 = 34226276LL;

    t178 = ((x869%(x870-x871))^x872);

    if (t178 != -6287LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x873 = -140902573;
	uint8_t x875 = 19U;
	int32_t x876 = 340;
	volatile int32_t t179 = -7;

    t179 = ((x873%(x874-x875))^x876);

    if (t179 != -357) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x877 = INT32_MIN;
	static uint8_t x878 = 7U;
	static int16_t x879 = -463;
	static int32_t x880 = -1142;
	volatile int32_t t180 = -151112906;

    t180 = ((x877%(x878-x879))^x880);

    if (t180 != 1078) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x885 = UINT32_MAX;
	int8_t x886 = INT8_MIN;
	volatile uint16_t x887 = 5168U;
	int8_t x888 = INT8_MIN;

    t181 = ((x885%(x886-x887))^x888);

    if (t181 != 4294961967U) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x891 = INT64_MIN;
	volatile uint8_t x892 = 1U;
	static volatile int64_t t182 = 3951842762687477LL;

    t182 = ((x889%(x890-x891))^x892);

    if (t182 != -83LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x894 = -97LL;
	uint64_t x895 = 170398201LLU;
	static int8_t x896 = -1;
	volatile uint64_t t183 = 5283014473094852LLU;

    t183 = ((x893%(x894-x895))^x896);

    if (t183 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x901 = -1;
	int16_t x902 = INT16_MIN;
	uint16_t x903 = 1417U;
	volatile int32_t t184 = -98555951;

    t184 = ((x901%(x902-x903))^x904);

    if (t184 != -65536) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x905 = 15U;
	int32_t x906 = 283599927;
	uint64_t x907 = 288684LLU;
	int32_t x908 = INT32_MIN;

    t185 = ((x905%(x906-x907))^x908);

    if (t185 != 18446744071562067983LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x909 = 24U;
	int8_t x910 = INT8_MAX;
	int8_t x911 = INT8_MIN;
	uint16_t x912 = 6U;
	volatile int32_t t186 = -12927;

    t186 = ((x909%(x910-x911))^x912);

    if (t186 != 30) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x913 = -1;
	int64_t x914 = INT64_MAX;
	int16_t x915 = 105;
	int32_t x916 = -23;

    t187 = ((x913%(x914-x915))^x916);

    if (t187 != 22LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x921 = INT64_MIN;
	static uint32_t x922 = 11417376U;
	static int16_t x923 = INT16_MIN;

    t188 = ((x921%(x922-x923))^x924);

    if (t188 != 9223372036849343392LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x925 = INT64_MIN;
	static volatile int64_t x927 = -1LL;
	int64_t x928 = INT64_MIN;

    t189 = ((x925%(x926-x927))^x928);

    if (t189 != 9223372036854775050LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x929 = 29611U;
	static int32_t x930 = -1;
	int64_t x931 = INT64_MIN;
	volatile uint16_t x932 = UINT16_MAX;
	int64_t t190 = -7266735359412LL;

    t190 = ((x929%(x930-x931))^x932);

    if (t190 != 35924LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int64_t x933 = INT64_MAX;
	uint64_t x934 = 8LLU;
	uint64_t t191 = 1LLU;

    t191 = ((x933%(x934-x935))^x936);

    if (t191 != 18446744073709550520LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x941 = -1;
	int32_t x942 = -1;
	uint8_t x943 = UINT8_MAX;
	volatile int32_t x944 = 13994717;
	int32_t t192 = -12;

    t192 = ((x941%(x942-x943))^x944);

    if (t192 != -13994718) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x945 = INT8_MIN;
	int8_t x946 = 0;
	uint64_t x947 = UINT64_MAX;
	int8_t x948 = INT8_MIN;

    t193 = ((x945%(x946-x947))^x948);

    if (t193 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x949 = 31;
	int16_t x951 = -13;
	int16_t x952 = INT16_MIN;

    t194 = ((x949%(x950-x951))^x952);

    if (t194 != -32767) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x953 = INT32_MIN;
	static uint16_t x956 = 5854U;
	int32_t t195 = -3418;

    t195 = ((x953%(x954-x955))^x956);

    if (t195 != -5881) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x957 = INT64_MIN;
	volatile uint64_t x958 = UINT64_MAX;
	uint32_t x959 = 715472U;
	volatile int64_t x960 = INT64_MIN;
	uint64_t t196 = 10LLU;

    t196 = ((x957%(x958-x959))^x960);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x965 = -1LL;
	int64_t x966 = INT64_MIN;
	static volatile uint16_t x968 = UINT16_MAX;
	volatile int64_t t197 = -48LL;

    t197 = ((x965%(x966-x967))^x968);

    if (t197 != -65536LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x969 = INT8_MAX;
	volatile uint64_t x970 = UINT64_MAX;
	int16_t x971 = -511;
	volatile int8_t x972 = INT8_MAX;
	uint64_t t198 = 273561540220717LLU;

    t198 = ((x969%(x970-x971))^x972);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x977 = 65U;
	int8_t x978 = -1;
	int8_t x979 = INT8_MAX;
	static int16_t x980 = INT16_MIN;
	volatile int32_t t199 = 3;

    t199 = ((x977%(x978-x979))^x980);

    if (t199 != -32703) { NG(); } else { ; }
	
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

