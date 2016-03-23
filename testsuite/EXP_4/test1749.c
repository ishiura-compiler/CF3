
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

int32_t x12 = INT32_MIN;
int32_t x15 = INT32_MAX;
int8_t x20 = INT8_MIN;
int16_t x21 = -3670;
uint8_t x24 = 1U;
static volatile int32_t x25 = 31;
uint32_t x26 = 0U;
static uint32_t x31 = UINT32_MAX;
volatile int64_t x33 = 3923141244576LL;
static volatile int16_t x37 = -1;
int32_t x39 = -1;
int8_t x40 = INT8_MIN;
static volatile int64_t t11 = -314834193538833LL;
static volatile int32_t t13 = 221;
int64_t x69 = INT64_MIN;
volatile int64_t t17 = 3800074442877847790LL;
int64_t x78 = INT64_MIN;
volatile int16_t x90 = INT16_MAX;
int64_t x93 = 4182244841728LL;
int64_t x97 = INT64_MIN;
int16_t x99 = -1;
volatile int64_t t24 = -1407LL;
static int8_t x106 = 29;
uint8_t x109 = UINT8_MAX;
int8_t x140 = -1;
static volatile int64_t t34 = -171554369298258946LL;
uint16_t x142 = 51U;
int64_t t35 = -33030843LL;
uint16_t x148 = 3U;
volatile int16_t x152 = -87;
volatile uint32_t x154 = UINT32_MAX;
volatile uint32_t x161 = 15621U;
int64_t x162 = -2077013LL;
volatile int16_t x164 = -3064;
uint16_t x169 = 1985U;
uint32_t x171 = 422918771U;
int64_t x178 = INT64_MAX;
int32_t x180 = INT32_MIN;
uint16_t x182 = 1024U;
static volatile int64_t t47 = 3525955697797226LL;
static int64_t x194 = INT64_MAX;
volatile int64_t x200 = INT64_MIN;
int64_t x201 = INT64_MIN;
uint64_t x203 = 1629057LLU;
int32_t t51 = -1;
volatile int8_t x214 = INT8_MIN;
static volatile int64_t t54 = 1087577965496361783LL;
uint16_t x229 = UINT16_MAX;
uint32_t x235 = 53139U;
static int16_t x242 = -2837;
volatile int64_t t60 = -16778111968786400LL;
static volatile uint16_t x247 = UINT16_MAX;
int64_t x252 = -1LL;
volatile uint32_t t63 = 7392681U;
uint32_t x258 = UINT32_MAX;
int64_t x259 = 122901697LL;
static int32_t x264 = -1;
static volatile uint64_t x266 = 85989364627LLU;
int32_t x269 = -1;
int32_t x279 = INT32_MAX;
static uint32_t t69 = UINT32_MAX;
int64_t x281 = INT64_MIN;
int16_t x282 = INT16_MAX;
int64_t x286 = INT64_MIN;
int8_t x287 = INT8_MIN;
static int16_t x292 = INT16_MIN;
int16_t x300 = 22;
volatile int8_t x307 = -1;
static uint16_t x312 = UINT16_MAX;
int64_t t79 = -166389299469LL;
volatile int16_t x325 = -1;
int64_t x326 = 93598268LL;
static uint32_t x327 = 1U;
int64_t x328 = INT64_MAX;
int64_t t81 = -1122681301681712LL;
volatile int64_t x331 = -1LL;
static volatile int8_t x332 = INT8_MIN;
int64_t x334 = INT64_MIN;
uint16_t x349 = 1546U;
int64_t x352 = INT64_MIN;
volatile uint32_t x357 = UINT32_MAX;
volatile uint32_t t89 = UINT32_MAX;
static int32_t t90 = -942;
static volatile uint64_t x367 = UINT64_MAX;
uint32_t x372 = 15448U;
volatile int32_t t92 = INT32_MAX;
volatile int64_t x374 = 6LL;
int64_t t93 = 284551631970LL;
volatile uint64_t x380 = UINT64_MAX;
uint32_t x382 = 0U;
int64_t x384 = -5LL;
int32_t x385 = 304586;
int16_t x389 = 139;
static volatile int32_t x391 = INT32_MIN;
volatile uint16_t x396 = 2U;
int64_t x398 = -1914643LL;
int32_t x403 = -158;
int32_t x409 = INT32_MIN;
int32_t t103 = -261988;
int32_t x421 = INT32_MIN;
int64_t x422 = INT64_MIN;
int32_t x427 = -1;
int64_t t106 = -2074611LL;
static int32_t x429 = -122;
static volatile int64_t x432 = 0LL;
static int16_t x433 = INT16_MIN;
uint8_t x435 = 33U;
int32_t x446 = -80;
static int32_t x447 = -1;
static volatile int16_t x449 = INT16_MAX;
volatile int8_t x451 = INT8_MIN;
uint64_t x463 = 827607157LLU;
volatile int8_t x471 = -1;
int64_t t117 = 2292090939358LL;
static int64_t x474 = 105074580766138141LL;
uint8_t x485 = 30U;
volatile int8_t x490 = -1;
int32_t x495 = INT32_MIN;
int32_t t123 = -432443567;
int8_t x502 = 9;
int8_t x510 = INT8_MAX;
uint16_t x515 = 3U;
int16_t x517 = INT16_MIN;
int8_t x519 = -55;
static volatile int32_t x520 = -1;
int32_t x528 = INT32_MIN;
int64_t x532 = -1LL;
int8_t x535 = INT8_MIN;
volatile int64_t t133 = 17872885902543LL;
int8_t x538 = 7;
uint64_t x542 = 7955880LLU;
static int8_t x543 = INT8_MAX;
static int16_t x553 = INT16_MAX;
volatile int8_t x554 = -1;
static volatile int32_t x556 = -1;
int16_t x560 = INT16_MIN;
static uint32_t t139 = 20763234U;
int8_t x579 = -1;
static int16_t x582 = INT16_MIN;
uint8_t x586 = UINT8_MAX;
uint64_t x589 = UINT64_MAX;
int16_t x590 = INT16_MIN;
int32_t t148 = -2428;
uint64_t x600 = 272LLU;
static int32_t x613 = -1;
static volatile uint32_t x618 = UINT32_MAX;
volatile uint32_t t154 = UINT32_MAX;
int16_t x621 = -1;
int16_t x626 = INT16_MIN;
int32_t x628 = 51;
int32_t x634 = 4105;
int8_t x635 = INT8_MAX;
volatile int8_t x642 = -1;
int16_t x645 = -1;
int32_t x647 = -1;
uint32_t x648 = 226564U;
int16_t x649 = INT16_MIN;
uint32_t x657 = UINT32_MAX;
int64_t x662 = -1LL;
int16_t x669 = -1;
uint16_t x670 = 115U;
uint64_t x673 = UINT64_MAX;
static int16_t x677 = INT16_MIN;
uint32_t x683 = 157U;
static int64_t x690 = INT64_MIN;
static int8_t x692 = 22;
int64_t t172 = 244880523224599LL;
volatile uint8_t x699 = 1U;
int32_t x702 = INT32_MAX;
int32_t x706 = -1783;
int8_t x716 = INT8_MAX;
volatile int16_t x724 = -1;
int32_t x726 = INT32_MIN;
int64_t x729 = -1LL;
volatile int64_t x739 = 62313LL;
uint8_t x743 = 0U;
volatile int32_t t185 = -7987551;
volatile uint16_t x746 = 2U;
volatile uint16_t x753 = 2314U;
uint8_t x755 = UINT8_MAX;
int16_t x760 = INT16_MAX;
int64_t x767 = INT64_MIN;
int8_t x773 = -1;
int64_t x774 = INT64_MAX;
static uint32_t x784 = UINT32_MAX;
volatile int32_t t196 = 3;
uint64_t x789 = 4052607106105704814LLU;
int64_t x798 = INT64_MIN;
uint16_t x800 = 6U;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	static int32_t x2 = -1;
	static uint16_t x3 = 0U;
	volatile int16_t x4 = -1;
	volatile int32_t t0 = -86378;

    t0 = (x1|(x2|(x3>x4)));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 15U;
	int32_t x6 = -1;
	static int8_t x7 = -1;
	static volatile uint64_t x8 = UINT64_MAX;
	volatile int32_t t1 = 18341197;

    t1 = (x5|(x6|(x7>x8)));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int8_t x10 = -1;
	uint32_t x11 = UINT32_MAX;
	volatile int32_t t2 = 5934;

    t2 = (x9|(x10|(x11>x12)));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = 1825;
	int64_t x14 = INT64_MIN;
	static int32_t x16 = INT32_MAX;
	static volatile int64_t t3 = 3355LL;

    t3 = (x13|(x14|(x15>x16)));

    if (t3 != -9223372036854773983LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = -1LL;
	static volatile int32_t x18 = INT32_MIN;
	uint32_t x19 = 479809U;
	volatile int64_t t4 = -3LL;

    t4 = (x17|(x18|(x19>x20)));

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MIN;
	int64_t x23 = INT64_MAX;
	int32_t t5 = -995445759;

    t5 = (x21|(x22|(x23>x24)));

    if (t5 != -3669) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint16_t x27 = 3669U;
	int32_t x28 = -1;
	uint32_t t6 = 0U;

    t6 = (x25|(x26|(x27>x28)));

    if (t6 != 31U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	static volatile uint16_t x30 = 3321U;
	uint8_t x32 = 91U;
	volatile int32_t t7 = -8378;

    t7 = (x29|(x30|(x31>x32)));

    if (t7 != -7) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = -1;
	uint16_t x35 = UINT16_MAX;
	int16_t x36 = INT16_MAX;
	volatile int64_t t8 = -5864796496162LL;

    t8 = (x33|(x34|(x35>x36)));

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = -1LL;
	volatile int64_t t9 = 14029224683LL;

    t9 = (x37|(x38|(x39>x40)));

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 81592U;
	static int8_t x42 = 1;
	int8_t x43 = INT8_MIN;
	static int64_t x44 = -1LL;
	uint32_t t10 = 25543U;

    t10 = (x41|(x42|(x43>x44)));

    if (t10 != 81593U) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	volatile int16_t x46 = 1749;
	volatile int16_t x47 = 0;
	int16_t x48 = -3;

    t11 = (x45|(x46|(x47>x48)));

    if (t11 != -9223372036854774059LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = 159786490;
	static uint64_t x50 = 316LLU;
	uint64_t x51 = UINT64_MAX;
	uint16_t x52 = 418U;
	volatile uint64_t t12 = 5528396LLU;

    t12 = (x49|(x50|(x51>x52)));

    if (t12 != 159786495LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	volatile int32_t x54 = -1;
	int16_t x55 = INT16_MIN;
	static int8_t x56 = 1;

    t13 = (x53|(x54|(x55>x56)));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 52U;
	volatile int64_t x58 = -6281LL;
	int8_t x59 = 0;
	volatile uint64_t x60 = 0LLU;
	volatile int64_t t14 = 14877732116618625LL;

    t14 = (x57|(x58|(x59>x60)));

    if (t14 != -6281LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x61 = 4805U;
	static volatile uint8_t x62 = 26U;
	uint16_t x63 = 27U;
	int16_t x64 = -1;
	volatile int32_t t15 = 89137638;

    t15 = (x61|(x62|(x63>x64)));

    if (t15 != 4831) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 20273U;
	volatile int8_t x66 = -1;
	int32_t x67 = -1503;
	volatile int64_t x68 = -674LL;
	volatile int32_t t16 = 402501197;

    t16 = (x65|(x66|(x67>x68)));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x70 = INT32_MIN;
	uint8_t x71 = 3U;
	static uint16_t x72 = 927U;

    t17 = (x69|(x70|(x71>x72)));

    if (t17 != -2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint64_t x73 = UINT64_MAX;
	int16_t x74 = -6203;
	uint64_t x75 = UINT64_MAX;
	int16_t x76 = 1781;
	volatile uint64_t t18 = UINT64_MAX;

    t18 = (x73|(x74|(x75>x76)));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x77 = 0U;
	uint32_t x79 = 1831U;
	volatile int16_t x80 = INT16_MIN;
	volatile int64_t t19 = INT64_MIN;

    t19 = (x77|(x78|(x79>x80)));

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = INT32_MIN;
	int64_t x82 = INT64_MIN;
	uint16_t x83 = 6U;
	int8_t x84 = 15;
	volatile int64_t t20 = 4973998689500LL;

    t20 = (x81|(x82|(x83>x84)));

    if (t20 != -2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x85 = UINT16_MAX;
	static int8_t x86 = INT8_MIN;
	volatile int64_t x87 = INT64_MIN;
	uint16_t x88 = 498U;
	int32_t t21 = -23600;

    t21 = (x85|(x86|(x87>x88)));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = -192;
	uint8_t x91 = UINT8_MAX;
	volatile int8_t x92 = -1;
	int32_t t22 = -15482439;

    t22 = (x89|(x90|(x91>x92)));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x94 = -1;
	volatile int32_t x95 = INT32_MIN;
	int8_t x96 = 0;
	volatile int64_t t23 = 559926LL;

    t23 = (x93|(x94|(x95>x96)));

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x98 = -154;
	volatile int64_t x100 = -1LL;

    t24 = (x97|(x98|(x99>x100)));

    if (t24 != -154LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MAX;
	static int64_t x103 = INT64_MIN;
	int16_t x104 = -1;
	static volatile int32_t t25 = 781032;

    t25 = (x101|(x102|(x103>x104)));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x105 = -1;
	uint64_t x107 = UINT64_MAX;
	static int8_t x108 = -47;
	int32_t t26 = 6;

    t26 = (x105|(x106|(x107>x108)));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x110 = INT8_MAX;
	static int64_t x111 = 28LL;
	volatile int32_t x112 = -1;
	static volatile int32_t t27 = -120914;

    t27 = (x109|(x110|(x111>x112)));

    if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x113 = 74U;
	static int64_t x114 = INT64_MAX;
	static volatile int32_t x115 = INT32_MIN;
	uint8_t x116 = 17U;
	volatile int64_t t28 = INT64_MAX;

    t28 = (x113|(x114|(x115>x116)));

    if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 501U;
	int32_t x118 = INT32_MIN;
	volatile uint16_t x119 = 3589U;
	static int16_t x120 = INT16_MIN;
	uint32_t t29 = 5357111U;

    t29 = (x117|(x118|(x119>x120)));

    if (t29 != 2147484149U) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MAX;
	int8_t x122 = INT8_MIN;
	uint64_t x123 = 371867045817LLU;
	uint32_t x124 = 296857413U;
	static volatile int32_t t30 = 251;

    t30 = (x121|(x122|(x123>x124)));

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = 19857722993430LL;
	int32_t x126 = INT32_MIN;
	uint16_t x127 = 1U;
	volatile uint8_t x128 = 52U;
	volatile int64_t t31 = -220LL;

    t31 = (x125|(x126|(x127>x128)));

    if (t31 != -58299626LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = 18929U;
	int32_t x130 = INT32_MIN;
	int32_t x131 = INT32_MIN;
	int32_t x132 = INT32_MIN;
	int32_t t32 = -3;

    t32 = (x129|(x130|(x131>x132)));

    if (t32 != -2147464719) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -1;
	uint64_t x134 = UINT64_MAX;
	uint8_t x135 = 14U;
	volatile uint8_t x136 = 112U;
	static uint64_t t33 = UINT64_MAX;

    t33 = (x133|(x134|(x135>x136)));

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = 54313;
	int64_t x138 = INT64_MIN;
	static int16_t x139 = INT16_MAX;

    t34 = (x137|(x138|(x139>x140)));

    if (t34 != -9223372036854721495LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	uint64_t x143 = 1026935253LLU;
	static int64_t x144 = -862615135649639790LL;

    t35 = (x141|(x142|(x143>x144)));

    if (t35 != -9223372036854775757LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x145 = 1311948U;
	uint16_t x146 = 7607U;
	static int64_t x147 = INT64_MIN;
	static uint32_t t36 = 448822452U;

    t36 = (x145|(x146|(x147>x148)));

    if (t36 != 1318399U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = 1U;
	static int8_t x150 = -1;
	uint8_t x151 = UINT8_MAX;
	static int32_t t37 = -1213818;

    t37 = (x149|(x150|(x151>x152)));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = 29977960LL;
	volatile int64_t x155 = INT64_MAX;
	uint16_t x156 = 15U;
	volatile int64_t t38 = 2956LL;

    t38 = (x153|(x154|(x155>x156)));

    if (t38 != 4294967295LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = 1690U;
	uint8_t x158 = UINT8_MAX;
	int32_t x159 = 1539;
	int16_t x160 = INT16_MIN;
	volatile int32_t t39 = 2715;

    t39 = (x157|(x158|(x159>x160)));

    if (t39 != 1791) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x163 = UINT16_MAX;
	int64_t t40 = -37947932413LL;

    t40 = (x161|(x162|(x163>x164)));

    if (t40 != -2064465LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 15552693U;
	volatile uint32_t x166 = 1U;
	static int16_t x167 = INT16_MIN;
	uint64_t x168 = UINT64_MAX;
	uint32_t t41 = 5832U;

    t41 = (x165|(x166|(x167>x168)));

    if (t41 != 15552693U) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x170 = 0;
	int32_t x172 = INT32_MIN;
	int32_t t42 = 166257391;

    t42 = (x169|(x170|(x171>x172)));

    if (t42 != 1985) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = -2;
	int64_t x174 = -1LL;
	int64_t x175 = -89485764LL;
	int64_t x176 = -1LL;
	int64_t t43 = -40387592310607420LL;

    t43 = (x173|(x174|(x175>x176)));

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x177 = 254U;
	uint8_t x179 = 102U;
	volatile int64_t t44 = INT64_MAX;

    t44 = (x177|(x178|(x179>x180)));

    if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	int16_t x183 = INT16_MAX;
	int32_t x184 = INT32_MIN;
	int32_t t45 = 6;

    t45 = (x181|(x182|(x183>x184)));

    if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	uint8_t x186 = 0U;
	static uint32_t x187 = 24961U;
	uint64_t x188 = 582941461LLU;
	static int32_t t46 = 1;

    t46 = (x185|(x186|(x187>x188)));

    if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = 50;
	volatile int64_t x190 = 4156484LL;
	int32_t x191 = INT32_MIN;
	int32_t x192 = 16450;

    t47 = (x189|(x190|(x191>x192)));

    if (t47 != 4156534LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = UINT8_MAX;
	int8_t x195 = -1;
	uint64_t x196 = 4337LLU;
	static volatile int64_t t48 = INT64_MAX;

    t48 = (x193|(x194|(x195>x196)));

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	int16_t x198 = 3840;
	uint8_t x199 = 24U;
	static volatile int32_t t49 = 1992897;

    t49 = (x197|(x198|(x199>x200)));

    if (t49 != -28927) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x202 = 1U;
	static uint16_t x204 = UINT16_MAX;
	static volatile int64_t t50 = 3843218742LL;

    t50 = (x201|(x202|(x203>x204)));

    if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = 20;
	uint16_t x206 = UINT16_MAX;
	uint32_t x207 = 12020U;
	volatile int8_t x208 = INT8_MIN;

    t51 = (x205|(x206|(x207>x208)));

    if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 101U;
	int64_t x210 = 524797846957LL;
	int16_t x211 = INT16_MIN;
	int16_t x212 = 566;
	volatile int64_t t52 = 24646352679LL;

    t52 = (x209|(x210|(x211>x212)));

    if (t52 != 524797847021LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 0U;
	uint8_t x215 = 15U;
	int64_t x216 = -1LL;
	static int32_t t53 = 47013;

    t53 = (x213|(x214|(x215>x216)));

    if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x217 = INT64_MIN;
	volatile uint32_t x218 = UINT32_MAX;
	int16_t x219 = 25;
	uint16_t x220 = UINT16_MAX;

    t54 = (x217|(x218|(x219>x220)));

    if (t54 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	uint16_t x222 = UINT16_MAX;
	static int8_t x223 = INT8_MAX;
	int16_t x224 = INT16_MAX;
	static volatile int32_t t55 = 12;

    t55 = (x221|(x222|(x223>x224)));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MIN;
	static int32_t x226 = -1;
	volatile int16_t x227 = INT16_MIN;
	int16_t x228 = -82;
	int32_t t56 = -710817;

    t56 = (x225|(x226|(x227>x228)));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x230 = -365;
	int32_t x231 = INT32_MAX;
	uint8_t x232 = UINT8_MAX;
	static volatile int32_t t57 = -3;

    t57 = (x229|(x230|(x231>x232)));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x233 = INT16_MAX;
	volatile uint32_t x234 = 1185U;
	static int64_t x236 = 29245910LL;
	static uint32_t t58 = 1285814U;

    t58 = (x233|(x234|(x235>x236)));

    if (t58 != 32767U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = 42559817285927084LLU;
	static volatile int64_t x238 = INT64_MIN;
	int16_t x239 = 0;
	int8_t x240 = 6;
	volatile uint64_t t59 = 150264836156312LLU;

    t59 = (x237|(x238|(x239>x240)));

    if (t59 != 9265931854140702892LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -1LL;
	volatile int16_t x243 = INT16_MAX;
	uint8_t x244 = 7U;

    t60 = (x241|(x242|(x243>x244)));

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 8895495159581215LLU;
	int32_t x246 = INT32_MAX;
	int8_t x248 = 0;
	volatile uint64_t t61 = 175250961745749033LLU;

    t61 = (x245|(x246|(x247>x248)));

    if (t61 != 8895495745306623LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = UINT8_MAX;
	volatile uint64_t x250 = UINT64_MAX;
	int64_t x251 = -49303659863747LL;
	volatile uint64_t t62 = UINT64_MAX;

    t62 = (x249|(x250|(x251>x252)));

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 40U;
	int16_t x254 = 2686;
	int32_t x255 = 3333;
	int64_t x256 = 201816742849469LL;

    t63 = (x253|(x254|(x255>x256)));

    if (t63 != 2686U) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x257 = -1;
	int16_t x260 = INT16_MIN;
	static volatile uint32_t t64 = UINT32_MAX;

    t64 = (x257|(x258|(x259>x260)));

    if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x261 = UINT32_MAX;
	int64_t x262 = INT64_MIN;
	volatile int32_t x263 = -62959431;
	static int64_t t65 = 315193LL;

    t65 = (x261|(x262|(x263>x264)));

    if (t65 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x265 = 0U;
	uint32_t x267 = 55989U;
	int32_t x268 = -86581;
	volatile uint64_t t66 = 343LLU;

    t66 = (x265|(x266|(x267>x268)));

    if (t66 != 85989364627LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x270 = UINT64_MAX;
	int16_t x271 = INT16_MIN;
	static int8_t x272 = -1;
	uint64_t t67 = UINT64_MAX;

    t67 = (x269|(x270|(x271>x272)));

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x273 = INT16_MIN;
	int64_t x274 = 457185838022038297LL;
	int8_t x275 = INT8_MIN;
	volatile int8_t x276 = INT8_MAX;
	int64_t t68 = -11781899317434LL;

    t68 = (x273|(x274|(x275>x276)));

    if (t68 != -27879LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = UINT32_MAX;
	int8_t x278 = -5;
	int16_t x280 = INT16_MIN;

    t69 = (x277|(x278|(x279>x280)));

    if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x283 = 49U;
	int64_t x284 = INT64_MAX;
	int64_t t70 = -327959481419514LL;

    t70 = (x281|(x282|(x283>x284)));

    if (t70 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 2U;
	volatile uint8_t x288 = 4U;
	volatile int64_t t71 = -6749059146LL;

    t71 = (x285|(x286|(x287>x288)));

    if (t71 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -1;
	uint16_t x290 = UINT16_MAX;
	uint32_t x291 = UINT32_MAX;
	volatile int32_t t72 = -160811161;

    t72 = (x289|(x290|(x291>x292)));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MIN;
	int64_t x294 = -890646958840922392LL;
	static int16_t x295 = 8290;
	static uint32_t x296 = 736213U;
	static int64_t t73 = -3823514021594LL;

    t73 = (x293|(x294|(x295>x296)));

    if (t73 != -24LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x297 = 0U;
	volatile uint16_t x298 = UINT16_MAX;
	uint64_t x299 = UINT64_MAX;
	volatile uint32_t t74 = 140438462U;

    t74 = (x297|(x298|(x299>x300)));

    if (t74 != 65535U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = -1;
	volatile uint64_t x302 = 440403LLU;
	int32_t x303 = -3813401;
	uint64_t x304 = 1795232654248LLU;
	volatile uint64_t t75 = UINT64_MAX;

    t75 = (x301|(x302|(x303>x304)));

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x305 = 126U;
	int32_t x306 = 2069;
	volatile int16_t x308 = INT16_MIN;
	int32_t t76 = -140902;

    t76 = (x305|(x306|(x307>x308)));

    if (t76 != 2175) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x309 = -1;
	int8_t x310 = 12;
	int64_t x311 = -48483917175LL;
	int32_t t77 = -1;

    t77 = (x309|(x310|(x311>x312)));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x313 = 68U;
	int8_t x314 = -1;
	int32_t x315 = INT32_MIN;
	static uint32_t x316 = 64974U;
	int32_t t78 = -130778;

    t78 = (x313|(x314|(x315>x316)));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = -1;
	int64_t x318 = INT64_MIN;
	static uint8_t x319 = 0U;
	volatile int8_t x320 = INT8_MIN;

    t79 = (x317|(x318|(x319>x320)));

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = UINT16_MAX;
	int8_t x322 = -5;
	int32_t x323 = 30558;
	static int8_t x324 = INT8_MAX;
	int32_t t80 = 254557;

    t80 = (x321|(x322|(x323>x324)));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    

    t81 = (x325|(x326|(x327>x328)));

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x329 = 3;
	volatile int64_t x330 = INT64_MAX;
	static volatile int64_t t82 = INT64_MAX;

    t82 = (x329|(x330|(x331>x332)));

    if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = 55;
	int64_t x335 = INT64_MIN;
	static int64_t x336 = INT64_MIN;
	int64_t t83 = -9LL;

    t83 = (x333|(x334|(x335>x336)));

    if (t83 != -9223372036854775753LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = 0;
	static uint16_t x338 = 22U;
	static int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MIN;
	static volatile int32_t t84 = 0;

    t84 = (x337|(x338|(x339>x340)));

    if (t84 != 23) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	volatile int16_t x342 = INT16_MAX;
	int32_t x343 = INT32_MIN;
	static int64_t x344 = INT64_MAX;
	int64_t t85 = -18396786LL;

    t85 = (x341|(x342|(x343>x344)));

    if (t85 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 7LLU;
	int8_t x346 = INT8_MIN;
	volatile int16_t x347 = -3;
	int16_t x348 = -1372;
	uint64_t t86 = 2472184801324793LLU;

    t86 = (x345|(x346|(x347>x348)));

    if (t86 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x350 = INT16_MIN;
	int8_t x351 = -1;
	static int32_t t87 = 431;

    t87 = (x349|(x350|(x351>x352)));

    if (t87 != -31221) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	volatile uint16_t x354 = 3473U;
	int8_t x355 = 5;
	int32_t x356 = -943886278;
	int32_t t88 = -2501;

    t88 = (x353|(x354|(x355>x356)));

    if (t88 != -2147480175) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x358 = 35;
	int64_t x359 = INT64_MIN;
	uint64_t x360 = 261LLU;

    t89 = (x357|(x358|(x359>x360)));

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = -3;
	volatile int32_t x362 = INT32_MIN;
	uint64_t x363 = UINT64_MAX;
	uint32_t x364 = 544U;

    t90 = (x361|(x362|(x363>x364)));

    if (t90 != -3) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x365 = INT32_MIN;
	volatile int32_t x366 = 102;
	volatile int16_t x368 = 1891;
	int32_t t91 = 6611352;

    t91 = (x365|(x366|(x367>x368)));

    if (t91 != -2147483545) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x369 = 6351861;
	int32_t x370 = INT32_MAX;
	volatile uint16_t x371 = 375U;

    t92 = (x369|(x370|(x371>x372)));

    if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = UINT8_MAX;
	volatile int8_t x375 = INT8_MAX;
	int64_t x376 = -29558329075307LL;

    t93 = (x373|(x374|(x375>x376)));

    if (t93 != 255LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x377 = 6U;
	uint32_t x378 = UINT32_MAX;
	int32_t x379 = -1;
	static uint32_t t94 = UINT32_MAX;

    t94 = (x377|(x378|(x379>x380)));

    if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = 522098041943032876LLU;
	int64_t x383 = -16133660LL;
	static volatile uint64_t t95 = 1247112749158LLU;

    t95 = (x381|(x382|(x383>x384)));

    if (t95 != 522098041943032876LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x386 = INT16_MAX;
	static int16_t x387 = INT16_MIN;
	static uint8_t x388 = 6U;
	int32_t t96 = -494491;

    t96 = (x385|(x386|(x387>x388)));

    if (t96 != 327679) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x390 = INT32_MIN;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = -5101;

    t97 = (x389|(x390|(x391>x392)));

    if (t97 != -2147483509) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x393 = 889U;
	int32_t x394 = 3419275;
	int32_t x395 = -1;
	static int32_t t98 = -8;

    t98 = (x393|(x394|(x395>x396)));

    if (t98 != 3420155) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MAX;
	uint32_t x399 = 510U;
	int16_t x400 = 25;
	volatile int64_t t99 = -61140902041483231LL;

    t99 = (x397|(x398|(x399>x400)));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MAX;
	uint32_t x402 = 381360115U;
	uint32_t x404 = UINT32_MAX;
	uint32_t t100 = 82820708U;

    t100 = (x401|(x402|(x403>x404)));

    if (t100 != 2147483647U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x405 = 5478LLU;
	int32_t x406 = 0;
	static volatile int16_t x407 = -1;
	static int16_t x408 = INT16_MIN;
	static uint64_t t101 = 2218629LLU;

    t101 = (x405|(x406|(x407>x408)));

    if (t101 != 5479LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x410 = -199;
	int64_t x411 = INT64_MIN;
	static int64_t x412 = INT64_MIN;
	volatile int32_t t102 = 34224035;

    t102 = (x409|(x410|(x411>x412)));

    if (t102 != -199) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = 17U;
	volatile int16_t x414 = INT16_MIN;
	uint32_t x415 = 623108217U;
	static int32_t x416 = INT32_MAX;

    t103 = (x413|(x414|(x415>x416)));

    if (t103 != -32751) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = UINT64_MAX;
	static int64_t x418 = -1LL;
	static int64_t x419 = 1479458LL;
	int64_t x420 = 7LL;
	volatile uint64_t t104 = UINT64_MAX;

    t104 = (x417|(x418|(x419>x420)));

    if (t104 != UINT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x423 = INT64_MIN;
	volatile int32_t x424 = -99745326;
	static volatile int64_t t105 = 240225LL;

    t105 = (x421|(x422|(x423>x424)));

    if (t105 != -2147483648LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MAX;
	int16_t x426 = -1;
	int32_t x428 = INT32_MIN;

    t106 = (x425|(x426|(x427>x428)));

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x430 = 22414U;
	volatile uint32_t x431 = 1827050925U;
	static uint32_t t107 = 166U;

    t107 = (x429|(x430|(x431>x432)));

    if (t107 != 4294967183U) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x434 = -1;
	volatile uint64_t x436 = UINT64_MAX;
	static int32_t t108 = 111;

    t108 = (x433|(x434|(x435>x436)));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = -9619;
	int16_t x438 = 6212;
	int8_t x439 = -1;
	int8_t x440 = INT8_MIN;
	int32_t t109 = 129444;

    t109 = (x437|(x438|(x439>x440)));

    if (t109 != -9619) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -1;
	volatile int16_t x442 = 0;
	static int64_t x443 = INT64_MIN;
	uint8_t x444 = 13U;
	static volatile int32_t t110 = -25;

    t110 = (x441|(x442|(x443>x444)));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x445 = INT32_MAX;
	static volatile int32_t x448 = INT32_MIN;
	volatile int32_t t111 = 2;

    t111 = (x445|(x446|(x447>x448)));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x450 = 60088U;
	uint64_t x452 = 374421983445721LLU;
	static uint32_t t112 = 1U;

    t112 = (x449|(x450|(x451>x452)));

    if (t112 != 65535U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = 5515295653719106018LLU;
	static int32_t x454 = INT32_MIN;
	volatile int16_t x455 = INT16_MIN;
	int8_t x456 = INT8_MAX;
	volatile uint64_t t113 = 35984LLU;

    t113 = (x453|(x454|(x455>x456)));

    if (t113 != 18446744073695846882LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x457 = -1;
	int8_t x458 = INT8_MAX;
	int8_t x459 = 1;
	static volatile int32_t x460 = 1232959;
	int32_t t114 = 1;

    t114 = (x457|(x458|(x459>x460)));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	int32_t x462 = INT32_MIN;
	uint32_t x464 = 6306066U;
	volatile int32_t t115 = -16151;

    t115 = (x461|(x462|(x463>x464)));

    if (t115 != -32767) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MIN;
	int8_t x466 = INT8_MIN;
	int32_t x467 = INT32_MIN;
	int8_t x468 = INT8_MAX;
	volatile int32_t t116 = -3113;

    t116 = (x465|(x466|(x467>x468)));

    if (t116 != -128) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x469 = 137LL;
	volatile int8_t x470 = -1;
	uint16_t x472 = UINT16_MAX;

    t117 = (x469|(x470|(x471>x472)));

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = 4436;
	int16_t x475 = -1;
	uint64_t x476 = UINT64_MAX;
	int64_t t118 = 2885668910505800LL;

    t118 = (x473|(x474|(x475>x476)));

    if (t118 != 105074580766138205LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x477 = INT32_MIN;
	int64_t x478 = -1LL;
	int32_t x479 = 9;
	int64_t x480 = INT64_MAX;
	int64_t t119 = 15889759315594592LL;

    t119 = (x477|(x478|(x479>x480)));

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MAX;
	int16_t x482 = INT16_MIN;
	volatile int32_t x483 = INT32_MIN;
	int8_t x484 = -15;
	int64_t t120 = -1205635381LL;

    t120 = (x481|(x482|(x483>x484)));

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x486 = -31;
	volatile int16_t x487 = INT16_MAX;
	static uint16_t x488 = UINT16_MAX;
	volatile int32_t t121 = -1;

    t121 = (x485|(x486|(x487>x488)));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -3;
	static volatile uint64_t x491 = 108623069LLU;
	int8_t x492 = -1;
	int32_t t122 = 1843;

    t122 = (x489|(x490|(x491>x492)));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = 245U;
	static int32_t x494 = 58856;
	volatile int16_t x496 = INT16_MAX;

    t123 = (x493|(x494|(x495>x496)));

    if (t123 != 58877) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	uint64_t x498 = 793975375948LLU;
	int8_t x499 = 1;
	static int8_t x500 = INT8_MAX;
	static volatile uint64_t t124 = 351513184682410LLU;

    t124 = (x497|(x498|(x499>x500)));

    if (t124 != 9223372830830151756LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = UINT8_MAX;
	volatile int16_t x503 = INT16_MIN;
	int8_t x504 = -1;
	int32_t t125 = 1;

    t125 = (x501|(x502|(x503>x504)));

    if (t125 != 255) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = UINT64_MAX;
	uint8_t x506 = 5U;
	volatile uint64_t x507 = 1294129828573LLU;
	int8_t x508 = -33;
	volatile uint64_t t126 = UINT64_MAX;

    t126 = (x505|(x506|(x507>x508)));

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MAX;
	uint16_t x511 = 8U;
	int32_t x512 = -241;
	int64_t t127 = INT64_MAX;

    t127 = (x509|(x510|(x511>x512)));

    if (t127 != INT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MAX;
	static int16_t x514 = INT16_MIN;
	volatile uint16_t x516 = 1096U;
	int32_t t128 = 188;

    t128 = (x513|(x514|(x515>x516)));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x518 = INT16_MIN;
	volatile int32_t t129 = 8849;

    t129 = (x517|(x518|(x519>x520)));

    if (t129 != -32768) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x521 = 25;
	volatile uint32_t x522 = 346U;
	static uint8_t x523 = 2U;
	int8_t x524 = 3;
	volatile uint32_t t130 = 129963U;

    t130 = (x521|(x522|(x523>x524)));

    if (t130 != 347U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -118;
	volatile int64_t x526 = -1LL;
	static uint8_t x527 = 1U;
	int64_t t131 = 14404209907820839LL;

    t131 = (x525|(x526|(x527>x528)));

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = 98U;
	int8_t x530 = INT8_MIN;
	uint16_t x531 = UINT16_MAX;
	int32_t t132 = 31389548;

    t132 = (x529|(x530|(x531>x532)));

    if (t132 != -29) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = 188882;
	int64_t x534 = INT64_MIN;
	static int16_t x536 = 7218;

    t133 = (x533|(x534|(x535>x536)));

    if (t133 != -9223372036854586926LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 1926162824450500LLU;
	static int32_t x539 = -9052;
	int8_t x540 = 1;
	volatile uint64_t t134 = 94282865010LLU;

    t134 = (x537|(x538|(x539>x540)));

    if (t134 != 1926162824450503LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = 70LLU;
	int16_t x544 = INT16_MIN;
	volatile uint64_t t135 = 20812479631144715LLU;

    t135 = (x541|(x542|(x543>x544)));

    if (t135 != 7955951LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int8_t x545 = -1;
	int64_t x546 = INT64_MIN;
	uint32_t x547 = UINT32_MAX;
	uint64_t x548 = 5587423600713218985LLU;
	int64_t t136 = 56791LL;

    t136 = (x545|(x546|(x547>x548)));

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -7802104445410LL;
	int8_t x550 = 20;
	static uint64_t x551 = 1LLU;
	uint32_t x552 = 3169U;
	int64_t t137 = 31672669910LL;

    t137 = (x549|(x550|(x551>x552)));

    if (t137 != -7802104445410LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x555 = UINT16_MAX;
	volatile int32_t t138 = -3456;

    t138 = (x553|(x554|(x555>x556)));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = 22079493U;
	int16_t x558 = INT16_MAX;
	uint16_t x559 = 2556U;

    t139 = (x557|(x558|(x559>x560)));

    if (t139 != 22085631U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x561 = INT64_MAX;
	static int8_t x562 = -34;
	int16_t x563 = INT16_MIN;
	uint16_t x564 = 397U;
	volatile int64_t t140 = -189421258170LL;

    t140 = (x561|(x562|(x563>x564)));

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = UINT8_MAX;
	static uint32_t x566 = UINT32_MAX;
	int64_t x567 = INT64_MAX;
	int16_t x568 = -1;
	uint32_t t141 = UINT32_MAX;

    t141 = (x565|(x566|(x567>x568)));

    if (t141 != UINT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = 1;
	static int64_t x570 = -24114831339LL;
	uint8_t x571 = 50U;
	int32_t x572 = 3;
	volatile int64_t t142 = 133166575622462LL;

    t142 = (x569|(x570|(x571>x572)));

    if (t142 != -24114831339LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = -332675310956582836LL;
	volatile uint8_t x574 = UINT8_MAX;
	uint64_t x575 = 34262093040849045LLU;
	int16_t x576 = -345;
	static volatile int64_t t143 = 30788180016556LL;

    t143 = (x573|(x574|(x575>x576)));

    if (t143 != -332675310956582657LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = 61U;
	static volatile int32_t x578 = INT32_MIN;
	volatile int8_t x580 = INT8_MIN;
	int32_t t144 = 55;

    t144 = (x577|(x578|(x579>x580)));

    if (t144 != -2147483587) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MAX;
	int32_t x583 = INT32_MIN;
	static uint32_t x584 = 55U;
	int64_t t145 = 10161LL;

    t145 = (x581|(x582|(x583>x584)));

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x585 = INT32_MIN;
	int32_t x587 = -185317;
	static int8_t x588 = 2;
	volatile int32_t t146 = 1;

    t146 = (x585|(x586|(x587>x588)));

    if (t146 != -2147483393) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x591 = INT32_MIN;
	volatile uint16_t x592 = 7U;
	static volatile uint64_t t147 = UINT64_MAX;

    t147 = (x589|(x590|(x591>x592)));

    if (t147 != UINT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x593 = INT8_MIN;
	uint8_t x594 = 26U;
	volatile int64_t x595 = -1LL;
	int64_t x596 = 353077717806951290LL;

    t148 = (x593|(x594|(x595>x596)));

    if (t148 != -102) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	int32_t x598 = 126297;
	static int8_t x599 = -20;
	int32_t t149 = -13;

    t149 = (x597|(x598|(x599>x600)));

    if (t149 != -39) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x601 = INT16_MIN;
	static int8_t x602 = -29;
	volatile int16_t x603 = 13;
	int32_t x604 = INT32_MIN;
	static volatile int32_t t150 = -212311762;

    t150 = (x601|(x602|(x603>x604)));

    if (t150 != -29) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = 2214U;
	int32_t x606 = -1;
	int64_t x607 = INT64_MIN;
	uint8_t x608 = UINT8_MAX;
	volatile int32_t t151 = 15911781;

    t151 = (x605|(x606|(x607>x608)));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MAX;
	uint32_t x610 = 1913U;
	int8_t x611 = -1;
	static volatile int32_t x612 = 3;
	uint32_t t152 = 1493493030U;

    t152 = (x609|(x610|(x611>x612)));

    if (t152 != 2147483647U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x614 = INT16_MIN;
	int32_t x615 = -1;
	uint64_t x616 = 226043184928LLU;
	volatile int32_t t153 = 893451;

    t153 = (x613|(x614|(x615>x616)));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = INT16_MIN;
	int32_t x619 = 242417;
	static volatile int64_t x620 = INT64_MAX;

    t154 = (x617|(x618|(x619>x620)));

    if (t154 != UINT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x622 = INT32_MIN;
	uint8_t x623 = 1U;
	static uint32_t x624 = 4757726U;
	int32_t t155 = -65008780;

    t155 = (x621|(x622|(x623>x624)));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = -1LL;
	static uint8_t x627 = 5U;
	static int64_t t156 = -5993714101822LL;

    t156 = (x625|(x626|(x627>x628)));

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = 295645U;
	static int8_t x630 = -1;
	int32_t x631 = -1;
	int16_t x632 = INT16_MIN;
	uint32_t t157 = UINT32_MAX;

    t157 = (x629|(x630|(x631>x632)));

    if (t157 != UINT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = UINT32_MAX;
	volatile int32_t x636 = 189326;
	static volatile uint32_t t158 = UINT32_MAX;

    t158 = (x633|(x634|(x635>x636)));

    if (t158 != UINT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int32_t x637 = INT32_MIN;
	uint64_t x638 = 32LLU;
	int32_t x639 = INT32_MIN;
	int32_t x640 = INT32_MIN;
	volatile uint64_t t159 = 171852919LLU;

    t159 = (x637|(x638|(x639>x640)));

    if (t159 != 18446744071562068000LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x641 = 1333782017464800LL;
	int32_t x643 = INT32_MIN;
	int8_t x644 = -3;
	int64_t t160 = -206595091922LL;

    t160 = (x641|(x642|(x643>x644)));

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x646 = 17047;
	volatile int32_t t161 = -9511302;

    t161 = (x645|(x646|(x647>x648)));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x650 = INT8_MIN;
	int32_t x651 = INT32_MIN;
	uint64_t x652 = 45LLU;
	int32_t t162 = -16767755;

    t162 = (x649|(x650|(x651>x652)));

    if (t162 != -127) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x653 = 373U;
	int16_t x654 = 7;
	int32_t x655 = INT32_MIN;
	static uint8_t x656 = 0U;
	volatile int32_t t163 = -3;

    t163 = (x653|(x654|(x655>x656)));

    if (t163 != 375) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x658 = 393U;
	int8_t x659 = INT8_MIN;
	uint8_t x660 = 1U;
	volatile uint32_t t164 = UINT32_MAX;

    t164 = (x657|(x658|(x659>x660)));

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MAX;
	int8_t x663 = INT8_MAX;
	volatile int32_t x664 = -167879806;
	int64_t t165 = -28062609878LL;

    t165 = (x661|(x662|(x663>x664)));

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = 7U;
	volatile int16_t x666 = -1;
	volatile int64_t x667 = INT64_MIN;
	static int16_t x668 = INT16_MAX;
	int32_t t166 = 3001247;

    t166 = (x665|(x666|(x667>x668)));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x671 = INT32_MIN;
	int16_t x672 = -1;
	int32_t t167 = -98;

    t167 = (x669|(x670|(x671>x672)));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x674 = UINT8_MAX;
	static volatile int32_t x675 = INT32_MIN;
	uint32_t x676 = UINT32_MAX;
	volatile uint64_t t168 = UINT64_MAX;

    t168 = (x673|(x674|(x675>x676)));

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x678 = INT8_MIN;
	static volatile int8_t x679 = INT8_MIN;
	int32_t x680 = 286;
	static int32_t t169 = 31;

    t169 = (x677|(x678|(x679>x680)));

    if (t169 != -128) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x681 = INT64_MIN;
	uint8_t x682 = UINT8_MAX;
	static uint32_t x684 = 15821U;
	int64_t t170 = 363489LL;

    t170 = (x681|(x682|(x683>x684)));

    if (t170 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x685 = 2U;
	static uint64_t x686 = 1223079232151561LLU;
	int16_t x687 = -1;
	int8_t x688 = 1;
	uint64_t t171 = 38126LLU;

    t171 = (x685|(x686|(x687>x688)));

    if (t171 != 1223079232151563LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MIN;
	int16_t x691 = -1;

    t172 = (x689|(x690|(x691>x692)));

    if (t172 != -32768LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = -1;
	int64_t x694 = INT64_MIN;
	int32_t x695 = INT32_MAX;
	int8_t x696 = 12;
	static volatile int64_t t173 = 1847527395701272609LL;

    t173 = (x693|(x694|(x695>x696)));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = 152071321LL;
	static volatile uint16_t x698 = 345U;
	uint32_t x700 = UINT32_MAX;
	volatile int64_t t174 = 224435875106LL;

    t174 = (x697|(x698|(x699>x700)));

    if (t174 != 152071641LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	int64_t x703 = -1LL;
	volatile uint64_t x704 = 19881166LLU;
	int64_t t175 = 800702LL;

    t175 = (x701|(x702|(x703>x704)));

    if (t175 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	uint8_t x707 = 0U;
	int64_t x708 = INT64_MAX;
	static volatile int32_t t176 = -207;

    t176 = (x705|(x706|(x707>x708)));

    if (t176 != -1783) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = 11814155;
	uint32_t x710 = 7667U;
	static int8_t x711 = -44;
	static uint8_t x712 = UINT8_MAX;
	static volatile uint32_t t177 = 484089U;

    t177 = (x709|(x710|(x711>x712)));

    if (t177 != 11820539U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 3LLU;
	int8_t x714 = -1;
	static int8_t x715 = INT8_MIN;
	static uint64_t t178 = UINT64_MAX;

    t178 = (x713|(x714|(x715>x716)));

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x717 = 0U;
	int16_t x718 = -1;
	uint8_t x719 = UINT8_MAX;
	int64_t x720 = INT64_MIN;
	int32_t t179 = 48781;

    t179 = (x717|(x718|(x719>x720)));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x721 = INT16_MIN;
	int8_t x722 = INT8_MAX;
	uint16_t x723 = UINT16_MAX;
	static volatile int32_t t180 = -361239;

    t180 = (x721|(x722|(x723>x724)));

    if (t180 != -32641) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	int8_t x727 = -41;
	static int64_t x728 = INT64_MAX;
	int32_t t181 = 0;

    t181 = (x725|(x726|(x727>x728)));

    if (t181 != -128) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x730 = 4U;
	static uint32_t x731 = UINT32_MAX;
	int32_t x732 = -925535926;
	volatile int64_t t182 = 1392703222695LL;

    t182 = (x729|(x730|(x731>x732)));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x733 = 28U;
	static uint32_t x734 = 1U;
	uint64_t x735 = UINT64_MAX;
	static int16_t x736 = INT16_MIN;
	uint32_t t183 = 1741U;

    t183 = (x733|(x734|(x735>x736)));

    if (t183 != 29U) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -13;
	int32_t x738 = -1;
	int32_t x740 = INT32_MAX;
	int32_t t184 = 469941;

    t184 = (x737|(x738|(x739>x740)));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x741 = -1;
	int32_t x742 = INT32_MIN;
	int16_t x744 = 3368;

    t185 = (x741|(x742|(x743>x744)));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = UINT8_MAX;
	int64_t x747 = INT64_MAX;
	volatile int32_t x748 = INT32_MAX;
	int32_t t186 = -19;

    t186 = (x745|(x746|(x747>x748)));

    if (t186 != 255) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x749 = INT8_MAX;
	uint8_t x750 = 0U;
	uint32_t x751 = 256U;
	int8_t x752 = -1;
	volatile int32_t t187 = -382897775;

    t187 = (x749|(x750|(x751>x752)));

    if (t187 != 127) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x754 = INT16_MAX;
	uint8_t x756 = 11U;
	volatile int32_t t188 = -75350921;

    t188 = (x753|(x754|(x755>x756)));

    if (t188 != 32767) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x757 = 198;
	uint64_t x758 = 135100142LLU;
	uint64_t x759 = 80355LLU;
	uint64_t t189 = 200230255213028262LLU;

    t189 = (x757|(x758|(x759>x760)));

    if (t189 != 135100143LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x761 = 15;
	int16_t x762 = 1;
	uint32_t x763 = 56U;
	int32_t x764 = -1;
	volatile int32_t t190 = -7;

    t190 = (x761|(x762|(x763>x764)));

    if (t190 != 15) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x765 = 6682U;
	int32_t x766 = INT32_MIN;
	int16_t x768 = -751;
	uint32_t t191 = 57299U;

    t191 = (x765|(x766|(x767>x768)));

    if (t191 != 2147490330U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x769 = 816U;
	int64_t x770 = INT64_MAX;
	int32_t x771 = 2;
	int32_t x772 = INT32_MAX;
	volatile int64_t t192 = INT64_MAX;

    t192 = (x769|(x770|(x771>x772)));

    if (t192 != INT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x775 = UINT8_MAX;
	uint64_t x776 = 473503735271580LLU;
	int64_t t193 = 35613LL;

    t193 = (x773|(x774|(x775>x776)));

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 6260;
	uint64_t x778 = 6997914006984511730LLU;
	int16_t x779 = -1912;
	static uint64_t x780 = UINT64_MAX;
	volatile uint64_t t194 = 8886523113937LLU;

    t194 = (x777|(x778|(x779>x780)));

    if (t194 != 6997914006984513782LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MIN;
	int32_t x782 = 12002;
	int16_t x783 = INT16_MIN;
	int64_t t195 = -106403699130008409LL;

    t195 = (x781|(x782|(x783>x784)));

    if (t195 != -9223372036854763806LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = 4U;
	int16_t x786 = INT16_MIN;
	static int8_t x787 = INT8_MIN;
	int16_t x788 = -154;

    t196 = (x785|(x786|(x787>x788)));

    if (t196 != -32763) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x790 = -1LL;
	uint64_t x791 = 608760428488469LLU;
	static int16_t x792 = INT16_MIN;
	static uint64_t t197 = UINT64_MAX;

    t197 = (x789|(x790|(x791>x792)));

    if (t197 != UINT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x793 = 0U;
	uint32_t x794 = UINT32_MAX;
	int64_t x795 = 1950573LL;
	int8_t x796 = 3;
	uint32_t t198 = UINT32_MAX;

    t198 = (x793|(x794|(x795>x796)));

    if (t198 != UINT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	uint64_t x799 = UINT64_MAX;
	volatile int64_t t199 = -2319150679947052LL;

    t199 = (x797|(x798|(x799>x800)));

    if (t199 != -127LL) { NG(); } else { ; }
	
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

