
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

int8_t x1 = INT8_MIN;
int16_t x5 = -248;
int32_t t1 = 1077345;
static int16_t x16 = 1647;
int64_t x18 = -1LL;
static uint32_t x22 = 375301612U;
int32_t t5 = 121634;
volatile uint16_t x27 = UINT16_MAX;
int16_t x31 = 2;
int16_t x32 = INT16_MIN;
int32_t t7 = 6258338;
uint32_t x34 = 2948792U;
static uint32_t x35 = UINT32_MAX;
volatile int32_t t8 = -11;
uint16_t x51 = 5256U;
static uint64_t x52 = 10261641483355LLU;
uint16_t x53 = 42U;
volatile int32_t t13 = -13420791;
volatile int8_t x62 = INT8_MIN;
volatile uint32_t x67 = 2U;
int8_t x70 = INT8_MIN;
int32_t t19 = 0;
static int32_t x84 = 259838;
int32_t t21 = 1195;
volatile uint64_t x89 = 686253LLU;
static int64_t x90 = -5301356LL;
static volatile int8_t x92 = INT8_MIN;
int32_t x93 = -1;
int16_t x96 = INT16_MIN;
uint32_t x98 = 44517U;
static volatile int16_t x102 = -1;
volatile int32_t t25 = -486824410;
int8_t x113 = INT8_MIN;
volatile int8_t x114 = -5;
uint64_t x116 = 1LLU;
int32_t t29 = -164114;
static uint8_t x128 = 22U;
int16_t x133 = INT16_MAX;
uint32_t x134 = 30U;
int64_t x165 = INT64_MIN;
static volatile int32_t t41 = 2;
static uint8_t x173 = 18U;
int64_t x178 = INT64_MIN;
int32_t x181 = -1;
int16_t x184 = INT16_MIN;
int16_t x189 = 1569;
int32_t t47 = 58876301;
int32_t x202 = INT32_MIN;
int32_t t50 = -645;
int32_t t51 = -3864635;
volatile uint16_t x211 = 291U;
volatile uint64_t x215 = 2088095LLU;
int32_t x216 = INT32_MIN;
volatile int32_t t55 = -807248;
volatile uint8_t x227 = UINT8_MAX;
static int32_t t56 = -235148747;
int8_t x233 = INT8_MAX;
static int64_t x236 = 462979LL;
int64_t x237 = 1114LL;
int16_t x239 = -71;
int32_t x240 = 101;
uint8_t x242 = 3U;
uint32_t x246 = 97523031U;
int16_t x262 = INT16_MIN;
uint8_t x283 = 24U;
static int32_t t72 = 5;
int16_t x297 = INT16_MIN;
int32_t x299 = INT32_MIN;
int16_t x302 = 3;
static uint64_t x308 = 876593LLU;
int64_t x322 = INT64_MAX;
static uint8_t x324 = 1U;
int8_t x331 = -1;
uint8_t x333 = 28U;
volatile int8_t x338 = INT8_MIN;
int64_t x344 = -1LL;
int8_t x352 = -3;
volatile int32_t t87 = -218356005;
int8_t x353 = INT8_MAX;
static uint32_t x355 = 0U;
int64_t x357 = INT64_MAX;
int32_t x358 = -646151116;
volatile int32_t x359 = -10015931;
static volatile int32_t x367 = 26953478;
int64_t x374 = -12197189007587LL;
int32_t t94 = -83;
static int64_t x382 = 12200768701136LL;
int32_t x384 = -6;
uint32_t x386 = 403U;
int16_t x387 = INT16_MIN;
uint64_t x397 = 1851100057LLU;
int16_t x404 = INT16_MAX;
int8_t x412 = -11;
volatile uint16_t x417 = UINT16_MAX;
static int16_t x419 = -1;
uint64_t x422 = 77LLU;
static int32_t x425 = INT32_MAX;
uint64_t x432 = 113123LLU;
int64_t x435 = INT64_MIN;
int32_t x437 = -1;
uint32_t x439 = 29U;
volatile uint8_t x444 = 3U;
volatile int32_t t110 = -149154;
int64_t x445 = INT64_MIN;
int64_t x448 = INT64_MAX;
int16_t x454 = INT16_MAX;
static uint16_t x462 = 3638U;
static uint64_t x475 = UINT64_MAX;
volatile int32_t t119 = -13336;
uint64_t x487 = UINT64_MAX;
int64_t x490 = 138497546945523950LL;
int32_t x494 = INT32_MIN;
volatile int32_t t125 = 741014;
volatile int8_t x512 = INT8_MAX;
int64_t x514 = 7982961343252802LL;
uint16_t x515 = UINT16_MAX;
int16_t x517 = INT16_MAX;
int32_t x521 = INT32_MIN;
int32_t x524 = 21070926;
int8_t x535 = -1;
volatile int64_t x536 = 0LL;
static volatile uint32_t x538 = 765U;
int64_t x539 = INT64_MAX;
static int32_t t134 = -13418480;
uint8_t x542 = UINT8_MAX;
int32_t x546 = 11727707;
int32_t t136 = 33750;
int16_t x550 = INT16_MIN;
volatile int32_t x551 = -1;
int8_t x555 = -1;
int64_t x557 = INT64_MIN;
volatile int8_t x573 = 12;
volatile uint8_t x574 = 6U;
int8_t x578 = -1;
int16_t x580 = INT16_MIN;
int64_t x581 = -1LL;
volatile int64_t x583 = -1487LL;
int32_t t147 = -75;
static int32_t t148 = -53651612;
int16_t x600 = -7;
static uint32_t x601 = 14U;
int8_t x604 = INT8_MIN;
volatile int32_t t150 = 30809408;
uint16_t x608 = UINT16_MAX;
int32_t x616 = INT32_MIN;
uint32_t x619 = UINT32_MAX;
static int64_t x621 = -1LL;
int64_t x627 = INT64_MIN;
int8_t x628 = -1;
int64_t x633 = 1LL;
volatile int32_t t159 = 54;
int32_t t160 = 94464184;
int8_t x647 = INT8_MAX;
volatile int32_t t163 = -3963177;
volatile int32_t t166 = -1665;
int64_t x680 = -5LL;
volatile uint32_t x684 = 798993867U;
uint8_t x694 = UINT8_MAX;
volatile int32_t x695 = -1;
int64_t x702 = INT64_MIN;
int64_t x703 = INT64_MIN;
uint32_t x705 = UINT32_MAX;
volatile int32_t t177 = -2;
int32_t x722 = 174;
volatile int16_t x728 = INT16_MAX;
int8_t x734 = -1;
int32_t x749 = INT32_MIN;
uint8_t x754 = 9U;
static int32_t t190 = 1720644;
volatile int32_t t191 = 16330;
static int32_t x769 = INT32_MIN;
uint8_t x770 = 6U;
volatile uint16_t x776 = 6598U;
static int32_t t195 = -3073329;
int32_t x788 = -1;
uint64_t x792 = 455830LLU;
uint8_t x795 = UINT8_MAX;
int32_t t198 = 1;


