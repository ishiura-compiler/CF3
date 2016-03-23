
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

uint16_t x3 = 0U;
int8_t x5 = INT8_MIN;
int16_t x6 = -1;
volatile uint32_t x7 = UINT32_MAX;
volatile int32_t x12 = -1;
static int8_t x14 = -2;
uint64_t x26 = 4125446864312LLU;
uint64_t t7 = UINT64_MAX;
int8_t x36 = INT8_MIN;
uint8_t x46 = 29U;
int8_t x47 = INT8_MIN;
int64_t x48 = -1LL;
int8_t x57 = 1;
volatile uint32_t x61 = 763685U;
int16_t x64 = INT16_MIN;
static uint64_t x70 = UINT64_MAX;
static volatile uint32_t t19 = 951587417U;
static volatile int32_t x88 = -503;
volatile int32_t t21 = 1;
uint64_t x91 = 199695LLU;
int64_t x92 = 3498546778407LL;
uint16_t x96 = UINT16_MAX;
uint16_t x97 = 28022U;
int64_t x99 = INT64_MIN;
static uint32_t x100 = 5790409U;
static volatile int32_t t24 = 195;
uint16_t x111 = 7U;
int32_t t31 = 953999;
static int8_t x129 = -14;
int16_t x133 = INT16_MAX;
int8_t x144 = INT8_MAX;
volatile int32_t t35 = 0;
static uint32_t x146 = 10U;
uint64_t x147 = 93965189779184LLU;
uint32_t x154 = UINT32_MAX;
int8_t x168 = INT8_MIN;
uint16_t x169 = 95U;
uint32_t x173 = 20594424U;
uint8_t x180 = 52U;
uint8_t x187 = 6U;
int64_t t46 = -59448LL;
volatile int8_t x192 = -29;
uint8_t x195 = 0U;
volatile uint64_t x198 = 10213449452071423LLU;
uint32_t x203 = 24621891U;
int32_t x207 = -315;
static int8_t x210 = INT8_MAX;
uint8_t x211 = 2U;
static int64_t x215 = INT64_MAX;
volatile int64_t t53 = INT64_MAX;
volatile uint32_t x220 = 1559U;
volatile int32_t x222 = INT32_MIN;
static int64_t x226 = -1LL;
int64_t x230 = -1LL;
uint64_t t58 = 113346414LLU;
static int16_t x239 = INT16_MAX;
uint64_t t60 = 973277LLU;
static int8_t x245 = -4;
volatile int16_t x246 = INT16_MIN;
static uint16_t x252 = 0U;
int8_t x255 = -1;
int16_t x259 = -2;
uint8_t x261 = 3U;
int16_t x266 = INT16_MIN;
uint16_t x268 = 1353U;
uint16_t x277 = UINT16_MAX;
volatile int32_t t69 = 1595;
int16_t x282 = 2;
volatile int64_t t70 = -326767311923885596LL;
uint32_t x292 = UINT32_MAX;
volatile int32_t t72 = -75573512;
int8_t x299 = INT8_MAX;
int64_t x305 = -1LL;
volatile int64_t x311 = INT64_MIN;
int64_t x313 = INT64_MIN;
volatile int64_t t78 = INT64_MIN;
int64_t x318 = -51672193348460LL;
static int32_t x320 = 80743;
volatile uint32_t x336 = 16324U;
static uint8_t x343 = UINT8_MAX;
int8_t x347 = INT8_MIN;
int64_t x355 = INT64_MIN;
volatile int8_t x356 = -1;
uint16_t x365 = 1U;
int32_t t91 = -589;
int32_t x374 = INT32_MIN;
static volatile uint8_t x382 = 29U;
int16_t x384 = -1;
int32_t x386 = -971824;
int8_t x390 = INT8_MAX;
int64_t x391 = 3093190LL;
int8_t x392 = INT8_MAX;
uint16_t x401 = 0U;
uint16_t x407 = UINT16_MAX;
int32_t x408 = 104;
int32_t t102 = INT32_MIN;
volatile uint64_t t103 = UINT64_MAX;
uint32_t x426 = UINT32_MAX;
uint16_t x429 = UINT16_MAX;
static int8_t x430 = INT8_MIN;
int16_t x431 = INT16_MIN;
static uint8_t x437 = 55U;
int64_t x439 = 1LL;
static int8_t x440 = -5;
int64_t x445 = -1LL;
int64_t t111 = 7649LL;
volatile uint64_t x451 = 9028030LLU;
int8_t x457 = 0;
int8_t x459 = INT8_MAX;
volatile int16_t x460 = -65;
uint64_t x464 = UINT64_MAX;
int16_t x467 = -3;
static int16_t x468 = INT16_MIN;
int32_t x470 = INT32_MAX;
int32_t t117 = 92403;
static volatile uint32_t x480 = 80U;
int8_t x481 = INT8_MIN;
volatile int32_t x483 = INT32_MIN;
int8_t x484 = -7;
volatile uint16_t x485 = 1U;
static volatile int16_t x486 = 1;
static int32_t x487 = INT32_MAX;
volatile uint32_t x494 = 129225U;
int32_t x497 = 45;
int8_t x507 = INT8_MIN;
volatile int64_t x509 = INT64_MIN;
int64_t t127 = -254228902720027LL;
static volatile int32_t x513 = -355064930;
int64_t x514 = INT64_MIN;
volatile uint16_t x515 = 3U;
static int16_t x518 = INT16_MAX;
static int16_t x519 = INT16_MAX;
int8_t x522 = INT8_MAX;
int64_t x523 = 4404897712664879LL;
volatile int32_t x529 = 729;
static uint32_t x536 = 22U;
volatile int32_t t134 = -646575;
uint64_t t135 = 781LLU;
static int32_t x545 = -67;
int64_t x546 = INT64_MIN;
int8_t x549 = INT8_MIN;
static int32_t x551 = -1;
int8_t x562 = -1;
int8_t x564 = INT8_MIN;
int16_t x567 = -1;
int32_t t141 = -12;
int64_t x573 = INT64_MIN;
static int16_t x575 = INT16_MIN;
static int64_t t143 = INT64_MIN;
int32_t x582 = INT32_MIN;
int64_t x584 = INT64_MIN;
uint8_t x590 = 0U;
int32_t t148 = 5901567;
int8_t x597 = 6;
int8_t x600 = -1;
int32_t t149 = -13;
uint64_t x603 = 2284116977714552LLU;
int32_t x604 = -289477127;
int16_t x616 = 574;
int16_t x620 = INT16_MAX;
static volatile int32_t t154 = 30705329;
int64_t x624 = INT64_MAX;
static volatile int32_t x629 = -1;
int32_t t159 = -1047368;
static int64_t x642 = INT64_MAX;
static int32_t t161 = 18947633;
volatile int64_t x652 = -34769463907LL;
volatile int64_t x655 = 417LL;
uint8_t x665 = UINT8_MAX;
int64_t x674 = INT64_MIN;
int8_t x680 = -2;
int32_t x683 = -48;
static uint16_t x689 = UINT16_MAX;
volatile int8_t x693 = INT8_MAX;
int16_t x696 = -7016;
static int64_t x699 = INT64_MIN;
int64_t x700 = INT64_MIN;
static int8_t x701 = -1;
int32_t x704 = -1;
uint16_t x706 = UINT16_MAX;
volatile int8_t x709 = 1;
static uint8_t x711 = UINT8_MAX;
int8_t x712 = -30;
int8_t x713 = -42;
static int64_t x716 = INT64_MAX;
static volatile uint8_t x724 = UINT8_MAX;
volatile uint16_t x728 = 9U;
uint32_t x729 = 854574U;
volatile uint32_t t182 = 2209U;
int8_t x735 = INT8_MIN;
uint64_t x738 = 12432771785LLU;
static uint16_t x739 = 29U;
int16_t x744 = INT16_MAX;
int8_t x745 = 8;
int8_t x747 = -1;
uint16_t x753 = 129U;
static volatile int64_t x760 = INT64_MIN;
int32_t x761 = -1;
static volatile int32_t t190 = -70765995;
uint64_t x772 = UINT64_MAX;
static int8_t x775 = -1;
int16_t x784 = INT16_MAX;
static int8_t x786 = INT8_MIN;
static int8_t x788 = INT8_MIN;
int8_t x790 = 0;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	static uint64_t x2 = UINT64_MAX;
	static int32_t x4 = INT32_MAX;
	int32_t t0 = -11576;

    t0 = (x1*(x2>(x3^x4)));

    if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x8 = 1497U;
	static int32_t t1 = -7;

    t1 = (x5*(x6>(x7^x8)));

    if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = 5U;
	volatile uint32_t x10 = 55442215U;
	volatile int32_t x11 = INT32_MIN;
	uint32_t t2 = 6866U;

    t2 = (x9*(x10>(x11^x12)));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 83LL;
	static int8_t x15 = INT8_MAX;
	int32_t x16 = 0;
	volatile int64_t t3 = 666241501LL;

    t3 = (x13*(x14>(x15^x16)));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -130081894166LL;
	volatile uint8_t x18 = 5U;
	static uint32_t x19 = 6511866U;
	volatile int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 100LL;

    t4 = (x17*(x18>(x19^x20)));

    if (t4 != -130081894166LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	uint32_t x22 = 2169U;
	uint32_t x23 = 9150U;
	int64_t x24 = INT64_MIN;
	volatile uint64_t t5 = UINT64_MAX;

    t5 = (x21*(x22>(x23^x24)));

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	int64_t x27 = 511323555692776LL;
	volatile int32_t x28 = INT32_MIN;
	int32_t t6 = -1;

    t6 = (x25*(x26>(x27^x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	uint32_t x30 = 449136787U;
	int16_t x31 = INT16_MAX;
	int64_t x32 = -1LL;

    t7 = (x29*(x30>(x31^x32)));

    if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MAX;
	uint8_t x34 = 14U;
	volatile int32_t x35 = 216981569;
	int32_t t8 = INT32_MAX;

    t8 = (x33*(x34>(x35^x36)));

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	volatile int16_t x38 = INT16_MIN;
	int8_t x39 = 1;
	int8_t x40 = -1;
	int32_t t9 = 80062;

    t9 = (x37*(x38>(x39^x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x41 = INT32_MIN;
	static uint32_t x42 = 2599U;
	int8_t x43 = -1;
	uint8_t x44 = 1U;
	volatile int32_t t10 = 27682999;

    t10 = (x41*(x42>(x43^x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 3U;
	uint32_t t11 = 2U;

    t11 = (x45*(x46>(x47^x48)));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -1;
	volatile int32_t x50 = INT32_MIN;
	int64_t x51 = INT64_MIN;
	volatile int64_t x52 = -1LL;
	int32_t t12 = -69656;

    t12 = (x49*(x50>(x51^x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -3;
	int16_t x54 = INT16_MAX;
	static uint64_t x55 = 5088021328LLU;
	int64_t x56 = -431851354664517LL;
	static volatile int32_t t13 = -350468;

    t13 = (x53*(x54>(x55^x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x58 = UINT16_MAX;
	volatile int32_t x59 = 455752297;
	uint16_t x60 = UINT16_MAX;
	int32_t t14 = -2963293;

    t14 = (x57*(x58>(x59^x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x62 = 78411204LL;
	int64_t x63 = INT64_MAX;
	uint32_t t15 = 6091U;

    t15 = (x61*(x62>(x63^x64)));

    if (t15 != 763685U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = -493;
	uint16_t x66 = 0U;
	static int16_t x67 = INT16_MAX;
	int16_t x68 = -1;
	volatile int32_t t16 = -9;

    t16 = (x65*(x66>(x67^x68)));

    if (t16 != -493) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = INT16_MIN;
	static int16_t x71 = INT16_MIN;
	int8_t x72 = INT8_MAX;
	volatile int32_t t17 = 1;

    t17 = (x69*(x70>(x71^x72)));

    if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = UINT16_MAX;
	int8_t x74 = INT8_MIN;
	volatile uint8_t x75 = 3U;
	int32_t x76 = 5746931;
	int32_t t18 = -53;

    t18 = (x73*(x74>(x75^x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 8688769U;
	uint8_t x78 = 1U;
	int64_t x79 = INT64_MIN;
	static int64_t x80 = -1LL;

    t19 = (x77*(x78>(x79^x80)));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -6;
	volatile int64_t x82 = INT64_MAX;
	static int64_t x83 = 3196899877097362LL;
	int8_t x84 = -1;
	volatile int32_t t20 = 14566;

    t20 = (x81*(x82>(x83^x84)));

    if (t20 != -6) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x85 = INT32_MAX;
	uint16_t x86 = 7U;
	volatile int32_t x87 = -1;

    t21 = (x85*(x86>(x87^x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x89 = -851477;
	volatile int8_t x90 = INT8_MIN;
	int32_t t22 = -307646578;

    t22 = (x89*(x90>(x91^x92)));

    if (t22 != -851477) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = 9038;
	int16_t x94 = INT16_MIN;
	volatile int16_t x95 = -1;
	static volatile int32_t t23 = 252736;

    t23 = (x93*(x94>(x95^x96)));

    if (t23 != 9038) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x98 = INT64_MAX;

    t24 = (x97*(x98>(x99^x100)));

    if (t24 != 28022) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	int8_t x102 = INT8_MAX;
	uint16_t x103 = 58U;
	int8_t x104 = INT8_MAX;
	static volatile int32_t t25 = INT32_MIN;

    t25 = (x101*(x102>(x103^x104)));

    if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = UINT64_MAX;
	volatile int8_t x106 = INT8_MIN;
	uint32_t x107 = 337509084U;
	volatile uint32_t x108 = 186U;
	uint64_t t26 = UINT64_MAX;

    t26 = (x105*(x106>(x107^x108)));

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -1343144;
	uint16_t x110 = 2U;
	uint64_t x112 = UINT64_MAX;
	int32_t t27 = 231338305;

    t27 = (x109*(x110>(x111^x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = INT8_MIN;
	static uint32_t x114 = UINT32_MAX;
	uint8_t x115 = 0U;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = -65657371;

    t28 = (x113*(x114>(x115^x116)));

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = 22;
	static volatile int16_t x118 = INT16_MIN;
	int16_t x119 = INT16_MIN;
	volatile int64_t x120 = -537LL;
	int32_t t29 = 0;

    t29 = (x117*(x118>(x119^x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MAX;
	volatile int16_t x122 = INT16_MIN;
	static volatile int32_t x123 = INT32_MIN;
	int32_t x124 = INT32_MIN;
	volatile int32_t t30 = 21306255;

    t30 = (x121*(x122>(x123^x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MIN;
	int32_t x126 = INT32_MIN;
	volatile uint32_t x127 = UINT32_MAX;
	uint64_t x128 = 749919LLU;

    t31 = (x125*(x126>(x127^x128)));

    if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x130 = -4394828LL;
	int16_t x131 = -4504;
	int8_t x132 = -1;
	int32_t t32 = 16237745;

    t32 = (x129*(x130>(x131^x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x134 = -1;
	uint32_t x135 = UINT32_MAX;
	int32_t x136 = INT32_MIN;
	int32_t t33 = 1020677;

    t33 = (x133*(x134>(x135^x136)));

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = -1;
	uint32_t x138 = 203U;
	int8_t x139 = INT8_MIN;
	volatile int32_t x140 = INT32_MIN;
	static int32_t t34 = 17974198;

    t34 = (x137*(x138>(x139^x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	static int64_t x142 = INT64_MIN;
	volatile int16_t x143 = INT16_MIN;

    t35 = (x141*(x142>(x143^x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	int32_t x148 = INT32_MAX;
	static int32_t t36 = -2243;

    t36 = (x145*(x146>(x147^x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x149 = 114778337000087LLU;
	static volatile uint8_t x150 = UINT8_MAX;
	int16_t x151 = -411;
	uint64_t x152 = UINT64_MAX;
	static volatile uint64_t t37 = 48719696786LLU;

    t37 = (x149*(x150>(x151^x152)));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = INT8_MIN;
	int64_t x155 = INT64_MIN;
	int32_t x156 = INT32_MIN;
	int32_t t38 = 28605117;

    t38 = (x153*(x154>(x155^x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int64_t x157 = 95LL;
	int64_t x158 = INT64_MIN;
	volatile uint16_t x159 = 15675U;
	volatile int16_t x160 = INT16_MAX;
	volatile int64_t t39 = 63050463932316LL;

    t39 = (x157*(x158>(x159^x160)));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x161 = INT32_MAX;
	volatile int16_t x162 = INT16_MIN;
	uint32_t x163 = 1U;
	int64_t x164 = INT64_MAX;
	volatile int32_t t40 = 80;

    t40 = (x161*(x162>(x163^x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = UINT16_MAX;
	int8_t x166 = 53;
	int16_t x167 = INT16_MAX;
	int32_t t41 = 140;

    t41 = (x165*(x166>(x167^x168)));

    if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x170 = -1;
	static uint16_t x171 = UINT16_MAX;
	int64_t x172 = 14128765655534132LL;
	int32_t t42 = 2007354;

    t42 = (x169*(x170>(x171^x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x174 = -9205;
	uint32_t x175 = UINT32_MAX;
	int32_t x176 = INT32_MAX;
	static volatile uint32_t t43 = 13U;

    t43 = (x173*(x174>(x175^x176)));

    if (t43 != 20594424U) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x177 = 481973LLU;
	int64_t x178 = -1LL;
	volatile uint32_t x179 = UINT32_MAX;
	volatile uint64_t t44 = 1224310090864LLU;

    t44 = (x177*(x178>(x179^x180)));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x181 = INT64_MIN;
	uint64_t x182 = UINT64_MAX;
	int64_t x183 = INT64_MIN;
	static uint16_t x184 = UINT16_MAX;
	volatile int64_t t45 = INT64_MIN;

    t45 = (x181*(x182>(x183^x184)));

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = 21LL;
	static uint16_t x186 = 116U;
	static uint64_t x188 = 15715337695906827LLU;

    t46 = (x185*(x186>(x187^x188)));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 24463U;
	int64_t x190 = 189486251420LL;
	static uint8_t x191 = 55U;
	int32_t t47 = -8439;

    t47 = (x189*(x190>(x191^x192)));

    if (t47 != 24463) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = INT32_MIN;
	volatile int32_t x194 = 758807;
	volatile uint32_t x196 = 797596355U;
	static int32_t t48 = 8774;

    t48 = (x193*(x194>(x195^x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = 18;
	static uint8_t x199 = UINT8_MAX;
	int16_t x200 = -59;
	volatile int32_t t49 = -13550043;

    t49 = (x197*(x198>(x199^x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 1464214088872LLU;
	int16_t x202 = -1;
	static int16_t x204 = INT16_MAX;
	volatile uint64_t t50 = 2223082LLU;

    t50 = (x201*(x202>(x203^x204)));

    if (t50 != 1464214088872LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = UINT32_MAX;
	int64_t x206 = -281089LL;
	int8_t x208 = INT8_MIN;
	uint32_t t51 = 330618871U;

    t51 = (x205*(x206>(x207^x208)));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x209 = -1;
	static int64_t x212 = 1LL;
	volatile int32_t t52 = 409;

    t52 = (x209*(x210>(x211^x212)));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MAX;
	int8_t x214 = 2;
	int64_t x216 = INT64_MIN;

    t53 = (x213*(x214>(x215^x216)));

    if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = 1LL;
	static int64_t x218 = INT64_MAX;
	int8_t x219 = INT8_MAX;
	volatile int64_t t54 = 137LL;

    t54 = (x217*(x218>(x219^x220)));

    if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = UINT64_MAX;
	static int64_t x223 = INT64_MAX;
	static int8_t x224 = INT8_MIN;
	volatile uint64_t t55 = UINT64_MAX;

    t55 = (x221*(x222>(x223^x224)));

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = 12562;
	int16_t x227 = INT16_MIN;
	uint64_t x228 = 2899812653449LLU;
	int32_t t56 = -576568609;

    t56 = (x225*(x226>(x227^x228)));

    if (t56 != 12562) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int64_t x229 = -23LL;
	static volatile int64_t x231 = INT64_MIN;
	uint32_t x232 = UINT32_MAX;
	int64_t t57 = -11363545482LL;

    t57 = (x229*(x230>(x231^x232)));

    if (t57 != -23LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 17750LLU;
	uint8_t x234 = 24U;
	uint16_t x235 = UINT16_MAX;
	static volatile int16_t x236 = 450;

    t58 = (x233*(x234>(x235^x236)));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -1;
	static int8_t x238 = INT8_MIN;
	uint64_t x240 = 5729LLU;
	volatile int32_t t59 = -9856529;

    t59 = (x237*(x238>(x239^x240)));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 24696916256156114LLU;
	static int32_t x242 = INT32_MAX;
	uint16_t x243 = 25721U;
	volatile uint16_t x244 = 9U;

    t60 = (x241*(x242>(x243^x244)));

    if (t60 != 24696916256156114LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x247 = 1LL;
	static int16_t x248 = INT16_MIN;
	static volatile int32_t t61 = 5442140;

    t61 = (x245*(x246>(x247^x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x249 = INT64_MAX;
	uint8_t x250 = UINT8_MAX;
	int32_t x251 = INT32_MIN;
	int64_t t62 = INT64_MAX;

    t62 = (x249*(x250>(x251^x252)));

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x253 = -3;
	int16_t x254 = -1;
	volatile int64_t x256 = -77293LL;
	volatile int32_t t63 = -2842;

    t63 = (x253*(x254>(x255^x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = 30651693LL;
	int8_t x258 = 0;
	uint16_t x260 = 31043U;
	static int64_t t64 = 28LL;

    t64 = (x257*(x258>(x259^x260)));

    if (t64 != 30651693LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x262 = INT32_MIN;
	int64_t x263 = 1LL;
	int8_t x264 = INT8_MIN;
	volatile int32_t t65 = -43;

    t65 = (x261*(x262>(x263^x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = 1;
	int64_t x267 = INT64_MIN;
	static volatile int32_t t66 = -105666;

    t66 = (x265*(x266>(x267^x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MIN;
	int32_t x270 = INT32_MIN;
	uint16_t x271 = 20U;
	volatile int32_t x272 = -2087457;
	int32_t t67 = 3735;

    t67 = (x269*(x270>(x271^x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = 183501667101LL;
	int32_t x274 = 199283;
	uint32_t x275 = 497336U;
	int32_t x276 = INT32_MIN;
	volatile int64_t t68 = 1929384736LL;

    t68 = (x273*(x274>(x275^x276)));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x278 = INT16_MIN;
	int32_t x279 = -1;
	int32_t x280 = -1;

    t69 = (x277*(x278>(x279^x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = 2520529073198LL;
	int64_t x283 = 169LL;
	int64_t x284 = INT64_MIN;

    t70 = (x281*(x282>(x283^x284)));

    if (t70 != 2520529073198LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x285 = 28;
	static uint8_t x286 = 0U;
	int32_t x287 = -15741760;
	int32_t x288 = 1;
	volatile int32_t t71 = 341177;

    t71 = (x285*(x286>(x287^x288)));

    if (t71 != 28) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 0U;
	static int32_t x290 = 7934;
	volatile int32_t x291 = -1;

    t72 = (x289*(x290>(x291^x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MIN;
	uint64_t x294 = 1155414305LLU;
	static volatile int16_t x295 = -1;
	static volatile int32_t x296 = 251156;
	static volatile int32_t t73 = 2991;

    t73 = (x293*(x294>(x295^x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = 1U;
	static int32_t x298 = INT32_MIN;
	int64_t x300 = -43138331024LL;
	int32_t t74 = -385979381;

    t74 = (x297*(x298>(x299^x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x301 = 4891U;
	static int16_t x302 = 0;
	volatile int64_t x303 = INT64_MAX;
	int16_t x304 = INT16_MIN;
	volatile uint32_t t75 = 195U;

    t75 = (x301*(x302>(x303^x304)));

    if (t75 != 4891U) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x306 = INT32_MIN;
	uint64_t x307 = 7841LLU;
	int16_t x308 = INT16_MIN;
	volatile int64_t t76 = 0LL;

    t76 = (x305*(x306>(x307^x308)));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x309 = INT64_MIN;
	uint16_t x310 = 0U;
	uint64_t x312 = 45146252786741LLU;
	int64_t t77 = 51672503836LL;

    t77 = (x309*(x310>(x311^x312)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x314 = INT16_MAX;
	int32_t x315 = INT32_MIN;
	uint8_t x316 = 0U;

    t78 = (x313*(x314>(x315^x316)));

    if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 226U;
	int16_t x319 = INT16_MIN;
	volatile int32_t t79 = -72076;

    t79 = (x317*(x318>(x319^x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = -6061900783686LL;
	volatile int16_t x322 = -43;
	static uint32_t x323 = 22619U;
	int16_t x324 = INT16_MIN;
	int64_t t80 = -6757284197LL;

    t80 = (x321*(x322>(x323^x324)));

    if (t80 != -6061900783686LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x325 = 2LLU;
	static int8_t x326 = -4;
	int16_t x327 = -1;
	int16_t x328 = INT16_MIN;
	uint64_t t81 = 151919786516872LLU;

    t81 = (x325*(x326>(x327^x328)));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MIN;
	int32_t x330 = INT32_MIN;
	uint32_t x331 = UINT32_MAX;
	int64_t x332 = INT64_MIN;
	volatile int32_t t82 = INT32_MIN;

    t82 = (x329*(x330>(x331^x332)));

    if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 738121360U;
	uint64_t x334 = UINT64_MAX;
	int8_t x335 = INT8_MAX;
	volatile uint32_t t83 = 15513080U;

    t83 = (x333*(x334>(x335^x336)));

    if (t83 != 738121360U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = INT32_MAX;
	static int8_t x338 = -1;
	int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MIN;
	int32_t t84 = -8268441;

    t84 = (x337*(x338>(x339^x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = 26U;
	uint64_t x342 = 6LLU;
	uint8_t x344 = 23U;
	volatile int32_t t85 = 380845;

    t85 = (x341*(x342>(x343^x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = -2062;
	int8_t x346 = -13;
	volatile int64_t x348 = -747122200037LL;
	int32_t t86 = 7672;

    t86 = (x345*(x346>(x347^x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = UINT8_MAX;
	static int8_t x350 = 0;
	int32_t x351 = 383979;
	uint16_t x352 = 1061U;
	static int32_t t87 = -553119033;

    t87 = (x349*(x350>(x351^x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MAX;
	static volatile int32_t x354 = INT32_MIN;
	static volatile int32_t t88 = 166637669;

    t88 = (x353*(x354>(x355^x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x357 = -28;
	int32_t x358 = -469700;
	int64_t x359 = INT64_MIN;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t89 = -28;

    t89 = (x357*(x358>(x359^x360)));

    if (t89 != -28) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x361 = INT8_MIN;
	static int64_t x362 = 252LL;
	static int64_t x363 = INT64_MIN;
	static int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 265200;

    t90 = (x361*(x362>(x363^x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x366 = INT16_MIN;
	uint32_t x367 = 8689U;
	int64_t x368 = -1LL;

    t91 = (x365*(x366>(x367^x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x369 = INT64_MAX;
	int16_t x370 = -1;
	volatile uint64_t x371 = UINT64_MAX;
	int32_t x372 = 40804;
	volatile int64_t t92 = INT64_MAX;

    t92 = (x369*(x370>(x371^x372)));

    if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x373 = -1;
	volatile int8_t x375 = 1;
	volatile int64_t x376 = -112561LL;
	int32_t t93 = -35258;

    t93 = (x373*(x374>(x375^x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = 80879074323LL;
	int16_t x378 = INT16_MIN;
	int64_t x379 = INT64_MAX;
	int64_t x380 = -1LL;
	int64_t t94 = 3LL;

    t94 = (x377*(x378>(x379^x380)));

    if (t94 != 80879074323LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	static volatile int32_t x383 = INT32_MIN;
	volatile int32_t t95 = -100297945;

    t95 = (x381*(x382>(x383^x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = 1025304LL;
	int32_t x387 = 7558801;
	int8_t x388 = -7;
	static volatile int64_t t96 = -443681974647LL;

    t96 = (x385*(x386>(x387^x388)));

    if (t96 != 1025304LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = UINT64_MAX;
	volatile uint64_t t97 = 415991102921627730LLU;

    t97 = (x389*(x390>(x391^x392)));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 3U;
	int8_t x394 = 0;
	volatile uint32_t x395 = 1U;
	volatile int16_t x396 = INT16_MIN;
	static int32_t t98 = 60269;

    t98 = (x393*(x394>(x395^x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x397 = INT8_MAX;
	volatile int32_t x398 = 0;
	static int16_t x399 = 7;
	static uint16_t x400 = UINT16_MAX;
	static volatile int32_t t99 = -635829372;

    t99 = (x397*(x398>(x399^x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x402 = INT64_MAX;
	uint16_t x403 = 113U;
	uint8_t x404 = 13U;
	int32_t t100 = 0;

    t100 = (x401*(x402>(x403^x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = -3251;
	int16_t x406 = 0;
	static volatile int32_t t101 = 43788974;

    t101 = (x405*(x406>(x407^x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x409 = INT32_MIN;
	static uint32_t x410 = 7540U;
	uint16_t x411 = 2208U;
	uint16_t x412 = 1U;

    t102 = (x409*(x410>(x411^x412)));

    if (t102 != INT32_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = UINT64_MAX;
	int16_t x414 = 2;
	static volatile uint32_t x415 = UINT32_MAX;
	int32_t x416 = -1;

    t103 = (x413*(x414>(x415^x416)));

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 182361775U;
	uint32_t x418 = 2076679810U;
	int16_t x419 = INT16_MAX;
	int64_t x420 = -61823626456116338LL;
	volatile uint32_t t104 = 1648U;

    t104 = (x417*(x418>(x419^x420)));

    if (t104 != 182361775U) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x421 = 38;
	static int16_t x422 = INT16_MIN;
	int8_t x423 = INT8_MIN;
	static volatile int8_t x424 = -1;
	volatile int32_t t105 = 54759;

    t105 = (x421*(x422>(x423^x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 4000U;
	int64_t x427 = -864064LL;
	volatile uint64_t x428 = 48223697LLU;
	uint32_t t106 = 1705748162U;

    t106 = (x425*(x426>(x427^x428)));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x432 = INT8_MAX;
	int32_t t107 = 6030336;

    t107 = (x429*(x430>(x431^x432)));

    if (t107 != 65535) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 50LLU;
	int64_t x434 = -4383795104575LL;
	static int32_t x435 = INT32_MAX;
	int16_t x436 = INT16_MIN;
	uint64_t t108 = 1906023399668744LLU;

    t108 = (x433*(x434>(x435^x436)));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x438 = 613U;
	volatile int32_t t109 = 1;

    t109 = (x437*(x438>(x439^x440)));

    if (t109 != 55) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MIN;
	uint8_t x442 = UINT8_MAX;
	static int16_t x443 = -1;
	int64_t x444 = INT64_MIN;
	int32_t t110 = -304;

    t110 = (x441*(x442>(x443^x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x446 = -1;
	int32_t x447 = INT32_MIN;
	volatile uint32_t x448 = 4690U;

    t111 = (x445*(x446>(x447^x448)));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x449 = -372568941221186LL;
	uint64_t x450 = 2570709135LLU;
	int8_t x452 = INT8_MAX;
	int64_t t112 = 0LL;

    t112 = (x449*(x450>(x451^x452)));

    if (t112 != -372568941221186LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = 1U;
	static uint32_t x454 = 191013U;
	int8_t x455 = INT8_MIN;
	int16_t x456 = 158;
	volatile uint32_t t113 = 6U;

    t113 = (x453*(x454>(x455^x456)));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x458 = UINT8_MAX;
	volatile int32_t t114 = -4;

    t114 = (x457*(x458>(x459^x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int64_t x461 = -1030017646LL;
	int64_t x462 = INT64_MAX;
	static volatile uint8_t x463 = 0U;
	int64_t t115 = 769712LL;

    t115 = (x461*(x462>(x463^x464)));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int64_t x465 = -1LL;
	int8_t x466 = 14;
	int64_t t116 = -3347712672674LL;

    t116 = (x465*(x466>(x467^x468)));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 41U;
	static volatile int16_t x471 = -1;
	int64_t x472 = 58690140LL;

    t117 = (x469*(x470>(x471^x472)));

    if (t117 != 41) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 15929516951LLU;
	volatile int64_t x474 = INT64_MAX;
	uint32_t x475 = 1393317U;
	static int8_t x476 = -1;
	uint64_t t118 = 5633698678958304LLU;

    t118 = (x473*(x474>(x475^x476)));

    if (t118 != 15929516951LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -64946491;
	int8_t x478 = -1;
	volatile uint8_t x479 = 0U;
	int32_t t119 = -661055;

    t119 = (x477*(x478>(x479^x480)));

    if (t119 != -64946491) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x482 = INT16_MIN;
	int32_t t120 = 1363;

    t120 = (x481*(x482>(x483^x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x488 = INT64_MAX;
	volatile int32_t t121 = 35613;

    t121 = (x485*(x486>(x487^x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -1;
	int16_t x490 = INT16_MIN;
	volatile int32_t x491 = INT32_MIN;
	uint32_t x492 = 30350654U;
	int32_t t122 = -1697;

    t122 = (x489*(x490>(x491^x492)));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 2214376940105030LLU;
	int32_t x495 = INT32_MIN;
	static int64_t x496 = INT64_MIN;
	volatile uint64_t t123 = 26244034408143LLU;

    t123 = (x493*(x494>(x495^x496)));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x498 = INT32_MIN;
	int8_t x499 = INT8_MIN;
	int8_t x500 = INT8_MAX;
	volatile int32_t t124 = 43062;

    t124 = (x497*(x498>(x499^x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = 7;
	static int16_t x502 = 968;
	int64_t x503 = -1LL;
	int32_t x504 = INT32_MIN;
	volatile int32_t t125 = 408035;

    t125 = (x501*(x502>(x503^x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MIN;
	int32_t x506 = 2;
	uint16_t x508 = 26U;
	static volatile int32_t t126 = 7271;

    t126 = (x505*(x506>(x507^x508)));

    if (t126 != -32768) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x510 = 1;
	volatile uint32_t x511 = 3U;
	volatile int16_t x512 = -1;

    t127 = (x509*(x510>(x511^x512)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x516 = -45006902886LL;
	static int32_t t128 = -3;

    t128 = (x513*(x514>(x515^x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = -1;
	uint16_t x520 = 1262U;
	static int32_t t129 = 944943566;

    t129 = (x517*(x518>(x519^x520)));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = -1LL;
	uint64_t x524 = 5107053183LLU;
	int64_t t130 = 529638784353LL;

    t130 = (x521*(x522>(x523^x524)));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = UINT64_MAX;
	int64_t x526 = -1LL;
	static uint64_t x527 = 152926LLU;
	uint16_t x528 = 29U;
	static uint64_t t131 = UINT64_MAX;

    t131 = (x525*(x526>(x527^x528)));

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x530 = UINT16_MAX;
	int16_t x531 = -1;
	uint8_t x532 = 64U;
	volatile int32_t t132 = 507431090;

    t132 = (x529*(x530>(x531^x532)));

    if (t132 != 729) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x533 = -1LL;
	static volatile int8_t x534 = INT8_MIN;
	int32_t x535 = INT32_MIN;
	volatile int64_t t133 = 102327229575LL;

    t133 = (x533*(x534>(x535^x536)));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = -10516;
	int64_t x538 = INT64_MIN;
	static int32_t x539 = INT32_MIN;
	int64_t x540 = INT64_MAX;

    t134 = (x537*(x538>(x539^x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = 89787240LLU;
	int8_t x542 = INT8_MIN;
	int64_t x543 = 20LL;
	int8_t x544 = 0;

    t135 = (x541*(x542>(x543^x544)));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x547 = UINT64_MAX;
	int8_t x548 = -1;
	int32_t t136 = -650;

    t136 = (x545*(x546>(x547^x548)));

    if (t136 != -67) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x550 = INT32_MIN;
	uint32_t x552 = 27U;
	volatile int32_t t137 = 102;

    t137 = (x549*(x550>(x551^x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x553 = UINT16_MAX;
	uint64_t x554 = UINT64_MAX;
	static int64_t x555 = INT64_MAX;
	static volatile int16_t x556 = INT16_MIN;
	volatile int32_t t138 = -55490985;

    t138 = (x553*(x554>(x555^x556)));

    if (t138 != 65535) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x557 = 1957U;
	static int8_t x558 = INT8_MIN;
	uint8_t x559 = 78U;
	int64_t x560 = INT64_MAX;
	int32_t t139 = -24276653;

    t139 = (x557*(x558>(x559^x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = 241405LL;
	static uint8_t x563 = UINT8_MAX;
	int64_t t140 = 471201LL;

    t140 = (x561*(x562>(x563^x564)));

    if (t140 != 241405LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = 9;
	static int8_t x566 = INT8_MIN;
	uint16_t x568 = 203U;

    t141 = (x565*(x566>(x567^x568)));

    if (t141 != 9) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x569 = INT32_MIN;
	volatile uint64_t x570 = 15067657941LLU;
	static uint8_t x571 = UINT8_MAX;
	int64_t x572 = -3318LL;
	int32_t t142 = -2;

    t142 = (x569*(x570>(x571^x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x574 = UINT64_MAX;
	volatile int8_t x576 = 0;

    t143 = (x573*(x574>(x575^x576)));

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = 1U;
	int16_t x578 = INT16_MIN;
	volatile int16_t x579 = INT16_MIN;
	static int16_t x580 = INT16_MAX;
	static volatile int32_t t144 = -244366;

    t144 = (x577*(x578>(x579^x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = -1;
	static int16_t x583 = -1;
	int32_t t145 = 25;

    t145 = (x581*(x582>(x583^x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	volatile uint32_t x586 = 45U;
	uint16_t x587 = 9203U;
	int16_t x588 = 19;
	int32_t t146 = -1030878;

    t146 = (x585*(x586>(x587^x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MIN;
	volatile int32_t x591 = INT32_MAX;
	int32_t x592 = INT32_MAX;
	volatile int32_t t147 = 7;

    t147 = (x589*(x590>(x591^x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -1;
	static volatile int32_t x594 = INT32_MIN;
	static int64_t x595 = INT64_MIN;
	uint32_t x596 = 20U;

    t148 = (x593*(x594>(x595^x596)));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x598 = -1;
	volatile uint16_t x599 = UINT16_MAX;

    t149 = (x597*(x598>(x599^x600)));

    if (t149 != 6) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x601 = 817U;
	static int8_t x602 = 6;
	int32_t t150 = 14;

    t150 = (x601*(x602>(x603^x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MAX;
	int8_t x606 = -12;
	static int16_t x607 = -1;
	volatile int16_t x608 = 3703;
	int64_t t151 = INT64_MAX;

    t151 = (x605*(x606>(x607^x608)));

    if (t151 != INT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x609 = 2246219LL;
	int32_t x610 = -1;
	int64_t x611 = INT64_MIN;
	static uint16_t x612 = UINT16_MAX;
	static volatile int64_t t152 = 443801LL;

    t152 = (x609*(x610>(x611^x612)));

    if (t152 != 2246219LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = -1LL;
	uint8_t x614 = 5U;
	static int64_t x615 = INT64_MIN;
	volatile int64_t t153 = -1106LL;

    t153 = (x613*(x614>(x615^x616)));

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int8_t x617 = INT8_MIN;
	int8_t x618 = INT8_MIN;
	uint32_t x619 = 9U;

    t154 = (x617*(x618>(x619^x620)));

    if (t154 != -128) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MAX;
	static int8_t x622 = 1;
	uint16_t x623 = UINT16_MAX;
	int32_t t155 = 1291110;

    t155 = (x621*(x622>(x623^x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -494660447644796LL;
	int64_t x626 = INT64_MIN;
	volatile uint32_t x627 = UINT32_MAX;
	int32_t x628 = INT32_MIN;
	static volatile int64_t t156 = -1LL;

    t156 = (x625*(x626>(x627^x628)));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x630 = 1758515582036537647LLU;
	uint16_t x631 = UINT16_MAX;
	volatile int64_t x632 = INT64_MIN;
	int32_t t157 = -714;

    t157 = (x629*(x630>(x631^x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = -1;
	volatile int8_t x634 = INT8_MIN;
	static int64_t x635 = -852144934LL;
	volatile int8_t x636 = INT8_MIN;
	static volatile int32_t t158 = 2;

    t158 = (x633*(x634>(x635^x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x637 = 4U;
	uint32_t x638 = UINT32_MAX;
	int16_t x639 = 0;
	volatile int64_t x640 = INT64_MAX;

    t159 = (x637*(x638>(x639^x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x641 = 87U;
	int16_t x643 = INT16_MIN;
	int8_t x644 = -1;
	static int32_t t160 = -385034;

    t160 = (x641*(x642>(x643^x644)));

    if (t160 != 87) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x645 = 91895458;
	uint16_t x646 = UINT16_MAX;
	int16_t x647 = -1;
	static uint32_t x648 = 4549U;

    t161 = (x645*(x646>(x647^x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = -1;
	volatile int16_t x650 = INT16_MIN;
	int64_t x651 = -1LL;
	int32_t t162 = 1759602;

    t162 = (x649*(x650>(x651^x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = 3U;
	static uint16_t x654 = 62U;
	volatile int8_t x656 = -43;
	volatile int32_t t163 = -81;

    t163 = (x653*(x654>(x655^x656)));

    if (t163 != 3) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = UINT16_MAX;
	uint64_t x658 = 1763372LLU;
	uint16_t x659 = 11U;
	volatile int8_t x660 = INT8_MIN;
	int32_t t164 = -1089579;

    t164 = (x657*(x658>(x659^x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = UINT16_MAX;
	int32_t x662 = INT32_MIN;
	int32_t x663 = -5845674;
	int16_t x664 = -1;
	int32_t t165 = -285;

    t165 = (x661*(x662>(x663^x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x666 = INT64_MIN;
	uint8_t x667 = UINT8_MAX;
	uint64_t x668 = UINT64_MAX;
	volatile int32_t t166 = 182955;

    t166 = (x665*(x666>(x667^x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x669 = 6748U;
	static int8_t x670 = INT8_MIN;
	uint64_t x671 = UINT64_MAX;
	static volatile int8_t x672 = INT8_MAX;
	int32_t t167 = 86240582;

    t167 = (x669*(x670>(x671^x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = UINT32_MAX;
	int64_t x675 = INT64_MIN;
	static int16_t x676 = INT16_MAX;
	static volatile uint32_t t168 = 647094084U;

    t168 = (x673*(x674>(x675^x676)));

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x677 = -25659;
	volatile uint32_t x678 = 1288U;
	int64_t x679 = INT64_MIN;
	int32_t t169 = 3052072;

    t169 = (x677*(x678>(x679^x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x681 = INT8_MIN;
	uint32_t x682 = UINT32_MAX;
	int32_t x684 = INT32_MIN;
	volatile int32_t t170 = 126620474;

    t170 = (x681*(x682>(x683^x684)));

    if (t170 != -128) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x685 = 7546U;
	int16_t x686 = -1;
	uint64_t x687 = UINT64_MAX;
	int16_t x688 = 1;
	static volatile int32_t t171 = -426593768;

    t171 = (x685*(x686>(x687^x688)));

    if (t171 != 7546) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = 12759;
	int32_t x691 = INT32_MIN;
	int64_t x692 = -1LL;
	int32_t t172 = -460;

    t172 = (x689*(x690>(x691^x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x694 = -1LL;
	static volatile int16_t x695 = -28;
	volatile int32_t t173 = 28;

    t173 = (x693*(x694>(x695^x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x697 = 27;
	static int16_t x698 = INT16_MIN;
	int32_t t174 = -92186069;

    t174 = (x697*(x698>(x699^x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x702 = 0;
	int32_t x703 = INT32_MIN;
	volatile int32_t t175 = -1044783;

    t175 = (x701*(x702>(x703^x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 55U;
	int8_t x707 = INT8_MIN;
	uint8_t x708 = 1U;
	int32_t t176 = 171508;

    t176 = (x705*(x706>(x707^x708)));

    if (t176 != 55) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x710 = UINT8_MAX;
	static int32_t t177 = 49;

    t177 = (x709*(x710>(x711^x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x714 = 50U;
	uint64_t x715 = UINT64_MAX;
	int32_t t178 = 15;

    t178 = (x713*(x714>(x715^x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = 1999;
	volatile uint8_t x718 = 1U;
	int16_t x719 = INT16_MAX;
	int16_t x720 = INT16_MAX;
	int32_t t179 = -314462;

    t179 = (x717*(x718>(x719^x720)));

    if (t179 != 1999) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x721 = -805986495LL;
	volatile int16_t x722 = -3948;
	int32_t x723 = -12580;
	int64_t t180 = 202393077LL;

    t180 = (x721*(x722>(x723^x724)));

    if (t180 != -805986495LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x725 = 3470U;
	int8_t x726 = INT8_MIN;
	static volatile int64_t x727 = INT64_MAX;
	volatile int32_t t181 = -9556030;

    t181 = (x725*(x726>(x727^x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x730 = 3U;
	int16_t x731 = INT16_MIN;
	volatile int32_t x732 = -1;

    t182 = (x729*(x730>(x731^x732)));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x733 = 1546U;
	uint32_t x734 = 258081817U;
	int8_t x736 = -10;
	volatile int32_t t183 = -5613;

    t183 = (x733*(x734>(x735^x736)));

    if (t183 != 1546) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = 601U;
	int8_t x740 = INT8_MIN;
	volatile int32_t t184 = -1959602;

    t184 = (x737*(x738>(x739^x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x741 = INT8_MIN;
	volatile int16_t x742 = -2;
	int32_t x743 = INT32_MIN;
	volatile int32_t t185 = 2975;

    t185 = (x741*(x742>(x743^x744)));

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x746 = 135894;
	int32_t x748 = -1;
	static volatile int32_t t186 = -10428;

    t186 = (x745*(x746>(x747^x748)));

    if (t186 != 8) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x749 = -1;
	int64_t x750 = INT64_MIN;
	volatile uint32_t x751 = 5U;
	int64_t x752 = INT64_MAX;
	static int32_t t187 = 0;

    t187 = (x749*(x750>(x751^x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x754 = 10494U;
	int8_t x755 = -4;
	static int64_t x756 = INT64_MIN;
	static int32_t t188 = -69575300;

    t188 = (x753*(x754>(x755^x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = 50U;
	int32_t x758 = -1;
	static int64_t x759 = INT64_MIN;
	int32_t t189 = -219934308;

    t189 = (x757*(x758>(x759^x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x762 = 0U;
	int64_t x763 = INT64_MAX;
	int16_t x764 = -26;

    t190 = (x761*(x762>(x763^x764)));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x765 = 0LL;
	int16_t x766 = 5667;
	uint64_t x767 = 31098LLU;
	int8_t x768 = 19;
	int64_t t191 = -1700286484LL;

    t191 = (x765*(x766>(x767^x768)));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x769 = INT32_MAX;
	int64_t x770 = 75504514LL;
	int16_t x771 = INT16_MIN;
	int32_t t192 = INT32_MAX;

    t192 = (x769*(x770>(x771^x772)));

    if (t192 != INT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = 5375188996264428LLU;
	uint16_t x774 = UINT16_MAX;
	int64_t x776 = -1LL;
	volatile uint64_t t193 = 1052827280543320798LLU;

    t193 = (x773*(x774>(x775^x776)));

    if (t193 != 5375188996264428LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 12U;
	static uint32_t x778 = 50U;
	volatile uint16_t x779 = 28112U;
	static uint64_t x780 = 663082LLU;
	volatile int32_t t194 = -52;

    t194 = (x777*(x778>(x779^x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MIN;
	int32_t x782 = -11;
	int64_t x783 = -1791274607243LL;
	int32_t t195 = -872593;

    t195 = (x781*(x782>(x783^x784)));

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x785 = UINT8_MAX;
	volatile uint64_t x787 = 230844457LLU;
	volatile int32_t t196 = 7155898;

    t196 = (x785*(x786>(x787^x788)));

    if (t196 != 255) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = 11974U;
	int64_t x791 = -1LL;
	uint32_t x792 = 521209U;
	int32_t t197 = -671631629;

    t197 = (x789*(x790>(x791^x792)));

    if (t197 != 11974) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 15U;
	uint32_t x794 = UINT32_MAX;
	static int8_t x795 = 15;
	int64_t x796 = 320764557935017483LL;
	volatile uint32_t t198 = 1160106U;

    t198 = (x793*(x794>(x795^x796)));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 13924406U;
	static volatile uint8_t x798 = 0U;
	int8_t x799 = -1;
	int32_t x800 = -6251;
	static volatile uint32_t t199 = 450729367U;

    t199 = (x797*(x798>(x799^x800)));

    if (t199 != 0U) { NG(); } else { ; }
	
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

