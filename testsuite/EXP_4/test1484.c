
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

volatile int16_t x1 = INT16_MIN;
int32_t x7 = INT32_MIN;
volatile int32_t x15 = 13;
volatile int8_t x16 = INT8_MAX;
int8_t x18 = -13;
uint16_t x20 = 1U;
static uint32_t x21 = 6U;
static int64_t x27 = -11698098LL;
static uint32_t x30 = 1116743U;
uint32_t x34 = 18U;
int8_t x37 = -1;
static uint16_t x38 = 0U;
uint16_t x40 = 946U;
static int64_t x44 = INT64_MIN;
int32_t x53 = -1;
int8_t x60 = -1;
int32_t x62 = -1;
int16_t x64 = -241;
int32_t t16 = -528;
uint8_t x71 = UINT8_MAX;
static int16_t x83 = -1;
int8_t x84 = INT8_MIN;
int16_t x91 = INT16_MIN;
static int8_t x93 = INT8_MAX;
int32_t t23 = 3069925;
uint64_t x97 = 12944528566991533LLU;
uint32_t x98 = 928353779U;
int16_t x108 = 989;
uint64_t x110 = UINT64_MAX;
uint32_t x112 = 14567U;
uint32_t x114 = 413295U;
int32_t x118 = INT32_MIN;
int64_t x119 = -1LL;
int8_t x123 = INT8_MAX;
uint8_t x125 = 8U;
int64_t x132 = -1LL;
int16_t x135 = -1;
int64_t x137 = 263483847997LL;
uint8_t x141 = 0U;
int64_t x145 = INT64_MIN;
uint64_t x146 = UINT64_MAX;
uint64_t x147 = 2LLU;
static uint8_t x152 = 1U;
int32_t x158 = -198325835;
volatile int8_t x162 = INT8_MIN;
int8_t x169 = INT8_MAX;
int32_t t42 = 0;
int8_t x176 = 3;
int32_t t43 = -6;
int16_t x192 = INT16_MIN;
int16_t x206 = -65;
uint16_t x210 = 363U;
int16_t x212 = -1;
volatile int64_t x215 = -1LL;
int32_t x229 = INT32_MIN;
int64_t x232 = 50456126LL;
uint64_t x234 = 38521310LLU;
uint32_t x236 = 1040084560U;
volatile int32_t t60 = -711;
uint32_t t61 = 1U;
int8_t x250 = -1;
int64_t x254 = INT64_MIN;
static uint16_t x257 = 343U;
int16_t x263 = INT16_MIN;
int16_t x268 = 2936;
volatile int16_t x269 = -61;
int64_t x270 = INT64_MIN;
int32_t t69 = 4110;
uint32_t x286 = 3286U;
volatile int32_t t72 = INT32_MIN;
static int64_t x296 = INT64_MIN;
static int64_t x298 = INT64_MAX;
static int32_t x300 = INT32_MAX;
static uint8_t x301 = UINT8_MAX;
int8_t x308 = -1;
int8_t x309 = INT8_MAX;
static int8_t x310 = INT8_MAX;
uint64_t x311 = UINT64_MAX;
volatile int32_t t77 = -159;
static volatile int16_t x315 = 3;
volatile uint16_t x323 = 120U;
static volatile int32_t x335 = 0;
uint64_t x340 = 5549118395882241547LLU;
volatile int32_t t84 = 389015432;
int32_t x346 = INT32_MIN;
volatile int8_t x353 = INT8_MIN;
int32_t t88 = 1928736;
uint8_t x365 = 54U;
int8_t x368 = 0;
uint8_t x370 = UINT8_MAX;
volatile int8_t x372 = INT8_MAX;
int32_t x374 = 24675;
static volatile int16_t x378 = -1194;
static int64_t x380 = -19172473LL;
volatile uint32_t t94 = 3472806U;
uint64_t x388 = UINT64_MAX;
static uint64_t x393 = 479076690LLU;
int16_t x399 = -5;
static volatile uint64_t t99 = 427590625803414031LLU;
uint32_t x402 = UINT32_MAX;
int32_t x403 = -318826;
int8_t x406 = -1;
int16_t x409 = INT16_MAX;
int64_t x413 = INT64_MIN;
uint16_t x414 = 88U;
uint64_t x416 = 202245098LLU;
int8_t x422 = 5;
int16_t x426 = 306;
volatile int32_t t106 = -4714;
static int64_t x431 = INT64_MAX;
volatile uint64_t x432 = 5813180260LLU;
int8_t x433 = INT8_MIN;
static int64_t x438 = 79LL;
volatile int32_t t109 = 994429051;
int8_t x441 = 1;
volatile uint64_t x444 = 7081941370143LLU;
uint32_t x445 = UINT32_MAX;
int32_t x448 = -92379;
int8_t x451 = INT8_MAX;
int64_t x456 = -1LL;
int16_t x459 = -2273;
int64_t x464 = INT64_MAX;
uint64_t x471 = UINT64_MAX;
volatile int8_t x472 = 16;
uint8_t x476 = 9U;
int32_t t118 = INT32_MAX;
int8_t x478 = -1;
int64_t x482 = INT64_MAX;
int32_t t120 = -4645;
volatile uint64_t x485 = UINT64_MAX;
volatile uint64_t t121 = UINT64_MAX;
int8_t x489 = INT8_MIN;
uint64_t x493 = UINT64_MAX;
volatile uint32_t t125 = 60249U;
int32_t t126 = -266;
uint8_t x509 = 0U;
int8_t x513 = INT8_MIN;
int16_t x516 = -1;
int32_t x517 = 845213422;
static uint8_t x519 = UINT8_MAX;
uint32_t x520 = 1913U;
int32_t x523 = -1;
uint64_t t130 = UINT64_MAX;
int16_t x527 = -1;
uint64_t x533 = UINT64_MAX;
int32_t x534 = INT32_MIN;
int64_t x542 = -1LL;
uint32_t x550 = 17938U;
int32_t x551 = -589551808;
uint8_t x558 = 6U;
volatile int32_t t141 = -55068;
int32_t x569 = INT32_MIN;
int64_t x575 = -1LL;
uint16_t x580 = 0U;
volatile int32_t t147 = INT32_MIN;
uint32_t x597 = UINT32_MAX;
int16_t x602 = -1;
static int8_t x609 = -49;
volatile int16_t x619 = -1;
static volatile int64_t t154 = INT64_MAX;
static int32_t t156 = INT32_MIN;
static uint16_t x630 = 5516U;
uint16_t x631 = UINT16_MAX;
int8_t x635 = INT8_MIN;
static volatile int32_t t158 = INT32_MIN;
int16_t x638 = 809;
int64_t x645 = INT64_MAX;
int16_t x656 = -1;
int32_t x661 = -6560;
volatile uint32_t x666 = 30U;
int32_t t166 = -97329;
int64_t t168 = -30698933LL;
static volatile int8_t x685 = -1;
volatile int32_t t176 = 1195120;
volatile int16_t x710 = INT16_MAX;
int32_t x715 = INT32_MAX;
static volatile int32_t t178 = 103527288;
int8_t x724 = 2;
static uint16_t x733 = 5021U;
int8_t x736 = INT8_MIN;
static volatile int32_t t183 = 2776754;
int16_t x740 = INT16_MIN;
volatile uint64_t x741 = 4495LLU;
uint64_t x745 = 7231752012534LLU;
uint32_t x746 = 4901U;
int32_t x748 = -1;
volatile int64_t x754 = -9795LL;
int64_t x755 = INT64_MAX;
uint32_t x757 = UINT32_MAX;
uint16_t x758 = UINT16_MAX;
int64_t x761 = -1LL;
static int32_t x767 = INT32_MIN;
int16_t x768 = -1;
int64_t x774 = -1LL;
uint32_t x779 = UINT32_MAX;
int8_t x780 = INT8_MIN;
static int8_t x783 = -1;
int32_t t196 = INT32_MAX;
int8_t x790 = INT8_MIN;
volatile int64_t x791 = INT64_MAX;
uint16_t x793 = 5011U;
int8_t x794 = -1;
volatile int8_t x796 = 55;
uint32_t t199 = 31485934U;


