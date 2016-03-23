
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

static int32_t x6 = 1;
volatile int32_t t1 = -14;
uint16_t x23 = 9868U;
volatile int16_t x34 = 36;
int32_t t3 = -9;
uint32_t x40 = UINT32_MAX;
uint32_t x42 = UINT32_MAX;
uint16_t x45 = 2U;
uint8_t x48 = 0U;
volatile int32_t t6 = -442;
static volatile uint16_t x51 = 2U;
uint32_t x59 = 7255468U;
int8_t x61 = INT8_MIN;
uint64_t x63 = UINT64_MAX;
int8_t x64 = 15;
volatile int8_t x67 = INT8_MIN;
volatile int16_t x73 = INT16_MAX;
int8_t x77 = INT8_MIN;
volatile int16_t x79 = -1;
volatile int32_t t13 = -27;
int32_t x82 = -1;
uint32_t x89 = 2776402U;
int8_t x90 = INT8_MIN;
volatile int8_t x92 = INT8_MAX;
static volatile int32_t t16 = 778461189;
int32_t x98 = INT32_MIN;
volatile int8_t x100 = INT8_MIN;
volatile int32_t t17 = 156479245;
static uint8_t x111 = UINT8_MAX;
uint8_t x114 = UINT8_MAX;
int32_t t22 = 1013990499;
int8_t x129 = -2;
volatile int8_t x132 = -1;
static volatile uint64_t x134 = UINT64_MAX;
static volatile int16_t x135 = -1;
volatile int32_t x159 = -28804;
uint32_t x168 = UINT32_MAX;
int32_t t32 = -1;
uint16_t x172 = 326U;
int64_t x181 = -51321197188LL;
volatile int32_t t36 = 60;
uint64_t x191 = UINT64_MAX;
int32_t x199 = 24234373;
uint16_t x204 = 170U;
int8_t x210 = INT8_MIN;
int64_t x212 = INT64_MIN;
uint16_t x221 = 229U;
uint8_t x223 = UINT8_MAX;
volatile int32_t t44 = -121507546;
volatile int32_t x230 = -92992;
volatile int32_t t46 = 21382549;
volatile uint64_t x238 = 43682532LLU;
uint64_t x241 = 332LLU;
int8_t x242 = INT8_MIN;
static int8_t x243 = INT8_MIN;
uint8_t x253 = UINT8_MAX;
int16_t x257 = 187;
int32_t t51 = 29239247;
uint64_t x263 = 16362387745LLU;
static uint16_t x264 = 2U;
volatile uint32_t x274 = UINT32_MAX;
int8_t x276 = INT8_MIN;
static uint32_t x293 = UINT32_MAX;
static volatile int32_t t57 = 321742733;
static int8_t x303 = -23;
int8_t x307 = INT8_MIN;
int8_t x318 = -5;
int32_t t64 = 1382403;
static int16_t x325 = INT16_MAX;
volatile int64_t x330 = 2192LL;
uint64_t x331 = 25980258LLU;
uint32_t x336 = 467U;
static int16_t x338 = INT16_MAX;
uint8_t x342 = UINT8_MAX;
uint32_t x345 = 55U;
static volatile int32_t t71 = -16;
int64_t x365 = INT64_MIN;
int32_t x367 = -1;
int8_t x369 = -3;
int16_t x377 = 6083;
volatile int32_t x379 = -8;
volatile int32_t t76 = 90;
uint16_t x383 = 55U;
static int64_t x387 = INT64_MIN;
uint64_t x388 = 373456466108287LLU;
int16_t x391 = -1;
int32_t x392 = -1;
volatile int32_t t79 = 8958;
int32_t x398 = INT32_MIN;
volatile int8_t x404 = INT8_MAX;
int16_t x412 = -4812;
static int32_t x413 = -1;
int32_t x425 = -1;
volatile int32_t t87 = 120907;
int8_t x433 = 1;
int16_t x434 = 1;
uint16_t x437 = 0U;
int16_t x441 = INT16_MIN;
static uint64_t x443 = UINT64_MAX;
volatile uint32_t x446 = 19461U;
uint64_t x456 = UINT64_MAX;
static uint8_t x463 = UINT8_MAX;
volatile int32_t t96 = -1;
int8_t x490 = INT8_MIN;
uint64_t x492 = 225LLU;
volatile int64_t x493 = INT64_MAX;
volatile int32_t t99 = 99124618;
uint16_t x504 = 6976U;
static int32_t t100 = 1026318788;
int64_t x510 = -1LL;
int8_t x514 = -1;
uint32_t x515 = 16358U;
int8_t x520 = INT8_MIN;
volatile int64_t x532 = INT64_MIN;
int32_t x534 = INT32_MIN;
static int32_t x535 = INT32_MIN;
int16_t x543 = 0;
volatile uint8_t x544 = 15U;
volatile int32_t x548 = -827;
int32_t t110 = 53166;
static int8_t x553 = INT8_MIN;
static int16_t x562 = -1;
int32_t x568 = INT32_MIN;
int16_t x580 = -1;
int32_t x585 = INT32_MAX;
int16_t x587 = -1;
static uint16_t x589 = 3921U;
uint8_t x590 = 5U;
int32_t t118 = -217752000;
static volatile int32_t t119 = -34;
volatile int8_t x608 = 24;
uint32_t x610 = 13086U;
static int8_t x611 = 1;
static uint8_t x623 = UINT8_MAX;
int8_t x625 = -1;
int8_t x627 = INT8_MIN;
volatile int32_t x632 = -1;
static int32_t t126 = -226438021;
volatile uint32_t x638 = 39959U;
uint8_t x640 = UINT8_MAX;
uint8_t x646 = 10U;
volatile uint16_t x648 = 0U;
int32_t t128 = 41281;
int32_t x652 = -1;
uint64_t x666 = 212976043LLU;
uint64_t x668 = 251781992026LLU;
volatile int16_t x671 = -1;
static volatile int64_t x690 = INT64_MAX;
int16_t x693 = INT16_MIN;
int32_t x694 = -2967;
static int8_t x697 = INT8_MIN;
int8_t x701 = 43;
static int64_t x702 = -1LL;
volatile int64_t x706 = 26LL;
uint32_t x709 = 2U;
volatile int32_t t142 = 151282;
static uint64_t x714 = 514476668LLU;
uint32_t x716 = 240864U;
uint8_t x717 = 6U;
volatile int32_t x719 = -457184106;
int32_t x730 = -1;
int8_t x738 = -28;
uint8_t x741 = 43U;
int16_t x749 = 0;
volatile uint8_t x751 = 23U;
volatile int32_t t150 = -180;
int16_t x758 = -1;
uint32_t x777 = UINT32_MAX;
int8_t x778 = 21;
int32_t x779 = -1;
static int8_t x790 = 20;
volatile int32_t x792 = -1;
int8_t x793 = 6;
int16_t x795 = 2649;
int64_t x796 = 1LL;
int64_t x798 = -1LL;
volatile int32_t x801 = -1;
volatile int32_t x820 = -252918689;
int8_t x823 = INT8_MIN;
volatile int32_t t165 = -40973;
int16_t x828 = -1;
static volatile uint32_t x831 = UINT32_MAX;
int16_t x833 = 479;
uint16_t x834 = UINT16_MAX;
int64_t x835 = 18074766158LL;
volatile int32_t t170 = 403936;
int16_t x857 = 5;
int32_t x861 = -95012;
static int16_t x868 = -1;
int8_t x870 = -1;
volatile int32_t t175 = -339518;
volatile int64_t x877 = -18570164LL;
volatile int64_t x885 = 29475425LL;
volatile uint64_t x888 = 1928077319667LLU;
volatile int64_t x890 = INT64_MIN;
volatile int32_t x892 = INT32_MAX;
int16_t x894 = INT16_MIN;
int16_t x900 = -7131;
static volatile int32_t t182 = 74811;
uint8_t x901 = 0U;
int8_t x905 = INT8_MAX;
volatile int32_t t184 = -57862;
static volatile uint64_t x911 = 105400037096775LLU;
int16_t x912 = 7966;
volatile int16_t x919 = -1;
static volatile int8_t x924 = INT8_MIN;
volatile int32_t t188 = -2;
static int32_t x929 = INT32_MAX;
volatile int32_t t193 = 46800;
static int64_t x954 = -3746511188269404LL;
int16_t x955 = INT16_MIN;
int8_t x967 = INT8_MIN;
static int32_t t197 = -3;


