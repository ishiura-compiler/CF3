
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

int64_t x3 = INT64_MIN;
int32_t x4 = -3178;
uint32_t x6 = 312091385U;
volatile int32_t x13 = -1;
volatile uint64_t x20 = UINT64_MAX;
volatile uint64_t t4 = 66765LLU;
volatile uint16_t x21 = 2211U;
uint8_t x26 = 4U;
uint32_t x27 = 67435039U;
int32_t x43 = -1;
static int8_t x53 = INT8_MIN;
int32_t x70 = 189151502;
static volatile int32_t x89 = -1;
uint32_t x91 = UINT32_MAX;
volatile uint32_t t20 = 360U;
int64_t x93 = INT64_MIN;
uint32_t x111 = 11804U;
static int32_t x112 = 273620;
int8_t x113 = INT8_MAX;
int16_t x125 = -1;
volatile int64_t t30 = 89805732515150LL;
int8_t x134 = INT8_MIN;
int32_t x138 = INT32_MAX;
int16_t x142 = INT16_MAX;
volatile int16_t x145 = 14;
uint16_t x147 = 4636U;
int8_t x149 = 7;
int8_t x152 = INT8_MIN;
int16_t x157 = INT16_MIN;
volatile int16_t x160 = INT16_MIN;
volatile int16_t x161 = INT16_MIN;
int64_t x163 = 28405168LL;
int8_t x165 = INT8_MAX;
int32_t x168 = -1;
int32_t x170 = -1736116;
static volatile int32_t x171 = 431;
uint16_t x173 = 206U;
int32_t x175 = INT32_MAX;
volatile int64_t t42 = 1LL;
int64_t x181 = -1LL;
volatile int64_t x183 = INT64_MIN;
int64_t t43 = -601811528835LL;
int16_t x189 = INT16_MIN;
int8_t x196 = INT8_MIN;
volatile int32_t t46 = -8;
int64_t t47 = 1842592590065025LL;
static int64_t x201 = INT64_MAX;
int64_t x206 = -1LL;
volatile int64_t x214 = 2393409460543437957LL;
static int32_t x228 = INT32_MIN;
uint64_t t54 = 104337989564679510LLU;
int32_t x234 = -1;
uint8_t x244 = 8U;
static volatile uint32_t t58 = 59642915U;
uint8_t x256 = UINT8_MAX;
int64_t t60 = -6922183LL;
volatile int32_t x258 = INT32_MIN;
volatile int64_t t61 = 321002489476LL;
static uint32_t x261 = UINT32_MAX;
volatile int8_t x262 = INT8_MIN;
int16_t x273 = INT16_MAX;
int16_t x279 = -1;
int64_t x280 = INT64_MIN;
volatile uint16_t x282 = 25U;
int16_t x296 = 232;
volatile uint32_t t70 = 1837038U;
volatile uint8_t x302 = UINT8_MAX;
volatile uint32_t x309 = 405631620U;
uint32_t x314 = 728897754U;
static uint8_t x318 = UINT8_MAX;
static int16_t x323 = INT16_MIN;
int32_t x324 = INT32_MAX;
static uint32_t t75 = 69U;
int8_t x334 = INT8_MIN;
int64_t x339 = 229244686287366LL;
int16_t x344 = INT16_MIN;
int16_t x348 = INT16_MAX;
static int32_t x350 = INT32_MIN;
volatile uint32_t x352 = 1U;
uint8_t x357 = 2U;
volatile uint8_t x372 = 5U;
uint8_t x380 = 111U;
uint64_t x381 = 2367821LLU;
static int64_t x388 = INT64_MAX;
int8_t x389 = -1;
static uint16_t x390 = UINT16_MAX;
int64_t x391 = 1322076403LL;
int32_t x406 = INT32_MAX;
int16_t x413 = INT16_MIN;
volatile int8_t x428 = INT8_MIN;
uint8_t x431 = 15U;
int32_t x442 = -1395;
volatile uint16_t x448 = UINT16_MAX;
volatile int32_t t106 = 305;
int32_t x456 = INT32_MAX;
int16_t x458 = INT16_MAX;
volatile uint64_t t108 = 2327LLU;
int32_t x461 = 328189503;
int8_t x473 = INT8_MAX;
uint64_t t112 = 1586262003526LLU;
int16_t x481 = 9971;
static int32_t x487 = -111793980;
int64_t x488 = INT64_MIN;
static uint8_t x495 = 126U;
int8_t x496 = INT8_MIN;
int16_t x498 = INT16_MIN;
volatile int32_t t119 = -838055877;
int64_t x508 = -32462767LL;
uint16_t x510 = 98U;
volatile uint64_t t123 = 16LLU;
uint64_t x525 = 64763LLU;
int32_t x533 = 2;
uint64_t t126 = 120LLU;
int32_t x539 = 12647051;
int8_t x542 = -1;
static uint32_t x546 = UINT32_MAX;
int16_t x548 = -1;
int64_t x550 = 26LL;
uint64_t x554 = 7999LLU;
volatile int8_t x557 = 0;
volatile uint64_t t132 = 158255439LLU;
int16_t x561 = 0;
int16_t x562 = INT16_MIN;
int64_t x571 = -1LL;
int16_t x575 = 455;
static int64_t t136 = 12198928874LL;
uint16_t x583 = UINT16_MAX;
uint32_t x587 = 1U;
volatile uint32_t x597 = 5U;
int8_t x601 = INT8_MIN;
uint8_t x609 = UINT8_MAX;
int64_t t145 = 13553913LL;
uint8_t x613 = 17U;
volatile uint64_t x621 = UINT64_MAX;
uint64_t t148 = 412368200774198LLU;
uint32_t x628 = 63U;
int8_t x632 = -7;
uint64_t x633 = 28057507972LLU;
int16_t x637 = INT16_MIN;
uint8_t x647 = UINT8_MAX;
volatile int64_t t155 = 41512LL;
uint64_t x654 = 2044704594112LLU;
uint32_t x655 = UINT32_MAX;
uint64_t t156 = 1LLU;
int16_t x666 = INT16_MAX;
uint32_t t160 = 6045U;
volatile uint32_t t163 = 13366U;
int64_t t164 = -305570098270865LL;
volatile int64_t x700 = -1LL;
uint8_t x702 = 1U;
static volatile int64_t x708 = -1LL;
int64_t t167 = 25LL;
int64_t x715 = INT64_MIN;
int32_t x716 = -1784;
uint64_t x718 = UINT64_MAX;
int8_t x721 = INT8_MAX;
int32_t x723 = 96963;
volatile int32_t t171 = -42130;
uint64_t x736 = 297478150LLU;
static int64_t x737 = -1LL;
uint16_t x739 = UINT16_MAX;
uint8_t x743 = 3U;
int8_t x744 = INT8_MAX;
int16_t x747 = INT16_MIN;
static volatile int32_t t178 = -4342322;
static int16_t x753 = -2834;
static volatile uint64_t t182 = 2751679207784LLU;
volatile uint32_t x775 = UINT32_MAX;
int64_t t183 = -212937728035419399LL;
static int8_t x779 = 10;
volatile int16_t x784 = -6065;
int16_t x790 = INT16_MIN;
int64_t t187 = -2836862912920843828LL;
int8_t x797 = -32;
int16_t x803 = 5541;
int32_t x804 = -3492;
static volatile int64_t t190 = -298LL;
static uint32_t x809 = UINT32_MAX;
volatile uint32_t t191 = 338U;
volatile uint64_t t192 = 5806571671382928LLU;
int32_t x825 = -1;
int32_t x831 = -314;
int8_t x832 = INT8_MIN;
uint16_t x839 = 9984U;
static int8_t x841 = INT8_MAX;
volatile int64_t t199 = -2329773297030LL;


