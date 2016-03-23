
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

volatile int64_t x1 = INT64_MIN;
int32_t x4 = -1;
int64_t x6 = 1LL;
volatile int32_t t1 = 708;
volatile uint32_t t2 = 860445142U;
int64_t t3 = 559959553987575462LL;
uint32_t x21 = 13U;
volatile uint32_t t5 = 59949U;
int32_t x30 = INT32_MAX;
int16_t x40 = INT16_MIN;
volatile int32_t t10 = INT32_MIN;
int8_t x45 = INT8_MIN;
volatile int32_t x49 = INT32_MAX;
int16_t x58 = INT16_MIN;
int32_t x80 = INT32_MIN;
volatile uint32_t t19 = UINT32_MAX;
int32_t x82 = 487;
static int16_t x88 = INT16_MIN;
static volatile int32_t t21 = -61463;
static int32_t t22 = -3;
int8_t x93 = -1;
volatile int32_t t23 = -70200;
int8_t x97 = INT8_MIN;
volatile int8_t x108 = 0;
volatile uint32_t t26 = 161404U;
int32_t x109 = 1;
static uint64_t x110 = UINT64_MAX;
int32_t t27 = 21;
int8_t x119 = 22;
volatile uint32_t t30 = 1039945317U;
volatile int64_t t32 = INT64_MIN;
volatile uint64_t x133 = 1824LLU;
uint64_t x143 = UINT64_MAX;
int32_t t35 = INT32_MAX;
volatile int32_t x157 = INT32_MIN;
static int64_t x158 = INT64_MIN;
int32_t x164 = 35;
int64_t x174 = -1LL;
int32_t x181 = INT32_MIN;
volatile int8_t x185 = INT8_MAX;
int64_t x190 = 63854LL;
volatile uint8_t x191 = 0U;
static uint16_t x193 = UINT16_MAX;
uint64_t x196 = UINT64_MAX;
int32_t x201 = -1;
int16_t x204 = INT16_MAX;
static int32_t t50 = 1;
int16_t x212 = INT16_MIN;
uint16_t x218 = 1018U;
static uint32_t x222 = UINT32_MAX;
int64_t x226 = INT64_MIN;
int8_t x227 = INT8_MIN;
volatile uint32_t t56 = UINT32_MAX;
int16_t x230 = INT16_MIN;
volatile int16_t x234 = -1;
static int32_t x248 = -1;
volatile int32_t t61 = -178;
volatile int8_t x254 = INT8_MIN;
int8_t x261 = INT8_MAX;
int32_t t65 = 398625;
volatile int32_t x271 = 1626;
int64_t x285 = INT64_MIN;
volatile int64_t x300 = INT64_MIN;
int32_t x302 = INT32_MAX;
static int8_t x304 = INT8_MAX;
int32_t x315 = INT32_MAX;
uint16_t x319 = 699U;
int16_t x323 = INT16_MAX;
volatile int64_t x328 = INT64_MIN;
volatile int32_t t81 = INT32_MAX;
static volatile int32_t x340 = INT32_MIN;
int8_t x341 = INT8_MAX;
int32_t x345 = 3906151;
volatile uint64_t x349 = UINT64_MAX;
uint32_t x358 = UINT32_MAX;
int32_t t89 = -691192;
int32_t t90 = 543;
volatile int8_t x366 = INT8_MAX;
int8_t x375 = -1;
static uint64_t x380 = 402830LLU;
static int16_t x382 = INT16_MAX;
volatile int16_t x394 = 1405;
uint8_t x396 = 78U;
static int8_t x397 = INT8_MIN;
int32_t x401 = INT32_MIN;
static uint8_t x406 = UINT8_MAX;
int32_t t101 = 1302908;
static int32_t t102 = -162955;
int16_t x414 = INT16_MAX;
int32_t t103 = 264762571;
int64_t x423 = INT64_MAX;
int64_t x424 = -983266080211878LL;
uint16_t x434 = UINT16_MAX;
volatile uint32_t x440 = UINT32_MAX;
uint64_t x442 = UINT64_MAX;
volatile uint32_t x447 = UINT32_MAX;
uint64_t x451 = 8185717900981259394LLU;
static volatile int64_t t113 = -25588620988071LL;
static volatile int32_t t114 = -15;
int64_t x461 = -1LL;
int8_t x468 = -1;
volatile int64_t t117 = 62450420237803LL;
uint64_t x482 = UINT64_MAX;
volatile int8_t x483 = -31;
int32_t t121 = INT32_MAX;
int32_t x497 = -16632;
uint16_t x505 = 28715U;
volatile int16_t x509 = -47;
int32_t x512 = INT32_MIN;
int32_t t127 = 1837527;
volatile int16_t x519 = -2168;
static int32_t t129 = -6243;
static int8_t x522 = INT8_MAX;
volatile int8_t x526 = 1;
int32_t x535 = 13;
uint32_t t134 = 53U;
uint16_t x547 = 15U;
static volatile int32_t t136 = -49336574;
static int16_t x556 = 3660;
uint32_t x557 = 770665U;
static uint32_t x561 = 1669896110U;
static volatile int64_t x562 = -543LL;
static volatile uint32_t t140 = 121965937U;
int32_t t141 = 4592193;
int64_t x575 = INT64_MIN;
uint32_t x578 = 287U;
int64_t x579 = INT64_MIN;
int8_t x581 = 3;
volatile int16_t x583 = -173;
int64_t x584 = -1LL;
int8_t x597 = -1;
int64_t x602 = INT64_MAX;
volatile uint32_t x607 = 622379U;
uint64_t x612 = 330261300410151LLU;
int32_t t152 = 1264;
int64_t x613 = INT64_MIN;
int16_t x620 = INT16_MIN;
static int16_t x622 = 5428;
volatile int64_t x625 = -126104375LL;
int32_t t157 = 48;
int8_t x635 = INT8_MIN;
int64_t x656 = INT64_MIN;
uint32_t x662 = UINT32_MAX;
static uint8_t x667 = 1U;
int16_t x668 = INT16_MIN;
int64_t t166 = INT64_MIN;
uint64_t x671 = 6696303878953674385LLU;
volatile uint64_t x683 = UINT64_MAX;
int32_t x687 = -1;
uint64_t t171 = 5972631245LLU;
int64_t x701 = INT64_MIN;
int8_t x703 = INT8_MIN;
static int8_t x706 = -1;
int32_t t176 = 1;
int16_t x709 = INT16_MAX;
volatile int32_t t177 = -548305850;
uint64_t x714 = 10015437034LLU;
volatile int32_t x720 = INT32_MIN;
int8_t x724 = INT8_MAX;
volatile int64_t t180 = 2018941658LL;
static int16_t x731 = INT16_MAX;
int16_t x734 = INT16_MIN;
int16_t x738 = INT16_MIN;
int8_t x741 = INT8_MAX;
static volatile int32_t t185 = 9;
static int8_t x747 = -24;
static uint8_t x752 = 2U;
static volatile int16_t x755 = INT16_MIN;
uint16_t x766 = 56U;
static int16_t x771 = INT16_MAX;
static uint64_t x772 = UINT64_MAX;
int32_t x775 = INT32_MIN;
uint8_t x779 = UINT8_MAX;
int32_t t195 = -1;
int8_t x789 = -1;
static int64_t x792 = -1529LL;
uint8_t x798 = 2U;


