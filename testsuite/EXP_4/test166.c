
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

int8_t x6 = INT8_MIN;
static int8_t x14 = INT8_MAX;
static volatile int8_t x20 = -1;
int32_t x23 = -1;
volatile int8_t x32 = 5;
uint32_t x34 = UINT32_MAX;
uint32_t x45 = UINT32_MAX;
volatile uint16_t x50 = UINT16_MAX;
uint64_t x55 = 623LLU;
volatile int64_t t12 = 1731749290713LL;
static int32_t x65 = INT32_MIN;
volatile int64_t t13 = 198810491442301254LL;
uint8_t x72 = 46U;
static volatile int32_t t14 = 56;
static int32_t t15 = -258273;
int32_t x83 = -3048;
static int64_t x87 = -1LL;
int16_t x94 = INT16_MIN;
int32_t t19 = 3;
int16_t x97 = -1;
static volatile uint32_t t20 = 101U;
int16_t x102 = INT16_MIN;
static volatile int16_t x103 = 2;
static int64_t t22 = 217340867376406750LL;
uint8_t x113 = 42U;
int32_t x119 = 11;
static uint64_t x123 = 0LLU;
static int64_t x128 = -1LL;
volatile uint64_t t26 = 500LLU;
uint32_t x129 = 11014U;
volatile int8_t x130 = INT8_MAX;
static int32_t x140 = -29866;
int16_t x149 = -1;
int64_t x152 = INT64_MIN;
uint32_t x167 = 907246764U;
static int32_t x174 = INT32_MAX;
uint64_t t38 = 24150798698037036LLU;
volatile uint16_t x184 = 18U;
uint16_t x185 = 67U;
uint64_t x187 = UINT64_MAX;
uint16_t x193 = 26215U;
int16_t x196 = INT16_MAX;
uint16_t x199 = UINT16_MAX;
uint16_t x204 = 1969U;
int32_t t44 = 848568;
int64_t x207 = 135040467066645LL;
volatile int64_t x209 = -272563212LL;
uint16_t x211 = UINT16_MAX;
uint8_t x212 = 23U;
int64_t t47 = -393987LL;
int16_t x217 = -1;
static int32_t x223 = -203;
static int32_t x225 = INT32_MIN;
int64_t x229 = INT64_MIN;
volatile int64_t t51 = -6731089LL;
static int16_t x241 = INT16_MIN;
int8_t x243 = INT8_MIN;
int8_t x246 = INT8_MIN;
static uint16_t x248 = 25950U;
uint64_t t54 = 42LLU;
static int32_t x250 = INT32_MIN;
int32_t x257 = -1;
int32_t x258 = INT32_MIN;
int64_t t56 = 59LL;
volatile int8_t x266 = INT8_MIN;
uint32_t x278 = 23U;
volatile int64_t x281 = -1LL;
int64_t t62 = INT64_MIN;
volatile int16_t x293 = 99;
volatile int16_t x302 = INT16_MIN;
volatile int32_t t65 = 101;
volatile int64_t x306 = 1685058338718LL;
static int32_t x308 = INT32_MAX;
static uint32_t x311 = UINT32_MAX;
int64_t t67 = 109LL;
volatile uint8_t x317 = 37U;
volatile int64_t t70 = -113010LL;
int32_t x330 = 407689;
int32_t t71 = 34249119;
volatile int8_t x337 = INT8_MIN;
int32_t t73 = 0;
int32_t x344 = 173147009;
int8_t x349 = -1;
int8_t x353 = -1;
int16_t x358 = INT16_MAX;
volatile int32_t t80 = 10487;
static uint8_t x369 = 37U;
volatile int16_t x378 = 1;
int32_t t83 = 540;
static uint16_t x384 = 5414U;
static int8_t x389 = INT8_MIN;
int64_t x402 = INT64_MAX;
volatile int64_t t90 = 752546LL;
static uint64_t t92 = 12718898017LLU;
volatile int64_t t93 = 38214554638922169LL;
uint32_t x435 = 2367U;
int16_t x439 = INT16_MIN;
uint16_t x441 = 27913U;
int16_t x443 = -50;
int64_t x450 = 1693LL;
uint16_t x451 = 23540U;
int64_t t98 = -4521LL;
uint32_t x457 = 19277U;
int64_t x460 = -59254346710381LL;
volatile int64_t t102 = 2824404LL;
int32_t x477 = INT32_MAX;
static int64_t x482 = INT64_MIN;
volatile int8_t x486 = 6;
int64_t t107 = 2LL;
int16_t x494 = INT16_MAX;
uint64_t t110 = 2655225641889260LLU;
static int16_t x517 = 16032;
int8_t x520 = INT8_MIN;
uint64_t t113 = 0LLU;
int64_t x525 = INT64_MAX;
volatile uint64_t t114 = 63655982073LLU;
volatile int32_t t115 = 5511;
int16_t x534 = INT16_MAX;
int64_t x550 = -1LL;
uint32_t x551 = UINT32_MAX;
int64_t t120 = 1013LL;
static volatile int16_t x554 = INT16_MIN;
int16_t x555 = -1;
int64_t x560 = INT64_MAX;
static uint16_t x562 = UINT16_MAX;
static volatile uint64_t x564 = UINT64_MAX;
static uint64_t t123 = 1239426162334815696LLU;
uint16_t x568 = 31557U;
static int32_t x569 = INT32_MIN;
int64_t t127 = 30988471860LL;
static int32_t x587 = INT32_MIN;
int64_t x590 = 53954761334511630LL;
static uint16_t x591 = 175U;
int16_t x594 = -3995;
int32_t x597 = INT32_MIN;
static uint64_t x603 = 8580263208LLU;
volatile int64_t x605 = INT64_MIN;
static volatile uint64_t t134 = 6706764218179998LLU;
static volatile int16_t x615 = INT16_MIN;
volatile int32_t t136 = 4421509;
uint64_t x620 = 961254359127LLU;
static int16_t x625 = -1;
int32_t x631 = INT32_MIN;
volatile int32_t t141 = 3804245;
int32_t x637 = INT32_MIN;
int16_t x639 = INT16_MIN;
uint32_t x640 = 48613U;
volatile uint64_t t142 = 2870807102489453589LLU;
volatile uint16_t x648 = 108U;
int32_t x654 = INT32_MIN;
volatile int32_t t145 = INT32_MIN;
int64_t x663 = -472588749LL;
int8_t x665 = -1;
static volatile uint64_t x666 = 182186515611567191LLU;
int8_t x667 = INT8_MIN;
uint32_t x671 = 63634U;
uint16_t x695 = UINT16_MAX;
static int64_t x697 = -257465748105911LL;
uint64_t x699 = UINT64_MAX;
static uint64_t t154 = 522461042LLU;
int16_t x708 = INT16_MIN;
int16_t x714 = INT16_MAX;
int32_t t158 = -9455;
static int8_t x743 = -32;
int32_t x745 = INT32_MAX;
static int64_t x747 = INT64_MAX;
volatile int8_t x748 = INT8_MIN;
static volatile int64_t t165 = 3249010LL;
int64_t x765 = 96499037779683182LL;
int64_t x767 = INT64_MAX;
volatile int64_t t169 = 3395LL;
uint16_t x772 = UINT16_MAX;
int64_t x782 = INT64_MAX;
volatile int8_t x791 = -1;
static int8_t x792 = 28;
static int16_t x806 = INT16_MIN;
uint8_t x808 = UINT8_MAX;
uint64_t t178 = 620040765LLU;
int8_t x810 = INT8_MIN;
uint8_t x825 = UINT8_MAX;
int32_t x832 = -1227;
volatile int64_t t183 = -159919LL;
volatile int8_t x834 = INT8_MAX;
volatile uint64_t t184 = 4748805169LLU;
int8_t x859 = 1;
int32_t x862 = -1;
static uint64_t t190 = 1798829427652128LLU;
static int32_t x869 = INT32_MIN;
uint32_t t192 = 222322U;
int8_t x873 = -6;
static volatile uint64_t x875 = 40367907LLU;
static volatile uint64_t t193 = 955610LLU;
uint32_t x877 = 3376U;
int64_t x879 = INT64_MAX;
static int64_t t194 = 2564719059LL;
uint16_t x890 = UINT16_MAX;
volatile int64_t t197 = -28270449394LL;
int8_t x902 = -1;