void f0(void) {
    	volatile int32_t x1 = INT32_MAX;
	int8_t x2 = 3;
	volatile int64_t t0 = -21262LL;

    t0 = (x1^(x2+(x3%x4)));

    if (t0 != -2147482692LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 453LLU;
	int32_t x7 = INT32_MIN;
	uint16_t x8 = 163U;
	uint64_t t1 = 16209848043LLU;

    t1 = (x5^(x6+(x7%x8)));

    if (t1 != 312091394LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	static uint64_t x10 = 22860255450LLU;
	int64_t x11 = 5LL;
	static int8_t x12 = INT8_MIN;
	uint64_t t2 = 212497580917157701LLU;

    t2 = (x9^(x10+(x11%x12)));

    if (t2 != 18446744050849296223LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x14 = 1U;
	uint8_t x15 = UINT8_MAX;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 118362;

    t3 = (x13^(x14+(x15%x16)));

    if (t3 != -257) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 1839089LLU;
	int16_t x18 = INT16_MIN;
	int32_t x19 = INT32_MIN;

    t4 = (x17^(x18+(x19%x20)));

    if (t4 != 18446744071560204273LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x22 = UINT64_MAX;
	static int16_t x23 = -1095;
	int8_t x24 = -1;
	static volatile uint64_t t5 = 481476811022548LLU;

    t5 = (x21^(x22+(x23%x24)));

    if (t5 != 18446744073709549404LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	int16_t x28 = 1862;
	int64_t t6 = -5LL;

    t6 = (x25^(x26+(x27%x28)));

    if (t6 != 9223372036854774956LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	int16_t x30 = 0;
	static int8_t x31 = INT8_MIN;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = 28362LLU;

    t7 = (x29^(x30+(x31%x32)));

    if (t7 != 18446744069414584447LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 0U;
	volatile int8_t x34 = -10;
	uint64_t x35 = UINT64_MAX;
	volatile int64_t x36 = -4LL;
	uint64_t t8 = 139909404275084182LLU;

    t8 = (x33^(x34+(x35%x36)));

    if (t8 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	int16_t x38 = INT16_MAX;
	int32_t x39 = -418;
	int64_t x40 = INT64_MIN;
	volatile int64_t t9 = 3748100LL;

    t9 = (x37^(x38+(x39%x40)));

    if (t9 != -32350LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x41 = UINT8_MAX;
	int16_t x42 = INT16_MAX;
	volatile int32_t x44 = 136246142;
	volatile int32_t t10 = 2;

    t10 = (x41^(x42+(x43%x44)));

    if (t10 != 32513) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	uint8_t x46 = 21U;
	static uint32_t x47 = 1U;
	volatile int32_t x48 = INT32_MAX;
	volatile int64_t t11 = -451473LL;

    t11 = (x45^(x46+(x47%x48)));

    if (t11 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MAX;
	int64_t x50 = 13565304671945695LL;
	uint16_t x51 = UINT16_MAX;
	static uint32_t x52 = UINT32_MAX;
	int64_t t12 = -1488338080065047LL;

    t12 = (x49^(x50+(x51%x52)));

    if (t12 != 9209806732182764577LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x54 = 30U;
	int8_t x55 = INT8_MAX;
	uint32_t x56 = 11102476U;
	static volatile uint32_t t13 = 1U;

    t13 = (x53^(x54+(x55%x56)));

    if (t13 != 4294967069U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = 1705;
	static int32_t x58 = INT32_MIN;
	int32_t x59 = -1;
	uint64_t x60 = 2135167973620LLU;
	uint64_t t14 = 12LLU;

    t14 = (x57^(x58+(x59%x60)));

    if (t14 != 931663575042LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	volatile int8_t x62 = 6;
	uint8_t x63 = 96U;
	static volatile uint16_t x64 = UINT16_MAX;
	int32_t t15 = -5720;

    t15 = (x61^(x62+(x63%x64)));

    if (t15 != -32666) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x69 = 1063249563U;
	static int64_t x71 = -2597442LL;
	int8_t x72 = -1;
	volatile int64_t t16 = 4153953013252645LL;

    t16 = (x69^(x70+(x71%x72)));

    if (t16 != 874110869LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = 0;
	uint64_t x74 = 50629647654187071LLU;
	int64_t x75 = -1LL;
	int64_t x76 = INT64_MIN;
	uint64_t t17 = 2928950LLU;

    t17 = (x73^(x74+(x75%x76)));

    if (t17 != 50629647654187070LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x81 = 765114915765102988LLU;
	int8_t x82 = INT8_MIN;
	int32_t x83 = 1;
	static int32_t x84 = -802215961;
	volatile uint64_t t18 = 23652699540501LLU;

    t18 = (x81^(x82+(x83%x84)));

    if (t18 != 17681629157944448525LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x85 = -1;
	volatile uint8_t x86 = 3U;
	int64_t x87 = INT64_MIN;
	uint16_t x88 = UINT16_MAX;
	int64_t t19 = 61LL;

    t19 = (x85^(x86+(x87%x88)));

    if (t19 != 32764LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x90 = 11;
	volatile int32_t x92 = INT32_MAX;

    t20 = (x89^(x90+(x91%x92)));

    if (t20 != 4294967283U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x94 = UINT16_MAX;
	int8_t x95 = -42;
	volatile uint8_t x96 = 6U;
	int64_t t21 = 114LL;

    t21 = (x93^(x94+(x95%x96)));

    if (t21 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = 2614721LL;
	uint8_t x98 = UINT8_MAX;
	volatile int32_t x99 = 22621;
	int32_t x100 = -1;
	int64_t t22 = 1790443LL;

    t22 = (x97^(x98+(x99%x100)));

    if (t22 != 2614590LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x101 = 1U;
	uint32_t x102 = 327090U;
	uint8_t x103 = UINT8_MAX;
	static int32_t x104 = 512;
	uint32_t t23 = 14523U;

    t23 = (x101^(x102+(x103%x104)));

    if (t23 != 327344U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x105 = 5944;
	static volatile uint64_t x106 = UINT64_MAX;
	volatile int8_t x107 = -6;
	static int32_t x108 = -52158;
	static uint64_t t24 = 101926746LLU;

    t24 = (x105^(x106+(x107%x108)));

    if (t24 != 18446744073709545665LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x109 = INT8_MIN;
	int16_t x110 = -485;
	uint32_t t25 = 4U;

    t25 = (x109^(x110+(x111%x112)));

    if (t25 != 4294955959U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x114 = 49U;
	volatile int16_t x115 = INT16_MIN;
	static int16_t x116 = -1;
	volatile int32_t t26 = -864398558;

    t26 = (x113^(x114+(x115%x116)));

    if (t26 != 78) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = -1;
	volatile int32_t x118 = INT32_MAX;
	static int16_t x119 = -1;
	static int8_t x120 = -2;
	static int32_t t27 = 81244;

    t27 = (x117^(x118+(x119%x120)));

    if (t27 != -2147483647) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x121 = -1;
	int8_t x122 = -1;
	static uint16_t x123 = UINT16_MAX;
	int32_t x124 = INT32_MIN;
	int32_t t28 = -103026607;

    t28 = (x121^(x122+(x123%x124)));

    if (t28 != -65535) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x126 = UINT16_MAX;
	static uint32_t x127 = 22038U;
	int8_t x128 = INT8_MAX;
	uint32_t t29 = 19856U;

    t29 = (x125^(x126+(x127%x128)));

    if (t29 != 4294901693U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x129 = UINT16_MAX;
	int64_t x130 = -5403706734119760LL;
	int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MIN;

    t30 = (x129^(x130+(x131%x132)));

    if (t30 != -5403706734113969LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x133 = 7178U;
	volatile int16_t x135 = INT16_MIN;
	int64_t x136 = INT64_MIN;
	int64_t t31 = -12895670442248594LL;

    t31 = (x133^(x134+(x135%x136)));

    if (t31 != -40054LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x137 = INT32_MAX;
	int32_t x139 = INT32_MAX;
	volatile int64_t x140 = 100LL;
	int64_t t32 = 7429838201272172LL;

    t32 = (x137^(x138+(x139%x140)));

    if (t32 != 4294967249LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x141 = UINT16_MAX;
	int16_t x143 = INT16_MIN;
	static int16_t x144 = INT16_MIN;
	static volatile int32_t t33 = 181;

    t33 = (x141^(x142+(x143%x144)));

    if (t33 != 32768) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x146 = 62U;
	int8_t x148 = INT8_MIN;
	volatile uint32_t t34 = 29184U;

    t34 = (x145^(x146+(x147%x148)));

    if (t34 != 84U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x150 = 36U;
	int32_t x151 = INT32_MAX;
	int32_t t35 = -10453104;

    t35 = (x149^(x150+(x151%x152)));

    if (t35 != 164) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x153 = -48;
	int32_t x154 = INT32_MIN;
	static int64_t x155 = -1LL;
	int8_t x156 = -1;
	static int64_t t36 = 1792031262339LL;

    t36 = (x153^(x154+(x155%x156)));

    if (t36 != 2147483600LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x158 = UINT32_MAX;
	uint8_t x159 = 39U;
	volatile uint32_t t37 = 66U;

    t37 = (x157^(x158+(x159%x160)));

    if (t37 != 4294934566U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x162 = -1LL;
	uint32_t x164 = UINT32_MAX;
	int64_t t38 = -920LL;

    t38 = (x161^(x162+(x163%x164)));

    if (t38 != -28381777LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x166 = INT64_MIN;
	static volatile int32_t x167 = 187113002;
	int64_t t39 = -307773083LL;

    t39 = (x165^(x166+(x167%x168)));

    if (t39 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x169 = -1;
	int8_t x172 = INT8_MAX;
	volatile int32_t t40 = -681;

    t40 = (x169^(x170+(x171%x172)));

    if (t40 != 1736065) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x174 = 1U;
	int32_t x176 = -5210;
	static int32_t t41 = -468783895;

    t41 = (x173^(x174+(x175%x176)));

    if (t41 != 4958) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x177 = INT32_MIN;
	int32_t x178 = INT32_MIN;
	int64_t x179 = INT64_MAX;
	volatile uint32_t x180 = 5U;

    t42 = (x177^(x178+(x179%x180)));

    if (t42 != 2LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x182 = UINT8_MAX;
	int8_t x184 = INT8_MIN;

    t43 = (x181^(x182+(x183%x184)));

    if (t43 != -256LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x185 = 23U;
	uint16_t x186 = 9U;
	int16_t x187 = -1;
	static volatile int64_t x188 = -1LL;
	static int64_t t44 = -911527314909811LL;

    t44 = (x185^(x186+(x187%x188)));

    if (t44 != 30LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x190 = INT64_MAX;
	int8_t x191 = INT8_MAX;
	int32_t x192 = -1;
	static int64_t t45 = 0LL;

    t45 = (x189^(x190+(x191%x192)));

    if (t45 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x193 = 1;
	volatile uint8_t x194 = 3U;
	static int16_t x195 = INT16_MAX;

    t46 = (x193^(x194+(x195%x196)));

    if (t46 != 131) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x197 = -94LL;
	uint16_t x198 = 14530U;
	volatile int8_t x199 = -1;
	uint16_t x200 = 714U;

    t47 = (x197^(x198+(x199%x200)));

    if (t47 != -14493LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x202 = UINT8_MAX;
	static uint16_t x203 = UINT16_MAX;
	volatile int8_t x204 = 3;
	static int64_t t48 = 363459409LL;

    t48 = (x201^(x202+(x203%x204)));

    if (t48 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = -1;
	int8_t x207 = 33;
	volatile int32_t x208 = -1;
	int64_t t49 = -32260553517380LL;

    t49 = (x205^(x206+(x207%x208)));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x209 = 1U;
	uint64_t x210 = 10542LLU;
	int8_t x211 = INT8_MIN;
	int8_t x212 = INT8_MIN;
	static volatile uint64_t t50 = 124LLU;

    t50 = (x209^(x210+(x211%x212)));

    if (t50 != 10543LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x213 = UINT32_MAX;
	int8_t x215 = INT8_MAX;
	static volatile int16_t x216 = -411;
	int64_t t51 = -21229479096020LL;

    t51 = (x213^(x214+(x215%x216)));

    if (t51 != 2393409462900605691LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x217 = 147U;
	uint16_t x218 = UINT16_MAX;
	static uint16_t x219 = 5U;
	static uint8_t x220 = UINT8_MAX;
	volatile int32_t t52 = 6;

    t52 = (x217^(x218+(x219%x220)));

    if (t52 != 65687) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x225 = INT16_MAX;
	static uint64_t x226 = 49727851949780797LLU;
	int16_t x227 = INT16_MIN;
	uint64_t t53 = 23930635979424048LLU;

    t53 = (x225^(x226+(x227%x228)));

    if (t53 != 49727851949723842LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x229 = -1;
	int8_t x230 = INT8_MIN;
	static uint64_t x231 = UINT64_MAX;
	int64_t x232 = INT64_MAX;

    t54 = (x229^(x230+(x231%x232)));

    if (t54 != 126LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x233 = INT64_MIN;
	uint16_t x235 = UINT16_MAX;
	int16_t x236 = INT16_MIN;
	volatile int64_t t55 = -39731445008639499LL;

    t55 = (x233^(x234+(x235%x236)));

    if (t55 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x237 = -89;
	uint32_t x238 = 113U;
	volatile int32_t x239 = INT32_MAX;
	int64_t x240 = 7015557779LL;
	volatile int64_t t56 = 14003LL;

    t56 = (x237^(x238+(x239%x240)));

    if (t56 != -2147483689LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint16_t x241 = UINT16_MAX;
	int32_t x242 = -41048382;
	uint8_t x243 = 13U;
	int32_t t57 = 16035890;

    t57 = (x241^(x242+(x243%x244)));

    if (t57 != -41068232) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x245 = UINT8_MAX;
	uint32_t x246 = UINT32_MAX;
	volatile int8_t x247 = INT8_MIN;
	int8_t x248 = -4;

    t58 = (x245^(x246+(x247%x248)));

    if (t58 != 4294967040U) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x249 = UINT8_MAX;
	int16_t x250 = -1;
	uint16_t x251 = 6U;
	static uint32_t x252 = 309513556U;
	volatile uint32_t t59 = 503U;

    t59 = (x249^(x250+(x251%x252)));

    if (t59 != 250U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x253 = -1;
	int8_t x254 = 2;
	int64_t x255 = INT64_MAX;

    t60 = (x253^(x254+(x255%x256)));

    if (t60 != -130LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x257 = -90298632355LL;
	uint32_t x259 = UINT32_MAX;
	int16_t x260 = INT16_MAX;

    t61 = (x257^(x258+(x259%x260)));

    if (t61 != -92446116002LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x263 = -1;
	volatile int32_t x264 = -456760193;
	volatile uint32_t t62 = 0U;

    t62 = (x261^(x262+(x263%x264)));

    if (t62 != 128U) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x265 = INT32_MAX;
	volatile int16_t x266 = 1983;
	int32_t x267 = INT32_MIN;
	volatile int32_t x268 = -1;
	int32_t t63 = -3;

    t63 = (x265^(x266+(x267%x268)));

    if (t63 != 2147481664) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x269 = -1LL;
	int8_t x270 = -1;
	static int64_t x271 = INT64_MIN;
	int8_t x272 = 6;
	static volatile int64_t t64 = -115330223725687LL;

    t64 = (x269^(x270+(x271%x272)));

    if (t64 != 2LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x274 = 0U;
	int64_t x275 = 236433LL;
	uint8_t x276 = UINT8_MAX;
	int64_t t65 = -190284LL;

    t65 = (x273^(x274+(x275%x276)));

    if (t65 != 32719LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x277 = 819LLU;
	int16_t x278 = -522;
	uint64_t t66 = 4567863138023526LLU;

    t66 = (x277^(x278+(x279%x280)));

    if (t66 != 18446744073709551302LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x281 = -3LL;
	uint64_t x283 = 3082870494999273437LLU;
	int64_t x284 = INT64_MAX;
	volatile uint64_t t67 = 105654944LLU;

    t67 = (x281^(x282+(x283%x284)));

    if (t67 != 15363873578710278155LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x285 = 16416732U;
	static int16_t x286 = INT16_MIN;
	int8_t x287 = INT8_MIN;
	static int32_t x288 = INT32_MAX;
	uint32_t t68 = 1164125U;

    t68 = (x285^(x286+(x287%x288)));

    if (t68 != 4278517852U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x289 = INT64_MIN;
	int16_t x290 = INT16_MAX;
	static int32_t x291 = INT32_MAX;
	int32_t x292 = 14593659;
	int64_t t69 = -147372241885241195LL;

    t69 = (x289^(x290+(x291%x292)));

    if (t69 != -9223372036852527267LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x293 = INT32_MIN;
	int16_t x294 = INT16_MAX;
	static uint32_t x295 = 1059971899U;

    t70 = (x293^(x294+(x295%x296)));

    if (t70 != 2147516506U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x301 = INT8_MIN;
	volatile int64_t x303 = 17414791627667668LL;
	static uint64_t x304 = UINT64_MAX;
	volatile uint64_t t71 = 167041220LLU;

    t71 = (x301^(x302+(x303%x304)));

    if (t71 != 18429329282081883731LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x310 = -1LL;
	int8_t x311 = INT8_MIN;
	int8_t x312 = INT8_MAX;
	volatile int64_t t72 = 852241650148LL;

    t72 = (x309^(x310+(x311%x312)));

    if (t72 != -405631622LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x313 = -1;
	volatile int64_t x315 = 248LL;
	int32_t x316 = -9240;
	int64_t t73 = 2466LL;

    t73 = (x313^(x314+(x315%x316)));

    if (t73 != -728898003LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x317 = UINT16_MAX;
	volatile uint64_t x319 = 58736684374LLU;
	int64_t x320 = INT64_MAX;
	volatile uint64_t t74 = 182172620940LLU;

    t74 = (x317^(x318+(x319%x320)));

    if (t74 != 58736660906LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x321 = UINT32_MAX;
	static volatile uint32_t x322 = UINT32_MAX;

    t75 = (x321^(x322+(x323%x324)));

    if (t75 != 32768U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x325 = -13;
	int8_t x326 = INT8_MAX;
	int64_t x327 = INT64_MAX;
	int16_t x328 = -1;
	static volatile int64_t t76 = 4284240554314584197LL;

    t76 = (x325^(x326+(x327%x328)));

    if (t76 != -116LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x329 = UINT32_MAX;
	static uint32_t x330 = UINT32_MAX;
	static int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MIN;
	uint32_t t77 = 1481798841U;

    t77 = (x329^(x330+(x331%x332)));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x333 = INT64_MIN;
	int64_t x335 = 0LL;
	int8_t x336 = INT8_MIN;
	static volatile int64_t t78 = -122119006LL;

    t78 = (x333^(x334+(x335%x336)));

    if (t78 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x337 = UINT32_MAX;
	int32_t x338 = -1;
	uint8_t x340 = 5U;
	int64_t t79 = 124884629675LL;

    t79 = (x337^(x338+(x339%x340)));

    if (t79 != 4294967295LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x341 = INT32_MAX;
	int8_t x342 = 1;
	static int32_t x343 = -1;
	volatile int32_t t80 = INT32_MAX;

    t80 = (x341^(x342+(x343%x344)));

    if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int32_t x345 = 1;
	uint16_t x346 = UINT16_MAX;
	static volatile int64_t x347 = -1LL;
	int64_t t81 = -3134LL;

    t81 = (x345^(x346+(x347%x348)));

    if (t81 != 65535LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x349 = INT16_MAX;
	int32_t x351 = -1;
	volatile uint32_t t82 = 169U;

    t82 = (x349^(x350+(x351%x352)));

    if (t82 != 2147516415U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x353 = UINT16_MAX;
	int16_t x354 = -271;
	uint32_t x355 = UINT32_MAX;
	volatile uint8_t x356 = 8U;
	static uint32_t t83 = 19541669U;

    t83 = (x353^(x354+(x355%x356)));

    if (t83 != 4294902023U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x358 = -1;
	int8_t x359 = -1;
	int64_t x360 = 909959LL;
	volatile int64_t t84 = 1918LL;

    t84 = (x357^(x358+(x359%x360)));

    if (t84 != -4LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x361 = INT64_MIN;
	uint16_t x362 = 28U;
	uint16_t x363 = 3U;
	uint64_t x364 = 9802152LLU;
	uint64_t t85 = 156102196192508144LLU;

    t85 = (x361^(x362+(x363%x364)));

    if (t85 != 9223372036854775839LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x365 = 0U;
	uint8_t x366 = 22U;
	int64_t x367 = 63267033LL;
	uint16_t x368 = UINT16_MAX;
	volatile int64_t t86 = -23LL;

    t86 = (x365^(x366+(x367%x368)));

    if (t86 != 25780LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x369 = 757U;
	int64_t x370 = -1LL;
	volatile uint32_t x371 = UINT32_MAX;
	int64_t t87 = 1872LL;

    t87 = (x369^(x370+(x371%x372)));

    if (t87 != -758LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x373 = 12788U;
	static int16_t x374 = -1250;
	uint64_t x375 = 9360239LLU;
	int64_t x376 = INT64_MIN;
	static volatile uint64_t t88 = 43902002LLU;

    t88 = (x373^(x374+(x375%x376)));

    if (t88 != 9371513LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x377 = UINT16_MAX;
	uint32_t x378 = UINT32_MAX;
	volatile uint8_t x379 = 18U;
	uint32_t t89 = 37692U;

    t89 = (x377^(x378+(x379%x380)));

    if (t89 != 65518U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x382 = -1;
	int16_t x383 = 1;
	int64_t x384 = INT64_MAX;
	static uint64_t t90 = 884790123581302LLU;

    t90 = (x381^(x382+(x383%x384)));

    if (t90 != 2367821LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x385 = -1LL;
	uint16_t x386 = UINT16_MAX;
	volatile int32_t x387 = -23;
	int64_t t91 = -4299485160558622LL;

    t91 = (x385^(x386+(x387%x388)));

    if (t91 != -65513LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x392 = 30342LL;
	int64_t t92 = -53098256831432LL;

    t92 = (x389^(x390+(x391%x392)));

    if (t92 != -80315LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x393 = -1;
	volatile uint64_t x394 = 93422356350LLU;
	int32_t x395 = INT32_MIN;
	static uint16_t x396 = UINT16_MAX;
	static volatile uint64_t t93 = 102960LLU;

    t93 = (x393^(x394+(x395%x396)));

    if (t93 != 18446743980287228033LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x401 = -1;
	uint16_t x402 = 43U;
	uint16_t x403 = 12U;
	int32_t x404 = INT32_MIN;
	int32_t t94 = 309473795;

    t94 = (x401^(x402+(x403%x404)));

    if (t94 != -56) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x405 = INT16_MAX;
	int16_t x407 = INT16_MIN;
	uint16_t x408 = 148U;
	volatile int32_t t95 = 94016894;

    t95 = (x405^(x406+(x407%x408)));

    if (t95 != 2147450940) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x409 = -1;
	static uint8_t x410 = 25U;
	int16_t x411 = INT16_MIN;
	volatile int32_t x412 = INT32_MIN;
	int32_t t96 = -1808892;

    t96 = (x409^(x410+(x411%x412)));

    if (t96 != 32742) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x414 = INT64_MIN;
	int32_t x415 = INT32_MAX;
	volatile int64_t x416 = INT64_MIN;
	int64_t t97 = 2000457857024029LL;

    t97 = (x413^(x414+(x415%x416)));

    if (t97 != 9223372034707324927LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x417 = -1LL;
	int16_t x418 = -1;
	uint32_t x419 = UINT32_MAX;
	static int16_t x420 = -3;
	int64_t t98 = -3357177LL;

    t98 = (x417^(x418+(x419%x420)));

    if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x421 = INT64_MIN;
	int16_t x422 = -1;
	volatile uint8_t x423 = UINT8_MAX;
	volatile uint64_t x424 = UINT64_MAX;
	static volatile uint64_t t99 = 5547751585LLU;

    t99 = (x421^(x422+(x423%x424)));

    if (t99 != 9223372036854776062LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x425 = 30958U;
	volatile int16_t x426 = INT16_MIN;
	volatile int16_t x427 = -1;
	volatile int32_t t100 = 0;

    t100 = (x425^(x426+(x427%x428)));

    if (t100 != -63727) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x429 = -1;
	int8_t x430 = INT8_MIN;
	static int64_t x432 = INT64_MIN;
	int64_t t101 = 2692407279037229607LL;

    t101 = (x429^(x430+(x431%x432)));

    if (t101 != 112LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x433 = INT16_MIN;
	uint16_t x434 = 22149U;
	int16_t x435 = -1;
	uint16_t x436 = 1785U;
	static volatile int32_t t102 = 437528;

    t102 = (x433^(x434+(x435%x436)));

    if (t102 != -10620) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x437 = 0;
	static int32_t x438 = -11790;
	int8_t x439 = INT8_MAX;
	static int8_t x440 = -1;
	static int32_t t103 = 890046;

    t103 = (x437^(x438+(x439%x440)));

    if (t103 != -11790) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x441 = -17;
	int16_t x443 = -1;
	int32_t x444 = INT32_MIN;
	int32_t t104 = -289;

    t104 = (x441^(x442+(x443%x444)));

    if (t104 != 1379) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x445 = INT32_MIN;
	int16_t x446 = INT16_MIN;
	static uint8_t x447 = UINT8_MAX;
	int32_t t105 = 8525;

    t105 = (x445^(x446+(x447%x448)));

    if (t105 != 2147451135) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x449 = -3857;
	int16_t x450 = INT16_MIN;
	volatile int16_t x451 = INT16_MAX;
	volatile int8_t x452 = -1;

    t106 = (x449^(x450+(x451%x452)));

    if (t106 != 28911) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x453 = INT32_MAX;
	volatile uint64_t x454 = 1905863846741407653LLU;
	int64_t x455 = -2033175825728LL;
	uint64_t t107 = 5906022854596743LLU;

    t107 = (x453^(x454+(x455%x456)));

    if (t107 != 1905863844932163916LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x457 = -1;
	static int32_t x459 = -146014;
	uint64_t x460 = 34LLU;

    t108 = (x457^(x458+(x459%x460)));

    if (t108 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x462 = UINT64_MAX;
	volatile int32_t x463 = 27;
	int8_t x464 = -31;
	volatile uint64_t t109 = 1177867347643927LLU;

    t109 = (x461^(x462+(x463%x464)));

    if (t109 != 328189477LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x465 = -1;
	volatile uint64_t x466 = 7160LLU;
	uint16_t x467 = 1798U;
	int64_t x468 = -1LL;
	volatile uint64_t t110 = 1280279302492207302LLU;

    t110 = (x465^(x466+(x467%x468)));

    if (t110 != 18446744073709544455LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x469 = 2;
	uint32_t x470 = 697U;
	int16_t x471 = -594;
	int64_t x472 = INT64_MIN;
	static volatile int64_t t111 = -8118269460157LL;

    t111 = (x469^(x470+(x471%x472)));

    if (t111 != 101LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x474 = 3U;
	int8_t x475 = 1;
	uint64_t x476 = UINT64_MAX;

    t112 = (x473^(x474+(x475%x476)));

    if (t112 != 123LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x477 = 19;
	int64_t x478 = 5782LL;
	volatile uint64_t x479 = UINT64_MAX;
	uint32_t x480 = 420611U;
	static uint64_t t113 = 330701LLU;

    t113 = (x477^(x478+(x479%x480)));

    if (t113 != 425470LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x482 = 84672016130861965LL;
	int16_t x483 = -1;
	uint16_t x484 = UINT16_MAX;
	volatile int64_t t114 = 2115455825LL;

    t114 = (x481^(x482+(x483%x484)));

    if (t114 != 84672016130854271LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x485 = -8136145;
	int32_t x486 = INT32_MAX;
	int64_t t115 = 79LL;

    t115 = (x485^(x486+(x487%x488)));

    if (t115 != -2032798996LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x489 = 442U;
	int16_t x490 = INT16_MIN;
	int8_t x491 = INT8_MIN;
	static uint16_t x492 = UINT16_MAX;
	uint32_t t116 = 2U;

    t116 = (x489^(x490+(x491%x492)));

    if (t116 != 4294934074U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x493 = -2;
	uint16_t x494 = 24886U;
	static int32_t t117 = -5713574;

    t117 = (x493^(x494+(x495%x496)));

    if (t117 != -25014) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x497 = 356U;
	volatile int16_t x499 = -6;
	uint16_t x500 = 3U;
	int32_t t118 = -7174;

    t118 = (x497^(x498+(x499%x500)));

    if (t118 != -32412) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x501 = INT32_MIN;
	volatile uint8_t x502 = UINT8_MAX;
	int32_t x503 = INT32_MIN;
	int16_t x504 = INT16_MIN;

    t119 = (x501^(x502+(x503%x504)));

    if (t119 != -2147483393) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x505 = 53U;
	static int16_t x506 = -1;
	int16_t x507 = INT16_MAX;
	static int64_t t120 = 1849892622266LL;

    t120 = (x505^(x506+(x507%x508)));

    if (t120 != 32715LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x509 = -3149;
	uint64_t x511 = UINT64_MAX;
	int64_t x512 = -1LL;
	static volatile uint64_t t121 = 35780683LLU;

    t121 = (x509^(x510+(x511%x512)));

    if (t121 != 18446744073709548497LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x513 = 284LLU;
	static volatile uint8_t x514 = 24U;
	static uint32_t x515 = 820994269U;
	volatile int64_t x516 = INT64_MIN;
	volatile uint64_t t122 = 69406350596LLU;

    t122 = (x513^(x514+(x515%x516)));

    if (t122 != 820994537LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x517 = UINT64_MAX;
	volatile int8_t x518 = -1;
	static uint16_t x519 = 5767U;
	volatile int32_t x520 = INT32_MIN;

    t123 = (x517^(x518+(x519%x520)));

    if (t123 != 18446744073709545849LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x526 = UINT8_MAX;
	int8_t x527 = -1;
	int16_t x528 = INT16_MAX;
	uint64_t t124 = 245324312749LLU;

    t124 = (x525^(x526+(x527%x528)));

    if (t124 != 64517LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x529 = -12;
	volatile uint32_t x530 = UINT32_MAX;
	int16_t x531 = -914;
	int8_t x532 = -9;
	uint32_t t125 = 5728U;

    t125 = (x529^(x530+(x531%x532)));

    if (t125 != 14U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x534 = 32298042;
	uint64_t x535 = 106952765358401LLU;
	int32_t x536 = INT32_MIN;

    t126 = (x533^(x534+(x535%x536)));

    if (t126 != 106952797656441LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x537 = 109U;
	int64_t x538 = -222194802438100692LL;
	int32_t x540 = INT32_MIN;
	static int64_t t127 = 2875048328LL;

    t127 = (x537^(x538+(x539%x540)));

    if (t127 != -222194802425453606LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x541 = 0U;
	int16_t x543 = INT16_MIN;
	int8_t x544 = -1;
	uint32_t t128 = UINT32_MAX;

    t128 = (x541^(x542+(x543%x544)));

    if (t128 != UINT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x545 = -1;
	static int32_t x547 = -10699827;
	uint32_t t129 = 18932U;

    t129 = (x545^(x546+(x547%x548)));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x549 = -46571310;
	static int8_t x551 = -1;
	uint16_t x552 = UINT16_MAX;
	volatile int64_t t130 = -173999509267827184LL;

    t130 = (x549^(x550+(x551%x552)));

    if (t130 != -46571317LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x553 = INT64_MIN;
	int8_t x555 = INT8_MAX;
	int32_t x556 = INT32_MIN;
	volatile uint64_t t131 = 580135011LLU;

    t131 = (x553^(x554+(x555%x556)));

    if (t131 != 9223372036854783934LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x558 = 46540708U;
	static uint64_t x559 = 87LLU;
	int16_t x560 = -1;

    t132 = (x557^(x558+(x559%x560)));

    if (t132 != 46540795LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x563 = INT32_MAX;
	int16_t x564 = -1;
	volatile int32_t t133 = 238;

    t133 = (x561^(x562+(x563%x564)));

    if (t133 != -32768) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x565 = INT32_MAX;
	static volatile int32_t x566 = INT32_MIN;
	static uint32_t x567 = 254104993U;
	int16_t x568 = -1;
	uint32_t t134 = 75696005U;

    t134 = (x565^(x566+(x567%x568)));

    if (t134 != 4040862302U) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x569 = INT8_MIN;
	int32_t x570 = INT32_MIN;
	int8_t x572 = -1;
	static int64_t t135 = -929325479LL;

    t135 = (x569^(x570+(x571%x572)));

    if (t135 != 2147483520LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x573 = -253123682983LL;
	int64_t x574 = -1LL;
	uint32_t x576 = 4697920U;

    t136 = (x573^(x574+(x575%x576)));

    if (t136 != -253123683169LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x577 = 63806019U;
	volatile int16_t x578 = -8309;
	volatile int32_t x579 = 9882;
	uint64_t x580 = 497915488418LLU;
	volatile uint64_t t137 = 106773LLU;

    t137 = (x577^(x578+(x579%x580)));

    if (t137 != 63806566LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x581 = INT8_MAX;
	static uint16_t x582 = 372U;
	int32_t x584 = -1;
	int32_t t138 = 69068;

    t138 = (x581^(x582+(x583%x584)));

    if (t138 != 267) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x585 = -29;
	int16_t x586 = INT16_MIN;
	int8_t x588 = INT8_MIN;
	uint32_t t139 = 256108U;

    t139 = (x585^(x586+(x587%x588)));

    if (t139 != 32738U) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x589 = INT32_MIN;
	volatile int8_t x590 = -1;
	uint8_t x591 = UINT8_MAX;
	int8_t x592 = INT8_MIN;
	static int32_t t140 = 488768638;

    t140 = (x589^(x590+(x591%x592)));

    if (t140 != -2147483522) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x593 = INT64_MIN;
	static int16_t x594 = 206;
	static int16_t x595 = -1;
	int32_t x596 = INT32_MAX;
	int64_t t141 = -1704501LL;

    t141 = (x593^(x594+(x595%x596)));

    if (t141 != -9223372036854775603LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x598 = UINT16_MAX;
	int8_t x599 = 0;
	int32_t x600 = INT32_MIN;
	volatile uint32_t t142 = 0U;

    t142 = (x597^(x598+(x599%x600)));

    if (t142 != 65530U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x602 = INT8_MIN;
	static int32_t x603 = -1;
	volatile int8_t x604 = 1;
	static int32_t t143 = 50;

    t143 = (x601^(x602+(x603%x604)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x605 = INT64_MIN;
	int32_t x606 = INT32_MIN;
	volatile int64_t x607 = INT64_MAX;
	int16_t x608 = INT16_MAX;
	int64_t t144 = -113263508557577146LL;

    t144 = (x605^(x606+(x607%x608)));

    if (t144 != 9223372034707292167LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x610 = INT64_MIN;
	static uint8_t x611 = 13U;
	int16_t x612 = INT16_MIN;

    t145 = (x609^(x610+(x611%x612)));

    if (t145 != -9223372036854775566LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x614 = INT64_MAX;
	int16_t x615 = INT16_MIN;
	volatile uint8_t x616 = UINT8_MAX;
	static int64_t t146 = -137LL;

    t146 = (x613^(x614+(x615%x616)));

    if (t146 != 9223372036854775662LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x617 = INT32_MAX;
	int8_t x618 = -1;
	int32_t x619 = INT32_MIN;
	int64_t x620 = 10330938196992LL;
	int64_t t147 = 1LL;

    t147 = (x617^(x618+(x619%x620)));

    if (t147 != -4294967296LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x622 = 229LLU;
	int8_t x623 = INT8_MAX;
	int32_t x624 = INT32_MIN;

    t148 = (x621^(x622+(x623%x624)));

    if (t148 != 18446744073709551259LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x625 = UINT8_MAX;
	volatile int8_t x626 = INT8_MIN;
	uint16_t x627 = 369U;
	volatile uint32_t t149 = 52789U;

    t149 = (x625^(x626+(x627%x628)));

    if (t149 != 4294967113U) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x629 = 201057813LLU;
	static volatile int8_t x630 = INT8_MIN;
	int16_t x631 = INT16_MIN;
	static volatile uint64_t t150 = 1197987989521860053LLU;

    t150 = (x629^(x630+(x631%x632)));

    if (t150 != 18446744073508493674LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x634 = UINT8_MAX;
	int16_t x635 = INT16_MIN;
	static int8_t x636 = INT8_MIN;
	static volatile uint64_t t151 = 2LLU;

    t151 = (x633^(x634+(x635%x636)));

    if (t151 != 28057507963LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x638 = INT64_MIN;
	uint8_t x639 = 0U;
	static int16_t x640 = INT16_MAX;
	static int64_t t152 = -3421548789LL;

    t152 = (x637^(x638+(x639%x640)));

    if (t152 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x641 = 71U;
	uint32_t x642 = 33039U;
	int64_t x643 = -2LL;
	static uint8_t x644 = UINT8_MAX;
	static int64_t t153 = -928662LL;

    t153 = (x641^(x642+(x643%x644)));

    if (t153 != 33098LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x645 = UINT8_MAX;
	volatile int64_t x646 = -1LL;
	volatile uint8_t x648 = 29U;
	volatile int64_t t154 = 22748136LL;

    t154 = (x645^(x646+(x647%x648)));

    if (t154 != 233LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x649 = 960;
	int32_t x650 = -1;
	static int32_t x651 = -1;
	int64_t x652 = INT64_MAX;

    t155 = (x649^(x650+(x651%x652)));

    if (t155 != -962LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x653 = -1;
	volatile int8_t x656 = INT8_MAX;

    t156 = (x653^(x654+(x655%x656)));

    if (t156 != 18446742029004957488LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x657 = -1;
	uint8_t x658 = 4U;
	volatile int16_t x659 = INT16_MIN;
	uint32_t x660 = 142229682U;
	uint32_t t157 = 966U;

    t157 = (x657^(x658+(x659%x660)));

    if (t157 != 4266923223U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x661 = INT64_MAX;
	uint32_t x662 = UINT32_MAX;
	int32_t x663 = INT32_MIN;
	int64_t x664 = INT64_MIN;
	static volatile int64_t t158 = 0LL;

    t158 = (x661^(x662+(x663%x664)));

    if (t158 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x665 = -2;
	volatile uint16_t x667 = 508U;
	int16_t x668 = -1;
	int32_t t159 = -4189990;

    t159 = (x665^(x666+(x667%x668)));

    if (t159 != -32767) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x673 = 3053U;
	int8_t x674 = INT8_MAX;
	static uint32_t x675 = 258125561U;
	static int16_t x676 = -11024;

    t160 = (x673^(x674+(x675%x676)));

    if (t160 != 258122901U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x677 = UINT16_MAX;
	volatile int16_t x678 = INT16_MIN;
	uint16_t x679 = 1U;
	volatile int32_t x680 = INT32_MAX;
	int32_t t161 = -239;

    t161 = (x677^(x678+(x679%x680)));

    if (t161 != -32770) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x681 = INT8_MIN;
	static uint16_t x682 = 3892U;
	static uint32_t x683 = 3477U;
	static uint16_t x684 = 95U;
	uint32_t t162 = 8638139U;

    t162 = (x681^(x682+(x683%x684)));

    if (t162 != 4294963437U) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x685 = INT16_MIN;
	uint8_t x686 = UINT8_MAX;
	uint32_t x687 = UINT32_MAX;
	int32_t x688 = INT32_MIN;

    t163 = (x685^(x686+(x687%x688)));

    if (t163 != 2147451134U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x689 = -4;
	int16_t x690 = INT16_MIN;
	static int16_t x691 = INT16_MAX;
	int64_t x692 = 35819737554317LL;

    t164 = (x689^(x690+(x691%x692)));

    if (t164 != 3LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x697 = UINT32_MAX;
	int16_t x698 = INT16_MIN;
	uint32_t x699 = 44U;
	int64_t t165 = -4611990679LL;

    t165 = (x697^(x698+(x699%x700)));

    if (t165 != -4294934529LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x701 = INT32_MIN;
	uint32_t x703 = 144338947U;
	uint64_t x704 = UINT64_MAX;
	uint64_t t166 = 93775LLU;

    t166 = (x701^(x702+(x703%x704)));

    if (t166 != 18446744071706406916LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x705 = 399800U;
	int8_t x706 = -1;
	int32_t x707 = -52;

    t167 = (x705^(x706+(x707%x708)));

    if (t167 != -399801LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x709 = 16730222063862LLU;
	volatile int8_t x710 = -5;
	int64_t x711 = 5086110LL;
	int16_t x712 = -200;
	static volatile uint64_t t168 = 62561231045021LLU;

    t168 = (x709^(x710+(x711%x712)));

    if (t168 != 16730222063775LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x713 = 13334666;
	static int8_t x714 = INT8_MIN;
	int64_t t169 = -4LL;

    t169 = (x713^(x714+(x715%x716)));

    if (t169 != -13334926LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x717 = 2697911836LL;
	int64_t x719 = INT64_MIN;
	int8_t x720 = INT8_MAX;
	static volatile uint64_t t170 = 5900985LLU;

    t170 = (x717^(x718+(x719%x720)));

    if (t170 != 18446744071011639778LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x722 = 924U;
	uint16_t x724 = 1U;

    t171 = (x721^(x722+(x723%x724)));

    if (t171 != 995) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x725 = 9521015156806LLU;
	uint16_t x726 = UINT16_MAX;
	volatile uint32_t x727 = 3U;
	int8_t x728 = INT8_MAX;
	uint64_t t172 = 10338760328661LLU;

    t172 = (x725^(x726+(x727%x728)));

    if (t172 != 9521015091268LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x729 = -1;
	int32_t x730 = INT32_MIN;
	int16_t x731 = INT16_MAX;
	static int64_t x732 = INT64_MAX;
	volatile int64_t t173 = 42082130630LL;

    t173 = (x729^(x730+(x731%x732)));

    if (t173 != 2147450880LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x733 = UINT16_MAX;
	int16_t x734 = INT16_MIN;
	int32_t x735 = INT32_MAX;
	static volatile uint64_t t174 = 2212425110304149707LLU;

    t174 = (x733^(x734+(x735%x736)));

    if (t174 != 65116202LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x738 = UINT8_MAX;
	int8_t x740 = INT8_MIN;
	int64_t t175 = 3948LL;

    t175 = (x737^(x738+(x739%x740)));

    if (t175 != -383LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x741 = -1;
	int16_t x742 = INT16_MAX;
	volatile int32_t t176 = 472128;

    t176 = (x741^(x742+(x743%x744)));

    if (t176 != -32771) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x745 = INT8_MAX;
	uint8_t x746 = 15U;
	int64_t x748 = -138724LL;
	volatile int64_t t177 = -309846826202LL;

    t177 = (x745^(x746+(x747%x748)));

    if (t177 != -32656LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x749 = INT16_MIN;
	uint16_t x750 = 8U;
	static int8_t x751 = 19;
	volatile uint16_t x752 = UINT16_MAX;

    t178 = (x749^(x750+(x751%x752)));

    if (t178 != -32741) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x754 = 29U;
	static int32_t x755 = INT32_MAX;
	static uint16_t x756 = 6U;
	static int32_t t179 = -1;

    t179 = (x753^(x754+(x755%x756)));

    if (t179 != -2832) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x761 = 27U;
	int16_t x762 = INT16_MAX;
	static int8_t x763 = INT8_MIN;
	static uint8_t x764 = UINT8_MAX;
	volatile int32_t t180 = -16056264;

    t180 = (x761^(x762+(x763%x764)));

    if (t180 != 32612) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x765 = -7;
	volatile int64_t x766 = -33543707LL;
	static uint8_t x767 = 58U;
	int64_t x768 = -1LL;
	volatile int64_t t181 = -1791044255963266044LL;

    t181 = (x765^(x766+(x767%x768)));

    if (t181 != 33543708LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x769 = 3;
	static int64_t x770 = INT64_MIN;
	uint64_t x771 = 489070LLU;
	int8_t x772 = -1;

    t182 = (x769^(x770+(x771%x772)));

    if (t182 != 9223372036855264877LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x773 = INT16_MAX;
	int8_t x774 = 3;
	int64_t x776 = INT64_MIN;

    t183 = (x773^(x774+(x775%x776)));

    if (t183 != 4295000061LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x777 = -1;
	uint16_t x778 = 300U;
	int8_t x780 = INT8_MIN;
	volatile int32_t t184 = 610363214;

    t184 = (x777^(x778+(x779%x780)));

    if (t184 != -311) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x781 = INT32_MIN;
	static int8_t x782 = -1;
	int8_t x783 = -1;
	volatile int32_t t185 = -319552794;

    t185 = (x781^(x782+(x783%x784)));

    if (t185 != 2147483646) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x789 = -193LL;
	uint8_t x791 = UINT8_MAX;
	int8_t x792 = -1;
	volatile int64_t t186 = -12018277406811LL;

    t186 = (x789^(x790+(x791%x792)));

    if (t186 != 32575LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x793 = -1LL;
	volatile int32_t x794 = INT32_MIN;
	volatile uint16_t x795 = 1U;
	int32_t x796 = 25;

    t187 = (x793^(x794+(x795%x796)));

    if (t187 != 2147483646LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x798 = -1;
	int64_t x799 = 4701LL;
	volatile int8_t x800 = INT8_MIN;
	int64_t t188 = -6LL;

    t188 = (x797^(x798+(x799%x800)));

    if (t188 != -68LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x801 = -16731801766LL;
	int8_t x802 = INT8_MAX;
	int64_t t189 = -1821349013LL;

    t189 = (x801^(x802+(x803%x804)));

    if (t189 != -16731799590LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x805 = -1;
	int32_t x806 = -462993;
	uint16_t x807 = 1832U;
	int64_t x808 = -1LL;

    t190 = (x805^(x806+(x807%x808)));

    if (t190 != 462992LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x810 = 6166;
	int8_t x811 = -1;
	volatile int16_t x812 = 51;

    t191 = (x809^(x810+(x811%x812)));

    if (t191 != 4294961130U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x813 = -1;
	int64_t x814 = INT64_MIN;
	static int8_t x815 = -1;
	uint64_t x816 = 802268569482LLU;

    t192 = (x813^(x814+(x815%x816)));

    if (t192 != 9223371296210122606LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x817 = -11;
	int32_t x818 = -1;
	static uint32_t x819 = 8U;
	int32_t x820 = -358337000;
	uint32_t t193 = 56551780U;

    t193 = (x817^(x818+(x819%x820)));

    if (t193 != 4294967282U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x821 = -1;
	volatile int32_t x822 = INT32_MAX;
	int8_t x823 = INT8_MIN;
	int8_t x824 = INT8_MIN;
	int32_t t194 = INT32_MIN;

    t194 = (x821^(x822+(x823%x824)));

    if (t194 != INT32_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x826 = UINT16_MAX;
	static int16_t x827 = 5390;
	volatile int32_t x828 = INT32_MIN;
	volatile int32_t t195 = 1007057;

    t195 = (x825^(x826+(x827%x828)));

    if (t195 != -70926) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x829 = -299826;
	volatile uint16_t x830 = 5860U;
	int32_t t196 = 102;

    t196 = (x829^(x830+(x831%x832)));

    if (t196 != -296348) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x833 = 13U;
	static uint8_t x834 = 1U;
	static int64_t x835 = -1LL;
	uint8_t x836 = UINT8_MAX;
	volatile int64_t t197 = -47634739075155677LL;

    t197 = (x833^(x834+(x835%x836)));

    if (t197 != 13LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x837 = INT16_MIN;
	int64_t x838 = -1LL;
	uint16_t x840 = 1509U;
	int64_t t198 = 59LL;

    t198 = (x837^(x838+(x839%x840)));

    if (t198 != -31839LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x842 = 32740361499211861LL;
	static int8_t x843 = -1;
	volatile int8_t x844 = -1;

    t199 = (x841^(x842+(x843%x844)));

    if (t199 != 32740361499211818LL) { NG(); } else { ; }
	
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

