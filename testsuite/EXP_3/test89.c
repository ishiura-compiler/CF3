
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

int8_t x2 = INT8_MIN;
uint16_t x6 = 0U;
int16_t x10 = INT16_MAX;
volatile int8_t x11 = -1;
int64_t x12 = -1LL;
uint8_t x16 = 115U;
uint64_t t3 = 3381547005978945171LLU;
static int64_t t4 = 2573LL;
volatile uint64_t x27 = 122079LLU;
uint32_t x30 = 97U;
int8_t x35 = -1;
uint32_t x37 = 54U;
int64_t x39 = -21592980880503372LL;
int8_t x41 = INT8_MIN;
uint8_t x44 = 41U;
static volatile int32_t t10 = 90839;
int16_t x47 = INT16_MIN;
static volatile int32_t t11 = 1807816;
static volatile int64_t x51 = -46710287560273LL;
int32_t x62 = INT32_MAX;
volatile int32_t t15 = -25935284;
static int64_t x74 = -1LL;
uint32_t x75 = UINT32_MAX;
int32_t x84 = INT32_MAX;
int64_t x85 = -1LL;
static int32_t x86 = INT32_MIN;
volatile int32_t t20 = 10;
static int32_t x98 = INT32_MIN;
int8_t x100 = INT8_MAX;
int32_t t23 = -81;
int32_t x104 = 297488907;
int8_t x110 = INT8_MIN;
uint16_t x111 = 7362U;
volatile int64_t t28 = -7326LL;
uint8_t x121 = 69U;
int8_t x139 = INT8_MIN;
volatile int32_t t32 = -6427;
volatile uint32_t x142 = 190U;
int32_t x144 = -1;
static uint8_t x155 = 16U;
uint8_t x157 = 3U;
volatile uint64_t x162 = 2LLU;
int32_t x167 = 19;
int32_t t38 = -250;
static volatile int64_t x170 = -1LL;
int64_t x174 = -1LL;
static int64_t x175 = INT64_MIN;
int32_t x176 = 1;
uint8_t x182 = UINT8_MAX;
static int8_t x183 = INT8_MIN;
volatile int8_t x185 = INT8_MAX;
int8_t x186 = INT8_MIN;
volatile uint16_t x209 = 30534U;
uint16_t x216 = 7948U;
volatile uint32_t t48 = 1912U;
uint64_t x220 = 54617LLU;
uint64_t t49 = 577370797609776244LLU;
static int32_t t50 = -6417054;
volatile int32_t t51 = 1;
static int64_t x229 = 6LL;
int64_t x232 = INT64_MAX;
volatile int8_t x237 = -1;
int16_t x238 = INT16_MIN;
uint64_t x239 = 415394662285LLU;
static volatile int16_t x240 = INT16_MAX;
int8_t x241 = INT8_MIN;
volatile int8_t x245 = INT8_MIN;
uint16_t x246 = 124U;
int32_t x247 = -404;
volatile int32_t t57 = -48;
int32_t x255 = INT32_MAX;
int32_t x256 = INT32_MIN;
int32_t t58 = -10152;
static volatile uint32_t t59 = 50576U;
uint64_t x263 = 7326277LLU;
uint64_t t60 = 1633126LLU;
int64_t x279 = -42182523214069817LL;
volatile uint64_t x287 = UINT64_MAX;
volatile int64_t x290 = INT64_MIN;
int8_t x293 = -1;
int8_t x300 = 0;
volatile int32_t t68 = -18117572;
int32_t x314 = -1;
static uint64_t x315 = 2351201653927954LLU;
int16_t x318 = -1;
int16_t x319 = INT16_MAX;
volatile int32_t t75 = 411205;
int32_t x341 = INT32_MAX;
int64_t x343 = INT64_MIN;
int32_t x346 = INT32_MIN;
static uint32_t x347 = 114362U;
int16_t x359 = -1;
static int16_t x361 = -529;
uint8_t x363 = UINT8_MAX;
int64_t x365 = 877253719490800LL;
uint64_t x383 = 463801802371LLU;
int8_t x384 = INT8_MIN;
uint16_t x388 = UINT16_MAX;
uint16_t x395 = UINT16_MAX;
static int16_t x401 = INT16_MIN;
uint16_t x402 = 5555U;
int64_t x422 = -1LL;
int16_t x426 = INT16_MIN;
int64_t x431 = 56874335723242600LL;
int64_t x436 = -1LL;
volatile uint8_t x438 = UINT8_MAX;
uint32_t x439 = 175037106U;
static uint32_t t98 = 4U;
static int32_t x442 = INT32_MAX;
int32_t x445 = -1;
volatile uint32_t t100 = 14U;
uint32_t x450 = 153934313U;
volatile int32_t t101 = -1646;
uint16_t x456 = 1679U;
int16_t x466 = INT16_MAX;
int16_t x476 = INT16_MAX;
static int16_t x479 = INT16_MIN;
volatile int8_t x484 = -31;
static uint64_t x492 = UINT64_MAX;
int32_t x506 = -1;
int8_t x507 = -1;
int32_t x524 = INT32_MIN;
int16_t x525 = 1;
volatile int32_t x527 = INT32_MAX;
volatile int64_t t118 = -14598768LL;
int8_t x530 = -1;
int16_t x540 = INT16_MAX;
volatile uint32_t x544 = 26U;
static int16_t x551 = -148;
volatile uint64_t x557 = 3231529286525802LLU;
static int8_t x564 = INT8_MIN;
static int8_t x566 = -27;
int64_t t125 = -1515302130166635497LL;
int64_t x571 = -25451LL;
int32_t t127 = 6785;
volatile int64_t x577 = INT64_MAX;
static int32_t x589 = -64153214;
int8_t x593 = 6;
uint64_t t132 = 692036LLU;
int64_t x597 = INT64_MAX;
volatile uint16_t x598 = 0U;
int32_t t136 = 5705;
uint16_t x622 = 11835U;
volatile int32_t x627 = -469;
volatile int32_t t140 = 2079;
volatile int8_t x635 = -1;
int32_t x637 = INT32_MAX;
uint8_t x638 = UINT8_MAX;
uint64_t x648 = UINT64_MAX;
static volatile uint64_t t144 = 8647262821483LLU;
uint32_t x649 = 313U;
int64_t t145 = 100298724088LL;
volatile int16_t x653 = INT16_MIN;
static int16_t x656 = INT16_MAX;
static int64_t x657 = -1LL;
int16_t x663 = -2251;
static volatile int32_t t148 = -909;
int16_t x675 = -1;
int64_t x679 = -59672LL;
uint64_t x683 = 267760159609LLU;
int32_t x684 = INT32_MIN;
int16_t x685 = -1;
int32_t x693 = INT32_MAX;
static int16_t x696 = INT16_MIN;
volatile int32_t t155 = 1841;
int32_t x700 = INT32_MAX;
int16_t x705 = INT16_MIN;
uint64_t t158 = 2643517LLU;
int64_t x711 = INT64_MIN;
uint32_t x712 = 239187U;
int64_t t159 = -18LL;
int8_t x714 = INT8_MAX;
uint32_t t160 = 400520334U;
static int64_t x726 = INT64_MIN;
uint8_t x728 = 49U;
int64_t x738 = -1LL;
static uint32_t t165 = 3069370U;
static uint64_t x745 = 69LLU;
int16_t x753 = INT16_MIN;
volatile int64_t x771 = 21802408804875LL;
uint8_t x778 = 101U;
uint8_t x779 = UINT8_MAX;
uint64_t x783 = 447684906LLU;
int32_t t174 = -1;
volatile int64_t x792 = INT64_MIN;
uint16_t x823 = 2U;
static int32_t x824 = 822;
int32_t x835 = -76;
volatile int8_t x839 = 23;
uint32_t x849 = 75634888U;
int8_t x858 = 6;
int8_t x860 = INT8_MIN;
int32_t x861 = -3385;
int16_t x869 = -1;
int32_t x875 = 53575279;
uint16_t x886 = 64U;
int32_t x899 = INT32_MIN;


