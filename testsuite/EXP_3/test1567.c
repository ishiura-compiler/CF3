
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

static volatile int32_t t0 = INT32_MAX;
volatile int8_t x7 = INT8_MIN;
volatile int16_t x13 = -80;
int32_t x18 = INT32_MAX;
volatile uint16_t x20 = 4U;
uint8_t x32 = UINT8_MAX;
volatile int8_t x37 = -1;
int64_t x38 = -76LL;
int8_t x39 = -1;
int16_t x44 = 10;
uint8_t x47 = 0U;
int64_t x49 = 97943120953390LL;
int64_t x51 = 6LL;
static int32_t x58 = -1;
volatile int32_t t14 = 8017;
uint32_t x66 = 4U;
static int16_t x70 = INT16_MIN;
uint16_t x72 = 12359U;
volatile int64_t t18 = 106146449364422765LL;
volatile uint8_t x78 = 53U;
uint8_t x86 = UINT8_MAX;
volatile int64_t x90 = INT64_MAX;
uint64_t x99 = 71729626975556108LLU;
volatile uint64_t x105 = 1LLU;
volatile uint64_t t26 = 2977920LLU;
static int64_t x109 = -118583LL;
int32_t x114 = 527911;
int8_t x115 = -1;
volatile int8_t x119 = INT8_MIN;
int32_t x121 = INT32_MIN;
volatile int16_t x122 = -1;
uint8_t x123 = 3U;
int64_t x133 = -26881246857LL;
volatile int64_t t33 = 1620481830092945LL;
static int16_t x140 = INT16_MIN;
int8_t x143 = -9;
int64_t t36 = -3222279026174187LL;
int32_t t37 = 350730212;
static int16_t x161 = 30;
static volatile uint8_t x162 = 1U;
volatile int16_t x166 = INT16_MIN;
int64_t x167 = INT64_MAX;
int64_t t46 = 9648307318841LL;
volatile uint64_t t48 = 1011LLU;
static int8_t x199 = INT8_MIN;
int64_t x208 = INT64_MIN;
uint64_t t51 = 30908358LLU;
uint64_t x211 = UINT64_MAX;
int64_t x214 = -2563518261858490948LL;
uint16_t x218 = 723U;
int64_t t54 = -3939865149946896LL;
int64_t x224 = -90336974086748LL;
uint8_t x227 = 15U;
volatile int32_t t56 = -871136799;
static int64_t x236 = INT64_MIN;
volatile int8_t x237 = -1;
static int8_t x248 = -1;
static int32_t t61 = 151697;
volatile int32_t x249 = INT32_MAX;
volatile int32_t x255 = -75775;
int64_t x256 = 7337LL;
uint32_t x258 = 207U;
uint32_t x260 = 979143818U;
static volatile uint32_t t64 = 841U;
uint16_t x262 = 1939U;
static volatile uint64_t x264 = 12827678LLU;
volatile int64_t t65 = 248808591LL;
volatile int64_t x268 = -783693LL;
static uint32_t t66 = 4594206U;
uint32_t x272 = 21U;
int32_t t69 = 3836107;
int32_t x281 = -1;
volatile int8_t x283 = INT8_MIN;
volatile int32_t t71 = -79;
static int64_t t72 = -20119564274375LL;
uint8_t x294 = UINT8_MAX;
int64_t x296 = INT64_MIN;
uint16_t x300 = 1U;
int64_t x302 = INT64_MIN;
int16_t x303 = -1;
volatile int8_t x310 = 1;
static int16_t x311 = -1;
volatile int16_t x316 = INT16_MAX;
int32_t x323 = INT32_MIN;
static int16_t x324 = -1;
int64_t t81 = -90LL;
uint8_t x332 = UINT8_MAX;
static int64_t t82 = -1443879902723LL;
int64_t x334 = 1311947860224LL;
static volatile int16_t x337 = INT16_MAX;
int16_t x338 = -1;
int32_t x345 = -1;
static volatile uint16_t x346 = 43U;
uint16_t x347 = 24U;
volatile int32_t t86 = 122837524;
static int16_t x350 = 1653;
volatile int64_t t87 = 22977LL;
int16_t x354 = -1;
static uint16_t x356 = UINT16_MAX;
uint32_t x357 = 104U;
int16_t x363 = 11300;
int64_t x371 = INT64_MAX;
int64_t x378 = -13347491968696542LL;
int64_t x381 = INT64_MIN;
int32_t x382 = -1;
static volatile int16_t x383 = -1;
static uint64_t x385 = UINT64_MAX;
int32_t x389 = INT32_MIN;
int32_t x390 = INT32_MAX;
static int8_t x391 = INT8_MIN;
int64_t x394 = INT64_MIN;
int16_t x396 = INT16_MAX;
int64_t t98 = -13LL;
volatile int8_t x397 = -47;
int64_t x405 = INT64_MIN;
uint16_t x407 = 596U;
int64_t x415 = -1LL;
static int32_t x420 = -335333;
volatile int64_t x421 = INT64_MIN;
int8_t x430 = INT8_MAX;
uint8_t x432 = 72U;
volatile uint64_t x434 = 5297899113121LLU;
int32_t x437 = INT32_MIN;
int32_t x438 = INT32_MAX;
volatile int64_t x444 = -1LL;
volatile int64_t x448 = INT64_MIN;
uint64_t x450 = UINT64_MAX;
int16_t x451 = -1990;
static int8_t x458 = -1;
static int32_t x462 = 990647;
int32_t x466 = -1;
static uint8_t x469 = 0U;
volatile int32_t x475 = 30;
int32_t x478 = INT32_MIN;
int8_t x485 = INT8_MAX;
int64_t x486 = INT64_MAX;
int8_t x497 = 52;
volatile uint64_t x500 = 4627544594761658LLU;
uint32_t x501 = 7550611U;
volatile int64_t t125 = 61229LL;
uint8_t x508 = UINT8_MAX;
static volatile int8_t x510 = INT8_MIN;
volatile int8_t x513 = -1;
int32_t x515 = 12188;
static volatile int16_t x518 = INT16_MAX;
volatile uint16_t x522 = UINT16_MAX;
int64_t x531 = INT64_MAX;
int32_t x532 = -1;
static int64_t t133 = -689720169139032341LL;
static int64_t x545 = INT64_MIN;
uint64_t x546 = UINT64_MAX;
int64_t x550 = INT64_MAX;
int32_t x561 = INT32_MAX;
static int16_t x565 = INT16_MAX;
int32_t x568 = -1;
int16_t x569 = INT16_MIN;
int8_t x571 = INT8_MIN;
int8_t x581 = 3;
volatile int8_t x590 = 50;
volatile int32_t t148 = -15001756;
volatile int8_t x597 = -23;
int16_t x602 = -1;
volatile int16_t x603 = -222;
static volatile uint64_t t150 = 1048LLU;
uint16_t x621 = 848U;
int8_t x622 = INT8_MAX;
static int8_t x626 = 1;
int8_t x634 = -1;
static volatile int32_t x635 = INT32_MIN;
uint32_t x638 = UINT32_MAX;
uint8_t x650 = 56U;
int16_t x656 = INT16_MIN;
volatile int16_t x658 = INT16_MIN;
volatile uint16_t x660 = UINT16_MAX;
int32_t x662 = 108344796;
static int64_t x663 = INT64_MIN;
int16_t x672 = 580;
volatile int32_t t167 = 474;
int64_t x677 = 41216426LL;
int32_t x679 = -1;
int64_t t169 = 74199498523159LL;
int16_t x682 = INT16_MAX;
uint16_t x689 = 70U;
volatile int32_t t172 = 521254965;
static uint16_t x697 = 0U;
int16_t x704 = -20;
int16_t x709 = INT16_MIN;
int16_t x710 = 8;
int8_t x714 = -1;
volatile int64_t x719 = INT64_MIN;
uint64_t x721 = 5663900917LLU;
uint32_t x722 = 141241587U;
uint64_t t180 = 14674045467848371LLU;
volatile int64_t t182 = -7164333034LL;
volatile int8_t x734 = INT8_MIN;
int32_t x735 = INT32_MIN;
int32_t t183 = -21;
uint64_t x739 = UINT64_MAX;
int32_t x740 = INT32_MIN;
int16_t x744 = 5;
int64_t x746 = INT64_MAX;
static volatile int64_t t186 = -6LL;
static int32_t x752 = 15;
int16_t x758 = INT16_MAX;
static int32_t x760 = -269392296;
static int16_t x762 = -246;
int16_t x764 = -1;
int32_t t190 = 333;
uint32_t x771 = 11988U;
volatile uint64_t t192 = 800LLU;
static uint16_t x775 = UINT16_MAX;
uint64_t x785 = 5LLU;
static uint16_t x786 = 395U;
static int8_t x787 = 1;
int16_t x792 = INT16_MIN;


