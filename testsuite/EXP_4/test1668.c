
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

int64_t x4 = INT64_MIN;
int16_t x14 = 897;
volatile uint32_t x22 = UINT32_MAX;
static int8_t x27 = INT8_MIN;
int8_t x28 = INT8_MAX;
volatile int64_t t7 = INT64_MAX;
volatile int32_t t9 = -40164226;
uint16_t x47 = 1U;
volatile int16_t x57 = 470;
int32_t t14 = 7;
int8_t x63 = INT8_MIN;
int8_t x65 = 8;
int8_t x71 = 2;
volatile uint64_t x72 = 44944358623359LLU;
int64_t x73 = INT64_MAX;
volatile int64_t t18 = INT64_MAX;
uint16_t x78 = UINT16_MAX;
static int64_t x79 = -229LL;
int8_t x83 = INT8_MIN;
volatile int16_t x88 = 125;
int32_t t21 = -87423123;
volatile int16_t x92 = INT16_MIN;
int8_t x95 = INT8_MIN;
uint32_t x106 = 2004U;
int16_t x108 = -1;
uint32_t x109 = UINT32_MAX;
int64_t x110 = INT64_MIN;
int8_t x115 = INT8_MIN;
static int64_t x116 = INT64_MIN;
volatile int64_t x125 = INT64_MIN;
int64_t t31 = INT64_MIN;
volatile int32_t x147 = INT32_MIN;
volatile int16_t x149 = INT16_MIN;
int8_t x151 = -1;
volatile int8_t x158 = INT8_MIN;
int64_t x159 = -2100284685LL;
volatile uint32_t t39 = UINT32_MAX;
uint32_t x164 = UINT32_MAX;
uint8_t x176 = 23U;
static volatile int16_t x179 = INT16_MIN;
int32_t t44 = 0;
int8_t x182 = INT8_MAX;
int64_t x196 = INT64_MAX;
static int32_t x200 = INT32_MIN;
volatile int32_t t50 = -133936509;
int16_t x206 = -1;
volatile int16_t x207 = -1;
volatile uint32_t t51 = 1846379605U;
int64_t x213 = -373732690LL;
int64_t x214 = INT64_MAX;
volatile int8_t x220 = -1;
static volatile int64_t t54 = INT64_MAX;
static int16_t x221 = INT16_MIN;
int64_t x224 = -1LL;
uint32_t x227 = 2135459U;
static uint32_t t57 = 8465547U;
int8_t x236 = INT8_MAX;
int32_t t58 = 5861531;
int8_t x245 = -35;
int32_t x258 = 98736;
static uint16_t x262 = UINT16_MAX;
int64_t x272 = -10639579LL;
int32_t t67 = INT32_MIN;
int64_t x273 = INT64_MAX;
int8_t x277 = INT8_MIN;
uint32_t x283 = 7U;
int8_t x284 = INT8_MIN;
int16_t x286 = -1;
volatile uint32_t x292 = 1234823U;
int32_t x295 = INT32_MIN;
volatile uint8_t x299 = UINT8_MAX;
volatile int64_t t74 = 6LL;
static int16_t x306 = INT16_MAX;
volatile uint8_t x308 = 31U;
volatile int64_t x312 = 2293658478LL;
volatile int32_t x313 = -54;
static volatile int32_t x314 = -476772205;
volatile uint64_t x316 = 6427LLU;
int8_t x321 = 12;
volatile int16_t x324 = -417;
uint16_t x325 = 1U;
static uint8_t x331 = 12U;
static uint32_t x336 = 21U;
int64_t x339 = -1LL;
int16_t x346 = INT16_MIN;
int64_t x349 = INT64_MAX;
volatile int8_t x353 = INT8_MIN;
volatile int32_t t88 = 93632330;
int32_t x357 = -145068246;
uint16_t x359 = 6U;
static uint64_t x365 = 7276LLU;
uint64_t x382 = 161455773357870LLU;
static int16_t x383 = INT16_MIN;
volatile int64_t x384 = -1LL;
static int32_t t95 = -1011677;
int64_t x393 = INT64_MIN;
int64_t x394 = -247133752043LL;
static int64_t x399 = INT64_MIN;
int32_t t99 = -372045330;
uint32_t t100 = 41704182U;
int32_t t101 = INT32_MAX;
int32_t x412 = INT32_MAX;
int8_t x414 = INT8_MIN;
uint8_t x422 = 2U;
uint16_t x432 = 29542U;
static volatile uint64_t t108 = 28308919425347983LLU;
int32_t x440 = INT32_MAX;
uint16_t x441 = 126U;
static int32_t x444 = -1;
volatile uint16_t x448 = UINT16_MAX;
static int32_t t111 = -876;
uint8_t x454 = 4U;
static int64_t x455 = -1LL;
volatile int32_t x459 = INT32_MIN;
int32_t t115 = -71123080;
int32_t x474 = INT32_MIN;
uint32_t x482 = 44313386U;
volatile int32_t t120 = -8;
int32_t x493 = INT32_MAX;
int8_t x498 = INT8_MAX;
int16_t x499 = -216;
static int32_t x512 = -227700;
static int32_t t127 = 39336;
static int64_t x513 = INT64_MAX;
volatile uint32_t x516 = 331U;
int64_t t128 = INT64_MAX;
int32_t x520 = INT32_MIN;
int8_t x524 = INT8_MIN;
int8_t x531 = -1;
volatile int64_t t132 = INT64_MIN;
static uint16_t x534 = 12360U;
static int32_t x535 = INT32_MIN;
int16_t x539 = INT16_MIN;
int32_t x541 = INT32_MIN;
int16_t x542 = INT16_MAX;
int8_t x550 = -1;
int8_t x553 = INT8_MIN;
int64_t x560 = INT64_MAX;
int16_t x564 = -943;
int32_t t140 = -14514741;
int32_t x576 = -2668363;
volatile uint32_t t143 = UINT32_MAX;
static int16_t x577 = INT16_MAX;
int16_t x578 = INT16_MAX;
static int32_t x579 = INT32_MIN;
static int32_t t144 = -1914;
static int64_t x584 = -3620100779LL;
uint32_t t145 = 41797U;
int64_t x590 = INT64_MAX;
static volatile int64_t x591 = INT64_MIN;
int16_t x595 = INT16_MIN;
volatile uint32_t x599 = 209319U;
uint64_t t149 = 51980962LLU;
int8_t x601 = 29;
volatile int8_t x606 = INT8_MAX;
int32_t t151 = -140956;
int32_t t153 = 1392806;
static uint64_t x617 = 1425237238LLU;
uint64_t x618 = UINT64_MAX;
static volatile int32_t x634 = -1;
volatile int16_t x640 = INT16_MIN;
volatile int32_t t159 = -3298969;
int32_t x644 = -1;
volatile int8_t x656 = INT8_MAX;
volatile uint32_t t164 = 7602U;
uint32_t x668 = UINT32_MAX;
int16_t x676 = INT16_MAX;
volatile int64_t t168 = -1LL;
static uint32_t x680 = UINT32_MAX;
int32_t t169 = INT32_MAX;
int16_t x689 = -1;
uint16_t x691 = UINT16_MAX;
static volatile int32_t t172 = 2461374;
uint32_t x698 = 890925153U;
int32_t x701 = 1456;
int8_t x704 = INT8_MIN;
static volatile int32_t x708 = INT32_MAX;
uint16_t x709 = UINT16_MAX;
volatile int32_t x712 = -2;
int32_t t177 = 1865;
volatile int8_t x715 = 24;
volatile int64_t x716 = INT64_MAX;
int16_t x718 = -1;
int16_t x721 = -1;
int32_t x723 = -1;
int32_t t180 = -42;
uint64_t x731 = 1486LLU;
volatile uint32_t t182 = 4281U;
uint64_t x752 = UINT64_MAX;
volatile uint32_t t187 = 1033110U;
uint32_t t188 = UINT32_MAX;
volatile int64_t x757 = -126666115848721295LL;
int32_t x761 = -1;
uint32_t x779 = 2U;
int8_t x781 = INT8_MIN;
int8_t x783 = INT8_MIN;
int8_t x785 = -1;
int32_t x794 = -1;


