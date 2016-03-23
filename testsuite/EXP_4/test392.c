
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

uint8_t x3 = UINT8_MAX;
int16_t x16 = INT16_MAX;
static uint32_t x21 = UINT32_MAX;
int64_t x23 = INT64_MAX;
static uint32_t x24 = 2194937U;
int64_t x38 = INT64_MAX;
static int8_t x41 = 53;
volatile uint32_t x42 = 5U;
int64_t x43 = 69923432391173LL;
uint8_t x46 = 94U;
int16_t x49 = 3;
uint8_t x53 = UINT8_MAX;
volatile uint64_t t13 = 75908757127644LLU;
volatile uint16_t x72 = 17620U;
volatile int8_t x77 = -1;
int32_t x82 = INT32_MAX;
static uint32_t x83 = 945399397U;
volatile int64_t t22 = -9765087LL;
static volatile int8_t x109 = INT8_MAX;
uint32_t x110 = 26748315U;
int16_t x114 = INT16_MIN;
uint16_t x127 = UINT16_MAX;
int64_t x132 = INT64_MIN;
volatile uint64_t t29 = 39537903LLU;
uint8_t x139 = 28U;
uint64_t t30 = 5867882130717824LLU;
static int64_t x142 = 27679569551601768LL;
int64_t x146 = INT64_MIN;
volatile uint16_t x153 = 9313U;
uint32_t x161 = UINT32_MAX;
uint32_t x166 = UINT32_MAX;
int8_t x174 = 7;
uint32_t x175 = 23387U;
volatile uint16_t x181 = 3U;
uint64_t x182 = UINT64_MAX;
volatile int32_t x183 = -83318;
static volatile uint64_t t41 = 2398181239LLU;
uint16_t x195 = 19283U;
int64_t x209 = 26464116029349LL;
volatile int8_t x211 = INT8_MIN;
volatile int32_t x215 = INT32_MIN;
int64_t x221 = -12575LL;
int64_t x223 = 816166LL;
static int32_t x224 = 2301;
int16_t x225 = INT16_MIN;
uint8_t x229 = 57U;
uint64_t t55 = 26626268LLU;
uint64_t x249 = 237774LLU;
volatile int8_t x251 = INT8_MAX;
uint64_t t56 = 1902058774LLU;
uint8_t x254 = UINT8_MAX;
uint16_t x256 = 27180U;
int32_t t57 = 241;
static int64_t x259 = INT64_MAX;
int64_t t58 = 1168LL;
uint8_t x267 = 87U;
volatile int32_t x268 = INT32_MAX;
uint32_t x276 = 1737547633U;
int64_t t61 = -1798922166100321LL;
int8_t x281 = -12;
volatile uint64_t x284 = 282866037856LLU;
volatile uint16_t x292 = UINT16_MAX;
int64_t t67 = 279922102615LL;
static volatile int32_t x302 = 34866679;
uint16_t x304 = 402U;
int64_t x308 = -1298LL;
int64_t x318 = 1LL;
volatile int64_t t72 = -528856277266365012LL;
int64_t x335 = INT64_MIN;
int32_t t77 = 395;
int64_t x360 = 184892LL;
int16_t x362 = 8;
int32_t t81 = 15849228;
volatile int16_t x367 = -1;
volatile int64_t t82 = -13LL;
uint32_t x369 = 226660418U;
int32_t x371 = 1204;
uint32_t x372 = 297U;
volatile int8_t x379 = INT8_MIN;
uint32_t x384 = 60611004U;
int64_t x386 = -8867LL;
uint8_t x392 = UINT8_MAX;
int64_t x395 = -3LL;
uint16_t x396 = UINT16_MAX;
uint64_t x413 = 4662LLU;
volatile uint64_t t90 = 3117065287LLU;
uint64_t t91 = 9244746LLU;
int64_t x421 = 844094386741LL;
int64_t x422 = INT64_MIN;
int64_t t92 = 434919320880924LL;
int64_t x428 = 457LL;
static int32_t t95 = 11099384;
static int64_t x443 = INT64_MIN;
volatile int64_t x444 = -50LL;
static uint64_t t97 = 1943561LLU;
volatile int64_t x461 = 8556256847LL;
volatile int32_t x468 = -1;
static volatile uint64_t t101 = 61983029092392LLU;
uint64_t x473 = UINT64_MAX;
static int64_t x474 = INT64_MIN;
uint64_t x476 = 321425908069LLU;
volatile uint64_t t103 = 6430357780LLU;
int16_t x477 = INT16_MIN;
static int8_t x481 = INT8_MIN;
uint32_t x482 = 20U;
int32_t x495 = -51118;
volatile int16_t x498 = -1;
int16_t x499 = INT16_MAX;
static uint32_t x501 = 19U;
uint64_t t110 = 1829552994301LLU;
int8_t x513 = INT8_MIN;
static int64_t x519 = 5885266874455576LL;
volatile uint16_t x527 = 128U;
int64_t x529 = INT64_MAX;
static int8_t x530 = 0;
static uint64_t x534 = 438182951839908718LLU;
uint64_t t116 = 9857874LLU;
static int8_t x543 = INT8_MAX;
uint64_t x549 = 1457LLU;
uint8_t x550 = 0U;
volatile uint64_t t120 = 84391013LLU;
int8_t x557 = -1;
int8_t x560 = 1;
int32_t x561 = 14171637;
volatile int64_t x562 = 413219939LL;
volatile uint32_t x563 = UINT32_MAX;
static int32_t x565 = INT32_MAX;
uint32_t t124 = 2U;
static uint16_t x572 = UINT16_MAX;
int16_t x575 = INT16_MIN;
uint16_t x579 = UINT16_MAX;
int32_t x581 = INT32_MIN;
int64_t t128 = 5915LL;
int16_t x587 = 1;
static uint64_t t131 = 143900384925446286LLU;
int16_t x598 = INT16_MAX;
uint16_t x600 = 2996U;
uint64_t x603 = 5244194LLU;
int32_t x608 = INT32_MIN;
volatile uint32_t t134 = 615214728U;
static volatile int64_t t135 = 4LL;
static volatile uint64_t t136 = 44083348228LLU;
int64_t x622 = -1LL;
int8_t x626 = -4;
int32_t x627 = -1;
uint16_t x639 = 5396U;
uint64_t t140 = 15LLU;
int32_t x642 = -36521;
volatile int64_t t141 = 23162LL;
uint16_t x645 = 1U;
int8_t x658 = -2;
int64_t x664 = INT64_MIN;
static int8_t x665 = INT8_MIN;
volatile int16_t x667 = -1;
static volatile int32_t x668 = -1;
static int32_t x671 = 23443146;
uint64_t t148 = 0LLU;
volatile uint16_t x675 = 0U;
int32_t x680 = -1;
static int32_t t150 = -1575699;
static uint8_t x684 = 110U;
static volatile int64_t x685 = 7845579615LL;
int8_t x692 = -1;
uint32_t x693 = 0U;
int64_t x694 = -1LL;
volatile int64_t t154 = -126519384LL;
static volatile int32_t x699 = INT32_MAX;
int16_t x701 = -230;
volatile int32_t t157 = -66;
volatile int8_t x715 = INT8_MIN;
int8_t x717 = INT8_MIN;
uint32_t x727 = UINT32_MAX;
uint32_t x730 = UINT32_MAX;
int16_t x757 = INT16_MIN;
static volatile int16_t x759 = INT16_MIN;
uint8_t x763 = UINT8_MAX;
int64_t t171 = -2446195901480794351LL;
static int16_t x782 = -1;
uint32_t x797 = 2U;
int64_t x799 = 125902605361LL;
int32_t x806 = INT32_MIN;
volatile int32_t x812 = INT32_MAX;
volatile int32_t t181 = 5;
volatile int32_t x830 = INT32_MIN;
uint32_t x834 = 15167918U;
static int64_t x836 = INT64_MIN;
volatile uint64_t t185 = 1319239299028872161LLU;
volatile int32_t x841 = INT32_MIN;
volatile int32_t x846 = INT32_MIN;
int16_t x847 = INT16_MIN;
uint16_t x851 = UINT16_MAX;
int64_t x852 = -1LL;
static volatile int64_t t188 = -42242033864400LL;
static uint16_t x866 = 579U;
volatile uint16_t x867 = 1630U;
int64_t x870 = 8LL;
uint32_t x871 = 85730123U;
int64_t x892 = -1LL;
int64_t x896 = -1LL;
int8_t x899 = INT8_MIN;


