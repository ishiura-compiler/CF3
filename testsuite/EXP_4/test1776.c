
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

static int32_t x2 = INT32_MIN;
int32_t x3 = INT32_MIN;
volatile uint16_t x4 = 521U;
uint64_t x7 = 29LLU;
int32_t x12 = -1;
static int32_t t4 = -30605;
uint64_t x31 = 14222222476627430LLU;
uint16_t x41 = 22U;
volatile int32_t x54 = -10;
int32_t x55 = 385991;
int64_t x60 = INT64_MIN;
volatile int32_t t15 = 9;
int8_t x75 = INT8_MIN;
static uint32_t x79 = 869157505U;
int64_t x81 = 208953780LL;
int8_t x84 = INT8_MIN;
volatile uint32_t x86 = 68298095U;
volatile int64_t x89 = -1LL;
uint8_t x94 = 2U;
volatile int32_t t21 = -18259;
int32_t t23 = 1992145;
static uint16_t x113 = UINT16_MAX;
volatile int32_t t25 = 14;
uint16_t x122 = UINT16_MAX;
uint64_t t28 = 2468276691199341LLU;
volatile int64_t x129 = 1399834336270784LL;
volatile int8_t x138 = 0;
uint32_t t32 = 1933931774U;
uint64_t t34 = 169LLU;
int16_t x156 = INT16_MIN;
int16_t x157 = 5204;
volatile int32_t t36 = 546490844;
volatile int32_t t37 = 3031;
int8_t x167 = INT8_MIN;
static int32_t x169 = -12674;
int32_t x173 = 73050808;
volatile int32_t t40 = -1402;
static int64_t x177 = INT64_MIN;
static int8_t x180 = INT8_MIN;
int16_t x183 = -68;
uint16_t x187 = 3374U;
int64_t t43 = -285625LL;
int64_t x189 = -53853LL;
static volatile int64_t t44 = -288143221090922667LL;
static int32_t t45 = 32927015;
int16_t x201 = -825;
int32_t t47 = 59;
volatile int64_t x209 = INT64_MIN;
int8_t x215 = INT8_MIN;
int16_t x218 = INT16_MIN;
volatile int32_t t51 = -136449;
static int64_t x224 = INT64_MIN;
volatile int64_t t53 = -459LL;
uint64_t x232 = 6060LLU;
int16_t x233 = INT16_MIN;
static int8_t x242 = 0;
static volatile int32_t x243 = INT32_MIN;
volatile int8_t x244 = INT8_MAX;
int16_t x245 = INT16_MAX;
int64_t x246 = 15570582873LL;
int64_t t58 = -22375623589674LL;
int64_t x252 = -1LL;
uint16_t x254 = 247U;
static int32_t x257 = -1;
int32_t x264 = -1;
int16_t x266 = 9;
int32_t x269 = INT32_MIN;
uint32_t x275 = 22U;
static int8_t x277 = 1;
volatile uint32_t t66 = 12U;
volatile int16_t x282 = INT16_MAX;
uint8_t x283 = 6U;
static uint64_t x284 = 9490LLU;
int64_t x290 = INT64_MIN;
static int32_t x297 = INT32_MIN;
static uint32_t t71 = 4255U;
int8_t x303 = INT8_MIN;
volatile int16_t x304 = 90;
uint8_t x306 = 82U;
int64_t x315 = INT64_MIN;
int32_t x319 = INT32_MIN;
uint8_t x322 = UINT8_MAX;
volatile int32_t t77 = -15442627;
static int16_t x332 = INT16_MIN;
static uint64_t t79 = 125954816LLU;
int8_t x336 = -1;
int64_t t80 = -453668384167974527LL;
volatile uint16_t x339 = 4413U;
volatile uint64_t x343 = 806622830LLU;
int16_t x348 = -1;
volatile int32_t t84 = 158000;
int8_t x353 = INT8_MIN;
int32_t x354 = -1;
int32_t x360 = INT32_MIN;
volatile uint16_t x361 = UINT16_MAX;
volatile uint16_t x371 = UINT16_MAX;
uint8_t x372 = 10U;
volatile uint64_t x381 = 3689859659LLU;
static uint8_t x384 = 5U;
static uint64_t t92 = 15881794429240656LLU;
int16_t x389 = 1;
uint32_t x392 = 12106U;
int16_t x393 = INT16_MIN;
uint32_t x410 = UINT32_MAX;
int16_t x411 = 6;
int64_t x416 = -3832534066LL;
int8_t x417 = INT8_MIN;
uint16_t x419 = 1796U;
uint32_t t101 = 14064517U;
volatile int64_t x425 = INT64_MIN;
static uint8_t x426 = 1U;
int8_t x427 = INT8_MAX;
int32_t x429 = 229852794;
static int32_t x430 = 82;
int64_t x435 = -50642189928858LL;
int16_t x444 = -7831;
uint8_t x445 = 54U;
static int64_t x448 = -1LL;
int8_t x451 = INT8_MIN;
int64_t t109 = -1LL;
int16_t x457 = INT16_MIN;
int16_t x460 = -6781;
uint16_t x461 = UINT16_MAX;
static uint16_t x462 = 1U;
int16_t x467 = -1;
volatile int64_t t113 = 5091237941083745LL;
int16_t x485 = INT16_MAX;
int32_t x494 = -6679971;
int32_t x495 = 1194839;
int16_t x501 = INT16_MIN;
int8_t x506 = INT8_MIN;
volatile int64_t t121 = 84065761240LL;
uint32_t x512 = 2628055U;
uint32_t t123 = 1663113784U;
uint16_t x517 = 1U;
int16_t x520 = INT16_MAX;
int16_t x522 = INT16_MIN;
int8_t x532 = -37;
volatile int32_t t128 = -2817708;
uint8_t x541 = 23U;
static int32_t x542 = INT32_MIN;
static volatile int64_t x543 = -25LL;
uint16_t x546 = 1U;
int32_t x548 = 2201195;
volatile int16_t x550 = -1;
static int16_t x551 = 0;
uint16_t x552 = 22147U;
static uint32_t x553 = 215711274U;
uint16_t x556 = UINT16_MAX;
volatile uint32_t t132 = 602U;
int8_t x562 = INT8_MAX;
int32_t x564 = INT32_MIN;
int32_t x565 = INT32_MIN;
volatile uint64_t x567 = UINT64_MAX;
static int16_t x568 = INT16_MIN;
int32_t x569 = -223;
int32_t t135 = 7;
static int32_t t136 = 51003;
static int32_t x578 = 88;
volatile uint8_t x581 = UINT8_MAX;
int8_t x582 = INT8_MIN;
static uint8_t x603 = 0U;
static int32_t x607 = -1004891687;
static int8_t x613 = -1;
int64_t t145 = -2917123142094LL;
static int16_t x621 = -2;
int32_t t147 = -28;
uint32_t x629 = UINT32_MAX;
volatile uint32_t x632 = UINT32_MAX;
static int8_t x635 = 1;
int16_t x641 = -77;
uint32_t t151 = 963U;
static int8_t x648 = INT8_MAX;
static int8_t x649 = -1;
volatile int8_t x658 = 0;
int32_t t154 = 24316;
uint8_t x661 = UINT8_MAX;
int32_t t155 = -30084673;
int32_t x674 = INT32_MAX;
int16_t x675 = -1;
int64_t x681 = -134399LL;
int64_t x684 = INT64_MAX;
int32_t x694 = -1;
int64_t x695 = 20366261149261LL;
uint8_t x699 = 23U;
volatile int16_t x700 = -1;
uint8_t x707 = 61U;
uint16_t x708 = 0U;
volatile uint64_t t165 = 21857923LLU;
int32_t x711 = INT32_MIN;
int32_t x716 = INT32_MIN;
int32_t t168 = -11517017;
static int32_t x732 = INT32_MIN;
volatile uint8_t x734 = 2U;
int32_t x736 = -1;
uint32_t x737 = UINT32_MAX;
uint16_t x738 = 8362U;
int16_t x742 = 28;
uint8_t x744 = 5U;
int32_t x756 = INT32_MIN;
uint64_t x763 = UINT64_MAX;
volatile int16_t x766 = 1;
int64_t x768 = -1LL;
static volatile uint8_t x777 = 119U;
volatile int32_t t183 = 450319838;
int16_t x782 = 1252;
volatile int64_t t186 = -78297111420LL;
int8_t x797 = 1;
int64_t x798 = INT64_MAX;
int64_t x801 = -15707005LL;
uint64_t x802 = 26690310LLU;
volatile uint64_t t189 = 1LLU;
int64_t x805 = -6LL;
volatile int64_t x806 = INT64_MIN;
int64_t t190 = INT64_MIN;
int32_t x820 = -1;
volatile uint8_t x822 = 1U;
int8_t x826 = 0;
static int16_t x829 = -1;
int64_t x830 = INT64_MAX;
int64_t x831 = INT64_MAX;
int64_t t196 = INT64_MAX;
int8_t x841 = INT8_MIN;
volatile int64_t t199 = -178609124450LL;


