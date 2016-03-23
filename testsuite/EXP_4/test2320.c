
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

static int32_t x3 = INT32_MAX;
uint64_t x7 = UINT64_MAX;
volatile int16_t x8 = INT16_MAX;
static volatile int8_t x9 = INT8_MAX;
volatile int64_t x11 = -1LL;
volatile uint16_t x15 = 2U;
int8_t x17 = INT8_MIN;
int64_t x20 = 1345109576546LL;
static int32_t x25 = INT32_MIN;
volatile uint16_t x37 = 310U;
volatile int16_t x40 = INT16_MIN;
static int32_t t9 = -106;
uint16_t x42 = 21285U;
static int32_t t10 = 1437;
static volatile int64_t x49 = INT64_MIN;
uint32_t x58 = 83944U;
int16_t x62 = INT16_MIN;
uint16_t x65 = 6U;
static uint16_t x67 = 4U;
int32_t t17 = -141383900;
static int32_t x74 = 13342894;
static int64_t x77 = INT64_MIN;
int32_t t19 = -8860495;
int32_t x81 = INT32_MIN;
uint64_t x89 = 2LLU;
int8_t x91 = -1;
volatile int64_t x94 = -26227716501068338LL;
static volatile int32_t t26 = -1038330537;
int32_t x109 = INT32_MIN;
static int32_t x116 = -3315464;
int64_t x119 = 2186519LL;
static int16_t x125 = -1;
int32_t x127 = INT32_MIN;
volatile int32_t t31 = 3901339;
volatile int32_t t33 = -124958;
volatile int32_t t34 = 45714;
static int32_t t35 = 18593109;
int64_t x145 = INT64_MAX;
int32_t t37 = -40;
int32_t t38 = 58459651;
int16_t x157 = INT16_MIN;
int16_t x162 = INT16_MAX;
volatile int16_t x164 = -1;
int16_t x168 = -668;
uint16_t x179 = 342U;
static int32_t x185 = -1;
volatile int32_t x194 = -4943157;
int64_t x203 = INT64_MIN;
volatile int64_t x205 = INT64_MIN;
int64_t x206 = -191LL;
uint16_t x216 = UINT16_MAX;
static int64_t x223 = INT64_MIN;
volatile int32_t x238 = 1173;
uint64_t x240 = 31LLU;
volatile int32_t x244 = INT32_MIN;
int16_t x247 = INT16_MAX;
uint64_t x248 = 7756830531243058933LLU;
uint8_t x253 = 0U;
uint16_t x254 = 12205U;
uint16_t x261 = 3727U;
int64_t x264 = 232882LL;
static int32_t t65 = -20037;
int32_t x265 = 1;
int32_t x266 = -8157;
int8_t x272 = INT8_MIN;
int32_t t68 = 53;
static uint8_t x278 = UINT8_MAX;
volatile int32_t t69 = 178113;
volatile int16_t x285 = -1;
uint32_t x288 = 32U;
int16_t x291 = INT16_MIN;
int8_t x292 = -1;
uint64_t x293 = 251LLU;
volatile int64_t x306 = -1LL;
volatile uint32_t x307 = 1U;
volatile int32_t t77 = 231899;
static int32_t x314 = INT32_MIN;
uint32_t x315 = UINT32_MAX;
int32_t t78 = -18;
volatile int32_t x317 = INT32_MAX;
static int8_t x322 = INT8_MIN;
uint32_t x323 = 17381911U;
static volatile int16_t x325 = 5838;
volatile int16_t x328 = INT16_MIN;
int32_t t81 = 5;
volatile uint32_t x330 = UINT32_MAX;
volatile int32_t t83 = -502129;
int8_t x337 = 3;
static int8_t x339 = 30;
int32_t x345 = -1;
static int16_t x348 = INT16_MIN;
uint8_t x350 = 0U;
int32_t x353 = -1;
static int32_t x355 = 4;
static int64_t x357 = 3407347059LL;
volatile uint16_t x365 = 0U;
int16_t x373 = 0;
int8_t x377 = INT8_MIN;
volatile uint8_t x384 = 1U;
int64_t x398 = INT64_MIN;
uint16_t x399 = UINT16_MAX;
int64_t x400 = -1LL;
static volatile int32_t t99 = 637;
uint8_t x410 = 2U;
int32_t x413 = -297045;
int64_t x424 = -32482490LL;
int32_t x427 = INT32_MIN;
static int64_t x430 = 1364583790597LL;
int64_t x435 = INT64_MIN;
static volatile int32_t x436 = 0;
int16_t x443 = INT16_MAX;
volatile int32_t t110 = -3;
int64_t x445 = INT64_MAX;
int8_t x448 = 0;
volatile int32_t t111 = -867;
static uint32_t x454 = UINT32_MAX;
static uint16_t x460 = 29U;
int32_t t114 = -7205867;
volatile int32_t t115 = 0;
int16_t x467 = 197;
volatile int32_t x469 = INT32_MIN;
volatile int32_t t117 = -207;
uint32_t x480 = UINT32_MAX;
volatile int32_t t119 = -5;
uint8_t x481 = 27U;
uint64_t x486 = 2076962293830LLU;
int64_t x487 = -1LL;
int32_t t123 = 452124530;
static uint16_t x505 = UINT16_MAX;
int32_t x506 = -1;
static uint8_t x515 = UINT8_MAX;
int64_t x521 = INT64_MIN;
static int64_t x522 = INT64_MAX;
uint16_t x525 = UINT16_MAX;
uint16_t x526 = 206U;
int16_t x527 = INT16_MAX;
int32_t t131 = -331978;
int8_t x531 = INT8_MIN;
static uint64_t x535 = UINT64_MAX;
static volatile int32_t t133 = 261078;
int32_t x542 = INT32_MIN;
static uint32_t x546 = 29078489U;
uint32_t x548 = 157735537U;
int8_t x551 = 43;
int8_t x558 = INT8_MIN;
int8_t x560 = -1;
uint64_t x562 = 1LLU;
volatile int16_t x565 = -1;
volatile int32_t t142 = 0;
static int64_t x573 = -1LL;
uint8_t x582 = UINT8_MAX;
static int64_t x588 = INT64_MAX;
int64_t x596 = INT64_MIN;
int16_t x606 = 360;
static volatile int32_t t151 = 1;
volatile int32_t x609 = -546401;
int16_t x612 = 4;
uint16_t x621 = 418U;
static int16_t x625 = INT16_MAX;
static uint16_t x626 = 0U;
volatile int32_t t157 = -3358;
uint8_t x634 = 22U;
int8_t x637 = -24;
int32_t t161 = -1;
int64_t x654 = INT64_MIN;
int64_t x660 = INT64_MIN;
int8_t x665 = 25;
int16_t x669 = 1;
uint64_t x671 = 2174423111933761405LLU;
static int16_t x675 = INT16_MIN;
int64_t x676 = -1LL;
static volatile int32_t t168 = -4932430;
int16_t x678 = INT16_MIN;
volatile int32_t t169 = -3156;
int32_t x683 = INT32_MIN;
uint8_t x691 = UINT8_MAX;
uint8_t x695 = 1U;
volatile int16_t x696 = -3;
int32_t t173 = -7593;
int16_t x700 = INT16_MIN;
static int64_t x701 = -747LL;
static uint16_t x703 = 546U;
int8_t x714 = INT8_MIN;
uint32_t x716 = 825U;
int32_t t178 = 263785805;
int8_t x721 = -1;
uint8_t x723 = UINT8_MAX;
uint16_t x725 = UINT16_MAX;
uint16_t x726 = 14U;
int32_t t182 = 447270;
int32_t t184 = -555375;
int32_t x743 = -1;
uint16_t x752 = 1U;
int16_t x753 = 330;
int32_t t188 = 28533406;
static int16_t x759 = INT16_MIN;
volatile int32_t t189 = -16427;
uint8_t x761 = UINT8_MAX;
uint16_t x762 = 19U;
int32_t x766 = -6511249;
static int8_t x767 = 0;
int64_t x768 = INT64_MAX;
uint32_t x772 = 10186U;
int32_t t193 = 211014512;
volatile int16_t x779 = INT16_MIN;
int32_t t194 = 23;
volatile int16_t x786 = -10;
volatile int32_t t198 = 1;
int32_t x797 = INT32_MIN;
int32_t t199 = 121;


