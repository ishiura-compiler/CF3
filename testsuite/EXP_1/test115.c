
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

uint32_t x4 = UINT32_MAX;
int64_t x5 = INT64_MAX;
static volatile int32_t t1 = -786;
volatile int16_t x12 = 1;
int8_t x19 = INT8_MIN;
uint8_t x23 = 7U;
int8_t x29 = -1;
int16_t x34 = INT16_MIN;
int8_t x36 = 0;
volatile int32_t t7 = 45905;
volatile int32_t t8 = 0;
static int16_t x41 = INT16_MIN;
volatile int32_t t11 = 40;
static int16_t x53 = 2;
static int32_t t12 = -6716;
int32_t x66 = -1;
uint64_t x70 = 1157929427101558740LLU;
int64_t t18 = 322LL;
static int32_t x81 = -108;
int8_t x84 = INT8_MAX;
int64_t t20 = 131LL;
int64_t x91 = INT64_MIN;
static int16_t x94 = INT16_MAX;
static int8_t x97 = 1;
int16_t x118 = -386;
int32_t x125 = INT32_MIN;
static volatile int32_t t28 = -386;
int32_t t31 = -1180351;
int32_t t32 = 14470468;
uint32_t t33 = 3U;
int8_t x166 = -17;
volatile int32_t t34 = 31376;
uint64_t x169 = 10187645661LLU;
volatile int16_t x173 = INT16_MIN;
int64_t x175 = 7357104LL;
int64_t x177 = INT64_MAX;
static volatile int16_t x179 = -1;
int8_t x182 = 1;
int32_t t38 = -49044651;
int8_t x185 = -1;
int32_t x187 = INT32_MIN;
int64_t x188 = -1LL;
int8_t x190 = INT8_MIN;
static uint8_t x194 = 78U;
uint16_t x198 = 3U;
static uint8_t x199 = UINT8_MAX;
uint64_t x203 = 3114736127480LLU;
static int32_t x215 = -1;
int64_t x223 = 719970679816LL;
uint64_t x230 = 5332902419577790LLU;
uint16_t x232 = 226U;
static uint64_t x233 = 310289LLU;
int8_t x234 = INT8_MIN;
int32_t x235 = INT32_MAX;
uint32_t x245 = 8060U;
uint64_t x249 = UINT64_MAX;
volatile uint32_t t54 = UINT32_MAX;
uint32_t x264 = 2836230U;
uint8_t x265 = UINT8_MAX;
static uint16_t x279 = 194U;
static int16_t x280 = INT16_MAX;
static int16_t x281 = -1;
volatile int32_t t60 = -36274320;
int32_t t61 = -7529;
uint64_t x292 = UINT64_MAX;
int8_t x296 = INT8_MIN;
int32_t x299 = -84;
volatile int8_t x302 = INT8_MAX;
static int64_t x309 = 160700837LL;
static volatile int16_t x310 = -1;
int32_t x311 = -1;
volatile int32_t t67 = 0;
volatile uint64_t x319 = UINT64_MAX;
static int64_t x325 = -175573565951219001LL;
static int64_t t70 = 175756586132LL;
static int64_t x330 = INT64_MIN;
int8_t x332 = -1;
int64_t x349 = 4790510737LL;
int64_t t74 = -20508803LL;
static int32_t x353 = 1;
int8_t x354 = -1;
uint32_t t75 = 965030U;
int16_t x359 = -85;
static uint32_t x360 = 12471U;
int8_t x367 = -5;
uint32_t x379 = UINT32_MAX;
uint32_t x383 = 1U;
int32_t x384 = INT32_MIN;
volatile int32_t t82 = INT32_MIN;
int32_t x396 = INT32_MIN;
int16_t x397 = -869;
int32_t x403 = -1083852;
volatile int64_t t85 = -1LL;
int32_t x407 = INT32_MIN;
int32_t t86 = -6511;
int8_t x412 = 7;
static uint64_t x413 = 116872219176881LLU;
int32_t x414 = INT32_MIN;
volatile int64_t x415 = INT64_MIN;
volatile int32_t t88 = 30807370;
int32_t x417 = 904;
int32_t x419 = INT32_MAX;
uint16_t x426 = UINT16_MAX;
static uint8_t x428 = 7U;
volatile int32_t t93 = 3740133;
int64_t x449 = INT64_MIN;
int8_t x452 = INT8_MIN;
volatile int32_t t96 = 883191;
volatile int32_t t98 = INT32_MAX;
int64_t x472 = INT64_MAX;
volatile int8_t x475 = INT8_MAX;
uint32_t x484 = 310160548U;
int32_t t105 = -221;
static int64_t x494 = INT64_MIN;
int8_t x498 = INT8_MAX;
volatile int32_t t108 = 1281535;
static volatile int64_t t110 = INT64_MAX;
uint8_t x526 = 12U;
int8_t x527 = -1;
int8_t x532 = -1;
static int64_t x535 = -1LL;
int32_t t114 = 5351;
uint32_t x542 = 9792949U;
static int32_t t116 = 1;
int64_t x547 = -1LL;
uint64_t x549 = 226823LLU;
uint16_t x551 = 15262U;
uint8_t x562 = 1U;
int32_t t121 = INT32_MIN;
static volatile int16_t x572 = INT16_MAX;
int16_t x576 = 183;
int8_t x577 = -1;
uint16_t x578 = UINT16_MAX;
volatile int32_t t125 = 696538;
static int16_t x585 = -3108;
volatile uint64_t t128 = UINT64_MAX;
int64_t x598 = -162392100904609862LL;
int32_t x602 = 416220;
uint64_t x603 = 1LLU;
volatile uint32_t x609 = 4497115U;
int64_t x617 = -1LL;
volatile int16_t x622 = -1;
uint8_t x629 = UINT8_MAX;
int32_t x631 = INT32_MAX;
int16_t x634 = INT16_MIN;
volatile uint8_t x640 = 1U;
volatile int8_t x643 = 0;
int8_t x644 = -1;
volatile uint8_t x659 = 16U;
uint8_t x668 = 4U;
static volatile int8_t x672 = -2;
static int16_t x677 = INT16_MIN;
static uint32_t x685 = 14830245U;
int8_t x686 = 0;
volatile int32_t t153 = 0;
volatile int64_t x700 = INT64_MAX;
static int16_t x702 = INT16_MIN;
static int16_t x704 = -1;
static volatile int32_t t155 = 148185867;
uint64_t x716 = 256437LLU;
volatile uint32_t x717 = 1U;
volatile int32_t x722 = 438244385;
static uint16_t x731 = UINT16_MAX;
int64_t x733 = -1LL;
uint16_t x736 = 61U;
volatile int8_t x737 = -1;
uint16_t x744 = UINT16_MAX;
int16_t x753 = -1;
volatile uint64_t x755 = UINT64_MAX;
int16_t x764 = INT16_MAX;
static int32_t x769 = INT32_MAX;
int32_t t171 = INT32_MIN;
volatile int32_t t172 = 58;
int16_t x784 = -224;
uint64_t x786 = 19186367LLU;
int32_t t174 = 69377225;
uint64_t x804 = 2126969136411LLU;
volatile int8_t x807 = 1;
int8_t x815 = INT8_MAX;
static int64_t t179 = 1LL;
static uint8_t x822 = 0U;
volatile int32_t t181 = -5146;
static volatile int16_t x827 = -1;
int32_t t182 = 23131;
int64_t x831 = -2066447385933203206LL;
int32_t x832 = -1;
int8_t x833 = 8;
int16_t x834 = -50;
volatile int32_t t184 = 10266529;
uint16_t x837 = UINT16_MAX;
static int16_t x839 = INT16_MIN;
int64_t x841 = INT64_MIN;
volatile int8_t x844 = INT8_MAX;
volatile int32_t t186 = -6;
uint8_t x845 = 0U;
int32_t x846 = -2168;
uint8_t x848 = 31U;
volatile int16_t x849 = INT16_MIN;
int16_t x856 = 88;
int32_t t189 = -1;
int64_t x858 = INT64_MIN;
volatile int32_t x859 = INT32_MIN;
int64_t x860 = -1LL;
uint8_t x861 = 3U;
int64_t x864 = 104LL;
static int64_t x865 = INT64_MIN;
int8_t x872 = INT8_MIN;
int16_t x873 = 20;
volatile int32_t t194 = -1118;
volatile uint16_t x877 = UINT16_MAX;
static uint64_t x890 = 110338737503994873LLU;
volatile int32_t t198 = 72668040;
uint32_t x893 = 148986802U;


