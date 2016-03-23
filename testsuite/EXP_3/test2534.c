
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

static uint64_t x5 = 18LLU;
static int16_t x6 = 0;
int32_t x9 = INT32_MIN;
int8_t x11 = 0;
volatile int16_t x13 = 1;
int8_t x17 = INT8_MAX;
uint64_t x20 = 16959542119LLU;
int64_t x21 = INT64_MIN;
static int32_t x23 = -1;
int8_t x26 = 24;
volatile int64_t t6 = INT64_MIN;
int8_t x32 = INT8_MAX;
volatile uint32_t t8 = 1U;
int64_t x37 = INT64_MIN;
static int16_t x38 = INT16_MAX;
uint8_t x40 = UINT8_MAX;
int16_t x41 = INT16_MIN;
int16_t x47 = INT16_MAX;
int32_t x51 = -1;
volatile int64_t x58 = 278LL;
static volatile int64_t x60 = 126038618LL;
int64_t t14 = -2990726179375LL;
uint32_t x75 = 1192671830U;
static uint32_t x78 = 1U;
int16_t x79 = INT16_MAX;
int16_t x81 = -1;
uint64_t x89 = 1749380LLU;
static int8_t x97 = INT8_MAX;
static int32_t x99 = 33470241;
volatile uint64_t x100 = UINT64_MAX;
volatile uint64_t t24 = 1323799741877789154LLU;
volatile uint32_t x102 = 52158421U;
static int64_t t25 = -3364455LL;
int64_t x110 = 34006131591LL;
static uint32_t x111 = UINT32_MAX;
int16_t x118 = INT16_MIN;
int64_t x120 = 4098030943302LL;
volatile uint64_t t30 = 380571034279334LLU;
uint16_t x125 = 9188U;
int16_t x141 = -834;
uint64_t x147 = UINT64_MAX;
int32_t x149 = 3;
static volatile uint64_t t38 = 30129LLU;
uint8_t x160 = 2U;
static int64_t x161 = -266793799007185LL;
volatile int32_t t42 = 155734508;
uint16_t x175 = UINT16_MAX;
uint64_t t44 = 1LLU;
volatile int64_t x187 = -1LL;
static int64_t x191 = INT64_MIN;
uint8_t x195 = UINT8_MAX;
int64_t x196 = INT64_MIN;
uint32_t x200 = 50043U;
uint16_t x208 = 1667U;
int16_t x212 = INT16_MIN;
int32_t x215 = 7356434;
uint16_t x226 = 51U;
int16_t x227 = -1;
volatile int64_t x232 = INT64_MIN;
static int64_t t57 = 16629677LL;
uint16_t x233 = UINT16_MAX;
static volatile int32_t x234 = -243;
int32_t x235 = -6;
int8_t x239 = -1;
int8_t x241 = -15;
int32_t x243 = INT32_MIN;
uint64_t x251 = UINT64_MAX;
int64_t x266 = -1LL;
static int8_t x272 = -23;
int32_t x280 = -313139;
static uint8_t x282 = UINT8_MAX;
int64_t x288 = INT64_MAX;
int64_t x298 = INT64_MIN;
uint16_t x300 = 0U;
static uint16_t x309 = UINT16_MAX;
static int8_t x310 = INT8_MAX;
volatile int32_t t80 = 94572;
int16_t x326 = INT16_MAX;
volatile uint8_t x332 = UINT8_MAX;
uint64_t x335 = 650308LLU;
int16_t x336 = 0;
static int64_t x338 = 75LL;
uint16_t x339 = 24U;
static int64_t t84 = -1505459675LL;
static uint16_t x343 = UINT16_MAX;
volatile uint64_t t86 = 2322LLU;
int64_t t87 = -2566LL;
volatile int32_t t88 = 283419;
static volatile int32_t t89 = -21390016;
uint16_t x368 = UINT16_MAX;
uint32_t x370 = 10U;
int8_t x373 = 2;
uint64_t x377 = 20LLU;
static volatile int16_t x379 = 12855;
int8_t x385 = -63;
volatile int64_t t96 = -1948427366LL;
volatile uint16_t x391 = 10513U;
int32_t t98 = 94;
uint32_t x404 = UINT32_MAX;
uint8_t x407 = 0U;
int64_t x414 = INT64_MAX;
int64_t x415 = INT64_MAX;
static uint16_t x424 = UINT16_MAX;
uint8_t x430 = 31U;
static volatile int64_t x444 = INT64_MIN;
volatile uint32_t x447 = UINT32_MAX;
static int32_t x454 = -1;
static volatile int64_t t113 = -61868278233831LL;
uint16_t x457 = 63U;
static volatile int32_t x464 = -907;
int32_t x467 = 1;
int16_t x472 = INT16_MIN;
uint16_t x473 = 13U;
static volatile uint64_t x475 = UINT64_MAX;
int64_t x482 = INT64_MIN;
int64_t x488 = INT64_MIN;
uint8_t x489 = 2U;
uint16_t x490 = 2204U;
static volatile uint32_t t122 = 19800738U;
static int64_t x513 = -21819LL;
int16_t x529 = INT16_MIN;
static volatile int8_t x530 = INT8_MIN;
int64_t t133 = 1997167346439401LL;
int32_t x538 = INT32_MIN;
int64_t x541 = -1LL;
int8_t x546 = -1;
static uint32_t x551 = 10584U;
int64_t t137 = -87LL;
int64_t x553 = -10333051276168802LL;
int16_t x557 = INT16_MIN;
uint16_t x559 = 10807U;
static int16_t x564 = INT16_MIN;
uint8_t x575 = 38U;
int16_t x585 = 0;
volatile int64_t x586 = -144426891221081LL;
static int32_t x587 = -1;
volatile uint64_t x588 = 13017LLU;
volatile int8_t x591 = INT8_MAX;
volatile int64_t x592 = -12249LL;
int64_t x595 = -1LL;
uint16_t x599 = UINT16_MAX;
volatile uint32_t t149 = 1U;
uint64_t x604 = UINT64_MAX;
volatile uint64_t t150 = 94100214595LLU;
static int16_t x606 = INT16_MIN;
int16_t x607 = INT16_MIN;
uint8_t x608 = 76U;
int8_t x614 = INT8_MAX;
uint64_t t153 = 1LLU;
int64_t t154 = INT64_MIN;
uint64_t x623 = 243LLU;
int8_t x624 = INT8_MAX;
int8_t x630 = INT8_MAX;
static uint32_t x632 = UINT32_MAX;
static uint32_t t157 = 49800124U;
static int8_t x634 = INT8_MAX;
int64_t x636 = INT64_MIN;
uint64_t x641 = 61918LLU;
int32_t x642 = INT32_MIN;
int64_t x659 = 2725352630990623755LL;
uint64_t x661 = 3834286386371LLU;
uint64_t t166 = 61897LLU;
static volatile int64_t x671 = INT64_MIN;
static int64_t x675 = INT64_MAX;
int64_t x677 = -1LL;
volatile int64_t x679 = INT64_MAX;
uint64_t t169 = 1885167908LLU;
int8_t x687 = -23;
volatile int32_t t172 = -216427362;
static volatile int32_t t173 = 1485995;
uint8_t x698 = 0U;
static int32_t x700 = INT32_MIN;
int8_t x701 = -1;
int8_t x702 = INT8_MIN;
uint8_t x705 = 0U;
int32_t x709 = -3910;
static uint8_t x720 = UINT8_MAX;
int8_t x723 = -1;
uint64_t x728 = 58427992691086LLU;
static volatile uint32_t t182 = 117360U;
int16_t x733 = INT16_MAX;
static uint64_t x736 = 148LLU;
volatile int64_t x742 = 1LL;
static volatile uint64_t t185 = 118456996LLU;
int16_t x745 = -1;
int8_t x750 = INT8_MIN;
static uint16_t x751 = UINT16_MAX;
int8_t x756 = 49;
int16_t x758 = -1;
volatile int32_t t192 = -244287;
int64_t x782 = INT64_MIN;
int64_t t195 = 8354399011404LL;
int64_t x787 = -11570085267762LL;
int64_t t196 = 9359775022LL;
int32_t x792 = INT32_MAX;
int32_t x794 = -1;
int32_t x796 = 1012;
volatile int64_t t198 = 36LL;


