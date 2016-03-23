
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

int16_t x3 = -1;
volatile int16_t x10 = -1;
volatile int8_t x12 = 1;
int32_t x15 = 58638195;
int16_t x19 = 1;
int16_t x32 = INT16_MIN;
static volatile int32_t t8 = -474;
volatile int8_t x43 = INT8_MIN;
static volatile uint64_t x53 = 1LLU;
volatile int16_t x65 = INT16_MIN;
volatile int32_t x67 = 1;
uint16_t x73 = 1455U;
int8_t x82 = INT8_MIN;
volatile uint64_t t21 = 4423924798016376145LLU;
volatile int8_t x89 = -16;
uint16_t x90 = UINT16_MAX;
int8_t x96 = -1;
int16_t x103 = -1;
static int16_t x109 = INT16_MIN;
volatile uint64_t t26 = 401313677169034LLU;
int32_t x114 = -1;
uint32_t x117 = 1705U;
int16_t x130 = INT16_MIN;
volatile uint8_t x139 = 6U;
int16_t x143 = INT16_MIN;
volatile uint64_t t35 = 3434LLU;
uint32_t x152 = 47U;
uint32_t x156 = UINT32_MAX;
int8_t x158 = INT8_MIN;
uint16_t x162 = 20012U;
uint32_t x164 = 3078U;
volatile uint32_t t39 = 257638022U;
int8_t x167 = -1;
int8_t x175 = INT8_MIN;
int32_t x180 = INT32_MIN;
static int8_t x188 = 9;
int64_t x193 = INT64_MIN;
uint64_t x203 = 1729164197896LLU;
static int16_t x204 = -1;
uint8_t x205 = UINT8_MAX;
int32_t x207 = INT32_MIN;
static int8_t x214 = -1;
int64_t x222 = INT64_MAX;
int8_t x228 = INT8_MAX;
static uint16_t x232 = 1U;
static uint8_t x233 = UINT8_MAX;
int64_t t55 = -114547312039965225LL;
int8_t x244 = 1;
uint64_t t56 = 794391537389025477LLU;
static int16_t x247 = INT16_MIN;
volatile int16_t x249 = INT16_MIN;
int16_t x250 = INT16_MIN;
int8_t x253 = 0;
static uint32_t x258 = 15939U;
volatile int8_t x260 = -12;
volatile uint16_t x264 = UINT16_MAX;
volatile uint64_t t62 = 411088868LLU;
int32_t x272 = INT32_MIN;
uint16_t x275 = UINT16_MAX;
static int16_t x277 = -3458;
int8_t x284 = INT8_MAX;
static int64_t x293 = 292862138974LL;
volatile int8_t x298 = -53;
volatile int32_t x300 = INT32_MIN;
uint64_t t69 = 16LLU;
uint64_t x301 = UINT64_MAX;
int8_t x306 = INT8_MIN;
uint8_t x313 = UINT8_MAX;
int32_t x318 = INT32_MAX;
int32_t x324 = INT32_MAX;
uint64_t x325 = 3278409114312818LLU;
static int32_t x330 = INT32_MIN;
volatile int32_t t77 = -127;
static int8_t x335 = INT8_MAX;
volatile uint8_t x336 = UINT8_MAX;
int32_t x337 = 183996880;
int32_t x338 = INT32_MAX;
volatile uint32_t x341 = 3531U;
volatile int64_t x344 = INT64_MAX;
volatile int64_t t80 = 5901060433793LL;
static volatile uint64_t t81 = 40LLU;
uint64_t x355 = UINT64_MAX;
int8_t x361 = INT8_MIN;
int16_t x363 = INT16_MIN;
static int64_t t87 = 185557766325LL;
volatile uint8_t x384 = UINT8_MAX;
uint8_t x390 = UINT8_MAX;
static volatile uint16_t x391 = 7642U;
int8_t x397 = -2;
int64_t x406 = INT64_MIN;
uint16_t x412 = 6U;
volatile uint64_t t98 = 9328113251311LLU;
static int32_t x418 = INT32_MIN;
int32_t x419 = 0;
volatile int8_t x420 = 19;
volatile int32_t t99 = INT32_MAX;
static uint16_t x425 = 96U;
int64_t x426 = INT64_MIN;
static volatile uint32_t x427 = UINT32_MAX;
int32_t x432 = 660835534;
uint64_t x443 = UINT64_MAX;
int64_t x444 = INT64_MIN;
uint8_t x445 = 127U;
static volatile int64_t x446 = -1LL;
int8_t x447 = INT8_MAX;
int16_t x451 = INT16_MIN;
volatile uint16_t x460 = 25U;
int32_t t109 = 7140;
uint32_t x468 = UINT32_MAX;
uint8_t x474 = 57U;
static volatile uint16_t x478 = 6U;
int8_t x484 = INT8_MIN;
uint64_t x486 = 231592LLU;
volatile uint64_t x489 = UINT64_MAX;
volatile int8_t x490 = -5;
int64_t x491 = -2227935045310165LL;
int64_t t118 = 10463859549324LL;
int32_t x497 = INT32_MAX;
int16_t x499 = INT16_MAX;
int64_t x500 = INT64_MAX;
uint32_t x502 = UINT32_MAX;
int64_t x503 = INT64_MAX;
volatile int64_t t120 = -597859344933LL;
static uint64_t x510 = 886075032560244037LLU;
volatile int8_t x512 = INT8_MIN;
static int32_t x513 = INT32_MIN;
uint64_t x514 = UINT64_MAX;
uint64_t t123 = 131980878832LLU;
uint32_t x520 = UINT32_MAX;
volatile int32_t t126 = 819272;
static int16_t x530 = INT16_MIN;
int8_t x533 = 7;
volatile int64_t t128 = -1387790022356LL;
uint64_t x546 = 15LLU;
uint8_t x549 = UINT8_MAX;
int16_t x551 = -1;
volatile int16_t x553 = 897;
int8_t x554 = INT8_MIN;
uint16_t x560 = 908U;
volatile int64_t x562 = INT64_MIN;
static int8_t x563 = -1;
volatile int64_t t136 = 3354859LL;
int16_t x570 = -1;
int8_t x575 = 60;
int64_t x582 = INT64_MIN;
int64_t x584 = INT64_MIN;
uint16_t x587 = 477U;
int16_t x592 = INT16_MAX;
static volatile int64_t x594 = INT64_MIN;
static uint8_t x596 = 4U;
int64_t x602 = 47LL;
volatile uint64_t x607 = UINT64_MAX;
static uint64_t x613 = UINT64_MAX;
volatile int8_t x617 = 2;
int64_t x618 = INT64_MIN;
int32_t t149 = -8;
volatile int32_t x625 = -1;
int8_t x626 = INT8_MIN;
int32_t t152 = -63;
volatile int32_t x639 = -1;
int32_t x640 = -1;
static int64_t t153 = -833LL;
static uint16_t x644 = 733U;
uint64_t x653 = 35003199789661LLU;
int64_t x655 = -71LL;
uint64_t t157 = 86836LLU;
static int16_t x657 = 2;
static volatile int16_t x662 = INT16_MIN;
volatile int8_t x663 = 5;
static volatile int64_t t160 = -581501963815039489LL;
volatile int64_t x669 = -1LL;
int8_t x672 = -1;
int64_t t161 = 12496LL;
int32_t x679 = -1;
int32_t x680 = INT32_MIN;
static volatile int32_t t163 = 866060615;
uint64_t x682 = 119818016172LLU;
int64_t x690 = -1LL;
int8_t x692 = -25;
uint32_t x694 = UINT32_MAX;
int32_t x695 = INT32_MAX;
volatile int64_t x703 = -145LL;
int16_t x704 = INT16_MIN;
int8_t x705 = INT8_MIN;
uint32_t x707 = UINT32_MAX;
volatile uint16_t x708 = UINT16_MAX;
uint8_t x709 = 0U;
uint8_t x712 = 15U;
static volatile int16_t x716 = INT16_MIN;
volatile uint64_t t172 = 34211910167531659LLU;
int64_t x717 = -1LL;
volatile uint8_t x719 = 5U;
volatile uint64_t t175 = 899238LLU;
volatile int8_t x731 = INT8_MAX;
int16_t x740 = -3285;
int32_t x741 = INT32_MIN;
int32_t x745 = -3;
uint64_t x751 = UINT64_MAX;
int32_t x754 = INT32_MIN;
volatile int64_t x772 = INT64_MIN;
static uint64_t t188 = 6378LLU;
static volatile uint32_t t190 = 14179U;
int8_t x790 = -14;
uint32_t x796 = UINT32_MAX;
uint64_t t193 = 6911941974180588422LLU;
int64_t x816 = INT64_MAX;


