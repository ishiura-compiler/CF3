
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

static int16_t x5 = 96;
uint32_t x9 = 2096106702U;
int64_t x12 = 31LL;
int8_t x15 = -1;
volatile uint32_t t2 = 35U;
int64_t x23 = INT64_MAX;
volatile int64_t x24 = INT64_MAX;
static uint64_t x35 = UINT64_MAX;
static volatile int64_t x36 = INT64_MAX;
volatile int16_t x39 = INT16_MIN;
volatile uint64_t t9 = 24LLU;
static volatile int32_t x47 = 26;
int16_t x48 = INT16_MAX;
static uint64_t t10 = 2658252929LLU;
uint16_t x49 = 0U;
volatile uint8_t x63 = UINT8_MAX;
int32_t x73 = -756503998;
uint16_t x74 = 1U;
static int32_t x101 = INT32_MAX;
int64_t x110 = -1LL;
volatile uint16_t x115 = 21360U;
volatile uint64_t t25 = 6854405144LLU;
int8_t x123 = INT8_MAX;
volatile uint64_t t27 = 0LLU;
uint64_t t29 = 66156833362906LLU;
int64_t x139 = -1LL;
uint16_t x146 = 930U;
volatile uint32_t x154 = UINT32_MAX;
int64_t x158 = -1LL;
int64_t x160 = 2831883628LL;
static int8_t x165 = -3;
int32_t x169 = -1;
int32_t x177 = INT32_MIN;
int16_t x183 = 163;
int64_t x187 = INT64_MIN;
int16_t x190 = INT16_MIN;
int64_t x197 = -1LL;
int16_t x200 = INT16_MIN;
uint16_t x209 = UINT16_MAX;
int64_t x213 = -1LL;
uint64_t t44 = 211LLU;
int8_t x228 = -1;
static uint8_t x229 = UINT8_MAX;
int16_t x230 = -1;
uint8_t x232 = 3U;
int16_t x237 = 19;
uint8_t x238 = 17U;
volatile int64_t x239 = -753LL;
int16_t x265 = INT16_MIN;
int16_t x268 = 178;
uint8_t x280 = 12U;
static int16_t x282 = -1;
int64_t x287 = INT64_MAX;
uint32_t x288 = UINT32_MAX;
uint64_t x300 = UINT64_MAX;
static int8_t x308 = INT8_MAX;
volatile uint64_t t62 = 449751028LLU;
int16_t x334 = -1;
uint16_t x347 = UINT16_MAX;
static volatile uint32_t t69 = 1U;
int64_t x368 = -1LL;
int16_t x374 = INT16_MIN;
int32_t x384 = -302;
volatile int64_t t73 = 14LL;
uint64_t x393 = 432181043LLU;
uint64_t t76 = 333879427LLU;
uint8_t x397 = UINT8_MAX;
int64_t x401 = -2LL;
uint64_t x411 = UINT64_MAX;
uint64_t x426 = UINT64_MAX;
int8_t x429 = -14;
int32_t x437 = -1;
uint8_t x438 = UINT8_MAX;
int32_t x439 = -144;
volatile int64_t t85 = -262303734214093LL;
static uint32_t x453 = UINT32_MAX;
static volatile int64_t x455 = -48884074LL;
static volatile int32_t x460 = INT32_MAX;
static int32_t t87 = -6;
static int64_t t88 = -2LL;
uint8_t x468 = UINT8_MAX;
static uint64_t t90 = 1331616970294529LLU;
int16_t x481 = -1;
volatile uint64_t t92 = 5009181038801535LLU;
volatile int16_t x490 = INT16_MIN;
uint32_t x501 = 26814254U;
int32_t x507 = INT32_MIN;
uint32_t x522 = UINT32_MAX;
static volatile uint32_t t99 = 943113979U;
int8_t x532 = INT8_MIN;
int32_t x537 = -2764353;
uint16_t x539 = 174U;
volatile uint16_t x544 = 7154U;
int8_t x551 = INT8_MAX;
int16_t x563 = 81;
uint16_t x591 = 35U;
int64_t x598 = INT64_MIN;
uint32_t x600 = UINT32_MAX;
uint64_t t110 = 107196570233795794LLU;
static int16_t x616 = INT16_MIN;
static volatile uint32_t t113 = 7356127U;
int64_t x626 = INT64_MAX;
int16_t x627 = 9;
int64_t x628 = 881639827918850447LL;
static uint8_t x637 = 2U;
volatile int64_t x640 = -14LL;
uint32_t x643 = 909006U;
int16_t x650 = -1;
uint64_t t119 = 80925514369LLU;
volatile int32_t x654 = -3;
uint16_t x656 = UINT16_MAX;
int64_t t121 = 624194545211LL;
volatile int32_t x664 = -1;
int16_t x668 = INT16_MIN;
int16_t x677 = INT16_MIN;
uint32_t t126 = 28306721U;
static volatile uint64_t t129 = 94060794027LLU;
int32_t x706 = -1671;
int32_t x714 = INT32_MIN;
volatile uint32_t x716 = 99533U;
volatile uint64_t t133 = 1607700713114033LLU;
int32_t x751 = -24327619;
volatile uint8_t x752 = 3U;
volatile int16_t x756 = INT16_MIN;
static uint8_t x759 = 13U;
static int16_t x776 = 225;
int32_t x787 = -10659;
volatile uint64_t t144 = 496509746720648446LLU;
uint16_t x795 = 0U;
uint8_t x811 = 13U;
volatile uint16_t x812 = 1U;
volatile uint64_t t151 = 120065452LLU;
volatile int32_t t152 = -57;
volatile int64_t t153 = -43939793309279LL;
volatile uint16_t x829 = 1993U;
int32_t x845 = 2;
uint32_t x847 = 22U;
int32_t x848 = -1841;
uint32_t t157 = 3347U;
uint64_t t158 = 9LLU;
int64_t t160 = -3LL;
uint64_t t162 = 41433444051LLU;
int16_t x882 = INT16_MIN;
static int16_t x887 = -5911;
static int32_t x888 = INT32_MAX;
uint32_t x890 = 3722U;
uint8_t x891 = 1U;
static uint8_t x916 = 3U;
static uint16_t x917 = UINT16_MAX;
uint32_t x925 = 210U;
int16_t x927 = 19;
int64_t x928 = INT64_MIN;
uint64_t x934 = UINT64_MAX;
int8_t x954 = -16;
int64_t x965 = -1LL;
volatile int16_t x966 = INT16_MAX;
int32_t x967 = INT32_MIN;
volatile int64_t t180 = 19731822308LL;
volatile uint16_t x975 = UINT16_MAX;
volatile int32_t t181 = -1;
uint64_t x980 = 108569533LLU;
static uint64_t t182 = 51307771541825LLU;
volatile int32_t x981 = -1;
int32_t t183 = -233486;
int8_t x995 = 13;
uint32_t x996 = 74394U;
uint8_t x1001 = UINT8_MAX;
uint64_t x1011 = 4577342531209LLU;
static int64_t x1016 = INT64_MAX;
static volatile int8_t x1028 = 43;
uint32_t x1029 = 1814139602U;
int64_t x1032 = INT64_MAX;
uint16_t x1042 = 842U;
uint32_t t195 = 2440U;


