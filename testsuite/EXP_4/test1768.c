
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

static int16_t x10 = INT16_MAX;
int32_t t3 = 1017;
int32_t x23 = -1;
static uint32_t x27 = UINT32_MAX;
int32_t t5 = -351864;
int64_t x31 = -3LL;
uint32_t x45 = 145715U;
volatile int16_t x46 = INT16_MIN;
uint8_t x53 = 28U;
uint16_t x58 = UINT16_MAX;
int16_t x59 = 3;
int16_t x61 = -1;
uint32_t x63 = UINT32_MAX;
uint16_t x72 = 3U;
volatile int32_t x81 = INT32_MAX;
int8_t x85 = -3;
int32_t t18 = -1;
volatile int8_t x99 = INT8_MIN;
uint16_t x100 = UINT16_MAX;
static int64_t x110 = INT64_MIN;
int16_t x124 = -14975;
int32_t x126 = -2015;
uint64_t x134 = 3649LLU;
int64_t x136 = 357666936LL;
volatile int64_t x138 = -1LL;
static int8_t x144 = INT8_MIN;
static uint8_t x154 = UINT8_MAX;
int64_t x160 = INT64_MIN;
static int16_t x171 = 7;
static uint8_t x177 = UINT8_MAX;
volatile uint32_t x178 = 1188805U;
int64_t x186 = -1737758LL;
int64_t x187 = -1LL;
volatile int64_t t40 = -5LL;
int16_t x198 = INT16_MIN;
int16_t x199 = -87;
static int64_t x206 = INT64_MIN;
uint64_t t44 = 34LLU;
int8_t x212 = INT8_MIN;
static volatile int8_t x215 = 13;
int32_t x225 = -1;
static int8_t x226 = INT8_MAX;
int32_t x230 = 2;
int16_t x239 = INT16_MIN;
int64_t x240 = INT64_MIN;
int16_t x241 = -1;
int16_t x245 = INT16_MIN;
static uint64_t x247 = 3700643032371506LLU;
int16_t x252 = INT16_MAX;
int32_t x254 = -1;
uint16_t x256 = 0U;
int64_t t53 = -627507972210478805LL;
uint16_t x259 = UINT16_MAX;
int64_t t54 = 2930LL;
uint64_t x261 = 781983103279358022LLU;
int64_t x264 = 185420671450607LL;
int64_t x280 = -1LL;
volatile int32_t t58 = 7;
volatile uint64_t t59 = 59648LLU;
int16_t x293 = INT16_MIN;
int32_t x296 = -1;
int64_t x297 = 36LL;
int32_t x300 = 10781;
static volatile int64_t t61 = -1414490LL;
int64_t t62 = -46537866722283377LL;
int64_t x311 = -1LL;
int64_t t64 = 1443407LL;
uint32_t x319 = 6254U;
static int64_t t65 = -7560340408427LL;
int16_t x341 = INT16_MIN;
static uint16_t x347 = 25U;
int32_t x350 = INT32_MIN;
static int64_t x365 = INT64_MIN;
static uint8_t x369 = UINT8_MAX;
static volatile uint64_t x372 = 228179751364473LLU;
int64_t x385 = INT64_MAX;
static int64_t t78 = -422LL;
uint16_t x392 = 29U;
int64_t x401 = INT64_MIN;
static volatile int64_t t82 = -1064773305070319994LL;
uint8_t x409 = 26U;
int8_t x411 = 1;
uint32_t x415 = 137428054U;
int16_t x420 = -1;
static volatile int16_t x426 = INT16_MIN;
volatile int32_t t88 = -305868;
volatile uint8_t x441 = 73U;
int8_t x446 = INT8_MIN;
static volatile int16_t x448 = -1209;
int64_t t93 = -95268527353LL;
uint16_t x454 = UINT16_MAX;
volatile uint32_t x455 = UINT32_MAX;
int16_t x467 = INT16_MAX;
volatile int32_t t99 = -14216789;
volatile int16_t x483 = -1;
int16_t x486 = INT16_MAX;
uint64_t t103 = 452944089052991LLU;
int8_t x496 = INT8_MAX;
int64_t t104 = 475113722037586LL;
int32_t x499 = INT32_MIN;
volatile int32_t t105 = -1939478;
int32_t x505 = -1;
int8_t x511 = INT8_MAX;
int16_t x524 = INT16_MAX;
static int64_t x528 = -1LL;
uint64_t t111 = UINT64_MAX;
volatile int32_t t113 = 10822635;
uint16_t x538 = 4632U;
uint16_t x541 = UINT16_MAX;
int64_t x542 = -1498818648809541LL;
static int32_t x543 = -1;
int32_t x546 = INT32_MIN;
int16_t x547 = -1;
volatile int16_t x549 = -1;
static volatile int32_t x550 = 1518281;
int16_t x558 = 239;
uint16_t x561 = 2090U;
uint64_t x563 = 19147LLU;
int32_t t120 = 142419;
static int8_t x573 = INT8_MAX;
static volatile int64_t x583 = INT64_MAX;
static int64_t x586 = 100047028333378LL;
int32_t t125 = -681324;
int64_t x607 = -1LL;
static int64_t x608 = 245677187002484LL;
volatile uint32_t t129 = 35U;
int16_t x611 = -1;
static int16_t x612 = -64;
int16_t x622 = 286;
volatile uint64_t t132 = 5266602210LLU;
int32_t x625 = 122882;
volatile uint64_t t134 = 496186389312658042LLU;
uint32_t x634 = 1228U;
uint32_t x645 = 746560U;
volatile int16_t x646 = 1;
uint64_t x653 = UINT64_MAX;
int32_t x654 = 56;
static volatile uint16_t x657 = 0U;
uint8_t x663 = UINT8_MAX;
uint32_t x668 = UINT32_MAX;
static int16_t x672 = INT16_MAX;
static int32_t x675 = -1;
volatile int64_t x683 = -35385619369493858LL;
uint16_t x684 = UINT16_MAX;
int64_t x687 = -451223LL;
volatile int32_t x688 = INT32_MAX;
int32_t x695 = INT32_MIN;
uint64_t x696 = UINT64_MAX;
uint16_t x707 = 0U;
uint32_t x710 = 9857U;
uint8_t x711 = 3U;
static uint32_t x718 = 6432289U;
volatile int8_t x722 = INT8_MIN;
int32_t t155 = 14;
int32_t x730 = INT32_MIN;
volatile int16_t x732 = INT16_MIN;
volatile int16_t x735 = 87;
volatile int32_t x738 = INT32_MIN;
static volatile int8_t x740 = 22;
volatile int32_t t158 = -317795;
int8_t x744 = -13;
volatile uint64_t x749 = UINT64_MAX;
volatile int16_t x753 = INT16_MAX;
int16_t x757 = -1;
uint32_t x760 = 115U;
uint32_t x770 = 3339U;
static int16_t x771 = INT16_MAX;
int8_t x781 = INT8_MIN;
int64_t x782 = -1LL;
int8_t x784 = INT8_MIN;
int16_t x791 = 7;
int16_t x797 = 28;
int64_t x799 = 11816824234LL;
volatile int32_t t170 = -85;
int32_t x805 = INT32_MIN;
static volatile int32_t t171 = 351375;
uint16_t x818 = UINT16_MAX;
uint64_t t174 = 489811415245326LLU;
volatile uint64_t t175 = 526677088LLU;
uint32_t x829 = 14770U;
int64_t x830 = -1LL;
volatile uint32_t x832 = 117912U;
volatile int64_t t176 = -4557127LL;
int8_t x833 = -1;
int64_t x840 = INT64_MIN;
int16_t x842 = INT16_MIN;
static volatile int16_t x843 = 0;
int8_t x845 = 0;
static volatile int64_t x847 = INT64_MIN;
static uint64_t x848 = 6LLU;
uint64_t t180 = 348955203534293650LLU;
static uint64_t x873 = UINT64_MAX;
int64_t x878 = INT64_MIN;
int32_t x882 = INT32_MIN;
int32_t x893 = -1;
static volatile int64_t x898 = INT64_MIN;
volatile int64_t t191 = -561LL;
int8_t x901 = 2;
uint16_t x903 = 31299U;
static int32_t t192 = -526502216;
uint32_t x905 = 288759U;
uint32_t t193 = 5U;
int16_t x909 = INT16_MIN;
int16_t x910 = INT16_MAX;
int8_t x911 = -1;
volatile int8_t x916 = -3;
uint32_t x917 = 5U;
int32_t t197 = -555158;
uint8_t x925 = 4U;


