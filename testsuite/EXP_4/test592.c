
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

static int8_t x3 = -28;
volatile uint8_t x10 = UINT8_MAX;
int64_t x15 = -1LL;
int32_t x18 = INT32_MAX;
static int8_t x19 = 43;
uint32_t x23 = 130933U;
static uint32_t x28 = 242164968U;
int32_t x29 = INT32_MAX;
uint64_t x31 = 575518024356899855LLU;
int8_t x34 = 7;
int8_t x36 = -1;
volatile int64_t x45 = -1LL;
uint32_t x46 = UINT32_MAX;
int64_t x48 = 40313665022325LL;
int32_t t12 = 1;
uint32_t x57 = UINT32_MAX;
volatile int8_t x63 = INT8_MIN;
volatile uint32_t x64 = 613814U;
uint64_t x68 = 4221511567458913LLU;
volatile int16_t x79 = -14;
static int64_t t19 = -4539152856154036LL;
uint64_t x82 = 232740630LLU;
int64_t x85 = -15247024735LL;
int64_t x86 = INT64_MIN;
static volatile int64_t t21 = -49143826LL;
int32_t x90 = -1;
int32_t x92 = -117;
volatile uint64_t x101 = 2542268230943756152LLU;
int32_t x102 = -169;
uint32_t x105 = 28U;
volatile int32_t x106 = -5;
int64_t t26 = -120118LL;
volatile uint64_t t29 = 561884578774412315LLU;
static volatile uint32_t x130 = 3468829U;
uint16_t x132 = UINT16_MAX;
uint32_t t31 = 74127917U;
int64_t x142 = 220808058836LL;
int16_t x143 = INT16_MAX;
static int8_t x162 = INT8_MIN;
uint32_t x168 = 492U;
volatile int8_t x169 = INT8_MAX;
int64_t x171 = -6520237943286LL;
int8_t x176 = INT8_MIN;
uint16_t x177 = 1205U;
int32_t x180 = -22532598;
int8_t x184 = INT8_MAX;
volatile uint8_t x195 = 3U;
int64_t x196 = -1LL;
int32_t x198 = -3;
static int32_t x199 = -66275187;
int16_t x216 = INT16_MAX;
uint8_t x221 = 9U;
static int32_t x228 = INT32_MIN;
int64_t x232 = -1LL;
volatile int64_t t53 = -19805LL;
int32_t x234 = -1;
uint8_t x238 = UINT8_MAX;
uint32_t x242 = UINT32_MAX;
static volatile int8_t x252 = 14;
int16_t x257 = -1;
int16_t x265 = INT16_MIN;
static uint8_t x272 = 92U;
static uint64_t t62 = 24765673LLU;
uint32_t x275 = 8253426U;
volatile uint32_t t63 = 41095U;
int8_t x277 = INT8_MIN;
volatile int16_t x278 = INT16_MIN;
volatile uint16_t x280 = UINT16_MAX;
int16_t x282 = -1;
uint64_t x283 = UINT64_MAX;
uint64_t x287 = UINT64_MAX;
int64_t x288 = INT64_MIN;
volatile int32_t x292 = INT32_MIN;
uint64_t t67 = 250728455LLU;
int8_t x295 = INT8_MIN;
int32_t x301 = -4103265;
volatile int8_t x302 = -2;
static volatile int16_t x311 = 0;
uint32_t x316 = 714557U;
int64_t t73 = -844LL;
uint16_t x322 = 0U;
uint8_t x326 = 1U;
uint8_t x328 = UINT8_MAX;
static volatile int32_t t75 = 32264;
volatile int64_t x348 = INT64_MAX;
int64_t t80 = 4197935837606826LL;
static int32_t x353 = -95383062;
int64_t x355 = INT64_MIN;
int8_t x356 = INT8_MIN;
volatile uint32_t t82 = 31044U;
int64_t x369 = 4513LL;
int64_t t86 = 239352623925116008LL;
volatile int16_t x381 = INT16_MIN;
int16_t x382 = -2;
static volatile int32_t t87 = 1011297;
uint32_t x385 = UINT32_MAX;
int32_t x386 = -1;
int64_t x388 = -1LL;
int16_t x396 = INT16_MAX;
uint32_t x397 = 231268646U;
uint64_t x398 = 875244146037385LLU;
volatile int64_t t93 = 1LL;
volatile uint64_t x416 = 638975438599355641LLU;
int32_t x423 = INT32_MIN;
int16_t x425 = INT16_MIN;
static int32_t x432 = -3681357;
int16_t x450 = INT16_MIN;
static int8_t x452 = -1;
volatile uint8_t x453 = 3U;
volatile int64_t t104 = -3088109566600LL;
static int8_t x461 = -1;
int64_t x464 = -1LL;
uint16_t x470 = 14814U;
volatile uint64_t t108 = 3383003659239LLU;
uint64_t x481 = 112023950380LLU;
uint16_t x483 = 0U;
int32_t x484 = INT32_MAX;
uint64_t t110 = 16030095004LLU;
int64_t x490 = -525610657685896542LL;
volatile int64_t t112 = -17559831639939293LL;
static uint32_t t113 = 1U;
int64_t x498 = -4201778519612220555LL;
volatile uint16_t x510 = 378U;
static volatile int32_t x524 = 3764963;
static volatile int64_t t124 = -1142886LL;
uint16_t x556 = UINT16_MAX;
volatile int8_t x559 = -1;
int8_t x564 = 5;
int64_t x569 = INT64_MAX;
uint64_t t130 = 18056LLU;
int8_t x582 = -5;
int32_t x583 = INT32_MIN;
int16_t x584 = -1097;
int32_t x585 = 27081;
uint32_t x588 = UINT32_MAX;
int8_t x602 = 36;
static volatile int32_t x604 = -8196;
int32_t x616 = 229695512;
uint32_t t138 = 918812U;
uint8_t x618 = 83U;
int8_t x630 = INT8_MAX;
volatile int64_t x632 = INT64_MIN;
int32_t x637 = INT32_MAX;
static int16_t x639 = INT16_MIN;
volatile int32_t x642 = -1;
int16_t x646 = INT16_MIN;
uint16_t x656 = 849U;
uint64_t t148 = 434216159LLU;
int16_t x665 = 3;
int8_t x668 = INT8_MIN;
volatile int8_t x669 = INT8_MIN;
volatile int64_t t151 = -3LL;
uint8_t x678 = 124U;
int8_t x679 = INT8_MIN;
volatile int64_t t153 = -501LL;
uint64_t x686 = UINT64_MAX;
int16_t x688 = INT16_MIN;
uint16_t x699 = 7233U;
int32_t x703 = INT32_MIN;
static volatile int64_t x705 = -1LL;
int64_t t159 = 59122933019856LL;
volatile int64_t t160 = 4349585729946LL;
volatile int8_t x713 = INT8_MIN;
int64_t x722 = INT64_MIN;
int64_t x726 = INT64_MAX;
int16_t x727 = -1;
volatile int16_t x730 = -1;
int16_t x731 = -1;
static int64_t x734 = INT64_MIN;
volatile int8_t x736 = -1;
int32_t x739 = -2;
int16_t x746 = INT16_MIN;
int8_t x786 = INT8_MIN;
int8_t x792 = -1;
int64_t x794 = -537911097400LL;
uint8_t x799 = 0U;
int32_t x801 = INT32_MIN;
int64_t t183 = 0LL;
volatile int16_t x813 = INT16_MIN;
int16_t x816 = -1;
uint64_t t185 = 9LLU;
int64_t x821 = -3080675621LL;
int64_t x824 = INT64_MAX;
static volatile int64_t t186 = 481662LL;
int16_t x826 = INT16_MIN;
volatile int32_t x840 = -1;
int32_t x845 = INT32_MIN;
volatile int16_t x846 = INT16_MIN;
int64_t x848 = -1LL;
uint64_t t190 = 903584242651795968LLU;
static int32_t x854 = -780;
uint64_t t193 = 4891219753382391330LLU;
uint64_t x865 = UINT64_MAX;
static volatile int8_t x868 = -1;
static int32_t t195 = 26;
uint16_t x873 = UINT16_MAX;
uint32_t x880 = 108158U;
int16_t x882 = INT16_MIN;
static int16_t x883 = -1;
uint32_t t199 = 108584U;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int64_t x2 = 416736254172857LL;
	uint8_t x4 = 4U;
	volatile int64_t t0 = -5785879010251430LL;

    t0 = (x1/(x2+(x3/x4)));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	static int16_t x6 = INT16_MAX;
	uint64_t x7 = 89926702621998LLU;
	int16_t x8 = -155;
	volatile uint64_t t1 = 242898LLU;

    t1 = (x5/(x6+(x7/x8)));

    if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	static volatile int64_t x11 = -1LL;
	int16_t x12 = INT16_MAX;
	volatile int64_t t2 = -1828907548085949342LL;

    t2 = (x9/(x10+(x11/x12)));

    if (t2 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MAX;
	volatile int32_t x14 = INT32_MIN;
	static int32_t x16 = 4;
	volatile int64_t t3 = 42073384440898LL;

    t3 = (x13/(x14+(x15/x16)));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = -132;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 5906961;

    t4 = (x17/(x18+(x19/x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 2320;
	int32_t x22 = 2979740;
	static uint8_t x24 = 1U;
	volatile uint32_t t5 = 32584U;

    t5 = (x21/(x22+(x23/x24)));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	int8_t x26 = -1;
	int32_t x27 = INT32_MAX;
	uint32_t t6 = 16U;

    t6 = (x25/(x26+(x27/x28)));

    if (t6 != 613566756U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x30 = INT64_MIN;
	int16_t x32 = INT16_MAX;
	static volatile uint64_t t7 = 294699531LLU;

    t7 = (x29/(x30+(x31/x32)));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int16_t x35 = -10;
	static volatile int32_t t8 = -3;

    t8 = (x33/(x34+(x35/x36)));

    if (t8 != -1927) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = 1382;
	uint16_t x38 = 381U;
	static int64_t x39 = 2272941739746037837LL;
	volatile int8_t x40 = 1;
	volatile int64_t t9 = -3573506LL;

    t9 = (x37/(x38+(x39/x40)));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = UINT32_MAX;
	int8_t x42 = INT8_MAX;
	int32_t x43 = INT32_MIN;
	int64_t x44 = -20769413243643LL;
	volatile int64_t t10 = 15372755229182488LL;

    t10 = (x41/(x42+(x43/x44)));

    if (t10 != 33818640LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x47 = 662388213335048LL;
	volatile int64_t t11 = -54512878802912LL;

    t11 = (x45/(x46+(x47/x48)));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	int16_t x50 = INT16_MIN;
	static int32_t x51 = INT32_MAX;
	int32_t x52 = INT32_MIN;

    t12 = (x49/(x50+(x51/x52)));

    if (t12 != 65536) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -1LL;
	int32_t x54 = INT32_MAX;
	volatile uint64_t x55 = 1580797LLU;
	volatile int32_t x56 = 2744;
	volatile uint64_t t13 = 13803305LLU;

    t13 = (x53/(x54+(x55/x56)));

    if (t13 != 8589932292LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = -822174215867273666LL;
	volatile uint16_t x59 = 1U;
	int32_t x60 = INT32_MAX;
	static volatile int64_t t14 = 69296LL;

    t14 = (x57/(x58+(x59/x60)));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 925144259254772953LLU;
	int8_t x62 = -1;
	static volatile uint64_t t15 = 639774345008715334LLU;

    t15 = (x61/(x62+(x63/x64)));

    if (t15 != 132239030768263LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x65 = 6U;
	static int32_t x66 = -1958867;
	int16_t x67 = 7;
	uint64_t t16 = 4444527488173433669LLU;

    t16 = (x65/(x66+(x67/x68)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = 24;
	static volatile uint32_t x70 = 3602U;
	uint32_t x71 = UINT32_MAX;
	int16_t x72 = -756;
	uint32_t t17 = 907316U;

    t17 = (x69/(x70+(x71/x72)));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -1;
	uint32_t x74 = 1599U;
	uint8_t x75 = 22U;
	int8_t x76 = INT8_MIN;
	volatile uint32_t t18 = 796U;

    t18 = (x73/(x74+(x75/x76)));

    if (t18 != 2686033U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x77 = INT8_MAX;
	int64_t x78 = INT64_MIN;
	int32_t x80 = 3681465;

    t19 = (x77/(x78+(x79/x80)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 2U;
	uint32_t x83 = 768610576U;
	int8_t x84 = -28;
	volatile uint64_t t20 = 246927LLU;

    t20 = (x81/(x82+(x83/x84)));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x87 = INT64_MIN;
	int32_t x88 = -748664;

    t21 = (x85/(x86+(x87/x88)));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x89 = -1;
	static volatile int16_t x91 = -1;
	static int32_t t22 = -68633937;

    t22 = (x89/(x90+(x91/x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 23134204882823LLU;
	static volatile int8_t x94 = -1;
	int32_t x95 = INT32_MIN;
	uint32_t x96 = 9926521U;
	static uint64_t t23 = 15856012730693322LLU;

    t23 = (x93/(x94+(x95/x96)));

    if (t23 != 107600952943LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x103 = INT16_MIN;
	int32_t x104 = -1;
	volatile uint64_t t24 = 274031806051256254LLU;

    t24 = (x101/(x102+(x103/x104)));

    if (t24 != 77986080276810LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x107 = INT32_MIN;
	uint32_t x108 = UINT32_MAX;
	static uint32_t t25 = 20U;

    t25 = (x105/(x106+(x107/x108)));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x109 = 25U;
	volatile int32_t x110 = 277448923;
	int64_t x111 = -1LL;
	static uint16_t x112 = 6U;

    t26 = (x109/(x110+(x111/x112)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = INT16_MIN;
	static volatile uint64_t x114 = 0LLU;
	volatile uint64_t x115 = 840359393796220LLU;
	int8_t x116 = INT8_MAX;
	volatile uint64_t t27 = 28891078043873LLU;

    t27 = (x113/(x114+(x115/x116)));

    if (t27 != 2787779LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = INT8_MAX;
	volatile int32_t x118 = -1;
	uint8_t x119 = 89U;
	int32_t x120 = INT32_MIN;
	int32_t t28 = 112796493;

    t28 = (x117/(x118+(x119/x120)));

    if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = INT64_MAX;
	uint64_t x122 = UINT64_MAX;
	volatile int8_t x123 = 6;
	int8_t x124 = INT8_MIN;

    t29 = (x121/(x122+(x123/x124)));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x125 = 19LL;
	uint32_t x126 = 938955U;
	int64_t x127 = -1LL;
	static int32_t x128 = 129;
	static volatile int64_t t30 = 27LL;

    t30 = (x125/(x126+(x127/x128)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x129 = INT32_MAX;
	volatile int32_t x131 = INT32_MIN;

    t31 = (x129/(x130+(x131/x132)));

    if (t31 != 624U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x133 = -1;
	static int16_t x134 = -364;
	volatile int8_t x135 = INT8_MAX;
	uint16_t x136 = UINT16_MAX;
	int32_t t32 = -10;

    t32 = (x133/(x134+(x135/x136)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint8_t x141 = 23U;
	int32_t x144 = -1;
	volatile int64_t t33 = 328608521LL;

    t33 = (x141/(x142+(x143/x144)));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x149 = INT32_MIN;
	static int16_t x150 = 6670;
	static uint32_t x151 = UINT32_MAX;
	uint16_t x152 = UINT16_MAX;
	uint32_t t34 = 1U;

    t34 = (x149/(x150+(x151/x152)));

    if (t34 != 29740U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x153 = INT16_MIN;
	int32_t x154 = 76;
	int16_t x155 = -14365;
	int32_t x156 = INT32_MIN;
	volatile int32_t t35 = -126967;

    t35 = (x153/(x154+(x155/x156)));

    if (t35 != -431) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x157 = INT64_MIN;
	uint64_t x158 = 269130350140LLU;
	uint8_t x159 = 71U;
	static uint16_t x160 = 707U;
	uint64_t t36 = 356635115758268215LLU;

    t36 = (x157/(x158+(x159/x160)));

    if (t36 != 34271021LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x161 = 0;
	static int8_t x163 = -1;
	int8_t x164 = -2;
	volatile int32_t t37 = 8;

    t37 = (x161/(x162+(x163/x164)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = 1339132;
	uint16_t x166 = UINT16_MAX;
	int16_t x167 = -1;
	volatile uint32_t t38 = 6U;

    t38 = (x165/(x166+(x167/x168)));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x170 = INT8_MIN;
	int8_t x172 = INT8_MIN;
	int64_t t39 = -836302LL;

    t39 = (x169/(x170+(x171/x172)));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x173 = 454LLU;
	int32_t x174 = INT32_MAX;
	volatile int64_t x175 = INT64_MIN;
	volatile uint64_t t40 = 238516LLU;

    t40 = (x173/(x174+(x175/x176)));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x178 = 1U;
	static int8_t x179 = 0;
	volatile int32_t t41 = 1823;

    t41 = (x177/(x178+(x179/x180)));

    if (t41 != 1205) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = INT8_MAX;
	volatile int8_t x182 = INT8_MIN;
	int32_t x183 = -80032410;
	static volatile int32_t t42 = -19100463;

    t42 = (x181/(x182+(x183/x184)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x189 = 74071532;
	volatile int8_t x190 = -7;
	uint16_t x191 = 2U;
	volatile uint64_t x192 = 270204LLU;
	volatile uint64_t t43 = 161560LLU;

    t43 = (x189/(x190+(x191/x192)));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x193 = 14U;
	int16_t x194 = -1;
	volatile int64_t t44 = -25LL;

    t44 = (x193/(x194+(x195/x196)));

    if (t44 != -3LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x197 = 60107947006335LLU;
	int8_t x200 = INT8_MAX;
	volatile uint64_t t45 = 25758458698557LLU;

    t45 = (x197/(x198+(x199/x200)));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x201 = INT8_MIN;
	int16_t x202 = INT16_MAX;
	uint32_t x203 = UINT32_MAX;
	volatile uint64_t x204 = UINT64_MAX;
	static volatile uint64_t t46 = 665060425838243715LLU;

    t46 = (x201/(x202+(x203/x204)));

    if (t46 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x205 = 3U;
	int32_t x206 = 94847;
	int64_t x207 = INT64_MIN;
	volatile uint64_t x208 = 8945827240928LLU;
	uint64_t t47 = 102150040019041LLU;

    t47 = (x205/(x206+(x207/x208)));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x209 = INT32_MAX;
	int32_t x210 = INT32_MIN;
	int16_t x211 = INT16_MIN;
	volatile int8_t x212 = -3;
	static volatile int32_t t48 = 13824;

    t48 = (x209/(x210+(x211/x212)));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x213 = INT16_MIN;
	int16_t x214 = -4;
	int16_t x215 = 14;
	volatile int32_t t49 = 0;

    t49 = (x213/(x214+(x215/x216)));

    if (t49 != 8192) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x217 = 2;
	int8_t x218 = -1;
	volatile uint8_t x219 = 62U;
	static uint32_t x220 = UINT32_MAX;
	uint32_t t50 = 1816015671U;

    t50 = (x217/(x218+(x219/x220)));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int8_t x222 = INT8_MAX;
	int64_t x223 = INT64_MAX;
	int16_t x224 = INT16_MAX;
	volatile int64_t t51 = 7983364347LL;

    t51 = (x221/(x222+(x223/x224)));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x225 = UINT16_MAX;
	int16_t x226 = 5855;
	static uint8_t x227 = 13U;
	static int32_t t52 = -447045625;

    t52 = (x225/(x226+(x227/x228)));

    if (t52 != 11) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x229 = 2126038424U;
	int16_t x230 = 0;
	uint32_t x231 = UINT32_MAX;

    t53 = (x229/(x230+(x231/x232)));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x233 = INT16_MAX;
	volatile int64_t x235 = INT64_MIN;
	int32_t x236 = INT32_MIN;
	static volatile int64_t t54 = -64111844LL;

    t54 = (x233/(x234+(x235/x236)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x237 = -89967;
	static volatile int64_t x239 = INT64_MIN;
	int32_t x240 = INT32_MIN;
	static volatile int64_t t55 = 15334238683090204LL;

    t55 = (x237/(x238+(x239/x240)));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x241 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	int32_t x244 = INT32_MAX;
	volatile uint32_t t56 = 109673653U;

    t56 = (x241/(x242+(x243/x244)));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x245 = -1;
	uint16_t x246 = 68U;
	uint32_t x247 = UINT32_MAX;
	static int32_t x248 = INT32_MIN;
	static volatile uint32_t t57 = 194U;

    t57 = (x245/(x246+(x247/x248)));

    if (t57 != 62245902U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x249 = 442019461537777381LLU;
	uint64_t x250 = 15511LLU;
	volatile uint16_t x251 = 1U;
	uint64_t t58 = 2LLU;

    t58 = (x249/(x250+(x251/x252)));

    if (t58 != 28497160823788LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x258 = INT8_MIN;
	static uint16_t x259 = UINT16_MAX;
	uint64_t x260 = 12941095927325LLU;
	uint64_t t59 = 16403884LLU;

    t59 = (x257/(x258+(x259/x260)));

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x261 = -1;
	int32_t x262 = INT32_MAX;
	static int16_t x263 = -6363;
	uint64_t x264 = 48794908142024537LLU;
	static volatile uint64_t t60 = 53568821533625LLU;

    t60 = (x261/(x262+(x263/x264)));

    if (t60 != 8589933084LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x266 = INT64_MIN;
	static uint32_t x267 = UINT32_MAX;
	static int64_t x268 = 31716115548051779LL;
	volatile int64_t t61 = -46144007031LL;

    t61 = (x265/(x266+(x267/x268)));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x269 = -1LL;
	static uint64_t x270 = 112376149045LLU;
	int8_t x271 = 0;

    t62 = (x269/(x270+(x271/x272)));

    if (t62 != 164151772LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x273 = 1690;
	int16_t x274 = -190;
	uint32_t x276 = 29U;

    t63 = (x273/(x274+(x275/x276)));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x279 = -1;
	int32_t t64 = -332599;

    t64 = (x277/(x278+(x279/x280)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x281 = INT64_MAX;
	uint16_t x284 = 855U;
	volatile uint64_t t65 = 24187LLU;

    t65 = (x281/(x282+(x283/x284)));

    if (t65 != 427LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x285 = 1U;
	static uint16_t x286 = UINT16_MAX;
	static uint64_t t66 = 1031090116819LLU;

    t66 = (x285/(x286+(x287/x288)));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x289 = 1295104092780LLU;
	int32_t x290 = 759247580;
	int64_t x291 = INT64_MIN;

    t67 = (x289/(x290+(x291/x292)));

    if (t67 != 256LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x293 = -7510003695260237LL;
	static int16_t x294 = 416;
	uint32_t x296 = UINT32_MAX;
	static int64_t t68 = 230708756425452LL;

    t68 = (x293/(x294+(x295/x296)));

    if (t68 != -18052893498221LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x297 = UINT64_MAX;
	int64_t x298 = -1LL;
	int32_t x299 = -361954046;
	int64_t x300 = INT64_MIN;
	static uint64_t t69 = 506LLU;

    t69 = (x297/(x298+(x299/x300)));

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int32_t x303 = -1;
	int32_t x304 = INT32_MAX;
	volatile int32_t t70 = -1;

    t70 = (x301/(x302+(x303/x304)));

    if (t70 != 2051632) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x305 = INT32_MIN;
	int32_t x306 = -7227679;
	int8_t x307 = -15;
	int64_t x308 = -1LL;
	static int64_t t71 = -1279LL;

    t71 = (x305/(x306+(x307/x308)));

    if (t71 != 297LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x309 = UINT16_MAX;
	int32_t x310 = INT32_MIN;
	uint32_t x312 = 506661U;
	static volatile uint32_t t72 = 415059919U;

    t72 = (x309/(x310+(x311/x312)));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	int32_t x314 = INT32_MAX;
	static int64_t x315 = -1LL;

    t73 = (x313/(x314+(x315/x316)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x321 = INT32_MAX;
	volatile int32_t x323 = INT32_MIN;
	int64_t x324 = -1LL;
	volatile int64_t t74 = 190166899060LL;

    t74 = (x321/(x322+(x323/x324)));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x325 = INT8_MIN;
	int32_t x327 = -1;

    t75 = (x325/(x326+(x327/x328)));

    if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x329 = 7216U;
	uint32_t x330 = UINT32_MAX;
	int16_t x331 = INT16_MIN;
	uint8_t x332 = UINT8_MAX;
	uint32_t t76 = 6U;

    t76 = (x329/(x330+(x331/x332)));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x333 = -1;
	static volatile int8_t x334 = INT8_MIN;
	uint64_t x335 = UINT64_MAX;
	int32_t x336 = INT32_MIN;
	volatile uint64_t t77 = 149513808782679994LLU;

    t77 = (x333/(x334+(x335/x336)));

    if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x337 = 215U;
	int64_t x338 = INT64_MIN;
	int32_t x339 = INT32_MAX;
	uint16_t x340 = 82U;
	static int64_t t78 = 22858029590LL;

    t78 = (x337/(x338+(x339/x340)));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x345 = -1;
	int8_t x346 = INT8_MIN;
	uint64_t x347 = 35809840777LLU;
	volatile uint64_t t79 = 149620262169328LLU;

    t79 = (x345/(x346+(x347/x348)));

    if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x349 = INT64_MIN;
	int8_t x350 = -2;
	volatile uint32_t x351 = 201092959U;
	volatile uint32_t x352 = 116U;

    t80 = (x349/(x350+(x351/x352)));

    if (t80 != -5320489627312LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x354 = INT8_MIN;
	static int64_t t81 = 89746149091397LL;

    t81 = (x353/(x354+(x355/x356)));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x361 = UINT8_MAX;
	uint8_t x362 = 8U;
	int8_t x363 = INT8_MIN;
	uint32_t x364 = 1U;

    t82 = (x361/(x362+(x363/x364)));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x365 = -1;
	static int64_t x366 = INT64_MIN;
	volatile int8_t x367 = -1;
	int32_t x368 = -1;
	static volatile int64_t t83 = 389551LL;

    t83 = (x365/(x366+(x367/x368)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x370 = 1;
	volatile uint8_t x371 = 7U;
	int16_t x372 = -1;
	volatile int64_t t84 = -7LL;

    t84 = (x369/(x370+(x371/x372)));

    if (t84 != -752LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x373 = -466LL;
	static int8_t x374 = 0;
	uint64_t x375 = 2612585LLU;
	uint8_t x376 = 7U;
	uint64_t t85 = 197LLU;

    t85 = (x373/(x374+(x375/x376)));

    if (t85 != 49425131351271LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x377 = INT64_MIN;
	int32_t x378 = INT32_MIN;
	volatile int64_t x379 = INT64_MAX;
	volatile int8_t x380 = 24;

    t86 = (x377/(x378+(x379/x380)));

    if (t86 != -24LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x383 = INT8_MAX;
	int8_t x384 = -1;

    t87 = (x381/(x382+(x383/x384)));

    if (t87 != 254) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint64_t x387 = 2895528666805774273LLU;
	uint64_t t88 = 5038910146952424699LLU;

    t88 = (x385/(x386+(x387/x388)));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x389 = INT8_MAX;
	int64_t x390 = INT64_MAX;
	uint64_t x391 = 1LLU;
	static uint64_t x392 = 398105LLU;
	volatile uint64_t t89 = 683493641009113LLU;

    t89 = (x389/(x390+(x391/x392)));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x393 = 3614U;
	int32_t x394 = 123;
	uint8_t x395 = 0U;
	static uint32_t t90 = 1665837982U;

    t90 = (x393/(x394+(x395/x396)));

    if (t90 != 29U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x399 = UINT8_MAX;
	int32_t x400 = INT32_MAX;
	volatile uint64_t t91 = 2683725775LLU;

    t91 = (x397/(x398+(x399/x400)));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x401 = UINT16_MAX;
	static int16_t x402 = INT16_MIN;
	int8_t x403 = 9;
	int16_t x404 = -15261;
	int32_t t92 = -15611;

    t92 = (x401/(x402+(x403/x404)));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x405 = INT64_MAX;
	int32_t x406 = INT32_MIN;
	static int32_t x407 = INT32_MAX;
	int8_t x408 = INT8_MAX;

    t93 = (x405/(x406+(x407/x408)));

    if (t93 != -4329054337LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x409 = UINT64_MAX;
	uint8_t x410 = 4U;
	static int16_t x411 = -12318;
	int8_t x412 = INT8_MIN;
	uint64_t t94 = 376877283156022LLU;

    t94 = (x409/(x410+(x411/x412)));

    if (t94 != 184467440737095516LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x413 = INT8_MIN;
	volatile int8_t x414 = -18;
	static int16_t x415 = INT16_MAX;
	static volatile uint64_t t95 = 732LLU;

    t95 = (x413/(x414+(x415/x416)));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x421 = -1;
	uint16_t x422 = 0U;
	int8_t x424 = INT8_MIN;
	volatile int32_t t96 = 213212069;

    t96 = (x421/(x422+(x423/x424)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x426 = INT16_MAX;
	uint64_t x427 = UINT64_MAX;
	uint16_t x428 = 55U;
	volatile uint64_t t97 = 821664704950527010LLU;

    t97 = (x425/(x426+(x427/x428)));

    if (t97 != 54LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x429 = -351;
	static int32_t x430 = INT32_MIN;
	int8_t x431 = -1;
	volatile int32_t t98 = -2;

    t98 = (x429/(x430+(x431/x432)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x433 = -2;
	int16_t x434 = INT16_MIN;
	int8_t x435 = 13;
	static int64_t x436 = -3882672203669LL;
	int64_t t99 = -392563663100907LL;

    t99 = (x433/(x434+(x435/x436)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x437 = INT8_MIN;
	int64_t x438 = -1LL;
	volatile int8_t x439 = INT8_MIN;
	int32_t x440 = INT32_MIN;
	volatile int64_t t100 = -4113121747LL;

    t100 = (x437/(x438+(x439/x440)));

    if (t100 != 128LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x441 = INT32_MAX;
	uint64_t x442 = UINT64_MAX;
	int32_t x443 = -410034928;
	static int16_t x444 = -138;
	volatile uint64_t t101 = 1104480LLU;

    t101 = (x441/(x442+(x443/x444)));

    if (t101 != 722LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x449 = UINT8_MAX;
	uint64_t x451 = UINT64_MAX;
	uint64_t t102 = 794062LLU;

    t102 = (x449/(x450+(x451/x452)));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x454 = INT64_MIN;
	int32_t x455 = INT32_MAX;
	int64_t x456 = INT64_MIN;
	int64_t t103 = 407LL;

    t103 = (x453/(x454+(x455/x456)));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x457 = INT64_MAX;
	int8_t x458 = INT8_MIN;
	int64_t x459 = INT64_MIN;
	int32_t x460 = -510;

    t104 = (x457/(x458+(x459/x460)));

    if (t104 != 510LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x462 = 9U;
	volatile int16_t x463 = -84;
	volatile int64_t t105 = 516926255LL;

    t105 = (x461/(x462+(x463/x464)));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x465 = 3963U;
	int32_t x466 = INT32_MAX;
	static volatile int32_t x467 = -8362326;
	uint32_t x468 = 46312569U;
	static volatile uint32_t t106 = 119489083U;

    t106 = (x465/(x466+(x467/x468)));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x469 = INT32_MAX;
	uint32_t x471 = 95214726U;
	int32_t x472 = -1;
	uint32_t t107 = 464468U;

    t107 = (x469/(x470+(x471/x472)));

    if (t107 != 144963U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x473 = -379LL;
	volatile int16_t x474 = INT16_MIN;
	int8_t x475 = INT8_MIN;
	uint64_t x476 = 13158910949LLU;

    t108 = (x473/(x474+(x475/x476)));

    if (t108 != 13159218546LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x477 = INT16_MAX;
	int16_t x478 = INT16_MAX;
	static int32_t x479 = -143;
	int16_t x480 = 43;
	int32_t t109 = 12250;

    t109 = (x477/(x478+(x479/x480)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x482 = 33U;

    t110 = (x481/(x482+(x483/x484)));

    if (t110 != 3394665163LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x485 = 5371;
	static int8_t x486 = 12;
	static uint64_t x487 = 96077933LLU;
	int32_t x488 = -1;
	uint64_t t111 = 874325386667129214LLU;

    t111 = (x485/(x486+(x487/x488)));

    if (t111 != 447LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x489 = INT16_MIN;
	int8_t x491 = 5;
	int32_t x492 = -2152708;

    t112 = (x489/(x490+(x491/x492)));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x493 = 36928U;
	volatile int8_t x494 = INT8_MIN;
	int16_t x495 = 5;
	static uint32_t x496 = 18U;

    t113 = (x493/(x494+(x495/x496)));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x497 = INT16_MIN;
	int64_t x499 = INT64_MIN;
	static uint32_t x500 = 14U;
	int64_t t114 = 1674634039252350402LL;

    t114 = (x497/(x498+(x499/x500)));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x501 = 87U;
	uint32_t x502 = 2325U;
	static int8_t x503 = -1;
	uint8_t x504 = UINT8_MAX;
	volatile uint32_t t115 = 0U;

    t115 = (x501/(x502+(x503/x504)));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x505 = 2U;
	uint16_t x506 = 410U;
	static int32_t x507 = -515447;
	int16_t x508 = -1;
	volatile uint32_t t116 = 58097U;

    t116 = (x505/(x506+(x507/x508)));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x509 = INT8_MAX;
	volatile int16_t x511 = INT16_MIN;
	static uint8_t x512 = 1U;
	int32_t t117 = -471;

    t117 = (x509/(x510+(x511/x512)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x513 = 2087968088LLU;
	static volatile uint64_t x514 = 2243283427LLU;
	int64_t x515 = INT64_MIN;
	int8_t x516 = -8;
	volatile uint64_t t118 = 7LLU;

    t118 = (x513/(x514+(x515/x516)));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x517 = INT8_MAX;
	int64_t x518 = -1LL;
	static volatile uint8_t x519 = 3U;
	int8_t x520 = INT8_MIN;
	int64_t t119 = 1LL;

    t119 = (x517/(x518+(x519/x520)));

    if (t119 != -127LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x521 = INT16_MIN;
	uint64_t x522 = 10945216693LLU;
	static volatile int8_t x523 = 2;
	uint64_t t120 = 1632LLU;

    t120 = (x521/(x522+(x523/x524)));

    if (t120 != 1685370385LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x525 = -1;
	int8_t x526 = INT8_MAX;
	static int32_t x527 = -1;
	int64_t x528 = INT64_MIN;
	static int64_t t121 = -243525380LL;

    t121 = (x525/(x526+(x527/x528)));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x533 = -12;
	int32_t x534 = 182;
	static volatile int8_t x535 = 1;
	uint32_t x536 = 379582U;
	static volatile uint32_t t122 = 339U;

    t122 = (x533/(x534+(x535/x536)));

    if (t122 != 23598721U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x541 = INT8_MIN;
	static uint32_t x542 = UINT32_MAX;
	int16_t x543 = INT16_MIN;
	static int16_t x544 = -1;
	uint32_t t123 = 5411663U;

    t123 = (x541/(x542+(x543/x544)));

    if (t123 != 131075U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x545 = 7U;
	volatile int16_t x546 = 99;
	int16_t x547 = -1;
	int64_t x548 = -1LL;

    t124 = (x545/(x546+(x547/x548)));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x553 = 0;
	uint64_t x554 = 43447210LLU;
	uint16_t x555 = 2180U;
	static uint64_t t125 = 481829888LLU;

    t125 = (x553/(x554+(x555/x556)));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x557 = -41;
	int8_t x558 = INT8_MAX;
	static int64_t x560 = -417333243077488LL;
	static volatile int64_t t126 = 6022158LL;

    t126 = (x557/(x558+(x559/x560)));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x561 = INT8_MIN;
	volatile uint16_t x562 = 10U;
	int16_t x563 = INT16_MIN;
	int32_t t127 = 42929732;

    t127 = (x561/(x562+(x563/x564)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x565 = INT16_MIN;
	int64_t x566 = -149244464596487141LL;
	static uint64_t x567 = 204328837LLU;
	int8_t x568 = INT8_MAX;
	uint64_t t128 = 40994LLU;

    t128 = (x565/(x566+(x567/x568)));

    if (t128 != 1LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x570 = -1;
	int32_t x571 = -1;
	int64_t x572 = -121305588521LL;
	static volatile int64_t t129 = 0LL;

    t129 = (x569/(x570+(x571/x572)));

    if (t129 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x577 = -1;
	uint64_t x578 = 7119325804688880654LLU;
	volatile int32_t x579 = INT32_MIN;
	uint8_t x580 = 2U;

    t130 = (x577/(x578+(x579/x580)));

    if (t130 != 2LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x581 = UINT16_MAX;
	int32_t t131 = -23904790;

    t131 = (x581/(x582+(x583/x584)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x586 = 9943LLU;
	int32_t x587 = -1;
	uint64_t t132 = 750LLU;

    t132 = (x585/(x586+(x587/x588)));

    if (t132 != 2LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x593 = INT32_MIN;
	int32_t x594 = 10792396;
	uint64_t x595 = 478716204258LLU;
	uint16_t x596 = UINT16_MAX;
	volatile uint64_t t133 = 39939876891571438LLU;

    t133 = (x593/(x594+(x595/x596)));

    if (t133 != 1019318363537LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x597 = UINT64_MAX;
	int64_t x598 = 16510770977LL;
	int8_t x599 = -1;
	static volatile uint8_t x600 = UINT8_MAX;
	volatile uint64_t t134 = 676LLU;

    t134 = (x597/(x598+(x599/x600)));

    if (t134 != 1117255160LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x601 = INT32_MIN;
	int64_t x603 = INT64_MAX;
	volatile int64_t t135 = 31717LL;

    t135 = (x601/(x602+(x603/x604)));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x605 = -1;
	int32_t x606 = INT32_MAX;
	volatile uint32_t x607 = 93U;
	volatile int64_t x608 = INT64_MIN;
	volatile int64_t t136 = -2135053261LL;

    t136 = (x605/(x606+(x607/x608)));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x609 = 104LLU;
	static int16_t x610 = -1;
	static uint8_t x611 = 26U;
	uint32_t x612 = 4710084U;
	static volatile uint64_t t137 = 706532211LLU;

    t137 = (x609/(x610+(x611/x612)));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x613 = 47U;
	int8_t x614 = INT8_MIN;
	static volatile uint32_t x615 = 1629205U;

    t138 = (x613/(x614+(x615/x616)));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x617 = INT32_MIN;
	volatile int64_t x619 = 57810999LL;
	int8_t x620 = -1;
	static int64_t t139 = 1040516599297430672LL;

    t139 = (x617/(x618+(x619/x620)));

    if (t139 != 37LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x621 = -76032;
	int8_t x622 = -1;
	static uint8_t x623 = UINT8_MAX;
	volatile int64_t x624 = 28239925LL;
	int64_t t140 = 979973628104781LL;

    t140 = (x621/(x622+(x623/x624)));

    if (t140 != 76032LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x629 = INT16_MIN;
	int64_t x631 = INT64_MIN;
	static volatile int64_t t141 = 12194271903LL;

    t141 = (x629/(x630+(x631/x632)));

    if (t141 != -256LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x633 = 55;
	volatile int16_t x634 = -216;
	int8_t x635 = 1;
	uint32_t x636 = UINT32_MAX;
	uint32_t t142 = 14U;

    t142 = (x633/(x634+(x635/x636)));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x638 = 19U;
	static int64_t x640 = INT64_MIN;
	int64_t t143 = -63647174LL;

    t143 = (x637/(x638+(x639/x640)));

    if (t143 != 113025455LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x641 = 235;
	int16_t x643 = INT16_MAX;
	static uint16_t x644 = 4U;
	static int32_t t144 = 104140;

    t144 = (x641/(x642+(x643/x644)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x645 = INT32_MAX;
	int16_t x647 = INT16_MIN;
	int32_t x648 = -3;
	volatile int32_t t145 = 957470;

    t145 = (x645/(x646+(x647/x648)));

    if (t145 != -98301) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x649 = INT8_MAX;
	int8_t x650 = INT8_MIN;
	static int64_t x651 = -30327851751235925LL;
	static int8_t x652 = -1;
	volatile int64_t t146 = -902667512257934706LL;

    t146 = (x649/(x650+(x651/x652)));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x653 = 69695928042LLU;
	static volatile uint8_t x654 = 29U;
	uint64_t x655 = UINT64_MAX;
	volatile uint64_t t147 = 339119626103344LLU;

    t147 = (x653/(x654+(x655/x656)));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x661 = 23LLU;
	volatile int16_t x662 = -1;
	int8_t x663 = 1;
	int32_t x664 = -1;

    t148 = (x661/(x662+(x663/x664)));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x666 = -1;
	volatile int64_t x667 = INT64_MIN;
	int64_t t149 = 65908LL;

    t149 = (x665/(x666+(x667/x668)));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int32_t x670 = -1;
	volatile int32_t x671 = 51777906;
	int32_t x672 = INT32_MIN;
	int32_t t150 = -213102573;

    t150 = (x669/(x670+(x671/x672)));

    if (t150 != 128) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x673 = INT32_MIN;
	int8_t x674 = 1;
	int64_t x675 = 1383LL;
	int64_t x676 = INT64_MIN;

    t151 = (x673/(x674+(x675/x676)));

    if (t151 != -2147483648LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x677 = -1881334985LL;
	static int32_t x680 = -1;
	int64_t t152 = 1LL;

    t152 = (x677/(x678+(x679/x680)));

    if (t152 != -7465615LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x681 = 7292044LL;
	int32_t x682 = INT32_MIN;
	int8_t x683 = -7;
	static int16_t x684 = INT16_MIN;

    t153 = (x681/(x682+(x683/x684)));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x685 = UINT32_MAX;
	uint8_t x687 = 90U;
	uint64_t t154 = 66067LLU;

    t154 = (x685/(x686+(x687/x688)));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x689 = 1996982649708630708LL;
	int8_t x690 = INT8_MIN;
	volatile int8_t x691 = INT8_MAX;
	int16_t x692 = -1;
	int64_t t155 = 115785849918540LL;

    t155 = (x689/(x690+(x691/x692)));

    if (t155 != -7831304508661296LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x693 = 14440U;
	volatile int8_t x694 = INT8_MIN;
	static uint16_t x695 = 1142U;
	static int16_t x696 = INT16_MIN;
	int32_t t156 = 14;

    t156 = (x693/(x694+(x695/x696)));

    if (t156 != -112) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x697 = INT32_MIN;
	volatile uint8_t x698 = 111U;
	static int32_t x700 = -1;
	volatile int32_t t157 = -85589126;

    t157 = (x697/(x698+(x699/x700)));

    if (t157 != 301528) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x701 = -69380158517LL;
	int64_t x702 = INT64_MAX;
	int64_t x704 = INT64_MIN;
	volatile int64_t t158 = -1314151131718177704LL;

    t158 = (x701/(x702+(x703/x704)));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x706 = INT8_MAX;
	int64_t x707 = INT64_MAX;
	int32_t x708 = -937;

    t159 = (x705/(x706+(x707/x708)));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x709 = INT64_MIN;
	static int64_t x710 = INT64_MIN;
	int32_t x711 = 110646837;
	uint32_t x712 = UINT32_MAX;

    t160 = (x709/(x710+(x711/x712)));

    if (t160 != 1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x714 = UINT8_MAX;
	int64_t x715 = 36LL;
	int32_t x716 = INT32_MIN;
	int64_t t161 = -432LL;

    t161 = (x713/(x714+(x715/x716)));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x717 = 62U;
	uint32_t x718 = 63424U;
	static uint64_t x719 = 368064105390696LLU;
	volatile int8_t x720 = 2;
	static volatile uint64_t t162 = 6060958LLU;

    t162 = (x717/(x718+(x719/x720)));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x721 = INT32_MIN;
	uint32_t x723 = 81129U;
	int32_t x724 = INT32_MAX;
	int64_t t163 = 3LL;

    t163 = (x721/(x722+(x723/x724)));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x725 = INT32_MAX;
	int64_t x728 = INT64_MIN;
	static int64_t t164 = -62LL;

    t164 = (x725/(x726+(x727/x728)));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x729 = 627U;
	int32_t x732 = 1344;
	volatile int32_t t165 = 0;

    t165 = (x729/(x730+(x731/x732)));

    if (t165 != -627) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x733 = INT64_MIN;
	int16_t x735 = INT16_MIN;
	volatile int64_t t166 = 384LL;

    t166 = (x733/(x734+(x735/x736)));

    if (t166 != 1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x737 = INT64_MIN;
	int8_t x738 = INT8_MIN;
	static volatile int16_t x740 = INT16_MIN;
	volatile int64_t t167 = 152184663LL;

    t167 = (x737/(x738+(x739/x740)));

    if (t167 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x741 = 179874926236474LLU;
	int8_t x742 = -1;
	volatile int64_t x743 = -1027970401652LL;
	volatile int64_t x744 = -6LL;
	uint64_t t168 = 119963669564355LLU;

    t168 = (x741/(x742+(x743/x744)));

    if (t168 != 1049LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x745 = 1;
	uint16_t x747 = 20U;
	int32_t x748 = -1;
	int32_t t169 = -17;

    t169 = (x745/(x746+(x747/x748)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x749 = -9;
	uint64_t x750 = 7191582400098254LLU;
	uint32_t x751 = UINT32_MAX;
	int8_t x752 = -1;
	static volatile uint64_t t170 = 745677482046204126LLU;

    t170 = (x749/(x750+(x751/x752)));

    if (t170 != 2565LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x757 = 23;
	static volatile int16_t x758 = -3275;
	int8_t x759 = -3;
	static int32_t x760 = INT32_MIN;
	int32_t t171 = -3279884;

    t171 = (x757/(x758+(x759/x760)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x761 = 63U;
	int64_t x762 = INT64_MAX;
	volatile uint8_t x763 = UINT8_MAX;
	uint16_t x764 = UINT16_MAX;
	volatile int64_t t172 = 29280LL;

    t172 = (x761/(x762+(x763/x764)));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x765 = INT64_MAX;
	int8_t x766 = 22;
	volatile uint32_t x767 = UINT32_MAX;
	static volatile int16_t x768 = INT16_MAX;
	volatile int64_t t173 = -402859135009256LL;

    t173 = (x765/(x766+(x767/x768)));

    if (t173 != 70354788302298LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x769 = 49845117;
	int32_t x770 = INT32_MIN;
	volatile uint32_t x771 = 53U;
	uint32_t x772 = UINT32_MAX;
	volatile uint32_t t174 = 1U;

    t174 = (x769/(x770+(x771/x772)));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x777 = 22936LLU;
	uint16_t x778 = 5128U;
	int16_t x779 = -1;
	int8_t x780 = 21;
	static volatile uint64_t t175 = 402108LLU;

    t175 = (x777/(x778+(x779/x780)));

    if (t175 != 4LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x781 = UINT8_MAX;
	uint64_t x782 = 27177LLU;
	static uint32_t x783 = UINT32_MAX;
	uint8_t x784 = 12U;
	volatile uint64_t t176 = 12LLU;

    t176 = (x781/(x782+(x783/x784)));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x785 = 487U;
	int16_t x787 = -1;
	uint32_t x788 = UINT32_MAX;
	uint32_t t177 = 345181U;

    t177 = (x785/(x786+(x787/x788)));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x789 = INT16_MIN;
	int32_t x790 = INT32_MAX;
	uint16_t x791 = UINT16_MAX;
	static volatile int32_t t178 = -64222;

    t178 = (x789/(x790+(x791/x792)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x793 = INT8_MIN;
	static uint64_t x795 = 18874LLU;
	int32_t x796 = 284741095;
	volatile uint64_t t179 = 1LLU;

    t179 = (x793/(x794+(x795/x796)));

    if (t179 != 1LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x797 = UINT32_MAX;
	int32_t x798 = INT32_MAX;
	int8_t x800 = 9;
	volatile uint32_t t180 = 1U;

    t180 = (x797/(x798+(x799/x800)));

    if (t180 != 2U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x802 = 6;
	int16_t x803 = INT16_MAX;
	int32_t x804 = -1;
	volatile int32_t t181 = 922565;

    t181 = (x801/(x802+(x803/x804)));

    if (t181 != 65550) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x805 = 4U;
	int8_t x806 = 1;
	uint8_t x807 = 60U;
	uint64_t x808 = 77LLU;
	uint64_t t182 = 413491681107379788LLU;

    t182 = (x805/(x806+(x807/x808)));

    if (t182 != 4LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x809 = UINT8_MAX;
	volatile uint8_t x810 = 45U;
	uint32_t x811 = 14560U;
	int64_t x812 = -1LL;

    t183 = (x809/(x810+(x811/x812)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x814 = 106U;
	int8_t x815 = -1;
	int32_t t184 = 6;

    t184 = (x813/(x814+(x815/x816)));

    if (t184 != -306) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x817 = 467811959103047LL;
	uint64_t x818 = 13269184274044LLU;
	int64_t x819 = 996279767250199921LL;
	uint32_t x820 = UINT32_MAX;

    t185 = (x817/(x818+(x819/x820)));

    if (t185 != 35LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x822 = UINT8_MAX;
	volatile uint16_t x823 = 22245U;

    t186 = (x821/(x822+(x823/x824)));

    if (t186 != -12081080LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x825 = -1;
	int8_t x827 = INT8_MIN;
	int32_t x828 = -1;
	volatile int32_t t187 = 179;

    t187 = (x825/(x826+(x827/x828)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x833 = UINT16_MAX;
	int32_t x834 = -1;
	int64_t x835 = INT64_MAX;
	uint32_t x836 = UINT32_MAX;
	static volatile int64_t t188 = 11599834513LL;

    t188 = (x833/(x834+(x835/x836)));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x837 = INT32_MIN;
	volatile uint8_t x838 = UINT8_MAX;
	uint64_t x839 = 14144861LLU;
	uint64_t t189 = 11689LLU;

    t189 = (x837/(x838+(x839/x840)));

    if (t189 != 72340172829655168LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x847 = 921705236372790157LLU;

    t190 = (x845/(x846+(x847/x848)));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x853 = UINT64_MAX;
	int64_t x855 = 448733535928LL;
	int64_t x856 = -1LL;
	volatile uint64_t t191 = 723699665LLU;

    t191 = (x853/(x854+(x855/x856)));

    if (t191 != 1LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int16_t x857 = -1;
	int64_t x858 = INT64_MIN;
	uint32_t x859 = 2U;
	volatile uint16_t x860 = 2105U;
	static volatile int64_t t192 = -174309497179LL;

    t192 = (x857/(x858+(x859/x860)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x861 = 0;
	uint64_t x862 = 44274861LLU;
	int8_t x863 = 1;
	int32_t x864 = -130408309;

    t193 = (x861/(x862+(x863/x864)));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x866 = UINT8_MAX;
	static volatile int8_t x867 = INT8_MAX;
	volatile uint64_t t194 = 7523525612LLU;

    t194 = (x865/(x866+(x867/x868)));

    if (t194 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x869 = 0;
	int16_t x870 = INT16_MIN;
	uint8_t x871 = UINT8_MAX;
	uint16_t x872 = 95U;

    t195 = (x869/(x870+(x871/x872)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x874 = 46LLU;
	static int16_t x875 = INT16_MIN;
	int8_t x876 = INT8_MIN;
	uint64_t t196 = 222673637LLU;

    t196 = (x873/(x874+(x875/x876)));

    if (t196 != 217LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x877 = -1;
	static volatile int32_t x878 = -1;
	int8_t x879 = INT8_MIN;
	volatile uint32_t t197 = 225295978U;

    t197 = (x877/(x878+(x879/x880)));

    if (t197 != 108161U) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x881 = UINT16_MAX;
	volatile int8_t x884 = -1;
	volatile int32_t t198 = 0;

    t198 = (x881/(x882+(x883/x884)));

    if (t198 != -2) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x885 = 18U;
	int16_t x886 = -1;
	static volatile uint32_t x887 = 4293U;
	int16_t x888 = INT16_MIN;

    t199 = (x885/(x886+(x887/x888)));

    if (t199 != 0U) { NG(); } else { ; }
	
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

