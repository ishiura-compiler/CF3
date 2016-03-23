
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

static int32_t x1 = -1;
int8_t x3 = 11;
static int32_t x4 = -1;
uint32_t x18 = 733194065U;
static volatile int8_t x21 = INT8_MIN;
static int16_t x24 = INT16_MIN;
uint16_t x26 = 180U;
uint64_t x29 = 123276741700LLU;
static volatile int32_t t6 = -836;
int32_t t8 = 798;
int32_t t9 = -305593;
uint32_t x50 = 2030754434U;
int16_t x52 = INT16_MAX;
volatile int16_t x61 = 2;
volatile int8_t x62 = INT8_MAX;
int64_t x65 = INT64_MIN;
int64_t x66 = INT64_MIN;
int64_t x86 = 16153612727275LL;
static int64_t x90 = INT64_MIN;
static int8_t x91 = INT8_MIN;
static volatile int16_t x97 = INT16_MIN;
uint16_t x101 = UINT16_MAX;
static volatile int32_t t21 = -1840;
static int32_t x109 = INT32_MAX;
static volatile int16_t x110 = INT16_MAX;
int8_t x120 = 1;
int32_t x121 = 31045170;
uint64_t x123 = 14460LLU;
uint16_t x126 = UINT16_MAX;
int32_t x127 = -1;
int32_t x128 = INT32_MAX;
int32_t t27 = -1;
static int8_t x133 = INT8_MIN;
int16_t x144 = -124;
int32_t t30 = -1;
int16_t x147 = INT16_MIN;
volatile uint32_t x155 = 1226U;
volatile int32_t t35 = -407;
static int32_t t36 = 944839656;
int8_t x169 = -1;
uint16_t x179 = 13U;
int32_t x186 = INT32_MAX;
volatile int32_t x192 = 1;
int8_t x200 = -6;
volatile uint32_t x205 = 61110U;
static int32_t x218 = -142175;
static int8_t x229 = 9;
int32_t x232 = 431079006;
uint8_t x237 = 2U;
static uint16_t x253 = 13U;
uint32_t x254 = 2057976U;
int8_t x256 = INT8_MIN;
volatile int32_t t53 = 103;
int16_t x273 = -3;
volatile int32_t t57 = -2178;
volatile int32_t x278 = INT32_MIN;
int32_t x281 = INT32_MIN;
int8_t x284 = INT8_MIN;
int8_t x287 = 14;
int32_t t60 = -6764286;
static uint32_t x289 = 0U;
int32_t t62 = 62003;
static volatile int32_t x299 = 196;
int8_t x301 = -5;
volatile int16_t x309 = INT16_MIN;
int16_t x316 = INT16_MIN;
int32_t x320 = INT32_MAX;
int64_t x325 = INT64_MAX;
volatile int32_t t68 = 2007;
int16_t x329 = -2;
static int16_t x330 = -806;
int32_t x334 = -3624;
uint32_t x337 = 3367U;
int16_t x338 = INT16_MAX;
uint8_t x345 = 6U;
uint16_t x348 = 206U;
int32_t x351 = INT32_MIN;
int32_t x353 = INT32_MIN;
int32_t t74 = -22866959;
static volatile int32_t t76 = -243678;
static int64_t x367 = INT64_MIN;
static int32_t t77 = -14;
uint16_t x370 = 2U;
int8_t x377 = 0;
int32_t t79 = 931088502;
uint64_t x383 = 9870LLU;
int64_t x384 = INT64_MAX;
volatile int32_t t80 = -244360;
static int8_t x386 = -59;
uint32_t x388 = 135U;
int64_t x389 = INT64_MIN;
int16_t x392 = INT16_MIN;
uint64_t x394 = 1LLU;
volatile int32_t t84 = 148891146;
static int8_t x407 = INT8_MIN;
uint32_t x409 = 21918U;
int32_t x423 = 90;
uint32_t x424 = 42U;
int32_t t89 = 7534063;
static int8_t x425 = INT8_MIN;
int16_t x431 = INT16_MIN;
uint32_t x432 = UINT32_MAX;
uint16_t x436 = 8U;
static uint16_t x440 = 1932U;
volatile uint64_t x446 = 14692977LLU;
int16_t x449 = 91;
int32_t x458 = 0;
int64_t x459 = -1LL;
uint8_t x460 = 2U;
uint16_t x463 = 613U;
int32_t x477 = -1;
int16_t x479 = -1;
int16_t x480 = -1;
uint8_t x488 = 100U;
static int32_t x496 = INT32_MAX;
int64_t x499 = -7233311014109355LL;
volatile int64_t x508 = INT64_MAX;
int32_t t110 = 64359200;
volatile int32_t t111 = 32;
volatile int32_t t112 = 0;
int32_t x541 = 95243544;
uint64_t x543 = 222916073234LLU;
int8_t x551 = INT8_MAX;
int32_t t116 = -265656919;
int32_t x558 = -1;
uint16_t x559 = 0U;
uint64_t x560 = 4723852LLU;
int32_t t118 = -14666248;
int32_t x561 = INT32_MIN;
uint8_t x573 = 3U;
uint32_t x574 = 103193798U;
static uint8_t x577 = 26U;
int32_t t123 = 3338;
int16_t x585 = INT16_MIN;
volatile int32_t t126 = 28;
uint8_t x606 = 0U;
uint8_t x611 = 95U;
uint16_t x614 = 32377U;
static int8_t x615 = INT8_MIN;
volatile int32_t t130 = -38312;
volatile int8_t x619 = INT8_MIN;
uint32_t x620 = 13049U;
volatile int32_t t132 = -548362;
int32_t t134 = 113271;
int8_t x639 = INT8_MIN;
int16_t x640 = INT16_MAX;
static int8_t x649 = INT8_MAX;
uint8_t x651 = 109U;
uint16_t x652 = 2U;
int32_t t138 = -5320;
volatile int8_t x663 = -1;
int32_t t142 = 45468259;
uint64_t x671 = 6115306404116210354LLU;
volatile uint64_t x672 = 14092LLU;
static volatile int8_t x674 = -1;
volatile int32_t t144 = -21;
static volatile int32_t t145 = 485681672;
static volatile uint8_t x690 = 32U;
volatile int32_t x692 = INT32_MIN;
volatile int64_t x700 = -1LL;
int32_t t147 = -755822075;
uint8_t x702 = UINT8_MAX;
static int8_t x703 = -1;
int16_t x712 = -1;
int64_t x716 = INT64_MIN;
volatile int16_t x725 = 146;
int16_t x731 = INT16_MIN;
int16_t x732 = INT16_MIN;
static uint64_t x734 = UINT64_MAX;
int32_t t157 = 1066694049;
volatile int32_t t159 = -93958;
int8_t x757 = INT8_MIN;
uint32_t x763 = UINT32_MAX;
uint8_t x767 = 0U;
int16_t x769 = 24;
int32_t t164 = -958312444;
uint64_t x774 = UINT64_MAX;
int32_t x778 = 3602;
static int16_t x779 = INT16_MIN;
int16_t x780 = 443;
static int8_t x798 = INT8_MAX;
static int32_t t170 = 24;
volatile int8_t x807 = INT8_MIN;
static volatile int8_t x810 = 18;
volatile int32_t x811 = -364828;
volatile int32_t t173 = -818;
uint16_t x817 = 5414U;
int16_t x819 = INT16_MIN;
uint64_t x822 = UINT64_MAX;
int16_t x823 = INT16_MIN;
int8_t x830 = INT8_MIN;
uint32_t x831 = UINT32_MAX;
static uint8_t x838 = 21U;
volatile int64_t x842 = INT64_MIN;
volatile int16_t x843 = -1;
static uint8_t x845 = 6U;
int32_t x847 = -1;
uint32_t x849 = 224138602U;
int8_t x855 = -1;
int32_t x862 = 2;
int64_t x863 = -12358LL;
static uint8_t x874 = 124U;
volatile uint64_t x877 = 1863223LLU;
volatile uint32_t x882 = 0U;
volatile int32_t t192 = 1240377;
volatile int32_t x911 = INT32_MIN;
int8_t x916 = -2;
int32_t t195 = 0;
int64_t x920 = -1LL;
uint8_t x931 = 17U;
volatile int32_t t199 = 67969006;


