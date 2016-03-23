
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

static volatile int16_t x2 = INT16_MIN;
volatile uint16_t x10 = 10999U;
static volatile int32_t x12 = -1;
int32_t t4 = -210;
volatile uint64_t x34 = 206453690671LLU;
int8_t x36 = INT8_MAX;
int32_t t6 = -921;
static int8_t x45 = 6;
uint16_t x49 = 1U;
static int64_t x51 = INT64_MAX;
volatile int32_t t10 = -784292560;
int64_t x69 = 262122149788LL;
volatile int32_t t12 = 1470;
uint64_t x87 = 0LLU;
static volatile int32_t t14 = -1429400;
uint8_t x93 = 5U;
int32_t t15 = 65;
uint16_t x98 = 131U;
int8_t x101 = INT8_MIN;
volatile int32_t t18 = 69360091;
int32_t x119 = 2801755;
volatile uint64_t x120 = UINT64_MAX;
uint32_t x122 = 9938794U;
uint64_t x132 = UINT64_MAX;
volatile int32_t x134 = INT32_MAX;
volatile uint16_t x135 = UINT16_MAX;
static volatile int32_t t26 = 53603662;
static uint8_t x156 = 5U;
int32_t t30 = 1;
volatile uint8_t x163 = 87U;
volatile uint32_t x169 = 153319U;
volatile int8_t x171 = INT8_MIN;
static volatile uint32_t x187 = 7766U;
static volatile int32_t t35 = 35;
uint8_t x194 = 10U;
int32_t t36 = 215832655;
static int64_t x201 = INT64_MIN;
int32_t x202 = 13;
int16_t x206 = INT16_MIN;
int32_t x208 = INT32_MIN;
int32_t t39 = -23405;
int32_t x214 = -1;
int16_t x216 = INT16_MIN;
int16_t x223 = INT16_MAX;
int8_t x226 = -4;
int32_t t42 = 1;
uint8_t x238 = UINT8_MAX;
int32_t x245 = INT32_MIN;
int16_t x252 = -1;
volatile int32_t t46 = 902980082;
volatile int32_t x257 = -71;
uint32_t x261 = UINT32_MAX;
uint8_t x281 = UINT8_MAX;
int32_t x282 = -1;
int16_t x285 = -1;
int32_t x286 = -1;
uint64_t x288 = UINT64_MAX;
int32_t t52 = -93738651;
volatile int16_t x291 = 1;
uint8_t x292 = 50U;
int32_t t53 = 226;
volatile uint64_t x296 = 63192539952599657LLU;
volatile int32_t t54 = -3889;
int32_t t55 = -37949834;
static uint64_t x310 = UINT64_MAX;
int8_t x315 = INT8_MAX;
int16_t x316 = INT16_MIN;
static int64_t x317 = INT64_MAX;
volatile int16_t x335 = INT16_MAX;
uint16_t x336 = UINT16_MAX;
volatile int64_t x345 = 60270LL;
uint8_t x347 = UINT8_MAX;
volatile int32_t t64 = 4145365;
static int8_t x352 = INT8_MIN;
volatile uint8_t x354 = UINT8_MAX;
int32_t t66 = -146528586;
int32_t t71 = 3;
uint16_t x381 = 91U;
static int32_t x382 = -1;
static int32_t t72 = 229705;
volatile int32_t x386 = -1;
volatile int32_t x387 = -1;
int8_t x397 = 6;
int8_t x403 = INT8_MAX;
volatile int32_t t78 = 101;
int32_t t80 = 656513126;
int32_t x422 = INT32_MIN;
uint32_t x442 = UINT32_MAX;
uint64_t x446 = 4414LLU;
volatile int32_t t86 = 120936;
static int64_t x467 = INT64_MIN;
volatile int32_t t87 = 102997;
uint32_t x470 = 2299U;
uint32_t x481 = 69U;
int16_t x482 = -989;
int8_t x487 = INT8_MAX;
int64_t x488 = -326563765LL;
volatile int32_t t91 = 1;
int8_t x491 = 1;
volatile int32_t t92 = 47155079;
int16_t x493 = INT16_MAX;
int32_t t93 = -11;
uint32_t x506 = UINT32_MAX;
volatile int16_t x507 = INT16_MAX;
static volatile int32_t x508 = INT32_MIN;
int64_t x518 = INT64_MIN;
int32_t t97 = 20;
uint64_t x531 = 1203602LLU;
uint64_t x537 = 25996219176LLU;
volatile int64_t x556 = 993LL;
static uint16_t x597 = UINT16_MAX;
int64_t x605 = 54548337183064LL;
int16_t x613 = -1;
int16_t x616 = INT16_MIN;
uint8_t x620 = 18U;
uint64_t x622 = 31709825753LLU;
static int64_t x623 = 13729596032533LL;
int64_t x624 = -1LL;
volatile uint8_t x630 = 17U;
static int8_t x632 = INT8_MAX;
volatile int32_t t119 = 816;
uint16_t x646 = UINT16_MAX;
volatile int32_t x653 = INT32_MIN;
int8_t x657 = INT8_MAX;
volatile int16_t x664 = 0;
static volatile uint16_t x678 = UINT16_MAX;
volatile int32_t x681 = INT32_MIN;
uint8_t x682 = UINT8_MAX;
static int32_t x693 = INT32_MIN;
int32_t x699 = 0;
uint64_t x711 = 804578756349105077LLU;
int32_t t135 = -3;
volatile uint8_t x735 = 38U;
volatile int32_t t139 = 29696668;
volatile uint32_t x739 = 1441295U;
volatile uint8_t x744 = UINT8_MAX;
volatile int16_t x755 = INT16_MIN;
int8_t x780 = INT8_MIN;
uint16_t x784 = UINT16_MAX;
static volatile uint32_t x786 = UINT32_MAX;
int32_t x803 = INT32_MIN;
int16_t x805 = -1;
uint16_t x807 = 34U;
volatile int32_t t151 = -691;
static volatile int16_t x836 = -3264;
volatile int32_t t154 = -1;
uint32_t x848 = UINT32_MAX;
static volatile int32_t t156 = 1786620;
volatile uint64_t x867 = 1253160724325379LLU;
static uint32_t x873 = UINT32_MAX;
int8_t x878 = -1;
int32_t x879 = -1;
int32_t t166 = -7;
int16_t x905 = INT16_MIN;
int8_t x908 = 55;
int32_t t167 = 449131;
int16_t x909 = INT16_MIN;
volatile int32_t t169 = -14;
int32_t x921 = INT32_MIN;
uint32_t x922 = 15705U;
uint8_t x927 = 0U;
int16_t x936 = INT16_MIN;
int16_t x943 = INT16_MIN;
volatile uint32_t x948 = 835581U;
int8_t x952 = 1;
int64_t x953 = 3451LL;
int32_t t177 = -407575;
uint8_t x966 = UINT8_MAX;
int32_t x969 = INT32_MAX;
int8_t x979 = INT8_MIN;
volatile int32_t t181 = 247;
uint8_t x990 = 61U;
int8_t x992 = -1;
uint8_t x1005 = UINT8_MAX;
int16_t x1011 = INT16_MIN;
volatile int32_t x1012 = 1;
static uint16_t x1013 = 0U;
int64_t x1015 = -1LL;
volatile uint32_t x1018 = 6U;
uint8_t x1029 = UINT8_MAX;
static uint16_t x1044 = 6U;
uint16_t x1053 = 1U;
volatile int32_t t192 = -61158;
int8_t x1057 = -1;
int32_t t193 = 5;
static int8_t x1069 = INT8_MAX;
static int16_t x1075 = INT16_MAX;
uint32_t x1080 = 12U;
static int16_t x1083 = -1;
int32_t x1084 = INT32_MAX;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	volatile uint32_t x3 = 15767U;
	uint64_t x4 = UINT64_MAX;
	int32_t t0 = -65;

    t0 = (x1==(x2*(x3+x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	uint64_t x6 = UINT64_MAX;
	int32_t x7 = -1;
	volatile int8_t x8 = 31;
	int32_t t1 = 1845588;

    t1 = (x5==(x6*(x7+x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = -1LL;
	int16_t x11 = INT16_MAX;
	volatile int32_t t2 = 2;

    t2 = (x9==(x10*(x11+x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = INT32_MAX;
	int64_t x18 = INT64_MIN;
	uint64_t x19 = 9373617085156LLU;
	int32_t x20 = 840389;
	int32_t t3 = -33;

    t3 = (x17==(x18*(x19+x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = INT16_MAX;
	int16_t x22 = 0;
	volatile uint32_t x23 = 970585439U;
	static uint16_t x24 = 96U;

    t4 = (x21==(x22*(x23+x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x33 = INT64_MAX;
	int32_t x35 = INT32_MIN;
	volatile int32_t t5 = 99016;

    t5 = (x33==(x34*(x35+x36)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x37 = 1755366810137LL;
	int64_t x38 = -28LL;
	int16_t x39 = INT16_MIN;
	static uint64_t x40 = UINT64_MAX;

    t6 = (x37==(x38*(x39+x40)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x41 = -792976926;
	uint8_t x42 = 1U;
	uint16_t x43 = 108U;
	uint16_t x44 = 12018U;
	volatile int32_t t7 = 2182;

    t7 = (x41==(x42*(x43+x44)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x46 = 544337645224211516LLU;
	volatile uint16_t x47 = UINT16_MAX;
	uint8_t x48 = 35U;
	volatile int32_t t8 = -1;

    t8 = (x45==(x46*(x47+x48)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x50 = UINT64_MAX;
	int8_t x52 = INT8_MIN;
	static int32_t t9 = 41028969;

    t9 = (x49==(x50*(x51+x52)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x61 = INT32_MIN;
	int8_t x62 = INT8_MAX;
	uint32_t x63 = UINT32_MAX;
	static int16_t x64 = INT16_MIN;

    t10 = (x61==(x62*(x63+x64)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x65 = -1;
	uint32_t x66 = 1854944873U;
	uint16_t x67 = 2U;
	int8_t x68 = 3;
	volatile int32_t t11 = 27;

    t11 = (x65==(x66*(x67+x68)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x70 = -3;
	volatile int8_t x71 = INT8_MIN;
	static int16_t x72 = INT16_MIN;

    t12 = (x69==(x70*(x71+x72)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x81 = -1;
	static int32_t x82 = 0;
	volatile int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MAX;
	volatile int32_t t13 = 3;

    t13 = (x81==(x82*(x83+x84)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x85 = -1;
	int32_t x86 = INT32_MIN;
	uint8_t x88 = 26U;

    t14 = (x85==(x86*(x87+x88)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x94 = INT32_MIN;
	int8_t x95 = 0;
	volatile uint64_t x96 = UINT64_MAX;

    t15 = (x93==(x94*(x95+x96)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x97 = -1;
	static volatile int32_t x99 = -1;
	volatile uint32_t x100 = 2U;
	static int32_t t16 = 799035675;

    t16 = (x97==(x98*(x99+x100)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x102 = INT16_MIN;
	static volatile uint64_t x103 = UINT64_MAX;
	uint32_t x104 = 468897045U;
	static int32_t t17 = 5159;

    t17 = (x101==(x102*(x103+x104)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x105 = INT64_MIN;
	uint8_t x106 = UINT8_MAX;
	static uint64_t x107 = UINT64_MAX;
	volatile uint64_t x108 = 171614556939093472LLU;

    t18 = (x105==(x106*(x107+x108)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x109 = INT16_MIN;
	int8_t x110 = 3;
	uint16_t x111 = 1518U;
	uint64_t x112 = 1803183286LLU;
	static int32_t t19 = -80689;

    t19 = (x109==(x110*(x111+x112)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x117 = -1;
	static volatile int8_t x118 = -1;
	static int32_t t20 = -435562;

    t20 = (x117==(x118*(x119+x120)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x121 = INT8_MIN;
	int32_t x123 = INT32_MIN;
	uint16_t x124 = 1721U;
	volatile int32_t t21 = -3082805;

    t21 = (x121==(x122*(x123+x124)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x125 = INT16_MIN;
	int8_t x126 = -29;
	int16_t x127 = INT16_MAX;
	int16_t x128 = 0;
	volatile int32_t t22 = -30263391;

    t22 = (x125==(x126*(x127+x128)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x129 = -61;
	int32_t x130 = 3;
	volatile int8_t x131 = -1;
	int32_t t23 = -25751406;

    t23 = (x129==(x130*(x131+x132)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x133 = 130315837962365061LLU;
	uint64_t x136 = UINT64_MAX;
	int32_t t24 = -8;

    t24 = (x133==(x134*(x135+x136)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x137 = INT64_MIN;
	int16_t x138 = 1;
	int64_t x139 = -66796436449107532LL;
	uint64_t x140 = 601497088245818LLU;
	int32_t t25 = 628863;

    t25 = (x137==(x138*(x139+x140)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x141 = 48U;
	int32_t x142 = 159;
	int16_t x143 = INT16_MIN;
	int8_t x144 = -5;

    t26 = (x141==(x142*(x143+x144)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x145 = UINT32_MAX;
	uint64_t x146 = UINT64_MAX;
	volatile uint8_t x147 = 13U;
	uint8_t x148 = UINT8_MAX;
	int32_t t27 = -166;

    t27 = (x145==(x146*(x147+x148)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x149 = 341U;
	int32_t x150 = -1;
	static int64_t x151 = INT64_MIN;
	uint64_t x152 = 1LLU;
	volatile int32_t t28 = -65710407;

    t28 = (x149==(x150*(x151+x152)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x153 = 7LLU;
	int32_t x154 = -255965258;
	volatile int16_t x155 = -1;
	static int32_t t29 = 15960;

    t29 = (x153==(x154*(x155+x156)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x157 = 210LLU;
	uint32_t x158 = UINT32_MAX;
	volatile uint32_t x159 = 607U;
	static uint64_t x160 = 409842511181039394LLU;

    t30 = (x157==(x158*(x159+x160)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x161 = INT16_MIN;
	uint32_t x162 = UINT32_MAX;
	uint32_t x164 = 248063121U;
	int32_t t31 = 1313212;

    t31 = (x161==(x162*(x163+x164)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x170 = -31;
	int16_t x172 = INT16_MAX;
	int32_t t32 = 29590;

    t32 = (x169==(x170*(x171+x172)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x181 = -1;
	volatile uint64_t x182 = UINT64_MAX;
	int8_t x183 = -1;
	static uint16_t x184 = UINT16_MAX;
	volatile int32_t t33 = 2;

    t33 = (x181==(x182*(x183+x184)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x185 = INT16_MIN;
	int32_t x186 = 4085;
	uint8_t x188 = 6U;
	volatile int32_t t34 = 0;

    t34 = (x185==(x186*(x187+x188)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x189 = 437719U;
	volatile uint64_t x190 = 4891539LLU;
	static volatile int16_t x191 = 12;
	static uint16_t x192 = UINT16_MAX;

    t35 = (x189==(x190*(x191+x192)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x193 = INT8_MIN;
	volatile int16_t x195 = 98;
	uint64_t x196 = 112640179266972311LLU;

    t36 = (x193==(x194*(x195+x196)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x203 = UINT16_MAX;
	int8_t x204 = INT8_MAX;
	int32_t t37 = -3;

    t37 = (x201==(x202*(x203+x204)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x205 = -3;
	uint64_t x207 = 4583362LLU;
	static volatile int32_t t38 = 229;

    t38 = (x205==(x206*(x207+x208)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x209 = INT64_MIN;
	static int8_t x210 = -14;
	uint16_t x211 = 4356U;
	static volatile int8_t x212 = INT8_MIN;

    t39 = (x209==(x210*(x211+x212)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x213 = -1;
	int8_t x215 = INT8_MIN;
	volatile int32_t t40 = 29356;

    t40 = (x213==(x214*(x215+x216)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x221 = 219426LL;
	int8_t x222 = INT8_MIN;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t41 = 0;

    t41 = (x221==(x222*(x223+x224)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x225 = INT16_MIN;
	static int8_t x227 = INT8_MAX;
	int64_t x228 = -201LL;

    t42 = (x225==(x226*(x227+x228)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x237 = UINT8_MAX;
	int16_t x239 = -92;
	uint8_t x240 = 0U;
	int32_t t43 = 1;

    t43 = (x237==(x238*(x239+x240)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x246 = INT32_MIN;
	uint8_t x247 = 24U;
	uint64_t x248 = 73277788262LLU;
	static volatile int32_t t44 = 103;

    t44 = (x245==(x246*(x247+x248)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x249 = 2508012U;
	uint8_t x250 = UINT8_MAX;
	int16_t x251 = -1;
	volatile int32_t t45 = 1720924;

    t45 = (x249==(x250*(x251+x252)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x253 = 1;
	volatile uint64_t x254 = 1888310155933627LLU;
	uint64_t x255 = 7597468038420447586LLU;
	int16_t x256 = INT16_MIN;

    t46 = (x253==(x254*(x255+x256)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint64_t x258 = 747LLU;
	int16_t x259 = 47;
	int16_t x260 = INT16_MIN;
	volatile int32_t t47 = -7;

    t47 = (x257==(x258*(x259+x260)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x262 = INT8_MIN;
	int32_t x263 = INT32_MIN;
	int64_t x264 = 116599570186145LL;
	volatile int32_t t48 = -1319;

    t48 = (x261==(x262*(x263+x264)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x273 = 15U;
	uint64_t x274 = UINT64_MAX;
	int64_t x275 = 1017330172953LL;
	static int8_t x276 = INT8_MAX;
	static int32_t t49 = 1022858;

    t49 = (x273==(x274*(x275+x276)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x277 = UINT32_MAX;
	uint16_t x278 = UINT16_MAX;
	uint64_t x279 = 127881079LLU;
	uint16_t x280 = 30448U;
	static volatile int32_t t50 = -986;

    t50 = (x277==(x278*(x279+x280)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x283 = 1947;
	int64_t x284 = -1LL;
	volatile int32_t t51 = 32478;

    t51 = (x281==(x282*(x283+x284)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x287 = UINT64_MAX;

    t52 = (x285==(x286*(x287+x288)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x289 = 126U;
	int32_t x290 = 2783851;

    t53 = (x289==(x290*(x291+x292)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x293 = INT32_MAX;
	uint64_t x294 = 63LLU;
	int64_t x295 = -2855963752149843LL;

    t54 = (x293==(x294*(x295+x296)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x297 = INT16_MIN;
	uint64_t x298 = UINT64_MAX;
	static int8_t x299 = -1;
	uint16_t x300 = 2185U;

    t55 = (x297==(x298*(x299+x300)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x309 = -1;
	int8_t x311 = INT8_MIN;
	int32_t x312 = -1;
	int32_t t56 = 0;

    t56 = (x309==(x310*(x311+x312)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x313 = UINT32_MAX;
	static int32_t x314 = -1;
	int32_t t57 = -394927;

    t57 = (x313==(x314*(x315+x316)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x318 = 69U;
	int32_t x319 = -1;
	int16_t x320 = INT16_MAX;
	volatile int32_t t58 = 116516;

    t58 = (x317==(x318*(x319+x320)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x321 = 293;
	int64_t x322 = -402044203142271LL;
	int32_t x323 = -1;
	volatile int32_t x324 = -1699;
	static volatile int32_t t59 = -13451379;

    t59 = (x321==(x322*(x323+x324)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x325 = 56115517U;
	int16_t x326 = -1;
	static uint16_t x327 = 371U;
	int16_t x328 = -1;
	int32_t t60 = -4786730;

    t60 = (x325==(x326*(x327+x328)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x329 = -1;
	int32_t x330 = -1;
	static uint16_t x331 = UINT16_MAX;
	uint32_t x332 = 14080754U;
	int32_t t61 = -457492841;

    t61 = (x329==(x330*(x331+x332)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x333 = INT64_MAX;
	static uint32_t x334 = UINT32_MAX;
	volatile int32_t t62 = -26796;

    t62 = (x333==(x334*(x335+x336)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x337 = INT16_MIN;
	static uint16_t x338 = 17262U;
	int16_t x339 = -1;
	uint32_t x340 = 1U;
	volatile int32_t t63 = -5809;

    t63 = (x337==(x338*(x339+x340)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x346 = 1042U;
	int64_t x348 = -1801519LL;

    t64 = (x345==(x346*(x347+x348)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x349 = INT32_MAX;
	static int32_t x350 = 7;
	int8_t x351 = 2;
	int32_t t65 = 1;

    t65 = (x349==(x350*(x351+x352)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x353 = -1LL;
	int16_t x355 = INT16_MAX;
	static uint64_t x356 = 14525LLU;

    t66 = (x353==(x354*(x355+x356)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x357 = 49185062187963921LLU;
	int8_t x358 = INT8_MIN;
	int64_t x359 = -95462944651262LL;
	uint64_t x360 = 57725424LLU;
	volatile int32_t t67 = 1050;

    t67 = (x357==(x358*(x359+x360)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x361 = INT32_MIN;
	int32_t x362 = INT32_MIN;
	uint64_t x363 = 14240LLU;
	int32_t x364 = INT32_MIN;
	volatile int32_t t68 = 1775;

    t68 = (x361==(x362*(x363+x364)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x365 = -2446858239LL;
	volatile uint16_t x366 = 28U;
	uint8_t x367 = 0U;
	volatile int16_t x368 = INT16_MAX;
	volatile int32_t t69 = -1;

    t69 = (x365==(x366*(x367+x368)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x369 = -1;
	static int64_t x370 = -1LL;
	volatile uint64_t x371 = UINT64_MAX;
	static int64_t x372 = INT64_MAX;
	static volatile int32_t t70 = -50;

    t70 = (x369==(x370*(x371+x372)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x373 = 0;
	volatile int8_t x374 = INT8_MIN;
	volatile int8_t x375 = 13;
	volatile int16_t x376 = -1;

    t71 = (x373==(x374*(x375+x376)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x383 = INT64_MIN;
	volatile int16_t x384 = 1;

    t72 = (x381==(x382*(x383+x384)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x385 = UINT16_MAX;
	static int32_t x388 = -1;
	volatile int32_t t73 = -34090;

    t73 = (x385==(x386*(x387+x388)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x389 = 190595U;
	volatile uint32_t x390 = UINT32_MAX;
	int16_t x391 = -1;
	uint16_t x392 = UINT16_MAX;
	int32_t t74 = -1164154;

    t74 = (x389==(x390*(x391+x392)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x393 = 553744531813227LL;
	int16_t x394 = INT16_MIN;
	uint16_t x395 = UINT16_MAX;
	uint8_t x396 = 0U;
	volatile int32_t t75 = 218570;

    t75 = (x393==(x394*(x395+x396)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x398 = UINT16_MAX;
	int64_t x399 = -60046LL;
	volatile int16_t x400 = INT16_MIN;
	static int32_t t76 = 1;

    t76 = (x397==(x398*(x399+x400)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x401 = -9;
	static uint64_t x402 = 763813399307676LLU;
	uint16_t x404 = 9U;
	int32_t t77 = 15676;

    t77 = (x401==(x402*(x403+x404)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x405 = 388981736183277475LLU;
	uint64_t x406 = 203234978328027LLU;
	int16_t x407 = INT16_MAX;
	static int64_t x408 = INT64_MIN;

    t78 = (x405==(x406*(x407+x408)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x409 = 523117;
	static int8_t x410 = INT8_MAX;
	int8_t x411 = 1;
	uint32_t x412 = UINT32_MAX;
	int32_t t79 = -931499;

    t79 = (x409==(x410*(x411+x412)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x413 = INT16_MIN;
	int16_t x414 = -1;
	int64_t x415 = INT64_MIN;
	uint32_t x416 = 48419U;

    t80 = (x413==(x414*(x415+x416)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x421 = 7729686874594LLU;
	volatile int64_t x423 = INT64_MAX;
	int64_t x424 = INT64_MIN;
	static int32_t t81 = -857194;

    t81 = (x421==(x422*(x423+x424)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x433 = -49276855LL;
	uint8_t x434 = 31U;
	int8_t x435 = INT8_MIN;
	int16_t x436 = INT16_MAX;
	static volatile int32_t t82 = -390652;

    t82 = (x433==(x434*(x435+x436)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x441 = INT32_MIN;
	static uint16_t x443 = 1U;
	int64_t x444 = -1LL;
	int32_t t83 = -1;

    t83 = (x441==(x442*(x443+x444)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x445 = 0;
	volatile int64_t x447 = -4216422226318091069LL;
	int32_t x448 = INT32_MIN;
	int32_t t84 = 182;

    t84 = (x445==(x446*(x447+x448)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x453 = 370;
	static uint64_t x454 = 14323496655LLU;
	static int64_t x455 = INT64_MIN;
	volatile uint64_t x456 = 13255360783LLU;
	int32_t t85 = 6084005;

    t85 = (x453==(x454*(x455+x456)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x457 = 7303621;
	int64_t x458 = -1LL;
	uint64_t x459 = UINT64_MAX;
	volatile int16_t x460 = 871;

    t86 = (x457==(x458*(x459+x460)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x465 = INT64_MAX;
	int8_t x466 = 0;
	uint32_t x468 = UINT32_MAX;

    t87 = (x465==(x466*(x467+x468)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x469 = INT32_MIN;
	int16_t x471 = INT16_MAX;
	int16_t x472 = INT16_MIN;
	volatile int32_t t88 = 2039;

    t88 = (x469==(x470*(x471+x472)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t x477 = INT32_MIN;
	static volatile int8_t x478 = INT8_MIN;
	static uint64_t x479 = 2LLU;
	int64_t x480 = -1LL;
	volatile int32_t t89 = -216;

    t89 = (x477==(x478*(x479+x480)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x483 = -47197809;
	uint32_t x484 = UINT32_MAX;
	int32_t t90 = -7792370;

    t90 = (x481==(x482*(x483+x484)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x485 = INT8_MIN;
	int16_t x486 = -1;

    t91 = (x485==(x486*(x487+x488)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x489 = INT64_MIN;
	static volatile uint64_t x490 = 1056756287352935LLU;
	int64_t x492 = -1LL;

    t92 = (x489==(x490*(x491+x492)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x494 = -9LL;
	int64_t x495 = 31625280865LL;
	int16_t x496 = INT16_MAX;

    t93 = (x493==(x494*(x495+x496)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x497 = INT8_MIN;
	int64_t x498 = -1LL;
	int8_t x499 = INT8_MIN;
	uint8_t x500 = 27U;
	static int32_t t94 = -3720964;

    t94 = (x497==(x498*(x499+x500)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x505 = 891;
	int32_t t95 = 63387969;

    t95 = (x505==(x506*(x507+x508)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x513 = 377575382454932473LLU;
	uint64_t x514 = UINT64_MAX;
	static int64_t x515 = -1131LL;
	int8_t x516 = INT8_MIN;
	volatile int32_t t96 = -3729240;

    t96 = (x513==(x514*(x515+x516)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x517 = -15407;
	static uint64_t x519 = UINT64_MAX;
	int8_t x520 = -1;

    t97 = (x517==(x518*(x519+x520)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x525 = 4809;
	int32_t x526 = INT32_MIN;
	static int32_t x527 = -433613;
	uint32_t x528 = 260203U;
	int32_t t98 = -202;

    t98 = (x525==(x526*(x527+x528)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x529 = 149225438564LLU;
	volatile int8_t x530 = -1;
	volatile int32_t x532 = INT32_MIN;
	int32_t t99 = -13521;

    t99 = (x529==(x530*(x531+x532)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x538 = 0;
	static int16_t x539 = INT16_MAX;
	uint64_t x540 = 4LLU;
	volatile int32_t t100 = 36271263;

    t100 = (x537==(x538*(x539+x540)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x541 = -746;
	int64_t x542 = 10611LL;
	int8_t x543 = -1;
	uint8_t x544 = UINT8_MAX;
	static volatile int32_t t101 = 58868;

    t101 = (x541==(x542*(x543+x544)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x545 = INT16_MIN;
	static volatile int8_t x546 = -1;
	static uint8_t x547 = UINT8_MAX;
	static uint64_t x548 = UINT64_MAX;
	int32_t t102 = -9551226;

    t102 = (x545==(x546*(x547+x548)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x553 = -197;
	int64_t x554 = 1542551137070328LL;
	static volatile uint16_t x555 = 832U;
	volatile int32_t t103 = 10;

    t103 = (x553==(x554*(x555+x556)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x557 = INT8_MIN;
	int32_t x558 = 681922272;
	uint64_t x559 = 1911250538432821LLU;
	int8_t x560 = 1;
	static int32_t t104 = -138;

    t104 = (x557==(x558*(x559+x560)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x565 = 76U;
	static int8_t x566 = -2;
	static uint64_t x567 = 104137LLU;
	uint8_t x568 = UINT8_MAX;
	volatile int32_t t105 = 372386;

    t105 = (x565==(x566*(x567+x568)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x569 = INT64_MAX;
	int32_t x570 = 953;
	uint8_t x571 = 76U;
	static volatile int8_t x572 = -50;
	int32_t t106 = 19594;

    t106 = (x569==(x570*(x571+x572)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x573 = UINT8_MAX;
	int16_t x574 = -7583;
	static volatile int8_t x575 = INT8_MAX;
	static int16_t x576 = 3;
	volatile int32_t t107 = -28073;

    t107 = (x573==(x574*(x575+x576)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x577 = -1LL;
	int32_t x578 = -1;
	uint64_t x579 = 34515394LLU;
	int32_t x580 = INT32_MIN;
	int32_t t108 = -79613924;

    t108 = (x577==(x578*(x579+x580)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x581 = 1;
	volatile uint8_t x582 = 22U;
	int8_t x583 = 2;
	uint64_t x584 = UINT64_MAX;
	volatile int32_t t109 = 243400209;

    t109 = (x581==(x582*(x583+x584)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x589 = INT32_MIN;
	static uint32_t x590 = UINT32_MAX;
	int32_t x591 = 684327076;
	static uint8_t x592 = 25U;
	volatile int32_t t110 = 1;

    t110 = (x589==(x590*(x591+x592)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x598 = 3U;
	int64_t x599 = INT64_MAX;
	static int64_t x600 = INT64_MIN;
	volatile int32_t t111 = 12;

    t111 = (x597==(x598*(x599+x600)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x601 = INT16_MIN;
	static volatile int8_t x602 = -1;
	int8_t x603 = -1;
	volatile uint32_t x604 = 1397U;
	static volatile int32_t t112 = 1;

    t112 = (x601==(x602*(x603+x604)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x606 = INT16_MIN;
	int64_t x607 = INT64_MIN;
	int64_t x608 = INT64_MAX;
	volatile int32_t t113 = 540;

    t113 = (x605==(x606*(x607+x608)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x609 = 5U;
	int32_t x610 = -1;
	int64_t x611 = 25620173331288LL;
	int64_t x612 = -1415672LL;
	int32_t t114 = -508967799;

    t114 = (x609==(x610*(x611+x612)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x614 = -1;
	static uint16_t x615 = UINT16_MAX;
	int32_t t115 = -361;

    t115 = (x613==(x614*(x615+x616)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x617 = INT64_MIN;
	uint32_t x618 = 24482U;
	static int8_t x619 = -1;
	int32_t t116 = 32266228;

    t116 = (x617==(x618*(x619+x620)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x621 = 9U;
	volatile int32_t t117 = -285;

    t117 = (x621==(x622*(x623+x624)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x625 = INT32_MAX;
	int64_t x626 = -239LL;
	int32_t x627 = -3;
	uint64_t x628 = 55086LLU;
	volatile int32_t t118 = 102203;

    t118 = (x625==(x626*(x627+x628)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x629 = UINT16_MAX;
	static int16_t x631 = -1652;

    t119 = (x629==(x630*(x631+x632)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x633 = 5913LLU;
	int16_t x634 = INT16_MIN;
	static int32_t x635 = INT32_MIN;
	uint64_t x636 = UINT64_MAX;
	volatile int32_t t120 = 469;

    t120 = (x633==(x634*(x635+x636)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x637 = INT16_MIN;
	int32_t x638 = -88;
	int32_t x639 = 12;
	uint8_t x640 = UINT8_MAX;
	volatile int32_t t121 = -15;

    t121 = (x637==(x638*(x639+x640)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x641 = UINT32_MAX;
	int32_t x642 = -1;
	volatile int64_t x643 = -1LL;
	static uint8_t x644 = 21U;
	volatile int32_t t122 = 5;

    t122 = (x641==(x642*(x643+x644)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x645 = -1;
	static uint8_t x647 = 3U;
	uint64_t x648 = UINT64_MAX;
	static volatile int32_t t123 = 0;

    t123 = (x645==(x646*(x647+x648)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x649 = 3314U;
	int8_t x650 = -1;
	int32_t x651 = INT32_MAX;
	volatile uint32_t x652 = UINT32_MAX;
	volatile int32_t t124 = 233421721;

    t124 = (x649==(x650*(x651+x652)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x654 = UINT64_MAX;
	uint64_t x655 = 215393LLU;
	int64_t x656 = -80940046185LL;
	int32_t t125 = -451497722;

    t125 = (x653==(x654*(x655+x656)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x658 = 69417063750LL;
	volatile int8_t x659 = -1;
	int16_t x660 = INT16_MAX;
	int32_t t126 = 2878;

    t126 = (x657==(x658*(x659+x660)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x661 = INT64_MAX;
	static int32_t x662 = 1000713539;
	int64_t x663 = -57LL;
	int32_t t127 = 9;

    t127 = (x661==(x662*(x663+x664)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x669 = INT16_MAX;
	int32_t x670 = -1;
	int32_t x671 = INT32_MIN;
	volatile uint8_t x672 = 18U;
	static int32_t t128 = -38536767;

    t128 = (x669==(x670*(x671+x672)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x677 = -1;
	uint32_t x679 = UINT32_MAX;
	uint8_t x680 = 45U;
	int32_t t129 = 120;

    t129 = (x677==(x678*(x679+x680)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x683 = -1;
	volatile int8_t x684 = 1;
	static volatile int32_t t130 = 5201;

    t130 = (x681==(x682*(x683+x684)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x694 = INT32_MAX;
	int64_t x695 = -426918598LL;
	int64_t x696 = -12553725LL;
	int32_t t131 = -783;

    t131 = (x693==(x694*(x695+x696)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x697 = 0U;
	static int32_t x698 = -1;
	uint16_t x700 = 430U;
	int32_t t132 = 27;

    t132 = (x697==(x698*(x699+x700)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x701 = 6000U;
	int32_t x702 = -236436;
	uint64_t x703 = 569853LLU;
	uint64_t x704 = 176LLU;
	int32_t t133 = -13715;

    t133 = (x701==(x702*(x703+x704)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x705 = -1;
	int8_t x706 = 22;
	static uint16_t x707 = 487U;
	static int32_t x708 = -1;
	int32_t t134 = -19;

    t134 = (x705==(x706*(x707+x708)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x709 = UINT16_MAX;
	int8_t x710 = INT8_MAX;
	static int16_t x712 = INT16_MIN;

    t135 = (x709==(x710*(x711+x712)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x713 = -1;
	volatile uint8_t x714 = 0U;
	uint64_t x715 = 22785877LLU;
	int16_t x716 = -3958;
	static int32_t t136 = -14;

    t136 = (x713==(x714*(x715+x716)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x717 = INT8_MIN;
	uint8_t x718 = 14U;
	uint8_t x719 = UINT8_MAX;
	static int32_t x720 = -1;
	static int32_t t137 = -380782;

    t137 = (x717==(x718*(x719+x720)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x721 = INT16_MIN;
	static int64_t x722 = -1LL;
	int64_t x723 = 4591LL;
	volatile uint32_t x724 = 3952U;
	volatile int32_t t138 = -28510;

    t138 = (x721==(x722*(x723+x724)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x733 = INT8_MAX;
	int64_t x734 = -1LL;
	int32_t x736 = 53;

    t139 = (x733==(x734*(x735+x736)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x737 = 478815011121833847LLU;
	int8_t x738 = INT8_MIN;
	volatile int8_t x740 = 1;
	int32_t t140 = -3607070;

    t140 = (x737==(x738*(x739+x740)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x741 = INT64_MIN;
	uint32_t x742 = UINT32_MAX;
	uint8_t x743 = 4U;
	static volatile int32_t t141 = 3;

    t141 = (x741==(x742*(x743+x744)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int32_t x753 = INT32_MIN;
	volatile uint32_t x754 = UINT32_MAX;
	static int16_t x756 = INT16_MIN;
	int32_t t142 = 10;

    t142 = (x753==(x754*(x755+x756)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x765 = INT64_MIN;
	int8_t x766 = INT8_MIN;
	uint32_t x767 = UINT32_MAX;
	static uint64_t x768 = 1794124LLU;
	static int32_t t143 = -759;

    t143 = (x765==(x766*(x767+x768)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x777 = UINT64_MAX;
	uint32_t x778 = 26999U;
	uint32_t x779 = UINT32_MAX;
	volatile int32_t t144 = 12;

    t144 = (x777==(x778*(x779+x780)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x781 = 352U;
	static uint32_t x782 = UINT32_MAX;
	static int8_t x783 = 7;
	static int32_t t145 = -32;

    t145 = (x781==(x782*(x783+x784)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x785 = 2421U;
	volatile int16_t x787 = 5968;
	int16_t x788 = 42;
	int32_t t146 = 226770;

    t146 = (x785==(x786*(x787+x788)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x801 = INT16_MIN;
	static volatile int16_t x802 = INT16_MAX;
	volatile uint64_t x804 = 367650LLU;
	volatile int32_t t147 = -1;

    t147 = (x801==(x802*(x803+x804)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x806 = 1U;
	int16_t x808 = INT16_MIN;
	int32_t t148 = 0;

    t148 = (x805==(x806*(x807+x808)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x809 = 114723181781163LLU;
	int8_t x810 = INT8_MIN;
	int32_t x811 = INT32_MIN;
	volatile int32_t x812 = INT32_MAX;
	int32_t t149 = -2286;

    t149 = (x809==(x810*(x811+x812)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x821 = INT64_MAX;
	int64_t x822 = INT64_MIN;
	static uint8_t x823 = 52U;
	uint64_t x824 = UINT64_MAX;
	int32_t t150 = -18635120;

    t150 = (x821==(x822*(x823+x824)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x825 = INT16_MIN;
	uint64_t x826 = 13052816LLU;
	int16_t x827 = -1;
	int16_t x828 = 759;

    t151 = (x825==(x826*(x827+x828)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x833 = 14;
	volatile int16_t x834 = -1;
	uint8_t x835 = UINT8_MAX;
	int32_t t152 = -149990909;

    t152 = (x833==(x834*(x835+x836)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x837 = UINT32_MAX;
	volatile uint8_t x838 = 3U;
	int32_t x839 = -1;
	static volatile int16_t x840 = -1;
	volatile int32_t t153 = -61151;

    t153 = (x837==(x838*(x839+x840)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x841 = INT8_MIN;
	uint16_t x842 = 312U;
	int16_t x843 = INT16_MIN;
	static volatile int8_t x844 = INT8_MIN;

    t154 = (x841==(x842*(x843+x844)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x845 = INT32_MIN;
	int8_t x846 = -1;
	volatile uint64_t x847 = UINT64_MAX;
	int32_t t155 = 192;

    t155 = (x845==(x846*(x847+x848)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x849 = INT64_MIN;
	int16_t x850 = -1;
	static int8_t x851 = -1;
	int64_t x852 = 521531LL;

    t156 = (x849==(x850*(x851+x852)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x853 = INT64_MIN;
	int8_t x854 = INT8_MIN;
	static volatile int32_t x855 = -1;
	int32_t x856 = -4958483;
	volatile int32_t t157 = 3330261;

    t157 = (x853==(x854*(x855+x856)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x857 = INT8_MAX;
	static uint64_t x858 = 3956358595LLU;
	int32_t x859 = INT32_MAX;
	uint32_t x860 = 40260U;
	volatile int32_t t158 = 4;

    t158 = (x857==(x858*(x859+x860)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x861 = INT64_MIN;
	uint64_t x862 = 257215502072015959LLU;
	volatile uint16_t x863 = 63U;
	static int32_t x864 = 345;
	volatile int32_t t159 = 46;

    t159 = (x861==(x862*(x863+x864)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x865 = INT8_MAX;
	uint32_t x866 = UINT32_MAX;
	static volatile int16_t x868 = INT16_MIN;
	static volatile int32_t t160 = 84892664;

    t160 = (x865==(x866*(x867+x868)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x869 = INT64_MIN;
	static int8_t x870 = INT8_MAX;
	volatile int8_t x871 = -9;
	int8_t x872 = -1;
	static volatile int32_t t161 = 17;

    t161 = (x869==(x870*(x871+x872)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x874 = -1;
	volatile uint64_t x875 = UINT64_MAX;
	uint64_t x876 = 624544562070110259LLU;
	int32_t t162 = 287;

    t162 = (x873==(x874*(x875+x876)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint32_t x877 = 64913054U;
	volatile uint64_t x880 = 50636LLU;
	static volatile int32_t t163 = -4056;

    t163 = (x877==(x878*(x879+x880)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x881 = INT64_MIN;
	int32_t x882 = INT32_MIN;
	int8_t x883 = -32;
	uint32_t x884 = 861U;
	volatile int32_t t164 = -28922604;

    t164 = (x881==(x882*(x883+x884)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x885 = INT16_MIN;
	int32_t x886 = -1;
	uint64_t x887 = 0LLU;
	uint16_t x888 = 3U;
	volatile int32_t t165 = -72;

    t165 = (x885==(x886*(x887+x888)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x897 = -1;
	int8_t x898 = -9;
	static int64_t x899 = INT64_MAX;
	volatile int64_t x900 = INT64_MIN;

    t166 = (x897==(x898*(x899+x900)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x906 = 11977184201283LLU;
	int16_t x907 = INT16_MAX;

    t167 = (x905==(x906*(x907+x908)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x910 = 7LLU;
	uint16_t x911 = 16U;
	uint8_t x912 = 36U;
	volatile int32_t t168 = -261792;

    t168 = (x909==(x910*(x911+x912)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x913 = -1LL;
	int16_t x914 = 1;
	uint32_t x915 = 11477U;
	int64_t x916 = 129700516094LL;

    t169 = (x913==(x914*(x915+x916)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x917 = -1;
	int64_t x918 = INT64_MIN;
	volatile uint64_t x919 = UINT64_MAX;
	volatile int16_t x920 = 1;
	int32_t t170 = 62102750;

    t170 = (x917==(x918*(x919+x920)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x923 = -62;
	int16_t x924 = INT16_MIN;
	int32_t t171 = -98296683;

    t171 = (x921==(x922*(x923+x924)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x925 = INT16_MAX;
	volatile uint16_t x926 = 40U;
	int8_t x928 = INT8_MIN;
	volatile int32_t t172 = -356165;

    t172 = (x925==(x926*(x927+x928)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x933 = UINT8_MAX;
	int8_t x934 = INT8_MAX;
	uint16_t x935 = 0U;
	int32_t t173 = -406995641;

    t173 = (x933==(x934*(x935+x936)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x941 = UINT8_MAX;
	int16_t x942 = INT16_MAX;
	uint8_t x944 = UINT8_MAX;
	int32_t t174 = 3;

    t174 = (x941==(x942*(x943+x944)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x945 = INT16_MIN;
	int16_t x946 = INT16_MIN;
	uint64_t x947 = 7266LLU;
	int32_t t175 = 4109770;

    t175 = (x945==(x946*(x947+x948)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x949 = UINT16_MAX;
	volatile int16_t x950 = INT16_MIN;
	uint16_t x951 = 4U;
	int32_t t176 = -563775059;

    t176 = (x949==(x950*(x951+x952)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x954 = 278U;
	int64_t x955 = 2LL;
	uint8_t x956 = 3U;

    t177 = (x953==(x954*(x955+x956)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x961 = INT32_MAX;
	volatile int32_t x962 = -1;
	volatile uint8_t x963 = 1U;
	volatile uint8_t x964 = 58U;
	static int32_t t178 = 76823;

    t178 = (x961==(x962*(x963+x964)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int8_t x965 = -6;
	volatile uint32_t x967 = UINT32_MAX;
	int16_t x968 = INT16_MIN;
	int32_t t179 = 2;

    t179 = (x965==(x966*(x967+x968)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x970 = -1;
	int32_t x971 = INT32_MIN;
	uint16_t x972 = UINT16_MAX;
	int32_t t180 = -55324;

    t180 = (x969==(x970*(x971+x972)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x977 = UINT16_MAX;
	int16_t x978 = -2;
	static uint64_t x980 = UINT64_MAX;

    t181 = (x977==(x978*(x979+x980)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x989 = INT8_MAX;
	static int16_t x991 = -1;
	int32_t t182 = 3;

    t182 = (x989==(x990*(x991+x992)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x993 = INT64_MAX;
	int16_t x994 = -823;
	static volatile int16_t x995 = INT16_MAX;
	uint16_t x996 = 83U;
	static int32_t t183 = 108660;

    t183 = (x993==(x994*(x995+x996)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x997 = 7;
	uint16_t x998 = 5U;
	static volatile int16_t x999 = INT16_MIN;
	int16_t x1000 = INT16_MIN;
	int32_t t184 = -198;

    t184 = (x997==(x998*(x999+x1000)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1006 = 7U;
	uint32_t x1007 = 46784U;
	int8_t x1008 = INT8_MIN;
	int32_t t185 = -31249;

    t185 = (x1005==(x1006*(x1007+x1008)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x1009 = 2U;
	int16_t x1010 = INT16_MIN;
	static int32_t t186 = 350305;

    t186 = (x1009==(x1010*(x1011+x1012)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x1014 = 11952U;
	int16_t x1016 = INT16_MIN;
	int32_t t187 = -1;

    t187 = (x1013==(x1014*(x1015+x1016)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1017 = INT16_MAX;
	uint16_t x1019 = 9626U;
	static int16_t x1020 = INT16_MIN;
	static int32_t t188 = 4;

    t188 = (x1017==(x1018*(x1019+x1020)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1025 = -1;
	int64_t x1026 = -1LL;
	int32_t x1027 = INT32_MIN;
	static int64_t x1028 = -850885409730359954LL;
	int32_t t189 = 5728304;

    t189 = (x1025==(x1026*(x1027+x1028)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1030 = -1;
	static int32_t x1031 = 175226;
	static uint32_t x1032 = UINT32_MAX;
	int32_t t190 = 90;

    t190 = (x1029==(x1030*(x1031+x1032)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1041 = -12;
	static int16_t x1042 = INT16_MIN;
	static int64_t x1043 = 1148330769668LL;
	int32_t t191 = 8126;

    t191 = (x1041==(x1042*(x1043+x1044)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1054 = 0;
	static uint8_t x1055 = 0U;
	uint16_t x1056 = UINT16_MAX;

    t192 = (x1053==(x1054*(x1055+x1056)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1058 = INT32_MIN;
	static volatile uint64_t x1059 = UINT64_MAX;
	volatile uint16_t x1060 = 665U;

    t193 = (x1057==(x1058*(x1059+x1060)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x1061 = INT32_MAX;
	uint32_t x1062 = 617333208U;
	uint64_t x1063 = 4140403800LLU;
	volatile int32_t x1064 = INT32_MIN;
	volatile int32_t t194 = 486;

    t194 = (x1061==(x1062*(x1063+x1064)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1070 = UINT16_MAX;
	int32_t x1071 = -1;
	int16_t x1072 = INT16_MAX;
	int32_t t195 = -1011;

    t195 = (x1069==(x1070*(x1071+x1072)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1073 = 109;
	int16_t x1074 = -12407;
	uint32_t x1076 = 6253465U;
	int32_t t196 = -21207;

    t196 = (x1073==(x1074*(x1075+x1076)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1077 = 40;
	volatile int8_t x1078 = 60;
	int32_t x1079 = INT32_MAX;
	int32_t t197 = -120;

    t197 = (x1077==(x1078*(x1079+x1080)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1081 = UINT8_MAX;
	uint8_t x1082 = 0U;
	int32_t t198 = 11688910;

    t198 = (x1081==(x1082*(x1083+x1084)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x1085 = -1LL;
	int8_t x1086 = -1;
	int16_t x1087 = 288;
	volatile int16_t x1088 = -3;
	int32_t t199 = 1070;

    t199 = (x1085==(x1086*(x1087+x1088)));

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