void f0(void) {
    	static int32_t x1 = INT32_MIN;
	int32_t x2 = -1;
	volatile uint32_t x3 = 106U;
	uint16_t x4 = UINT16_MAX;

    t0 = ((x1^x2)|(x3==x4));

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 20U;
	int32_t x6 = INT32_MIN;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = 1873;

    t1 = ((x5^x6)|(x7==x8));

    if (t1 != -2147483627) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int32_t x9 = INT32_MAX;
	int32_t x10 = INT32_MIN;
	static int32_t x11 = INT32_MIN;
	int16_t x12 = -7;
	int32_t t2 = -434041979;

    t2 = ((x9^x10)|(x11==x12));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = -1;
	int64_t x15 = INT64_MAX;
	static int16_t x16 = INT16_MIN;
	int32_t t3 = 1;

    t3 = ((x13^x14)|(x15==x16));

    if (t3 != 79) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	volatile int16_t x19 = -38;
	int64_t t4 = 225286011538LL;

    t4 = ((x17^x18)|(x19==x20));

    if (t4 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	int32_t x22 = INT32_MIN;
	static uint8_t x23 = 5U;
	int8_t x24 = 0;
	volatile int32_t t5 = 101434247;

    t5 = ((x21^x22)|(x23==x24));

    if (t5 != 2147450880) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -57;
	static int32_t x26 = INT32_MIN;
	volatile int32_t x27 = 1;
	volatile int8_t x28 = -1;
	static int32_t t6 = -152;

    t6 = ((x25^x26)|(x27==x28));

    if (t6 != 2147483591) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	uint16_t x30 = UINT16_MAX;
	volatile int16_t x31 = 78;
	static uint64_t t7 = 243LLU;

    t7 = ((x29^x30)|(x31==x32));

    if (t7 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	uint16_t x34 = 606U;
	uint64_t x35 = UINT64_MAX;
	int8_t x36 = -4;
	static int64_t t8 = -1928966028969LL;

    t8 = ((x33^x34)|(x35==x36));

    if (t8 != 9223372036854775201LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x40 = INT16_MIN;
	volatile int64_t t9 = -37865284LL;

    t9 = ((x37^x38)|(x39==x40));

    if (t9 != 75LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 19087U;
	volatile int8_t x42 = -1;
	int32_t x43 = INT32_MIN;
	volatile uint32_t t10 = 143669556U;

    t10 = ((x41^x42)|(x43==x44));

    if (t10 != 4294948208U) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x45 = 0U;
	static uint64_t x46 = 0LLU;
	int8_t x48 = INT8_MIN;
	uint64_t t11 = 13604LLU;

    t11 = ((x45^x46)|(x47==x48));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = -1;
	volatile uint32_t x52 = UINT32_MAX;
	int64_t t12 = 51233777LL;

    t12 = ((x49^x50)|(x51==x52));

    if (t12 != -97943120953391LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -3266650;
	uint8_t x54 = UINT8_MAX;
	volatile int16_t x55 = -1;
	int32_t x56 = 92744317;
	int32_t t13 = 996575;

    t13 = ((x53^x54)|(x55==x56));

    if (t13 != -3266727) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -3436;
	static int16_t x59 = -21;
	volatile int32_t x60 = INT32_MAX;

    t14 = ((x57^x58)|(x59==x60));

    if (t14 != 3435) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -7777;
	int32_t x62 = 26129917;
	volatile int16_t x63 = INT16_MIN;
	int32_t x64 = INT32_MIN;
	int32_t t15 = -28;

    t15 = ((x61^x62)|(x63==x64));

    if (t15 != -26127262) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x65 = -412;
	volatile uint16_t x67 = 6U;
	int16_t x68 = 13;
	static uint32_t t16 = 29759848U;

    t16 = ((x65^x66)|(x67==x68));

    if (t16 != 4294966880U) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x69 = UINT64_MAX;
	uint32_t x71 = 2082009371U;
	static uint64_t t17 = 1161651297864LLU;

    t17 = ((x69^x70)|(x71==x72));

    if (t17 != 32767LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -3;
	int64_t x74 = INT64_MIN;
	uint16_t x75 = 29314U;
	int8_t x76 = -2;

    t18 = ((x73^x74)|(x75==x76));

    if (t18 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 358U;
	int64_t x79 = 60616104000898734LL;
	int64_t x80 = -1LL;
	volatile int32_t t19 = 453866522;

    t19 = ((x77^x78)|(x79==x80));

    if (t19 != 339) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = UINT32_MAX;
	static uint64_t x82 = 6812551LLU;
	int8_t x83 = 28;
	uint32_t x84 = 15716U;
	volatile uint64_t t20 = 35LLU;

    t20 = ((x81^x82)|(x83==x84));

    if (t20 != 4288154744LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 3400132LLU;
	static int32_t x87 = INT32_MIN;
	int8_t x88 = 0;
	volatile uint64_t t21 = 127825797LLU;

    t21 = ((x85^x86)|(x87==x88));

    if (t21 != 3399995LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x89 = UINT32_MAX;
	uint16_t x91 = 5693U;
	int16_t x92 = INT16_MIN;
	volatile int64_t t22 = -8567LL;

    t22 = ((x89^x90)|(x91==x92));

    if (t22 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -3;
	int64_t x94 = -1LL;
	volatile int16_t x95 = 1;
	static int32_t x96 = 10;
	static int64_t t23 = 1107004599851LL;

    t23 = ((x93^x94)|(x95==x96));

    if (t23 != 2LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = UINT32_MAX;
	int16_t x98 = -79;
	int32_t x100 = 45433284;
	volatile uint32_t t24 = 175679296U;

    t24 = ((x97^x98)|(x99==x100));

    if (t24 != 78U) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = -1LL;
	int16_t x102 = INT16_MIN;
	static int16_t x103 = -6;
	int64_t x104 = INT64_MAX;
	static volatile int64_t t25 = 555082249982LL;

    t25 = ((x101^x102)|(x103==x104));

    if (t25 != 32767LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x106 = 71;
	int32_t x107 = 1370;
	int32_t x108 = -160160445;

    t26 = ((x105^x106)|(x107==x108));

    if (t26 != 70LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x110 = UINT8_MAX;
	volatile int8_t x111 = 3;
	int8_t x112 = -18;
	volatile int64_t t27 = -206422845LL;

    t27 = ((x109^x110)|(x111==x112));

    if (t27 != -118730LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 2564508626LLU;
	volatile int16_t x116 = INT16_MIN;
	volatile uint64_t t28 = 136432158242LLU;

    t28 = ((x113^x114)|(x115==x116));

    if (t28 != 2563982837LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = INT32_MIN;
	static int16_t x118 = -11700;
	int8_t x120 = 62;
	static volatile int32_t t29 = 221020332;

    t29 = ((x117^x118)|(x119==x120));

    if (t29 != 2147471948) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x124 = 1U;
	static int32_t t30 = INT32_MAX;

    t30 = ((x121^x122)|(x123==x124));

    if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	int64_t x126 = -1LL;
	int64_t x127 = INT64_MIN;
	int8_t x128 = -1;
	volatile int64_t t31 = -549524366511829964LL;

    t31 = ((x125^x126)|(x127==x128));

    if (t31 != 32767LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -2556LL;
	int64_t x130 = INT64_MIN;
	uint64_t x131 = UINT64_MAX;
	volatile int16_t x132 = -42;
	static volatile int64_t t32 = -246205615763710447LL;

    t32 = ((x129^x130)|(x131==x132));

    if (t32 != 9223372036854773252LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x134 = 14U;
	uint8_t x135 = UINT8_MAX;
	uint8_t x136 = UINT8_MAX;

    t33 = ((x133^x134)|(x135==x136));

    if (t33 != -26881246855LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MIN;
	uint64_t x138 = 2133019703780LLU;
	static int64_t x139 = -16265274155698LL;
	volatile uint64_t t34 = 11876571745LLU;

    t34 = ((x137^x138)|(x139==x140));

    if (t34 != 18446741940689844708LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x141 = 32U;
	static volatile int16_t x142 = INT16_MIN;
	static int64_t x144 = 18431LL;
	volatile int32_t t35 = 1140;

    t35 = ((x141^x142)|(x143==x144));

    if (t35 != -32736) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	int8_t x146 = -6;
	int64_t x147 = -7351246945210507LL;
	volatile int32_t x148 = INT32_MIN;

    t36 = ((x145^x146)|(x147==x148));

    if (t36 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MAX;
	static uint16_t x150 = UINT16_MAX;
	int32_t x151 = INT32_MIN;
	volatile int8_t x152 = -1;

    t37 = ((x149^x150)|(x151==x152));

    if (t37 != 2147418112) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x153 = 12U;
	int32_t x154 = 7;
	int8_t x155 = INT8_MAX;
	static uint64_t x156 = UINT64_MAX;
	static int32_t t38 = -3729;

    t38 = ((x153^x154)|(x155==x156));

    if (t38 != 11) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x157 = INT64_MIN;
	uint8_t x158 = UINT8_MAX;
	static volatile uint64_t x159 = 32762082481045892LLU;
	volatile uint32_t x160 = 250586U;
	static int64_t t39 = -15975373343054244LL;

    t39 = ((x157^x158)|(x159==x160));

    if (t39 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x163 = -1;
	int64_t x164 = INT64_MIN;
	int32_t t40 = -24031868;

    t40 = ((x161^x162)|(x163==x164));

    if (t40 != 31) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = INT16_MIN;
	int16_t x168 = 9;
	int32_t t41 = -1;

    t41 = ((x165^x166)|(x167==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MAX;
	static int64_t x170 = INT64_MIN;
	uint64_t x171 = 259100884842492LLU;
	uint64_t x172 = 9752367619448LLU;
	int64_t t42 = 16920322446LL;

    t42 = ((x169^x170)|(x171==x172));

    if (t42 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -1;
	int8_t x174 = INT8_MIN;
	static int8_t x175 = INT8_MAX;
	volatile int32_t x176 = -1;
	int32_t t43 = 1;

    t43 = ((x173^x174)|(x175==x176));

    if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	volatile int32_t x178 = -1;
	int64_t x179 = 17303LL;
	volatile int64_t x180 = 809886LL;
	int64_t t44 = INT64_MAX;

    t44 = ((x177^x178)|(x179==x180));

    if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = -1;
	volatile int16_t x182 = INT16_MAX;
	uint32_t x183 = 1459148454U;
	volatile int32_t x184 = -1;
	int32_t t45 = 3;

    t45 = ((x181^x182)|(x183==x184));

    if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MAX;
	int64_t x186 = INT64_MIN;
	volatile int16_t x187 = -1143;
	static int8_t x188 = 1;

    t46 = ((x185^x186)|(x187==x188));

    if (t46 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -66;
	static uint64_t x190 = UINT64_MAX;
	volatile int64_t x191 = INT64_MAX;
	uint32_t x192 = UINT32_MAX;
	volatile uint64_t t47 = 9923058921LLU;

    t47 = ((x189^x190)|(x191==x192));

    if (t47 != 65LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 37245994LLU;
	int64_t x194 = INT64_MAX;
	uint8_t x195 = 2U;
	volatile uint8_t x196 = UINT8_MAX;

    t48 = ((x193^x194)|(x195==x196));

    if (t48 != 9223372036817529813LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x197 = INT32_MAX;
	int16_t x198 = INT16_MAX;
	uint16_t x200 = 3U;
	volatile int32_t t49 = 3115;

    t49 = ((x197^x198)|(x199==x200));

    if (t49 != 2147450880) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x201 = 16293U;
	uint16_t x202 = 433U;
	int64_t x203 = INT64_MAX;
	int8_t x204 = -39;
	static uint32_t t50 = 297921220U;

    t50 = ((x201^x202)|(x203==x204));

    if (t50 != 15892U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 1U;
	uint64_t x206 = UINT64_MAX;
	volatile int64_t x207 = -1LL;

    t51 = ((x205^x206)|(x207==x208));

    if (t51 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = -23;
	int32_t x210 = INT32_MIN;
	int64_t x212 = -23911204813322LL;
	int32_t t52 = -1;

    t52 = ((x209^x210)|(x211==x212));

    if (t52 != 2147483625) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	int32_t x215 = 6744737;
	static int16_t x216 = -1;
	int64_t t53 = -3557495194LL;

    t53 = ((x213^x214)|(x215==x216));

    if (t53 != 2563518260338402748LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	int32_t x219 = -168983867;
	int32_t x220 = -1;

    t54 = ((x217^x218)|(x219==x220));

    if (t54 != -9223372036854775085LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MAX;
	uint8_t x222 = 42U;
	int32_t x223 = INT32_MIN;
	int64_t t55 = -9LL;

    t55 = ((x221^x222)|(x223==x224));

    if (t55 != 9223372036854775765LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = INT16_MIN;
	uint16_t x226 = UINT16_MAX;
	uint32_t x228 = 216U;

    t56 = ((x225^x226)|(x227==x228));

    if (t56 != -32769) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x229 = -3;
	uint8_t x230 = 2U;
	int16_t x231 = 6;
	int32_t x232 = 3408;
	static int32_t t57 = -1;

    t57 = ((x229^x230)|(x231==x232));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 13U;
	volatile int8_t x234 = INT8_MAX;
	int8_t x235 = INT8_MAX;
	volatile int32_t t58 = 252977450;

    t58 = ((x233^x234)|(x235==x236));

    if (t58 != 114) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x238 = INT32_MIN;
	static uint64_t x239 = UINT64_MAX;
	static int32_t x240 = -1;
	volatile int32_t t59 = INT32_MAX;

    t59 = ((x237^x238)|(x239==x240));

    if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x241 = INT16_MIN;
	int32_t x242 = -11756040;
	static int32_t x243 = -84;
	uint64_t x244 = UINT64_MAX;
	int32_t t60 = 46681;

    t60 = ((x241^x242)|(x243==x244));

    if (t60 != 11738616) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MAX;
	static uint16_t x246 = 327U;
	volatile int64_t x247 = -1LL;

    t61 = ((x245^x246)|(x247==x248));

    if (t61 != 32441) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x250 = INT64_MIN;
	static uint8_t x251 = 22U;
	volatile int64_t x252 = INT64_MIN;
	int64_t t62 = 115552264452431285LL;

    t62 = ((x249^x250)|(x251==x252));

    if (t62 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x253 = INT32_MIN;
	static int16_t x254 = 5120;
	volatile int32_t t63 = -1548;

    t63 = ((x253^x254)|(x255==x256));

    if (t63 != -2147478528) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MAX;
	int32_t x259 = INT32_MAX;

    t64 = ((x257^x258)|(x259==x260));

    if (t64 != 32560U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	int64_t x263 = INT64_MIN;

    t65 = ((x261^x262)|(x263==x264));

    if (t65 != -9223372036854773869LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = UINT32_MAX;
	uint32_t x266 = 10U;
	int16_t x267 = INT16_MAX;

    t66 = ((x265^x266)|(x267==x268));

    if (t66 != 4294967285U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = 396LL;
	uint16_t x270 = 0U;
	static int16_t x271 = -1;
	int64_t t67 = -1055136774102616342LL;

    t67 = ((x269^x270)|(x271==x272));

    if (t67 != 396LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = 1U;
	int32_t x274 = -12802297;
	int32_t x275 = -19781439;
	int16_t x276 = INT16_MIN;
	volatile int32_t t68 = -42;

    t68 = ((x273^x274)|(x275==x276));

    if (t68 != -12802298) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = UINT16_MAX;
	int8_t x278 = INT8_MIN;
	int32_t x279 = 7467;
	static int32_t x280 = 20441;

    t69 = ((x277^x278)|(x279==x280));

    if (t69 != -65409) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x282 = UINT8_MAX;
	uint8_t x284 = 26U;
	static volatile int32_t t70 = -6;

    t70 = ((x281^x282)|(x283==x284));

    if (t70 != -256) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -294255583;
	int16_t x286 = INT16_MIN;
	static int64_t x287 = INT64_MIN;
	uint16_t x288 = 858U;

    t71 = ((x285^x286)|(x287==x288));

    if (t71 != 294224929) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = -6190588994LL;
	static int64_t x290 = 2654392523489123818LL;
	static int16_t x291 = INT16_MIN;
	int64_t x292 = INT64_MAX;

    t72 = ((x289^x290)|(x291==x292));

    if (t72 != -2654392518941702572LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 22101U;
	static uint16_t x295 = UINT16_MAX;
	volatile int32_t t73 = -51930076;

    t73 = ((x293^x294)|(x295==x296));

    if (t73 != 22186) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x297 = INT32_MIN;
	int64_t x298 = INT64_MIN;
	volatile uint16_t x299 = UINT16_MAX;
	volatile int64_t t74 = 1056528900891375266LL;

    t74 = ((x297^x298)|(x299==x300));

    if (t74 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x301 = 227LLU;
	int64_t x304 = INT64_MAX;
	static uint64_t t75 = 31LLU;

    t75 = ((x301^x302)|(x303==x304));

    if (t75 != 9223372036854776035LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x305 = 116149LL;
	uint16_t x306 = UINT16_MAX;
	static int32_t x307 = -1;
	int32_t x308 = -1;
	int64_t t76 = 174655091LL;

    t76 = ((x305^x306)|(x307==x308));

    if (t76 != 80459LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = 2U;
	int64_t x312 = 732312452060249LL;
	int32_t t77 = -73579;

    t77 = ((x309^x310)|(x311==x312));

    if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = -26;
	static uint64_t x314 = 227LLU;
	static int64_t x315 = -1LL;
	volatile uint64_t t78 = 30471405673073067LLU;

    t78 = ((x313^x314)|(x315==x316));

    if (t78 != 18446744073709551365LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = 14034696058LL;
	volatile int32_t x318 = -99;
	int8_t x319 = -2;
	uint64_t x320 = 4445129000571223LLU;
	volatile int64_t t79 = 93992405310LL;

    t79 = ((x317^x318)|(x319==x320));

    if (t79 != -14034695961LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -1;
	static int16_t x322 = -121;
	volatile int32_t t80 = -14397;

    t80 = ((x321^x322)|(x323==x324));

    if (t80 != 120) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x325 = INT64_MAX;
	int32_t x326 = INT32_MIN;
	int8_t x327 = INT8_MIN;
	static int16_t x328 = -750;

    t81 = ((x325^x326)|(x327==x328));

    if (t81 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int64_t x329 = -1LL;
	uint8_t x330 = 53U;
	static int64_t x331 = 195861045LL;

    t82 = ((x329^x330)|(x331==x332));

    if (t82 != -54LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x333 = 1U;
	uint32_t x335 = UINT32_MAX;
	int32_t x336 = INT32_MIN;
	volatile int64_t t83 = 1077LL;

    t83 = ((x333^x334)|(x335==x336));

    if (t83 != 1311947860225LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x339 = 7;
	volatile uint64_t x340 = 201192786899950255LLU;
	volatile int32_t t84 = -247;

    t84 = ((x337^x338)|(x339==x340));

    if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = 19;
	int8_t x342 = 38;
	volatile uint8_t x343 = 8U;
	uint16_t x344 = 141U;
	int32_t t85 = -105;

    t85 = ((x341^x342)|(x343==x344));

    if (t85 != 53) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x348 = -388155464612948LL;

    t86 = ((x345^x346)|(x347==x348));

    if (t86 != -44) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MIN;
	int64_t x351 = INT64_MIN;
	int64_t x352 = -477358901384370835LL;

    t87 = ((x349^x350)|(x351==x352));

    if (t87 != -9223372036854774155LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x353 = INT64_MAX;
	uint32_t x355 = 4113562U;
	int64_t t88 = INT64_MIN;

    t88 = ((x353^x354)|(x355==x356));

    if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x358 = INT32_MIN;
	volatile uint8_t x359 = 22U;
	int64_t x360 = -195LL;
	volatile uint32_t t89 = 2283991U;

    t89 = ((x357^x358)|(x359==x360));

    if (t89 != 2147483752U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x361 = 713084867008451LLU;
	static int16_t x362 = -1;
	uint32_t x364 = 125U;
	uint64_t t90 = 3905399868288LLU;

    t90 = ((x361^x362)|(x363==x364));

    if (t90 != 18446030988842543164LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -33073716726979749LL;
	uint16_t x366 = UINT16_MAX;
	uint32_t x367 = UINT32_MAX;
	int64_t x368 = -1LL;
	int64_t t91 = 953173504126948948LL;

    t91 = ((x365^x366)|(x367==x368));

    if (t91 != -33073716726932316LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = UINT8_MAX;
	static volatile uint32_t x370 = UINT32_MAX;
	int8_t x372 = INT8_MAX;
	static uint32_t t92 = 31299U;

    t92 = ((x369^x370)|(x371==x372));

    if (t92 != 4294967040U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MIN;
	volatile int16_t x374 = INT16_MIN;
	uint8_t x375 = 0U;
	static int8_t x376 = 11;
	volatile int32_t t93 = 0;

    t93 = ((x373^x374)|(x375==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x377 = -34;
	uint8_t x379 = 29U;
	volatile int32_t x380 = INT32_MIN;
	static int64_t t94 = -146LL;

    t94 = ((x377^x378)|(x379==x380));

    if (t94 != 13347491968696572LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x384 = INT32_MIN;
	int64_t t95 = INT64_MAX;

    t95 = ((x381^x382)|(x383==x384));

    if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x386 = UINT16_MAX;
	static int32_t x387 = -1;
	int8_t x388 = INT8_MIN;
	static volatile uint64_t t96 = 20622LLU;

    t96 = ((x385^x386)|(x387==x388));

    if (t96 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x392 = -1957;
	int32_t t97 = -7500201;

    t97 = ((x389^x390)|(x391==x392));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	uint32_t x395 = 205989U;

    t98 = ((x393^x394)|(x395==x396));

    if (t98 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x398 = -1;
	int64_t x399 = 22084690436LL;
	uint64_t x400 = 7438594LLU;
	volatile int32_t t99 = -2984704;

    t99 = ((x397^x398)|(x399==x400));

    if (t99 != 46) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = UINT64_MAX;
	uint16_t x402 = UINT16_MAX;
	int32_t x403 = INT32_MAX;
	volatile int64_t x404 = INT64_MAX;
	uint64_t t100 = 100938LLU;

    t100 = ((x401^x402)|(x403==x404));

    if (t100 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x406 = UINT64_MAX;
	int16_t x408 = -1;
	volatile uint64_t t101 = 7279977567955514LLU;

    t101 = ((x405^x406)|(x407==x408));

    if (t101 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = INT32_MIN;
	int32_t x410 = INT32_MIN;
	uint32_t x411 = 69293U;
	int32_t x412 = INT32_MIN;
	int32_t t102 = -207524445;

    t102 = ((x409^x410)|(x411==x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	int32_t x414 = -52;
	int8_t x416 = 0;
	volatile int32_t t103 = 1;

    t103 = ((x413^x414)|(x415==x416));

    if (t103 != 2147483596) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -1;
	static uint16_t x418 = UINT16_MAX;
	int8_t x419 = 48;
	int32_t t104 = -7787705;

    t104 = ((x417^x418)|(x419==x420));

    if (t104 != -65536) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x422 = INT16_MIN;
	volatile int64_t x423 = INT64_MIN;
	int8_t x424 = -1;
	int64_t t105 = -52LL;

    t105 = ((x421^x422)|(x423==x424));

    if (t105 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = -1;
	static int64_t x426 = -1LL;
	volatile uint64_t x427 = 154458776659LLU;
	uint64_t x428 = UINT64_MAX;
	int64_t t106 = 121000714837588286LL;

    t106 = ((x425^x426)|(x427==x428));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x429 = INT32_MIN;
	int64_t x431 = INT64_MIN;
	static volatile int32_t t107 = -8724127;

    t107 = ((x429^x430)|(x431==x432));

    if (t107 != -2147483521) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = 11;
	int64_t x435 = INT64_MAX;
	uint8_t x436 = 26U;
	volatile uint64_t t108 = 37818704LLU;

    t108 = ((x433^x434)|(x435==x436));

    if (t108 != 5297899113130LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x439 = INT32_MAX;
	uint64_t x440 = 34642216444LLU;
	int32_t t109 = -70;

    t109 = ((x437^x438)|(x439==x440));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x441 = INT16_MIN;
	uint8_t x442 = 12U;
	volatile int16_t x443 = 16;
	static volatile int32_t t110 = 4525;

    t110 = ((x441^x442)|(x443==x444));

    if (t110 != -32756) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -187064102LL;
	int8_t x446 = INT8_MAX;
	int64_t x447 = -1LL;
	int64_t t111 = -777961LL;

    t111 = ((x445^x446)|(x447==x448));

    if (t111 != -187064155LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = UINT32_MAX;
	uint8_t x452 = 67U;
	static uint64_t t112 = 115376006LLU;

    t112 = ((x449^x450)|(x451==x452));

    if (t112 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MAX;
	int32_t x454 = -47685;
	uint8_t x455 = 29U;
	volatile int32_t x456 = INT32_MAX;
	int64_t t113 = -157980388LL;

    t113 = ((x453^x454)|(x455==x456));

    if (t113 != -9223372036854728124LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x457 = INT16_MIN;
	int8_t x459 = INT8_MIN;
	volatile int64_t x460 = 107851863848432885LL;
	static volatile int32_t t114 = 38516725;

    t114 = ((x457^x458)|(x459==x460));

    if (t114 != 32767) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x461 = 14U;
	int64_t x463 = INT64_MIN;
	int64_t x464 = INT64_MIN;
	int32_t t115 = -18;

    t115 = ((x461^x462)|(x463==x464));

    if (t115 != 990649) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = 1;
	uint8_t x467 = 45U;
	uint64_t x468 = UINT64_MAX;
	static int32_t t116 = 1;

    t116 = ((x465^x466)|(x467==x468));

    if (t116 != -2) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x470 = 42261U;
	int16_t x471 = INT16_MAX;
	int64_t x472 = INT64_MIN;
	volatile uint32_t t117 = 87017U;

    t117 = ((x469^x470)|(x471==x472));

    if (t117 != 42261U) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MIN;
	int16_t x474 = INT16_MIN;
	uint32_t x476 = 169304953U;
	int32_t t118 = 0;

    t118 = ((x473^x474)|(x475==x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MAX;
	int64_t x479 = -137403928642LL;
	uint16_t x480 = 230U;
	int32_t t119 = -186398415;

    t119 = ((x477^x478)|(x479==x480));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = INT16_MAX;
	int8_t x482 = INT8_MIN;
	int64_t x483 = 244677LL;
	int32_t x484 = 324220988;
	volatile int32_t t120 = -755226;

    t120 = ((x481^x482)|(x483==x484));

    if (t120 != -32641) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x487 = INT8_MIN;
	static uint32_t x488 = 0U;
	static int64_t t121 = -1991076551LL;

    t121 = ((x485^x486)|(x487==x488));

    if (t121 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = 149731;
	int8_t x490 = 48;
	int64_t x491 = INT64_MIN;
	int64_t x492 = 27LL;
	static int32_t t122 = -1312;

    t122 = ((x489^x490)|(x491==x492));

    if (t122 != 149715) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x493 = UINT64_MAX;
	static int8_t x494 = -1;
	int16_t x495 = 4677;
	int8_t x496 = -1;
	uint64_t t123 = 3256323LLU;

    t123 = ((x493^x494)|(x495==x496));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x498 = 271622LLU;
	int8_t x499 = INT8_MIN;
	volatile uint64_t t124 = 162633LLU;

    t124 = ((x497^x498)|(x499==x500));

    if (t124 != 271666LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x502 = INT64_MIN;
	int32_t x503 = -128;
	int8_t x504 = INT8_MIN;

    t125 = ((x501^x502)|(x503==x504));

    if (t125 != -9223372036847225197LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = 207;
	uint32_t x506 = 255836352U;
	int32_t x507 = INT32_MAX;
	static volatile uint32_t t126 = 25836U;

    t126 = ((x505^x506)|(x507==x508));

    if (t126 != 255836175U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x509 = INT32_MAX;
	volatile int8_t x511 = INT8_MAX;
	static int8_t x512 = INT8_MIN;
	volatile int32_t t127 = 193;

    t127 = ((x509^x510)|(x511==x512));

    if (t127 != -2147483521) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x514 = -3;
	int8_t x516 = -1;
	static int32_t t128 = -5;

    t128 = ((x513^x514)|(x515==x516));

    if (t128 != 2) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -34117311769208LL;
	int16_t x519 = INT16_MIN;
	int32_t x520 = INT32_MIN;
	int64_t t129 = -39569LL;

    t129 = ((x517^x518)|(x519==x520));

    if (t129 != -34117311780233LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = 18U;
	static int64_t x523 = 1178488002515109615LL;
	int32_t x524 = 2154375;
	int32_t t130 = 161815;

    t130 = ((x521^x522)|(x523==x524));

    if (t130 != 65517) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	uint32_t x526 = 1U;
	int64_t x527 = -27431LL;
	static int32_t x528 = -1;
	int64_t t131 = -774028490047391501LL;

    t131 = ((x525^x526)|(x527==x528));

    if (t131 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MAX;
	static uint16_t x530 = UINT16_MAX;
	int32_t t132 = 2722747;

    t132 = ((x529^x530)|(x531==x532));

    if (t132 != 65408) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = 3126U;
	static int64_t x534 = INT64_MIN;
	uint16_t x535 = 45U;
	int32_t x536 = INT32_MAX;

    t133 = ((x533^x534)|(x535==x536));

    if (t133 != -9223372036854772682LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x537 = INT64_MAX;
	int32_t x538 = -13378;
	int16_t x539 = INT16_MIN;
	int8_t x540 = 2;
	static int64_t t134 = 102441407188LL;

    t134 = ((x537^x538)|(x539==x540));

    if (t134 != -9223372036854762431LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MIN;
	int64_t x542 = INT64_MIN;
	static int32_t x543 = INT32_MAX;
	uint32_t x544 = 79779U;
	int64_t t135 = -197749LL;

    t135 = ((x541^x542)|(x543==x544));

    if (t135 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x547 = 50U;
	volatile int16_t x548 = -1;
	volatile uint64_t t136 = 2800463LLU;

    t136 = ((x545^x546)|(x547==x548));

    if (t136 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 36376552LLU;
	int32_t x551 = INT32_MIN;
	uint8_t x552 = UINT8_MAX;
	volatile uint64_t t137 = 4004453749578LLU;

    t137 = ((x549^x550)|(x551==x552));

    if (t137 != 9223372036818399255LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int16_t x553 = INT16_MIN;
	int8_t x554 = INT8_MIN;
	volatile uint64_t x555 = UINT64_MAX;
	int32_t x556 = INT32_MIN;
	volatile int32_t t138 = 1;

    t138 = ((x553^x554)|(x555==x556));

    if (t138 != 32640) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x557 = 1210U;
	int16_t x558 = -1;
	uint8_t x559 = UINT8_MAX;
	int8_t x560 = -2;
	volatile int32_t t139 = 1706401;

    t139 = ((x557^x558)|(x559==x560));

    if (t139 != -1211) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x562 = -4195;
	volatile uint32_t x563 = 124U;
	uint64_t x564 = 34867351513221LLU;
	int32_t t140 = 10181257;

    t140 = ((x561^x562)|(x563==x564));

    if (t140 != -2147479454) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x566 = UINT16_MAX;
	int64_t x567 = 86LL;
	int32_t t141 = 423803;

    t141 = ((x565^x566)|(x567==x568));

    if (t141 != 32768) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x570 = UINT32_MAX;
	uint16_t x572 = UINT16_MAX;
	uint32_t t142 = 99561U;

    t142 = ((x569^x570)|(x571==x572));

    if (t142 != 32767U) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint16_t x573 = UINT16_MAX;
	int16_t x574 = -234;
	volatile int8_t x575 = INT8_MIN;
	uint16_t x576 = 1U;
	volatile int32_t t143 = 28630377;

    t143 = ((x573^x574)|(x575==x576));

    if (t143 != -65303) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x577 = 0;
	int32_t x578 = 1107;
	static uint64_t x579 = UINT64_MAX;
	static uint16_t x580 = 511U;
	static volatile int32_t t144 = 942;

    t144 = ((x577^x578)|(x579==x580));

    if (t144 != 1107) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x582 = INT8_MIN;
	int8_t x583 = INT8_MIN;
	static volatile uint64_t x584 = 26116LLU;
	volatile int32_t t145 = -79;

    t145 = ((x581^x582)|(x583==x584));

    if (t145 != -125) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = -1;
	int32_t x586 = -700152;
	static uint64_t x587 = UINT64_MAX;
	static uint8_t x588 = UINT8_MAX;
	volatile int32_t t146 = 27543905;

    t146 = ((x585^x586)|(x587==x588));

    if (t146 != 700151) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x589 = 3090533078078927LLU;
	int8_t x591 = INT8_MIN;
	uint16_t x592 = UINT16_MAX;
	volatile uint64_t t147 = 6251697889705LLU;

    t147 = ((x589^x590)|(x591==x592));

    if (t147 != 3090533078078973LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x593 = -22;
	uint8_t x594 = 26U;
	int32_t x595 = 141;
	volatile int8_t x596 = INT8_MIN;

    t148 = ((x593^x594)|(x595==x596));

    if (t148 != -16) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x598 = INT8_MAX;
	uint64_t x599 = UINT64_MAX;
	uint64_t x600 = UINT64_MAX;
	volatile int32_t t149 = 3904608;

    t149 = ((x597^x598)|(x599==x600));

    if (t149 != -105) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = 10LLU;
	int16_t x604 = 7513;

    t150 = ((x601^x602)|(x603==x604));

    if (t150 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = 31;
	uint64_t x606 = 917260562472LLU;
	uint8_t x607 = 1U;
	int32_t x608 = -1;
	uint64_t t151 = 3418257205167LLU;

    t151 = ((x605^x606)|(x607==x608));

    if (t151 != 917260562487LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x609 = 78U;
	uint8_t x610 = 1U;
	volatile uint32_t x611 = UINT32_MAX;
	static int64_t x612 = -1LL;
	volatile int32_t t152 = -354994932;

    t152 = ((x609^x610)|(x611==x612));

    if (t152 != 79) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	volatile int32_t x614 = -356869890;
	uint16_t x615 = UINT16_MAX;
	int16_t x616 = 193;
	int64_t t153 = 334197133818LL;

    t153 = ((x613^x614)|(x615==x616));

    if (t153 != 9223372036497905918LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -1LL;
	int64_t x618 = INT64_MAX;
	static int32_t x619 = -41109308;
	static int8_t x620 = INT8_MIN;
	volatile int64_t t154 = INT64_MIN;

    t154 = ((x617^x618)|(x619==x620));

    if (t154 != INT64_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x623 = UINT16_MAX;
	int8_t x624 = INT8_MAX;
	volatile int32_t t155 = 0;

    t155 = ((x621^x622)|(x623==x624));

    if (t155 != 815) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 8U;
	static int16_t x627 = 16;
	uint8_t x628 = 0U;
	uint32_t t156 = 5191U;

    t156 = ((x625^x626)|(x627==x628));

    if (t156 != 9U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = INT8_MAX;
	uint16_t x630 = 1U;
	int8_t x631 = -16;
	int8_t x632 = 0;
	volatile int32_t t157 = 2612;

    t157 = ((x629^x630)|(x631==x632));

    if (t157 != 126) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = UINT32_MAX;
	volatile int16_t x636 = -1;
	volatile uint32_t t158 = 4336248U;

    t158 = ((x633^x634)|(x635==x636));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x637 = -259802;
	volatile int8_t x639 = -1;
	volatile uint32_t x640 = 32U;
	static volatile uint32_t t159 = 265143021U;

    t159 = ((x637^x638)|(x639==x640));

    if (t159 != 259801U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = UINT64_MAX;
	int8_t x642 = -1;
	uint32_t x643 = UINT32_MAX;
	int32_t x644 = INT32_MIN;
	volatile uint64_t t160 = 208LLU;

    t160 = ((x641^x642)|(x643==x644));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x645 = 2139;
	static int16_t x646 = INT16_MIN;
	static int64_t x647 = -523216408617LL;
	uint16_t x648 = UINT16_MAX;
	volatile int32_t t161 = 111744549;

    t161 = ((x645^x646)|(x647==x648));

    if (t161 != -30629) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 28LLU;
	uint8_t x651 = UINT8_MAX;
	uint32_t x652 = 30U;
	uint64_t t162 = 19691123463292981LLU;

    t162 = ((x649^x650)|(x651==x652));

    if (t162 != 36LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = UINT8_MAX;
	volatile int8_t x654 = 1;
	static uint8_t x655 = UINT8_MAX;
	int32_t t163 = -54971;

    t163 = ((x653^x654)|(x655==x656));

    if (t163 != 254) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x657 = INT8_MIN;
	uint64_t x659 = UINT64_MAX;
	volatile int32_t t164 = 3806;

    t164 = ((x657^x658)|(x659==x660));

    if (t164 != 32640) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x661 = -1;
	int16_t x664 = -1;
	int32_t t165 = 10050;

    t165 = ((x661^x662)|(x663==x664));

    if (t165 != -108344797) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint8_t x665 = 0U;
	int8_t x666 = -1;
	int64_t x667 = INT64_MIN;
	uint64_t x668 = 23770LLU;
	static volatile int32_t t166 = -3155;

    t166 = ((x665^x666)|(x667==x668));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x669 = INT8_MAX;
	static uint16_t x670 = 32U;
	static int16_t x671 = -1;

    t167 = ((x669^x670)|(x671==x672));

    if (t167 != 95) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	int8_t x674 = 1;
	int64_t x675 = INT64_MIN;
	int64_t x676 = INT64_MAX;
	volatile int32_t t168 = -27231;

    t168 = ((x673^x674)|(x675==x676));

    if (t168 != -2147483647) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x678 = INT32_MAX;
	volatile int32_t x680 = INT32_MIN;

    t169 = ((x677^x678)|(x679==x680));

    if (t169 != 2106267221LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -1;
	int8_t x683 = INT8_MIN;
	uint64_t x684 = 2609527558219LLU;
	int32_t t170 = -1;

    t170 = ((x681^x682)|(x683==x684));

    if (t170 != -32768) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x685 = -1;
	static uint8_t x686 = 28U;
	int8_t x687 = 1;
	int16_t x688 = INT16_MIN;
	volatile int32_t t171 = -127;

    t171 = ((x685^x686)|(x687==x688));

    if (t171 != -29) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x690 = INT32_MAX;
	int64_t x691 = INT64_MIN;
	int32_t x692 = INT32_MIN;

    t172 = ((x689^x690)|(x691==x692));

    if (t172 != 2147483577) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = -2;
	uint8_t x694 = UINT8_MAX;
	volatile int64_t x695 = INT64_MIN;
	int8_t x696 = 1;
	int32_t t173 = -488113834;

    t173 = ((x693^x694)|(x695==x696));

    if (t173 != -255) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x698 = -1LL;
	uint16_t x699 = 42U;
	int8_t x700 = INT8_MIN;
	int64_t t174 = 229LL;

    t174 = ((x697^x698)|(x699==x700));

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x701 = INT64_MIN;
	int8_t x702 = 1;
	static volatile int32_t x703 = INT32_MIN;
	volatile int64_t t175 = -247483060667718LL;

    t175 = ((x701^x702)|(x703==x704));

    if (t175 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = 4901;
	static int64_t x706 = INT64_MIN;
	volatile int64_t x707 = INT64_MAX;
	int64_t x708 = INT64_MAX;
	volatile int64_t t176 = -15LL;

    t176 = ((x705^x706)|(x707==x708));

    if (t176 != -9223372036854770907LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x711 = UINT32_MAX;
	uint16_t x712 = 659U;
	int32_t t177 = -6498401;

    t177 = ((x709^x710)|(x711==x712));

    if (t177 != -32760) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MAX;
	volatile int8_t x715 = INT8_MIN;
	static volatile int8_t x716 = -32;
	volatile int64_t t178 = INT64_MIN;

    t178 = ((x713^x714)|(x715==x716));

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = -325LL;
	volatile uint32_t x718 = 9U;
	int32_t x720 = -1;
	int64_t t179 = 236LL;

    t179 = ((x717^x718)|(x719==x720));

    if (t179 != -334LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x723 = 0;
	uint64_t x724 = 4739325539570699167LLU;

    t180 = ((x721^x722)|(x723==x724));

    if (t180 != 5804091398LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x725 = 12694U;
	static int64_t x726 = INT64_MAX;
	int8_t x727 = INT8_MIN;
	int32_t x728 = INT32_MIN;
	volatile int64_t t181 = -104724799600564407LL;

    t181 = ((x725^x726)|(x727==x728));

    if (t181 != 9223372036854763113LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = UINT32_MAX;
	int64_t x730 = INT64_MIN;
	int8_t x731 = INT8_MIN;
	volatile int32_t x732 = 9653195;

    t182 = ((x729^x730)|(x731==x732));

    if (t182 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x733 = -3332618;
	int32_t x736 = INT32_MIN;

    t183 = ((x733^x734)|(x735==x736));

    if (t183 != 3332727) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x737 = UINT8_MAX;
	int16_t x738 = INT16_MAX;
	volatile int32_t t184 = -25713321;

    t184 = ((x737^x738)|(x739==x740));

    if (t184 != 32512) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 230829U;
	int64_t x742 = -1577844LL;
	volatile uint16_t x743 = UINT16_MAX;
	static int64_t t185 = 0LL;

    t185 = ((x741^x742)|(x743==x744));

    if (t185 != -1808095LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x745 = INT8_MIN;
	volatile int8_t x747 = -1;
	int64_t x748 = INT64_MIN;

    t186 = ((x745^x746)|(x747==x748));

    if (t186 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x749 = 183;
	int8_t x750 = INT8_MAX;
	int16_t x751 = INT16_MAX;
	static int32_t t187 = 754;

    t187 = ((x749^x750)|(x751==x752));

    if (t187 != 200) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x753 = 2U;
	int8_t x754 = INT8_MIN;
	static int64_t x755 = -1808381194476439LL;
	static int32_t x756 = 7;
	static int32_t t188 = 112164;

    t188 = ((x753^x754)|(x755==x756));

    if (t188 != -126) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = 0;
	int32_t x759 = -1391;
	volatile int32_t t189 = -8;

    t189 = ((x757^x758)|(x759==x760));

    if (t189 != 32767) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	int64_t x763 = INT64_MIN;

    t190 = ((x761^x762)|(x763==x764));

    if (t190 != -2147483403) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x765 = -10;
	volatile uint32_t x766 = 12683U;
	volatile int8_t x767 = INT8_MIN;
	int64_t x768 = -1566466503400406LL;
	uint32_t t191 = 16533U;

    t191 = ((x765^x766)|(x767==x768));

    if (t191 != 4294954621U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 524476719608705LLU;
	volatile uint32_t x770 = 307804U;
	static int32_t x772 = INT32_MIN;

    t192 = ((x769^x770)|(x771==x772));

    if (t192 != 524476719825373LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MIN;
	int8_t x774 = INT8_MIN;
	uint64_t x776 = 730LLU;
	volatile int32_t t193 = 116;

    t193 = ((x773^x774)|(x775==x776));

    if (t193 != 32640) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 978U;
	static uint8_t x778 = UINT8_MAX;
	int8_t x779 = 19;
	static uint32_t x780 = UINT32_MAX;
	uint32_t t194 = 167702U;

    t194 = ((x777^x778)|(x779==x780));

    if (t194 != 813U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = UINT32_MAX;
	int8_t x782 = INT8_MAX;
	uint64_t x783 = 6118466045207617983LLU;
	uint8_t x784 = UINT8_MAX;
	uint32_t t195 = 1361698U;

    t195 = ((x781^x782)|(x783==x784));

    if (t195 != 4294967168U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x788 = INT64_MIN;
	uint64_t t196 = 772189450852LLU;

    t196 = ((x785^x786)|(x787==x788));

    if (t196 != 398LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x789 = UINT16_MAX;
	uint32_t x790 = 2377452U;
	int64_t x791 = 895433912LL;
	static uint32_t t197 = 75159U;

    t197 = ((x789^x790)|(x791==x792));

    if (t197 != 2406675U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = UINT16_MAX;
	int64_t x794 = -1LL;
	int32_t x795 = INT32_MIN;
	int64_t x796 = INT64_MIN;
	volatile int64_t t198 = -30307524LL;

    t198 = ((x793^x794)|(x795==x796));

    if (t198 != -65536LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MIN;
	static int64_t x798 = -1LL;
	int32_t x799 = INT32_MAX;
	static int32_t x800 = 12865;
	volatile int64_t t199 = 555146692701478091LL;

    t199 = ((x797^x798)|(x799==x800));

    if (t199 != 32767LL) { NG(); } else { ; }
	
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

