
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

static int8_t x12 = -1;
int32_t t2 = INT32_MAX;
volatile int16_t x13 = INT16_MIN;
int8_t x15 = -1;
static uint16_t x17 = UINT16_MAX;
volatile int64_t x18 = INT64_MAX;
uint16_t x24 = 22024U;
int64_t t6 = 102441102309079LL;
int32_t x29 = -7;
uint32_t t7 = 3U;
int64_t x38 = INT64_MIN;
volatile int64_t x40 = -53LL;
uint16_t x42 = UINT16_MAX;
volatile int64_t x45 = INT64_MIN;
int8_t x51 = -1;
int32_t x53 = INT32_MIN;
volatile int64_t x58 = -7427369176595LL;
int32_t t15 = -414219696;
int64_t x73 = INT64_MIN;
int16_t x77 = -7;
int64_t x84 = 217564LL;
uint8_t x88 = 0U;
volatile uint32_t t22 = 12302000U;
uint64_t x93 = 78050799LLU;
int64_t x103 = INT64_MIN;
volatile uint32_t t26 = 102839U;
uint32_t x110 = 27210U;
int64_t x111 = -1LL;
int32_t x113 = INT32_MIN;
volatile uint32_t x114 = 12114263U;
volatile uint32_t t28 = 1034U;
static volatile uint16_t x120 = 0U;
int8_t x123 = -2;
int64_t t31 = -1425713LL;
int16_t x133 = 11119;
uint8_t x137 = UINT8_MAX;
static int16_t x144 = INT16_MAX;
int64_t x152 = -6LL;
int8_t x154 = -1;
int64_t x158 = INT64_MIN;
uint8_t x163 = 85U;
static int16_t x167 = 4672;
static int8_t x169 = INT8_MAX;
static int32_t x172 = INT32_MAX;
int64_t x175 = 27579049776456629LL;
volatile int8_t x178 = 33;
uint32_t x182 = UINT32_MAX;
uint64_t x191 = 88802402227LLU;
uint32_t x197 = 27807447U;
static int8_t x201 = INT8_MIN;
static uint16_t x206 = 47U;
static int64_t x207 = INT64_MIN;
static volatile int16_t x209 = 168;
volatile uint16_t x211 = 91U;
volatile int32_t x213 = -722441;
int16_t x215 = 1;
static uint32_t x230 = UINT32_MAX;
volatile int64_t x234 = INT64_MIN;
static int8_t x240 = INT8_MIN;
static int8_t x243 = 10;
int16_t x247 = -542;
int64_t x249 = -1LL;
uint64_t x255 = 14521274488642697LLU;
uint16_t x256 = 62U;
volatile uint32_t x261 = UINT32_MAX;
int8_t x266 = INT8_MIN;
uint64_t x269 = 450219432200LLU;
volatile uint16_t x270 = 3U;
volatile int16_t x284 = INT16_MIN;
volatile int8_t x285 = INT8_MIN;
int16_t x292 = -1833;
uint32_t x294 = 10U;
static volatile uint8_t x296 = 2U;
uint16_t x301 = UINT16_MAX;
static int64_t x310 = INT64_MAX;
int64_t t77 = 71303LL;
int64_t x316 = -3286254665377392554LL;
volatile int32_t x319 = -1;
uint8_t x325 = UINT8_MAX;
volatile int16_t x335 = INT16_MIN;
int64_t x340 = -5662604LL;
volatile int32_t x342 = -27846215;
volatile int64_t t86 = 1LL;
uint64_t x363 = 145009773799117713LLU;
static uint64_t t92 = 252018104270LLU;
static int64_t t93 = -3000LL;
uint8_t x377 = 30U;
static int64_t t95 = 59LL;
uint8_t x393 = UINT8_MAX;
uint16_t x394 = UINT16_MAX;
uint64_t t98 = 1444975LLU;
volatile uint8_t x401 = 47U;
int64_t x403 = 76635288048839119LL;
uint32_t x406 = UINT32_MAX;
volatile uint32_t t101 = 149138128U;
static volatile uint32_t t102 = 0U;
int64_t t103 = -1039387795435LL;
uint16_t x418 = 5U;
volatile int64_t t104 = -14861448876950LL;
int16_t x423 = -1;
uint32_t x429 = UINT32_MAX;
volatile int32_t x430 = 8565299;
int32_t x434 = -35950749;
uint16_t x437 = 16198U;
int16_t x439 = INT16_MIN;
volatile int64_t x440 = INT64_MIN;
volatile int64_t t109 = -3601672LL;
int32_t x446 = INT32_MIN;
static volatile int64_t x448 = INT64_MIN;
int64_t x450 = INT64_MIN;
static uint32_t x453 = 480358U;
uint16_t x457 = 0U;
static int8_t x458 = -1;
uint16_t x459 = 8227U;
int16_t x461 = INT16_MIN;
int64_t x462 = INT64_MAX;
static volatile uint16_t x465 = UINT16_MAX;
static int32_t x469 = 4619;
uint64_t t117 = 11483LLU;
int8_t x475 = -1;
int64_t x478 = -13960801657LL;
volatile uint16_t x480 = 38U;
uint8_t x482 = 51U;
volatile int8_t x483 = 0;
int8_t x484 = INT8_MAX;
static uint32_t t120 = 1872U;
uint16_t x491 = 91U;
uint8_t x494 = 3U;
int16_t x496 = INT16_MIN;
volatile int32_t x497 = INT32_MIN;
int32_t x499 = -908812;
volatile int16_t x507 = INT16_MIN;
static uint64_t x509 = 7842834LLU;
static int16_t x514 = INT16_MIN;
static volatile int64_t t128 = 6665811143912LL;
static int64_t x521 = -1LL;
static int32_t x526 = 1580149;
int16_t x540 = 22;
int32_t x542 = 925841;
uint8_t x543 = UINT8_MAX;
int32_t x546 = INT32_MIN;
int64_t x548 = -1LL;
uint64_t x550 = 1353309LLU;
int8_t x558 = -1;
uint16_t x559 = 616U;
volatile int64_t t139 = 16062015787120814LL;
volatile uint8_t x565 = 3U;
int64_t x568 = INT64_MIN;
uint16_t x569 = UINT16_MAX;
static int32_t x570 = INT32_MIN;
volatile uint8_t x571 = 5U;
int16_t x572 = INT16_MIN;
static int8_t x575 = -14;
int16_t x580 = -11989;
int64_t x581 = INT64_MAX;
uint32_t x583 = UINT32_MAX;
int32_t x589 = INT32_MAX;
static int8_t x598 = -1;
volatile uint64_t t149 = 6515652233378LLU;
static uint64_t t150 = 52650938223169LLU;
int8_t x613 = 47;
int32_t t153 = 49;
static volatile int64_t t156 = 6509LL;
int64_t t157 = 105366LL;
volatile int8_t x633 = 8;
static int16_t x637 = 0;
uint8_t x642 = 0U;
uint32_t x643 = UINT32_MAX;
volatile int64_t x646 = INT64_MIN;
int64_t x650 = INT64_MIN;
static volatile int64_t t162 = -69761600653318836LL;
volatile int64_t x653 = INT64_MAX;
volatile int16_t x654 = INT16_MAX;
volatile int64_t t163 = 2659834LL;
static int64_t x657 = INT64_MIN;
int32_t x664 = 11469;
uint32_t t165 = 3U;
uint32_t t167 = 607U;
int64_t x673 = INT64_MAX;
int16_t x675 = INT16_MIN;
int32_t x677 = -1;
uint8_t x683 = UINT8_MAX;
volatile int16_t x685 = -1;
volatile int64_t t172 = -1640211LL;
int16_t x699 = -1;
static int32_t x702 = -1;
int64_t x703 = INT64_MIN;
volatile int64_t t175 = -14LL;
uint16_t x715 = UINT16_MAX;
volatile int8_t x719 = -1;
int16_t x721 = -1;
static uint64_t x725 = 133524160206LLU;
int64_t x728 = INT64_MIN;
int32_t x730 = INT32_MIN;
int64_t x733 = -1LL;
static volatile int32_t x741 = INT32_MAX;
int32_t x743 = INT32_MAX;
uint32_t x744 = 69U;
uint64_t x746 = UINT64_MAX;
int32_t x748 = INT32_MAX;
uint32_t x763 = UINT32_MAX;
uint32_t x773 = 307811987U;
int32_t x778 = INT32_MAX;
uint16_t x780 = UINT16_MAX;
int8_t x788 = INT8_MIN;
int64_t x790 = INT64_MAX;
int64_t x792 = INT64_MIN;
static int16_t x793 = INT16_MIN;
int8_t x794 = 13;
static int64_t t198 = 227226627604LL;