void f0(void) {
    	int8_t x6 = 28;
	static int8_t x7 = INT8_MIN;
	uint32_t x8 = 2141U;
	uint32_t t0 = 52U;

    t0 = (x5*(x6-(x7/x8)));

    if (t0 != 4102388608U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x10 = INT16_MIN;
	int8_t x11 = 0;
	volatile int64_t t1 = -2001766686829557685LL;

    t1 = (x9*(x10-(x11/x12)));

    if (t1 != -68685224411136LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x13 = 748013U;
	int16_t x14 = 949;
	int32_t x16 = INT32_MIN;

    t2 = (x13*(x14-(x15/x16)));

    if (t2 != 709864337U) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int16_t x17 = -1;
	uint16_t x18 = 10U;
	uint32_t x19 = 118439U;
	volatile int8_t x20 = INT8_MIN;
	uint32_t t3 = 1U;

    t3 = (x17*(x18-(x19/x20)));

    if (t3 != 4294967286U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x21 = 6;
	static int16_t x22 = INT16_MAX;
	int64_t t4 = -21564LL;

    t4 = (x21*(x22-(x23/x24)));

    if (t4 != 196596LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x25 = 1232U;
	uint64_t x26 = 18051877LLU;
	volatile int32_t x27 = -3134;
	int64_t x28 = INT64_MIN;
	uint64_t t5 = 465632968LLU;

    t5 = (x25*(x26-(x27/x28)));

    if (t5 != 22239912464LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = -566;
	volatile int16_t x30 = -1;
	static volatile int16_t x31 = 0;
	static volatile int64_t x32 = 16781LL;
	volatile int64_t t6 = -646457605724LL;

    t6 = (x29*(x30-(x31/x32)));

    if (t6 != 566LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 11086LLU;
	static int32_t x34 = INT32_MIN;
	static volatile uint64_t t7 = 22374LLU;

    t7 = (x33*(x34-(x35/x36)));

    if (t7 != 18446720266705807716LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = -1;
	int16_t x38 = 1;
	volatile int32_t x40 = INT32_MIN;
	volatile int32_t t8 = 25685;

    t8 = (x37*(x38-(x39/x40)));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x41 = 77U;
	volatile uint64_t x42 = 17704970096144LLU;
	static volatile int64_t x43 = 12405LL;
	static int16_t x44 = -791;

    t9 = (x41*(x42-(x43/x44)));

    if (t9 != 1363282697404243LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x45 = UINT8_MAX;
	uint64_t x46 = 3005200LLU;

    t10 = (x45*(x46-(x47/x48)));

    if (t10 != 766326000LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x50 = -25;
	int16_t x51 = INT16_MIN;
	int8_t x52 = -57;
	volatile int32_t t11 = -112;

    t11 = (x49*(x50-(x51/x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x53 = UINT64_MAX;
	uint8_t x54 = 6U;
	volatile uint64_t x55 = 1LLU;
	uint16_t x56 = 3878U;
	volatile uint64_t t12 = 32582LLU;

    t12 = (x53*(x54-(x55/x56)));

    if (t12 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = -1;
	int8_t x62 = 1;
	static volatile int16_t x64 = INT16_MIN;
	static volatile int32_t t13 = 249999;

    t13 = (x61*(x62-(x63/x64)));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = INT16_MIN;
	static int32_t x66 = -1;
	int16_t x67 = INT16_MIN;
	static int32_t x68 = 2609332;
	int32_t t14 = 255797105;

    t14 = (x65*(x66-(x67/x68)));

    if (t14 != 32768) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x69 = UINT8_MAX;
	int32_t x70 = 49769278;
	uint32_t x71 = 423U;
	static uint16_t x72 = UINT16_MAX;
	uint32_t t15 = 215537U;

    t15 = (x69*(x70-(x71/x72)));

    if (t15 != 4101231298U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x75 = -47LL;
	uint16_t x76 = 3U;
	int64_t t16 = 27256LL;

    t16 = (x73*(x74-(x75/x76)));

    if (t16 != -12104063968LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x77 = UINT32_MAX;
	static uint64_t x78 = 56609829906LLU;
	volatile int16_t x79 = INT16_MIN;
	static uint64_t x80 = 3470901911553LLU;
	volatile uint64_t t17 = 223LLU;

    t17 = (x77*(x78-(x79/x80)));

    if (t17 != 3306868673890460777LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = -680191;
	int8_t x82 = 4;
	volatile int8_t x83 = -1;
	int64_t x84 = INT64_MIN;
	static volatile int64_t t18 = -75858902701LL;

    t18 = (x81*(x82-(x83/x84)));

    if (t18 != -2720764LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x85 = 30256U;
	volatile uint64_t x86 = 1405576727673LLU;
	uint16_t x87 = 34U;
	int8_t x88 = INT8_MAX;
	volatile uint64_t t19 = 1432412445627775LLU;

    t19 = (x85*(x86-(x87/x88)));

    if (t19 != 42527129472474288LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x93 = 95U;
	uint16_t x94 = UINT16_MAX;
	int8_t x95 = INT8_MAX;
	int32_t x96 = INT32_MAX;
	static int32_t t20 = -1;

    t20 = (x93*(x94-(x95/x96)));

    if (t20 != 6225825) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x102 = INT8_MAX;
	volatile uint8_t x103 = 100U;
	int64_t x104 = INT64_MIN;
	int64_t t21 = -67LL;

    t21 = (x101*(x102-(x103/x104)));

    if (t21 != 272730423169LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x105 = 1;
	uint8_t x106 = UINT8_MAX;
	static int64_t x107 = -206805LL;
	static int64_t x108 = -1LL;
	volatile int64_t t22 = 200823758379804246LL;

    t22 = (x105*(x106-(x107/x108)));

    if (t22 != -206550LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint8_t x109 = UINT8_MAX;
	int8_t x111 = 11;
	int64_t x112 = INT64_MIN;
	volatile int64_t t23 = -15127424782480514LL;

    t23 = (x109*(x110-(x111/x112)));

    if (t23 != -255LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x113 = 47U;
	volatile uint32_t x114 = 0U;
	static uint64_t x116 = 2194LLU;
	volatile uint64_t t24 = 490705590LLU;

    t24 = (x113*(x114-(x115/x116)));

    if (t24 != 18446744073709551193LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x117 = INT16_MIN;
	uint16_t x118 = UINT16_MAX;
	static uint64_t x119 = 89LLU;
	uint64_t x120 = 111LLU;

    t25 = (x117*(x118-(x119/x120)));

    if (t25 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x121 = 0U;
	volatile int16_t x122 = INT16_MAX;
	static int16_t x124 = 4673;
	int32_t t26 = -83545;

    t26 = (x121*(x122-(x123/x124)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x125 = 27U;
	int8_t x126 = INT8_MIN;
	volatile uint8_t x127 = 3U;
	uint64_t x128 = UINT64_MAX;

    t27 = (x125*(x126-(x127/x128)));

    if (t27 != 18446744073709548160LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x129 = 301U;
	volatile uint16_t x130 = 30U;
	uint64_t x131 = 9LLU;
	volatile uint16_t x132 = UINT16_MAX;
	static volatile uint64_t t28 = 431298019147LLU;

    t28 = (x129*(x130-(x131/x132)));

    if (t28 != 9030LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x133 = UINT32_MAX;
	uint64_t x134 = 1LLU;
	uint64_t x135 = UINT64_MAX;
	volatile int64_t x136 = -37893795361561324LL;

    t29 = (x133*(x134-(x135/x136)));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x137 = INT32_MAX;
	int8_t x138 = 12;
	static volatile int16_t x140 = -1;
	volatile int64_t t30 = -26483444933LL;

    t30 = (x137*(x138-(x139/x140)));

    if (t30 != 23622320117LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int64_t x145 = -1LL;
	int64_t x147 = INT64_MAX;
	volatile int64_t x148 = INT64_MAX;
	volatile int64_t t31 = 716927135022LL;

    t31 = (x145*(x146-(x147/x148)));

    if (t31 != -929LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x153 = 30;
	static int16_t x155 = -3611;
	volatile int8_t x156 = INT8_MIN;
	uint32_t t32 = 142U;

    t32 = (x153*(x154-(x155/x156)));

    if (t32 != 4294966426U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x157 = INT32_MIN;
	volatile int8_t x159 = -1;
	volatile int64_t t33 = -3168587237230LL;

    t33 = (x157*(x158-(x159/x160)));

    if (t33 != 2147483648LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x161 = -3;
	int16_t x162 = -387;
	uint32_t x163 = UINT32_MAX;
	volatile int32_t x164 = 1;
	uint32_t t34 = 4912U;

    t34 = (x161*(x162-(x163/x164)));

    if (t34 != 1158U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x166 = INT32_MIN;
	static uint8_t x167 = 10U;
	int64_t x168 = INT64_MIN;
	int64_t t35 = 3422644LL;

    t35 = (x165*(x166-(x167/x168)));

    if (t35 != 6442450944LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x170 = -184;
	int16_t x171 = INT16_MAX;
	volatile int64_t x172 = INT64_MIN;
	volatile int64_t t36 = 1LL;

    t36 = (x169*(x170-(x171/x172)));

    if (t36 != 184LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x178 = INT16_MIN;
	uint16_t x179 = UINT16_MAX;
	static int64_t x180 = INT64_MAX;
	int64_t t37 = 287298340215LL;

    t37 = (x177*(x178-(x179/x180)));

    if (t37 != 70368744177664LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x181 = 6720U;
	int8_t x182 = INT8_MIN;
	static int8_t x184 = -1;
	int32_t t38 = 0;

    t38 = (x181*(x182-(x183/x184)));

    if (t38 != 235200) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x185 = 100348324214LL;
	int64_t x186 = INT64_MIN;
	uint64_t x188 = 58353LLU;
	volatile uint64_t t39 = 7853152160682128159LLU;

    t39 = (x185*(x186-(x187/x188)));

    if (t39 != 7289803782852535144LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x189 = -28;
	static uint64_t x191 = UINT64_MAX;
	uint16_t x192 = 1U;
	volatile uint64_t t40 = 6477745877367835979LLU;

    t40 = (x189*(x190-(x191/x192)));

    if (t40 != 917476LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x193 = 235967919343866516LLU;
	int8_t x194 = INT8_MIN;
	static int64_t x195 = -1LL;
	volatile int32_t x196 = INT32_MIN;
	uint64_t t41 = 51002959LLU;

    t41 = (x193*(x194-(x195/x196)));

    if (t41 != 6689594471404189184LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x198 = -1LL;
	static volatile int64_t x199 = -1LL;
	static volatile int64_t t42 = 11366622LL;

    t42 = (x197*(x198-(x199/x200)));

    if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x210 = INT16_MAX;
	uint16_t x211 = 42U;
	volatile int32_t x212 = INT32_MAX;
	int32_t t43 = -8875;

    t43 = (x209*(x210-(x211/x212)));

    if (t43 != 2147385345) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x214 = 7U;
	static uint16_t x215 = 1U;
	uint64_t x216 = 234LLU;

    t44 = (x213*(x214-(x215/x216)));

    if (t44 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x221 = INT8_MAX;
	uint16_t x222 = 7933U;
	static uint16_t x223 = UINT16_MAX;
	int64_t x224 = -1LL;
	volatile int64_t t45 = -118LL;

    t45 = (x221*(x222-(x223/x224)));

    if (t45 != 9330436LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x225 = 47;
	volatile int64_t x226 = -1LL;
	static int64_t x227 = -143LL;
	volatile int64_t t46 = -1891990743764899LL;

    t46 = (x225*(x226-(x227/x228)));

    if (t46 != -6768LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x231 = -1LL;
	volatile int64_t t47 = 9LL;

    t47 = (x229*(x230-(x231/x232)));

    if (t47 != -255LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x233 = UINT16_MAX;
	uint16_t x234 = 3785U;
	int32_t x235 = INT32_MIN;
	int32_t x236 = INT32_MIN;
	int32_t t48 = -528470;

    t48 = (x233*(x234-(x235/x236)));

    if (t48 != 247984440) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x240 = 11U;
	volatile int64_t t49 = 528759LL;

    t49 = (x237*(x238-(x239/x240)));

    if (t49 != 1615LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x245 = INT16_MIN;
	static uint8_t x246 = UINT8_MAX;
	volatile uint16_t x247 = 3U;
	int16_t x248 = INT16_MIN;
	static volatile int32_t t50 = 1859;

    t50 = (x245*(x246-(x247/x248)));

    if (t50 != -8355840) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint64_t x266 = UINT64_MAX;
	static int32_t x267 = INT32_MAX;
	uint64_t t51 = 20067162883LLU;

    t51 = (x265*(x266-(x267/x268)));

    if (t51 != 395330027520LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x269 = 3;
	int8_t x270 = -1;
	int32_t x271 = -1;
	static int64_t x272 = INT64_MIN;
	int64_t t52 = -1LL;

    t52 = (x269*(x270-(x271/x272)));

    if (t52 != -3LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x273 = -1;
	static int16_t x274 = INT16_MAX;
	int32_t x275 = -7510;
	uint32_t x276 = 1469658U;
	static volatile uint32_t t53 = 4372401U;

    t53 = (x273*(x274-(x275/x276)));

    if (t53 != 4294937451U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x277 = INT8_MIN;
	int16_t x278 = INT16_MIN;
	volatile uint64_t x279 = 366LLU;
	uint64_t t54 = 426707880936021LLU;

    t54 = (x277*(x278-(x279/x280)));

    if (t54 != 4198144LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x281 = 11U;
	static int8_t x283 = 56;
	int64_t x284 = 5LL;
	static int64_t t55 = -1040441896LL;

    t55 = (x281*(x282-(x283/x284)));

    if (t55 != -132LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x285 = INT32_MAX;
	static int32_t x286 = 0;
	volatile int64_t t56 = -25298644LL;

    t56 = (x285*(x286-(x287/x288)));

    if (t56 != -4611686016279904256LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x289 = 74381006U;
	int32_t x290 = INT32_MIN;
	volatile uint32_t x291 = 1000U;
	uint64_t x292 = 1063648LLU;
	static volatile uint64_t t57 = 246102136268197LLU;

    t57 = (x289*(x290-(x291/x292)));

    if (t57 != 18287012079602761728LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x297 = 0LL;
	uint8_t x298 = 52U;
	volatile int8_t x299 = INT8_MIN;
	volatile uint64_t t58 = 25114054LLU;

    t58 = (x297*(x298-(x299/x300)));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x301 = 28929U;
	int16_t x302 = INT16_MAX;
	int32_t x303 = -46;
	volatile int8_t x304 = -6;
	int32_t t59 = 5291181;

    t59 = (x301*(x302-(x303/x304)));

    if (t59 != 947714040) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x305 = -1;
	int16_t x306 = INT16_MIN;
	int8_t x307 = INT8_MIN;
	static int32_t t60 = -239465025;

    t60 = (x305*(x306-(x307/x308)));

    if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint32_t x309 = 510183308U;
	static int16_t x310 = -1;
	static uint64_t x311 = 30LLU;
	int32_t x312 = INT32_MIN;
	uint64_t t61 = 370279375210LLU;

    t61 = (x309*(x310-(x311/x312)));

    if (t61 != 18446744073199368308LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x317 = 21887U;
	uint32_t x318 = 1779899023U;
	int32_t x319 = 46662;
	uint64_t x320 = UINT64_MAX;

    t62 = (x317*(x318-(x319/x320)));

    if (t62 != 38956649916401LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x329 = 578320LLU;
	int32_t x330 = INT32_MIN;
	int64_t x331 = -1LL;
	int8_t x332 = INT8_MAX;
	volatile uint64_t t63 = 17001LLU;

    t63 = (x329*(x330-(x331/x332)));

    if (t63 != 18445502140966240256LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x333 = 1U;
	volatile uint64_t x335 = 6099LLU;
	static int16_t x336 = -1;
	uint64_t t64 = UINT64_MAX;

    t64 = (x333*(x334-(x335/x336)));

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x337 = INT8_MIN;
	int8_t x338 = INT8_MIN;
	uint32_t x339 = 183051U;
	int64_t x340 = INT64_MIN;
	volatile int64_t t65 = -1338221172542LL;

    t65 = (x337*(x338-(x339/x340)));

    if (t65 != 16384LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x341 = -4;
	uint32_t x342 = 9289U;
	static int8_t x343 = INT8_MIN;
	volatile uint32_t x344 = 5091U;
	volatile uint32_t t66 = 973U;

    t66 = (x341*(x342-(x343/x344)));

    if (t66 != 3337400U) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int8_t x345 = -1;
	int64_t x346 = INT64_MAX;
	int64_t x348 = INT64_MAX;
	volatile int64_t t67 = -3533338110431142LL;

    t67 = (x345*(x346-(x347/x348)));

    if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x357 = -64441408;
	volatile uint16_t x358 = 2U;
	int8_t x359 = INT8_MAX;
	static uint64_t x360 = UINT64_MAX;
	volatile uint64_t t68 = 232893217736905LLU;

    t68 = (x357*(x358-(x359/x360)));

    if (t68 != 18446744073580668800LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x361 = 370U;
	int16_t x362 = INT16_MIN;
	int8_t x363 = 1;
	uint32_t x364 = 25893U;

    t69 = (x361*(x362-(x363/x364)));

    if (t69 != 4282843136U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x365 = 74912884875LLU;
	uint8_t x366 = 37U;
	volatile uint32_t x367 = 11625002U;
	uint64_t t70 = 21724LLU;

    t70 = (x365*(x366-(x367/x368)));

    if (t70 != 870865208274385125LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x373 = UINT32_MAX;
	int8_t x375 = INT8_MIN;
	uint32_t x376 = 1U;
	volatile uint32_t t71 = 1251332382U;

    t71 = (x373*(x374-(x375/x376)));

    if (t71 != 32640U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x377 = INT8_MIN;
	static volatile uint32_t x378 = UINT32_MAX;
	volatile int32_t x379 = INT32_MIN;
	uint16_t x380 = 3361U;
	volatile uint32_t t72 = 3905U;

    t72 = (x377*(x378-(x379/x380)));

    if (t72 != 4213182976U) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x381 = 3U;
	int64_t x382 = 641230508051839918LL;
	int16_t x383 = INT16_MIN;

    t73 = (x381*(x382-(x383/x384)));

    if (t73 != 1923691524155519430LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x385 = -1;
	volatile int32_t x386 = INT32_MIN;
	int32_t x387 = INT32_MAX;
	int8_t x388 = INT8_MIN;
	volatile int32_t t74 = 125;

    t74 = (x385*(x386-(x387/x388)));

    if (t74 != 2130706433) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint64_t x389 = UINT64_MAX;
	int8_t x390 = INT8_MIN;
	int16_t x391 = INT16_MAX;
	int32_t x392 = INT32_MIN;
	uint64_t t75 = 582025695930407747LLU;

    t75 = (x389*(x390-(x391/x392)));

    if (t75 != 128LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x394 = 0;
	int64_t x395 = INT64_MAX;
	int8_t x396 = INT8_MIN;

    t76 = (x393*(x394-(x395/x396)));

    if (t76 != 3674937295502143693LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x398 = INT64_MAX;
	uint64_t x399 = 249034397877LLU;
	uint32_t x400 = UINT32_MAX;
	uint64_t t77 = 104500LLU;

    t77 = (x397*(x398-(x399/x400)));

    if (t77 != 9223372036854761018LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x402 = -1;
	uint8_t x403 = UINT8_MAX;
	static int32_t x404 = 62;
	static int64_t t78 = 2789054922410124LL;

    t78 = (x401*(x402-(x403/x404)));

    if (t78 != 10LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x409 = INT32_MIN;
	volatile int8_t x410 = INT8_MIN;
	int8_t x412 = 12;
	uint64_t t79 = 91491979687892156LLU;

    t79 = (x409*(x410-(x411/x412)));

    if (t79 != 12297829656635113472LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x421 = -3;
	int8_t x422 = -1;
	static int32_t x423 = INT32_MIN;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t80 = 16;

    t80 = (x421*(x422-(x423/x424)));

    if (t80 != -98301) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x425 = INT64_MIN;
	int64_t x427 = INT64_MAX;
	uint16_t x428 = 7376U;
	static volatile uint64_t t81 = 63114128204666LLU;

    t81 = (x425*(x426-(x427/x428)));

    if (t81 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x430 = INT16_MIN;
	uint32_t x431 = UINT32_MAX;
	int64_t x432 = INT64_MIN;
	static volatile int64_t t82 = -4853743LL;

    t82 = (x429*(x430-(x431/x432)));

    if (t82 != 458752LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x433 = 60;
	int16_t x434 = -926;
	int16_t x435 = -1979;
	uint32_t x436 = 2U;
	uint32_t t83 = 219422U;

    t83 = (x433*(x434-(x435/x436)));

    if (t83 != 3840U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x440 = 226997124U;
	volatile uint32_t t84 = 5146U;

    t84 = (x437*(x438-(x439/x440)));

    if (t84 != 4294967059U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x449 = UINT16_MAX;
	uint32_t x450 = 28932474U;
	uint32_t x451 = UINT32_MAX;
	int64_t x452 = INT64_MAX;

    t85 = (x449*(x450-(x451/x452)));

    if (t85 != 1896089683590LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x454 = 58U;
	int8_t x456 = INT8_MIN;
	volatile int64_t t86 = -508108408425633167LL;

    t86 = (x453*(x454-(x455/x456)));

    if (t86 != -1640024671661160LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x457 = INT8_MIN;
	int32_t x458 = -906819;
	volatile uint8_t x459 = UINT8_MAX;

    t87 = (x457*(x458-(x459/x460)));

    if (t87 != 116072832) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x461 = 8U;
	int8_t x462 = INT8_MIN;
	uint32_t x463 = UINT32_MAX;
	int64_t x464 = INT64_MIN;

    t88 = (x461*(x462-(x463/x464)));

    if (t88 != -1024LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x465 = 22398846U;
	static volatile int64_t x466 = 26229072315LL;
	volatile uint16_t x467 = UINT16_MAX;
	volatile int64_t t89 = 10010467LL;

    t89 = (x465*(x466-(x467/x468)));

    if (t89 != 587500945750045068LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x469 = 78;
	volatile int16_t x470 = INT16_MIN;
	uint32_t x471 = 23174U;
	uint64_t x472 = UINT64_MAX;

    t90 = (x469*(x470-(x471/x472)));

    if (t90 != 18446744073706995712LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x477 = INT8_MIN;
	int8_t x478 = INT8_MIN;
	uint8_t x479 = 1U;
	static int8_t x480 = -1;
	int32_t t91 = 533005585;

    t91 = (x477*(x478-(x479/x480)));

    if (t91 != 16256) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x482 = 7U;
	static uint16_t x483 = 1U;
	uint64_t x484 = UINT64_MAX;

    t92 = (x481*(x482-(x483/x484)));

    if (t92 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint32_t x489 = 22557U;
	int8_t x491 = INT8_MIN;
	int32_t x492 = INT32_MAX;
	uint32_t t93 = 12138U;

    t93 = (x489*(x490-(x491/x492)));

    if (t93 != 3555819520U) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x493 = 14U;
	int8_t x494 = -1;
	static int16_t x495 = -4846;
	volatile int16_t x496 = INT16_MIN;
	uint32_t t94 = 8010662U;

    t94 = (x493*(x494-(x495/x496)));

    if (t94 != 4294967282U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x497 = INT64_MIN;
	static uint64_t x498 = 24947148LLU;
	uint64_t x499 = 7858600LLU;
	uint16_t x500 = 97U;
	uint64_t t95 = 40197625042043LLU;

    t95 = (x497*(x498-(x499/x500)));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x502 = UINT64_MAX;
	static int16_t x503 = -1;
	int16_t x504 = INT16_MIN;
	uint64_t t96 = 30312120845380LLU;

    t96 = (x501*(x502-(x503/x504)));

    if (t96 != 18446744073682737362LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x505 = 2145764;
	uint32_t x506 = 53132313U;
	static int32_t x508 = 77;
	volatile uint32_t t97 = 1961033U;

    t97 = (x505*(x506-(x507/x508)));

    if (t97 != 1784474716U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x521 = INT16_MIN;
	volatile uint16_t x523 = UINT16_MAX;
	static int32_t x524 = INT32_MIN;
	volatile uint32_t t98 = 47U;

    t98 = (x521*(x522-(x523/x524)));

    if (t98 != 32768U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x525 = 2838U;
	int16_t x526 = 6;
	static int16_t x527 = -66;
	uint8_t x528 = UINT8_MAX;

    t99 = (x525*(x526-(x527/x528)));

    if (t99 != 17028U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x529 = INT8_MIN;
	static int32_t x530 = -1;
	static volatile int64_t x531 = INT64_MAX;
	static volatile int64_t t100 = -3LL;

    t100 = (x529*(x530-(x531/x532)));

    if (t100 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x538 = 1;
	uint16_t x540 = UINT16_MAX;
	int32_t t101 = 333;

    t101 = (x537*(x538-(x539/x540)));

    if (t101 != -2764353) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x541 = 594;
	static int8_t x542 = INT8_MIN;
	static volatile uint64_t x543 = 83LLU;
	uint64_t t102 = 40327580596420LLU;

    t102 = (x541*(x542-(x543/x544)));

    if (t102 != 18446744073709475584LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x545 = INT16_MIN;
	int64_t x546 = -1LL;
	int32_t x547 = INT32_MIN;
	int64_t x548 = INT64_MIN;
	volatile int64_t t103 = 79697199224LL;

    t103 = (x545*(x546-(x547/x548)));

    if (t103 != 32768LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x549 = INT64_MAX;
	static uint64_t x550 = 1889LLU;
	uint32_t x552 = 17219U;
	static uint64_t t104 = 56401LLU;

    t104 = (x549*(x550-(x551/x552)));

    if (t104 != 9223372036854773919LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x553 = INT16_MIN;
	int8_t x554 = -6;
	static uint16_t x555 = 8584U;
	int8_t x556 = -1;
	volatile int32_t t105 = 2280;

    t105 = (x553*(x554-(x555/x556)));

    if (t105 != -281083904) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x557 = 9U;
	volatile uint8_t x558 = 1U;
	volatile uint32_t x559 = 4428829U;
	static uint8_t x560 = 19U;
	volatile uint32_t t106 = 14982065U;

    t106 = (x557*(x558-(x559/x560)));

    if (t106 != 4292869441U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x561 = INT16_MIN;
	volatile int8_t x562 = INT8_MIN;
	int64_t x564 = 93192909463899LL;
	volatile int64_t t107 = 2727222988667683LL;

    t107 = (x561*(x562-(x563/x564)));

    if (t107 != 4194304LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint64_t x565 = UINT64_MAX;
	uint16_t x566 = UINT16_MAX;
	static int64_t x567 = INT64_MIN;
	static int16_t x568 = -15752;
	uint64_t t108 = 60779410LLU;

    t108 = (x565*(x566-(x567/x568)));

    if (t108 != 585536569059323LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x589 = INT16_MIN;
	uint64_t x590 = 9073790937981042LLU;
	int8_t x592 = INT8_MIN;
	uint64_t t109 = 126LLU;

    t109 = (x589*(x590-(x591/x592)));

    if (t109 != 16264667797299593216LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint64_t x597 = 173153LLU;
	uint32_t x599 = 237526U;

    t110 = (x597*(x598-(x599/x600)));

    if (t110 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x605 = INT16_MIN;
	volatile uint64_t x606 = 448720138LLU;
	volatile int64_t x607 = -1LL;
	int32_t x608 = INT32_MIN;
	static uint64_t t111 = 4824267130LLU;

    t111 = (x605*(x606-(x607/x608)));

    if (t111 != 18446729370048069632LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x609 = INT8_MAX;
	static uint16_t x610 = 0U;
	volatile uint32_t x611 = UINT32_MAX;
	uint64_t x612 = UINT64_MAX;
	uint64_t t112 = 176936903285514676LLU;

    t112 = (x609*(x610-(x611/x612)));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x613 = 34811943U;
	uint8_t x614 = 30U;
	int16_t x615 = INT16_MIN;

    t113 = (x613*(x614-(x615/x616)));

    if (t113 != 1009546347U) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x625 = 0;
	volatile int64_t t114 = 6LL;

    t114 = (x625*(x626-(x627/x628)));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x629 = INT8_MIN;
	int32_t x630 = 129536732;
	static int16_t x631 = INT16_MIN;
	uint64_t x632 = UINT64_MAX;
	uint64_t t115 = 2349786323179582LLU;

    t115 = (x629*(x630-(x631/x632)));

    if (t115 != 18446744057128849920LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x638 = UINT8_MAX;
	static int16_t x639 = 2504;
	int64_t t116 = 6389348LL;

    t116 = (x637*(x638-(x639/x640)));

    if (t116 != 866LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x641 = INT16_MIN;
	static int16_t x642 = INT16_MIN;
	volatile int8_t x644 = INT8_MAX;
	volatile uint32_t t117 = 177352181U;

    t117 = (x641*(x642-(x643/x644)));

    if (t117 != 1308262400U) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int64_t x645 = INT64_MIN;
	static int64_t x646 = 0LL;
	int64_t x647 = 189319377815949LL;
	int64_t x648 = -212662686422166020LL;
	int64_t t118 = -1333638313205955152LL;

    t118 = (x645*(x646-(x647/x648)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x649 = INT32_MAX;
	static int64_t x651 = INT64_MIN;
	uint64_t x652 = UINT64_MAX;

    t119 = (x649*(x650-(x651/x652)));

    if (t119 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x653 = INT8_MAX;
	int64_t x655 = INT64_MAX;
	int64_t t120 = -118567LL;

    t120 = (x653*(x654-(x655/x656)));

    if (t120 != -17873933755711869LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x657 = 1U;
	volatile int16_t x658 = -1;
	volatile int64_t x659 = -532234470583LL;
	static int32_t x660 = 2043;

    t121 = (x657*(x658-(x659/x660)));

    if (t121 != 260516137LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x661 = INT8_MIN;
	uint32_t x662 = 778U;
	uint8_t x663 = 86U;
	uint32_t t122 = 121806041U;

    t122 = (x661*(x662-(x663/x664)));

    if (t122 != 4294856704U) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x665 = -1;
	uint8_t x666 = 4U;
	uint8_t x667 = UINT8_MAX;
	volatile int32_t t123 = -50;

    t123 = (x665*(x666-(x667/x668)));

    if (t123 != -4) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x669 = 4U;
	volatile uint32_t x670 = 503U;
	uint16_t x671 = UINT16_MAX;
	int64_t x672 = 54788098734628808LL;
	int64_t t124 = -131LL;

    t124 = (x669*(x670-(x671/x672)));

    if (t124 != 2012LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x673 = 7377519889LL;
	int16_t x674 = INT16_MIN;
	static int8_t x675 = -1;
	int16_t x676 = -7;
	int64_t t125 = 84839977027LL;

    t125 = (x673*(x674-(x675/x676)));

    if (t125 != -241746571722752LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x678 = 839198U;
	int8_t x679 = INT8_MIN;
	int8_t x680 = INT8_MIN;

    t126 = (x677*(x678-(x679/x680)));

    if (t126 != 2565963776U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x681 = UINT64_MAX;
	static int32_t x682 = -13;
	uint64_t x683 = UINT64_MAX;
	int64_t x684 = -652605825LL;
	static uint64_t t127 = 6786LLU;

    t127 = (x681*(x682-(x683/x684)));

    if (t127 != 14LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x697 = 719527U;
	static int16_t x698 = -6291;
	static uint32_t x699 = UINT32_MAX;
	uint64_t x700 = UINT64_MAX;
	static uint64_t t128 = 6975533195601LLU;

    t128 = (x697*(x698-(x699/x700)));

    if (t128 != 18446744069183007259LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x701 = -1019350546;
	static int64_t x702 = -2365853029223125883LL;
	static volatile uint8_t x703 = UINT8_MAX;
	volatile uint64_t x704 = 59072501LLU;

    t129 = (x701*(x702-(x703/x704)));

    if (t129 != 3250943138328254630LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x705 = -4;
	int32_t x707 = -35454981;
	static uint32_t x708 = UINT32_MAX;
	volatile uint32_t t130 = 1278U;

    t130 = (x705*(x706-(x707/x708)));

    if (t130 != 6684U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x709 = 1;
	int32_t x710 = INT32_MIN;
	static int64_t x711 = -1LL;
	static int64_t x712 = -1LL;
	volatile int64_t t131 = 47435469028LL;

    t131 = (x709*(x710-(x711/x712)));

    if (t131 != -2147483649LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x713 = INT16_MIN;
	uint8_t x715 = 42U;
	uint32_t t132 = 994704458U;

    t132 = (x713*(x714-(x715/x716)));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x721 = INT16_MAX;
	uint64_t x722 = 4204870042606968LLU;
	int64_t x723 = -191674168255LL;
	uint16_t x724 = UINT16_MAX;

    t133 = (x721*(x722-(x723/x724)));

    if (t133 != 8653768265971270064LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x741 = INT32_MIN;
	int64_t x742 = -1LL;
	uint8_t x743 = 0U;
	volatile uint8_t x744 = 1U;
	int64_t t134 = 32114507052337740LL;

    t134 = (x741*(x742-(x743/x744)));

    if (t134 != 2147483648LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x745 = -12576;
	volatile int32_t x746 = 13;
	volatile int64_t x747 = INT64_MIN;
	static volatile uint32_t x748 = 27813U;
	int64_t t135 = 266LL;

    t135 = (x745*(x746-(x747/x748)));

    if (t135 != -4170464413601196960LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x749 = 1;
	int8_t x750 = 30;
	static volatile int32_t t136 = 1;

    t136 = (x749*(x750-(x751/x752)));

    if (t136 != 8109236) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x753 = INT32_MIN;
	int64_t x754 = -21965LL;
	uint8_t x755 = 2U;
	volatile int64_t t137 = 0LL;

    t137 = (x753*(x754-(x755/x756)));

    if (t137 != 47169478328320LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x757 = -4;
	static int16_t x758 = -1;
	int8_t x760 = -1;
	volatile int32_t t138 = -421547903;

    t138 = (x757*(x758-(x759/x760)));

    if (t138 != -48) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x761 = 6;
	int32_t x762 = -2;
	int32_t x763 = 0;
	int64_t x764 = 879106554716LL;
	static int64_t t139 = -97919399555LL;

    t139 = (x761*(x762-(x763/x764)));

    if (t139 != -12LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x765 = INT16_MIN;
	uint32_t x766 = UINT32_MAX;
	volatile int64_t x767 = -1LL;
	int64_t x768 = INT64_MAX;
	volatile int64_t t140 = -4686639328LL;

    t140 = (x765*(x766-(x767/x768)));

    if (t140 != -140737488322560LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x769 = 4898U;
	volatile int64_t x770 = -1LL;
	uint32_t x771 = 23853U;
	volatile int16_t x772 = 3;
	int64_t t141 = 71492502107LL;

    t141 = (x769*(x770-(x771/x772)));

    if (t141 != -38948896LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x773 = INT8_MIN;
	int8_t x774 = INT8_MIN;
	static uint64_t x775 = 40168019837016LLU;
	uint64_t t142 = 125139LLU;

    t142 = (x773*(x774-(x775/x776)));

    if (t142 != 22851140190208LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x781 = -1;
	int16_t x782 = INT16_MIN;
	uint32_t x783 = UINT32_MAX;
	int64_t x784 = INT64_MAX;
	int64_t t143 = 1402692LL;

    t143 = (x781*(x782-(x783/x784)));

    if (t143 != 32768LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x785 = 1385135LLU;
	int8_t x786 = 0;
	int16_t x788 = -1;

    t144 = (x785*(x786-(x787/x788)));

    if (t144 != 18446744058945397651LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x789 = -1;
	int64_t x790 = -1LL;
	uint8_t x791 = 11U;
	int32_t x792 = 2317;
	static volatile int64_t t145 = 3512497345574060LL;

    t145 = (x789*(x790-(x791/x792)));

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x793 = -28;
	int32_t x794 = INT32_MIN;
	int64_t x796 = -1LL;
	static int64_t t146 = 69617380339937123LL;

    t146 = (x793*(x794-(x795/x796)));

    if (t146 != 60129542144LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x797 = INT16_MIN;
	int16_t x798 = INT16_MAX;
	int32_t x799 = -1;
	int8_t x800 = INT8_MIN;
	static volatile int32_t t147 = -218;

    t147 = (x797*(x798-(x799/x800)));

    if (t147 != -1073709056) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x801 = UINT32_MAX;
	int32_t x802 = INT32_MIN;
	static int8_t x803 = 1;
	uint64_t x804 = UINT64_MAX;
	uint64_t t148 = 8LLU;

    t148 = (x801*(x802-(x803/x804)));

    if (t148 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x805 = UINT8_MAX;
	uint64_t x806 = 1097741LLU;
	uint16_t x807 = UINT16_MAX;
	volatile int32_t x808 = INT32_MIN;
	uint64_t t149 = 660LLU;

    t149 = (x805*(x806-(x807/x808)));

    if (t149 != 279923955LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x809 = -258255526728035899LL;
	uint64_t x810 = 5922LLU;
	volatile uint64_t t150 = 95085469678299LLU;

    t150 = (x809*(x810-(x811/x812)));

    if (t150 != 5047850681928656937LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x813 = UINT8_MAX;
	volatile uint64_t x814 = 7038694098808LLU;
	int8_t x815 = INT8_MAX;
	static uint32_t x816 = 3689U;

    t151 = (x813*(x814-(x815/x816)));

    if (t151 != 1794866995196040LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x821 = -29184;
	uint8_t x822 = UINT8_MAX;
	volatile int32_t x823 = -1;
	int8_t x824 = INT8_MIN;

    t152 = (x821*(x822-(x823/x824)));

    if (t152 != -7441920) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x825 = -3;
	static int8_t x826 = -1;
	int64_t x827 = INT64_MIN;
	uint32_t x828 = 408U;

    t153 = (x825*(x826-(x827/x828)));

    if (t153 != -67818912035696877LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x830 = INT8_MIN;
	volatile uint8_t x831 = 99U;
	static uint8_t x832 = 29U;
	int32_t t154 = 11;

    t154 = (x829*(x830-(x831/x832)));

    if (t154 != -261083) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x833 = 28;
	int16_t x834 = INT16_MIN;
	int16_t x835 = -108;
	static int64_t x836 = 3260381120964LL;
	volatile int64_t t155 = -110246007520916LL;

    t155 = (x833*(x834-(x835/x836)));

    if (t155 != -917504LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x841 = 388;
	int8_t x842 = -1;
	static volatile int32_t x843 = -1;
	static uint64_t x844 = UINT64_MAX;
	volatile uint64_t t156 = 94814575483LLU;

    t156 = (x841*(x842-(x843/x844)));

    if (t156 != 18446744073709550840LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x846 = -18;

    t157 = (x845*(x846-(x847/x848)));

    if (t157 != 4294967260U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x853 = INT64_MIN;
	uint64_t x854 = 1880LLU;
	uint64_t x855 = 1980195075737LLU;
	static int16_t x856 = -2;

    t158 = (x853*(x854-(x855/x856)));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint32_t x857 = 184407U;
	int8_t x858 = INT8_MIN;
	uint64_t x859 = UINT64_MAX;
	static int64_t x860 = -384759665LL;
	uint64_t t159 = 247638LLU;

    t159 = (x857*(x858-(x859/x860)));

    if (t159 != 18446744073685763113LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x861 = -1;
	uint8_t x862 = UINT8_MAX;
	static int64_t x863 = INT64_MAX;
	static int16_t x864 = INT16_MAX;

    t160 = (x861*(x862-(x863/x864)));

    if (t160 != 281483566907145LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x873 = UINT32_MAX;
	volatile int16_t x874 = -58;
	int16_t x875 = -2;
	static uint32_t x876 = UINT32_MAX;
	uint32_t t161 = 13U;

    t161 = (x873*(x874-(x875/x876)));

    if (t161 != 58U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x877 = 1002321015265368309LLU;
	int8_t x878 = 30;
	static volatile uint32_t x879 = 1772857U;
	uint8_t x880 = 40U;

    t162 = (x877*(x878-(x879/x880)));

    if (t162 != 9948528714486326305LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x881 = INT16_MIN;
	int8_t x883 = INT8_MIN;
	volatile uint16_t x884 = 25240U;
	int32_t t163 = 258;

    t163 = (x881*(x882-(x883/x884)));

    if (t163 != 1073741824) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x885 = 769LL;
	int8_t x886 = INT8_MIN;
	int64_t t164 = -14LL;

    t164 = (x885*(x886-(x887/x888)));

    if (t164 != -98432LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x889 = UINT32_MAX;
	int32_t x892 = INT32_MIN;
	static uint32_t t165 = 1299U;

    t165 = (x889*(x890-(x891/x892)));

    if (t165 != 4294963574U) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint64_t x893 = UINT64_MAX;
	uint8_t x894 = 1U;
	static int16_t x895 = INT16_MIN;
	uint8_t x896 = UINT8_MAX;
	volatile uint64_t t166 = 10LLU;

    t166 = (x893*(x894-(x895/x896)));

    if (t166 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x897 = 19;
	uint32_t x898 = 7U;
	uint8_t x899 = 25U;
	volatile uint8_t x900 = 30U;
	volatile uint32_t t167 = 973U;

    t167 = (x897*(x898-(x899/x900)));

    if (t167 != 133U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x901 = 1915641U;
	uint32_t x902 = UINT32_MAX;
	int16_t x903 = -1;
	static uint32_t x904 = UINT32_MAX;
	uint32_t t168 = 7814974U;

    t168 = (x901*(x902-(x903/x904)));

    if (t168 != 4291136014U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x909 = UINT32_MAX;
	int64_t x910 = -1LL;
	int16_t x911 = INT16_MIN;
	int32_t x912 = -1;
	static int64_t t169 = 4818209LL;

    t169 = (x909*(x910-(x911/x912)));

    if (t169 != -140741783289855LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x913 = -1LL;
	int8_t x914 = INT8_MIN;
	static int16_t x915 = INT16_MIN;
	volatile int64_t t170 = -242317473LL;

    t170 = (x913*(x914-(x915/x916)));

    if (t170 != -10794LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x918 = INT8_MAX;
	uint32_t x919 = UINT32_MAX;
	int16_t x920 = INT16_MIN;
	volatile uint32_t t171 = 2287U;

    t171 = (x917*(x918-(x919/x920)));

    if (t171 != 8257410U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x926 = 12735;
	static int64_t t172 = -3313740LL;

    t172 = (x925*(x926-(x927/x928)));

    if (t172 != 2674350LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x929 = -1LL;
	uint16_t x930 = 7U;
	volatile uint8_t x931 = UINT8_MAX;
	uint8_t x932 = 28U;
	int64_t t173 = -986029858LL;

    t173 = (x929*(x930-(x931/x932)));

    if (t173 != 2LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x933 = INT32_MIN;
	int16_t x935 = 3881;
	volatile int32_t x936 = INT32_MAX;
	volatile uint64_t t174 = 465724263064152LLU;

    t174 = (x933*(x934-(x935/x936)));

    if (t174 != 2147483648LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x937 = 0;
	static volatile int16_t x938 = -1;
	uint32_t x939 = UINT32_MAX;
	int16_t x940 = INT16_MIN;
	volatile uint32_t t175 = 45684U;

    t175 = (x937*(x938-(x939/x940)));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x941 = UINT8_MAX;
	int32_t x942 = INT32_MIN;
	static int64_t x943 = INT64_MIN;
	int64_t x944 = INT64_MAX;
	volatile int64_t t176 = 53LL;

    t176 = (x941*(x942-(x943/x944)));

    if (t176 != -547608329985LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x949 = INT16_MIN;
	uint64_t x950 = 2505LLU;
	uint8_t x951 = UINT8_MAX;
	static int8_t x952 = INT8_MAX;
	uint64_t t177 = 30694LLU;

    t177 = (x949*(x950-(x951/x952)));

    if (t177 != 18446744073627533312LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x953 = UINT64_MAX;
	int32_t x955 = -1;
	volatile int16_t x956 = -3958;
	volatile uint64_t t178 = 1137012372956639477LLU;

    t178 = (x953*(x954-(x955/x956)));

    if (t178 != 16LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x961 = -1;
	uint64_t x962 = 331055780838507LLU;
	static volatile int16_t x963 = INT16_MAX;
	int8_t x964 = INT8_MIN;
	volatile uint64_t t179 = 381LLU;

    t179 = (x961*(x962-(x963/x964)));

    if (t179 != 18446413017928712854LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x968 = INT16_MIN;

    t180 = (x965*(x966-(x967/x968)));

    if (t180 != 32769LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x973 = UINT8_MAX;
	int8_t x974 = INT8_MIN;
	int32_t x976 = -1;

    t181 = (x973*(x974-(x975/x976)));

    if (t181 != 16678785) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x977 = INT64_MIN;
	uint16_t x978 = UINT16_MAX;
	int16_t x979 = -22;

    t182 = (x977*(x978-(x979/x980)));

    if (t182 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x982 = 0U;
	volatile uint16_t x983 = 1U;
	int16_t x984 = -1;

    t183 = (x981*(x982-(x983/x984)));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x985 = INT32_MAX;
	int32_t x986 = -689068;
	uint16_t x987 = 179U;
	volatile int64_t x988 = 64760237655975310LL;
	int64_t t184 = -267498LL;

    t184 = (x985*(x986-(x987/x988)));

    if (t184 != -1479762261670996LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x989 = INT32_MIN;
	int16_t x990 = 275;
	uint64_t x991 = UINT64_MAX;
	int16_t x992 = INT16_MIN;
	static uint64_t t185 = 61907376264160LLU;

    t185 = (x989*(x990-(x991/x992)));

    if (t185 != 18446743485299032064LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x993 = INT8_MIN;
	int16_t x994 = -1;
	volatile uint32_t t186 = 4089U;

    t186 = (x993*(x994-(x995/x996)));

    if (t186 != 128U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x997 = UINT32_MAX;
	int64_t x998 = INT64_MIN;
	volatile uint64_t x999 = UINT64_MAX;
	int32_t x1000 = -6;
	uint64_t t187 = 45278956041134LLU;

    t187 = (x997*(x998-(x999/x1000)));

    if (t187 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x1002 = -3;
	int64_t x1003 = INT64_MIN;
	uint16_t x1004 = UINT16_MAX;
	volatile int64_t t188 = -18547298768LL;

    t188 = (x1001*(x1002-(x1003/x1004)));

    if (t188 != 35888607147293955LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1009 = 56112LLU;
	uint64_t x1010 = 760830151026337958LLU;
	static uint32_t x1012 = UINT32_MAX;
	uint64_t t189 = 14679580075LLU;

    t189 = (x1009*(x1010-(x1011/x1012)));

    if (t189 != 5935647825913300592LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x1013 = 2U;
	int16_t x1014 = -2;
	volatile int32_t x1015 = INT32_MIN;
	volatile int64_t t190 = 1036870LL;

    t190 = (x1013*(x1014-(x1015/x1016)));

    if (t190 != -4LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x1017 = INT8_MAX;
	int32_t x1018 = -364673511;
	int8_t x1019 = INT8_MIN;
	uint64_t x1020 = 482794LLU;
	uint64_t t191 = 3321003321308885LLU;

    t191 = (x1017*(x1018-(x1019/x1020)));

    if (t191 != 18441891571695735455LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1025 = 0;
	uint8_t x1026 = 92U;
	uint64_t x1027 = UINT64_MAX;
	uint64_t t192 = 105LLU;

    t192 = (x1025*(x1026-(x1027/x1028)));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1030 = INT8_MIN;
	uint32_t x1031 = UINT32_MAX;
	int64_t t193 = 120008789267689763LL;

    t193 = (x1029*(x1030-(x1031/x1032)));

    if (t193 != -232209869056LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1041 = INT16_MIN;
	static volatile int32_t x1043 = -124;
	uint16_t x1044 = UINT16_MAX;
	volatile int32_t t194 = -2272;

    t194 = (x1041*(x1042-(x1043/x1044)));

    if (t194 != -27590656) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1049 = 88U;
	uint8_t x1050 = 12U;
	static int8_t x1051 = -41;
	volatile uint16_t x1052 = 516U;

    t195 = (x1049*(x1050-(x1051/x1052)));

    if (t195 != 1056U) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1053 = 4987389;
	static volatile uint32_t x1054 = UINT32_MAX;
	static uint32_t x1055 = UINT32_MAX;
	int8_t x1056 = 6;
	uint32_t t196 = 29982U;

    t196 = (x1053*(x1054-(x1055/x1056)));

    if (t196 != 2145821185U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1057 = 1U;
	uint64_t x1058 = 746LLU;
	int16_t x1059 = INT16_MIN;
	int32_t x1060 = INT32_MAX;
	uint64_t t197 = 2403931033719043344LLU;

    t197 = (x1057*(x1058-(x1059/x1060)));

    if (t197 != 746LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x1061 = 2853U;
	int32_t x1062 = 1;
	static uint64_t x1063 = 172505LLU;
	static uint8_t x1064 = 18U;
	static uint64_t t198 = 65LLU;

    t198 = (x1061*(x1062-(x1063/x1064)));

    if (t198 != 18446744073682214170LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1065 = -1;
	static int16_t x1066 = INT16_MIN;
	uint64_t x1067 = UINT64_MAX;
	static volatile int64_t x1068 = -1998279039251LL;
	volatile uint64_t t199 = 11015432669018068LLU;

    t199 = (x1065*(x1066-(x1067/x1068)));

    if (t199 != 32769LLU) { NG(); } else { ; }
	
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

