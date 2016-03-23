
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

static volatile int16_t x15 = INT16_MIN;
int16_t x18 = -113;
int8_t x21 = 26;
volatile uint8_t x23 = 29U;
static int32_t t5 = 15;
static volatile int8_t x28 = 29;
volatile uint16_t x42 = 3U;
volatile uint64_t x47 = UINT64_MAX;
int16_t x49 = INT16_MIN;
volatile uint32_t x54 = 251573318U;
int64_t x55 = -108LL;
static uint16_t x57 = 6U;
static int64_t x59 = -1LL;
int32_t x60 = 5134;
volatile int32_t t14 = -1861;
uint64_t x62 = 1999LLU;
int64_t t16 = 895834959LL;
static int32_t x69 = INT32_MIN;
int8_t x71 = -5;
int8_t x75 = INT8_MIN;
uint64_t x78 = UINT64_MAX;
int32_t x81 = INT32_MIN;
volatile int16_t x82 = 6;
static uint32_t x85 = UINT32_MAX;
uint32_t x91 = UINT32_MAX;
volatile int64_t x92 = -1LL;
volatile int64_t t22 = 432403356623506LL;
uint32_t t23 = 52676120U;
static int16_t x99 = INT16_MAX;
static int32_t x100 = -572;
uint64_t x109 = 67990574525202898LLU;
static uint8_t x125 = 3U;
int32_t t31 = -252;
int8_t x129 = -1;
int32_t x131 = INT32_MAX;
static int64_t x132 = INT64_MIN;
uint64_t x134 = 325268033642984032LLU;
static int8_t x135 = -1;
int32_t x139 = -13;
static int32_t x142 = -1;
int64_t x147 = 914929387LL;
uint64_t t37 = 12282LLU;
int64_t x155 = INT64_MAX;
int8_t x158 = 2;
volatile uint64_t x160 = 21LLU;
uint32_t x166 = UINT32_MAX;
int16_t x170 = -1;
int32_t x172 = -1;
static int64_t x173 = -113LL;
static int64_t t43 = -493LL;
uint64_t x180 = 30294255478859LLU;
int16_t x183 = -3334;
uint32_t x184 = 13130U;
static uint64_t t46 = 24787634155351LLU;
int64_t x189 = INT64_MIN;
volatile int64_t t47 = 1LL;
static volatile int16_t x195 = INT16_MAX;
int16_t x201 = -3;
int32_t x205 = INT32_MIN;
int32_t x208 = INT32_MIN;
uint64_t t53 = 274668LLU;
int64_t x224 = INT64_MIN;
volatile int64_t t57 = 1966923532916LL;
volatile int8_t x234 = 18;
int8_t x240 = -1;
int32_t x247 = 883304;
int16_t x249 = INT16_MIN;
int16_t x254 = INT16_MIN;
int16_t x255 = 2;
static int8_t x265 = INT8_MIN;
volatile int8_t x273 = -1;
int8_t x275 = 26;
int64_t t68 = 347LL;
static int64_t t69 = -8676764493466LL;
int64_t t70 = -12417LL;
int64_t x285 = INT64_MIN;
int16_t x287 = -1;
int64_t t71 = 12714969476347772LL;
volatile uint64_t t72 = 0LLU;
int64_t x293 = -1LL;
static int64_t t73 = 917870LL;
int16_t x307 = INT16_MAX;
uint8_t x308 = UINT8_MAX;
int64_t x312 = INT64_MAX;
uint8_t x319 = UINT8_MAX;
int32_t t80 = 43;
static int16_t x325 = -1;
uint32_t x328 = 39602U;
static int32_t t81 = 1013427692;
volatile int32_t x331 = -1;
int8_t x332 = 13;
static int16_t x340 = -1;
static volatile int32_t t85 = -5092684;
static uint16_t x345 = UINT16_MAX;
int32_t x347 = INT32_MIN;
int64_t x354 = INT64_MIN;
int16_t x358 = INT16_MAX;
int64_t x359 = -1LL;
volatile int32_t t91 = 194;
static int32_t x382 = INT32_MAX;
volatile int64_t x391 = INT64_MIN;
volatile int64_t t97 = 1228459719327873LL;
int64_t x393 = 162LL;
volatile int64_t x399 = INT64_MIN;
static uint64_t x416 = UINT64_MAX;
int32_t t104 = 8166931;
static int64_t x430 = -1LL;
uint16_t x435 = 31979U;
int32_t x438 = -1;
uint64_t x440 = UINT64_MAX;
volatile int32_t t109 = -1;
uint64_t x444 = UINT64_MAX;
uint64_t x445 = 1343457484405LLU;
volatile int64_t x452 = 10463LL;
static volatile int64_t x460 = INT64_MIN;
static volatile uint32_t x461 = UINT32_MAX;
int16_t x462 = 101;
uint16_t x463 = 79U;
static volatile uint32_t t115 = 55206U;
volatile int32_t t117 = -19663396;
uint32_t x473 = 18U;
static volatile int8_t x483 = INT8_MAX;
int16_t x484 = INT16_MIN;
uint32_t x488 = UINT32_MAX;
int64_t x495 = INT64_MIN;
int64_t x498 = -188194503091219LL;
static uint32_t x499 = UINT32_MAX;
volatile int64_t t124 = -29107444999LL;
int32_t x501 = INT32_MIN;
int64_t x506 = INT64_MIN;
volatile int8_t x509 = -24;
int32_t t127 = -16666;
int32_t t130 = -53;
int16_t x525 = INT16_MAX;
static int32_t x528 = INT32_MAX;
int32_t t131 = 1833;
int64_t x532 = -1LL;
int32_t t132 = 123306641;
static int32_t t135 = -976371238;
uint32_t x545 = 507U;
int64_t t138 = 20481LL;
uint64_t x557 = UINT64_MAX;
int8_t x559 = INT8_MIN;
int64_t x563 = -524928262838940389LL;
uint8_t x565 = UINT8_MAX;
volatile uint32_t t141 = 181935U;
int32_t x571 = INT32_MIN;
int32_t x572 = -15;
volatile int32_t x575 = -103165;
int16_t x579 = -1;
int16_t x580 = INT16_MIN;
uint16_t x585 = 6211U;
uint8_t x588 = 119U;
int64_t x590 = -1LL;
int8_t x598 = INT8_MIN;
volatile int8_t x601 = INT8_MIN;
static int16_t x602 = INT16_MIN;
int32_t x603 = -1;
uint8_t x606 = 15U;
uint16_t x619 = 433U;
static int16_t x626 = 35;
int64_t x629 = INT64_MIN;
int64_t t157 = -90808871750LL;
int64_t x634 = 3LL;
int16_t x642 = -1;
volatile uint16_t x643 = 1760U;
uint64_t t162 = 3862206734LLU;
uint8_t x656 = 9U;
uint8_t x658 = 21U;
int16_t x662 = INT16_MAX;
int8_t x673 = 0;
int32_t x675 = 2497276;
volatile uint32_t t168 = 12579U;
static volatile uint64_t x680 = UINT64_MAX;
volatile int32_t x686 = INT32_MIN;
static int32_t x707 = INT32_MIN;
volatile int16_t x708 = INT16_MAX;
int32_t x712 = INT32_MIN;
int64_t x716 = -2239549543761885995LL;
volatile int64_t t179 = -9359790009285284LL;
volatile int16_t x721 = INT16_MIN;
int8_t x723 = -1;
static uint64_t t180 = 3488410246540361LLU;
volatile int64_t x725 = -1LL;
int32_t x727 = INT32_MIN;
volatile uint32_t x735 = UINT32_MAX;
static volatile int64_t t183 = -5069LL;
volatile int8_t x739 = INT8_MIN;
int32_t x743 = INT32_MAX;
int64_t x746 = -1LL;
int64_t t186 = -6317414LL;
static uint32_t x749 = UINT32_MAX;
volatile uint32_t t187 = 64389618U;
int8_t x758 = -9;
int64_t x762 = INT64_MIN;
int64_t x765 = 6284LL;
static uint32_t x770 = 254190U;
int16_t x771 = INT16_MAX;
uint16_t x773 = 1U;
int16_t x776 = INT16_MAX;
volatile int64_t t193 = 1LL;
volatile int8_t x779 = -1;
volatile int32_t t194 = -173268;
int32_t x782 = 2;
static int8_t x785 = INT8_MIN;
uint8_t x793 = UINT8_MAX;
uint64_t t198 = 122293446635382903LLU;


