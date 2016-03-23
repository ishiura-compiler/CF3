
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

int8_t x3 = -1;
int64_t x4 = 1036LL;
int32_t x6 = INT32_MIN;
int8_t x8 = INT8_MAX;
static int32_t x23 = INT32_MAX;
int8_t x36 = -1;
static int32_t t10 = 8;
static int32_t t12 = 14940;
static uint8_t x54 = 2U;
uint16_t x56 = 609U;
volatile int8_t x62 = -1;
static volatile int64_t x67 = -1LL;
uint32_t x68 = 692424327U;
uint8_t x72 = 15U;
uint32_t x75 = 186U;
static int16_t x92 = -1;
int32_t t23 = -2;
int64_t x98 = -1LL;
volatile int8_t x99 = -15;
uint16_t x102 = 2633U;
static volatile int32_t t28 = 108829;
static int16_t x120 = INT16_MAX;
int32_t t29 = 9447;
uint32_t x122 = UINT32_MAX;
int32_t t31 = -7592268;
static int8_t x129 = INT8_MAX;
int16_t x133 = 19;
int8_t x134 = INT8_MIN;
volatile int32_t t33 = -7320;
int64_t x137 = -1LL;
static int8_t x147 = INT8_MIN;
volatile int64_t x151 = -34241354148804LL;
int8_t x165 = -1;
static volatile uint32_t x171 = UINT32_MAX;
volatile int32_t t42 = 3;
uint32_t x179 = UINT32_MAX;
static int32_t t44 = -115874553;
volatile uint64_t x194 = 1521090403036136LLU;
static uint64_t x198 = 830LLU;
static uint64_t x204 = 13748860328739312LLU;
static volatile uint8_t x206 = UINT8_MAX;
uint64_t x209 = 13271908LLU;
static volatile int32_t t52 = -1;
static volatile int32_t t53 = -55;
static int8_t x219 = 1;
volatile int32_t t54 = 2077203;
volatile int16_t x222 = INT16_MIN;
volatile uint64_t x227 = 395522028529967LLU;
volatile int32_t t56 = -69;
volatile int16_t x232 = INT16_MIN;
static int32_t t59 = -572;
uint64_t x242 = UINT64_MAX;
int32_t t61 = -5;
int8_t x249 = 15;
int64_t x252 = 0LL;
static int16_t x254 = INT16_MIN;
int16_t x257 = INT16_MAX;
uint16_t x268 = UINT16_MAX;
volatile int32_t t66 = 15;
int32_t x270 = -1402;
uint64_t x276 = UINT64_MAX;
volatile uint16_t x279 = 6U;
static volatile int32_t t69 = 308113951;
int16_t x286 = INT16_MIN;
volatile int32_t t73 = -14;
uint8_t x303 = UINT8_MAX;
int32_t t75 = 0;
static int16_t x305 = 1382;
static uint8_t x306 = 3U;
volatile int32_t t76 = -814903;
volatile int64_t x309 = -1LL;
int16_t x315 = -1;
volatile uint16_t x320 = UINT16_MAX;
volatile int64_t x326 = INT64_MAX;
static volatile int64_t x329 = INT64_MAX;
static volatile uint8_t x337 = 55U;
uint16_t x340 = UINT16_MAX;
int32_t x347 = INT32_MAX;
int8_t x355 = INT8_MIN;
volatile int32_t t88 = 10;
int64_t x358 = INT64_MAX;
uint64_t x362 = UINT64_MAX;
volatile int64_t x364 = -1LL;
int16_t x372 = INT16_MIN;
int8_t x375 = -1;
static volatile int32_t t94 = -710714;
static volatile int8_t x381 = INT8_MIN;
int8_t x382 = -1;
int32_t x383 = -15;
static int8_t x384 = -1;
volatile int32_t t95 = 6;
int8_t x389 = -1;
volatile uint16_t x397 = 4780U;
int32_t t100 = 205877;
int64_t x408 = -1LL;
int8_t x409 = -1;
static volatile int16_t x411 = -1;
static int32_t t102 = -109736288;
int32_t x418 = -14237;
static int32_t x426 = INT32_MIN;
int16_t x428 = INT16_MAX;
int8_t x430 = 59;
uint16_t x444 = 5246U;
int32_t t110 = -625;
volatile int32_t x446 = -1;
volatile uint16_t x458 = UINT16_MAX;
int16_t x462 = 7;
uint16_t x468 = 229U;
static volatile int32_t t116 = 5251632;
int32_t t117 = 66194321;
volatile int64_t x476 = -1LL;
int64_t x477 = -276LL;
int64_t x486 = -1LL;
volatile int32_t t122 = 1077411;
volatile uint8_t x496 = 38U;
volatile int32_t t123 = -3326507;
uint32_t x514 = 304U;
int64_t x528 = INT64_MIN;
static uint16_t x530 = UINT16_MAX;
int8_t x531 = -1;
uint32_t x537 = 1227762U;
int64_t x538 = -2024784603750688LL;
int8_t x542 = -1;
int8_t x545 = 1;
volatile int32_t t136 = -32662;
int64_t x552 = 8LL;
int16_t x558 = 255;
int16_t x570 = -1;
int8_t x572 = INT8_MAX;
int32_t t143 = -260726;
int64_t x588 = 1502368865091083LL;
int32_t x591 = INT32_MIN;
static volatile int32_t x597 = INT32_MAX;
volatile uint8_t x598 = 12U;
static uint32_t x601 = 36U;
int16_t x602 = 12857;
static int32_t x611 = 0;
int32_t t153 = 446;
int32_t t154 = -69642315;
int16_t x627 = 1;
volatile int8_t x630 = INT8_MIN;
int16_t x632 = -1;
int32_t t157 = 820;
int16_t x638 = 3774;
static int32_t x640 = 285581036;
uint64_t x643 = UINT64_MAX;
int8_t x647 = -1;
int64_t x648 = INT64_MAX;
volatile int8_t x652 = INT8_MIN;
static int8_t x664 = INT8_MAX;
int32_t t166 = 31026347;
int8_t x669 = INT8_MAX;
int8_t x674 = INT8_MIN;
static int32_t t168 = 15;
int64_t x678 = 3LL;
volatile uint16_t x687 = UINT16_MAX;
volatile uint8_t x690 = 0U;
uint32_t x691 = 6U;
int16_t x701 = -1;
int32_t t175 = 73;
int8_t x705 = -1;
int32_t x708 = INT32_MIN;
static volatile uint32_t x714 = 299314985U;
int64_t x717 = INT64_MAX;
int8_t x722 = INT8_MAX;
volatile int32_t t180 = -10422324;
volatile int32_t t181 = -458252118;
int64_t x732 = -1LL;
int16_t x737 = INT16_MIN;
int8_t x743 = 0;
int32_t t186 = 3332;
int32_t t187 = -5341;
static uint64_t x755 = 14737LLU;
static int32_t x756 = INT32_MAX;
static volatile uint64_t x759 = 89360466LLU;
int8_t x769 = -21;
volatile uint32_t x771 = 41U;
volatile uint64_t x776 = 919LLU;
int32_t t193 = -146423320;
volatile int32_t t194 = 654702;
static int8_t x784 = -1;
int8_t x785 = -1;
uint32_t x791 = 11035284U;
int16_t x794 = INT16_MAX;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int8_t x2 = -1;
	volatile int32_t t0 = 6353;

    t0 = ((x1==x2)|(x3!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = 1;
	volatile int8_t x7 = 10;
	int32_t t1 = 1096;

    t1 = ((x5==x6)|(x7!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x9 = 37U;
	uint32_t x10 = UINT32_MAX;
	volatile uint16_t x11 = 247U;
	static int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -5887;

    t2 = ((x9==x10)|(x11!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 7LL;
	static volatile int8_t x14 = -1;
	volatile int64_t x15 = INT64_MIN;
	int64_t x16 = -1LL;
	int32_t t3 = 27;

    t3 = ((x13==x14)|(x15!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 3884U;
	uint8_t x18 = 10U;
	int8_t x19 = -4;
	int16_t x20 = 0;
	volatile int32_t t4 = -27316742;

    t4 = ((x17==x18)|(x19!=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	int16_t x22 = INT16_MIN;
	volatile int16_t x24 = -5;
	int32_t t5 = -829565;

    t5 = ((x21==x22)|(x23!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = INT64_MAX;
	uint32_t x26 = 295501423U;
	static volatile int64_t x27 = INT64_MAX;
	uint64_t x28 = 239305LLU;
	volatile int32_t t6 = 5;

    t6 = ((x25==x26)|(x27!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	int16_t x30 = -1;
	int64_t x31 = -50163958LL;
	volatile int32_t x32 = INT32_MAX;
	int32_t t7 = -130834895;

    t7 = ((x29==x30)|(x31!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 103507LL;
	int8_t x34 = INT8_MIN;
	volatile int8_t x35 = INT8_MAX;
	static volatile int32_t t8 = -213562;

    t8 = ((x33==x34)|(x35!=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	volatile uint64_t x38 = 352953277LLU;
	volatile int32_t x39 = INT32_MIN;
	int16_t x40 = INT16_MAX;
	int32_t t9 = -84;

    t9 = ((x37==x38)|(x39!=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = 4;
	static int64_t x42 = -1LL;
	int32_t x43 = 11288517;
	static int32_t x44 = INT32_MIN;

    t10 = ((x41==x42)|(x43!=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x45 = UINT32_MAX;
	int64_t x46 = -1LL;
	int64_t x47 = INT64_MIN;
	int64_t x48 = -453057219336636803LL;
	int32_t t11 = -14;

    t11 = ((x45==x46)|(x47!=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MAX;
	int64_t x50 = INT64_MAX;
	volatile int32_t x51 = INT32_MAX;
	static int64_t x52 = INT64_MAX;

    t12 = ((x49==x50)|(x51!=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x53 = UINT16_MAX;
	volatile uint32_t x55 = UINT32_MAX;
	int32_t t13 = -644;

    t13 = ((x53==x54)|(x55!=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x57 = 10U;
	static int32_t x58 = 21025;
	int64_t x59 = 14055189163777LL;
	uint64_t x60 = 463519643584109890LLU;
	int32_t t14 = 3086;

    t14 = ((x57==x58)|(x59!=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	int8_t x63 = -1;
	uint16_t x64 = 147U;
	int32_t t15 = 30870;

    t15 = ((x61==x62)|(x63!=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 127U;
	static volatile int8_t x66 = 1;
	static int32_t t16 = -74;

    t16 = ((x65==x66)|(x67!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x69 = UINT16_MAX;
	int64_t x70 = INT64_MIN;
	uint8_t x71 = 18U;
	volatile int32_t t17 = -138;

    t17 = ((x69==x70)|(x71!=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 7LLU;
	int16_t x74 = 26;
	int64_t x76 = -1LL;
	int32_t t18 = 1;

    t18 = ((x73==x74)|(x75!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 5350U;
	int16_t x78 = INT16_MIN;
	uint32_t x79 = 1U;
	static int64_t x80 = INT64_MAX;
	int32_t t19 = 120718;

    t19 = ((x77==x78)|(x79!=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 10U;
	volatile uint8_t x82 = 65U;
	uint64_t x83 = 99LLU;
	int32_t x84 = -500923577;
	int32_t t20 = -6895284;

    t20 = ((x81==x82)|(x83!=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x85 = 1LL;
	uint32_t x86 = 1217389965U;
	int32_t x87 = INT32_MAX;
	volatile int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 22;

    t21 = ((x85==x86)|(x87!=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = UINT16_MAX;
	static uint8_t x90 = UINT8_MAX;
	static int8_t x91 = INT8_MIN;
	volatile int32_t t22 = 3860649;

    t22 = ((x89==x90)|(x91!=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x93 = UINT8_MAX;
	int16_t x94 = INT16_MAX;
	volatile uint16_t x95 = 859U;
	volatile int8_t x96 = -1;

    t23 = ((x93==x94)|(x95!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	uint8_t x100 = UINT8_MAX;
	volatile int32_t t24 = -778;

    t24 = ((x97==x98)|(x99!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x101 = -432LL;
	volatile int32_t x103 = INT32_MAX;
	volatile int8_t x104 = -1;
	int32_t t25 = -144766026;

    t25 = ((x101==x102)|(x103!=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -1;
	int16_t x106 = INT16_MAX;
	int64_t x107 = 2440045265LL;
	int8_t x108 = -1;
	int32_t t26 = -42;

    t26 = ((x105==x106)|(x107!=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	int8_t x110 = INT8_MIN;
	int16_t x111 = -19;
	static int32_t x112 = -1;
	static volatile int32_t t27 = -848;

    t27 = ((x109==x110)|(x111!=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x113 = INT16_MIN;
	int16_t x114 = -15;
	static int8_t x115 = -26;
	uint8_t x116 = 3U;

    t28 = ((x113==x114)|(x115!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x117 = -49;
	int32_t x118 = -10104523;
	int16_t x119 = -1;

    t29 = ((x117==x118)|(x119!=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = 0LLU;
	int8_t x123 = 1;
	static uint32_t x124 = 253U;
	volatile int32_t t30 = 32;

    t30 = ((x121==x122)|(x123!=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MAX;
	volatile uint8_t x126 = 1U;
	uint32_t x127 = 238791U;
	int64_t x128 = 31934664LL;

    t31 = ((x125==x126)|(x127!=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x130 = UINT32_MAX;
	int8_t x131 = -12;
	volatile int16_t x132 = INT16_MIN;
	int32_t t32 = 59;

    t32 = ((x129==x130)|(x131!=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x135 = INT32_MAX;
	int16_t x136 = 3;

    t33 = ((x133==x134)|(x135!=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x138 = INT16_MIN;
	int32_t x139 = INT32_MIN;
	static int64_t x140 = INT64_MAX;
	int32_t t34 = 36;

    t34 = ((x137==x138)|(x139!=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 161U;
	static int16_t x142 = INT16_MIN;
	int64_t x143 = INT64_MIN;
	static volatile int8_t x144 = -7;
	static volatile int32_t t35 = 12791;

    t35 = ((x141==x142)|(x143!=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x145 = INT16_MIN;
	static int16_t x146 = -8;
	static uint8_t x148 = UINT8_MAX;
	int32_t t36 = -54;

    t36 = ((x145==x146)|(x147!=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 615941LLU;
	uint8_t x150 = 3U;
	uint8_t x152 = 49U;
	static volatile int32_t t37 = -430526266;

    t37 = ((x149==x150)|(x151!=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = INT8_MAX;
	static uint8_t x154 = UINT8_MAX;
	int8_t x155 = INT8_MAX;
	int32_t x156 = -1;
	int32_t t38 = -429927946;

    t38 = ((x153==x154)|(x155!=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MAX;
	int64_t x158 = 2082672266LL;
	int8_t x159 = 5;
	int8_t x160 = INT8_MIN;
	volatile int32_t t39 = 1027224386;

    t39 = ((x157==x158)|(x159!=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 3014U;
	static int8_t x162 = INT8_MIN;
	int32_t x163 = 143597;
	int8_t x164 = -14;
	int32_t t40 = 681470;

    t40 = ((x161==x162)|(x163!=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x166 = INT16_MIN;
	static volatile int8_t x167 = INT8_MIN;
	int8_t x168 = -1;
	int32_t t41 = 409;

    t41 = ((x165==x166)|(x167!=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = INT32_MIN;
	static uint64_t x170 = 266800752298LLU;
	volatile uint32_t x172 = UINT32_MAX;

    t42 = ((x169==x170)|(x171!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = INT8_MIN;
	uint8_t x174 = 7U;
	volatile int32_t x175 = INT32_MIN;
	int64_t x176 = INT64_MIN;
	volatile int32_t t43 = 810;

    t43 = ((x173==x174)|(x175!=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 1834772316855850LLU;
	uint32_t x178 = UINT32_MAX;
	int64_t x180 = 129287621LL;

    t44 = ((x177==x178)|(x179!=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x181 = INT32_MIN;
	int32_t x182 = -294705450;
	int64_t x183 = -1LL;
	int8_t x184 = -1;
	volatile int32_t t45 = -43889800;

    t45 = ((x181==x182)|(x183!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint64_t x185 = 492153691493LLU;
	int64_t x186 = -1LL;
	uint32_t x187 = 10571555U;
	int64_t x188 = INT64_MAX;
	volatile int32_t t46 = 59206;

    t46 = ((x185==x186)|(x187!=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MIN;
	volatile int64_t x190 = INT64_MIN;
	int32_t x191 = INT32_MIN;
	static volatile int64_t x192 = INT64_MIN;
	volatile int32_t t47 = 15699057;

    t47 = ((x189==x190)|(x191!=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x193 = -99;
	volatile int8_t x195 = 3;
	int32_t x196 = -1;
	volatile int32_t t48 = 7;

    t48 = ((x193==x194)|(x195!=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MAX;
	int32_t x199 = -16565;
	static uint64_t x200 = 37788239554944LLU;
	volatile int32_t t49 = 16;

    t49 = ((x197==x198)|(x199!=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = INT32_MIN;
	uint64_t x202 = 3LLU;
	uint8_t x203 = 35U;
	volatile int32_t t50 = 756857488;

    t50 = ((x201==x202)|(x203!=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = -1;
	int64_t x207 = 1986493539700380126LL;
	uint64_t x208 = 1LLU;
	static volatile int32_t t51 = 3579371;

    t51 = ((x205==x206)|(x207!=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x210 = INT16_MIN;
	int64_t x211 = INT64_MAX;
	volatile int8_t x212 = -1;

    t52 = ((x209==x210)|(x211!=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MAX;
	int16_t x214 = INT16_MAX;
	int16_t x215 = INT16_MIN;
	static uint8_t x216 = UINT8_MAX;

    t53 = ((x213==x214)|(x215!=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 2LLU;
	uint16_t x218 = 62U;
	int32_t x220 = INT32_MIN;

    t54 = ((x217==x218)|(x219!=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x221 = 9;
	int8_t x223 = INT8_MIN;
	volatile int32_t x224 = 92419592;
	volatile int32_t t55 = 1;

    t55 = ((x221==x222)|(x223!=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 30150532LLU;
	int64_t x226 = -17806LL;
	uint64_t x228 = 545910433717488LLU;

    t56 = ((x225==x226)|(x227!=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MIN;
	static uint16_t x230 = UINT16_MAX;
	int8_t x231 = 6;
	static int32_t t57 = 82591844;

    t57 = ((x229==x230)|(x231!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x233 = INT64_MAX;
	static int8_t x234 = INT8_MIN;
	uint16_t x235 = UINT16_MAX;
	uint8_t x236 = 1U;
	int32_t t58 = -460;

    t58 = ((x233==x234)|(x235!=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MIN;
	uint16_t x238 = 25654U;
	int64_t x239 = 323327851LL;
	int64_t x240 = -1LL;

    t59 = ((x237==x238)|(x239!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x241 = INT8_MIN;
	int64_t x243 = -1LL;
	int64_t x244 = -1LL;
	static volatile int32_t t60 = -125531623;

    t60 = ((x241==x242)|(x243!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = -1;
	static uint8_t x246 = 0U;
	int8_t x247 = INT8_MIN;
	uint16_t x248 = UINT16_MAX;

    t61 = ((x245==x246)|(x247!=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x250 = 298U;
	uint32_t x251 = 7U;
	int32_t t62 = 130;

    t62 = ((x249==x250)|(x251!=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = 645U;
	int64_t x255 = INT64_MAX;
	int64_t x256 = INT64_MAX;
	static int32_t t63 = -190035563;

    t63 = ((x253==x254)|(x255!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x258 = -21320532LL;
	uint8_t x259 = UINT8_MAX;
	int64_t x260 = -1LL;
	int32_t t64 = 32859817;

    t64 = ((x257==x258)|(x259!=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x261 = -1;
	int32_t x262 = INT32_MIN;
	uint8_t x263 = 85U;
	int32_t x264 = INT32_MIN;
	int32_t t65 = 5257;

    t65 = ((x261==x262)|(x263!=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x265 = 4U;
	uint32_t x266 = UINT32_MAX;
	uint8_t x267 = 0U;

    t66 = ((x265==x266)|(x267!=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x269 = -188;
	int8_t x271 = INT8_MIN;
	static uint32_t x272 = 9704263U;
	volatile int32_t t67 = -64;

    t67 = ((x269==x270)|(x271!=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	int32_t x274 = INT32_MAX;
	volatile int64_t x275 = INT64_MIN;
	int32_t t68 = -45;

    t68 = ((x273==x274)|(x275!=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MIN;
	uint64_t x278 = 14346402358850LLU;
	uint8_t x280 = 5U;

    t69 = ((x277==x278)|(x279!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 1499866186887686LLU;
	int32_t x282 = -1;
	int64_t x283 = INT64_MIN;
	static int16_t x284 = INT16_MIN;
	int32_t t70 = -259184;

    t70 = ((x281==x282)|(x283!=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x285 = 1LLU;
	uint64_t x287 = 129859LLU;
	int32_t x288 = INT32_MIN;
	int32_t t71 = -1523282;

    t71 = ((x285==x286)|(x287!=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MIN;
	uint64_t x290 = 568148395046LLU;
	volatile int16_t x291 = 445;
	int64_t x292 = -6845177LL;
	volatile int32_t t72 = -71677804;

    t72 = ((x289==x290)|(x291!=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = -1;
	uint16_t x294 = UINT16_MAX;
	int64_t x295 = -1LL;
	int16_t x296 = INT16_MAX;

    t73 = ((x293==x294)|(x295!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -4;
	int32_t x298 = 8624;
	int64_t x299 = INT64_MIN;
	int16_t x300 = -1;
	volatile int32_t t74 = 120;

    t74 = ((x297==x298)|(x299!=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x301 = UINT16_MAX;
	uint8_t x302 = UINT8_MAX;
	int32_t x304 = -1;

    t75 = ((x301==x302)|(x303!=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x307 = INT64_MIN;
	uint16_t x308 = 42U;

    t76 = ((x305==x306)|(x307!=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x310 = 9U;
	uint8_t x311 = 2U;
	static uint16_t x312 = 3U;
	volatile int32_t t77 = -353683;

    t77 = ((x309==x310)|(x311!=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = INT32_MIN;
	int32_t x314 = INT32_MIN;
	static int64_t x316 = -1LL;
	volatile int32_t t78 = -440;

    t78 = ((x313==x314)|(x315!=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 9590899195LLU;
	int8_t x318 = INT8_MAX;
	volatile int64_t x319 = -378848LL;
	volatile int32_t t79 = 1157;

    t79 = ((x317==x318)|(x319!=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -30;
	static int64_t x322 = -24988LL;
	uint8_t x323 = 27U;
	static int8_t x324 = INT8_MAX;
	int32_t t80 = 19358;

    t80 = ((x321==x322)|(x323!=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x325 = INT32_MIN;
	int64_t x327 = 2300717LL;
	int16_t x328 = -249;
	int32_t t81 = -407945;

    t81 = ((x325==x326)|(x327!=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x330 = -2232513800808129LL;
	static int8_t x331 = INT8_MAX;
	volatile int32_t x332 = 15;
	int32_t t82 = 121226770;

    t82 = ((x329==x330)|(x331!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = 17;
	int16_t x334 = 1;
	uint64_t x335 = UINT64_MAX;
	int64_t x336 = -82104388LL;
	volatile int32_t t83 = -1;

    t83 = ((x333==x334)|(x335!=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x338 = 228U;
	uint32_t x339 = 1099U;
	volatile int32_t t84 = -131306581;

    t84 = ((x337==x338)|(x339!=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = -6;
	uint8_t x342 = UINT8_MAX;
	volatile int32_t x343 = -1;
	int8_t x344 = INT8_MIN;
	int32_t t85 = -34375079;

    t85 = ((x341==x342)|(x343!=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x345 = -20;
	static int32_t x346 = 110037;
	uint8_t x348 = 67U;
	int32_t t86 = 21317;

    t86 = ((x345==x346)|(x347!=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = -20;
	volatile uint16_t x350 = UINT16_MAX;
	uint8_t x351 = 2U;
	static volatile int8_t x352 = 1;
	int32_t t87 = 430717445;

    t87 = ((x349==x350)|(x351!=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	static int32_t x354 = -866;
	int8_t x356 = INT8_MIN;

    t88 = ((x353==x354)|(x355!=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x357 = 2121454868LLU;
	int64_t x359 = -16624985421552462LL;
	uint8_t x360 = 95U;
	int32_t t89 = 2082824;

    t89 = ((x357==x358)|(x359!=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x361 = INT64_MAX;
	volatile int16_t x363 = INT16_MIN;
	volatile int32_t t90 = 59;

    t90 = ((x361==x362)|(x363!=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = 110382860U;
	uint8_t x366 = UINT8_MAX;
	static uint32_t x367 = UINT32_MAX;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = 1;

    t91 = ((x365==x366)|(x367!=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 904U;
	volatile int8_t x370 = INT8_MIN;
	int64_t x371 = -1LL;
	volatile int32_t t92 = -28384;

    t92 = ((x369==x370)|(x371!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MIN;
	int64_t x374 = INT64_MIN;
	int32_t x376 = 138348840;
	volatile int32_t t93 = 18436331;

    t93 = ((x373==x374)|(x375!=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = UINT64_MAX;
	int32_t x378 = INT32_MAX;
	static int8_t x379 = -20;
	uint32_t x380 = 156301U;

    t94 = ((x377==x378)|(x379!=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    

    t95 = ((x381==x382)|(x383!=x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = 9022212258334LL;
	int32_t x386 = INT32_MAX;
	int64_t x387 = -4832LL;
	volatile int8_t x388 = INT8_MIN;
	volatile int32_t t96 = -6011363;

    t96 = ((x385==x386)|(x387!=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x390 = 234406613;
	int16_t x391 = INT16_MIN;
	int8_t x392 = INT8_MIN;
	static int32_t t97 = -4925;

    t97 = ((x389==x390)|(x391!=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 4558LLU;
	int8_t x394 = -1;
	int64_t x395 = INT64_MAX;
	int64_t x396 = INT64_MIN;
	volatile int32_t t98 = -439;

    t98 = ((x393==x394)|(x395!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x398 = INT8_MAX;
	int32_t x399 = INT32_MIN;
	uint32_t x400 = UINT32_MAX;
	volatile int32_t t99 = -2304;

    t99 = ((x397==x398)|(x399!=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x401 = 0U;
	volatile uint64_t x402 = 15LLU;
	uint64_t x403 = 7741028923974LLU;
	int64_t x404 = 110153952670LL;

    t100 = ((x401==x402)|(x403!=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = UINT64_MAX;
	int32_t x406 = -439284475;
	uint32_t x407 = UINT32_MAX;
	volatile int32_t t101 = 2680968;

    t101 = ((x405==x406)|(x407!=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x410 = UINT32_MAX;
	int8_t x412 = -1;

    t102 = ((x409==x410)|(x411!=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x413 = INT16_MIN;
	uint64_t x414 = 1119187239253674LLU;
	uint8_t x415 = 2U;
	uint8_t x416 = 0U;
	int32_t t103 = 2991433;

    t103 = ((x413==x414)|(x415!=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x417 = 0U;
	static int8_t x419 = INT8_MIN;
	int8_t x420 = 1;
	int32_t t104 = -907;

    t104 = ((x417==x418)|(x419!=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x421 = 0U;
	int64_t x422 = 245147491337931158LL;
	uint8_t x423 = 50U;
	volatile int64_t x424 = -125833LL;
	static int32_t t105 = 153;

    t105 = ((x421==x422)|(x423!=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MIN;
	int16_t x427 = INT16_MIN;
	int32_t t106 = 5247094;

    t106 = ((x425==x426)|(x427!=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = -6;
	int8_t x431 = INT8_MIN;
	static int64_t x432 = -219340277LL;
	static int32_t t107 = -559;

    t107 = ((x429==x430)|(x431!=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x433 = INT32_MAX;
	static int16_t x434 = INT16_MIN;
	int8_t x435 = INT8_MIN;
	volatile int16_t x436 = 420;
	int32_t t108 = -385;

    t108 = ((x433==x434)|(x435!=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = 21;
	static uint64_t x438 = 2588233737036LLU;
	volatile int64_t x439 = -1LL;
	int64_t x440 = 3395076362LL;
	static int32_t t109 = -630727;

    t109 = ((x437==x438)|(x439!=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MIN;
	volatile int32_t x442 = INT32_MAX;
	uint16_t x443 = UINT16_MAX;

    t110 = ((x441==x442)|(x443!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int32_t x445 = -100342;
	int16_t x447 = -2;
	static volatile int64_t x448 = -4LL;
	volatile int32_t t111 = 333380;

    t111 = ((x445==x446)|(x447!=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x449 = -1;
	uint64_t x450 = UINT64_MAX;
	static int8_t x451 = -1;
	volatile int64_t x452 = INT64_MIN;
	int32_t t112 = 3519575;

    t112 = ((x449==x450)|(x451!=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = -1LL;
	static int8_t x454 = INT8_MAX;
	static volatile uint32_t x455 = 3U;
	volatile uint32_t x456 = 583485U;
	int32_t t113 = -1749226;

    t113 = ((x453==x454)|(x455!=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MAX;
	volatile int8_t x459 = -1;
	static uint64_t x460 = 123086059299759LLU;
	int32_t t114 = 43862849;

    t114 = ((x457==x458)|(x459!=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = UINT8_MAX;
	int16_t x463 = -1;
	int8_t x464 = INT8_MAX;
	static volatile int32_t t115 = -16;

    t115 = ((x461==x462)|(x463!=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int16_t x465 = INT16_MIN;
	int16_t x466 = -1;
	int16_t x467 = -47;

    t116 = ((x465==x466)|(x467!=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 18324326437LLU;
	static int64_t x470 = INT64_MIN;
	uint8_t x471 = 3U;
	int32_t x472 = INT32_MAX;

    t117 = ((x469==x470)|(x471!=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x473 = 1327;
	volatile int64_t x474 = INT64_MAX;
	volatile int8_t x475 = INT8_MIN;
	int32_t t118 = -188;

    t118 = ((x473==x474)|(x475!=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x478 = 155U;
	uint8_t x479 = UINT8_MAX;
	int32_t x480 = -1;
	int32_t t119 = -32;

    t119 = ((x477==x478)|(x479!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x481 = INT32_MIN;
	static int32_t x482 = INT32_MIN;
	int16_t x483 = INT16_MAX;
	int8_t x484 = INT8_MIN;
	int32_t t120 = 132187438;

    t120 = ((x481==x482)|(x483!=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -1;
	int8_t x487 = -28;
	static int64_t x488 = INT64_MIN;
	static volatile int32_t t121 = -261848;

    t121 = ((x485==x486)|(x487!=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = 1;
	int8_t x490 = 24;
	uint64_t x491 = UINT64_MAX;
	uint16_t x492 = 912U;

    t122 = ((x489==x490)|(x491!=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x493 = INT32_MIN;
	volatile uint64_t x494 = UINT64_MAX;
	volatile uint8_t x495 = 62U;

    t123 = ((x493==x494)|(x495!=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 16U;
	static uint32_t x498 = UINT32_MAX;
	uint8_t x499 = UINT8_MAX;
	volatile uint32_t x500 = 1U;
	int32_t t124 = 36150;

    t124 = ((x497==x498)|(x499!=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -444709;
	int8_t x502 = INT8_MIN;
	int8_t x503 = INT8_MIN;
	int16_t x504 = 23;
	volatile int32_t t125 = 69;

    t125 = ((x501==x502)|(x503!=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x505 = 259297129U;
	int8_t x506 = 25;
	volatile int8_t x507 = INT8_MIN;
	int32_t x508 = INT32_MIN;
	static volatile int32_t t126 = -14930;

    t126 = ((x505==x506)|(x507!=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 81LLU;
	int32_t x510 = INT32_MAX;
	uint8_t x511 = 3U;
	static volatile int8_t x512 = INT8_MIN;
	int32_t t127 = -33288096;

    t127 = ((x509==x510)|(x511!=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 15682U;
	int64_t x515 = INT64_MIN;
	uint32_t x516 = 110397U;
	volatile int32_t t128 = -25782;

    t128 = ((x513==x514)|(x515!=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x517 = 2195U;
	volatile uint8_t x518 = UINT8_MAX;
	volatile int8_t x519 = INT8_MAX;
	static uint64_t x520 = 65213320776381769LLU;
	volatile int32_t t129 = 26885;

    t129 = ((x517==x518)|(x519!=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = 2;
	uint16_t x522 = UINT16_MAX;
	int64_t x523 = INT64_MIN;
	int8_t x524 = -1;
	int32_t t130 = -81940;

    t130 = ((x521==x522)|(x523!=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MAX;
	uint32_t x526 = 0U;
	int32_t x527 = INT32_MAX;
	int32_t t131 = 16002794;

    t131 = ((x525==x526)|(x527!=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MAX;
	int16_t x532 = INT16_MIN;
	int32_t t132 = -1070516886;

    t132 = ((x529==x530)|(x531!=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x533 = 4765LL;
	uint32_t x534 = 80U;
	static int64_t x535 = -1LL;
	int16_t x536 = INT16_MAX;
	static volatile int32_t t133 = 120361;

    t133 = ((x533==x534)|(x535!=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x539 = INT16_MIN;
	int16_t x540 = INT16_MIN;
	int32_t t134 = -3;

    t134 = ((x537==x538)|(x539!=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x541 = 20U;
	uint64_t x543 = 283519LLU;
	volatile uint16_t x544 = 3591U;
	int32_t t135 = -14;

    t135 = ((x541==x542)|(x543!=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x546 = 44LLU;
	static int8_t x547 = INT8_MIN;
	uint64_t x548 = 1996186057679893LLU;

    t136 = ((x545==x546)|(x547!=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x549 = INT32_MIN;
	static int16_t x550 = INT16_MIN;
	static volatile uint32_t x551 = 1254U;
	volatile int32_t t137 = 48021341;

    t137 = ((x549==x550)|(x551!=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = 46;
	uint8_t x554 = UINT8_MAX;
	static int8_t x555 = INT8_MAX;
	uint16_t x556 = 1U;
	int32_t t138 = 0;

    t138 = ((x553==x554)|(x555!=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 1096419147LLU;
	static int16_t x559 = 0;
	int64_t x560 = INT64_MIN;
	volatile int32_t t139 = 4;

    t139 = ((x557==x558)|(x559!=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = -1;
	static volatile int64_t x562 = INT64_MIN;
	int16_t x563 = 1;
	int8_t x564 = -15;
	volatile int32_t t140 = 172506;

    t140 = ((x561==x562)|(x563!=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MIN;
	int32_t x566 = -944346;
	uint8_t x567 = UINT8_MAX;
	int64_t x568 = INT64_MIN;
	int32_t t141 = -821;

    t141 = ((x565==x566)|(x567!=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = INT16_MIN;
	static int32_t x571 = INT32_MAX;
	static volatile int32_t t142 = -3;

    t142 = ((x569==x570)|(x571!=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x573 = 96011795U;
	static int8_t x574 = INT8_MAX;
	volatile int64_t x575 = INT64_MIN;
	int32_t x576 = INT32_MIN;

    t143 = ((x573==x574)|(x575!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	int16_t x578 = INT16_MIN;
	int16_t x579 = INT16_MIN;
	uint64_t x580 = 818LLU;
	int32_t t144 = -43495573;

    t144 = ((x577==x578)|(x579!=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = 0;
	volatile int64_t x582 = INT64_MAX;
	uint16_t x583 = 19159U;
	int16_t x584 = INT16_MIN;
	int32_t t145 = 116577295;

    t145 = ((x581==x582)|(x583!=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	volatile int32_t x586 = INT32_MIN;
	int16_t x587 = -8484;
	volatile int32_t t146 = -1853737;

    t146 = ((x585==x586)|(x587!=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = UINT8_MAX;
	static uint64_t x590 = UINT64_MAX;
	int8_t x592 = -10;
	volatile int32_t t147 = -11385;

    t147 = ((x589==x590)|(x591!=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = 861420513;
	volatile int16_t x594 = -1;
	int16_t x595 = -657;
	volatile uint16_t x596 = 1U;
	volatile int32_t t148 = 6979;

    t148 = ((x593==x594)|(x595!=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x599 = 78289945132482LLU;
	int32_t x600 = INT32_MIN;
	volatile int32_t t149 = -19;

    t149 = ((x597==x598)|(x599!=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x603 = INT8_MIN;
	volatile int8_t x604 = 60;
	volatile int32_t t150 = 20;

    t150 = ((x601==x602)|(x603!=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = 29708U;
	uint8_t x606 = UINT8_MAX;
	int16_t x607 = -1;
	static int8_t x608 = INT8_MAX;
	static volatile int32_t t151 = 19817;

    t151 = ((x605==x606)|(x607!=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x609 = 51288369660551608LLU;
	int16_t x610 = INT16_MAX;
	uint16_t x612 = 689U;
	int32_t t152 = 83;

    t152 = ((x609==x610)|(x611!=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x613 = 106U;
	static int64_t x614 = INT64_MIN;
	uint64_t x615 = 180098804993LLU;
	volatile uint64_t x616 = 4195154441213079452LLU;

    t153 = ((x613==x614)|(x615!=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x617 = -1LL;
	static int16_t x618 = INT16_MAX;
	int64_t x619 = -1LL;
	int16_t x620 = INT16_MAX;

    t154 = ((x617==x618)|(x619!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = INT8_MIN;
	int8_t x622 = 6;
	int64_t x623 = 1696690641679LL;
	int64_t x624 = -200575434403571LL;
	volatile int32_t t155 = -128436;

    t155 = ((x621==x622)|(x623!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -851;
	static uint32_t x626 = 95286U;
	int32_t x628 = -1;
	volatile int32_t t156 = 1;

    t156 = ((x625==x626)|(x627!=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x629 = INT64_MAX;
	int64_t x631 = INT64_MIN;

    t157 = ((x629==x630)|(x631!=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MAX;
	static int16_t x634 = INT16_MIN;
	uint32_t x635 = 8039U;
	int16_t x636 = INT16_MIN;
	static int32_t t158 = 951427402;

    t158 = ((x633==x634)|(x635!=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x637 = INT8_MIN;
	volatile int8_t x639 = -1;
	volatile int32_t t159 = -13312;

    t159 = ((x637==x638)|(x639!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = -10;
	int64_t x642 = -1LL;
	int64_t x644 = INT64_MAX;
	int32_t t160 = 893;

    t160 = ((x641==x642)|(x643!=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = UINT8_MAX;
	uint16_t x646 = UINT16_MAX;
	volatile int32_t t161 = -28296949;

    t161 = ((x645==x646)|(x647!=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 73365LLU;
	int64_t x650 = INT64_MIN;
	int16_t x651 = INT16_MAX;
	static volatile int32_t t162 = 0;

    t162 = ((x649==x650)|(x651!=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x653 = INT32_MAX;
	int8_t x654 = INT8_MAX;
	static volatile int64_t x655 = INT64_MAX;
	int32_t x656 = 4;
	volatile int32_t t163 = -45000;

    t163 = ((x653==x654)|(x655!=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x657 = INT64_MIN;
	uint16_t x658 = 969U;
	int64_t x659 = -27743439443537LL;
	static uint32_t x660 = 22U;
	static volatile int32_t t164 = -2754;

    t164 = ((x657==x658)|(x659!=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = 104407U;
	int32_t x662 = INT32_MIN;
	int16_t x663 = -1;
	int32_t t165 = 15255043;

    t165 = ((x661==x662)|(x663!=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -69;
	uint16_t x666 = 0U;
	int8_t x667 = -1;
	static volatile int32_t x668 = INT32_MIN;

    t166 = ((x665==x666)|(x667!=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int8_t x670 = -1;
	int8_t x671 = INT8_MIN;
	uint32_t x672 = 709U;
	int32_t t167 = 44217;

    t167 = ((x669==x670)|(x671!=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = -1;
	int64_t x675 = INT64_MIN;
	uint64_t x676 = 49LLU;

    t168 = ((x673==x674)|(x675!=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x677 = -379375360287433LL;
	volatile int32_t x679 = INT32_MAX;
	int16_t x680 = INT16_MAX;
	int32_t t169 = 111265;

    t169 = ((x677==x678)|(x679!=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	int32_t x682 = 18567;
	uint16_t x683 = 140U;
	int64_t x684 = INT64_MAX;
	volatile int32_t t170 = 70;

    t170 = ((x681==x682)|(x683!=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = -1;
	int32_t x686 = INT32_MIN;
	int32_t x688 = INT32_MIN;
	volatile int32_t t171 = 41361;

    t171 = ((x685==x686)|(x687!=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = 32408593LL;
	uint16_t x692 = UINT16_MAX;
	volatile int32_t t172 = -14988;

    t172 = ((x689==x690)|(x691!=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MIN;
	int16_t x694 = -1;
	int64_t x695 = INT64_MAX;
	uint16_t x696 = UINT16_MAX;
	int32_t t173 = 0;

    t173 = ((x693==x694)|(x695!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MIN;
	int32_t x698 = -205485;
	static int8_t x699 = INT8_MIN;
	static int64_t x700 = INT64_MIN;
	int32_t t174 = -48;

    t174 = ((x697==x698)|(x699!=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x702 = UINT16_MAX;
	int64_t x703 = -1LL;
	static int16_t x704 = 1;

    t175 = ((x701==x702)|(x703!=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x706 = 3U;
	static int32_t x707 = INT32_MAX;
	int32_t t176 = -7766431;

    t176 = ((x705==x706)|(x707!=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = 1U;
	static int32_t x710 = INT32_MIN;
	int32_t x711 = INT32_MAX;
	static int8_t x712 = 0;
	int32_t t177 = -224572;

    t177 = ((x709==x710)|(x711!=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = 1;
	volatile uint64_t x715 = 345151039LLU;
	int64_t x716 = -494LL;
	int32_t t178 = 84139342;

    t178 = ((x713==x714)|(x715!=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x718 = 25;
	int64_t x719 = -1LL;
	int8_t x720 = -1;
	volatile int32_t t179 = 1;

    t179 = ((x717==x718)|(x719!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x721 = INT64_MIN;
	uint64_t x723 = UINT64_MAX;
	uint8_t x724 = 0U;

    t180 = ((x721==x722)|(x723!=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x725 = UINT64_MAX;
	uint64_t x726 = UINT64_MAX;
	int16_t x727 = 2;
	int16_t x728 = -1;

    t181 = ((x725==x726)|(x727!=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x729 = 605018070LLU;
	uint16_t x730 = 31U;
	static int64_t x731 = 0LL;
	int32_t t182 = -93975810;

    t182 = ((x729==x730)|(x731!=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MAX;
	uint16_t x734 = 2U;
	int16_t x735 = INT16_MAX;
	uint64_t x736 = 5226750604227712964LLU;
	volatile int32_t t183 = -6838943;

    t183 = ((x733==x734)|(x735!=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x738 = 0U;
	uint16_t x739 = UINT16_MAX;
	int64_t x740 = -17481546LL;
	static volatile int32_t t184 = 289331683;

    t184 = ((x737==x738)|(x739!=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = 700545;
	int64_t x742 = INT64_MIN;
	int8_t x744 = -1;
	volatile int32_t t185 = 32185;

    t185 = ((x741==x742)|(x743!=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = 4657U;
	int16_t x746 = -1;
	int16_t x747 = INT16_MIN;
	int64_t x748 = -237957263565LL;

    t186 = ((x745==x746)|(x747!=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MAX;
	int8_t x750 = -1;
	uint8_t x751 = 1U;
	static int32_t x752 = INT32_MIN;

    t187 = ((x749==x750)|(x751!=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x753 = INT16_MAX;
	static volatile uint32_t x754 = UINT32_MAX;
	static int32_t t188 = -256;

    t188 = ((x753==x754)|(x755!=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x757 = 61U;
	int32_t x758 = INT32_MIN;
	volatile uint8_t x760 = 3U;
	volatile int32_t t189 = 12993062;

    t189 = ((x757==x758)|(x759!=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = UINT64_MAX;
	volatile int64_t x762 = INT64_MAX;
	uint64_t x763 = UINT64_MAX;
	volatile uint64_t x764 = 942449145171458LLU;
	volatile int32_t t190 = 104100;

    t190 = ((x761==x762)|(x763!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x765 = INT64_MAX;
	static uint32_t x766 = UINT32_MAX;
	volatile int32_t x767 = INT32_MAX;
	static volatile uint32_t x768 = UINT32_MAX;
	volatile int32_t t191 = -94885207;

    t191 = ((x765==x766)|(x767!=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint32_t x770 = 2U;
	int64_t x772 = INT64_MIN;
	static int32_t t192 = -369385076;

    t192 = ((x769==x770)|(x771!=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = 643797U;
	static uint32_t x774 = 522U;
	int8_t x775 = INT8_MIN;

    t193 = ((x773==x774)|(x775!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x777 = INT16_MIN;
	int8_t x778 = -47;
	int32_t x779 = -1;
	uint16_t x780 = 1U;

    t194 = ((x777==x778)|(x779!=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = -1LL;
	static int64_t x782 = INT64_MIN;
	volatile int16_t x783 = 1;
	static int32_t t195 = -922476314;

    t195 = ((x781==x782)|(x783!=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x786 = 0U;
	volatile int64_t x787 = -169486795423523889LL;
	volatile uint16_t x788 = UINT16_MAX;
	int32_t t196 = 194;

    t196 = ((x785==x786)|(x787!=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x789 = INT8_MIN;
	int8_t x790 = INT8_MAX;
	int32_t x792 = INT32_MIN;
	int32_t t197 = 132789;

    t197 = ((x789==x790)|(x791!=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x793 = INT64_MIN;
	int64_t x795 = -139675LL;
	volatile uint16_t x796 = 335U;
	volatile int32_t t198 = -60332682;

    t198 = ((x793==x794)|(x795!=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = UINT16_MAX;
	volatile uint16_t x798 = 11U;
	int8_t x799 = -22;
	uint8_t x800 = 1U;
	volatile int32_t t199 = 26;

    t199 = ((x797==x798)|(x799!=x800));

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