void f0(void) {
    	int32_t x2 = INT32_MAX;
	uint16_t x3 = 5237U;
	int64_t t0 = INT64_MIN;

    t0 = (x1^(x2==(x3<=x4)));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	int64_t x7 = 216649957769374978LL;
	uint64_t x8 = 29LLU;

    t1 = (x5^(x6==(x7<=x8)));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 43468U;
	int32_t x10 = -255701;
	int64_t x11 = INT64_MIN;
	uint16_t x12 = 13U;

    t2 = (x9^(x10==(x11<=x12)));

    if (t2 != 43468U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 3128548LL;
	int64_t x14 = INT64_MIN;
	int32_t x15 = INT32_MIN;
	int8_t x16 = 22;

    t3 = (x13^(x14==(x15<=x16)));

    if (t3 != 3128548LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	volatile int16_t x18 = INT16_MIN;
	int64_t x19 = -370897083728LL;
	int32_t x20 = INT32_MAX;
	volatile int64_t t4 = INT64_MAX;

    t4 = (x17^(x18==(x19<=x20)));

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MIN;
	volatile int64_t x23 = -3251LL;
	volatile int16_t x24 = INT16_MIN;

    t5 = (x21^(x22==(x23<=x24)));

    if (t5 != 13U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 170U;
	int32_t x26 = INT32_MIN;
	int64_t x27 = INT64_MIN;
	int16_t x28 = -1;
	int32_t t6 = 858;

    t6 = (x25^(x26==(x27<=x28)));

    if (t6 != 170) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x29 = 294U;
	uint8_t x31 = 0U;
	int8_t x32 = 31;
	static volatile int32_t t7 = -903599989;

    t7 = (x29^(x30==(x31<=x32)));

    if (t7 != 294) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 40426543030LLU;
	static int8_t x34 = INT8_MAX;
	int8_t x35 = -14;
	int8_t x36 = 10;
	uint64_t t8 = 4LLU;

    t8 = (x33^(x34==(x35<=x36)));

    if (t8 != 40426543030LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	static int64_t x38 = -891777835137LL;
	uint32_t x39 = 36U;
	int32_t t9 = 13113;

    t9 = (x37^(x38==(x39<=x40)));

    if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	int32_t x42 = INT32_MIN;
	static uint8_t x43 = 15U;
	static int8_t x44 = -42;

    t10 = (x41^(x42==(x43<=x44)));

    if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = INT8_MIN;
	static uint64_t x47 = UINT64_MAX;
	int32_t x48 = -15230988;
	volatile int32_t t11 = -7;

    t11 = (x45^(x46==(x47<=x48)));

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x50 = 13U;
	int8_t x51 = -20;
	int64_t x52 = -1LL;
	int32_t t12 = INT32_MAX;

    t12 = (x49^(x50==(x51<=x52)));

    if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x53 = 3999100540473024LL;
	int64_t x54 = INT64_MIN;
	uint64_t x55 = UINT64_MAX;
	int32_t x56 = INT32_MIN;
	volatile int64_t t13 = -6457636032031LL;

    t13 = (x53^(x54==(x55<=x56)));

    if (t13 != 3999100540473024LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x57 = 1183120506LLU;
	int16_t x59 = INT16_MAX;
	int8_t x60 = INT8_MAX;
	static volatile uint64_t t14 = 4893112227734681LLU;

    t14 = (x57^(x58==(x59<=x60)));

    if (t14 != 1183120506LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -7;
	int16_t x62 = INT16_MIN;
	int16_t x63 = INT16_MAX;
	volatile uint8_t x64 = 7U;
	int32_t t15 = 95492864;

    t15 = (x61^(x62==(x63<=x64)));

    if (t15 != -7) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = INT64_MIN;
	volatile int64_t x66 = -107727LL;
	int8_t x67 = INT8_MIN;
	volatile int16_t x68 = INT16_MIN;
	static int64_t t16 = INT64_MIN;

    t16 = (x65^(x66==(x67<=x68)));

    if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x69 = UINT16_MAX;
	int32_t x70 = INT32_MIN;
	uint32_t x71 = 20297612U;
	uint16_t x72 = 3795U;
	int32_t t17 = 510695186;

    t17 = (x69^(x70==(x71<=x72)));

    if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x73 = 1U;
	int32_t x74 = INT32_MIN;
	int16_t x75 = INT16_MIN;
	volatile int16_t x76 = -25;
	volatile uint32_t t18 = 194830339U;

    t18 = (x73^(x74==(x75<=x76)));

    if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = UINT32_MAX;
	int64_t x78 = INT64_MIN;
	uint32_t x79 = 944U;

    t19 = (x77^(x78==(x79<=x80)));

    if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MAX;
	int32_t x83 = -1;
	int16_t x84 = -1;
	volatile int32_t t20 = 571773;

    t20 = (x81^(x82==(x83<=x84)));

    if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	uint32_t x86 = 4606353U;
	int32_t x87 = -32;

    t21 = (x85^(x86==(x87<=x88)));

    if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MAX;
	int8_t x90 = INT8_MAX;
	uint64_t x91 = 5817001375015LLU;
	volatile uint16_t x92 = 3U;

    t22 = (x89^(x90==(x91<=x92)));

    if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x94 = 63421U;
	volatile int8_t x95 = INT8_MIN;
	int32_t x96 = INT32_MIN;

    t23 = (x93^(x94==(x95<=x96)));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x98 = 2U;
	uint8_t x99 = 2U;
	int8_t x100 = INT8_MAX;
	static int32_t t24 = 44;

    t24 = (x97^(x98==(x99<=x100)));

    if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x101 = 855157292610432LLU;
	uint8_t x102 = 1U;
	uint16_t x103 = 3U;
	uint16_t x104 = 57U;
	uint64_t t25 = 44937612344855862LLU;

    t25 = (x101^(x102==(x103<=x104)));

    if (t25 != 855157292610433LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 3U;
	uint64_t x106 = 188836254209318472LLU;
	volatile uint32_t x107 = 65311U;

    t26 = (x105^(x106==(x107<=x108)));

    if (t26 != 3U) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x111 = INT32_MIN;
	volatile uint8_t x112 = UINT8_MAX;

    t27 = (x109^(x110==(x111<=x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x113 = 14U;
	uint16_t x114 = UINT16_MAX;
	int8_t x115 = INT8_MAX;
	int32_t x116 = 1;
	int32_t t28 = 3;

    t28 = (x113^(x114==(x115<=x116)));

    if (t28 != 14) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x117 = -1;
	int16_t x118 = INT16_MAX;
	volatile int8_t x120 = INT8_MIN;
	int32_t t29 = 520;

    t29 = (x117^(x118==(x119<=x120)));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x121 = 45U;
	static volatile int32_t x122 = INT32_MAX;
	uint8_t x123 = 15U;
	int32_t x124 = 98;

    t30 = (x121^(x122==(x123<=x124)));

    if (t30 != 45U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x125 = INT32_MIN;
	int16_t x126 = INT16_MIN;
	int32_t x127 = INT32_MIN;
	int8_t x128 = INT8_MIN;
	int32_t t31 = INT32_MIN;

    t31 = (x125^(x126==(x127<=x128)));

    if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = INT64_MIN;
	static int64_t x130 = INT64_MIN;
	int8_t x131 = 1;
	int64_t x132 = -1LL;

    t32 = (x129^(x130==(x131<=x132)));

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x134 = INT8_MIN;
	int64_t x135 = INT64_MAX;
	int32_t x136 = 29629951;
	static volatile uint64_t t33 = 117575974723575LLU;

    t33 = (x133^(x134==(x135<=x136)));

    if (t33 != 1824LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x137 = 1U;
	int64_t x138 = 351948065603267694LL;
	int8_t x139 = -3;
	volatile int8_t x140 = -1;
	int32_t t34 = -10358;

    t34 = (x137^(x138==(x139<=x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MAX;
	volatile int8_t x142 = INT8_MIN;
	int64_t x144 = INT64_MIN;

    t35 = (x141^(x142==(x143<=x144)));

    if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 0U;
	static uint16_t x146 = 23U;
	uint32_t x147 = UINT32_MAX;
	int8_t x148 = 4;
	static int32_t t36 = -43600193;

    t36 = (x145^(x146==(x147<=x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = INT32_MIN;
	volatile int8_t x150 = INT8_MIN;
	static int16_t x151 = INT16_MIN;
	uint16_t x152 = 628U;
	int32_t t37 = INT32_MIN;

    t37 = (x149^(x150==(x151<=x152)));

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -1;
	static int16_t x154 = INT16_MAX;
	int8_t x155 = -1;
	uint16_t x156 = 3U;
	static volatile int32_t t38 = -947;

    t38 = (x153^(x154==(x155<=x156)));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int8_t x159 = INT8_MAX;
	uint32_t x160 = 383782487U;
	volatile int32_t t39 = INT32_MIN;

    t39 = (x157^(x158==(x159<=x160)));

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = 45U;
	int64_t x162 = INT64_MAX;
	volatile int16_t x163 = -4;
	static uint32_t t40 = 527470224U;

    t40 = (x161^(x162==(x163<=x164)));

    if (t40 != 45U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = -286452852;
	static uint8_t x166 = 12U;
	uint16_t x167 = 3U;
	int32_t x168 = -1;
	static volatile int32_t t41 = 1924;

    t41 = (x165^(x166==(x167<=x168)));

    if (t41 != -286452852) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = -1;
	int64_t x170 = INT64_MIN;
	static int32_t x171 = INT32_MIN;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t42 = 0;

    t42 = (x169^(x170==(x171<=x172)));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -3LL;
	int8_t x175 = 7;
	int16_t x176 = INT16_MIN;
	static volatile int64_t t43 = 15110LL;

    t43 = (x173^(x174==(x175<=x176)));

    if (t43 != -3LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = INT8_MIN;
	volatile int64_t x178 = 14111999634LL;
	static volatile int32_t x179 = -1;
	static uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = -6293746;

    t44 = (x177^(x178==(x179<=x180)));

    if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x182 = INT16_MIN;
	static int8_t x183 = INT8_MIN;
	volatile int8_t x184 = -1;
	volatile int32_t t45 = INT32_MIN;

    t45 = (x181^(x182==(x183<=x184)));

    if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x186 = -1;
	uint64_t x187 = 116790517218077506LLU;
	static int16_t x188 = INT16_MIN;
	int32_t t46 = 73690726;

    t46 = (x185^(x186==(x187<=x188)));

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = UINT8_MAX;
	int32_t x192 = INT32_MIN;
	static volatile int32_t t47 = 204;

    t47 = (x189^(x190==(x191<=x192)));

    if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x194 = 250;
	int64_t x195 = 393399839512708853LL;
	volatile int32_t t48 = 40;

    t48 = (x193^(x194==(x195<=x196)));

    if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = UINT64_MAX;
	volatile int8_t x198 = -45;
	static int16_t x199 = 8;
	static uint32_t x200 = UINT32_MAX;
	uint64_t t49 = UINT64_MAX;

    t49 = (x197^(x198==(x199<=x200)));

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x202 = INT16_MIN;
	uint64_t x203 = UINT64_MAX;

    t50 = (x201^(x202==(x203<=x204)));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MAX;
	uint8_t x206 = 96U;
	static volatile uint32_t x207 = 299824U;
	static int32_t x208 = -1;
	volatile int32_t t51 = INT32_MAX;

    t51 = (x205^(x206==(x207<=x208)));

    if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = 1093;
	uint8_t x210 = 6U;
	static uint16_t x211 = 3972U;
	int32_t t52 = 525113814;

    t52 = (x209^(x210==(x211<=x212)));

    if (t52 != 1093) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	int64_t x214 = 40LL;
	volatile int64_t x215 = INT64_MIN;
	static int8_t x216 = 0;
	static volatile int32_t t53 = -12252076;

    t53 = (x213^(x214==(x215<=x216)));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = UINT64_MAX;
	int8_t x219 = -44;
	volatile int16_t x220 = INT16_MIN;
	volatile uint64_t t54 = UINT64_MAX;

    t54 = (x217^(x218==(x219<=x220)));

    if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x221 = -1LL;
	uint8_t x223 = UINT8_MAX;
	int64_t x224 = INT64_MAX;
	int64_t t55 = -56157020270LL;

    t55 = (x221^(x222==(x223<=x224)));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = UINT32_MAX;
	static uint32_t x228 = 11U;

    t56 = (x225^(x226==(x227<=x228)));

    if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = UINT16_MAX;
	volatile int64_t x231 = -1229987695293136LL;
	int32_t x232 = INT32_MIN;
	static volatile int32_t t57 = 1;

    t57 = (x229^(x230==(x231<=x232)));

    if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	int32_t x235 = -21709961;
	static int16_t x236 = -1;
	int32_t t58 = -849;

    t58 = (x233^(x234==(x235<=x236)));

    if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MAX;
	int8_t x238 = INT8_MAX;
	static uint64_t x239 = 255026303791898LLU;
	uint8_t x240 = 2U;
	volatile int64_t t59 = INT64_MAX;

    t59 = (x237^(x238==(x239<=x240)));

    if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	uint16_t x242 = 57U;
	int8_t x243 = 28;
	static int32_t x244 = INT32_MIN;
	static volatile int32_t t60 = 87454958;

    t60 = (x241^(x242==(x243<=x244)));

    if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x245 = INT8_MIN;
	int8_t x246 = -14;
	int32_t x247 = INT32_MIN;

    t61 = (x245^(x246==(x247<=x248)));

    if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = UINT16_MAX;
	volatile int64_t x250 = 3LL;
	int64_t x251 = INT64_MAX;
	uint32_t x252 = 917546350U;
	int32_t t62 = -284615;

    t62 = (x249^(x250==(x251<=x252)));

    if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 74LLU;
	int64_t x255 = INT64_MAX;
	int32_t x256 = 54889447;
	volatile uint64_t t63 = 903115413201145870LLU;

    t63 = (x253^(x254==(x255<=x256)));

    if (t63 != 74LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MAX;
	static uint8_t x258 = 5U;
	uint32_t x259 = 395263U;
	volatile int32_t x260 = INT32_MIN;
	static volatile int32_t t64 = 5453;

    t64 = (x257^(x258==(x259<=x260)));

    if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x262 = INT8_MIN;
	volatile int64_t x263 = INT64_MIN;
	static volatile int64_t x264 = INT64_MIN;

    t65 = (x261^(x262==(x263<=x264)));

    if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = 31;
	uint32_t x266 = 445U;
	int16_t x267 = INT16_MIN;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 168593972;

    t66 = (x265^(x266==(x267<=x268)));

    if (t66 != 31) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = -1;
	uint64_t x270 = UINT64_MAX;
	int16_t x272 = INT16_MIN;
	volatile int32_t t67 = -254777;

    t67 = (x269^(x270==(x271<=x272)));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = 25;
	int8_t x274 = -1;
	static int64_t x275 = INT64_MIN;
	volatile uint32_t x276 = 237113153U;
	volatile int32_t t68 = 12365841;

    t68 = (x273^(x274==(x275<=x276)));

    if (t68 != 25) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x277 = INT8_MAX;
	static int64_t x278 = INT64_MIN;
	uint8_t x279 = 1U;
	volatile uint16_t x280 = UINT16_MAX;
	int32_t t69 = -28424;

    t69 = (x277^(x278==(x279<=x280)));

    if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = 1;
	int8_t x282 = -1;
	static int8_t x283 = INT8_MIN;
	int16_t x284 = INT16_MIN;
	int32_t t70 = 230544902;

    t70 = (x281^(x282==(x283<=x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x286 = 1015627U;
	int32_t x287 = 375234921;
	volatile uint8_t x288 = 6U;
	int64_t t71 = INT64_MIN;

    t71 = (x285^(x286==(x287<=x288)));

    if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = -1LL;
	static volatile uint16_t x290 = UINT16_MAX;
	int64_t x291 = INT64_MIN;
	int32_t x292 = -246617;
	volatile int64_t t72 = -28053LL;

    t72 = (x289^(x290==(x291<=x292)));

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x293 = INT64_MAX;
	int32_t x294 = INT32_MIN;
	uint32_t x295 = 300287U;
	uint16_t x296 = 621U;
	static int64_t t73 = INT64_MAX;

    t73 = (x293^(x294==(x295<=x296)));

    if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = INT8_MIN;
	int8_t x298 = -1;
	int64_t x299 = INT64_MAX;
	static int32_t t74 = 0;

    t74 = (x297^(x298==(x299<=x300)));

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x301 = INT32_MIN;
	int64_t x303 = 29361960126LL;
	int32_t t75 = INT32_MIN;

    t75 = (x301^(x302==(x303<=x304)));

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x305 = 9;
	int8_t x306 = 0;
	volatile int16_t x307 = -186;
	int16_t x308 = -1;
	int32_t t76 = 3933;

    t76 = (x305^(x306==(x307<=x308)));

    if (t76 != 9) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -1;
	volatile int32_t x310 = INT32_MIN;
	uint16_t x311 = UINT16_MAX;
	int8_t x312 = -1;
	int32_t t77 = -566267020;

    t77 = (x309^(x310==(x311<=x312)));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x313 = 3375U;
	volatile int16_t x314 = INT16_MAX;
	int8_t x316 = -2;
	volatile int32_t t78 = -41;

    t78 = (x313^(x314==(x315<=x316)));

    if (t78 != 3375) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int64_t x317 = -1LL;
	int16_t x318 = INT16_MIN;
	volatile int8_t x320 = INT8_MAX;
	volatile int64_t t79 = -9497939392679LL;

    t79 = (x317^(x318==(x319<=x320)));

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x321 = INT16_MIN;
	static volatile int64_t x322 = INT64_MAX;
	int64_t x324 = -3308415472309LL;
	volatile int32_t t80 = 57;

    t80 = (x321^(x322==(x323<=x324)));

    if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MAX;
	int32_t x326 = INT32_MIN;
	static uint32_t x327 = 154499U;

    t81 = (x325^(x326==(x327<=x328)));

    if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;
	int32_t x330 = -1104;
	volatile int16_t x331 = 1;
	int8_t x332 = -2;
	volatile int64_t t82 = INT64_MIN;

    t82 = (x329^(x330==(x331<=x332)));

    if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x333 = 3395LLU;
	int16_t x334 = 2;
	int64_t x335 = INT64_MAX;
	int32_t x336 = -24953;
	uint64_t t83 = 336581462745571899LLU;

    t83 = (x333^(x334==(x335<=x336)));

    if (t83 != 3395LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = -1;
	static int32_t x338 = INT32_MIN;
	static int64_t x339 = INT64_MIN;
	volatile int32_t t84 = 4471;

    t84 = (x337^(x338==(x339<=x340)));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x342 = UINT64_MAX;
	int16_t x343 = 2;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = 1;

    t85 = (x341^(x342==(x343<=x344)));

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x346 = -1;
	int64_t x347 = INT64_MIN;
	int64_t x348 = -1LL;
	int32_t t86 = -58;

    t86 = (x345^(x346==(x347<=x348)));

    if (t86 != 3906151) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x350 = INT16_MAX;
	volatile uint64_t x351 = 2414LLU;
	int32_t x352 = INT32_MIN;
	uint64_t t87 = UINT64_MAX;

    t87 = (x349^(x350==(x351<=x352)));

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x353 = INT32_MIN;
	int32_t x354 = INT32_MIN;
	static uint8_t x355 = UINT8_MAX;
	volatile int64_t x356 = INT64_MIN;
	volatile int32_t t88 = INT32_MIN;

    t88 = (x353^(x354==(x355<=x356)));

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	int8_t x359 = 0;
	int8_t x360 = INT8_MAX;

    t89 = (x357^(x358==(x359<=x360)));

    if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -31580;
	int16_t x362 = INT16_MIN;
	static volatile int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MAX;

    t90 = (x361^(x362==(x363<=x364)));

    if (t90 != -31580) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MIN;
	uint16_t x367 = 4194U;
	uint32_t x368 = 95666978U;
	volatile int64_t t91 = INT64_MIN;

    t91 = (x365^(x366==(x367<=x368)));

    if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -1898944LL;
	int8_t x370 = -1;
	int32_t x371 = INT32_MAX;
	volatile int16_t x372 = INT16_MIN;
	static int64_t t92 = -3280204095003308576LL;

    t92 = (x369^(x370==(x371<=x372)));

    if (t92 != -1898944LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = -7032;
	uint16_t x374 = 6U;
	int32_t x376 = INT32_MIN;
	volatile int32_t t93 = 203621939;

    t93 = (x373^(x374==(x375<=x376)));

    if (t93 != -7032) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x377 = INT32_MIN;
	volatile int16_t x378 = -951;
	uint8_t x379 = UINT8_MAX;
	volatile int32_t t94 = INT32_MIN;

    t94 = (x377^(x378==(x379<=x380)));

    if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MIN;
	int64_t x383 = -2187176362258LL;
	int8_t x384 = 0;
	volatile int32_t t95 = INT32_MIN;

    t95 = (x381^(x382==(x383<=x384)));

    if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 35U;
	static uint64_t x386 = 91872125658833LLU;
	uint64_t x387 = 11LLU;
	uint16_t x388 = 97U;
	volatile int32_t t96 = -52579;

    t96 = (x385^(x386==(x387<=x388)));

    if (t96 != 35) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MIN;
	int16_t x390 = -9;
	static int64_t x391 = -1LL;
	static int16_t x392 = -1;
	int32_t t97 = -5829;

    t97 = (x389^(x390==(x391<=x392)));

    if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -10;
	uint32_t x395 = 112189917U;
	volatile int32_t t98 = 1;

    t98 = (x393^(x394==(x395<=x396)));

    if (t98 != -10) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x398 = UINT32_MAX;
	int16_t x399 = INT16_MAX;
	volatile uint8_t x400 = 0U;
	int32_t t99 = -72495;

    t99 = (x397^(x398==(x399<=x400)));

    if (t99 != -128) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x402 = -1LL;
	uint16_t x403 = UINT16_MAX;
	uint32_t x404 = 5890U;
	volatile int32_t t100 = INT32_MIN;

    t100 = (x401^(x402==(x403<=x404)));

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x405 = 3U;
	int16_t x407 = 0;
	volatile int32_t x408 = 1353;

    t101 = (x405^(x406==(x407<=x408)));

    if (t101 != 3) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint16_t x409 = UINT16_MAX;
	int32_t x410 = INT32_MIN;
	static int64_t x411 = INT64_MIN;
	volatile int8_t x412 = INT8_MIN;

    t102 = (x409^(x410==(x411<=x412)));

    if (t102 != 65535) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x413 = -1;
	int8_t x415 = INT8_MIN;
	int32_t x416 = INT32_MAX;

    t103 = (x413^(x414==(x415<=x416)));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int64_t x417 = INT64_MIN;
	static int8_t x418 = -1;
	static int8_t x419 = INT8_MIN;
	static volatile int32_t x420 = -1;
	int64_t t104 = INT64_MIN;

    t104 = (x417^(x418==(x419<=x420)));

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -3961450069048LL;
	int64_t x422 = INT64_MIN;
	volatile int64_t t105 = -222071036LL;

    t105 = (x421^(x422==(x423<=x424)));

    if (t105 != -3961450069048LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 14U;
	static uint32_t x426 = 7495U;
	int64_t x427 = INT64_MIN;
	static int8_t x428 = INT8_MIN;
	volatile int32_t t106 = 917552;

    t106 = (x425^(x426==(x427<=x428)));

    if (t106 != 14) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	volatile int32_t x430 = -1;
	int16_t x431 = -2;
	uint8_t x432 = 6U;
	volatile int32_t t107 = INT32_MIN;

    t107 = (x429^(x430==(x431<=x432)));

    if (t107 != INT32_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = UINT64_MAX;
	int8_t x435 = INT8_MAX;
	static int16_t x436 = 43;
	uint64_t t108 = UINT64_MAX;

    t108 = (x433^(x434==(x435<=x436)));

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int32_t x437 = 472252654;
	static uint32_t x438 = 438605U;
	int32_t x439 = INT32_MIN;
	volatile int32_t t109 = -86251;

    t109 = (x437^(x438==(x439<=x440)));

    if (t109 != 472252654) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -1;
	int32_t x443 = INT32_MIN;
	int64_t x444 = -1LL;
	volatile int32_t t110 = 1528;

    t110 = (x441^(x442==(x443<=x444)));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x445 = 376U;
	uint16_t x446 = 39U;
	uint64_t x448 = 135617LLU;
	int32_t t111 = 15220;

    t111 = (x445^(x446==(x447<=x448)));

    if (t111 != 376) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = -136169158;
	int32_t x450 = 86300648;
	int32_t x452 = INT32_MAX;
	volatile int32_t t112 = 21;

    t112 = (x449^(x450==(x451<=x452)));

    if (t112 != -136169158) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = 35627462550LL;
	uint16_t x454 = 341U;
	volatile int16_t x455 = INT16_MAX;
	int32_t x456 = INT32_MIN;

    t113 = (x453^(x454==(x455<=x456)));

    if (t113 != 35627462550LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MIN;
	uint64_t x458 = UINT64_MAX;
	static int64_t x459 = INT64_MIN;
	static uint64_t x460 = 1210821LLU;

    t114 = (x457^(x458==(x459<=x460)));

    if (t114 != -32768) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x462 = 892423356;
	volatile int16_t x463 = INT16_MAX;
	static volatile int64_t x464 = -8672733915593LL;
	int64_t t115 = -254LL;

    t115 = (x461^(x462==(x463<=x464)));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -36334947294787120LL;
	volatile int32_t x466 = INT32_MAX;
	int8_t x467 = INT8_MAX;
	int64_t t116 = -5646812989240LL;

    t116 = (x465^(x466==(x467<=x468)));

    if (t116 != -36334947294787120LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = 3446421842149658637LL;
	int32_t x470 = INT32_MIN;
	uint16_t x471 = 29U;
	uint32_t x472 = UINT32_MAX;

    t117 = (x469^(x470==(x471<=x472)));

    if (t117 != 3446421842149658637LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = -1;
	uint64_t x474 = 245439204506218LLU;
	int16_t x475 = 1542;
	int32_t x476 = INT32_MAX;
	int32_t t118 = -22;

    t118 = (x473^(x474==(x475<=x476)));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	static int8_t x478 = INT8_MAX;
	int8_t x479 = -1;
	int16_t x480 = INT16_MIN;
	int64_t t119 = INT64_MIN;

    t119 = (x477^(x478==(x479<=x480)));

    if (t119 != INT64_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x481 = -1;
	static volatile uint32_t x484 = UINT32_MAX;
	volatile int32_t t120 = 72;

    t120 = (x481^(x482==(x483<=x484)));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MAX;
	int32_t x486 = INT32_MIN;
	uint32_t x487 = 18414637U;
	volatile int32_t x488 = -1;

    t121 = (x485^(x486==(x487<=x488)));

    if (t121 != INT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MIN;
	int8_t x490 = -1;
	int32_t x491 = INT32_MIN;
	static volatile int16_t x492 = INT16_MAX;
	static int32_t t122 = 3588541;

    t122 = (x489^(x490==(x491<=x492)));

    if (t122 != -32768) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x493 = 4U;
	volatile int64_t x494 = INT64_MIN;
	uint64_t x495 = 448742240651LLU;
	int32_t x496 = INT32_MIN;
	volatile int32_t t123 = -1064;

    t123 = (x493^(x494==(x495<=x496)));

    if (t123 != 4) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x498 = UINT64_MAX;
	volatile uint8_t x499 = 13U;
	int8_t x500 = INT8_MAX;
	volatile int32_t t124 = 208;

    t124 = (x497^(x498==(x499<=x500)));

    if (t124 != -16632) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x501 = -1;
	int16_t x502 = 0;
	uint32_t x503 = UINT32_MAX;
	uint16_t x504 = 2U;
	volatile int32_t t125 = -21;

    t125 = (x501^(x502==(x503<=x504)));

    if (t125 != -2) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x506 = UINT64_MAX;
	uint16_t x507 = 3U;
	int8_t x508 = INT8_MIN;
	int32_t t126 = 19853;

    t126 = (x505^(x506==(x507<=x508)));

    if (t126 != 28715) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x510 = 491;
	int32_t x511 = INT32_MIN;

    t127 = (x509^(x510==(x511<=x512)));

    if (t127 != -47) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x513 = UINT64_MAX;
	int32_t x514 = INT32_MIN;
	static volatile uint64_t x515 = 45305794LLU;
	int32_t x516 = INT32_MIN;
	volatile uint64_t t128 = UINT64_MAX;

    t128 = (x513^(x514==(x515<=x516)));

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x517 = 1405155;
	volatile int64_t x518 = -7LL;
	uint8_t x520 = 0U;

    t129 = (x517^(x518==(x519<=x520)));

    if (t129 != 1405155) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x521 = INT32_MIN;
	int32_t x523 = -1;
	uint16_t x524 = 27985U;
	int32_t t130 = INT32_MIN;

    t130 = (x521^(x522==(x523<=x524)));

    if (t130 != INT32_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x525 = -50;
	volatile int16_t x527 = INT16_MIN;
	int8_t x528 = INT8_MIN;
	int32_t t131 = 14886597;

    t131 = (x525^(x526==(x527<=x528)));

    if (t131 != -49) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 7339219U;
	int32_t x530 = -1;
	volatile int64_t x531 = INT64_MIN;
	int16_t x532 = -1;
	uint32_t t132 = 7142866U;

    t132 = (x529^(x530==(x531<=x532)));

    if (t132 != 7339219U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x533 = -1;
	uint16_t x534 = UINT16_MAX;
	int16_t x536 = INT16_MAX;
	int32_t t133 = -9033416;

    t133 = (x533^(x534==(x535<=x536)));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = 5282765U;
	int16_t x538 = INT16_MIN;
	uint8_t x539 = 0U;
	int32_t x540 = INT32_MIN;

    t134 = (x537^(x538==(x539<=x540)));

    if (t134 != 5282765U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x541 = -1;
	int32_t x542 = 13421;
	uint8_t x543 = 9U;
	static int32_t x544 = 37818628;
	int32_t t135 = -33040737;

    t135 = (x541^(x542==(x543<=x544)));

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x545 = 2;
	uint64_t x546 = UINT64_MAX;
	uint32_t x548 = 36U;

    t136 = (x545^(x546==(x547<=x548)));

    if (t136 != 2) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint8_t x549 = 28U;
	volatile int16_t x550 = INT16_MIN;
	int64_t x551 = INT64_MAX;
	volatile uint8_t x552 = UINT8_MAX;
	int32_t t137 = -635947;

    t137 = (x549^(x550==(x551<=x552)));

    if (t137 != 28) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x553 = 294LLU;
	int16_t x554 = INT16_MIN;
	uint16_t x555 = 85U;
	uint64_t t138 = 26135219131606LLU;

    t138 = (x553^(x554==(x555<=x556)));

    if (t138 != 294LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x558 = INT8_MIN;
	uint8_t x559 = UINT8_MAX;
	int16_t x560 = INT16_MIN;
	uint32_t t139 = 110U;

    t139 = (x557^(x558==(x559<=x560)));

    if (t139 != 770665U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x563 = 335381U;
	static int64_t x564 = INT64_MIN;

    t140 = (x561^(x562==(x563<=x564)));

    if (t140 != 1669896110U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = 11;
	volatile uint64_t x566 = 5138077LLU;
	int16_t x567 = INT16_MAX;
	uint16_t x568 = 11508U;

    t141 = (x565^(x566==(x567<=x568)));

    if (t141 != 11) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -1;
	int8_t x570 = -4;
	uint32_t x571 = 749U;
	uint8_t x572 = UINT8_MAX;
	int32_t t142 = -1;

    t142 = (x569^(x570==(x571<=x572)));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x573 = 990485274565407099LL;
	int8_t x574 = 9;
	int64_t x576 = INT64_MAX;
	volatile int64_t t143 = 2758913538LL;

    t143 = (x573^(x574==(x575<=x576)));

    if (t143 != 990485274565407099LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MAX;
	static volatile int32_t x580 = INT32_MIN;
	static int64_t t144 = INT64_MAX;

    t144 = (x577^(x578==(x579<=x580)));

    if (t144 != INT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x582 = -1;
	int32_t t145 = -1;

    t145 = (x581^(x582==(x583<=x584)));

    if (t145 != 3) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = UINT8_MAX;
	static int64_t x586 = INT64_MIN;
	int64_t x587 = 37938805LL;
	uint64_t x588 = UINT64_MAX;
	static int32_t t146 = -143065;

    t146 = (x585^(x586==(x587<=x588)));

    if (t146 != 255) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = 0;
	int16_t x590 = INT16_MIN;
	static int8_t x591 = INT8_MIN;
	static uint64_t x592 = UINT64_MAX;
	volatile int32_t t147 = -6566528;

    t147 = (x589^(x590==(x591<=x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	uint64_t x594 = UINT64_MAX;
	int16_t x595 = INT16_MAX;
	int16_t x596 = INT16_MAX;
	int32_t t148 = -7;

    t148 = (x593^(x594==(x595<=x596)));

    if (t148 != -128) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x598 = 37U;
	int16_t x599 = INT16_MAX;
	uint32_t x600 = 5787744U;
	static int32_t t149 = 16;

    t149 = (x597^(x598==(x599<=x600)));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = 39U;
	static int64_t x603 = -1LL;
	int64_t x604 = 87559752166LL;
	volatile int32_t t150 = -51;

    t150 = (x601^(x602==(x603<=x604)));

    if (t150 != 39) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = UINT64_MAX;
	int16_t x606 = INT16_MAX;
	uint16_t x608 = 258U;
	uint64_t t151 = UINT64_MAX;

    t151 = (x605^(x606==(x607<=x608)));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = UINT16_MAX;
	volatile int32_t x610 = -1786934;
	int32_t x611 = INT32_MAX;

    t152 = (x609^(x610==(x611<=x612)));

    if (t152 != 65535) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x614 = 10U;
	int64_t x615 = 5LL;
	volatile int16_t x616 = INT16_MIN;
	volatile int64_t t153 = INT64_MIN;

    t153 = (x613^(x614==(x615<=x616)));

    if (t153 != INT64_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MIN;
	uint64_t x618 = 4LLU;
	volatile int8_t x619 = -4;
	int32_t t154 = 41910;

    t154 = (x617^(x618==(x619<=x620)));

    if (t154 != -128) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	volatile uint64_t x623 = UINT64_MAX;
	int32_t x624 = -196662520;
	volatile int64_t t155 = INT64_MIN;

    t155 = (x621^(x622==(x623<=x624)));

    if (t155 != INT64_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x626 = -1;
	static int32_t x627 = -1;
	int16_t x628 = -1;
	static int64_t t156 = 1LL;

    t156 = (x625^(x626==(x627<=x628)));

    if (t156 != -126104375LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 19545U;
	int8_t x630 = INT8_MAX;
	volatile int8_t x631 = INT8_MIN;
	int16_t x632 = 695;

    t157 = (x629^(x630==(x631<=x632)));

    if (t157 != 19545) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x633 = -1;
	int64_t x634 = -2259658LL;
	uint16_t x636 = 43U;
	int32_t t158 = 19905;

    t158 = (x633^(x634==(x635<=x636)));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint8_t x637 = UINT8_MAX;
	volatile uint64_t x638 = UINT64_MAX;
	uint64_t x639 = 271890458098302LLU;
	int8_t x640 = -1;
	int32_t t159 = 76949694;

    t159 = (x637^(x638==(x639<=x640)));

    if (t159 != 255) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = 1;
	volatile int16_t x642 = 0;
	uint16_t x643 = UINT16_MAX;
	volatile int64_t x644 = 13677037279701LL;
	volatile int32_t t160 = -13371;

    t160 = (x641^(x642==(x643<=x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 15U;
	uint32_t x646 = 420295544U;
	volatile int8_t x647 = INT8_MAX;
	int64_t x648 = INT64_MIN;
	volatile uint32_t t161 = 53896092U;

    t161 = (x645^(x646==(x647<=x648)));

    if (t161 != 15U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x649 = UINT16_MAX;
	static uint32_t x650 = 1884642797U;
	static int64_t x651 = INT64_MAX;
	int32_t x652 = INT32_MIN;
	int32_t t162 = 110278;

    t162 = (x649^(x650==(x651<=x652)));

    if (t162 != 65535) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x653 = UINT32_MAX;
	int16_t x654 = INT16_MIN;
	int8_t x655 = INT8_MIN;
	static uint32_t t163 = UINT32_MAX;

    t163 = (x653^(x654==(x655<=x656)));

    if (t163 != UINT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MAX;
	volatile int64_t x658 = -1LL;
	int8_t x659 = -1;
	int8_t x660 = INT8_MIN;
	int32_t t164 = -3665;

    t164 = (x657^(x658==(x659<=x660)));

    if (t164 != 127) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x661 = -1;
	int16_t x663 = -1;
	uint64_t x664 = UINT64_MAX;
	volatile int32_t t165 = -2331;

    t165 = (x661^(x662==(x663<=x664)));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	int8_t x666 = 17;

    t166 = (x665^(x666==(x667<=x668)));

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x669 = -14876;
	static int8_t x670 = -1;
	int32_t x672 = INT32_MIN;
	static int32_t t167 = 3439009;

    t167 = (x669^(x670==(x671<=x672)));

    if (t167 != -14876) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x673 = UINT8_MAX;
	uint64_t x674 = 1735067418556846040LLU;
	volatile int16_t x675 = INT16_MAX;
	uint8_t x676 = 102U;
	static int32_t t168 = 25;

    t168 = (x673^(x674==(x675<=x676)));

    if (t168 != 255) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x677 = INT64_MIN;
	volatile int16_t x678 = -1;
	int16_t x679 = -1;
	static uint64_t x680 = 1775LLU;
	int64_t t169 = INT64_MIN;

    t169 = (x677^(x678==(x679<=x680)));

    if (t169 != INT64_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = -1;
	volatile uint64_t x682 = 19008922695783LLU;
	static int32_t x684 = -1;
	volatile int32_t t170 = 794465;

    t170 = (x681^(x682==(x683<=x684)));

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 31280103125724568LLU;
	uint32_t x686 = 125630U;
	int64_t x688 = -6062791229513729LL;

    t171 = (x685^(x686==(x687<=x688)));

    if (t171 != 31280103125724568LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x689 = 14;
	int8_t x690 = INT8_MIN;
	int8_t x691 = INT8_MAX;
	static int32_t x692 = -7135381;
	static volatile int32_t t172 = 188542;

    t172 = (x689^(x690==(x691<=x692)));

    if (t172 != 14) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x693 = INT8_MAX;
	static int32_t x694 = 2;
	int64_t x695 = -457297046758720LL;
	int32_t x696 = -1;
	volatile int32_t t173 = 8;

    t173 = (x693^(x694==(x695<=x696)));

    if (t173 != 127) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	volatile int8_t x698 = -1;
	static uint16_t x699 = UINT16_MAX;
	int64_t x700 = -444734LL;
	int32_t t174 = -1;

    t174 = (x697^(x698==(x699<=x700)));

    if (t174 != -32768) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x702 = 579U;
	int64_t x704 = -1LL;
	volatile int64_t t175 = INT64_MIN;

    t175 = (x701^(x702==(x703<=x704)));

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MAX;
	int8_t x707 = -15;
	volatile int8_t x708 = INT8_MIN;

    t176 = (x705^(x706==(x707<=x708)));

    if (t176 != 32767) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x710 = -1;
	int16_t x711 = -1;
	int16_t x712 = -1;

    t177 = (x709^(x710==(x711<=x712)));

    if (t177 != 32767) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	volatile int16_t x715 = -1;
	int64_t x716 = -1LL;
	static volatile int32_t t178 = 60171;

    t178 = (x713^(x714==(x715<=x716)));

    if (t178 != -32768) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 6317U;
	volatile uint16_t x718 = 186U;
	int8_t x719 = -1;
	volatile uint32_t t179 = 1730U;

    t179 = (x717^(x718==(x719<=x720)));

    if (t179 != 6317U) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x721 = -1LL;
	static uint16_t x722 = 3U;
	static int16_t x723 = -1;

    t180 = (x721^(x722==(x723<=x724)));

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = -1;
	int8_t x726 = INT8_MIN;
	int32_t x727 = INT32_MIN;
	int16_t x728 = -5;
	int32_t t181 = -10433825;

    t181 = (x725^(x726==(x727<=x728)));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 6U;
	int32_t x730 = -709;
	volatile int16_t x732 = -1;
	uint32_t t182 = 1674136947U;

    t182 = (x729^(x730==(x731<=x732)));

    if (t182 != 6U) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x733 = UINT32_MAX;
	int8_t x735 = -1;
	int16_t x736 = -1;
	static volatile uint32_t t183 = UINT32_MAX;

    t183 = (x733^(x734==(x735<=x736)));

    if (t183 != UINT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x737 = 5U;
	static int8_t x739 = INT8_MIN;
	uint32_t x740 = UINT32_MAX;
	volatile int32_t t184 = -1;

    t184 = (x737^(x738==(x739<=x740)));

    if (t184 != 5) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x742 = INT32_MAX;
	int32_t x743 = 925261772;
	int16_t x744 = INT16_MAX;

    t185 = (x741^(x742==(x743<=x744)));

    if (t185 != 127) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 73LLU;
	int8_t x746 = 18;
	uint16_t x748 = 354U;
	volatile uint64_t t186 = 1043LLU;

    t186 = (x745^(x746==(x747<=x748)));

    if (t186 != 73LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x749 = 6;
	int64_t x750 = INT64_MAX;
	uint8_t x751 = 29U;
	int32_t t187 = 41;

    t187 = (x749^(x750==(x751<=x752)));

    if (t187 != 6) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x753 = 1;
	static int32_t x754 = INT32_MIN;
	int64_t x756 = INT64_MIN;
	volatile int32_t t188 = 29888;

    t188 = (x753^(x754==(x755<=x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -1LL;
	int16_t x758 = -1;
	static int16_t x759 = INT16_MIN;
	volatile int16_t x760 = -5548;
	static volatile int64_t t189 = -26LL;

    t189 = (x757^(x758==(x759<=x760)));

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MIN;
	int64_t x762 = INT64_MIN;
	uint8_t x763 = 7U;
	int32_t x764 = INT32_MIN;
	volatile int32_t t190 = 78441;

    t190 = (x761^(x762==(x763<=x764)));

    if (t190 != -32768) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MAX;
	int32_t x767 = -1;
	int64_t x768 = INT64_MIN;
	int32_t t191 = INT32_MAX;

    t191 = (x765^(x766==(x767<=x768)));

    if (t191 != INT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MIN;
	int8_t x770 = INT8_MIN;
	int32_t t192 = INT32_MIN;

    t192 = (x769^(x770==(x771<=x772)));

    if (t192 != INT32_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = 49U;
	volatile int32_t x774 = -1;
	int16_t x776 = INT16_MIN;
	static uint32_t t193 = 1899278994U;

    t193 = (x773^(x774==(x775<=x776)));

    if (t193 != 49U) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = 49;
	uint16_t x778 = 2U;
	uint16_t x780 = UINT16_MAX;
	volatile int32_t t194 = -951;

    t194 = (x777^(x778==(x779<=x780)));

    if (t194 != 49) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MAX;
	uint32_t x782 = 1012924U;
	uint64_t x783 = 3502LLU;
	int64_t x784 = 0LL;

    t195 = (x781^(x782==(x783<=x784)));

    if (t195 != 32767) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 117273249LLU;
	uint8_t x786 = UINT8_MAX;
	int64_t x787 = INT64_MIN;
	uint16_t x788 = 11U;
	static uint64_t t196 = 472LLU;

    t196 = (x785^(x786==(x787<=x788)));

    if (t196 != 117273249LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x790 = INT32_MIN;
	uint64_t x791 = 185186LLU;
	int32_t t197 = -59229;

    t197 = (x789^(x790==(x791<=x792)));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x793 = UINT8_MAX;
	int16_t x794 = 0;
	static uint8_t x795 = UINT8_MAX;
	uint16_t x796 = UINT16_MAX;
	int32_t t198 = -1992;

    t198 = (x793^(x794==(x795<=x796)));

    if (t198 != 255) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MIN;
	uint8_t x799 = 3U;
	int64_t x800 = -1LL;
	int32_t t199 = -17475;

    t199 = (x797^(x798==(x799<=x800)));

    if (t199 != -32768) { NG(); } else { ; }
	
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

