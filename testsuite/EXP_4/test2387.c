
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

uint8_t x8 = UINT8_MAX;
volatile uint8_t x9 = 3U;
int32_t x12 = INT32_MAX;
int8_t x14 = INT8_MIN;
volatile int8_t x16 = -7;
volatile int8_t x17 = INT8_MIN;
volatile int64_t x29 = -250554404255LL;
int32_t t6 = -91877;
static int32_t x51 = INT32_MIN;
static int8_t x54 = -3;
static uint16_t x61 = UINT16_MAX;
static int8_t x66 = -1;
volatile int64_t x68 = INT64_MIN;
volatile int32_t t11 = -1904227;
uint16_t x81 = 3774U;
volatile int32_t t15 = -52635080;
volatile int32_t t16 = 28208;
int64_t x124 = INT64_MIN;
static volatile uint64_t x127 = 469950LLU;
volatile uint32_t x133 = 1557250956U;
volatile int16_t x135 = -1;
int32_t t20 = 3879;
int8_t x143 = -4;
int8_t x144 = INT8_MAX;
uint16_t x149 = UINT16_MAX;
int64_t x152 = INT64_MAX;
volatile int32_t x153 = -103;
static int64_t x154 = -1LL;
int64_t x159 = INT64_MIN;
int8_t x169 = -1;
static uint32_t x174 = 920494392U;
int16_t x177 = INT16_MAX;
static uint32_t x186 = 106680467U;
int64_t x192 = 247LL;
static int32_t x196 = -63;
int64_t x201 = INT64_MAX;
static int32_t x207 = INT32_MIN;
volatile uint64_t x210 = UINT64_MAX;
static volatile int32_t x211 = -1;
int8_t x215 = INT8_MIN;
static int8_t x219 = INT8_MIN;
uint64_t x222 = 24LLU;
volatile int32_t t37 = -5340445;
volatile uint8_t x241 = 3U;
int16_t x244 = INT16_MIN;
static volatile uint8_t x246 = 0U;
uint32_t x247 = 11255694U;
uint32_t x252 = 13412U;
volatile uint16_t x255 = 10U;
uint64_t x260 = 2562316LLU;
volatile int32_t t44 = 855684;
int16_t x274 = 1145;
int32_t x275 = INT32_MIN;
int8_t x276 = -1;
int64_t x278 = 54LL;
int8_t x283 = INT8_MIN;
int16_t x288 = 0;
volatile uint8_t x305 = 0U;
static int64_t x307 = INT64_MIN;
int16_t x310 = -1;
uint16_t x311 = 203U;
int32_t t52 = 31615064;
uint32_t x313 = 226209401U;
volatile uint16_t x314 = 17U;
int8_t x317 = INT8_MIN;
static int64_t x318 = INT64_MIN;
volatile uint64_t x320 = 202369163101467414LLU;
int16_t x326 = INT16_MAX;
volatile uint64_t x328 = UINT64_MAX;
static int8_t x339 = -1;
static volatile uint8_t x340 = 4U;
volatile int32_t t57 = -1084;
volatile int32_t t58 = -554;
static uint16_t x360 = 4U;
int32_t t61 = -31862448;
volatile int32_t t63 = 13;
int8_t x373 = -1;
static volatile int16_t x377 = INT16_MIN;
volatile int32_t t66 = 3;
int32_t x385 = 6148964;
int16_t x387 = INT16_MIN;
int32_t t68 = 42642764;
static int16_t x401 = INT16_MAX;
int8_t x405 = INT8_MAX;
int8_t x408 = -1;
uint32_t x410 = UINT32_MAX;
int8_t x412 = 62;
volatile uint64_t x430 = 63482238LLU;
static int32_t t73 = -731364273;
int64_t x445 = -1LL;
static uint32_t x450 = 633U;
int8_t x453 = INT8_MIN;
int32_t t78 = -17;
int64_t x464 = INT64_MIN;
int64_t x468 = -566674593166158LL;
volatile int32_t t80 = -240;
int16_t x475 = -1;
static int16_t x476 = 55;
int32_t x501 = -1961;
static int64_t x503 = INT64_MIN;
int16_t x504 = INT16_MIN;
volatile int32_t t86 = 541916304;
int8_t x506 = -1;
int32_t x508 = INT32_MAX;
int32_t t88 = 5789;
static volatile int64_t x514 = -4LL;
uint64_t x534 = 154189985028LLU;
int32_t t94 = -46;
uint64_t x552 = UINT64_MAX;
int64_t x560 = INT64_MIN;
int16_t x570 = -13;
int32_t t99 = 9601114;
uint32_t x576 = 32594651U;
uint64_t x609 = 9860037259143369LLU;
uint32_t x610 = 482127535U;
volatile int16_t x619 = INT16_MIN;
volatile int32_t t107 = -558;
static int32_t x623 = INT32_MAX;
static uint32_t x626 = UINT32_MAX;
static int8_t x632 = INT8_MIN;
int32_t t110 = 228;
volatile uint64_t x636 = UINT64_MAX;
static uint64_t x639 = 2537663137LLU;
volatile int16_t x646 = 1;
uint8_t x649 = 37U;
int16_t x653 = INT16_MIN;
int8_t x654 = INT8_MIN;
static int64_t x661 = INT64_MAX;
int64_t x664 = -1LL;
int32_t t116 = -626807;
static uint16_t x665 = 988U;
volatile int32_t x668 = -1;
int8_t x681 = 2;
static int32_t t121 = -7906;
static int32_t t122 = 1;
int32_t x699 = -1;
volatile int32_t t126 = 404338569;
volatile int8_t x709 = INT8_MIN;
int32_t t128 = -47;
static volatile int16_t x717 = INT16_MIN;
int32_t x719 = -1;
uint64_t x720 = 5623335695LLU;
uint64_t x730 = UINT64_MAX;
int32_t x740 = -1;
uint8_t x742 = 15U;
uint64_t x749 = 519LLU;
static uint16_t x753 = UINT16_MAX;
volatile uint64_t x754 = UINT64_MAX;
int32_t t136 = 626408;
int8_t x775 = INT8_MAX;
int64_t x777 = INT64_MAX;
uint8_t x779 = 45U;
volatile int8_t x781 = INT8_MIN;
int32_t x783 = INT32_MIN;
int32_t t140 = 4918;
int32_t x787 = -14008587;
volatile int32_t t141 = 16;
int32_t x794 = -5336;
volatile int32_t x800 = INT32_MAX;
static volatile uint64_t x801 = UINT64_MAX;
int64_t x802 = INT64_MAX;
volatile uint64_t x806 = 479684556788998LLU;
int64_t x813 = INT64_MIN;
int64_t x817 = INT64_MAX;
volatile int32_t x820 = 195878190;
int8_t x832 = INT8_MIN;
static int64_t x836 = INT64_MAX;
int32_t t152 = -124088;
static uint16_t x843 = UINT16_MAX;
int16_t x849 = -1;
int64_t x854 = -1LL;
volatile uint8_t x863 = UINT8_MAX;
volatile uint64_t x864 = 2529541053LLU;
uint64_t x872 = 6633702972591969LLU;
static int32_t t159 = -477509;
int32_t t160 = -16248703;
uint32_t x877 = 2179639U;
uint32_t x880 = UINT32_MAX;
static uint64_t x882 = UINT64_MAX;
volatile int16_t x884 = -15;
static volatile int8_t x888 = INT8_MIN;
int8_t x912 = INT8_MAX;
volatile int32_t t169 = 2;
int8_t x921 = INT8_MIN;
static int8_t x924 = -1;
volatile uint32_t x936 = 1795U;
volatile int32_t t173 = 3025539;
int16_t x941 = INT16_MIN;
static uint16_t x943 = 11U;
static volatile int32_t t175 = -24;
uint8_t x954 = 15U;
int64_t x965 = -1LL;
uint32_t x968 = UINT32_MAX;
uint16_t x973 = 14254U;
int64_t x975 = INT64_MIN;
volatile int8_t x976 = -1;
uint8_t x982 = 44U;
int64_t x983 = INT64_MIN;
int32_t x986 = -1;
int32_t t184 = 9553670;
int64_t x989 = INT64_MIN;
volatile int32_t t185 = 785;
static int64_t x993 = INT64_MIN;
int32_t t186 = 1774;
int32_t x999 = -1;
volatile int32_t x1001 = -1;
int64_t x1002 = INT64_MIN;
uint64_t x1004 = 137383290LLU;
volatile int32_t t190 = -254367;
static int32_t x1018 = -1;
volatile int32_t t194 = -7;
volatile int8_t x1040 = 2;
uint8_t x1042 = 1U;
uint32_t x1045 = 1U;
static int32_t x1046 = INT32_MIN;
static volatile int32_t t199 = 863268162;