void f0(void) {
    	static int64_t x1 = INT64_MAX;
	int16_t x3 = -3;
	static int64_t x4 = 1645503LL;
	static int64_t t0 = 36LL;

    t0 = ((x1!=x2)%(x3+x4));

    if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	int32_t x7 = 625522380;
	uint64_t x8 = 7LLU;
	uint64_t t1 = 14LLU;

    t1 = ((x5!=x6)%(x7+x8));

    if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x9 = 1U;
	int64_t t2 = -59797151608663LL;

    t2 = ((x9!=x10)%(x11+x12));

    if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 47U;
	uint32_t x14 = UINT32_MAX;
	uint64_t x15 = 172392686757878LLU;

    t3 = ((x13!=x14)%(x15+x16));

    if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	volatile int32_t x18 = 370413;
	int64_t x19 = -1LL;
	int32_t x20 = 22950239;

    t4 = ((x17!=x18)%(x19+x20));

    if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int8_t x21 = INT8_MAX;
	uint8_t x22 = 2U;
	volatile int16_t x23 = INT16_MAX;
	uint64_t x24 = 5LLU;
	uint64_t t5 = 58414874739621LLU;

    t5 = ((x21!=x22)%(x23+x24));

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x25 = 5584U;
	static int32_t x26 = INT32_MAX;
	static int16_t x28 = INT16_MAX;
	uint64_t t6 = 239383983302317547LLU;

    t6 = ((x25!=x26)%(x27+x28));

    if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	int8_t x31 = INT8_MIN;
	static uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = 3375;

    t7 = ((x29!=x30)%(x31+x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = INT32_MAX;
	uint16_t x34 = UINT16_MAX;
	int16_t x36 = INT16_MAX;
	volatile int32_t t8 = -208185;

    t8 = ((x33!=x34)%(x35+x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = INT64_MAX;
	uint64_t x40 = UINT64_MAX;
	static uint64_t t9 = 34915644425820LLU;

    t9 = ((x37!=x38)%(x39+x40));

    if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = 0;
	int8_t x43 = INT8_MIN;

    t10 = ((x41!=x42)%(x43+x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 32U;
	static volatile int32_t x46 = INT32_MAX;
	int8_t x48 = 28;

    t11 = ((x45!=x46)%(x47+x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 103U;
	int64_t x50 = INT64_MAX;
	static uint8_t x52 = 31U;
	volatile int64_t t12 = 1972068120677360LL;

    t12 = ((x49!=x50)%(x51+x52));

    if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = 1;
	volatile uint8_t x58 = UINT8_MAX;
	int64_t x59 = INT64_MIN;
	volatile int64_t x60 = INT64_MAX;
	static volatile int64_t t13 = -82611867LL;

    t13 = ((x57!=x58)%(x59+x60));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = INT8_MAX;
	int32_t x63 = INT32_MAX;
	int8_t x64 = -1;
	int32_t t14 = -203625;

    t14 = ((x61!=x62)%(x63+x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = 1U;
	uint16_t x66 = 1U;
	int8_t x67 = 0;
	uint16_t x68 = 1435U;

    t15 = ((x65!=x66)%(x67+x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = -17;
	volatile int16_t x70 = -892;
	int16_t x71 = INT16_MIN;
	volatile int16_t x72 = INT16_MIN;
	int32_t t16 = -874326;

    t16 = ((x69!=x70)%(x71+x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = INT64_MIN;
	volatile int16_t x76 = INT16_MAX;
	volatile uint32_t t17 = 7U;

    t17 = ((x73!=x74)%(x75+x76));

    if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x77 = 21552LLU;
	uint8_t x78 = 62U;
	uint64_t x79 = 24907LLU;
	int16_t x80 = 47;
	uint64_t t18 = 4LLU;

    t18 = ((x77!=x78)%(x79+x80));

    if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = INT16_MIN;
	uint32_t x82 = UINT32_MAX;
	volatile int8_t x83 = INT8_MIN;
	volatile int32_t t19 = -143458;

    t19 = ((x81!=x82)%(x83+x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x87 = 7;
	static int16_t x88 = INT16_MAX;

    t20 = ((x85!=x86)%(x87+x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x89 = UINT32_MAX;
	int64_t x90 = INT64_MIN;
	uint8_t x91 = 0U;
	uint32_t x92 = UINT32_MAX;
	volatile uint32_t t21 = 211U;

    t21 = ((x89!=x90)%(x91+x92));

    if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x93 = UINT32_MAX;
	volatile int64_t x94 = -346264697679LL;
	int16_t x95 = INT16_MIN;
	uint8_t x96 = UINT8_MAX;
	int32_t t22 = 50;

    t22 = ((x93!=x94)%(x95+x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x97 = 31175819907253429LLU;
	int8_t x99 = 63;

    t23 = ((x97!=x98)%(x99+x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x101 = -3414494929629293LL;
	uint64_t x102 = 20LLU;
	uint64_t x103 = UINT64_MAX;
	volatile uint64_t t24 = 327090537971636LLU;

    t24 = ((x101!=x102)%(x103+x104));

    if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = 28;
	static volatile int16_t x106 = INT16_MAX;
	int32_t x107 = 1807660;
	int64_t x108 = 176263641374LL;
	int64_t t25 = 217LL;

    t25 = ((x105!=x106)%(x107+x108));

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = INT32_MAX;
	static uint8_t x112 = 1U;
	volatile int32_t t26 = 3;

    t26 = ((x109!=x110)%(x111+x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = INT16_MIN;
	int8_t x114 = INT8_MIN;
	int32_t x115 = INT32_MIN;
	static volatile int32_t x116 = 432863444;
	int32_t t27 = -726754337;

    t27 = ((x113!=x114)%(x115+x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x117 = INT8_MIN;
	uint32_t x118 = 13807414U;
	int32_t x119 = INT32_MAX;
	int64_t x120 = 20822317748LL;

    t28 = ((x117!=x118)%(x119+x120));

    if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int8_t x122 = 43;
	int32_t x123 = INT32_MIN;
	int32_t x124 = INT32_MAX;
	volatile int32_t t29 = -14329541;

    t29 = ((x121!=x122)%(x123+x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x125 = 65LLU;
	int8_t x126 = 0;
	static int8_t x127 = INT8_MIN;
	int64_t x128 = 15956395768LL;
	int64_t t30 = -20804LL;

    t30 = ((x125!=x126)%(x127+x128));

    if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x129 = INT8_MIN;
	int64_t x130 = INT64_MAX;
	static uint16_t x131 = 4502U;
	uint8_t x132 = 27U;
	int32_t t31 = -1;

    t31 = ((x129!=x130)%(x131+x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x137 = INT16_MAX;
	uint32_t x138 = 9306559U;
	int16_t x140 = -1;

    t32 = ((x137!=x138)%(x139+x140));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = INT16_MIN;
	uint64_t x143 = 15309LLU;
	static uint64_t t33 = 92221222555744LLU;

    t33 = ((x141!=x142)%(x143+x144));

    if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x145 = UINT64_MAX;
	static uint32_t x146 = 8276U;
	uint32_t x147 = 11692U;
	int64_t x148 = 144958125325LL;
	volatile int64_t t34 = -1761681179LL;

    t34 = ((x145!=x146)%(x147+x148));

    if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = 20134249;
	uint32_t x154 = 124U;
	int64_t x156 = INT64_MIN;
	int64_t t35 = -3365LL;

    t35 = ((x153!=x154)%(x155+x156));

    if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x158 = 116U;
	uint8_t x159 = UINT8_MAX;
	uint64_t x160 = UINT64_MAX;
	uint64_t t36 = 28149817006LLU;

    t36 = ((x157!=x158)%(x159+x160));

    if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x161 = UINT16_MAX;
	volatile uint16_t x163 = UINT16_MAX;
	int16_t x164 = -1;
	volatile int32_t t37 = 270;

    t37 = ((x161!=x162)%(x163+x164));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x165 = INT32_MAX;
	static uint64_t x166 = 47803474716LLU;
	int8_t x168 = INT8_MAX;

    t38 = ((x165!=x166)%(x167+x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x169 = INT64_MAX;
	int8_t x171 = INT8_MAX;
	int64_t x172 = INT64_MIN;
	static volatile int64_t t39 = -549902533LL;

    t39 = ((x169!=x170)%(x171+x172));

    if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x173 = -154;
	int64_t t40 = 13478LL;

    t40 = ((x173!=x174)%(x175+x176));

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x181 = 349491018;
	uint8_t x184 = 5U;
	int32_t t41 = -4000;

    t41 = ((x181!=x182)%(x183+x184));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint16_t x187 = UINT16_MAX;
	int8_t x188 = INT8_MIN;
	int32_t t42 = -230;

    t42 = ((x185!=x186)%(x187+x188));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x193 = UINT32_MAX;
	uint32_t x194 = UINT32_MAX;
	int64_t x195 = INT64_MAX;
	int8_t x196 = INT8_MIN;
	volatile int64_t t43 = 508886LL;

    t43 = ((x193!=x194)%(x195+x196));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x197 = 2764U;
	static volatile int16_t x198 = 0;
	int64_t x199 = INT64_MIN;
	volatile int32_t x200 = 6;
	static volatile int64_t t44 = 30LL;

    t44 = ((x197!=x198)%(x199+x200));

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x201 = 653136402768604LL;
	uint16_t x202 = UINT16_MAX;
	int64_t x203 = -1LL;
	uint64_t x204 = UINT64_MAX;
	uint64_t t45 = 734944504634733725LLU;

    t45 = ((x201!=x202)%(x203+x204));

    if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x205 = 7U;
	static int64_t x206 = INT64_MIN;
	static int32_t x207 = -132059;
	uint64_t x208 = 1078091280818737169LLU;
	uint64_t t46 = 133997LLU;

    t46 = ((x205!=x206)%(x207+x208));

    if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x210 = -1;
	uint16_t x211 = 8622U;
	int64_t x212 = INT64_MIN;
	int64_t t47 = 2681LL;

    t47 = ((x209!=x210)%(x211+x212));

    if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x213 = INT8_MIN;
	volatile uint8_t x214 = UINT8_MAX;
	uint32_t x215 = 1873922214U;

    t48 = ((x213!=x214)%(x215+x216));

    if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x217 = INT32_MIN;
	static volatile int64_t x218 = 9196405349023726LL;
	int16_t x219 = 3;

    t49 = ((x217!=x218)%(x219+x220));

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x221 = INT64_MAX;
	static int32_t x222 = INT32_MAX;
	uint16_t x223 = UINT16_MAX;
	static uint16_t x224 = UINT16_MAX;

    t50 = ((x221!=x222)%(x223+x224));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x225 = UINT8_MAX;
	uint8_t x226 = 2U;
	uint8_t x227 = UINT8_MAX;
	uint16_t x228 = 179U;

    t51 = ((x225!=x226)%(x227+x228));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x230 = INT8_MIN;
	int8_t x231 = INT8_MIN;
	static volatile int64_t t52 = 31815LL;

    t52 = ((x229!=x230)%(x231+x232));

    if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x233 = -1LL;
	int16_t x234 = 255;
	uint16_t x235 = UINT16_MAX;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t53 = 13692;

    t53 = ((x233!=x234)%(x235+x236));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint64_t t54 = 3755315519352955813LLU;

    t54 = ((x237!=x238)%(x239+x240));

    if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x242 = INT8_MIN;
	uint64_t x243 = 473673188705196443LLU;
	int8_t x244 = INT8_MIN;
	uint64_t t55 = 0LLU;

    t55 = ((x241!=x242)%(x243+x244));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x248 = 5534746U;
	volatile uint32_t t56 = 123368667U;

    t56 = ((x245!=x246)%(x247+x248));

    if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x249 = INT16_MAX;
	uint64_t x250 = UINT64_MAX;
	int16_t x251 = INT16_MIN;
	int8_t x252 = 42;

    t57 = ((x249!=x250)%(x251+x252));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x253 = INT32_MIN;
	int16_t x254 = 13347;

    t58 = ((x253!=x254)%(x255+x256));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x257 = 3U;
	uint32_t x258 = UINT32_MAX;
	static int8_t x259 = -1;
	uint32_t x260 = 81968U;

    t59 = ((x257!=x258)%(x259+x260));

    if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x261 = 566912;
	volatile uint32_t x262 = 4U;
	static uint64_t x264 = 5840486465842052LLU;

    t60 = ((x261!=x262)%(x263+x264));

    if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x265 = 463U;
	static int8_t x266 = 31;
	static int32_t x267 = -1308604;
	static int32_t x268 = INT32_MAX;
	int32_t t61 = -3892168;

    t61 = ((x265!=x266)%(x267+x268));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x269 = INT8_MIN;
	uint32_t x270 = 1919U;
	int64_t x271 = -1LL;
	uint16_t x272 = 0U;
	int64_t t62 = 102430329742LL;

    t62 = ((x269!=x270)%(x271+x272));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x273 = 0;
	int16_t x274 = INT16_MIN;
	volatile int32_t x275 = 62;
	uint16_t x276 = 14U;
	volatile int32_t t63 = -2;

    t63 = ((x273!=x274)%(x275+x276));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x277 = -1LL;
	volatile int16_t x278 = INT16_MIN;
	volatile uint16_t x280 = UINT16_MAX;
	int64_t t64 = -450720432613221015LL;

    t64 = ((x277!=x278)%(x279+x280));

    if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x285 = -21;
	volatile uint8_t x286 = UINT8_MAX;
	static uint64_t x288 = 8LLU;
	uint64_t t65 = 35LLU;

    t65 = ((x285!=x286)%(x287+x288));

    if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x289 = INT8_MIN;
	uint8_t x291 = UINT8_MAX;
	volatile uint16_t x292 = 532U;
	int32_t t66 = 7821440;

    t66 = ((x289!=x290)%(x291+x292));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x294 = INT8_MIN;
	volatile int16_t x295 = 1;
	static int16_t x296 = INT16_MIN;
	volatile int32_t t67 = -359611332;

    t67 = ((x293!=x294)%(x295+x296));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x297 = 1541962U;
	uint16_t x298 = 23808U;
	int16_t x299 = -1;

    t68 = ((x297!=x298)%(x299+x300));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	int32_t x303 = 4872079;
	int16_t x304 = -1;
	volatile int32_t t69 = -958654721;

    t69 = ((x301!=x302)%(x303+x304));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x305 = INT16_MAX;
	int16_t x306 = -1;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = INT8_MIN;
	volatile uint64_t t70 = 9578404094155LLU;

    t70 = ((x305!=x306)%(x307+x308));

    if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x309 = INT8_MAX;
	int8_t x310 = INT8_MIN;
	int64_t x311 = -1LL;
	int8_t x312 = INT8_MAX;
	static volatile int64_t t71 = 9581LL;

    t71 = ((x309!=x310)%(x311+x312));

    if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x313 = INT64_MIN;
	uint16_t x316 = UINT16_MAX;
	uint64_t t72 = 434059721LLU;

    t72 = ((x313!=x314)%(x315+x316));

    if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x317 = -60;
	int32_t x320 = INT32_MIN;
	int32_t t73 = -141;

    t73 = ((x317!=x318)%(x319+x320));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x329 = -1LL;
	uint64_t x330 = 137060LLU;
	uint64_t x331 = UINT64_MAX;
	volatile int16_t x332 = INT16_MIN;
	static volatile uint64_t t74 = 569LLU;

    t74 = ((x329!=x330)%(x331+x332));

    if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x333 = UINT8_MAX;
	int8_t x334 = -1;
	uint8_t x335 = UINT8_MAX;
	static int16_t x336 = -1;

    t75 = ((x333!=x334)%(x335+x336));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int32_t x337 = -1;
	int64_t x338 = -1LL;
	volatile int32_t x339 = -12890284;
	volatile int64_t x340 = INT64_MAX;
	static volatile int64_t t76 = -130852065869LL;

    t76 = ((x337!=x338)%(x339+x340));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x342 = -2;
	uint64_t x344 = 44345869760421LLU;
	uint64_t t77 = 2163061LLU;

    t77 = ((x341!=x342)%(x343+x344));

    if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x345 = INT8_MIN;
	uint64_t x348 = 25353072LLU;
	static volatile uint64_t t78 = 21LLU;

    t78 = ((x345!=x346)%(x347+x348));

    if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x349 = 4U;
	int32_t x350 = 5209204;
	int8_t x351 = -1;
	int32_t x352 = -389285017;
	int32_t t79 = -54792;

    t79 = ((x349!=x350)%(x351+x352));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x353 = UINT64_MAX;
	int16_t x354 = -12;
	int8_t x355 = INT8_MAX;
	int32_t x356 = -1;
	int32_t t80 = 18598638;

    t80 = ((x353!=x354)%(x355+x356));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x357 = -1LL;
	static volatile uint16_t x358 = UINT16_MAX;
	uint8_t x360 = 2U;
	volatile int32_t t81 = 3951071;

    t81 = ((x357!=x358)%(x359+x360));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x362 = 0;
	uint16_t x364 = 2669U;
	volatile int32_t t82 = 44677;

    t82 = ((x361!=x362)%(x363+x364));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x366 = INT32_MIN;
	int8_t x367 = INT8_MAX;
	int16_t x368 = INT16_MIN;
	volatile int32_t t83 = -7;

    t83 = ((x365!=x366)%(x367+x368));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint32_t x369 = UINT32_MAX;
	int8_t x370 = -1;
	uint16_t x371 = UINT16_MAX;
	int16_t x372 = -928;
	volatile int32_t t84 = 0;

    t84 = ((x369!=x370)%(x371+x372));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x377 = -2414456;
	int8_t x378 = INT8_MIN;
	static uint16_t x379 = UINT16_MAX;
	static int8_t x380 = -29;
	int32_t t85 = -13766;

    t85 = ((x377!=x378)%(x379+x380));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x381 = 2;
	int32_t x382 = INT32_MIN;
	static uint64_t t86 = 1200282481852266LLU;

    t86 = ((x381!=x382)%(x383+x384));

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x385 = INT16_MAX;
	int64_t x386 = -1LL;
	static int8_t x387 = INT8_MIN;
	volatile int32_t t87 = 16;

    t87 = ((x385!=x386)%(x387+x388));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x393 = INT64_MIN;
	volatile uint64_t x394 = 3140528483LLU;
	int8_t x396 = -1;
	volatile int32_t t88 = -15;

    t88 = ((x393!=x394)%(x395+x396));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int16_t x397 = -1;
	int64_t x398 = -1LL;
	int8_t x399 = INT8_MIN;
	int64_t x400 = -1LL;
	int64_t t89 = 153558786LL;

    t89 = ((x397!=x398)%(x399+x400));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x403 = UINT8_MAX;
	int8_t x404 = INT8_MIN;
	int32_t t90 = 3;

    t90 = ((x401!=x402)%(x403+x404));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x405 = UINT16_MAX;
	int8_t x406 = INT8_MAX;
	int8_t x407 = 9;
	uint64_t x408 = 21244199078040LLU;
	uint64_t t91 = 292082137081913LLU;

    t91 = ((x405!=x406)%(x407+x408));

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x409 = INT64_MAX;
	uint16_t x410 = 2U;
	int64_t x411 = INT64_MIN;
	int8_t x412 = 2;
	int64_t t92 = 336942423553LL;

    t92 = ((x409!=x410)%(x411+x412));

    if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x413 = -1;
	uint32_t x414 = 1U;
	static uint64_t x415 = 7291074LLU;
	volatile int64_t x416 = -1LL;
	uint64_t t93 = 8092638LLU;

    t93 = ((x413!=x414)%(x415+x416));

    if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x421 = INT8_MAX;
	volatile int32_t x423 = INT32_MIN;
	uint16_t x424 = 26U;
	volatile int32_t t94 = -3;

    t94 = ((x421!=x422)%(x423+x424));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x425 = -1;
	int16_t x427 = INT16_MIN;
	volatile int64_t x428 = INT64_MAX;
	volatile int64_t t95 = 14225766LL;

    t95 = ((x425!=x426)%(x427+x428));

    if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x429 = INT32_MAX;
	int8_t x430 = -46;
	static int16_t x432 = INT16_MIN;
	static volatile int64_t t96 = 2907790246014876395LL;

    t96 = ((x429!=x430)%(x431+x432));

    if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x433 = 16U;
	int32_t x434 = INT32_MAX;
	volatile int8_t x435 = -1;
	int64_t t97 = 205LL;

    t97 = ((x433!=x434)%(x435+x436));

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x437 = 5;
	int32_t x440 = INT32_MIN;

    t98 = ((x437!=x438)%(x439+x440));

    if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x441 = INT16_MIN;
	static int16_t x443 = 15;
	static int8_t x444 = 1;
	volatile int32_t t99 = 4751096;

    t99 = ((x441!=x442)%(x443+x444));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x446 = 212U;
	uint32_t x447 = 344412U;
	volatile int16_t x448 = 0;

    t100 = ((x445!=x446)%(x447+x448));

    if (t100 != 1U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x449 = INT8_MIN;
	int8_t x451 = 16;
	int32_t x452 = -3007439;

    t101 = ((x449!=x450)%(x451+x452));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x453 = 1;
	volatile uint32_t x454 = 22U;
	static int32_t x455 = INT32_MIN;
	static int32_t t102 = -47113013;

    t102 = ((x453!=x454)%(x455+x456));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x457 = 18U;
	int64_t x458 = 17064595009046LL;
	uint64_t x459 = 355548LLU;
	uint32_t x460 = UINT32_MAX;
	volatile uint64_t t103 = 57292778936LLU;

    t103 = ((x457!=x458)%(x459+x460));

    if (t103 != 1LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x465 = 35;
	int8_t x467 = -11;
	volatile uint32_t x468 = 319148151U;
	static uint32_t t104 = 4U;

    t104 = ((x465!=x466)%(x467+x468));

    if (t104 != 1U) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x469 = 37;
	uint8_t x470 = 60U;
	int32_t x471 = 302337;
	uint32_t x472 = 170655920U;
	volatile uint32_t t105 = 0U;

    t105 = ((x469!=x470)%(x471+x472));

    if (t105 != 1U) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x473 = INT64_MAX;
	int8_t x474 = INT8_MAX;
	volatile uint64_t x475 = UINT64_MAX;
	uint64_t t106 = 2202LLU;

    t106 = ((x473!=x474)%(x475+x476));

    if (t106 != 1LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x477 = INT8_MIN;
	uint64_t x478 = 9444660151666565LLU;
	static uint64_t x480 = 193075448190LLU;
	uint64_t t107 = 2092410LLU;

    t107 = ((x477!=x478)%(x479+x480));

    if (t107 != 1LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x481 = UINT32_MAX;
	volatile int64_t x482 = INT64_MAX;
	static uint64_t x483 = 241346871230LLU;
	static volatile uint64_t t108 = 3LLU;

    t108 = ((x481!=x482)%(x483+x484));

    if (t108 != 1LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x485 = INT8_MAX;
	uint32_t x486 = 7U;
	int16_t x487 = INT16_MIN;
	uint64_t x488 = 3368407LLU;
	static uint64_t t109 = 4195705LLU;

    t109 = ((x485!=x486)%(x487+x488));

    if (t109 != 1LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x489 = 33754U;
	uint32_t x490 = 45U;
	int16_t x491 = 423;
	volatile uint64_t t110 = 111LLU;

    t110 = ((x489!=x490)%(x491+x492));

    if (t110 != 1LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x493 = INT32_MAX;
	int16_t x494 = INT16_MIN;
	static uint32_t x495 = 31U;
	int32_t x496 = 4543743;
	uint32_t t111 = 15U;

    t111 = ((x493!=x494)%(x495+x496));

    if (t111 != 1U) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x501 = INT16_MIN;
	uint16_t x502 = 42U;
	static volatile int8_t x503 = INT8_MIN;
	int8_t x504 = -1;
	int32_t t112 = 3;

    t112 = ((x501!=x502)%(x503+x504));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x505 = UINT32_MAX;
	uint16_t x508 = 361U;
	volatile int32_t t113 = -1;

    t113 = ((x505!=x506)%(x507+x508));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x509 = 8;
	int8_t x510 = INT8_MAX;
	int64_t x511 = 1254404994905LL;
	int32_t x512 = INT32_MIN;
	int64_t t114 = 4152693383LL;

    t114 = ((x509!=x510)%(x511+x512));

    if (t114 != 1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x513 = UINT16_MAX;
	volatile int8_t x514 = -6;
	int32_t x515 = -1;
	volatile int16_t x516 = 71;
	int32_t t115 = 21823;

    t115 = ((x513!=x514)%(x515+x516));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x517 = INT8_MIN;
	uint64_t x518 = 617470775368LLU;
	int8_t x519 = 0;
	static int8_t x520 = -19;
	int32_t t116 = -172881;

    t116 = ((x517!=x518)%(x519+x520));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x521 = -187572927124103LL;
	int64_t x522 = INT64_MAX;
	uint8_t x523 = UINT8_MAX;
	volatile int32_t t117 = 3;

    t117 = ((x521!=x522)%(x523+x524));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x526 = INT8_MIN;
	int64_t x528 = 123LL;

    t118 = ((x525!=x526)%(x527+x528));

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x529 = -1;
	uint64_t x531 = UINT64_MAX;
	int32_t x532 = 1323845;
	volatile uint64_t t119 = 1LLU;

    t119 = ((x529!=x530)%(x531+x532));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x537 = -1LL;
	int32_t x538 = -16285877;
	static int32_t x539 = INT32_MIN;
	int32_t t120 = -88;

    t120 = ((x537!=x538)%(x539+x540));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x541 = -1;
	int32_t x542 = -1;
	int64_t x543 = -1LL;
	volatile int64_t t121 = 1LL;

    t121 = ((x541!=x542)%(x543+x544));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x549 = INT64_MIN;
	volatile uint8_t x550 = UINT8_MAX;
	int32_t x552 = 41413190;
	volatile int32_t t122 = -431;

    t122 = ((x549!=x550)%(x551+x552));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x558 = INT16_MIN;
	uint64_t x559 = 9097LLU;
	int8_t x560 = -12;
	volatile uint64_t t123 = 557064344369779182LLU;

    t123 = ((x557!=x558)%(x559+x560));

    if (t123 != 1LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x561 = UINT8_MAX;
	static volatile int16_t x562 = INT16_MAX;
	volatile uint8_t x563 = UINT8_MAX;
	static volatile int32_t t124 = -73;

    t124 = ((x561!=x562)%(x563+x564));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x565 = -4835064;
	uint32_t x567 = UINT32_MAX;
	int64_t x568 = INT64_MIN;

    t125 = ((x565!=x566)%(x567+x568));

    if (t125 != 1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x569 = UINT64_MAX;
	uint64_t x570 = UINT64_MAX;
	int8_t x572 = INT8_MAX;
	int64_t t126 = 1729849960LL;

    t126 = ((x569!=x570)%(x571+x572));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x573 = INT64_MAX;
	int8_t x574 = INT8_MAX;
	volatile int32_t x575 = -1;
	int8_t x576 = INT8_MIN;

    t127 = ((x573!=x574)%(x575+x576));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x578 = INT64_MIN;
	int8_t x579 = INT8_MIN;
	volatile int8_t x580 = -1;
	static int32_t t128 = 171912;

    t128 = ((x577!=x578)%(x579+x580));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x581 = -1;
	int32_t x582 = 249912;
	static int16_t x583 = 7044;
	uint64_t x584 = 21LLU;
	uint64_t t129 = 1429LLU;

    t129 = ((x581!=x582)%(x583+x584));

    if (t129 != 1LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x585 = INT32_MIN;
	int32_t x586 = INT32_MAX;
	uint64_t x587 = 5014050567242860LLU;
	int64_t x588 = 3200720160688246LL;
	static volatile uint64_t t130 = 3982500883360041LLU;

    t130 = ((x585!=x586)%(x587+x588));

    if (t130 != 1LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x590 = INT16_MAX;
	int64_t x591 = INT64_MAX;
	static int64_t x592 = INT64_MIN;
	int64_t t131 = 1478LL;

    t131 = ((x589!=x590)%(x591+x592));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x594 = UINT32_MAX;
	uint64_t x595 = UINT64_MAX;
	static int32_t x596 = INT32_MIN;

    t132 = ((x593!=x594)%(x595+x596));

    if (t132 != 1LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x599 = -1LL;
	uint32_t x600 = 8653U;
	static volatile int64_t t133 = 98970516988967231LL;

    t133 = ((x597!=x598)%(x599+x600));

    if (t133 != 1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x605 = -66283762558083885LL;
	uint8_t x606 = UINT8_MAX;
	int8_t x607 = INT8_MIN;
	static uint32_t x608 = 438371U;
	volatile uint32_t t134 = 579U;

    t134 = ((x605!=x606)%(x607+x608));

    if (t134 != 1U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x609 = UINT16_MAX;
	int64_t x610 = -1LL;
	int32_t x611 = INT32_MIN;
	uint16_t x612 = 29070U;
	int32_t t135 = 6817;

    t135 = ((x609!=x610)%(x611+x612));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x613 = -15;
	volatile uint32_t x614 = UINT32_MAX;
	int16_t x615 = 4838;
	static int8_t x616 = -1;

    t136 = ((x613!=x614)%(x615+x616));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x617 = 316619929116LLU;
	int32_t x618 = -978;
	volatile int16_t x619 = -1;
	uint16_t x620 = 12U;
	int32_t t137 = 3;

    t137 = ((x617!=x618)%(x619+x620));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x621 = -1;
	volatile int32_t x623 = INT32_MIN;
	int32_t x624 = INT32_MAX;
	int32_t t138 = -9211131;

    t138 = ((x621!=x622)%(x623+x624));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x625 = INT32_MIN;
	int32_t x626 = INT32_MIN;
	int32_t x628 = -7904;
	static volatile int32_t t139 = 31;

    t139 = ((x625!=x626)%(x627+x628));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x629 = -1LL;
	int16_t x630 = INT16_MIN;
	int32_t x631 = -1699457;
	static int8_t x632 = -1;

    t140 = ((x629!=x630)%(x631+x632));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x633 = INT8_MAX;
	static int32_t x634 = -2;
	static uint64_t x636 = 380109462093LLU;
	volatile uint64_t t141 = 13872600LLU;

    t141 = ((x633!=x634)%(x635+x636));

    if (t141 != 1LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x639 = 1;
	volatile uint16_t x640 = UINT16_MAX;
	volatile int32_t t142 = -14804;

    t142 = ((x637!=x638)%(x639+x640));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x641 = 3;
	int64_t x642 = INT64_MIN;
	static int16_t x643 = INT16_MIN;
	static int32_t x644 = 72;
	static volatile int32_t t143 = 1;

    t143 = ((x641!=x642)%(x643+x644));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x645 = -1;
	int16_t x646 = INT16_MIN;
	int32_t x647 = 634;

    t144 = ((x645!=x646)%(x647+x648));

    if (t144 != 1LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x650 = -1;
	static int32_t x651 = 34785118;
	static int64_t x652 = 1197954668LL;

    t145 = ((x649!=x650)%(x651+x652));

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x654 = INT16_MIN;
	volatile int8_t x655 = INT8_MIN;
	volatile int32_t t146 = 109861795;

    t146 = ((x653!=x654)%(x655+x656));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x658 = UINT8_MAX;
	static volatile uint8_t x659 = 12U;
	int16_t x660 = 179;
	int32_t t147 = -247;

    t147 = ((x657!=x658)%(x659+x660));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x661 = 31U;
	int8_t x662 = INT8_MIN;
	static int32_t x664 = -1185;

    t148 = ((x661!=x662)%(x663+x664));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x665 = INT32_MIN;
	volatile int8_t x666 = -19;
	uint64_t x667 = 3067638345LLU;
	static int32_t x668 = INT32_MAX;
	static uint64_t t149 = 386469071591LLU;

    t149 = ((x665!=x666)%(x667+x668));

    if (t149 != 1LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int32_t x673 = INT32_MIN;
	int16_t x674 = 3;
	static int8_t x676 = -1;
	volatile int32_t t150 = -2331406;

    t150 = ((x673!=x674)%(x675+x676));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x677 = INT32_MAX;
	int32_t x678 = INT32_MIN;
	volatile uint64_t x680 = 955903975885215LLU;
	uint64_t t151 = 31846095647661LLU;

    t151 = ((x677!=x678)%(x679+x680));

    if (t151 != 1LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x681 = 13U;
	int16_t x682 = -60;
	uint64_t t152 = 6858839828642073LLU;

    t152 = ((x681!=x682)%(x683+x684));

    if (t152 != 1LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x686 = UINT64_MAX;
	static uint64_t x687 = 1260885484619013081LLU;
	static uint16_t x688 = UINT16_MAX;
	uint64_t t153 = 410222LLU;

    t153 = ((x685!=x686)%(x687+x688));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x689 = UINT8_MAX;
	int32_t x690 = 1;
	static int64_t x691 = -3547954172429LL;
	uint8_t x692 = 104U;
	volatile int64_t t154 = 26526208345359523LL;

    t154 = ((x689!=x690)%(x691+x692));

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x694 = 1142;
	static int32_t x695 = -109585973;

    t155 = ((x693!=x694)%(x695+x696));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x697 = -10;
	volatile int16_t x698 = -1;
	static int64_t x699 = -1277511077199164950LL;
	static int64_t t156 = 459LL;

    t156 = ((x697!=x698)%(x699+x700));

    if (t156 != 1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x701 = INT8_MIN;
	uint32_t x702 = 47178407U;
	static volatile int32_t x703 = -2;
	static volatile int16_t x704 = 10;
	volatile int32_t t157 = -381485683;

    t157 = ((x701!=x702)%(x703+x704));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x706 = 163;
	int8_t x707 = INT8_MIN;
	uint64_t x708 = 1039556800087600042LLU;

    t158 = ((x705!=x706)%(x707+x708));

    if (t158 != 1LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x709 = 26U;
	int32_t x710 = -44465839;

    t159 = ((x709!=x710)%(x711+x712));

    if (t159 != 1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x713 = INT64_MAX;
	static int32_t x715 = INT32_MAX;
	uint32_t x716 = 16U;

    t160 = ((x713!=x714)%(x715+x716));

    if (t160 != 1U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x725 = INT8_MIN;
	int32_t x727 = 1;
	static int32_t t161 = 89716;

    t161 = ((x725!=x726)%(x727+x728));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x729 = INT8_MAX;
	uint64_t x730 = UINT64_MAX;
	static int64_t x731 = -175064542094022LL;
	uint32_t x732 = 96131U;
	int64_t t162 = -582241648210969540LL;

    t162 = ((x729!=x730)%(x731+x732));

    if (t162 != 1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x733 = 23779592984632LLU;
	static volatile int8_t x734 = 9;
	uint16_t x735 = 415U;
	int16_t x736 = -384;
	volatile int32_t t163 = -27582323;

    t163 = ((x733!=x734)%(x735+x736));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x737 = -1;
	uint16_t x739 = UINT16_MAX;
	uint16_t x740 = UINT16_MAX;
	static volatile int32_t t164 = 6149;

    t164 = ((x737!=x738)%(x739+x740));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x741 = -1;
	uint32_t x742 = 74U;
	static uint32_t x743 = 271411247U;
	int32_t x744 = INT32_MIN;

    t165 = ((x741!=x742)%(x743+x744));

    if (t165 != 1U) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x746 = INT32_MAX;
	static volatile uint32_t x747 = 51U;
	uint8_t x748 = 88U;
	volatile uint32_t t166 = 220664U;

    t166 = ((x745!=x746)%(x747+x748));

    if (t166 != 1U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x754 = 1;
	int64_t x755 = -1LL;
	int32_t x756 = 4174817;
	volatile int64_t t167 = 7755379697196LL;

    t167 = ((x753!=x754)%(x755+x756));

    if (t167 != 1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x757 = UINT16_MAX;
	int16_t x758 = INT16_MIN;
	volatile int16_t x759 = -70;
	int8_t x760 = INT8_MIN;
	int32_t t168 = 2543576;

    t168 = ((x757!=x758)%(x759+x760));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x765 = -198;
	volatile int32_t x766 = INT32_MIN;
	uint8_t x767 = UINT8_MAX;
	uint64_t x768 = 16121LLU;
	volatile uint64_t t169 = 11566969966381LLU;

    t169 = ((x765!=x766)%(x767+x768));

    if (t169 != 1LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x769 = UINT16_MAX;
	int32_t x770 = INT32_MAX;
	int64_t x772 = INT64_MIN;
	int64_t t170 = 3721272065053298344LL;

    t170 = ((x769!=x770)%(x771+x772));

    if (t170 != 1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x773 = UINT64_MAX;
	int32_t x774 = 168139;
	static int16_t x775 = 129;
	static int64_t x776 = INT64_MIN;
	int64_t t171 = -3LL;

    t171 = ((x773!=x774)%(x775+x776));

    if (t171 != 1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x777 = INT8_MIN;
	uint8_t x780 = 0U;
	volatile int32_t t172 = -7;

    t172 = ((x777!=x778)%(x779+x780));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x781 = INT8_MIN;
	int64_t x782 = INT64_MIN;
	int64_t x784 = -18624LL;
	uint64_t t173 = 237421409467044539LLU;

    t173 = ((x781!=x782)%(x783+x784));

    if (t173 != 1LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x785 = -1;
	uint64_t x786 = 3770873648LLU;
	uint8_t x787 = 12U;
	volatile int16_t x788 = -908;

    t174 = ((x785!=x786)%(x787+x788));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x789 = INT8_MIN;
	static int8_t x790 = INT8_MIN;
	static uint32_t x791 = UINT32_MAX;
	volatile int64_t t175 = -3100LL;

    t175 = ((x789!=x790)%(x791+x792));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x793 = 13U;
	static volatile uint64_t x794 = 256366LLU;
	static int8_t x795 = -1;
	int64_t x796 = INT64_MAX;
	static volatile int64_t t176 = -351078261116343LL;

    t176 = ((x793!=x794)%(x795+x796));

    if (t176 != 1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x797 = 77U;
	int64_t x798 = INT64_MIN;
	uint32_t x799 = UINT32_MAX;
	uint8_t x800 = 0U;
	volatile uint32_t t177 = 37U;

    t177 = ((x797!=x798)%(x799+x800));

    if (t177 != 1U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x801 = INT8_MIN;
	int64_t x802 = -1LL;
	volatile int8_t x803 = -1;
	volatile uint64_t x804 = 217964901423LLU;
	volatile uint64_t t178 = 157665994973109021LLU;

    t178 = ((x801!=x802)%(x803+x804));

    if (t178 != 1LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x805 = 2534780445382983LL;
	static int64_t x806 = -1LL;
	int32_t x807 = -1;
	int64_t x808 = -26246LL;
	volatile int64_t t179 = 216099536LL;

    t179 = ((x805!=x806)%(x807+x808));

    if (t179 != 1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x809 = 3831;
	int8_t x810 = INT8_MIN;
	volatile int64_t x811 = 286979158382159LL;
	int8_t x812 = INT8_MIN;
	static volatile int64_t t180 = 4386500212LL;

    t180 = ((x809!=x810)%(x811+x812));

    if (t180 != 1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x813 = UINT32_MAX;
	int32_t x814 = -14449384;
	int8_t x815 = INT8_MIN;
	int16_t x816 = INT16_MIN;
	volatile int32_t t181 = 5131162;

    t181 = ((x813!=x814)%(x815+x816));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x817 = 0U;
	int32_t x818 = -1;
	uint64_t x819 = 1708813773754892443LLU;
	static volatile uint64_t x820 = 6764670118314LLU;
	uint64_t t182 = 2055264830789638800LLU;

    t182 = ((x817!=x818)%(x819+x820));

    if (t182 != 1LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x821 = INT32_MIN;
	int32_t x822 = -13;
	volatile int32_t t183 = 7422;

    t183 = ((x821!=x822)%(x823+x824));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x825 = -1;
	volatile uint8_t x826 = UINT8_MAX;
	uint64_t x827 = 370365077055130LLU;
	volatile int8_t x828 = INT8_MIN;
	volatile uint64_t t184 = 2704954187384LLU;

    t184 = ((x825!=x826)%(x827+x828));

    if (t184 != 1LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x829 = INT8_MIN;
	int32_t x830 = INT32_MIN;
	uint16_t x831 = UINT16_MAX;
	volatile int32_t x832 = INT32_MIN;
	volatile int32_t t185 = -1;

    t185 = ((x829!=x830)%(x831+x832));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x833 = INT32_MAX;
	uint8_t x834 = 2U;
	volatile uint8_t x836 = 2U;
	int32_t t186 = -33501530;

    t186 = ((x833!=x834)%(x835+x836));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x837 = -1;
	int16_t x838 = 4;
	volatile uint32_t x840 = 15887U;
	static volatile uint32_t t187 = 25550088U;

    t187 = ((x837!=x838)%(x839+x840));

    if (t187 != 1U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x841 = 6772234383428LLU;
	static int16_t x842 = INT16_MIN;
	static int16_t x843 = INT16_MIN;
	volatile int16_t x844 = INT16_MIN;
	int32_t t188 = 647;

    t188 = ((x841!=x842)%(x843+x844));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x845 = -1LL;
	volatile int8_t x846 = INT8_MIN;
	uint32_t x847 = 280123U;
	int64_t x848 = -485852723704846LL;
	static int64_t t189 = 2542986819019371890LL;

    t189 = ((x845!=x846)%(x847+x848));

    if (t189 != 1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x850 = 2358;
	static int8_t x851 = INT8_MAX;
	int8_t x852 = INT8_MIN;
	volatile int32_t t190 = 0;

    t190 = ((x849!=x850)%(x851+x852));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x857 = INT32_MIN;
	static int16_t x859 = -18;
	int32_t t191 = 58510;

    t191 = ((x857!=x858)%(x859+x860));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x862 = 27093050;
	static volatile uint16_t x863 = 7U;
	int32_t x864 = INT32_MIN;
	int32_t t192 = 8;

    t192 = ((x861!=x862)%(x863+x864));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x865 = 0;
	uint64_t x866 = 74813128963271LLU;
	volatile uint8_t x867 = 1U;
	volatile uint64_t x868 = 42035LLU;
	volatile uint64_t t193 = 3859430739205198LLU;

    t193 = ((x865!=x866)%(x867+x868));

    if (t193 != 1LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x870 = 36U;
	static uint8_t x871 = 44U;
	static int64_t x872 = INT64_MIN;
	volatile int64_t t194 = -229LL;

    t194 = ((x869!=x870)%(x871+x872));

    if (t194 != 1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x873 = 22168050224749LLU;
	uint64_t x874 = UINT64_MAX;
	volatile int8_t x876 = 1;
	static volatile int32_t t195 = 41;

    t195 = ((x873!=x874)%(x875+x876));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x877 = INT64_MIN;
	uint64_t x878 = 0LLU;
	int32_t x879 = INT32_MIN;
	volatile int16_t x880 = 0;
	volatile int32_t t196 = -90976807;

    t196 = ((x877!=x878)%(x879+x880));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x881 = UINT64_MAX;
	static int16_t x882 = INT16_MIN;
	uint8_t x883 = UINT8_MAX;
	int8_t x884 = 1;
	volatile int32_t t197 = 8519;

    t197 = ((x881!=x882)%(x883+x884));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x885 = INT32_MAX;
	static int32_t x887 = -249495;
	volatile int32_t x888 = -1;
	int32_t t198 = 1;

    t198 = ((x885!=x886)%(x887+x888));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x897 = INT8_MIN;
	uint64_t x898 = UINT64_MAX;
	static volatile int8_t x900 = INT8_MAX;
	volatile int32_t t199 = -14;

    t199 = ((x897!=x898)%(x899+x900));

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

