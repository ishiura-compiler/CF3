
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

volatile int32_t x1 = 37;
volatile uint8_t x4 = 7U;
volatile int32_t x6 = -445;
int16_t x8 = -1;
uint16_t x9 = UINT16_MAX;
uint64_t x12 = 408587302054958141LLU;
volatile int32_t x20 = INT32_MIN;
volatile int64_t t4 = 434276LL;
uint8_t x30 = 5U;
static int16_t x31 = INT16_MIN;
int16_t x40 = INT16_MIN;
static uint32_t x45 = 4683U;
static volatile uint64_t x50 = 3013705LLU;
static uint8_t x51 = UINT8_MAX;
int8_t x53 = INT8_MAX;
uint64_t x55 = UINT64_MAX;
static int32_t x65 = INT32_MIN;
uint8_t x73 = UINT8_MAX;
int8_t x76 = INT8_MIN;
static uint8_t x84 = 44U;
volatile int64_t x85 = -488575LL;
static volatile int64_t t21 = -1845LL;
volatile uint8_t x91 = 38U;
static uint64_t x92 = UINT64_MAX;
static volatile uint8_t x98 = 1U;
static int8_t x100 = 22;
int64_t t24 = 525573589LL;
int32_t x101 = INT32_MIN;
int16_t x104 = -1;
static uint64_t x108 = UINT64_MAX;
int32_t x109 = -1;
int32_t x113 = INT32_MAX;
uint64_t t32 = 103409LLU;
uint64_t x135 = UINT64_MAX;
int64_t x142 = INT64_MIN;
volatile int32_t x147 = 9622200;
int32_t x148 = -243;
volatile uint32_t t37 = 0U;
int16_t x153 = INT16_MIN;
volatile uint8_t x155 = 2U;
int32_t x159 = INT32_MAX;
int32_t t39 = 126974;
volatile uint32_t x165 = 206U;
uint64_t x169 = 135LLU;
uint32_t x170 = UINT32_MAX;
volatile uint64_t t42 = 970923863434303823LLU;
static volatile uint8_t x177 = 1U;
volatile uint32_t t47 = 78U;
int16_t x193 = 1097;
int32_t x200 = -1;
static volatile int32_t t49 = 1;
int8_t x205 = 0;
uint64_t x207 = UINT64_MAX;
static volatile uint64_t t51 = 1977029862245LLU;
volatile uint64_t t52 = 96260776137LLU;
volatile int32_t t54 = -135764;
static int64_t x221 = -380526056LL;
volatile uint8_t x224 = UINT8_MAX;
volatile int64_t t55 = 992331187023LL;
volatile int16_t x228 = INT16_MIN;
static uint16_t x237 = 851U;
static uint32_t x240 = 8794716U;
static uint64_t t60 = 0LLU;
volatile int64_t x251 = INT64_MIN;
static int8_t x258 = -1;
int16_t x263 = INT16_MIN;
volatile uint32_t t65 = 63U;
int32_t x267 = INT32_MIN;
int32_t x272 = 14356893;
int64_t t67 = -104LL;
volatile int16_t x281 = INT16_MIN;
uint8_t x284 = UINT8_MAX;
volatile uint16_t x286 = 404U;
int64_t x287 = INT64_MAX;
static volatile int64_t t71 = -1156796346LL;
int32_t x299 = INT32_MIN;
static volatile int32_t t74 = -8165;
volatile int64_t t75 = 141026912927784515LL;
volatile uint32_t x315 = 522U;
uint16_t x316 = UINT16_MAX;
int32_t x317 = INT32_MIN;
volatile int64_t x318 = 21658881LL;
int16_t x321 = INT16_MAX;
int32_t x323 = INT32_MIN;
volatile int16_t x324 = INT16_MAX;
int16_t x331 = INT16_MAX;
static volatile int64_t x334 = -1LL;
static uint64_t x336 = UINT64_MAX;
volatile uint64_t t83 = 12LLU;
static int16_t x342 = -1;
static int8_t x343 = INT8_MIN;
volatile uint32_t x350 = UINT32_MAX;
int64_t x351 = INT64_MIN;
volatile int64_t t87 = -82791788277298158LL;
volatile int64_t x355 = -1LL;
int16_t x356 = -244;
volatile int64_t t88 = -1606865LL;
int32_t x357 = INT32_MIN;
int8_t x364 = INT8_MIN;
int32_t t91 = -118925;
volatile int8_t x376 = -1;
volatile int32_t x379 = -1;
uint32_t x380 = 2016841U;
uint32_t x383 = 1031704880U;
int16_t x391 = INT16_MIN;
volatile uint64_t t97 = 292233LLU;
static uint32_t x398 = 28287364U;
int8_t x399 = INT8_MIN;
static volatile uint64_t t100 = 1155204LLU;
uint64_t x410 = UINT64_MAX;
uint8_t x413 = 3U;
volatile uint16_t x420 = UINT16_MAX;
static int32_t x422 = INT32_MIN;
static int8_t x425 = INT8_MIN;
static uint32_t t106 = 107848U;
int32_t t108 = -4;
uint8_t x441 = 94U;
static int64_t t114 = 40813LL;
int64_t x461 = 98262427LL;
volatile int32_t x463 = 1095;
int32_t x470 = INT32_MIN;
static volatile int8_t x471 = 2;
int16_t x481 = INT16_MAX;
static volatile int8_t x485 = 1;
int32_t x491 = 13055;
int32_t x492 = INT32_MIN;
static int32_t x503 = INT32_MIN;
int8_t x508 = INT8_MIN;
int64_t x510 = 52409310487394LL;
int8_t x513 = -7;
static uint32_t x519 = 361830644U;
static int8_t x523 = -1;
int64_t x524 = INT64_MIN;
static int64_t x526 = -883LL;
uint64_t x528 = 10LLU;
static uint64_t t131 = 12LLU;
uint16_t x530 = 3U;
uint8_t x533 = 0U;
static uint32_t x537 = 593204U;
uint16_t x539 = UINT16_MAX;
uint32_t t134 = 45U;
int64_t x544 = -1LL;
static volatile int16_t x545 = -1;
static uint16_t x547 = 22135U;
int32_t t136 = 1046584;
int8_t x549 = INT8_MIN;
static int64_t x553 = INT64_MAX;
static int64_t t139 = 1484789110LL;
static uint16_t x571 = 1765U;
volatile int64_t x580 = 834886587105155141LL;
uint64_t x582 = UINT64_MAX;
uint32_t x583 = 11U;
int16_t x592 = -3713;
int8_t x593 = INT8_MAX;
int32_t x596 = -1;
static volatile int32_t t148 = 2032579;
uint64_t x599 = 810340927257821LLU;
static int32_t x601 = -503;
uint64_t x603 = 91173LLU;
volatile int8_t x604 = INT8_MIN;
int64_t x609 = -8612129027LL;
volatile uint32_t x611 = 2569U;
int32_t x617 = 975409664;
int16_t x627 = 5656;
int64_t t157 = -12LL;
static volatile int64_t x633 = INT64_MIN;
int64_t x643 = 7107081150692LL;
uint8_t x645 = 116U;
int16_t x647 = -1;
int16_t x653 = 29;
int32_t x664 = INT32_MIN;
volatile int64_t t165 = -65883574984LL;
int16_t x666 = -1;
int32_t x668 = INT32_MIN;
volatile int16_t x669 = -1;
int64_t x674 = -11998LL;
static int64_t x684 = INT64_MIN;
int8_t x686 = 11;
uint32_t x687 = 3252U;
static uint64_t x689 = 2332453480492605502LLU;
volatile uint64_t x694 = 829569LLU;
uint64_t x695 = UINT64_MAX;
uint8_t x703 = 116U;
static uint8_t x714 = 5U;
static int8_t x721 = INT8_MIN;
volatile int64_t x733 = 25LL;
volatile int64_t t183 = 99910219946777621LL;
int8_t x743 = 39;
static int8_t x747 = 3;
uint32_t x748 = 14989U;
static int64_t x749 = INT64_MIN;
volatile int32_t x756 = INT32_MIN;
static volatile uint64_t t190 = 46548405900LLU;
int8_t x765 = -1;
volatile int64_t t192 = -5230764782512818LL;
uint16_t x777 = UINT16_MAX;
int16_t x795 = -32;
static volatile int64_t t198 = 58LL;
int8_t x800 = INT8_MIN;


