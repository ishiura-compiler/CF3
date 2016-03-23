
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

static int64_t x1 = INT64_MIN;
uint16_t x4 = 5014U;
static volatile uint16_t x5 = 4U;
volatile int8_t x6 = 2;
int32_t x8 = 148;
static volatile int64_t t2 = -24210126624898LL;
uint16_t x18 = 1U;
uint64_t x20 = UINT64_MAX;
uint8_t x25 = 14U;
static uint8_t x31 = UINT8_MAX;
static int8_t x44 = 13;
int64_t x45 = INT64_MIN;
int16_t x55 = 4777;
static uint64_t t13 = 1983584656LLU;
int32_t x57 = INT32_MIN;
volatile int32_t x58 = 843476154;
static volatile int64_t x62 = -1LL;
int16_t x63 = 29;
int64_t t15 = -231963731414050LL;
uint16_t x66 = UINT16_MAX;
volatile int64_t t18 = -1784LL;
int16_t x80 = INT16_MIN;
volatile uint64_t t19 = 3LLU;
static int64_t x83 = INT64_MIN;
uint32_t x94 = 22U;
int32_t x110 = 47;
static int8_t x112 = -56;
volatile int32_t t27 = -5;
int16_t x115 = INT16_MIN;
int64_t t29 = -3026710LL;
int32_t x122 = INT32_MIN;
int32_t x128 = INT32_MIN;
volatile uint64_t t31 = 1869009955736904799LLU;
static int16_t x132 = INT16_MIN;
volatile uint8_t x133 = 10U;
int16_t x137 = -66;
int64_t x140 = -15624755550LL;
int64_t t35 = 387070620072495262LL;
uint64_t t36 = 34042392076376354LLU;
static uint32_t x168 = UINT32_MAX;
volatile uint32_t t41 = 66U;
static int64_t x181 = INT64_MIN;
int64_t x182 = INT64_MAX;
static int8_t x185 = INT8_MIN;
uint8_t x187 = 8U;
int32_t t44 = -76471864;
static volatile uint64_t t45 = 154531LLU;
volatile uint64_t t47 = 0LLU;
int16_t x206 = INT16_MAX;
volatile int32_t x209 = -1;
int16_t x211 = -499;
static volatile int64_t x212 = INT64_MIN;
static volatile int32_t x217 = -1;
uint16_t x226 = 1U;
volatile uint64_t t53 = 4551009LLU;
uint8_t x230 = 1U;
static volatile int8_t x231 = INT8_MIN;
int32_t t54 = -130561517;
int32_t x233 = -50262;
uint64_t t55 = 27LLU;
volatile int64_t x238 = 137427LL;
uint64_t t56 = 99227319270498LLU;
volatile int32_t t57 = 154570852;
uint32_t x248 = 62U;
uint32_t t58 = 5302711U;
int8_t x253 = INT8_MIN;
int8_t x262 = INT8_MIN;
int64_t x264 = INT64_MAX;
uint64_t x265 = UINT64_MAX;
int16_t x267 = INT16_MIN;
volatile int64_t x273 = -1LL;
volatile int8_t x274 = INT8_MAX;
int64_t x285 = -1LL;
static int64_t t68 = -25LL;
uint8_t x298 = UINT8_MAX;
int16_t x301 = INT16_MIN;
uint64_t x307 = 941415LLU;
volatile int8_t x314 = INT8_MAX;
volatile uint8_t x316 = 25U;
int32_t x318 = -3;
uint8_t x324 = 87U;
volatile int16_t x339 = INT16_MIN;
static volatile int8_t x344 = -2;
volatile int16_t x347 = INT16_MAX;
uint32_t x368 = UINT32_MAX;
int16_t x381 = INT16_MAX;
int32_t x394 = INT32_MIN;
static uint32_t x398 = 264994598U;
uint32_t x410 = UINT32_MAX;
volatile int16_t x420 = INT16_MAX;
uint8_t x423 = UINT8_MAX;
volatile int32_t x424 = INT32_MIN;
volatile uint64_t t99 = 491491669973867LLU;
int32_t x442 = INT32_MAX;
volatile int64_t t102 = -5LL;
volatile uint64_t t103 = 36667110442LLU;
int64_t x451 = 1828563LL;
volatile int8_t x452 = -58;
static uint16_t x455 = UINT16_MAX;
int32_t x457 = INT32_MAX;
static uint16_t x466 = UINT16_MAX;
uint8_t x471 = 31U;
uint64_t x483 = 9LLU;
volatile uint8_t x484 = 3U;
volatile int64_t x486 = INT64_MIN;
uint32_t x497 = UINT32_MAX;
static volatile int64_t x508 = INT64_MAX;
uint64_t x515 = 456572299436849063LLU;
volatile int16_t x518 = 7011;
int16_t x519 = 166;
static int64_t x521 = INT64_MIN;
static volatile uint64_t t122 = 1063LLU;
int64_t x538 = -67935413LL;
int8_t x539 = INT8_MAX;
volatile uint16_t x542 = UINT16_MAX;
volatile uint32_t x551 = 1007889741U;
int16_t x552 = 14;
int8_t x556 = INT8_MIN;
uint16_t x558 = 56U;
int16_t x559 = 1;
int16_t x563 = INT16_MIN;
static int32_t x565 = 800;
int64_t x568 = INT64_MIN;
volatile int64_t x569 = -600467288632LL;
uint32_t x579 = UINT32_MAX;
uint64_t x585 = UINT64_MAX;
static int16_t x586 = INT16_MIN;
static uint64_t t137 = 59749LLU;
uint8_t x589 = UINT8_MAX;
static int32_t x599 = 50973435;
volatile uint64_t t141 = 2327729180LLU;
volatile int8_t x605 = INT8_MAX;
int64_t x615 = INT64_MIN;
uint8_t x616 = 23U;
static volatile uint32_t x617 = UINT32_MAX;
static int8_t x618 = -39;
uint32_t t145 = 1922U;
int16_t x622 = INT16_MIN;
volatile int64_t x629 = INT64_MIN;
static int32_t x635 = INT32_MIN;
int16_t x644 = INT16_MIN;
volatile int32_t x648 = 3;
volatile int64_t t151 = -736677302LL;
volatile uint64_t x651 = UINT64_MAX;
volatile int8_t x653 = INT8_MIN;
int32_t x655 = INT32_MIN;
volatile uint8_t x667 = 3U;
uint64_t t156 = 3145337LLU;
int64_t x669 = INT64_MIN;
static int32_t x672 = INT32_MIN;
volatile int64_t t157 = -24794733523LL;
volatile uint16_t x683 = 10425U;
int16_t x689 = INT16_MIN;
int32_t x691 = -1;
static int32_t x700 = INT32_MIN;
uint16_t x705 = UINT16_MAX;
int32_t x713 = INT32_MIN;
static uint32_t x716 = UINT32_MAX;
int8_t x721 = INT8_MIN;
static int32_t x723 = 1;
uint8_t x725 = 15U;
volatile int32_t x728 = INT32_MIN;
int64_t x729 = -842644002LL;
int32_t x731 = -1047612;
int16_t x732 = INT16_MIN;
volatile int32_t t171 = -50173945;
int64_t x740 = 31494120680818838LL;
uint64_t t173 = 9222524LLU;
int32_t x754 = -1;
static uint16_t x759 = 1899U;
uint8_t x768 = UINT8_MAX;
static int64_t t177 = 3940302LL;
int8_t x773 = INT8_MIN;
uint32_t x775 = 1172640651U;
uint8_t x776 = 15U;
int8_t x778 = 2;
int8_t x786 = 29;
static int16_t x797 = INT16_MAX;
uint64_t t185 = 558027971900LLU;
static volatile int32_t x802 = INT32_MIN;
int64_t x804 = -1LL;
uint16_t x821 = UINT16_MAX;
volatile int64_t x823 = -1LL;
int8_t x824 = INT8_MIN;
uint8_t x827 = 23U;
volatile int64_t t191 = 9LL;
int16_t x834 = INT16_MAX;
int8_t x835 = -9;
uint64_t x836 = 97975215LLU;
int32_t x842 = INT32_MIN;
static volatile uint32_t t194 = 1446831153U;
int64_t x850 = INT64_MIN;
static int64_t x855 = INT64_MAX;
uint16_t x856 = UINT16_MAX;
static int64_t x859 = -490956429988020LL;
int32_t x860 = INT32_MAX;


