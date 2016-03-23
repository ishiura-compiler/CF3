
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

int32_t x6 = INT32_MIN;
int32_t t2 = -5;
volatile int32_t x15 = INT32_MIN;
int8_t x19 = INT8_MIN;
volatile int32_t t4 = -98845;
volatile int8_t x23 = -1;
static volatile uint64_t t5 = UINT64_MAX;
uint8_t x32 = UINT8_MAX;
volatile int32_t t7 = 2211;
uint16_t x41 = 18495U;
int32_t x48 = INT32_MIN;
uint32_t x49 = 238018U;
uint32_t t11 = 56973U;
uint8_t x53 = 23U;
uint16_t x55 = UINT16_MAX;
int64_t x56 = -174LL;
int16_t x61 = INT16_MIN;
int32_t t14 = -36678258;
volatile int16_t x76 = -21;
int32_t x80 = -883668;
volatile int64_t x81 = -1LL;
int64_t x98 = INT64_MIN;
volatile int64_t t23 = INT64_MAX;
static volatile int32_t t24 = -14078;
uint8_t x109 = UINT8_MAX;
volatile uint64_t x116 = 137686993678631460LLU;
int32_t t26 = INT32_MIN;
static volatile int16_t x117 = -3;
int64_t x118 = -494994483060LL;
int8_t x120 = INT8_MAX;
int64_t x121 = INT64_MIN;
int16_t x122 = -1;
uint16_t x126 = 16509U;
static int32_t t32 = 802219630;
int8_t x143 = -1;
uint32_t x147 = UINT32_MAX;
int8_t x150 = 0;
static int8_t x151 = -1;
int32_t x152 = INT32_MIN;
int64_t t36 = 12493700665169599LL;
int64_t x167 = INT64_MIN;
static int32_t t40 = -3;
volatile uint32_t x176 = 747U;
int32_t t41 = -102612;
static int16_t x182 = INT16_MIN;
static volatile int16_t x184 = INT16_MIN;
volatile int32_t t43 = -99;
int8_t x192 = 28;
int16_t x194 = -1;
static uint16_t x195 = 11U;
volatile int64_t t46 = INT64_MAX;
int8_t x199 = -1;
int64_t x200 = INT64_MIN;
static int32_t x210 = INT32_MIN;
int16_t x212 = INT16_MIN;
volatile int32_t t50 = 29409;
static int32_t x217 = 188059;
int8_t x222 = INT8_MIN;
int16_t x233 = INT16_MIN;
uint32_t x234 = 79U;
static volatile int16_t x241 = 0;
uint32_t x242 = 1265796U;
int16_t x245 = INT16_MIN;
int32_t x246 = INT32_MIN;
int32_t x251 = -3;
int32_t x252 = INT32_MAX;
int16_t x253 = INT16_MAX;
static volatile int16_t x264 = -1;
int32_t x265 = INT32_MAX;
volatile uint64_t x267 = UINT64_MAX;
volatile int32_t t64 = INT32_MAX;
int32_t x270 = INT32_MIN;
uint64_t t68 = 233106004766078815LLU;
int16_t x289 = INT16_MIN;
int8_t x292 = INT8_MAX;
static volatile int8_t x297 = -1;
int16_t x298 = -20;
static int64_t x306 = INT64_MIN;
volatile int32_t t73 = 370325199;
int8_t x310 = INT8_MAX;
int32_t t74 = -319;
int8_t x319 = INT8_MIN;
uint64_t x325 = UINT64_MAX;
int16_t x327 = -1;
uint64_t t78 = UINT64_MAX;
int16_t x332 = -1;
static uint32_t x336 = 5137308U;
int32_t t81 = -495;
volatile int32_t t84 = -10770;
int32_t x353 = INT32_MIN;
int8_t x359 = 57;
static uint16_t x366 = 7U;
uint64_t x368 = UINT64_MAX;
volatile int32_t x374 = INT32_MIN;
int32_t x376 = -4226422;
int64_t x395 = -1LL;
volatile int32_t t95 = 3459;
uint32_t x397 = UINT32_MAX;
int8_t x398 = INT8_MIN;
static int64_t x399 = INT64_MIN;
volatile uint32_t t96 = UINT32_MAX;
volatile int16_t x401 = INT16_MIN;
int64_t x404 = 56882158383LL;
int32_t t97 = -786934;
volatile int32_t x408 = INT32_MIN;
static int32_t x413 = INT32_MAX;
volatile uint8_t x419 = UINT8_MAX;
static volatile int8_t x422 = -1;
int16_t x427 = INT16_MIN;
volatile uint64_t x433 = 981711482675878LLU;
int8_t x435 = 18;
uint16_t x439 = 8179U;
volatile int32_t t106 = -445046;
static int8_t x445 = INT8_MAX;
static volatile int64_t x447 = INT64_MIN;
int64_t x449 = INT64_MIN;
static int64_t x453 = 1LL;
static int64_t x455 = INT64_MIN;
int16_t x458 = INT16_MIN;
static int16_t x467 = 169;
int64_t x468 = INT64_MIN;
int64_t t113 = 26LL;
uint32_t x471 = 831786U;
volatile int32_t t114 = 114275807;
int64_t x476 = INT64_MIN;
int64_t t115 = 48095320LL;
static volatile int32_t t116 = 846605879;
uint64_t x482 = UINT64_MAX;
volatile uint8_t x484 = UINT8_MAX;
int32_t x486 = 21218987;
volatile int16_t x491 = INT16_MIN;
static int16_t x494 = -1857;
static int32_t t120 = -4;
int16_t x500 = -1;
int8_t x502 = -1;
int16_t x510 = 2852;
uint64_t x511 = 5LLU;
volatile int64_t x513 = 30721435685056LL;
int16_t x516 = INT16_MIN;
static int64_t x529 = 63443781204262080LL;
int16_t x535 = -227;
volatile int32_t x540 = INT32_MIN;
int16_t x542 = INT16_MIN;
volatile int8_t x543 = INT8_MIN;
volatile uint64_t t132 = 28634306179261722LLU;
volatile int32_t t133 = 24279039;
int16_t x551 = INT16_MIN;
static int32_t t134 = 10;
int8_t x556 = INT8_MAX;
static int16_t x559 = INT16_MIN;
int64_t x560 = INT64_MIN;
uint8_t x574 = 4U;
int16_t x575 = INT16_MIN;
int8_t x581 = 0;
static uint32_t x585 = 7672U;
int16_t x590 = -576;
uint64_t x592 = UINT64_MAX;
volatile uint8_t x594 = 2U;
int64_t x595 = 0LL;
volatile int8_t x597 = INT8_MAX;
uint64_t x598 = UINT64_MAX;
uint64_t x599 = UINT64_MAX;
int8_t x601 = INT8_MAX;
int64_t x605 = 118883090802068365LL;
int64_t t149 = INT64_MIN;
int8_t x624 = -1;
static uint32_t x631 = 47236587U;
volatile int8_t x641 = -11;
uint16_t x642 = 7868U;
static volatile uint8_t x645 = 55U;
int32_t t158 = 952997;
int16_t x649 = INT16_MAX;
uint8_t x657 = 112U;
int64_t x658 = 71476539994451LL;
int32_t x666 = INT32_MAX;
static int8_t x668 = INT8_MAX;
static uint16_t x669 = 10U;
static volatile int32_t t164 = -4547083;
uint16_t x681 = 19U;
uint8_t x682 = UINT8_MAX;
volatile int32_t t166 = -18865387;
static uint16_t x685 = 0U;
int64_t x690 = -1LL;
static volatile int16_t x691 = INT16_MIN;
static int32_t x693 = INT32_MIN;
volatile int8_t x695 = INT8_MAX;
static int32_t x696 = INT32_MIN;
int32_t x699 = INT32_MAX;
int64_t x700 = -4050285LL;
int16_t x703 = INT16_MIN;
static volatile int16_t x708 = INT16_MIN;
static volatile uint64_t t172 = UINT64_MAX;
uint64_t x720 = 4835530964LLU;
int16_t x721 = INT16_MIN;
int8_t x722 = INT8_MAX;
volatile int32_t x725 = -1;
volatile int64_t x728 = INT64_MAX;
uint8_t x740 = UINT8_MAX;
int32_t t180 = 6488655;
volatile uint64_t x741 = 1486550894LLU;
int32_t x745 = 735;
int8_t x748 = INT8_MIN;
int32_t x753 = INT32_MIN;
int16_t x755 = INT16_MIN;
static int32_t t184 = -1065074617;
uint16_t x758 = 2U;
int32_t x759 = -1;
uint64_t t185 = 28238110555934462LLU;
int16_t x775 = INT16_MIN;
static volatile int32_t t189 = 250;
volatile int32_t t190 = INT32_MIN;
volatile int8_t x784 = -1;
int8_t x790 = -9;
int16_t x791 = -2512;
uint64_t x796 = UINT64_MAX;
int8_t x802 = 29;
int8_t x807 = INT8_MAX;
static int32_t t197 = -8803;
int64_t x811 = 18493259142753936LL;
uint64_t x813 = UINT64_MAX;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	static int8_t x2 = 10;
	static uint64_t x3 = 183508991845LLU;
	int8_t x4 = -30;
	volatile int32_t t0 = 209950;

    t0 = (x1|(x2<=(x3%x4)));

    if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MIN;
	int32_t x7 = -1;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 44;

    t1 = (x5|(x6<=(x7%x8)));

    if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x9 = UINT16_MAX;
	volatile int64_t x10 = INT64_MIN;
	volatile int8_t x11 = -1;
	int8_t x12 = INT8_MIN;

    t2 = (x9|(x10<=(x11%x12)));

    if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int16_t x13 = INT16_MIN;
	int16_t x14 = -12903;
	int8_t x16 = -1;
	static int32_t t3 = -142;

    t3 = (x13|(x14<=(x15%x16)));

    if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	int8_t x18 = -1;
	int16_t x20 = INT16_MIN;

    t4 = (x17|(x18<=(x19%x20)));

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	uint16_t x22 = 6U;
	volatile int64_t x24 = -182243375097LL;

    t5 = (x21|(x22<=(x23%x24)));

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = -1;
	int32_t x30 = -1;
	int8_t x31 = -2;
	volatile int32_t t6 = 335;

    t6 = (x29|(x30<=(x31%x32)));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = -1;
	int64_t x34 = -15622791799293019LL;
	volatile int8_t x35 = 4;
	uint64_t x36 = UINT64_MAX;

    t7 = (x33|(x34<=(x35%x36)));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = 58;
	uint16_t x38 = UINT16_MAX;
	int32_t x39 = INT32_MAX;
	static int32_t x40 = -170;
	volatile int32_t t8 = -208767;

    t8 = (x37|(x38<=(x39%x40)));

    if (t8 != 58) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x42 = 102U;
	volatile int16_t x43 = -1;
	int32_t x44 = -177319;
	int32_t t9 = 28510766;

    t9 = (x41|(x42<=(x43%x44)));

    if (t9 != 18495) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = 50058128U;
	static int64_t x46 = 24575430142956LL;
	int8_t x47 = 4;
	uint32_t t10 = 81391U;

    t10 = (x45|(x46<=(x47%x48)));

    if (t10 != 50058128U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x50 = 701266U;
	int16_t x51 = -1;
	volatile int32_t x52 = 103;

    t11 = (x49|(x50<=(x51%x52)));

    if (t11 != 238019U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x54 = INT64_MIN;
	volatile int32_t t12 = 7334;

    t12 = (x53|(x54<=(x55%x56)));

    if (t12 != 23) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x57 = INT64_MIN;
	uint32_t x58 = 16288U;
	int64_t x59 = INT64_MIN;
	int32_t x60 = -1;
	int64_t t13 = INT64_MIN;

    t13 = (x57|(x58<=(x59%x60)));

    if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x62 = INT16_MAX;
	static int64_t x63 = -1LL;
	static volatile int64_t x64 = INT64_MIN;

    t14 = (x61|(x62<=(x63%x64)));

    if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = 204377;
	int64_t x66 = -28888LL;
	int16_t x67 = -353;
	int64_t x68 = INT64_MIN;
	static volatile int32_t t15 = 20148393;

    t15 = (x65|(x66<=(x67%x68)));

    if (t15 != 204377) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = INT32_MIN;
	static int8_t x70 = INT8_MIN;
	int32_t x71 = INT32_MIN;
	int16_t x72 = INT16_MIN;
	int32_t t16 = -1938;

    t16 = (x69|(x70<=(x71%x72)));

    if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = INT16_MIN;
	int32_t x74 = INT32_MAX;
	static uint8_t x75 = 1U;
	int32_t t17 = 5582244;

    t17 = (x73|(x74<=(x75%x76)));

    if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x77 = 27692U;
	uint32_t x78 = UINT32_MAX;
	static int64_t x79 = INT64_MAX;
	volatile uint32_t t18 = 8177786U;

    t18 = (x77|(x78<=(x79%x80)));

    if (t18 != 27692U) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int16_t x82 = 6562;
	int8_t x83 = INT8_MAX;
	volatile int64_t x84 = -1LL;
	volatile int64_t t19 = 0LL;

    t19 = (x81|(x82<=(x83%x84)));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = -409435893275468LL;
	int32_t x86 = -16409437;
	int32_t x87 = INT32_MAX;
	int8_t x88 = INT8_MAX;
	volatile int64_t t20 = -17LL;

    t20 = (x85|(x86<=(x87%x88)));

    if (t20 != -409435893275467LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x89 = 2U;
	uint8_t x90 = 21U;
	int16_t x91 = INT16_MAX;
	volatile int16_t x92 = INT16_MIN;
	int32_t t21 = -1;

    t21 = (x89|(x90<=(x91%x92)));

    if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x93 = INT16_MIN;
	uint64_t x94 = UINT64_MAX;
	int32_t x95 = -1;
	int8_t x96 = INT8_MIN;
	static int32_t t22 = 191164700;

    t22 = (x93|(x94<=(x95%x96)));

    if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = INT64_MAX;
	static int8_t x99 = 16;
	static int16_t x100 = INT16_MAX;

    t23 = (x97|(x98<=(x99%x100)));

    if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x105 = INT16_MIN;
	int32_t x106 = -62530;
	uint8_t x107 = 14U;
	int8_t x108 = INT8_MIN;

    t24 = (x105|(x106<=(x107%x108)));

    if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x110 = INT64_MIN;
	static int16_t x111 = INT16_MAX;
	int64_t x112 = -1LL;
	int32_t t25 = 678;

    t25 = (x109|(x110<=(x111%x112)));

    if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = INT32_MIN;
	static int64_t x114 = -5072258349883LL;
	int32_t x115 = -1;

    t26 = (x113|(x114<=(x115%x116)));

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x119 = UINT8_MAX;
	int32_t t27 = 16154;

    t27 = (x117|(x118<=(x119%x120)));

    if (t27 != -3) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x123 = 62U;
	volatile uint32_t x124 = UINT32_MAX;
	volatile int64_t t28 = INT64_MIN;

    t28 = (x121|(x122<=(x123%x124)));

    if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = INT8_MIN;
	volatile int32_t x127 = -1;
	uint8_t x128 = 1U;
	volatile int32_t t29 = -70601;

    t29 = (x125|(x126<=(x127%x128)));

    if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = INT64_MAX;
	int16_t x130 = INT16_MIN;
	static int8_t x131 = INT8_MAX;
	volatile uint16_t x132 = 6U;
	volatile int64_t t30 = INT64_MAX;

    t30 = (x129|(x130<=(x131%x132)));

    if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x133 = INT16_MIN;
	int32_t x134 = -1;
	int16_t x135 = INT16_MIN;
	int64_t x136 = -1LL;
	int32_t t31 = 38177744;

    t31 = (x133|(x134<=(x135%x136)));

    if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x137 = INT16_MIN;
	volatile int32_t x138 = -935887;
	int8_t x139 = INT8_MIN;
	int8_t x140 = 1;

    t32 = (x137|(x138<=(x139%x140)));

    if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x141 = 1154U;
	int32_t x142 = INT32_MIN;
	volatile uint16_t x144 = 3202U;
	volatile uint32_t t33 = 43U;

    t33 = (x141|(x142<=(x143%x144)));

    if (t33 != 1155U) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x145 = UINT32_MAX;
	uint32_t x146 = 28U;
	uint32_t x148 = 25142U;
	volatile uint32_t t34 = UINT32_MAX;

    t34 = (x145|(x146<=(x147%x148)));

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint16_t x149 = 17U;
	volatile int32_t t35 = -15265;

    t35 = (x149|(x150<=(x151%x152)));

    if (t35 != 17) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x153 = -319003634425LL;
	volatile int32_t x154 = INT32_MAX;
	static int16_t x155 = INT16_MIN;
	int64_t x156 = -1LL;

    t36 = (x153|(x154<=(x155%x156)));

    if (t36 != -319003634425LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x157 = -1;
	int8_t x158 = INT8_MAX;
	static int16_t x159 = -1;
	static uint16_t x160 = 9447U;
	volatile int32_t t37 = 157990390;

    t37 = (x157|(x158<=(x159%x160)));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x161 = 32431170U;
	int64_t x162 = INT64_MIN;
	uint64_t x163 = 2996778867903917967LLU;
	static volatile uint64_t x164 = 496690714062406LLU;
	volatile uint32_t t38 = 389316246U;

    t38 = (x161|(x162<=(x163%x164)));

    if (t38 != 32431170U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x165 = -1;
	int64_t x166 = INT64_MIN;
	int16_t x168 = -1;
	volatile int32_t t39 = 36;

    t39 = (x165|(x166<=(x167%x168)));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x169 = -16;
	uint16_t x170 = 217U;
	int32_t x171 = INT32_MIN;
	uint16_t x172 = 7988U;

    t40 = (x169|(x170<=(x171%x172)));

    if (t40 != -16) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = INT32_MIN;
	uint16_t x174 = 15U;
	int32_t x175 = INT32_MIN;

    t41 = (x173|(x174<=(x175%x176)));

    if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x177 = INT32_MAX;
	int32_t x178 = 46;
	volatile int32_t x179 = INT32_MIN;
	uint8_t x180 = 104U;
	volatile int32_t t42 = INT32_MAX;

    t42 = (x177|(x178<=(x179%x180)));

    if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x181 = INT16_MIN;
	int64_t x183 = 62247536130LL;

    t43 = (x181|(x182<=(x183%x184)));

    if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x185 = 0U;
	int8_t x186 = -1;
	uint32_t x187 = 203U;
	int32_t x188 = INT32_MAX;
	volatile int32_t t44 = -340005;

    t44 = (x185|(x186<=(x187%x188)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x189 = INT16_MIN;
	int8_t x190 = -36;
	int8_t x191 = INT8_MAX;
	volatile int32_t t45 = -826333;

    t45 = (x189|(x190<=(x191%x192)));

    if (t45 != -32767) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x193 = INT64_MAX;
	static int16_t x196 = -49;

    t46 = (x193|(x194<=(x195%x196)));

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int64_t x197 = -1186565187659LL;
	int64_t x198 = 2275183394919464382LL;
	int64_t t47 = 1207LL;

    t47 = (x197|(x198<=(x199%x200)));

    if (t47 != -1186565187659LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x201 = 42;
	int32_t x202 = INT32_MIN;
	uint64_t x203 = 113233044544LLU;
	static int8_t x204 = INT8_MAX;
	volatile int32_t t48 = 228;

    t48 = (x201|(x202<=(x203%x204)));

    if (t48 != 42) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x205 = UINT64_MAX;
	uint16_t x206 = 3U;
	int16_t x207 = -196;
	int8_t x208 = 40;
	uint64_t t49 = UINT64_MAX;

    t49 = (x205|(x206<=(x207%x208)));

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x209 = 5;
	static uint16_t x211 = 6U;

    t50 = (x209|(x210<=(x211%x212)));

    if (t50 != 5) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x213 = -6;
	int32_t x214 = INT32_MIN;
	volatile uint8_t x215 = 16U;
	int8_t x216 = INT8_MIN;
	volatile int32_t t51 = -3;

    t51 = (x213|(x214<=(x215%x216)));

    if (t51 != -5) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x218 = INT64_MIN;
	volatile uint64_t x219 = 11980090553809290LLU;
	static int16_t x220 = INT16_MAX;
	static volatile int32_t t52 = -32845;

    t52 = (x217|(x218<=(x219%x220)));

    if (t52 != 188059) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x221 = 17U;
	uint8_t x223 = UINT8_MAX;
	int8_t x224 = INT8_MIN;
	uint32_t t53 = 124746300U;

    t53 = (x221|(x222<=(x223%x224)));

    if (t53 != 17U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = 10570640LL;
	volatile int16_t x226 = 165;
	static int32_t x227 = INT32_MIN;
	volatile int16_t x228 = INT16_MAX;
	volatile int64_t t54 = 1678044438LL;

    t54 = (x225|(x226<=(x227%x228)));

    if (t54 != 10570640LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x229 = 902U;
	static volatile int8_t x230 = 53;
	static int16_t x231 = -1;
	int8_t x232 = -1;
	int32_t t55 = -782435463;

    t55 = (x229|(x230<=(x231%x232)));

    if (t55 != 902) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x235 = 2LLU;
	int64_t x236 = INT64_MAX;
	volatile int32_t t56 = -875860372;

    t56 = (x233|(x234<=(x235%x236)));

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint64_t x237 = 28279408LLU;
	uint16_t x238 = UINT16_MAX;
	uint32_t x239 = 554262552U;
	int8_t x240 = -1;
	static volatile uint64_t t57 = 1136621LLU;

    t57 = (x237|(x238<=(x239%x240)));

    if (t57 != 28279409LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x243 = -1;
	int64_t x244 = -267438604660221078LL;
	int32_t t58 = -711;

    t58 = (x241|(x242<=(x243%x244)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x247 = -31;
	static int8_t x248 = -1;
	static volatile int32_t t59 = 414322152;

    t59 = (x245|(x246<=(x247%x248)));

    if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x249 = 1757730239U;
	int32_t x250 = INT32_MAX;
	uint32_t t60 = 1510U;

    t60 = (x249|(x250<=(x251%x252)));

    if (t60 != 1757730239U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x254 = INT32_MIN;
	int16_t x255 = -1;
	static volatile int64_t x256 = -1LL;
	static int32_t t61 = -329;

    t61 = (x253|(x254<=(x255%x256)));

    if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x257 = 0U;
	static volatile int16_t x258 = -1;
	int32_t x259 = INT32_MIN;
	int64_t x260 = -660299461129787LL;
	int32_t t62 = 15;

    t62 = (x257|(x258<=(x259%x260)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x261 = UINT8_MAX;
	int8_t x262 = INT8_MIN;
	uint16_t x263 = UINT16_MAX;
	static volatile int32_t t63 = -2;

    t63 = (x261|(x262<=(x263%x264)));

    if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x266 = 18U;
	int32_t x268 = -1;

    t64 = (x265|(x266<=(x267%x268)));

    if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x269 = -970242380663LL;
	int64_t x271 = 1LL;
	uint16_t x272 = 216U;
	static volatile int64_t t65 = 19861006578902LL;

    t65 = (x269|(x270<=(x271%x272)));

    if (t65 != -970242380663LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x277 = -1LL;
	volatile uint16_t x278 = UINT16_MAX;
	volatile int8_t x279 = 1;
	int64_t x280 = -1LL;
	static volatile int64_t t66 = 233447771938LL;

    t66 = (x277|(x278<=(x279%x280)));

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x281 = 2U;
	int16_t x282 = 4115;
	int64_t x283 = INT64_MIN;
	int16_t x284 = INT16_MIN;
	static int32_t t67 = -427106022;

    t67 = (x281|(x282<=(x283%x284)));

    if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x285 = 276LLU;
	uint16_t x286 = 50U;
	static int8_t x287 = -51;
	uint16_t x288 = 20U;

    t68 = (x285|(x286<=(x287%x288)));

    if (t68 != 276LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x290 = 20U;
	volatile int32_t x291 = 6493009;
	static volatile int32_t t69 = -15139;

    t69 = (x289|(x290<=(x291%x292)));

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x293 = -1LL;
	uint64_t x294 = 3891029976595982379LLU;
	static int16_t x295 = 0;
	int32_t x296 = -1;
	static int64_t t70 = 427874106865605227LL;

    t70 = (x293|(x294<=(x295%x296)));

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x299 = 799;
	int32_t x300 = -15;
	volatile int32_t t71 = -15;

    t71 = (x297|(x298<=(x299%x300)));

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x301 = INT16_MIN;
	uint16_t x302 = 7U;
	uint64_t x303 = 889681985613266LLU;
	int8_t x304 = 2;
	int32_t t72 = -288869023;

    t72 = (x301|(x302<=(x303%x304)));

    if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x305 = -117;
	int16_t x307 = -1;
	static int16_t x308 = INT16_MIN;

    t73 = (x305|(x306<=(x307%x308)));

    if (t73 != -117) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x309 = INT16_MIN;
	volatile uint32_t x311 = 217U;
	int16_t x312 = -71;

    t74 = (x309|(x310<=(x311%x312)));

    if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x313 = INT16_MIN;
	uint32_t x314 = 2U;
	volatile int8_t x315 = INT8_MIN;
	volatile int32_t x316 = 1060318;
	static int32_t t75 = 337556;

    t75 = (x313|(x314<=(x315%x316)));

    if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x317 = INT32_MAX;
	static volatile uint32_t x318 = 0U;
	uint64_t x320 = 1268LLU;
	static int32_t t76 = INT32_MAX;

    t76 = (x317|(x318<=(x319%x320)));

    if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x321 = -1;
	int64_t x322 = INT64_MIN;
	volatile int32_t x323 = INT32_MAX;
	int16_t x324 = INT16_MAX;
	static volatile int32_t t77 = -162251396;

    t77 = (x321|(x322<=(x323%x324)));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x326 = INT32_MAX;
	static int32_t x328 = INT32_MAX;

    t78 = (x325|(x326<=(x327%x328)));

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x329 = 0LLU;
	int8_t x330 = INT8_MIN;
	uint64_t x331 = 29573479LLU;
	uint64_t t79 = 221015343LLU;

    t79 = (x329|(x330<=(x331%x332)));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x333 = 2109LL;
	volatile int8_t x334 = -40;
	static volatile int32_t x335 = INT32_MAX;
	static int64_t t80 = -182215308LL;

    t80 = (x333|(x334<=(x335%x336)));

    if (t80 != 2109LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x337 = -1;
	int32_t x338 = -223259;
	uint8_t x339 = 39U;
	uint8_t x340 = 101U;

    t81 = (x337|(x338<=(x339%x340)));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x341 = -1;
	uint64_t x342 = UINT64_MAX;
	uint16_t x343 = 1U;
	int16_t x344 = -1;
	int32_t t82 = 11;

    t82 = (x341|(x342<=(x343%x344)));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x345 = 1;
	volatile uint16_t x346 = 3U;
	static int16_t x347 = 193;
	static volatile uint8_t x348 = UINT8_MAX;
	volatile int32_t t83 = 130866315;

    t83 = (x345|(x346<=(x347%x348)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x349 = -1;
	uint32_t x350 = 132257490U;
	int64_t x351 = INT64_MIN;
	int32_t x352 = -7395249;

    t84 = (x349|(x350<=(x351%x352)));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x354 = INT16_MIN;
	uint8_t x355 = 127U;
	uint32_t x356 = UINT32_MAX;
	static int32_t t85 = INT32_MIN;

    t85 = (x353|(x354<=(x355%x356)));

    if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x357 = 12500795LLU;
	uint16_t x358 = 11U;
	volatile int32_t x360 = INT32_MAX;
	uint64_t t86 = 1024383124908556954LLU;

    t86 = (x357|(x358<=(x359%x360)));

    if (t86 != 12500795LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x361 = INT16_MIN;
	volatile int64_t x362 = INT64_MAX;
	uint32_t x363 = 95155261U;
	uint64_t x364 = 1578LLU;
	volatile int32_t t87 = 0;

    t87 = (x361|(x362<=(x363%x364)));

    if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x365 = INT16_MIN;
	uint64_t x367 = 34872999410901261LLU;
	volatile int32_t t88 = 888625906;

    t88 = (x365|(x366<=(x367%x368)));

    if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x369 = INT64_MIN;
	volatile int8_t x370 = -1;
	static uint16_t x371 = 6U;
	int8_t x372 = INT8_MIN;
	int64_t t89 = 104907328237242893LL;

    t89 = (x369|(x370<=(x371%x372)));

    if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x373 = UINT32_MAX;
	int32_t x375 = INT32_MIN;
	volatile uint32_t t90 = UINT32_MAX;

    t90 = (x373|(x374<=(x375%x376)));

    if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x377 = INT16_MAX;
	int64_t x378 = 4501928038486580263LL;
	int32_t x379 = -11;
	int32_t x380 = INT32_MIN;
	volatile int32_t t91 = 409;

    t91 = (x377|(x378<=(x379%x380)));

    if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x381 = 1922506LLU;
	int32_t x382 = -1;
	volatile int16_t x383 = INT16_MIN;
	static int32_t x384 = -1;
	volatile uint64_t t92 = 319591254089LLU;

    t92 = (x381|(x382<=(x383%x384)));

    if (t92 != 1922507LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x385 = 5LLU;
	uint16_t x386 = UINT16_MAX;
	volatile int32_t x387 = -1;
	int16_t x388 = -1;
	uint64_t t93 = 3932549LLU;

    t93 = (x385|(x386<=(x387%x388)));

    if (t93 != 5LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x389 = INT32_MIN;
	uint8_t x390 = UINT8_MAX;
	volatile int8_t x391 = 1;
	volatile uint32_t x392 = 250234860U;
	int32_t t94 = INT32_MIN;

    t94 = (x389|(x390<=(x391%x392)));

    if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x393 = -1;
	uint16_t x394 = 28455U;
	static uint8_t x396 = 89U;

    t95 = (x393|(x394<=(x395%x396)));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x400 = -3;

    t96 = (x397|(x398<=(x399%x400)));

    if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x402 = UINT8_MAX;
	int8_t x403 = 1;

    t97 = (x401|(x402<=(x403%x404)));

    if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x405 = -1;
	static volatile int64_t x406 = INT64_MIN;
	int8_t x407 = INT8_MAX;
	int32_t t98 = -1060;

    t98 = (x405|(x406<=(x407%x408)));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x409 = -65322740;
	uint64_t x410 = 851734487LLU;
	uint16_t x411 = UINT16_MAX;
	static uint64_t x412 = 25807496311865LLU;
	volatile int32_t t99 = -273814;

    t99 = (x409|(x410<=(x411%x412)));

    if (t99 != -65322740) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x414 = -912881928LL;
	int32_t x415 = -1;
	volatile int8_t x416 = -15;
	volatile int32_t t100 = INT32_MAX;

    t100 = (x413|(x414<=(x415%x416)));

    if (t100 != INT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x417 = INT16_MIN;
	static volatile int8_t x418 = INT8_MAX;
	static uint32_t x420 = 7963U;
	volatile int32_t t101 = 4;

    t101 = (x417|(x418<=(x419%x420)));

    if (t101 != -32767) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x421 = 56292LL;
	static int64_t x423 = -219183285228320728LL;
	int64_t x424 = INT64_MIN;
	volatile int64_t t102 = 8110431501402434LL;

    t102 = (x421|(x422<=(x423%x424)));

    if (t102 != 56292LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x425 = 1001;
	uint8_t x426 = 1U;
	uint64_t x428 = 2135LLU;
	int32_t t103 = 32;

    t103 = (x425|(x426<=(x427%x428)));

    if (t103 != 1001) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x429 = -114;
	static int16_t x430 = -1;
	uint16_t x431 = UINT16_MAX;
	int8_t x432 = INT8_MIN;
	static volatile int32_t t104 = 26521;

    t104 = (x429|(x430<=(x431%x432)));

    if (t104 != -113) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x434 = -6722;
	volatile int32_t x436 = 2;
	uint64_t t105 = 460148LLU;

    t105 = (x433|(x434<=(x435%x436)));

    if (t105 != 981711482675879LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x437 = INT8_MIN;
	static uint16_t x438 = 9344U;
	uint64_t x440 = 76331461994987LLU;

    t106 = (x437|(x438<=(x439%x440)));

    if (t106 != -128) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x441 = -1;
	int16_t x442 = -1;
	static uint8_t x443 = UINT8_MAX;
	uint32_t x444 = 21U;
	static volatile int32_t t107 = 1;

    t107 = (x441|(x442<=(x443%x444)));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x446 = -1LL;
	static uint16_t x448 = 6U;
	static volatile int32_t t108 = 91975;

    t108 = (x445|(x446<=(x447%x448)));

    if (t108 != 127) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x450 = 668;
	int64_t x451 = -1LL;
	uint32_t x452 = 2U;
	static int64_t t109 = INT64_MIN;

    t109 = (x449|(x450<=(x451%x452)));

    if (t109 != INT64_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x454 = INT32_MIN;
	static uint64_t x456 = 16982LLU;
	volatile int64_t t110 = 1468LL;

    t110 = (x453|(x454<=(x455%x456)));

    if (t110 != 1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x457 = -11;
	int64_t x459 = -1LL;
	int16_t x460 = INT16_MIN;
	int32_t t111 = 2483140;

    t111 = (x457|(x458<=(x459%x460)));

    if (t111 != -11) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x461 = INT8_MIN;
	int64_t x462 = INT64_MIN;
	volatile int64_t x463 = -1LL;
	int32_t x464 = 9991;
	int32_t t112 = 117091;

    t112 = (x461|(x462<=(x463%x464)));

    if (t112 != -127) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x465 = -1LL;
	uint16_t x466 = 341U;

    t113 = (x465|(x466<=(x467%x468)));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint16_t x469 = 7U;
	int64_t x470 = INT64_MAX;
	uint32_t x472 = 481822U;

    t114 = (x469|(x470<=(x471%x472)));

    if (t114 != 7) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int64_t x473 = -3192623LL;
	int64_t x474 = INT64_MIN;
	int16_t x475 = 2025;

    t115 = (x473|(x474<=(x475%x476)));

    if (t115 != -3192623LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x477 = UINT16_MAX;
	int32_t x478 = INT32_MIN;
	int16_t x479 = 280;
	int8_t x480 = 18;

    t116 = (x477|(x478<=(x479%x480)));

    if (t116 != 65535) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x481 = 520028215056LLU;
	static uint16_t x483 = 23U;
	static uint64_t t117 = 84588300969626628LLU;

    t117 = (x481|(x482<=(x483%x484)));

    if (t117 != 520028215056LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x485 = 11871033276450658LLU;
	static int8_t x487 = INT8_MIN;
	volatile int64_t x488 = -1LL;
	uint64_t t118 = 922640693599LLU;

    t118 = (x485|(x486<=(x487%x488)));

    if (t118 != 11871033276450658LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x489 = 4U;
	int16_t x490 = INT16_MAX;
	uint64_t x492 = 322LLU;
	int32_t t119 = -8;

    t119 = (x489|(x490<=(x491%x492)));

    if (t119 != 4) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x493 = 6434;
	volatile int64_t x495 = -1317547975762358494LL;
	int8_t x496 = INT8_MIN;

    t120 = (x493|(x494<=(x495%x496)));

    if (t120 != 6435) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x497 = INT64_MIN;
	uint16_t x498 = 0U;
	int8_t x499 = -2;
	int64_t t121 = 3585032736152LL;

    t121 = (x497|(x498<=(x499%x500)));

    if (t121 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x501 = UINT8_MAX;
	static int8_t x503 = 2;
	int64_t x504 = INT64_MIN;
	volatile int32_t t122 = 1;

    t122 = (x501|(x502<=(x503%x504)));

    if (t122 != 255) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x505 = -75;
	int8_t x506 = INT8_MAX;
	uint8_t x507 = 1U;
	int16_t x508 = INT16_MIN;
	int32_t t123 = -25089195;

    t123 = (x505|(x506<=(x507%x508)));

    if (t123 != -75) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x509 = -62;
	static uint16_t x512 = 31U;
	int32_t t124 = 2534059;

    t124 = (x509|(x510<=(x511%x512)));

    if (t124 != -62) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x514 = 7480994;
	static int32_t x515 = -1;
	int64_t t125 = -3199LL;

    t125 = (x513|(x514<=(x515%x516)));

    if (t125 != 30721435685056LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x517 = 25301723U;
	int64_t x518 = INT64_MIN;
	static int64_t x519 = 237368LL;
	uint32_t x520 = 242U;
	uint32_t t126 = 1U;

    t126 = (x517|(x518<=(x519%x520)));

    if (t126 != 25301723U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x521 = INT16_MIN;
	uint32_t x522 = UINT32_MAX;
	int64_t x523 = -1LL;
	volatile int8_t x524 = -1;
	volatile int32_t t127 = -21484;

    t127 = (x521|(x522<=(x523%x524)));

    if (t127 != -32768) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x525 = INT32_MIN;
	int8_t x526 = -1;
	static int8_t x527 = 0;
	int32_t x528 = INT32_MIN;
	volatile int32_t t128 = -576545;

    t128 = (x525|(x526<=(x527%x528)));

    if (t128 != -2147483647) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x530 = INT64_MIN;
	uint16_t x531 = 30U;
	volatile int16_t x532 = INT16_MAX;
	static volatile int64_t t129 = -283LL;

    t129 = (x529|(x530<=(x531%x532)));

    if (t129 != 63443781204262081LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x533 = INT16_MIN;
	volatile int32_t x534 = INT32_MAX;
	volatile int8_t x536 = INT8_MIN;
	volatile int32_t t130 = 1;

    t130 = (x533|(x534<=(x535%x536)));

    if (t130 != -32768) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x537 = 30426U;
	uint32_t x538 = 44218U;
	static uint64_t x539 = UINT64_MAX;
	int32_t t131 = -21279022;

    t131 = (x537|(x538<=(x539%x540)));

    if (t131 != 30427) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x541 = 4276226582LLU;
	int64_t x544 = INT64_MIN;

    t132 = (x541|(x542<=(x543%x544)));

    if (t132 != 4276226583LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x545 = 6;
	uint16_t x546 = UINT16_MAX;
	int8_t x547 = -1;
	static int8_t x548 = INT8_MAX;

    t133 = (x545|(x546<=(x547%x548)));

    if (t133 != 6) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x549 = -32614;
	uint64_t x550 = 284482724717LLU;
	int8_t x552 = INT8_MIN;

    t134 = (x549|(x550<=(x551%x552)));

    if (t134 != -32614) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x553 = INT32_MIN;
	static int8_t x554 = 4;
	int8_t x555 = -1;
	int32_t t135 = INT32_MIN;

    t135 = (x553|(x554<=(x555%x556)));

    if (t135 != INT32_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x557 = 624322LLU;
	static uint8_t x558 = 5U;
	uint64_t t136 = 72402LLU;

    t136 = (x557|(x558<=(x559%x560)));

    if (t136 != 624322LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x561 = -1;
	static int32_t x562 = INT32_MIN;
	static uint16_t x563 = 1U;
	uint16_t x564 = 778U;
	int32_t t137 = 26375322;

    t137 = (x561|(x562<=(x563%x564)));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x565 = INT8_MAX;
	uint16_t x566 = 5U;
	static volatile int32_t x567 = INT32_MIN;
	static volatile uint32_t x568 = UINT32_MAX;
	int32_t t138 = -623;

    t138 = (x565|(x566<=(x567%x568)));

    if (t138 != 127) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x569 = 261U;
	static int64_t x570 = 2473869292455LL;
	static uint32_t x571 = UINT32_MAX;
	static volatile int8_t x572 = INT8_MIN;
	int32_t t139 = 198836824;

    t139 = (x569|(x570<=(x571%x572)));

    if (t139 != 261) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x573 = 2460LLU;
	int64_t x576 = -24LL;
	volatile uint64_t t140 = 2896LLU;

    t140 = (x573|(x574<=(x575%x576)));

    if (t140 != 2460LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x577 = 0U;
	uint16_t x578 = 7U;
	static int8_t x579 = INT8_MAX;
	uint16_t x580 = 2958U;
	int32_t t141 = 0;

    t141 = (x577|(x578<=(x579%x580)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x582 = 27965U;
	int32_t x583 = INT32_MIN;
	uint16_t x584 = UINT16_MAX;
	int32_t t142 = -308866;

    t142 = (x581|(x582<=(x583%x584)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x586 = 0;
	static uint16_t x587 = 6331U;
	int16_t x588 = -6646;
	static uint32_t t143 = 1561107810U;

    t143 = (x585|(x586<=(x587%x588)));

    if (t143 != 7673U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x589 = UINT32_MAX;
	static int16_t x591 = -1;
	uint32_t t144 = UINT32_MAX;

    t144 = (x589|(x590<=(x591%x592)));

    if (t144 != UINT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x593 = INT16_MIN;
	uint64_t x596 = 140361LLU;
	volatile int32_t t145 = 13;

    t145 = (x593|(x594<=(x595%x596)));

    if (t145 != -32768) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x600 = 88U;
	volatile int32_t t146 = 2141;

    t146 = (x597|(x598<=(x599%x600)));

    if (t146 != 127) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x602 = INT64_MAX;
	static int8_t x603 = INT8_MIN;
	volatile int64_t x604 = INT64_MIN;
	static int32_t t147 = -129122458;

    t147 = (x601|(x602<=(x603%x604)));

    if (t147 != 127) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x606 = -1;
	int16_t x607 = 2124;
	uint64_t x608 = 22112180092LLU;
	static volatile int64_t t148 = -421247LL;

    t148 = (x605|(x606<=(x607%x608)));

    if (t148 != 118883090802068365LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x609 = INT64_MIN;
	int8_t x610 = 11;
	volatile uint8_t x611 = UINT8_MAX;
	int16_t x612 = -1;

    t149 = (x609|(x610<=(x611%x612)));

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x613 = INT16_MIN;
	int64_t x614 = INT64_MIN;
	int8_t x615 = -1;
	uint32_t x616 = 4103916U;
	volatile int32_t t150 = -95962068;

    t150 = (x613|(x614<=(x615%x616)));

    if (t150 != -32767) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x617 = INT16_MIN;
	int32_t x618 = INT32_MAX;
	int64_t x619 = -1LL;
	volatile int64_t x620 = INT64_MIN;
	volatile int32_t t151 = 4443222;

    t151 = (x617|(x618<=(x619%x620)));

    if (t151 != -32768) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x621 = -31LL;
	uint16_t x622 = 5U;
	static int16_t x623 = -126;
	volatile int64_t t152 = 983624608LL;

    t152 = (x621|(x622<=(x623%x624)));

    if (t152 != -31LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x625 = INT64_MIN;
	volatile uint64_t x626 = 8152LLU;
	int16_t x627 = INT16_MAX;
	int8_t x628 = 10;
	volatile int64_t t153 = INT64_MIN;

    t153 = (x625|(x626<=(x627%x628)));

    if (t153 != INT64_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x629 = 1167250370892930532LL;
	uint8_t x630 = 0U;
	volatile int16_t x632 = INT16_MIN;
	int64_t t154 = 27747029365207LL;

    t154 = (x629|(x630<=(x631%x632)));

    if (t154 != 1167250370892930533LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x633 = INT64_MIN;
	int8_t x634 = -1;
	int64_t x635 = INT64_MIN;
	uint64_t x636 = 1013160473809099LLU;
	int64_t t155 = INT64_MIN;

    t155 = (x633|(x634<=(x635%x636)));

    if (t155 != INT64_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int32_t x637 = 18280;
	static volatile int32_t x638 = INT32_MIN;
	uint32_t x639 = UINT32_MAX;
	int32_t x640 = -205347276;
	int32_t t156 = -10390392;

    t156 = (x637|(x638<=(x639%x640)));

    if (t156 != 18280) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int64_t x643 = -1LL;
	static int8_t x644 = INT8_MIN;
	volatile int32_t t157 = 7;

    t157 = (x641|(x642<=(x643%x644)));

    if (t157 != -11) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x646 = 587U;
	static uint32_t x647 = UINT32_MAX;
	uint16_t x648 = 30857U;

    t158 = (x645|(x646<=(x647%x648)));

    if (t158 != 55) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x650 = -1LL;
	static uint32_t x651 = 81088076U;
	int16_t x652 = -1;
	volatile int32_t t159 = -73335;

    t159 = (x649|(x650<=(x651%x652)));

    if (t159 != 32767) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x653 = 2U;
	static int64_t x654 = INT64_MAX;
	uint8_t x655 = 110U;
	int32_t x656 = 30;
	int32_t t160 = 377;

    t160 = (x653|(x654<=(x655%x656)));

    if (t160 != 2) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x659 = 4LLU;
	int32_t x660 = INT32_MIN;
	int32_t t161 = 248;

    t161 = (x657|(x658<=(x659%x660)));

    if (t161 != 112) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x661 = INT16_MIN;
	uint8_t x662 = 22U;
	static int32_t x663 = 10031035;
	int64_t x664 = INT64_MAX;
	volatile int32_t t162 = 357996;

    t162 = (x661|(x662<=(x663%x664)));

    if (t162 != -32767) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x665 = 314U;
	static uint64_t x667 = 157972389761896LLU;
	int32_t t163 = 21531049;

    t163 = (x665|(x666<=(x667%x668)));

    if (t163 != 314) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x670 = -10;
	uint64_t x671 = 8407601144644559LLU;
	volatile uint16_t x672 = 13297U;

    t164 = (x669|(x670<=(x671%x672)));

    if (t164 != 10) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x673 = INT32_MAX;
	static int32_t x674 = INT32_MIN;
	int32_t x675 = INT32_MIN;
	int16_t x676 = -1;
	static volatile int32_t t165 = INT32_MAX;

    t165 = (x673|(x674<=(x675%x676)));

    if (t165 != INT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x683 = 15U;
	int8_t x684 = -1;

    t166 = (x681|(x682<=(x683%x684)));

    if (t166 != 19) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x686 = -1LL;
	int8_t x687 = -1;
	volatile int32_t x688 = INT32_MIN;
	int32_t t167 = 1052285;

    t167 = (x685|(x686<=(x687%x688)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x689 = INT8_MIN;
	int32_t x692 = 1;
	volatile int32_t t168 = -197;

    t168 = (x689|(x690<=(x691%x692)));

    if (t168 != -127) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x694 = UINT64_MAX;
	static volatile int32_t t169 = INT32_MIN;

    t169 = (x693|(x694<=(x695%x696)));

    if (t169 != INT32_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x697 = INT64_MIN;
	volatile uint8_t x698 = UINT8_MAX;
	static volatile int64_t t170 = 960640243859529919LL;

    t170 = (x697|(x698<=(x699%x700)));

    if (t170 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x701 = UINT32_MAX;
	uint16_t x702 = 12U;
	static int32_t x704 = -1;
	uint32_t t171 = UINT32_MAX;

    t171 = (x701|(x702<=(x703%x704)));

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x705 = UINT64_MAX;
	int32_t x706 = INT32_MIN;
	static volatile int32_t x707 = INT32_MIN;

    t172 = (x705|(x706<=(x707%x708)));

    if (t172 != UINT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x709 = UINT64_MAX;
	int8_t x710 = INT8_MIN;
	int8_t x711 = -1;
	int32_t x712 = INT32_MIN;
	static volatile uint64_t t173 = UINT64_MAX;

    t173 = (x709|(x710<=(x711%x712)));

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x713 = -6071;
	static uint8_t x714 = 1U;
	uint8_t x715 = 25U;
	static int16_t x716 = INT16_MAX;
	int32_t t174 = -5365447;

    t174 = (x713|(x714<=(x715%x716)));

    if (t174 != -6071) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x717 = INT16_MAX;
	int32_t x718 = INT32_MIN;
	static volatile int16_t x719 = INT16_MIN;
	int32_t t175 = -185494580;

    t175 = (x717|(x718<=(x719%x720)));

    if (t175 != 32767) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x723 = 40;
	int16_t x724 = INT16_MIN;
	volatile int32_t t176 = 1849;

    t176 = (x721|(x722<=(x723%x724)));

    if (t176 != -32768) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x726 = 0;
	uint16_t x727 = 1U;
	volatile int32_t t177 = -1;

    t177 = (x725|(x726<=(x727%x728)));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x729 = -6067;
	volatile uint32_t x730 = UINT32_MAX;
	uint64_t x731 = UINT64_MAX;
	volatile int32_t x732 = INT32_MIN;
	int32_t t178 = -330634761;

    t178 = (x729|(x730<=(x731%x732)));

    if (t178 != -6067) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x733 = 80LLU;
	static uint8_t x734 = UINT8_MAX;
	static uint32_t x735 = UINT32_MAX;
	static int32_t x736 = INT32_MAX;
	volatile uint64_t t179 = 75LLU;

    t179 = (x733|(x734<=(x735%x736)));

    if (t179 != 80LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x737 = INT8_MAX;
	volatile int8_t x738 = INT8_MIN;
	int32_t x739 = -288477209;

    t180 = (x737|(x738<=(x739%x740)));

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x742 = INT8_MIN;
	volatile int16_t x743 = INT16_MAX;
	int32_t x744 = -69280;
	static volatile uint64_t t181 = 345058038742LLU;

    t181 = (x741|(x742<=(x743%x744)));

    if (t181 != 1486550895LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x746 = -1527;
	int8_t x747 = 7;
	static volatile int32_t t182 = 12183371;

    t182 = (x745|(x746<=(x747%x748)));

    if (t182 != 735) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x749 = UINT64_MAX;
	int8_t x750 = -1;
	static int16_t x751 = -6;
	int64_t x752 = INT64_MIN;
	uint64_t t183 = UINT64_MAX;

    t183 = (x749|(x750<=(x751%x752)));

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x754 = -1;
	volatile uint8_t x756 = 1U;

    t184 = (x753|(x754<=(x755%x756)));

    if (t184 != -2147483647) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x757 = 3741LLU;
	uint32_t x760 = 29U;

    t185 = (x757|(x758<=(x759%x760)));

    if (t185 != 3741LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint8_t x761 = UINT8_MAX;
	volatile uint8_t x762 = 7U;
	int32_t x763 = INT32_MIN;
	volatile int64_t x764 = INT64_MIN;
	int32_t t186 = -1;

    t186 = (x761|(x762<=(x763%x764)));

    if (t186 != 255) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x765 = INT32_MIN;
	uint64_t x766 = 5452818070495LLU;
	int8_t x767 = -26;
	int32_t x768 = INT32_MAX;
	int32_t t187 = 303342450;

    t187 = (x765|(x766<=(x767%x768)));

    if (t187 != -2147483647) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x769 = -1LL;
	volatile int32_t x770 = 281924;
	volatile int16_t x771 = -1;
	uint64_t x772 = UINT64_MAX;
	volatile int64_t t188 = -1LL;

    t188 = (x769|(x770<=(x771%x772)));

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x773 = 1021;
	int8_t x774 = INT8_MIN;
	uint16_t x776 = UINT16_MAX;

    t189 = (x773|(x774<=(x775%x776)));

    if (t189 != 1021) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x777 = INT32_MIN;
	int16_t x778 = -1;
	int16_t x779 = INT16_MIN;
	uint16_t x780 = 3625U;

    t190 = (x777|(x778<=(x779%x780)));

    if (t190 != INT32_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x781 = 6LL;
	volatile int16_t x782 = -835;
	uint16_t x783 = UINT16_MAX;
	static int64_t t191 = 10565551455LL;

    t191 = (x781|(x782<=(x783%x784)));

    if (t191 != 7LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x785 = -11;
	static uint16_t x786 = 0U;
	volatile int64_t x787 = -1LL;
	int32_t x788 = INT32_MIN;
	volatile int32_t t192 = -29198356;

    t192 = (x785|(x786<=(x787%x788)));

    if (t192 != -11) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int8_t x789 = INT8_MAX;
	int16_t x792 = INT16_MIN;
	int32_t t193 = -1539;

    t193 = (x789|(x790<=(x791%x792)));

    if (t193 != 127) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x793 = INT8_MAX;
	uint16_t x794 = 6U;
	static int64_t x795 = INT64_MIN;
	int32_t t194 = 908;

    t194 = (x793|(x794<=(x795%x796)));

    if (t194 != 127) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x797 = 814293253343061498LLU;
	uint32_t x798 = 31U;
	uint64_t x799 = UINT64_MAX;
	int64_t x800 = -1LL;
	volatile uint64_t t195 = 3851163403892029LLU;

    t195 = (x797|(x798<=(x799%x800)));

    if (t195 != 814293253343061498LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x801 = -1;
	static int64_t x803 = INT64_MIN;
	uint64_t x804 = 795774316106LLU;
	volatile int32_t t196 = 13;

    t196 = (x801|(x802<=(x803%x804)));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x805 = 0U;
	static int32_t x806 = 0;
	volatile uint16_t x808 = 5022U;

    t197 = (x805|(x806<=(x807%x808)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x809 = INT16_MIN;
	int8_t x810 = INT8_MIN;
	static volatile int64_t x812 = 83953357515925240LL;
	int32_t t198 = -1917748;

    t198 = (x809|(x810<=(x811%x812)));

    if (t198 != -32767) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x814 = -20;
	volatile int16_t x815 = -43;
	int32_t x816 = -1;
	uint64_t t199 = UINT64_MAX;

    t199 = (x813|(x814<=(x815%x816)));

    if (t199 != UINT64_MAX) { NG(); } else { ; }
	
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