void f0(void) {
    	uint32_t x1 = 21U;
	int32_t x2 = INT32_MAX;
	volatile int64_t x3 = INT64_MIN;
	uint32_t t0 = 56U;

    t0 = (x1-(x2==(x3>x4)));

    if (t0 != 21U) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	int16_t x6 = INT16_MIN;
	uint8_t x7 = 15U;
	volatile int64_t x8 = INT64_MIN;
	static volatile int64_t t1 = INT64_MAX;

    t1 = (x5-(x6==(x7>x8)));

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = 1U;
	static uint64_t x10 = UINT64_MAX;
	int8_t x11 = INT8_MAX;
	int8_t x12 = 18;
	static int32_t t2 = 2;

    t2 = (x9-(x10==(x11>x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 202491587205618LLU;
	int32_t x15 = 139345;
	int64_t x16 = -1LL;
	static uint64_t t3 = 395421144394040095LLU;

    t3 = (x13-(x14==(x15>x16)));

    if (t3 != 202491587205618LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	int16_t x18 = -1;
	int64_t x19 = 14483306120739LL;
	volatile int16_t x20 = INT16_MIN;
	int32_t t4 = -237100;

    t4 = (x17-(x18==(x19>x20)));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = INT8_MIN;
	int8_t x23 = 1;
	static volatile uint64_t x24 = 22556839703268LLU;
	int32_t t5 = 184228796;

    t5 = (x21-(x22==(x23>x24)));

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = -1;
	int16_t x26 = INT16_MIN;
	int32_t t6 = 2783052;

    t6 = (x25-(x26==(x27>x28)));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MAX;
	uint64_t x30 = UINT64_MAX;
	uint16_t x31 = 1U;
	int64_t x32 = INT64_MIN;

    t7 = (x29-(x30==(x31>x32)));

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = INT32_MAX;
	static int32_t x34 = -1;
	uint64_t x35 = 16668631782902464LLU;
	int64_t x36 = INT64_MIN;
	volatile int32_t t8 = INT32_MAX;

    t8 = (x33-(x34==(x35>x36)));

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	volatile int16_t x38 = 3782;
	int16_t x39 = 4327;
	static uint64_t x40 = UINT64_MAX;

    t9 = (x37-(x38==(x39>x40)));

    if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = UINT32_MAX;
	int8_t x42 = INT8_MAX;
	uint16_t x43 = 12446U;
	uint8_t x44 = 0U;
	static uint32_t t10 = UINT32_MAX;

    t10 = (x41-(x42==(x43>x44)));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 181864U;
	uint16_t x46 = 6466U;
	static volatile int8_t x48 = INT8_MIN;
	volatile uint32_t t11 = 87497466U;

    t11 = (x45-(x46==(x47>x48)));

    if (t11 != 181864U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 3027309604937674324LLU;
	static int64_t x50 = INT64_MIN;
	int8_t x51 = INT8_MIN;
	static int64_t x52 = -5450497LL;
	uint64_t t12 = 1190LLU;

    t12 = (x49-(x50==(x51>x52)));

    if (t12 != 3027309604937674324LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = UINT32_MAX;
	int32_t x54 = INT32_MIN;
	static int64_t x55 = INT64_MIN;
	uint64_t x56 = UINT64_MAX;
	volatile uint32_t t13 = UINT32_MAX;

    t13 = (x53-(x54==(x55>x56)));

    if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint8_t x58 = 3U;
	uint16_t x59 = 2U;
	int16_t x60 = INT16_MIN;

    t14 = (x57-(x58==(x59>x60)));

    if (t14 != 470) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -14;
	volatile int32_t x62 = INT32_MIN;
	static int64_t x64 = -1LL;
	volatile int32_t t15 = -982;

    t15 = (x61-(x62==(x63>x64)));

    if (t15 != -14) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x66 = INT32_MIN;
	static int8_t x67 = INT8_MIN;
	volatile int16_t x68 = -1;
	int32_t t16 = -135;

    t16 = (x65-(x66==(x67>x68)));

    if (t16 != 8) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = 228963181851LL;
	volatile int32_t x70 = 28894;
	volatile int64_t t17 = -2202492423701596LL;

    t17 = (x69-(x70==(x71>x72)));

    if (t17 != 228963181851LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x74 = UINT64_MAX;
	volatile int64_t x75 = INT64_MIN;
	volatile uint32_t x76 = UINT32_MAX;

    t18 = (x73-(x74==(x75>x76)));

    if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = UINT32_MAX;
	static int8_t x80 = -1;
	uint32_t t19 = UINT32_MAX;

    t19 = (x77-(x78==(x79>x80)));

    if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = 12609;
	static int16_t x82 = 14;
	int8_t x84 = INT8_MIN;
	int32_t t20 = 61711;

    t20 = (x81-(x82==(x83>x84)));

    if (t20 != 12609) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x85 = 3U;
	uint32_t x86 = 754386482U;
	int64_t x87 = INT64_MAX;

    t21 = (x85-(x86==(x87>x88)));

    if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MIN;
	volatile int8_t x90 = INT8_MAX;
	uint64_t x91 = 153695879LLU;
	int32_t t22 = INT32_MIN;

    t22 = (x89-(x90==(x91>x92)));

    if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MAX;
	volatile int16_t x94 = 0;
	volatile int8_t x96 = INT8_MIN;
	int32_t t23 = 2;

    t23 = (x93-(x94==(x95>x96)));

    if (t23 != 32766) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	int8_t x98 = 13;
	uint16_t x99 = UINT16_MAX;
	uint32_t x100 = 7019U;
	int32_t t24 = 792561577;

    t24 = (x97-(x98==(x99>x100)));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint16_t x101 = UINT16_MAX;
	static int64_t x102 = INT64_MAX;
	int32_t x103 = 4918809;
	uint32_t x104 = 351492719U;
	static volatile int32_t t25 = -1;

    t25 = (x101-(x102==(x103>x104)));

    if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 1U;
	static uint16_t x107 = UINT16_MAX;
	static volatile int32_t t26 = -17760436;

    t26 = (x105-(x106==(x107>x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x111 = UINT64_MAX;
	static int8_t x112 = 0;
	uint32_t t27 = UINT32_MAX;

    t27 = (x109-(x110==(x111>x112)));

    if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MAX;
	int8_t x114 = -2;
	static int32_t t28 = INT32_MAX;

    t28 = (x113-(x114==(x115>x116)));

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	int16_t x118 = -5;
	volatile int16_t x119 = -2264;
	int32_t x120 = INT32_MAX;
	int32_t t29 = -12;

    t29 = (x117-(x118==(x119>x120)));

    if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = 6028;
	uint8_t x122 = 94U;
	int32_t x123 = -17394893;
	uint8_t x124 = UINT8_MAX;
	int32_t t30 = 249724;

    t30 = (x121-(x122==(x123>x124)));

    if (t30 != 6028) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x126 = INT64_MIN;
	uint16_t x127 = 137U;
	uint64_t x128 = 98510532LLU;

    t31 = (x125-(x126==(x127>x128)));

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = -3126946155933285936LL;
	static int16_t x130 = -1;
	static uint32_t x131 = 48U;
	int32_t x132 = INT32_MIN;
	int64_t t32 = 3628LL;

    t32 = (x129-(x130==(x131>x132)));

    if (t32 != -3126946155933285936LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	int32_t x134 = INT32_MIN;
	static int32_t x135 = -23;
	static int64_t x136 = -905LL;
	int32_t t33 = -12;

    t33 = (x133-(x134==(x135>x136)));

    if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint16_t x137 = 670U;
	int8_t x138 = INT8_MIN;
	int32_t x139 = INT32_MIN;
	static int64_t x140 = INT64_MIN;
	volatile int32_t t34 = -128032975;

    t34 = (x137-(x138==(x139>x140)));

    if (t34 != 670) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 62U;
	int8_t x142 = -1;
	volatile int8_t x143 = -28;
	static volatile uint16_t x144 = 12U;
	volatile int32_t t35 = 0;

    t35 = (x141-(x142==(x143>x144)));

    if (t35 != 62) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 46753633309LLU;
	int32_t x146 = INT32_MAX;
	int16_t x148 = -964;
	volatile uint64_t t36 = 3678777229776397685LLU;

    t36 = (x145-(x146==(x147>x148)));

    if (t36 != 46753633309LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x150 = INT32_MIN;
	static int32_t x152 = INT32_MIN;
	volatile int32_t t37 = -17172;

    t37 = (x149-(x150==(x151>x152)));

    if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x153 = INT16_MIN;
	volatile uint8_t x154 = 1U;
	static uint32_t x155 = 196369604U;
	int8_t x156 = INT8_MIN;
	volatile int32_t t38 = 1;

    t38 = (x153-(x154==(x155>x156)));

    if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x157 = UINT32_MAX;
	static uint64_t x160 = 328953006133203LLU;

    t39 = (x157-(x158==(x159>x160)));

    if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MIN;
	static volatile int8_t x162 = INT8_MIN;
	static int64_t x163 = INT64_MIN;
	volatile int32_t t40 = -9;

    t40 = (x161-(x162==(x163>x164)));

    if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x165 = INT8_MAX;
	static volatile int16_t x166 = 8;
	uint64_t x167 = UINT64_MAX;
	int32_t x168 = INT32_MAX;
	static volatile int32_t t41 = -16078;

    t41 = (x165-(x166==(x167>x168)));

    if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint16_t x169 = UINT16_MAX;
	int32_t x170 = -109135;
	volatile uint16_t x171 = 1719U;
	uint64_t x172 = 97238353086451LLU;
	int32_t t42 = 23648;

    t42 = (x169-(x170==(x171>x172)));

    if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MAX;
	int32_t x174 = -2349134;
	uint64_t x175 = UINT64_MAX;
	static int64_t t43 = INT64_MAX;

    t43 = (x173-(x174==(x175>x176)));

    if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x177 = 29;
	volatile int16_t x178 = INT16_MIN;
	uint32_t x180 = UINT32_MAX;

    t44 = (x177-(x178==(x179>x180)));

    if (t44 != 29) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	int8_t x183 = -1;
	static int16_t x184 = -1;
	int32_t t45 = 2399971;

    t45 = (x181-(x182==(x183>x184)));

    if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -1;
	uint16_t x186 = 6U;
	uint32_t x187 = UINT32_MAX;
	uint64_t x188 = 1991975531030998897LLU;
	volatile int32_t t46 = -3;

    t46 = (x185-(x186==(x187>x188)));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -862LL;
	uint64_t x190 = 1813308587226073389LLU;
	volatile int8_t x191 = INT8_MIN;
	volatile uint64_t x192 = 1084677196276LLU;
	volatile int64_t t47 = 356913738194751LL;

    t47 = (x189-(x190==(x191>x192)));

    if (t47 != -862LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = -1LL;
	int32_t x194 = INT32_MIN;
	volatile int16_t x195 = -1;
	volatile int64_t t48 = 31870822329615LL;

    t48 = (x193-(x194==(x195>x196)));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = 4969;
	uint32_t x198 = UINT32_MAX;
	int16_t x199 = INT16_MIN;
	int32_t t49 = 111543;

    t49 = (x197-(x198==(x199>x200)));

    if (t49 != 4969) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = 22U;
	volatile int8_t x202 = INT8_MAX;
	volatile uint16_t x203 = UINT16_MAX;
	uint64_t x204 = 31LLU;

    t50 = (x201-(x202==(x203>x204)));

    if (t50 != 22) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 670331350U;
	static uint16_t x208 = 18U;

    t51 = (x205-(x206==(x207>x208)));

    if (t51 != 670331350U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = UINT64_MAX;
	int32_t x210 = INT32_MIN;
	static int32_t x211 = INT32_MAX;
	int32_t x212 = INT32_MAX;
	uint64_t t52 = UINT64_MAX;

    t52 = (x209-(x210==(x211>x212)));

    if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x215 = INT64_MIN;
	static volatile int32_t x216 = -1;
	volatile int64_t t53 = -785796302LL;

    t53 = (x213-(x214==(x215>x216)));

    if (t53 != -373732690LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x217 = INT64_MAX;
	int16_t x218 = INT16_MIN;
	int16_t x219 = -1;

    t54 = (x217-(x218==(x219>x220)));

    if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x222 = INT8_MAX;
	uint16_t x223 = UINT16_MAX;
	int32_t t55 = -1082453;

    t55 = (x221-(x222==(x223>x224)));

    if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = UINT8_MAX;
	int32_t x226 = -62;
	uint64_t x228 = 7725LLU;
	static int32_t t56 = 2124540;

    t56 = (x225-(x226==(x227>x228)));

    if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x229 = 1326U;
	int64_t x230 = INT64_MAX;
	int16_t x231 = INT16_MAX;
	static int16_t x232 = 15078;

    t57 = (x229-(x230==(x231>x232)));

    if (t57 != 1326U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MAX;
	int8_t x234 = -1;
	int8_t x235 = INT8_MAX;

    t58 = (x233-(x234==(x235>x236)));

    if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = UINT32_MAX;
	static int64_t x238 = INT64_MIN;
	uint16_t x239 = 0U;
	uint32_t x240 = 1591U;
	uint32_t t59 = UINT32_MAX;

    t59 = (x237-(x238==(x239>x240)));

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 11187549LLU;
	uint16_t x242 = 322U;
	volatile int16_t x243 = -1;
	static int32_t x244 = INT32_MAX;
	static uint64_t t60 = 37736451LLU;

    t60 = (x241-(x242==(x243>x244)));

    if (t60 != 11187549LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x246 = -760;
	static int64_t x247 = INT64_MIN;
	int32_t x248 = -1;
	volatile int32_t t61 = 725;

    t61 = (x245-(x246==(x247>x248)));

    if (t61 != -35) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = 15526299692LL;
	int16_t x250 = INT16_MIN;
	int8_t x251 = 2;
	volatile int64_t x252 = INT64_MAX;
	static int64_t t62 = -1973442826324557488LL;

    t62 = (x249-(x250==(x251>x252)));

    if (t62 != 15526299692LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MAX;
	uint32_t x254 = UINT32_MAX;
	uint64_t x255 = 2775943441432LLU;
	static uint16_t x256 = 1U;
	int32_t t63 = 0;

    t63 = (x253-(x254==(x255>x256)));

    if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = -1LL;
	int32_t x259 = INT32_MIN;
	static int32_t x260 = 4898239;
	int64_t t64 = -152882085446LL;

    t64 = (x257-(x258==(x259>x260)));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x261 = INT32_MAX;
	int8_t x263 = -26;
	int8_t x264 = INT8_MIN;
	int32_t t65 = INT32_MAX;

    t65 = (x261-(x262==(x263>x264)));

    if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = INT64_MAX;
	static volatile uint64_t x266 = 32LLU;
	int64_t x267 = 124LL;
	int8_t x268 = 0;
	static volatile int64_t t66 = INT64_MAX;

    t66 = (x265-(x266==(x267>x268)));

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MIN;
	static int16_t x270 = -3;
	static int8_t x271 = INT8_MIN;

    t67 = (x269-(x270==(x271>x272)));

    if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x274 = -1;
	volatile uint16_t x275 = 2U;
	volatile uint16_t x276 = UINT16_MAX;
	volatile int64_t t68 = INT64_MAX;

    t68 = (x273-(x274==(x275>x276)));

    if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x278 = INT8_MIN;
	volatile int8_t x279 = INT8_MAX;
	uint64_t x280 = 270022383LLU;
	int32_t t69 = -4273880;

    t69 = (x277-(x278==(x279>x280)));

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = -1LL;
	int16_t x282 = -1;
	volatile int64_t t70 = -443500517175571894LL;

    t70 = (x281-(x282==(x283>x284)));

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = -1205;
	int64_t x287 = -1LL;
	uint16_t x288 = UINT16_MAX;
	int32_t t71 = -7;

    t71 = (x285-(x286==(x287>x288)));

    if (t71 != -1205) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x289 = -14;
	uint8_t x290 = UINT8_MAX;
	static int64_t x291 = INT64_MIN;
	volatile int32_t t72 = 128600;

    t72 = (x289-(x290==(x291>x292)));

    if (t72 != -14) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x293 = INT32_MIN;
	volatile int16_t x294 = INT16_MIN;
	static volatile uint8_t x296 = 2U;
	static int32_t t73 = INT32_MIN;

    t73 = (x293-(x294==(x295>x296)));

    if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = 613543109980LL;
	volatile int16_t x298 = -1;
	static int32_t x300 = INT32_MIN;

    t74 = (x297-(x298==(x299>x300)));

    if (t74 != 613543109980LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = -1;
	static uint64_t x302 = 13203973259547LLU;
	uint16_t x303 = UINT16_MAX;
	int16_t x304 = 4;
	volatile int32_t t75 = 94;

    t75 = (x301-(x302==(x303>x304)));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MAX;
	static int16_t x307 = INT16_MIN;
	volatile int64_t t76 = INT64_MAX;

    t76 = (x305-(x306==(x307>x308)));

    if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x309 = 4U;
	uint64_t x310 = 11651219160LLU;
	uint8_t x311 = 14U;
	volatile int32_t t77 = -8474;

    t77 = (x309-(x310==(x311>x312)));

    if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x315 = INT32_MIN;
	int32_t t78 = 88074;

    t78 = (x313-(x314==(x315>x316)));

    if (t78 != -54) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MAX;
	int64_t x318 = -1LL;
	volatile uint32_t x319 = UINT32_MAX;
	volatile uint32_t x320 = 467U;
	int32_t t79 = INT32_MAX;

    t79 = (x317-(x318==(x319>x320)));

    if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x322 = 13U;
	volatile uint8_t x323 = 29U;
	int32_t t80 = -569;

    t80 = (x321-(x322==(x323>x324)));

    if (t80 != 12) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x326 = INT8_MAX;
	static uint64_t x327 = 2663460LLU;
	static int16_t x328 = -528;
	volatile int32_t t81 = -14804;

    t81 = (x325-(x326==(x327>x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = 1164U;
	int32_t x330 = -1;
	static uint32_t x332 = 13540U;
	volatile uint32_t t82 = 0U;

    t82 = (x329-(x330==(x331>x332)));

    if (t82 != 1164U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MAX;
	int64_t x334 = INT64_MIN;
	static int8_t x335 = INT8_MIN;
	volatile int32_t t83 = INT32_MAX;

    t83 = (x333-(x334==(x335>x336)));

    if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x337 = 0;
	int32_t x338 = INT32_MIN;
	int64_t x340 = -1LL;
	static int32_t t84 = -3779;

    t84 = (x337-(x338==(x339>x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	int8_t x342 = INT8_MAX;
	int16_t x343 = -1;
	volatile int32_t x344 = -9100;
	static int32_t t85 = 782414;

    t85 = (x341-(x342==(x343>x344)));

    if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = UINT64_MAX;
	uint16_t x347 = 3198U;
	uint16_t x348 = 162U;
	volatile uint64_t t86 = UINT64_MAX;

    t86 = (x345-(x346==(x347>x348)));

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x350 = 0U;
	int32_t x351 = INT32_MIN;
	int16_t x352 = -1192;
	int64_t t87 = 5LL;

    t87 = (x349-(x350==(x351>x352)));

    if (t87 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int8_t x354 = INT8_MIN;
	uint8_t x355 = 2U;
	uint8_t x356 = 14U;

    t88 = (x353-(x354==(x355>x356)));

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x358 = 22;
	int32_t x360 = 0;
	int32_t t89 = 1052;

    t89 = (x357-(x358==(x359>x360)));

    if (t89 != -145068246) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x361 = INT32_MIN;
	uint16_t x362 = 1217U;
	volatile uint16_t x363 = 0U;
	int64_t x364 = -1LL;
	int32_t t90 = INT32_MIN;

    t90 = (x361-(x362==(x363>x364)));

    if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x366 = INT16_MAX;
	int64_t x367 = INT64_MAX;
	int64_t x368 = INT64_MIN;
	volatile uint64_t t91 = 177122145LLU;

    t91 = (x365-(x366==(x367>x368)));

    if (t91 != 7276LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MAX;
	uint16_t x371 = UINT16_MAX;
	volatile int16_t x372 = 316;
	static volatile int32_t t92 = 23;

    t92 = (x369-(x370==(x371>x372)));

    if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MAX;
	static int16_t x374 = -1;
	int64_t x375 = INT64_MIN;
	volatile uint16_t x376 = 787U;
	int32_t t93 = 27;

    t93 = (x373-(x374==(x375>x376)));

    if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = INT64_MIN;
	uint64_t x378 = UINT64_MAX;
	uint32_t x379 = 13U;
	volatile int16_t x380 = INT16_MIN;
	volatile int64_t t94 = INT64_MIN;

    t94 = (x377-(x378==(x379>x380)));

    if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MIN;

    t95 = (x381-(x382==(x383>x384)));

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x385 = -1;
	static int64_t x386 = 3247LL;
	volatile int32_t x387 = -1;
	volatile uint32_t x388 = 2068137348U;
	volatile int32_t t96 = -149402;

    t96 = (x385-(x386==(x387>x388)));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MAX;
	uint32_t x390 = 59U;
	int16_t x391 = 2;
	int64_t x392 = -402772227825478LL;
	volatile int32_t t97 = -22405809;

    t97 = (x389-(x390==(x391>x392)));

    if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x395 = INT8_MAX;
	static int64_t x396 = 3266344997LL;
	volatile int64_t t98 = INT64_MIN;

    t98 = (x393-(x394==(x395>x396)));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = -53;
	static int32_t x398 = INT32_MIN;
	int8_t x400 = 6;

    t99 = (x397-(x398==(x399>x400)));

    if (t99 != -53) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 4U;
	static uint64_t x402 = 159468788166415306LLU;
	volatile int8_t x403 = INT8_MAX;
	static volatile int32_t x404 = INT32_MIN;

    t100 = (x401-(x402==(x403>x404)));

    if (t100 != 4U) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MAX;
	int64_t x406 = -2169724036LL;
	static int8_t x407 = 10;
	int64_t x408 = 89451235LL;

    t101 = (x405-(x406==(x407>x408)));

    if (t101 != INT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MAX;
	int64_t x410 = -1LL;
	volatile int32_t x411 = INT32_MAX;
	static int32_t t102 = -12;

    t102 = (x409-(x410==(x411>x412)));

    if (t102 != 32767) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x413 = -1LL;
	uint32_t x415 = UINT32_MAX;
	int8_t x416 = -1;
	int64_t t103 = 5447042081LL;

    t103 = (x413-(x414==(x415>x416)));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x417 = -307;
	int8_t x418 = INT8_MIN;
	uint32_t x419 = 1570769247U;
	volatile int64_t x420 = -35524514604LL;
	int32_t t104 = -124521744;

    t104 = (x417-(x418==(x419>x420)));

    if (t104 != -307) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -17;
	static int16_t x423 = 8;
	int64_t x424 = INT64_MAX;
	int32_t t105 = -454;

    t105 = (x421-(x422==(x423>x424)));

    if (t105 != -17) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = UINT8_MAX;
	uint32_t x426 = 3831U;
	uint32_t x427 = 1797644U;
	int32_t x428 = -1;
	int32_t t106 = 626;

    t106 = (x425-(x426==(x427>x428)));

    if (t106 != 255) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MAX;
	int8_t x430 = INT8_MAX;
	uint64_t x431 = 31283029760429LLU;
	static int32_t t107 = 88059709;

    t107 = (x429-(x430==(x431>x432)));

    if (t107 != 32767) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 3146323263157704648LLU;
	uint32_t x434 = 334U;
	static volatile int8_t x435 = INT8_MIN;
	volatile uint64_t x436 = UINT64_MAX;

    t108 = (x433-(x434==(x435>x436)));

    if (t108 != 3146323263157704648LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 4485U;
	int64_t x438 = INT64_MIN;
	static uint64_t x439 = UINT64_MAX;
	int32_t t109 = -8949;

    t109 = (x437-(x438==(x439>x440)));

    if (t109 != 4485) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x442 = INT64_MAX;
	volatile uint64_t x443 = 98290LLU;
	volatile int32_t t110 = -47117751;

    t110 = (x441-(x442==(x443>x444)));

    if (t110 != 126) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = 4U;
	uint32_t x446 = 7981U;
	static uint16_t x447 = 1U;

    t111 = (x445-(x446==(x447>x448)));

    if (t111 != 4) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = UINT32_MAX;
	static int32_t x450 = -1;
	int16_t x451 = -202;
	int32_t x452 = INT32_MAX;
	uint32_t t112 = UINT32_MAX;

    t112 = (x449-(x450==(x451>x452)));

    if (t112 != UINT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MAX;
	int64_t x456 = INT64_MIN;
	int32_t t113 = INT32_MAX;

    t113 = (x453-(x454==(x455>x456)));

    if (t113 != INT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x457 = -1;
	int16_t x458 = -1;
	int16_t x460 = -3;
	static int32_t t114 = 16;

    t114 = (x457-(x458==(x459>x460)));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MIN;
	int32_t x462 = -1908;
	static int8_t x463 = 1;
	int32_t x464 = 14303;

    t115 = (x461-(x462==(x463>x464)));

    if (t115 != -128) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint32_t x465 = 3555415U;
	uint64_t x466 = 2640539697LLU;
	uint16_t x467 = 12U;
	int16_t x468 = 1769;
	volatile uint32_t t116 = 10732U;

    t116 = (x465-(x466==(x467>x468)));

    if (t116 != 3555415U) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -6;
	uint16_t x470 = 58U;
	int32_t x471 = -1;
	uint64_t x472 = 226221952679LLU;
	int32_t t117 = 522943;

    t117 = (x469-(x470==(x471>x472)));

    if (t117 != -6) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 159U;
	uint16_t x475 = 29579U;
	volatile int32_t x476 = INT32_MIN;
	int32_t t118 = 740618;

    t118 = (x473-(x474==(x475>x476)));

    if (t118 != 159) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = 5U;
	static volatile int8_t x478 = -1;
	uint8_t x479 = 98U;
	int16_t x480 = 407;
	static int32_t t119 = 103874685;

    t119 = (x477-(x478==(x479>x480)));

    if (t119 != 5) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = -1;
	int32_t x483 = -1;
	int32_t x484 = INT32_MIN;

    t120 = (x481-(x482==(x483>x484)));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x485 = INT64_MAX;
	int16_t x486 = INT16_MIN;
	static volatile int32_t x487 = -1;
	int64_t x488 = -1LL;
	volatile int64_t t121 = INT64_MAX;

    t121 = (x485-(x486==(x487>x488)));

    if (t121 != INT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = UINT32_MAX;
	int8_t x490 = -18;
	int16_t x491 = INT16_MIN;
	int16_t x492 = INT16_MIN;
	volatile uint32_t t122 = UINT32_MAX;

    t122 = (x489-(x490==(x491>x492)));

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x494 = INT8_MIN;
	int64_t x495 = -13968217994392LL;
	static volatile int64_t x496 = -22404315989146LL;
	static volatile int32_t t123 = INT32_MAX;

    t123 = (x493-(x494==(x495>x496)));

    if (t123 != INT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = 12U;
	uint64_t x500 = 2587023273LLU;
	volatile int32_t t124 = -1;

    t124 = (x497-(x498==(x499>x500)));

    if (t124 != 12) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x501 = -1;
	int16_t x502 = 1;
	static volatile uint16_t x503 = 1874U;
	volatile uint16_t x504 = UINT16_MAX;
	static int32_t t125 = -485772643;

    t125 = (x501-(x502==(x503>x504)));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = UINT64_MAX;
	uint64_t x506 = UINT64_MAX;
	int16_t x507 = INT16_MIN;
	int64_t x508 = -1LL;
	uint64_t t126 = UINT64_MAX;

    t126 = (x505-(x506==(x507>x508)));

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x509 = -1;
	int16_t x510 = -1;
	int16_t x511 = -1;

    t127 = (x509-(x510==(x511>x512)));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x514 = 0U;
	int16_t x515 = INT16_MAX;

    t128 = (x513-(x514==(x515>x516)));

    if (t128 != INT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x517 = INT64_MIN;
	static int32_t x518 = INT32_MAX;
	static int32_t x519 = -38370812;
	static volatile int64_t t129 = INT64_MIN;

    t129 = (x517-(x518==(x519>x520)));

    if (t129 != INT64_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int16_t x521 = INT16_MIN;
	int64_t x522 = 14358492400004256LL;
	uint32_t x523 = 98U;
	int32_t t130 = 19249;

    t130 = (x521-(x522==(x523>x524)));

    if (t130 != -32768) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	static uint32_t x526 = 526U;
	static int64_t x527 = 273020830832LL;
	uint8_t x528 = 3U;
	volatile int32_t t131 = -32886499;

    t131 = (x525-(x526==(x527>x528)));

    if (t131 != -32768) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MIN;
	int32_t x530 = INT32_MAX;
	uint8_t x532 = 2U;

    t132 = (x529-(x530==(x531>x532)));

    if (t132 != INT64_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = -1;
	volatile uint16_t x536 = 1U;
	int32_t t133 = 1083;

    t133 = (x533-(x534==(x535>x536)));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MAX;
	static int32_t x538 = INT32_MAX;
	int32_t x540 = -1;
	volatile int32_t t134 = 38;

    t134 = (x537-(x538==(x539>x540)));

    if (t134 != 32767) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x543 = 116;
	volatile int32_t x544 = -1;
	static int32_t t135 = INT32_MIN;

    t135 = (x541-(x542==(x543>x544)));

    if (t135 != INT32_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -1;
	uint8_t x546 = 2U;
	uint64_t x547 = 40157294LLU;
	uint64_t x548 = 53303637145LLU;
	int32_t t136 = 248590219;

    t136 = (x545-(x546==(x547>x548)));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint64_t x549 = 1998LLU;
	int64_t x551 = -58484710754678551LL;
	int32_t x552 = INT32_MIN;
	volatile uint64_t t137 = 22944LLU;

    t137 = (x549-(x550==(x551>x552)));

    if (t137 != 1998LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x554 = -6;
	static volatile uint64_t x555 = 1LLU;
	int8_t x556 = 0;
	volatile int32_t t138 = -163288;

    t138 = (x553-(x554==(x555>x556)));

    if (t138 != -128) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x557 = -1;
	volatile int64_t x558 = 252320638520175433LL;
	uint8_t x559 = UINT8_MAX;
	volatile int32_t t139 = -125;

    t139 = (x557-(x558==(x559>x560)));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x561 = INT8_MIN;
	uint32_t x562 = 145U;
	static int8_t x563 = INT8_MIN;

    t140 = (x561-(x562==(x563>x564)));

    if (t140 != -128) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = -1;
	volatile int16_t x566 = 502;
	uint32_t x567 = 478368U;
	volatile int32_t x568 = INT32_MIN;
	int32_t t141 = 0;

    t141 = (x565-(x566==(x567>x568)));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -1LL;
	uint8_t x570 = 29U;
	int32_t x571 = 30576750;
	uint8_t x572 = 14U;
	volatile int64_t t142 = 11743260LL;

    t142 = (x569-(x570==(x571>x572)));

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = UINT32_MAX;
	static volatile uint16_t x574 = 561U;
	volatile uint16_t x575 = UINT16_MAX;

    t143 = (x573-(x574==(x575>x576)));

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x580 = INT16_MAX;

    t144 = (x577-(x578==(x579>x580)));

    if (t144 != 32767) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = 210122473U;
	static uint8_t x582 = UINT8_MAX;
	static uint8_t x583 = 5U;

    t145 = (x581-(x582==(x583>x584)));

    if (t145 != 210122473U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x585 = 2620928214288LLU;
	static int8_t x586 = INT8_MIN;
	static uint64_t x587 = UINT64_MAX;
	uint8_t x588 = 60U;
	uint64_t t146 = 30827674LLU;

    t146 = (x585-(x586==(x587>x588)));

    if (t146 != 2620928214288LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MAX;
	int8_t x592 = -1;
	int32_t t147 = 12;

    t147 = (x589-(x590==(x591>x592)));

    if (t147 != 32767) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x593 = 999755816U;
	static volatile int16_t x594 = INT16_MIN;
	static volatile int64_t x596 = 20365378LL;
	volatile uint32_t t148 = 2640U;

    t148 = (x593-(x594==(x595>x596)));

    if (t148 != 999755816U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x597 = 3978927239312241819LLU;
	int32_t x598 = 14850821;
	uint8_t x600 = UINT8_MAX;

    t149 = (x597-(x598==(x599>x600)));

    if (t149 != 3978927239312241819LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x602 = -51;
	int16_t x603 = INT16_MIN;
	volatile uint16_t x604 = 0U;
	volatile int32_t t150 = -5;

    t150 = (x601-(x602==(x603>x604)));

    if (t150 != 29) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x605 = INT8_MIN;
	uint32_t x607 = 129083868U;
	int16_t x608 = INT16_MIN;

    t151 = (x605-(x606==(x607>x608)));

    if (t151 != -128) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	int16_t x610 = -1;
	int64_t x611 = -1LL;
	static int32_t x612 = INT32_MIN;
	volatile int32_t t152 = 1;

    t152 = (x609-(x610==(x611>x612)));

    if (t152 != -128) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = 0;
	int8_t x614 = 0;
	int32_t x615 = -1;
	uint16_t x616 = UINT16_MAX;

    t153 = (x613-(x614==(x615>x616)));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x619 = -1;
	volatile int8_t x620 = 53;
	volatile uint64_t t154 = 72LLU;

    t154 = (x617-(x618==(x619>x620)));

    if (t154 != 1425237238LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = -1;
	volatile uint16_t x622 = 2485U;
	int64_t x623 = INT64_MAX;
	int8_t x624 = INT8_MIN;
	int32_t t155 = -678151;

    t155 = (x621-(x622==(x623>x624)));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MIN;
	uint16_t x626 = UINT16_MAX;
	volatile int32_t x627 = INT32_MAX;
	volatile uint32_t x628 = UINT32_MAX;
	int32_t t156 = -32088;

    t156 = (x625-(x626==(x627>x628)));

    if (t156 != -32768) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = -1LL;
	volatile int8_t x630 = INT8_MAX;
	int32_t x631 = INT32_MAX;
	int64_t x632 = -738699970077LL;
	int64_t t157 = 3720683613LL;

    t157 = (x629-(x630==(x631>x632)));

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	int32_t x635 = INT32_MIN;
	static uint16_t x636 = 1U;
	volatile int32_t t158 = 804990825;

    t158 = (x633-(x634==(x635>x636)));

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x637 = UINT16_MAX;
	static volatile int16_t x638 = -1;
	uint64_t x639 = UINT64_MAX;

    t159 = (x637-(x638==(x639>x640)));

    if (t159 != 65535) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x641 = 42825709;
	int64_t x642 = INT64_MIN;
	volatile int16_t x643 = INT16_MAX;
	int32_t t160 = -1285234;

    t160 = (x641-(x642==(x643>x644)));

    if (t160 != 42825709) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -1;
	volatile uint32_t x646 = 10556149U;
	uint16_t x647 = UINT16_MAX;
	volatile int16_t x648 = INT16_MAX;
	int32_t t161 = -8293;

    t161 = (x645-(x646==(x647>x648)));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 215559121LLU;
	volatile int16_t x650 = INT16_MIN;
	int32_t x651 = INT32_MAX;
	int8_t x652 = INT8_MIN;
	volatile uint64_t t162 = 429525LLU;

    t162 = (x649-(x650==(x651>x652)));

    if (t162 != 215559121LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	uint64_t x654 = 5484865132332623LLU;
	uint16_t x655 = 4574U;
	int64_t t163 = INT64_MIN;

    t163 = (x653-(x654==(x655>x656)));

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x657 = 361200275U;
	int32_t x658 = -1;
	static uint8_t x659 = 38U;
	int32_t x660 = INT32_MIN;

    t164 = (x657-(x658==(x659>x660)));

    if (t164 != 361200275U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = 292U;
	uint8_t x662 = 6U;
	static volatile int8_t x663 = INT8_MAX;
	static int16_t x664 = -1;
	volatile int32_t t165 = -13055;

    t165 = (x661-(x662==(x663>x664)));

    if (t165 != 292) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = -1;
	static int8_t x666 = INT8_MIN;
	int64_t x667 = INT64_MAX;
	int32_t t166 = -961;

    t166 = (x665-(x666==(x667>x668)));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x669 = UINT8_MAX;
	int32_t x670 = -157;
	int8_t x671 = 15;
	static uint16_t x672 = 30U;
	int32_t t167 = 418;

    t167 = (x669-(x670==(x671>x672)));

    if (t167 != 255) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = -520328LL;
	int8_t x674 = 1;
	static volatile int16_t x675 = INT16_MIN;

    t168 = (x673-(x674==(x675>x676)));

    if (t168 != -520328LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x677 = INT32_MAX;
	int64_t x678 = INT64_MIN;
	int64_t x679 = -17LL;

    t169 = (x677-(x678==(x679>x680)));

    if (t169 != INT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MAX;
	uint8_t x682 = UINT8_MAX;
	int64_t x683 = -2711185083366LL;
	static int32_t x684 = -8343;
	volatile int64_t t170 = INT64_MAX;

    t170 = (x681-(x682==(x683>x684)));

    if (t170 != INT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MIN;
	int64_t x686 = -1871LL;
	volatile int64_t x687 = INT64_MIN;
	volatile uint32_t x688 = UINT32_MAX;
	int64_t t171 = INT64_MIN;

    t171 = (x685-(x686==(x687>x688)));

    if (t171 != INT64_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x690 = -1;
	uint32_t x692 = 25156945U;

    t172 = (x689-(x690==(x691>x692)));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = -1;
	int32_t x694 = INT32_MIN;
	int32_t x695 = -15121553;
	volatile uint64_t x696 = 928LLU;
	static int32_t t173 = -1803;

    t173 = (x693-(x694==(x695>x696)));

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	int16_t x699 = 0;
	int8_t x700 = -1;
	volatile int32_t t174 = -1883;

    t174 = (x697-(x698==(x699>x700)));

    if (t174 != -32768) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x702 = -1;
	uint64_t x703 = 78280449642657LLU;
	volatile int32_t t175 = 53961023;

    t175 = (x701-(x702==(x703>x704)));

    if (t175 != 1456) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	uint32_t x706 = 6U;
	static int64_t x707 = -1LL;
	static volatile int32_t t176 = 1;

    t176 = (x705-(x706==(x707>x708)));

    if (t176 != -128) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x710 = INT16_MAX;
	uint16_t x711 = 0U;

    t177 = (x709-(x710==(x711>x712)));

    if (t177 != 65535) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 176637487269871LLU;
	uint8_t x714 = UINT8_MAX;
	static uint64_t t178 = 14204139653LLU;

    t178 = (x713-(x714==(x715>x716)));

    if (t178 != 176637487269871LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = -1312234;
	uint64_t x719 = UINT64_MAX;
	static int64_t x720 = -1LL;
	static int32_t t179 = 1;

    t179 = (x717-(x718==(x719>x720)));

    if (t179 != -1312234) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x722 = -185;
	int32_t x724 = 625263;

    t180 = (x721-(x722==(x723>x724)));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x725 = INT64_MIN;
	volatile uint8_t x726 = UINT8_MAX;
	int32_t x727 = 157;
	int8_t x728 = 8;
	volatile int64_t t181 = INT64_MIN;

    t181 = (x725-(x726==(x727>x728)));

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 28U;
	int8_t x730 = 0;
	static volatile int64_t x732 = INT64_MAX;

    t182 = (x729-(x730==(x731>x732)));

    if (t182 != 27U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = -1;
	int64_t x734 = INT64_MAX;
	int32_t x735 = -1;
	uint32_t x736 = UINT32_MAX;
	int32_t t183 = 4;

    t183 = (x733-(x734==(x735>x736)));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x737 = INT64_MAX;
	uint64_t x738 = 8246263107932LLU;
	uint64_t x739 = UINT64_MAX;
	int64_t x740 = INT64_MAX;
	volatile int64_t t184 = INT64_MAX;

    t184 = (x737-(x738==(x739>x740)));

    if (t184 != INT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -1;
	uint16_t x742 = 193U;
	int64_t x743 = -274451875451069LL;
	static int8_t x744 = -1;
	volatile int32_t t185 = -94441193;

    t185 = (x741-(x742==(x743>x744)));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = -1;
	int32_t x746 = -1;
	int32_t x747 = INT32_MIN;
	int8_t x748 = 1;
	int32_t t186 = -631026;

    t186 = (x745-(x746==(x747>x748)));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 2U;
	int64_t x750 = INT64_MAX;
	int16_t x751 = -3;

    t187 = (x749-(x750==(x751>x752)));

    if (t187 != 2U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = UINT32_MAX;
	int16_t x754 = -26;
	volatile int64_t x755 = -1LL;
	static int16_t x756 = INT16_MIN;

    t188 = (x753-(x754==(x755>x756)));

    if (t188 != UINT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x758 = UINT8_MAX;
	uint32_t x759 = 47U;
	static volatile int32_t x760 = -1;
	volatile int64_t t189 = 3967474461538244LL;

    t189 = (x757-(x758==(x759>x760)));

    if (t189 != -126666115848721295LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x762 = -1;
	volatile int32_t x763 = INT32_MIN;
	uint8_t x764 = UINT8_MAX;
	int32_t t190 = 113498891;

    t190 = (x761-(x762==(x763>x764)));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = -1LL;
	uint8_t x766 = 11U;
	int64_t x767 = INT64_MIN;
	int32_t x768 = INT32_MAX;
	volatile int64_t t191 = 38243456076LL;

    t191 = (x765-(x766==(x767>x768)));

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x769 = INT32_MIN;
	int64_t x770 = -68023LL;
	int16_t x771 = INT16_MIN;
	uint8_t x772 = 81U;
	int32_t t192 = INT32_MIN;

    t192 = (x769-(x770==(x771>x772)));

    if (t192 != INT32_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x773 = 270U;
	int32_t x774 = INT32_MIN;
	uint8_t x775 = UINT8_MAX;
	static int8_t x776 = INT8_MIN;
	uint32_t t193 = 30936U;

    t193 = (x773-(x774==(x775>x776)));

    if (t193 != 270U) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MAX;
	int64_t x778 = INT64_MIN;
	uint8_t x780 = 2U;
	int32_t t194 = 454439;

    t194 = (x777-(x778==(x779>x780)));

    if (t194 != 127) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x782 = INT32_MIN;
	uint64_t x784 = UINT64_MAX;
	int32_t t195 = 1287;

    t195 = (x781-(x782==(x783>x784)));

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x786 = 1915402063935LL;
	volatile uint8_t x787 = 3U;
	static int64_t x788 = INT64_MIN;
	int32_t t196 = 14151347;

    t196 = (x785-(x786==(x787>x788)));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x789 = INT8_MIN;
	int64_t x790 = INT64_MIN;
	volatile uint64_t x791 = UINT64_MAX;
	uint64_t x792 = 111319834397267LLU;
	volatile int32_t t197 = -15;

    t197 = (x789-(x790==(x791>x792)));

    if (t197 != -128) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int64_t x793 = -1LL;
	volatile uint32_t x795 = UINT32_MAX;
	int8_t x796 = INT8_MAX;
	int64_t t198 = 361300608LL;

    t198 = (x793-(x794==(x795>x796)));

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MIN;
	uint32_t x798 = 6793U;
	volatile uint8_t x799 = 11U;
	uint16_t x800 = UINT16_MAX;
	volatile int32_t t199 = 3837256;

    t199 = (x797-(x798==(x799>x800)));

    if (t199 != -32768) { NG(); } else { ; }
	
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

