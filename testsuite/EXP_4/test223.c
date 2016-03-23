
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

static volatile uint16_t x10 = 27U;
static uint16_t x12 = 25U;
int64_t x17 = INT64_MIN;
volatile uint32_t x20 = 5283U;
int16_t x22 = INT16_MAX;
static uint32_t x31 = UINT32_MAX;
uint32_t t6 = UINT32_MAX;
int64_t x37 = INT64_MIN;
uint32_t x40 = 22207958U;
static uint64_t x43 = 11718191703226116LLU;
int16_t x58 = 342;
static int32_t x59 = 0;
int8_t x66 = INT8_MIN;
volatile int16_t x69 = 993;
int32_t t13 = -152451;
int64_t x77 = -269894915970LL;
static int64_t x79 = INT64_MAX;
volatile int64_t x81 = INT64_MIN;
uint32_t x83 = 1484986U;
static int8_t x85 = INT8_MIN;
int32_t x90 = -1;
uint64_t x102 = 0LLU;
int8_t x104 = INT8_MIN;
volatile int32_t x109 = INT32_MAX;
int8_t x122 = INT8_MAX;
int64_t t22 = 24LL;
volatile int64_t x138 = 822LL;
int64_t x144 = -1LL;
volatile int32_t t26 = 1246655;
uint64_t t27 = 972193707810082914LLU;
int32_t x161 = INT32_MAX;
static int64_t x166 = INT64_MIN;
static uint16_t x168 = 2U;
int8_t x170 = 3;
uint16_t x171 = 2519U;
static int32_t t31 = 1776823;
uint64_t t32 = UINT64_MAX;
uint8_t x189 = 1U;
uint32_t x191 = 137690U;
volatile int16_t x205 = -1;
int16_t x212 = -1;
volatile int32_t t37 = 0;
uint16_t x219 = 4U;
static volatile int8_t x220 = 5;
int64_t x230 = INT64_MIN;
int16_t x233 = INT16_MIN;
int64_t x234 = INT64_MAX;
volatile uint8_t x235 = 14U;
uint16_t x237 = 309U;
volatile uint64_t t44 = 37186852857396LLU;
int8_t x247 = INT8_MIN;
int32_t x257 = INT32_MIN;
int32_t x269 = INT32_MIN;
static int32_t x273 = INT32_MIN;
uint64_t x275 = UINT64_MAX;
static uint64_t x277 = 167976552512LLU;
static int8_t x280 = INT8_MAX;
int8_t x291 = INT8_MIN;
static volatile uint32_t t56 = 7U;
int64_t x302 = -49314006799702735LL;
volatile int32_t x305 = -4015395;
static uint64_t x311 = UINT64_MAX;
int16_t x313 = 55;
uint64_t x326 = 7692081629202497LLU;
volatile int32_t x340 = INT32_MIN;
volatile int32_t t64 = 7641162;
int16_t x348 = INT16_MAX;
volatile int32_t t65 = -9255;
volatile int32_t x350 = -2925821;
int32_t t66 = -57;
volatile int16_t x360 = INT16_MIN;
volatile uint16_t x363 = 104U;
int32_t x365 = 7566164;
uint64_t x366 = 8283985106128637035LLU;
int64_t x369 = INT64_MAX;
volatile uint64_t t73 = UINT64_MAX;
uint64_t x385 = 97000LLU;
static uint64_t t74 = 12013793093640887LLU;
int8_t x391 = INT8_MAX;
static int8_t x395 = INT8_MIN;
static uint64_t x400 = 3154858757877827952LLU;
int32_t x401 = -15;
uint16_t x402 = UINT16_MAX;
volatile uint64_t t79 = 152521LLU;
int8_t x410 = -1;
uint8_t x423 = 100U;
int8_t x426 = -1;
volatile int16_t x427 = -1;
volatile int64_t t83 = 50372692LL;
int32_t x442 = -4935;
static int16_t x444 = INT16_MIN;
static volatile uint64_t t86 = 12LLU;
uint16_t x466 = 1675U;
int32_t x476 = 3455397;
uint8_t x477 = UINT8_MAX;
int16_t x479 = -643;
volatile int64_t t95 = 32406LL;
static volatile int64_t x490 = -1LL;
int64_t t96 = INT64_MAX;
uint64_t x498 = 2141163320LLU;
uint64_t x499 = 0LLU;
int8_t x507 = -1;
static uint16_t x508 = UINT16_MAX;
int16_t x509 = INT16_MIN;
int64_t t101 = 23412275875LL;
int64_t x520 = -1LL;
int64_t t103 = 469710LL;
int16_t x525 = INT16_MIN;
int16_t x531 = 1;
int64_t x533 = -283LL;
static int32_t x535 = -969369;
int16_t x540 = INT16_MAX;
volatile uint64_t t107 = 755905335328181LLU;
int16_t x542 = -1;
static int16_t x544 = INT16_MIN;
volatile uint64_t t108 = 1150740139592818210LLU;
int32_t x546 = -1;
volatile int16_t x554 = INT16_MAX;
int16_t x570 = INT16_MIN;
int8_t x572 = -1;
int8_t x573 = -1;
volatile int64_t t116 = 362632LL;
int16_t x598 = INT16_MAX;
int32_t x605 = 432391;
volatile uint32_t t122 = 2761U;
int64_t x627 = INT64_MIN;
uint64_t x628 = UINT64_MAX;
static int64_t x629 = -1LL;
static uint32_t x632 = UINT32_MAX;
static volatile uint32_t t127 = 1779648U;
volatile int64_t t128 = -7058LL;
static volatile uint64_t t129 = 15072961671LLU;
static int16_t x648 = -1;
uint64_t t130 = 51384LLU;
volatile uint64_t x657 = UINT64_MAX;
int16_t x660 = INT16_MAX;
int16_t x661 = -6;
volatile uint8_t x663 = 5U;
int8_t x686 = INT8_MIN;
volatile int32_t x687 = INT32_MIN;
volatile uint64_t t135 = UINT64_MAX;
volatile uint64_t x696 = UINT64_MAX;
volatile int32_t x704 = -2;
volatile uint64_t t139 = UINT64_MAX;
int64_t x705 = -11516244838707355LL;
int16_t x713 = INT16_MIN;
static uint64_t t143 = 11680356LLU;
uint64_t t145 = UINT64_MAX;
volatile int64_t x736 = -1LL;
int8_t x739 = -1;
static int8_t x740 = INT8_MAX;
int32_t x741 = INT32_MIN;
static uint64_t x745 = 39644631105LLU;
uint8_t x746 = 0U;
volatile int8_t x747 = -26;
int8_t x753 = INT8_MAX;
volatile int8_t x755 = -33;
int8_t x761 = INT8_MIN;
uint8_t x778 = UINT8_MAX;
uint16_t x790 = 55U;
int64_t t161 = 70425334597LL;
static uint32_t x798 = 3624U;
static int16_t x799 = -1;
volatile uint64_t t162 = 8379328064100625LLU;
uint8_t x803 = UINT8_MAX;
int8_t x809 = 1;
static int32_t x814 = -1;
int8_t x817 = INT8_MAX;
uint64_t t167 = 7883089LLU;
static uint32_t x830 = UINT32_MAX;
int32_t x831 = 12;
int64_t x834 = -1LL;
uint8_t x842 = 11U;
uint64_t t172 = 473000LLU;
int16_t x853 = INT16_MIN;
static uint64_t t175 = 69916182LLU;
volatile int32_t x860 = -43;
volatile int16_t x873 = -1;
int32_t x876 = INT32_MAX;
volatile uint8_t x879 = 62U;
volatile int32_t t180 = -918;
uint8_t x889 = UINT8_MAX;
volatile uint64_t t181 = 1608644LLU;
uint64_t x893 = UINT64_MAX;
static int8_t x896 = -1;
volatile int64_t x898 = -1829672LL;
volatile int64_t t183 = -2118635669344401LL;
int8_t x906 = -1;
static volatile int16_t x907 = INT16_MIN;
int8_t x908 = INT8_MAX;
volatile uint8_t x910 = UINT8_MAX;
volatile uint64_t t186 = 12845383244784257LLU;
static volatile uint32_t x923 = UINT32_MAX;
static volatile uint64_t t188 = 9LLU;
uint32_t t189 = 341141837U;
int64_t x938 = INT64_MIN;
volatile int8_t x944 = INT8_MAX;
int32_t x948 = -510;
volatile int32_t t195 = 584723;
static int8_t x962 = INT8_MAX;
volatile int32_t t196 = -137932;
int16_t x973 = INT16_MIN;
int8_t x974 = -57;
uint8_t x980 = 10U;
uint64_t t199 = 52371167857197LLU;