void f0(void) {
    	static volatile int32_t x2 = -1;
	int32_t x3 = INT32_MIN;
	volatile int32_t t0 = 1;

    t0 = (x1/(x2^(x3^x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -2;
	int64_t x7 = -37978760LL;
	int64_t t1 = -1869472866476207180LL;

    t1 = (x5/(x6^(x7^x8)));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x10 = 158229884U;
	static uint16_t x11 = 1U;
	uint64_t t2 = 2181908964704622LLU;

    t2 = (x9/(x10^(x11^x12)));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MIN;
	int16_t x14 = INT16_MAX;
	volatile int16_t x15 = INT16_MIN;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -110715;

    t3 = (x13/(x14^(x15^x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 0U;
	static uint8_t x18 = 1U;
	int64_t x19 = INT64_MIN;

    t4 = (x17/(x18^(x19^x20)));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	int64_t x22 = -37943304LL;
	int64_t x23 = -1LL;
	uint16_t x24 = 18930U;
	int64_t t5 = 31659LL;

    t5 = (x21/(x22^(x23^x24)));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MAX;
	static int16_t x26 = 0;
	int64_t x27 = -108438057678LL;
	int16_t x28 = -1;
	int64_t t6 = -3561953038945959LL;

    t6 = (x25/(x26^(x27^x28)));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = -114259082852460652LL;
	int16_t x32 = 347;
	int64_t t7 = 119909108372LL;

    t7 = (x29/(x30^(x31^x32)));

    if (t7 != 3524556815733LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = 1;
	uint8_t x34 = UINT8_MAX;
	int8_t x35 = -7;
	int64_t x36 = INT64_MIN;
	int64_t t8 = -456372801995901552LL;

    t8 = (x33/(x34^(x35^x36)));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	uint16_t x38 = 1785U;
	int8_t x39 = INT8_MIN;
	int32_t t9 = 121;

    t9 = (x37/(x38^(x39^x40)));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x41 = UINT32_MAX;
	int64_t x42 = INT64_MIN;
	int16_t x43 = 7;
	int16_t x44 = 136;
	int64_t t10 = -8837704LL;

    t10 = (x41/(x42^(x43^x44)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x46 = 2U;
	uint32_t x47 = UINT32_MAX;
	int64_t x48 = INT64_MIN;
	int64_t t11 = -1235664243607744758LL;

    t11 = (x45/(x46^(x47^x48)));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -1LL;
	volatile int16_t x52 = INT16_MIN;
	uint64_t t12 = 128462LLU;

    t12 = (x49/(x50^(x51^x52)));

    if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x54 = INT64_MAX;
	int16_t x56 = -263;
	volatile uint64_t t13 = 15LLU;

    t13 = (x53/(x54^(x55^x56)));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x57 = 96LLU;
	uint16_t x58 = UINT16_MAX;
	volatile int8_t x59 = INT8_MIN;
	int32_t x60 = -1;
	uint64_t t14 = 1026548499933376LLU;

    t14 = (x57/(x58^(x59^x60)));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = UINT32_MAX;
	uint8_t x62 = 8U;
	volatile int8_t x63 = 0;
	int32_t x64 = INT32_MIN;
	uint32_t t15 = 89710U;

    t15 = (x61/(x62^(x63^x64)));

    if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x66 = INT64_MIN;
	int32_t x67 = 414005433;
	static uint32_t x68 = 1386U;
	volatile int64_t t16 = -103898LL;

    t16 = (x65/(x66^(x67^x68)));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = INT16_MIN;
	int32_t x70 = INT32_MIN;
	static int32_t x71 = INT32_MIN;
	uint16_t x72 = UINT16_MAX;
	int32_t t17 = 53429520;

    t17 = (x69/(x70^(x71^x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x74 = -1;
	int8_t x75 = INT8_MIN;
	int32_t t18 = -1;

    t18 = (x73/(x74^(x75^x76)));

    if (t18 != -255) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = -1;
	int16_t x78 = -81;
	static int32_t x79 = INT32_MAX;
	int64_t x80 = INT64_MIN;
	volatile int64_t t19 = 3092LL;

    t19 = (x77/(x78^(x79^x80)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	static uint16_t x82 = 11265U;
	volatile uint64_t x83 = 2756203423LLU;
	uint64_t t20 = 529095699LLU;

    t20 = (x81/(x82^(x83^x84)));

    if (t20 != 6692781964LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x86 = INT8_MIN;
	volatile uint32_t x87 = 1U;
	int8_t x88 = 18;

    t21 = (x85/(x86^(x87^x88)));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 3U;
	int32_t x90 = INT32_MIN;
	uint64_t t22 = 604405373913139886LLU;

    t22 = (x89/(x90^(x91^x92)));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = -1;
	volatile int64_t x94 = -1LL;
	int64_t x95 = -1LL;
	int32_t x96 = -1999979;
	volatile int64_t t23 = 289605974834LL;

    t23 = (x93/(x94^(x95^x96)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = -137LL;
	volatile int8_t x99 = -1;

    t24 = (x97/(x98^(x99^x100)));

    if (t24 != 5LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x102 = 450343960LL;
	volatile int8_t x103 = INT8_MAX;
	static int64_t t25 = 351904382946001LL;

    t25 = (x101/(x102^(x103^x104)));

    if (t25 != 4LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = INT64_MIN;
	uint64_t x106 = 24079183816800073LLU;
	uint16_t x107 = 6U;
	volatile uint64_t t26 = 14676294257LLU;

    t26 = (x105/(x106^(x107^x108)));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x110 = UINT64_MAX;
	int64_t x111 = INT64_MAX;
	volatile uint64_t x112 = 26365453055063LLU;
	uint64_t t27 = 698156568LLU;

    t27 = (x109/(x110^(x111^x112)));

    if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x114 = INT64_MIN;
	volatile int8_t x115 = -1;
	static uint16_t x116 = 48U;
	volatile int64_t t28 = -55199211346774879LL;

    t28 = (x113/(x114^(x115^x116)));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	volatile int16_t x118 = INT16_MIN;
	volatile int8_t x119 = -1;
	uint16_t x120 = 1U;
	int32_t t29 = 3463465;

    t29 = (x117/(x118^(x119^x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = 10033351;
	uint16_t x122 = UINT16_MAX;
	volatile uint16_t x123 = 1U;
	int32_t x124 = -2;
	volatile int32_t t30 = -125579338;

    t30 = (x121/(x122^(x123^x124)));

    if (t30 != -153) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = UINT8_MAX;
	uint64_t x126 = UINT64_MAX;
	static uint64_t x127 = 82418LLU;
	int32_t x128 = INT32_MIN;
	volatile uint64_t t31 = 2084201LLU;

    t31 = (x125/(x126^(x127^x128)));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 425LLU;
	uint8_t x130 = 1U;
	static int64_t x131 = -138374419083051LL;
	int16_t x132 = -262;

    t32 = (x129/(x130^(x131^x132)));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = INT8_MAX;
	int64_t x134 = INT64_MIN;
	int16_t x136 = INT16_MIN;
	static volatile uint64_t t33 = 1940926711674211LLU;

    t33 = (x133/(x134^(x135^x136)));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint16_t x137 = 7U;
	int16_t x138 = -1;
	int8_t x139 = -1;
	int8_t x140 = INT8_MIN;
	int32_t t34 = -471322377;

    t34 = (x137/(x138^(x139^x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = 1;
	static int64_t x143 = INT64_MIN;
	static uint8_t x144 = 36U;
	int64_t t35 = -1928LL;

    t35 = (x141/(x142^(x143^x144)));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x145 = INT32_MIN;
	int64_t x146 = -1LL;
	static int64_t t36 = -733536LL;

    t36 = (x145/(x146^(x147^x148)));

    if (t36 != -223LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 58U;
	static int8_t x150 = 2;
	static int8_t x151 = INT8_MAX;
	int32_t x152 = INT32_MIN;

    t37 = (x149/(x150^(x151^x152)));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x154 = 0;
	int16_t x156 = INT16_MIN;
	volatile int32_t t38 = 1;

    t38 = (x153/(x154^(x155^x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = UINT16_MAX;
	volatile int32_t x158 = INT32_MIN;
	uint16_t x160 = UINT16_MAX;

    t39 = (x157/(x158^(x159^x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	volatile int32_t x162 = -1;
	uint64_t x163 = 38595959LLU;
	int8_t x164 = -1;
	uint64_t t40 = 7591097111005LLU;

    t40 = (x161/(x162^(x163^x164)));

    if (t40 != 238972479913LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x166 = UINT32_MAX;
	int16_t x167 = INT16_MIN;
	int64_t x168 = -1LL;
	int64_t t41 = -166LL;

    t41 = (x165/(x166^(x167^x168)));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x171 = 7U;
	static int16_t x172 = -25;

    t42 = (x169/(x170^(x171^x172)));

    if (t42 != 4LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 60581431055132761LLU;
	int8_t x174 = 0;
	int32_t x175 = INT32_MAX;
	uint32_t x176 = 146U;
	uint64_t t43 = 288716LLU;

    t43 = (x173/(x174^(x175^x176)));

    if (t43 != 28210429LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x178 = 2773854LLU;
	static int8_t x179 = INT8_MIN;
	volatile int32_t x180 = 7998448;
	uint64_t t44 = 2550814291644LLU;

    t44 = (x177/(x178^(x179^x180)));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	int8_t x182 = 0;
	static volatile int64_t x183 = 2637167790264554LL;
	int32_t x184 = -16101871;
	int64_t t45 = -3LL;

    t45 = (x181/(x182^(x183^x184)));

    if (t45 != 3497LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x185 = -94596337LL;
	volatile int64_t x186 = -306LL;
	int16_t x187 = -3616;
	volatile int8_t x188 = -1;
	volatile int64_t t46 = 10662727612LL;

    t46 = (x185/(x186^(x187^x188)));

    if (t46 != 24336LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = UINT16_MAX;
	static int8_t x190 = INT8_MIN;
	uint32_t x191 = UINT32_MAX;
	volatile int8_t x192 = INT8_MIN;

    t47 = (x189/(x190^(x191^x192)));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x194 = -3503190;
	uint32_t x195 = 533310U;
	volatile int32_t x196 = INT32_MAX;
	static volatile uint32_t t48 = 501U;

    t48 = (x193/(x194^(x195^x196)));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x197 = 711478189;
	int32_t x198 = -1;
	volatile int32_t x199 = INT32_MIN;

    t49 = (x197/(x198^(x199^x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 0U;
	uint16_t x202 = 0U;
	static int16_t x203 = -1;
	int64_t x204 = 62LL;
	int64_t t50 = 26794879441073094LL;

    t50 = (x201/(x202^(x203^x204)));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x206 = 194LL;
	uint32_t x208 = 204604U;

    t51 = (x205/(x206^(x207^x208)));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -525;
	int16_t x210 = INT16_MIN;
	int8_t x211 = -4;
	volatile uint64_t x212 = 2007450680LLU;

    t52 = (x209/(x210^(x211^x212)));

    if (t52 != 9189149274LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = UINT16_MAX;
	volatile int64_t x214 = INT64_MIN;
	static uint8_t x215 = 1U;
	static int16_t x216 = INT16_MIN;
	volatile int64_t t53 = -1LL;

    t53 = (x213/(x214^(x215^x216)));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	int8_t x218 = INT8_MAX;
	int8_t x219 = INT8_MAX;
	int16_t x220 = -5466;

    t54 = (x217/(x218^(x219^x220)));

    if (t54 != 392880) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x222 = -46887582699125LL;
	uint32_t x223 = 1228935U;

    t55 = (x221/(x222^(x223^x224)));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x225 = 121U;
	static int64_t x226 = INT64_MAX;
	int64_t x227 = INT64_MIN;
	volatile int64_t t56 = -27611511735LL;

    t56 = (x225/(x226^(x227^x228)));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 3U;
	uint8_t x230 = 2U;
	volatile int16_t x231 = INT16_MIN;
	volatile int64_t x232 = -1LL;
	volatile int64_t t57 = -15449LL;

    t57 = (x229/(x230^(x231^x232)));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MAX;
	static volatile int64_t x234 = INT64_MIN;
	uint64_t x235 = 14LLU;
	int16_t x236 = 235;
	static volatile uint64_t t58 = 136849096115243506LLU;

    t58 = (x233/(x234^(x235^x236)));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x238 = 10U;
	static uint64_t x239 = UINT64_MAX;
	uint64_t t59 = 232LLU;

    t59 = (x237/(x238^(x239^x240)));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	int16_t x242 = 2;
	int32_t x243 = 971;
	static uint64_t x244 = 3499022870LLU;

    t60 = (x241/(x242^(x243^x244)));

    if (t60 != 2635985109LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = -1;
	uint32_t x246 = 381026735U;
	int32_t x247 = 15270608;
	volatile int8_t x248 = -1;
	volatile uint32_t t61 = 39U;

    t61 = (x245/(x246^(x247^x248)));

    if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = -4;
	volatile int8_t x250 = INT8_MIN;
	uint64_t x252 = 202661321159938071LLU;
	uint64_t t62 = 131676773035981439LLU;

    t62 = (x249/(x250^(x251^x252)));

    if (t62 != 2LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 11U;
	uint32_t x254 = UINT32_MAX;
	uint16_t x255 = 58U;
	int64_t x256 = 3022710575342310LL;
	int64_t t63 = -12871733254LL;

    t63 = (x253/(x254^(x255^x256)));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x257 = 2410685319LL;
	volatile int16_t x259 = -6;
	volatile int16_t x260 = INT16_MIN;
	volatile int64_t t64 = -15LL;

    t64 = (x257/(x258^(x259^x260)));

    if (t64 != -73579LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 13939U;
	uint8_t x262 = 3U;
	uint32_t x264 = 12613U;

    t65 = (x261/(x262^(x263^x264)));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = UINT16_MAX;
	static int32_t x266 = INT32_MIN;
	uint64_t x268 = 308LLU;
	volatile uint64_t t66 = 7250LLU;

    t66 = (x265/(x266^(x267^x268)));

    if (t66 != 212LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	int64_t x270 = 86867047LL;
	volatile uint16_t x271 = 356U;

    t67 = (x269/(x270^(x271^x272)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	int8_t x274 = INT8_MIN;
	volatile int16_t x275 = -1;
	int16_t x276 = -1368;
	volatile int64_t t68 = -27025LL;

    t68 = (x273/(x274^(x275^x276)));

    if (t68 != 6982113578239800LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = 720829;
	int64_t x278 = 33697935900LL;
	uint32_t x279 = 501U;
	int32_t x280 = INT32_MIN;
	static int64_t t69 = -414974296242315LL;

    t69 = (x277/(x278^(x279^x280)));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x282 = INT8_MIN;
	int64_t x283 = -1LL;
	static int64_t t70 = -976867496LL;

    t70 = (x281/(x282^(x283^x284)));

    if (t70 != -256LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x285 = INT64_MAX;
	int16_t x288 = INT16_MIN;

    t71 = (x285/(x286^(x287^x288)));

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = UINT8_MAX;
	uint32_t x290 = 1424309649U;
	int64_t x291 = INT64_MIN;
	int64_t x292 = -184314974LL;
	static volatile int64_t t72 = 7392789781LL;

    t72 = (x289/(x290^(x291^x292)));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = 365534U;
	volatile int32_t x294 = INT32_MIN;
	int32_t x295 = 51356863;
	int32_t x296 = 1;
	uint32_t t73 = 482830U;

    t73 = (x293/(x294^(x295^x296)));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x297 = -1;
	int16_t x298 = INT16_MIN;
	int8_t x300 = 0;

    t74 = (x297/(x298^(x299^x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MAX;
	volatile int8_t x302 = INT8_MIN;
	static uint32_t x303 = 116094U;
	uint16_t x304 = 2U;

    t75 = (x301/(x302^(x303^x304)));

    if (t75 != 2147541635LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = UINT8_MAX;
	uint64_t x306 = 903554397LLU;
	volatile int16_t x307 = INT16_MAX;
	int16_t x308 = INT16_MIN;
	volatile uint64_t t76 = 1864981910610LLU;

    t76 = (x305/(x306^(x307^x308)));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x309 = INT64_MAX;
	static int32_t x310 = INT32_MIN;
	volatile int32_t x311 = 4382830;
	int16_t x312 = INT16_MAX;
	int64_t t77 = -7391418356168757LL;

    t77 = (x309/(x310^(x311^x312)));

    if (t77 != -4303717536LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 16U;
	static uint16_t x314 = 464U;
	static uint32_t t78 = 22183U;

    t78 = (x313/(x314^(x315^x316)));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x319 = INT32_MAX;
	int32_t x320 = -1;
	int64_t t79 = 178LL;

    t79 = (x317/(x318^(x319^x320)));

    if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x322 = INT64_MIN;
	int64_t t80 = 2339LL;

    t80 = (x321/(x322^(x323^x324)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = 47097LLU;
	static int64_t x326 = 53153944710LL;
	int16_t x327 = INT16_MAX;
	int8_t x328 = -1;
	uint64_t t81 = 121LLU;

    t81 = (x325/(x326^(x327^x328)));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MIN;
	static int32_t x330 = -1;
	static uint8_t x332 = 0U;
	volatile int32_t t82 = 571720;

    t82 = (x329/(x330^(x331^x332)));

    if (t82 != 65536) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = 1;
	int16_t x335 = INT16_MIN;

    t83 = (x333/(x334^(x335^x336)));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -1;
	volatile uint64_t x338 = UINT64_MAX;
	volatile int64_t x339 = -1LL;
	int64_t x340 = 2470051507821660013LL;
	uint64_t t84 = 7831162LLU;

    t84 = (x337/(x338^(x339^x340)));

    if (t84 != 7LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	int64_t x344 = INT64_MAX;
	static volatile int64_t t85 = 78391807096100LL;

    t85 = (x341/(x342^(x343^x344)));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = UINT16_MAX;
	int16_t x346 = -1874;
	volatile int64_t x347 = 71229556LL;
	static int16_t x348 = 13;
	int64_t t86 = -392089950958355778LL;

    t86 = (x345/(x346^(x347^x348)));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = -2;
	uint8_t x352 = 3U;

    t87 = (x349/(x350^(x351^x352)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x353 = INT8_MAX;
	int32_t x354 = -1;

    t88 = (x353/(x354^(x355^x356)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x358 = 4682063510789LLU;
	volatile uint16_t x359 = UINT16_MAX;
	int64_t x360 = INT64_MIN;
	static uint64_t t89 = 21LLU;

    t89 = (x357/(x358^(x359^x360)));

    if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = UINT8_MAX;
	int8_t x362 = 2;
	volatile uint8_t x363 = 3U;
	static int32_t t90 = -14067;

    t90 = (x361/(x362^(x363^x364)));

    if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = 1378U;
	int8_t x366 = -1;
	uint8_t x367 = UINT8_MAX;
	int16_t x368 = INT16_MIN;

    t91 = (x365/(x366^(x367^x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = UINT32_MAX;
	uint32_t x370 = 31254U;
	volatile int64_t x371 = INT64_MIN;
	uint16_t x372 = UINT16_MAX;
	volatile int64_t t92 = -17265710271082949LL;

    t92 = (x369/(x370^(x371^x372)));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = 88U;
	uint32_t x374 = UINT32_MAX;
	int8_t x375 = INT8_MIN;
	static uint32_t t93 = 3596U;

    t93 = (x373/(x374^(x375^x376)));

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x377 = INT32_MIN;
	static volatile int32_t x378 = -1;
	uint32_t t94 = 26641102U;

    t94 = (x377/(x378^(x379^x380)));

    if (t94 != 1064U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x381 = INT16_MIN;
	volatile int16_t x382 = -4421;
	int64_t x384 = INT64_MAX;
	int64_t t95 = 342168LL;

    t95 = (x381/(x382^(x383^x384)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x385 = 48948800379429LL;
	int8_t x386 = -1;
	int64_t x387 = INT64_MIN;
	volatile int16_t x388 = -1;
	int64_t t96 = -16471886892692943LL;

    t96 = (x385/(x386^(x387^x388)));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = -131105865;
	volatile uint64_t x390 = UINT64_MAX;
	int8_t x392 = -1;

    t97 = (x389/(x390^(x391^x392)));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = -1;
	uint8_t x394 = 60U;
	int16_t x395 = 1;
	volatile int64_t x396 = INT64_MIN;
	static int64_t t98 = 1269LL;

    t98 = (x393/(x394^(x395^x396)));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -1;
	int32_t x400 = 20854;
	uint32_t t99 = 5U;

    t99 = (x397/(x398^(x399^x400)));

    if (t99 != 1U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = 32200424LLU;
	static uint16_t x402 = 1476U;
	volatile uint64_t x403 = UINT64_MAX;
	volatile uint64_t x404 = UINT64_MAX;

    t100 = (x401/(x402^(x403^x404)));

    if (t100 != 21816LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	static int16_t x406 = -1830;
	volatile uint32_t x407 = 2035U;
	volatile uint8_t x408 = UINT8_MAX;
	static int64_t t101 = 2LL;

    t101 = (x405/(x406^(x407^x408)));

    if (t101 != -2147483669LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 16191U;
	int32_t x411 = INT32_MAX;
	int8_t x412 = INT8_MAX;
	volatile uint64_t t102 = 1564753145791827048LLU;

    t102 = (x409/(x410^(x411^x412)));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x414 = UINT64_MAX;
	int32_t x415 = INT32_MIN;
	volatile int64_t x416 = 452547222551799031LL;
	static uint64_t t103 = 3455LLU;

    t103 = (x413/(x414^(x415^x416)));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x417 = -1;
	int8_t x418 = INT8_MAX;
	static int32_t x419 = INT32_MAX;
	int32_t t104 = -97186571;

    t104 = (x417/(x418^(x419^x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = 12;
	uint32_t x423 = 371U;
	static int8_t x424 = INT8_MIN;
	volatile uint32_t t105 = 506671253U;

    t105 = (x421/(x422^(x423^x424)));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x426 = 159;
	uint32_t x427 = 746399589U;
	int16_t x428 = INT16_MIN;

    t106 = (x425/(x426^(x427^x428)));

    if (t106 != 1U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = UINT64_MAX;
	int64_t x430 = INT64_MIN;
	static int64_t x431 = -8385833LL;
	int32_t x432 = -1057;
	static uint64_t t107 = 475LLU;

    t107 = (x429/(x430^(x431^x432)));

    if (t107 != 1LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x433 = INT8_MIN;
	int32_t x434 = 54647;
	uint8_t x435 = 0U;
	int32_t x436 = INT32_MAX;

    t108 = (x433/(x434^(x435^x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = -44;
	int64_t x438 = INT64_MIN;
	uint8_t x439 = 84U;
	static uint8_t x440 = 9U;
	volatile int64_t t109 = 195880013084089LL;

    t109 = (x437/(x438^(x439^x440)));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x442 = INT64_MAX;
	int16_t x443 = INT16_MIN;
	int64_t x444 = INT64_MIN;
	int64_t t110 = 32152585825745LL;

    t110 = (x441/(x442^(x443^x444)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x445 = INT8_MAX;
	uint64_t x446 = 413288351881132LLU;
	volatile int8_t x447 = -6;
	static uint8_t x448 = 4U;
	uint64_t t111 = 57847728716859LLU;

    t111 = (x445/(x446^(x447^x448)));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -7640836;
	volatile int16_t x450 = INT16_MIN;
	int16_t x451 = INT16_MIN;
	uint16_t x452 = 211U;
	static volatile int32_t t112 = -1078;

    t112 = (x449/(x450^(x451^x452)));

    if (t112 != -36212) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = 663;
	int16_t x454 = INT16_MAX;
	uint32_t x455 = 849367222U;
	static volatile uint32_t x456 = UINT32_MAX;
	volatile uint32_t t113 = 30U;

    t113 = (x453/(x454^(x455^x456)));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x457 = UINT16_MAX;
	int8_t x458 = 1;
	int8_t x459 = INT8_MAX;
	int64_t x460 = INT64_MIN;

    t114 = (x457/(x458^(x459^x460)));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x462 = 822;
	volatile uint32_t x464 = 6957U;
	volatile int64_t t115 = -732896699193816962LL;

    t115 = (x461/(x462^(x463^x464)));

    if (t115 != 13534LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MIN;
	int8_t x466 = INT8_MIN;
	int8_t x467 = INT8_MIN;
	volatile uint32_t x468 = UINT32_MAX;
	int64_t t116 = -26570019776LL;

    t116 = (x465/(x466^(x467^x468)));

    if (t116 != -2147483648LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 4U;
	static int16_t x472 = -1;
	static int32_t t117 = 459991;

    t117 = (x469/(x470^(x471^x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x473 = 708U;
	int8_t x474 = INT8_MIN;
	uint16_t x475 = 29U;
	uint64_t x476 = UINT64_MAX;
	volatile uint64_t t118 = 14705950LLU;

    t118 = (x473/(x474^(x475^x476)));

    if (t118 != 7LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	int16_t x478 = INT16_MIN;
	int32_t x479 = INT32_MAX;
	static int16_t x480 = INT16_MIN;
	volatile int64_t t119 = -1131255128LL;

    t119 = (x477/(x478^(x479^x480)));

    if (t119 != -4294967298LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x482 = UINT16_MAX;
	int32_t x483 = INT32_MAX;
	int16_t x484 = INT16_MIN;
	volatile int32_t t120 = 64;

    t120 = (x481/(x482^(x483^x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x486 = INT16_MIN;
	uint32_t x487 = 64899738U;
	int8_t x488 = INT8_MIN;
	uint32_t t121 = 1057141223U;

    t121 = (x485/(x486^(x487^x488)));

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x489 = UINT64_MAX;
	int32_t x490 = INT32_MIN;
	volatile uint64_t t122 = 87910LLU;

    t122 = (x489/(x490^(x491^x492)));

    if (t122 != 1413002227017200LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	uint64_t x494 = 9LLU;
	uint16_t x495 = 12110U;
	volatile uint8_t x496 = UINT8_MAX;
	uint64_t t123 = 65LLU;

    t123 = (x493/(x494^(x495^x496)));

    if (t123 != 755023906094857LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -1;
	uint16_t x498 = UINT16_MAX;
	int16_t x499 = INT16_MIN;
	uint16_t x500 = UINT16_MAX;
	int32_t t124 = -21;

    t124 = (x497/(x498^(x499^x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x501 = INT32_MIN;
	int8_t x502 = -63;
	int8_t x504 = -3;
	static volatile int32_t t125 = -1;

    t125 = (x501/(x502^(x503^x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = 2;
	static int32_t x506 = INT32_MIN;
	uint16_t x507 = 1282U;
	int32_t t126 = -684;

    t126 = (x505/(x506^(x507^x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 1U;
	int32_t x511 = INT32_MIN;
	static int16_t x512 = -60;
	volatile int64_t t127 = -70907223205LL;

    t127 = (x509/(x510^(x511^x512)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x514 = 11U;
	uint16_t x515 = 24502U;
	volatile int32_t x516 = INT32_MIN;
	volatile int32_t t128 = -747682803;

    t128 = (x513/(x514^(x515^x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = UINT16_MAX;
	static int8_t x518 = -27;
	int8_t x520 = INT8_MIN;
	volatile uint32_t t129 = 46U;

    t129 = (x517/(x518^(x519^x520)));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x521 = 59U;
	int16_t x522 = INT16_MIN;
	int64_t t130 = -13298819811437310LL;

    t130 = (x521/(x522^(x523^x524)));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x525 = UINT32_MAX;
	int16_t x527 = 5;

    t131 = (x525/(x526^(x527^x528)));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 1U;
	static uint64_t x531 = UINT64_MAX;
	static int64_t x532 = INT64_MIN;
	static uint64_t t132 = 2LLU;

    t132 = (x529/(x530^(x531^x532)));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x534 = 298U;
	static uint64_t x535 = 1LLU;
	volatile int64_t x536 = INT64_MAX;
	uint64_t t133 = 223876379LLU;

    t133 = (x533/(x534^(x535^x536)));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x538 = -1;
	volatile int8_t x540 = -12;

    t134 = (x537/(x538^(x539^x540)));

    if (t134 != 9U) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = -2;
	volatile int8_t x542 = INT8_MAX;
	static int8_t x543 = -1;
	int64_t t135 = 2058707166840909LL;

    t135 = (x541/(x542^(x543^x544)));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x546 = 187U;
	int8_t x548 = 0;

    t136 = (x545/(x546^(x547^x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x550 = INT32_MAX;
	int64_t x551 = -1LL;
	int64_t x552 = -1LL;
	int64_t t137 = 863588LL;

    t137 = (x549/(x550^(x551^x552)));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x554 = UINT64_MAX;
	static uint16_t x555 = UINT16_MAX;
	volatile int16_t x556 = INT16_MIN;
	uint64_t t138 = 34907496117LLU;

    t138 = (x553/(x554^(x555^x556)));

    if (t138 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x557 = INT64_MIN;
	volatile int16_t x558 = -1;
	uint32_t x559 = UINT32_MAX;
	volatile int64_t x560 = INT64_MIN;

    t139 = (x557/(x558^(x559^x560)));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = UINT8_MAX;
	uint32_t x562 = 10U;
	volatile int16_t x563 = -7;
	int8_t x564 = 3;
	uint32_t t140 = 2482U;

    t140 = (x561/(x562^(x563^x564)));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = UINT16_MAX;
	int16_t x566 = INT16_MIN;
	int16_t x567 = INT16_MIN;
	static int64_t x568 = INT64_MIN;
	volatile int64_t t141 = 2002104280LL;

    t141 = (x565/(x566^(x567^x568)));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -47835568047412LL;
	int16_t x570 = INT16_MIN;
	int64_t x572 = -1LL;
	volatile int64_t t142 = 8LL;

    t142 = (x569/(x570^(x571^x572)));

    if (t142 != -1542983292LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = 0;
	int8_t x574 = INT8_MIN;
	int32_t x575 = INT32_MAX;
	volatile int8_t x576 = 19;
	int32_t t143 = 915560956;

    t143 = (x573/(x574^(x575^x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MIN;
	int64_t x578 = INT64_MIN;
	int64_t x579 = -1LL;
	static int64_t t144 = 12781LL;

    t144 = (x577/(x578^(x579^x580)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x581 = INT32_MIN;
	uint8_t x584 = 9U;
	volatile uint64_t t145 = 1006501231924887842LLU;

    t145 = (x581/(x582^(x583^x584)));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	static uint32_t x586 = UINT32_MAX;
	int64_t x587 = -1LL;
	int16_t x588 = 13953;
	static int64_t t146 = 106301417LL;

    t146 = (x585/(x586^(x587^x588)));

    if (t146 != 2147490624LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = 463195526026138LLU;
	static uint8_t x590 = 5U;
	volatile int32_t x591 = 53678486;
	static volatile uint64_t t147 = 1211LLU;

    t147 = (x589/(x590^(x591^x592)));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x594 = INT8_MIN;
	volatile int32_t x595 = 10;

    t148 = (x593/(x594^(x595^x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x597 = 2293058719113555154LLU;
	int16_t x598 = INT16_MIN;
	volatile int8_t x600 = 2;
	volatile uint64_t t149 = 495589686257712617LLU;

    t149 = (x597/(x598^(x599^x600)));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x602 = UINT32_MAX;
	volatile uint64_t t150 = 22277856144LLU;

    t150 = (x601/(x602^(x603^x604)));

    if (t150 != 1LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = 30U;
	int32_t x606 = INT32_MIN;
	uint16_t x607 = 0U;
	static uint32_t x608 = 7U;
	volatile uint32_t t151 = 3930U;

    t151 = (x605/(x606^(x607^x608)));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x610 = -1;
	int16_t x612 = -8;
	int64_t t152 = 1533742885698754LL;

    t152 = (x609/(x610^(x611^x612)));

    if (t152 != -3345815LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x613 = 15U;
	int8_t x614 = INT8_MIN;
	uint8_t x615 = 34U;
	volatile uint32_t x616 = 107709789U;
	volatile uint32_t t153 = 18949U;

    t153 = (x613/(x614^(x615^x616)));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x618 = INT32_MAX;
	int64_t x619 = INT64_MAX;
	volatile uint8_t x620 = 1U;
	volatile int64_t t154 = 2276761392429341322LL;

    t154 = (x617/(x618^(x619^x620)));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = 6;
	int32_t x622 = INT32_MIN;
	uint16_t x623 = UINT16_MAX;
	uint16_t x624 = 778U;
	static int32_t t155 = -27229363;

    t155 = (x621/(x622^(x623^x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = 50689409LLU;
	static int32_t x626 = -56369305;
	static int16_t x628 = INT16_MAX;
	uint64_t t156 = 8725514826533863LLU;

    t156 = (x625/(x626^(x627^x628)));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = 128947222U;
	static int8_t x630 = 4;
	int64_t x631 = INT64_MIN;
	int8_t x632 = -1;

    t157 = (x629/(x630^(x631^x632)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x634 = UINT64_MAX;
	int64_t x635 = INT64_MIN;
	uint64_t x636 = 1087229718959795LLU;
	volatile uint64_t t158 = 65159930838LLU;

    t158 = (x633/(x634^(x635^x636)));

    if (t158 != 1LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x637 = 3010U;
	uint8_t x638 = UINT8_MAX;
	static uint64_t x639 = 157661482274057LLU;
	int64_t x640 = -1656438189832246383LL;
	uint64_t t159 = 9125LLU;

    t159 = (x637/(x638^(x639^x640)));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -1;
	uint8_t x642 = 60U;
	volatile int16_t x644 = -1;
	int64_t t160 = -36LL;

    t160 = (x641/(x642^(x643^x644)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x646 = UINT8_MAX;
	static volatile int32_t x648 = INT32_MAX;
	volatile int32_t t161 = 14526354;

    t161 = (x645/(x646^(x647^x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x649 = -1;
	volatile int32_t x650 = INT32_MIN;
	int16_t x651 = 757;
	uint64_t x652 = UINT64_MAX;
	uint64_t t162 = 7412982530410484LLU;

    t162 = (x649/(x650^(x651^x652)));

    if (t162 != 8589937624LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x654 = UINT64_MAX;
	uint8_t x655 = UINT8_MAX;
	int16_t x656 = -1;
	uint64_t t163 = 121425233871699LLU;

    t163 = (x653/(x654^(x655^x656)));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	uint32_t x658 = 109U;
	int8_t x659 = 1;
	int8_t x660 = INT8_MIN;
	uint32_t t164 = 0U;

    t164 = (x657/(x658^(x659^x660)));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x661 = 48;
	int8_t x662 = INT8_MIN;
	static int64_t x663 = INT64_MIN;

    t165 = (x661/(x662^(x663^x664)));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	uint8_t x667 = 41U;
	int64_t t166 = 58090LL;

    t166 = (x665/(x666^(x667^x668)));

    if (t166 != -4294967380LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x670 = -8LL;
	static int64_t x671 = 27684221788LL;
	int32_t x672 = INT32_MIN;
	int64_t t167 = 13619672372488413LL;

    t167 = (x669/(x670^(x671^x672)));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x673 = UINT32_MAX;
	static volatile int64_t x675 = -7105614978LL;
	static int16_t x676 = -1;
	static int64_t t168 = -4574129541745640710LL;

    t168 = (x673/(x674^(x675^x676)));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	static volatile uint64_t x678 = 6869053580473LLU;
	volatile int16_t x679 = INT16_MIN;
	int16_t x680 = INT16_MAX;
	static uint64_t t169 = 437470843643LLU;

    t169 = (x677/(x678^(x679^x680)));

    if (t169 != 1LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x681 = INT32_MIN;
	int16_t x682 = 328;
	volatile int64_t x683 = -1LL;
	int64_t t170 = 915586LL;

    t170 = (x681/(x682^(x683^x684)));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = UINT16_MAX;
	uint8_t x688 = UINT8_MAX;
	volatile uint32_t t171 = 2437U;

    t171 = (x685/(x686^(x687^x688)));

    if (t171 != 20U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x690 = 0LL;
	static int8_t x691 = 1;
	volatile int64_t x692 = INT64_MAX;
	uint64_t t172 = 10LLU;

    t172 = (x689/(x690^(x691^x692)));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = -1;
	uint32_t x696 = UINT32_MAX;
	uint64_t t173 = 7176LLU;

    t173 = (x693/(x694^(x695^x696)));

    if (t173 != 1LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x697 = 154;
	static int32_t x698 = INT32_MIN;
	static int32_t x699 = -1;
	static int64_t x700 = -1LL;
	int64_t t174 = -414515LL;

    t174 = (x697/(x698^(x699^x700)));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x701 = -1;
	int16_t x702 = INT16_MAX;
	uint8_t x704 = 3U;
	volatile int32_t t175 = 12786772;

    t175 = (x701/(x702^(x703^x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = -17;
	volatile uint16_t x706 = UINT16_MAX;
	int8_t x707 = -1;
	static int8_t x708 = -1;
	volatile int32_t t176 = -134790;

    t176 = (x705/(x706^(x707^x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x709 = INT32_MIN;
	volatile uint32_t x710 = UINT32_MAX;
	int16_t x711 = -1;
	static volatile int64_t x712 = INT64_MIN;
	volatile int64_t t177 = -51934LL;

    t177 = (x709/(x710^(x711^x712)));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x713 = UINT16_MAX;
	int8_t x715 = INT8_MAX;
	static int8_t x716 = -4;
	int32_t t178 = -3327;

    t178 = (x713/(x714^(x715^x716)));

    if (t178 != -537) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 16008U;
	int64_t x718 = INT64_MIN;
	int8_t x719 = -12;
	int64_t x720 = -29482509481951241LL;
	int64_t t179 = 96LL;

    t179 = (x717/(x718^(x719^x720)));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x722 = 511U;
	int8_t x723 = INT8_MIN;
	volatile uint32_t x724 = 188103317U;
	uint32_t t180 = 3076U;

    t180 = (x721/(x722^(x723^x724)));

    if (t180 != 1U) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = -1;
	static int16_t x726 = INT16_MIN;
	int32_t x727 = INT32_MIN;
	int16_t x728 = -2;
	int32_t t181 = 83;

    t181 = (x725/(x726^(x727^x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = UINT16_MAX;
	int64_t x730 = -117726LL;
	int32_t x731 = 14327;
	uint64_t x732 = 352666566302865258LLU;
	uint64_t t182 = 23096560161290830LLU;

    t182 = (x729/(x730^(x731^x732)));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x734 = INT32_MIN;
	uint16_t x735 = UINT16_MAX;
	static int32_t x736 = INT32_MAX;

    t183 = (x733/(x734^(x735^x736)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 55U;
	int16_t x738 = -15148;
	static int64_t x739 = -895LL;
	uint32_t x740 = 887341286U;
	volatile int64_t t184 = -19497LL;

    t184 = (x737/(x738^(x739^x740)));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MIN;
	int64_t x742 = INT64_MIN;
	int16_t x744 = INT16_MAX;
	volatile int64_t t185 = 113453LL;

    t185 = (x741/(x742^(x743^x744)));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = -1;
	volatile int32_t x746 = -1;
	uint32_t t186 = 101308442U;

    t186 = (x745/(x746^(x747^x748)));

    if (t186 != 1U) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x750 = INT16_MAX;
	static uint32_t x751 = 73079U;
	int8_t x752 = -63;
	volatile int64_t t187 = 6430789317403914LL;

    t187 = (x749/(x750^(x751^x752)));

    if (t187 != -2147529052LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = -1;
	static volatile uint64_t x754 = 423828129663928LLU;
	int64_t x755 = INT64_MIN;
	static uint64_t t188 = 7LLU;

    t188 = (x753/(x754^(x755^x756)));

    if (t188 != 2LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x757 = INT16_MIN;
	int8_t x758 = -1;
	int64_t x759 = INT64_MIN;
	static uint64_t x760 = 218467269266744036LLU;
	volatile uint64_t t189 = 181LLU;

    t189 = (x757/(x758^(x759^x760)));

    if (t189 != 2LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x761 = UINT64_MAX;
	int16_t x762 = 430;
	int8_t x763 = INT8_MIN;
	int64_t x764 = INT64_MIN;

    t190 = (x761/(x762^(x763^x764)));

    if (t190 != 2LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x766 = -1;
	int32_t x767 = INT32_MIN;
	static int8_t x768 = INT8_MIN;
	volatile int32_t t191 = 249993113;

    t191 = (x765/(x766^(x767^x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x769 = UINT32_MAX;
	int32_t x770 = -1;
	int64_t x771 = INT64_MIN;
	int32_t x772 = 109274;

    t192 = (x769/(x770^(x771^x772)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = -33903596LL;
	uint32_t x774 = 184241697U;
	int8_t x775 = -1;
	uint8_t x776 = 2U;
	static int64_t t193 = -19701710519257LL;

    t193 = (x773/(x774^(x775^x776)));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x778 = -764423530;
	uint16_t x779 = 14U;
	uint64_t x780 = 47791708795504LLU;
	static volatile uint64_t t194 = 864408248193LLU;

    t194 = (x777/(x778^(x779^x780)));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x781 = UINT32_MAX;
	uint64_t x782 = 0LLU;
	int16_t x783 = -1;
	int64_t x784 = INT64_MAX;
	static uint64_t t195 = 142LLU;

    t195 = (x781/(x782^(x783^x784)));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x785 = -1;
	int32_t x786 = INT32_MIN;
	uint16_t x787 = 2508U;
	static int16_t x788 = -1;
	volatile int32_t t196 = -13;

    t196 = (x785/(x786^(x787^x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = 74188702257919LLU;
	int8_t x790 = 31;
	static int32_t x791 = 17;
	int64_t x792 = -13457LL;
	uint64_t t197 = 30877026847LLU;

    t197 = (x789/(x790^(x791^x792)));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = -1LL;
	int16_t x794 = INT16_MIN;
	volatile int16_t x796 = -1;

    t198 = (x793/(x794^(x795^x796)));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -1LL;
	uint64_t x798 = 29140477751388180LLU;
	uint64_t x799 = 22086809LLU;
	uint64_t t199 = 228LLU;

    t199 = (x797/(x798^(x799^x800)));

    if (t199 != 1LLU) { NG(); } else { ; }
	
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

