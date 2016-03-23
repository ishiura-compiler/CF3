
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

static int64_t x8 = 487LL;
uint16_t x9 = UINT16_MAX;
int32_t t1 = 2343039;
int16_t x15 = -1;
static uint16_t x21 = 150U;
volatile int8_t x22 = INT8_MIN;
volatile int8_t x35 = INT8_MIN;
int32_t x49 = INT32_MIN;
volatile int64_t t10 = -6LL;
int16_t x65 = INT16_MIN;
int32_t x67 = INT32_MIN;
uint8_t x72 = UINT8_MAX;
int16_t x76 = INT16_MIN;
int16_t x83 = INT16_MIN;
volatile uint32_t t14 = UINT32_MAX;
volatile int16_t x85 = -163;
volatile uint16_t x95 = UINT16_MAX;
int8_t x96 = INT8_MIN;
int32_t x98 = -3680;
static int32_t x104 = 58050290;
int16_t x107 = INT16_MAX;
static uint8_t x108 = UINT8_MAX;
uint64_t x111 = 6911391076LLU;
int64_t x112 = 794343587LL;
int16_t x121 = -1;
int32_t x123 = INT32_MIN;
int16_t x127 = INT16_MAX;
static int32_t t25 = -446;
int16_t x144 = -16140;
int16_t x149 = INT16_MIN;
volatile int8_t x150 = INT8_MIN;
static volatile int32_t t27 = -1;
int8_t x153 = INT8_MIN;
volatile uint16_t x156 = 2U;
volatile int64_t x162 = INT64_MAX;
int64_t x167 = -1LL;
int64_t t30 = 1LL;
int16_t x170 = -1;
static int32_t x178 = -162;
int32_t x182 = -1;
uint8_t x188 = UINT8_MAX;
uint16_t x203 = 4U;
int8_t x204 = INT8_MIN;
volatile uint64_t x205 = 0LLU;
volatile int8_t x219 = INT8_MIN;
volatile int8_t x227 = -5;
int32_t t44 = -496756;
static uint16_t x238 = 2458U;
int32_t t45 = 6415793;
static int16_t x243 = INT16_MIN;
int16_t x246 = 55;
static volatile uint32_t x248 = 3U;
int32_t t48 = 7878;
volatile int8_t x254 = INT8_MIN;
int64_t t49 = -524286485077258840LL;
static uint64_t x267 = 2074LLU;
volatile uint64_t x273 = 5353212530LLU;
int32_t x278 = -1;
volatile int16_t x286 = 213;
uint32_t t55 = 9U;
int32_t x289 = 0;
uint8_t x293 = 33U;
int16_t x299 = INT16_MIN;
uint32_t x319 = 203862606U;
int16_t x320 = INT16_MIN;
uint32_t x323 = 12U;
static int32_t x328 = 914889;
volatile int64_t t65 = -1457431749305LL;
int64_t x333 = INT64_MAX;
int32_t x342 = -16821142;
uint64_t x343 = 86LLU;
uint16_t x350 = 140U;
volatile int64_t t68 = 9LL;
volatile int64_t x356 = INT64_MIN;
static int64_t t70 = 3827391755301770697LL;
volatile uint16_t x361 = UINT16_MAX;
int16_t x370 = -1;
int32_t x374 = INT32_MIN;
volatile int32_t t73 = INT32_MIN;
uint8_t x379 = 13U;
volatile int16_t x381 = -1;
static volatile uint8_t x382 = 16U;
uint16_t x383 = UINT16_MAX;
int64_t x388 = 40LL;
static int16_t x403 = INT16_MAX;
int32_t x405 = -1;
static int16_t x417 = -2909;
uint32_t x418 = 5241306U;
volatile int16_t x419 = 0;
volatile uint16_t x420 = 0U;
int64_t t83 = INT64_MAX;
static uint64_t x426 = 15924069611450LLU;
static uint8_t x429 = UINT8_MAX;
static uint16_t x432 = 38U;
uint64_t x433 = UINT64_MAX;
static uint64_t t86 = UINT64_MAX;
int8_t x443 = -28;
int64_t x445 = INT64_MIN;
int16_t x447 = -6356;
volatile uint64_t t89 = 8054275396307281262LLU;
uint8_t x454 = UINT8_MAX;
uint8_t x464 = UINT8_MAX;
int8_t x470 = -12;
static int32_t x471 = 27296;
volatile int32_t x473 = 492;
volatile int32_t t95 = -6165533;
volatile int8_t x479 = INT8_MAX;
int16_t x480 = INT16_MIN;
volatile uint32_t t96 = 9U;
volatile int32_t t97 = 13712743;
uint8_t x488 = 1U;
static int16_t x495 = -1;
int16_t x512 = 661;
uint8_t x517 = 3U;
uint8_t x520 = UINT8_MAX;
volatile int8_t x523 = -6;
volatile int32_t t105 = -4764;
volatile uint64_t x528 = UINT64_MAX;
volatile uint32_t t106 = UINT32_MAX;
int64_t x540 = 7653LL;
static int32_t t107 = 7059;
static int8_t x551 = INT8_MIN;
volatile int64_t x552 = -1691LL;
int64_t x553 = INT64_MIN;
uint16_t x564 = 6198U;
volatile int16_t x569 = -1;
volatile int64_t t113 = INT64_MAX;
static int64_t x581 = -1LL;
uint32_t x583 = 1999657916U;
static int16_t x584 = INT16_MAX;
int64_t t114 = -3769510241LL;
int64_t x588 = -1LL;
static int32_t t117 = 713080;
int32_t t118 = -11;
int64_t t122 = 67941LL;
uint8_t x617 = UINT8_MAX;
static volatile int32_t t123 = -43582;
int8_t x630 = INT8_MIN;
int64_t x631 = 511LL;
static volatile int32_t t126 = -9807041;
volatile int32_t t127 = 682000093;
volatile uint64_t x646 = 2162206446215710LLU;
static uint16_t x650 = 20U;
int16_t x653 = INT16_MIN;
volatile int8_t x659 = INT8_MIN;
int8_t x694 = -1;
volatile int16_t x699 = 31;
int32_t t139 = 126202;
volatile int16_t x713 = INT16_MIN;
static int16_t x720 = INT16_MIN;
static int8_t x722 = INT8_MIN;
volatile int16_t x723 = -1;
volatile int8_t x724 = 10;
int32_t x729 = INT32_MIN;
uint16_t x732 = 2U;
volatile uint64_t x736 = 795472052LLU;
int32_t x757 = INT32_MIN;
int64_t x759 = -1LL;
volatile int32_t t147 = INT32_MIN;
static int16_t x762 = -1;
static uint32_t x773 = 3498984U;
uint8_t x774 = UINT8_MAX;
static uint8_t x778 = 1U;
static int16_t x780 = INT16_MIN;
int32_t t152 = -4;
int16_t x787 = -1;
int64_t x801 = -64627LL;
volatile int8_t x805 = INT8_MAX;
volatile int32_t t159 = -77557;
int16_t x813 = INT16_MIN;
static int32_t x816 = INT32_MAX;
int64_t x821 = INT64_MIN;
int64_t t162 = -29870679349865LL;
int32_t x826 = INT32_MIN;
int16_t x835 = 1485;
uint32_t x860 = 120546U;
volatile uint8_t x861 = UINT8_MAX;
int64_t x862 = -15LL;
uint32_t x863 = 319430U;
uint8_t x865 = UINT8_MAX;
static uint64_t x866 = 296639128103LLU;
uint32_t x867 = UINT32_MAX;
int32_t x873 = INT32_MAX;
volatile int32_t x883 = INT32_MAX;
volatile uint16_t x888 = UINT16_MAX;
volatile uint8_t x892 = 2U;
static volatile uint32_t t175 = 8116U;
static volatile int16_t x894 = -19;
int8_t x900 = INT8_MAX;
int64_t x904 = 47273760867610LL;
volatile int32_t t179 = 1857;
int8_t x914 = -23;
int16_t x920 = INT16_MIN;
uint64_t x932 = UINT64_MAX;
int16_t x938 = 177;
static volatile int32_t x955 = 0;
int16_t x958 = -7850;
int32_t x963 = -3;
int8_t x970 = INT8_MAX;
uint16_t x972 = UINT16_MAX;
static int8_t x990 = INT8_MAX;
static int16_t x991 = -1;
int8_t x992 = INT8_MAX;
volatile int32_t t193 = -754527;
volatile int32_t t195 = -118;
static int16_t x1011 = INT16_MIN;
int16_t x1012 = 0;
static int32_t x1034 = INT32_MIN;
int32_t t198 = INT32_MIN;
int16_t x1044 = 18;
int64_t t199 = 128109689334431798LL;


