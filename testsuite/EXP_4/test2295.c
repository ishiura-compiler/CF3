
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

static uint64_t x1 = UINT64_MAX;
uint8_t x5 = 14U;
static uint16_t x10 = UINT16_MAX;
int16_t x15 = -216;
static volatile int64_t x18 = INT64_MIN;
static int32_t x20 = INT32_MAX;
int16_t x24 = -9;
int32_t x28 = -1055;
int32_t t7 = INT32_MIN;
int64_t x36 = -2036381LL;
volatile int64_t t8 = -17010490LL;
int8_t x37 = 1;
uint32_t x40 = UINT32_MAX;
int32_t t11 = -781298463;
int8_t x50 = -3;
int32_t t12 = -450705;
static uint16_t x57 = UINT16_MAX;
volatile int64_t x64 = INT64_MIN;
int32_t t15 = 1;
volatile int8_t x65 = -1;
static volatile int16_t x69 = -1;
uint16_t x76 = 3U;
int32_t x77 = INT32_MIN;
int32_t t19 = INT32_MIN;
int32_t x95 = -3;
uint16_t x100 = UINT16_MAX;
uint64_t x101 = 172906236620LLU;
uint64_t x102 = 11LLU;
int64_t x105 = INT64_MAX;
static int64_t x111 = INT64_MIN;
int8_t x112 = -1;
int16_t x115 = INT16_MAX;
int32_t x116 = INT32_MIN;
int8_t x117 = INT8_MIN;
static int32_t x121 = INT32_MIN;
volatile int32_t x127 = INT32_MIN;
uint16_t x146 = UINT16_MAX;
int8_t x151 = -1;
uint64_t x153 = 6226319LLU;
int32_t x164 = INT32_MIN;
static int64_t t40 = 51684LL;
int64_t x166 = 13000495623318393LL;
uint32_t x174 = 410557U;
uint64_t x178 = UINT64_MAX;
volatile int32_t t45 = -87074237;
static int32_t x190 = INT32_MAX;
int32_t t47 = 1131743;
volatile int32_t x194 = INT32_MIN;
static int32_t x195 = INT32_MIN;
int32_t x199 = INT32_MAX;
volatile uint32_t x200 = 12025U;
static volatile int32_t x201 = INT32_MIN;
volatile int32_t t50 = INT32_MIN;
uint16_t x223 = 23125U;
int16_t x224 = 6;
int8_t x225 = -7;
int16_t x226 = INT16_MAX;
static int8_t x228 = INT8_MAX;
int32_t t58 = INT32_MAX;
static volatile int16_t x240 = INT16_MIN;
uint32_t t59 = 3U;
uint8_t x241 = 4U;
static volatile int16_t x244 = INT16_MIN;
static volatile int8_t x249 = 0;
uint32_t x255 = 85U;
int32_t x259 = INT32_MIN;
uint16_t x260 = 91U;
volatile int8_t x261 = INT8_MIN;
static uint64_t x262 = 412081LLU;
uint8_t x263 = 0U;
int16_t x264 = INT16_MAX;
int8_t x268 = -1;
int64_t x272 = -226276033873LL;
int32_t x275 = INT32_MIN;
int32_t t68 = 6392062;
int64_t x277 = INT64_MIN;
static int32_t t71 = INT32_MAX;
int8_t x289 = INT8_MAX;
int32_t x294 = 41357;
volatile int64_t t74 = INT64_MIN;
uint64_t x307 = UINT64_MAX;
int8_t x314 = INT8_MAX;
volatile int32_t t78 = 8;
int64_t t79 = 3889047836511423LL;
static volatile int16_t x324 = INT16_MIN;
uint64_t x327 = 30136451197730LLU;
int32_t t81 = 55;
int32_t t82 = 247531;
volatile uint32_t x335 = UINT32_MAX;
int8_t x342 = INT8_MIN;
int64_t x343 = -1LL;
static int8_t x345 = -1;
int64_t x347 = INT64_MIN;
volatile int32_t t86 = 29203;
int64_t x352 = INT64_MIN;
volatile uint32_t x355 = 35U;
static volatile int32_t t92 = -149511;
int16_t x377 = -1;
int16_t x379 = INT16_MIN;
int8_t x380 = INT8_MIN;
int64_t x381 = INT64_MIN;
volatile int64_t t95 = INT64_MIN;
volatile int32_t t96 = 7345665;
volatile int16_t x392 = 2;
uint16_t x394 = 0U;
uint64_t x397 = UINT64_MAX;
uint64_t t99 = UINT64_MAX;
static int16_t x406 = INT16_MIN;
uint16_t x407 = UINT16_MAX;
int16_t x409 = INT16_MIN;
int8_t x414 = 2;
int32_t x418 = INT32_MAX;
int32_t x421 = 3;
volatile uint8_t x422 = UINT8_MAX;
volatile int64_t x423 = -163289309312250960LL;
int8_t x425 = INT8_MAX;
volatile uint8_t x429 = UINT8_MAX;
int32_t x430 = 478;
int32_t t107 = -6685063;
int16_t x444 = -1;
int64_t x445 = -1LL;
static int64_t x446 = -1LL;
int64_t t111 = 14582LL;
int8_t x451 = INT8_MIN;
volatile uint64_t t112 = UINT64_MAX;
int8_t x456 = -1;
int32_t t113 = 3;
int32_t x458 = 4181969;
static uint8_t x464 = 8U;
static uint16_t x465 = 814U;
uint8_t x468 = UINT8_MAX;
uint16_t x470 = 28092U;
int32_t t117 = INT32_MIN;
volatile int32_t t118 = 833042;
int64_t x478 = -1110078095406107186LL;
int8_t x482 = 2;
uint64_t x483 = 10435498056595LLU;
volatile int16_t x488 = INT16_MAX;
volatile int8_t x493 = INT8_MAX;
int32_t t124 = -8590725;
uint64_t x502 = 4183701996LLU;
static int64_t x512 = INT64_MIN;
volatile int32_t t127 = -294230925;
int8_t x521 = INT8_MAX;
volatile int32_t t130 = 1909;
uint8_t x526 = 1U;
volatile uint32_t t131 = 318U;
uint8_t x531 = UINT8_MAX;
volatile uint64_t x532 = UINT64_MAX;
int8_t x534 = INT8_MIN;
int64_t x547 = -1LL;
uint32_t x548 = 242505753U;
int64_t x552 = INT64_MIN;
volatile int32_t t137 = 4975488;
int32_t x556 = INT32_MIN;
int64_t x558 = INT64_MIN;
volatile uint64_t x561 = 487782181916LLU;
volatile int32_t x566 = -260069847;
int64_t x570 = INT64_MIN;
uint16_t x571 = UINT16_MAX;
volatile int32_t t142 = 266028289;
static uint32_t x575 = 26U;
static int32_t t144 = -5;
int64_t x582 = 3964LL;
uint64_t x585 = 730197421LLU;
uint64_t t146 = 29LLU;
int8_t x589 = INT8_MIN;
int8_t x596 = INT8_MAX;
volatile int32_t t148 = -108;
static volatile int64_t x601 = 351986LL;
uint32_t x604 = 88959U;
static int16_t x608 = INT16_MIN;
uint64_t x609 = 738035LLU;
static volatile int64_t x612 = 5207865805744172LL;
int64_t x616 = INT64_MAX;
static int32_t t153 = 643;
volatile uint64_t x618 = UINT64_MAX;
uint16_t x624 = 9789U;
volatile int32_t t155 = 0;
int64_t x630 = INT64_MAX;
static uint64_t x634 = 48LLU;
int32_t t158 = -1301;
uint16_t x637 = 1U;
uint8_t x639 = UINT8_MAX;
int8_t x647 = -49;
int8_t x658 = INT8_MIN;
static int8_t x659 = 2;
static uint16_t x663 = UINT16_MAX;
uint16_t x671 = 19U;
static int32_t t169 = 0;
int8_t x683 = INT8_MIN;
volatile int64_t x686 = INT64_MIN;
int16_t x695 = -1;
int16_t x698 = INT16_MIN;
int64_t x699 = -1LL;
uint32_t t178 = UINT32_MAX;
static volatile uint32_t x719 = 3736993U;
int32_t x720 = -32;
static volatile int32_t t180 = -7;
int32_t t181 = 1;
int64_t x734 = -1LL;
int32_t x736 = INT32_MIN;
uint64_t x745 = UINT64_MAX;
int16_t x746 = 1;
volatile uint8_t x753 = UINT8_MAX;
static int16_t x761 = INT16_MIN;
int64_t x762 = -38244727857947LL;
int32_t x769 = 14;
int8_t x771 = -54;
int64_t x772 = INT64_MIN;
int32_t t192 = -63504096;
static int8_t x775 = INT8_MIN;
int16_t x776 = INT16_MIN;
uint8_t x777 = UINT8_MAX;
static uint32_t x780 = UINT32_MAX;
static int32_t t194 = -4;
static int64_t x784 = 17956866678549231LL;
int8_t x787 = 3;
int64_t x790 = -1LL;
volatile int8_t x795 = -1;
volatile int64_t x797 = INT64_MAX;
int16_t x798 = INT16_MIN;
static uint64_t x800 = UINT64_MAX;


