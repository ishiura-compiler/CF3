
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

int8_t x1 = 4;
static volatile int32_t x2 = 46035;
int16_t x21 = INT16_MIN;
int64_t x25 = -1LL;
int8_t x40 = INT8_MAX;
static volatile int8_t x43 = INT8_MIN;
static int32_t t6 = -13346263;
volatile int32_t x60 = -1;
int8_t x65 = INT8_MAX;
static int16_t x66 = -1;
static int8_t x69 = INT8_MIN;
int16_t x70 = -118;
static volatile int32_t t11 = -10;
static uint16_t x78 = 2537U;
volatile uint8_t x84 = 10U;
int64_t t14 = 10156LL;
volatile uint64_t x93 = 70748035727024841LLU;
int8_t x94 = INT8_MIN;
volatile uint64_t x100 = UINT64_MAX;
int64_t x101 = -115623394619910LL;
int8_t x102 = -1;
int16_t x109 = INT16_MIN;
int16_t x110 = 173;
int32_t x135 = INT32_MIN;
int64_t t25 = -441280302LL;
int64_t x159 = INT64_MIN;
uint64_t x162 = UINT64_MAX;
int32_t x163 = -1;
uint8_t x167 = 9U;
uint64_t x169 = UINT64_MAX;
uint32_t x175 = UINT32_MAX;
volatile int32_t t32 = -5;
volatile int32_t t33 = -6;
static volatile int16_t x196 = INT16_MIN;
uint8_t x201 = UINT8_MAX;
int32_t x207 = INT32_MIN;
int64_t x210 = 14128543420290LL;
volatile int16_t x211 = INT16_MAX;
int64_t x212 = INT64_MIN;
uint32_t x213 = 19559764U;
volatile uint32_t t39 = 12U;
static uint64_t x230 = 125517603414LLU;
int64_t x236 = INT64_MAX;
static int32_t x242 = -1;
static int16_t x251 = INT16_MAX;
int64_t x252 = INT64_MIN;
int32_t x260 = INT32_MIN;
int64_t x264 = 1429876868609LL;
volatile int64_t x266 = INT64_MAX;
int8_t x267 = -2;
volatile int32_t t49 = 14424;
volatile int64_t t51 = -2151185655144276LL;
static int8_t x293 = INT8_MIN;
int8_t x299 = INT8_MAX;
int64_t x303 = -1LL;
int16_t x307 = INT16_MAX;
int16_t x313 = INT16_MAX;
volatile int8_t x315 = -1;
volatile int32_t t56 = 11940752;
volatile uint32_t x332 = UINT32_MAX;
int32_t t58 = 1016;
int64_t x343 = INT64_MAX;
uint8_t x344 = UINT8_MAX;
volatile int64_t x349 = -1LL;
int16_t x350 = INT16_MIN;
int16_t x351 = INT16_MIN;
uint32_t x358 = 1423U;
uint16_t x374 = 5U;
volatile uint32_t x375 = 66U;
static uint32_t x377 = 422U;
volatile uint32_t t69 = 1736201592U;
volatile uint32_t x382 = 1981U;
static uint32_t x384 = 1U;
static volatile uint32_t t70 = 122359372U;
uint32_t x405 = 1235U;
int8_t x406 = INT8_MIN;
int32_t x408 = -65;
volatile int32_t t75 = 1640429;
int32_t x428 = INT32_MIN;
static int64_t t76 = -561249621624744116LL;
static volatile int16_t x434 = -1729;
static int32_t t79 = -3096511;
int64_t x448 = -24903068135822LL;
volatile uint16_t x449 = 0U;
uint8_t x460 = 12U;
uint32_t x461 = 20U;
volatile int8_t x473 = INT8_MAX;
volatile int64_t x477 = INT64_MIN;
int64_t x508 = 976022548LL;
uint8_t x518 = 3U;
static uint32_t t92 = 96U;
static int32_t x524 = -1;
int16_t x526 = -1;
int32_t x529 = -64790;
int8_t x539 = INT8_MIN;
int64_t x543 = INT64_MIN;
volatile int64_t x551 = 5LL;
int32_t x555 = -1;
int16_t x562 = INT16_MIN;
int8_t x566 = -1;
uint32_t x568 = UINT32_MAX;
int32_t t102 = -6;
static volatile int8_t x573 = INT8_MIN;
volatile int16_t x581 = -1;
int32_t x582 = 39311;
volatile int64_t x583 = INT64_MIN;
volatile int32_t t104 = -1;
uint16_t x588 = UINT16_MAX;
volatile uint64_t t107 = 2202444LLU;
static int64_t x615 = INT64_MIN;
int32_t t109 = 33388;
int8_t x622 = 1;
int16_t x631 = INT16_MAX;
int16_t x637 = 1;
uint32_t x639 = UINT32_MAX;
static int64_t x642 = 56LL;
int64_t x646 = -1LL;
volatile uint32_t x652 = UINT32_MAX;
volatile int32_t x657 = 1963;
static volatile int8_t x658 = INT8_MIN;
volatile uint8_t x669 = UINT8_MAX;
uint64_t x670 = UINT64_MAX;
volatile uint16_t x672 = UINT16_MAX;
volatile int32_t t120 = 82724036;
uint32_t x678 = 1U;
static int64_t t122 = 36597157020LL;
uint16_t x685 = 34U;
int64_t x686 = -2493410468LL;
volatile int64_t t124 = -14689068LL;
uint32_t x696 = 809920U;
int64_t x699 = INT64_MAX;
static uint32_t x700 = 355796U;
volatile int64_t t126 = -324240LL;
uint32_t x703 = UINT32_MAX;
uint32_t x711 = 389U;
int64_t t129 = 1454133LL;
uint32_t x723 = UINT32_MAX;
uint64_t t133 = 532278063033386LLU;
volatile int32_t x740 = 110;
static volatile uint32_t t136 = 0U;
static volatile uint64_t t138 = 4117621LLU;
int32_t x773 = -1;
static uint16_t x777 = UINT16_MAX;
static int8_t x789 = -2;
static int32_t t143 = -15;
volatile int16_t x796 = -1;
int8_t x818 = INT8_MIN;
static uint32_t x820 = 252914U;
int64_t x823 = INT64_MIN;
int16_t x852 = 1;
static uint64_t x853 = UINT64_MAX;
uint64_t x856 = UINT64_MAX;
int16_t x857 = INT16_MAX;
uint16_t x861 = 7298U;
int16_t x862 = 1256;
uint8_t x863 = 55U;
int16_t x866 = -1;
uint32_t x867 = 1420443U;
int8_t x869 = INT8_MIN;
int8_t x877 = INT8_MAX;
static int64_t t159 = -12485587224421376LL;
int32_t t162 = -64;
int16_t x907 = INT16_MIN;
static volatile int32_t t163 = -403000880;
volatile int16_t x909 = 1;
volatile int32_t t167 = -2697;
int32_t x937 = -12632;
static uint64_t x952 = 197142210864459LLU;
volatile int64_t x956 = INT64_MIN;
int64_t x957 = -46661058671451487LL;
uint16_t x958 = 0U;
int32_t t177 = -4491;
static volatile uint8_t x976 = UINT8_MAX;
volatile uint8_t x989 = UINT8_MAX;
volatile int32_t t186 = -45551963;
static int64_t x1013 = -45786107392LL;
static int8_t x1015 = INT8_MIN;
int16_t x1021 = -127;
volatile int64_t x1023 = INT64_MIN;
uint64_t t189 = 69340990540185966LLU;
uint8_t x1029 = 119U;
int8_t x1033 = -1;
int8_t x1041 = 27;
int8_t x1043 = 0;
uint16_t x1053 = 13U;
uint8_t x1054 = 12U;
int16_t x1058 = INT16_MIN;
int64_t x1065 = INT64_MIN;
volatile uint32_t x1066 = 0U;
uint16_t x1070 = UINT16_MAX;
int8_t x1071 = -28;
static int8_t x1079 = INT8_MAX;


