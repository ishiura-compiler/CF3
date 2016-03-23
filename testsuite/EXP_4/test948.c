
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

int8_t x1 = INT8_MAX;
int16_t x5 = INT16_MIN;
static int16_t x7 = 88;
volatile int32_t x12 = INT32_MAX;
uint16_t x16 = 39U;
static int32_t t3 = -59405;
static volatile int32_t t5 = 34;
volatile int32_t x50 = INT32_MAX;
uint16_t x52 = 22801U;
volatile int32_t t11 = 0;
int8_t x58 = -1;
int32_t t13 = 3991;
static int32_t t14 = 1336166;
volatile uint32_t x68 = 12953260U;
uint8_t x73 = 127U;
static int32_t t17 = -16040;
volatile uint64_t x78 = 82810LLU;
uint16_t x80 = UINT16_MAX;
int16_t x85 = 1859;
int32_t t20 = 1;
int64_t x109 = INT64_MIN;
static int32_t x121 = 8760970;
uint64_t x127 = 1519367261355732LLU;
int16_t x130 = INT16_MIN;
int8_t x131 = INT8_MAX;
static int32_t x136 = INT32_MAX;
int8_t x141 = -1;
volatile uint64_t x143 = UINT64_MAX;
volatile int32_t t33 = -3;
uint64_t x149 = UINT64_MAX;
uint8_t x153 = 28U;
volatile int32_t t36 = -2;
static int8_t x160 = INT8_MAX;
int32_t t37 = 33272268;
int64_t x163 = INT64_MAX;
static uint8_t x165 = 0U;
uint64_t x166 = 24LLU;
int16_t x167 = INT16_MIN;
int32_t x168 = INT32_MIN;
volatile int16_t x172 = INT16_MAX;
uint16_t x176 = 73U;
uint32_t x181 = 335647U;
int64_t x184 = 1539919818LL;
volatile int32_t t43 = -1;
int8_t x192 = -1;
volatile int32_t t44 = -768;
int32_t x193 = INT32_MAX;
uint32_t x196 = 15972U;
uint16_t x201 = UINT16_MAX;
volatile int32_t t47 = 27;
int8_t x210 = -23;
uint16_t x220 = 25113U;
int64_t x228 = INT64_MIN;
int16_t x232 = INT16_MIN;
volatile int32_t t55 = -65562111;
static volatile int8_t x239 = INT8_MIN;
int32_t x240 = -1;
volatile int32_t t56 = -3727;
static int32_t x241 = INT32_MIN;
int8_t x244 = INT8_MIN;
int32_t t57 = 8;
int16_t x251 = INT16_MAX;
volatile int32_t t59 = 13480251;
volatile int64_t x256 = -1LL;
uint32_t x261 = 23U;
volatile int32_t t62 = 222;
uint16_t x265 = UINT16_MAX;
int64_t x270 = 434647662111LL;
uint16_t x283 = 11248U;
volatile int64_t x292 = INT64_MIN;
static int32_t t69 = 125766580;
volatile uint16_t x293 = 6U;
int32_t t70 = 2;
int32_t x298 = -3894276;
uint8_t x299 = 24U;
int16_t x303 = -407;
int8_t x305 = -1;
int16_t x318 = -179;
int16_t x324 = 1065;
int16_t x326 = -1;
static int8_t x329 = INT8_MIN;
uint16_t x333 = UINT16_MAX;
volatile int32_t t80 = -15;
int64_t x339 = INT64_MIN;
int32_t x340 = INT32_MIN;
volatile int32_t t81 = -101021;
int16_t x347 = INT16_MIN;
volatile int32_t x356 = INT32_MIN;
static volatile int32_t t85 = 7;
uint16_t x367 = UINT16_MAX;
uint8_t x369 = 7U;
volatile int32_t x371 = 67079;
static volatile int16_t x373 = -1;
static volatile uint8_t x374 = UINT8_MAX;
int32_t t90 = 0;
static int32_t x380 = -10477973;
uint8_t x387 = 82U;
volatile int8_t x391 = -1;
volatile int64_t x392 = 13280643LL;
int64_t x396 = 63517623520535LL;
volatile int32_t x398 = 161;
volatile int16_t x412 = INT16_MAX;
volatile int16_t x420 = INT16_MAX;
uint16_t x423 = 1666U;
static int8_t x425 = -5;
int64_t x428 = -1LL;
int8_t x429 = INT8_MIN;
int64_t x433 = INT64_MAX;
volatile int32_t t105 = -16127547;
int32_t x438 = INT32_MIN;
volatile uint8_t x441 = 13U;
volatile int32_t t109 = -178;
volatile uint32_t x453 = UINT32_MAX;
uint64_t x454 = UINT64_MAX;
static int16_t x455 = -224;
uint64_t x463 = 1LLU;
static int16_t x471 = 1;
static int64_t x474 = INT64_MIN;
volatile int32_t t115 = 337427119;
int8_t x478 = INT8_MIN;
int32_t t116 = -47;
uint16_t x486 = 8444U;
int32_t t118 = 3842708;
volatile int32_t t119 = 4055705;
int64_t x500 = INT64_MIN;
volatile int32_t t121 = 341511301;
int32_t x502 = INT32_MIN;
uint64_t x503 = 170539596LLU;
static int32_t x507 = 19435675;
uint8_t x508 = 3U;
int16_t x513 = -1;
static int8_t x524 = INT8_MIN;
volatile int16_t x525 = -12440;
volatile uint64_t x532 = 49LLU;
volatile uint64_t x544 = UINT64_MAX;
volatile uint64_t x546 = UINT64_MAX;
static int64_t x558 = INT64_MIN;
volatile uint16_t x559 = 6260U;
volatile int8_t x561 = INT8_MIN;
int8_t x565 = 1;
volatile int8_t x574 = INT8_MIN;
int64_t x584 = -87117928417LL;
uint8_t x587 = 63U;
int8_t x600 = INT8_MIN;
uint64_t x601 = 219962723LLU;
volatile uint64_t x603 = UINT64_MAX;
static uint32_t x604 = UINT32_MAX;
int64_t x607 = -1LL;
int32_t x608 = 396333;
volatile int32_t t148 = -14824948;
int16_t x610 = INT16_MIN;
static int64_t x611 = INT64_MIN;
int64_t x612 = -1LL;
volatile int64_t x615 = -1LL;
volatile int32_t t150 = -127;
int8_t x622 = 39;
int32_t x626 = -1;
int64_t x628 = -1LL;
static int32_t t153 = -409258;
int32_t t154 = 682387841;
volatile int8_t x636 = -1;
static int32_t t155 = 1;
int16_t x641 = -1;
int64_t x650 = INT64_MIN;
uint16_t x652 = 13U;
volatile int32_t t159 = 4;
int64_t x654 = 3770LL;
int32_t x655 = INT32_MAX;
static uint8_t x656 = 34U;
static int16_t x662 = -1;
int8_t x675 = INT8_MIN;
int8_t x680 = -1;
static volatile int32_t t166 = 56994875;
static int8_t x682 = 3;
uint64_t x685 = 16815896362LLU;
volatile int8_t x688 = -1;
static int32_t x691 = -39428017;
static volatile int8_t x696 = INT8_MAX;
int8_t x702 = -6;
int8_t x703 = INT8_MIN;
int64_t x712 = INT64_MIN;
uint32_t x715 = 81788U;
volatile int32_t t175 = -19388198;
static int8_t x721 = INT8_MIN;
int8_t x723 = -1;
volatile int32_t t177 = -193246101;
int16_t x727 = INT16_MIN;
int32_t t181 = -8436;
static uint16_t x748 = UINT16_MAX;
int32_t t183 = -894;
uint64_t x756 = 11934962718450654LLU;
volatile int32_t t185 = 10;
int32_t t186 = -3;
volatile int32_t t187 = -13;
uint8_t x776 = 108U;
volatile int16_t x778 = INT16_MIN;
static volatile int32_t t193 = -1454750;
int16_t x799 = -167;
uint32_t x800 = UINT32_MAX;
static int64_t x801 = 1LL;
volatile int32_t t196 = 0;
uint16_t x815 = 2U;