void f0(void) {
    	volatile int64_t x1 = INT64_MIN;
	volatile int64_t x2 = -1LL;
	uint8_t x3 = UINT8_MAX;
	volatile uint16_t x4 = 5U;
	static int64_t t0 = 38466750164LL;

    t0 = (x1|(x2-(x3-x4)));

    if (t0 != -251LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 1U;
	volatile int64_t x6 = -23LL;
	static uint16_t x7 = 7319U;
	static uint8_t x8 = UINT8_MAX;
	int64_t t1 = 1624729162LL;

    t1 = (x5|(x6-(x7-x8)));

    if (t1 != -7087LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -106;
	int16_t x11 = INT16_MIN;
	int32_t t2 = 472688;

    t2 = (x9|(x10-(x11-x12)));

    if (t2 != -74) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x18 = -1LL;
	int32_t x19 = INT32_MIN;
	int64_t t3 = 360281310836497LL;

    t3 = (x17|(x18-(x19-x20)));

    if (t3 != -2147478366LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MIN;
	int16_t x23 = 56;
	int8_t x24 = INT8_MIN;
	int64_t t4 = 3398253LL;

    t4 = (x21|(x22-(x23-x24)));

    if (t4 != -9223372036854743225LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = INT8_MIN;
	volatile int16_t x26 = INT16_MIN;
	uint16_t x27 = 7U;
	int8_t x28 = INT8_MAX;
	int32_t t5 = -897660;

    t5 = (x25|(x26-(x27-x28)));

    if (t5 != -8) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x29 = UINT32_MAX;
	uint32_t x30 = 2947U;
	static int16_t x32 = -291;

    t6 = (x29|(x30-(x31-x32)));

    if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x33 = 27U;
	int16_t x34 = 6319;
	int8_t x35 = -1;
	uint64_t x36 = UINT64_MAX;
	uint64_t t7 = 17166656812LLU;

    t7 = (x33|(x34-(x35-x36)));

    if (t7 != 6335LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x38 = 25;
	volatile int16_t x39 = 686;
	volatile int64_t t8 = -1877LL;

    t8 = (x37|(x38-(x39-x40)));

    if (t8 != -9223372036832568511LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x41 = 0U;
	uint32_t x42 = 1519U;
	volatile int32_t x44 = -6279960;
	static volatile uint64_t t9 = 3LLU;

    t9 = (x41|(x42-(x43-x44)));

    if (t9 != 18435025882000047059LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = -1;
	int8_t x46 = INT8_MAX;
	volatile int64_t x47 = -20LL;
	int16_t x48 = INT16_MIN;
	int64_t t10 = -1LL;

    t10 = (x45|(x46-(x47-x48)));

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x57 = 26LLU;
	static int16_t x60 = INT16_MIN;
	uint64_t t11 = 1026680LLU;

    t11 = (x57|(x58-(x59-x60)));

    if (t11 != 18446744073709519198LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x65 = -26;
	int32_t x67 = -26399;
	static uint64_t x68 = 201852976724LLU;
	uint64_t t12 = 323LLU;

    t12 = (x65|(x66-(x67-x68)));

    if (t12 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x70 = 3430U;
	int32_t x71 = -16103631;
	uint8_t x72 = UINT8_MAX;

    t13 = (x69|(x70-(x71-x72)));

    if (t13 != 16107509) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x78 = 1;
	int16_t x80 = 142;
	int64_t t14 = -424037556LL;

    t14 = (x77|(x78-(x79-x80)));

    if (t14 != -269894915842LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x82 = -1;
	volatile uint8_t x84 = 13U;
	int64_t t15 = 30023LL;

    t15 = (x81|(x82-(x83-x84)));

    if (t15 != -9223372032561293486LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x86 = -1;
	int16_t x87 = 3644;
	int8_t x88 = -38;
	int32_t t16 = 3989559;

    t16 = (x85|(x86-(x87-x88)));

    if (t16 != -99) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x89 = UINT16_MAX;
	int32_t x91 = INT32_MIN;
	int8_t x92 = INT8_MIN;
	int32_t t17 = INT32_MAX;

    t17 = (x89|(x90-(x91-x92)));

    if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x101 = 411577LLU;
	uint8_t x103 = 76U;
	uint64_t t18 = 50217322279LLU;

    t18 = (x101|(x102-(x103-x104)));

    if (t18 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x110 = 7U;
	static int8_t x111 = 6;
	int16_t x112 = -12485;
	volatile int32_t t19 = -84977;

    t19 = (x109|(x110-(x111-x112)));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MIN;
	static int8_t x115 = INT8_MIN;
	uint64_t x116 = 1344935292916254LLU;
	uint64_t t20 = 44474LLU;

    t20 = (x113|(x114-(x115-x116)));

    if (t20 != 18446744073709551518LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x121 = INT64_MIN;
	int32_t x123 = -565801;
	int64_t x124 = -30172432656851LL;
	volatile int64_t t21 = 133686LL;

    t21 = (x121|(x122-(x123-x124)));

    if (t21 != -30172432090923LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x125 = 20U;
	int64_t x126 = -1LL;
	uint32_t x127 = 80477U;
	uint16_t x128 = 55U;

    t22 = (x125|(x126-(x127-x128)));

    if (t22 != -80419LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x129 = 6476U;
	static int16_t x130 = INT16_MIN;
	static int8_t x131 = -1;
	uint8_t x132 = 102U;
	int32_t t23 = -3832822;

    t23 = (x129|(x130-(x131-x132)));

    if (t23 != -26257) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x137 = -42351833321777383LL;
	uint8_t x139 = 3U;
	volatile int8_t x140 = INT8_MIN;
	int64_t t24 = -2163653828575LL;

    t24 = (x137|(x138-(x139-x140)));

    if (t24 != -42351833321777221LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x141 = 1;
	static uint8_t x142 = UINT8_MAX;
	int32_t x143 = INT32_MIN;
	volatile int64_t t25 = -1LL;

    t25 = (x141|(x142-(x143-x144)));

    if (t25 != 2147483903LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x145 = -1;
	int16_t x146 = INT16_MIN;
	int32_t x147 = INT32_MAX;
	int32_t x148 = INT32_MAX;

    t26 = (x145|(x146-(x147-x148)));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x157 = 2046559850495LL;
	volatile uint64_t x158 = 39930LLU;
	uint16_t x159 = 96U;
	uint16_t x160 = 133U;

    t27 = (x157|(x158-(x159-x160)));

    if (t27 != 2046559887359LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x162 = 454U;
	volatile int32_t x163 = -1;
	static volatile uint64_t x164 = 1916553LLU;
	uint64_t t28 = 195392190142082LLU;

    t28 = (x161|(x162-(x163-x164)));

    if (t28 != 2147483647LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x165 = INT8_MIN;
	static volatile int64_t x167 = -1LL;
	int64_t t29 = 424LL;

    t29 = (x165|(x166-(x167-x168)));

    if (t29 != -125LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x169 = UINT16_MAX;
	int8_t x172 = 3;
	static int32_t t30 = -119402331;

    t30 = (x169|(x170-(x171-x172)));

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x177 = 2553U;
	static int16_t x178 = INT16_MIN;
	int8_t x179 = 0;
	uint16_t x180 = 1U;

    t31 = (x177|(x178-(x179-x180)));

    if (t31 != -30215) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x185 = -1LL;
	static int8_t x186 = INT8_MIN;
	static uint64_t x187 = UINT64_MAX;
	static int16_t x188 = INT16_MIN;

    t32 = (x185|(x186-(x187-x188)));

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x190 = -1;
	int8_t x192 = INT8_MIN;
	volatile uint32_t t33 = 28U;

    t33 = (x189|(x190-(x191-x192)));

    if (t33 != 4294829477U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x193 = -14;
	static int32_t x194 = -1;
	uint8_t x195 = 6U;
	int8_t x196 = INT8_MIN;
	volatile int32_t t34 = -17112;

    t34 = (x193|(x194-(x195-x196)));

    if (t34 != -5) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x197 = INT64_MIN;
	uint8_t x198 = UINT8_MAX;
	uint8_t x199 = UINT8_MAX;
	uint64_t x200 = UINT64_MAX;
	uint64_t t35 = UINT64_MAX;

    t35 = (x197|(x198-(x199-x200)));

    if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x206 = UINT16_MAX;
	uint8_t x207 = 12U;
	static volatile int8_t x208 = 0;
	volatile int32_t t36 = -909490;

    t36 = (x205|(x206-(x207-x208)));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x209 = -1;
	int32_t x210 = INT32_MAX;
	int8_t x211 = -1;

    t37 = (x209|(x210-(x211-x212)));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x213 = 1;
	static uint64_t x214 = UINT64_MAX;
	static uint8_t x215 = 38U;
	volatile int32_t x216 = -1203;
	static uint64_t t38 = 0LLU;

    t38 = (x213|(x214-(x215-x216)));

    if (t38 != 18446744073709550375LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x217 = INT64_MIN;
	uint16_t x218 = 225U;
	static int64_t t39 = 222851130553LL;

    t39 = (x217|(x218-(x219-x220)));

    if (t39 != -9223372036854775582LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x221 = -1LL;
	volatile uint64_t x222 = UINT64_MAX;
	int16_t x223 = INT16_MIN;
	volatile int64_t x224 = INT64_MIN;
	volatile uint64_t t40 = UINT64_MAX;

    t40 = (x221|(x222-(x223-x224)));

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x225 = INT8_MIN;
	int16_t x226 = -2;
	int32_t x227 = -2712;
	volatile uint64_t x228 = UINT64_MAX;
	static uint64_t t41 = 469803456982468LLU;

    t41 = (x225|(x226-(x227-x228)));

    if (t41 != 18446744073709551509LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x229 = 3515;
	uint64_t x231 = 219306304LLU;
	uint32_t x232 = 3U;
	volatile uint64_t t42 = 2074450129LLU;

    t42 = (x229|(x230-(x231-x232)));

    if (t42 != 9223372036635471867LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x236 = UINT64_MAX;
	volatile uint64_t t43 = 1938LLU;

    t43 = (x233|(x234-(x235-x236)));

    if (t43 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x238 = 169787025552LLU;
	int16_t x239 = -1;
	static uint8_t x240 = 7U;

    t44 = (x237|(x238-(x239-x240)));

    if (t44 != 169787025853LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x241 = INT16_MIN;
	volatile uint32_t x242 = 36U;
	int16_t x243 = -8;
	volatile uint32_t x244 = 6085U;
	volatile uint32_t t45 = 120U;

    t45 = (x241|(x242-(x243-x244)));

    if (t45 != 4294940657U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x245 = 747118184246LLU;
	volatile int8_t x246 = -1;
	int8_t x248 = INT8_MIN;
	uint64_t t46 = UINT64_MAX;

    t46 = (x245|(x246-(x247-x248)));

    if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x249 = INT8_MAX;
	int32_t x250 = 497;
	volatile uint32_t x251 = 395U;
	static uint8_t x252 = 82U;
	uint32_t t47 = 738231U;

    t47 = (x249|(x250-(x251-x252)));

    if (t47 != 255U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x253 = 1;
	int16_t x254 = 3295;
	int64_t x255 = INT64_MAX;
	static volatile uint16_t x256 = UINT16_MAX;
	int64_t t48 = -23195602061525LL;

    t48 = (x253|(x254-(x255-x256)));

    if (t48 != -9223372036854706977LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int32_t x258 = INT32_MAX;
	int16_t x259 = -1059;
	int64_t x260 = -2506507LL;
	volatile int64_t t49 = -463383LL;

    t49 = (x257|(x258-(x259-x260)));

    if (t49 != -2505449LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x261 = 3011;
	volatile int64_t x262 = -114308515LL;
	uint16_t x263 = 7U;
	int8_t x264 = INT8_MIN;
	int64_t t50 = -6645049284204LL;

    t50 = (x261|(x262-(x263-x264)));

    if (t50 != -114308137LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x265 = 158U;
	static int8_t x266 = -1;
	int8_t x267 = INT8_MIN;
	static uint32_t x268 = 1U;
	static uint32_t t51 = 4636U;

    t51 = (x265|(x266-(x267-x268)));

    if (t51 != 158U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x270 = 20;
	int8_t x271 = 1;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t52 = 3389229;

    t52 = (x269|(x270-(x271-x272)));

    if (t52 != -2147483374) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x274 = INT32_MIN;
	volatile uint32_t x276 = 77553U;
	uint64_t t53 = 15832676693LLU;

    t53 = (x273|(x274-(x275-x276)));

    if (t53 != 18446744071562145522LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x278 = 3613210489LLU;
	int8_t x279 = -7;
	volatile uint64_t t54 = 2529878642LLU;

    t54 = (x277|(x278-(x279-x280)));

    if (t54 != 171253432319LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x285 = INT64_MIN;
	int64_t x286 = -1LL;
	uint32_t x287 = 39600U;
	static volatile int32_t x288 = -1;
	volatile int64_t t55 = 255657618001465762LL;

    t55 = (x285|(x286-(x287-x288)));

    if (t55 != -39602LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x289 = -229;
	uint32_t x290 = UINT32_MAX;
	uint32_t x292 = 967068U;

    t56 = (x289|(x290-(x291-x292)));

    if (t56 != 4294967067U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x297 = INT8_MIN;
	static int32_t x298 = INT32_MIN;
	int8_t x299 = INT8_MAX;
	int64_t x300 = 2LL;
	int64_t t57 = 9LL;

    t57 = (x297|(x298-(x299-x300)));

    if (t57 != -125LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x301 = INT8_MIN;
	static int32_t x303 = 1551;
	int8_t x304 = -1;
	volatile int64_t t58 = 2897024LL;

    t58 = (x301|(x302-(x303-x304)));

    if (t58 != -95LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x306 = -24819099958LL;
	volatile uint8_t x307 = 62U;
	int8_t x308 = -1;
	int64_t t59 = 7LL;

    t59 = (x305|(x306-(x307-x308)));

    if (t59 != -1392929LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x309 = -464;
	uint32_t x310 = 178U;
	int8_t x312 = INT8_MAX;
	static volatile uint64_t t60 = 256334261LLU;

    t60 = (x309|(x310-(x311-x312)));

    if (t60 != 18446744073709551410LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MAX;
	static uint16_t x316 = UINT16_MAX;
	volatile int32_t t61 = -3836412;

    t61 = (x313|(x314-(x315-x316)));

    if (t61 != 32695) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x321 = -4;
	int8_t x322 = -38;
	int32_t x323 = INT32_MIN;
	static uint64_t x324 = UINT64_MAX;
	volatile uint64_t t62 = 1798004691147LLU;

    t62 = (x321|(x322-(x323-x324)));

    if (t62 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x325 = 1U;
	int8_t x327 = INT8_MIN;
	int64_t x328 = -1LL;
	uint64_t t63 = 1494128319548LLU;

    t63 = (x325|(x326-(x327-x328)));

    if (t63 != 7692081629202625LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x337 = 127;
	static int8_t x338 = INT8_MAX;
	static volatile int8_t x339 = INT8_MIN;

    t64 = (x337|(x338-(x339-x340)));

    if (t64 != -2147483393) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x345 = INT8_MAX;
	int8_t x346 = INT8_MIN;
	volatile int8_t x347 = 0;

    t65 = (x345|(x346-(x347-x348)));

    if (t65 != 32639) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x349 = 1;
	int8_t x351 = INT8_MIN;
	volatile uint8_t x352 = 0U;

    t66 = (x349|(x350-(x351-x352)));

    if (t66 != -2925693) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x353 = 81958417LLU;
	volatile uint16_t x354 = 31826U;
	int16_t x355 = INT16_MAX;
	int8_t x356 = INT8_MAX;
	volatile uint64_t t67 = 16524LLU;

    t67 = (x353|(x354-(x355-x356)));

    if (t67 != 18446744073709551315LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x357 = INT8_MIN;
	int8_t x358 = 1;
	int64_t x359 = -1LL;
	volatile int64_t t68 = 5939529LL;

    t68 = (x357|(x358-(x359-x360)));

    if (t68 != -126LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x361 = 203740518375067LLU;
	uint16_t x362 = 14924U;
	uint16_t x364 = 20U;
	volatile uint64_t t69 = 2265995599965933LLU;

    t69 = (x361|(x362-(x363-x364)));

    if (t69 != 203740518383611LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x367 = 455510636627598LL;
	int64_t x368 = INT64_MAX;
	volatile uint64_t t70 = 2442853321302LLU;

    t70 = (x365|(x366-(x367-x368)));

    if (t70 != 17506901632351205340LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x370 = INT32_MIN;
	int16_t x371 = INT16_MAX;
	uint32_t x372 = 24U;
	volatile int64_t t71 = INT64_MAX;

    t71 = (x369|(x370-(x371-x372)));

    if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x373 = INT8_MIN;
	volatile int64_t x374 = 547645390697087LL;
	volatile uint32_t x375 = UINT32_MAX;
	volatile int8_t x376 = 1;
	int64_t t72 = 0LL;

    t72 = (x373|(x374-(x375-x376)));

    if (t72 != -127LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x377 = INT64_MAX;
	volatile int16_t x378 = INT16_MAX;
	static volatile uint16_t x379 = UINT16_MAX;
	uint64_t x380 = UINT64_MAX;

    t73 = (x377|(x378-(x379-x380)));

    if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x386 = -1;
	uint16_t x387 = UINT16_MAX;
	uint8_t x388 = 0U;

    t74 = (x385|(x386-(x387-x388)));

    if (t74 != 18446744073709517544LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x389 = 1;
	int32_t x390 = INT32_MAX;
	volatile int8_t x392 = INT8_MAX;
	int32_t t75 = INT32_MAX;

    t75 = (x389|(x390-(x391-x392)));

    if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int32_t x393 = 4578;
	int32_t x394 = -1;
	int8_t x396 = INT8_MIN;
	int32_t t76 = 507207;

    t76 = (x393|(x394-(x395-x396)));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x397 = INT64_MAX;
	volatile int64_t x398 = 6942575LL;
	int64_t x399 = INT64_MAX;
	volatile uint64_t t77 = UINT64_MAX;

    t77 = (x397|(x398-(x399-x400)));

    if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x403 = 510259;
	static int16_t x404 = INT16_MAX;
	volatile int32_t t78 = -725;

    t78 = (x401|(x402-(x403-x404)));

    if (t78 != -5) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x405 = 1;
	volatile uint32_t x406 = 44075U;
	int32_t x407 = -1;
	volatile uint64_t x408 = 156LLU;

    t79 = (x405|(x406-(x407-x408)));

    if (t79 != 44233LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x409 = INT32_MIN;
	static int8_t x411 = INT8_MAX;
	volatile int64_t x412 = -104288350042LL;
	int64_t t80 = -228466688788LL;

    t80 = (x409|(x410-(x411-x412)));

    if (t80 != -1209135066LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x421 = 2921807LLU;
	int8_t x422 = INT8_MIN;
	uint16_t x424 = 1U;
	static volatile uint64_t t81 = 1938LLU;

    t81 = (x421|(x422-(x423-x424)));

    if (t81 != 18446744073709551455LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x425 = UINT64_MAX;
	int8_t x428 = -3;
	uint64_t t82 = UINT64_MAX;

    t82 = (x425|(x426-(x427-x428)));

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x429 = 1021588144808489219LL;
	int64_t x430 = -1LL;
	uint8_t x431 = 30U;
	int16_t x432 = -1;

    t83 = (x429|(x430-(x431-x432)));

    if (t83 != -29LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x437 = -623453929728460LL;
	uint16_t x438 = 99U;
	static int32_t x439 = -1;
	int16_t x440 = INT16_MIN;
	int64_t t84 = -3730LL;

    t84 = (x437|(x438-(x439-x440)));

    if (t84 != -27020LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x441 = 6539;
	uint16_t x443 = UINT16_MAX;
	static int32_t t85 = 30104;

    t85 = (x441|(x442-(x443-x444)));

    if (t85 != -98885) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x449 = INT8_MIN;
	int64_t x450 = INT64_MIN;
	uint64_t x451 = 20LLU;
	int8_t x452 = -1;

    t86 = (x449|(x450-(x451-x452)));

    if (t86 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x453 = INT32_MAX;
	int16_t x454 = INT16_MIN;
	uint32_t x455 = 3059813U;
	static uint64_t x456 = 1203589856065122LLU;
	uint64_t t87 = 4764124229968727162LLU;

    t87 = (x453|(x454-(x455-x456)));

    if (t87 != 1203591570259967LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x457 = 2231964697506137024LLU;
	volatile int8_t x458 = -1;
	int32_t x459 = INT32_MIN;
	int64_t x460 = 312899177339958LL;
	static uint64_t t88 = 160621080541528432LLU;

    t88 = (x457|(x458-(x459-x460)));

    if (t88 != 2231987254745686005LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x461 = INT16_MIN;
	int16_t x462 = -3152;
	static uint32_t x463 = UINT32_MAX;
	int8_t x464 = -6;
	static uint32_t t89 = 799331921U;

    t89 = (x461|(x462-(x463-x464)));

    if (t89 != 4294964139U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x465 = UINT64_MAX;
	int16_t x467 = -1;
	static int64_t x468 = INT64_MIN;
	uint64_t t90 = UINT64_MAX;

    t90 = (x465|(x466-(x467-x468)));

    if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x469 = 13;
	static int64_t x470 = 183513013139LL;
	uint8_t x471 = 0U;
	volatile int32_t x472 = 242622;
	int64_t t91 = -578044363546LL;

    t91 = (x469|(x470-(x471-x472)));

    if (t91 != 183513255773LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x473 = 17U;
	int8_t x474 = 2;
	int64_t x475 = -98296824648LL;
	volatile int64_t t92 = 0LL;

    t92 = (x473|(x474-(x475-x476)));

    if (t92 != 98300280063LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x478 = -33;
	volatile int16_t x480 = 1;
	int32_t t93 = 18;

    t93 = (x477|(x478-(x479-x480)));

    if (t93 != 767) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x481 = UINT32_MAX;
	uint16_t x482 = 3U;
	int16_t x483 = -1;
	int16_t x484 = -1;
	volatile uint32_t t94 = UINT32_MAX;

    t94 = (x481|(x482-(x483-x484)));

    if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x485 = INT64_MIN;
	int64_t x486 = INT64_MIN;
	int16_t x487 = -1582;
	int16_t x488 = -9;

    t95 = (x485|(x486-(x487-x488)));

    if (t95 != -9223372036854774235LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x489 = INT64_MAX;
	static volatile uint8_t x491 = 40U;
	uint8_t x492 = 52U;

    t96 = (x489|(x490-(x491-x492)));

    if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x493 = 421;
	volatile uint8_t x494 = UINT8_MAX;
	int16_t x495 = INT16_MIN;
	int8_t x496 = 1;
	static volatile int32_t t97 = -5641740;

    t97 = (x493|(x494-(x495-x496)));

    if (t97 != 33189) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x497 = 3917825U;
	static volatile int64_t x500 = INT64_MIN;
	uint64_t t98 = 183LLU;

    t98 = (x497|(x498-(x499-x500)));

    if (t98 != 9223372038998052665LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x501 = 11773U;
	int16_t x502 = INT16_MAX;
	uint32_t x503 = 253636U;
	uint64_t x504 = 2636060966055LLU;
	static volatile uint64_t t99 = 528644441LLU;

    t99 = (x501|(x502-(x503-x504)));

    if (t99 != 2636060753407LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x505 = 6LLU;
	volatile int64_t x506 = -1LL;
	uint64_t t100 = 4LLU;

    t100 = (x505|(x506-(x507-x508)));

    if (t100 != 65535LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x510 = -3;
	int64_t x511 = 228913LL;
	uint8_t x512 = UINT8_MAX;

    t101 = (x509|(x510-(x511-x512)));

    if (t101 != -32053LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x513 = INT32_MIN;
	uint16_t x514 = UINT16_MAX;
	int16_t x515 = INT16_MIN;
	uint8_t x516 = 0U;
	int32_t t102 = -20499783;

    t102 = (x513|(x514-(x515-x516)));

    if (t102 != -2147385345) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x517 = 2;
	volatile int8_t x518 = 1;
	static uint16_t x519 = 1U;

    t103 = (x517|(x518-(x519-x520)));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x526 = 191LLU;
	int8_t x527 = 3;
	int8_t x528 = -1;
	volatile uint64_t t104 = 2LLU;

    t104 = (x525|(x526-(x527-x528)));

    if (t104 != 18446744073709519035LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x529 = UINT16_MAX;
	uint8_t x530 = 38U;
	static volatile int32_t x532 = -42462;
	int32_t t105 = 515503;

    t105 = (x529|(x530-(x531-x532)));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x534 = INT16_MAX;
	uint64_t x536 = 122021068844551358LLU;
	uint64_t t106 = 1561606730814254LLU;

    t106 = (x533|(x534-(x535-x536)));

    if (t106 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x537 = 2208;
	uint32_t x538 = UINT32_MAX;
	uint64_t x539 = 3743331LLU;

    t107 = (x537|(x538-(x539-x540)));

    if (t107 != 4291258811LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x541 = 554384978424036LLU;
	int32_t x543 = -1;

    t108 = (x541|(x542-(x543-x544)));

    if (t108 != 18446744073709531364LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x545 = 2U;
	int64_t x547 = -1LL;
	uint32_t x548 = 13U;
	int64_t t109 = -6612567LL;

    t109 = (x545|(x546-(x547-x548)));

    if (t109 != 15LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x549 = INT8_MAX;
	int32_t x550 = INT32_MIN;
	int64_t x551 = -324445500651LL;
	int8_t x552 = -1;
	volatile int64_t t110 = -9500159977LL;

    t110 = (x549|(x550-(x551-x552)));

    if (t110 != 322298017023LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x553 = INT64_MAX;
	int8_t x555 = -1;
	int16_t x556 = INT16_MIN;
	int64_t t111 = INT64_MAX;

    t111 = (x553|(x554-(x555-x556)));

    if (t111 != INT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x557 = INT32_MIN;
	int8_t x558 = -1;
	int64_t x559 = 832LL;
	int32_t x560 = -63369;
	static volatile int64_t t112 = 1656LL;

    t112 = (x557|(x558-(x559-x560)));

    if (t112 != -64202LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x561 = 1705433U;
	uint32_t x562 = 317813U;
	int8_t x563 = 24;
	int16_t x564 = -1;
	volatile uint32_t t113 = 21U;

    t113 = (x561|(x562-(x563-x564)));

    if (t113 != 2022877U) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x565 = 1214;
	static uint16_t x566 = UINT16_MAX;
	int16_t x567 = -15;
	uint64_t x568 = 128100877439975LLU;
	uint64_t t114 = 2738565194636277LLU;

    t114 = (x565|(x566-(x567-x568)));

    if (t114 != 128100877506559LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x569 = 1306138444LL;
	volatile int64_t x571 = INT64_MIN;
	volatile int64_t t115 = -120LL;

    t115 = (x569|(x570-(x571-x572)));

    if (t115 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x574 = -1LL;
	volatile int32_t x575 = -1;
	uint8_t x576 = 1U;

    t116 = (x573|(x574-(x575-x576)));

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x581 = UINT16_MAX;
	volatile int8_t x582 = -1;
	int64_t x583 = INT64_MIN;
	int8_t x584 = -1;
	static volatile int64_t t117 = INT64_MAX;

    t117 = (x581|(x582-(x583-x584)));

    if (t117 != INT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x589 = INT16_MIN;
	static int32_t x590 = 7558258;
	int32_t x591 = INT32_MAX;
	int64_t x592 = -380774195933533LL;
	static volatile int64_t t118 = 559686640748LL;

    t118 = (x589|(x590-(x591-x592)));

    if (t118 != -23786LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x593 = -1LL;
	int32_t x594 = INT32_MIN;
	int16_t x595 = -1;
	uint16_t x596 = 1534U;
	int64_t t119 = -1210721121051438LL;

    t119 = (x593|(x594-(x595-x596)));

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x597 = 26848U;
	volatile int8_t x599 = -1;
	int16_t x600 = -3;
	volatile uint32_t t120 = 100U;

    t120 = (x597|(x598-(x599-x600)));

    if (t120 != 32765U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x601 = INT8_MAX;
	int64_t x602 = INT64_MIN;
	int64_t x603 = INT64_MIN;
	int8_t x604 = -1;
	int64_t t121 = 177683LL;

    t121 = (x601|(x602-(x603-x604)));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x606 = UINT8_MAX;
	uint32_t x607 = UINT32_MAX;
	volatile uint32_t x608 = 180U;

    t122 = (x605|(x606-(x607-x608)));

    if (t122 != 432567U) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x617 = -1;
	int64_t x618 = -2292LL;
	volatile int8_t x619 = INT8_MAX;
	static int16_t x620 = -1;
	int64_t t123 = 5479548LL;

    t123 = (x617|(x618-(x619-x620)));

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x621 = 26122119U;
	uint64_t x622 = 700LLU;
	volatile uint64_t x623 = 998402LLU;
	int64_t x624 = INT64_MAX;
	volatile uint64_t t124 = 14497072LLU;

    t124 = (x621|(x622-(x623-x624)));

    if (t124 != 9223372036854699967LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x625 = UINT32_MAX;
	static volatile uint64_t x626 = UINT64_MAX;
	uint64_t t125 = 197476254950401892LLU;

    t125 = (x625|(x626-(x627-x628)));

    if (t125 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x630 = -1;
	uint16_t x631 = 1313U;
	volatile int64_t t126 = -1941369063265892LL;

    t126 = (x629|(x630-(x631-x632)));

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x633 = 223;
	int16_t x634 = INT16_MAX;
	uint32_t x635 = UINT32_MAX;
	uint32_t x636 = 503U;

    t127 = (x633|(x634-(x635-x636)));

    if (t127 != 33279U) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x637 = 45U;
	volatile int16_t x638 = INT16_MIN;
	static int64_t x639 = INT64_MIN;
	int8_t x640 = INT8_MIN;

    t128 = (x637|(x638-(x639-x640)));

    if (t128 != 9223372036854742957LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x641 = 23367998717659LLU;
	uint8_t x642 = 82U;
	uint32_t x643 = 12U;
	int32_t x644 = INT32_MIN;

    t129 = (x641|(x642-(x643-x644)));

    if (t129 != 23367998717663LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x645 = INT16_MIN;
	uint64_t x646 = 2021LLU;
	static volatile uint64_t x647 = 977LLU;

    t130 = (x645|(x646-(x647-x648)));

    if (t130 != 18446744073709519891LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x658 = INT8_MIN;
	uint32_t x659 = UINT32_MAX;
	uint64_t t131 = UINT64_MAX;

    t131 = (x657|(x658-(x659-x660)));

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x662 = 457045097U;
	volatile uint32_t x664 = UINT32_MAX;
	uint32_t t132 = 4805U;

    t132 = (x661|(x662-(x663-x664)));

    if (t132 != 4294967291U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x669 = 94836LL;
	int8_t x670 = INT8_MAX;
	static int32_t x671 = INT32_MIN;
	int64_t x672 = -85947LL;
	static volatile int64_t t133 = -95634LL;

    t133 = (x669|(x670-(x671-x672)));

    if (t133 != 2147480308LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x681 = UINT8_MAX;
	volatile uint64_t x682 = 2435LLU;
	int32_t x683 = -7987136;
	volatile int32_t x684 = INT32_MIN;
	uint64_t t134 = 1132334530012929LLU;

    t134 = (x681|(x682-(x683-x684)));

    if (t134 != 18446744071570057727LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x685 = -1;
	uint64_t x688 = 1270483LLU;

    t135 = (x685|(x686-(x687-x688)));

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x689 = 1U;
	static uint16_t x690 = 845U;
	volatile uint64_t x691 = 6060589455285151LLU;
	static uint8_t x692 = 93U;
	uint64_t t136 = 36340269LLU;

    t136 = (x689|(x690-(x691-x692)));

    if (t136 != 18440683484254267403LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x693 = INT16_MIN;
	int8_t x694 = INT8_MIN;
	uint16_t x695 = 25338U;
	volatile uint64_t t137 = 96084199482323484LLU;

    t137 = (x693|(x694-(x695-x696)));

    if (t137 != 18446744073709526149LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x697 = UINT32_MAX;
	static int8_t x698 = INT8_MIN;
	uint64_t x699 = UINT64_MAX;
	int16_t x700 = INT16_MIN;
	static volatile uint64_t t138 = UINT64_MAX;

    t138 = (x697|(x698-(x699-x700)));

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x701 = INT8_MIN;
	int64_t x702 = INT64_MIN;
	uint64_t x703 = UINT64_MAX;

    t139 = (x701|(x702-(x703-x704)));

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x706 = -1;
	int32_t x707 = -1;
	volatile int64_t x708 = INT64_MIN;
	static volatile int64_t t140 = -6813144431591921LL;

    t140 = (x705|(x706-(x707-x708)));

    if (t140 != -11516244838707355LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x709 = 5;
	volatile int8_t x710 = -1;
	uint16_t x711 = 1U;
	static int64_t x712 = -939436451862249LL;
	volatile int64_t t141 = 2807LL;

    t141 = (x709|(x710-(x711-x712)));

    if (t141 != -939436451862251LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x714 = 5465759LL;
	volatile uint8_t x715 = UINT8_MAX;
	volatile int8_t x716 = -1;
	int64_t t142 = -479286557071600LL;

    t142 = (x713|(x714-(x715-x716)));

    if (t142 != -6753LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x717 = INT64_MIN;
	uint64_t x718 = 1000724795LLU;
	uint8_t x719 = UINT8_MAX;
	int64_t x720 = INT64_MAX;

    t143 = (x717|(x718-(x719-x720)));

    if (t143 != 9223372037855500347LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x721 = 337U;
	int8_t x722 = INT8_MAX;
	int16_t x723 = INT16_MIN;
	static uint32_t x724 = 1744U;
	volatile uint32_t t144 = 0U;

    t144 = (x721|(x722-(x723-x724)));

    if (t144 != 34655U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x725 = UINT64_MAX;
	static int64_t x726 = -1LL;
	int16_t x727 = INT16_MIN;
	int64_t x728 = -1LL;

    t145 = (x725|(x726-(x727-x728)));

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x729 = 6U;
	volatile uint8_t x730 = 2U;
	int8_t x731 = INT8_MAX;
	volatile int32_t x732 = 28194;
	volatile int32_t t146 = -9928465;

    t146 = (x729|(x730-(x731-x732)));

    if (t146 != 28071) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x733 = UINT32_MAX;
	int8_t x734 = 4;
	int64_t x735 = -148965977LL;
	volatile int64_t t147 = -7870090124LL;

    t147 = (x733|(x734-(x735-x736)));

    if (t147 != 4294967295LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x737 = -538LL;
	static int64_t x738 = INT64_MIN;
	static int64_t t148 = 1514267LL;

    t148 = (x737|(x738-(x739-x740)));

    if (t148 != -538LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x742 = INT32_MIN;
	volatile int16_t x743 = INT16_MAX;
	uint64_t x744 = UINT64_MAX;
	volatile uint64_t t149 = 2LLU;

    t149 = (x741|(x742-(x743-x744)));

    if (t149 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x748 = -1LL;
	volatile uint64_t t150 = 64LLU;

    t150 = (x745|(x746-(x747-x748)));

    if (t150 != 39644631129LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x749 = INT64_MAX;
	int32_t x750 = -5757;
	int64_t x751 = 847845026770933369LL;
	int32_t x752 = INT32_MIN;
	int64_t t151 = 176632969897000LL;

    t151 = (x749|(x750-(x751-x752)));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x754 = -13;
	uint16_t x756 = 29U;
	int32_t t152 = 125844572;

    t152 = (x753|(x754-(x755-x756)));

    if (t152 != 127) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x762 = -1;
	volatile uint8_t x763 = 9U;
	uint8_t x764 = UINT8_MAX;
	volatile int32_t t153 = 257918205;

    t153 = (x761|(x762-(x763-x764)));

    if (t153 != -11) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x765 = 167582238810LLU;
	int16_t x766 = -35;
	volatile uint64_t x767 = 506LLU;
	static int8_t x768 = INT8_MIN;
	uint64_t t154 = 28358935442LLU;

    t154 = (x765|(x766-(x767-x768)));

    if (t154 != 18446744073709550971LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x769 = INT16_MIN;
	static uint16_t x770 = 1006U;
	uint8_t x771 = UINT8_MAX;
	uint16_t x772 = 7075U;
	int32_t t155 = -16294;

    t155 = (x769|(x770-(x771-x772)));

    if (t155 != -24942) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x773 = 0U;
	uint64_t x774 = 54627LLU;
	uint8_t x775 = 0U;
	static uint64_t x776 = 1853357694000827LLU;
	uint64_t t156 = 31LLU;

    t156 = (x773|(x774-(x775-x776)));

    if (t156 != 1853357694055454LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x777 = -1;
	int32_t x779 = -1;
	volatile uint16_t x780 = 5U;
	static int32_t t157 = -1;

    t157 = (x777|(x778-(x779-x780)));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint8_t x781 = 95U;
	uint16_t x782 = 222U;
	int64_t x783 = 9LL;
	int8_t x784 = INT8_MIN;
	int64_t t158 = -37906LL;

    t158 = (x781|(x782-(x783-x784)));

    if (t158 != 95LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x785 = -1;
	static uint16_t x786 = 15046U;
	volatile int8_t x787 = INT8_MIN;
	uint8_t x788 = 1U;
	int32_t t159 = 1;

    t159 = (x785|(x786-(x787-x788)));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x789 = -1;
	int16_t x791 = -46;
	int8_t x792 = INT8_MIN;
	volatile int32_t t160 = 1864;

    t160 = (x789|(x790-(x791-x792)));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x793 = INT8_MAX;
	uint32_t x794 = 1834528U;
	uint32_t x795 = 4304U;
	int64_t x796 = -14LL;

    t161 = (x793|(x794-(x795-x796)));

    if (t161 != 1830271LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x797 = INT64_MAX;
	uint64_t x800 = UINT64_MAX;

    t162 = (x797|(x798-(x799-x800)));

    if (t162 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x801 = INT8_MAX;
	volatile int64_t x802 = INT64_MAX;
	int8_t x804 = -1;
	volatile int64_t t163 = -12159695LL;

    t163 = (x801|(x802-(x803-x804)));

    if (t163 != 9223372036854775551LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x805 = INT8_MIN;
	int32_t x806 = 13667;
	int64_t x807 = 50989650967086LL;
	uint16_t x808 = UINT16_MAX;
	static volatile int64_t t164 = -2924742184LL;

    t164 = (x805|(x806-(x807-x808)));

    if (t164 != -76LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x810 = -1LL;
	uint16_t x811 = UINT16_MAX;
	static int16_t x812 = -1;
	volatile int64_t t165 = 1428992925776948LL;

    t165 = (x809|(x810-(x811-x812)));

    if (t165 != -65537LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x813 = INT8_MIN;
	int8_t x815 = INT8_MAX;
	volatile uint64_t x816 = 443671349497411525LLU;
	volatile uint64_t t166 = 13918LLU;

    t166 = (x813|(x814-(x815-x816)));

    if (t166 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x818 = UINT16_MAX;
	uint64_t x819 = UINT64_MAX;
	volatile uint32_t x820 = UINT32_MAX;

    t167 = (x817|(x818-(x819-x820)));

    if (t167 != 4295032831LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x825 = INT32_MAX;
	uint64_t x826 = 21202371LLU;
	static uint16_t x827 = UINT16_MAX;
	int32_t x828 = 11;
	volatile uint64_t t168 = 903805917LLU;

    t168 = (x825|(x826-(x827-x828)));

    if (t168 != 2147483647LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x829 = INT32_MAX;
	uint64_t x832 = 38641LLU;
	uint64_t t169 = 221369897490LLU;

    t169 = (x829|(x830-(x831-x832)));

    if (t169 != 6442450943LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x833 = 2U;
	int64_t x835 = -366938040887LL;
	static uint32_t x836 = 52773U;
	int64_t t170 = 32062553777335276LL;

    t170 = (x833|(x834-(x835-x836)));

    if (t170 != 366938093659LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x837 = -10;
	int64_t x838 = -1LL;
	int32_t x839 = INT32_MAX;
	static volatile int64_t x840 = -1LL;
	int64_t t171 = -757854697506765863LL;

    t171 = (x837|(x838-(x839-x840)));

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x841 = -209267438432LL;
	uint64_t x843 = UINT64_MAX;
	int8_t x844 = 3;

    t172 = (x841|(x842-(x843-x844)));

    if (t172 != 18446743864442113199LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x845 = 2166234458982LLU;
	static int16_t x846 = 14157;
	uint16_t x847 = UINT16_MAX;
	uint32_t x848 = 2847509U;
	volatile uint64_t t173 = 21591445948608LLU;

    t173 = (x845|(x846-(x847-x848)));

    if (t173 != 2166234983271LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x849 = INT16_MAX;
	int8_t x850 = INT8_MIN;
	volatile int32_t x851 = INT32_MIN;
	volatile int16_t x852 = -1;
	volatile int32_t t174 = INT32_MAX;

    t174 = (x849|(x850-(x851-x852)));

    if (t174 != INT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x854 = 50582873259476LLU;
	int8_t x855 = INT8_MIN;
	static uint8_t x856 = 30U;

    t175 = (x853|(x854-(x855-x856)));

    if (t175 != 18446744073709534834LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x857 = -15;
	uint32_t x858 = UINT32_MAX;
	uint8_t x859 = 0U;
	volatile uint32_t t176 = 13U;

    t176 = (x857|(x858-(x859-x860)));

    if (t176 != 4294967285U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x861 = 27192401;
	static uint64_t x862 = 615284048133356LLU;
	static uint64_t x863 = 4416817763110722LLU;
	volatile int16_t x864 = 44;
	volatile uint64_t t177 = 8159517466560LLU;

    t177 = (x861|(x862-(x863-x864)));

    if (t177 != 18442942540003929559LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x874 = INT8_MIN;
	int32_t x875 = 19;
	int32_t t178 = 14942567;

    t178 = (x873|(x874-(x875-x876)));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint8_t x877 = 79U;
	static uint64_t x878 = 1710LLU;
	uint64_t x880 = UINT64_MAX;
	static volatile uint64_t t179 = 8568060239989138107LLU;

    t179 = (x877|(x878-(x879-x880)));

    if (t179 != 1647LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x881 = 0U;
	volatile int16_t x882 = INT16_MIN;
	int32_t x883 = -19;
	static int32_t x884 = -5;

    t180 = (x881|(x882-(x883-x884)));

    if (t180 != -32754) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x890 = 19232961670093834LLU;
	int16_t x891 = INT16_MIN;
	int64_t x892 = INT64_MIN;

    t181 = (x889|(x890-(x891-x892)));

    if (t181 != 9242604998524902655LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x894 = -11871020;
	int8_t x895 = INT8_MIN;
	volatile uint64_t t182 = UINT64_MAX;

    t182 = (x893|(x894-(x895-x896)));

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x897 = 60U;
	static int8_t x899 = -2;
	int16_t x900 = -1;

    t183 = (x897|(x898-(x899-x900)));

    if (t183 != -1829635LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x905 = 18U;
	uint32_t t184 = 5030U;

    t184 = (x905|(x906-(x907-x908)));

    if (t184 != 32894U) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x909 = -1;
	int16_t x911 = INT16_MIN;
	int32_t x912 = -1;
	static int32_t t185 = 935220;

    t185 = (x909|(x910-(x911-x912)));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x913 = 1281831070486839LLU;
	int8_t x914 = INT8_MIN;
	int64_t x915 = 24683LL;
	int64_t x916 = -26338023505439262LL;

    t186 = (x913|(x914-(x915-x916)));

    if (t186 != 18421672964708562423LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x917 = INT32_MAX;
	int16_t x918 = -1;
	int32_t x919 = -17;
	uint32_t x920 = 5878339U;
	volatile uint32_t t187 = 51250992U;

    t187 = (x917|(x918-(x919-x920)));

    if (t187 != 2147483647U) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x921 = INT16_MIN;
	int8_t x922 = -1;
	uint64_t x924 = 240175560LLU;

    t188 = (x921|(x922-(x923-x924)));

    if (t188 != 18446744073709537736LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x925 = 5U;
	uint8_t x926 = 12U;
	int8_t x927 = INT8_MAX;
	int8_t x928 = -16;

    t189 = (x925|(x926-(x927-x928)));

    if (t189 != 4294967165U) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x933 = -12;
	int16_t x934 = INT16_MAX;
	int64_t x935 = -7364156647019388LL;
	static int8_t x936 = INT8_MIN;
	int64_t t190 = 14LL;

    t190 = (x933|(x934-(x935-x936)));

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x937 = 3LLU;
	uint64_t x939 = UINT64_MAX;
	int64_t x940 = INT64_MIN;
	uint64_t t191 = 44505LLU;

    t191 = (x937|(x938-(x939-x940)));

    if (t191 != 3LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x941 = -1;
	int16_t x942 = INT16_MAX;
	int32_t x943 = INT32_MAX;
	volatile int32_t t192 = 0;

    t192 = (x941|(x942-(x943-x944)));

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x945 = -3;
	int32_t x946 = INT32_MAX;
	int32_t x947 = 216299;
	static int32_t t193 = 74932;

    t193 = (x945|(x946-(x947-x948)));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x949 = UINT8_MAX;
	static int32_t x950 = -1;
	volatile uint16_t x951 = 2U;
	int32_t x952 = INT32_MAX;
	int32_t t194 = INT32_MAX;

    t194 = (x949|(x950-(x951-x952)));

    if (t194 != INT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x957 = 99U;
	static volatile uint8_t x958 = 1U;
	int32_t x959 = INT32_MIN;
	static volatile int32_t x960 = INT32_MIN;

    t195 = (x957|(x958-(x959-x960)));

    if (t195 != 99) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x961 = 3;
	int8_t x963 = 2;
	static uint8_t x964 = 0U;

    t196 = (x961|(x962-(x963-x964)));

    if (t196 != 127) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x969 = -3834LL;
	uint32_t x970 = 130U;
	int32_t x971 = -1;
	int16_t x972 = -4;
	volatile int64_t t197 = 584439384LL;

    t197 = (x969|(x970-(x971-x972)));

    if (t197 != -3713LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x975 = -1;
	uint8_t x976 = 4U;
	volatile int32_t t198 = 13273104;

    t198 = (x973|(x974-(x975-x976)));

    if (t198 != -52) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x977 = 213LLU;
	int8_t x978 = INT8_MAX;
	volatile uint8_t x979 = UINT8_MAX;

    t199 = (x977|(x978-(x979-x980)));

    if (t199 != 18446744073709551583LLU) { NG(); } else { ; }
	
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

