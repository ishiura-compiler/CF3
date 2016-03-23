
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

int8_t x4 = 1;
volatile int32_t t2 = -1;
static volatile int32_t t3 = -6;
int8_t x17 = -1;
static volatile int32_t t4 = -2;
int32_t x28 = INT32_MIN;
uint64_t x30 = 403LLU;
volatile int8_t x31 = INT8_MIN;
volatile int16_t x42 = INT16_MAX;
static int32_t t10 = 644;
static int8_t x48 = INT8_MAX;
int32_t x51 = -67;
int64_t x55 = 2LL;
uint32_t t13 = 0U;
volatile uint64_t x58 = UINT64_MAX;
int64_t x59 = INT64_MAX;
int32_t x60 = 1019308;
volatile int32_t t15 = 19117;
int32_t x68 = -1;
volatile int32_t x73 = INT32_MAX;
volatile int32_t x75 = INT32_MAX;
int64_t x77 = INT64_MIN;
static int64_t t19 = INT64_MIN;
uint32_t t20 = 3U;
volatile uint32_t x87 = 5184U;
volatile int32_t t21 = 46899733;
int64_t x90 = -1LL;
uint32_t t24 = 264834030U;
int16_t x101 = INT16_MAX;
int32_t t26 = -265291952;
int8_t x118 = INT8_MAX;
int64_t x119 = INT64_MAX;
int16_t x121 = INT16_MIN;
int32_t x129 = INT32_MIN;
int32_t t32 = -3;
int16_t x133 = INT16_MIN;
uint32_t x142 = 3219255U;
int16_t x143 = 3;
volatile int64_t x153 = -1LL;
static int16_t x154 = -1;
static volatile uint16_t x158 = UINT16_MAX;
volatile int32_t t39 = 1;
uint64_t x162 = UINT64_MAX;
int32_t x166 = INT32_MAX;
uint8_t x170 = 0U;
uint16_t x171 = 160U;
int16_t x175 = INT16_MIN;
int64_t x177 = INT64_MIN;
int64_t t45 = -1032141LL;
static int64_t x190 = INT64_MIN;
uint64_t x191 = 33514834298583LLU;
static int64_t t48 = 4948018002LL;
int32_t x198 = 0;
volatile int16_t x200 = 6725;
uint64_t x203 = 1212630217LLU;
volatile int64_t t51 = -2LL;
int64_t x209 = -2385LL;
uint8_t x218 = UINT8_MAX;
int8_t x221 = -1;
int16_t x224 = 1;
volatile int32_t t55 = -36555;
int8_t x228 = -30;
static int32_t x231 = 903;
volatile int8_t x234 = INT8_MAX;
int32_t t58 = -552;
volatile int32_t t60 = 525347;
int8_t x245 = INT8_MIN;
int64_t x254 = INT64_MAX;
static uint8_t x258 = UINT8_MAX;
static volatile int8_t x262 = 1;
int16_t x263 = INT16_MAX;
volatile int32_t t65 = 0;
static uint32_t x265 = 1504402U;
static uint64_t x266 = 140184687847LLU;
uint64_t t66 = 287081929206875873LLU;
int64_t x269 = 143214LL;
static int16_t x270 = -1;
int16_t x273 = -1;
static int8_t x281 = INT8_MAX;
volatile int32_t t70 = 23;
int16_t x296 = -1;
static volatile uint16_t x299 = UINT16_MAX;
volatile int64_t t75 = 38996793LL;
volatile int64_t t77 = -36606793LL;
static int64_t x313 = 1LL;
uint16_t x330 = 17040U;
static int64_t x332 = -1LL;
volatile uint32_t x335 = 64058U;
volatile int16_t x342 = -1;
static int8_t x350 = 0;
static int64_t t89 = 1477473LL;
uint64_t x372 = 139155LLU;
volatile int64_t t92 = 1208247223102213956LL;
static int16_t x379 = INT16_MIN;
volatile int32_t x384 = 11;
static uint8_t x392 = UINT8_MAX;
static int8_t x398 = INT8_MIN;
int32_t x406 = INT32_MIN;
volatile int8_t x412 = -2;
volatile uint16_t x418 = 2691U;
static int16_t x419 = INT16_MIN;
static volatile int32_t t104 = 2115518;
static int64_t x425 = -27313893LL;
uint16_t x426 = 0U;
uint8_t x428 = 6U;
uint64_t x429 = UINT64_MAX;
volatile uint16_t x431 = 2268U;
volatile int64_t x434 = -1LL;
volatile int32_t x438 = INT32_MIN;
volatile uint32_t x440 = 7949U;
static uint16_t x456 = UINT16_MAX;
volatile int16_t x466 = -1;
uint64_t t116 = 17025536970536LLU;
int64_t x472 = INT64_MIN;
int32_t t117 = INT32_MIN;
volatile uint64_t t118 = 231935445865LLU;
int16_t x479 = INT16_MAX;
int64_t x483 = -534013373LL;
int32_t x492 = 0;
int32_t x493 = INT32_MIN;
int8_t x494 = INT8_MIN;
static uint8_t x495 = 1U;
int32_t x505 = INT32_MIN;
volatile uint32_t x510 = 247327U;
uint64_t x518 = 68404296048LLU;
volatile uint32_t x522 = 1U;
uint32_t x526 = UINT32_MAX;
static int16_t x530 = INT16_MIN;
static uint16_t x533 = UINT16_MAX;
volatile int32_t x540 = INT32_MAX;
uint8_t x544 = 5U;
volatile int32_t t135 = -38589;
volatile int16_t x545 = INT16_MIN;
int32_t x546 = INT32_MIN;
volatile uint16_t x552 = UINT16_MAX;
uint32_t x574 = UINT32_MAX;
static int16_t x579 = 3;
static int32_t t145 = 27719;
volatile uint8_t x588 = UINT8_MAX;
static uint32_t t146 = 11839809U;
int32_t t148 = 1612;
int64_t x601 = -11495LL;
int32_t x607 = -1;
int64_t x612 = 3566886771736890177LL;
static int64_t x613 = INT64_MIN;
int64_t t153 = INT64_MIN;
volatile int16_t x617 = INT16_MIN;
uint16_t x623 = 52U;
int16_t x625 = -6;
static int64_t x634 = INT64_MAX;
int8_t x641 = -1;
volatile int32_t t160 = -358267714;
int16_t x646 = INT16_MIN;
volatile uint16_t x658 = 2653U;
uint64_t x660 = UINT64_MAX;
int64_t x675 = INT64_MIN;
int16_t x682 = 9529;
uint32_t x684 = UINT32_MAX;
uint16_t x689 = UINT16_MAX;
int32_t t172 = -2512402;
int16_t x694 = 1;
uint64_t x696 = 117162086357LLU;
int32_t t177 = -4756583;
int32_t t178 = -1;
int32_t t179 = 45;
int64_t x721 = INT64_MIN;
volatile int16_t x728 = INT16_MIN;
static volatile uint8_t x732 = 3U;
volatile uint32_t t182 = 876U;
uint32_t x736 = 120432660U;
int64_t t183 = INT64_MIN;
static volatile uint32_t x742 = UINT32_MAX;
uint64_t x744 = 40LLU;
volatile uint32_t x745 = 193U;
int64_t x752 = 2970607584LL;
int8_t x758 = INT8_MAX;
int32_t t189 = -61;
volatile uint8_t x764 = 7U;
volatile int32_t x766 = -124;
int64_t x780 = INT64_MAX;
volatile int32_t t194 = 0;
volatile int8_t x787 = INT8_MIN;
int8_t x789 = INT8_MIN;
uint8_t x791 = UINT8_MAX;
int16_t x792 = -42;
uint8_t x794 = 35U;
uint16_t x796 = UINT16_MAX;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	uint16_t x2 = 229U;
	int16_t x3 = 0;
	static int64_t t0 = 6LL;

    t0 = (x1&(x2^(x3<=x4)));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	uint16_t x6 = 4U;
	int32_t x7 = -1;
	int16_t x8 = -1;
	volatile int32_t t1 = -63653047;

    t1 = (x5&(x6^(x7<=x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	static int16_t x10 = INT16_MAX;
	uint64_t x11 = 374529602549LLU;
	volatile int8_t x12 = -1;

    t2 = (x9&(x10^(x11<=x12)));

    if (t2 != 32766) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	static uint8_t x14 = UINT8_MAX;
	uint32_t x15 = 84074U;
	uint32_t x16 = UINT32_MAX;

    t3 = (x13&(x14^(x15<=x16)));

    if (t3 != 254) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x18 = INT32_MAX;
	int32_t x19 = -1;
	static uint8_t x20 = 34U;

    t4 = (x17&(x18^(x19<=x20)));

    if (t4 != 2147483646) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	static int32_t x22 = INT32_MIN;
	int32_t x23 = INT32_MAX;
	static int16_t x24 = 243;
	int32_t t5 = INT32_MIN;

    t5 = (x21&(x22^(x23<=x24)));

    if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = 61374;
	int8_t x26 = INT8_MAX;
	volatile int32_t x27 = INT32_MIN;
	int32_t t6 = -259435605;

    t6 = (x25&(x26^(x27<=x28)));

    if (t6 != 62) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x29 = 700U;
	static int16_t x32 = -1656;
	volatile uint64_t t7 = 421397158118LLU;

    t7 = (x29&(x30^(x31<=x32)));

    if (t7 != 144LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -53LL;
	uint8_t x34 = 0U;
	int8_t x35 = -46;
	int64_t x36 = INT64_MAX;
	volatile int64_t t8 = 532072LL;

    t8 = (x33&(x34^(x35<=x36)));

    if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	int16_t x38 = -2004;
	volatile int16_t x39 = -1;
	static int32_t x40 = INT32_MAX;
	int32_t t9 = 4535362;

    t9 = (x37&(x38^(x39<=x40)));

    if (t9 != -2003) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	int8_t x43 = -8;
	volatile int16_t x44 = INT16_MAX;

    t10 = (x41&(x42^(x43<=x44)));

    if (t10 != 32766) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	int64_t x46 = INT64_MIN;
	int32_t x47 = INT32_MAX;
	volatile int64_t t11 = 3822099297129809713LL;

    t11 = (x45&(x46^(x47<=x48)));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -1622431;
	volatile uint32_t x50 = 0U;
	int16_t x52 = -4;
	volatile uint32_t t12 = 175253925U;

    t12 = (x49&(x50^(x51<=x52)));

    if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = INT16_MAX;
	static uint32_t x54 = UINT32_MAX;
	static int8_t x56 = INT8_MIN;

    t13 = (x53&(x54^(x55<=x56)));

    if (t13 != 32767U) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	static uint64_t t14 = UINT64_MAX;

    t14 = (x57&(x58^(x59<=x60)));

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	int8_t x62 = 0;
	static int64_t x63 = INT64_MAX;
	uint32_t x64 = 265560271U;

    t15 = (x61&(x62^(x63<=x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x65 = UINT32_MAX;
	int8_t x66 = INT8_MAX;
	static uint8_t x67 = 4U;
	volatile uint32_t t16 = 2U;

    t16 = (x65&(x66^(x67<=x68)));

    if (t16 != 127U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = UINT64_MAX;
	uint8_t x70 = UINT8_MAX;
	uint16_t x71 = UINT16_MAX;
	int16_t x72 = INT16_MAX;
	volatile uint64_t t17 = 1LLU;

    t17 = (x69&(x70^(x71<=x72)));

    if (t17 != 255LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = -1;
	int64_t x76 = INT64_MAX;
	volatile int32_t t18 = -107;

    t18 = (x73&(x74^(x75<=x76)));

    if (t18 != 2147483646) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x78 = -1LL;
	int64_t x79 = -1LL;
	static volatile uint16_t x80 = 2801U;

    t19 = (x77&(x78^(x79<=x80)));

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 0U;
	uint8_t x82 = 27U;
	int64_t x83 = INT64_MIN;
	volatile uint32_t x84 = 13744552U;

    t20 = (x81&(x82^(x83<=x84)));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 10374U;
	int8_t x86 = 29;
	int64_t x88 = INT64_MIN;

    t21 = (x85&(x86^(x87<=x88)));

    if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x89 = 1U;
	uint8_t x91 = UINT8_MAX;
	int64_t x92 = -1LL;
	static int64_t t22 = -208081832803390LL;

    t22 = (x89&(x90^(x91<=x92)));

    if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	uint32_t x94 = 49496266U;
	uint64_t x95 = UINT64_MAX;
	uint16_t x96 = UINT16_MAX;
	static volatile int64_t t23 = 3LL;

    t23 = (x93&(x94^(x95<=x96)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	volatile uint32_t x98 = UINT32_MAX;
	uint64_t x99 = 30LLU;
	int64_t x100 = INT64_MAX;

    t24 = (x97&(x98^(x99<=x100)));

    if (t24 != 2147483648U) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x102 = -1;
	static volatile int16_t x103 = INT16_MIN;
	int8_t x104 = -2;
	volatile int32_t t25 = -2618436;

    t25 = (x101&(x102^(x103<=x104)));

    if (t25 != 32766) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -33;
	int32_t x106 = 26349619;
	int64_t x107 = -1LL;
	int32_t x108 = -1;

    t26 = (x105&(x106^(x107<=x108)));

    if (t26 != 26349586) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x109 = INT32_MAX;
	static int8_t x110 = 6;
	uint8_t x111 = 3U;
	static int64_t x112 = INT64_MIN;
	volatile int32_t t27 = 249213282;

    t27 = (x109&(x110^(x111<=x112)));

    if (t27 != 6) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x113 = UINT8_MAX;
	uint64_t x114 = 967170525674LLU;
	static int8_t x115 = INT8_MIN;
	int64_t x116 = 1376724874LL;
	volatile uint64_t t28 = 242793LLU;

    t28 = (x113&(x114^(x115<=x116)));

    if (t28 != 235LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	int8_t x120 = INT8_MAX;
	static volatile int32_t t29 = 1047;

    t29 = (x117&(x118^(x119<=x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x122 = -48821;
	volatile int8_t x123 = INT8_MIN;
	uint16_t x124 = 36U;
	int32_t t30 = -390753;

    t30 = (x121&(x122^(x123<=x124)));

    if (t30 != -65536) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MAX;
	static int16_t x126 = -1;
	uint32_t x127 = UINT32_MAX;
	int8_t x128 = -1;
	volatile int32_t t31 = 262769849;

    t31 = (x125&(x126^(x127<=x128)));

    if (t31 != 32766) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x130 = INT8_MAX;
	uint8_t x131 = UINT8_MAX;
	int32_t x132 = INT32_MIN;

    t32 = (x129&(x130^(x131<=x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x134 = UINT64_MAX;
	int32_t x135 = INT32_MIN;
	int32_t x136 = -3933751;
	uint64_t t33 = 443838824834216LLU;

    t33 = (x133&(x134^(x135<=x136)));

    if (t33 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MAX;
	static uint64_t x138 = UINT64_MAX;
	int8_t x139 = -1;
	int16_t x140 = INT16_MIN;
	volatile uint64_t t34 = 428667741124741LLU;

    t34 = (x137&(x138^(x139<=x140)));

    if (t34 != 127LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = UINT64_MAX;
	static volatile uint8_t x144 = 60U;
	volatile uint64_t t35 = 11LLU;

    t35 = (x141&(x142^(x143<=x144)));

    if (t35 != 3219254LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 35171041LLU;
	int64_t x146 = 121273LL;
	static int8_t x147 = -1;
	static int32_t x148 = 3;
	volatile uint64_t t36 = 171687559580LLU;

    t36 = (x145&(x146^(x147<=x148)));

    if (t36 != 34976LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x149 = 86589651;
	int16_t x150 = -1;
	uint8_t x151 = UINT8_MAX;
	volatile int16_t x152 = INT16_MIN;
	int32_t t37 = 93;

    t37 = (x149&(x150^(x151<=x152)));

    if (t37 != 86589651) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x155 = INT8_MAX;
	uint64_t x156 = UINT64_MAX;
	volatile int64_t t38 = -1LL;

    t38 = (x153&(x154^(x155<=x156)));

    if (t38 != -2LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	int32_t x159 = -28930764;
	uint16_t x160 = 2168U;

    t39 = (x157&(x158^(x159<=x160)));

    if (t39 != 65408) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = UINT32_MAX;
	uint64_t x163 = UINT64_MAX;
	volatile uint32_t x164 = 913077193U;
	uint64_t t40 = 29934016726299545LLU;

    t40 = (x161&(x162^(x163<=x164)));

    if (t40 != 4294967295LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -1LL;
	int64_t x167 = -56173019556LL;
	uint32_t x168 = 7524U;
	int64_t t41 = -2848478750444808848LL;

    t41 = (x165&(x166^(x167<=x168)));

    if (t41 != 2147483646LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x169 = INT64_MIN;
	volatile uint16_t x172 = 1444U;
	int64_t t42 = 516258LL;

    t42 = (x169&(x170^(x171<=x172)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = -18;
	uint16_t x174 = 57U;
	uint32_t x176 = 788875177U;
	int32_t t43 = -11;

    t43 = (x173&(x174^(x175<=x176)));

    if (t43 != 40) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x178 = UINT32_MAX;
	volatile int16_t x179 = -1;
	uint8_t x180 = UINT8_MAX;
	int64_t t44 = -1LL;

    t44 = (x177&(x178^(x179<=x180)));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = 1543U;
	static int64_t x182 = -687198198370827471LL;
	static uint8_t x183 = 6U;
	int64_t x184 = INT64_MIN;

    t45 = (x181&(x182^(x183<=x184)));

    if (t45 != 513LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MAX;
	volatile int8_t x186 = INT8_MAX;
	volatile int32_t x187 = 3829197;
	static volatile uint16_t x188 = 0U;
	volatile int32_t t46 = 900644;

    t46 = (x185&(x186^(x187<=x188)));

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = 0;
	static int64_t x192 = INT64_MIN;
	int64_t t47 = 571524208LL;

    t47 = (x189&(x190^(x191<=x192)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 28;
	int64_t x194 = -16202083LL;
	static int16_t x195 = INT16_MIN;
	uint8_t x196 = UINT8_MAX;

    t48 = (x193&(x194^(x195<=x196)));

    if (t48 != 28LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 16087478LLU;
	uint16_t x199 = 125U;
	static uint64_t t49 = 13LLU;

    t49 = (x197&(x198^(x199<=x200)));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x201 = UINT32_MAX;
	uint16_t x202 = 3U;
	int64_t x204 = INT64_MIN;
	uint32_t t50 = 78843209U;

    t50 = (x201&(x202^(x203<=x204)));

    if (t50 != 2U) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	uint32_t x206 = UINT32_MAX;
	int32_t x207 = INT32_MAX;
	static uint64_t x208 = UINT64_MAX;

    t51 = (x205&(x206^(x207<=x208)));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x210 = 36898LL;
	volatile int8_t x211 = -1;
	int16_t x212 = -13415;
	int64_t t52 = 112LL;

    t52 = (x209&(x210^(x211<=x212)));

    if (t52 != 36898LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x213 = INT64_MAX;
	uint8_t x214 = 7U;
	int32_t x215 = INT32_MIN;
	uint16_t x216 = 0U;
	int64_t t53 = 37589LL;

    t53 = (x213&(x214^(x215<=x216)));

    if (t53 != 6LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	static int64_t x219 = 1420150420863055066LL;
	int16_t x220 = INT16_MAX;
	volatile int32_t t54 = -5223;

    t54 = (x217&(x218^(x219<=x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x222 = INT16_MIN;
	static int8_t x223 = 0;

    t55 = (x221&(x222^(x223<=x224)));

    if (t55 != -32767) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x225 = INT16_MIN;
	volatile int32_t x226 = -1;
	volatile int64_t x227 = -10252341LL;
	int32_t t56 = 871626506;

    t56 = (x225&(x226^(x227<=x228)));

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = UINT16_MAX;
	int16_t x230 = -29;
	static int16_t x232 = INT16_MAX;
	volatile int32_t t57 = 43016545;

    t57 = (x229&(x230^(x231<=x232)));

    if (t57 != 65506) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x233 = 1U;
	int32_t x235 = 40760;
	volatile int64_t x236 = 5017662LL;

    t58 = (x233&(x234^(x235<=x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 5U;
	int16_t x238 = -113;
	static int16_t x239 = INT16_MIN;
	uint32_t x240 = 18656U;
	int32_t t59 = -91175602;

    t59 = (x237&(x238^(x239<=x240)));

    if (t59 != 5) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x241 = 29353U;
	int16_t x242 = INT16_MIN;
	uint16_t x243 = UINT16_MAX;
	int16_t x244 = -1716;

    t60 = (x241&(x242^(x243<=x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x246 = 2433914073296121LL;
	static uint64_t x247 = 602726103281280850LLU;
	int8_t x248 = -6;
	int64_t t61 = -154687764036336LL;

    t61 = (x245&(x246^(x247<=x248)));

    if (t61 != 2433914073296000LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x249 = INT16_MAX;
	static volatile int32_t x250 = INT32_MIN;
	int32_t x251 = 6721234;
	uint64_t x252 = 0LLU;
	volatile int32_t t62 = -23181321;

    t62 = (x249&(x250^(x251<=x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = 2U;
	static int8_t x255 = 0;
	int16_t x256 = -1;
	int64_t t63 = -1624729880857LL;

    t63 = (x253&(x254^(x255<=x256)));

    if (t63 != 2LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -5;
	int64_t x259 = 49198847LL;
	int64_t x260 = -1LL;
	int32_t t64 = -14996;

    t64 = (x257&(x258^(x259<=x260)));

    if (t64 != 251) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = UINT16_MAX;
	int8_t x264 = -7;

    t65 = (x261&(x262^(x263<=x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x267 = INT16_MAX;
	int64_t x268 = INT64_MIN;

    t66 = (x265&(x266^(x267<=x268)));

    if (t66 != 38018LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x271 = INT16_MAX;
	uint16_t x272 = 3U;
	int64_t t67 = -3062100LL;

    t67 = (x269&(x270^(x271<=x272)));

    if (t67 != 143214LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MAX;
	uint32_t x276 = 56901U;
	int64_t t68 = INT64_MIN;

    t68 = (x273&(x274^(x275<=x276)));

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x277 = INT16_MIN;
	int32_t x278 = INT32_MIN;
	uint32_t x279 = 175U;
	uint64_t x280 = UINT64_MAX;
	volatile int32_t t69 = INT32_MIN;

    t69 = (x277&(x278^(x279<=x280)));

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x282 = 62617655;
	volatile int16_t x283 = INT16_MIN;
	uint64_t x284 = 23818320681033953LLU;

    t70 = (x281&(x282^(x283<=x284)));

    if (t70 != 55) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 27U;
	volatile int64_t x286 = INT64_MIN;
	uint8_t x287 = UINT8_MAX;
	uint8_t x288 = 63U;
	int64_t t71 = 1309799862LL;

    t71 = (x285&(x286^(x287<=x288)));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x289 = -16LL;
	int64_t x290 = -84698527326085059LL;
	volatile int16_t x291 = -1;
	int32_t x292 = INT32_MAX;
	static volatile int64_t t72 = -982788LL;

    t72 = (x289&(x290^(x291<=x292)));

    if (t72 != -84698527326085072LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x293 = 1;
	static volatile uint64_t x294 = 120697552716126939LLU;
	int64_t x295 = 110640071LL;
	volatile uint64_t t73 = 1473233595840776871LLU;

    t73 = (x293&(x294^(x295<=x296)));

    if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = -1;
	static int8_t x298 = INT8_MAX;
	int8_t x300 = INT8_MIN;
	int32_t t74 = -2;

    t74 = (x297&(x298^(x299<=x300)));

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -1LL;
	uint16_t x302 = 7U;
	static int32_t x303 = INT32_MIN;
	volatile uint64_t x304 = UINT64_MAX;

    t75 = (x301&(x302^(x303<=x304)));

    if (t75 != 6LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -1509912LL;
	uint64_t x306 = 3LLU;
	int16_t x307 = INT16_MIN;
	volatile int64_t x308 = -1LL;
	uint64_t t76 = 843836945LLU;

    t76 = (x305&(x306^(x307<=x308)));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MIN;
	uint16_t x310 = 16020U;
	static int32_t x311 = 221370266;
	uint64_t x312 = UINT64_MAX;

    t77 = (x309&(x310^(x311<=x312)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x314 = 1371U;
	int16_t x315 = INT16_MAX;
	uint64_t x316 = UINT64_MAX;
	volatile int64_t t78 = 3997LL;

    t78 = (x313&(x314^(x315<=x316)));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = UINT32_MAX;
	uint16_t x318 = 5U;
	volatile int8_t x319 = 10;
	int8_t x320 = INT8_MIN;
	volatile uint32_t t79 = 19215977U;

    t79 = (x317&(x318^(x319<=x320)));

    if (t79 != 5U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -1;
	uint32_t x322 = 35899U;
	uint8_t x323 = 57U;
	int64_t x324 = -1LL;
	static volatile uint32_t t80 = 487845U;

    t80 = (x321&(x322^(x323<=x324)));

    if (t80 != 35899U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -1;
	volatile uint8_t x326 = 4U;
	int8_t x327 = -1;
	static int64_t x328 = INT64_MIN;
	volatile int32_t t81 = 1;

    t81 = (x325&(x326^(x327<=x328)));

    if (t81 != 4) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = 5;
	volatile uint32_t x331 = 11432U;
	static volatile int32_t t82 = -1014253;

    t82 = (x329&(x330^(x331<=x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MIN;
	int16_t x334 = -352;
	static volatile int64_t x336 = INT64_MIN;
	volatile int32_t t83 = 325462;

    t83 = (x333&(x334^(x335<=x336)));

    if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = 427062820804804659LL;
	static int8_t x338 = 1;
	uint16_t x339 = 1116U;
	volatile uint16_t x340 = 808U;
	int64_t t84 = 476003080805341LL;

    t84 = (x337&(x338^(x339<=x340)));

    if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	volatile uint8_t x343 = 7U;
	volatile int16_t x344 = -3;
	int64_t t85 = INT64_MIN;

    t85 = (x341&(x342^(x343<=x344)));

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = 12U;
	uint16_t x346 = 695U;
	uint16_t x347 = UINT16_MAX;
	int8_t x348 = -1;
	int32_t t86 = 472435;

    t86 = (x345&(x346^(x347<=x348)));

    if (t86 != 4) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 20672356709232675LLU;
	int16_t x351 = 1451;
	int8_t x352 = 2;
	volatile uint64_t t87 = 22LLU;

    t87 = (x349&(x350^(x351<=x352)));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x353 = 1;
	int64_t x354 = INT64_MIN;
	static int8_t x355 = INT8_MIN;
	int16_t x356 = INT16_MAX;
	volatile int64_t t88 = 1543311208381054LL;

    t88 = (x353&(x354^(x355<=x356)));

    if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -16471535613LL;
	int8_t x358 = -1;
	uint8_t x359 = 10U;
	int16_t x360 = INT16_MAX;

    t89 = (x357&(x358^(x359<=x360)));

    if (t89 != -16471535614LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = 5U;
	int8_t x362 = INT8_MIN;
	static int32_t x363 = 131263766;
	int16_t x364 = INT16_MIN;
	static volatile int32_t t90 = -1616437;

    t90 = (x361&(x362^(x363<=x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x365 = INT16_MIN;
	static volatile int8_t x366 = 33;
	int32_t x367 = -1;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t91 = 825;

    t91 = (x365&(x366^(x367<=x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = UINT32_MAX;
	static int64_t x370 = INT64_MIN;
	static volatile uint8_t x371 = 21U;

    t92 = (x369&(x370^(x371<=x372)));

    if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = 118550608U;
	int64_t x374 = INT64_MIN;
	int16_t x375 = INT16_MAX;
	volatile int32_t x376 = INT32_MIN;
	int64_t t93 = 402LL;

    t93 = (x373&(x374^(x375<=x376)));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = 5872839330LLU;
	int32_t x378 = -1;
	int32_t x380 = INT32_MIN;
	uint64_t t94 = 383234822311967074LLU;

    t94 = (x377&(x378^(x379<=x380)));

    if (t94 != 5872839330LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x381 = -1;
	int64_t x382 = INT64_MAX;
	int16_t x383 = 0;
	static int64_t t95 = -721641743922LL;

    t95 = (x381&(x382^(x383<=x384)));

    if (t95 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x385 = UINT64_MAX;
	int16_t x386 = -1;
	volatile int32_t x387 = INT32_MIN;
	uint64_t x388 = 3397238662395LLU;
	uint64_t t96 = UINT64_MAX;

    t96 = (x385&(x386^(x387<=x388)));

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = UINT64_MAX;
	int16_t x390 = INT16_MIN;
	int8_t x391 = INT8_MIN;
	static volatile uint64_t t97 = 16203362936527LLU;

    t97 = (x389&(x390^(x391<=x392)));

    if (t97 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 4608U;
	uint16_t x394 = 554U;
	uint8_t x395 = UINT8_MAX;
	int16_t x396 = INT16_MIN;
	volatile int32_t t98 = 1585101;

    t98 = (x393&(x394^(x395<=x396)));

    if (t98 != 512) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x397 = 3;
	int16_t x399 = INT16_MAX;
	int32_t x400 = INT32_MIN;
	static int32_t t99 = -7212093;

    t99 = (x397&(x398^(x399<=x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = -1LL;
	volatile int16_t x402 = INT16_MAX;
	uint16_t x403 = UINT16_MAX;
	static volatile int16_t x404 = -1;
	int64_t t100 = -100491LL;

    t100 = (x401&(x402^(x403<=x404)));

    if (t100 != 32767LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x405 = 28;
	volatile int8_t x407 = INT8_MIN;
	volatile int64_t x408 = 96154831210LL;
	volatile int32_t t101 = -31286944;

    t101 = (x405&(x406^(x407<=x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	static int16_t x410 = INT16_MIN;
	int16_t x411 = INT16_MAX;
	int32_t t102 = 1358;

    t102 = (x409&(x410^(x411<=x412)));

    if (t102 != -32768) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = -12;
	static int64_t x414 = -1238195145329733LL;
	int64_t x415 = INT64_MIN;
	volatile uint8_t x416 = 94U;
	static int64_t t103 = -13408944008589LL;

    t103 = (x413&(x414^(x415<=x416)));

    if (t103 != -1238195145329744LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = 839U;
	uint16_t x420 = UINT16_MAX;

    t104 = (x417&(x418^(x419<=x420)));

    if (t104 != 514) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x421 = -60200348052LL;
	int32_t x422 = INT32_MAX;
	int16_t x423 = 1;
	uint8_t x424 = 13U;
	int64_t t105 = 286625705919252LL;

    t105 = (x421&(x422^(x423<=x424)));

    if (t105 != 2076677740LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint32_t x427 = 29402613U;
	int64_t t106 = 6544356935LL;

    t106 = (x425&(x426^(x427<=x428)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x430 = INT32_MIN;
	uint8_t x432 = 6U;
	static uint64_t t107 = 64158727665132LLU;

    t107 = (x429&(x430^(x431<=x432)));

    if (t107 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = 26;
	static int64_t x435 = INT64_MIN;
	uint8_t x436 = 12U;
	int64_t t108 = -7955102735LL;

    t108 = (x433&(x434^(x435<=x436)));

    if (t108 != 26LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -1LL;
	int32_t x439 = INT32_MAX;
	static int64_t t109 = -1680508971593889835LL;

    t109 = (x437&(x438^(x439<=x440)));

    if (t109 != -2147483648LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x441 = 3500U;
	int8_t x442 = INT8_MIN;
	int8_t x443 = INT8_MAX;
	uint8_t x444 = UINT8_MAX;
	uint32_t t110 = 259U;

    t110 = (x441&(x442^(x443<=x444)));

    if (t110 != 3456U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x445 = INT64_MIN;
	int16_t x446 = INT16_MAX;
	uint64_t x447 = 13192346152LLU;
	uint64_t x448 = 1131730825025495516LLU;
	int64_t t111 = 166816LL;

    t111 = (x445&(x446^(x447<=x448)));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = -1LL;
	uint32_t x450 = 42628306U;
	int64_t x451 = -1LL;
	int32_t x452 = INT32_MIN;
	int64_t t112 = -564735102208LL;

    t112 = (x449&(x450^(x451<=x452)));

    if (t112 != 42628306LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = 203;
	int16_t x454 = INT16_MIN;
	volatile uint32_t x455 = 50278U;
	volatile int32_t t113 = -197184;

    t113 = (x453&(x454^(x455<=x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x457 = UINT8_MAX;
	int16_t x458 = INT16_MIN;
	uint8_t x459 = 0U;
	static volatile int32_t x460 = INT32_MIN;
	volatile int32_t t114 = -23477676;

    t114 = (x457&(x458^(x459<=x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MIN;
	volatile int32_t x462 = INT32_MAX;
	int16_t x463 = -1;
	volatile uint16_t x464 = 100U;
	static int32_t t115 = -1028217604;

    t115 = (x461&(x462^(x463<=x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = 152463997586LLU;
	volatile int64_t x467 = INT64_MIN;
	int8_t x468 = INT8_MIN;

    t116 = (x465&(x466^(x467<=x468)));

    if (t116 != 152463997586LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x469 = INT8_MIN;
	static int32_t x470 = INT32_MIN;
	uint64_t x471 = UINT64_MAX;

    t117 = (x469&(x470^(x471<=x472)));

    if (t117 != INT32_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = 3U;
	static uint64_t x474 = 46057683658047LLU;
	int32_t x475 = INT32_MAX;
	uint8_t x476 = 1U;

    t118 = (x473&(x474^(x475<=x476)));

    if (t118 != 3LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x477 = UINT8_MAX;
	int8_t x478 = -1;
	int32_t x480 = INT32_MIN;
	static int32_t t119 = 3232401;

    t119 = (x477&(x478^(x479<=x480)));

    if (t119 != 255) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 549715068216000538LLU;
	static volatile int8_t x482 = INT8_MAX;
	static uint64_t x484 = UINT64_MAX;
	static uint64_t t120 = 6LLU;

    t120 = (x481&(x482^(x483<=x484)));

    if (t120 != 26LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -10;
	int64_t x486 = 188LL;
	uint32_t x487 = UINT32_MAX;
	uint32_t x488 = 10701U;
	volatile int64_t t121 = -1LL;

    t121 = (x485&(x486^(x487<=x488)));

    if (t121 != 180LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = 6U;
	uint64_t x490 = 89546LLU;
	int8_t x491 = INT8_MAX;
	uint64_t t122 = 250481817814518LLU;

    t122 = (x489&(x490^(x491<=x492)));

    if (t122 != 2LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x496 = UINT16_MAX;
	volatile int32_t t123 = INT32_MIN;

    t123 = (x493&(x494^(x495<=x496)));

    if (t123 != INT32_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int8_t x497 = 0;
	int32_t x498 = -1;
	int16_t x499 = INT16_MIN;
	static volatile int8_t x500 = INT8_MAX;
	int32_t t124 = -117;

    t124 = (x497&(x498^(x499<=x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = 3930993757795447902LLU;
	int32_t x502 = -238532;
	int32_t x503 = -53130;
	uint64_t x504 = UINT64_MAX;
	volatile uint64_t t125 = 382046LLU;

    t125 = (x501&(x502^(x503<=x504)));

    if (t125 != 3930993757795406876LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x506 = INT8_MAX;
	int64_t x507 = INT64_MIN;
	volatile int8_t x508 = INT8_MIN;
	int32_t t126 = -18;

    t126 = (x505&(x506^(x507<=x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = -1;
	volatile int16_t x511 = INT16_MIN;
	int16_t x512 = -1;
	volatile uint32_t t127 = 2U;

    t127 = (x509&(x510^(x511<=x512)));

    if (t127 != 247326U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x513 = 65003847LLU;
	uint64_t x514 = UINT64_MAX;
	int8_t x515 = INT8_MIN;
	int64_t x516 = INT64_MIN;
	volatile uint64_t t128 = 82805LLU;

    t128 = (x513&(x514^(x515<=x516)));

    if (t128 != 65003847LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = -16;
	int8_t x519 = INT8_MIN;
	int64_t x520 = 361919LL;
	volatile uint64_t t129 = 49LLU;

    t129 = (x517&(x518^(x519<=x520)));

    if (t129 != 68404296048LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x521 = 118U;
	int16_t x523 = INT16_MAX;
	uint8_t x524 = 28U;
	volatile uint32_t t130 = 0U;

    t130 = (x521&(x522^(x523<=x524)));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MIN;
	int8_t x527 = INT8_MIN;
	int16_t x528 = -1;
	uint32_t t131 = 23246649U;

    t131 = (x525&(x526^(x527<=x528)));

    if (t131 != 2147483648U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MIN;
	volatile int64_t x531 = -91376634666LL;
	int16_t x532 = INT16_MIN;
	volatile int32_t t132 = 420424;

    t132 = (x529&(x530^(x531<=x532)));

    if (t132 != -32768) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x534 = UINT32_MAX;
	volatile int16_t x535 = INT16_MIN;
	int32_t x536 = INT32_MIN;
	uint32_t t133 = 67292235U;

    t133 = (x533&(x534^(x535<=x536)));

    if (t133 != 65535U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 0U;
	volatile int64_t x538 = -297725071112LL;
	volatile uint64_t x539 = 21895LLU;
	volatile int64_t t134 = -61733882985562LL;

    t134 = (x537&(x538^(x539<=x540)));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	volatile int8_t x542 = 1;
	volatile int8_t x543 = -12;

    t135 = (x541&(x542^(x543<=x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x547 = -6020024;
	static int32_t x548 = -1;
	volatile int32_t t136 = INT32_MIN;

    t136 = (x545&(x546^(x547<=x548)));

    if (t136 != INT32_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint32_t x549 = 975151U;
	int16_t x550 = -375;
	static int8_t x551 = 33;
	uint32_t t137 = 26U;

    t137 = (x549&(x550^(x551<=x552)));

    if (t137 != 974856U) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = -1;
	static int32_t x554 = -2;
	static uint64_t x555 = 3702204288574513LLU;
	volatile int64_t x556 = INT64_MIN;
	int32_t t138 = -11;

    t138 = (x553&(x554^(x555<=x556)));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = -1;
	volatile uint32_t x558 = 49556U;
	int64_t x559 = INT64_MIN;
	volatile int8_t x560 = -14;
	uint32_t t139 = 0U;

    t139 = (x557&(x558^(x559<=x560)));

    if (t139 != 49557U) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MAX;
	int16_t x562 = INT16_MAX;
	int16_t x563 = -10;
	volatile int64_t x564 = INT64_MIN;
	static volatile int32_t t140 = -86;

    t140 = (x561&(x562^(x563<=x564)));

    if (t140 != 127) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MAX;
	int16_t x566 = -852;
	uint32_t x567 = 38538966U;
	uint64_t x568 = 182186928LLU;
	int64_t t141 = 0LL;

    t141 = (x565&(x566^(x567<=x568)));

    if (t141 != 9223372036854774957LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x569 = -1;
	int64_t x570 = -1LL;
	volatile uint32_t x571 = UINT32_MAX;
	int32_t x572 = INT32_MIN;
	int64_t t142 = 15761949535388984LL;

    t142 = (x569&(x570^(x571<=x572)));

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = UINT32_MAX;
	uint64_t x575 = 2999535692545538611LLU;
	int16_t x576 = INT16_MAX;
	static uint32_t t143 = UINT32_MAX;

    t143 = (x573&(x574^(x575<=x576)));

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = UINT8_MAX;
	static int64_t x578 = 150LL;
	int16_t x580 = -19;
	static int64_t t144 = -218603LL;

    t144 = (x577&(x578^(x579<=x580)));

    if (t144 != 150LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	volatile uint8_t x582 = 1U;
	volatile uint8_t x583 = 115U;
	uint16_t x584 = UINT16_MAX;

    t145 = (x581&(x582^(x583<=x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = UINT32_MAX;
	int32_t x586 = -1;
	int32_t x587 = INT32_MIN;

    t146 = (x585&(x586^(x587<=x588)));

    if (t146 != 4294967294U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	int32_t x590 = INT32_MIN;
	int16_t x591 = INT16_MAX;
	uint8_t x592 = 1U;
	int32_t t147 = INT32_MIN;

    t147 = (x589&(x590^(x591<=x592)));

    if (t147 != INT32_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	static uint16_t x594 = UINT16_MAX;
	int32_t x595 = INT32_MIN;
	uint16_t x596 = 248U;

    t148 = (x593&(x594^(x595<=x596)));

    if (t148 != 65408) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	static int16_t x598 = -1;
	volatile int8_t x599 = INT8_MIN;
	int16_t x600 = INT16_MIN;
	volatile int32_t t149 = 2;

    t149 = (x597&(x598^(x599<=x600)));

    if (t149 != -128) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x602 = 55U;
	volatile int8_t x603 = INT8_MAX;
	int32_t x604 = INT32_MAX;
	int64_t t150 = -3528244039802618656LL;

    t150 = (x601&(x602^(x603<=x604)));

    if (t150 != 16LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = INT16_MIN;
	volatile int16_t x606 = -1;
	volatile int8_t x608 = 5;
	volatile int32_t t151 = 11;

    t151 = (x605&(x606^(x607<=x608)));

    if (t151 != -32768) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x609 = 25U;
	int32_t x610 = INT32_MIN;
	uint32_t x611 = 926176U;
	volatile uint32_t t152 = 21696U;

    t152 = (x609&(x610^(x611<=x612)));

    if (t152 != 1U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x614 = INT8_MIN;
	int16_t x615 = -3766;
	int8_t x616 = -3;

    t153 = (x613&(x614^(x615<=x616)));

    if (t153 != INT64_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x618 = INT8_MIN;
	int64_t x619 = INT64_MIN;
	static int8_t x620 = 47;
	int32_t t154 = 6805;

    t154 = (x617&(x618^(x619<=x620)));

    if (t154 != -32768) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = 3507U;
	volatile int8_t x622 = 24;
	int16_t x624 = -8320;
	volatile int32_t t155 = 2;

    t155 = (x621&(x622^(x623<=x624)));

    if (t155 != 16) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x626 = UINT32_MAX;
	static int64_t x627 = -366LL;
	int8_t x628 = -1;
	volatile uint32_t t156 = 863205U;

    t156 = (x625&(x626^(x627<=x628)));

    if (t156 != 4294967290U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x629 = INT64_MIN;
	volatile int16_t x630 = -1;
	int32_t x631 = INT32_MIN;
	uint8_t x632 = UINT8_MAX;
	int64_t t157 = INT64_MIN;

    t157 = (x629&(x630^(x631<=x632)));

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint64_t x633 = 8624878497427565LLU;
	uint16_t x635 = 22122U;
	uint64_t x636 = UINT64_MAX;
	static uint64_t t158 = 5523602563377650884LLU;

    t158 = (x633&(x634^(x635<=x636)));

    if (t158 != 8624878497427564LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 349U;
	int16_t x638 = INT16_MIN;
	int8_t x639 = 0;
	int8_t x640 = INT8_MAX;
	uint32_t t159 = 93527U;

    t159 = (x637&(x638^(x639<=x640)));

    if (t159 != 1U) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x642 = INT8_MIN;
	uint8_t x643 = UINT8_MAX;
	volatile int8_t x644 = -1;

    t160 = (x641&(x642^(x643<=x644)));

    if (t160 != -128) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = 15U;
	int32_t x647 = 486802205;
	int64_t x648 = -8749497453783LL;
	volatile int32_t t161 = 278;

    t161 = (x645&(x646^(x647<=x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MIN;
	volatile int8_t x650 = INT8_MIN;
	uint64_t x651 = 1415100604866LLU;
	uint8_t x652 = 5U;
	int32_t t162 = INT32_MIN;

    t162 = (x649&(x650^(x651<=x652)));

    if (t162 != INT32_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = 1613424441LLU;
	int32_t x654 = INT32_MIN;
	uint32_t x655 = UINT32_MAX;
	volatile int64_t x656 = INT64_MIN;
	volatile uint64_t t163 = 928LLU;

    t163 = (x653&(x654^(x655<=x656)));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = 0;
	uint8_t x659 = UINT8_MAX;
	int32_t t164 = 4380361;

    t164 = (x657&(x658^(x659<=x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x661 = -4;
	uint16_t x662 = 1191U;
	int8_t x663 = INT8_MIN;
	int8_t x664 = -1;
	volatile int32_t t165 = 903954;

    t165 = (x661&(x662^(x663<=x664)));

    if (t165 != 1188) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -1;
	int64_t x666 = -1983779050537837672LL;
	int32_t x667 = INT32_MIN;
	uint16_t x668 = 6U;
	static int64_t t166 = 360828214LL;

    t166 = (x665&(x666^(x667<=x668)));

    if (t166 != -1983779050537837671LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = INT8_MAX;
	int16_t x670 = INT16_MAX;
	volatile uint64_t x671 = 51770LLU;
	int8_t x672 = INT8_MAX;
	volatile int32_t t167 = 132951247;

    t167 = (x669&(x670^(x671<=x672)));

    if (t167 != 127) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x673 = INT8_MIN;
	uint16_t x674 = 1970U;
	static int16_t x676 = 3;
	volatile int32_t t168 = 1687;

    t168 = (x673&(x674^(x675<=x676)));

    if (t168 != 1920) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MAX;
	static int64_t x678 = INT64_MIN;
	int64_t x679 = INT64_MIN;
	uint8_t x680 = 106U;
	int64_t t169 = 2124LL;

    t169 = (x677&(x678^(x679<=x680)));

    if (t169 != 1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -1;
	static int16_t x683 = 65;
	int32_t t170 = -2;

    t170 = (x681&(x682^(x683<=x684)));

    if (t170 != 9528) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 46212U;
	static int64_t x686 = -1LL;
	int16_t x687 = 12986;
	static volatile int8_t x688 = 2;
	int64_t t171 = 7238996435596LL;

    t171 = (x685&(x686^(x687<=x688)));

    if (t171 != 46212LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint8_t x690 = UINT8_MAX;
	static int32_t x691 = INT32_MIN;
	int8_t x692 = INT8_MAX;

    t172 = (x689&(x690^(x691<=x692)));

    if (t172 != 254) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x693 = INT16_MIN;
	volatile int8_t x695 = -1;
	static int32_t t173 = 10;

    t173 = (x693&(x694^(x695<=x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -6;
	uint32_t x698 = UINT32_MAX;
	int8_t x699 = -16;
	static int16_t x700 = 30;
	uint32_t t174 = 8907U;

    t174 = (x697&(x698^(x699<=x700)));

    if (t174 != 4294967290U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	uint64_t x702 = UINT64_MAX;
	volatile int32_t x703 = INT32_MIN;
	int32_t x704 = INT32_MIN;
	uint64_t t175 = 614570386LLU;

    t175 = (x701&(x702^(x703<=x704)));

    if (t175 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = UINT64_MAX;
	int32_t x706 = INT32_MIN;
	int16_t x707 = -1;
	volatile int32_t x708 = INT32_MIN;
	static volatile uint64_t t176 = 7LLU;

    t176 = (x705&(x706^(x707<=x708)));

    if (t176 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x709 = INT8_MIN;
	int16_t x710 = 888;
	int32_t x711 = INT32_MAX;
	int8_t x712 = INT8_MIN;

    t177 = (x709&(x710^(x711<=x712)));

    if (t177 != 768) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x713 = INT16_MAX;
	volatile int16_t x714 = INT16_MIN;
	uint16_t x715 = UINT16_MAX;
	static int16_t x716 = 498;

    t178 = (x713&(x714^(x715<=x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MAX;
	volatile uint8_t x718 = 0U;
	static uint64_t x719 = 112020LLU;
	volatile int8_t x720 = INT8_MAX;

    t179 = (x717&(x718^(x719<=x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x722 = 0U;
	int16_t x723 = INT16_MIN;
	static volatile int64_t x724 = -1705606480775948477LL;
	volatile int64_t t180 = 1021087911471871LL;

    t180 = (x721&(x722^(x723<=x724)));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x725 = 8U;
	int8_t x726 = INT8_MAX;
	uint32_t x727 = UINT32_MAX;
	int32_t t181 = -18506;

    t181 = (x725&(x726^(x727<=x728)));

    if (t181 != 8) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x729 = -1;
	volatile uint32_t x730 = 394115294U;
	volatile int64_t x731 = 1943380544332909LL;

    t182 = (x729&(x730^(x731<=x732)));

    if (t182 != 394115294U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MIN;
	int64_t x734 = INT64_MIN;
	static int64_t x735 = -175535915495357LL;

    t183 = (x733&(x734^(x735<=x736)));

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	int16_t x738 = 895;
	static uint64_t x739 = UINT64_MAX;
	int32_t x740 = INT32_MIN;
	volatile int32_t t184 = -1770;

    t184 = (x737&(x738^(x739<=x740)));

    if (t184 != 768) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MIN;
	uint8_t x743 = 6U;
	volatile uint32_t t185 = 352U;

    t185 = (x741&(x742^(x743<=x744)));

    if (t185 != 2147483648U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x746 = 2114925942LL;
	uint16_t x747 = UINT16_MAX;
	uint8_t x748 = 12U;
	volatile int64_t t186 = 27068310LL;

    t186 = (x745&(x746^(x747<=x748)));

    if (t186 != 64LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 9598U;
	uint8_t x750 = UINT8_MAX;
	uint8_t x751 = 0U;
	int32_t t187 = -941327;

    t187 = (x749&(x750^(x751<=x752)));

    if (t187 != 126) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 2977U;
	int8_t x754 = INT8_MAX;
	static volatile int64_t x755 = 456064LL;
	volatile uint32_t x756 = 690455307U;
	int32_t t188 = -875;

    t188 = (x753&(x754^(x755<=x756)));

    if (t188 != 32) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x757 = INT32_MIN;
	uint32_t x759 = 1969600U;
	int64_t x760 = 82851LL;

    t189 = (x757&(x758^(x759<=x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint8_t x761 = 1U;
	volatile int32_t x762 = INT32_MAX;
	int16_t x763 = INT16_MAX;
	volatile int32_t t190 = -7296813;

    t190 = (x761&(x762^(x763<=x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = -1668;
	int16_t x767 = INT16_MIN;
	int16_t x768 = -1;
	static volatile int32_t t191 = -212670565;

    t191 = (x765&(x766^(x767<=x768)));

    if (t191 != -1788) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = 3;
	int16_t x770 = 1;
	int16_t x771 = 2;
	int64_t x772 = 2158431LL;
	volatile int32_t t192 = -1;

    t192 = (x769&(x770^(x771<=x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = UINT16_MAX;
	static int32_t x774 = INT32_MIN;
	uint16_t x775 = 34U;
	volatile uint16_t x776 = 0U;
	volatile int32_t t193 = 2;

    t193 = (x773&(x774^(x775<=x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x777 = -1;
	static volatile int32_t x778 = INT32_MAX;
	int64_t x779 = 8220432515992LL;

    t194 = (x777&(x778^(x779<=x780)));

    if (t194 != 2147483646) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int16_t x781 = -4345;
	int8_t x782 = 0;
	int64_t x783 = INT64_MIN;
	int16_t x784 = 16249;
	volatile int32_t t195 = -342223;

    t195 = (x781&(x782^(x783<=x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MAX;
	int16_t x786 = INT16_MAX;
	volatile uint32_t x788 = 270445307U;
	static int64_t t196 = 1017LL;

    t196 = (x785&(x786^(x787<=x788)));

    if (t196 != 32767LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x790 = INT8_MIN;
	int32_t t197 = 683937648;

    t197 = (x789&(x790^(x791<=x792)));

    if (t197 != -128) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x793 = INT64_MIN;
	volatile int8_t x795 = INT8_MIN;
	volatile int64_t t198 = -391LL;

    t198 = (x793&(x794^(x795<=x796)));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -14191756049841LL;
	int32_t x798 = INT32_MAX;
	uint64_t x799 = 79896648LLU;
	int16_t x800 = 1786;
	volatile int64_t t199 = -2948467657394LL;

    t199 = (x797&(x798^(x799<=x800)));

    if (t199 != 963379791LL) { NG(); } else { ; }
	
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

