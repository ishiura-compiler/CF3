
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

int64_t x3 = 282653086859LL;
int32_t t1 = -709958;
static uint8_t x13 = 15U;
int16_t x17 = INT16_MAX;
int16_t x20 = -86;
uint16_t x29 = 2U;
int8_t x32 = -2;
static volatile uint64_t t8 = 141LLU;
static volatile int16_t x47 = -1;
static volatile int32_t t11 = -254946081;
volatile int64_t x59 = INT64_MIN;
int32_t x63 = INT32_MIN;
int16_t x64 = INT16_MAX;
static volatile int32_t t16 = 3995;
static int8_t x69 = INT8_MAX;
int32_t t17 = -712023851;
int32_t x73 = INT32_MIN;
int8_t x76 = INT8_MIN;
int32_t x81 = INT32_MIN;
uint32_t t21 = 0U;
int16_t x100 = -1;
int8_t x101 = 1;
int16_t x103 = -1;
int32_t t25 = 64;
int64_t t26 = 9553413LL;
int64_t t28 = -2570048LL;
static volatile int8_t x125 = -1;
volatile uint8_t x126 = UINT8_MAX;
uint8_t x139 = UINT8_MAX;
int32_t x146 = -150;
uint16_t x148 = 1826U;
static int32_t x149 = INT32_MIN;
static volatile int32_t t37 = -3074014;
int64_t x161 = -987718675271LL;
volatile uint32_t x164 = UINT32_MAX;
int8_t x165 = 0;
static int64_t x167 = INT64_MAX;
int8_t x170 = INT8_MIN;
int8_t x171 = INT8_MAX;
volatile int8_t x193 = INT8_MIN;
int16_t x196 = INT16_MAX;
int8_t x198 = -1;
volatile uint32_t x206 = UINT32_MAX;
static int16_t x208 = INT16_MIN;
int32_t x209 = INT32_MIN;
static uint32_t x212 = UINT32_MAX;
int32_t x219 = 435;
static uint16_t x224 = 157U;
uint8_t x227 = 2U;
static int64_t x245 = INT64_MIN;
static uint32_t x246 = 2U;
uint64_t x247 = 392787820189LLU;
uint8_t x248 = 12U;
int8_t x255 = -1;
static volatile int64_t t63 = INT64_MIN;
int32_t x261 = -1;
int32_t x262 = 29798;
int8_t x269 = INT8_MIN;
int16_t x278 = -23;
int32_t t70 = -183;
int16_t x293 = INT16_MAX;
uint8_t x295 = 3U;
int8_t x296 = -30;
static volatile int64_t t73 = -628287311441986LL;
int16_t x297 = INT16_MIN;
static volatile int32_t t74 = 125;
int8_t x305 = INT8_MIN;
volatile uint32_t x308 = UINT32_MAX;
uint16_t x311 = 1U;
static uint16_t x319 = UINT16_MAX;
uint64_t x320 = 416222LLU;
static int64_t x323 = INT64_MIN;
int32_t x324 = -2;
int64_t x337 = INT64_MIN;
volatile uint32_t x340 = 2757067U;
static int32_t x347 = -1;
int32_t t87 = -114683605;
int64_t x353 = -1LL;
volatile int32_t x357 = INT32_MAX;
int64_t x376 = INT64_MAX;
int32_t x383 = INT32_MIN;
int64_t x384 = -1LL;
volatile uint8_t x385 = 3U;
volatile int64_t x386 = INT64_MAX;
volatile int64_t t96 = 1LL;
static uint8_t x390 = 2U;
int16_t x396 = -1;
int16_t x399 = -1;
int32_t t99 = 307930;
uint64_t x402 = UINT64_MAX;
uint64_t t100 = 132379864989714LLU;
int32_t x405 = INT32_MIN;
int32_t t101 = -417559298;
int64_t x411 = INT64_MIN;
int64_t x413 = 1373457981LL;
volatile int64_t t103 = 93029870LL;
int16_t x429 = INT16_MAX;
volatile int64_t x430 = INT64_MIN;
int32_t x436 = 43;
static volatile int16_t x439 = INT16_MIN;
static volatile int16_t x444 = INT16_MAX;
static int16_t x454 = -2018;
static int16_t x461 = INT16_MIN;
int8_t x462 = -1;
int32_t t115 = -5;
uint32_t x465 = 0U;
volatile int32_t x468 = INT32_MIN;
int32_t x476 = INT32_MAX;
int16_t x484 = 6134;
int64_t t120 = -78520892301LL;
uint32_t x485 = 1590796U;
int32_t x488 = 347;
static uint64_t x492 = 1LLU;
int32_t t122 = -878286102;
uint64_t x493 = UINT64_MAX;
uint8_t x496 = 0U;
uint8_t x499 = 0U;
volatile int16_t x508 = INT16_MIN;
uint16_t x509 = UINT16_MAX;
int64_t x514 = INT64_MAX;
int8_t x516 = 0;
int64_t t128 = 12619165523LL;
int64_t x518 = -1LL;
int64_t x520 = INT64_MIN;
uint64_t x526 = UINT64_MAX;
static volatile int64_t x528 = INT64_MIN;
static uint32_t x535 = UINT32_MAX;
static uint64_t x540 = 59598723231LLU;
static int8_t x543 = -8;
int16_t x544 = -57;
int16_t x545 = INT16_MIN;
uint64_t x556 = 54969400357158909LLU;
volatile int64_t x557 = -3522549913947LL;
int16_t x559 = INT16_MIN;
uint16_t x569 = 10152U;
int32_t x576 = INT32_MAX;
static int64_t x578 = 527054671595LL;
volatile int16_t x579 = -1;
int32_t x582 = INT32_MIN;
int16_t x584 = -1;
int64_t x590 = -2966255037622LL;
int32_t x591 = -24224;
uint32_t x593 = 1013U;
uint64_t x595 = 135178488997LLU;
static int8_t x599 = 3;
int64_t x605 = -1LL;
int32_t x616 = 7291133;
int64_t x617 = -1LL;
volatile int8_t x618 = INT8_MAX;
static int64_t x619 = INT64_MAX;
uint8_t x621 = 4U;
int64_t x622 = INT64_MIN;
static volatile int32_t x640 = INT32_MIN;
static volatile uint64_t x643 = UINT64_MAX;
int32_t x645 = INT32_MIN;
volatile uint32_t x657 = 501570U;
int32_t x658 = 3512086;
volatile uint16_t x661 = 9145U;
static volatile int16_t x662 = INT16_MIN;
int64_t x670 = INT64_MAX;
uint64_t x673 = 38741LLU;
uint64_t x675 = 1504528LLU;
static int8_t x677 = INT8_MAX;
static int16_t x684 = -8;
volatile int32_t x688 = 0;
int16_t x693 = -461;
int64_t t173 = -9081309110898LL;
int64_t x703 = -2836003004435LL;
static int8_t x710 = 17;
static uint32_t x719 = 55025U;
int64_t x727 = -1LL;
static uint16_t x731 = 6464U;
volatile uint16_t x733 = UINT16_MAX;
static int16_t x734 = -1;
uint8_t x754 = UINT8_MAX;
uint32_t x760 = 41325U;
volatile uint32_t t190 = 296511425U;
int64_t x765 = INT64_MAX;
int16_t x767 = INT16_MIN;
volatile uint64_t t191 = 2275013LLU;
uint64_t t192 = 607139LLU;
int16_t x773 = INT16_MIN;
int8_t x774 = -1;
static int64_t x779 = INT64_MIN;
uint32_t t194 = 31585060U;
volatile uint64_t t196 = 8416496128903LLU;
static uint32_t x792 = 31571U;
static int32_t t198 = 115187768;
static int64_t x800 = 90974LL;
int64_t t199 = -13LL;