void f0(void) {
    	int16_t x1 = -101;
	int32_t x2 = -1;
	int8_t x3 = 3;
	uint32_t t0 = 798U;

    t0 = (((x1+x2)>x3)*x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = -2802052934800LL;
	uint8_t x7 = 5U;
	int16_t x8 = 1844;

    t1 = (((x5+x6)>x7)*x8);

    if (t1 != 1844) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -41;
	int32_t x10 = -8;
	uint8_t x11 = UINT8_MAX;
	int32_t t2 = -3214;

    t2 = (((x9+x10)>x11)*x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x13 = 5403759106992952LLU;
	int16_t x14 = INT16_MIN;
	volatile int8_t x15 = INT8_MIN;
	uint32_t x16 = 381U;
	static volatile uint32_t t3 = 53743U;

    t3 = (((x13+x14)>x15)*x16);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 11LLU;
	int16_t x18 = 1426;
	volatile int32_t x20 = -1;
	static int32_t t4 = 37;

    t4 = (((x17+x18)>x19)*x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = -1;
	static volatile int16_t x22 = 10951;
	int16_t x24 = INT16_MIN;
	int32_t t5 = 425;

    t5 = (((x21+x22)>x23)*x24);

    if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x30 = UINT16_MAX;
	static int64_t x31 = INT64_MAX;
	int8_t x32 = INT8_MAX;
	volatile int32_t t6 = 394775;

    t6 = (((x29+x30)>x31)*x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = -1;
	int32_t x35 = INT32_MAX;

    t7 = (((x33+x34)>x35)*x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = 5;
	int8_t x38 = INT8_MAX;
	int64_t x39 = -1LL;
	static int8_t x40 = 7;

    t8 = (((x37+x38)>x39)*x40);

    if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x42 = INT8_MIN;
	uint64_t x43 = UINT64_MAX;
	int32_t x44 = 119887949;
	static int32_t t9 = -5;

    t9 = (((x41+x42)>x43)*x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = -1LL;
	static uint16_t x46 = 7675U;
	uint16_t x47 = 211U;
	int32_t x48 = INT32_MIN;
	static int32_t t10 = INT32_MIN;

    t10 = (((x45+x46)>x47)*x48);

    if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x49 = INT64_MIN;
	uint64_t x50 = UINT64_MAX;
	static uint8_t x51 = 6U;
	int16_t x52 = INT16_MAX;

    t11 = (((x49+x50)>x51)*x52);

    if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x54 = INT64_MIN;
	uint16_t x55 = 30274U;
	volatile int8_t x56 = -1;

    t12 = (((x53+x54)>x55)*x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x57 = 29270U;
	int16_t x58 = INT16_MAX;
	int8_t x59 = INT8_MIN;
	uint64_t x60 = 31746923457492LLU;
	uint64_t t13 = 44418795LLU;

    t13 = (((x57+x58)>x59)*x60);

    if (t13 != 31746923457492LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = -1;
	static uint16_t x62 = UINT16_MAX;
	int64_t x63 = -1LL;
	int64_t x64 = INT64_MIN;
	volatile int64_t t14 = INT64_MIN;

    t14 = (((x61+x62)>x63)*x64);

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x65 = -1;
	static int16_t x67 = -1;
	int32_t x68 = INT32_MIN;
	volatile int32_t t15 = 0;

    t15 = (((x65+x66)>x67)*x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MIN;
	int32_t x71 = INT32_MIN;
	volatile int64_t x72 = INT64_MIN;
	int64_t t16 = -1382LL;

    t16 = (((x69+x70)>x71)*x72);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x73 = INT32_MIN;
	uint16_t x74 = 28421U;
	uint16_t x75 = UINT16_MAX;
	int32_t x76 = 71;
	int32_t t17 = -7337;

    t17 = (((x73+x74)>x75)*x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x77 = 798634029U;
	static int16_t x78 = 0;
	int8_t x79 = -1;
	int64_t x80 = -1LL;

    t18 = (((x77+x78)>x79)*x80);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x82 = 0;
	int64_t x83 = INT64_MIN;
	int32_t t19 = -1410414;

    t19 = (((x81+x82)>x83)*x84);

    if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = -1LL;
	int16_t x86 = INT16_MIN;
	int64_t x87 = INT64_MIN;
	static int64_t x88 = -39235967LL;

    t20 = (((x85+x86)>x87)*x88);

    if (t20 != -39235967LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = INT64_MAX;
	int8_t x90 = INT8_MIN;
	int64_t x92 = INT64_MIN;
	static volatile int64_t t21 = INT64_MIN;

    t21 = (((x89+x90)>x91)*x92);

    if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int64_t x93 = -1LL;
	static int16_t x95 = INT16_MAX;
	static int64_t x96 = INT64_MIN;
	static int64_t t22 = 468LL;

    t22 = (((x93+x94)>x95)*x96);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x98 = -14353036792LL;
	int16_t x99 = 1;
	int32_t x100 = INT32_MIN;
	volatile int32_t t23 = -1429;

    t23 = (((x97+x98)>x99)*x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x105 = INT16_MAX;
	volatile int32_t x106 = 105;
	uint8_t x107 = UINT8_MAX;
	volatile int64_t x108 = INT64_MIN;
	static int64_t t24 = INT64_MIN;

    t24 = (((x105+x106)>x107)*x108);

    if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = INT16_MIN;
	uint32_t x114 = UINT32_MAX;
	int8_t x115 = INT8_MIN;
	static uint64_t x116 = UINT64_MAX;
	volatile uint64_t t25 = 1035677LLU;

    t25 = (((x113+x114)>x115)*x116);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x117 = -7;
	volatile int16_t x119 = 1;
	uint32_t x120 = 2201U;
	uint32_t t26 = 119U;

    t26 = (((x117+x118)>x119)*x120);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x121 = INT32_MAX;
	uint64_t x122 = UINT64_MAX;
	volatile int64_t x123 = INT64_MAX;
	int16_t x124 = -1;
	volatile int32_t t27 = -64881615;

    t27 = (((x121+x122)>x123)*x124);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x126 = -134427421057116LL;
	static int8_t x127 = -1;
	int8_t x128 = -1;

    t28 = (((x125+x126)>x127)*x128);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x129 = 149983312U;
	uint8_t x130 = UINT8_MAX;
	static volatile int64_t x131 = 226549LL;
	uint64_t x132 = UINT64_MAX;
	uint64_t t29 = UINT64_MAX;

    t29 = (((x129+x130)>x131)*x132);

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x133 = 353646U;
	uint8_t x134 = 2U;
	int16_t x135 = -1;
	static uint64_t x136 = UINT64_MAX;
	volatile uint64_t t30 = 0LLU;

    t30 = (((x133+x134)>x135)*x136);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = 136951662LL;
	static uint8_t x138 = UINT8_MAX;
	volatile int64_t x139 = INT64_MIN;
	int8_t x140 = INT8_MIN;

    t31 = (((x137+x138)>x139)*x140);

    if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x145 = -824;
	volatile int32_t x146 = 2548;
	static volatile int64_t x147 = INT64_MIN;
	volatile int8_t x148 = 16;

    t32 = (((x145+x146)>x147)*x148);

    if (t32 != 16) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x161 = INT8_MIN;
	int8_t x162 = INT8_MIN;
	uint16_t x163 = 16032U;
	uint32_t x164 = 743690873U;

    t33 = (((x161+x162)>x163)*x164);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x165 = 29714U;
	volatile uint8_t x167 = 2U;
	int16_t x168 = INT16_MIN;

    t34 = (((x165+x166)>x167)*x168);

    if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x170 = 110U;
	static uint32_t x171 = 962U;
	static uint8_t x172 = 73U;
	volatile int32_t t35 = -30013451;

    t35 = (((x169+x170)>x171)*x172);

    if (t35 != 73) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x174 = INT8_MIN;
	int32_t x176 = INT32_MAX;
	volatile int32_t t36 = 64464338;

    t36 = (((x173+x174)>x175)*x176);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x178 = -1990LL;
	static int16_t x180 = 534;
	volatile int32_t t37 = 43146603;

    t37 = (((x177+x178)>x179)*x180);

    if (t37 != 534) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x181 = -4759;
	uint8_t x183 = UINT8_MAX;
	int8_t x184 = -10;

    t38 = (((x181+x182)>x183)*x184);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x186 = 4472286;
	volatile int64_t t39 = 60060483545819513LL;

    t39 = (((x185+x186)>x187)*x188);

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x189 = -110;
	int32_t x191 = INT32_MIN;
	static int16_t x192 = INT16_MAX;
	int32_t t40 = 56550548;

    t40 = (((x189+x190)>x191)*x192);

    if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x193 = 1235461332LLU;
	int64_t x195 = INT64_MAX;
	uint16_t x196 = UINT16_MAX;
	int32_t t41 = -2683;

    t41 = (((x193+x194)>x195)*x196);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x197 = INT16_MAX;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t42 = 28126411;

    t42 = (((x197+x198)>x199)*x200);

    if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x201 = INT64_MIN;
	uint64_t x202 = UINT64_MAX;
	int64_t x204 = -1LL;
	int64_t t43 = 350397767956146LL;

    t43 = (((x201+x202)>x203)*x204);

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x209 = 257985293233995812LLU;
	static uint32_t x210 = UINT32_MAX;
	static uint64_t x211 = UINT64_MAX;
	static int8_t x212 = INT8_MIN;
	volatile int32_t t44 = -24;

    t44 = (((x209+x210)>x211)*x212);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x213 = 21550115U;
	int8_t x214 = INT8_MAX;
	volatile int64_t x216 = 495399906345261704LL;
	volatile int64_t t45 = 967822888563710812LL;

    t45 = (((x213+x214)>x215)*x216);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x217 = -9;
	volatile int16_t x218 = INT16_MAX;
	volatile int32_t x219 = INT32_MIN;
	int16_t x220 = -1;
	int32_t t46 = 0;

    t46 = (((x217+x218)>x219)*x220);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x221 = 25U;
	int8_t x222 = INT8_MIN;
	static uint8_t x224 = 72U;
	volatile int32_t t47 = 96572;

    t47 = (((x221+x222)>x223)*x224);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x225 = UINT32_MAX;
	int16_t x226 = INT16_MIN;
	static int16_t x227 = INT16_MIN;
	int16_t x228 = INT16_MIN;
	int32_t t48 = 180;

    t48 = (((x225+x226)>x227)*x228);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x229 = -1;
	int16_t x231 = 203;
	volatile int32_t t49 = 16517723;

    t49 = (((x229+x230)>x231)*x232);

    if (t49 != 226) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x236 = -1;
	static volatile int32_t t50 = 171293884;

    t50 = (((x233+x234)>x235)*x236);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x237 = UINT16_MAX;
	uint8_t x238 = 3U;
	int8_t x239 = INT8_MIN;
	volatile int8_t x240 = INT8_MAX;
	static int32_t t51 = -5520;

    t51 = (((x237+x238)>x239)*x240);

    if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x241 = INT64_MAX;
	uint64_t x242 = 204085035LLU;
	static volatile int16_t x243 = INT16_MIN;
	int8_t x244 = INT8_MIN;
	volatile int32_t t52 = -82;

    t52 = (((x241+x242)>x243)*x244);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x246 = -10;
	uint32_t x247 = 11U;
	uint8_t x248 = 121U;
	volatile int32_t t53 = -6965;

    t53 = (((x245+x246)>x247)*x248);

    if (t53 != 121) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x250 = UINT32_MAX;
	int16_t x251 = 198;
	static uint32_t x252 = UINT32_MAX;

    t54 = (((x249+x250)>x251)*x252);

    if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x253 = INT32_MIN;
	volatile int64_t x254 = -14599794538LL;
	int16_t x255 = INT16_MIN;
	static int32_t x256 = -3377;
	int32_t t55 = 194128;

    t55 = (((x253+x254)>x255)*x256);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x257 = -1;
	static int8_t x258 = INT8_MAX;
	int64_t x259 = -1LL;
	volatile int32_t x260 = -8113;
	volatile int32_t t56 = -3;

    t56 = (((x257+x258)>x259)*x260);

    if (t56 != -8113) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int32_t x261 = 28222;
	uint16_t x262 = 0U;
	uint16_t x263 = UINT16_MAX;
	uint32_t t57 = 122157437U;

    t57 = (((x261+x262)>x263)*x264);

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x266 = -1;
	int8_t x267 = INT8_MIN;
	int8_t x268 = 38;
	int32_t t58 = -1;

    t58 = (((x265+x266)>x267)*x268);

    if (t58 != 38) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint32_t x277 = 626U;
	int16_t x278 = INT16_MIN;
	int32_t t59 = 0;

    t59 = (((x277+x278)>x279)*x280);

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x282 = 101U;
	int8_t x283 = INT8_MIN;
	int8_t x284 = 1;

    t60 = (((x281+x282)>x283)*x284);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x285 = -1;
	volatile uint16_t x286 = 104U;
	int64_t x287 = INT64_MAX;
	int8_t x288 = INT8_MIN;

    t61 = (((x285+x286)>x287)*x288);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x289 = -40;
	uint32_t x290 = 230U;
	static uint16_t x291 = UINT16_MAX;
	uint64_t t62 = 459712218989741LLU;

    t62 = (((x289+x290)>x291)*x292);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x293 = 1U;
	volatile int16_t x294 = INT16_MIN;
	volatile int16_t x295 = 98;
	int32_t t63 = 1977;

    t63 = (((x293+x294)>x295)*x296);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x297 = -2;
	static int8_t x298 = -8;
	uint32_t x300 = 421U;
	volatile uint32_t t64 = 425259326U;

    t64 = (((x297+x298)>x299)*x300);

    if (t64 != 421U) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x301 = 1;
	uint64_t x303 = 154392309187LLU;
	static volatile int8_t x304 = INT8_MIN;
	volatile int32_t t65 = 158423367;

    t65 = (((x301+x302)>x303)*x304);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x305 = INT16_MIN;
	static uint8_t x306 = UINT8_MAX;
	uint8_t x307 = 0U;
	static int32_t x308 = -1;
	volatile int32_t t66 = -1031097;

    t66 = (((x305+x306)>x307)*x308);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x312 = 46U;

    t67 = (((x309+x310)>x311)*x312);

    if (t67 != 46) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x317 = UINT64_MAX;
	int64_t x318 = -24629931981090LL;
	uint16_t x320 = 2U;
	int32_t t68 = 2141939;

    t68 = (((x317+x318)>x319)*x320);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x321 = 216;
	int8_t x322 = INT8_MAX;
	int8_t x323 = INT8_MIN;
	volatile int32_t x324 = -1;
	static int32_t t69 = -49;

    t69 = (((x321+x322)>x323)*x324);

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x326 = UINT32_MAX;
	static int16_t x327 = INT16_MIN;
	int64_t x328 = -1LL;

    t70 = (((x325+x326)>x327)*x328);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x329 = INT32_MAX;
	int8_t x331 = 57;
	volatile int32_t t71 = -747586;

    t71 = (((x329+x330)>x331)*x332);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x333 = -555LL;
	int32_t x334 = INT32_MAX;
	int8_t x335 = 7;
	static uint8_t x336 = UINT8_MAX;
	volatile int32_t t72 = 80;

    t72 = (((x333+x334)>x335)*x336);

    if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x345 = -1;
	volatile uint8_t x346 = UINT8_MAX;
	uint8_t x347 = UINT8_MAX;
	int8_t x348 = INT8_MAX;
	volatile int32_t t73 = 73778;

    t73 = (((x345+x346)>x347)*x348);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x350 = 725521LLU;
	volatile uint64_t x351 = UINT64_MAX;
	int64_t x352 = INT64_MAX;

    t74 = (((x349+x350)>x351)*x352);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x355 = -1;
	uint32_t x356 = 24159U;

    t75 = (((x353+x354)>x355)*x356);

    if (t75 != 24159U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x357 = -1;
	volatile int16_t x358 = INT16_MIN;
	static uint32_t t76 = 8U;

    t76 = (((x357+x358)>x359)*x360);

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x361 = -5;
	uint64_t x362 = UINT64_MAX;
	uint8_t x363 = 124U;
	volatile uint64_t x364 = 2637564976537LLU;
	uint64_t t77 = 23735752LLU;

    t77 = (((x361+x362)>x363)*x364);

    if (t77 != 2637564976537LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x365 = 9;
	static int64_t x366 = -14031681LL;
	int64_t x368 = -1LL;
	int64_t t78 = -56009864LL;

    t78 = (((x365+x366)>x367)*x368);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x369 = UINT64_MAX;
	int16_t x370 = 0;
	int16_t x371 = -1;
	volatile int32_t x372 = INT32_MIN;
	int32_t t79 = 47;

    t79 = (((x369+x370)>x371)*x372);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x373 = 84;
	int16_t x374 = -1;
	int16_t x375 = INT16_MAX;
	int64_t x376 = INT64_MAX;
	int64_t t80 = 62517458057LL;

    t80 = (((x373+x374)>x375)*x376);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x377 = 2560855U;
	volatile int64_t x378 = 494LL;
	uint64_t x380 = 31367190529673LLU;
	uint64_t t81 = 256788943LLU;

    t81 = (((x377+x378)>x379)*x380);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x381 = INT16_MIN;
	int32_t x382 = -1;

    t82 = (((x381+x382)>x383)*x384);

    if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x393 = INT8_MIN;
	static int8_t x394 = -1;
	volatile int8_t x395 = -1;
	volatile int32_t t83 = -166067;

    t83 = (((x393+x394)>x395)*x396);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x398 = INT16_MAX;
	int16_t x399 = INT16_MIN;
	int8_t x400 = INT8_MAX;
	volatile int32_t t84 = -14190868;

    t84 = (((x397+x398)>x399)*x400);

    if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x401 = INT32_MIN;
	uint64_t x402 = UINT64_MAX;
	volatile int64_t x404 = INT64_MIN;

    t85 = (((x401+x402)>x403)*x404);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x405 = -1;
	int32_t x406 = -1;
	int16_t x408 = INT16_MIN;

    t86 = (((x405+x406)>x407)*x408);

    if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x409 = INT16_MAX;
	int8_t x410 = -1;
	static uint16_t x411 = UINT16_MAX;
	int32_t t87 = -1;

    t87 = (((x409+x410)>x411)*x412);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x416 = INT16_MIN;

    t88 = (((x413+x414)>x415)*x416);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x418 = -1;
	uint32_t x420 = UINT32_MAX;
	volatile uint32_t t89 = 33U;

    t89 = (((x417+x418)>x419)*x420);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x425 = 5;
	int16_t x427 = -1;
	int32_t t90 = -114456;

    t90 = (((x425+x426)>x427)*x428);

    if (t90 != 7) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x433 = INT16_MIN;
	int8_t x434 = -1;
	int16_t x435 = INT16_MAX;
	static int64_t x436 = INT64_MIN;
	volatile int64_t t91 = -885425412517805996LL;

    t91 = (((x433+x434)>x435)*x436);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x437 = -1;
	int64_t x438 = 34662LL;
	static volatile int16_t x439 = -1;
	volatile int8_t x440 = 1;
	volatile int32_t t92 = -1076;

    t92 = (((x437+x438)>x439)*x440);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint16_t x441 = 25U;
	static volatile int8_t x442 = -1;
	static int8_t x443 = -1;
	static int8_t x444 = INT8_MIN;

    t93 = (((x441+x442)>x443)*x444);

    if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x445 = 1U;
	int32_t x446 = -1;
	static volatile uint16_t x447 = 5U;
	volatile int32_t x448 = INT32_MIN;
	int32_t t94 = 2001375;

    t94 = (((x445+x446)>x447)*x448);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x450 = INT8_MAX;
	int8_t x451 = INT8_MIN;
	volatile int32_t t95 = 275;

    t95 = (((x449+x450)>x451)*x452);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x453 = 0LL;
	static uint8_t x454 = 16U;
	uint8_t x455 = 4U;
	static int16_t x456 = INT16_MIN;

    t96 = (((x453+x454)>x455)*x456);

    if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x457 = INT16_MAX;
	int32_t x458 = INT32_MIN;
	int16_t x459 = INT16_MAX;
	volatile uint32_t x460 = 40448308U;
	static uint32_t t97 = 1U;

    t97 = (((x457+x458)>x459)*x460);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x461 = -1;
	int16_t x462 = INT16_MIN;
	int32_t x463 = INT32_MIN;
	volatile int32_t x464 = INT32_MAX;

    t98 = (((x461+x462)>x463)*x464);

    if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x465 = 5915269U;
	uint8_t x466 = UINT8_MAX;
	uint64_t x467 = UINT64_MAX;
	static uint16_t x468 = 240U;
	int32_t t99 = 195590257;

    t99 = (((x465+x466)>x467)*x468);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x469 = -1LL;
	volatile int8_t x470 = INT8_MAX;
	volatile uint16_t x471 = 5U;
	int64_t t100 = INT64_MAX;

    t100 = (((x469+x470)>x471)*x472);

    if (t100 != INT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x473 = INT32_MAX;
	int32_t x474 = -1;
	volatile int8_t x476 = INT8_MAX;
	int32_t t101 = -17818824;

    t101 = (((x473+x474)>x475)*x476);

    if (t101 != 127) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x477 = -1;
	volatile int32_t x478 = -1;
	static uint16_t x479 = UINT16_MAX;
	static int16_t x480 = 2;
	int32_t t102 = -3611821;

    t102 = (((x477+x478)>x479)*x480);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x481 = INT16_MIN;
	volatile int16_t x482 = -7;
	int16_t x483 = -1;
	uint32_t t103 = 122194U;

    t103 = (((x481+x482)>x483)*x484);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x485 = 171795LLU;
	int8_t x486 = -1;
	int8_t x487 = 53;
	static volatile int32_t x488 = INT32_MIN;
	static int32_t t104 = INT32_MIN;

    t104 = (((x485+x486)>x487)*x488);

    if (t104 != INT32_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x489 = INT64_MIN;
	uint32_t x490 = UINT32_MAX;
	int8_t x491 = 15;
	int8_t x492 = -1;

    t105 = (((x489+x490)>x491)*x492);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x493 = 819U;
	int8_t x495 = -1;
	static int32_t x496 = 7735;
	int32_t t106 = 46;

    t106 = (((x493+x494)>x495)*x496);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x497 = -1;
	uint16_t x499 = 62U;
	uint32_t x500 = UINT32_MAX;
	volatile uint32_t t107 = UINT32_MAX;

    t107 = (((x497+x498)>x499)*x500);

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x501 = 23U;
	uint16_t x502 = 99U;
	int32_t x503 = -26084534;
	static int16_t x504 = -1;

    t108 = (((x501+x502)>x503)*x504);

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x509 = 20117758U;
	uint16_t x510 = 975U;
	static int8_t x511 = -1;
	static int32_t x512 = INT32_MIN;
	static int32_t t109 = 238680;

    t109 = (((x509+x510)>x511)*x512);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x517 = 15969059433LLU;
	static volatile int16_t x518 = -1;
	int8_t x519 = INT8_MAX;
	static int64_t x520 = INT64_MAX;

    t110 = (((x517+x518)>x519)*x520);

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x521 = INT32_MAX;
	static uint32_t x522 = 79297855U;
	uint16_t x523 = UINT16_MAX;
	int64_t x524 = 38095124LL;
	volatile int64_t t111 = 104649LL;

    t111 = (((x521+x522)>x523)*x524);

    if (t111 != 38095124LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x525 = INT16_MAX;
	static int32_t x528 = INT32_MAX;
	int32_t t112 = INT32_MAX;

    t112 = (((x525+x526)>x527)*x528);

    if (t112 != INT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x529 = INT16_MIN;
	volatile int32_t x530 = INT32_MAX;
	int16_t x531 = INT16_MIN;
	int32_t t113 = -138835368;

    t113 = (((x529+x530)>x531)*x532);

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int8_t x533 = -1;
	int8_t x534 = -1;
	int8_t x536 = 1;

    t114 = (((x533+x534)>x535)*x536);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint64_t x537 = UINT64_MAX;
	static uint32_t x538 = 20274U;
	volatile int8_t x539 = INT8_MIN;
	int64_t x540 = -1LL;
	int64_t t115 = 37771355LL;

    t115 = (((x537+x538)>x539)*x540);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int16_t x541 = -1;
	int8_t x543 = INT8_MAX;
	int8_t x544 = INT8_MAX;

    t116 = (((x541+x542)>x543)*x544);

    if (t116 != 127) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x545 = INT8_MAX;
	uint16_t x546 = 103U;
	int8_t x548 = -1;
	int32_t t117 = -109001499;

    t117 = (((x545+x546)>x547)*x548);

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int64_t x550 = INT64_MIN;
	int8_t x552 = INT8_MAX;
	int32_t t118 = -307;

    t118 = (((x549+x550)>x551)*x552);

    if (t118 != 127) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x553 = 3U;
	int16_t x554 = 0;
	int32_t x555 = -1;
	volatile uint8_t x556 = 1U;
	int32_t t119 = 173636582;

    t119 = (((x553+x554)>x555)*x556);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x557 = 808306515U;
	int8_t x558 = INT8_MIN;
	int16_t x559 = -1;
	int32_t x560 = INT32_MIN;
	volatile int32_t t120 = -125;

    t120 = (((x557+x558)>x559)*x560);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x561 = INT16_MIN;
	uint64_t x563 = 231LLU;
	int32_t x564 = INT32_MIN;

    t121 = (((x561+x562)>x563)*x564);

    if (t121 != INT32_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x565 = 26813825017323LLU;
	int32_t x566 = INT32_MAX;
	uint16_t x567 = UINT16_MAX;
	uint8_t x568 = 54U;
	int32_t t122 = 43031302;

    t122 = (((x565+x566)>x567)*x568);

    if (t122 != 54) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x569 = 6U;
	uint32_t x570 = UINT32_MAX;
	volatile int8_t x571 = INT8_MIN;
	static int32_t t123 = 13191;

    t123 = (((x569+x570)>x571)*x572);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x573 = UINT64_MAX;
	static int16_t x574 = INT16_MIN;
	int8_t x575 = -22;
	int32_t t124 = -2372863;

    t124 = (((x573+x574)>x575)*x576);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x579 = 95;
	uint8_t x580 = 14U;

    t125 = (((x577+x578)>x579)*x580);

    if (t125 != 14) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x581 = INT8_MAX;
	uint8_t x582 = UINT8_MAX;
	int32_t x583 = INT32_MIN;
	int16_t x584 = -1;
	volatile int32_t t126 = -2381;

    t126 = (((x581+x582)>x583)*x584);

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x586 = INT8_MAX;
	int8_t x587 = INT8_MIN;
	int32_t x588 = -1;
	int32_t t127 = 35828;

    t127 = (((x585+x586)>x587)*x588);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x589 = 46U;
	uint8_t x590 = 1U;
	static volatile int8_t x591 = 3;
	uint64_t x592 = UINT64_MAX;

    t128 = (((x589+x590)>x591)*x592);

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x593 = -6;
	uint16_t x594 = UINT16_MAX;
	uint8_t x595 = UINT8_MAX;
	uint32_t x596 = 8382515U;
	uint32_t t129 = 183972721U;

    t129 = (((x593+x594)>x595)*x596);

    if (t129 != 8382515U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x597 = UINT32_MAX;
	uint32_t x599 = UINT32_MAX;
	int32_t x600 = -3;
	static volatile int32_t t130 = 1332;

    t130 = (((x597+x598)>x599)*x600);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x601 = INT8_MIN;
	volatile int16_t x604 = INT16_MIN;
	int32_t t131 = -122749898;

    t131 = (((x601+x602)>x603)*x604);

    if (t131 != -32768) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x605 = 4905447U;
	static uint64_t x606 = 1669884LLU;
	static int32_t x607 = -10619378;
	uint16_t x608 = UINT16_MAX;
	int32_t t132 = 186100872;

    t132 = (((x605+x606)>x607)*x608);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x610 = -1631;
	int8_t x611 = INT8_MIN;
	static volatile int64_t x612 = INT64_MAX;
	static volatile int64_t t133 = 728204861120LL;

    t133 = (((x609+x610)>x611)*x612);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x613 = UINT16_MAX;
	volatile int16_t x614 = -1;
	uint64_t x615 = UINT64_MAX;
	int64_t x616 = -1LL;
	volatile int64_t t134 = 10918553470228200LL;

    t134 = (((x613+x614)>x615)*x616);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x618 = -1;
	uint64_t x619 = UINT64_MAX;
	uint8_t x620 = UINT8_MAX;
	static int32_t t135 = -245;

    t135 = (((x617+x618)>x619)*x620);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x621 = 10280801576584LLU;
	static uint16_t x623 = 3U;
	int8_t x624 = INT8_MAX;
	int32_t t136 = -82;

    t136 = (((x621+x622)>x623)*x624);

    if (t136 != 127) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x630 = 2928485U;
	int32_t x632 = INT32_MIN;
	volatile int32_t t137 = -42262972;

    t137 = (((x629+x630)>x631)*x632);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x633 = INT16_MAX;
	int64_t x635 = -1317877LL;
	int8_t x636 = INT8_MIN;
	int32_t t138 = -75413217;

    t138 = (((x633+x634)>x635)*x636);

    if (t138 != -128) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x637 = 17;
	int64_t x638 = 120657293562910815LL;
	volatile int32_t x639 = -1;
	int32_t t139 = -14;

    t139 = (((x637+x638)>x639)*x640);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x641 = INT16_MIN;
	static int32_t x642 = 5638492;
	int32_t t140 = 9966993;

    t140 = (((x641+x642)>x643)*x644);

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x645 = 1022126939698LL;
	int8_t x646 = 10;
	int64_t x647 = INT64_MIN;
	static int64_t x648 = INT64_MAX;
	static volatile int64_t t141 = INT64_MAX;

    t141 = (((x645+x646)>x647)*x648);

    if (t141 != INT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x649 = 6514U;
	static volatile int32_t x650 = -1;
	volatile uint16_t x651 = 696U;
	int16_t x652 = -1;
	volatile int32_t t142 = -32441;

    t142 = (((x649+x650)>x651)*x652);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x653 = 37425926547275743LLU;
	volatile int32_t x654 = INT32_MAX;
	int8_t x655 = -7;
	static int64_t x656 = INT64_MAX;
	int64_t t143 = 25485259LL;

    t143 = (((x653+x654)>x655)*x656);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x657 = 11;
	int32_t x658 = 1736;
	volatile uint8_t x660 = 1U;
	int32_t t144 = 149075;

    t144 = (((x657+x658)>x659)*x660);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x661 = UINT64_MAX;
	uint32_t x662 = UINT32_MAX;
	int8_t x663 = 0;
	int32_t x664 = -931232;
	int32_t t145 = -7195;

    t145 = (((x661+x662)>x663)*x664);

    if (t145 != -931232) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x665 = -2;
	volatile uint16_t x666 = UINT16_MAX;
	volatile int8_t x667 = -1;
	static volatile int32_t t146 = -11379;

    t146 = (((x665+x666)>x667)*x668);

    if (t146 != 4) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x669 = 7U;
	int32_t x670 = -8032;
	uint32_t x671 = 348U;
	static int32_t t147 = 33249;

    t147 = (((x669+x670)>x671)*x672);

    if (t147 != -2) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x673 = INT32_MAX;
	volatile int64_t x674 = -1LL;
	volatile int32_t x675 = INT32_MAX;
	volatile int32_t x676 = -13470;
	volatile int32_t t148 = 4;

    t148 = (((x673+x674)>x675)*x676);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x678 = 268831317098293879LLU;
	static int16_t x679 = INT16_MIN;
	int32_t x680 = 983910593;
	volatile int32_t t149 = 129;

    t149 = (((x677+x678)>x679)*x680);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int16_t x681 = 13493;
	uint8_t x682 = 0U;
	volatile int64_t x683 = -1LL;
	static int32_t x684 = -1;
	int32_t t150 = -13869;

    t150 = (((x681+x682)>x683)*x684);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x687 = INT8_MIN;
	int32_t x688 = -763;
	volatile int32_t t151 = 11778296;

    t151 = (((x685+x686)>x687)*x688);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x689 = INT32_MAX;
	uint64_t x690 = 34LLU;
	volatile int32_t x691 = INT32_MIN;
	volatile int64_t x692 = INT64_MAX;
	volatile int64_t t152 = 2906LL;

    t152 = (((x689+x690)>x691)*x692);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x693 = 7918U;
	volatile int32_t x694 = INT32_MIN;
	int32_t x695 = INT32_MAX;
	int8_t x696 = INT8_MIN;

    t153 = (((x693+x694)>x695)*x696);

    if (t153 != -128) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x697 = INT64_MIN;
	uint64_t x698 = UINT64_MAX;
	static int8_t x699 = 7;
	int64_t t154 = INT64_MAX;

    t154 = (((x697+x698)>x699)*x700);

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x701 = -1LL;
	static int64_t x703 = -1101398LL;

    t155 = (((x701+x702)>x703)*x704);

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x705 = 11LLU;
	uint8_t x706 = 56U;
	volatile uint64_t x707 = 1857564LLU;
	volatile int64_t x708 = INT64_MIN;
	static volatile int64_t t156 = -4570170684710133LL;

    t156 = (((x705+x706)>x707)*x708);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x709 = UINT8_MAX;
	static int8_t x710 = 14;
	int16_t x711 = INT16_MAX;
	static int8_t x712 = INT8_MIN;
	static int32_t t157 = 919;

    t157 = (((x709+x710)>x711)*x712);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x713 = UINT8_MAX;
	int8_t x714 = INT8_MAX;
	int32_t x715 = INT32_MIN;
	uint64_t t158 = 226759LLU;

    t158 = (((x713+x714)>x715)*x716);

    if (t158 != 256437LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x718 = -13116782LL;
	static int8_t x719 = 1;
	volatile int64_t x720 = INT64_MAX;
	int64_t t159 = 10434092726230LL;

    t159 = (((x717+x718)>x719)*x720);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x721 = 371U;
	int32_t x723 = -1;
	int16_t x724 = -1;
	static int32_t t160 = 1;

    t160 = (((x721+x722)>x723)*x724);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x725 = INT32_MIN;
	volatile int16_t x726 = INT16_MAX;
	static volatile int64_t x727 = INT64_MIN;
	int32_t x728 = INT32_MAX;
	volatile int32_t t161 = INT32_MAX;

    t161 = (((x725+x726)>x727)*x728);

    if (t161 != INT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x729 = 24LLU;
	int8_t x730 = INT8_MIN;
	uint16_t x732 = UINT16_MAX;
	int32_t t162 = -167136590;

    t162 = (((x729+x730)>x731)*x732);

    if (t162 != 65535) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x734 = INT8_MIN;
	int8_t x735 = INT8_MIN;
	int32_t t163 = -86273161;

    t163 = (((x733+x734)>x735)*x736);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x738 = -1;
	volatile int16_t x739 = -1;
	int32_t x740 = INT32_MIN;
	volatile int32_t t164 = 0;

    t164 = (((x737+x738)>x739)*x740);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint16_t x741 = 7297U;
	int8_t x742 = -1;
	volatile uint16_t x743 = UINT16_MAX;
	int32_t t165 = -2;

    t165 = (((x741+x742)>x743)*x744);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x754 = 0U;
	int8_t x756 = -1;
	int32_t t166 = 63;

    t166 = (((x753+x754)>x755)*x756);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x757 = 2U;
	int32_t x758 = 1719653;
	uint64_t x759 = 1622LLU;
	static uint32_t x760 = 49299U;
	static uint32_t t167 = 4U;

    t167 = (((x757+x758)>x759)*x760);

    if (t167 != 49299U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x761 = INT8_MAX;
	int32_t x762 = 0;
	volatile int8_t x763 = -2;
	volatile int32_t t168 = 1;

    t168 = (((x761+x762)>x763)*x764);

    if (t168 != 32767) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x765 = INT16_MIN;
	uint64_t x766 = UINT64_MAX;
	static int16_t x767 = INT16_MIN;
	static int32_t x768 = INT32_MIN;
	static int32_t t169 = 2;

    t169 = (((x765+x766)>x767)*x768);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x770 = 0;
	static uint8_t x771 = UINT8_MAX;
	int16_t x772 = -1;
	volatile int32_t t170 = -21335053;

    t170 = (((x769+x770)>x771)*x772);

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x773 = UINT64_MAX;
	volatile uint32_t x774 = UINT32_MAX;
	volatile uint8_t x775 = 3U;
	volatile int32_t x776 = INT32_MIN;

    t171 = (((x773+x774)>x775)*x776);

    if (t171 != INT32_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x777 = 224027946LLU;
	int16_t x778 = -2825;
	uint16_t x779 = 1082U;
	uint8_t x780 = 7U;

    t172 = (((x777+x778)>x779)*x780);

    if (t172 != 7) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x781 = UINT32_MAX;
	int16_t x782 = -1;
	int8_t x783 = INT8_MAX;
	volatile int32_t t173 = -34;

    t173 = (((x781+x782)>x783)*x784);

    if (t173 != -224) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x785 = INT8_MIN;
	uint64_t x787 = 308282LLU;
	uint16_t x788 = 13U;

    t174 = (((x785+x786)>x787)*x788);

    if (t174 != 13) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x789 = 4U;
	volatile uint32_t x790 = UINT32_MAX;
	uint8_t x791 = UINT8_MAX;
	int16_t x792 = INT16_MIN;
	int32_t t175 = 0;

    t175 = (((x789+x790)>x791)*x792);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x797 = INT8_MIN;
	int32_t x798 = -1;
	static int16_t x799 = -1;
	int16_t x800 = -8186;
	volatile int32_t t176 = 27692;

    t176 = (((x797+x798)>x799)*x800);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x801 = -1329448;
	int64_t x802 = -1701441357087LL;
	uint32_t x803 = 0U;
	uint64_t t177 = 881LLU;

    t177 = (((x801+x802)>x803)*x804);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x805 = -1;
	uint16_t x806 = UINT16_MAX;
	int16_t x808 = 18;
	int32_t t178 = -16523;

    t178 = (((x805+x806)>x807)*x808);

    if (t178 != 18) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x813 = INT32_MIN;
	uint8_t x814 = UINT8_MAX;
	int64_t x816 = INT64_MIN;

    t179 = (((x813+x814)>x815)*x816);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x817 = INT32_MIN;
	int32_t x818 = 212333;
	volatile uint8_t x819 = 11U;
	volatile uint8_t x820 = 2U;
	int32_t t180 = 99;

    t180 = (((x817+x818)>x819)*x820);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x821 = 5477;
	int16_t x823 = 0;
	int8_t x824 = INT8_MIN;

    t181 = (((x821+x822)>x823)*x824);

    if (t181 != -128) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x825 = UINT16_MAX;
	int8_t x826 = 1;
	static int8_t x828 = INT8_MAX;

    t182 = (((x825+x826)>x827)*x828);

    if (t182 != 127) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x829 = INT32_MAX;
	int16_t x830 = INT16_MIN;
	volatile int32_t t183 = -1;

    t183 = (((x829+x830)>x831)*x832);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x835 = INT64_MIN;
	uint16_t x836 = UINT16_MAX;

    t184 = (((x833+x834)>x835)*x836);

    if (t184 != 65535) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x838 = -1;
	volatile int32_t x840 = -510898004;
	int32_t t185 = 22808194;

    t185 = (((x837+x838)>x839)*x840);

    if (t185 != -510898004) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x842 = 3U;
	int64_t x843 = -44756LL;

    t186 = (((x841+x842)>x843)*x844);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x847 = INT32_MIN;
	volatile int32_t t187 = -3881256;

    t187 = (((x845+x846)>x847)*x848);

    if (t187 != 31) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x850 = 31LL;
	uint64_t x851 = UINT64_MAX;
	int64_t x852 = -4193923994LL;
	volatile int64_t t188 = 14LL;

    t188 = (((x849+x850)>x851)*x852);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x853 = 1492649734LLU;
	int8_t x854 = INT8_MIN;
	int8_t x855 = -3;

    t189 = (((x853+x854)>x855)*x856);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x857 = UINT32_MAX;
	int64_t t190 = -804LL;

    t190 = (((x857+x858)>x859)*x860);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x862 = -1;
	int16_t x863 = INT16_MIN;
	volatile int64_t t191 = -336844746LL;

    t191 = (((x861+x862)>x863)*x864);

    if (t191 != 104LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x866 = 23408U;
	static int64_t x867 = INT64_MIN;
	int32_t x868 = -1;
	volatile int32_t t192 = 0;

    t192 = (((x865+x866)>x867)*x868);

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x869 = UINT16_MAX;
	static int64_t x870 = -1LL;
	int16_t x871 = INT16_MIN;
	int32_t t193 = -21802394;

    t193 = (((x869+x870)>x871)*x872);

    if (t193 != -128) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x874 = 88U;
	int64_t x875 = INT64_MIN;
	static int16_t x876 = -1;

    t194 = (((x873+x874)>x875)*x876);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x878 = 25779519192LLU;
	volatile int32_t x879 = INT32_MIN;
	int8_t x880 = -27;
	volatile int32_t t195 = -20;

    t195 = (((x877+x878)>x879)*x880);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x881 = 1U;
	uint16_t x882 = 5U;
	static uint16_t x883 = 255U;
	volatile uint32_t x884 = UINT32_MAX;
	uint32_t t196 = 2035U;

    t196 = (((x881+x882)>x883)*x884);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x885 = INT32_MAX;
	static volatile uint64_t x886 = 992250265919688727LLU;
	int64_t x887 = 3442964574720423LL;
	int8_t x888 = INT8_MAX;
	static int32_t t197 = -3987050;

    t197 = (((x885+x886)>x887)*x888);

    if (t197 != 127) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x889 = -759;
	static int32_t x891 = -1;
	int32_t x892 = INT32_MAX;

    t198 = (((x889+x890)>x891)*x892);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x894 = 1780481133080502480LLU;
	int8_t x895 = -1;
	uint16_t x896 = UINT16_MAX;
	volatile int32_t t199 = 32112769;

    t199 = (((x893+x894)>x895)*x896);

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

