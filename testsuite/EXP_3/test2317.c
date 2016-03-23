
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

static int8_t x5 = -1;
int16_t x13 = INT16_MIN;
volatile int32_t t3 = -79607;
int64_t x21 = -1LL;
volatile int64_t x28 = INT64_MIN;
int8_t x32 = INT8_MAX;
int32_t x33 = -1;
volatile uint8_t x35 = UINT8_MAX;
volatile int8_t x46 = INT8_MIN;
volatile int32_t t11 = -798227;
volatile uint8_t x49 = UINT8_MAX;
volatile int32_t t12 = 257362331;
int32_t t13 = 6;
static volatile int32_t t16 = -18;
uint8_t x69 = UINT8_MAX;
int64_t x75 = 7112LL;
volatile int32_t t18 = 51938;
volatile int64_t x78 = -233LL;
int64_t x81 = INT64_MIN;
static int64_t x92 = INT64_MAX;
static int32_t t22 = 65;
int32_t x95 = INT32_MAX;
static int16_t x97 = -95;
static uint64_t x104 = UINT64_MAX;
int32_t t26 = 394112460;
static int8_t x110 = -1;
uint16_t x114 = 2725U;
int16_t x132 = INT16_MIN;
static int32_t t33 = -1;
int16_t x139 = -1;
uint64_t x152 = 304020042572LLU;
int32_t t38 = -12;
volatile int16_t x157 = 1;
volatile int8_t x165 = INT8_MAX;
volatile int32_t t41 = 1;
volatile int32_t t45 = 1181;
int64_t x185 = -1LL;
volatile int32_t t47 = -1623;
volatile uint64_t x198 = 18LLU;
static uint32_t x204 = UINT32_MAX;
int64_t x207 = -121679622196LL;
int32_t t51 = 17;
int16_t x211 = 1;
static uint16_t x212 = 432U;
int8_t x215 = INT8_MIN;
static volatile uint64_t x219 = 1LLU;
static volatile int64_t x220 = -1LL;
static uint32_t x221 = UINT32_MAX;
volatile int32_t t55 = 534853639;
uint8_t x227 = UINT8_MAX;
int64_t x229 = INT64_MIN;
static int16_t x230 = INT16_MIN;
static int64_t x231 = INT64_MIN;
int64_t x236 = -31LL;
uint8_t x241 = UINT8_MAX;
int64_t x242 = INT64_MAX;
volatile int32_t t62 = 59173;
uint64_t x257 = 117LLU;
volatile uint8_t x260 = 3U;
int32_t t64 = -15496698;
int64_t x263 = INT64_MIN;
volatile uint16_t x272 = 1U;
volatile int64_t x273 = INT64_MIN;
int64_t x275 = -1LL;
int16_t x277 = -1;
volatile uint32_t x278 = 219811317U;
uint32_t x279 = 948910U;
int64_t x286 = INT64_MIN;
volatile int64_t x293 = INT64_MIN;
int16_t x297 = -1;
volatile uint32_t x300 = 746U;
static int64_t x304 = -1LL;
static int8_t x307 = 30;
volatile int32_t t77 = -122323628;
int32_t x313 = INT32_MIN;
uint8_t x317 = UINT8_MAX;
volatile uint16_t x318 = UINT16_MAX;
uint32_t x319 = UINT32_MAX;
int32_t t79 = 14168622;
int32_t t81 = 30539299;
uint8_t x330 = UINT8_MAX;
volatile int32_t x342 = INT32_MIN;
int32_t t86 = -547;
volatile int32_t t87 = -137;
uint16_t x357 = 0U;
static volatile uint16_t x358 = 23304U;
static uint8_t x368 = 73U;
int8_t x376 = 29;
volatile int32_t t93 = -2752299;
volatile int32_t t94 = 9;
int16_t x385 = INT16_MAX;
static int8_t x388 = INT8_MIN;
static uint32_t x391 = UINT32_MAX;
static uint32_t x392 = 526249U;
static volatile int32_t t97 = -2894143;
int16_t x403 = -42;
uint16_t x404 = 22U;
uint16_t x413 = UINT16_MAX;
int16_t x420 = -4619;
int8_t x423 = INT8_MAX;
volatile int32_t t105 = -416798097;
static volatile uint64_t x427 = 14954634666LLU;
static int64_t x429 = 23LL;
int32_t x430 = -1;
uint16_t x433 = 18710U;
int64_t x438 = -1LL;
volatile int32_t t109 = 47242035;
uint64_t x441 = 313LLU;
static volatile int8_t x445 = -1;
volatile int32_t t112 = 118;
static int32_t t113 = 46;
int64_t x458 = -12079LL;
int64_t x464 = -21524LL;
int8_t x469 = INT8_MAX;
int8_t x479 = 1;
int32_t x481 = 356;
uint16_t x482 = UINT16_MAX;
int32_t t121 = 0;
volatile int8_t x492 = INT8_MIN;
volatile int8_t x496 = 1;
static int8_t x497 = INT8_MIN;
int8_t x501 = -1;
static uint32_t x504 = UINT32_MAX;
int64_t x506 = INT64_MAX;
int8_t x507 = 1;
volatile int32_t t127 = -37486;
static volatile int32_t t129 = 761;
int64_t x521 = 765412148499LL;
static volatile int16_t x527 = INT16_MIN;
uint32_t x536 = 118414222U;
int64_t x540 = INT64_MAX;
volatile uint16_t x543 = UINT16_MAX;
int32_t t135 = -501213319;
int32_t t136 = 39;
uint64_t x549 = 2068662897LLU;
static volatile int16_t x551 = -30;
int32_t t137 = -12;
static uint16_t x560 = 122U;
static int64_t x564 = INT64_MAX;
uint8_t x567 = UINT8_MAX;
int16_t x569 = INT16_MIN;
int16_t x574 = INT16_MIN;
volatile int16_t x575 = INT16_MIN;
uint64_t x576 = 3008871459896885LLU;
volatile int32_t x580 = INT32_MIN;
volatile int16_t x586 = -1;
volatile int32_t t146 = 45032;
int8_t x589 = INT8_MAX;
volatile int16_t x590 = -1;
int16_t x595 = -1;
int32_t x596 = -5772926;
uint8_t x601 = 41U;
volatile int16_t x602 = -1;
int32_t t150 = -249834;
uint32_t x609 = UINT32_MAX;
uint8_t x616 = UINT8_MAX;
int32_t x622 = -22058;
uint64_t x624 = 44420189LLU;
uint16_t x625 = 3772U;
uint8_t x627 = 1U;
int32_t x648 = INT32_MIN;
int32_t t161 = -3;
int32_t x657 = -1;
static volatile int32_t t164 = 16;
static int64_t x667 = 283390368LL;
static int32_t x668 = INT32_MAX;
int16_t x669 = INT16_MAX;
int32_t x670 = 227134338;
uint32_t x676 = 226U;
uint16_t x677 = 40U;
volatile uint32_t x683 = UINT32_MAX;
int64_t x686 = -1LL;
static int32_t x688 = INT32_MIN;
int32_t t171 = 13968740;
static int16_t x691 = INT16_MAX;
int32_t t172 = -218;
int16_t x693 = -1;
static int8_t x699 = 16;
int32_t t174 = -77443182;
static int64_t x710 = -1LL;
int32_t t177 = 217375;
int16_t x723 = INT16_MAX;
int32_t t180 = -109216;
int32_t t181 = -22631223;
int16_t x729 = -49;
volatile int32_t t182 = 178768;
static int64_t x735 = -389LL;
int32_t t186 = 452;
uint16_t x750 = 101U;
uint64_t x751 = 692523896996225622LLU;
uint32_t x756 = 793969099U;
volatile int32_t t188 = 11145;
uint8_t x760 = UINT8_MAX;
static uint8_t x765 = 108U;
uint64_t x767 = 110LLU;
uint64_t x772 = 14LLU;
int32_t x780 = -1;
int32_t t194 = 2001;
volatile int16_t x784 = -1;
static volatile int32_t t195 = -23610805;
int8_t x785 = 19;
int16_t x791 = 8239;
volatile int8_t x796 = INT8_MIN;