void f0(void) {
    	int8_t x2 = INT8_MAX;
	volatile int32_t t0 = -7677;

    t0 = ((x1!=x2)<=(x3-x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x5 = UINT32_MAX;
	uint64_t x6 = 22606LLU;
	uint64_t x7 = 1LLU;
	static int64_t x8 = INT64_MIN;
	int32_t t1 = -207;

    t1 = ((x5!=x6)<=(x7-x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x13 = 96309462851907208LLU;
	int64_t x14 = -379069451LL;
	static uint64_t x15 = 475015070919LLU;
	int8_t x16 = INT8_MIN;
	volatile int32_t t2 = -1335;

    t2 = ((x13!=x14)<=(x15-x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = 2U;
	uint8_t x19 = 4U;
	uint64_t x20 = UINT64_MAX;
	volatile int32_t t3 = 0;

    t3 = ((x17!=x18)<=(x19-x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x22 = INT32_MIN;
	int64_t x23 = INT64_MIN;
	static volatile int32_t t4 = 78251;

    t4 = ((x21!=x22)<=(x23-x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = -1;
	int16_t x27 = INT16_MIN;
	uint32_t x28 = 57534332U;
	static volatile int32_t t5 = -7448162;

    t5 = ((x25!=x26)<=(x27-x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x30 = -1;
	volatile int8_t x31 = 2;
	int16_t x32 = -4;

    t6 = ((x29!=x30)<=(x31-x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x37 = INT64_MIN;
	int64_t x38 = INT64_MIN;
	uint32_t x39 = UINT32_MAX;
	volatile int32_t x40 = -1;
	int32_t t7 = -7;

    t7 = ((x37!=x38)<=(x39-x40));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = -1;
	uint64_t x42 = 14953037046092LLU;
	int8_t x43 = INT8_MAX;
	static volatile int8_t x44 = -1;

    t8 = ((x41!=x42)<=(x43-x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x45 = INT64_MIN;
	static uint32_t x46 = 837U;
	volatile int64_t x47 = INT64_MAX;
	uint64_t x48 = 10304102698687LLU;

    t9 = ((x45!=x46)<=(x47-x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = -1;
	int64_t x51 = 26213948514179095LL;
	int32_t t10 = 68;

    t10 = ((x49!=x50)<=(x51-x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x57 = 0;
	uint64_t x58 = 9470875037LLU;
	int32_t x59 = INT32_MAX;
	int64_t x60 = 13759439LL;
	static int32_t t11 = 206200640;

    t11 = ((x57!=x58)<=(x59-x60));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x63 = 23888517U;
	uint32_t x64 = 17203385U;
	static int32_t t12 = 362544310;

    t12 = ((x61!=x62)<=(x63-x64));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x67 = -1LL;
	int8_t x68 = INT8_MIN;
	volatile int32_t t13 = 387177450;

    t13 = ((x65!=x66)<=(x67-x68));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x69 = 1087;
	static int8_t x70 = 9;
	volatile uint8_t x71 = UINT8_MAX;
	int64_t x72 = INT64_MAX;
	volatile int32_t t14 = 0;

    t14 = ((x69!=x70)<=(x71-x72));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x73 = 5LL;
	static uint8_t x74 = 20U;
	int32_t x75 = 5;
	int16_t x76 = -795;
	volatile int32_t t15 = -38;

    t15 = ((x73!=x74)<=(x75-x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x85 = 429978LLU;
	static volatile int32_t x87 = -1;
	int32_t x88 = 0;
	volatile int32_t t16 = -89384555;

    t16 = ((x85!=x86)<=(x87-x88));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x89 = 13615;
	uint64_t x92 = 8714142140644LLU;
	volatile int32_t t17 = -197756760;

    t17 = ((x89!=x90)<=(x91-x92));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int16_t x93 = INT16_MIN;
	int16_t x94 = -1;
	uint8_t x95 = UINT8_MAX;
	int64_t x96 = INT64_MAX;
	static int32_t t18 = -462151;

    t18 = ((x93!=x94)<=(x95-x96));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x98 = INT16_MIN;
	int32_t x99 = 3527;
	int8_t x100 = INT8_MAX;
	int32_t t19 = 0;

    t19 = ((x97!=x98)<=(x99-x100));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x102 = 6073312U;
	int8_t x103 = INT8_MIN;
	volatile uint8_t x104 = 28U;
	volatile int32_t t20 = 75;

    t20 = ((x101!=x102)<=(x103-x104));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x105 = 7418310604267368LL;
	int32_t x106 = INT32_MIN;
	static uint16_t x107 = 181U;
	int8_t x108 = INT8_MIN;

    t21 = ((x105!=x106)<=(x107-x108));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x111 = -1;
	volatile int8_t x112 = INT8_MIN;
	volatile int32_t t22 = 17157;

    t22 = ((x109!=x110)<=(x111-x112));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x113 = INT8_MIN;
	static int16_t x114 = INT16_MAX;
	int64_t x115 = 12106LL;
	volatile int32_t x116 = -1;
	volatile int32_t t23 = 39;

    t23 = ((x113!=x114)<=(x115-x116));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x117 = 73106741904011LL;
	int16_t x118 = -1;
	int8_t x119 = INT8_MIN;
	volatile int32_t t24 = -791812672;

    t24 = ((x117!=x118)<=(x119-x120));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x122 = INT8_MIN;
	int64_t x124 = INT64_MAX;
	int32_t t25 = 352574197;

    t25 = ((x121!=x122)<=(x123-x124));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x125 = INT64_MIN;
	volatile int32_t t26 = -205786;

    t26 = ((x125!=x126)<=(x127-x128));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x129 = 184179878132LLU;
	int64_t x130 = INT64_MIN;
	int8_t x131 = INT8_MAX;
	int32_t x132 = -1004;

    t27 = ((x129!=x130)<=(x131-x132));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x134 = 24773094502766167LLU;
	int64_t x135 = -2376944LL;
	int32_t x136 = -2072470;
	volatile int32_t t28 = 6877772;

    t28 = ((x133!=x134)<=(x135-x136));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x137 = INT8_MIN;
	int64_t x138 = -1LL;
	uint16_t x139 = 6878U;
	int16_t x140 = -1;
	int32_t t29 = 1;

    t29 = ((x137!=x138)<=(x139-x140));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x141 = INT64_MAX;
	uint32_t x142 = 486U;
	static volatile int16_t x143 = -780;

    t30 = ((x141!=x142)<=(x143-x144));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x145 = INT32_MAX;
	int16_t x146 = INT16_MIN;
	int16_t x148 = -111;
	volatile int32_t t31 = -421;

    t31 = ((x145!=x146)<=(x147-x148));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x149 = -1;
	volatile uint8_t x150 = 6U;
	volatile uint8_t x151 = UINT8_MAX;
	volatile int32_t x152 = -1;
	volatile int32_t t32 = -91226;

    t32 = ((x149!=x150)<=(x151-x152));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x153 = -1;
	int32_t x154 = INT32_MAX;
	int32_t x156 = INT32_MAX;
	int32_t t33 = -30951;

    t33 = ((x153!=x154)<=(x155-x156));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x157 = 28648859U;
	int16_t x158 = -1;
	int8_t x159 = -1;
	volatile int8_t x160 = INT8_MIN;
	static volatile int32_t t34 = 717;

    t34 = ((x157!=x158)<=(x159-x160));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint32_t x161 = UINT32_MAX;
	volatile int32_t x162 = INT32_MIN;
	uint64_t x163 = 2882282LLU;
	volatile int32_t x164 = 0;

    t35 = ((x161!=x162)<=(x163-x164));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x165 = INT16_MAX;
	int64_t x166 = -30674315646LL;
	static int64_t x167 = -69964305150743216LL;
	int16_t x168 = -1;

    t36 = ((x165!=x166)<=(x167-x168));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x170 = UINT8_MAX;
	static int8_t x171 = INT8_MIN;
	volatile int64_t x172 = INT64_MIN;
	volatile int32_t t37 = -162759;

    t37 = ((x169!=x170)<=(x171-x172));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x173 = 3560U;
	volatile uint16_t x174 = 44U;
	volatile int32_t x175 = 462163;
	uint64_t x176 = UINT64_MAX;
	int32_t t38 = 961150624;

    t38 = ((x173!=x174)<=(x175-x176));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x177 = 2265340722512713359LLU;
	volatile int8_t x178 = INT8_MAX;
	uint64_t x180 = 628628LLU;
	static volatile int32_t t39 = -87467278;

    t39 = ((x177!=x178)<=(x179-x180));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x185 = -1;
	int16_t x187 = INT16_MAX;
	static uint64_t x188 = 115740277379627LLU;
	int32_t t40 = -96904;

    t40 = ((x185!=x186)<=(x187-x188));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x189 = INT8_MIN;
	int16_t x190 = INT16_MAX;
	int8_t x191 = INT8_MIN;
	int32_t t41 = -3;

    t41 = ((x189!=x190)<=(x191-x192));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x197 = 1;
	int16_t x198 = INT16_MIN;
	int8_t x199 = -1;
	volatile int32_t t42 = -321324133;

    t42 = ((x197!=x198)<=(x199-x200));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x206 = UINT64_MAX;
	int64_t x207 = -1LL;
	uint8_t x208 = 10U;
	static int32_t t43 = 1036;

    t43 = ((x205!=x206)<=(x207-x208));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x213 = 430526268U;
	int16_t x214 = INT16_MIN;
	int64_t x215 = INT64_MAX;
	volatile uint16_t x216 = 630U;
	int32_t t44 = 93987;

    t44 = ((x213!=x214)<=(x215-x216));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x217 = -127;
	int32_t x219 = -20467805;
	uint32_t x220 = UINT32_MAX;
	static int32_t t45 = -38002156;

    t45 = ((x217!=x218)<=(x219-x220));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x225 = -10272;
	int16_t x226 = -1;
	volatile int8_t x227 = INT8_MIN;
	uint8_t x228 = 2U;
	int32_t t46 = -2395708;

    t46 = ((x225!=x226)<=(x227-x228));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x230 = 102;
	int32_t x231 = 230;
	int32_t t47 = 2009;

    t47 = ((x229!=x230)<=(x231-x232));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x238 = UINT32_MAX;
	static int8_t x239 = INT8_MIN;
	static int8_t x240 = INT8_MIN;
	volatile int32_t t48 = 26128208;

    t48 = ((x237!=x238)<=(x239-x240));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x241 = 0;
	int16_t x242 = 595;
	uint32_t x243 = 83028U;
	volatile int32_t x244 = INT32_MAX;
	int32_t t49 = 153792;

    t49 = ((x241!=x242)<=(x243-x244));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x245 = UINT64_MAX;
	int16_t x246 = INT16_MAX;
	static int64_t x247 = -1LL;
	int8_t x248 = -1;
	static volatile int32_t t50 = -45252;

    t50 = ((x245!=x246)<=(x247-x248));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x249 = UINT64_MAX;
	static int8_t x250 = 48;
	int64_t x251 = 2137872LL;
	uint32_t x252 = 777647546U;
	static int32_t t51 = 37;

    t51 = ((x249!=x250)<=(x251-x252));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x255 = INT16_MIN;
	volatile int32_t t52 = 6;

    t52 = ((x253!=x254)<=(x255-x256));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x257 = INT16_MIN;
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = INT8_MIN;
	static int64_t x260 = 3925LL;

    t53 = ((x257!=x258)<=(x259-x260));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x261 = 2063381603LLU;
	static volatile int32_t x262 = -1;
	uint16_t x263 = 3289U;
	int16_t x264 = -1592;
	int32_t t54 = 54003958;

    t54 = ((x261!=x262)<=(x263-x264));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x265 = INT16_MAX;
	static int8_t x266 = 9;
	volatile uint8_t x267 = 109U;
	volatile int64_t x268 = INT64_MAX;
	volatile int32_t t55 = -13762;

    t55 = ((x265!=x266)<=(x267-x268));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint16_t x269 = 542U;
	int16_t x270 = INT16_MIN;
	int32_t x271 = INT32_MIN;
	volatile int8_t x272 = INT8_MIN;
	int32_t t56 = 23399053;

    t56 = ((x269!=x270)<=(x271-x272));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x274 = INT32_MAX;
	int64_t x275 = -7611420LL;
	int32_t x276 = -2;

    t57 = ((x273!=x274)<=(x275-x276));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x277 = UINT32_MAX;
	static int64_t x279 = -1LL;
	int32_t x280 = INT32_MAX;
	int32_t t58 = -1937;

    t58 = ((x277!=x278)<=(x279-x280));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x282 = 2949702251737279584LL;
	int8_t x283 = INT8_MAX;
	int32_t t59 = -105128;

    t59 = ((x281!=x282)<=(x283-x284));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x285 = INT64_MIN;
	static int64_t x286 = INT64_MIN;
	volatile uint16_t x288 = UINT16_MAX;

    t60 = ((x285!=x286)<=(x287-x288));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x290 = 126;
	uint32_t x291 = 11888797U;
	int16_t x292 = INT16_MIN;
	int32_t t61 = 232917940;

    t61 = ((x289!=x290)<=(x291-x292));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x293 = 1599001LLU;
	volatile int8_t x294 = 0;
	uint16_t x295 = 84U;
	int16_t x296 = -49;

    t62 = ((x293!=x294)<=(x295-x296));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x297 = UINT16_MAX;
	int64_t x298 = -1LL;
	static int16_t x300 = INT16_MIN;
	volatile int32_t t63 = 3316;

    t63 = ((x297!=x298)<=(x299-x300));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x302 = -5759;
	uint32_t x303 = 27683704U;
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t64 = 298360427;

    t64 = ((x301!=x302)<=(x303-x304));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x310 = 5569806LL;
	int32_t x311 = INT32_MIN;
	int16_t x312 = -1;
	volatile int32_t t65 = -255055;

    t65 = ((x309!=x310)<=(x311-x312));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x313 = INT8_MIN;
	int32_t x314 = -1;
	volatile int64_t x315 = INT64_MIN;
	volatile int32_t t66 = 11155748;

    t66 = ((x313!=x314)<=(x315-x316));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x317 = UINT16_MAX;
	static volatile int32_t x318 = 123601;
	volatile int32_t x319 = 202439;
	int32_t t67 = 5903359;

    t67 = ((x317!=x318)<=(x319-x320));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x326 = 494U;
	static volatile int8_t x327 = INT8_MIN;
	int32_t x328 = -24;

    t68 = ((x325!=x326)<=(x327-x328));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x331 = INT16_MIN;
	uint32_t x332 = 87U;
	static int32_t t69 = -2;

    t69 = ((x329!=x330)<=(x331-x332));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x333 = INT16_MIN;
	static int16_t x335 = -3368;
	volatile uint8_t x336 = UINT8_MAX;
	volatile int32_t t70 = -734397992;

    t70 = ((x333!=x334)<=(x335-x336));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x339 = INT16_MIN;
	static uint8_t x340 = 51U;
	int32_t t71 = -117;

    t71 = ((x337!=x338)<=(x339-x340));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x346 = 127804385234LLU;
	int64_t x347 = INT64_MAX;
	static int32_t t72 = 39953;

    t72 = ((x345!=x346)<=(x347-x348));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x349 = -1LL;
	static uint32_t x350 = 359U;
	volatile int8_t x352 = INT8_MIN;
	volatile int32_t t73 = -203152535;

    t73 = ((x349!=x350)<=(x351-x352));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x354 = UINT32_MAX;
	int8_t x355 = 1;
	int64_t x356 = -9193LL;

    t74 = ((x353!=x354)<=(x355-x356));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x357 = -1;
	uint32_t x358 = 2746U;
	volatile uint32_t x359 = 11U;
	int64_t x360 = 440999769038085LL;
	static volatile int32_t t75 = 0;

    t75 = ((x357!=x358)<=(x359-x360));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x361 = -1;
	static int32_t x362 = INT32_MAX;
	int16_t x363 = 3;
	int32_t x364 = -1;

    t76 = ((x361!=x362)<=(x363-x364));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x365 = 24LLU;
	int16_t x366 = INT16_MIN;
	volatile int16_t x368 = INT16_MIN;

    t77 = ((x365!=x366)<=(x367-x368));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x369 = UINT16_MAX;
	volatile uint8_t x371 = 63U;
	int32_t x372 = -1;
	int32_t t78 = -3;

    t78 = ((x369!=x370)<=(x371-x372));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x378 = -1;
	int32_t x379 = -1;
	uint8_t x380 = 6U;

    t79 = ((x377!=x378)<=(x379-x380));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x381 = -187897;
	int64_t x382 = INT64_MIN;

    t80 = ((x381!=x382)<=(x383-x384));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x385 = 471257440LLU;
	int8_t x387 = -26;
	volatile int32_t t81 = -8181958;

    t81 = ((x385!=x386)<=(x387-x388));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x390 = INT64_MAX;
	int32_t x391 = INT32_MIN;
	volatile int32_t t82 = 13471268;

    t82 = ((x389!=x390)<=(x391-x392));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x393 = 1U;
	int32_t x395 = 11902467;
	uint32_t x396 = UINT32_MAX;
	static volatile int32_t t83 = -2404;

    t83 = ((x393!=x394)<=(x395-x396));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x401 = INT32_MIN;
	int64_t x402 = 1LL;
	int8_t x403 = INT8_MIN;
	int8_t x404 = -36;

    t84 = ((x401!=x402)<=(x403-x404));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x405 = 13;
	uint64_t x406 = UINT64_MAX;
	static uint8_t x408 = 19U;
	int32_t t85 = 216896;

    t85 = ((x405!=x406)<=(x407-x408));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x410 = -1;
	int64_t x411 = INT64_MIN;
	int8_t x412 = INT8_MIN;
	int32_t t86 = -1;

    t86 = ((x409!=x410)<=(x411-x412));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x413 = INT16_MIN;
	int8_t x414 = -18;
	volatile int8_t x415 = -9;
	static int16_t x416 = 4;
	volatile int32_t t87 = 3962;

    t87 = ((x413!=x414)<=(x415-x416));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x417 = 107576346;
	int16_t x418 = INT16_MAX;
	uint64_t x419 = UINT64_MAX;
	int16_t x420 = 3970;
	volatile int32_t t88 = -19387410;

    t88 = ((x417!=x418)<=(x419-x420));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int16_t x421 = INT16_MAX;
	int64_t x422 = -1LL;

    t89 = ((x421!=x422)<=(x423-x424));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x426 = 3974LLU;
	int8_t x427 = -1;
	int8_t x428 = INT8_MIN;
	volatile int32_t t90 = -61472;

    t90 = ((x425!=x426)<=(x427-x428));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x429 = UINT8_MAX;
	static uint8_t x430 = 0U;
	static int32_t t91 = -698658;

    t91 = ((x429!=x430)<=(x431-x432));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x433 = INT32_MIN;
	uint32_t x434 = UINT32_MAX;
	uint8_t x435 = 6U;
	int32_t t92 = -871;

    t92 = ((x433!=x434)<=(x435-x436));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x437 = INT16_MAX;
	static int16_t x438 = -12;
	static int16_t x439 = INT16_MIN;
	static volatile int32_t t93 = 2099112;

    t93 = ((x437!=x438)<=(x439-x440));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x441 = INT32_MAX;
	static int16_t x442 = INT16_MIN;
	static int16_t x443 = -1;
	int64_t x444 = -1LL;
	volatile int32_t t94 = 0;

    t94 = ((x441!=x442)<=(x443-x444));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x445 = INT16_MIN;
	int16_t x447 = INT16_MAX;
	int32_t x448 = -156;
	static int32_t t95 = -1473;

    t95 = ((x445!=x446)<=(x447-x448));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x450 = -1;
	static uint64_t x451 = 15692110LLU;
	int8_t x452 = INT8_MIN;
	int32_t t96 = 124933;

    t96 = ((x449!=x450)<=(x451-x452));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x457 = UINT32_MAX;
	int32_t t97 = -53;

    t97 = ((x457!=x458)<=(x459-x460));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x461 = INT16_MIN;
	static uint16_t x462 = 4131U;
	uint64_t x464 = 343LLU;
	volatile int32_t t98 = 0;

    t98 = ((x461!=x462)<=(x463-x464));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x465 = INT8_MAX;
	uint8_t x466 = 65U;
	uint16_t x467 = 3U;
	static volatile uint16_t x468 = 1U;
	volatile int32_t t99 = -4461;

    t99 = ((x465!=x466)<=(x467-x468));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x473 = INT32_MIN;
	volatile int16_t x474 = 139;
	static int64_t x475 = -1LL;
	int8_t x476 = INT8_MIN;
	int32_t t100 = 10906859;

    t100 = ((x473!=x474)<=(x475-x476));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x478 = -121;
	int32_t t101 = -740590811;

    t101 = ((x477!=x478)<=(x479-x480));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x481 = 5870U;
	int16_t x482 = INT16_MAX;
	int8_t x483 = INT8_MIN;
	uint64_t x484 = UINT64_MAX;
	volatile int32_t t102 = 21;

    t102 = ((x481!=x482)<=(x483-x484));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x485 = UINT16_MAX;
	int32_t x486 = 21490021;
	uint32_t x487 = UINT32_MAX;
	volatile int32_t t103 = -8567270;

    t103 = ((x485!=x486)<=(x487-x488));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x489 = INT8_MIN;
	uint32_t x490 = 19253U;
	uint64_t x491 = UINT64_MAX;
	int16_t x492 = INT16_MAX;
	int32_t t104 = -9009425;

    t104 = ((x489!=x490)<=(x491-x492));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x493 = INT16_MAX;
	uint64_t x494 = 58070900668309LLU;
	static int8_t x495 = -1;
	volatile int32_t t105 = 249157156;

    t105 = ((x493!=x494)<=(x495-x496));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int64_t x497 = INT64_MAX;
	int8_t x498 = 0;
	int8_t x500 = 11;
	int32_t t106 = -339753;

    t106 = ((x497!=x498)<=(x499-x500));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x501 = 13U;
	int32_t x502 = INT32_MAX;
	int8_t x503 = INT8_MIN;
	int8_t x504 = -1;
	int32_t t107 = 3196;

    t107 = ((x501!=x502)<=(x503-x504));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x505 = INT16_MIN;
	static uint8_t x506 = 2U;
	static uint32_t x507 = 58640U;
	int32_t t108 = 70642;

    t108 = ((x505!=x506)<=(x507-x508));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x509 = INT64_MAX;
	int8_t x510 = INT8_MAX;
	int8_t x511 = INT8_MAX;
	int64_t x512 = 4LL;
	static int32_t t109 = 1;

    t109 = ((x509!=x510)<=(x511-x512));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x517 = 0U;
	static int16_t x518 = INT16_MIN;
	volatile int16_t x519 = -1;
	int64_t x520 = INT64_MIN;

    t110 = ((x517!=x518)<=(x519-x520));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x525 = 1697303895U;
	volatile uint16_t x526 = 28U;
	int32_t x527 = 9;
	static volatile int8_t x528 = -1;

    t111 = ((x525!=x526)<=(x527-x528));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x529 = INT64_MIN;
	int16_t x530 = -7;
	int64_t x531 = -1LL;
	uint64_t x532 = 732LLU;

    t112 = ((x529!=x530)<=(x531-x532));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x533 = 0;
	int16_t x534 = -1;
	int16_t x535 = -62;
	int16_t x536 = -1;
	int32_t t113 = -5428;

    t113 = ((x533!=x534)<=(x535-x536));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x542 = 1903U;
	int8_t x544 = -1;
	int32_t t114 = -214;

    t114 = ((x541!=x542)<=(x543-x544));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x545 = -406339861778LL;
	static volatile int64_t x546 = INT64_MIN;
	uint32_t x547 = 928134369U;
	uint32_t x548 = UINT32_MAX;
	volatile int32_t t115 = -43982;

    t115 = ((x545!=x546)<=(x547-x548));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x549 = 8164825747LLU;
	volatile uint32_t x550 = UINT32_MAX;
	int16_t x552 = INT16_MAX;

    t116 = ((x549!=x550)<=(x551-x552));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x553 = UINT32_MAX;
	int32_t x554 = INT32_MAX;
	int32_t x555 = 30550;
	static uint8_t x556 = 53U;
	volatile int32_t t117 = 307;

    t117 = ((x553!=x554)<=(x555-x556));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x557 = INT64_MAX;

    t118 = ((x557!=x558)<=(x559-x560));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x562 = INT64_MAX;
	uint32_t x563 = 38349U;
	int16_t x564 = INT16_MIN;
	static volatile int32_t t119 = 837432;

    t119 = ((x561!=x562)<=(x563-x564));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x565 = INT16_MAX;
	static int16_t x566 = INT16_MIN;
	int16_t x567 = 2;
	static uint16_t x568 = UINT16_MAX;
	int32_t t120 = -20298;

    t120 = ((x565!=x566)<=(x567-x568));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x569 = 1;
	static uint16_t x570 = 62U;
	volatile uint8_t x571 = 71U;
	uint8_t x572 = 47U;
	volatile int32_t t121 = -1277;

    t121 = ((x569!=x570)<=(x571-x572));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x575 = INT16_MIN;
	int64_t x576 = -1LL;
	int32_t t122 = -9691;

    t122 = ((x573!=x574)<=(x575-x576));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x578 = INT16_MAX;
	int16_t x579 = -1;
	uint8_t x580 = UINT8_MAX;

    t123 = ((x577!=x578)<=(x579-x580));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int8_t x581 = INT8_MIN;
	int8_t x582 = 4;
	int8_t x583 = 1;
	int16_t x584 = -1;
	int32_t t124 = 294153;

    t124 = ((x581!=x582)<=(x583-x584));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x586 = -1;
	static int64_t x587 = -525069739509LL;
	uint16_t x588 = UINT16_MAX;
	int32_t t125 = -6;

    t125 = ((x585!=x586)<=(x587-x588));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x589 = INT64_MIN;
	volatile uint8_t x590 = 0U;
	uint32_t x591 = 652022247U;
	int64_t x592 = -115434600493366LL;

    t126 = ((x589!=x590)<=(x591-x592));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x601 = INT32_MAX;
	volatile int32_t x602 = 13578;
	uint8_t x603 = UINT8_MAX;
	int64_t x604 = INT64_MAX;
	int32_t t127 = 173101;

    t127 = ((x601!=x602)<=(x603-x604));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x605 = -1;
	static volatile uint64_t x607 = 114706240764LLU;
	int16_t x608 = INT16_MAX;
	int32_t t128 = 725;

    t128 = ((x605!=x606)<=(x607-x608));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x609 = 37;
	uint8_t x610 = UINT8_MAX;
	int16_t x612 = INT16_MIN;
	static int32_t t129 = 5222;

    t129 = ((x609!=x610)<=(x611-x612));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x613 = -1;
	uint8_t x616 = 11U;

    t130 = ((x613!=x614)<=(x615-x616));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x617 = 480572U;
	uint16_t x618 = UINT16_MAX;
	volatile int32_t t131 = -282509;

    t131 = ((x617!=x618)<=(x619-x620));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x625 = -6;
	static int8_t x626 = INT8_MAX;
	static volatile int64_t x627 = INT64_MAX;
	uint32_t x628 = 253U;

    t132 = ((x625!=x626)<=(x627-x628));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x629 = 6;
	static int8_t x630 = INT8_MIN;
	int8_t x631 = -1;
	volatile uint32_t x632 = 1U;
	int32_t t133 = -779980198;

    t133 = ((x629!=x630)<=(x631-x632));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x633 = 1;
	static volatile int64_t x634 = INT64_MIN;
	static int32_t x635 = -570;
	static volatile uint32_t x636 = UINT32_MAX;

    t134 = ((x633!=x634)<=(x635-x636));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x637 = 44126U;
	uint32_t x638 = 183205902U;
	int32_t t135 = 6975287;

    t135 = ((x637!=x638)<=(x639-x640));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x641 = UINT64_MAX;
	static int8_t x642 = INT8_MIN;
	uint8_t x643 = 96U;
	int32_t x644 = -1;
	int32_t t136 = 14;

    t136 = ((x641!=x642)<=(x643-x644));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x645 = UINT8_MAX;
	int64_t x646 = INT64_MAX;
	static uint8_t x647 = 58U;
	volatile int8_t x648 = INT8_MAX;
	int32_t t137 = 2575;

    t137 = ((x645!=x646)<=(x647-x648));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x650 = 2LLU;

    t138 = ((x649!=x650)<=(x651-x652));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x653 = -1LL;
	static int32_t x654 = INT32_MAX;
	int32_t x655 = INT32_MIN;
	int64_t x656 = -42653538LL;
	volatile int32_t t139 = 6934416;

    t139 = ((x653!=x654)<=(x655-x656));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x657 = -1;
	int8_t x658 = INT8_MIN;
	int64_t x659 = INT64_MAX;
	int64_t x660 = INT64_MAX;
	volatile int32_t t140 = 58861;

    t140 = ((x657!=x658)<=(x659-x660));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x661 = INT32_MAX;
	volatile int16_t x662 = -1;
	int16_t x664 = INT16_MIN;
	volatile int32_t t141 = 502;

    t141 = ((x661!=x662)<=(x663-x664));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x665 = INT32_MAX;
	static int8_t x666 = INT8_MAX;
	volatile uint32_t x667 = 1U;
	int64_t x668 = -39323582493LL;

    t142 = ((x665!=x666)<=(x667-x668));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x669 = 2027316069507799LLU;
	volatile int64_t x670 = INT64_MIN;
	volatile int32_t t143 = 7965;

    t143 = ((x669!=x670)<=(x671-x672));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x673 = 400U;
	static int32_t x675 = -1;
	int8_t x676 = 5;

    t144 = ((x673!=x674)<=(x675-x676));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x677 = UINT32_MAX;
	volatile uint64_t x678 = 9948LLU;
	uint32_t x679 = 170808U;
	int32_t x680 = INT32_MIN;

    t145 = ((x677!=x678)<=(x679-x680));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x689 = INT64_MAX;
	int8_t x691 = -1;
	volatile int32_t t146 = 311;

    t146 = ((x689!=x690)<=(x691-x692));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x697 = 42U;
	static int64_t x698 = -1LL;
	int8_t x699 = INT8_MIN;

    t147 = ((x697!=x698)<=(x699-x700));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x701 = 206U;
	int16_t x704 = -500;
	int32_t t148 = -96;

    t148 = ((x701!=x702)<=(x703-x704));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x705 = 0;
	int16_t x706 = -1;
	int16_t x707 = INT16_MIN;
	int32_t x708 = INT32_MIN;
	volatile int32_t t149 = -111583;

    t149 = ((x705!=x706)<=(x707-x708));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x709 = 6LLU;
	int16_t x710 = -1;
	static int8_t x711 = -1;
	volatile int32_t t150 = -120;

    t150 = ((x709!=x710)<=(x711-x712));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x713 = 0;
	int16_t x714 = INT16_MIN;
	static int64_t x715 = INT64_MIN;
	int32_t t151 = -262597;

    t151 = ((x713!=x714)<=(x715-x716));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x717 = 4;
	volatile int64_t x718 = INT64_MIN;
	uint32_t x719 = 69870U;
	volatile int32_t x720 = -1;
	volatile int32_t t152 = 54;

    t152 = ((x717!=x718)<=(x719-x720));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x726 = INT8_MIN;
	uint32_t x727 = UINT32_MAX;
	int32_t x728 = INT32_MIN;
	static int32_t t153 = -76;

    t153 = ((x725!=x726)<=(x727-x728));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x729 = 28696298LLU;
	int8_t x730 = -14;
	static int32_t t154 = 217;

    t154 = ((x729!=x730)<=(x731-x732));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x733 = UINT8_MAX;
	int16_t x735 = INT16_MIN;
	int16_t x736 = -23;
	static volatile int32_t t155 = -63938;

    t155 = ((x733!=x734)<=(x735-x736));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x737 = INT32_MIN;
	int8_t x738 = -1;
	int16_t x739 = INT16_MIN;
	int8_t x740 = INT8_MIN;
	volatile int32_t t156 = 3;

    t156 = ((x737!=x738)<=(x739-x740));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x741 = 0U;
	static int16_t x742 = -1;
	uint32_t x743 = UINT32_MAX;
	uint8_t x744 = UINT8_MAX;

    t157 = ((x741!=x742)<=(x743-x744));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x745 = INT8_MIN;
	static int64_t x746 = 142729970LL;
	uint32_t x747 = 3262618U;
	int8_t x748 = INT8_MAX;
	volatile int32_t t158 = -219;

    t158 = ((x745!=x746)<=(x747-x748));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x749 = UINT32_MAX;
	uint64_t x750 = UINT64_MAX;
	volatile uint16_t x751 = UINT16_MAX;
	int64_t x752 = 335663008504320239LL;

    t159 = ((x749!=x750)<=(x751-x752));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x753 = INT8_MAX;
	int16_t x754 = INT16_MIN;
	int64_t x755 = -8LL;
	int8_t x756 = INT8_MIN;
	volatile int32_t t160 = 6036;

    t160 = ((x753!=x754)<=(x755-x756));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x758 = -1;
	int16_t x759 = -1;
	volatile uint64_t x760 = 3742LLU;
	int32_t t161 = 978515586;

    t161 = ((x757!=x758)<=(x759-x760));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x761 = INT32_MIN;
	static int8_t x762 = INT8_MAX;
	int16_t x764 = INT16_MIN;
	volatile int32_t t162 = -150717099;

    t162 = ((x761!=x762)<=(x763-x764));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x765 = -24211LL;
	volatile int8_t x766 = -1;
	volatile uint32_t x768 = 296U;
	int32_t t163 = 1590;

    t163 = ((x765!=x766)<=(x767-x768));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x770 = 0U;
	static int16_t x771 = -1;
	int32_t x772 = INT32_MIN;

    t164 = ((x769!=x770)<=(x771-x772));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x773 = -6704LL;
	int32_t x775 = INT32_MIN;
	int8_t x776 = INT8_MIN;
	int32_t t165 = -778809;

    t165 = ((x773!=x774)<=(x775-x776));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x777 = 18650U;
	static int32_t t166 = 11477382;

    t166 = ((x777!=x778)<=(x779-x780));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x785 = INT8_MIN;
	static int8_t x786 = INT8_MIN;
	volatile int64_t x787 = INT64_MIN;
	volatile int8_t x788 = INT8_MIN;
	volatile int32_t t167 = 1;

    t167 = ((x785!=x786)<=(x787-x788));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x789 = -1;
	uint8_t x790 = UINT8_MAX;
	uint16_t x791 = 1815U;
	int64_t x792 = INT64_MAX;
	int32_t t168 = 1;

    t168 = ((x789!=x790)<=(x791-x792));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x797 = INT32_MAX;
	uint8_t x799 = 7U;
	uint8_t x800 = UINT8_MAX;
	int32_t t169 = -59;

    t169 = ((x797!=x798)<=(x799-x800));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x801 = UINT32_MAX;
	int8_t x802 = -1;
	int16_t x803 = INT16_MIN;
	static uint32_t x804 = 0U;

    t170 = ((x801!=x802)<=(x803-x804));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x805 = 0U;
	int64_t x806 = INT64_MAX;
	static int32_t x808 = -867;
	int32_t t171 = -109363;

    t171 = ((x805!=x806)<=(x807-x808));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x809 = 0;
	uint16_t x812 = 0U;
	int32_t t172 = -769;

    t172 = ((x809!=x810)<=(x811-x812));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x813 = INT16_MIN;
	int32_t x814 = INT32_MIN;
	static int16_t x815 = INT16_MAX;
	static uint64_t x816 = 258534604807795LLU;

    t173 = ((x813!=x814)<=(x815-x816));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x818 = 0LL;
	int8_t x820 = INT8_MIN;
	int32_t t174 = 1;

    t174 = ((x817!=x818)<=(x819-x820));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x821 = 101U;
	int16_t x824 = INT16_MAX;
	static int32_t t175 = 566;

    t175 = ((x821!=x822)<=(x823-x824));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x825 = INT32_MIN;
	int8_t x826 = INT8_MIN;
	int16_t x827 = INT16_MIN;
	static int32_t x828 = -1;
	int32_t t176 = -77;

    t176 = ((x825!=x826)<=(x827-x828));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x829 = INT16_MIN;
	uint32_t x832 = UINT32_MAX;
	volatile int32_t t177 = 1783;

    t177 = ((x829!=x830)<=(x831-x832));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x833 = UINT8_MAX;
	int64_t x834 = 597744845038LL;
	static int32_t x835 = INT32_MIN;
	int16_t x836 = INT16_MIN;
	volatile int32_t t178 = -47429;

    t178 = ((x833!=x834)<=(x835-x836));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x837 = UINT64_MAX;
	int16_t x839 = INT16_MAX;
	int16_t x840 = -1;
	static int32_t t179 = -23631281;

    t179 = ((x837!=x838)<=(x839-x840));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x841 = 73U;
	int16_t x844 = -34;
	int32_t t180 = 48;

    t180 = ((x841!=x842)<=(x843-x844));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x846 = UINT16_MAX;
	volatile uint16_t x848 = UINT16_MAX;
	int32_t t181 = -304437155;

    t181 = ((x845!=x846)<=(x847-x848));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x850 = INT32_MIN;
	int64_t x851 = -43637374130580915LL;
	volatile int8_t x852 = INT8_MAX;
	volatile int32_t t182 = 1609096;

    t182 = ((x849!=x850)<=(x851-x852));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x853 = INT8_MIN;
	int16_t x854 = -1;
	int16_t x856 = INT16_MIN;
	int32_t t183 = -1;

    t183 = ((x853!=x854)<=(x855-x856));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x857 = -69967212594646921LL;
	static uint64_t x858 = UINT64_MAX;
	uint64_t x859 = 1828986427LLU;
	int16_t x860 = -1;
	static int32_t t184 = 968659;

    t184 = ((x857!=x858)<=(x859-x860));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x861 = -1LL;
	int64_t x864 = -1LL;
	volatile int32_t t185 = 1;

    t185 = ((x861!=x862)<=(x863-x864));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x865 = INT32_MIN;
	int64_t x866 = INT64_MAX;
	int16_t x867 = INT16_MIN;
	uint16_t x868 = UINT16_MAX;
	int32_t t186 = 8884584;

    t186 = ((x865!=x866)<=(x867-x868));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x869 = -1;
	int32_t x870 = 3455;
	int8_t x871 = INT8_MAX;
	int8_t x872 = 2;
	volatile int32_t t187 = 162;

    t187 = ((x869!=x870)<=(x871-x872));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x873 = UINT32_MAX;
	volatile int64_t x875 = INT64_MIN;
	int32_t x876 = -8;
	static volatile int32_t t188 = 102382;

    t188 = ((x873!=x874)<=(x875-x876));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x878 = 934U;
	uint32_t x879 = UINT32_MAX;
	static int32_t x880 = -1;
	int32_t t189 = 0;

    t189 = ((x877!=x878)<=(x879-x880));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x881 = -1;
	int16_t x883 = -1439;
	static uint16_t x884 = 1358U;
	volatile int32_t t190 = 6796;

    t190 = ((x881!=x882)<=(x883-x884));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x897 = INT16_MIN;
	uint64_t x898 = UINT64_MAX;
	volatile int16_t x899 = INT16_MAX;
	uint32_t x900 = UINT32_MAX;
	int32_t t191 = -1234377;

    t191 = ((x897!=x898)<=(x899-x900));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x901 = INT32_MAX;
	uint16_t x902 = UINT16_MAX;
	volatile uint16_t x903 = 6243U;
	int8_t x904 = INT8_MIN;

    t192 = ((x901!=x902)<=(x903-x904));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x905 = INT8_MIN;
	uint16_t x906 = 12771U;
	int16_t x907 = INT16_MIN;
	static uint32_t x908 = 1U;
	int32_t t193 = -3;

    t193 = ((x905!=x906)<=(x907-x908));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x909 = INT32_MAX;
	volatile int64_t x910 = INT64_MIN;
	int32_t x912 = -1491887;
	int32_t t194 = 64;

    t194 = ((x909!=x910)<=(x911-x912));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x913 = -2921;
	int16_t x914 = -1;
	int16_t x915 = -738;

    t195 = ((x913!=x914)<=(x915-x916));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x917 = -1438;
	static uint32_t x918 = 2200U;
	int32_t x919 = -1;
	int32_t t196 = 3301;

    t196 = ((x917!=x918)<=(x919-x920));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x921 = INT32_MAX;
	static int64_t x922 = 58672LL;
	static int8_t x923 = -7;
	uint8_t x924 = 59U;
	int32_t t197 = 4348071;

    t197 = ((x921!=x922)<=(x923-x924));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x925 = -1;
	int64_t x926 = INT64_MAX;
	int16_t x927 = 0;
	int8_t x928 = INT8_MIN;
	volatile int32_t t198 = -2;

    t198 = ((x925!=x926)<=(x927-x928));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x929 = -3818;
	int16_t x930 = INT16_MAX;
	int32_t x932 = -1;

    t199 = ((x929!=x930)<=(x931-x932));

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