void f0(void) {
    	static int64_t x1 = 356597254236LL;
	volatile uint8_t x2 = 30U;
	static int8_t x4 = 30;
	int64_t t0 = -28131LL;

    t0 = (x1%(x2|(x3/x4)));

    if (t0 != 6LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -27;
	volatile uint8_t x6 = UINT8_MAX;
	int32_t x7 = INT32_MIN;
	int32_t x8 = -452903;
	static volatile int32_t t1 = 119792541;

    t1 = (x5%(x6|(x7/x8)));

    if (t1 != -27) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = -1347;
	int8_t x11 = INT8_MIN;
	volatile int32_t t2 = 539000656;

    t2 = (x9%(x10|(x11/x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	int32_t x14 = -2817;
	uint8_t x16 = 1U;
	volatile int64_t t3 = -64912LL;

    t3 = (x13%(x14|(x15/x16)));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 3875959U;
	int64_t x18 = 25LL;
	int8_t x20 = INT8_MAX;
	volatile int64_t t4 = 1154066495012237901LL;

    t4 = (x17%(x18|(x19/x20)));

    if (t4 != 9LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 5594393LLU;
	volatile int32_t x22 = -1;
	uint64_t x23 = 5871955915797497009LLU;
	uint16_t x24 = 367U;
	uint64_t t5 = 8643504898895LLU;

    t5 = (x21%(x22|(x23/x24)));

    if (t5 != 5594393LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x25 = 34473109322980LLU;
	static int64_t x26 = INT64_MAX;
	uint16_t x27 = 5439U;
	static uint64_t x28 = 454817526689226LLU;
	volatile uint64_t t6 = 3585518932LLU;

    t6 = (x25%(x26|(x27/x28)));

    if (t6 != 34473109322980LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	static int64_t x30 = INT64_MAX;
	uint8_t x31 = 1U;
	volatile int64_t t7 = -45234876186306349LL;

    t7 = (x29%(x30|(x31/x32)));

    if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = -1;
	int32_t x34 = INT32_MIN;
	volatile int32_t x35 = 84185207;
	volatile uint16_t x36 = UINT16_MAX;

    t8 = (x33%(x34|(x35/x36)));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	int64_t x38 = -1LL;
	volatile int16_t x39 = -1;
	uint64_t x40 = 49LLU;
	volatile uint64_t t9 = 207065142014124LLU;

    t9 = (x37%(x38|(x39/x40)));

    if (t9 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 55270LL;
	volatile int8_t x42 = INT8_MIN;
	int8_t x44 = INT8_MAX;
	volatile int64_t t10 = 8563157725959283LL;

    t10 = (x41%(x42|(x43/x44)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	static uint8_t x46 = 2U;
	static int16_t x47 = INT16_MAX;
	int64_t x48 = 1299LL;
	int64_t t11 = -216705457LL;

    t11 = (x45%(x46|(x47/x48)));

    if (t11 != -26LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	static int8_t x50 = INT8_MIN;
	uint8_t x51 = UINT8_MAX;
	uint8_t x52 = 41U;
	volatile int32_t t12 = -124975880;

    t12 = (x49%(x50|(x51/x52)));

    if (t12 != -6) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x54 = INT8_MIN;
	uint64_t x55 = 7LLU;
	int16_t x56 = INT16_MIN;
	uint64_t t13 = 67864484189LLU;

    t13 = (x53%(x54|(x55/x56)));

    if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -1;
	int64_t x58 = -1LL;
	int32_t x59 = INT32_MAX;
	static uint64_t x60 = UINT64_MAX;
	uint64_t t14 = 2479516LLU;

    t14 = (x57%(x58|(x59/x60)));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -9145;
	int32_t x62 = -1;
	int32_t x63 = -1;
	static uint32_t x64 = 54U;
	uint32_t t15 = 33U;

    t15 = (x61%(x62|(x63/x64)));

    if (t15 != 4294958151U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x66 = INT64_MAX;
	int32_t x68 = 2139;
	int64_t t16 = -3301021110579325779LL;

    t16 = (x65%(x66|(x67/x68)));

    if (t16 != -32768LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = 2;
	int16_t x70 = INT16_MAX;
	int16_t x71 = INT16_MAX;
	uint32_t x72 = 1110828U;
	volatile uint32_t t17 = 1071497332U;

    t17 = (x69%(x70|(x71/x72)));

    if (t17 != 2U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x74 = -15;
	int16_t x75 = INT16_MIN;
	int8_t x76 = -61;
	volatile int32_t t18 = -170545;

    t18 = (x73%(x74|(x75/x76)));

    if (t18 != 6) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	uint16_t x78 = UINT16_MAX;
	int8_t x79 = -20;
	int16_t x80 = 83;
	int64_t t19 = 3920LL;

    t19 = (x77%(x78|(x79/x80)));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x81 = INT8_MIN;
	int32_t x83 = 64769;
	int8_t x84 = -1;
	volatile int32_t t20 = -42;

    t20 = (x81%(x82|(x83/x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x85 = UINT32_MAX;
	uint64_t x86 = 439282LLU;
	int8_t x87 = INT8_MAX;
	int16_t x88 = INT16_MIN;

    t21 = (x85%(x86|(x87/x88)));

    if (t21 != 107181LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x91 = INT8_MAX;
	volatile int32_t x92 = -1101;
	static int32_t t22 = -5;

    t22 = (x89%(x90|(x91/x92)));

    if (t22 != -16) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = UINT8_MAX;
	static int16_t x94 = INT16_MIN;
	volatile int16_t x95 = -10866;
	static int32_t t23 = 129474;

    t23 = (x93%(x94|(x95/x96)));

    if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x101 = 1U;
	static volatile uint32_t x102 = 12U;
	volatile int32_t x104 = INT32_MAX;
	uint32_t t24 = 1U;

    t24 = (x101%(x102|(x103/x104)));

    if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x105 = -7;
	volatile int8_t x106 = 4;
	int8_t x107 = -3;
	static uint64_t x108 = 2079169805831385084LLU;
	volatile uint64_t t25 = 2755988LLU;

    t25 = (x105%(x106|(x107/x108)));

    if (t25 != 9LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x110 = 70U;
	uint64_t x111 = UINT64_MAX;
	uint64_t x112 = 1788052LLU;

    t26 = (x109%(x110|(x111/x112)));

    if (t26 != 10316660509451LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = -1;
	int32_t x115 = INT32_MIN;
	volatile uint64_t x116 = 3138280760571089706LLU;
	volatile uint64_t t27 = 255LLU;

    t27 = (x113%(x114|(x115/x116)));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x118 = 6U;
	uint64_t x119 = UINT64_MAX;
	volatile int8_t x120 = -1;
	volatile uint64_t t28 = 510818853484LLU;

    t28 = (x117%(x118|(x119/x120)));

    if (t28 != 4LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = INT64_MIN;
	int64_t x122 = INT64_MIN;
	volatile int16_t x123 = INT16_MIN;
	volatile int8_t x124 = INT8_MIN;
	volatile int64_t t29 = 31950LL;

    t29 = (x121%(x122|(x123/x124)));

    if (t29 != -256LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = INT32_MAX;
	uint16_t x126 = 1U;
	uint32_t x127 = 9220328U;
	int32_t x128 = INT32_MIN;
	uint32_t t30 = 1207926U;

    t30 = (x125%(x126|(x127/x128)));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x129 = 7202;
	int32_t x131 = 1;
	int8_t x132 = 2;
	int32_t t31 = 1;

    t31 = (x129%(x130|(x131/x132)));

    if (t31 != 7202) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = INT16_MIN;
	uint64_t x134 = 6196581LLU;
	int8_t x135 = 22;
	volatile uint32_t x136 = 16538U;
	uint64_t t32 = 1126801008051428LLU;

    t32 = (x133%(x134|(x135/x136)));

    if (t32 != 565145LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x137 = INT8_MIN;
	uint64_t x138 = 12793LLU;
	int8_t x140 = -4;
	static uint64_t t33 = 25091345258216060LLU;

    t33 = (x137%(x138|(x139/x140)));

    if (t33 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x141 = 0;
	int64_t x142 = INT64_MAX;
	static volatile uint64_t x144 = 66848LLU;
	uint64_t t34 = 9600802179527158LLU;

    t34 = (x141%(x142|(x143/x144)));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x145 = -1;
	int8_t x146 = INT8_MAX;
	volatile int32_t x147 = INT32_MAX;
	volatile uint64_t x148 = UINT64_MAX;

    t35 = (x145%(x146|(x147/x148)));

    if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x149 = INT16_MIN;
	uint32_t x150 = UINT32_MAX;
	int64_t x151 = INT64_MIN;
	volatile int64_t t36 = 3234356772LL;

    t36 = (x149%(x150|(x151/x152)));

    if (t36 != -32768LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint64_t x153 = 416530147136841436LLU;
	uint8_t x154 = UINT8_MAX;
	uint64_t x155 = 1254809365LLU;
	volatile uint64_t t37 = 0LLU;

    t37 = (x153%(x154|(x155/x156)));

    if (t37 != 46LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x157 = INT16_MIN;
	int16_t x159 = -1;
	uint32_t x160 = 405U;
	uint32_t t38 = 208599337U;

    t38 = (x157%(x158|(x159/x160)));

    if (t38 != 4294934528U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = INT16_MAX;
	uint16_t x163 = 21286U;

    t39 = (x161%(x162|(x163/x164)));

    if (t39 != 12753U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x165 = 1780886;
	int64_t x166 = -4424629867485216572LL;
	uint32_t x168 = 32045U;
	static int64_t t40 = -15216998LL;

    t40 = (x165%(x166|(x167/x168)));

    if (t40 != 1780886LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x169 = 15U;
	uint16_t x170 = 26739U;
	uint8_t x171 = UINT8_MAX;
	static volatile uint64_t x172 = 43150LLU;
	uint64_t t41 = 512795359LLU;

    t41 = (x169%(x170|(x171/x172)));

    if (t41 != 15LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x173 = INT64_MIN;
	int16_t x174 = INT16_MIN;
	uint64_t x176 = UINT64_MAX;
	static volatile uint64_t t42 = 9317729927183LLU;

    t42 = (x173%(x174|(x175/x176)));

    if (t42 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x177 = 7U;
	int64_t x178 = -105281800852LL;
	volatile int32_t x179 = INT32_MAX;
	static volatile int64_t t43 = 15152385024LL;

    t43 = (x177%(x178|(x179/x180)));

    if (t43 != 7LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x181 = INT32_MIN;
	uint8_t x182 = 19U;
	int16_t x183 = INT16_MIN;
	static uint32_t x184 = 2497U;
	uint32_t t44 = 13U;

    t44 = (x181%(x182|(x183/x184)));

    if (t44 != 855008U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x185 = 57;
	int32_t x186 = 49224;
	int16_t x187 = -8075;
	int32_t t45 = 25444;

    t45 = (x185%(x186|(x187/x188)));

    if (t45 != 57) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x194 = -516536204;
	int64_t x195 = INT64_MIN;
	uint32_t x196 = 226727U;
	volatile int64_t t46 = 12050578676LL;

    t46 = (x193%(x194|(x195/x196)));

    if (t46 != -16102918LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x197 = INT64_MIN;
	volatile int16_t x198 = 2;
	int16_t x199 = -11;
	int64_t x200 = INT64_MIN;
	volatile int64_t t47 = -6664372064LL;

    t47 = (x197%(x198|(x199/x200)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x201 = INT16_MIN;
	int16_t x202 = -4593;
	volatile uint64_t t48 = 126LLU;

    t48 = (x201%(x202|(x203/x204)));

    if (t48 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x206 = INT16_MAX;
	volatile int8_t x208 = INT8_MIN;
	static volatile int32_t t49 = -8981;

    t49 = (x205%(x206|(x207/x208)));

    if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x213 = INT32_MIN;
	volatile int8_t x215 = INT8_MIN;
	uint16_t x216 = 24U;
	volatile int32_t t50 = -1727545;

    t50 = (x213%(x214|(x215/x216)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x221 = UINT8_MAX;
	int8_t x223 = INT8_MIN;
	uint16_t x224 = 719U;
	static int64_t t51 = -259830495LL;

    t51 = (x221%(x222|(x223/x224)));

    if (t51 != 255LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x225 = -1;
	volatile uint32_t x226 = 347075202U;
	volatile int16_t x227 = -1;
	volatile uint32_t t52 = 1038810U;

    t52 = (x225%(x226|(x227/x228)));

    if (t52 != 130064871U) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x229 = INT32_MIN;
	uint16_t x230 = UINT16_MAX;
	static uint8_t x231 = 5U;
	int32_t t53 = 493430154;

    t53 = (x229%(x230|(x231/x232)));

    if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x234 = INT32_MIN;
	uint8_t x235 = 63U;
	volatile int16_t x236 = -351;
	static volatile int32_t t54 = 16107;

    t54 = (x233%(x234|(x235/x236)));

    if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x237 = INT64_MIN;
	int16_t x238 = 6;
	int64_t x239 = 13187583LL;
	volatile uint32_t x240 = 13336U;

    t55 = (x237%(x238|(x239/x240)));

    if (t55 != -8LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x241 = INT16_MIN;
	uint64_t x242 = UINT64_MAX;
	static uint64_t x243 = 2516LLU;

    t56 = (x241%(x242|(x243/x244)));

    if (t56 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x245 = INT64_MIN;
	volatile int8_t x246 = 1;
	static volatile int16_t x248 = INT16_MIN;
	static int64_t t57 = 17LL;

    t57 = (x245%(x246|(x247/x248)));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x251 = INT64_MAX;
	volatile int16_t x252 = INT16_MAX;
	static volatile int64_t t58 = -1LL;

    t58 = (x249%(x250|(x251/x252)));

    if (t58 != -8LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x254 = 3U;
	uint8_t x255 = UINT8_MAX;
	static int8_t x256 = INT8_MIN;
	volatile int32_t t59 = 2;

    t59 = (x253%(x254|(x255/x256)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x257 = 4;
	uint32_t x259 = UINT32_MAX;
	static uint32_t t60 = 103584U;

    t60 = (x257%(x258|(x259/x260)));

    if (t60 != 4U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x261 = UINT8_MAX;
	static int16_t x262 = INT16_MIN;
	int32_t x263 = -1813143;
	int32_t t61 = 303917;

    t61 = (x261%(x262|(x263/x264)));

    if (t61 != 12) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int8_t x265 = 8;
	uint8_t x266 = UINT8_MAX;
	int16_t x267 = INT16_MIN;
	static volatile uint64_t x268 = UINT64_MAX;

    t62 = (x265%(x266|(x267/x268)));

    if (t62 != 8LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x269 = 342906057U;
	int64_t x270 = INT64_MAX;
	static int32_t x271 = INT32_MIN;
	volatile int64_t t63 = -15420LL;

    t63 = (x269%(x270|(x271/x272)));

    if (t63 != 342906057LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x273 = UINT32_MAX;
	uint32_t x274 = 446672675U;
	int64_t x276 = INT64_MAX;
	int64_t t64 = -13345LL;

    t64 = (x273%(x274|(x275/x276)));

    if (t64 != 274913220LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x278 = -1;
	int32_t x279 = 38;
	int32_t x280 = -1;
	static int32_t t65 = -89;

    t65 = (x277%(x278|(x279/x280)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x281 = 53081328363838LLU;
	int64_t x282 = INT64_MIN;
	int64_t x283 = INT64_MIN;
	uint64_t t66 = 5191820502838LLU;

    t66 = (x281%(x282|(x283/x284)));

    if (t66 != 53081328363838LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x289 = 0U;
	int16_t x290 = 0;
	int32_t x291 = 11534;
	static uint32_t x292 = 701U;
	uint32_t t67 = 2U;

    t67 = (x289%(x290|(x291/x292)));

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x294 = -1;
	static int8_t x295 = -1;
	int32_t x296 = INT32_MAX;
	static int64_t t68 = -87885091327836LL;

    t68 = (x293%(x294|(x295/x296)));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x297 = 3936136048037LLU;
	static uint8_t x299 = UINT8_MAX;

    t69 = (x297%(x298|(x299/x300)));

    if (t69 != 3936136048037LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x302 = UINT16_MAX;
	static int32_t x303 = -947;
	static int8_t x304 = 15;
	static uint64_t t70 = 43477039LLU;

    t70 = (x301%(x302|(x303/x304)));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x305 = 22264;
	int8_t x307 = INT8_MAX;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t71 = 29;

    t71 = (x305%(x306|(x307/x308)));

    if (t71 != 120) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x309 = 0;
	static int16_t x310 = INT16_MAX;
	int16_t x311 = INT16_MIN;
	int32_t x312 = 66651093;
	int32_t t72 = -3624;

    t72 = (x309%(x310|(x311/x312)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x314 = 123422563655LL;
	uint32_t x315 = 874U;
	volatile int16_t x316 = INT16_MIN;
	static int64_t t73 = 10333893LL;

    t73 = (x313%(x314|(x315/x316)));

    if (t73 != 255LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x317 = -1;
	static uint16_t x319 = 422U;
	volatile uint32_t x320 = 79854U;
	static uint32_t t74 = 15638152U;

    t74 = (x317%(x318|(x319/x320)));

    if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x321 = 1869U;
	int16_t x322 = 22;
	int32_t x323 = INT32_MIN;
	volatile int32_t t75 = -8201470;

    t75 = (x321%(x322|(x323/x324)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x326 = 3U;
	volatile int16_t x327 = INT16_MIN;
	volatile int64_t x328 = 6LL;
	uint64_t t76 = 177LLU;

    t76 = (x325%(x326|(x327/x328)));

    if (t76 != 3278409114312818LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x329 = INT8_MIN;
	int8_t x331 = INT8_MIN;
	static int8_t x332 = INT8_MAX;

    t77 = (x329%(x330|(x331/x332)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x333 = INT8_MAX;
	int32_t x334 = -1;
	static int32_t t78 = -952193083;

    t78 = (x333%(x334|(x335/x336)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int8_t x339 = INT8_MIN;
	int32_t x340 = INT32_MIN;
	volatile int32_t t79 = 1484;

    t79 = (x337%(x338|(x339/x340)));

    if (t79 != 183996880) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x342 = -1;
	int32_t x343 = -1;

    t80 = (x341%(x342|(x343/x344)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x345 = 180U;
	volatile uint64_t x346 = UINT64_MAX;
	int16_t x347 = 334;
	volatile int32_t x348 = INT32_MIN;

    t81 = (x345%(x346|(x347/x348)));

    if (t81 != 180LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x349 = -1;
	volatile int64_t x350 = 340521144450LL;
	int16_t x351 = INT16_MIN;
	static int32_t x352 = INT32_MIN;
	static int64_t t82 = 28671643875598621LL;

    t82 = (x349%(x350|(x351/x352)));

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x353 = INT64_MIN;
	int32_t x354 = INT32_MAX;
	static int16_t x356 = -476;
	uint64_t t83 = 55273LLU;

    t83 = (x353%(x354|(x355/x356)));

    if (t83 != 2LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x357 = INT32_MIN;
	volatile int16_t x358 = -23;
	static int64_t x359 = INT64_MAX;
	volatile int64_t x360 = -1824LL;
	volatile int64_t t84 = -420LL;

    t84 = (x357%(x358|(x359/x360)));

    if (t84 != -2LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x362 = INT8_MIN;
	static int16_t x364 = -1;
	volatile int32_t t85 = 5;

    t85 = (x361%(x362|(x363/x364)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x365 = INT64_MIN;
	uint16_t x366 = 9036U;
	uint16_t x367 = UINT16_MAX;
	static uint8_t x368 = 74U;
	volatile int64_t t86 = 2308115158481354LL;

    t86 = (x365%(x366|(x367/x368)));

    if (t86 != -5753LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x369 = 162LL;
	volatile uint16_t x370 = 30226U;
	static int8_t x371 = INT8_MIN;
	int8_t x372 = -1;

    t87 = (x369%(x370|(x371/x372)));

    if (t87 != 162LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x373 = 14U;
	int64_t x374 = INT64_MIN;
	uint32_t x375 = 16060801U;
	uint8_t x376 = 77U;
	int64_t t88 = 187190447971411110LL;

    t88 = (x373%(x374|(x375/x376)));

    if (t88 != 14LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x377 = INT32_MAX;
	uint64_t x378 = 185831413849LLU;
	int16_t x379 = -4;
	uint64_t x380 = 1031442896888654244LLU;
	volatile uint64_t t89 = 802LLU;

    t89 = (x377%(x378|(x379/x380)));

    if (t89 != 2147483647LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x381 = 260231980121680904LLU;
	uint8_t x382 = 63U;
	static int8_t x383 = INT8_MIN;
	uint64_t t90 = 13073LLU;

    t90 = (x381%(x382|(x383/x384)));

    if (t90 != 8LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x385 = UINT8_MAX;
	int32_t x386 = -1;
	int8_t x387 = INT8_MIN;
	static uint8_t x388 = UINT8_MAX;
	volatile int32_t t91 = 35;

    t91 = (x385%(x386|(x387/x388)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x389 = UINT8_MAX;
	int32_t x392 = INT32_MIN;
	volatile int32_t t92 = -31684;

    t92 = (x389%(x390|(x391/x392)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x393 = -53831098082620599LL;
	static int8_t x394 = INT8_MAX;
	static volatile uint64_t x395 = UINT64_MAX;
	static uint32_t x396 = UINT32_MAX;
	static volatile uint64_t t93 = 6786391378685611LLU;

    t93 = (x393%(x394|(x395/x396)));

    if (t93 != 667621297LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x398 = -1;
	int16_t x399 = INT16_MIN;
	uint16_t x400 = 356U;
	int32_t t94 = 744362;

    t94 = (x397%(x398|(x399/x400)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x401 = 2113346996592LLU;
	static uint32_t x402 = UINT32_MAX;
	uint16_t x403 = 13U;
	static volatile int16_t x404 = -1;
	uint64_t t95 = 4816457593420917LLU;

    t95 = (x401%(x402|(x403/x404)));

    if (t95 != 223087452LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x405 = 313;
	volatile uint32_t x407 = UINT32_MAX;
	uint16_t x408 = 24U;
	volatile int64_t t96 = -30377482308LL;

    t96 = (x405%(x406|(x407/x408)));

    if (t96 != 313LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x409 = 3U;
	int64_t x410 = 2530816LL;
	int32_t x411 = INT32_MAX;
	int64_t t97 = 4495925916899254LL;

    t97 = (x409%(x410|(x411/x412)));

    if (t97 != 3LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x413 = 0LLU;
	int32_t x414 = INT32_MAX;
	static int32_t x415 = -1;
	uint16_t x416 = UINT16_MAX;

    t98 = (x413%(x414|(x415/x416)));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x417 = INT32_MAX;

    t99 = (x417%(x418|(x419/x420)));

    if (t99 != INT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x421 = 25U;
	uint32_t x422 = 87675U;
	int32_t x423 = 1;
	static volatile int8_t x424 = -3;
	static uint32_t t100 = 22693198U;

    t100 = (x421%(x422|(x423/x424)));

    if (t100 != 25U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x428 = 12763;
	volatile int64_t t101 = -175285LL;

    t101 = (x425%(x426|(x427/x428)));

    if (t101 != 96LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x429 = -7818156286978016LL;
	int32_t x430 = INT32_MIN;
	volatile int32_t x431 = -1;
	static volatile int64_t t102 = -281284875123826LL;

    t102 = (x429%(x430|(x431/x432)));

    if (t102 != -1548265440LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x433 = -1;
	volatile int32_t x434 = -1;
	static int16_t x435 = -1;
	volatile int8_t x436 = -1;
	int32_t t103 = -229044;

    t103 = (x433%(x434|(x435/x436)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x437 = 13U;
	int16_t x438 = -1;
	static int32_t x439 = INT32_MIN;
	int8_t x440 = INT8_MIN;
	volatile int32_t t104 = -1037958670;

    t104 = (x437%(x438|(x439/x440)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x441 = 3U;
	uint16_t x442 = 26064U;
	volatile uint64_t t105 = 60115141821534728LLU;

    t105 = (x441%(x442|(x443/x444)));

    if (t105 != 3LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x448 = -25;
	int64_t t106 = 7LL;

    t106 = (x445%(x446|(x447/x448)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x449 = 944;
	int32_t x450 = INT32_MIN;
	static volatile int32_t x452 = INT32_MAX;
	volatile int32_t t107 = 8995;

    t107 = (x449%(x450|(x451/x452)));

    if (t107 != 944) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x453 = 1648U;
	int16_t x454 = INT16_MAX;
	int16_t x455 = -15;
	int64_t x456 = -12767913736LL;
	volatile int64_t t108 = -3574LL;

    t108 = (x453%(x454|(x455/x456)));

    if (t108 != 1648LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x457 = INT16_MAX;
	static int32_t x458 = INT32_MIN;
	int16_t x459 = -15480;

    t109 = (x457%(x458|(x459/x460)));

    if (t109 != 579) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x461 = UINT8_MAX;
	static uint8_t x462 = 75U;
	volatile uint32_t x463 = 13652952U;
	uint8_t x464 = UINT8_MAX;
	volatile uint32_t t110 = 1023862U;

    t110 = (x461%(x462|(x463/x464)));

    if (t110 != 255U) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x465 = -267873922014701728LL;
	uint32_t x466 = UINT32_MAX;
	static uint8_t x467 = 50U;
	int64_t t111 = 2376108LL;

    t111 = (x465%(x466|(x467/x468)));

    if (t111 != -2986251913LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x469 = 2213684069829867797LLU;
	uint64_t x470 = 892327130184921422LLU;
	uint8_t x471 = 57U;
	uint32_t x472 = 14710611U;
	static uint64_t t112 = 1007029673515LLU;

    t112 = (x469%(x470|(x471/x472)));

    if (t112 != 429029809460024953LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x473 = INT32_MIN;
	int32_t x475 = -1;
	volatile int16_t x476 = -1;
	int32_t t113 = -690254126;

    t113 = (x473%(x474|(x475/x476)));

    if (t113 != -41) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x477 = -1LL;
	int8_t x479 = INT8_MAX;
	volatile uint64_t x480 = 116161772108LLU;
	uint64_t t114 = 7970489585LLU;

    t114 = (x477%(x478|(x479/x480)));

    if (t114 != 3LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x481 = -4;
	int64_t x482 = -2148090480288078470LL;
	uint8_t x483 = UINT8_MAX;
	volatile int64_t t115 = 3869545LL;

    t115 = (x481%(x482|(x483/x484)));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x485 = UINT32_MAX;
	uint8_t x487 = 24U;
	int8_t x488 = INT8_MIN;
	static uint64_t t116 = 34LLU;

    t116 = (x485%(x486|(x487/x488)));

    if (t116 != 93655LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x492 = INT16_MIN;
	static volatile uint64_t t117 = 9583556691644LLU;

    t117 = (x489%(x490|(x491/x492)));

    if (t117 != 4LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x493 = -1;
	volatile uint32_t x494 = UINT32_MAX;
	int64_t x495 = -1LL;
	int8_t x496 = -20;

    t118 = (x493%(x494|(x495/x496)));

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x498 = -2510271606804573LL;
	static volatile int64_t t119 = -427857210791691LL;

    t119 = (x497%(x498|(x499/x500)));

    if (t119 != 2147483647LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x501 = -1;
	static uint8_t x504 = 2U;

    t120 = (x501%(x502|(x503/x504)));

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x505 = -1LL;
	int8_t x506 = -12;
	volatile uint64_t x507 = 415360LLU;
	static uint8_t x508 = UINT8_MAX;
	uint64_t t121 = 47LLU;

    t121 = (x505%(x506|(x507/x508)));

    if (t121 != 3LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x509 = 4U;
	int16_t x511 = 10;
	uint64_t t122 = 1LLU;

    t122 = (x509%(x510|(x511/x512)));

    if (t122 != 4LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x515 = 3;
	static uint16_t x516 = UINT16_MAX;

    t123 = (x513%(x514|(x515/x516)));

    if (t123 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x517 = -7;
	uint8_t x518 = UINT8_MAX;
	int32_t x519 = INT32_MIN;
	uint32_t t124 = 243963695U;

    t124 = (x517%(x518|(x519/x520)));

    if (t124 != 249U) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x521 = INT32_MIN;
	uint16_t x522 = UINT16_MAX;
	int64_t x523 = -43LL;
	int16_t x524 = INT16_MIN;
	static volatile int64_t t125 = 5348466640517226LL;

    t125 = (x521%(x522|(x523/x524)));

    if (t125 != -32768LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x525 = 1;
	int32_t x526 = 69102;
	uint8_t x527 = UINT8_MAX;
	volatile int32_t x528 = 284848;

    t126 = (x525%(x526|(x527/x528)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x529 = -1;
	volatile uint32_t x531 = UINT32_MAX;
	volatile uint16_t x532 = 182U;
	uint32_t t127 = 238845U;

    t127 = (x529%(x530|(x531/x532)));

    if (t127 != 27006U) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x534 = -1;
	int32_t x535 = 50;
	volatile int64_t x536 = INT64_MIN;

    t128 = (x533%(x534|(x535/x536)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x537 = 745;
	int64_t x538 = INT64_MAX;
	int32_t x539 = INT32_MAX;
	static int8_t x540 = -1;
	int64_t t129 = -30172294901308LL;

    t129 = (x537%(x538|(x539/x540)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x541 = INT32_MAX;
	int16_t x542 = INT16_MIN;
	int8_t x543 = 0;
	static int8_t x544 = 2;
	volatile int32_t t130 = 15;

    t130 = (x541%(x542|(x543/x544)));

    if (t130 != 32767) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x545 = INT8_MAX;
	static uint8_t x547 = 1U;
	uint64_t x548 = 7119597735311004472LLU;
	volatile uint64_t t131 = 3459602436LLU;

    t131 = (x545%(x546|(x547/x548)));

    if (t131 != 7LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x550 = UINT16_MAX;
	static volatile int8_t x552 = INT8_MIN;
	static volatile int32_t t132 = -201429144;

    t132 = (x549%(x550|(x551/x552)));

    if (t132 != 255) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x555 = INT8_MAX;
	int16_t x556 = INT16_MAX;
	volatile int32_t t133 = 4;

    t133 = (x553%(x554|(x555/x556)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x557 = UINT16_MAX;
	static int64_t x558 = INT64_MIN;
	static uint32_t x559 = 1622818280U;
	volatile int64_t t134 = 385056LL;

    t134 = (x557%(x558|(x559/x560)));

    if (t134 != 65535LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x561 = 4831082LL;
	int64_t x564 = INT64_MIN;
	int64_t t135 = 4035LL;

    t135 = (x561%(x562|(x563/x564)));

    if (t135 != 4831082LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x565 = 15820343;
	int64_t x566 = -1LL;
	static uint16_t x567 = UINT16_MAX;
	uint8_t x568 = UINT8_MAX;

    t136 = (x565%(x566|(x567/x568)));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x569 = UINT32_MAX;
	int32_t x571 = INT32_MIN;
	uint64_t x572 = 37LLU;
	uint64_t t137 = 14LLU;

    t137 = (x569%(x570|(x571/x572)));

    if (t137 != 4294967295LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x573 = 7237U;
	volatile int16_t x574 = INT16_MAX;
	int16_t x576 = 121;
	int32_t t138 = 1908;

    t138 = (x573%(x574|(x575/x576)));

    if (t138 != 7237) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x577 = INT64_MAX;
	static int32_t x578 = -2966479;
	uint8_t x579 = 1U;
	uint32_t x580 = UINT32_MAX;
	volatile int64_t t139 = 24585LL;

    t139 = (x577%(x578|(x579/x580)));

    if (t139 != 2843991703LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x581 = -1LL;
	uint16_t x583 = 0U;
	int64_t t140 = 62843894163440997LL;

    t140 = (x581%(x582|(x583/x584)));

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x585 = 65257U;
	int16_t x586 = -312;
	volatile uint32_t x588 = 595423457U;
	uint32_t t141 = 0U;

    t141 = (x585%(x586|(x587/x588)));

    if (t141 != 65257U) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x589 = UINT8_MAX;
	volatile int16_t x590 = INT16_MIN;
	uint32_t x591 = 8190512U;
	volatile uint32_t t142 = 12445999U;

    t142 = (x589%(x590|(x591/x592)));

    if (t142 != 255U) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int8_t x593 = -52;
	int8_t x595 = -1;
	int64_t t143 = 1258995LL;

    t143 = (x593%(x594|(x595/x596)));

    if (t143 != -52LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x597 = INT16_MIN;
	static int8_t x598 = INT8_MIN;
	static int16_t x599 = -107;
	static volatile int32_t x600 = INT32_MAX;
	volatile int32_t t144 = -124;

    t144 = (x597%(x598|(x599/x600)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x601 = INT32_MIN;
	uint16_t x603 = 147U;
	volatile int64_t x604 = 24553412LL;
	volatile int64_t t145 = -682411LL;

    t145 = (x601%(x602|(x603/x604)));

    if (t145 != -21LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x605 = -1;
	uint32_t x606 = 1U;
	uint16_t x608 = 75U;
	uint64_t t146 = 78455985758907203LLU;

    t146 = (x605%(x606|(x607/x608)));

    if (t146 != 245956587649460629LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x614 = 181997;
	int32_t x615 = INT32_MIN;
	int32_t x616 = -389897307;
	volatile uint64_t t147 = 6153240LLU;

    t147 = (x613%(x614|(x615/x616)));

    if (t147 != 59302LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x619 = 1;
	static int16_t x620 = INT16_MIN;
	int64_t t148 = -667442073322LL;

    t148 = (x617%(x618|(x619/x620)));

    if (t148 != 2LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x621 = UINT16_MAX;
	int16_t x622 = -1;
	int16_t x623 = INT16_MIN;
	static volatile int16_t x624 = INT16_MAX;

    t149 = (x621%(x622|(x623/x624)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x627 = 492318487584786LLU;
	int16_t x628 = INT16_MIN;
	static uint64_t t150 = 2211672LLU;

    t150 = (x625%(x626|(x627/x628)));

    if (t150 != 127LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x629 = 1750511LLU;
	int8_t x630 = INT8_MAX;
	static int32_t x631 = -1;
	int64_t x632 = INT64_MIN;
	volatile uint64_t t151 = 36505280059511194LLU;

    t151 = (x629%(x630|(x631/x632)));

    if (t151 != 70LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x633 = 1;
	int8_t x634 = 13;
	uint16_t x635 = UINT16_MAX;
	volatile uint8_t x636 = UINT8_MAX;

    t152 = (x633%(x634|(x635/x636)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x637 = INT16_MAX;
	int64_t x638 = -1LL;

    t153 = (x637%(x638|(x639/x640)));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x641 = UINT64_MAX;
	static int32_t x642 = -1;
	static uint8_t x643 = 5U;
	static uint64_t t154 = 4333312229401LLU;

    t154 = (x641%(x642|(x643/x644)));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x645 = 0U;
	volatile uint16_t x646 = 22316U;
	int64_t x647 = INT64_MIN;
	int32_t x648 = 399262;
	volatile int64_t t155 = -130479718LL;

    t155 = (x645%(x646|(x647/x648)));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x649 = 6372;
	int64_t x650 = 34034LL;
	volatile int64_t x651 = INT64_MIN;
	uint32_t x652 = UINT32_MAX;
	volatile int64_t t156 = 39740LL;

    t156 = (x649%(x650|(x651/x652)));

    if (t156 != 6372LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x654 = UINT8_MAX;
	int64_t x656 = INT64_MAX;

    t157 = (x653%(x654|(x655/x656)));

    if (t157 != 136LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x658 = 3;
	int64_t x659 = -1LL;
	uint16_t x660 = 39U;
	volatile int64_t t158 = -3712634344LL;

    t158 = (x657%(x658|(x659/x660)));

    if (t158 != 2LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x661 = INT16_MIN;
	int16_t x664 = 1;
	int32_t t159 = 2287;

    t159 = (x661%(x662|(x663/x664)));

    if (t159 != -5) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x665 = 43U;
	uint16_t x666 = UINT16_MAX;
	uint32_t x667 = 22319734U;
	volatile int64_t x668 = 15248908838023LL;

    t160 = (x665%(x666|(x667/x668)));

    if (t160 != 43LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x670 = 6U;
	uint32_t x671 = 668U;

    t161 = (x669%(x670|(x671/x672)));

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x673 = INT32_MIN;
	static int64_t x674 = 901662LL;
	volatile int16_t x675 = 7730;
	static int16_t x676 = INT16_MIN;
	int64_t t162 = -13LL;

    t162 = (x673%(x674|(x675/x676)));

    if (t162 != -626426LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x677 = INT8_MIN;
	uint16_t x678 = UINT16_MAX;

    t163 = (x677%(x678|(x679/x680)));

    if (t163 != -128) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x681 = UINT64_MAX;
	int8_t x683 = INT8_MIN;
	int16_t x684 = INT16_MAX;
	uint64_t t164 = 2LLU;

    t164 = (x681%(x682|(x683/x684)));

    if (t164 != 118899524103LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x685 = INT16_MAX;
	int8_t x686 = -3;
	int32_t x687 = INT32_MIN;
	int8_t x688 = -14;
	volatile int32_t t165 = -15;

    t165 = (x685%(x686|(x687/x688)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x689 = 22669;
	int8_t x691 = -1;
	static int64_t t166 = 100407LL;

    t166 = (x689%(x690|(x691/x692)));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x693 = -1;
	uint8_t x696 = UINT8_MAX;
	volatile uint32_t t167 = 407582U;

    t167 = (x693%(x694|(x695/x696)));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x697 = INT16_MIN;
	static volatile uint16_t x698 = UINT16_MAX;
	uint16_t x699 = 32692U;
	int32_t x700 = -968;
	static int32_t t168 = 32577964;

    t168 = (x697%(x698|(x699/x700)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x701 = INT32_MIN;
	int64_t x702 = -1982LL;
	volatile int64_t t169 = -2114267781728680258LL;

    t169 = (x701%(x702|(x703/x704)));

    if (t169 != -522LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x706 = -4;
	volatile uint32_t t170 = 445U;

    t170 = (x705%(x706|(x707/x708)));

    if (t170 != 4294967168U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x710 = 7945500649223699LL;
	uint8_t x711 = 40U;
	int64_t t171 = 1172168113400974359LL;

    t171 = (x709%(x710|(x711/x712)));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x713 = -1;
	uint64_t x714 = UINT64_MAX;
	uint8_t x715 = 111U;

    t172 = (x713%(x714|(x715/x716)));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x718 = 16458U;
	int64_t x720 = INT64_MIN;
	int64_t t173 = -34660790086704LL;

    t173 = (x717%(x718|(x719/x720)));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x721 = -1;
	uint64_t x722 = UINT64_MAX;
	int32_t x723 = -1;
	uint64_t x724 = 14895428406214337LLU;
	volatile uint64_t t174 = 22900013461997134LLU;

    t174 = (x721%(x722|(x723/x724)));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x725 = INT64_MIN;
	uint64_t x726 = UINT64_MAX;
	volatile int64_t x727 = INT64_MAX;
	int16_t x728 = INT16_MAX;

    t175 = (x725%(x726|(x727/x728)));

    if (t175 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x729 = 399839;
	uint8_t x730 = 3U;
	int8_t x732 = INT8_MIN;
	static volatile int32_t t176 = -55546;

    t176 = (x729%(x730|(x731/x732)));

    if (t176 != 2) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x733 = -1;
	int16_t x734 = -12;
	static int32_t x735 = INT32_MIN;
	int64_t x736 = -1LL;
	static int64_t t177 = 845045197474605291LL;

    t177 = (x733%(x734|(x735/x736)));

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x737 = INT8_MIN;
	static volatile uint64_t x738 = 2092055287102138LLU;
	uint32_t x739 = 1U;
	static volatile uint64_t t178 = 120738335049804LLU;

    t178 = (x737%(x738|(x739/x740)));

    if (t178 != 1092607330000742LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x742 = -13;
	int8_t x743 = INT8_MIN;
	static int16_t x744 = INT16_MAX;
	volatile int32_t t179 = -35;

    t179 = (x741%(x742|(x743/x744)));

    if (t179 != -11) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x746 = 50U;
	int8_t x747 = INT8_MAX;
	uint16_t x748 = 31U;
	volatile int32_t t180 = 2798790;

    t180 = (x745%(x746|(x747/x748)));

    if (t180 != -3) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x749 = 47;
	static uint16_t x750 = UINT16_MAX;
	volatile int32_t x752 = -16;
	static uint64_t t181 = 319LLU;

    t181 = (x749%(x750|(x751/x752)));

    if (t181 != 47LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x753 = UINT32_MAX;
	volatile uint32_t x755 = 895805342U;
	int32_t x756 = INT32_MAX;
	uint32_t t182 = 152526138U;

    t182 = (x753%(x754|(x755/x756)));

    if (t182 != 2147483647U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x757 = INT64_MAX;
	uint64_t x758 = 815471502542LLU;
	static uint16_t x759 = 19U;
	volatile int8_t x760 = INT8_MIN;
	volatile uint64_t t183 = 254LLU;

    t183 = (x757%(x758|(x759/x760)));

    if (t183 != 363198043273LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x761 = -4;
	int16_t x762 = -1;
	static volatile int8_t x763 = -1;
	uint64_t x764 = UINT64_MAX;
	uint64_t t184 = 723LLU;

    t184 = (x761%(x762|(x763/x764)));

    if (t184 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x765 = 0LL;
	static volatile int16_t x766 = -1;
	int16_t x767 = INT16_MIN;
	uint64_t x768 = 121404569LLU;
	uint64_t t185 = 283079966113251765LLU;

    t185 = (x765%(x766|(x767/x768)));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x769 = INT16_MIN;
	static int8_t x770 = INT8_MAX;
	uint32_t x771 = UINT32_MAX;
	int64_t t186 = -32191995LL;

    t186 = (x769%(x770|(x771/x772)));

    if (t186 != -2LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x773 = INT64_MAX;
	static uint64_t x774 = UINT64_MAX;
	static uint16_t x775 = UINT16_MAX;
	uint16_t x776 = UINT16_MAX;
	volatile uint64_t t187 = 5591688LLU;

    t187 = (x773%(x774|(x775/x776)));

    if (t187 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x777 = 3U;
	uint64_t x778 = 80LLU;
	uint64_t x779 = UINT64_MAX;
	static volatile int32_t x780 = -9607767;

    t188 = (x777%(x778|(x779/x780)));

    if (t188 != 3LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x781 = -1138967176009713032LL;
	uint8_t x782 = 17U;
	uint32_t x783 = 2U;
	uint32_t x784 = UINT32_MAX;
	static int64_t t189 = -1LL;

    t189 = (x781%(x782|(x783/x784)));

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x785 = -485361077;
	int8_t x786 = INT8_MIN;
	volatile uint32_t x787 = 0U;
	static int8_t x788 = INT8_MIN;

    t190 = (x785%(x786|(x787/x788)));

    if (t190 != 3809606219U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x789 = INT8_MIN;
	static int16_t x791 = -1;
	volatile int32_t x792 = 29865713;
	volatile int32_t t191 = 1;

    t191 = (x789%(x790|(x791/x792)));

    if (t191 != -2) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x793 = INT8_MIN;
	volatile int32_t x794 = -50894232;
	uint64_t x795 = 33968295538087LLU;
	volatile uint64_t t192 = 14339396133992LLU;

    t192 = (x793%(x794|(x795/x796)));

    if (t192 != 50888852LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x797 = INT16_MIN;
	static int8_t x798 = -4;
	uint8_t x799 = UINT8_MAX;
	static uint64_t x800 = 793272539293LLU;

    t193 = (x797%(x798|(x799/x800)));

    if (t193 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x801 = 1006902;
	volatile int64_t x802 = INT64_MIN;
	uint16_t x803 = 2817U;
	volatile int8_t x804 = 1;
	volatile int64_t t194 = -48588LL;

    t194 = (x801%(x802|(x803/x804)));

    if (t194 != 1006902LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x805 = 2316993U;
	uint8_t x806 = UINT8_MAX;
	volatile int16_t x807 = INT16_MIN;
	static volatile int64_t x808 = INT64_MAX;
	int64_t t195 = -817793411748027LL;

    t195 = (x805%(x806|(x807/x808)));

    if (t195 != 63LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x809 = -1;
	int32_t x810 = -1;
	int16_t x811 = INT16_MIN;
	volatile uint8_t x812 = UINT8_MAX;
	volatile int32_t t196 = -679371;

    t196 = (x809%(x810|(x811/x812)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x813 = -1;
	int16_t x814 = INT16_MAX;
	uint64_t x815 = UINT64_MAX;
	uint64_t t197 = 65162934LLU;

    t197 = (x813%(x814|(x815/x816)));

    if (t197 != 15LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x817 = -27;
	uint16_t x818 = 4U;
	int32_t x819 = -1;
	static uint16_t x820 = UINT16_MAX;
	int32_t t198 = 7115779;

    t198 = (x817%(x818|(x819/x820)));

    if (t198 != -3) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x821 = INT16_MIN;
	volatile int16_t x822 = INT16_MAX;
	int32_t x823 = INT32_MAX;
	static uint64_t x824 = 54171688927075590LLU;
	volatile uint64_t t199 = 16174LLU;

    t199 = (x821%(x822|(x823/x824)));

    if (t199 != 15LLU) { NG(); } else { ; }
	
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