void f0(void) {
    	int16_t x1 = -172;
	volatile int32_t t0 = INT32_MIN;

    t0 = (x1&(x2+(x3<=x4)));

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -15524923;
	uint8_t x6 = 3U;
	int8_t x8 = -1;
	int32_t t1 = -40;

    t1 = (x5&(x6+(x7<=x8)));

    if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 358;
	uint32_t x10 = UINT32_MAX;
	uint8_t x11 = UINT8_MAX;
	static uint32_t t2 = 6U;

    t2 = (x9&(x10+(x11<=x12)));

    if (t2 != 358U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = -613436;
	int16_t x14 = -72;
	int8_t x15 = INT8_MIN;
	int8_t x16 = 1;
	int32_t t3 = 723714;

    t3 = (x13&(x14+(x15<=x16)));

    if (t3 != -613504) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = INT32_MIN;
	uint16_t x22 = 143U;
	int32_t x23 = -1108;
	static volatile int32_t x24 = -5749;

    t4 = (x21&(x22+(x23<=x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = INT64_MIN;
	int64_t x30 = -1LL;
	int8_t x32 = INT8_MIN;
	volatile int64_t t5 = 800610538433LL;

    t5 = (x29&(x30+(x31<=x32)));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x33 = UINT64_MAX;
	uint16_t x34 = 2690U;
	static volatile uint64_t x35 = UINT64_MAX;
	int16_t x36 = -36;
	uint64_t t6 = 7192LLU;

    t6 = (x33&(x34+(x35<=x36)));

    if (t6 != 2690LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = INT8_MAX;
	int8_t x38 = INT8_MAX;
	int32_t x39 = -1;
	uint32_t x40 = 3U;
	int32_t t7 = -1226;

    t7 = (x37&(x38+(x39<=x40)));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x42 = INT64_MIN;
	int8_t x43 = INT8_MAX;
	uint64_t x44 = 1035979956662393LLU;
	volatile int64_t t8 = -12351129LL;

    t8 = (x41&(x42+(x43<=x44)));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x45 = 21U;
	int8_t x46 = INT8_MIN;
	int16_t x47 = INT16_MAX;
	uint32_t x48 = 2629U;
	volatile uint32_t t9 = 44U;

    t9 = (x45&(x46+(x47<=x48)));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x49 = INT64_MIN;
	uint16_t x50 = UINT16_MAX;
	int32_t x51 = INT32_MIN;
	static int8_t x52 = INT8_MIN;
	static int64_t t10 = 474888575747766280LL;

    t10 = (x49&(x50+(x51<=x52)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x53 = UINT32_MAX;
	int32_t x56 = INT32_MAX;
	uint32_t t11 = 173U;

    t11 = (x53&(x54+(x55<=x56)));

    if (t11 != 4294967287U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = INT64_MAX;
	volatile int8_t x58 = INT8_MIN;
	int64_t x59 = INT64_MAX;
	int64_t t12 = 2154998943022212190LL;

    t12 = (x57&(x58+(x59<=x60)));

    if (t12 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = 0;
	volatile int64_t x62 = INT64_MIN;
	volatile int32_t x63 = -3;
	uint32_t x64 = 69044231U;
	static volatile int64_t t13 = 1379238012492578973LL;

    t13 = (x61&(x62+(x63<=x64)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x65 = 105220LLU;
	int32_t x66 = INT32_MIN;
	uint8_t x67 = 27U;
	static uint32_t x68 = 4998U;
	static volatile uint64_t t14 = 134786553485002LLU;

    t14 = (x65&(x66+(x67<=x68)));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x69 = 8U;
	static int16_t x70 = -2153;
	int16_t x71 = INT16_MAX;
	int32_t x72 = -1;

    t15 = (x69&(x70+(x71<=x72)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x73 = 1038281047804487390LLU;
	int16_t x74 = 226;
	static int8_t x76 = INT8_MAX;
	uint64_t t16 = 368939LLU;

    t16 = (x73&(x74+(x75<=x76)));

    if (t16 != 194LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = INT64_MIN;
	uint16_t x78 = UINT16_MAX;
	volatile int16_t x80 = 5201;
	volatile int64_t t17 = 18052872231589LL;

    t17 = (x77&(x78+(x79<=x80)));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x82 = -3;
	static int16_t x83 = -4658;
	int64_t t18 = -3131187LL;

    t18 = (x81&(x82+(x83<=x84)));

    if (t18 != 208953780LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = INT64_MIN;
	uint8_t x87 = 7U;
	volatile int32_t x88 = -2;
	int64_t t19 = 9700176761980LL;

    t19 = (x85&(x86+(x87<=x88)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x90 = -18;
	int16_t x91 = 29;
	static int16_t x92 = 0;
	volatile int64_t t20 = 48681783LL;

    t20 = (x89&(x90+(x91<=x92)));

    if (t20 != -18LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x93 = -1;
	int64_t x95 = INT64_MAX;
	volatile int32_t x96 = -2554227;

    t21 = (x93&(x94+(x95<=x96)));

    if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x97 = -10;
	uint64_t x98 = 15450672826060176LLU;
	volatile uint32_t x99 = 814U;
	volatile uint8_t x100 = UINT8_MAX;
	volatile uint64_t t22 = 305866056937341912LLU;

    t22 = (x97&(x98+(x99<=x100)));

    if (t22 != 15450672826060176LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = INT16_MIN;
	uint8_t x106 = 2U;
	static volatile int64_t x107 = INT64_MIN;
	uint16_t x108 = UINT16_MAX;

    t23 = (x105&(x106+(x107<=x108)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = INT32_MAX;
	volatile uint32_t x110 = 833U;
	uint16_t x111 = UINT16_MAX;
	int16_t x112 = -3400;
	volatile uint32_t t24 = 2U;

    t24 = (x109&(x110+(x111<=x112)));

    if (t24 != 833U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x114 = -1;
	int8_t x115 = -2;
	int16_t x116 = 309;

    t25 = (x113&(x114+(x115<=x116)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x117 = INT64_MIN;
	static volatile int32_t x118 = 695;
	uint32_t x119 = UINT32_MAX;
	volatile int32_t x120 = INT32_MIN;
	int64_t t26 = 367905LL;

    t26 = (x117&(x118+(x119<=x120)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x121 = 7U;
	int8_t x123 = INT8_MIN;
	uint64_t x124 = 2438460156LLU;
	int32_t t27 = 23810;

    t27 = (x121&(x122+(x123<=x124)));

    if (t27 != 7) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x125 = UINT64_MAX;
	volatile int32_t x126 = -1;
	static uint64_t x127 = 792080302517533LLU;
	int16_t x128 = -52;

    t28 = (x125&(x126+(x127<=x128)));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x130 = 7617;
	uint16_t x131 = 66U;
	int8_t x132 = INT8_MIN;
	volatile int64_t t29 = -886LL;

    t29 = (x129&(x130+(x131<=x132)));

    if (t29 != 6592LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x133 = INT8_MIN;
	volatile int64_t x134 = -1LL;
	uint32_t x135 = 24U;
	int16_t x136 = INT16_MAX;
	int64_t t30 = -270204LL;

    t30 = (x133&(x134+(x135<=x136)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x137 = 12628157430334983LLU;
	int64_t x139 = 1LL;
	volatile int8_t x140 = INT8_MIN;
	volatile uint64_t t31 = 459010LLU;

    t31 = (x137&(x138+(x139<=x140)));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x141 = 9121;
	static uint32_t x142 = UINT32_MAX;
	int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MIN;

    t32 = (x141&(x142+(x143<=x144)));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x145 = -230306175751LL;
	int32_t x146 = INT32_MIN;
	volatile int16_t x147 = INT16_MIN;
	uint8_t x148 = 12U;
	volatile int64_t t33 = -618352LL;

    t33 = (x145&(x146+(x147<=x148)));

    if (t33 != -231928233983LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x149 = 109534846LLU;
	int64_t x150 = 0LL;
	static volatile int64_t x151 = -1LL;
	volatile int16_t x152 = 792;

    t34 = (x149&(x150+(x151<=x152)));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = -1;
	volatile uint8_t x154 = UINT8_MAX;
	int64_t x155 = -1567409587425656534LL;
	int32_t t35 = -259050234;

    t35 = (x153&(x154+(x155<=x156)));

    if (t35 != 256) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x158 = 2U;
	int16_t x159 = -2708;
	uint16_t x160 = 2763U;

    t36 = (x157&(x158+(x159<=x160)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x161 = 2U;
	static volatile int32_t x162 = INT32_MIN;
	static uint64_t x163 = 594096LLU;
	int64_t x164 = -33LL;

    t37 = (x161&(x162+(x163<=x164)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = 6505;
	static uint32_t x166 = 423959U;
	static volatile uint8_t x168 = 9U;
	volatile uint32_t t38 = 1U;

    t38 = (x165&(x166+(x167<=x168)));

    if (t38 != 6152U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x170 = 55U;
	volatile int32_t x171 = 489307732;
	int16_t x172 = INT16_MIN;
	volatile int32_t t39 = -491740;

    t39 = (x169&(x170+(x171<=x172)));

    if (t39 != 54) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x174 = -1;
	volatile int64_t x175 = INT64_MAX;
	int32_t x176 = -583189;

    t40 = (x173&(x174+(x175<=x176)));

    if (t40 != 73050808) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x178 = 306211413LLU;
	volatile int32_t x179 = 3714028;
	volatile uint64_t t41 = 7133175698LLU;

    t41 = (x177&(x178+(x179<=x180)));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x181 = 15513414663LLU;
	int16_t x182 = -1;
	volatile int64_t x184 = INT64_MAX;
	volatile uint64_t t42 = 3280LLU;

    t42 = (x181&(x182+(x183<=x184)));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x185 = INT8_MIN;
	int64_t x186 = -358347394372663605LL;
	int16_t x188 = -460;

    t43 = (x185&(x186+(x187<=x188)));

    if (t43 != -358347394372663680LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x190 = 353484945711593LL;
	int16_t x191 = INT16_MIN;
	volatile int8_t x192 = -1;

    t44 = (x189&(x190+(x191<=x192)));

    if (t44 != 353484945695138LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x193 = INT16_MAX;
	static int32_t x194 = INT32_MAX;
	static uint8_t x195 = 110U;
	uint8_t x196 = 3U;

    t45 = (x193&(x194+(x195<=x196)));

    if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x197 = UINT8_MAX;
	static uint8_t x198 = 12U;
	int16_t x199 = INT16_MAX;
	static uint64_t x200 = 15986744046LLU;
	int32_t t46 = -9991540;

    t46 = (x197&(x198+(x199<=x200)));

    if (t46 != 13) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x202 = 862380;
	static int16_t x203 = 0;
	static volatile uint16_t x204 = 12687U;

    t47 = (x201&(x202+(x203<=x204)));

    if (t47 != 862341) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x205 = 3U;
	int32_t x206 = INT32_MIN;
	int64_t x207 = 835430908LL;
	static int8_t x208 = -1;
	int32_t t48 = 148326566;

    t48 = (x205&(x206+(x207<=x208)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x210 = 9;
	static uint64_t x211 = 31426846918926LLU;
	static int32_t x212 = INT32_MAX;
	volatile int64_t t49 = 35663LL;

    t49 = (x209&(x210+(x211<=x212)));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x213 = INT16_MAX;
	int8_t x214 = INT8_MIN;
	uint8_t x216 = 3U;
	static int32_t t50 = -19235012;

    t50 = (x213&(x214+(x215<=x216)));

    if (t50 != 32641) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x217 = INT16_MAX;
	static uint16_t x219 = UINT16_MAX;
	static int16_t x220 = INT16_MIN;

    t51 = (x217&(x218+(x219<=x220)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x221 = UINT64_MAX;
	volatile uint32_t x222 = 5954U;
	uint16_t x223 = 28262U;
	uint64_t t52 = 387383976103514LLU;

    t52 = (x221&(x222+(x223<=x224)));

    if (t52 != 5954LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x225 = INT32_MIN;
	int64_t x226 = -127062415LL;
	static int16_t x227 = INT16_MIN;
	int16_t x228 = 201;

    t53 = (x225&(x226+(x227<=x228)));

    if (t53 != -2147483648LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x229 = INT64_MIN;
	int8_t x230 = -1;
	uint16_t x231 = 5U;
	volatile int64_t t54 = -23098734547LL;

    t54 = (x229&(x230+(x231<=x232)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x234 = 5;
	uint8_t x235 = UINT8_MAX;
	int64_t x236 = INT64_MIN;
	static int32_t t55 = -13498652;

    t55 = (x233&(x234+(x235<=x236)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x237 = -1LL;
	static int16_t x238 = INT16_MAX;
	int16_t x239 = -685;
	int8_t x240 = INT8_MIN;
	int64_t t56 = -8191286419700LL;

    t56 = (x237&(x238+(x239<=x240)));

    if (t56 != 32768LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x241 = 31;
	volatile int32_t t57 = 5;

    t57 = (x241&(x242+(x243<=x244)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x247 = 11U;
	int8_t x248 = -1;

    t58 = (x245&(x246+(x247<=x248)));

    if (t58 != 15705LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x249 = 31;
	uint64_t x250 = 26741758321092LLU;
	int64_t x251 = INT64_MIN;
	uint64_t t59 = 2442096466LLU;

    t59 = (x249&(x250+(x251<=x252)));

    if (t59 != 5LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x253 = INT16_MAX;
	volatile uint32_t x255 = 29498U;
	int8_t x256 = 10;
	int32_t t60 = 123416;

    t60 = (x253&(x254+(x255<=x256)));

    if (t60 != 247) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x258 = INT8_MIN;
	int16_t x259 = -166;
	int8_t x260 = 4;
	int32_t t61 = 3;

    t61 = (x257&(x258+(x259<=x260)));

    if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x261 = INT64_MIN;
	volatile uint64_t x262 = 193784823287977989LLU;
	int8_t x263 = INT8_MAX;
	uint64_t t62 = 1LLU;

    t62 = (x261&(x262+(x263<=x264)));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x265 = -19;
	volatile int8_t x267 = -33;
	volatile int16_t x268 = -15;
	volatile int32_t t63 = 11416;

    t63 = (x265&(x266+(x267<=x268)));

    if (t63 != 8) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x270 = UINT16_MAX;
	int32_t x271 = 2572310;
	int64_t x272 = -1LL;
	volatile int32_t t64 = 345;

    t64 = (x269&(x270+(x271<=x272)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x273 = -1;
	int32_t x274 = INT32_MIN;
	int64_t x276 = INT64_MAX;
	volatile int32_t t65 = 23990870;

    t65 = (x273&(x274+(x275<=x276)));

    if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x278 = 15896470U;
	int32_t x279 = -605134801;
	uint64_t x280 = UINT64_MAX;

    t66 = (x277&(x278+(x279<=x280)));

    if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x281 = 813LLU;
	volatile uint64_t t67 = 1LLU;

    t67 = (x281&(x282+(x283<=x284)));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x285 = 97U;
	uint16_t x286 = 48U;
	volatile uint64_t x287 = UINT64_MAX;
	int64_t x288 = -16420240LL;
	int32_t t68 = 108777;

    t68 = (x285&(x286+(x287<=x288)));

    if (t68 != 32) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x289 = 587931U;
	int32_t x291 = INT32_MIN;
	static int64_t x292 = INT64_MIN;
	volatile int64_t t69 = -1705LL;

    t69 = (x289&(x290+(x291<=x292)));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int32_t x293 = INT32_MIN;
	static int16_t x294 = INT16_MIN;
	int16_t x295 = -2;
	static int32_t x296 = -1;
	int32_t t70 = INT32_MIN;

    t70 = (x293&(x294+(x295<=x296)));

    if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x298 = 61961796U;
	int8_t x299 = INT8_MIN;
	uint16_t x300 = 65U;

    t71 = (x297&(x298+(x299<=x300)));

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x301 = INT64_MIN;
	int8_t x302 = -1;
	int64_t t72 = 5147376453666LL;

    t72 = (x301&(x302+(x303<=x304)));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x305 = 1;
	uint16_t x307 = 5506U;
	int64_t x308 = -412562899086747LL;
	static volatile int32_t t73 = -630;

    t73 = (x305&(x306+(x307<=x308)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x309 = 156010LLU;
	uint8_t x310 = 1U;
	static int8_t x311 = INT8_MIN;
	static int32_t x312 = -1;
	static uint64_t t74 = 23208LLU;

    t74 = (x309&(x310+(x311<=x312)));

    if (t74 != 2LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	uint64_t x314 = 321213957976493LLU;
	int64_t x316 = INT64_MIN;
	static volatile uint64_t t75 = 331221711857947LLU;

    t75 = (x313&(x314+(x315<=x316)));

    if (t75 != 174LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x317 = INT16_MAX;
	volatile uint32_t x318 = UINT32_MAX;
	static volatile uint16_t x320 = 0U;
	static volatile uint32_t t76 = 44U;

    t76 = (x317&(x318+(x319<=x320)));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x321 = UINT16_MAX;
	int8_t x323 = 1;
	volatile int8_t x324 = 12;

    t77 = (x321&(x322+(x323<=x324)));

    if (t77 != 256) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x325 = INT8_MAX;
	int8_t x326 = -1;
	int16_t x327 = -1;
	volatile uint16_t x328 = 44U;
	volatile int32_t t78 = 142;

    t78 = (x325&(x326+(x327<=x328)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x329 = 243352126215146LLU;
	static int8_t x330 = INT8_MIN;
	volatile int8_t x331 = 1;

    t79 = (x329&(x330+(x331<=x332)));

    if (t79 != 243352126215040LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x333 = INT64_MIN;
	uint32_t x334 = 1063748445U;
	volatile uint16_t x335 = 9U;

    t80 = (x333&(x334+(x335<=x336)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x337 = INT8_MIN;
	uint64_t x338 = 464799226119085023LLU;
	int32_t x340 = -49;
	uint64_t t81 = 194LLU;

    t81 = (x337&(x338+(x339<=x340)));

    if (t81 != 464799226119084928LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x341 = INT64_MIN;
	volatile int64_t x342 = -1LL;
	int64_t x344 = INT64_MIN;
	int64_t t82 = 219090090372260643LL;

    t82 = (x341&(x342+(x343<=x344)));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x345 = 13U;
	int16_t x346 = INT16_MAX;
	volatile int16_t x347 = INT16_MIN;
	static int32_t t83 = 557;

    t83 = (x345&(x346+(x347<=x348)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x349 = -934564447;
	static uint16_t x350 = UINT16_MAX;
	volatile uint32_t x351 = UINT32_MAX;
	uint8_t x352 = 16U;

    t84 = (x349&(x350+(x351<=x352)));

    if (t84 != 44449) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x355 = -231LL;
	static uint64_t x356 = 469154942361LLU;
	static volatile int32_t t85 = -802;

    t85 = (x353&(x354+(x355<=x356)));

    if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x357 = INT64_MIN;
	static uint64_t x358 = 259999088263LLU;
	static int32_t x359 = INT32_MIN;
	uint64_t t86 = 92044318LLU;

    t86 = (x357&(x358+(x359<=x360)));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x362 = 1030U;
	volatile uint8_t x363 = UINT8_MAX;
	uint32_t x364 = 137339U;
	int32_t t87 = -1;

    t87 = (x361&(x362+(x363<=x364)));

    if (t87 != 1031) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x365 = INT16_MIN;
	volatile uint64_t x366 = UINT64_MAX;
	static int64_t x367 = -1LL;
	int64_t x368 = INT64_MAX;
	static uint64_t t88 = 219570523636121LLU;

    t88 = (x365&(x366+(x367<=x368)));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x369 = INT32_MIN;
	uint8_t x370 = 1U;
	int32_t t89 = 1403;

    t89 = (x369&(x370+(x371<=x372)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x373 = INT32_MIN;
	int8_t x374 = -1;
	int64_t x375 = INT64_MIN;
	int32_t x376 = -14302892;
	int32_t t90 = -16;

    t90 = (x373&(x374+(x375<=x376)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x377 = 0;
	volatile int64_t x378 = -1LL;
	uint32_t x379 = 64813545U;
	uint32_t x380 = UINT32_MAX;
	volatile int64_t t91 = -270786326216302LL;

    t91 = (x377&(x378+(x379<=x380)));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x382 = 0;
	int32_t x383 = 317;

    t92 = (x381&(x382+(x383<=x384)));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x385 = 481134304U;
	static int16_t x386 = INT16_MIN;
	volatile uint8_t x387 = 6U;
	int32_t x388 = 1;
	uint32_t t93 = 613008U;

    t93 = (x385&(x386+(x387<=x388)));

    if (t93 != 481132544U) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x390 = -9;
	uint64_t x391 = 10019209LLU;
	volatile int32_t t94 = 9264129;

    t94 = (x389&(x390+(x391<=x392)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x394 = 2U;
	int8_t x395 = INT8_MIN;
	int8_t x396 = INT8_MIN;
	static int32_t t95 = 0;

    t95 = (x393&(x394+(x395<=x396)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint32_t x397 = UINT32_MAX;
	volatile int8_t x398 = 1;
	int8_t x399 = INT8_MIN;
	int8_t x400 = INT8_MAX;
	volatile uint32_t t96 = 54961048U;

    t96 = (x397&(x398+(x399<=x400)));

    if (t96 != 2U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x401 = INT32_MIN;
	int64_t x402 = 38861975409180216LL;
	uint16_t x403 = 2027U;
	int8_t x404 = -1;
	volatile int64_t t97 = -31185602525977LL;

    t97 = (x401&(x402+(x403<=x404)));

    if (t97 != 38861974343254016LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x405 = 2852965U;
	int64_t x406 = -7855311416LL;
	int16_t x407 = INT16_MIN;
	uint64_t x408 = 1647750688487LLU;
	volatile int64_t t98 = 1136940459693069LL;

    t98 = (x405&(x406+(x407<=x408)));

    if (t98 != 589888LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x409 = INT8_MAX;
	static uint64_t x412 = 559LLU;
	uint32_t t99 = 3915160U;

    t99 = (x409&(x410+(x411<=x412)));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x413 = INT64_MAX;
	static uint16_t x414 = UINT16_MAX;
	static int32_t x415 = INT32_MIN;
	static volatile int64_t t100 = 106675698152173986LL;

    t100 = (x413&(x414+(x415<=x416)));

    if (t100 != 65535LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x418 = UINT32_MAX;
	volatile uint8_t x420 = 0U;

    t101 = (x417&(x418+(x419<=x420)));

    if (t101 != 4294967168U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x421 = INT16_MIN;
	uint8_t x422 = 77U;
	volatile int64_t x423 = INT64_MIN;
	uint32_t x424 = 2U;
	int32_t t102 = -1475656;

    t102 = (x421&(x422+(x423<=x424)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x428 = 0;
	int64_t t103 = 128266399LL;

    t103 = (x425&(x426+(x427<=x428)));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x431 = INT64_MAX;
	volatile uint64_t x432 = 61045008LLU;
	volatile int32_t t104 = 83771;

    t104 = (x429&(x430+(x431<=x432)));

    if (t104 != 82) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x433 = UINT64_MAX;
	volatile int32_t x434 = INT32_MIN;
	int16_t x436 = INT16_MIN;
	static uint64_t t105 = 5576323424529LLU;

    t105 = (x433&(x434+(x435<=x436)));

    if (t105 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x437 = 6U;
	static uint64_t x438 = UINT64_MAX;
	static int32_t x439 = INT32_MIN;
	volatile int8_t x440 = 1;
	uint64_t t106 = 16368078416163LLU;

    t106 = (x437&(x438+(x439<=x440)));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x441 = 7U;
	int64_t x442 = INT64_MIN;
	int16_t x443 = 1;
	static int64_t t107 = 914296292391282538LL;

    t107 = (x441&(x442+(x443<=x444)));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x446 = -30534841684253812LL;
	int32_t x447 = -1;
	int64_t t108 = 4151989392262LL;

    t108 = (x445&(x446+(x447<=x448)));

    if (t108 != 4LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x449 = 18U;
	int64_t x450 = INT64_MIN;
	volatile uint8_t x452 = 11U;

    t109 = (x449&(x450+(x451<=x452)));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x453 = -12;
	volatile uint16_t x454 = UINT16_MAX;
	int8_t x455 = -39;
	volatile int64_t x456 = -1LL;
	volatile int32_t t110 = 100;

    t110 = (x453&(x454+(x455<=x456)));

    if (t110 != 65536) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x458 = UINT8_MAX;
	int16_t x459 = INT16_MIN;
	static int32_t t111 = -1;

    t111 = (x457&(x458+(x459<=x460)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x463 = -756717;
	uint16_t x464 = 494U;
	int32_t t112 = -240;

    t112 = (x461&(x462+(x463<=x464)));

    if (t112 != 2) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x465 = -1LL;
	int16_t x466 = INT16_MIN;
	int16_t x468 = -1;

    t113 = (x465&(x466+(x467<=x468)));

    if (t113 != -32767LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x469 = UINT64_MAX;
	int32_t x470 = INT32_MIN;
	int64_t x471 = 60777902256LL;
	int64_t x472 = INT64_MIN;
	uint64_t t114 = 673336995853331690LLU;

    t114 = (x469&(x470+(x471<=x472)));

    if (t114 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x473 = -1;
	int16_t x474 = INT16_MIN;
	volatile int16_t x475 = 8;
	int8_t x476 = -6;
	int32_t t115 = -55;

    t115 = (x473&(x474+(x475<=x476)));

    if (t115 != -32768) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x481 = INT32_MIN;
	volatile int32_t x482 = INT32_MIN;
	static int32_t x483 = -1;
	uint16_t x484 = 275U;
	volatile int32_t t116 = INT32_MIN;

    t116 = (x481&(x482+(x483<=x484)));

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x486 = INT16_MAX;
	static int8_t x487 = INT8_MAX;
	int64_t x488 = -29268457LL;
	int32_t t117 = -178156232;

    t117 = (x485&(x486+(x487<=x488)));

    if (t117 != 32767) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x489 = UINT8_MAX;
	int64_t x490 = INT64_MIN;
	uint16_t x491 = UINT16_MAX;
	uint64_t x492 = UINT64_MAX;
	static int64_t t118 = 3LL;

    t118 = (x489&(x490+(x491<=x492)));

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x493 = -1;
	uint16_t x496 = UINT16_MAX;
	volatile int32_t t119 = -46;

    t119 = (x493&(x494+(x495<=x496)));

    if (t119 != -6679971) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x502 = UINT32_MAX;
	uint32_t x503 = UINT32_MAX;
	volatile int32_t x504 = INT32_MAX;
	volatile uint32_t t120 = 21035U;

    t120 = (x501&(x502+(x503<=x504)));

    if (t120 != 4294934528U) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x505 = -710490597351034LL;
	int32_t x507 = INT32_MIN;
	uint8_t x508 = 95U;

    t121 = (x505&(x506+(x507<=x508)));

    if (t121 != -710490597351040LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x509 = INT64_MAX;
	static uint32_t x510 = 517456695U;
	int32_t x511 = -780;
	volatile int64_t t122 = -87LL;

    t122 = (x509&(x510+(x511<=x512)));

    if (t122 != 517456695LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x513 = 27U;
	uint32_t x514 = 321U;
	uint8_t x515 = 28U;
	static int8_t x516 = 1;

    t123 = (x513&(x514+(x515<=x516)));

    if (t123 != 1U) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x518 = INT16_MAX;
	uint8_t x519 = 124U;
	volatile int32_t t124 = 7925;

    t124 = (x517&(x518+(x519<=x520)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x521 = 187299;
	static int32_t x523 = 1050162828;
	int64_t x524 = -33063688219402578LL;
	int32_t t125 = 1;

    t125 = (x521&(x522+(x523<=x524)));

    if (t125 != 163840) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x525 = INT8_MIN;
	int8_t x526 = INT8_MIN;
	int64_t x527 = INT64_MIN;
	uint64_t x528 = UINT64_MAX;
	volatile int32_t t126 = -744;

    t126 = (x525&(x526+(x527<=x528)));

    if (t126 != -128) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x529 = UINT64_MAX;
	int64_t x530 = 3128LL;
	volatile int64_t x531 = -323193LL;
	static volatile uint64_t t127 = 94814LLU;

    t127 = (x529&(x530+(x531<=x532)));

    if (t127 != 3129LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x533 = INT16_MAX;
	volatile int32_t x534 = 20;
	uint16_t x535 = 812U;
	volatile int8_t x536 = 2;

    t128 = (x533&(x534+(x535<=x536)));

    if (t128 != 20) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x544 = INT64_MIN;
	volatile int32_t t129 = -51783;

    t129 = (x541&(x542+(x543<=x544)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x545 = 4943402091255LL;
	uint16_t x547 = 13U;
	static int64_t t130 = -241452837307452LL;

    t130 = (x545&(x546+(x547<=x548)));

    if (t130 != 2LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x549 = INT8_MIN;
	static int32_t t131 = -21364694;

    t131 = (x549&(x550+(x551<=x552)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x554 = 0U;
	static int16_t x555 = INT16_MAX;

    t132 = (x553&(x554+(x555<=x556)));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x561 = INT16_MIN;
	volatile uint32_t x563 = 199232U;
	volatile int32_t t133 = -47449343;

    t133 = (x561&(x562+(x563<=x564)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x566 = 3123U;
	volatile int32_t t134 = 4660520;

    t134 = (x565&(x566+(x567<=x568)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x570 = 228U;
	static volatile int8_t x571 = INT8_MIN;
	volatile int64_t x572 = -12766611278LL;

    t135 = (x569&(x570+(x571<=x572)));

    if (t135 != 32) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x573 = -1;
	int8_t x574 = 5;
	int64_t x575 = -1LL;
	int32_t x576 = -1;

    t136 = (x573&(x574+(x575<=x576)));

    if (t136 != 6) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x577 = INT16_MAX;
	volatile int32_t x579 = INT32_MIN;
	int64_t x580 = INT64_MAX;
	static int32_t t137 = -53938466;

    t137 = (x577&(x578+(x579<=x580)));

    if (t137 != 89) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x583 = INT8_MIN;
	static uint32_t x584 = 820U;
	static volatile int32_t t138 = -185545;

    t138 = (x581&(x582+(x583<=x584)));

    if (t138 != 128) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x589 = -1;
	static uint16_t x590 = 2U;
	uint8_t x591 = 0U;
	uint8_t x592 = 108U;
	static int32_t t139 = -1;

    t139 = (x589&(x590+(x591<=x592)));

    if (t139 != 3) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x593 = -1;
	int32_t x594 = INT32_MIN;
	uint32_t x595 = 5U;
	volatile int8_t x596 = -1;
	int32_t t140 = -3819527;

    t140 = (x593&(x594+(x595<=x596)));

    if (t140 != -2147483647) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x597 = INT8_MAX;
	uint8_t x598 = UINT8_MAX;
	uint32_t x599 = UINT32_MAX;
	int64_t x600 = -1LL;
	int32_t t141 = -538844986;

    t141 = (x597&(x598+(x599<=x600)));

    if (t141 != 127) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x601 = 2848205580884LLU;
	uint32_t x602 = 1998872U;
	static int64_t x604 = INT64_MIN;
	uint64_t t142 = 16141192LLU;

    t142 = (x601&(x602+(x603<=x604)));

    if (t142 != 524304LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x605 = -5;
	volatile int8_t x606 = 1;
	static volatile uint8_t x608 = 2U;
	static int32_t t143 = 75192322;

    t143 = (x605&(x606+(x607<=x608)));

    if (t143 != 2) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x614 = 1U;
	volatile int64_t x615 = -133760755117945365LL;
	int64_t x616 = INT64_MIN;
	static int32_t t144 = 9665;

    t144 = (x613&(x614+(x615<=x616)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x617 = 19940938139251LL;
	int16_t x618 = INT16_MIN;
	int32_t x619 = INT32_MIN;
	uint64_t x620 = 3658628701LLU;

    t145 = (x617&(x618+(x619<=x620)));

    if (t145 != 19940938121216LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x622 = 3109623LL;
	static volatile uint32_t x623 = 3314682U;
	uint32_t x624 = UINT32_MAX;
	int64_t t146 = 369144932LL;

    t146 = (x621&(x622+(x623<=x624)));

    if (t146 != 3109624LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x625 = 8;
	int16_t x626 = INT16_MAX;
	int16_t x627 = -1;
	int8_t x628 = INT8_MIN;

    t147 = (x625&(x626+(x627<=x628)));

    if (t147 != 8) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x630 = 1022147796443864498LLU;
	static int16_t x631 = -1;
	uint64_t t148 = 89000744LLU;

    t148 = (x629&(x630+(x631<=x632)));

    if (t148 != 1526472115LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x633 = INT8_MAX;
	uint16_t x634 = 96U;
	uint32_t x636 = UINT32_MAX;
	int32_t t149 = 122699497;

    t149 = (x633&(x634+(x635<=x636)));

    if (t149 != 97) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x637 = 1;
	volatile int32_t x638 = -1;
	static int16_t x639 = INT16_MIN;
	volatile int16_t x640 = -3047;
	volatile int32_t t150 = -559;

    t150 = (x637&(x638+(x639<=x640)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x642 = UINT32_MAX;
	uint64_t x643 = UINT64_MAX;
	int8_t x644 = -1;

    t151 = (x641&(x642+(x643<=x644)));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x645 = INT16_MIN;
	uint64_t x646 = UINT64_MAX;
	int8_t x647 = -1;
	volatile uint64_t t152 = 383784LLU;

    t152 = (x645&(x646+(x647<=x648)));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x650 = UINT64_MAX;
	uint64_t x651 = 0LLU;
	uint32_t x652 = 357052U;
	volatile uint64_t t153 = 3117324796085014239LLU;

    t153 = (x649&(x650+(x651<=x652)));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x657 = INT8_MAX;
	int16_t x659 = INT16_MIN;
	int32_t x660 = INT32_MIN;

    t154 = (x657&(x658+(x659<=x660)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x662 = INT32_MIN;
	int32_t x663 = INT32_MIN;
	static int64_t x664 = INT64_MIN;

    t155 = (x661&(x662+(x663<=x664)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x669 = 1U;
	int64_t x670 = -22LL;
	static int64_t x671 = INT64_MAX;
	int16_t x672 = INT16_MIN;
	int64_t t156 = -14LL;

    t156 = (x669&(x670+(x671<=x672)));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x673 = INT64_MAX;
	int32_t x676 = INT32_MIN;
	volatile int64_t t157 = 4172849983579259LL;

    t157 = (x673&(x674+(x675<=x676)));

    if (t157 != 2147483647LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x677 = INT8_MAX;
	int64_t x678 = INT64_MIN;
	uint16_t x679 = UINT16_MAX;
	static int8_t x680 = -36;
	int64_t t158 = -12032715443039LL;

    t158 = (x677&(x678+(x679<=x680)));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x682 = 1090;
	static int32_t x683 = -1;
	volatile int64_t t159 = -57900187LL;

    t159 = (x681&(x682+(x683<=x684)));

    if (t159 != 1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x685 = -1;
	uint8_t x686 = UINT8_MAX;
	uint32_t x687 = UINT32_MAX;
	static uint8_t x688 = 0U;
	int32_t t160 = 1;

    t160 = (x685&(x686+(x687<=x688)));

    if (t160 != 255) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x689 = 0U;
	int64_t x690 = INT64_MIN;
	uint64_t x691 = 19429LLU;
	static volatile int8_t x692 = 0;
	static volatile int64_t t161 = 2767856458063287661LL;

    t161 = (x689&(x690+(x691<=x692)));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x693 = 7516;
	static int32_t x696 = INT32_MIN;
	int32_t t162 = -170976389;

    t162 = (x693&(x694+(x695<=x696)));

    if (t162 != 7516) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x697 = INT16_MIN;
	volatile int8_t x698 = 44;
	int32_t t163 = -940262;

    t163 = (x697&(x698+(x699<=x700)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x701 = INT64_MAX;
	int16_t x702 = -1;
	static int16_t x703 = INT16_MIN;
	uint16_t x704 = UINT16_MAX;
	int64_t t164 = 162217991659356846LL;

    t164 = (x701&(x702+(x703<=x704)));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x705 = -53427;
	uint64_t x706 = 19572185726LLU;

    t165 = (x705&(x706+(x707<=x708)));

    if (t165 != 19572132428LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x709 = 31U;
	static int32_t x710 = -1;
	int32_t x712 = INT32_MIN;
	static volatile int32_t t166 = 153170;

    t166 = (x709&(x710+(x711<=x712)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x713 = INT8_MIN;
	int32_t x714 = INT32_MIN;
	int64_t x715 = -1LL;
	static volatile int32_t t167 = INT32_MIN;

    t167 = (x713&(x714+(x715<=x716)));

    if (t167 != INT32_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x717 = UINT8_MAX;
	volatile uint8_t x718 = UINT8_MAX;
	volatile uint8_t x719 = 3U;
	static int32_t x720 = -1;

    t168 = (x717&(x718+(x719<=x720)));

    if (t168 != 255) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x721 = INT16_MAX;
	int16_t x722 = INT16_MIN;
	int8_t x723 = 1;
	uint64_t x724 = UINT64_MAX;
	static int32_t t169 = -8;

    t169 = (x721&(x722+(x723<=x724)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x725 = INT16_MIN;
	int32_t x726 = INT32_MAX;
	uint8_t x727 = 7U;
	int8_t x728 = INT8_MIN;
	volatile int32_t t170 = 369;

    t170 = (x725&(x726+(x727<=x728)));

    if (t170 != 2147450880) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x729 = INT8_MAX;
	int16_t x730 = -1;
	int64_t x731 = -3LL;
	static volatile int32_t t171 = -1320649;

    t171 = (x729&(x730+(x731<=x732)));

    if (t171 != 127) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x733 = 1697U;
	static uint16_t x735 = 185U;
	int32_t t172 = -391;

    t172 = (x733&(x734+(x735<=x736)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x739 = 0;
	volatile int16_t x740 = -1;
	volatile uint32_t t173 = 230183U;

    t173 = (x737&(x738+(x739<=x740)));

    if (t173 != 8362U) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x741 = UINT64_MAX;
	volatile uint16_t x743 = UINT16_MAX;
	static uint64_t t174 = 15036796028367089LLU;

    t174 = (x741&(x742+(x743<=x744)));

    if (t174 != 28LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x745 = INT32_MIN;
	int32_t x746 = -5;
	int32_t x747 = 530982839;
	int64_t x748 = INT64_MIN;
	volatile int32_t t175 = INT32_MIN;

    t175 = (x745&(x746+(x747<=x748)));

    if (t175 != INT32_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x749 = INT16_MIN;
	static int16_t x750 = INT16_MAX;
	volatile int8_t x751 = -1;
	int64_t x752 = 262190319349LL;
	volatile int32_t t176 = 191;

    t176 = (x749&(x750+(x751<=x752)));

    if (t176 != 32768) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x753 = 57;
	int16_t x754 = -1;
	volatile int16_t x755 = INT16_MAX;
	int32_t t177 = -84;

    t177 = (x753&(x754+(x755<=x756)));

    if (t177 != 57) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x757 = UINT8_MAX;
	int64_t x758 = -10LL;
	uint16_t x759 = 314U;
	int64_t x760 = 5801959971599338LL;
	static volatile int64_t t178 = 818366182431348LL;

    t178 = (x757&(x758+(x759<=x760)));

    if (t178 != 247LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x761 = -17;
	int32_t x762 = 7;
	int64_t x764 = INT64_MIN;
	volatile int32_t t179 = 36463;

    t179 = (x761&(x762+(x763<=x764)));

    if (t179 != 7) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x765 = INT8_MIN;
	static int16_t x767 = 1;
	int32_t t180 = 212438;

    t180 = (x765&(x766+(x767<=x768)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x769 = -1;
	int16_t x770 = INT16_MAX;
	uint32_t x771 = 11U;
	int32_t x772 = INT32_MIN;
	static int32_t t181 = 3188;

    t181 = (x769&(x770+(x771<=x772)));

    if (t181 != 32768) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x773 = UINT16_MAX;
	int64_t x774 = -239638906882697LL;
	int8_t x775 = INT8_MAX;
	int16_t x776 = 0;
	int64_t t182 = 68380522494795280LL;

    t182 = (x773&(x774+(x775<=x776)));

    if (t182 != 46455LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x778 = INT16_MIN;
	int16_t x779 = -1;
	int16_t x780 = 1;

    t183 = (x777&(x778+(x779<=x780)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x781 = INT16_MIN;
	int16_t x783 = -4094;
	uint16_t x784 = UINT16_MAX;
	int32_t t184 = -301;

    t184 = (x781&(x782+(x783<=x784)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int8_t x785 = 4;
	int32_t x786 = -1;
	int64_t x787 = INT64_MIN;
	uint8_t x788 = 100U;
	static volatile int32_t t185 = -1916;

    t185 = (x785&(x786+(x787<=x788)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x789 = INT64_MAX;
	int8_t x790 = INT8_MAX;
	uint8_t x791 = 45U;
	uint8_t x792 = 24U;

    t186 = (x789&(x790+(x791<=x792)));

    if (t186 != 127LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x793 = INT64_MIN;
	int32_t x794 = 1;
	static uint8_t x795 = UINT8_MAX;
	uint64_t x796 = 1LLU;
	volatile int64_t t187 = 4951725LL;

    t187 = (x793&(x794+(x795<=x796)));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x799 = -6;
	uint64_t x800 = 330LLU;
	static volatile int64_t t188 = 704603015617432LL;

    t188 = (x797&(x798+(x799<=x800)));

    if (t188 != 1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x803 = 29228798U;
	static int8_t x804 = -1;

    t189 = (x801&(x802+(x803<=x804)));

    if (t189 != 17842179LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x807 = 17U;
	int8_t x808 = 0;

    t190 = (x805&(x806+(x807<=x808)));

    if (t190 != INT64_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x809 = -14;
	static uint16_t x810 = 11537U;
	int32_t x811 = -12200987;
	int16_t x812 = 12432;
	volatile int32_t t191 = -11263;

    t191 = (x809&(x810+(x811<=x812)));

    if (t191 != 11538) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x813 = 279014LL;
	volatile int64_t x814 = -1LL;
	int8_t x815 = INT8_MIN;
	uint32_t x816 = 375925875U;
	static volatile int64_t t192 = -1797986231491836063LL;

    t192 = (x813&(x814+(x815<=x816)));

    if (t192 != 279014LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x817 = 726;
	int64_t x818 = -1LL;
	volatile int16_t x819 = -1;
	int64_t t193 = 9LL;

    t193 = (x817&(x818+(x819<=x820)));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x821 = UINT64_MAX;
	uint64_t x823 = 372979565920LLU;
	int32_t x824 = INT32_MAX;
	volatile uint64_t t194 = 5LLU;

    t194 = (x821&(x822+(x823<=x824)));

    if (t194 != 1LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x825 = UINT64_MAX;
	volatile int16_t x827 = INT16_MAX;
	int8_t x828 = INT8_MIN;
	uint64_t t195 = 1376595407970LLU;

    t195 = (x825&(x826+(x827<=x828)));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x832 = INT32_MIN;

    t196 = (x829&(x830+(x831<=x832)));

    if (t196 != INT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x833 = UINT8_MAX;
	volatile int64_t x834 = 1939530342141788LL;
	static uint8_t x835 = UINT8_MAX;
	int32_t x836 = -3;
	static int64_t t197 = 3368684283638226378LL;

    t197 = (x833&(x834+(x835<=x836)));

    if (t197 != 92LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x837 = 6U;
	int64_t x838 = INT64_MIN;
	uint32_t x839 = 261U;
	volatile uint64_t x840 = 14507LLU;
	int64_t t198 = -429407611LL;

    t198 = (x837&(x838+(x839<=x840)));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x842 = -1LL;
	static int32_t x843 = INT32_MIN;
	uint8_t x844 = 16U;

    t199 = (x841&(x842+(x843<=x844)));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