void f0(void) {
    	static uint64_t x1 = UINT64_MAX;
	static int64_t x2 = -1LL;
	int16_t x3 = -793;
	int64_t x4 = -12321759802LL;
	uint64_t t0 = 29481LLU;

    t0 = (x1^(x2|(x3==x4)));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int8_t x6 = INT8_MIN;
	int32_t x7 = -1937;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 157493;

    t1 = (x5^(x6|(x7==x8)));

    if (t1 != 32640) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	volatile int16_t x10 = INT16_MIN;
	int32_t x11 = INT32_MIN;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -14;

    t2 = (x9^(x10|(x11==x12)));

    if (t2 != -32513) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 4496;
	uint16_t x14 = UINT16_MAX;
	static uint32_t x16 = 0U;
	int32_t t3 = 39;

    t3 = (x13^(x14|(x15==x16)));

    if (t3 != 61039) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	static int32_t x19 = -1;
	volatile int64_t x20 = 2081006601622754977LL;
	static int32_t t4 = 57;

    t4 = (x17^(x18|(x19==x20)));

    if (t4 != 15) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x22 = INT32_MIN;
	int16_t x24 = -1;

    t5 = (x21^(x22|(x23==x24)));

    if (t5 != -2147483622) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	int64_t x26 = 1510LL;
	int64_t x27 = 812LL;
	static volatile int64_t t6 = 3199383085232732920LL;

    t6 = (x25^(x26|(x27==x28)));

    if (t6 != 64025LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -54;
	static uint16_t x30 = 866U;
	static int8_t x31 = -35;
	uint32_t x32 = 2U;
	int32_t t7 = -62391;

    t7 = (x29^(x30|(x31==x32)));

    if (t7 != -856) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x33 = INT32_MIN;
	volatile int16_t x34 = -1;
	int8_t x35 = INT8_MIN;
	uint32_t x36 = UINT32_MAX;
	int32_t t8 = INT32_MAX;

    t8 = (x33^(x34|(x35==x36)));

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = -1;
	int16_t x38 = INT16_MIN;
	int16_t x39 = -6;
	int32_t x40 = INT32_MIN;
	static volatile int32_t t9 = 404;

    t9 = (x37^(x38|(x39==x40)));

    if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = -899851LL;
	int32_t x43 = INT32_MIN;
	volatile int32_t x44 = INT32_MIN;
	volatile int64_t t10 = 102974306LL;

    t10 = (x41^(x42|(x43==x44)));

    if (t10 != -899850LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = INT32_MAX;
	uint8_t x46 = 7U;
	int16_t x48 = -5846;
	int32_t t11 = 3;

    t11 = (x45^(x46|(x47==x48)));

    if (t11 != 2147483640) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x50 = INT16_MAX;
	volatile uint32_t x51 = UINT32_MAX;
	uint8_t x52 = UINT8_MAX;
	static volatile int32_t t12 = 121;

    t12 = (x49^(x50|(x51==x52)));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 145161U;
	int64_t x56 = INT64_MAX;
	static volatile uint32_t t13 = 27214067U;

    t13 = (x53^(x54|(x55==x56)));

    if (t13 != 251429711U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x58 = 0U;

    t14 = (x57^(x58|(x59==x60)));

    if (t14 != 6) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 60;
	int8_t x63 = INT8_MAX;
	uint64_t x64 = 10568004LLU;
	static volatile uint64_t t15 = 1624237243LLU;

    t15 = (x61^(x62|(x63==x64)));

    if (t15 != 2035LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -3;
	static int64_t x66 = INT64_MAX;
	uint64_t x67 = 7296584717LLU;
	static volatile uint64_t x68 = 1771481900947095107LLU;

    t16 = (x65^(x66|(x67==x68)));

    if (t16 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = INT16_MIN;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = -107059;

    t17 = (x69^(x70|(x71==x72)));

    if (t17 != 2147450880) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int32_t x73 = 45838400;
	uint16_t x74 = UINT16_MAX;
	int16_t x76 = INT16_MIN;
	int32_t t18 = -315;

    t18 = (x73^(x74|(x75==x76)));

    if (t18 != 45846463) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int8_t x77 = INT8_MAX;
	int32_t x79 = -63;
	int16_t x80 = INT16_MIN;
	volatile uint64_t t19 = 3LLU;

    t19 = (x77^(x78|(x79==x80)));

    if (t19 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x83 = INT32_MIN;
	int32_t x84 = -129;
	volatile int32_t t20 = -61896;

    t20 = (x81^(x82|(x83==x84)));

    if (t20 != -2147483642) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x86 = INT16_MAX;
	uint16_t x87 = 12U;
	int8_t x88 = -1;
	volatile uint32_t t21 = 1704152440U;

    t21 = (x85^(x86|(x87==x88)));

    if (t21 != 4294934528U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x89 = 27929583U;
	int64_t x90 = 144872065LL;

    t22 = (x89^(x90|(x91==x92)));

    if (t22 != 151566702LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -5;
	static uint32_t x94 = UINT32_MAX;
	int32_t x95 = INT32_MAX;
	uint32_t x96 = 3U;

    t23 = (x93^(x94|(x95==x96)));

    if (t23 != 4U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x97 = 8;
	int64_t x98 = 4LL;
	static int64_t t24 = -4222891LL;

    t24 = (x97^(x98|(x99==x100)));

    if (t24 != 12LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -210;
	int32_t x102 = INT32_MIN;
	uint16_t x103 = 9U;
	int16_t x104 = -1;
	int32_t t25 = -92;

    t25 = (x101^(x102|(x103==x104)));

    if (t25 != 2147483438) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MAX;
	static int8_t x106 = -1;
	volatile int64_t x107 = -2514967LL;
	static uint16_t x108 = UINT16_MAX;
	int32_t t26 = INT32_MIN;

    t26 = (x105^(x106|(x107==x108)));

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x110 = INT8_MAX;
	uint16_t x111 = UINT16_MAX;
	static int16_t x112 = INT16_MAX;
	volatile uint64_t t27 = 972166LLU;

    t27 = (x109^(x110|(x111==x112)));

    if (t27 != 67990574525202861LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	uint32_t x114 = 12878U;
	static int32_t x115 = INT32_MIN;
	volatile int32_t x116 = -1;
	uint32_t t28 = 4083115U;

    t28 = (x113^(x114|(x115==x116)));

    if (t28 != 4294947406U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 1U;
	static int64_t x118 = 169217997352LL;
	uint16_t x119 = 786U;
	int32_t x120 = INT32_MIN;
	volatile int64_t t29 = -517084682342472114LL;

    t29 = (x117^(x118|(x119==x120)));

    if (t29 != 169217997353LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x121 = 9;
	int8_t x122 = -16;
	static uint32_t x123 = 5049356U;
	int32_t x124 = 12;
	volatile int32_t t30 = 62037615;

    t30 = (x121^(x122|(x123==x124)));

    if (t30 != -7) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint16_t x126 = UINT16_MAX;
	static uint32_t x127 = UINT32_MAX;
	int8_t x128 = INT8_MIN;

    t31 = (x125^(x126|(x127==x128)));

    if (t31 != 65532) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x130 = INT8_MIN;
	int32_t t32 = 164;

    t32 = (x129^(x130|(x131==x132)));

    if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = 256966LL;
	uint32_t x136 = 15530088U;
	uint64_t t33 = 731LLU;

    t33 = (x133^(x134|(x135==x136)));

    if (t33 != 325268033643190694LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -6309246956339478LL;
	int64_t x138 = INT64_MIN;
	int32_t x140 = INT32_MIN;
	int64_t t34 = -1LL;

    t34 = (x137^(x138|(x139==x140)));

    if (t34 != 9217062789898436330LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	int32_t x143 = INT32_MIN;
	int16_t x144 = -1;
	int32_t t35 = 773;

    t35 = (x141^(x142|(x143==x144)));

    if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = 1;
	volatile int8_t x146 = INT8_MIN;
	int32_t x148 = INT32_MIN;
	int32_t t36 = -1944125;

    t36 = (x145^(x146|(x147==x148)));

    if (t36 != -127) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x149 = 5334LLU;
	volatile uint8_t x150 = 55U;
	int8_t x151 = -1;
	int8_t x152 = -17;

    t37 = (x149^(x150|(x151==x152)));

    if (t37 != 5345LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x153 = -25;
	static int8_t x154 = INT8_MIN;
	int32_t x156 = INT32_MIN;
	volatile int32_t t38 = 4179890;

    t38 = (x153^(x154|(x155==x156)));

    if (t38 != 103) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	int64_t x159 = -78536031028LL;
	volatile int32_t t39 = -7458;

    t39 = (x157^(x158|(x159==x160)));

    if (t39 != -126) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x161 = 2118U;
	uint8_t x162 = 88U;
	int64_t x163 = -1LL;
	volatile int64_t x164 = INT64_MIN;
	volatile uint32_t t40 = 505U;

    t40 = (x161^(x162|(x163==x164)));

    if (t40 != 2078U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = 211;
	volatile uint64_t x167 = UINT64_MAX;
	uint64_t x168 = 95762835105507689LLU;
	uint32_t t41 = 1624068115U;

    t41 = (x165^(x166|(x167==x168)));

    if (t41 != 4294967084U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -4;
	int16_t x171 = INT16_MIN;
	int32_t t42 = 337;

    t42 = (x169^(x170|(x171==x172)));

    if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x174 = INT32_MIN;
	static uint64_t x175 = 2LLU;
	int64_t x176 = -1LL;

    t43 = (x173^(x174|(x175==x176)));

    if (t43 != 2147483535LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = 5;
	uint64_t x178 = UINT64_MAX;
	int64_t x179 = 431LL;
	volatile uint64_t t44 = 4941540295841LLU;

    t44 = (x177^(x178|(x179==x180)));

    if (t44 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 52644256;
	int8_t x182 = INT8_MIN;
	volatile int32_t t45 = 1963;

    t45 = (x181^(x182|(x183==x184)));

    if (t45 != -52644320) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = UINT64_MAX;
	volatile int16_t x186 = 442;
	uint16_t x187 = 1U;
	volatile uint8_t x188 = 0U;

    t46 = (x185^(x186|(x187==x188)));

    if (t46 != 18446744073709551173LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x190 = 3U;
	volatile int64_t x191 = INT64_MIN;
	int32_t x192 = INT32_MAX;

    t47 = (x189^(x190|(x191==x192)));

    if (t47 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = 0;
	static int32_t x194 = -1;
	int8_t x196 = -1;
	static volatile int32_t t48 = -939;

    t48 = (x193^(x194|(x195==x196)));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x197 = -79;
	static volatile int64_t x198 = INT64_MAX;
	int16_t x199 = 1;
	int8_t x200 = INT8_MIN;
	static volatile int64_t t49 = -5128359LL;

    t49 = (x197^(x198|(x199==x200)));

    if (t49 != -9223372036854775730LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x202 = INT8_MAX;
	uint64_t x203 = 6238724651495LLU;
	int8_t x204 = -1;
	static int32_t t50 = 0;

    t50 = (x201^(x202|(x203==x204)));

    if (t50 != -126) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x206 = -6520;
	volatile uint32_t x207 = UINT32_MAX;
	int32_t t51 = 13669344;

    t51 = (x205^(x206|(x207==x208)));

    if (t51 != 2147477128) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	uint64_t x210 = UINT64_MAX;
	int64_t x211 = 0LL;
	volatile uint64_t x212 = UINT64_MAX;
	uint64_t t52 = 3963776134959LLU;

    t52 = (x209^(x210|(x211==x212)));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MAX;
	uint64_t x214 = 30923533866368LLU;
	static int16_t x215 = 0;
	int64_t x216 = -1453188445069434LL;

    t53 = (x213^(x214|(x215==x216)));

    if (t53 != 30921847712383LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x217 = 668;
	int16_t x218 = 6735;
	volatile int32_t x219 = INT32_MIN;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t54 = -211152;

    t54 = (x217^(x218|(x219==x220)));

    if (t54 != 6355) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = 2704052747566602402LL;
	int8_t x222 = -14;
	int8_t x223 = -1;
	static int64_t t55 = 100LL;

    t55 = (x221^(x222|(x223==x224)));

    if (t55 != -2704052747566602416LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 2U;
	static uint32_t x226 = 24U;
	uint16_t x227 = 2487U;
	int16_t x228 = -1;
	static uint32_t t56 = 7374U;

    t56 = (x225^(x226|(x227==x228)));

    if (t56 != 26U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	int64_t x230 = 96919374990LL;
	int64_t x231 = INT64_MIN;
	uint64_t x232 = UINT64_MAX;

    t57 = (x229^(x230|(x231==x232)));

    if (t57 != -96919374991LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x233 = 46U;
	int64_t x235 = INT64_MAX;
	uint32_t x236 = UINT32_MAX;
	static int32_t t58 = 3;

    t58 = (x233^(x234|(x235==x236)));

    if (t58 != 60) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MAX;
	static int64_t x238 = -2890834247LL;
	uint16_t x239 = UINT16_MAX;
	static volatile int64_t t59 = 8419953000LL;

    t59 = (x237^(x238|(x239==x240)));

    if (t59 != -9223372033963941562LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MIN;
	static int64_t x242 = INT64_MAX;
	int16_t x243 = INT16_MIN;
	int64_t x244 = -1LL;
	volatile int64_t t60 = 2LL;

    t60 = (x241^(x242|(x243==x244)));

    if (t60 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MIN;
	int8_t x246 = 6;
	int64_t x248 = INT64_MIN;
	int32_t t61 = 21001882;

    t61 = (x245^(x246|(x247==x248)));

    if (t61 != -2147483642) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x250 = 259;
	uint16_t x251 = UINT16_MAX;
	uint64_t x252 = UINT64_MAX;
	volatile int32_t t62 = -235594;

    t62 = (x249^(x250|(x251==x252)));

    if (t62 != -32509) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x253 = INT16_MAX;
	volatile int64_t x256 = -338LL;
	int32_t t63 = 6;

    t63 = (x253^(x254|(x255==x256)));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x257 = 63508630250LL;
	uint64_t x258 = 3672775048098860828LLU;
	uint32_t x259 = UINT32_MAX;
	volatile int64_t x260 = INT64_MIN;
	static uint64_t t64 = 394516420670LLU;

    t64 = (x257^(x258|(x259==x260)));

    if (t64 != 3672775092237043190LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -1LL;
	int16_t x262 = -1;
	int64_t x263 = INT64_MAX;
	uint64_t x264 = UINT64_MAX;
	int64_t t65 = -1382025240231LL;

    t65 = (x261^(x262|(x263==x264)));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x266 = -575663660;
	static int8_t x267 = INT8_MIN;
	int64_t x268 = INT64_MIN;
	int32_t t66 = 1;

    t66 = (x265^(x266|(x267==x268)));

    if (t66 != 575663700) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = 22LLU;
	int32_t x270 = INT32_MAX;
	int16_t x271 = INT16_MIN;
	uint64_t x272 = 313042140127LLU;
	static uint64_t t67 = 2183143658354LLU;

    t67 = (x269^(x270|(x271==x272)));

    if (t67 != 2147483625LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x274 = -1LL;
	volatile int32_t x276 = INT32_MAX;

    t68 = (x273^(x274|(x275==x276)));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x277 = INT64_MIN;
	int8_t x278 = -11;
	int32_t x279 = -1;
	int8_t x280 = -1;

    t69 = (x277^(x278|(x279==x280)));

    if (t69 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MAX;
	int64_t x282 = INT64_MAX;
	volatile int32_t x283 = -3940;
	int64_t x284 = -5825337375733658LL;

    t70 = (x281^(x282|(x283==x284)));

    if (t70 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = 0;
	int32_t x288 = -1;

    t71 = (x285^(x286|(x287==x288)));

    if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x289 = 68323079847LLU;
	int64_t x290 = 2842639104443419LL;
	volatile int16_t x291 = INT16_MIN;
	static int32_t x292 = -82;

    t72 = (x289^(x290|(x291==x292)));

    if (t72 != 2842592267268796LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x294 = -1LL;
	static int16_t x295 = INT16_MAX;
	volatile uint16_t x296 = 22503U;

    t73 = (x293^(x294|(x295==x296)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MIN;
	uint32_t x298 = 6U;
	static int8_t x299 = INT8_MIN;
	int16_t x300 = -1;
	uint32_t t74 = 566041568U;

    t74 = (x297^(x298|(x299==x300)));

    if (t74 != 2147483654U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = 56613LLU;
	int32_t x302 = INT32_MAX;
	volatile uint8_t x303 = 0U;
	int8_t x304 = -3;
	volatile uint64_t t75 = 31LLU;

    t75 = (x301^(x302|(x303==x304)));

    if (t75 != 2147427034LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 97992U;
	volatile uint64_t x306 = UINT64_MAX;
	uint64_t t76 = 121304LLU;

    t76 = (x305^(x306|(x307==x308)));

    if (t76 != 18446744073709453623LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = 3817783176356LL;
	uint8_t x310 = 1U;
	int32_t x311 = -1;
	volatile int64_t t77 = -252506LL;

    t77 = (x309^(x310|(x311==x312)));

    if (t77 != 3817783176357LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x313 = INT16_MIN;
	uint32_t x314 = 124356U;
	int8_t x315 = -1;
	static int32_t x316 = 5951609;
	volatile uint32_t t78 = 2106940U;

    t78 = (x313^(x314|(x315==x316)));

    if (t78 != 4294862276U) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x317 = 90602483U;
	uint64_t x318 = 7897549LLU;
	int32_t x320 = INT32_MIN;
	volatile uint64_t t79 = 338777561562809555LLU;

    t79 = (x317^(x318|(x319==x320)));

    if (t79 != 85916222LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = -6660;
	int16_t x322 = INT16_MAX;
	int8_t x323 = INT8_MIN;
	int32_t x324 = INT32_MIN;

    t80 = (x321^(x322|(x323==x324)));

    if (t80 != -26109) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x326 = -1;
	static int16_t x327 = INT16_MAX;

    t81 = (x325^(x326|(x327==x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 123596LLU;
	static int64_t x330 = INT64_MIN;
	uint64_t t82 = 80082981LLU;

    t82 = (x329^(x330|(x331==x332)));

    if (t82 != 9223372036854899404LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x333 = -1;
	static int16_t x334 = -1;
	int64_t x335 = -1LL;
	int16_t x336 = -1;
	volatile int32_t t83 = 150369524;

    t83 = (x333^(x334|(x335==x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x337 = 2U;
	static uint16_t x338 = 4U;
	uint8_t x339 = 1U;
	int32_t t84 = -4360868;

    t84 = (x337^(x338|(x339==x340)));

    if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = -5615;
	static uint16_t x342 = UINT16_MAX;
	uint8_t x343 = 31U;
	static int32_t x344 = -1;

    t85 = (x341^(x342|(x343==x344)));

    if (t85 != -59922) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x346 = INT16_MAX;
	static int16_t x348 = -1;
	static volatile int32_t t86 = 16490;

    t86 = (x345^(x346|(x347==x348)));

    if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x349 = 45360461729384473LL;
	volatile uint32_t x350 = UINT32_MAX;
	static uint8_t x351 = 2U;
	volatile int8_t x352 = 18;
	volatile int64_t t87 = 1782471LL;

    t87 = (x349^(x350|(x351==x352)));

    if (t87 != 45360461721745382LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = UINT8_MAX;
	int16_t x355 = INT16_MIN;
	static int8_t x356 = 4;
	volatile int64_t t88 = 179352543LL;

    t88 = (x353^(x354|(x355==x356)));

    if (t88 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = -1;
	volatile int8_t x360 = INT8_MAX;
	int32_t t89 = 1;

    t89 = (x357^(x358|(x359==x360)));

    if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MAX;
	volatile uint32_t x362 = UINT32_MAX;
	int64_t x363 = -1LL;
	int8_t x364 = 0;
	volatile uint32_t t90 = 15592336U;

    t90 = (x361^(x362|(x363==x364)));

    if (t90 != 4294967168U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x365 = -1;
	int8_t x366 = -1;
	static int16_t x367 = -1;
	uint8_t x368 = 1U;

    t91 = (x365^(x366|(x367==x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x369 = 1639192920LLU;
	uint16_t x370 = UINT16_MAX;
	int32_t x371 = -1;
	int64_t x372 = INT64_MIN;
	volatile uint64_t t92 = 70LLU;

    t92 = (x369^(x370|(x371==x372)));

    if (t92 != 1639245479LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MIN;
	int16_t x374 = 77;
	int16_t x375 = -700;
	static volatile int32_t x376 = INT32_MIN;
	volatile int32_t t93 = -5;

    t93 = (x373^(x374|(x375==x376)));

    if (t93 != -51) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = 2;
	uint32_t x378 = UINT32_MAX;
	volatile int64_t x379 = INT64_MAX;
	int32_t x380 = INT32_MAX;
	static volatile uint32_t t94 = 108612522U;

    t94 = (x377^(x378|(x379==x380)));

    if (t94 != 4294967293U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = 43U;
	int64_t x383 = INT64_MIN;
	volatile uint8_t x384 = 41U;
	static volatile int32_t t95 = 528544;

    t95 = (x381^(x382|(x383==x384)));

    if (t95 != 2147483604) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MAX;
	int8_t x386 = -1;
	volatile int64_t x387 = -53554102209404LL;
	int8_t x388 = -14;
	volatile int32_t t96 = -21;

    t96 = (x385^(x386|(x387==x388)));

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -1LL;
	int64_t x390 = -24LL;
	uint16_t x392 = 0U;

    t97 = (x389^(x390|(x391==x392)));

    if (t97 != 23LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x394 = -724;
	static volatile int64_t x395 = -1LL;
	volatile uint16_t x396 = UINT16_MAX;
	volatile int64_t t98 = -1LL;

    t98 = (x393^(x394|(x395==x396)));

    if (t98 != -626LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 1420872U;
	int16_t x398 = 30;
	static volatile uint64_t x400 = 2037124767299LLU;
	volatile uint32_t t99 = 189520198U;

    t99 = (x397^(x398|(x399==x400)));

    if (t99 != 1420886U) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint8_t x401 = 13U;
	int32_t x402 = INT32_MIN;
	static uint16_t x403 = 56U;
	int64_t x404 = -384285506LL;
	volatile int32_t t100 = -927134654;

    t100 = (x401^(x402|(x403==x404)));

    if (t100 != -2147483635) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x405 = INT64_MAX;
	int32_t x406 = INT32_MIN;
	volatile int16_t x407 = -51;
	int64_t x408 = INT64_MIN;
	int64_t t101 = 169737LL;

    t101 = (x405^(x406|(x407==x408)));

    if (t101 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = -14;
	int32_t x410 = -701;
	volatile int32_t x411 = INT32_MIN;
	static volatile int16_t x412 = -1;
	static int32_t t102 = 58897023;

    t102 = (x409^(x410|(x411==x412)));

    if (t102 != 689) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = 691565LLU;
	int32_t x414 = INT32_MIN;
	uint64_t x415 = 1758023291LLU;
	volatile uint64_t t103 = 7611LLU;

    t103 = (x413^(x414|(x415==x416)));

    if (t103 != 18446744071562759533LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	volatile uint8_t x418 = UINT8_MAX;
	int32_t x419 = INT32_MAX;
	int16_t x420 = -122;

    t104 = (x417^(x418|(x419==x420)));

    if (t104 != -2147483393) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x421 = -1LL;
	static int8_t x422 = -1;
	int32_t x423 = INT32_MIN;
	static volatile int32_t x424 = 6;
	volatile int64_t t105 = 79296443530780LL;

    t105 = (x421^(x422|(x423==x424)));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x425 = 3;
	uint8_t x426 = UINT8_MAX;
	uint64_t x427 = UINT64_MAX;
	volatile int16_t x428 = INT16_MAX;
	int32_t t106 = 76167234;

    t106 = (x425^(x426|(x427==x428)));

    if (t106 != 252) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x429 = INT8_MIN;
	static volatile int64_t x431 = -1LL;
	uint64_t x432 = 2266482432271426064LLU;
	volatile int64_t t107 = -2174965LL;

    t107 = (x429^(x430|(x431==x432)));

    if (t107 != 127LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x433 = INT32_MAX;
	uint8_t x434 = 4U;
	uint8_t x436 = UINT8_MAX;
	int32_t t108 = 24120;

    t108 = (x433^(x434|(x435==x436)));

    if (t108 != 2147483643) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	uint8_t x439 = UINT8_MAX;

    t109 = (x437^(x438|(x439==x440)));

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x441 = UINT8_MAX;
	uint32_t x442 = UINT32_MAX;
	int32_t x443 = INT32_MAX;
	uint32_t t110 = 14964U;

    t110 = (x441^(x442|(x443==x444)));

    if (t110 != 4294967040U) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x446 = INT16_MIN;
	uint8_t x447 = 8U;
	volatile int64_t x448 = INT64_MIN;
	volatile uint64_t t111 = 1098677614119094159LLU;

    t111 = (x445^(x446|(x447==x448)));

    if (t111 != 18446742730252082805LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MAX;
	int64_t x450 = INT64_MIN;
	int64_t x451 = INT64_MIN;
	int64_t t112 = 46408LL;

    t112 = (x449^(x450|(x451==x452)));

    if (t112 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = INT64_MIN;
	int16_t x454 = INT16_MAX;
	volatile uint32_t x455 = 839732133U;
	volatile uint32_t x456 = 536U;
	int64_t t113 = -7672LL;

    t113 = (x453^(x454|(x455==x456)));

    if (t113 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x457 = 25U;
	int16_t x458 = INT16_MIN;
	int16_t x459 = -13;
	static int32_t t114 = 1022;

    t114 = (x457^(x458|(x459==x460)));

    if (t114 != -32743) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x464 = 7U;

    t115 = (x461^(x462|(x463==x464)));

    if (t115 != 4294967194U) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MAX;
	int64_t x466 = -2605LL;
	uint8_t x467 = 13U;
	int32_t x468 = 373;
	static int64_t t116 = -771571551LL;

    t116 = (x465^(x466|(x467==x468)));

    if (t116 != -2644LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = -2;
	int8_t x470 = INT8_MIN;
	int16_t x471 = INT16_MIN;
	int32_t x472 = -153;

    t117 = (x469^(x470|(x471==x472)));

    if (t117 != 126) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x474 = -3;
	int32_t x475 = INT32_MAX;
	static uint32_t x476 = UINT32_MAX;
	uint32_t t118 = 3267650U;

    t118 = (x473^(x474|(x475==x476)));

    if (t118 != 4294967279U) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = 29LL;
	uint16_t x478 = 7U;
	static int16_t x479 = -14;
	int64_t x480 = -1LL;
	volatile int64_t t119 = 1010525595879734395LL;

    t119 = (x477^(x478|(x479==x480)));

    if (t119 != 26LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x481 = INT64_MAX;
	uint8_t x482 = 1U;
	int64_t t120 = -23479474627455LL;

    t120 = (x481^(x482|(x483==x484)));

    if (t120 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MAX;
	int32_t x486 = INT32_MIN;
	uint8_t x487 = 12U;
	volatile int64_t t121 = -88LL;

    t121 = (x485^(x486|(x487==x488)));

    if (t121 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x489 = INT16_MIN;
	int32_t x490 = INT32_MIN;
	int32_t x491 = -1;
	volatile int8_t x492 = -10;
	int32_t t122 = 64300000;

    t122 = (x489^(x490|(x491==x492)));

    if (t122 != 2147450880) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = 20676U;
	int16_t x494 = 999;
	int16_t x496 = INT16_MIN;
	int32_t t123 = -274886;

    t123 = (x493^(x494|(x495==x496)));

    if (t123 != 21283) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x497 = 3426U;
	int16_t x500 = 23;

    t124 = (x497^(x498|(x499==x500)));

    if (t124 != -188194503092593LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x502 = INT64_MAX;
	volatile int8_t x503 = -1;
	uint64_t x504 = UINT64_MAX;
	static volatile int64_t t125 = -7409041129LL;

    t125 = (x501^(x502|(x503==x504)));

    if (t125 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = -1LL;
	int16_t x507 = INT16_MIN;
	volatile uint32_t x508 = UINT32_MAX;
	static int64_t t126 = INT64_MAX;

    t126 = (x505^(x506|(x507==x508)));

    if (t126 != INT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x510 = 441U;
	uint32_t x511 = UINT32_MAX;
	int32_t x512 = -1;

    t127 = (x509^(x510|(x511==x512)));

    if (t127 != -431) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x513 = INT8_MIN;
	volatile int32_t x514 = -1;
	int64_t x515 = -166398435LL;
	int64_t x516 = -1LL;
	volatile int32_t t128 = -455;

    t128 = (x513^(x514|(x515==x516)));

    if (t128 != 127) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MAX;
	int64_t x518 = -79269655088441869LL;
	int64_t x519 = -1481LL;
	int8_t x520 = INT8_MIN;
	int64_t t129 = 25534500744799LL;

    t129 = (x517^(x518|(x519==x520)));

    if (t129 != -79269654517536244LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MAX;
	int16_t x522 = INT16_MIN;
	static int32_t x523 = INT32_MIN;
	uint8_t x524 = UINT8_MAX;

    t130 = (x521^(x522|(x523==x524)));

    if (t130 != -32641) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x526 = 26U;
	static uint16_t x527 = 129U;

    t131 = (x525^(x526|(x527==x528)));

    if (t131 != 32741) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MIN;
	volatile int8_t x530 = INT8_MIN;
	int64_t x531 = 10016756LL;

    t132 = (x529^(x530|(x531==x532)));

    if (t132 != 2147483520) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = 749836286LLU;
	volatile int16_t x534 = -97;
	int32_t x535 = -1288986;
	volatile int32_t x536 = INT32_MAX;
	static uint64_t t133 = 10765330LLU;

    t133 = (x533^(x534|(x535==x536)));

    if (t133 != 18446744072959715425LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x537 = INT64_MIN;
	volatile int16_t x538 = INT16_MAX;
	static volatile uint8_t x539 = 88U;
	static int32_t x540 = INT32_MIN;
	volatile int64_t t134 = 266201842805770LL;

    t134 = (x537^(x538|(x539==x540)));

    if (t134 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = 1;
	volatile int32_t x542 = 74;
	volatile int8_t x543 = 7;
	int8_t x544 = INT8_MAX;

    t135 = (x541^(x542|(x543==x544)));

    if (t135 != 75) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x546 = INT16_MIN;
	uint16_t x547 = UINT16_MAX;
	static int16_t x548 = -5895;
	uint32_t t136 = 40890395U;

    t136 = (x545^(x546|(x547==x548)));

    if (t136 != 4294935035U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 0U;
	int16_t x550 = -98;
	volatile int64_t x551 = INT64_MAX;
	int32_t x552 = 123610;
	static int32_t t137 = 281082094;

    t137 = (x549^(x550|(x551==x552)));

    if (t137 != -98) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x553 = INT16_MIN;
	static volatile int64_t x554 = -131632480269355707LL;
	int32_t x555 = -628;
	uint8_t x556 = UINT8_MAX;

    t138 = (x553^(x554|(x555==x556)));

    if (t138 != 131632480269350213LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x558 = -1;
	uint16_t x560 = 5532U;
	volatile uint64_t t139 = 1016LLU;

    t139 = (x557^(x558|(x559==x560)));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x561 = 1235LL;
	static uint32_t x562 = 3856U;
	int8_t x564 = INT8_MIN;
	int64_t t140 = 63434830955LL;

    t140 = (x561^(x562|(x563==x564)));

    if (t140 != 3011LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x566 = 12504120U;
	int64_t x567 = -1LL;
	volatile uint8_t x568 = UINT8_MAX;

    t141 = (x565^(x566|(x567==x568)));

    if (t141 != 12504263U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x569 = -1;
	int16_t x570 = INT16_MIN;
	static volatile int32_t t142 = 17;

    t142 = (x569^(x570|(x571==x572)));

    if (t142 != 32767) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x573 = 39U;
	int32_t x574 = -770386308;
	int16_t x576 = -131;
	volatile int32_t t143 = 26;

    t143 = (x573^(x574|(x575==x576)));

    if (t143 != -770386341) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x577 = INT64_MAX;
	volatile int8_t x578 = -1;
	volatile int64_t t144 = INT64_MIN;

    t144 = (x577^(x578|(x579==x580)));

    if (t144 != INT64_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = 15168680U;
	int8_t x582 = INT8_MIN;
	uint32_t x583 = 8063U;
	static uint8_t x584 = 102U;
	volatile uint32_t t145 = 10U;

    t145 = (x581^(x582|(x583==x584)));

    if (t145 != 4279798568U) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x586 = -29LL;
	volatile int16_t x587 = -12;
	volatile int64_t t146 = -5LL;

    t146 = (x585^(x586|(x587==x588)));

    if (t146 != -6240LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x589 = UINT8_MAX;
	uint32_t x591 = 107612U;
	static uint16_t x592 = UINT16_MAX;
	volatile int64_t t147 = 585692556924550762LL;

    t147 = (x589^(x590|(x591==x592)));

    if (t147 != -256LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = UINT8_MAX;
	uint64_t x594 = 141539042251LLU;
	int32_t x595 = INT32_MAX;
	static int8_t x596 = INT8_MAX;
	volatile uint64_t t148 = 177844765616635929LLU;

    t148 = (x593^(x594|(x595==x596)));

    if (t148 != 141539042100LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = -1LL;
	static int64_t x599 = -77161916LL;
	int32_t x600 = -3430335;
	int64_t t149 = 43700214LL;

    t149 = (x597^(x598|(x599==x600)));

    if (t149 != 127LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x604 = 15110021700865170LLU;
	volatile int32_t t150 = 222;

    t150 = (x601^(x602|(x603==x604)));

    if (t150 != 32640) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = 98U;
	uint8_t x607 = UINT8_MAX;
	int8_t x608 = INT8_MIN;
	static volatile int32_t t151 = -103008;

    t151 = (x605^(x606|(x607==x608)));

    if (t151 != 109) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x609 = 136258626956182824LLU;
	volatile int16_t x610 = INT16_MIN;
	uint16_t x611 = 11225U;
	uint16_t x612 = UINT16_MAX;
	static uint64_t t152 = 7878708038984LLU;

    t152 = (x609^(x610|(x611==x612)));

    if (t152 != 18310485446753371432LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = INT16_MAX;
	int8_t x614 = INT8_MIN;
	uint8_t x615 = 24U;
	int64_t x616 = INT64_MIN;
	volatile int32_t t153 = 112186657;

    t153 = (x613^(x614|(x615==x616)));

    if (t153 != -32641) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = 12U;
	volatile int16_t x618 = INT16_MIN;
	volatile int16_t x620 = INT16_MIN;
	int32_t t154 = -6563137;

    t154 = (x617^(x618|(x619==x620)));

    if (t154 != -32756) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = -1;
	volatile int16_t x622 = INT16_MIN;
	volatile int32_t x623 = 192513267;
	int16_t x624 = -1;
	static int32_t t155 = 152937;

    t155 = (x621^(x622|(x623==x624)));

    if (t155 != 32767) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x625 = UINT32_MAX;
	int64_t x627 = -5LL;
	uint8_t x628 = 2U;
	volatile uint32_t t156 = 902U;

    t156 = (x625^(x626|(x627==x628)));

    if (t156 != 4294967260U) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x630 = INT8_MIN;
	static int8_t x631 = INT8_MAX;
	uint8_t x632 = 5U;

    t157 = (x629^(x630|(x631==x632)));

    if (t157 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = -94734481627159LL;
	static int8_t x635 = -1;
	int32_t x636 = 13;
	int64_t t158 = 3949872041403976LL;

    t158 = (x633^(x634|(x635==x636)));

    if (t158 != -94734481627158LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 939562U;
	static uint32_t x638 = 12U;
	static int8_t x639 = -57;
	int16_t x640 = -1;
	volatile uint32_t t159 = 41U;

    t159 = (x637^(x638|(x639==x640)));

    if (t159 != 939558U) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x641 = INT16_MAX;
	volatile uint16_t x644 = UINT16_MAX;
	volatile int32_t t160 = -12015213;

    t160 = (x641^(x642|(x643==x644)));

    if (t160 != -32768) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x645 = -1LL;
	static int8_t x646 = 0;
	static int64_t x647 = -1LL;
	volatile int32_t x648 = -1;
	volatile int64_t t161 = 170LL;

    t161 = (x645^(x646|(x647==x648)));

    if (t161 != -2LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 8185LLU;
	static uint8_t x650 = 102U;
	volatile int64_t x651 = INT64_MIN;
	static int64_t x652 = 403519LL;

    t162 = (x649^(x650|(x651==x652)));

    if (t162 != 8095LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = 5731711557091LLU;
	static int32_t x654 = INT32_MAX;
	volatile int16_t x655 = 1;
	uint64_t t163 = 354LLU;

    t163 = (x653^(x654|(x655==x656)));

    if (t163 != 5733703639580LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = UINT16_MAX;
	int32_t x659 = INT32_MIN;
	static volatile int32_t x660 = -850762;
	volatile int32_t t164 = 321;

    t164 = (x657^(x658|(x659==x660)));

    if (t164 != 65514) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x661 = 216U;
	uint8_t x663 = 2U;
	int8_t x664 = -1;
	volatile int32_t t165 = -121419;

    t165 = (x661^(x662|(x663==x664)));

    if (t165 != 32551) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = -1;
	volatile int16_t x666 = INT16_MAX;
	static volatile uint8_t x667 = 1U;
	static volatile int8_t x668 = 1;
	static volatile int32_t t166 = 10;

    t166 = (x665^(x666|(x667==x668)));

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = -1;
	volatile uint64_t x670 = 882LLU;
	int64_t x671 = INT64_MAX;
	uint64_t x672 = UINT64_MAX;
	volatile uint64_t t167 = 1657783LLU;

    t167 = (x669^(x670|(x671==x672)));

    if (t167 != 18446744073709550733LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x674 = 117U;
	int16_t x676 = INT16_MIN;

    t168 = (x673^(x674|(x675==x676)));

    if (t168 != 117U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x677 = 6U;
	uint8_t x678 = 5U;
	int8_t x679 = 1;
	int32_t t169 = -8019;

    t169 = (x677^(x678|(x679==x680)));

    if (t169 != 3) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = -1;
	uint64_t x682 = UINT64_MAX;
	static int16_t x683 = -1733;
	int8_t x684 = -2;
	uint64_t t170 = 43357453LLU;

    t170 = (x681^(x682|(x683==x684)));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = INT16_MAX;
	int16_t x687 = INT16_MIN;
	uint8_t x688 = UINT8_MAX;
	volatile int32_t t171 = -14951064;

    t171 = (x685^(x686|(x687==x688)));

    if (t171 != -2147450881) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = UINT16_MAX;
	static volatile uint32_t x690 = 3U;
	uint64_t x691 = 8827285LLU;
	uint8_t x692 = 5U;
	volatile uint32_t t172 = 2U;

    t172 = (x689^(x690|(x691==x692)));

    if (t172 != 65532U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x693 = INT32_MAX;
	uint64_t x694 = UINT64_MAX;
	int8_t x695 = INT8_MAX;
	int64_t x696 = -1LL;
	uint64_t t173 = 3548311457647777499LLU;

    t173 = (x693^(x694|(x695==x696)));

    if (t173 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -1;
	volatile uint64_t x698 = 128442474LLU;
	static int8_t x699 = INT8_MIN;
	int8_t x700 = -1;
	volatile uint64_t t174 = 59025045LLU;

    t174 = (x697^(x698|(x699==x700)));

    if (t174 != 18446744073581109141LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x701 = 3123403926409LLU;
	uint32_t x702 = 0U;
	int8_t x703 = -1;
	int64_t x704 = INT64_MIN;
	uint64_t t175 = 0LLU;

    t175 = (x701^(x702|(x703==x704)));

    if (t175 != 3123403926409LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = 23655339U;
	int64_t x706 = INT64_MAX;
	int64_t t176 = -25446185745766992LL;

    t176 = (x705^(x706|(x707==x708)));

    if (t176 != 9223372036831120468LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x709 = 5102U;
	int64_t x710 = INT64_MAX;
	static int64_t x711 = INT64_MAX;
	volatile int64_t t177 = 18236310198003297LL;

    t177 = (x709^(x710|(x711==x712)));

    if (t177 != 9223372036854770705LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x713 = -1;
	volatile uint32_t x714 = 258187213U;
	int16_t x715 = INT16_MIN;
	volatile uint32_t t178 = 343254U;

    t178 = (x713^(x714|(x715==x716)));

    if (t178 != 4036780082U) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x717 = INT64_MAX;
	volatile uint32_t x718 = 939548460U;
	uint64_t x719 = UINT64_MAX;
	int8_t x720 = INT8_MAX;

    t179 = (x717^(x718|(x719==x720)));

    if (t179 != 9223372035915227347LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x722 = UINT64_MAX;
	int64_t x724 = INT64_MAX;

    t180 = (x721^(x722|(x723==x724)));

    if (t180 != 32767LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x726 = INT8_MIN;
	int32_t x728 = INT32_MIN;
	int64_t t181 = -105242113871938784LL;

    t181 = (x725^(x726|(x727==x728)));

    if (t181 != 126LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = 32171U;
	volatile int8_t x730 = 32;
	int8_t x731 = -1;
	int16_t x732 = 3970;
	int32_t t182 = -23;

    t182 = (x729^(x730|(x731==x732)));

    if (t182 != 32139) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x733 = INT64_MAX;
	int64_t x734 = INT64_MAX;
	int8_t x736 = -1;

    t183 = (x733^(x734|(x735==x736)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -1;
	int8_t x738 = -1;
	int64_t x740 = 377715097LL;
	int32_t t184 = -773197;

    t184 = (x737^(x738|(x739==x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x741 = INT16_MIN;
	uint8_t x742 = 51U;
	int8_t x744 = INT8_MIN;
	volatile int32_t t185 = 23302025;

    t185 = (x741^(x742|(x743==x744)));

    if (t185 != -32717) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = 30U;
	uint16_t x747 = 1719U;
	int16_t x748 = -1;

    t186 = (x745^(x746|(x747==x748)));

    if (t186 != -31LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x750 = 108U;
	volatile int16_t x751 = -1;
	uint64_t x752 = UINT64_MAX;

    t187 = (x749^(x750|(x751==x752)));

    if (t187 != 4294967186U) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -588069;
	int64_t x754 = -1LL;
	int32_t x755 = -970479700;
	static uint64_t x756 = 3511185231LLU;
	static int64_t t188 = 103984782LL;

    t188 = (x753^(x754|(x755==x756)));

    if (t188 != 588068LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x757 = INT64_MIN;
	int16_t x759 = -1;
	uint16_t x760 = 40U;
	int64_t t189 = -27652942073179LL;

    t189 = (x757^(x758|(x759==x760)));

    if (t189 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x761 = 3100U;
	int16_t x763 = INT16_MIN;
	static uint64_t x764 = 254362132372LLU;
	static volatile int64_t t190 = -1066175919303272LL;

    t190 = (x761^(x762|(x763==x764)));

    if (t190 != -9223372036854772708LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x766 = -1;
	int32_t x767 = -1;
	volatile int16_t x768 = -4023;
	int64_t t191 = 71LL;

    t191 = (x765^(x766|(x767==x768)));

    if (t191 != -6285LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = -1;
	static int16_t x772 = INT16_MIN;
	static uint32_t t192 = 1761886U;

    t192 = (x769^(x770|(x771==x772)));

    if (t192 != 4294713105U) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x774 = -1LL;
	int16_t x775 = 14;

    t193 = (x773^(x774|(x775==x776)));

    if (t193 != -2LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x777 = INT32_MAX;
	volatile int16_t x778 = 100;
	uint8_t x780 = 12U;

    t194 = (x777^(x778|(x779==x780)));

    if (t194 != 2147483547) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x781 = 34U;
	int32_t x783 = 6850;
	volatile int32_t x784 = 446114;
	volatile int32_t t195 = 6802;

    t195 = (x781^(x782|(x783==x784)));

    if (t195 != 32) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x786 = INT16_MIN;
	uint16_t x787 = UINT16_MAX;
	int16_t x788 = 6576;
	volatile int32_t t196 = -126994;

    t196 = (x785^(x786|(x787==x788)));

    if (t196 != 32640) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x789 = UINT32_MAX;
	static int64_t x790 = 63357596045LL;
	int32_t x791 = 3;
	int8_t x792 = -52;
	int64_t t197 = -24102534840694910LL;

    t197 = (x789^(x790|(x791==x792)));

    if (t197 != 61196455538LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x794 = 40880LLU;
	int16_t x795 = INT16_MIN;
	uint16_t x796 = 949U;

    t198 = (x793^(x794|(x795==x796)));

    if (t198 != 40783LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = 9U;
	static int16_t x798 = 6732;
	uint32_t x799 = UINT32_MAX;
	int32_t x800 = INT32_MAX;
	static int32_t t199 = 42438;

    t199 = (x797^(x798|(x799==x800)));

    if (t199 != 6725) { NG(); } else { ; }
	
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

