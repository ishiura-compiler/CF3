
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

int8_t x2 = INT8_MIN;
uint32_t x4 = UINT32_MAX;
int32_t t1 = 48;
uint32_t x9 = 5U;
int32_t t2 = -31;
volatile int32_t t3 = -5663887;
int8_t x17 = INT8_MIN;
uint16_t x24 = UINT16_MAX;
uint8_t x25 = UINT8_MAX;
int8_t x27 = INT8_MIN;
static uint32_t x30 = 328551U;
uint8_t x31 = 50U;
uint32_t x32 = UINT32_MAX;
static uint32_t x39 = 725226U;
uint16_t x44 = 6437U;
int16_t x50 = 2323;
static uint32_t x54 = 42U;
int32_t x56 = -1;
int32_t t13 = -31255;
int8_t x57 = INT8_MAX;
volatile int8_t x59 = -1;
uint64_t x60 = 2046870609881182072LLU;
uint32_t x66 = 13U;
uint64_t x75 = 466272LLU;
int32_t x76 = INT32_MIN;
uint32_t x80 = 540427378U;
int8_t x82 = -1;
volatile int32_t t20 = -1443644;
int32_t t21 = 4461;
static uint8_t x92 = UINT8_MAX;
static int32_t t22 = -357;
volatile uint8_t x96 = 1U;
volatile uint16_t x103 = 3824U;
volatile int64_t x106 = 5340512520029LL;
int8_t x110 = -27;
int8_t x112 = INT8_MIN;
uint64_t x113 = 74492441679LLU;
int8_t x114 = 2;
uint16_t x119 = 981U;
int64_t x121 = -1LL;
uint8_t x122 = UINT8_MAX;
int64_t x124 = 1727448LL;
volatile int16_t x125 = INT16_MIN;
int16_t x126 = 1;
volatile int64_t x130 = -137498211142118LL;
int16_t x136 = -1;
static uint64_t x142 = UINT64_MAX;
int16_t x147 = INT16_MAX;
static int8_t x148 = -11;
volatile int32_t x153 = INT32_MIN;
int32_t t38 = -4058;
int8_t x157 = INT8_MIN;
uint64_t x161 = UINT64_MAX;
static volatile int32_t t41 = -49;
int16_t x170 = INT16_MIN;
int64_t x174 = -129851937460LL;
int32_t x176 = -370227;
uint8_t x189 = UINT8_MAX;
int16_t x193 = INT16_MIN;
volatile uint64_t x194 = UINT64_MAX;
volatile uint8_t x196 = UINT8_MAX;
static uint64_t x199 = 116244734016LLU;
volatile uint32_t x208 = 5558U;
int32_t t52 = -145486359;
int32_t x218 = INT32_MAX;
volatile uint64_t x223 = 20918LLU;
static uint64_t x225 = 6981011811LLU;
uint8_t x232 = 4U;
int32_t t57 = -201;
volatile int64_t x236 = INT64_MIN;
int32_t t58 = -45;
static volatile uint64_t x239 = 507644537825908984LLU;
volatile int8_t x241 = -1;
static volatile int8_t x244 = INT8_MIN;
int32_t t60 = -27191;
static int32_t x245 = INT32_MIN;
int64_t x247 = 10774954735180LL;
volatile uint16_t x252 = UINT16_MAX;
static int32_t x258 = INT32_MIN;
int64_t x263 = -1LL;
uint8_t x264 = 1U;
static volatile int32_t t67 = -413017546;
int64_t x278 = INT64_MIN;
static int16_t x280 = -129;
int64_t x282 = INT64_MAX;
uint32_t x284 = 1278U;
volatile int32_t t70 = 25938213;
volatile uint8_t x286 = UINT8_MAX;
int32_t t71 = -3046110;
volatile int32_t t72 = 228;
static int16_t x297 = 1;
int32_t t76 = 795;
static uint32_t x316 = 46332949U;
int16_t x324 = INT16_MIN;
int8_t x331 = INT8_MAX;
volatile int32_t t81 = 7;
static volatile uint8_t x334 = 0U;
uint32_t x335 = UINT32_MAX;
static int64_t x345 = INT64_MIN;
int16_t x346 = INT16_MIN;
uint64_t x350 = 10302216137LLU;
int32_t t87 = -4;
int16_t x360 = 7;
int32_t x372 = INT32_MIN;
int16_t x373 = 9985;
uint64_t x378 = UINT64_MAX;
uint16_t x385 = 364U;
int64_t x386 = 60205907871986066LL;
int16_t x389 = INT16_MIN;
int16_t x394 = INT16_MIN;
volatile int32_t t97 = -251244;
static int16_t x404 = INT16_MIN;
volatile int32_t t99 = 7319094;
int32_t x406 = INT32_MAX;
int16_t x409 = INT16_MIN;
int32_t t101 = -158;
volatile int32_t t102 = 97609;
uint64_t x418 = 29495113820489569LLU;
int8_t x424 = -1;
static uint64_t x425 = 865534LLU;
volatile int8_t x427 = -1;
int16_t x434 = -10;
static volatile int32_t t108 = 8;
int64_t x441 = -4425791541923492LL;
volatile uint16_t x448 = 6U;
volatile uint64_t x453 = 2667332057449344853LLU;
int32_t t112 = -58376105;
volatile int32_t t113 = -121;
volatile int16_t x461 = 0;
int32_t t115 = 591181;
int32_t x470 = -1;
static uint16_t x476 = 2200U;
static int64_t x480 = -251LL;
int64_t x484 = 183878837LL;
volatile int32_t t122 = -27135;
uint16_t x498 = 117U;
int8_t x502 = -17;
static uint8_t x505 = UINT8_MAX;
int32_t x512 = -1;
uint8_t x522 = UINT8_MAX;
int8_t x529 = INT8_MAX;
volatile int32_t t132 = 60457281;
static volatile int8_t x539 = INT8_MIN;
static int64_t x543 = INT64_MAX;
static volatile int8_t x547 = -1;
int64_t x552 = INT64_MIN;
int64_t x556 = INT64_MIN;
int32_t t137 = 99763;
uint8_t x561 = UINT8_MAX;
static volatile uint8_t x573 = 124U;
int64_t x579 = INT64_MIN;
uint64_t x581 = 24698158223867006LLU;
int16_t x582 = INT16_MIN;
static int32_t t144 = 5416188;
int32_t x586 = INT32_MIN;
int32_t t146 = 164;
volatile int16_t x597 = INT16_MAX;
int32_t x601 = INT32_MAX;
int32_t x602 = INT32_MIN;
static volatile int32_t x603 = INT32_MAX;
uint8_t x604 = 0U;
volatile int32_t t149 = 0;
int16_t x611 = INT16_MIN;
static volatile int16_t x612 = INT16_MIN;
volatile int32_t t151 = -1039394;
int32_t t152 = 960890332;
int64_t x627 = INT64_MIN;
int64_t x633 = INT64_MAX;
int16_t x634 = -218;
uint16_t x635 = 14U;
int8_t x638 = 29;
uint64_t x643 = UINT64_MAX;
int32_t t159 = 1;
int32_t x651 = INT32_MIN;
volatile int32_t t160 = 18226473;
int8_t x654 = INT8_MAX;
int32_t t161 = 1672;
volatile int32_t t163 = -323142704;
volatile uint32_t x667 = UINT32_MAX;
int8_t x674 = INT8_MAX;
volatile int32_t t165 = -510549;
int8_t x680 = INT8_MIN;
volatile uint64_t x699 = 1LLU;
int8_t x705 = INT8_MIN;
volatile int32_t t173 = 12660;
uint16_t x712 = 84U;
volatile int32_t t174 = 385;
int64_t x718 = INT64_MAX;
uint32_t x724 = 7996429U;
uint64_t x729 = 6548807454763538170LLU;
int16_t x732 = -1;
int32_t x733 = -1;
volatile int64_t x734 = -1LL;
int32_t x736 = INT32_MIN;
int8_t x739 = 1;
int16_t x740 = -1;
static int64_t x743 = INT64_MIN;
volatile int32_t x750 = -1;
static int8_t x753 = -1;
static uint8_t x766 = 97U;
int16_t x769 = -1;
static volatile int64_t x770 = INT64_MIN;
int32_t x773 = -1;
int64_t x775 = INT64_MAX;
volatile int32_t t189 = -13392801;
static int8_t x778 = 12;
volatile int32_t t190 = 53235;
int64_t x782 = -73374704699009693LL;
int8_t x789 = -1;
int32_t x798 = INT32_MIN;
volatile int32_t t196 = 967;
volatile int64_t x815 = -244371632239150LL;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int32_t x3 = INT32_MIN;
	static int32_t t0 = 678043588;

    t0 = ((x1&(x2/x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	int8_t x6 = INT8_MIN;
	int64_t x7 = INT64_MIN;
	uint16_t x8 = 6U;

    t1 = ((x5&(x6/x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = 68675262LLU;
	int8_t x11 = INT8_MIN;
	uint8_t x12 = UINT8_MAX;

    t2 = ((x9&(x10/x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	int64_t x14 = -1LL;
	int16_t x15 = 1;
	static volatile int8_t x16 = 30;

    t3 = ((x13&(x14/x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = INT64_MIN;
	int32_t x19 = INT32_MAX;
	static volatile int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -146;

    t4 = ((x17&(x18/x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = INT16_MIN;
	int8_t x22 = 17;
	static uint16_t x23 = UINT16_MAX;
	volatile int32_t t5 = -12906045;

    t5 = ((x21&(x22/x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x26 = -1;
	static int16_t x28 = -1;
	volatile int32_t t6 = -12616;

    t6 = ((x25&(x26/x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	static volatile int32_t t7 = -3;

    t7 = ((x29&(x30/x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = UINT32_MAX;
	int64_t x34 = -2LL;
	static int64_t x35 = INT64_MIN;
	static volatile int32_t x36 = INT32_MIN;
	volatile int32_t t8 = 1;

    t8 = ((x33&(x34/x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	volatile int64_t x38 = INT64_MIN;
	int16_t x40 = 0;
	int32_t t9 = 30;

    t9 = ((x37&(x38/x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x41 = 1U;
	static uint8_t x42 = UINT8_MAX;
	static int32_t x43 = 655104295;
	int32_t t10 = 964;

    t10 = ((x41&(x42/x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	static int16_t x46 = 11;
	int32_t x47 = INT32_MIN;
	int64_t x48 = -1LL;
	int32_t t11 = -12707;

    t11 = ((x45&(x46/x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = 1LL;
	uint32_t x51 = UINT32_MAX;
	volatile uint64_t x52 = UINT64_MAX;
	int32_t t12 = -21;

    t12 = ((x49&(x50/x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -1LL;
	volatile int8_t x55 = 2;

    t13 = ((x53&(x54/x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint16_t x58 = 10063U;
	volatile int32_t t14 = 1426;

    t14 = ((x57&(x58/x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 37U;
	uint16_t x62 = 1268U;
	int32_t x63 = INT32_MIN;
	uint64_t x64 = UINT64_MAX;
	static int32_t t15 = 82;

    t15 = ((x61&(x62/x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -1;
	int32_t x67 = -1;
	uint16_t x68 = 62U;
	int32_t t16 = -26207;

    t16 = ((x65&(x66/x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	static int8_t x70 = INT8_MIN;
	static int32_t x71 = INT32_MIN;
	volatile int16_t x72 = INT16_MAX;
	int32_t t17 = 376086;

    t17 = ((x69&(x70/x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x73 = 17U;
	static int32_t x74 = INT32_MAX;
	int32_t t18 = 52985;

    t18 = ((x73&(x74/x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 16697384U;
	uint16_t x78 = UINT16_MAX;
	static int32_t x79 = INT32_MIN;
	volatile int32_t t19 = 231133;

    t19 = ((x77&(x78/x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	int64_t x83 = INT64_MIN;
	int16_t x84 = INT16_MIN;

    t20 = ((x81&(x82/x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	int16_t x86 = INT16_MIN;
	volatile uint8_t x87 = UINT8_MAX;
	int16_t x88 = 0;

    t21 = ((x85&(x86/x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	uint64_t x90 = 197926272007438LLU;
	static volatile uint16_t x91 = 440U;

    t22 = ((x89&(x90/x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	static uint64_t x94 = UINT64_MAX;
	int8_t x95 = -1;
	volatile int32_t t23 = 46828396;

    t23 = ((x93&(x94/x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = -42137LL;
	int64_t x98 = -1LL;
	static uint8_t x99 = 55U;
	static int16_t x100 = -2385;
	int32_t t24 = 48497;

    t24 = ((x97&(x98/x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = -1LL;
	uint16_t x102 = 1705U;
	static uint16_t x104 = UINT16_MAX;
	int32_t t25 = 94790;

    t25 = ((x101&(x102/x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = UINT16_MAX;
	volatile int8_t x107 = -1;
	int32_t x108 = -1;
	static volatile int32_t t26 = -784;

    t26 = ((x105&(x106/x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x109 = UINT8_MAX;
	uint16_t x111 = 659U;
	static int32_t t27 = -1;

    t27 = ((x109&(x110/x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x115 = 2003920U;
	int64_t x116 = -176LL;
	volatile int32_t t28 = -56952;

    t28 = ((x113&(x114/x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -1;
	static volatile uint8_t x118 = 1U;
	static int8_t x120 = -43;
	static int32_t t29 = 344537;

    t29 = ((x117&(x118/x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x123 = INT8_MIN;
	int32_t t30 = -9;

    t30 = ((x121&(x122/x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x127 = INT64_MIN;
	static uint8_t x128 = 7U;
	static int32_t t31 = -4843;

    t31 = ((x125&(x126/x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = 23;
	int64_t x131 = INT64_MAX;
	uint32_t x132 = UINT32_MAX;
	volatile int32_t t32 = -231;

    t32 = ((x129&(x130/x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 17925U;
	int32_t x134 = -5;
	static volatile int8_t x135 = -1;
	int32_t t33 = -59965631;

    t33 = ((x133&(x134/x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MAX;
	uint8_t x138 = UINT8_MAX;
	uint64_t x139 = 36793539216LLU;
	int32_t x140 = -1849;
	volatile int32_t t34 = 7;

    t34 = ((x137&(x138/x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x141 = INT64_MIN;
	int32_t x143 = 619915267;
	int8_t x144 = INT8_MAX;
	volatile int32_t t35 = 337092;

    t35 = ((x141&(x142/x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MAX;
	int64_t x146 = INT64_MIN;
	int32_t t36 = 28;

    t36 = ((x145&(x146/x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint16_t x149 = 228U;
	uint8_t x150 = 11U;
	int64_t x151 = -1LL;
	int16_t x152 = INT16_MAX;
	int32_t t37 = 405;

    t37 = ((x149&(x150/x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x154 = INT16_MAX;
	int8_t x155 = INT8_MAX;
	int16_t x156 = -1;

    t38 = ((x153&(x154/x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x158 = 871600497U;
	static int16_t x159 = -2857;
	int64_t x160 = 57LL;
	int32_t t39 = 1;

    t39 = ((x157&(x158/x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x162 = 446751LL;
	int32_t x163 = INT32_MAX;
	int16_t x164 = 882;
	volatile int32_t t40 = -3396990;

    t40 = ((x161&(x162/x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 79723202LLU;
	int64_t x166 = INT64_MIN;
	static uint32_t x167 = 7U;
	int32_t x168 = -1328694;

    t41 = ((x165&(x166/x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = 0;
	uint8_t x171 = 1U;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t42 = -8;

    t42 = ((x169&(x170/x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	uint32_t x175 = 2742793U;
	volatile int32_t t43 = 0;

    t43 = ((x173&(x174/x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -20629087680429LL;
	uint8_t x178 = 0U;
	volatile uint64_t x179 = 56693792143648623LLU;
	uint32_t x180 = 2U;
	volatile int32_t t44 = 11;

    t44 = ((x177&(x178/x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = UINT32_MAX;
	int16_t x182 = INT16_MAX;
	static uint32_t x183 = 641102U;
	uint64_t x184 = 169584168530LLU;
	volatile int32_t t45 = -631;

    t45 = ((x181&(x182/x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 2976U;
	volatile int16_t x186 = INT16_MIN;
	static int32_t x187 = -1;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t46 = -92726303;

    t46 = ((x185&(x186/x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x190 = 736535338838LL;
	uint32_t x191 = 76200U;
	volatile int32_t x192 = INT32_MIN;
	int32_t t47 = -178;

    t47 = ((x189&(x190/x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x195 = -1LL;
	static int32_t t48 = 8236;

    t48 = ((x193&(x194/x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = -1LL;
	static uint32_t x198 = 8147977U;
	int8_t x200 = INT8_MAX;
	volatile int32_t t49 = -5;

    t49 = ((x197&(x198/x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x201 = UINT64_MAX;
	int16_t x202 = -4;
	uint64_t x203 = 144026554186629985LLU;
	uint64_t x204 = 575107480034633580LLU;
	static int32_t t50 = 46194;

    t50 = ((x201&(x202/x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = -15213;
	int32_t x206 = INT32_MAX;
	int32_t x207 = -459;
	int32_t t51 = 49013;

    t51 = ((x205&(x206/x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x209 = 6;
	int8_t x210 = -20;
	static int64_t x211 = -994472521763502833LL;
	uint64_t x212 = 214642770828916LLU;

    t52 = ((x209&(x210/x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int64_t x213 = -1LL;
	int32_t x214 = 29172827;
	int8_t x215 = INT8_MAX;
	int64_t x216 = 213794024346LL;
	static volatile int32_t t53 = -1698;

    t53 = ((x213&(x214/x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -5;
	volatile int32_t x219 = INT32_MIN;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 299;

    t54 = ((x217&(x218/x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 3544U;
	int32_t x222 = -1;
	uint64_t x224 = 33721689253493815LLU;
	int32_t t55 = -425421;

    t55 = ((x221&(x222/x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x226 = 3406LL;
	int64_t x227 = -116544LL;
	uint8_t x228 = 1U;
	int32_t t56 = -3750;

    t56 = ((x225&(x226/x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x229 = INT8_MAX;
	static int8_t x230 = INT8_MAX;
	static uint64_t x231 = 13864610364027103LLU;

    t57 = ((x229&(x230/x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 1U;
	static volatile int64_t x234 = INT64_MIN;
	uint64_t x235 = 13223656364369LLU;

    t58 = ((x233&(x234/x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x237 = -18868;
	int8_t x238 = -1;
	static int64_t x240 = 23984414917629LL;
	static int32_t t59 = 26203;

    t59 = ((x237&(x238/x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x242 = -1;
	uint32_t x243 = UINT32_MAX;

    t60 = ((x241&(x242/x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x246 = INT16_MIN;
	uint32_t x248 = UINT32_MAX;
	volatile int32_t t61 = 45009;

    t61 = ((x245&(x246/x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -1;
	int8_t x250 = -1;
	static int8_t x251 = -11;
	volatile int32_t t62 = 57;

    t62 = ((x249&(x250/x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = 213612140LL;
	static int32_t x254 = -1;
	int32_t x255 = -115726754;
	int8_t x256 = INT8_MAX;
	volatile int32_t t63 = -25788092;

    t63 = ((x253&(x254/x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = 2;
	volatile int64_t x259 = INT64_MIN;
	int64_t x260 = -30358239288LL;
	int32_t t64 = -114642956;

    t64 = ((x257&(x258/x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = -1;
	uint16_t x262 = UINT16_MAX;
	static volatile int32_t t65 = -1576;

    t65 = ((x261&(x262/x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = -51;
	int64_t x266 = INT64_MAX;
	uint8_t x267 = 2U;
	uint32_t x268 = 713332U;
	volatile int32_t t66 = 649827967;

    t66 = ((x265&(x266/x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = UINT32_MAX;
	int8_t x270 = -1;
	volatile int64_t x271 = INT64_MIN;
	int16_t x272 = INT16_MAX;

    t67 = ((x269&(x270/x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint16_t x273 = 6035U;
	static int64_t x274 = INT64_MAX;
	int32_t x275 = 590531;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t68 = -1;

    t68 = ((x273&(x274/x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = UINT32_MAX;
	int8_t x279 = INT8_MAX;
	int32_t t69 = 1;

    t69 = ((x277&(x278/x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = UINT32_MAX;
	int16_t x283 = INT16_MIN;

    t70 = ((x281&(x282/x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	volatile int8_t x287 = -1;
	uint32_t x288 = 880981U;

    t71 = ((x285&(x286/x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = UINT8_MAX;
	volatile int64_t x290 = -11LL;
	uint32_t x291 = UINT32_MAX;
	static int32_t x292 = INT32_MIN;

    t72 = ((x289&(x290/x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -1085607373199882953LL;
	int8_t x294 = INT8_MIN;
	static int32_t x295 = INT32_MIN;
	int64_t x296 = 134982812999628LL;
	int32_t t73 = -491071206;

    t73 = ((x293&(x294/x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x298 = -1;
	int8_t x299 = INT8_MIN;
	int64_t x300 = 78660644455313LL;
	volatile int32_t t74 = -2378500;

    t74 = ((x297&(x298/x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MIN;
	int64_t x302 = INT64_MIN;
	int32_t x303 = -215504138;
	int32_t x304 = 4178;
	static int32_t t75 = 534642774;

    t75 = ((x301&(x302/x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MAX;
	int16_t x306 = -246;
	static int64_t x307 = INT64_MIN;
	static uint64_t x308 = UINT64_MAX;

    t76 = ((x305&(x306/x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = UINT32_MAX;
	uint16_t x310 = 227U;
	volatile int64_t x311 = 69275198374444LL;
	int32_t x312 = 0;
	volatile int32_t t77 = -2672;

    t77 = ((x309&(x310/x311))==x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = INT32_MAX;
	uint64_t x314 = 348LLU;
	int32_t x315 = 541087;
	static int32_t t78 = 6637;

    t78 = ((x313&(x314/x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = -3855054;
	int8_t x318 = INT8_MAX;
	volatile int64_t x319 = 4LL;
	uint64_t x320 = 398LLU;
	static int32_t t79 = 70;

    t79 = ((x317&(x318/x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = 7611LL;
	int32_t x322 = -1;
	uint16_t x323 = 53U;
	static volatile int32_t t80 = -3;

    t80 = ((x321&(x322/x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x329 = INT8_MIN;
	int8_t x330 = INT8_MIN;
	static int64_t x332 = INT64_MIN;

    t81 = ((x329&(x330/x331))==x332);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x333 = INT64_MIN;
	static volatile int16_t x336 = INT16_MAX;
	int32_t t82 = 111;

    t82 = ((x333&(x334/x335))==x336);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x337 = -1;
	int8_t x338 = -1;
	static uint32_t x339 = UINT32_MAX;
	uint16_t x340 = 1602U;
	int32_t t83 = -3981625;

    t83 = ((x337&(x338/x339))==x340);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x341 = -2;
	volatile int8_t x342 = -1;
	static volatile uint8_t x343 = 6U;
	uint8_t x344 = UINT8_MAX;
	int32_t t84 = -2164;

    t84 = ((x341&(x342/x343))==x344);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x347 = INT64_MIN;
	static int8_t x348 = INT8_MIN;
	volatile int32_t t85 = -135;

    t85 = ((x345&(x346/x347))==x348);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x349 = -750583LL;
	uint64_t x351 = 4374634877612445LLU;
	int16_t x352 = INT16_MIN;
	int32_t t86 = -49;

    t86 = ((x349&(x350/x351))==x352);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x353 = UINT64_MAX;
	uint16_t x354 = UINT16_MAX;
	static volatile uint64_t x355 = 12284LLU;
	static int8_t x356 = -1;

    t87 = ((x353&(x354/x355))==x356);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x357 = 43U;
	static int64_t x358 = 144564680419LL;
	int16_t x359 = -400;
	int32_t t88 = -1702392;

    t88 = ((x357&(x358/x359))==x360);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x361 = -2606859LL;
	volatile int8_t x362 = -8;
	int32_t x363 = 275351;
	static int16_t x364 = INT16_MAX;
	int32_t t89 = 161827649;

    t89 = ((x361&(x362/x363))==x364);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x365 = INT8_MIN;
	int64_t x366 = -1LL;
	uint8_t x367 = UINT8_MAX;
	uint64_t x368 = UINT64_MAX;
	volatile int32_t t90 = 105001330;

    t90 = ((x365&(x366/x367))==x368);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x369 = 15U;
	int32_t x370 = INT32_MIN;
	int32_t x371 = INT32_MAX;
	volatile int32_t t91 = -153;

    t91 = ((x369&(x370/x371))==x372);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x374 = 851LLU;
	volatile int64_t x375 = INT64_MAX;
	volatile uint8_t x376 = UINT8_MAX;
	int32_t t92 = 6;

    t92 = ((x373&(x374/x375))==x376);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x377 = -1;
	static volatile int32_t x379 = INT32_MIN;
	volatile int8_t x380 = INT8_MAX;
	volatile int32_t t93 = 33804824;

    t93 = ((x377&(x378/x379))==x380);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x381 = INT16_MIN;
	volatile int16_t x382 = INT16_MIN;
	volatile int64_t x383 = -167238383918LL;
	volatile int64_t x384 = INT64_MAX;
	volatile int32_t t94 = 1;

    t94 = ((x381&(x382/x383))==x384);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x387 = 3U;
	int64_t x388 = -1LL;
	volatile int32_t t95 = 192495847;

    t95 = ((x385&(x386/x387))==x388);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x390 = INT8_MIN;
	volatile int64_t x391 = INT64_MIN;
	int32_t x392 = -1;
	static int32_t t96 = 5;

    t96 = ((x389&(x390/x391))==x392);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x393 = INT8_MIN;
	static uint16_t x395 = 43U;
	volatile int8_t x396 = INT8_MAX;

    t97 = ((x393&(x394/x395))==x396);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x397 = 344U;
	uint32_t x398 = UINT32_MAX;
	uint8_t x399 = UINT8_MAX;
	static int16_t x400 = INT16_MIN;
	volatile int32_t t98 = -72746;

    t98 = ((x397&(x398/x399))==x400);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x401 = 8;
	uint16_t x402 = 8050U;
	static int32_t x403 = 1366887;

    t99 = ((x401&(x402/x403))==x404);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x405 = UINT8_MAX;
	uint32_t x407 = UINT32_MAX;
	uint16_t x408 = 90U;
	volatile int32_t t100 = -702107;

    t100 = ((x405&(x406/x407))==x408);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x410 = -2;
	int16_t x411 = -1;
	int32_t x412 = -502334796;

    t101 = ((x409&(x410/x411))==x412);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x413 = INT32_MIN;
	uint8_t x414 = UINT8_MAX;
	volatile int8_t x415 = INT8_MIN;
	int16_t x416 = 26;

    t102 = ((x413&(x414/x415))==x416);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x417 = 17U;
	int8_t x419 = -1;
	uint64_t x420 = 485992606846142LLU;
	int32_t t103 = 25463013;

    t103 = ((x417&(x418/x419))==x420);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x421 = INT8_MAX;
	int64_t x422 = INT64_MAX;
	static uint16_t x423 = 2U;
	int32_t t104 = 1272506;

    t104 = ((x421&(x422/x423))==x424);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x426 = UINT16_MAX;
	int8_t x428 = INT8_MIN;
	volatile int32_t t105 = 1486943;

    t105 = ((x425&(x426/x427))==x428);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x429 = INT32_MAX;
	uint64_t x430 = 258LLU;
	uint64_t x431 = 1102934351389012LLU;
	int64_t x432 = INT64_MIN;
	int32_t t106 = 1;

    t106 = ((x429&(x430/x431))==x432);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x433 = 7U;
	static int32_t x435 = INT32_MIN;
	int64_t x436 = INT64_MAX;
	int32_t t107 = 676;

    t107 = ((x433&(x434/x435))==x436);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x437 = 955U;
	volatile uint32_t x438 = 31U;
	uint16_t x439 = 2854U;
	static uint8_t x440 = 23U;

    t108 = ((x437&(x438/x439))==x440);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x442 = -1LL;
	volatile int16_t x443 = -125;
	uint8_t x444 = 14U;
	int32_t t109 = -14;

    t109 = ((x441&(x442/x443))==x444);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x445 = -8225494;
	int16_t x446 = -1;
	static uint8_t x447 = UINT8_MAX;
	static int32_t t110 = -2460783;

    t110 = ((x445&(x446/x447))==x448);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x449 = INT8_MAX;
	volatile int16_t x450 = INT16_MAX;
	int64_t x451 = -1LL;
	static uint8_t x452 = 1U;
	volatile int32_t t111 = -27811;

    t111 = ((x449&(x450/x451))==x452);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x454 = INT64_MAX;
	int64_t x455 = -1LL;
	uint8_t x456 = 74U;

    t112 = ((x453&(x454/x455))==x456);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x457 = 0;
	int64_t x458 = 1LL;
	int8_t x459 = INT8_MIN;
	uint32_t x460 = 12376U;

    t113 = ((x457&(x458/x459))==x460);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x462 = INT16_MIN;
	uint16_t x463 = 147U;
	int32_t x464 = INT32_MIN;
	int32_t t114 = 1;

    t114 = ((x461&(x462/x463))==x464);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x465 = UINT16_MAX;
	static uint16_t x466 = 34U;
	uint64_t x467 = 13606350LLU;
	uint8_t x468 = 98U;

    t115 = ((x465&(x466/x467))==x468);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x469 = 2082U;
	int32_t x471 = 2662;
	uint8_t x472 = UINT8_MAX;
	int32_t t116 = -11;

    t116 = ((x469&(x470/x471))==x472);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x473 = 2087684259LLU;
	int64_t x474 = INT64_MAX;
	static int64_t x475 = INT64_MAX;
	static volatile int32_t t117 = -991705;

    t117 = ((x473&(x474/x475))==x476);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x477 = -2;
	uint32_t x478 = 866U;
	int16_t x479 = INT16_MAX;
	int32_t t118 = 2263;

    t118 = ((x477&(x478/x479))==x480);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x481 = -1;
	volatile int32_t x482 = -1;
	int16_t x483 = INT16_MAX;
	volatile int32_t t119 = -2;

    t119 = ((x481&(x482/x483))==x484);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x485 = INT8_MIN;
	uint16_t x486 = 855U;
	static uint16_t x487 = 1U;
	int64_t x488 = -183116680081447LL;
	volatile int32_t t120 = 29643775;

    t120 = ((x485&(x486/x487))==x488);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x489 = INT8_MAX;
	uint32_t x490 = 83U;
	int32_t x491 = INT32_MAX;
	int16_t x492 = -367;
	volatile int32_t t121 = -28625;

    t121 = ((x489&(x490/x491))==x492);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x493 = 156U;
	int32_t x494 = -23137074;
	uint16_t x495 = UINT16_MAX;
	uint16_t x496 = 28U;

    t122 = ((x493&(x494/x495))==x496);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x497 = INT16_MIN;
	int8_t x499 = -1;
	int32_t x500 = INT32_MIN;
	int32_t t123 = 244088619;

    t123 = ((x497&(x498/x499))==x500);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x501 = INT32_MAX;
	int64_t x503 = INT64_MIN;
	static int8_t x504 = -1;
	volatile int32_t t124 = 898983744;

    t124 = ((x501&(x502/x503))==x504);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x506 = 112U;
	volatile uint64_t x507 = UINT64_MAX;
	volatile uint8_t x508 = 1U;
	volatile int32_t t125 = 366670;

    t125 = ((x505&(x506/x507))==x508);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x509 = UINT64_MAX;
	int16_t x510 = INT16_MIN;
	int16_t x511 = INT16_MAX;
	static volatile int32_t t126 = 877598345;

    t126 = ((x509&(x510/x511))==x512);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x513 = 30;
	int64_t x514 = -1LL;
	static volatile int8_t x515 = 3;
	static uint32_t x516 = UINT32_MAX;
	int32_t t127 = -28210304;

    t127 = ((x513&(x514/x515))==x516);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x517 = UINT8_MAX;
	int16_t x518 = 0;
	int32_t x519 = -6578362;
	int32_t x520 = INT32_MIN;
	volatile int32_t t128 = -14080943;

    t128 = ((x517&(x518/x519))==x520);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x521 = UINT32_MAX;
	volatile int64_t x523 = INT64_MIN;
	volatile uint32_t x524 = UINT32_MAX;
	static int32_t t129 = -111661269;

    t129 = ((x521&(x522/x523))==x524);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x525 = UINT64_MAX;
	static int8_t x526 = INT8_MAX;
	static int64_t x527 = -1LL;
	int32_t x528 = INT32_MAX;
	int32_t t130 = -111486904;

    t130 = ((x525&(x526/x527))==x528);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x530 = INT16_MIN;
	volatile uint64_t x531 = 854215877006063260LLU;
	static volatile uint8_t x532 = 0U;
	int32_t t131 = 545339556;

    t131 = ((x529&(x530/x531))==x532);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x533 = -1;
	int16_t x534 = INT16_MIN;
	volatile int16_t x535 = 871;
	int8_t x536 = 1;

    t132 = ((x533&(x534/x535))==x536);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x537 = -99047965LL;
	volatile uint64_t x538 = UINT64_MAX;
	int32_t x540 = INT32_MIN;
	int32_t t133 = 361004;

    t133 = ((x537&(x538/x539))==x540);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x541 = 60U;
	int32_t x542 = INT32_MAX;
	int32_t x544 = -1;
	int32_t t134 = -10529;

    t134 = ((x541&(x542/x543))==x544);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x545 = INT32_MAX;
	int32_t x546 = -1;
	int16_t x548 = -5067;
	int32_t t135 = 1;

    t135 = ((x545&(x546/x547))==x548);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x549 = INT8_MAX;
	int8_t x550 = INT8_MIN;
	uint8_t x551 = 61U;
	int32_t t136 = 11018290;

    t136 = ((x549&(x550/x551))==x552);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x553 = INT32_MIN;
	uint8_t x554 = 91U;
	uint8_t x555 = 15U;

    t137 = ((x553&(x554/x555))==x556);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x557 = INT32_MAX;
	static int32_t x558 = -473099;
	static volatile uint16_t x559 = 109U;
	static uint16_t x560 = 4911U;
	int32_t t138 = -581326;

    t138 = ((x557&(x558/x559))==x560);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x562 = -1361;
	volatile int32_t x563 = INT32_MAX;
	int16_t x564 = -1;
	volatile int32_t t139 = -212301;

    t139 = ((x561&(x562/x563))==x564);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x565 = INT64_MIN;
	int32_t x566 = INT32_MIN;
	int32_t x567 = INT32_MAX;
	int8_t x568 = 5;
	static int32_t t140 = 4701567;

    t140 = ((x565&(x566/x567))==x568);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x569 = 3U;
	volatile uint64_t x570 = UINT64_MAX;
	uint32_t x571 = 2U;
	static uint32_t x572 = 4800975U;
	int32_t t141 = 272914;

    t141 = ((x569&(x570/x571))==x572);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x574 = UINT32_MAX;
	int64_t x575 = INT64_MIN;
	volatile uint32_t x576 = 3313264U;
	volatile int32_t t142 = -1;

    t142 = ((x573&(x574/x575))==x576);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int16_t x577 = -1;
	int8_t x578 = -13;
	uint16_t x580 = 0U;
	static volatile int32_t t143 = -292182206;

    t143 = ((x577&(x578/x579))==x580);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x583 = UINT8_MAX;
	static int16_t x584 = INT16_MIN;

    t144 = ((x581&(x582/x583))==x584);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x585 = UINT64_MAX;
	uint32_t x587 = 7U;
	int32_t x588 = INT32_MIN;
	int32_t t145 = 0;

    t145 = ((x585&(x586/x587))==x588);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x589 = -1;
	static uint32_t x590 = 126471285U;
	static int64_t x591 = -1LL;
	static int8_t x592 = INT8_MIN;

    t146 = ((x589&(x590/x591))==x592);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x593 = 8;
	static uint8_t x594 = 1U;
	static volatile int64_t x595 = INT64_MAX;
	volatile int32_t x596 = 1146570;
	int32_t t147 = 15;

    t147 = ((x593&(x594/x595))==x596);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x598 = 0U;
	volatile int8_t x599 = INT8_MAX;
	int8_t x600 = 5;
	volatile int32_t t148 = 199476;

    t148 = ((x597&(x598/x599))==x600);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    

    t149 = ((x601&(x602/x603))==x604);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x605 = -1LL;
	int16_t x606 = 15;
	int64_t x607 = 141544LL;
	int8_t x608 = INT8_MIN;
	int32_t t150 = -116;

    t150 = ((x605&(x606/x607))==x608);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x609 = 0;
	uint8_t x610 = UINT8_MAX;

    t151 = ((x609&(x610/x611))==x612);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint8_t x613 = 25U;
	volatile int32_t x614 = -1;
	uint32_t x615 = 2296U;
	static int8_t x616 = INT8_MIN;

    t152 = ((x613&(x614/x615))==x616);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x617 = INT32_MAX;
	volatile uint64_t x618 = 15131781LLU;
	uint8_t x619 = 6U;
	uint32_t x620 = 9041U;
	int32_t t153 = 2;

    t153 = ((x617&(x618/x619))==x620);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x621 = INT16_MIN;
	uint8_t x622 = 0U;
	int8_t x623 = INT8_MIN;
	volatile int32_t x624 = INT32_MIN;
	volatile int32_t t154 = -6986942;

    t154 = ((x621&(x622/x623))==x624);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x625 = INT32_MIN;
	int8_t x626 = INT8_MIN;
	int32_t x628 = -7626;
	int32_t t155 = 5;

    t155 = ((x625&(x626/x627))==x628);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x636 = INT8_MAX;
	volatile int32_t t156 = -341;

    t156 = ((x633&(x634/x635))==x636);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x637 = -1;
	int8_t x639 = INT8_MIN;
	int8_t x640 = 61;
	int32_t t157 = -2675;

    t157 = ((x637&(x638/x639))==x640);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x641 = INT64_MIN;
	int64_t x642 = INT64_MAX;
	uint64_t x644 = UINT64_MAX;
	static volatile int32_t t158 = 656;

    t158 = ((x641&(x642/x643))==x644);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x645 = -1;
	static int16_t x646 = INT16_MIN;
	int32_t x647 = INT32_MAX;
	static uint8_t x648 = UINT8_MAX;

    t159 = ((x645&(x646/x647))==x648);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x649 = 0U;
	volatile int64_t x650 = 922LL;
	uint64_t x652 = 81LLU;

    t160 = ((x649&(x650/x651))==x652);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x653 = UINT64_MAX;
	uint8_t x655 = 61U;
	int8_t x656 = -1;

    t161 = ((x653&(x654/x655))==x656);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x657 = INT32_MIN;
	volatile int32_t x658 = -1;
	int32_t x659 = INT32_MIN;
	int8_t x660 = INT8_MIN;
	volatile int32_t t162 = 169116948;

    t162 = ((x657&(x658/x659))==x660);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x661 = UINT16_MAX;
	volatile uint64_t x662 = 742LLU;
	static uint16_t x663 = 34U;
	volatile int16_t x664 = INT16_MIN;

    t163 = ((x661&(x662/x663))==x664);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x665 = -1;
	uint64_t x666 = UINT64_MAX;
	uint32_t x668 = 10732U;
	volatile int32_t t164 = -13949899;

    t164 = ((x665&(x666/x667))==x668);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x673 = INT32_MAX;
	uint16_t x675 = 3254U;
	int8_t x676 = -1;

    t165 = ((x673&(x674/x675))==x676);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x677 = 1U;
	volatile uint8_t x678 = UINT8_MAX;
	uint16_t x679 = UINT16_MAX;
	volatile int32_t t166 = 312239;

    t166 = ((x677&(x678/x679))==x680);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x681 = -1;
	uint32_t x682 = 431098855U;
	static uint8_t x683 = 21U;
	static volatile uint64_t x684 = 3908027086LLU;
	int32_t t167 = 31661971;

    t167 = ((x681&(x682/x683))==x684);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x685 = 48714U;
	static volatile int64_t x686 = -1LL;
	uint32_t x687 = 1755U;
	static int32_t x688 = 13643;
	int32_t t168 = 926064;

    t168 = ((x685&(x686/x687))==x688);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int16_t x689 = INT16_MIN;
	int32_t x690 = 247;
	volatile int8_t x691 = INT8_MAX;
	uint32_t x692 = 12U;
	int32_t t169 = 2;

    t169 = ((x689&(x690/x691))==x692);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x693 = INT64_MIN;
	int16_t x694 = -2263;
	uint64_t x695 = 1608635541677428LLU;
	int16_t x696 = -1;
	volatile int32_t t170 = 1;

    t170 = ((x693&(x694/x695))==x696);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x697 = INT64_MIN;
	int64_t x698 = INT64_MIN;
	static uint8_t x700 = UINT8_MAX;
	volatile int32_t t171 = -7;

    t171 = ((x697&(x698/x699))==x700);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x701 = INT64_MIN;
	int16_t x702 = -1253;
	int32_t x703 = INT32_MAX;
	uint64_t x704 = 3LLU;
	volatile int32_t t172 = 1;

    t172 = ((x701&(x702/x703))==x704);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x706 = 12034767354828171LLU;
	int16_t x707 = INT16_MAX;
	int32_t x708 = -1;

    t173 = ((x705&(x706/x707))==x708);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x709 = 21850164079LLU;
	int64_t x710 = INT64_MIN;
	int16_t x711 = 255;

    t174 = ((x709&(x710/x711))==x712);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x713 = INT8_MAX;
	volatile uint16_t x714 = 45U;
	int64_t x715 = 69049367019534298LL;
	uint64_t x716 = UINT64_MAX;
	volatile int32_t t175 = 6390140;

    t175 = ((x713&(x714/x715))==x716);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x717 = -80859386;
	uint64_t x719 = 27034355026867LLU;
	static int16_t x720 = INT16_MAX;
	int32_t t176 = 325827911;

    t176 = ((x717&(x718/x719))==x720);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x721 = 11683479266LLU;
	int64_t x722 = -4348LL;
	int32_t x723 = -1;
	volatile int32_t t177 = 39199223;

    t177 = ((x721&(x722/x723))==x724);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x725 = -1;
	uint64_t x726 = 3545125551735487863LLU;
	static volatile int8_t x727 = INT8_MAX;
	static volatile uint64_t x728 = 0LLU;
	volatile int32_t t178 = 47792;

    t178 = ((x725&(x726/x727))==x728);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x730 = 5429U;
	static int64_t x731 = -160866LL;
	volatile int32_t t179 = -56;

    t179 = ((x729&(x730/x731))==x732);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x735 = INT32_MIN;
	int32_t t180 = 117790769;

    t180 = ((x733&(x734/x735))==x736);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x737 = UINT64_MAX;
	int8_t x738 = INT8_MAX;
	int32_t t181 = -3281;

    t181 = ((x737&(x738/x739))==x740);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x741 = 1;
	volatile int64_t x742 = INT64_MAX;
	int32_t x744 = -1;
	volatile int32_t t182 = -5882782;

    t182 = ((x741&(x742/x743))==x744);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x749 = INT16_MIN;
	int8_t x751 = INT8_MAX;
	int16_t x752 = -1923;
	int32_t t183 = 17095;

    t183 = ((x749&(x750/x751))==x752);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x754 = INT32_MIN;
	static int16_t x755 = -7;
	int32_t x756 = -1;
	static volatile int32_t t184 = 814717;

    t184 = ((x753&(x754/x755))==x756);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x757 = INT8_MIN;
	int16_t x758 = INT16_MIN;
	volatile int16_t x759 = -1;
	uint16_t x760 = 4U;
	int32_t t185 = -356586534;

    t185 = ((x757&(x758/x759))==x760);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x761 = INT32_MIN;
	volatile int32_t x762 = INT32_MIN;
	int64_t x763 = 98514778550LL;
	int16_t x764 = INT16_MIN;
	int32_t t186 = 487075;

    t186 = ((x761&(x762/x763))==x764);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x765 = INT64_MAX;
	volatile int16_t x767 = INT16_MIN;
	int64_t x768 = INT64_MIN;
	int32_t t187 = 7705;

    t187 = ((x765&(x766/x767))==x768);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x771 = -44;
	volatile int64_t x772 = -1LL;
	volatile int32_t t188 = -33;

    t188 = ((x769&(x770/x771))==x772);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x774 = INT8_MAX;
	uint8_t x776 = 25U;

    t189 = ((x773&(x774/x775))==x776);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x777 = INT16_MIN;
	uint64_t x779 = 13496729415316980LLU;
	static uint32_t x780 = UINT32_MAX;

    t190 = ((x777&(x778/x779))==x780);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x781 = INT64_MAX;
	uint8_t x783 = UINT8_MAX;
	volatile int32_t x784 = INT32_MIN;
	volatile int32_t t191 = -22478;

    t191 = ((x781&(x782/x783))==x784);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x785 = UINT64_MAX;
	static uint8_t x786 = UINT8_MAX;
	volatile int32_t x787 = INT32_MIN;
	volatile int64_t x788 = 1465286334374876LL;
	volatile int32_t t192 = 2947;

    t192 = ((x785&(x786/x787))==x788);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x790 = 1413U;
	int64_t x791 = INT64_MIN;
	int8_t x792 = INT8_MIN;
	int32_t t193 = 261405348;

    t193 = ((x789&(x790/x791))==x792);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x793 = 86872046LLU;
	int8_t x794 = -61;
	static uint32_t x795 = UINT32_MAX;
	volatile int16_t x796 = -13;
	int32_t t194 = 11644359;

    t194 = ((x793&(x794/x795))==x796);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x797 = UINT8_MAX;
	static int64_t x799 = -261201147084606672LL;
	static int16_t x800 = INT16_MIN;
	int32_t t195 = -103127356;

    t195 = ((x797&(x798/x799))==x800);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x801 = -1;
	int8_t x802 = -1;
	volatile int32_t x803 = -77550187;
	static int32_t x804 = INT32_MAX;

    t196 = ((x801&(x802/x803))==x804);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x805 = UINT64_MAX;
	int16_t x806 = -1;
	int32_t x807 = INT32_MIN;
	int8_t x808 = INT8_MIN;
	volatile int32_t t197 = 2927;

    t197 = ((x805&(x806/x807))==x808);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x809 = INT16_MIN;
	volatile int8_t x810 = INT8_MIN;
	uint64_t x811 = UINT64_MAX;
	uint16_t x812 = UINT16_MAX;
	volatile int32_t t198 = -3;

    t198 = ((x809&(x810/x811))==x812);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x813 = INT64_MIN;
	int32_t x814 = INT32_MAX;
	volatile int64_t x816 = INT64_MIN;
	volatile int32_t t199 = -10487922;

    t199 = ((x813&(x814/x815))==x816);

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