void f0(void) {
    	uint64_t x3 = UINT64_MAX;
	int32_t x4 = -1;
	static volatile int32_t t0 = -352;

    t0 = ((x1*x2)&(x3<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = 5423266398744LL;
	int16_t x10 = -27;
	volatile uint64_t x11 = 926LLU;
	volatile uint8_t x12 = 96U;
	static volatile int64_t t1 = 1905300603LL;

    t1 = ((x9*x10)&(x11<=x12));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x22 = INT8_MIN;
	uint8_t x23 = 39U;
	int8_t x24 = 1;
	int32_t t2 = 759546;

    t2 = ((x21*x22)&(x23<=x24));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x26 = INT16_MAX;
	volatile int16_t x27 = INT16_MIN;
	volatile int32_t x28 = INT32_MIN;
	int64_t t3 = -9602LL;

    t3 = ((x25*x26)&(x27<=x28));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x37 = INT8_MIN;
	uint16_t x38 = 0U;
	int64_t x39 = INT64_MAX;
	volatile int32_t t4 = -238851;

    t4 = ((x37*x38)&(x39<=x40));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x41 = UINT32_MAX;
	int64_t x42 = -1LL;
	int8_t x44 = -1;
	static int64_t t5 = 119153689696LL;

    t5 = ((x41*x42)&(x43<=x44));

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x45 = 16;
	static volatile uint8_t x46 = UINT8_MAX;
	volatile int16_t x47 = 39;
	int32_t x48 = -1;

    t6 = ((x45*x46)&(x47<=x48));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x53 = INT32_MIN;
	volatile uint32_t x54 = UINT32_MAX;
	int32_t x55 = INT32_MIN;
	static volatile uint32_t x56 = UINT32_MAX;
	uint32_t t7 = 778124412U;

    t7 = ((x53*x54)&(x55<=x56));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x57 = 442497U;
	int16_t x58 = INT16_MIN;
	int64_t x59 = INT64_MAX;
	volatile uint32_t t8 = 3798182U;

    t8 = ((x57*x58)&(x59<=x60));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x61 = -1;
	volatile int64_t x62 = -8644LL;
	static int8_t x63 = -28;
	static volatile int32_t x64 = INT32_MAX;
	int64_t t9 = -4170853LL;

    t9 = ((x61*x62)&(x63<=x64));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x67 = UINT64_MAX;
	uint8_t x68 = UINT8_MAX;
	int32_t t10 = 24535417;

    t10 = ((x65*x66)&(x67<=x68));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x71 = -1;
	int32_t x72 = -437464649;

    t11 = ((x69*x70)&(x71<=x72));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x77 = 13041U;
	uint32_t x79 = UINT32_MAX;
	uint16_t x80 = 5U;
	uint32_t t12 = 1U;

    t12 = ((x77*x78)&(x79<=x80));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x81 = 11521U;
	int8_t x82 = INT8_MIN;
	int8_t x83 = 2;
	volatile uint32_t t13 = 1209312303U;

    t13 = ((x81*x82)&(x83<=x84));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x85 = -5;
	int64_t x86 = 1631325343728279463LL;
	uint16_t x87 = UINT16_MAX;
	int32_t x88 = -11009554;

    t14 = ((x85*x86)&(x87<=x88));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x89 = 49U;
	static volatile uint16_t x90 = 9361U;
	int64_t x91 = -128140489192071765LL;
	int16_t x92 = INT16_MAX;
	volatile int32_t t15 = 862680432;

    t15 = ((x89*x90)&(x91<=x92));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x95 = 6U;
	int32_t x96 = INT32_MIN;
	volatile uint64_t t16 = 778380093LLU;

    t16 = ((x93*x94)&(x95<=x96));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x97 = 3;
	volatile uint8_t x98 = UINT8_MAX;
	int16_t x99 = -36;
	volatile int32_t t17 = -330;

    t17 = ((x97*x98)&(x99<=x100));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x103 = -460864554872682LL;
	static int64_t x104 = -1LL;
	volatile int64_t t18 = -1964117544LL;

    t18 = ((x101*x102)&(x103<=x104));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x111 = 14U;
	uint16_t x112 = 804U;
	static int32_t t19 = 2;

    t19 = ((x109*x110)&(x111<=x112));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x113 = -1;
	int64_t x114 = -1906LL;
	static uint32_t x115 = UINT32_MAX;
	int64_t x116 = INT64_MIN;
	static int64_t t20 = -67706651613LL;

    t20 = ((x113*x114)&(x115<=x116));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x121 = INT32_MIN;
	static uint32_t x122 = 68645U;
	uint64_t x123 = 4823953318250847463LLU;
	int16_t x124 = INT16_MIN;
	volatile uint32_t t21 = 12336736U;

    t21 = ((x121*x122)&(x123<=x124));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x129 = 24451303U;
	int64_t x130 = 12LL;
	uint64_t x131 = 1102705179214741LLU;
	uint8_t x132 = UINT8_MAX;
	volatile int64_t t22 = -277664826629937681LL;

    t22 = ((x129*x130)&(x131<=x132));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x133 = 4610701333LLU;
	static int64_t x134 = -644712594391LL;
	uint32_t x136 = UINT32_MAX;
	uint64_t t23 = 2417837226300204320LLU;

    t23 = ((x133*x134)&(x135<=x136));

    if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x137 = UINT32_MAX;
	int16_t x138 = -1;
	static int32_t x139 = INT32_MIN;
	int8_t x140 = -1;
	volatile uint32_t t24 = 409730509U;

    t24 = ((x137*x138)&(x139<=x140));

    if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x153 = 13U;
	static int64_t x154 = -51847182357584950LL;
	int16_t x155 = INT16_MIN;
	volatile int64_t x156 = 234LL;

    t25 = ((x153*x154)&(x155<=x156));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x157 = INT8_MAX;
	uint64_t x158 = 271703535354885LLU;
	volatile int64_t x160 = INT64_MIN;
	volatile uint64_t t26 = 3679075380174LLU;

    t26 = ((x157*x158)&(x159<=x160));

    if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x161 = 31U;
	int16_t x164 = -1;
	uint64_t t27 = 140548273223LLU;

    t27 = ((x161*x162)&(x163<=x164));

    if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x165 = UINT8_MAX;
	uint32_t x166 = UINT32_MAX;
	uint8_t x168 = 19U;
	uint32_t t28 = 53U;

    t28 = ((x165*x166)&(x167<=x168));

    if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x170 = INT8_MIN;
	int32_t x171 = -166846278;
	volatile int16_t x172 = 103;
	volatile uint64_t t29 = 38LLU;

    t29 = ((x169*x170)&(x171<=x172));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x173 = 2U;
	uint64_t x174 = 998LLU;
	volatile int8_t x176 = 1;
	uint64_t t30 = 30020032114634123LLU;

    t30 = ((x173*x174)&(x175<=x176));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x177 = -1LL;
	int64_t x178 = INT64_MAX;
	int16_t x179 = INT16_MIN;
	int16_t x180 = INT16_MIN;
	volatile int64_t t31 = -90LL;

    t31 = ((x177*x178)&(x179<=x180));

    if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x181 = 8U;
	int16_t x182 = 4232;
	uint32_t x183 = 845U;
	volatile int16_t x184 = INT16_MAX;

    t32 = ((x181*x182)&(x183<=x184));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x185 = INT32_MAX;
	static int16_t x186 = -1;
	int16_t x187 = INT16_MIN;
	uint32_t x188 = UINT32_MAX;

    t33 = ((x185*x186)&(x187<=x188));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x193 = 37;
	static uint8_t x194 = 1U;
	uint32_t x195 = 1U;
	volatile int32_t t34 = -983761842;

    t34 = ((x193*x194)&(x195<=x196));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x202 = 450795635238161016LLU;
	uint64_t x203 = 35LLU;
	volatile uint8_t x204 = 42U;
	static uint64_t t35 = 615864518768LLU;

    t35 = ((x201*x202)&(x203<=x204));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x205 = INT8_MIN;
	uint8_t x206 = 1U;
	static uint64_t x208 = 113535482LLU;
	static int32_t t36 = 4005;

    t36 = ((x205*x206)&(x207<=x208));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x209 = INT16_MAX;
	volatile int64_t t37 = -657192768505LL;

    t37 = ((x209*x210)&(x211<=x212));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x214 = -1LL;
	int32_t x215 = -672;
	int8_t x216 = INT8_MAX;
	int64_t t38 = 317980401648LL;

    t38 = ((x213*x214)&(x215<=x216));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x217 = 20282165U;
	uint8_t x218 = 0U;
	int64_t x219 = INT64_MIN;
	int64_t x220 = INT64_MIN;

    t39 = ((x217*x218)&(x219<=x220));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x229 = 6778558257495025LLU;
	int64_t x231 = INT64_MAX;
	static int32_t x232 = -1;
	uint64_t t40 = 331315LLU;

    t40 = ((x229*x230)&(x231<=x232));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x233 = 11U;
	int64_t x234 = -125290843LL;
	int8_t x235 = 2;
	int64_t t41 = -43904685589375LL;

    t41 = ((x233*x234)&(x235<=x236));

    if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x241 = -60;
	static int32_t x243 = INT32_MAX;
	static volatile int16_t x244 = INT16_MIN;
	volatile int32_t t42 = 91726908;

    t42 = ((x241*x242)&(x243<=x244));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x249 = INT16_MIN;
	volatile int8_t x250 = INT8_MIN;
	volatile int32_t t43 = 25632931;

    t43 = ((x249*x250)&(x251<=x252));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x257 = 1561;
	int16_t x258 = INT16_MIN;
	int32_t x259 = -7221;
	int32_t t44 = 25359;

    t44 = ((x257*x258)&(x259<=x260));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x261 = -1;
	int16_t x262 = -1;
	int64_t x263 = -1LL;
	volatile int32_t t45 = 459336061;

    t45 = ((x261*x262)&(x263<=x264));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x265 = -1;
	int16_t x268 = -1;
	int64_t t46 = 84157534235LL;

    t46 = ((x265*x266)&(x267<=x268));

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x269 = 5;
	int8_t x270 = 4;
	int16_t x271 = -1;
	static uint64_t x272 = UINT64_MAX;
	volatile int32_t t47 = -4;

    t47 = ((x269*x270)&(x271<=x272));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x273 = 1274LL;
	uint32_t x274 = 9603227U;
	int32_t x275 = 101341;
	static int64_t x276 = -1LL;
	volatile int64_t t48 = 6837074176LL;

    t48 = ((x273*x274)&(x275<=x276));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x277 = -9;
	volatile int16_t x278 = INT16_MIN;
	volatile int16_t x279 = INT16_MIN;
	volatile int64_t x280 = -48LL;

    t49 = ((x277*x278)&(x279<=x280));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x281 = INT16_MIN;
	volatile int64_t x282 = -104388LL;
	int16_t x283 = INT16_MAX;
	int16_t x284 = -345;
	volatile int64_t t50 = 64376264935LL;

    t50 = ((x281*x282)&(x283<=x284));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x285 = -4256417640555131LL;
	uint16_t x286 = 3U;
	int64_t x287 = 4968915358721LL;
	int32_t x288 = INT32_MIN;

    t51 = ((x285*x286)&(x287<=x288));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x294 = 27;
	static int8_t x295 = -9;
	int16_t x296 = INT16_MAX;
	volatile int32_t t52 = 98;

    t52 = ((x293*x294)&(x295<=x296));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x297 = 1145U;
	static uint16_t x298 = 14567U;
	int8_t x300 = INT8_MIN;
	int32_t t53 = -12911871;

    t53 = ((x297*x298)&(x299<=x300));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x301 = UINT8_MAX;
	volatile int32_t x302 = -3411626;
	static int16_t x304 = -1;
	static int32_t t54 = -126486;

    t54 = ((x301*x302)&(x303<=x304));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x305 = 1U;
	volatile uint16_t x306 = UINT16_MAX;
	volatile int8_t x308 = -1;
	volatile int32_t t55 = 1291;

    t55 = ((x305*x306)&(x307<=x308));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x314 = INT16_MIN;
	int8_t x316 = INT8_MAX;

    t56 = ((x313*x314)&(x315<=x316));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x325 = -54;
	int8_t x326 = 21;
	static int64_t x327 = INT64_MAX;
	static uint16_t x328 = UINT16_MAX;
	volatile int32_t t57 = -8;

    t57 = ((x325*x326)&(x327<=x328));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x329 = 75;
	int32_t x330 = -1;
	int8_t x331 = INT8_MAX;

    t58 = ((x329*x330)&(x331<=x332));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x333 = INT16_MIN;
	uint64_t x334 = 195168957LLU;
	volatile uint16_t x335 = 1548U;
	int64_t x336 = INT64_MAX;
	uint64_t t59 = 169289LLU;

    t59 = ((x333*x334)&(x335<=x336));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x337 = -41249918786LL;
	volatile uint16_t x338 = 94U;
	int64_t x339 = -1LL;
	int32_t x340 = INT32_MIN;
	int64_t t60 = -17061412LL;

    t60 = ((x337*x338)&(x339<=x340));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x341 = -45;
	int32_t x342 = 10266;
	int32_t t61 = 11;

    t61 = ((x341*x342)&(x343<=x344));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x352 = -1LL;
	int64_t t62 = -14427640546774LL;

    t62 = ((x349*x350)&(x351<=x352));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x353 = 23LLU;
	int64_t x354 = INT64_MIN;
	int64_t x355 = -1LL;
	static volatile uint32_t x356 = 480U;
	volatile uint64_t t63 = 2615493509877833585LLU;

    t63 = ((x353*x354)&(x355<=x356));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x357 = INT16_MIN;
	volatile int64_t x359 = INT64_MIN;
	volatile uint16_t x360 = UINT16_MAX;
	uint32_t t64 = 112409U;

    t64 = ((x357*x358)&(x359<=x360));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x361 = -142;
	static uint8_t x362 = 9U;
	static int8_t x363 = -4;
	int16_t x364 = INT16_MAX;
	volatile int32_t t65 = 48337311;

    t65 = ((x361*x362)&(x363<=x364));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x365 = -1;
	static int32_t x366 = -1;
	uint64_t x367 = 573871114472669636LLU;
	int32_t x368 = -8;
	int32_t t66 = -100;

    t66 = ((x365*x366)&(x367<=x368));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x369 = -1;
	int16_t x370 = -1;
	int32_t x371 = INT32_MAX;
	volatile int16_t x372 = INT16_MAX;
	int32_t t67 = 306;

    t67 = ((x369*x370)&(x371<=x372));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x373 = INT8_MIN;
	static uint64_t x376 = 195LLU;
	volatile int32_t t68 = -467;

    t68 = ((x373*x374)&(x375<=x376));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x378 = INT32_MAX;
	int32_t x379 = -1;
	uint16_t x380 = UINT16_MAX;

    t69 = ((x377*x378)&(x379<=x380));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x381 = 21U;
	int32_t x383 = 0;

    t70 = ((x381*x382)&(x383<=x384));

    if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint64_t x385 = 96754402602956460LLU;
	uint64_t x386 = 11705360906877440LLU;
	int64_t x387 = -226460929343016698LL;
	int32_t x388 = -1;
	volatile uint64_t t71 = 9451LLU;

    t71 = ((x385*x386)&(x387<=x388));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x397 = -533391823892825LL;
	volatile int16_t x398 = -1;
	volatile uint8_t x399 = 21U;
	volatile int8_t x400 = -1;
	int64_t t72 = 248280444500011765LL;

    t72 = ((x397*x398)&(x399<=x400));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x401 = -1;
	uint16_t x402 = 1254U;
	int64_t x403 = INT64_MIN;
	static int8_t x404 = 0;
	volatile int32_t t73 = -227;

    t73 = ((x401*x402)&(x403<=x404));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x407 = UINT32_MAX;
	volatile uint32_t t74 = 1U;

    t74 = ((x405*x406)&(x407<=x408));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x409 = INT8_MIN;
	int8_t x410 = INT8_MAX;
	uint16_t x411 = 716U;
	volatile int64_t x412 = -1LL;

    t75 = ((x409*x410)&(x411<=x412));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x425 = 19376LL;
	static volatile uint32_t x426 = UINT32_MAX;
	static int32_t x427 = INT32_MIN;

    t76 = ((x425*x426)&(x427<=x428));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x429 = INT8_MIN;
	static uint64_t x430 = 714961275579109661LLU;
	volatile int32_t x431 = 1643;
	uint8_t x432 = 4U;
	uint64_t t77 = 6LLU;

    t77 = ((x429*x430)&(x431<=x432));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x433 = INT8_MAX;
	int32_t x435 = INT32_MIN;
	uint64_t x436 = 65732LLU;
	static int32_t t78 = 442;

    t78 = ((x433*x434)&(x435<=x436));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x437 = -1;
	uint8_t x438 = 6U;
	static uint32_t x439 = 2031851941U;
	int32_t x440 = INT32_MIN;

    t79 = ((x437*x438)&(x439<=x440));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x441 = 8U;
	int8_t x442 = INT8_MIN;
	int16_t x443 = -1;
	int8_t x444 = -1;
	volatile int32_t t80 = -12411936;

    t80 = ((x441*x442)&(x443<=x444));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x445 = -1LL;
	int32_t x446 = -26217274;
	int16_t x447 = INT16_MIN;
	int64_t t81 = -386394363209161LL;

    t81 = ((x445*x446)&(x447<=x448));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x450 = INT8_MAX;
	int8_t x451 = INT8_MIN;
	uint64_t x452 = UINT64_MAX;
	volatile int32_t t82 = 3992056;

    t82 = ((x449*x450)&(x451<=x452));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x457 = 6314U;
	int32_t x458 = -4452;
	volatile int8_t x459 = INT8_MIN;
	static int32_t t83 = 48980640;

    t83 = ((x457*x458)&(x459<=x460));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x462 = 7U;
	int8_t x463 = -1;
	static int8_t x464 = INT8_MIN;
	uint32_t t84 = 1076905274U;

    t84 = ((x461*x462)&(x463<=x464));

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x465 = 592651459U;
	int32_t x466 = 0;
	int8_t x467 = INT8_MIN;
	volatile int16_t x468 = -1;
	static volatile uint32_t t85 = 148U;

    t85 = ((x465*x466)&(x467<=x468));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x469 = 0;
	static int16_t x470 = -11;
	int64_t x471 = -2483LL;
	int16_t x472 = 11;
	int32_t t86 = 228;

    t86 = ((x469*x470)&(x471<=x472));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x474 = 91006932427LL;
	volatile uint16_t x475 = 57U;
	volatile int32_t x476 = 599533;
	int64_t t87 = -251879LL;

    t87 = ((x473*x474)&(x475<=x476));

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x478 = 1029LLU;
	uint32_t x479 = 3313U;
	int16_t x480 = -1;
	static volatile uint64_t t88 = 8039366289298446LLU;

    t88 = ((x477*x478)&(x479<=x480));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x485 = INT16_MIN;
	int16_t x486 = 0;
	int32_t x487 = 52;
	uint64_t x488 = 86406LLU;
	static volatile int32_t t89 = 35659695;

    t89 = ((x485*x486)&(x487<=x488));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x505 = -159991902140LL;
	uint16_t x506 = 192U;
	uint16_t x507 = 1U;
	int64_t t90 = -3470053919191442507LL;

    t90 = ((x505*x506)&(x507<=x508));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x509 = 512064U;
	uint32_t x510 = 2015860527U;
	volatile int64_t x511 = INT64_MAX;
	uint64_t x512 = UINT64_MAX;
	static uint32_t t91 = 65U;

    t91 = ((x509*x510)&(x511<=x512));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x517 = 413057U;
	volatile int8_t x519 = -1;
	uint32_t x520 = UINT32_MAX;

    t92 = ((x517*x518)&(x519<=x520));

    if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x521 = 2U;
	int32_t x522 = 1;
	uint8_t x523 = 35U;
	int32_t t93 = 1002975460;

    t93 = ((x521*x522)&(x523<=x524));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x525 = 2452090U;
	volatile int64_t x527 = 20622LL;
	int16_t x528 = 1019;
	uint32_t t94 = 221540U;

    t94 = ((x525*x526)&(x527<=x528));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x530 = -1;
	int16_t x531 = -1;
	static int16_t x532 = INT16_MIN;
	static int32_t t95 = 5353565;

    t95 = ((x529*x530)&(x531<=x532));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x533 = 6;
	volatile uint16_t x534 = 900U;
	int64_t x535 = 29770645680LL;
	int64_t x536 = INT64_MIN;
	volatile int32_t t96 = 60839826;

    t96 = ((x533*x534)&(x535<=x536));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x537 = -1LL;
	volatile int16_t x538 = 369;
	uint16_t x540 = UINT16_MAX;
	int64_t t97 = 1LL;

    t97 = ((x537*x538)&(x539<=x540));

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x541 = INT64_MIN;
	uint16_t x542 = 1U;
	volatile uint16_t x544 = 13307U;
	volatile int64_t t98 = 31329693682993811LL;

    t98 = ((x541*x542)&(x543<=x544));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x549 = UINT32_MAX;
	int8_t x550 = INT8_MAX;
	int64_t x552 = -4138947379995LL;
	uint32_t t99 = 290210443U;

    t99 = ((x549*x550)&(x551<=x552));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x553 = 2550U;
	uint16_t x554 = 15118U;
	volatile uint16_t x556 = 70U;
	uint32_t t100 = 40375254U;

    t100 = ((x553*x554)&(x555<=x556));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x561 = 18LLU;
	int64_t x563 = 1957825661072543LL;
	int8_t x564 = -35;
	volatile uint64_t t101 = 1880615307411LLU;

    t101 = ((x561*x562)&(x563<=x564));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x565 = -153;
	int8_t x567 = INT8_MIN;

    t102 = ((x565*x566)&(x567<=x568));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x574 = -1;
	uint64_t x575 = UINT64_MAX;
	volatile uint32_t x576 = 93037U;
	volatile int32_t t103 = 1298506;

    t103 = ((x573*x574)&(x575<=x576));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x584 = 16;

    t104 = ((x581*x582)&(x583<=x584));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x585 = 5U;
	static uint8_t x586 = 3U;
	static int16_t x587 = INT16_MIN;
	int32_t t105 = 57784;

    t105 = ((x585*x586)&(x587<=x588));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x593 = 497U;
	volatile int8_t x594 = 0;
	static int64_t x595 = INT64_MIN;
	static int16_t x596 = 4;
	volatile uint32_t t106 = 63U;

    t106 = ((x593*x594)&(x595<=x596));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x597 = UINT64_MAX;
	volatile int16_t x598 = 1;
	static int8_t x599 = 0;
	uint8_t x600 = 25U;

    t107 = ((x597*x598)&(x599<=x600));

    if (t107 != 1LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x609 = 7829182494LL;
	volatile int8_t x610 = 4;
	int64_t x611 = INT64_MIN;
	int16_t x612 = INT16_MIN;
	static int64_t t108 = 185176LL;

    t108 = ((x609*x610)&(x611<=x612));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int32_t x613 = -1;
	uint8_t x614 = UINT8_MAX;
	int64_t x616 = INT64_MIN;

    t109 = ((x613*x614)&(x615<=x616));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x617 = 3;
	int16_t x618 = -1;
	uint32_t x619 = 628382505U;
	int8_t x620 = -1;
	static int32_t t110 = -1;

    t110 = ((x617*x618)&(x619<=x620));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x621 = -22;
	int8_t x623 = 0;
	volatile int64_t x624 = -1LL;
	static volatile int32_t t111 = 230178;

    t111 = ((x621*x622)&(x623<=x624));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x629 = INT16_MIN;
	volatile uint8_t x630 = 17U;
	int8_t x632 = -1;
	static int32_t t112 = 6938;

    t112 = ((x629*x630)&(x631<=x632));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x638 = UINT32_MAX;
	uint32_t x640 = 132U;
	volatile uint32_t t113 = 529042U;

    t113 = ((x637*x638)&(x639<=x640));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x641 = INT32_MIN;
	static volatile int64_t x643 = INT64_MAX;
	uint16_t x644 = 18327U;
	static int64_t t114 = 389486353288451LL;

    t114 = ((x641*x642)&(x643<=x644));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x645 = 37;
	int64_t x647 = 22893018051LL;
	int16_t x648 = -1;
	int64_t t115 = 1LL;

    t115 = ((x645*x646)&(x647<=x648));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x649 = INT16_MAX;
	static volatile uint64_t x650 = 61LLU;
	static uint32_t x651 = UINT32_MAX;
	static volatile uint64_t t116 = 57LLU;

    t116 = ((x649*x650)&(x651<=x652));

    if (t116 != 1LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x659 = 1569U;
	uint32_t x660 = UINT32_MAX;
	volatile int32_t t117 = 62836984;

    t117 = ((x657*x658)&(x659<=x660));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x661 = -1;
	volatile int8_t x662 = -1;
	static uint32_t x663 = UINT32_MAX;
	static int8_t x664 = INT8_MAX;
	volatile int32_t t118 = -968153318;

    t118 = ((x661*x662)&(x663<=x664));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x671 = 391U;
	static volatile uint64_t t119 = 922LLU;

    t119 = ((x669*x670)&(x671<=x672));

    if (t119 != 1LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x673 = UINT8_MAX;
	int8_t x674 = INT8_MIN;
	int16_t x675 = INT16_MAX;
	int8_t x676 = -1;

    t120 = ((x673*x674)&(x675<=x676));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x677 = 31532LLU;
	volatile int32_t x679 = -1;
	int8_t x680 = INT8_MIN;
	volatile uint64_t t121 = 318902577961LLU;

    t121 = ((x677*x678)&(x679<=x680));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x681 = 16688037U;
	int64_t x682 = -1LL;
	int8_t x683 = -1;
	volatile int16_t x684 = INT16_MIN;

    t122 = ((x681*x682)&(x683<=x684));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x687 = -174784183029LL;
	uint8_t x688 = 1U;
	volatile int64_t t123 = 23LL;

    t123 = ((x685*x686)&(x687<=x688));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x689 = -1LL;
	int32_t x690 = 287145;
	int16_t x691 = -1;
	int32_t x692 = INT32_MAX;

    t124 = ((x689*x690)&(x691<=x692));

    if (t124 != 1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x693 = -1;
	volatile uint32_t x694 = 4012333U;
	volatile int64_t x695 = INT64_MAX;
	static uint32_t t125 = 12121343U;

    t125 = ((x693*x694)&(x695<=x696));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x697 = -1LL;
	int64_t x698 = INT64_MAX;

    t126 = ((x697*x698)&(x699<=x700));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x701 = 233390494LL;
	int16_t x702 = INT16_MIN;
	static int8_t x704 = INT8_MIN;
	volatile int64_t t127 = -918230908568LL;

    t127 = ((x701*x702)&(x703<=x704));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x709 = 1U;
	uint16_t x710 = 321U;
	volatile uint16_t x712 = UINT16_MAX;
	volatile int32_t t128 = 254799;

    t128 = ((x709*x710)&(x711<=x712));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x717 = -1LL;
	static int32_t x718 = INT32_MAX;
	int64_t x719 = -1LL;
	static uint8_t x720 = UINT8_MAX;

    t129 = ((x717*x718)&(x719<=x720));

    if (t129 != 1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x721 = -72394LL;
	volatile uint8_t x722 = 1U;
	static volatile int8_t x724 = INT8_MIN;
	volatile int64_t t130 = 1067LL;

    t130 = ((x721*x722)&(x723<=x724));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x725 = 3U;
	int32_t x726 = -1;
	volatile int32_t x727 = INT32_MIN;
	volatile uint16_t x728 = 10704U;
	static volatile int32_t t131 = -1238;

    t131 = ((x725*x726)&(x727<=x728));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x729 = -31;
	static int16_t x730 = INT16_MIN;
	int8_t x731 = INT8_MIN;
	uint8_t x732 = 5U;
	int32_t t132 = 152;

    t132 = ((x729*x730)&(x731<=x732));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x733 = UINT64_MAX;
	int8_t x734 = INT8_MIN;
	int8_t x735 = 15;
	volatile int8_t x736 = INT8_MIN;

    t133 = ((x733*x734)&(x735<=x736));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x737 = 1U;
	uint64_t x738 = 137506638314692LLU;
	volatile int32_t x739 = -3041758;
	uint64_t t134 = 252LLU;

    t134 = ((x737*x738)&(x739<=x740));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x741 = -1;
	uint32_t x742 = 522454745U;
	static uint16_t x743 = 923U;
	static volatile int8_t x744 = -1;
	static volatile uint32_t t135 = 405816U;

    t135 = ((x741*x742)&(x743<=x744));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x745 = 521873U;
	int32_t x746 = -1;
	uint32_t x747 = UINT32_MAX;
	int16_t x748 = 1777;

    t136 = ((x745*x746)&(x747<=x748));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x749 = 116396LLU;
	int32_t x750 = INT32_MAX;
	volatile uint64_t x751 = 490253063328930LLU;
	int64_t x752 = -1LL;
	uint64_t t137 = 19590718LLU;

    t137 = ((x749*x750)&(x751<=x752));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x753 = INT64_MIN;
	uint64_t x754 = 1725038069917827LLU;
	int16_t x755 = INT16_MIN;
	int8_t x756 = -7;

    t138 = ((x753*x754)&(x755<=x756));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x761 = INT16_MIN;
	static int64_t x762 = 0LL;
	int32_t x763 = INT32_MIN;
	int8_t x764 = -1;
	static volatile int64_t t139 = -2329783LL;

    t139 = ((x761*x762)&(x763<=x764));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint32_t x769 = 12856022U;
	volatile int8_t x770 = -1;
	uint32_t x771 = 3161133U;
	volatile uint64_t x772 = UINT64_MAX;
	volatile uint32_t t140 = 50120U;

    t140 = ((x769*x770)&(x771<=x772));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x774 = 7431;
	static int64_t x775 = 2692265464LL;
	int8_t x776 = 3;
	int32_t t141 = 94;

    t141 = ((x773*x774)&(x775<=x776));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x778 = -1LL;
	int8_t x779 = INT8_MIN;
	int64_t x780 = 213017550806815LL;
	int64_t t142 = -159258658363LL;

    t142 = ((x777*x778)&(x779<=x780));

    if (t142 != 1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x790 = 1;
	uint64_t x791 = 55383932LLU;
	int16_t x792 = 4;

    t143 = ((x789*x790)&(x791<=x792));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x793 = -1LL;
	static int16_t x794 = -1;
	int8_t x795 = INT8_MIN;
	int64_t t144 = -14270924553LL;

    t144 = ((x793*x794)&(x795<=x796));

    if (t144 != 1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x797 = -7335954630829LL;
	uint16_t x798 = 10760U;
	volatile int64_t x799 = -1LL;
	volatile int16_t x800 = INT16_MIN;
	static int64_t t145 = 7429982638380252LL;

    t145 = ((x797*x798)&(x799<=x800));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x801 = -36;
	static uint16_t x802 = 65U;
	int16_t x803 = INT16_MIN;
	int32_t x804 = -1;
	int32_t t146 = 0;

    t146 = ((x801*x802)&(x803<=x804));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x817 = 8U;
	volatile uint32_t x819 = UINT32_MAX;
	static int32_t t147 = 238976;

    t147 = ((x817*x818)&(x819<=x820));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x821 = INT32_MIN;
	uint64_t x822 = 213408231085LLU;
	uint16_t x824 = 23038U;
	uint64_t t148 = 6736884990LLU;

    t148 = ((x821*x822)&(x823<=x824));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x833 = INT8_MIN;
	int8_t x834 = -1;
	static int8_t x835 = INT8_MIN;
	int64_t x836 = -1LL;
	volatile int32_t t149 = 0;

    t149 = ((x833*x834)&(x835<=x836));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x837 = -1;
	int16_t x838 = -32;
	int16_t x839 = -23;
	int32_t x840 = INT32_MIN;
	int32_t t150 = 95479975;

    t150 = ((x837*x838)&(x839<=x840));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x841 = 0;
	int64_t x842 = 16554149758583380LL;
	volatile int32_t x843 = -1;
	static int8_t x844 = 0;
	int64_t t151 = -365886793LL;

    t151 = ((x841*x842)&(x843<=x844));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x849 = UINT32_MAX;
	int16_t x850 = INT16_MIN;
	int64_t x851 = 96754599184866LL;
	uint32_t t152 = 7549U;

    t152 = ((x849*x850)&(x851<=x852));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x854 = INT16_MIN;
	static volatile int8_t x855 = INT8_MAX;
	uint64_t t153 = 7557712102264716642LLU;

    t153 = ((x853*x854)&(x855<=x856));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x858 = 31;
	int16_t x859 = INT16_MAX;
	static int8_t x860 = INT8_MIN;
	static volatile int32_t t154 = 2449;

    t154 = ((x857*x858)&(x859<=x860));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x864 = -1LL;
	int32_t t155 = -1438278;

    t155 = ((x861*x862)&(x863<=x864));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x865 = INT32_MAX;
	uint32_t x868 = UINT32_MAX;
	volatile int32_t t156 = -2;

    t156 = ((x865*x866)&(x867<=x868));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x870 = UINT16_MAX;
	int64_t x871 = INT64_MAX;
	static volatile int8_t x872 = -1;
	static volatile int32_t t157 = -311083;

    t157 = ((x869*x870)&(x871<=x872));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x878 = 133285796522LLU;
	uint16_t x879 = UINT16_MAX;
	int32_t x880 = -5;
	volatile uint64_t t158 = 7LLU;

    t158 = ((x877*x878)&(x879<=x880));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x881 = 0U;
	int64_t x882 = INT64_MIN;
	static volatile int8_t x883 = 55;
	int16_t x884 = -15;

    t159 = ((x881*x882)&(x883<=x884));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x893 = UINT16_MAX;
	int16_t x894 = INT16_MIN;
	volatile int32_t x895 = -1;
	uint32_t x896 = UINT32_MAX;
	int32_t t160 = -14827;

    t160 = ((x893*x894)&(x895<=x896));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x897 = 66412047U;
	int32_t x898 = 182;
	uint32_t x899 = UINT32_MAX;
	static int8_t x900 = INT8_MIN;
	volatile uint32_t t161 = 331619477U;

    t161 = ((x897*x898)&(x899<=x900));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x901 = -1;
	int32_t x902 = -50;
	volatile int64_t x903 = INT64_MIN;
	static uint32_t x904 = 138652629U;

    t162 = ((x901*x902)&(x903<=x904));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x905 = INT16_MIN;
	uint16_t x906 = 1978U;
	uint16_t x908 = UINT16_MAX;

    t163 = ((x905*x906)&(x907<=x908));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x910 = UINT64_MAX;
	uint64_t x911 = 146LLU;
	static int8_t x912 = INT8_MAX;
	volatile uint64_t t164 = 462671473173LLU;

    t164 = ((x909*x910)&(x911<=x912));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x913 = INT8_MIN;
	uint32_t x914 = UINT32_MAX;
	static int32_t x915 = -1;
	static uint16_t x916 = 10U;
	uint32_t t165 = 307521U;

    t165 = ((x913*x914)&(x915<=x916));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x917 = -423;
	int8_t x918 = INT8_MIN;
	int32_t x919 = -1;
	static int8_t x920 = -1;
	volatile int32_t t166 = -27109;

    t166 = ((x917*x918)&(x919<=x920));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x921 = -1;
	int8_t x922 = 0;
	int16_t x923 = INT16_MAX;
	volatile int16_t x924 = INT16_MAX;

    t167 = ((x921*x922)&(x923<=x924));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x929 = INT16_MIN;
	static volatile int16_t x930 = INT16_MIN;
	volatile int16_t x931 = 1;
	int32_t x932 = 5675265;
	volatile int32_t t168 = 10469;

    t168 = ((x929*x930)&(x931<=x932));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x933 = -1;
	volatile uint32_t x934 = UINT32_MAX;
	int32_t x935 = -1;
	uint8_t x936 = UINT8_MAX;
	static uint32_t t169 = 839668798U;

    t169 = ((x933*x934)&(x935<=x936));

    if (t169 != 1U) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x938 = -1;
	static volatile int32_t x939 = INT32_MAX;
	int16_t x940 = INT16_MIN;
	volatile int32_t t170 = 265488;

    t170 = ((x937*x938)&(x939<=x940));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x941 = 15U;
	int32_t x942 = -1;
	int32_t x943 = INT32_MIN;
	uint16_t x944 = 7852U;
	volatile int32_t t171 = -109222;

    t171 = ((x941*x942)&(x943<=x944));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x945 = INT8_MAX;
	int16_t x946 = -4755;
	static uint64_t x947 = 159643058557588140LLU;
	int32_t x948 = 1;
	volatile int32_t t172 = 0;

    t172 = ((x945*x946)&(x947<=x948));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x949 = UINT32_MAX;
	uint64_t x950 = 25LLU;
	int64_t x951 = INT64_MIN;
	volatile uint64_t t173 = 831573518LLU;

    t173 = ((x949*x950)&(x951<=x952));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x953 = -59;
	static int64_t x954 = 34090398429268157LL;
	int64_t x955 = INT64_MIN;
	int64_t t174 = -21145075670LL;

    t174 = ((x953*x954)&(x955<=x956));

    if (t174 != 1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x959 = 0;
	static int32_t x960 = INT32_MIN;
	int64_t t175 = 46041LL;

    t175 = ((x957*x958)&(x959<=x960));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x961 = -1LL;
	static int32_t x962 = INT32_MAX;
	uint16_t x963 = UINT16_MAX;
	uint16_t x964 = 0U;
	volatile int64_t t176 = 2977605LL;

    t176 = ((x961*x962)&(x963<=x964));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x965 = 7U;
	volatile int8_t x966 = -2;
	int8_t x967 = -1;
	int8_t x968 = 21;

    t177 = ((x965*x966)&(x967<=x968));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x973 = 0U;
	int64_t x974 = INT64_MAX;
	uint64_t x975 = 615158LLU;
	int64_t t178 = 115845506496833301LL;

    t178 = ((x973*x974)&(x975<=x976));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x977 = -37;
	volatile int16_t x978 = -16219;
	int64_t x979 = INT64_MAX;
	int64_t x980 = -1LL;
	static int32_t t179 = -84038;

    t179 = ((x977*x978)&(x979<=x980));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x981 = 1086121779638LL;
	static int8_t x982 = INT8_MAX;
	volatile int16_t x983 = INT16_MIN;
	int64_t x984 = INT64_MIN;
	int64_t t180 = 1962984646006965LL;

    t180 = ((x981*x982)&(x983<=x984));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x985 = -1;
	volatile int8_t x986 = -1;
	volatile int8_t x987 = 40;
	uint32_t x988 = 63741U;
	int32_t t181 = -381326;

    t181 = ((x985*x986)&(x987<=x988));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x990 = 412;
	int64_t x991 = INT64_MIN;
	uint64_t x992 = UINT64_MAX;
	volatile int32_t t182 = -7550658;

    t182 = ((x989*x990)&(x991<=x992));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x993 = 34U;
	int8_t x994 = INT8_MAX;
	int8_t x995 = -17;
	int8_t x996 = -5;
	volatile int32_t t183 = 119216;

    t183 = ((x993*x994)&(x995<=x996));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1001 = -1LL;
	int8_t x1002 = 3;
	uint16_t x1003 = UINT16_MAX;
	int32_t x1004 = INT32_MIN;
	int64_t t184 = -468688070424462LL;

    t184 = ((x1001*x1002)&(x1003<=x1004));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1005 = -1LL;
	int8_t x1006 = 51;
	int32_t x1007 = INT32_MIN;
	static uint64_t x1008 = 3560402190359735LLU;
	volatile int64_t t185 = -46604237648LL;

    t185 = ((x1005*x1006)&(x1007<=x1008));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x1009 = 4623;
	int16_t x1010 = INT16_MAX;
	static int8_t x1011 = 0;
	static int8_t x1012 = -1;

    t186 = ((x1009*x1010)&(x1011<=x1012));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1014 = 876963301582177685LLU;
	int8_t x1016 = -1;
	uint64_t t187 = 20524583274LLU;

    t187 = ((x1013*x1014)&(x1015<=x1016));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1017 = INT16_MAX;
	int16_t x1018 = -1;
	uint64_t x1019 = 1779561378337912512LLU;
	int16_t x1020 = INT16_MAX;
	int32_t t188 = -1272066;

    t188 = ((x1017*x1018)&(x1019<=x1020));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1022 = 51108LLU;
	uint32_t x1024 = 515599309U;

    t189 = ((x1021*x1022)&(x1023<=x1024));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1030 = -31;
	int64_t x1031 = 850735689110212814LL;
	int32_t x1032 = INT32_MIN;
	volatile int32_t t190 = -27983769;

    t190 = ((x1029*x1030)&(x1031<=x1032));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1034 = INT64_MAX;
	int64_t x1035 = INT64_MAX;
	static volatile uint64_t x1036 = 281754278696625649LLU;
	volatile int64_t t191 = -217334925458718401LL;

    t191 = ((x1033*x1034)&(x1035<=x1036));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x1037 = UINT32_MAX;
	volatile int16_t x1038 = INT16_MAX;
	uint16_t x1039 = 12873U;
	static int64_t x1040 = INT64_MIN;
	static volatile uint32_t t192 = 30823U;

    t192 = ((x1037*x1038)&(x1039<=x1040));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x1042 = INT8_MIN;
	uint64_t x1044 = 17013523245655LLU;
	int32_t t193 = 245655;

    t193 = ((x1041*x1042)&(x1043<=x1044));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1055 = UINT64_MAX;
	uint16_t x1056 = 3U;
	int32_t t194 = -1748;

    t194 = ((x1053*x1054)&(x1055<=x1056));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1057 = UINT32_MAX;
	volatile int8_t x1059 = INT8_MAX;
	volatile uint64_t x1060 = UINT64_MAX;
	static uint32_t t195 = 4U;

    t195 = ((x1057*x1058)&(x1059<=x1060));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1061 = INT8_MIN;
	int8_t x1062 = 0;
	uint64_t x1063 = 362408LLU;
	int32_t x1064 = 138;
	static int32_t t196 = -2;

    t196 = ((x1061*x1062)&(x1063<=x1064));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1067 = UINT16_MAX;
	int16_t x1068 = INT16_MAX;
	volatile int64_t t197 = 33504859614LL;

    t197 = ((x1065*x1066)&(x1067<=x1068));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1069 = 415865421277859LLU;
	uint64_t x1072 = 12264887564LLU;
	volatile uint64_t t198 = 357115LLU;

    t198 = ((x1069*x1070)&(x1071<=x1072));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1077 = 49U;
	uint64_t x1078 = UINT64_MAX;
	int64_t x1080 = -1LL;
	uint64_t t199 = 34880603205967563LLU;

    t199 = ((x1077*x1078)&(x1079<=x1080));

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