void f0(void) {
    	uint16_t x1 = 21U;
	volatile uint16_t x2 = UINT16_MAX;
	static int8_t x3 = INT8_MIN;
	static int8_t x4 = -46;
	static volatile int32_t t0 = -7;

    t0 = ((x1&x2)!=(x3&x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x6 = INT64_MIN;
	int32_t x7 = -1;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 6;

    t1 = ((x5&x6)!=(x7&x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 113951LL;
	int64_t x10 = 280644190941189714LL;
	int16_t x11 = INT16_MAX;
	static uint32_t x12 = 22642412U;
	volatile int32_t t2 = -1102;

    t2 = ((x9&x10)!=(x11&x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = -1;
	static volatile int64_t x15 = INT64_MIN;
	int16_t x16 = -1;

    t3 = ((x13&x14)!=(x15&x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int8_t x18 = 7;
	int32_t x19 = INT32_MAX;
	uint8_t x20 = 54U;
	int32_t t4 = 453;

    t4 = ((x17&x18)!=(x19&x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x22 = 82U;
	static volatile int8_t x23 = -1;
	volatile int16_t x24 = INT16_MIN;
	static volatile int32_t t5 = -50751042;

    t5 = ((x21&x22)!=(x23&x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	int32_t x26 = 1181;
	volatile uint16_t x27 = 14U;
	int32_t t6 = 529617;

    t6 = ((x25&x26)!=(x27&x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	int32_t x30 = 277251;
	int32_t x31 = INT32_MIN;
	static volatile int32_t t7 = -93940;

    t7 = ((x29&x30)!=(x31&x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x34 = -1LL;
	uint32_t x36 = UINT32_MAX;
	static volatile int32_t t8 = -219583;

    t8 = ((x33&x34)!=(x35&x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	int8_t x38 = INT8_MAX;
	static uint32_t x39 = 62444702U;
	int32_t x40 = INT32_MAX;
	int32_t t9 = -7192;

    t9 = ((x37&x38)!=(x39&x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	uint8_t x42 = 0U;
	volatile int32_t x43 = 431597;
	volatile int8_t x44 = INT8_MAX;
	volatile int32_t t10 = -1;

    t10 = ((x41&x42)!=(x43&x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = 0;
	int64_t x47 = 9241LL;
	uint16_t x48 = UINT16_MAX;

    t11 = ((x45&x46)!=(x47&x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x50 = 7380091987LLU;
	volatile int64_t x51 = 6853779571493LL;
	int32_t x52 = INT32_MIN;

    t12 = ((x49&x50)!=(x51&x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MAX;
	int8_t x54 = INT8_MIN;
	int16_t x55 = -1;
	volatile uint32_t x56 = 4712401U;

    t13 = ((x53&x54)!=(x55&x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	static int16_t x58 = -1;
	int64_t x59 = INT64_MIN;
	int64_t x60 = 124700677399LL;
	volatile int32_t t14 = 178535;

    t14 = ((x57&x58)!=(x59&x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = INT32_MAX;
	volatile int64_t x62 = INT64_MIN;
	int64_t x63 = INT64_MIN;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 49526386;

    t15 = ((x61&x62)!=(x63&x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = 384;
	int16_t x66 = -2345;
	uint16_t x67 = 838U;
	int8_t x68 = 43;

    t16 = ((x65&x66)!=(x67&x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x70 = -5;
	volatile uint8_t x71 = 15U;
	int32_t x72 = INT32_MAX;
	int32_t t17 = -431;

    t17 = ((x69&x70)!=(x71&x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	int32_t x74 = INT32_MAX;
	volatile int32_t x76 = INT32_MIN;

    t18 = ((x73&x74)!=(x75&x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x77 = 541785260828LLU;
	volatile int32_t x79 = INT32_MIN;
	int64_t x80 = -1LL;
	int32_t t19 = 10;

    t19 = ((x77&x78)!=(x79&x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x82 = 0U;
	uint64_t x83 = UINT64_MAX;
	int64_t x84 = -48378995427063LL;
	volatile int32_t t20 = 182403587;

    t20 = ((x81&x82)!=(x83&x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -1;
	volatile int16_t x86 = 8356;
	static uint16_t x87 = 1675U;
	int16_t x88 = -1;
	int32_t t21 = 190;

    t21 = ((x85&x86)!=(x87&x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MAX;
	uint32_t x91 = 465053080U;

    t22 = ((x89&x90)!=(x91&x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x93 = 170104LLU;
	static int16_t x94 = INT16_MIN;
	int64_t x96 = INT64_MIN;
	int32_t t23 = 1;

    t23 = ((x93&x94)!=(x95&x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x98 = UINT16_MAX;
	static int8_t x99 = INT8_MIN;
	uint32_t x100 = 227U;
	volatile int32_t t24 = -5020231;

    t24 = ((x97&x98)!=(x99&x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x101 = 38U;
	int8_t x102 = INT8_MIN;
	volatile int16_t x103 = -1;
	int32_t t25 = -6042;

    t25 = ((x101&x102)!=(x103&x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 7857;
	volatile uint64_t x106 = UINT64_MAX;
	int32_t x107 = INT32_MIN;
	uint32_t x108 = UINT32_MAX;

    t26 = ((x105&x106)!=(x107&x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	int16_t x111 = INT16_MIN;
	int32_t x112 = INT32_MIN;
	volatile int32_t t27 = -1145754;

    t27 = ((x109&x110)!=(x111&x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 2740922U;
	int32_t x115 = INT32_MIN;
	volatile uint8_t x116 = 3U;
	volatile int32_t t28 = -14293561;

    t28 = ((x113&x114)!=(x115&x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = 787U;
	static int32_t x118 = -2;
	int8_t x119 = 1;
	int32_t x120 = 1;
	int32_t t29 = -5169;

    t29 = ((x117&x118)!=(x119&x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MAX;
	uint64_t x122 = 2LLU;
	int32_t x123 = INT32_MIN;
	volatile int16_t x124 = 77;
	int32_t t30 = -197072369;

    t30 = ((x121&x122)!=(x123&x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x125 = -1;
	static int64_t x126 = INT64_MAX;
	int16_t x127 = INT16_MAX;
	static volatile int64_t x128 = -1LL;
	volatile int32_t t31 = -360345;

    t31 = ((x125&x126)!=(x127&x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = -1;
	static int16_t x130 = -1;
	int32_t x131 = -31115325;
	volatile int32_t t32 = 1992990;

    t32 = ((x129&x130)!=(x131&x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = INT32_MIN;
	int64_t x134 = -1398483154LL;
	int16_t x135 = -1;
	volatile uint32_t x136 = 1681989758U;

    t33 = ((x133&x134)!=(x135&x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = 6;
	uint8_t x138 = 111U;
	uint32_t x140 = UINT32_MAX;
	int32_t t34 = -18320;

    t34 = ((x137&x138)!=(x139&x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x141 = INT16_MAX;
	static uint8_t x142 = UINT8_MAX;
	static volatile int64_t x143 = 664032676LL;
	int32_t x144 = -1;
	volatile int32_t t35 = -2;

    t35 = ((x141&x142)!=(x143&x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x145 = 102U;
	volatile int32_t x146 = -1;
	static int8_t x147 = -1;
	static int16_t x148 = INT16_MIN;
	int32_t t36 = -290038407;

    t36 = ((x145&x146)!=(x147&x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 54LLU;
	int8_t x150 = -1;
	int16_t x151 = -1;
	int32_t t37 = 543664670;

    t37 = ((x149&x150)!=(x151&x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x153 = 2789189U;
	uint8_t x154 = UINT8_MAX;
	int16_t x155 = -8833;
	int16_t x156 = -1243;

    t38 = ((x153&x154)!=(x155&x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x158 = UINT8_MAX;
	uint16_t x159 = 31U;
	uint32_t x160 = 42U;
	int32_t t39 = -548;

    t39 = ((x157&x158)!=(x159&x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = UINT64_MAX;
	volatile int32_t x162 = 1;
	uint16_t x163 = 205U;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t40 = -33240143;

    t40 = ((x161&x162)!=(x163&x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x166 = 38569925345970LL;
	static uint16_t x167 = UINT16_MAX;
	volatile int64_t x168 = INT64_MIN;

    t41 = ((x165&x166)!=(x167&x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = 1;
	int64_t x170 = INT64_MIN;
	static volatile int64_t x171 = INT64_MIN;
	int64_t x172 = -151645LL;
	static volatile int32_t t42 = -62918603;

    t42 = ((x169&x170)!=(x171&x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	int16_t x174 = -1;
	static int64_t x175 = -1LL;
	int8_t x176 = INT8_MAX;
	static int32_t t43 = 126;

    t43 = ((x173&x174)!=(x175&x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -1;
	uint32_t x178 = UINT32_MAX;
	int32_t x179 = INT32_MIN;
	uint16_t x180 = UINT16_MAX;
	static int32_t t44 = -385;

    t44 = ((x177&x178)!=(x179&x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x181 = 2658308183828LL;
	volatile uint32_t x182 = UINT32_MAX;
	int64_t x183 = 3145002645131044LL;
	uint8_t x184 = 4U;

    t45 = ((x181&x182)!=(x183&x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x186 = -1;
	int16_t x187 = 1;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t46 = 27268956;

    t46 = ((x185&x186)!=(x187&x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x189 = 0U;
	int32_t x190 = INT32_MIN;
	volatile int64_t x191 = INT64_MAX;
	static uint32_t x192 = 1225U;

    t47 = ((x189&x190)!=(x191&x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	static uint32_t x194 = 45087371U;
	volatile int64_t x195 = INT64_MIN;
	int8_t x196 = -1;
	volatile int32_t t48 = -12493;

    t48 = ((x193&x194)!=(x195&x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	int64_t x199 = INT64_MAX;
	int16_t x200 = -1;
	int32_t t49 = 68;

    t49 = ((x197&x198)!=(x199&x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 17821U;
	uint32_t x202 = UINT32_MAX;
	uint64_t x203 = 3LLU;
	volatile int32_t t50 = -176304277;

    t50 = ((x201&x202)!=(x203&x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x205 = UINT16_MAX;
	int32_t x206 = -1;
	static volatile uint8_t x208 = 3U;

    t51 = ((x205&x206)!=(x207&x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x209 = UINT32_MAX;
	int64_t x210 = 8951885490058576LL;
	volatile int32_t t52 = 8;

    t52 = ((x209&x210)!=(x211&x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MAX;
	volatile int64_t x214 = INT64_MIN;
	static uint64_t x216 = 31409LLU;
	int32_t t53 = 244954078;

    t53 = ((x213&x214)!=(x215&x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x217 = -1;
	uint8_t x218 = 4U;
	volatile int32_t t54 = 440176262;

    t54 = ((x217&x218)!=(x219&x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x222 = 3018U;
	uint16_t x223 = 3U;
	int8_t x224 = -1;

    t55 = ((x221&x222)!=(x223&x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MIN;
	static int8_t x226 = 1;
	int64_t x228 = INT64_MAX;
	int32_t t56 = -6988;

    t56 = ((x225&x226)!=(x227&x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x232 = 554;
	volatile int32_t t57 = -2497;

    t57 = ((x229&x230)!=(x231&x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = 116LL;
	uint16_t x234 = UINT16_MAX;
	int32_t x235 = INT32_MIN;
	static volatile int32_t t58 = -967;

    t58 = ((x233&x234)!=(x235&x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x237 = 1;
	uint8_t x238 = UINT8_MAX;
	uint16_t x239 = 4846U;
	int64_t x240 = INT64_MIN;
	int32_t t59 = -4;

    t59 = ((x237&x238)!=(x239&x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x243 = UINT64_MAX;
	uint8_t x244 = 0U;
	volatile int32_t t60 = -28334766;

    t60 = ((x241&x242)!=(x243&x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = -1;
	uint64_t x246 = UINT64_MAX;
	int16_t x247 = INT16_MAX;
	int32_t x248 = 503;
	int32_t t61 = -57284767;

    t61 = ((x245&x246)!=(x247&x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x249 = 7LLU;
	int64_t x250 = INT64_MIN;
	static int16_t x251 = 11;
	int16_t x252 = INT16_MAX;

    t62 = ((x249&x250)!=(x251&x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x253 = INT8_MIN;
	uint32_t x254 = 2001U;
	int32_t x255 = 5;
	int16_t x256 = -1;
	volatile int32_t t63 = 0;

    t63 = ((x253&x254)!=(x255&x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = -1;
	volatile uint64_t x259 = 248576124247698804LLU;

    t64 = ((x257&x258)!=(x259&x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	uint16_t x262 = 26U;
	static int16_t x264 = INT16_MIN;
	int32_t t65 = -11;

    t65 = ((x261&x262)!=(x263&x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	uint32_t x266 = 108606U;
	uint8_t x267 = 102U;
	int32_t x268 = INT32_MIN;
	static int32_t t66 = 40417;

    t66 = ((x265&x266)!=(x267&x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	uint8_t x270 = UINT8_MAX;
	int64_t x271 = INT64_MIN;
	int32_t t67 = 228994650;

    t67 = ((x269&x270)!=(x271&x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x274 = INT8_MIN;
	int16_t x276 = 0;
	int32_t t68 = -366398;

    t68 = ((x273&x274)!=(x275&x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x280 = 26;
	int32_t t69 = 48;

    t69 = ((x277&x278)!=(x279&x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = UINT8_MAX;
	uint64_t x282 = UINT64_MAX;
	uint64_t x283 = 619527952456712821LLU;
	uint16_t x284 = UINT16_MAX;
	int32_t t70 = 4373728;

    t70 = ((x281&x282)!=(x283&x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x285 = 257608727234421LLU;
	int8_t x287 = -1;
	uint16_t x288 = 15264U;
	int32_t t71 = -1061789886;

    t71 = ((x285&x286)!=(x287&x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = 267020601U;
	int64_t x290 = 123317948575LL;
	int64_t x291 = -1LL;
	static int8_t x292 = -3;
	volatile int32_t t72 = 1703;

    t72 = ((x289&x290)!=(x291&x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x294 = -314;
	int32_t x295 = -1;
	volatile uint8_t x296 = 31U;
	int32_t t73 = -28699095;

    t73 = ((x293&x294)!=(x295&x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x298 = 7U;
	int64_t x299 = INT64_MIN;
	static volatile int32_t t74 = -108;

    t74 = ((x297&x298)!=(x299&x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -11423578;
	int16_t x302 = INT16_MIN;
	int32_t x303 = -1;
	static int32_t t75 = -386;

    t75 = ((x301&x302)!=(x303&x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x305 = INT32_MIN;
	int32_t x306 = -33057121;
	int16_t x308 = INT16_MIN;
	volatile int32_t t76 = 465;

    t76 = ((x305&x306)!=(x307&x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x309 = 1387U;
	static uint8_t x310 = 13U;
	int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MAX;

    t77 = ((x309&x310)!=(x311&x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x314 = INT32_MIN;
	int16_t x315 = INT16_MIN;
	static int32_t x316 = INT32_MIN;
	volatile int32_t t78 = 162236662;

    t78 = ((x313&x314)!=(x315&x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x320 = INT64_MAX;

    t79 = ((x317&x318)!=(x319&x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = UINT32_MAX;
	int16_t x322 = INT16_MIN;
	static int8_t x323 = -1;
	uint16_t x324 = 337U;
	int32_t t80 = 30351492;

    t80 = ((x321&x322)!=(x323&x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -445;
	static uint64_t x326 = 3804453639116LLU;
	uint8_t x327 = 16U;
	int32_t x328 = INT32_MIN;

    t81 = ((x325&x326)!=(x327&x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = -1;
	int32_t x331 = 3236647;
	int64_t x332 = -1LL;
	static volatile int32_t t82 = -247949289;

    t82 = ((x329&x330)!=(x331&x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = 9728790029423LLU;
	volatile int64_t x334 = -1LL;
	int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MAX;
	volatile int32_t t83 = -191021926;

    t83 = ((x333&x334)!=(x335&x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x337 = -11;
	uint64_t x338 = UINT64_MAX;
	int16_t x339 = INT16_MIN;
	static volatile int8_t x340 = -55;
	static int32_t t84 = -6788;

    t84 = ((x337&x338)!=(x339&x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint8_t x341 = UINT8_MAX;
	static int32_t x343 = -27;
	int32_t x344 = INT32_MAX;
	int32_t t85 = 991326530;

    t85 = ((x341&x342)!=(x343&x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 901U;
	int16_t x346 = INT16_MIN;
	volatile int16_t x347 = INT16_MIN;
	int64_t x348 = -1LL;

    t86 = ((x345&x346)!=(x347&x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MAX;
	static int64_t x350 = INT64_MIN;
	uint32_t x351 = 419815570U;
	int16_t x352 = -1;

    t87 = ((x349&x350)!=(x351&x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -7;
	volatile uint8_t x354 = 22U;
	int64_t x355 = INT64_MIN;
	static volatile int8_t x356 = -1;
	int32_t t88 = 110;

    t88 = ((x353&x354)!=(x355&x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x359 = -1;
	int8_t x360 = -17;
	int32_t t89 = -263981014;

    t89 = ((x357&x358)!=(x359&x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 7508179U;
	int16_t x362 = INT16_MAX;
	volatile int64_t x363 = INT64_MIN;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t90 = 14134579;

    t90 = ((x361&x362)!=(x363&x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = UINT16_MAX;
	int32_t x366 = INT32_MIN;
	volatile uint64_t x367 = 11067276243607LLU;
	static volatile int32_t t91 = 263791165;

    t91 = ((x365&x366)!=(x367&x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x369 = INT64_MAX;
	static volatile int16_t x370 = INT16_MIN;
	int16_t x371 = -1;
	int8_t x372 = 35;
	static int32_t t92 = -2197;

    t92 = ((x369&x370)!=(x371&x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x373 = UINT64_MAX;
	volatile uint16_t x374 = UINT16_MAX;
	static uint64_t x375 = UINT64_MAX;

    t93 = ((x373&x374)!=(x375&x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x377 = INT64_MAX;
	static int32_t x378 = INT32_MAX;
	volatile int16_t x379 = 189;
	volatile int64_t x380 = 5208LL;

    t94 = ((x377&x378)!=(x379&x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MAX;
	int8_t x382 = -1;
	volatile uint64_t x383 = UINT64_MAX;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t95 = -366752904;

    t95 = ((x381&x382)!=(x383&x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x386 = INT64_MIN;
	int64_t x387 = -207632269251LL;
	static volatile int32_t t96 = -1374;

    t96 = ((x385&x386)!=(x387&x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x389 = -1;
	uint32_t x390 = 49776U;

    t97 = ((x389&x390)!=(x391&x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x393 = 50247U;
	int32_t x394 = INT32_MIN;
	int64_t x395 = -587576026311776478LL;
	uint8_t x396 = 41U;
	volatile int32_t t98 = -22298;

    t98 = ((x393&x394)!=(x395&x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = UINT8_MAX;
	int64_t x398 = INT64_MIN;
	int64_t x399 = -1LL;
	int32_t x400 = INT32_MAX;
	static int32_t t99 = -26;

    t99 = ((x397&x398)!=(x399&x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = UINT64_MAX;
	volatile uint32_t x402 = 489479U;
	volatile int32_t t100 = -19032;

    t100 = ((x401&x402)!=(x403&x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = 3U;
	uint32_t x406 = 25475308U;
	int64_t x407 = -2011530LL;
	int64_t x408 = INT64_MIN;
	int32_t t101 = -1;

    t101 = ((x405&x406)!=(x407&x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x409 = 420U;
	static int8_t x410 = INT8_MIN;
	int16_t x411 = INT16_MAX;
	uint8_t x412 = UINT8_MAX;
	int32_t t102 = 914;

    t102 = ((x409&x410)!=(x411&x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = -4735053249LL;
	volatile int32_t x415 = -1;
	static volatile uint32_t x416 = 4049U;
	volatile int32_t t103 = 1306018;

    t103 = ((x413&x414)!=(x415&x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = -16801864513222LL;
	uint16_t x418 = UINT16_MAX;
	static uint64_t x419 = 1416LLU;
	static volatile int32_t t104 = 45;

    t104 = ((x417&x418)!=(x419&x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x421 = 172156042000551533LL;
	int8_t x422 = INT8_MAX;
	int32_t x424 = 40690287;

    t105 = ((x421&x422)!=(x423&x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MAX;
	uint16_t x426 = 8U;
	static uint64_t x428 = 657896269120536LLU;
	int32_t t106 = -211;

    t106 = ((x425&x426)!=(x427&x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x431 = INT16_MAX;
	static uint8_t x432 = 0U;
	int32_t t107 = -41;

    t107 = ((x429&x430)!=(x431&x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x434 = INT32_MIN;
	int16_t x435 = INT16_MIN;
	volatile int8_t x436 = 31;
	static volatile int32_t t108 = -158;

    t108 = ((x433&x434)!=(x435&x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MAX;
	uint16_t x439 = 13822U;
	volatile int32_t x440 = INT32_MAX;

    t109 = ((x437&x438)!=(x439&x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x442 = 2042892;
	int8_t x443 = INT8_MAX;
	volatile uint16_t x444 = UINT16_MAX;
	int32_t t110 = -5304469;

    t110 = ((x441&x442)!=(x443&x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x446 = -1;
	int16_t x447 = INT16_MIN;
	int32_t x448 = INT32_MIN;
	static volatile int32_t t111 = -121897;

    t111 = ((x445&x446)!=(x447&x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = 13976;
	static int8_t x450 = INT8_MIN;
	int32_t x451 = INT32_MAX;
	int32_t x452 = INT32_MIN;

    t112 = ((x449&x450)!=(x451&x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = -1;
	int32_t x454 = INT32_MIN;
	static int16_t x455 = INT16_MAX;
	uint32_t x456 = 2U;

    t113 = ((x453&x454)!=(x455&x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -1;
	static int64_t x459 = -3LL;
	uint64_t x460 = UINT64_MAX;
	volatile int32_t t114 = 20;

    t114 = ((x457&x458)!=(x459&x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x461 = 0;
	uint64_t x462 = 466103385845643LLU;
	uint16_t x463 = 44U;
	static volatile int32_t t115 = 11268;

    t115 = ((x461&x462)!=(x463&x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x465 = UINT8_MAX;
	static uint32_t x466 = 39704754U;
	uint16_t x467 = 14U;
	int8_t x468 = 5;
	int32_t t116 = -159;

    t116 = ((x465&x466)!=(x467&x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x470 = INT64_MIN;
	int64_t x471 = -1LL;
	int32_t x472 = INT32_MIN;
	volatile int32_t t117 = 4690047;

    t117 = ((x469&x470)!=(x471&x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int16_t x473 = INT16_MIN;
	volatile int16_t x474 = INT16_MAX;
	int16_t x475 = -93;
	volatile int8_t x476 = -13;
	int32_t t118 = 63862193;

    t118 = ((x473&x474)!=(x475&x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x477 = UINT16_MAX;
	int16_t x478 = INT16_MIN;
	int32_t x480 = -1;
	volatile int32_t t119 = 30865441;

    t119 = ((x477&x478)!=(x479&x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x483 = INT8_MAX;
	int32_t x484 = INT32_MAX;
	volatile int32_t t120 = -9;

    t120 = ((x481&x482)!=(x483&x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x485 = -9729;
	uint32_t x486 = 36040164U;
	static int32_t x487 = 724826097;
	int16_t x488 = INT16_MAX;

    t121 = ((x485&x486)!=(x487&x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -1;
	static int16_t x490 = INT16_MIN;
	int32_t x491 = 68344;
	volatile int32_t t122 = -37;

    t122 = ((x489&x490)!=(x491&x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 13U;
	volatile int64_t x494 = INT64_MIN;
	int32_t x495 = -769;
	volatile int32_t t123 = 50092586;

    t123 = ((x493&x494)!=(x495&x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x498 = 37U;
	static uint64_t x499 = UINT64_MAX;
	uint8_t x500 = 71U;
	int32_t t124 = 77704;

    t124 = ((x497&x498)!=(x499&x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x502 = INT16_MAX;
	int8_t x503 = 3;
	int32_t t125 = -22914801;

    t125 = ((x501&x502)!=(x503&x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = -1LL;
	static int8_t x508 = INT8_MIN;
	int32_t t126 = -3862;

    t126 = ((x505&x506)!=(x507&x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 809972649LLU;
	uint8_t x510 = 1U;
	uint16_t x511 = 2405U;
	int8_t x512 = 18;

    t127 = ((x509&x510)!=(x511&x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	uint32_t x514 = 111683U;
	int8_t x515 = INT8_MIN;
	int16_t x516 = 290;
	int32_t t128 = -31367;

    t128 = ((x513&x514)!=(x515&x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 2U;
	volatile uint32_t x518 = UINT32_MAX;
	volatile int16_t x519 = INT16_MAX;
	int8_t x520 = -1;

    t129 = ((x517&x518)!=(x519&x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = -2;
	volatile int8_t x523 = -1;
	uint16_t x524 = 9641U;
	volatile int32_t t130 = -2703;

    t130 = ((x521&x522)!=(x523&x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x525 = 4;
	static volatile uint64_t x526 = 15519475LLU;
	int16_t x528 = 0;
	int32_t t131 = 1;

    t131 = ((x525&x526)!=(x527&x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x529 = 177424U;
	static int64_t x530 = INT64_MIN;
	static int8_t x531 = INT8_MAX;
	int16_t x532 = INT16_MIN;
	volatile int32_t t132 = -21025299;

    t132 = ((x529&x530)!=(x531&x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MIN;
	int16_t x534 = INT16_MIN;
	int64_t x535 = -419975LL;
	volatile int32_t t133 = -64059424;

    t133 = ((x533&x534)!=(x535&x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x537 = 4282245990154157136LL;
	static uint64_t x538 = 575LLU;
	static int32_t x539 = -840;
	volatile int32_t t134 = -4836819;

    t134 = ((x537&x538)!=(x539&x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = 319;
	volatile int64_t x542 = INT64_MAX;
	int16_t x544 = -880;

    t135 = ((x541&x542)!=(x543&x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = UINT16_MAX;
	static int16_t x546 = INT16_MAX;
	int8_t x547 = INT8_MIN;
	static int16_t x548 = -7500;

    t136 = ((x545&x546)!=(x547&x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x550 = INT8_MIN;
	static uint32_t x552 = 1622020U;

    t137 = ((x549&x550)!=(x551&x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x553 = 0;
	int16_t x554 = INT16_MIN;
	static volatile uint32_t x555 = UINT32_MAX;
	volatile uint32_t x556 = 1629657U;
	volatile int32_t t138 = -5876;

    t138 = ((x553&x554)!=(x555&x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x557 = INT32_MAX;
	static int64_t x558 = INT64_MIN;
	int16_t x559 = -1776;
	int32_t t139 = -1;

    t139 = ((x557&x558)!=(x559&x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MAX;
	int64_t x562 = -586823734LL;
	volatile int32_t x563 = INT32_MIN;
	volatile int32_t t140 = -2782297;

    t140 = ((x561&x562)!=(x563&x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = 42U;
	int32_t x566 = INT32_MIN;
	volatile int32_t x568 = INT32_MAX;
	static int32_t t141 = 1098;

    t141 = ((x565&x566)!=(x567&x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x570 = UINT32_MAX;
	int32_t x571 = INT32_MAX;
	uint64_t x572 = 3356732281548LLU;
	volatile int32_t t142 = -201;

    t142 = ((x569&x570)!=(x571&x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x573 = 494U;
	int32_t t143 = 0;

    t143 = ((x573&x574)!=(x575&x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x577 = INT8_MAX;
	static int8_t x578 = INT8_MIN;
	int32_t x579 = 0;
	static int32_t t144 = -935497;

    t144 = ((x577&x578)!=(x579&x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 4077LLU;
	uint32_t x582 = 1190U;
	volatile int16_t x583 = -1;
	int8_t x584 = -1;
	volatile int32_t t145 = 12;

    t145 = ((x581&x582)!=(x583&x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	int64_t x587 = -507841271227554304LL;
	int8_t x588 = INT8_MIN;

    t146 = ((x585&x586)!=(x587&x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x591 = INT8_MIN;
	volatile int8_t x592 = INT8_MAX;
	int32_t t147 = 57;

    t147 = ((x589&x590)!=(x591&x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = -1;
	uint64_t x594 = 1LLU;
	static int32_t t148 = -453521486;

    t148 = ((x593&x594)!=(x595&x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x597 = -1;
	int16_t x598 = INT16_MAX;
	int64_t x599 = INT64_MIN;
	uint16_t x600 = 23U;
	volatile int32_t t149 = -5007922;

    t149 = ((x597&x598)!=(x599&x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x603 = INT64_MIN;
	static uint8_t x604 = UINT8_MAX;

    t150 = ((x601&x602)!=(x603&x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -1;
	int64_t x606 = INT64_MAX;
	volatile uint64_t x607 = 82418LLU;
	static int64_t x608 = -1LL;
	int32_t t151 = 48;

    t151 = ((x605&x606)!=(x607&x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x610 = INT64_MIN;
	int32_t x611 = INT32_MAX;
	static int32_t x612 = INT32_MIN;
	volatile int32_t t152 = 1012863;

    t152 = ((x609&x610)!=(x611&x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -1;
	static uint16_t x614 = 0U;
	int8_t x615 = INT8_MIN;
	int32_t t153 = 285294915;

    t153 = ((x613&x614)!=(x615&x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x617 = 59789LL;
	static int64_t x618 = 16374571254427LL;
	int32_t x619 = 534;
	int64_t x620 = -6254885237460738LL;
	volatile int32_t t154 = -19656;

    t154 = ((x617&x618)!=(x619&x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x621 = -1;
	static volatile int8_t x623 = 1;
	static int32_t t155 = 75462;

    t155 = ((x621&x622)!=(x623&x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x626 = 17U;
	uint8_t x628 = UINT8_MAX;
	int32_t t156 = 1074033;

    t156 = ((x625&x626)!=(x627&x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 6U;
	volatile int64_t x630 = INT64_MIN;
	uint8_t x631 = 42U;
	int16_t x632 = INT16_MIN;
	volatile int32_t t157 = -4182572;

    t157 = ((x629&x630)!=(x631&x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MAX;
	volatile int32_t x634 = -1;
	volatile int64_t x635 = -1LL;
	int16_t x636 = 1;
	static int32_t t158 = 112261;

    t158 = ((x633&x634)!=(x635&x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = 507596;
	uint64_t x638 = UINT64_MAX;
	uint32_t x639 = 0U;
	static uint8_t x640 = 2U;
	static int32_t t159 = -21;

    t159 = ((x637&x638)!=(x639&x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = 3;
	int8_t x642 = -1;
	int8_t x643 = INT8_MIN;
	uint64_t x644 = 1995531167356356288LLU;
	int32_t t160 = 987;

    t160 = ((x641&x642)!=(x643&x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x645 = 57U;
	volatile int16_t x646 = INT16_MIN;
	int64_t x647 = -437149708726843LL;

    t161 = ((x645&x646)!=(x647&x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -1;
	uint64_t x650 = 208324LLU;
	int64_t x651 = INT64_MIN;
	int64_t x652 = INT64_MIN;
	volatile int32_t t162 = 2091367;

    t162 = ((x649&x650)!=(x651&x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x653 = 2005LLU;
	volatile uint16_t x654 = UINT16_MAX;
	int8_t x655 = -1;
	int64_t x656 = -1LL;
	volatile int32_t t163 = 940883;

    t163 = ((x653&x654)!=(x655&x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x658 = 0U;
	volatile uint8_t x659 = UINT8_MAX;
	int8_t x660 = INT8_MIN;

    t164 = ((x657&x658)!=(x659&x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = -1;
	int16_t x662 = INT16_MIN;
	int64_t x663 = INT64_MAX;
	static uint64_t x664 = UINT64_MAX;
	volatile int32_t t165 = 52;

    t165 = ((x661&x662)!=(x663&x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	int32_t x666 = -2326;
	int32_t t166 = -305;

    t166 = ((x665&x666)!=(x667&x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x671 = 2U;
	volatile int64_t x672 = -1LL;
	int32_t t167 = -9544;

    t167 = ((x669&x670)!=(x671&x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x673 = 69143542951810411LLU;
	uint16_t x674 = 1915U;
	static int32_t x675 = 24741;
	static volatile int32_t t168 = 437;

    t168 = ((x673&x674)!=(x675&x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x678 = 14249U;
	int32_t x679 = INT32_MAX;
	uint8_t x680 = 14U;
	volatile int32_t t169 = 4535524;

    t169 = ((x677&x678)!=(x679&x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -1LL;
	uint32_t x682 = 439U;
	int16_t x684 = INT16_MIN;
	int32_t t170 = 286057;

    t170 = ((x681&x682)!=(x683&x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x685 = INT16_MAX;
	int8_t x687 = INT8_MAX;

    t171 = ((x685&x686)!=(x687&x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = UINT8_MAX;
	volatile int32_t x690 = 24206342;
	volatile uint64_t x692 = 551223286800986691LLU;

    t172 = ((x689&x690)!=(x691&x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x694 = -3144312;
	int32_t x695 = -1;
	static int16_t x696 = 1;
	static volatile int32_t t173 = 0;

    t173 = ((x693&x694)!=(x695&x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MIN;
	static int32_t x698 = INT32_MIN;
	uint8_t x700 = UINT8_MAX;

    t174 = ((x697&x698)!=(x699&x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = 5454156126070LL;
	int16_t x702 = -1;
	volatile int32_t x703 = INT32_MIN;
	int8_t x704 = 1;
	int32_t t175 = -1;

    t175 = ((x701&x702)!=(x703&x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x705 = UINT32_MAX;
	static uint32_t x706 = 150240U;
	int16_t x707 = 1630;
	volatile int32_t x708 = INT32_MIN;
	int32_t t176 = -2654;

    t176 = ((x705&x706)!=(x707&x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	int32_t x711 = -1;
	int16_t x712 = INT16_MIN;

    t177 = ((x709&x710)!=(x711&x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x713 = -346;
	static int16_t x714 = INT16_MIN;
	int8_t x715 = INT8_MIN;
	int32_t x716 = INT32_MIN;
	int32_t t178 = -38;

    t178 = ((x713&x714)!=(x715&x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 1584654U;
	int8_t x718 = INT8_MIN;
	static volatile int64_t x719 = INT64_MIN;
	int16_t x720 = 370;
	static int32_t t179 = -45;

    t179 = ((x717&x718)!=(x719&x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x721 = 28253U;
	int32_t x722 = INT32_MIN;
	int16_t x724 = INT16_MIN;

    t180 = ((x721&x722)!=(x723&x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MAX;
	int8_t x726 = 0;
	int8_t x727 = -1;
	volatile int16_t x728 = INT16_MIN;

    t181 = ((x725&x726)!=(x727&x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x730 = INT16_MIN;
	volatile int16_t x731 = INT16_MIN;
	int64_t x732 = -1LL;

    t182 = ((x729&x730)!=(x731&x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MIN;
	int64_t x734 = -54412122407571464LL;
	uint16_t x736 = UINT16_MAX;
	volatile int32_t t183 = 1415516;

    t183 = ((x733&x734)!=(x735&x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint64_t x737 = 528529639582405462LLU;
	int64_t x738 = INT64_MAX;
	uint16_t x739 = UINT16_MAX;
	static int16_t x740 = INT16_MAX;
	static int32_t t184 = -6942112;

    t184 = ((x737&x738)!=(x739&x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = -1LL;
	volatile int16_t x742 = -121;
	int32_t x743 = INT32_MIN;
	int8_t x744 = INT8_MIN;
	volatile int32_t t185 = 5;

    t185 = ((x741&x742)!=(x743&x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = -1;
	int64_t x746 = -1LL;
	static int64_t x747 = INT64_MIN;
	static int32_t x748 = INT32_MAX;

    t186 = ((x745&x746)!=(x747&x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = 4;
	uint64_t x752 = 2495562695152LLU;
	volatile int32_t t187 = -432;

    t187 = ((x749&x750)!=(x751&x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -1;
	int8_t x754 = INT8_MIN;
	uint64_t x755 = 321608375928LLU;

    t188 = ((x753&x754)!=(x755&x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = -1;
	volatile uint64_t x758 = UINT64_MAX;
	int8_t x759 = INT8_MAX;
	int32_t t189 = 1;

    t189 = ((x757&x758)!=(x759&x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = UINT16_MAX;
	int16_t x762 = INT16_MIN;
	static int64_t x763 = 477451580528758LL;
	uint32_t x764 = UINT32_MAX;
	volatile int32_t t190 = -479526909;

    t190 = ((x761&x762)!=(x763&x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x766 = 4633LLU;
	static int8_t x768 = 21;
	volatile int32_t t191 = 15136;

    t191 = ((x765&x766)!=(x767&x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MAX;
	static uint32_t x770 = 0U;
	int64_t x771 = -850541491619024LL;
	volatile int32_t t192 = 4073507;

    t192 = ((x769&x770)!=(x771&x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MAX;
	static int64_t x774 = INT64_MAX;
	int8_t x775 = INT8_MIN;
	int8_t x776 = INT8_MAX;
	volatile int32_t t193 = -8;

    t193 = ((x773&x774)!=(x775&x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MAX;
	volatile uint32_t x778 = UINT32_MAX;
	uint16_t x779 = 3828U;

    t194 = ((x777&x778)!=(x779&x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x781 = UINT16_MAX;
	volatile int64_t x782 = INT64_MAX;
	volatile int32_t x783 = -1;

    t195 = ((x781&x782)!=(x783&x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x786 = UINT32_MAX;
	int16_t x787 = INT16_MAX;
	uint8_t x788 = UINT8_MAX;
	int32_t t196 = -3330;

    t196 = ((x785&x786)!=(x787&x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = 53881;
	uint64_t x790 = 3787395885LLU;
	int16_t x792 = INT16_MAX;
	static volatile int32_t t197 = 134;

    t197 = ((x789&x790)!=(x791&x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = -1;
	static int32_t x794 = INT32_MAX;
	static int16_t x795 = -1;
	int32_t t198 = 24289454;

    t198 = ((x793&x794)!=(x795&x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 533U;
	uint16_t x798 = 8832U;
	static int8_t x799 = INT8_MIN;
	int32_t x800 = INT32_MAX;
	int32_t t199 = -32585125;

    t199 = ((x797&x798)!=(x799&x800));

    if (t199 != 1) { NG(); } else { ; }
	
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