void f0(void) {
    	volatile int32_t x2 = 1;
	int32_t x3 = 1;
	int64_t t0 = -898333529311LL;

    t0 = ((x1%x2)+(x3/x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x7 = 51;
	int32_t t1 = 23;

    t1 = ((x5%x6)+(x7/x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MAX;
	int32_t x10 = 994253;
	static int64_t x11 = -1LL;
	int16_t x12 = -1;

    t2 = ((x9%x10)+(x11/x12));

    if (t2 != 891421LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	uint32_t x14 = 63830906U;
	volatile int32_t x15 = -1;
	int32_t x16 = INT32_MIN;
	static volatile uint32_t t3 = 473898U;

    t3 = ((x13%x14)+(x15/x16));

    if (t3 != 18296466U) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -2917LL;
	uint8_t x19 = UINT8_MAX;
	static uint64_t t4 = 616842866970515LLU;

    t4 = ((x17%x18)+(x19/x20));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 61;
	static int32_t x22 = -1;
	int8_t x23 = INT8_MIN;
	int8_t x24 = -1;
	int32_t t5 = -15;

    t5 = ((x21%x22)+(x23/x24));

    if (t5 != 128) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = INT32_MIN;
	static int32_t x27 = -40;
	static volatile int64_t x28 = -613116LL;
	volatile int64_t t6 = 3285840481403LL;

    t6 = ((x25%x26)+(x27/x28));

    if (t6 != 14LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	static int16_t x30 = -766;
	volatile int32_t x32 = INT32_MIN;
	uint32_t t7 = 77U;

    t7 = ((x29%x30)+(x31/x32));

    if (t7 != 765U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 2740U;
	int8_t x34 = INT8_MAX;
	int16_t x35 = INT16_MIN;
	int32_t x36 = -428657639;
	volatile uint32_t t8 = 1605U;

    t8 = ((x33%x34)+(x35/x36));

    if (t8 != 73U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 19LLU;
	uint16_t x38 = UINT16_MAX;
	int16_t x39 = -16;
	uint16_t x40 = 3111U;
	uint64_t t9 = 202138871LLU;

    t9 = ((x37%x38)+(x39/x40));

    if (t9 != 19LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	int32_t x42 = -15880;
	volatile int8_t x43 = -1;
	static int32_t t10 = 954172441;

    t10 = ((x41%x42)+(x43/x44));

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x46 = INT16_MAX;
	uint16_t x47 = 32U;
	volatile uint32_t x48 = UINT32_MAX;
	volatile int64_t t11 = 2815LL;

    t11 = ((x45%x46)+(x47/x48));

    if (t11 != -8LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x49 = -1;
	int16_t x50 = -1;
	int64_t x51 = INT64_MAX;
	volatile int32_t x52 = INT32_MIN;
	volatile int64_t t12 = 3175LL;

    t12 = ((x49%x50)+(x51/x52));

    if (t12 != -4294967295LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = 0;
	int32_t x54 = 4;
	static uint64_t x56 = 1640637866080578497LLU;

    t13 = ((x53%x54)+(x55/x56));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x59 = INT8_MIN;
	uint8_t x60 = 1U;
	volatile int32_t t14 = -113;

    t14 = ((x57%x58)+(x59/x60));

    if (t14 != -460531468) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x61 = 0U;
	int8_t x64 = -1;

    t15 = ((x61%x62)+(x63/x64));

    if (t15 != -29LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = -257486;
	int16_t x67 = -1;
	int32_t x68 = INT32_MAX;
	int32_t t16 = -925563355;

    t16 = ((x65%x66)+(x67/x68));

    if (t16 != -60881) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 39U;
	uint8_t x70 = 1U;
	static uint8_t x71 = 1U;
	uint8_t x72 = 120U;
	int32_t t17 = 24785195;

    t17 = ((x69%x70)+(x71/x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x73 = -1;
	int8_t x74 = INT8_MIN;
	int16_t x75 = INT16_MIN;
	int64_t x76 = INT64_MIN;

    t18 = ((x73%x74)+(x75/x76));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x77 = 17U;
	uint16_t x78 = 2730U;
	uint64_t x79 = UINT64_MAX;

    t19 = ((x77%x78)+(x79/x80));

    if (t19 != 18LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 109U;
	int32_t x82 = -122655;
	uint8_t x84 = UINT8_MAX;
	int64_t t20 = -995LL;

    t20 = ((x81%x82)+(x83/x84));

    if (t20 != -36170086419038227LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MAX;
	uint8_t x86 = UINT8_MAX;
	uint32_t x87 = UINT32_MAX;
	int16_t x88 = INT16_MIN;
	uint32_t t21 = 804150U;

    t21 = ((x85%x86)+(x87/x88));

    if (t21 != 128U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x89 = -1;
	uint32_t x90 = UINT32_MAX;
	volatile int8_t x91 = INT8_MAX;
	int32_t x92 = INT32_MAX;
	volatile uint32_t t22 = 144U;

    t22 = ((x89%x90)+(x91/x92));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MAX;
	int32_t x95 = INT32_MAX;
	int16_t x96 = -1;
	volatile int64_t t23 = -245141256LL;

    t23 = ((x93%x94)+(x95/x96));

    if (t23 != -2147483640LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint8_t x97 = UINT8_MAX;
	int8_t x98 = INT8_MIN;
	int8_t x99 = 7;
	uint64_t x100 = 7968111342LLU;
	static volatile uint64_t t24 = 1LLU;

    t24 = ((x97%x98)+(x99/x100));

    if (t24 != 127LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	uint16_t x102 = 16146U;
	int64_t x103 = -1LL;
	static uint64_t x104 = 1080945865170333324LLU;
	uint64_t t25 = 24591739121LLU;

    t25 = ((x101%x102)+(x103/x104));

    if (t25 != 18446744073709551157LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -3292;
	volatile int8_t x106 = INT8_MIN;
	int16_t x107 = -2;
	static int16_t x108 = INT16_MIN;
	static volatile int32_t t26 = -560301863;

    t26 = ((x105%x106)+(x107/x108));

    if (t26 != -92) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MAX;
	int32_t x111 = INT32_MIN;

    t27 = ((x109%x110)+(x111/x112));

    if (t27 != 38347930) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -1;
	volatile uint32_t x114 = UINT32_MAX;
	int16_t x116 = 8272;
	uint32_t t28 = 7590U;

    t28 = ((x113%x114)+(x115/x116));

    if (t28 != 4294967293U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = INT32_MAX;
	int8_t x118 = INT8_MIN;
	uint8_t x119 = UINT8_MAX;
	int64_t x120 = -1LL;

    t29 = ((x117%x118)+(x119/x120));

    if (t29 != -128LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MAX;
	int64_t x123 = 3922564LL;
	uint16_t x124 = 1661U;
	static int64_t t30 = 64465148358727LL;

    t30 = ((x121%x122)+(x123/x124));

    if (t30 != 35128LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 5765LLU;
	static int8_t x126 = INT8_MIN;
	uint64_t x127 = 3LLU;

    t31 = ((x125%x126)+(x127/x128));

    if (t31 != 5765LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x129 = 117U;
	int32_t x130 = INT32_MAX;
	volatile int16_t x131 = INT16_MIN;
	volatile int32_t t32 = 2044031;

    t32 = ((x129%x130)+(x131/x132));

    if (t32 != 118) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x134 = INT64_MIN;
	int64_t x135 = INT64_MIN;
	volatile uint16_t x136 = 263U;
	int64_t t33 = 263724141281924LL;

    t33 = ((x133%x134)+(x135/x136));

    if (t33 != -35069855653440202LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = INT64_MIN;
	uint16_t x139 = 1958U;
	static int64_t t34 = 940173225772LL;

    t34 = ((x137%x138)+(x139/x140));

    if (t34 != -66LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	static uint32_t x142 = 1224U;
	int16_t x143 = -740;
	volatile int16_t x144 = -1;

    t35 = ((x141%x142)+(x143/x144));

    if (t35 != -204LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x145 = 54U;
	uint16_t x146 = 20U;
	static int8_t x147 = -1;
	volatile uint64_t x148 = 19617897217LLU;

    t36 = ((x145%x146)+(x147/x148));

    if (t36 != 940301814LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = INT64_MIN;
	uint8_t x150 = 6U;
	int16_t x151 = 0;
	uint32_t x152 = 8045162U;
	volatile int64_t t37 = -106890027LL;

    t37 = ((x149%x150)+(x151/x152));

    if (t37 != -2LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x161 = 263089023999082076LLU;
	int64_t x162 = INT64_MAX;
	volatile int64_t x163 = INT64_MAX;
	static uint64_t x164 = UINT64_MAX;
	uint64_t t38 = 2LLU;

    t38 = ((x161%x162)+(x163/x164));

    if (t38 != 263089023999082076LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x165 = 1;
	static int64_t x166 = -35459883LL;
	uint16_t x167 = 18860U;
	static int64_t t39 = 219439621955LL;

    t39 = ((x165%x166)+(x167/x168));

    if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint32_t x169 = 1U;
	static int64_t x170 = INT64_MIN;
	volatile int8_t x171 = -7;
	static int64_t x172 = 9720577310LL;
	volatile int64_t t40 = -520679689LL;

    t40 = ((x169%x170)+(x171/x172));

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x173 = UINT32_MAX;
	static int8_t x174 = -2;
	static uint8_t x175 = 1U;
	static int32_t x176 = INT32_MIN;

    t41 = ((x173%x174)+(x175/x176));

    if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x177 = UINT64_MAX;
	volatile int16_t x178 = INT16_MIN;
	static int8_t x179 = INT8_MIN;
	uint32_t x180 = UINT32_MAX;
	volatile uint64_t t42 = 3534775872054688LLU;

    t42 = ((x177%x178)+(x179/x180));

    if (t42 != 32767LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x183 = 88785332U;
	volatile int8_t x184 = -48;
	static volatile int64_t t43 = 152626378LL;

    t43 = ((x181%x182)+(x183/x184));

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x186 = INT16_MIN;
	static int16_t x188 = 11;

    t44 = ((x185%x186)+(x187/x188));

    if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x189 = INT64_MAX;
	volatile int32_t x190 = INT32_MAX;
	uint16_t x191 = 3U;
	uint64_t x192 = 44697799384147LLU;

    t45 = ((x189%x190)+(x191/x192));

    if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = 33;
	static uint32_t x194 = UINT32_MAX;
	static volatile int16_t x195 = 1934;
	int32_t x196 = INT32_MIN;
	uint32_t t46 = 250598U;

    t46 = ((x193%x194)+(x195/x196));

    if (t46 != 33U) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x197 = 849104LLU;
	uint64_t x198 = 92389016LLU;
	volatile int16_t x199 = INT16_MAX;
	uint8_t x200 = 114U;

    t47 = ((x197%x198)+(x199/x200));

    if (t47 != 849391LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x201 = 7U;
	static int64_t x202 = 37759204LL;
	volatile int8_t x203 = 1;
	int32_t x204 = -40;
	int64_t t48 = -502136LL;

    t48 = ((x201%x202)+(x203/x204));

    if (t48 != 7LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x205 = 0U;
	uint32_t x207 = UINT32_MAX;
	volatile int8_t x208 = INT8_MIN;
	static uint32_t t49 = 0U;

    t49 = ((x205%x206)+(x207/x208));

    if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x210 = INT32_MIN;
	int64_t t50 = 1330LL;

    t50 = ((x209%x210)+(x211/x212));

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x213 = -1;
	uint16_t x214 = UINT16_MAX;
	int8_t x215 = 59;
	uint32_t x216 = 238879330U;
	uint32_t t51 = UINT32_MAX;

    t51 = ((x213%x214)+(x215/x216));

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x218 = UINT16_MAX;
	int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MIN;
	volatile int32_t t52 = -4;

    t52 = ((x217%x218)+(x219/x220));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x225 = INT32_MAX;
	uint64_t x227 = 97681223848LLU;
	static int8_t x228 = INT8_MAX;

    t53 = ((x225%x226)+(x227/x228));

    if (t53 != 769143494LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x229 = UINT16_MAX;
	uint8_t x232 = 78U;

    t54 = ((x229%x230)+(x231/x232));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x234 = 2U;
	uint64_t x235 = 11102216LLU;
	volatile int32_t x236 = -1;

    t55 = ((x233%x234)+(x235/x236));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x237 = 184U;
	uint64_t x239 = 44230803029384015LLU;
	int8_t x240 = INT8_MAX;

    t56 = ((x237%x238)+(x239/x240));

    if (t56 != 348274039601632LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x241 = INT32_MAX;
	int8_t x242 = 28;
	int16_t x243 = INT16_MAX;
	volatile int8_t x244 = INT8_MAX;

    t57 = ((x241%x242)+(x243/x244));

    if (t57 != 273) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x245 = 20U;
	static int8_t x246 = 4;
	int8_t x247 = INT8_MIN;

    t58 = ((x245%x246)+(x247/x248));

    if (t58 != 69273664U) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x249 = 1U;
	int16_t x250 = INT16_MIN;
	int8_t x251 = -25;
	int8_t x252 = INT8_MAX;
	volatile int32_t t59 = 6732;

    t59 = ((x249%x250)+(x251/x252));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x254 = -1;
	int16_t x255 = -1;
	static int64_t x256 = INT64_MIN;
	int64_t t60 = 33622574LL;

    t60 = ((x253%x254)+(x255/x256));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x261 = 0LLU;
	int32_t x263 = INT32_MAX;
	volatile uint64_t t61 = 2160656LLU;

    t61 = ((x261%x262)+(x263/x264));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x266 = -992LL;
	static volatile int32_t x268 = INT32_MIN;
	static volatile uint64_t t62 = 20982LLU;

    t62 = ((x265%x266)+(x267/x268));

    if (t62 != 991LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x269 = -1;
	int32_t x270 = -2099;
	int8_t x271 = INT8_MIN;
	int16_t x272 = INT16_MAX;
	int32_t t63 = -260;

    t63 = ((x269%x270)+(x271/x272));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint16_t x275 = 1U;
	uint32_t x276 = 3984U;
	static int64_t t64 = -13562215651730362LL;

    t64 = ((x273%x274)+(x275/x276));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x277 = -1;
	static uint64_t x278 = UINT64_MAX;
	int32_t x279 = INT32_MAX;
	int8_t x280 = INT8_MIN;
	volatile uint64_t t65 = 2971957153467425186LLU;

    t65 = ((x277%x278)+(x279/x280));

    if (t65 != 18446744073692774401LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x281 = 17U;
	static int16_t x282 = INT16_MAX;
	uint64_t x283 = 100509412468LLU;
	int16_t x284 = 3876;
	uint64_t t66 = 2LLU;

    t66 = ((x281%x282)+(x283/x284));

    if (t66 != 25931237LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x286 = INT32_MAX;
	uint16_t x287 = 1339U;
	int64_t x288 = -1LL;
	int64_t t67 = -5843LL;

    t67 = ((x285%x286)+(x287/x288));

    if (t67 != -1340LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x289 = INT16_MAX;
	volatile int32_t x290 = 1;
	int8_t x291 = INT8_MIN;
	int64_t x292 = INT64_MIN;

    t68 = ((x289%x290)+(x291/x292));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x293 = INT16_MIN;
	uint8_t x294 = 17U;
	uint8_t x295 = UINT8_MAX;
	uint16_t x296 = 242U;
	volatile int32_t t69 = 13;

    t69 = ((x293%x294)+(x295/x296));

    if (t69 != -8) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x297 = INT8_MIN;
	int8_t x299 = INT8_MAX;
	int16_t x300 = INT16_MAX;
	int32_t t70 = -522;

    t70 = ((x297%x298)+(x299/x300));

    if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x302 = 54;
	uint32_t x303 = UINT32_MAX;
	int32_t x304 = INT32_MAX;
	uint32_t t71 = 95354U;

    t71 = ((x301%x302)+(x303/x304));

    if (t71 != 4294967254U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x305 = 106659U;
	int16_t x306 = 1;
	int64_t x308 = INT64_MIN;
	uint64_t t72 = 0LLU;

    t72 = ((x305%x306)+(x307/x308));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x309 = INT64_MAX;
	volatile int8_t x310 = -1;
	uint8_t x311 = 6U;
	int8_t x312 = INT8_MIN;
	volatile int64_t t73 = 547LL;

    t73 = ((x309%x310)+(x311/x312));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x313 = 33413U;
	int64_t x315 = INT64_MIN;
	volatile int64_t t74 = -5683528570239LL;

    t74 = ((x313%x314)+(x315/x316));

    if (t74 != -368934881474191020LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x317 = INT64_MAX;
	volatile int32_t x319 = -1;
	uint8_t x320 = 126U;
	int64_t t75 = -326LL;

    t75 = ((x317%x318)+(x319/x320));

    if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x321 = INT8_MAX;
	static int32_t x322 = INT32_MIN;
	int8_t x323 = INT8_MIN;
	static int32_t t76 = 7567000;

    t76 = ((x321%x322)+(x323/x324));

    if (t76 != 126) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x325 = 1298;
	int32_t x326 = INT32_MAX;
	volatile uint16_t x327 = 12U;
	int8_t x328 = INT8_MIN;
	int32_t t77 = 84;

    t77 = ((x325%x326)+(x327/x328));

    if (t77 != 1298) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x329 = INT32_MIN;
	uint32_t x330 = UINT32_MAX;
	int32_t x331 = INT32_MAX;
	int16_t x332 = INT16_MAX;
	uint32_t t78 = 650998397U;

    t78 = ((x329%x330)+(x331/x332));

    if (t78 != 2147549186U) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x337 = INT8_MAX;
	int32_t x338 = INT32_MIN;
	volatile int8_t x340 = 1;
	volatile int32_t t79 = -2528;

    t79 = ((x337%x338)+(x339/x340));

    if (t79 != -32641) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x341 = 458628888528274769LLU;
	static int8_t x342 = INT8_MIN;
	static volatile uint8_t x343 = 124U;
	volatile uint64_t t80 = 858LLU;

    t80 = ((x341%x342)+(x343/x344));

    if (t80 != 458628888528274707LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x345 = INT16_MIN;
	int32_t x346 = -1;
	static volatile uint64_t x348 = UINT64_MAX;
	uint64_t t81 = 3868LLU;

    t81 = ((x345%x346)+(x347/x348));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MIN;
	uint32_t x351 = 13U;
	int64_t x352 = -1LL;
	volatile int64_t t82 = -2730977LL;

    t82 = ((x349%x350)+(x351/x352));

    if (t82 != -13LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x353 = -1LL;
	uint8_t x354 = 24U;
	uint16_t x355 = UINT16_MAX;
	volatile uint16_t x356 = 1U;
	int64_t t83 = 1LL;

    t83 = ((x353%x354)+(x355/x356));

    if (t83 != 65534LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint16_t x361 = 589U;
	int64_t x362 = INT64_MIN;
	uint64_t x363 = 203LLU;
	static int64_t x364 = INT64_MAX;
	static volatile uint64_t t84 = 20824LLU;

    t84 = ((x361%x362)+(x363/x364));

    if (t84 != 589LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x365 = UINT16_MAX;
	uint32_t x366 = 4201104U;
	static int32_t x367 = INT32_MIN;
	volatile uint32_t t85 = 860U;

    t85 = ((x365%x366)+(x367/x368));

    if (t85 != 65535U) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x377 = UINT16_MAX;
	uint32_t x378 = 637U;
	uint64_t x379 = 144222359238LLU;
	int32_t x380 = INT32_MIN;
	uint64_t t86 = 32175526695964596LLU;

    t86 = ((x377%x378)+(x379/x380));

    if (t86 != 561LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x382 = UINT16_MAX;
	int8_t x383 = INT8_MAX;
	int8_t x384 = -1;
	int32_t t87 = 3970361;

    t87 = ((x381%x382)+(x383/x384));

    if (t87 != 32640) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x385 = INT64_MAX;
	volatile uint64_t x386 = UINT64_MAX;
	int32_t x387 = INT32_MIN;
	static int16_t x388 = -4653;
	static uint64_t t88 = 2171445LLU;

    t88 = ((x385%x386)+(x387/x388));

    if (t88 != 9223372036855237333LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x389 = UINT16_MAX;
	int32_t x390 = -1;
	int16_t x391 = -1;
	volatile int32_t x392 = INT32_MIN;
	volatile int32_t t89 = 1046449;

    t89 = ((x389%x390)+(x391/x392));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x393 = INT32_MIN;
	int32_t x395 = INT32_MIN;
	int16_t x396 = 2005;
	static int32_t t90 = -611872851;

    t90 = ((x393%x394)+(x395/x396));

    if (t90 != -1071064) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x397 = -1;
	volatile int16_t x399 = -1;
	static int16_t x400 = INT16_MIN;
	volatile uint32_t t91 = 761751U;

    t91 = ((x397%x398)+(x399/x400));

    if (t91 != 55053727U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x401 = -1LL;
	uint16_t x402 = 10U;
	static uint32_t x403 = 40166555U;
	volatile uint16_t x404 = 51U;
	int64_t t92 = 27916556LL;

    t92 = ((x401%x402)+(x403/x404));

    if (t92 != 787578LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x405 = -1;
	static int16_t x406 = INT16_MIN;
	volatile int32_t x407 = 1;
	volatile int16_t x408 = 5;
	int32_t t93 = -5;

    t93 = ((x405%x406)+(x407/x408));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x409 = 425;
	static int16_t x411 = INT16_MAX;
	int16_t x412 = INT16_MIN;
	uint32_t t94 = 2U;

    t94 = ((x409%x410)+(x411/x412));

    if (t94 != 425U) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x413 = 94U;
	static volatile uint32_t x414 = 67382U;
	int8_t x415 = INT8_MAX;
	int64_t x416 = -1LL;
	int64_t t95 = -4095877243272LL;

    t95 = ((x413%x414)+(x415/x416));

    if (t95 != -33LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x417 = -2;
	int16_t x418 = INT16_MIN;
	volatile int16_t x419 = INT16_MAX;
	volatile int32_t t96 = 97016;

    t96 = ((x417%x418)+(x419/x420));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x421 = 30U;
	int32_t x422 = 79474;
	volatile int32_t t97 = -52827;

    t97 = ((x421%x422)+(x423/x424));

    if (t97 != 30) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint8_t x425 = 0U;
	int8_t x426 = -1;
	static uint32_t x427 = 126210607U;
	uint8_t x428 = 5U;
	volatile uint32_t t98 = 265U;

    t98 = ((x425%x426)+(x427/x428));

    if (t98 != 25242121U) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x429 = UINT64_MAX;
	volatile uint16_t x430 = 464U;
	int16_t x431 = INT16_MAX;
	volatile uint32_t x432 = 7U;

    t99 = ((x429%x430)+(x431/x432));

    if (t99 != 4936LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x433 = INT32_MIN;
	int8_t x434 = INT8_MIN;
	int64_t x435 = INT64_MAX;
	static int64_t x436 = INT64_MIN;
	static volatile int64_t t100 = 1416205162192079LL;

    t100 = ((x433%x434)+(x435/x436));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x437 = -1;
	int64_t x438 = INT64_MIN;
	int32_t x439 = INT32_MIN;
	uint32_t x440 = UINT32_MAX;
	volatile int64_t t101 = 35804954LL;

    t101 = ((x437%x438)+(x439/x440));

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x441 = 1;
	static int64_t x443 = -249871479505458LL;
	int32_t x444 = INT32_MIN;

    t102 = ((x441%x442)+(x443/x444));

    if (t102 != 116356LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x445 = -1LL;
	volatile uint64_t x446 = UINT64_MAX;
	static volatile uint64_t x447 = 0LLU;
	uint64_t x448 = 4071320527845648LLU;

    t103 = ((x445%x446)+(x447/x448));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint16_t x449 = 0U;
	uint16_t x450 = UINT16_MAX;
	static volatile int64_t t104 = -3LL;

    t104 = ((x449%x450)+(x451/x452));

    if (t104 != -31526LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x453 = -560;
	static int32_t x454 = INT32_MIN;
	int16_t x456 = 1630;
	int32_t t105 = 23637;

    t105 = ((x453%x454)+(x455/x456));

    if (t105 != -520) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x458 = 43878709;
	int32_t x459 = -15207;
	volatile int16_t x460 = -1;
	int32_t t106 = -115951307;

    t106 = ((x457%x458)+(x459/x460));

    if (t106 != 41320822) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x461 = 634688;
	int8_t x462 = -4;
	static int16_t x463 = 3;
	uint8_t x464 = UINT8_MAX;
	int32_t t107 = -4863;

    t107 = ((x461%x462)+(x463/x464));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x465 = INT8_MIN;
	int8_t x467 = INT8_MIN;
	static uint8_t x468 = UINT8_MAX;
	int32_t t108 = -978;

    t108 = ((x465%x466)+(x467/x468));

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x469 = UINT32_MAX;
	uint8_t x470 = 75U;
	volatile uint64_t x472 = 523711851763541LLU;
	uint64_t t109 = 5LLU;

    t109 = ((x469%x470)+(x471/x472));

    if (t109 != 45LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x473 = INT16_MIN;
	int16_t x474 = INT16_MAX;
	volatile int8_t x475 = -14;
	int32_t x476 = INT32_MIN;
	int32_t t110 = 22524;

    t110 = ((x473%x474)+(x475/x476));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x477 = 3057879;
	uint16_t x478 = UINT16_MAX;
	uint16_t x479 = 74U;
	int8_t x480 = -1;
	int32_t t111 = 212;

    t111 = ((x477%x478)+(x479/x480));

    if (t111 != 43195) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x481 = INT64_MAX;
	static volatile int32_t x482 = 2487782;
	volatile uint64_t t112 = 40870LLU;

    t112 = ((x481%x482)+(x483/x484));

    if (t112 != 1241316LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x485 = -1;
	int32_t x487 = INT32_MIN;
	int64_t x488 = INT64_MIN;
	int64_t t113 = 11479LL;

    t113 = ((x485%x486)+(x487/x488));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x489 = INT16_MAX;
	volatile int8_t x490 = 2;
	uint8_t x491 = 6U;
	static uint16_t x492 = 22241U;
	volatile int32_t t114 = 38555639;

    t114 = ((x489%x490)+(x491/x492));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x493 = 10459932988LLU;
	int64_t x494 = INT64_MAX;
	int16_t x495 = -1;
	int64_t x496 = INT64_MIN;
	volatile uint64_t t115 = 972321002252394206LLU;

    t115 = ((x493%x494)+(x495/x496));

    if (t115 != 10459932988LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x498 = UINT16_MAX;
	int64_t x499 = INT64_MIN;
	int16_t x500 = INT16_MIN;
	static volatile int64_t t116 = 123LL;

    t116 = ((x497%x498)+(x499/x500));

    if (t116 != 281474976710656LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x505 = 14LLU;
	static int16_t x506 = INT16_MIN;
	uint32_t x507 = 5205U;
	static uint64_t t117 = 2266413796990089LLU;

    t117 = ((x505%x506)+(x507/x508));

    if (t117 != 14LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x509 = INT16_MIN;
	static volatile int16_t x510 = -2290;
	uint16_t x511 = 35U;
	volatile int16_t x512 = INT16_MIN;
	int32_t t118 = -162;

    t118 = ((x509%x510)+(x511/x512));

    if (t118 != -708) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x513 = 13560003386LLU;
	int8_t x514 = -2;
	int8_t x516 = -1;
	static uint64_t t119 = 74230561LLU;

    t119 = ((x513%x514)+(x515/x516));

    if (t119 != 13560003386LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x517 = 4LLU;
	volatile uint32_t x520 = 69927U;
	static uint64_t t120 = 49340575594939488LLU;

    t120 = ((x517%x518)+(x519/x520));

    if (t120 != 4LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x522 = INT64_MIN;
	int64_t x523 = INT64_MAX;
	static volatile int64_t x524 = -8351794200478LL;
	volatile int64_t t121 = -488875373184LL;

    t121 = ((x521%x522)+(x523/x524));

    if (t121 != -1104358LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x525 = -1;
	static uint64_t x526 = UINT64_MAX;
	uint8_t x527 = 0U;
	static int64_t x528 = INT64_MIN;

    t122 = ((x525%x526)+(x527/x528));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x529 = UINT16_MAX;
	static volatile uint64_t x530 = 2765958038LLU;
	uint16_t x531 = 14189U;
	static uint32_t x532 = 168036821U;
	uint64_t t123 = 4930229LLU;

    t123 = ((x529%x530)+(x531/x532));

    if (t123 != 65535LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x533 = INT16_MAX;
	int16_t x534 = INT16_MIN;
	static int64_t x535 = -1LL;
	volatile int32_t x536 = -1;
	static volatile int64_t t124 = -295640LL;

    t124 = ((x533%x534)+(x535/x536));

    if (t124 != 32768LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint16_t x537 = UINT16_MAX;
	static int64_t x540 = INT64_MIN;
	int64_t t125 = 12479LL;

    t125 = ((x537%x538)+(x539/x540));

    if (t125 != 65535LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int64_t x541 = INT64_MIN;
	int8_t x543 = -7;
	int32_t x544 = 61741;
	static volatile int64_t t126 = -28994468790LL;

    t126 = ((x541%x542)+(x543/x544));

    if (t126 != -32768LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x545 = INT16_MAX;
	static uint64_t x546 = 11647806LLU;
	volatile int32_t x547 = INT32_MAX;
	int64_t x548 = 39228737540209684LL;
	static volatile uint64_t t127 = 429713630529253733LLU;

    t127 = ((x545%x546)+(x547/x548));

    if (t127 != 32767LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x549 = INT32_MIN;
	uint64_t x550 = 162537375360LLU;
	uint64_t t128 = 166168544LLU;

    t128 = ((x549%x550)+(x551/x552));

    if (t128 != 92779449532LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x553 = 5U;
	uint64_t x554 = 22188325774792576LLU;
	static uint64_t x555 = 1569906LLU;
	static volatile uint64_t t129 = 73763763414433LLU;

    t129 = ((x553%x554)+(x555/x556));

    if (t129 != 5LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x557 = 120536019805LLU;
	int32_t x560 = INT32_MAX;
	volatile uint64_t t130 = 0LLU;

    t130 = ((x557%x558)+(x559/x560));

    if (t130 != 5LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x561 = 6095U;
	int8_t x562 = INT8_MIN;
	volatile uint16_t x564 = 4212U;
	volatile int32_t t131 = -14579;

    t131 = ((x561%x562)+(x563/x564));

    if (t131 != 72) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x566 = 1542664LL;
	int16_t x567 = INT16_MAX;
	static int64_t t132 = -139354272473957LL;

    t132 = ((x565%x566)+(x567/x568));

    if (t132 != 800LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x570 = -1;
	uint16_t x571 = 0U;
	static int8_t x572 = -1;
	int64_t t133 = 27124LL;

    t133 = ((x569%x570)+(x571/x572));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int64_t x573 = INT64_MAX;
	static volatile int64_t x574 = INT64_MIN;
	int64_t x575 = 4881998LL;
	static int64_t x576 = 26824917346LL;
	int64_t t134 = INT64_MAX;

    t134 = ((x573%x574)+(x575/x576));

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x577 = -1LL;
	uint64_t x578 = 1254032434844972864LLU;
	static int64_t x580 = INT64_MAX;
	volatile uint64_t t135 = 258LLU;

    t135 = ((x577%x578)+(x579/x580));

    if (t135 != 890289985879931519LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x581 = UINT8_MAX;
	int64_t x582 = 4LL;
	static int16_t x583 = -3;
	static int64_t x584 = INT64_MAX;
	static volatile int64_t t136 = -130489172146LL;

    t136 = ((x581%x582)+(x583/x584));

    if (t136 != 3LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x587 = -30;
	uint16_t x588 = 5537U;

    t137 = ((x585%x586)+(x587/x588));

    if (t137 != 32767LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x590 = INT64_MIN;
	static int16_t x591 = 0;
	int32_t x592 = INT32_MIN;
	int64_t t138 = -35355918LL;

    t138 = ((x589%x590)+(x591/x592));

    if (t138 != 255LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x593 = 30642350782LLU;
	uint32_t x594 = 108998U;
	volatile int16_t x595 = -1;
	volatile uint8_t x596 = 13U;
	uint64_t t139 = 167495LLU;

    t139 = ((x593%x594)+(x595/x596));

    if (t139 != 70036LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x597 = INT8_MIN;
	uint8_t x598 = 14U;
	volatile int16_t x600 = INT16_MAX;
	int32_t t140 = 906;

    t140 = ((x597%x598)+(x599/x600));

    if (t140 != 1553) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x601 = -1;
	volatile uint64_t x602 = 11688888LLU;
	uint64_t x603 = UINT64_MAX;
	int64_t x604 = INT64_MAX;

    t141 = ((x601%x602)+(x603/x604));

    if (t141 != 8551097LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x606 = INT8_MIN;
	volatile int64_t x607 = INT64_MIN;
	int16_t x608 = -638;
	int64_t t142 = 4097098192132599LL;

    t142 = ((x605%x606)+(x607/x608));

    if (t142 != 14456695982531123LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x609 = UINT8_MAX;
	uint64_t x610 = UINT64_MAX;
	uint16_t x611 = 1750U;
	int16_t x612 = INT16_MAX;
	uint64_t t143 = 412759544665945593LLU;

    t143 = ((x609%x610)+(x611/x612));

    if (t143 != 255LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x613 = 14;
	int16_t x614 = -191;
	volatile int64_t t144 = 13515743770422598LL;

    t144 = ((x613%x614)+(x615/x616));

    if (t144 != -401016175515425021LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int16_t x619 = INT16_MAX;
	int16_t x620 = -1;

    t145 = ((x617%x618)+(x619/x620));

    if (t145 != 4294934567U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x621 = 17U;
	volatile uint64_t x623 = 0LLU;
	volatile int32_t x624 = INT32_MIN;
	volatile uint64_t t146 = 65105102193259LLU;

    t146 = ((x621%x622)+(x623/x624));

    if (t146 != 17LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x630 = -1918114204892721733LL;
	static uint32_t x631 = UINT32_MAX;
	static volatile uint8_t x632 = UINT8_MAX;
	volatile int64_t t147 = -9998169483LL;

    t147 = ((x629%x630)+(x631/x632));

    if (t147 != -1550915217267045867LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x633 = -37;
	uint8_t x634 = UINT8_MAX;
	uint32_t x636 = 7U;
	uint32_t t148 = 7729U;

    t148 = ((x633%x634)+(x635/x636));

    if (t148 != 306783341U) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x637 = 12U;
	int8_t x638 = 11;
	volatile uint32_t x639 = UINT32_MAX;
	int64_t x640 = INT64_MIN;
	int64_t t149 = -246LL;

    t149 = ((x637%x638)+(x639/x640));

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x641 = INT64_MIN;
	uint16_t x642 = 1447U;
	volatile int16_t x643 = 1;
	static volatile int64_t t150 = -6173407294LL;

    t150 = ((x641%x642)+(x643/x644));

    if (t150 != -317LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x645 = INT32_MIN;
	int64_t x646 = -1LL;
	int8_t x647 = -1;

    t151 = ((x645%x646)+(x647/x648));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x649 = UINT64_MAX;
	volatile int64_t x650 = INT64_MAX;
	volatile int16_t x652 = INT16_MAX;
	uint64_t t152 = 73548986LLU;

    t152 = ((x649%x650)+(x651/x652));

    if (t152 != 562967133814801LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x654 = INT64_MIN;
	uint32_t x656 = 839605000U;
	int64_t t153 = -2273912628968534565LL;

    t153 = ((x653%x654)+(x655/x656));

    if (t153 != -126LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x657 = 1U;
	static int64_t x658 = INT64_MAX;
	volatile uint16_t x659 = UINT16_MAX;
	volatile int32_t x660 = INT32_MAX;
	int64_t t154 = -432LL;

    t154 = ((x657%x658)+(x659/x660));

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x661 = -1;
	volatile int8_t x662 = -2;
	uint8_t x663 = 62U;
	int64_t x664 = 3945LL;
	int64_t t155 = -413078047LL;

    t155 = ((x661%x662)+(x663/x664));

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x665 = INT16_MIN;
	uint64_t x666 = 2380562569150504LLU;
	uint16_t x668 = UINT16_MAX;

    t156 = ((x665%x666)+(x667/x668));

    if (t156 != 2145287931413856LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x670 = INT32_MAX;
	volatile int16_t x671 = 1;

    t157 = ((x669%x670)+(x671/x672));

    if (t157 != -2LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x673 = UINT32_MAX;
	int32_t x674 = INT32_MIN;
	static uint32_t x675 = UINT32_MAX;
	static uint32_t x676 = UINT32_MAX;
	volatile uint32_t t158 = 744679297U;

    t158 = ((x673%x674)+(x675/x676));

    if (t158 != 2147483648U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x681 = UINT8_MAX;
	int8_t x682 = INT8_MAX;
	uint32_t x684 = 824404U;
	volatile uint32_t t159 = 1935268715U;

    t159 = ((x681%x682)+(x683/x684));

    if (t159 != 1U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x685 = 10U;
	uint8_t x686 = UINT8_MAX;
	volatile int16_t x687 = INT16_MIN;
	static int16_t x688 = -1;
	int32_t t160 = -31222378;

    t160 = ((x685%x686)+(x687/x688));

    if (t160 != 32778) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x690 = -1;
	int16_t x692 = INT16_MIN;
	volatile int32_t t161 = -120;

    t161 = ((x689%x690)+(x691/x692));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x693 = INT64_MIN;
	volatile int64_t x694 = -1LL;
	int32_t x695 = -2;
	static int32_t x696 = INT32_MIN;
	volatile int64_t t162 = -44348119LL;

    t162 = ((x693%x694)+(x695/x696));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x697 = INT32_MIN;
	int32_t x698 = INT32_MIN;
	volatile int8_t x699 = -1;
	volatile int32_t t163 = -14685964;

    t163 = ((x697%x698)+(x699/x700));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x701 = INT64_MAX;
	uint64_t x702 = 705LLU;
	volatile uint64_t x703 = UINT64_MAX;
	volatile int32_t x704 = INT32_MIN;
	uint64_t t164 = 6333683117LLU;

    t164 = ((x701%x702)+(x703/x704));

    if (t164 != 83LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint16_t x706 = 1558U;
	volatile int32_t x707 = INT32_MAX;
	static uint64_t x708 = 772082LLU;
	uint64_t t165 = 701LLU;

    t165 = ((x705%x706)+(x707/x708));

    if (t165 != 2880LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x714 = INT16_MIN;
	int16_t x715 = INT16_MAX;
	uint32_t t166 = 3342224U;

    t166 = ((x713%x714)+(x715/x716));

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x717 = 728173LL;
	static int64_t x718 = 28718896LL;
	uint64_t x719 = 342250118LLU;
	static volatile int64_t x720 = INT64_MAX;
	volatile uint64_t t167 = 762270207109076LLU;

    t167 = ((x717%x718)+(x719/x720));

    if (t167 != 728173LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x722 = -3;
	int8_t x724 = -1;
	int32_t t168 = -115069777;

    t168 = ((x721%x722)+(x723/x724));

    if (t168 != -3) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x726 = INT32_MIN;
	uint64_t x727 = UINT64_MAX;
	uint64_t t169 = 4LLU;

    t169 = ((x725%x726)+(x727/x728));

    if (t169 != 16LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x730 = 1U;
	int64_t t170 = -1010979509638995360LL;

    t170 = ((x729%x730)+(x731/x732));

    if (t170 != 31LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x733 = INT32_MIN;
	volatile int32_t x734 = INT32_MAX;
	int16_t x735 = 1;
	static int32_t x736 = 973534;

    t171 = ((x733%x734)+(x735/x736));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x737 = 0;
	int8_t x738 = -1;
	int8_t x739 = INT8_MAX;
	int64_t t172 = -1615LL;

    t172 = ((x737%x738)+(x739/x740));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x741 = 58;
	int8_t x742 = INT8_MIN;
	uint64_t x743 = 231415025695LLU;
	int64_t x744 = INT64_MAX;

    t173 = ((x741%x742)+(x743/x744));

    if (t173 != 58LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x745 = 18LLU;
	int16_t x746 = INT16_MIN;
	int16_t x747 = 1688;
	uint16_t x748 = UINT16_MAX;
	volatile uint64_t t174 = 137554LLU;

    t174 = ((x745%x746)+(x747/x748));

    if (t174 != 18LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x753 = UINT16_MAX;
	int8_t x755 = 30;
	uint32_t x756 = UINT32_MAX;
	static uint32_t t175 = 174U;

    t175 = ((x753%x754)+(x755/x756));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x757 = 211187U;
	static volatile uint16_t x758 = 11504U;
	static int8_t x760 = -30;
	uint32_t t176 = 25183696U;

    t176 = ((x757%x758)+(x759/x760));

    if (t176 != 4052U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x765 = 105374916LL;
	volatile int32_t x766 = -1;
	int64_t x767 = INT64_MIN;

    t177 = ((x765%x766)+(x767/x768));

    if (t177 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x769 = INT64_MAX;
	static int64_t x770 = INT64_MIN;
	int16_t x771 = INT16_MIN;
	uint16_t x772 = 98U;
	int64_t t178 = 10270LL;

    t178 = ((x769%x770)+(x771/x772));

    if (t178 != 9223372036854775473LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x774 = 24362U;
	uint32_t t179 = 108181U;

    t179 = ((x773%x774)+(x775/x776));

    if (t179 != 78175915U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x777 = 40;
	int8_t x779 = 1;
	int8_t x780 = INT8_MIN;
	int32_t t180 = -194082;

    t180 = ((x777%x778)+(x779/x780));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x781 = -1;
	int64_t x782 = 49231199819166LL;
	int64_t x783 = INT64_MAX;
	int8_t x784 = INT8_MIN;
	int64_t t181 = -60LL;

    t181 = ((x781%x782)+(x783/x784));

    if (t181 != -72057594037927936LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x785 = UINT8_MAX;
	uint8_t x787 = 3U;
	volatile int16_t x788 = INT16_MAX;
	int32_t t182 = -58;

    t182 = ((x785%x786)+(x787/x788));

    if (t182 != 23) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x789 = INT16_MIN;
	uint64_t x790 = 1874965LLU;
	int64_t x791 = -1LL;
	volatile uint32_t x792 = 32314U;
	uint64_t t183 = 442730295703892LLU;

    t183 = ((x789%x790)+(x791/x792));

    if (t183 != 13568LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x793 = INT64_MAX;
	uint64_t x794 = 596663798LLU;
	volatile int64_t x795 = INT64_MAX;
	int16_t x796 = INT16_MIN;
	static uint64_t t184 = 7234923317LLU;

    t184 = ((x793%x794)+(x795/x796));

    if (t184 != 18446462598941365258LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x798 = 172;
	uint64_t x799 = UINT64_MAX;
	int8_t x800 = -1;

    t185 = ((x797%x798)+(x799/x800));

    if (t185 != 88LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x801 = UINT64_MAX;
	static uint64_t x803 = UINT64_MAX;
	volatile uint64_t t186 = 535261202075630LLU;

    t186 = ((x801%x802)+(x803/x804));

    if (t186 != 2147483648LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x805 = 4U;
	int32_t x806 = INT32_MIN;
	int8_t x807 = -16;
	volatile int16_t x808 = 1869;
	int32_t t187 = 799127681;

    t187 = ((x805%x806)+(x807/x808));

    if (t187 != 4) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x809 = INT32_MIN;
	int32_t x810 = -7;
	int64_t x811 = -25569531273395LL;
	uint8_t x812 = 8U;
	int64_t t188 = -217701418360902370LL;

    t188 = ((x809%x810)+(x811/x812));

    if (t188 != -3196191409176LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x817 = INT64_MAX;
	uint8_t x818 = 7U;
	int64_t x819 = INT64_MIN;
	volatile int64_t x820 = 122LL;
	volatile int64_t t189 = 3LL;

    t189 = ((x817%x818)+(x819/x820));

    if (t189 != -75601410138153900LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x822 = 6U;
	int64_t t190 = -33087840044159LL;

    t190 = ((x821%x822)+(x823/x824));

    if (t190 != 3LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x825 = INT16_MAX;
	int16_t x826 = -1;
	volatile int64_t x828 = -1LL;

    t191 = ((x825%x826)+(x827/x828));

    if (t191 != -23LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x829 = -1595110LL;
	int8_t x830 = INT8_MAX;
	static int64_t x831 = -1LL;
	int32_t x832 = INT32_MIN;
	int64_t t192 = -3623997502628926LL;

    t192 = ((x829%x830)+(x831/x832));

    if (t192 != -117LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x833 = -1;
	uint64_t t193 = 111846398688380243LLU;

    t193 = ((x833%x834)+(x835/x836));

    if (t193 != 188279699856LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x841 = INT32_MIN;
	int16_t x843 = INT16_MAX;
	static uint32_t x844 = 293154084U;

    t194 = ((x841%x842)+(x843/x844));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int16_t x845 = INT16_MIN;
	int8_t x846 = -12;
	uint32_t x847 = UINT32_MAX;
	static int32_t x848 = INT32_MIN;
	volatile uint32_t t195 = 8022583U;

    t195 = ((x845%x846)+(x847/x848));

    if (t195 != 4294967289U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x849 = INT64_MAX;
	static uint64_t x851 = 813182LLU;
	int32_t x852 = 59299750;
	volatile uint64_t t196 = 1945837660826524LLU;

    t196 = ((x849%x850)+(x851/x852));

    if (t196 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x853 = 53;
	static int32_t x854 = INT32_MIN;
	int64_t t197 = -156896285965318232LL;

    t197 = ((x853%x854)+(x855/x856));

    if (t197 != 140739635871797LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x857 = -1;
	static int16_t x858 = 434;
	int64_t t198 = 31227LL;

    t198 = ((x857%x858)+(x859/x860));

    if (t198 != -228620LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int64_t x861 = INT64_MIN;
	int32_t x862 = -1;
	uint32_t x863 = 1544533U;
	int64_t x864 = -1LL;
	volatile int64_t t199 = 300937104525847LL;

    t199 = ((x861%x862)+(x863/x864));

    if (t199 != -1544533LL) { NG(); } else { ; }
	
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