void f0(void) {
    	int16_t x2 = INT16_MIN;
	int8_t x3 = -49;
	volatile int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = 0;

    t0 = (x1<=(x2&(x3%x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = -602962457174LL;
	volatile uint16_t x8 = UINT16_MAX;
	int32_t t1 = 6184;

    t1 = (x5<=(x6&(x7%x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 376980839LLU;
	uint16_t x10 = UINT16_MAX;
	int32_t x11 = 775047;
	int32_t t2 = -764;

    t2 = (x9<=(x10&(x11%x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	volatile uint64_t x14 = UINT64_MAX;
	static int64_t x15 = -643920216219LL;

    t3 = (x13<=(x14&(x15%x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 2436983;
	volatile int64_t x18 = 2965768872626539LL;
	volatile uint64_t x19 = 4919819884109360LLU;
	int32_t x20 = INT32_MIN;
	int32_t t4 = 65402687;

    t4 = (x17<=(x18&(x19%x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = 130036182036382226LLU;
	int16_t x22 = INT16_MIN;
	volatile int8_t x23 = -4;
	volatile int32_t x24 = -12;

    t5 = (x21<=(x22&(x23%x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 3U;
	static uint32_t x26 = UINT32_MAX;
	int32_t x27 = -77610;
	int32_t x28 = -1;
	int32_t t6 = -21;

    t6 = (x25<=(x26&(x27%x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = -1;
	int64_t x34 = INT64_MIN;
	uint8_t x35 = 3U;
	volatile int8_t x36 = 16;
	int32_t t7 = 5165658;

    t7 = (x33<=(x34&(x35%x36)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = INT64_MIN;
	int8_t x38 = INT8_MIN;
	static volatile int16_t x39 = INT16_MIN;
	int32_t x40 = -432;
	static int32_t t8 = 3531;

    t8 = (x37<=(x38&(x39%x40)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x41 = -3;
	int8_t x42 = INT8_MAX;
	static int8_t x43 = -1;
	volatile uint32_t x44 = UINT32_MAX;
	volatile int32_t t9 = 3684;

    t9 = (x41<=(x42&(x43%x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x45 = INT8_MIN;
	int16_t x46 = INT16_MIN;
	uint64_t x47 = 1025394LLU;
	int8_t x48 = 2;
	volatile int32_t t10 = 329;

    t10 = (x45<=(x46&(x47%x48)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x49 = 286526LLU;
	uint16_t x51 = 269U;

    t11 = (x49<=(x50&(x51%x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MIN;
	uint32_t x54 = 1U;
	int32_t x55 = 126;
	int32_t x56 = INT32_MIN;
	int32_t t12 = 0;

    t12 = (x53<=(x54&(x55%x56)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x57 = 95555553LLU;
	uint8_t x59 = 21U;
	static volatile uint64_t x60 = 409881452LLU;

    t13 = (x57<=(x58&(x59%x60)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x61 = 47U;
	static int64_t x62 = -5637116542792LL;
	int64_t x63 = INT64_MIN;
	int8_t x64 = INT8_MIN;

    t14 = (x61<=(x62&(x63%x64)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = 15;
	volatile int32_t x66 = -3826;
	int64_t x67 = -1LL;
	static volatile int32_t t15 = -1;

    t15 = (x65<=(x66&(x67%x68)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x69 = 68859LLU;
	int32_t x70 = INT32_MIN;
	uint64_t x71 = 14689506170LLU;
	static int8_t x72 = INT8_MIN;
	int32_t t16 = -6146187;

    t16 = (x69<=(x70&(x71%x72)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x74 = -5;
	volatile int16_t x75 = 2;
	uint32_t x76 = 7U;

    t17 = (x73<=(x74&(x75%x76)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x77 = UINT64_MAX;
	uint16_t x79 = 53U;
	int32_t t18 = -1890888;

    t18 = (x77<=(x78&(x79%x80)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x81 = 2916267102881309240LLU;
	static int64_t x82 = INT64_MIN;
	int16_t x83 = INT16_MIN;
	volatile int32_t x84 = INT32_MAX;
	static volatile int32_t t19 = -885421;

    t19 = (x81<=(x82&(x83%x84)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x86 = UINT64_MAX;
	int8_t x87 = INT8_MIN;
	uint8_t x88 = 9U;

    t20 = (x85<=(x86&(x87%x88)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x89 = -15;
	volatile uint8_t x90 = 48U;
	volatile uint8_t x91 = UINT8_MAX;
	volatile int16_t x92 = 1;
	volatile int32_t t21 = 38744757;

    t21 = (x89<=(x90&(x91%x92)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = -118388479LL;
	static uint32_t x98 = 31128U;
	volatile uint64_t x99 = 3642719603LLU;
	volatile int16_t x100 = -1;
	int32_t t22 = -285004522;

    t22 = (x97<=(x98&(x99%x100)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x101 = 87U;
	volatile uint16_t x102 = 1U;
	static volatile int64_t x103 = -6050208401618755LL;
	uint64_t x104 = 44446838512LLU;
	static volatile int32_t t23 = 301653318;

    t23 = (x101<=(x102&(x103%x104)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x105 = 595U;
	int8_t x106 = INT8_MAX;
	uint16_t x107 = 5U;
	uint32_t x108 = 90714699U;
	volatile int32_t t24 = 1012845719;

    t24 = (x105<=(x106&(x107%x108)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x110 = INT16_MIN;
	volatile int8_t x111 = INT8_MIN;
	static uint8_t x112 = UINT8_MAX;
	int32_t t25 = -1;

    t25 = (x109<=(x110&(x111%x112)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x113 = INT32_MIN;
	volatile int64_t x114 = INT64_MAX;
	uint16_t x115 = UINT16_MAX;
	static int64_t x116 = INT64_MAX;
	volatile int32_t t26 = -10578;

    t26 = (x113<=(x114&(x115%x116)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x117 = 1;
	int16_t x118 = -448;
	int16_t x119 = INT16_MAX;
	int8_t x120 = INT8_MAX;
	volatile int32_t t27 = -55841299;

    t27 = (x117<=(x118&(x119%x120)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x122 = INT64_MAX;
	int64_t x123 = INT64_MIN;
	static uint32_t x124 = UINT32_MAX;
	int32_t t28 = -3364944;

    t28 = (x121<=(x122&(x123%x124)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x125 = 1U;
	int16_t x126 = -9;
	uint16_t x128 = 972U;
	volatile int32_t t29 = -54;

    t29 = (x125<=(x126&(x127%x128)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = INT64_MIN;
	int32_t x132 = INT32_MIN;
	volatile int32_t t30 = -1;

    t30 = (x129<=(x130&(x131%x132)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x133 = 4442U;
	int16_t x134 = INT16_MAX;
	int16_t x135 = -1;
	int32_t t31 = -8113552;

    t31 = (x133<=(x134&(x135%x136)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x137 = UINT32_MAX;
	int16_t x138 = -1;
	uint32_t x139 = 7384256U;
	int64_t x140 = INT64_MIN;
	int32_t t32 = -60072;

    t32 = (x137<=(x138&(x139%x140)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x142 = -1;
	int8_t x144 = INT8_MAX;

    t33 = (x141<=(x142&(x143%x144)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x145 = 76U;
	uint32_t x146 = UINT32_MAX;
	static int8_t x147 = 0;
	int32_t x148 = INT32_MIN;
	volatile int32_t t34 = 1567;

    t34 = (x145<=(x146&(x147%x148)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x150 = -24;
	int32_t x151 = INT32_MIN;
	volatile uint32_t x152 = 6659433U;
	volatile int32_t t35 = 676;

    t35 = (x149<=(x150&(x151%x152)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x154 = UINT16_MAX;
	volatile uint64_t x155 = 48252LLU;
	static int8_t x156 = INT8_MIN;

    t36 = (x153<=(x154&(x155%x156)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x157 = INT16_MIN;
	volatile int8_t x158 = 1;
	static uint16_t x159 = UINT16_MAX;

    t37 = (x157<=(x158&(x159%x160)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x161 = 313259550U;
	int8_t x162 = INT8_MIN;
	static int8_t x164 = INT8_MAX;
	static int32_t t38 = -6329583;

    t38 = (x161<=(x162&(x163%x164)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t t39 = 88;

    t39 = (x165<=(x166&(x167%x168)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x169 = -1;
	int64_t x170 = INT64_MAX;
	int8_t x171 = INT8_MAX;
	int32_t t40 = 91355056;

    t40 = (x169<=(x170&(x171%x172)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x173 = 2U;
	uint32_t x174 = 508344U;
	int64_t x175 = -6LL;
	int32_t t41 = -226443484;

    t41 = (x173<=(x174&(x175%x176)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x182 = -1315259386113232942LL;
	int8_t x183 = INT8_MIN;
	int32_t t42 = -157504;

    t42 = (x181<=(x182&(x183%x184)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x185 = UINT64_MAX;
	static int64_t x186 = -60879258LL;
	volatile int8_t x187 = -1;
	int8_t x188 = INT8_MAX;

    t43 = (x185<=(x186&(x187%x188)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x189 = 14;
	int32_t x190 = -3559;
	uint32_t x191 = UINT32_MAX;

    t44 = (x189<=(x190&(x191%x192)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x194 = INT16_MAX;
	int64_t x195 = 843554048LL;
	static volatile int32_t t45 = 155239;

    t45 = (x193<=(x194&(x195%x196)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x197 = INT16_MIN;
	uint64_t x198 = 92LLU;
	int32_t x199 = INT32_MIN;
	volatile int8_t x200 = INT8_MAX;
	volatile int32_t t46 = 0;

    t46 = (x197<=(x198&(x199%x200)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x202 = -1;
	static int32_t x203 = -1;
	volatile int16_t x204 = INT16_MIN;

    t47 = (x201<=(x202&(x203%x204)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x205 = UINT64_MAX;
	static int64_t x206 = 10637825291968546LL;
	uint8_t x207 = UINT8_MAX;
	static volatile int32_t x208 = -1;
	int32_t t48 = 10321141;

    t48 = (x205<=(x206&(x207%x208)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x209 = INT64_MIN;
	static int64_t x211 = INT64_MIN;
	static int64_t x212 = INT64_MIN;
	volatile int32_t t49 = 1019627;

    t49 = (x209<=(x210&(x211%x212)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x213 = 323493809U;
	uint16_t x214 = 2U;
	int16_t x215 = 0;
	uint16_t x216 = 70U;
	static volatile int32_t t50 = 910173160;

    t50 = (x213<=(x214&(x215%x216)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x217 = 84771U;
	uint8_t x218 = UINT8_MAX;
	volatile int8_t x219 = -1;
	int32_t t51 = 109303845;

    t51 = (x217<=(x218&(x219%x220)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x221 = INT32_MIN;
	static uint8_t x222 = UINT8_MAX;
	volatile int64_t x223 = INT64_MIN;
	int32_t x224 = INT32_MIN;
	int32_t t52 = -72;

    t52 = (x221<=(x222&(x223%x224)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x225 = INT64_MIN;
	int64_t x226 = 0LL;
	uint16_t x227 = 1U;
	static int32_t t53 = -243774;

    t53 = (x225<=(x226&(x227%x228)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x229 = -1274252;
	int32_t x230 = INT32_MIN;
	uint32_t x231 = 0U;
	int32_t t54 = 32942140;

    t54 = (x229<=(x230&(x231%x232)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x233 = UINT16_MAX;
	int16_t x234 = 20;
	uint16_t x235 = 4186U;
	uint16_t x236 = 35U;

    t55 = (x233<=(x234&(x235%x236)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x237 = -1;
	int64_t x238 = INT64_MIN;

    t56 = (x237<=(x238&(x239%x240)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x242 = INT8_MIN;
	uint64_t x243 = 3361463238661760311LLU;

    t57 = (x241<=(x242&(x243%x244)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x245 = 1870LL;
	uint32_t x246 = 1U;
	int16_t x247 = INT16_MAX;
	int32_t x248 = INT32_MIN;
	int32_t t58 = 16320625;

    t58 = (x245<=(x246&(x247%x248)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x249 = INT8_MIN;
	int32_t x250 = 1;
	static int16_t x252 = -1575;

    t59 = (x249<=(x250&(x251%x252)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x253 = -1;
	volatile uint32_t x254 = 161U;
	int64_t x255 = -1LL;
	volatile int32_t t60 = 6994;

    t60 = (x253<=(x254&(x255%x256)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x257 = UINT64_MAX;
	int16_t x258 = INT16_MAX;
	int8_t x259 = 0;
	static uint32_t x260 = 450137U;
	int32_t t61 = 8328692;

    t61 = (x257<=(x258&(x259%x260)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x262 = INT8_MIN;
	int64_t x263 = INT64_MAX;
	int16_t x264 = INT16_MIN;

    t62 = (x261<=(x262&(x263%x264)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x266 = 7U;
	static int8_t x267 = INT8_MIN;
	uint64_t x268 = 104LLU;
	int32_t t63 = -3901;

    t63 = (x265<=(x266&(x267%x268)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x269 = INT32_MIN;
	static uint32_t x271 = UINT32_MAX;
	static int64_t x272 = 74340378LL;
	int32_t t64 = 1;

    t64 = (x269<=(x270&(x271%x272)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x273 = -1;
	int8_t x274 = -1;
	volatile uint32_t x275 = UINT32_MAX;
	int32_t x276 = INT32_MIN;
	volatile int32_t t65 = -428288683;

    t65 = (x273<=(x274&(x275%x276)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x277 = 6996487485750036LL;
	volatile int16_t x278 = -1;
	int32_t x279 = INT32_MIN;
	volatile int16_t x280 = INT16_MAX;
	int32_t t66 = -2040531;

    t66 = (x277<=(x278&(x279%x280)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x281 = UINT8_MAX;
	int64_t x282 = -1LL;
	uint64_t x284 = UINT64_MAX;
	int32_t t67 = 60498;

    t67 = (x281<=(x282&(x283%x284)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x285 = 8U;
	int32_t x286 = 3458;
	static int8_t x287 = INT8_MIN;
	volatile int8_t x288 = INT8_MAX;
	volatile int32_t t68 = 702299;

    t68 = (x285<=(x286&(x287%x288)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x289 = UINT16_MAX;
	int32_t x290 = INT32_MIN;
	uint16_t x291 = 0U;

    t69 = (x289<=(x290&(x291%x292)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x294 = UINT64_MAX;
	volatile uint32_t x295 = 452108U;
	uint32_t x296 = UINT32_MAX;

    t70 = (x293<=(x294&(x295%x296)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x297 = UINT64_MAX;
	uint8_t x300 = 28U;
	volatile int32_t t71 = 3499;

    t71 = (x297<=(x298&(x299%x300)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x301 = INT16_MIN;
	int64_t x302 = INT64_MIN;
	static int64_t x304 = -67684154849LL;
	volatile int32_t t72 = 22;

    t72 = (x301<=(x302&(x303%x304)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x306 = -91;
	uint32_t x307 = 3240U;
	uint64_t x308 = 117230515LLU;
	int32_t t73 = 6372;

    t73 = (x305<=(x306&(x307%x308)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x309 = INT16_MAX;
	int16_t x310 = 18;
	int32_t x311 = INT32_MIN;
	int8_t x312 = 3;
	volatile int32_t t74 = -3332;

    t74 = (x309<=(x310&(x311%x312)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x313 = -1;
	uint64_t x314 = UINT64_MAX;
	static uint32_t x315 = 555U;
	volatile int32_t x316 = INT32_MIN;
	int32_t t75 = 5038;

    t75 = (x313<=(x314&(x315%x316)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x317 = -3;
	uint16_t x319 = 44U;
	volatile int32_t x320 = INT32_MIN;
	volatile int32_t t76 = 1072657342;

    t76 = (x317<=(x318&(x319%x320)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x321 = 6U;
	volatile int32_t x322 = -1;
	volatile uint16_t x323 = UINT16_MAX;
	int32_t t77 = 10644784;

    t77 = (x321<=(x322&(x323%x324)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x325 = UINT16_MAX;
	uint16_t x327 = UINT16_MAX;
	volatile int16_t x328 = INT16_MIN;
	int32_t t78 = -427049;

    t78 = (x325<=(x326&(x327%x328)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x330 = -4989;
	volatile int64_t x331 = INT64_MIN;
	uint8_t x332 = 25U;
	static volatile int32_t t79 = -1;

    t79 = (x329<=(x330&(x331%x332)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x334 = 79U;
	int16_t x335 = INT16_MIN;
	volatile int64_t x336 = -1LL;

    t80 = (x333<=(x334&(x335%x336)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x337 = -1;
	int8_t x338 = INT8_MIN;

    t81 = (x337<=(x338&(x339%x340)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x341 = INT16_MIN;
	int16_t x342 = -3;
	static int64_t x343 = 1821696308723965901LL;
	uint32_t x344 = 64637U;
	int32_t t82 = 129076607;

    t82 = (x341<=(x342&(x343%x344)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x345 = 3674490U;
	uint32_t x346 = UINT32_MAX;
	static int8_t x348 = INT8_MAX;
	int32_t t83 = -10393127;

    t83 = (x345<=(x346&(x347%x348)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x349 = UINT8_MAX;
	uint64_t x350 = 4LLU;
	uint8_t x351 = UINT8_MAX;
	int32_t x352 = 8539389;
	int32_t t84 = 1399588;

    t84 = (x349<=(x350&(x351%x352)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x353 = INT64_MAX;
	int8_t x354 = -1;
	int8_t x355 = -1;

    t85 = (x353<=(x354&(x355%x356)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x357 = 1168997428LLU;
	uint8_t x358 = 52U;
	static int32_t x359 = INT32_MAX;
	volatile uint16_t x360 = UINT16_MAX;
	volatile int32_t t86 = 53851;

    t86 = (x357<=(x358&(x359%x360)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x361 = 14U;
	int8_t x362 = INT8_MAX;
	int64_t x363 = INT64_MAX;
	static volatile int16_t x364 = INT16_MIN;
	int32_t t87 = 23;

    t87 = (x361<=(x362&(x363%x364)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x365 = 20668871647LLU;
	static volatile uint64_t x366 = UINT64_MAX;
	int64_t x368 = -366305876LL;
	int32_t t88 = -59;

    t88 = (x365<=(x366&(x367%x368)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x370 = 1585379089650149776LLU;
	volatile int16_t x372 = -1;
	int32_t t89 = 161;

    t89 = (x369<=(x370&(x371%x372)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x375 = -33;
	uint8_t x376 = UINT8_MAX;

    t90 = (x373<=(x374&(x375%x376)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x377 = 66166040398LLU;
	static int32_t x378 = INT32_MIN;
	uint64_t x379 = 221788930LLU;
	int32_t t91 = -2812;

    t91 = (x377<=(x378&(x379%x380)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x381 = UINT32_MAX;
	int32_t x382 = INT32_MIN;
	int16_t x383 = -8994;
	int8_t x384 = INT8_MIN;
	volatile int32_t t92 = -17171;

    t92 = (x381<=(x382&(x383%x384)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x385 = -26645276;
	int64_t x386 = INT64_MIN;
	static int64_t x388 = 3182609LL;
	int32_t t93 = -116643393;

    t93 = (x385<=(x386&(x387%x388)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x389 = 236505031604821629LL;
	uint16_t x390 = UINT16_MAX;
	int32_t t94 = -61;

    t94 = (x389<=(x390&(x391%x392)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x393 = UINT16_MAX;
	int64_t x394 = -965368180497LL;
	int64_t x395 = INT64_MIN;
	volatile int32_t t95 = -990187083;

    t95 = (x393<=(x394&(x395%x396)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x397 = INT64_MAX;
	uint64_t x399 = 4150609897LLU;
	uint32_t x400 = 1973U;
	volatile int32_t t96 = -3584;

    t96 = (x397<=(x398&(x399%x400)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x401 = -1;
	int32_t x402 = INT32_MIN;
	static uint32_t x403 = UINT32_MAX;
	volatile int64_t x404 = 2196800695926126768LL;
	int32_t t97 = -123527835;

    t97 = (x401<=(x402&(x403%x404)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x405 = -1;
	int64_t x406 = INT64_MIN;
	int32_t x407 = INT32_MAX;
	int64_t x408 = -463135LL;
	int32_t t98 = -1;

    t98 = (x405<=(x406&(x407%x408)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x409 = 1U;
	uint32_t x410 = 997992U;
	int8_t x411 = INT8_MAX;
	int32_t t99 = 29;

    t99 = (x409<=(x410&(x411%x412)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int32_t x413 = INT32_MAX;
	volatile int64_t x414 = -2261361LL;
	int16_t x415 = INT16_MAX;
	int64_t x416 = -10LL;
	int32_t t100 = -157;

    t100 = (x413<=(x414&(x415%x416)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x417 = INT32_MIN;
	int32_t x418 = -1;
	int64_t x419 = INT64_MAX;
	static volatile int32_t t101 = -238;

    t101 = (x417<=(x418&(x419%x420)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x421 = 79890223;
	uint32_t x422 = 60U;
	int16_t x424 = -1;
	volatile int32_t t102 = -806108;

    t102 = (x421<=(x422&(x423%x424)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x426 = INT32_MIN;
	static int32_t x427 = -807086287;
	int32_t t103 = -107472748;

    t103 = (x425<=(x426&(x427%x428)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x430 = 23U;
	uint64_t x431 = UINT64_MAX;
	uint16_t x432 = 1U;
	int32_t t104 = -120244;

    t104 = (x429<=(x430&(x431%x432)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x434 = -1LL;
	static int16_t x435 = -7;
	volatile uint8_t x436 = 24U;

    t105 = (x433<=(x434&(x435%x436)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x437 = 49LLU;
	uint64_t x439 = UINT64_MAX;
	int16_t x440 = -1;
	volatile int32_t t106 = -1;

    t106 = (x437<=(x438&(x439%x440)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x442 = 1775LL;
	int16_t x443 = INT16_MIN;
	int16_t x444 = -1;
	int32_t t107 = 0;

    t107 = (x441<=(x442&(x443%x444)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x445 = -21906473LL;
	static uint16_t x446 = 31U;
	uint64_t x447 = 122913175185LLU;
	int8_t x448 = -1;
	volatile int32_t t108 = 3293911;

    t108 = (x445<=(x446&(x447%x448)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x449 = 4356;
	int64_t x450 = INT64_MIN;
	volatile int32_t x451 = -27371;
	volatile uint8_t x452 = 17U;

    t109 = (x449<=(x450&(x451%x452)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x456 = 1U;
	int32_t t110 = -60918567;

    t110 = (x453<=(x454&(x455%x456)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x457 = 21575U;
	uint8_t x458 = UINT8_MAX;
	volatile uint8_t x459 = UINT8_MAX;
	static uint64_t x460 = UINT64_MAX;
	int32_t t111 = 211423;

    t111 = (x457<=(x458&(x459%x460)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x461 = UINT64_MAX;
	int16_t x462 = 0;
	static volatile uint16_t x464 = 10U;
	volatile int32_t t112 = 77;

    t112 = (x461<=(x462&(x463%x464)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x465 = INT64_MIN;
	int64_t x466 = INT64_MIN;
	uint32_t x467 = UINT32_MAX;
	int32_t x468 = INT32_MIN;
	volatile int32_t t113 = -5;

    t113 = (x465<=(x466&(x467%x468)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x469 = INT8_MIN;
	int16_t x470 = -1;
	int32_t x472 = INT32_MIN;
	volatile int32_t t114 = -5577078;

    t114 = (x469<=(x470&(x471%x472)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x473 = -1;
	static uint64_t x475 = 97988737439LLU;
	int32_t x476 = INT32_MIN;

    t115 = (x473<=(x474&(x475%x476)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x477 = 21855U;
	volatile int8_t x479 = 0;
	int16_t x480 = -1;

    t116 = (x477<=(x478&(x479%x480)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x481 = 123622U;
	int64_t x482 = INT64_MIN;
	volatile uint8_t x483 = 0U;
	volatile int8_t x484 = -1;
	int32_t t117 = 29769;

    t117 = (x481<=(x482&(x483%x484)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x485 = INT16_MIN;
	volatile uint8_t x487 = 11U;
	int16_t x488 = INT16_MIN;

    t118 = (x485<=(x486&(x487%x488)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x489 = INT32_MIN;
	uint64_t x490 = 68019141503423LLU;
	int16_t x491 = INT16_MIN;
	static int8_t x492 = -14;

    t119 = (x489<=(x490&(x491%x492)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x493 = UINT8_MAX;
	int16_t x494 = INT16_MAX;
	volatile int8_t x495 = INT8_MIN;
	volatile int64_t x496 = 510348952611586939LL;
	int32_t t120 = 9017;

    t120 = (x493<=(x494&(x495%x496)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x497 = INT16_MAX;
	static int64_t x498 = 215843767LL;
	volatile int16_t x499 = -25;

    t121 = (x497<=(x498&(x499%x500)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x501 = -1LL;
	int16_t x504 = INT16_MIN;
	int32_t t122 = 36444;

    t122 = (x501<=(x502&(x503%x504)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x505 = INT16_MAX;
	uint64_t x506 = 3463649449863LLU;
	int32_t t123 = -1671823;

    t123 = (x505<=(x506&(x507%x508)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x509 = UINT32_MAX;
	int8_t x510 = -5;
	static int8_t x511 = 1;
	volatile int32_t x512 = INT32_MIN;
	int32_t t124 = -29843652;

    t124 = (x509<=(x510&(x511%x512)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x514 = 198325108U;
	static uint8_t x515 = UINT8_MAX;
	static int64_t x516 = -1LL;
	static volatile int32_t t125 = 0;

    t125 = (x513<=(x514&(x515%x516)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x517 = INT16_MAX;
	volatile int16_t x518 = 253;
	volatile uint32_t x519 = 0U;
	uint8_t x520 = 78U;
	static int32_t t126 = -285;

    t126 = (x517<=(x518&(x519%x520)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x521 = UINT8_MAX;
	int64_t x522 = INT64_MAX;
	int8_t x523 = INT8_MAX;
	int32_t t127 = -1026635;

    t127 = (x521<=(x522&(x523%x524)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x526 = 32065LLU;
	static int16_t x527 = INT16_MIN;
	int16_t x528 = 1;
	static volatile int32_t t128 = -115;

    t128 = (x525<=(x526&(x527%x528)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x529 = 0;
	uint16_t x530 = 204U;
	int16_t x531 = INT16_MAX;
	volatile int32_t t129 = -66;

    t129 = (x529<=(x530&(x531%x532)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int32_t x533 = -1804977;
	static int32_t x534 = INT32_MAX;
	int32_t x535 = 5529;
	static volatile int32_t x536 = INT32_MIN;
	int32_t t130 = -314502;

    t130 = (x533<=(x534&(x535%x536)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x537 = UINT32_MAX;
	volatile int16_t x538 = INT16_MIN;
	int16_t x539 = INT16_MIN;
	int64_t x540 = 1319594357LL;
	int32_t t131 = -347413;

    t131 = (x537<=(x538&(x539%x540)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x541 = UINT8_MAX;
	static uint16_t x542 = 1132U;
	int64_t x543 = -186272787LL;
	volatile int32_t t132 = -262;

    t132 = (x541<=(x542&(x543%x544)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x545 = INT8_MIN;
	int32_t x547 = -1;
	uint16_t x548 = UINT16_MAX;
	int32_t t133 = 0;

    t133 = (x545<=(x546&(x547%x548)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x549 = 16U;
	uint32_t x550 = 1508521138U;
	int32_t x551 = -1;
	static uint16_t x552 = UINT16_MAX;
	static volatile int32_t t134 = -617;

    t134 = (x549<=(x550&(x551%x552)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x553 = UINT32_MAX;
	int16_t x554 = INT16_MIN;
	int8_t x555 = -1;
	int64_t x556 = INT64_MIN;
	volatile int32_t t135 = 1;

    t135 = (x553<=(x554&(x555%x556)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x557 = 124978U;
	volatile uint32_t x560 = 157453621U;
	volatile int32_t t136 = 278;

    t136 = (x557<=(x558&(x559%x560)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x562 = UINT16_MAX;
	uint8_t x563 = 15U;
	uint64_t x564 = 11371622447161LLU;
	static int32_t t137 = -246;

    t137 = (x561<=(x562&(x563%x564)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x566 = 3147LLU;
	int64_t x567 = INT64_MAX;
	uint8_t x568 = 2U;
	volatile int32_t t138 = 1;

    t138 = (x565<=(x566&(x567%x568)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x569 = INT64_MIN;
	int16_t x570 = INT16_MAX;
	static int64_t x571 = INT64_MIN;
	int8_t x572 = INT8_MAX;
	volatile int32_t t139 = 56;

    t139 = (x569<=(x570&(x571%x572)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x573 = 18118U;
	uint16_t x575 = 0U;
	static uint32_t x576 = 9409022U;
	volatile int32_t t140 = 11;

    t140 = (x573<=(x574&(x575%x576)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x577 = UINT64_MAX;
	static int8_t x578 = INT8_MIN;
	uint64_t x579 = 171299358927508954LLU;
	uint16_t x580 = UINT16_MAX;
	int32_t t141 = -7999968;

    t141 = (x577<=(x578&(x579%x580)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x581 = -1;
	int16_t x582 = -1;
	static int8_t x583 = 2;
	int32_t t142 = -24;

    t142 = (x581<=(x582&(x583%x584)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x585 = UINT32_MAX;
	int16_t x586 = INT16_MIN;
	int16_t x588 = INT16_MIN;
	int32_t t143 = 21629;

    t143 = (x585<=(x586&(x587%x588)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x589 = 3U;
	int64_t x590 = 35LL;
	uint8_t x591 = UINT8_MAX;
	int16_t x592 = INT16_MIN;
	int32_t t144 = 27;

    t144 = (x589<=(x590&(x591%x592)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x593 = INT8_MIN;
	int64_t x594 = INT64_MIN;
	int8_t x595 = INT8_MAX;
	int64_t x596 = INT64_MAX;
	int32_t t145 = -648490;

    t145 = (x593<=(x594&(x595%x596)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x597 = INT16_MIN;
	static int32_t x598 = -1;
	int32_t x599 = 1022707802;
	static volatile int32_t t146 = -2881813;

    t146 = (x597<=(x598&(x599%x600)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x602 = 245U;
	int32_t t147 = -2359347;

    t147 = (x601<=(x602&(x603%x604)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x605 = 5LL;
	int16_t x606 = INT16_MAX;

    t148 = (x605<=(x606&(x607%x608)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x609 = 339U;
	volatile int32_t t149 = -8608;

    t149 = (x609<=(x610&(x611%x612)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x613 = -1;
	int64_t x614 = INT64_MIN;
	uint8_t x616 = 16U;

    t150 = (x613<=(x614&(x615%x616)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x617 = -182100;
	static int32_t x618 = -12396486;
	volatile int32_t x619 = 0;
	int8_t x620 = -1;
	int32_t t151 = 20798904;

    t151 = (x617<=(x618&(x619%x620)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x621 = 1595601U;
	volatile int8_t x623 = -1;
	uint8_t x624 = UINT8_MAX;
	int32_t t152 = -3884242;

    t152 = (x621<=(x622&(x623%x624)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x625 = UINT16_MAX;
	int32_t x627 = 38580596;

    t153 = (x625<=(x626&(x627%x628)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x629 = -1LL;
	uint16_t x630 = 25327U;
	uint8_t x631 = 16U;
	static volatile int64_t x632 = INT64_MIN;

    t154 = (x629<=(x630&(x631%x632)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x633 = 4118148599LLU;
	int64_t x634 = -2013176030266986540LL;
	volatile uint8_t x635 = UINT8_MAX;

    t155 = (x633<=(x634&(x635%x636)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x637 = -1;
	volatile int8_t x638 = -2;
	static volatile uint16_t x639 = 7U;
	int8_t x640 = INT8_MAX;
	volatile int32_t t156 = 462370361;

    t156 = (x637<=(x638&(x639%x640)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x642 = UINT8_MAX;
	int64_t x643 = -1LL;
	int64_t x644 = INT64_MIN;
	volatile int32_t t157 = -1064314146;

    t157 = (x641<=(x642&(x643%x644)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int64_t x645 = INT64_MIN;
	volatile int64_t x646 = 7422968312102LL;
	int32_t x647 = 0;
	volatile int32_t x648 = INT32_MIN;
	int32_t t158 = 4622;

    t158 = (x645<=(x646&(x647%x648)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x649 = 3U;
	uint32_t x651 = 1740438695U;

    t159 = (x649<=(x650&(x651%x652)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x653 = 2LLU;
	volatile int32_t t160 = -87028;

    t160 = (x653<=(x654&(x655%x656)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x657 = 11578U;
	int64_t x658 = -1LL;
	int32_t x659 = INT32_MAX;
	uint16_t x660 = 400U;
	volatile int32_t t161 = 41328816;

    t161 = (x657<=(x658&(x659%x660)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x661 = INT64_MAX;
	uint32_t x663 = 308U;
	static int8_t x664 = 1;
	int32_t t162 = 306;

    t162 = (x661<=(x662&(x663%x664)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x665 = INT16_MAX;
	volatile uint16_t x666 = UINT16_MAX;
	int8_t x667 = -1;
	static uint32_t x668 = 31U;
	static volatile int32_t t163 = 7350361;

    t163 = (x665<=(x666&(x667%x668)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x669 = 1;
	int16_t x670 = INT16_MIN;
	int16_t x671 = -267;
	int16_t x672 = INT16_MIN;
	int32_t t164 = 1;

    t164 = (x669<=(x670&(x671%x672)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x673 = INT8_MAX;
	int8_t x674 = -1;
	uint8_t x676 = 2U;
	static int32_t t165 = -8570716;

    t165 = (x673<=(x674&(x675%x676)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x677 = INT64_MIN;
	static uint8_t x678 = 4U;
	int32_t x679 = -660362640;

    t166 = (x677<=(x678&(x679%x680)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x681 = INT64_MAX;
	static int64_t x683 = INT64_MIN;
	static uint16_t x684 = 4109U;
	int32_t t167 = -119;

    t167 = (x681<=(x682&(x683%x684)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x686 = INT8_MIN;
	int64_t x687 = INT64_MIN;
	int32_t t168 = -7562101;

    t168 = (x685<=(x686&(x687%x688)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x689 = UINT16_MAX;
	uint32_t x690 = 10U;
	volatile int64_t x692 = -657652022904235332LL;
	static int32_t t169 = 10;

    t169 = (x689<=(x690&(x691%x692)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x693 = INT16_MIN;
	uint16_t x694 = 1290U;
	uint64_t x695 = 10925446268289LLU;
	volatile int32_t t170 = -6426;

    t170 = (x693<=(x694&(x695%x696)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x697 = INT64_MAX;
	int16_t x698 = -1629;
	int8_t x699 = INT8_MIN;
	int8_t x700 = -20;
	static volatile int32_t t171 = 634;

    t171 = (x697<=(x698&(x699%x700)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x701 = 668338265LLU;
	static uint16_t x704 = 31U;
	int32_t t172 = 3;

    t172 = (x701<=(x702&(x703%x704)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x705 = INT64_MIN;
	volatile uint64_t x706 = 3958603509532710713LLU;
	int8_t x707 = -47;
	volatile uint8_t x708 = 30U;
	volatile int32_t t173 = -929133331;

    t173 = (x705<=(x706&(x707%x708)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x709 = INT32_MIN;
	uint32_t x710 = 233614U;
	volatile int64_t x711 = INT64_MIN;
	int32_t t174 = 49160033;

    t174 = (x709<=(x710&(x711%x712)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x713 = 934;
	uint8_t x714 = UINT8_MAX;
	int16_t x716 = -1;

    t175 = (x713<=(x714&(x715%x716)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x717 = UINT8_MAX;
	int32_t x718 = -1;
	static int16_t x719 = INT16_MIN;
	int16_t x720 = INT16_MIN;
	static int32_t t176 = -62;

    t176 = (x717<=(x718&(x719%x720)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x722 = -1;
	int16_t x724 = 4;

    t177 = (x721<=(x722&(x723%x724)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x725 = INT16_MIN;
	volatile int32_t x726 = INT32_MIN;
	int16_t x728 = -2049;
	int32_t t178 = -653490598;

    t178 = (x725<=(x726&(x727%x728)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x729 = INT16_MAX;
	static int16_t x730 = INT16_MIN;
	uint32_t x731 = UINT32_MAX;
	int8_t x732 = 2;
	volatile int32_t t179 = 79249559;

    t179 = (x729<=(x730&(x731%x732)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x733 = -1LL;
	int32_t x734 = INT32_MAX;
	int64_t x735 = 1822600912438711LL;
	int32_t x736 = -1;
	volatile int32_t t180 = 7368;

    t180 = (x733<=(x734&(x735%x736)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x737 = INT16_MIN;
	int16_t x738 = 111;
	int8_t x739 = INT8_MIN;
	uint32_t x740 = 6566U;

    t181 = (x737<=(x738&(x739%x740)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x741 = INT16_MIN;
	int32_t x742 = INT32_MIN;
	static int8_t x743 = INT8_MAX;
	int8_t x744 = INT8_MIN;
	int32_t t182 = 1793;

    t182 = (x741<=(x742&(x743%x744)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x745 = INT16_MAX;
	int16_t x746 = -1226;
	uint32_t x747 = 4U;

    t183 = (x745<=(x746&(x747%x748)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x749 = INT64_MIN;
	uint64_t x750 = UINT64_MAX;
	volatile int16_t x751 = INT16_MAX;
	uint64_t x752 = 1197420052LLU;
	volatile int32_t t184 = -21737;

    t184 = (x749<=(x750&(x751%x752)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x753 = -7;
	int32_t x754 = INT32_MIN;
	int8_t x755 = INT8_MIN;

    t185 = (x753<=(x754&(x755%x756)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x757 = 109U;
	int16_t x758 = INT16_MIN;
	uint64_t x759 = 99785953672072LLU;
	int16_t x760 = INT16_MIN;

    t186 = (x757<=(x758&(x759%x760)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x761 = -1;
	uint64_t x762 = UINT64_MAX;
	int16_t x763 = INT16_MIN;
	int8_t x764 = INT8_MIN;

    t187 = (x761<=(x762&(x763%x764)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint32_t x765 = 79U;
	uint32_t x766 = UINT32_MAX;
	int32_t x767 = INT32_MIN;
	static volatile int32_t x768 = -1;
	int32_t t188 = -14244;

    t188 = (x765<=(x766&(x767%x768)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x773 = 16691;
	int16_t x774 = INT16_MIN;
	uint64_t x775 = 7835399059120LLU;
	volatile int32_t t189 = -21616929;

    t189 = (x773<=(x774&(x775%x776)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x777 = 9887;
	int32_t x779 = INT32_MIN;
	int32_t x780 = 29;
	int32_t t190 = 18;

    t190 = (x777<=(x778&(x779%x780)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x781 = -9;
	int16_t x782 = -1;
	uint8_t x783 = 126U;
	uint16_t x784 = 881U;
	volatile int32_t t191 = -4;

    t191 = (x781<=(x782&(x783%x784)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x785 = 1;
	int32_t x786 = 7883;
	int64_t x787 = INT64_MAX;
	int16_t x788 = INT16_MIN;
	volatile int32_t t192 = 480507299;

    t192 = (x785<=(x786&(x787%x788)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x789 = 37U;
	int32_t x790 = 308843112;
	uint32_t x791 = UINT32_MAX;
	int8_t x792 = 44;

    t193 = (x789<=(x790&(x791%x792)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x793 = INT8_MIN;
	int32_t x794 = INT32_MIN;
	uint8_t x795 = 3U;
	volatile uint64_t x796 = 23505673160LLU;
	volatile int32_t t194 = -47449;

    t194 = (x793<=(x794&(x795%x796)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x797 = INT32_MIN;
	volatile int16_t x798 = 3033;
	volatile int32_t t195 = -81;

    t195 = (x797<=(x798&(x799%x800)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x802 = 311045437275139402LL;
	uint16_t x803 = UINT16_MAX;
	int8_t x804 = -1;

    t196 = (x801<=(x802&(x803%x804)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x805 = -1;
	static int64_t x806 = 13862199611936101LL;
	uint32_t x807 = 321812538U;
	static uint64_t x808 = 56436265318485191LLU;
	volatile int32_t t197 = -12657520;

    t197 = (x805<=(x806&(x807%x808)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x809 = 9U;
	int64_t x810 = -1LL;
	uint64_t x811 = 7635LLU;
	int8_t x812 = INT8_MAX;
	int32_t t198 = 11574197;

    t198 = (x809<=(x810&(x811%x812)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x813 = 39U;
	int64_t x814 = -181972292475519LL;
	uint64_t x816 = 1875065343295LLU;
	volatile int32_t t199 = 587222037;

    t199 = (x813<=(x814&(x815%x816)));

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