void f0(void) {
    	uint64_t x1 = 142030259984206LLU;
	static int8_t x2 = 3;
	int64_t x3 = -1LL;
	uint32_t x4 = 9U;
	volatile uint64_t t0 = 14500292442672097LLU;

    t0 = (x1&(x2&(x3+x4)));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 22U;
	static uint32_t x7 = 64538921U;
	volatile int16_t x8 = INT16_MIN;
	volatile uint32_t t1 = 0U;

    t1 = (x5&(x6&(x7+x8)));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x13 = 0;
	uint16_t x15 = 876U;
	int64_t x16 = INT64_MIN;
	volatile int64_t t2 = 31322162872LL;

    t2 = (x13&(x14&(x15+x16)));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = UINT64_MAX;
	int32_t x18 = -56735;
	volatile uint32_t x19 = UINT32_MAX;
	volatile uint64_t t3 = 32LLU;

    t3 = (x17&(x18&(x19+x20)));

    if (t3 != 4294910560LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = INT32_MIN;
	uint16_t x22 = UINT16_MAX;
	uint32_t x24 = 1854U;
	uint32_t t4 = 704781U;

    t4 = (x21&(x22&(x23+x24)));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x29 = INT8_MIN;
	int16_t x30 = INT16_MAX;
	static int32_t x31 = -1;
	volatile int32_t t5 = -6;

    t5 = (x29&(x30&(x31+x32)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x33 = -1;
	int64_t x35 = 372966LL;
	static volatile int32_t x36 = 30662347;
	int64_t t6 = -479041519LL;

    t6 = (x33&(x34&(x35+x36)));

    if (t6 != 31035313LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x37 = 60U;
	int64_t x38 = -1LL;
	int16_t x39 = -1;
	int64_t x40 = INT64_MAX;
	volatile int64_t t7 = -955943142160004797LL;

    t7 = (x37&(x38&(x39+x40)));

    if (t7 != 60LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x41 = -1;
	int8_t x42 = -42;
	uint64_t x43 = 3051339309LLU;
	int16_t x44 = INT16_MIN;
	volatile uint64_t t8 = 5047202953363LLU;

    t8 = (x41&(x42&(x43+x44)));

    if (t8 != 3051306500LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x46 = 0U;
	int64_t x47 = 1637333206600849LL;
	int16_t x48 = INT16_MAX;
	volatile int64_t t9 = -3361LL;

    t9 = (x45&(x46&(x47+x48)));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x49 = 307U;
	static uint64_t x51 = UINT64_MAX;
	int8_t x52 = INT8_MAX;
	volatile uint64_t t10 = 118780154LLU;

    t10 = (x49&(x50&(x51+x52)));

    if (t10 != 50LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x53 = INT8_MIN;
	uint16_t x54 = 24U;
	volatile int64_t x56 = INT64_MAX;
	static volatile uint64_t t11 = 1599810LLU;

    t11 = (x53&(x54&(x55+x56)));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x57 = -1403;
	int32_t x58 = -260729884;
	uint32_t x59 = UINT32_MAX;
	volatile int64_t x60 = 2145788338392LL;

    t12 = (x57&(x58&(x59+x60)));

    if (t12 != 2149907005572LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x66 = INT64_MIN;
	int32_t x67 = 122179149;
	uint32_t x68 = 90U;

    t13 = (x65&(x66&(x67+x68)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x69 = INT8_MIN;
	static int32_t x70 = 108283620;
	int8_t x71 = -19;

    t14 = (x69&(x70&(x71+x72)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x73 = 0;
	int32_t x74 = -1;
	int32_t x75 = -1;
	uint16_t x76 = UINT16_MAX;

    t15 = (x73&(x74&(x75+x76)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x77 = -1;
	int64_t x78 = 1LL;
	int64_t x79 = 29562081432LL;
	uint8_t x80 = 3U;
	static volatile int64_t t16 = -5758294LL;

    t16 = (x77&(x78&(x79+x80)));

    if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x81 = -1702959989559LL;
	volatile int8_t x82 = 0;
	volatile int16_t x84 = -2005;
	int64_t t17 = -39664629804815LL;

    t17 = (x81&(x82&(x83+x84)));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x85 = 76U;
	static uint16_t x86 = 15U;
	volatile int16_t x88 = -1;
	static volatile int64_t t18 = -95LL;

    t18 = (x85&(x86&(x87+x88)));

    if (t18 != 12LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x93 = 777U;
	int16_t x95 = 209;
	static int16_t x96 = INT16_MIN;

    t19 = (x93&(x94&(x95+x96)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x98 = 121947U;
	int32_t x99 = -503808;
	static int8_t x100 = INT8_MIN;

    t20 = (x97&(x98&(x99+x100)));

    if (t20 != 19456U) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x101 = -1;
	volatile uint64_t x104 = UINT64_MAX;
	volatile uint64_t t21 = 7LLU;

    t21 = (x101&(x102&(x103+x104)));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x105 = -1LL;
	int8_t x106 = INT8_MAX;
	volatile int8_t x107 = INT8_MIN;
	int64_t x108 = INT64_MAX;

    t22 = (x105&(x106&(x107+x108)));

    if (t22 != 127LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x114 = -3341423;
	static uint8_t x115 = 4U;
	static int8_t x116 = -12;
	int32_t t23 = -9189083;

    t23 = (x113&(x114&(x115+x116)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x117 = INT16_MIN;
	volatile int32_t x118 = INT32_MIN;
	static uint64_t x120 = 659LLU;
	uint64_t t24 = 151045861185LLU;

    t24 = (x117&(x118&(x119+x120)));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x121 = 893875U;
	uint16_t x122 = 2U;
	volatile int32_t x124 = INT32_MIN;
	volatile uint64_t t25 = 99824110183779LLU;

    t25 = (x121&(x122&(x123+x124)));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x125 = 22U;
	uint64_t x126 = 3918570246LLU;
	static int64_t x127 = -1LL;

    t26 = (x125&(x126&(x127+x128)));

    if (t26 != 6LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x131 = 32748U;
	uint64_t x132 = UINT64_MAX;
	uint64_t t27 = 303291261693LLU;

    t27 = (x129&(x130&(x131+x132)));

    if (t27 != 2LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x133 = 25216U;
	volatile int64_t x134 = -8LL;
	static uint32_t x135 = 12U;
	int64_t x136 = 41673181LL;
	volatile int64_t t28 = 41181557117LL;

    t28 = (x133&(x134&(x135+x136)));

    if (t28 != 24704LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x137 = 388;
	volatile int32_t x138 = INT32_MIN;
	volatile int32_t x139 = 69;
	int32_t t29 = -54783710;

    t29 = (x137&(x138&(x139+x140)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x141 = -27;
	int8_t x142 = 3;
	int32_t x143 = INT32_MAX;
	int8_t x144 = -1;
	volatile int32_t t30 = -10353223;

    t30 = (x141&(x142&(x143+x144)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x145 = INT16_MAX;
	static int16_t x146 = INT16_MAX;
	volatile uint64_t x147 = 1988051015LLU;
	int32_t x148 = INT32_MAX;
	static volatile uint64_t t31 = 34978081865LLU;

    t31 = (x145&(x146&(x147+x148)));

    if (t31 != 16454LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x150 = INT32_MAX;
	static volatile uint32_t x151 = 752798U;
	int64_t t32 = -1838588593026296LL;

    t32 = (x149&(x150&(x151+x152)));

    if (t32 != 752798LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x153 = 11U;
	volatile int32_t x154 = INT32_MAX;
	uint32_t x155 = 2U;
	static int32_t x156 = INT32_MAX;
	uint32_t t33 = 207623U;

    t33 = (x153&(x154&(x155+x156)));

    if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x157 = 1;
	volatile int8_t x158 = 3;
	uint8_t x159 = UINT8_MAX;
	uint32_t x160 = UINT32_MAX;
	volatile uint32_t t34 = 8884053U;

    t34 = (x157&(x158&(x159+x160)));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x165 = -1;
	static volatile uint16_t x166 = 85U;
	uint32_t x168 = UINT32_MAX;
	volatile uint32_t t35 = 102065395U;

    t35 = (x165&(x166&(x167+x168)));

    if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x169 = INT64_MAX;
	uint16_t x170 = UINT16_MAX;
	static int16_t x171 = -11;
	int8_t x172 = -49;
	volatile int64_t t36 = -8312LL;

    t36 = (x169&(x170&(x171+x172)));

    if (t36 != 65476LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x173 = 17U;
	int16_t x175 = -5;
	static volatile int8_t x176 = INT8_MIN;
	volatile int32_t t37 = 1;

    t37 = (x173&(x174&(x175+x176)));

    if (t37 != 17) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x177 = INT8_MAX;
	uint64_t x178 = 94135456LLU;
	int8_t x179 = INT8_MAX;
	static int8_t x180 = 12;

    t38 = (x177&(x178&(x179+x180)));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x181 = INT64_MAX;
	volatile uint32_t x182 = 3U;
	static int64_t x183 = -1LL;
	volatile int64_t t39 = 77296180LL;

    t39 = (x181&(x182&(x183+x184)));

    if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x186 = INT16_MIN;
	int16_t x188 = INT16_MAX;
	uint64_t t40 = 2193769LLU;

    t40 = (x185&(x186&(x187+x188)));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x189 = INT64_MIN;
	int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MAX;
	int8_t x192 = INT8_MIN;
	volatile int64_t t41 = INT64_MIN;

    t41 = (x189&(x190&(x191+x192)));

    if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x194 = -1;
	int16_t x195 = INT16_MAX;
	static int32_t t42 = 6010406;

    t42 = (x193&(x194&(x195+x196)));

    if (t42 != 26214) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x197 = 39U;
	int8_t x198 = INT8_MAX;
	int64_t x200 = INT64_MIN;
	volatile int64_t t43 = 19630438782560586LL;

    t43 = (x197&(x198&(x199+x200)));

    if (t43 != 39LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x201 = INT8_MAX;
	uint16_t x202 = 3U;
	volatile int8_t x203 = INT8_MIN;

    t44 = (x201&(x202&(x203+x204)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x205 = UINT32_MAX;
	uint64_t x206 = UINT64_MAX;
	volatile uint16_t x208 = UINT16_MAX;
	static uint64_t t45 = 226LLU;

    t45 = (x205&(x206&(x207+x208)));

    if (t45 != 2400378644LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x210 = 0;
	volatile int64_t t46 = -25259LL;

    t46 = (x209&(x210&(x211+x212)));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x213 = -179029;
	int32_t x214 = INT32_MIN;
	int32_t x215 = INT32_MAX;
	int64_t x216 = -1705LL;

    t47 = (x213&(x214&(x215+x216)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x218 = 1061811934436LLU;
	static uint8_t x219 = 72U;
	int32_t x220 = -1;
	volatile uint64_t t48 = 452712425561LLU;

    t48 = (x217&(x218&(x219+x220)));

    if (t48 != 68LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x221 = INT8_MIN;
	int32_t x222 = -1;
	uint32_t x224 = 39869416U;
	uint32_t t49 = 35U;

    t49 = (x221&(x222&(x223+x224)));

    if (t49 != 39869184U) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x226 = -23;
	uint16_t x227 = UINT16_MAX;
	volatile int64_t x228 = -42LL;
	int64_t t50 = 1583LL;

    t50 = (x225&(x226&(x227+x228)));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x230 = INT8_MAX;
	uint8_t x231 = UINT8_MAX;
	uint32_t x232 = 446U;

    t51 = (x229&(x230&(x231+x232)));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x233 = INT16_MAX;
	static int64_t x234 = -1LL;
	uint16_t x235 = 6U;
	static uint16_t x236 = 416U;
	volatile int64_t t52 = -2402227503022LL;

    t52 = (x233&(x234&(x235+x236)));

    if (t52 != 422LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x242 = INT64_MIN;
	uint32_t x244 = UINT32_MAX;
	int64_t t53 = 31375LL;

    t53 = (x241&(x242&(x243+x244)));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x245 = -3;
	uint64_t x247 = 299618239770LLU;

    t54 = (x245&(x246&(x247+x248)));

    if (t54 != 299618265600LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x249 = 7413U;
	int64_t x251 = 57171845711335LL;
	int8_t x252 = -1;
	volatile int64_t t55 = 3284850889843LL;

    t55 = (x249&(x250&(x251+x252)));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x259 = -353240089794LL;
	uint16_t x260 = 7U;

    t56 = (x257&(x258&(x259+x260)));

    if (t56 != -354334801920LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x261 = 142027262U;
	static volatile int32_t x262 = 0;
	static int16_t x263 = INT16_MAX;
	static int16_t x264 = -1;
	uint32_t t57 = 11219U;

    t57 = (x261&(x262&(x263+x264)));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x265 = -7;
	uint16_t x267 = 0U;
	uint8_t x268 = UINT8_MAX;
	int32_t t58 = 16;

    t58 = (x265&(x266&(x267+x268)));

    if (t58 != 128) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x269 = -1837;
	static int32_t x270 = -378;
	volatile uint64_t x271 = 11281LLU;
	uint64_t x272 = 3521244308030264034LLU;
	volatile uint64_t t59 = 103424348504092536LLU;

    t59 = (x269&(x270&(x271+x272)));

    if (t59 != 3521244308030273666LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x273 = INT32_MAX;
	static int8_t x274 = INT8_MAX;
	uint64_t x275 = 1479010LLU;
	volatile uint32_t x276 = UINT32_MAX;
	uint64_t t60 = 1021857697985563444LLU;

    t60 = (x273&(x274&(x275+x276)));

    if (t60 != 97LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x277 = 26U;
	int32_t x279 = INT32_MIN;
	uint8_t x280 = 53U;
	uint32_t t61 = 186U;

    t61 = (x277&(x278&(x279+x280)));

    if (t61 != 16U) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x282 = INT64_MIN;
	int16_t x283 = INT16_MIN;
	uint8_t x284 = 6U;

    t62 = (x281&(x282&(x283+x284)));

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x289 = INT8_MIN;
	int16_t x290 = INT16_MIN;
	uint8_t x291 = 57U;
	static int16_t x292 = INT16_MAX;
	static volatile int32_t t63 = -121186;

    t63 = (x289&(x290&(x291+x292)));

    if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x294 = -1LL;
	volatile int16_t x295 = INT16_MIN;
	static int8_t x296 = -1;
	volatile int64_t t64 = 23177154861LL;

    t64 = (x293&(x294&(x295+x296)));

    if (t64 != 99LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x301 = INT16_MAX;
	static int32_t x303 = -1;
	volatile int8_t x304 = 51;

    t65 = (x301&(x302&(x303+x304)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x305 = 2478420;
	static int16_t x307 = INT16_MIN;
	static volatile int64_t t66 = -1583LL;

    t66 = (x305&(x306&(x307+x308)));

    if (t66 != 332052LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x309 = INT64_MIN;
	int8_t x310 = 0;
	static volatile uint16_t x312 = 11U;

    t67 = (x309&(x310&(x311+x312)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x313 = INT16_MIN;
	volatile uint32_t x314 = 7U;
	int32_t x315 = 106720;
	int16_t x316 = INT16_MIN;
	uint32_t t68 = 194U;

    t68 = (x313&(x314&(x315+x316)));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x318 = -1;
	static volatile uint32_t x319 = 1135U;
	static int8_t x320 = INT8_MIN;
	volatile uint32_t t69 = 4045U;

    t69 = (x317&(x318&(x319+x320)));

    if (t69 != 37U) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x321 = -1LL;
	uint32_t x322 = 48127U;
	static int32_t x323 = -1;
	static uint32_t x324 = 864U;

    t70 = (x321&(x322&(x323+x324)));

    if (t70 != 863LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x329 = INT8_MAX;
	uint16_t x331 = 2724U;
	uint8_t x332 = 4U;

    t71 = (x329&(x330&(x331+x332)));

    if (t71 != 8) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x333 = 0U;
	static uint64_t x334 = UINT64_MAX;
	int64_t x335 = -1LL;
	uint8_t x336 = UINT8_MAX;
	static volatile uint64_t t72 = 9905170217291673LLU;

    t72 = (x333&(x334&(x335+x336)));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x338 = INT16_MIN;
	volatile uint8_t x339 = 0U;
	uint16_t x340 = UINT16_MAX;

    t73 = (x337&(x338&(x339+x340)));

    if (t73 != 32768) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x341 = 2U;
	volatile uint64_t x342 = 3686LLU;
	int32_t x343 = 0;
	static volatile uint64_t t74 = 220833LLU;

    t74 = (x341&(x342&(x343+x344)));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x345 = INT64_MAX;
	uint8_t x346 = 0U;
	uint64_t x347 = 1669259579LLU;
	uint8_t x348 = 6U;
	volatile uint64_t t75 = 28600751LLU;

    t75 = (x345&(x346&(x347+x348)));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x350 = INT16_MIN;
	uint32_t x351 = 1542612476U;
	int64_t x352 = -21577625LL;
	int64_t t76 = 2282977LL;

    t76 = (x349&(x350&(x351+x352)));

    if (t76 != 1521025024LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x354 = -1;
	int16_t x355 = -1;
	int32_t x356 = -105152408;
	static volatile int32_t t77 = -52;

    t77 = (x353&(x354&(x355+x356)));

    if (t77 != -105152409) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x357 = 13U;
	static int32_t x359 = INT32_MAX;
	int32_t x360 = -1;
	volatile uint32_t t78 = 1004469943U;

    t78 = (x357&(x358&(x359+x360)));

    if (t78 != 12U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x361 = 81LLU;
	volatile int64_t x362 = 2454943607282LL;
	volatile uint8_t x363 = 14U;
	static uint16_t x364 = UINT16_MAX;
	volatile uint64_t t79 = 400225027252LLU;

    t79 = (x361&(x362&(x363+x364)));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x365 = UINT16_MAX;
	uint8_t x366 = 3U;
	static uint8_t x367 = 40U;
	int16_t x368 = -9;

    t80 = (x365&(x366&(x367+x368)));

    if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x370 = INT16_MIN;
	int32_t x371 = -1;
	int32_t x372 = 51557;
	static int32_t t81 = 283;

    t81 = (x369&(x370&(x371+x372)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x373 = -1;
	volatile int64_t x374 = INT64_MAX;
	int64_t x375 = -1LL;
	volatile int64_t x376 = -1LL;
	volatile int64_t t82 = 4109625265154LL;

    t82 = (x373&(x374&(x375+x376)));

    if (t82 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x377 = 1519U;
	volatile int16_t x379 = 123;
	int32_t x380 = -2;

    t83 = (x377&(x378&(x379+x380)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x381 = -1;
	volatile int8_t x382 = INT8_MIN;
	int16_t x383 = -474;
	volatile int32_t t84 = -456240;

    t84 = (x381&(x382&(x383+x384)));

    if (t84 != 4864) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x390 = -1;
	static volatile int64_t x391 = INT64_MIN;
	static volatile uint16_t x392 = UINT16_MAX;
	int64_t t85 = -1215616910743880LL;

    t85 = (x389&(x390&(x391+x392)));

    if (t85 != -9223372036854710400LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x397 = -1;
	int16_t x398 = INT16_MIN;
	int64_t x399 = INT64_MIN;
	uint16_t x400 = UINT16_MAX;
	int64_t t86 = -2093325814LL;

    t86 = (x397&(x398&(x399+x400)));

    if (t86 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x401 = INT16_MIN;
	volatile int64_t x403 = -11592212LL;
	uint16_t x404 = UINT16_MAX;
	volatile int64_t t87 = -10856LL;

    t87 = (x401&(x402&(x403+x404)));

    if (t87 != 9223372036843241472LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x405 = INT8_MIN;
	int8_t x406 = 0;
	int16_t x407 = -1;
	int64_t x408 = 825645574LL;
	int64_t t88 = -26LL;

    t88 = (x405&(x406&(x407+x408)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x409 = -1;
	uint64_t x410 = UINT64_MAX;
	int32_t x411 = INT32_MIN;
	int32_t x412 = INT32_MAX;
	uint64_t t89 = UINT64_MAX;

    t89 = (x409&(x410&(x411+x412)));

    if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x417 = -1LL;
	int32_t x418 = -5;
	volatile int8_t x419 = INT8_MIN;
	int16_t x420 = -1;

    t90 = (x417&(x418&(x419+x420)));

    if (t90 != -133LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x421 = INT16_MIN;
	uint16_t x422 = 1U;
	int16_t x423 = -4;
	volatile uint16_t x424 = 1U;
	volatile int32_t t91 = 5968191;

    t91 = (x421&(x422&(x423+x424)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x425 = UINT64_MAX;
	int16_t x426 = INT16_MAX;
	static uint32_t x427 = 23748U;
	volatile int32_t x428 = -61290;

    t92 = (x425&(x426&(x427+x428)));

    if (t92 != 27994LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x429 = INT64_MIN;
	uint32_t x430 = UINT32_MAX;
	volatile int64_t x431 = INT64_MAX;
	int16_t x432 = -3;

    t93 = (x429&(x430&(x431+x432)));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x433 = 0;
	int64_t x434 = -272675070LL;
	static int16_t x436 = INT16_MAX;
	int64_t t94 = 48173789LL;

    t94 = (x433&(x434&(x435+x436)));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x437 = -1LL;
	uint32_t x438 = 7U;
	int16_t x440 = INT16_MIN;
	int64_t t95 = -2867488937284570601LL;

    t95 = (x437&(x438&(x439+x440)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x442 = 12724U;
	uint32_t x444 = 252854U;
	volatile uint32_t t96 = 1363U;

    t96 = (x441&(x442&(x443+x444)));

    if (t96 != 256U) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x445 = 72178177262LLU;
	uint8_t x446 = UINT8_MAX;
	int16_t x447 = -1;
	uint64_t x448 = UINT64_MAX;
	uint64_t t97 = 4307246764556LLU;

    t97 = (x445&(x446&(x447+x448)));

    if (t97 != 238LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x449 = -1;
	volatile uint8_t x452 = 11U;

    t98 = (x449&(x450&(x451+x452)));

    if (t98 != 669LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x453 = INT8_MIN;
	int8_t x454 = INT8_MAX;
	static uint32_t x455 = 241936U;
	int64_t x456 = INT64_MIN;
	static int64_t t99 = -12LL;

    t99 = (x453&(x454&(x455+x456)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x458 = 4253;
	int8_t x459 = -1;
	static volatile int64_t t100 = 1LL;

    t100 = (x457&(x458&(x459+x460)));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x461 = -12216;
	static int16_t x462 = -987;
	static int16_t x463 = INT16_MAX;
	uint64_t x464 = 4111247233LLU;
	uint64_t t101 = 1LLU;

    t101 = (x461&(x462&(x463+x464)));

    if (t101 != 4111269888LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x465 = -1;
	volatile int64_t x466 = -1LL;
	int64_t x467 = INT64_MIN;
	uint16_t x468 = 88U;

    t102 = (x465&(x466&(x467+x468)));

    if (t102 != -9223372036854775720LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x469 = -1;
	uint8_t x470 = 1U;
	uint64_t x471 = 30003425966279LLU;
	volatile int8_t x472 = INT8_MAX;
	static uint64_t t103 = 1922726710LLU;

    t103 = (x469&(x470&(x471+x472)));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x473 = UINT32_MAX;
	int16_t x474 = INT16_MAX;
	uint8_t x475 = UINT8_MAX;
	int32_t x476 = INT32_MIN;
	static volatile uint32_t t104 = 5629021U;

    t104 = (x473&(x474&(x475+x476)));

    if (t104 != 255U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x478 = UINT8_MAX;
	volatile int64_t x479 = 17LL;
	int32_t x480 = INT32_MIN;
	volatile int64_t t105 = 12LL;

    t105 = (x477&(x478&(x479+x480)));

    if (t105 != 17LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x481 = 183515280;
	volatile int64_t x483 = -1LL;
	uint8_t x484 = 6U;
	int64_t t106 = 780929663LL;

    t106 = (x481&(x482&(x483+x484)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x485 = -1;
	static int32_t x487 = INT32_MIN;
	volatile int64_t x488 = -1LL;

    t107 = (x485&(x486&(x487+x488)));

    if (t107 != 6LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x493 = -4513301140LL;
	uint8_t x495 = UINT8_MAX;
	static uint8_t x496 = 2U;
	int64_t t108 = 3934877307261LL;

    t108 = (x493&(x494&(x495+x496)));

    if (t108 != 256LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x501 = INT16_MAX;
	int16_t x502 = INT16_MIN;
	int64_t x503 = INT64_MIN;
	int16_t x504 = INT16_MAX;
	int64_t t109 = -96349481079LL;

    t109 = (x501&(x502&(x503+x504)));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x505 = -1LL;
	static uint64_t x506 = 939599LLU;
	uint16_t x507 = 13U;
	int32_t x508 = 5838;

    t110 = (x505&(x506&(x507+x508)));

    if (t110 != 5707LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x509 = INT64_MIN;
	int64_t x510 = 4265LL;
	static uint32_t x511 = 12104U;
	int8_t x512 = INT8_MAX;
	int64_t t111 = 98144LL;

    t111 = (x509&(x510&(x511+x512)));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x513 = -1;
	static int16_t x514 = 1;
	volatile uint64_t x515 = UINT64_MAX;
	int64_t x516 = INT64_MIN;
	uint64_t t112 = 2610746746687LLU;

    t112 = (x513&(x514&(x515+x516)));

    if (t112 != 1LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x518 = 112114572985941LLU;
	volatile int8_t x519 = INT8_MIN;

    t113 = (x517&(x518&(x519+x520)));

    if (t113 != 1536LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x526 = 59LLU;
	int16_t x527 = -1;
	int8_t x528 = -1;

    t114 = (x525&(x526&(x527+x528)));

    if (t114 != 58LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x529 = UINT8_MAX;
	uint16_t x530 = 13056U;
	static volatile int16_t x531 = -3;
	int16_t x532 = INT16_MIN;

    t115 = (x529&(x530&(x531+x532)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x533 = 198830193U;
	int32_t x535 = INT32_MIN;
	volatile uint32_t x536 = 21U;
	volatile uint32_t t116 = 26417817U;

    t116 = (x533&(x534&(x535+x536)));

    if (t116 != 17U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x537 = 152306737LLU;
	int16_t x538 = -1;
	volatile int8_t x539 = INT8_MIN;
	int64_t x540 = -1LL;
	volatile uint64_t t117 = 4340839252218130LLU;

    t117 = (x537&(x538&(x539+x540)));

    if (t117 != 152306737LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x541 = -1;
	uint64_t x542 = 55850923685899989LLU;
	static uint8_t x543 = UINT8_MAX;
	uint32_t x544 = 115U;
	uint64_t t118 = 304010433LLU;

    t118 = (x541&(x542&(x543+x544)));

    if (t118 != 80LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x545 = INT32_MAX;
	int16_t x546 = INT16_MIN;
	int64_t x547 = INT64_MAX;
	int8_t x548 = 0;
	int64_t t119 = 1662606997181LL;

    t119 = (x545&(x546&(x547+x548)));

    if (t119 != 2147450880LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x549 = INT16_MIN;
	int32_t x552 = INT32_MIN;

    t120 = (x549&(x550&(x551+x552)));

    if (t120 != 2147450880LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x553 = -1;
	volatile int32_t x556 = -42391;
	volatile int32_t t121 = -29;

    t121 = (x553&(x554&(x555+x556)));

    if (t121 != -65536) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x557 = -1;
	uint32_t x558 = 3618741U;
	int32_t x559 = INT32_MIN;
	int64_t t122 = 195854364208805026LL;

    t122 = (x557&(x558&(x559+x560)));

    if (t122 != 3618741LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x561 = -1;
	int64_t x563 = INT64_MIN;

    t123 = (x561&(x562&(x563+x564)));

    if (t123 != 65535LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x565 = 305781688U;
	int32_t x566 = INT32_MIN;
	static uint8_t x567 = 10U;
	volatile uint32_t t124 = 7U;

    t124 = (x565&(x566&(x567+x568)));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x570 = -1;
	uint16_t x571 = UINT16_MAX;
	static volatile uint8_t x572 = 12U;
	int32_t t125 = -187;

    t125 = (x569&(x570&(x571+x572)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x573 = INT16_MAX;
	uint16_t x574 = 1224U;
	int8_t x575 = INT8_MAX;
	static int32_t x576 = 13219;
	static int32_t t126 = -496769934;

    t126 = (x573&(x574&(x575+x576)));

    if (t126 != 1024) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x577 = INT16_MIN;
	int32_t x578 = INT32_MAX;
	volatile int64_t x579 = INT64_MAX;
	int64_t x580 = -1LL;

    t127 = (x577&(x578&(x579+x580)));

    if (t127 != 2147450880LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x581 = INT32_MAX;
	uint32_t x582 = UINT32_MAX;
	uint64_t x583 = 1270568113635LLU;
	uint32_t x584 = 1258341U;
	volatile uint64_t t128 = 142LLU;

    t128 = (x581&(x582&(x583+x584)));

    if (t128 != 1406536008LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x585 = 7951U;
	int16_t x586 = INT16_MAX;
	static uint8_t x588 = 1U;
	volatile int32_t t129 = 161579033;

    t129 = (x585&(x586&(x587+x588)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x589 = 0U;
	int16_t x592 = INT16_MIN;
	static volatile int64_t t130 = -25683282804797254LL;

    t130 = (x589&(x590&(x591+x592)));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x593 = -1LL;
	static volatile int16_t x595 = -1;
	int8_t x596 = INT8_MIN;
	volatile int64_t t131 = -119831LL;

    t131 = (x593&(x594&(x595+x596)));

    if (t131 != -3995LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x598 = INT8_MIN;
	int64_t x599 = 351499370105801418LL;
	uint64_t x600 = 584950930747LLU;
	volatile uint64_t t132 = 909961418730LLU;

    t132 = (x597&(x598&(x599+x600)));

    if (t132 != 351499953853431808LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x601 = INT32_MAX;
	uint32_t x602 = 15U;
	int64_t x604 = INT64_MIN;
	volatile uint64_t t133 = 583519487992LLU;

    t133 = (x601&(x602&(x603+x604)));

    if (t133 != 8LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint64_t x606 = 9387LLU;
	int8_t x607 = 8;
	volatile int32_t x608 = 550112571;

    t134 = (x605&(x606&(x607+x608)));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x609 = 232U;
	static uint32_t x610 = UINT32_MAX;
	uint64_t x611 = 24894736906LLU;
	uint32_t x612 = UINT32_MAX;
	uint64_t t135 = 23LLU;

    t135 = (x609&(x610&(x611+x612)));

    if (t135 != 8LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x613 = INT8_MAX;
	int8_t x614 = INT8_MIN;
	uint8_t x616 = 103U;

    t136 = (x613&(x614&(x615+x616)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x617 = 1U;
	int16_t x618 = INT16_MIN;
	volatile int8_t x619 = INT8_MAX;
	uint64_t t137 = 1254224851LLU;

    t137 = (x617&(x618&(x619+x620)));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x621 = INT8_MAX;
	volatile int32_t x622 = INT32_MIN;
	uint32_t x623 = 24828924U;
	int32_t x624 = INT32_MIN;
	volatile uint32_t t138 = 5U;

    t138 = (x621&(x622&(x623+x624)));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x626 = 27;
	volatile uint32_t x627 = UINT32_MAX;
	static int8_t x628 = INT8_MAX;
	uint32_t t139 = 8953937U;

    t139 = (x625&(x626&(x627+x628)));

    if (t139 != 26U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x629 = 14U;
	static volatile int32_t x630 = -1;
	volatile int8_t x632 = 1;
	volatile int32_t t140 = 149996;

    t140 = (x629&(x630&(x631+x632)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x633 = INT32_MIN;
	static int8_t x634 = 2;
	static int32_t x635 = INT32_MAX;
	int8_t x636 = 0;

    t141 = (x633&(x634&(x635+x636)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x638 = UINT64_MAX;

    t142 = (x637&(x638&(x639+x640)));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x645 = UINT32_MAX;
	volatile int64_t x646 = INT64_MAX;
	uint8_t x647 = 0U;
	volatile int64_t t143 = -1LL;

    t143 = (x645&(x646&(x647+x648)));

    if (t143 != 108LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x649 = INT32_MIN;
	static volatile int8_t x650 = INT8_MIN;
	uint8_t x651 = 10U;
	int32_t x652 = INT32_MIN;
	static int32_t t144 = INT32_MIN;

    t144 = (x649&(x650&(x651+x652)));

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x653 = -1;
	uint16_t x655 = UINT16_MAX;
	static int32_t x656 = INT32_MIN;

    t145 = (x653&(x654&(x655+x656)));

    if (t145 != INT32_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x657 = UINT16_MAX;
	int8_t x658 = INT8_MIN;
	int8_t x659 = 0;
	static int64_t x660 = INT64_MIN;
	volatile int64_t t146 = 2444955LL;

    t146 = (x657&(x658&(x659+x660)));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x661 = INT8_MIN;
	static uint64_t x662 = 5745LLU;
	static volatile int64_t x664 = -18770757910328043LL;
	volatile uint64_t t147 = 943155674067816LLU;

    t147 = (x661&(x662&(x663+x664)));

    if (t147 != 512LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x668 = UINT32_MAX;
	volatile uint64_t t148 = 45992778573LLU;

    t148 = (x665&(x666&(x667+x668)));

    if (t148 != 2984559703LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x669 = INT32_MAX;
	int8_t x670 = INT8_MIN;
	int8_t x672 = -1;
	volatile uint32_t t149 = 12U;

    t149 = (x669&(x670&(x671+x672)));

    if (t149 != 63616U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x677 = INT64_MIN;
	int16_t x678 = INT16_MAX;
	static int16_t x679 = 5;
	uint64_t x680 = UINT64_MAX;
	uint64_t t150 = 33LLU;

    t150 = (x677&(x678&(x679+x680)));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x681 = 62U;
	static int16_t x682 = -1;
	static volatile uint8_t x683 = UINT8_MAX;
	uint8_t x684 = 7U;
	volatile uint32_t t151 = 4225U;

    t151 = (x681&(x682&(x683+x684)));

    if (t151 != 6U) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x689 = -1;
	int32_t x690 = INT32_MIN;
	uint64_t x691 = 128426636LLU;
	int64_t x692 = 17502922083252430LL;
	volatile uint64_t t152 = 230441730001461704LLU;

    t152 = (x689&(x690&(x691+x692)));

    if (t152 != 17502921591619584LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x693 = INT64_MIN;
	uint8_t x694 = UINT8_MAX;
	static int64_t x696 = -1LL;
	int64_t t153 = -4234893209210093LL;

    t153 = (x693&(x694&(x695+x696)));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x698 = 2U;
	static uint32_t x700 = 2649758U;

    t154 = (x697&(x698&(x699+x700)));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x701 = 2U;
	uint32_t x702 = 18U;
	int8_t x703 = -1;
	int16_t x704 = INT16_MAX;
	volatile uint32_t t155 = 41308399U;

    t155 = (x701&(x702&(x703+x704)));

    if (t155 != 2U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x705 = UINT32_MAX;
	volatile int8_t x706 = INT8_MIN;
	static volatile int8_t x707 = -47;
	static uint32_t t156 = 1U;

    t156 = (x705&(x706&(x707+x708)));

    if (t156 != 4294934400U) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x709 = INT16_MIN;
	uint32_t x710 = 50U;
	static uint32_t x711 = UINT32_MAX;
	volatile int8_t x712 = -4;
	uint32_t t157 = 15248373U;

    t157 = (x709&(x710&(x711+x712)));

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x713 = INT16_MIN;
	volatile int32_t x715 = 5004856;
	static uint16_t x716 = 90U;

    t158 = (x713&(x714&(x715+x716)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x717 = 0LLU;
	uint32_t x718 = 2U;
	uint16_t x719 = UINT16_MAX;
	int64_t x720 = INT64_MIN;
	static uint64_t t159 = 629638288911145086LLU;

    t159 = (x717&(x718&(x719+x720)));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x721 = 0;
	volatile int16_t x722 = 30;
	static uint8_t x723 = 5U;
	static int64_t x724 = -161847156099LL;
	int64_t t160 = -39932743LL;

    t160 = (x721&(x722&(x723+x724)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x725 = INT8_MIN;
	uint64_t x726 = UINT64_MAX;
	int8_t x727 = INT8_MIN;
	int16_t x728 = INT16_MAX;
	volatile uint64_t t161 = 4027LLU;

    t161 = (x725&(x726&(x727+x728)));

    if (t161 != 32512LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x729 = 26154U;
	uint16_t x730 = 12U;
	static int8_t x731 = INT8_MAX;
	int64_t x732 = 1607005436951LL;
	int64_t t162 = -1454075528281507965LL;

    t162 = (x729&(x730&(x731+x732)));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x733 = -36;
	int8_t x734 = INT8_MIN;
	int32_t x735 = INT32_MIN;
	uint16_t x736 = 12946U;
	int32_t t163 = -7989138;

    t163 = (x733&(x734&(x735+x736)));

    if (t163 != -2147470720) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x741 = 2025944058LLU;
	int32_t x742 = INT32_MIN;
	int32_t x744 = 3;
	volatile uint64_t t164 = 1147981655725856972LLU;

    t164 = (x741&(x742&(x743+x744)));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x746 = 18;

    t165 = (x745&(x746&(x747+x748)));

    if (t165 != 18LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x749 = INT16_MAX;
	int16_t x750 = 20;
	static volatile uint64_t x751 = 165329LLU;
	int8_t x752 = -1;
	uint64_t t166 = 259371497762LLU;

    t166 = (x749&(x750&(x751+x752)));

    if (t166 != 16LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x753 = UINT8_MAX;
	volatile int32_t x754 = -1;
	int16_t x755 = -1;
	static int32_t x756 = 11307;
	volatile int32_t t167 = 3816343;

    t167 = (x753&(x754&(x755+x756)));

    if (t167 != 42) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x757 = INT16_MAX;
	int64_t x758 = INT64_MIN;
	int8_t x759 = INT8_MIN;
	static uint32_t x760 = UINT32_MAX;
	int64_t t168 = -128352798538723LL;

    t168 = (x757&(x758&(x759+x760)));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x766 = 811;
	int16_t x768 = -3314;

    t169 = (x765&(x766&(x767+x768)));

    if (t169 != 776LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x769 = -831651194;
	int32_t x770 = INT32_MIN;
	int64_t x771 = -1LL;
	volatile int64_t t170 = -1317093LL;

    t170 = (x769&(x770&(x771+x772)));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x773 = INT32_MAX;
	int16_t x774 = INT16_MIN;
	static int64_t x775 = -1LL;
	static uint8_t x776 = 2U;
	int64_t t171 = 4102943760630397LL;

    t171 = (x773&(x774&(x775+x776)));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x777 = 1LL;
	uint64_t x778 = 15279604564325651LLU;
	uint16_t x779 = UINT16_MAX;
	int16_t x780 = INT16_MIN;
	volatile uint64_t t172 = 196116679063LLU;

    t172 = (x777&(x778&(x779+x780)));

    if (t172 != 1LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint8_t x781 = 18U;
	uint64_t x783 = UINT64_MAX;
	static int8_t x784 = INT8_MIN;
	volatile uint64_t t173 = 250400LLU;

    t173 = (x781&(x782&(x783+x784)));

    if (t173 != 18LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x785 = INT32_MAX;
	int16_t x786 = INT16_MAX;
	int32_t x787 = -868037998;
	uint8_t x788 = UINT8_MAX;
	int32_t t174 = -80295885;

    t174 = (x785&(x786&(x787+x788)));

    if (t174 != 19345) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x789 = 1U;
	volatile int8_t x790 = -1;
	int32_t t175 = -13;

    t175 = (x789&(x790&(x791+x792)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x797 = 30913618U;
	int16_t x798 = -1;
	uint32_t x799 = UINT32_MAX;
	int64_t x800 = -1LL;
	volatile int64_t t176 = 0LL;

    t176 = (x797&(x798&(x799+x800)));

    if (t176 != 30913618LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x801 = UINT16_MAX;
	int8_t x802 = INT8_MIN;
	static int16_t x803 = INT16_MIN;
	uint32_t x804 = 27U;
	uint32_t t177 = 4967400U;

    t177 = (x801&(x802&(x803+x804)));

    if (t177 != 32768U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x805 = UINT64_MAX;
	static int16_t x807 = -1;

    t178 = (x805&(x806&(x807+x808)));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x809 = -466784;
	static uint16_t x811 = 59U;
	volatile uint64_t x812 = 601806542471LLU;
	uint64_t t179 = 5304710589952989LLU;

    t179 = (x809&(x810&(x811+x812)));

    if (t179 != 601806078080LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x817 = 32419U;
	static int8_t x818 = -1;
	static volatile uint64_t x819 = 113676042665LLU;
	uint8_t x820 = UINT8_MAX;
	volatile uint64_t t180 = 4550747934709113LLU;

    t180 = (x817&(x818&(x819+x820)));

    if (t180 != 17056LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x821 = INT32_MAX;
	int16_t x822 = 1638;
	int16_t x823 = INT16_MIN;
	static uint16_t x824 = 2798U;
	volatile int32_t t181 = 6651831;

    t181 = (x821&(x822&(x823+x824)));

    if (t181 != 614) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x826 = INT8_MIN;
	uint8_t x827 = 0U;
	int32_t x828 = INT32_MAX;
	static int32_t t182 = 0;

    t182 = (x825&(x826&(x827+x828)));

    if (t182 != 128) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x829 = -1;
	int64_t x830 = -1LL;
	volatile int16_t x831 = -1584;

    t183 = (x829&(x830&(x831+x832)));

    if (t183 != -2811LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x833 = 316151447U;
	int32_t x835 = INT32_MIN;
	volatile uint64_t x836 = 26818285LLU;

    t184 = (x833&(x834&(x835+x836)));

    if (t184 != 5LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x837 = INT32_MIN;
	static uint64_t x838 = 54542214230711LLU;
	static int16_t x839 = INT16_MIN;
	int8_t x840 = 28;
	volatile uint64_t t185 = 1907713534LLU;

    t185 = (x837&(x838&(x839+x840)));

    if (t185 != 54541789691904LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x841 = INT64_MAX;
	int32_t x842 = 913819475;
	int16_t x843 = -3;
	int64_t x844 = 177186021LL;
	int64_t t186 = -112LL;

    t186 = (x841&(x842&(x843+x844)));

    if (t186 != 34047042LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x845 = 51555151U;
	volatile uint16_t x846 = UINT16_MAX;
	int32_t x847 = INT32_MIN;
	static uint64_t x848 = 5141LLU;
	volatile uint64_t t187 = 31978599LLU;

    t187 = (x845&(x846&(x847+x848)));

    if (t187 != 5LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x853 = INT8_MIN;
	uint64_t x854 = UINT64_MAX;
	volatile int16_t x855 = INT16_MIN;
	volatile int32_t x856 = -36;
	uint64_t t188 = 8372062978LLU;

    t188 = (x853&(x854&(x855+x856)));

    if (t188 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x857 = UINT32_MAX;
	int8_t x858 = INT8_MIN;
	int16_t x860 = INT16_MIN;
	volatile uint32_t t189 = 0U;

    t189 = (x857&(x858&(x859+x860)));

    if (t189 != 4294934528U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x861 = UINT64_MAX;
	int16_t x863 = INT16_MIN;
	uint32_t x864 = 2U;

    t190 = (x861&(x862&(x863+x864)));

    if (t190 != 4294934530LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x865 = INT16_MIN;
	int32_t x866 = INT32_MIN;
	volatile int32_t x867 = INT32_MAX;
	int16_t x868 = INT16_MIN;
	volatile int32_t t191 = -40725150;

    t191 = (x865&(x866&(x867+x868)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x870 = 196328U;
	int8_t x871 = INT8_MIN;
	int8_t x872 = INT8_MIN;

    t192 = (x869&(x870&(x871+x872)));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint8_t x874 = 23U;
	volatile int64_t x876 = INT64_MIN;

    t193 = (x873&(x874&(x875+x876)));

    if (t193 != 2LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x878 = INT64_MAX;
	int64_t x880 = -1LL;

    t194 = (x877&(x878&(x879+x880)));

    if (t194 != 3376LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x885 = -1;
	static int64_t x886 = 921827517381207148LL;
	uint8_t x887 = 0U;
	int8_t x888 = 3;
	static int64_t t195 = -122551030629757LL;

    t195 = (x885&(x886&(x887+x888)));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x889 = 1;
	int8_t x891 = INT8_MAX;
	int8_t x892 = INT8_MIN;
	int32_t t196 = 314513158;

    t196 = (x889&(x890&(x891+x892)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x893 = INT16_MIN;
	int16_t x894 = 267;
	volatile int64_t x895 = INT64_MIN;
	uint8_t x896 = 0U;

    t197 = (x893&(x894&(x895+x896)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x897 = INT16_MIN;
	static int8_t x898 = 0;
	volatile int64_t x899 = -88222LL;
	static int32_t x900 = INT32_MIN;
	int64_t t198 = 128088925833LL;

    t198 = (x897&(x898&(x899+x900)));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x901 = -1LL;
	int32_t x903 = INT32_MIN;
	uint8_t x904 = 102U;
	int64_t t199 = -1246138LL;

    t199 = (x901&(x902&(x903+x904)));

    if (t199 != -2147483546LL) { NG(); } else { ; }
	
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

