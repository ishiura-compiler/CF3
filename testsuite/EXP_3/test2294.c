
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

int8_t x8 = INT8_MAX;
static uint32_t t1 = 211U;
static int64_t x15 = INT64_MAX;
int64_t t3 = -25506531202261LL;
uint64_t x18 = 111LLU;
int16_t x20 = INT16_MAX;
uint16_t x26 = 928U;
volatile int64_t t6 = 54800559LL;
int64_t x34 = 70042LL;
uint64_t t8 = 83LLU;
uint32_t t9 = 0U;
uint32_t x46 = UINT32_MAX;
static int16_t x50 = INT16_MIN;
static volatile int32_t x51 = INT32_MIN;
volatile uint16_t x52 = 7U;
int64_t x57 = -13392332650LL;
int16_t x60 = INT16_MIN;
int32_t x61 = -12962;
uint32_t x64 = 293U;
int64_t x80 = INT64_MIN;
uint64_t x83 = UINT64_MAX;
static int64_t t22 = 13923659360429LL;
volatile int8_t x94 = INT8_MIN;
uint32_t x95 = UINT32_MAX;
int16_t x98 = -4;
static uint8_t x110 = 6U;
static int8_t x115 = INT8_MIN;
volatile uint32_t x119 = 765U;
static uint32_t x121 = 12337U;
static uint32_t t30 = 26455U;
volatile int16_t x130 = -1;
static uint64_t x132 = UINT64_MAX;
int64_t x136 = INT64_MIN;
int32_t t34 = 971312;
int32_t x145 = -1;
int16_t x147 = INT16_MIN;
static int64_t t37 = 773LL;
uint8_t x153 = 0U;
static volatile int8_t x155 = INT8_MIN;
static int16_t x156 = INT16_MIN;
int32_t t38 = -501792;
uint32_t x159 = 20021757U;
int8_t x168 = 10;
int8_t x170 = INT8_MIN;
static volatile int16_t x173 = -47;
static uint16_t x174 = 14U;
static int32_t x184 = -1;
volatile uint32_t x186 = 30603U;
int64_t x189 = INT64_MIN;
static uint8_t x191 = 103U;
static int32_t x195 = INT32_MIN;
int16_t x208 = -1527;
int8_t x209 = -1;
int32_t x213 = INT32_MIN;
volatile int64_t t54 = 2315144LL;
int64_t x223 = INT64_MIN;
volatile int64_t t56 = 12565080790573LL;
uint32_t x230 = UINT32_MAX;
int64_t t58 = 9659065LL;
uint8_t x240 = UINT8_MAX;
volatile int32_t t59 = -5208;
uint64_t x244 = UINT64_MAX;
static volatile int64_t x246 = INT64_MIN;
uint32_t x251 = UINT32_MAX;
int16_t x252 = INT16_MAX;
uint64_t x255 = UINT64_MAX;
static uint8_t x256 = 2U;
uint64_t t63 = 89569LLU;
uint64_t x259 = 13744LLU;
volatile int16_t x263 = -1;
static int8_t x266 = 19;
static int8_t x272 = -4;
int32_t t68 = 1;
uint32_t x277 = 2044409U;
volatile int64_t x281 = INT64_MAX;
int16_t x282 = 1531;
int64_t x284 = -1LL;
volatile int32_t t71 = 7;
uint16_t x291 = 17U;
static volatile int8_t x292 = -57;
int32_t x304 = -1;
int8_t x306 = -1;
int64_t x315 = INT64_MAX;
volatile int64_t t78 = 10LL;
int16_t x324 = INT16_MIN;
uint8_t x325 = 104U;
int32_t x331 = INT32_MIN;
static int8_t x338 = 31;
static int64_t x340 = INT64_MIN;
int32_t x347 = INT32_MIN;
int32_t x351 = INT32_MAX;
static int32_t t87 = -960174;
int32_t x354 = 14;
static int32_t t89 = 235;
uint32_t x361 = 25187209U;
int32_t x364 = INT32_MAX;
uint64_t x365 = UINT64_MAX;
uint8_t x372 = UINT8_MAX;
int64_t x378 = -1LL;
int16_t x379 = INT16_MIN;
volatile int32_t t97 = 466;
int32_t x395 = -102685825;
int64_t x399 = 0LL;
int64_t t99 = 127753435LL;
static int64_t x404 = -1LL;
volatile int8_t x407 = 0;
static volatile int32_t x413 = -1;
volatile int64_t x417 = INT64_MIN;
volatile int64_t t104 = 21358880823LL;
int16_t x428 = INT16_MIN;
static uint16_t x430 = UINT16_MAX;
static uint16_t x432 = 475U;
static volatile int16_t x433 = -3710;
volatile uint64_t t108 = 2601369142074LLU;
static int32_t t109 = -6165877;
int16_t x445 = -13187;
uint32_t x448 = 405U;
int16_t x458 = INT16_MIN;
static volatile int8_t x459 = INT8_MIN;
uint32_t x461 = 37U;
volatile int32_t t115 = 0;
static int32_t x471 = -392532809;
uint64_t x472 = UINT64_MAX;
static volatile int16_t x479 = INT16_MIN;
volatile uint32_t t119 = 3916736U;
int32_t x481 = INT32_MIN;
uint16_t x487 = 1070U;
static int8_t x490 = -6;
static int64_t x493 = INT64_MAX;
volatile int8_t x503 = INT8_MAX;
int64_t x508 = INT64_MAX;
volatile int64_t t126 = 83703115LL;
int8_t x511 = -1;
int64_t t129 = 9LL;
uint16_t x524 = 2684U;
int32_t x528 = INT32_MAX;
static volatile uint64_t t131 = 6254LLU;
static int32_t x529 = INT32_MAX;
volatile int64_t x531 = INT64_MIN;
volatile uint32_t x533 = UINT32_MAX;
int32_t x534 = -9;
static int32_t t133 = -1;
uint64_t x537 = 7754807323LLU;
static uint16_t x541 = UINT16_MAX;
int8_t x543 = -1;
volatile int32_t t135 = -213708;
volatile int8_t x545 = INT8_MAX;
int64_t x546 = 5482LL;
uint16_t x548 = 3452U;
volatile int8_t x556 = INT8_MAX;
volatile uint32_t t139 = 21686U;
uint8_t x561 = 3U;
static uint16_t x569 = UINT16_MAX;
int64_t x570 = INT64_MAX;
uint64_t t142 = 5829680210164LLU;
int8_t x574 = -6;
static volatile int32_t x575 = INT32_MAX;
static uint8_t x577 = 3U;
static volatile uint16_t x583 = 12007U;
uint16_t x590 = 70U;
int16_t x591 = INT16_MAX;
int64_t x602 = INT64_MIN;
uint16_t x607 = 57U;
int64_t x608 = INT64_MIN;
uint16_t x610 = 473U;
volatile int64_t t152 = -40855LL;
int16_t x613 = -1;
int64_t t153 = -2081807LL;
int8_t x622 = INT8_MAX;
volatile uint8_t x628 = UINT8_MAX;
volatile int32_t t156 = -28677853;
int8_t x632 = -2;
static volatile uint64_t t158 = 5727915309291LLU;
int32_t x638 = -92;
volatile uint32_t t161 = 268858495U;
uint16_t x650 = 10084U;
int32_t x657 = -1;
volatile int32_t x659 = INT32_MIN;
static uint16_t x661 = UINT16_MAX;
int64_t x662 = INT64_MIN;
int8_t x664 = INT8_MIN;
int8_t x666 = INT8_MIN;
int8_t x676 = 0;
int32_t t168 = 38091781;
uint16_t x677 = 831U;
uint32_t t172 = 98U;
static int8_t x699 = -1;
static int8_t x708 = INT8_MIN;
int32_t x714 = INT32_MIN;
int8_t x718 = 6;
int32_t t179 = 778;
int32_t x729 = -1;
static uint8_t x735 = UINT8_MAX;
volatile uint64_t t183 = 133639591818LLU;
static volatile uint16_t x754 = 167U;
uint16_t x760 = UINT16_MAX;
int32_t t189 = -441714;
int16_t x768 = -1;
int16_t x776 = -1;
volatile int64_t x779 = -47906980563535007LL;
uint16_t x780 = 20887U;
int64_t x789 = 2568944212628LL;
volatile int8_t x791 = 0;
static int32_t t198 = 23;
int8_t x797 = 16;


