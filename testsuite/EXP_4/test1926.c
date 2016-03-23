
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

uint8_t x8 = 29U;
int64_t x11 = 32LL;
static uint32_t x16 = 347U;
uint16_t x17 = 15U;
volatile int32_t x27 = 12197427;
int32_t x33 = -1;
int64_t x38 = -249LL;
int64_t x45 = 2640457913211489LL;
uint8_t x51 = 6U;
static int32_t x56 = INT32_MIN;
int32_t t13 = 826;
int64_t x60 = INT64_MAX;
int32_t x61 = -204250457;
static int64_t x63 = INT64_MAX;
int32_t t16 = -4584;
static int32_t x73 = INT32_MIN;
uint16_t x77 = 1796U;
int8_t x79 = -1;
volatile int32_t t19 = 3;
int32_t x84 = INT32_MIN;
volatile int32_t t20 = -10225750;
static int64_t x93 = 99704806302239208LL;
uint16_t x100 = UINT16_MAX;
static volatile int16_t x101 = -1;
volatile int32_t x109 = 3021;
volatile uint16_t x124 = UINT16_MAX;
uint16_t x134 = 7430U;
int8_t x135 = 54;
int8_t x159 = 10;
static int64_t x172 = 51LL;
int32_t t42 = 297105346;
uint16_t x178 = UINT16_MAX;
uint64_t x180 = 0LLU;
volatile int32_t t46 = -119496811;
static uint16_t x190 = 3U;
int8_t x197 = INT8_MIN;
int64_t x207 = INT64_MIN;
uint32_t x209 = UINT32_MAX;
static int8_t x213 = INT8_MIN;
uint64_t x214 = 3475059932686903732LLU;
uint32_t x215 = 60351U;
volatile uint32_t x219 = 5421U;
volatile int32_t t54 = 971728050;
static int8_t x222 = INT8_MAX;
static volatile uint64_t x223 = 3465978LLU;
static int32_t x233 = -100;
int64_t x245 = -1LL;
volatile uint16_t x255 = UINT16_MAX;
static volatile int32_t t64 = -2859079;
volatile int64_t x272 = -1LL;
int64_t x275 = INT64_MIN;
static uint8_t x278 = UINT8_MAX;
volatile uint32_t x280 = UINT32_MAX;
int8_t x283 = -39;
int16_t x289 = INT16_MIN;
int8_t x294 = -1;
uint8_t x298 = 15U;
uint16_t x300 = 188U;
static int32_t t74 = -880757431;
volatile int32_t t75 = -196838074;
uint8_t x308 = 13U;
static volatile int8_t x311 = -1;
int32_t t78 = -984481465;
volatile int16_t x318 = INT16_MIN;
uint32_t x321 = 1834U;
int64_t x322 = INT64_MIN;
volatile int32_t t80 = -33528079;
int64_t x325 = -1LL;
int64_t x327 = INT64_MAX;
int32_t x342 = INT32_MIN;
int32_t x359 = INT32_MIN;
volatile int8_t x360 = -1;
static uint32_t x364 = 125176U;
int8_t x367 = -13;
uint8_t x370 = 109U;
uint8_t x371 = 87U;
int32_t t92 = 248;
volatile int8_t x375 = INT8_MIN;
int8_t x378 = INT8_MAX;
int32_t x382 = INT32_MAX;
uint16_t x392 = UINT16_MAX;
volatile int8_t x395 = INT8_MIN;
volatile int64_t x398 = INT64_MIN;
uint16_t x404 = 506U;
int64_t x405 = 92578791852654LL;
volatile int32_t t101 = 0;
static int16_t x409 = 8555;
static int32_t t102 = -36562;
volatile int16_t x413 = -28;
uint8_t x418 = 38U;
uint8_t x420 = UINT8_MAX;
int32_t t104 = 82880791;
static int64_t x422 = INT64_MIN;
static int32_t x429 = INT32_MAX;
volatile int32_t x431 = -728762;
int16_t x432 = INT16_MAX;
uint8_t x438 = 6U;
static int32_t t110 = 0;
volatile int8_t x449 = INT8_MIN;
int16_t x450 = INT16_MIN;
int32_t t112 = -16038259;
static uint16_t x464 = UINT16_MAX;
static int32_t x467 = INT32_MAX;
volatile int32_t x471 = -3928;
int8_t x474 = INT8_MIN;
int8_t x477 = INT8_MIN;
volatile int64_t x481 = 1LL;
int64_t x484 = INT64_MAX;
uint8_t x489 = 13U;
uint32_t x495 = UINT32_MAX;
int64_t x501 = -1380219LL;
static int16_t x505 = INT16_MAX;
int8_t x525 = 1;
uint8_t x527 = 11U;
volatile int8_t x532 = INT8_MIN;
int8_t x540 = INT8_MIN;
int8_t x548 = 1;
int32_t t136 = -1;
uint16_t x549 = 23U;
static int32_t t140 = 40;
int32_t x567 = -1;
volatile int8_t x571 = -8;
volatile uint8_t x573 = UINT8_MAX;
static int8_t x576 = 10;
volatile int32_t x577 = INT32_MIN;
static int32_t x583 = INT32_MIN;
uint8_t x589 = UINT8_MAX;
int8_t x594 = 3;
int64_t x595 = INT64_MAX;
volatile int64_t x597 = 2171035588354697LL;
int32_t t149 = 5605428;
int8_t x602 = 1;
int64_t x604 = -1LL;
uint32_t x606 = UINT32_MAX;
int64_t x614 = INT64_MIN;
uint64_t x618 = 750677194515833275LLU;
uint8_t x620 = UINT8_MAX;
uint32_t x624 = 240U;
uint8_t x631 = 69U;
static volatile int64_t x638 = -220462220LL;
int16_t x644 = 2935;
uint16_t x645 = 0U;
int8_t x648 = INT8_MIN;
int32_t x649 = 2919738;
uint8_t x651 = 107U;
static uint16_t x653 = 16668U;
static volatile int64_t x656 = -1LL;
int32_t t163 = 132490822;
uint8_t x658 = 5U;
int64_t x659 = INT64_MIN;
int32_t t164 = -762;
int32_t x670 = INT32_MAX;
int8_t x671 = INT8_MIN;
static int64_t x675 = -1LL;
int32_t x677 = INT32_MIN;
uint8_t x680 = UINT8_MAX;
int8_t x686 = INT8_MIN;
int32_t t171 = 7956003;
int32_t t173 = 1323;
volatile int32_t t175 = -638620;
int64_t x705 = -1LL;
int8_t x709 = 1;
int8_t x710 = -1;
int8_t x716 = -1;
uint8_t x718 = UINT8_MAX;
uint16_t x728 = 496U;
volatile int32_t x729 = 66563768;
volatile int64_t x731 = -1LL;
uint32_t x736 = UINT32_MAX;
int32_t t184 = -984802;
int8_t x741 = INT8_MIN;
int16_t x742 = -3515;
volatile int32_t t185 = -81711972;
static volatile int8_t x746 = -1;
int32_t x756 = INT32_MAX;
int64_t x758 = -1LL;
int32_t t190 = 31673;
static int16_t x766 = INT16_MIN;
volatile int64_t x768 = INT64_MIN;
uint32_t x776 = 0U;
volatile int8_t x778 = -19;
static volatile int32_t t194 = 3298;
uint32_t x790 = UINT32_MAX;
static int32_t t197 = -1;
uint64_t x793 = 0LLU;
volatile int16_t x795 = -1;


