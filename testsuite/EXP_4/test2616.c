
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

volatile int32_t x8 = INT32_MAX;
int8_t x10 = INT8_MAX;
uint32_t x16 = 14141464U;
volatile int8_t x17 = INT8_MIN;
int16_t x18 = INT16_MIN;
volatile uint32_t x19 = 1576793U;
int32_t x20 = 6149183;
volatile uint32_t t4 = 38U;
uint8_t x25 = 25U;
uint64_t x26 = 347115305LLU;
static uint64_t x27 = UINT64_MAX;
static volatile uint64_t t6 = 1539LLU;
int8_t x29 = -1;
int16_t x38 = INT16_MIN;
uint16_t x47 = 111U;
int32_t x51 = -33391201;
int32_t x58 = INT32_MAX;
int64_t x67 = -2LL;
volatile int64_t t15 = -19480LL;
volatile int8_t x70 = INT8_MIN;
int64_t x79 = 26835331951483LL;
uint32_t x80 = 599779805U;
int16_t x82 = -876;
int64_t x84 = INT64_MIN;
uint32_t t20 = 7941U;
int8_t x89 = -2;
volatile int16_t x96 = INT16_MAX;
volatile uint64_t t22 = 3998641LLU;
int32_t x101 = INT32_MIN;
uint64_t t24 = 443308288242940LLU;
int16_t x105 = INT16_MIN;
static uint16_t x118 = 605U;
volatile int64_t t31 = -213LL;
uint64_t t33 = 428LLU;
int32_t x141 = INT32_MIN;
volatile uint16_t x146 = 10687U;
int32_t x148 = INT32_MIN;
uint32_t x151 = 7409U;
uint16_t x157 = UINT16_MAX;
int8_t x160 = INT8_MAX;
uint32_t t38 = 5U;
uint8_t x176 = UINT8_MAX;
int16_t x179 = INT16_MAX;
int16_t x183 = INT16_MIN;
static uint64_t t45 = 8160554LLU;
volatile int64_t x198 = -14361945200LL;
int16_t x200 = 4;
volatile int64_t t47 = 2LL;
uint8_t x201 = 0U;
int16_t x210 = INT16_MIN;
uint32_t x212 = 72146298U;
volatile int64_t x214 = -743523836LL;
static volatile int16_t x218 = -1;
int16_t x224 = INT16_MIN;
int16_t x226 = INT16_MIN;
int64_t t56 = 9166681120127LL;
int32_t x237 = INT32_MIN;
uint16_t x239 = 2U;
volatile int16_t x242 = INT16_MIN;
int64_t x243 = INT64_MIN;
static volatile int64_t t58 = 503536799LL;
int16_t x245 = INT16_MIN;
int8_t x249 = 0;
int64_t x253 = INT64_MIN;
int64_t x255 = INT64_MAX;
uint16_t x258 = 608U;
uint8_t x268 = UINT8_MAX;
uint8_t x277 = 0U;
int64_t x278 = 338736093467025008LL;
uint32_t x279 = 14845U;
static int64_t x290 = 611878257100126323LL;
int32_t x293 = 2945745;
static int64_t x309 = -1LL;
volatile int64_t t74 = -1869436689051422404LL;
int64_t x317 = INT64_MIN;
static int32_t x323 = INT32_MIN;
int64_t x336 = INT64_MAX;
uint8_t x340 = 33U;
static volatile uint32_t t81 = 674216U;
int64_t x341 = INT64_MIN;
int8_t x353 = INT8_MAX;
uint64_t x354 = 10907968LLU;
int32_t x359 = INT32_MIN;
int16_t x366 = -1;
volatile int64_t t88 = -6459267796038134LL;
uint8_t x376 = UINT8_MAX;
volatile uint32_t x378 = 396U;
uint64_t x379 = 5334896128LLU;
int8_t x394 = INT8_MIN;
uint32_t x402 = 337U;
uint8_t x410 = 0U;
int64_t x411 = INT64_MIN;
static int8_t x418 = 0;
int16_t x420 = -1;
int8_t x427 = -25;
uint8_t x434 = 3U;
volatile int32_t x441 = INT32_MIN;
static int8_t x442 = INT8_MAX;
int32_t x447 = INT32_MAX;
volatile int64_t t107 = 1569620LL;
int8_t x451 = INT8_MIN;
int64_t x454 = INT64_MAX;
static volatile uint16_t x457 = 0U;
int8_t x459 = INT8_MIN;
int8_t x461 = INT8_MAX;
static int32_t t111 = 199068028;
int64_t x471 = INT64_MAX;
static volatile int64_t t113 = -109521849807103770LL;
int32_t x477 = INT32_MIN;
static int64_t x489 = -1LL;
static int8_t x493 = -1;
static volatile uint64_t x496 = 75882209510731576LLU;
uint64_t t119 = 774469LLU;
static int64_t x498 = -5618000LL;
uint16_t x500 = 23689U;
volatile uint64_t x503 = 54422591171LLU;
volatile int8_t x505 = 60;
volatile uint64_t t123 = 3927057910425LLU;
volatile uint64_t t124 = 410663LLU;
int32_t x518 = INT32_MIN;
static volatile int16_t x519 = -4881;
int16_t x524 = -1;
static int64_t x526 = INT64_MAX;
static int32_t x530 = INT32_MIN;
int64_t x537 = INT64_MIN;
static int32_t x546 = INT32_MIN;
uint64_t x548 = UINT64_MAX;
volatile uint64_t t131 = 391707765LLU;
uint64_t x551 = UINT64_MAX;
static int8_t x559 = INT8_MIN;
volatile uint64_t t134 = 1479171LLU;
uint8_t x564 = 65U;
int8_t x565 = 1;
static int32_t x567 = -42;
volatile int64_t x576 = 288491LL;
uint16_t x582 = 1260U;
int32_t x587 = INT32_MIN;
int32_t x589 = INT32_MIN;
static uint16_t x593 = 22513U;
volatile int64_t x601 = INT64_MIN;
static volatile int32_t x603 = INT32_MIN;
int8_t x611 = -1;
uint64_t t147 = 607319424936085114LLU;
int16_t x617 = -1;
volatile uint64_t t149 = 2486825345061LLU;
volatile uint8_t x627 = 2U;
volatile int64_t x633 = -237255LL;
volatile int32_t x635 = 130596;
volatile uint8_t x637 = UINT8_MAX;
uint64_t t153 = 28809080703221LLU;
static volatile int64_t t154 = 15482196112LL;
uint8_t x648 = UINT8_MAX;
static int16_t x650 = INT16_MAX;
int32_t t156 = 1;
volatile uint64_t x664 = 9914LLU;
volatile int32_t x665 = INT32_MAX;
int16_t x666 = -238;
int16_t x667 = INT16_MIN;
uint8_t x668 = UINT8_MAX;
int16_t x669 = INT16_MIN;
static int32_t t160 = -1548975;
volatile int32_t t162 = -54733665;
uint32_t t163 = 159277380U;
static int64_t x685 = INT64_MAX;
volatile int8_t x689 = INT8_MIN;
int16_t x691 = 1641;
int32_t t165 = 6627;
uint16_t x693 = 0U;
int8_t x696 = 50;
volatile int32_t t167 = 11;
int64_t x704 = -196629484932041LL;
int64_t x715 = -24LL;
static volatile int32_t x719 = -24;
volatile uint64_t x724 = 3493735LLU;
int16_t x725 = 7;
int8_t x728 = INT8_MAX;
int32_t x730 = 434091123;
uint64_t x735 = 15209469486297850LLU;
volatile uint8_t x739 = 62U;
uint8_t x751 = 4U;
uint32_t x752 = 3764545U;
int8_t x755 = -23;
int16_t x774 = -53;
static volatile uint64_t x794 = 3973LLU;
int64_t x804 = -40437859176LL;
volatile int16_t x808 = INT16_MIN;
int8_t x812 = 13;
uint8_t x829 = 1U;
int32_t x834 = -1;
int64_t x835 = 187465LL;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int8_t x2 = 2;
	static uint16_t x3 = 188U;
	static int64_t x4 = -1LL;
	int64_t t0 = -9502100LL;

    t0 = (x1&(x2%(x3^x4)));

    if (t0 != 2LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = 0;
	int32_t x6 = -1;
	uint8_t x7 = 47U;
	volatile int32_t t1 = 7355163;

    t1 = (x5&(x6%(x7^x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	static int64_t x11 = INT64_MAX;
	volatile int8_t x12 = INT8_MAX;
	static volatile int64_t t2 = 119358294703183515LL;

    t2 = (x9&(x10%(x11^x12)));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	volatile uint16_t x14 = 678U;
	int32_t x15 = 2;
	uint32_t t3 = 1U;

    t3 = (x13&(x14%(x15^x16)));

    if (t3 != 678U) { NG(); } else { ; }
	
}

void f4(void) {
    

    t4 = (x17&(x18%(x19^x20)));

    if (t4 != 629760U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	static uint64_t x22 = 1778793934886203407LLU;
	static int8_t x23 = INT8_MIN;
	uint64_t x24 = 11496LLU;
	static uint64_t t5 = 65876702LLU;

    t5 = (x21&(x22%(x23^x24)));

    if (t5 != 1778793934886203407LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x28 = 7U;

    t6 = (x25&(x26%(x27^x28)));

    if (t6 != 9LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = INT8_MAX;
	static int32_t x31 = INT32_MIN;
	int32_t x32 = 0;
	int32_t t7 = -225731238;

    t7 = (x29&(x30%(x31^x32)));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 4085277462LL;
	static int16_t x34 = -12;
	uint32_t x35 = 15374U;
	static int32_t x36 = -2019;
	static volatile int64_t t8 = 1796LL;

    t8 = (x33&(x34%(x35^x36)));

    if (t8 != 8960LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MAX;
	static uint8_t x39 = 7U;
	uint16_t x40 = 6962U;
	int32_t t9 = 186405;

    t9 = (x37&(x38%(x39^x40)));

    if (t9 != 27860) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = INT32_MIN;
	static int16_t x46 = INT16_MAX;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t10 = 162;

    t10 = (x45&(x46%(x47^x48)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = 12311;
	int64_t x50 = -1LL;
	uint16_t x52 = 6355U;
	int64_t t11 = 104668893670891LL;

    t11 = (x49&(x50%(x51^x52)));

    if (t11 != 12311LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x53 = UINT16_MAX;
	int64_t x54 = INT64_MIN;
	int8_t x55 = INT8_MIN;
	int32_t x56 = INT32_MIN;
	volatile int64_t t12 = 1671528612648516739LL;

    t12 = (x53&(x54%(x55^x56)));

    if (t12 != 32768LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x57 = 4281U;
	volatile int64_t x59 = -1LL;
	volatile uint64_t x60 = 4249248124LLU;
	static volatile uint64_t t13 = 203955707278602LLU;

    t13 = (x57&(x58%(x59^x60)));

    if (t13 != 4281LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x61 = UINT64_MAX;
	static int16_t x62 = INT16_MIN;
	uint32_t x63 = 35447U;
	int64_t x64 = -1LL;
	volatile uint64_t t14 = 29LLU;

    t14 = (x61&(x62%(x63^x64)));

    if (t14 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = -1LL;
	int16_t x66 = -1;
	int16_t x68 = 6114;

    t15 = (x65&(x66%(x67^x68)));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x69 = 80U;
	uint8_t x71 = UINT8_MAX;
	static int64_t x72 = INT64_MIN;
	int64_t t16 = 513304061452655LL;

    t16 = (x69&(x70%(x71^x72)));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MIN;
	int64_t x74 = 1381208576996LL;
	int16_t x75 = -1;
	int32_t x76 = INT32_MAX;
	volatile int64_t t17 = -1LL;

    t17 = (x73&(x74%(x75^x76)));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = 18;
	uint64_t x78 = UINT64_MAX;
	static volatile uint64_t t18 = 5383557585625270321LLU;

    t18 = (x77&(x78%(x79^x80)));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x81 = -1;
	int32_t x83 = INT32_MIN;
	volatile int64_t t19 = -68057920520896LL;

    t19 = (x81&(x82%(x83^x84)));

    if (t19 != -876LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x85 = 1U;
	uint16_t x86 = 76U;
	int32_t x87 = 392088;
	int32_t x88 = INT32_MIN;

    t20 = (x85&(x86%(x87^x88)));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x90 = -12306666;
	volatile int32_t x91 = 3632;
	uint64_t x92 = 2413598718624LLU;
	volatile uint64_t t21 = 3LLU;

    t21 = (x89&(x90%(x91^x92)));

    if (t21 != 82108114614LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x93 = UINT64_MAX;
	static int32_t x94 = INT32_MIN;
	static uint32_t x95 = 120162U;

    t22 = (x93&(x94%(x95^x96)));

    if (t22 != 28429LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x97 = INT32_MAX;
	int16_t x98 = 10100;
	volatile int32_t x99 = INT32_MAX;
	int64_t x100 = -11047LL;
	static volatile int64_t t23 = 1LL;

    t23 = (x97&(x98%(x99^x100)));

    if (t23 != 10100LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x102 = INT16_MIN;
	static int8_t x103 = -1;
	uint64_t x104 = 1952LLU;

    t24 = (x101&(x102%(x103^x104)));

    if (t24 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x106 = 0U;
	static uint64_t x107 = 3820267146432185LLU;
	volatile uint32_t x108 = 2440256U;
	volatile uint64_t t25 = 41939112367527LLU;

    t25 = (x105&(x106%(x107^x108)));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = -1;
	int64_t x110 = -7891690174779LL;
	static int32_t x111 = INT32_MAX;
	uint8_t x112 = 17U;
	volatile int64_t t26 = 172190LL;

    t26 = (x109&(x110%(x111^x112)));

    if (t26 != -1835318159LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = 658306987275LL;
	static uint8_t x114 = UINT8_MAX;
	uint64_t x115 = 13471492LLU;
	int32_t x116 = INT32_MIN;
	uint64_t t27 = 339402377LLU;

    t27 = (x113&(x114%(x115^x116)));

    if (t27 != 11LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x117 = UINT64_MAX;
	volatile int32_t x119 = 5;
	int32_t x120 = -1460157;
	static uint64_t t28 = 24LLU;

    t28 = (x117&(x118%(x119^x120)));

    if (t28 != 605LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = 47725832149406LL;
	uint64_t x122 = 1288LLU;
	int64_t x123 = INT64_MIN;
	int32_t x124 = INT32_MAX;
	static uint64_t t29 = 49093368957277LLU;

    t29 = (x121&(x122%(x123^x124)));

    if (t29 != 264LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x125 = UINT16_MAX;
	uint16_t x126 = 31738U;
	int32_t x127 = INT32_MAX;
	static int16_t x128 = -1;
	volatile int32_t t30 = -717998;

    t30 = (x125&(x126%(x127^x128)));

    if (t30 != 31738) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x129 = INT8_MIN;
	static int8_t x130 = -6;
	static int64_t x131 = 5386856892062LL;
	static volatile int32_t x132 = -2203;

    t31 = (x129&(x130%(x131^x132)));

    if (t31 != -128LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = -8;
	static int16_t x134 = INT16_MAX;
	int64_t x135 = 15507890663463202LL;
	int64_t x136 = INT64_MIN;
	volatile int64_t t32 = -130812732LL;

    t32 = (x133&(x134%(x135^x136)));

    if (t32 != 32760LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x137 = 176922877LLU;
	static int8_t x138 = INT8_MAX;
	int32_t x139 = 13453;
	static int32_t x140 = INT32_MAX;

    t33 = (x137&(x138%(x139^x140)));

    if (t33 != 125LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x142 = UINT32_MAX;
	uint64_t x143 = 9263010464810712LLU;
	uint8_t x144 = 2U;
	uint64_t t34 = 3LLU;

    t34 = (x141&(x142%(x143^x144)));

    if (t34 != 2147483648LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x145 = UINT32_MAX;
	uint32_t x147 = 4861U;
	static volatile uint32_t t35 = 138762U;

    t35 = (x145&(x146%(x147^x148)));

    if (t35 != 10687U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x149 = 3U;
	uint16_t x150 = 0U;
	int16_t x152 = INT16_MAX;
	uint32_t t36 = 2292172U;

    t36 = (x149&(x150%(x151^x152)));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x153 = INT16_MAX;
	static uint64_t x154 = 540258028672932LLU;
	int16_t x155 = -7210;
	static uint32_t x156 = UINT32_MAX;
	static volatile uint64_t t37 = 276960327787970664LLU;

    t37 = (x153&(x154%(x155^x156)));

    if (t37 != 1188LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x158 = 1982;
	static uint32_t x159 = UINT32_MAX;

    t38 = (x157&(x158%(x159^x160)));

    if (t38 != 1982U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x161 = 136883744209LLU;
	volatile int64_t x162 = INT64_MIN;
	uint64_t x163 = 51350LLU;
	int64_t x164 = 2075101LL;
	static uint64_t t39 = 297658928LLU;

    t39 = (x161&(x162%(x163^x164)));

    if (t39 != 534929LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x169 = INT16_MIN;
	int64_t x170 = INT64_MIN;
	int16_t x171 = INT16_MIN;
	volatile uint8_t x172 = 0U;
	volatile int64_t t40 = -11LL;

    t40 = (x169&(x170%(x171^x172)));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = 13;
	int16_t x174 = 139;
	int8_t x175 = INT8_MIN;
	int32_t t41 = -1;

    t41 = (x173&(x174%(x175^x176)));

    if (t41 != 8) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x177 = -1;
	uint32_t x178 = 0U;
	int8_t x180 = INT8_MIN;
	volatile uint32_t t42 = 71847U;

    t42 = (x177&(x178%(x179^x180)));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x181 = -156202970182450369LL;
	volatile uint8_t x182 = UINT8_MAX;
	uint16_t x184 = 15U;
	volatile int64_t t43 = -3506697952683621244LL;

    t43 = (x181&(x182%(x183^x184)));

    if (t43 != 63LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x185 = 1U;
	int8_t x186 = INT8_MIN;
	uint32_t x187 = UINT32_MAX;
	static int8_t x188 = INT8_MIN;
	volatile uint32_t t44 = 61U;

    t44 = (x185&(x186%(x187^x188)));

    if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x189 = UINT8_MAX;
	int8_t x190 = INT8_MIN;
	uint64_t x191 = 4064600577LLU;
	static uint32_t x192 = UINT32_MAX;

    t45 = (x189&(x190%(x191^x192)));

    if (t45 != 56LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x193 = UINT16_MAX;
	int8_t x194 = INT8_MIN;
	int16_t x195 = INT16_MAX;
	volatile uint8_t x196 = 11U;
	int32_t t46 = 11697;

    t46 = (x193&(x194%(x195^x196)));

    if (t46 != 65408) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x197 = INT8_MAX;
	static int16_t x199 = INT16_MAX;

    t47 = (x197&(x198%(x199^x200)));

    if (t47 != 98LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x202 = INT8_MIN;
	int8_t x203 = -1;
	static int8_t x204 = INT8_MIN;
	volatile int32_t t48 = 8893425;

    t48 = (x201&(x202%(x203^x204)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x205 = INT16_MIN;
	volatile uint32_t x206 = UINT32_MAX;
	int64_t x207 = INT64_MIN;
	int8_t x208 = INT8_MIN;
	volatile int64_t t49 = 2522LL;

    t49 = (x205&(x206%(x207^x208)));

    if (t49 != 4294934528LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x209 = UINT64_MAX;
	uint32_t x211 = UINT32_MAX;
	uint64_t t50 = 22696880LLU;

    t50 = (x209&(x210%(x211^x212)));

    if (t50 != 72113531LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x213 = -12272346LL;
	static volatile uint32_t x215 = 1U;
	volatile int8_t x216 = 0;
	int64_t t51 = 700983LL;

    t51 = (x213&(x214%(x215^x216)));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x217 = INT8_MIN;
	int16_t x219 = 2180;
	static int16_t x220 = INT16_MIN;
	int32_t t52 = -3;

    t52 = (x217&(x218%(x219^x220)));

    if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x221 = INT32_MAX;
	int16_t x222 = -1;
	int64_t x223 = -34803538738257058LL;
	volatile int64_t t53 = -88383LL;

    t53 = (x221&(x222%(x223^x224)));

    if (t53 != 2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x225 = UINT8_MAX;
	int16_t x227 = INT16_MAX;
	int8_t x228 = -7;
	volatile int32_t t54 = -187948090;

    t54 = (x225&(x226%(x227^x228)));

    if (t54 != 250) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x229 = INT64_MIN;
	static int32_t x230 = INT32_MAX;
	uint16_t x231 = 10194U;
	int8_t x232 = INT8_MAX;
	int64_t t55 = -512362270870LL;

    t55 = (x229&(x230%(x231^x232)));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = 6;
	static int16_t x234 = INT16_MAX;
	int64_t x235 = INT64_MAX;
	int64_t x236 = -128636510LL;

    t56 = (x233&(x234%(x235^x236)));

    if (t56 != 6LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x238 = 103U;
	static int8_t x240 = -56;
	volatile int32_t t57 = 1797;

    t57 = (x237&(x238%(x239^x240)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x241 = 16U;
	int8_t x244 = INT8_MAX;

    t58 = (x241&(x242%(x243^x244)));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint8_t x246 = UINT8_MAX;
	static uint32_t x247 = UINT32_MAX;
	int16_t x248 = INT16_MIN;
	uint32_t t59 = 232665458U;

    t59 = (x245&(x246%(x247^x248)));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x250 = 130066104283LLU;
	int64_t x251 = INT64_MIN;
	uint8_t x252 = 1U;
	uint64_t t60 = 14LLU;

    t60 = (x249&(x250%(x251^x252)));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x254 = -1;
	volatile uint8_t x256 = 1U;
	volatile int64_t t61 = INT64_MIN;

    t61 = (x253&(x254%(x255^x256)));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x257 = 642517100883941LLU;
	int64_t x259 = INT64_MAX;
	static int64_t x260 = -650LL;
	uint64_t t62 = 96622LLU;

    t62 = (x257&(x258%(x259^x260)));

    if (t62 != 608LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x261 = INT16_MIN;
	static uint16_t x262 = 485U;
	uint16_t x263 = UINT16_MAX;
	static uint32_t x264 = UINT32_MAX;
	volatile uint32_t t63 = 460131U;

    t63 = (x261&(x262%(x263^x264)));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x265 = 0;
	int8_t x266 = -1;
	uint8_t x267 = 121U;
	volatile int32_t t64 = -73611011;

    t64 = (x265&(x266%(x267^x268)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x269 = INT64_MIN;
	static int64_t x270 = INT64_MAX;
	static volatile uint16_t x271 = 3U;
	int16_t x272 = INT16_MIN;
	int64_t t65 = -294315893389473LL;

    t65 = (x269&(x270%(x271^x272)));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x273 = -1LL;
	static int16_t x274 = -1;
	int16_t x275 = INT16_MIN;
	int32_t x276 = INT32_MIN;
	volatile int64_t t66 = -1LL;

    t66 = (x273&(x274%(x275^x276)));

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x280 = 12226804749LLU;
	uint64_t t67 = 252LLU;

    t67 = (x277&(x278%(x279^x280)));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x285 = INT16_MIN;
	static int8_t x286 = INT8_MIN;
	static volatile int16_t x287 = 4;
	int64_t x288 = INT64_MAX;
	int64_t t68 = 28981LL;

    t68 = (x285&(x286%(x287^x288)));

    if (t68 != -32768LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x289 = INT64_MIN;
	int32_t x291 = 63;
	uint32_t x292 = 45771U;
	volatile int64_t t69 = -759LL;

    t69 = (x289&(x290%(x291^x292)));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x294 = INT8_MIN;
	int64_t x295 = -1LL;
	int32_t x296 = 76;
	static int64_t t70 = 7324286156LL;

    t70 = (x293&(x294%(x295^x296)));

    if (t70 != 2945729LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x297 = 111;
	int8_t x298 = -14;
	int8_t x299 = 0;
	int64_t x300 = 35813638328LL;
	volatile int64_t t71 = 4625LL;

    t71 = (x297&(x298%(x299^x300)));

    if (t71 != 98LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x301 = -1LL;
	volatile uint64_t x302 = UINT64_MAX;
	uint16_t x303 = UINT16_MAX;
	int32_t x304 = -1;
	volatile uint64_t t72 = 6997948LLU;

    t72 = (x301&(x302%(x303^x304)));

    if (t72 != 65535LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x305 = 20799U;
	int64_t x306 = 1307LL;
	uint64_t x307 = 372913305448693LLU;
	static int32_t x308 = INT32_MIN;
	volatile uint64_t t73 = 168LLU;

    t73 = (x305&(x306%(x307^x308)));

    if (t73 != 283LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x310 = INT64_MIN;
	int16_t x311 = INT16_MIN;
	uint16_t x312 = 1U;

    t74 = (x309&(x310%(x311^x312)));

    if (t74 != -8LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x313 = INT32_MAX;
	uint64_t x314 = UINT64_MAX;
	int32_t x315 = INT32_MIN;
	static int16_t x316 = INT16_MAX;
	volatile uint64_t t75 = 4656681991494477072LLU;

    t75 = (x313&(x314%(x315^x316)));

    if (t75 != 2147450880LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x318 = -32;
	static uint8_t x319 = UINT8_MAX;
	uint64_t x320 = 1889334LLU;
	volatile uint64_t t76 = 7271417432LLU;

    t76 = (x317&(x318%(x319^x320)));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x321 = INT16_MIN;
	int8_t x322 = INT8_MAX;
	int16_t x324 = INT16_MIN;
	int32_t t77 = 2409;

    t77 = (x321&(x322%(x323^x324)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x325 = INT32_MAX;
	uint16_t x326 = 27619U;
	static int8_t x327 = INT8_MIN;
	int16_t x328 = 2;
	static volatile int32_t t78 = 70424090;

    t78 = (x325&(x326%(x327^x328)));

    if (t78 != 25) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x329 = INT8_MIN;
	uint64_t x330 = 29989916066LLU;
	uint64_t x331 = 64073193LLU;
	uint8_t x332 = 1U;
	volatile uint64_t t79 = 1439LLU;

    t79 = (x329&(x330%(x331^x332)));

    if (t79 != 3662208LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x333 = -1794149981062711LL;
	uint64_t x334 = 1178911001352LLU;
	static uint16_t x335 = 942U;
	volatile uint64_t t80 = 1LLU;

    t80 = (x333&(x334%(x335^x336)));

    if (t80 != 78996588808LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x337 = UINT32_MAX;
	static volatile uint32_t x338 = UINT32_MAX;
	uint16_t x339 = 52U;

    t81 = (x337&(x338%(x339^x340)));

    if (t81 != 3U) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x342 = INT8_MAX;
	int16_t x343 = 69;
	static volatile uint8_t x344 = 11U;
	int64_t t82 = -4535LL;

    t82 = (x341&(x342%(x343^x344)));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x345 = 76224665U;
	int16_t x346 = INT16_MIN;
	int8_t x347 = 4;
	static int64_t x348 = INT64_MIN;
	volatile int64_t t83 = -2482536697641940LL;

    t83 = (x345&(x346%(x347^x348)));

    if (t83 != 76218368LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x349 = -1;
	int8_t x350 = 0;
	int64_t x351 = 5859966LL;
	int16_t x352 = -3;
	static int64_t t84 = 6816230957597252LL;

    t84 = (x349&(x350%(x351^x352)));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x355 = -1LL;
	volatile int32_t x356 = INT32_MIN;
	uint64_t t85 = 3LLU;

    t85 = (x353&(x354%(x355^x356)));

    if (t85 != 64LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x357 = INT64_MIN;
	int64_t x358 = -133LL;
	uint16_t x360 = UINT16_MAX;
	volatile int64_t t86 = INT64_MIN;

    t86 = (x357&(x358%(x359^x360)));

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x361 = 596U;
	static uint64_t x362 = 115785823799139449LLU;
	uint8_t x363 = 1U;
	int16_t x364 = INT16_MIN;
	uint64_t t87 = 15092792585764287LLU;

    t87 = (x361&(x362%(x363^x364)));

    if (t87 != 80LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x365 = INT8_MAX;
	static volatile int64_t x367 = INT64_MIN;
	volatile int8_t x368 = 17;

    t88 = (x365&(x366%(x367^x368)));

    if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x369 = UINT64_MAX;
	int16_t x370 = -797;
	uint16_t x371 = UINT16_MAX;
	int16_t x372 = INT16_MIN;
	uint64_t t89 = 98544926180352LLU;

    t89 = (x369&(x370%(x371^x372)));

    if (t89 != 18446744073709550819LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x373 = INT16_MAX;
	static int64_t x374 = -1LL;
	int32_t x375 = 1101;
	int64_t t90 = 0LL;

    t90 = (x373&(x374%(x375^x376)));

    if (t90 != 32767LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x377 = -1;
	uint8_t x380 = UINT8_MAX;
	volatile uint64_t t91 = 1188128394458LLU;

    t91 = (x377&(x378%(x379^x380)));

    if (t91 != 396LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x385 = INT8_MIN;
	uint8_t x386 = 93U;
	uint64_t x387 = 201832175731740716LLU;
	volatile int16_t x388 = -1;
	static uint64_t t92 = 29480LLU;

    t92 = (x385&(x386%(x387^x388)));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x389 = INT64_MIN;
	int32_t x390 = -1;
	volatile int32_t x391 = INT32_MAX;
	int8_t x392 = INT8_MIN;
	static volatile int64_t t93 = INT64_MIN;

    t93 = (x389&(x390%(x391^x392)));

    if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x393 = UINT32_MAX;
	int16_t x395 = INT16_MIN;
	int64_t x396 = INT64_MIN;
	static int64_t t94 = 25293988361954422LL;

    t94 = (x393&(x394%(x395^x396)));

    if (t94 != 4294967168LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x397 = 44;
	uint32_t x398 = 7073331U;
	int64_t x399 = 44135342LL;
	int64_t x400 = 477223054236047LL;
	volatile int64_t t95 = 735206830361029LL;

    t95 = (x397&(x398%(x399^x400)));

    if (t95 != 32LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x401 = INT64_MIN;
	int8_t x403 = INT8_MAX;
	uint16_t x404 = 321U;
	volatile int64_t t96 = 27007471874639LL;

    t96 = (x401&(x402%(x403^x404)));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x405 = INT64_MIN;
	volatile int16_t x406 = INT16_MAX;
	uint32_t x407 = 437167U;
	int32_t x408 = -2346;
	int64_t t97 = 386744742LL;

    t97 = (x405&(x406%(x407^x408)));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x409 = INT64_MIN;
	uint32_t x412 = 474795639U;
	int64_t t98 = -96LL;

    t98 = (x409&(x410%(x411^x412)));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x413 = -1LL;
	volatile uint64_t x414 = 2413LLU;
	volatile int16_t x415 = INT16_MAX;
	uint32_t x416 = 2U;
	volatile uint64_t t99 = 2500780209LLU;

    t99 = (x413&(x414%(x415^x416)));

    if (t99 != 2413LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x417 = 260657U;
	static volatile uint64_t x419 = 8011112145LLU;
	volatile uint64_t t100 = 1327113772147LLU;

    t100 = (x417&(x418%(x419^x420)));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x421 = 253U;
	volatile uint16_t x422 = 822U;
	int8_t x423 = INT8_MIN;
	int8_t x424 = INT8_MAX;
	int32_t t101 = 25;

    t101 = (x421&(x422%(x423^x424)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x425 = UINT64_MAX;
	static int32_t x426 = INT32_MIN;
	uint16_t x428 = 1U;
	uint64_t t102 = 50LLU;

    t102 = (x425&(x426%(x427^x428)));

    if (t102 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x429 = INT64_MIN;
	int32_t x430 = 2030088;
	int64_t x431 = INT64_MAX;
	uint32_t x432 = 126746415U;
	int64_t t103 = 34509196244765LL;

    t103 = (x429&(x430%(x431^x432)));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x433 = 2488;
	int64_t x435 = -5061LL;
	static int8_t x436 = INT8_MAX;
	volatile int64_t t104 = 2946159559613163LL;

    t104 = (x433&(x434%(x435^x436)));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x437 = 548016487705033LLU;
	static uint64_t x438 = 133681542LLU;
	int16_t x439 = INT16_MIN;
	static int32_t x440 = INT32_MIN;
	uint64_t t105 = 0LLU;

    t105 = (x437&(x438%(x439^x440)));

    if (t105 != 1343872LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x443 = INT8_MIN;
	volatile int64_t x444 = INT64_MIN;
	volatile int64_t t106 = 3126LL;

    t106 = (x441&(x442%(x443^x444)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x445 = 10063U;
	int64_t x446 = INT64_MIN;
	volatile uint16_t x448 = 15645U;

    t107 = (x445&(x446%(x447^x448)));

    if (t107 != 8264LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x449 = -1;
	uint16_t x450 = 598U;
	uint64_t x452 = 1222692908218763LLU;
	uint64_t t108 = 629557265LLU;

    t108 = (x449&(x450%(x451^x452)));

    if (t108 != 598LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x453 = 230439392LLU;
	uint16_t x455 = UINT16_MAX;
	int64_t x456 = INT64_MAX;
	static uint64_t t109 = 4053LLU;

    t109 = (x453&(x454%(x455^x456)));

    if (t109 != 14816LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x458 = -824;
	int8_t x460 = -1;
	int32_t t110 = 28;

    t110 = (x457&(x458%(x459^x460)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x462 = -1071;
	static int32_t x463 = -1;
	volatile uint8_t x464 = UINT8_MAX;

    t111 = (x461&(x462%(x463^x464)));

    if (t111 != 81) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x465 = 0;
	volatile int32_t x466 = -1;
	int8_t x467 = INT8_MIN;
	int16_t x468 = INT16_MIN;
	static int32_t t112 = 35097;

    t112 = (x465&(x466%(x467^x468)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x469 = 29;
	uint16_t x470 = 7U;
	int16_t x472 = INT16_MAX;

    t113 = (x469&(x470%(x471^x472)));

    if (t113 != 5LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x473 = -1;
	int16_t x474 = 361;
	int8_t x475 = -9;
	uint32_t x476 = 51186028U;
	volatile uint32_t t114 = 12U;

    t114 = (x473&(x474%(x475^x476)));

    if (t114 != 361U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x478 = 9949U;
	int16_t x479 = -1;
	int64_t x480 = INT64_MIN;
	static int64_t t115 = -60327356404662500LL;

    t115 = (x477&(x478%(x479^x480)));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x481 = 3722510535237LL;
	uint16_t x482 = UINT16_MAX;
	static volatile int32_t x483 = 3485;
	volatile uint8_t x484 = 0U;
	static volatile int64_t t116 = 29347LL;

    t116 = (x481&(x482%(x483^x484)));

    if (t116 != 2629LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x485 = 1;
	static int8_t x486 = INT8_MIN;
	volatile int32_t x487 = INT32_MIN;
	static int32_t x488 = -1;
	int32_t t117 = 912892;

    t117 = (x485&(x486%(x487^x488)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x490 = INT32_MAX;
	uint64_t x491 = 17449494LLU;
	volatile uint32_t x492 = 2U;
	uint64_t t118 = 7341892LLU;

    t118 = (x489&(x490%(x491^x492)));

    if (t118 != 1196131LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x494 = -34;
	int16_t x495 = -1;

    t119 = (x493&(x494%(x495^x496)));

    if (t119 != 75882209510731543LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x497 = INT64_MAX;
	int64_t x499 = INT64_MIN;
	volatile int64_t t120 = -1209653947496LL;

    t120 = (x497&(x498%(x499^x500)));

    if (t120 != 9223372036849157808LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x501 = INT16_MIN;
	static uint16_t x502 = UINT16_MAX;
	static int64_t x504 = INT64_MAX;
	volatile uint64_t t121 = 43265917214636LLU;

    t121 = (x501&(x502%(x503^x504)));

    if (t121 != 32768LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x506 = 848227U;
	uint64_t x507 = 835322594LLU;
	uint8_t x508 = 104U;
	volatile uint64_t t122 = 87534429888632LLU;

    t122 = (x505&(x506%(x507^x508)));

    if (t122 != 32LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x509 = INT32_MIN;
	uint64_t x510 = 25778631710713519LLU;
	uint64_t x511 = UINT64_MAX;
	int64_t x512 = 800LL;

    t123 = (x509&(x510%(x511^x512)));

    if (t123 != 25778629933793280LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x513 = UINT64_MAX;
	uint64_t x514 = UINT64_MAX;
	volatile uint16_t x515 = 7663U;
	int64_t x516 = INT64_MIN;

    t124 = (x513&(x514%(x515^x516)));

    if (t124 != 9223372036854768144LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x517 = INT32_MAX;
	volatile int64_t x520 = 3757652506266089936LL;
	volatile int64_t t125 = -996LL;

    t125 = (x517&(x518%(x519^x520)));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x521 = -1;
	int8_t x522 = -1;
	int16_t x523 = INT16_MIN;
	static int32_t t126 = -15200814;

    t126 = (x521&(x522%(x523^x524)));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x525 = INT16_MAX;
	static int64_t x527 = INT64_MAX;
	int32_t x528 = 39527;
	int64_t t127 = -24247735663768LL;

    t127 = (x525&(x526%(x527^x528)));

    if (t127 != 6759LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x529 = 146U;
	volatile uint64_t x531 = UINT64_MAX;
	volatile uint8_t x532 = 0U;
	uint64_t t128 = 1491786702562996LLU;

    t128 = (x529&(x530%(x531^x532)));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x538 = 114964;
	int32_t x539 = INT32_MIN;
	volatile int64_t x540 = -1LL;
	int64_t t129 = 325284002653184LL;

    t129 = (x537&(x538%(x539^x540)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x541 = -1;
	static uint32_t x542 = 40009547U;
	int64_t x543 = INT64_MIN;
	int16_t x544 = 1352;
	volatile int64_t t130 = -101569823270912347LL;

    t130 = (x541&(x542%(x543^x544)));

    if (t130 != 40009547LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x545 = -1;
	volatile int64_t x547 = 264153142070201813LL;

    t131 = (x545&(x546%(x547^x548)));

    if (t131 != 264153139922718166LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x549 = 43U;
	int16_t x550 = INT16_MIN;
	int8_t x552 = INT8_MAX;
	volatile uint64_t t132 = 132774LLU;

    t132 = (x549&(x550%(x551^x552)));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x553 = INT32_MIN;
	int8_t x554 = -1;
	int32_t x555 = 639;
	static uint8_t x556 = 3U;
	volatile int32_t t133 = INT32_MIN;

    t133 = (x553&(x554%(x555^x556)));

    if (t133 != INT32_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x557 = UINT64_MAX;
	static int64_t x558 = INT64_MAX;
	int8_t x560 = -1;

    t134 = (x557&(x558%(x559^x560)));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x561 = 793688985173LLU;
	uint16_t x562 = UINT16_MAX;
	int64_t x563 = INT64_MIN;
	uint64_t t135 = 2211581467220629LLU;

    t135 = (x561&(x562%(x563^x564)));

    if (t135 != 52821LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x566 = INT8_MAX;
	static int16_t x568 = INT16_MIN;
	static int32_t t136 = 2;

    t136 = (x565&(x566%(x567^x568)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x569 = UINT16_MAX;
	int32_t x570 = INT32_MIN;
	static volatile int8_t x571 = INT8_MIN;
	int64_t x572 = INT64_MIN;
	volatile int64_t t137 = -291LL;

    t137 = (x569&(x570%(x571^x572)));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x573 = 8U;
	static int8_t x574 = 22;
	int16_t x575 = -1;
	volatile int64_t t138 = 0LL;

    t138 = (x573&(x574%(x575^x576)));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x577 = 900881;
	int8_t x578 = 0;
	static int8_t x579 = INT8_MIN;
	static int32_t x580 = INT32_MIN;
	int32_t t139 = -5375;

    t139 = (x577&(x578%(x579^x580)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x581 = INT64_MIN;
	int64_t x583 = INT64_MIN;
	static uint8_t x584 = 4U;
	volatile int64_t t140 = 20683707928LL;

    t140 = (x581&(x582%(x583^x584)));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x585 = INT8_MIN;
	static volatile int32_t x586 = -1;
	volatile uint16_t x588 = UINT16_MAX;
	int32_t t141 = -62843;

    t141 = (x585&(x586%(x587^x588)));

    if (t141 != -128) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x590 = INT64_MIN;
	uint16_t x591 = UINT16_MAX;
	int8_t x592 = INT8_MIN;
	int64_t t142 = 3954435470804215LL;

    t142 = (x589&(x590%(x591^x592)));

    if (t142 != -2147483648LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x594 = 25942015;
	static int64_t x595 = -1LL;
	static int16_t x596 = INT16_MAX;
	volatile int64_t t143 = 175822364557937LL;

    t143 = (x593&(x594%(x595^x596)));

    if (t143 != 22513LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x602 = UINT8_MAX;
	int64_t x604 = INT64_MIN;
	int64_t t144 = -1376857009745129258LL;

    t144 = (x601&(x602%(x603^x604)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x605 = INT16_MAX;
	uint32_t x606 = 660603U;
	volatile uint64_t x607 = 68125090LLU;
	static uint32_t x608 = 1U;
	static uint64_t t145 = 41352351251376919LLU;

    t145 = (x605&(x606%(x607^x608)));

    if (t145 != 5243LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x609 = -1LL;
	uint64_t x610 = 104912395237LLU;
	uint8_t x612 = UINT8_MAX;
	volatile uint64_t t146 = 3151135626611LLU;

    t146 = (x609&(x610%(x611^x612)));

    if (t146 != 104912395237LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x613 = INT64_MIN;
	int8_t x614 = -1;
	uint64_t x615 = 6372230825091971247LLU;
	int8_t x616 = -59;

    t147 = (x613&(x614%(x615^x616)));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x618 = UINT16_MAX;
	static uint16_t x619 = 6U;
	static uint16_t x620 = 1U;
	volatile int32_t t148 = 57096;

    t148 = (x617&(x618%(x619^x620)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x621 = 316542755LLU;
	int16_t x622 = -134;
	uint64_t x623 = UINT64_MAX;
	static int8_t x624 = 23;

    t149 = (x621&(x622%(x623^x624)));

    if (t149 != 316542754LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x625 = INT8_MIN;
	uint8_t x626 = 2U;
	static volatile uint32_t x628 = 1417413U;
	volatile uint32_t t150 = 22U;

    t150 = (x625&(x626%(x627^x628)));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x629 = INT8_MIN;
	volatile int16_t x630 = INT16_MAX;
	volatile int8_t x631 = INT8_MIN;
	static volatile int64_t x632 = INT64_MIN;
	int64_t t151 = -53185210LL;

    t151 = (x629&(x630%(x631^x632)));

    if (t151 != 32640LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x634 = 233502U;
	uint16_t x636 = UINT16_MAX;
	int64_t t152 = -52984047LL;

    t152 = (x633&(x634%(x635^x636)));

    if (t152 != 9LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x638 = UINT64_MAX;
	int32_t x639 = 471152;
	static int32_t x640 = INT32_MIN;

    t153 = (x637&(x638%(x639^x640)));

    if (t153 != 143LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x641 = INT64_MIN;
	static uint8_t x642 = 41U;
	uint8_t x643 = 26U;
	volatile int16_t x644 = INT16_MIN;

    t154 = (x641&(x642%(x643^x644)));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x645 = -1;
	int8_t x646 = INT8_MAX;
	int16_t x647 = -1;
	static int32_t t155 = -40143132;

    t155 = (x645&(x646%(x647^x648)));

    if (t155 != 127) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x649 = -14;
	uint16_t x651 = 6840U;
	int16_t x652 = INT16_MIN;

    t156 = (x649&(x650%(x651^x652)));

    if (t156 != 6834) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x657 = INT32_MIN;
	volatile int32_t x658 = INT32_MIN;
	static volatile int64_t x659 = -209LL;
	static volatile uint32_t x660 = 1U;
	static int64_t t157 = 2994580692081LL;

    t157 = (x657&(x658%(x659^x660)));

    if (t157 != -2147483648LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x661 = -1;
	uint32_t x662 = 3300U;
	uint16_t x663 = 38U;
	static uint64_t t158 = 3194382456573565660LLU;

    t158 = (x661&(x662%(x663^x664)));

    if (t158 != 3300LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t t159 = 11637697;

    t159 = (x665&(x666%(x667^x668)));

    if (t159 != 2147483410) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x670 = 28U;
	int8_t x671 = INT8_MIN;
	int16_t x672 = 5;

    t160 = (x669&(x670%(x671^x672)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x673 = INT32_MAX;
	int8_t x674 = INT8_MIN;
	int8_t x675 = -1;
	int8_t x676 = INT8_MAX;
	int32_t t161 = -21;

    t161 = (x673&(x674%(x675^x676)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x677 = 1193;
	int8_t x678 = INT8_MIN;
	static int16_t x679 = INT16_MIN;
	volatile uint16_t x680 = 996U;

    t162 = (x677&(x678%(x679^x680)));

    if (t162 != 1152) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x681 = INT32_MAX;
	uint8_t x682 = 1U;
	uint32_t x683 = 0U;
	int16_t x684 = -1;

    t163 = (x681&(x682%(x683^x684)));

    if (t163 != 1U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x686 = 71LL;
	volatile uint64_t x687 = 315LLU;
	uint8_t x688 = 3U;
	static volatile uint64_t t164 = 310755738588LLU;

    t164 = (x685&(x686%(x687^x688)));

    if (t164 != 71LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x690 = UINT16_MAX;
	int16_t x692 = -1;

    t165 = (x689&(x690%(x691^x692)));

    if (t165 != 1408) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x694 = -110212;
	uint8_t x695 = UINT8_MAX;
	int32_t t166 = 35877;

    t166 = (x693&(x694%(x695^x696)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x697 = 31;
	static volatile int8_t x698 = INT8_MIN;
	uint16_t x699 = 4671U;
	int32_t x700 = INT32_MIN;

    t167 = (x697&(x698%(x699^x700)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x701 = 7;
	volatile int64_t x702 = -131154356054LL;
	volatile int64_t x703 = -7737670008LL;
	volatile int64_t t168 = 386046827265750LL;

    t168 = (x701&(x702%(x703^x704)));

    if (t168 != 2LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x705 = INT64_MIN;
	int64_t x706 = 432720650287LL;
	static volatile uint64_t x707 = 4LLU;
	int32_t x708 = 95145620;
	uint64_t t169 = 480534342917739298LLU;

    t169 = (x705&(x706%(x707^x708)));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x709 = 26;
	uint64_t x710 = 3234LLU;
	volatile int8_t x711 = -1;
	int16_t x712 = 14826;
	volatile uint64_t t170 = 886875LLU;

    t170 = (x709&(x710%(x711^x712)));

    if (t170 != 2LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x713 = -19;
	int32_t x714 = INT32_MIN;
	int8_t x716 = 0;
	static int64_t t171 = 21171917LL;

    t171 = (x713&(x714%(x715^x716)));

    if (t171 != -24LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x717 = -3483;
	volatile int64_t x718 = INT64_MIN;
	int16_t x720 = INT16_MIN;
	static int64_t t172 = -3472871223595LL;

    t172 = (x717&(x718%(x719^x720)));

    if (t172 != -4000LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x721 = 2;
	static int64_t x722 = -753610568LL;
	volatile uint16_t x723 = 2130U;
	uint64_t t173 = 2137540806754648088LLU;

    t173 = (x721&(x722%(x723^x724)));

    if (t173 != 2LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x726 = -17;
	int64_t x727 = -1LL;
	volatile int64_t t174 = 846720009339875535LL;

    t174 = (x725&(x726%(x727^x728)));

    if (t174 != 7LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x729 = 13U;
	static uint8_t x731 = UINT8_MAX;
	static volatile int8_t x732 = INT8_MIN;
	uint32_t t175 = 977U;

    t175 = (x729&(x730%(x731^x732)));

    if (t175 != 12U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x733 = -1LL;
	static uint32_t x734 = 0U;
	int8_t x736 = INT8_MIN;
	uint64_t t176 = 77842LLU;

    t176 = (x733&(x734%(x735^x736)));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x737 = 3U;
	uint8_t x738 = 25U;
	uint8_t x740 = UINT8_MAX;
	int32_t t177 = 4375641;

    t177 = (x737&(x738%(x739^x740)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x745 = 16914984LLU;
	uint32_t x746 = 8754105U;
	uint8_t x747 = 9U;
	static uint16_t x748 = 1792U;
	volatile uint64_t t178 = 969387005454LLU;

    t178 = (x745&(x746%(x747^x748)));

    if (t178 != 8LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x749 = 5U;
	uint8_t x750 = 18U;
	volatile uint32_t t179 = 1U;

    t179 = (x749&(x750%(x751^x752)));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x753 = 4;
	int16_t x754 = -69;
	static int32_t x756 = -1;
	int32_t t180 = -179442193;

    t180 = (x753&(x754%(x755^x756)));

    if (t180 != 4) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x757 = INT32_MAX;
	static int32_t x758 = -787;
	volatile int8_t x759 = INT8_MIN;
	int8_t x760 = 1;
	static volatile int32_t t181 = 52948;

    t181 = (x757&(x758%(x759^x760)));

    if (t181 != 2147483623) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x761 = 41U;
	int32_t x762 = INT32_MAX;
	static int8_t x763 = -1;
	int32_t x764 = 7;
	volatile int32_t t182 = -8158;

    t182 = (x761&(x762%(x763^x764)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x765 = 62789326504LL;
	static volatile uint64_t x766 = 1343129433660LLU;
	uint16_t x767 = 417U;
	uint32_t x768 = 52748U;
	uint64_t t183 = 29539123301LLU;

    t183 = (x765&(x766%(x767^x768)));

    if (t183 != 1704LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x773 = -1;
	uint16_t x775 = 2U;
	uint64_t x776 = 244036839538LLU;
	volatile uint64_t t184 = 48587534139LLU;

    t184 = (x773&(x774%(x775^x776)));

    if (t184 != 105293830171LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x777 = INT64_MAX;
	static int32_t x778 = INT32_MIN;
	uint16_t x779 = 0U;
	int16_t x780 = -1;
	static int64_t t185 = 3027235099446361LL;

    t185 = (x777&(x778%(x779^x780)));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x781 = INT8_MIN;
	int16_t x782 = -1;
	uint32_t x783 = 0U;
	static int64_t x784 = -1LL;
	volatile int64_t t186 = -2370818167455459LL;

    t186 = (x781&(x782%(x783^x784)));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x789 = INT64_MIN;
	volatile int16_t x790 = -3366;
	int8_t x791 = INT8_MAX;
	int16_t x792 = -1;
	int64_t t187 = INT64_MIN;

    t187 = (x789&(x790%(x791^x792)));

    if (t187 != INT64_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x793 = -3099;
	int8_t x795 = -1;
	uint16_t x796 = 6340U;
	volatile uint64_t t188 = 748805243099LLU;

    t188 = (x793&(x794%(x795^x796)));

    if (t188 != 901LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x797 = UINT64_MAX;
	int64_t x798 = INT64_MIN;
	int64_t x799 = -30668053LL;
	uint32_t x800 = UINT32_MAX;
	uint64_t t189 = 43LLU;

    t189 = (x797&(x798%(x799^x800)));

    if (t189 != 18446744071659143340LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x801 = UINT16_MAX;
	static uint32_t x802 = UINT32_MAX;
	volatile int32_t x803 = 0;
	static volatile int64_t t190 = -148146LL;

    t190 = (x801&(x802%(x803^x804)));

    if (t190 != 65535LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x805 = -1;
	int8_t x806 = 0;
	volatile int64_t x807 = INT64_MIN;
	static volatile int64_t t191 = 801956460653LL;

    t191 = (x805&(x806%(x807^x808)));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x809 = 325U;
	int64_t x810 = -1LL;
	volatile uint8_t x811 = 96U;
	volatile int64_t t192 = 0LL;

    t192 = (x809&(x810%(x811^x812)));

    if (t192 != 325LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x813 = INT8_MIN;
	uint64_t x814 = UINT64_MAX;
	int16_t x815 = 8946;
	volatile int64_t x816 = 3875503400703LL;
	uint64_t t193 = 6542LLU;

    t193 = (x813&(x814%(x815^x816)));

    if (t193 != 2889019438464LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x817 = -56;
	static uint64_t x818 = UINT64_MAX;
	volatile int16_t x819 = INT16_MAX;
	volatile uint32_t x820 = 68208U;
	volatile uint64_t t194 = 171LLU;

    t194 = (x817&(x818%(x819^x820)));

    if (t194 != 26888LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x821 = INT32_MIN;
	int32_t x822 = INT32_MIN;
	static int16_t x823 = -104;
	int64_t x824 = 4661502767LL;
	volatile int64_t t195 = -112702910LL;

    t195 = (x821&(x822%(x823^x824)));

    if (t195 != -2147483648LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x825 = INT32_MAX;
	volatile int32_t x826 = INT32_MIN;
	uint8_t x827 = 59U;
	volatile int8_t x828 = 1;
	static volatile int32_t t196 = -309;

    t196 = (x825&(x826%(x827^x828)));

    if (t196 != 2147483640) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x830 = 2478998222LLU;
	uint16_t x831 = 13U;
	static int16_t x832 = 25;
	static uint64_t t197 = 32716LLU;

    t197 = (x829&(x830%(x831^x832)));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x833 = INT64_MAX;
	int32_t x836 = -138;
	int64_t t198 = INT64_MAX;

    t198 = (x833&(x834%(x835^x836)));

    if (t198 != INT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x837 = 47U;
	static int32_t x838 = -1;
	int8_t x839 = INT8_MAX;
	static uint32_t x840 = UINT32_MAX;
	uint32_t t199 = 345881018U;

    t199 = (x837&(x838%(x839^x840)));

    if (t199 != 47U) { NG(); } else { ; }
	
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

