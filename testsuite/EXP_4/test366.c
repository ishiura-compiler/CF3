
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

volatile int16_t x8 = INT16_MIN;
uint32_t x10 = 19006U;
uint16_t x11 = 42U;
int32_t x12 = -1;
volatile int32_t x29 = INT32_MIN;
volatile uint32_t x40 = 1U;
int64_t x41 = INT64_MIN;
int32_t x47 = -1;
static volatile uint16_t x48 = UINT16_MAX;
volatile int64_t t11 = -896624395LL;
static int16_t x53 = INT16_MIN;
int64_t x55 = 196679LL;
static volatile uint8_t x58 = 0U;
static int32_t t13 = -6033721;
uint16_t x64 = UINT16_MAX;
volatile uint32_t t14 = 45789U;
uint16_t x80 = UINT16_MAX;
static int8_t x86 = -1;
int64_t x98 = -2889695224LL;
int8_t x101 = INT8_MAX;
static volatile int32_t t22 = -268;
volatile int8_t x108 = INT8_MAX;
int8_t x114 = -1;
int32_t x120 = INT32_MIN;
int64_t x123 = 40856844803660LL;
volatile int32_t t27 = -4;
int8_t x130 = -1;
int32_t x136 = INT32_MAX;
int32_t t29 = 27722165;
int32_t x138 = INT32_MIN;
static volatile uint8_t x140 = 0U;
volatile uint64_t x156 = UINT64_MAX;
int32_t x163 = -1;
uint8_t x164 = 2U;
uint64_t x168 = 2670080LLU;
static int32_t x172 = INT32_MIN;
int64_t x173 = -42LL;
uint32_t x174 = 145419U;
static uint8_t x175 = 1U;
int64_t t39 = 1789288443914138330LL;
int8_t x182 = INT8_MIN;
int8_t x183 = 3;
static uint8_t x185 = UINT8_MAX;
static int64_t x190 = -1LL;
static volatile uint16_t x197 = 364U;
static volatile int64_t t45 = -6936749851378LL;
int64_t x206 = -3820857LL;
static int32_t x208 = INT32_MAX;
int8_t x210 = -57;
int16_t x212 = -1;
volatile int64_t x217 = INT64_MIN;
int64_t x218 = 5LL;
volatile int64_t x220 = INT64_MAX;
int32_t x224 = INT32_MAX;
static volatile int32_t x227 = 1;
int32_t x229 = -1;
uint64_t x230 = UINT64_MAX;
volatile int64_t x237 = -1LL;
int8_t x239 = -1;
uint32_t x240 = 6933U;
uint32_t x242 = 787924456U;
static int16_t x246 = -1223;
static int16_t x247 = INT16_MIN;
volatile int32_t t54 = -2985462;
int8_t x249 = 1;
int64_t x250 = INT64_MIN;
volatile int64_t t55 = 11253LL;
int16_t x253 = -1;
int16_t x254 = -1;
uint32_t x267 = UINT32_MAX;
volatile uint32_t x274 = 0U;
int64_t x281 = INT64_MIN;
int64_t x283 = -333062LL;
static volatile int32_t x293 = 1;
volatile uint64_t x296 = 8216LLU;
uint32_t x298 = UINT32_MAX;
uint64_t t65 = 64751477468LLU;
volatile int64_t x310 = 1870913643255200LL;
uint32_t x315 = UINT32_MAX;
int16_t x319 = 2;
volatile int64_t t70 = 50279383440772LL;
uint32_t x329 = 248365943U;
int8_t x341 = -1;
int32_t x343 = -51984;
volatile uint64_t t74 = 0LLU;
uint32_t x353 = 424U;
static int64_t x354 = 11137551459221LL;
int16_t x360 = -15;
int32_t x367 = INT32_MIN;
int32_t t80 = 13;
int64_t x375 = -59852LL;
volatile int64_t t82 = 112LL;
static volatile uint32_t x382 = 2024U;
static int32_t x392 = -1240133;
int8_t x395 = -31;
uint32_t x397 = 234U;
uint32_t x400 = UINT32_MAX;
int8_t x415 = INT8_MIN;
static int64_t x422 = -1LL;
int16_t x425 = -12;
uint64_t x426 = UINT64_MAX;
int32_t x428 = INT32_MIN;
static int8_t x431 = INT8_MAX;
static int32_t x435 = -1;
static int32_t x436 = 30985423;
int32_t t96 = -3257374;
static uint64_t x438 = 30802LLU;
int32_t x441 = INT32_MAX;
static uint32_t x449 = 6513943U;
uint32_t x451 = UINT32_MAX;
uint32_t t100 = 50732469U;
uint64_t t101 = 1146940LLU;
static int8_t x459 = INT8_MIN;
uint8_t x464 = 72U;
int8_t x465 = INT8_MIN;
volatile uint32_t x475 = 283500290U;
int32_t t107 = 0;
volatile int8_t x483 = 8;
static int8_t x484 = INT8_MIN;
uint64_t x486 = 80826723LLU;
static int8_t x489 = -1;
uint64_t t110 = 3LLU;
uint32_t x495 = 2253933U;
int64_t x509 = -21467942274LL;
static int8_t x514 = INT8_MIN;
uint8_t x517 = UINT8_MAX;
int8_t x519 = 0;
uint32_t t116 = 35248869U;
volatile uint64_t x525 = UINT64_MAX;
uint64_t t117 = 132056231736LLU;
static int8_t x530 = -1;
int32_t x562 = -1;
uint16_t x567 = UINT16_MAX;
uint64_t x580 = 442759156LLU;
int32_t x582 = INT32_MAX;
volatile int8_t x584 = -27;
int16_t x594 = -10;
uint32_t x599 = 163608103U;
static int64_t x603 = INT64_MIN;
static volatile uint64_t t133 = 12220104798LLU;
static volatile int64_t x609 = -1LL;
int32_t x614 = -1;
volatile uint8_t x615 = UINT8_MAX;
int8_t x627 = INT8_MIN;
volatile uint64_t x631 = 203478286823099LLU;
int32_t t140 = 8015;
int16_t x649 = 6;
uint8_t x655 = 4U;
volatile int32_t x669 = INT32_MIN;
int16_t x674 = 3836;
static volatile uint32_t x678 = 5634U;
uint16_t x680 = UINT16_MAX;
volatile int16_t x689 = -1;
volatile int32_t x701 = INT32_MIN;
uint16_t x703 = UINT16_MAX;
uint8_t x711 = UINT8_MAX;
int8_t x714 = INT8_MIN;
uint64_t x725 = 3476LLU;
static uint16_t x728 = 270U;
uint64_t t161 = 320476146569695LLU;
static int16_t x741 = INT16_MAX;
int8_t x743 = 1;
static volatile uint32_t x744 = 5699122U;
int64_t t162 = 3LL;
volatile uint64_t t164 = 29749910893830LLU;
static int32_t t165 = -19566;
volatile int32_t x764 = 938183678;
uint16_t x765 = 16U;
int16_t x773 = INT16_MIN;
static int16_t x785 = INT16_MIN;
int16_t x790 = INT16_MAX;
int64_t t173 = 6090097953LL;
static uint32_t x795 = 62978U;
volatile int32_t x803 = INT32_MIN;
volatile uint32_t t175 = 78775U;
int16_t x806 = INT16_MAX;
int32_t t177 = -15514;
volatile int32_t t178 = -11871;
int8_t x817 = INT8_MAX;
int64_t x823 = -5756078LL;
int64_t x824 = INT64_MIN;
volatile int64_t t180 = 514574684LL;
int32_t x826 = INT32_MAX;
uint16_t x828 = 31U;
int16_t x829 = INT16_MAX;
int8_t x831 = INT8_MIN;
static uint8_t x833 = 2U;
int16_t x834 = -1;
int8_t x838 = 28;
volatile int32_t x840 = 109197;
volatile int32_t t184 = 2078925;
volatile int8_t x844 = INT8_MIN;
static int64_t t187 = -1LL;
int16_t x856 = -3336;
volatile int32_t t189 = 38150;
static int64_t x867 = INT64_MIN;
uint64_t x870 = 1095207130LLU;
volatile int16_t x872 = -3;
uint64_t t193 = 127041381LLU;
int16_t x898 = 566;
volatile int8_t x900 = 10;
static volatile int32_t t196 = 180;
int32_t x902 = 2;
int8_t x905 = -1;
uint16_t x911 = UINT16_MAX;