void f0(void) {
    	volatile int32_t x2 = INT32_MIN;
	volatile int16_t x3 = INT16_MIN;
	uint32_t x4 = UINT32_MAX;
	volatile uint64_t t0 = UINT64_MAX;

    t0 = (x1|(x2<=(x3&x4)));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MIN;
	static volatile int16_t x7 = -1;
	int16_t x8 = INT16_MAX;
	volatile int32_t t1 = -1;

    t1 = (x5|(x6<=(x7&x8)));

    if (t1 != 15) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = INT32_MIN;
	static volatile int64_t x11 = INT64_MIN;
	int16_t x12 = -148;
	int32_t t2 = INT32_MIN;

    t2 = (x9|(x10<=(x11&x12)));

    if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 42U;
	int32_t x14 = INT32_MIN;
	static uint64_t x16 = 3508LLU;
	uint32_t t3 = 109U;

    t3 = (x13|(x14<=(x15&x16)));

    if (t3 != 42U) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = 21137796163LL;
	volatile int32_t x19 = INT32_MAX;
	int64_t t4 = -41LL;

    t4 = (x17|(x18<=(x19&x20)));

    if (t4 != 21137796163LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x21 = 12033U;
	volatile uint16_t x22 = UINT16_MAX;
	static int64_t x23 = INT64_MIN;
	volatile int32_t t5 = 1213;

    t5 = (x21|(x22<=(x23&x24)));

    if (t5 != 12033) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	int32_t x26 = INT32_MIN;
	int32_t x27 = INT32_MAX;
	int32_t t6 = -3378973;

    t6 = (x25|(x26<=(x27&x28)));

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	static int16_t x30 = -1;
	volatile uint8_t x31 = 20U;
	uint64_t x32 = UINT64_MAX;

    t7 = (x29|(x30<=(x31&x32)));

    if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	static volatile int32_t x34 = INT32_MIN;
	int8_t x35 = INT8_MAX;

    t8 = (x33|(x34<=(x35&x36)));

    if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x38 = INT32_MAX;
	static int16_t x39 = 2;
	volatile int32_t t9 = 0;

    t9 = (x37|(x38<=(x39&x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = INT8_MIN;
	int32_t x42 = 44;
	static uint64_t x43 = UINT64_MAX;
	int8_t x44 = 0;
	int32_t t10 = -261;

    t10 = (x41|(x42<=(x43&x44)));

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x45 = -163;
	int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MAX;
	volatile uint64_t x48 = 106670LLU;

    t11 = (x45|(x46<=(x47&x48)));

    if (t11 != -163) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	volatile int64_t x51 = INT64_MIN;
	volatile int16_t x52 = -7672;

    t12 = (x49|(x50<=(x51&x52)));

    if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x53 = 1781U;
	int32_t x54 = INT32_MIN;
	uint16_t x55 = 4U;
	uint64_t x56 = 1064127302925881LLU;
	volatile int32_t t13 = 250004781;

    t13 = (x53|(x54<=(x55&x56)));

    if (t13 != 1781) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = INT32_MAX;
	static int8_t x59 = INT8_MIN;
	volatile int64_t x60 = INT64_MAX;
	int32_t t14 = 61956;

    t14 = (x57|(x58<=(x59&x60)));

    if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = UINT8_MAX;
	static uint64_t x62 = 1015547368363347024LLU;
	int64_t x63 = -1LL;

    t15 = (x61|(x62<=(x63&x64)));

    if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x66 = INT8_MIN;
	static int16_t x67 = -1713;
	uint32_t x68 = UINT32_MAX;
	static int32_t t16 = 906622246;

    t16 = (x65|(x66<=(x67&x68)));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x70 = 197U;
	int8_t x71 = -1;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = -1;

    t17 = (x69|(x70<=(x71&x72)));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = UINT16_MAX;
	volatile int32_t x74 = -1;
	static int8_t x75 = -10;
	volatile int32_t t18 = 16399546;

    t18 = (x73|(x74<=(x75&x76)));

    if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x78 = INT16_MIN;
	static volatile uint64_t x79 = 11748385807LLU;
	int8_t x80 = -3;

    t19 = (x77|(x78<=(x79&x80)));

    if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = 42;
	int16_t x82 = -1;
	static int32_t x83 = INT32_MIN;
	volatile int64_t x84 = INT64_MAX;
	volatile int32_t t20 = 748083461;

    t20 = (x81|(x82<=(x83&x84)));

    if (t20 != 43) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x85 = 24800U;
	int16_t x86 = -36;
	int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MAX;
	volatile int32_t t21 = 2200876;

    t21 = (x85|(x86<=(x87&x88)));

    if (t21 != 24801) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = UINT8_MAX;
	int64_t x90 = -1LL;
	int32_t x91 = 33602;
	uint8_t x92 = 0U;
	volatile int32_t t22 = 140;

    t22 = (x89|(x90<=(x91&x92)));

    if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 4462U;
	volatile int32_t x94 = -1;
	int32_t x96 = INT32_MIN;
	int32_t t23 = 211395;

    t23 = (x93|(x94<=(x95&x96)));

    if (t23 != 4462) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x97 = 1005U;
	volatile int64_t x98 = INT64_MIN;
	uint16_t x99 = 337U;
	volatile uint32_t t24 = 126330U;

    t24 = (x97|(x98<=(x99&x100)));

    if (t24 != 1005U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x103 = 31U;
	int64_t x104 = 23565629597LL;
	uint64_t t25 = 145LLU;

    t25 = (x101|(x102<=(x103&x104)));

    if (t25 != 172906236621LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x106 = -18083116196009LL;
	static int32_t x107 = -2;
	int64_t x108 = -1LL;
	static int64_t t26 = INT64_MAX;

    t26 = (x105|(x106<=(x107&x108)));

    if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -162;
	uint32_t x110 = 15U;
	int32_t t27 = 15557661;

    t27 = (x109|(x110<=(x111&x112)));

    if (t27 != -162) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -1;
	int64_t x114 = INT64_MIN;
	static volatile int32_t t28 = -2562;

    t28 = (x113|(x114<=(x115&x116)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x118 = 7354LLU;
	int64_t x119 = INT64_MIN;
	uint64_t x120 = UINT64_MAX;
	int32_t t29 = 33470406;

    t29 = (x117|(x118<=(x119&x120)));

    if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x122 = INT64_MIN;
	uint32_t x123 = 257048389U;
	int16_t x124 = -1;
	int32_t t30 = -803194;

    t30 = (x121|(x122<=(x123&x124)));

    if (t30 != -2147483647) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x125 = -6;
	int64_t x126 = INT64_MAX;
	int16_t x128 = 9556;
	static int32_t t31 = -887424;

    t31 = (x125|(x126<=(x127&x128)));

    if (t31 != -6) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = INT64_MAX;
	uint32_t x130 = 2U;
	int64_t x131 = 55397471716864337LL;
	uint8_t x132 = 1U;
	int64_t t32 = INT64_MAX;

    t32 = (x129|(x130<=(x131&x132)));

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 960056557U;
	uint32_t x134 = UINT32_MAX;
	uint16_t x135 = 112U;
	int16_t x136 = INT16_MIN;
	uint32_t t33 = 308583U;

    t33 = (x133|(x134<=(x135&x136)));

    if (t33 != 960056557U) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint64_t x137 = 56LLU;
	uint32_t x138 = 162491U;
	int8_t x139 = INT8_MIN;
	int8_t x140 = -1;
	volatile uint64_t t34 = 5475575603LLU;

    t34 = (x137|(x138<=(x139&x140)));

    if (t34 != 57LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = 156965391167693504LLU;
	uint32_t x142 = 13486199U;
	int8_t x143 = -1;
	uint32_t x144 = 289U;
	uint64_t t35 = 27LLU;

    t35 = (x141|(x142<=(x143&x144)));

    if (t35 != 156965391167693504LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 22581U;
	int64_t x147 = 444LL;
	static volatile int16_t x148 = INT16_MIN;
	static uint32_t t36 = 81661U;

    t36 = (x145|(x146<=(x147&x148)));

    if (t36 != 22581U) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MAX;
	int8_t x150 = 27;
	int64_t x152 = 3279123443814954388LL;
	int32_t t37 = INT32_MAX;

    t37 = (x149|(x150<=(x151&x152)));

    if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x154 = -2357333;
	int16_t x155 = -69;
	static uint16_t x156 = 201U;
	volatile uint64_t t38 = 5155307LLU;

    t38 = (x153|(x154<=(x155&x156)));

    if (t38 != 6226319LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = INT8_MAX;
	int64_t x158 = -1LL;
	uint32_t x159 = 28450745U;
	int64_t x160 = INT64_MIN;
	int32_t t39 = -516;

    t39 = (x157|(x158<=(x159&x160)));

    if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = 3948468809LL;
	static int16_t x162 = 3;
	int64_t x163 = 8222752LL;

    t40 = (x161|(x162<=(x163&x164)));

    if (t40 != 3948468809LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	int32_t x167 = -1;
	int32_t x168 = INT32_MIN;
	static volatile int64_t t41 = INT64_MIN;

    t41 = (x165|(x166<=(x167&x168)));

    if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x169 = 4;
	volatile uint16_t x170 = 52U;
	uint64_t x171 = 144325806126283117LLU;
	int32_t x172 = -475046793;
	volatile int32_t t42 = -31;

    t42 = (x169|(x170<=(x171&x172)));

    if (t42 != 5) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint8_t x173 = 38U;
	static int8_t x175 = INT8_MAX;
	uint64_t x176 = 5688160961545LLU;
	int32_t t43 = 0;

    t43 = (x173|(x174<=(x175&x176)));

    if (t43 != 38) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 3U;
	int32_t x179 = -185843064;
	volatile int16_t x180 = 2093;
	int32_t t44 = 176;

    t44 = (x177|(x178<=(x179&x180)));

    if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = INT8_MIN;
	int32_t x182 = 62539;
	int64_t x183 = INT64_MIN;
	volatile int16_t x184 = -13704;

    t45 = (x181|(x182<=(x183&x184)));

    if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = UINT32_MAX;
	static int8_t x186 = -1;
	static uint8_t x187 = UINT8_MAX;
	int16_t x188 = -8228;
	static uint32_t t46 = UINT32_MAX;

    t46 = (x185|(x186<=(x187&x188)));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x189 = INT8_MAX;
	uint16_t x191 = 30312U;
	uint32_t x192 = 18505U;

    t47 = (x189|(x190<=(x191&x192)));

    if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x193 = INT16_MIN;
	static int64_t x196 = -2739166883539182416LL;
	volatile int32_t t48 = -18378785;

    t48 = (x193|(x194<=(x195&x196)));

    if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	static int64_t x198 = -1LL;
	volatile int32_t t49 = -3827648;

    t49 = (x197|(x198<=(x199&x200)));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x202 = UINT64_MAX;
	int32_t x203 = INT32_MIN;
	static volatile uint8_t x204 = 12U;

    t50 = (x201|(x202<=(x203&x204)));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MAX;
	uint64_t x206 = UINT64_MAX;
	volatile int16_t x207 = -22;
	volatile uint64_t x208 = UINT64_MAX;
	volatile int64_t t51 = INT64_MAX;

    t51 = (x205|(x206<=(x207&x208)));

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x209 = -1;
	int32_t x210 = INT32_MIN;
	int64_t x211 = -1LL;
	uint16_t x212 = 25773U;
	volatile int32_t t52 = -557;

    t52 = (x209|(x210<=(x211&x212)));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = 150;
	int32_t x214 = INT32_MIN;
	int32_t x215 = 1197614;
	static int8_t x216 = INT8_MAX;
	int32_t t53 = 13;

    t53 = (x213|(x214<=(x215&x216)));

    if (t53 != 151) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x217 = UINT64_MAX;
	static uint8_t x218 = 14U;
	volatile int32_t x219 = INT32_MAX;
	static uint32_t x220 = UINT32_MAX;
	uint64_t t54 = UINT64_MAX;

    t54 = (x217|(x218<=(x219&x220)));

    if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 5U;
	static uint8_t x222 = 0U;
	volatile int32_t t55 = -263438965;

    t55 = (x221|(x222<=(x223&x224)));

    if (t55 != 5) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x227 = INT32_MAX;
	volatile int32_t t56 = 1;

    t56 = (x225|(x226<=(x227&x228)));

    if (t56 != -7) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = UINT16_MAX;
	static int64_t x230 = 15937006080LL;
	int64_t x231 = INT64_MAX;
	uint32_t x232 = 2405U;
	int32_t t57 = -2459203;

    t57 = (x229|(x230<=(x231&x232)));

    if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x233 = INT32_MAX;
	int8_t x234 = INT8_MAX;
	static uint16_t x235 = 34U;
	int8_t x236 = INT8_MAX;

    t58 = (x233|(x234<=(x235&x236)));

    if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x237 = 7014U;
	int8_t x238 = INT8_MIN;
	static int8_t x239 = -1;

    t59 = (x237|(x238<=(x239&x240)));

    if (t59 != 7014U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x242 = INT64_MIN;
	int32_t x243 = -1;
	volatile int32_t t60 = 5;

    t60 = (x241|(x242<=(x243&x244)));

    if (t60 != 5) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MAX;
	int32_t x246 = INT32_MAX;
	int8_t x247 = INT8_MAX;
	int16_t x248 = -382;
	int32_t t61 = INT32_MAX;

    t61 = (x245|(x246<=(x247&x248)));

    if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x250 = 283U;
	uint8_t x251 = 0U;
	uint32_t x252 = 402814731U;
	volatile int32_t t62 = -1680;

    t62 = (x249|(x250<=(x251&x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x253 = -1;
	uint8_t x254 = 7U;
	int8_t x256 = INT8_MIN;
	int32_t t63 = -27;

    t63 = (x253|(x254<=(x255&x256)));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MIN;
	uint16_t x258 = 80U;
	int32_t t64 = -256687214;

    t64 = (x257|(x258<=(x259&x260)));

    if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t t65 = 207997813;

    t65 = (x261|(x262<=(x263&x264)));

    if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = INT64_MIN;
	int8_t x266 = INT8_MIN;
	int64_t x267 = INT64_MAX;
	static volatile int64_t t66 = -916477LL;

    t66 = (x265|(x266<=(x267&x268)));

    if (t66 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MIN;
	volatile int16_t x270 = INT16_MIN;
	uint8_t x271 = 3U;
	int64_t t67 = -1LL;

    t67 = (x269|(x270<=(x271&x272)));

    if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = 122U;
	int16_t x274 = -1002;
	int16_t x276 = INT16_MIN;

    t68 = (x273|(x274<=(x275&x276)));

    if (t68 != 122) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x278 = -1;
	static volatile uint32_t x279 = UINT32_MAX;
	int16_t x280 = -10536;
	volatile int64_t t69 = INT64_MIN;

    t69 = (x277|(x278<=(x279&x280)));

    if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MAX;
	uint32_t x282 = 5U;
	uint8_t x283 = 31U;
	int64_t x284 = -1LL;
	int32_t t70 = -1984661;

    t70 = (x281|(x282<=(x283&x284)));

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MAX;
	int32_t x286 = -393;
	uint32_t x287 = 47201957U;
	static int16_t x288 = -1;

    t71 = (x285|(x286<=(x287&x288)));

    if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x290 = 6;
	int16_t x291 = -1;
	static int8_t x292 = INT8_MAX;
	static volatile int32_t t72 = -3588;

    t72 = (x289|(x290<=(x291&x292)));

    if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MIN;
	int16_t x295 = -1;
	uint16_t x296 = 1869U;
	int32_t t73 = -202085;

    t73 = (x293|(x294<=(x295&x296)));

    if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x297 = INT64_MIN;
	int64_t x298 = -1LL;
	static uint64_t x299 = 1082556727378LLU;
	static volatile int32_t x300 = INT32_MAX;

    t74 = (x297|(x298<=(x299&x300)));

    if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x301 = UINT16_MAX;
	int64_t x302 = INT64_MIN;
	volatile uint32_t x303 = 9534U;
	volatile uint16_t x304 = 25U;
	volatile int32_t t75 = 3253624;

    t75 = (x301|(x302<=(x303&x304)));

    if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = UINT64_MAX;
	uint16_t x306 = 26655U;
	int32_t x308 = INT32_MAX;
	uint64_t t76 = UINT64_MAX;

    t76 = (x305|(x306<=(x307&x308)));

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = 85U;
	uint64_t x310 = 84LLU;
	int32_t x311 = -1;
	int32_t x312 = 396;
	int32_t t77 = 375823937;

    t77 = (x309|(x310<=(x311&x312)));

    if (t77 != 85) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x313 = -7173;
	static volatile int8_t x315 = -1;
	static uint32_t x316 = 57U;

    t78 = (x313|(x314<=(x315&x316)));

    if (t78 != -7173) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = 3LL;
	volatile int8_t x318 = INT8_MIN;
	static int64_t x319 = -1LL;
	int8_t x320 = 0;

    t79 = (x317|(x318<=(x319&x320)));

    if (t79 != 3LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = -1;
	static volatile uint64_t x322 = 120863LLU;
	volatile int16_t x323 = INT16_MIN;
	int32_t t80 = -9;

    t80 = (x321|(x322<=(x323&x324)));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MAX;
	int32_t x326 = 14789724;
	int32_t x328 = INT32_MAX;

    t81 = (x325|(x326<=(x327&x328)));

    if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = -1;
	static uint8_t x330 = 5U;
	uint16_t x331 = UINT16_MAX;
	volatile uint8_t x332 = UINT8_MAX;

    t82 = (x329|(x330<=(x331&x332)));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -10;
	uint8_t x334 = 18U;
	static volatile int8_t x336 = 0;
	int32_t t83 = 0;

    t83 = (x333|(x334<=(x335&x336)));

    if (t83 != -10) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = 8408U;
	volatile int8_t x338 = -1;
	int8_t x339 = -1;
	static uint16_t x340 = UINT16_MAX;
	volatile uint32_t t84 = 97U;

    t84 = (x337|(x338<=(x339&x340)));

    if (t84 != 8409U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MIN;
	int8_t x344 = 58;
	int32_t t85 = 126;

    t85 = (x341|(x342<=(x343&x344)));

    if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x346 = 5488;
	int64_t x348 = 1LL;

    t86 = (x345|(x346<=(x347&x348)));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = 0;
	uint64_t x350 = UINT64_MAX;
	uint64_t x351 = UINT64_MAX;
	static volatile int32_t t87 = -29619;

    t87 = (x349|(x350<=(x351&x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MAX;
	static uint8_t x354 = 22U;
	static int64_t x356 = INT64_MIN;
	static int64_t t88 = INT64_MAX;

    t88 = (x353|(x354<=(x355&x356)));

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x357 = 2U;
	int16_t x358 = -1;
	static int16_t x359 = INT16_MIN;
	volatile int32_t x360 = INT32_MIN;
	volatile int32_t t89 = 0;

    t89 = (x357|(x358<=(x359&x360)));

    if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x361 = INT8_MIN;
	uint64_t x362 = UINT64_MAX;
	volatile int32_t x363 = 31388772;
	static int64_t x364 = INT64_MAX;
	volatile int32_t t90 = 7204;

    t90 = (x361|(x362<=(x363&x364)));

    if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x365 = INT8_MAX;
	int8_t x366 = INT8_MIN;
	volatile int16_t x367 = -2;
	int16_t x368 = 136;
	volatile int32_t t91 = -1;

    t91 = (x365|(x366<=(x367&x368)));

    if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = -1;
	int16_t x370 = INT16_MIN;
	int64_t x371 = INT64_MIN;
	static volatile int16_t x372 = 7665;

    t92 = (x369|(x370<=(x371&x372)));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint16_t x373 = 115U;
	uint32_t x374 = UINT32_MAX;
	int8_t x375 = INT8_MAX;
	uint64_t x376 = 382549LLU;
	static volatile int32_t t93 = -129841661;

    t93 = (x373|(x374<=(x375&x376)));

    if (t93 != 115) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x378 = 2;
	int32_t t94 = -602;

    t94 = (x377|(x378<=(x379&x380)));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x382 = UINT16_MAX;
	static int64_t x383 = -1LL;
	int16_t x384 = INT16_MIN;

    t95 = (x381|(x382<=(x383&x384)));

    if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -342;
	int8_t x386 = INT8_MIN;
	int8_t x387 = 28;
	int8_t x388 = INT8_MAX;

    t96 = (x385|(x386<=(x387&x388)));

    if (t96 != -341) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MAX;
	volatile uint64_t x390 = 4LLU;
	int64_t x391 = -1LL;
	int32_t t97 = -105;

    t97 = (x389|(x390<=(x391&x392)));

    if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x393 = INT64_MIN;
	static int8_t x395 = -1;
	uint16_t x396 = 244U;
	int64_t t98 = 66LL;

    t98 = (x393|(x394<=(x395&x396)));

    if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x398 = 5630755;
	uint64_t x399 = 1134345700802LLU;
	int32_t x400 = -1;

    t99 = (x397|(x398<=(x399&x400)));

    if (t99 != UINT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = 53U;
	uint64_t x402 = 131554053885509LLU;
	int32_t x403 = INT32_MAX;
	uint8_t x404 = 14U;
	int32_t t100 = -355305;

    t100 = (x401|(x402<=(x403&x404)));

    if (t100 != 53) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MIN;
	uint32_t x408 = 23653585U;
	int32_t t101 = -3549;

    t101 = (x405|(x406<=(x407&x408)));

    if (t101 != -32768) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x410 = 1086U;
	static int16_t x411 = -93;
	uint32_t x412 = 19822958U;
	int32_t t102 = 1996199;

    t102 = (x409|(x410<=(x411&x412)));

    if (t102 != -32767) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x413 = 6688848904562101LLU;
	static uint32_t x415 = UINT32_MAX;
	int32_t x416 = -1;
	volatile uint64_t t103 = 649421LLU;

    t103 = (x413|(x414<=(x415&x416)));

    if (t103 != 6688848904562101LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 15710062U;
	uint32_t x419 = 16496130U;
	uint16_t x420 = UINT16_MAX;
	uint32_t t104 = 457U;

    t104 = (x417|(x418<=(x419&x420)));

    if (t104 != 15710062U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x424 = 8U;
	volatile int32_t t105 = 40465711;

    t105 = (x421|(x422<=(x423&x424)));

    if (t105 != 3) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x426 = -1;
	volatile int16_t x427 = -1;
	volatile int32_t x428 = INT32_MAX;
	int32_t t106 = 217155;

    t106 = (x425|(x426<=(x427&x428)));

    if (t106 != 127) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x431 = INT8_MAX;
	static uint64_t x432 = 3629457114200LLU;

    t107 = (x429|(x430<=(x431&x432)));

    if (t107 != 255) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 11195179554360521LLU;
	volatile int8_t x434 = INT8_MIN;
	int64_t x435 = INT64_MIN;
	int8_t x436 = INT8_MIN;
	volatile uint64_t t108 = 787561LLU;

    t108 = (x433|(x434<=(x435&x436)));

    if (t108 != 11195179554360521LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x437 = -1;
	int16_t x438 = INT16_MIN;
	volatile uint16_t x439 = UINT16_MAX;
	uint16_t x440 = UINT16_MAX;
	volatile int32_t t109 = 14350;

    t109 = (x437|(x438<=(x439&x440)));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x441 = 188U;
	int16_t x442 = -1;
	uint16_t x443 = 31147U;
	int32_t t110 = 63;

    t110 = (x441|(x442<=(x443&x444)));

    if (t110 != 189) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x447 = -42;
	volatile uint8_t x448 = 44U;

    t111 = (x445|(x446<=(x447&x448)));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = UINT64_MAX;
	static int32_t x450 = -728;
	volatile int16_t x452 = -15;

    t112 = (x449|(x450<=(x451&x452)));

    if (t112 != UINT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 25U;
	uint16_t x454 = 251U;
	int16_t x455 = -1;

    t113 = (x453|(x454<=(x455&x456)));

    if (t113 != 25) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = UINT16_MAX;
	static int16_t x459 = -19;
	static volatile int16_t x460 = -15;
	static volatile int32_t t114 = 11;

    t114 = (x457|(x458<=(x459&x460)));

    if (t114 != 65535) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = INT64_MIN;
	int32_t x462 = 72142;
	volatile uint16_t x463 = 36U;
	volatile int64_t t115 = INT64_MIN;

    t115 = (x461|(x462<=(x463&x464)));

    if (t115 != INT64_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x466 = 0;
	static int64_t x467 = 1637028738LL;
	int32_t t116 = -63754;

    t116 = (x465|(x466<=(x467&x468)));

    if (t116 != 815) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	volatile int16_t x471 = INT16_MIN;
	int16_t x472 = INT16_MAX;

    t117 = (x469|(x470<=(x471&x472)));

    if (t117 != INT32_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint16_t x473 = UINT16_MAX;
	uint8_t x474 = UINT8_MAX;
	static int8_t x475 = INT8_MIN;
	uint8_t x476 = 10U;

    t118 = (x473|(x474<=(x475&x476)));

    if (t118 != 65535) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = 1;
	uint8_t x479 = 71U;
	volatile int32_t x480 = -17;
	int32_t t119 = -195259;

    t119 = (x477|(x478<=(x479&x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -60;
	uint32_t x484 = 1017U;
	volatile int32_t t120 = 16382111;

    t120 = (x481|(x482<=(x483&x484)));

    if (t120 != -59) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x485 = 38U;
	uint32_t x486 = 195834U;
	volatile int16_t x487 = INT16_MIN;
	int32_t t121 = 3857969;

    t121 = (x485|(x486<=(x487&x488)));

    if (t121 != 38) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = 1U;
	volatile int32_t x490 = INT32_MIN;
	int32_t x491 = INT32_MIN;
	uint16_t x492 = UINT16_MAX;
	int32_t t122 = -141653;

    t122 = (x489|(x490<=(x491&x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x494 = 68U;
	static int64_t x495 = INT64_MAX;
	int64_t x496 = INT64_MIN;
	volatile int32_t t123 = -1;

    t123 = (x493|(x494<=(x495&x496)));

    if (t123 != 127) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint16_t x497 = 5U;
	static int8_t x498 = INT8_MAX;
	volatile uint64_t x499 = 1096421856535132278LLU;
	static volatile int8_t x500 = 1;

    t124 = (x497|(x498<=(x499&x500)));

    if (t124 != 5) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MAX;
	int64_t x503 = -1LL;
	volatile int16_t x504 = INT16_MIN;
	volatile int64_t t125 = INT64_MAX;

    t125 = (x501|(x502<=(x503&x504)));

    if (t125 != INT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = INT16_MIN;
	uint32_t x506 = 4440U;
	static int16_t x507 = -1;
	int8_t x508 = -1;
	int32_t t126 = 18;

    t126 = (x505|(x506<=(x507&x508)));

    if (t126 != -32767) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MIN;
	uint64_t x510 = 0LLU;
	static volatile int8_t x511 = -1;

    t127 = (x509|(x510<=(x511&x512)));

    if (t127 != -32767) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x513 = -1;
	int32_t x514 = INT32_MIN;
	int16_t x515 = -1;
	int64_t x516 = INT64_MIN;
	int32_t t128 = 3554;

    t128 = (x513|(x514<=(x515&x516)));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MAX;
	uint32_t x518 = 1783U;
	int8_t x519 = INT8_MAX;
	volatile uint32_t x520 = UINT32_MAX;
	volatile int32_t t129 = -18;

    t129 = (x517|(x518<=(x519&x520)));

    if (t129 != 32767) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x522 = 0U;
	static int16_t x523 = -1;
	int32_t x524 = INT32_MIN;

    t130 = (x521|(x522<=(x523&x524)));

    if (t130 != 127) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x525 = 3U;
	static uint16_t x527 = 4U;
	static uint16_t x528 = 11072U;

    t131 = (x525|(x526<=(x527&x528)));

    if (t131 != 3U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x529 = INT8_MIN;
	static uint8_t x530 = 61U;
	static int32_t t132 = -54714;

    t132 = (x529|(x530<=(x531&x532)));

    if (t132 != -127) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x533 = UINT32_MAX;
	int64_t x535 = INT64_MAX;
	uint16_t x536 = 346U;
	uint32_t t133 = UINT32_MAX;

    t133 = (x533|(x534<=(x535&x536)));

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	int16_t x538 = INT16_MIN;
	uint32_t x539 = 432224U;
	volatile int64_t x540 = -1LL;
	int32_t t134 = 13627;

    t134 = (x537|(x538<=(x539&x540)));

    if (t134 != -32767) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = 39222LLU;
	uint64_t x542 = 60380204303084709LLU;
	static int32_t x543 = INT32_MIN;
	int32_t x544 = INT32_MAX;
	volatile uint64_t t135 = 30053237869784LLU;

    t135 = (x541|(x542<=(x543&x544)));

    if (t135 != 39222LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -10996;
	int16_t x546 = INT16_MAX;
	volatile int32_t t136 = 29;

    t136 = (x545|(x546<=(x547&x548)));

    if (t136 != -10995) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	int8_t x550 = INT8_MAX;
	int32_t x551 = INT32_MIN;

    t137 = (x549|(x550<=(x551&x552)));

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = 2;
	uint64_t x554 = 3214989LLU;
	int16_t x555 = INT16_MIN;
	volatile int32_t t138 = 0;

    t138 = (x553|(x554<=(x555&x556)));

    if (t138 != 3) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 6133982LLU;
	int32_t x559 = -1;
	int16_t x560 = INT16_MIN;
	volatile uint64_t t139 = 4516890034726152LLU;

    t139 = (x557|(x558<=(x559&x560)));

    if (t139 != 6133983LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x562 = UINT32_MAX;
	int64_t x563 = INT64_MIN;
	volatile int8_t x564 = 12;
	uint64_t t140 = 88431327LLU;

    t140 = (x561|(x562<=(x563&x564)));

    if (t140 != 487782181916LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = 6531;
	uint16_t x567 = 6844U;
	uint16_t x568 = UINT16_MAX;
	volatile int32_t t141 = 915;

    t141 = (x565|(x566<=(x567&x568)));

    if (t141 != 6531) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = INT16_MIN;
	static volatile int8_t x572 = INT8_MIN;

    t142 = (x569|(x570<=(x571&x572)));

    if (t142 != -32767) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -1;
	uint64_t x574 = 271973226999276121LLU;
	int64_t x576 = -56395706471LL;
	int32_t t143 = 121382;

    t143 = (x573|(x574<=(x575&x576)));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x577 = 49U;
	uint8_t x578 = 0U;
	static uint8_t x579 = 2U;
	static int32_t x580 = INT32_MAX;

    t144 = (x577|(x578<=(x579&x580)));

    if (t144 != 49) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x581 = 83U;
	uint16_t x583 = UINT16_MAX;
	uint16_t x584 = UINT16_MAX;
	static volatile int32_t t145 = 213589;

    t145 = (x581|(x582<=(x583&x584)));

    if (t145 != 83) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x586 = UINT16_MAX;
	static int32_t x587 = INT32_MAX;
	uint8_t x588 = UINT8_MAX;

    t146 = (x585|(x586<=(x587&x588)));

    if (t146 != 730197421LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x590 = INT64_MAX;
	volatile int16_t x591 = -17;
	int32_t x592 = INT32_MIN;
	volatile int32_t t147 = -5;

    t147 = (x589|(x590<=(x591&x592)));

    if (t147 != -128) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = 30U;
	uint16_t x594 = 5003U;
	int64_t x595 = INT64_MIN;

    t148 = (x593|(x594<=(x595&x596)));

    if (t148 != 30) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x597 = INT64_MIN;
	volatile int16_t x598 = -1;
	volatile int64_t x599 = -15596999LL;
	int16_t x600 = -278;
	int64_t t149 = INT64_MIN;

    t149 = (x597|(x598<=(x599&x600)));

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x602 = UINT32_MAX;
	int8_t x603 = 1;
	int64_t t150 = -201700322376LL;

    t150 = (x601|(x602<=(x603&x604)));

    if (t150 != 351986LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MIN;
	int16_t x606 = INT16_MIN;
	volatile uint8_t x607 = 106U;
	volatile int64_t t151 = 38246182826LL;

    t151 = (x605|(x606<=(x607&x608)));

    if (t151 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint32_t x610 = 17283U;
	int8_t x611 = INT8_MAX;
	volatile uint64_t t152 = 432052139LLU;

    t152 = (x609|(x610<=(x611&x612)));

    if (t152 != 738035LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = 2837U;
	static volatile uint32_t x614 = 116U;
	static int16_t x615 = INT16_MIN;

    t153 = (x613|(x614<=(x615&x616)));

    if (t153 != 2837) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = 714516U;
	int8_t x619 = INT8_MIN;
	uint8_t x620 = UINT8_MAX;
	static volatile uint32_t t154 = 678084288U;

    t154 = (x617|(x618<=(x619&x620)));

    if (t154 != 714516U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x621 = 96;
	static int8_t x622 = 3;
	static volatile int16_t x623 = -17;

    t155 = (x621|(x622<=(x623&x624)));

    if (t155 != 97) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MIN;
	uint64_t x626 = 255LLU;
	static int8_t x627 = INT8_MIN;
	int8_t x628 = INT8_MIN;
	volatile int32_t t156 = 17313988;

    t156 = (x625|(x626<=(x627&x628)));

    if (t156 != -2147483647) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -1;
	int32_t x631 = INT32_MIN;
	uint8_t x632 = 0U;
	volatile int32_t t157 = -2429;

    t157 = (x629|(x630<=(x631&x632)));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x633 = INT32_MIN;
	static int16_t x635 = -1;
	volatile uint32_t x636 = 347612322U;

    t158 = (x633|(x634<=(x635&x636)));

    if (t158 != -2147483647) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x638 = -151;
	int8_t x640 = INT8_MIN;
	static int32_t t159 = 84111;

    t159 = (x637|(x638<=(x639&x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x641 = -6;
	static volatile int64_t x642 = -70308495999LL;
	static volatile uint16_t x643 = 5U;
	volatile uint32_t x644 = UINT32_MAX;
	volatile int32_t t160 = -112289;

    t160 = (x641|(x642<=(x643&x644)));

    if (t160 != -5) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x645 = INT32_MIN;
	int8_t x646 = INT8_MAX;
	int8_t x648 = 0;
	volatile int32_t t161 = INT32_MIN;

    t161 = (x645|(x646<=(x647&x648)));

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = 3733LL;
	uint32_t x650 = 47671305U;
	static int16_t x651 = 1;
	static volatile int16_t x652 = INT16_MAX;
	volatile int64_t t162 = -266541969239760LL;

    t162 = (x649|(x650<=(x651&x652)));

    if (t162 != 3733LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = -11;
	int64_t x654 = -1LL;
	static uint8_t x655 = 10U;
	static uint8_t x656 = UINT8_MAX;
	int32_t t163 = -1;

    t163 = (x653|(x654<=(x655&x656)));

    if (t163 != -11) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MAX;
	static int64_t x660 = INT64_MIN;
	volatile int32_t t164 = INT32_MAX;

    t164 = (x657|(x658<=(x659&x660)));

    if (t164 != INT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int64_t x661 = -1LL;
	int8_t x662 = -1;
	static uint16_t x664 = UINT16_MAX;
	static volatile int64_t t165 = 78LL;

    t165 = (x661|(x662<=(x663&x664)));

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x665 = INT32_MAX;
	static volatile uint8_t x666 = 60U;
	static int8_t x667 = -8;
	volatile int8_t x668 = 2;
	static int32_t t166 = INT32_MAX;

    t166 = (x665|(x666<=(x667&x668)));

    if (t166 != INT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = 83772845LLU;
	int32_t x670 = -1;
	int8_t x672 = INT8_MIN;
	uint64_t t167 = 12380LLU;

    t167 = (x669|(x670<=(x671&x672)));

    if (t167 != 83772845LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x673 = INT8_MIN;
	static uint32_t x674 = 961146673U;
	int32_t x675 = -115964317;
	int8_t x676 = INT8_MIN;
	int32_t t168 = -2;

    t168 = (x673|(x674<=(x675&x676)));

    if (t168 != -127) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x677 = INT8_MAX;
	int16_t x678 = INT16_MIN;
	int16_t x679 = INT16_MIN;
	volatile int8_t x680 = INT8_MAX;

    t169 = (x677|(x678<=(x679&x680)));

    if (t169 != 127) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x681 = 1;
	volatile uint16_t x682 = UINT16_MAX;
	int8_t x684 = INT8_MIN;
	static volatile int32_t t170 = 243;

    t170 = (x681|(x682<=(x683&x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x685 = 1U;
	int16_t x687 = INT16_MIN;
	int8_t x688 = 0;
	volatile int32_t t171 = -2;

    t171 = (x685|(x686<=(x687&x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x689 = UINT64_MAX;
	int32_t x690 = -1;
	uint16_t x691 = UINT16_MAX;
	uint32_t x692 = UINT32_MAX;
	uint64_t t172 = UINT64_MAX;

    t172 = (x689|(x690<=(x691&x692)));

    if (t172 != UINT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	static int16_t x694 = INT16_MIN;
	uint64_t x696 = UINT64_MAX;
	int64_t t173 = -1LL;

    t173 = (x693|(x694<=(x695&x696)));

    if (t173 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 51U;
	volatile uint16_t x700 = 2U;
	static volatile uint32_t t174 = 17214U;

    t174 = (x697|(x698<=(x699&x700)));

    if (t174 != 51U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x701 = 40U;
	volatile int64_t x702 = INT64_MIN;
	volatile int8_t x703 = INT8_MAX;
	static volatile uint32_t x704 = 23U;
	volatile int32_t t175 = 2626355;

    t175 = (x701|(x702<=(x703&x704)));

    if (t175 != 41) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int64_t x705 = 39109050615885538LL;
	static volatile int8_t x706 = -1;
	uint8_t x707 = 13U;
	uint64_t x708 = 84421441630LLU;
	volatile int64_t t176 = 14739343608476LL;

    t176 = (x705|(x706<=(x707&x708)));

    if (t176 != 39109050615885538LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x709 = UINT8_MAX;
	static int8_t x710 = INT8_MAX;
	int8_t x711 = INT8_MAX;
	static int64_t x712 = -1LL;
	static volatile int32_t t177 = -575;

    t177 = (x709|(x710<=(x711&x712)));

    if (t177 != 255) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x713 = UINT32_MAX;
	volatile uint64_t x714 = UINT64_MAX;
	volatile uint16_t x715 = 11360U;
	volatile int64_t x716 = -2952681LL;

    t178 = (x713|(x714<=(x715&x716)));

    if (t178 != UINT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MAX;
	static uint64_t x718 = UINT64_MAX;
	volatile int32_t t179 = -1574365;

    t179 = (x717|(x718<=(x719&x720)));

    if (t179 != 32767) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x721 = -3;
	volatile uint32_t x722 = 10155207U;
	int8_t x723 = 2;
	int64_t x724 = -284539545LL;

    t180 = (x721|(x722<=(x723&x724)));

    if (t180 != -3) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x725 = 24U;
	volatile uint64_t x726 = 93471LLU;
	int16_t x727 = INT16_MAX;
	volatile int8_t x728 = 8;

    t181 = (x725|(x726<=(x727&x728)));

    if (t181 != 24) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x729 = INT8_MIN;
	uint64_t x730 = UINT64_MAX;
	uint16_t x731 = UINT16_MAX;
	int16_t x732 = INT16_MIN;
	volatile int32_t t182 = -7985;

    t182 = (x729|(x730<=(x731&x732)));

    if (t182 != -128) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x733 = INT16_MAX;
	int64_t x735 = INT64_MIN;
	int32_t t183 = -26372;

    t183 = (x733|(x734<=(x735&x736)));

    if (t183 != 32767) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = -3344549305LL;
	int32_t x738 = -1;
	volatile int32_t x739 = INT32_MIN;
	uint16_t x740 = 1352U;
	static int64_t t184 = -3731169751692901243LL;

    t184 = (x737|(x738<=(x739&x740)));

    if (t184 != -3344549305LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -179308;
	uint32_t x742 = UINT32_MAX;
	int32_t x743 = -1;
	static int8_t x744 = -27;
	static int32_t t185 = 1;

    t185 = (x741|(x742<=(x743&x744)));

    if (t185 != -179308) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint16_t x747 = 1U;
	int8_t x748 = INT8_MIN;
	uint64_t t186 = UINT64_MAX;

    t186 = (x745|(x746<=(x747&x748)));

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -1;
	static volatile uint16_t x750 = UINT16_MAX;
	uint16_t x751 = UINT16_MAX;
	uint64_t x752 = UINT64_MAX;
	int32_t t187 = 34883528;

    t187 = (x749|(x750<=(x751&x752)));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x754 = 368LLU;
	uint16_t x755 = 6953U;
	volatile int64_t x756 = 591LL;
	static int32_t t188 = 1734;

    t188 = (x753|(x754<=(x755&x756)));

    if (t188 != 255) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = -61;
	volatile uint8_t x758 = 95U;
	volatile int8_t x759 = INT8_MIN;
	int32_t x760 = -1;
	int32_t t189 = 61;

    t189 = (x757|(x758<=(x759&x760)));

    if (t189 != -61) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x763 = INT8_MIN;
	volatile int32_t x764 = INT32_MIN;
	volatile int32_t t190 = 1524;

    t190 = (x761|(x762<=(x763&x764)));

    if (t190 != -32767) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x765 = INT64_MAX;
	static volatile int32_t x766 = INT32_MIN;
	static int32_t x767 = INT32_MIN;
	volatile uint32_t x768 = UINT32_MAX;
	int64_t t191 = INT64_MAX;

    t191 = (x765|(x766<=(x767&x768)));

    if (t191 != INT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x770 = 3U;

    t192 = (x769|(x770<=(x771&x772)));

    if (t192 != 14) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x773 = 39766U;
	int32_t x774 = INT32_MIN;
	static uint32_t t193 = 12644U;

    t193 = (x773|(x774<=(x775&x776)));

    if (t193 != 39767U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x778 = INT64_MIN;
	volatile int16_t x779 = -12244;

    t194 = (x777|(x778<=(x779&x780)));

    if (t194 != 255) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x781 = 1U;
	int64_t x782 = 2372865442LL;
	static volatile int8_t x783 = -1;
	int32_t t195 = 2613170;

    t195 = (x781|(x782<=(x783&x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	static uint64_t x786 = UINT64_MAX;
	volatile uint32_t x788 = UINT32_MAX;
	int32_t t196 = INT32_MIN;

    t196 = (x785|(x786<=(x787&x788)));

    if (t196 != INT32_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	volatile int32_t x791 = INT32_MIN;
	uint32_t x792 = 113U;
	volatile int32_t t197 = -106;

    t197 = (x789|(x790<=(x791&x792)));

    if (t197 != -127) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x793 = INT16_MIN;
	int16_t x794 = INT16_MIN;
	int8_t x796 = -1;
	int32_t t198 = -14;

    t198 = (x793|(x794<=(x795&x796)));

    if (t198 != -32767) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x799 = 54U;
	volatile int64_t t199 = INT64_MAX;

    t199 = (x797|(x798<=(x799&x800)));

    if (t199 != INT64_MAX) { NG(); } else { ; }
	
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

