
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

int64_t x4 = INT64_MIN;
static int8_t x8 = INT8_MAX;
volatile int64_t x13 = INT64_MIN;
volatile int16_t x22 = -4;
volatile int32_t t8 = -442096066;
static uint64_t x37 = 49973900831599LLU;
int64_t x38 = 716254580559LL;
int8_t x40 = 35;
int64_t x41 = INT64_MIN;
int64_t x57 = INT64_MIN;
volatile int8_t x58 = 1;
static volatile int64_t t14 = INT64_MIN;
volatile int64_t x62 = -1LL;
volatile uint8_t x64 = 19U;
uint16_t x66 = 22U;
static uint16_t x68 = 360U;
volatile int64_t x71 = INT64_MIN;
static volatile int32_t x74 = -11705907;
int32_t x76 = -6236639;
int32_t x78 = INT32_MIN;
int32_t x79 = 675;
static int32_t t19 = 31670188;
static uint64_t x85 = 52595259LLU;
int32_t x92 = 138;
uint64_t t22 = 46278LLU;
volatile int32_t x95 = -1;
static uint64_t t23 = 268232219985080LLU;
volatile int16_t x97 = INT16_MIN;
static int8_t x98 = INT8_MAX;
uint64_t x99 = 502646572856LLU;
uint8_t x110 = UINT8_MAX;
int16_t x113 = -1;
int64_t x120 = -1LL;
int64_t x123 = INT64_MIN;
volatile int64_t t30 = 12012065801636274LL;
uint64_t x127 = UINT64_MAX;
volatile uint32_t x132 = UINT32_MAX;
volatile int8_t x133 = INT8_MIN;
int32_t t33 = -12734360;
int32_t x140 = -1;
static int8_t x144 = INT8_MAX;
int64_t x145 = INT64_MAX;
volatile uint8_t x155 = UINT8_MAX;
volatile int32_t t38 = 86353;
int16_t x166 = INT16_MIN;
volatile int32_t t41 = -40;
static int8_t x175 = 4;
int16_t x178 = INT16_MIN;
uint64_t x179 = 218561283562543212LLU;
static uint16_t x180 = UINT16_MAX;
static uint32_t x186 = UINT32_MAX;
int64_t x191 = INT64_MIN;
static int16_t x195 = INT16_MIN;
static volatile uint8_t x198 = 72U;
int32_t t49 = -1355;
static volatile int16_t x205 = INT16_MIN;
volatile int8_t x208 = -2;
int16_t x210 = INT16_MAX;
int16_t x221 = 0;
int32_t t57 = -39909;
uint64_t x234 = 3461973816LLU;
int8_t x237 = -1;
int16_t x241 = -1;
static int32_t t60 = -883;
uint8_t x245 = 2U;
int16_t x246 = 0;
int16_t x250 = -1;
int64_t t62 = INT64_MIN;
int8_t x253 = 1;
static int8_t x255 = 61;
static int8_t x257 = INT8_MIN;
volatile uint32_t x265 = 179708U;
static int16_t x271 = INT16_MAX;
static int64_t t67 = -4122531637LL;
volatile int8_t x274 = -1;
static int16_t x282 = -1;
static uint16_t x284 = 21U;
int64_t x286 = INT64_MIN;
int64_t x290 = -2070028680LL;
uint32_t x296 = 2173U;
volatile uint16_t x297 = UINT16_MAX;
volatile int64_t x298 = INT64_MIN;
volatile int32_t t75 = -326023;
int16_t x306 = INT16_MIN;
int8_t x309 = INT8_MIN;
int32_t x313 = INT32_MIN;
volatile int16_t x314 = 3;
volatile int8_t x320 = 0;
volatile int32_t t79 = -58;
int8_t x340 = -1;
uint64_t x350 = 1914400251356956400LLU;
volatile int32_t t88 = 37108997;
uint32_t x358 = 706574515U;
int8_t x360 = INT8_MAX;
volatile int16_t x368 = 12;
volatile uint64_t t91 = 26937LLU;
int32_t x370 = INT32_MIN;
int8_t x375 = INT8_MIN;
uint32_t x377 = 127231612U;
static uint32_t t94 = 9994U;
int16_t x381 = -1;
int32_t x382 = INT32_MIN;
static int16_t x384 = INT16_MIN;
uint64_t x386 = 340616235LLU;
volatile int64_t x391 = -1LL;
uint32_t x416 = UINT32_MAX;
static int64_t x420 = INT64_MAX;
volatile uint32_t t105 = 36U;
uint8_t x426 = 1U;
int32_t t106 = -12553;
int32_t x430 = INT32_MIN;
static uint8_t x440 = 81U;
int16_t x445 = -56;
uint64_t x448 = 1060715561LLU;
static uint8_t x454 = 0U;
int64_t x458 = INT64_MAX;
uint16_t x463 = 1244U;
int32_t x464 = INT32_MIN;
uint16_t x469 = 21199U;
int32_t x472 = INT32_MIN;
int16_t x473 = -51;
uint64_t x477 = UINT64_MAX;
volatile int64_t x480 = -1LL;
static volatile uint64_t t119 = 921934LLU;
int32_t x482 = INT32_MIN;
uint64_t x483 = UINT64_MAX;
volatile uint32_t x494 = 15U;
int64_t x498 = 4109045581871144LL;
int32_t x500 = -1;
static uint8_t x505 = 109U;
uint16_t x506 = 4U;
uint8_t x507 = 6U;
static int8_t x509 = INT8_MIN;
int8_t x511 = -1;
int32_t x519 = INT32_MIN;
static volatile int32_t t130 = INT32_MIN;
uint32_t x525 = 6064U;
volatile uint32_t t131 = 39690U;
int16_t x530 = INT16_MIN;
static int64_t x535 = 53335898LL;
volatile int64_t x537 = 14737240007900561LL;
int64_t t134 = 28322981LL;
uint8_t x552 = 13U;
uint8_t x559 = 6U;
int32_t x561 = INT32_MAX;
uint32_t t141 = 3U;
volatile uint32_t t142 = 1626U;
int8_t x581 = 18;
uint8_t x586 = 0U;
int64_t x589 = INT64_MAX;
int32_t x591 = INT32_MAX;
int64_t x596 = INT64_MAX;
int32_t x597 = INT32_MIN;
uint8_t x600 = 104U;
int64_t x607 = INT64_MIN;
int64_t x608 = INT64_MIN;
volatile int32_t t151 = -24845988;
volatile int64_t x609 = 300402LL;
uint16_t x610 = UINT16_MAX;
uint8_t x612 = 102U;
volatile int32_t t154 = 31;
static uint8_t x622 = UINT8_MAX;
int16_t x625 = 1;
int32_t x628 = INT32_MAX;
volatile int32_t t156 = -429;
volatile uint64_t x629 = UINT64_MAX;
static int32_t x632 = -2524;
uint8_t x636 = 0U;
int8_t x639 = INT8_MIN;
uint32_t x641 = UINT32_MAX;
int32_t x644 = -1;
int32_t x645 = INT32_MIN;
volatile int64_t x646 = INT64_MIN;
static uint8_t x652 = 0U;
int32_t x653 = INT32_MAX;
uint8_t x654 = 39U;
static uint16_t x656 = UINT16_MAX;
int64_t x660 = 497509934LL;
uint8_t x664 = 73U;
int32_t x666 = 0;
int16_t x667 = 489;
volatile int64_t x669 = -1LL;
volatile uint64_t x670 = UINT64_MAX;
static int32_t x672 = -1;
int8_t x682 = INT8_MAX;
volatile int16_t x685 = 5;
uint64_t x686 = UINT64_MAX;
uint64_t t172 = 1LLU;
int16_t x699 = -1;
static int16_t x703 = INT16_MAX;
volatile uint16_t x707 = UINT16_MAX;
int8_t x711 = INT8_MAX;
uint32_t x713 = UINT32_MAX;
int8_t x715 = INT8_MIN;
uint32_t x717 = 1673977U;
uint64_t x733 = 462782187757505530LLU;
uint64_t t183 = 996080338LLU;
volatile int16_t x741 = INT16_MAX;
int16_t x742 = -1;
uint8_t x743 = 99U;
static uint16_t x744 = 2U;
uint8_t x752 = 56U;
int32_t t187 = -1;
static uint32_t x756 = 216536U;
static volatile int64_t t190 = -60034LL;
int8_t x771 = INT8_MIN;
uint32_t x772 = 722309U;
int8_t x777 = 0;
uint64_t x791 = UINT64_MAX;
int8_t x792 = 0;