void f0(void) {
    	uint16_t x2 = 0U;
	uint16_t x3 = 2U;
	static int16_t x4 = -1;
	int32_t t0 = -1;

    t0 = (x1^(x2==(x3==x4)));

    if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 8U;
	static uint16_t x6 = 174U;
	int16_t x8 = -874;
	volatile int32_t t1 = -327798622;

    t1 = (x5^(x6==(x7==x8)));

    if (t1 != 8) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = -1LL;
	uint32_t x10 = 1872078345U;
	uint32_t x11 = UINT32_MAX;
	int32_t x12 = INT32_MIN;
	volatile int64_t t2 = 192995900812LL;

    t2 = (x9^(x10==(x11==x12)));

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	int64_t x14 = INT64_MAX;
	int32_t t3 = -450;

    t3 = (x13^(x14==(x15==x16)));

    if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 8176U;
	int16_t x19 = INT16_MIN;
	volatile int32_t t4 = -1;

    t4 = (x17^(x18==(x19==x20)));

    if (t4 != 8176) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x22 = 939LLU;
	uint8_t x23 = UINT8_MAX;
	int64_t x24 = INT64_MIN;
	static uint32_t t5 = 16U;

    t5 = (x21^(x22==(x23==x24)));

    if (t5 != 6U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x25 = 3531170605LLU;
	static uint64_t x26 = 98345LLU;
	static int64_t x28 = INT64_MIN;
	volatile uint64_t t6 = 607989882LLU;

    t6 = (x25^(x26==(x27==x28)));

    if (t6 != 3531170605LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -12;
	static volatile uint16_t x31 = 6U;
	uint8_t x32 = 0U;
	int32_t t7 = 550777;

    t7 = (x29^(x30==(x31==x32)));

    if (t7 != -12) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	int64_t x35 = -1LL;
	int64_t x36 = INT64_MIN;
	volatile int64_t t8 = INT64_MAX;

    t8 = (x33^(x34==(x35==x36)));

    if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x39 = UINT16_MAX;
	int32_t t9 = 61;

    t9 = (x37^(x38==(x39==x40)));

    if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 74U;
	static uint8_t x42 = 86U;
	int16_t x43 = INT16_MIN;
	static int32_t t10 = -33130411;

    t10 = (x41^(x42==(x43==x44)));

    if (t10 != 74) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = -1LL;
	volatile uint64_t x46 = 28360668LLU;
	static uint16_t x47 = UINT16_MAX;
	int64_t x48 = 61785973LL;
	int64_t t11 = 464LL;

    t11 = (x45^(x46==(x47==x48)));

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -1;
	static uint32_t x50 = 1533804U;
	uint64_t x51 = 2247177461063683LLU;
	int64_t x52 = INT64_MAX;
	volatile int32_t t12 = 4026;

    t12 = (x49^(x50==(x51==x52)));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x54 = 15815LL;
	int16_t x55 = INT16_MIN;
	int32_t x56 = INT32_MIN;
	static int32_t t13 = -27424;

    t13 = (x53^(x54==(x55==x56)));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 613282U;
	static int8_t x58 = 1;
	int32_t x59 = INT32_MIN;
	volatile uint32_t t14 = 28U;

    t14 = (x57^(x58==(x59==x60)));

    if (t14 != 613282U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	int64_t x63 = 3487LL;
	int32_t t15 = 1466876;

    t15 = (x61^(x62==(x63==x64)));

    if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = -1;
	static volatile int16_t x66 = -1;
	static uint16_t x67 = 77U;
	uint16_t x68 = 0U;

    t16 = (x65^(x66==(x67==x68)));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 98005245U;
	uint64_t x70 = UINT64_MAX;
	uint32_t x72 = UINT32_MAX;
	static volatile uint32_t t17 = 11013U;

    t17 = (x69^(x70==(x71==x72)));

    if (t17 != 98005245U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x73 = INT8_MIN;
	static int8_t x74 = INT8_MIN;
	static int8_t x75 = 0;
	volatile uint16_t x76 = UINT16_MAX;
	int32_t t18 = -220;

    t18 = (x73^(x74==(x75==x76)));

    if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -20;
	int8_t x78 = INT8_MIN;
	int8_t x79 = -1;
	uint8_t x80 = UINT8_MAX;
	int32_t t19 = -63015749;

    t19 = (x77^(x78==(x79==x80)));

    if (t19 != -20) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	int8_t x82 = 2;
	volatile int32_t t20 = -502;

    t20 = (x81^(x82==(x83==x84)));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 36877686009236588LLU;
	int8_t x86 = -47;
	uint32_t x87 = UINT32_MAX;
	volatile int64_t x88 = 18LL;
	static volatile uint64_t t21 = 17370086531002LLU;

    t21 = (x85^(x86==(x87==x88)));

    if (t21 != 36877686009236588LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x89 = 7423291U;
	static int16_t x90 = INT16_MAX;
	uint64_t x92 = 178369023023233124LLU;
	uint32_t t22 = 904276201U;

    t22 = (x89^(x90==(x91==x92)));

    if (t22 != 7423291U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x94 = -1;
	uint64_t x95 = 1381840991441693LLU;
	int16_t x96 = -434;

    t23 = (x93^(x94==(x95==x96)));

    if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x99 = -695943333;
	int32_t x100 = INT32_MIN;
	volatile uint64_t t24 = 73501115550395LLU;

    t24 = (x97^(x98==(x99==x100)));

    if (t24 != 12944528566991533LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = -1LL;
	int64_t x102 = INT64_MIN;
	int16_t x103 = INT16_MIN;
	int32_t x104 = -1;
	volatile int64_t t25 = -1LL;

    t25 = (x101^(x102==(x103==x104)));

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MAX;
	static int64_t x106 = 0LL;
	int16_t x107 = -310;
	volatile int32_t t26 = 1062273518;

    t26 = (x105^(x106==(x107==x108)));

    if (t26 != 2147483646) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = -320659LL;
	int64_t x111 = 2020958158LL;
	int64_t t27 = 72329640LL;

    t27 = (x109^(x110==(x111==x112)));

    if (t27 != -320659LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	uint32_t x115 = UINT32_MAX;
	uint16_t x116 = 40U;
	int32_t t28 = 1;

    t28 = (x113^(x114==(x115==x116)));

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = INT64_MAX;
	volatile uint32_t x120 = UINT32_MAX;
	int64_t t29 = INT64_MAX;

    t29 = (x117^(x118==(x119==x120)));

    if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 6;
	int16_t x122 = INT16_MIN;
	uint16_t x124 = UINT16_MAX;
	int32_t t30 = -7702962;

    t30 = (x121^(x122==(x123==x124)));

    if (t30 != 6) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x126 = 1;
	volatile uint64_t x127 = 14284923193018283LLU;
	uint32_t x128 = 109398U;
	volatile int32_t t31 = -367437;

    t31 = (x125^(x126==(x127==x128)));

    if (t31 != 8) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = -466844;
	static int64_t x130 = -599708336900094830LL;
	int64_t x131 = -74335745058LL;
	static int32_t t32 = -103964;

    t32 = (x129^(x130==(x131==x132)));

    if (t32 != -466844) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = UINT64_MAX;
	uint64_t x134 = 112266767755604368LLU;
	int64_t x136 = INT64_MIN;
	volatile uint64_t t33 = UINT64_MAX;

    t33 = (x133^(x134==(x135==x136)));

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int32_t x138 = -1;
	int64_t x139 = -3463750114375628294LL;
	int8_t x140 = -1;
	volatile int64_t t34 = 7098893693LL;

    t34 = (x137^(x138==(x139==x140)));

    if (t34 != 263483847997LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x142 = UINT32_MAX;
	int32_t x143 = INT32_MAX;
	int64_t x144 = INT64_MAX;
	volatile int32_t t35 = 91926;

    t35 = (x141^(x142==(x143==x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x148 = 124829054;
	static volatile int64_t t36 = INT64_MIN;

    t36 = (x145^(x146==(x147==x148)));

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = -1;
	uint8_t x150 = 20U;
	int8_t x151 = INT8_MAX;
	volatile int32_t t37 = -76;

    t37 = (x149^(x150==(x151==x152)));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	uint16_t x154 = UINT16_MAX;
	int64_t x155 = INT64_MIN;
	int8_t x156 = 27;
	int32_t t38 = INT32_MIN;

    t38 = (x153^(x154==(x155==x156)));

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = INT64_MIN;
	uint16_t x159 = UINT16_MAX;
	static uint16_t x160 = UINT16_MAX;
	int64_t t39 = INT64_MIN;

    t39 = (x157^(x158==(x159==x160)));

    if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = -1;
	int32_t x163 = INT32_MIN;
	static int16_t x164 = INT16_MAX;
	volatile int32_t t40 = 201578986;

    t40 = (x161^(x162==(x163==x164)));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = INT16_MAX;
	volatile int32_t x166 = INT32_MIN;
	uint8_t x167 = 0U;
	uint32_t x168 = UINT32_MAX;
	int32_t t41 = -66512901;

    t41 = (x165^(x166==(x167==x168)));

    if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x170 = INT8_MIN;
	static int8_t x171 = INT8_MIN;
	int32_t x172 = INT32_MIN;

    t42 = (x169^(x170==(x171==x172)));

    if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = 1;
	static int16_t x174 = INT16_MIN;
	int16_t x175 = INT16_MAX;

    t43 = (x173^(x174==(x175==x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x177 = INT16_MAX;
	int8_t x178 = -1;
	int32_t x179 = -37825;
	int32_t x180 = INT32_MAX;
	volatile int32_t t44 = 14052289;

    t44 = (x177^(x178==(x179==x180)));

    if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = -1;
	int16_t x182 = -732;
	int32_t x183 = 15946534;
	volatile int64_t x184 = -4279156147014LL;
	volatile int32_t t45 = -8;

    t45 = (x181^(x182==(x183==x184)));

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x185 = UINT64_MAX;
	int16_t x186 = -3011;
	int32_t x187 = INT32_MAX;
	int64_t x188 = -324118013074LL;
	volatile uint64_t t46 = UINT64_MAX;

    t46 = (x185^(x186==(x187==x188)));

    if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = 1743598508U;
	int64_t x190 = INT64_MAX;
	uint32_t x191 = UINT32_MAX;
	uint32_t t47 = 7967U;

    t47 = (x189^(x190==(x191==x192)));

    if (t47 != 1743598508U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	uint64_t x194 = 14317153LLU;
	static int32_t x195 = -1;
	uint16_t x196 = UINT16_MAX;
	int32_t t48 = INT32_MIN;

    t48 = (x193^(x194==(x195==x196)));

    if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = 1046;
	volatile int16_t x198 = 25;
	volatile uint64_t x199 = 30LLU;
	int32_t x200 = -1;
	int32_t t49 = 1323;

    t49 = (x197^(x198==(x199==x200)));

    if (t49 != 1046) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	int8_t x202 = 1;
	uint32_t x203 = 12949988U;
	int8_t x204 = -1;
	int32_t t50 = INT32_MIN;

    t50 = (x201^(x202==(x203==x204)));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int8_t x205 = INT8_MAX;
	uint8_t x207 = UINT8_MAX;
	volatile int32_t x208 = INT32_MAX;
	int32_t t51 = 574310;

    t51 = (x205^(x206==(x207==x208)));

    if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int64_t x209 = INT64_MAX;
	static int16_t x211 = 2706;
	static int64_t t52 = INT64_MAX;

    t52 = (x209^(x210==(x211==x212)));

    if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MAX;
	int64_t x214 = INT64_MIN;
	int8_t x216 = -1;
	static int32_t t53 = 459;

    t53 = (x213^(x214==(x215==x216)));

    if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	static uint16_t x218 = UINT16_MAX;
	int16_t x219 = 14;
	volatile int64_t x220 = INT64_MIN;
	int32_t t54 = INT32_MIN;

    t54 = (x217^(x218==(x219==x220)));

    if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x221 = INT8_MIN;
	uint8_t x222 = 111U;
	int64_t x223 = INT64_MIN;
	int16_t x224 = INT16_MIN;
	volatile int32_t t55 = 308532226;

    t55 = (x221^(x222==(x223==x224)));

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -1;
	uint8_t x226 = 4U;
	int64_t x227 = INT64_MAX;
	int8_t x228 = -1;
	static volatile int32_t t56 = 4498;

    t56 = (x225^(x226==(x227==x228)));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x230 = INT16_MIN;
	static int32_t x231 = 9364;
	volatile int32_t t57 = INT32_MIN;

    t57 = (x229^(x230==(x231==x232)));

    if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MAX;
	uint32_t x235 = 39825062U;
	volatile int32_t t58 = INT32_MAX;

    t58 = (x233^(x234==(x235==x236)));

    if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = -14376403;
	uint64_t x238 = 164451044708617LLU;
	volatile int8_t x239 = INT8_MIN;
	int64_t x240 = INT64_MIN;
	int32_t t59 = 242579507;

    t59 = (x237^(x238==(x239==x240)));

    if (t59 != -14376403) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x241 = -243;
	int16_t x242 = INT16_MIN;
	int32_t x243 = INT32_MIN;
	int16_t x244 = 7;

    t60 = (x241^(x242==(x243==x244)));

    if (t60 != -243) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 2596873U;
	int8_t x246 = INT8_MIN;
	int16_t x247 = -1;
	volatile uint32_t x248 = 258988U;

    t61 = (x245^(x246==(x247==x248)));

    if (t61 != 2596873U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 1U;
	int8_t x251 = -2;
	uint64_t x252 = 359035742875LLU;
	int32_t t62 = 10837;

    t62 = (x249^(x250==(x251==x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MIN;
	int64_t x255 = INT64_MIN;
	uint8_t x256 = UINT8_MAX;
	int64_t t63 = INT64_MIN;

    t63 = (x253^(x254==(x255==x256)));

    if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x258 = -991LL;
	int16_t x259 = INT16_MIN;
	int64_t x260 = -48508266LL;
	int32_t t64 = -3736186;

    t64 = (x257^(x258==(x259==x260)));

    if (t64 != 343) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = UINT64_MAX;
	static uint16_t x262 = UINT16_MAX;
	uint16_t x264 = 63U;
	static volatile uint64_t t65 = UINT64_MAX;

    t65 = (x261^(x262==(x263==x264)));

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x265 = -1;
	uint64_t x266 = 1354083189LLU;
	int32_t x267 = INT32_MIN;
	int32_t t66 = 447028228;

    t66 = (x265^(x266==(x267==x268)));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x271 = INT32_MIN;
	static volatile uint16_t x272 = 0U;
	int32_t t67 = 1;

    t67 = (x269^(x270==(x271==x272)));

    if (t67 != -61) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = 508843U;
	uint8_t x274 = 6U;
	int64_t x275 = 103LL;
	volatile int16_t x276 = -547;
	static volatile uint32_t t68 = 7U;

    t68 = (x273^(x274==(x275==x276)));

    if (t68 != 508843U) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x277 = INT16_MIN;
	int8_t x278 = -1;
	uint8_t x279 = 4U;
	int16_t x280 = -13;

    t69 = (x277^(x278==(x279==x280)));

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x281 = INT8_MIN;
	uint32_t x282 = 741539623U;
	int64_t x283 = -1979826260LL;
	int32_t x284 = INT32_MAX;
	static int32_t t70 = 22;

    t70 = (x281^(x282==(x283==x284)));

    if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 8065339U;
	uint64_t x287 = 32615356496LLU;
	volatile int64_t x288 = -1LL;
	volatile uint32_t t71 = 8U;

    t71 = (x285^(x286==(x287==x288)));

    if (t71 != 8065339U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	int16_t x290 = 112;
	static int8_t x291 = 14;
	int16_t x292 = -1;

    t72 = (x289^(x290==(x291==x292)));

    if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x293 = INT8_MAX;
	int16_t x294 = INT16_MIN;
	uint64_t x295 = 1LLU;
	static int32_t t73 = 478;

    t73 = (x293^(x294==(x295==x296)));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x297 = -1;
	int64_t x299 = -1LL;
	int32_t t74 = 159686504;

    t74 = (x297^(x298==(x299==x300)));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x302 = -7;
	int32_t x303 = -1;
	static int8_t x304 = INT8_MIN;
	volatile int32_t t75 = -52476;

    t75 = (x301^(x302==(x303==x304)));

    if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MIN;
	int16_t x306 = -2;
	uint16_t x307 = 119U;
	int32_t t76 = INT32_MIN;

    t76 = (x305^(x306==(x307==x308)));

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x312 = INT32_MAX;

    t77 = (x309^(x310==(x311==x312)));

    if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x313 = -7609760374985LL;
	static uint8_t x314 = 0U;
	static int16_t x316 = 4184;
	int64_t t78 = -59LL;

    t78 = (x313^(x314==(x315==x316)));

    if (t78 != -7609760374986LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = UINT32_MAX;
	static int16_t x318 = INT16_MAX;
	uint8_t x319 = 6U;
	int8_t x320 = INT8_MIN;
	volatile uint32_t t79 = UINT32_MAX;

    t79 = (x317^(x318==(x319==x320)));

    if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = -3417;
	uint16_t x322 = 2547U;
	uint8_t x324 = 2U;
	volatile int32_t t80 = -743;

    t80 = (x321^(x322==(x323==x324)));

    if (t80 != -3417) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MIN;
	uint8_t x326 = UINT8_MAX;
	static uint16_t x327 = UINT16_MAX;
	uint16_t x328 = 6403U;
	int32_t t81 = 22723;

    t81 = (x325^(x326==(x327==x328)));

    if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MAX;
	int64_t x330 = 75045794757LL;
	int8_t x331 = INT8_MAX;
	static int16_t x332 = INT16_MAX;
	volatile int32_t t82 = INT32_MAX;

    t82 = (x329^(x330==(x331==x332)));

    if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = 16640077256276LLU;
	int32_t x334 = INT32_MIN;
	int32_t x336 = INT32_MAX;
	volatile uint64_t t83 = 18723324LLU;

    t83 = (x333^(x334==(x335==x336)));

    if (t83 != 16640077256276LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint16_t x337 = 684U;
	static volatile int64_t x338 = 8082LL;
	uint64_t x339 = UINT64_MAX;

    t84 = (x337^(x338==(x339==x340)));

    if (t84 != 684) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = 8U;
	static int16_t x342 = -195;
	static uint16_t x343 = 0U;
	static volatile uint64_t x344 = UINT64_MAX;
	volatile int32_t t85 = 24;

    t85 = (x341^(x342==(x343==x344)));

    if (t85 != 8) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = 25;
	volatile int16_t x347 = 8558;
	int32_t x348 = 956;
	static int32_t t86 = 16;

    t86 = (x345^(x346==(x347==x348)));

    if (t86 != 25) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = -1;
	uint8_t x350 = 0U;
	int64_t x351 = INT64_MIN;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = -737;

    t87 = (x349^(x350==(x351==x352)));

    if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x354 = INT32_MAX;
	volatile int8_t x355 = -34;
	uint32_t x356 = UINT32_MAX;

    t88 = (x353^(x354==(x355==x356)));

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x357 = INT32_MAX;
	volatile int64_t x358 = 5401921210LL;
	int32_t x359 = INT32_MIN;
	int8_t x360 = INT8_MIN;
	int32_t t89 = INT32_MAX;

    t89 = (x357^(x358==(x359==x360)));

    if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	int8_t x362 = 1;
	int8_t x363 = INT8_MAX;
	uint8_t x364 = 3U;
	int32_t t90 = -1;

    t90 = (x361^(x362==(x363==x364)));

    if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x366 = INT64_MIN;
	int32_t x367 = INT32_MIN;
	int32_t t91 = -13;

    t91 = (x365^(x366==(x367==x368)));

    if (t91 != 54) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = 8639148LL;
	static int8_t x371 = 1;
	static int64_t t92 = -33841557643LL;

    t92 = (x369^(x370==(x371==x372)));

    if (t92 != 8639148LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = -1;
	int32_t x375 = -1;
	int32_t x376 = -17358;
	int32_t t93 = -3;

    t93 = (x373^(x374==(x375==x376)));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x377 = 5318U;
	static uint16_t x379 = 101U;

    t94 = (x377^(x378==(x379==x380)));

    if (t94 != 5318U) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = -1;
	int32_t x382 = INT32_MIN;
	static volatile int8_t x383 = INT8_MAX;
	static volatile int64_t x384 = -90630LL;
	static int32_t t95 = 12800050;

    t95 = (x381^(x382==(x383==x384)));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x385 = UINT16_MAX;
	int16_t x386 = -1;
	uint32_t x387 = UINT32_MAX;
	int32_t t96 = -72021;

    t96 = (x385^(x386==(x387==x388)));

    if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = 122U;
	int32_t x390 = -1;
	static int32_t x391 = 12;
	static volatile uint8_t x392 = UINT8_MAX;
	int32_t t97 = -664175;

    t97 = (x389^(x390==(x391==x392)));

    if (t97 != 122) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x394 = INT32_MIN;
	static uint16_t x395 = 5889U;
	static uint64_t x396 = 23637LLU;
	uint64_t t98 = 2LLU;

    t98 = (x393^(x394==(x395==x396)));

    if (t98 != 479076690LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x397 = 190769387LLU;
	int8_t x398 = INT8_MAX;
	int8_t x400 = -1;

    t99 = (x397^(x398==(x399==x400)));

    if (t99 != 190769387LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MAX;
	uint32_t x404 = 7287U;
	volatile int32_t t100 = 28;

    t100 = (x401^(x402==(x403==x404)));

    if (t100 != 32767) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = -1;
	static volatile int8_t x407 = 0;
	int8_t x408 = -27;
	volatile int32_t t101 = -2;

    t101 = (x405^(x406==(x407==x408)));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x410 = -1;
	static uint32_t x411 = 1U;
	volatile int16_t x412 = INT16_MIN;
	static volatile int32_t t102 = -9159536;

    t102 = (x409^(x410==(x411==x412)));

    if (t102 != 32767) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint16_t x415 = 119U;
	int64_t t103 = INT64_MIN;

    t103 = (x413^(x414==(x415==x416)));

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -1;
	int8_t x418 = INT8_MAX;
	static int16_t x419 = 3;
	uint8_t x420 = 8U;
	volatile int32_t t104 = -283299593;

    t104 = (x417^(x418==(x419==x420)));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x421 = INT32_MIN;
	uint64_t x423 = 2068169930LLU;
	volatile int16_t x424 = INT16_MAX;
	int32_t t105 = INT32_MIN;

    t105 = (x421^(x422==(x423==x424)));

    if (t105 != INT32_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = 0;
	int8_t x427 = -5;
	volatile uint8_t x428 = 58U;

    t106 = (x425^(x426==(x427==x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = 4048815LL;
	int16_t x430 = 1;
	volatile int64_t t107 = 1706854401964LL;

    t107 = (x429^(x430==(x431==x432)));

    if (t107 != 4048815LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x434 = -1LL;
	uint32_t x435 = UINT32_MAX;
	int32_t x436 = -16;
	static int32_t t108 = -465099139;

    t108 = (x433^(x434==(x435==x436)));

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = 79472753;
	int64_t x439 = -1LL;
	volatile int32_t x440 = INT32_MAX;

    t109 = (x437^(x438==(x439==x440)));

    if (t109 != 79472753) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x442 = INT8_MIN;
	int32_t x443 = -2;
	volatile int32_t t110 = -1525;

    t110 = (x441^(x442==(x443==x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int32_t x446 = 465;
	int8_t x447 = -2;
	volatile uint32_t t111 = UINT32_MAX;

    t111 = (x445^(x446==(x447==x448)));

    if (t111 != UINT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 766759U;
	uint64_t x450 = 12992096LLU;
	volatile uint16_t x452 = 852U;
	static uint32_t t112 = 487781U;

    t112 = (x449^(x450==(x451==x452)));

    if (t112 != 766759U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x453 = -101;
	uint16_t x454 = 13U;
	uint64_t x455 = 53041053511LLU;
	volatile int32_t t113 = 43939;

    t113 = (x453^(x454==(x455==x456)));

    if (t113 != -101) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = UINT64_MAX;
	static int8_t x458 = INT8_MIN;
	int32_t x460 = -70244;
	uint64_t t114 = UINT64_MAX;

    t114 = (x457^(x458==(x459==x460)));

    if (t114 != UINT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = UINT8_MAX;
	volatile int32_t x462 = -3937;
	volatile uint64_t x463 = 41513LLU;
	int32_t t115 = -558753199;

    t115 = (x461^(x462==(x463==x464)));

    if (t115 != 255) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = UINT16_MAX;
	static int32_t x466 = INT32_MIN;
	static uint32_t x467 = 0U;
	int16_t x468 = INT16_MIN;
	int32_t t116 = -41423129;

    t116 = (x465^(x466==(x467==x468)));

    if (t116 != 65535) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x469 = -1;
	uint16_t x470 = 644U;
	int32_t t117 = -7;

    t117 = (x469^(x470==(x471==x472)));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MAX;
	volatile int16_t x474 = INT16_MIN;
	int8_t x475 = INT8_MIN;

    t118 = (x473^(x474==(x475==x476)));

    if (t118 != INT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint8_t x477 = 0U;
	static int32_t x479 = INT32_MIN;
	uint8_t x480 = 12U;
	static volatile int32_t t119 = -976989;

    t119 = (x477^(x478==(x479==x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = INT16_MAX;
	int8_t x483 = 10;
	static int8_t x484 = -1;

    t120 = (x481^(x482==(x483==x484)));

    if (t120 != 32767) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x486 = 89;
	static int16_t x487 = 1954;
	int8_t x488 = -1;

    t121 = (x485^(x486==(x487==x488)));

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x490 = UINT16_MAX;
	int32_t x491 = INT32_MIN;
	int8_t x492 = INT8_MIN;
	volatile int32_t t122 = 21443770;

    t122 = (x489^(x490==(x491==x492)));

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x494 = 509220419;
	int32_t x495 = INT32_MAX;
	static int32_t x496 = -1;
	uint64_t t123 = UINT64_MAX;

    t123 = (x493^(x494==(x495==x496)));

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = 1183LLU;
	static int8_t x498 = INT8_MIN;
	static volatile int16_t x499 = -2545;
	int64_t x500 = INT64_MIN;
	uint64_t t124 = 475324LLU;

    t124 = (x497^(x498==(x499==x500)));

    if (t124 != 1183LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = 1500U;
	uint64_t x502 = 64416495LLU;
	uint64_t x503 = 24453806LLU;
	volatile int16_t x504 = 1;

    t125 = (x501^(x502==(x503==x504)));

    if (t125 != 1500U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	volatile int32_t x506 = INT32_MIN;
	static uint32_t x507 = 72237U;
	static int64_t x508 = INT64_MIN;

    t126 = (x505^(x506==(x507==x508)));

    if (t126 != -128) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x510 = INT32_MIN;
	uint8_t x511 = UINT8_MAX;
	uint8_t x512 = UINT8_MAX;
	int32_t t127 = -45563;

    t127 = (x509^(x510==(x511==x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x514 = 15U;
	static int32_t x515 = 10451;
	volatile int32_t t128 = 294802977;

    t128 = (x513^(x514==(x515==x516)));

    if (t128 != -128) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x518 = 720075U;
	int32_t t129 = 16061806;

    t129 = (x517^(x518==(x519==x520)));

    if (t129 != 845213422) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = UINT64_MAX;
	uint16_t x522 = UINT16_MAX;
	int64_t x524 = -1LL;

    t130 = (x521^(x522==(x523==x524)));

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 7U;
	int16_t x526 = INT16_MIN;
	volatile uint16_t x528 = UINT16_MAX;
	volatile int32_t t131 = -24;

    t131 = (x525^(x526==(x527==x528)));

    if (t131 != 7) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x529 = -1;
	int8_t x530 = 18;
	volatile uint8_t x531 = 12U;
	int64_t x532 = INT64_MAX;
	static volatile int32_t t132 = -2075;

    t132 = (x529^(x530==(x531==x532)));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x535 = 10509175874092LLU;
	static volatile int64_t x536 = -587581644689LL;
	volatile uint64_t t133 = UINT64_MAX;

    t133 = (x533^(x534==(x535==x536)));

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x537 = UINT64_MAX;
	volatile int16_t x538 = INT16_MAX;
	uint16_t x539 = 13112U;
	uint8_t x540 = UINT8_MAX;
	uint64_t t134 = UINT64_MAX;

    t134 = (x537^(x538==(x539==x540)));

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -358;
	static int32_t x543 = -1;
	int32_t x544 = INT32_MIN;
	static int32_t t135 = 10936;

    t135 = (x541^(x542==(x543==x544)));

    if (t135 != -358) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MIN;
	static uint32_t x546 = UINT32_MAX;
	uint8_t x547 = UINT8_MAX;
	volatile int8_t x548 = -1;
	volatile int32_t t136 = INT32_MIN;

    t136 = (x545^(x546==(x547==x548)));

    if (t136 != INT32_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MAX;
	int64_t x552 = INT64_MIN;
	int32_t t137 = 13;

    t137 = (x549^(x550==(x551==x552)));

    if (t137 != 32767) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MIN;
	int32_t x554 = 25;
	uint64_t x555 = 6383976321362LLU;
	int8_t x556 = 13;
	volatile int64_t t138 = INT64_MIN;

    t138 = (x553^(x554==(x555==x556)));

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x557 = 2;
	uint32_t x559 = UINT32_MAX;
	int8_t x560 = INT8_MIN;
	volatile int32_t t139 = -126;

    t139 = (x557^(x558==(x559==x560)));

    if (t139 != 2) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	int16_t x562 = INT16_MIN;
	int32_t x563 = -1;
	int16_t x564 = INT16_MIN;
	volatile int32_t t140 = INT32_MIN;

    t140 = (x561^(x562==(x563==x564)));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = -1;
	static int8_t x566 = 0;
	volatile uint64_t x567 = 8626831429913LLU;
	uint8_t x568 = 2U;

    t141 = (x565^(x566==(x567==x568)));

    if (t141 != -2) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x570 = -1;
	int16_t x571 = 0;
	static int32_t x572 = -1;
	int32_t t142 = INT32_MIN;

    t142 = (x569^(x570==(x571==x572)));

    if (t142 != INT32_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -791;
	static int64_t x574 = INT64_MIN;
	uint16_t x576 = 112U;
	int32_t t143 = -1;

    t143 = (x573^(x574==(x575==x576)));

    if (t143 != -791) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = 0U;
	volatile int32_t x578 = -1;
	int16_t x579 = -322;
	int32_t t144 = 414004;

    t144 = (x577^(x578==(x579==x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = -1;
	static int8_t x582 = INT8_MIN;
	int16_t x583 = INT16_MIN;
	int16_t x584 = INT16_MAX;
	volatile int32_t t145 = 3691989;

    t145 = (x581^(x582==(x583==x584)));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -1;
	uint16_t x586 = UINT16_MAX;
	uint32_t x587 = 831856U;
	static uint8_t x588 = 17U;
	volatile int32_t t146 = 252004509;

    t146 = (x585^(x586==(x587==x588)));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	uint32_t x590 = 4U;
	int32_t x591 = -25;
	uint64_t x592 = UINT64_MAX;

    t147 = (x589^(x590==(x591==x592)));

    if (t147 != INT32_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 15122783089LLU;
	uint32_t x594 = 1U;
	uint8_t x595 = 10U;
	uint64_t x596 = 1956222442616125LLU;
	uint64_t t148 = 2319506600476LLU;

    t148 = (x593^(x594==(x595==x596)));

    if (t148 != 15122783089LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x598 = -1LL;
	static int8_t x599 = INT8_MIN;
	static uint32_t x600 = 3210931U;
	uint32_t t149 = UINT32_MAX;

    t149 = (x597^(x598==(x599==x600)));

    if (t149 != UINT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = INT16_MAX;
	int32_t x603 = -1;
	uint32_t x604 = 2U;
	volatile int32_t t150 = -92;

    t150 = (x601^(x602==(x603==x604)));

    if (t150 != 32767) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = 72976LL;
	uint16_t x606 = 0U;
	int16_t x607 = INT16_MIN;
	static int64_t x608 = INT64_MIN;
	int64_t t151 = 37291613LL;

    t151 = (x605^(x606==(x607==x608)));

    if (t151 != 72977LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint32_t x610 = 1735U;
	uint16_t x611 = 3286U;
	int16_t x612 = INT16_MIN;
	int32_t t152 = -382439892;

    t152 = (x609^(x610==(x611==x612)));

    if (t152 != -49) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = INT16_MIN;
	uint8_t x614 = 12U;
	int8_t x615 = INT8_MIN;
	int16_t x616 = 1;
	int32_t t153 = -218990;

    t153 = (x613^(x614==(x615==x616)));

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MAX;
	static volatile int8_t x618 = -1;
	uint8_t x620 = UINT8_MAX;

    t154 = (x617^(x618==(x619==x620)));

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = 44U;
	volatile uint32_t x622 = 3339122U;
	static int32_t x623 = -9108593;
	static int8_t x624 = 40;
	static volatile uint32_t t155 = 22929U;

    t155 = (x621^(x622==(x623==x624)));

    if (t155 != 44U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x625 = INT32_MIN;
	int32_t x626 = INT32_MAX;
	uint16_t x627 = 4070U;
	uint64_t x628 = 238525098LLU;

    t156 = (x625^(x626==(x627==x628)));

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = -1LL;
	static int64_t x632 = -69761943781307LL;
	static volatile int64_t t157 = -437626153132481LL;

    t157 = (x629^(x630==(x631==x632)));

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x633 = INT32_MIN;
	volatile uint64_t x634 = UINT64_MAX;
	int32_t x636 = -64442;

    t158 = (x633^(x634==(x635==x636)));

    if (t158 != INT32_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = 50438LL;
	static uint16_t x639 = 2U;
	int32_t x640 = -214304;
	volatile int64_t t159 = -8214176448833LL;

    t159 = (x637^(x638==(x639==x640)));

    if (t159 != 50438LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = 1315848249U;
	volatile uint16_t x642 = 2850U;
	int64_t x643 = INT64_MAX;
	static volatile int16_t x644 = INT16_MIN;
	uint32_t t160 = 34U;

    t160 = (x641^(x642==(x643==x644)));

    if (t160 != 1315848249U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x646 = INT32_MIN;
	int64_t x647 = INT64_MAX;
	volatile int32_t x648 = INT32_MIN;
	int64_t t161 = INT64_MAX;

    t161 = (x645^(x646==(x647==x648)));

    if (t161 != INT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MIN;
	volatile uint16_t x650 = 20U;
	static int64_t x651 = -82269164576114937LL;
	uint8_t x652 = UINT8_MAX;
	int32_t t162 = 0;

    t162 = (x649^(x650==(x651==x652)));

    if (t162 != -32768) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x653 = 9U;
	static int8_t x654 = -1;
	int32_t x655 = INT32_MIN;
	volatile uint32_t t163 = 12675U;

    t163 = (x653^(x654==(x655==x656)));

    if (t163 != 9U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MIN;
	int16_t x658 = INT16_MAX;
	volatile uint32_t x659 = UINT32_MAX;
	volatile int64_t x660 = INT64_MIN;
	volatile int32_t t164 = -49;

    t164 = (x657^(x658==(x659==x660)));

    if (t164 != -128) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x662 = INT16_MAX;
	int32_t x663 = -1;
	uint8_t x664 = 111U;
	int32_t t165 = -540952;

    t165 = (x661^(x662==(x663==x664)));

    if (t165 != -6560) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MAX;
	int32_t x667 = INT32_MAX;
	volatile uint8_t x668 = UINT8_MAX;

    t166 = (x665^(x666==(x667==x668)));

    if (t166 != 127) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MIN;
	uint64_t x670 = 21335542LLU;
	static uint32_t x671 = 77U;
	int16_t x672 = -1;
	volatile int32_t t167 = INT32_MIN;

    t167 = (x669^(x670==(x671==x672)));

    if (t167 != INT32_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x673 = -1LL;
	static volatile int32_t x674 = -3;
	uint32_t x675 = UINT32_MAX;
	int32_t x676 = -1913470;

    t168 = (x673^(x674==(x675==x676)));

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -3877592971571862LL;
	uint16_t x678 = UINT16_MAX;
	int32_t x679 = INT32_MAX;
	static volatile int8_t x680 = 1;
	volatile int64_t t169 = 364676614779165660LL;

    t169 = (x677^(x678==(x679==x680)));

    if (t169 != -3877592971571862LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -1982LL;
	uint16_t x682 = 0U;
	int64_t x683 = INT64_MIN;
	volatile uint16_t x684 = 7U;
	int64_t t170 = -61646221819LL;

    t170 = (x681^(x682==(x683==x684)));

    if (t170 != -1981LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x686 = UINT64_MAX;
	uint64_t x687 = 62LLU;
	static volatile uint16_t x688 = UINT16_MAX;
	static int32_t t171 = -1009656665;

    t171 = (x685^(x686==(x687==x688)));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x689 = -8446970;
	volatile int8_t x690 = -1;
	volatile uint32_t x691 = 1U;
	volatile int32_t x692 = 1588638;
	static volatile int32_t t172 = -701983786;

    t172 = (x689^(x690==(x691==x692)));

    if (t172 != -8446970) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = 0;
	uint32_t x694 = 6U;
	int32_t x695 = -1;
	volatile int8_t x696 = 0;
	volatile int32_t t173 = -25452695;

    t173 = (x693^(x694==(x695==x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = 14LLU;
	uint8_t x698 = 3U;
	static uint64_t x699 = UINT64_MAX;
	static uint8_t x700 = 1U;
	uint64_t t174 = 12511101668LLU;

    t174 = (x697^(x698==(x699==x700)));

    if (t174 != 14LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint32_t x701 = 3799247U;
	static int64_t x702 = INT64_MIN;
	volatile uint8_t x703 = 5U;
	uint32_t x704 = 2590U;
	volatile uint32_t t175 = 24U;

    t175 = (x701^(x702==(x703==x704)));

    if (t175 != 3799247U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = -1;
	volatile int32_t x706 = INT32_MIN;
	volatile int8_t x707 = -1;
	int8_t x708 = -10;

    t176 = (x705^(x706==(x707==x708)));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = UINT16_MAX;
	uint16_t x711 = 1U;
	static uint8_t x712 = 31U;
	volatile int32_t t177 = -4;

    t177 = (x709^(x710==(x711==x712)));

    if (t177 != 65535) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x713 = 4900;
	static int64_t x714 = 63LL;
	int8_t x716 = -55;

    t178 = (x713^(x714==(x715==x716)));

    if (t178 != 4900) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MIN;
	uint64_t x718 = 15817329749LLU;
	int16_t x719 = INT16_MIN;
	int64_t x720 = -1LL;
	int32_t t179 = 1231663;

    t179 = (x717^(x718==(x719==x720)));

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 554044325904025415LLU;
	uint32_t x722 = 31U;
	int64_t x723 = -1LL;
	static volatile uint64_t t180 = 468198103594898239LLU;

    t180 = (x721^(x722==(x723==x724)));

    if (t180 != 554044325904025415LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = -37;
	int8_t x726 = INT8_MAX;
	int16_t x727 = INT16_MAX;
	int8_t x728 = 2;
	volatile int32_t t181 = 6481;

    t181 = (x725^(x726==(x727==x728)));

    if (t181 != -37) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x729 = INT8_MIN;
	uint16_t x730 = UINT16_MAX;
	int32_t x731 = -1;
	int8_t x732 = INT8_MIN;
	volatile int32_t t182 = 0;

    t182 = (x729^(x730==(x731==x732)));

    if (t182 != -128) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x734 = INT16_MIN;
	static volatile uint8_t x735 = 14U;

    t183 = (x733^(x734==(x735==x736)));

    if (t183 != 5021) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MAX;
	int32_t x738 = INT32_MIN;
	int8_t x739 = 4;
	int64_t t184 = INT64_MAX;

    t184 = (x737^(x738==(x739==x740)));

    if (t184 != INT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x742 = 96204972438740LLU;
	int16_t x743 = 3;
	int8_t x744 = 0;
	volatile uint64_t t185 = 448147929522245LLU;

    t185 = (x741^(x742==(x743==x744)));

    if (t185 != 4495LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x747 = -1;
	uint64_t t186 = 256197LLU;

    t186 = (x745^(x746==(x747==x748)));

    if (t186 != 7231752012534LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = 8005707638592LL;
	uint16_t x750 = 7U;
	uint8_t x751 = 39U;
	volatile int16_t x752 = INT16_MAX;
	volatile int64_t t187 = 1220LL;

    t187 = (x749^(x750==(x751==x752)));

    if (t187 != 8005707638592LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x753 = -1LL;
	int16_t x756 = INT16_MIN;
	static int64_t t188 = -65LL;

    t188 = (x753^(x754==(x755==x756)));

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x759 = 4;
	int16_t x760 = INT16_MIN;
	volatile uint32_t t189 = UINT32_MAX;

    t189 = (x757^(x758==(x759==x760)));

    if (t189 != UINT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x762 = INT32_MIN;
	uint16_t x763 = 2005U;
	uint64_t x764 = 8LLU;
	int64_t t190 = 7967130162052462LL;

    t190 = (x761^(x762==(x763==x764)));

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MIN;
	uint64_t x766 = 2825LLU;
	static volatile int32_t t191 = INT32_MIN;

    t191 = (x765^(x766==(x767==x768)));

    if (t191 != INT32_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x769 = -1;
	volatile int32_t x770 = -230760976;
	int32_t x771 = INT32_MIN;
	int64_t x772 = -1LL;
	volatile int32_t t192 = -192002;

    t192 = (x769^(x770==(x771==x772)));

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = 29935573LL;
	int16_t x775 = INT16_MIN;
	static int16_t x776 = -1;
	int64_t t193 = -734076LL;

    t193 = (x773^(x774==(x775==x776)));

    if (t193 != 29935573LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = 4;
	static uint8_t x778 = 4U;
	int32_t t194 = 6349;

    t194 = (x777^(x778==(x779==x780)));

    if (t194 != 4) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	int32_t x782 = INT32_MIN;
	static uint64_t x784 = 8202971596642765902LLU;
	int32_t t195 = INT32_MIN;

    t195 = (x781^(x782==(x783==x784)));

    if (t195 != INT32_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x785 = INT32_MAX;
	int16_t x786 = INT16_MIN;
	uint64_t x787 = 86893771612642829LLU;
	volatile uint8_t x788 = 15U;

    t196 = (x785^(x786==(x787==x788)));

    if (t196 != INT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MAX;
	volatile uint32_t x792 = 8176860U;
	volatile int32_t t197 = 6540;

    t197 = (x789^(x790==(x791==x792)));

    if (t197 != 127) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x795 = 1;
	static volatile int32_t t198 = -747453;

    t198 = (x793^(x794==(x795==x796)));

    if (t198 != 5011) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint32_t x797 = UINT32_MAX;
	volatile uint16_t x798 = 0U;
	static uint8_t x799 = 78U;
	uint16_t x800 = UINT16_MAX;

    t199 = (x797^(x798==(x799==x800)));

    if (t199 != 4294967294U) { NG(); } else { ; }
	
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

