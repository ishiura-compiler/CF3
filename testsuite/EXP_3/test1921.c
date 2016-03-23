
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

static int32_t x3 = -7837518;
static volatile uint16_t x7 = 3U;
int64_t t1 = -16005543LL;
static uint32_t x12 = 912671840U;
static int32_t x13 = -496132641;
static int16_t x15 = -7324;
int32_t x25 = -199209;
static volatile int64_t x26 = -1LL;
int8_t x34 = INT8_MIN;
static int16_t x35 = -5894;
uint16_t x38 = 3U;
static int32_t x51 = 7097002;
volatile int64_t x53 = -1LL;
volatile int64_t t13 = -13480485LL;
static int8_t x60 = INT8_MIN;
int16_t x64 = INT16_MAX;
int64_t x69 = -31112590377556189LL;
static int16_t x73 = INT16_MIN;
static volatile int64_t t19 = 2960319693986556497LL;
int64_t x85 = INT64_MAX;
volatile int64_t t21 = 0LL;
volatile int32_t t22 = INT32_MIN;
static int64_t x94 = -53345704751LL;
uint8_t x97 = 0U;
uint64_t x100 = UINT64_MAX;
volatile int32_t t25 = 112772;
static int64_t x108 = INT64_MIN;
uint16_t x109 = UINT16_MAX;
static int32_t x114 = -1;
uint64_t x118 = UINT64_MAX;
volatile int64_t x121 = 27869LL;
int16_t x122 = -1;
uint32_t x128 = 82492U;
int8_t x129 = -1;
static volatile int64_t x133 = -1LL;
int32_t x136 = -664;
volatile uint64_t t33 = 246600333128887639LLU;
static int64_t x140 = -98LL;
int64_t x143 = INT64_MIN;
volatile int32_t t41 = 9;
static volatile int8_t x186 = INT8_MIN;
int32_t x189 = -1;
int32_t x195 = INT32_MAX;
int64_t x212 = INT64_MAX;
volatile int32_t t52 = 0;
int8_t x219 = 0;
volatile int32_t x224 = INT32_MIN;
int32_t t55 = -852379868;
int16_t x229 = -1;
int8_t x233 = INT8_MIN;
int16_t x234 = 9216;
static int64_t x238 = 0LL;
uint32_t x241 = 13380U;
int8_t x247 = INT8_MIN;
static int32_t t64 = -8853;
static volatile int32_t t65 = 54;
int32_t t66 = 114853;
volatile int8_t x270 = 1;
static int16_t x272 = INT16_MAX;
int8_t x274 = -6;
int64_t x295 = -193558694LL;
int64_t x299 = -92LL;
int64_t x304 = INT64_MIN;
int16_t x305 = INT16_MAX;
int64_t x308 = 948085455074040LL;
int8_t x314 = 8;
volatile int64_t x315 = INT64_MAX;
uint64_t x316 = 69LLU;
static int32_t t78 = -90;
static uint32_t x320 = 783457U;
volatile int32_t x321 = INT32_MIN;
int32_t x333 = INT32_MAX;
uint8_t x340 = 43U;
volatile int32_t t84 = 95;
uint64_t x343 = 52541932405LLU;
int32_t x345 = INT32_MIN;
int64_t x348 = -1LL;
int32_t x349 = 120;
uint8_t x351 = UINT8_MAX;
static volatile int8_t x355 = INT8_MIN;
volatile int16_t x359 = INT16_MAX;
static int8_t x362 = -3;
volatile int32_t t93 = -6;
int64_t x381 = -1LL;
int64_t t95 = 0LL;
int16_t x385 = INT16_MIN;
volatile int64_t x394 = -68LL;
volatile int32_t x395 = -1;
static volatile int16_t x397 = INT16_MIN;
uint8_t x400 = 55U;
uint64_t x401 = 25037LLU;
static int8_t x402 = 1;
int64_t x410 = INT64_MAX;
volatile uint64_t x413 = UINT64_MAX;
volatile int8_t x414 = INT8_MAX;
int16_t x416 = 875;
int16_t x420 = -1;
volatile uint64_t t105 = UINT64_MAX;
static volatile int64_t t106 = 22796314251LL;
int32_t x432 = INT32_MIN;
volatile uint32_t t107 = 1U;
uint64_t x433 = 34303389635LLU;
int64_t x443 = 883809125LL;
uint8_t x450 = 101U;
int64_t x460 = INT64_MAX;
volatile int64_t x461 = 2919983LL;
volatile int64_t t115 = 78887424LL;
uint16_t x467 = UINT16_MAX;
int64_t x472 = -702616223LL;
int16_t x475 = INT16_MIN;
volatile int32_t t119 = -240882;
uint8_t x481 = UINT8_MAX;
int8_t x484 = 1;
static volatile uint8_t x486 = UINT8_MAX;
int32_t x491 = -1;
uint64_t x492 = 2599331308850LLU;
int32_t x494 = 106291;
int64_t x499 = INT64_MIN;
static int32_t t125 = -25291103;
static volatile int8_t x506 = 7;
static int32_t x509 = INT32_MAX;
static int64_t x513 = INT64_MIN;
int16_t x521 = INT16_MIN;
volatile uint16_t x523 = UINT16_MAX;
static volatile int8_t x529 = INT8_MAX;
int8_t x531 = -23;
volatile int32_t x533 = -943188;
static volatile int32_t x536 = INT32_MIN;
uint32_t x542 = 957891280U;
uint32_t t135 = 31189U;
int16_t x550 = -31;
static uint64_t x556 = 1481209LLU;
static volatile int32_t x565 = INT32_MIN;
uint64_t t142 = 3891193LLU;
volatile int64_t x576 = INT64_MAX;
int32_t x577 = -1;
static int8_t x579 = -1;
static int32_t x584 = -1;
uint32_t x585 = UINT32_MAX;
uint64_t x595 = 2LLU;
uint16_t x599 = 211U;
volatile uint16_t x603 = 31U;
uint32_t t150 = 361474U;
uint64_t x607 = 12LLU;
uint64_t x615 = UINT64_MAX;
static int16_t x616 = -1;
int64_t x618 = -1LL;
static uint64_t x621 = UINT64_MAX;
uint8_t x624 = UINT8_MAX;
int8_t x629 = -3;
static volatile uint64_t x630 = 4111465LLU;
int16_t x633 = -1;
int8_t x637 = INT8_MIN;
int16_t x647 = INT16_MIN;
static uint32_t x652 = 2832U;
int32_t t163 = -811219689;
int16_t x661 = INT16_MAX;
static int32_t x662 = -1;
int32_t t165 = -404564;
static uint16_t x668 = UINT16_MAX;
int32_t t166 = -109818599;
int64_t x673 = INT64_MIN;
uint32_t x679 = 433946981U;
int8_t x684 = -1;
volatile int16_t x687 = -1;
int64_t x689 = INT64_MIN;
uint64_t x692 = 3817199LLU;
uint64_t x698 = 6526004541059233LLU;
uint64_t x700 = UINT64_MAX;
int32_t x701 = INT32_MIN;
int16_t x704 = 1;
int16_t x705 = INT16_MIN;
uint16_t x707 = 6906U;
int32_t t176 = -1;
uint64_t x709 = UINT64_MAX;
static volatile int16_t x711 = 5434;
uint8_t x713 = 2U;
uint64_t x714 = 8187694602356667LLU;
int32_t x715 = -1;
static int32_t x729 = INT32_MIN;
static int16_t x738 = -122;
int64_t x741 = INT64_MAX;
int16_t x746 = INT16_MIN;
uint64_t t186 = 79436188703LLU;
uint32_t x749 = 5930491U;
static int64_t x754 = -739540368508943LL;
uint32_t x763 = 5U;
static volatile int32_t t193 = INT32_MIN;
int16_t x777 = -70;
volatile int64_t x780 = INT64_MIN;
int64_t x787 = INT64_MIN;
int16_t x795 = -1;
volatile int64_t t198 = 15010LL;
volatile int8_t x797 = INT8_MIN;
volatile int32_t x800 = INT32_MIN;
static int64_t t199 = -177LL;