void f0(void) {
    	int8_t x5 = INT8_MIN;
	int32_t x6 = -7;
	uint64_t x7 = UINT64_MAX;
	static volatile int32_t t0 = -75106;

    t0 = (x5|(x6<=(x7*x8)));

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MIN;
	uint32_t x12 = 34046006U;

    t1 = (x9|(x10<=(x11*x12)));

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = 636;
	int32_t x14 = -1194;
	static uint64_t x16 = 134993LLU;
	int32_t t2 = 51289;

    t2 = (x13|(x14<=(x15*x16)));

    if (t2 != 636) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = UINT64_MAX;
	static uint8_t x18 = UINT8_MAX;
	int16_t x19 = -1;
	uint32_t x20 = 14604U;
	uint64_t t3 = UINT64_MAX;

    t3 = (x17|(x18<=(x19*x20)));

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x23 = 27U;
	uint64_t x24 = 1144315LLU;
	int32_t t4 = 9713;

    t4 = (x21|(x22<=(x23*x24)));

    if (t4 != 150) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x29 = -1;
	int32_t x30 = INT32_MIN;
	int16_t x31 = -1;
	uint8_t x32 = UINT8_MAX;
	int32_t t5 = 1994228;

    t5 = (x29|(x30<=(x31*x32)));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x33 = UINT64_MAX;
	static volatile int8_t x34 = -18;
	int64_t x36 = -1LL;
	static volatile uint64_t t6 = UINT64_MAX;

    t6 = (x33|(x34<=(x35*x36)));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x41 = 14883;
	static volatile uint8_t x42 = 0U;
	int8_t x43 = INT8_MIN;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t7 = -1;

    t7 = (x41|(x42<=(x43*x44)));

    if (t7 != 14883) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x50 = INT16_MAX;
	volatile int16_t x51 = INT16_MIN;
	int16_t x52 = INT16_MAX;
	static volatile int32_t t8 = INT32_MIN;

    t8 = (x49|(x50<=(x51*x52)));

    if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x53 = INT8_MAX;
	int16_t x54 = INT16_MAX;
	uint8_t x55 = 1U;
	int64_t x56 = INT64_MIN;
	int32_t t9 = 8;

    t9 = (x53|(x54<=(x55*x56)));

    if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x61 = 120719LL;
	int16_t x62 = 449;
	int16_t x63 = -1696;
	uint32_t x64 = UINT32_MAX;

    t10 = (x61|(x62<=(x63*x64)));

    if (t10 != 120719LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x66 = 777LLU;
	static uint32_t x68 = 461157U;
	int32_t t11 = 125382;

    t11 = (x65|(x66<=(x67*x68)));

    if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x69 = -55923202;
	int32_t x70 = -2;
	volatile int64_t x71 = -24408819LL;
	int32_t t12 = 3060;

    t12 = (x69|(x70<=(x71*x72)));

    if (t12 != -55923202) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x73 = -1;
	volatile int16_t x74 = -31;
	volatile int16_t x75 = INT16_MIN;
	volatile int32_t t13 = -164572;

    t13 = (x73|(x74<=(x75*x76)));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x81 = UINT32_MAX;
	int64_t x82 = -28313957LL;
	int16_t x84 = INT16_MIN;

    t14 = (x81|(x82<=(x83*x84)));

    if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x86 = 105135774U;
	static int16_t x87 = INT16_MAX;
	int8_t x88 = 1;
	int32_t t15 = -50105;

    t15 = (x85|(x86<=(x87*x88)));

    if (t15 != -163) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x89 = INT64_MIN;
	uint16_t x90 = 6U;
	volatile int8_t x91 = INT8_MAX;
	int16_t x92 = 1;
	int64_t t16 = -53960909122LL;

    t16 = (x89|(x90<=(x91*x92)));

    if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x93 = 366U;
	uint8_t x94 = 8U;
	volatile int32_t t17 = 18;

    t17 = (x93|(x94<=(x95*x96)));

    if (t17 != 366) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x97 = UINT32_MAX;
	volatile int64_t x99 = INT64_MAX;
	volatile int16_t x100 = -1;
	uint32_t t18 = UINT32_MAX;

    t18 = (x97|(x98<=(x99*x100)));

    if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x101 = INT32_MAX;
	int64_t x102 = -1LL;
	static uint32_t x103 = UINT32_MAX;
	volatile int32_t t19 = INT32_MAX;

    t19 = (x101|(x102<=(x103*x104)));

    if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x105 = INT16_MIN;
	static int64_t x106 = INT64_MAX;
	int32_t t20 = 2;

    t20 = (x105|(x106<=(x107*x108)));

    if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x109 = 10;
	static int32_t x110 = INT32_MIN;
	volatile int32_t t21 = 9484409;

    t21 = (x109|(x110<=(x111*x112)));

    if (t21 != 10) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x113 = INT16_MIN;
	int8_t x114 = INT8_MIN;
	int16_t x115 = 3070;
	volatile int16_t x116 = -3;
	int32_t t22 = 50;

    t22 = (x113|(x114<=(x115*x116)));

    if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x122 = INT16_MAX;
	uint8_t x124 = 0U;
	volatile int32_t t23 = 37878;

    t23 = (x121|(x122<=(x123*x124)));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x125 = 647U;
	static int32_t x126 = INT32_MAX;
	int16_t x128 = INT16_MAX;
	static int32_t t24 = -2052343;

    t24 = (x125|(x126<=(x127*x128)));

    if (t24 != 647) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x129 = INT32_MIN;
	uint32_t x130 = UINT32_MAX;
	int8_t x131 = -42;
	int64_t x132 = -138080422119LL;

    t25 = (x129|(x130<=(x131*x132)));

    if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x141 = -1;
	static int64_t x142 = INT64_MIN;
	static volatile int8_t x143 = INT8_MIN;
	int32_t t26 = -667713610;

    t26 = (x141|(x142<=(x143*x144)));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x151 = 26832409985LLU;
	int8_t x152 = 10;

    t27 = (x149|(x150<=(x151*x152)));

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x154 = 25U;
	static volatile int64_t x155 = 82637478250787LL;
	int32_t t28 = 40200887;

    t28 = (x153|(x154<=(x155*x156)));

    if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x161 = INT8_MAX;
	uint64_t x163 = 21461953305LLU;
	uint16_t x164 = 4869U;
	static volatile int32_t t29 = -83868491;

    t29 = (x161|(x162<=(x163*x164)));

    if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x165 = 97087317935LL;
	int8_t x166 = 1;
	int16_t x168 = INT16_MIN;

    t30 = (x165|(x166<=(x167*x168)));

    if (t30 != 97087317935LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x169 = 279U;
	uint16_t x171 = 1U;
	int64_t x172 = -81398268681313180LL;
	volatile int32_t t31 = -102575716;

    t31 = (x169|(x170<=(x171*x172)));

    if (t31 != 279) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x173 = INT64_MAX;
	uint32_t x174 = 1U;
	int64_t x175 = INT64_MAX;
	static int64_t x176 = -1LL;
	volatile int64_t t32 = INT64_MAX;

    t32 = (x173|(x174<=(x175*x176)));

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x177 = INT16_MAX;
	uint8_t x179 = UINT8_MAX;
	static uint8_t x180 = UINT8_MAX;
	int32_t t33 = -154595036;

    t33 = (x177|(x178<=(x179*x180)));

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x181 = INT64_MIN;
	int8_t x183 = INT8_MIN;
	static uint16_t x184 = UINT16_MAX;
	static volatile int64_t t34 = INT64_MIN;

    t34 = (x181|(x182<=(x183*x184)));

    if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x185 = INT64_MIN;
	volatile uint16_t x186 = 3162U;
	int16_t x187 = INT16_MIN;
	int64_t t35 = INT64_MIN;

    t35 = (x185|(x186<=(x187*x188)));

    if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x201 = -1;
	static volatile int64_t x202 = INT64_MAX;
	volatile int32_t t36 = 199787064;

    t36 = (x201|(x202<=(x203*x204)));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x206 = 1U;
	volatile uint64_t x207 = 1LLU;
	static volatile int32_t x208 = 79;
	volatile uint64_t t37 = 27242511228866LLU;

    t37 = (x205|(x206<=(x207*x208)));

    if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x209 = -1;
	uint64_t x210 = 0LLU;
	volatile int8_t x211 = INT8_MIN;
	int16_t x212 = -1;
	int32_t t38 = -700;

    t38 = (x209|(x210<=(x211*x212)));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x213 = -1;
	int16_t x214 = INT16_MAX;
	uint64_t x215 = 59172061337966998LLU;
	static int16_t x216 = INT16_MIN;
	int32_t t39 = 83;

    t39 = (x213|(x214<=(x215*x216)));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x217 = 12U;
	static int16_t x218 = 0;
	int16_t x220 = 43;
	uint32_t t40 = 56789U;

    t40 = (x217|(x218<=(x219*x220)));

    if (t40 != 12U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x221 = 2135893U;
	uint32_t x222 = 7889953U;
	volatile int16_t x223 = 19;
	volatile int64_t x224 = 16LL;
	volatile uint32_t t41 = 104509220U;

    t41 = (x221|(x222<=(x223*x224)));

    if (t41 != 2135893U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x225 = INT8_MIN;
	uint64_t x226 = UINT64_MAX;
	volatile int8_t x228 = -2;
	static int32_t t42 = -1;

    t42 = (x225|(x226<=(x227*x228)));

    if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x229 = INT64_MIN;
	static int32_t x230 = INT32_MIN;
	uint8_t x231 = UINT8_MAX;
	static uint32_t x232 = 221441310U;
	int64_t t43 = INT64_MIN;

    t43 = (x229|(x230<=(x231*x232)));

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x233 = UINT8_MAX;
	uint8_t x234 = 3U;
	uint64_t x235 = 316579884783LLU;
	uint32_t x236 = 2448820U;

    t44 = (x233|(x234<=(x235*x236)));

    if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x237 = INT16_MAX;
	int16_t x239 = -1;
	volatile int8_t x240 = 57;

    t45 = (x237|(x238<=(x239*x240)));

    if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x241 = INT16_MAX;
	static uint16_t x242 = UINT16_MAX;
	int16_t x244 = 5;
	volatile int32_t t46 = -124620618;

    t46 = (x241|(x242<=(x243*x244)));

    if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x245 = INT32_MIN;
	uint64_t x247 = UINT64_MAX;
	int32_t t47 = 14;

    t47 = (x245|(x246<=(x247*x248)));

    if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x249 = INT8_MIN;
	int16_t x250 = -3518;
	int8_t x251 = -1;
	int64_t x252 = INT64_MAX;

    t48 = (x249|(x250<=(x251*x252)));

    if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x253 = INT64_MIN;
	int8_t x255 = INT8_MAX;
	static int32_t x256 = 802;

    t49 = (x253|(x254<=(x255*x256)));

    if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x257 = INT8_MIN;
	int64_t x258 = INT64_MAX;
	int8_t x259 = INT8_MAX;
	int8_t x260 = INT8_MAX;
	int32_t t50 = -3389;

    t50 = (x257|(x258<=(x259*x260)));

    if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x265 = INT64_MAX;
	int32_t x266 = -1;
	volatile uint8_t x268 = 0U;
	int64_t t51 = INT64_MAX;

    t51 = (x265|(x266<=(x267*x268)));

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x269 = UINT8_MAX;
	int16_t x270 = -418;
	static int32_t x271 = -1;
	uint32_t x272 = 1411U;
	volatile int32_t t52 = -25;

    t52 = (x269|(x270<=(x271*x272)));

    if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x274 = INT32_MIN;
	uint32_t x275 = 7152795U;
	static uint64_t x276 = UINT64_MAX;
	uint64_t t53 = 931729375523232LLU;

    t53 = (x273|(x274<=(x275*x276)));

    if (t53 != 5353212531LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x277 = -1LL;
	int16_t x279 = -366;
	static int16_t x280 = 5;
	int64_t t54 = 109160736182808LL;

    t54 = (x277|(x278<=(x279*x280)));

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x285 = 817953U;
	uint16_t x287 = 24U;
	static volatile uint16_t x288 = 5943U;

    t55 = (x285|(x286<=(x287*x288)));

    if (t55 != 817953U) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x290 = 607U;
	volatile int16_t x291 = INT16_MIN;
	int8_t x292 = 1;
	volatile int32_t t56 = -20284;

    t56 = (x289|(x290<=(x291*x292)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x294 = 1;
	uint64_t x295 = 9281488338384LLU;
	int8_t x296 = INT8_MIN;
	int32_t t57 = -227;

    t57 = (x293|(x294<=(x295*x296)));

    if (t57 != 33) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x297 = INT32_MIN;
	uint32_t x298 = 1807372U;
	int64_t x300 = -1LL;
	static volatile int32_t t58 = INT32_MIN;

    t58 = (x297|(x298<=(x299*x300)));

    if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x301 = INT64_MIN;
	uint8_t x302 = 23U;
	volatile uint64_t x303 = 33111786LLU;
	int32_t x304 = INT32_MIN;
	volatile int64_t t59 = 0LL;

    t59 = (x301|(x302<=(x303*x304)));

    if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x305 = 23U;
	int16_t x306 = -2919;
	int8_t x307 = INT8_MIN;
	static uint32_t x308 = UINT32_MAX;
	static int32_t t60 = -140795;

    t60 = (x305|(x306<=(x307*x308)));

    if (t60 != 23) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x313 = 55U;
	static int64_t x314 = INT64_MIN;
	static uint32_t x315 = UINT32_MAX;
	static int32_t x316 = -1;
	static volatile uint32_t t61 = 1901U;

    t61 = (x313|(x314<=(x315*x316)));

    if (t61 != 55U) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x317 = 182352963LLU;
	int8_t x318 = INT8_MIN;
	static volatile uint64_t t62 = 1852997LLU;

    t62 = (x317|(x318<=(x319*x320)));

    if (t62 != 182352963LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x321 = 111;
	volatile int64_t x322 = -1LL;
	int32_t x324 = INT32_MIN;
	static volatile int32_t t63 = -397;

    t63 = (x321|(x322<=(x323*x324)));

    if (t63 != 111) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x325 = -1;
	uint8_t x326 = 1U;
	static int16_t x327 = -40;
	volatile int32_t t64 = 70182;

    t64 = (x325|(x326<=(x327*x328)));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x329 = -2811275LL;
	uint8_t x330 = UINT8_MAX;
	uint16_t x331 = UINT16_MAX;
	volatile uint8_t x332 = 17U;

    t65 = (x329|(x330<=(x331*x332)));

    if (t65 != -2811275LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x334 = -1;
	int64_t x335 = 4688411LL;
	uint8_t x336 = UINT8_MAX;
	int64_t t66 = INT64_MAX;

    t66 = (x333|(x334<=(x335*x336)));

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x341 = UINT8_MAX;
	int16_t x344 = INT16_MAX;
	volatile int32_t t67 = -81687947;

    t67 = (x341|(x342<=(x343*x344)));

    if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x349 = -4087142841LL;
	uint16_t x351 = 1084U;
	int64_t x352 = -1LL;

    t68 = (x349|(x350<=(x351*x352)));

    if (t68 != -4087142841LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x353 = INT16_MAX;
	static volatile int16_t x354 = INT16_MIN;
	static uint64_t x355 = 82243LLU;
	int32_t t69 = -1;

    t69 = (x353|(x354<=(x355*x356)));

    if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x357 = -2530705LL;
	volatile int64_t x358 = INT64_MAX;
	uint32_t x359 = UINT32_MAX;
	uint16_t x360 = 1U;

    t70 = (x357|(x358<=(x359*x360)));

    if (t70 != -2530705LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x362 = -1;
	volatile uint16_t x363 = UINT16_MAX;
	uint8_t x364 = 2U;
	static volatile int32_t t71 = 499;

    t71 = (x361|(x362<=(x363*x364)));

    if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x369 = UINT16_MAX;
	static int8_t x371 = -7;
	static volatile int8_t x372 = INT8_MAX;
	volatile int32_t t72 = -1071440652;

    t72 = (x369|(x370<=(x371*x372)));

    if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x373 = INT32_MIN;
	int8_t x375 = INT8_MAX;
	uint32_t x376 = 1758U;

    t73 = (x373|(x374<=(x375*x376)));

    if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x377 = INT64_MAX;
	int64_t x378 = INT64_MIN;
	int16_t x380 = INT16_MIN;
	int64_t t74 = INT64_MAX;

    t74 = (x377|(x378<=(x379*x380)));

    if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x384 = UINT32_MAX;
	volatile int32_t t75 = -49;

    t75 = (x381|(x382<=(x383*x384)));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x385 = 60;
	int16_t x386 = INT16_MIN;
	int8_t x387 = -1;
	static volatile int32_t t76 = -154;

    t76 = (x385|(x386<=(x387*x388)));

    if (t76 != 61) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x389 = 61037812LLU;
	int8_t x390 = INT8_MIN;
	int8_t x391 = INT8_MIN;
	static volatile uint16_t x392 = UINT16_MAX;
	volatile uint64_t t77 = 1315097843LLU;

    t77 = (x389|(x390<=(x391*x392)));

    if (t77 != 61037812LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x397 = 16923207783717LL;
	volatile uint32_t x398 = 1475718U;
	uint8_t x399 = 0U;
	int16_t x400 = INT16_MIN;
	volatile int64_t t78 = -921LL;

    t78 = (x397|(x398<=(x399*x400)));

    if (t78 != 16923207783717LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x401 = -54;
	int8_t x402 = -1;
	uint64_t x404 = 7445013478989124LLU;
	int32_t t79 = -8;

    t79 = (x401|(x402<=(x403*x404)));

    if (t79 != -54) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x406 = INT64_MIN;
	int64_t x407 = -1LL;
	volatile int8_t x408 = INT8_MIN;
	int32_t t80 = 704829610;

    t80 = (x405|(x406<=(x407*x408)));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x409 = INT16_MIN;
	int8_t x410 = INT8_MIN;
	int16_t x411 = 6830;
	int32_t x412 = -1;
	static volatile int32_t t81 = 1;

    t81 = (x409|(x410<=(x411*x412)));

    if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t t82 = 59990;

    t82 = (x417|(x418<=(x419*x420)));

    if (t82 != -2909) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x421 = INT64_MAX;
	int32_t x422 = -1;
	int16_t x423 = -1;
	static uint8_t x424 = UINT8_MAX;

    t83 = (x421|(x422<=(x423*x424)));

    if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x425 = 1;
	int8_t x427 = -24;
	uint8_t x428 = 1U;
	volatile int32_t t84 = -17;

    t84 = (x425|(x426<=(x427*x428)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x430 = -14;
	uint8_t x431 = 0U;
	static int32_t t85 = 1;

    t85 = (x429|(x430<=(x431*x432)));

    if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x434 = INT32_MAX;
	int64_t x435 = -1LL;
	uint8_t x436 = UINT8_MAX;

    t86 = (x433|(x434<=(x435*x436)));

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x441 = UINT8_MAX;
	int64_t x442 = -483LL;
	int16_t x444 = -1;
	volatile int32_t t87 = -1796902;

    t87 = (x441|(x442<=(x443*x444)));

    if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x446 = 4279U;
	uint64_t x448 = 203LLU;
	int64_t t88 = 506045064961LL;

    t88 = (x445|(x446<=(x447*x448)));

    if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x449 = 1782017136822LLU;
	volatile int64_t x450 = INT64_MIN;
	int16_t x451 = -421;
	int64_t x452 = 1445823465LL;

    t89 = (x449|(x450<=(x451*x452)));

    if (t89 != 1782017136823LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x453 = -1;
	int16_t x455 = INT16_MIN;
	int8_t x456 = -1;
	int32_t t90 = 114;

    t90 = (x453|(x454<=(x455*x456)));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x457 = 396324691;
	uint16_t x458 = 15938U;
	uint8_t x459 = 1U;
	static int8_t x460 = INT8_MAX;
	int32_t t91 = 15424;

    t91 = (x457|(x458<=(x459*x460)));

    if (t91 != 396324691) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x461 = INT16_MAX;
	volatile int32_t x462 = 3062618;
	uint8_t x463 = 2U;
	int32_t t92 = 47;

    t92 = (x461|(x462<=(x463*x464)));

    if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x465 = -1;
	int8_t x466 = INT8_MIN;
	static int16_t x467 = -1;
	uint8_t x468 = 3U;
	volatile int32_t t93 = 5644318;

    t93 = (x465|(x466<=(x467*x468)));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x469 = -1;
	uint16_t x472 = UINT16_MAX;
	volatile int32_t t94 = -15;

    t94 = (x469|(x470<=(x471*x472)));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x474 = 461568066U;
	static uint8_t x475 = UINT8_MAX;
	int8_t x476 = INT8_MIN;

    t95 = (x473|(x474<=(x475*x476)));

    if (t95 != 493) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x477 = 402U;
	int16_t x478 = -1;

    t96 = (x477|(x478<=(x479*x480)));

    if (t96 != 402U) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x481 = 73U;
	volatile int64_t x482 = INT64_MIN;
	static int8_t x483 = -1;
	int32_t x484 = -3;

    t97 = (x481|(x482<=(x483*x484)));

    if (t97 != 73) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x485 = 499;
	int8_t x486 = INT8_MAX;
	int8_t x487 = -5;
	static int32_t t98 = -430932668;

    t98 = (x485|(x486<=(x487*x488)));

    if (t98 != 499) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x489 = 104378LL;
	volatile int64_t x490 = INT64_MIN;
	uint64_t x491 = 68552806080087476LLU;
	int32_t x492 = 49;
	volatile int64_t t99 = -11257566110LL;

    t99 = (x489|(x490<=(x491*x492)));

    if (t99 != 104378LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x493 = 3583U;
	int8_t x494 = INT8_MIN;
	static uint64_t x496 = 17LLU;
	static volatile int32_t t100 = 13299202;

    t100 = (x493|(x494<=(x495*x496)));

    if (t100 != 3583) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x497 = 8251576670LLU;
	static uint8_t x498 = 112U;
	uint16_t x499 = 7U;
	uint32_t x500 = 2U;
	static volatile uint64_t t101 = 1355992570739724LLU;

    t101 = (x497|(x498<=(x499*x500)));

    if (t101 != 8251576670LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x505 = 5333580LL;
	uint64_t x506 = 31411823LLU;
	static uint32_t x507 = UINT32_MAX;
	int32_t x508 = -1;
	int64_t t102 = 30682513765LL;

    t102 = (x505|(x506<=(x507*x508)));

    if (t102 != 5333580LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x509 = 44LL;
	int16_t x510 = INT16_MIN;
	static uint32_t x511 = 0U;
	static int64_t t103 = -125633674426LL;

    t103 = (x509|(x510<=(x511*x512)));

    if (t103 != 44LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint32_t x518 = 10615U;
	static uint32_t x519 = 33U;
	int32_t t104 = 7092907;

    t104 = (x517|(x518<=(x519*x520)));

    if (t104 != 3) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x521 = INT16_MIN;
	static uint32_t x522 = 292U;
	int8_t x524 = INT8_MIN;

    t105 = (x521|(x522<=(x523*x524)));

    if (t105 != -32767) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x525 = UINT32_MAX;
	volatile int64_t x526 = INT64_MIN;
	int8_t x527 = -1;

    t106 = (x525|(x526<=(x527*x528)));

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x537 = INT16_MIN;
	volatile int32_t x538 = 0;
	int16_t x539 = INT16_MAX;

    t107 = (x537|(x538<=(x539*x540)));

    if (t107 != -32767) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x541 = -1;
	uint32_t x542 = 1045866U;
	uint8_t x543 = UINT8_MAX;
	int16_t x544 = INT16_MIN;
	int32_t t108 = -10747;

    t108 = (x541|(x542<=(x543*x544)));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int64_t x549 = INT64_MIN;
	static int16_t x550 = 3;
	static volatile int64_t t109 = 7244407316650335LL;

    t109 = (x549|(x550<=(x551*x552)));

    if (t109 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x554 = 112U;
	uint8_t x555 = 126U;
	uint8_t x556 = 1U;
	int64_t t110 = 19242397058LL;

    t110 = (x553|(x554<=(x555*x556)));

    if (t110 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x561 = 86U;
	int8_t x562 = -1;
	int32_t x563 = -1;
	volatile uint32_t t111 = 6781U;

    t111 = (x561|(x562<=(x563*x564)));

    if (t111 != 86U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x570 = INT8_MIN;
	int16_t x571 = -1;
	volatile int8_t x572 = -18;
	int32_t t112 = 9;

    t112 = (x569|(x570<=(x571*x572)));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x577 = INT64_MAX;
	uint8_t x578 = 6U;
	volatile int16_t x579 = 5;
	int16_t x580 = -24;

    t113 = (x577|(x578<=(x579*x580)));

    if (t113 != INT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x582 = INT16_MIN;

    t114 = (x581|(x582<=(x583*x584)));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x585 = INT32_MIN;
	static uint64_t x586 = 34230LLU;
	int32_t x587 = -1;
	int32_t t115 = INT32_MIN;

    t115 = (x585|(x586<=(x587*x588)));

    if (t115 != INT32_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int16_t x589 = INT16_MIN;
	static uint16_t x590 = UINT16_MAX;
	volatile int8_t x591 = INT8_MAX;
	volatile uint8_t x592 = 35U;
	int32_t t116 = 159677;

    t116 = (x589|(x590<=(x591*x592)));

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x593 = 7U;
	static int16_t x594 = INT16_MIN;
	volatile int64_t x595 = 66835391546635LL;
	int8_t x596 = INT8_MIN;

    t117 = (x593|(x594<=(x595*x596)));

    if (t117 != 7) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x597 = -84476;
	int32_t x598 = -487817172;
	uint64_t x599 = 665LLU;
	int64_t x600 = -156342LL;

    t118 = (x597|(x598<=(x599*x600)));

    if (t118 != -84475) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x601 = UINT16_MAX;
	int32_t x602 = INT32_MIN;
	int32_t x603 = -1;
	uint8_t x604 = 0U;
	static volatile int32_t t119 = -373;

    t119 = (x601|(x602<=(x603*x604)));

    if (t119 != 65535) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x605 = -1;
	static uint8_t x606 = 1U;
	static int8_t x607 = INT8_MIN;
	int8_t x608 = INT8_MIN;
	volatile int32_t t120 = 611;

    t120 = (x605|(x606<=(x607*x608)));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x609 = INT8_MIN;
	int32_t x610 = -1;
	int8_t x611 = -4;
	uint16_t x612 = 3102U;
	int32_t t121 = 34988018;

    t121 = (x609|(x610<=(x611*x612)));

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x613 = -20901LL;
	int64_t x614 = INT64_MIN;
	static int16_t x615 = INT16_MAX;
	static int16_t x616 = INT16_MIN;

    t122 = (x613|(x614<=(x615*x616)));

    if (t122 != -20901LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x618 = 1437165;
	static volatile uint64_t x619 = 99107301390443418LLU;
	int16_t x620 = INT16_MIN;

    t123 = (x617|(x618<=(x619*x620)));

    if (t123 != 255) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x621 = UINT16_MAX;
	int64_t x622 = INT64_MIN;
	int16_t x623 = -99;
	static int32_t x624 = -1810;
	int32_t t124 = 332;

    t124 = (x621|(x622<=(x623*x624)));

    if (t124 != 65535) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x625 = 0;
	int32_t x626 = INT32_MIN;
	int8_t x627 = -55;
	int8_t x628 = INT8_MIN;
	volatile int32_t t125 = -531123911;

    t125 = (x625|(x626<=(x627*x628)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x629 = -1;
	int16_t x632 = -168;

    t126 = (x629|(x630<=(x631*x632)));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x633 = -1;
	int8_t x634 = 0;
	int32_t x635 = -6395365;
	int32_t x636 = -1;

    t127 = (x633|(x634<=(x635*x636)));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x641 = 3;
	static int64_t x642 = INT64_MAX;
	uint8_t x643 = 1U;
	int32_t x644 = 40;
	int32_t t128 = -23365542;

    t128 = (x641|(x642<=(x643*x644)));

    if (t128 != 3) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x645 = INT32_MAX;
	volatile uint32_t x647 = UINT32_MAX;
	int8_t x648 = 1;
	volatile int32_t t129 = INT32_MAX;

    t129 = (x645|(x646<=(x647*x648)));

    if (t129 != INT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x649 = 27202U;
	volatile int32_t x651 = -1;
	static volatile int8_t x652 = INT8_MIN;
	uint32_t t130 = 2588749U;

    t130 = (x649|(x650<=(x651*x652)));

    if (t130 != 27203U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x654 = -1;
	volatile int16_t x655 = 123;
	int64_t x656 = 176150467360856LL;
	int32_t t131 = -27650;

    t131 = (x653|(x654<=(x655*x656)));

    if (t131 != -32767) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x657 = INT32_MIN;
	volatile int32_t x658 = -795461597;
	int32_t x660 = 94;
	volatile int32_t t132 = -253;

    t132 = (x657|(x658<=(x659*x660)));

    if (t132 != -2147483647) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x669 = UINT32_MAX;
	static int64_t x670 = INT64_MAX;
	int8_t x671 = INT8_MIN;
	uint16_t x672 = UINT16_MAX;
	volatile uint32_t t133 = UINT32_MAX;

    t133 = (x669|(x670<=(x671*x672)));

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x673 = 255304;
	uint8_t x674 = 5U;
	static int8_t x675 = -1;
	volatile uint64_t x676 = 12713016LLU;
	int32_t t134 = -9545312;

    t134 = (x673|(x674<=(x675*x676)));

    if (t134 != 255305) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x681 = 672;
	int32_t x682 = -1;
	static uint32_t x683 = 92315U;
	uint8_t x684 = UINT8_MAX;
	int32_t t135 = 35370510;

    t135 = (x681|(x682<=(x683*x684)));

    if (t135 != 672) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x685 = INT16_MAX;
	int16_t x686 = -1;
	static int16_t x687 = -1;
	uint32_t x688 = 31549693U;
	static int32_t t136 = -34205;

    t136 = (x685|(x686<=(x687*x688)));

    if (t136 != 32767) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x689 = INT16_MAX;
	volatile int32_t x690 = INT32_MIN;
	uint64_t x691 = UINT64_MAX;
	int64_t x692 = INT64_MAX;
	static volatile int32_t t137 = -13;

    t137 = (x689|(x690<=(x691*x692)));

    if (t137 != 32767) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x693 = INT64_MAX;
	int16_t x695 = INT16_MIN;
	static uint8_t x696 = 96U;
	volatile int64_t t138 = INT64_MAX;

    t138 = (x693|(x694<=(x695*x696)));

    if (t138 != INT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x697 = 323;
	static int64_t x698 = INT64_MIN;
	static int64_t x700 = -78586975177341052LL;

    t139 = (x697|(x698<=(x699*x700)));

    if (t139 != 323) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x701 = INT8_MAX;
	int32_t x702 = 8;
	uint32_t x703 = UINT32_MAX;
	static uint32_t x704 = 3847455U;
	static int32_t t140 = 820356;

    t140 = (x701|(x702<=(x703*x704)));

    if (t140 != 127) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x714 = INT64_MIN;
	int64_t x715 = -1LL;
	static volatile int8_t x716 = -45;
	int32_t t141 = 0;

    t141 = (x713|(x714<=(x715*x716)));

    if (t141 != -32767) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x717 = INT32_MAX;
	int16_t x718 = INT16_MIN;
	uint32_t x719 = UINT32_MAX;
	volatile int32_t t142 = INT32_MAX;

    t142 = (x717|(x718<=(x719*x720)));

    if (t142 != INT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x721 = -1;
	volatile int32_t t143 = -1;

    t143 = (x721|(x722<=(x723*x724)));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x725 = INT8_MAX;
	int32_t x726 = INT32_MIN;
	volatile int64_t x727 = 395259441812LL;
	int64_t x728 = -1LL;
	volatile int32_t t144 = 7769620;

    t144 = (x725|(x726<=(x727*x728)));

    if (t144 != 127) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x730 = -1;
	uint32_t x731 = 13U;
	int32_t t145 = INT32_MIN;

    t145 = (x729|(x730<=(x731*x732)));

    if (t145 != INT32_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x733 = 11340582233LLU;
	int8_t x734 = -1;
	static volatile int8_t x735 = INT8_MIN;
	volatile uint64_t t146 = 952LLU;

    t146 = (x733|(x734<=(x735*x736)));

    if (t146 != 11340582233LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x758 = INT16_MAX;
	volatile uint32_t x760 = UINT32_MAX;

    t147 = (x757|(x758<=(x759*x760)));

    if (t147 != INT32_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x761 = 26832350U;
	static uint8_t x763 = UINT8_MAX;
	int16_t x764 = INT16_MAX;
	volatile uint32_t t148 = 364286154U;

    t148 = (x761|(x762<=(x763*x764)));

    if (t148 != 26832351U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x765 = -1;
	int64_t x766 = INT64_MAX;
	volatile uint32_t x767 = UINT32_MAX;
	volatile uint32_t x768 = 679U;
	volatile int32_t t149 = 380990313;

    t149 = (x765|(x766<=(x767*x768)));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x775 = UINT32_MAX;
	volatile int64_t x776 = -1038758LL;
	volatile uint32_t t150 = 381901318U;

    t150 = (x773|(x774<=(x775*x776)));

    if (t150 != 3498984U) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x777 = -49;
	int64_t x779 = -1097678LL;
	volatile int32_t t151 = 602756;

    t151 = (x777|(x778<=(x779*x780)));

    if (t151 != -49) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x781 = -13372;
	uint16_t x782 = 3U;
	volatile uint16_t x783 = 167U;
	uint8_t x784 = 0U;

    t152 = (x781|(x782<=(x783*x784)));

    if (t152 != -13372) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x785 = -1LL;
	uint64_t x786 = 396005LLU;
	uint32_t x788 = 141747U;
	static volatile int64_t t153 = 106527047275633482LL;

    t153 = (x785|(x786<=(x787*x788)));

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x789 = INT16_MIN;
	int16_t x790 = INT16_MAX;
	uint32_t x791 = 1760785U;
	uint8_t x792 = UINT8_MAX;
	volatile int32_t t154 = 50884457;

    t154 = (x789|(x790<=(x791*x792)));

    if (t154 != -32767) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x793 = INT16_MIN;
	static int16_t x794 = INT16_MAX;
	static uint32_t x795 = 11493U;
	uint8_t x796 = UINT8_MAX;
	volatile int32_t t155 = -55847;

    t155 = (x793|(x794<=(x795*x796)));

    if (t155 != -32767) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x797 = 1;
	int8_t x798 = -1;
	int8_t x799 = 2;
	static int8_t x800 = -56;
	volatile int32_t t156 = -36588888;

    t156 = (x797|(x798<=(x799*x800)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x802 = 11;
	int16_t x803 = 7;
	int8_t x804 = INT8_MAX;
	static int64_t t157 = 2LL;

    t157 = (x801|(x802<=(x803*x804)));

    if (t157 != -64627LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x806 = INT8_MIN;
	volatile int64_t x807 = -2485562619349LL;
	int8_t x808 = 49;
	static volatile int32_t t158 = 552;

    t158 = (x805|(x806<=(x807*x808)));

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x809 = INT32_MIN;
	int32_t x810 = -226;
	static int32_t x811 = 164056794;
	int16_t x812 = 1;

    t159 = (x809|(x810<=(x811*x812)));

    if (t159 != -2147483647) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x814 = 41U;
	uint64_t x815 = UINT64_MAX;
	int32_t t160 = 0;

    t160 = (x813|(x814<=(x815*x816)));

    if (t160 != -32767) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x817 = 75793474;
	uint64_t x818 = 406578LLU;
	int64_t x819 = -1LL;
	static volatile int16_t x820 = -1;
	static int32_t t161 = 21344;

    t161 = (x817|(x818<=(x819*x820)));

    if (t161 != 75793474) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x822 = INT8_MIN;
	int8_t x823 = -1;
	volatile int8_t x824 = INT8_MIN;

    t162 = (x821|(x822<=(x823*x824)));

    if (t162 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x825 = -1;
	static int8_t x827 = INT8_MIN;
	int16_t x828 = -1046;
	volatile int32_t t163 = 34;

    t163 = (x825|(x826<=(x827*x828)));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x829 = INT16_MIN;
	int64_t x830 = INT64_MAX;
	int16_t x831 = 0;
	uint16_t x832 = UINT16_MAX;
	static int32_t t164 = 141280;

    t164 = (x829|(x830<=(x831*x832)));

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x833 = INT16_MIN;
	volatile uint8_t x834 = 3U;
	int16_t x836 = -63;
	int32_t t165 = -24653;

    t165 = (x833|(x834<=(x835*x836)));

    if (t165 != -32768) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x841 = 35448U;
	uint64_t x842 = 6720LLU;
	volatile uint8_t x843 = 31U;
	int64_t x844 = 13483591LL;
	volatile uint32_t t166 = 176394763U;

    t166 = (x841|(x842<=(x843*x844)));

    if (t166 != 35449U) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x845 = INT32_MIN;
	static int8_t x846 = 0;
	int8_t x847 = -1;
	volatile int32_t x848 = INT32_MAX;
	static volatile int32_t t167 = INT32_MIN;

    t167 = (x845|(x846<=(x847*x848)));

    if (t167 != INT32_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x857 = INT16_MIN;
	int32_t x858 = INT32_MAX;
	int32_t x859 = INT32_MIN;
	volatile int32_t t168 = -336;

    t168 = (x857|(x858<=(x859*x860)));

    if (t168 != -32768) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x864 = 1LL;
	volatile int32_t t169 = -10514007;

    t169 = (x861|(x862<=(x863*x864)));

    if (t169 != 255) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x868 = INT16_MAX;
	volatile int32_t t170 = -3469676;

    t170 = (x865|(x866<=(x867*x868)));

    if (t170 != 255) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x874 = -1;
	uint64_t x875 = 1295097179005737204LLU;
	static uint32_t x876 = 0U;
	volatile int32_t t171 = INT32_MAX;

    t171 = (x873|(x874<=(x875*x876)));

    if (t171 != INT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x877 = 3556307;
	uint16_t x878 = 72U;
	int8_t x879 = INT8_MIN;
	int16_t x880 = INT16_MIN;
	int32_t t172 = -64440761;

    t172 = (x877|(x878<=(x879*x880)));

    if (t172 != 3556307) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x881 = -1;
	int8_t x882 = -1;
	uint32_t x884 = UINT32_MAX;
	static int32_t t173 = 151043435;

    t173 = (x881|(x882<=(x883*x884)));

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x885 = 57U;
	volatile uint16_t x886 = 424U;
	uint64_t x887 = 7086324349960LLU;
	uint32_t t174 = 0U;

    t174 = (x885|(x886<=(x887*x888)));

    if (t174 != 57U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x889 = 88133068U;
	uint16_t x890 = 27498U;
	volatile uint32_t x891 = 33U;

    t175 = (x889|(x890<=(x891*x892)));

    if (t175 != 88133068U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x893 = INT8_MIN;
	int16_t x895 = -36;
	static volatile int64_t x896 = -1LL;
	volatile int32_t t176 = 7029;

    t176 = (x893|(x894<=(x895*x896)));

    if (t176 != -127) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x897 = -1;
	static uint32_t x898 = UINT32_MAX;
	int16_t x899 = -1;
	static volatile int32_t t177 = -222329165;

    t177 = (x897|(x898<=(x899*x900)));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x901 = INT32_MIN;
	uint64_t x902 = UINT64_MAX;
	uint16_t x903 = 172U;
	int32_t t178 = INT32_MIN;

    t178 = (x901|(x902<=(x903*x904)));

    if (t178 != INT32_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int8_t x905 = INT8_MAX;
	uint32_t x906 = UINT32_MAX;
	uint64_t x907 = UINT64_MAX;
	static int64_t x908 = INT64_MAX;

    t179 = (x905|(x906<=(x907*x908)));

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x913 = INT16_MIN;
	int64_t x915 = 7176650LL;
	int32_t x916 = -1;
	int32_t t180 = -112961274;

    t180 = (x913|(x914<=(x915*x916)));

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x917 = -1LL;
	volatile uint16_t x918 = 1U;
	int8_t x919 = INT8_MIN;
	static int64_t t181 = 61122799LL;

    t181 = (x917|(x918<=(x919*x920)));

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x925 = INT64_MIN;
	int32_t x926 = 89969510;
	int8_t x927 = -4;
	int16_t x928 = INT16_MIN;
	static int64_t t182 = INT64_MIN;

    t182 = (x925|(x926<=(x927*x928)));

    if (t182 != INT64_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x929 = 35U;
	int8_t x930 = INT8_MAX;
	uint8_t x931 = 31U;
	volatile uint32_t t183 = 167408411U;

    t183 = (x929|(x930<=(x931*x932)));

    if (t183 != 35U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x937 = INT64_MIN;
	int32_t x939 = -1;
	int16_t x940 = 448;
	int64_t t184 = INT64_MIN;

    t184 = (x937|(x938<=(x939*x940)));

    if (t184 != INT64_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x949 = 43930U;
	static uint8_t x950 = UINT8_MAX;
	uint8_t x951 = UINT8_MAX;
	int8_t x952 = INT8_MIN;
	volatile uint32_t t185 = 14767U;

    t185 = (x949|(x950<=(x951*x952)));

    if (t185 != 43930U) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x953 = -1LL;
	uint8_t x954 = UINT8_MAX;
	uint64_t x956 = 1459816652545523025LLU;
	int64_t t186 = 65442004064739209LL;

    t186 = (x953|(x954<=(x955*x956)));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x957 = 164U;
	volatile int8_t x959 = -2;
	volatile int8_t x960 = INT8_MAX;
	volatile int32_t t187 = 1760;

    t187 = (x957|(x958<=(x959*x960)));

    if (t187 != 165) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x961 = INT16_MIN;
	int16_t x962 = INT16_MAX;
	int16_t x964 = INT16_MIN;
	volatile int32_t t188 = -10086169;

    t188 = (x961|(x962<=(x963*x964)));

    if (t188 != -32767) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x969 = -1LL;
	uint32_t x971 = 411U;
	volatile int64_t t189 = 16674769LL;

    t189 = (x969|(x970<=(x971*x972)));

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x973 = -110;
	uint64_t x974 = 8212167889789548LLU;
	volatile uint64_t x975 = 3291LLU;
	int64_t x976 = INT64_MAX;
	static int32_t t190 = 55230;

    t190 = (x973|(x974<=(x975*x976)));

    if (t190 != -109) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x977 = UINT32_MAX;
	int8_t x978 = -21;
	volatile int32_t x979 = 1;
	int32_t x980 = INT32_MIN;
	uint32_t t191 = UINT32_MAX;

    t191 = (x977|(x978<=(x979*x980)));

    if (t191 != UINT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x989 = INT64_MIN;
	volatile int64_t t192 = INT64_MIN;

    t192 = (x989|(x990<=(x991*x992)));

    if (t192 != INT64_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x993 = -1;
	static int16_t x994 = INT16_MIN;
	int8_t x995 = INT8_MIN;
	int64_t x996 = -2139LL;

    t193 = (x993|(x994<=(x995*x996)));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x997 = INT32_MIN;
	int8_t x998 = INT8_MAX;
	volatile int16_t x999 = 6763;
	volatile int8_t x1000 = -31;
	static volatile int32_t t194 = INT32_MIN;

    t194 = (x997|(x998<=(x999*x1000)));

    if (t194 != INT32_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1005 = UINT16_MAX;
	int32_t x1006 = INT32_MIN;
	static int8_t x1007 = INT8_MIN;
	volatile int32_t x1008 = 6083;

    t195 = (x1005|(x1006<=(x1007*x1008)));

    if (t195 != 65535) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1009 = 783364010348630LLU;
	static volatile uint32_t x1010 = 355U;
	static volatile uint64_t t196 = 2488073LLU;

    t196 = (x1009|(x1010<=(x1011*x1012)));

    if (t196 != 783364010348630LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1033 = INT8_MIN;
	uint64_t x1035 = 12573865878703LLU;
	int64_t x1036 = INT64_MIN;
	static int32_t t197 = 71;

    t197 = (x1033|(x1034<=(x1035*x1036)));

    if (t197 != -128) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1037 = INT32_MIN;
	int16_t x1038 = INT16_MIN;
	static int8_t x1039 = INT8_MAX;
	static uint32_t x1040 = 1878731U;

    t198 = (x1037|(x1038<=(x1039*x1040)));

    if (t198 != INT32_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1041 = -1LL;
	volatile int8_t x1042 = INT8_MAX;
	int64_t x1043 = -1LL;

    t199 = (x1041|(x1042<=(x1043*x1044)));

    if (t199 != -1LL) { NG(); } else { ; }
	
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