void f0(void) {
    	static uint16_t x5 = UINT16_MAX;
	volatile int8_t x6 = INT8_MAX;
	int16_t x7 = 543;
	volatile int32_t t0 = -44;

    t0 = (x5-(x6|(x7-x8)));

    if (t0 != 32128) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = INT32_MAX;
	uint32_t t1 = 8222186U;

    t1 = (x9-(x10|(x11-x12)));

    if (t1 != 2147464640U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x13 = UINT64_MAX;
	uint8_t x14 = 17U;
	uint16_t x15 = 176U;
	static int16_t x16 = -1;
	uint64_t t2 = 5495344LLU;

    t2 = (x13-(x14|(x15-x16)));

    if (t2 != 18446744073709551438LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x17 = 43U;
	int16_t x18 = -1;
	static int32_t x19 = -4967;
	static volatile int16_t x20 = -1;
	int32_t t3 = -1;

    t3 = (x17-(x18|(x19-x20)));

    if (t3 != 44) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x21 = 1;
	int16_t x22 = 128;
	uint32_t x23 = 19U;
	uint8_t x24 = 31U;
	uint32_t t4 = 442624U;

    t4 = (x21-(x22|(x23-x24)));

    if (t4 != 13U) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	static int16_t x26 = INT16_MIN;
	uint64_t x27 = UINT64_MAX;
	int32_t x28 = -1;
	uint64_t t5 = 59192079LLU;

    t5 = (x25-(x26|(x27-x28)));

    if (t5 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x30 = INT8_MAX;
	int64_t x31 = -8LL;
	int8_t x32 = INT8_MIN;
	int64_t t6 = 407LL;

    t6 = (x29-(x30|(x31-x32)));

    if (t6 != -2147483775LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = -1;
	int16_t x34 = INT16_MIN;
	int32_t x35 = 362420;
	int16_t x36 = -482;
	volatile int32_t t7 = 22;

    t7 = (x33-(x34|(x35-x36)));

    if (t7 != 30313) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x37 = 1;
	static uint32_t x38 = UINT32_MAX;
	uint64_t x39 = 7614926228838LLU;
	uint64_t t8 = 5876823053188591LLU;

    t8 = (x37-(x38|(x39-x40)));

    if (t8 != 18446736458732535810LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x42 = INT64_MIN;
	uint64_t x43 = UINT64_MAX;
	static volatile uint64_t x44 = UINT64_MAX;
	volatile uint64_t t9 = 355811762865182240LLU;

    t9 = (x41-(x42|(x43-x44)));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = -1LL;
	int32_t x46 = INT32_MIN;
	int64_t t10 = 61344LL;

    t10 = (x45-(x46|(x47-x48)));

    if (t10 != 65535LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = -7;
	int8_t x50 = INT8_MAX;
	int64_t x51 = INT64_MAX;
	uint32_t x52 = UINT32_MAX;

    t11 = (x49-(x50|(x51-x52)));

    if (t11 != -9223372032559808646LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x54 = UINT64_MAX;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t12 = 20389783LLU;

    t12 = (x53-(x54|(x55-x56)));

    if (t12 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = 1;
	int16_t x59 = INT16_MIN;
	uint8_t x60 = 1U;

    t13 = (x57-(x58|(x59-x60)));

    if (t13 != 32770) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = UINT8_MAX;
	volatile uint32_t x62 = 254U;
	static int16_t x63 = INT16_MAX;

    t14 = (x61-(x62|(x63-x64)));

    if (t14 != 32769U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x65 = -10003;
	uint32_t x66 = UINT32_MAX;
	int8_t x67 = 0;
	volatile uint16_t x68 = UINT16_MAX;
	static uint32_t t15 = 1U;

    t15 = (x65-(x66|(x67-x68)));

    if (t15 != 4294957294U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x77 = 206;
	static int64_t x78 = 451005LL;
	volatile uint32_t x79 = 2U;
	int64_t t16 = -9112312046479LL;

    t16 = (x77-(x78|(x79-x80)));

    if (t16 != -4294959345LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x81 = 521;
	volatile int8_t x82 = INT8_MIN;
	int8_t x83 = INT8_MIN;
	volatile int64_t x84 = -17895LL;
	int64_t t17 = -24245417938LL;

    t17 = (x81-(x82|(x83-x84)));

    if (t17 != 546LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x85 = -22;
	static int8_t x87 = -1;
	int32_t x88 = INT32_MIN;
	int32_t t18 = -193;

    t18 = (x85-(x86|(x87-x88)));

    if (t18 != -21) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x89 = INT16_MIN;
	uint16_t x90 = UINT16_MAX;
	int64_t x91 = -3887176LL;
	int32_t x92 = -1;
	static int64_t t19 = 1332746LL;

    t19 = (x89-(x90|(x91-x92)));

    if (t19 != 3833857LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x93 = 14969337429LLU;
	uint64_t x94 = 39103926LLU;
	uint64_t x95 = 257887947012LLU;
	uint64_t x96 = UINT64_MAX;
	static uint64_t t20 = 3178316131371LLU;

    t20 = (x93-(x94|(x95-x96)));

    if (t20 != 18446743830790670494LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x97 = INT8_MIN;
	volatile uint8_t x99 = 30U;
	int32_t x100 = INT32_MAX;
	volatile int64_t t21 = -98136LL;

    t21 = (x97-(x98|(x99-x100)));

    if (t21 != 742211425LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x102 = -1;
	static int16_t x103 = INT16_MIN;
	int16_t x104 = -1;

    t22 = (x101-(x102|(x103-x104)));

    if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x105 = -35263;
	int32_t x106 = INT32_MAX;
	uint8_t x107 = 8U;
	int32_t t23 = -3479;

    t23 = (x105-(x106|(x107-x108)));

    if (t23 != -35262) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x113 = UINT16_MAX;
	uint16_t x115 = UINT16_MAX;
	static volatile int8_t x116 = INT8_MIN;
	static int32_t t24 = -1;

    t24 = (x113-(x114|(x115-x116)));

    if (t24 != 65536) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x117 = 11U;
	static int16_t x118 = INT16_MAX;
	uint32_t x119 = 21695986U;
	uint32_t t25 = 7828U;

    t25 = (x117-(x118|(x119-x120)));

    if (t25 != 2125758476U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x121 = -848;
	volatile uint64_t x122 = UINT64_MAX;
	int64_t x124 = -1LL;
	uint64_t t26 = 18109472774773LLU;

    t26 = (x121-(x122|(x123-x124)));

    if (t26 != 18446744073709550769LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x125 = INT16_MIN;
	int8_t x126 = INT8_MAX;
	int16_t x127 = -1;
	int16_t x128 = 10;

    t27 = (x125-(x126|(x127-x128)));

    if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x129 = 30627U;
	uint16_t x131 = 230U;
	uint64_t x132 = 253570471LLU;
	uint64_t t28 = 27978211361752LLU;

    t28 = (x129-(x130|(x131-x132)));

    if (t28 != 30628LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x133 = UINT8_MAX;
	int32_t x134 = -2;
	int8_t x135 = 1;

    t29 = (x133-(x134|(x135-x136)));

    if (t29 != 257) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x137 = UINT32_MAX;
	int32_t x139 = 11342675;
	static volatile uint32_t t30 = 832084137U;

    t30 = (x137-(x138|(x139-x140)));

    if (t30 != 2136140972U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x141 = INT64_MIN;
	volatile int16_t x142 = -1;
	static int64_t x143 = -1LL;
	int8_t x144 = -1;
	static volatile int64_t t31 = 63LL;

    t31 = (x141-(x142|(x143-x144)));

    if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x145 = 19U;
	volatile int32_t x146 = -1;
	volatile uint8_t x147 = 0U;
	int64_t x148 = -1LL;
	static volatile int64_t t32 = 4792194826LL;

    t32 = (x145-(x146|(x147-x148)));

    if (t32 != 20LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x149 = INT8_MIN;
	int8_t x150 = -1;
	static int32_t x151 = -10425258;
	volatile int8_t x152 = -7;
	int32_t t33 = -2;

    t33 = (x149-(x150|(x151-x152)));

    if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x153 = INT32_MIN;
	uint16_t x154 = UINT16_MAX;
	volatile uint8_t x155 = UINT8_MAX;
	uint64_t t34 = 127613644796140335LLU;

    t34 = (x153-(x154|(x155-x156)));

    if (t34 != 18446744071562002433LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x157 = UINT32_MAX;
	int64_t x158 = -3385262488333LL;
	uint32_t x159 = 12U;
	static int16_t x160 = -1;
	volatile int64_t t35 = -27547725922006LL;

    t35 = (x157-(x158|(x159-x160)));

    if (t35 != 3389557455616LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x161 = -7663;
	int16_t x162 = -3295;
	volatile int32_t t36 = -1719;

    t36 = (x161-(x162|(x163-x164)));

    if (t36 != -7660) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x165 = INT32_MIN;
	static int64_t x166 = INT64_MAX;
	int64_t x167 = INT64_MIN;
	volatile uint64_t t37 = 64697711543LLU;

    t37 = (x165-(x166|(x167-x168)));

    if (t37 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x169 = -1;
	int8_t x170 = 16;
	int64_t x171 = -1LL;
	int64_t t38 = -65512422656281803LL;

    t38 = (x169-(x170|(x171-x172)));

    if (t38 != -2147483648LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x176 = -1;

    t39 = (x173-(x174|(x175-x176)));

    if (t39 != -145461LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x181 = INT8_MAX;
	static int8_t x184 = INT8_MAX;
	static int32_t t40 = -32566;

    t40 = (x181-(x182|(x183-x184)));

    if (t40 != 251) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x186 = INT8_MIN;
	int64_t x187 = -1LL;
	static int16_t x188 = 194;
	int64_t t41 = 925999139038762LL;

    t41 = (x185-(x186|(x187-x188)));

    if (t41 != 322LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x189 = 31U;
	uint32_t x191 = 1609764U;
	uint32_t x192 = 931200U;
	volatile int64_t t42 = 33645564315701LL;

    t42 = (x189-(x190|(x191-x192)));

    if (t42 != 32LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x193 = -1;
	int32_t x194 = INT32_MIN;
	int16_t x195 = INT16_MIN;
	int16_t x196 = INT16_MAX;
	volatile int32_t t43 = -492404;

    t43 = (x193-(x194|(x195-x196)));

    if (t43 != 65534) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x198 = -3;
	int16_t x199 = 3012;
	int8_t x200 = INT8_MIN;
	volatile int32_t t44 = -147767;

    t44 = (x197-(x198|(x199-x200)));

    if (t44 != 367) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x201 = UINT16_MAX;
	uint32_t x202 = UINT32_MAX;
	int64_t x203 = 709603307LL;
	volatile int8_t x204 = INT8_MAX;

    t45 = (x201-(x202|(x203-x204)));

    if (t45 != -4294901760LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x205 = 17U;
	uint64_t x207 = 195631308LLU;
	volatile uint64_t t46 = 5749096207237LLU;

    t46 = (x205-(x206|(x207-x208)));

    if (t46 != 1197378LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x209 = INT16_MAX;
	uint8_t x211 = UINT8_MAX;
	volatile int32_t t47 = -59;

    t47 = (x209-(x210|(x211-x212)));

    if (t47 != 32824) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x219 = UINT16_MAX;
	volatile int64_t t48 = -509LL;

    t48 = (x217-(x218|(x219-x220)));

    if (t48 != -65541LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x221 = 25852570130269511LL;
	int8_t x222 = -1;
	uint32_t x223 = UINT32_MAX;
	int64_t t49 = 762442980319LL;

    t49 = (x221-(x222|(x223-x224)));

    if (t49 != 25852565835302216LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x225 = 181278669;
	volatile uint64_t x226 = UINT64_MAX;
	volatile uint32_t x228 = UINT32_MAX;
	uint64_t t50 = 12053657013322985LLU;

    t50 = (x225-(x226|(x227-x228)));

    if (t50 != 181278670LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x231 = 0U;
	int64_t x232 = 356262219LL;
	uint64_t t51 = 89829556734846LLU;

    t51 = (x229-(x230|(x231-x232)));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x238 = 2U;
	volatile int64_t t52 = -333923886870259214LL;

    t52 = (x237-(x238|(x239-x240)));

    if (t52 != -4294960363LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x241 = INT64_MIN;
	int32_t x243 = 733436;
	volatile int64_t x244 = INT64_MAX;
	static int64_t t53 = 510086690LL;

    t53 = (x241-(x242|(x243-x244)));

    if (t53 != -788526589LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x245 = -1;
	uint16_t x248 = 198U;

    t54 = (x245-(x246|(x247-x248)));

    if (t54 != 196) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x251 = -948154;
	int16_t x252 = INT16_MIN;

    t55 = (x249-(x250|(x251-x252)));

    if (t55 != 915387LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x255 = 21983U;
	int32_t x256 = -1;
	static volatile int32_t t56 = 78193087;

    t56 = (x253-(x254|(x255-x256)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x257 = -55465LL;
	int16_t x258 = -1;
	static uint32_t x259 = 7868366U;
	uint8_t x260 = 4U;
	static volatile int64_t t57 = 743LL;

    t57 = (x257-(x258|(x259-x260)));

    if (t57 != -4295022760LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x261 = INT8_MAX;
	uint64_t x262 = 339LLU;
	int32_t x263 = INT32_MAX;
	static uint32_t x264 = UINT32_MAX;
	uint64_t t58 = 109325602335418LLU;

    t58 = (x261-(x262|(x263-x264)));

    if (t58 != 18446744071562067756LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x265 = 37185LLU;
	uint32_t x266 = 13667U;
	static int32_t x268 = 3;
	volatile uint64_t t59 = 2085177LLU;

    t59 = (x265-(x266|(x267-x268)));

    if (t59 != 18446744069414621506LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x273 = 0;
	uint16_t x275 = UINT16_MAX;
	uint16_t x276 = 7311U;
	volatile uint32_t t60 = 1269023078U;

    t60 = (x273-(x274|(x275-x276)));

    if (t60 != 4294909072U) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x277 = 731954317803677321LLU;
	int32_t x278 = INT32_MIN;
	volatile uint16_t x279 = 38U;
	uint16_t x280 = UINT16_MAX;
	volatile uint64_t t61 = 215395LLU;

    t61 = (x277-(x278|(x279-x280)));

    if (t61 != 731954317803742818LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x282 = INT64_MIN;
	int8_t x284 = INT8_MAX;
	static volatile int64_t t62 = 258LL;

    t62 = (x281-(x282|(x283-x284)));

    if (t62 != -9223372036854442619LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x285 = 1092790872662883LLU;
	int8_t x286 = INT8_MAX;
	int8_t x287 = 0;
	int16_t x288 = 1;
	uint64_t t63 = 585038775LLU;

    t63 = (x285-(x286|(x287-x288)));

    if (t63 != 1092790872662884LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x294 = 62;
	static volatile uint64_t x295 = UINT64_MAX;
	uint64_t t64 = 34239716873108748LLU;

    t64 = (x293-(x294|(x295-x296)));

    if (t64 != 8194LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x297 = INT8_MIN;
	int16_t x299 = INT16_MAX;
	volatile uint64_t x300 = 715874361504990LLU;

    t65 = (x297-(x298|(x299-x300)));

    if (t65 != 715872263995265LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x301 = INT32_MAX;
	uint64_t x302 = UINT64_MAX;
	int32_t x303 = INT32_MIN;
	int8_t x304 = INT8_MIN;
	static uint64_t t66 = 919086LLU;

    t66 = (x301-(x302|(x303-x304)));

    if (t66 != 2147483648LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x309 = INT32_MIN;
	int64_t x311 = -1LL;
	int64_t x312 = 358168649402LL;
	static int64_t t67 = -12466072LL;

    t67 = (x309-(x310|(x311-x312)));

    if (t67 != 278644607515LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x313 = -449128;
	volatile int8_t x314 = INT8_MAX;
	int16_t x316 = -1;
	uint32_t t68 = 33309195U;

    t68 = (x313-(x314|(x315-x316)));

    if (t68 != 4294518041U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x317 = 514U;
	int32_t x318 = INT32_MIN;
	int16_t x320 = INT16_MIN;
	volatile uint32_t t69 = 11265U;

    t69 = (x317-(x318|(x319-x320)));

    if (t69 != 2147451392U) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x321 = INT8_MAX;
	int8_t x322 = INT8_MIN;
	int64_t x323 = INT64_MIN;
	int16_t x324 = -1;

    t70 = (x321-(x322|(x323-x324)));

    if (t70 != 254LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x330 = -1;
	uint64_t x331 = UINT64_MAX;
	int64_t x332 = 14010890LL;
	static volatile uint64_t t71 = 11630798762901674LLU;

    t71 = (x329-(x330|(x331-x332)));

    if (t71 != 248365944LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x337 = UINT16_MAX;
	int32_t x338 = 49348;
	static int8_t x339 = -1;
	int8_t x340 = -42;
	int32_t t72 = 17149;

    t72 = (x337-(x338|(x339-x340)));

    if (t72 != 16146) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x342 = 51U;
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t73 = -33060;

    t73 = (x341-(x342|(x343-x344)));

    if (t73 != 117516) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x345 = INT8_MIN;
	static int64_t x346 = INT64_MIN;
	uint16_t x347 = 55U;
	static uint64_t x348 = 454900575306LLU;

    t74 = (x345-(x346|(x347-x348)));

    if (t74 != 454900575123LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x349 = UINT32_MAX;
	volatile int64_t x350 = INT64_MIN;
	int16_t x351 = INT16_MIN;
	int32_t x352 = -1;
	int64_t t75 = 882659077741LL;

    t75 = (x349-(x350|(x351-x352)));

    if (t75 != 4295000062LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x355 = 119U;
	int64_t x356 = -37659659127203LL;
	static int64_t t76 = 0LL;

    t76 = (x353-(x354|(x355-x356)));

    if (t76 != -46598178400759LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x357 = 1;
	int16_t x358 = INT16_MAX;
	int8_t x359 = INT8_MIN;
	volatile int32_t t77 = 1;

    t77 = (x357-(x358|(x359-x360)));

    if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x361 = INT8_MIN;
	uint64_t x362 = 768230538531LLU;
	volatile uint8_t x363 = 0U;
	int8_t x364 = 18;
	uint64_t t78 = 7308LLU;

    t78 = (x361-(x362|(x363-x364)));

    if (t78 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x365 = -1LL;
	uint16_t x366 = 2U;
	int64_t x368 = 52071544LL;
	volatile int64_t t79 = 1729577330481283323LL;

    t79 = (x365-(x366|(x367-x368)));

    if (t79 != 2199555189LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x369 = -5;
	volatile int16_t x370 = INT16_MIN;
	static int16_t x371 = 3;
	int8_t x372 = INT8_MAX;

    t80 = (x369-(x370|(x371-x372)));

    if (t80 != 119) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x373 = 12401U;
	uint16_t x374 = UINT16_MAX;
	uint32_t x376 = 50U;
	volatile int64_t t81 = -59LL;

    t81 = (x373-(x374|(x375-x376)));

    if (t81 != 12402LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x377 = -1;
	int64_t x378 = -1LL;
	uint32_t x379 = 21162U;
	volatile int32_t x380 = -1;

    t82 = (x377-(x378|(x379-x380)));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x381 = INT32_MAX;
	int16_t x383 = -1;
	volatile uint8_t x384 = 0U;
	static uint32_t t83 = 477U;

    t83 = (x381-(x382|(x383-x384)));

    if (t83 != 2147483648U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x385 = UINT64_MAX;
	static int8_t x386 = -1;
	uint64_t x387 = 172035640247LLU;
	static int64_t x388 = -1LL;
	uint64_t t84 = 63031951520851LLU;

    t84 = (x385-(x386|(x387-x388)));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x389 = 32U;
	static int16_t x390 = -1;
	static int32_t x391 = 29535518;
	volatile int32_t t85 = 18;

    t85 = (x389-(x390|(x391-x392)));

    if (t85 != 33) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x393 = -59814933923309294LL;
	uint64_t x394 = 53LLU;
	int8_t x396 = 1;
	volatile uint64_t t86 = 1326597062598LLU;

    t86 = (x393-(x394|(x395-x396)));

    if (t86 != 18386929139786242333LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x398 = 5422181744139498LLU;
	volatile int64_t x399 = -1209361LL;
	uint64_t t87 = 28228LLU;

    t87 = (x397-(x398|(x399-x400)));

    if (t87 != 4296155376LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x401 = 352193410514460835LLU;
	volatile int32_t x402 = INT32_MIN;
	int16_t x403 = -1;
	uint16_t x404 = 85U;
	volatile uint64_t t88 = 5163808044652LLU;

    t88 = (x401-(x402|(x403-x404)));

    if (t88 != 352193410514460921LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x405 = INT16_MIN;
	static int32_t x406 = -1630637;
	static volatile int16_t x407 = 13;
	uint32_t x408 = 13U;
	volatile uint32_t t89 = 3627625U;

    t89 = (x405-(x406|(x407-x408)));

    if (t89 != 1597869U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x409 = 951530506U;
	int64_t x410 = INT64_MIN;
	volatile int64_t x411 = INT64_MAX;
	volatile uint64_t x412 = 1441701937376028LLU;
	uint64_t t90 = 3592LLU;

    t90 = (x409-(x410|(x411-x412)));

    if (t90 != 1441702888906535LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x413 = -1;
	volatile uint64_t x414 = 126033LLU;
	uint64_t x416 = 14138LLU;
	volatile uint64_t t91 = 112726691673789268LLU;

    t91 = (x413-(x414|(x415-x416)));

    if (t91 != 5032LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x417 = -249;
	static int64_t x418 = -1LL;
	int64_t x419 = -1LL;
	int16_t x420 = INT16_MIN;
	static volatile int64_t t92 = 2966076291565LL;

    t92 = (x417-(x418|(x419-x420)));

    if (t92 != -248LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x421 = INT8_MIN;
	uint8_t x423 = UINT8_MAX;
	uint8_t x424 = UINT8_MAX;
	int64_t t93 = -457314157302576LL;

    t93 = (x421-(x422|(x423-x424)));

    if (t93 != -127LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x427 = INT32_MIN;
	volatile uint64_t t94 = 374618LLU;

    t94 = (x425-(x426|(x427-x428)));

    if (t94 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x429 = UINT16_MAX;
	int32_t x430 = -1;
	int64_t x432 = -5268636089LL;
	int64_t t95 = -8114LL;

    t95 = (x429-(x430|(x431-x432)));

    if (t95 != 65536LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x433 = -230;
	int16_t x434 = INT16_MIN;

    t96 = (x433-(x434|(x435-x436)));

    if (t96 != 19434) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x437 = -2;
	volatile uint16_t x439 = UINT16_MAX;
	int32_t x440 = -1;
	uint64_t t97 = 252989622LLU;

    t97 = (x437-(x438|(x439-x440)));

    if (t97 != 18446744073709455276LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x442 = -4132475582052619LL;
	uint16_t x443 = 7332U;
	volatile int16_t x444 = -1;
	volatile int64_t t98 = 202614LL;

    t98 = (x441-(x442|(x443-x444)));

    if (t98 != 4132477729530122LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x445 = UINT32_MAX;
	int64_t x446 = 471LL;
	uint32_t x447 = 622513972U;
	uint32_t x448 = 7540U;
	volatile int64_t t99 = 1327792024290150LL;

    t99 = (x445-(x446|(x447-x448)));

    if (t99 != 3672460840LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x450 = 12982U;
	static uint16_t x452 = UINT16_MAX;

    t100 = (x449-(x450|(x451-x452)));

    if (t100 != 6566497U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x453 = 1;
	int16_t x454 = INT16_MIN;
	uint64_t x455 = 2234832575629731LLU;
	int16_t x456 = -1;

    t101 = (x453-(x454|(x455-x456)));

    if (t101 != 30301LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x457 = 127;
	int8_t x458 = -1;
	uint32_t x460 = 1U;
	volatile uint32_t t102 = 2U;

    t102 = (x457-(x458|(x459-x460)));

    if (t102 != 128U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x461 = -1;
	uint64_t x462 = 12510846085108LLU;
	int64_t x463 = -3252309LL;
	static uint64_t t103 = 3LLU;

    t103 = (x461-(x462|(x463-x464)));

    if (t103 != 3178504LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x466 = 519613LLU;
	int16_t x467 = -1;
	volatile int32_t x468 = 0;
	static volatile uint64_t t104 = 1646077620020LLU;

    t104 = (x465-(x466|(x467-x468)));

    if (t104 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x469 = 30145424288136LL;
	uint64_t x470 = UINT64_MAX;
	int32_t x471 = 1;
	static volatile uint32_t x472 = UINT32_MAX;
	uint64_t t105 = 8936694872392179LLU;

    t105 = (x469-(x470|(x471-x472)));

    if (t105 != 30145424288137LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x473 = -1;
	int32_t x474 = INT32_MIN;
	int16_t x476 = INT16_MAX;
	uint32_t t106 = 0U;

    t106 = (x473-(x474|(x475-x476)));

    if (t106 != 1864016124U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x477 = INT16_MIN;
	volatile int8_t x478 = INT8_MIN;
	volatile uint16_t x479 = UINT16_MAX;
	volatile int16_t x480 = 1;

    t107 = (x477-(x478|(x479-x480)));

    if (t107 != -32766) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x481 = INT16_MIN;
	volatile uint64_t x482 = 127685434252942LLU;
	static uint64_t t108 = 117410696LLU;

    t108 = (x481-(x482|(x483-x484)));

    if (t108 != 18446616388275265906LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x485 = INT16_MIN;
	uint64_t x487 = 4323171122452LLU;
	volatile int64_t x488 = 1627132370748LL;
	volatile uint64_t t109 = 92364LLU;

    t109 = (x485-(x486|(x487-x488)));

    if (t109 != 18446741377594139141LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint64_t x490 = UINT64_MAX;
	int32_t x491 = INT32_MIN;
	uint64_t x492 = 10305637708037718LLU;

    t110 = (x489-(x490|(x491-x492)));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x493 = -427853159;
	int8_t x494 = INT8_MAX;
	static int8_t x496 = -1;
	static uint32_t t111 = 94105U;

    t111 = (x493-(x494|(x495-x496)));

    if (t111 != 3864860186U) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x501 = 496;
	int16_t x502 = -3;
	int64_t x503 = INT64_MAX;
	static uint64_t x504 = UINT64_MAX;
	uint64_t t112 = 496LLU;

    t112 = (x501-(x502|(x503-x504)));

    if (t112 != 499LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int64_t x505 = 75LL;
	volatile int8_t x506 = INT8_MIN;
	int64_t x507 = INT64_MAX;
	int16_t x508 = INT16_MAX;
	static int64_t t113 = -1LL;

    t113 = (x505-(x506|(x507-x508)));

    if (t113 != 203LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x510 = 4233883814LLU;
	int64_t x511 = 1718339850360546LL;
	uint16_t x512 = 6486U;
	uint64_t t114 = 54371859501128LLU;

    t114 = (x509-(x510|(x511-x512)));

    if (t114 != 18445025708899906768LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x513 = UINT64_MAX;
	int16_t x515 = INT16_MAX;
	uint8_t x516 = UINT8_MAX;
	static uint64_t t115 = 1280257865951807LLU;

    t115 = (x513-(x514|(x515-x516)));

    if (t115 != 127LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x518 = 23U;
	uint32_t x520 = UINT32_MAX;

    t116 = (x517-(x518|(x519-x520)));

    if (t116 != 232U) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x526 = INT16_MAX;
	int64_t x527 = INT64_MIN;
	int8_t x528 = INT8_MIN;

    t117 = (x525-(x526|(x527-x528)));

    if (t117 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x529 = INT32_MIN;
	int8_t x531 = INT8_MIN;
	int64_t x532 = INT64_MIN;
	static int64_t t118 = 120LL;

    t118 = (x529-(x530|(x531-x532)));

    if (t118 != -2147483647LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x533 = INT32_MIN;
	uint64_t x534 = 2014459695180872LLU;
	volatile int8_t x535 = 1;
	int16_t x536 = INT16_MAX;
	volatile uint64_t t119 = 1433LLU;

    t119 = (x533-(x534|(x535-x536)));

    if (t119 != 18446744071562089398LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x537 = INT16_MIN;
	static volatile uint8_t x538 = 19U;
	int8_t x539 = INT8_MAX;
	uint8_t x540 = UINT8_MAX;
	volatile int32_t t120 = 250;

    t120 = (x537-(x538|(x539-x540)));

    if (t120 != -32659) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x545 = -7;
	uint16_t x546 = UINT16_MAX;
	volatile int64_t x547 = INT64_MIN;
	volatile int8_t x548 = INT8_MIN;
	volatile int64_t t121 = 2275LL;

    t121 = (x545-(x546|(x547-x548)));

    if (t121 != 9223372036854710266LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x549 = 43U;
	static uint16_t x550 = 244U;
	volatile int8_t x551 = INT8_MIN;
	uint32_t x552 = 16667056U;
	volatile uint32_t t122 = 3U;

    t122 = (x549-(x550|(x551-x552)));

    if (t122 != 16667191U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x553 = 21;
	volatile uint32_t x554 = UINT32_MAX;
	int8_t x555 = INT8_MAX;
	uint8_t x556 = UINT8_MAX;
	uint32_t t123 = 109219283U;

    t123 = (x553-(x554|(x555-x556)));

    if (t123 != 22U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x557 = 19;
	uint16_t x558 = UINT16_MAX;
	uint64_t x559 = 3397306784674LLU;
	static uint8_t x560 = UINT8_MAX;
	volatile uint64_t t124 = 168619LLU;

    t124 = (x557-(x558|(x559-x560)));

    if (t124 != 18446740676402741268LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x561 = 6U;
	uint32_t x563 = 604197762U;
	int16_t x564 = 361;
	static volatile uint32_t t125 = 105U;

    t125 = (x561-(x562|(x563-x564)));

    if (t125 != 7U) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x565 = 340057120289LL;
	int64_t x566 = -659026350LL;
	uint32_t x568 = 3U;
	volatile int64_t t126 = -63035233480460778LL;

    t126 = (x565-(x566|(x567-x568)));

    if (t126 != 340716084771LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x569 = UINT32_MAX;
	uint16_t x570 = UINT16_MAX;
	int32_t x571 = -1;
	volatile uint8_t x572 = UINT8_MAX;
	uint32_t t127 = 1U;

    t127 = (x569-(x570|(x571-x572)));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x577 = -5;
	uint64_t x578 = UINT64_MAX;
	int64_t x579 = 0LL;
	static uint64_t t128 = 15721972LLU;

    t128 = (x577-(x578|(x579-x580)));

    if (t128 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x581 = UINT32_MAX;
	static int32_t x583 = INT32_MIN;
	uint32_t t129 = 76655760U;

    t129 = (x581-(x582|(x583-x584)));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x589 = INT8_MAX;
	static uint32_t x590 = 35766U;
	static int8_t x591 = INT8_MIN;
	static int32_t x592 = -1;
	uint32_t t130 = 480U;

    t130 = (x589-(x590|(x591-x592)));

    if (t130 != 200U) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int16_t x593 = INT16_MAX;
	int32_t x595 = INT32_MAX;
	static int64_t x596 = INT64_MAX;
	volatile int64_t t131 = -1855186295597466772LL;

    t131 = (x593-(x594|(x595-x596)));

    if (t131 != 32777LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x597 = -1;
	int64_t x598 = INT64_MAX;
	int8_t x600 = 1;
	volatile int64_t t132 = INT64_MIN;

    t132 = (x597-(x598|(x599-x600)));

    if (t132 != INT64_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x601 = UINT64_MAX;
	int32_t x602 = INT32_MIN;
	int32_t x604 = INT32_MIN;

    t133 = (x601-(x602|(x603-x604)));

    if (t133 != 2147483647LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x610 = INT16_MIN;
	volatile uint32_t x611 = 1454589806U;
	volatile int32_t x612 = INT32_MAX;
	int64_t t134 = 4145172598LL;

    t134 = (x609-(x610|(x611-x612)));

    if (t134 != -4294952816LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x613 = 15U;
	int64_t x616 = -211545148LL;
	volatile int64_t t135 = -910185875LL;

    t135 = (x613-(x614|(x615-x616)));

    if (t135 != 16LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x617 = -1LL;
	static int32_t x618 = 4;
	uint8_t x619 = 1U;
	static int16_t x620 = 10;
	int64_t t136 = -5LL;

    t136 = (x617-(x618|(x619-x620)));

    if (t136 != 8LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x621 = 2966455005263376LLU;
	uint64_t x622 = UINT64_MAX;
	uint64_t x623 = 448LLU;
	static int32_t x624 = 149;
	uint64_t t137 = 5218377LLU;

    t137 = (x621-(x622|(x623-x624)));

    if (t137 != 2966455005263377LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x625 = 4417;
	static int32_t x626 = INT32_MAX;
	int8_t x628 = -1;
	int32_t t138 = -56;

    t138 = (x625-(x626|(x627-x628)));

    if (t138 != 4418) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x629 = 6138901916698164959LLU;
	int8_t x630 = 5;
	static int8_t x632 = 2;
	static uint64_t t139 = 1741LLU;

    t139 = (x629-(x630|(x631-x632)));

    if (t139 != 6138698438411341858LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x633 = 17U;
	static int32_t x634 = 333723;
	int8_t x635 = -1;
	int16_t x636 = INT16_MIN;

    t140 = (x633-(x634|(x635-x636)));

    if (t140 != -360430) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x637 = 1;
	int64_t x638 = -27528LL;
	static int8_t x639 = 1;
	static int16_t x640 = 7;
	static volatile int64_t t141 = 342416679589231LL;

    t141 = (x637-(x638|(x639-x640)));

    if (t141 != 7LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x645 = 82;
	static int8_t x646 = -1;
	uint32_t x647 = 398U;
	uint64_t x648 = UINT64_MAX;
	uint64_t t142 = 11047LLU;

    t142 = (x645-(x646|(x647-x648)));

    if (t142 != 83LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x650 = INT64_MIN;
	uint8_t x651 = UINT8_MAX;
	volatile int64_t x652 = -1LL;
	static volatile int64_t t143 = -53025601543720232LL;

    t143 = (x649-(x650|(x651-x652)));

    if (t143 != 9223372036854775558LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint64_t x653 = UINT64_MAX;
	int64_t x654 = -1263505516LL;
	int16_t x656 = -75;
	volatile uint64_t t144 = 59526408LLU;

    t144 = (x653-(x654|(x655-x656)));

    if (t144 != 1263505440LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x661 = INT32_MIN;
	int64_t x662 = -20623071LL;
	int64_t x663 = INT64_MAX;
	static int64_t x664 = 10157LL;
	volatile int64_t t145 = 15359816747692LL;

    t145 = (x661-(x662|(x663-x664)));

    if (t145 != -2147473779LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x665 = INT32_MIN;
	static int16_t x666 = 0;
	uint32_t x667 = 0U;
	volatile int32_t x668 = INT32_MIN;
	volatile uint32_t t146 = 1U;

    t146 = (x665-(x666|(x667-x668)));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x670 = -1LL;
	int8_t x671 = INT8_MIN;
	int8_t x672 = INT8_MAX;
	int64_t t147 = 4LL;

    t147 = (x669-(x670|(x671-x672)));

    if (t147 != -2147483647LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x673 = 18651583704LLU;
	int8_t x675 = INT8_MIN;
	uint16_t x676 = 9333U;
	static uint64_t t148 = 19075356474170LLU;

    t148 = (x673-(x674|(x675-x676)));

    if (t148 != 18651591897LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x677 = INT64_MAX;
	volatile uint16_t x679 = 5U;
	static volatile int64_t t149 = 1216534274074988318LL;

    t149 = (x677-(x678|(x679-x680)));

    if (t149 != 9223372032559868409LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x681 = INT32_MAX;
	uint8_t x682 = UINT8_MAX;
	volatile int64_t x683 = 41194LL;
	int32_t x684 = 1;
	int64_t t150 = -336LL;

    t150 = (x681-(x682|(x683-x684)));

    if (t150 != 2147442432LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x685 = INT16_MIN;
	uint8_t x686 = 34U;
	uint8_t x687 = 2U;
	int16_t x688 = INT16_MIN;
	volatile int32_t t151 = -2;

    t151 = (x685-(x686|(x687-x688)));

    if (t151 != -65570) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x690 = INT32_MAX;
	static uint32_t x691 = 447776U;
	uint8_t x692 = 58U;
	uint32_t t152 = 23286246U;

    t152 = (x689-(x690|(x691-x692)));

    if (t152 != 2147483648U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x693 = UINT8_MAX;
	static uint64_t x694 = 29635LLU;
	int8_t x695 = INT8_MIN;
	uint8_t x696 = 15U;
	static volatile uint64_t t153 = 171304516709257LLU;

    t153 = (x693-(x694|(x695-x696)));

    if (t153 != 268LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x697 = INT8_MIN;
	volatile uint64_t x698 = 1LLU;
	uint32_t x699 = 2U;
	volatile int32_t x700 = -1;
	volatile uint64_t t154 = 58605LLU;

    t154 = (x697-(x698|(x699-x700)));

    if (t154 != 18446744073709551485LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x702 = 3U;
	int64_t x704 = -1LL;
	volatile int64_t t155 = 788LL;

    t155 = (x701-(x702|(x703-x704)));

    if (t155 != -2147549187LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x705 = 2675;
	volatile int64_t x706 = INT64_MIN;
	static uint16_t x707 = 24U;
	int16_t x708 = INT16_MIN;
	int64_t t156 = 1821LL;

    t156 = (x705-(x706|(x707-x708)));

    if (t156 != 9223372036854745691LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x709 = INT16_MIN;
	uint8_t x710 = 93U;
	volatile int16_t x712 = INT16_MAX;
	static int32_t t157 = -263708;

    t157 = (x709-(x710|(x711-x712)));

    if (t157 != -349) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x713 = UINT32_MAX;
	int64_t x715 = -1LL;
	int8_t x716 = -1;
	int64_t t158 = 22159569619LL;

    t158 = (x713-(x714|(x715-x716)));

    if (t158 != 4294967423LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x717 = INT16_MAX;
	int64_t x718 = -105529192859525LL;
	int64_t x719 = 42442930LL;
	volatile int16_t x720 = -1;
	static int64_t t159 = 1LL;

    t159 = (x717-(x718|(x719-x720)));

    if (t159 != 105529158977284LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x721 = 341192247110634683LLU;
	static int32_t x722 = INT32_MAX;
	volatile int8_t x723 = -1;
	int8_t x724 = INT8_MIN;
	volatile uint64_t t160 = 111974LLU;

    t160 = (x721-(x722|(x723-x724)));

    if (t160 != 341192244963151036LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x726 = INT8_MIN;
	volatile uint64_t x727 = UINT64_MAX;

    t161 = (x725-(x726|(x727-x728)));

    if (t161 != 3491LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x742 = INT64_MIN;

    t162 = (x741-(x742|(x743-x744)));

    if (t162 != 9223372032565540400LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x745 = UINT64_MAX;
	int8_t x746 = INT8_MAX;
	static uint32_t x747 = 7U;
	volatile uint64_t x748 = 5403757994507851LLU;
	static volatile uint64_t t163 = 813440900843LLU;

    t163 = (x745-(x746|(x747-x748)));

    if (t163 != 5403757994507776LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x753 = INT32_MIN;
	int64_t x754 = INT64_MIN;
	static uint64_t x755 = UINT64_MAX;
	volatile uint64_t x756 = UINT64_MAX;

    t164 = (x753-(x754|(x755-x756)));

    if (t164 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x757 = 0;
	uint16_t x758 = UINT16_MAX;
	int16_t x759 = INT16_MAX;
	static uint16_t x760 = UINT16_MAX;

    t165 = (x757-(x758|(x759-x760)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x761 = UINT8_MAX;
	uint32_t x762 = UINT32_MAX;
	int16_t x763 = 1;
	volatile uint32_t t166 = 6U;

    t166 = (x761-(x762|(x763-x764)));

    if (t166 != 256U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x766 = UINT16_MAX;
	int32_t x767 = INT32_MIN;
	uint16_t x768 = 0U;
	int32_t t167 = 0;

    t167 = (x765-(x766|(x767-x768)));

    if (t167 != 2147418129) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x769 = -1;
	int8_t x770 = INT8_MIN;
	uint64_t x771 = 27483342107667LLU;
	uint32_t x772 = 833863U;
	uint64_t t168 = 4190400002630883981LLU;

    t168 = (x769-(x770|(x771-x772)));

    if (t168 != 51LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x774 = INT32_MAX;
	uint32_t x775 = 10U;
	int32_t x776 = -52549131;
	static volatile uint32_t t169 = 5U;

    t169 = (x773-(x774|(x775-x776)));

    if (t169 != 2147450881U) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x777 = INT8_MIN;
	volatile int64_t x778 = -1LL;
	static uint16_t x779 = 2280U;
	uint32_t x780 = UINT32_MAX;
	volatile int64_t t170 = -3073372032LL;

    t170 = (x777-(x778|(x779-x780)));

    if (t170 != -127LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x781 = -1;
	int32_t x782 = -1;
	uint64_t x783 = UINT64_MAX;
	uint16_t x784 = 12214U;
	static volatile uint64_t t171 = 275566LLU;

    t171 = (x781-(x782|(x783-x784)));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x786 = 65787698164016LLU;
	uint16_t x787 = 4113U;
	int8_t x788 = INT8_MIN;
	uint64_t t172 = 20341976LLU;

    t172 = (x785-(x786|(x787-x788)));

    if (t172 != 18446678286011354703LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x789 = INT8_MAX;
	int64_t x791 = -1LL;
	static int64_t x792 = -1LL;

    t173 = (x789-(x790|(x791-x792)));

    if (t173 != -32640LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x793 = 1;
	int8_t x794 = INT8_MAX;
	int32_t x796 = INT32_MAX;
	static volatile uint32_t t174 = 4440185U;

    t174 = (x793-(x794|(x795-x796)));

    if (t174 != 2147420546U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x801 = -1;
	volatile uint32_t x802 = 22U;
	int8_t x804 = INT8_MIN;

    t175 = (x801-(x802|(x803-x804)));

    if (t175 != 2147483497U) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x805 = 7;
	uint8_t x807 = 0U;
	static uint64_t x808 = 385123LLU;
	volatile uint64_t t176 = 290938271LLU;

    t176 = (x805-(x806|(x807-x808)));

    if (t176 != 360456LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x809 = INT16_MIN;
	int16_t x810 = INT16_MIN;
	volatile int32_t x811 = 1623;
	int8_t x812 = -1;

    t177 = (x809-(x810|(x811-x812)));

    if (t177 != -1624) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x813 = INT16_MIN;
	int32_t x814 = -1;
	uint16_t x815 = 2U;
	volatile uint16_t x816 = 18U;

    t178 = (x813-(x814|(x815-x816)));

    if (t178 != -32767) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x818 = -67588302978LL;
	uint64_t x819 = 29737345475LLU;
	int8_t x820 = -1;
	volatile uint64_t t179 = 7LLU;

    t179 = (x817-(x818|(x819-x820)));

    if (t179 != 38931531905LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x821 = UINT8_MAX;
	static uint32_t x822 = 1U;

    t180 = (x821-(x822|(x823-x824)));

    if (t180 != -9223372036849019476LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x825 = INT8_MAX;
	static uint64_t x827 = 35696LLU;
	static uint64_t t181 = 29890783227LLU;

    t181 = (x825-(x826|(x827-x828)));

    if (t181 != 18446744071562068096LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x830 = 0LLU;
	int64_t x832 = -1LL;
	static volatile uint64_t t182 = 433165LLU;

    t182 = (x829-(x830|(x831-x832)));

    if (t182 != 32894LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x835 = 4U;
	uint64_t x836 = 4515084LLU;
	static volatile uint64_t t183 = 321946700LLU;

    t183 = (x833-(x834|(x835-x836)));

    if (t183 != 3LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x837 = 138336335;
	int32_t x839 = -46;

    t184 = (x837-(x838|(x839-x840)));

    if (t184 != 138445554) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x841 = 4;
	static int64_t x842 = INT64_MAX;
	int16_t x843 = INT16_MIN;
	volatile int64_t t185 = 60166831LL;

    t185 = (x841-(x842|(x843-x844)));

    if (t185 != 5LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x845 = -1LL;
	int8_t x846 = 5;
	int64_t x847 = -3678977371LL;
	int32_t x848 = -1;
	int64_t t186 = 4402793874666174701LL;

    t186 = (x845-(x846|(x847-x848)));

    if (t186 != 3678977368LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x849 = -1LL;
	volatile int8_t x850 = INT8_MIN;
	int8_t x851 = -2;
	uint16_t x852 = UINT16_MAX;

    t187 = (x849-(x850|(x851-x852)));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x853 = UINT32_MAX;
	uint16_t x854 = 9U;
	static int8_t x855 = INT8_MAX;
	uint32_t t188 = 0U;

    t188 = (x853-(x854|(x855-x856)));

    if (t188 != 4294963824U) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x861 = INT32_MAX;
	volatile uint8_t x862 = 57U;
	uint16_t x863 = 2U;
	int16_t x864 = -7;

    t189 = (x861-(x862|(x863-x864)));

    if (t189 != 2147483590) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x865 = 104U;
	static volatile int8_t x866 = INT8_MAX;
	static int64_t x868 = INT64_MIN;
	volatile int64_t t190 = -2828219304LL;

    t190 = (x865-(x866|(x867-x868)));

    if (t190 != -23LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x869 = -1LL;
	volatile int32_t x871 = -1160;
	volatile uint64_t t191 = 539427497660LLU;

    t191 = (x869-(x870|(x871-x872)));

    if (t191 != 1028LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int32_t x873 = INT32_MIN;
	volatile int8_t x874 = -9;
	static int8_t x875 = INT8_MAX;
	int16_t x876 = INT16_MAX;
	int32_t t192 = 4069;

    t192 = (x873-(x874|(x875-x876)));

    if (t192 != -2147483639) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x877 = 4;
	static uint64_t x878 = UINT64_MAX;
	int8_t x879 = -1;
	static int16_t x880 = 751;

    t193 = (x877-(x878|(x879-x880)));

    if (t193 != 5LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x881 = INT16_MIN;
	static int8_t x882 = -2;
	static int8_t x883 = 1;
	volatile int64_t x884 = INT64_MAX;
	int64_t t194 = -29614178909030LL;

    t194 = (x881-(x882|(x883-x884)));

    if (t194 != -32766LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x889 = UINT16_MAX;
	volatile int32_t x890 = INT32_MIN;
	uint64_t x891 = UINT64_MAX;
	int8_t x892 = 0;
	static volatile uint64_t t195 = 834822160181698025LLU;

    t195 = (x889-(x890|(x891-x892)));

    if (t195 != 65536LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x897 = INT16_MAX;
	int16_t x899 = INT16_MIN;

    t196 = (x897-(x898|(x899-x900)));

    if (t196 != 65545) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x901 = 27;
	volatile int32_t x903 = INT32_MIN;
	static int8_t x904 = -38;
	volatile int32_t t197 = -2796;

    t197 = (x901-(x902|(x903-x904)));

    if (t197 != 2147483637) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x906 = -1LL;
	uint8_t x907 = 0U;
	static volatile int16_t x908 = -1;
	int64_t t198 = -49411356LL;

    t198 = (x905-(x906|(x907-x908)));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x909 = INT64_MIN;
	volatile int8_t x910 = -1;
	int8_t x912 = -1;
	int64_t t199 = -860587159869101751LL;

    t199 = (x909-(x910|(x911-x912)));

    if (t199 != -9223372036854775807LL) { NG(); } else { ; }
	
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