void f0(void) {
    	int64_t x1 = -122244449LL;
	int8_t x2 = -44;
	volatile int8_t x4 = INT8_MIN;
	static int64_t t0 = -47700080181LL;

    t0 = ((x1&x2)*(x3<=x4));

    if (t0 != -122244460LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = -2;
	static int64_t x6 = -930290LL;
	int16_t x8 = 353;

    t1 = ((x5&x6)*(x7<=x8));

    if (t1 != -930290LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 15322372071888LL;
	int16_t x10 = INT16_MIN;
	int32_t x11 = INT32_MAX;
	int64_t t2 = 0LL;

    t2 = ((x9&x10)*(x11<=x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int32_t x14 = -3114;
	uint8_t x16 = 1U;
	volatile int32_t t3 = 46998404;

    t3 = ((x13&x14)*(x15<=x16));

    if (t3 != -496135722) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	static volatile int32_t x18 = -992635;
	uint16_t x19 = UINT16_MAX;
	volatile int8_t x20 = -3;
	static volatile int64_t t4 = 1LL;

    t4 = ((x17&x18)*(x19<=x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	uint32_t x22 = UINT32_MAX;
	volatile int16_t x23 = INT16_MIN;
	volatile uint8_t x24 = UINT8_MAX;
	uint32_t t5 = 884528U;

    t5 = ((x21&x22)*(x23<=x24));

    if (t5 != 2147483648U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x27 = 886U;
	int16_t x28 = INT16_MIN;
	int64_t t6 = 134894308800LL;

    t6 = ((x25&x26)*(x27<=x28));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	int16_t x30 = -1;
	int8_t x31 = INT8_MIN;
	volatile int32_t x32 = INT32_MIN;
	volatile int32_t t7 = -57;

    t7 = ((x29&x30)*(x31<=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MIN;
	static int16_t x36 = INT16_MIN;
	static volatile int32_t t8 = 222799740;

    t8 = ((x33&x34)*(x35<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = INT16_MIN;
	int8_t x39 = INT8_MIN;
	static int16_t x40 = 1;
	int32_t t9 = -537632869;

    t9 = ((x37&x38)*(x39<=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 0;
	int16_t x42 = -1;
	int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = 24;

    t10 = ((x41&x42)*(x43<=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x45 = 1U;
	uint16_t x46 = 1819U;
	volatile int8_t x47 = INT8_MIN;
	uint16_t x48 = UINT16_MAX;
	int32_t t11 = 133671225;

    t11 = ((x45&x46)*(x47<=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = INT32_MIN;
	int32_t x50 = -1;
	int64_t x52 = INT64_MAX;
	static int32_t t12 = INT32_MIN;

    t12 = ((x49&x50)*(x51<=x52));

    if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x54 = -1LL;
	int64_t x55 = INT64_MAX;
	uint32_t x56 = 8592U;

    t13 = ((x53&x54)*(x55<=x56));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x57 = 1096104;
	int32_t x58 = INT32_MIN;
	uint64_t x59 = 1161042650401LLU;
	int32_t t14 = -7;

    t14 = ((x57&x58)*(x59<=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 111498120U;
	static int16_t x62 = 0;
	int8_t x63 = INT8_MIN;
	volatile uint32_t t15 = 2509U;

    t15 = ((x61&x62)*(x63<=x64));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x65 = 30U;
	int16_t x66 = INT16_MIN;
	uint8_t x67 = 5U;
	static int8_t x68 = INT8_MIN;
	volatile int32_t t16 = 26;

    t16 = ((x65&x66)*(x67<=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x70 = -3021;
	int16_t x71 = INT16_MAX;
	static volatile int16_t x72 = INT16_MIN;
	int64_t t17 = 2753434LL;

    t17 = ((x69&x70)*(x71<=x72));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = 1530;
	uint32_t x75 = 9206550U;
	int16_t x76 = -470;
	static int32_t t18 = -8093901;

    t18 = ((x73&x74)*(x75<=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = 33609;
	static volatile int64_t x78 = -1LL;
	volatile int64_t x79 = 81041751249450296LL;
	uint32_t x80 = UINT32_MAX;

    t19 = ((x77&x78)*(x79<=x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MAX;
	volatile uint16_t x82 = 466U;
	int32_t x83 = -13764;
	uint16_t x84 = 4U;
	int32_t t20 = -346;

    t20 = ((x81&x82)*(x83<=x84));

    if (t20 != 466) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x86 = 104U;
	uint16_t x87 = UINT16_MAX;
	uint64_t x88 = 1889LLU;

    t21 = ((x85&x86)*(x87<=x88));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MIN;
	int16_t x90 = INT16_MIN;
	static int64_t x91 = INT64_MIN;
	uint32_t x92 = UINT32_MAX;

    t22 = ((x89&x90)*(x91<=x92));

    if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = -1;
	volatile int8_t x95 = INT8_MAX;
	static int8_t x96 = 26;
	int64_t t23 = -206LL;

    t23 = ((x93&x94)*(x95<=x96));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint32_t x98 = UINT32_MAX;
	int32_t x99 = 178;
	volatile uint32_t t24 = 0U;

    t24 = ((x97&x98)*(x99<=x100));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MAX;
	uint16_t x102 = 1U;
	uint32_t x103 = 653521U;
	uint32_t x104 = 7438899U;

    t25 = ((x101&x102)*(x103<=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = INT16_MAX;
	static uint64_t x106 = 10403LLU;
	volatile int64_t x107 = -1LL;
	uint64_t t26 = 3793LLU;

    t26 = ((x105&x106)*(x107<=x108));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x110 = 3U;
	int64_t x111 = -1LL;
	uint16_t x112 = 7605U;
	volatile int32_t t27 = -2;

    t27 = ((x109&x110)*(x111<=x112));

    if (t27 != 3) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x113 = 2602803813LL;
	int32_t x115 = 27816;
	int64_t x116 = -17956080295457168LL;
	int64_t t28 = -90171928129LL;

    t28 = ((x113&x114)*(x115<=x116));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x117 = -1;
	volatile uint8_t x119 = UINT8_MAX;
	volatile int8_t x120 = INT8_MIN;
	uint64_t t29 = 6827547219533738LLU;

    t29 = ((x117&x118)*(x119<=x120));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x123 = 1317487682017065LL;
	int32_t x124 = INT32_MIN;
	volatile int64_t t30 = -951LL;

    t30 = ((x121&x122)*(x123<=x124));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MIN;
	static uint16_t x126 = 1855U;
	int8_t x127 = -1;
	static int32_t t31 = 4844097;

    t31 = ((x125&x126)*(x127<=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x130 = UINT16_MAX;
	static int8_t x131 = INT8_MIN;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t32 = -16;

    t32 = ((x129&x130)*(x131<=x132));

    if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x134 = UINT64_MAX;
	int8_t x135 = 1;

    t33 = ((x133&x134)*(x135<=x136));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x137 = 2U;
	uint8_t x138 = 6U;
	int64_t x139 = -1LL;
	int32_t t34 = -5627844;

    t34 = ((x137&x138)*(x139<=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = INT64_MAX;
	int16_t x142 = -1;
	uint8_t x144 = 6U;
	int64_t t35 = INT64_MAX;

    t35 = ((x141&x142)*(x143<=x144));

    if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = -1;
	int32_t x146 = INT32_MAX;
	static uint32_t x147 = UINT32_MAX;
	uint32_t x148 = 259U;
	volatile int32_t t36 = 0;

    t36 = ((x145&x146)*(x147<=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x149 = INT64_MAX;
	int32_t x150 = 476089;
	static int16_t x151 = INT16_MIN;
	static uint32_t x152 = 61U;
	volatile int64_t t37 = 6497362895LL;

    t37 = ((x149&x150)*(x151<=x152));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = INT64_MIN;
	volatile int32_t x154 = -1;
	int8_t x155 = 28;
	int8_t x156 = -1;
	int64_t t38 = -1LL;

    t38 = ((x153&x154)*(x155<=x156));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	uint16_t x158 = 5U;
	int8_t x159 = INT8_MIN;
	int32_t x160 = 21923;
	volatile int32_t t39 = 6711;

    t39 = ((x157&x158)*(x159<=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x161 = INT16_MIN;
	uint32_t x162 = UINT32_MAX;
	int32_t x163 = -672607145;
	static int16_t x164 = INT16_MAX;
	static uint32_t t40 = 24133U;

    t40 = ((x161&x162)*(x163<=x164));

    if (t40 != 4294934528U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 91U;
	uint8_t x166 = 2U;
	static int16_t x167 = INT16_MIN;
	volatile uint64_t x168 = 650983206LLU;

    t41 = ((x165&x166)*(x167<=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	uint64_t x170 = 4101022745057761166LLU;
	static int32_t x171 = 1495;
	int64_t x172 = -128766491290466LL;
	volatile uint64_t t42 = 516335276546LLU;

    t42 = ((x169&x170)*(x171<=x172));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 52LLU;
	static uint64_t x174 = 11764699147857308LLU;
	uint16_t x175 = 0U;
	volatile int16_t x176 = 1;
	uint64_t t43 = 127156339LLU;

    t43 = ((x173&x174)*(x175<=x176));

    if (t43 != 20LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x177 = INT64_MIN;
	static int64_t x178 = INT64_MIN;
	static int8_t x179 = -1;
	int8_t x180 = INT8_MAX;
	volatile int64_t t44 = INT64_MIN;

    t44 = ((x177&x178)*(x179<=x180));

    if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = 0;
	int64_t x182 = INT64_MIN;
	static uint16_t x183 = 9U;
	uint8_t x184 = UINT8_MAX;
	static int64_t t45 = -109258414812622441LL;

    t45 = ((x181&x182)*(x183<=x184));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 30U;
	uint64_t x187 = 353767304LLU;
	int64_t x188 = INT64_MIN;
	int32_t t46 = 332;

    t46 = ((x185&x186)*(x187<=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = 32;
	int32_t x191 = 0;
	uint8_t x192 = 8U;
	volatile int32_t t47 = 1;

    t47 = ((x189&x190)*(x191<=x192));

    if (t47 != 32) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 27637U;
	int32_t x194 = INT32_MAX;
	static volatile int16_t x196 = -230;
	volatile uint32_t t48 = 1334850495U;

    t48 = ((x193&x194)*(x195<=x196));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MAX;
	volatile uint32_t x198 = 144U;
	int8_t x199 = 0;
	uint8_t x200 = UINT8_MAX;
	int64_t t49 = -608LL;

    t49 = ((x197&x198)*(x199<=x200));

    if (t49 != 144LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x201 = -405934418873LL;
	volatile uint32_t x202 = 256U;
	static int16_t x203 = INT16_MIN;
	int64_t x204 = INT64_MIN;
	int64_t t50 = 57284241LL;

    t50 = ((x201&x202)*(x203<=x204));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MAX;
	static volatile uint8_t x206 = 24U;
	uint32_t x207 = UINT32_MAX;
	volatile int8_t x208 = INT8_MIN;
	int32_t t51 = -444;

    t51 = ((x205&x206)*(x207<=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = 3647;
	uint16_t x210 = 2U;
	static int32_t x211 = INT32_MIN;

    t52 = ((x209&x210)*(x211<=x212));

    if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = UINT64_MAX;
	volatile int16_t x214 = 8;
	int8_t x215 = INT8_MIN;
	volatile int16_t x216 = -1;
	volatile uint64_t t53 = 236LLU;

    t53 = ((x213&x214)*(x215<=x216));

    if (t53 != 8LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x217 = 2;
	int8_t x218 = INT8_MIN;
	static int32_t x220 = INT32_MAX;
	int32_t t54 = -1;

    t54 = ((x217&x218)*(x219<=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MAX;
	static int32_t x222 = INT32_MIN;
	int32_t x223 = -658547318;

    t55 = ((x221&x222)*(x223<=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = -1;
	uint8_t x226 = UINT8_MAX;
	int16_t x227 = 38;
	int64_t x228 = INT64_MIN;
	int32_t t56 = 9116;

    t56 = ((x225&x226)*(x227<=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x230 = 431U;
	volatile int32_t x231 = INT32_MIN;
	int16_t x232 = INT16_MIN;
	static volatile uint32_t t57 = 4069573U;

    t57 = ((x229&x230)*(x231<=x232));

    if (t57 != 431U) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x235 = INT8_MIN;
	volatile uint64_t x236 = 5211096589173LLU;
	volatile int32_t t58 = 1;

    t58 = ((x233&x234)*(x235<=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x237 = 2126652051913LLU;
	int8_t x239 = -1;
	int32_t x240 = INT32_MIN;
	static volatile uint64_t t59 = 1944LLU;

    t59 = ((x237&x238)*(x239<=x240));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x242 = UINT32_MAX;
	static volatile int64_t x243 = INT64_MIN;
	int32_t x244 = 25679159;
	uint32_t t60 = 14014916U;

    t60 = ((x241&x242)*(x243<=x244));

    if (t60 != 13380U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -1;
	volatile int32_t x246 = INT32_MIN;
	int64_t x248 = INT64_MIN;
	volatile int32_t t61 = 97356;

    t61 = ((x245&x246)*(x247<=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = 86U;
	uint64_t x250 = 67371872675061950LLU;
	int16_t x251 = INT16_MIN;
	volatile uint32_t x252 = 443U;
	static volatile uint64_t t62 = 1684249343LLU;

    t62 = ((x249&x250)*(x251<=x252));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x253 = 360U;
	int8_t x254 = 0;
	static volatile int16_t x255 = -1;
	int64_t x256 = -1LL;
	static volatile int32_t t63 = 1970306;

    t63 = ((x253&x254)*(x255<=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -4;
	int8_t x258 = -1;
	uint64_t x259 = 4LLU;
	static int64_t x260 = 28LL;

    t64 = ((x257&x258)*(x259<=x260));

    if (t64 != -4) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MAX;
	uint16_t x262 = UINT16_MAX;
	int64_t x263 = -53828771691LL;
	int64_t x264 = INT64_MAX;

    t65 = ((x261&x262)*(x263<=x264));

    if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	uint8_t x266 = UINT8_MAX;
	uint32_t x267 = 1009874U;
	int64_t x268 = 8323988LL;

    t66 = ((x265&x266)*(x267<=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = INT8_MIN;
	int16_t x271 = INT16_MAX;
	int32_t t67 = 10917329;

    t67 = ((x269&x270)*(x271<=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = UINT8_MAX;
	int32_t x275 = INT32_MIN;
	static uint8_t x276 = 7U;
	static volatile int32_t t68 = 1;

    t68 = ((x273&x274)*(x275<=x276));

    if (t68 != 250) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x277 = INT8_MIN;
	int64_t x278 = INT64_MIN;
	static int32_t x279 = INT32_MAX;
	int32_t x280 = INT32_MIN;
	int64_t t69 = 226LL;

    t69 = ((x277&x278)*(x279<=x280));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x281 = 0;
	uint16_t x282 = UINT16_MAX;
	volatile int16_t x283 = INT16_MIN;
	volatile int32_t x284 = INT32_MIN;
	volatile int32_t t70 = 957445532;

    t70 = ((x281&x282)*(x283<=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -88;
	int16_t x286 = -1;
	uint64_t x287 = 458683670757LLU;
	static volatile int8_t x288 = INT8_MIN;
	int32_t t71 = 3;

    t71 = ((x285&x286)*(x287<=x288));

    if (t71 != -88) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = -799;
	uint64_t x290 = UINT64_MAX;
	int8_t x291 = INT8_MIN;
	static int64_t x292 = INT64_MIN;
	uint64_t t72 = 128120759116539718LLU;

    t72 = ((x289&x290)*(x291<=x292));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x293 = 59U;
	uint64_t x294 = 268661849269953406LLU;
	int64_t x296 = INT64_MIN;
	static uint64_t t73 = 14479258964210LLU;

    t73 = ((x293&x294)*(x295<=x296));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MAX;
	static int16_t x298 = INT16_MIN;
	volatile uint8_t x300 = 37U;
	volatile int64_t t74 = 21654981883LL;

    t74 = ((x297&x298)*(x299<=x300));

    if (t74 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -1LL;
	int16_t x302 = 72;
	static volatile int8_t x303 = INT8_MAX;
	volatile int64_t t75 = -2932LL;

    t75 = ((x301&x302)*(x303<=x304));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x306 = INT32_MIN;
	static uint8_t x307 = 6U;
	static volatile int32_t t76 = -19;

    t76 = ((x305&x306)*(x307<=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = 12;
	int64_t x310 = -2831070166942LL;
	uint8_t x311 = 1U;
	static int16_t x312 = -1;
	static int64_t t77 = 2029006126LL;

    t77 = ((x309&x310)*(x311<=x312));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MAX;

    t78 = ((x313&x314)*(x315<=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x317 = 28050U;
	int16_t x318 = INT16_MIN;
	static volatile uint8_t x319 = 6U;
	uint32_t t79 = 28717U;

    t79 = ((x317&x318)*(x319<=x320));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x322 = INT64_MIN;
	volatile int8_t x323 = 54;
	int8_t x324 = -1;
	volatile int64_t t80 = -242938034711268984LL;

    t80 = ((x321&x322)*(x323<=x324));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -101045311951788046LL;
	volatile int32_t x326 = -1;
	volatile uint32_t x327 = 8099415U;
	volatile int16_t x328 = -1;
	volatile int64_t t81 = -11190446184LL;

    t81 = ((x325&x326)*(x327<=x328));

    if (t81 != -101045311951788046LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = -1;
	uint16_t x330 = 6325U;
	static volatile int16_t x331 = -1;
	int64_t x332 = INT64_MIN;
	volatile int32_t t82 = 222989;

    t82 = ((x329&x330)*(x331<=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x334 = -65;
	volatile uint16_t x335 = UINT16_MAX;
	uint32_t x336 = UINT32_MAX;
	volatile int32_t t83 = -586008;

    t83 = ((x333&x334)*(x335<=x336));

    if (t83 != 2147483583) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = -3348;
	int8_t x338 = INT8_MAX;
	uint64_t x339 = 131402139689438LLU;

    t84 = ((x337&x338)*(x339<=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x341 = UINT64_MAX;
	static int32_t x342 = INT32_MAX;
	int32_t x344 = INT32_MAX;
	uint64_t t85 = 179216LLU;

    t85 = ((x341&x342)*(x343<=x344));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x346 = -1LL;
	static uint16_t x347 = 78U;
	int64_t t86 = -306LL;

    t86 = ((x345&x346)*(x347<=x348));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x350 = INT32_MIN;
	static volatile uint32_t x352 = 15642795U;
	int32_t t87 = 304575;

    t87 = ((x349&x350)*(x351<=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x353 = INT64_MAX;
	int16_t x354 = 1004;
	int8_t x356 = -17;
	static volatile int64_t t88 = -1998591LL;

    t88 = ((x353&x354)*(x355<=x356));

    if (t88 != 1004LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	uint16_t x358 = 27668U;
	int16_t x360 = 0;
	volatile int32_t t89 = -3;

    t89 = ((x357&x358)*(x359<=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = -18;
	int16_t x363 = INT16_MAX;
	volatile int8_t x364 = INT8_MIN;
	static int32_t t90 = 70733;

    t90 = ((x361&x362)*(x363<=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = 65164795139098LL;
	static uint16_t x366 = 1U;
	volatile uint16_t x367 = 499U;
	uint16_t x368 = UINT16_MAX;
	volatile int64_t t91 = -154372136369659LL;

    t91 = ((x365&x366)*(x367<=x368));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x369 = INT32_MAX;
	uint32_t x370 = UINT32_MAX;
	int16_t x371 = -3;
	uint32_t x372 = UINT32_MAX;
	uint32_t t92 = 8U;

    t92 = ((x369&x370)*(x371<=x372));

    if (t92 != 2147483647U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x373 = 124U;
	int16_t x374 = 3;
	volatile int64_t x375 = 4173LL;
	int64_t x376 = INT64_MAX;

    t93 = ((x373&x374)*(x375<=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = 469297252;
	int16_t x378 = 7;
	uint32_t x379 = UINT32_MAX;
	int64_t x380 = INT64_MAX;
	int32_t t94 = -1363072;

    t94 = ((x377&x378)*(x379<=x380));

    if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x382 = INT16_MIN;
	int16_t x383 = -1;
	volatile int32_t x384 = -1;

    t95 = ((x381&x382)*(x383<=x384));

    if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x386 = 568U;
	static int64_t x387 = -106289325LL;
	static int16_t x388 = INT16_MIN;
	int32_t t96 = 0;

    t96 = ((x385&x386)*(x387<=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x389 = 57U;
	int8_t x390 = -1;
	int64_t x391 = INT64_MIN;
	uint32_t x392 = 1U;
	volatile int32_t t97 = 3;

    t97 = ((x389&x390)*(x391<=x392));

    if (t97 != 57) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	static int32_t x396 = INT32_MAX;
	int64_t t98 = 99455911LL;

    t98 = ((x393&x394)*(x395<=x396));

    if (t98 != -2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x398 = UINT8_MAX;
	int8_t x399 = 7;
	int32_t t99 = 6;

    t99 = ((x397&x398)*(x399<=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x403 = INT64_MIN;
	uint16_t x404 = UINT16_MAX;
	volatile uint64_t t100 = 3792839519976275657LLU;

    t100 = ((x401&x402)*(x403<=x404));

    if (t100 != 1LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x405 = 5U;
	int8_t x406 = -1;
	uint64_t x407 = 1LLU;
	uint32_t x408 = UINT32_MAX;
	static volatile int32_t t101 = 3645952;

    t101 = ((x405&x406)*(x407<=x408));

    if (t101 != 5) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = INT32_MAX;
	static uint8_t x411 = UINT8_MAX;
	static volatile int8_t x412 = -1;
	int64_t t102 = 1LL;

    t102 = ((x409&x410)*(x411<=x412));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x415 = INT16_MAX;
	uint64_t t103 = 6203281916858LLU;

    t103 = ((x413&x414)*(x415<=x416));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x417 = INT8_MIN;
	uint64_t x418 = 12385812LLU;
	volatile uint8_t x419 = UINT8_MAX;
	volatile uint64_t t104 = 63297912504939LLU;

    t104 = ((x417&x418)*(x419<=x420));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x421 = -1LL;
	uint64_t x422 = UINT64_MAX;
	int8_t x423 = -53;
	static int64_t x424 = INT64_MAX;

    t105 = ((x421&x422)*(x423<=x424));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = 14U;
	int64_t x426 = -5LL;
	uint64_t x427 = 98457491LLU;
	int32_t x428 = -1;

    t106 = ((x425&x426)*(x427<=x428));

    if (t106 != 10LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 16346U;
	volatile uint32_t x430 = 38372U;
	uint16_t x431 = 1094U;

    t107 = ((x429&x430)*(x431<=x432));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x434 = -1LL;
	int8_t x435 = -11;
	int32_t x436 = INT32_MAX;
	static uint64_t t108 = 489LLU;

    t108 = ((x433&x434)*(x435<=x436));

    if (t108 != 34303389635LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = 58331900567LLU;
	int32_t x438 = INT32_MIN;
	volatile int8_t x439 = INT8_MIN;
	static uint16_t x440 = UINT16_MAX;
	uint64_t t109 = 64558712LLU;

    t109 = ((x437&x438)*(x439<=x440));

    if (t109 != 57982058496LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = UINT64_MAX;
	int32_t x442 = INT32_MIN;
	int16_t x444 = INT16_MIN;
	uint64_t t110 = 1693006LLU;

    t110 = ((x441&x442)*(x443<=x444));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = UINT8_MAX;
	uint16_t x446 = UINT16_MAX;
	uint16_t x447 = UINT16_MAX;
	volatile int32_t x448 = INT32_MIN;
	static int32_t t111 = -218;

    t111 = ((x445&x446)*(x447<=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = 344U;
	static volatile int64_t x451 = -1964316LL;
	volatile int64_t x452 = -179950755179039366LL;
	volatile int32_t t112 = 1658;

    t112 = ((x449&x450)*(x451<=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	volatile int64_t x454 = -1LL;
	uint8_t x455 = 118U;
	int32_t x456 = -156;
	static volatile int64_t t113 = -5348222348014LL;

    t113 = ((x453&x454)*(x455<=x456));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MIN;
	volatile int8_t x458 = INT8_MAX;
	int8_t x459 = -1;
	int32_t t114 = -982;

    t114 = ((x457&x458)*(x459<=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x462 = -2961051;
	int64_t x463 = INT64_MAX;
	static int32_t x464 = 321784258;

    t115 = ((x461&x462)*(x463<=x464));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x465 = 461893U;
	uint32_t x466 = UINT32_MAX;
	static uint16_t x468 = 26U;
	volatile uint32_t t116 = 403640U;

    t116 = ((x465&x466)*(x467<=x468));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 211066463345326871LLU;
	static int32_t x470 = INT32_MIN;
	static int8_t x471 = INT8_MIN;
	uint64_t t117 = 16488323570LLU;

    t117 = ((x469&x470)*(x471<=x472));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 4952U;
	static int8_t x474 = INT8_MIN;
	int16_t x476 = INT16_MAX;
	uint32_t t118 = 2721U;

    t118 = ((x473&x474)*(x475<=x476));

    if (t118 != 4864U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x477 = -1;
	int8_t x478 = -1;
	volatile int16_t x479 = INT16_MIN;
	int8_t x480 = -1;

    t119 = ((x477&x478)*(x479<=x480));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x482 = -6;
	uint16_t x483 = UINT16_MAX;
	int32_t t120 = -1571;

    t120 = ((x481&x482)*(x483<=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = 655615253452151419LL;
	int32_t x487 = -1;
	int64_t x488 = -1LL;
	static volatile int64_t t121 = -6947642520998020LL;

    t121 = ((x485&x486)*(x487<=x488));

    if (t121 != 123LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = UINT8_MAX;
	int8_t x490 = 9;
	volatile int32_t t122 = -116879618;

    t122 = ((x489&x490)*(x491<=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -1LL;
	int16_t x495 = -1;
	int16_t x496 = INT16_MIN;
	volatile int64_t t123 = -2LL;

    t123 = ((x493&x494)*(x495<=x496));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x497 = 2U;
	uint64_t x498 = 29353781332541824LLU;
	static uint16_t x500 = 11519U;
	volatile uint64_t t124 = 66852168655LLU;

    t124 = ((x497&x498)*(x499<=x500));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x501 = 0;
	static uint16_t x502 = 1334U;
	int64_t x503 = INT64_MIN;
	int64_t x504 = 1951549LL;

    t125 = ((x501&x502)*(x503<=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x505 = 15156U;
	uint64_t x507 = 6543468567128219550LLU;
	int64_t x508 = -346152LL;
	static uint32_t t126 = 1021U;

    t126 = ((x505&x506)*(x507<=x508));

    if (t126 != 4U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x510 = INT8_MIN;
	volatile uint64_t x511 = UINT64_MAX;
	volatile int64_t x512 = 178690971326536LL;
	int32_t t127 = -5291249;

    t127 = ((x509&x510)*(x511<=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x514 = 5;
	static volatile int16_t x515 = -1;
	static uint16_t x516 = 34U;
	int64_t t128 = 13614LL;

    t128 = ((x513&x514)*(x515<=x516));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MIN;
	static int64_t x518 = INT64_MIN;
	static volatile int32_t x519 = INT32_MIN;
	int16_t x520 = INT16_MIN;
	int64_t t129 = INT64_MIN;

    t129 = ((x517&x518)*(x519<=x520));

    if (t129 != INT64_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = INT16_MIN;
	int64_t x524 = INT64_MAX;
	int32_t t130 = -334086874;

    t130 = ((x521&x522)*(x523<=x524));

    if (t130 != -32768) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = -13917;
	static int16_t x526 = INT16_MIN;
	int32_t x527 = 533362;
	static int8_t x528 = -1;
	static int32_t t131 = 0;

    t131 = ((x525&x526)*(x527<=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x530 = UINT32_MAX;
	volatile uint32_t x532 = UINT32_MAX;
	volatile uint32_t t132 = 125853U;

    t132 = ((x529&x530)*(x531<=x532));

    if (t132 != 127U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x534 = -1;
	static uint64_t x535 = UINT64_MAX;
	volatile int32_t t133 = -330906;

    t133 = ((x533&x534)*(x535<=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 2U;
	volatile int32_t x538 = -1;
	int32_t x539 = -1;
	uint32_t x540 = 394443461U;
	volatile int32_t t134 = 7;

    t134 = ((x537&x538)*(x539<=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x541 = 108U;
	uint32_t x543 = 532340U;
	uint64_t x544 = UINT64_MAX;

    t135 = ((x541&x542)*(x543<=x544));

    if (t135 != 64U) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x545 = -1;
	static int16_t x546 = INT16_MAX;
	static int8_t x547 = 12;
	int64_t x548 = INT64_MAX;
	int32_t t136 = 11;

    t136 = ((x545&x546)*(x547<=x548));

    if (t136 != 32767) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x549 = 1U;
	volatile uint8_t x551 = 16U;
	int32_t x552 = INT32_MAX;
	volatile int32_t t137 = 23836;

    t137 = ((x549&x550)*(x551<=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = 100U;
	int16_t x554 = -1;
	volatile int16_t x555 = INT16_MIN;
	volatile int32_t t138 = 0;

    t138 = ((x553&x554)*(x555<=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	int64_t x558 = -21980748154LL;
	uint32_t x559 = UINT32_MAX;
	int16_t x560 = -1;
	static volatile int64_t t139 = -2985LL;

    t139 = ((x557&x558)*(x559<=x560));

    if (t139 != -21980774400LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x561 = INT16_MAX;
	int16_t x562 = INT16_MIN;
	int16_t x563 = -6;
	int16_t x564 = -3994;
	volatile int32_t t140 = 1892;

    t140 = ((x561&x562)*(x563<=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x566 = 14644531480642977LL;
	static int32_t x567 = 0;
	int16_t x568 = 11;
	int64_t t141 = -2416LL;

    t141 = ((x565&x566)*(x567<=x568));

    if (t141 != 14644530661818368LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x569 = UINT64_MAX;
	static uint64_t x570 = 4854616243596485097LLU;
	int64_t x571 = 29691616325LL;
	uint64_t x572 = 6151803644867395650LLU;

    t142 = ((x569&x570)*(x571<=x572));

    if (t142 != 4854616243596485097LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = 0U;
	volatile int32_t x574 = INT32_MAX;
	volatile int32_t x575 = INT32_MIN;
	uint32_t t143 = 1970182021U;

    t143 = ((x573&x574)*(x575<=x576));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x578 = 349;
	int64_t x580 = -1LL;
	static volatile int32_t t144 = -15994;

    t144 = ((x577&x578)*(x579<=x580));

    if (t144 != 349) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	int64_t x582 = INT64_MIN;
	uint16_t x583 = 20U;
	int64_t t145 = 52601LL;

    t145 = ((x581&x582)*(x583<=x584));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x586 = 0;
	int64_t x587 = INT64_MIN;
	uint16_t x588 = 231U;
	static uint32_t t146 = 44U;

    t146 = ((x585&x586)*(x587<=x588));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MIN;
	volatile int16_t x590 = INT16_MIN;
	static int16_t x591 = INT16_MAX;
	volatile int32_t x592 = -1;
	int32_t t147 = 1427675;

    t147 = ((x589&x590)*(x591<=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x593 = INT64_MIN;
	volatile int16_t x594 = INT16_MIN;
	int8_t x596 = INT8_MAX;
	static int64_t t148 = INT64_MIN;

    t148 = ((x593&x594)*(x595<=x596));

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	uint64_t x598 = 23104766528734599LLU;
	int16_t x600 = INT16_MIN;
	uint64_t t149 = 2LLU;

    t149 = ((x597&x598)*(x599<=x600));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x601 = 244000U;
	int16_t x602 = -3342;
	int8_t x604 = INT8_MIN;

    t150 = ((x601&x602)*(x603<=x604));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	uint32_t x606 = UINT32_MAX;
	int8_t x608 = INT8_MIN;
	uint32_t t151 = 10U;

    t151 = ((x605&x606)*(x607<=x608));

    if (t151 != 4294967168U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = 3U;
	int32_t x610 = INT32_MAX;
	static volatile int16_t x611 = INT16_MAX;
	volatile int32_t x612 = INT32_MIN;
	static uint32_t t152 = 52U;

    t152 = ((x609&x610)*(x611<=x612));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	int8_t x614 = -1;
	int64_t t153 = INT64_MIN;

    t153 = ((x613&x614)*(x615<=x616));

    if (t153 != INT64_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x617 = -5;
	uint8_t x619 = UINT8_MAX;
	uint8_t x620 = 18U;
	int64_t t154 = 14LL;

    t154 = ((x617&x618)*(x619<=x620));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x622 = INT32_MIN;
	volatile int8_t x623 = -1;
	volatile uint64_t t155 = 6190050682457914465LLU;

    t155 = ((x621&x622)*(x623<=x624));

    if (t155 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = 7U;
	int16_t x626 = INT16_MIN;
	static volatile int8_t x627 = -1;
	int8_t x628 = -1;
	int32_t t156 = 51182;

    t156 = ((x625&x626)*(x627<=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x631 = INT16_MAX;
	static int64_t x632 = 838137057LL;
	volatile uint64_t t157 = 125LLU;

    t157 = ((x629&x630)*(x631<=x632));

    if (t157 != 4111465LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x634 = 239557203719LLU;
	uint32_t x635 = UINT32_MAX;
	static int8_t x636 = INT8_MAX;
	volatile uint64_t t158 = 388LLU;

    t158 = ((x633&x634)*(x635<=x636));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x638 = -3;
	int8_t x639 = INT8_MAX;
	uint32_t x640 = 2008141U;
	volatile int32_t t159 = 311;

    t159 = ((x637&x638)*(x639<=x640));

    if (t159 != -128) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int64_t x641 = -4LL;
	static int16_t x642 = INT16_MAX;
	uint16_t x643 = 62U;
	int32_t x644 = INT32_MIN;
	int64_t t160 = -143340032LL;

    t160 = ((x641&x642)*(x643<=x644));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = -485849277;
	int16_t x646 = -1;
	int16_t x648 = INT16_MIN;
	volatile int32_t t161 = 35;

    t161 = ((x645&x646)*(x647<=x648));

    if (t161 != -485849277) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x649 = INT32_MIN;
	int32_t x650 = INT32_MAX;
	static int16_t x651 = INT16_MIN;
	int32_t t162 = 395;

    t162 = ((x649&x650)*(x651<=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MIN;
	uint16_t x654 = 56U;
	int8_t x655 = INT8_MIN;
	uint16_t x656 = UINT16_MAX;

    t163 = ((x653&x654)*(x655<=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	int16_t x658 = -1;
	volatile int16_t x659 = 1;
	volatile uint64_t x660 = UINT64_MAX;
	static volatile int32_t t164 = 3328;

    t164 = ((x657&x658)*(x659<=x660));

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x663 = -1;
	int32_t x664 = -643;

    t165 = ((x661&x662)*(x663<=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x665 = -333445;
	uint16_t x666 = UINT16_MAX;
	int32_t x667 = INT32_MIN;

    t166 = ((x665&x666)*(x667<=x668));

    if (t166 != 59771) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x669 = INT32_MIN;
	static int32_t x670 = INT32_MIN;
	static volatile uint16_t x671 = 8U;
	int32_t x672 = -2248;
	static int32_t t167 = 434;

    t167 = ((x669&x670)*(x671<=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x674 = INT8_MIN;
	int16_t x675 = INT16_MAX;
	uint8_t x676 = 3U;
	volatile int64_t t168 = -28383312489936303LL;

    t168 = ((x673&x674)*(x675<=x676));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x677 = 9U;
	int32_t x678 = INT32_MAX;
	volatile uint8_t x680 = UINT8_MAX;
	volatile int32_t t169 = -1;

    t169 = ((x677&x678)*(x679<=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	int32_t x682 = INT32_MIN;
	static uint16_t x683 = 18927U;
	volatile int64_t t170 = 787LL;

    t170 = ((x681&x682)*(x683<=x684));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MAX;
	uint16_t x686 = UINT16_MAX;
	int32_t x688 = -1;
	int64_t t171 = 163179660567482215LL;

    t171 = ((x685&x686)*(x687<=x688));

    if (t171 != 65535LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x690 = INT64_MAX;
	static int64_t x691 = INT64_MIN;
	int64_t t172 = -301LL;

    t172 = ((x689&x690)*(x691<=x692));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = -1;
	uint16_t x694 = 5723U;
	uint8_t x695 = UINT8_MAX;
	int32_t x696 = -1;
	volatile int32_t t173 = 6;

    t173 = ((x693&x694)*(x695<=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x697 = 2460611;
	uint8_t x699 = UINT8_MAX;
	uint64_t t174 = 468866974LLU;

    t174 = ((x697&x698)*(x699<=x700));

    if (t174 != 2130049LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x702 = INT16_MAX;
	int32_t x703 = INT32_MIN;
	static volatile int32_t t175 = -23208444;

    t175 = ((x701&x702)*(x703<=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x706 = 8942;
	int16_t x708 = INT16_MIN;

    t176 = ((x705&x706)*(x707<=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x710 = INT16_MAX;
	volatile uint64_t x712 = UINT64_MAX;
	uint64_t t177 = 1268LLU;

    t177 = ((x709&x710)*(x711<=x712));

    if (t177 != 32767LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x716 = INT32_MAX;
	static uint64_t t178 = 255471LLU;

    t178 = ((x713&x714)*(x715<=x716));

    if (t178 != 2LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x717 = -1;
	volatile int16_t x718 = INT16_MIN;
	int8_t x719 = -1;
	uint32_t x720 = UINT32_MAX;
	volatile int32_t t179 = 1999;

    t179 = ((x717&x718)*(x719<=x720));

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x721 = INT8_MAX;
	static int64_t x722 = -501409867LL;
	int8_t x723 = INT8_MIN;
	static volatile int8_t x724 = INT8_MIN;
	volatile int64_t t180 = -698539547161397675LL;

    t180 = ((x721&x722)*(x723<=x724));

    if (t180 != 53LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x725 = UINT8_MAX;
	int16_t x726 = INT16_MAX;
	int32_t x727 = INT32_MIN;
	int64_t x728 = 6403743807LL;
	static volatile int32_t t181 = 66883;

    t181 = ((x725&x726)*(x727<=x728));

    if (t181 != 255) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x730 = 1416;
	volatile int64_t x731 = INT64_MIN;
	volatile uint64_t x732 = 1LLU;
	static int32_t t182 = 19142203;

    t182 = ((x729&x730)*(x731<=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MIN;
	volatile uint64_t x734 = 0LLU;
	int64_t x735 = 0LL;
	int64_t x736 = INT64_MIN;
	static volatile uint64_t t183 = 23309LLU;

    t183 = ((x733&x734)*(x735<=x736));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	static volatile int32_t x739 = INT32_MIN;
	uint64_t x740 = 7444LLU;
	volatile int32_t t184 = -4;

    t184 = ((x737&x738)*(x739<=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x742 = INT8_MAX;
	int16_t x743 = 1642;
	uint16_t x744 = UINT16_MAX;
	int64_t t185 = -3445182LL;

    t185 = ((x741&x742)*(x743<=x744));

    if (t185 != 127LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 16080LLU;
	int8_t x747 = -2;
	int16_t x748 = INT16_MAX;

    t186 = ((x745&x746)*(x747<=x748));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x750 = INT16_MAX;
	int16_t x751 = -1;
	static int16_t x752 = INT16_MIN;
	uint32_t t187 = 1577126990U;

    t187 = ((x749&x750)*(x751<=x752));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = INT64_MAX;
	volatile uint32_t x755 = UINT32_MAX;
	uint8_t x756 = UINT8_MAX;
	int64_t t188 = 49LL;

    t188 = ((x753&x754)*(x755<=x756));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 191543LLU;
	static int64_t x758 = INT64_MIN;
	uint16_t x759 = UINT16_MAX;
	int8_t x760 = -11;
	volatile uint64_t t189 = 3724788LLU;

    t189 = ((x757&x758)*(x759<=x760));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	int16_t x762 = INT16_MIN;
	int16_t x764 = 1;
	volatile int32_t t190 = 0;

    t190 = ((x761&x762)*(x763<=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MAX;
	static volatile uint64_t x766 = UINT64_MAX;
	static int8_t x767 = -1;
	static int8_t x768 = INT8_MIN;
	uint64_t t191 = 23826LLU;

    t191 = ((x765&x766)*(x767<=x768));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MIN;
	int8_t x770 = INT8_MAX;
	volatile int64_t x771 = INT64_MIN;
	static int32_t x772 = INT32_MIN;
	volatile int32_t t192 = 1741;

    t192 = ((x769&x770)*(x771<=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MIN;
	static volatile int32_t x774 = INT32_MIN;
	int32_t x775 = INT32_MIN;
	uint16_t x776 = 4835U;

    t193 = ((x773&x774)*(x775<=x776));

    if (t193 != INT32_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x778 = -3;
	int16_t x779 = -31;
	int32_t t194 = -29;

    t194 = ((x777&x778)*(x779<=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = -16;
	static uint32_t x782 = 1532269U;
	uint32_t x783 = 60322U;
	static uint64_t x784 = 3783233541507LLU;
	uint32_t t195 = 3U;

    t195 = ((x781&x782)*(x783<=x784));

    if (t195 != 1532256U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = UINT32_MAX;
	int64_t x786 = INT64_MIN;
	static volatile uint16_t x788 = 12U;
	int64_t t196 = -3LL;

    t196 = ((x785&x786)*(x787<=x788));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = UINT64_MAX;
	volatile int32_t x790 = INT32_MAX;
	static uint32_t x791 = UINT32_MAX;
	int64_t x792 = INT64_MAX;
	static uint64_t t197 = 483184LLU;

    t197 = ((x789&x790)*(x791<=x792));

    if (t197 != 2147483647LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MAX;
	static int64_t x794 = INT64_MIN;
	volatile int16_t x796 = INT16_MIN;

    t198 = ((x793&x794)*(x795<=x796));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x798 = -239LL;
	int32_t x799 = INT32_MAX;

    t199 = ((x797&x798)*(x799<=x800));

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

