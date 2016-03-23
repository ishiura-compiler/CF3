
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

static int32_t x1 = -1;
static int64_t t1 = 194LL;
volatile uint64_t x10 = UINT64_MAX;
uint32_t x15 = 4242136U;
int16_t x16 = INT16_MIN;
int8_t x19 = 1;
int8_t x22 = 3;
static uint64_t x29 = 3898LLU;
int32_t x31 = INT32_MIN;
volatile int32_t t8 = 3;
int64_t x48 = INT64_MIN;
uint64_t t11 = 7262404667909016LLU;
int16_t x50 = -3;
uint64_t x51 = UINT64_MAX;
volatile uint8_t x65 = 3U;
int64_t t15 = -488129353LL;
volatile uint64_t t16 = 20865111968648932LLU;
int64_t t17 = -173110347165344LL;
int16_t x79 = INT16_MAX;
int32_t x80 = INT32_MIN;
volatile int8_t x86 = -1;
int32_t t21 = -2;
int32_t x100 = 445485;
int64_t x105 = -1LL;
int32_t x108 = INT32_MAX;
int64_t t24 = -121LL;
int64_t x123 = 288470511LL;
static volatile uint16_t x126 = UINT16_MAX;
int16_t x129 = -1;
uint64_t x131 = UINT64_MAX;
int16_t x132 = 84;
volatile int32_t x135 = INT32_MAX;
volatile uint64_t t29 = 4056452116827LLU;
uint16_t x138 = 11U;
uint16_t x148 = UINT16_MAX;
static int8_t x151 = -1;
int64_t x157 = INT64_MIN;
volatile int32_t x173 = 0;
volatile int8_t x174 = INT8_MIN;
static int8_t x175 = -1;
int32_t t39 = 3;
uint64_t x177 = 16LLU;
volatile uint64_t t40 = 1232879617223LLU;
volatile int32_t x182 = -398987;
volatile int16_t x185 = -1;
int16_t x186 = -1;
volatile int32_t x189 = INT32_MAX;
volatile uint64_t t44 = 53421677LLU;
int64_t x203 = -1LL;
int8_t x205 = INT8_MAX;
volatile uint8_t x207 = 22U;
int8_t x210 = -1;
int32_t x211 = INT32_MIN;
uint32_t x214 = UINT32_MAX;
volatile uint32_t t48 = 116626U;
static int8_t x226 = INT8_MAX;
volatile uint32_t t51 = 49552965U;
volatile int64_t x230 = 23591382859765LL;
uint64_t t52 = 17044LLU;
static int8_t x235 = -1;
int32_t x236 = 20649;
int32_t t53 = -490;
uint16_t x242 = 85U;
int8_t x243 = INT8_MAX;
int16_t x245 = INT16_MIN;
int32_t x249 = 0;
uint64_t x260 = UINT64_MAX;
volatile int8_t x261 = -8;
volatile int64_t x262 = -2LL;
static volatile int64_t t60 = -3178180195320626881LL;
uint32_t x268 = UINT32_MAX;
uint16_t x272 = 2518U;
int64_t x277 = 3160762616LL;
static int16_t x279 = -2;
int32_t t66 = 1;
volatile int32_t t67 = -2155;
volatile int16_t x298 = INT16_MAX;
static volatile int32_t x299 = 237031;
volatile int64_t t68 = 136965505LL;
uint64_t x301 = 107LLU;
int16_t x311 = INT16_MIN;
int16_t x313 = INT16_MAX;
int32_t t72 = 536660;
int16_t x321 = INT16_MAX;
volatile int64_t t73 = -6912183582333LL;
volatile int16_t x338 = INT16_MIN;
static volatile int64_t x339 = INT64_MIN;
uint8_t x341 = 1U;
int32_t x344 = 161814154;
int8_t x345 = INT8_MIN;
int64_t x352 = INT64_MIN;
volatile int64_t t79 = -22360285934LL;
int32_t x356 = 138044189;
uint64_t t80 = 828148777417LLU;
uint16_t x358 = UINT16_MAX;
int16_t x361 = INT16_MIN;
int32_t x364 = -258;
uint32_t x366 = 28U;
uint32_t t83 = 668U;
int16_t x369 = INT16_MAX;
int64_t x373 = INT64_MIN;
int32_t x374 = 566464;
static int8_t x375 = 0;
int64_t x380 = INT64_MIN;
volatile int8_t x389 = 1;
static volatile uint32_t t89 = 645545072U;
int8_t x394 = 28;
int64_t x398 = INT64_MIN;
int16_t x399 = INT16_MAX;
int64_t t91 = 27LL;
int64_t x404 = INT64_MIN;
volatile int64_t t92 = 1LL;
uint16_t x405 = 5097U;
static int64_t x407 = INT64_MIN;
int64_t t95 = -13518366LL;
volatile uint32_t t96 = 7149669U;
static int16_t x421 = 0;
int32_t x423 = INT32_MAX;
int8_t x435 = INT8_MAX;
uint16_t x437 = 104U;
static uint64_t t101 = 11703468814LLU;
int8_t x441 = INT8_MIN;
int16_t x448 = INT16_MAX;
int8_t x450 = INT8_MIN;
int32_t t104 = 8730692;
uint64_t x457 = 2043825908058LLU;
static int16_t x458 = -1;
uint64_t x472 = UINT64_MAX;
uint64_t t108 = 13531324714291283LLU;
uint64_t x486 = 1775942096LLU;
static uint16_t x487 = 3U;
static int32_t x495 = 19;
int16_t x503 = INT16_MIN;
int16_t x512 = INT16_MAX;
int64_t t116 = 432509785164210211LL;
uint8_t x520 = UINT8_MAX;
static volatile int64_t x524 = INT64_MAX;
int64_t t118 = -35LL;
int64_t x527 = -226291739844764859LL;
volatile uint64_t t119 = 5895912690528663LLU;
uint64_t x538 = UINT64_MAX;
volatile int8_t x548 = INT8_MAX;
int8_t x550 = INT8_MIN;
volatile int16_t x551 = 69;
int64_t x552 = INT64_MAX;
int64_t t125 = 516209LL;
volatile int64_t x561 = -1LL;
int16_t x563 = INT16_MIN;
volatile uint64_t x564 = UINT64_MAX;
volatile uint16_t x567 = UINT16_MAX;
uint32_t x573 = 612926678U;
int32_t x584 = -1;
volatile int64_t t134 = -319LL;
int64_t x589 = INT64_MIN;
static uint16_t x594 = 2388U;
int8_t x595 = INT8_MIN;
int16_t x599 = INT16_MIN;
int32_t x604 = 26878173;
int32_t t138 = 8983;
volatile int8_t x606 = INT8_MIN;
uint8_t x626 = 63U;
uint64_t x638 = 672474296577235523LLU;
volatile uint16_t x640 = 12U;
uint8_t x642 = 19U;
volatile uint16_t x643 = 21U;
int32_t x648 = INT32_MIN;
volatile uint32_t x663 = 3218U;
volatile int64_t t150 = 10506713882LL;
uint16_t x667 = 114U;
volatile int64_t t152 = -504378303861785279LL;
uint16_t x673 = 170U;
int8_t x675 = INT8_MAX;
int32_t x676 = 61172470;
static int32_t t153 = 2;
int64_t x680 = INT64_MIN;
int32_t x684 = 32;
volatile uint64_t x685 = 2594084090936896LLU;
int8_t x695 = 1;
static volatile int64_t x696 = INT64_MIN;
volatile uint8_t x699 = 8U;
volatile int32_t t160 = 42066;
int16_t x705 = INT16_MIN;
int32_t t161 = 111;
volatile int32_t x717 = -1;
int8_t x718 = INT8_MIN;
uint8_t x730 = 1U;
volatile uint64_t x731 = UINT64_MAX;
int8_t x733 = INT8_MAX;
volatile uint64_t t168 = 354061956783282LLU;
uint8_t x739 = 6U;
static int8_t x757 = INT8_MAX;
volatile int64_t t173 = -687644LL;
volatile int32_t x768 = INT32_MIN;
uint32_t x777 = 129615U;
static uint64_t x783 = 2647422070183LLU;
volatile uint64_t t177 = 842240394019825448LLU;
static uint32_t x785 = 119870601U;
static volatile int32_t t180 = 3954448;
int8_t x800 = INT8_MIN;
static uint64_t x802 = UINT64_MAX;
uint16_t x814 = 1889U;
int16_t x820 = -1;
int32_t x821 = 6644261;
uint64_t x822 = 1690483498639816LLU;
uint16_t x823 = 9909U;
uint64_t t187 = 1674404LLU;
static volatile int64_t t190 = 333645711013961723LL;
uint64_t x837 = UINT64_MAX;
uint64_t x841 = UINT64_MAX;
uint16_t x848 = 17U;
static volatile uint32_t t194 = 16423923U;
volatile uint32_t t195 = 372U;
static volatile uint64_t x861 = UINT64_MAX;
int64_t x874 = INT64_MIN;
uint32_t x875 = 3631290U;