void f0(void) {
    	uint8_t x1 = 0U;
	int8_t x2 = INT8_MIN;
	int8_t x3 = 6;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 401637335324445LL;

    t0 = (x1^(x2|(x3^x4)));

    if (t0 != -122LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 6U;
	volatile int8_t x6 = 0;
	uint16_t x7 = 0U;
	uint64_t x8 = 24282946833552LLU;
	static volatile uint64_t t1 = 14133065209993LLU;

    t1 = (x5^(x6|(x7^x8)));

    if (t1 != 24282946833558LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	volatile uint8_t x10 = UINT8_MAX;
	volatile int8_t x11 = INT8_MAX;

    t2 = (x9^(x10|(x11^x12)));

    if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x14 = INT16_MAX;
	int8_t x16 = INT8_MIN;
	static volatile int32_t t3 = -15098;

    t3 = (x13^(x14|(x15^x16)));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x19 = INT64_MIN;
	int64_t x20 = 5760LL;
	int64_t t4 = 1231678696LL;

    t4 = (x17^(x18|(x19^x20)));

    if (t4 != -65536LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	uint64_t x22 = UINT64_MAX;
	static int16_t x23 = -1;
	volatile uint64_t t5 = 0LLU;

    t5 = (x21^(x22|(x23^x24)));

    if (t5 != 32767LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MAX;
	volatile uint8_t x26 = 107U;
	int32_t x27 = 80227857;
	static int64_t x28 = -5LL;

    t6 = (x25^(x26|(x27^x28)));

    if (t6 != -80227948LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x30 = 5;
	volatile uint32_t x31 = 661868478U;
	volatile uint32_t x32 = UINT32_MAX;

    t7 = (x29^(x30|(x31^x32)));

    if (t7 != 661868476U) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x33 = 1;
	int32_t x34 = -31376;
	static int8_t x35 = INT8_MIN;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = 3923;

    t8 = (x33^(x34|(x35^x36)));

    if (t8 != -15) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	int16_t x39 = 80;
	static int64_t t9 = -50963384916629760LL;

    t9 = (x37^(x38|(x39^x40)));

    if (t9 != 2147483547LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	uint16_t x43 = 2291U;
	volatile uint64_t x44 = UINT64_MAX;
	volatile uint64_t t10 = 3707028165943074LLU;

    t10 = (x41^(x42|(x43^x44)));

    if (t10 != 32767LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x46 = UINT32_MAX;
	int64_t x47 = -1669868639639657LL;
	int64_t x48 = INT64_MIN;
	int64_t t11 = 2517660488LL;

    t11 = (x45^(x46|(x47^x48)));

    if (t11 != -1669866104815617LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MAX;
	static int8_t x50 = INT8_MIN;
	static int16_t x52 = INT16_MIN;
	int64_t t12 = INT64_MIN;

    t12 = (x49^(x50|(x51^x52)));

    if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint16_t x54 = 3U;
	volatile int16_t x55 = -1;
	uint64_t x56 = 115327158LLU;
	volatile uint64_t t13 = 952LLU;

    t13 = (x53^(x54|(x55^x56)));

    if (t13 != 2032156491LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = 133;
	static uint8_t x59 = 30U;
	static uint64_t x60 = 9441204958324542LLU;
	static volatile uint64_t t14 = 779LLU;

    t14 = (x57^(x58|(x59^x60)));

    if (t14 != 18446739400781920104LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 7;
	volatile int32_t x62 = 8;
	int8_t x63 = -1;
	static uint8_t x64 = 5U;

    t15 = (x61^(x62|(x63^x64)));

    if (t15 != -3) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	volatile int32_t x66 = INT32_MIN;
	uint32_t x67 = 281197U;
	volatile int16_t x68 = INT16_MIN;
	uint32_t t16 = 5U;

    t16 = (x65^(x66|(x67^x68)));

    if (t16 != 2147207789U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = -7563LL;
	int8_t x70 = INT8_MAX;
	int16_t x71 = INT16_MIN;
	int16_t x72 = 0;
	static volatile int64_t t17 = -21403171LL;

    t17 = (x69^(x70|(x71^x72)));

    if (t17 != 25098LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x74 = 147;
	uint16_t x75 = 1U;
	uint8_t x76 = 0U;
	volatile int64_t t18 = 1LL;

    t18 = (x73^(x74|(x75^x76)));

    if (t18 != -9223372036854775661LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x78 = INT32_MIN;
	int8_t x79 = INT8_MIN;
	uint8_t x80 = 12U;
	int32_t t19 = -464116246;

    t19 = (x77^(x78|(x79^x80)));

    if (t19 != 117) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	uint16_t x82 = 507U;
	int64_t x83 = INT64_MIN;
	int64_t t20 = -416351887LL;

    t20 = (x81^(x82|(x83^x84)));

    if (t20 != 9223372036854567423LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -28453764;
	int32_t x86 = INT32_MAX;
	volatile uint64_t x87 = 1828208003LLU;
	static volatile uint64_t t21 = 3566LLU;

    t21 = (x85^(x86|(x87^x88)));

    if (t21 != 18446744071590521731LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	int32_t x90 = INT32_MIN;
	volatile uint32_t x91 = UINT32_MAX;
	uint32_t x92 = 250683U;

    t22 = (x89^(x90|(x91^x92)));

    if (t22 != 240836U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x94 = 67289901U;
	static uint64_t x95 = UINT64_MAX;
	static uint8_t x96 = 115U;
	uint64_t t23 = 1LLU;

    t23 = (x93^(x94|(x95^x96)));

    if (t23 != 18446744073631500866LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x97 = UINT8_MAX;
	int32_t x98 = INT32_MAX;
	static volatile int32_t x99 = INT32_MAX;
	volatile int16_t x100 = 1834;
	int32_t t24 = -151905481;

    t24 = (x97^(x98|(x99^x100)));

    if (t24 != 2147483392) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -774130157;
	static int64_t x102 = 7LL;
	uint8_t x104 = UINT8_MAX;
	static volatile int64_t t25 = -6604418LL;

    t25 = (x101^(x102|(x103^x104)));

    if (t25 != 9223372036080645868LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -1;
	uint32_t x106 = UINT32_MAX;
	uint16_t x107 = 26U;
	static int16_t x108 = INT16_MIN;

    t26 = (x105^(x106|(x107^x108)));

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x109 = INT8_MIN;
	int8_t x112 = 1;
	static volatile int64_t t27 = -925649113LL;

    t27 = (x109^(x110|(x111^x112)));

    if (t27 != 126LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x115 = 389016U;
	uint8_t x116 = 7U;

    t28 = (x113^(x114|(x115^x116)));

    if (t28 != 2159935455U) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x117 = INT16_MIN;
	int64_t x118 = -1LL;
	static volatile int64_t x119 = INT64_MIN;
	int64_t t29 = -86274019853550LL;

    t29 = (x117^(x118|(x119^x120)));

    if (t29 != 32767LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x121 = UINT16_MAX;
	static volatile uint32_t x122 = 183U;
	uint8_t x124 = 19U;
	uint32_t t30 = 2455986U;

    t30 = (x121^(x122|(x123^x124)));

    if (t30 != 4294901760U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x125 = -1;
	volatile int32_t x126 = INT32_MIN;
	static int64_t x127 = INT64_MIN;
	int8_t x128 = -1;

    t31 = (x125^(x126|(x127^x128)));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -1;
	uint16_t x130 = 3U;
	static int64_t x131 = INT64_MAX;
	uint32_t x132 = 910879790U;
	static int64_t t32 = -10594980093LL;

    t32 = (x129^(x130|(x131^x132)));

    if (t32 != -9223372035943896020LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x134 = INT64_MAX;
	volatile int8_t x135 = INT8_MAX;
	uint32_t x136 = 24U;
	volatile int64_t t33 = 5045617844LL;

    t33 = (x133^(x134|(x135^x136)));

    if (t33 != 9223372036854764688LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x138 = 7108;
	int64_t x139 = 16277116182810LL;
	static int8_t x140 = -1;
	volatile int64_t t34 = -19750LL;

    t34 = (x137^(x138|(x139^x140)));

    if (t34 != -16277116182758LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x141 = INT64_MIN;
	int8_t x142 = -1;
	int8_t x143 = INT8_MIN;
	static volatile int64_t t35 = INT64_MAX;

    t35 = (x141^(x142|(x143^x144)));

    if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = 26;
	int64_t x146 = -1LL;
	int32_t x147 = INT32_MIN;
	int32_t x148 = INT32_MIN;
	volatile int64_t t36 = 15896LL;

    t36 = (x145^(x146|(x147^x148)));

    if (t36 != -27LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x149 = 4583U;
	uint8_t x150 = 104U;
	static int32_t x151 = 22304479;
	static int64_t t37 = 31754LL;

    t37 = (x149^(x150|(x151^x152)));

    if (t37 != -22300534LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	int8_t x155 = -1;
	int32_t x156 = INT32_MIN;
	int32_t t38 = 1;

    t38 = (x153^(x154|(x155^x156)));

    if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = -1;
	int64_t x159 = INT64_MAX;
	volatile int8_t x160 = 2;
	int64_t t39 = -304580740891589975LL;

    t39 = (x157^(x158|(x159^x160)));

    if (t39 != 2LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x161 = -1;
	int16_t x162 = -96;
	int64_t x164 = INT64_MIN;
	static int64_t t40 = -5604545984LL;

    t40 = (x161^(x162|(x163^x164)));

    if (t40 != 10LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 15U;
	int32_t x166 = INT32_MIN;
	int32_t x168 = INT32_MAX;
	volatile int32_t t41 = 1177;

    t41 = (x165^(x166|(x167^x168)));

    if (t41 != -4688) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x170 = UINT64_MAX;
	int16_t x171 = 9;
	uint64_t t42 = 7069LLU;

    t42 = (x169^(x170|(x171^x172)));

    if (t42 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = UINT64_MAX;
	volatile int8_t x174 = -25;
	int8_t x176 = 18;
	volatile uint64_t t43 = 1790042501311570LLU;

    t43 = (x173^(x174|(x175^x176)));

    if (t43 != 24LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x177 = UINT16_MAX;
	volatile int32_t x179 = -1;
	volatile uint16_t x180 = UINT16_MAX;
	static int32_t t44 = -40;

    t44 = (x177^(x178|(x179^x180)));

    if (t44 != -34) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	volatile int8_t x183 = INT8_MIN;
	uint64_t x184 = 27LLU;
	static volatile uint64_t t45 = 173LLU;

    t45 = (x181^(x182|(x183^x184)));

    if (t45 != 127LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -1;
	uint8_t x186 = 10U;
	int32_t x187 = INT32_MAX;
	int16_t x188 = INT16_MAX;
	static int32_t t46 = 65;

    t46 = (x185^(x186|(x187^x188)));

    if (t46 != -2147450891) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x189 = INT16_MIN;
	static int64_t x190 = INT64_MIN;
	static int32_t x192 = 1;
	static uint64_t t47 = 622166678031543485LLU;

    t47 = (x189^(x190|(x191^x192)));

    if (t47 != 9223371948052357042LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x193 = -1;
	int32_t x194 = -1;
	int16_t x195 = -199;
	int16_t x196 = INT16_MAX;
	volatile int32_t t48 = -222;

    t48 = (x193^(x194|(x195^x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x198 = INT32_MIN;
	int8_t x199 = -1;
	volatile uint16_t x200 = 1U;
	uint32_t t49 = 392788771U;

    t49 = (x197^(x198|(x199^x200)));

    if (t49 != 4267159849U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x202 = 2U;
	uint32_t x203 = UINT32_MAX;
	uint16_t x204 = 4107U;
	static uint32_t t50 = 12U;

    t50 = (x201^(x202|(x203^x204)));

    if (t50 != 4214U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	int32_t x208 = INT32_MIN;
	int64_t t51 = 43226883389428153LL;

    t51 = (x205^(x206|(x207^x208)));

    if (t51 != -9223372034707292241LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x210 = UINT32_MAX;
	uint64_t x212 = 57642650688126LLU;
	volatile uint64_t t52 = 48895904274LLU;

    t52 = (x209^(x210|(x211^x212)));

    if (t52 != 57642756079447LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x214 = INT16_MIN;
	volatile int32_t x216 = INT32_MIN;
	volatile int32_t t53 = 2654537;

    t53 = (x213^(x214|(x215^x216)));

    if (t53 != 752118) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x217 = INT64_MAX;
	volatile int32_t x218 = INT32_MAX;
	static uint32_t x219 = 2U;
	uint64_t x220 = 5747774576537112LLU;
	volatile uint64_t t54 = 525762287805284LLU;

    t54 = (x217^(x218|(x219^x220)));

    if (t54 != 9217624260363681792LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 741U;
	int8_t x222 = INT8_MAX;
	int8_t x223 = INT8_MIN;
	int64_t x224 = INT64_MIN;
	static int64_t t55 = 1046204898LL;

    t55 = (x221^(x222|(x223^x224)));

    if (t55 != 9223372036854775066LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = INT8_MIN;
	uint64_t x226 = 1447LLU;
	uint16_t x227 = 7U;
	static int32_t x228 = INT32_MIN;
	volatile uint64_t t56 = 2070759125777388LLU;

    t56 = (x225^(x226|(x227^x228)));

    if (t56 != 2147482151LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = 91550;
	volatile int32_t x231 = -1;
	uint8_t x232 = UINT8_MAX;
	static volatile uint32_t t57 = 439U;

    t57 = (x229^(x230|(x231^x232)));

    if (t57 != 4294875745U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x233 = -3934;
	static volatile int16_t x235 = -1;
	static int64_t x236 = -1LL;
	static int64_t t58 = 284290633LL;

    t58 = (x233^(x234|(x235^x236)));

    if (t58 != 9223372036854771874LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = 0;
	volatile int8_t x238 = -1;
	static int64_t x239 = 2LL;
	volatile int64_t t59 = -5LL;

    t59 = (x237^(x238|(x239^x240)));

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MAX;
	uint64_t x242 = UINT64_MAX;
	int64_t x244 = -1LL;
	static uint64_t t60 = 63565200679169LLU;

    t60 = (x241^(x242|(x243^x244)));

    if (t60 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x245 = 6LLU;
	volatile uint32_t x246 = UINT32_MAX;
	uint32_t x248 = 0U;
	static volatile uint64_t t61 = 362278321340LLU;

    t61 = (x245^(x246|(x247^x248)));

    if (t61 != 4294967289LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x250 = UINT32_MAX;
	volatile int16_t x251 = INT16_MIN;
	volatile uint16_t x252 = 2U;
	static volatile int64_t t62 = 495104LL;

    t62 = (x249^(x250|(x251^x252)));

    if (t62 != -4294967296LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x253 = INT16_MIN;
	volatile int32_t x254 = 716255;
	static volatile uint64_t t63 = 30054147655LLU;

    t63 = (x253^(x254|(x255^x256)));

    if (t63 != 18432222799220276735LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MIN;
	volatile int16_t x258 = -1;
	int32_t x259 = 0;
	uint8_t x260 = 7U;
	volatile int32_t t64 = -44;

    t64 = (x257^(x258|(x259^x260)));

    if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x262 = -4360134;
	static uint16_t x263 = 1U;
	int32_t x264 = -1;
	static uint32_t t65 = 6312704U;

    t65 = (x261^(x262|(x263^x264)));

    if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x265 = 252U;
	static int16_t x267 = INT16_MAX;
	int8_t x268 = 5;
	static int32_t t66 = -23916565;

    t66 = (x265^(x266|(x267^x268)));

    if (t66 != -250) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x271 = 406U;
	int32_t x272 = INT32_MIN;
	volatile uint64_t t67 = 2LLU;

    t67 = (x269^(x270|(x271^x272)));

    if (t67 != 448071948447LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x273 = UINT8_MAX;
	uint32_t x274 = 11088U;
	static volatile int64_t x275 = INT64_MIN;
	volatile int32_t x276 = INT32_MAX;
	int64_t t68 = -169619490LL;

    t68 = (x273^(x274|(x275^x276)));

    if (t68 != -9223372034707292416LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 32823275037LL;
	uint32_t x278 = 18829U;
	int32_t x279 = 6;
	int8_t x280 = INT8_MIN;
	int64_t t69 = 65LL;

    t69 = (x277^(x278|(x279^x280)));

    if (t69 != 31601234322LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x281 = 1;
	static int32_t x282 = 265302;
	int64_t x283 = -1LL;
	volatile int64_t t70 = -2056298240842686LL;

    t70 = (x281^(x282|(x283^x284)));

    if (t70 != 294910LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = -2;
	int64_t x287 = 31523330LL;
	uint32_t x288 = 47U;
	int64_t t71 = 29750036490452LL;

    t71 = (x285^(x286|(x287^x288)));

    if (t71 != 127LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MIN;
	uint64_t x290 = 10740LLU;
	volatile int64_t x291 = INT64_MIN;
	uint64_t t72 = 12933921127LLU;

    t72 = (x289^(x290|(x291^x292)));

    if (t72 != 18446744073709550071LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -1LL;
	uint8_t x295 = 60U;
	volatile int64_t t73 = 1009376997571LL;

    t73 = (x293^(x294|(x295^x296)));

    if (t73 != -63LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 13U;
	int32_t x298 = INT32_MAX;
	static int8_t x299 = 2;
	int32_t x300 = INT32_MAX;
	int32_t t74 = -62148481;

    t74 = (x297^(x298|(x299^x300)));

    if (t74 != 2147483634) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x302 = INT8_MIN;
	int8_t x303 = -1;
	static uint8_t x304 = 1U;
	volatile int32_t t75 = 3881;

    t75 = (x301^(x302|(x303^x304)));

    if (t75 != -65535) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MAX;
	int16_t x306 = INT16_MIN;
	int64_t x307 = INT64_MIN;
	int16_t x308 = INT16_MAX;
	volatile int64_t t76 = -77669103798680051LL;

    t76 = (x305^(x306|(x307^x308)));

    if (t76 != -2147483648LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	volatile uint32_t x311 = UINT32_MAX;
	int16_t x312 = INT16_MAX;

    t77 = (x309^(x310|(x311^x312)));

    if (t77 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MIN;
	int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MIN;
	static volatile int64_t t78 = 1678831747925652LL;

    t78 = (x313^(x314|(x315^x316)));

    if (t78 != 22614LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = -6729;
	int32_t x318 = INT32_MIN;
	int8_t x320 = -1;
	volatile int32_t t79 = -1;

    t79 = (x317^(x318|(x319^x320)));

    if (t79 != 2147476919) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = UINT64_MAX;
	static int32_t x322 = INT32_MIN;
	int64_t x323 = INT64_MIN;
	static uint32_t x324 = 35633643U;
	uint64_t t80 = 53LLU;

    t80 = (x321^(x322|(x323^x324)));

    if (t80 != 2111850004LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x326 = INT32_MIN;
	volatile int8_t x327 = -6;
	static volatile uint64_t x328 = UINT64_MAX;
	uint64_t t81 = 117193148656543LLU;

    t81 = (x325^(x326|(x327^x328)));

    if (t81 != 18446744071562068218LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = 1479386;
	volatile int16_t x330 = INT16_MIN;
	int32_t x331 = 2924549;
	int8_t x332 = INT8_MAX;
	volatile int32_t t82 = 87393;

    t82 = (x329^(x330|(x331^x332)));

    if (t82 != -1494368) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = UINT32_MAX;
	int16_t x334 = INT16_MIN;
	int8_t x336 = -62;
	volatile uint32_t t83 = 32428U;

    t83 = (x333^(x334|(x335^x336)));

    if (t83 != 61U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x337 = INT16_MIN;
	static int64_t x338 = INT64_MAX;
	static volatile int16_t x339 = INT16_MIN;
	static int64_t t84 = 3754LL;

    t84 = (x337^(x338|(x339^x340)));

    if (t84 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	uint8_t x343 = 4U;
	int64_t x344 = INT64_MIN;
	volatile int64_t t85 = -274988731LL;

    t85 = (x341^(x342|(x343^x344)));

    if (t85 != 2119637437LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -31425149573840590LL;
	static uint16_t x346 = 15U;
	static int16_t x347 = -3448;
	volatile int32_t x348 = -492391858;

    t86 = (x345^(x346|(x347^x348)));

    if (t86 != -31425149618486787LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = 237423U;
	int64_t x350 = INT64_MIN;
	static int32_t x351 = INT32_MAX;
	volatile int16_t x352 = -1;
	int64_t t87 = -20747LL;

    t87 = (x349^(x350|(x351^x352)));

    if (t87 != -2147246225LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = 15;
	static volatile int16_t x354 = INT16_MAX;
	static int8_t x355 = -13;
	static volatile uint8_t x356 = 1U;
	int32_t t88 = -23521093;

    t88 = (x353^(x354|(x355^x356)));

    if (t88 != -16) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = UINT32_MAX;
	uint64_t x358 = 1291475567LLU;
	uint32_t x359 = 505353614U;
	int32_t x360 = INT32_MIN;
	uint64_t t89 = 711106990912173LLU;

    t89 = (x357^(x358|(x359^x360)));

    if (t89 != 553689104LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x361 = UINT16_MAX;
	int16_t x362 = INT16_MIN;
	int16_t x364 = 1;
	volatile uint64_t t90 = 7LLU;

    t90 = (x361^(x362|(x363^x364)));

    if (t90 != 18446744073709513839LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x365 = -1;
	uint16_t x366 = 248U;
	int16_t x367 = 75;
	static uint16_t x368 = UINT16_MAX;
	static int32_t t91 = -252623;

    t91 = (x365^(x366|(x367^x368)));

    if (t91 != -65533) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x369 = INT32_MAX;
	int64_t x370 = INT64_MIN;
	int8_t x371 = -2;
	uint64_t x372 = 489642511886LLU;

    t92 = (x369^(x370|(x371^x372)));

    if (t92 != 18446743581952036367LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x373 = 403LL;
	int64_t x374 = INT64_MIN;
	static uint16_t x375 = 0U;
	static int16_t x376 = 42;

    t93 = (x373^(x374|(x375^x376)));

    if (t93 != -9223372036854775367LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x378 = 11457U;
	int64_t x379 = 26842989200488LL;
	static uint64_t x380 = 1924LLU;
	uint64_t t94 = 1883453LLU;

    t94 = (x377^(x378|(x379^x380)));

    if (t94 != 26842989211635LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	volatile int16_t x382 = INT16_MIN;
	int64_t x383 = -1265045839LL;
	static int32_t x384 = 15504;

    t95 = (x381^(x382|(x383^x384)));

    if (t95 != 11681LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 3U;
	int32_t x386 = -1;
	uint8_t x387 = 0U;
	int8_t x388 = INT8_MIN;
	volatile uint32_t t96 = 298963600U;

    t96 = (x385^(x386|(x387^x388)));

    if (t96 != 4294967292U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MAX;
	int64_t x390 = INT64_MIN;
	uint8_t x391 = 36U;
	int32_t x392 = INT32_MIN;
	int64_t t97 = -1098665183665LL;

    t97 = (x389^(x390|(x391^x392)));

    if (t97 != -2147483557LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x395 = INT64_MIN;
	volatile uint64_t x396 = UINT64_MAX;

    t98 = (x393^(x394|(x395^x396)));

    if (t98 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 730U;
	int16_t x398 = INT16_MIN;
	volatile int64_t x399 = INT64_MIN;
	int8_t x400 = -1;
	volatile int64_t t99 = -1209610328494LL;

    t99 = (x397^(x398|(x399^x400)));

    if (t99 != -731LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int64_t x402 = INT64_MIN;
	uint64_t x404 = 10406828688LLU;
	uint64_t t100 = 63484296LLU;

    t100 = (x401^(x402|(x403^x404)));

    if (t100 != 9300007314899776368LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x405 = -1;
	uint8_t x407 = 1U;
	int32_t x408 = 13297;

    t101 = (x405^(x406|(x407^x408)));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x409 = UINT8_MAX;
	uint32_t x410 = 523430888U;
	static volatile int16_t x411 = INT16_MIN;
	uint16_t x412 = 27385U;

    t102 = (x409^(x410|(x411^x412)));

    if (t102 != 4294961926U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x413 = -800715675LL;
	uint32_t x414 = 3U;
	static volatile int64_t x415 = INT64_MIN;
	static volatile int16_t x416 = -182;

    t103 = (x413^(x414|(x415^x416)));

    if (t103 != -9223372036054060242LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x417 = INT64_MIN;
	int32_t x419 = INT32_MAX;
	int64_t x420 = INT64_MIN;

    t104 = (x417^(x418|(x419^x420)));

    if (t104 != 2147483647LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -1;
	uint16_t x422 = 2702U;
	int16_t x424 = 0;
	static int32_t t105 = -3;

    t105 = (x421^(x422|(x423^x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	uint8_t x426 = 1U;
	volatile int16_t x427 = -4373;
	volatile int64_t x428 = INT64_MIN;
	volatile int64_t t106 = 40094548LL;

    t106 = (x425^(x426|(x427^x428)));

    if (t106 != -4373LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x431 = INT16_MIN;
	int16_t x432 = INT16_MAX;
	volatile uint32_t t107 = 418779221U;

    t107 = (x429^(x430|(x431^x432)));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -87LL;
	volatile int32_t x435 = -1;
	static int64_t x436 = INT64_MAX;
	volatile int64_t t108 = -675466723654504LL;

    t108 = (x433^(x434|(x435^x436)));

    if (t108 != 35950794LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x438 = 12844;

    t109 = (x437^(x438|(x439^x440)));

    if (t109 != 9223372036854746474LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = 0U;
	int64_t x442 = INT64_MIN;
	uint64_t x443 = 4395489574215LLU;
	int32_t x444 = -1;
	static volatile uint64_t t110 = 3908935904575167LLU;

    t110 = (x441^(x442|(x443^x444)));

    if (t110 != 18446739678219977400LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x445 = -20646187422879LL;
	int16_t x447 = 0;
	volatile int64_t t111 = 291335125825LL;

    t111 = (x445^(x446|(x447^x448)));

    if (t111 != 20647775644513LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MAX;
	uint16_t x451 = 1811U;
	volatile uint8_t x452 = UINT8_MAX;
	int64_t t112 = -1LL;

    t112 = (x449^(x450|(x451^x452)));

    if (t112 != -2029LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x454 = 475;
	volatile uint8_t x455 = 3U;
	volatile int32_t x456 = -1;
	volatile uint32_t t113 = 188U;

    t113 = (x453^(x454|(x455^x456)));

    if (t113 != 4294486937U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x460 = -6;
	volatile int32_t t114 = 41;

    t114 = (x457^(x458|(x459^x460)));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x463 = 2116U;
	volatile uint32_t x464 = 13494U;
	static volatile int64_t t115 = -5344LL;

    t115 = (x461^(x462|(x463^x464)));

    if (t115 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x466 = 595322456722LL;
	uint64_t x467 = 1LLU;
	int32_t x468 = INT32_MAX;
	volatile uint64_t t116 = 3557993359344422974LLU;

    t116 = (x465^(x466|(x467^x468)));

    if (t116 != 597000388609LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x470 = UINT64_MAX;
	static int16_t x471 = INT16_MAX;
	static int32_t x472 = INT32_MAX;

    t117 = (x469^(x470|(x471^x472)));

    if (t117 != 18446744073709546996LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	uint8_t x474 = UINT8_MAX;
	int8_t x476 = INT8_MAX;
	volatile int32_t t118 = -15899829;

    t118 = (x473^(x474|(x475^x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x477 = 32381098086327295LLU;
	uint32_t x479 = 224000016U;
	uint64_t t119 = 2LLU;

    t119 = (x477^(x478|(x479^x480)));

    if (t119 != 18414362989579770184LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x481 = 574U;

    t120 = (x481^(x482|(x483^x484)));

    if (t120 != 577U) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MAX;
	int32_t x486 = INT32_MIN;
	int32_t x487 = INT32_MIN;
	static int8_t x488 = -1;
	int64_t t121 = INT64_MIN;

    t121 = (x485^(x486|(x487^x488)));

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x489 = UINT16_MAX;
	static uint8_t x490 = 60U;
	volatile int16_t x492 = -1;
	volatile int32_t t122 = 15;

    t122 = (x489^(x490|(x491^x492)));

    if (t122 != -65469) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x493 = INT32_MIN;
	static int8_t x495 = INT8_MAX;
	int32_t t123 = 81;

    t123 = (x493^(x494|(x495^x496)));

    if (t123 != 2147451007) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x498 = -174;
	static volatile uint16_t x500 = 20U;
	int32_t t124 = 40740218;

    t124 = (x497^(x498|(x499^x500)));

    if (t124 != 2147483634) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x501 = INT8_MIN;
	int8_t x502 = INT8_MIN;
	static uint8_t x503 = UINT8_MAX;
	volatile int32_t x504 = 17;
	volatile int32_t t125 = 0;

    t125 = (x501^(x502|(x503^x504)));

    if (t125 != 110) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	uint64_t x506 = UINT64_MAX;
	static int64_t x508 = INT64_MIN;
	uint64_t t126 = 6238LLU;

    t126 = (x505^(x506|(x507^x508)));

    if (t126 != 2147483647LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint16_t x510 = 1000U;
	int8_t x511 = INT8_MIN;
	int64_t x512 = -44LL;
	uint64_t t127 = 2239562976LLU;

    t127 = (x509^(x510|(x511^x512)));

    if (t127 != 7843822LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = 16;
	volatile int32_t x515 = -1;
	int64_t x516 = -1LL;

    t128 = (x513^(x514|(x515^x516)));

    if (t128 != -32752LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	volatile int32_t x518 = 254909;
	volatile uint32_t x519 = 25583U;
	volatile int64_t x520 = INT64_MIN;
	volatile int64_t t129 = 5785869523901LL;

    t129 = (x517^(x518|(x519^x520)));

    if (t129 != 254975LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = INT16_MIN;
	static int32_t x523 = INT32_MAX;
	int16_t x524 = INT16_MIN;
	int64_t t130 = 102092851LL;

    t130 = (x521^(x522|(x523^x524)));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = UINT64_MAX;
	volatile int32_t x527 = INT32_MIN;
	int8_t x528 = -1;
	volatile uint64_t t131 = 2LLU;

    t131 = (x525^(x526|(x527^x528)));

    if (t131 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = 232LL;
	static uint64_t x530 = 41992215LLU;
	static uint8_t x531 = UINT8_MAX;
	int64_t x532 = -434923224900686067LL;
	uint64_t t132 = 568778340582030679LLU;

    t132 = (x529^(x530|(x531^x532)));

    if (t132 != 18011820848817303327LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	int64_t x534 = INT64_MAX;
	int64_t x535 = -1704LL;
	int64_t x536 = INT64_MIN;
	volatile int64_t t133 = 134521913762LL;

    t133 = (x533^(x534|(x535^x536)));

    if (t133 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int16_t x537 = 5515;
	int32_t x538 = INT32_MIN;
	uint32_t x539 = UINT32_MAX;
	volatile uint32_t t134 = 13U;

    t134 = (x537^(x538|(x539^x540)));

    if (t134 != 4294961762U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x541 = 9LLU;
	int32_t x544 = INT32_MIN;
	uint64_t t135 = 1217355041754LLU;

    t135 = (x541^(x542|(x543^x544)));

    if (t135 != 18446744071562993910LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = 37241257537979100LL;
	uint16_t x547 = UINT16_MAX;
	volatile int64_t t136 = 1132576139377LL;

    t136 = (x545^(x546|(x547^x548)));

    if (t136 != -37241257538010404LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 6U;
	uint64_t x551 = 71108539813193815LLU;
	volatile uint8_t x552 = 5U;
	volatile uint64_t t137 = 1974427018340LLU;

    t137 = (x549^(x550|(x551^x552)));

    if (t137 != 71108539814243929LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = 22U;
	int32_t x554 = INT32_MIN;
	int32_t x555 = INT32_MAX;
	int64_t x556 = INT64_MIN;
	int64_t t138 = -430855053330LL;

    t138 = (x553^(x554|(x555^x556)));

    if (t138 != -23LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = 0U;
	int64_t x560 = 2396113240534335LL;

    t139 = (x557^(x558|(x559^x560)));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x561 = INT32_MAX;
	int8_t x562 = INT8_MAX;
	static uint16_t x563 = UINT16_MAX;
	int64_t x564 = INT64_MIN;
	static int64_t t140 = 1373180112308835143LL;

    t140 = (x561^(x562|(x563^x564)));

    if (t140 != -9223372034707357696LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x566 = 61;
	uint64_t x567 = 6131LLU;
	uint64_t t141 = 1254342776096156044LLU;

    t141 = (x565^(x566|(x567^x568)));

    if (t141 != 9223372036854781948LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t t142 = -512488645;

    t142 = (x569^(x570|(x571^x572)));

    if (t142 != -32774) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = 1670LLU;
	static volatile uint64_t x574 = 6339949997LLU;
	int64_t x576 = -10333438241555LL;
	volatile uint64_t t143 = 5541LLU;

    t143 = (x573^(x574|(x575^x576)));

    if (t143 != 10333589338425LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = -1LL;
	volatile int64_t x578 = 6967476290734LL;
	int16_t x579 = -1;
	int64_t t144 = -1468217657LL;

    t144 = (x577^(x578|(x579^x580)));

    if (t144 != -6967476301567LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x582 = 30291046LL;
	volatile int16_t x584 = -11298;
	int64_t t145 = -388094641746977774LL;

    t145 = (x581^(x582|(x583^x584)));

    if (t145 != 9223372036824482712LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x585 = INT32_MAX;
	uint8_t x586 = 35U;
	volatile int8_t x587 = 2;
	static volatile int64_t x588 = INT64_MIN;
	volatile int64_t t146 = 10048764964LL;

    t146 = (x585^(x586|(x587^x588)));

    if (t146 != -9223372034707292196LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x590 = INT8_MAX;
	uint16_t x591 = UINT16_MAX;
	int16_t x592 = INT16_MAX;
	int32_t t147 = -122470;

    t147 = (x589^(x590|(x591^x592)));

    if (t147 != 2147450752) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = 1U;
	uint32_t x594 = UINT32_MAX;
	int8_t x595 = INT8_MAX;
	static uint32_t x596 = UINT32_MAX;
	static uint32_t t148 = 20511U;

    t148 = (x593^(x594|(x595^x596)));

    if (t148 != 4294967294U) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x597 = -1;
	volatile uint64_t x599 = 145768653160LLU;
	static int16_t x600 = INT16_MIN;

    t149 = (x597^(x598|(x599^x600)));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x601 = UINT8_MAX;
	uint32_t x602 = 154244U;
	volatile uint16_t x603 = 23U;
	uint64_t x604 = 105099109005531LLU;

    t150 = (x601^(x602|(x603^x604)));

    if (t150 != 105099109005875LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint64_t x605 = 0LLU;
	uint32_t x606 = 423U;
	volatile int8_t x607 = INT8_MIN;
	int16_t x608 = -1;
	volatile uint64_t t151 = 60935227615123LLU;

    t151 = (x605^(x606|(x607^x608)));

    if (t151 != 511LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x609 = -1;
	int8_t x610 = -1;
	static int8_t x611 = 0;
	int64_t x612 = 146584428634398LL;
	volatile int64_t t152 = -32254215907LL;

    t152 = (x609^(x610|(x611^x612)));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x614 = INT16_MIN;
	static int32_t x615 = 13;
	int32_t x616 = INT32_MIN;

    t153 = (x613^(x614|(x615^x616)));

    if (t153 != -32734) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x617 = UINT16_MAX;
	uint64_t x618 = UINT64_MAX;
	static uint8_t x619 = 25U;
	volatile int8_t x620 = INT8_MIN;
	volatile uint64_t t154 = 715699296LLU;

    t154 = (x617^(x618|(x619^x620)));

    if (t154 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -17163370135820LL;
	int64_t x622 = -1LL;
	uint16_t x623 = 5U;
	int64_t x624 = -2559255563582309586LL;
	volatile int64_t t155 = 551LL;

    t155 = (x621^(x622|(x623^x624)));

    if (t155 != 17163370135819LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -1LL;
	int64_t x626 = 1732966287684201873LL;
	static uint8_t x627 = UINT8_MAX;
	int64_t x628 = INT64_MIN;

    t156 = (x625^(x626|(x627^x628)));

    if (t156 != 7490405749170573824LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x629 = -1LL;
	static int64_t x630 = INT64_MAX;
	static int16_t x631 = INT16_MIN;
	int8_t x632 = INT8_MAX;

    t157 = (x629^(x630|(x631^x632)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x634 = UINT64_MAX;
	int8_t x635 = 1;
	int16_t x636 = INT16_MIN;
	uint64_t t158 = 8100395653LLU;

    t158 = (x633^(x634|(x635^x636)));

    if (t158 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x638 = 20U;
	int32_t x639 = INT32_MIN;
	uint64_t x640 = UINT64_MAX;
	uint64_t t159 = 9496260524LLU;

    t159 = (x637^(x638|(x639^x640)));

    if (t159 != 2147483647LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MIN;
	uint64_t x644 = 25774LLU;
	uint64_t t160 = 4395607066280LLU;

    t160 = (x641^(x642|(x643^x644)));

    if (t160 != 9223372041149717329LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x645 = 794246305136935LLU;
	volatile int8_t x647 = INT8_MIN;
	static int64_t x648 = -710222032910410LL;
	volatile uint64_t t161 = 264LLU;

    t161 = (x645^(x646|(x647^x648)));

    if (t161 != 9223468439863720209LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x649 = 2;
	int16_t x651 = 3342;
	int16_t x652 = 407;

    t162 = (x649^(x650|(x651^x652)));

    if (t162 != -9223372036854772581LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x655 = 781615777LL;
	volatile int64_t x656 = -1539374LL;

    t163 = (x653^(x654|(x655^x656)));

    if (t163 != -9223372036074536960LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x658 = 12;
	static int8_t x659 = 0;
	int16_t x660 = INT16_MAX;
	static int64_t t164 = -58753427269960431LL;

    t164 = (x657^(x658|(x659^x660)));

    if (t164 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = -11;
	static uint32_t x662 = UINT32_MAX;
	static int32_t x663 = INT32_MAX;

    t165 = (x661^(x662|(x663^x664)));

    if (t165 != 10U) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x665 = 3;
	int64_t x666 = INT64_MIN;
	uint16_t x667 = UINT16_MAX;
	int16_t x668 = INT16_MIN;
	int64_t t166 = 627046056481177646LL;

    t166 = (x665^(x666|(x667^x668)));

    if (t166 != -32772LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = 16;
	int32_t x670 = INT32_MIN;
	static int32_t x671 = 3276631;
	static uint32_t x672 = 448U;

    t167 = (x669^(x670|(x671^x672)));

    if (t167 != 2150760071U) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint8_t x674 = 125U;
	static int8_t x676 = 3;
	volatile int64_t t168 = -114LL;

    t168 = (x673^(x674|(x675^x676)));

    if (t168 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x678 = -7;
	int32_t x679 = INT32_MIN;
	volatile int64_t x680 = -5LL;
	volatile int64_t t169 = 3LL;

    t169 = (x677^(x678|(x679^x680)));

    if (t169 != 4LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x681 = INT64_MIN;
	int8_t x682 = -1;
	int32_t x684 = INT32_MIN;
	int64_t t170 = INT64_MAX;

    t170 = (x681^(x682|(x683^x684)));

    if (t170 != INT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x686 = INT32_MIN;
	int16_t x687 = INT16_MIN;
	int16_t x688 = INT16_MAX;
	volatile int32_t t171 = 29295862;

    t171 = (x685^(x686|(x687^x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MIN;
	int32_t x690 = 82422;
	int32_t x691 = 2;
	uint32_t x692 = 103044U;

    t172 = (x689^(x690|(x691^x692)));

    if (t172 != -9223372036854656010LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x693 = INT32_MIN;
	int16_t x694 = INT16_MAX;
	int16_t x695 = INT16_MAX;
	int16_t x696 = -65;
	static int32_t t173 = INT32_MAX;

    t173 = (x693^(x694|(x695^x696)));

    if (t173 != INT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MAX;
	static volatile int32_t x698 = -1;
	int16_t x700 = INT16_MIN;
	volatile int64_t t174 = INT64_MIN;

    t174 = (x697^(x698|(x699^x700)));

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	int64_t x704 = -145524899555LL;

    t175 = (x701^(x702|(x703^x704)));

    if (t175 != 2147483647LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	uint16_t x706 = 11U;
	int64_t x707 = 89304754765533LL;
	volatile int64_t x708 = -1LL;
	int64_t t176 = 222321180263360LL;

    t176 = (x705^(x706|(x707^x708)));

    if (t176 != 89304754766123LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MIN;
	int8_t x710 = INT8_MIN;
	int64_t x711 = INT64_MIN;
	int64_t x712 = INT64_MIN;
	int64_t t177 = 2815450227458LL;

    t177 = (x709^(x710|(x711^x712)));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x713 = 2U;
	static int32_t x714 = INT32_MIN;
	uint8_t x716 = 2U;
	volatile int32_t t178 = -3665550;

    t178 = (x713^(x714|(x715^x716)));

    if (t178 != -2147418113) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MAX;
	static volatile uint64_t x718 = 1132498490841193072LLU;
	volatile int8_t x720 = 1;
	uint64_t t179 = 183846LLU;

    t179 = (x717^(x718|(x719^x720)));

    if (t179 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x722 = 6004U;
	int32_t x723 = 2003741;
	volatile uint8_t x724 = 15U;
	volatile int32_t t180 = 953530153;

    t180 = (x721^(x722|(x723^x724)));

    if (t180 != -2004855) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x726 = -1LL;
	volatile int16_t x727 = 0;
	uint64_t t181 = 6LLU;

    t181 = (x725^(x726|(x727^x728)));

    if (t181 != 18446743940185391409LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = UINT32_MAX;
	volatile uint64_t x731 = UINT64_MAX;
	volatile uint32_t x732 = 58U;
	volatile uint64_t t182 = 546576LLU;

    t182 = (x729^(x730|(x731^x732)));

    if (t182 != 18446744069414584378LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x734 = INT16_MAX;
	static int8_t x735 = -1;
	int16_t x736 = INT16_MIN;
	static int64_t t183 = 11401LL;

    t183 = (x733^(x734|(x735^x736)));

    if (t183 != -32768LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MIN;
	uint32_t x738 = 1033860U;
	int8_t x739 = INT8_MIN;
	int16_t x740 = 186;
	volatile uint32_t t184 = 67573U;

    t184 = (x737^(x738|(x739^x740)));

    if (t184 != 32702U) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x742 = INT16_MIN;
	volatile uint32_t t185 = 1360U;

    t185 = (x741^(x742|(x743^x744)));

    if (t185 != 2147483717U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = -1LL;
	uint16_t x747 = UINT16_MAX;
	static volatile uint64_t t186 = 151862582LLU;

    t186 = (x745^(x746|(x747^x748)));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	int64_t x750 = -1LL;
	int16_t x751 = -1;
	uint8_t x752 = 15U;
	static int64_t t187 = -9LL;

    t187 = (x749^(x750|(x751^x752)));

    if (t187 != 127LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -1LL;
	volatile uint16_t x754 = 1415U;
	volatile int32_t x755 = -1;
	uint64_t x756 = UINT64_MAX;
	static volatile uint64_t t188 = 771LLU;

    t188 = (x753^(x754|(x755^x756)));

    if (t188 != 18446744073709550200LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = 0;
	int32_t x758 = 162658;
	static int64_t x759 = -1LL;
	int32_t x760 = INT32_MAX;
	int64_t t189 = -377437379LL;

    t189 = (x757^(x758|(x759^x760)));

    if (t189 != -2147320990LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int64_t x761 = -8774LL;
	uint8_t x762 = 3U;
	uint16_t x764 = 14256U;
	volatile int64_t t190 = 37106502699837255LL;

    t190 = (x761^(x762|(x763^x764)));

    if (t190 != -4294961675LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = -22;
	volatile int16_t x766 = 0;
	uint64_t x767 = 154LLU;
	uint8_t x768 = 5U;
	uint64_t t191 = 228900158302908283LLU;

    t191 = (x765^(x766|(x767^x768)));

    if (t191 != 18446744073709551477LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -1LL;
	volatile int32_t x770 = -1;
	static int8_t x771 = INT8_MIN;
	int32_t x772 = INT32_MIN;
	int64_t t192 = 33746191348340LL;

    t192 = (x769^(x770|(x771^x772)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x774 = INT16_MAX;
	static uint8_t x775 = UINT8_MAX;
	int16_t x776 = INT16_MIN;
	uint32_t t193 = 14U;

    t193 = (x773^(x774|(x775^x776)));

    if (t193 != 3987155308U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MAX;
	int64_t x779 = INT64_MAX;
	int64_t t194 = 28664280LL;

    t194 = (x777^(x778|(x779^x780)));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = 86U;
	static uint64_t x782 = 1709LLU;
	int8_t x783 = INT8_MIN;
	int32_t x784 = INT32_MIN;
	volatile uint64_t t195 = 4929LLU;

    t195 = (x781^(x782|(x783^x784)));

    if (t195 != 2147483643LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	volatile int32_t x786 = INT32_MIN;
	static uint32_t x787 = UINT32_MAX;
	volatile int64_t t196 = 3637433LL;

    t196 = (x785^(x786|(x787^x788)));

    if (t196 != -9223372034707292033LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x789 = -1811238746498404LL;
	static uint16_t x791 = 69U;
	volatile int64_t t197 = -64942LL;

    t197 = (x789^(x790|(x791^x792)));

    if (t197 != 1811238746498403LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x795 = 1346U;
	int64_t x796 = -869741242146LL;

    t198 = (x793^(x794|(x795^x796)));

    if (t198 != 869741256093LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 1U;
	int32_t x798 = 584070;
	uint64_t x799 = 32025625067149062LLU;
	volatile int8_t x800 = -1;
	volatile uint64_t t199 = 146LLU;

    t199 = (x797^(x798|(x799^x800)));

    if (t199 != 18414718448642419198LLU) { NG(); } else { ; }
	
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