void f0(void) {
    	int64_t x1 = -1LL;
	static uint8_t x2 = 54U;
	volatile uint16_t x4 = 203U;
	int64_t t0 = -64008205678612794LL;

    t0 = ((x1^x2)*(x3!=x4));

    if (t0 != -55LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 6U;
	static uint8_t x6 = 1U;
	volatile int16_t x7 = -1;
	int64_t x8 = INT64_MIN;

    t1 = ((x5^x6)*(x7!=x8));

    if (t1 != 7) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	int32_t x10 = INT32_MIN;
	uint8_t x11 = 2U;
	volatile int64_t x12 = 342471483531376721LL;
	static volatile int64_t t2 = 5838LL;

    t2 = ((x9^x10)*(x11!=x12));

    if (t2 != 2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x14 = -26;
	uint8_t x15 = 52U;
	uint32_t x16 = UINT32_MAX;
	int32_t t3 = 7641836;

    t3 = ((x13^x14)*(x15!=x16));

    if (t3 != -23) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x18 = 240690731931124LL;
	int64_t x19 = 264171829022LL;
	int64_t t4 = 429LL;

    t4 = ((x17^x18)*(x19!=x20));

    if (t4 != 240690731919883LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = 0;
	volatile int16_t x22 = -1;
	volatile int64_t x23 = INT64_MAX;
	volatile int8_t x24 = 3;
	volatile int32_t t5 = -28314;

    t5 = ((x21^x22)*(x23!=x24));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	volatile int64_t x26 = -1LL;
	static volatile int8_t x27 = INT8_MIN;
	volatile uint16_t x28 = 7115U;
	volatile int64_t t6 = INT64_MAX;

    t6 = ((x25^x26)*(x27!=x28));

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x30 = 3U;
	int32_t x31 = -17897874;
	int32_t t7 = -22;

    t7 = ((x29^x30)*(x31!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint64_t x33 = UINT64_MAX;
	volatile int8_t x34 = -53;
	static int64_t x35 = -1252147664328520LL;
	int16_t x36 = 2524;

    t8 = ((x33^x34)*(x35!=x36));

    if (t8 != 52LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = INT32_MAX;
	int8_t x38 = INT8_MIN;
	static volatile int16_t x39 = -1;
	volatile int16_t x40 = INT16_MIN;
	static volatile int32_t t9 = 80108474;

    t9 = ((x37^x38)*(x39!=x40));

    if (t9 != -2147483521) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 120116508011801083LLU;
	int16_t x42 = -70;
	volatile int16_t x43 = INT16_MIN;
	int64_t x44 = INT64_MAX;
	volatile uint64_t t10 = 53531873559453623LLU;

    t10 = ((x41^x42)*(x43!=x44));

    if (t10 != 18326627565697750593LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x45 = 1U;
	int32_t x46 = INT32_MAX;
	uint64_t x48 = UINT64_MAX;

    t11 = ((x45^x46)*(x47!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -1;
	static volatile int64_t x50 = -579LL;
	int8_t x51 = 0;
	int16_t x52 = -1;
	volatile int64_t t12 = -449392655616692LL;

    t12 = ((x49^x50)*(x51!=x52));

    if (t12 != 578LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -1;
	static volatile int64_t x54 = INT64_MIN;
	int64_t x55 = 274268605528LL;
	int64_t x56 = -2347764586774995LL;
	int64_t t13 = INT64_MAX;

    t13 = ((x53^x54)*(x55!=x56));

    if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -1;
	uint32_t x58 = 20U;
	uint16_t x60 = 21367U;
	uint32_t t14 = 22978297U;

    t14 = ((x57^x58)*(x59!=x60));

    if (t14 != 4294967275U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 32U;
	static uint16_t x62 = UINT16_MAX;
	volatile int32_t t15 = 87;

    t15 = ((x61^x62)*(x63!=x64));

    if (t15 != 65503) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 0;
	static volatile int16_t x66 = -1;
	volatile int64_t x67 = 618934328376844LL;
	int8_t x68 = 0;

    t16 = ((x65^x66)*(x67!=x68));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = INT8_MIN;
	uint32_t x71 = 53U;
	int64_t x72 = 5668407704LL;

    t17 = ((x69^x70)*(x71!=x72));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x74 = INT8_MIN;
	volatile uint8_t x75 = UINT8_MAX;
	static volatile int32_t t18 = -1;

    t18 = ((x73^x74)*(x75!=x76));

    if (t18 != 2147483520) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = INT16_MIN;
	volatile uint32_t x78 = 25260U;
	int16_t x79 = -1;
	int64_t x80 = INT64_MAX;
	uint32_t t19 = 1668U;

    t19 = ((x77^x78)*(x79!=x80));

    if (t19 != 4294959788U) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x82 = -1LL;
	int64_t x83 = INT64_MAX;
	int16_t x84 = INT16_MAX;
	int64_t t20 = -1836733LL;

    t20 = ((x81^x82)*(x83!=x84));

    if (t20 != 2147483647LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -907388;
	uint32_t x86 = UINT32_MAX;
	volatile int32_t x87 = INT32_MIN;
	int64_t x88 = -334579658746488607LL;

    t21 = ((x85^x86)*(x87!=x88));

    if (t21 != 907387U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	int32_t x90 = 59;
	int16_t x91 = INT16_MIN;
	volatile int32_t x92 = INT32_MIN;
	volatile int64_t t22 = -177543738637LL;

    t22 = ((x89^x90)*(x91!=x92));

    if (t22 != -9223372036854775749LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	uint16_t x94 = 8988U;
	static int64_t x95 = INT64_MIN;
	int16_t x96 = -1;
	volatile int32_t t23 = -3;

    t23 = ((x93^x94)*(x95!=x96));

    if (t23 != -2147474660) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x97 = 1;
	volatile int16_t x98 = INT16_MIN;
	int64_t x99 = -37560740717556LL;
	volatile int32_t t24 = 313;

    t24 = ((x97^x98)*(x99!=x100));

    if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x102 = INT32_MIN;
	int8_t x104 = INT8_MIN;

    t25 = ((x101^x102)*(x103!=x104));

    if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = INT64_MAX;
	static int64_t x106 = INT64_MIN;
	uint32_t x107 = 613U;
	uint32_t x108 = 702U;

    t26 = ((x105^x106)*(x107!=x108));

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = UINT32_MAX;
	uint16_t x110 = 439U;
	int8_t x111 = INT8_MIN;
	uint64_t x112 = UINT64_MAX;
	uint32_t t27 = 2108071766U;

    t27 = ((x109^x110)*(x111!=x112));

    if (t27 != 4294966856U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x113 = INT64_MAX;
	uint32_t x114 = 33302U;
	int8_t x115 = -1;
	uint8_t x116 = 4U;

    t28 = ((x113^x114)*(x115!=x116));

    if (t28 != 9223372036854742505LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MAX;
	uint64_t x118 = UINT64_MAX;
	volatile int32_t x119 = 752161;
	int8_t x120 = INT8_MAX;
	uint64_t t29 = 67575993018839LLU;

    t29 = ((x117^x118)*(x119!=x120));

    if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = 54304610U;
	static int16_t x122 = INT16_MIN;
	int64_t x123 = INT64_MIN;
	static uint8_t x124 = 10U;
	uint32_t t30 = 495U;

    t30 = ((x121^x122)*(x123!=x124));

    if (t30 != 4240645986U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x127 = 754;
	int64_t x128 = INT64_MIN;
	volatile int32_t t31 = 2127;

    t31 = ((x125^x126)*(x127!=x128));

    if (t31 != -256) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = UINT16_MAX;
	uint64_t x130 = 161646855LLU;
	int32_t x131 = INT32_MAX;
	uint8_t x132 = 7U;
	uint64_t t32 = 7LLU;

    t32 = ((x129^x130)*(x131!=x132));

    if (t32 != 161642232LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 607622875U;
	int64_t x134 = INT64_MIN;
	int16_t x135 = INT16_MIN;
	int64_t x136 = -2251116545761254046LL;
	int64_t t33 = -8120752794990LL;

    t33 = ((x133^x134)*(x135!=x136));

    if (t33 != -9223372036247152933LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = 81;
	uint64_t x138 = UINT64_MAX;
	int32_t x140 = INT32_MIN;
	uint64_t t34 = 971837708106933470LLU;

    t34 = ((x137^x138)*(x139!=x140));

    if (t34 != 18446744073709551534LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x141 = 17522U;
	static uint16_t x142 = UINT16_MAX;
	int16_t x143 = INT16_MAX;
	volatile uint8_t x144 = 15U;
	volatile uint32_t t35 = 7088U;

    t35 = ((x141^x142)*(x143!=x144));

    if (t35 != 48013U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	static int16_t x147 = INT16_MIN;
	int64_t t36 = 482960111508711756LL;

    t36 = ((x145^x146)*(x147!=x148));

    if (t36 != 9223372036854775658LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x150 = 58;
	uint64_t x151 = UINT64_MAX;
	uint16_t x152 = UINT16_MAX;

    t37 = ((x149^x150)*(x151!=x152));

    if (t37 != -2147483590) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MAX;
	static int8_t x154 = INT8_MIN;
	int64_t x155 = 6979274111501590LL;
	int64_t x156 = -1LL;
	int64_t t38 = 251017974109260663LL;

    t38 = ((x153^x154)*(x155!=x156));

    if (t38 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = 57;
	int8_t x158 = INT8_MIN;
	volatile uint16_t x159 = UINT16_MAX;
	uint64_t x160 = UINT64_MAX;
	static volatile int32_t t39 = -55851;

    t39 = ((x157^x158)*(x159!=x160));

    if (t39 != -71) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x162 = INT64_MAX;
	int32_t x163 = -4;
	static int64_t t40 = -3179235203378LL;

    t40 = ((x161^x162)*(x163!=x164));

    if (t40 != -9223371049136100538LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x166 = 520889222;
	int64_t x168 = INT64_MIN;
	static volatile int32_t t41 = 1824679;

    t41 = ((x165^x166)*(x167!=x168));

    if (t41 != 520889222) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = 30U;
	int8_t x172 = 3;
	static int32_t t42 = 58355821;

    t42 = ((x169^x170)*(x171!=x172));

    if (t42 != -98) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = INT8_MAX;
	volatile uint32_t x174 = 16932U;
	int64_t x175 = 1994732LL;
	volatile uint32_t x176 = UINT32_MAX;
	volatile uint32_t t43 = 231U;

    t43 = ((x173^x174)*(x175!=x176));

    if (t43 != 16987U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 0U;
	uint32_t x178 = 846U;
	uint8_t x179 = UINT8_MAX;
	uint64_t x180 = 2200843261251453LLU;
	uint32_t t44 = 437706U;

    t44 = ((x177^x178)*(x179!=x180));

    if (t44 != 846U) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = -15769;
	static int16_t x182 = -33;
	int8_t x183 = 49;
	static int16_t x184 = -74;
	static int32_t t45 = -1507231;

    t45 = ((x181^x182)*(x183!=x184));

    if (t45 != 15800) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = INT16_MIN;
	static int8_t x186 = -26;
	static volatile int16_t x187 = -1;
	uint8_t x188 = UINT8_MAX;
	int32_t t46 = 2;

    t46 = ((x185^x186)*(x187!=x188));

    if (t46 != 32742) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x189 = 14356U;
	uint8_t x190 = 0U;
	uint8_t x191 = 1U;
	volatile uint32_t x192 = UINT32_MAX;
	static int32_t t47 = -1001217;

    t47 = ((x189^x190)*(x191!=x192));

    if (t47 != 14356) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x194 = 2262194U;
	int32_t x195 = INT32_MIN;
	static volatile uint32_t t48 = 3778U;

    t48 = ((x193^x194)*(x195!=x196));

    if (t48 != 4292705074U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	int32_t x199 = INT32_MAX;
	int64_t x200 = -182920136322583348LL;
	int64_t t49 = INT64_MAX;

    t49 = ((x197^x198)*(x199!=x200));

    if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x201 = 660458807517LLU;
	uint64_t x202 = 427285980LLU;
	int32_t x203 = 111330840;
	int8_t x204 = INT8_MIN;
	uint64_t t50 = 10255008658599LLU;

    t50 = ((x201^x202)*(x203!=x204));

    if (t50 != 660873313537LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	int64_t x207 = INT64_MIN;
	uint32_t t51 = 3147U;

    t51 = ((x205^x206)*(x207!=x208));

    if (t51 != 2147483647U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x210 = 19804U;
	int32_t x211 = -1;
	int32_t t52 = -38475;

    t52 = ((x209^x210)*(x211!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint8_t x213 = UINT8_MAX;
	int32_t x214 = -1515595;
	static uint8_t x215 = 12U;
	uint64_t x216 = 4080691035706317LLU;
	static volatile int32_t t53 = 13848;

    t53 = ((x213^x214)*(x215!=x216));

    if (t53 != -1515702) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = -1;
	int64_t x218 = -1LL;
	int64_t x220 = INT64_MIN;
	int64_t t54 = 105281468LL;

    t54 = ((x217^x218)*(x219!=x220));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = 2130515;
	int32_t x222 = 2;
	int64_t x223 = -26182208726LL;
	int32_t t55 = 58;

    t55 = ((x221^x222)*(x223!=x224));

    if (t55 != 2130513) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x225 = -1;
	int64_t x226 = -148710028LL;
	int16_t x228 = INT16_MIN;
	volatile int64_t t56 = -125867LL;

    t56 = ((x225^x226)*(x227!=x228));

    if (t56 != 148710027LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x229 = 6U;
	int8_t x230 = 0;
	static uint32_t x231 = 2393U;
	int8_t x232 = INT8_MIN;
	uint32_t t57 = 1779U;

    t57 = ((x229^x230)*(x231!=x232));

    if (t57 != 6U) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	static volatile int32_t x234 = INT32_MIN;
	volatile uint32_t x235 = UINT32_MAX;
	volatile int8_t x236 = INT8_MIN;
	int64_t t58 = 12204LL;

    t58 = ((x233^x234)*(x235!=x236));

    if (t58 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = INT64_MAX;
	static int16_t x238 = INT16_MIN;
	uint8_t x239 = UINT8_MAX;
	uint16_t x240 = 15950U;
	volatile int64_t t59 = -1LL;

    t59 = ((x237^x238)*(x239!=x240));

    if (t59 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x241 = INT8_MAX;
	volatile int8_t x242 = INT8_MIN;
	volatile uint16_t x243 = 1U;
	int64_t x244 = 1006265LL;
	volatile int32_t t60 = 3591;

    t60 = ((x241^x242)*(x243!=x244));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t t61 = 98446812058110007LL;

    t61 = ((x245^x246)*(x247!=x248));

    if (t61 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x249 = 4;
	int8_t x250 = INT8_MAX;
	static int8_t x251 = INT8_MIN;
	static int16_t x252 = -1;
	static volatile int32_t t62 = 7;

    t62 = ((x249^x250)*(x251!=x252));

    if (t62 != 123) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x253 = -1;
	int64_t x254 = INT64_MAX;
	volatile int64_t x256 = INT64_MAX;

    t63 = ((x253^x254)*(x255!=x256));

    if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x257 = -1615;
	uint64_t x258 = 525374219920057179LLU;
	static int8_t x259 = 28;
	int16_t x260 = INT16_MIN;
	static uint64_t t64 = 4112005454205LLU;

    t64 = ((x257^x258)*(x259!=x260));

    if (t64 != 17921369853789493994LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x263 = UINT64_MAX;
	int32_t x264 = -65;
	volatile int32_t t65 = -2;

    t65 = ((x261^x262)*(x263!=x264));

    if (t65 != -29799) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	uint32_t x266 = 765U;
	uint64_t x267 = 8709520288782701LLU;
	int8_t x268 = INT8_MIN;
	volatile uint32_t t66 = 126U;

    t66 = ((x265^x266)*(x267!=x268));

    if (t66 != 2147484413U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x270 = -1;
	int16_t x271 = INT16_MAX;
	static volatile int64_t x272 = INT64_MIN;
	static int32_t t67 = 49901;

    t67 = ((x269^x270)*(x271!=x272));

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x273 = INT32_MAX;
	int16_t x274 = -5;
	int16_t x275 = -1;
	volatile uint32_t x276 = 42U;
	int32_t t68 = -176908910;

    t68 = ((x273^x274)*(x275!=x276));

    if (t68 != -2147483644) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x277 = UINT8_MAX;
	int64_t x279 = 755918801335LL;
	int8_t x280 = -1;
	volatile int32_t t69 = 12;

    t69 = ((x277^x278)*(x279!=x280));

    if (t69 != -234) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = -1;
	static int16_t x282 = -1;
	int32_t x283 = -84520;
	int32_t x284 = -1;

    t70 = ((x281^x282)*(x283!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	uint64_t x286 = UINT64_MAX;
	int64_t x287 = -397996225548715010LL;
	uint8_t x288 = 98U;
	uint64_t t71 = 19825867962LLU;

    t71 = ((x285^x286)*(x287!=x288));

    if (t71 != 2147483647LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x289 = 1062453LLU;
	int64_t x290 = INT64_MAX;
	int64_t x291 = INT64_MIN;
	uint16_t x292 = 18258U;
	volatile uint64_t t72 = 1481432LLU;

    t72 = ((x289^x290)*(x291!=x292));

    if (t72 != 9223372036853713354LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x294 = INT64_MIN;

    t73 = ((x293^x294)*(x295!=x296));

    if (t73 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x298 = INT16_MIN;
	volatile int8_t x299 = -3;
	int32_t x300 = -1;

    t74 = ((x297^x298)*(x299!=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x301 = INT16_MAX;
	int16_t x302 = -1233;
	volatile int8_t x303 = INT8_MAX;
	static uint32_t x304 = 40U;
	int32_t t75 = 7;

    t75 = ((x301^x302)*(x303!=x304));

    if (t75 != -31536) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x306 = INT8_MIN;
	uint8_t x307 = 20U;
	volatile int32_t t76 = 3814;

    t76 = ((x305^x306)*(x307!=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MAX;
	uint16_t x310 = 4658U;
	uint64_t x312 = 5217617706887780235LLU;
	int32_t t77 = -1;

    t77 = ((x309^x310)*(x311!=x312));

    if (t77 != 2147478989) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = UINT32_MAX;
	int64_t x314 = INT64_MIN;
	uint64_t x315 = UINT64_MAX;
	volatile int16_t x316 = INT16_MIN;
	volatile int64_t t78 = 37LL;

    t78 = ((x313^x314)*(x315!=x316));

    if (t78 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 3U;
	volatile int32_t x318 = INT32_MIN;
	uint32_t t79 = 1205559441U;

    t79 = ((x317^x318)*(x319!=x320));

    if (t79 != 2147483651U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x321 = INT32_MIN;
	static int64_t x322 = INT64_MAX;
	static int64_t t80 = 167692757084LL;

    t80 = ((x321^x322)*(x323!=x324));

    if (t80 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x325 = 4616;
	int16_t x326 = -700;
	int64_t x327 = 737686873498164198LL;
	int8_t x328 = INT8_MAX;
	volatile int32_t t81 = -61;

    t81 = ((x325^x326)*(x327!=x328));

    if (t81 != -4276) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = UINT16_MAX;
	static volatile uint16_t x330 = UINT16_MAX;
	static int32_t x331 = 9;
	int64_t x332 = 123339019943LL;
	int32_t t82 = 175443;

    t82 = ((x329^x330)*(x331!=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MAX;
	uint64_t x334 = UINT64_MAX;
	int32_t x335 = -45220;
	int64_t x336 = -1LL;
	volatile uint64_t t83 = 224LLU;

    t83 = ((x333^x334)*(x335!=x336));

    if (t83 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x338 = -13;
	volatile int64_t x339 = INT64_MAX;
	volatile int64_t t84 = -2057462539574LL;

    t84 = ((x337^x338)*(x339!=x340));

    if (t84 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MAX;
	int8_t x342 = 15;
	int32_t x343 = INT32_MIN;
	int16_t x344 = INT16_MIN;
	int32_t t85 = 678;

    t85 = ((x341^x342)*(x343!=x344));

    if (t85 != 2147483632) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x345 = 3U;
	uint8_t x346 = 5U;
	volatile uint8_t x348 = UINT8_MAX;
	volatile uint32_t t86 = 24817U;

    t86 = ((x345^x346)*(x347!=x348));

    if (t86 != 6U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MAX;
	volatile uint8_t x350 = 46U;
	volatile int32_t x351 = INT32_MAX;
	int8_t x352 = INT8_MIN;

    t87 = ((x349^x350)*(x351!=x352));

    if (t87 != 32721) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x354 = UINT16_MAX;
	volatile uint16_t x355 = 23U;
	int8_t x356 = 1;
	int64_t t88 = -14945LL;

    t88 = ((x353^x354)*(x355!=x356));

    if (t88 != -65536LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x358 = 3018282177228LLU;
	int64_t x359 = INT64_MAX;
	volatile uint16_t x360 = 4U;
	uint64_t t89 = 4041689250804617193LLU;

    t89 = ((x357^x358)*(x359!=x360));

    if (t89 != 3018294357299LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = -1;
	int32_t x362 = -3;
	int32_t x363 = INT32_MIN;
	int16_t x364 = INT16_MIN;
	volatile int32_t t90 = -211054;

    t90 = ((x361^x362)*(x363!=x364));

    if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = 2;
	static volatile int32_t x366 = INT32_MAX;
	uint32_t x367 = 259562U;
	uint64_t x368 = UINT64_MAX;
	volatile int32_t t91 = 187366899;

    t91 = ((x365^x366)*(x367!=x368));

    if (t91 != 2147483645) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = -1;
	volatile uint32_t x370 = UINT32_MAX;
	int16_t x371 = INT16_MIN;
	int16_t x372 = -217;
	volatile uint32_t t92 = 12U;

    t92 = ((x369^x370)*(x371!=x372));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x373 = INT64_MIN;
	volatile int8_t x374 = -1;
	volatile int8_t x375 = -1;
	static volatile int64_t t93 = INT64_MAX;

    t93 = ((x373^x374)*(x375!=x376));

    if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x377 = 0LLU;
	static int32_t x378 = INT32_MIN;
	int16_t x379 = 3;
	int16_t x380 = -137;
	uint64_t t94 = 7049LLU;

    t94 = ((x377^x378)*(x379!=x380));

    if (t94 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = 50U;
	uint16_t x382 = 6U;
	volatile int32_t t95 = -1;

    t95 = ((x381^x382)*(x383!=x384));

    if (t95 != 52) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x387 = 1480U;
	volatile int16_t x388 = -5;

    t96 = ((x385^x386)*(x387!=x388));

    if (t96 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x389 = 199U;
	volatile int64_t x391 = INT64_MAX;
	int8_t x392 = -16;
	int32_t t97 = -41;

    t97 = ((x389^x390)*(x391!=x392));

    if (t97 != 197) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -1;
	int64_t x394 = INT64_MAX;
	int8_t x395 = INT8_MIN;
	static int64_t t98 = INT64_MIN;

    t98 = ((x393^x394)*(x395!=x396));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = 0;
	uint16_t x398 = 240U;
	int8_t x400 = INT8_MAX;

    t99 = ((x397^x398)*(x399!=x400));

    if (t99 != 240) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = INT64_MIN;
	volatile uint64_t x403 = 1800LLU;
	static volatile int64_t x404 = 24366790LL;

    t100 = ((x401^x402)*(x403!=x404));

    if (t100 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x406 = 51;
	static volatile int64_t x407 = INT64_MAX;
	int16_t x408 = INT16_MIN;

    t101 = ((x405^x406)*(x407!=x408));

    if (t101 != -2147483597) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x409 = -1;
	int64_t x410 = INT64_MIN;
	volatile int32_t x412 = INT32_MIN;
	volatile int64_t t102 = INT64_MAX;

    t102 = ((x409^x410)*(x411!=x412));

    if (t102 != INT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x414 = 26;
	static int64_t x415 = -969203988104LL;
	int16_t x416 = 10762;

    t103 = ((x413^x414)*(x415!=x416));

    if (t103 != 1373457959LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MAX;
	int32_t x418 = INT32_MIN;
	volatile int8_t x419 = INT8_MIN;
	volatile int8_t x420 = INT8_MAX;
	int32_t t104 = 138117;

    t104 = ((x417^x418)*(x419!=x420));

    if (t104 != -2147450881) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	uint16_t x422 = UINT16_MAX;
	int32_t x423 = 1;
	int16_t x424 = -1;
	volatile int64_t t105 = -3261LL;

    t105 = ((x421^x422)*(x423!=x424));

    if (t105 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = 1;
	static int64_t x426 = 476994LL;
	volatile int64_t x427 = -351120159LL;
	static uint64_t x428 = UINT64_MAX;
	static int64_t t106 = 28530634978966822LL;

    t106 = ((x425^x426)*(x427!=x428));

    if (t106 != 476995LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x431 = INT32_MIN;
	uint8_t x432 = 0U;
	volatile int64_t t107 = 563798796329491896LL;

    t107 = ((x429^x430)*(x431!=x432));

    if (t107 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = -1;
	int64_t x434 = INT64_MIN;
	volatile int16_t x435 = -1;
	volatile int64_t t108 = INT64_MAX;

    t108 = ((x433^x434)*(x435!=x436));

    if (t108 != INT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -1;
	int64_t x438 = INT64_MAX;
	int64_t x440 = INT64_MIN;
	int64_t t109 = INT64_MIN;

    t109 = ((x437^x438)*(x439!=x440));

    if (t109 != INT64_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = UINT8_MAX;
	int64_t x442 = INT64_MIN;
	uint16_t x443 = UINT16_MAX;
	int64_t t110 = -1946LL;

    t110 = ((x441^x442)*(x443!=x444));

    if (t110 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = UINT16_MAX;
	volatile int32_t x446 = INT32_MIN;
	int32_t x447 = -1;
	int8_t x448 = INT8_MIN;
	static int32_t t111 = 96;

    t111 = ((x445^x446)*(x447!=x448));

    if (t111 != -2147418113) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = -1LL;
	int16_t x450 = INT16_MIN;
	uint16_t x451 = 27U;
	volatile int64_t x452 = INT64_MIN;
	volatile int64_t t112 = -1LL;

    t112 = ((x449^x450)*(x451!=x452));

    if (t112 != 32767LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	int16_t x455 = -1;
	uint64_t x456 = 6598176454552996452LLU;
	volatile int32_t t113 = 6;

    t113 = ((x453^x454)*(x455!=x456));

    if (t113 != 1950) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x457 = 7662U;
	static int64_t x458 = INT64_MIN;
	volatile uint64_t x459 = UINT64_MAX;
	int32_t x460 = INT32_MIN;
	int64_t t114 = -187855785LL;

    t114 = ((x457^x458)*(x459!=x460));

    if (t114 != -9223372036854768146LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x463 = UINT64_MAX;
	uint16_t x464 = UINT16_MAX;

    t115 = ((x461^x462)*(x463!=x464));

    if (t115 != 32767) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x466 = INT16_MIN;
	static int8_t x467 = -10;
	uint32_t t116 = 895947349U;

    t116 = ((x465^x466)*(x467!=x468));

    if (t116 != 4294934528U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 4302913U;
	uint64_t x470 = 1LLU;
	int64_t x471 = INT64_MIN;
	int16_t x472 = -96;
	uint64_t t117 = 0LLU;

    t117 = ((x469^x470)*(x471!=x472));

    if (t117 != 4302912LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x473 = INT16_MAX;
	int64_t x474 = INT64_MIN;
	volatile uint16_t x475 = 0U;
	volatile int64_t t118 = 7088883825LL;

    t118 = ((x473^x474)*(x475!=x476));

    if (t118 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = -22;
	int8_t x478 = INT8_MIN;
	int16_t x479 = INT16_MAX;
	uint8_t x480 = 0U;
	int32_t t119 = 24;

    t119 = ((x477^x478)*(x479!=x480));

    if (t119 != 106) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	int64_t x482 = INT64_MAX;
	static uint64_t x483 = 29118LLU;

    t120 = ((x481^x482)*(x483!=x484));

    if (t120 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x486 = 12493U;
	int16_t x487 = -3;
	uint32_t t121 = 349975350U;

    t121 = ((x485^x486)*(x487!=x488));

    if (t121 != 1603265U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MAX;
	static int16_t x490 = -1;
	uint32_t x491 = 715181582U;

    t122 = ((x489^x490)*(x491!=x492));

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x494 = -29;
	int32_t x495 = INT32_MIN;
	uint64_t t123 = 968473693015361579LLU;

    t123 = ((x493^x494)*(x495!=x496));

    if (t123 != 28LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x497 = 69U;
	int32_t x498 = 127;
	static int64_t x500 = -1LL;
	volatile int32_t t124 = -44343;

    t124 = ((x497^x498)*(x499!=x500));

    if (t124 != 58) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = 19753839;
	int32_t x502 = INT32_MIN;
	int32_t x503 = INT32_MIN;
	static int16_t x504 = INT16_MIN;
	volatile int32_t t125 = 0;

    t125 = ((x501^x502)*(x503!=x504));

    if (t125 != -2127729809) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MAX;
	static uint8_t x506 = 9U;
	uint16_t x507 = UINT16_MAX;
	int64_t t126 = -80415294328087400LL;

    t126 = ((x505^x506)*(x507!=x508));

    if (t126 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x510 = -1;
	static uint32_t x511 = 100U;
	static uint16_t x512 = 3312U;
	static volatile int32_t t127 = 1;

    t127 = ((x509^x510)*(x511!=x512));

    if (t127 != -65536) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MAX;
	volatile int8_t x515 = 62;

    t128 = ((x513^x514)*(x515!=x516));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x517 = 125U;
	int8_t x519 = -1;
	static volatile int64_t t129 = 0LL;

    t129 = ((x517^x518)*(x519!=x520));

    if (t129 != -126LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x521 = 24611U;
	static int16_t x522 = INT16_MIN;
	int64_t x523 = -432347640768LL;
	volatile uint64_t x524 = UINT64_MAX;
	volatile int32_t t130 = -3567739;

    t130 = ((x521^x522)*(x523!=x524));

    if (t130 != -8157) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint16_t x525 = UINT16_MAX;
	int32_t x527 = 16364550;
	static volatile uint64_t t131 = 53558896LLU;

    t131 = ((x525^x526)*(x527!=x528));

    if (t131 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = -35;
	static int32_t x530 = -1;
	volatile int64_t x531 = INT64_MIN;
	uint8_t x532 = UINT8_MAX;
	volatile int32_t t132 = 192397;

    t132 = ((x529^x530)*(x531!=x532));

    if (t132 != 34) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MIN;
	int32_t x534 = -1;
	uint16_t x536 = 178U;
	static volatile int32_t t133 = 626;

    t133 = ((x533^x534)*(x535!=x536));

    if (t133 != 32767) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MIN;
	uint64_t x538 = 23529892571LLU;
	uint32_t x539 = 42880U;
	uint64_t t134 = 2837306858909LLU;

    t134 = ((x537^x538)*(x539!=x540));

    if (t134 != 9223372060384668379LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = -30LL;
	volatile int8_t x542 = INT8_MAX;
	volatile int64_t t135 = 46720748062016LL;

    t135 = ((x541^x542)*(x543!=x544));

    if (t135 != -99LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x546 = 4449;
	volatile int8_t x547 = 2;
	static int32_t x548 = -209;
	int32_t t136 = 2;

    t136 = ((x545^x546)*(x547!=x548));

    if (t136 != -28319) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x549 = 7905U;
	int8_t x550 = -1;
	uint16_t x551 = UINT16_MAX;
	static int64_t x552 = -1LL;
	volatile uint32_t t137 = 3U;

    t137 = ((x549^x550)*(x551!=x552));

    if (t137 != 4294959390U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = -1;
	uint64_t x554 = 383427815306LLU;
	int8_t x555 = INT8_MAX;
	volatile uint64_t t138 = 2422655047829837233LLU;

    t138 = ((x553^x554)*(x555!=x556));

    if (t138 != 18446743690281736309LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x558 = INT16_MIN;
	volatile int16_t x560 = INT16_MIN;
	int64_t t139 = 4076LL;

    t139 = ((x557^x558)*(x559!=x560));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = 922U;
	uint16_t x562 = 33U;
	static int8_t x563 = -1;
	int16_t x564 = INT16_MIN;
	int32_t t140 = 23568368;

    t140 = ((x561^x562)*(x563!=x564));

    if (t140 != 955) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x565 = -14;
	int64_t x566 = INT64_MIN;
	static volatile uint32_t x567 = 60U;
	static uint8_t x568 = 63U;
	volatile int64_t t141 = -76246317196768LL;

    t141 = ((x565^x566)*(x567!=x568));

    if (t141 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x570 = -1;
	static int64_t x571 = INT64_MIN;
	int16_t x572 = -6;
	static int32_t t142 = 108;

    t142 = ((x569^x570)*(x571!=x572));

    if (t142 != -10153) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = -7;
	static volatile int64_t x574 = 499960092659044152LL;
	int16_t x575 = -1;
	volatile int64_t t143 = -387LL;

    t143 = ((x573^x574)*(x575!=x576));

    if (t143 != -499960092659044159LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = UINT32_MAX;
	int64_t x580 = INT64_MIN;
	volatile int64_t t144 = -1093621098LL;

    t144 = ((x577^x578)*(x579!=x580));

    if (t144 != 525212315924LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MAX;
	volatile int16_t x583 = INT16_MAX;
	int32_t t145 = -593;

    t145 = ((x581^x582)*(x583!=x584));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = -8;
	int32_t x586 = -1;
	int32_t x587 = INT32_MAX;
	static int8_t x588 = INT8_MIN;
	int32_t t146 = -115798;

    t146 = ((x585^x586)*(x587!=x588));

    if (t146 != 7) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = 10273303663407LLU;
	int8_t x592 = -1;
	volatile uint64_t t147 = 701241064424LLU;

    t147 = ((x589^x590)*(x591!=x592));

    if (t147 != 18446730994157453413LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x594 = 4359;
	int64_t x596 = INT64_MAX;
	volatile uint32_t t148 = 193838U;

    t148 = ((x593^x594)*(x595!=x596));

    if (t148 != 4850U) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -134;
	int16_t x598 = -1;
	int64_t x600 = -1LL;
	static volatile int32_t t149 = -2081;

    t149 = ((x597^x598)*(x599!=x600));

    if (t149 != 133) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = 1U;
	int32_t x602 = INT32_MIN;
	int8_t x603 = -1;
	int64_t x604 = -3655733LL;
	int32_t t150 = -173476554;

    t150 = ((x601^x602)*(x603!=x604));

    if (t150 != -2147483647) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x606 = UINT32_MAX;
	uint32_t x607 = UINT32_MAX;
	static uint8_t x608 = UINT8_MAX;
	volatile int64_t t151 = -521102497325LL;

    t151 = ((x605^x606)*(x607!=x608));

    if (t151 != -4294967296LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x609 = 141029468457311627LLU;
	int64_t x610 = INT64_MAX;
	volatile int16_t x611 = INT16_MIN;
	int32_t x612 = -1372;
	static uint64_t t152 = 430LLU;

    t152 = ((x609^x610)*(x611!=x612));

    if (t152 != 9082342568397464180LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	static int64_t x614 = -1180LL;
	int32_t x615 = -760401;
	volatile int64_t t153 = 753333870LL;

    t153 = ((x613^x614)*(x615!=x616));

    if (t153 != 9223372036854774628LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x620 = -10822949LL;
	int64_t t154 = 1985019654553678LL;

    t154 = ((x617^x618)*(x619!=x620));

    if (t154 != -128LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x623 = INT16_MIN;
	int8_t x624 = -1;
	int64_t t155 = -73150817026260LL;

    t155 = ((x621^x622)*(x623!=x624));

    if (t155 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -1;
	static uint64_t x626 = 116476793LLU;
	static uint32_t x627 = UINT32_MAX;
	int32_t x628 = -1;
	volatile uint64_t t156 = 32877658443173208LLU;

    t156 = ((x625^x626)*(x627!=x628));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x629 = 5838U;
	volatile int32_t x630 = INT32_MIN;
	volatile int8_t x631 = INT8_MIN;
	int32_t x632 = 81480;
	static volatile uint32_t t157 = 1150924637U;

    t157 = ((x629^x630)*(x631!=x632));

    if (t157 != 2147489486U) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x633 = UINT8_MAX;
	int32_t x634 = INT32_MAX;
	volatile int64_t x635 = -1LL;
	static volatile uint64_t x636 = UINT64_MAX;
	volatile int32_t t158 = 217189;

    t158 = ((x633^x634)*(x635!=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 1U;
	static uint16_t x638 = UINT16_MAX;
	int64_t x639 = INT64_MIN;
	uint32_t t159 = 7U;

    t159 = ((x637^x638)*(x639!=x640));

    if (t159 != 65534U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = 15;
	int16_t x642 = -1004;
	int16_t x644 = INT16_MIN;
	int32_t t160 = 8021558;

    t160 = ((x641^x642)*(x643!=x644));

    if (t160 != -997) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x646 = 4696U;
	static uint16_t x647 = 0U;
	uint16_t x648 = 34U;
	uint32_t t161 = 2349882U;

    t161 = ((x645^x646)*(x647!=x648));

    if (t161 != 2147488344U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MAX;
	int32_t x650 = INT32_MIN;
	int64_t x651 = INT64_MIN;
	volatile int16_t x652 = -1;
	int32_t t162 = -1021;

    t162 = ((x649^x650)*(x651!=x652));

    if (t162 != -2147450881) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = -1;
	volatile uint32_t x654 = 31U;
	int16_t x655 = 17;
	int8_t x656 = 21;
	volatile uint32_t t163 = 12338U;

    t163 = ((x653^x654)*(x655!=x656));

    if (t163 != 4294967264U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x659 = 1141247648997LLU;
	int64_t x660 = -8LL;
	static uint32_t t164 = 176122336U;

    t164 = ((x657^x658)*(x659!=x660));

    if (t164 != 3289172U) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x663 = 0;
	volatile int16_t x664 = INT16_MIN;
	volatile int32_t t165 = -84;

    t165 = ((x661^x662)*(x663!=x664));

    if (t165 != -23623) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x665 = INT8_MIN;
	static int16_t x666 = -1;
	uint32_t x667 = 4221118U;
	volatile int64_t x668 = 34396742247312LL;
	volatile int32_t t166 = 69928089;

    t166 = ((x665^x666)*(x667!=x668));

    if (t166 != 127) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 6U;
	int64_t x671 = INT64_MIN;
	volatile int32_t x672 = INT32_MIN;
	int64_t t167 = -2500747LL;

    t167 = ((x669^x670)*(x671!=x672));

    if (t167 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x674 = -1LL;
	int16_t x676 = INT16_MIN;
	volatile uint64_t t168 = 36899896LLU;

    t168 = ((x673^x674)*(x675!=x676));

    if (t168 != 18446744073709512874LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int16_t x678 = 0;
	static uint64_t x679 = UINT64_MAX;
	uint64_t x680 = 130343870684042091LLU;
	volatile int32_t t169 = -871571;

    t169 = ((x677^x678)*(x679!=x680));

    if (t169 != 127) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x681 = -1;
	int16_t x682 = -1;
	static uint64_t x683 = UINT64_MAX;
	static volatile int32_t t170 = 0;

    t170 = ((x681^x682)*(x683!=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x685 = 91767371007312LLU;
	volatile int8_t x686 = -1;
	uint64_t x687 = UINT64_MAX;
	volatile uint64_t t171 = 88830022406LLU;

    t171 = ((x685^x686)*(x687!=x688));

    if (t171 != 18446652306338544303LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = UINT16_MAX;
	volatile int64_t x690 = INT64_MIN;
	int32_t x691 = 6;
	int8_t x692 = INT8_MIN;
	volatile int64_t t172 = 271862432808145LL;

    t172 = ((x689^x690)*(x691!=x692));

    if (t172 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x694 = INT64_MAX;
	uint16_t x695 = UINT16_MAX;
	static int8_t x696 = INT8_MIN;

    t173 = ((x693^x694)*(x695!=x696));

    if (t173 != -9223372036854775348LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x697 = -2091784062452LL;
	int16_t x698 = INT16_MIN;
	int64_t x699 = INT64_MAX;
	int64_t x700 = -1LL;
	int64_t t174 = -12LL;

    t174 = ((x697^x698)*(x699!=x700));

    if (t174 != 2091784059404LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x701 = INT16_MIN;
	static int8_t x702 = -45;
	int8_t x704 = -1;
	int32_t t175 = 1720890;

    t175 = ((x701^x702)*(x703!=x704));

    if (t175 != 32723) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = -1LL;
	int64_t x706 = -1LL;
	volatile uint32_t x707 = UINT32_MAX;
	static uint32_t x708 = UINT32_MAX;
	static volatile int64_t t176 = -934437985550578866LL;

    t176 = ((x705^x706)*(x707!=x708));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x709 = -2;
	volatile int32_t x711 = INT32_MAX;
	volatile uint8_t x712 = 7U;
	int32_t t177 = -29772;

    t177 = ((x709^x710)*(x711!=x712));

    if (t177 != -17) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = -1LL;
	uint8_t x714 = UINT8_MAX;
	uint16_t x715 = 4365U;
	volatile int32_t x716 = INT32_MIN;
	volatile int64_t t178 = -256026LL;

    t178 = ((x713^x714)*(x715!=x716));

    if (t178 != -256LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x717 = 377347080;
	int8_t x718 = 0;
	static uint16_t x720 = 101U;
	volatile int32_t t179 = 2697;

    t179 = ((x717^x718)*(x719!=x720));

    if (t179 != 377347080) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 2021LLU;
	static uint8_t x722 = 77U;
	int8_t x723 = INT8_MIN;
	uint16_t x724 = 11209U;
	static uint64_t t180 = 2999105540609378619LLU;

    t180 = ((x721^x722)*(x723!=x724));

    if (t180 != 1960LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int16_t x725 = 203;
	volatile int32_t x726 = -1;
	int64_t x728 = INT64_MAX;
	int32_t t181 = -15918;

    t181 = ((x725^x726)*(x727!=x728));

    if (t181 != -204) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x729 = INT16_MIN;
	static volatile int64_t x730 = INT64_MIN;
	int32_t x732 = -794711;
	volatile int64_t t182 = -68620629375456LL;

    t182 = ((x729^x730)*(x731!=x732));

    if (t182 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x735 = 25LL;
	uint64_t x736 = 1009447785067687LLU;
	volatile int32_t t183 = -866769;

    t183 = ((x733^x734)*(x735!=x736));

    if (t183 != -65536) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MAX;
	static int8_t x738 = -1;
	uint16_t x739 = UINT16_MAX;
	volatile uint32_t x740 = UINT32_MAX;
	static int32_t t184 = 226;

    t184 = ((x737^x738)*(x739!=x740));

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -1;
	static uint64_t x742 = 1738883939270488972LLU;
	uint64_t x743 = 6161849363015089366LLU;
	int8_t x744 = -1;
	uint64_t t185 = 3749422704704409806LLU;

    t185 = ((x741^x742)*(x743!=x744));

    if (t185 != 16707860134439062643LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MIN;
	uint8_t x746 = 0U;
	int32_t x747 = INT32_MIN;
	static volatile int32_t x748 = INT32_MIN;
	volatile int32_t t186 = -32156511;

    t186 = ((x745^x746)*(x747!=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MIN;
	int32_t x750 = -1;
	int32_t x751 = 0;
	volatile int16_t x752 = -38;
	static volatile int64_t t187 = INT64_MAX;

    t187 = ((x749^x750)*(x751!=x752));

    if (t187 != INT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x753 = 2;
	int8_t x755 = -2;
	uint32_t x756 = 258768795U;
	volatile int32_t t188 = 32;

    t188 = ((x753^x754)*(x755!=x756));

    if (t188 != 253) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MIN;
	static int16_t x758 = INT16_MIN;
	static uint8_t x759 = 7U;
	static int32_t t189 = 6;

    t189 = ((x757^x758)*(x759!=x760));

    if (t189 != 2147450880) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x761 = 40991U;
	uint16_t x762 = 9U;
	static volatile int16_t x763 = -111;
	uint16_t x764 = UINT16_MAX;

    t190 = ((x761^x762)*(x763!=x764));

    if (t190 != 40982U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x766 = UINT64_MAX;
	volatile int64_t x768 = -23873920910299830LL;

    t191 = ((x765^x766)*(x767!=x768));

    if (t191 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MAX;
	volatile uint64_t x770 = 267471LLU;
	static int8_t x771 = -1;
	volatile int32_t x772 = INT32_MIN;

    t192 = ((x769^x770)*(x771!=x772));

    if (t192 != 267440LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x775 = INT16_MIN;
	int32_t x776 = 585367;
	volatile int32_t t193 = 275314655;

    t193 = ((x773^x774)*(x775!=x776));

    if (t193 != 32767) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x777 = 7814U;
	int16_t x778 = INT16_MAX;
	int8_t x780 = INT8_MAX;

    t194 = ((x777^x778)*(x779!=x780));

    if (t194 != 24953U) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x781 = 184938517U;
	volatile int32_t x782 = -1;
	uint32_t x783 = UINT32_MAX;
	int64_t x784 = -1LL;
	uint32_t t195 = 16383U;

    t195 = ((x781^x782)*(x783!=x784));

    if (t195 != 4110028778U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 304560124LLU;
	volatile uint32_t x786 = 1U;
	uint64_t x787 = 38860LLU;
	int64_t x788 = INT64_MIN;

    t196 = ((x785^x786)*(x787!=x788));

    if (t196 != 304560125LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = UINT16_MAX;
	uint16_t x790 = 22U;
	int64_t x791 = INT64_MAX;
	volatile int32_t t197 = 7194;

    t197 = ((x789^x790)*(x791!=x792));

    if (t197 != 65513) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x793 = INT32_MIN;
	volatile int8_t x794 = INT8_MAX;
	int64_t x795 = -1LL;
	static int16_t x796 = INT16_MIN;

    t198 = ((x793^x794)*(x795!=x796));

    if (t198 != -2147483521) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x797 = UINT16_MAX;
	int64_t x798 = -1LL;
	static int64_t x799 = INT64_MIN;

    t199 = ((x797^x798)*(x799!=x800));

    if (t199 != -65536LL) { NG(); } else { ; }
	
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