void f0(void) {
    	static int8_t x1 = -1;
	static int32_t x2 = INT32_MAX;
	volatile int32_t x3 = -1758;
	int16_t x4 = -83;
	int32_t t0 = -6756;

    t0 = ((x1<=x2)&(x3&x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	uint32_t x6 = UINT32_MAX;
	static volatile uint32_t x7 = 37U;

    t1 = ((x5<=x6)&(x7&x8));

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	int8_t x10 = 1;
	int16_t x11 = 1;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = 43834;

    t2 = ((x9<=x10)&(x11&x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 2595U;
	volatile int16_t x14 = -104;
	uint32_t x16 = 123226726U;

    t3 = ((x13<=x14)&(x15&x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	int32_t x19 = INT32_MIN;
	volatile int32_t t4 = 3;

    t4 = ((x17<=x18)&(x19&x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 53917;
	static uint16_t x22 = 121U;
	volatile int64_t x23 = INT64_MIN;
	int8_t x24 = -30;
	volatile int64_t t5 = 2441806377743840LL;

    t5 = ((x21<=x22)&(x23&x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	uint16_t x27 = 14U;
	int64_t x28 = INT64_MIN;

    t6 = ((x25<=x26)&(x27&x28));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x29 = 7U;
	uint16_t x30 = 12U;
	uint32_t x31 = UINT32_MAX;
	volatile uint8_t x32 = 88U;
	volatile uint32_t t7 = 3600859U;

    t7 = ((x29<=x30)&(x31&x32));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -2;
	volatile uint64_t x35 = UINT64_MAX;
	int32_t x36 = INT32_MIN;

    t8 = ((x33<=x34)&(x35&x36));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	int32_t x38 = INT32_MIN;
	uint32_t x39 = 27564U;
	int16_t x40 = INT16_MIN;

    t9 = ((x37<=x38)&(x39&x40));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 10;
	int64_t x42 = INT64_MAX;
	uint16_t x43 = UINT16_MAX;
	uint64_t x44 = 772099111315LLU;
	uint64_t t10 = 56LLU;

    t10 = ((x41<=x42)&(x43&x44));

    if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 29U;
	static int64_t x47 = INT64_MIN;
	static int8_t x48 = INT8_MIN;
	int64_t t11 = 11061886366384647LL;

    t11 = ((x45<=x46)&(x47&x48));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x49 = UINT64_MAX;
	int32_t t12 = -5;

    t12 = ((x49<=x50)&(x51&x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x53 = -12;
	int8_t x54 = -15;
	static uint64_t x55 = 23064081806605LLU;
	volatile int64_t x56 = INT64_MIN;
	volatile uint64_t t13 = 357LLU;

    t13 = ((x53<=x54)&(x55&x56));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = INT64_MIN;
	uint8_t x59 = UINT8_MAX;
	volatile int32_t t14 = 1191;

    t14 = ((x57<=x58)&(x59&x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x62 = INT32_MAX;
	int64_t x63 = 797820376444LL;
	volatile int64_t t15 = -5687499LL;

    t15 = ((x61<=x62)&(x63&x64));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = 956496139711LL;
	uint32_t x66 = 31842588U;
	static int8_t x67 = INT8_MAX;
	int8_t x68 = 5;
	static int32_t t16 = 9;

    t16 = ((x65<=x66)&(x67&x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	static int8_t x70 = -12;
	volatile uint32_t x71 = 75286229U;
	uint32_t x72 = 0U;
	static uint32_t t17 = 2467920U;

    t17 = ((x69<=x70)&(x71&x72));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -1;
	int8_t x74 = INT8_MAX;
	int8_t x75 = -1;
	int32_t x76 = -1;
	int32_t t18 = -1403;

    t18 = ((x73<=x74)&(x75&x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int32_t x77 = INT32_MAX;
	int16_t x78 = -1;
	static volatile int16_t x79 = -1;
	int64_t t19 = -7286932332LL;

    t19 = ((x77<=x78)&(x79&x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	volatile int32_t x82 = INT32_MAX;
	int64_t x84 = 7625920LL;
	volatile uint64_t t20 = 6LLU;

    t20 = ((x81<=x82)&(x83&x84));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = 1;
	uint32_t x86 = UINT32_MAX;
	int8_t x87 = INT8_MIN;
	uint16_t x88 = 20U;
	int32_t t21 = 74392;

    t21 = ((x85<=x86)&(x87&x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MAX;
	int64_t x90 = -1LL;
	static int16_t x91 = -1;
	int64_t x92 = 88677944427LL;

    t22 = ((x89<=x90)&(x91&x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = UINT16_MAX;
	int16_t x96 = INT16_MIN;
	static volatile uint32_t t23 = 0U;

    t23 = ((x93<=x94)&(x95&x96));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = -90;
	int32_t x99 = INT32_MIN;
	volatile int16_t x100 = INT16_MIN;
	volatile int32_t t24 = -26;

    t24 = ((x97<=x98)&(x99&x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x101 = 126U;
	int32_t x102 = 1;
	volatile int32_t x103 = -1;
	int32_t x104 = INT32_MAX;
	static volatile int32_t t25 = 30399953;

    t25 = ((x101<=x102)&(x103&x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = UINT16_MAX;
	static volatile uint64_t x106 = UINT64_MAX;
	int64_t x107 = INT64_MIN;
	int64_t x108 = -118LL;
	volatile int64_t t26 = -20975589137LL;

    t26 = ((x105<=x106)&(x107&x108));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 3;
	int32_t x111 = -1;
	uint16_t x112 = 2016U;
	volatile int32_t t27 = 0;

    t27 = ((x109<=x110)&(x111&x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MAX;
	uint32_t x114 = UINT32_MAX;
	static int16_t x116 = -1;
	int32_t t28 = -53765751;

    t28 = ((x113<=x114)&(x115&x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x117 = INT8_MIN;
	uint64_t x118 = 65699830501399LLU;
	int16_t x120 = INT16_MIN;
	uint32_t t29 = 1665682619U;

    t29 = ((x117<=x118)&(x119&x120));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x122 = INT32_MIN;
	uint32_t x123 = UINT32_MAX;
	uint32_t x124 = 266868U;

    t30 = ((x121<=x122)&(x123&x124));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x125 = 118076U;
	int8_t x126 = -3;
	static int8_t x127 = -3;
	int64_t x128 = INT64_MAX;
	static int64_t t31 = 119989075LL;

    t31 = ((x125<=x126)&(x127&x128));

    if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	int64_t x131 = INT64_MAX;
	volatile uint64_t t32 = 7770084LLU;

    t32 = ((x129<=x130)&(x131&x132));

    if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MAX;
	int8_t x134 = 4;
	int64_t x135 = 21976733602LL;
	int64_t t33 = 165831048851582542LL;

    t33 = ((x133<=x134)&(x135&x136));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 0U;
	uint64_t x138 = UINT64_MAX;
	int32_t x139 = INT32_MIN;
	int8_t x140 = -1;

    t34 = ((x137<=x138)&(x139&x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x141 = -1;
	static int32_t x142 = 28;
	static uint32_t x143 = 201U;
	int16_t x144 = INT16_MAX;
	volatile uint32_t t35 = 469U;

    t35 = ((x141<=x142)&(x143&x144));

    if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x146 = UINT16_MAX;
	uint64_t x148 = 1535LLU;
	volatile uint64_t t36 = 1161910773845LLU;

    t36 = ((x145<=x146)&(x147&x148));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = -1;
	uint8_t x150 = 48U;
	volatile int16_t x151 = -1;
	int64_t x152 = INT64_MIN;

    t37 = ((x149<=x150)&(x151&x152));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x154 = UINT32_MAX;

    t38 = ((x153<=x154)&(x155&x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 1;
	uint32_t x158 = UINT32_MAX;
	int64_t x160 = INT64_MIN;
	static int64_t t39 = 3050465272026668LL;

    t39 = ((x157<=x158)&(x159&x160));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = UINT8_MAX;
	static int8_t x162 = INT8_MIN;
	static int64_t x163 = INT64_MIN;
	volatile int32_t x164 = INT32_MIN;
	int64_t t40 = -189035091673298LL;

    t40 = ((x161<=x162)&(x163&x164));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = UINT16_MAX;
	volatile uint8_t x166 = UINT8_MAX;
	volatile int32_t x167 = INT32_MIN;
	static int32_t t41 = -72897137;

    t41 = ((x165<=x166)&(x167&x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 720U;
	int32_t x171 = -1;
	uint8_t x172 = 1U;
	volatile int32_t t42 = -101156846;

    t42 = ((x169<=x170)&(x171&x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x175 = 140088347980344782LLU;
	int64_t x176 = INT64_MAX;
	uint64_t t43 = 1920835469723075LLU;

    t43 = ((x173<=x174)&(x175&x176));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 68910LLU;
	int8_t x178 = INT8_MIN;
	uint16_t x179 = 99U;
	volatile uint64_t x180 = 11674027002LLU;
	volatile uint64_t t44 = 106876560LLU;

    t44 = ((x177<=x178)&(x179&x180));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 300U;
	uint8_t x182 = 5U;
	int64_t x183 = 3752390LL;
	volatile int64_t t45 = -51LL;

    t45 = ((x181<=x182)&(x183&x184));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MIN;
	uint8_t x187 = UINT8_MAX;
	int16_t x188 = -1;
	volatile int32_t t46 = -54589568;

    t46 = ((x185<=x186)&(x187&x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x190 = 1U;
	static int32_t x192 = INT32_MIN;
	volatile int32_t t47 = 925143;

    t47 = ((x189<=x190)&(x191&x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x193 = INT64_MAX;
	static volatile int8_t x194 = 5;
	uint8_t x196 = 1U;
	int32_t t48 = 2512796;

    t48 = ((x193<=x194)&(x195&x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x197 = UINT64_MAX;
	int64_t x198 = INT64_MIN;
	int32_t x199 = INT32_MIN;
	volatile int64_t x200 = INT64_MAX;
	static volatile int64_t t49 = -414862LL;

    t49 = ((x197<=x198)&(x199&x200));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	int32_t x202 = 421;
	uint8_t x203 = 29U;
	int64_t x204 = -1LL;
	volatile int64_t t50 = 64443652130LL;

    t50 = ((x201<=x202)&(x203&x204));

    if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = UINT32_MAX;
	int32_t x206 = 11841662;
	int16_t x207 = INT16_MAX;
	volatile int32_t t51 = 1185;

    t51 = ((x205<=x206)&(x207&x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x210 = INT64_MAX;
	int32_t x211 = INT32_MAX;
	volatile int32_t x212 = 7557;
	static int32_t t52 = 110841;

    t52 = ((x209<=x210)&(x211&x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x214 = 98U;
	uint64_t x215 = 11750515LLU;
	int8_t x216 = INT8_MIN;
	volatile uint64_t t53 = 2210222361301039LLU;

    t53 = ((x213<=x214)&(x215&x216));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int64_t x217 = INT64_MIN;
	static volatile int32_t x218 = 25;
	volatile int64_t x219 = INT64_MIN;
	static int16_t x220 = -1;

    t54 = ((x217<=x218)&(x219&x220));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MIN;
	volatile uint16_t x222 = UINT16_MAX;
	int16_t x224 = INT16_MIN;
	int64_t t55 = 42173415LL;

    t55 = ((x221<=x222)&(x223&x224));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x225 = 1U;
	int16_t x226 = 1563;
	volatile int64_t x227 = INT64_MAX;
	int32_t x228 = 74314;

    t56 = ((x225<=x226)&(x227&x228));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 26U;
	uint64_t x231 = UINT64_MAX;
	volatile int32_t x232 = INT32_MIN;
	volatile uint64_t t57 = 3529822607864660910LLU;

    t57 = ((x229<=x230)&(x231&x232));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = 36LL;
	volatile uint32_t x234 = UINT32_MAX;
	static volatile int32_t x235 = -1;
	static volatile int64_t x236 = -107469611977561LL;

    t58 = ((x233<=x234)&(x235&x236));

    if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x237 = 150;
	uint16_t x238 = UINT16_MAX;
	int16_t x239 = -1;

    t59 = ((x237<=x238)&(x239&x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 81U;
	static int8_t x242 = INT8_MAX;
	int8_t x243 = INT8_MIN;
	volatile uint64_t t60 = 117627LLU;

    t60 = ((x241<=x242)&(x243&x244));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 0U;
	static uint32_t x247 = 718U;
	int64_t x248 = INT64_MAX;
	int64_t t61 = 98458995210262934LL;

    t61 = ((x245<=x246)&(x247&x248));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -3682;
	uint32_t x250 = UINT32_MAX;
	uint32_t t62 = 254U;

    t62 = ((x249<=x250)&(x251&x252));

    if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 3U;
	static volatile int8_t x254 = INT8_MAX;

    t63 = ((x253<=x254)&(x255&x256));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 1582597423568LLU;
	int64_t x258 = INT64_MIN;
	volatile int16_t x260 = INT16_MIN;
	uint64_t t64 = 78681734009250607LLU;

    t64 = ((x257<=x258)&(x259&x260));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x261 = 3U;
	uint16_t x262 = 1U;
	volatile int8_t x264 = INT8_MIN;
	static volatile int32_t t65 = -657582421;

    t65 = ((x261<=x262)&(x263&x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 2919U;
	volatile int16_t x267 = -7;
	uint8_t x268 = 1U;
	static volatile int32_t t66 = -7639623;

    t66 = ((x265<=x266)&(x267&x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MAX;
	volatile uint32_t x270 = 1U;
	volatile int32_t x271 = -1;
	int32_t t67 = 2936;

    t67 = ((x269<=x270)&(x271&x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 1U;
	volatile int16_t x274 = -1;
	int8_t x275 = INT8_MIN;
	uint8_t x276 = 2U;

    t68 = ((x273<=x274)&(x275&x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x278 = -1;
	uint32_t x279 = 710751U;
	static uint8_t x280 = 0U;
	static uint32_t t69 = 1U;

    t69 = ((x277<=x278)&(x279&x280));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x283 = 1044U;
	static volatile int64_t t70 = -49LL;

    t70 = ((x281<=x282)&(x283&x284));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	uint32_t x286 = 108873797U;
	uint8_t x287 = 0U;
	int32_t x288 = -1;

    t71 = ((x285<=x286)&(x287&x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x289 = UINT64_MAX;
	static volatile int8_t x290 = INT8_MAX;
	static volatile int32_t t72 = -1392696;

    t72 = ((x289<=x290)&(x291&x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -3673493919LL;
	int16_t x294 = -10;
	int32_t x295 = INT32_MIN;
	uint16_t x296 = 12555U;
	int32_t t73 = 26349;

    t73 = ((x293<=x294)&(x295&x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x297 = INT16_MAX;
	static int16_t x298 = -2025;
	static int32_t x299 = INT32_MIN;
	volatile int8_t x300 = -1;
	int32_t t74 = 21263;

    t74 = ((x297<=x298)&(x299&x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = -1;
	static int32_t x302 = -48988958;
	int32_t x303 = -1;
	volatile int32_t t75 = 8591;

    t75 = ((x301<=x302)&(x303&x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x305 = 15;
	int16_t x307 = INT16_MIN;
	int8_t x308 = 1;
	static volatile int32_t t76 = -841315787;

    t76 = ((x305<=x306)&(x307&x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	int16_t x310 = INT16_MAX;
	uint64_t x311 = UINT64_MAX;
	int64_t x312 = -1LL;
	uint64_t t77 = 395288932445LLU;

    t77 = ((x309<=x310)&(x311&x312));

    if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = -1;
	uint8_t x314 = 1U;
	int64_t x316 = -1LL;

    t78 = ((x313<=x314)&(x315&x316));

    if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x317 = 95U;
	uint32_t x318 = 432U;
	static int8_t x319 = 1;
	static uint32_t x320 = 10U;
	volatile uint32_t t79 = 25U;

    t79 = ((x317<=x318)&(x319&x320));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x321 = 0U;
	static uint16_t x322 = 2U;
	int8_t x323 = INT8_MIN;
	int32_t t80 = 754850;

    t80 = ((x321<=x322)&(x323&x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x326 = INT16_MIN;
	int16_t x327 = -1;
	int64_t x328 = -16227LL;
	static int64_t t81 = 826651857333LL;

    t81 = ((x325<=x326)&(x327&x328));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MIN;
	int8_t x330 = INT8_MAX;
	uint16_t x332 = 416U;
	int32_t t82 = -136046035;

    t82 = ((x329<=x330)&(x331&x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x333 = 11804337U;
	int64_t x334 = 7642LL;
	int16_t x335 = 865;
	int32_t x336 = -1;
	static volatile int32_t t83 = 223;

    t83 = ((x333<=x334)&(x335&x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int8_t x337 = INT8_MIN;
	static int32_t x339 = INT32_MIN;
	static int64_t t84 = 2143775451014499LL;

    t84 = ((x337<=x338)&(x339&x340));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	static uint8_t x342 = UINT8_MAX;
	static int16_t x343 = 57;
	uint64_t x344 = 48154637LLU;
	static volatile uint64_t t85 = 8093919LLU;

    t85 = ((x341<=x342)&(x343&x344));

    if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x345 = INT16_MIN;
	static uint32_t x346 = 1088362673U;
	static volatile int8_t x348 = -27;
	static volatile int32_t t86 = 27127112;

    t86 = ((x345<=x346)&(x347&x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MIN;
	static uint64_t x350 = UINT64_MAX;
	int32_t x352 = INT32_MIN;

    t87 = ((x349<=x350)&(x351&x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x353 = 13151;
	int64_t x355 = INT64_MIN;
	int32_t x356 = -1067604890;
	int64_t t88 = 1LL;

    t88 = ((x353<=x354)&(x355&x356));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = UINT64_MAX;
	static uint8_t x358 = 2U;
	int32_t x359 = INT32_MAX;
	int16_t x360 = -3786;

    t89 = ((x357<=x358)&(x359&x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x362 = 12;
	volatile uint32_t x363 = UINT32_MAX;
	static uint32_t t90 = 161U;

    t90 = ((x361<=x362)&(x363&x364));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x366 = INT32_MAX;
	int64_t x367 = 5899LL;
	uint8_t x368 = 12U;
	int64_t t91 = 86680LL;

    t91 = ((x365<=x366)&(x367&x368));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x369 = 67;
	volatile int8_t x370 = 62;
	uint64_t x371 = UINT64_MAX;
	uint64_t t92 = 1018171LLU;

    t92 = ((x369<=x370)&(x371&x372));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x373 = INT64_MAX;
	int64_t x374 = INT64_MIN;
	int32_t x375 = 1099;
	volatile int16_t x376 = INT16_MIN;
	volatile int32_t t93 = -2723334;

    t93 = ((x373<=x374)&(x375&x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	uint16_t x380 = 303U;
	static int32_t t94 = 8408133;

    t94 = ((x377<=x378)&(x379&x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	int64_t x382 = INT64_MIN;
	volatile int64_t x383 = -1LL;
	int16_t x384 = INT16_MIN;
	volatile int64_t t95 = 0LL;

    t95 = ((x381<=x382)&(x383&x384));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int64_t x385 = -1LL;
	int16_t x386 = INT16_MAX;
	int64_t x387 = -1LL;
	int32_t x388 = INT32_MIN;
	volatile int64_t t96 = -140LL;

    t96 = ((x385<=x386)&(x387&x388));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x389 = -771937883849878606LL;
	uint16_t x390 = 4966U;
	volatile int8_t x391 = INT8_MAX;
	uint8_t x392 = UINT8_MAX;

    t97 = ((x389<=x390)&(x391&x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MAX;
	int64_t x394 = INT64_MAX;
	int64_t x396 = 12381LL;
	volatile int64_t t98 = -7995495LL;

    t98 = ((x393<=x394)&(x395&x396));

    if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 95U;
	volatile int32_t x398 = INT32_MAX;
	int8_t x400 = INT8_MAX;

    t99 = ((x397<=x398)&(x399&x400));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x401 = INT16_MIN;
	int16_t x402 = INT16_MIN;
	int16_t x403 = -1;
	int64_t t100 = 10951746643LL;

    t100 = ((x401<=x402)&(x403&x404));

    if (t100 != 1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x405 = 6U;
	int16_t x406 = INT16_MAX;
	static volatile uint32_t x408 = 463135U;
	uint32_t t101 = 63846694U;

    t101 = ((x405<=x406)&(x407&x408));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = UINT16_MAX;
	volatile uint8_t x410 = 1U;
	int16_t x411 = 6;
	static uint32_t x412 = UINT32_MAX;
	volatile uint32_t t102 = 154U;

    t102 = ((x409<=x410)&(x411&x412));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x414 = 20U;
	int32_t x415 = 1090562;
	uint64_t x416 = 2LLU;
	volatile uint64_t t103 = 3LLU;

    t103 = ((x413<=x414)&(x415&x416));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x418 = -1;
	int64_t x419 = -2722LL;
	static int8_t x420 = 0;

    t104 = ((x417<=x418)&(x419&x420));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x421 = 4071U;
	uint32_t x422 = UINT32_MAX;
	uint8_t x423 = 10U;
	int8_t x424 = 4;
	volatile int32_t t105 = -414;

    t105 = ((x421<=x422)&(x423&x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x425 = INT64_MIN;
	volatile int8_t x426 = -1;
	int64_t x427 = INT64_MAX;
	int64_t t106 = -54873784180LL;

    t106 = ((x425<=x426)&(x427&x428));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = INT16_MIN;
	int16_t x431 = -22;
	int32_t t107 = -199;

    t107 = ((x429<=x430)&(x431&x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x434 = -32801933;
	uint8_t x435 = UINT8_MAX;
	uint64_t x436 = UINT64_MAX;

    t108 = ((x433<=x434)&(x435&x436));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x437 = -1169040062279377650LL;
	uint16_t x438 = 0U;
	int8_t x439 = 55;
	int32_t x440 = 1;

    t109 = ((x437<=x438)&(x439&x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = -2;
	static int64_t x442 = INT64_MAX;
	int64_t x443 = -1LL;
	int32_t x444 = -1;
	volatile int64_t t110 = -721529437410941406LL;

    t110 = ((x441<=x442)&(x443&x444));

    if (t110 != 1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x446 = 12970;
	volatile int32_t x447 = INT32_MAX;
	uint32_t t111 = 71952423U;

    t111 = ((x445<=x446)&(x447&x448));

    if (t111 != 1U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x449 = UINT32_MAX;
	int8_t x450 = -22;
	int32_t x451 = INT32_MAX;
	static int16_t x452 = -1;
	int32_t t112 = 465;

    t112 = ((x449<=x450)&(x451&x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	int16_t x454 = INT16_MAX;
	volatile int64_t x455 = -1900213479657999202LL;
	static int16_t x456 = INT16_MIN;
	volatile int64_t t113 = -184242603LL;

    t113 = ((x453<=x454)&(x455&x456));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = UINT32_MAX;
	static int32_t x460 = INT32_MIN;
	volatile int32_t t114 = 7;

    t114 = ((x457<=x458)&(x459&x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x462 = 92445;
	int32_t x463 = INT32_MIN;
	static volatile int8_t x464 = INT8_MIN;

    t115 = ((x461<=x462)&(x463&x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MIN;
	static uint32_t x466 = 1298U;
	static uint16_t x467 = 12U;
	static int8_t x468 = INT8_MIN;
	static int32_t t116 = -328049232;

    t116 = ((x465<=x466)&(x467&x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 2346392U;
	volatile int64_t x470 = INT64_MAX;
	volatile uint64_t t117 = 141036150346053300LLU;

    t117 = ((x469<=x470)&(x471&x472));

    if (t117 != 1LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -7210656;
	int8_t x474 = INT8_MAX;
	uint32_t x475 = 5392U;
	uint64_t x476 = UINT64_MAX;
	static volatile uint64_t t118 = 10131363LLU;

    t118 = ((x473<=x474)&(x475&x476));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int16_t x477 = 4588;
	int16_t x478 = INT16_MAX;
	uint32_t x480 = 25U;

    t119 = ((x477<=x478)&(x479&x480));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x482 = -1;
	int32_t x483 = INT32_MIN;
	uint8_t x484 = 0U;
	volatile int32_t t120 = 10940;

    t120 = ((x481<=x482)&(x483&x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -1;
	int32_t x486 = 1036;
	volatile uint16_t x488 = 889U;
	volatile int32_t t121 = 6990;

    t121 = ((x485<=x486)&(x487&x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	int32_t x491 = INT32_MAX;
	int16_t x492 = INT16_MAX;
	volatile int32_t t122 = -401;

    t122 = ((x489<=x490)&(x491&x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x494 = -9514;
	int16_t x495 = -1;
	int64_t x496 = INT64_MIN;
	volatile int64_t t123 = -1LL;

    t123 = ((x493<=x494)&(x495&x496));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	static uint64_t x498 = 87144837953945744LLU;
	int64_t x499 = INT64_MIN;
	static volatile int8_t x500 = INT8_MIN;
	int64_t t124 = -118453662LL;

    t124 = ((x497<=x498)&(x499&x500));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x501 = INT64_MIN;
	int64_t x502 = -44120470940LL;
	volatile int8_t x504 = INT8_MIN;
	volatile int32_t t125 = 313969;

    t125 = ((x501<=x502)&(x503&x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = 901530908428288623LLU;
	int8_t x506 = -1;
	int16_t x507 = -1;

    t126 = ((x505<=x506)&(x507&x508));

    if (t126 != 1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x509 = INT32_MAX;
	volatile uint16_t x510 = 235U;
	int32_t x512 = INT32_MAX;
	volatile int32_t t127 = 4;

    t127 = ((x509<=x510)&(x511&x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = -1;
	static int16_t x514 = -2;
	int64_t x515 = INT64_MIN;
	int64_t x516 = -30003636LL;
	int64_t t128 = -14658LL;

    t128 = ((x513<=x514)&(x515&x516));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = UINT64_MAX;
	uint32_t x518 = UINT32_MAX;
	int64_t x519 = INT64_MIN;
	static volatile int32_t x520 = INT32_MIN;

    t129 = ((x517<=x518)&(x519&x520));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MAX;
	uint8_t x522 = 40U;
	volatile int32_t x523 = INT32_MAX;
	int32_t t130 = 232;

    t130 = ((x521<=x522)&(x523&x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = 3268;
	int32_t x526 = -1;
	static uint64_t x527 = 2150880008230LLU;

    t131 = ((x525<=x526)&(x527&x528));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x530 = 136308007014LL;
	uint16_t x532 = 30U;
	int64_t t132 = -2616873LL;

    t132 = ((x529<=x530)&(x531&x532));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x535 = 14U;
	static int32_t x536 = -1;

    t133 = ((x533<=x534)&(x535&x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x538 = INT32_MIN;
	uint8_t x539 = 5U;
	static uint64_t x540 = 229LLU;
	uint64_t t134 = 1383362641412LLU;

    t134 = ((x537<=x538)&(x539&x540));

    if (t134 != 1LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x542 = -11859LL;
	int16_t x544 = INT16_MAX;

    t135 = ((x541<=x542)&(x543&x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x547 = -1;
	static volatile int32_t t136 = 20452118;

    t136 = ((x545<=x546)&(x547&x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = 30666;
	uint8_t x550 = UINT8_MAX;
	static int32_t x551 = INT32_MIN;
	static int64_t x552 = INT64_MIN;
	volatile int64_t t137 = 3819199184955246LL;

    t137 = ((x549<=x550)&(x551&x552));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x553 = 48539U;
	uint64_t x554 = UINT64_MAX;
	int16_t x555 = 3;
	int32_t t138 = 99673;

    t138 = ((x553<=x554)&(x555&x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -3261769292526LL;
	uint64_t x558 = 113765353LLU;
	int8_t x559 = -1;
	uint32_t x560 = 7266U;

    t139 = ((x557<=x558)&(x559&x560));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x562 = 2963;
	uint8_t x563 = UINT8_MAX;
	volatile uint32_t x564 = 5U;
	uint32_t t140 = 4U;

    t140 = ((x561<=x562)&(x563&x564));

    if (t140 != 1U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MAX;
	int64_t x566 = -1LL;
	volatile int64_t x567 = INT64_MIN;
	volatile int32_t x568 = INT32_MIN;
	static int64_t t141 = -92045061273LL;

    t141 = ((x565<=x566)&(x567&x568));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x571 = 403203377LLU;
	int16_t x572 = 38;

    t142 = ((x569<=x570)&(x571&x572));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -1;
	int16_t x576 = INT16_MIN;
	int32_t t143 = -12;

    t143 = ((x573<=x574)&(x575&x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x578 = -1;
	int16_t x579 = 23;
	volatile int8_t x580 = 1;
	volatile int32_t t144 = -267236;

    t144 = ((x577<=x578)&(x579&x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = -27;
	uint16_t x582 = 5466U;
	int64_t x584 = INT64_MIN;
	int64_t t145 = 279LL;

    t145 = ((x581<=x582)&(x583&x584));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MAX;
	uint16_t x586 = 4001U;
	int32_t x587 = -1;
	int64_t x588 = INT64_MIN;
	volatile int64_t t146 = 25877751912900LL;

    t146 = ((x585<=x586)&(x587&x588));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = 34U;
	uint16_t x592 = 150U;
	volatile int32_t t147 = -101659648;

    t147 = ((x589<=x590)&(x591&x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = 33393U;
	uint8_t x594 = UINT8_MAX;
	uint32_t x595 = 193U;
	int32_t x596 = -1383;
	static volatile uint32_t t148 = 6U;

    t148 = ((x593<=x594)&(x595&x596));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x597 = 2;
	int8_t x598 = 8;
	int32_t x599 = INT32_MAX;
	uint8_t x600 = UINT8_MAX;
	int32_t t149 = 2276480;

    t149 = ((x597<=x598)&(x599&x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MIN;
	uint32_t x603 = UINT32_MAX;
	static int64_t x604 = INT64_MAX;
	int64_t t150 = -188398630324508802LL;

    t150 = ((x601<=x602)&(x603&x604));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MAX;
	static int16_t x606 = INT16_MIN;
	int64_t t151 = -263317245923LL;

    t151 = ((x605<=x606)&(x607&x608));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = 526571U;
	int64_t x611 = INT64_MAX;
	int16_t x612 = 9;

    t152 = ((x609<=x610)&(x611&x612));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x614 = 253376841;
	int32_t x615 = INT32_MIN;
	int64_t x616 = -2527LL;

    t153 = ((x613<=x614)&(x615&x616));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MIN;
	static uint8_t x618 = UINT8_MAX;
	uint16_t x619 = UINT16_MAX;
	int64_t x620 = INT64_MAX;
	volatile int64_t t154 = 2996LL;

    t154 = ((x617<=x618)&(x619&x620));

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = 1851531030841LLU;
	int8_t x623 = INT8_MIN;
	static volatile int64_t x624 = 21806894LL;
	volatile int64_t t155 = 10358LL;

    t155 = ((x621<=x622)&(x623&x624));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = 10590U;
	int32_t x626 = 20016112;
	int8_t x627 = -1;

    t156 = ((x625<=x626)&(x627&x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -1;
	uint8_t x630 = 17U;
	int64_t x631 = INT64_MIN;
	static int64_t t157 = 63030857LL;

    t157 = ((x629<=x630)&(x631&x632));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x633 = 2;
	volatile int32_t x634 = INT32_MIN;
	uint64_t x635 = 8398266357LLU;
	int64_t x636 = -1LL;

    t158 = ((x633<=x634)&(x635&x636));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MAX;
	volatile int8_t x639 = 13;
	uint32_t x640 = 208U;
	uint32_t t159 = 6113U;

    t159 = ((x637<=x638)&(x639&x640));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -128090LL;
	int64_t x642 = 11926148153402641LL;
	int32_t x643 = INT32_MAX;
	static int16_t x644 = INT16_MIN;
	volatile int32_t t160 = 19331;

    t160 = ((x641<=x642)&(x643&x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = -1;
	uint16_t x646 = 340U;
	static volatile uint8_t x647 = 0U;
	uint32_t x648 = 33125U;

    t161 = ((x645<=x646)&(x647&x648));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = 54;
	static uint8_t x651 = UINT8_MAX;
	uint8_t x652 = UINT8_MAX;
	int32_t t162 = 255864;

    t162 = ((x649<=x650)&(x651&x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x653 = INT64_MIN;
	uint64_t x654 = UINT64_MAX;
	int64_t x655 = -1LL;
	uint8_t x656 = UINT8_MAX;
	int64_t t163 = 512225353614LL;

    t163 = ((x653<=x654)&(x655&x656));

    if (t163 != 1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x658 = 14U;
	uint16_t x660 = 167U;
	int32_t t164 = -1246016;

    t164 = ((x657<=x658)&(x659&x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x663 = 85575LLU;
	volatile uint64_t t165 = 14609464LLU;

    t165 = ((x661<=x662)&(x663&x664));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = 69U;
	static volatile uint64_t x667 = 1534272619029LLU;
	uint16_t x668 = UINT16_MAX;
	static volatile uint64_t t166 = 101810481784796LLU;

    t166 = ((x665<=x666)&(x667&x668));

    if (t166 != 1LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 223839U;
	uint32_t x670 = UINT32_MAX;
	static uint16_t x671 = UINT16_MAX;
	int16_t x672 = 3963;
	int32_t t167 = 621550339;

    t167 = ((x669<=x670)&(x671&x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MIN;
	uint16_t x674 = 28U;
	int32_t x675 = -5657;

    t168 = ((x673<=x674)&(x675&x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x678 = -3;
	int64_t x679 = 171303291750802LL;
	int16_t x680 = -1;
	int64_t t169 = -1163102205941405LL;

    t169 = ((x677<=x678)&(x679&x680));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x681 = 35858LL;
	volatile int8_t x682 = INT8_MIN;
	volatile int32_t x683 = INT32_MIN;
	uint16_t x684 = 180U;
	volatile int32_t t170 = -250;

    t170 = ((x681<=x682)&(x683&x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x685 = 48;
	int16_t x686 = -1;
	uint8_t x687 = UINT8_MAX;
	uint8_t x688 = 30U;
	int32_t t171 = -168260;

    t171 = ((x685<=x686)&(x687&x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x689 = 9200225022517379LL;
	uint16_t x690 = UINT16_MAX;
	uint32_t x691 = 158868410U;
	int8_t x692 = -1;

    t172 = ((x689<=x690)&(x691&x692));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = INT16_MIN;
	int8_t x694 = -1;
	static volatile int64_t x695 = INT64_MAX;
	uint16_t x696 = 772U;
	volatile int64_t t173 = -5479404431570957LL;

    t173 = ((x693<=x694)&(x695&x696));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = UINT32_MAX;
	static int16_t x698 = INT16_MAX;
	int8_t x700 = -1;
	int32_t t174 = 1;

    t174 = ((x697<=x698)&(x699&x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = 443379;
	int32_t x702 = INT32_MIN;
	int16_t x703 = INT16_MIN;
	int8_t x704 = INT8_MIN;
	int32_t t175 = 119;

    t175 = ((x701<=x702)&(x703&x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x705 = -1;
	volatile int8_t x706 = INT8_MAX;
	static volatile int64_t x707 = INT64_MIN;
	static int64_t t176 = -18LL;

    t176 = ((x705<=x706)&(x707&x708));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = 38U;
	int64_t x710 = INT64_MAX;
	int16_t x711 = INT16_MAX;
	int16_t x712 = 457;
	static int32_t t177 = 1066;

    t177 = ((x709<=x710)&(x711&x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x713 = 16;
	static int32_t x715 = INT32_MAX;
	static volatile int8_t x716 = -9;
	static volatile int32_t t178 = -60957229;

    t178 = ((x713<=x714)&(x715&x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	static int16_t x719 = INT16_MAX;
	int8_t x720 = -1;

    t179 = ((x717<=x718)&(x719&x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = 21;
	uint16_t x722 = 27334U;
	volatile uint32_t x723 = 243U;
	int64_t x724 = -1LL;
	static int64_t t180 = -7929042420244LL;

    t180 = ((x721<=x722)&(x723&x724));

    if (t180 != 1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x725 = 4U;
	static int16_t x726 = -49;
	int16_t x727 = INT16_MIN;
	static int16_t x728 = INT16_MAX;
	static volatile int32_t t181 = -88570108;

    t181 = ((x725<=x726)&(x727&x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x730 = INT8_MIN;
	static uint32_t x731 = UINT32_MAX;
	int8_t x732 = -1;
	static volatile uint32_t t182 = 137633642U;

    t182 = ((x729<=x730)&(x731&x732));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int64_t x733 = -4LL;
	int64_t x734 = -1LL;
	volatile uint64_t x736 = UINT64_MAX;

    t183 = ((x733<=x734)&(x735&x736));

    if (t183 != 1LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x737 = INT32_MIN;
	volatile uint32_t x738 = 42395480U;
	int16_t x739 = 25;
	uint16_t x740 = UINT16_MAX;
	static int32_t t184 = -415541;

    t184 = ((x737<=x738)&(x739&x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x741 = UINT8_MAX;
	int32_t x742 = INT32_MAX;
	volatile int32_t x743 = -785;
	uint32_t x744 = UINT32_MAX;
	volatile uint32_t t185 = 57930681U;

    t185 = ((x741<=x742)&(x743&x744));

    if (t185 != 1U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x745 = UINT8_MAX;
	static uint16_t x746 = UINT16_MAX;
	uint16_t x747 = 20681U;
	static uint64_t x748 = 6281LLU;
	uint64_t t186 = 1052540730LLU;

    t186 = ((x745<=x746)&(x747&x748));

    if (t186 != 1LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -1;
	static uint16_t x750 = 18U;
	int16_t x751 = -1;
	int16_t x752 = INT16_MAX;
	volatile int32_t t187 = 954777;

    t187 = ((x749<=x750)&(x751&x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = 9U;
	uint16_t x755 = UINT16_MAX;
	int8_t x756 = 0;
	volatile int32_t t188 = 103;

    t188 = ((x753<=x754)&(x755&x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = -5;
	int32_t x758 = -1;
	volatile int32_t x759 = INT32_MIN;

    t189 = ((x757<=x758)&(x759&x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 23U;
	int32_t x762 = -1;
	volatile int16_t x763 = -1;
	static int8_t x764 = INT8_MIN;
	volatile int32_t t190 = 60796126;

    t190 = ((x761<=x762)&(x763&x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -1;
	volatile int64_t x766 = INT64_MAX;
	int32_t x767 = 188569636;
	int32_t t191 = 262381470;

    t191 = ((x765<=x766)&(x767&x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = -1;
	uint64_t x770 = UINT64_MAX;
	int16_t x771 = 4;
	int64_t x772 = INT64_MIN;
	int64_t t192 = -1743561577733944LL;

    t192 = ((x769<=x770)&(x771&x772));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MIN;
	volatile int16_t x774 = -108;
	int8_t x775 = -1;
	static volatile int32_t t193 = -331680;

    t193 = ((x773<=x774)&(x775&x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = 1LLU;
	static int16_t x778 = INT16_MIN;
	int64_t t194 = -121103816LL;

    t194 = ((x777<=x778)&(x779&x780));

    if (t194 != 1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = 215246U;
	uint8_t x782 = UINT8_MAX;
	int8_t x783 = INT8_MIN;
	int8_t x784 = 1;
	int32_t t195 = 0;

    t195 = ((x781<=x782)&(x783&x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	int16_t x786 = -1;
	static uint16_t x787 = 3U;
	static uint8_t x788 = UINT8_MAX;
	int32_t t196 = 64;

    t196 = ((x785<=x786)&(x787&x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x790 = -122;
	int8_t x792 = INT8_MIN;
	static volatile int32_t t197 = 2771483;

    t197 = ((x789<=x790)&(x791&x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x793 = -1;
	int32_t x794 = INT32_MIN;
	int8_t x795 = INT8_MIN;
	static uint16_t x796 = 1847U;

    t198 = ((x793<=x794)&(x795&x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x798 = UINT32_MAX;
	int8_t x799 = 3;
	int16_t x800 = INT16_MIN;
	static int32_t t199 = -110514984;

    t199 = ((x797<=x798)&(x799&x800));

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

