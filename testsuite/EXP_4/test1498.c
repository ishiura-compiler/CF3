
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

static int16_t x4 = -1;
int32_t x7 = INT32_MAX;
volatile int64_t x9 = INT64_MAX;
static int64_t t2 = INT64_MAX;
uint32_t x15 = 52U;
int16_t x16 = INT16_MIN;
int8_t x18 = 1;
static int64_t x19 = INT64_MAX;
volatile int16_t x26 = INT16_MIN;
static uint32_t x27 = UINT32_MAX;
volatile uint64_t x38 = UINT64_MAX;
volatile int8_t x40 = INT8_MIN;
int64_t x41 = INT64_MIN;
volatile int64_t t10 = 5617790343LL;
static int32_t x45 = INT32_MAX;
int8_t x46 = INT8_MIN;
volatile int32_t t11 = INT32_MAX;
int64_t x49 = INT64_MIN;
int64_t x57 = INT64_MIN;
volatile uint16_t x63 = UINT16_MAX;
uint16_t x67 = UINT16_MAX;
volatile int32_t t17 = 8648;
int32_t x74 = -1;
volatile int16_t x75 = 1;
static uint8_t x77 = UINT8_MAX;
int64_t x78 = INT64_MIN;
int32_t t19 = -9938;
volatile uint64_t x82 = 30271638367LLU;
static int64_t x90 = INT64_MIN;
static int64_t t22 = INT64_MIN;
int8_t x101 = INT8_MIN;
volatile int8_t x103 = -1;
static volatile int32_t t25 = 1230;
static int32_t t26 = 41;
int16_t x110 = -8889;
static int16_t x112 = -1;
uint16_t x120 = 12U;
uint64_t x124 = UINT64_MAX;
int64_t x129 = INT64_MAX;
int16_t x130 = -1;
static int16_t x131 = INT16_MIN;
int8_t x143 = INT8_MAX;
int32_t x144 = INT32_MIN;
static uint8_t x150 = 12U;
static int16_t x152 = -694;
volatile int8_t x155 = INT8_MAX;
static int32_t x163 = INT32_MIN;
uint16_t x164 = 24018U;
int32_t x166 = INT32_MAX;
volatile int64_t x168 = INT64_MIN;
uint8_t x169 = 7U;
static int32_t t42 = 31136847;
int16_t x193 = INT16_MIN;
static int32_t x196 = INT32_MAX;
static int32_t x199 = 1;
int16_t x200 = INT16_MIN;
int32_t x203 = INT32_MIN;
volatile int32_t t51 = -2908;
static int32_t t54 = INT32_MAX;
int32_t x224 = -1;
volatile int32_t t55 = INT32_MIN;
int64_t x227 = INT64_MIN;
int32_t x232 = INT32_MIN;
volatile uint8_t x238 = 0U;
volatile int32_t t60 = -6;
uint8_t x249 = 20U;
static int8_t x251 = INT8_MAX;
static int16_t x253 = INT16_MIN;
static int32_t x260 = INT32_MIN;
int64_t x263 = -1LL;
uint64_t x265 = 19366074703LLU;
int32_t x267 = INT32_MIN;
volatile int8_t x268 = INT8_MAX;
static volatile int64_t x270 = 75LL;
int64_t x274 = INT64_MIN;
int8_t x276 = INT8_MAX;
volatile int32_t t68 = -1274;
static volatile uint16_t x278 = UINT16_MAX;
int16_t x285 = -1;
volatile int32_t t74 = -2;
uint64_t x301 = 217LLU;
int16_t x302 = INT16_MIN;
int8_t x308 = INT8_MAX;
int16_t x316 = INT16_MAX;
uint8_t x335 = UINT8_MAX;
static int8_t x337 = 14;
volatile int32_t t84 = -5885422;
int64_t x346 = -12440750671134205LL;
int16_t x349 = -317;
static int8_t x360 = INT8_MIN;
volatile int32_t x363 = INT32_MIN;
volatile uint64_t x367 = UINT64_MAX;
int64_t x376 = INT64_MIN;
int64_t x379 = INT64_MIN;
int64_t x383 = 6597LL;
static int8_t x385 = INT8_MAX;
volatile int32_t t97 = -203726;
int64_t x404 = -60LL;
int8_t x407 = -1;
volatile int8_t x408 = INT8_MIN;
static uint64_t x414 = 235LLU;
static volatile uint32_t x415 = UINT32_MAX;
int16_t x420 = INT16_MAX;
volatile uint64_t x427 = 23842656368182908LLU;
int64_t x435 = -1LL;
volatile int64_t x437 = -37746657613838590LL;
uint64_t x440 = 3845759514LLU;
static volatile int32_t t110 = -62999;
volatile int32_t t111 = 4;
int16_t x450 = INT16_MIN;
static uint64_t x454 = 44708LLU;
int32_t x457 = 4019;
static int32_t x459 = -254;
int8_t x460 = 0;
uint16_t x467 = UINT16_MAX;
volatile uint8_t x468 = UINT8_MAX;
int32_t t116 = 46145;
uint16_t x471 = 324U;
int32_t x472 = INT32_MAX;
volatile int16_t x475 = -708;
static volatile int32_t x492 = INT32_MIN;
static int32_t t122 = INT32_MAX;
int64_t x495 = INT64_MIN;
volatile uint32_t x499 = 196664751U;
static int64_t x501 = 1924492273822LL;
static int32_t x502 = INT32_MIN;
volatile int32_t x503 = INT32_MIN;
int32_t t126 = 331;
int64_t x513 = INT64_MIN;
uint32_t x515 = 1659U;
static uint16_t x521 = UINT16_MAX;
int32_t t130 = -1;
static int64_t x526 = INT64_MIN;
uint16_t x528 = 1837U;
uint32_t x532 = 8U;
static uint8_t x538 = UINT8_MAX;
int8_t x541 = INT8_MIN;
int64_t x543 = INT64_MAX;
static uint16_t x546 = 8451U;
int16_t x549 = 0;
int16_t x550 = -2879;
static int32_t x556 = INT32_MAX;
uint16_t x558 = 1629U;
volatile int16_t x560 = -10549;
int64_t x562 = INT64_MAX;
static int64_t x563 = -1LL;
int16_t x567 = 4;
int64_t x576 = INT64_MIN;
volatile int64_t t143 = 187841LL;
int16_t x577 = INT16_MIN;
int32_t t144 = -1035;
int16_t x581 = 525;
int32_t t145 = -6055555;
int8_t x586 = INT8_MAX;
static uint32_t x590 = 14432U;
uint64_t x591 = 567851295062514139LLU;
uint16_t x597 = UINT16_MAX;
static int64_t x599 = -1LL;
int32_t x605 = 38425;
int16_t x612 = INT16_MIN;
int64_t x613 = -1LL;
int32_t x625 = -32239;
int32_t t156 = 486146188;
int64_t x629 = -24486971697LL;
static int64_t x632 = -24061LL;
int16_t x634 = -1;
int16_t x640 = INT16_MAX;
volatile int32_t t159 = 24304816;
volatile int8_t x642 = -1;
int64_t x645 = 80LL;
static int64_t x655 = INT64_MIN;
static volatile int8_t x681 = -1;
volatile int32_t x683 = -1;
volatile int32_t t170 = -102;
volatile int64_t x691 = INT64_MIN;
int32_t x703 = INT32_MIN;
int32_t x708 = 20;
uint64_t x710 = 157851102921LLU;
int32_t x712 = 1303004;
int8_t x714 = INT8_MIN;
int64_t x723 = 85030445015658968LL;
volatile uint8_t x727 = 6U;
volatile int8_t x730 = INT8_MIN;
static int8_t x732 = -1;
int8_t x744 = -8;
volatile int64_t t185 = -3792741302484LL;
int8_t x746 = INT8_MIN;
int16_t x747 = -1;
uint64_t t188 = 11787747LLU;
int64_t x758 = INT64_MAX;
volatile int32_t t189 = 178445006;
int64_t x763 = -1LL;
volatile int32_t t190 = 29;
int16_t x777 = INT16_MIN;
int32_t t194 = -7;
static int64_t x786 = 106991915LL;
int64_t x792 = -1LL;
int64_t t198 = INT64_MIN;