void f0(void) {
    	int64_t x5 = INT64_MIN;
	int64_t x6 = -1LL;
	static uint8_t x7 = 3U;
	int32_t t0 = 61358557;

    t0 = (x5!=(x6*(x7|x8)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x10 = INT8_MAX;
	uint64_t x11 = 56865343022663LLU;
	volatile int32_t t1 = -61986;

    t1 = (x9!=(x10*(x11|x12)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint16_t x13 = UINT16_MAX;
	int64_t x15 = INT64_MIN;
	volatile int32_t t2 = -459586;

    t2 = (x13!=(x14*(x15|x16)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x18 = UINT32_MAX;
	static volatile int32_t x19 = INT32_MAX;
	static int8_t x20 = -1;
	volatile int32_t t3 = 46;

    t3 = (x17!=(x18*(x19|x20)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MIN;
	volatile uint8_t x22 = 26U;
	int8_t x23 = 3;
	int16_t x24 = INT16_MAX;
	static int32_t t4 = 2;

    t4 = (x21!=(x22*(x23|x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x25 = 766678070;
	static volatile int8_t x26 = INT8_MAX;
	int16_t x27 = -1;
	int16_t x28 = -1;
	int32_t t5 = -3;

    t5 = (x25!=(x26*(x27|x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x30 = INT32_MIN;
	static int16_t x31 = 602;
	uint64_t x32 = 6055LLU;

    t6 = (x29!=(x30*(x31|x32)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x41 = 53504247372LLU;
	volatile uint64_t x42 = UINT64_MAX;
	static int16_t x43 = INT16_MIN;
	int64_t x44 = -1LL;
	volatile int32_t t7 = 342947;

    t7 = (x41!=(x42*(x43|x44)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MIN;
	int8_t x52 = -1;
	int32_t t8 = -8397;

    t8 = (x49!=(x50*(x51|x52)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x53 = UINT16_MAX;
	volatile uint64_t x55 = 350774108503LLU;
	uint32_t x56 = UINT32_MAX;
	int32_t t9 = 10185647;

    t9 = (x53!=(x54*(x55|x56)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x62 = 1U;
	int32_t x63 = INT32_MIN;
	uint32_t x64 = UINT32_MAX;
	volatile int32_t t10 = 16193;

    t10 = (x61!=(x62*(x63|x64)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x65 = 3853LLU;
	int64_t x67 = -1LL;

    t11 = (x65!=(x66*(x67|x68)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x69 = 15U;
	static uint32_t x70 = 43495729U;
	int32_t x71 = 235645957;
	uint64_t x72 = 22518198908LLU;
	int32_t t12 = -5129;

    t12 = (x69!=(x70*(x71|x72)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x73 = 3560;
	int8_t x74 = -8;
	int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MAX;
	int32_t t13 = -868;

    t13 = (x73!=(x74*(x75|x76)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x82 = -1;
	static int64_t x83 = -2188298179121LL;
	int64_t x84 = -358123589088LL;
	volatile int32_t t14 = -1637092;

    t14 = (x81!=(x82*(x83|x84)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x97 = INT8_MAX;
	volatile int32_t x98 = INT32_MAX;
	int32_t x99 = -128415492;
	volatile int64_t x100 = INT64_MIN;

    t15 = (x97!=(x98*(x99|x100)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x105 = INT16_MAX;
	uint16_t x106 = 16180U;
	int16_t x107 = INT16_MIN;
	uint64_t x108 = 837316520938LLU;

    t16 = (x105!=(x106*(x107|x108)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x117 = UINT64_MAX;
	uint32_t x118 = UINT32_MAX;
	uint32_t x119 = 230U;
	uint8_t x120 = 23U;
	int32_t t17 = -692312;

    t17 = (x117!=(x118*(x119|x120)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x121 = INT8_MIN;
	int8_t x122 = INT8_MIN;
	static uint64_t x123 = 202047019318LLU;
	volatile int32_t t18 = 0;

    t18 = (x121!=(x122*(x123|x124)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x125 = INT16_MIN;
	int32_t x126 = -181237976;
	static uint32_t x128 = UINT32_MAX;
	volatile int32_t t19 = -284511888;

    t19 = (x125!=(x126*(x127|x128)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x134 = 4238U;
	uint64_t x136 = UINT64_MAX;

    t20 = (x133!=(x134*(x135|x136)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x141 = INT8_MIN;
	static int64_t x142 = 19188007250448467LL;
	int32_t t21 = -271;

    t21 = (x141!=(x142*(x143|x144)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x150 = -1;
	volatile uint32_t x151 = UINT32_MAX;
	static int32_t t22 = 27;

    t22 = (x149!=(x150*(x151|x152)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x155 = UINT16_MAX;
	int64_t x156 = INT64_MAX;
	volatile int32_t t23 = -1;

    t23 = (x153!=(x154*(x155|x156)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x157 = 65U;
	int32_t x158 = -1;
	volatile int64_t x160 = -806516645LL;
	volatile int32_t t24 = -16;

    t24 = (x157!=(x158*(x159|x160)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x170 = 3U;
	static uint64_t x171 = UINT64_MAX;
	int8_t x172 = INT8_MIN;
	volatile int32_t t25 = 449757407;

    t25 = (x169!=(x170*(x171|x172)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x173 = 45U;
	int32_t x175 = INT32_MAX;
	int8_t x176 = -1;
	int32_t t26 = -195629;

    t26 = (x173!=(x174*(x175|x176)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x178 = 219417350LL;
	int64_t x179 = INT64_MAX;
	int16_t x180 = -1;
	static int32_t t27 = -15;

    t27 = (x177!=(x178*(x179|x180)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x181 = 101443;
	uint32_t x182 = UINT32_MAX;
	uint16_t x183 = 3U;
	static uint32_t x184 = 81U;
	int32_t t28 = -3;

    t28 = (x181!=(x182*(x183|x184)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x185 = 0;
	volatile uint8_t x187 = 16U;
	static int16_t x188 = INT16_MIN;
	int32_t t29 = -37798;

    t29 = (x185!=(x186*(x187|x188)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x189 = 1U;
	uint16_t x190 = 431U;
	uint16_t x191 = 1U;
	volatile int32_t t30 = -17774;

    t30 = (x189!=(x190*(x191|x192)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x193 = 5472310LLU;
	int32_t x194 = -1;
	int16_t x195 = 1632;
	volatile int32_t t31 = -125582;

    t31 = (x193!=(x194*(x195|x196)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x202 = -1;
	static volatile uint32_t x203 = UINT32_MAX;
	volatile int32_t x204 = INT32_MAX;
	static int32_t t32 = -487;

    t32 = (x201!=(x202*(x203|x204)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x205 = 2114680577LLU;
	volatile int16_t x206 = INT16_MIN;
	volatile int16_t x208 = -1;
	volatile int32_t t33 = 12228;

    t33 = (x205!=(x206*(x207|x208)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x209 = 0;
	static volatile uint8_t x212 = 6U;
	volatile int32_t t34 = 239932;

    t34 = (x209!=(x210*(x211|x212)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x213 = UINT8_MAX;
	volatile uint16_t x214 = 11966U;
	int8_t x216 = INT8_MAX;
	int32_t t35 = -119;

    t35 = (x213!=(x214*(x215|x216)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x217 = INT16_MAX;
	uint8_t x218 = UINT8_MAX;
	uint32_t x220 = 351141U;
	volatile int32_t t36 = 0;

    t36 = (x217!=(x218*(x219|x220)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x221 = 3606U;
	static int16_t x223 = INT16_MAX;
	static int64_t x224 = INT64_MIN;

    t37 = (x221!=(x222*(x223|x224)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x225 = -5600;
	volatile int8_t x226 = -1;
	int64_t x227 = -1LL;
	uint32_t x228 = 573633908U;
	int32_t t38 = 10;

    t38 = (x225!=(x226*(x227|x228)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x229 = 4974358008478677699LLU;
	static int64_t x230 = -89833LL;
	uint32_t x231 = UINT32_MAX;
	int64_t x232 = 41LL;
	int32_t t39 = -2117176;

    t39 = (x229!=(x230*(x231|x232)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x242 = INT64_MIN;
	uint64_t x243 = 544980910573366957LLU;
	volatile int32_t t40 = 21;

    t40 = (x241!=(x242*(x243|x244)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x245 = -1LL;
	int32_t x248 = INT32_MAX;
	static volatile int32_t t41 = 513389;

    t41 = (x245!=(x246*(x247|x248)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x249 = INT64_MAX;
	int16_t x250 = INT16_MAX;
	int8_t x251 = INT8_MIN;
	volatile int32_t t42 = 322303;

    t42 = (x249!=(x250*(x251|x252)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x253 = UINT64_MAX;
	static int32_t x254 = -1;
	int16_t x256 = 1;
	static int32_t t43 = 21239731;

    t43 = (x253!=(x254*(x255|x256)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x257 = INT64_MIN;
	int16_t x258 = 22;
	static int8_t x259 = 18;

    t44 = (x257!=(x258*(x259|x260)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x265 = INT16_MIN;
	volatile int32_t x266 = INT32_MIN;
	int8_t x267 = INT8_MAX;
	uint64_t x268 = 41019718270LLU;
	int32_t t45 = 1542888;

    t45 = (x265!=(x266*(x267|x268)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x273 = -6;
	static int32_t t46 = -339;

    t46 = (x273!=(x274*(x275|x276)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x277 = INT8_MIN;
	uint64_t x279 = 3244391489886133LLU;
	volatile uint64_t x280 = UINT64_MAX;
	int32_t t47 = 1;

    t47 = (x277!=(x278*(x279|x280)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x281 = -1LL;
	int64_t x282 = 253830111LL;
	int8_t x284 = INT8_MIN;
	volatile int32_t t48 = 686026248;

    t48 = (x281!=(x282*(x283|x284)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x285 = 431;
	volatile uint32_t x286 = 3689601U;
	static uint64_t x287 = 266374936892LLU;
	int32_t t49 = 306;

    t49 = (x285!=(x286*(x287|x288)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x297 = INT8_MIN;
	int8_t x298 = INT8_MIN;
	uint32_t x299 = 234181817U;
	int8_t x300 = INT8_MIN;
	static int32_t t50 = 3;

    t50 = (x297!=(x298*(x299|x300)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x306 = 21438772LLU;
	int16_t x308 = INT16_MIN;
	int32_t t51 = -6148;

    t51 = (x305!=(x306*(x307|x308)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x309 = INT8_MAX;
	int64_t x312 = -7113467443497665LL;

    t52 = (x309!=(x310*(x311|x312)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x315 = -1;
	int64_t x316 = INT64_MIN;
	static int32_t t53 = -1050195189;

    t53 = (x313!=(x314*(x315|x316)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x319 = -14;
	static int32_t t54 = 627466;

    t54 = (x317!=(x318*(x319|x320)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x325 = UINT8_MAX;
	int8_t x327 = -1;
	int32_t t55 = 1;

    t55 = (x325!=(x326*(x327|x328)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x333 = 754;
	int16_t x334 = INT16_MAX;
	uint64_t x335 = UINT64_MAX;
	int16_t x336 = INT16_MIN;
	volatile int32_t t56 = 352;

    t56 = (x333!=(x334*(x335|x336)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x337 = UINT64_MAX;
	uint8_t x338 = UINT8_MAX;

    t57 = (x337!=(x338*(x339|x340)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x341 = INT64_MIN;
	int16_t x342 = 192;
	static int32_t x343 = -1;
	volatile uint16_t x344 = 0U;

    t58 = (x341!=(x342*(x343|x344)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x345 = 43LLU;
	int8_t x346 = INT8_MIN;
	int16_t x347 = INT16_MIN;
	uint32_t x348 = 793354U;
	static volatile int32_t t59 = 5048650;

    t59 = (x345!=(x346*(x347|x348)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x349 = -39;
	int32_t x350 = INT32_MIN;
	uint32_t x351 = UINT32_MAX;
	static uint64_t x352 = 4LLU;
	volatile int32_t t60 = 0;

    t60 = (x349!=(x350*(x351|x352)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x357 = 3LLU;
	uint32_t x358 = 15303549U;
	static volatile int32_t x359 = INT32_MIN;

    t61 = (x357!=(x358*(x359|x360)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x361 = 1LL;
	volatile int16_t x362 = -1;
	volatile int8_t x363 = -1;
	volatile uint32_t x364 = 30984539U;
	int32_t t62 = 173513;

    t62 = (x361!=(x362*(x363|x364)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x369 = UINT32_MAX;
	static uint8_t x370 = 29U;
	static volatile uint16_t x371 = 10U;
	static int32_t x372 = -1;

    t63 = (x369!=(x370*(x371|x372)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x374 = INT16_MIN;
	int8_t x375 = INT8_MIN;
	uint16_t x376 = 123U;
	volatile int32_t t64 = 15674;

    t64 = (x373!=(x374*(x375|x376)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x378 = INT32_MIN;
	uint16_t x379 = UINT16_MAX;
	uint64_t x380 = 83919050509357LLU;
	static volatile int32_t t65 = -772721;

    t65 = (x377!=(x378*(x379|x380)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x381 = INT32_MIN;
	int32_t x382 = -68;
	uint64_t x383 = UINT64_MAX;
	static int8_t x384 = INT8_MIN;

    t66 = (x381!=(x382*(x383|x384)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x386 = INT64_MIN;
	uint64_t x388 = 203276930161775LLU;
	static volatile int32_t t67 = 1630618;

    t67 = (x385!=(x386*(x387|x388)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x397 = 13402;
	volatile uint64_t x398 = UINT64_MAX;
	int16_t x399 = -1;
	static int8_t x400 = -1;

    t68 = (x397!=(x398*(x399|x400)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x402 = INT16_MIN;
	int64_t x403 = -573367768350500015LL;
	int8_t x404 = INT8_MIN;
	volatile int32_t t69 = 1382;

    t69 = (x401!=(x402*(x403|x404)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x406 = 4U;
	volatile int8_t x407 = INT8_MAX;
	static int32_t t70 = 161;

    t70 = (x405!=(x406*(x407|x408)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x409 = -2841823714447LL;
	volatile int16_t x411 = -1;
	volatile int32_t t71 = -769538734;

    t71 = (x409!=(x410*(x411|x412)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x425 = 46994468396LL;
	int16_t x426 = INT16_MIN;
	int16_t x427 = -1;
	uint16_t x428 = 2U;
	volatile int32_t t72 = 1118757;

    t72 = (x425!=(x426*(x427|x428)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x429 = 0U;
	uint32_t x431 = 218322458U;
	int16_t x432 = -1;

    t73 = (x429!=(x430*(x431|x432)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x433 = 57U;
	volatile int8_t x434 = INT8_MIN;
	int16_t x435 = INT16_MAX;
	volatile int8_t x436 = -1;
	static int32_t t74 = 254782;

    t74 = (x433!=(x434*(x435|x436)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x437 = INT16_MIN;
	static int8_t x438 = INT8_MIN;
	int32_t x439 = INT32_MAX;
	static int32_t x440 = -1;
	static volatile int32_t t75 = -11;

    t75 = (x437!=(x438*(x439|x440)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x446 = 57U;
	uint64_t x447 = UINT64_MAX;
	int64_t x448 = INT64_MIN;
	int32_t t76 = -2929602;

    t76 = (x445!=(x446*(x447|x448)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint32_t x449 = 13U;
	int8_t x451 = INT8_MIN;
	int8_t x452 = -60;
	int32_t t77 = 477953;

    t77 = (x449!=(x450*(x451|x452)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x454 = INT8_MIN;
	volatile int32_t x455 = INT32_MIN;
	int64_t x456 = INT64_MAX;

    t78 = (x453!=(x454*(x455|x456)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x461 = 4U;
	uint64_t x462 = 909353566LLU;
	int16_t x463 = INT16_MAX;
	volatile int32_t t79 = 24;

    t79 = (x461!=(x462*(x463|x464)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x465 = 0U;
	uint8_t x466 = UINT8_MAX;
	volatile int32_t x467 = 131628;

    t80 = (x465!=(x466*(x467|x468)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x469 = 5619713881443182028LLU;
	uint16_t x470 = UINT16_MAX;
	int16_t x471 = -1;
	int64_t x472 = -1LL;
	volatile int32_t t81 = 3827;

    t81 = (x469!=(x470*(x471|x472)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x473 = -1;
	int8_t x474 = INT8_MIN;
	volatile int32_t t82 = -20075;

    t82 = (x473!=(x474*(x475|x476)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x477 = 47;
	volatile int16_t x478 = -1;
	int8_t x479 = 1;
	uint64_t x480 = 2527444827LLU;
	volatile int32_t t83 = -2104;

    t83 = (x477!=(x478*(x479|x480)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x489 = 82728U;
	int32_t x490 = 3115;
	int64_t x491 = -1LL;
	int32_t x492 = INT32_MIN;
	static int32_t t84 = 121919637;

    t84 = (x489!=(x490*(x491|x492)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x497 = 582LLU;
	int16_t x498 = INT16_MIN;
	int32_t x499 = -1;
	volatile int8_t x500 = INT8_MIN;
	volatile int32_t t85 = -10036;

    t85 = (x497!=(x498*(x499|x500)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x502 = INT16_MAX;

    t86 = (x501!=(x502*(x503|x504)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x505 = INT16_MIN;
	static int8_t x507 = -1;
	volatile int32_t t87 = -504;

    t87 = (x505!=(x506*(x507|x508)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x509 = -199;
	int64_t x510 = -1LL;
	static uint8_t x511 = UINT8_MAX;
	int32_t x512 = INT32_MIN;

    t88 = (x509!=(x510*(x511|x512)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x513 = INT32_MIN;
	uint32_t x515 = 91496U;
	uint8_t x516 = 1U;
	static int32_t t89 = 4409781;

    t89 = (x513!=(x514*(x515|x516)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x521 = -5756;
	int32_t x522 = INT32_MAX;
	uint64_t x523 = 286509378217709444LLU;
	int16_t x524 = 39;
	int32_t t90 = -2679;

    t90 = (x521!=(x522*(x523|x524)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x529 = 34936991968853LLU;
	int8_t x530 = -4;
	static int16_t x531 = -15;
	static int16_t x532 = 78;
	volatile int32_t t91 = -126;

    t91 = (x529!=(x530*(x531|x532)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x533 = INT32_MIN;
	uint16_t x535 = 3U;
	int32_t x536 = -16934;
	int32_t t92 = -845501791;

    t92 = (x533!=(x534*(x535|x536)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x537 = INT32_MIN;
	int64_t x538 = 0LL;
	int32_t x539 = -1;
	static uint32_t x540 = 116296065U;
	int32_t t93 = -2672823;

    t93 = (x537!=(x538*(x539|x540)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x541 = 502790001U;
	uint32_t x542 = UINT32_MAX;
	int8_t x543 = -1;
	int32_t x544 = INT32_MIN;

    t94 = (x541!=(x542*(x543|x544)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x549 = 38671306U;
	int16_t x550 = 11851;
	int16_t x551 = INT16_MIN;
	int32_t t95 = -2780;

    t95 = (x549!=(x550*(x551|x552)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x553 = INT64_MAX;
	static uint32_t x554 = 79U;
	static int16_t x555 = INT16_MIN;
	static int32_t x556 = -2;
	volatile int32_t t96 = 364;

    t96 = (x553!=(x554*(x555|x556)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int32_t x557 = -509;
	int16_t x558 = INT16_MIN;
	static volatile uint64_t x559 = 119156872870880LLU;
	static int32_t t97 = -620828236;

    t97 = (x557!=(x558*(x559|x560)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x565 = -1;
	static uint64_t x566 = 2186877611217533777LLU;
	uint8_t x567 = UINT8_MAX;
	int16_t x568 = INT16_MIN;
	int32_t t98 = 18;

    t98 = (x565!=(x566*(x567|x568)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x569 = -51;
	int16_t x571 = INT16_MAX;
	volatile int32_t x572 = -26238483;

    t99 = (x569!=(x570*(x571|x572)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x573 = INT32_MIN;
	volatile int8_t x574 = -8;
	volatile uint8_t x575 = 15U;
	int32_t t100 = -43029930;

    t100 = (x573!=(x574*(x575|x576)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x577 = 959801514883LLU;
	volatile int32_t x578 = INT32_MAX;
	static uint64_t x579 = UINT64_MAX;
	uint64_t x580 = 981218790294LLU;
	int32_t t101 = -1;

    t101 = (x577!=(x578*(x579|x580)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x581 = 24312LL;
	int64_t x582 = 5025999162879441LL;
	int64_t x583 = -1LL;
	uint64_t x584 = 1795LLU;
	static volatile int32_t t102 = -6356;

    t102 = (x581!=(x582*(x583|x584)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x585 = INT32_MIN;
	uint64_t x586 = 206656LLU;
	volatile uint8_t x587 = 2U;
	int32_t x588 = -1;
	volatile int32_t t103 = -62048;

    t103 = (x585!=(x586*(x587|x588)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x593 = 1U;
	static int64_t x594 = INT64_MAX;
	uint64_t x595 = 122980578LLU;
	volatile int16_t x596 = -1;
	static volatile int32_t t104 = 414931658;

    t104 = (x593!=(x594*(x595|x596)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x611 = INT8_MIN;
	uint8_t x612 = 0U;
	int32_t t105 = 5;

    t105 = (x609!=(x610*(x611|x612)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x613 = INT64_MAX;
	static int32_t x614 = INT32_MIN;
	uint8_t x615 = 12U;
	static uint32_t x616 = 179294U;
	int32_t t106 = -2723;

    t106 = (x613!=(x614*(x615|x616)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x617 = INT16_MIN;
	uint16_t x618 = 1U;
	static int8_t x620 = INT8_MAX;

    t107 = (x617!=(x618*(x619|x620)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x621 = 26;
	int8_t x622 = INT8_MIN;
	int32_t x624 = -1;
	int32_t t108 = -7;

    t108 = (x621!=(x622*(x623|x624)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x625 = INT8_MIN;
	uint64_t x627 = 2140LLU;
	int16_t x628 = -7;
	volatile int32_t t109 = 4616404;

    t109 = (x625!=(x626*(x627|x628)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x629 = INT32_MAX;
	int8_t x630 = INT8_MIN;
	uint32_t x631 = 33128386U;

    t110 = (x629!=(x630*(x631|x632)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x633 = UINT32_MAX;
	uint32_t x634 = 1U;
	uint8_t x635 = 50U;
	int32_t t111 = 523610;

    t111 = (x633!=(x634*(x635|x636)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x637 = INT32_MIN;
	int16_t x638 = -1;
	int64_t x640 = INT64_MIN;
	volatile int32_t t112 = -1238;

    t112 = (x637!=(x638*(x639|x640)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x645 = -555503839618168LL;
	uint8_t x647 = UINT8_MAX;
	volatile int16_t x648 = INT16_MIN;
	static volatile int32_t t113 = -96;

    t113 = (x645!=(x646*(x647|x648)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x650 = INT16_MIN;
	int32_t x651 = INT32_MIN;
	int8_t x652 = INT8_MIN;
	volatile int32_t t114 = 5;

    t114 = (x649!=(x650*(x651|x652)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x655 = 51;
	uint16_t x656 = 6U;
	volatile int32_t t115 = 54815743;

    t115 = (x653!=(x654*(x655|x656)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x662 = -1;
	int32_t x663 = -49;

    t116 = (x661!=(x662*(x663|x664)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x666 = 104U;
	int64_t x667 = INT64_MAX;
	volatile int32_t t117 = 114469392;

    t117 = (x665!=(x666*(x667|x668)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x669 = 7523U;
	int8_t x670 = INT8_MIN;
	int32_t x671 = -1;
	uint64_t x672 = UINT64_MAX;
	int32_t t118 = 3;

    t118 = (x669!=(x670*(x671|x672)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x677 = -1LL;
	int64_t x678 = 1LL;
	int16_t x679 = INT16_MAX;
	static int32_t x680 = 783097909;
	volatile int32_t t119 = 620605425;

    t119 = (x677!=(x678*(x679|x680)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x682 = INT16_MIN;
	uint16_t x683 = 410U;
	static volatile uint8_t x684 = 1U;
	int32_t t120 = -18;

    t120 = (x681!=(x682*(x683|x684)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x685 = 49035021756937LL;
	volatile uint8_t x686 = UINT8_MAX;
	static int64_t x687 = INT64_MIN;
	volatile int8_t x688 = INT8_MIN;

    t121 = (x685!=(x686*(x687|x688)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x689 = 373160337U;
	int32_t x690 = INT32_MAX;
	static int16_t x691 = -6941;
	int64_t x692 = INT64_MAX;

    t122 = (x689!=(x690*(x691|x692)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x693 = UINT16_MAX;
	int64_t x694 = INT64_MIN;
	uint64_t x695 = UINT64_MAX;
	uint64_t x696 = 1936353315006973639LLU;
	volatile int32_t t123 = 7827128;

    t123 = (x693!=(x694*(x695|x696)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x697 = INT8_MIN;
	int8_t x698 = INT8_MAX;
	uint64_t x700 = 45894LLU;
	int32_t t124 = 110470;

    t124 = (x697!=(x698*(x699|x700)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x701 = -91;
	int16_t x702 = INT16_MAX;
	volatile uint64_t x703 = UINT64_MAX;
	uint8_t x704 = 15U;
	volatile int32_t t125 = -25413;

    t125 = (x701!=(x702*(x703|x704)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint32_t x705 = 39182592U;
	int8_t x706 = -1;
	static volatile int64_t x707 = INT64_MAX;
	static int64_t x708 = -1LL;

    t126 = (x705!=(x706*(x707|x708)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x710 = 2U;
	int16_t x711 = INT16_MIN;
	int64_t x712 = -974174LL;
	int32_t t127 = -530;

    t127 = (x709!=(x710*(x711|x712)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x713 = -1;
	int8_t x714 = INT8_MIN;
	static uint32_t x715 = 12670U;
	uint32_t x716 = 4254978U;

    t128 = (x713!=(x714*(x715|x716)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x718 = UINT16_MAX;
	volatile int32_t t129 = 0;

    t129 = (x717!=(x718*(x719|x720)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x729 = -1LL;
	int64_t x731 = INT64_MAX;
	uint8_t x732 = 15U;
	int32_t t130 = 7425859;

    t130 = (x729!=(x730*(x731|x732)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x733 = INT64_MIN;
	static int64_t x734 = INT64_MAX;
	volatile int8_t x735 = -1;
	int32_t x736 = INT32_MIN;
	int32_t t131 = 4191598;

    t131 = (x733!=(x734*(x735|x736)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x737 = -1;
	uint16_t x738 = 0U;
	uint8_t x739 = 7U;
	int32_t t132 = 1;

    t132 = (x737!=(x738*(x739|x740)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x741 = -1;
	uint32_t x743 = 23911U;
	static int16_t x744 = -1;
	volatile int32_t t133 = 21417763;

    t133 = (x741!=(x742*(x743|x744)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x750 = -1LL;
	uint64_t x751 = UINT64_MAX;
	volatile uint16_t x752 = 5099U;
	static int32_t t134 = 1;

    t134 = (x749!=(x750*(x751|x752)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x755 = 636;
	int16_t x756 = INT16_MAX;
	volatile int32_t t135 = 628501364;

    t135 = (x753!=(x754*(x755|x756)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x757 = INT32_MIN;
	volatile uint32_t x758 = 659U;
	int64_t x759 = INT64_MIN;
	int64_t x760 = -1LL;

    t136 = (x757!=(x758*(x759|x760)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x765 = -50;
	uint8_t x766 = 1U;
	int8_t x767 = INT8_MAX;
	uint32_t x768 = 407U;
	volatile int32_t t137 = -485112;

    t137 = (x765!=(x766*(x767|x768)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x773 = INT32_MIN;
	static int8_t x774 = -2;
	uint16_t x776 = 9U;
	int32_t t138 = 5;

    t138 = (x773!=(x774*(x775|x776)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x778 = 0U;
	int16_t x780 = INT16_MAX;
	int32_t t139 = -74138;

    t139 = (x777!=(x778*(x779|x780)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x782 = UINT64_MAX;
	uint32_t x784 = 177U;

    t140 = (x781!=(x782*(x783|x784)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x785 = INT32_MIN;
	int64_t x786 = 232LL;
	int16_t x788 = INT16_MAX;

    t141 = (x785!=(x786*(x787|x788)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x789 = INT32_MIN;
	volatile int8_t x790 = INT8_MAX;
	uint32_t x791 = 3881U;
	static int16_t x792 = -595;
	int32_t t142 = -67;

    t142 = (x789!=(x790*(x791|x792)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x793 = -3;
	int8_t x795 = INT8_MAX;
	volatile int16_t x796 = 2386;
	volatile int32_t t143 = 44818;

    t143 = (x793!=(x794*(x795|x796)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x797 = 9171LLU;
	int32_t x798 = -459323154;
	int8_t x799 = INT8_MIN;
	int32_t t144 = -129210;

    t144 = (x797!=(x798*(x799|x800)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x803 = -2;
	volatile uint16_t x804 = UINT16_MAX;
	static volatile int32_t t145 = 155797;

    t145 = (x801!=(x802*(x803|x804)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x805 = 366U;
	uint16_t x807 = UINT16_MAX;
	int64_t x808 = INT64_MIN;
	static volatile int32_t t146 = 3;

    t146 = (x805!=(x806*(x807|x808)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x809 = 6440236746LL;
	uint8_t x810 = UINT8_MAX;
	static int8_t x811 = 2;
	static int16_t x812 = INT16_MAX;
	int32_t t147 = 402221;

    t147 = (x809!=(x810*(x811|x812)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x814 = INT16_MIN;
	int16_t x815 = 22;
	int16_t x816 = -1;
	volatile int32_t t148 = 3;

    t148 = (x813!=(x814*(x815|x816)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x818 = 9;
	static volatile uint8_t x819 = 33U;
	int32_t t149 = -257496;

    t149 = (x817!=(x818*(x819|x820)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x825 = 0;
	uint16_t x826 = 0U;
	int8_t x827 = INT8_MAX;
	uint32_t x828 = 4478790U;
	volatile int32_t t150 = -1135469;

    t150 = (x825!=(x826*(x827|x828)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x829 = -1;
	uint32_t x830 = 52U;
	volatile int16_t x831 = 298;
	volatile int32_t t151 = -257604040;

    t151 = (x829!=(x830*(x831|x832)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x833 = -1LL;
	volatile int32_t x834 = INT32_MIN;
	int32_t x835 = INT32_MIN;

    t152 = (x833!=(x834*(x835|x836)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x837 = INT64_MIN;
	volatile int64_t x838 = 5495131LL;
	int32_t x839 = INT32_MIN;
	uint32_t x840 = 202U;
	int32_t t153 = 927030;

    t153 = (x837!=(x838*(x839|x840)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x841 = INT32_MIN;
	uint64_t x842 = 123014601LLU;
	volatile int16_t x844 = -1;
	static int32_t t154 = -589529;

    t154 = (x841!=(x842*(x843|x844)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x845 = INT32_MAX;
	int8_t x846 = INT8_MIN;
	static uint16_t x847 = UINT16_MAX;
	uint64_t x848 = 32297707LLU;
	volatile int32_t t155 = -16009;

    t155 = (x845!=(x846*(x847|x848)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x850 = INT16_MAX;
	volatile uint8_t x851 = 24U;
	int16_t x852 = -3533;
	volatile int32_t t156 = -49534935;

    t156 = (x849!=(x850*(x851|x852)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x853 = 36U;
	uint16_t x855 = 7U;
	static volatile int32_t x856 = INT32_MIN;
	int32_t t157 = 78240133;

    t157 = (x853!=(x854*(x855|x856)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x861 = -1;
	int8_t x862 = INT8_MIN;
	volatile int32_t t158 = 880784;

    t158 = (x861!=(x862*(x863|x864)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x869 = 151550;
	volatile uint64_t x870 = 635LLU;
	uint32_t x871 = UINT32_MAX;

    t159 = (x869!=(x870*(x871|x872)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x873 = 406418425;
	uint16_t x874 = UINT16_MAX;
	int16_t x875 = 10;
	uint16_t x876 = 9U;

    t160 = (x873!=(x874*(x875|x876)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x878 = UINT8_MAX;
	static int32_t x879 = INT32_MIN;
	volatile int32_t t161 = -2;

    t161 = (x877!=(x878*(x879|x880)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x881 = -12880;
	int64_t x883 = -522945149536210690LL;
	static int32_t t162 = 230;

    t162 = (x881!=(x882*(x883|x884)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x885 = 1543;
	int32_t x886 = INT32_MIN;
	static uint32_t x887 = 552228U;
	volatile int32_t t163 = 30;

    t163 = (x885!=(x886*(x887|x888)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x893 = 1098869465443854138LLU;
	volatile uint32_t x894 = 105767U;
	static int32_t x895 = INT32_MIN;
	volatile uint8_t x896 = 1U;
	int32_t t164 = -535910828;

    t164 = (x893!=(x894*(x895|x896)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x897 = -3750;
	static int16_t x898 = INT16_MIN;
	int8_t x899 = INT8_MIN;
	int32_t x900 = INT32_MAX;
	volatile int32_t t165 = 467;

    t165 = (x897!=(x898*(x899|x900)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x901 = UINT64_MAX;
	uint16_t x902 = 54U;
	static uint64_t x903 = 3101748467251LLU;
	volatile uint32_t x904 = 6U;
	int32_t t166 = 2;

    t166 = (x901!=(x902*(x903|x904)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x905 = -1LL;
	uint64_t x906 = 3779689519260LLU;
	uint64_t x907 = 285244188LLU;
	int32_t x908 = 9;
	static volatile int32_t t167 = -7;

    t167 = (x905!=(x906*(x907|x908)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x909 = -1;
	static volatile uint64_t x910 = 445LLU;
	uint64_t x911 = 0LLU;
	volatile int32_t t168 = -1;

    t168 = (x909!=(x910*(x911|x912)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x917 = INT16_MIN;
	uint8_t x918 = UINT8_MAX;
	static int8_t x919 = INT8_MIN;
	uint8_t x920 = 67U;

    t169 = (x917!=(x918*(x919|x920)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x922 = 27414849U;
	volatile int64_t x923 = -1LL;
	static int32_t t170 = 169;

    t170 = (x921!=(x922*(x923|x924)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x925 = -8489;
	volatile int64_t x926 = INT64_MIN;
	uint64_t x927 = UINT64_MAX;
	int64_t x928 = -1LL;
	int32_t t171 = -306561932;

    t171 = (x925!=(x926*(x927|x928)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x929 = -1;
	int32_t x930 = INT32_MAX;
	uint64_t x931 = UINT64_MAX;
	volatile int64_t x932 = 328254625447LL;
	volatile int32_t t172 = 23487550;

    t172 = (x929!=(x930*(x931|x932)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x933 = 23798977155647LL;
	static int32_t x934 = -1;
	uint16_t x935 = UINT16_MAX;

    t173 = (x933!=(x934*(x935|x936)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x937 = 3399U;
	uint16_t x938 = 3U;
	static int64_t x939 = INT64_MIN;
	uint64_t x940 = 918769631917543576LLU;
	int32_t t174 = 132;

    t174 = (x937!=(x938*(x939|x940)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x942 = -1;
	int16_t x944 = INT16_MIN;

    t175 = (x941!=(x942*(x943|x944)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x945 = 49U;
	static int8_t x946 = INT8_MIN;
	static int8_t x947 = INT8_MIN;
	int8_t x948 = 6;
	volatile int32_t t176 = 1637;

    t176 = (x945!=(x946*(x947|x948)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x953 = 2U;
	uint8_t x955 = 3U;
	int8_t x956 = 10;
	int32_t t177 = 57;

    t177 = (x953!=(x954*(x955|x956)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x961 = -5;
	volatile uint32_t x962 = 5U;
	int8_t x963 = -1;
	int64_t x964 = -1LL;
	int32_t t178 = 2264;

    t178 = (x961!=(x962*(x963|x964)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x966 = 21694U;
	uint64_t x967 = UINT64_MAX;
	volatile int32_t t179 = 35349;

    t179 = (x965!=(x966*(x967|x968)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x969 = INT8_MIN;
	int8_t x970 = INT8_MIN;
	uint16_t x971 = 1311U;
	volatile int32_t x972 = -4;
	int32_t t180 = 62692;

    t180 = (x969!=(x970*(x971|x972)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x974 = -1;
	volatile int32_t t181 = 109;

    t181 = (x973!=(x974*(x975|x976)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x977 = UINT8_MAX;
	static int16_t x978 = -1;
	int32_t x979 = INT32_MIN;
	volatile uint64_t x980 = 48123956LLU;
	int32_t t182 = -27793888;

    t182 = (x977!=(x978*(x979|x980)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x981 = INT64_MAX;
	static volatile uint64_t x984 = UINT64_MAX;
	volatile int32_t t183 = 124;

    t183 = (x981!=(x982*(x983|x984)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x985 = INT32_MIN;
	int32_t x987 = -1;
	int8_t x988 = 12;

    t184 = (x985!=(x986*(x987|x988)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x990 = INT16_MIN;
	int16_t x991 = INT16_MIN;
	static int16_t x992 = INT16_MAX;

    t185 = (x989!=(x990*(x991|x992)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x994 = INT16_MAX;
	int16_t x995 = INT16_MAX;
	uint16_t x996 = UINT16_MAX;

    t186 = (x993!=(x994*(x995|x996)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x997 = INT16_MIN;
	int16_t x998 = INT16_MAX;
	uint32_t x1000 = UINT32_MAX;
	volatile int32_t t187 = 9712;

    t187 = (x997!=(x998*(x999|x1000)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1003 = 1377U;
	volatile int32_t t188 = 5544097;

    t188 = (x1001!=(x1002*(x1003|x1004)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1005 = 23LLU;
	uint32_t x1006 = 216497110U;
	static uint8_t x1007 = 29U;
	int8_t x1008 = INT8_MIN;
	int32_t t189 = -5366;

    t189 = (x1005!=(x1006*(x1007|x1008)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1013 = INT8_MIN;
	volatile int16_t x1014 = INT16_MIN;
	static int32_t x1015 = -1;
	int64_t x1016 = INT64_MIN;

    t190 = (x1013!=(x1014*(x1015|x1016)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x1017 = INT32_MIN;
	static uint64_t x1019 = 6572LLU;
	int64_t x1020 = INT64_MIN;
	int32_t t191 = 2158;

    t191 = (x1017!=(x1018*(x1019|x1020)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1021 = INT16_MIN;
	static int64_t x1022 = INT64_MIN;
	uint8_t x1023 = 0U;
	int16_t x1024 = 1;
	static volatile int32_t t192 = -484288;

    t192 = (x1021!=(x1022*(x1023|x1024)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1025 = -1;
	int64_t x1026 = 16647915462804716LL;
	int16_t x1027 = -14283;
	static int32_t x1028 = INT32_MAX;
	int32_t t193 = 28;

    t193 = (x1025!=(x1026*(x1027|x1028)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1029 = -1;
	int8_t x1030 = 15;
	int32_t x1031 = -1;
	int32_t x1032 = -584492292;

    t194 = (x1029!=(x1030*(x1031|x1032)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1033 = INT8_MIN;
	static uint32_t x1034 = 4469U;
	int32_t x1035 = -1;
	int32_t x1036 = INT32_MIN;
	int32_t t195 = -1447;

    t195 = (x1033!=(x1034*(x1035|x1036)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1037 = 900563125U;
	int32_t x1038 = 6583;
	int16_t x1039 = INT16_MAX;
	volatile int32_t t196 = 40906;

    t196 = (x1037!=(x1038*(x1039|x1040)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1041 = INT8_MIN;
	uint32_t x1043 = 632634725U;
	uint16_t x1044 = UINT16_MAX;
	static int32_t t197 = -216451143;

    t197 = (x1041!=(x1042*(x1043|x1044)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1047 = 283621871U;
	int32_t x1048 = 17621;
	static volatile int32_t t198 = -3768;

    t198 = (x1045!=(x1046*(x1047|x1048)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x1049 = 1U;
	int32_t x1050 = INT32_MIN;
	int64_t x1051 = INT64_MIN;
	uint64_t x1052 = UINT64_MAX;

    t199 = (x1049!=(x1050*(x1051|x1052)));

    if (t199 != 1) { NG(); } else { ; }
	
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

