
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

static int16_t x2 = -13;
int16_t x11 = INT16_MIN;
static volatile int16_t x13 = INT16_MIN;
uint64_t x16 = UINT64_MAX;
static volatile int64_t t6 = 3313265LL;
static uint32_t x32 = UINT32_MAX;
int32_t x34 = INT32_MIN;
static volatile int32_t t8 = INT32_MIN;
volatile uint32_t t10 = 19439U;
uint64_t t11 = 37382LLU;
int64_t x54 = 7047493085395LL;
static volatile int64_t t13 = 1LL;
static int8_t x70 = -1;
volatile uint32_t t18 = 52479U;
int16_t x80 = INT16_MIN;
int8_t x81 = 1;
int8_t x84 = INT8_MIN;
volatile int64_t t22 = 41LL;
volatile int32_t x95 = INT32_MIN;
static int32_t x97 = INT32_MIN;
uint16_t x100 = 107U;
static uint16_t x108 = 5084U;
int64_t x111 = INT64_MIN;
uint8_t x115 = 23U;
volatile int16_t x118 = 18;
static volatile uint64_t t29 = UINT64_MAX;
uint8_t x135 = 3U;
int16_t x146 = INT16_MAX;
static volatile uint64_t t36 = 15442532120015509LLU;
int64_t x151 = -1LL;
int8_t x157 = INT8_MIN;
int64_t x158 = INT64_MIN;
static uint64_t x160 = 2595LLU;
uint64_t x172 = 1LLU;
static volatile uint64_t t42 = 10771909583LLU;
uint8_t x175 = 12U;
int16_t x176 = INT16_MIN;
static volatile int64_t x181 = INT64_MIN;
uint16_t x184 = 1230U;
int16_t x195 = 86;
int64_t x196 = -49792448419051LL;
static uint8_t x197 = 7U;
int16_t x200 = -1;
int64_t x201 = -5478393575LL;
uint32_t x207 = 53014U;
static int64_t x216 = -1LL;
static uint64_t x219 = 1830963598207091466LLU;
volatile int16_t x220 = 3;
volatile uint64_t t54 = 194LLU;
static uint64_t x231 = 3815700681LLU;
int32_t x235 = INT32_MAX;
volatile int64_t t58 = -53LL;
volatile int64_t x238 = INT64_MIN;
uint8_t x241 = 1U;
volatile uint8_t x243 = 1U;
uint16_t x245 = UINT16_MAX;
int16_t x249 = -2;
uint64_t x251 = UINT64_MAX;
static volatile int64_t x255 = 30568120733557LL;
uint16_t x256 = 10653U;
static int32_t x257 = INT32_MIN;
int32_t x262 = -1;
int64_t x266 = INT64_MIN;
uint8_t x272 = 55U;
static uint64_t t68 = 623724431773043LLU;
int64_t x277 = -2853126999770161367LL;
int64_t t69 = 50183955585LL;
volatile uint16_t x284 = 241U;
int8_t x288 = -1;
volatile int64_t x297 = INT64_MIN;
int32_t x300 = INT32_MIN;
volatile int64_t t74 = INT64_MIN;
static int32_t x301 = INT32_MAX;
uint8_t x308 = UINT8_MAX;
int64_t t76 = -121944615028843LL;
int64_t x315 = -1LL;
uint16_t x320 = 179U;
volatile int32_t x322 = 25683450;
int16_t x323 = INT16_MAX;
volatile uint64_t x330 = UINT64_MAX;
int32_t x340 = INT32_MAX;
uint16_t x345 = 10U;
uint16_t x348 = 0U;
int64_t x349 = 130399114742LL;
static uint8_t x350 = 35U;
int64_t x352 = INT64_MAX;
int32_t x356 = INT32_MIN;
volatile uint32_t t90 = 595U;
volatile uint16_t x365 = 0U;
int32_t x367 = INT32_MIN;
volatile int64_t t93 = 405087108347312LL;
static volatile int32_t t94 = -1;
static int64_t x387 = INT64_MIN;
uint32_t x388 = UINT32_MAX;
uint64_t t96 = 6211LLU;
uint64_t x389 = 12780854556LLU;
int16_t x391 = INT16_MIN;
static volatile int64_t x409 = INT64_MAX;
static volatile uint8_t x413 = 6U;
int64_t t104 = -894022813342LL;
static int8_t x425 = -6;
int32_t x432 = -1;
int32_t x442 = -1;
static int16_t x446 = -4170;
volatile int64_t x449 = INT64_MIN;
int8_t x452 = -23;
int64_t t112 = INT64_MIN;
uint8_t x455 = UINT8_MAX;
uint64_t x460 = UINT64_MAX;
int64_t x461 = INT64_MIN;
static volatile uint32_t x462 = 4031847U;
volatile int8_t x467 = INT8_MAX;
int32_t x468 = -90023183;
int64_t x477 = -532101290LL;
static uint8_t x479 = 71U;
static volatile int8_t x483 = -2;
int32_t x489 = INT32_MIN;
int32_t x496 = -1;
uint64_t t123 = 612LLU;
uint32_t x497 = 135534117U;
uint8_t x499 = 28U;
int64_t x502 = INT64_MAX;
int8_t x503 = -1;
int64_t x508 = -304930LL;
int64_t t128 = INT64_MIN;
volatile int64_t x520 = -1LL;
int64_t t130 = -360830702721812539LL;
int64_t x526 = INT64_MIN;
uint32_t t132 = 10U;
int16_t x535 = INT16_MIN;
int16_t x536 = -25;
volatile int64_t t133 = 747358785LL;
static uint8_t x537 = 3U;
int8_t x538 = INT8_MIN;
uint32_t x540 = 1731357480U;
uint8_t x541 = 36U;
uint32_t x560 = UINT32_MAX;
volatile uint64_t t140 = 718LLU;
static volatile uint64_t t141 = 52724988386097LLU;
int32_t x572 = -1;
int32_t x575 = INT32_MAX;
volatile int32_t x576 = INT32_MIN;
int32_t x577 = INT32_MIN;
static int32_t x580 = -1;
volatile int8_t x581 = -15;
int32_t x587 = -690;
int16_t x591 = -172;
int64_t x603 = -20443592713LL;
static volatile int64_t t150 = 387083345572LL;
static int32_t x607 = 316690;
uint32_t t151 = UINT32_MAX;
int64_t t152 = -3456384582LL;
int16_t x617 = -1;
volatile uint64_t t154 = 617428209706LLU;
static volatile int64_t x624 = INT64_MIN;
volatile int64_t x627 = 2858732036753846161LL;
uint64_t x630 = 137429044LLU;
static int64_t x631 = INT64_MAX;
int8_t x633 = -1;
int64_t x655 = INT64_MIN;
volatile int64_t t164 = -1141239825LL;
uint32_t x665 = 42476U;
volatile int32_t t167 = 746;
static volatile int64_t t168 = -508LL;
int64_t x683 = -1LL;
uint8_t x688 = 14U;
static uint32_t t171 = 138471345U;
static volatile int16_t x695 = INT16_MAX;
volatile uint8_t x701 = 7U;
int64_t x714 = -3853542078276797LL;
uint64_t x724 = 125970471498110LLU;
uint64_t x730 = UINT64_MAX;
int32_t x742 = INT32_MIN;
static int32_t x751 = 117;
static int64_t x752 = INT64_MIN;
static uint8_t x753 = 6U;
int32_t t188 = 14;
int64_t x761 = INT64_MIN;
int64_t x762 = INT64_MIN;
int8_t x767 = INT8_MIN;
uint64_t t191 = 1124782018310LLU;
uint8_t x772 = 8U;
static int16_t x775 = INT16_MIN;
int32_t x776 = -1;
int16_t x783 = -1;
int16_t x787 = 21;
static volatile int64_t t196 = 449185678609157LL;
uint8_t x790 = 4U;
volatile uint64_t x792 = UINT64_MAX;
volatile int8_t x793 = INT8_MAX;
volatile int32_t t199 = 7;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int64_t x3 = -5748LL;
	int8_t x4 = INT8_MIN;
	int64_t t0 = -167148LL;

    t0 = ((x1|(x2&x3))&x4);

    if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x5 = UINT16_MAX;
	volatile int8_t x6 = -24;
	uint8_t x7 = 2U;
	int32_t x8 = INT32_MAX;
	volatile int32_t t1 = 311011733;

    t1 = ((x5|(x6&x7))&x8);

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 211U;
	static int64_t x10 = -24LL;
	uint16_t x12 = UINT16_MAX;
	volatile int64_t t2 = 474922LL;

    t2 = ((x9|(x10&x11))&x12);

    if (t2 != 32979LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = -1LL;
	static uint32_t x15 = 5U;
	volatile uint64_t t3 = 353LLU;

    t3 = ((x13|(x14&x15))&x16);

    if (t3 != 18446744073709518853LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 1370U;
	static int8_t x18 = INT8_MAX;
	static uint8_t x19 = 18U;
	int8_t x20 = INT8_MIN;
	uint32_t t4 = 390U;

    t4 = ((x17|(x18&x19))&x20);

    if (t4 != 1280U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = -1;
	volatile uint32_t x22 = 197888476U;
	volatile int32_t x23 = -1;
	int16_t x24 = 1;
	volatile uint32_t t5 = 34743848U;

    t5 = ((x21|(x22&x23))&x24);

    if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	int8_t x26 = INT8_MIN;
	uint8_t x27 = 1U;
	volatile int64_t x28 = 63209620LL;

    t6 = ((x25|(x26&x27))&x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	uint16_t x30 = UINT16_MAX;
	static int8_t x31 = INT8_MIN;
	uint32_t t7 = 1601U;

    t7 = ((x29|(x30&x31))&x32);

    if (t7 != 4294967168U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 1384U;
	static int8_t x35 = INT8_MIN;
	int16_t x36 = INT16_MIN;

    t8 = ((x33|(x34&x35))&x36);

    if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = INT16_MIN;
	uint32_t x38 = 427U;
	static int32_t x39 = INT32_MAX;
	static uint8_t x40 = UINT8_MAX;
	static uint32_t t9 = 526U;

    t9 = ((x37|(x38&x39))&x40);

    if (t9 != 171U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	volatile uint8_t x42 = 11U;
	uint32_t x43 = UINT32_MAX;
	int32_t x44 = INT32_MAX;

    t10 = ((x41|(x42&x43))&x44);

    if (t10 != 2147483647U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = UINT32_MAX;
	int32_t x46 = 115;
	uint32_t x47 = 507158040U;
	uint64_t x48 = 96409779853771166LLU;

    t11 = ((x45|(x46&x47))&x48);

    if (t11 != 420397470LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -1LL;
	static int8_t x50 = INT8_MAX;
	uint32_t x51 = 238U;
	int64_t x52 = -1LL;
	static int64_t t12 = -89591004LL;

    t12 = ((x49|(x50&x51))&x52);

    if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	static int32_t x55 = INT32_MIN;
	int16_t x56 = INT16_MIN;

    t13 = ((x53|(x54&x55))&x56);

    if (t13 != -2147483648LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = INT64_MAX;
	uint8_t x58 = UINT8_MAX;
	int16_t x59 = -1;
	volatile int16_t x60 = INT16_MAX;
	volatile int64_t t14 = 1356LL;

    t14 = ((x57|(x58&x59))&x60);

    if (t14 != 32767LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	static int32_t x62 = INT32_MAX;
	int64_t x63 = INT64_MIN;
	uint32_t x64 = UINT32_MAX;
	volatile int64_t t15 = 953377342LL;

    t15 = ((x61|(x62&x63))&x64);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 27U;
	int32_t x66 = 814112;
	volatile uint64_t x67 = 2939395167LLU;
	uint16_t x68 = UINT16_MAX;
	uint64_t t16 = 901793603335LLU;

    t16 = ((x65|(x66&x67))&x68);

    if (t16 != 3099LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	static volatile int16_t x71 = -126;
	uint16_t x72 = 1435U;
	volatile int32_t t17 = 6;

    t17 = ((x69|(x70&x71))&x72);

    if (t17 != 1410) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x73 = 267U;
	static volatile int16_t x74 = 1;
	uint16_t x75 = 12U;
	int32_t x76 = -1;

    t18 = ((x73|(x74&x75))&x76);

    if (t18 != 267U) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x77 = -14;
	uint8_t x78 = UINT8_MAX;
	int16_t x79 = -1;
	volatile int32_t t19 = 13909996;

    t19 = ((x77|(x78&x79))&x80);

    if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x82 = -2;
	int16_t x83 = -5640;
	volatile int32_t t20 = 202686051;

    t20 = ((x81|(x82&x83))&x84);

    if (t20 != -5760) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	volatile int32_t x86 = -1;
	uint16_t x87 = 109U;
	static int64_t x88 = 795589063643LL;
	int64_t t21 = 9179353753412418LL;

    t21 = ((x85|(x86&x87))&x88);

    if (t21 != 795589063625LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = 910114LL;
	int64_t x90 = -1LL;
	int8_t x91 = INT8_MIN;
	uint32_t x92 = 256U;

    t22 = ((x89|(x90&x91))&x92);

    if (t22 != 256LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -6LL;
	volatile int16_t x94 = 541;
	int8_t x96 = -1;
	int64_t t23 = -1528338801LL;

    t23 = ((x93|(x94&x95))&x96);

    if (t23 != -6LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = INT16_MIN;
	uint32_t x99 = 74U;
	volatile uint32_t t24 = 27218229U;

    t24 = ((x97|(x98&x99))&x100);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 1U;
	int16_t x102 = INT16_MIN;
	static int16_t x103 = -13;
	volatile int64_t x104 = INT64_MIN;
	static int64_t t25 = INT64_MIN;

    t25 = ((x101|(x102&x103))&x104);

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = 4023886LL;
	volatile int64_t x106 = INT64_MIN;
	volatile int32_t x107 = 66852323;
	volatile int64_t t26 = -130668365554427LL;

    t26 = ((x105|(x106&x107))&x108);

    if (t26 != 588LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 72U;
	volatile int64_t x110 = INT64_MAX;
	uint64_t x112 = 1311LLU;
	uint64_t t27 = 2712558272966263LLU;

    t27 = ((x109|(x110&x111))&x112);

    if (t27 != 8LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = 64357LL;
	volatile int32_t x114 = 318;
	volatile int16_t x116 = INT16_MIN;
	int64_t t28 = -2950073991LL;

    t28 = ((x113|(x114&x115))&x116);

    if (t28 != 32768LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = UINT64_MAX;
	uint8_t x119 = 27U;
	int64_t x120 = -1LL;

    t29 = ((x117|(x118&x119))&x120);

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	uint16_t x122 = 9U;
	int8_t x123 = INT8_MIN;
	int64_t x124 = INT64_MIN;
	volatile int64_t t30 = INT64_MIN;

    t30 = ((x121|(x122&x123))&x124);

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 15U;
	int8_t x126 = INT8_MAX;
	int32_t x127 = INT32_MIN;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t31 = -492621;

    t31 = ((x125|(x126&x127))&x128);

    if (t31 != 15) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = 222049LL;
	volatile int8_t x130 = 1;
	int32_t x131 = INT32_MIN;
	volatile int16_t x132 = INT16_MIN;
	static int64_t t32 = -5818052384719433LL;

    t32 = ((x129|(x130&x131))&x132);

    if (t32 != 196608LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 1703U;
	uint8_t x134 = 8U;
	static int8_t x136 = INT8_MIN;
	volatile uint32_t t33 = 76256550U;

    t33 = ((x133|(x134&x135))&x136);

    if (t33 != 1664U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -1;
	int32_t x138 = 10060281;
	int16_t x139 = INT16_MIN;
	volatile int64_t x140 = 10760096239787699LL;
	int64_t t34 = 245371847071LL;

    t34 = ((x137|(x138&x139))&x140);

    if (t34 != 10760096239787699LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = INT64_MIN;
	int8_t x142 = -1;
	int64_t x143 = INT64_MIN;
	uint32_t x144 = 79222U;
	int64_t t35 = -3478018914LL;

    t35 = ((x141|(x142&x143))&x144);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x145 = 143631374LLU;
	int32_t x147 = -18;
	uint64_t x148 = 145334224LLU;

    t36 = ((x145|(x146&x147))&x148);

    if (t36 != 143237056LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	uint8_t x150 = UINT8_MAX;
	int16_t x152 = INT16_MIN;
	volatile int64_t t37 = 706726928647LL;

    t37 = ((x149|(x150&x151))&x152);

    if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int32_t x153 = 335;
	static uint32_t x154 = UINT32_MAX;
	int16_t x155 = -1;
	int64_t x156 = INT64_MIN;
	static int64_t t38 = -609175028740779LL;

    t38 = ((x153|(x154&x155))&x156);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x159 = -3752;
	volatile uint64_t t39 = 181060698LLU;

    t39 = ((x157|(x158&x159))&x160);

    if (t39 != 2560LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x161 = -1;
	static uint8_t x162 = 3U;
	int32_t x163 = -1;
	static int32_t x164 = INT32_MIN;
	int32_t t40 = INT32_MIN;

    t40 = ((x161|(x162&x163))&x164);

    if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	static int64_t x166 = -31435143020586152LL;
	int16_t x167 = 30;
	int64_t x168 = INT64_MIN;
	int64_t t41 = INT64_MIN;

    t41 = ((x165|(x166&x167))&x168);

    if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = -4088;
	static int8_t x170 = -1;
	int8_t x171 = INT8_MIN;

    t42 = ((x169|(x170&x171))&x172);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MAX;
	uint32_t x174 = 6735359U;
	volatile int64_t t43 = 15153332LL;

    t43 = ((x173|(x174&x175))&x176);

    if (t43 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x177 = INT16_MAX;
	static int64_t x178 = INT64_MAX;
	uint64_t x179 = 2107841190LLU;
	static int32_t x180 = -1;
	volatile uint64_t t44 = 11LLU;

    t44 = ((x177|(x178&x179))&x180);

    if (t44 != 2107867135LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint8_t x182 = 1U;
	int64_t x183 = INT64_MIN;
	int64_t t45 = 240280LL;

    t45 = ((x181|(x182&x183))&x184);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x185 = 14910U;
	volatile uint8_t x186 = UINT8_MAX;
	int32_t x187 = -5;
	static int8_t x188 = 0;
	uint32_t t46 = 0U;

    t46 = ((x185|(x186&x187))&x188);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	uint8_t x190 = 117U;
	static int8_t x191 = -17;
	static int8_t x192 = -1;
	int64_t t47 = -228LL;

    t47 = ((x189|(x190&x191))&x192);

    if (t47 != -9223372036854775707LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = -3593900LL;
	static int32_t x194 = INT32_MAX;
	int64_t t48 = -3045206064969806245LL;

    t48 = ((x193|(x194&x195))&x196);

    if (t48 != -49792448714476LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x198 = 1U;
	int8_t x199 = -1;
	static volatile int32_t t49 = 1;

    t49 = ((x197|(x198&x199))&x200);

    if (t49 != 7) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x202 = UINT64_MAX;
	volatile int32_t x203 = INT32_MIN;
	volatile uint64_t x204 = UINT64_MAX;
	static volatile uint64_t t50 = 755626479456LLU;

    t50 = ((x201|(x202&x203))&x204);

    if (t50 != 18446744072526125337LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 583LLU;
	volatile uint32_t x206 = UINT32_MAX;
	static uint32_t x208 = 728765U;
	uint64_t t51 = 495LLU;

    t51 = ((x205|(x206&x207))&x208);

    if (t51 != 3605LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x209 = UINT16_MAX;
	int8_t x210 = -3;
	static int16_t x211 = 2745;
	int32_t x212 = -1;
	int32_t t52 = 204756223;

    t52 = ((x209|(x210&x211))&x212);

    if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x213 = INT8_MIN;
	static int32_t x214 = INT32_MAX;
	uint32_t x215 = UINT32_MAX;
	static volatile int64_t t53 = -239542431LL;

    t53 = ((x213|(x214&x215))&x216);

    if (t53 != 4294967295LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = 1672U;
	volatile uint8_t x218 = 11U;

    t54 = ((x217|(x218&x219))&x220);

    if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	uint64_t x222 = 2041LLU;
	int16_t x223 = 1;
	int8_t x224 = INT8_MIN;
	volatile uint64_t t55 = 258637889175LLU;

    t55 = ((x221|(x222&x223))&x224);

    if (t55 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = -1;
	int64_t x226 = -12489964445111727LL;
	static int16_t x227 = INT16_MAX;
	volatile int64_t x228 = -481LL;
	volatile int64_t t56 = -611LL;

    t56 = ((x225|(x226&x227))&x228);

    if (t56 != -481LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x229 = INT8_MIN;
	static int8_t x230 = INT8_MAX;
	int32_t x232 = -1;
	uint64_t t57 = 378328658LLU;

    t57 = ((x229|(x230&x231))&x232);

    if (t57 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MAX;
	volatile uint8_t x234 = UINT8_MAX;
	static int64_t x236 = 14916569679404LL;

    t58 = ((x233|(x234&x235))&x236);

    if (t58 != 44LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = 28723LL;
	int16_t x239 = INT16_MIN;
	int64_t x240 = -1LL;
	int64_t t59 = -1348203LL;

    t59 = ((x237|(x238&x239))&x240);

    if (t59 != -9223372036854747085LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x242 = INT32_MIN;
	int64_t x244 = 380983804523483LL;
	volatile int64_t t60 = 80222905448LL;

    t60 = ((x241|(x242&x243))&x244);

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x246 = 0;
	int64_t x247 = INT64_MAX;
	uint16_t x248 = 2U;
	volatile int64_t t61 = 73209885034LL;

    t61 = ((x245|(x246&x247))&x248);

    if (t61 != 2LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x250 = 13U;
	volatile int32_t x252 = INT32_MAX;
	volatile uint64_t t62 = 905907046554224646LLU;

    t62 = ((x249|(x250&x251))&x252);

    if (t62 != 2147483647LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x253 = 15U;
	int16_t x254 = INT16_MIN;
	int64_t t63 = 112505226733771LL;

    t63 = ((x253|(x254&x255))&x256);

    if (t63 != 13LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x258 = INT64_MIN;
	static uint32_t x259 = UINT32_MAX;
	int32_t x260 = INT32_MIN;
	volatile int64_t t64 = -2LL;

    t64 = ((x257|(x258&x259))&x260);

    if (t64 != -2147483648LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x261 = INT16_MAX;
	int32_t x263 = INT32_MAX;
	uint8_t x264 = UINT8_MAX;
	int32_t t65 = 4470735;

    t65 = ((x261|(x262&x263))&x264);

    if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = -1LL;
	uint32_t x267 = UINT32_MAX;
	volatile int8_t x268 = 18;
	int64_t t66 = 525819111301LL;

    t66 = ((x265|(x266&x267))&x268);

    if (t66 != 18LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x269 = 2U;
	volatile int8_t x270 = INT8_MIN;
	int16_t x271 = INT16_MIN;
	volatile int32_t t67 = 3;

    t67 = ((x269|(x270&x271))&x272);

    if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = UINT64_MAX;
	volatile int64_t x274 = INT64_MAX;
	int8_t x275 = 28;
	static int32_t x276 = INT32_MAX;

    t68 = ((x273|(x274&x275))&x276);

    if (t68 != 2147483647LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x278 = 0;
	volatile int8_t x279 = INT8_MIN;
	volatile uint32_t x280 = 47916630U;

    t69 = ((x277|(x278&x279))&x280);

    if (t69 != 43714048LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = UINT16_MAX;
	static uint32_t x282 = 197U;
	static uint64_t x283 = 10764LLU;
	volatile uint64_t t70 = 3699LLU;

    t70 = ((x281|(x282&x283))&x284);

    if (t70 != 241LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MAX;
	int32_t x286 = -1;
	volatile int16_t x287 = INT16_MIN;
	volatile int32_t t71 = 1094;

    t71 = ((x285|(x286&x287))&x288);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MIN;
	int8_t x290 = INT8_MIN;
	int32_t x291 = -41120779;
	int16_t x292 = INT16_MAX;
	volatile int32_t t72 = -611;

    t72 = ((x289|(x290&x291))&x292);

    if (t72 != 32640) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = 1U;
	uint32_t x294 = UINT32_MAX;
	static volatile int8_t x295 = 0;
	volatile uint32_t x296 = 51U;
	uint32_t t73 = 117861232U;

    t73 = ((x293|(x294&x295))&x296);

    if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x298 = UINT32_MAX;
	static uint16_t x299 = 944U;

    t74 = ((x297|(x298&x299))&x300);

    if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x302 = INT64_MAX;
	volatile uint16_t x303 = UINT16_MAX;
	int16_t x304 = -1;
	int64_t t75 = -1227LL;

    t75 = ((x301|(x302&x303))&x304);

    if (t75 != 2147483647LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MIN;
	int64_t x306 = INT64_MIN;
	int8_t x307 = INT8_MIN;

    t76 = ((x305|(x306&x307))&x308);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x309 = UINT16_MAX;
	int8_t x310 = INT8_MIN;
	volatile int64_t x311 = 540LL;
	int64_t x312 = 189LL;
	int64_t t77 = 52LL;

    t77 = ((x309|(x310&x311))&x312);

    if (t77 != 189LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = 30643904541LL;
	uint32_t x314 = 298188U;
	uint16_t x316 = UINT16_MAX;
	volatile int64_t t78 = 1027619006LL;

    t78 = ((x313|(x314&x315))&x316);

    if (t78 != 60637LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = UINT8_MAX;
	volatile uint64_t x318 = 999777516212134655LLU;
	volatile int32_t x319 = INT32_MIN;
	uint64_t t79 = 23566900526LLU;

    t79 = ((x317|(x318&x319))&x320);

    if (t79 != 179LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = -1175;
	int8_t x324 = -1;
	volatile int32_t t80 = -1;

    t80 = ((x321|(x322&x323))&x324);

    if (t80 != -5) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = 1U;
	int64_t x326 = INT64_MIN;
	int8_t x327 = -38;
	int32_t x328 = INT32_MIN;
	int64_t t81 = INT64_MIN;

    t81 = ((x325|(x326&x327))&x328);

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = 1646;
	int64_t x331 = INT64_MIN;
	uint64_t x332 = 18636354855LLU;
	uint64_t t82 = 13154LLU;

    t82 = ((x329|(x330&x331))&x332);

    if (t82 != 1062LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 0U;
	static volatile int16_t x334 = -113;
	int64_t x335 = 148294LL;
	uint32_t x336 = 1296U;
	volatile int64_t t83 = 533794652459LL;

    t83 = ((x333|(x334&x335))&x336);

    if (t83 != 256LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = UINT8_MAX;
	volatile uint64_t x338 = UINT64_MAX;
	static int64_t x339 = -1LL;
	uint64_t t84 = 2142153LLU;

    t84 = ((x337|(x338&x339))&x340);

    if (t84 != 2147483647LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = -1;
	int64_t x342 = INT64_MIN;
	int64_t x343 = INT64_MIN;
	uint8_t x344 = 30U;
	volatile int64_t t85 = -4LL;

    t85 = ((x341|(x342&x343))&x344);

    if (t85 != 30LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x346 = -1LL;
	volatile uint16_t x347 = UINT16_MAX;
	static int64_t t86 = 16781LL;

    t86 = ((x345|(x346&x347))&x348);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x351 = UINT64_MAX;
	volatile uint64_t t87 = 617472852655278339LLU;

    t87 = ((x349|(x350&x351))&x352);

    if (t87 != 130399114743LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x353 = 11330U;
	static int32_t x354 = INT32_MIN;
	int8_t x355 = INT8_MAX;
	int32_t t88 = -444;

    t88 = ((x353|(x354&x355))&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x357 = INT32_MIN;
	uint16_t x358 = UINT16_MAX;
	static int64_t x359 = 927898922994LL;
	uint32_t x360 = UINT32_MAX;
	volatile int64_t t89 = 87262084LL;

    t89 = ((x357|(x358&x359))&x360);

    if (t89 != 2147545074LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	uint32_t x362 = UINT32_MAX;
	int32_t x363 = INT32_MIN;
	uint8_t x364 = 1U;

    t90 = ((x361|(x362&x363))&x364);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x366 = UINT8_MAX;
	int32_t x368 = 831;
	volatile int32_t t91 = -987;

    t91 = ((x365|(x366&x367))&x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x369 = 0U;
	volatile int32_t x370 = 87093261;
	static int16_t x371 = 1845;
	uint8_t x372 = 29U;
	int32_t t92 = -15425;

    t92 = ((x369|(x370&x371))&x372);

    if (t92 != 5) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MIN;
	volatile int16_t x374 = INT16_MIN;
	static int32_t x375 = -7579128;
	uint32_t x376 = 38836U;

    t93 = ((x373|(x374&x375))&x376);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = 63;
	int16_t x378 = -4;
	int8_t x379 = -6;
	int16_t x380 = 2493;

    t94 = ((x377|(x378&x379))&x380);

    if (t94 != 2493) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x381 = 41U;
	volatile int8_t x382 = -7;
	int8_t x383 = 1;
	static int64_t x384 = INT64_MAX;
	int64_t t95 = -2064952605637928877LL;

    t95 = ((x381|(x382&x383))&x384);

    if (t95 != 41LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = -1LL;
	volatile uint64_t x386 = 16LLU;

    t96 = ((x385|(x386&x387))&x388);

    if (t96 != 4294967295LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x390 = INT32_MIN;
	uint32_t x392 = UINT32_MAX;
	uint64_t t97 = 20656LLU;

    t97 = ((x389|(x390&x391))&x392);

    if (t97 != 4190919964LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = 1;
	int64_t x394 = -1LL;
	volatile uint64_t x395 = 4LLU;
	int64_t x396 = -4LL;
	volatile uint64_t t98 = 140609254LLU;

    t98 = ((x393|(x394&x395))&x396);

    if (t98 != 4LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = UINT8_MAX;
	int16_t x398 = -1;
	static volatile uint64_t x399 = 3498054LLU;
	int64_t x400 = -1LL;
	volatile uint64_t t99 = 1236820101LLU;

    t99 = ((x397|(x398&x399))&x400);

    if (t99 != 3498239LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -1;
	uint32_t x402 = 706517103U;
	int8_t x403 = INT8_MAX;
	static uint8_t x404 = UINT8_MAX;
	static uint32_t t100 = 1036248148U;

    t100 = ((x401|(x402&x403))&x404);

    if (t100 != 255U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = UINT16_MAX;
	volatile int32_t x406 = INT32_MIN;
	int64_t x407 = INT64_MIN;
	uint16_t x408 = 2U;
	int64_t t101 = -205042LL;

    t101 = ((x405|(x406&x407))&x408);

    if (t101 != 2LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x410 = -1LL;
	int64_t x411 = -943831LL;
	int16_t x412 = -1;
	int64_t t102 = 131434754930LL;

    t102 = ((x409|(x410&x411))&x412);

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x414 = 51334348;
	volatile int32_t x415 = INT32_MIN;
	static volatile int64_t x416 = 8116044LL;
	int64_t t103 = 13882LL;

    t103 = ((x413|(x414&x415))&x416);

    if (t103 != 4LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MIN;
	int16_t x418 = 1;
	static uint32_t x419 = 119974U;
	volatile uint32_t x420 = 1792221U;

    t104 = ((x417|(x418&x419))&x420);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x421 = INT64_MIN;
	volatile uint64_t x422 = UINT64_MAX;
	volatile int64_t x423 = INT64_MAX;
	int8_t x424 = -1;
	uint64_t t105 = UINT64_MAX;

    t105 = ((x421|(x422&x423))&x424);

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x426 = -1;
	int32_t x427 = -1;
	int64_t x428 = -238039LL;
	int64_t t106 = 10093491625LL;

    t106 = ((x425|(x426&x427))&x428);

    if (t106 != -238039LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = -2;
	uint32_t x430 = 1706U;
	int64_t x431 = INT64_MIN;
	int64_t t107 = 49LL;

    t107 = ((x429|(x430&x431))&x432);

    if (t107 != -2LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x433 = 1859;
	uint8_t x434 = 2U;
	int64_t x435 = INT64_MAX;
	uint16_t x436 = UINT16_MAX;
	int64_t t108 = 4027134378LL;

    t108 = ((x433|(x434&x435))&x436);

    if (t108 != 1859LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x437 = 6851777U;
	int8_t x438 = -1;
	volatile int8_t x439 = -1;
	int64_t x440 = 2667618669425504219LL;
	int64_t t109 = -223131996206LL;

    t109 = ((x437|(x438&x439))&x440);

    if (t109 != 3545149403LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x441 = -1;
	static volatile int8_t x443 = 14;
	int8_t x444 = INT8_MIN;
	static int32_t t110 = 2201780;

    t110 = ((x441|(x442&x443))&x444);

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MIN;
	int32_t x447 = -1;
	static int64_t x448 = INT64_MAX;
	volatile int64_t t111 = -47LL;

    t111 = ((x445|(x446&x447))&x448);

    if (t111 != 9223372036854771638LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x450 = INT16_MIN;
	volatile uint16_t x451 = 4U;

    t112 = ((x449|(x450&x451))&x452);

    if (t112 != INT64_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x453 = INT16_MAX;
	int32_t x454 = INT32_MAX;
	static int16_t x456 = -1;
	int32_t t113 = -1470616;

    t113 = ((x453|(x454&x455))&x456);

    if (t113 != 32767) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint16_t x457 = 0U;
	uint8_t x458 = 59U;
	int16_t x459 = INT16_MIN;
	static volatile uint64_t t114 = 2554252054LLU;

    t114 = ((x457|(x458&x459))&x460);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x463 = -1;
	volatile int32_t x464 = INT32_MIN;
	int64_t t115 = INT64_MIN;

    t115 = ((x461|(x462&x463))&x464);

    if (t115 != INT64_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MIN;
	int32_t x466 = INT32_MIN;
	volatile int32_t t116 = 524727024;

    t116 = ((x465|(x466&x467))&x468);

    if (t116 != -90023296) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x469 = 1;
	static int32_t x470 = INT32_MIN;
	int64_t x471 = -1LL;
	int64_t x472 = -1LL;
	int64_t t117 = -2001594903852LL;

    t117 = ((x469|(x470&x471))&x472);

    if (t117 != -2147483647LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MAX;
	uint8_t x474 = 17U;
	int16_t x475 = INT16_MAX;
	int16_t x476 = INT16_MIN;
	volatile int64_t t118 = -8077131988LL;

    t118 = ((x473|(x474&x475))&x476);

    if (t118 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x478 = -1;
	int64_t x480 = 110632101812904064LL;
	static int64_t t119 = 268859973284LL;

    t119 = ((x477|(x478&x479))&x480);

    if (t119 != 110632101392416768LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -53167914741859982LL;
	volatile uint64_t x482 = UINT64_MAX;
	static int64_t x484 = INT64_MIN;
	uint64_t t120 = 4852205435LLU;

    t120 = ((x481|(x482&x483))&x484);

    if (t120 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = 196U;
	volatile int8_t x486 = -35;
	uint16_t x487 = UINT16_MAX;
	int8_t x488 = -2;
	static volatile int32_t t121 = 1;

    t121 = ((x485|(x486&x487))&x488);

    if (t121 != 65500) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x490 = 14;
	static uint64_t x491 = 4903566847LLU;
	int32_t x492 = INT32_MAX;
	uint64_t t122 = 481580867632330708LLU;

    t122 = ((x489|(x490&x491))&x492);

    if (t122 != 14LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 2127017658825928LLU;
	static int32_t x494 = -1764328;
	static int8_t x495 = INT8_MIN;

    t123 = ((x493|(x494&x495))&x496);

    if (t123 != 18446744073709370568LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x498 = -1LL;
	int64_t x500 = -10408LL;
	int64_t t124 = 262926335LL;

    t124 = ((x497|(x498&x499))&x500);

    if (t124 != 135534104LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = 3U;
	uint64_t x504 = 11766200LLU;
	uint64_t t125 = 25812487553046LLU;

    t125 = ((x501|(x502&x503))&x504);

    if (t125 != 11766200LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x505 = 7U;
	static uint32_t x506 = 7U;
	int8_t x507 = 14;
	int64_t t126 = 7LL;

    t126 = ((x505|(x506&x507))&x508);

    if (t126 != 6LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -1;
	int8_t x510 = INT8_MIN;
	int32_t x511 = -1;
	int8_t x512 = INT8_MIN;
	static int32_t t127 = 115006;

    t127 = ((x509|(x510&x511))&x512);

    if (t127 != -128) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = -1;
	int32_t x514 = INT32_MIN;
	uint8_t x515 = 3U;
	int64_t x516 = INT64_MIN;

    t128 = ((x513|(x514&x515))&x516);

    if (t128 != INT64_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = -56;
	int64_t x518 = INT64_MIN;
	volatile uint32_t x519 = UINT32_MAX;
	volatile int64_t t129 = 28128976613411LL;

    t129 = ((x517|(x518&x519))&x520);

    if (t129 != -56LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x521 = 560U;
	volatile int8_t x522 = -23;
	uint8_t x523 = 0U;
	int64_t x524 = INT64_MIN;

    t130 = ((x521|(x522&x523))&x524);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x525 = INT8_MAX;
	static volatile uint64_t x527 = 2441760683LLU;
	int32_t x528 = INT32_MIN;
	static uint64_t t131 = 16290174936988LLU;

    t131 = ((x525|(x526&x527))&x528);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -1;
	int16_t x530 = 12389;
	int16_t x531 = INT16_MIN;
	uint32_t x532 = 257611U;

    t132 = ((x529|(x530&x531))&x532);

    if (t132 != 257611U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = -184727LL;
	static volatile int8_t x534 = INT8_MIN;

    t133 = ((x533|(x534&x535))&x536);

    if (t133 != -20895LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x539 = UINT32_MAX;
	static volatile uint32_t t134 = 10236U;

    t134 = ((x537|(x538&x539))&x540);

    if (t134 != 1731357440U) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x542 = -8;
	int64_t x543 = -19872595LL;
	uint8_t x544 = 67U;
	volatile int64_t t135 = 13898LL;

    t135 = ((x541|(x542&x543))&x544);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	volatile uint64_t x546 = UINT64_MAX;
	int64_t x547 = INT64_MIN;
	int8_t x548 = 0;
	uint64_t t136 = 156876043LLU;

    t136 = ((x545|(x546&x547))&x548);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = 4395;
	int32_t x550 = -1;
	int64_t x551 = INT64_MIN;
	uint64_t x552 = 3868231LLU;
	volatile uint64_t t137 = 8337656065110053LLU;

    t137 = ((x549|(x550&x551))&x552);

    if (t137 != 3LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = -1;
	int32_t x554 = INT32_MIN;
	uint16_t x555 = UINT16_MAX;
	uint8_t x556 = UINT8_MAX;
	int32_t t138 = 4079733;

    t138 = ((x553|(x554&x555))&x556);

    if (t138 != 255) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = -1;
	uint8_t x558 = 0U;
	uint8_t x559 = 8U;
	uint32_t t139 = UINT32_MAX;

    t139 = ((x557|(x558&x559))&x560);

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x561 = INT16_MIN;
	uint64_t x562 = UINT64_MAX;
	uint8_t x563 = 5U;
	static volatile int16_t x564 = INT16_MIN;

    t140 = ((x561|(x562&x563))&x564);

    if (t140 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = 2U;
	int64_t x566 = -330LL;
	static uint64_t x567 = 10LLU;
	int16_t x568 = INT16_MIN;

    t141 = ((x565|(x566&x567))&x568);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MIN;
	volatile int16_t x570 = INT16_MIN;
	int64_t x571 = -1LL;
	volatile int64_t t142 = 393325652154083LL;

    t142 = ((x569|(x570&x571))&x572);

    if (t142 != -32768LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x573 = UINT8_MAX;
	static int16_t x574 = 834;
	static volatile int32_t t143 = -30;

    t143 = ((x573|(x574&x575))&x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x578 = 3U;
	int64_t x579 = INT64_MAX;
	volatile int64_t t144 = 992479504LL;

    t144 = ((x577|(x578&x579))&x580);

    if (t144 != -2147483645LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x582 = 658010603U;
	volatile int64_t x583 = INT64_MIN;
	int8_t x584 = -1;
	int64_t t145 = -439321394498LL;

    t145 = ((x581|(x582&x583))&x584);

    if (t145 != -15LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = 177460932;
	int8_t x586 = -1;
	static volatile int32_t x588 = -1;
	static int32_t t146 = 70318;

    t146 = ((x585|(x586&x587))&x588);

    if (t146 != -50) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MIN;
	static volatile int32_t x590 = -3523;
	uint16_t x592 = 1U;
	volatile int32_t t147 = 60925;

    t147 = ((x589|(x590&x591))&x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x593 = 21405263U;
	int64_t x594 = INT64_MIN;
	static int32_t x595 = -23287074;
	uint8_t x596 = 13U;
	int64_t t148 = -202578563383603LL;

    t148 = ((x593|(x594&x595))&x596);

    if (t148 != 13LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x597 = -1062591376650LL;
	static volatile int32_t x598 = INT32_MAX;
	static int64_t x599 = 13960656300509382LL;
	int16_t x600 = 1;
	static int64_t t149 = 402664844144LL;

    t149 = ((x597|(x598&x599))&x600);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MIN;
	uint32_t x602 = UINT32_MAX;
	int8_t x604 = INT8_MIN;

    t150 = ((x601|(x602&x603))&x604);

    if (t150 != -9223372035823532160LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = UINT32_MAX;
	uint32_t x606 = 32U;
	uint32_t x608 = UINT32_MAX;

    t151 = ((x605|(x606&x607))&x608);

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MAX;
	int16_t x610 = 1;
	uint8_t x611 = UINT8_MAX;
	int64_t x612 = INT64_MIN;

    t152 = ((x609|(x610&x611))&x612);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MAX;
	int32_t x614 = INT32_MIN;
	static volatile uint64_t x615 = 23164703573409879LLU;
	static uint64_t x616 = 2865319511980467LLU;
	volatile uint64_t t153 = 546128410779LLU;

    t153 = ((x613|(x614&x615))&x616);

    if (t153 != 2865319511980467LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x618 = 7140094889766245079LLU;
	int64_t x619 = -3260175988475236LL;
	int64_t x620 = INT64_MIN;

    t154 = ((x617|(x618&x619))&x620);

    if (t154 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = 48U;
	volatile int16_t x622 = -1782;
	static volatile int16_t x623 = INT16_MAX;
	int64_t t155 = -5110957508LL;

    t155 = ((x621|(x622&x623))&x624);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 8381518U;
	uint64_t x626 = 24677992067LLU;
	uint16_t x628 = UINT16_MAX;
	uint64_t t156 = 251169721180930LLU;

    t156 = ((x625|(x626&x627))&x628);

    if (t156 != 59087LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x629 = 799988917;
	int64_t x632 = -1LL;
	static uint64_t t157 = 9282464LLU;

    t157 = ((x629|(x630&x631))&x632);

    if (t157 != 801103029LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x634 = 30;
	volatile int8_t x635 = INT8_MIN;
	int64_t x636 = INT64_MAX;
	volatile int64_t t158 = INT64_MAX;

    t158 = ((x633|(x634&x635))&x636);

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 64U;
	static int8_t x638 = INT8_MAX;
	uint32_t x639 = 498221326U;
	uint32_t x640 = UINT32_MAX;
	volatile uint32_t t159 = 1U;

    t159 = ((x637|(x638&x639))&x640);

    if (t159 != 78U) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x641 = INT64_MAX;
	volatile int8_t x642 = -1;
	int32_t x643 = -1059474821;
	int32_t x644 = INT32_MIN;
	int64_t t160 = -4136922478221300523LL;

    t160 = ((x641|(x642&x643))&x644);

    if (t160 != -2147483648LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x645 = -5;
	static uint32_t x646 = 61953U;
	volatile int64_t x647 = -1LL;
	volatile uint32_t x648 = 0U;
	int64_t t161 = -55868354377816LL;

    t161 = ((x645|(x646&x647))&x648);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 1U;
	uint8_t x650 = UINT8_MAX;
	int16_t x651 = INT16_MIN;
	int64_t x652 = -12259920LL;
	int64_t t162 = -18LL;

    t162 = ((x649|(x650&x651))&x652);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x653 = -2129300015LL;
	uint16_t x654 = 363U;
	uint16_t x656 = UINT16_MAX;
	int64_t t163 = -957195443356405LL;

    t163 = ((x653|(x654&x655))&x656);

    if (t163 != 30161LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x657 = INT8_MIN;
	uint16_t x658 = 41U;
	int64_t x659 = INT64_MAX;
	uint16_t x660 = 1U;

    t164 = ((x657|(x658&x659))&x660);

    if (t164 != 1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int32_t x661 = INT32_MIN;
	static volatile uint64_t x662 = UINT64_MAX;
	int8_t x663 = 30;
	int64_t x664 = 1712762956615LL;
	volatile uint64_t t165 = 11899060457LLU;

    t165 = ((x661|(x662&x663))&x664);

    if (t165 != 1711544467462LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x666 = 122U;
	static int64_t x667 = -1LL;
	volatile int16_t x668 = -1;
	volatile int64_t t166 = -17797431203918731LL;

    t166 = ((x665|(x666&x667))&x668);

    if (t166 != 42494LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = -1;
	int16_t x670 = INT16_MAX;
	int32_t x671 = INT32_MAX;
	int32_t x672 = -1;

    t167 = ((x669|(x670&x671))&x672);

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MAX;
	int32_t x674 = -1;
	uint16_t x675 = 86U;
	int8_t x676 = 15;

    t168 = ((x673|(x674&x675))&x676);

    if (t168 != 15LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -1LL;
	uint16_t x678 = 17066U;
	static int32_t x679 = INT32_MIN;
	int16_t x680 = 0;
	static volatile int64_t t169 = 40LL;

    t169 = ((x677|(x678&x679))&x680);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x681 = 1U;
	uint16_t x682 = UINT16_MAX;
	static int8_t x684 = INT8_MIN;
	volatile int64_t t170 = -625510LL;

    t170 = ((x681|(x682&x683))&x684);

    if (t170 != 65408LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = UINT16_MAX;
	uint32_t x686 = UINT32_MAX;
	uint8_t x687 = 33U;

    t171 = ((x685|(x686&x687))&x688);

    if (t171 != 14U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MIN;
	int16_t x690 = -1;
	static int32_t x691 = INT32_MAX;
	int16_t x692 = -1;
	volatile int32_t t172 = 0;

    t172 = ((x689|(x690&x691))&x692);

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x693 = 232147951U;
	static uint32_t x694 = 24855245U;
	int8_t x696 = -6;
	uint32_t t173 = 8495885U;

    t173 = ((x693|(x694&x695))&x696);

    if (t173 != 232147946U) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -45;
	uint64_t x698 = UINT64_MAX;
	static int64_t x699 = INT64_MIN;
	uint32_t x700 = 83339U;
	volatile uint64_t t174 = 9LLU;

    t174 = ((x697|(x698&x699))&x700);

    if (t174 != 83331LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x702 = UINT32_MAX;
	volatile int8_t x703 = INT8_MIN;
	int32_t x704 = INT32_MAX;
	volatile uint32_t t175 = 1U;

    t175 = ((x701|(x702&x703))&x704);

    if (t175 != 2147483527U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x705 = UINT16_MAX;
	int64_t x706 = INT64_MAX;
	uint64_t x707 = 1064801305025LLU;
	static int64_t x708 = 0LL;
	static uint64_t t176 = 15695037611186LLU;

    t176 = ((x705|(x706&x707))&x708);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x709 = INT8_MAX;
	int64_t x710 = -3343132818128LL;
	static int16_t x711 = INT16_MAX;
	static int32_t x712 = 286216855;
	int64_t t177 = -5221352336735705LL;

    t177 = ((x709|(x710&x711))&x712);

    if (t177 != 23LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 107U;
	int64_t x715 = INT64_MIN;
	volatile int32_t x716 = INT32_MAX;
	int64_t t178 = 391098LL;

    t178 = ((x713|(x714&x715))&x716);

    if (t178 != 107LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 31U;
	int8_t x718 = INT8_MAX;
	int16_t x719 = INT16_MIN;
	static int16_t x720 = 2010;
	int32_t t179 = -1002;

    t179 = ((x717|(x718&x719))&x720);

    if (t179 != 26) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x721 = 2U;
	uint32_t x722 = UINT32_MAX;
	int64_t x723 = 60214LL;
	uint64_t t180 = 2LLU;

    t180 = ((x721|(x722&x723))&x724);

    if (t180 != 41270LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = 11;
	int16_t x726 = -1;
	uint32_t x727 = 116075794U;
	uint64_t x728 = 13341063LLU;
	static volatile uint64_t t181 = 4LLU;

    t181 = ((x725|(x726&x727))&x728);

    if (t181 != 13304067LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x729 = -17039555LL;
	volatile int64_t x731 = INT64_MIN;
	static int8_t x732 = INT8_MIN;
	uint64_t t182 = 7781046688871LLU;

    t182 = ((x729|(x730&x731))&x732);

    if (t182 != 18446744073692512000LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 7337U;
	int32_t x734 = INT32_MAX;
	int32_t x735 = -1;
	uint8_t x736 = 40U;
	volatile uint32_t t183 = 180274355U;

    t183 = ((x733|(x734&x735))&x736);

    if (t183 != 40U) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	int64_t x738 = INT64_MIN;
	uint8_t x739 = 43U;
	int64_t x740 = INT64_MAX;
	int64_t t184 = 853893710521LL;

    t184 = ((x737|(x738&x739))&x740);

    if (t184 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x741 = -16261;
	volatile int16_t x743 = -1;
	int64_t x744 = INT64_MAX;
	volatile int64_t t185 = 529411338486335LL;

    t185 = ((x741|(x742&x743))&x744);

    if (t185 != 9223372036854759547LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = 45;
	uint32_t x746 = 116527U;
	static int64_t x747 = INT64_MIN;
	int64_t x748 = 595931726701060LL;
	volatile int64_t t186 = 1820954290LL;

    t186 = ((x745|(x746&x747))&x748);

    if (t186 != 4LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x749 = -1LL;
	uint8_t x750 = UINT8_MAX;
	int64_t t187 = INT64_MIN;

    t187 = ((x749|(x750&x751))&x752);

    if (t187 != INT64_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x754 = 7055623;
	uint8_t x755 = 23U;
	int16_t x756 = INT16_MIN;

    t188 = ((x753|(x754&x755))&x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = -1;
	int8_t x758 = INT8_MIN;
	volatile uint8_t x759 = UINT8_MAX;
	uint64_t x760 = UINT64_MAX;
	uint64_t t189 = UINT64_MAX;

    t189 = ((x757|(x758&x759))&x760);

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x763 = 0;
	uint8_t x764 = 0U;
	static int64_t t190 = 30227LL;

    t190 = ((x761|(x762&x763))&x764);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	uint64_t x766 = 280284947239782LLU;
	int32_t x768 = 1471967;

    t191 = ((x765|(x766&x767))&x768);

    if (t191 != 1462528LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = 30;
	static int64_t x770 = INT64_MIN;
	int8_t x771 = 0;
	volatile int64_t t192 = -4404LL;

    t192 = ((x769|(x770&x771))&x772);

    if (t192 != 8LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = 2U;
	volatile int32_t x774 = INT32_MAX;
	int32_t t193 = 270;

    t193 = ((x773|(x774&x775))&x776);

    if (t193 != 2147450882) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x777 = -1;
	int8_t x778 = INT8_MAX;
	static volatile int8_t x779 = INT8_MIN;
	int16_t x780 = INT16_MAX;
	volatile int32_t t194 = -311149;

    t194 = ((x777|(x778&x779))&x780);

    if (t194 != 32767) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x781 = 56U;
	uint16_t x782 = 2U;
	static volatile int16_t x784 = -1;
	uint32_t t195 = 352U;

    t195 = ((x781|(x782&x783))&x784);

    if (t195 != 58U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = UINT8_MAX;
	int64_t x786 = INT64_MIN;
	int16_t x788 = INT16_MAX;

    t196 = ((x785|(x786&x787))&x788);

    if (t196 != 255LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x789 = -1LL;
	int32_t x791 = INT32_MIN;
	static uint64_t t197 = UINT64_MAX;

    t197 = ((x789|(x790&x791))&x792);

    if (t197 != UINT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x794 = 3U;
	uint64_t x795 = UINT64_MAX;
	int32_t x796 = -2;
	uint64_t t198 = 4879385682LLU;

    t198 = ((x793|(x794&x795))&x796);

    if (t198 != 126LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MIN;
	volatile int32_t x798 = 2135936;
	uint16_t x799 = 3558U;
	static volatile int16_t x800 = INT16_MIN;

    t199 = ((x797|(x798&x799))&x800);

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