void f0(void) {
    	int16_t x1 = 5161;
	int64_t x2 = INT64_MIN;
	int16_t x3 = 5431;
	volatile int32_t t0 = -25752652;

    t0 = (x1^(x2>(x3==x4)));

    if (t0 != 5161) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 0U;
	static int16_t x6 = 1;
	int32_t x8 = INT32_MAX;
	volatile int32_t t1 = 71639691;

    t1 = (x5^(x6>(x7==x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x10 = INT16_MIN;
	static int8_t x11 = INT8_MAX;
	int64_t x12 = INT64_MIN;

    t2 = (x9^(x10>(x11==x12)));

    if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	volatile int32_t x14 = -1;
	int32_t t3 = INT32_MIN;

    t3 = (x13^(x14>(x15==x16)));

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = 1287753004834LL;
	int8_t x20 = INT8_MIN;
	int64_t t4 = 113153336655LL;

    t4 = (x17^(x18>(x19==x20)));

    if (t4 != 1287753004835LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	uint16_t x22 = 737U;
	static uint8_t x23 = UINT8_MAX;
	uint8_t x24 = 0U;
	volatile int32_t t5 = 105042105;

    t5 = (x21^(x22>(x23==x24)));

    if (t5 != -32767) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MAX;
	int16_t x28 = INT16_MAX;
	volatile int32_t t6 = INT32_MAX;

    t6 = (x25^(x26>(x27==x28)));

    if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint16_t x29 = 8U;
	volatile int64_t x30 = -789712071LL;
	int8_t x31 = 5;
	int16_t x32 = INT16_MIN;
	int32_t t7 = 173674261;

    t7 = (x29^(x30>(x31==x32)));

    if (t7 != 8) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = UINT64_MAX;
	int32_t x34 = -1;
	volatile int32_t x35 = INT32_MAX;
	int8_t x36 = -2;
	uint64_t t8 = UINT64_MAX;

    t8 = (x33^(x34>(x35==x36)));

    if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = 47;
	int32_t x39 = INT32_MAX;
	volatile int32_t t9 = 147424;

    t9 = (x37^(x38>(x39==x40)));

    if (t9 != 46) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x42 = 58U;
	int8_t x43 = INT8_MAX;
	int8_t x44 = -1;

    t10 = (x41^(x42>(x43==x44)));

    if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x47 = 927U;
	static int64_t x48 = INT64_MAX;

    t11 = (x45^(x46>(x47==x48)));

    if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x50 = UINT8_MAX;
	int64_t x51 = -4853482847776LL;
	static volatile int16_t x52 = INT16_MIN;
	int64_t t12 = 14526638906409LL;

    t12 = (x49^(x50>(x51==x52)));

    if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = 26741128170562395LL;
	int64_t x54 = -1LL;
	int64_t x55 = -1LL;
	uint8_t x56 = 3U;
	int64_t t13 = 6809393LL;

    t13 = (x53^(x54>(x55==x56)));

    if (t13 != 26741128170562395LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = INT8_MIN;
	volatile uint32_t x59 = 15777U;
	static int64_t x60 = -1LL;
	int64_t t14 = INT64_MIN;

    t14 = (x57^(x58>(x59==x60)));

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = INT32_MIN;
	volatile uint8_t x62 = 3U;
	uint8_t x64 = 60U;
	static int32_t t15 = 73;

    t15 = (x61^(x62>(x63==x64)));

    if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x65 = 8304U;
	uint8_t x66 = UINT8_MAX;
	int32_t x68 = INT32_MIN;
	static int32_t t16 = -17345225;

    t16 = (x65^(x66>(x67==x68)));

    if (t16 != 8305) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	volatile uint32_t x70 = 1167U;
	volatile int8_t x71 = INT8_MIN;
	int32_t x72 = -1281036;

    t17 = (x69^(x70>(x71==x72)));

    if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = 499272;
	int16_t x76 = INT16_MAX;
	static volatile int32_t t18 = -405819337;

    t18 = (x73^(x74>(x75==x76)));

    if (t18 != 499272) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x79 = 61U;
	static int64_t x80 = INT64_MIN;

    t19 = (x77^(x78>(x79==x80)));

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	volatile int64_t x83 = INT64_MAX;
	volatile int16_t x84 = 1;
	int32_t t20 = 443356;

    t20 = (x81^(x82>(x83==x84)));

    if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MAX;
	uint32_t x86 = UINT32_MAX;
	uint64_t x87 = 29747LLU;
	int16_t x88 = INT16_MIN;
	static volatile int32_t t21 = -596165;

    t21 = (x85^(x86>(x87==x88)));

    if (t21 != 126) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = INT64_MIN;
	int8_t x91 = INT8_MIN;
	static volatile int16_t x92 = -1;

    t22 = (x89^(x90>(x91==x92)));

    if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 10164U;
	volatile int64_t x94 = -20LL;
	int64_t x95 = INT64_MAX;
	uint64_t x96 = UINT64_MAX;
	volatile uint32_t t23 = 584038U;

    t23 = (x93^(x94>(x95==x96)));

    if (t23 != 10164U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MAX;
	uint8_t x98 = 123U;
	static int8_t x99 = -6;
	int64_t x100 = -1LL;
	int32_t t24 = 151438;

    t24 = (x97^(x98>(x99==x100)));

    if (t24 != 2147483646) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x102 = UINT64_MAX;
	uint8_t x104 = 1U;

    t25 = (x101^(x102>(x103==x104)));

    if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -8;
	int16_t x106 = 44;
	static volatile uint32_t x107 = 12170U;
	int64_t x108 = -412624851171720LL;

    t26 = (x105^(x106>(x107==x108)));

    if (t26 != -7) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 1642U;
	uint64_t x111 = UINT64_MAX;
	volatile int32_t t27 = -122514517;

    t27 = (x109^(x110>(x111==x112)));

    if (t27 != 1642) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	static int32_t x114 = -1;
	uint8_t x115 = UINT8_MAX;
	uint16_t x116 = UINT16_MAX;
	int32_t t28 = -5;

    t28 = (x113^(x114>(x115==x116)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -1;
	int16_t x118 = -112;
	static int32_t x119 = INT32_MAX;
	int32_t t29 = 223586;

    t29 = (x117^(x118>(x119==x120)));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	volatile uint64_t x122 = UINT64_MAX;
	int32_t x123 = INT32_MAX;
	int32_t t30 = -31669279;

    t30 = (x121^(x122>(x123==x124)));

    if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x125 = 42222U;
	uint64_t x126 = 9215186975086914775LLU;
	uint16_t x127 = UINT16_MAX;
	static uint8_t x128 = UINT8_MAX;
	volatile uint32_t t31 = 96U;

    t31 = (x125^(x126>(x127==x128)));

    if (t31 != 42223U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x132 = INT8_MIN;
	volatile int64_t t32 = INT64_MAX;

    t32 = (x129^(x130>(x131==x132)));

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x133 = -1;
	int32_t x134 = INT32_MIN;
	static uint8_t x135 = 28U;
	uint8_t x136 = 102U;
	static int32_t t33 = 952788876;

    t33 = (x133^(x134>(x135==x136)));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -4548;
	int16_t x138 = INT16_MAX;
	uint16_t x139 = 3U;
	uint64_t x140 = 7391673663308390667LLU;
	static int32_t t34 = 268485037;

    t34 = (x137^(x138>(x139==x140)));

    if (t34 != -4547) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = UINT16_MAX;
	uint16_t x142 = UINT16_MAX;
	volatile int32_t t35 = 2916353;

    t35 = (x141^(x142>(x143==x144)));

    if (t35 != 65534) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x145 = -1;
	uint32_t x146 = UINT32_MAX;
	uint32_t x147 = 25330147U;
	int8_t x148 = INT8_MIN;
	volatile int32_t t36 = -1;

    t36 = (x145^(x146>(x147==x148)));

    if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	volatile int32_t x151 = INT32_MIN;
	int64_t t37 = 56LL;

    t37 = (x149^(x150>(x151==x152)));

    if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = 1U;
	volatile int32_t x154 = 24;
	static volatile uint16_t x156 = UINT16_MAX;
	int32_t t38 = -89;

    t38 = (x153^(x154>(x155==x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x157 = INT64_MIN;
	int8_t x158 = INT8_MIN;
	int8_t x159 = INT8_MIN;
	int32_t x160 = -2;
	int64_t t39 = INT64_MIN;

    t39 = (x157^(x158>(x159==x160)));

    if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 14U;
	int16_t x162 = -1;
	int32_t t40 = 27730;

    t40 = (x161^(x162>(x163==x164)));

    if (t40 != 14) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	static int64_t x167 = -4971401990LL;
	int32_t t41 = -915709;

    t41 = (x165^(x166>(x167==x168)));

    if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x170 = 3574248975121553312LL;
	volatile int32_t x171 = -1;
	uint32_t x172 = UINT32_MAX;

    t42 = (x169^(x170>(x171==x172)));

    if (t42 != 6) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x173 = INT16_MIN;
	uint16_t x174 = 16U;
	volatile int32_t x175 = -1;
	static uint32_t x176 = 59696298U;
	volatile int32_t t43 = 109544;

    t43 = (x173^(x174>(x175==x176)));

    if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = INT8_MAX;
	int16_t x178 = 1902;
	uint64_t x179 = UINT64_MAX;
	int64_t x180 = -50379LL;
	int32_t t44 = -957871063;

    t44 = (x177^(x178>(x179==x180)));

    if (t44 != 126) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	uint32_t x182 = 14021184U;
	int32_t x183 = -1;
	int8_t x184 = 14;
	volatile int32_t t45 = 203159;

    t45 = (x181^(x182>(x183==x184)));

    if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint16_t x185 = 435U;
	int8_t x186 = -1;
	int64_t x187 = 25720LL;
	int64_t x188 = INT64_MIN;
	static volatile int32_t t46 = -14;

    t46 = (x185^(x186>(x187==x188)));

    if (t46 != 435) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = UINT64_MAX;
	int32_t x190 = INT32_MAX;
	int16_t x191 = -22;
	uint32_t x192 = UINT32_MAX;
	volatile uint64_t t47 = 4LLU;

    t47 = (x189^(x190>(x191==x192)));

    if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int16_t x194 = -3;
	uint64_t x195 = UINT64_MAX;
	volatile int32_t t48 = 414;

    t48 = (x193^(x194>(x195==x196)));

    if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x197 = -1;
	uint8_t x198 = 1U;
	int32_t t49 = -874417101;

    t49 = (x197^(x198>(x199==x200)));

    if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MAX;
	int8_t x202 = INT8_MIN;
	static int64_t x204 = INT64_MAX;
	int32_t t50 = -164;

    t50 = (x201^(x202>(x203==x204)));

    if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = 80704023;
	volatile uint8_t x206 = UINT8_MAX;
	static int32_t x207 = INT32_MIN;
	uint64_t x208 = 92979153215694LLU;

    t51 = (x205^(x206>(x207==x208)));

    if (t51 != 80704022) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x209 = UINT8_MAX;
	int8_t x210 = -1;
	volatile int64_t x211 = INT64_MAX;
	int32_t x212 = INT32_MIN;
	static volatile int32_t t52 = -6801;

    t52 = (x209^(x210>(x211==x212)));

    if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1461;
	int8_t x214 = INT8_MIN;
	int64_t x215 = 0LL;
	volatile int32_t x216 = INT32_MAX;
	static int32_t t53 = -4773310;

    t53 = (x213^(x214>(x215==x216)));

    if (t53 != -1461) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MAX;
	volatile int16_t x218 = INT16_MIN;
	volatile uint16_t x219 = 21U;
	int32_t x220 = 0;

    t54 = (x217^(x218>(x219==x220)));

    if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	static int64_t x222 = INT64_MIN;
	int64_t x223 = INT64_MIN;

    t55 = (x221^(x222>(x223==x224)));

    if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = 408877853LL;
	int8_t x226 = INT8_MIN;
	uint16_t x228 = 354U;
	int64_t t56 = 0LL;

    t56 = (x225^(x226>(x227==x228)));

    if (t56 != 408877853LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -1;
	int64_t x230 = 12417813679LL;
	static volatile uint16_t x231 = 23205U;
	int32_t t57 = -704846948;

    t57 = (x229^(x230>(x231==x232)));

    if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = UINT64_MAX;
	int64_t x234 = -4018990578LL;
	int64_t x235 = INT64_MIN;
	int16_t x236 = INT16_MAX;
	uint64_t t58 = UINT64_MAX;

    t58 = (x233^(x234>(x235==x236)));

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = 532777574325774LLU;
	int64_t x239 = INT64_MIN;
	int32_t x240 = 265412304;
	uint64_t t59 = 0LLU;

    t59 = (x237^(x238>(x239==x240)));

    if (t59 != 532777574325774LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x241 = 6469U;
	volatile int32_t x242 = -6;
	volatile uint8_t x243 = 0U;
	volatile uint32_t x244 = UINT32_MAX;

    t60 = (x241^(x242>(x243==x244)));

    if (t60 != 6469) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MAX;
	int16_t x246 = INT16_MAX;
	static volatile uint8_t x247 = UINT8_MAX;
	volatile uint8_t x248 = 44U;
	volatile int64_t t61 = 435218864LL;

    t61 = (x245^(x246>(x247==x248)));

    if (t61 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x250 = INT8_MAX;
	int8_t x252 = INT8_MIN;
	int32_t t62 = -5036367;

    t62 = (x249^(x250>(x251==x252)));

    if (t62 != 21) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x254 = UINT64_MAX;
	static int32_t x255 = INT32_MAX;
	int64_t x256 = 223LL;
	static volatile int32_t t63 = 342873490;

    t63 = (x253^(x254>(x255==x256)));

    if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MIN;
	static uint8_t x258 = UINT8_MAX;
	static int8_t x259 = INT8_MIN;
	volatile int32_t t64 = -15499;

    t64 = (x257^(x258>(x259==x260)));

    if (t64 != -32767) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint64_t x261 = 95659736432LLU;
	volatile uint64_t x262 = 800207944904620LLU;
	int16_t x264 = INT16_MIN;
	volatile uint64_t t65 = 1549900783003LLU;

    t65 = (x261^(x262>(x263==x264)));

    if (t65 != 95659736433LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x266 = -4;
	uint64_t t66 = 6397783933887030289LLU;

    t66 = (x265^(x266>(x267==x268)));

    if (t66 != 19366074703LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = -1;
	int32_t x271 = INT32_MIN;
	uint8_t x272 = 11U;
	volatile int32_t t67 = -34919726;

    t67 = (x269^(x270>(x271==x272)));

    if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x273 = 47U;
	volatile int32_t x275 = -1;

    t68 = (x273^(x274>(x275==x276)));

    if (t68 != 47) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = UINT16_MAX;
	uint8_t x279 = 0U;
	static volatile uint8_t x280 = 4U;
	volatile int32_t t69 = 0;

    t69 = (x277^(x278>(x279==x280)));

    if (t69 != 65534) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	int32_t x282 = INT32_MAX;
	static int32_t x283 = -1;
	int8_t x284 = -11;
	static int32_t t70 = -1;

    t70 = (x281^(x282>(x283==x284)));

    if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x286 = INT32_MIN;
	static uint16_t x287 = 1097U;
	int64_t x288 = -1LL;
	int32_t t71 = 962491568;

    t71 = (x285^(x286>(x287==x288)));

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 16U;
	volatile int16_t x290 = -1;
	static volatile uint64_t x291 = 511395293935459LLU;
	volatile int8_t x292 = -1;
	volatile int32_t t72 = -603421;

    t72 = (x289^(x290>(x291==x292)));

    if (t72 != 16) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x293 = UINT32_MAX;
	uint16_t x294 = 0U;
	int64_t x295 = -1LL;
	int32_t x296 = INT32_MAX;
	static volatile uint32_t t73 = UINT32_MAX;

    t73 = (x293^(x294>(x295==x296)));

    if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -16;
	volatile uint8_t x298 = 6U;
	static int32_t x299 = -454268;
	uint64_t x300 = 148842211046LLU;

    t74 = (x297^(x298>(x299==x300)));

    if (t74 != -15) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x303 = 12;
	int16_t x304 = -343;
	uint64_t t75 = 845LLU;

    t75 = (x301^(x302>(x303==x304)));

    if (t75 != 217LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x305 = -75379734LL;
	int64_t x306 = 1007225262640LL;
	uint8_t x307 = UINT8_MAX;
	int64_t t76 = 39842789129819181LL;

    t76 = (x305^(x306>(x307==x308)));

    if (t76 != -75379733LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x309 = INT16_MIN;
	int16_t x310 = -1;
	uint32_t x311 = 0U;
	static int32_t x312 = INT32_MIN;
	static int32_t t77 = 835;

    t77 = (x309^(x310>(x311==x312)));

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 4U;
	static uint64_t x314 = UINT64_MAX;
	volatile uint16_t x315 = 1U;
	static int32_t t78 = 79273617;

    t78 = (x313^(x314>(x315==x316)));

    if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x317 = INT16_MIN;
	uint8_t x318 = 3U;
	int64_t x319 = INT64_MIN;
	int16_t x320 = INT16_MIN;
	int32_t t79 = -3;

    t79 = (x317^(x318>(x319==x320)));

    if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 557259165631091573LLU;
	volatile uint32_t x322 = 693592268U;
	uint16_t x323 = 29U;
	int8_t x324 = INT8_MIN;
	uint64_t t80 = 10030174517387LLU;

    t80 = (x321^(x322>(x323==x324)));

    if (t80 != 557259165631091572LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = 4192826842928LLU;
	volatile int16_t x326 = INT16_MAX;
	volatile uint32_t x327 = 6U;
	uint32_t x328 = 9U;
	uint64_t t81 = 197895583492LLU;

    t81 = (x325^(x326>(x327==x328)));

    if (t81 != 4192826842929LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = 51242646U;
	volatile int64_t x330 = INT64_MIN;
	int8_t x331 = -1;
	int64_t x332 = 3LL;
	volatile uint32_t t82 = 4038826U;

    t82 = (x329^(x330>(x331==x332)));

    if (t82 != 51242646U) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = -1;
	volatile int64_t x334 = INT64_MIN;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t83 = -41;

    t83 = (x333^(x334>(x335==x336)));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x338 = 3228LL;
	static int16_t x339 = INT16_MIN;
	uint32_t x340 = UINT32_MAX;

    t84 = (x337^(x338>(x339==x340)));

    if (t84 != 15) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = UINT32_MAX;
	volatile int16_t x342 = INT16_MIN;
	int32_t x343 = INT32_MAX;
	int32_t x344 = -1;
	volatile uint32_t t85 = UINT32_MAX;

    t85 = (x341^(x342>(x343==x344)));

    if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x345 = 3;
	int32_t x347 = INT32_MAX;
	int64_t x348 = 320903638451LL;
	static int32_t t86 = 0;

    t86 = (x345^(x346>(x347==x348)));

    if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x350 = 1U;
	uint16_t x351 = UINT16_MAX;
	volatile int32_t x352 = 77;
	volatile int32_t t87 = -1070078;

    t87 = (x349^(x350>(x351==x352)));

    if (t87 != -318) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x353 = 890091620;
	int32_t x354 = INT32_MIN;
	int32_t x355 = 228;
	int16_t x356 = INT16_MAX;
	static volatile int32_t t88 = -3242;

    t88 = (x353^(x354>(x355==x356)));

    if (t88 != 890091620) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	int64_t x358 = -1LL;
	static volatile int64_t x359 = 1LL;
	volatile int32_t t89 = -2;

    t89 = (x357^(x358>(x359==x360)));

    if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = UINT16_MAX;
	int64_t x362 = -1LL;
	uint64_t x364 = 112339288501LLU;
	int32_t t90 = -13968;

    t90 = (x361^(x362>(x363==x364)));

    if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x365 = UINT64_MAX;
	volatile uint16_t x366 = 11U;
	static volatile int16_t x368 = INT16_MIN;
	volatile uint64_t t91 = 555LLU;

    t91 = (x365^(x366>(x367==x368)));

    if (t91 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 11U;
	int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MIN;
	volatile int16_t x372 = -6;
	uint32_t t92 = 1U;

    t92 = (x369^(x370>(x371==x372)));

    if (t92 != 11U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = UINT32_MAX;
	int8_t x374 = -1;
	volatile int32_t x375 = -1;
	uint32_t t93 = UINT32_MAX;

    t93 = (x373^(x374>(x375==x376)));

    if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MAX;
	static int8_t x378 = INT8_MIN;
	uint8_t x380 = UINT8_MAX;
	int32_t t94 = INT32_MAX;

    t94 = (x377^(x378>(x379==x380)));

    if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x381 = -6328;
	volatile uint8_t x382 = UINT8_MAX;
	static int32_t x384 = -1;
	int32_t t95 = 446517;

    t95 = (x381^(x382>(x383==x384)));

    if (t95 != -6327) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x386 = INT32_MIN;
	int8_t x387 = 1;
	int32_t x388 = INT32_MAX;
	volatile int32_t t96 = 20;

    t96 = (x385^(x386>(x387==x388)));

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MIN;
	uint64_t x390 = 4003092099LLU;
	int16_t x391 = INT16_MIN;
	int16_t x392 = INT16_MIN;

    t97 = (x389^(x390>(x391==x392)));

    if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = 17U;
	int16_t x394 = -1;
	uint32_t x395 = UINT32_MAX;
	int64_t x396 = -1574193420901LL;
	int32_t t98 = 58864;

    t98 = (x393^(x394>(x395==x396)));

    if (t98 != 17) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MAX;
	volatile int16_t x398 = INT16_MAX;
	int64_t x399 = 59344790LL;
	static int16_t x400 = -1;
	int64_t t99 = -499175341LL;

    t99 = (x397^(x398>(x399==x400)));

    if (t99 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint8_t x401 = 1U;
	volatile int8_t x402 = INT8_MIN;
	volatile uint64_t x403 = UINT64_MAX;
	int32_t t100 = -46;

    t100 = (x401^(x402>(x403==x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 8676734598587243LLU;
	int64_t x406 = -451375LL;
	uint64_t t101 = 9049530368816126LLU;

    t101 = (x405^(x406>(x407==x408)));

    if (t101 != 8676734598587243LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = 3454991LL;
	static uint8_t x410 = 0U;
	int32_t x411 = -1;
	uint16_t x412 = 34U;
	volatile int64_t t102 = -4576813835154081408LL;

    t102 = (x409^(x410>(x411==x412)));

    if (t102 != 3454991LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	int8_t x416 = INT8_MAX;
	int32_t t103 = 1;

    t103 = (x413^(x414>(x415==x416)));

    if (t103 != -2147483647) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MIN;
	int8_t x418 = -1;
	static int32_t x419 = INT32_MIN;
	static volatile int32_t t104 = 84036;

    t104 = (x417^(x418>(x419==x420)));

    if (t104 != -128) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 12U;
	int8_t x422 = -1;
	uint32_t x423 = 396419156U;
	uint32_t x424 = UINT32_MAX;
	volatile int32_t t105 = -32295625;

    t105 = (x421^(x422>(x423==x424)));

    if (t105 != 12) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 13298476U;
	int8_t x426 = INT8_MIN;
	volatile uint16_t x428 = 1U;
	volatile uint32_t t106 = 3121U;

    t106 = (x425^(x426>(x427==x428)));

    if (t106 != 13298476U) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int32_t x429 = INT32_MAX;
	uint16_t x430 = UINT16_MAX;
	static uint32_t x431 = 3630U;
	int64_t x432 = INT64_MIN;
	volatile int32_t t107 = 44439260;

    t107 = (x429^(x430>(x431==x432)));

    if (t107 != 2147483646) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MIN;
	int64_t x434 = INT64_MIN;
	volatile int8_t x436 = -1;
	volatile int64_t t108 = INT64_MIN;

    t108 = (x433^(x434>(x435==x436)));

    if (t108 != INT64_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x438 = 1072U;
	uint8_t x439 = 40U;
	int64_t t109 = 185673LL;

    t109 = (x437^(x438>(x439==x440)));

    if (t109 != -37746657613838589LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x441 = 50U;
	uint32_t x442 = 996423260U;
	static int64_t x443 = INT64_MIN;
	static volatile int8_t x444 = INT8_MIN;

    t110 = (x441^(x442>(x443==x444)));

    if (t110 != 51) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = -1;
	uint16_t x446 = 761U;
	int8_t x447 = -1;
	int64_t x448 = INT64_MIN;

    t111 = (x445^(x446>(x447==x448)));

    if (t111 != -2) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	volatile int16_t x451 = -11;
	int32_t x452 = INT32_MAX;
	static int32_t t112 = 0;

    t112 = (x449^(x450>(x451==x452)));

    if (t112 != -32768) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MIN;
	uint64_t x455 = 21968LLU;
	volatile int32_t x456 = INT32_MAX;
	int32_t t113 = 4070;

    t113 = (x453^(x454>(x455==x456)));

    if (t113 != -32767) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x458 = INT16_MIN;
	int32_t t114 = 1046539;

    t114 = (x457^(x458>(x459==x460)));

    if (t114 != 4019) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = INT64_MIN;
	int8_t x462 = -1;
	uint64_t x463 = 60379187340734696LLU;
	uint64_t x464 = 273856194492214LLU;
	int64_t t115 = INT64_MIN;

    t115 = (x461^(x462>(x463==x464)));

    if (t115 != INT64_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MAX;
	static int32_t x466 = INT32_MAX;

    t116 = (x465^(x466>(x467==x468)));

    if (t116 != 126) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = 25;
	int16_t x470 = INT16_MIN;
	int32_t t117 = 978553;

    t117 = (x469^(x470>(x471==x472)));

    if (t117 != 25) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = UINT32_MAX;
	uint64_t x474 = UINT64_MAX;
	int64_t x476 = -1LL;
	volatile uint32_t t118 = 6233U;

    t118 = (x473^(x474>(x475==x476)));

    if (t118 != 4294967294U) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	int32_t x478 = -1;
	static int64_t x479 = INT64_MAX;
	static int64_t x480 = INT64_MIN;
	volatile int64_t t119 = INT64_MIN;

    t119 = (x477^(x478>(x479==x480)));

    if (t119 != INT64_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x481 = -1;
	volatile uint64_t x482 = UINT64_MAX;
	volatile int8_t x483 = INT8_MIN;
	volatile uint8_t x484 = 47U;
	volatile int32_t t120 = 62;

    t120 = (x481^(x482>(x483==x484)));

    if (t120 != -2) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = UINT16_MAX;
	static int16_t x486 = INT16_MIN;
	uint32_t x487 = UINT32_MAX;
	int16_t x488 = 87;
	int32_t t121 = -76;

    t121 = (x485^(x486>(x487==x488)));

    if (t121 != 65535) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x489 = INT32_MAX;
	static int64_t x490 = -1LL;
	int32_t x491 = INT32_MIN;

    t122 = (x489^(x490>(x491==x492)));

    if (t122 != INT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MAX;
	int8_t x494 = INT8_MIN;
	int32_t x496 = -1;
	int32_t t123 = -1193310;

    t123 = (x493^(x494>(x495==x496)));

    if (t123 != 32767) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x497 = INT64_MIN;
	volatile uint8_t x498 = UINT8_MAX;
	static int32_t x500 = INT32_MIN;
	int64_t t124 = 147LL;

    t124 = (x497^(x498>(x499==x500)));

    if (t124 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x504 = INT32_MIN;
	static int64_t t125 = 31241950LL;

    t125 = (x501^(x502>(x503==x504)));

    if (t125 != 1924492273822LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = -36;
	static int64_t x506 = 21271474089982LL;
	int16_t x507 = -1;
	uint32_t x508 = UINT32_MAX;

    t126 = (x505^(x506>(x507==x508)));

    if (t126 != -35) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = UINT16_MAX;
	volatile uint32_t x510 = 132141558U;
	int32_t x511 = INT32_MIN;
	static volatile uint8_t x512 = 15U;
	int32_t t127 = 59952274;

    t127 = (x509^(x510>(x511==x512)));

    if (t127 != 65534) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x514 = -6358318636953LL;
	int32_t x516 = INT32_MAX;
	int64_t t128 = INT64_MIN;

    t128 = (x513^(x514>(x515==x516)));

    if (t128 != INT64_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MAX;
	int32_t x518 = -26;
	int32_t x519 = INT32_MIN;
	int64_t x520 = -1LL;
	int64_t t129 = INT64_MAX;

    t129 = (x517^(x518>(x519==x520)));

    if (t129 != INT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x522 = 1176543U;
	volatile int16_t x523 = INT16_MAX;
	int16_t x524 = 14;

    t130 = (x521^(x522>(x523==x524)));

    if (t130 != 65534) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -13;
	int32_t x527 = -1;
	static int32_t t131 = 3062996;

    t131 = (x525^(x526>(x527==x528)));

    if (t131 != -13) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = -1LL;
	static uint32_t x530 = 9U;
	int32_t x531 = INT32_MAX;
	volatile int64_t t132 = 1610455LL;

    t132 = (x529^(x530>(x531==x532)));

    if (t132 != -2LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = -775;
	static int64_t x534 = 12939327563LL;
	uint32_t x535 = 15872774U;
	int32_t x536 = 1004112;
	volatile int32_t t133 = 83;

    t133 = (x533^(x534>(x535==x536)));

    if (t133 != -776) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 408960LLU;
	static int16_t x539 = -1;
	int32_t x540 = 87591992;
	static uint64_t t134 = 34382244LLU;

    t134 = (x537^(x538>(x539==x540)));

    if (t134 != 408961LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x542 = 2U;
	uint16_t x544 = UINT16_MAX;
	int32_t t135 = -90043;

    t135 = (x541^(x542>(x543==x544)));

    if (t135 != -127) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MAX;
	volatile int16_t x547 = 1;
	int8_t x548 = INT8_MIN;
	volatile int64_t t136 = -1LL;

    t136 = (x545^(x546>(x547==x548)));

    if (t136 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x551 = 64U;
	uint32_t x552 = 962334U;
	int32_t t137 = -3593863;

    t137 = (x549^(x550>(x551==x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MAX;
	uint32_t x554 = 448779760U;
	int8_t x555 = 58;
	volatile int32_t t138 = 1;

    t138 = (x553^(x554>(x555==x556)));

    if (t138 != 2147483646) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = 4U;
	static volatile uint32_t x559 = 23828269U;
	int32_t t139 = -13405847;

    t139 = (x557^(x558>(x559==x560)));

    if (t139 != 5) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	volatile int64_t x564 = -34LL;
	int32_t t140 = 101;

    t140 = (x561^(x562>(x563==x564)));

    if (t140 != -2147483647) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MIN;
	static int16_t x566 = INT16_MIN;
	static int8_t x568 = -48;
	volatile int32_t t141 = 725684;

    t141 = (x565^(x566>(x567==x568)));

    if (t141 != -128) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = 11LL;
	int8_t x570 = INT8_MAX;
	volatile int16_t x571 = INT16_MIN;
	static uint64_t x572 = 12407689503LLU;
	static int64_t t142 = -81573LL;

    t142 = (x569^(x570>(x571==x572)));

    if (t142 != 10LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = -1LL;
	int8_t x574 = INT8_MIN;
	static int64_t x575 = 30414255LL;

    t143 = (x573^(x574>(x575==x576)));

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x578 = INT32_MAX;
	uint16_t x579 = UINT16_MAX;
	int8_t x580 = INT8_MAX;

    t144 = (x577^(x578>(x579==x580)));

    if (t144 != -32767) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x582 = 25U;
	static uint8_t x583 = UINT8_MAX;
	uint8_t x584 = 20U;

    t145 = (x581^(x582>(x583==x584)));

    if (t145 != 524) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = -1;
	static volatile int16_t x587 = 21;
	int64_t x588 = -201568784749863073LL;
	static volatile int32_t t146 = -1227;

    t146 = (x585^(x586>(x587==x588)));

    if (t146 != -2) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = 54437370463LL;
	int32_t x592 = -1204;
	volatile int64_t t147 = 11429732LL;

    t147 = (x589^(x590>(x591==x592)));

    if (t147 != 54437370462LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MAX;
	int64_t x594 = -394632295LL;
	int16_t x595 = 128;
	static int64_t x596 = -1LL;
	volatile int32_t t148 = 88;

    t148 = (x593^(x594>(x595==x596)));

    if (t148 != 127) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x598 = 23443219U;
	int8_t x600 = INT8_MIN;
	int32_t t149 = 7164667;

    t149 = (x597^(x598>(x599==x600)));

    if (t149 != 65534) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MIN;
	int16_t x602 = INT16_MIN;
	int32_t x603 = INT32_MIN;
	volatile int64_t x604 = -1LL;
	int32_t t150 = INT32_MIN;

    t150 = (x601^(x602>(x603==x604)));

    if (t150 != INT32_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x606 = INT32_MIN;
	static int8_t x607 = -11;
	int64_t x608 = -1LL;
	int32_t t151 = -153;

    t151 = (x605^(x606>(x607==x608)));

    if (t151 != 38425) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x609 = INT32_MAX;
	int8_t x610 = 6;
	uint32_t x611 = 237207047U;
	int32_t t152 = -100000051;

    t152 = (x609^(x610>(x611==x612)));

    if (t152 != 2147483646) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x614 = 19203733310339LL;
	int32_t x615 = 112756;
	int64_t x616 = INT64_MIN;
	volatile int64_t t153 = -3613LL;

    t153 = (x613^(x614>(x615==x616)));

    if (t153 != -2LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = UINT64_MAX;
	int64_t x618 = INT64_MIN;
	volatile int32_t x619 = 0;
	uint64_t x620 = UINT64_MAX;
	uint64_t t154 = UINT64_MAX;

    t154 = (x617^(x618>(x619==x620)));

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = 0;
	uint32_t x622 = 7876332U;
	int32_t x623 = -1;
	int8_t x624 = -7;
	volatile int32_t t155 = -105359;

    t155 = (x621^(x622>(x623==x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x626 = -3LL;
	static uint32_t x627 = 1080892U;
	int8_t x628 = -1;

    t156 = (x625^(x626>(x627==x628)));

    if (t156 != -32239) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x630 = 22872;
	int8_t x631 = 0;
	int64_t t157 = -42320066134505658LL;

    t157 = (x629^(x630>(x631==x632)));

    if (t157 != -24486971698LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = 54U;
	static uint32_t x635 = 53923U;
	volatile int16_t x636 = INT16_MIN;
	int32_t t158 = -100639;

    t158 = (x633^(x634>(x635==x636)));

    if (t158 != 54) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = -1;
	uint32_t x638 = 6U;
	uint32_t x639 = 10551533U;

    t159 = (x637^(x638>(x639==x640)));

    if (t159 != -2) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x641 = UINT8_MAX;
	int64_t x643 = INT64_MIN;
	volatile int32_t x644 = 497366;
	int32_t t160 = 0;

    t160 = (x641^(x642>(x643==x644)));

    if (t160 != 255) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x646 = INT64_MIN;
	int32_t x647 = INT32_MIN;
	uint64_t x648 = 2LLU;
	volatile int64_t t161 = 208256100832960LL;

    t161 = (x645^(x646>(x647==x648)));

    if (t161 != 80LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 2LLU;
	int32_t x650 = -39159;
	uint8_t x651 = 0U;
	int8_t x652 = INT8_MIN;
	volatile uint64_t t162 = 15912316212LLU;

    t162 = (x649^(x650>(x651==x652)));

    if (t162 != 2LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x653 = INT16_MAX;
	int64_t x654 = INT64_MAX;
	static int8_t x656 = INT8_MAX;
	static int32_t t163 = -4062835;

    t163 = (x653^(x654>(x655==x656)));

    if (t163 != 32766) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	int16_t x658 = INT16_MAX;
	static uint64_t x659 = UINT64_MAX;
	uint32_t x660 = UINT32_MAX;
	static int32_t t164 = 438;

    t164 = (x657^(x658>(x659==x660)));

    if (t164 != -2147483647) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x661 = 0;
	uint8_t x662 = 0U;
	uint8_t x663 = UINT8_MAX;
	static uint32_t x664 = 414U;
	volatile int32_t t165 = -201851;

    t165 = (x661^(x662>(x663==x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x665 = INT8_MAX;
	static int64_t x666 = 15380LL;
	int8_t x667 = -1;
	static int64_t x668 = INT64_MAX;
	int32_t t166 = -259926;

    t166 = (x665^(x666>(x667==x668)));

    if (t166 != 126) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x669 = -1;
	int16_t x670 = 0;
	static volatile int16_t x671 = INT16_MIN;
	int8_t x672 = INT8_MIN;
	int32_t t167 = -160;

    t167 = (x669^(x670>(x671==x672)));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -1;
	volatile uint16_t x674 = UINT16_MAX;
	int32_t x675 = -1;
	int64_t x676 = INT64_MAX;
	int32_t t168 = 94997;

    t168 = (x673^(x674>(x675==x676)));

    if (t168 != -2) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = UINT8_MAX;
	int64_t x678 = -1LL;
	int16_t x679 = INT16_MAX;
	uint16_t x680 = 10U;
	volatile int32_t t169 = -461;

    t169 = (x677^(x678>(x679==x680)));

    if (t169 != 255) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x682 = INT8_MAX;
	int64_t x684 = INT64_MAX;

    t170 = (x681^(x682>(x683==x684)));

    if (t170 != -2) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = 9850U;
	int64_t x686 = -1LL;
	int64_t x687 = 64280LL;
	int8_t x688 = INT8_MIN;
	volatile int32_t t171 = -16550;

    t171 = (x685^(x686>(x687==x688)));

    if (t171 != 9850) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x689 = -1;
	int16_t x690 = INT16_MAX;
	int64_t x692 = 2854558585068265LL;
	volatile int32_t t172 = 251;

    t172 = (x689^(x690>(x691==x692)));

    if (t172 != -2) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x693 = 0;
	static int16_t x694 = -1;
	int8_t x695 = -7;
	volatile int16_t x696 = -1;
	int32_t t173 = -107;

    t173 = (x693^(x694>(x695==x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = -1LL;
	static uint16_t x698 = 2U;
	int16_t x699 = INT16_MIN;
	volatile uint8_t x700 = 0U;
	int64_t t174 = 207LL;

    t174 = (x697^(x698>(x699==x700)));

    if (t174 != -2LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = -1;
	int32_t x702 = 1817;
	int32_t x704 = 0;
	int32_t t175 = 63;

    t175 = (x701^(x702>(x703==x704)));

    if (t175 != -2) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = 7LL;
	volatile int16_t x706 = INT16_MIN;
	int32_t x707 = -3;
	volatile int64_t t176 = 1LL;

    t176 = (x705^(x706>(x707==x708)));

    if (t176 != 7LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = UINT32_MAX;
	static int64_t x711 = INT64_MAX;
	uint32_t t177 = 2045449U;

    t177 = (x709^(x710>(x711==x712)));

    if (t177 != 4294967294U) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = -2060339419LL;
	uint16_t x715 = UINT16_MAX;
	int8_t x716 = 1;
	int64_t t178 = 990760LL;

    t178 = (x713^(x714>(x715==x716)));

    if (t178 != -2060339419LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MAX;
	volatile uint8_t x718 = 1U;
	int32_t x719 = -1;
	static uint16_t x720 = 15U;
	volatile int32_t t179 = 53159707;

    t179 = (x717^(x718>(x719==x720)));

    if (t179 != 2147483646) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MAX;
	static int32_t x722 = INT32_MAX;
	volatile int64_t x724 = 4636829LL;
	volatile int32_t t180 = 557138414;

    t180 = (x721^(x722>(x723==x724)));

    if (t180 != 126) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = UINT32_MAX;
	int64_t x726 = INT64_MAX;
	uint16_t x728 = 1051U;
	volatile uint32_t t181 = 19U;

    t181 = (x725^(x726>(x727==x728)));

    if (t181 != 4294967294U) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x729 = INT8_MAX;
	static int32_t x731 = -176959723;
	volatile int32_t t182 = -12667929;

    t182 = (x729^(x730>(x731==x732)));

    if (t182 != 127) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 9U;
	int8_t x734 = -38;
	static volatile int32_t x735 = -1;
	volatile uint16_t x736 = 1U;
	static volatile uint32_t t183 = 989U;

    t183 = (x733^(x734>(x735==x736)));

    if (t183 != 9U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x737 = -6926;
	static int32_t x738 = INT32_MAX;
	int16_t x739 = -1;
	static int64_t x740 = 244098467037129LL;
	static int32_t t184 = 19;

    t184 = (x737^(x738>(x739==x740)));

    if (t184 != -6925) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = -1LL;
	static uint32_t x742 = 65U;
	int8_t x743 = 7;

    t185 = (x741^(x742>(x743==x744)));

    if (t185 != -2LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = -43;
	int16_t x748 = 560;
	int32_t t186 = 0;

    t186 = (x745^(x746>(x747==x748)));

    if (t186 != -43) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 31U;
	int16_t x750 = INT16_MAX;
	int16_t x751 = INT16_MIN;
	static int16_t x752 = -5;
	uint32_t t187 = 6259384U;

    t187 = (x749^(x750>(x751==x752)));

    if (t187 != 30U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 10162484264LLU;
	uint64_t x754 = UINT64_MAX;
	int64_t x755 = -169978563LL;
	static int8_t x756 = INT8_MIN;

    t188 = (x753^(x754>(x755==x756)));

    if (t188 != 10162484265LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x757 = INT16_MIN;
	uint32_t x759 = 86U;
	volatile int32_t x760 = INT32_MIN;

    t189 = (x757^(x758>(x759==x760)));

    if (t189 != -32767) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 2U;
	volatile int64_t x762 = INT64_MIN;
	static int8_t x764 = -1;

    t190 = (x761^(x762>(x763==x764)));

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 1U;
	uint16_t x766 = UINT16_MAX;
	int32_t x767 = -1;
	static uint32_t x768 = UINT32_MAX;
	uint32_t t191 = 0U;

    t191 = (x765^(x766>(x767==x768)));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 16U;
	uint8_t x770 = UINT8_MAX;
	int32_t x771 = -1;
	uint8_t x772 = UINT8_MAX;
	volatile int32_t t192 = -32;

    t192 = (x769^(x770>(x771==x772)));

    if (t192 != 17) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MIN;
	volatile int16_t x774 = -3;
	int16_t x775 = INT16_MIN;
	static int16_t x776 = INT16_MIN;
	volatile int32_t t193 = 0;

    t193 = (x773^(x774>(x775==x776)));

    if (t193 != -32768) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x778 = 242;
	volatile int64_t x779 = -1LL;
	int16_t x780 = -1;

    t194 = (x777^(x778>(x779==x780)));

    if (t194 != -32767) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = INT64_MAX;
	volatile int64_t x782 = -226670733LL;
	uint32_t x783 = 73U;
	int32_t x784 = -1;
	static volatile int64_t t195 = INT64_MAX;

    t195 = (x781^(x782>(x783==x784)));

    if (t195 != INT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x785 = INT32_MIN;
	int16_t x787 = INT16_MIN;
	volatile int16_t x788 = -1565;
	static volatile int32_t t196 = -146689;

    t196 = (x785^(x786>(x787==x788)));

    if (t196 != -2147483647) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 758094459U;
	volatile uint8_t x790 = 29U;
	uint64_t x791 = 30126053743517710LLU;
	volatile uint32_t t197 = 4U;

    t197 = (x789^(x790>(x791==x792)));

    if (t197 != 758094458U) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	int16_t x794 = INT16_MIN;
	int32_t x795 = INT32_MIN;
	int64_t x796 = INT64_MAX;

    t198 = (x793^(x794>(x795==x796)));

    if (t198 != INT64_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = 0;
	static int16_t x798 = -8015;
	int64_t x799 = INT64_MIN;
	int16_t x800 = 115;
	static int32_t t199 = 115574;

    t199 = (x797^(x798>(x799==x800)));

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

