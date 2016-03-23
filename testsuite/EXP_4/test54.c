
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

static int16_t x4 = INT16_MAX;
int8_t x13 = 0;
volatile int16_t x17 = 1;
int8_t x20 = INT8_MIN;
int64_t x27 = INT64_MAX;
static int64_t t5 = 131858359054273915LL;
int16_t x33 = INT16_MIN;
static int32_t t7 = 243;
volatile int16_t x47 = INT16_MIN;
int32_t x51 = 859589263;
int64_t t9 = 154714179825139557LL;
uint64_t t11 = 117328LLU;
int16_t x66 = -1;
uint8_t x69 = UINT8_MAX;
int32_t x70 = INT32_MAX;
int8_t x73 = -1;
int16_t x77 = -1;
static uint32_t x90 = UINT32_MAX;
volatile uint64_t t17 = 2015LLU;
uint8_t x95 = 29U;
volatile int64_t t20 = 406530419639631066LL;
static uint32_t x107 = 34317664U;
static volatile uint32_t t22 = 0U;
static volatile int64_t t23 = 29582995783100LL;
uint64_t x124 = 0LLU;
int64_t x125 = -1LL;
int8_t x141 = -1;
uint16_t x145 = 218U;
int64_t x148 = -2043769385635972LL;
int64_t t31 = 76810799401613LL;
uint32_t x153 = 200U;
int16_t x159 = 10454;
volatile int32_t x160 = INT32_MIN;
volatile int64_t t33 = 13682844LL;
uint32_t x165 = 303799723U;
int32_t x166 = INT32_MIN;
static uint16_t x171 = 0U;
int64_t t36 = 2495603233LL;
volatile int64_t x173 = INT64_MIN;
uint16_t x180 = 114U;
uint64_t x184 = 120411842873158263LLU;
volatile uint64_t t39 = 571019709300342LLU;
int8_t x201 = INT8_MIN;
int64_t x203 = INT64_MIN;
volatile uint16_t x211 = 2U;
uint64_t t47 = 14395692557747LLU;
int16_t x222 = 29;
int16_t x225 = INT16_MIN;
int32_t x228 = -1;
static int16_t x230 = -1;
int32_t t50 = 15930738;
uint64_t t52 = 8534434512650595914LLU;
uint16_t x242 = 23U;
int16_t x243 = INT16_MIN;
uint32_t x253 = 2U;
static int64_t x255 = 1LL;
int64_t t57 = -229750277654468LL;
static volatile int64_t x266 = INT64_MAX;
int16_t x274 = INT16_MIN;
int8_t x310 = INT8_MIN;
static int16_t x316 = 1216;
int16_t x321 = INT16_MIN;
uint8_t x323 = UINT8_MAX;
int32_t x328 = 19;
uint32_t x344 = UINT32_MAX;
volatile int32_t x347 = INT32_MIN;
int16_t x352 = -1;
volatile int8_t x358 = INT8_MIN;
int64_t x360 = INT64_MAX;
int32_t x369 = -117128408;
int64_t x378 = INT64_MIN;
int8_t x381 = INT8_MIN;
int16_t x389 = -1;
uint32_t x394 = 314200U;
static int8_t x399 = INT8_MIN;
int16_t x403 = -1;
int64_t x406 = -1LL;
volatile uint16_t x409 = 4584U;
uint64_t x423 = 7779057LLU;
uint16_t x434 = 1077U;
static int32_t x437 = INT32_MIN;
int32_t t94 = -2;
volatile int32_t t95 = -5;
int64_t t97 = -1LL;
uint16_t x458 = UINT16_MAX;
volatile uint16_t x460 = 1U;
int32_t t98 = 14;
static int32_t x463 = INT32_MIN;
static int64_t t102 = -130712371215LL;
int64_t x492 = 394275224LL;
static uint32_t x498 = 1099570578U;
int64_t x503 = -1LL;
uint32_t x504 = 12U;
int32_t x506 = -487;
static volatile uint32_t x508 = UINT32_MAX;
uint16_t x510 = 884U;
int32_t x513 = INT32_MIN;
int16_t x519 = INT16_MIN;
uint64_t t111 = 562467670148810LLU;
uint64_t x528 = 6713519594617LLU;
volatile uint8_t x533 = 1U;
int16_t x535 = -499;
int8_t x538 = -16;
int16_t x545 = INT16_MIN;
static int64_t x553 = INT64_MIN;
int64_t t119 = 26900503992674LL;
static int8_t x557 = INT8_MIN;
int8_t x562 = INT8_MIN;
int64_t x565 = INT64_MIN;
static uint16_t x578 = UINT16_MAX;
uint16_t x580 = 25770U;
int8_t x583 = INT8_MAX;
uint64_t x593 = UINT64_MAX;
int32_t x594 = INT32_MIN;
int64_t x595 = 8310075LL;
static int8_t x597 = 33;
uint16_t x604 = UINT16_MAX;
static int32_t x613 = -1;
static int8_t x614 = -3;
int8_t x618 = INT8_MIN;
uint32_t x619 = 211U;
static uint64_t x630 = 1813LLU;
int32_t x632 = INT32_MAX;
int64_t x640 = INT64_MAX;
int64_t t139 = 85129346862821496LL;
static volatile uint16_t x653 = 1231U;
uint16_t x654 = UINT16_MAX;
int16_t x656 = INT16_MIN;
static int64_t t141 = -2555643802741558648LL;
static int64_t x658 = 11LL;
int32_t x663 = INT32_MIN;
int8_t x665 = 0;
int16_t x675 = -1;
volatile int64_t x676 = -1LL;
volatile int32_t x679 = -1;
int32_t x682 = -1;
int8_t x684 = -5;
int64_t x687 = -1LL;
int64_t x688 = INT64_MAX;
uint64_t t149 = 2850LLU;
int64_t x721 = -1LL;
int64_t x735 = INT64_MAX;
uint64_t t159 = 1052664300661LLU;
int64_t x738 = -1LL;
volatile int64_t t162 = 60667921LL;
int8_t x767 = -6;
int8_t x769 = -1;
int64_t x777 = INT64_MIN;
int32_t x780 = 103048635;
volatile int64_t t169 = 2123798744218LL;
static uint8_t x803 = UINT8_MAX;
static int16_t x815 = -18;
volatile int8_t x821 = INT8_MIN;
int64_t t178 = 21401400998011765LL;
int32_t x837 = -1;
static uint32_t t182 = 5085072U;
uint32_t x850 = UINT32_MAX;
volatile uint32_t x855 = 1U;
volatile int16_t x856 = -452;
volatile int8_t x865 = INT8_MIN;
int32_t x868 = -1;
volatile int16_t x869 = -11;
volatile int32_t t187 = -51092;
static int32_t x875 = -1;
int32_t t189 = -1;
static int8_t x890 = 0;
volatile int32_t t190 = 32524103;
volatile uint64_t x900 = UINT64_MAX;
volatile uint32_t x917 = UINT32_MAX;
uint32_t t196 = 49U;
static uint8_t x934 = 23U;
int64_t x936 = 5921842LL;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int8_t x2 = 4;
	int32_t x3 = 38382198;
	int32_t t0 = 141;

    t0 = (x1&(x2/(x3+x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 0;
	uint32_t x6 = 1350526786U;
	uint64_t x7 = UINT64_MAX;
	static volatile uint64_t x8 = UINT64_MAX;
	static uint64_t t1 = 757353820545LLU;

    t1 = (x5&(x6/(x7+x8)));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	int64_t x10 = INT64_MAX;
	static int32_t x11 = -1;
	int64_t x12 = -953107LL;
	volatile int64_t t2 = -6057327LL;

    t2 = (x9&(x10/(x11+x12)));

    if (t2 != 7948LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x14 = 28259508U;
	volatile uint16_t x15 = 15U;
	int8_t x16 = INT8_MAX;
	volatile uint32_t t3 = 12307U;

    t3 = (x13&(x14/(x15+x16)));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x18 = INT64_MIN;
	uint16_t x19 = 253U;
	volatile int64_t t4 = 35557182750865LL;

    t4 = (x17&(x18/(x19+x20)));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = -10;
	static uint32_t x26 = 75305U;
	int64_t x28 = INT64_MIN;

    t5 = (x25&(x26/(x27+x28)));

    if (t5 != -75306LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x34 = 207;
	int64_t x35 = 210087470122570083LL;
	int64_t x36 = -897282159839850LL;
	volatile int64_t t6 = 2040636043583546LL;

    t6 = (x33&(x34/(x35+x36)));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x41 = INT16_MIN;
	int16_t x42 = INT16_MIN;
	static int8_t x43 = INT8_MIN;
	int32_t x44 = -4113058;

    t7 = (x41&(x42/(x43+x44)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x45 = INT8_MIN;
	int16_t x46 = INT16_MAX;
	uint16_t x48 = 45U;
	volatile int32_t t8 = -1743906;

    t8 = (x45&(x46/(x47+x48)));

    if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x49 = -1LL;
	int16_t x50 = INT16_MIN;
	static volatile int32_t x52 = 2529530;

    t9 = (x49&(x50/(x51+x52)));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x53 = INT32_MAX;
	static int16_t x54 = INT16_MAX;
	int8_t x55 = INT8_MAX;
	int64_t x56 = -1LL;
	int64_t t10 = -9LL;

    t10 = (x53&(x54/(x55+x56)));

    if (t10 != 260LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x57 = 475LLU;
	static int8_t x58 = INT8_MAX;
	uint8_t x59 = 22U;
	volatile uint64_t x60 = 66812123042461LLU;

    t11 = (x57&(x58/(x59+x60)));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x65 = 3;
	volatile uint8_t x67 = UINT8_MAX;
	static uint64_t x68 = 12LLU;
	volatile uint64_t t12 = 3LLU;

    t12 = (x65&(x66/(x67+x68)));

    if (t12 != 3LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x71 = 1LLU;
	uint32_t x72 = 60081U;
	static volatile uint64_t t13 = 294347LLU;

    t13 = (x69&(x70/(x71+x72)));

    if (t13 != 158LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x74 = INT64_MAX;
	volatile uint32_t x75 = 1157931U;
	static int32_t x76 = 4;
	volatile int64_t t14 = 10897LL;

    t14 = (x73&(x74/(x75+x76)));

    if (t14 != 7965362508996LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x78 = INT32_MIN;
	int64_t x79 = INT64_MIN;
	int32_t x80 = 7;
	volatile int64_t t15 = 2913813503LL;

    t15 = (x77&(x78/(x79+x80)));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x81 = UINT64_MAX;
	volatile uint16_t x82 = UINT16_MAX;
	int64_t x83 = -1828548452007095LL;
	int8_t x84 = INT8_MIN;
	static uint64_t t16 = 6521424944LLU;

    t16 = (x81&(x82/(x83+x84)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x89 = UINT64_MAX;
	volatile int16_t x91 = INT16_MAX;
	uint32_t x92 = 1U;

    t17 = (x89&(x90/(x91+x92)));

    if (t17 != 131071LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x93 = 105330530;
	int32_t x94 = INT32_MAX;
	int16_t x96 = INT16_MIN;
	volatile int32_t t18 = 1042010;

    t18 = (x93&(x94/(x95+x96)));

    if (t18 != 105264962) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int16_t x97 = 0;
	uint8_t x98 = UINT8_MAX;
	volatile int64_t x99 = INT64_MAX;
	uint64_t x100 = UINT64_MAX;
	static uint64_t t19 = 21653543373151910LLU;

    t19 = (x97&(x98/(x99+x100)));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x101 = 12U;
	int16_t x102 = INT16_MIN;
	int64_t x103 = INT64_MIN;
	uint8_t x104 = UINT8_MAX;

    t20 = (x101&(x102/(x103+x104)));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x105 = 1LLU;
	int64_t x106 = -1LL;
	int32_t x108 = INT32_MIN;
	uint64_t t21 = 1970LLU;

    t21 = (x105&(x106/(x107+x108)));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x109 = INT32_MIN;
	int32_t x110 = INT32_MIN;
	uint16_t x111 = 0U;
	uint32_t x112 = UINT32_MAX;

    t22 = (x109&(x110/(x111+x112)));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x113 = INT32_MIN;
	int32_t x114 = INT32_MAX;
	static int64_t x115 = 72819267LL;
	int8_t x116 = INT8_MAX;

    t23 = (x113&(x114/(x115+x116)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x117 = INT8_MIN;
	static uint32_t x118 = 10U;
	uint8_t x119 = 0U;
	uint8_t x120 = 2U;
	volatile uint32_t t24 = 393U;

    t24 = (x117&(x118/(x119+x120)));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x121 = 127698320U;
	volatile int64_t x122 = INT64_MIN;
	int32_t x123 = -6;
	volatile uint64_t t25 = 19181027854LLU;

    t25 = (x121&(x122/(x123+x124)));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x126 = -1;
	int32_t x127 = INT32_MIN;
	int32_t x128 = INT32_MAX;
	int64_t t26 = -99610668954LL;

    t26 = (x125&(x126/(x127+x128)));

    if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x129 = 0U;
	int64_t x130 = -13813LL;
	int64_t x131 = 62686564LL;
	int8_t x132 = 4;
	volatile int64_t t27 = -91976197074730142LL;

    t27 = (x129&(x130/(x131+x132)));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x133 = UINT8_MAX;
	int16_t x134 = 8079;
	volatile uint8_t x135 = 3U;
	int64_t x136 = -572210491425LL;
	volatile int64_t t28 = -1982361626LL;

    t28 = (x133&(x134/(x135+x136)));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x137 = INT32_MAX;
	static int16_t x138 = 65;
	static int8_t x139 = -7;
	uint8_t x140 = 97U;
	volatile int32_t t29 = -446;

    t29 = (x137&(x138/(x139+x140)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x142 = 3U;
	uint32_t x143 = 132119678U;
	uint8_t x144 = 46U;
	static volatile uint32_t t30 = 41124878U;

    t30 = (x141&(x142/(x143+x144)));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x146 = 0;
	uint32_t x147 = 82U;

    t31 = (x145&(x146/(x147+x148)));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x154 = 14135LL;
	uint8_t x155 = 16U;
	int32_t x156 = INT32_MIN;
	static volatile int64_t t32 = 261087804LL;

    t32 = (x153&(x154/(x155+x156)));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x157 = INT64_MAX;
	int16_t x158 = 50;

    t33 = (x157&(x158/(x159+x160)));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x161 = INT16_MAX;
	int32_t x162 = INT32_MIN;
	int32_t x163 = INT32_MIN;
	int8_t x164 = 1;
	volatile int32_t t34 = 301547;

    t34 = (x161&(x162/(x163+x164)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x167 = 14;
	uint64_t x168 = 6821429085095852LLU;
	uint64_t t35 = 7LLU;

    t35 = (x165&(x166/(x167+x168)));

    if (t35 != 2176LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x169 = UINT8_MAX;
	volatile uint16_t x170 = 0U;
	static int64_t x172 = 14487742LL;

    t36 = (x169&(x170/(x171+x172)));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x174 = 1U;
	static int32_t x175 = INT32_MAX;
	static int64_t x176 = -1LL;
	volatile int64_t t37 = -8565158754LL;

    t37 = (x173&(x174/(x175+x176)));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x177 = -1;
	static volatile int32_t x178 = -1;
	int32_t x179 = 15218;
	volatile int32_t t38 = 1;

    t38 = (x177&(x178/(x179+x180)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MIN;
	int16_t x183 = INT16_MIN;

    t39 = (x181&(x182/(x183+x184)));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x189 = INT8_MIN;
	uint32_t x190 = UINT32_MAX;
	static int32_t x191 = -1;
	volatile int8_t x192 = -13;
	static uint32_t t40 = 1802831U;

    t40 = (x189&(x190/(x191+x192)));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x193 = INT32_MIN;
	volatile uint16_t x194 = 4U;
	int16_t x195 = INT16_MIN;
	int8_t x196 = INT8_MIN;
	volatile int32_t t41 = 628345258;

    t41 = (x193&(x194/(x195+x196)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x197 = INT16_MAX;
	int64_t x198 = INT64_MAX;
	uint8_t x199 = 4U;
	int16_t x200 = 6538;
	static int64_t t42 = -1LL;

    t42 = (x197&(x198/(x199+x200)));

    if (t42 != 19534LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x202 = INT32_MAX;
	int64_t x204 = 11344497949384LL;
	volatile int64_t t43 = 43LL;

    t43 = (x201&(x202/(x203+x204)));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x205 = -1;
	int8_t x206 = INT8_MIN;
	volatile uint64_t x207 = 788986LLU;
	uint8_t x208 = 5U;
	volatile uint64_t t44 = 1157178938057119LLU;

    t44 = (x205&(x206/(x207+x208)));

    if (t44 != 23380170462919LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x209 = INT8_MIN;
	int64_t x210 = 2134765698327317422LL;
	uint16_t x212 = UINT16_MAX;
	volatile int64_t t45 = 1907LL;

    t45 = (x209&(x210/(x211+x212)));

    if (t45 != 32573442457344LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x213 = INT16_MIN;
	int8_t x214 = -1;
	static int16_t x215 = INT16_MIN;
	int32_t x216 = 1;
	int32_t t46 = 848524837;

    t46 = (x213&(x214/(x215+x216)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x217 = 74275LLU;
	int16_t x218 = -6;
	int64_t x219 = -943819652724781757LL;
	static volatile int32_t x220 = 537118514;

    t47 = (x217&(x218/(x219+x220)));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x221 = INT32_MAX;
	static int8_t x223 = INT8_MAX;
	uint32_t x224 = UINT32_MAX;
	uint32_t t48 = 413U;

    t48 = (x221&(x222/(x223+x224)));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x226 = INT64_MIN;
	int16_t x227 = -1;
	volatile int64_t t49 = 185675060643967956LL;

    t49 = (x225&(x226/(x227+x228)));

    if (t49 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x229 = -1;
	int16_t x231 = INT16_MAX;
	uint8_t x232 = 5U;

    t50 = (x229&(x230/(x231+x232)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x233 = -50LL;
	uint16_t x234 = UINT16_MAX;
	uint8_t x235 = 1U;
	static uint16_t x236 = 65U;
	volatile int64_t t51 = -3LL;

    t51 = (x233&(x234/(x235+x236)));

    if (t51 != 960LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x237 = INT8_MAX;
	int64_t x238 = INT64_MIN;
	static uint64_t x239 = 8918LLU;
	static int64_t x240 = INT64_MIN;

    t52 = (x237&(x238/(x239+x240)));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x241 = INT64_MAX;
	int8_t x244 = -1;
	static int64_t t53 = 136102671519826572LL;

    t53 = (x241&(x242/(x243+x244)));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x245 = 15286494U;
	int8_t x246 = INT8_MAX;
	static int16_t x247 = INT16_MAX;
	int32_t x248 = INT32_MIN;
	volatile uint32_t t54 = 23434724U;

    t54 = (x245&(x246/(x247+x248)));

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x249 = 0;
	int16_t x250 = INT16_MIN;
	int8_t x251 = 2;
	volatile int32_t x252 = INT32_MIN;
	static int32_t t55 = -37627;

    t55 = (x249&(x250/(x251+x252)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x254 = INT32_MAX;
	uint32_t x256 = 9937379U;
	static volatile int64_t t56 = 543805934601LL;

    t56 = (x253&(x254/(x255+x256)));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x257 = -1;
	int64_t x258 = INT64_MIN;
	uint32_t x259 = 3663190U;
	int8_t x260 = INT8_MAX;

    t57 = (x257&(x258/(x259+x260)));

    if (t57 != -2517765193908LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x261 = -3;
	int32_t x262 = -1831;
	int8_t x263 = INT8_MIN;
	static int16_t x264 = -133;
	volatile int32_t t58 = -15;

    t58 = (x261&(x262/(x263+x264)));

    if (t58 != 5) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x265 = UINT64_MAX;
	int8_t x267 = INT8_MIN;
	static int16_t x268 = INT16_MAX;
	uint64_t t59 = 1LLU;

    t59 = (x265&(x266/(x267+x268)));

    if (t59 != 282587457852715LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x269 = 30476095128LL;
	volatile int32_t x270 = -1;
	static int16_t x271 = INT16_MIN;
	uint8_t x272 = 0U;
	int64_t t60 = 2555439LL;

    t60 = (x269&(x270/(x271+x272)));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x273 = -3;
	uint16_t x275 = 511U;
	static volatile int16_t x276 = INT16_MIN;
	int32_t t61 = -933;

    t61 = (x273&(x274/(x275+x276)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x277 = INT32_MAX;
	int16_t x278 = INT16_MIN;
	int8_t x279 = -7;
	int16_t x280 = INT16_MAX;
	volatile int32_t t62 = INT32_MAX;

    t62 = (x277&(x278/(x279+x280)));

    if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x285 = 112U;
	int32_t x286 = -1;
	int8_t x287 = 15;
	int64_t x288 = -1LL;
	int64_t t63 = 0LL;

    t63 = (x285&(x286/(x287+x288)));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x289 = -1;
	int64_t x290 = INT64_MAX;
	static volatile int64_t x291 = -13053913079LL;
	uint32_t x292 = UINT32_MAX;
	volatile int64_t t64 = 8463301LL;

    t64 = (x289&(x290/(x291+x292)));

    if (t64 != -1053023076LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x293 = INT16_MIN;
	volatile uint16_t x294 = 6995U;
	int64_t x295 = -362387266LL;
	int8_t x296 = INT8_MAX;
	volatile int64_t t65 = 100346620499663559LL;

    t65 = (x293&(x294/(x295+x296)));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x309 = UINT16_MAX;
	int8_t x311 = INT8_MAX;
	volatile uint32_t x312 = UINT32_MAX;
	volatile uint32_t t66 = 4240075U;

    t66 = (x309&(x310/(x311+x312)));

    if (t66 != 8321U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x313 = INT8_MIN;
	uint32_t x314 = UINT32_MAX;
	static uint32_t x315 = UINT32_MAX;
	uint32_t t67 = 29U;

    t67 = (x313&(x314/(x315+x316)));

    if (t67 != 3534848U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x322 = 0;
	int32_t x324 = INT32_MIN;
	int32_t t68 = 163192317;

    t68 = (x321&(x322/(x323+x324)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x325 = -1;
	static volatile uint64_t x326 = 2278889852349LLU;
	int64_t x327 = -1LL;
	uint64_t t69 = 490896LLU;

    t69 = (x325&(x326/(x327+x328)));

    if (t69 != 126604991797LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x329 = UINT16_MAX;
	static int64_t x330 = INT64_MIN;
	static volatile int8_t x331 = -3;
	int64_t x332 = -132LL;
	int64_t t70 = 31614688605268LL;

    t70 = (x329&(x330/(x331+x332)));

    if (t70 != 11165LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x333 = 1735158784245565LLU;
	static volatile uint64_t x334 = 217398LLU;
	volatile uint64_t x335 = 510LLU;
	int32_t x336 = -2608;
	volatile uint64_t t71 = 133888616692241LLU;

    t71 = (x333&(x334/(x335+x336)));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x337 = -52;
	volatile int8_t x338 = INT8_MAX;
	uint8_t x339 = 107U;
	int32_t x340 = 4601;
	volatile int32_t t72 = 28;

    t72 = (x337&(x338/(x339+x340)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x341 = 2;
	int64_t x342 = INT64_MAX;
	int16_t x343 = INT16_MAX;
	volatile int64_t t73 = -86968575LL;

    t73 = (x341&(x342/(x343+x344)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x345 = -1;
	volatile uint16_t x346 = 22U;
	static uint8_t x348 = 7U;
	static int32_t t74 = 22455;

    t74 = (x345&(x346/(x347+x348)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x349 = 964385994461243040LLU;
	int64_t x350 = INT64_MAX;
	static int8_t x351 = -1;
	uint64_t t75 = 187008LLU;

    t75 = (x349&(x350/(x351+x352)));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x357 = INT32_MAX;
	int8_t x359 = -1;
	int64_t t76 = 56773123117LL;

    t76 = (x357&(x358/(x359+x360)));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x361 = INT8_MIN;
	int8_t x362 = 2;
	int64_t x363 = -1LL;
	static int64_t x364 = 809473466LL;
	volatile int64_t t77 = -1545277559LL;

    t77 = (x361&(x362/(x363+x364)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MIN;
	volatile uint16_t x367 = 186U;
	volatile uint32_t x368 = 35996868U;
	volatile uint32_t t78 = 1695U;

    t78 = (x365&(x366/(x367+x368)));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x370 = 550LLU;
	int32_t x371 = -696181196;
	int16_t x372 = INT16_MIN;
	volatile uint64_t t79 = 628123985LLU;

    t79 = (x369&(x370/(x371+x372)));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x373 = INT64_MIN;
	int64_t x374 = -45895LL;
	static int16_t x375 = 0;
	volatile int64_t x376 = INT64_MIN;
	volatile int64_t t80 = -3LL;

    t80 = (x373&(x374/(x375+x376)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x377 = -1;
	uint32_t x379 = 60669U;
	int64_t x380 = -64198396LL;
	int64_t t81 = 1997338LL;

    t81 = (x377&(x378/(x379+x380)));

    if (t81 != 143805720412LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x382 = -1;
	volatile uint32_t x383 = 11237479U;
	volatile int32_t x384 = INT32_MIN;
	volatile uint32_t t82 = 31517U;

    t82 = (x381&(x382/(x383+x384)));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x390 = 12041U;
	static int32_t x391 = INT32_MIN;
	int64_t x392 = -1LL;
	int64_t t83 = 29440278LL;

    t83 = (x389&(x390/(x391+x392)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x393 = 27U;
	volatile uint64_t x395 = 41311407487LLU;
	static uint8_t x396 = 29U;
	volatile uint64_t t84 = 349825440546LLU;

    t84 = (x393&(x394/(x395+x396)));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x397 = INT16_MIN;
	uint64_t x398 = 7621825612LLU;
	volatile uint64_t x400 = 13920798LLU;
	uint64_t t85 = 2165LLU;

    t85 = (x397&(x398/(x399+x400)));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x401 = UINT32_MAX;
	volatile uint64_t x402 = 16912158901024057LLU;
	volatile uint32_t x404 = 3U;
	volatile uint64_t t86 = 1819LLU;

    t86 = (x401&(x402/(x403+x404)));

    if (t86 != 1809259164LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x405 = 75968639U;
	static volatile int8_t x407 = -1;
	int8_t x408 = 6;
	volatile int64_t t87 = -32773446914011919LL;

    t87 = (x405&(x406/(x407+x408)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x410 = UINT16_MAX;
	static int8_t x411 = 0;
	int64_t x412 = -2632693047926041LL;
	int64_t t88 = 94190062412LL;

    t88 = (x409&(x410/(x411+x412)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x413 = 3360428588087LL;
	uint32_t x414 = UINT32_MAX;
	static uint64_t x415 = UINT64_MAX;
	static uint16_t x416 = UINT16_MAX;
	uint64_t t89 = 78548785LLU;

    t89 = (x413&(x414/(x415+x416)));

    if (t89 != 2LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x417 = 1;
	uint16_t x418 = 74U;
	static uint64_t x419 = 106LLU;
	volatile uint16_t x420 = 1U;
	volatile uint64_t t90 = 14LLU;

    t90 = (x417&(x418/(x419+x420)));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x421 = 5206380492591599LL;
	volatile int32_t x422 = INT32_MAX;
	uint16_t x424 = 5238U;
	volatile uint64_t t91 = 218152LLU;

    t91 = (x421&(x422/(x423+x424)));

    if (t91 != 259LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x425 = 66U;
	volatile int16_t x426 = INT16_MAX;
	volatile uint64_t x427 = 16LLU;
	static int8_t x428 = 7;
	volatile uint64_t t92 = 1422136716LLU;

    t92 = (x425&(x426/(x427+x428)));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x433 = 0U;
	uint64_t x435 = 4008823LLU;
	int32_t x436 = 361118;
	volatile uint64_t t93 = 5091024206879163116LLU;

    t93 = (x433&(x434/(x435+x436)));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x438 = 0U;
	int16_t x439 = 0;
	volatile int32_t x440 = -216;

    t94 = (x437&(x438/(x439+x440)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x445 = 0;
	static volatile int16_t x446 = INT16_MIN;
	int8_t x447 = 0;
	static int8_t x448 = INT8_MIN;

    t95 = (x445&(x446/(x447+x448)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x449 = -6;
	uint8_t x450 = 124U;
	volatile int16_t x451 = INT16_MIN;
	uint16_t x452 = 108U;
	static int32_t t96 = 29376;

    t96 = (x449&(x450/(x451+x452)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x453 = -1;
	static volatile uint16_t x454 = UINT16_MAX;
	int64_t x455 = INT64_MIN;
	uint32_t x456 = UINT32_MAX;

    t97 = (x453&(x454/(x455+x456)));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x457 = INT8_MIN;
	int32_t x459 = 1889;

    t98 = (x457&(x458/(x459+x460)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x461 = -1LL;
	volatile int16_t x462 = INT16_MIN;
	int64_t x464 = -1749106520LL;
	int64_t t99 = 67117LL;

    t99 = (x461&(x462/(x463+x464)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x469 = -1;
	static int8_t x470 = 25;
	volatile int64_t x471 = -1LL;
	int64_t x472 = -156529604117624267LL;
	int64_t t100 = -218005894812036983LL;

    t100 = (x469&(x470/(x471+x472)));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x473 = -8368;
	static int16_t x474 = 276;
	static int8_t x475 = INT8_MIN;
	uint32_t x476 = UINT32_MAX;
	volatile uint32_t t101 = 666930833U;

    t101 = (x473&(x474/(x475+x476)));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x477 = 43438427389903439LL;
	int64_t x478 = -1LL;
	uint8_t x479 = 2U;
	int8_t x480 = -6;

    t102 = (x477&(x478/(x479+x480)));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x481 = -313;
	int16_t x482 = 62;
	uint16_t x483 = 56U;
	int16_t x484 = -1;
	int32_t t103 = -5210;

    t103 = (x481&(x482/(x483+x484)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x485 = -1;
	static int16_t x486 = -1;
	int8_t x487 = -1;
	int32_t x488 = -972;
	int32_t t104 = -414584549;

    t104 = (x485&(x486/(x487+x488)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x489 = -958390025;
	int32_t x490 = INT32_MAX;
	int64_t x491 = 1368844061469068LL;
	int64_t t105 = -1826796247864LL;

    t105 = (x489&(x490/(x491+x492)));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x497 = INT8_MAX;
	uint8_t x499 = 29U;
	uint32_t x500 = 3937200U;
	volatile uint32_t t106 = 2U;

    t106 = (x497&(x498/(x499+x500)));

    if (t106 != 23U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x501 = INT16_MIN;
	int16_t x502 = -480;
	static int64_t t107 = -3112172458070305512LL;

    t107 = (x501&(x502/(x503+x504)));

    if (t107 != -32768LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x505 = 37U;
	uint8_t x507 = UINT8_MAX;
	uint32_t t108 = 0U;

    t108 = (x505&(x506/(x507+x508)));

    if (t108 != 4U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x509 = INT8_MAX;
	int16_t x511 = 170;
	int64_t x512 = -1653780LL;
	static int64_t t109 = -2334745387LL;

    t109 = (x509&(x510/(x511+x512)));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x514 = 0LLU;
	volatile uint64_t x515 = 3576456598LLU;
	uint32_t x516 = 20052U;
	volatile uint64_t t110 = 8828622614LLU;

    t110 = (x513&(x514/(x515+x516)));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x517 = INT32_MIN;
	uint64_t x518 = 8LLU;
	int32_t x520 = INT32_MAX;

    t111 = (x517&(x518/(x519+x520)));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int64_t x521 = INT64_MAX;
	int32_t x522 = -1;
	volatile int64_t x523 = -1LL;
	int32_t x524 = 31808145;
	volatile int64_t t112 = -784996296LL;

    t112 = (x521&(x522/(x523+x524)));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x525 = 2LL;
	uint64_t x526 = UINT64_MAX;
	static volatile int16_t x527 = INT16_MIN;
	static volatile uint64_t t113 = 12LLU;

    t113 = (x525&(x526/(x527+x528)));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x529 = -1;
	uint8_t x530 = 80U;
	int8_t x531 = INT8_MIN;
	volatile uint32_t x532 = 677338551U;
	static volatile uint32_t t114 = 1020157673U;

    t114 = (x529&(x530/(x531+x532)));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x534 = INT16_MIN;
	static volatile int32_t x536 = INT32_MAX;
	int32_t t115 = -165722096;

    t115 = (x533&(x534/(x535+x536)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x537 = 21U;
	static volatile uint8_t x539 = 36U;
	int8_t x540 = INT8_MIN;
	int32_t t116 = 92279;

    t116 = (x537&(x538/(x539+x540)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x546 = -1011037471075LL;
	int16_t x547 = -13741;
	uint32_t x548 = UINT32_MAX;
	volatile int64_t t117 = 5066443270988553LL;

    t117 = (x545&(x546/(x547+x548)));

    if (t117 != -32768LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x549 = INT64_MIN;
	int64_t x550 = -1LL;
	uint32_t x551 = 11109015U;
	int8_t x552 = INT8_MAX;
	volatile int64_t t118 = -5522119474LL;

    t118 = (x549&(x550/(x551+x552)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x554 = 8;
	uint8_t x555 = UINT8_MAX;
	int16_t x556 = -7133;

    t119 = (x553&(x554/(x555+x556)));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x558 = INT16_MIN;
	int32_t x559 = INT32_MIN;
	uint32_t x560 = 6871080U;
	volatile uint32_t t120 = 29899U;

    t120 = (x557&(x558/(x559+x560)));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x561 = -1;
	uint64_t x563 = UINT64_MAX;
	int64_t x564 = 6LL;
	uint64_t t121 = 0LLU;

    t121 = (x561&(x562/(x563+x564)));

    if (t121 != 3689348814741910297LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x566 = INT64_MAX;
	uint32_t x567 = 1089326608U;
	static int16_t x568 = 0;
	int64_t t122 = 3814547LL;

    t122 = (x565&(x566/(x567+x568)));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint8_t x573 = UINT8_MAX;
	static int16_t x574 = 0;
	volatile int8_t x575 = INT8_MIN;
	uint64_t x576 = 966083184586943LLU;
	uint64_t t123 = 9764074812959219LLU;

    t123 = (x573&(x574/(x575+x576)));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x577 = INT32_MAX;
	int32_t x579 = -122;
	static volatile int32_t t124 = 88849067;

    t124 = (x577&(x578/(x579+x580)));

    if (t124 != 2) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x581 = INT64_MIN;
	int32_t x582 = -1;
	uint32_t x584 = 242231623U;
	int64_t t125 = 4609250LL;

    t125 = (x581&(x582/(x583+x584)));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x585 = 113061206U;
	static uint64_t x586 = 42155834405LLU;
	static int8_t x587 = INT8_MIN;
	volatile int8_t x588 = -1;
	volatile uint64_t t126 = 4072590622431021LLU;

    t126 = (x585&(x586/(x587+x588)));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x589 = -1;
	static volatile uint8_t x590 = 55U;
	int64_t x591 = -35731LL;
	volatile int16_t x592 = INT16_MIN;
	int64_t t127 = -1281049960348381013LL;

    t127 = (x589&(x590/(x591+x592)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x596 = INT32_MAX;
	volatile uint64_t t128 = 581471468272LLU;

    t128 = (x593&(x594/(x595+x596)));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x598 = INT64_MAX;
	uint8_t x599 = 50U;
	static uint32_t x600 = UINT32_MAX;
	int64_t t129 = 229790937777037585LL;

    t129 = (x597&(x598/(x599+x600)));

    if (t129 != 33LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x601 = 81162782LL;
	int8_t x602 = INT8_MIN;
	int32_t x603 = -1;
	static volatile int64_t t130 = 99539010734LL;

    t130 = (x601&(x602/(x603+x604)));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x609 = 27;
	volatile int8_t x610 = INT8_MIN;
	int8_t x611 = INT8_MIN;
	int16_t x612 = -5855;
	static volatile int32_t t131 = -29;

    t131 = (x609&(x610/(x611+x612)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x615 = 17697U;
	int16_t x616 = INT16_MIN;
	int32_t t132 = -73;

    t132 = (x613&(x614/(x615+x616)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x617 = 50303U;
	int32_t x620 = INT32_MIN;
	volatile uint32_t t133 = 5U;

    t133 = (x617&(x618/(x619+x620)));

    if (t133 != 1U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x625 = INT64_MAX;
	static uint8_t x626 = 3U;
	uint8_t x627 = UINT8_MAX;
	uint64_t x628 = 2316938832445945LLU;
	uint64_t t134 = 2412979057886LLU;

    t134 = (x625&(x626/(x627+x628)));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x629 = 0;
	static int16_t x631 = -28;
	static volatile uint64_t t135 = 6LLU;

    t135 = (x629&(x630/(x631+x632)));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x633 = INT16_MIN;
	static uint32_t x634 = UINT32_MAX;
	int16_t x635 = 1;
	int16_t x636 = INT16_MIN;
	uint32_t t136 = 369133U;

    t136 = (x633&(x634/(x635+x636)));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x637 = 149389065LL;
	volatile int8_t x638 = INT8_MIN;
	int32_t x639 = INT32_MIN;
	volatile int64_t t137 = 205LL;

    t137 = (x637&(x638/(x639+x640)));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x641 = 11658U;
	int8_t x642 = INT8_MIN;
	int64_t x643 = 1LL;
	int16_t x644 = -4616;
	static int64_t t138 = -63567230028373LL;

    t138 = (x641&(x642/(x643+x644)));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x645 = UINT8_MAX;
	int64_t x646 = -1LL;
	int64_t x647 = -20661LL;
	volatile uint8_t x648 = 2U;

    t139 = (x645&(x646/(x647+x648)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int8_t x649 = INT8_MAX;
	static int8_t x650 = INT8_MIN;
	uint16_t x651 = UINT16_MAX;
	uint8_t x652 = 2U;
	volatile int32_t t140 = -2358291;

    t140 = (x649&(x650/(x651+x652)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x655 = INT64_MAX;

    t141 = (x653&(x654/(x655+x656)));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x657 = INT8_MIN;
	uint64_t x659 = UINT64_MAX;
	int64_t x660 = -1LL;
	volatile uint64_t t142 = 103005513LLU;

    t142 = (x657&(x658/(x659+x660)));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x661 = 1;
	uint8_t x662 = 9U;
	int64_t x664 = -6089597461LL;
	int64_t t143 = 2LL;

    t143 = (x661&(x662/(x663+x664)));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x666 = -2;
	static volatile int64_t x667 = 1756722718737LL;
	int64_t x668 = INT64_MIN;
	volatile int64_t t144 = -117316LL;

    t144 = (x665&(x666/(x667+x668)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x673 = INT16_MIN;
	uint8_t x674 = 29U;
	int64_t t145 = -17857497LL;

    t145 = (x673&(x674/(x675+x676)));

    if (t145 != -32768LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x677 = 2717983;
	uint16_t x678 = 1U;
	int16_t x680 = -814;
	volatile int32_t t146 = -1829270;

    t146 = (x677&(x678/(x679+x680)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x681 = INT8_MIN;
	int16_t x683 = INT16_MIN;
	int32_t t147 = 121202;

    t147 = (x681&(x682/(x683+x684)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x685 = -110872670LL;
	static int16_t x686 = INT16_MAX;
	int64_t t148 = -2066613LL;

    t148 = (x685&(x686/(x687+x688)));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x689 = 303U;
	int32_t x690 = INT32_MAX;
	volatile int16_t x691 = INT16_MAX;
	volatile uint64_t x692 = UINT64_MAX;

    t149 = (x689&(x690/(x691+x692)));

    if (t149 != 4LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x697 = INT8_MIN;
	volatile int64_t x698 = 120738461642LL;
	volatile int16_t x699 = 7267;
	static volatile uint16_t x700 = 3085U;
	int64_t t150 = -9003LL;

    t150 = (x697&(x698/(x699+x700)));

    if (t150 != 11663232LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x701 = INT32_MIN;
	static volatile int8_t x702 = 46;
	volatile uint64_t x703 = UINT64_MAX;
	volatile int16_t x704 = INT16_MIN;
	static volatile uint64_t t151 = 4499LLU;

    t151 = (x701&(x702/(x703+x704)));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x705 = 11566U;
	int64_t x706 = -1LL;
	int32_t x707 = INT32_MIN;
	uint64_t x708 = 12774LLU;
	uint64_t t152 = 559080LLU;

    t152 = (x705&(x706/(x707+x708)));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x709 = 3831100U;
	static uint64_t x710 = 50438274LLU;
	static uint16_t x711 = 2732U;
	int64_t x712 = -2LL;
	static volatile uint64_t t153 = 235513008471946379LLU;

    t153 = (x709&(x710/(x711+x712)));

    if (t153 != 16424LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x713 = 1;
	static volatile int64_t x714 = -9836068751582868LL;
	uint64_t x715 = 1972279017018921727LLU;
	int8_t x716 = 0;
	uint64_t t154 = 34LLU;

    t154 = (x713&(x714/(x715+x716)));

    if (t154 != 1LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x717 = 11U;
	int16_t x718 = 14;
	static volatile int32_t x719 = INT32_MIN;
	int8_t x720 = 15;
	int32_t t155 = -859492887;

    t155 = (x717&(x718/(x719+x720)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x722 = INT32_MAX;
	static uint16_t x723 = 14U;
	uint16_t x724 = 4U;
	volatile int64_t t156 = 2288028918498LL;

    t156 = (x721&(x722/(x723+x724)));

    if (t156 != 119304647LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x725 = 28U;
	int64_t x726 = 11491LL;
	static int32_t x727 = INT32_MAX;
	uint32_t x728 = 413028U;
	int64_t t157 = 207LL;

    t157 = (x725&(x726/(x727+x728)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x729 = INT64_MAX;
	uint8_t x730 = 0U;
	int8_t x731 = -1;
	uint64_t x732 = 2266LLU;
	volatile uint64_t t158 = 1837655557285377727LLU;

    t158 = (x729&(x730/(x731+x732)));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x733 = 73U;
	volatile uint64_t x734 = UINT64_MAX;
	static int64_t x736 = INT64_MIN;

    t159 = (x733&(x734/(x735+x736)));

    if (t159 != 1LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x737 = INT8_MIN;
	uint16_t x739 = 14U;
	int32_t x740 = 227127;
	int64_t t160 = 78309513175282LL;

    t160 = (x737&(x738/(x739+x740)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x741 = 3170U;
	static int16_t x742 = INT16_MAX;
	uint64_t x743 = UINT64_MAX;
	volatile int32_t x744 = INT32_MIN;
	static volatile uint64_t t161 = 1328226190LLU;

    t161 = (x741&(x742/(x743+x744)));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x745 = INT16_MIN;
	int64_t x746 = 93659658946347LL;
	int16_t x747 = 113;
	int16_t x748 = INT16_MAX;

    t162 = (x745&(x746/(x747+x748)));

    if (t162 != 2848522240LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x749 = -1255;
	int64_t x750 = -7LL;
	int8_t x751 = -47;
	volatile uint8_t x752 = 6U;
	volatile int64_t t163 = -505161286957LL;

    t163 = (x749&(x750/(x751+x752)));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x753 = 4241U;
	uint32_t x754 = UINT32_MAX;
	int64_t x755 = 652871537865364992LL;
	static int64_t x756 = -409364287LL;
	int64_t t164 = 6584LL;

    t164 = (x753&(x754/(x755+x756)));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x765 = UINT32_MAX;
	uint32_t x766 = 759U;
	static int64_t x768 = -1LL;
	static int64_t t165 = -59210888026504LL;

    t165 = (x765&(x766/(x767+x768)));

    if (t165 != 4294967188LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x770 = INT8_MAX;
	int8_t x771 = INT8_MAX;
	uint64_t x772 = 18LLU;
	volatile uint64_t t166 = 436LLU;

    t166 = (x769&(x770/(x771+x772)));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x773 = INT16_MAX;
	int32_t x774 = INT32_MAX;
	int16_t x775 = INT16_MIN;
	int16_t x776 = -1;
	volatile int32_t t167 = 1;

    t167 = (x773&(x774/(x775+x776)));

    if (t167 != 2) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x778 = 11470937622LLU;
	static int32_t x779 = 3;
	volatile uint64_t t168 = 105205436514970LLU;

    t168 = (x777&(x778/(x779+x780)));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x781 = 58U;
	volatile int64_t x782 = INT64_MIN;
	int8_t x783 = -1;
	int16_t x784 = -1;

    t169 = (x781&(x782/(x783+x784)));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x785 = 1;
	volatile int32_t x786 = -389803;
	static uint8_t x787 = 101U;
	static int16_t x788 = INT16_MIN;
	static int32_t t170 = 217146031;

    t170 = (x785&(x786/(x787+x788)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x789 = 3904U;
	uint16_t x790 = 31U;
	volatile uint16_t x791 = 46U;
	int8_t x792 = INT8_MAX;
	volatile int32_t t171 = -22350019;

    t171 = (x789&(x790/(x791+x792)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x797 = UINT16_MAX;
	int8_t x798 = 45;
	int16_t x799 = -1;
	volatile int32_t x800 = 586;
	static volatile int32_t t172 = 48911119;

    t172 = (x797&(x798/(x799+x800)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x801 = 4462072226LLU;
	volatile int64_t x802 = -96606731102351LL;
	static int8_t x804 = -6;
	volatile uint64_t t173 = 2648103918LLU;

    t173 = (x801&(x802/(x803+x804)));

    if (t173 != 4439707936LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x805 = 1;
	static int32_t x806 = 84754002;
	int16_t x807 = INT16_MIN;
	static int16_t x808 = -58;
	static volatile int32_t t174 = 399150;

    t174 = (x805&(x806/(x807+x808)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x809 = 2128U;
	int8_t x810 = INT8_MAX;
	static uint64_t x811 = 75000239648LLU;
	int16_t x812 = -1;
	uint64_t t175 = 1613767895994190304LLU;

    t175 = (x809&(x810/(x811+x812)));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x813 = 1U;
	int32_t x814 = INT32_MAX;
	uint8_t x816 = UINT8_MAX;
	volatile int32_t t176 = 61;

    t176 = (x813&(x814/(x815+x816)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x822 = INT16_MAX;
	int8_t x823 = INT8_MAX;
	int16_t x824 = INT16_MIN;
	int32_t t177 = 743;

    t177 = (x821&(x822/(x823+x824)));

    if (t177 != -128) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x825 = -1LL;
	int64_t x826 = -123072955113295LL;
	int8_t x827 = INT8_MIN;
	int16_t x828 = INT16_MAX;

    t178 = (x825&(x826/(x827+x828)));

    if (t178 != -3770733022LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x829 = 241084947304LLU;
	uint32_t x830 = UINT32_MAX;
	static uint16_t x831 = UINT16_MAX;
	int64_t x832 = -1LL;
	volatile uint64_t t179 = 6250477988175352LLU;

    t179 = (x829&(x830/(x831+x832)));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x833 = -1;
	uint32_t x834 = 2152025U;
	uint16_t x835 = UINT16_MAX;
	uint32_t x836 = 486940494U;
	volatile uint32_t t180 = 13055511U;

    t180 = (x833&(x834/(x835+x836)));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x838 = 16U;
	int32_t x839 = INT32_MAX;
	uint64_t x840 = 5828LLU;
	volatile uint64_t t181 = 71902863159855651LLU;

    t181 = (x837&(x838/(x839+x840)));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x841 = UINT32_MAX;
	int16_t x842 = 12698;
	int16_t x843 = INT16_MAX;
	static volatile uint32_t x844 = 896935U;

    t182 = (x841&(x842/(x843+x844)));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x845 = INT8_MAX;
	int64_t x846 = 1LL;
	int32_t x847 = -1;
	int64_t x848 = INT64_MAX;
	volatile int64_t t183 = 304226597833057LL;

    t183 = (x845&(x846/(x847+x848)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x849 = -1;
	volatile int16_t x851 = INT16_MAX;
	static uint64_t x852 = 11438918LLU;
	uint64_t t184 = 1992LLU;

    t184 = (x849&(x850/(x851+x852)));

    if (t184 != 374LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x853 = 76097545U;
	static int8_t x854 = INT8_MAX;
	static uint32_t t185 = 60629U;

    t185 = (x853&(x854/(x855+x856)));

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x866 = UINT64_MAX;
	int64_t x867 = -1LL;
	uint64_t t186 = 21809LLU;

    t186 = (x865&(x866/(x867+x868)));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x870 = INT32_MIN;
	uint8_t x871 = 7U;
	static int32_t x872 = -111;

    t187 = (x869&(x870/(x871+x872)));

    if (t187 != 20648881) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x873 = INT8_MIN;
	int8_t x874 = 1;
	uint16_t x876 = UINT16_MAX;
	volatile int32_t t188 = -2533;

    t188 = (x873&(x874/(x875+x876)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x877 = -1;
	int8_t x878 = INT8_MAX;
	uint8_t x879 = UINT8_MAX;
	static int8_t x880 = INT8_MAX;

    t189 = (x877&(x878/(x879+x880)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x889 = INT32_MAX;
	static int16_t x891 = INT16_MIN;
	static volatile int8_t x892 = 0;

    t190 = (x889&(x890/(x891+x892)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x897 = 45108146U;
	uint8_t x898 = 10U;
	volatile uint8_t x899 = 121U;
	static uint64_t t191 = 208818493604438LLU;

    t191 = (x897&(x898/(x899+x900)));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x901 = 47U;
	int32_t x902 = 25517990;
	int64_t x903 = -1LL;
	uint32_t x904 = 255218074U;
	int64_t t192 = 94391270474062LL;

    t192 = (x901&(x902/(x903+x904)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x905 = -3380561954141LL;
	static int64_t x906 = INT64_MIN;
	uint16_t x907 = 5755U;
	static int8_t x908 = INT8_MAX;
	int64_t t193 = -941494345461393LL;

    t193 = (x905&(x906/(x907+x908)));

    if (t193 != -1569240275873150LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x909 = -1;
	static volatile int64_t x910 = -1LL;
	uint16_t x911 = 102U;
	int16_t x912 = -278;
	int64_t t194 = -6055LL;

    t194 = (x909&(x910/(x911+x912)));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x913 = UINT32_MAX;
	int64_t x914 = 4LL;
	uint8_t x915 = UINT8_MAX;
	int64_t x916 = INT64_MIN;
	volatile int64_t t195 = -214LL;

    t195 = (x913&(x914/(x915+x916)));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x918 = 1U;
	static volatile int8_t x919 = INT8_MIN;
	uint16_t x920 = UINT16_MAX;

    t196 = (x917&(x918/(x919+x920)));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x925 = UINT16_MAX;
	int32_t x926 = -3;
	int64_t x927 = -2385829082169143LL;
	uint8_t x928 = 1U;
	volatile int64_t t197 = 601LL;

    t197 = (x925&(x926/(x927+x928)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x929 = 0U;
	int32_t x930 = -69950556;
	uint32_t x931 = UINT32_MAX;
	static volatile uint32_t x932 = 618U;
	volatile uint32_t t198 = 44486U;

    t198 = (x929&(x930/(x931+x932)));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x933 = UINT16_MAX;
	static volatile uint64_t x935 = UINT64_MAX;
	uint64_t t199 = 155LLU;

    t199 = (x933&(x934/(x935+x936)));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