void f0(void) {
    	volatile int16_t x1 = INT16_MAX;
	int16_t x2 = -1;
	int16_t x3 = 0;
	uint32_t x4 = 2138828136U;
	volatile int32_t t0 = -250027544;

    t0 = (x1==(x2&(x3<=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	uint64_t x6 = 15LLU;
	volatile uint32_t x7 = UINT32_MAX;
	volatile int32_t t1 = 0;

    t1 = (x5==(x6&(x7<=x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = INT16_MIN;
	int64_t x10 = INT64_MAX;
	int16_t x12 = -7;
	int32_t t2 = 50089541;

    t2 = (x9==(x10&(x11<=x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	volatile int32_t x14 = -1;
	static uint64_t x15 = UINT64_MAX;
	volatile int32_t t3 = 21283045;

    t3 = (x13==(x14&(x15<=x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = -1;
	volatile int64_t x19 = 189295153825413265LL;
	volatile int16_t x20 = INT16_MIN;
	int32_t t4 = -107956331;

    t4 = (x17==(x18&(x19<=x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x21 = 2132320411LLU;
	static int8_t x22 = INT8_MIN;
	int32_t x23 = -27739;
	static int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -371266071;

    t5 = (x21==(x22&(x23<=x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = 13;
	int8_t x26 = INT8_MAX;
	int64_t x28 = -1LL;
	volatile int32_t t6 = 122;

    t6 = (x25==(x26&(x27<=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	static int32_t x30 = INT32_MAX;
	int64_t x31 = INT64_MAX;
	static uint8_t x32 = 33U;
	int32_t t7 = -419;

    t7 = (x29==(x30&(x31<=x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x34 = INT64_MIN;
	int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = -1;

    t8 = (x33==(x34&(x35<=x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	uint8_t x39 = 2U;
	static int32_t x40 = -1;
	static volatile int32_t t9 = 257648800;

    t9 = (x37==(x38&(x39<=x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = -1;
	int8_t x42 = -1;
	int32_t x43 = INT32_MIN;
	volatile uint16_t x44 = 5U;
	volatile int32_t t10 = -307;

    t10 = (x41==(x42&(x43<=x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x46 = INT64_MIN;
	volatile int8_t x47 = 47;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = -63683;

    t11 = (x45==(x46&(x47<=x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 5937U;
	static volatile uint32_t x50 = 1694U;
	uint64_t x52 = 1727174LLU;
	int32_t t12 = -5676092;

    t12 = (x49==(x50&(x51<=x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = 151841265LL;
	int8_t x54 = -1;
	uint32_t x55 = 287199U;

    t13 = (x53==(x54&(x55<=x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = -1LL;
	int64_t x58 = 3379156240525319LL;
	uint16_t x59 = UINT16_MAX;
	int32_t t14 = -111347;

    t14 = (x57==(x58&(x59<=x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x62 = 859630U;
	uint8_t x64 = 123U;
	volatile int32_t t15 = 125882040;

    t15 = (x61==(x62&(x63<=x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x65 = -1609LL;
	uint16_t x66 = 20294U;
	static int32_t x67 = -1;
	int64_t x68 = -299LL;

    t16 = (x65==(x66&(x67<=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = INT8_MAX;
	volatile int16_t x70 = INT16_MIN;
	int64_t x71 = INT64_MIN;
	volatile int32_t x72 = INT32_MIN;
	volatile int32_t t17 = 17;

    t17 = (x69==(x70&(x71<=x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x74 = UINT8_MAX;
	volatile int32_t x75 = INT32_MAX;
	int64_t x76 = -7744699083LL;
	volatile int32_t t18 = 73583013;

    t18 = (x73==(x74&(x75<=x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x78 = 79928944147163LL;
	uint16_t x80 = 15U;

    t19 = (x77==(x78&(x79<=x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MAX;
	int32_t x82 = 148144330;
	int64_t x83 = INT64_MIN;

    t20 = (x81==(x82&(x83<=x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	int16_t x86 = INT16_MAX;
	uint64_t x87 = UINT64_MAX;
	int32_t x88 = 1527972;
	static volatile int32_t t21 = -129278619;

    t21 = (x85==(x86&(x87<=x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = INT16_MAX;
	int64_t x90 = INT64_MIN;
	volatile int32_t x91 = INT32_MAX;
	uint8_t x92 = 0U;
	int32_t t22 = -4271;

    t22 = (x89==(x90&(x91<=x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x94 = 126LLU;
	int16_t x95 = INT16_MIN;
	uint16_t x96 = 1U;
	volatile int32_t t23 = 1207475;

    t23 = (x93==(x94&(x95<=x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = -15;
	int32_t x98 = 4319249;
	int8_t x99 = -1;
	volatile int32_t t24 = -4312;

    t24 = (x97==(x98&(x99<=x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x102 = INT64_MAX;
	int64_t x103 = INT64_MIN;
	uint64_t x104 = 1368108421502LLU;
	int32_t t25 = -83190795;

    t25 = (x101==(x102&(x103<=x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -1;
	int8_t x106 = 1;
	int64_t x107 = INT64_MAX;
	volatile int64_t x108 = INT64_MIN;
	volatile int32_t t26 = -276543;

    t26 = (x105==(x106&(x107<=x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x110 = INT32_MIN;
	int8_t x111 = INT8_MAX;
	volatile int8_t x112 = INT8_MIN;
	int32_t t27 = -1;

    t27 = (x109==(x110&(x111<=x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = -10785;
	volatile int64_t x114 = INT64_MIN;
	int16_t x115 = INT16_MAX;
	volatile int32_t x116 = -27;
	int32_t t28 = 230284;

    t28 = (x113==(x114&(x115<=x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = 2707LL;
	volatile uint8_t x118 = UINT8_MAX;
	int64_t x119 = -317633734LL;
	uint64_t x120 = 1156484812537LLU;
	volatile int32_t t29 = 20944887;

    t29 = (x117==(x118&(x119<=x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x121 = INT32_MIN;
	static int16_t x122 = 42;
	int32_t x123 = INT32_MIN;
	volatile int32_t t30 = 19268;

    t30 = (x121==(x122&(x123<=x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MAX;
	static uint64_t x126 = 1829626615LLU;
	int32_t x127 = -494;
	int64_t x128 = -1LL;
	int32_t t31 = -15328;

    t31 = (x125==(x126&(x127<=x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 2U;
	uint8_t x130 = 121U;
	static uint16_t x131 = 161U;
	static int32_t x132 = -1;
	int32_t t32 = -105998546;

    t32 = (x129==(x130&(x131<=x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x133 = INT64_MIN;
	volatile int64_t x136 = INT64_MIN;
	volatile int32_t t33 = 8824482;

    t33 = (x133==(x134&(x135<=x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = 15184;
	static int32_t x138 = INT32_MIN;
	static uint32_t x139 = 249U;
	uint16_t x140 = 388U;
	volatile int32_t t34 = 0;

    t34 = (x137==(x138&(x139<=x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 26U;
	int8_t x142 = INT8_MAX;
	int16_t x143 = INT16_MAX;
	int8_t x144 = INT8_MAX;
	int32_t t35 = -26665585;

    t35 = (x141==(x142&(x143<=x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = 10956464LL;
	int64_t x146 = INT64_MIN;
	int8_t x147 = -45;
	int64_t x148 = INT64_MIN;
	volatile int32_t t36 = 14217231;

    t36 = (x145==(x146&(x147<=x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 103358620618LLU;
	static int16_t x150 = -5111;
	uint64_t x151 = 20111501LLU;
	static int64_t x152 = 56677LL;
	int32_t t37 = 73;

    t37 = (x149==(x150&(x151<=x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = 1;
	volatile int8_t x154 = INT8_MAX;
	uint8_t x155 = 17U;
	static int16_t x156 = INT16_MIN;
	static int32_t t38 = 16422;

    t38 = (x153==(x154&(x155<=x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint8_t x157 = 1U;
	static int16_t x158 = -1;
	static uint64_t x160 = UINT64_MAX;
	volatile int32_t t39 = 44;

    t39 = (x157==(x158&(x159<=x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = UINT32_MAX;
	static int32_t x162 = 1346624;
	static int8_t x163 = INT8_MIN;
	int8_t x164 = INT8_MIN;
	int32_t t40 = 162;

    t40 = (x161==(x162&(x163<=x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -1;
	volatile uint16_t x166 = UINT16_MAX;
	int8_t x167 = INT8_MIN;
	int32_t x168 = 702133;
	int32_t t41 = 852708;

    t41 = (x165==(x166&(x167<=x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x169 = UINT16_MAX;
	uint32_t x170 = 4703U;
	static volatile int16_t x171 = INT16_MIN;

    t42 = (x169==(x170&(x171<=x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 55865661082LLU;
	volatile int8_t x174 = INT8_MIN;
	int64_t x175 = -1LL;
	int64_t x176 = 114LL;
	int32_t t43 = -4440;

    t43 = (x173==(x174&(x175<=x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1;
	int64_t x179 = 721927113300816LL;
	int32_t t44 = -101111825;

    t44 = (x177==(x178&(x179<=x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	int32_t x182 = INT32_MAX;
	static uint8_t x183 = UINT8_MAX;
	uint64_t x184 = UINT64_MAX;
	static volatile int32_t t45 = 1946;

    t45 = (x181==(x182&(x183<=x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = -6;
	static volatile int32_t x186 = INT32_MIN;
	static int16_t x187 = 1847;
	int16_t x188 = -8085;

    t46 = (x185==(x186&(x187<=x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 367U;
	volatile uint64_t x191 = UINT64_MAX;
	int8_t x192 = 1;
	static int32_t t47 = -24840029;

    t47 = (x189==(x190&(x191<=x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x193 = 104U;
	uint8_t x194 = 0U;
	volatile int32_t x195 = 13249;
	int64_t x196 = INT64_MIN;
	volatile int32_t t48 = 214233362;

    t48 = (x193==(x194&(x195<=x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x198 = 469;
	uint16_t x199 = UINT16_MAX;
	int64_t x200 = -1LL;
	volatile int32_t t49 = -22;

    t49 = (x197==(x198&(x199<=x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MAX;
	volatile int64_t x202 = -2751301363LL;
	int16_t x203 = INT16_MIN;
	static volatile int32_t x204 = 2092446;
	int32_t t50 = -244023094;

    t50 = (x201==(x202&(x203<=x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x205 = 2LLU;
	uint64_t x206 = 17371004745244LLU;
	volatile int64_t x208 = -1LL;
	int32_t t51 = 459663589;

    t51 = (x205==(x206&(x207<=x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x210 = UINT8_MAX;
	int8_t x211 = -27;
	int64_t x212 = INT64_MIN;
	int32_t t52 = 126850983;

    t52 = (x209==(x210&(x211<=x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x216 = -149;
	int32_t t53 = -497355;

    t53 = (x213==(x214&(x215<=x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x217 = INT8_MIN;
	uint64_t x218 = 7937295520LLU;
	volatile uint8_t x220 = UINT8_MAX;

    t54 = (x217==(x218&(x219<=x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint16_t x221 = UINT16_MAX;
	int32_t x224 = -1;
	int32_t t55 = -88;

    t55 = (x221==(x222&(x223<=x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x225 = -3;
	static int8_t x226 = INT8_MAX;
	int16_t x227 = INT16_MAX;
	uint16_t x228 = 150U;
	int32_t t56 = 0;

    t56 = (x225==(x226&(x227<=x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = -57;
	int32_t x230 = -1;
	uint16_t x231 = 186U;
	int64_t x232 = 8602LL;
	volatile int32_t t57 = 145;

    t57 = (x229==(x230&(x231<=x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x234 = -1;
	volatile uint32_t x235 = UINT32_MAX;
	int16_t x236 = -15597;
	static volatile int32_t t58 = -7;

    t58 = (x233==(x234&(x235<=x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x237 = 6U;
	int32_t x238 = INT32_MAX;
	int16_t x239 = -1;
	static int16_t x240 = 59;
	volatile int32_t t59 = 97;

    t59 = (x237==(x238&(x239<=x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -1;
	uint32_t x242 = UINT32_MAX;
	int64_t x243 = INT64_MIN;
	uint8_t x244 = 21U;
	int32_t t60 = 150;

    t60 = (x241==(x242&(x243<=x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x246 = 1U;
	uint16_t x247 = 18452U;
	volatile uint16_t x248 = 8U;
	static volatile int32_t t61 = -365456;

    t61 = (x245==(x246&(x247<=x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MAX;
	volatile uint32_t x250 = 246247103U;
	uint16_t x251 = 2117U;
	volatile int16_t x252 = INT16_MAX;
	static int32_t t62 = 1429913;

    t62 = (x249==(x250&(x251<=x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint64_t x253 = 88LLU;
	uint16_t x254 = UINT16_MAX;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t63 = -152;

    t63 = (x253==(x254&(x255<=x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MIN;
	int32_t x259 = INT32_MIN;
	static volatile uint16_t x260 = 0U;

    t64 = (x257==(x258&(x259<=x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = UINT32_MAX;
	static uint8_t x262 = 12U;
	static volatile uint8_t x263 = 5U;
	int16_t x264 = -1;
	int32_t t65 = -9272;

    t65 = (x261==(x262&(x263<=x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x265 = 25U;
	int8_t x266 = -2;
	int32_t x267 = -1;
	uint16_t x268 = 49U;
	int32_t t66 = -47923;

    t66 = (x265==(x266&(x267<=x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = -1;
	int8_t x270 = INT8_MAX;
	uint64_t x271 = 20388LLU;
	int32_t t67 = 1;

    t67 = (x269==(x270&(x271<=x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -1;
	int16_t x274 = -3;
	uint32_t x276 = 37U;
	volatile int32_t t68 = 392882;

    t68 = (x273==(x274&(x275<=x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = UINT64_MAX;
	int8_t x279 = INT8_MAX;
	volatile int32_t t69 = -1113;

    t69 = (x277==(x278&(x279<=x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x281 = -1;
	int32_t x282 = 1;
	int32_t x284 = INT32_MIN;
	static int32_t t70 = 791949729;

    t70 = (x281==(x282&(x283<=x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x285 = INT8_MAX;
	int64_t x286 = INT64_MIN;
	volatile int32_t x287 = -1;
	static int8_t x288 = INT8_MIN;
	int32_t t71 = -204728098;

    t71 = (x285==(x286&(x287<=x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x290 = 492481970;
	uint64_t x291 = 823121889673LLU;
	volatile int16_t x292 = 126;
	volatile int32_t t72 = -5285;

    t72 = (x289==(x290&(x291<=x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x293 = 7034264LLU;
	int16_t x295 = INT16_MAX;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t73 = -4599958;

    t73 = (x293==(x294&(x295<=x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MIN;
	int32_t x299 = -1;

    t74 = (x297==(x298&(x299<=x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	int64_t x302 = -41668032260919312LL;
	int32_t x303 = -1;
	uint16_t x304 = UINT16_MAX;

    t75 = (x301==(x302&(x303<=x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	int16_t x306 = INT16_MIN;
	int64_t x307 = INT64_MAX;
	volatile int32_t t76 = 102398756;

    t76 = (x305==(x306&(x307<=x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x309 = UINT64_MAX;
	static int8_t x310 = 46;
	uint16_t x312 = UINT16_MAX;
	static int32_t t77 = -3;

    t77 = (x309==(x310&(x311<=x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = -594898LL;
	int32_t x314 = 154802;
	volatile uint64_t x315 = 200LLU;
	int32_t x316 = 2681272;

    t78 = (x313==(x314&(x315<=x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = -1;
	int32_t x319 = -1;
	uint64_t x320 = 7552485370877323LLU;
	volatile int32_t t79 = -12438546;

    t79 = (x317==(x318&(x319<=x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x323 = 0;
	uint32_t x324 = 7U;

    t80 = (x321==(x322&(x323<=x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x326 = INT32_MIN;
	volatile int32_t x328 = -1;
	int32_t t81 = 61070532;

    t81 = (x325==(x326&(x327<=x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x329 = UINT8_MAX;
	volatile int64_t x330 = -1LL;
	uint8_t x331 = UINT8_MAX;
	int16_t x332 = INT16_MAX;
	volatile int32_t t82 = -25084;

    t82 = (x329==(x330&(x331<=x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 335U;
	int16_t x334 = 7119;
	int8_t x335 = INT8_MIN;
	static int64_t x336 = INT64_MIN;
	volatile int32_t t83 = -174183463;

    t83 = (x333==(x334&(x335<=x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 16U;
	uint8_t x338 = 8U;
	uint32_t x339 = 87U;
	int64_t x340 = -1LL;
	int32_t t84 = 1;

    t84 = (x337==(x338&(x339<=x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x341 = INT16_MAX;
	volatile uint16_t x343 = 126U;
	volatile uint32_t x344 = 171247303U;
	int32_t t85 = -497627991;

    t85 = (x341==(x342&(x343<=x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint64_t x345 = 15113LLU;
	volatile int64_t x346 = -7113806303673101LL;
	uint8_t x347 = UINT8_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t86 = 138;

    t86 = (x345==(x346&(x347<=x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 210262LLU;
	int16_t x350 = INT16_MIN;
	static int32_t x351 = INT32_MIN;
	int16_t x352 = 17;
	volatile int32_t t87 = -74707548;

    t87 = (x349==(x350&(x351<=x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = 4503;
	int32_t x354 = -42;
	int8_t x355 = INT8_MAX;
	int8_t x356 = INT8_MIN;
	static volatile int32_t t88 = 5;

    t88 = (x353==(x354&(x355<=x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MAX;
	volatile int16_t x358 = -3336;
	int32_t t89 = -552931538;

    t89 = (x357==(x358&(x359<=x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x361 = 293;
	uint64_t x362 = 111037561362676474LLU;
	int32_t x363 = INT32_MIN;
	volatile int32_t t90 = -6;

    t90 = (x361==(x362&(x363<=x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MIN;
	volatile uint8_t x366 = UINT8_MAX;
	int16_t x368 = 1;
	volatile int32_t t91 = -1;

    t91 = (x365==(x366&(x367<=x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MAX;
	int32_t x372 = -1;

    t92 = (x369==(x370&(x371<=x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x373 = 799312212608LL;
	volatile int16_t x374 = -1;
	static uint32_t x376 = 7878U;
	static int32_t t93 = 0;

    t93 = (x373==(x374&(x375<=x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = INT8_MIN;
	int16_t x379 = INT16_MIN;
	volatile uint16_t x380 = UINT16_MAX;
	int32_t t94 = 5843;

    t94 = (x377==(x378&(x379<=x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = -1;
	volatile int16_t x383 = INT16_MAX;
	int32_t x384 = 15206323;
	volatile int32_t t95 = -2865;

    t95 = (x381==(x382&(x383<=x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x385 = -1;
	static volatile uint64_t x386 = 12757075LLU;
	uint32_t x387 = 49984U;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t96 = -3980931;

    t96 = (x385==(x386&(x387<=x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x389 = 1667U;
	uint64_t x390 = UINT64_MAX;
	uint8_t x391 = 21U;
	int32_t t97 = -27985039;

    t97 = (x389==(x390&(x391<=x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	static volatile int16_t x394 = INT16_MAX;
	int16_t x396 = -233;
	volatile int32_t t98 = -2624;

    t98 = (x393==(x394&(x395<=x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 1U;
	int16_t x399 = INT16_MIN;
	uint8_t x400 = 24U;
	static volatile int32_t t99 = -138939948;

    t99 = (x397==(x398&(x399<=x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x401 = INT8_MAX;
	volatile int8_t x402 = -1;
	int32_t x403 = INT32_MIN;
	volatile int32_t t100 = 13301;

    t100 = (x401==(x402&(x403<=x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x406 = -1;
	volatile int64_t x407 = 16691801466951LL;
	int64_t x408 = 4191924330091145LL;

    t101 = (x405==(x406&(x407<=x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x410 = INT16_MAX;
	static uint8_t x411 = UINT8_MAX;
	volatile int8_t x412 = -1;

    t102 = (x409==(x410&(x411<=x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x414 = 2LL;
	int16_t x415 = 14;
	int32_t x416 = -766;
	static int32_t t103 = -17;

    t103 = (x413==(x414&(x415<=x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x417 = 2U;
	int8_t x419 = INT8_MIN;

    t104 = (x417==(x418&(x419<=x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = -1;
	volatile int32_t x423 = 0;
	int32_t x424 = 110429;
	int32_t t105 = 819964426;

    t105 = (x421==(x422&(x423<=x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = -25344348LL;
	int8_t x426 = INT8_MIN;
	int32_t x427 = 98057;
	uint32_t x428 = 97403368U;
	volatile int32_t t106 = -7628;

    t106 = (x425==(x426&(x427<=x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int8_t x430 = -1;
	int32_t t107 = -6;

    t107 = (x429==(x430&(x431<=x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x433 = UINT8_MAX;
	int32_t x434 = -1;
	static volatile uint16_t x435 = 3234U;
	volatile int16_t x436 = INT16_MIN;
	int32_t t108 = -1;

    t108 = (x433==(x434&(x435<=x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = 5029591811LLU;
	uint32_t x439 = 32673U;
	volatile int64_t x440 = -1LL;
	int32_t t109 = -1283;

    t109 = (x437==(x438&(x439<=x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x441 = INT32_MIN;
	int16_t x442 = -1;
	volatile int32_t x443 = INT32_MIN;
	uint64_t x444 = 443603428LLU;

    t110 = (x441==(x442&(x443<=x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x445 = -1;
	static int8_t x446 = -6;
	uint8_t x447 = 24U;
	static int64_t x448 = INT64_MIN;
	static volatile int32_t t111 = -2;

    t111 = (x445==(x446&(x447<=x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x451 = INT16_MIN;
	int8_t x452 = 1;

    t112 = (x449==(x450&(x451<=x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x453 = 30U;
	uint64_t x454 = 12LLU;
	volatile int8_t x455 = 0;
	int64_t x456 = INT64_MAX;
	int32_t t113 = 1;

    t113 = (x453==(x454&(x455<=x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x457 = 126U;
	volatile int32_t x458 = -2981;
	int64_t x459 = INT64_MIN;
	static int16_t x460 = INT16_MIN;
	static volatile int32_t t114 = -3951;

    t114 = (x457==(x458&(x459<=x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = 132U;
	uint16_t x462 = 1109U;
	int16_t x463 = INT16_MAX;
	volatile int32_t t115 = 2;

    t115 = (x461==(x462&(x463<=x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = 0;
	int64_t x466 = INT64_MIN;
	int64_t x468 = INT64_MIN;
	static int32_t t116 = -513173;

    t116 = (x465==(x466&(x467<=x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x469 = INT8_MAX;
	int32_t x470 = -1;
	int8_t x472 = INT8_MAX;
	int32_t t117 = -10044462;

    t117 = (x469==(x470&(x471<=x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = -1;
	int32_t x475 = INT32_MIN;
	uint8_t x476 = UINT8_MAX;
	int32_t t118 = 328770849;

    t118 = (x473==(x474&(x475<=x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x478 = INT8_MIN;
	volatile int64_t x479 = -1LL;
	int64_t x480 = INT64_MIN;
	int32_t t119 = 2459040;

    t119 = (x477==(x478&(x479<=x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x482 = UINT16_MAX;
	int16_t x483 = -1842;
	volatile int32_t t120 = 2292;

    t120 = (x481==(x482&(x483<=x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MAX;
	volatile int32_t x486 = -1;
	uint64_t x487 = UINT64_MAX;
	int32_t x488 = -36;
	static volatile int32_t t121 = 442548;

    t121 = (x485==(x486&(x487<=x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x490 = UINT32_MAX;
	static int64_t x491 = -1LL;
	volatile int16_t x492 = INT16_MAX;
	volatile int32_t t122 = -11860;

    t122 = (x489==(x490&(x491<=x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	static volatile int16_t x494 = 0;
	int64_t x496 = INT64_MIN;
	volatile int32_t t123 = 1754;

    t123 = (x493==(x494&(x495<=x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = -1;
	int16_t x498 = -1;
	int64_t x499 = INT64_MIN;
	static int16_t x500 = -1;
	volatile int32_t t124 = -775;

    t124 = (x497==(x498&(x499<=x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x502 = INT16_MIN;
	int8_t x503 = -43;
	volatile uint32_t x504 = UINT32_MAX;
	static volatile int32_t t125 = 475616652;

    t125 = (x501==(x502&(x503<=x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x506 = UINT64_MAX;
	static int32_t x507 = -1;
	static int8_t x508 = INT8_MIN;
	static volatile int32_t t126 = 43113444;

    t126 = (x505==(x506&(x507<=x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -1;
	uint64_t x510 = UINT64_MAX;
	static int64_t x511 = 98447LL;
	int16_t x512 = -1;
	volatile int32_t t127 = 270836619;

    t127 = (x509==(x510&(x511<=x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = 0U;
	int32_t x514 = -1;
	int64_t x515 = 53559533286056LL;
	int16_t x516 = -9;
	volatile int32_t t128 = 10;

    t128 = (x513==(x514&(x515<=x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = 3080LLU;
	int32_t x518 = INT32_MIN;
	int64_t x519 = -1LL;
	int64_t x520 = -1LL;
	int32_t t129 = 11035832;

    t129 = (x517==(x518&(x519<=x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x521 = 84U;
	static uint32_t x522 = UINT32_MAX;
	int32_t x523 = -1;
	uint32_t x524 = 90U;
	int32_t t130 = 398;

    t130 = (x521==(x522&(x523<=x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x526 = 0LL;
	int16_t x528 = -1;
	volatile int32_t t131 = 14;

    t131 = (x525==(x526&(x527<=x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MIN;
	int16_t x530 = 17;
	static int64_t x531 = -138995LL;
	volatile int32_t t132 = -236;

    t132 = (x529==(x530&(x531<=x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MIN;
	static int64_t x534 = INT64_MIN;
	volatile int16_t x535 = INT16_MIN;
	uint32_t x536 = 869943942U;
	volatile int32_t t133 = 1984733;

    t133 = (x533==(x534&(x535<=x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = -1;
	int32_t x538 = -18;
	int64_t x539 = INT64_MIN;
	int32_t t134 = 290;

    t134 = (x537==(x538&(x539<=x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x541 = INT64_MIN;
	int32_t x542 = INT32_MIN;
	static int32_t x543 = INT32_MAX;
	static volatile uint16_t x544 = 1256U;
	int32_t t135 = -3;

    t135 = (x541==(x542&(x543<=x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x545 = -1;
	int64_t x546 = INT64_MIN;
	int32_t x547 = 1406744;

    t136 = (x545==(x546&(x547<=x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x550 = 30U;
	int64_t x551 = INT64_MIN;
	uint16_t x552 = 28762U;
	volatile int32_t t137 = -1;

    t137 = (x549==(x550&(x551<=x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 931LLU;
	static int8_t x554 = 1;
	int32_t x555 = INT32_MAX;
	int8_t x556 = -7;
	int32_t t138 = 0;

    t138 = (x553==(x554&(x555<=x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 153723492974717LLU;
	int64_t x558 = INT64_MIN;
	static uint32_t x559 = 1385792U;
	volatile uint8_t x560 = UINT8_MAX;
	static volatile int32_t t139 = -1;

    t139 = (x557==(x558&(x559<=x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = -1;
	int64_t x562 = INT64_MIN;
	static int64_t x563 = 993550200LL;
	int16_t x564 = INT16_MIN;

    t140 = (x561==(x562&(x563<=x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x565 = INT16_MIN;
	uint64_t x566 = 1516534752389277LLU;
	volatile int64_t x568 = -1LL;
	int32_t t141 = -238330;

    t141 = (x565==(x566&(x567<=x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x569 = -1LL;
	int16_t x570 = -1;
	uint8_t x572 = 45U;
	volatile int32_t t142 = -40040636;

    t142 = (x569==(x570&(x571<=x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x574 = INT64_MIN;
	int8_t x575 = 22;
	static int32_t t143 = 51;

    t143 = (x573==(x574&(x575<=x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x578 = INT8_MIN;
	volatile int32_t x579 = -1;
	uint16_t x580 = 4821U;
	static int32_t t144 = 173476;

    t144 = (x577==(x578&(x579<=x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x581 = -1;
	int32_t x582 = -1689;
	int16_t x584 = INT16_MIN;
	volatile int32_t t145 = -1961;

    t145 = (x581==(x582&(x583<=x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = 339893454U;
	int16_t x586 = INT16_MIN;
	int16_t x587 = INT16_MIN;
	volatile int32_t x588 = -15481444;
	volatile int32_t t146 = -1685;

    t146 = (x585==(x586&(x587<=x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x590 = INT16_MAX;
	int8_t x591 = INT8_MIN;
	int8_t x592 = 38;
	int32_t t147 = -502849330;

    t147 = (x589==(x590&(x591<=x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x593 = -1;
	int16_t x596 = -1;
	volatile int32_t t148 = 2;

    t148 = (x593==(x594&(x595<=x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x598 = INT32_MIN;
	int64_t x599 = INT64_MIN;
	uint64_t x600 = UINT64_MAX;

    t149 = (x597==(x598&(x599<=x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x601 = INT64_MIN;
	static volatile int16_t x603 = -1;
	int32_t t150 = -5;

    t150 = (x601==(x602&(x603<=x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	int32_t x607 = -1832;
	int16_t x608 = INT16_MIN;
	static volatile int32_t t151 = -2810354;

    t151 = (x605==(x606&(x607<=x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MIN;
	int64_t x610 = -40354222095796459LL;
	uint32_t x611 = 2U;
	static volatile int32_t x612 = -1;
	static volatile int32_t t152 = -36832235;

    t152 = (x609==(x610&(x611<=x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = 4U;
	int64_t x615 = -678540562563599438LL;
	int8_t x616 = -1;
	int32_t t153 = 5770;

    t153 = (x613==(x614&(x615<=x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MIN;
	uint16_t x619 = 1U;
	volatile int32_t t154 = 57547285;

    t154 = (x617==(x618&(x619<=x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MIN;
	static volatile int32_t x622 = INT32_MAX;
	static int8_t x623 = INT8_MAX;
	static int32_t t155 = -701308;

    t155 = (x621==(x622&(x623<=x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MIN;
	volatile int64_t x626 = -193294409596426428LL;
	static int8_t x627 = -1;
	int32_t x628 = -1;
	int32_t t156 = 14171;

    t156 = (x625==(x626&(x627<=x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = INT8_MIN;
	static volatile uint64_t x630 = UINT64_MAX;
	volatile int32_t x632 = INT32_MAX;
	int32_t t157 = -527839;

    t157 = (x629==(x630&(x631<=x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = 21216;
	uint8_t x634 = 16U;
	static volatile int32_t x635 = INT32_MIN;
	uint32_t x636 = UINT32_MAX;
	volatile int32_t t158 = -801737402;

    t158 = (x633==(x634&(x635<=x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = 321710284LLU;
	int16_t x639 = INT16_MAX;
	int8_t x640 = 2;
	volatile int32_t t159 = -335314;

    t159 = (x637==(x638&(x639<=x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x641 = INT8_MIN;
	static uint64_t x642 = UINT64_MAX;
	uint8_t x643 = UINT8_MAX;
	volatile int32_t t160 = -54878;

    t160 = (x641==(x642&(x643<=x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x646 = -1;
	volatile int32_t x647 = -2614860;
	int32_t t161 = 52287;

    t161 = (x645==(x646&(x647<=x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x650 = 3705248143LLU;
	volatile int8_t x652 = INT8_MAX;
	int32_t t162 = 13374559;

    t162 = (x649==(x650&(x651<=x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x654 = UINT32_MAX;
	uint16_t x655 = 2244U;

    t163 = (x653==(x654&(x655<=x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = 917;
	int8_t x660 = 4;

    t164 = (x657==(x658&(x659<=x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = 13U;
	volatile int8_t x662 = -1;
	int64_t x663 = 12729282331346LL;
	int8_t x664 = -1;
	volatile int32_t t165 = 153;

    t165 = (x661==(x662&(x663<=x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x665 = INT16_MAX;
	int8_t x666 = INT8_MIN;
	int8_t x667 = -1;
	uint16_t x668 = 13665U;
	int32_t t166 = 3088619;

    t166 = (x665==(x666&(x667<=x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x669 = INT32_MAX;
	uint16_t x672 = 14U;
	volatile int32_t t167 = -52;

    t167 = (x669==(x670&(x671<=x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	int8_t x674 = INT8_MIN;
	volatile int64_t x676 = -1443000506450454LL;
	int32_t t168 = 109;

    t168 = (x673==(x674&(x675<=x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x678 = -1LL;
	static uint8_t x679 = UINT8_MAX;
	int32_t t169 = -724;

    t169 = (x677==(x678&(x679<=x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x681 = 3U;
	uint8_t x682 = UINT8_MAX;
	uint64_t x683 = 6LLU;
	static int64_t x684 = INT64_MIN;
	volatile int32_t t170 = 26255850;

    t170 = (x681==(x682&(x683<=x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = UINT8_MAX;
	int64_t x687 = INT64_MAX;
	uint16_t x688 = 9618U;

    t171 = (x685==(x686&(x687<=x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = -3;
	uint32_t x690 = UINT32_MAX;
	uint8_t x691 = 46U;
	uint64_t x692 = 189775LLU;
	volatile int32_t t172 = -1383379;

    t172 = (x689==(x690&(x691<=x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = -1;
	static uint8_t x694 = 44U;
	int32_t x695 = INT32_MIN;
	int8_t x696 = INT8_MIN;

    t173 = (x693==(x694&(x695<=x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MIN;
	volatile int16_t x698 = INT16_MAX;
	uint32_t x699 = 1U;
	volatile int64_t x700 = INT64_MIN;
	volatile int32_t t174 = 60141997;

    t174 = (x697==(x698&(x699<=x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x701 = INT64_MAX;
	int8_t x702 = -1;
	static volatile int8_t x703 = -4;
	int8_t x704 = INT8_MAX;

    t175 = (x701==(x702&(x703<=x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x706 = INT8_MIN;
	static int32_t x707 = 4;
	volatile int64_t x708 = INT64_MAX;
	volatile int32_t t176 = -2;

    t176 = (x705==(x706&(x707<=x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x711 = 4;
	int16_t x712 = -1;
	volatile int32_t t177 = -129;

    t177 = (x709==(x710&(x711<=x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = 48034U;
	volatile uint64_t x714 = 65251LLU;
	static int32_t x715 = INT32_MIN;
	volatile int32_t t178 = -42;

    t178 = (x713==(x714&(x715<=x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x717 = UINT16_MAX;
	int8_t x719 = INT8_MIN;
	int32_t x720 = INT32_MIN;
	volatile int32_t t179 = -2;

    t179 = (x717==(x718&(x719<=x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x721 = INT8_MIN;
	uint64_t x722 = 295405583278369125LLU;
	int16_t x723 = -17;
	int8_t x724 = INT8_MIN;
	static int32_t t180 = -462317734;

    t180 = (x721==(x722&(x723<=x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x725 = -833LL;
	uint16_t x726 = UINT16_MAX;
	int64_t x727 = -1LL;
	static int32_t t181 = -61248;

    t181 = (x725==(x726&(x727<=x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x730 = -3;
	volatile int64_t x732 = -3804928LL;
	volatile int32_t t182 = 913340698;

    t182 = (x729==(x730&(x731<=x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x733 = 1LLU;
	int64_t x734 = INT64_MIN;
	volatile int32_t x735 = 29160;
	volatile int32_t t183 = -13460;

    t183 = (x733==(x734&(x735<=x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x737 = -1LL;
	int8_t x738 = 44;
	int64_t x739 = INT64_MAX;
	int16_t x740 = INT16_MIN;

    t184 = (x737==(x738&(x739<=x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x743 = -1LL;
	volatile uint8_t x744 = 1U;

    t185 = (x741==(x742&(x743<=x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = INT16_MAX;
	int32_t x747 = -23;
	int16_t x748 = 120;
	volatile int32_t t186 = 517813;

    t186 = (x745==(x746&(x747<=x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	int8_t x750 = -2;
	int32_t x751 = INT32_MIN;
	uint8_t x752 = UINT8_MAX;
	int32_t t187 = -675503;

    t187 = (x749==(x750&(x751<=x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = INT16_MIN;
	int64_t x754 = INT64_MIN;
	uint32_t x755 = 117735U;
	int32_t t188 = -259;

    t188 = (x753==(x754&(x755<=x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	int32_t x759 = -4098;
	int16_t x760 = INT16_MIN;
	int32_t t189 = 7;

    t189 = (x757==(x758&(x759<=x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MIN;
	static int32_t x762 = -7651;
	int8_t x763 = INT8_MIN;
	int8_t x764 = 1;

    t190 = (x761==(x762&(x763<=x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x765 = -3387;
	uint8_t x767 = UINT8_MAX;
	volatile int32_t t191 = 2179;

    t191 = (x765==(x766&(x767<=x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MIN;
	int32_t x770 = 750;
	volatile int32_t x771 = -6;
	static volatile uint64_t x772 = 1815269211LLU;
	int32_t t192 = -179;

    t192 = (x769==(x770&(x771<=x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = -1;
	volatile uint16_t x774 = 26579U;
	int64_t x775 = 1LL;
	int32_t t193 = 50698;

    t193 = (x773==(x774&(x775<=x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 295U;
	static volatile uint16_t x779 = UINT16_MAX;
	static volatile uint8_t x780 = 2U;

    t194 = (x777==(x778&(x779<=x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	int64_t x782 = 32001LL;
	static uint64_t x783 = UINT64_MAX;
	int8_t x784 = -1;
	volatile int32_t t195 = 28939194;

    t195 = (x781==(x782&(x783<=x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -1LL;
	uint64_t x786 = 1861237964921432915LLU;
	volatile int8_t x787 = -30;
	int32_t x788 = -351;
	int32_t t196 = -85292700;

    t196 = (x785==(x786&(x787<=x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x789 = 1U;
	int16_t x791 = -575;
	int16_t x792 = -1;

    t197 = (x789==(x790&(x791<=x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x794 = 0;
	int8_t x796 = INT8_MAX;
	int32_t t198 = -593911;

    t198 = (x793==(x794&(x795<=x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MAX;
	static int64_t x798 = 418654070651538LL;
	static uint64_t x799 = UINT64_MAX;
	volatile int8_t x800 = -1;
	static volatile int32_t t199 = -2;

    t199 = (x797==(x798&(x799<=x800)));

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