void f0(void) {
    	volatile uint32_t x1 = 11730004U;
	int8_t x2 = INT8_MIN;
	static int32_t x3 = -1;
	uint32_t t0 = 158571U;

    t0 = (x1*(x2<=(x3&x4)));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x5 = -3158826407283LL;
	int8_t x6 = -13;
	uint64_t x7 = UINT64_MAX;
	int64_t t1 = 41530950936794LL;

    t1 = (x5*(x6<=(x7&x8)));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int16_t x10 = -1;
	int16_t x11 = -1;
	static int64_t x12 = 1LL;
	int32_t t2 = INT32_MIN;

    t2 = (x9*(x10<=(x11&x12)));

    if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x14 = INT8_MIN;
	uint64_t x15 = 21488LLU;
	int32_t x16 = -1;
	int64_t t3 = -4183701950316634126LL;

    t3 = (x13*(x14<=(x15&x16)));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 2U;
	int8_t x18 = 0;
	int8_t x19 = -21;
	static uint16_t x20 = 5U;
	static int32_t t4 = -119;

    t4 = (x17*(x18<=(x19&x20)));

    if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x21 = UINT8_MAX;
	int32_t x23 = -14901;
	volatile int8_t x24 = INT8_MIN;
	int32_t t5 = 688;

    t5 = (x21*(x22<=(x23&x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = INT32_MAX;
	static int8_t x26 = 0;
	int64_t x27 = -2064469120269681LL;
	volatile int8_t x28 = INT8_MIN;
	static volatile int32_t t6 = 12951923;

    t6 = (x25*(x26<=(x27&x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	int32_t x30 = -1;
	static uint64_t x31 = 250862LLU;
	static volatile uint16_t x32 = UINT16_MAX;
	volatile uint32_t t7 = 19937453U;

    t7 = (x29*(x30<=(x31&x32)));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = INT32_MAX;
	volatile int16_t x34 = -8137;
	static uint32_t x35 = 1244672275U;
	static int16_t x36 = 0;

    t8 = (x33*(x34<=(x35&x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x39 = 3U;
	uint64_t t9 = 169772LLU;

    t9 = (x37*(x38<=(x39&x40)));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x42 = 96962568867809LL;
	uint64_t x43 = UINT64_MAX;
	int32_t x44 = INT32_MAX;
	volatile int64_t t10 = 531637322LL;

    t10 = (x41*(x42<=(x43&x44)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = -1LL;
	static int64_t x46 = 153LL;
	uint16_t x47 = 16150U;
	uint64_t x48 = 18425LLU;
	static volatile int64_t t11 = 6910529734LL;

    t11 = (x45*(x46<=(x47&x48)));

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	int32_t x50 = -125;
	int32_t x51 = -1;
	uint32_t x52 = UINT32_MAX;
	static uint32_t t12 = UINT32_MAX;

    t12 = (x49*(x50<=(x51&x52)));

    if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	uint32_t x54 = UINT32_MAX;
	int32_t x55 = -1;
	static volatile uint8_t x56 = 90U;
	volatile int32_t t13 = 0;

    t13 = (x53*(x54<=(x55&x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x59 = INT16_MAX;
	int8_t x60 = 26;

    t14 = (x57*(x58<=(x59&x60)));

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	static int64_t x63 = 22157214248176188LL;
	volatile int32_t t15 = -301608804;

    t15 = (x61*(x62<=(x63&x64)));

    if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = INT32_MIN;
	volatile uint32_t x67 = UINT32_MAX;
	volatile int32_t t16 = INT32_MIN;

    t16 = (x65*(x66<=(x67&x68)));

    if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MAX;
	int8_t x70 = INT8_MIN;
	int16_t x72 = INT16_MIN;
	static int32_t t17 = -13863;

    t17 = (x69*(x70<=(x71&x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = 2823;
	int32_t x75 = INT32_MIN;
	volatile int32_t t18 = 700767840;

    t18 = (x73*(x74<=(x75&x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = -1;
	uint16_t x80 = UINT16_MAX;

    t19 = (x77*(x78<=(x79&x80)));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = INT16_MIN;
	volatile int64_t x82 = 2110169LL;
	static volatile int32_t x83 = INT32_MIN;
	volatile int32_t x84 = INT32_MIN;
	static int32_t t20 = -384440970;

    t20 = (x81*(x82<=(x83&x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x86 = 0U;
	int16_t x87 = INT16_MIN;
	static int32_t x88 = -3;
	uint64_t t21 = 179LLU;

    t21 = (x85*(x86<=(x87&x88)));

    if (t21 != 52595259LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 1994624642721816792LLU;
	int8_t x90 = 4;
	uint64_t x91 = 822298LLU;

    t22 = (x89*(x90<=(x91&x92)));

    if (t22 != 1994624642721816792LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x93 = 617LLU;
	int8_t x94 = INT8_MIN;
	static int64_t x96 = INT64_MAX;

    t23 = (x93*(x94<=(x95&x96)));

    if (t23 != 617LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x100 = -32;
	int32_t t24 = -74914698;

    t24 = (x97*(x98<=(x99&x100)));

    if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x101 = 7729U;
	int32_t x102 = 158114;
	int32_t x103 = 7990;
	int64_t x104 = INT64_MIN;
	static uint32_t t25 = 1214257U;

    t25 = (x101*(x102<=(x103&x104)));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	uint8_t x106 = 0U;
	static int32_t x107 = INT32_MAX;
	int64_t x108 = INT64_MIN;
	static volatile int32_t t26 = INT32_MIN;

    t26 = (x105*(x106<=(x107&x108)));

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = UINT8_MAX;
	int8_t x111 = -1;
	uint64_t x112 = 14992LLU;
	int32_t t27 = 2746;

    t27 = (x109*(x110<=(x111&x112)));

    if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x114 = -3;
	uint16_t x115 = 611U;
	int64_t x116 = 339777586568787LL;
	int32_t t28 = 342412;

    t28 = (x113*(x114<=(x115&x116)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = 15;
	uint8_t x118 = 0U;
	static int32_t x119 = INT32_MIN;
	volatile int32_t t29 = 70930732;

    t29 = (x117*(x118<=(x119&x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -1LL;
	uint16_t x122 = 21U;
	static int8_t x124 = 0;

    t30 = (x121*(x122<=(x123&x124)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MIN;
	uint32_t x126 = 128838U;
	static int64_t x128 = -1LL;
	int32_t t31 = -509;

    t31 = (x125*(x126<=(x127&x128)));

    if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	uint32_t x130 = UINT32_MAX;
	volatile int8_t x131 = -60;
	volatile int32_t t32 = -439171;

    t32 = (x129*(x130<=(x131&x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x134 = 153018008LL;
	static int64_t x135 = INT64_MAX;
	int16_t x136 = INT16_MIN;

    t33 = (x133*(x134<=(x135&x136)));

    if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = UINT32_MAX;
	static int8_t x138 = 27;
	int64_t x139 = -126329070856647LL;
	static uint32_t t34 = 20368132U;

    t34 = (x137*(x138<=(x139&x140)));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 838443U;
	int16_t x142 = -445;
	int16_t x143 = -1;
	volatile uint32_t t35 = 7U;

    t35 = (x141*(x142<=(x143&x144)));

    if (t35 != 838443U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x146 = INT8_MIN;
	int32_t x147 = -1;
	int32_t x148 = -1;
	int64_t t36 = INT64_MAX;

    t36 = (x145*(x146<=(x147&x148)));

    if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x149 = 5;
	uint8_t x150 = UINT8_MAX;
	static int64_t x151 = -454293423446804623LL;
	volatile int64_t x152 = INT64_MIN;
	volatile int32_t t37 = -8879686;

    t37 = (x149*(x150<=(x151&x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x153 = -1;
	int16_t x154 = 2537;
	uint64_t x156 = UINT64_MAX;

    t38 = (x153*(x154<=(x155&x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x157 = 9;
	int32_t x158 = INT32_MIN;
	static uint8_t x159 = UINT8_MAX;
	uint16_t x160 = 14232U;
	volatile int32_t t39 = 34;

    t39 = (x157*(x158<=(x159&x160)));

    if (t39 != 9) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x161 = UINT32_MAX;
	int16_t x162 = INT16_MIN;
	uint16_t x163 = 10U;
	uint8_t x164 = 1U;
	volatile uint32_t t40 = UINT32_MAX;

    t40 = (x161*(x162<=(x163&x164)));

    if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MAX;
	int64_t x167 = INT64_MIN;
	volatile int32_t x168 = INT32_MIN;

    t41 = (x165*(x166<=(x167&x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x169 = 6778U;
	uint8_t x170 = 27U;
	static int8_t x171 = -1;
	int32_t x172 = -65115502;
	int32_t t42 = 1;

    t42 = (x169*(x170<=(x171&x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x173 = UINT32_MAX;
	int64_t x174 = 58341867384053LL;
	int64_t x176 = -502084603356719837LL;
	uint32_t t43 = 235026U;

    t43 = (x173*(x174<=(x175&x176)));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x177 = -1;
	static volatile int32_t t44 = -100978;

    t44 = (x177*(x178<=(x179&x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = UINT32_MAX;
	int16_t x182 = INT16_MIN;
	uint64_t x183 = 116879995523797LLU;
	uint32_t x184 = UINT32_MAX;
	volatile uint32_t t45 = 19U;

    t45 = (x181*(x182<=(x183&x184)));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -119;
	int16_t x187 = INT16_MIN;
	int64_t x188 = INT64_MIN;
	int32_t t46 = -26591540;

    t46 = (x185*(x186<=(x187&x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x189 = -1756;
	uint64_t x190 = 5959877LLU;
	static int16_t x192 = -1;
	volatile int32_t t47 = -110;

    t47 = (x189*(x190<=(x191&x192)));

    if (t47 != -1756) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x193 = INT8_MIN;
	uint16_t x194 = 25186U;
	volatile uint64_t x196 = UINT64_MAX;
	static int32_t t48 = 7514938;

    t48 = (x193*(x194<=(x195&x196)));

    if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -1;
	int32_t x199 = -4611513;
	volatile int8_t x200 = -1;

    t49 = (x197*(x198<=(x199&x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = INT32_MIN;
	int8_t x202 = INT8_MIN;
	int32_t x203 = -4716;
	static int16_t x204 = INT16_MIN;
	volatile int32_t t50 = 344;

    t50 = (x201*(x202<=(x203&x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x206 = INT64_MAX;
	int64_t x207 = -189231LL;
	int32_t t51 = -414011;

    t51 = (x205*(x206<=(x207&x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MAX;
	int64_t x211 = INT64_MIN;
	int64_t x212 = INT64_MAX;
	int32_t t52 = 0;

    t52 = (x209*(x210<=(x211&x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x213 = INT8_MAX;
	int32_t x214 = -27416;
	int16_t x215 = -2677;
	int64_t x216 = INT64_MIN;
	int32_t t53 = 195;

    t53 = (x213*(x214<=(x215&x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = UINT16_MAX;
	int8_t x218 = INT8_MIN;
	int64_t x219 = 4758713263LL;
	uint64_t x220 = 1LLU;
	volatile int32_t t54 = -2226414;

    t54 = (x217*(x218<=(x219&x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x222 = -2;
	volatile int64_t x223 = -27629LL;
	int8_t x224 = -1;
	volatile int32_t t55 = -1602;

    t55 = (x221*(x222<=(x223&x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MIN;
	int16_t x226 = INT16_MIN;
	int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MAX;
	volatile int32_t t56 = 116;

    t56 = (x225*(x226<=(x227&x228)));

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = UINT16_MAX;
	static int64_t x230 = INT64_MAX;
	int8_t x231 = -1;
	int8_t x232 = 1;

    t57 = (x229*(x230<=(x231&x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x233 = UINT16_MAX;
	int8_t x235 = -1;
	int32_t x236 = 809;
	static volatile int32_t t58 = 410597639;

    t58 = (x233*(x234<=(x235&x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x238 = 10;
	uint32_t x239 = UINT32_MAX;
	static volatile int16_t x240 = 14;
	volatile int32_t t59 = -1275547;

    t59 = (x237*(x238<=(x239&x240)));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x242 = 1813789588U;
	int8_t x243 = INT8_MIN;
	int64_t x244 = -15787LL;

    t60 = (x241*(x242<=(x243&x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x247 = INT16_MIN;
	uint16_t x248 = 297U;
	int32_t t61 = 11;

    t61 = (x245*(x246<=(x247&x248)));

    if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x249 = INT64_MIN;
	volatile int16_t x251 = -617;
	uint8_t x252 = UINT8_MAX;

    t62 = (x249*(x250<=(x251&x252)));

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int64_t x254 = -1LL;
	int8_t x256 = INT8_MAX;
	volatile int32_t t63 = -1;

    t63 = (x253*(x254<=(x255&x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = -1;
	static uint16_t x259 = UINT16_MAX;
	int16_t x260 = INT16_MIN;
	volatile int32_t t64 = 278;

    t64 = (x257*(x258<=(x259&x260)));

    if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x261 = 0U;
	uint64_t x262 = 1753140652313151LLU;
	volatile uint32_t x263 = UINT32_MAX;
	uint16_t x264 = 35U;
	volatile int32_t t65 = 91065;

    t65 = (x261*(x262<=(x263&x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x266 = 1U;
	uint64_t x267 = 222193414054239LLU;
	volatile int32_t x268 = INT32_MIN;
	uint32_t t66 = 192U;

    t66 = (x265*(x266<=(x267&x268)));

    if (t66 != 179708U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x269 = 1439LL;
	static int16_t x270 = INT16_MAX;
	int16_t x272 = INT16_MIN;

    t67 = (x269*(x270<=(x271&x272)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x273 = 463175U;
	volatile int64_t x275 = INT64_MIN;
	int8_t x276 = INT8_MIN;
	volatile uint32_t t68 = 191U;

    t68 = (x273*(x274<=(x275&x276)));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -22660488;
	static int8_t x278 = -1;
	int64_t x279 = 3947LL;
	static int64_t x280 = INT64_MIN;
	volatile int32_t t69 = 66094;

    t69 = (x277*(x278<=(x279&x280)));

    if (t69 != -22660488) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 2889U;
	uint64_t x283 = UINT64_MAX;
	static uint32_t t70 = 101367952U;

    t70 = (x281*(x282<=(x283&x284)));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x285 = INT8_MAX;
	int64_t x287 = 47LL;
	uint64_t x288 = 95LLU;
	static int32_t t71 = 11;

    t71 = (x285*(x286<=(x287&x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = UINT32_MAX;
	int32_t x291 = INT32_MIN;
	int64_t x292 = -1LL;
	volatile uint32_t t72 = 680435899U;

    t72 = (x289*(x290<=(x291&x292)));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x293 = 7062U;
	static int16_t x294 = INT16_MIN;
	int8_t x295 = -46;
	uint32_t t73 = 1013880953U;

    t73 = (x293*(x294<=(x295&x296)));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x299 = -1;
	int64_t x300 = INT64_MIN;
	volatile int32_t t74 = 18;

    t74 = (x297*(x298<=(x299&x300)));

    if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x301 = INT32_MIN;
	uint64_t x302 = 30LLU;
	int64_t x303 = INT64_MAX;
	static int64_t x304 = INT64_MIN;

    t75 = (x301*(x302<=(x303&x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	volatile int64_t x307 = -114119LL;
	volatile int16_t x308 = INT16_MAX;
	volatile int64_t t76 = INT64_MIN;

    t76 = (x305*(x306<=(x307&x308)));

    if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x310 = 641541911;
	int64_t x311 = INT64_MAX;
	int32_t x312 = INT32_MIN;
	volatile int32_t t77 = -25580110;

    t77 = (x309*(x310<=(x311&x312)));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x315 = INT32_MIN;
	int64_t x316 = -1LL;
	int32_t t78 = -326814;

    t78 = (x313*(x314<=(x315&x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MIN;
	static int32_t x318 = 2;
	int32_t x319 = -93;

    t79 = (x317*(x318<=(x319&x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = 1;
	volatile uint8_t x322 = UINT8_MAX;
	int32_t x323 = -47;
	int16_t x324 = -1479;
	static int32_t t80 = -1537;

    t80 = (x321*(x322<=(x323&x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MIN;
	static volatile int64_t x326 = INT64_MIN;
	uint16_t x327 = UINT16_MAX;
	volatile int64_t x328 = INT64_MIN;
	static volatile int32_t t81 = -5;

    t81 = (x325*(x326<=(x327&x328)));

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -1;
	static int64_t x330 = INT64_MIN;
	volatile uint64_t x331 = 6477850969LLU;
	int32_t x332 = INT32_MIN;
	static volatile int32_t t82 = -185958;

    t82 = (x329*(x330<=(x331&x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = 10U;
	int16_t x334 = 2;
	static uint32_t x335 = 3U;
	static int32_t x336 = -1;
	int32_t t83 = 10;

    t83 = (x333*(x334<=(x335&x336)));

    if (t83 != 10) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	int8_t x338 = INT8_MIN;
	static int8_t x339 = INT8_MIN;
	volatile int64_t t84 = INT64_MIN;

    t84 = (x337*(x338<=(x339&x340)));

    if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x341 = 7LL;
	static volatile int16_t x342 = -1;
	int8_t x343 = INT8_MAX;
	int32_t x344 = -1;
	int64_t t85 = 847LL;

    t85 = (x341*(x342<=(x343&x344)));

    if (t85 != 7LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int32_t x345 = -1;
	uint16_t x346 = 0U;
	int8_t x347 = INT8_MIN;
	uint32_t x348 = 6235090U;
	int32_t t86 = 126;

    t86 = (x345*(x346<=(x347&x348)));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = UINT64_MAX;
	int16_t x351 = INT16_MIN;
	int32_t x352 = -1;
	volatile uint64_t t87 = UINT64_MAX;

    t87 = (x349*(x350<=(x351&x352)));

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x353 = 10U;
	static int32_t x354 = -1;
	int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MIN;

    t88 = (x353*(x354<=(x355&x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x357 = -4633000739998LL;
	static volatile int16_t x359 = INT16_MIN;
	int64_t t89 = -2136341481LL;

    t89 = (x357*(x358<=(x359&x360)));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MAX;
	int8_t x362 = INT8_MIN;
	int64_t x363 = 0LL;
	int16_t x364 = INT16_MIN;
	static volatile int32_t t90 = -9793317;

    t90 = (x361*(x362<=(x363&x364)));

    if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x365 = 467LLU;
	static int8_t x366 = 22;
	static int32_t x367 = INT32_MIN;

    t91 = (x365*(x366<=(x367&x368)));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x369 = INT16_MAX;
	int16_t x371 = INT16_MIN;
	uint64_t x372 = 5LLU;
	volatile int32_t t92 = 5;

    t92 = (x369*(x370<=(x371&x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x373 = 216256072131833LLU;
	int16_t x374 = INT16_MAX;
	volatile int8_t x376 = -13;
	uint64_t t93 = 32590266725703664LLU;

    t93 = (x373*(x374<=(x375&x376)));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x378 = -7055408857415643LL;
	static int32_t x379 = -1;
	uint64_t x380 = 0LLU;

    t94 = (x377*(x378<=(x379&x380)));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x383 = 0U;
	static volatile int32_t t95 = 1151223;

    t95 = (x381*(x382<=(x383&x384)));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x385 = 3;
	uint64_t x387 = 1LLU;
	int64_t x388 = INT64_MIN;
	int32_t t96 = 2;

    t96 = (x385*(x386<=(x387&x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MAX;
	int64_t x390 = 1632965349539526686LL;
	volatile int16_t x392 = -5848;
	int64_t t97 = 52733371LL;

    t97 = (x389*(x390<=(x391&x392)));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = UINT32_MAX;
	int32_t x394 = INT32_MIN;
	int16_t x395 = 10;
	int16_t x396 = INT16_MAX;
	uint32_t t98 = UINT32_MAX;

    t98 = (x393*(x394<=(x395&x396)));

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x397 = INT64_MAX;
	static int8_t x398 = INT8_MIN;
	int64_t x399 = INT64_MIN;
	int32_t x400 = INT32_MAX;
	int64_t t99 = INT64_MAX;

    t99 = (x397*(x398<=(x399&x400)));

    if (t99 != INT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x401 = 21799U;
	int16_t x402 = 92;
	volatile int8_t x403 = -29;
	static int8_t x404 = INT8_MIN;
	static volatile int32_t t100 = -391704967;

    t100 = (x401*(x402<=(x403&x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -5;
	uint32_t x406 = UINT32_MAX;
	int32_t x407 = -1;
	int16_t x408 = INT16_MIN;
	volatile int32_t t101 = -114;

    t101 = (x405*(x406<=(x407&x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 446U;
	static int8_t x410 = INT8_MIN;
	volatile int16_t x411 = INT16_MIN;
	int64_t x412 = -724042594067LL;
	static volatile int32_t t102 = 3906;

    t102 = (x409*(x410<=(x411&x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x413 = -1;
	static uint64_t x414 = 31338889077LLU;
	int64_t x415 = INT64_MAX;
	volatile int32_t t103 = 487260;

    t103 = (x413*(x414<=(x415&x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	static int8_t x418 = -27;
	static uint64_t x419 = 59161056482LLU;
	int32_t t104 = -3275;

    t104 = (x417*(x418<=(x419&x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint32_t x421 = 183U;
	volatile uint32_t x422 = 0U;
	int8_t x423 = INT8_MIN;
	static int8_t x424 = INT8_MAX;

    t105 = (x421*(x422<=(x423&x424)));

    if (t105 != 183U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = 1;
	int32_t x427 = -1;
	static volatile int16_t x428 = -61;

    t106 = (x425*(x426<=(x427&x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	int8_t x431 = INT8_MIN;
	int8_t x432 = INT8_MAX;
	int32_t t107 = INT32_MIN;

    t107 = (x429*(x430<=(x431&x432)));

    if (t107 != INT32_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x433 = 7848819;
	int16_t x434 = -1;
	static uint8_t x435 = UINT8_MAX;
	uint64_t x436 = 1034LLU;
	static volatile int32_t t108 = -6;

    t108 = (x433*(x434<=(x435&x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = 26;
	int8_t x438 = -1;
	static volatile int64_t x439 = 611LL;
	static int32_t t109 = 73218664;

    t109 = (x437*(x438<=(x439&x440)));

    if (t109 != 26) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = -1LL;
	int16_t x442 = INT16_MAX;
	volatile int16_t x443 = -3;
	static uint16_t x444 = 1284U;
	int64_t t110 = 9226123897042LL;

    t110 = (x441*(x442<=(x443&x444)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x446 = 2805540LL;
	uint32_t x447 = UINT32_MAX;
	volatile int32_t t111 = 261;

    t111 = (x445*(x446<=(x447&x448)));

    if (t111 != -56) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = 802806;
	uint64_t x450 = UINT64_MAX;
	volatile int32_t x451 = -3999;
	volatile int16_t x452 = INT16_MIN;
	volatile int32_t t112 = -142;

    t112 = (x449*(x450<=(x451&x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	uint32_t x455 = UINT32_MAX;
	uint8_t x456 = 1U;
	int64_t t113 = INT64_MIN;

    t113 = (x453*(x454<=(x455&x456)));

    if (t113 != INT64_MIN) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x457 = 1;
	static int64_t x459 = INT64_MIN;
	int16_t x460 = INT16_MAX;
	static volatile int32_t t114 = 20;

    t114 = (x457*(x458<=(x459&x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x461 = 1370902LL;
	volatile int8_t x462 = -16;
	static int64_t t115 = 16854718215157LL;

    t115 = (x461*(x462<=(x463&x464)));

    if (t115 != 1370902LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -1;
	int8_t x466 = -20;
	volatile uint64_t x467 = UINT64_MAX;
	uint32_t x468 = UINT32_MAX;
	static int32_t t116 = -29188361;

    t116 = (x465*(x466<=(x467&x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x470 = UINT8_MAX;
	static uint8_t x471 = UINT8_MAX;
	volatile int32_t t117 = 36765313;

    t117 = (x469*(x470<=(x471&x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x474 = UINT64_MAX;
	static volatile int8_t x475 = INT8_MAX;
	int64_t x476 = INT64_MIN;
	volatile int32_t t118 = -1;

    t118 = (x473*(x474<=(x475&x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x478 = -33LL;
	int64_t x479 = INT64_MIN;

    t119 = (x477*(x478<=(x479&x480)));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = 6222LL;
	uint64_t x484 = 16922727263468LLU;
	static volatile int64_t t120 = -8306LL;

    t120 = (x481*(x482<=(x483&x484)));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 19U;
	int8_t x486 = INT8_MIN;
	int32_t x487 = INT32_MIN;
	static int32_t x488 = 12348498;
	volatile int32_t t121 = -752252;

    t121 = (x485*(x486<=(x487&x488)));

    if (t121 != 19) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x489 = INT16_MIN;
	static int8_t x490 = 31;
	int16_t x491 = INT16_MIN;
	volatile int16_t x492 = -57;
	int32_t t122 = 1845395;

    t122 = (x489*(x490<=(x491&x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = UINT16_MAX;
	uint16_t x495 = UINT16_MAX;
	volatile uint64_t x496 = 1150481LLU;
	volatile int32_t t123 = 93;

    t123 = (x493*(x494<=(x495&x496)));

    if (t123 != 65535) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x497 = -1;
	uint8_t x499 = UINT8_MAX;
	volatile int32_t t124 = -1499075;

    t124 = (x497*(x498<=(x499&x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = 17U;
	volatile uint16_t x502 = 15172U;
	static uint16_t x503 = 2049U;
	static uint16_t x504 = UINT16_MAX;
	volatile int32_t t125 = 1840806;

    t125 = (x501*(x502<=(x503&x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x508 = 4LLU;
	int32_t t126 = 394715446;

    t126 = (x505*(x506<=(x507&x508)));

    if (t126 != 109) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x510 = -1;
	static int8_t x512 = INT8_MIN;
	int32_t t127 = -16009;

    t127 = (x509*(x510<=(x511&x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = 14621782544509LL;
	int64_t x514 = INT64_MIN;
	volatile uint32_t x515 = 6U;
	int8_t x516 = 0;
	volatile int64_t t128 = 3702LL;

    t128 = (x513*(x514<=(x515&x516)));

    if (t128 != 14621782544509LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x517 = UINT32_MAX;
	volatile uint8_t x518 = UINT8_MAX;
	uint64_t x520 = UINT64_MAX;
	volatile uint32_t t129 = UINT32_MAX;

    t129 = (x517*(x518<=(x519&x520)));

    if (t129 != UINT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	int16_t x522 = -1;
	int32_t x523 = INT32_MIN;
	int16_t x524 = 13281;

    t130 = (x521*(x522<=(x523&x524)));

    if (t130 != INT32_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x526 = 36;
	int16_t x527 = -10665;
	int64_t x528 = -1LL;

    t131 = (x525*(x526<=(x527&x528)));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -1;
	int64_t x531 = INT64_MIN;
	uint64_t x532 = 460212327738655LLU;
	int32_t t132 = 8963;

    t132 = (x529*(x530<=(x531&x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = 546U;
	uint32_t x534 = 13U;
	int16_t x536 = -1392;
	uint32_t t133 = 31809U;

    t133 = (x533*(x534<=(x535&x536)));

    if (t133 != 546U) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x538 = INT32_MIN;
	uint8_t x539 = UINT8_MAX;
	volatile int8_t x540 = INT8_MAX;

    t134 = (x537*(x538<=(x539&x540)));

    if (t134 != 14737240007900561LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x541 = -182;
	uint64_t x542 = 12934379856LLU;
	uint8_t x543 = 0U;
	int64_t x544 = 2LL;
	volatile int32_t t135 = -1024570125;

    t135 = (x541*(x542<=(x543&x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -1;
	uint64_t x546 = 48992538662394LLU;
	uint64_t x547 = UINT64_MAX;
	int32_t x548 = INT32_MIN;
	volatile int32_t t136 = 20852;

    t136 = (x545*(x546<=(x547&x548)));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x549 = -1;
	static volatile int8_t x550 = -2;
	int8_t x551 = INT8_MIN;
	volatile int32_t t137 = 465863295;

    t137 = (x549*(x550<=(x551&x552)));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 37513U;
	static uint64_t x554 = 13940472LLU;
	int32_t x555 = INT32_MIN;
	int64_t x556 = -5LL;
	volatile uint32_t t138 = 4002508U;

    t138 = (x553*(x554<=(x555&x556)));

    if (t138 != 37513U) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MAX;
	static uint32_t x558 = UINT32_MAX;
	int8_t x560 = INT8_MIN;
	volatile int32_t t139 = 13012;

    t139 = (x557*(x558<=(x559&x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = -303;
	int16_t x563 = INT16_MAX;
	static volatile int32_t x564 = INT32_MAX;
	volatile int32_t t140 = INT32_MAX;

    t140 = (x561*(x562<=(x563&x564)));

    if (t140 != INT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x565 = 682911U;
	int64_t x566 = -7340593105LL;
	uint8_t x567 = 10U;
	int64_t x568 = INT64_MAX;

    t141 = (x565*(x566<=(x567&x568)));

    if (t141 != 682911U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 3290168U;
	uint64_t x570 = 1LLU;
	int64_t x571 = -1LL;
	int32_t x572 = 1;

    t142 = (x569*(x570<=(x571&x572)));

    if (t142 != 3290168U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MAX;
	volatile int32_t x574 = -1;
	uint8_t x575 = 2U;
	static int16_t x576 = INT16_MIN;
	int32_t t143 = 38603814;

    t143 = (x573*(x574<=(x575&x576)));

    if (t143 != 127) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = UINT16_MAX;
	int64_t x578 = 2529795LL;
	int32_t x579 = 995;
	int16_t x580 = 469;
	int32_t t144 = -9246418;

    t144 = (x577*(x578<=(x579&x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x582 = INT16_MIN;
	static uint64_t x583 = UINT64_MAX;
	uint64_t x584 = 5502029891717988LLU;
	int32_t t145 = -1;

    t145 = (x581*(x582<=(x583&x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 1LLU;
	int8_t x587 = INT8_MAX;
	int16_t x588 = INT16_MIN;
	static volatile uint64_t t146 = 1390501644304LLU;

    t146 = (x585*(x586<=(x587&x588)));

    if (t146 != 1LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x590 = 108811451U;
	int16_t x592 = 22;
	static volatile int64_t t147 = 14750048190073195LL;

    t147 = (x589*(x590<=(x591&x592)));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = -1;
	uint64_t x594 = UINT64_MAX;
	volatile uint8_t x595 = 41U;
	int32_t t148 = -1;

    t148 = (x593*(x594<=(x595&x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x598 = UINT16_MAX;
	uint64_t x599 = 353564LLU;
	volatile int32_t t149 = 3062;

    t149 = (x597*(x598<=(x599&x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MIN;
	volatile uint64_t x602 = 832414023015277998LLU;
	volatile int32_t x603 = -1;
	static uint32_t x604 = 1238U;
	int64_t t150 = -9663370LL;

    t150 = (x601*(x602<=(x603&x604)));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x605 = INT32_MIN;
	volatile int64_t x606 = -48900533236256255LL;

    t151 = (x605*(x606<=(x607&x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x611 = 59;
	int64_t t152 = 95923350LL;

    t152 = (x609*(x610<=(x611&x612)));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = INT32_MIN;
	int32_t x614 = INT32_MAX;
	int64_t x615 = INT64_MAX;
	int64_t x616 = INT64_MAX;
	int32_t t153 = INT32_MIN;

    t153 = (x613*(x614<=(x615&x616)));

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = INT16_MAX;
	int8_t x618 = -1;
	uint32_t x619 = 46038654U;
	int16_t x620 = INT16_MIN;

    t154 = (x617*(x618<=(x619&x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -2;
	volatile uint64_t x623 = 1345889741884371156LLU;
	volatile uint8_t x624 = UINT8_MAX;
	int32_t t155 = 50;

    t155 = (x621*(x622<=(x623&x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x626 = INT32_MAX;
	int16_t x627 = INT16_MIN;

    t156 = (x625*(x626<=(x627&x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x630 = 2;
	int64_t x631 = -2296772971263LL;
	volatile uint64_t t157 = 14600184759164288LLU;

    t157 = (x629*(x630<=(x631&x632)));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 227430454U;
	uint8_t x634 = UINT8_MAX;
	int8_t x635 = INT8_MIN;
	uint32_t t158 = 10859U;

    t158 = (x633*(x634<=(x635&x636)));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x637 = INT32_MIN;
	uint8_t x638 = 59U;
	uint64_t x640 = 21272LLU;
	volatile int32_t t159 = INT32_MIN;

    t159 = (x637*(x638<=(x639&x640)));

    if (t159 != INT32_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x642 = 862193338658723780LLU;
	volatile int64_t x643 = INT64_MIN;
	volatile uint32_t t160 = UINT32_MAX;

    t160 = (x641*(x642<=(x643&x644)));

    if (t160 != UINT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x647 = 8U;
	static int32_t x648 = INT32_MIN;
	static volatile int32_t t161 = INT32_MIN;

    t161 = (x645*(x646<=(x647&x648)));

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x649 = INT16_MIN;
	uint16_t x650 = UINT16_MAX;
	static uint8_t x651 = UINT8_MAX;
	int32_t t162 = 305;

    t162 = (x649*(x650<=(x651&x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x655 = -1;
	int32_t t163 = INT32_MAX;

    t163 = (x653*(x654<=(x655&x656)));

    if (t163 != INT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	static int32_t x658 = -101;
	volatile int64_t x659 = INT64_MIN;
	volatile int32_t t164 = -17;

    t164 = (x657*(x658<=(x659&x660)));

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x661 = 167461;
	int32_t x662 = INT32_MIN;
	int32_t x663 = INT32_MIN;
	static volatile int32_t t165 = 96;

    t165 = (x661*(x662<=(x663&x664)));

    if (t165 != 167461) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	int32_t x668 = INT32_MIN;
	static int32_t t166 = INT32_MIN;

    t166 = (x665*(x666<=(x667&x668)));

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x671 = UINT64_MAX;
	volatile int64_t t167 = -924LL;

    t167 = (x669*(x670<=(x671&x672)));

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x673 = 1037U;
	int32_t x674 = -1;
	uint64_t x675 = 3457338379693499LLU;
	volatile int8_t x676 = INT8_MIN;
	static int32_t t168 = 1250106;

    t168 = (x673*(x674<=(x675&x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = -1;
	int16_t x678 = 5447;
	int64_t x679 = -1LL;
	int32_t x680 = INT32_MIN;
	int32_t t169 = 67;

    t169 = (x677*(x678<=(x679&x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x681 = 1;
	uint8_t x683 = UINT8_MAX;
	uint64_t x684 = 1713338860LLU;
	volatile int32_t t170 = 67;

    t170 = (x681*(x682<=(x683&x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x687 = INT64_MIN;
	uint32_t x688 = 51257U;
	int32_t t171 = 558205;

    t171 = (x685*(x686<=(x687&x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x689 = 5930087LLU;
	int8_t x690 = INT8_MIN;
	int8_t x691 = INT8_MAX;
	int32_t x692 = INT32_MIN;

    t172 = (x689*(x690<=(x691&x692)));

    if (t172 != 5930087LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x693 = 453673114U;
	static uint16_t x694 = 162U;
	volatile int16_t x695 = INT16_MIN;
	int64_t x696 = 3188131006232535303LL;
	volatile uint32_t t173 = 7879201U;

    t173 = (x693*(x694<=(x695&x696)));

    if (t173 != 453673114U) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x697 = INT64_MAX;
	volatile int32_t x698 = INT32_MIN;
	int32_t x700 = INT32_MIN;
	int64_t t174 = INT64_MAX;

    t174 = (x697*(x698<=(x699&x700)));

    if (t174 != INT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = 61U;
	int16_t x702 = -10;
	int8_t x704 = INT8_MIN;
	uint32_t t175 = 5U;

    t175 = (x701*(x702<=(x703&x704)));

    if (t175 != 61U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = 55LL;
	uint16_t x706 = 2U;
	int16_t x708 = -7505;
	volatile int64_t t176 = 30LL;

    t176 = (x705*(x706<=(x707&x708)));

    if (t176 != 55LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x709 = 42U;
	volatile int64_t x710 = 776LL;
	int64_t x712 = INT64_MIN;
	volatile int32_t t177 = -3;

    t177 = (x709*(x710<=(x711&x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x714 = INT64_MIN;
	uint8_t x716 = 1U;
	volatile uint32_t t178 = UINT32_MAX;

    t178 = (x713*(x714<=(x715&x716)));

    if (t178 != UINT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x718 = INT64_MAX;
	uint64_t x719 = 46314999793653082LLU;
	volatile int8_t x720 = 6;
	uint32_t t179 = 3177613U;

    t179 = (x717*(x718<=(x719&x720)));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = -56;
	int32_t x722 = INT32_MIN;
	uint8_t x723 = 10U;
	int64_t x724 = -420LL;
	int32_t t180 = -370;

    t180 = (x721*(x722<=(x723&x724)));

    if (t180 != -56) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = -9338936471606882LL;
	int32_t x726 = 22757;
	volatile int8_t x727 = -1;
	uint32_t x728 = UINT32_MAX;
	int64_t t181 = -5LL;

    t181 = (x725*(x726<=(x727&x728)));

    if (t181 != -9338936471606882LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x729 = INT32_MIN;
	int8_t x730 = 7;
	uint64_t x731 = 14224LLU;
	static int32_t x732 = INT32_MIN;
	static volatile int32_t t182 = 2398826;

    t182 = (x729*(x730<=(x731&x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x734 = 3U;
	int32_t x735 = INT32_MIN;
	int32_t x736 = INT32_MIN;

    t183 = (x733*(x734<=(x735&x736)));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -1;
	int16_t x738 = INT16_MIN;
	int8_t x739 = INT8_MIN;
	static uint16_t x740 = 5872U;
	int32_t t184 = 42157828;

    t184 = (x737*(x738<=(x739&x740)));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t t185 = 0;

    t185 = (x741*(x742<=(x743&x744)));

    if (t185 != 32767) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x745 = 6U;
	static int16_t x746 = 2102;
	uint32_t x747 = 109067U;
	int32_t x748 = -1;
	int32_t t186 = 3783735;

    t186 = (x745*(x746<=(x747&x748)));

    if (t186 != 6) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = UINT8_MAX;
	static volatile int16_t x750 = INT16_MIN;
	volatile uint64_t x751 = 95LLU;

    t187 = (x749*(x750<=(x751&x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -1098997002148LL;
	int64_t x754 = INT64_MIN;
	int32_t x755 = INT32_MIN;
	volatile int64_t t188 = 66LL;

    t188 = (x753*(x754<=(x755&x756)));

    if (t188 != -1098997002148LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 4720037LLU;
	static int16_t x758 = -1;
	int16_t x759 = INT16_MIN;
	uint64_t x760 = 1056269839LLU;
	volatile uint64_t t189 = 33LLU;

    t189 = (x757*(x758<=(x759&x760)));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = -925505181079LL;
	int16_t x762 = -1;
	int64_t x763 = -228023954607902917LL;
	int16_t x764 = INT16_MIN;

    t190 = (x761*(x762<=(x763&x764)));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x765 = INT64_MIN;
	static uint16_t x766 = UINT16_MAX;
	uint64_t x767 = UINT64_MAX;
	int8_t x768 = INT8_MIN;
	static volatile int64_t t191 = INT64_MIN;

    t191 = (x765*(x766<=(x767&x768)));

    if (t191 != INT64_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x769 = INT64_MIN;
	int32_t x770 = -1;
	static int64_t t192 = 20908006LL;

    t192 = (x769*(x770<=(x771&x772)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = -1;
	int64_t x774 = INT64_MIN;
	uint32_t x775 = 603U;
	int32_t x776 = -427706;
	static volatile int32_t t193 = 61598;

    t193 = (x773*(x774<=(x775&x776)));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x778 = INT8_MIN;
	int64_t x779 = INT64_MAX;
	int8_t x780 = INT8_MAX;
	int32_t t194 = 179792;

    t194 = (x777*(x778<=(x779&x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x781 = INT64_MAX;
	int64_t x782 = -616775969867250203LL;
	static volatile int8_t x783 = INT8_MIN;
	volatile int32_t x784 = -1;
	static volatile int64_t t195 = INT64_MAX;

    t195 = (x781*(x782<=(x783&x784)));

    if (t195 != INT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x785 = UINT64_MAX;
	int64_t x786 = -1LL;
	int64_t x787 = 0LL;
	int8_t x788 = -1;
	static volatile uint64_t t196 = UINT64_MAX;

    t196 = (x785*(x786<=(x787&x788)));

    if (t196 != UINT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x789 = 1U;
	static volatile uint64_t x790 = 22LLU;
	volatile int32_t t197 = -446932;

    t197 = (x789*(x790<=(x791&x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MIN;
	uint32_t x794 = 27U;
	static uint32_t x795 = 460U;
	static int64_t x796 = 34874879732045LL;
	int32_t t198 = INT32_MIN;

    t198 = (x793*(x794<=(x795&x796)));

    if (t198 != INT32_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint32_t x797 = UINT32_MAX;
	static volatile uint64_t x798 = 4686158705492LLU;
	int8_t x799 = -1;
	static int8_t x800 = -1;
	uint32_t t199 = UINT32_MAX;

    t199 = (x797*(x798<=(x799&x800)));

    if (t199 != UINT32_MAX) { NG(); } else { ; }
	
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