void f0(void) {
    	static int16_t x2 = INT16_MIN;
	int8_t x3 = INT8_MAX;
	volatile int16_t x4 = -1;
	int32_t t0 = 3135891;

    t0 = (((x1/x2)+x3)%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	int64_t x6 = -199977159098767880LL;
	volatile int32_t x7 = INT32_MAX;
	int32_t x8 = INT32_MIN;

    t1 = (((x5/x6)+x7)%x8);

    if (t1 != 2147483601LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1601;
	static volatile uint32_t x11 = 163U;
	static volatile int64_t x12 = INT64_MIN;
	volatile uint64_t t2 = 1394273609885LLU;

    t2 = (((x9/x10)+x11)%x12);

    if (t2 != 163LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 3714593545LLU;
	uint32_t x14 = 393962U;
	volatile uint64_t t3 = 73LLU;

    t3 = (((x13/x14)+x15)%x16);

    if (t3 != 4251564LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = 1001;
	volatile int32_t x18 = INT32_MIN;
	int8_t x20 = INT8_MAX;
	int32_t t4 = 4016875;

    t4 = (((x17/x18)+x19)%x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = INT16_MAX;
	int16_t x23 = INT16_MIN;
	uint8_t x24 = UINT8_MAX;
	int32_t t5 = -84481;

    t5 = (((x21/x22)+x23)%x24);

    if (t5 != -171) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x25 = 475520526U;
	uint32_t x26 = UINT32_MAX;
	static int16_t x27 = INT16_MIN;
	volatile int32_t x28 = INT32_MIN;
	volatile uint32_t t6 = 881350U;

    t6 = (((x25/x26)+x27)%x28);

    if (t6 != 2147450880U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = -1;
	int32_t x32 = -8455;
	volatile uint64_t t7 = 39625691483776LLU;

    t7 = (((x29/x30)+x31)%x32);

    if (t7 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = INT16_MAX;
	int8_t x34 = -1;
	volatile uint16_t x35 = 3482U;
	int16_t x36 = -1;

    t8 = (((x33/x34)+x35)%x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = -767;
	volatile int64_t x38 = 6328903352593LL;
	volatile uint8_t x39 = UINT8_MAX;
	static int64_t x40 = -218LL;
	static volatile int64_t t9 = -630502327002977739LL;

    t9 = (((x37/x38)+x39)%x40);

    if (t9 != 37LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	volatile uint8_t x42 = 41U;
	volatile int8_t x43 = INT8_MAX;
	int8_t x44 = INT8_MAX;
	volatile int64_t t10 = -35888LL;

    t10 = (((x41/x42)+x43)%x44);

    if (t10 != -37LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x45 = 2404941423957990904LLU;
	int64_t x46 = INT64_MIN;
	static volatile int64_t x47 = INT64_MIN;

    t11 = (((x45/x46)+x47)%x48);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	uint64_t x52 = 8124249052048172201LLU;
	volatile uint64_t t12 = 112LLU;

    t12 = (((x49/x50)+x51)%x52);

    if (t12 != 41LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	int32_t x54 = INT32_MIN;
	static int16_t x55 = -1;
	uint16_t x56 = 3U;
	volatile int32_t t13 = 42;

    t13 = (((x53/x54)+x55)%x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -1;
	int16_t x58 = 1;
	static int16_t x59 = -1;
	int8_t x60 = -1;
	volatile int32_t t14 = 2;

    t14 = (((x57/x58)+x59)%x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x66 = 6029LL;
	int8_t x67 = -1;
	uint16_t x68 = 20720U;

    t15 = (((x65/x66)+x67)%x68);

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x69 = 17254149LLU;
	int64_t x70 = 7LL;
	volatile int64_t x71 = -124262387653064065LL;
	int16_t x72 = INT16_MIN;

    t16 = (((x69/x70)+x71)%x72);

    if (t16 != 18322481686058952429LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x73 = -1LL;
	volatile uint16_t x74 = UINT16_MAX;
	static volatile int16_t x75 = -78;
	volatile int8_t x76 = INT8_MIN;

    t17 = (((x73/x74)+x75)%x76);

    if (t17 != -78LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x77 = INT32_MIN;
	int32_t x78 = -289;
	int32_t t18 = 1;

    t18 = (((x77/x78)+x79)%x80);

    if (t18 != 7463506) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = INT64_MIN;
	volatile uint32_t x82 = UINT32_MAX;
	volatile int32_t x83 = -1;
	uint8_t x84 = UINT8_MAX;
	int64_t t19 = 1565777LL;

    t19 = (((x81/x82)+x83)%x84);

    if (t19 != -129LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = UINT16_MAX;
	static volatile uint32_t x87 = 26730066U;
	int64_t x88 = 4915419LL;
	volatile int64_t t20 = -1599950840106224241LL;

    t20 = (((x85/x86)+x87)%x88);

    if (t20 != 2087436LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int32_t x93 = INT32_MAX;
	uint16_t x94 = 9U;
	static volatile uint8_t x95 = UINT8_MAX;
	int32_t x96 = 1;

    t21 = (((x93/x94)+x95)%x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x97 = 5;
	uint64_t x98 = 3465LLU;
	int64_t x99 = 2725293071739200862LL;
	static uint64_t t22 = 463273730662066438LLU;

    t22 = (((x97/x98)+x99)%x100);

    if (t22 != 188232LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint32_t x101 = 386U;
	int32_t x102 = INT32_MIN;
	static int16_t x103 = 20;
	volatile uint16_t x104 = 115U;
	static uint32_t t23 = 5994U;

    t23 = (((x101/x102)+x103)%x104);

    if (t23 != 20U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x106 = INT32_MIN;
	int64_t x107 = 12543688448LL;

    t24 = (((x105/x106)+x107)%x108);

    if (t24 != 1806270213LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x109 = UINT8_MAX;
	int64_t x110 = INT64_MIN;
	static volatile uint64_t x111 = 1075681692793LLU;
	int8_t x112 = -1;
	volatile uint64_t t25 = 1879421998447598958LLU;

    t25 = (((x109/x110)+x111)%x112);

    if (t25 != 1075681692793LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x121 = INT32_MAX;
	int8_t x122 = -1;
	int64_t x124 = INT64_MAX;
	static int64_t t26 = -41724775260821965LL;

    t26 = (((x121/x122)+x123)%x124);

    if (t26 != -1859013136LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x125 = INT8_MIN;
	volatile int32_t x127 = 35959257;
	int8_t x128 = INT8_MIN;
	volatile int32_t t27 = -33131350;

    t27 = (((x125/x126)+x127)%x128);

    if (t27 != 89) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x130 = UINT64_MAX;
	static volatile uint64_t t28 = 31735LLU;

    t28 = (((x129/x130)+x131)%x132);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x133 = UINT64_MAX;
	static uint8_t x134 = UINT8_MAX;
	int8_t x136 = INT8_MIN;

    t29 = (((x133/x134)+x135)%x136);

    if (t29 != 72340174985560320LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x137 = INT64_MIN;
	int32_t x139 = 190;
	int32_t x140 = -1;
	static int64_t t30 = -105785075LL;

    t30 = (((x137/x138)+x139)%x140);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x141 = UINT16_MAX;
	uint8_t x142 = UINT8_MAX;
	int8_t x143 = 60;
	uint32_t x144 = 142555U;
	volatile uint32_t t31 = 1461228U;

    t31 = (((x141/x142)+x143)%x144);

    if (t31 != 317U) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x145 = INT8_MIN;
	volatile int8_t x146 = INT8_MAX;
	int32_t x147 = -1;
	volatile int32_t t32 = 5;

    t32 = (((x145/x146)+x147)%x148);

    if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x149 = 16;
	static int16_t x150 = -1129;
	int32_t x152 = INT32_MIN;
	static int32_t t33 = -95963121;

    t33 = (((x149/x150)+x151)%x152);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x153 = 1797520850310LLU;
	static uint64_t x154 = 1895965197948LLU;
	uint32_t x155 = 2U;
	static volatile int8_t x156 = -27;
	uint64_t t34 = 129246910223LLU;

    t34 = (((x153/x154)+x155)%x156);

    if (t34 != 2LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint64_t x158 = 15740321LLU;
	uint8_t x159 = 12U;
	uint32_t x160 = UINT32_MAX;
	uint64_t t35 = 2072658LLU;

    t35 = (((x157/x158)+x159)%x160);

    if (t35 != 1855473314LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x161 = -19;
	volatile int64_t x162 = 20764LL;
	uint64_t x163 = 97905821LLU;
	int64_t x164 = -7148958605LL;
	uint64_t t36 = 15LLU;

    t36 = (((x161/x162)+x163)%x164);

    if (t36 != 97905821LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x165 = INT16_MAX;
	int16_t x166 = -1497;
	volatile int8_t x167 = 0;
	uint16_t x168 = 11U;
	volatile int32_t t37 = 116;

    t37 = (((x165/x166)+x167)%x168);

    if (t37 != -10) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x169 = UINT32_MAX;
	int16_t x170 = INT16_MIN;
	uint32_t x171 = UINT32_MAX;
	int64_t x172 = -1LL;
	static int64_t t38 = -4LL;

    t38 = (((x169/x170)+x171)%x172);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x176 = 73U;

    t39 = (((x173/x174)+x175)%x176);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x178 = INT64_MAX;
	static volatile int16_t x179 = -10;
	int32_t x180 = -1;

    t40 = (((x177/x178)+x179)%x180);

    if (t40 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x181 = INT64_MAX;
	uint32_t x183 = 20435U;
	uint64_t x184 = 3LLU;
	static uint64_t t41 = 3089343LLU;

    t41 = (((x181/x182)+x183)%x184);

    if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x187 = 229U;
	int64_t x188 = INT64_MIN;
	int64_t t42 = -6050887932736LL;

    t42 = (((x185/x186)+x187)%x188);

    if (t42 != 230LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x190 = INT8_MAX;
	uint32_t x191 = UINT32_MAX;
	int16_t x192 = -16;
	uint32_t t43 = 1236693U;

    t43 = (((x189/x190)+x191)%x192);

    if (t43 != 16909319U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x193 = 18042LLU;
	static int64_t x194 = -52608321881LL;
	int32_t x195 = 26312;
	int8_t x196 = -3;

    t44 = (((x193/x194)+x195)%x196);

    if (t44 != 26312LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x201 = INT16_MAX;
	uint16_t x202 = 1U;
	uint8_t x204 = 3U;
	volatile int64_t t45 = -9512759994066LL;

    t45 = (((x201/x202)+x203)%x204);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int16_t x206 = -1;
	int8_t x208 = INT8_MIN;
	volatile int32_t t46 = -3;

    t46 = (((x205/x206)+x207)%x208);

    if (t46 != -105) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x209 = -1;
	int32_t x212 = INT32_MIN;
	int32_t t47 = 0;

    t47 = (((x209/x210)+x211)%x212);

    if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x213 = INT32_MAX;
	static volatile int32_t x215 = 718692;
	static uint16_t x216 = 3187U;

    t48 = (((x213/x214)+x215)%x216);

    if (t48 != 1617U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x217 = INT8_MAX;
	uint16_t x218 = 3261U;
	volatile int64_t x219 = -1313759662323480181LL;
	int16_t x220 = INT16_MAX;
	int64_t t49 = 160412311895LL;

    t49 = (((x217/x218)+x219)%x220);

    if (t49 != -47LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x221 = INT16_MIN;
	int8_t x222 = -5;
	static volatile int16_t x223 = INT16_MIN;
	int32_t x224 = INT32_MIN;
	int32_t t50 = 18072;

    t50 = (((x221/x222)+x223)%x224);

    if (t50 != -26215) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x225 = 100U;
	int16_t x227 = -1;
	int8_t x228 = -1;

    t51 = (((x225/x226)+x227)%x228);

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x229 = UINT8_MAX;
	uint32_t x231 = 114203U;
	volatile uint64_t x232 = 36LLU;

    t52 = (((x229/x230)+x231)%x232);

    if (t52 != 11LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x233 = INT16_MAX;
	int32_t x234 = -29641;

    t53 = (((x233/x234)+x235)%x236);

    if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x237 = INT16_MIN;
	static int8_t x238 = -1;
	static uint8_t x239 = 10U;
	static uint32_t x240 = UINT32_MAX;
	volatile uint32_t t54 = 1U;

    t54 = (((x237/x238)+x239)%x240);

    if (t54 != 32778U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x241 = 3U;
	int64_t x244 = 46776209356446LL;
	int64_t t55 = 176886971LL;

    t55 = (((x241/x242)+x243)%x244);

    if (t55 != 127LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x246 = 1740U;
	int64_t x247 = 34940LL;
	int8_t x248 = INT8_MAX;
	int64_t t56 = 237169LL;

    t56 = (((x245/x246)+x247)%x248);

    if (t56 != 124LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x250 = 569915131U;
	int32_t x251 = -567756726;
	int16_t x252 = INT16_MAX;
	static volatile uint32_t t57 = 37U;

    t57 = (((x249/x250)+x251)%x252);

    if (t57 != 29854U) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x253 = INT64_MAX;
	volatile int8_t x254 = -7;
	int8_t x255 = INT8_MIN;
	static uint8_t x256 = 18U;
	static volatile int64_t t58 = 2430063LL;

    t58 = (((x253/x254)+x255)%x256);

    if (t58 != -3LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x257 = -9288246LL;
	int16_t x258 = -1;
	int64_t x259 = INT64_MIN;
	volatile uint64_t t59 = 4287035919980LLU;

    t59 = (((x257/x258)+x259)%x260);

    if (t59 != 9223372036864064054LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x263 = INT16_MIN;
	static uint16_t x264 = 2001U;

    t60 = (((x261/x262)+x263)%x264);

    if (t60 != -748LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x265 = 16513571U;
	int16_t x266 = -90;
	uint64_t x267 = UINT64_MAX;
	uint64_t t61 = 545215462LLU;

    t61 = (((x265/x266)+x267)%x268);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x269 = -4546598;
	static int32_t x270 = INT32_MIN;
	static int8_t x271 = INT8_MIN;
	static int32_t t62 = -7567;

    t62 = (((x269/x270)+x271)%x272);

    if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x273 = -62;
	int32_t x274 = INT32_MIN;
	int16_t x275 = -216;
	uint8_t x276 = UINT8_MAX;
	int32_t t63 = 228392094;

    t63 = (((x273/x274)+x275)%x276);

    if (t63 != -216) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x278 = -1;
	static uint32_t x280 = 1598343U;
	volatile int64_t t64 = 76LL;

    t64 = (((x277/x278)+x279)%x280);

    if (t64 != -838507LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x281 = -991;
	uint8_t x282 = UINT8_MAX;
	int16_t x283 = -107;
	uint32_t x284 = UINT32_MAX;
	volatile uint32_t t65 = 21903U;

    t65 = (((x281/x282)+x283)%x284);

    if (t65 != 4294967186U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x285 = INT8_MIN;
	int32_t x286 = 104575;
	static volatile int8_t x287 = 0;
	uint8_t x288 = UINT8_MAX;

    t66 = (((x285/x286)+x287)%x288);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x293 = -2947;
	int16_t x294 = INT16_MIN;
	int16_t x295 = -1;
	static uint8_t x296 = 9U;

    t67 = (((x293/x294)+x295)%x296);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x297 = INT16_MIN;
	volatile int64_t x300 = -84LL;

    t68 = (((x297/x298)+x299)%x300);

    if (t68 != 66LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x302 = 193U;
	volatile uint64_t x303 = 2139689011634345LLU;
	static int32_t x304 = -25566519;
	volatile uint64_t t69 = 332792907LLU;

    t69 = (((x301/x302)+x303)%x304);

    if (t69 != 2139689011634345LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x309 = INT64_MAX;
	int8_t x310 = INT8_MAX;
	uint64_t x312 = 152LLU;
	uint64_t t70 = 23196710125970653LLU;

    t70 = (((x309/x310)+x311)%x312);

    if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x314 = 211U;
	int16_t x315 = INT16_MIN;
	int32_t x316 = INT32_MAX;
	volatile uint32_t t71 = 507511723U;

    t71 = (((x313/x314)+x315)%x316);

    if (t71 != 2147451036U) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x317 = INT16_MIN;
	int32_t x318 = INT32_MAX;
	int8_t x319 = INT8_MIN;
	static int16_t x320 = INT16_MIN;

    t72 = (((x317/x318)+x319)%x320);

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x322 = INT16_MAX;
	int64_t x323 = INT64_MIN;
	int64_t x324 = INT64_MAX;

    t73 = (((x321/x322)+x323)%x324);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x325 = 3;
	int64_t x326 = 914347106493905764LL;
	int8_t x327 = INT8_MIN;
	int64_t x328 = 3234965109217015060LL;
	int64_t t74 = 27775893LL;

    t74 = (((x325/x326)+x327)%x328);

    if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint64_t x333 = UINT64_MAX;
	uint64_t x334 = UINT64_MAX;
	uint8_t x335 = UINT8_MAX;
	static int8_t x336 = INT8_MIN;
	volatile uint64_t t75 = 295457070733LLU;

    t75 = (((x333/x334)+x335)%x336);

    if (t75 != 256LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x337 = 3691604U;
	uint32_t x340 = 220222U;
	static volatile int64_t t76 = -9731LL;

    t76 = (((x337/x338)+x339)%x340);

    if (t76 != -36258LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x342 = -11613;
	int32_t x343 = INT32_MIN;
	volatile int32_t t77 = -71557;

    t77 = (((x341/x342)+x343)%x344);

    if (t77 != -43899646) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x346 = INT64_MAX;
	int16_t x347 = INT16_MIN;
	uint16_t x348 = UINT16_MAX;
	volatile int64_t t78 = -19083024941442LL;

    t78 = (((x345/x346)+x347)%x348);

    if (t78 != -32768LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x349 = INT16_MIN;
	static int16_t x350 = 1;
	static uint8_t x351 = 54U;

    t79 = (((x349/x350)+x351)%x352);

    if (t79 != -32714LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x353 = 24LL;
	uint64_t x354 = UINT64_MAX;
	uint8_t x355 = 61U;

    t80 = (((x353/x354)+x355)%x356);

    if (t80 != 61LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x357 = -16523249591028634LL;
	static volatile int64_t x359 = 12590288334LL;
	int32_t x360 = -8845920;
	int64_t t81 = -2979609608161335LL;

    t81 = (((x357/x358)+x359)%x360);

    if (t81 != -8517220LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x362 = 1204U;
	uint32_t x363 = 3U;
	volatile uint32_t t82 = 45U;

    t82 = (((x361/x362)+x363)%x364);

    if (t82 != 3567224U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x365 = 505119683;
	static int16_t x367 = 2187;
	uint8_t x368 = 2U;

    t83 = (((x365/x366)+x367)%x368);

    if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x370 = -110;
	int16_t x371 = INT16_MIN;
	uint8_t x372 = 1U;
	int32_t t84 = 53427044;

    t84 = (((x369/x370)+x371)%x372);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x376 = 10U;
	int64_t t85 = -3691284106LL;

    t85 = (((x373/x374)+x375)%x376);

    if (t85 != -8LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x377 = 0U;
	static int32_t x378 = -1;
	uint32_t x379 = UINT32_MAX;
	int64_t t86 = -48540699755LL;

    t86 = (((x377/x378)+x379)%x380);

    if (t86 != 4294967295LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x381 = INT64_MIN;
	static int64_t x382 = -245509790LL;
	int32_t x383 = INT32_MIN;
	uint8_t x384 = 1U;
	int64_t t87 = 3201801434464967993LL;

    t87 = (((x381/x382)+x383)%x384);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x385 = INT8_MIN;
	static int8_t x386 = -1;
	uint16_t x387 = UINT16_MAX;
	uint16_t x388 = 6863U;
	volatile int32_t t88 = -15951571;

    t88 = (((x385/x386)+x387)%x388);

    if (t88 != 3896) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x390 = 3U;
	int8_t x391 = INT8_MAX;
	uint32_t x392 = 11368U;

    t89 = (((x389/x390)+x391)%x392);

    if (t89 != 127U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x393 = 275866LLU;
	int16_t x395 = INT16_MIN;
	int64_t x396 = -9305LL;
	uint64_t t90 = 2026359LLU;

    t90 = (((x393/x394)+x395)%x396);

    if (t90 != 18446744073709528700LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x397 = 0U;
	static uint8_t x400 = UINT8_MAX;

    t91 = (((x397/x398)+x399)%x400);

    if (t91 != 127LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x401 = INT16_MAX;
	int32_t x402 = INT32_MAX;
	uint8_t x403 = 0U;

    t92 = (((x401/x402)+x403)%x404);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x406 = 1;
	uint32_t x408 = 55146U;
	volatile int64_t t93 = -69770559443190472LL;

    t93 = (((x405/x406)+x407)%x408);

    if (t93 != -51149LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x409 = -3807;
	int32_t x410 = INT32_MAX;
	int8_t x411 = 2;
	static uint8_t x412 = 10U;
	int32_t t94 = 136;

    t94 = (((x409/x410)+x411)%x412);

    if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x413 = 10LL;
	uint32_t x414 = 215525296U;
	static volatile int32_t x415 = INT32_MAX;
	volatile int16_t x416 = INT16_MAX;

    t95 = (((x413/x414)+x415)%x416);

    if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x417 = INT32_MAX;
	uint16_t x418 = 18U;
	uint32_t x419 = 61U;
	int8_t x420 = -3;

    t96 = (((x417/x418)+x419)%x420);

    if (t96 != 119304708U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x422 = INT8_MAX;
	uint64_t x424 = UINT64_MAX;
	volatile uint64_t t97 = 1LLU;

    t97 = (((x421/x422)+x423)%x424);

    if (t97 != 2147483647LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x425 = 39U;
	uint16_t x426 = UINT16_MAX;
	uint8_t x427 = 0U;
	uint8_t x428 = 101U;
	int32_t t98 = -14;

    t98 = (((x425/x426)+x427)%x428);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x429 = -2;
	int16_t x430 = INT16_MAX;
	uint64_t x431 = 11487270769406LLU;
	volatile int64_t x432 = INT64_MAX;
	uint64_t t99 = 13486806356971834LLU;

    t99 = (((x429/x430)+x431)%x432);

    if (t99 != 11487270769406LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x433 = -1;
	int16_t x434 = INT16_MIN;
	int8_t x436 = INT8_MAX;
	static int32_t t100 = -31620;

    t100 = (((x433/x434)+x435)%x436);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x438 = UINT16_MAX;
	uint64_t x439 = 62540605LLU;
	volatile uint16_t x440 = UINT16_MAX;

    t101 = (((x437/x438)+x439)%x440);

    if (t101 != 20215LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x442 = 11615U;
	static uint64_t x443 = UINT64_MAX;
	int16_t x444 = -1;
	static volatile uint64_t t102 = 74833313LLU;

    t102 = (((x441/x442)+x443)%x444);

    if (t102 != 369776LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x445 = 1U;
	int8_t x446 = INT8_MIN;
	int8_t x447 = INT8_MAX;
	int32_t t103 = 10952;

    t103 = (((x445/x446)+x447)%x448);

    if (t103 != 127) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x449 = -1;
	static volatile int8_t x451 = 3;
	volatile int16_t x452 = INT16_MAX;

    t104 = (((x449/x450)+x451)%x452);

    if (t104 != 3) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x453 = INT8_MIN;
	int32_t x454 = 512;
	uint16_t x455 = 0U;
	uint8_t x456 = UINT8_MAX;
	static int32_t t105 = 3514;

    t105 = (((x453/x454)+x455)%x456);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x459 = INT8_MAX;
	int32_t x460 = 9990;
	uint64_t t106 = 16LLU;

    t106 = (((x457/x458)+x459)%x460);

    if (t106 != 127LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x465 = UINT8_MAX;
	int8_t x466 = 2;
	static uint8_t x467 = UINT8_MAX;
	int16_t x468 = -1;
	volatile int32_t t107 = 48;

    t107 = (((x465/x466)+x467)%x468);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int16_t x469 = -1;
	uint8_t x470 = 2U;
	volatile int8_t x471 = -23;

    t108 = (((x469/x470)+x471)%x472);

    if (t108 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x477 = INT16_MIN;
	int8_t x478 = -1;
	int8_t x479 = -1;
	uint16_t x480 = 1U;
	int32_t t109 = 3305;

    t109 = (((x477/x478)+x479)%x480);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x481 = 182234U;
	static uint32_t x482 = 851U;
	int16_t x483 = -1;
	static int16_t x484 = INT16_MIN;
	volatile uint32_t t110 = 660206U;

    t110 = (((x481/x482)+x483)%x484);

    if (t110 != 213U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x485 = INT8_MAX;
	uint32_t x488 = UINT32_MAX;
	volatile uint64_t t111 = 49262082641LLU;

    t111 = (((x485/x486)+x487)%x488);

    if (t111 != 3LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int64_t x493 = 69LL;
	int16_t x494 = -1;
	int16_t x496 = 7;
	volatile int64_t t112 = -726168647127390793LL;

    t112 = (((x493/x494)+x495)%x496);

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x497 = 7U;
	int8_t x498 = 20;
	static volatile int32_t x499 = INT32_MIN;
	int64_t x500 = INT64_MIN;
	int64_t t113 = -11763437515915637LL;

    t113 = (((x497/x498)+x499)%x500);

    if (t113 != 2147483648LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x501 = 45U;
	int8_t x502 = -1;
	uint8_t x504 = 67U;
	static int32_t t114 = 6074;

    t114 = (((x501/x502)+x503)%x504);

    if (t114 != -50) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x509 = -1;
	int32_t x510 = INT32_MIN;
	static uint16_t x511 = 11718U;
	int32_t t115 = -283232;

    t115 = (((x509/x510)+x511)%x512);

    if (t115 != 11718) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x513 = INT16_MAX;
	int64_t x514 = INT64_MIN;
	static int32_t x515 = -1;
	int64_t x516 = INT64_MIN;

    t116 = (((x513/x514)+x515)%x516);

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x517 = 81U;
	uint16_t x518 = UINT16_MAX;
	int64_t x519 = -1737293024LL;
	static volatile int64_t t117 = 3085818969LL;

    t117 = (((x517/x518)+x519)%x520);

    if (t117 != -209LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint16_t x521 = 6190U;
	int32_t x522 = -144642972;
	int64_t x523 = INT64_MIN;

    t118 = (((x521/x522)+x523)%x524);

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x525 = INT16_MIN;
	uint64_t x526 = UINT64_MAX;
	uint64_t x528 = UINT64_MAX;

    t119 = (((x525/x526)+x527)%x528);

    if (t119 != 18220452333864786757LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x529 = -1;
	volatile uint32_t x530 = UINT32_MAX;
	uint32_t x531 = UINT32_MAX;
	int16_t x532 = INT16_MIN;
	uint32_t t120 = 1648U;

    t120 = (((x529/x530)+x531)%x532);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x533 = INT8_MAX;
	uint16_t x534 = 1876U;
	int16_t x535 = INT16_MIN;
	int64_t x536 = -3966757456LL;
	volatile int64_t t121 = 14116208489783761LL;

    t121 = (((x533/x534)+x535)%x536);

    if (t121 != -32768LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x537 = 12765U;
	int64_t x539 = INT64_MAX;
	volatile int32_t x540 = -1;
	uint64_t t122 = 22427901723177938LLU;

    t122 = (((x537/x538)+x539)%x540);

    if (t122 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x541 = -1;
	static int32_t x542 = INT32_MIN;
	uint64_t x543 = UINT64_MAX;
	uint16_t x544 = UINT16_MAX;
	volatile uint64_t t123 = 338001835999437129LLU;

    t123 = (((x541/x542)+x543)%x544);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x545 = -1LL;
	volatile int32_t x546 = -1;
	int32_t x547 = 572935392;
	volatile int64_t t124 = 10178180968619LL;

    t124 = (((x545/x546)+x547)%x548);

    if (t124 != 39LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x549 = INT16_MAX;

    t125 = (((x549/x550)+x551)%x552);

    if (t125 != -186LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x553 = 230814LLU;
	volatile int8_t x554 = INT8_MIN;
	uint16_t x555 = UINT16_MAX;
	static uint32_t x556 = 3U;
	uint64_t t126 = 700839LLU;

    t126 = (((x553/x554)+x555)%x556);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x557 = INT16_MAX;
	int32_t x558 = INT32_MAX;
	int16_t x559 = INT16_MIN;
	static int8_t x560 = INT8_MIN;
	volatile int32_t t127 = -98114715;

    t127 = (((x557/x558)+x559)%x560);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x562 = INT32_MIN;
	volatile uint64_t t128 = 3LLU;

    t128 = (((x561/x562)+x563)%x564);

    if (t128 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x565 = INT8_MIN;
	int16_t x566 = INT16_MIN;
	int64_t x568 = 291895479LL;
	int64_t t129 = -1704609234LL;

    t129 = (((x565/x566)+x567)%x568);

    if (t129 != 65535LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x569 = UINT16_MAX;
	int32_t x570 = INT32_MAX;
	static uint8_t x571 = 31U;
	int64_t x572 = -1LL;
	volatile int64_t t130 = -510LL;

    t130 = (((x569/x570)+x571)%x572);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x574 = INT16_MIN;
	uint16_t x575 = UINT16_MAX;
	static int16_t x576 = INT16_MIN;
	uint32_t t131 = 263U;

    t131 = (((x573/x574)+x575)%x576);

    if (t131 != 65535U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x577 = 11794296909537LL;
	uint64_t x578 = 2LLU;
	volatile uint16_t x579 = UINT16_MAX;
	int16_t x580 = -1;
	volatile uint64_t t132 = 34743692616994LLU;

    t132 = (((x577/x578)+x579)%x580);

    if (t132 != 5897148520303LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x581 = INT8_MIN;
	int32_t x582 = 78840891;
	uint64_t x583 = 28326755LLU;
	volatile uint64_t t133 = 12525238395640LLU;

    t133 = (((x581/x582)+x583)%x584);

    if (t133 != 28326755LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x585 = INT64_MIN;
	int32_t x586 = 938;
	volatile int16_t x587 = -1;
	static uint8_t x588 = 4U;

    t134 = (((x585/x586)+x587)%x588);

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x590 = 104U;
	int16_t x591 = -2;
	int8_t x592 = -1;
	volatile int64_t t135 = 84LL;

    t135 = (((x589/x590)+x591)%x592);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x593 = -1;
	static uint16_t x596 = 320U;
	volatile int32_t t136 = 600;

    t136 = (((x593/x594)+x595)%x596);

    if (t136 != -128) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x597 = -123103;
	static uint16_t x598 = 8U;
	uint32_t x600 = 295U;
	volatile uint32_t t137 = 20937527U;

    t137 = (((x597/x598)+x599)%x600);

    if (t137 != 276U) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x601 = INT8_MAX;
	uint16_t x602 = 20U;
	static volatile int32_t x603 = INT32_MIN;

    t138 = (((x601/x602)+x603)%x604);

    if (t138 != -24107975) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x605 = INT64_MIN;
	int32_t x607 = -1;
	static volatile int8_t x608 = INT8_MAX;
	int64_t t139 = 112150LL;

    t139 = (((x605/x606)+x607)%x608);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x613 = 34372398U;
	uint16_t x614 = 3839U;
	uint8_t x615 = 27U;
	static volatile int64_t x616 = INT64_MIN;
	int64_t t140 = 3295763LL;

    t140 = (((x613/x614)+x615)%x616);

    if (t140 != 8980LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x617 = -1LL;
	uint16_t x618 = UINT16_MAX;
	int32_t x619 = -6;
	uint8_t x620 = UINT8_MAX;
	int64_t t141 = 195262623831218187LL;

    t141 = (((x617/x618)+x619)%x620);

    if (t141 != -6LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x625 = 200857210U;
	static uint8_t x627 = UINT8_MAX;
	uint8_t x628 = UINT8_MAX;
	volatile uint32_t t142 = 7U;

    t142 = (((x625/x626)+x627)%x628);

    if (t142 != 199U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x633 = INT16_MAX;
	volatile int64_t x634 = INT64_MIN;
	int16_t x635 = -1;
	int8_t x636 = -3;
	static int64_t t143 = -27112918LL;

    t143 = (((x633/x634)+x635)%x636);

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x637 = 1357U;
	int64_t x639 = 74017LL;
	uint64_t t144 = 23194809317703858LLU;

    t144 = (((x637/x638)+x639)%x640);

    if (t144 != 1LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x641 = 262U;
	volatile int16_t x644 = -1;
	uint32_t t145 = 375417437U;

    t145 = (((x641/x642)+x643)%x644);

    if (t145 != 34U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x645 = 1U;
	int8_t x646 = INT8_MIN;
	uint32_t x647 = 471883597U;
	uint32_t t146 = 23116U;

    t146 = (((x645/x646)+x647)%x648);

    if (t146 != 471883597U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x649 = INT64_MAX;
	volatile int32_t x650 = -1;
	int16_t x651 = 13;
	uint16_t x652 = 910U;
	int64_t t147 = -19LL;

    t147 = (((x649/x650)+x651)%x652);

    if (t147 != -904LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x653 = 1;
	uint8_t x654 = 17U;
	volatile int32_t x655 = -1;
	uint8_t x656 = 15U;
	int32_t t148 = -606970493;

    t148 = (((x653/x654)+x655)%x656);

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x657 = UINT64_MAX;
	uint32_t x658 = 110426656U;
	static int64_t x659 = 344736884254LL;
	uint64_t x660 = UINT64_MAX;
	uint64_t t149 = 1409739LLU;

    t149 = (((x657/x658)+x659)%x660);

    if (t149 != 511786623346LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x661 = INT64_MAX;
	static volatile int32_t x662 = -2465;
	int32_t x664 = -8;

    t150 = (((x661/x662)+x663)%x664);

    if (t150 != -6LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x665 = 12;
	uint32_t x666 = 3857U;
	int32_t x668 = -16010;
	uint32_t t151 = 3981U;

    t151 = (((x665/x666)+x667)%x668);

    if (t151 != 114U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x669 = INT8_MIN;
	int32_t x670 = INT32_MAX;
	static int64_t x671 = INT64_MIN;
	int64_t x672 = -1LL;

    t152 = (((x669/x670)+x671)%x672);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x674 = 20U;

    t153 = (((x673/x674)+x675)%x676);

    if (t153 != 135) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x677 = INT64_MAX;
	int32_t x678 = INT32_MAX;
	static int16_t x679 = -9280;
	int64_t t154 = -683490944278LL;

    t154 = (((x677/x678)+x679)%x680);

    if (t154 != 4294958018LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x681 = INT64_MAX;
	uint8_t x682 = 20U;
	int16_t x683 = -1;
	volatile int64_t t155 = -2868121102963910336LL;

    t155 = (((x681/x682)+x683)%x684);

    if (t155 != 5LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x686 = INT64_MAX;
	static int64_t x687 = INT64_MIN;
	volatile uint32_t x688 = UINT32_MAX;
	volatile uint64_t t156 = 223859484LLU;

    t156 = (((x685/x686)+x687)%x688);

    if (t156 != 2147483648LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x689 = -24;
	int16_t x690 = INT16_MAX;
	volatile uint8_t x691 = 88U;
	static volatile uint16_t x692 = 1738U;
	int32_t t157 = 214285055;

    t157 = (((x689/x690)+x691)%x692);

    if (t157 != 88) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x693 = UINT64_MAX;
	volatile int16_t x694 = INT16_MAX;
	volatile uint64_t t158 = 30LLU;

    t158 = (((x693/x694)+x695)%x696);

    if (t158 != 562967133814801LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x697 = -1;
	int16_t x698 = INT16_MIN;
	int32_t x700 = INT32_MAX;
	int32_t t159 = 1265;

    t159 = (((x697/x698)+x699)%x700);

    if (t159 != 8) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x701 = INT8_MIN;
	static int16_t x702 = -1;
	volatile int8_t x703 = -1;
	volatile int8_t x704 = -1;

    t160 = (((x701/x702)+x703)%x704);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x706 = INT32_MIN;
	int32_t x707 = INT32_MIN;
	static int16_t x708 = INT16_MIN;

    t161 = (((x705/x706)+x707)%x708);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x709 = 5;
	static uint32_t x710 = 1395634979U;
	uint16_t x711 = UINT16_MAX;
	static int8_t x712 = INT8_MIN;
	uint32_t t162 = 19344498U;

    t162 = (((x709/x710)+x711)%x712);

    if (t162 != 65535U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x713 = 1U;
	int16_t x714 = INT16_MIN;
	uint16_t x715 = UINT16_MAX;
	int32_t x716 = -1;
	static int32_t t163 = -68;

    t163 = (((x713/x714)+x715)%x716);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x719 = -3544;
	uint32_t x720 = 1127576461U;
	static volatile uint32_t t164 = 1810729554U;

    t164 = (((x717/x718)+x719)%x720);

    if (t164 != 912234369U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x721 = 406;
	int16_t x722 = 27;
	uint32_t x723 = 1253U;
	volatile int64_t x724 = -52690420279355267LL;
	volatile int64_t t165 = -28853050390691233LL;

    t165 = (((x721/x722)+x723)%x724);

    if (t165 != 1268LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x725 = INT32_MAX;
	static int8_t x726 = INT8_MAX;
	uint64_t x727 = UINT64_MAX;
	int16_t x728 = -45;
	static volatile uint64_t t166 = 3028955857658253536LLU;

    t166 = (((x725/x726)+x727)%x728);

    if (t166 != 16909319LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x729 = UINT16_MAX;
	volatile uint32_t x732 = UINT32_MAX;
	uint64_t t167 = 1143LLU;

    t167 = (((x729/x730)+x731)%x732);

    if (t167 != 65534LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x734 = INT16_MIN;
	volatile int64_t x735 = INT64_MIN;
	volatile uint64_t x736 = 271687674620280LLU;

    t168 = (((x733/x734)+x735)%x736);

    if (t168 != 118858845510368LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x737 = -1;
	int64_t x738 = 59097861LL;
	uint16_t x740 = UINT16_MAX;
	volatile int64_t t169 = -122736564LL;

    t169 = (((x737/x738)+x739)%x740);

    if (t169 != 6LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x745 = INT8_MIN;
	volatile uint8_t x746 = 3U;
	int8_t x747 = INT8_MIN;
	int16_t x748 = INT16_MIN;
	volatile int32_t t170 = -5;

    t170 = (((x745/x746)+x747)%x748);

    if (t170 != -170) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x753 = INT8_MIN;
	uint16_t x754 = 21886U;
	int8_t x755 = INT8_MIN;
	int8_t x756 = -1;
	int32_t t171 = 119;

    t171 = (((x753/x754)+x755)%x756);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x758 = 18;
	int8_t x759 = INT8_MAX;
	int8_t x760 = INT8_MIN;
	int32_t t172 = 28072;

    t172 = (((x757/x758)+x759)%x760);

    if (t172 != 6) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x761 = -560212042103477661LL;
	volatile uint8_t x762 = UINT8_MAX;
	static volatile int32_t x763 = -1;
	volatile uint16_t x764 = 236U;

    t173 = (((x761/x762)+x763)%x764);

    if (t173 != -10LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x765 = -13;
	uint64_t x766 = UINT64_MAX;
	int32_t x767 = 346949728;
	static uint64_t t174 = 2355444887092LLU;

    t174 = (((x765/x766)+x767)%x768);

    if (t174 != 346949728LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x773 = 52;
	volatile int16_t x774 = INT16_MIN;
	int32_t x775 = INT32_MIN;
	uint32_t x776 = 125U;
	uint32_t t175 = 1065U;

    t175 = (((x773/x774)+x775)%x776);

    if (t175 != 23U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x778 = -5411;
	int16_t x779 = INT16_MIN;
	int32_t x780 = INT32_MIN;
	volatile uint32_t t176 = 1676U;

    t176 = (((x777/x778)+x779)%x780);

    if (t176 != 2147450880U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x781 = 27U;
	static int32_t x782 = INT32_MAX;
	int64_t x784 = INT64_MIN;

    t177 = (((x781/x782)+x783)%x784);

    if (t177 != 2647422070183LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x786 = INT16_MAX;
	static int8_t x787 = 28;
	uint64_t x788 = UINT64_MAX;
	uint64_t t178 = 15716858LLU;

    t178 = (((x785/x786)+x787)%x788);

    if (t178 != 3686LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x789 = -6;
	int8_t x790 = INT8_MIN;
	int16_t x791 = INT16_MAX;
	uint32_t x792 = UINT32_MAX;
	volatile uint32_t t179 = 11U;

    t179 = (((x789/x790)+x791)%x792);

    if (t179 != 32767U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x793 = UINT16_MAX;
	int32_t x794 = INT32_MAX;
	volatile int32_t x795 = INT32_MIN;
	int16_t x796 = -5837;

    t180 = (((x793/x794)+x795)%x796);

    if (t180 != -4652) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x797 = INT64_MAX;
	uint32_t x798 = 30406838U;
	uint32_t x799 = UINT32_MAX;
	int64_t t181 = 102022884026114LL;

    t181 = (((x797/x798)+x799)%x800);

    if (t181 != 22LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x801 = 363396689447074089LLU;
	static int8_t x803 = INT8_MIN;
	uint16_t x804 = 311U;
	volatile uint64_t t182 = 612935952LLU;

    t182 = (((x801/x802)+x803)%x804);

    if (t182 != 80LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x805 = INT8_MAX;
	int64_t x806 = INT64_MIN;
	uint8_t x807 = UINT8_MAX;
	static int64_t x808 = INT64_MIN;
	static volatile int64_t t183 = 9744063711286037LL;

    t183 = (((x805/x806)+x807)%x808);

    if (t183 != 255LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x809 = 7;
	uint8_t x810 = UINT8_MAX;
	int32_t x811 = INT32_MIN;
	int64_t x812 = INT64_MAX;
	volatile int64_t t184 = -137LL;

    t184 = (((x809/x810)+x811)%x812);

    if (t184 != -2147483648LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x813 = 2U;
	int32_t x815 = 6;
	int64_t x816 = -1LL;
	volatile int64_t t185 = 1LL;

    t185 = (((x813/x814)+x815)%x816);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x817 = -1;
	int64_t x818 = INT64_MAX;
	uint16_t x819 = 7311U;
	static int64_t t186 = 6261746815LL;

    t186 = (((x817/x818)+x819)%x820);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x824 = INT64_MIN;

    t187 = (((x821/x822)+x823)%x824);

    if (t187 != 9909LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x825 = UINT16_MAX;
	static volatile uint8_t x826 = UINT8_MAX;
	int8_t x827 = -13;
	int64_t x828 = -1LL;
	volatile int64_t t188 = -240482789736LL;

    t188 = (((x825/x826)+x827)%x828);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x829 = -1;
	static uint64_t x830 = 3LLU;
	uint8_t x831 = UINT8_MAX;
	uint64_t x832 = 6519777710LLU;
	volatile uint64_t t189 = 19384318161069872LLU;

    t189 = (((x829/x830)+x831)%x832);

    if (t189 != 3685351870LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x833 = INT8_MAX;
	int64_t x834 = INT64_MIN;
	int32_t x835 = INT32_MIN;
	int64_t x836 = -14572984912LL;

    t190 = (((x833/x834)+x835)%x836);

    if (t190 != -2147483648LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x838 = -1;
	int16_t x839 = -33;
	static volatile int16_t x840 = -3;
	volatile uint64_t t191 = 27351769387306570LLU;

    t191 = (((x837/x838)+x839)%x840);

    if (t191 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x842 = -1LL;
	int8_t x843 = INT8_MIN;
	volatile int32_t x844 = 1;
	volatile uint64_t t192 = 145320024LLU;

    t192 = (((x841/x842)+x843)%x844);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x845 = INT16_MIN;
	volatile int8_t x846 = -1;
	volatile int8_t x847 = 0;
	static int32_t t193 = 90;

    t193 = (((x845/x846)+x847)%x848);

    if (t193 != 9) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x849 = 6U;
	static uint8_t x850 = 4U;
	uint32_t x851 = 60769U;
	uint16_t x852 = UINT16_MAX;

    t194 = (((x849/x850)+x851)%x852);

    if (t194 != 60770U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x853 = UINT32_MAX;
	int32_t x854 = INT32_MIN;
	int32_t x855 = -1;
	uint32_t x856 = 7U;

    t195 = (((x853/x854)+x855)%x856);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x857 = 118U;
	uint64_t x858 = 2346606LLU;
	volatile int16_t x859 = 5672;
	static int32_t x860 = INT32_MIN;
	uint64_t t196 = 5713LLU;

    t196 = (((x857/x858)+x859)%x860);

    if (t196 != 5672LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x862 = 5U;
	int64_t x863 = INT64_MIN;
	int64_t x864 = -34806608944LL;
	volatile uint64_t t197 = 173867257319339LLU;

    t197 = (((x861/x862)+x863)%x864);

    if (t197 != 12912720851596686131LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x869 = INT8_MAX;
	static uint32_t x870 = 2U;
	static int8_t x871 = INT8_MIN;
	static int32_t x872 = -1;
	static volatile uint32_t t198 = 2191455U;

    t198 = (((x869/x870)+x871)%x872);

    if (t198 != 4294967231U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x873 = INT8_MAX;
	int8_t x876 = -1;
	int64_t t199 = -16609237LL;

    t199 = (((x873/x874)+x875)%x876);

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

