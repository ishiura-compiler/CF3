
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

int32_t x8 = INT32_MAX;
int32_t t1 = -40;
int16_t x19 = INT16_MIN;
volatile int16_t x23 = INT16_MIN;
volatile int32_t t5 = 144;
static int8_t x34 = -1;
static int16_t x35 = INT16_MAX;
uint16_t x36 = UINT16_MAX;
static int32_t t10 = 5708842;
int8_t x46 = -1;
uint32_t x49 = 3U;
int32_t t12 = -2715;
volatile int64_t x55 = INT64_MAX;
uint8_t x58 = 2U;
static int32_t x63 = INT32_MIN;
static int16_t x64 = INT16_MIN;
int8_t x68 = 7;
static volatile int32_t t16 = -817150230;
int8_t x74 = -1;
int32_t t18 = 19522;
static uint16_t x83 = 1410U;
volatile int32_t t22 = -197037275;
volatile uint32_t x93 = 1135U;
int32_t x97 = INT32_MIN;
int16_t x101 = 20;
uint16_t x107 = 13U;
int32_t x108 = INT32_MIN;
int8_t x114 = -2;
volatile uint64_t x121 = 12392356831928LLU;
static int32_t t31 = 161907262;
int16_t x137 = 44;
int32_t x138 = 63;
int8_t x140 = -1;
int32_t t34 = -87059;
int32_t x150 = 29873454;
volatile int16_t x151 = -1;
int16_t x152 = INT16_MIN;
volatile int32_t x155 = 83469524;
int32_t x161 = 1341516;
int8_t x162 = INT8_MIN;
int64_t x163 = INT64_MAX;
int32_t t39 = -1939090;
volatile uint8_t x170 = UINT8_MAX;
volatile int32_t t40 = 522401;
static volatile int32_t t41 = -6000894;
volatile int32_t t42 = 700310944;
int64_t x183 = INT64_MAX;
uint32_t x187 = 33065662U;
int32_t x195 = 221252729;
static volatile int32_t t46 = 5;
int32_t t47 = 1;
int32_t t48 = -507050;
int8_t x207 = 1;
static int32_t t49 = 34920;
volatile uint16_t x213 = UINT16_MAX;
int8_t x223 = INT8_MIN;
uint32_t x228 = UINT32_MAX;
uint64_t x230 = 7235158901195256175LLU;
uint32_t x234 = 13912299U;
static volatile int32_t t56 = -88468;
int8_t x241 = INT8_MAX;
uint8_t x244 = 111U;
int16_t x247 = 1;
uint64_t x248 = UINT64_MAX;
int64_t x263 = INT64_MIN;
volatile int32_t t62 = -40;
static int64_t x285 = 449179708669LL;
int32_t x290 = 4538632;
int32_t t70 = -14036342;
uint16_t x298 = 13964U;
int16_t x300 = INT16_MIN;
volatile int64_t x309 = -61102549371LL;
volatile int32_t x311 = -2041563;
static int32_t x314 = INT32_MIN;
int32_t t76 = -10704309;
uint16_t x321 = UINT16_MAX;
int64_t x322 = INT64_MIN;
volatile int64_t x326 = 1318262423LL;
int8_t x329 = INT8_MIN;
int8_t x333 = -24;
volatile uint8_t x334 = 24U;
uint32_t x337 = 4U;
int8_t x339 = INT8_MAX;
int32_t t81 = -165211715;
uint64_t x344 = 196LLU;
uint16_t x345 = UINT16_MAX;
int32_t t83 = 0;
int32_t x353 = -612179700;
int16_t x354 = -2012;
uint8_t x355 = 5U;
int32_t x360 = INT32_MIN;
uint8_t x364 = UINT8_MAX;
int32_t x373 = INT32_MIN;
int64_t x376 = -2059483983264LL;
int64_t x377 = INT64_MAX;
uint8_t x383 = 2U;
volatile uint8_t x384 = 4U;
volatile int32_t t91 = 62;
static volatile uint64_t x405 = 960949LLU;
int32_t x412 = INT32_MIN;
int64_t x415 = -9LL;
uint32_t x419 = 632U;
volatile int32_t t101 = 43040;
int64_t x428 = INT64_MAX;
int32_t t103 = 122;
volatile int32_t t104 = -2622;
uint32_t x442 = 201313U;
volatile int32_t t106 = -6;
int32_t x446 = -767108424;
uint8_t x448 = 39U;
volatile uint64_t x451 = 361LLU;
static volatile int32_t t108 = 1261300;
static int8_t x456 = INT8_MAX;
static int16_t x457 = 13773;
int8_t x465 = 55;
volatile int16_t x467 = -115;
int32_t x468 = INT32_MIN;
int32_t t114 = 3268850;
int64_t x486 = INT64_MIN;
volatile int64_t x492 = -1LL;
static int8_t x494 = INT8_MIN;
int32_t t120 = 33406910;
uint16_t x501 = 136U;
int32_t x504 = INT32_MIN;
volatile int64_t x506 = -1LL;
volatile int64_t x508 = -1LL;
int16_t x511 = INT16_MAX;
static volatile int32_t t123 = -310;
int32_t x518 = -1;
int32_t t125 = 27438;
uint8_t x523 = 4U;
int64_t x532 = INT64_MAX;
volatile int32_t t128 = 45744;
static int8_t x536 = INT8_MAX;
int64_t x541 = INT64_MIN;
static int64_t x544 = -1LL;
static int32_t t131 = -352674801;
volatile uint8_t x545 = 2U;
int64_t x549 = INT64_MIN;
static volatile int32_t t133 = 1;
uint16_t x558 = UINT16_MAX;
static int32_t t135 = -139266;
static int32_t t136 = -492104;
static int64_t x566 = 271155241535685224LL;
static int8_t x570 = INT8_MAX;
volatile int16_t x572 = INT16_MAX;
volatile int64_t x574 = 10872176035823740LL;
int64_t x576 = -440341373945469LL;
int64_t x577 = -1LL;
static int32_t t141 = 6864438;
int64_t x595 = -64025583913814855LL;
int16_t x598 = INT16_MIN;
int8_t x599 = -1;
uint16_t x601 = 9U;
int8_t x607 = 0;
int64_t x608 = INT64_MIN;
uint8_t x619 = 38U;
int32_t x621 = -1;
volatile int16_t x626 = -1;
int32_t x628 = INT32_MAX;
static uint32_t x633 = 7889591U;
uint8_t x641 = 8U;
int16_t x646 = INT16_MIN;
uint32_t x647 = 1508U;
uint16_t x653 = 21686U;
volatile uint8_t x656 = 3U;
uint8_t x657 = 27U;
int32_t t158 = 30;
static int8_t x665 = -1;
uint16_t x667 = UINT16_MAX;
uint64_t x671 = 43LLU;
int32_t t162 = 1234320;
static volatile int8_t x677 = INT8_MIN;
int32_t x678 = -1;
volatile int32_t t163 = 14816766;
int32_t x686 = INT32_MAX;
int32_t t165 = -125877;
int64_t x689 = 167141904698LL;
static volatile uint64_t x691 = UINT64_MAX;
static int8_t x694 = INT8_MAX;
uint64_t x702 = UINT64_MAX;
uint32_t x705 = UINT32_MAX;
volatile uint8_t x717 = UINT8_MAX;
static int8_t x721 = -1;
int32_t x725 = INT32_MAX;
uint32_t x728 = UINT32_MAX;
static uint8_t x730 = 3U;
uint8_t x732 = UINT8_MAX;
volatile int8_t x738 = -59;
volatile int16_t x746 = -1;
int32_t t178 = 21191018;
int32_t x749 = INT32_MIN;
static int32_t x756 = INT32_MIN;
int8_t x759 = INT8_MIN;
static uint64_t x762 = 42252433729182LLU;
uint64_t x763 = 3218660475LLU;
static volatile int32_t t182 = 1;
volatile uint16_t x765 = UINT16_MAX;
volatile uint64_t x780 = 80LLU;
int32_t t186 = 889;
static int8_t x782 = -5;
int64_t x791 = INT64_MIN;
static int8_t x792 = INT8_MIN;
int64_t x802 = INT64_MIN;
static int64_t x807 = INT64_MIN;
uint8_t x812 = 29U;
static int32_t t194 = 220363283;
uint32_t x817 = UINT32_MAX;
static int8_t x823 = -1;
volatile uint16_t x825 = UINT16_MAX;
uint64_t x831 = UINT64_MAX;
static uint8_t x832 = UINT8_MAX;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	volatile int16_t x2 = 0;
	int16_t x3 = INT16_MIN;
	int8_t x4 = INT8_MAX;
	int32_t t0 = 9518;

    t0 = (x1==(x2|(x3/x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = INT64_MAX;
	int8_t x6 = INT8_MIN;
	uint8_t x7 = 11U;

    t1 = (x5==(x6|(x7/x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 0U;
	volatile int8_t x10 = 1;
	int64_t x11 = -1LL;
	int8_t x12 = -1;
	volatile int32_t t2 = -95625060;

    t2 = (x9==(x10|(x11/x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MIN;
	int8_t x14 = -1;
	uint8_t x15 = 21U;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 2034769;

    t3 = (x13==(x14|(x15/x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 1;
	int32_t x18 = 515160;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = -1149;

    t4 = (x17==(x18|(x19/x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	uint64_t x22 = 48LLU;
	static int32_t x24 = INT32_MIN;

    t5 = (x21==(x22|(x23/x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	volatile int64_t x26 = -2205297808909870068LL;
	int16_t x27 = 2;
	int8_t x28 = INT8_MAX;
	volatile int32_t t6 = -407;

    t6 = (x25==(x26|(x27/x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 24U;
	int8_t x30 = INT8_MIN;
	static volatile int64_t x31 = INT64_MIN;
	int8_t x32 = INT8_MIN;
	static volatile int32_t t7 = -1384;

    t7 = (x29==(x30|(x31/x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x33 = 0U;
	volatile int32_t t8 = -335;

    t8 = (x33==(x34|(x35/x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x37 = UINT32_MAX;
	int16_t x38 = INT16_MIN;
	int8_t x39 = INT8_MAX;
	int16_t x40 = INT16_MIN;
	static volatile int32_t t9 = 5313;

    t9 = (x37==(x38|(x39/x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;
	uint32_t x42 = 1337455303U;
	int64_t x43 = 183328129798LL;
	int64_t x44 = INT64_MAX;

    t10 = (x41==(x42|(x43/x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	uint8_t x47 = UINT8_MAX;
	volatile int8_t x48 = INT8_MIN;
	static int32_t t11 = 2356;

    t11 = (x45==(x46|(x47/x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = -1;
	static int16_t x51 = -63;
	volatile int16_t x52 = INT16_MAX;

    t12 = (x49==(x50|(x51/x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x53 = 1034585U;
	static volatile uint32_t x54 = 16026488U;
	volatile uint8_t x56 = UINT8_MAX;
	volatile int32_t t13 = 103;

    t13 = (x53==(x54|(x55/x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x57 = 945U;
	int64_t x59 = -1LL;
	volatile int64_t x60 = -348846677652429344LL;
	int32_t t14 = 1886690;

    t14 = (x57==(x58|(x59/x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = 0;
	volatile uint16_t x62 = UINT16_MAX;
	volatile int32_t t15 = -9229;

    t15 = (x61==(x62|(x63/x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MAX;
	uint64_t x66 = UINT64_MAX;
	int16_t x67 = INT16_MIN;

    t16 = (x65==(x66|(x67/x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	int64_t x70 = 1523472568776735978LL;
	static int64_t x71 = -1LL;
	static int64_t x72 = -11592442856LL;
	static int32_t t17 = 126461864;

    t17 = (x69==(x70|(x71/x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	static uint8_t x75 = 1U;
	int64_t x76 = -1LL;

    t18 = (x73==(x74|(x75/x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MAX;
	uint64_t x78 = 6614LLU;
	uint8_t x79 = 110U;
	static int64_t x80 = INT64_MIN;
	static volatile int32_t t19 = -12926;

    t19 = (x77==(x78|(x79/x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = 39;
	int32_t x82 = INT32_MIN;
	int8_t x84 = -61;
	static int32_t t20 = 3998485;

    t20 = (x81==(x82|(x83/x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	volatile int64_t x86 = INT64_MIN;
	volatile uint16_t x87 = 4614U;
	volatile int64_t x88 = INT64_MIN;
	int32_t t21 = 467850;

    t21 = (x85==(x86|(x87/x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = 1;
	int8_t x90 = INT8_MIN;
	int32_t x91 = INT32_MIN;
	int8_t x92 = INT8_MIN;

    t22 = (x89==(x90|(x91/x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x94 = INT32_MIN;
	int16_t x95 = -1;
	volatile int32_t x96 = -26;
	volatile int32_t t23 = -59734148;

    t23 = (x93==(x94|(x95/x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x98 = 27LLU;
	int8_t x99 = -1;
	uint16_t x100 = 39U;
	volatile int32_t t24 = 41874;

    t24 = (x97==(x98|(x99/x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x102 = INT8_MIN;
	uint16_t x103 = 41U;
	int8_t x104 = INT8_MIN;
	int32_t t25 = 1875;

    t25 = (x101==(x102|(x103/x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = INT16_MIN;
	static int32_t x106 = -52;
	volatile int32_t t26 = 419505;

    t26 = (x105==(x106|(x107/x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MAX;
	uint32_t x110 = UINT32_MAX;
	int64_t x111 = INT64_MIN;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = 1410;

    t27 = (x109==(x110|(x111/x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x113 = 35U;
	static int16_t x115 = -1;
	uint32_t x116 = 89U;
	volatile int32_t t28 = -21304669;

    t28 = (x113==(x114|(x115/x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	static int16_t x118 = -1;
	int64_t x119 = INT64_MIN;
	int8_t x120 = INT8_MIN;
	static volatile int32_t t29 = -2749;

    t29 = (x117==(x118|(x119/x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x122 = INT64_MAX;
	uint16_t x123 = 95U;
	int16_t x124 = INT16_MIN;
	volatile int32_t t30 = -5411;

    t30 = (x121==(x122|(x123/x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = -7111099;
	uint16_t x130 = UINT16_MAX;
	volatile int32_t x131 = INT32_MIN;
	static int32_t x132 = INT32_MAX;

    t31 = (x129==(x130|(x131/x132)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x133 = INT64_MIN;
	int16_t x134 = INT16_MIN;
	int32_t x135 = 602334;
	int64_t x136 = INT64_MIN;
	volatile int32_t t32 = 49547138;

    t32 = (x133==(x134|(x135/x136)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x139 = -1104;
	volatile int32_t t33 = -3582607;

    t33 = (x137==(x138|(x139/x140)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x141 = UINT64_MAX;
	int8_t x142 = 5;
	volatile uint32_t x143 = 5U;
	static uint16_t x144 = UINT16_MAX;

    t34 = (x141==(x142|(x143/x144)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x145 = -1;
	uint64_t x146 = UINT64_MAX;
	uint8_t x147 = UINT8_MAX;
	int64_t x148 = 9718285807146641LL;
	volatile int32_t t35 = 0;

    t35 = (x145==(x146|(x147/x148)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x149 = 56;
	volatile int32_t t36 = -738168;

    t36 = (x149==(x150|(x151/x152)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x153 = 12024377049956484LL;
	uint8_t x154 = UINT8_MAX;
	volatile int64_t x156 = -1LL;
	int32_t t37 = 708278221;

    t37 = (x153==(x154|(x155/x156)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x164 = INT16_MIN;
	volatile int32_t t38 = 57;

    t38 = (x161==(x162|(x163/x164)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x165 = 0U;
	int64_t x166 = -69552920457712LL;
	int32_t x167 = -13995;
	int16_t x168 = -5;

    t39 = (x165==(x166|(x167/x168)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint8_t x169 = UINT8_MAX;
	uint64_t x171 = UINT64_MAX;
	uint8_t x172 = UINT8_MAX;

    t40 = (x169==(x170|(x171/x172)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x173 = 8U;
	uint8_t x174 = 92U;
	int32_t x175 = INT32_MIN;
	int16_t x176 = INT16_MIN;

    t41 = (x173==(x174|(x175/x176)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x177 = INT32_MIN;
	int32_t x178 = -22;
	uint64_t x179 = 0LLU;
	int8_t x180 = 1;

    t42 = (x177==(x178|(x179/x180)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x181 = 0;
	static uint8_t x182 = 91U;
	volatile int32_t x184 = -31558384;
	static volatile int32_t t43 = 83;

    t43 = (x181==(x182|(x183/x184)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x185 = INT64_MIN;
	int8_t x186 = INT8_MIN;
	int64_t x188 = INT64_MIN;
	volatile int32_t t44 = 150;

    t44 = (x185==(x186|(x187/x188)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x189 = 1U;
	uint32_t x190 = 1828554053U;
	uint16_t x191 = UINT16_MAX;
	int32_t x192 = 42872811;
	static volatile int32_t t45 = -29631;

    t45 = (x189==(x190|(x191/x192)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x193 = INT64_MAX;
	static volatile int64_t x194 = INT64_MIN;
	volatile int16_t x196 = INT16_MIN;

    t46 = (x193==(x194|(x195/x196)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x197 = 285U;
	uint16_t x198 = UINT16_MAX;
	int64_t x199 = -3493262281775LL;
	int64_t x200 = INT64_MIN;

    t47 = (x197==(x198|(x199/x200)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x201 = 9;
	volatile int64_t x202 = INT64_MIN;
	uint32_t x203 = 87307U;
	int16_t x204 = INT16_MIN;

    t48 = (x201==(x202|(x203/x204)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x205 = 19LL;
	int16_t x206 = INT16_MIN;
	int16_t x208 = INT16_MIN;

    t49 = (x205==(x206|(x207/x208)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x209 = -1;
	int16_t x210 = 10840;
	volatile int32_t x211 = -1;
	int32_t x212 = -1;
	int32_t t50 = -50803;

    t50 = (x209==(x210|(x211/x212)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x214 = UINT16_MAX;
	int64_t x215 = INT64_MIN;
	static int64_t x216 = INT64_MAX;
	static volatile int32_t t51 = -197;

    t51 = (x213==(x214|(x215/x216)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x217 = INT64_MAX;
	int8_t x218 = -1;
	int64_t x219 = INT64_MAX;
	int64_t x220 = INT64_MIN;
	static int32_t t52 = 186799;

    t52 = (x217==(x218|(x219/x220)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = INT16_MIN;
	int8_t x222 = -1;
	static int32_t x224 = 2240933;
	volatile int32_t t53 = -863519273;

    t53 = (x221==(x222|(x223/x224)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = INT64_MIN;
	int8_t x226 = -1;
	uint64_t x227 = 96585754603218LLU;
	static int32_t t54 = -14441888;

    t54 = (x225==(x226|(x227/x228)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x229 = -1;
	static uint16_t x231 = UINT16_MAX;
	volatile uint64_t x232 = UINT64_MAX;
	int32_t t55 = 14;

    t55 = (x229==(x230|(x231/x232)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = INT16_MIN;
	int16_t x235 = INT16_MIN;
	volatile int16_t x236 = INT16_MIN;

    t56 = (x233==(x234|(x235/x236)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x237 = 79U;
	int8_t x238 = INT8_MIN;
	uint16_t x239 = 9U;
	int8_t x240 = -1;
	static volatile int32_t t57 = 0;

    t57 = (x237==(x238|(x239/x240)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x242 = 541966090881672LLU;
	uint16_t x243 = 148U;
	int32_t t58 = -83609706;

    t58 = (x241==(x242|(x243/x244)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x245 = 1;
	int16_t x246 = INT16_MIN;
	int32_t t59 = -47417;

    t59 = (x245==(x246|(x247/x248)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x253 = INT32_MIN;
	static int64_t x254 = 1686LL;
	static int32_t x255 = INT32_MAX;
	static int32_t x256 = 13122615;
	int32_t t60 = 530000;

    t60 = (x253==(x254|(x255/x256)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x257 = -1LL;
	int8_t x258 = 3;
	uint16_t x259 = UINT16_MAX;
	int64_t x260 = -1LL;
	int32_t t61 = 24547;

    t61 = (x257==(x258|(x259/x260)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x261 = -1;
	volatile uint16_t x262 = 1U;
	int16_t x264 = -248;

    t62 = (x261==(x262|(x263/x264)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x265 = 3161U;
	int64_t x266 = INT64_MIN;
	int8_t x267 = -45;
	volatile int16_t x268 = -1;
	volatile int32_t t63 = -410282;

    t63 = (x265==(x266|(x267/x268)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x269 = 219069016U;
	int32_t x270 = -1;
	volatile uint64_t x271 = 5LLU;
	int64_t x272 = 3077625045LL;
	volatile int32_t t64 = -4;

    t64 = (x269==(x270|(x271/x272)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x273 = -7LL;
	int8_t x274 = -5;
	volatile uint64_t x275 = 14216862771085LLU;
	uint8_t x276 = UINT8_MAX;
	int32_t t65 = 6738891;

    t65 = (x273==(x274|(x275/x276)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x277 = INT16_MIN;
	int16_t x278 = INT16_MIN;
	int16_t x279 = 242;
	volatile int32_t x280 = -8;
	int32_t t66 = -93728;

    t66 = (x277==(x278|(x279/x280)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x281 = UINT16_MAX;
	int64_t x282 = INT64_MIN;
	int16_t x283 = INT16_MIN;
	uint16_t x284 = 418U;
	int32_t t67 = -3;

    t67 = (x281==(x282|(x283/x284)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint8_t x286 = 2U;
	int8_t x287 = INT8_MIN;
	int16_t x288 = INT16_MIN;
	volatile int32_t t68 = -305486;

    t68 = (x285==(x286|(x287/x288)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x289 = INT16_MIN;
	uint16_t x291 = 31106U;
	int64_t x292 = 15089848278082902LL;
	volatile int32_t t69 = -603;

    t69 = (x289==(x290|(x291/x292)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x293 = INT16_MIN;
	int64_t x294 = INT64_MIN;
	uint32_t x295 = 1U;
	static int64_t x296 = INT64_MIN;

    t70 = (x293==(x294|(x295/x296)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x297 = -30;
	static uint32_t x299 = 84054043U;
	volatile int32_t t71 = 117813630;

    t71 = (x297==(x298|(x299/x300)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x301 = -1;
	volatile int8_t x302 = -6;
	uint64_t x303 = 433LLU;
	int64_t x304 = -18LL;
	volatile int32_t t72 = -44569;

    t72 = (x301==(x302|(x303/x304)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x305 = 118U;
	int16_t x306 = INT16_MIN;
	uint8_t x307 = UINT8_MAX;
	int32_t x308 = INT32_MIN;
	static volatile int32_t t73 = -62344457;

    t73 = (x305==(x306|(x307/x308)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x310 = INT8_MIN;
	uint16_t x312 = 14U;
	static volatile int32_t t74 = -112;

    t74 = (x309==(x310|(x311/x312)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x313 = 170U;
	static int32_t x315 = INT32_MIN;
	int64_t x316 = INT64_MIN;
	static int32_t t75 = 1158;

    t75 = (x313==(x314|(x315/x316)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x317 = 55;
	uint64_t x318 = 426287602LLU;
	uint64_t x319 = 4179679374527275LLU;
	volatile int32_t x320 = -10288;

    t76 = (x317==(x318|(x319/x320)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x323 = -228;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t77 = 446;

    t77 = (x321==(x322|(x323/x324)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x325 = INT64_MIN;
	static uint64_t x327 = 169483LLU;
	int8_t x328 = -1;
	int32_t t78 = 108;

    t78 = (x325==(x326|(x327/x328)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x330 = -412;
	static volatile uint16_t x331 = 0U;
	volatile uint8_t x332 = 99U;
	int32_t t79 = -4937466;

    t79 = (x329==(x330|(x331/x332)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x335 = 817;
	int32_t x336 = 1433;
	static volatile int32_t t80 = 4;

    t80 = (x333==(x334|(x335/x336)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x338 = 14;
	uint8_t x340 = UINT8_MAX;

    t81 = (x337==(x338|(x339/x340)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint8_t x341 = UINT8_MAX;
	int16_t x342 = 0;
	static uint16_t x343 = UINT16_MAX;
	static int32_t t82 = -696953;

    t82 = (x341==(x342|(x343/x344)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x346 = INT16_MIN;
	int16_t x347 = 34;
	int32_t x348 = INT32_MIN;

    t83 = (x345==(x346|(x347/x348)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x349 = UINT16_MAX;
	int16_t x350 = INT16_MAX;
	int32_t x351 = -2487;
	uint8_t x352 = 1U;
	int32_t t84 = 24014;

    t84 = (x349==(x350|(x351/x352)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x356 = UINT64_MAX;
	volatile int32_t t85 = -6375;

    t85 = (x353==(x354|(x355/x356)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x357 = 1031153U;
	uint8_t x358 = UINT8_MAX;
	uint16_t x359 = 28269U;
	int32_t t86 = 7;

    t86 = (x357==(x358|(x359/x360)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x361 = INT8_MIN;
	uint64_t x362 = 94091375LLU;
	volatile int8_t x363 = 31;
	int32_t t87 = 118848;

    t87 = (x361==(x362|(x363/x364)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x365 = 2791U;
	volatile int32_t x366 = -4;
	int8_t x367 = INT8_MIN;
	int8_t x368 = -1;
	int32_t t88 = 662426;

    t88 = (x365==(x366|(x367/x368)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x374 = 216788527LL;
	uint8_t x375 = 51U;
	volatile int32_t t89 = 21590049;

    t89 = (x373==(x374|(x375/x376)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x378 = INT16_MAX;
	int16_t x379 = -1;
	int16_t x380 = -74;
	int32_t t90 = -8483268;

    t90 = (x377==(x378|(x379/x380)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x381 = INT32_MIN;
	int8_t x382 = 16;

    t91 = (x381==(x382|(x383/x384)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x385 = -1;
	uint64_t x386 = UINT64_MAX;
	int16_t x387 = INT16_MAX;
	int64_t x388 = -1LL;
	static volatile int32_t t92 = -75;

    t92 = (x385==(x386|(x387/x388)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x389 = INT32_MIN;
	uint32_t x390 = UINT32_MAX;
	volatile uint16_t x391 = 14593U;
	static volatile int8_t x392 = -3;
	volatile int32_t t93 = -12191096;

    t93 = (x389==(x390|(x391/x392)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x393 = -6;
	int16_t x394 = -1;
	int8_t x395 = 0;
	volatile int64_t x396 = INT64_MIN;
	static int32_t t94 = -37929041;

    t94 = (x393==(x394|(x395/x396)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x397 = 1;
	static volatile int64_t x398 = -3135602608378146193LL;
	int64_t x399 = INT64_MAX;
	int64_t x400 = -898528519450956087LL;
	int32_t t95 = 0;

    t95 = (x397==(x398|(x399/x400)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x401 = 25129U;
	int8_t x402 = -3;
	uint32_t x403 = UINT32_MAX;
	int16_t x404 = INT16_MIN;
	static volatile int32_t t96 = -379;

    t96 = (x401==(x402|(x403/x404)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x406 = -1;
	int8_t x407 = -1;
	static int64_t x408 = 3365039LL;
	int32_t t97 = 712;

    t97 = (x405==(x406|(x407/x408)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x409 = UINT16_MAX;
	volatile int32_t x410 = -1;
	uint32_t x411 = UINT32_MAX;
	volatile int32_t t98 = 0;

    t98 = (x409==(x410|(x411/x412)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x413 = INT16_MAX;
	int16_t x414 = INT16_MIN;
	uint64_t x416 = 27LLU;
	int32_t t99 = -178716;

    t99 = (x413==(x414|(x415/x416)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x417 = -1;
	uint8_t x418 = UINT8_MAX;
	uint16_t x420 = 397U;
	volatile int32_t t100 = 8038774;

    t100 = (x417==(x418|(x419/x420)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x421 = INT32_MAX;
	int16_t x422 = 2249;
	int8_t x423 = INT8_MIN;
	int16_t x424 = -1;

    t101 = (x421==(x422|(x423/x424)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x425 = 15437917;
	volatile int8_t x426 = INT8_MAX;
	int32_t x427 = INT32_MAX;
	int32_t t102 = 0;

    t102 = (x425==(x426|(x427/x428)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x429 = INT8_MAX;
	int32_t x430 = -2209;
	int32_t x431 = 3677220;
	volatile int8_t x432 = 11;

    t103 = (x429==(x430|(x431/x432)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x433 = INT32_MIN;
	volatile int8_t x434 = 0;
	int64_t x435 = -1LL;
	int64_t x436 = -1LL;

    t104 = (x433==(x434|(x435/x436)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x437 = INT64_MAX;
	static int32_t x438 = -17197355;
	int32_t x439 = INT32_MAX;
	int16_t x440 = INT16_MIN;
	volatile int32_t t105 = 46;

    t105 = (x437==(x438|(x439/x440)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x441 = INT16_MAX;
	int64_t x443 = -1LL;
	int16_t x444 = INT16_MIN;

    t106 = (x441==(x442|(x443/x444)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x445 = -1;
	static int64_t x447 = 516692069836LL;
	volatile int32_t t107 = -444334232;

    t107 = (x445==(x446|(x447/x448)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x449 = 1;
	uint64_t x450 = 520169104LLU;
	int8_t x452 = -1;

    t108 = (x449==(x450|(x451/x452)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x453 = INT8_MAX;
	uint32_t x454 = UINT32_MAX;
	int64_t x455 = INT64_MIN;
	static int32_t t109 = -103138197;

    t109 = (x453==(x454|(x455/x456)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x458 = -1;
	volatile int16_t x459 = 7170;
	static int64_t x460 = -18601041638LL;
	volatile int32_t t110 = -14;

    t110 = (x457==(x458|(x459/x460)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x461 = INT16_MAX;
	int8_t x462 = -7;
	static int64_t x463 = INT64_MIN;
	int32_t x464 = 14659;
	volatile int32_t t111 = 105134;

    t111 = (x461==(x462|(x463/x464)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x466 = UINT32_MAX;
	static volatile int32_t t112 = -3719;

    t112 = (x465==(x466|(x467/x468)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x469 = INT16_MAX;
	int64_t x470 = INT64_MIN;
	volatile int64_t x471 = INT64_MIN;
	static volatile int16_t x472 = INT16_MIN;
	static int32_t t113 = -65601508;

    t113 = (x469==(x470|(x471/x472)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x473 = 0U;
	uint64_t x474 = UINT64_MAX;
	int8_t x475 = -16;
	volatile uint16_t x476 = UINT16_MAX;

    t114 = (x473==(x474|(x475/x476)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x477 = UINT8_MAX;
	int32_t x478 = -98292144;
	int32_t x479 = 3531;
	static uint16_t x480 = 3U;
	int32_t t115 = 35;

    t115 = (x477==(x478|(x479/x480)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x481 = INT32_MIN;
	uint16_t x482 = UINT16_MAX;
	int32_t x483 = -1836;
	int8_t x484 = -2;
	volatile int32_t t116 = 364;

    t116 = (x481==(x482|(x483/x484)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x485 = INT32_MIN;
	int16_t x487 = 5845;
	volatile uint32_t x488 = 19U;
	int32_t t117 = 140942598;

    t117 = (x485==(x486|(x487/x488)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x489 = 6156763881054309LL;
	volatile int32_t x490 = INT32_MIN;
	int64_t x491 = -1LL;
	static volatile int32_t t118 = -236;

    t118 = (x489==(x490|(x491/x492)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x493 = 5791721U;
	int64_t x495 = -4LL;
	uint32_t x496 = 127U;
	volatile int32_t t119 = 27356736;

    t119 = (x493==(x494|(x495/x496)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x497 = -1;
	static uint32_t x498 = 1823U;
	int32_t x499 = INT32_MAX;
	uint16_t x500 = UINT16_MAX;

    t120 = (x497==(x498|(x499/x500)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x502 = 2243U;
	static int32_t x503 = INT32_MAX;
	int32_t t121 = -2087;

    t121 = (x501==(x502|(x503/x504)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x505 = -113699313359LL;
	uint16_t x507 = 17U;
	volatile int32_t t122 = -46632;

    t122 = (x505==(x506|(x507/x508)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x509 = UINT8_MAX;
	static uint16_t x510 = 0U;
	static int8_t x512 = -1;

    t123 = (x509==(x510|(x511/x512)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x513 = INT32_MAX;
	int64_t x514 = INT64_MIN;
	uint16_t x515 = 516U;
	int8_t x516 = 3;
	volatile int32_t t124 = -80174591;

    t124 = (x513==(x514|(x515/x516)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x517 = INT16_MIN;
	int32_t x519 = INT32_MIN;
	volatile int32_t x520 = -24;

    t125 = (x517==(x518|(x519/x520)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x521 = INT16_MIN;
	uint8_t x522 = 9U;
	int16_t x524 = INT16_MIN;
	volatile int32_t t126 = 4;

    t126 = (x521==(x522|(x523/x524)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x525 = -1;
	uint32_t x526 = 140533037U;
	int8_t x527 = -1;
	int32_t x528 = INT32_MIN;
	volatile int32_t t127 = -225597629;

    t127 = (x525==(x526|(x527/x528)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x529 = -192263831LL;
	static int64_t x530 = INT64_MIN;
	int64_t x531 = -1LL;

    t128 = (x529==(x530|(x531/x532)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x533 = INT32_MAX;
	uint64_t x534 = 137333690385012590LLU;
	static uint8_t x535 = UINT8_MAX;
	volatile int32_t t129 = -178566;

    t129 = (x533==(x534|(x535/x536)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x537 = 28865244483819314LL;
	int64_t x538 = INT64_MIN;
	int8_t x539 = INT8_MIN;
	volatile int16_t x540 = INT16_MIN;
	int32_t t130 = 11673;

    t130 = (x537==(x538|(x539/x540)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x542 = -1;
	int8_t x543 = INT8_MAX;

    t131 = (x541==(x542|(x543/x544)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x546 = 1;
	int32_t x547 = -9113;
	static int64_t x548 = INT64_MIN;
	static int32_t t132 = 1;

    t132 = (x545==(x546|(x547/x548)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x550 = -1;
	volatile int16_t x551 = 15070;
	volatile uint8_t x552 = 113U;

    t133 = (x549==(x550|(x551/x552)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x553 = 6320600U;
	volatile uint8_t x554 = 5U;
	int64_t x555 = INT64_MIN;
	uint32_t x556 = 423122898U;
	static volatile int32_t t134 = 459623;

    t134 = (x553==(x554|(x555/x556)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x557 = 176908589;
	int8_t x559 = -1;
	uint32_t x560 = UINT32_MAX;

    t135 = (x557==(x558|(x559/x560)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x561 = INT64_MAX;
	int64_t x562 = 396011368520LL;
	int32_t x563 = -1;
	volatile int8_t x564 = -1;

    t136 = (x561==(x562|(x563/x564)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x565 = 2U;
	static int16_t x567 = -83;
	static int64_t x568 = INT64_MIN;
	static volatile int32_t t137 = 530143815;

    t137 = (x565==(x566|(x567/x568)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x569 = -1LL;
	int64_t x571 = 198437161879962LL;
	volatile int32_t t138 = -106592417;

    t138 = (x569==(x570|(x571/x572)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x573 = INT16_MAX;
	static int16_t x575 = -158;
	volatile int32_t t139 = -2104201;

    t139 = (x573==(x574|(x575/x576)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x578 = -1;
	int8_t x579 = INT8_MIN;
	uint8_t x580 = 4U;
	static volatile int32_t t140 = -7538159;

    t140 = (x577==(x578|(x579/x580)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x581 = 1LLU;
	int32_t x582 = INT32_MAX;
	volatile uint64_t x583 = 42LLU;
	static int8_t x584 = -63;

    t141 = (x581==(x582|(x583/x584)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x585 = 0U;
	static uint64_t x586 = UINT64_MAX;
	volatile int16_t x587 = 123;
	static volatile uint16_t x588 = UINT16_MAX;
	int32_t t142 = -33;

    t142 = (x585==(x586|(x587/x588)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x589 = 0U;
	int8_t x590 = INT8_MIN;
	volatile int8_t x591 = -1;
	int64_t x592 = INT64_MIN;
	int32_t t143 = 399;

    t143 = (x589==(x590|(x591/x592)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x593 = 31637LLU;
	int32_t x594 = 365217;
	volatile int16_t x596 = INT16_MAX;
	static int32_t t144 = -552714390;

    t144 = (x593==(x594|(x595/x596)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x597 = INT32_MIN;
	volatile int8_t x600 = INT8_MIN;
	int32_t t145 = 3181;

    t145 = (x597==(x598|(x599/x600)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x602 = 12551;
	int16_t x603 = INT16_MAX;
	uint64_t x604 = 545LLU;
	static volatile int32_t t146 = 9765;

    t146 = (x601==(x602|(x603/x604)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x605 = 199U;
	static volatile uint16_t x606 = 5U;
	volatile int32_t t147 = 31565;

    t147 = (x605==(x606|(x607/x608)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x613 = INT64_MIN;
	int64_t x614 = INT64_MAX;
	static uint16_t x615 = UINT16_MAX;
	int64_t x616 = INT64_MIN;
	int32_t t148 = 170682;

    t148 = (x613==(x614|(x615/x616)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x617 = 15303U;
	static int32_t x618 = 1;
	static int8_t x620 = INT8_MIN;
	int32_t t149 = 631127;

    t149 = (x617==(x618|(x619/x620)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x622 = -4250560083429180211LL;
	uint64_t x623 = UINT64_MAX;
	volatile int16_t x624 = INT16_MIN;
	int32_t t150 = 58;

    t150 = (x621==(x622|(x623/x624)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x625 = UINT64_MAX;
	volatile int32_t x627 = 65399281;
	static int32_t t151 = -260029557;

    t151 = (x625==(x626|(x627/x628)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x634 = INT8_MIN;
	volatile uint8_t x635 = 0U;
	uint64_t x636 = UINT64_MAX;
	int32_t t152 = -3;

    t152 = (x633==(x634|(x635/x636)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x637 = 4500712665267185LLU;
	int32_t x638 = INT32_MIN;
	int32_t x639 = 3458;
	int32_t x640 = INT32_MIN;
	static volatile int32_t t153 = -35523754;

    t153 = (x637==(x638|(x639/x640)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x642 = -63;
	static int8_t x643 = INT8_MIN;
	int16_t x644 = -5;
	static int32_t t154 = 129980;

    t154 = (x641==(x642|(x643/x644)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x645 = 99012129U;
	int8_t x648 = INT8_MIN;
	volatile int32_t t155 = -91073;

    t155 = (x645==(x646|(x647/x648)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x649 = UINT8_MAX;
	int16_t x650 = -10;
	volatile uint8_t x651 = 0U;
	volatile uint32_t x652 = 95720U;
	volatile int32_t t156 = -295416192;

    t156 = (x649==(x650|(x651/x652)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x654 = INT32_MIN;
	int64_t x655 = INT64_MAX;
	volatile int32_t t157 = -1640409;

    t157 = (x653==(x654|(x655/x656)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x658 = 15U;
	volatile uint16_t x659 = 4776U;
	int64_t x660 = INT64_MIN;

    t158 = (x657==(x658|(x659/x660)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x661 = UINT64_MAX;
	int16_t x662 = 1988;
	int8_t x663 = 1;
	uint16_t x664 = 701U;
	static volatile int32_t t159 = 64283016;

    t159 = (x661==(x662|(x663/x664)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x666 = -438LL;
	volatile int8_t x668 = -3;
	int32_t t160 = 17951;

    t160 = (x665==(x666|(x667/x668)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x669 = -1;
	int8_t x670 = 41;
	static int32_t x672 = INT32_MIN;
	static int32_t t161 = 13825;

    t161 = (x669==(x670|(x671/x672)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x673 = INT16_MIN;
	int8_t x674 = -1;
	uint64_t x675 = 21LLU;
	int64_t x676 = -27630LL;

    t162 = (x673==(x674|(x675/x676)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x679 = UINT16_MAX;
	static int32_t x680 = INT32_MIN;

    t163 = (x677==(x678|(x679/x680)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x681 = INT32_MIN;
	uint64_t x682 = 156LLU;
	uint16_t x683 = 105U;
	int64_t x684 = 393521214490574607LL;
	int32_t t164 = -31517536;

    t164 = (x681==(x682|(x683/x684)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x685 = INT64_MAX;
	uint32_t x687 = 111585160U;
	int8_t x688 = -1;

    t165 = (x685==(x686|(x687/x688)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x690 = 477674LLU;
	static int32_t x692 = INT32_MAX;
	volatile int32_t t166 = -1363;

    t166 = (x689==(x690|(x691/x692)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x693 = INT8_MIN;
	volatile int8_t x695 = -1;
	int64_t x696 = -1LL;
	int32_t t167 = 10;

    t167 = (x693==(x694|(x695/x696)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x701 = INT64_MIN;
	int32_t x703 = INT32_MIN;
	uint32_t x704 = 47U;
	static int32_t t168 = -251;

    t168 = (x701==(x702|(x703/x704)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x706 = 17;
	int64_t x707 = -1LL;
	int8_t x708 = -4;
	int32_t t169 = 0;

    t169 = (x705==(x706|(x707/x708)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x709 = INT64_MIN;
	uint16_t x710 = UINT16_MAX;
	int32_t x711 = INT32_MAX;
	volatile int32_t x712 = INT32_MIN;
	volatile int32_t t170 = 58;

    t170 = (x709==(x710|(x711/x712)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x713 = INT64_MIN;
	uint8_t x714 = UINT8_MAX;
	uint64_t x715 = 3224480LLU;
	uint64_t x716 = 19748109LLU;
	int32_t t171 = 354982341;

    t171 = (x713==(x714|(x715/x716)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x718 = -27;
	uint8_t x719 = UINT8_MAX;
	volatile int8_t x720 = -1;
	volatile int32_t t172 = 38623;

    t172 = (x717==(x718|(x719/x720)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x722 = -1;
	int8_t x723 = 1;
	uint32_t x724 = 44706U;
	int32_t t173 = 45255;

    t173 = (x721==(x722|(x723/x724)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x726 = 4544145;
	uint16_t x727 = 282U;
	int32_t t174 = -173410;

    t174 = (x725==(x726|(x727/x728)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x729 = 5U;
	static int32_t x731 = -7556;
	int32_t t175 = 282422269;

    t175 = (x729==(x730|(x731/x732)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x733 = INT32_MAX;
	int8_t x734 = -1;
	volatile int32_t x735 = INT32_MIN;
	static int32_t x736 = INT32_MIN;
	volatile int32_t t176 = -562568;

    t176 = (x733==(x734|(x735/x736)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x737 = INT8_MIN;
	static int64_t x739 = INT64_MIN;
	static int8_t x740 = -19;
	volatile int32_t t177 = 1;

    t177 = (x737==(x738|(x739/x740)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x745 = 10517;
	static volatile int16_t x747 = -1;
	volatile int8_t x748 = 4;

    t178 = (x745==(x746|(x747/x748)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x750 = -1;
	static uint32_t x751 = 67015U;
	int8_t x752 = INT8_MIN;
	int32_t t179 = 380232;

    t179 = (x749==(x750|(x751/x752)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x753 = INT64_MIN;
	uint16_t x754 = 0U;
	uint32_t x755 = 5881799U;
	volatile int32_t t180 = -8093971;

    t180 = (x753==(x754|(x755/x756)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x757 = 2647;
	int64_t x758 = INT64_MIN;
	uint64_t x760 = UINT64_MAX;
	static int32_t t181 = 31;

    t181 = (x757==(x758|(x759/x760)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x761 = 2U;
	int64_t x764 = -96211115LL;

    t182 = (x761==(x762|(x763/x764)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x766 = 1U;
	uint32_t x767 = 17859U;
	static int32_t x768 = INT32_MIN;
	volatile int32_t t183 = -16097;

    t183 = (x765==(x766|(x767/x768)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x769 = -2321;
	static int64_t x770 = 3830820347LL;
	int32_t x771 = -1;
	int8_t x772 = INT8_MIN;
	int32_t t184 = -25592859;

    t184 = (x769==(x770|(x771/x772)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x773 = INT16_MIN;
	int32_t x774 = 512406;
	uint32_t x775 = UINT32_MAX;
	volatile uint32_t x776 = UINT32_MAX;
	int32_t t185 = 2;

    t185 = (x773==(x774|(x775/x776)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x777 = UINT64_MAX;
	uint64_t x778 = UINT64_MAX;
	int16_t x779 = INT16_MIN;

    t186 = (x777==(x778|(x779/x780)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x781 = -1;
	static uint32_t x783 = 445330U;
	int8_t x784 = INT8_MIN;
	static int32_t t187 = 76780639;

    t187 = (x781==(x782|(x783/x784)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x785 = 14671666019541LLU;
	int16_t x786 = -15;
	int16_t x787 = INT16_MIN;
	int32_t x788 = INT32_MIN;
	volatile int32_t t188 = -12167908;

    t188 = (x785==(x786|(x787/x788)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x789 = 2226LLU;
	uint16_t x790 = 2798U;
	int32_t t189 = 1951;

    t189 = (x789==(x790|(x791/x792)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x793 = 44;
	static uint64_t x794 = 15221358183LLU;
	int8_t x795 = -1;
	int16_t x796 = 1390;
	int32_t t190 = 10756458;

    t190 = (x793==(x794|(x795/x796)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x797 = 0;
	volatile int16_t x798 = INT16_MAX;
	int64_t x799 = -1LL;
	volatile int8_t x800 = INT8_MAX;
	int32_t t191 = -192742;

    t191 = (x797==(x798|(x799/x800)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x801 = 351U;
	volatile int64_t x803 = INT64_MAX;
	int16_t x804 = INT16_MIN;
	volatile int32_t t192 = 1340;

    t192 = (x801==(x802|(x803/x804)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x805 = -5340;
	int32_t x806 = INT32_MIN;
	static int64_t x808 = -3LL;
	int32_t t193 = 1;

    t193 = (x805==(x806|(x807/x808)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x809 = INT16_MIN;
	int8_t x810 = -1;
	volatile uint64_t x811 = 549255LLU;

    t194 = (x809==(x810|(x811/x812)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x813 = -15;
	volatile int64_t x814 = 1086LL;
	int64_t x815 = -12159501065LL;
	volatile uint32_t x816 = UINT32_MAX;
	volatile int32_t t195 = 97978;

    t195 = (x813==(x814|(x815/x816)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x818 = -1;
	uint32_t x819 = 2700610U;
	int32_t x820 = INT32_MAX;
	volatile int32_t t196 = -53818078;

    t196 = (x817==(x818|(x819/x820)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x821 = UINT64_MAX;
	uint8_t x822 = UINT8_MAX;
	uint32_t x824 = UINT32_MAX;
	int32_t t197 = -1665554;

    t197 = (x821==(x822|(x823/x824)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x826 = 7693U;
	static int8_t x827 = INT8_MIN;
	int16_t x828 = 16361;
	volatile int32_t t198 = -59541;

    t198 = (x825==(x826|(x827/x828)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x829 = -9;
	int64_t x830 = 24275692680937LL;
	volatile int32_t t199 = -204;

    t199 = (x829==(x830|(x831/x832)));

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