void f0(void) {
    	static volatile uint64_t x1 = 110720865319951173LLU;
	volatile int8_t x2 = INT8_MIN;
	volatile int32_t x3 = INT32_MIN;
	volatile int32_t x4 = INT32_MIN;
	volatile uint64_t t0 = 254388LLU;

    t0 = ((x1|x2)^(x3|x4));

    if (t0 != 2147483589LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x7 = -1;
	volatile int16_t x8 = -1;
	uint64_t t1 = 4804LLU;

    t1 = ((x5|x6)^(x7|x8));

    if (t1 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint64_t x10 = 7756958295763768LLU;
	uint8_t x12 = 30U;
	static volatile uint64_t t2 = 187763LLU;

    t2 = ((x9|x10)^(x11|x12));

    if (t2 != 18446744071960636198LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = -1LL;
	uint64_t x15 = UINT64_MAX;
	int16_t x16 = -1;
	volatile uint64_t t3 = 4187356107203150LLU;

    t3 = ((x13|x14)^(x15|x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x18 = UINT8_MAX;
	static int64_t x19 = INT64_MAX;
	static uint64_t t4 = 10417875218672LLU;

    t4 = ((x17|x18)^(x19|x20));

    if (t4 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MIN;
	static int16_t x24 = INT16_MIN;
	int64_t t5 = -4561000891919369510LL;

    t5 = ((x21|x22)^(x23|x24));

    if (t5 != 32767LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	int64_t x27 = 112707580501225LL;
	int64_t x28 = INT64_MAX;

    t6 = ((x25|x26)^(x27|x28));

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = INT64_MAX;
	static uint16_t x30 = 36U;
	int64_t x31 = -14LL;
	volatile int64_t t7 = INT64_MIN;

    t7 = ((x29|x30)^(x31|x32));

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	static int32_t x34 = 23591;
	uint32_t x35 = 33U;
	int32_t x36 = -1;

    t8 = ((x33|x34)^(x35|x36));

    if (t8 != 88U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x39 = UINT32_MAX;
	int64_t t9 = -505340LL;

    t9 = ((x37|x38)^(x39|x40));

    if (t9 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = INT32_MIN;
	uint64_t x43 = 293737822907LLU;
	int8_t x44 = -1;
	volatile uint64_t t10 = 5621461LLU;

    t10 = ((x41|x42)^(x43|x44));

    if (t10 != 32767LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = INT64_MIN;
	int32_t x46 = INT32_MIN;
	volatile int16_t x48 = 1;
	int64_t t11 = -155082LL;

    t11 = ((x45|x46)^(x47|x48));

    if (t11 != -2147450881LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x49 = UINT64_MAX;
	int16_t x50 = -7626;
	int64_t x52 = INT64_MIN;
	volatile uint64_t t12 = 727870851147796102LLU;

    t12 = ((x49|x50)^(x51|x52));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x53 = 222U;
	volatile int64_t x54 = INT64_MAX;
	static int64_t x55 = INT64_MIN;
	uint16_t x56 = 3898U;
	static volatile int64_t t13 = 358101986725126457LL;

    t13 = ((x53|x54)^(x55|x56));

    if (t13 != -3899LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	static int8_t x59 = INT8_MIN;

    t14 = ((x57|x58)^(x59|x60));

    if (t14 != -2147483611LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 2;
	volatile uint8_t x62 = 1U;
	int8_t x63 = INT8_MAX;
	static int16_t x64 = -255;
	volatile int32_t t15 = 2;

    t15 = ((x61|x62)^(x63|x64));

    if (t15 != -132) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MIN;
	volatile uint16_t x66 = UINT16_MAX;
	int32_t x67 = INT32_MIN;
	int16_t x68 = -1;
	volatile int64_t t16 = -84345795579472166LL;

    t16 = ((x65|x66)^(x67|x68));

    if (t16 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = INT32_MIN;
	int16_t x70 = 1;
	volatile int8_t x71 = INT8_MIN;
	int64_t x72 = INT64_MIN;
	volatile int64_t t17 = -1231049496243898LL;

    t17 = ((x69|x70)^(x71|x72));

    if (t17 != 2147483521LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	volatile uint8_t x74 = UINT8_MAX;
	uint64_t x76 = 13152649523590986LLU;
	uint64_t t18 = 3905581LLU;

    t18 = ((x73|x74)^(x75|x76));

    if (t18 != 13152649607643041LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -1;
	uint32_t x80 = UINT32_MAX;
	volatile uint32_t t19 = 16U;

    t19 = ((x77|x78)^(x79|x80));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x82 = INT64_MIN;
	uint32_t x83 = 16792U;
	volatile int8_t x84 = -12;
	volatile int64_t t20 = 1883254933196LL;

    t20 = ((x81|x82)^(x83|x84));

    if (t20 != -4294967293LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = UINT16_MAX;
	static volatile int16_t x86 = INT16_MIN;
	int16_t x87 = INT16_MIN;
	static volatile int64_t x88 = INT64_MIN;
	volatile int64_t t21 = -74860908LL;

    t21 = ((x85|x86)^(x87|x88));

    if (t21 != 32767LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = INT32_MAX;
	int8_t x91 = INT8_MAX;
	int64_t x92 = INT64_MAX;
	uint64_t t22 = 2419091485976627LLU;

    t22 = ((x89|x90)^(x91|x92));

    if (t22 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = 0;
	int16_t x94 = -1;
	int32_t x95 = 5815;
	static int32_t x96 = -7122;
	volatile int32_t t23 = 13;

    t23 = ((x93|x94)^(x95|x96));

    if (t23 != 2368) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x98 = 3U;

    t24 = ((x97|x98)^(x99|x100));

    if (t24 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x101 = 110LL;
	volatile int32_t x103 = INT32_MAX;
	static int64_t x104 = -1LL;

    t25 = ((x101|x102)^(x103|x104));

    if (t25 != -52158464LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x105 = -99;
	int64_t x106 = -11307905603585LL;
	static volatile int16_t x107 = -28;
	int32_t x108 = INT32_MIN;
	int64_t t26 = -60719988431752LL;

    t26 = ((x105|x106)^(x107|x108));

    if (t26 != 27LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x109 = 1638294164591046LLU;
	volatile int8_t x112 = 1;
	uint64_t t27 = 3405908899749LLU;

    t27 = ((x109|x110)^(x111|x112));

    if (t27 != 1638302390160440LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = UINT32_MAX;
	uint8_t x114 = 5U;
	int8_t x115 = INT8_MAX;
	int64_t x116 = INT64_MIN;
	int64_t t28 = 1171928512598871686LL;

    t28 = ((x113|x114)^(x115|x116));

    if (t28 != -9223372032559808640LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = UINT64_MAX;
	uint16_t x119 = 1536U;
	uint64_t t29 = 50985633152LLU;

    t29 = ((x117|x118)^(x119|x120));

    if (t29 != 18446739975678607801LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x121 = INT8_MIN;
	uint64_t x122 = UINT64_MAX;
	int32_t x123 = -11;
	static int64_t x124 = -11781721LL;

    t30 = ((x121|x122)^(x123|x124));

    if (t30 != 8LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = INT16_MIN;
	static int32_t x127 = INT32_MAX;
	static uint64_t x128 = UINT64_MAX;
	static volatile uint64_t t31 = 26724966603501LLU;

    t31 = ((x125|x126)^(x127|x128));

    if (t31 != 23579LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	int64_t x130 = 885256LL;
	static int32_t x131 = INT32_MAX;
	int64_t x132 = INT64_MIN;
	volatile int64_t t32 = -932822333842195852LL;

    t32 = ((x129|x130)^(x131|x132));

    if (t32 != 9223372034707292279LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MIN;
	int16_t x134 = 2343;
	int32_t x135 = INT32_MAX;
	static volatile int16_t x136 = INT16_MAX;
	int32_t t33 = 4;

    t33 = ((x133|x134)^(x135|x136));

    if (t33 != -2147453224) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = UINT32_MAX;
	int16_t x138 = INT16_MIN;
	int16_t x139 = -5;
	int64_t x140 = INT64_MIN;
	int64_t t34 = -19935179070LL;

    t34 = ((x137|x138)^(x139|x140));

    if (t34 != -4294967292LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x142 = INT32_MAX;
	int32_t x143 = 114799;
	int16_t x144 = -226;
	volatile int32_t t35 = 4458;

    t35 = ((x141|x142)^(x143|x144));

    if (t35 != 128) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x145 = -1;
	volatile uint32_t x146 = 4416337U;
	static uint8_t x148 = 0U;
	uint64_t t36 = 2664182500916LLU;

    t36 = ((x145|x146)^(x147|x148));

    if (t36 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x150 = INT32_MIN;
	int32_t x151 = INT32_MAX;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t37 = 0;

    t37 = ((x149|x150)^(x151|x152));

    if (t37 != -4) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -1;
	uint16_t x154 = UINT16_MAX;
	int16_t x155 = INT16_MAX;
	uint64_t x156 = 7170535LLU;

    t38 = ((x153|x154)^(x155|x156));

    if (t38 != 18446744073702375424LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 7U;
	static volatile int8_t x158 = INT8_MIN;
	uint16_t x159 = 0U;
	int32_t t39 = 10;

    t39 = ((x157|x158)^(x159|x160));

    if (t39 != -123) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x162 = INT64_MAX;
	static uint64_t x163 = 3797LLU;
	int16_t x164 = -1;
	uint64_t t40 = 25033LLU;

    t40 = ((x161|x162)^(x163|x164));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 67U;
	int16_t x166 = INT16_MAX;
	int16_t x167 = INT16_MIN;
	uint32_t x168 = 435U;
	volatile uint32_t t41 = 2U;

    t41 = ((x165|x166)^(x167|x168));

    if (t41 != 4294966860U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -1470;
	int16_t x170 = INT16_MIN;
	static int32_t x171 = INT32_MAX;
	uint16_t x172 = UINT16_MAX;

    t42 = ((x169|x170)^(x171|x172));

    if (t42 != -2147482179) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MIN;
	uint64_t x174 = UINT64_MAX;
	int32_t x176 = -4304913;
	static uint64_t t43 = 27291620LLU;

    t43 = ((x173|x174)^(x175|x176));

    if (t43 != 4259840LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 24U;
	static int64_t x178 = 16555LL;
	int16_t x179 = INT16_MIN;
	uint64_t x180 = 448941LLU;

    t44 = ((x177|x178)^(x179|x180));

    if (t44 != 18446744073709525270LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	int16_t x182 = -1;
	uint32_t x183 = 4002U;
	int32_t x184 = 191706;
	volatile uint32_t t45 = 258785U;

    t45 = ((x181|x182)^(x183|x184));

    if (t45 != 4294774789U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x185 = -683LL;
	int64_t x186 = -66217404798690728LL;
	static int32_t x188 = INT32_MAX;
	static volatile int64_t t46 = -2137645942900LL;

    t46 = ((x185|x186)^(x187|x188));

    if (t46 != 162LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x189 = 6639U;
	int32_t x190 = 1828;
	volatile uint32_t x192 = UINT32_MAX;
	int64_t t47 = 95937586094288LL;

    t47 = ((x189|x190)^(x191|x192));

    if (t47 != -9223372032559816688LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 36LLU;
	volatile uint8_t x194 = 11U;
	volatile uint64_t t48 = 8259507503111793LLU;

    t48 = ((x193|x194)^(x195|x196));

    if (t48 != 9223372036854776016LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	int16_t x198 = -1;
	volatile int64_t x199 = -1LL;
	int64_t t49 = 248839112LL;

    t49 = ((x197|x198)^(x199|x200));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	static int8_t x202 = INT8_MIN;
	int8_t x203 = -1;
	uint32_t x204 = 2311U;
	volatile uint32_t t50 = 608882U;

    t50 = ((x201|x202)^(x203|x204));

    if (t50 != 127U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x205 = INT64_MAX;
	int16_t x206 = INT16_MIN;
	int16_t x207 = INT16_MIN;
	int64_t t51 = 11872635486848898LL;

    t51 = ((x205|x206)^(x207|x208));

    if (t51 != 31100LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = 15LLU;
	uint8_t x210 = 0U;
	uint32_t x211 = 562301U;
	volatile uint64_t t52 = 34457971668432543LLU;

    t52 = ((x209|x210)^(x211|x212));

    if (t52 != 4294939762LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x213 = UINT64_MAX;
	int8_t x214 = INT8_MAX;
	static int64_t x216 = -1LL;
	volatile uint64_t t53 = 30LLU;

    t53 = ((x213|x214)^(x215|x216));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x217 = 219U;
	int16_t x218 = 3;
	int8_t x219 = -1;
	volatile uint32_t x220 = UINT32_MAX;
	volatile uint32_t t54 = 2U;

    t54 = ((x217|x218)^(x219|x220));

    if (t54 != 4294967076U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x221 = 8;
	volatile int32_t x222 = -2639;
	uint16_t x223 = UINT16_MAX;
	int32_t x224 = INT32_MAX;
	int32_t t55 = 6975;

    t55 = ((x221|x222)^(x223|x224));

    if (t55 != -2147481018) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 2LLU;
	static int32_t x228 = -1;
	volatile uint64_t t56 = 0LLU;

    t56 = ((x225|x226)^(x227|x228));

    if (t56 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x229 = INT8_MAX;
	int64_t x230 = INT64_MIN;
	int64_t x231 = -1417171352072005161LL;

    t57 = ((x229|x230)^(x231|x232));

    if (t57 != 7806200684782770600LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x236 = 676;
	volatile int32_t t58 = -155;

    t58 = ((x233|x234)^(x235|x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x237 = 449LLU;
	int16_t x238 = INT16_MIN;
	int64_t x240 = -9LL;
	volatile uint64_t t59 = 0LLU;

    t59 = ((x237|x238)^(x239|x240));

    if (t59 != 32318LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x242 = INT64_MIN;
	uint8_t x244 = 3U;
	volatile int64_t t60 = 233LL;

    t60 = ((x241|x242)^(x243|x244));

    if (t60 != 2147483634LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MIN;
	int32_t x246 = INT32_MIN;
	int16_t x247 = INT16_MIN;
	uint8_t x248 = 16U;
	int32_t t61 = -406046336;

    t61 = ((x245|x246)^(x247|x248));

    if (t61 != 32656) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = 6LL;
	static int8_t x250 = INT8_MIN;
	int64_t x252 = 7155854043728359LL;
	uint64_t t62 = 990407080024828LLU;

    t62 = ((x249|x250)^(x251|x252));

    if (t62 != 121LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = -238597LL;
	static uint8_t x254 = 74U;
	static volatile int16_t x255 = -1;
	static volatile uint64_t x256 = 3205907981LLU;
	static uint64_t t63 = 629755246030404975LLU;

    t63 = ((x253|x254)^(x255|x256));

    if (t63 != 238596LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int32_t x257 = 1689466;
	int16_t x258 = INT16_MIN;
	int32_t x259 = -1;
	static volatile uint32_t x260 = 15U;
	volatile uint32_t t64 = 3731U;

    t64 = ((x257|x258)^(x259|x260));

    if (t64 != 14469U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = 0U;
	int64_t x262 = -1LL;
	static int16_t x263 = -1;
	int32_t x264 = -697223;
	volatile int64_t t65 = 12970LL;

    t65 = ((x261|x262)^(x263|x264));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x265 = 2625;
	uint32_t x267 = 84702216U;
	uint16_t x268 = 71U;
	volatile int64_t t66 = -821796084LL;

    t66 = ((x265|x266)^(x267|x268));

    if (t66 != -84702288LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 7U;
	int32_t x270 = 701;
	volatile int8_t x271 = 1;
	uint32_t t67 = 5134U;

    t67 = ((x269|x270)^(x271|x272));

    if (t67 != 4294966614U) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	uint8_t x274 = 13U;
	int64_t x275 = INT64_MAX;
	static int32_t x276 = INT32_MAX;
	int64_t t68 = -1032LL;

    t68 = ((x273|x274)^(x275|x276));

    if (t68 != -9223372034707292174LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x277 = INT64_MAX;
	uint8_t x278 = 6U;
	int8_t x279 = INT8_MAX;
	static volatile int64_t t69 = 56651287562532LL;

    t69 = ((x277|x278)^(x279|x280));

    if (t69 != -9223372036854462720LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = 8977U;
	volatile int8_t x283 = INT8_MIN;
	volatile int8_t x284 = -1;
	static int32_t t70 = -520;

    t70 = ((x281|x282)^(x283|x284));

    if (t70 != -9216) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = 55;
	int64_t x286 = -618821140LL;
	int64_t x287 = INT64_MIN;
	int64_t t71 = 7964266032LL;

    t71 = ((x285|x286)^(x287|x288));

    if (t71 != 618821120LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x289 = UINT64_MAX;
	volatile int8_t x290 = 26;
	int32_t x291 = 2577;
	int64_t x292 = INT64_MIN;
	uint64_t t72 = 878433177349LLU;

    t72 = ((x289|x290)^(x291|x292));

    if (t72 != 9223372036854773230LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = 973U;
	uint64_t x294 = 25633LLU;
	int16_t x295 = 304;
	static volatile int64_t x296 = -1LL;
	uint64_t t73 = 27045696625293887LLU;

    t73 = ((x293|x294)^(x295|x296));

    if (t73 != 18446744073709525010LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x297 = 203414050U;
	int32_t x299 = -1;
	int64_t t74 = 2793600678956LL;

    t74 = ((x297|x298)^(x299|x300));

    if (t74 != 9223372036651361757LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -14;
	static int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MAX;
	int64_t x304 = 59LL;
	volatile int64_t t75 = 24629893942LL;

    t75 = ((x301|x302)^(x303|x304));

    if (t75 != -32755LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x305 = INT32_MAX;
	volatile uint64_t x306 = 206LLU;
	static int16_t x307 = INT16_MIN;
	int8_t x308 = -1;
	static volatile uint64_t t76 = 1178LLU;

    t76 = ((x305|x306)^(x307|x308));

    if (t76 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x311 = INT64_MIN;
	uint32_t x312 = 252U;
	volatile int64_t t77 = -13875LL;

    t77 = ((x309|x310)^(x311|x312));

    if (t77 != -9223372036854710525LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = -1;
	int64_t x314 = -1LL;
	static uint8_t x315 = 6U;
	int64_t x316 = INT64_MIN;
	static int64_t t78 = 1197847LL;

    t78 = ((x313|x314)^(x315|x316));

    if (t78 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 9832008LLU;
	volatile int64_t x318 = INT64_MIN;
	uint32_t x319 = 910U;
	int64_t x320 = INT64_MIN;
	static uint64_t t79 = 2104004775LLU;

    t79 = ((x317|x318)^(x319|x320));

    if (t79 != 9831878LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MIN;
	static int16_t x322 = INT16_MIN;
	uint16_t x323 = 63U;
	int32_t x324 = -352;

    t80 = ((x321|x322)^(x323|x324));

    if (t80 != 319) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 4U;
	static uint8_t x327 = 26U;
	volatile uint8_t x328 = 0U;
	volatile int32_t t81 = -322535337;

    t81 = ((x325|x326)^(x327|x328));

    if (t81 != 32741) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = -178532771838LL;
	volatile uint8_t x330 = UINT8_MAX;
	int16_t x331 = -1536;
	static int64_t t82 = -71LL;

    t82 = ((x329|x330)^(x331|x332));

    if (t82 != 178532770304LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MIN;
	uint8_t x334 = UINT8_MAX;
	volatile uint64_t t83 = 8967LLU;

    t83 = ((x333|x334)^(x335|x336));

    if (t83 != 18446744071562718395LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x337 = -1;
	uint16_t x340 = 793U;

    t84 = ((x337|x338)^(x339|x340));

    if (t84 != -794LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x341 = UINT8_MAX;
	static uint16_t x342 = 100U;
	uint32_t x344 = 427066936U;
	volatile uint32_t t85 = 16204653U;

    t85 = ((x341|x342)^(x343|x344));

    if (t85 != 427097856U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MIN;
	uint8_t x346 = UINT8_MAX;
	uint64_t x347 = UINT64_MAX;
	uint8_t x348 = 57U;

    t86 = ((x345|x346)^(x347|x348));

    if (t86 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MIN;
	int16_t x350 = INT16_MAX;
	int8_t x351 = -1;
	int8_t x352 = -1;

    t87 = ((x349|x350)^(x351|x352));

    if (t87 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x353 = UINT8_MAX;
	static int8_t x354 = INT8_MAX;
	int16_t x355 = INT16_MIN;
	static uint16_t x356 = UINT16_MAX;

    t88 = ((x353|x354)^(x355|x356));

    if (t88 != -256) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x357 = -14214;
	static int32_t x358 = -27624887;
	static int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MIN;

    t89 = ((x357|x358)^(x359|x360));

    if (t89 != 1531) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MIN;
	static int8_t x362 = INT8_MIN;
	volatile int16_t x363 = INT16_MIN;
	volatile int64_t x364 = -71LL;
	volatile int64_t t90 = 390952865997LL;

    t90 = ((x361|x362)^(x363|x364));

    if (t90 != 57LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = -61;
	int8_t x366 = INT8_MIN;
	volatile int8_t x367 = INT8_MAX;
	volatile int32_t t91 = -3;

    t91 = ((x365|x366)^(x367|x368));

    if (t91 != -65476) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MIN;
	uint8_t x371 = 58U;
	int16_t x372 = 7011;
	static uint32_t t92 = 427U;

    t92 = ((x369|x370)^(x371|x372));

    if (t92 != 4294941553U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x374 = INT32_MIN;
	int32_t x375 = INT32_MIN;
	static uint8_t x376 = 57U;
	volatile int32_t t93 = -110762877;

    t93 = ((x373|x374)^(x375|x376));

    if (t93 != 59) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x378 = UINT16_MAX;
	int16_t x380 = INT16_MIN;
	uint64_t t94 = 2923584229LLU;

    t94 = ((x377|x378)^(x379|x380));

    if (t94 != 18446744073709505992LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x381 = 1033959LL;
	uint8_t x382 = 26U;
	static int64_t x383 = -1677465025763516LL;
	int64_t x384 = 3163104461LL;
	volatile int64_t t95 = 1596728238LL;

    t95 = ((x381|x382)^(x383|x384));

    if (t95 != -1677465017458382LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x386 = -172;
	int8_t x387 = -21;
	static int64_t x388 = 383337981LL;

    t96 = ((x385|x386)^(x387|x388));

    if (t96 != 42LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 116672LLU;
	static uint16_t x390 = UINT16_MAX;
	int32_t x392 = -1;
	static uint64_t t97 = 397920596213141673LLU;

    t97 = ((x389|x390)^(x391|x392));

    if (t97 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint16_t x393 = 13707U;
	int32_t x394 = INT32_MAX;
	uint16_t x395 = UINT16_MAX;
	int32_t x396 = INT32_MIN;

    t98 = ((x393|x394)^(x395|x396));

    if (t98 != -65536) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -1;
	static int16_t x398 = -1;
	static int8_t x399 = -1;
	int32_t x400 = 991574;
	volatile int32_t t99 = -858;

    t99 = ((x397|x398)^(x399|x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	int8_t x402 = 13;
	int8_t x403 = -1;
	static int64_t t100 = -1LL;

    t100 = ((x401|x402)^(x403|x404));

    if (t100 != -9223372032559808526LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x405 = UINT16_MAX;
	int8_t x406 = -2;
	int16_t x408 = 0;
	static int32_t t101 = 1082;

    t101 = ((x405|x406)^(x407|x408));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = -1;
	uint32_t x410 = 4470742U;
	volatile int16_t x411 = INT16_MIN;
	int16_t x412 = INT16_MIN;
	uint32_t t102 = 223212095U;

    t102 = ((x409|x410)^(x411|x412));

    if (t102 != 32767U) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MIN;
	int8_t x416 = INT8_MAX;
	int64_t t103 = INT64_MIN;

    t103 = ((x413|x414)^(x415|x416));

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	int8_t x418 = INT8_MIN;
	int32_t x419 = INT32_MAX;
	volatile int8_t x420 = INT8_MAX;
	int32_t t104 = 6;

    t104 = ((x417|x418)^(x419|x420));

    if (t104 != -2147483521) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x421 = 10U;
	static int8_t x422 = 6;
	int8_t x423 = INT8_MIN;
	int32_t t105 = 159;

    t105 = ((x421|x422)^(x423|x424));

    if (t105 != -15) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = -4;
	int16_t x426 = -27;
	int8_t x427 = INT8_MAX;
	volatile uint8_t x428 = UINT8_MAX;
	volatile int32_t t106 = -124420;

    t106 = ((x425|x426)^(x427|x428));

    if (t106 != -254) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = 3698506789LLU;
	int64_t x431 = INT64_MIN;
	volatile int64_t x432 = INT64_MIN;
	volatile uint64_t t107 = 580209464LLU;

    t107 = ((x429|x430)^(x431|x432));

    if (t107 != 9223372040553282623LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = 5;
	int16_t x434 = 0;
	static int16_t x435 = INT16_MAX;
	uint16_t x436 = 441U;
	int32_t t108 = -42;

    t108 = ((x433|x434)^(x435|x436));

    if (t108 != 32762) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int32_t x437 = INT32_MIN;
	uint32_t x438 = UINT32_MAX;
	uint32_t x439 = UINT32_MAX;
	static int8_t x440 = -1;
	uint32_t t109 = 30846742U;

    t109 = ((x437|x438)^(x439|x440));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MIN;
	uint16_t x442 = 10355U;
	int32_t x443 = INT32_MIN;
	int64_t t110 = -230250786142LL;

    t110 = ((x441|x442)^(x443|x444));

    if (t110 != 2147483635LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = 1;
	uint16_t x446 = 13726U;
	uint16_t x448 = 583U;
	volatile uint32_t t111 = 111988926U;

    t111 = ((x445|x446)^(x447|x448));

    if (t111 != 4294953568U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = 26U;
	volatile uint64_t x450 = UINT64_MAX;
	static volatile int16_t x451 = INT16_MAX;
	int32_t x452 = INT32_MAX;
	static volatile uint64_t t112 = 14LLU;

    t112 = ((x449|x450)^(x451|x452));

    if (t112 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int64_t x453 = INT64_MIN;
	volatile int64_t x455 = 1LL;
	volatile uint8_t x456 = 1U;

    t113 = ((x453|x454)^(x455|x456));

    if (t113 != -2LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x458 = INT16_MAX;
	static int64_t x459 = INT64_MAX;
	int16_t x460 = -514;
	volatile int64_t t114 = 94005288012LL;

    t114 = ((x457|x458)^(x459|x460));

    if (t114 != -32768LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x461 = INT32_MIN;
	volatile int16_t x462 = 52;
	int64_t x463 = INT64_MIN;
	static int64_t t115 = 62051640497640689LL;

    t115 = ((x461|x462)^(x463|x464));

    if (t115 != 2147482689LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x465 = UINT16_MAX;
	static int32_t x466 = 6863505;
	static uint64_t x468 = UINT64_MAX;
	static uint64_t t116 = 4017LLU;

    t116 = ((x465|x466)^(x467|x468));

    if (t116 != 18446744073702670336LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int64_t x469 = -1LL;
	int8_t x470 = INT8_MIN;
	uint64_t x471 = 1673603163LLU;
	static uint64_t t117 = 678754515224823212LLU;

    t117 = ((x469|x470)^(x471|x472));

    if (t117 != 22436LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x474 = 8095829089739635LLU;
	volatile uint8_t x476 = 5U;
	volatile uint64_t t118 = 5953918042LLU;

    t118 = ((x473|x474)^(x475|x476));

    if (t118 != 18438648244619811968LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = UINT16_MAX;
	int8_t x478 = 1;
	int8_t x479 = 1;
	int64_t x480 = -22820677316848LL;
	static int64_t t119 = 32338831562275LL;

    t119 = ((x477|x478)^(x479|x480));

    if (t119 != -22820677324562LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 385151LLU;
	static uint32_t x483 = UINT32_MAX;
	int8_t x484 = -1;
	volatile uint64_t t120 = 134LLU;

    t120 = ((x481|x482)^(x483|x484));

    if (t120 != 9223372041149357952LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = UINT32_MAX;
	uint32_t x486 = 778U;
	int16_t x487 = -1;
	int64_t t121 = -2LL;

    t121 = ((x485|x486)^(x487|x488));

    if (t121 != -4294967296LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x491 = INT8_MIN;
	uint32_t x492 = 11U;

    t122 = ((x489|x490)^(x491|x492));

    if (t122 != 4294965013U) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x493 = INT32_MIN;
	int8_t x494 = 5;
	int64_t x495 = INT64_MIN;
	int8_t x496 = 5;
	int64_t t123 = -442185251840068LL;

    t123 = ((x493|x494)^(x495|x496));

    if (t123 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x497 = 58;
	int16_t x498 = INT16_MIN;
	int16_t x499 = -1;
	int64_t x500 = -1LL;
	volatile int64_t t124 = 2126132LL;

    t124 = ((x497|x498)^(x499|x500));

    if (t124 != 32709LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = 862U;
	int8_t x502 = -1;
	int64_t x503 = -1LL;
	int8_t x504 = -27;
	int64_t t125 = 586592615677044829LL;

    t125 = ((x501|x502)^(x503|x504));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = 3U;
	volatile int32_t x506 = 435764235;
	static uint16_t x507 = 1222U;
	uint64_t x508 = UINT64_MAX;
	static uint64_t t126 = 44222988787699LLU;

    t126 = ((x505|x506)^(x507|x508));

    if (t126 != 18446744073273787380LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -1;
	int16_t x510 = INT16_MIN;
	volatile int32_t x511 = 180;
	int64_t x512 = INT64_MAX;
	int64_t t127 = INT64_MIN;

    t127 = ((x509|x510)^(x511|x512));

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x514 = INT8_MIN;
	int32_t x515 = INT32_MIN;
	static int32_t x516 = 426556;
	static volatile int64_t t128 = -175876902LL;

    t128 = ((x513|x514)^(x515|x516));

    if (t128 != 2147057145LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MIN;
	int8_t x518 = -15;
	int32_t x519 = INT32_MIN;
	int32_t x520 = INT32_MIN;
	int32_t t129 = 3;

    t129 = ((x517|x518)^(x519|x520));

    if (t129 != 2147483633) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int16_t x521 = 12598;
	static int16_t x522 = 1;
	uint16_t x523 = UINT16_MAX;
	volatile uint32_t x524 = UINT32_MAX;
	uint32_t t130 = 1052596U;

    t130 = ((x521|x522)^(x523|x524));

    if (t130 != 4294954696U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x525 = -1;
	volatile uint16_t x526 = 0U;
	int64_t x527 = 282693390106634177LL;
	uint32_t x528 = 350U;
	volatile int64_t t131 = 161253854LL;

    t131 = ((x525|x526)^(x527|x528));

    if (t131 != -282693390106634208LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x531 = UINT32_MAX;
	static int8_t x532 = INT8_MIN;
	uint32_t t132 = 1931280U;

    t132 = ((x529|x530)^(x531|x532));

    if (t132 != 127U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x533 = INT8_MIN;
	uint32_t x534 = UINT32_MAX;
	static int64_t x535 = INT64_MIN;
	int16_t x536 = INT16_MIN;

    t133 = ((x533|x534)^(x535|x536));

    if (t133 != -4294934529LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x537 = -1;
	static uint8_t x539 = 126U;
	uint64_t x540 = 570068897503242LLU;
	uint64_t t134 = 476499308290693LLU;

    t134 = ((x537|x538)^(x539|x540));

    if (t134 != 18446174004812048257LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x542 = 1;
	volatile int8_t x543 = -1;
	int64_t x544 = INT64_MIN;
	int64_t t135 = -177LL;

    t135 = ((x541|x542)^(x543|x544));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	int8_t x547 = INT8_MAX;
	int8_t x548 = 2;
	volatile int64_t t136 = 1353809298LL;

    t136 = ((x545|x546)^(x547|x548));

    if (t136 != -128LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = UINT8_MAX;
	int64_t x550 = INT64_MIN;
	int8_t x552 = -1;

    t137 = ((x549|x550)^(x551|x552));

    if (t137 != -9223372032559808768LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x554 = -15LL;
	uint8_t x555 = UINT8_MAX;
	int64_t x556 = INT64_MIN;
	static volatile int64_t t138 = -80618150414079LL;

    t138 = ((x553|x554)^(x555|x556));

    if (t138 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x558 = INT8_MAX;
	uint32_t x560 = 4577743U;
	uint32_t t139 = 1300U;

    t139 = ((x557|x558)^(x559|x560));

    if (t139 != 4290411392U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = 28217U;
	int16_t x562 = -1;
	uint32_t x563 = 228U;
	uint32_t t140 = 1658889U;

    t140 = ((x561|x562)^(x563|x564));

    if (t140 != 32539U) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = -1LL;
	uint16_t x566 = 386U;
	uint32_t x567 = UINT32_MAX;
	int64_t x568 = -3563277LL;
	volatile int64_t t141 = 7263054239349LL;

    t141 = ((x565|x566)^(x567|x568));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = INT16_MAX;
	int32_t x570 = INT32_MIN;
	uint8_t x571 = 101U;
	int16_t x572 = -1007;
	int32_t t142 = -1;

    t142 = ((x569|x570)^(x571|x572));

    if (t142 != 2147451786) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MAX;
	uint32_t x574 = 40787390U;
	static int16_t x576 = INT16_MIN;
	int64_t t143 = -558243560170168LL;

    t143 = ((x573|x574)^(x575|x576));

    if (t143 != -9223372036854743079LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -1;
	static volatile uint16_t x578 = 2U;
	uint8_t x579 = 70U;
	static uint64_t x580 = 399139906779282182LLU;
	uint64_t t144 = 2076386071203LLU;

    t144 = ((x577|x578)^(x579|x580));

    if (t144 != 18047604166930269369LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = 14;
	uint16_t x582 = UINT16_MAX;
	int64_t x583 = -24271073LL;
	int8_t x584 = 2;
	int64_t t145 = -68572584883LL;

    t145 = ((x581|x582)^(x583|x584));

    if (t145 != -24291104LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t t146 = 126LLU;

    t146 = ((x585|x586)^(x587|x588));

    if (t146 != 144426891221080LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = 57000525U;
	int32_t x590 = INT32_MAX;
	volatile int64_t t147 = 1407475243523260050LL;

    t147 = ((x589|x590)^(x591|x592));

    if (t147 != -2147471488LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = 1940;
	uint32_t x594 = 107610221U;
	int16_t x596 = INT16_MIN;
	int64_t t148 = 24300755LL;

    t148 = ((x593|x594)^(x595|x596));

    if (t148 != -107612158LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x597 = 618;
	int16_t x598 = INT16_MAX;
	uint32_t x600 = 219250573U;

    t149 = ((x597|x598)^(x599|x600));

    if (t149 != 219250688U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MIN;
	int64_t x602 = -1LL;
	uint64_t x603 = 8516283563507464783LLU;

    t150 = ((x601|x602)^(x603|x604));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x605 = 0;
	int32_t t151 = -688331;

    t151 = ((x605|x606)^(x607|x608));

    if (t151 != 76) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MAX;
	int64_t x610 = INT64_MAX;
	int16_t x611 = -1;
	int32_t x612 = 7433288;
	int64_t t152 = INT64_MIN;

    t152 = ((x609|x610)^(x611|x612));

    if (t152 != INT64_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x613 = INT16_MIN;
	uint64_t x615 = 60223438LLU;
	int64_t x616 = 11LL;

    t153 = ((x613|x614)^(x615|x616));

    if (t153 != 18446744073649352624LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x617 = -1LL;
	int64_t x618 = INT64_MIN;
	int64_t x619 = INT64_MAX;
	uint32_t x620 = 686U;

    t154 = ((x617|x618)^(x619|x620));

    if (t154 != INT64_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = 7;
	uint32_t x622 = 29U;
	volatile uint64_t t155 = 166LLU;

    t155 = ((x621|x622)^(x623|x624));

    if (t155 != 224LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MIN;
	int64_t x626 = -1LL;
	static int16_t x627 = INT16_MIN;
	volatile int64_t x628 = -1LL;
	int64_t t156 = 7LL;

    t156 = ((x625|x626)^(x627|x628));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MAX;
	static int32_t x631 = INT32_MIN;

    t157 = ((x629|x630)^(x631|x632));

    if (t157 != 4294967168U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = UINT16_MAX;
	int8_t x635 = INT8_MIN;
	int64_t t158 = -3695727236583571LL;

    t158 = ((x633|x634)^(x635|x636));

    if (t158 != -65409LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = 0;
	static volatile int16_t x638 = 48;
	volatile int64_t x639 = -265LL;
	uint64_t x640 = 622222948472661206LLU;
	uint64_t t159 = 8178583LLU;

    t159 = ((x637|x638)^(x639|x640));

    if (t159 != 18446744073709551303LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x643 = 16191091U;
	static uint8_t x644 = UINT8_MAX;
	volatile uint64_t t160 = 1675690LLU;

    t160 = ((x641|x642)^(x643|x644));

    if (t160 != 18446744071578320673LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int64_t x645 = -1LL;
	int32_t x646 = -1;
	int8_t x647 = -1;
	volatile int8_t x648 = INT8_MAX;
	int64_t t161 = -1092610203785339LL;

    t161 = ((x645|x646)^(x647|x648));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MAX;
	volatile uint8_t x650 = 22U;
	int16_t x651 = INT16_MAX;
	uint64_t x652 = 19LLU;
	uint64_t t162 = 36757681LLU;

    t162 = ((x649|x650)^(x651|x652));

    if (t162 != 32640LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = 960481U;
	uint16_t x654 = UINT16_MAX;
	int16_t x655 = -26;
	volatile int64_t x656 = INT64_MIN;
	int64_t t163 = 155925879801580799LL;

    t163 = ((x653|x654)^(x655|x656));

    if (t163 != -983015LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -1;
	static uint16_t x658 = UINT16_MAX;
	int64_t x660 = INT64_MIN;
	static volatile int64_t t164 = -310953808LL;

    t164 = ((x657|x658)^(x659|x660));

    if (t164 != 6498019405864152052LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x662 = 86581U;
	uint8_t x663 = 61U;
	volatile int16_t x664 = INT16_MAX;
	static volatile uint64_t t165 = 268401199LLU;

    t165 = ((x661|x662)^(x663|x664));

    if (t165 != 3834286375176LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x665 = INT64_MIN;
	uint16_t x666 = UINT16_MAX;
	uint64_t x667 = 1872354731LLU;
	int8_t x668 = INT8_MIN;

    t166 = ((x665|x666)^(x667|x668));

    if (t166 != 9223372036854710356LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -1;
	int8_t x670 = INT8_MAX;
	int8_t x672 = INT8_MIN;
	int64_t t167 = -24932057247970LL;

    t167 = ((x669|x670)^(x671|x672));

    if (t167 != 127LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MIN;
	uint8_t x674 = 42U;
	uint64_t x676 = 8159417757LLU;
	uint64_t t168 = 14519528LLU;

    t168 = ((x673|x674)^(x675|x676));

    if (t168 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x678 = UINT64_MAX;
	uint16_t x680 = UINT16_MAX;

    t169 = ((x677|x678)^(x679|x680));

    if (t169 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = -1;
	volatile int32_t x682 = INT32_MIN;
	volatile int64_t x683 = INT64_MIN;
	static uint32_t x684 = UINT32_MAX;
	volatile int64_t t170 = -23486982104216340LL;

    t170 = ((x681|x682)^(x683|x684));

    if (t170 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 43U;
	int8_t x686 = -11;
	int8_t x688 = INT8_MAX;
	int32_t t171 = -34877;

    t171 = ((x685|x686)^(x687|x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MIN;
	uint8_t x690 = 15U;
	int32_t x691 = INT32_MIN;
	int16_t x692 = INT16_MIN;

    t172 = ((x689|x690)^(x691|x692));

    if (t172 != 15) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = -33732;
	int32_t x694 = INT32_MAX;
	volatile uint8_t x695 = UINT8_MAX;
	int32_t x696 = -1;

    t173 = ((x693|x694)^(x695|x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = UINT32_MAX;
	int32_t x699 = INT32_MAX;
	static volatile uint32_t t174 = 24750U;

    t174 = ((x697|x698)^(x699|x700));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x703 = -1;
	int8_t x704 = -1;
	volatile int32_t t175 = -482;

    t175 = ((x701|x702)^(x703|x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x706 = 1;
	int16_t x707 = INT16_MAX;
	int32_t x708 = INT32_MAX;
	int32_t t176 = -658;

    t176 = ((x705|x706)^(x707|x708));

    if (t176 != 2147483646) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x710 = INT64_MIN;
	static int32_t x711 = -957229;
	volatile uint16_t x712 = UINT16_MAX;
	volatile int64_t t177 = 1794250833783971LL;

    t177 = ((x709|x710)^(x711|x712));

    if (t177 != 921413LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MAX;
	uint64_t x714 = 271424431174LLU;
	uint16_t x715 = UINT16_MAX;
	volatile uint64_t x716 = UINT64_MAX;
	volatile uint64_t t178 = 45LLU;

    t178 = ((x713|x714)^(x715|x716));

    if (t178 != 18446743800979128320LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 14705770U;
	int64_t x718 = -9616208LL;
	int64_t x719 = INT64_MAX;
	int64_t t179 = -407318222694023735LL;

    t179 = ((x717|x718)^(x719|x720));

    if (t179 != -9223372036853556475LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MIN;
	int32_t x722 = INT32_MIN;
	static uint32_t x724 = UINT32_MAX;
	volatile uint32_t t180 = 0U;

    t180 = ((x721|x722)^(x723|x724));

    if (t180 != 2147483647U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x725 = -1;
	int16_t x726 = INT16_MAX;
	int64_t x727 = -5763155LL;
	uint64_t t181 = 960260LLU;

    t181 = ((x725|x726)^(x727|x728));

    if (t181 != 4202576LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 3U;
	int16_t x730 = INT16_MAX;
	static uint32_t x731 = 1U;
	uint8_t x732 = 31U;

    t182 = ((x729|x730)^(x731|x732));

    if (t182 != 32736U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x734 = INT32_MIN;
	int16_t x735 = INT16_MIN;
	uint64_t t183 = 1823185LLU;

    t183 = ((x733|x734)^(x735|x736));

    if (t183 != 2147483499LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x737 = -1;
	int16_t x738 = -1;
	int32_t x739 = INT32_MIN;
	static volatile int16_t x740 = 7203;
	int32_t t184 = 68983;

    t184 = ((x737|x738)^(x739|x740));

    if (t184 != 2147476444) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MIN;
	uint64_t x743 = 1579LLU;
	uint64_t x744 = 2001870LLU;

    t185 = ((x741|x742)^(x743|x744));

    if (t185 != 9223372036856778734LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x746 = 80U;
	int16_t x747 = -893;
	uint16_t x748 = 4843U;
	uint32_t t186 = 10015U;

    t186 = ((x745|x746)^(x747|x748));

    if (t186 != 276U) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	int16_t x752 = 1516;
	int32_t t187 = -15747;

    t187 = ((x749|x750)^(x751|x752));

    if (t187 != -65409) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x753 = 1U;
	static int8_t x754 = 5;
	int32_t x755 = 608576;
	volatile int32_t t188 = -13;

    t188 = ((x753|x754)^(x755|x756));

    if (t188 != 608628) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 5U;
	static uint16_t x759 = 1392U;
	static volatile int64_t x760 = -1LL;
	static int64_t t189 = 15108923525135LL;

    t189 = ((x757|x758)^(x759|x760));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x761 = 57822LLU;
	static volatile uint64_t x762 = 3371773859LLU;
	uint8_t x763 = 6U;
	int32_t x764 = INT32_MIN;
	static volatile uint64_t t190 = 1510LLU;

    t190 = ((x761|x762)^(x763|x764));

    if (t190 != 18446744070638923769LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = -40;
	int64_t x766 = -1LL;
	int64_t x767 = INT64_MIN;
	uint64_t x768 = 58133486993977342LLU;
	volatile uint64_t t191 = 360179675528LLU;

    t191 = ((x765|x766)^(x767|x768));

    if (t191 != 9165238549860798465LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = 1;
	int32_t x770 = INT32_MIN;
	volatile uint8_t x771 = 40U;
	int32_t x772 = INT32_MAX;

    t192 = ((x769|x770)^(x771|x772));

    if (t192 != -2) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = -1095444;
	int64_t x774 = INT64_MIN;
	static int8_t x775 = -1;
	static uint64_t x776 = 1680122333LLU;
	static uint64_t t193 = 96LLU;

    t193 = ((x773|x774)^(x775|x776));

    if (t193 != 1095443LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 2U;
	int64_t x778 = -2030631734906LL;
	uint64_t x779 = 2712587410714LLU;
	int32_t x780 = INT32_MAX;
	uint64_t t194 = 8689124261350190114LLU;

    t194 = ((x777|x778)^(x779|x780));

    if (t194 != 18446740022667595385LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x781 = 5;
	static int32_t x783 = INT32_MAX;
	int64_t x784 = INT64_MAX;

    t195 = ((x781|x782)^(x783|x784));

    if (t195 != -6LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = -3793;
	int16_t x786 = 156;
	uint16_t x788 = 1300U;

    t196 = ((x785|x786)^(x787|x788));

    if (t196 != 11570085267041LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x789 = -1;
	volatile int64_t x790 = INT64_MIN;
	uint16_t x791 = 3036U;
	int64_t t197 = -7LL;

    t197 = ((x789|x790)^(x791|x792));

    if (t197 != -2147483648LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x793 = 73U;
	int64_t x795 = INT64_MIN;

    t198 = ((x793|x794)^(x795|x796));

    if (t198 != -9223372032559809525LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -1LL;
	int64_t x798 = INT64_MAX;
	uint16_t x799 = 27U;
	uint32_t x800 = UINT32_MAX;
	int64_t t199 = 36LL;

    t199 = ((x797|x798)^(x799|x800));

    if (t199 != -4294967296LL) { NG(); } else { ; }
	
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

