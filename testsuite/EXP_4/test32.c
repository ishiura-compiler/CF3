
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

uint16_t x31 = 222U;
int8_t x36 = -1;
uint8_t x38 = 2U;
int8_t x39 = INT8_MAX;
int8_t x44 = -1;
volatile int8_t x51 = -1;
uint16_t x52 = UINT16_MAX;
uint8_t x61 = 15U;
static int8_t x63 = INT8_MIN;
static volatile int32_t t10 = -174258;
int32_t x93 = INT32_MIN;
static int32_t x110 = -1;
static uint64_t t15 = 648LLU;
int64_t x125 = INT64_MAX;
int32_t x128 = INT32_MIN;
int64_t x135 = INT64_MIN;
static int8_t x138 = -1;
uint64_t x141 = 1973LLU;
uint8_t x142 = UINT8_MAX;
int8_t x143 = 0;
int16_t x153 = -6;
volatile uint32_t t23 = 1U;
int32_t t24 = -1;
uint64_t x175 = 663650811060LLU;
uint32_t x178 = 509U;
uint32_t x188 = 1190U;
volatile int32_t x193 = -119017;
int16_t x196 = INT16_MAX;
static uint64_t t29 = 26861LLU;
static uint32_t x198 = 2U;
uint64_t t30 = 14578896607LLU;
volatile uint64_t t31 = 528657979463LLU;
volatile uint32_t x212 = 25U;
volatile int64_t x214 = -26399341315LL;
int16_t x217 = INT16_MAX;
int8_t x227 = INT8_MIN;
static int16_t x228 = 16;
static int32_t x235 = 2060191;
volatile uint64_t x243 = 390108817047416LLU;
int16_t x267 = -10903;
int16_t x273 = INT16_MIN;
uint16_t x283 = 6956U;
uint64_t x293 = UINT64_MAX;
static int8_t x310 = INT8_MIN;
static int64_t x314 = -1LL;
volatile int8_t x317 = -18;
int8_t x318 = 1;
volatile uint16_t x319 = UINT16_MAX;
int8_t x326 = INT8_MIN;
volatile uint16_t x339 = 1U;
int32_t x340 = INT32_MIN;
int32_t x341 = 17217;
uint64_t x345 = UINT64_MAX;
volatile uint64_t t57 = 18035181LLU;
int16_t x354 = -2;
static uint16_t x355 = UINT16_MAX;
volatile uint32_t x376 = UINT32_MAX;
uint32_t x380 = 460672830U;
static volatile int64_t x390 = -1LL;
int16_t x392 = -1;
int64_t t62 = -121063LL;
volatile int64_t t63 = 2395619350LL;
volatile uint8_t x403 = 2U;
volatile int32_t t67 = -6732621;
uint64_t t69 = 481796850LLU;
static uint16_t x456 = UINT16_MAX;
int64_t x466 = -1LL;
uint64_t t74 = 533595050634LLU;
int32_t x481 = 46331491;
int32_t t76 = 217071320;
uint64_t x485 = 2960754540669LLU;
volatile uint64_t t77 = 339240477629568902LLU;
volatile uint16_t x498 = UINT16_MAX;
uint8_t x499 = 0U;
static uint32_t t82 = 1953U;
static int8_t x521 = -52;
volatile int64_t x524 = INT64_MAX;
int16_t x525 = INT16_MIN;
int32_t x526 = 52;
static volatile int8_t x528 = -42;
static volatile int32_t t84 = 5614703;
volatile uint16_t x530 = 12U;
static int8_t x533 = INT8_MIN;
int16_t x547 = INT16_MAX;
uint32_t t88 = 8182584U;
static int32_t x553 = INT32_MIN;
uint16_t x556 = 12904U;
volatile int32_t t90 = -1367873;
uint64_t t91 = 971LLU;
int16_t x582 = -1;
uint64_t t99 = 73262881677618LLU;
volatile uint32_t t102 = 20416211U;
int64_t x626 = -1LL;
int16_t x629 = -1;
int8_t x635 = INT8_MIN;
static volatile int64_t x637 = INT64_MIN;
static int64_t x640 = INT64_MAX;
uint16_t x651 = 7U;
uint16_t x657 = UINT16_MAX;
int8_t x659 = INT8_MAX;
volatile int64_t t109 = -1LL;
uint32_t x663 = UINT32_MAX;
volatile int32_t x665 = -242796610;
volatile int64_t x666 = 15348409123517LL;
int16_t x675 = INT16_MIN;
uint16_t x679 = 10U;
volatile int32_t t114 = 245;
int64_t x683 = INT64_MAX;
volatile int16_t x724 = INT16_MAX;
static int16_t x727 = INT16_MAX;
static uint64_t x728 = 11621180554693LLU;
uint64_t x740 = UINT64_MAX;
static int16_t x747 = INT16_MIN;
int64_t x750 = -1835144651LL;
volatile int32_t x751 = 63069;
int64_t x753 = 84538LL;
volatile int32_t x756 = 978430519;
volatile int8_t x762 = INT8_MIN;
int16_t x768 = -1;
volatile int32_t t126 = 16819;
uint16_t x784 = UINT16_MAX;
int64_t x801 = INT64_MAX;
int64_t x805 = INT64_MAX;
int32_t x811 = INT32_MIN;
int64_t x813 = INT64_MAX;
static volatile int64_t t134 = 7811LL;
static volatile int64_t x828 = INT64_MIN;
volatile uint64_t t136 = 0LLU;
uint32_t x830 = 749502U;
static int32_t t138 = -195;
static int16_t x843 = INT16_MAX;
static int8_t x845 = 29;
volatile int16_t x849 = INT16_MIN;
volatile int32_t t141 = 106591;
volatile int8_t x855 = INT8_MAX;
int64_t x860 = 101126846182985LL;
int64_t x864 = -1LL;
static volatile int64_t t144 = -4429147193417278468LL;
int64_t x866 = -1LL;
static int8_t x869 = INT8_MIN;
uint16_t x871 = 51U;
volatile int8_t x874 = 3;
volatile int32_t t147 = 4210688;
static int32_t x896 = -1;
uint16_t x903 = UINT16_MAX;
uint32_t x907 = UINT32_MAX;
uint32_t x911 = UINT32_MAX;
int64_t x913 = INT64_MAX;
volatile int64_t x934 = 117222LL;
static int8_t x937 = INT8_MAX;
uint64_t x951 = 17956936620349LLU;
int32_t t159 = 55234634;
int64_t x961 = 22LL;
uint8_t x966 = UINT8_MAX;
uint8_t x974 = UINT8_MAX;
volatile int16_t x976 = 16;
int32_t x978 = 256;
uint64_t x980 = 7514243898LLU;
uint32_t x992 = UINT32_MAX;
int8_t x1015 = -1;
static int16_t x1022 = -1;
uint8_t x1070 = UINT8_MAX;
int8_t x1071 = INT8_MIN;
int16_t x1072 = INT16_MIN;
uint8_t x1078 = UINT8_MAX;
int8_t x1085 = 0;
uint64_t x1088 = 463LLU;
int32_t x1098 = -1;
static int8_t x1099 = 15;
uint64_t x1106 = 972405LLU;
volatile uint64_t t181 = 96LLU;
int8_t x1113 = -1;
volatile int64_t t185 = -1923413207683883441LL;
uint32_t x1137 = UINT32_MAX;
static volatile uint32_t x1139 = 13466364U;
int8_t x1142 = INT8_MIN;
static uint64_t t188 = 26032093LLU;
uint8_t x1157 = UINT8_MAX;
static int32_t x1158 = INT32_MAX;
uint64_t x1166 = UINT64_MAX;
uint64_t t191 = 787846697889LLU;
static uint8_t x1174 = 6U;
uint64_t x1176 = UINT64_MAX;
uint64_t t193 = 57554284LLU;
static int64_t x1187 = 2287LL;
static int16_t x1190 = -1;
int16_t x1207 = -1;
static int16_t x1208 = INT16_MIN;


