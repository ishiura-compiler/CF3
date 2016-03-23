
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

int8_t x1 = INT8_MIN;
volatile int16_t x4 = -13798;
int16_t x8 = INT16_MIN;
int16_t x16 = -1;
uint64_t t3 = 7262LLU;
volatile int32_t t4 = INT32_MAX;
static volatile int8_t x23 = 1;
volatile int32_t x26 = -14;
volatile uint32_t t8 = 5723U;
int8_t x41 = INT8_MIN;
uint8_t x44 = 1U;
int8_t x45 = 23;
static int32_t t12 = -216623;
volatile int32_t x54 = INT32_MAX;
uint64_t x56 = 8443642733LLU;
static volatile uint64_t t14 = UINT64_MAX;
int8_t x69 = INT8_MAX;
int16_t x71 = INT16_MIN;
int32_t x72 = INT32_MIN;
volatile int16_t x77 = INT16_MAX;
uint16_t x85 = UINT16_MAX;
volatile int64_t x94 = INT64_MAX;
static volatile int16_t x98 = -940;
static uint64_t x101 = UINT64_MAX;
volatile uint64_t t25 = UINT64_MAX;
static int16_t x105 = -13219;
uint32_t x106 = UINT32_MAX;
int64_t x110 = -1LL;
static volatile int32_t t29 = 5;
int32_t x129 = -1;
uint64_t x131 = UINT64_MAX;
int8_t x136 = INT8_MIN;
static int16_t x137 = -1;
static int16_t x152 = INT16_MAX;
volatile int32_t t37 = 88535090;
int8_t x154 = INT8_MIN;
int8_t x156 = -1;
static uint64_t x160 = UINT64_MAX;
int16_t x167 = INT16_MIN;
uint16_t x168 = 3U;
static volatile uint16_t x172 = 0U;
uint64_t t42 = 12LLU;
uint16_t x177 = 278U;
int16_t x178 = -6;
volatile int32_t t44 = 10798;
static int8_t x183 = -1;
int64_t x184 = -1952969LL;
static int16_t x194 = -241;
int32_t x198 = INT32_MAX;
int8_t x211 = -1;
int64_t x218 = 1827368LL;
int16_t x221 = -1;
int32_t x227 = INT32_MIN;
uint32_t x228 = 38859U;
int64_t t56 = 61990LL;
int64_t x232 = INT64_MIN;
int64_t x238 = -1LL;
int64_t x241 = INT64_MIN;
volatile int8_t x242 = -24;
uint64_t x244 = UINT64_MAX;
int8_t x246 = INT8_MIN;
static int64_t x248 = INT64_MIN;
uint16_t x251 = 1073U;
int64_t x252 = -144023263148053LL;
volatile int64_t t62 = 43207LL;
uint32_t x254 = 24243031U;
int16_t x257 = -1;
int16_t x264 = INT16_MIN;
uint32_t t65 = 732056U;
int32_t x273 = 887713;
int16_t x275 = -1;
int32_t x278 = -1;
int64_t x279 = 301469991LL;
int32_t x281 = INT32_MAX;
uint16_t x284 = 347U;
static volatile int32_t t70 = INT32_MAX;
uint32_t x293 = 55U;
int8_t x295 = 2;
uint32_t x304 = UINT32_MAX;
static int8_t x312 = -1;
int8_t x313 = INT8_MAX;
uint32_t x315 = 3678280U;
int8_t x316 = INT8_MIN;
static uint16_t x317 = 9U;
int32_t x319 = 1;
int32_t x326 = INT32_MAX;
uint32_t x328 = UINT32_MAX;
static uint16_t x329 = 7914U;
int16_t x332 = -1;
static int32_t x338 = INT32_MIN;
int64_t t84 = -244856322LL;
static int32_t t85 = -12;
uint16_t x347 = 1U;
int32_t t86 = -68;
static int16_t x353 = INT16_MIN;
volatile int32_t t88 = 348;
volatile int64_t x359 = INT64_MIN;
int64_t t89 = -1325684992LL;
volatile int32_t x362 = -127;
static int8_t x367 = -1;
uint16_t x370 = UINT16_MAX;
volatile uint64_t x372 = UINT64_MAX;
volatile int8_t x378 = INT8_MIN;
static int32_t x379 = -387456;
static int64_t x391 = -1LL;
uint64_t x393 = UINT64_MAX;
static uint32_t x395 = 15144179U;
uint64_t t98 = UINT64_MAX;
uint16_t x401 = 31103U;
uint64_t x402 = UINT64_MAX;
int32_t t100 = -510824;
int32_t x407 = INT32_MAX;
static int64_t x411 = -1LL;
static uint8_t x412 = UINT8_MAX;
volatile int64_t t102 = -23320789138529LL;
int64_t t103 = 153LL;
volatile int64_t x418 = -1LL;
uint64_t x422 = UINT64_MAX;
volatile int32_t t105 = 0;
uint8_t x425 = UINT8_MAX;
volatile int32_t x427 = INT32_MIN;
uint32_t x428 = 481780120U;
volatile int8_t x430 = 55;
int16_t x433 = 5;
volatile int16_t x438 = -1;
volatile uint8_t x440 = UINT8_MAX;
volatile int32_t t109 = -6037;
int64_t x444 = -1LL;
int16_t x448 = 10223;
uint32_t t111 = 2U;
int16_t x450 = INT16_MAX;
static uint32_t x453 = 65842666U;
int16_t x455 = INT16_MAX;
static int64_t x459 = -1LL;
uint32_t x464 = UINT32_MAX;
uint32_t t115 = 8016U;
uint16_t x467 = 1609U;
uint16_t x470 = 1U;
volatile int32_t t118 = 37;
uint64_t x480 = 7LLU;
volatile int32_t t121 = 400;
volatile int16_t x493 = -37;
int16_t x501 = -1;
int64_t x503 = INT64_MIN;
int16_t x504 = -66;
int16_t x508 = -1;
int64_t x512 = INT64_MAX;
uint64_t x513 = 33249315LLU;
volatile uint64_t x514 = UINT64_MAX;
static int32_t t129 = 3738;
volatile uint16_t x526 = 0U;
volatile int8_t x528 = 2;
static int32_t t131 = -96233176;
int16_t x529 = INT16_MIN;
volatile uint64_t x536 = 2LLU;
int16_t x539 = -1;
int32_t t134 = 248;
volatile uint8_t x542 = 47U;
uint16_t x543 = UINT16_MAX;
volatile int64_t t135 = -16LL;
static int32_t x546 = 1958116;
int64_t t137 = -3472861290242096878LL;
static uint8_t x554 = UINT8_MAX;
uint16_t x562 = UINT16_MAX;
uint64_t x573 = 12748690257LLU;
static int32_t x576 = INT32_MIN;
uint64_t x580 = 269319801516593LLU;
static volatile int32_t x582 = 104;
int64_t x588 = 857334790LL;
volatile uint32_t x594 = 1U;
uint16_t x597 = 1586U;
static int8_t x600 = -5;
uint16_t x601 = 3267U;
static int8_t x602 = -1;
int64_t x610 = INT64_MIN;
int8_t x612 = INT8_MIN;
static int32_t x616 = INT32_MIN;
uint8_t x618 = 0U;
int64_t t155 = 11402LL;
int32_t x627 = INT32_MIN;
int32_t x630 = -7706;
int64_t x637 = 1843112340145710LL;
int16_t x640 = -1;
static uint16_t x643 = 7U;
uint32_t t160 = 23300U;
uint32_t x646 = 1U;
int8_t x649 = INT8_MIN;
uint32_t x650 = UINT32_MAX;
static uint32_t x652 = 28847575U;
volatile int32_t t162 = 2692;
static int16_t x669 = 1;
static volatile int8_t x675 = INT8_MIN;
int16_t x679 = -826;
int8_t x689 = INT8_MIN;
static volatile int32_t t174 = -19216;
int32_t x701 = -77567;
static int32_t x704 = 854910;
volatile int32_t x710 = INT32_MAX;
volatile int8_t x716 = INT8_MAX;
volatile int8_t x717 = INT8_MIN;
volatile int16_t x718 = INT16_MIN;
volatile int32_t t179 = -3077;
static int16_t x724 = INT16_MAX;
volatile int32_t x725 = INT32_MIN;
int8_t x732 = 48;
int8_t x734 = 9;
int64_t x738 = INT64_MIN;
int32_t t185 = 9643843;
int32_t x748 = INT32_MIN;
static volatile int32_t t186 = -7975;
int64_t x751 = 1580441953849403899LL;
static uint16_t x756 = 17779U;
int64_t t189 = INT64_MAX;
int64_t x763 = INT64_MIN;
int16_t x765 = INT16_MIN;
uint32_t x771 = 734U;
static volatile int64_t t192 = 213326060073LL;
uint16_t x773 = 36U;
uint32_t x774 = UINT32_MAX;
uint8_t x775 = UINT8_MAX;
int32_t t193 = -364529373;
int8_t x777 = INT8_MIN;
int64_t x778 = INT64_MAX;
int32_t t195 = 27;
volatile int32_t x789 = INT32_MAX;
int32_t t198 = 2974;