void f0(void) {
    	static int16_t x2 = INT16_MAX;
	uint64_t x3 = 613313081LLU;
	static uint64_t x4 = 40LLU;
	static int32_t t0 = -13038702;

    t0 = ((x1|x2)<=(x3<=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x6 = INT64_MIN;
	int64_t x7 = INT64_MAX;
	static int32_t x8 = INT32_MIN;

    t1 = ((x5|x6)<=(x7<=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 6U;
	static uint64_t x10 = 299731189385LLU;
	static uint32_t x11 = 242U;
	uint64_t x12 = 553423LLU;
	int32_t t2 = -11889;

    t2 = ((x9|x10)<=(x11<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MIN;
	static int16_t x15 = INT16_MAX;
	volatile int32_t t3 = -409508;

    t3 = ((x13|x14)<=(x15<=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = INT8_MIN;
	int8_t x19 = -57;
	int32_t x20 = -1;
	static volatile int32_t t4 = -20038;

    t4 = ((x17|x18)<=(x19<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = -326301033;
	static volatile int32_t x23 = INT32_MIN;
	static int32_t x24 = -10771;

    t5 = ((x21|x22)<=(x23<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x25 = UINT32_MAX;
	int8_t x26 = INT8_MIN;
	volatile int64_t x28 = INT64_MIN;
	volatile int32_t t6 = 14;

    t6 = ((x25|x26)<=(x27<=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 2;
	volatile int64_t x30 = INT64_MAX;

    t7 = ((x29|x30)<=(x31<=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = INT32_MAX;
	int64_t x36 = INT64_MAX;

    t8 = ((x33|x34)<=(x35<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	int32_t x38 = -720036;
	uint64_t x39 = 28640656LLU;
	uint32_t x40 = 279320700U;
	static int32_t t9 = -5758;

    t9 = ((x37|x38)<=(x39<=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = UINT32_MAX;
	int8_t x42 = INT8_MIN;
	volatile uint64_t x43 = 635793765789885LLU;
	int32_t x44 = INT32_MAX;
	volatile int32_t t10 = -7336153;

    t10 = ((x41|x42)<=(x43<=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x45 = INT16_MAX;
	static uint8_t x46 = 2U;
	int8_t x47 = INT8_MAX;
	int32_t x48 = INT32_MAX;
	static volatile int32_t t11 = -134;

    t11 = ((x45|x46)<=(x47<=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	static uint64_t x50 = UINT64_MAX;
	int32_t t12 = -29958974;

    t12 = ((x49|x50)<=(x51<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint16_t x54 = UINT16_MAX;
	volatile uint8_t x55 = UINT8_MAX;
	int8_t x56 = INT8_MAX;

    t13 = ((x53|x54)<=(x55<=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = INT8_MIN;
	int16_t x58 = INT16_MIN;
	volatile uint64_t x59 = UINT64_MAX;
	volatile int16_t x60 = -1;
	int32_t t14 = 499585621;

    t14 = ((x57|x58)<=(x59<=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MAX;
	int16_t x63 = INT16_MIN;
	uint16_t x64 = 0U;
	static volatile int32_t t15 = -8176299;

    t15 = ((x61|x62)<=(x63<=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x65 = 1591435654468LLU;
	static int64_t x66 = INT64_MIN;
	int8_t x68 = 3;
	static int32_t t16 = -216034;

    t16 = ((x65|x66)<=(x67<=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = INT8_MIN;
	int32_t x71 = INT32_MAX;
	int64_t x72 = 3311726632371LL;
	int32_t t17 = 81;

    t17 = ((x69|x70)<=(x71<=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -33;
	int8_t x74 = INT8_MAX;
	int16_t x75 = INT16_MAX;
	uint16_t x76 = UINT16_MAX;
	static volatile int32_t t18 = 341;

    t18 = ((x73|x74)<=(x75<=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x77 = INT64_MIN;
	static uint64_t x78 = UINT64_MAX;
	static int32_t x79 = -5973689;
	volatile uint16_t x80 = 2U;

    t19 = ((x77|x78)<=(x79<=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = 13591LL;
	static int32_t x82 = -1;
	uint32_t x83 = 387U;
	static int32_t t20 = -4031;

    t20 = ((x81|x82)<=(x83<=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -129176LL;
	int16_t x86 = INT16_MAX;
	uint8_t x87 = 2U;
	uint64_t x88 = 139742895473328LLU;

    t21 = ((x85|x86)<=(x87<=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x91 = 486597997LLU;
	static volatile int32_t t22 = 195453;

    t22 = ((x89|x90)<=(x91<=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x94 = 2U;
	static int16_t x95 = INT16_MIN;
	volatile int32_t t23 = -124907475;

    t23 = ((x93|x94)<=(x95<=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x97 = 144906249LLU;
	int8_t x99 = 1;
	uint8_t x100 = 1U;
	int32_t t24 = -14;

    t24 = ((x97|x98)<=(x99<=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 3378U;
	volatile int16_t x103 = INT16_MAX;
	uint16_t x104 = UINT16_MAX;

    t25 = ((x101|x102)<=(x103<=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = INT16_MAX;
	static volatile int64_t x106 = -5476373323205226LL;
	int32_t x107 = INT32_MAX;
	uint32_t x108 = 11723U;
	volatile int32_t t26 = -899;

    t26 = ((x105|x106)<=(x107<=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	uint32_t x110 = 10U;
	int64_t x111 = -409LL;
	static int8_t x112 = INT8_MAX;
	volatile int32_t t27 = 766;

    t27 = ((x109|x110)<=(x111<=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x115 = 1;
	volatile int32_t t28 = 1;

    t28 = ((x113|x114)<=(x115<=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x117 = UINT32_MAX;
	int64_t x118 = 1438LL;
	static int64_t x119 = 2050786521LL;
	int8_t x120 = INT8_MIN;

    t29 = ((x117|x118)<=(x119<=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x121 = INT32_MAX;
	int16_t x122 = INT16_MAX;
	uint64_t x123 = UINT64_MAX;
	volatile uint8_t x124 = 2U;
	int32_t t30 = 0;

    t30 = ((x121|x122)<=(x123<=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 1096403534U;
	static int16_t x126 = -1;
	int16_t x127 = 103;
	static volatile int32_t t31 = -13423272;

    t31 = ((x125|x126)<=(x127<=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = INT64_MIN;
	uint16_t x130 = 264U;
	static int32_t x131 = INT32_MIN;
	volatile int64_t x132 = -1LL;
	static volatile int32_t t32 = 3878;

    t32 = ((x129|x130)<=(x131<=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x135 = -1LL;
	static int32_t x136 = -466184506;
	int32_t t33 = 425;

    t33 = ((x133|x134)<=(x135<=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MAX;
	int16_t x138 = -1;
	volatile int64_t x139 = -1LL;
	int16_t x140 = INT16_MIN;
	int32_t t34 = 54396044;

    t34 = ((x137|x138)<=(x139<=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x141 = UINT64_MAX;
	static uint32_t x142 = 7U;
	int32_t x143 = -14;
	int16_t x144 = -1;
	int32_t t35 = -466719;

    t35 = ((x141|x142)<=(x143<=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MAX;
	uint64_t x146 = UINT64_MAX;
	int32_t x147 = -417822887;
	uint32_t x148 = 25989818U;
	int32_t t36 = -547522014;

    t36 = ((x145|x146)<=(x147<=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x149 = -1;
	uint16_t x150 = 22U;
	int8_t x151 = INT8_MIN;
	volatile int8_t x152 = INT8_MIN;
	int32_t t37 = -364;

    t37 = ((x149|x150)<=(x151<=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MAX;
	int16_t x154 = -1;
	int16_t x155 = -92;
	volatile int16_t x156 = INT16_MAX;
	volatile int32_t t38 = -66544955;

    t38 = ((x153|x154)<=(x155<=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = UINT16_MAX;
	volatile uint8_t x158 = UINT8_MAX;
	int32_t x159 = -1;
	volatile int64_t x160 = INT64_MIN;
	static int32_t t39 = -114;

    t39 = ((x157|x158)<=(x159<=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = -1LL;
	int64_t x162 = INT64_MAX;
	int16_t x163 = INT16_MIN;
	static int8_t x164 = 3;
	int32_t t40 = 478;

    t40 = ((x161|x162)<=(x163<=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint16_t x166 = 3853U;
	static int16_t x167 = INT16_MIN;
	volatile int16_t x168 = INT16_MIN;

    t41 = ((x165|x166)<=(x167<=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x169 = 794511937994242LLU;
	uint32_t x170 = 1599405U;
	uint64_t x171 = 151LLU;
	int8_t x172 = INT8_MIN;
	int32_t t42 = -25686834;

    t42 = ((x169|x170)<=(x171<=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x174 = 54U;
	int32_t x175 = 267272042;
	int8_t x176 = -1;
	int32_t t43 = 132699281;

    t43 = ((x173|x174)<=(x175<=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = -1;
	volatile int32_t x179 = INT32_MIN;
	volatile int16_t x180 = INT16_MAX;
	static int32_t t44 = 4550;

    t44 = ((x177|x178)<=(x179<=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x182 = INT16_MIN;
	uint16_t x183 = UINT16_MAX;
	volatile int32_t t45 = 0;

    t45 = ((x181|x182)<=(x183<=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -21;
	int64_t x186 = -26357LL;
	int64_t x187 = INT64_MIN;
	static int16_t x188 = INT16_MIN;
	volatile int32_t t46 = -30855902;

    t46 = ((x185|x186)<=(x187<=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = -1;
	uint8_t x191 = 4U;
	static int64_t x192 = 124237LL;

    t47 = ((x189|x190)<=(x191<=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	static int32_t x194 = INT32_MAX;
	uint32_t x195 = 1754863U;
	volatile int8_t x196 = -3;
	volatile int32_t t48 = -494143025;

    t48 = ((x193|x194)<=(x195<=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	int8_t x198 = 0;
	uint32_t x199 = 1113097091U;
	volatile int8_t x200 = -1;
	volatile int32_t t49 = 4;

    t49 = ((x197|x198)<=(x199<=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -34;
	volatile uint32_t x203 = 0U;
	int16_t x204 = -245;

    t50 = ((x201|x202)<=(x203<=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = -1;
	volatile int64_t x206 = INT64_MIN;
	int32_t x207 = -1;
	uint64_t x208 = UINT64_MAX;

    t51 = ((x205|x206)<=(x207<=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = UINT16_MAX;
	static int64_t x210 = -1LL;
	int16_t x212 = INT16_MIN;
	volatile int32_t t52 = -3923;

    t52 = ((x209|x210)<=(x211<=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MAX;
	uint8_t x214 = 5U;
	int32_t t53 = -520883186;

    t53 = ((x213|x214)<=(x215<=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x217 = 35844305LL;
	uint64_t x218 = UINT64_MAX;
	int8_t x219 = -20;
	volatile int8_t x220 = -1;
	volatile int32_t t54 = 256975;

    t54 = ((x217|x218)<=(x219<=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	static uint64_t x222 = 4LLU;
	int16_t x223 = -6;
	int32_t x224 = INT32_MAX;

    t55 = ((x221|x222)<=(x223<=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MAX;
	uint8_t x226 = 2U;
	volatile int16_t x228 = INT16_MAX;

    t56 = ((x225|x226)<=(x227<=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x229 = 6U;
	int8_t x230 = INT8_MIN;
	uint32_t x231 = 6588U;
	int64_t x232 = INT64_MIN;
	int32_t t57 = -132686;

    t57 = ((x229|x230)<=(x231<=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x234 = INT16_MIN;
	static uint64_t x235 = 329474909926898LLU;
	volatile int32_t t58 = 567209;

    t58 = ((x233|x234)<=(x235<=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x238 = INT8_MIN;
	int32_t t59 = -7;

    t59 = ((x237|x238)<=(x239<=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x241 = 3U;
	int16_t x243 = 42;
	volatile int8_t x244 = INT8_MIN;
	static int32_t t60 = -1713905;

    t60 = ((x241|x242)<=(x243<=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x245 = -1;
	int32_t x247 = -7;
	static volatile int32_t x248 = INT32_MIN;
	static int32_t t61 = 235148005;

    t61 = ((x245|x246)<=(x247<=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 7U;
	uint32_t x250 = 452166606U;
	volatile uint16_t x251 = 6U;
	int8_t x252 = -1;
	int32_t t62 = 2;

    t62 = ((x249|x250)<=(x251<=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MIN;
	static volatile int64_t x254 = 65844716584LL;
	static int64_t x255 = -1LL;
	volatile int16_t x256 = -938;
	static volatile int32_t t63 = 5469;

    t63 = ((x253|x254)<=(x255<=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint32_t x257 = 2100256446U;
	static volatile int16_t x258 = INT16_MIN;
	uint16_t x259 = 746U;
	static uint32_t x260 = 706766U;
	volatile int32_t t64 = -332023172;

    t64 = ((x257|x258)<=(x259<=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = UINT16_MAX;
	static int64_t x263 = INT64_MIN;
	int16_t x264 = 29;
	volatile int32_t t65 = -1;

    t65 = ((x261|x262)<=(x263<=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = -1LL;
	uint8_t x266 = 31U;
	static uint32_t x267 = 86U;
	static uint32_t x268 = UINT32_MAX;
	int32_t t66 = -569;

    t66 = ((x265|x266)<=(x267<=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = 30708522706LL;
	int16_t x270 = 125;
	uint64_t x271 = 1146623341395388LLU;
	static volatile uint64_t x272 = 331LLU;
	int32_t t67 = 10304;

    t67 = ((x269|x270)<=(x271<=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x273 = 48;
	int32_t x274 = INT32_MAX;
	int32_t x275 = INT32_MAX;
	static int16_t x276 = 0;
	static volatile int32_t t68 = 207329728;

    t68 = ((x273|x274)<=(x275<=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = -1;
	int16_t x278 = INT16_MAX;
	uint32_t x279 = UINT32_MAX;
	int16_t x280 = -1;
	static int32_t t69 = -1731091;

    t69 = ((x277|x278)<=(x279<=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 662284U;
	int16_t x282 = -1;
	static uint8_t x284 = UINT8_MAX;
	volatile int32_t t70 = -2;

    t70 = ((x281|x282)<=(x283<=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	uint64_t x286 = UINT64_MAX;
	int16_t x287 = 444;
	int32_t x288 = -1;
	int32_t t71 = 3;

    t71 = ((x285|x286)<=(x287<=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x289 = INT16_MIN;
	int32_t x290 = INT32_MIN;
	uint32_t x291 = UINT32_MAX;
	volatile int64_t x292 = 14948LL;

    t72 = ((x289|x290)<=(x291<=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = -60592;
	int64_t x294 = INT64_MIN;
	int32_t x295 = -1;
	int16_t x296 = -10474;
	int32_t t73 = -537396584;

    t73 = ((x293|x294)<=(x295<=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x298 = INT64_MAX;
	int16_t x300 = INT16_MIN;
	volatile int32_t t74 = -29;

    t74 = ((x297|x298)<=(x299<=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = 3;
	int64_t x303 = -1LL;
	int8_t x304 = -1;
	volatile int32_t t75 = -712;

    t75 = ((x301|x302)<=(x303<=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 1351U;
	static volatile int32_t x306 = INT32_MIN;
	uint16_t x307 = 1820U;
	int32_t t76 = 293122;

    t76 = ((x305|x306)<=(x307<=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -1;
	int16_t x310 = -396;
	int64_t x311 = -1LL;
	int8_t x312 = INT8_MAX;
	int32_t t77 = -35111;

    t77 = ((x309|x310)<=(x311<=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 23U;
	static volatile int8_t x314 = -1;
	int8_t x315 = -31;
	int8_t x316 = -2;
	static int32_t t78 = 533;

    t78 = ((x313|x314)<=(x315<=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = 15519697LL;
	int16_t x318 = -1;
	int16_t x319 = INT16_MIN;
	static int16_t x320 = 327;
	int32_t t79 = -3863;

    t79 = ((x317|x318)<=(x319<=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 49507182911876716LLU;
	int64_t x323 = INT64_MIN;
	volatile int32_t t80 = 315;

    t80 = ((x321|x322)<=(x323<=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 92U;
	static uint8_t x326 = 15U;
	volatile int8_t x327 = -5;
	int64_t x328 = -1LL;
	volatile int32_t t81 = -118;

    t81 = ((x325|x326)<=(x327<=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MAX;
	static int64_t x330 = -6236063146LL;
	uint8_t x332 = 3U;
	int32_t t82 = -2;

    t82 = ((x329|x330)<=(x331<=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x334 = 1618U;
	int8_t x335 = -1;
	uint32_t x336 = 357574U;
	int32_t t83 = -228026476;

    t83 = ((x333|x334)<=(x335<=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = UINT16_MAX;
	int8_t x339 = -1;
	int16_t x340 = INT16_MAX;
	volatile int32_t t84 = -703230635;

    t84 = ((x337|x338)<=(x339<=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = UINT16_MAX;
	static int8_t x342 = INT8_MIN;
	int64_t x343 = 45130190LL;
	int32_t t85 = 256904952;

    t85 = ((x341|x342)<=(x343<=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x345 = 0;
	static int32_t x346 = INT32_MIN;
	int16_t x347 = -1;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t86 = 59704;

    t86 = ((x345|x346)<=(x347<=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MIN;
	static int32_t x350 = INT32_MIN;
	int8_t x351 = INT8_MAX;

    t87 = ((x349|x350)<=(x351<=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x354 = -1;
	int64_t x356 = -1752361960537032LL;
	int32_t t88 = 307942929;

    t88 = ((x353|x354)<=(x355<=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x360 = INT8_MIN;
	static volatile int32_t t89 = 2466;

    t89 = ((x357|x358)<=(x359<=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = 40U;
	int64_t x362 = 962289490LL;
	int32_t x363 = 1;
	int16_t x364 = INT16_MIN;
	int32_t t90 = -44865;

    t90 = ((x361|x362)<=(x363<=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = UINT32_MAX;
	static int64_t x366 = INT64_MAX;
	uint8_t x368 = UINT8_MAX;
	int32_t t91 = -1260555;

    t91 = ((x365|x366)<=(x367<=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = 0U;
	uint64_t x370 = 112207LLU;
	int16_t x371 = -34;
	static int64_t x372 = INT64_MIN;
	volatile int32_t t92 = -106293;

    t92 = ((x369|x370)<=(x371<=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = 87LL;
	volatile int32_t x375 = 9;
	static volatile int8_t x376 = INT8_MIN;
	int32_t t93 = -1;

    t93 = ((x373|x374)<=(x375<=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = -2;
	int16_t x378 = 50;
	int64_t x379 = -1LL;
	static volatile int8_t x380 = -3;

    t94 = ((x377|x378)<=(x379<=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = 477126980079LL;
	volatile int32_t x383 = -9;
	volatile int32_t t95 = 3666;

    t95 = ((x381|x382)<=(x383<=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int64_t x385 = -7167746650140322LL;
	static int32_t x388 = -19;
	int32_t t96 = 430;

    t96 = ((x385|x386)<=(x387<=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	uint16_t x390 = UINT16_MAX;
	int16_t x391 = 29;
	int8_t x392 = 62;
	volatile int32_t t97 = 78183;

    t97 = ((x389|x390)<=(x391<=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -1;
	int8_t x394 = INT8_MIN;
	volatile int64_t x395 = INT64_MAX;
	uint8_t x396 = 31U;
	int32_t t98 = -407;

    t98 = ((x393|x394)<=(x395<=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int64_t x398 = 15813470LL;
	int32_t x399 = -1;
	static volatile uint64_t x400 = 77361585481691LLU;
	volatile int32_t t99 = -1;

    t99 = ((x397|x398)<=(x399<=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	int8_t x402 = 0;
	static int8_t x403 = -3;
	int32_t t100 = 0;

    t100 = ((x401|x402)<=(x403<=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 1370U;
	int64_t x406 = 165477952456534LL;
	volatile int8_t x407 = -1;
	uint16_t x408 = 6U;
	int32_t t101 = -35226956;

    t101 = ((x405|x406)<=(x407<=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	int32_t x410 = INT32_MIN;
	static int32_t x411 = INT32_MIN;
	volatile int32_t t102 = 3748;

    t102 = ((x409|x410)<=(x411<=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x413 = 34;
	static int32_t x414 = INT32_MIN;
	int16_t x415 = INT16_MAX;
	int8_t x416 = 0;
	int32_t t103 = -27;

    t103 = ((x413|x414)<=(x415<=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x418 = INT8_MIN;
	int64_t x420 = INT64_MAX;
	volatile int32_t t104 = 85343;

    t104 = ((x417|x418)<=(x419<=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = 6236502;
	uint16_t x423 = 0U;
	int64_t x424 = INT64_MAX;
	int32_t t105 = -7;

    t105 = ((x421|x422)<=(x423<=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x426 = INT32_MIN;
	int8_t x427 = 1;
	int8_t x428 = 7;
	static int32_t t106 = 341627;

    t106 = ((x425|x426)<=(x427<=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MIN;
	uint8_t x430 = 0U;
	int16_t x431 = INT16_MIN;
	int32_t t107 = 3592980;

    t107 = ((x429|x430)<=(x431<=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x433 = INT16_MIN;
	int8_t x434 = -20;
	int32_t x436 = INT32_MAX;
	int32_t t108 = 1999469;

    t108 = ((x433|x434)<=(x435<=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x438 = 1;
	int32_t x440 = INT32_MIN;
	volatile int32_t t109 = -4;

    t109 = ((x437|x438)<=(x439<=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x441 = -1LL;
	int8_t x442 = 0;
	uint64_t x443 = 1319358311479270183LLU;

    t110 = ((x441|x442)<=(x443<=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x446 = -1LL;
	int8_t x447 = INT8_MIN;
	int32_t t111 = 47544049;

    t111 = ((x445|x446)<=(x447<=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x449 = INT8_MIN;
	volatile int32_t x450 = INT32_MIN;
	volatile uint32_t x451 = 528U;
	int8_t x452 = INT8_MIN;
	static int32_t t112 = 13401;

    t112 = ((x449|x450)<=(x451<=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = 51871998LLU;
	volatile uint64_t x455 = 0LLU;
	uint32_t x456 = 7U;
	volatile int32_t t113 = -5;

    t113 = ((x453|x454)<=(x455<=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = UINT32_MAX;
	int8_t x458 = -1;
	int32_t x459 = 0;
	static int8_t x460 = 13;
	volatile int32_t t114 = 5304117;

    t114 = ((x457|x458)<=(x459<=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x461 = 215;
	uint16_t x463 = UINT16_MAX;
	int8_t x464 = -1;
	volatile int32_t t115 = -57549540;

    t115 = ((x461|x462)<=(x463<=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MAX;
	uint64_t x466 = 719680LLU;
	int64_t x467 = -1LL;
	int8_t x468 = -1;
	volatile int32_t t116 = -27439;

    t116 = ((x465|x466)<=(x467<=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MAX;
	volatile int32_t x470 = 64747;
	int32_t x471 = INT32_MIN;
	volatile uint8_t x472 = 5U;
	static int32_t t117 = 33691893;

    t117 = ((x469|x470)<=(x471<=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MIN;
	int64_t x474 = -317595LL;
	volatile int64_t x476 = -1LL;
	volatile int32_t t118 = 0;

    t118 = ((x473|x474)<=(x475<=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = UINT16_MAX;
	uint32_t x478 = UINT32_MAX;
	volatile uint32_t x479 = 23U;
	int8_t x480 = 45;

    t119 = ((x477|x478)<=(x479<=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = UINT64_MAX;
	volatile int8_t x482 = -1;
	int8_t x483 = 1;
	int32_t x484 = 15;
	int32_t t120 = 17309782;

    t120 = ((x481|x482)<=(x483<=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 1U;
	int16_t x486 = -1;
	static uint16_t x488 = 12U;
	volatile int32_t t121 = -95979;

    t121 = ((x485|x486)<=(x487<=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -49;
	static int32_t x491 = -1;
	int8_t x492 = INT8_MAX;
	volatile int32_t t122 = 49362;

    t122 = ((x489|x490)<=(x491<=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 27922073LLU;
	static int16_t x495 = -1;
	int64_t x496 = 1LL;
	volatile int32_t t123 = -1;

    t123 = ((x493|x494)<=(x495<=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -1;
	uint32_t x498 = 140232U;
	int16_t x499 = INT16_MIN;
	int64_t x500 = INT64_MIN;
	int32_t t124 = -2379;

    t124 = ((x497|x498)<=(x499<=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = 0;
	uint64_t x502 = 2397LLU;
	static uint32_t x503 = 14881U;
	uint64_t x504 = 436752286863833LLU;

    t125 = ((x501|x502)<=(x503<=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x505 = 13U;
	int8_t x506 = INT8_MAX;
	uint16_t x507 = 1U;
	volatile int16_t x508 = INT16_MAX;
	int32_t t126 = -494455;

    t126 = ((x505|x506)<=(x507<=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 1U;
	uint64_t x510 = 1537609LLU;
	int8_t x511 = -46;
	volatile int32_t t127 = 15907236;

    t127 = ((x509|x510)<=(x511<=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x513 = UINT32_MAX;
	int8_t x516 = -1;
	int32_t t128 = -211;

    t128 = ((x513|x514)<=(x515<=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x518 = INT16_MIN;
	int64_t x519 = INT64_MIN;
	int32_t x520 = -1;
	static int32_t t129 = 1312;

    t129 = ((x517|x518)<=(x519<=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x522 = -1069431727;
	int8_t x523 = INT8_MAX;
	int32_t t130 = -17810345;

    t130 = ((x521|x522)<=(x523<=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MAX;
	uint64_t x526 = 291LLU;
	static int64_t x527 = -7688383LL;
	int16_t x528 = -1;
	int32_t t131 = 3;

    t131 = ((x525|x526)<=(x527<=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x529 = -1LL;
	int8_t x530 = -1;
	int32_t x531 = -1;
	static int8_t x532 = 6;
	volatile int32_t t132 = 13118;

    t132 = ((x529|x530)<=(x531<=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = -12;
	uint8_t x534 = 28U;
	int32_t t133 = 269182932;

    t133 = ((x533|x534)<=(x535<=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MAX;
	static uint8_t x540 = 32U;

    t134 = ((x537|x538)<=(x539<=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = UINT64_MAX;
	int32_t x543 = -320515833;
	uint16_t x544 = 8894U;
	volatile int32_t t135 = -1;

    t135 = ((x541|x542)<=(x543<=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x545 = 21LLU;
	int16_t x547 = INT16_MIN;
	int16_t x548 = -1;

    t136 = ((x545|x546)<=(x547<=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MIN;
	int8_t x552 = -1;
	volatile int32_t t137 = 4;

    t137 = ((x549|x550)<=(x551<=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 1761294U;
	static int8_t x554 = INT8_MIN;
	static uint32_t x556 = UINT32_MAX;
	static int32_t t138 = 211276543;

    t138 = ((x553|x554)<=(x555<=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x558 = INT16_MIN;
	int32_t x559 = INT32_MAX;
	int64_t x560 = -1LL;
	static volatile int32_t t139 = 1105634;

    t139 = ((x557|x558)<=(x559<=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = UINT32_MAX;
	volatile int64_t x562 = INT64_MAX;
	uint8_t x563 = UINT8_MAX;
	volatile int64_t x564 = 6LL;
	volatile int32_t t140 = 1805824;

    t140 = ((x561|x562)<=(x563<=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = 70;
	uint64_t x566 = 167963LLU;
	volatile int32_t x567 = INT32_MAX;
	volatile int16_t x568 = -1;
	volatile int32_t t141 = 19;

    t141 = ((x565|x566)<=(x567<=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -8LL;
	static volatile int32_t x570 = 5210571;
	volatile int8_t x571 = -1;
	int32_t x572 = INT32_MAX;
	int32_t t142 = -6271;

    t142 = ((x569|x570)<=(x571<=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x575 = INT64_MIN;
	int16_t x576 = INT16_MIN;
	volatile int32_t t143 = 72;

    t143 = ((x573|x574)<=(x575<=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	int32_t x579 = -1;
	int32_t t144 = -2925;

    t144 = ((x577|x578)<=(x579<=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x582 = INT16_MIN;
	int16_t x584 = -1;
	int32_t t145 = -18;

    t145 = ((x581|x582)<=(x583<=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x585 = -1321024;
	volatile int16_t x586 = INT16_MIN;
	volatile int32_t x587 = -1;
	uint32_t x588 = UINT32_MAX;
	volatile int32_t t146 = -5122032;

    t146 = ((x585|x586)<=(x587<=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = UINT16_MAX;
	static int8_t x590 = INT8_MIN;
	int64_t x591 = 2073066677587582993LL;
	int32_t x592 = INT32_MIN;

    t147 = ((x589|x590)<=(x591<=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = 1U;
	int16_t x594 = -1;
	static uint16_t x595 = 6204U;
	int16_t x596 = -186;

    t148 = ((x593|x594)<=(x595<=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = UINT8_MAX;
	uint16_t x598 = UINT16_MAX;
	uint64_t x599 = 1145692383173887415LLU;
	volatile int32_t t149 = 9750;

    t149 = ((x597|x598)<=(x599<=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x602 = UINT32_MAX;
	volatile int64_t x603 = -541LL;

    t150 = ((x601|x602)<=(x603<=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	uint16_t x606 = 1U;
	volatile int16_t x607 = 3;
	int32_t t151 = 0;

    t151 = ((x605|x606)<=(x607<=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x609 = UINT64_MAX;
	volatile int8_t x610 = INT8_MIN;
	int32_t x611 = INT32_MIN;
	int64_t x612 = 201LL;
	int32_t t152 = -3;

    t152 = ((x609|x610)<=(x611<=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = 986U;
	int32_t x614 = 5712;
	uint8_t x615 = 3U;
	int32_t t153 = 44416749;

    t153 = ((x613|x614)<=(x615<=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x617 = 3061U;
	int64_t x618 = INT64_MIN;
	uint16_t x620 = 74U;
	volatile int32_t t154 = -128;

    t154 = ((x617|x618)<=(x619<=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x622 = -1;
	static int64_t x623 = -49LL;
	volatile uint8_t x624 = 64U;
	volatile int32_t t155 = 22;

    t155 = ((x621|x622)<=(x623<=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MAX;
	static volatile int8_t x626 = 17;
	volatile int32_t t156 = -497;

    t156 = ((x625|x626)<=(x627<=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = 39;
	uint32_t x630 = UINT32_MAX;
	int32_t x631 = -1;
	int8_t x632 = 61;
	static volatile int32_t t157 = -4;

    t157 = ((x629|x630)<=(x631<=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x634 = -2193;
	uint8_t x635 = 1U;
	int32_t x636 = INT32_MAX;
	volatile int32_t t158 = 1062402280;

    t158 = ((x633|x634)<=(x635<=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = 1U;
	uint64_t x638 = 1541171802731930LLU;
	int16_t x639 = INT16_MAX;
	int32_t x640 = 17002;

    t159 = ((x637|x638)<=(x639<=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x641 = 1;
	int64_t x642 = INT64_MIN;
	int32_t x643 = -31157;
	uint16_t x644 = 1U;

    t160 = ((x641|x642)<=(x643<=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = UINT8_MAX;
	static int8_t x646 = 59;
	int32_t x648 = -1;
	volatile int32_t t161 = 203542;

    t161 = ((x645|x646)<=(x647<=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -1;
	int16_t x650 = INT16_MIN;
	int16_t x651 = INT16_MIN;
	uint16_t x652 = 0U;
	volatile int32_t t162 = -3;

    t162 = ((x649|x650)<=(x651<=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x653 = -38;
	int16_t x654 = INT16_MIN;
	int8_t x655 = INT8_MIN;
	int16_t x656 = INT16_MIN;

    t163 = ((x653|x654)<=(x655<=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = -1;
	volatile int64_t x658 = 527907255039644396LL;
	volatile int32_t x659 = INT32_MAX;
	int64_t x660 = 79321660831078787LL;
	static int32_t t164 = 452697754;

    t164 = ((x657|x658)<=(x659<=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x661 = INT16_MIN;
	uint32_t x662 = 783U;
	static int32_t x663 = INT32_MAX;
	int64_t x664 = -624301LL;
	static volatile int32_t t165 = 8092;

    t165 = ((x661|x662)<=(x663<=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MIN;
	static uint32_t x666 = 1815792U;
	static volatile int8_t x667 = INT8_MIN;
	uint32_t x668 = 59U;

    t166 = ((x665|x666)<=(x667<=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	static uint64_t x670 = 11964226LLU;
	volatile int32_t x671 = -267;
	int8_t x672 = 5;
	static volatile int32_t t167 = 1;

    t167 = ((x669|x670)<=(x671<=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x673 = 1097072752448800512LLU;
	static int64_t x674 = -781LL;
	volatile int64_t x675 = INT64_MIN;
	int16_t x676 = -13890;
	volatile int32_t t168 = 545026;

    t168 = ((x673|x674)<=(x675<=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MIN;
	int64_t x678 = 1611649351LL;
	int16_t x679 = INT16_MIN;
	volatile int32_t t169 = -31303;

    t169 = ((x677|x678)<=(x679<=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	static int16_t x682 = INT16_MIN;
	volatile int8_t x683 = -4;
	static volatile int32_t t170 = 1;

    t170 = ((x681|x682)<=(x683<=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = INT16_MIN;
	static int8_t x686 = INT8_MIN;
	static int32_t x687 = INT32_MAX;
	int16_t x688 = 1;
	static int32_t t171 = -1839044;

    t171 = ((x685|x686)<=(x687<=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = 50363377LL;
	int32_t x690 = INT32_MAX;
	uint8_t x691 = UINT8_MAX;
	static uint8_t x692 = UINT8_MAX;
	static volatile int32_t t172 = 5657;

    t172 = ((x689|x690)<=(x691<=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = UINT8_MAX;
	uint16_t x696 = 77U;
	volatile int32_t t173 = -605;

    t173 = ((x693|x694)<=(x695<=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -1;
	uint32_t x698 = 192U;
	volatile int16_t x699 = -10826;
	int8_t x700 = INT8_MIN;
	volatile int32_t t174 = -255;

    t174 = ((x697|x698)<=(x699<=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x701 = INT32_MAX;
	uint64_t x704 = 11LLU;
	volatile int32_t t175 = 2;

    t175 = ((x701|x702)<=(x703<=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x706 = INT16_MIN;
	static int8_t x707 = INT8_MIN;
	static volatile int8_t x708 = INT8_MIN;
	int32_t t176 = -2;

    t176 = ((x705|x706)<=(x707<=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MIN;
	volatile uint8_t x710 = UINT8_MAX;
	int16_t x711 = -1;
	int64_t x712 = -1LL;

    t177 = ((x709|x710)<=(x711<=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = 101U;
	volatile int8_t x714 = INT8_MIN;
	volatile uint64_t x715 = 7171LLU;
	volatile int8_t x716 = -4;
	static volatile int32_t t178 = 2392649;

    t178 = ((x713|x714)<=(x715<=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 5U;
	int64_t x718 = -127144961077910LL;
	static int64_t x719 = INT64_MAX;
	int8_t x720 = INT8_MIN;
	int32_t t179 = -138180;

    t179 = ((x717|x718)<=(x719<=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x721 = -32613411502LL;
	volatile uint8_t x723 = 19U;
	uint64_t x724 = UINT64_MAX;
	volatile int32_t t180 = -1;

    t180 = ((x721|x722)<=(x723<=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x725 = UINT16_MAX;
	static uint16_t x726 = 6036U;
	uint32_t x727 = 1628107639U;
	static volatile int32_t t181 = -149779;

    t181 = ((x725|x726)<=(x727<=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 0U;
	uint16_t x730 = 550U;
	int16_t x731 = 486;
	int32_t x732 = INT32_MIN;
	volatile int32_t t182 = 479869468;

    t182 = ((x729|x730)<=(x731<=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x733 = INT32_MIN;
	uint64_t x735 = UINT64_MAX;
	int16_t x736 = 2;
	int32_t t183 = 54697362;

    t183 = ((x733|x734)<=(x735<=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x737 = INT64_MIN;
	int64_t x738 = -128975852LL;
	int8_t x739 = INT8_MIN;
	static volatile int64_t x740 = 0LL;
	int32_t t184 = 140;

    t184 = ((x737|x738)<=(x739<=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -2803;
	uint8_t x742 = 14U;
	uint8_t x743 = 7U;
	int32_t x744 = 384;
	volatile int32_t t185 = 1939;

    t185 = ((x741|x742)<=(x743<=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = 20;
	uint32_t x746 = UINT32_MAX;
	int32_t x747 = INT32_MAX;
	int8_t x748 = INT8_MIN;
	int32_t t186 = 266;

    t186 = ((x745|x746)<=(x747<=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x750 = 139012991566845LLU;
	int16_t x751 = -5;
	static int16_t x752 = -4;
	int32_t t187 = -13542;

    t187 = ((x749|x750)<=(x751<=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = 12;
	static int64_t x755 = 13986238945LL;
	uint32_t x756 = 23741295U;
	volatile int32_t t188 = 0;

    t188 = ((x753|x754)<=(x755<=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 1U;
	int8_t x758 = -1;
	static uint32_t x759 = 48528931U;
	volatile int32_t x760 = INT32_MIN;
	volatile int32_t t189 = 510349;

    t189 = ((x757|x758)<=(x759<=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x761 = -24839947LL;
	int16_t x762 = INT16_MIN;
	static int32_t x763 = -1;
	static volatile uint64_t x764 = UINT64_MAX;

    t190 = ((x761|x762)<=(x763<=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = -4;
	int16_t x766 = -3335;
	int16_t x767 = -1;
	int32_t x768 = INT32_MIN;

    t191 = ((x765|x766)<=(x767<=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint32_t x771 = 49972404U;
	int8_t x772 = INT8_MIN;
	static int32_t t192 = -135;

    t192 = ((x769|x770)<=(x771<=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = -1LL;
	uint64_t x774 = UINT64_MAX;
	int32_t x775 = INT32_MIN;
	int32_t t193 = 5;

    t193 = ((x773|x774)<=(x775<=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = 732749591254651LLU;
	static int8_t x778 = INT8_MIN;
	static int64_t x779 = INT64_MIN;
	int32_t x780 = 19133998;
	volatile int32_t t194 = 49;

    t194 = ((x777|x778)<=(x779<=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	uint64_t x782 = 455LLU;
	volatile uint64_t x783 = UINT64_MAX;
	int64_t x784 = INT64_MIN;

    t195 = ((x781|x782)<=(x783<=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = UINT32_MAX;
	uint8_t x786 = 1U;
	int16_t x787 = INT16_MIN;
	int32_t t196 = -3;

    t196 = ((x785|x786)<=(x787<=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x789 = INT32_MAX;
	int8_t x790 = -1;
	static volatile uint16_t x791 = 121U;
	volatile int32_t t197 = -921156268;

    t197 = ((x789|x790)<=(x791<=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = 497101740472155LL;
	int16_t x794 = -1;
	int16_t x796 = INT16_MAX;

    t198 = ((x793|x794)<=(x795<=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 3U;
	int16_t x798 = -1;
	uint16_t x799 = 3560U;
	static uint16_t x800 = UINT16_MAX;
	static volatile int32_t t199 = 126617934;

    t199 = ((x797|x798)<=(x799<=x800));

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