void f0(void) {
    	uint64_t x5 = UINT64_MAX;
	int8_t x6 = INT8_MIN;
	static uint8_t x7 = 7U;
	uint16_t x8 = UINT16_MAX;
	uint64_t t0 = 1436074LLU;

    t0 = (x5/(x6*(x7+x8)));

    if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = INT64_MIN;
	int32_t x10 = -6369593;
	int32_t x11 = -1;
	uint16_t x12 = 109U;
	int64_t t1 = -5162614LL;

    t1 = (x9/(x10*(x11+x12)));

    if (t1 != 13407700136LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x21 = 46U;
	static int32_t x22 = 205361;
	uint32_t x23 = 3U;
	int8_t x24 = INT8_MIN;
	uint32_t t2 = 7U;

    t2 = (x21/(x22*(x23+x24)));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x29 = INT16_MIN;
	int8_t x30 = INT8_MIN;
	static uint64_t x32 = 1019546297420298993LLU;
	static volatile uint64_t t3 = 112901486284833007LLU;

    t3 = (x29/(x30*(x31+x32)));

    if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x33 = 2;
	static uint16_t x34 = 10U;
	static int8_t x35 = -1;
	int32_t t4 = 35;

    t4 = (x33/(x34*(x35+x36)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x37 = INT8_MAX;
	uint8_t x40 = UINT8_MAX;
	static volatile int32_t t5 = -3627;

    t5 = (x37/(x38*(x39+x40)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x41 = 583;
	volatile int8_t x42 = -5;
	int64_t x43 = -6683397148466567LL;
	static int64_t t6 = 29772505951628LL;

    t6 = (x41/(x42*(x43+x44)));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint32_t x49 = 21120006U;
	volatile uint8_t x50 = 18U;
	uint32_t t7 = 45982U;

    t7 = (x49/(x50*(x51+x52)));

    if (t7 != 17U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x62 = 1;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t8 = 96;

    t8 = (x61/(x62*(x63+x64)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x65 = 12943U;
	uint32_t x66 = 1419026U;
	int8_t x67 = -45;
	int32_t x68 = -1;
	static uint32_t t9 = 20433457U;

    t9 = (x65/(x66*(x67+x68)));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x69 = 137;
	uint8_t x70 = 82U;
	int16_t x71 = INT16_MIN;
	volatile int8_t x72 = INT8_MIN;

    t10 = (x69/(x70*(x71+x72)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x73 = INT8_MIN;
	int8_t x74 = INT8_MIN;
	uint32_t x75 = 27991U;
	int8_t x76 = 0;
	volatile uint32_t t11 = 178561867U;

    t11 = (x73/(x74*(x75+x76)));

    if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x81 = -1500957047663LL;
	int32_t x82 = 11409;
	uint64_t x83 = UINT64_MAX;
	uint8_t x84 = 24U;
	uint64_t t12 = 22358191LLU;

    t12 = (x81/(x82*(x83+x84)));

    if (t12 != 70298210690844LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x94 = INT32_MIN;
	int64_t x95 = -3LL;
	int8_t x96 = -1;
	static int64_t t13 = -9787173493LL;

    t13 = (x93/(x94*(x95+x96)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x109 = INT16_MIN;
	int64_t x111 = -265425078552LL;
	uint32_t x112 = 1565557U;
	static int64_t t14 = 266743177928138574LL;

    t14 = (x109/(x110*(x111+x112)));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x113 = 671438LLU;
	uint16_t x114 = 5U;
	int64_t x115 = -3LL;
	uint64_t x116 = 20921649696365594LLU;

    t15 = (x113/(x114*(x115+x116)));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x126 = -1;
	int64_t x127 = -1LL;
	int64_t t16 = -243320628335181144LL;

    t16 = (x125/(x126*(x127+x128)));

    if (t16 != 4294967294LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x129 = INT8_MAX;
	int16_t x130 = -1;
	int16_t x131 = -1;
	int8_t x132 = INT8_MIN;
	volatile int32_t t17 = 44911;

    t17 = (x129/(x130*(x131+x132)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x133 = 11U;
	uint64_t x134 = 24282337181341779LLU;
	uint64_t x136 = 142624461815953LLU;
	static uint64_t t18 = 367790LLU;

    t18 = (x133/(x134*(x135+x136)));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x137 = 39U;
	uint32_t x139 = 404934920U;
	int32_t x140 = INT32_MAX;
	volatile uint32_t t19 = 21909U;

    t19 = (x137/(x138*(x139+x140)));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x144 = 159016673U;
	static volatile uint64_t t20 = 21010LLU;

    t20 = (x141/(x142*(x143+x144)));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x145 = 6;
	static volatile int8_t x146 = -40;
	static uint8_t x147 = 28U;
	uint32_t x148 = 26357947U;
	uint32_t t21 = 7U;

    t21 = (x145/(x146*(x147+x148)));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x154 = 2;
	int8_t x155 = -12;
	int8_t x156 = 1;
	int32_t t22 = 531221;

    t22 = (x153/(x154*(x155+x156)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x157 = 30U;
	static int32_t x158 = INT32_MIN;
	uint32_t x159 = 516433U;
	static int8_t x160 = INT8_MIN;

    t23 = (x157/(x158*(x159+x160)));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x161 = 4;
	static volatile int8_t x162 = INT8_MAX;
	static int8_t x163 = INT8_MAX;
	int32_t x164 = -157;

    t24 = (x161/(x162*(x163+x164)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x173 = 643U;
	int64_t x174 = INT64_MIN;
	uint16_t x176 = UINT16_MAX;
	static volatile uint64_t t25 = 29134865065305390LLU;

    t25 = (x173/(x174*(x175+x176)));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x177 = -1;
	static int64_t x179 = -1LL;
	int64_t x180 = -1LL;
	volatile int64_t t26 = -652024547LL;

    t26 = (x177/(x178*(x179+x180)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x185 = INT32_MIN;
	volatile int16_t x186 = -1;
	int16_t x187 = INT16_MIN;
	volatile uint32_t t27 = 243U;

    t27 = (x185/(x186*(x187+x188)));

    if (t27 != 68005U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x189 = -4;
	uint8_t x190 = UINT8_MAX;
	volatile uint8_t x191 = UINT8_MAX;
	static uint64_t x192 = 239LLU;
	volatile uint64_t t28 = 31376817014019005LLU;

    t28 = (x189/(x190*(x191+x192)));

    if (t28 != 146437596838211LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x194 = UINT64_MAX;
	int32_t x195 = INT32_MIN;

    t29 = (x193/(x194*(x195+x196)));

    if (t29 != 8590065661LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x197 = UINT32_MAX;
	uint64_t x199 = UINT64_MAX;
	uint32_t x200 = UINT32_MAX;

    t30 = (x197/(x198*(x199+x200)));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x205 = INT32_MIN;
	volatile uint64_t x206 = 1719375172LLU;
	uint32_t x207 = UINT32_MAX;
	uint16_t x208 = 22U;

    t31 = (x205/(x206*(x207+x208)));

    if (t31 != 510892793LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x209 = 522;
	volatile int8_t x210 = INT8_MAX;
	int64_t x211 = -91688807836770LL;
	int64_t t32 = 50340052044LL;

    t32 = (x209/(x210*(x211+x212)));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x213 = 53U;
	volatile int16_t x215 = 8;
	volatile uint32_t x216 = 195U;
	int64_t t33 = 92937934980207767LL;

    t33 = (x213/(x214*(x215+x216)));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x218 = -1;
	uint32_t x219 = 4U;
	static int64_t x220 = INT64_MIN;
	int64_t t34 = -696704LL;

    t34 = (x217/(x218*(x219+x220)));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x221 = 1342961904260812411LLU;
	int32_t x222 = INT32_MIN;
	uint32_t x223 = 49259952U;
	uint32_t x224 = 26180921U;
	static volatile uint64_t t35 = 32309754LLU;

    t35 = (x221/(x222*(x223+x224)));

    if (t35 != 625365369LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x225 = 492U;
	volatile int32_t x226 = -1;
	uint32_t t36 = 5284644U;

    t36 = (x225/(x226*(x227+x228)));

    if (t36 != 4U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x229 = 1784837215U;
	volatile uint32_t x230 = UINT32_MAX;
	int16_t x231 = 1;
	uint16_t x232 = 1133U;
	uint32_t t37 = 474704808U;

    t37 = (x229/(x230*(x231+x232)));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int64_t x233 = -195LL;
	static int32_t x234 = -1;
	static volatile int8_t x236 = 7;
	int64_t t38 = -46315360732185534LL;

    t38 = (x233/(x234*(x235+x236)));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x241 = INT32_MAX;
	uint16_t x242 = UINT16_MAX;
	int16_t x244 = 1870;
	uint64_t t39 = 374572708LLU;

    t39 = (x241/(x242*(x243+x244)));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x253 = -1;
	int8_t x254 = -1;
	static volatile int32_t x255 = INT32_MIN;
	int64_t x256 = INT64_MAX;
	volatile int64_t t40 = -56885LL;

    t40 = (x253/(x254*(x255+x256)));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x257 = 94180U;
	volatile int64_t x258 = -6479262820LL;
	int8_t x259 = -43;
	int16_t x260 = INT16_MIN;
	volatile int64_t t41 = -740745927677002872LL;

    t41 = (x257/(x258*(x259+x260)));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MIN;
	int16_t x268 = INT16_MAX;
	volatile int32_t t42 = 1;

    t42 = (x265/(x266*(x267+x268)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x274 = -3447;
	int16_t x275 = -1;
	int8_t x276 = INT8_MIN;
	int32_t t43 = -1;

    t43 = (x273/(x274*(x275+x276)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x281 = UINT8_MAX;
	volatile int16_t x282 = INT16_MIN;
	volatile int8_t x284 = INT8_MIN;
	int32_t t44 = 95240334;

    t44 = (x281/(x282*(x283+x284)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x285 = UINT64_MAX;
	int32_t x286 = INT32_MIN;
	static int16_t x287 = INT16_MIN;
	static uint64_t x288 = 1200936659322903960LLU;
	static uint64_t t45 = 3LLU;

    t45 = (x285/(x286*(x287+x288)));

    if (t45 != 3LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x294 = UINT16_MAX;
	int64_t x295 = -1LL;
	volatile int64_t x296 = 292427LL;
	volatile uint64_t t46 = 8128LLU;

    t46 = (x293/(x294*(x295+x296)));

    if (t46 != 962565817LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x305 = -1;
	volatile int32_t x306 = -1;
	static uint64_t x307 = 1193399004LLU;
	static int64_t x308 = INT64_MIN;
	uint64_t t47 = 797771510LLU;

    t47 = (x305/(x306*(x307+x308)));

    if (t47 != 2LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x309 = -1;
	uint32_t x311 = 1216469U;
	int32_t x312 = INT32_MAX;
	uint32_t t48 = 397801684U;

    t48 = (x309/(x310*(x311+x312)));

    if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x313 = INT32_MIN;
	int8_t x315 = INT8_MIN;
	static volatile uint64_t x316 = UINT64_MAX;
	volatile uint64_t t49 = 21530895LLU;

    t49 = (x313/(x314*(x315+x316)));

    if (t49 != 142998016058620681LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x320 = UINT32_MAX;
	volatile uint32_t t50 = 28075791U;

    t50 = (x317/(x318*(x319+x320)));

    if (t50 != 65537U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x325 = -7;
	uint8_t x327 = UINT8_MAX;
	int16_t x328 = INT16_MIN;
	int32_t t51 = -4;

    t51 = (x325/(x326*(x327+x328)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x329 = 13754884652630816LL;
	volatile int16_t x330 = -15241;
	int32_t x331 = 63;
	uint16_t x332 = UINT16_MAX;
	volatile int64_t t52 = -16221661LL;

    t52 = (x329/(x330*(x331+x332)));

    if (t52 != -13757923LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x333 = -1;
	int16_t x334 = -1;
	uint16_t x335 = UINT16_MAX;
	int32_t x336 = INT32_MIN;
	static volatile int32_t t53 = -169;

    t53 = (x333/(x334*(x335+x336)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x337 = INT32_MIN;
	uint32_t x338 = 222782U;
	uint32_t t54 = 9616U;

    t54 = (x337/(x338*(x339+x340)));

    if (t54 != 9639U) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint16_t x342 = 148U;
	int8_t x343 = INT8_MAX;
	int8_t x344 = -2;
	static int32_t t55 = 26706400;

    t55 = (x341/(x342*(x343+x344)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x346 = 1309102493769740LLU;
	volatile int16_t x347 = INT16_MIN;
	int8_t x348 = -1;
	volatile uint64_t t56 = 633955864799LLU;

    t56 = (x345/(x346*(x347+x348)));

    if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x349 = 48683670LLU;
	uint64_t x350 = 14142201607075LLU;
	int32_t x351 = -1;
	uint8_t x352 = 46U;

    t57 = (x349/(x350*(x351+x352)));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x353 = -486;
	int8_t x356 = INT8_MAX;
	volatile int32_t t58 = 435;

    t58 = (x353/(x354*(x355+x356)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int32_t x361 = INT32_MIN;
	int64_t x362 = INT64_MAX;
	int16_t x363 = 2702;
	volatile uint64_t x364 = UINT64_MAX;
	volatile uint64_t t59 = 310435791159LLU;

    t59 = (x361/(x362*(x363+x364)));

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x373 = 60687545U;
	int16_t x374 = -3982;
	static int64_t x375 = -1LL;
	int64_t t60 = 56750LL;

    t60 = (x373/(x374*(x375+x376)));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x377 = 7971786356204931LLU;
	uint16_t x378 = 16411U;
	int32_t x379 = INT32_MIN;
	volatile uint64_t t61 = 4741238LLU;

    t61 = (x377/(x378*(x379+x380)));

    if (t61 != 2565869LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x389 = -1LL;
	uint8_t x391 = UINT8_MAX;

    t62 = (x389/(x390*(x391+x392)));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x397 = -801292472558397LL;
	uint8_t x398 = 2U;
	uint32_t x399 = 102788U;
	volatile uint32_t x400 = UINT32_MAX;

    t63 = (x397/(x398*(x399+x400)));

    if (t63 != -3897829845LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x401 = 75LL;
	static int16_t x402 = -5;
	int8_t x404 = INT8_MIN;
	volatile int64_t t64 = -33LL;

    t64 = (x401/(x402*(x403+x404)));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x405 = UINT32_MAX;
	volatile int8_t x406 = INT8_MIN;
	uint64_t x407 = 4944527988LLU;
	int16_t x408 = 12;
	volatile uint64_t t65 = 19087LLU;

    t65 = (x405/(x406*(x407+x408)));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x413 = INT8_MIN;
	volatile uint64_t x414 = UINT64_MAX;
	volatile int16_t x415 = 2;
	uint64_t x416 = UINT64_MAX;
	uint64_t t66 = 3230LLU;

    t66 = (x413/(x414*(x415+x416)));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x417 = -1;
	int32_t x418 = 118;
	int32_t x419 = -1;
	int8_t x420 = INT8_MIN;

    t67 = (x417/(x418*(x419+x420)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x421 = INT64_MIN;
	static volatile int32_t x422 = 1;
	uint32_t x423 = UINT32_MAX;
	int64_t x424 = -6524804198908704LL;
	static volatile int64_t t68 = 3536822659LL;

    t68 = (x421/(x422*(x423+x424)));

    if (t68 != 1413LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x425 = 6418455429LLU;
	uint64_t x426 = 2304LLU;
	static int64_t x427 = 1144551134346514813LL;
	static uint32_t x428 = 879U;

    t69 = (x425/(x426*(x427+x428)));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x437 = -1;
	int32_t x438 = -3166973;
	volatile int16_t x439 = -15;
	int16_t x440 = -1;
	volatile int32_t t70 = -278;

    t70 = (x437/(x438*(x439+x440)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x453 = INT64_MIN;
	int32_t x454 = 27324;
	int16_t x455 = 238;
	int64_t t71 = -4223LL;

    t71 = (x453/(x454*(x455+x456)));

    if (t71 != -5132131775LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x457 = 121327;
	uint8_t x458 = 1U;
	int64_t x459 = 23667LL;
	uint16_t x460 = UINT16_MAX;
	int64_t t72 = 8960327LL;

    t72 = (x457/(x458*(x459+x460)));

    if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x465 = 452;
	int64_t x467 = 52970382068715928LL;
	volatile uint16_t x468 = UINT16_MAX;
	int64_t t73 = -222729565520088LL;

    t73 = (x465/(x466*(x467+x468)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x469 = 1576571LLU;
	uint16_t x470 = 393U;
	volatile int8_t x471 = INT8_MAX;
	static int8_t x472 = INT8_MIN;

    t74 = (x469/(x470*(x471+x472)));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x473 = 1637U;
	uint32_t x474 = UINT32_MAX;
	volatile int32_t x475 = -1;
	uint16_t x476 = 21U;
	volatile uint32_t t75 = 2U;

    t75 = (x473/(x474*(x475+x476)));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x482 = -16954;
	int32_t x483 = -1;
	int16_t x484 = INT16_MIN;

    t76 = (x481/(x482*(x483+x484)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x486 = INT16_MIN;
	volatile uint64_t x487 = 6428268LLU;
	volatile int16_t x488 = -1;

    t77 = (x485/(x486*(x487+x488)));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x493 = -107;
	static volatile uint64_t x494 = 7593418367590LLU;
	static int8_t x495 = -1;
	int8_t x496 = INT8_MAX;
	static volatile uint64_t t78 = 3LLU;

    t78 = (x493/(x494*(x495+x496)));

    if (t78 != 19280LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x497 = 38;
	int16_t x500 = INT16_MAX;
	volatile int32_t t79 = 3863;

    t79 = (x497/(x498*(x499+x500)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x501 = UINT16_MAX;
	volatile uint32_t x502 = 10U;
	volatile int32_t x503 = INT32_MIN;
	int8_t x504 = INT8_MAX;
	static uint32_t t80 = 16562460U;

    t80 = (x501/(x502*(x503+x504)));

    if (t80 != 51U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x505 = INT16_MIN;
	volatile int8_t x506 = INT8_MAX;
	volatile int8_t x507 = 52;
	int64_t x508 = -1LL;
	int64_t t81 = -1638948080691673636LL;

    t81 = (x505/(x506*(x507+x508)));

    if (t81 != -5LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x509 = -1;
	uint32_t x510 = 1348847699U;
	uint32_t x511 = UINT32_MAX;
	static uint32_t x512 = 402860981U;

    t82 = (x509/(x510*(x511+x512)));

    if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x522 = INT64_MAX;
	uint64_t x523 = 3LLU;
	static volatile uint64_t t83 = 109885830LLU;

    t83 = (x521/(x522*(x523+x524)));

    if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x527 = INT8_MAX;

    t84 = (x525/(x526*(x527+x528)));

    if (t84 != -7) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x529 = 1934041078073715LLU;
	uint16_t x531 = UINT16_MAX;
	uint32_t x532 = 147374044U;
	volatile uint64_t t85 = 941570234205726739LLU;

    t85 = (x529/(x530*(x531+x532)));

    if (t85 != 1093126LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x534 = -1LL;
	int32_t x535 = 5;
	uint16_t x536 = 240U;
	volatile int64_t t86 = 6449142586LL;

    t86 = (x533/(x534*(x535+x536)));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x541 = INT16_MIN;
	int64_t x542 = INT64_MAX;
	int64_t x543 = INT64_MIN;
	uint64_t x544 = 238904397LLU;
	uint64_t t87 = 2999823LLU;

    t87 = (x541/(x542*(x543+x544)));

    if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x545 = UINT16_MAX;
	volatile int32_t x546 = INT32_MAX;
	uint32_t x548 = UINT32_MAX;

    t88 = (x545/(x546*(x547+x548)));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x554 = 11U;
	int16_t x555 = INT16_MAX;
	static volatile int32_t t89 = -1067862;

    t89 = (x553/(x554*(x555+x556)));

    if (t89 != -4274) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x557 = INT32_MAX;
	int8_t x558 = -30;
	static int8_t x559 = -10;
	uint8_t x560 = 112U;

    t90 = (x557/(x558*(x559+x560)));

    if (t90 != -701792) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x561 = 1U;
	int16_t x562 = -22;
	uint8_t x563 = UINT8_MAX;
	uint64_t x564 = 664381092303LLU;

    t91 = (x561/(x562*(x563+x564)));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x565 = UINT8_MAX;
	int16_t x566 = INT16_MAX;
	uint64_t x567 = 215139546013LLU;
	uint16_t x568 = 2010U;
	volatile uint64_t t92 = 32343481475LLU;

    t92 = (x565/(x566*(x567+x568)));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x569 = 4;
	volatile uint8_t x570 = 118U;
	static int16_t x571 = -252;
	volatile uint32_t x572 = 235U;
	volatile uint32_t t93 = 1950913334U;

    t93 = (x569/(x570*(x571+x572)));

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x577 = UINT8_MAX;
	int8_t x578 = 29;
	int16_t x579 = -15;
	int32_t x580 = -1;
	int32_t t94 = 6;

    t94 = (x577/(x578*(x579+x580)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x581 = INT32_MIN;
	static int8_t x583 = -12;
	int8_t x584 = INT8_MIN;
	int32_t t95 = -129020;

    t95 = (x581/(x582*(x583+x584)));

    if (t95 != -15339168) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x585 = -2;
	int16_t x586 = INT16_MIN;
	int8_t x587 = -1;
	uint32_t x588 = UINT32_MAX;
	uint32_t t96 = 2072710U;

    t96 = (x585/(x586*(x587+x588)));

    if (t96 != 65535U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x589 = INT32_MAX;
	int8_t x590 = INT8_MAX;
	uint8_t x591 = 6U;
	uint64_t x592 = 491786LLU;
	volatile uint64_t t97 = 7512654091321952LLU;

    t97 = (x589/(x590*(x591+x592)));

    if (t97 != 34LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x593 = 1U;
	volatile uint16_t x594 = 247U;
	static volatile int8_t x595 = INT8_MAX;
	uint16_t x596 = 721U;
	volatile int32_t t98 = 50;

    t98 = (x593/(x594*(x595+x596)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x601 = 1U;
	int32_t x602 = -1;
	volatile int32_t x603 = INT32_MAX;
	static uint64_t x604 = UINT64_MAX;

    t99 = (x601/(x602*(x603+x604)));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x609 = 23481972;
	int8_t x610 = INT8_MIN;
	static int64_t x611 = 21340LL;
	int32_t x612 = INT32_MIN;
	int64_t t100 = 0LL;

    t100 = (x609/(x610*(x611+x612)));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x613 = -2858017LL;
	static uint32_t x614 = 43549389U;
	uint16_t x615 = 5U;
	int32_t x616 = 3;
	int64_t t101 = -6LL;

    t101 = (x613/(x614*(x615+x616)));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x617 = INT16_MIN;
	int8_t x618 = INT8_MIN;
	uint32_t x619 = 670934U;
	volatile uint32_t x620 = 30222U;

    t102 = (x617/(x618*(x619+x620)));

    if (t102 != 1U) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x625 = -1;
	uint64_t x627 = UINT64_MAX;
	int32_t x628 = 455;
	volatile uint64_t t103 = 189613758994LLU;

    t103 = (x625/(x626*(x627+x628)));

    if (t103 != 1LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x630 = -1LL;
	static int8_t x631 = INT8_MIN;
	static uint64_t x632 = 37809527063850LLU;
	uint64_t t104 = 96135550763LLU;

    t104 = (x629/(x630*(x631+x632)));

    if (t104 != 1LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x633 = -1;
	int8_t x634 = INT8_MAX;
	int16_t x636 = INT16_MIN;
	volatile int32_t t105 = -40494966;

    t105 = (x633/(x634*(x635+x636)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x638 = -1;
	int64_t x639 = -1LL;
	int64_t t106 = 12374LL;

    t106 = (x637/(x638*(x639+x640)));

    if (t106 != 1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x649 = 4;
	static int32_t x650 = -77616501;
	int8_t x652 = 1;
	int32_t t107 = -15735;

    t107 = (x649/(x650*(x651+x652)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x653 = 14157360491625LLU;
	int16_t x654 = 17;
	uint32_t x655 = 98U;
	uint16_t x656 = 9255U;
	volatile uint64_t t108 = 2596723659248850421LLU;

    t108 = (x653/(x654*(x655+x656)));

    if (t108 != 89039443LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x658 = UINT16_MAX;
	int64_t x660 = -1LL;

    t109 = (x657/(x658*(x659+x660)));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x661 = -620225676890LL;
	volatile int8_t x662 = 1;
	int16_t x664 = 12736;
	static volatile int64_t t110 = -7534818LL;

    t110 = (x661/(x662*(x663+x664)));

    if (t110 != -48702448LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x667 = 5;
	int8_t x668 = -6;
	int64_t t111 = -45302131868LL;

    t111 = (x665/(x666*(x667+x668)));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x669 = 1;
	volatile uint64_t x670 = 54468462543LLU;
	int64_t x671 = INT64_MIN;
	uint32_t x672 = 8U;
	uint64_t t112 = 336882311711830LLU;

    t112 = (x669/(x670*(x671+x672)));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x673 = 1U;
	volatile uint32_t x674 = 3563780U;
	static uint16_t x676 = 22U;
	volatile uint32_t t113 = 3373397U;

    t113 = (x673/(x674*(x675+x676)));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x677 = 15;
	static int8_t x678 = INT8_MIN;
	static int8_t x680 = -11;

    t114 = (x677/(x678*(x679+x680)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x681 = -17;
	int64_t x682 = INT64_MIN;
	uint64_t x684 = 461572000LLU;
	volatile uint64_t t115 = 223909LLU;

    t115 = (x681/(x682*(x683+x684)));

    if (t115 != 1LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x689 = UINT64_MAX;
	uint32_t x690 = 1095U;
	uint16_t x691 = UINT16_MAX;
	volatile int32_t x692 = -1;
	static volatile uint64_t t116 = 1900459560130256577LLU;

    t116 = (x689/(x690*(x691+x692)));

    if (t116 != 257062618180LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x709 = UINT64_MAX;
	int16_t x710 = -7;
	static uint64_t x711 = UINT64_MAX;
	uint16_t x712 = UINT16_MAX;
	volatile uint64_t t117 = 1209520LLU;

    t117 = (x709/(x710*(x711+x712)));

    if (t117 != 1LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x721 = INT32_MAX;
	int8_t x722 = INT8_MIN;
	volatile int32_t x723 = -15943554;
	volatile int32_t t118 = -20040514;

    t118 = (x721/(x722*(x723+x724)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x725 = -10LL;
	static int16_t x726 = INT16_MAX;
	volatile uint64_t t119 = 3LLU;

    t119 = (x725/(x726*(x727+x728)));

    if (t119 != 48LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x737 = 15;
	uint16_t x738 = 27U;
	volatile uint32_t x739 = 18666803U;
	volatile uint64_t t120 = 807474044739816LLU;

    t120 = (x737/(x738*(x739+x740)));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x745 = -1LL;
	volatile int16_t x746 = INT16_MIN;
	int64_t x748 = 12447LL;
	volatile int64_t t121 = -4036036LL;

    t121 = (x745/(x746*(x747+x748)));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x749 = 0;
	int16_t x752 = 227;
	volatile int64_t t122 = -249087923570LL;

    t122 = (x749/(x750*(x751+x752)));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x754 = 9;
	int64_t x755 = -1LL;
	volatile int64_t t123 = -31331456LL;

    t123 = (x753/(x754*(x755+x756)));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x757 = 0U;
	uint8_t x758 = 95U;
	int32_t x759 = 9906;
	int16_t x760 = 6;
	static int32_t t124 = -3;

    t124 = (x757/(x758*(x759+x760)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x761 = UINT8_MAX;
	uint32_t x763 = UINT32_MAX;
	uint8_t x764 = 18U;
	uint32_t t125 = 1106462U;

    t125 = (x761/(x762*(x763+x764)));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x765 = -1;
	int32_t x766 = -1;
	uint8_t x767 = 7U;

    t126 = (x765/(x766*(x767+x768)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x769 = 1571U;
	uint16_t x770 = UINT16_MAX;
	int32_t x771 = INT32_MAX;
	uint64_t x772 = UINT64_MAX;
	uint64_t t127 = 259147281867226LLU;

    t127 = (x769/(x770*(x771+x772)));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x781 = INT16_MIN;
	int16_t x782 = 64;
	static int8_t x783 = -1;
	int32_t t128 = -299961;

    t128 = (x781/(x782*(x783+x784)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x789 = 258825515;
	int64_t x790 = -3764LL;
	uint16_t x791 = 17U;
	uint32_t x792 = UINT32_MAX;
	int64_t t129 = -722LL;

    t129 = (x789/(x790*(x791+x792)));

    if (t129 != -4297LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x793 = UINT8_MAX;
	int32_t x794 = -1;
	volatile uint64_t x795 = 326104LLU;
	static uint16_t x796 = 3U;
	uint64_t t130 = 7814221LLU;

    t130 = (x793/(x794*(x795+x796)));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x802 = -405467803LL;
	uint16_t x803 = 106U;
	volatile int8_t x804 = -1;
	int64_t t131 = 208764LL;

    t131 = (x801/(x802*(x803+x804)));

    if (t131 != -216642697LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x806 = INT16_MIN;
	int16_t x807 = INT16_MAX;
	int16_t x808 = -1;
	int64_t t132 = -1041938922633530142LL;

    t132 = (x805/(x806*(x807+x808)));

    if (t132 != -8590458912LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x809 = INT8_MIN;
	int8_t x810 = INT8_MIN;
	uint64_t x812 = 211800504932LLU;
	volatile uint64_t t133 = 440LLU;

    t133 = (x809/(x810*(x811+x812)));

    if (t133 != 1LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x814 = 74378U;
	int8_t x815 = INT8_MIN;
	int64_t x816 = -1LL;

    t134 = (x813/(x814*(x815+x816)));

    if (t134 != -961292425685LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x817 = UINT64_MAX;
	uint64_t x818 = 29743990LLU;
	int64_t x819 = -1LL;
	volatile int64_t x820 = -20851186LL;
	static volatile uint64_t t135 = 317717896276214LLU;

    t135 = (x817/(x818*(x819+x820)));

    if (t135 != 1LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x825 = 1533U;
	uint64_t x826 = UINT64_MAX;
	uint64_t x827 = 45115492597316927LLU;

    t136 = (x825/(x826*(x827+x828)));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x829 = UINT64_MAX;
	volatile uint32_t x831 = UINT32_MAX;
	int32_t x832 = INT32_MIN;
	static uint64_t t137 = 191404284LLU;

    t137 = (x829/(x830*(x831+x832)));

    if (t137 != 4295716928LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x833 = 17U;
	int8_t x834 = -5;
	uint16_t x835 = 2U;
	volatile int16_t x836 = INT16_MAX;

    t138 = (x833/(x834*(x835+x836)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x841 = INT32_MIN;
	int8_t x842 = -18;
	int8_t x844 = -2;
	int32_t t139 = -32128;

    t139 = (x841/(x842*(x843+x844)));

    if (t139 != 3641) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x846 = INT8_MIN;
	volatile int16_t x847 = 1;
	uint32_t x848 = 36U;
	volatile uint32_t t140 = 1872982U;

    t140 = (x845/(x846*(x847+x848)));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x850 = INT16_MAX;
	uint8_t x851 = UINT8_MAX;
	volatile int8_t x852 = INT8_MAX;

    t141 = (x849/(x850*(x851+x852)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x853 = INT64_MAX;
	static volatile uint8_t x854 = UINT8_MAX;
	static int8_t x856 = -38;
	volatile int64_t t142 = -112159600909697126LL;

    t142 = (x853/(x854*(x855+x856)));

    if (t142 != 406405465382453LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x857 = 227802478888793310LL;
	int16_t x858 = INT16_MIN;
	uint8_t x859 = 0U;
	volatile int64_t t143 = -1930672062965323LL;

    t143 = (x857/(x858*(x859+x860)));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x861 = INT32_MIN;
	int16_t x862 = -1;
	static int32_t x863 = INT32_MIN;

    t144 = (x861/(x862*(x863+x864)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x865 = UINT32_MAX;
	int8_t x867 = INT8_MIN;
	uint16_t x868 = 452U;
	int64_t t145 = -1763815922240690738LL;

    t145 = (x865/(x866*(x867+x868)));

    if (t145 != -13256071LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x870 = -29707187;
	int16_t x872 = 1;
	volatile int32_t t146 = -33530233;

    t146 = (x869/(x870*(x871+x872)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x873 = 50U;
	int32_t x875 = 125274;
	static int8_t x876 = INT8_MIN;

    t147 = (x873/(x874*(x875+x876)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x881 = 82800482113195594LLU;
	int32_t x882 = 2;
	static volatile uint8_t x883 = 13U;
	uint8_t x884 = 24U;
	volatile uint64_t t148 = 0LLU;

    t148 = (x881/(x882*(x883+x884)));

    if (t148 != 1118925433962102LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x885 = INT32_MIN;
	static volatile int64_t x886 = -1LL;
	static volatile int8_t x887 = INT8_MAX;
	int64_t x888 = INT64_MIN;
	static int64_t t149 = 1LL;

    t149 = (x885/(x886*(x887+x888)));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x893 = -2808007LL;
	volatile int64_t x894 = 4LL;
	static int64_t x895 = 292046LL;
	int64_t t150 = -286001LL;

    t150 = (x893/(x894*(x895+x896)));

    if (t150 != -2LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x901 = 31013153U;
	int16_t x902 = -1;
	volatile int64_t x904 = INT64_MIN;
	int64_t t151 = -1470399474LL;

    t151 = (x901/(x902*(x903+x904)));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x905 = INT32_MIN;
	int16_t x906 = INT16_MAX;
	int32_t x908 = INT32_MIN;
	volatile uint32_t t152 = 975295480U;

    t152 = (x905/(x906*(x907+x908)));

    if (t152 != 1U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x909 = INT8_MIN;
	int16_t x910 = -15;
	int8_t x912 = INT8_MIN;
	static uint32_t t153 = 0U;

    t153 = (x909/(x910*(x911+x912)));

    if (t153 != 2219621U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x914 = UINT8_MAX;
	static uint64_t x915 = UINT64_MAX;
	int16_t x916 = INT16_MAX;
	uint64_t t154 = 447718748282897789LLU;

    t154 = (x913/(x914*(x915+x916)));

    if (t154 != 1103890814229LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x929 = 0;
	static volatile uint32_t x930 = UINT32_MAX;
	static volatile int8_t x931 = -1;
	volatile int8_t x932 = 53;
	uint32_t t155 = 2619709U;

    t155 = (x929/(x930*(x931+x932)));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x933 = -3346628859159556388LL;
	uint32_t x935 = 63U;
	int8_t x936 = INT8_MAX;
	static volatile int64_t t156 = 8LL;

    t156 = (x933/(x934*(x935+x936)));

    if (t156 != -150260498036LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x938 = INT8_MIN;
	uint16_t x939 = UINT16_MAX;
	volatile int64_t x940 = -1LL;
	static volatile int64_t t157 = 347305456332602669LL;

    t157 = (x937/(x938*(x939+x940)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x949 = 5;
	static int16_t x950 = 2;
	static int32_t x952 = INT32_MIN;
	uint64_t t158 = 203325LLU;

    t158 = (x949/(x950*(x951+x952)));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x957 = -3;
	uint16_t x958 = 183U;
	int8_t x959 = INT8_MIN;
	int8_t x960 = -1;

    t159 = (x957/(x958*(x959+x960)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x962 = INT8_MIN;
	uint32_t x963 = UINT32_MAX;
	uint8_t x964 = UINT8_MAX;
	int64_t t160 = 942704119546LL;

    t160 = (x961/(x962*(x963+x964)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x965 = INT8_MAX;
	int16_t x967 = INT16_MAX;
	int8_t x968 = -3;
	volatile int32_t t161 = 3266924;

    t161 = (x965/(x966*(x967+x968)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x969 = INT8_MIN;
	uint8_t x970 = 25U;
	volatile int16_t x971 = INT16_MIN;
	int16_t x972 = INT16_MIN;
	volatile int32_t t162 = -7743;

    t162 = (x969/(x970*(x971+x972)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x973 = 4;
	volatile int16_t x975 = -1;
	static int32_t t163 = 130358450;

    t163 = (x973/(x974*(x975+x976)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x977 = INT32_MIN;
	int8_t x979 = 0;
	volatile uint64_t t164 = 221287526722LLU;

    t164 = (x977/(x978*(x979+x980)));

    if (t164 != 9589467LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x989 = INT8_MIN;
	int8_t x990 = INT8_MIN;
	int8_t x991 = -1;
	static uint32_t t165 = 144874534U;

    t165 = (x989/(x990*(x991+x992)));

    if (t165 != 16777215U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x997 = INT32_MAX;
	uint32_t x998 = UINT32_MAX;
	volatile int32_t x999 = -809427;
	volatile int8_t x1000 = -1;
	volatile uint32_t t166 = 28835959U;

    t166 = (x997/(x998*(x999+x1000)));

    if (t166 != 2653U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1005 = 95136811022LLU;
	int16_t x1006 = INT16_MIN;
	uint32_t x1007 = 9051U;
	int16_t x1008 = 11861;
	uint64_t t167 = 2636735955950982540LLU;

    t167 = (x1005/(x1006*(x1007+x1008)));

    if (t167 != 26LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x1013 = 7U;
	int16_t x1014 = INT16_MIN;
	int16_t x1016 = INT16_MIN;
	int32_t t168 = 0;

    t168 = (x1013/(x1014*(x1015+x1016)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1017 = UINT32_MAX;
	uint32_t x1018 = UINT32_MAX;
	static uint64_t x1019 = UINT64_MAX;
	int8_t x1020 = INT8_MIN;
	volatile uint64_t t169 = 984LLU;

    t169 = (x1017/(x1018*(x1019+x1020)));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1021 = 477LLU;
	uint32_t x1023 = UINT32_MAX;
	volatile uint32_t x1024 = UINT32_MAX;
	volatile uint64_t t170 = 543143243044414443LLU;

    t170 = (x1021/(x1022*(x1023+x1024)));

    if (t170 != 238LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1037 = INT32_MAX;
	int16_t x1038 = -1;
	volatile uint8_t x1039 = UINT8_MAX;
	uint16_t x1040 = 5504U;
	int32_t t171 = 32912880;

    t171 = (x1037/(x1038*(x1039+x1040)));

    if (t171 != -372891) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x1041 = 1192297736U;
	static int16_t x1042 = -1;
	static int8_t x1043 = INT8_MIN;
	int16_t x1044 = 543;
	volatile uint32_t t172 = 447U;

    t172 = (x1041/(x1042*(x1043+x1044)));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1045 = 3207U;
	int16_t x1046 = 11;
	int32_t x1047 = INT32_MIN;
	uint64_t x1048 = UINT64_MAX;
	uint64_t t173 = 3734222549884LLU;

    t173 = (x1045/(x1046*(x1047+x1048)));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x1049 = INT8_MIN;
	int16_t x1050 = INT16_MIN;
	volatile uint8_t x1051 = 2U;
	int32_t x1052 = -1;
	int32_t t174 = -2413;

    t174 = (x1049/(x1050*(x1051+x1052)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1053 = 22723U;
	int64_t x1054 = -1LL;
	int8_t x1055 = -1;
	uint32_t x1056 = 1388U;
	int64_t t175 = 8225224LL;

    t175 = (x1053/(x1054*(x1055+x1056)));

    if (t175 != -16LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x1069 = INT64_MIN;
	volatile int64_t t176 = -20730016LL;

    t176 = (x1069/(x1070*(x1071+x1072)));

    if (t176 != 1099528405248LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1077 = 0;
	volatile int16_t x1079 = INT16_MIN;
	uint8_t x1080 = UINT8_MAX;
	volatile int32_t t177 = 243;

    t177 = (x1077/(x1078*(x1079+x1080)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1086 = -1241504;
	static volatile int64_t x1087 = 1LL;
	static uint64_t t178 = 863434180LLU;

    t178 = (x1085/(x1086*(x1087+x1088)));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint64_t x1089 = 8682LLU;
	static uint64_t x1090 = UINT64_MAX;
	int8_t x1091 = -7;
	static volatile uint16_t x1092 = 0U;
	uint64_t t179 = 18710LLU;

    t179 = (x1089/(x1090*(x1091+x1092)));

    if (t179 != 1240LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x1097 = INT64_MAX;
	uint16_t x1100 = 4U;
	volatile int64_t t180 = -38142962747045636LL;

    t180 = (x1097/(x1098*(x1099+x1100)));

    if (t180 != -485440633518672410LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x1105 = 24U;
	int16_t x1107 = 0;
	int64_t x1108 = 809892217419485LL;

    t181 = (x1105/(x1106*(x1107+x1108)));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x1114 = UINT32_MAX;
	int64_t x1115 = INT64_MAX;
	int64_t x1116 = INT64_MIN;
	int64_t t182 = -5599598855481LL;

    t182 = (x1113/(x1114*(x1115+x1116)));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x1117 = -1LL;
	int8_t x1118 = INT8_MAX;
	volatile uint32_t x1119 = 33600U;
	uint16_t x1120 = 33U;
	int64_t t183 = 314928LL;

    t183 = (x1117/(x1118*(x1119+x1120)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x1121 = INT64_MIN;
	static int8_t x1122 = -4;
	volatile uint16_t x1123 = 444U;
	uint64_t x1124 = 49412162266452LLU;
	volatile uint64_t t184 = 132494201652LLU;

    t184 = (x1121/(x1122*(x1123+x1124)));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x1133 = 1824647LL;
	static int8_t x1134 = INT8_MAX;
	int16_t x1135 = INT16_MIN;
	int64_t x1136 = 41197LL;

    t185 = (x1133/(x1134*(x1135+x1136)));

    if (t185 != 1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1138 = UINT32_MAX;
	uint8_t x1140 = 4U;
	static uint32_t t186 = 495650U;

    t186 = (x1137/(x1138*(x1139+x1140)));

    if (t186 != 1U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x1141 = 1U;
	static uint8_t x1143 = 72U;
	static int8_t x1144 = INT8_MAX;
	volatile int32_t t187 = 52;

    t187 = (x1141/(x1142*(x1143+x1144)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x1145 = 765786987LLU;
	uint8_t x1146 = 32U;
	static uint64_t x1147 = 560464LLU;
	static int8_t x1148 = -1;

    t188 = (x1145/(x1146*(x1147+x1148)));

    if (t188 != 42LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x1149 = UINT16_MAX;
	uint8_t x1150 = 57U;
	volatile int16_t x1151 = INT16_MIN;
	volatile int16_t x1152 = -525;
	int32_t t189 = -44905;

    t189 = (x1149/(x1150*(x1151+x1152)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1159 = 1444U;
	volatile int32_t x1160 = INT32_MIN;
	static volatile uint32_t t190 = 1994U;

    t190 = (x1157/(x1158*(x1159+x1160)));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1165 = -31;
	static int64_t x1167 = INT64_MAX;
	int32_t x1168 = INT32_MIN;

    t191 = (x1165/(x1166*(x1167+x1168)));

    if (t191 != 1LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1173 = INT32_MAX;
	uint16_t x1175 = 6549U;
	volatile uint64_t t192 = 28516264169326LLU;

    t192 = (x1173/(x1174*(x1175+x1176)));

    if (t192 != 54660LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1181 = INT32_MIN;
	static volatile uint64_t x1182 = 11LLU;
	int8_t x1183 = -1;
	static uint16_t x1184 = 205U;

    t193 = (x1181/(x1182*(x1183+x1184)));

    if (t193 != 8220474185188087LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1185 = INT16_MAX;
	int32_t x1186 = 6961;
	int8_t x1188 = INT8_MIN;
	volatile int64_t t194 = 154LL;

    t194 = (x1185/(x1186*(x1187+x1188)));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x1189 = INT32_MAX;
	volatile int64_t x1191 = -2LL;
	static int16_t x1192 = INT16_MIN;
	int64_t t195 = 6644476671LL;

    t195 = (x1189/(x1190*(x1191+x1192)));

    if (t195 != 65532LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x1205 = -1;
	uint8_t x1206 = 10U;
	volatile int32_t t196 = -1;

    t196 = (x1205/(x1206*(x1207+x1208)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1213 = 2967U;
	int8_t x1214 = -1;
	int32_t x1215 = -1;
	int16_t x1216 = INT16_MIN;
	volatile int32_t t197 = 125951;

    t197 = (x1213/(x1214*(x1215+x1216)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1217 = 16U;
	static uint32_t x1218 = 3U;
	int8_t x1219 = 60;
	static volatile int8_t x1220 = 25;
	volatile uint32_t t198 = 3894U;

    t198 = (x1217/(x1218*(x1219+x1220)));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1225 = 63;
	uint8_t x1226 = 13U;
	int16_t x1227 = INT16_MIN;
	int16_t x1228 = -1351;
	int32_t t199 = 149;

    t199 = (x1225/(x1226*(x1227+x1228)));

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