void f0(void) {
    	int16_t x5 = 4;
	volatile int64_t x7 = INT64_MIN;
	volatile int16_t x8 = -5995;
	volatile int32_t t0 = -116711;

    t0 = (x5==(x6-(x7-x8)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x13 = 0;
	uint16_t x14 = UINT16_MAX;
	static uint64_t x15 = 323269227675LLU;
	int64_t x16 = -109LL;

    t1 = (x13==(x14-(x15-x16)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x21 = 1;
	int16_t x22 = INT16_MAX;
	static int16_t x24 = INT16_MIN;
	volatile int32_t t2 = -10748482;

    t2 = (x21==(x22-(x23-x24)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x33 = INT64_MAX;
	int64_t x35 = 5863029518320856LL;
	int64_t x36 = 924238LL;

    t3 = (x33==(x34-(x35-x36)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x37 = UINT8_MAX;
	uint8_t x38 = 3U;
	int16_t x39 = 2;
	int32_t t4 = 38;

    t4 = (x37==(x38-(x39-x40)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x41 = 603672508U;
	volatile int32_t x43 = INT32_MIN;
	volatile int16_t x44 = 0;
	volatile int32_t t5 = 8482717;

    t5 = (x41==(x42-(x43-x44)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x46 = 2;
	volatile uint32_t x47 = UINT32_MAX;

    t6 = (x45==(x46-(x47-x48)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x49 = INT16_MIN;
	uint64_t x50 = 714513243834902LLU;
	volatile int32_t x52 = 23119;
	int32_t t7 = 531;

    t7 = (x49==(x50-(x51-x52)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x57 = INT16_MAX;
	volatile int16_t x58 = -1;
	int8_t x60 = INT8_MAX;
	int32_t t8 = 23472602;

    t8 = (x57==(x58-(x59-x60)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x62 = INT32_MIN;
	volatile int32_t t9 = -7594132;

    t9 = (x61==(x62-(x63-x64)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x65 = INT16_MIN;
	static uint16_t x66 = 75U;
	uint32_t x68 = UINT32_MAX;
	int32_t t10 = -293738;

    t10 = (x65==(x66-(x67-x68)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x69 = -1;
	uint64_t x70 = UINT64_MAX;
	int64_t x71 = -557565925985824911LL;
	int16_t x72 = -7003;
	volatile int32_t t11 = 41223234;

    t11 = (x69==(x70-(x71-x72)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x74 = -15076976505895133LL;
	static uint64_t x75 = 2395558324834475LLU;
	volatile uint8_t x76 = 19U;
	volatile int32_t t12 = 7260;

    t12 = (x73==(x74-(x75-x76)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x78 = -1LL;
	int16_t x80 = -1;

    t13 = (x77==(x78-(x79-x80)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x81 = UINT64_MAX;
	volatile int16_t x83 = -1;
	int16_t x84 = INT16_MIN;
	int32_t t14 = -6455;

    t14 = (x81==(x82-(x83-x84)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x91 = -1;
	int32_t t15 = -1;

    t15 = (x89==(x90-(x91-x92)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x93 = UINT64_MAX;
	static int64_t x94 = -21905784616990180LL;
	uint8_t x95 = 6U;
	int8_t x96 = -3;

    t16 = (x93==(x94-(x95-x96)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x97 = 6189U;
	uint64_t x99 = UINT64_MAX;

    t17 = (x97==(x98-(x99-x100)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x101 = -1;
	volatile uint32_t x102 = 8947U;
	static int32_t x103 = INT32_MIN;
	volatile int8_t x104 = -41;
	static int32_t t18 = -13271788;

    t18 = (x101==(x102-(x103-x104)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x105 = INT32_MIN;
	int64_t x106 = 7064LL;
	int16_t x107 = INT16_MAX;
	static int32_t x108 = -106422698;
	volatile int32_t t19 = 9280199;

    t19 = (x105==(x106-(x107-x108)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x109 = -211475;
	int32_t x110 = 34374;
	int8_t x112 = INT8_MIN;
	volatile int32_t t20 = 1517;

    t20 = (x109==(x110-(x111-x112)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x113 = 60132165U;
	uint32_t x115 = UINT32_MAX;
	int32_t x116 = -1;
	static volatile int32_t t21 = 81;

    t21 = (x113==(x114-(x115-x116)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x117 = -1;
	volatile int32_t x118 = 63120;
	int32_t x119 = -2709;
	static int8_t x120 = -1;

    t22 = (x117==(x118-(x119-x120)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x121 = UINT8_MAX;
	uint32_t x122 = 63931U;
	int64_t x123 = -1LL;
	int8_t x124 = INT8_MAX;
	int32_t t23 = 82088318;

    t23 = (x121==(x122-(x123-x124)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x125 = 1;
	int8_t x126 = INT8_MIN;
	uint32_t x127 = 1237U;
	int8_t x128 = INT8_MIN;
	int32_t t24 = -12;

    t24 = (x125==(x126-(x127-x128)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x130 = 10311U;
	int64_t x131 = -1LL;
	int32_t t25 = -6;

    t25 = (x129==(x130-(x131-x132)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x133 = 306762920U;
	volatile int32_t x136 = 26;
	int32_t t26 = -3976496;

    t26 = (x133==(x134-(x135-x136)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x141 = -8260;
	volatile int8_t x142 = -1;
	uint8_t x143 = 1U;
	static int16_t x144 = -1;
	int32_t t27 = 4311212;

    t27 = (x141==(x142-(x143-x144)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x145 = INT32_MIN;
	uint16_t x146 = UINT16_MAX;
	uint8_t x147 = 1U;
	int64_t x148 = 2482957280LL;
	static volatile int32_t t28 = 2100;

    t28 = (x145==(x146-(x147-x148)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x149 = -1;
	int32_t x150 = 975907;
	int8_t x151 = 3;
	uint32_t x152 = UINT32_MAX;
	volatile int32_t t29 = -5562112;

    t29 = (x149==(x150-(x151-x152)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x157 = -1;
	uint16_t x158 = UINT16_MAX;
	static int16_t x160 = -260;
	int32_t t30 = 33432381;

    t30 = (x157==(x158-(x159-x160)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x161 = INT16_MIN;
	int32_t x162 = -24120;
	uint8_t x163 = 5U;
	int8_t x164 = INT8_MAX;
	volatile int32_t t31 = 27310;

    t31 = (x161==(x162-(x163-x164)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x165 = 1651U;
	static uint16_t x166 = 7U;
	static int32_t x167 = INT32_MIN;

    t32 = (x165==(x166-(x167-x168)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x169 = INT32_MIN;
	int8_t x170 = 1;
	int64_t x171 = -5821698878LL;
	static int32_t t33 = 830;

    t33 = (x169==(x170-(x171-x172)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x177 = INT32_MAX;
	int64_t x178 = -515978885992232LL;
	static int16_t x179 = -1471;
	volatile int8_t x180 = 28;
	volatile int32_t t34 = -43000103;

    t34 = (x177==(x178-(x179-x180)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x182 = INT16_MIN;
	int16_t x183 = INT16_MIN;
	volatile uint64_t x184 = 70289LLU;
	int32_t t35 = -232452;

    t35 = (x181==(x182-(x183-x184)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x185 = 0U;
	int64_t x186 = INT64_MIN;
	uint64_t x187 = UINT64_MAX;
	uint32_t x188 = UINT32_MAX;

    t36 = (x185==(x186-(x187-x188)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x189 = 6LLU;
	static int8_t x190 = INT8_MAX;
	volatile uint32_t x192 = 2U;
	int32_t t37 = 13;

    t37 = (x189==(x190-(x191-x192)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x197 = -282349LL;
	volatile int16_t x198 = -6;
	volatile int64_t x200 = INT64_MAX;
	int32_t t38 = -82399505;

    t38 = (x197==(x198-(x199-x200)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x201 = 81U;
	int16_t x202 = -862;
	volatile int8_t x203 = -3;
	volatile int32_t t39 = 255332;

    t39 = (x201==(x202-(x203-x204)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int32_t x205 = INT32_MIN;
	uint8_t x206 = 1U;
	int32_t x207 = -1;
	int8_t x208 = INT8_MAX;
	static volatile int32_t t40 = 1;

    t40 = (x205==(x206-(x207-x208)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x209 = INT16_MAX;
	int16_t x211 = INT16_MIN;
	static int32_t t41 = -77;

    t41 = (x209==(x210-(x211-x212)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x217 = 45523775030711LL;
	static int8_t x218 = INT8_MIN;
	int64_t x219 = INT64_MAX;
	int64_t x220 = 13275347893365LL;
	static int32_t t42 = 122;

    t42 = (x217==(x218-(x219-x220)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x222 = -1;
	int8_t x224 = -1;
	static volatile int32_t t43 = 1;

    t43 = (x221==(x222-(x223-x224)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x225 = INT16_MIN;
	int8_t x226 = INT8_MIN;
	volatile int8_t x227 = -1;
	static int16_t x228 = 6;

    t44 = (x225==(x226-(x227-x228)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x229 = UINT64_MAX;
	int64_t x231 = 105597379083000287LL;
	volatile int8_t x232 = -1;
	static int32_t t45 = -1384;

    t45 = (x229==(x230-(x231-x232)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x233 = UINT16_MAX;
	volatile int8_t x234 = -3;
	int32_t x235 = INT32_MAX;
	int64_t x236 = 1839LL;

    t46 = (x233==(x234-(x235-x236)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x237 = UINT8_MAX;
	volatile int16_t x239 = -1;
	uint32_t x240 = UINT32_MAX;
	volatile int32_t t47 = -775;

    t47 = (x237==(x238-(x239-x240)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x244 = -29;
	static volatile int32_t t48 = -2737;

    t48 = (x241==(x242-(x243-x244)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x245 = -1;
	uint16_t x246 = 1686U;
	uint8_t x247 = 13U;
	int32_t x248 = 1978;
	volatile int32_t t49 = 1;

    t49 = (x245==(x246-(x247-x248)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x254 = 704965060383786419LL;
	int8_t x255 = INT8_MIN;
	static int64_t x256 = 23493LL;
	int32_t t50 = 504921741;

    t50 = (x253==(x254-(x255-x256)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x258 = INT32_MIN;
	int8_t x259 = INT8_MIN;
	uint64_t x260 = 992154971576400624LLU;

    t51 = (x257==(x258-(x259-x260)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x261 = UINT8_MAX;
	int32_t x262 = INT32_MIN;
	volatile int32_t t52 = 258285;

    t52 = (x261==(x262-(x263-x264)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x273 = 33744554292LL;
	volatile int16_t x275 = -1;
	int32_t t53 = -475197;

    t53 = (x273==(x274-(x275-x276)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x277 = UINT8_MAX;
	uint64_t x278 = 186LLU;
	volatile int32_t x279 = INT32_MIN;
	static int16_t x280 = -1;
	volatile int32_t t54 = 221693726;

    t54 = (x277==(x278-(x279-x280)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x281 = 253504;
	static volatile int32_t x282 = INT32_MAX;
	int8_t x283 = INT8_MIN;
	int64_t x284 = 1086661783573LL;
	int32_t t55 = -16364;

    t55 = (x281==(x282-(x283-x284)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x289 = 0LL;
	int8_t x290 = INT8_MAX;
	int8_t x291 = -1;
	int8_t x292 = INT8_MAX;
	int32_t t56 = 56;

    t56 = (x289==(x290-(x291-x292)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x294 = 124956U;
	volatile uint8_t x295 = 60U;
	int32_t x296 = -1;

    t57 = (x293==(x294-(x295-x296)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x297 = -1;
	volatile int8_t x298 = -1;
	static int16_t x299 = INT16_MIN;
	static int8_t x300 = -2;
	static volatile int32_t t58 = -3898;

    t58 = (x297==(x298-(x299-x300)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x301 = -546463;
	int32_t x302 = -184;
	uint32_t x304 = 125800767U;
	volatile int32_t t59 = 1967;

    t59 = (x301==(x302-(x303-x304)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x305 = 74467U;
	uint8_t x306 = 4U;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t60 = -58945327;

    t60 = (x305==(x306-(x307-x308)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x309 = -1LL;
	static uint16_t x310 = 52U;
	uint8_t x311 = UINT8_MAX;
	uint32_t x312 = 359481960U;
	int32_t t61 = -2208828;

    t61 = (x309==(x310-(x311-x312)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x313 = INT16_MAX;
	int32_t x314 = 1619486;
	volatile int16_t x315 = -174;
	static int32_t x316 = INT32_MIN;
	static volatile int32_t t62 = -2;

    t62 = (x313==(x314-(x315-x316)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x317 = 59U;
	uint64_t x319 = UINT64_MAX;
	int64_t x320 = INT64_MIN;
	int32_t t63 = 1959;

    t63 = (x317==(x318-(x319-x320)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x321 = -12;
	int16_t x322 = INT16_MIN;
	int16_t x323 = INT16_MIN;
	int8_t x324 = -14;

    t64 = (x321==(x322-(x323-x324)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x326 = -4;
	int32_t x327 = 1678154;
	static int8_t x328 = 1;
	int32_t t65 = 119685;

    t65 = (x325==(x326-(x327-x328)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x329 = INT32_MIN;
	static int8_t x332 = INT8_MIN;
	volatile int32_t t66 = 18809;

    t66 = (x329==(x330-(x331-x332)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x333 = -1;
	uint16_t x334 = 14592U;
	uint8_t x335 = UINT8_MAX;
	static int32_t t67 = -1;

    t67 = (x333==(x334-(x335-x336)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x337 = 154;
	int32_t x339 = -1;
	uint16_t x340 = 1891U;
	int32_t t68 = 1986;

    t68 = (x337==(x338-(x339-x340)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x341 = INT16_MAX;
	static int16_t x343 = INT16_MIN;
	static int32_t x344 = INT32_MIN;
	static volatile int32_t t69 = -82968;

    t69 = (x341==(x342-(x343-x344)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint16_t x346 = UINT16_MAX;
	int32_t x347 = -6405;
	static int8_t x348 = INT8_MIN;
	static volatile int32_t t70 = 214687068;

    t70 = (x345==(x346-(x347-x348)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x349 = -1;
	static int64_t x350 = -10LL;
	int32_t x351 = -13701106;
	uint16_t x352 = UINT16_MAX;

    t71 = (x349==(x350-(x351-x352)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x353 = 14028;
	int16_t x354 = 9928;
	volatile int8_t x355 = INT8_MIN;
	volatile uint32_t x356 = 39053978U;
	int32_t t72 = -59;

    t72 = (x353==(x354-(x355-x356)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x357 = UINT8_MAX;
	int8_t x358 = 46;
	uint16_t x359 = 5431U;
	volatile int16_t x360 = INT16_MIN;
	int32_t t73 = 86096;

    t73 = (x357==(x358-(x359-x360)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x366 = UINT8_MAX;
	static int32_t x368 = INT32_MIN;
	int32_t t74 = -8546494;

    t74 = (x365==(x366-(x367-x368)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x370 = INT64_MIN;
	static int16_t x371 = -3504;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t75 = 1835;

    t75 = (x369==(x370-(x371-x372)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x378 = 64012U;
	volatile int16_t x380 = INT16_MIN;

    t76 = (x377==(x378-(x379-x380)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x381 = UINT16_MAX;
	int32_t x382 = INT32_MIN;
	int32_t x384 = 107;
	volatile int32_t t77 = 5;

    t77 = (x381==(x382-(x383-x384)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x385 = 118;
	uint32_t x386 = UINT32_MAX;
	volatile int32_t t78 = 14426;

    t78 = (x385==(x386-(x387-x388)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x389 = 72068;
	uint32_t x390 = 6529736U;

    t79 = (x389==(x390-(x391-x392)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x393 = INT16_MAX;
	uint32_t x394 = 99829526U;
	int16_t x395 = INT16_MIN;
	uint64_t x396 = 3987915LLU;
	int32_t t80 = -1;

    t80 = (x393==(x394-(x395-x396)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x397 = -1;
	uint8_t x399 = 1U;
	uint64_t x400 = 302771LLU;
	volatile int32_t t81 = 8067285;

    t81 = (x397==(x398-(x399-x400)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x401 = 6591966LLU;
	int64_t x402 = -1LL;
	volatile uint32_t x403 = UINT32_MAX;
	int32_t t82 = 116823;

    t82 = (x401==(x402-(x403-x404)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x405 = INT64_MIN;
	int16_t x406 = INT16_MAX;
	int32_t x407 = 103545909;
	int8_t x408 = -1;
	volatile int32_t t83 = 27;

    t83 = (x405==(x406-(x407-x408)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x409 = INT64_MIN;
	static uint8_t x410 = 2U;
	int32_t x411 = -1;
	int32_t t84 = 91692;

    t84 = (x409==(x410-(x411-x412)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x414 = INT32_MIN;
	int16_t x415 = INT16_MAX;
	volatile int64_t x416 = -431398LL;
	int32_t t85 = -13;

    t85 = (x413==(x414-(x415-x416)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x421 = UINT64_MAX;
	static uint16_t x422 = UINT16_MAX;
	volatile int16_t x423 = -12;
	static int32_t x424 = 28701;
	volatile int32_t t86 = 10502;

    t86 = (x421==(x422-(x423-x424)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x426 = INT32_MIN;
	int8_t x427 = -1;
	int32_t x428 = 0;

    t87 = (x425==(x426-(x427-x428)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint16_t x429 = 5220U;
	int64_t x430 = -7782998582957817LL;
	int32_t x431 = INT32_MIN;
	volatile int8_t x432 = -1;
	int32_t t88 = -124;

    t88 = (x429==(x430-(x431-x432)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x435 = UINT32_MAX;
	static int16_t x436 = INT16_MAX;
	volatile int32_t t89 = 1884584;

    t89 = (x433==(x434-(x435-x436)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x438 = INT32_MIN;
	uint64_t x439 = UINT64_MAX;
	int32_t x440 = INT32_MIN;
	static int32_t t90 = -130323149;

    t90 = (x437==(x438-(x439-x440)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x442 = INT32_MIN;
	static int32_t x444 = INT32_MIN;
	static volatile int32_t t91 = 1020944388;

    t91 = (x441==(x442-(x443-x444)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint64_t x445 = 26027050LLU;
	volatile int8_t x447 = INT8_MIN;
	volatile int32_t x448 = INT32_MIN;
	volatile int32_t t92 = -379;

    t92 = (x445==(x446-(x447-x448)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x453 = INT64_MIN;
	static int8_t x454 = -1;
	static uint64_t x455 = 14484725586608252LLU;
	int32_t t93 = 885113;

    t93 = (x453==(x454-(x455-x456)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x461 = INT64_MIN;
	volatile int64_t x462 = INT64_MAX;
	uint16_t x464 = 10U;
	int32_t t94 = 1445010;

    t94 = (x461==(x462-(x463-x464)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x465 = -30;
	uint32_t x466 = 2128866U;
	static uint64_t x467 = 1163LLU;
	static uint64_t x468 = 30667119704088703LLU;
	int32_t t95 = 60400;

    t95 = (x465==(x466-(x467-x468)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x481 = 13190U;
	volatile int32_t x482 = -3632;
	uint32_t x483 = 102140293U;
	volatile uint16_t x484 = UINT16_MAX;

    t96 = (x481==(x482-(x483-x484)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x485 = 2236U;
	static uint32_t x486 = 30967225U;
	volatile int64_t x487 = -594LL;
	int64_t x488 = -3410650324375LL;
	volatile int32_t t97 = 1;

    t97 = (x485==(x486-(x487-x488)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x489 = 33188494;
	static uint32_t x491 = UINT32_MAX;
	volatile int32_t t98 = -2;

    t98 = (x489==(x490-(x491-x492)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x494 = 463U;
	int8_t x495 = INT8_MIN;
	int8_t x496 = INT8_MAX;

    t99 = (x493==(x494-(x495-x496)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x501 = 44U;
	uint8_t x502 = 40U;
	int8_t x503 = INT8_MIN;

    t100 = (x501==(x502-(x503-x504)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x505 = 709420;
	int16_t x506 = INT16_MAX;
	uint16_t x507 = 936U;
	uint16_t x508 = UINT16_MAX;
	int32_t t101 = -439417;

    t101 = (x505==(x506-(x507-x508)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x509 = INT8_MIN;
	int8_t x511 = INT8_MIN;
	uint8_t x512 = 125U;
	volatile int32_t t102 = 198096;

    t102 = (x509==(x510-(x511-x512)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x513 = INT8_MAX;
	uint16_t x516 = UINT16_MAX;
	static volatile int32_t t103 = -38854;

    t103 = (x513==(x514-(x515-x516)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x517 = INT8_MIN;
	static volatile uint32_t x518 = UINT32_MAX;
	int32_t x519 = -90307;
	volatile int32_t t104 = -2771;

    t104 = (x517==(x518-(x519-x520)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x521 = UINT64_MAX;
	uint64_t x522 = 1993372238131592242LLU;
	int32_t x523 = -147957189;
	uint16_t x524 = UINT16_MAX;
	int32_t t105 = -116929;

    t105 = (x521==(x522-(x523-x524)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x525 = INT16_MIN;
	static int32_t x526 = INT32_MIN;
	static volatile int32_t x527 = -1;
	int8_t x528 = INT8_MAX;
	int32_t t106 = -15039;

    t106 = (x525==(x526-(x527-x528)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x529 = INT16_MAX;
	uint32_t x530 = 486U;
	volatile int32_t x531 = -1;
	volatile int32_t t107 = 113590911;

    t107 = (x529==(x530-(x531-x532)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x533 = 44U;
	int64_t x536 = -1LL;
	int32_t t108 = 49728464;

    t108 = (x533==(x534-(x535-x536)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x541 = UINT64_MAX;
	int8_t x542 = 0;
	int32_t t109 = -7967;

    t109 = (x541==(x542-(x543-x544)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x545 = -1;
	static int32_t x546 = INT32_MAX;
	volatile uint64_t x547 = UINT64_MAX;

    t110 = (x545==(x546-(x547-x548)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x554 = 50928;
	int32_t x555 = INT32_MIN;
	int32_t x556 = INT32_MIN;
	static volatile int32_t t111 = -3740;

    t111 = (x553==(x554-(x555-x556)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x561 = 2U;
	int64_t x563 = -1LL;
	int64_t x564 = -1LL;
	int32_t t112 = -4578635;

    t112 = (x561==(x562-(x563-x564)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x565 = INT64_MAX;
	int64_t x566 = INT64_MAX;
	static int32_t x567 = -926;
	volatile int32_t t113 = -818627;

    t113 = (x565==(x566-(x567-x568)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x569 = INT16_MAX;
	int64_t x570 = INT64_MIN;
	int16_t x571 = INT16_MIN;
	int32_t x572 = 3;
	int32_t t114 = -26840688;

    t114 = (x569==(x570-(x571-x572)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x573 = UINT16_MAX;
	int16_t x574 = -4023;
	int32_t x575 = INT32_MIN;
	uint32_t x576 = UINT32_MAX;
	int32_t t115 = -115805768;

    t115 = (x573==(x574-(x575-x576)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x577 = INT32_MAX;
	int64_t x578 = 100935956384LL;
	int8_t x579 = -1;
	volatile int32_t t116 = -1;

    t116 = (x577==(x578-(x579-x580)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x586 = -1;
	int32_t x588 = 10;
	volatile int32_t t117 = -49155;

    t117 = (x585==(x586-(x587-x588)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x591 = -1;
	int16_t x592 = -1;

    t118 = (x589==(x590-(x591-x592)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x597 = 4;
	int32_t x598 = -1;
	uint32_t x599 = 826212221U;
	int64_t x600 = INT64_MAX;

    t119 = (x597==(x598-(x599-x600)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x605 = INT16_MIN;
	int64_t x606 = INT64_MAX;
	int32_t x607 = 224372419;
	int32_t t120 = -402;

    t120 = (x605==(x606-(x607-x608)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x609 = INT64_MAX;
	volatile uint64_t x612 = UINT64_MAX;
	volatile int32_t t121 = -253287030;

    t121 = (x609==(x610-(x611-x612)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x613 = INT8_MIN;
	uint32_t x614 = UINT32_MAX;
	uint16_t x615 = 2752U;
	volatile int16_t x616 = 111;
	int32_t t122 = -589;

    t122 = (x613==(x614-(x615-x616)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x621 = INT32_MIN;
	int32_t x622 = INT32_MAX;
	static uint8_t x624 = 3U;
	volatile int32_t t123 = -2;

    t123 = (x621==(x622-(x623-x624)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x626 = -262226LL;
	static uint32_t x628 = 6025115U;
	int32_t t124 = 2358103;

    t124 = (x625==(x626-(x627-x628)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint16_t x629 = UINT16_MAX;
	uint16_t x630 = UINT16_MAX;
	int64_t x631 = -2867LL;
	int32_t t125 = -8;

    t125 = (x629==(x630-(x631-x632)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x633 = INT32_MIN;
	uint8_t x634 = 2U;
	int16_t x635 = -1;
	int64_t x636 = -1LL;

    t126 = (x633==(x634-(x635-x636)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x637 = -1;
	int16_t x639 = -1;
	volatile int32_t t127 = -80;

    t127 = (x637==(x638-(x639-x640)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x645 = -1LL;
	int16_t x647 = -101;

    t128 = (x645==(x646-(x647-x648)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x649 = 125767U;
	static volatile uint32_t x650 = 83839U;
	int8_t x651 = 2;
	int32_t t129 = -27636048;

    t129 = (x649==(x650-(x651-x652)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x653 = INT32_MAX;
	volatile uint32_t x654 = UINT32_MAX;
	int32_t x655 = -331276;
	static uint8_t x656 = 2U;
	int32_t t130 = -33121043;

    t130 = (x653==(x654-(x655-x656)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x657 = -1LL;
	int32_t x658 = -1;
	static int64_t x659 = -7LL;
	int16_t x660 = 166;
	int32_t t131 = -2897314;

    t131 = (x657==(x658-(x659-x660)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x661 = -1785725;
	volatile int32_t x662 = INT32_MIN;
	volatile int16_t x663 = -1;
	static int64_t x664 = 3710155477420LL;
	int32_t t132 = 5;

    t132 = (x661==(x662-(x663-x664)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x665 = INT64_MIN;
	int16_t x667 = INT16_MAX;
	int32_t t133 = 984726490;

    t133 = (x665==(x666-(x667-x668)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x669 = 6U;
	volatile int32_t x670 = -31;
	int16_t x672 = INT16_MIN;
	volatile int32_t t134 = 172208317;

    t134 = (x669==(x670-(x671-x672)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x673 = UINT16_MAX;
	int64_t x674 = 3925634649LL;
	int16_t x675 = INT16_MIN;
	int16_t x676 = -1;
	static volatile int32_t t135 = -233782147;

    t135 = (x673==(x674-(x675-x676)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x685 = INT32_MIN;
	static uint32_t x686 = UINT32_MAX;
	int16_t x687 = INT16_MIN;
	volatile int16_t x688 = -1;
	volatile int32_t t136 = -398;

    t136 = (x685==(x686-(x687-x688)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x689 = -1;
	volatile int32_t x691 = -1;
	int16_t x692 = INT16_MIN;
	volatile int32_t t137 = -19;

    t137 = (x689==(x690-(x691-x692)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x695 = 25853LL;
	int8_t x696 = -8;
	int32_t t138 = 187;

    t138 = (x693==(x694-(x695-x696)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x698 = 6U;
	uint32_t x699 = UINT32_MAX;
	static int16_t x700 = 1;
	static int32_t t139 = 722509799;

    t139 = (x697==(x698-(x699-x700)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x703 = 98862604LL;
	volatile int32_t x704 = INT32_MIN;
	static volatile int32_t t140 = 7188643;

    t140 = (x701==(x702-(x703-x704)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x705 = UINT8_MAX;
	uint8_t x707 = 3U;
	static uint8_t x708 = 34U;
	int32_t t141 = 6644756;

    t141 = (x705==(x706-(x707-x708)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x710 = -94074;
	volatile int16_t x711 = INT16_MIN;
	int64_t x712 = -1LL;

    t142 = (x709==(x710-(x711-x712)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x713 = 13U;
	static volatile uint8_t x715 = 0U;
	volatile int32_t t143 = 1;

    t143 = (x713==(x714-(x715-x716)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x718 = INT16_MAX;
	volatile int16_t x720 = -1;
	int32_t t144 = -14011;

    t144 = (x717==(x718-(x719-x720)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x725 = UINT8_MAX;
	uint32_t x726 = UINT32_MAX;
	uint32_t x727 = 7684U;
	volatile int32_t x728 = INT32_MIN;
	static int32_t t145 = -1060407;

    t145 = (x725==(x726-(x727-x728)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x729 = 280947457520LL;
	int16_t x731 = -4;
	uint32_t x732 = 1251668U;
	volatile int32_t t146 = 4;

    t146 = (x729==(x730-(x731-x732)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x737 = 181300U;
	int32_t x739 = -4355;
	uint64_t x740 = UINT64_MAX;
	static int32_t t147 = 4;

    t147 = (x737==(x738-(x739-x740)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x742 = INT32_MIN;
	uint64_t x743 = 1008534760904511LLU;
	int64_t x744 = INT64_MIN;
	volatile int32_t t148 = -640359088;

    t148 = (x741==(x742-(x743-x744)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x745 = 1U;
	int8_t x746 = -1;
	volatile int16_t x747 = INT16_MIN;
	int32_t x748 = -1;
	int32_t t149 = 11543;

    t149 = (x745==(x746-(x747-x748)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x750 = INT16_MIN;
	int16_t x752 = INT16_MIN;

    t150 = (x749==(x750-(x751-x752)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x753 = INT16_MIN;
	volatile int32_t x754 = -1;
	int8_t x755 = -1;
	uint64_t x756 = 4165LLU;
	int32_t t151 = -40669948;

    t151 = (x753==(x754-(x755-x756)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x757 = 83255020696951LLU;
	int16_t x759 = -1;
	volatile int16_t x760 = -1;
	volatile int32_t t152 = 0;

    t152 = (x757==(x758-(x759-x760)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x761 = -1;
	int64_t x762 = -1LL;
	static int16_t x763 = INT16_MIN;
	uint8_t x764 = 30U;
	volatile int32_t t153 = -50625361;

    t153 = (x761==(x762-(x763-x764)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x765 = 668LLU;
	uint64_t x766 = 6LLU;
	int8_t x767 = 25;
	uint16_t x768 = UINT16_MAX;
	static int32_t t154 = 1;

    t154 = (x765==(x766-(x767-x768)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x769 = 41U;
	int64_t x770 = -1LL;
	volatile uint32_t x771 = 31083416U;
	uint64_t x772 = 28955845073813LLU;
	volatile int32_t t155 = -63;

    t155 = (x769==(x770-(x771-x772)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x773 = INT16_MAX;
	volatile uint16_t x774 = 2U;
	int8_t x775 = -24;
	static uint16_t x776 = 292U;
	volatile int32_t t156 = 15068;

    t156 = (x773==(x774-(x775-x776)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x780 = 0;
	volatile int32_t t157 = 43938;

    t157 = (x777==(x778-(x779-x780)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x785 = -1;
	static int64_t x786 = 5046688455321937LL;
	int16_t x787 = 751;
	static int64_t x788 = -76700LL;
	volatile int32_t t158 = -56785;

    t158 = (x785==(x786-(x787-x788)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x789 = UINT16_MAX;
	int16_t x791 = INT16_MIN;
	volatile int32_t t159 = -5914;

    t159 = (x789==(x790-(x791-x792)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x794 = INT32_MIN;
	volatile int32_t t160 = 1315600;

    t160 = (x793==(x794-(x795-x796)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x797 = -484220531LL;
	volatile int64_t x799 = -211779338303395LL;
	int64_t x800 = 2577755LL;
	volatile int32_t t161 = 16731;

    t161 = (x797==(x798-(x799-x800)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x802 = UINT64_MAX;
	int8_t x803 = INT8_MIN;
	int16_t x804 = INT16_MIN;
	volatile int32_t t162 = 296824;

    t162 = (x801==(x802-(x803-x804)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x813 = INT64_MIN;
	uint16_t x814 = 27U;
	volatile int32_t x815 = INT32_MAX;
	uint32_t x816 = UINT32_MAX;
	volatile int32_t t163 = 22723;

    t163 = (x813==(x814-(x815-x816)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x817 = INT64_MAX;
	volatile int8_t x818 = INT8_MIN;
	int64_t x819 = -1LL;
	volatile int32_t t164 = -26;

    t164 = (x817==(x818-(x819-x820)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int8_t x821 = INT8_MIN;
	uint8_t x822 = 47U;
	uint16_t x824 = UINT16_MAX;

    t165 = (x821==(x822-(x823-x824)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x825 = 914;
	uint16_t x826 = 2U;
	int64_t x827 = -243LL;
	int32_t t166 = 1;

    t166 = (x825==(x826-(x827-x828)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x829 = 772U;
	static int8_t x830 = INT8_MIN;
	int32_t x832 = -1;
	volatile int32_t t167 = 47133062;

    t167 = (x829==(x830-(x831-x832)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x836 = -2862820982LL;
	volatile int32_t t168 = -246188;

    t168 = (x833==(x834-(x835-x836)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x841 = INT64_MIN;
	static int64_t x842 = 17495057LL;
	int8_t x843 = -1;
	volatile int8_t x844 = INT8_MIN;
	static volatile int32_t t169 = 357829820;

    t169 = (x841==(x842-(x843-x844)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x849 = -1;
	int8_t x850 = -50;
	int16_t x851 = -127;
	int16_t x852 = -13;

    t170 = (x849==(x850-(x851-x852)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x853 = -1;
	volatile int8_t x854 = INT8_MIN;
	uint32_t x855 = 34U;
	volatile int64_t x856 = -27913308LL;
	int32_t t171 = -120071795;

    t171 = (x853==(x854-(x855-x856)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x858 = -1LL;
	int8_t x859 = INT8_MAX;
	int8_t x860 = 17;
	volatile int32_t t172 = -16573;

    t172 = (x857==(x858-(x859-x860)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x862 = -1;
	uint8_t x863 = 2U;
	volatile int64_t x864 = -3069177307382LL;
	volatile int32_t t173 = -361852;

    t173 = (x861==(x862-(x863-x864)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x865 = 449U;
	static volatile int8_t x866 = -1;
	uint32_t x867 = 1U;
	static int32_t t174 = 0;

    t174 = (x865==(x866-(x867-x868)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x869 = -321;
	uint32_t x871 = UINT32_MAX;
	uint32_t x872 = 66998671U;

    t175 = (x869==(x870-(x871-x872)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x873 = INT8_MIN;
	uint32_t x874 = UINT32_MAX;
	int64_t x875 = INT64_MAX;
	volatile uint32_t x876 = 11395101U;
	int32_t t176 = 11;

    t176 = (x873==(x874-(x875-x876)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x878 = 5876922U;
	uint32_t x879 = 5721151U;
	int32_t x880 = INT32_MIN;
	static volatile int32_t t177 = 107852855;

    t177 = (x877==(x878-(x879-x880)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x881 = 57831U;
	int32_t x882 = INT32_MIN;
	int8_t x883 = -1;
	volatile int16_t x884 = INT16_MAX;
	int32_t t178 = 22;

    t178 = (x881==(x882-(x883-x884)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x886 = UINT8_MAX;
	static int8_t x887 = INT8_MAX;
	static int32_t t179 = 82;

    t179 = (x885==(x886-(x887-x888)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x889 = 0U;
	volatile uint8_t x891 = 29U;
	static volatile int32_t t180 = 6;

    t180 = (x889==(x890-(x891-x892)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x893 = INT16_MIN;
	static int64_t x895 = -1LL;
	int16_t x896 = INT16_MIN;
	int32_t t181 = 107644877;

    t181 = (x893==(x894-(x895-x896)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x897 = INT64_MAX;
	static int8_t x898 = INT8_MIN;
	static int32_t x899 = 708186;

    t182 = (x897==(x898-(x899-x900)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x902 = UINT8_MAX;
	volatile uint64_t x903 = UINT64_MAX;
	volatile int64_t x904 = -2140845931566203LL;
	int32_t t183 = 68314756;

    t183 = (x901==(x902-(x903-x904)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x906 = 312U;
	static int16_t x907 = INT16_MIN;
	static volatile uint32_t x908 = UINT32_MAX;

    t184 = (x905==(x906-(x907-x908)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x909 = UINT8_MAX;
	volatile uint64_t x910 = 364158263601LLU;
	int32_t t185 = 64975;

    t185 = (x909==(x910-(x911-x912)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x917 = -1;
	volatile int32_t x918 = -10959618;
	static uint8_t x920 = 1U;
	volatile int32_t t186 = -5069756;

    t186 = (x917==(x918-(x919-x920)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x921 = INT32_MIN;
	int32_t x922 = -1;
	int16_t x923 = INT16_MAX;
	volatile int32_t t187 = -237;

    t187 = (x921==(x922-(x923-x924)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x925 = 24U;
	static int16_t x926 = -1;
	int8_t x927 = 6;
	int32_t x928 = 20;

    t188 = (x925==(x926-(x927-x928)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x930 = -93;
	volatile int16_t x931 = 1;
	uint8_t x932 = 107U;
	volatile int32_t t189 = -2651889;

    t189 = (x929==(x930-(x931-x932)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x933 = INT16_MAX;
	volatile int8_t x934 = INT8_MAX;
	uint16_t x935 = UINT16_MAX;
	volatile int8_t x936 = -2;
	volatile int32_t t190 = 210;

    t190 = (x933==(x934-(x935-x936)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x937 = 1U;
	int16_t x938 = -1;
	volatile uint32_t x939 = 3041208U;
	int16_t x940 = INT16_MAX;
	volatile int32_t t191 = -65107;

    t191 = (x937==(x938-(x939-x940)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x941 = 969352076;
	int16_t x942 = 6;
	int16_t x943 = 1906;
	uint64_t x944 = 94600970LLU;
	volatile int32_t t192 = -427;

    t192 = (x941==(x942-(x943-x944)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x945 = -1;
	uint8_t x946 = 51U;
	volatile int8_t x947 = 1;
	uint64_t x948 = 9908162LLU;

    t193 = (x945==(x946-(x947-x948)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x949 = -18250331LL;
	uint64_t x950 = 263850582061884LLU;
	int32_t x951 = 9384465;
	int32_t x952 = -25447;
	int32_t t194 = 2747403;

    t194 = (x949==(x950-(x951-x952)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x953 = 39721547181LLU;
	int16_t x956 = INT16_MAX;
	int32_t t195 = 454811697;

    t195 = (x953==(x954-(x955-x956)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x961 = 0;
	volatile int64_t x962 = INT64_MIN;
	int8_t x963 = INT8_MIN;
	volatile int64_t x964 = -1LL;
	volatile int32_t t196 = -15617619;

    t196 = (x961==(x962-(x963-x964)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x965 = UINT8_MAX;
	static int16_t x966 = INT16_MIN;
	static uint8_t x968 = 121U;

    t197 = (x965==(x966-(x967-x968)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x969 = 9403747U;
	uint64_t x970 = 212503LLU;
	static uint8_t x971 = UINT8_MAX;
	volatile uint8_t x972 = UINT8_MAX;
	int32_t t198 = -60;

    t198 = (x969==(x970-(x971-x972)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x973 = INT16_MIN;
	static volatile int64_t x974 = -1LL;
	uint16_t x975 = UINT16_MAX;
	static uint8_t x976 = 32U;
	volatile int32_t t199 = -14447431;

    t199 = (x973==(x974-(x975-x976)));

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