void f0(void) {
    	int16_t x1 = 16253;
	uint32_t x2 = 2U;
	static int8_t x4 = INT8_MAX;
	volatile int32_t t0 = 9602;

    t0 = (x1<=(x2&(x3&x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	int64_t x6 = -367120448540984LL;
	static int32_t t1 = -694592;

    t1 = (x5<=(x6&(x7&x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x10 = -1;
	int16_t x12 = -1;
	volatile int32_t t2 = 549526;

    t2 = (x9<=(x10&(x11&x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 57LL;
	volatile int32_t x14 = -1198755;
	uint64_t x16 = 11003538LLU;
	volatile int32_t t3 = -42528817;

    t3 = (x13<=(x14&(x15&x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = INT16_MIN;
	int8_t x19 = 1;
	volatile int32_t t4 = 0;

    t4 = (x17<=(x18&(x19&x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	static volatile int8_t x22 = -2;
	uint64_t x23 = UINT64_MAX;
	static uint64_t x24 = 7511144755LLU;
	int32_t t5 = 424197;

    t5 = (x21<=(x22&(x23&x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = INT8_MAX;
	uint8_t x27 = 1U;
	uint32_t x28 = 5U;
	volatile int32_t t6 = -8;

    t6 = (x25<=(x26&(x27&x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	static int16_t x30 = INT16_MAX;
	int16_t x31 = INT16_MAX;
	uint64_t x32 = UINT64_MAX;
	static volatile int32_t t7 = -442129770;

    t7 = (x29<=(x30&(x31&x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MAX;
	static int16_t x34 = 6151;
	uint8_t x35 = UINT8_MAX;
	volatile int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 7;

    t8 = (x33<=(x34&(x35&x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x38 = INT8_MAX;
	volatile int8_t x39 = -1;

    t9 = (x37<=(x38&(x39&x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -1;
	static int8_t x43 = -31;
	int64_t x44 = INT64_MAX;

    t10 = (x41<=(x42&(x43&x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	int64_t x46 = -7216279640616081LL;
	int8_t x47 = 4;
	static int16_t x48 = -1;
	int32_t t11 = 12;

    t11 = (x45<=(x46&(x47&x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x50 = 2U;
	int8_t x51 = -30;
	int32_t x52 = -1;
	int32_t t12 = -716188264;

    t12 = (x49<=(x50&(x51&x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 0U;
	int8_t x54 = -1;
	static volatile int8_t x55 = INT8_MIN;
	static int16_t x56 = 80;
	volatile int32_t t13 = 72484476;

    t13 = (x53<=(x54&(x55&x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	volatile int32_t x59 = INT32_MIN;
	volatile int64_t x60 = -1LL;
	volatile int32_t t14 = -1;

    t14 = (x57<=(x58&(x59&x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = 1;
	int16_t x63 = 1;
	uint64_t x64 = 2646139586LLU;
	int32_t t15 = 173;

    t15 = (x61<=(x62&(x63&x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x66 = 63977258LLU;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -5357;

    t16 = (x65<=(x66&(x67&x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x69 = 312662369LLU;
	int64_t x70 = -516218937491629LL;
	int64_t x71 = INT64_MIN;
	uint16_t x72 = 7655U;

    t17 = (x69<=(x70&(x71&x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MAX;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MIN;
	static volatile int32_t t18 = -437;

    t18 = (x73<=(x74&(x75&x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x78 = 15423155;
	static volatile int16_t x79 = INT16_MIN;
	int64_t x80 = INT64_MIN;

    t19 = (x77<=(x78&(x79&x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x82 = INT64_MIN;
	static volatile int16_t x83 = -1;
	int32_t x84 = INT32_MAX;
	volatile int32_t t20 = -375;

    t20 = (x81<=(x82&(x83&x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x85 = 411U;
	uint32_t x86 = 694U;
	int16_t x87 = INT16_MIN;
	volatile int8_t x88 = INT8_MIN;
	static volatile int32_t t21 = -111192466;

    t21 = (x85<=(x86&(x87&x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x90 = INT16_MIN;
	int16_t x92 = INT16_MIN;
	static int32_t t22 = -428240;

    t22 = (x89<=(x90&(x91&x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 334255U;
	int32_t x95 = -1;
	uint8_t x96 = 15U;
	int32_t t23 = -755;

    t23 = (x93<=(x94&(x95&x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = 8;
	int64_t x98 = INT64_MIN;
	volatile uint16_t x99 = 1U;
	int32_t x100 = -1;
	int32_t t24 = -6311856;

    t24 = (x97<=(x98&(x99&x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = 5813;
	int32_t x102 = 42365421;
	volatile int16_t x103 = 0;
	volatile int8_t x104 = INT8_MIN;
	int32_t t25 = 7946271;

    t25 = (x101<=(x102&(x103&x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = -1LL;
	int64_t x106 = INT64_MIN;
	int32_t x107 = -1;
	int32_t x108 = 439631;

    t26 = (x105<=(x106&(x107&x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x110 = INT16_MIN;
	uint16_t x111 = 12589U;
	uint64_t x112 = 320769966LLU;
	int32_t t27 = 7475478;

    t27 = (x109<=(x110&(x111&x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = 15236;
	uint32_t x114 = 0U;
	int16_t x115 = 9008;
	int32_t t28 = -1396;

    t28 = (x113<=(x114&(x115&x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = UINT16_MAX;
	uint64_t x118 = UINT64_MAX;
	uint8_t x120 = 58U;
	int32_t t29 = 3479;

    t29 = (x117<=(x118&(x119&x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int32_t x122 = -1;
	int16_t x123 = INT16_MIN;
	static int16_t x124 = 0;
	static int32_t t30 = -57298;

    t30 = (x121<=(x122&(x123&x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x126 = -99805;
	volatile uint8_t x128 = 62U;

    t31 = (x125<=(x126&(x127&x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x129 = 0U;
	static int16_t x130 = INT16_MAX;
	int16_t x131 = -1;
	static uint16_t x132 = UINT16_MAX;
	static volatile int32_t t32 = 12658;

    t32 = (x129<=(x130&(x131&x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MIN;
	int16_t x134 = INT16_MIN;
	static int64_t x135 = INT64_MIN;
	int16_t x136 = INT16_MIN;

    t33 = (x133<=(x134&(x135&x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = 0;
	static int32_t x138 = 12;
	int64_t x139 = -649711651673629LL;
	volatile int64_t x140 = 933556203583LL;

    t34 = (x137<=(x138&(x139&x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x141 = 302569LLU;
	volatile int32_t x142 = INT32_MIN;
	static uint8_t x143 = UINT8_MAX;
	uint8_t x144 = UINT8_MAX;

    t35 = (x141<=(x142&(x143&x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x146 = 341U;
	int8_t x147 = INT8_MAX;
	int64_t x148 = INT64_MIN;
	volatile int32_t t36 = -23;

    t36 = (x145<=(x146&(x147&x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MAX;
	static int32_t x150 = -1;
	static int8_t x151 = INT8_MIN;
	int32_t x152 = 1908566;

    t37 = (x149<=(x150&(x151&x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = 0U;
	int8_t x154 = 0;
	uint32_t x155 = 5058U;
	static int8_t x156 = INT8_MAX;

    t38 = (x153<=(x154&(x155&x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x158 = INT64_MIN;
	int16_t x159 = INT16_MAX;
	int8_t x160 = -1;
	int32_t t39 = -11628;

    t39 = (x157<=(x158&(x159&x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MIN;
	int64_t x163 = -1LL;
	int32_t t40 = 45479;

    t40 = (x161<=(x162&(x163&x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = -1;
	uint8_t x166 = 3U;
	int16_t x167 = -242;
	volatile int32_t t41 = 80;

    t41 = (x165<=(x166&(x167&x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = 27;
	uint16_t x170 = 47U;
	static int8_t x171 = -1;
	static uint8_t x172 = 27U;
	static volatile int32_t t42 = 4227;

    t42 = (x169<=(x170&(x171&x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = INT32_MIN;
	int8_t x174 = INT8_MIN;
	static int8_t x175 = INT8_MIN;
	int8_t x176 = 0;
	volatile int32_t t43 = 0;

    t43 = (x173<=(x174&(x175&x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = INT16_MIN;
	volatile uint8_t x178 = 93U;
	int16_t x180 = -28;
	int32_t t44 = 1;

    t44 = (x177<=(x178&(x179&x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 398U;
	volatile int16_t x182 = INT16_MAX;
	static uint8_t x183 = UINT8_MAX;
	int8_t x184 = INT8_MIN;
	volatile int32_t t45 = -567364;

    t45 = (x181<=(x182&(x183&x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x186 = INT8_MIN;
	uint8_t x187 = UINT8_MAX;
	static uint8_t x188 = UINT8_MAX;
	volatile int32_t t46 = 1;

    t46 = (x185<=(x186&(x187&x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	uint16_t x190 = 297U;
	uint32_t x191 = 84U;
	static uint64_t x192 = 1452LLU;
	volatile int32_t t47 = 1066802906;

    t47 = (x189<=(x190&(x191&x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = -1LL;
	int64_t x195 = INT64_MAX;
	volatile uint64_t x196 = 940399LLU;
	int32_t t48 = 6951;

    t48 = (x193<=(x194&(x195&x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 47426874303188245LLU;
	int32_t x198 = -1;
	int8_t x199 = 3;
	uint16_t x200 = 2U;
	static volatile int32_t t49 = -46384;

    t49 = (x197<=(x198&(x199&x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = -1LL;
	int64_t x202 = -76768963710LL;
	int32_t x204 = -2386;
	volatile int32_t t50 = -5251;

    t50 = (x201<=(x202&(x203&x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x207 = -11;
	static int32_t x208 = INT32_MIN;
	volatile int32_t t51 = -885806;

    t51 = (x205<=(x206&(x207&x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -1;
	int16_t x210 = INT16_MIN;
	static uint16_t x211 = UINT16_MAX;
	volatile int32_t x212 = INT32_MIN;
	volatile int32_t t52 = -340821;

    t52 = (x209<=(x210&(x211&x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int16_t x213 = INT16_MIN;
	static int64_t x214 = 12922398276420LL;
	static int16_t x215 = INT16_MIN;
	volatile int32_t t53 = -3;

    t53 = (x213<=(x214&(x215&x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x217 = 0;
	volatile int8_t x218 = INT8_MAX;
	volatile uint64_t x219 = 446507920LLU;
	int16_t x220 = -1;
	int32_t t54 = -2669;

    t54 = (x217<=(x218&(x219&x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = UINT64_MAX;
	int64_t x222 = INT64_MIN;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t55 = -525;

    t55 = (x221<=(x222&(x223&x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = 1;
	int32_t x226 = -1;
	uint8_t x227 = 44U;
	int32_t x228 = 61868440;
	int32_t t56 = -62;

    t56 = (x225<=(x226&(x227&x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = 15;
	static int64_t x230 = 501059556433423287LL;
	int32_t x231 = 0;
	uint16_t x232 = 15222U;
	volatile int32_t t57 = -14602252;

    t57 = (x229<=(x230&(x231&x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = -1;
	int16_t x234 = -1;
	int8_t x235 = -1;
	static uint32_t x236 = 54980U;
	volatile int32_t t58 = -1;

    t58 = (x233<=(x234&(x235&x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -1LL;
	volatile int64_t x239 = -25723218LL;
	static volatile int32_t t59 = 118238598;

    t59 = (x237<=(x238&(x239&x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = 15016513242521941LL;
	uint32_t x242 = 2U;
	static volatile int16_t x243 = INT16_MAX;
	int32_t t60 = 0;

    t60 = (x241<=(x242&(x243&x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	int32_t x246 = INT32_MAX;
	int32_t t61 = 136126680;

    t61 = (x245<=(x246&(x247&x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = UINT8_MAX;
	volatile int32_t x250 = -1;
	int64_t x251 = -1LL;
	int32_t x252 = INT32_MIN;
	int32_t t62 = 1301;

    t62 = (x249<=(x250&(x251&x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x255 = INT8_MIN;
	volatile int64_t x256 = -1LL;
	static volatile int32_t t63 = 266489;

    t63 = (x253<=(x254&(x255&x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = 5;
	int8_t x258 = -44;
	static int64_t x259 = -1LL;
	int8_t x260 = 1;
	static volatile int32_t t64 = -95436133;

    t64 = (x257<=(x258&(x259&x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x262 = 8896;
	static int64_t x263 = INT64_MAX;

    t65 = (x261<=(x262&(x263&x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x267 = INT32_MIN;
	volatile int16_t x268 = -1;
	volatile int32_t t66 = -55;

    t66 = (x265<=(x266&(x267&x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint16_t x269 = 3U;
	int8_t x270 = -1;
	volatile int16_t x271 = -3;
	static volatile int32_t t67 = -183;

    t67 = (x269<=(x270&(x271&x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -1LL;
	uint32_t x274 = UINT32_MAX;
	int16_t x275 = INT16_MIN;
	volatile uint8_t x276 = 7U;

    t68 = (x273<=(x274&(x275&x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MIN;
	int16_t x279 = INT16_MIN;
	static int64_t x280 = INT64_MIN;

    t69 = (x277<=(x278&(x279&x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = UINT32_MAX;
	volatile int16_t x282 = INT16_MIN;
	int32_t x283 = INT32_MIN;
	static int64_t x284 = INT64_MIN;
	static volatile int32_t t70 = -7594;

    t70 = (x281<=(x282&(x283&x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x286 = UINT32_MAX;
	int8_t x287 = 0;
	volatile int32_t t71 = -377;

    t71 = (x285<=(x286&(x287&x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x289 = 3LLU;
	static int32_t x290 = -1;
	int32_t t72 = 68270845;

    t72 = (x289<=(x290&(x291&x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x294 = INT8_MAX;
	static uint64_t x295 = 182133LLU;
	uint64_t x296 = 23050948738163LLU;
	volatile int32_t t73 = 75;

    t73 = (x293<=(x294&(x295&x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x297 = -4;
	uint64_t x298 = 26479329LLU;
	static int8_t x299 = -1;
	volatile int64_t x300 = -1LL;
	static int32_t t74 = 1;

    t74 = (x297<=(x298&(x299&x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = -28;
	uint8_t x302 = 105U;
	int8_t x303 = 11;
	static volatile uint16_t x304 = UINT16_MAX;
	int32_t t75 = 3226;

    t75 = (x301<=(x302&(x303&x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -1LL;
	uint16_t x308 = UINT16_MAX;
	int32_t t76 = -232125008;

    t76 = (x305<=(x306&(x307&x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x309 = 5380U;
	int8_t x310 = INT8_MIN;
	uint16_t x311 = UINT16_MAX;
	uint8_t x312 = 6U;

    t77 = (x309<=(x310&(x311&x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -1;
	volatile int8_t x316 = -1;

    t78 = (x313<=(x314&(x315&x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x318 = -668218681046425LL;
	int16_t x319 = -1;
	int8_t x320 = 17;
	int32_t t79 = -396;

    t79 = (x317<=(x318&(x319&x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint32_t x321 = UINT32_MAX;
	int64_t x324 = 18154430132427583LL;
	volatile int32_t t80 = -200508714;

    t80 = (x321<=(x322&(x323&x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x326 = UINT64_MAX;
	uint32_t x327 = 500U;

    t81 = (x325<=(x326&(x327&x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -1;
	uint16_t x331 = UINT16_MAX;
	int64_t x332 = INT64_MIN;
	volatile int32_t t82 = -65392;

    t82 = (x329<=(x330&(x331&x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x333 = -1;
	static int64_t x334 = -1LL;
	int16_t x335 = INT16_MIN;
	volatile int64_t x336 = -10729395LL;

    t83 = (x333<=(x334&(x335&x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x338 = -1LL;
	static volatile int8_t x340 = INT8_MIN;
	static volatile int32_t t84 = -32;

    t84 = (x337<=(x338&(x339&x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x341 = -11LL;
	int16_t x342 = INT16_MAX;
	static int16_t x343 = -1152;
	int64_t x344 = 21623LL;
	int32_t t85 = 15891;

    t85 = (x341<=(x342&(x343&x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x346 = INT32_MIN;
	int64_t x347 = INT64_MAX;
	static volatile int32_t t86 = -526866957;

    t86 = (x345<=(x346&(x347&x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = 373737LL;
	uint8_t x351 = 0U;
	volatile int64_t x352 = -97886LL;
	volatile int32_t t87 = 40554;

    t87 = (x349<=(x350&(x351&x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x354 = INT64_MAX;
	uint16_t x356 = 1955U;
	int32_t t88 = -9811887;

    t88 = (x353<=(x354&(x355&x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x358 = INT16_MIN;
	int64_t x359 = -1LL;
	int32_t x360 = INT32_MAX;
	int32_t t89 = -19881;

    t89 = (x357<=(x358&(x359&x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = 9;
	static volatile int64_t x362 = -377963865101176LL;
	int32_t x363 = INT32_MAX;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t90 = 0;

    t90 = (x361<=(x362&(x363&x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x366 = -1;
	int32_t x367 = INT32_MIN;
	static int32_t x368 = INT32_MIN;
	static volatile int32_t t91 = 100;

    t91 = (x365<=(x366&(x367&x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = UINT16_MAX;
	int32_t x370 = INT32_MAX;
	int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MAX;
	volatile int32_t t92 = 1226;

    t92 = (x369<=(x370&(x371&x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int8_t x374 = INT8_MAX;
	int32_t x375 = -8010228;
	int16_t x376 = INT16_MIN;
	int32_t t93 = 109;

    t93 = (x373<=(x374&(x375&x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x378 = INT32_MAX;
	int16_t x379 = INT16_MIN;
	int32_t x380 = INT32_MIN;
	volatile int32_t t94 = 410;

    t94 = (x377<=(x378&(x379&x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x381 = INT32_MIN;
	volatile int64_t x382 = INT64_MIN;
	uint8_t x383 = 31U;
	int32_t t95 = -46448;

    t95 = (x381<=(x382&(x383&x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = -23848729022660LL;
	uint32_t x386 = UINT32_MAX;
	static uint64_t x387 = 372LLU;
	static uint8_t x388 = 3U;
	static int32_t t96 = 54388130;

    t96 = (x385<=(x386&(x387&x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = 3184U;
	volatile uint16_t x390 = 14U;
	static int16_t x391 = -1;
	int16_t x392 = -7643;
	int32_t t97 = 149;

    t97 = (x389<=(x390&(x391&x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x393 = -1;
	volatile int64_t x394 = -1LL;
	static volatile int64_t x395 = INT64_MIN;
	uint64_t x396 = UINT64_MAX;
	volatile int32_t t98 = -1;

    t98 = (x393<=(x394&(x395&x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint8_t x397 = UINT8_MAX;

    t99 = (x397<=(x398&(x399&x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = -1;
	uint8_t x402 = 96U;
	uint16_t x403 = UINT16_MAX;
	static int32_t x404 = INT32_MAX;
	int32_t t100 = 2;

    t100 = (x401<=(x402&(x403&x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x405 = INT8_MIN;
	uint8_t x406 = 104U;
	static int8_t x407 = INT8_MIN;
	static int32_t x408 = -633848335;
	volatile int32_t t101 = 0;

    t101 = (x405<=(x406&(x407&x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = UINT16_MAX;
	uint32_t x411 = 369U;
	int64_t x412 = INT64_MIN;
	volatile int32_t t102 = 1449886;

    t102 = (x409<=(x410&(x411&x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x414 = UINT8_MAX;
	static uint64_t x415 = UINT64_MAX;
	uint32_t x416 = UINT32_MAX;
	volatile int32_t t103 = -109848;

    t103 = (x413<=(x414&(x415&x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MAX;
	int64_t x418 = INT64_MAX;
	int8_t x419 = INT8_MAX;
	int32_t x420 = 98057;
	static volatile int32_t t104 = 136647501;

    t104 = (x417<=(x418&(x419&x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -8606397656450184LL;
	int16_t x422 = INT16_MIN;
	int16_t x423 = -1;
	volatile int32_t t105 = -887;

    t105 = (x421<=(x422&(x423&x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = UINT8_MAX;
	int8_t x426 = 15;
	int64_t x428 = -204568305062886LL;
	int32_t t106 = -677226;

    t106 = (x425<=(x426&(x427&x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = 20205289LL;
	int64_t x431 = -1LL;
	volatile int64_t x432 = -1LL;
	int32_t t107 = -32833296;

    t107 = (x429<=(x430&(x431&x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x433 = INT32_MIN;
	volatile uint16_t x434 = 26821U;
	volatile int32_t t108 = -224;

    t108 = (x433<=(x434&(x435&x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = 0U;
	int32_t x438 = -1;
	int32_t x439 = -58229317;
	uint32_t x440 = UINT32_MAX;
	static volatile int32_t t109 = 280981697;

    t109 = (x437<=(x438&(x439&x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x441 = INT8_MAX;
	int32_t x442 = INT32_MIN;
	int8_t x444 = INT8_MAX;

    t110 = (x441<=(x442&(x443&x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x446 = -11;
	static int64_t x447 = -1LL;

    t111 = (x445<=(x446&(x447&x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = -1;
	static int16_t x450 = 1880;
	int32_t x451 = -470396727;
	static int32_t x452 = -1;
	volatile int32_t t112 = 0;

    t112 = (x449<=(x450&(x451&x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = -1;
	int16_t x455 = INT16_MAX;
	static volatile int64_t x456 = INT64_MIN;
	static int32_t t113 = 44698014;

    t113 = (x453<=(x454&(x455&x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x457 = INT32_MIN;
	int16_t x458 = -15213;
	volatile uint64_t x459 = UINT64_MAX;

    t114 = (x457<=(x458&(x459&x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = -1;
	static int64_t x462 = INT64_MIN;
	int64_t x463 = -89310271LL;
	volatile int8_t x464 = 7;

    t115 = (x461<=(x462&(x463&x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MIN;
	int64_t x466 = INT64_MIN;
	static uint32_t x468 = 30624U;
	int32_t t116 = 495;

    t116 = (x465<=(x466&(x467&x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x470 = -75;
	volatile int8_t x471 = INT8_MIN;
	static uint16_t x472 = 15U;

    t117 = (x469<=(x470&(x471&x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MIN;
	int32_t x474 = -1;
	volatile uint32_t x475 = 1U;
	int8_t x476 = INT8_MIN;
	volatile int32_t t118 = -15477738;

    t118 = (x473<=(x474&(x475&x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -6534396711LL;
	int8_t x478 = -1;
	uint8_t x479 = 122U;

    t119 = (x477<=(x478&(x479&x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x482 = INT32_MIN;
	int8_t x483 = 7;
	static int64_t x484 = -1LL;
	volatile int32_t t120 = 3;

    t120 = (x481<=(x482&(x483&x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MAX;
	uint32_t x488 = 3484U;
	int32_t t121 = 287390275;

    t121 = (x485<=(x486&(x487&x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = UINT8_MAX;
	int8_t x490 = -7;
	int16_t x491 = INT16_MIN;
	static int16_t x492 = 1;
	volatile int32_t t122 = 348561943;

    t122 = (x489<=(x490&(x491&x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x493 = UINT8_MAX;
	int8_t x494 = INT8_MIN;
	uint8_t x495 = 9U;
	uint8_t x496 = UINT8_MAX;

    t123 = (x493<=(x494&(x495&x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = 37U;
	volatile int8_t x498 = INT8_MIN;
	static int32_t x499 = -1817;
	int8_t x500 = INT8_MIN;
	volatile int32_t t124 = -1555009;

    t124 = (x497<=(x498&(x499&x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MIN;
	volatile int64_t x502 = 1851LL;
	int8_t x503 = -1;
	static volatile int32_t x504 = INT32_MIN;
	volatile int32_t t125 = 14851015;

    t125 = (x501<=(x502&(x503&x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x507 = INT8_MAX;
	uint8_t x508 = 3U;
	volatile int32_t t126 = 1580;

    t126 = (x505<=(x506&(x507&x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = UINT16_MAX;
	uint64_t x510 = UINT64_MAX;
	volatile int32_t x511 = -1;
	uint64_t x512 = UINT64_MAX;
	volatile int32_t t127 = 70660;

    t127 = (x509<=(x510&(x511&x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = 23554496341522272LL;
	uint64_t x514 = UINT64_MAX;
	uint16_t x516 = 3U;
	int32_t t128 = 94040723;

    t128 = (x513<=(x514&(x515&x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 2U;
	int64_t x518 = -7914LL;
	int16_t x519 = -17;
	uint16_t x520 = 3U;
	int32_t t129 = 155665;

    t129 = (x517<=(x518&(x519&x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x523 = INT64_MIN;
	uint8_t x524 = UINT8_MAX;
	volatile int32_t t130 = 3;

    t130 = (x521<=(x522&(x523&x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x528 = 481854453LLU;

    t131 = (x525<=(x526&(x527&x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = 98U;
	int64_t x530 = INT64_MIN;
	int32_t x532 = INT32_MIN;
	static int32_t t132 = -219056050;

    t132 = (x529<=(x530&(x531&x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MAX;
	int8_t x534 = 0;
	volatile uint16_t x536 = 27U;

    t133 = (x533<=(x534&(x535&x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	uint16_t x538 = 0U;
	int64_t x539 = 107LL;
	int64_t x540 = -37502LL;
	int32_t t134 = -13380146;

    t134 = (x537<=(x538&(x539&x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = 1;
	uint32_t x543 = 71U;
	volatile int32_t x544 = -23330473;
	volatile int32_t t135 = -4694;

    t135 = (x541<=(x542&(x543&x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 12U;
	volatile int16_t x547 = INT16_MIN;
	static int32_t t136 = -6;

    t136 = (x545<=(x546&(x547&x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = -3LL;
	volatile int8_t x550 = INT8_MIN;
	int8_t x552 = -1;
	int32_t t137 = 92000;

    t137 = (x549<=(x550&(x551&x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = -18657789;
	int64_t x554 = 18304214119LL;
	volatile int8_t x555 = INT8_MIN;
	static int64_t x556 = INT64_MIN;
	static volatile int32_t t138 = 1;

    t138 = (x553<=(x554&(x555&x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x557 = INT8_MIN;
	int32_t x559 = INT32_MIN;
	int32_t t139 = 20;

    t139 = (x557<=(x558&(x559&x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 67088983393LLU;
	int32_t x563 = 28422883;
	uint16_t x564 = 1U;
	volatile int32_t t140 = 25;

    t140 = (x561<=(x562&(x563&x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x566 = -1;
	int64_t x567 = INT64_MIN;
	uint8_t x568 = 0U;
	int32_t t141 = -441411;

    t141 = (x565<=(x566&(x567&x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x569 = -2150361311680354394LL;
	uint8_t x570 = UINT8_MAX;
	int16_t x571 = -1;
	volatile uint64_t x572 = UINT64_MAX;

    t142 = (x569<=(x570&(x571&x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x574 = 800346U;
	int8_t x575 = INT8_MAX;
	static int8_t x576 = -25;
	int32_t t143 = -956987;

    t143 = (x573<=(x574&(x575&x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x577 = INT32_MIN;
	int64_t x578 = -725548340032LL;
	static int32_t x579 = -1;
	volatile int8_t x580 = 0;
	int32_t t144 = -204;

    t144 = (x577<=(x578&(x579&x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -910972366LL;
	static uint32_t x583 = UINT32_MAX;
	int64_t x584 = 129316LL;
	static volatile int32_t t145 = 30;

    t145 = (x581<=(x582&(x583&x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x585 = INT8_MIN;
	int64_t x586 = INT64_MAX;
	uint32_t x587 = 2056036692U;
	int32_t t146 = -16;

    t146 = (x585<=(x586&(x587&x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MIN;
	static int32_t x590 = INT32_MAX;
	int16_t x591 = 15331;
	int64_t x592 = INT64_MAX;
	int32_t t147 = 55;

    t147 = (x589<=(x590&(x591&x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MAX;
	volatile uint16_t x594 = 1U;
	static uint16_t x595 = 2U;
	static int32_t t148 = 1150587;

    t148 = (x593<=(x594&(x595&x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x597 = INT8_MIN;
	int32_t x598 = 466999;
	int16_t x599 = INT16_MIN;
	int16_t x600 = INT16_MAX;
	int32_t t149 = 101255;

    t149 = (x597<=(x598&(x599&x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 16179739U;
	int16_t x602 = -55;
	int16_t x603 = INT16_MIN;
	int64_t x604 = INT64_MAX;
	int32_t t150 = 3687;

    t150 = (x601<=(x602&(x603&x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x605 = -242500LL;
	volatile uint32_t x607 = 3972U;
	int16_t x608 = INT16_MIN;

    t151 = (x605<=(x606&(x607&x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x610 = UINT32_MAX;
	int32_t x611 = INT32_MIN;
	int32_t t152 = 170;

    t152 = (x609<=(x610&(x611&x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x613 = UINT64_MAX;
	static volatile int8_t x614 = INT8_MIN;
	int32_t x615 = -1;
	static int64_t x616 = -1LL;
	int32_t t153 = 2;

    t153 = (x613<=(x614&(x615&x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x617 = INT16_MIN;
	int8_t x618 = INT8_MIN;
	int8_t x619 = 3;
	volatile int16_t x620 = INT16_MAX;
	static volatile int32_t t154 = -99173;

    t154 = (x617<=(x618&(x619&x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x622 = INT16_MAX;
	int32_t x623 = -58198;
	volatile int16_t x624 = 2;
	volatile int32_t t155 = 7006;

    t155 = (x621<=(x622&(x623&x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x627 = -21;
	int8_t x628 = INT8_MIN;
	static int32_t t156 = -220356409;

    t156 = (x625<=(x626&(x627&x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -1;
	volatile int8_t x630 = -1;
	volatile int8_t x631 = -31;
	int8_t x632 = INT8_MIN;

    t157 = (x629<=(x630&(x631&x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint16_t x633 = UINT16_MAX;
	static uint64_t x635 = 37400539411LLU;
	int64_t x636 = 4770805595LL;
	int32_t t158 = 5694;

    t158 = (x633<=(x634&(x635&x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x638 = 7485511U;
	int16_t x639 = INT16_MAX;
	static volatile int8_t x640 = -2;
	int32_t t159 = -3;

    t159 = (x637<=(x638&(x639&x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MAX;
	int32_t x642 = -8;
	int8_t x643 = INT8_MIN;
	static int64_t x644 = 2057LL;
	volatile int32_t t160 = -29733862;

    t160 = (x641<=(x642&(x643&x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -1;
	static uint8_t x646 = UINT8_MAX;
	int16_t x647 = -1;
	uint32_t x648 = 11U;

    t161 = (x645<=(x646&(x647&x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = 721523;
	int32_t x650 = -1;
	static uint16_t x651 = 255U;
	int32_t x652 = 15411;
	int32_t t162 = 1;

    t162 = (x649<=(x650&(x651&x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 3460U;
	int64_t x655 = INT64_MIN;
	int16_t x656 = INT16_MAX;
	volatile int32_t t163 = 252095;

    t163 = (x653<=(x654&(x655&x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x657 = 28;
	uint8_t x658 = UINT8_MAX;
	int32_t x659 = 1;
	int32_t t164 = -163;

    t164 = (x657<=(x658&(x659&x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = 12182;
	uint64_t x662 = 63815789152344LLU;
	uint8_t x663 = 29U;
	static uint16_t x664 = UINT16_MAX;
	int32_t t165 = 2985;

    t165 = (x661<=(x662&(x663&x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x666 = 119U;
	uint32_t x667 = UINT32_MAX;
	static int64_t x668 = -1LL;
	volatile int32_t t166 = -22;

    t166 = (x665<=(x666&(x667&x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x670 = INT64_MIN;
	uint16_t x672 = 11096U;
	static int32_t t167 = -3;

    t167 = (x669<=(x670&(x671&x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint8_t x673 = UINT8_MAX;
	static uint32_t x674 = UINT32_MAX;

    t168 = (x673<=(x674&(x675&x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -117639LL;
	int16_t x679 = INT16_MAX;
	volatile int32_t x680 = -1;

    t169 = (x677<=(x678&(x679&x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	volatile int32_t x682 = INT32_MIN;
	uint8_t x684 = 43U;
	volatile int32_t t170 = -4;

    t170 = (x681<=(x682&(x683&x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = -583;
	volatile int8_t x686 = -1;
	volatile int16_t x687 = INT16_MIN;
	int32_t x688 = -637603824;
	volatile int32_t t171 = -31;

    t171 = (x685<=(x686&(x687&x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = 1U;
	int8_t x690 = INT8_MIN;
	static volatile int8_t x692 = -1;
	static volatile int32_t t172 = 7;

    t172 = (x689<=(x690&(x691&x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x693 = INT32_MIN;
	int32_t x694 = -1;

    t173 = (x693<=(x694&(x695&x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x697 = INT16_MIN;
	volatile int64_t x698 = -168LL;
	uint8_t x699 = UINT8_MAX;
	static volatile int32_t t174 = -1211055;

    t174 = (x697<=(x698&(x699&x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x702 = INT32_MIN;
	int16_t x704 = INT16_MAX;
	static int32_t t175 = 7919;

    t175 = (x701<=(x702&(x703&x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x705 = INT32_MIN;
	int16_t x706 = -1;
	volatile int8_t x707 = INT8_MIN;
	int8_t x708 = -1;
	int32_t t176 = -33080779;

    t176 = (x705<=(x706&(x707&x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MIN;
	uint32_t x710 = 2930U;
	volatile int64_t x711 = INT64_MIN;
	int16_t x712 = 2;
	int32_t t177 = -5991;

    t177 = (x709<=(x710&(x711&x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = 1;
	int64_t x715 = INT64_MIN;

    t178 = (x713<=(x714&(x715&x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x717 = UINT64_MAX;
	uint8_t x718 = UINT8_MAX;
	int8_t x719 = -1;
	uint8_t x720 = 0U;
	volatile int32_t t179 = 22;

    t179 = (x717<=(x718&(x719&x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x722 = -30;
	uint32_t x724 = UINT32_MAX;
	int32_t t180 = -670;

    t180 = (x721<=(x722&(x723&x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x727 = 30U;
	int8_t x728 = 3;
	volatile int32_t t181 = 4760326;

    t181 = (x725<=(x726&(x727&x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	volatile int16_t x730 = 18;
	static uint32_t x731 = 216U;
	volatile uint8_t x732 = 122U;

    t182 = (x729<=(x730&(x731&x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MIN;
	volatile int8_t x734 = 30;
	static int16_t x735 = INT16_MIN;
	static int32_t x736 = INT32_MIN;
	volatile int32_t t183 = -1060965433;

    t183 = (x733<=(x734&(x735&x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MAX;
	uint8_t x738 = 0U;
	uint16_t x739 = 52U;
	static int8_t x740 = INT8_MIN;

    t184 = (x737<=(x738&(x739&x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MIN;
	int8_t x742 = INT8_MIN;
	int16_t x744 = INT16_MAX;
	int32_t t185 = 0;

    t185 = (x741<=(x742&(x743&x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = -1;
	int64_t x746 = -1LL;
	static int64_t x747 = INT64_MIN;
	static int32_t x748 = -49965603;
	int32_t t186 = -242809877;

    t186 = (x745<=(x746&(x747&x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = UINT64_MAX;
	uint16_t x750 = 26U;
	int16_t x751 = INT16_MIN;
	volatile int32_t t187 = -7426;

    t187 = (x749<=(x750&(x751&x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x754 = INT32_MAX;
	int16_t x755 = INT16_MIN;
	int16_t x756 = 23;

    t188 = (x753<=(x754&(x755&x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x757 = INT8_MIN;
	volatile int16_t x758 = 111;
	int8_t x760 = -1;

    t189 = (x757<=(x758&(x759&x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x763 = 30745866128818LLU;
	int8_t x764 = INT8_MAX;
	int32_t t190 = 257814;

    t190 = (x761<=(x762&(x763&x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MAX;
	int32_t t191 = -30;

    t191 = (x765<=(x766&(x767&x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 110U;
	int32_t x770 = -1;
	int32_t x771 = 66569079;
	volatile int32_t t192 = -141898687;

    t192 = (x769<=(x770&(x771&x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x773 = -1;
	volatile int16_t x774 = -1;
	int64_t x775 = INT64_MAX;
	int32_t x776 = INT32_MIN;

    t193 = (x773<=(x774&(x775&x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = 1;
	static uint64_t x778 = 443493008827LLU;
	uint16_t x780 = 3U;

    t194 = (x777<=(x778&(x779&x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = -104;
	int32_t x782 = INT32_MIN;
	uint64_t x783 = 2406LLU;
	volatile uint8_t x784 = 3U;
	volatile int32_t t195 = 1853490;

    t195 = (x781<=(x782&(x783&x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = UINT8_MAX;
	int8_t x787 = INT8_MAX;
	static volatile int8_t x788 = INT8_MIN;
	volatile int32_t t196 = 4481354;

    t196 = (x785<=(x786&(x787&x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x789 = INT64_MIN;
	uint64_t x790 = 4318750609898390LLU;
	volatile int16_t x791 = 7;
	volatile int8_t x792 = INT8_MIN;
	volatile int32_t t197 = -465333568;

    t197 = (x789<=(x790&(x791&x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = -1;
	int8_t x794 = 1;
	uint64_t x795 = 32038409LLU;
	volatile int8_t x796 = -1;

    t198 = (x793<=(x794&(x795&x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x798 = 219205267164LLU;
	uint64_t x799 = 217459806LLU;
	volatile int8_t x800 = INT8_MIN;

    t199 = (x797<=(x798&(x799&x800)));

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

