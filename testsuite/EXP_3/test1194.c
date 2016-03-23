
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

static int16_t x7 = INT16_MAX;
volatile int16_t x29 = INT16_MIN;
static int16_t x42 = 10;
uint8_t x45 = UINT8_MAX;
int64_t x59 = -8080LL;
int32_t x61 = INT32_MIN;
uint64_t x63 = UINT64_MAX;
uint32_t x67 = 15956871U;
uint16_t x69 = 1U;
int64_t x76 = -27627001LL;
volatile int32_t x83 = INT32_MIN;
volatile int32_t t18 = 8606;
int64_t x85 = INT64_MIN;
uint16_t x88 = UINT16_MAX;
int32_t t20 = 28795;
static uint8_t x96 = 38U;
int8_t x97 = -3;
volatile uint64_t t22 = 122833648131764LLU;
volatile int64_t x107 = -24132811736LL;
volatile int32_t x108 = 77347765;
int16_t x113 = -5501;
int32_t x119 = 83815;
int8_t x126 = INT8_MIN;
volatile int64_t x127 = -3563782531537LL;
int32_t t28 = 29774;
int8_t x129 = INT8_MIN;
volatile int32_t t30 = -15;
static int32_t x142 = INT32_MIN;
int8_t x145 = INT8_MIN;
static int16_t x147 = -15046;
int64_t x150 = -1LL;
int32_t x151 = -955289;
int32_t x152 = -1;
static int64_t t33 = -62158742LL;
int32_t x161 = -1;
volatile int64_t x169 = 3LL;
volatile uint32_t t37 = 2304U;
static uint64_t x177 = UINT64_MAX;
static int64_t x179 = INT64_MIN;
uint16_t x195 = UINT16_MAX;
uint32_t x198 = UINT32_MAX;
volatile uint16_t x201 = UINT16_MAX;
int32_t x207 = 1;
volatile uint8_t x208 = 7U;
volatile uint32_t t45 = 7755U;
int64_t x213 = 394651343LL;
uint32_t t49 = 172371257U;
volatile int64_t x230 = -18767229701224LL;
uint16_t x232 = 4353U;
int64_t x234 = INT64_MAX;
volatile int32_t t52 = 0;
volatile uint16_t x260 = 0U;
static int16_t x261 = -1;
int8_t x262 = 1;
int32_t t56 = -149495575;
uint64_t x267 = UINT64_MAX;
static int64_t x272 = 510LL;
uint8_t x275 = UINT8_MAX;
uint64_t x276 = 26748958184442LLU;
int8_t x285 = INT8_MIN;
uint16_t x287 = UINT16_MAX;
int64_t x294 = 29743LL;
uint8_t x295 = UINT8_MAX;
static uint32_t x296 = UINT32_MAX;
int64_t x304 = INT64_MAX;
int16_t x307 = -61;
int8_t x320 = INT8_MAX;
int32_t x321 = INT32_MIN;
int8_t x325 = INT8_MAX;
volatile int64_t x326 = -1LL;
int64_t x335 = INT64_MIN;
static volatile int8_t x338 = INT8_MIN;
volatile uint64_t t73 = 194082969260758LLU;
volatile int8_t x354 = INT8_MAX;
volatile int32_t t74 = 63;
volatile int16_t x357 = 46;
int64_t x362 = INT64_MAX;
static int8_t x369 = -1;
uint32_t x372 = 1457U;
int8_t x378 = INT8_MIN;
uint64_t t83 = 3053LLU;
static int64_t x394 = INT64_MIN;
volatile uint16_t x395 = 79U;
volatile int64_t t84 = 180782587364923LL;
uint16_t x405 = UINT16_MAX;
int8_t x411 = INT8_MAX;
uint8_t x420 = UINT8_MAX;
static uint8_t x423 = UINT8_MAX;
volatile int64_t t91 = -2161215597546LL;
volatile uint8_t x429 = UINT8_MAX;
uint16_t x432 = 34U;
int8_t x435 = -1;
int64_t t93 = 17115429299903LL;
uint32_t x443 = 490022U;
uint8_t x444 = UINT8_MAX;
uint64_t x446 = 3890940LLU;
int64_t x449 = -1LL;
static volatile uint16_t x451 = 3U;
uint16_t x457 = UINT16_MAX;
static int32_t x459 = INT32_MAX;
static volatile int8_t x461 = 2;
int32_t x463 = -316390;
int64_t x464 = -1LL;
volatile uint64_t t101 = 145909LLU;
int8_t x469 = -1;
uint64_t x472 = UINT64_MAX;
uint8_t x474 = UINT8_MAX;
uint32_t x476 = 11877U;
uint16_t x484 = UINT16_MAX;
volatile int8_t x488 = INT8_MIN;
static int64_t x507 = INT64_MIN;
volatile uint64_t t108 = 158768027325250LLU;
volatile int8_t x514 = 9;
volatile int32_t x516 = -1;
static int8_t x517 = INT8_MAX;
int8_t x526 = -2;
uint8_t x530 = 0U;
static volatile uint64_t x545 = 934467804039LLU;
uint32_t x555 = 105U;
volatile uint8_t x558 = 3U;
uint32_t x559 = UINT32_MAX;
static int32_t t120 = 3845;
volatile int8_t x573 = INT8_MAX;
uint32_t x582 = 7723U;
int32_t x590 = INT32_MAX;
static int8_t x595 = 26;
volatile int64_t x601 = -798617039456LL;
int32_t x604 = INT32_MIN;
volatile int64_t t131 = 89872573797LL;
static uint16_t x618 = 2039U;
int8_t x620 = -1;
int16_t x640 = 2296;
static int64_t x644 = INT64_MAX;
uint64_t t138 = 108197857LLU;
int16_t x645 = INT16_MAX;
int64_t x646 = -1LL;
volatile int64_t t139 = 110LL;
int32_t x650 = -1;
volatile int32_t x651 = INT32_MIN;
int32_t x653 = 988975462;
uint8_t x655 = UINT8_MAX;
static uint64_t t143 = 4059LLU;
int64_t x673 = -1LL;
uint16_t x674 = UINT16_MAX;
uint64_t t146 = 12141115LLU;
volatile uint32_t x681 = 680U;
static uint32_t x682 = UINT32_MAX;
static uint16_t x687 = UINT16_MAX;
uint16_t x691 = UINT16_MAX;
int64_t x692 = INT64_MAX;
static uint16_t x705 = 14U;
volatile uint32_t x709 = 396590U;
volatile uint8_t x720 = UINT8_MAX;
int16_t x730 = -6814;
int32_t x732 = INT32_MAX;
uint64_t x737 = 150124LLU;
int8_t x742 = INT8_MAX;
static int32_t x753 = INT32_MAX;
int8_t x754 = 26;
volatile int64_t t162 = 1792346199LL;
volatile uint64_t x761 = 4054360405478078LLU;
volatile uint64_t t163 = 4567LLU;
int64_t t168 = -20567LL;
uint16_t x799 = 0U;
volatile int32_t t171 = 340720;
int64_t x807 = -1LL;
int16_t x808 = INT16_MIN;
int32_t x815 = 2934;
volatile int16_t x825 = INT16_MIN;
int64_t x827 = INT64_MIN;
uint16_t x834 = 23028U;
int8_t x836 = INT8_MIN;
volatile int32_t t176 = -47;
int8_t x839 = INT8_MIN;
static volatile int16_t x844 = INT16_MIN;
int8_t x848 = INT8_MAX;
volatile uint32_t t179 = 0U;
volatile uint32_t x858 = 17089U;
volatile int32_t t183 = 3909;
static volatile int32_t t184 = -1;
int16_t x876 = INT16_MIN;
static int32_t t186 = -37365;
volatile uint64_t x878 = UINT64_MAX;
volatile uint64_t t187 = 1LLU;
static int32_t x891 = INT32_MIN;
int64_t x896 = 345LL;
int32_t x902 = INT32_MAX;
int16_t x904 = -1;
int8_t x911 = 1;
volatile int64_t x912 = INT64_MIN;
uint8_t x913 = UINT8_MAX;
int32_t x925 = INT32_MIN;
int64_t x927 = -1LL;
int8_t x935 = -1;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	int8_t x2 = INT8_MIN;
	int16_t x3 = INT16_MIN;
	int32_t x4 = -18710403;
	volatile uint64_t t0 = 6926764809599LLU;

    t0 = ((x1-x2)/(x3!=x4));

    if (t0 != 127LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = INT16_MIN;
	int8_t x6 = INT8_MIN;
	int8_t x8 = 1;
	static volatile int32_t t1 = -15;

    t1 = ((x5-x6)/(x7!=x8));

    if (t1 != -32640) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	uint32_t x10 = 4516U;
	int32_t x11 = INT32_MAX;
	volatile int8_t x12 = -5;
	volatile uint32_t t2 = 741U;

    t2 = ((x9-x10)/(x11!=x12));

    if (t2 != 61019U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MIN;
	uint32_t x14 = 12265U;
	uint32_t x15 = 107537U;
	static volatile uint32_t x16 = UINT32_MAX;
	volatile uint32_t t3 = 99416U;

    t3 = ((x13-x14)/(x15!=x16));

    if (t3 != 4294954903U) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 17080501;
	uint16_t x18 = 106U;
	static int8_t x19 = -1;
	uint16_t x20 = 0U;
	int32_t t4 = -1;

    t4 = ((x17-x18)/(x19!=x20));

    if (t4 != 17080395) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -3;
	static int8_t x22 = 3;
	int64_t x23 = INT64_MIN;
	volatile uint64_t x24 = 27347LLU;
	static int32_t t5 = 13033168;

    t5 = ((x21-x22)/(x23!=x24));

    if (t5 != -6) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x25 = -1;
	int64_t x26 = INT64_MAX;
	uint16_t x27 = 1U;
	static int64_t x28 = INT64_MIN;
	static volatile int64_t t6 = INT64_MIN;

    t6 = ((x25-x26)/(x27!=x28));

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = -1;
	volatile int8_t x31 = -1;
	int64_t x32 = 7212972609652290LL;
	int32_t t7 = 1697;

    t7 = ((x29-x30)/(x31!=x32));

    if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 2U;
	uint64_t x34 = UINT64_MAX;
	uint32_t x35 = 769706U;
	uint8_t x36 = 20U;
	uint64_t t8 = 1824LLU;

    t8 = ((x33-x34)/(x35!=x36));

    if (t8 != 3LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = 5;
	static int32_t x43 = INT32_MAX;
	static int64_t x44 = -11LL;
	volatile int32_t t9 = 122;

    t9 = ((x41-x42)/(x43!=x44));

    if (t9 != -5) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x46 = UINT64_MAX;
	volatile int32_t x47 = 29643129;
	int64_t x48 = -1LL;
	volatile uint64_t t10 = 1570459LLU;

    t10 = ((x45-x46)/(x47!=x48));

    if (t10 != 256LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = 1;
	static volatile uint64_t x50 = UINT64_MAX;
	static int64_t x51 = -4LL;
	uint64_t x52 = 5779LLU;
	uint64_t t11 = 2178583032773349084LLU;

    t11 = ((x49-x50)/(x51!=x52));

    if (t11 != 2LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x53 = INT16_MIN;
	volatile int16_t x54 = -1;
	int8_t x55 = 0;
	volatile int16_t x56 = INT16_MIN;
	int32_t t12 = 10059;

    t12 = ((x53-x54)/(x55!=x56));

    if (t12 != -32767) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = -1LL;
	int8_t x58 = -1;
	int32_t x60 = 85;
	int64_t t13 = 103LL;

    t13 = ((x57-x58)/(x59!=x60));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x62 = 5309LL;
	int8_t x64 = -5;
	volatile int64_t t14 = -13440664697LL;

    t14 = ((x61-x62)/(x63!=x64));

    if (t14 != -2147488957LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = INT32_MAX;
	uint16_t x66 = 9U;
	int32_t x68 = -4071904;
	static int32_t t15 = 897005;

    t15 = ((x65-x66)/(x67!=x68));

    if (t15 != 2147483638) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x70 = INT8_MAX;
	int8_t x71 = -6;
	int16_t x72 = INT16_MIN;
	volatile int32_t t16 = -37;

    t16 = ((x69-x70)/(x71!=x72));

    if (t16 != -126) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x73 = 5U;
	volatile int8_t x74 = -1;
	int8_t x75 = -3;
	int32_t t17 = 1;

    t17 = ((x73-x74)/(x75!=x76));

    if (t17 != 6) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x81 = UINT8_MAX;
	int8_t x82 = INT8_MIN;
	static volatile uint8_t x84 = UINT8_MAX;

    t18 = ((x81-x82)/(x83!=x84));

    if (t18 != 383) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x86 = -1865;
	static int8_t x87 = -1;
	volatile int64_t t19 = -61669LL;

    t19 = ((x85-x86)/(x87!=x88));

    if (t19 != -9223372036854773943LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x89 = -1;
	int16_t x90 = INT16_MAX;
	static int16_t x91 = INT16_MAX;
	int64_t x92 = -1LL;

    t20 = ((x89-x90)/(x91!=x92));

    if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint32_t x93 = 0U;
	int64_t x94 = 2112233LL;
	volatile uint32_t x95 = 28570U;
	volatile int64_t t21 = 1LL;

    t21 = ((x93-x94)/(x95!=x96));

    if (t21 != -2112233LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x98 = UINT64_MAX;
	uint64_t x99 = 18256305LLU;
	volatile int8_t x100 = INT8_MAX;

    t22 = ((x97-x98)/(x99!=x100));

    if (t22 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x105 = 8135658026LLU;
	static volatile uint8_t x106 = 54U;
	uint64_t t23 = 917490LLU;

    t23 = ((x105-x106)/(x107!=x108));

    if (t23 != 8135657972LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = -30739242;
	static volatile uint8_t x110 = 14U;
	static int8_t x111 = INT8_MIN;
	int32_t x112 = -1;
	volatile int32_t t24 = -32031;

    t24 = ((x109-x110)/(x111!=x112));

    if (t24 != -30739256) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x114 = -53;
	int32_t x115 = -1;
	int32_t x116 = INT32_MIN;
	volatile int32_t t25 = -552369;

    t25 = ((x113-x114)/(x115!=x116));

    if (t25 != -5448) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x117 = 57419764;
	int8_t x118 = INT8_MAX;
	static int32_t x120 = INT32_MIN;
	int32_t t26 = 8308054;

    t26 = ((x117-x118)/(x119!=x120));

    if (t26 != 57419637) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x121 = 15;
	int16_t x122 = INT16_MAX;
	static uint16_t x123 = UINT16_MAX;
	static volatile int64_t x124 = INT64_MIN;
	static int32_t t27 = -827037;

    t27 = ((x121-x122)/(x123!=x124));

    if (t27 != -32752) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = INT16_MIN;
	int64_t x128 = INT64_MIN;

    t28 = ((x125-x126)/(x127!=x128));

    if (t28 != -32640) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x130 = 90U;
	int8_t x131 = 0;
	static uint8_t x132 = 6U;
	volatile int32_t t29 = 23258351;

    t29 = ((x129-x130)/(x131!=x132));

    if (t29 != -218) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x133 = 0U;
	volatile int32_t x134 = -49422736;
	int8_t x135 = INT8_MIN;
	static uint8_t x136 = UINT8_MAX;

    t30 = ((x133-x134)/(x135!=x136));

    if (t30 != 49422736) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x141 = INT32_MIN;
	int8_t x143 = INT8_MIN;
	uint64_t x144 = UINT64_MAX;
	int32_t t31 = -206671;

    t31 = ((x141-x142)/(x143!=x144));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x146 = INT32_MIN;
	int8_t x148 = 1;
	volatile int32_t t32 = 99;

    t32 = ((x145-x146)/(x147!=x148));

    if (t32 != 2147483520) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x149 = 784U;

    t33 = ((x149-x150)/(x151!=x152));

    if (t33 != 785LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x157 = 1165116;
	static int32_t x158 = -1;
	int16_t x159 = -158;
	static uint32_t x160 = 58581998U;
	int32_t t34 = 23213878;

    t34 = ((x157-x158)/(x159!=x160));

    if (t34 != 1165117) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x162 = 5359LLU;
	volatile uint64_t x163 = UINT64_MAX;
	int8_t x164 = -19;
	uint64_t t35 = 1155641441LLU;

    t35 = ((x161-x162)/(x163!=x164));

    if (t35 != 18446744073709546256LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x170 = -1LL;
	volatile int64_t x171 = INT64_MAX;
	uint8_t x172 = 37U;
	int64_t t36 = -1LL;

    t36 = ((x169-x170)/(x171!=x172));

    if (t36 != 4LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x173 = UINT32_MAX;
	uint8_t x174 = 95U;
	int64_t x175 = INT64_MIN;
	uint32_t x176 = 0U;

    t37 = ((x173-x174)/(x175!=x176));

    if (t37 != 4294967200U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x178 = -2069LL;
	volatile int32_t x180 = -4027402;
	volatile uint64_t t38 = 218333168349LLU;

    t38 = ((x177-x178)/(x179!=x180));

    if (t38 != 2068LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x181 = -149;
	static int8_t x182 = 18;
	int64_t x183 = INT64_MIN;
	uint16_t x184 = UINT16_MAX;
	int32_t t39 = -15383;

    t39 = ((x181-x182)/(x183!=x184));

    if (t39 != -167) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x185 = UINT16_MAX;
	volatile int8_t x186 = 16;
	int8_t x187 = INT8_MAX;
	volatile int16_t x188 = -6951;
	int32_t t40 = 883268135;

    t40 = ((x185-x186)/(x187!=x188));

    if (t40 != 65519) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x193 = 12080U;
	volatile int8_t x194 = INT8_MIN;
	static uint16_t x196 = 17U;
	volatile int32_t t41 = 0;

    t41 = ((x193-x194)/(x195!=x196));

    if (t41 != 12208) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x197 = 2LLU;
	volatile uint32_t x199 = 48641310U;
	int32_t x200 = 224036;
	static volatile uint64_t t42 = 33683842430762194LLU;

    t42 = ((x197-x198)/(x199!=x200));

    if (t42 != 18446744069414584323LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x202 = INT8_MIN;
	int64_t x203 = INT64_MIN;
	int8_t x204 = INT8_MIN;
	int32_t t43 = 456;

    t43 = ((x201-x202)/(x203!=x204));

    if (t43 != 65663) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x205 = INT16_MIN;
	int32_t x206 = 4397577;
	int32_t t44 = 3746;

    t44 = ((x205-x206)/(x207!=x208));

    if (t44 != -4430345) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x209 = UINT32_MAX;
	volatile int16_t x210 = INT16_MAX;
	static int32_t x211 = -476302640;
	int8_t x212 = -1;

    t45 = ((x209-x210)/(x211!=x212));

    if (t45 != 4294934528U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x214 = 102U;
	int32_t x215 = INT32_MAX;
	volatile int16_t x216 = -2;
	volatile int64_t t46 = 29933766347115761LL;

    t46 = ((x213-x214)/(x215!=x216));

    if (t46 != 394651241LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x217 = 5U;
	uint64_t x218 = 246334356991LLU;
	uint32_t x219 = UINT32_MAX;
	uint16_t x220 = UINT16_MAX;
	static uint64_t t47 = 2823088637668LLU;

    t47 = ((x217-x218)/(x219!=x220));

    if (t47 != 18446743827375194630LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x221 = INT64_MIN;
	static int32_t x222 = INT32_MIN;
	int16_t x223 = INT16_MIN;
	int32_t x224 = -23352;
	volatile int64_t t48 = 42323815878546LL;

    t48 = ((x221-x222)/(x223!=x224));

    if (t48 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x225 = 2U;
	uint16_t x226 = 85U;
	static int64_t x227 = INT64_MIN;
	int16_t x228 = INT16_MIN;

    t49 = ((x225-x226)/(x227!=x228));

    if (t49 != 4294967213U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x229 = 755280U;
	int64_t x231 = INT64_MAX;
	int64_t t50 = -194765LL;

    t50 = ((x229-x230)/(x231!=x232));

    if (t50 != 18767230456504LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x233 = INT16_MAX;
	static int16_t x235 = -10983;
	uint64_t x236 = 39LLU;
	static volatile int64_t t51 = 445297511LL;

    t51 = ((x233-x234)/(x235!=x236));

    if (t51 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x245 = INT16_MAX;
	uint16_t x246 = 11206U;
	int16_t x247 = -1;
	uint8_t x248 = UINT8_MAX;

    t52 = ((x245-x246)/(x247!=x248));

    if (t52 != 21561) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x249 = 10LL;
	uint8_t x250 = UINT8_MAX;
	uint64_t x251 = 107951401143985LLU;
	int64_t x252 = INT64_MIN;
	static int64_t t53 = 308386174150796LL;

    t53 = ((x249-x250)/(x251!=x252));

    if (t53 != -245LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x253 = UINT64_MAX;
	static int64_t x254 = -1LL;
	int32_t x255 = 11;
	volatile uint8_t x256 = UINT8_MAX;
	volatile uint64_t t54 = 6874934LLU;

    t54 = ((x253-x254)/(x255!=x256));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x257 = -2887;
	int64_t x258 = INT64_MIN;
	int16_t x259 = -1;
	volatile int64_t t55 = -219704690624LL;

    t55 = ((x257-x258)/(x259!=x260));

    if (t55 != 9223372036854772921LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x263 = 1;
	int32_t x264 = INT32_MIN;

    t56 = ((x261-x262)/(x263!=x264));

    if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x265 = UINT8_MAX;
	static int32_t x266 = -189;
	volatile int32_t x268 = INT32_MIN;
	volatile int32_t t57 = -1720999;

    t57 = ((x265-x266)/(x267!=x268));

    if (t57 != 444) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x269 = -1;
	uint8_t x270 = UINT8_MAX;
	static int64_t x271 = -1LL;
	volatile int32_t t58 = 11645270;

    t58 = ((x269-x270)/(x271!=x272));

    if (t58 != -256) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x273 = INT8_MIN;
	int16_t x274 = INT16_MAX;
	int32_t t59 = 0;

    t59 = ((x273-x274)/(x275!=x276));

    if (t59 != -32895) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x277 = 166U;
	uint64_t x278 = 15292LLU;
	int8_t x279 = INT8_MIN;
	static int64_t x280 = -1LL;
	uint64_t t60 = 11LLU;

    t60 = ((x277-x278)/(x279!=x280));

    if (t60 != 18446744073709536490LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x286 = INT64_MIN;
	uint64_t x288 = UINT64_MAX;
	static int64_t t61 = -47798061456205LL;

    t61 = ((x285-x286)/(x287!=x288));

    if (t61 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x289 = INT8_MAX;
	uint16_t x290 = 0U;
	static int64_t x291 = INT64_MIN;
	static volatile int8_t x292 = INT8_MIN;
	int32_t t62 = 25;

    t62 = ((x289-x290)/(x291!=x292));

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x293 = 14095U;
	int64_t t63 = -1041060058313LL;

    t63 = ((x293-x294)/(x295!=x296));

    if (t63 != -15648LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x297 = -1;
	int8_t x298 = -3;
	uint8_t x299 = 1U;
	int16_t x300 = INT16_MIN;
	int32_t t64 = 1;

    t64 = ((x297-x298)/(x299!=x300));

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x301 = INT8_MIN;
	volatile int32_t x302 = INT32_MIN;
	int64_t x303 = -122958645999LL;
	volatile int32_t t65 = -128058;

    t65 = ((x301-x302)/(x303!=x304));

    if (t65 != 2147483520) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x305 = INT8_MIN;
	int8_t x306 = -1;
	static uint32_t x308 = 1183U;
	static volatile int32_t t66 = -3804226;

    t66 = ((x305-x306)/(x307!=x308));

    if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x309 = 42254LLU;
	static int64_t x310 = INT64_MIN;
	static volatile int64_t x311 = 936220496989LL;
	int8_t x312 = INT8_MIN;
	volatile uint64_t t67 = 159922316066096958LLU;

    t67 = ((x309-x310)/(x311!=x312));

    if (t67 != 9223372036854818062LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x317 = UINT16_MAX;
	int8_t x318 = 6;
	int8_t x319 = INT8_MIN;
	static volatile int32_t t68 = -1;

    t68 = ((x317-x318)/(x319!=x320));

    if (t68 != 65529) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x322 = 5U;
	uint16_t x323 = UINT16_MAX;
	int64_t x324 = -1LL;
	static uint32_t t69 = 5961264U;

    t69 = ((x321-x322)/(x323!=x324));

    if (t69 != 2147483643U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x327 = 4827U;
	uint64_t x328 = UINT64_MAX;
	volatile int64_t t70 = -31LL;

    t70 = ((x325-x326)/(x327!=x328));

    if (t70 != 128LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x333 = -3;
	int32_t x334 = 492;
	static int32_t x336 = INT32_MIN;
	volatile int32_t t71 = -279986;

    t71 = ((x333-x334)/(x335!=x336));

    if (t71 != -495) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x337 = UINT16_MAX;
	int32_t x339 = -216;
	int16_t x340 = -19;
	static volatile int32_t t72 = -44;

    t72 = ((x337-x338)/(x339!=x340));

    if (t72 != 65663) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x349 = 1452036589477339887LLU;
	int32_t x350 = INT32_MIN;
	static volatile uint32_t x351 = UINT32_MAX;
	volatile int32_t x352 = INT32_MIN;

    t73 = ((x349-x350)/(x351!=x352));

    if (t73 != 1452036591624823535LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x353 = -2;
	uint64_t x355 = UINT64_MAX;
	static int32_t x356 = INT32_MIN;

    t74 = ((x353-x354)/(x355!=x356));

    if (t74 != -129) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x358 = UINT64_MAX;
	int32_t x359 = INT32_MIN;
	uint32_t x360 = 257343U;
	volatile uint64_t t75 = 322053704LLU;

    t75 = ((x357-x358)/(x359!=x360));

    if (t75 != 47LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x361 = 56064271LLU;
	volatile int64_t x363 = INT64_MIN;
	uint8_t x364 = 3U;
	uint64_t t76 = 458429135531008995LLU;

    t76 = ((x361-x362)/(x363!=x364));

    if (t76 != 9223372036910840080LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x365 = 289U;
	static uint16_t x366 = 39U;
	volatile int8_t x367 = 8;
	static int16_t x368 = -57;
	volatile int32_t t77 = 13;

    t77 = ((x365-x366)/(x367!=x368));

    if (t77 != 250) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x370 = 26910;
	int8_t x371 = INT8_MAX;
	volatile int32_t t78 = -4095873;

    t78 = ((x369-x370)/(x371!=x372));

    if (t78 != -26911) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x373 = INT16_MIN;
	int32_t x374 = 10893322;
	uint16_t x375 = UINT16_MAX;
	uint32_t x376 = 42U;
	int32_t t79 = 2593526;

    t79 = ((x373-x374)/(x375!=x376));

    if (t79 != -10926090) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x377 = INT16_MIN;
	volatile int8_t x379 = 60;
	int32_t x380 = INT32_MIN;
	static int32_t t80 = 1862;

    t80 = ((x377-x378)/(x379!=x380));

    if (t80 != -32640) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x381 = UINT64_MAX;
	int16_t x382 = INT16_MAX;
	volatile int8_t x383 = INT8_MIN;
	int64_t x384 = INT64_MIN;
	static uint64_t t81 = 149666LLU;

    t81 = ((x381-x382)/(x383!=x384));

    if (t81 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x385 = -1;
	int64_t x386 = 853731714124195432LL;
	int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MIN;
	static volatile int64_t t82 = 51872247LL;

    t82 = ((x385-x386)/(x387!=x388));

    if (t82 != -853731714124195433LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x389 = 2937466288LLU;
	volatile int8_t x390 = -1;
	static int8_t x391 = INT8_MAX;
	uint8_t x392 = 8U;

    t83 = ((x389-x390)/(x391!=x392));

    if (t83 != 2937466289LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x393 = INT64_MIN;
	uint32_t x396 = 1041587U;

    t84 = ((x393-x394)/(x395!=x396));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x397 = 273035803;
	volatile int16_t x398 = INT16_MIN;
	int16_t x399 = -743;
	static int64_t x400 = INT64_MAX;
	volatile int32_t t85 = -584041;

    t85 = ((x397-x398)/(x399!=x400));

    if (t85 != 273068571) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x401 = INT16_MAX;
	uint8_t x402 = 99U;
	int8_t x403 = INT8_MIN;
	static volatile int16_t x404 = INT16_MAX;
	volatile int32_t t86 = -9912;

    t86 = ((x401-x402)/(x403!=x404));

    if (t86 != 32668) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x406 = 0;
	static uint32_t x407 = UINT32_MAX;
	int32_t x408 = INT32_MAX;
	int32_t t87 = -965087;

    t87 = ((x405-x406)/(x407!=x408));

    if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x409 = INT16_MIN;
	uint64_t x410 = UINT64_MAX;
	int32_t x412 = 149302;
	uint64_t t88 = 2477121764291032084LLU;

    t88 = ((x409-x410)/(x411!=x412));

    if (t88 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x413 = 3LL;
	uint16_t x414 = UINT16_MAX;
	int8_t x415 = -17;
	int16_t x416 = INT16_MAX;
	static volatile int64_t t89 = -1656LL;

    t89 = ((x413-x414)/(x415!=x416));

    if (t89 != -65532LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x417 = INT32_MIN;
	int32_t x418 = -8526;
	int32_t x419 = -1;
	static int32_t t90 = 973886030;

    t90 = ((x417-x418)/(x419!=x420));

    if (t90 != -2147475122) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x421 = INT64_MAX;
	static int8_t x422 = 38;
	int32_t x424 = -6;

    t91 = ((x421-x422)/(x423!=x424));

    if (t91 != 9223372036854775769LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x430 = INT16_MIN;
	int8_t x431 = INT8_MIN;
	volatile int32_t t92 = 9671;

    t92 = ((x429-x430)/(x431!=x432));

    if (t92 != 33023) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x433 = 0;
	int64_t x434 = -1LL;
	volatile uint16_t x436 = 31U;

    t93 = ((x433-x434)/(x435!=x436));

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x437 = UINT8_MAX;
	uint64_t x438 = UINT64_MAX;
	int16_t x439 = 33;
	static volatile int32_t x440 = 3;
	uint64_t t94 = 8443313LLU;

    t94 = ((x437-x438)/(x439!=x440));

    if (t94 != 256LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x441 = 275U;
	volatile uint32_t x442 = 20433U;
	volatile uint32_t t95 = 189958U;

    t95 = ((x441-x442)/(x443!=x444));

    if (t95 != 4294947138U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x445 = INT32_MIN;
	uint8_t x447 = UINT8_MAX;
	static uint8_t x448 = 78U;
	uint64_t t96 = 2078778101LLU;

    t96 = ((x445-x446)/(x447!=x448));

    if (t96 != 18446744071558177028LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x450 = 18892905U;
	uint16_t x452 = 738U;
	int64_t t97 = -866153LL;

    t97 = ((x449-x450)/(x451!=x452));

    if (t97 != -18892906LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x453 = 63U;
	int8_t x454 = 1;
	static int32_t x455 = INT32_MIN;
	static int8_t x456 = INT8_MIN;
	int32_t t98 = -310;

    t98 = ((x453-x454)/(x455!=x456));

    if (t98 != 62) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x458 = UINT8_MAX;
	int16_t x460 = INT16_MIN;
	volatile int32_t t99 = 84435;

    t99 = ((x457-x458)/(x459!=x460));

    if (t99 != 65280) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x462 = UINT16_MAX;
	int32_t t100 = -12;

    t100 = ((x461-x462)/(x463!=x464));

    if (t100 != -65533) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x465 = UINT64_MAX;
	uint32_t x466 = 2649U;
	uint32_t x467 = 5061U;
	int64_t x468 = INT64_MAX;

    t101 = ((x465-x466)/(x467!=x468));

    if (t101 != 18446744073709548966LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x470 = -1LL;
	volatile int32_t x471 = 341;
	int64_t t102 = -224284LL;

    t102 = ((x469-x470)/(x471!=x472));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x473 = INT8_MAX;
	uint8_t x475 = UINT8_MAX;
	static int32_t t103 = -6819654;

    t103 = ((x473-x474)/(x475!=x476));

    if (t103 != -128) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x477 = 119U;
	static volatile uint8_t x478 = UINT8_MAX;
	uint32_t x479 = 522874U;
	uint16_t x480 = UINT16_MAX;
	volatile int32_t t104 = -15319602;

    t104 = ((x477-x478)/(x479!=x480));

    if (t104 != -136) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x481 = 1U;
	static volatile int16_t x482 = INT16_MIN;
	int16_t x483 = INT16_MIN;
	int32_t t105 = 124462271;

    t105 = ((x481-x482)/(x483!=x484));

    if (t105 != 32769) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x485 = -1;
	int32_t x486 = INT32_MAX;
	int16_t x487 = 254;
	int32_t t106 = INT32_MIN;

    t106 = ((x485-x486)/(x487!=x488));

    if (t106 != INT32_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x501 = 30LL;
	int64_t x502 = -1LL;
	int64_t x503 = INT64_MIN;
	static uint16_t x504 = 187U;
	int64_t t107 = -22111108LL;

    t107 = ((x501-x502)/(x503!=x504));

    if (t107 != 31LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x505 = UINT8_MAX;
	static uint64_t x506 = UINT64_MAX;
	static volatile int16_t x508 = 89;

    t108 = ((x505-x506)/(x507!=x508));

    if (t108 != 256LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x509 = INT64_MIN;
	uint8_t x510 = 0U;
	uint8_t x511 = 14U;
	volatile uint8_t x512 = UINT8_MAX;
	volatile int64_t t109 = INT64_MIN;

    t109 = ((x509-x510)/(x511!=x512));

    if (t109 != INT64_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x513 = 100;
	volatile int64_t x515 = -3515825LL;
	int32_t t110 = -120;

    t110 = ((x513-x514)/(x515!=x516));

    if (t110 != 91) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x518 = 6289710229333739LLU;
	int32_t x519 = INT32_MIN;
	uint8_t x520 = UINT8_MAX;
	volatile uint64_t t111 = 3LLU;

    t111 = ((x517-x518)/(x519!=x520));

    if (t111 != 18440454363480218004LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x521 = 3U;
	uint8_t x522 = 0U;
	uint8_t x523 = 6U;
	int64_t x524 = INT64_MIN;
	static volatile int32_t t112 = 7;

    t112 = ((x521-x522)/(x523!=x524));

    if (t112 != 3) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x525 = 35720391033194250LLU;
	static uint8_t x527 = 2U;
	int16_t x528 = -20;
	uint64_t t113 = 181988589118438LLU;

    t113 = ((x525-x526)/(x527!=x528));

    if (t113 != 35720391033194252LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x529 = UINT64_MAX;
	int8_t x531 = INT8_MAX;
	int32_t x532 = INT32_MAX;
	volatile uint64_t t114 = UINT64_MAX;

    t114 = ((x529-x530)/(x531!=x532));

    if (t114 != UINT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x533 = -1;
	int64_t x534 = -132771029LL;
	int16_t x535 = 113;
	int64_t x536 = 97000139008413504LL;
	static int64_t t115 = -15820LL;

    t115 = ((x533-x534)/(x535!=x536));

    if (t115 != 132771028LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x541 = 8U;
	int8_t x542 = INT8_MAX;
	int16_t x543 = INT16_MIN;
	uint64_t x544 = UINT64_MAX;
	int32_t t116 = 3;

    t116 = ((x541-x542)/(x543!=x544));

    if (t116 != -119) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x546 = -5;
	int16_t x547 = 31;
	int16_t x548 = 1;
	volatile uint64_t t117 = 14873516984642LLU;

    t117 = ((x545-x546)/(x547!=x548));

    if (t117 != 934467804044LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x553 = -1LL;
	int16_t x554 = -1;
	static int16_t x556 = INT16_MIN;
	volatile int64_t t118 = -145251542179LL;

    t118 = ((x553-x554)/(x555!=x556));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x557 = 0U;
	int64_t x560 = -58702378722093103LL;
	static int32_t t119 = 1;

    t119 = ((x557-x558)/(x559!=x560));

    if (t119 != -3) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x561 = INT8_MAX;
	uint8_t x562 = UINT8_MAX;
	volatile uint8_t x563 = UINT8_MAX;
	static uint16_t x564 = 7174U;

    t120 = ((x561-x562)/(x563!=x564));

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x565 = 1U;
	volatile int64_t x566 = -1LL;
	static volatile int64_t x567 = INT64_MIN;
	int32_t x568 = 21247;
	volatile int64_t t121 = 0LL;

    t121 = ((x565-x566)/(x567!=x568));

    if (t121 != 2LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x569 = 25830303LL;
	uint16_t x570 = 463U;
	volatile int8_t x571 = 2;
	static uint32_t x572 = 29488U;
	volatile int64_t t122 = 4244657811274LL;

    t122 = ((x569-x570)/(x571!=x572));

    if (t122 != 25829840LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x574 = 239LL;
	uint16_t x575 = 17440U;
	int8_t x576 = INT8_MIN;
	int64_t t123 = 12152LL;

    t123 = ((x573-x574)/(x575!=x576));

    if (t123 != -112LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x577 = 44U;
	volatile int64_t x578 = INT64_MAX;
	uint8_t x579 = 3U;
	static uint8_t x580 = 108U;
	volatile int64_t t124 = -3426377488LL;

    t124 = ((x577-x578)/(x579!=x580));

    if (t124 != -9223372036854775763LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint16_t x581 = 0U;
	int16_t x583 = INT16_MIN;
	int32_t x584 = INT32_MIN;
	static uint32_t t125 = 515723U;

    t125 = ((x581-x582)/(x583!=x584));

    if (t125 != 4294959573U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x585 = UINT16_MAX;
	int64_t x586 = 352111345800LL;
	volatile int32_t x587 = INT32_MIN;
	static uint64_t x588 = 713922292778126945LLU;
	int64_t t126 = -5755956LL;

    t126 = ((x585-x586)/(x587!=x588));

    if (t126 != -352111280265LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x589 = 7702;
	uint8_t x591 = UINT8_MAX;
	int32_t x592 = -242;
	int32_t t127 = 33622;

    t127 = ((x589-x590)/(x591!=x592));

    if (t127 != -2147475945) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x593 = UINT32_MAX;
	int32_t x594 = INT32_MIN;
	static volatile uint8_t x596 = UINT8_MAX;
	uint32_t t128 = 4799U;

    t128 = ((x593-x594)/(x595!=x596));

    if (t128 != 2147483647U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x597 = UINT32_MAX;
	int8_t x598 = INT8_MIN;
	uint64_t x599 = 1105263800692004LLU;
	volatile uint16_t x600 = 294U;
	static uint32_t t129 = 260916986U;

    t129 = ((x597-x598)/(x599!=x600));

    if (t129 != 127U) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x602 = UINT64_MAX;
	int64_t x603 = 213LL;
	volatile uint64_t t130 = 22872603892660936LLU;

    t130 = ((x601-x602)/(x603!=x604));

    if (t130 != 18446743275092512161LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x605 = INT64_MAX;
	static int16_t x606 = INT16_MAX;
	uint32_t x607 = 2U;
	int64_t x608 = -131478660715LL;

    t131 = ((x605-x606)/(x607!=x608));

    if (t131 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x617 = 15348LLU;
	int32_t x619 = -1301478;
	volatile uint64_t t132 = 16168011737LLU;

    t132 = ((x617-x618)/(x619!=x620));

    if (t132 != 13309LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x621 = UINT16_MAX;
	uint16_t x622 = 126U;
	static int32_t x623 = INT32_MIN;
	int32_t x624 = -1;
	volatile int32_t t133 = 2505406;

    t133 = ((x621-x622)/(x623!=x624));

    if (t133 != 65409) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x625 = -1;
	static int64_t x626 = -1LL;
	volatile uint32_t x627 = UINT32_MAX;
	uint64_t x628 = 9571519515LLU;
	static volatile int64_t t134 = 52588LL;

    t134 = ((x625-x626)/(x627!=x628));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x629 = 112053347U;
	int32_t x630 = 31758188;
	int32_t x631 = 1;
	int16_t x632 = -19;
	uint32_t t135 = 13U;

    t135 = ((x629-x630)/(x631!=x632));

    if (t135 != 80295159U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x633 = INT64_MAX;
	uint16_t x634 = UINT16_MAX;
	int64_t x635 = INT64_MIN;
	volatile int16_t x636 = INT16_MAX;
	static volatile int64_t t136 = 19137LL;

    t136 = ((x633-x634)/(x635!=x636));

    if (t136 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x637 = -9;
	volatile uint8_t x638 = UINT8_MAX;
	static int16_t x639 = INT16_MIN;
	volatile int32_t t137 = -595;

    t137 = ((x637-x638)/(x639!=x640));

    if (t137 != -264) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x641 = INT8_MIN;
	uint64_t x642 = UINT64_MAX;
	volatile uint64_t x643 = UINT64_MAX;

    t138 = ((x641-x642)/(x643!=x644));

    if (t138 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x647 = -1LL;
	volatile uint16_t x648 = 28U;

    t139 = ((x645-x646)/(x647!=x648));

    if (t139 != 32768LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x649 = 1826114U;
	int32_t x652 = 16117;
	volatile uint32_t t140 = 7290096U;

    t140 = ((x649-x650)/(x651!=x652));

    if (t140 != 1826115U) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x654 = 7350971LL;
	static int8_t x656 = INT8_MIN;
	volatile int64_t t141 = -2LL;

    t141 = ((x653-x654)/(x655!=x656));

    if (t141 != 981624491LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x661 = 2;
	int16_t x662 = -1;
	volatile uint32_t x663 = 4U;
	static volatile uint32_t x664 = UINT32_MAX;
	int32_t t142 = 24;

    t142 = ((x661-x662)/(x663!=x664));

    if (t142 != 3) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x665 = UINT64_MAX;
	int64_t x666 = -1LL;
	static int16_t x667 = INT16_MIN;
	int32_t x668 = INT32_MAX;

    t143 = ((x665-x666)/(x667!=x668));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x669 = 281U;
	int64_t x670 = INT64_MAX;
	static int8_t x671 = -1;
	volatile int16_t x672 = INT16_MIN;
	volatile int64_t t144 = -132015109928LL;

    t144 = ((x669-x670)/(x671!=x672));

    if (t144 != -9223372036854775526LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x675 = INT16_MAX;
	int16_t x676 = -1;
	int64_t t145 = 197080788541LL;

    t145 = ((x673-x674)/(x675!=x676));

    if (t145 != -65536LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x677 = 130U;
	uint64_t x678 = UINT64_MAX;
	int8_t x679 = INT8_MIN;
	static volatile int64_t x680 = -1LL;

    t146 = ((x677-x678)/(x679!=x680));

    if (t146 != 131LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x683 = 472070136U;
	int8_t x684 = INT8_MAX;
	uint32_t t147 = 398504U;

    t147 = ((x681-x682)/(x683!=x684));

    if (t147 != 681U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x685 = 7;
	int32_t x686 = INT32_MAX;
	int8_t x688 = INT8_MIN;
	int32_t t148 = 10915980;

    t148 = ((x685-x686)/(x687!=x688));

    if (t148 != -2147483640) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x689 = 6880U;
	volatile int8_t x690 = INT8_MIN;
	uint32_t t149 = 20U;

    t149 = ((x689-x690)/(x691!=x692));

    if (t149 != 7008U) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x693 = UINT32_MAX;
	uint32_t x694 = UINT32_MAX;
	int32_t x695 = -83;
	int64_t x696 = INT64_MIN;
	volatile uint32_t t150 = 45192980U;

    t150 = ((x693-x694)/(x695!=x696));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x697 = INT8_MAX;
	int16_t x698 = INT16_MIN;
	volatile uint32_t x699 = 9U;
	uint8_t x700 = 7U;
	int32_t t151 = 1;

    t151 = ((x697-x698)/(x699!=x700));

    if (t151 != 32895) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x701 = 17U;
	int32_t x702 = INT32_MAX;
	static volatile uint16_t x703 = 15448U;
	static int32_t x704 = 28486;
	uint32_t t152 = 16053U;

    t152 = ((x701-x702)/(x703!=x704));

    if (t152 != 2147483666U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x706 = 36U;
	static volatile int64_t x707 = -28456778421321LL;
	static int16_t x708 = -26;
	int32_t t153 = 44;

    t153 = ((x705-x706)/(x707!=x708));

    if (t153 != -22) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x710 = -19;
	volatile int32_t x711 = INT32_MIN;
	uint8_t x712 = UINT8_MAX;
	uint32_t t154 = 6607U;

    t154 = ((x709-x710)/(x711!=x712));

    if (t154 != 396609U) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x717 = INT16_MIN;
	volatile uint16_t x718 = 451U;
	uint16_t x719 = 475U;
	int32_t t155 = 1;

    t155 = ((x717-x718)/(x719!=x720));

    if (t155 != -33219) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x725 = 5850;
	volatile int32_t x726 = INT32_MAX;
	int8_t x727 = 12;
	int32_t x728 = 27;
	volatile int32_t t156 = -362888860;

    t156 = ((x725-x726)/(x727!=x728));

    if (t156 != -2147477797) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x729 = -1LL;
	int64_t x731 = -1LL;
	static int64_t t157 = -27110464LL;

    t157 = ((x729-x730)/(x731!=x732));

    if (t157 != 6813LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x733 = 51U;
	int16_t x734 = -1;
	static volatile int32_t x735 = INT32_MIN;
	int64_t x736 = -5067844400606640LL;
	int32_t t158 = -788;

    t158 = ((x733-x734)/(x735!=x736));

    if (t158 != 52) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x738 = -111232;
	uint32_t x739 = 1059037349U;
	static int8_t x740 = INT8_MIN;
	static uint64_t t159 = 222731327309LLU;

    t159 = ((x737-x738)/(x739!=x740));

    if (t159 != 261356LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x741 = UINT64_MAX;
	volatile uint8_t x743 = 11U;
	volatile uint32_t x744 = 7528036U;
	volatile uint64_t t160 = 67072202LLU;

    t160 = ((x741-x742)/(x743!=x744));

    if (t160 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x755 = 712160U;
	uint32_t x756 = UINT32_MAX;
	volatile int32_t t161 = 6903;

    t161 = ((x753-x754)/(x755!=x756));

    if (t161 != 2147483621) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x757 = 19U;
	static int64_t x758 = INT64_MAX;
	uint8_t x759 = 96U;
	volatile int64_t x760 = 142097943LL;

    t162 = ((x757-x758)/(x759!=x760));

    if (t162 != -9223372036854775788LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x762 = 441132122653757LLU;
	int16_t x763 = INT16_MIN;
	uint64_t x764 = UINT64_MAX;

    t163 = ((x761-x762)/(x763!=x764));

    if (t163 != 3613228282824321LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x765 = -1;
	static volatile int64_t x766 = 441LL;
	int64_t x767 = INT64_MIN;
	volatile int32_t x768 = -1;
	volatile int64_t t164 = 993584LL;

    t164 = ((x765-x766)/(x767!=x768));

    if (t164 != -442LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x769 = INT16_MAX;
	static volatile uint8_t x770 = UINT8_MAX;
	int64_t x771 = INT64_MIN;
	static int16_t x772 = -2;
	volatile int32_t t165 = 1380406;

    t165 = ((x769-x770)/(x771!=x772));

    if (t165 != 32512) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x777 = UINT32_MAX;
	uint32_t x778 = 0U;
	uint32_t x779 = UINT32_MAX;
	uint32_t x780 = 7472229U;
	uint32_t t166 = UINT32_MAX;

    t166 = ((x777-x778)/(x779!=x780));

    if (t166 != UINT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x785 = INT16_MIN;
	int64_t x786 = INT64_MIN;
	uint64_t x787 = UINT64_MAX;
	uint16_t x788 = UINT16_MAX;
	int64_t t167 = 11741734605209LL;

    t167 = ((x785-x786)/(x787!=x788));

    if (t167 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x789 = 371045590470243LL;
	static uint32_t x790 = 200013434U;
	volatile int8_t x791 = -1;
	int64_t x792 = INT64_MAX;

    t168 = ((x789-x790)/(x791!=x792));

    if (t168 != 371045390456809LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x793 = INT8_MIN;
	uint64_t x794 = 582LLU;
	int32_t x795 = INT32_MIN;
	int64_t x796 = INT64_MIN;
	static uint64_t t169 = 23857098LLU;

    t169 = ((x793-x794)/(x795!=x796));

    if (t169 != 18446744073709550906LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x797 = -16766938841LL;
	int8_t x798 = 27;
	int64_t x800 = 19LL;
	volatile int64_t t170 = -1978090047350LL;

    t170 = ((x797-x798)/(x799!=x800));

    if (t170 != -16766938868LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x801 = 3932U;
	static int32_t x802 = INT32_MAX;
	int64_t x803 = -1LL;
	uint16_t x804 = UINT16_MAX;

    t171 = ((x801-x802)/(x803!=x804));

    if (t171 != -2147479715) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x805 = INT8_MIN;
	volatile int8_t x806 = -2;
	volatile int32_t t172 = 7;

    t172 = ((x805-x806)/(x807!=x808));

    if (t172 != -126) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x813 = 0U;
	uint16_t x814 = UINT16_MAX;
	int8_t x816 = -1;
	int32_t t173 = 842;

    t173 = ((x813-x814)/(x815!=x816));

    if (t173 != -65535) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x817 = 8023U;
	volatile int32_t x818 = -1;
	int8_t x819 = -1;
	static int64_t x820 = INT64_MIN;
	int32_t t174 = -1099322;

    t174 = ((x817-x818)/(x819!=x820));

    if (t174 != 8024) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x826 = 2961947LLU;
	volatile int8_t x828 = INT8_MAX;
	uint64_t t175 = 131721881272736886LLU;

    t175 = ((x825-x826)/(x827!=x828));

    if (t175 != 18446744073706556901LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x833 = INT16_MAX;
	int64_t x835 = -42LL;

    t176 = ((x833-x834)/(x835!=x836));

    if (t176 != 9739) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x837 = INT16_MIN;
	volatile uint32_t x838 = 1547248411U;
	int64_t x840 = -34228668LL;
	static uint32_t t177 = 19053619U;

    t177 = ((x837-x838)/(x839!=x840));

    if (t177 != 2747686117U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x841 = INT64_MAX;
	volatile int16_t x842 = INT16_MAX;
	static uint8_t x843 = UINT8_MAX;
	static volatile int64_t t178 = -610717LL;

    t178 = ((x841-x842)/(x843!=x844));

    if (t178 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x845 = 0;
	static uint32_t x846 = 75390U;
	int32_t x847 = INT32_MIN;

    t179 = ((x845-x846)/(x847!=x848));

    if (t179 != 4294891906U) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x849 = INT16_MIN;
	int16_t x850 = 23;
	uint8_t x851 = 12U;
	uint32_t x852 = 716896885U;
	int32_t t180 = 0;

    t180 = ((x849-x850)/(x851!=x852));

    if (t180 != -32791) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x853 = INT8_MIN;
	volatile uint8_t x854 = UINT8_MAX;
	int8_t x855 = 62;
	uint16_t x856 = 319U;
	int32_t t181 = 851182;

    t181 = ((x853-x854)/(x855!=x856));

    if (t181 != -383) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x857 = 27486U;
	int8_t x859 = INT8_MIN;
	int64_t x860 = -40352274168023LL;
	uint32_t t182 = 47519U;

    t182 = ((x857-x858)/(x859!=x860));

    if (t182 != 10397U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x861 = -92821;
	int16_t x862 = INT16_MAX;
	int8_t x863 = -1;
	uint8_t x864 = 26U;

    t183 = ((x861-x862)/(x863!=x864));

    if (t183 != -125588) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x865 = -1;
	static int8_t x866 = INT8_MIN;
	int16_t x867 = 310;
	int8_t x868 = INT8_MIN;

    t184 = ((x865-x866)/(x867!=x868));

    if (t184 != 127) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x869 = -1;
	int64_t x870 = 1331671432792813LL;
	int8_t x871 = 18;
	int16_t x872 = -1;
	volatile int64_t t185 = -36369360098LL;

    t185 = ((x869-x870)/(x871!=x872));

    if (t185 != -1331671432792814LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x873 = INT16_MAX;
	int8_t x874 = INT8_MIN;
	uint64_t x875 = 432824958LLU;

    t186 = ((x873-x874)/(x875!=x876));

    if (t186 != 32895) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x877 = INT64_MIN;
	static uint16_t x879 = 2U;
	uint8_t x880 = 25U;

    t187 = ((x877-x878)/(x879!=x880));

    if (t187 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x885 = INT8_MIN;
	volatile int32_t x886 = INT32_MIN;
	uint8_t x887 = 0U;
	int64_t x888 = INT64_MIN;
	static int32_t t188 = -23459;

    t188 = ((x885-x886)/(x887!=x888));

    if (t188 != 2147483520) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x889 = INT16_MIN;
	int16_t x890 = 28;
	volatile int16_t x892 = INT16_MIN;
	int32_t t189 = 291610435;

    t189 = ((x889-x890)/(x891!=x892));

    if (t189 != -32796) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x893 = -1;
	uint8_t x894 = UINT8_MAX;
	volatile int8_t x895 = INT8_MAX;
	int32_t t190 = 108246584;

    t190 = ((x893-x894)/(x895!=x896));

    if (t190 != -256) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x901 = UINT16_MAX;
	int32_t x903 = 38296;
	static volatile int32_t t191 = 109;

    t191 = ((x901-x902)/(x903!=x904));

    if (t191 != -2147418112) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x905 = INT64_MAX;
	static uint32_t x906 = UINT32_MAX;
	int16_t x907 = INT16_MIN;
	static int64_t x908 = INT64_MAX;
	volatile int64_t t192 = -3668249LL;

    t192 = ((x905-x906)/(x907!=x908));

    if (t192 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x909 = 95219325;
	int8_t x910 = -1;
	volatile int32_t t193 = -365;

    t193 = ((x909-x910)/(x911!=x912));

    if (t193 != 95219326) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x914 = 76858417U;
	static uint16_t x915 = 5U;
	volatile int32_t x916 = INT32_MIN;
	uint32_t t194 = 1097U;

    t194 = ((x913-x914)/(x915!=x916));

    if (t194 != 4218109134U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x917 = 12266U;
	int64_t x918 = INT64_MAX;
	static int8_t x919 = INT8_MAX;
	int32_t x920 = 1;
	int64_t t195 = 31LL;

    t195 = ((x917-x918)/(x919!=x920));

    if (t195 != -9223372036854763541LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x921 = INT8_MAX;
	volatile uint64_t x922 = 5732LLU;
	static volatile uint16_t x923 = 1U;
	int8_t x924 = 0;
	volatile uint64_t t196 = 7565205122767LLU;

    t196 = ((x921-x922)/(x923!=x924));

    if (t196 != 18446744073709546011LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x926 = 97932539826741LLU;
	int16_t x928 = INT16_MAX;
	volatile uint64_t t197 = 11624501408LLU;

    t197 = ((x925-x926)/(x927!=x928));

    if (t197 != 18446646139022241227LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x929 = UINT32_MAX;
	uint32_t x930 = 63155U;
	uint8_t x931 = 3U;
	int8_t x932 = INT8_MIN;
	volatile uint32_t t198 = 15638U;

    t198 = ((x929-x930)/(x931!=x932));

    if (t198 != 4294904140U) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x933 = 21U;
	int16_t x934 = INT16_MIN;
	static uint32_t x936 = 506898907U;
	int32_t t199 = -5096315;

    t199 = ((x933-x934)/(x935!=x936));

    if (t199 != 32789) { NG(); } else { ; }
	
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