void f0(void) {
    	uint16_t x2 = 3667U;
	uint64_t x3 = 1418234073215LLU;
	volatile int32_t t0 = -824979061;

    t0 = (x1|(x2<=(x3==x4)));

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	uint8_t x6 = 44U;
	int32_t x7 = INT32_MAX;
	static volatile int32_t t1 = -7739442;

    t1 = (x5|(x6<=(x7==x8)));

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 1U;
	static uint16_t x10 = 7262U;
	int32_t x11 = -368813341;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -561609020;

    t2 = (x9|(x10<=(x11==x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x13 = 79078802022325LLU;
	volatile uint32_t x14 = 30872U;
	uint16_t x15 = 1009U;

    t3 = (x13|(x14<=(x15==x16)));

    if (t3 != 79078802022325LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	int32_t x18 = -1;
	int64_t x19 = INT64_MIN;
	int16_t x20 = -1;

    t4 = (x17|(x18<=(x19==x20)));

    if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -30;
	int32_t x22 = -91265;
	int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = -77574921;

    t5 = (x21|(x22<=(x23==x24)));

    if (t5 != -29) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	uint16_t x27 = 3659U;
	volatile int16_t x28 = 1;
	int32_t t6 = 812297;

    t6 = (x25|(x26<=(x27==x28)));

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 4U;
	uint8_t x30 = 119U;
	int64_t x31 = -213LL;
	static int8_t x32 = -5;
	static volatile int32_t t7 = -793273006;

    t7 = (x29|(x30<=(x31==x32)));

    if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 93U;
	int64_t x34 = -1LL;
	uint8_t x35 = UINT8_MAX;
	volatile uint32_t x36 = 96199119U;

    t8 = (x33|(x34<=(x35==x36)));

    if (t8 != 93U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 3U;
	uint8_t x38 = UINT8_MAX;
	uint32_t x39 = 93U;
	uint32_t x40 = UINT32_MAX;
	static volatile int32_t t9 = -182441;

    t9 = (x37|(x38<=(x39==x40)));

    if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = INT8_MIN;
	static volatile int8_t x43 = INT8_MIN;
	volatile int32_t t10 = 8;

    t10 = (x41|(x42<=(x43==x44)));

    if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = 14;
	volatile uint8_t x47 = 13U;
	int16_t x48 = 152;
	volatile int32_t t11 = -14843200;

    t11 = (x45|(x46<=(x47==x48)));

    if (t11 != 23) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 3U;
	static int8_t x50 = INT8_MIN;
	static volatile int32_t x51 = -75689;
	int64_t x52 = INT64_MIN;

    t12 = (x49|(x50<=(x51==x52)));

    if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = INT32_MIN;
	int64_t x55 = -1LL;
	volatile int32_t t13 = INT32_MIN;

    t13 = (x53|(x54<=(x55==x56)));

    if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = UINT64_MAX;
	int32_t x58 = INT32_MIN;
	volatile int8_t x59 = 17;
	static uint32_t x60 = 121697296U;

    t14 = (x57|(x58<=(x59==x60)));

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = INT64_MIN;
	int16_t x62 = -1934;
	int16_t x63 = 27;
	volatile uint64_t x64 = 306543698087046LLU;
	static volatile int64_t t15 = 3206223296LL;

    t15 = (x61|(x62<=(x63==x64)));

    if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	uint64_t x66 = 717LLU;
	uint64_t x67 = 6213LLU;
	volatile int8_t x68 = INT8_MAX;
	volatile int32_t t16 = 18980019;

    t16 = (x65|(x66<=(x67==x68)));

    if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x70 = INT64_MIN;
	volatile int32_t t17 = 2893193;

    t17 = (x69|(x70<=(x71==x72)));

    if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x73 = UINT64_MAX;
	volatile int16_t x74 = INT16_MIN;
	int8_t x75 = INT8_MAX;
	int64_t x76 = -16758887LL;
	uint64_t t18 = UINT64_MAX;

    t18 = (x73|(x74<=(x75==x76)));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x78 = UINT64_MAX;
	int16_t x79 = -1;
	int8_t x80 = INT8_MIN;
	int32_t t19 = 311935067;

    t19 = (x77|(x78<=(x79==x80)));

    if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MAX;
	static int8_t x83 = INT8_MIN;
	int64_t x84 = INT64_MIN;
	int32_t t20 = 217153;

    t20 = (x81|(x82<=(x83==x84)));

    if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x86 = -9;
	int32_t x87 = -1611118;
	int64_t x88 = INT64_MAX;
	volatile int32_t t21 = 16;

    t21 = (x85|(x86<=(x87==x88)));

    if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = INT64_MIN;
	int64_t x90 = INT64_MAX;
	volatile int16_t x91 = 2306;
	static uint64_t x92 = UINT64_MAX;
	volatile int64_t t22 = INT64_MIN;

    t22 = (x89|(x90<=(x91==x92)));

    if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	int16_t x95 = 62;
	static int64_t x96 = INT64_MIN;
	int32_t t23 = INT32_MIN;

    t23 = (x93|(x94<=(x95==x96)));

    if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x97 = UINT8_MAX;
	volatile uint16_t x99 = 4819U;
	static int64_t x100 = INT64_MAX;
	int32_t t24 = -858240;

    t24 = (x97|(x98<=(x99==x100)));

    if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x102 = 26780809LLU;
	int8_t x103 = INT8_MIN;
	int64_t x104 = 24288198870393LL;

    t25 = (x101|(x102<=(x103==x104)));

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x107 = UINT16_MAX;
	static int32_t x108 = INT32_MIN;
	volatile int32_t t26 = -2918;

    t26 = (x105|(x106<=(x107==x108)));

    if (t26 != -13219) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = 1;
	int64_t x111 = -4242229457276704LL;
	int8_t x112 = INT8_MAX;
	volatile int32_t t27 = 1;

    t27 = (x109|(x110<=(x111==x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = INT16_MIN;
	int32_t x114 = 1;
	volatile int16_t x115 = INT16_MIN;
	static uint32_t x116 = 2043U;
	int32_t t28 = -50122706;

    t28 = (x113|(x114<=(x115==x116)));

    if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = 519731080;
	volatile int32_t x118 = INT32_MIN;
	int64_t x119 = 3189LL;
	uint16_t x120 = UINT16_MAX;

    t29 = (x117|(x118<=(x119==x120)));

    if (t29 != 519731081) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x121 = INT64_MAX;
	int16_t x122 = 6672;
	volatile uint8_t x123 = 61U;
	uint16_t x124 = 2254U;
	volatile int64_t t30 = INT64_MAX;

    t30 = (x121|(x122<=(x123==x124)));

    if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -7;
	uint32_t x126 = UINT32_MAX;
	int64_t x127 = INT64_MAX;
	uint16_t x128 = 729U;
	int32_t t31 = 386043183;

    t31 = (x125|(x126<=(x127==x128)));

    if (t31 != -7) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x130 = -1;
	volatile int64_t x132 = -1LL;
	volatile int32_t t32 = -4;

    t32 = (x129|(x130<=(x131==x132)));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 1727U;
	uint16_t x134 = 13583U;
	static int16_t x135 = 470;
	uint32_t t33 = 1676U;

    t33 = (x133|(x134<=(x135==x136)));

    if (t33 != 1727U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x138 = -1;
	int16_t x139 = -1;
	uint64_t x140 = 1932695615LLU;
	int32_t t34 = -1;

    t34 = (x137|(x138<=(x139==x140)));

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MAX;
	volatile uint32_t x142 = UINT32_MAX;
	volatile int16_t x143 = INT16_MIN;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = 43;

    t35 = (x141|(x142<=(x143==x144)));

    if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x145 = UINT32_MAX;
	static int16_t x146 = INT16_MAX;
	uint32_t x147 = UINT32_MAX;
	int8_t x148 = -1;
	volatile uint32_t t36 = UINT32_MAX;

    t36 = (x145|(x146<=(x147==x148)));

    if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = 1;
	int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MIN;

    t37 = (x149|(x150<=(x151==x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 858U;
	uint32_t x155 = 1U;
	static int32_t t38 = -975;

    t38 = (x153|(x154<=(x155==x156)));

    if (t38 != 859) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = 5U;
	int8_t x158 = 2;
	int16_t x159 = -1;
	int32_t t39 = -10;

    t39 = (x157|(x158<=(x159==x160)));

    if (t39 != 5) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x161 = -3235841;
	uint64_t x162 = 910780092LLU;
	uint16_t x163 = 26894U;
	int64_t x164 = INT64_MIN;
	volatile int32_t t40 = 418762;

    t40 = (x161|(x162<=(x163==x164)));

    if (t40 != -3235841) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = UINT32_MAX;
	volatile int16_t x166 = -57;
	uint32_t t41 = UINT32_MAX;

    t41 = (x165|(x166<=(x167==x168)));

    if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 230164513LLU;
	int16_t x170 = INT16_MIN;
	uint32_t x171 = UINT32_MAX;

    t42 = (x169|(x170<=(x171==x172)));

    if (t42 != 230164513LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MIN;
	int16_t x174 = INT16_MIN;
	volatile int16_t x175 = -1;
	int32_t x176 = -1;
	int32_t t43 = 19659;

    t43 = (x173|(x174<=(x175==x176)));

    if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x179 = INT16_MAX;
	uint8_t x180 = 17U;

    t44 = (x177|(x178<=(x179==x180)));

    if (t44 != 279) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = UINT64_MAX;
	volatile int64_t x182 = -1LL;
	volatile uint64_t t45 = UINT64_MAX;

    t45 = (x181|(x182<=(x183==x184)));

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = 0;
	volatile int64_t x186 = INT64_MAX;
	volatile int64_t x187 = -761035606LL;
	uint16_t x188 = 2519U;
	int32_t t46 = -1;

    t46 = (x185|(x186<=(x187==x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = 2976077821LL;
	uint64_t x190 = UINT64_MAX;
	volatile uint32_t x191 = 3847U;
	int16_t x192 = INT16_MIN;
	volatile int64_t t47 = -305275697LL;

    t47 = (x189|(x190<=(x191==x192)));

    if (t47 != 2976077821LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 1;
	uint32_t x195 = 1090333U;
	static int64_t x196 = 1054LL;
	static volatile int32_t t48 = 22;

    t48 = (x193|(x194<=(x195==x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 295U;
	uint32_t x199 = 3U;
	static int64_t x200 = 407LL;
	uint32_t t49 = 67U;

    t49 = (x197|(x198<=(x199==x200)));

    if (t49 != 295U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MAX;
	uint16_t x202 = UINT16_MAX;
	int32_t x203 = INT32_MIN;
	uint16_t x204 = 138U;
	int32_t t50 = INT32_MAX;

    t50 = (x201|(x202<=(x203==x204)));

    if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 302LLU;
	static volatile int16_t x206 = 690;
	static int8_t x207 = INT8_MIN;
	static int64_t x208 = INT64_MIN;
	uint64_t t51 = 11LLU;

    t51 = (x205|(x206<=(x207==x208)));

    if (t51 != 302LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	static uint8_t x210 = 3U;
	int64_t x212 = -1LL;
	int64_t t52 = -113640167616LL;

    t52 = (x209|(x210<=(x211==x212)));

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	int16_t x214 = -1;
	int16_t x215 = INT16_MAX;
	int32_t x216 = INT32_MIN;
	volatile int64_t t53 = 40375530910LL;

    t53 = (x213|(x214<=(x215==x216)));

    if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x217 = 14;
	static int16_t x219 = 3917;
	int8_t x220 = -1;
	int32_t t54 = -736405;

    t54 = (x217|(x218<=(x219==x220)));

    if (t54 != 14) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x222 = INT16_MIN;
	static uint8_t x223 = 33U;
	int8_t x224 = INT8_MIN;
	int32_t t55 = 169670;

    t55 = (x221|(x222<=(x223==x224)));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -129705885267LL;
	static volatile int64_t x226 = INT64_MAX;

    t56 = (x225|(x226<=(x227==x228)));

    if (t56 != -129705885267LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x229 = UINT16_MAX;
	int8_t x230 = INT8_MAX;
	uint64_t x231 = 40514631LLU;
	int32_t t57 = -1;

    t57 = (x229|(x230<=(x231==x232)));

    if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = 0;
	volatile uint32_t x234 = UINT32_MAX;
	int64_t x235 = -264LL;
	int64_t x236 = -1LL;
	volatile int32_t t58 = 235954864;

    t58 = (x233|(x234<=(x235==x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = UINT8_MAX;
	int16_t x239 = 34;
	static int64_t x240 = INT64_MIN;
	static volatile int32_t t59 = 6356;

    t59 = (x237|(x238<=(x239==x240)));

    if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x243 = 2U;
	static volatile int64_t t60 = -247544796329LL;

    t60 = (x241|(x242<=(x243==x244)));

    if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -1;
	uint32_t x247 = UINT32_MAX;
	volatile int32_t t61 = -1;

    t61 = (x245|(x246<=(x247==x248)));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x249 = INT64_MIN;
	static int64_t x250 = -1LL;

    t62 = (x249|(x250<=(x251==x252)));

    if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x253 = 931;
	volatile int64_t x255 = INT64_MIN;
	int8_t x256 = -1;
	volatile int32_t t63 = -99;

    t63 = (x253|(x254<=(x255==x256)));

    if (t63 != 931) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = 58;
	int8_t x259 = -1;
	static volatile int8_t x260 = -1;
	volatile int32_t t64 = -1;

    t64 = (x257|(x258<=(x259==x260)));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 39855U;
	int64_t x262 = -1976136367117LL;
	int64_t x263 = INT64_MIN;

    t65 = (x261|(x262<=(x263==x264)));

    if (t65 != 39855U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x265 = INT16_MIN;
	int64_t x266 = -444931582LL;
	static int16_t x267 = INT16_MIN;
	uint16_t x268 = 1U;
	volatile int32_t t66 = 10887;

    t66 = (x265|(x266<=(x267==x268)));

    if (t66 != -32767) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x269 = INT64_MIN;
	int32_t x270 = -1;
	volatile int32_t x271 = INT32_MIN;
	int32_t x272 = -78405603;
	volatile int64_t t67 = -3168422024451433710LL;

    t67 = (x269|(x270<=(x271==x272)));

    if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x274 = 3;
	volatile int64_t x276 = INT64_MIN;
	int32_t t68 = -821859;

    t68 = (x273|(x274<=(x275==x276)));

    if (t68 != 887713) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = 241;
	int16_t x280 = INT16_MAX;
	static int32_t t69 = -48344;

    t69 = (x277|(x278<=(x279==x280)));

    if (t69 != 241) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x282 = INT16_MAX;
	volatile int64_t x283 = 4436818879342406LL;

    t70 = (x281|(x282<=(x283==x284)));

    if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = UINT8_MAX;
	int64_t x286 = 22169652395426LL;
	volatile uint16_t x287 = 2U;
	static volatile int32_t x288 = INT32_MIN;
	static volatile int32_t t71 = 945760760;

    t71 = (x285|(x286<=(x287==x288)));

    if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MAX;
	volatile int16_t x290 = INT16_MIN;
	static int16_t x291 = INT16_MIN;
	int32_t x292 = INT32_MIN;
	static int32_t t72 = -940;

    t72 = (x289|(x290<=(x291==x292)));

    if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x294 = INT64_MIN;
	volatile uint64_t x296 = UINT64_MAX;
	uint32_t t73 = 6150966U;

    t73 = (x293|(x294<=(x295==x296)));

    if (t73 != 55U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x297 = INT8_MIN;
	uint16_t x298 = 324U;
	uint32_t x299 = 357303U;
	int16_t x300 = -1;
	int32_t t74 = -1;

    t74 = (x297|(x298<=(x299==x300)));

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = 2LL;
	static uint32_t x302 = 303141042U;
	uint32_t x303 = UINT32_MAX;
	volatile int64_t t75 = -93568292112LL;

    t75 = (x301|(x302<=(x303==x304)));

    if (t75 != 2LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x305 = 60599U;
	static int64_t x306 = -435689168174978LL;
	int16_t x307 = INT16_MIN;
	int16_t x308 = INT16_MIN;
	volatile uint32_t t76 = 35753U;

    t76 = (x305|(x306<=(x307==x308)));

    if (t76 != 60599U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 3280914U;
	volatile int32_t x310 = INT32_MAX;
	int64_t x311 = -87440505454943LL;
	static volatile uint32_t t77 = 447U;

    t77 = (x309|(x310<=(x311==x312)));

    if (t77 != 3280914U) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x314 = INT64_MIN;
	int32_t t78 = 19766;

    t78 = (x313|(x314<=(x315==x316)));

    if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x318 = -1LL;
	static int16_t x320 = INT16_MIN;
	int32_t t79 = -10197356;

    t79 = (x317|(x318<=(x319==x320)));

    if (t79 != 9) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = INT32_MAX;
	volatile int64_t x322 = -474848525724933LL;
	static int64_t x323 = -4464861534133LL;
	static uint64_t x324 = 307112774LLU;
	int32_t t80 = INT32_MAX;

    t80 = (x321|(x322<=(x323==x324)));

    if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = UINT16_MAX;
	static int32_t x327 = INT32_MIN;
	int32_t t81 = 4930439;

    t81 = (x325|(x326<=(x327==x328)));

    if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x330 = -1;
	volatile int64_t x331 = INT64_MAX;
	volatile int32_t t82 = 1027771;

    t82 = (x329|(x330<=(x331==x332)));

    if (t82 != 7915) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -1;
	uint16_t x334 = 1158U;
	int32_t x335 = 1881;
	static int8_t x336 = -8;
	int32_t t83 = 10506;

    t83 = (x333|(x334<=(x335==x336)));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x337 = INT64_MIN;
	int8_t x339 = -3;
	uint8_t x340 = 34U;

    t84 = (x337|(x338<=(x339==x340)));

    if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MAX;
	int8_t x342 = INT8_MIN;
	static volatile int32_t x343 = 1041;
	static int16_t x344 = -1;

    t85 = (x341|(x342<=(x343==x344)));

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = UINT16_MAX;
	static volatile int32_t x346 = INT32_MAX;
	uint32_t x348 = 14U;

    t86 = (x345|(x346<=(x347==x348)));

    if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int64_t x349 = INT64_MAX;
	int16_t x350 = INT16_MIN;
	int64_t x351 = INT64_MIN;
	uint16_t x352 = 956U;
	int64_t t87 = INT64_MAX;

    t87 = (x349|(x350<=(x351==x352)));

    if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x354 = 7U;
	int8_t x355 = -1;
	uint16_t x356 = UINT16_MAX;

    t88 = (x353|(x354<=(x355==x356)));

    if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = 352861660861LL;
	static volatile int32_t x358 = INT32_MIN;
	int64_t x360 = INT64_MAX;

    t89 = (x357|(x358<=(x359==x360)));

    if (t89 != 352861660861LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = UINT8_MAX;
	static volatile uint32_t x363 = 37472786U;
	int8_t x364 = INT8_MIN;
	int32_t t90 = -1936;

    t90 = (x361|(x362<=(x363==x364)));

    if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x365 = INT8_MAX;
	static volatile uint16_t x366 = 1908U;
	uint32_t x368 = UINT32_MAX;
	volatile int32_t t91 = 8034;

    t91 = (x365|(x366<=(x367==x368)));

    if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	uint32_t x371 = UINT32_MAX;
	int32_t t92 = INT32_MIN;

    t92 = (x369|(x370<=(x371==x372)));

    if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -1LL;
	int16_t x374 = -1;
	uint32_t x375 = 2185U;
	uint64_t x376 = 1602072334757LLU;
	int64_t t93 = -599086816LL;

    t93 = (x373|(x374<=(x375==x376)));

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = UINT16_MAX;
	static int32_t x380 = INT32_MIN;
	int32_t t94 = -8139940;

    t94 = (x377|(x378<=(x379==x380)));

    if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = 762U;
	uint32_t x382 = 376406794U;
	volatile int64_t x383 = 181708971689LL;
	static uint8_t x384 = 2U;
	volatile int32_t t95 = -556948104;

    t95 = (x381|(x382<=(x383==x384)));

    if (t95 != 762) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = -1;
	volatile uint16_t x386 = 234U;
	int32_t x387 = 20039553;
	static int16_t x388 = INT16_MIN;
	volatile int32_t t96 = 13055;

    t96 = (x385|(x386<=(x387==x388)));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MAX;
	uint64_t x390 = UINT64_MAX;
	static int32_t x392 = INT32_MAX;
	int32_t t97 = INT32_MAX;

    t97 = (x389|(x390<=(x391==x392)));

    if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x394 = -1;
	int16_t x396 = INT16_MIN;

    t98 = (x393|(x394<=(x395==x396)));

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x397 = 55U;
	int16_t x398 = 3;
	int16_t x399 = -1;
	int32_t x400 = 122008;
	int32_t t99 = -7166833;

    t99 = (x397|(x398<=(x399==x400)));

    if (t99 != 55) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x403 = -127966112;
	int8_t x404 = -1;

    t100 = (x401|(x402<=(x403==x404)));

    if (t100 != 31103) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x405 = UINT32_MAX;
	static int32_t x406 = INT32_MAX;
	static int32_t x408 = 3773;
	volatile uint32_t t101 = UINT32_MAX;

    t101 = (x405|(x406<=(x407==x408)));

    if (t101 != UINT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = -1LL;
	volatile int64_t x410 = 197558458LL;

    t102 = (x409|(x410<=(x411==x412)));

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int64_t x413 = -60001LL;
	volatile int8_t x414 = INT8_MIN;
	volatile int64_t x415 = INT64_MIN;
	static int16_t x416 = INT16_MAX;

    t103 = (x413|(x414<=(x415==x416)));

    if (t103 != -60001LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = -61;
	static int64_t x419 = -463845987341357187LL;
	volatile int32_t x420 = 7;
	int32_t t104 = -892551;

    t104 = (x417|(x418<=(x419==x420)));

    if (t104 != -61) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x421 = 7U;
	uint8_t x423 = 2U;
	int32_t x424 = INT32_MIN;

    t105 = (x421|(x422<=(x423==x424)));

    if (t105 != 7) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x426 = INT16_MAX;
	int32_t t106 = 130498;

    t106 = (x425|(x426<=(x427==x428)));

    if (t106 != 255) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -1LL;
	static int32_t x431 = -1;
	volatile int64_t x432 = INT64_MIN;
	static volatile int64_t t107 = 10506301850LL;

    t107 = (x429|(x430<=(x431==x432)));

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x434 = 781U;
	int16_t x435 = INT16_MIN;
	int32_t x436 = INT32_MAX;
	volatile int32_t t108 = 2815;

    t108 = (x433|(x434<=(x435==x436)));

    if (t108 != 5) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x437 = -7054;
	volatile int32_t x439 = INT32_MAX;

    t109 = (x437|(x438<=(x439==x440)));

    if (t109 != -7053) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 26270285U;
	uint32_t x442 = UINT32_MAX;
	volatile int16_t x443 = INT16_MIN;
	uint32_t t110 = 38263U;

    t110 = (x441|(x442<=(x443==x444)));

    if (t110 != 26270285U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x445 = 823U;
	volatile uint32_t x446 = 3458696U;
	int32_t x447 = -1;

    t111 = (x445|(x446<=(x447==x448)));

    if (t111 != 823U) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x449 = -62;
	volatile int8_t x451 = INT8_MAX;
	static int16_t x452 = INT16_MAX;
	volatile int32_t t112 = 816;

    t112 = (x449|(x450<=(x451==x452)));

    if (t112 != -62) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x454 = INT32_MIN;
	static int16_t x456 = INT16_MIN;
	static volatile uint32_t t113 = 12772531U;

    t113 = (x453|(x454<=(x455==x456)));

    if (t113 != 65842667U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 31940U;
	static uint16_t x458 = 25U;
	uint64_t x460 = UINT64_MAX;
	int32_t t114 = -1994633;

    t114 = (x457|(x458<=(x459==x460)));

    if (t114 != 31940) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x461 = 73662982U;
	uint32_t x462 = 678515786U;
	int16_t x463 = -1;

    t115 = (x461|(x462<=(x463==x464)));

    if (t115 != 73662982U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = 9723LLU;
	volatile int32_t x466 = INT32_MIN;
	int32_t x468 = INT32_MIN;
	static uint64_t t116 = 2306092LLU;

    t116 = (x465|(x466<=(x467==x468)));

    if (t116 != 9723LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 3384U;
	int8_t x471 = INT8_MAX;
	int8_t x472 = 0;
	static volatile uint32_t t117 = 3471395U;

    t117 = (x469|(x470<=(x471==x472)));

    if (t117 != 3384U) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x473 = -1;
	volatile uint32_t x474 = 6909826U;
	int8_t x475 = 32;
	int64_t x476 = -1LL;

    t118 = (x473|(x474<=(x475==x476)));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = -261;
	int32_t x478 = 592;
	int64_t x479 = INT64_MIN;
	int32_t t119 = 2;

    t119 = (x477|(x478<=(x479==x480)));

    if (t119 != -261) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x481 = INT16_MIN;
	int16_t x482 = INT16_MAX;
	int16_t x483 = INT16_MIN;
	int8_t x484 = INT8_MAX;
	volatile int32_t t120 = -14666;

    t120 = (x481|(x482<=(x483==x484)));

    if (t120 != -32768) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MAX;
	int64_t x486 = INT64_MAX;
	uint16_t x487 = 25U;
	volatile uint64_t x488 = 0LLU;

    t121 = (x485|(x486<=(x487==x488)));

    if (t121 != 32767) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x489 = INT64_MAX;
	int16_t x490 = INT16_MIN;
	uint32_t x491 = UINT32_MAX;
	static uint64_t x492 = 3240397578184LLU;
	static int64_t t122 = INT64_MAX;

    t122 = (x489|(x490<=(x491==x492)));

    if (t122 != INT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x494 = -1;
	volatile uint8_t x495 = 12U;
	static volatile int64_t x496 = 759763572866656LL;
	volatile int32_t t123 = -305;

    t123 = (x493|(x494<=(x495==x496)));

    if (t123 != -37) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x497 = -1;
	int64_t x498 = INT64_MAX;
	uint64_t x499 = UINT64_MAX;
	int64_t x500 = INT64_MIN;
	volatile int32_t t124 = -2163;

    t124 = (x497|(x498<=(x499==x500)));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int8_t x502 = INT8_MAX;
	int32_t t125 = 378;

    t125 = (x501|(x502<=(x503==x504)));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	uint32_t x506 = 243395143U;
	int32_t x507 = INT32_MIN;
	int32_t t126 = 945759;

    t126 = (x505|(x506<=(x507==x508)));

    if (t126 != -128) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MAX;
	int32_t x510 = INT32_MAX;
	int32_t x511 = -1;
	volatile int32_t t127 = 1;

    t127 = (x509|(x510<=(x511==x512)));

    if (t127 != 127) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x515 = INT32_MIN;
	volatile uint8_t x516 = UINT8_MAX;
	volatile uint64_t t128 = 150251965136936231LLU;

    t128 = (x513|(x514<=(x515==x516)));

    if (t128 != 33249315LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x517 = -1;
	uint8_t x518 = UINT8_MAX;
	int16_t x519 = -658;
	static int16_t x520 = 572;

    t129 = (x517|(x518<=(x519==x520)));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MIN;
	int8_t x522 = -1;
	int8_t x523 = INT8_MAX;
	uint64_t x524 = UINT64_MAX;
	int32_t t130 = 932939;

    t130 = (x521|(x522<=(x523==x524)));

    if (t130 != -127) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = 563;
	static uint8_t x527 = 16U;

    t131 = (x525|(x526<=(x527==x528)));

    if (t131 != 563) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x530 = -1;
	int16_t x531 = INT16_MAX;
	int64_t x532 = INT64_MIN;
	volatile int32_t t132 = -750;

    t132 = (x529|(x530<=(x531==x532)));

    if (t132 != -32767) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MIN;
	static int16_t x534 = -125;
	uint8_t x535 = 76U;
	int32_t t133 = 497559213;

    t133 = (x533|(x534<=(x535==x536)));

    if (t133 != -127) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	volatile int16_t x538 = INT16_MIN;
	int32_t x540 = -1;

    t134 = (x537|(x538<=(x539==x540)));

    if (t134 != -2147483647) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = -1237688LL;
	int16_t x544 = INT16_MAX;

    t135 = (x541|(x542<=(x543==x544)));

    if (t135 != -1237688LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = 72172LLU;
	uint32_t x547 = UINT32_MAX;
	int16_t x548 = -1;
	volatile uint64_t t136 = 61342LLU;

    t136 = (x545|(x546<=(x547==x548)));

    if (t136 != 72172LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = -1LL;
	volatile int64_t x550 = -1LL;
	static int64_t x551 = INT64_MAX;
	static int64_t x552 = INT64_MIN;

    t137 = (x549|(x550<=(x551==x552)));

    if (t137 != -1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x553 = 121243148;
	volatile uint8_t x555 = 49U;
	static uint64_t x556 = 33315LLU;
	int32_t t138 = -3;

    t138 = (x553|(x554<=(x555==x556)));

    if (t138 != 121243148) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x557 = INT8_MIN;
	volatile uint8_t x558 = UINT8_MAX;
	volatile int8_t x559 = -1;
	volatile int32_t x560 = INT32_MIN;
	static volatile int32_t t139 = 65;

    t139 = (x557|(x558<=(x559==x560)));

    if (t139 != -128) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	volatile uint32_t x563 = 591540273U;
	static volatile int32_t x564 = INT32_MAX;
	int32_t t140 = INT32_MIN;

    t140 = (x561|(x562<=(x563==x564)));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MAX;
	int16_t x566 = -1;
	static int64_t x567 = INT64_MAX;
	static uint64_t x568 = 1767351427694664LLU;
	volatile int64_t t141 = INT64_MAX;

    t141 = (x565|(x566<=(x567==x568)));

    if (t141 != INT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x569 = 233868008LL;
	uint32_t x570 = 0U;
	int8_t x571 = -1;
	volatile int16_t x572 = INT16_MAX;
	int64_t t142 = -2445488683555114541LL;

    t142 = (x569|(x570<=(x571==x572)));

    if (t142 != 233868009LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x574 = INT16_MIN;
	static volatile uint8_t x575 = 1U;
	uint64_t t143 = 23857780LLU;

    t143 = (x573|(x574<=(x575==x576)));

    if (t143 != 12748690257LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x577 = 109304204403364422LLU;
	static uint16_t x578 = 192U;
	uint8_t x579 = 96U;
	static volatile uint64_t t144 = 60775LLU;

    t144 = (x577|(x578<=(x579==x580)));

    if (t144 != 109304204403364422LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = -1;
	uint64_t x583 = 208805LLU;
	int32_t x584 = INT32_MAX;
	int32_t t145 = -7;

    t145 = (x581|(x582<=(x583==x584)));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x585 = 598;
	static int8_t x586 = -1;
	static uint8_t x587 = 5U;
	volatile int32_t t146 = 11;

    t146 = (x585|(x586<=(x587==x588)));

    if (t146 != 599) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	volatile int8_t x590 = INT8_MIN;
	static int8_t x591 = 0;
	uint32_t x592 = 35839U;
	int32_t t147 = 14750516;

    t147 = (x589|(x590<=(x591==x592)));

    if (t147 != -2147483647) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 1071LLU;
	uint64_t x595 = 17252688318547772LLU;
	int16_t x596 = -1;
	volatile uint64_t t148 = 132041452LLU;

    t148 = (x593|(x594<=(x595==x596)));

    if (t148 != 1071LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x598 = -1;
	int32_t x599 = INT32_MIN;
	int32_t t149 = 234851705;

    t149 = (x597|(x598<=(x599==x600)));

    if (t149 != 1587) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x603 = INT8_MAX;
	static uint64_t x604 = 20800536993LLU;
	int32_t t150 = -7;

    t150 = (x601|(x602<=(x603==x604)));

    if (t150 != 3267) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = -1;
	int64_t x606 = INT64_MIN;
	int16_t x607 = -1;
	volatile int16_t x608 = 0;
	int32_t t151 = 0;

    t151 = (x605|(x606<=(x607==x608)));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	static int16_t x611 = INT16_MIN;
	volatile int32_t t152 = -1;

    t152 = (x609|(x610<=(x611==x612)));

    if (t152 != -2147483647) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = INT16_MIN;
	static uint8_t x614 = 0U;
	int64_t x615 = -1LL;
	int32_t t153 = 95617134;

    t153 = (x613|(x614<=(x615==x616)));

    if (t153 != -32767) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MIN;
	static uint16_t x619 = 24065U;
	int64_t x620 = INT64_MAX;
	int64_t t154 = -2LL;

    t154 = (x617|(x618<=(x619==x620)));

    if (t154 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x621 = -38807278LL;
	int32_t x622 = 1441;
	volatile int16_t x623 = INT16_MIN;
	uint32_t x624 = 31861613U;

    t155 = (x621|(x622<=(x623==x624)));

    if (t155 != -38807278LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x625 = -1;
	uint64_t x626 = UINT64_MAX;
	volatile int32_t x628 = INT32_MIN;
	volatile int32_t t156 = 0;

    t156 = (x625|(x626<=(x627==x628)));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = 2;
	int16_t x631 = 0;
	static int32_t x632 = INT32_MAX;
	volatile int32_t t157 = 46708;

    t157 = (x629|(x630<=(x631==x632)));

    if (t157 != 3) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x633 = INT32_MAX;
	static int16_t x634 = INT16_MIN;
	int32_t x635 = INT32_MIN;
	int8_t x636 = -1;
	volatile int32_t t158 = INT32_MAX;

    t158 = (x633|(x634<=(x635==x636)));

    if (t158 != INT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x638 = INT32_MIN;
	int64_t x639 = INT64_MAX;
	volatile int64_t t159 = -193506838880299243LL;

    t159 = (x637|(x638<=(x639==x640)));

    if (t159 != 1843112340145711LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = 584U;
	uint16_t x642 = 4329U;
	static int16_t x644 = -1;

    t160 = (x641|(x642<=(x643==x644)));

    if (t160 != 584U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x645 = INT8_MAX;
	int8_t x647 = -1;
	uint8_t x648 = 9U;
	int32_t t161 = 1726799;

    t161 = (x645|(x646<=(x647==x648)));

    if (t161 != 127) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x651 = UINT8_MAX;

    t162 = (x649|(x650<=(x651==x652)));

    if (t162 != -128) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = UINT64_MAX;
	uint8_t x654 = 1U;
	volatile uint16_t x655 = 1539U;
	volatile uint32_t x656 = 768199874U;
	static uint64_t t163 = UINT64_MAX;

    t163 = (x653|(x654<=(x655==x656)));

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x657 = 686429016U;
	uint64_t x658 = UINT64_MAX;
	static int8_t x659 = INT8_MIN;
	int64_t x660 = INT64_MAX;
	uint32_t t164 = 3U;

    t164 = (x657|(x658<=(x659==x660)));

    if (t164 != 686429016U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -10;
	uint64_t x662 = 112169LLU;
	int8_t x663 = INT8_MIN;
	uint32_t x664 = 2399268U;
	int32_t t165 = -171;

    t165 = (x661|(x662<=(x663==x664)));

    if (t165 != -10) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MIN;
	uint32_t x666 = UINT32_MAX;
	static int64_t x667 = INT64_MIN;
	volatile int64_t x668 = INT64_MAX;
	static int32_t t166 = 6681;

    t166 = (x665|(x666<=(x667==x668)));

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x670 = -1LL;
	volatile uint16_t x671 = 0U;
	int32_t x672 = -1;
	static int32_t t167 = 1468284;

    t167 = (x669|(x670<=(x671==x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = 1856;
	uint16_t x674 = 250U;
	uint32_t x676 = 38844038U;
	static volatile int32_t t168 = 13505;

    t168 = (x673|(x674<=(x675==x676)));

    if (t168 != 1856) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MIN;
	int64_t x678 = INT64_MIN;
	uint64_t x680 = 542460386595357LLU;
	int32_t t169 = 291;

    t169 = (x677|(x678<=(x679==x680)));

    if (t169 != -32767) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MAX;
	static uint32_t x682 = 133U;
	int32_t x683 = -17969893;
	int8_t x684 = INT8_MAX;
	volatile int32_t t170 = 136;

    t170 = (x681|(x682<=(x683==x684)));

    if (t170 != 127) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = 75U;
	uint16_t x686 = UINT16_MAX;
	int64_t x687 = INT64_MAX;
	volatile int16_t x688 = INT16_MIN;
	int32_t t171 = -14273103;

    t171 = (x685|(x686<=(x687==x688)));

    if (t171 != 75) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x690 = 74U;
	volatile uint32_t x691 = 21638049U;
	uint64_t x692 = 214813LLU;
	int32_t t172 = 7597178;

    t172 = (x689|(x690<=(x691==x692)));

    if (t172 != -128) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	int32_t x694 = INT32_MIN;
	volatile uint16_t x695 = UINT16_MAX;
	volatile uint32_t x696 = 4U;
	int32_t t173 = 7914570;

    t173 = (x693|(x694<=(x695==x696)));

    if (t173 != -127) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = 6258U;
	int8_t x698 = INT8_MAX;
	static volatile int32_t x699 = INT32_MIN;
	int64_t x700 = INT64_MIN;

    t174 = (x697|(x698<=(x699==x700)));

    if (t174 != 6258) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x702 = INT16_MAX;
	static int16_t x703 = INT16_MIN;
	volatile int32_t t175 = 401490;

    t175 = (x701|(x702<=(x703==x704)));

    if (t175 != -77567) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int64_t x705 = 849063205733292LL;
	int16_t x706 = 0;
	static volatile int32_t x707 = INT32_MIN;
	uint64_t x708 = UINT64_MAX;
	int64_t t176 = 221LL;

    t176 = (x705|(x706<=(x707==x708)));

    if (t176 != 849063205733293LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint16_t x709 = 3273U;
	uint32_t x711 = 3U;
	int8_t x712 = 0;
	volatile int32_t t177 = 3288;

    t177 = (x709|(x710<=(x711==x712)));

    if (t177 != 3273) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = 21973763804503LL;
	int16_t x714 = INT16_MIN;
	int16_t x715 = 1222;
	volatile int64_t t178 = -785365222LL;

    t178 = (x713|(x714<=(x715==x716)));

    if (t178 != 21973763804503LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x719 = 3U;
	volatile int16_t x720 = 88;

    t179 = (x717|(x718<=(x719==x720)));

    if (t179 != -127) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x721 = INT32_MIN;
	static uint64_t x722 = 765238275374LLU;
	int8_t x723 = -23;
	volatile int32_t t180 = INT32_MIN;

    t180 = (x721|(x722<=(x723==x724)));

    if (t180 != INT32_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x726 = INT32_MIN;
	int32_t x727 = INT32_MIN;
	static int64_t x728 = -1LL;
	int32_t t181 = -59555804;

    t181 = (x725|(x726<=(x727==x728)));

    if (t181 != -2147483647) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 10U;
	uint16_t x730 = 36U;
	volatile uint8_t x731 = 0U;
	volatile int32_t t182 = 7;

    t182 = (x729|(x730<=(x731==x732)));

    if (t182 != 10) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x733 = UINT16_MAX;
	static int16_t x735 = INT16_MIN;
	static int32_t x736 = -1;
	int32_t t183 = -87986;

    t183 = (x733|(x734<=(x735==x736)));

    if (t183 != 65535) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -1;
	static int64_t x739 = -17LL;
	uint16_t x740 = 182U;
	int32_t t184 = -236;

    t184 = (x737|(x738<=(x739==x740)));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = -1;
	int16_t x742 = INT16_MIN;
	int64_t x743 = INT64_MIN;
	int32_t x744 = INT32_MIN;

    t185 = (x741|(x742<=(x743==x744)));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x745 = -16665318;
	volatile uint32_t x746 = UINT32_MAX;
	volatile uint32_t x747 = 15255304U;

    t186 = (x745|(x746<=(x747==x748)));

    if (t186 != -16665318) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = UINT32_MAX;
	static volatile int8_t x750 = INT8_MAX;
	static int32_t x752 = -2342;
	uint32_t t187 = UINT32_MAX;

    t187 = (x749|(x750<=(x751==x752)));

    if (t187 != UINT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MAX;
	uint16_t x754 = UINT16_MAX;
	static uint16_t x755 = UINT16_MAX;
	volatile int32_t t188 = 3044088;

    t188 = (x753|(x754<=(x755==x756)));

    if (t188 != 127) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MAX;
	static volatile uint8_t x758 = 2U;
	uint64_t x759 = 2668686LLU;
	int32_t x760 = 56561704;

    t189 = (x757|(x758<=(x759==x760)));

    if (t189 != INT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x761 = INT32_MAX;
	uint64_t x762 = 1061519132184594LLU;
	int32_t x764 = -69;
	volatile int32_t t190 = INT32_MAX;

    t190 = (x761|(x762<=(x763==x764)));

    if (t190 != INT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x766 = UINT16_MAX;
	static int32_t x767 = INT32_MIN;
	volatile int32_t x768 = INT32_MIN;
	static int32_t t191 = 346;

    t191 = (x765|(x766<=(x767==x768)));

    if (t191 != -32768) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int64_t x769 = 1940885483LL;
	int16_t x770 = -1;
	static uint16_t x772 = UINT16_MAX;

    t192 = (x769|(x770<=(x771==x772)));

    if (t192 != 1940885483LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x776 = INT8_MAX;

    t193 = (x773|(x774<=(x775==x776)));

    if (t193 != 36) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x779 = -1LL;
	static uint16_t x780 = 578U;
	int32_t t194 = 1102;

    t194 = (x777|(x778<=(x779==x780)));

    if (t194 != -128) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x781 = -1;
	int64_t x782 = INT64_MAX;
	static uint16_t x783 = 7U;
	int64_t x784 = INT64_MIN;

    t195 = (x781|(x782<=(x783==x784)));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x785 = 13U;
	uint64_t x786 = 14984790433116LLU;
	int32_t x787 = INT32_MAX;
	int32_t x788 = INT32_MIN;
	volatile int32_t t196 = 2841;

    t196 = (x785|(x786<=(x787==x788)));

    if (t196 != 13) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x790 = INT32_MIN;
	static int8_t x791 = INT8_MIN;
	uint16_t x792 = 88U;
	int32_t t197 = INT32_MAX;

    t197 = (x789|(x790<=(x791==x792)));

    if (t197 != INT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 11U;
	uint8_t x794 = 111U;
	uint16_t x795 = 131U;
	int16_t x796 = 61;

    t198 = (x793|(x794<=(x795==x796)));

    if (t198 != 11) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = 1;
	static int8_t x798 = INT8_MAX;
	static uint8_t x799 = 24U;
	uint8_t x800 = 4U;
	int32_t t199 = 4085;

    t199 = (x797|(x798<=(x799==x800)));

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