void f0(void) {
    	uint8_t x5 = 4U;
	int32_t x6 = -1;
	static uint64_t x7 = 478637870551LLU;
	volatile int8_t x8 = INT8_MAX;
	int32_t t0 = 32360198;

    t0 = (x5/(x6+(x7<=x8)));

    if (t0 != -4) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = 3;
	int64_t x11 = INT64_MIN;
	int8_t x12 = INT8_MIN;
	volatile int32_t t1 = -13936;

    t1 = (x9/(x10+(x11<=x12)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x13 = UINT32_MAX;
	int32_t x14 = 246005706;
	int32_t x15 = 187;
	volatile uint8_t x16 = UINT8_MAX;
	static uint32_t t2 = 42216U;

    t2 = (x13/(x14+(x15<=x16)));

    if (t2 != 17U) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int16_t x17 = -1;
	volatile uint16_t x18 = 17665U;
	int16_t x19 = -1;
	int64_t x20 = -15783410489309LL;

    t3 = (x17/(x18+(x19<=x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x21 = -65;
	int32_t x22 = -1435240;
	uint32_t x24 = 51616U;
	static int32_t t4 = -207561668;

    t4 = (x21/(x22+(x23<=x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x25 = 3U;
	int16_t x26 = INT16_MIN;
	static int64_t x28 = -1LL;

    t5 = (x25/(x26+(x27<=x28)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = 1;
	int64_t x30 = 207448421823LL;
	volatile int8_t x32 = INT8_MAX;
	int64_t t6 = -51497LL;

    t6 = (x29/(x30+(x31<=x32)));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x33 = 1U;
	int8_t x34 = 0;
	int8_t x35 = -1;
	uint8_t x36 = UINT8_MAX;
	int32_t t7 = -1;

    t7 = (x33/(x34+(x35<=x36)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x41 = 147U;
	uint64_t x42 = 338163565889783081LLU;
	volatile int32_t x43 = INT32_MIN;
	volatile uint16_t x44 = 289U;
	static uint64_t t8 = 351876806LLU;

    t8 = (x41/(x42+(x43<=x44)));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x47 = -1;
	static uint16_t x48 = 6U;
	uint32_t t9 = 5227711U;

    t9 = (x45/(x46+(x47<=x48)));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = INT16_MIN;
	static int16_t x50 = 12187;
	static int16_t x51 = INT16_MAX;
	volatile uint32_t x52 = 610U;
	int32_t t10 = -5745653;

    t10 = (x49/(x50+(x51<=x52)));

    if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x54 = INT64_MIN;
	int8_t x55 = INT8_MIN;
	volatile int64_t x56 = INT64_MIN;
	volatile int64_t t11 = -250747030699410LL;

    t11 = (x53/(x54+(x55<=x56)));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x57 = 57981LLU;
	volatile uint16_t x60 = 2U;
	static volatile uint64_t t12 = 3503566483458945LLU;

    t12 = (x57/(x58+(x59<=x60)));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint32_t x62 = 7907983U;
	static volatile int8_t x64 = INT8_MIN;
	volatile uint32_t t13 = 674U;

    t13 = (x61/(x62+(x63<=x64)));

    if (t13 != 543U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x69 = INT64_MAX;
	static int8_t x70 = -11;
	static volatile uint32_t x71 = UINT32_MAX;
	int64_t t14 = -198629373600114LL;

    t14 = (x69/(x70+(x71<=x72)));

    if (t14 != -838488366986797800LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x73 = -1;
	int16_t x74 = INT16_MAX;
	uint32_t x75 = 430285500U;
	uint64_t x76 = 1099612563964906127LLU;
	int32_t t15 = -567411;

    t15 = (x73/(x74+(x75<=x76)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = -1;
	int8_t x78 = INT8_MAX;
	static int16_t x79 = INT16_MIN;
	static int16_t x80 = -3764;
	static int32_t t16 = -96;

    t16 = (x77/(x78+(x79<=x80)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x82 = -2;
	static volatile uint8_t x83 = 21U;
	int16_t x84 = -1;
	int32_t t17 = -2;

    t17 = (x81/(x82+(x83<=x84)));

    if (t17 != -1073741823) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x86 = INT8_MAX;
	uint64_t x87 = UINT64_MAX;
	int64_t x88 = INT64_MIN;

    t18 = (x85/(x86+(x87<=x88)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x89 = 33U;
	int16_t x90 = INT16_MIN;
	volatile int16_t x91 = INT16_MAX;
	int8_t x92 = INT8_MAX;
	volatile int32_t t19 = 539;

    t19 = (x89/(x90+(x91<=x92)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x93 = INT16_MAX;
	int8_t x94 = INT8_MIN;
	uint16_t x95 = UINT16_MAX;
	volatile int32_t x96 = 435162;
	int32_t t20 = 161443409;

    t20 = (x93/(x94+(x95<=x96)));

    if (t20 != -258) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x97 = INT16_MAX;
	volatile int64_t x98 = INT64_MIN;
	volatile int64_t t21 = -135842LL;

    t21 = (x97/(x98+(x99<=x100)));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x101 = 51U;
	int32_t x102 = 1;
	static int16_t x103 = -1;
	volatile int16_t x104 = 0;
	uint32_t t22 = 12071352U;

    t22 = (x101/(x102+(x103<=x104)));

    if (t22 != 25U) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x105 = INT16_MIN;
	static uint8_t x106 = UINT8_MAX;
	uint8_t x107 = 113U;
	volatile int16_t x108 = -1;
	volatile int32_t t23 = -143445;

    t23 = (x105/(x106+(x107<=x108)));

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = INT32_MIN;
	uint32_t x111 = 1059U;
	int8_t x112 = 1;
	volatile int64_t t24 = 143295680306090LL;

    t24 = (x109/(x110+(x111<=x112)));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x113 = INT32_MAX;
	uint16_t x114 = UINT16_MAX;
	volatile uint16_t x115 = 1U;
	static int64_t x116 = -1LL;
	volatile int32_t t25 = 6;

    t25 = (x113/(x114+(x115<=x116)));

    if (t25 != 32768) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x117 = INT32_MIN;
	uint8_t x118 = UINT8_MAX;
	static uint8_t x119 = UINT8_MAX;
	uint64_t x120 = 45159603LLU;
	int32_t t26 = -195589388;

    t26 = (x117/(x118+(x119<=x120)));

    if (t26 != -8388608) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x121 = 1U;
	volatile int32_t x122 = INT32_MIN;
	int16_t x123 = -10012;
	uint32_t t27 = 1179042518U;

    t27 = (x121/(x122+(x123<=x124)));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x125 = 230954194166LLU;
	static int8_t x127 = 3;
	int8_t x128 = 10;
	uint64_t t28 = 481185LLU;

    t28 = (x125/(x126+(x127<=x128)));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x129 = UINT64_MAX;
	int8_t x130 = -1;
	static uint8_t x131 = 2U;
	int32_t x132 = INT32_MIN;
	static uint64_t t29 = 2931741117LLU;

    t29 = (x129/(x130+(x131<=x132)));

    if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x133 = 62;
	static int8_t x135 = INT8_MAX;
	volatile uint64_t t30 = 583LLU;

    t30 = (x133/(x134+(x135<=x136)));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x137 = -13571;
	uint8_t x139 = 98U;
	uint32_t x140 = 0U;
	int64_t t31 = -8614LL;

    t31 = (x137/(x138+(x139<=x140)));

    if (t31 != 13571LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x141 = 2126U;
	volatile int8_t x142 = -1;
	int64_t x143 = INT64_MAX;
	int32_t t32 = 977531953;

    t32 = (x141/(x142+(x143<=x144)));

    if (t32 != -2126) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x145 = 18171U;
	int8_t x146 = -2;
	uint16_t x147 = 1902U;
	int32_t x148 = 5779026;
	volatile int32_t t33 = -6519;

    t33 = (x145/(x146+(x147<=x148)));

    if (t33 != -18171) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x149 = -461;
	static int16_t x150 = -3;
	int16_t x151 = INT16_MAX;
	volatile int16_t x152 = INT16_MAX;
	int32_t t34 = -13403;

    t34 = (x149/(x150+(x151<=x152)));

    if (t34 != 230) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = INT32_MIN;
	int64_t x155 = -227024102760LL;
	static uint16_t x156 = UINT16_MAX;
	volatile int32_t t35 = 69951;

    t35 = (x153/(x154+(x155<=x156)));

    if (t35 != -8388608) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x157 = UINT64_MAX;
	volatile uint16_t x158 = UINT16_MAX;
	volatile int64_t x159 = 100816425LL;
	uint64_t t36 = 3276531LLU;

    t36 = (x157/(x158+(x159<=x160)));

    if (t36 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x165 = -1;
	int16_t x166 = -1;
	static volatile uint32_t x167 = UINT32_MAX;
	int32_t x168 = INT32_MAX;
	volatile int32_t t37 = -48947466;

    t37 = (x165/(x166+(x167<=x168)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x169 = INT8_MIN;
	static int16_t x170 = INT16_MAX;
	uint8_t x172 = UINT8_MAX;
	int32_t t38 = 0;

    t38 = (x169/(x170+(x171<=x172)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x179 = -1;
	int16_t x180 = INT16_MAX;
	uint32_t t39 = 14203U;

    t39 = (x177/(x178+(x179<=x180)));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x185 = 2390U;
	static int16_t x188 = 2597;

    t40 = (x185/(x186+(x187<=x188)));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x189 = -14;
	volatile uint64_t x190 = 24572704620LLU;
	static uint32_t x191 = UINT32_MAX;
	volatile int32_t x192 = -1;
	volatile uint64_t t41 = 2844188963291931LLU;

    t41 = (x189/(x190+(x191<=x192)));

    if (t41 != 750700598LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x197 = INT32_MIN;
	static uint16_t x200 = 5684U;
	volatile int32_t t42 = 35929;

    t42 = (x197/(x198+(x199<=x200)));

    if (t42 != 65538) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x201 = UINT16_MAX;
	static int8_t x202 = 2;
	volatile int64_t x203 = -1LL;
	volatile int16_t x204 = INT16_MAX;
	volatile int32_t t43 = 944216845;

    t43 = (x201/(x202+(x203<=x204)));

    if (t43 != 21845) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x205 = UINT64_MAX;
	volatile int8_t x207 = -3;
	static int16_t x208 = -1;

    t44 = (x205/(x206+(x207<=x208)));

    if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x209 = INT32_MAX;
	static volatile uint64_t x210 = UINT64_MAX;
	int8_t x211 = -4;
	volatile uint64_t t45 = 1082123088493LLU;

    t45 = (x209/(x210+(x211<=x212)));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x213 = -1;
	int16_t x214 = INT16_MIN;
	int64_t x216 = INT64_MAX;
	volatile int32_t t46 = -8261360;

    t46 = (x213/(x214+(x215<=x216)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x227 = -1;
	static int32_t x228 = INT32_MAX;
	volatile int32_t t47 = -1;

    t47 = (x225/(x226+(x227<=x228)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x229 = INT16_MAX;
	int8_t x231 = 0;
	volatile uint64_t x232 = 58LLU;
	static int32_t t48 = 2;

    t48 = (x229/(x230+(x231<=x232)));

    if (t48 != 10922) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint64_t x237 = 4852556127727299LLU;
	volatile uint16_t x238 = UINT16_MAX;
	uint64_t t49 = 1721990LLU;

    t49 = (x237/(x238+(x239<=x240)));

    if (t49 != 74045260207LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x242 = INT16_MIN;
	int32_t x243 = 834396;
	volatile int32_t x244 = INT32_MIN;
	volatile int32_t t50 = 1;

    t50 = (x241/(x242+(x243<=x244)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x246 = INT64_MIN;
	static volatile uint64_t x248 = 626113LLU;
	static volatile int64_t t51 = -435809677978LL;

    t51 = (x245/(x246+(x247<=x248)));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x249 = -2432;
	uint16_t x250 = 9U;
	uint64_t x251 = 8118324395801764LLU;
	int32_t t52 = -3225392;

    t52 = (x249/(x250+(x251<=x252)));

    if (t52 != -270) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x253 = INT64_MAX;
	uint16_t x255 = UINT16_MAX;

    t53 = (x253/(x254+(x255<=x256)));

    if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x257 = INT64_MAX;
	uint8_t x258 = 68U;
	int8_t x260 = INT8_MIN;

    t54 = (x257/(x258+(x259<=x260)));

    if (t54 != 135637824071393761LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x262 = INT16_MAX;
	int8_t x263 = -1;
	volatile uint64_t t55 = 259640300272LLU;

    t55 = (x261/(x262+(x263<=x264)));

    if (t55 != 23864230446757LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x273 = INT64_MIN;
	static uint8_t x274 = 2U;
	static int8_t x275 = INT8_MIN;
	volatile uint16_t x276 = 0U;
	int64_t t56 = 293306LL;

    t56 = (x273/(x274+(x275<=x276)));

    if (t56 != -3074457345618258602LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x277 = INT8_MIN;
	int32_t x278 = INT32_MIN;
	volatile int32_t x279 = -608938;
	int32_t t57 = 708;

    t57 = (x277/(x278+(x279<=x280)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x281 = 3U;
	int32_t x282 = INT32_MIN;
	int64_t x283 = -17471291526801LL;
	volatile int64_t x284 = -1LL;

    t58 = (x281/(x282+(x283<=x284)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x285 = 43U;
	uint64_t x286 = 1514782237929792725LLU;
	uint16_t x287 = 15473U;
	int16_t x288 = -1;

    t59 = (x285/(x286+(x287<=x288)));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int64_t x294 = INT64_MIN;
	uint16_t x295 = 1309U;
	int64_t t60 = -274LL;

    t60 = (x293/(x294+(x295<=x296)));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x298 = 2;
	volatile int16_t x299 = 1;

    t61 = (x297/(x298+(x299<=x300)));

    if (t61 != 12LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x301 = -10079659061702999LL;
	static int64_t x302 = INT64_MIN;
	int32_t x303 = -1;
	volatile uint32_t x304 = 47431379U;

    t62 = (x301/(x302+(x303<=x304)));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x305 = INT16_MIN;
	uint8_t x306 = 72U;
	uint8_t x307 = 23U;
	int64_t x308 = -1LL;
	int32_t t63 = -1132;

    t63 = (x305/(x306+(x307<=x308)));

    if (t63 != -455) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x309 = -1LL;
	static int64_t x310 = 4068215130029525032LL;
	int16_t x312 = INT16_MIN;

    t64 = (x309/(x310+(x311<=x312)));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x317 = INT8_MIN;
	int64_t x318 = -2735789427923751LL;
	uint32_t x320 = UINT32_MAX;

    t65 = (x317/(x318+(x319<=x320)));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x325 = -1;
	int16_t x326 = INT16_MIN;
	static volatile int64_t x327 = INT64_MIN;
	int16_t x328 = 618;
	int32_t t66 = 28;

    t66 = (x325/(x326+(x327<=x328)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x329 = INT64_MIN;
	volatile uint32_t x330 = 105354591U;
	int32_t x331 = INT32_MIN;
	int32_t x332 = 499139064;
	static volatile int64_t t67 = 8077785828371LL;

    t67 = (x329/(x330+(x331<=x332)));

    if (t67 != -87545989802LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x342 = INT64_MIN;
	uint32_t x343 = 202732U;
	int16_t x344 = 4;
	volatile int64_t t68 = 4LL;

    t68 = (x341/(x342+(x343<=x344)));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x345 = INT64_MIN;
	volatile uint16_t x346 = 83U;
	int32_t x348 = INT32_MIN;
	static volatile int64_t t69 = -560895202745LL;

    t69 = (x345/(x346+(x347<=x348)));

    if (t69 != -111124964299455130LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x349 = INT32_MAX;
	int8_t x351 = 0;
	static int16_t x352 = INT16_MIN;
	volatile int32_t t70 = -159;

    t70 = (x349/(x350+(x351<=x352)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x353 = INT64_MIN;
	uint16_t x354 = 1518U;
	static int32_t x355 = INT32_MAX;
	static int64_t x356 = INT64_MIN;
	volatile int64_t t71 = 3706LL;

    t71 = (x353/(x354+(x355<=x356)));

    if (t71 != -6076002659324621LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x357 = INT8_MAX;
	volatile int64_t x358 = -2496496851357LL;
	volatile int32_t x359 = -1;
	int16_t x360 = INT16_MIN;
	static int64_t t72 = 411908LL;

    t72 = (x357/(x358+(x359<=x360)));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x361 = 15598U;
	int32_t x362 = INT32_MIN;
	int8_t x363 = -26;
	int8_t x364 = INT8_MIN;
	volatile int32_t t73 = -779059401;

    t73 = (x361/(x362+(x363<=x364)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x366 = 6U;
	volatile int16_t x367 = -2848;
	int8_t x368 = INT8_MAX;
	int64_t t74 = 38163LL;

    t74 = (x365/(x366+(x367<=x368)));

    if (t74 != -1317624576693539401LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x370 = INT16_MIN;
	static int32_t x371 = -5629728;
	volatile int32_t t75 = -21;

    t75 = (x369/(x370+(x371<=x372)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x373 = 337;
	int64_t x374 = INT64_MAX;
	volatile int8_t x375 = INT8_MAX;
	static int8_t x376 = INT8_MIN;
	volatile int64_t t76 = 53346LL;

    t76 = (x373/(x374+(x375<=x376)));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x377 = UINT8_MAX;
	static int32_t x378 = 142;
	int64_t x379 = INT64_MIN;
	int32_t x380 = INT32_MAX;
	volatile int32_t t77 = -42221306;

    t77 = (x377/(x378+(x379<=x380)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x386 = INT64_MIN;
	uint16_t x387 = 10U;
	static volatile int16_t x388 = INT16_MAX;

    t78 = (x385/(x386+(x387<=x388)));

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x389 = INT16_MIN;
	int64_t x390 = INT64_MIN;
	int64_t x391 = 66287LL;
	int64_t t79 = 867LL;

    t79 = (x389/(x390+(x391<=x392)));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x393 = 612102LLU;
	int8_t x394 = -7;
	int32_t x395 = -1;
	uint32_t x396 = 16040U;
	uint64_t t80 = 930551100LLU;

    t80 = (x393/(x394+(x395<=x396)));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x397 = 2;
	uint64_t x398 = 161252795716008LLU;
	uint8_t x399 = 48U;
	int32_t x400 = 53100;
	uint64_t t81 = 36948394346221137LLU;

    t81 = (x397/(x398+(x399<=x400)));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x402 = -52;
	uint8_t x403 = UINT8_MAX;
	static volatile uint8_t x404 = 1U;

    t82 = (x401/(x402+(x403<=x404)));

    if (t82 != 177372539170284150LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x405 = UINT32_MAX;
	int64_t x406 = INT64_MAX;
	uint16_t x407 = 1U;
	volatile int16_t x408 = INT16_MIN;
	static volatile int64_t t83 = 202035907177855926LL;

    t83 = (x405/(x406+(x407<=x408)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x410 = -674LL;
	static volatile int32_t x412 = 19266;
	volatile int64_t t84 = 825247069492711LL;

    t84 = (x409/(x410+(x411<=x412)));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x413 = 28U;
	uint64_t x414 = 12950857LLU;
	uint8_t x416 = 0U;
	uint64_t t85 = 8414708885732170908LLU;

    t85 = (x413/(x414+(x415<=x416)));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x417 = -26;
	int8_t x418 = 31;
	int8_t x419 = -3;
	int32_t t86 = -11183;

    t86 = (x417/(x418+(x419<=x420)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x421 = 24568320356477LLU;
	int8_t x422 = INT8_MAX;
	volatile uint8_t x423 = 3U;
	int8_t x424 = 0;
	volatile uint64_t t87 = 31LLU;

    t87 = (x421/(x422+(x423<=x424)));

    if (t87 != 193451341389LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x425 = 316;
	static int8_t x427 = 1;
	static int64_t x428 = INT64_MIN;

    t88 = (x425/(x426+(x427<=x428)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x429 = UINT8_MAX;
	volatile uint8_t x430 = UINT8_MAX;
	static uint32_t x431 = UINT32_MAX;
	int32_t x432 = 685;
	int32_t t89 = 4785;

    t89 = (x429/(x430+(x431<=x432)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x433 = INT32_MAX;
	static int32_t x434 = INT32_MIN;
	static uint64_t x435 = 164LLU;
	uint8_t x436 = UINT8_MAX;
	int32_t t90 = 37;

    t90 = (x433/(x434+(x435<=x436)));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x437 = INT32_MIN;
	volatile uint16_t x438 = 94U;
	int32_t x439 = -19640888;
	int64_t x440 = -4792569LL;
	int32_t t91 = -13847;

    t91 = (x437/(x438+(x439<=x440)));

    if (t91 != -22605091) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x442 = -52;
	int64_t x443 = INT64_MIN;
	int32_t x444 = INT32_MIN;
	volatile int32_t t92 = 5;

    t92 = (x441/(x442+(x443<=x444)));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x445 = INT64_MAX;
	static int64_t x447 = INT64_MIN;

    t93 = (x445/(x446+(x447<=x448)));

    if (t93 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x449 = INT32_MIN;
	uint32_t x450 = 57910U;
	int8_t x451 = INT8_MIN;
	uint8_t x452 = 6U;
	uint32_t t94 = 53632393U;

    t94 = (x449/(x450+(x451<=x452)));

    if (t94 != 37082U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x453 = 0U;
	int32_t x456 = -501797;
	volatile uint32_t t95 = 952179U;

    t95 = (x453/(x454+(x455<=x456)));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x457 = INT16_MIN;
	uint16_t x458 = 15425U;
	static uint32_t x459 = 119292U;
	static int8_t x460 = INT8_MIN;
	int32_t t96 = -1728498;

    t96 = (x457/(x458+(x459<=x460)));

    if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x465 = 32010462256LL;
	int64_t x466 = INT64_MIN;
	uint16_t x468 = 7U;
	int64_t t97 = 467344333737862596LL;

    t97 = (x465/(x466+(x467<=x468)));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x469 = 34;
	int8_t x470 = INT8_MIN;
	int64_t x471 = -1LL;
	uint64_t x472 = 4472LLU;
	volatile int32_t t98 = 183;

    t98 = (x469/(x470+(x471<=x472)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x473 = -56;
	int8_t x474 = INT8_MIN;
	volatile uint32_t x475 = 829472U;
	static int8_t x476 = -12;

    t99 = (x473/(x474+(x475<=x476)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x477 = -18;
	int8_t x478 = INT8_MIN;
	uint16_t x479 = 19367U;
	static int64_t x480 = -1LL;
	volatile int32_t t100 = -707190;

    t100 = (x477/(x478+(x479<=x480)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x481 = -1;
	volatile int16_t x482 = 9;
	static int8_t x484 = INT8_MAX;
	volatile int32_t t101 = 1646;

    t101 = (x481/(x482+(x483<=x484)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x485 = -863122073;
	static volatile uint8_t x487 = UINT8_MAX;
	int8_t x488 = -2;
	int32_t t102 = -44233236;

    t102 = (x485/(x486+(x487<=x488)));

    if (t102 != -26341) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x489 = INT8_MIN;
	volatile uint64_t x490 = 19122LLU;
	volatile int64_t x491 = -35064481250LL;
	volatile uint8_t x492 = 3U;

    t103 = (x489/(x490+(x491<=x492)));

    if (t103 != 964636514862184LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x493 = -1262534LL;
	int32_t x494 = -1;
	static volatile uint64_t x495 = 18316507286285LLU;

    t104 = (x493/(x494+(x495<=x496)));

    if (t104 != 1262534LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x497 = INT16_MAX;
	int8_t x498 = 37;
	int64_t x500 = 1923014864780302LL;

    t105 = (x497/(x498+(x499<=x500)));

    if (t105 != 862) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x501 = 0LLU;
	int16_t x502 = 439;
	int64_t x503 = INT64_MIN;
	int8_t x504 = -1;
	volatile uint64_t t106 = 342LLU;

    t106 = (x501/(x502+(x503<=x504)));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x506 = INT32_MAX;
	int32_t x507 = -1;
	int8_t x508 = INT8_MIN;
	int32_t t107 = -338;

    t107 = (x505/(x506+(x507<=x508)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x509 = -1;
	uint64_t x510 = UINT64_MAX;
	int16_t x512 = 11;
	static uint64_t t108 = 13624336943LLU;

    t108 = (x509/(x510+(x511<=x512)));

    if (t108 != 1LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x517 = 48806588U;
	static uint32_t x518 = 6160193U;
	static uint8_t x519 = UINT8_MAX;
	int64_t x520 = INT64_MIN;
	volatile uint32_t t109 = 1U;

    t109 = (x517/(x518+(x519<=x520)));

    if (t109 != 7U) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x521 = UINT32_MAX;
	int32_t x522 = 273751436;
	static uint16_t x523 = 1U;
	static uint32_t t110 = 347969U;

    t110 = (x521/(x522+(x523<=x524)));

    if (t110 != 15U) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x525 = UINT64_MAX;
	volatile int32_t x526 = 1;
	int64_t x527 = 4532556347745348LL;

    t111 = (x525/(x526+(x527<=x528)));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x529 = UINT64_MAX;
	int32_t x530 = -57165017;
	static int32_t x531 = INT32_MIN;
	int64_t x532 = INT64_MAX;
	volatile uint64_t t112 = 109766996LLU;

    t112 = (x529/(x530+(x531<=x532)));

    if (t112 != 1LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x533 = -1;
	int32_t x534 = -134056776;
	uint16_t x535 = 27207U;
	static int64_t x536 = INT64_MIN;

    t113 = (x533/(x534+(x535<=x536)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x537 = INT16_MIN;
	int16_t x539 = INT16_MAX;
	uint32_t x540 = 325U;
	volatile int32_t t114 = -18748484;

    t114 = (x537/(x538+(x539<=x540)));

    if (t114 != -7) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x544 = INT32_MAX;
	volatile int64_t t115 = -2775979LL;

    t115 = (x541/(x542+(x543<=x544)));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint8_t x545 = 1U;
	uint8_t x548 = 29U;
	static int32_t t116 = -59720;

    t116 = (x545/(x546+(x547<=x548)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x551 = -16;
	static int8_t x552 = INT8_MAX;
	volatile int32_t t117 = -7499934;

    t117 = (x549/(x550+(x551<=x552)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x553 = INT8_MAX;
	volatile int32_t x554 = 0;
	static volatile uint32_t x555 = 810734U;
	static volatile int8_t x556 = INT8_MIN;
	int32_t t118 = 217;

    t118 = (x553/(x554+(x555<=x556)));

    if (t118 != 127) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x557 = UINT8_MAX;
	uint16_t x559 = UINT16_MAX;
	int64_t x560 = INT64_MAX;
	int32_t t119 = -140;

    t119 = (x557/(x558+(x559<=x560)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x562 = UINT16_MAX;
	int8_t x564 = INT8_MIN;

    t120 = (x561/(x562+(x563<=x564)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x569 = 28U;
	volatile uint32_t x570 = UINT32_MAX;
	int8_t x571 = INT8_MAX;
	uint32_t x572 = 15U;
	static uint32_t t121 = 7661475U;

    t121 = (x569/(x570+(x571<=x572)));

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int8_t x574 = -57;
	int64_t x575 = INT64_MAX;
	int8_t x576 = INT8_MIN;
	volatile int32_t t122 = 34019;

    t122 = (x573/(x574+(x575<=x576)));

    if (t122 != -2) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x581 = -20473011;
	uint32_t x582 = 305U;
	int8_t x584 = -9;
	volatile uint32_t t123 = 9001U;

    t123 = (x581/(x582+(x583<=x584)));

    if (t123 != 14014735U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x585 = -479;
	int8_t x587 = INT8_MAX;
	static int64_t x588 = 270894833187LL;
	int64_t t124 = -111LL;

    t124 = (x585/(x586+(x587<=x588)));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x589 = -45586481;
	volatile uint16_t x590 = 47U;
	uint32_t x591 = UINT32_MAX;
	int32_t x592 = -122;

    t125 = (x589/(x590+(x591<=x592)));

    if (t125 != -969925) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x593 = 0;
	uint32_t x594 = 540031U;
	int8_t x595 = -7;
	static volatile int16_t x596 = -1;
	volatile uint32_t t126 = 86U;

    t126 = (x593/(x594+(x595<=x596)));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x597 = -1;
	static int64_t x598 = INT64_MIN;
	static int32_t x599 = -57252760;
	int16_t x600 = INT16_MAX;
	int64_t t127 = 108978631151166LL;

    t127 = (x597/(x598+(x599<=x600)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x601 = 17;
	static volatile int32_t x602 = INT32_MIN;
	int64_t x603 = INT64_MIN;
	uint8_t x604 = UINT8_MAX;
	int32_t t128 = -5338;

    t128 = (x601/(x602+(x603<=x604)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x605 = 0U;
	int8_t x606 = INT8_MAX;

    t129 = (x605/(x606+(x607<=x608)));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x609 = 1U;
	int16_t x610 = -112;
	int32_t t130 = 222591177;

    t130 = (x609/(x610+(x611<=x612)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x617 = 861023008;
	int64_t x618 = -273998765601753LL;
	static int64_t x619 = -35806493488LL;
	uint16_t x620 = 23545U;
	static volatile int64_t t131 = 6676045LL;

    t131 = (x617/(x618+(x619<=x620)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x621 = UINT64_MAX;
	static uint64_t x623 = 67169261166541762LLU;
	static int32_t x624 = 48800;

    t132 = (x621/(x622+(x623<=x624)));

    if (t132 != 64499105152830600LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x626 = UINT16_MAX;
	static volatile int64_t x627 = INT64_MAX;
	int32_t x628 = INT32_MIN;
	int32_t t133 = -534;

    t133 = (x625/(x626+(x627<=x628)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x629 = 30U;
	static volatile uint64_t x630 = 303630LLU;
	int32_t x631 = INT32_MIN;
	int8_t x632 = -3;

    t134 = (x629/(x630+(x631<=x632)));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x633 = 196U;
	int64_t x635 = INT64_MIN;
	volatile uint16_t x636 = UINT16_MAX;
	static volatile uint32_t t135 = 1914U;

    t135 = (x633/(x634+(x635<=x636)));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int16_t x637 = INT16_MAX;
	int64_t x638 = -401284LL;
	volatile int64_t x639 = -1LL;
	static int32_t x640 = -982499;
	volatile int64_t t136 = -2327626794046LL;

    t136 = (x637/(x638+(x639<=x640)));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x641 = 368LLU;
	static uint8_t x642 = 9U;
	int32_t x643 = 3624949;
	uint16_t x644 = 19U;
	static uint64_t t137 = 259823863LLU;

    t137 = (x641/(x642+(x643<=x644)));

    if (t137 != 40LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x647 = INT16_MIN;
	int64_t x648 = -1LL;
	static uint32_t t138 = 23338958U;

    t138 = (x645/(x646+(x647<=x648)));

    if (t138 != 373280U) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x649 = INT32_MIN;
	int64_t x650 = 148797855505392151LL;
	static int16_t x651 = INT16_MIN;
	int8_t x652 = INT8_MAX;
	int64_t t139 = -5688LL;

    t139 = (x649/(x650+(x651<=x652)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x655 = UINT32_MAX;
	uint16_t x656 = 1806U;
	volatile uint64_t t140 = 26902273LLU;

    t140 = (x653/(x654+(x655<=x656)));

    if (t140 != 329406144173384850LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x658 = 27LLU;
	int32_t x659 = -1;
	int64_t x660 = INT64_MIN;
	volatile uint64_t t141 = 2762672097083565106LLU;

    t141 = (x657/(x658+(x659<=x660)));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x661 = INT8_MIN;
	uint8_t x662 = UINT8_MAX;
	int8_t x664 = INT8_MIN;
	static volatile int32_t t142 = -87;

    t142 = (x661/(x662+(x663<=x664)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x665 = INT32_MIN;
	uint32_t x666 = 410378690U;
	int16_t x667 = -1119;
	uint32_t t143 = 2153U;

    t143 = (x665/(x666+(x667<=x668)));

    if (t143 != 5U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x669 = INT16_MAX;
	int16_t x670 = INT16_MAX;
	uint32_t x671 = 172304133U;
	int32_t t144 = -1857556;

    t144 = (x669/(x670+(x671<=x672)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x673 = 1;
	int16_t x674 = -1;
	uint64_t x676 = 8315711860258LLU;
	static volatile int32_t t145 = -55569555;

    t145 = (x673/(x674+(x675<=x676)));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x681 = UINT64_MAX;
	uint16_t x682 = UINT16_MAX;
	volatile uint64_t t146 = 128218918427LLU;

    t146 = (x681/(x682+(x683<=x684)));

    if (t146 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x685 = INT8_MIN;
	uint32_t x686 = 159U;
	uint32_t t147 = 14169455U;

    t147 = (x685/(x686+(x687<=x688)));

    if (t147 != 26843544U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x693 = -1;
	uint8_t x694 = UINT8_MAX;
	int32_t t148 = -1;

    t148 = (x693/(x694+(x695<=x696)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x701 = 9U;
	uint8_t x702 = UINT8_MAX;
	static int8_t x703 = 0;
	int64_t x704 = -511LL;
	static int32_t t149 = 1;

    t149 = (x701/(x702+(x703<=x704)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x705 = INT32_MAX;
	int16_t x706 = INT16_MIN;
	static int8_t x708 = INT8_MIN;
	volatile int32_t t150 = 17748;

    t150 = (x705/(x706+(x707<=x708)));

    if (t150 != -65535) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x709 = -1;
	int16_t x712 = 1;
	uint32_t t151 = 18U;

    t151 = (x709/(x710+(x711<=x712)));

    if (t151 != 435727U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x713 = -1LL;
	int16_t x714 = INT16_MAX;
	int32_t x715 = INT32_MIN;
	static int64_t x716 = 62848705488LL;
	int64_t t152 = -25995998816187178LL;

    t152 = (x713/(x714+(x715<=x716)));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x717 = -1;
	volatile int16_t x719 = 192;
	int64_t x720 = -27159LL;
	volatile uint32_t t153 = 13127U;

    t153 = (x717/(x718+(x719<=x720)));

    if (t153 != 667U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x721 = INT16_MAX;
	int8_t x723 = INT8_MAX;
	int64_t x724 = INT64_MIN;
	int32_t t154 = 63273744;

    t154 = (x721/(x722+(x723<=x724)));

    if (t154 != -255) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x725 = INT16_MIN;
	int16_t x726 = INT16_MAX;
	int32_t x727 = 73078;
	static int32_t x728 = -3;

    t155 = (x725/(x726+(x727<=x728)));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x729 = 18;
	uint32_t x731 = UINT32_MAX;
	int32_t t156 = 6618946;

    t156 = (x729/(x730+(x731<=x732)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x733 = UINT8_MAX;
	int64_t x734 = 431265394031182LL;
	static int16_t x736 = INT16_MAX;
	volatile int64_t t157 = -506693360638LL;

    t157 = (x733/(x734+(x735<=x736)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x737 = -734;
	static uint32_t x739 = 22U;

    t158 = (x737/(x738+(x739<=x740)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x741 = -1LL;
	static int16_t x742 = INT16_MIN;
	int8_t x743 = 0;
	static int64_t t159 = 200881486LL;

    t159 = (x741/(x742+(x743<=x744)));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x750 = -1;
	volatile int8_t x751 = INT8_MAX;
	int16_t x752 = INT16_MIN;
	uint64_t t160 = 77153137443820LLU;

    t160 = (x749/(x750+(x751<=x752)));

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x754 = INT32_MIN;
	int32_t x755 = -9;
	volatile int32_t x756 = -647673;
	int32_t t161 = -200;

    t161 = (x753/(x754+(x755<=x756)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x758 = 1;
	int8_t x759 = -1;
	volatile int32_t t162 = -1;

    t162 = (x757/(x758+(x759<=x760)));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x765 = 107U;
	int32_t x766 = -211027974;
	volatile int16_t x767 = -10;
	static int8_t x768 = INT8_MAX;
	volatile int32_t t163 = 1379;

    t163 = (x765/(x766+(x767<=x768)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x769 = 0U;
	int16_t x772 = 2725;
	uint32_t t164 = 8U;

    t164 = (x769/(x770+(x771<=x772)));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x777 = INT16_MIN;
	int16_t x778 = INT16_MIN;
	int8_t x779 = INT8_MAX;
	static volatile uint32_t x780 = 60U;
	static volatile int32_t t165 = 4;

    t165 = (x777/(x778+(x779<=x780)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x783 = 23U;
	volatile int64_t t166 = 11286674893173737LL;

    t166 = (x781/(x782+(x783<=x784)));

    if (t166 != 128LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x785 = 50456LLU;
	volatile int8_t x786 = INT8_MIN;
	static uint32_t x787 = 4265U;
	int8_t x788 = INT8_MIN;
	static uint64_t t167 = 156691131315LLU;

    t167 = (x785/(x786+(x787<=x788)));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x789 = UINT16_MAX;
	uint32_t x790 = 520019706U;
	int8_t x792 = INT8_MAX;
	static volatile uint32_t t168 = 11U;

    t168 = (x789/(x790+(x791<=x792)));

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x793 = -1;
	int8_t x794 = INT8_MAX;
	uint32_t x795 = 2736237U;
	int16_t x796 = INT16_MIN;
	volatile int32_t t169 = 592015;

    t169 = (x793/(x794+(x795<=x796)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x798 = -1;
	uint32_t x800 = UINT32_MAX;

    t170 = (x797/(x798+(x799<=x800)));

    if (t170 != -28) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x806 = INT8_MIN;
	volatile int32_t x807 = INT32_MIN;
	volatile int16_t x808 = INT16_MIN;

    t171 = (x805/(x806+(x807<=x808)));

    if (t171 != 16909320) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x813 = INT32_MIN;
	int8_t x814 = INT8_MIN;
	static int16_t x815 = -1;
	static int32_t x816 = -1250503;
	int32_t t172 = -12;

    t172 = (x813/(x814+(x815<=x816)));

    if (t172 != 16777216) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x817 = 102U;
	int64_t x819 = INT64_MIN;
	int8_t x820 = -1;
	int32_t t173 = 113413;

    t173 = (x817/(x818+(x819<=x820)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x821 = 1118635728LLU;
	static uint64_t x822 = 22441364654089155LLU;
	uint8_t x823 = UINT8_MAX;
	volatile int32_t x824 = 1;

    t174 = (x821/(x822+(x823<=x824)));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x825 = INT32_MAX;
	volatile uint64_t x826 = 471LLU;
	int32_t x827 = INT32_MAX;
	uint32_t x828 = 4216U;

    t175 = (x825/(x826+(x827<=x828)));

    if (t175 != 4559413LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x831 = 614070627385LL;

    t176 = (x829/(x830+(x831<=x832)));

    if (t176 != -14770LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x834 = INT32_MIN;
	uint64_t x835 = UINT64_MAX;
	uint64_t x836 = UINT64_MAX;
	volatile int32_t t177 = -3698;

    t177 = (x833/(x834+(x835<=x836)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x837 = INT64_MIN;
	static volatile uint64_t x838 = 25921443577643LLU;
	uint64_t x839 = 246095583LLU;
	uint64_t t178 = 1940LLU;

    t178 = (x837/(x838+(x839<=x840)));

    if (t178 != 355820LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x841 = -1;
	uint32_t x844 = 1675U;
	volatile int32_t t179 = -44;

    t179 = (x841/(x842+(x843<=x844)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x846 = 329LLU;

    t180 = (x845/(x846+(x847<=x848)));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x857 = INT16_MIN;
	volatile int16_t x858 = INT16_MIN;
	int32_t x859 = -1;
	int8_t x860 = 1;
	static volatile int32_t t181 = -260;

    t181 = (x857/(x858+(x859<=x860)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x861 = -22716;
	uint16_t x862 = 504U;
	static uint16_t x863 = UINT16_MAX;
	int64_t x864 = INT64_MIN;
	volatile int32_t t182 = 5;

    t182 = (x861/(x862+(x863<=x864)));

    if (t182 != -45) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x865 = 2U;
	volatile int8_t x866 = INT8_MIN;
	int8_t x867 = 1;
	volatile int16_t x868 = 997;
	static int32_t t183 = -4717272;

    t183 = (x865/(x866+(x867<=x868)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x869 = 1043LLU;
	int32_t x870 = -94663;
	static int16_t x871 = INT16_MIN;
	uint64_t x872 = 5222LLU;
	volatile uint64_t t184 = 1476315919324LLU;

    t184 = (x869/(x870+(x871<=x872)));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x874 = INT32_MIN;
	static int8_t x875 = 9;
	int8_t x876 = INT8_MIN;
	static volatile uint64_t t185 = 6446LLU;

    t185 = (x873/(x874+(x875<=x876)));

    if (t185 != 1LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x877 = 7336;
	static int64_t x879 = 12928821LL;
	int64_t x880 = INT64_MAX;
	volatile int64_t t186 = -10435LL;

    t186 = (x877/(x878+(x879<=x880)));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x881 = INT16_MAX;
	static int64_t x883 = INT64_MAX;
	int64_t x884 = INT64_MIN;
	volatile int32_t t187 = 120;

    t187 = (x881/(x882+(x883<=x884)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x885 = INT8_MAX;
	static volatile int64_t x886 = -1LL;
	int32_t x887 = -1;
	static int16_t x888 = INT16_MIN;
	volatile int64_t t188 = -1478997344314674LL;

    t188 = (x885/(x886+(x887<=x888)));

    if (t188 != -127LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x889 = INT64_MIN;
	uint16_t x890 = 3U;
	uint8_t x891 = UINT8_MAX;
	uint32_t x892 = 189275184U;
	int64_t t189 = -3LL;

    t189 = (x889/(x890+(x891<=x892)));

    if (t189 != -2305843009213693952LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x894 = 817U;
	volatile uint8_t x895 = 2U;
	static int16_t x896 = INT16_MIN;
	volatile uint32_t t190 = 547U;

    t190 = (x893/(x894+(x895<=x896)));

    if (t190 != 5256997U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x897 = -95842411;
	int64_t x899 = 170LL;
	int32_t x900 = INT32_MAX;

    t191 = (x897/(x898+(x899<=x900)));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x902 = UINT16_MAX;
	int16_t x904 = INT16_MAX;

    t192 = (x901/(x902+(x903<=x904)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x906 = INT32_MIN;
	int8_t x907 = 1;
	uint32_t x908 = UINT32_MAX;

    t193 = (x905/(x906+(x907<=x908)));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x912 = 3U;
	volatile int32_t t194 = -533118197;

    t194 = (x909/(x910+(x911<=x912)));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x913 = 30U;
	volatile uint16_t x914 = UINT16_MAX;
	int32_t x915 = -3;
	int32_t t195 = -66077255;

    t195 = (x913/(x914+(x915<=x916)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x918 = INT32_MIN;
	int8_t x919 = INT8_MIN;
	static uint64_t x920 = 60552LLU;
	uint32_t t196 = 7U;

    t196 = (x917/(x918+(x919<=x920)));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x921 = INT16_MIN;
	uint8_t x922 = UINT8_MAX;
	int8_t x923 = INT8_MIN;
	volatile uint32_t x924 = 478U;

    t197 = (x921/(x922+(x923<=x924)));

    if (t197 != -128) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x926 = INT16_MAX;
	volatile int32_t x927 = -1;
	volatile uint16_t x928 = UINT16_MAX;
	int32_t t198 = -327;

    t198 = (x925/(x926+(x927<=x928)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x929 = 1;
	int8_t x930 = INT8_MIN;
	uint16_t x931 = UINT16_MAX;
	uint16_t x932 = 19820U;
	volatile int32_t t199 = -213920;

    t199 = (x929/(x930+(x931<=x932)));

    if (t199 != 0) { NG(); } else { ; }
	
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

