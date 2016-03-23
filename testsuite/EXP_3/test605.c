
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

int32_t x2 = INT32_MIN;
int32_t x7 = INT32_MIN;
int32_t x16 = -341154;
volatile int32_t t2 = 13639885;
uint8_t x22 = 12U;
int8_t x23 = 6;
uint32_t t4 = 4910512U;
volatile uint16_t x26 = 7727U;
int8_t x29 = 44;
static int16_t x31 = INT16_MAX;
volatile int64_t t7 = -305486LL;
uint64_t x38 = 5155949244883160860LLU;
int8_t x40 = INT8_MAX;
uint32_t x43 = 60562U;
volatile int32_t x44 = 99282895;
static int16_t x49 = 2206;
uint64_t t11 = 14620043673420LLU;
int64_t x61 = -1LL;
volatile uint8_t x63 = UINT8_MAX;
static uint8_t x67 = 2U;
uint16_t x68 = UINT16_MAX;
int32_t x69 = -630078887;
uint32_t x70 = UINT32_MAX;
volatile int64_t x75 = 281LL;
int64_t x76 = -1LL;
uint64_t t21 = 484074728738460440LLU;
static volatile int64_t t22 = 636367693696LL;
int16_t x103 = -1;
static volatile int16_t x108 = INT16_MAX;
volatile int64_t t24 = -16194686LL;
static uint64_t x111 = 3670400614681135LLU;
int32_t x112 = INT32_MAX;
volatile int16_t x118 = INT16_MIN;
static int32_t x120 = INT32_MAX;
volatile uint64_t t27 = 51066393820LLU;
static int64_t x131 = INT64_MIN;
static int16_t x145 = -1;
int64_t t34 = -17489916LL;
volatile int64_t t37 = -36250086082647LL;
uint64_t x173 = UINT64_MAX;
static uint32_t x176 = UINT32_MAX;
volatile int32_t x179 = INT32_MAX;
int16_t x185 = 33;
volatile uint32_t x191 = UINT32_MAX;
int8_t x193 = -2;
int16_t x195 = -874;
int64_t x196 = -158067LL;
static int32_t x203 = -42;
uint8_t x207 = 0U;
int32_t x208 = INT32_MIN;
uint64_t x219 = 358080068237650LLU;
static int8_t x220 = INT8_MIN;
volatile uint64_t t47 = 78LLU;
static int16_t x222 = 0;
static int64_t x224 = INT64_MAX;
static volatile int32_t t50 = -356303750;
int8_t x237 = INT8_MIN;
static int8_t x239 = INT8_MIN;
int16_t x240 = -62;
uint64_t t52 = 14220059254803666LLU;
int8_t x247 = -1;
static volatile int8_t x257 = 2;
static int8_t x258 = 1;
volatile int64_t t55 = 5915047914490476LL;
int8_t x267 = INT8_MIN;
volatile int64_t t56 = -473066794407931743LL;
uint64_t x269 = 22797998316169LLU;
int8_t x280 = 28;
int64_t x289 = -109845LL;
volatile uint32_t x292 = 528227029U;
static int16_t x300 = INT16_MAX;
int8_t x303 = -1;
int32_t x304 = INT32_MIN;
int16_t x308 = INT16_MAX;
uint64_t x309 = UINT64_MAX;
uint32_t x313 = 1U;
uint8_t x323 = UINT8_MAX;
uint64_t t69 = 793448919967554537LLU;
int8_t x327 = -1;
uint64_t x329 = UINT64_MAX;
int32_t x344 = INT32_MAX;
static int64_t x347 = -171693586049940LL;
int32_t x355 = INT32_MAX;
uint64_t x356 = 113284LLU;
static volatile uint64_t t77 = 179672741562877LLU;
volatile int8_t x358 = -48;
uint16_t x360 = 14845U;
uint32_t x362 = 102285U;
int8_t x367 = -1;
volatile int32_t x374 = INT32_MIN;
int32_t t81 = -1;
static int32_t t83 = -4;
static volatile int64_t x398 = INT64_MAX;
volatile int64_t t86 = -331239631LL;
static int16_t x409 = INT16_MIN;
uint64_t t88 = 97339603788LLU;
uint64_t x419 = 3386505LLU;
int16_t x425 = INT16_MIN;
int8_t x427 = -1;
uint64_t x428 = 128920748222659LLU;
volatile uint8_t x431 = 1U;
static int32_t x432 = -507157568;
uint64_t t92 = 470561952493787LLU;
int16_t x443 = INT16_MIN;
volatile int8_t x452 = INT8_MIN;
int32_t x455 = INT32_MIN;
static volatile uint32_t t95 = 11613707U;
volatile int8_t x457 = INT8_MIN;
static int64_t x460 = 197904728373LL;
int64_t x463 = INT64_MAX;
uint64_t x464 = 1073143269735LLU;
volatile uint64_t t97 = 409609638LLU;
uint64_t x473 = 1784866LLU;
int8_t x474 = INT8_MIN;
static int16_t x477 = -1;
uint32_t x479 = 16290U;
volatile uint32_t t101 = 58335U;
static int64_t x499 = -1LL;
int64_t x507 = 1LL;
uint64_t x516 = 1055698812LLU;
int8_t x526 = 1;
volatile uint64_t t110 = 34011708250274LLU;
int8_t x552 = INT8_MAX;
uint64_t t111 = 14904460190651548LLU;
static volatile uint32_t x554 = 15199442U;
uint8_t x558 = UINT8_MAX;
int16_t x561 = INT16_MIN;
int8_t x563 = INT8_MIN;
static int64_t x564 = 30051686LL;
uint16_t x565 = 4362U;
int8_t x601 = INT8_MIN;
volatile int64_t x603 = 22251912909331LL;
uint16_t x604 = 1U;
volatile int32_t t122 = -110136988;
int64_t x609 = 5206164518662012LL;
int64_t t123 = 50519271212790156LL;
static int32_t x613 = INT32_MIN;
static uint16_t x616 = 1U;
volatile uint64_t t124 = 242550117LLU;
volatile uint16_t x620 = 24U;
volatile uint64_t x641 = 28149950493686LLU;
static volatile int16_t x642 = INT16_MIN;
uint32_t x648 = UINT32_MAX;
static int8_t x650 = -1;
volatile int32_t x651 = -1;
int8_t x655 = INT8_MAX;
int8_t x664 = 10;
int32_t x668 = INT32_MIN;
volatile int64_t t133 = -201887LL;
int8_t x671 = -1;
uint32_t x672 = 29465709U;
static int16_t x673 = -1;
int32_t x684 = -3889;
volatile int64_t t137 = 36640907594LL;
uint64_t x694 = 130977020344620347LLU;
uint64_t t139 = 5285225360382768LLU;
static volatile uint8_t x705 = 26U;
int8_t x707 = -1;
int8_t x731 = -1;
int8_t x734 = -24;
static int32_t t147 = -36093349;
int64_t x747 = -1LL;
int64_t x759 = INT64_MIN;
int64_t x761 = INT64_MIN;
volatile int8_t x762 = INT8_MIN;
volatile int32_t x788 = INT32_MIN;
static uint32_t t156 = 2U;
int32_t x801 = INT32_MIN;
int8_t x814 = INT8_MIN;
static uint64_t x815 = 12102050563298251LLU;
volatile int64_t t162 = -308307LL;
volatile int32_t x823 = INT32_MAX;
static int32_t x847 = INT32_MAX;
int16_t x855 = -11;
uint64_t x861 = 10252283319LLU;
uint32_t x863 = 3U;
uint8_t x889 = 5U;
volatile int64_t x903 = INT64_MIN;
volatile uint64_t t175 = 168431771541170336LLU;
uint8_t x909 = 1U;
uint32_t x928 = UINT32_MAX;
uint32_t x932 = 91712870U;
static uint32_t x938 = 82470U;
uint8_t x952 = 20U;
uint64_t x958 = 105830246140LLU;
static int32_t x959 = 2624;
uint16_t x964 = UINT16_MAX;
int64_t t190 = -9214LL;
int16_t x988 = INT16_MAX;
uint64_t t192 = 212LLU;
int8_t x989 = 1;
uint8_t x1011 = 100U;
int32_t x1012 = -28;
uint8_t x1015 = 3U;
int8_t x1023 = -51;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	volatile int16_t x3 = INT16_MIN;
	int64_t x4 = INT64_MIN;
	static volatile int64_t t0 = 70LL;

    t0 = ((x1-x2)*(x3/x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 1656341U;
	int64_t x6 = 763324641932LL;
	static int16_t x8 = 205;
	volatile int64_t t1 = -64226LL;

    t1 = ((x5-x6)*(x7/x8));

    if (t1 != 7996212071925102639LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x13 = 40;
	uint16_t x14 = UINT16_MAX;
	uint16_t x15 = 2U;

    t2 = ((x13-x14)*(x15/x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = -1;
	int32_t x18 = -1;
	int8_t x19 = INT8_MIN;
	static uint16_t x20 = 8898U;
	volatile int32_t t3 = 245864487;

    t3 = ((x17-x18)*(x19/x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x21 = UINT32_MAX;
	int16_t x24 = INT16_MIN;

    t4 = ((x21-x22)*(x23/x24));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = INT16_MAX;
	uint64_t x27 = UINT64_MAX;
	uint16_t x28 = 5428U;
	volatile uint64_t t5 = 88960325962LLU;

    t5 = ((x25-x26)*(x27/x28));

    if (t5 != 11310015526401116816LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x30 = 24U;
	static int64_t x32 = INT64_MAX;
	volatile int64_t t6 = -1904821695LL;

    t6 = ((x29-x30)*(x31/x32));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = -1;
	int64_t x34 = 55448280LL;
	int64_t x35 = -1LL;
	int32_t x36 = -1;

    t7 = ((x33-x34)*(x35/x36));

    if (t7 != -55448281LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x37 = 9763U;
	uint16_t x39 = 26U;
	uint64_t t8 = 2027818740276961485LLU;

    t8 = ((x37-x38)*(x39/x40));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = UINT16_MAX;
	int8_t x42 = INT8_MIN;
	uint32_t t9 = 1426U;

    t9 = ((x41-x42)*(x43/x44));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x45 = 4U;
	int32_t x46 = -317285;
	int16_t x47 = INT16_MAX;
	static int8_t x48 = INT8_MAX;
	static uint32_t t10 = 527849144U;

    t10 = ((x45-x46)*(x47/x48));

    if (t10 != 81860562U) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x50 = 258295770LLU;
	volatile int16_t x51 = INT16_MAX;
	static volatile uint8_t x52 = 2U;

    t11 = ((x49-x50)*(x51/x52));

    if (t11 != 18446739842086092604LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = 23;
	int64_t x54 = 147203814999LL;
	int8_t x55 = INT8_MAX;
	int64_t x56 = -1LL;
	int64_t t12 = -2345303048116760LL;

    t12 = ((x53-x54)*(x55/x56));

    if (t12 != 18694884501952LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x57 = 10U;
	int8_t x58 = INT8_MIN;
	int64_t x59 = -517548487110335LL;
	uint64_t x60 = UINT64_MAX;
	uint64_t t13 = 58990LLU;

    t13 = ((x57-x58)*(x59/x60));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x62 = 9U;
	static uint64_t x64 = 48056434639275LLU;
	volatile uint64_t t14 = 1097193798432210LLU;

    t14 = ((x61-x62)*(x63/x64));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = 373077U;
	static int64_t x66 = 896649612769LL;
	static int64_t t15 = 16234626LL;

    t15 = ((x65-x66)*(x67/x68));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint16_t x71 = 0U;
	uint16_t x72 = UINT16_MAX;
	static uint32_t t16 = 16709853U;

    t16 = ((x69-x70)*(x71/x72));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x73 = -1;
	int32_t x74 = INT32_MIN;
	int64_t t17 = -518473832205LL;

    t17 = ((x73-x74)*(x75/x76));

    if (t17 != -603442904807LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x77 = 360U;
	int16_t x78 = 0;
	volatile int8_t x79 = -1;
	int16_t x80 = INT16_MAX;
	int32_t t18 = 314;

    t18 = ((x77-x78)*(x79/x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x81 = 15551U;
	int16_t x82 = 0;
	int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MIN;
	static volatile uint32_t t19 = 1063692432U;

    t19 = ((x81-x82)*(x83/x84));

    if (t19 != 3981056U) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = -1;
	volatile uint64_t x86 = UINT64_MAX;
	uint64_t x87 = UINT64_MAX;
	int16_t x88 = -1;
	uint64_t t20 = 1605929593LLU;

    t20 = ((x85-x86)*(x87/x88));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MAX;
	uint8_t x95 = 42U;
	static uint64_t x96 = UINT64_MAX;

    t21 = ((x93-x94)*(x95/x96));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x97 = UINT32_MAX;
	int64_t x98 = -1626213LL;
	static int8_t x99 = INT8_MAX;
	int32_t x100 = 48;

    t22 = ((x97-x98)*(x99/x100));

    if (t22 != 8593187016LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x101 = UINT16_MAX;
	static int8_t x102 = INT8_MAX;
	int16_t x104 = INT16_MIN;
	volatile int32_t t23 = -2870420;

    t23 = ((x101-x102)*(x103/x104));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x105 = -1LL;
	int64_t x106 = -14LL;
	volatile uint16_t x107 = 31U;

    t24 = ((x105-x106)*(x107/x108));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x109 = INT32_MAX;
	int64_t x110 = -882797LL;
	uint64_t t25 = 241943334975882645LLU;

    t25 = ((x109-x110)*(x111/x112));

    if (t25 != 3671908436526372LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x117 = INT16_MAX;
	int32_t x119 = INT32_MAX;
	volatile int32_t t26 = -673151451;

    t26 = ((x117-x118)*(x119/x120));

    if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x121 = 0;
	volatile int16_t x122 = INT16_MIN;
	static int32_t x123 = 8;
	uint64_t x124 = 22477258960343760LLU;

    t27 = ((x121-x122)*(x123/x124));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x125 = 95U;
	volatile uint8_t x126 = 1U;
	volatile int8_t x127 = -1;
	int32_t x128 = 3;
	int32_t t28 = 57760392;

    t28 = ((x125-x126)*(x127/x128));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = -1;
	uint8_t x130 = 2U;
	volatile int8_t x132 = INT8_MAX;
	static int64_t t29 = -11992199LL;

    t29 = ((x129-x130)*(x131/x132));

    if (t29 != 217874930004443523LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x137 = INT8_MIN;
	int32_t x138 = -123533422;
	int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MIN;
	int32_t t30 = -58;

    t30 = ((x137-x138)*(x139/x140));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x141 = UINT32_MAX;
	uint64_t x142 = 3245598LLU;
	uint32_t x143 = UINT32_MAX;
	int64_t x144 = 3297717607426023823LL;
	static uint64_t t31 = 3828486116LLU;

    t31 = ((x141-x142)*(x143/x144));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x146 = -9;
	int32_t x147 = -1;
	static int32_t x148 = 93100873;
	static int32_t t32 = 1;

    t32 = ((x145-x146)*(x147/x148));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x149 = -1;
	int8_t x150 = INT8_MIN;
	uint16_t x151 = UINT16_MAX;
	static volatile int64_t x152 = 939549273LL;
	volatile int64_t t33 = 423275737180545LL;

    t33 = ((x149-x150)*(x151/x152));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x157 = 0U;
	int8_t x158 = 6;
	int64_t x159 = -1055198546174785556LL;
	int64_t x160 = 2LL;

    t34 = ((x157-x158)*(x159/x160));

    if (t34 != 3165595638524356668LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x161 = INT16_MIN;
	static volatile uint16_t x162 = 960U;
	int16_t x163 = INT16_MIN;
	int8_t x164 = INT8_MIN;
	volatile int32_t t35 = 9025;

    t35 = ((x161-x162)*(x163/x164));

    if (t35 != -8634368) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x165 = INT64_MIN;
	static uint64_t x166 = 13LLU;
	int64_t x167 = -11756574235LL;
	uint32_t x168 = 178240784U;
	volatile uint64_t t36 = 30229480762190LLU;

    t36 = ((x165-x166)*(x167/x168));

    if (t36 != 9223372036854776653LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x169 = -1;
	int8_t x170 = INT8_MAX;
	int16_t x171 = INT16_MIN;
	int64_t x172 = INT64_MAX;

    t37 = ((x169-x170)*(x171/x172));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint16_t x174 = 3U;
	volatile int8_t x175 = -8;
	volatile uint64_t t38 = 280868589998272LLU;

    t38 = ((x173-x174)*(x175/x176));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x177 = UINT64_MAX;
	static int32_t x178 = 0;
	volatile int8_t x180 = -1;
	uint64_t t39 = 134925594868LLU;

    t39 = ((x177-x178)*(x179/x180));

    if (t39 != 2147483647LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x181 = 70861LLU;
	volatile uint16_t x182 = 448U;
	uint16_t x183 = 0U;
	int16_t x184 = INT16_MAX;
	uint64_t t40 = 5052302LLU;

    t40 = ((x181-x182)*(x183/x184));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x186 = 29LLU;
	uint64_t x187 = 13026894774009LLU;
	static int32_t x188 = 4956215;
	volatile uint64_t t41 = 47984917904LLU;

    t41 = ((x185-x186)*(x187/x188));

    if (t41 != 10513580LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x189 = 14686734U;
	uint16_t x190 = 4637U;
	static uint64_t x192 = UINT64_MAX;
	uint64_t t42 = 1562887679LLU;

    t42 = ((x189-x190)*(x191/x192));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x194 = 1283655839103825465LLU;
	uint64_t t43 = 52252LLU;

    t43 = ((x193-x194)*(x195/x196));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x201 = 7492;
	int8_t x202 = INT8_MIN;
	static volatile int32_t x204 = INT32_MIN;
	int32_t t44 = 1354006;

    t44 = ((x201-x202)*(x203/x204));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x205 = UINT64_MAX;
	static int8_t x206 = 22;
	static volatile uint64_t t45 = 17LLU;

    t45 = ((x205-x206)*(x207/x208));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x213 = UINT8_MAX;
	uint32_t x214 = UINT32_MAX;
	uint32_t x215 = 37U;
	static int32_t x216 = -1;
	volatile uint32_t t46 = 3U;

    t46 = ((x213-x214)*(x215/x216));

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x217 = -526147147522748813LL;
	uint64_t x218 = 27LLU;

    t47 = ((x217-x218)*(x219/x220));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x221 = UINT64_MAX;
	int64_t x223 = INT64_MIN;
	volatile uint64_t t48 = 97883LLU;

    t48 = ((x221-x222)*(x223/x224));

    if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x229 = 97U;
	volatile int8_t x230 = INT8_MIN;
	volatile int32_t x231 = -24106271;
	int8_t x232 = INT8_MAX;
	volatile int32_t t49 = -687;

    t49 = ((x229-x230)*(x231/x232));

    if (t49 != -42707925) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x233 = UINT8_MAX;
	int8_t x234 = -1;
	uint16_t x235 = 6U;
	int16_t x236 = INT16_MIN;

    t50 = ((x233-x234)*(x235/x236));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x238 = INT16_MAX;
	volatile int32_t t51 = -276832727;

    t51 = ((x237-x238)*(x239/x240));

    if (t51 != -65790) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x241 = UINT64_MAX;
	int32_t x242 = INT32_MIN;
	uint16_t x243 = 31868U;
	volatile uint32_t x244 = UINT32_MAX;

    t52 = ((x241-x242)*(x243/x244));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x245 = -1;
	uint16_t x246 = 106U;
	int32_t x248 = -31708229;
	int32_t t53 = 1525222;

    t53 = ((x245-x246)*(x247/x248));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x259 = INT32_MIN;
	int64_t x260 = INT64_MAX;
	volatile int64_t t54 = -67326238LL;

    t54 = ((x257-x258)*(x259/x260));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x261 = UINT16_MAX;
	static volatile int8_t x262 = INT8_MIN;
	int32_t x263 = INT32_MIN;
	volatile int64_t x264 = INT64_MAX;

    t55 = ((x261-x262)*(x263/x264));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x265 = -1;
	int64_t x266 = INT64_MAX;
	int16_t x268 = INT16_MIN;

    t56 = ((x265-x266)*(x267/x268));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x270 = UINT64_MAX;
	int64_t x271 = -1666236913856630473LL;
	uint64_t x272 = 5276969LLU;
	uint64_t t57 = 123072982LLU;

    t57 = ((x269-x270)*(x271/x272));

    if (t57 != 1856511059185032810LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x273 = INT8_MAX;
	int8_t x274 = INT8_MIN;
	int64_t x275 = -1618186333590568893LL;
	volatile int16_t x276 = 5510;
	int64_t t58 = -697LL;

    t58 = ((x273-x274)*(x275/x276));

    if (t58 != -74888841209726865LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x277 = INT8_MAX;
	uint8_t x278 = 3U;
	uint16_t x279 = 6U;
	int32_t t59 = -18;

    t59 = ((x277-x278)*(x279/x280));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x285 = INT16_MAX;
	volatile uint8_t x286 = UINT8_MAX;
	uint8_t x287 = 1U;
	static uint16_t x288 = 3U;
	volatile int32_t t60 = 117649748;

    t60 = ((x285-x286)*(x287/x288));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x290 = INT16_MAX;
	uint64_t x291 = UINT64_MAX;
	static uint64_t t61 = 27103790230LLU;

    t61 = ((x289-x290)*(x291/x292));

    if (t61 != 18441763777508586120LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x293 = 14;
	static volatile uint64_t x294 = 56508857LLU;
	int16_t x295 = -1;
	int64_t x296 = INT64_MIN;
	volatile uint64_t t62 = 1574LLU;

    t62 = ((x293-x294)*(x295/x296));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x297 = 14997U;
	static uint32_t x298 = 129342000U;
	volatile int8_t x299 = INT8_MIN;
	static uint32_t t63 = 4449559U;

    t63 = ((x297-x298)*(x299/x300));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x301 = 48U;
	int32_t x302 = INT32_MIN;
	volatile uint32_t t64 = 36U;

    t64 = ((x301-x302)*(x303/x304));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x305 = -58;
	static uint8_t x306 = 87U;
	int64_t x307 = INT64_MIN;
	volatile int64_t t65 = 7909576324134149LL;

    t65 = ((x305-x306)*(x307/x308));

    if (t65 != 40815117201573000LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x310 = -1;
	int32_t x311 = INT32_MIN;
	int64_t x312 = INT64_MAX;
	uint64_t t66 = 188464953519776470LLU;

    t66 = ((x309-x310)*(x311/x312));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x314 = -1;
	uint8_t x315 = 54U;
	int16_t x316 = 2013;
	static volatile uint32_t t67 = 40141991U;

    t67 = ((x313-x314)*(x315/x316));

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x317 = -1;
	int8_t x318 = INT8_MIN;
	int16_t x319 = INT16_MAX;
	int8_t x320 = INT8_MAX;
	int32_t t68 = 30;

    t68 = ((x317-x318)*(x319/x320));

    if (t68 != 32766) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x321 = INT64_MAX;
	static uint64_t x322 = UINT64_MAX;
	int64_t x324 = -1LL;

    t69 = ((x321-x322)*(x323/x324));

    if (t69 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x325 = INT8_MIN;
	int32_t x326 = 6092;
	static int16_t x328 = -1;
	int32_t t70 = 6619;

    t70 = ((x325-x326)*(x327/x328));

    if (t70 != -6220) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x330 = UINT8_MAX;
	uint8_t x331 = 1U;
	uint64_t x332 = 11057094936204254LLU;
	volatile uint64_t t71 = 0LLU;

    t71 = ((x329-x330)*(x331/x332));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x333 = UINT64_MAX;
	uint64_t x334 = 267015008LLU;
	volatile uint8_t x335 = UINT8_MAX;
	volatile int32_t x336 = INT32_MAX;
	volatile uint64_t t72 = 2280997943920423LLU;

    t72 = ((x333-x334)*(x335/x336));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x337 = UINT64_MAX;
	int16_t x338 = -1;
	int8_t x339 = -5;
	int16_t x340 = 1111;
	uint64_t t73 = 1032726LLU;

    t73 = ((x337-x338)*(x339/x340));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x341 = INT32_MAX;
	uint16_t x342 = 343U;
	uint64_t x343 = UINT64_MAX;
	uint64_t t74 = 21502886LLU;

    t74 = ((x341-x342)*(x343/x344));

    if (t74 != 18446741127361985184LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x345 = INT32_MAX;
	int32_t x346 = 465723;
	uint32_t x348 = 15467630U;
	volatile int64_t t75 = -64479697934965760LL;

    t75 = ((x345-x346)*(x347/x348));

    if (t75 != -23832300448751788LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x349 = 16;
	uint16_t x350 = 7041U;
	static volatile int64_t x351 = 2050793761054829LL;
	volatile int16_t x352 = INT16_MIN;
	int64_t t76 = 165574091108LL;

    t76 = ((x349-x350)*(x351/x352));

    if (t76 != 439661443217525LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x353 = -1LL;
	int8_t x354 = INT8_MIN;

    t77 = ((x353-x354)*(x355/x356));

    if (t77 != 2407412LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x357 = 2U;
	int32_t x359 = 483;
	volatile int32_t t78 = -955388;

    t78 = ((x357-x358)*(x359/x360));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x361 = 1U;
	int64_t x363 = 122LL;
	int32_t x364 = 5808;
	int64_t t79 = 155461LL;

    t79 = ((x361-x362)*(x363/x364));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x365 = INT32_MIN;
	static int64_t x366 = INT64_MIN;
	uint16_t x368 = 501U;
	volatile int64_t t80 = 74644LL;

    t80 = ((x365-x366)*(x367/x368));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int8_t x373 = INT8_MIN;
	uint8_t x375 = 0U;
	volatile int32_t x376 = -1;

    t81 = ((x373-x374)*(x375/x376));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x377 = 18599261163LLU;
	volatile int64_t x378 = -369871LL;
	volatile int16_t x379 = INT16_MIN;
	volatile int8_t x380 = INT8_MIN;
	uint64_t t82 = 49173648663365079LLU;

    t82 = ((x377-x378)*(x379/x380));

    if (t82 != 4761505544704LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x381 = INT8_MIN;
	uint16_t x382 = 524U;
	int8_t x383 = INT8_MAX;
	int8_t x384 = -15;

    t83 = ((x381-x382)*(x383/x384));

    if (t83 != 5216) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x385 = 1LL;
	int8_t x386 = INT8_MAX;
	uint16_t x387 = UINT16_MAX;
	static uint16_t x388 = 23244U;
	volatile int64_t t84 = -79LL;

    t84 = ((x385-x386)*(x387/x388));

    if (t84 != -252LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x393 = -1;
	uint16_t x394 = 29961U;
	int64_t x395 = -1LL;
	volatile int64_t x396 = -52041428LL;
	int64_t t85 = 18707748718LL;

    t85 = ((x393-x394)*(x395/x396));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x397 = -1LL;
	static uint16_t x399 = 12U;
	volatile int64_t x400 = -185965934351LL;

    t86 = ((x397-x398)*(x399/x400));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x410 = INT8_MAX;
	uint32_t x411 = UINT32_MAX;
	volatile int64_t x412 = INT64_MIN;
	volatile int64_t t87 = 91LL;

    t87 = ((x409-x410)*(x411/x412));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x413 = 417571352842685LLU;
	int32_t x414 = -1;
	int16_t x415 = INT16_MIN;
	int16_t x416 = INT16_MIN;

    t88 = ((x413-x414)*(x415/x416));

    if (t88 != 417571352842686LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x417 = -11;
	static int8_t x418 = -1;
	uint16_t x420 = UINT16_MAX;
	static uint64_t t89 = 146671710551676LLU;

    t89 = ((x417-x418)*(x419/x420));

    if (t89 != 18446744073709551106LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x426 = 0U;
	uint64_t t90 = 26506185595LLU;

    t90 = ((x425-x426)*(x427/x428));

    if (t90 != 18446744069020942336LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x429 = INT16_MIN;
	static uint8_t x430 = UINT8_MAX;
	volatile int32_t t91 = -13008;

    t91 = ((x429-x430)*(x431/x432));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x437 = 2337253884LLU;
	volatile uint16_t x438 = UINT16_MAX;
	int8_t x439 = 52;
	uint8_t x440 = UINT8_MAX;

    t92 = ((x437-x438)*(x439/x440));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x441 = -1;
	static int64_t x442 = -68LL;
	uint32_t x444 = 18174U;
	volatile int64_t t93 = 10807538747LL;

    t93 = ((x441-x442)*(x443/x444));

    if (t93 != 15833641LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x449 = -2495;
	volatile int8_t x450 = -1;
	int8_t x451 = -1;
	int32_t t94 = -2739022;

    t94 = ((x449-x450)*(x451/x452));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x453 = UINT32_MAX;
	int32_t x454 = INT32_MAX;
	int8_t x456 = INT8_MIN;

    t95 = ((x453-x454)*(x455/x456));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x458 = INT16_MAX;
	volatile int8_t x459 = -2;
	static int64_t t96 = -265121862429LL;

    t96 = ((x457-x458)*(x459/x460));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x461 = -1;
	int64_t x462 = INT64_MAX;

    t97 = ((x461-x462)*(x463/x464));

    if (t97 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x465 = 16048U;
	int8_t x466 = -1;
	static int8_t x467 = INT8_MIN;
	int8_t x468 = -1;
	volatile uint32_t t98 = 0U;

    t98 = ((x465-x466)*(x467/x468));

    if (t98 != 2054272U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x469 = 92;
	int8_t x470 = -27;
	int32_t x471 = -1;
	uint64_t x472 = 984026233564LLU;
	static volatile uint64_t t99 = 2113LLU;

    t99 = ((x469-x470)*(x471/x472));

    if (t99 != 2230796729LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x475 = INT8_MAX;
	int64_t x476 = -1LL;
	uint64_t t100 = 30663403273LLU;

    t100 = ((x473-x474)*(x475/x476));

    if (t100 != 18446744073482857378LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x478 = -1;
	int16_t x480 = 1;

    t101 = ((x477-x478)*(x479/x480));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x481 = -1LL;
	int64_t x482 = -1LL;
	static int8_t x483 = INT8_MAX;
	static volatile int64_t x484 = INT64_MIN;
	volatile int64_t t102 = -964261353LL;

    t102 = ((x481-x482)*(x483/x484));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x493 = INT8_MAX;
	int16_t x494 = -65;
	int16_t x495 = INT16_MIN;
	volatile int16_t x496 = INT16_MIN;
	volatile int32_t t103 = 5278490;

    t103 = ((x493-x494)*(x495/x496));

    if (t103 != 192) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x497 = INT64_MIN;
	static int16_t x498 = -1;
	int8_t x500 = INT8_MIN;
	int64_t t104 = 168775294LL;

    t104 = ((x497-x498)*(x499/x500));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x505 = 97170481201LLU;
	uint8_t x506 = 0U;
	static int64_t x508 = INT64_MAX;
	uint64_t t105 = 47933467338201810LLU;

    t105 = ((x505-x506)*(x507/x508));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x513 = 76820U;
	uint64_t x514 = 265210995257LLU;
	volatile int8_t x515 = INT8_MAX;
	volatile uint64_t t106 = 401896776LLU;

    t106 = ((x513-x514)*(x515/x516));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x521 = 38032U;
	volatile int64_t x522 = -3287205394854589LL;
	uint32_t x523 = UINT32_MAX;
	int64_t x524 = INT64_MIN;
	volatile int64_t t107 = 409776106604766487LL;

    t107 = ((x521-x522)*(x523/x524));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x525 = UINT16_MAX;
	int32_t x527 = INT32_MIN;
	uint64_t x528 = 1256807LLU;
	volatile uint64_t t108 = 13567855LLU;

    t108 = ((x525-x526)*(x527/x528));

    if (t108 != 961873164285158048LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x529 = INT64_MIN;
	int64_t x530 = -46754029874198285LL;
	static int64_t x531 = INT64_MIN;
	static volatile uint64_t x532 = 786694310406729LLU;
	uint64_t t109 = 662292LLU;

    t109 = ((x529-x530)*(x531/x532));

    if (t109 != 13188668107523696476LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x537 = 3U;
	volatile int8_t x538 = -1;
	int16_t x539 = 0;
	uint64_t x540 = UINT64_MAX;

    t110 = ((x537-x538)*(x539/x540));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x549 = -15069;
	static volatile int8_t x550 = INT8_MIN;
	uint64_t x551 = UINT64_MAX;

    t111 = ((x549-x550)*(x551/x552));

    if (t111 != 6536247900133305926LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x553 = 209504034;
	uint32_t x555 = UINT32_MAX;
	int32_t x556 = 98006535;
	volatile uint32_t t112 = 1577U;

    t112 = ((x553-x554)*(x555/x556));

    if (t112 != 4060130160U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x557 = UINT8_MAX;
	int8_t x559 = INT8_MIN;
	int16_t x560 = INT16_MAX;
	static volatile int32_t t113 = 952;

    t113 = ((x557-x558)*(x559/x560));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x562 = 4U;
	volatile int64_t t114 = 190676LL;

    t114 = ((x561-x562)*(x563/x564));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x566 = 7U;
	static volatile int16_t x567 = -145;
	static int8_t x568 = 3;
	int32_t t115 = -93862;

    t115 = ((x565-x566)*(x567/x568));

    if (t115 != -209040) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x569 = 772309211U;
	int16_t x570 = INT16_MAX;
	volatile int16_t x571 = INT16_MIN;
	uint8_t x572 = 80U;
	volatile uint32_t t116 = 1U;

    t116 = ((x569-x570)*(x571/x572));

    if (t116 != 1966514308U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x573 = INT8_MAX;
	int8_t x574 = INT8_MIN;
	volatile uint32_t x575 = UINT32_MAX;
	volatile uint32_t x576 = 434968978U;
	volatile uint32_t t117 = 5958302U;

    t117 = ((x573-x574)*(x575/x576));

    if (t117 != 2295U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x577 = 16U;
	int64_t x578 = 1464964454165522LL;
	int64_t x579 = INT64_MAX;
	static uint64_t x580 = 7969207173LLU;
	volatile uint64_t t118 = 395LLU;

    t118 = ((x577-x578)*(x579/x580));

    if (t118 != 17246718730994118950LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x581 = UINT32_MAX;
	static int16_t x582 = INT16_MIN;
	volatile int32_t x583 = -19;
	int32_t x584 = INT32_MAX;
	static uint32_t t119 = 24670895U;

    t119 = ((x581-x582)*(x583/x584));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x585 = -1;
	uint16_t x586 = 1U;
	int32_t x587 = 23689485;
	static int16_t x588 = INT16_MAX;
	static int32_t t120 = 391;

    t120 = ((x585-x586)*(x587/x588));

    if (t120 != -1444) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x602 = UINT64_MAX;
	uint64_t t121 = 7651217962LLU;

    t121 = ((x601-x602)*(x603/x604));

    if (t121 != 18443918080770066579LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x605 = 25U;
	uint16_t x606 = 7U;
	uint8_t x607 = 1U;
	int16_t x608 = INT16_MIN;

    t122 = ((x605-x606)*(x607/x608));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x610 = 13U;
	uint8_t x611 = 17U;
	int32_t x612 = INT32_MAX;

    t123 = ((x609-x610)*(x611/x612));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x614 = UINT64_MAX;
	uint32_t x615 = 10U;

    t124 = ((x613-x614)*(x615/x616));

    if (t124 != 18446744052234715146LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x617 = INT32_MAX;
	int16_t x618 = 2672;
	uint32_t x619 = UINT32_MAX;
	uint32_t t125 = 53246488U;

    t125 = ((x617-x618)*(x619/x620));

    if (t125 != 2684356342U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x621 = 1;
	int16_t x622 = 160;
	int8_t x623 = -4;
	int8_t x624 = -4;
	int32_t t126 = 49;

    t126 = ((x621-x622)*(x623/x624));

    if (t126 != -159) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x629 = 55910058851327002LLU;
	static int64_t x630 = INT64_MIN;
	int8_t x631 = INT8_MIN;
	int64_t x632 = INT64_MIN;
	static uint64_t t127 = 162870525167LLU;

    t127 = ((x629-x630)*(x631/x632));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x643 = 7LLU;
	int64_t x644 = -1740953120337918LL;
	volatile uint64_t t128 = 9LLU;

    t128 = ((x641-x642)*(x643/x644));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x645 = INT64_MIN;
	static volatile int32_t x646 = -1;
	uint16_t x647 = 1236U;
	volatile int64_t t129 = 1LL;

    t129 = ((x645-x646)*(x647/x648));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x649 = -65942657490496281LL;
	uint32_t x652 = 499180255U;
	volatile int64_t t130 = -97952880526987883LL;

    t130 = ((x649-x650)*(x651/x652));

    if (t130 != -527541259923970240LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x653 = -1;
	int64_t x654 = INT64_MAX;
	volatile int8_t x656 = INT8_MIN;
	int64_t t131 = -3LL;

    t131 = ((x653-x654)*(x655/x656));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x661 = -1;
	volatile int8_t x662 = INT8_MIN;
	uint16_t x663 = 5U;
	volatile int32_t t132 = -19243;

    t132 = ((x661-x662)*(x663/x664));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x665 = 1702;
	static uint8_t x666 = 3U;
	int64_t x667 = -224LL;

    t133 = ((x665-x666)*(x667/x668));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x669 = 1;
	uint32_t x670 = 32296U;
	uint32_t t134 = 69U;

    t134 = ((x669-x670)*(x671/x672));

    if (t134 != 4290284521U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x674 = 43U;
	uint8_t x675 = 1U;
	int32_t x676 = INT32_MIN;
	static int32_t t135 = 3668994;

    t135 = ((x673-x674)*(x675/x676));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x681 = UINT64_MAX;
	int8_t x682 = -1;
	int8_t x683 = INT8_MIN;
	volatile uint64_t t136 = 8LLU;

    t136 = ((x681-x682)*(x683/x684));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x689 = UINT16_MAX;
	static volatile int64_t x690 = -28805829914985LL;
	static uint32_t x691 = 4U;
	static uint8_t x692 = UINT8_MAX;

    t137 = ((x689-x690)*(x691/x692));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x693 = UINT8_MAX;
	volatile int32_t x695 = -1;
	int64_t x696 = INT64_MIN;
	uint64_t t138 = 52154796207350LLU;

    t138 = ((x693-x694)*(x695/x696));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x701 = -1LL;
	int64_t x702 = 14785565247332172LL;
	uint64_t x703 = 354917068095130889LLU;
	volatile uint32_t x704 = 6U;

    t139 = ((x701-x702)*(x703/x704));

    if (t139 != 15672193484040690082LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x706 = 41011014987LLU;
	static volatile uint32_t x708 = 5066U;
	volatile uint64_t t140 = 7622LLU;

    t140 = ((x705-x706)*(x707/x708));

    if (t140 != 18411974853203585894LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x709 = -1;
	static int32_t x710 = INT32_MIN;
	int8_t x711 = INT8_MIN;
	uint32_t x712 = 119U;
	volatile uint32_t t141 = 11U;

    t141 = ((x709-x710)*(x711/x712));

    if (t141 != 2111391487U) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x713 = INT16_MIN;
	int16_t x714 = INT16_MIN;
	static uint64_t x715 = 413LLU;
	int64_t x716 = INT64_MAX;
	uint64_t t142 = 536272LLU;

    t142 = ((x713-x714)*(x715/x716));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x717 = UINT64_MAX;
	int8_t x718 = -1;
	int64_t x719 = 2LL;
	int32_t x720 = 232266395;
	uint64_t t143 = 8640906139822LLU;

    t143 = ((x717-x718)*(x719/x720));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x721 = 5;
	static uint8_t x722 = 8U;
	static int64_t x723 = -1LL;
	int32_t x724 = INT32_MAX;
	int64_t t144 = 185LL;

    t144 = ((x721-x722)*(x723/x724));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x725 = -45167534;
	uint64_t x726 = 8460301626328007642LLU;
	int16_t x727 = INT16_MIN;
	int8_t x728 = INT8_MAX;
	volatile uint64_t t145 = 1089004018831239LLU;

    t145 = ((x725-x726)*(x727/x728));

    if (t145 != 6042018906552104720LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x729 = 0U;
	int64_t x730 = -1LL;
	static int8_t x732 = -1;
	volatile int64_t t146 = 332147049521918960LL;

    t146 = ((x729-x730)*(x731/x732));

    if (t146 != 1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x733 = -1;
	int16_t x735 = -68;
	volatile int32_t x736 = 110633;

    t147 = ((x733-x734)*(x735/x736));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x741 = INT32_MIN;
	int8_t x742 = -1;
	int32_t x743 = -1;
	volatile int32_t x744 = INT32_MAX;
	volatile int32_t t148 = 6481622;

    t148 = ((x741-x742)*(x743/x744));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x745 = 2811780LL;
	int16_t x746 = INT16_MIN;
	int8_t x748 = INT8_MIN;
	static int64_t t149 = 7092434322LL;

    t149 = ((x745-x746)*(x747/x748));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x749 = UINT8_MAX;
	int16_t x750 = 6;
	uint8_t x751 = 6U;
	static int8_t x752 = INT8_MAX;
	static volatile int32_t t150 = -26367311;

    t150 = ((x749-x750)*(x751/x752));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x757 = UINT16_MAX;
	int8_t x758 = -1;
	static volatile int32_t x760 = 66941859;
	int64_t t151 = -1LL;

    t151 = ((x757-x758)*(x759/x760));

    if (t151 != -9029670206898176LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x763 = 31103LLU;
	int8_t x764 = INT8_MAX;
	uint64_t t152 = 359492333544LLU;

    t152 = ((x761-x762)*(x763/x764));

    if (t152 != 31232LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x765 = -2861597LL;
	static uint64_t x766 = UINT64_MAX;
	int16_t x767 = -6;
	uint32_t x768 = UINT32_MAX;
	uint64_t t153 = 7263314LLU;

    t153 = ((x765-x766)*(x767/x768));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x773 = INT16_MIN;
	static volatile uint32_t x774 = 4996047U;
	volatile uint64_t x775 = 449LLU;
	int8_t x776 = INT8_MIN;
	volatile uint64_t t154 = 76225526954LLU;

    t154 = ((x773-x774)*(x775/x776));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x777 = -1;
	static int16_t x778 = 2944;
	int64_t x779 = -122132657996107LL;
	volatile uint32_t x780 = 197U;
	volatile int64_t t155 = -1450406879177849LL;

    t155 = ((x777-x778)*(x779/x780));

    if (t155 != 1825790242630080LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x785 = 1;
	static int16_t x786 = 17;
	uint32_t x787 = UINT32_MAX;

    t156 = ((x785-x786)*(x787/x788));

    if (t156 != 4294967280U) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x793 = 1065;
	uint32_t x794 = 72U;
	uint64_t x795 = 425318298207LLU;
	volatile int64_t x796 = INT64_MIN;
	volatile uint64_t t157 = 20597023LLU;

    t157 = ((x793-x794)*(x795/x796));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x797 = INT8_MIN;
	int8_t x798 = INT8_MIN;
	volatile int16_t x799 = INT16_MIN;
	int64_t x800 = 1LL;
	int64_t t158 = 5238498501593LL;

    t158 = ((x797-x798)*(x799/x800));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x802 = INT16_MIN;
	int8_t x803 = -1;
	int16_t x804 = INT16_MAX;
	int32_t t159 = 24;

    t159 = ((x801-x802)*(x803/x804));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x805 = 8;
	int16_t x806 = INT16_MAX;
	uint16_t x807 = 0U;
	int32_t x808 = -1;
	static volatile int32_t t160 = -3116;

    t160 = ((x805-x806)*(x807/x808));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x813 = 12360U;
	int64_t x816 = INT64_MIN;
	static volatile uint64_t t161 = 674311243098246LLU;

    t161 = ((x813-x814)*(x815/x816));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x817 = -1;
	int64_t x818 = -1LL;
	int16_t x819 = -1;
	uint16_t x820 = 1595U;

    t162 = ((x817-x818)*(x819/x820));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x821 = UINT64_MAX;
	uint64_t x822 = UINT64_MAX;
	int32_t x824 = INT32_MIN;
	uint64_t t163 = 14LLU;

    t163 = ((x821-x822)*(x823/x824));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x837 = INT16_MIN;
	int16_t x838 = INT16_MAX;
	static int32_t x839 = 63495933;
	int16_t x840 = -6189;
	int32_t t164 = -643928;

    t164 = ((x837-x838)*(x839/x840));

    if (t164 != 672323565) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x841 = 1062811310237507780LLU;
	static int64_t x842 = INT64_MIN;
	int16_t x843 = INT16_MIN;
	volatile int32_t x844 = INT32_MAX;
	static volatile uint64_t t165 = 3622321214128285951LLU;

    t165 = ((x841-x842)*(x843/x844));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x845 = INT32_MAX;
	uint32_t x846 = 6931094U;
	uint16_t x848 = 231U;
	volatile uint32_t t166 = 272438U;

    t166 = ((x845-x846)*(x847/x848));

    if (t166 != 2705331618U) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x849 = 1;
	static uint32_t x850 = UINT32_MAX;
	volatile int32_t x851 = -44863812;
	int32_t x852 = -299943;
	volatile uint32_t t167 = 53404748U;

    t167 = ((x849-x850)*(x851/x852));

    if (t167 != 298U) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x853 = 20786244LL;
	static uint8_t x854 = UINT8_MAX;
	uint64_t x856 = 26482835852666288LLU;
	volatile uint64_t t168 = 536310266527884LLU;

    t168 = ((x853-x854)*(x855/x856));

    if (t168 != 14467048344LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x857 = UINT64_MAX;
	uint16_t x858 = 30847U;
	int8_t x859 = -1;
	uint32_t x860 = UINT32_MAX;
	volatile uint64_t t169 = 100537598906819LLU;

    t169 = ((x857-x858)*(x859/x860));

    if (t169 != 18446744073709520768LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x862 = -1;
	static uint64_t x864 = 407235115169854LLU;
	volatile uint64_t t170 = 459271401810LLU;

    t170 = ((x861-x862)*(x863/x864));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x885 = 1540554673U;
	int16_t x886 = -1;
	uint64_t x887 = 2429963234073300LLU;
	uint16_t x888 = 3U;
	volatile uint64_t t171 = 8652501919994522LLU;

    t171 = ((x885-x886)*(x887/x888));

    if (t171 != 403100510172137080LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x890 = -1;
	volatile uint64_t x891 = UINT64_MAX;
	int32_t x892 = INT32_MIN;
	volatile uint64_t t172 = 74LLU;

    t172 = ((x889-x890)*(x891/x892));

    if (t172 != 6LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x893 = INT16_MAX;
	volatile int8_t x894 = INT8_MAX;
	static volatile int64_t x895 = INT64_MIN;
	uint64_t x896 = 35527107LLU;
	static uint64_t t173 = 438520103387136086LLU;

    t173 = ((x893-x894)*(x895/x896));

    if (t173 != 8473835578081920LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x897 = -1LL;
	static int8_t x898 = INT8_MIN;
	int8_t x899 = INT8_MIN;
	uint16_t x900 = 13303U;
	int64_t t174 = -484LL;

    t174 = ((x897-x898)*(x899/x900));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x901 = 5492LLU;
	int32_t x902 = -1;
	volatile int32_t x904 = 1;

    t175 = ((x901-x902)*(x903/x904));

    if (t175 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x905 = INT32_MIN;
	int16_t x906 = INT16_MIN;
	static int8_t x907 = INT8_MAX;
	uint64_t x908 = UINT64_MAX;
	volatile uint64_t t176 = 463426305892965444LLU;

    t176 = ((x905-x906)*(x907/x908));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x910 = 7952U;
	uint16_t x911 = UINT16_MAX;
	int16_t x912 = -130;
	volatile uint32_t t177 = 3025960U;

    t177 = ((x909-x910)*(x911/x912));

    if (t177 != 4007304U) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x925 = INT64_MIN;
	static int32_t x926 = -1;
	static int64_t x927 = -1LL;
	static int64_t t178 = -5670399934293LL;

    t178 = ((x925-x926)*(x927/x928));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x929 = INT8_MIN;
	static int8_t x930 = INT8_MAX;
	int32_t x931 = INT32_MAX;
	volatile uint32_t t179 = 1466981U;

    t179 = ((x929-x930)*(x931/x932));

    if (t179 != 4294961431U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x933 = INT32_MIN;
	int64_t x934 = INT64_MIN;
	static int8_t x935 = 1;
	volatile int64_t x936 = -122063934152129753LL;
	volatile int64_t t180 = -6489683133083145LL;

    t180 = ((x933-x934)*(x935/x936));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x937 = UINT16_MAX;
	int32_t x939 = -1;
	static uint8_t x940 = 43U;
	static uint32_t t181 = 14853U;

    t181 = ((x937-x938)*(x939/x940));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x941 = -1;
	static volatile int8_t x942 = -1;
	static int8_t x943 = 4;
	int64_t x944 = INT64_MIN;
	int64_t t182 = 2362LL;

    t182 = ((x941-x942)*(x943/x944));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x945 = -99806013;
	static uint32_t x946 = UINT32_MAX;
	int64_t x947 = INT64_MAX;
	static uint32_t x948 = UINT32_MAX;
	int64_t t183 = -801420495444696LL;

    t183 = ((x945-x946)*(x947/x948));

    if (t183 != 9009040258112684032LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x949 = INT8_MAX;
	static int8_t x950 = 29;
	static uint64_t x951 = UINT64_MAX;
	volatile uint64_t t184 = 93645190141414726LLU;

    t184 = ((x949-x950)*(x951/x952));

    if (t184 != 16602069666338596376LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x953 = INT8_MAX;
	static int8_t x954 = INT8_MIN;
	int32_t x955 = -1;
	volatile int32_t x956 = INT32_MIN;
	volatile int32_t t185 = 6;

    t185 = ((x953-x954)*(x955/x956));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint16_t x957 = 0U;
	int8_t x960 = -3;
	volatile uint64_t t186 = 8675554848314LLU;

    t186 = ((x957-x958)*(x959/x960));

    if (t186 != 92495635126360LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x961 = INT8_MIN;
	static volatile uint64_t x962 = 4827702469LLU;
	int16_t x963 = -14;
	volatile uint64_t t187 = 20088903964LLU;

    t187 = ((x961-x962)*(x963/x964));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x965 = 6441;
	int8_t x966 = INT8_MAX;
	int8_t x967 = -9;
	volatile int16_t x968 = INT16_MIN;
	int32_t t188 = 1;

    t188 = ((x965-x966)*(x967/x968));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x969 = -1;
	uint16_t x970 = UINT16_MAX;
	uint64_t x971 = 85LLU;
	uint32_t x972 = 177204U;
	volatile uint64_t t189 = 3571463LLU;

    t189 = ((x969-x970)*(x971/x972));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x977 = -31;
	int32_t x978 = -8068;
	int32_t x979 = INT32_MAX;
	int64_t x980 = INT64_MAX;

    t190 = ((x977-x978)*(x979/x980));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x981 = 5183554384817LLU;
	volatile uint32_t x982 = 377U;
	int8_t x983 = INT8_MIN;
	int64_t x984 = -29LL;
	uint64_t t191 = 480696LLU;

    t191 = ((x981-x982)*(x983/x984));

    if (t191 != 20734217537760LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x985 = -6023842LL;
	static uint64_t x986 = 6780985450007044LLU;
	int64_t x987 = INT64_MIN;

    t192 = ((x985-x986)*(x987/x988));

    if (t192 != 4406342100803888432LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x990 = 1026190146;
	volatile uint64_t x991 = 5982584411261354660LLU;
	volatile int8_t x992 = -1;
	volatile uint64_t t193 = 0LLU;

    t193 = ((x989-x990)*(x991/x992));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x993 = INT8_MAX;
	static uint16_t x994 = UINT16_MAX;
	static volatile uint32_t x995 = 945769U;
	uint16_t x996 = 185U;
	volatile uint32_t t194 = 5031U;

    t194 = ((x993-x994)*(x995/x996));

    if (t194 != 3960601600U) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x1005 = -1;
	volatile int64_t x1006 = -1LL;
	static uint64_t x1007 = 22314475162671LLU;
	int8_t x1008 = -1;
	static volatile uint64_t t195 = 589180119260443LLU;

    t195 = ((x1005-x1006)*(x1007/x1008));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1009 = INT64_MIN;
	uint64_t x1010 = 2956879LLU;
	uint64_t t196 = 6594329LLU;

    t196 = ((x1009-x1010)*(x1011/x1012));

    if (t196 != 9223372036863646445LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1013 = INT8_MIN;
	uint8_t x1014 = UINT8_MAX;
	static int32_t x1016 = INT32_MAX;
	int32_t t197 = 1779;

    t197 = ((x1013-x1014)*(x1015/x1016));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1017 = INT16_MIN;
	int32_t x1018 = -2;
	volatile uint64_t x1019 = UINT64_MAX;
	int32_t x1020 = -936366193;
	volatile uint64_t t198 = 4251865610595LLU;

    t198 = ((x1017-x1018)*(x1019/x1020));

    if (t198 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1021 = -1298159LL;
	static volatile int16_t x1022 = 2;
	static int32_t x1024 = -1;
	int64_t t199 = 10085165538LL;

    t199 = ((x1021-x1022)*(x1023/x1024));

    if (t199 != -66206211LL) { NG(); } else { ; }
	
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