void f0(void) {
    	static int8_t x1 = -1;
	uint32_t x2 = 3U;
	static int64_t x4 = -17865715425LL;
	int64_t t0 = -67985165LL;

    t0 = (x1^(x2^(x3-x4)));

    if (t0 != -17865715684LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 2692U;
	int32_t x6 = -1;
	static int16_t x7 = 961;
	int32_t x8 = INT32_MAX;
	int32_t t1 = -83;

    t1 = (x5^(x6^(x7-x8)));

    if (t1 != 2147481273) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 161428297LLU;
	volatile int32_t x10 = -2596;
	uint16_t x11 = 46U;
	static uint32_t x12 = 279372134U;
	uint64_t t2 = 79899011LLU;

    t2 = (x9^(x10^(x11-x12)));

    if (t2 != 423221341LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -3316LL;
	int32_t x14 = -1;
	uint8_t x15 = UINT8_MAX;
	volatile int64_t t3 = 883991693LL;

    t3 = (x13^(x14^(x15-x16)));

    if (t3 != -29197LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = 25;
	static volatile int8_t x18 = INT8_MAX;
	int16_t x19 = INT16_MAX;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = 9;

    t4 = (x17^(x18^(x19-x20)));

    if (t4 != -32666) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = -799480583LL;
	static int64_t t5 = -945LL;

    t5 = (x21^(x22^(x23-x24)));

    if (t5 != -9223372033357145856LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x25 = UINT64_MAX;
	static int64_t x26 = -1LL;
	int16_t x27 = INT16_MIN;
	volatile int8_t x28 = -55;
	static uint64_t t6 = 0LLU;

    t6 = (x25^(x26^(x27-x28)));

    if (t6 != 18446744073709518903LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 212165418195198LLU;
	volatile int64_t x34 = INT64_MAX;
	static uint32_t x35 = 6362U;
	volatile int64_t x36 = INT64_MAX;
	static volatile uint64_t t7 = 989649729630LLU;

    t7 = (x33^(x34^(x35-x36)));

    if (t7 != 18446531908291362778LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = -23;
	uint64_t x39 = 328532574524LLU;
	int64_t x40 = INT64_MAX;
	volatile uint64_t t8 = 570977LLU;

    t8 = (x37^(x38^(x39-x40)));

    if (t8 != 328532574507LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x44 = -1;
	int64_t t9 = -33493LL;

    t9 = (x41^(x42^(x43-x44)));

    if (t9 != 69923432391222LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x45 = 1U;
	int8_t x47 = -1;
	int32_t x48 = INT32_MIN;
	uint32_t t10 = 5U;

    t10 = (x45^(x46^(x47-x48)));

    if (t10 != 2147483552U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x50 = INT32_MIN;
	int32_t x51 = -1;
	int32_t x52 = 1484;
	volatile int32_t t11 = 9;

    t11 = (x49^(x50^(x51-x52)));

    if (t11 != 2147482160) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x54 = INT64_MIN;
	int32_t x55 = -5171980;
	int8_t x56 = INT8_MIN;
	volatile int64_t t12 = 2008204LL;

    t12 = (x53^(x54^(x55-x56)));

    if (t12 != 9223372036849603979LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = -1;
	int8_t x62 = -1;
	uint64_t x63 = 223243343481572LLU;
	int32_t x64 = -3121725;

    t13 = (x61^(x62^(x63-x64)));

    if (t13 != 223243346603297LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x65 = UINT64_MAX;
	int16_t x66 = -1;
	uint8_t x67 = 0U;
	int32_t x68 = INT32_MAX;
	volatile uint64_t t14 = 33194417LLU;

    t14 = (x65^(x66^(x67-x68)));

    if (t14 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x69 = UINT8_MAX;
	uint8_t x70 = UINT8_MAX;
	int8_t x71 = INT8_MIN;
	volatile int32_t t15 = 0;

    t15 = (x69^(x70^(x71-x72)));

    if (t15 != -17748) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	static uint8_t x75 = 14U;
	uint32_t x76 = UINT32_MAX;
	volatile uint64_t t16 = 1040431LLU;

    t16 = (x73^(x74^(x75-x76)));

    if (t16 != 15LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x78 = 25U;
	uint8_t x79 = UINT8_MAX;
	int8_t x80 = 6;
	volatile int32_t t17 = -6;

    t17 = (x77^(x78^(x79-x80)));

    if (t17 != -225) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = -1LL;
	int16_t x84 = INT16_MIN;
	volatile int64_t t18 = 3LL;

    t18 = (x81^(x82^(x83-x84)));

    if (t18 != -1202051483LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x85 = UINT16_MAX;
	volatile uint8_t x86 = 0U;
	int16_t x87 = -1;
	uint8_t x88 = 45U;
	int32_t t19 = 620605273;

    t19 = (x85^(x86^(x87-x88)));

    if (t19 != -65491) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = -1;
	uint64_t x90 = 3LLU;
	static volatile int8_t x91 = INT8_MAX;
	static uint64_t x92 = 1419850947008LLU;
	volatile uint64_t t20 = 57701LLU;

    t20 = (x89^(x90^(x91-x92)));

    if (t20 != 1419850946883LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x97 = -1934;
	uint8_t x98 = UINT8_MAX;
	int16_t x99 = INT16_MIN;
	int64_t x100 = INT64_MIN;
	volatile int64_t t21 = -588848662LL;

    t21 = (x97^(x98^(x99-x100)));

    if (t21 != -9223372036854744947LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x101 = 7937188LL;
	static volatile int32_t x102 = INT32_MIN;
	int16_t x103 = INT16_MIN;
	int8_t x104 = INT8_MIN;

    t22 = (x101^(x102^(x103-x104)));

    if (t22 != 2139528228LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x105 = UINT16_MAX;
	int8_t x106 = 5;
	int64_t x107 = INT64_MIN;
	int32_t x108 = -1;
	volatile int64_t t23 = -371LL;

    t23 = (x105^(x106^(x107-x108)));

    if (t23 != -9223372036854710277LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x111 = INT8_MAX;
	static volatile int16_t x112 = -1;
	uint32_t t24 = 4175330U;

    t24 = (x109^(x110^(x111-x112)));

    if (t24 != 26748260U) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x113 = 4748;
	uint16_t x115 = UINT16_MAX;
	int32_t x116 = INT32_MAX;
	volatile int32_t t25 = 14;

    t25 = (x113^(x114^(x115-x116)));

    if (t25 != 2147390092) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x117 = -390;
	uint64_t x118 = UINT64_MAX;
	uint32_t x119 = 28773U;
	volatile uint64_t x120 = 2612137675596086LLU;
	static volatile uint64_t t26 = 1000805LLU;

    t26 = (x117^(x118^(x119-x120)));

    if (t26 != 18444131936033984170LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x121 = 204U;
	uint32_t x122 = 2129U;
	uint32_t x123 = 184555529U;
	static volatile int64_t x124 = INT64_MAX;
	int64_t t27 = -913831226125363LL;

    t27 = (x121^(x122^(x123-x124)));

    if (t27 != -9223372036670222185LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = -4753;
	int64_t x126 = -1LL;
	volatile uint32_t x128 = UINT32_MAX;
	int64_t t28 = -949LL;

    t28 = (x125^(x126^(x127-x128)));

    if (t28 != 70288LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x129 = UINT16_MAX;
	int64_t x130 = INT64_MIN;
	uint64_t x131 = 27206908LLU;

    t29 = (x129^(x130^(x131-x132)));

    if (t29 != 27253507LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x137 = INT8_MIN;
	static uint64_t x138 = 2LLU;
	int8_t x140 = INT8_MIN;

    t30 = (x137^(x138^(x139-x140)));

    if (t30 != 18446744073709551390LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x141 = 439925907226590LLU;
	int32_t x143 = INT32_MIN;
	static int8_t x144 = -1;
	volatile uint64_t t31 = 3113LLU;

    t31 = (x141^(x142^(x143-x144)));

    if (t31 != 18418659833487413175LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x145 = INT16_MIN;
	volatile int64_t x147 = 2LL;
	int8_t x148 = INT8_MIN;
	static volatile int64_t t32 = 28978905999LL;

    t32 = (x145^(x146^(x147-x148)));

    if (t32 != 9223372036854743170LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x149 = 57;
	volatile int32_t x150 = INT32_MAX;
	int8_t x151 = -6;
	static uint8_t x152 = 12U;
	int32_t t33 = 405723;

    t33 = (x149^(x150^(x151-x152)));

    if (t33 != -2147483608) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x154 = -41;
	uint8_t x155 = UINT8_MAX;
	int32_t x156 = -1;
	volatile int32_t t34 = 1492096;

    t34 = (x153^(x154^(x155-x156)));

    if (t34 != -9546) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x157 = 31U;
	int8_t x158 = 16;
	int64_t x159 = INT64_MAX;
	uint64_t x160 = 68424549350647LLU;
	volatile uint64_t t35 = 79645719969987956LLU;

    t35 = (x157^(x158^(x159-x160)));

    if (t35 != 9223303612305425159LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x162 = -150784;
	uint16_t x163 = 22971U;
	int16_t x164 = INT16_MAX;
	volatile uint32_t t36 = 12U;

    t36 = (x161^(x162^(x163-x164)));

    if (t36 != 4294808899U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x165 = UINT16_MAX;
	int64_t x167 = -123501LL;
	uint8_t x168 = 1U;
	int64_t t37 = -256989089970LL;

    t37 = (x165^(x166^(x167-x168)));

    if (t37 != -4294894190LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x169 = 2667U;
	int8_t x170 = INT8_MIN;
	int32_t x171 = INT32_MIN;
	uint64_t x172 = UINT64_MAX;
	static volatile uint64_t t38 = 8871LLU;

    t38 = (x169^(x170^(x171-x172)));

    if (t38 != 2147481066LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x173 = INT32_MIN;
	uint64_t x176 = 95478229464LLU;
	volatile uint64_t t39 = 16375704LLU;

    t39 = (x173^(x174^(x175-x176)));

    if (t39 != 95647838596LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x177 = -913;
	int64_t x178 = INT64_MIN;
	volatile int16_t x179 = 1;
	volatile int64_t x180 = -8305572058295548LL;
	static volatile int64_t t40 = -546880LL;

    t40 = (x177^(x178^(x179-x180)));

    if (t40 != 9215066464796479634LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x184 = UINT16_MAX;

    t41 = (x181^(x182^(x183-x184)));

    if (t41 != 148855LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x185 = UINT16_MAX;
	uint32_t x186 = 25U;
	static volatile int64_t x187 = -1LL;
	volatile int64_t x188 = -104597560579193184LL;
	volatile int64_t t42 = -25454LL;

    t42 = (x185^(x186^(x187-x188)));

    if (t42 != 104597560579131065LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x193 = 45U;
	volatile int64_t x194 = INT64_MIN;
	int8_t x196 = -1;
	volatile int64_t t43 = 56LL;

    t43 = (x193^(x194^(x195-x196)));

    if (t43 != -9223372036854756487LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x197 = 25U;
	uint64_t x198 = UINT64_MAX;
	uint32_t x199 = 83147883U;
	uint8_t x200 = UINT8_MAX;
	volatile uint64_t t44 = 4LLU;

    t44 = (x197^(x198^(x199-x200)));

    if (t44 != 18446744073626403978LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x201 = INT32_MIN;
	volatile int16_t x202 = INT16_MIN;
	uint32_t x203 = 1U;
	static volatile uint32_t x204 = 5238U;
	uint32_t t45 = 134835U;

    t45 = (x201^(x202^(x203-x204)));

    if (t45 != 2147511179U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x205 = INT32_MAX;
	static int32_t x206 = -285;
	static int32_t x207 = 47;
	volatile int8_t x208 = 55;
	int32_t t46 = -5031516;

    t46 = (x205^(x206^(x207-x208)));

    if (t46 != 2147483364) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x210 = -7495544931LL;
	int16_t x212 = INT16_MAX;
	static int64_t t47 = -392379997LL;

    t47 = (x209^(x210^(x211-x212)));

    if (t47 != 26457383913401LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x213 = UINT32_MAX;
	uint32_t x214 = 919893193U;
	uint64_t x216 = 3LLU;
	static uint64_t t48 = 8287LLU;

    t48 = (x213^(x214^(x215-x216)));

    if (t48 != 18446744072481961163LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x217 = INT16_MIN;
	volatile int64_t x218 = INT64_MAX;
	static int16_t x219 = 17;
	uint32_t x220 = UINT32_MAX;
	static volatile int64_t t49 = 0LL;

    t49 = (x217^(x218^(x219-x220)));

    if (t49 != -9223372036854743059LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int64_t x222 = INT64_MIN;
	volatile int64_t t50 = 589385LL;

    t50 = (x221^(x222^(x223-x224)));

    if (t50 != 9223372036853966280LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x226 = -50;
	static int32_t x227 = INT32_MAX;
	uint16_t x228 = 3896U;
	int32_t t51 = 315;

    t51 = (x225^(x226^(x227-x228)));

    if (t51 != 2147454729) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x230 = 428631442005950LLU;
	int16_t x231 = -1;
	uint16_t x232 = 27U;
	uint64_t t52 = 8595784418577LLU;

    t52 = (x229^(x230^(x231-x232)));

    if (t52 != 18446315442267545699LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x237 = 599U;
	static volatile uint64_t x238 = UINT64_MAX;
	int16_t x239 = -1931;
	uint16_t x240 = 4U;
	volatile uint64_t t53 = 2106LLU;

    t53 = (x237^(x238^(x239-x240)));

    if (t53 != 1497LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int64_t x241 = -1LL;
	int8_t x242 = INT8_MIN;
	static uint32_t x243 = 408704U;
	int32_t x244 = -257849656;
	static int64_t t54 = 2117823966LL;

    t54 = (x241^(x242^(x243-x244)));

    if (t54 != -4036708921LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x245 = UINT64_MAX;
	uint8_t x246 = UINT8_MAX;
	uint32_t x247 = 12U;
	static volatile int32_t x248 = INT32_MIN;

    t55 = (x245^(x246^(x247-x248)));

    if (t55 != 18446744071562067724LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x250 = -7;
	uint16_t x252 = 4U;

    t56 = (x249^(x250^(x251-x252)));

    if (t56 != 18446744073709313868LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x253 = UINT16_MAX;
	uint8_t x255 = UINT8_MAX;

    t57 = (x253^(x254^(x255-x256)));

    if (t57 != -38445) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x257 = -1LL;
	int8_t x258 = 1;
	uint8_t x260 = 58U;

    t58 = (x257^(x258^(x259-x260)));

    if (t58 != -9223372036854775749LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x261 = INT32_MIN;
	static int32_t x262 = -718768;
	static volatile int8_t x263 = -1;
	static volatile int64_t x264 = -1252LL;
	int64_t t59 = 23398611818868652LL;

    t59 = (x261^(x262^(x263-x264)));

    if (t59 != 2146766003LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x265 = 3266866LLU;
	volatile uint16_t x266 = UINT16_MAX;
	uint64_t t60 = 302624696595145LLU;

    t60 = (x265^(x266^(x267-x268)));

    if (t60 != 18446744071565289109LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x273 = -1LL;
	volatile uint8_t x274 = 2U;
	volatile uint8_t x275 = 5U;

    t61 = (x273^(x274^(x275-x276)));

    if (t61 != -2557419671LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x277 = 11;
	int32_t x278 = INT32_MAX;
	int16_t x279 = 4;
	int32_t x280 = INT32_MAX;
	static int32_t t62 = 166902;

    t62 = (x277^(x278^(x279-x280)));

    if (t62 != -15) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x282 = -1;
	static volatile int32_t x283 = INT32_MIN;
	volatile uint64_t t63 = 124480406940050212LLU;

    t63 = (x281^(x282^(x283-x284)));

    if (t63 != 18446743788696030123LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x285 = INT16_MIN;
	int16_t x286 = INT16_MIN;
	static uint64_t x287 = 4006LLU;
	int64_t x288 = -193838402LL;
	volatile uint64_t t64 = 168LLU;

    t64 = (x285^(x286^(x287-x288)));

    if (t64 != 193842408LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x289 = 156LLU;
	volatile uint64_t x290 = UINT64_MAX;
	uint8_t x291 = 117U;
	uint64_t t65 = 1436826963LLU;

    t65 = (x289^(x290^(x291-x292)));

    if (t65 != 65301LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x293 = 29U;
	uint64_t x294 = 6129LLU;
	uint16_t x295 = UINT16_MAX;
	volatile int8_t x296 = 1;
	static volatile uint64_t t66 = 6278481213967LLU;

    t66 = (x293^(x294^(x295-x296)));

    if (t66 != 59410LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x297 = -1LL;
	int16_t x298 = 6050;
	int32_t x299 = INT32_MIN;
	volatile uint32_t x300 = 1553U;

    t67 = (x297^(x298^(x299-x300)));

    if (t67 != -2147479118LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x301 = UINT64_MAX;
	static int8_t x303 = -1;
	static volatile uint64_t t68 = 2742LLU;

    t68 = (x301^(x302^(x303-x304)));

    if (t68 != 34866277LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x305 = 116U;
	int64_t x306 = INT64_MIN;
	volatile int16_t x307 = -1;
	int64_t t69 = -3432136576364LL;

    t69 = (x305^(x306^(x307-x308)));

    if (t69 != -9223372036854774427LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x309 = INT16_MIN;
	uint32_t x310 = 32621U;
	int16_t x311 = INT16_MAX;
	int16_t x312 = 46;
	uint32_t t70 = 1U;

    t70 = (x309^(x310^(x311-x312)));

    if (t70 != 4294934716U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x313 = UINT64_MAX;
	uint32_t x314 = 5722506U;
	volatile int8_t x315 = INT8_MAX;
	uint32_t x316 = 160U;
	volatile uint64_t t71 = 3655435336261LLU;

    t71 = (x313^(x314^(x315-x316)));

    if (t71 != 18446744069420306858LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x317 = 364748127U;
	int16_t x319 = INT16_MIN;
	int64_t x320 = -32LL;

    t72 = (x317^(x318^(x319-x320)));

    if (t72 != -364765826LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x321 = 17U;
	int32_t x322 = INT32_MIN;
	int32_t x323 = INT32_MAX;
	volatile uint8_t x324 = UINT8_MAX;
	int32_t t73 = 61304920;

    t73 = (x321^(x322^(x323-x324)));

    if (t73 != -239) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x325 = -1;
	int32_t x326 = 115532;
	uint16_t x327 = UINT16_MAX;
	int64_t x328 = -1LL;
	static volatile int64_t t74 = -11345408989LL;

    t74 = (x325^(x326^(x327-x328)));

    if (t74 != -49997LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x333 = 249309U;
	uint32_t x334 = 67U;
	volatile int16_t x336 = INT16_MIN;
	int64_t t75 = 118LL;

    t75 = (x333^(x334^(x335-x336)));

    if (t75 != -9223372036854559330LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x337 = UINT8_MAX;
	uint8_t x338 = 3U;
	uint64_t x339 = 54239LLU;
	volatile uint64_t x340 = 108868228LLU;
	volatile uint64_t t76 = 3852515824181177LLU;

    t76 = (x337^(x338^(x339-x340)));

    if (t76 != 18446744073600737703LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x341 = -180;
	int8_t x342 = 20;
	static int16_t x343 = -473;
	int16_t x344 = -15;

    t77 = (x341^(x342^(x343-x344)));

    if (t77 != 366) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint16_t x345 = UINT16_MAX;
	volatile int16_t x346 = INT16_MIN;
	int32_t x347 = INT32_MIN;
	int8_t x348 = -1;
	static int32_t t78 = 1453;

    t78 = (x345^(x346^(x347-x348)));

    if (t78 != 2147450878) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x349 = INT32_MAX;
	int16_t x350 = INT16_MIN;
	int32_t x351 = -1;
	int32_t x352 = INT32_MIN;
	int32_t t79 = 42656428;

    t79 = (x349^(x350^(x351-x352)));

    if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x357 = -1;
	int16_t x358 = -1;
	static volatile int32_t x359 = INT32_MAX;
	int64_t t80 = 86204676190LL;

    t80 = (x357^(x358^(x359-x360)));

    if (t80 != 2147298755LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x361 = 1U;
	volatile uint16_t x363 = 173U;
	uint16_t x364 = UINT16_MAX;

    t81 = (x361^(x362^(x363-x364)));

    if (t81 != -65369) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x365 = UINT8_MAX;
	static int64_t x366 = -1558156296LL;
	static int16_t x368 = 102;

    t82 = (x365^(x366^(x367-x368)));

    if (t82 != 1558156446LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x370 = 2U;
	uint32_t t83 = 0U;

    t83 = (x369^(x370^(x371-x372)));

    if (t83 != 226661323U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x377 = UINT32_MAX;
	volatile uint64_t x378 = UINT64_MAX;
	static uint32_t x380 = 232078U;
	uint64_t t84 = 0LLU;

    t84 = (x377^(x378^(x379-x380)));

    if (t84 != 18446744073709319410LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x381 = -1LL;
	uint8_t x382 = 1U;
	uint32_t x383 = 253492404U;
	static volatile int64_t t85 = -1LL;

    t85 = (x381^(x382^(x383-x384)));

    if (t85 != -192881402LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x385 = INT8_MIN;
	static uint16_t x387 = UINT16_MAX;
	static int8_t x388 = INT8_MAX;
	int64_t t86 = 273003493827LL;

    t86 = (x385^(x386^(x387-x388)));

    if (t86 != 56669LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x389 = UINT16_MAX;
	int16_t x390 = INT16_MIN;
	int64_t x391 = -2222137827134404634LL;
	volatile int64_t t87 = -18693091281LL;

    t87 = (x389^(x390^(x391-x392)));

    if (t87 != 2222137827134372120LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x393 = UINT8_MAX;
	uint16_t x394 = UINT16_MAX;
	static int64_t t88 = 2097179793LL;

    t88 = (x393^(x394^(x395-x396)));

    if (t88 != -130818LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x405 = 33429LL;
	static volatile int32_t x406 = -1;
	uint32_t x407 = UINT32_MAX;
	volatile int64_t x408 = 734945200LL;
	volatile int64_t t89 = -218492LL;

    t89 = (x405^(x406^(x407-x408)));

    if (t89 != -3559989979LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x414 = INT16_MIN;
	int16_t x415 = -1;
	int8_t x416 = -33;

    t90 = (x413^(x414^(x415-x416)));

    if (t90 != 18446744073709523478LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x417 = UINT8_MAX;
	volatile uint64_t x418 = UINT64_MAX;
	static volatile int32_t x419 = -1;
	volatile int32_t x420 = 51;

    t91 = (x417^(x418^(x419-x420)));

    if (t91 != 204LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x423 = INT8_MIN;
	int16_t x424 = -90;

    t92 = (x421^(x422^(x423-x424)));

    if (t92 != 9223371192760389103LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x425 = INT64_MAX;
	static uint32_t x426 = 206548225U;
	volatile uint32_t x427 = 5U;
	static int64_t t93 = 7201992857525084LL;

    t93 = (x425^(x426^(x427-x428)));

    if (t93 != -9223372036648227646LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x429 = INT32_MIN;
	int64_t x430 = -419702LL;
	int8_t x431 = INT8_MAX;
	int32_t x432 = -1;
	volatile int64_t t94 = -10097404703LL;

    t94 = (x429^(x430^(x431-x432)));

    if (t94 != 2147063818LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x437 = -15;
	uint8_t x438 = 4U;
	volatile int8_t x439 = INT8_MIN;
	uint16_t x440 = 8518U;

    t95 = (x437^(x438^(x439-x440)));

    if (t95 != 8655) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x441 = INT32_MIN;
	volatile int64_t x442 = INT64_MIN;
	volatile int64_t t96 = -11025063548929LL;

    t96 = (x441^(x442^(x443-x444)));

    if (t96 != -2147483598LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x445 = INT16_MIN;
	int16_t x446 = INT16_MAX;
	uint64_t x447 = 15257640450LLU;
	volatile int64_t x448 = -1LL;

    t97 = (x445^(x446^(x447-x448)));

    if (t97 != 18446744058451911164LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x453 = INT64_MIN;
	int8_t x454 = 1;
	volatile uint64_t x455 = UINT64_MAX;
	volatile uint32_t x456 = 365U;
	static volatile uint64_t t98 = 14964325LLU;

    t98 = (x453^(x454^(x455-x456)));

    if (t98 != 9223372036854775443LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x457 = INT8_MIN;
	int8_t x458 = 2;
	int32_t x459 = INT32_MAX;
	static int16_t x460 = 0;
	volatile int32_t t99 = -40729701;

    t99 = (x457^(x458^(x459-x460)));

    if (t99 != -2147483523) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x462 = -1;
	static int64_t x463 = INT64_MAX;
	uint32_t x464 = UINT32_MAX;
	volatile int64_t t100 = -108155780LL;

    t100 = (x461^(x462^(x463-x464)));

    if (t100 != -9223372032526130768LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x465 = 71167885030LLU;
	static volatile uint64_t x466 = UINT64_MAX;
	static int64_t x467 = INT64_MIN;

    t101 = (x465^(x466^(x467-x468)));

    if (t101 != 9223371965686890776LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x469 = 12;
	int32_t x470 = 62942;
	static int64_t x471 = INT64_MIN;
	uint64_t x472 = UINT64_MAX;
	static volatile uint64_t t102 = 2014357150LLU;

    t102 = (x469^(x470^(x471-x472)));

    if (t102 != 9223372036854838739LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x475 = UINT32_MAX;

    t103 = (x473^(x474^(x475-x476)));

    if (t103 != 9223372353985716581LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x478 = INT64_MAX;
	int32_t x479 = INT32_MAX;
	uint8_t x480 = 54U;
	volatile int64_t t104 = 111641733667LL;

    t104 = (x477^(x478^(x479-x480)));

    if (t104 != -9223372034707324874LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x483 = 4324LL;
	uint32_t x484 = 1283033889U;
	static int64_t t105 = 84641962586299LL;

    t105 = (x481^(x482^(x483-x484)));

    if (t105 != 1283029591LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x485 = -107116571623025LL;
	int64_t x486 = INT64_MIN;
	static int32_t x487 = -1;
	static uint64_t x488 = UINT64_MAX;
	volatile uint64_t t106 = 5830227LLU;

    t106 = (x485^(x486^(x487-x488)));

    if (t106 != 9223264920283152783LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x493 = 628517081LL;
	volatile int8_t x494 = INT8_MIN;
	int16_t x496 = INT16_MIN;
	volatile int64_t t107 = 1229424448LL;

    t107 = (x493^(x494^(x495-x496)));

    if (t107 != 628502283LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x497 = 254U;
	volatile int16_t x500 = 3;
	int32_t t108 = 53358;

    t108 = (x497^(x498^(x499-x500)));

    if (t108 != -32515) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x502 = INT64_MIN;
	volatile int16_t x503 = INT16_MIN;
	int8_t x504 = -1;
	int64_t t109 = -20148LL;

    t109 = (x501^(x502^(x503-x504)));

    if (t109 != 9223372036854743058LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int8_t x509 = 5;
	uint64_t x510 = 15873440389742LLU;
	uint64_t x511 = UINT64_MAX;
	int16_t x512 = 378;

    t110 = (x509^(x510^(x511-x512)));

    if (t110 != 18446728200269161710LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x514 = 335;
	uint64_t x515 = UINT64_MAX;
	int32_t x516 = 128334114;
	uint64_t t111 = 401LLU;

    t111 = (x513^(x514^(x515-x516)));

    if (t111 != 128333842LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x517 = INT32_MIN;
	volatile uint32_t x518 = 0U;
	volatile int8_t x520 = 0;
	volatile int64_t t112 = -688167LL;

    t112 = (x517^(x518^(x519-x520)));

    if (t112 != -5885264946407912LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x521 = INT64_MAX;
	uint16_t x522 = 504U;
	static int32_t x523 = -72835534;
	static int8_t x524 = 32;
	static volatile int64_t t113 = 5881909858346320LL;

    t113 = (x521^(x522^(x523-x524)));

    if (t113 != -9223372036781940715LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x525 = INT16_MAX;
	int32_t x526 = -10461033;
	volatile uint64_t x528 = 117LLU;
	volatile uint64_t t114 = 893969LLU;

    t114 = (x525^(x526^(x527-x528)));

    if (t114 != 18446744073699073891LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x531 = 14;
	uint64_t x532 = 11107013LLU;
	volatile uint64_t t115 = 48LLU;

    t115 = (x529^(x530^(x531-x532)));

    if (t115 != 9223372036865882806LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x533 = INT32_MIN;
	int8_t x535 = INT8_MIN;
	static volatile int16_t x536 = INT16_MIN;

    t116 = (x533^(x534^(x535-x536)));

    if (t116 != 18008561121569324270LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x537 = 625318068523799241LLU;
	uint16_t x538 = 35U;
	int32_t x539 = INT32_MAX;
	volatile uint16_t x540 = UINT16_MAX;
	volatile uint64_t t117 = 4618980LLU;

    t117 = (x537^(x538^(x539-x540)));

    if (t117 != 625318067383145194LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x541 = -1;
	int16_t x542 = -7200;
	volatile uint16_t x544 = UINT16_MAX;
	volatile int32_t t118 = -188984124;

    t118 = (x541^(x542^(x543-x544)));

    if (t118 != -58209) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x545 = INT8_MIN;
	uint8_t x546 = 1U;
	uint32_t x547 = UINT32_MAX;
	static int64_t x548 = -7928092312252LL;
	volatile int64_t t119 = 488509477031LL;

    t119 = (x545^(x546^(x547-x548)));

    if (t119 != -7932387279558LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x551 = 0U;
	uint16_t x552 = UINT16_MAX;

    t120 = (x549^(x550^(x551-x552)));

    if (t120 != 18446744073709487536LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x553 = -1LL;
	int8_t x554 = INT8_MIN;
	static volatile int8_t x555 = -1;
	uint32_t x556 = 1U;
	int64_t t121 = 4333652889778516770LL;

    t121 = (x553^(x554^(x555-x556)));

    if (t121 != -127LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x558 = 28755U;
	static int8_t x559 = 0;
	volatile uint32_t t122 = 44003482U;

    t122 = (x557^(x558^(x559-x560)));

    if (t122 != 28755U) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x564 = -1;
	int64_t t123 = 118939500505LL;

    t123 = (x561^(x562^(x563-x564)));

    if (t123 != 410583446LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x566 = 3093753U;
	int8_t x567 = INT8_MIN;
	uint8_t x568 = 76U;

    t124 = (x565^(x566^(x567-x568)));

    if (t124 != 2150577202U) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int8_t x569 = INT8_MAX;
	volatile int32_t x570 = INT32_MIN;
	uint32_t x571 = UINT32_MAX;
	volatile uint32_t t125 = 285U;

    t125 = (x569^(x570^(x571-x572)));

    if (t125 != 2147418239U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x573 = 2761083U;
	uint32_t x574 = 43U;
	uint32_t x576 = UINT32_MAX;
	uint32_t t126 = 0U;

    t126 = (x573^(x574^(x575-x576)));

    if (t126 != 4292190545U) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x577 = INT32_MIN;
	int8_t x578 = INT8_MAX;
	volatile uint32_t x580 = 61510U;
	uint32_t t127 = 12U;

    t127 = (x577^(x578^(x579-x580)));

    if (t127 != 2147487686U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x582 = -1;
	int64_t x583 = -117743LL;
	volatile uint16_t x584 = 3U;

    t128 = (x581^(x582^(x583-x584)));

    if (t128 != -2147365903LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x585 = 1;
	volatile int16_t x586 = INT16_MIN;
	int16_t x588 = -1;
	volatile int32_t t129 = 605441074;

    t129 = (x585^(x586^(x587-x588)));

    if (t129 != -32765) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x589 = INT32_MIN;
	uint8_t x590 = UINT8_MAX;
	volatile uint32_t x591 = UINT32_MAX;
	uint16_t x592 = UINT16_MAX;
	uint32_t t130 = 269393U;

    t130 = (x589^(x590^(x591-x592)));

    if (t130 != 2147418367U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x593 = INT64_MIN;
	uint8_t x594 = UINT8_MAX;
	uint64_t x595 = 2854702785444562116LLU;
	int8_t x596 = INT8_MIN;

    t131 = (x593^(x594^(x595-x596)));

    if (t131 != 12078074822299338171LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x597 = 0U;
	int8_t x599 = -1;
	int32_t t132 = -296913;

    t132 = (x597^(x598^(x599-x600)));

    if (t132 != -29772) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x601 = INT32_MAX;
	int64_t x602 = -1LL;
	int8_t x604 = 1;
	uint64_t t133 = 98LLU;

    t133 = (x601^(x602^(x603-x604)));

    if (t133 != 18446744071567312161LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x605 = 257U;
	uint8_t x606 = UINT8_MAX;
	uint32_t x607 = 800082U;

    t134 = (x605^(x606^(x607-x608)));

    if (t134 != 2148283564U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x609 = INT16_MIN;
	static int64_t x610 = INT64_MAX;
	int64_t x611 = 254116LL;
	static volatile int32_t x612 = INT32_MIN;

    t135 = (x609^(x610^(x611-x612)));

    if (t135 != -9223372034707054757LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x613 = INT8_MIN;
	volatile int64_t x614 = 1590026LL;
	volatile int64_t x615 = INT64_MIN;
	volatile uint64_t x616 = 1392546292LLU;

    t136 = (x613^(x614^(x615-x616)));

    if (t136 != 9223372038248911494LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x621 = 1;
	static int8_t x623 = INT8_MIN;
	static uint16_t x624 = UINT16_MAX;
	static volatile int64_t t137 = -20LL;

    t137 = (x621^(x622^(x623-x624)));

    if (t137 != 65663LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x625 = INT64_MIN;
	uint32_t x628 = 14820U;
	volatile int64_t t138 = -26572LL;

    t138 = (x625^(x626^(x627-x628)));

    if (t138 != -9223372036854760985LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x629 = INT8_MIN;
	volatile int64_t x630 = INT64_MAX;
	static volatile int8_t x631 = 10;
	int8_t x632 = INT8_MIN;
	static int64_t t139 = 5870LL;

    t139 = (x629^(x630^(x631-x632)));

    if (t139 != -9223372036854775563LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x637 = -39;
	static volatile uint16_t x638 = UINT16_MAX;
	uint64_t x640 = UINT64_MAX;

    t140 = (x637^(x638^(x639-x640)));

    if (t140 != 18446744073709491507LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x641 = UINT8_MAX;
	int64_t x643 = -1LL;
	static uint32_t x644 = 2U;

    t141 = (x641^(x642^(x643-x644)));

    if (t141 != 36437LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x646 = 67U;
	static int8_t x647 = -1;
	static volatile uint32_t x648 = UINT32_MAX;
	static volatile uint32_t t142 = 7709915U;

    t142 = (x645^(x646^(x647-x648)));

    if (t142 != 66U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x649 = 9U;
	int64_t x650 = -3192977135LL;
	uint64_t x651 = 2180893538LLU;
	int8_t x652 = -1;
	uint64_t t143 = 710843940379LLU;

    t143 = (x649^(x650^(x651-x652)));

    if (t143 != 18446744072641233531LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x653 = 54U;
	uint32_t x654 = 483290U;
	volatile uint32_t x655 = 390645U;
	uint32_t x656 = 7262036U;
	static uint32_t t144 = 25U;

    t144 = (x653^(x654^(x655-x656)));

    if (t144 != 4287658317U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x657 = UINT8_MAX;
	int64_t x659 = 203LL;
	int16_t x660 = -1;
	int64_t t145 = 1054977309LL;

    t145 = (x657^(x658^(x659-x660)));

    if (t145 != -51LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x661 = -26;
	uint8_t x662 = UINT8_MAX;
	int16_t x663 = INT16_MIN;
	int64_t t146 = -58225LL;

    t146 = (x661^(x662^(x663-x664)));

    if (t146 != -9223372036854743271LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x666 = INT8_MIN;
	int32_t t147 = 3637;

    t147 = (x665^(x666^(x667-x668)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x669 = 1;
	int16_t x670 = INT16_MIN;
	uint64_t x672 = UINT64_MAX;

    t148 = (x669^(x670^(x671-x672)));

    if (t148 != 18446744073686103754LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x673 = -1LL;
	int32_t x674 = -1;
	uint32_t x676 = UINT32_MAX;
	int64_t t149 = 2949598LL;

    t149 = (x673^(x674^(x675-x676)));

    if (t149 != -4294967295LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x677 = INT32_MIN;
	volatile int32_t x678 = 1;
	int16_t x679 = INT16_MIN;

    t150 = (x677^(x678^(x679-x680)));

    if (t150 != 2147450880) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x681 = INT32_MIN;
	uint8_t x682 = 0U;
	uint32_t x683 = UINT32_MAX;
	uint32_t t151 = 7295261U;

    t151 = (x681^(x682^(x683-x684)));

    if (t151 != 2147483537U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x686 = 8;
	int8_t x687 = INT8_MAX;
	uint64_t x688 = 1916876684LLU;
	volatile uint64_t t152 = 2294361710522094LLU;

    t152 = (x685^(x686^(x687-x688)));

    if (t152 != 18446744066698560420LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x689 = 3805U;
	int32_t x690 = -1;
	volatile int16_t x691 = INT16_MIN;
	static volatile uint32_t t153 = 221510U;

    t153 = (x689^(x690^(x691-x692)));

    if (t153 != 28963U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x695 = UINT8_MAX;
	int16_t x696 = -1;

    t154 = (x693^(x694^(x695-x696)));

    if (t154 != -257LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x697 = -1781837;
	int64_t x698 = INT64_MIN;
	int64_t x700 = 3517293821008412LL;
	volatile int64_t t155 = -28355LL;

    t155 = (x697^(x698^(x699-x700)));

    if (t155 != -9219854745179608496LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x702 = 6499;
	static int64_t x703 = 14440LL;
	int64_t x704 = -1LL;
	int64_t t156 = -2486262LL;

    t156 = (x701^(x702^(x703-x704)));

    if (t156 != -8688LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x705 = 38U;
	int32_t x706 = INT32_MIN;
	static int8_t x707 = -1;
	int8_t x708 = INT8_MIN;

    t157 = (x705^(x706^(x707-x708)));

    if (t157 != -2147483559) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x713 = INT8_MIN;
	uint64_t x714 = 22398752LLU;
	static int64_t x716 = 73329975160241542LL;
	volatile uint64_t t158 = 127922LLU;

    t158 = (x713^(x714^(x715-x716)));

    if (t158 != 73329975172118874LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x718 = INT32_MIN;
	int16_t x719 = -1;
	int16_t x720 = 976;
	static int32_t t159 = 1127;

    t159 = (x717^(x718^(x719-x720)));

    if (t159 != -2147482705) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x721 = -1;
	int32_t x722 = INT32_MAX;
	int8_t x723 = INT8_MIN;
	static int16_t x724 = -1;
	static volatile int32_t t160 = 8;

    t160 = (x721^(x722^(x723-x724)));

    if (t160 != 2147483521) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int32_t x725 = INT32_MAX;
	volatile int16_t x726 = INT16_MIN;
	uint32_t x728 = 17072445U;
	uint32_t t161 = 617U;

    t161 = (x725^(x726^(x727-x728)));

    if (t161 != 2130379069U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x729 = 261579U;
	volatile uint16_t x731 = UINT16_MAX;
	int8_t x732 = -2;
	uint32_t t162 = 10592341U;

    t162 = (x729^(x730^(x731-x732)));

    if (t162 != 4294771253U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x733 = -1;
	int8_t x734 = INT8_MAX;
	int16_t x735 = -1;
	int16_t x736 = -1;
	int32_t t163 = 107297619;

    t163 = (x733^(x734^(x735-x736)));

    if (t163 != -128) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x737 = -89105970;
	volatile uint32_t x738 = 6649U;
	uint8_t x739 = 3U;
	int64_t x740 = -284499912454398670LL;
	int64_t t164 = -1798858021LL;

    t164 = (x737^(x738^(x739-x740)));

    if (t164 != -284499912399707418LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x745 = 31U;
	static volatile uint16_t x746 = 3991U;
	int64_t x747 = 240546574589220711LL;
	int8_t x748 = INT8_MIN;
	static int64_t t165 = -158796762806624225LL;

    t165 = (x745^(x746^(x747-x748)));

    if (t165 != 240546574589220975LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x749 = 6072;
	int64_t x750 = INT64_MIN;
	int8_t x751 = 1;
	uint64_t x752 = 4009247046783LLU;
	uint64_t t166 = 1997920441133163LLU;

    t166 = (x749^(x750^(x751-x752)));

    if (t166 != 9223368027607733306LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x753 = 83U;
	volatile int8_t x754 = -1;
	uint8_t x755 = 9U;
	volatile int64_t x756 = INT64_MAX;
	int64_t t167 = 3137234LL;

    t167 = (x753^(x754^(x755-x756)));

    if (t167 != 9223372036854775718LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x758 = INT8_MIN;
	uint64_t x760 = UINT64_MAX;
	uint64_t t168 = 4300128LLU;

    t168 = (x757^(x758^(x759-x760)));

    if (t168 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x761 = 1442LLU;
	static uint32_t x762 = UINT32_MAX;
	static volatile int16_t x764 = INT16_MAX;
	static volatile uint64_t t169 = 1371LLU;

    t169 = (x761^(x762^(x763-x764)));

    if (t169 != 31581LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x769 = -1LL;
	int16_t x770 = INT16_MIN;
	uint32_t x771 = 160U;
	int32_t x772 = 1;
	int64_t t170 = 0LL;

    t170 = (x769^(x770^(x771-x772)));

    if (t170 != -4294934688LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x773 = 353380892793394LL;
	volatile int64_t x774 = INT64_MAX;
	int64_t x775 = 0LL;
	int8_t x776 = -1;

    t171 = (x773^(x774^(x775-x776)));

    if (t171 != 9223018655961982412LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x777 = UINT32_MAX;
	uint16_t x778 = 5U;
	volatile int64_t x779 = 1LL;
	int32_t x780 = INT32_MIN;
	int64_t t172 = 2676483764552LL;

    t172 = (x777^(x778^(x779-x780)));

    if (t172 != 2147483643LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x781 = INT16_MIN;
	volatile int64_t x783 = INT64_MAX;
	volatile int8_t x784 = 3;
	int64_t t173 = -18LL;

    t173 = (x781^(x782^(x783-x784)));

    if (t173 != 9223372036854743043LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x785 = 10U;
	static int16_t x786 = 8;
	uint32_t x787 = 986U;
	static int32_t x788 = -259601;
	volatile uint32_t t174 = 17U;

    t174 = (x785^(x786^(x787-x788)));

    if (t174 != 260585U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x789 = -123805137;
	int16_t x790 = INT16_MIN;
	uint64_t x791 = 134LLU;
	int16_t x792 = INT16_MIN;
	volatile uint64_t t175 = 11684821LLU;

    t175 = (x789^(x790^(x791-x792)));

    if (t175 != 123855529LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x793 = INT64_MAX;
	uint64_t x794 = 328569LLU;
	int32_t x795 = -1;
	uint16_t x796 = 6018U;
	uint64_t t176 = 1LLU;

    t176 = (x793^(x794^(x795-x796)));

    if (t176 != 9223372036855108859LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x798 = 249;
	int64_t x800 = INT64_MAX;
	static int64_t t177 = 3972240452LL;

    t177 = (x797^(x798^(x799-x800)));

    if (t177 != -9223371910952170295LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x805 = 16U;
	uint16_t x807 = 4U;
	int64_t x808 = INT64_MAX;
	static int64_t t178 = -13197LL;

    t178 = (x805^(x806^(x807-x808)));

    if (t178 != 9223372034707292181LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x809 = -3;
	int8_t x810 = INT8_MAX;
	volatile uint64_t x811 = 3686647837137LLU;
	volatile uint64_t t179 = 343300LLU;

    t179 = (x809^(x810^(x811-x812)));

    if (t179 != 18446740389209198160LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x817 = 353292263;
	uint64_t x818 = 180LLU;
	volatile uint8_t x819 = 1U;
	static volatile int32_t x820 = -8257252;
	volatile uint64_t t180 = 615701341140331702LLU;

    t180 = (x817^(x818^(x819-x820)));

    if (t180 != 359870902LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x821 = INT16_MIN;
	volatile int32_t x822 = 873;
	int8_t x823 = -1;
	int16_t x824 = INT16_MIN;

    t181 = (x821^(x822^(x823-x824)));

    if (t181 != -874) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x825 = INT8_MIN;
	uint16_t x826 = UINT16_MAX;
	static uint8_t x827 = UINT8_MAX;
	uint32_t x828 = 247U;
	volatile uint32_t t182 = 0U;

    t182 = (x825^(x826^(x827-x828)));

    if (t182 != 4294901879U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x829 = -17;
	int8_t x831 = -1;
	volatile int32_t x832 = INT32_MIN;
	int32_t t183 = -683;

    t183 = (x829^(x830^(x831-x832)));

    if (t183 != 16) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x833 = 0U;
	volatile int8_t x835 = -1;
	static volatile int64_t t184 = 70742445164853998LL;

    t184 = (x833^(x834^(x835-x836)));

    if (t184 != 9223372036839607889LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x837 = 16U;
	uint8_t x838 = UINT8_MAX;
	static uint64_t x839 = 54638046LLU;
	volatile int32_t x840 = INT32_MIN;

    t185 = (x837^(x838^(x839-x840)));

    if (t185 != 2202121521LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x842 = 71U;
	int8_t x843 = -1;
	volatile uint16_t x844 = UINT16_MAX;
	static int32_t t186 = 1303;

    t186 = (x841^(x842^(x843-x844)));

    if (t186 != 2147418183) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x845 = 31918U;
	volatile int16_t x848 = -4537;
	volatile int32_t t187 = -28;

    t187 = (x845^(x846^(x847-x848)));

    if (t187 != 2147478807) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x849 = INT32_MAX;
	uint16_t x850 = UINT16_MAX;

    t188 = (x849^(x850^(x851-x852)));

    if (t188 != 2147352576LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x853 = INT16_MAX;
	uint8_t x854 = 33U;
	int32_t x855 = 8;
	int8_t x856 = INT8_MIN;
	int32_t t189 = -87222467;

    t189 = (x853^(x854^(x855-x856)));

    if (t189 != 32598) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x857 = 7U;
	uint32_t x858 = 924855U;
	volatile uint16_t x859 = 1450U;
	static volatile uint8_t x860 = UINT8_MAX;
	uint32_t t190 = 6U;

    t190 = (x857^(x858^(x859-x860)));

    if (t190 != 923675U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x861 = 1;
	static int8_t x862 = 23;
	static int8_t x863 = INT8_MIN;
	uint16_t x864 = 16104U;
	volatile int32_t t191 = -35108;

    t191 = (x861^(x862^(x863-x864)));

    if (t191 != -16242) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x865 = INT64_MIN;
	int64_t x868 = -1LL;
	int64_t t192 = -32LL;

    t192 = (x865^(x866^(x867-x868)));

    if (t192 != -9223372036854774756LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x869 = UINT32_MAX;
	int8_t x872 = INT8_MIN;
	volatile int64_t t193 = 1034842233935955LL;

    t193 = (x869^(x870^(x871-x872)));

    if (t193 != 4209237052LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x873 = 6U;
	int8_t x874 = INT8_MIN;
	uint32_t x875 = 1716934345U;
	volatile int16_t x876 = -1;
	uint32_t t194 = 42U;

    t194 = (x873^(x874^(x875-x876)));

    if (t194 != 2578032972U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x877 = 13882U;
	int64_t x878 = INT64_MIN;
	int8_t x879 = INT8_MIN;
	static int16_t x880 = -269;
	int64_t t195 = 5365697LL;

    t195 = (x877^(x878^(x879-x880)));

    if (t195 != -9223372036854761801LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x885 = -1;
	int64_t x886 = -59676807369LL;
	int32_t x887 = INT32_MIN;
	static int8_t x888 = -1;
	static int64_t t196 = -4915961LL;

    t196 = (x885^(x886^(x887-x888)));

    if (t196 != -58434793271LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x889 = INT8_MIN;
	static uint32_t x890 = 36U;
	volatile int16_t x891 = INT16_MAX;
	volatile int64_t t197 = 54032536147LL;

    t197 = (x889^(x890^(x891-x892)));

    if (t197 != -32860LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x893 = INT16_MIN;
	static volatile int8_t x894 = 5;
	volatile int8_t x895 = INT8_MIN;
	volatile int64_t t198 = 4236935045672772422LL;

    t198 = (x893^(x894^(x895-x896)));

    if (t198 != 32644LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x897 = INT32_MAX;
	static int64_t x898 = -2673187LL;
	static int64_t x900 = -319LL;
	static int64_t t199 = -14068797491033LL;

    t199 = (x897^(x898^(x899-x900)));

    if (t199 != -2144810339LL) { NG(); } else { ; }
	
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

