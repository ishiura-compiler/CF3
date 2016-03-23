
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

volatile int8_t x1 = -1;
static uint8_t x2 = UINT8_MAX;
uint64_t x7 = UINT64_MAX;
int64_t x15 = INT64_MIN;
static uint64_t t3 = 3036507262001LLU;
int8_t x21 = INT8_MIN;
int16_t x26 = -1;
volatile int8_t x27 = 1;
int16_t x36 = -1725;
static uint64_t x43 = UINT64_MAX;
uint8_t x45 = 9U;
int8_t x50 = INT8_MAX;
static uint16_t x53 = 15U;
int64_t x61 = INT64_MIN;
volatile uint32_t t15 = 12778390U;
int32_t x79 = INT32_MIN;
uint8_t x83 = 59U;
static int32_t x86 = -1;
int32_t x88 = INT32_MIN;
int32_t t18 = 123199554;
uint64_t x92 = 2058045859LLU;
uint32_t x95 = 2389538U;
volatile int32_t t21 = 3;
int8_t x103 = INT8_MIN;
int64_t x110 = INT64_MAX;
int32_t x112 = INT32_MAX;
int32_t x115 = INT32_MIN;
volatile int64_t t28 = 236099065921178965LL;
int8_t x132 = -1;
static int16_t x133 = INT16_MIN;
int16_t x138 = INT16_MAX;
static volatile uint64_t t31 = 306LLU;
volatile int8_t x141 = -1;
volatile int8_t x143 = -1;
static int16_t x145 = -15943;
static int64_t x147 = -1021LL;
volatile int64_t t33 = -1138225736887134276LL;
volatile uint32_t x150 = UINT32_MAX;
uint64_t t34 = 28570146912LLU;
int32_t x155 = 63264885;
volatile uint16_t x156 = 17270U;
int32_t t35 = 420;
static int8_t x158 = INT8_MIN;
int32_t x159 = INT32_MIN;
static uint16_t x168 = UINT16_MAX;
int64_t t38 = 1500933LL;
static volatile uint16_t x180 = 20897U;
int32_t x181 = -1;
static volatile int8_t x184 = INT8_MIN;
int8_t x186 = 2;
int8_t x187 = -1;
static uint64_t t43 = 222934355631626LLU;
volatile uint64_t t44 = 614LLU;
int64_t x193 = 20445LL;
static uint64_t x196 = UINT64_MAX;
int8_t x198 = -1;
volatile int32_t x207 = INT32_MIN;
volatile uint8_t x208 = 1U;
int64_t x214 = -1LL;
uint16_t x232 = 2U;
int8_t x242 = -1;
volatile uint8_t x249 = 0U;
uint32_t t57 = 50U;
volatile int8_t x253 = INT8_MIN;
int32_t x255 = -1;
uint64_t x258 = UINT64_MAX;
uint16_t x264 = 7781U;
volatile int64_t t66 = -39780908LL;
uint64_t x299 = UINT64_MAX;
uint64_t t67 = 33024815LLU;
int32_t x304 = INT32_MAX;
volatile int32_t x308 = INT32_MIN;
int16_t x310 = INT16_MAX;
volatile int16_t x314 = -1;
int32_t t71 = -937;
volatile int8_t x317 = INT8_MAX;
uint16_t x319 = UINT16_MAX;
volatile int16_t x322 = INT16_MAX;
int8_t x323 = INT8_MAX;
int64_t x324 = -25593191LL;
static int8_t x339 = 7;
int32_t x341 = -118;
uint32_t x345 = 21770358U;
static uint32_t t79 = 43718086U;
uint8_t x349 = 119U;
static int16_t x355 = INT16_MAX;
int16_t x356 = 326;
static int16_t x359 = INT16_MIN;
static int32_t t82 = 15035562;
int16_t x372 = INT16_MAX;
int32_t t86 = -111397;
uint8_t x390 = UINT8_MAX;
volatile int64_t x391 = 2880LL;
volatile int16_t x398 = -48;
volatile uint32_t x402 = 62628734U;
int32_t x407 = INT32_MIN;
volatile uint64_t x414 = UINT64_MAX;
int32_t x417 = INT32_MIN;
uint32_t x418 = UINT32_MAX;
int16_t x422 = -1;
int32_t x423 = -1444;
volatile int8_t x424 = INT8_MIN;
volatile uint64_t t95 = 1567LLU;
int64_t x432 = -7234385491LL;
int32_t x435 = -1;
int64_t x436 = -1LL;
static int64_t x437 = INT64_MAX;
volatile uint64_t x445 = 297321053623819802LLU;
volatile uint32_t x454 = UINT32_MAX;
int8_t x455 = -1;
static int8_t x461 = INT8_MIN;
volatile int32_t x462 = INT32_MIN;
int64_t x463 = INT64_MIN;
static volatile int32_t x464 = INT32_MIN;
int32_t x467 = INT32_MAX;
volatile uint64_t t105 = 6332LLU;
static volatile int32_t x472 = INT32_MAX;
int32_t t111 = -886;
volatile uint32_t t112 = 27U;
volatile int64_t t114 = -24923018920915130LL;
volatile uint32_t x509 = 197464242U;
int64_t x511 = INT64_MIN;
int32_t x519 = INT32_MIN;
int64_t t118 = 64156859842193092LL;
uint64_t x526 = 54897894023LLU;
static int8_t x528 = -60;
uint32_t x532 = 202971U;
int64_t x535 = -133177943LL;
int64_t t123 = 3054LL;
static uint8_t x545 = UINT8_MAX;
volatile int32_t x547 = -853237;
uint16_t x548 = 1U;
int8_t x550 = -1;
int16_t x552 = INT16_MIN;
int16_t x554 = INT16_MIN;
int64_t x555 = INT64_MAX;
static int8_t x557 = -2;
static volatile int64_t t127 = 7801380LL;
uint8_t x566 = 23U;
volatile uint8_t x567 = UINT8_MAX;
uint64_t x572 = 3888820858LLU;
uint32_t x574 = UINT32_MAX;
uint64_t x575 = UINT64_MAX;
int16_t x576 = -648;
static int8_t x581 = INT8_MIN;
volatile uint8_t x582 = 1U;
uint8_t x592 = 106U;
uint16_t x594 = 227U;
volatile uint16_t x600 = 54U;
int64_t x613 = INT64_MAX;
uint32_t x614 = 3374727U;
int16_t x623 = INT16_MAX;
static volatile int16_t x625 = INT16_MIN;
static uint8_t x631 = 1U;
static int64_t t142 = -190816168LL;
static int16_t x639 = INT16_MIN;
int32_t t144 = -23917;
volatile int64_t t146 = -25218LL;
uint16_t x653 = 1U;
static int16_t x654 = -1;
static uint64_t t148 = 18740546774742877LLU;
uint64_t x661 = 40LLU;
int32_t t150 = -337763;
uint64_t x669 = 4988471642526LLU;
int64_t x670 = -1LL;
static volatile uint64_t t151 = 1913027554755592394LLU;
uint32_t x682 = UINT32_MAX;
uint64_t t156 = 1970LLU;
uint16_t x709 = 38U;
uint16_t x711 = UINT16_MAX;
static int16_t x715 = 15320;
int32_t x717 = 4189796;
int16_t x720 = INT16_MIN;
volatile uint64_t t164 = 22411730853LLU;
int8_t x729 = INT8_MIN;
int64_t x730 = INT64_MIN;
static volatile int8_t x736 = -1;
int8_t x738 = -11;
int64_t x739 = -31782126LL;
uint8_t x741 = UINT8_MAX;
uint32_t x763 = UINT32_MAX;
static int64_t x772 = -1LL;
int8_t x775 = INT8_MAX;
volatile int64_t t174 = -12187364047LL;
volatile uint64_t t175 = 981918367714134LLU;
int32_t x792 = INT32_MIN;
int64_t t179 = 41171LL;
static uint32_t x800 = 5532836U;
static volatile uint64_t t180 = 201837166021130LLU;
int64_t x803 = 713795150163LL;
int8_t x812 = INT8_MIN;
volatile int64_t x816 = 67325586374523762LL;
static int32_t x820 = 378;
static int32_t x821 = INT32_MIN;
int32_t x825 = INT32_MIN;
volatile int32_t t187 = -17680;
volatile uint64_t t188 = 922964784990LLU;
int32_t x834 = INT32_MIN;
volatile int8_t x837 = INT8_MIN;
int8_t x843 = INT8_MAX;
static uint64_t x852 = UINT64_MAX;
volatile int64_t x857 = 78795313726LL;
static int32_t x875 = 17591;
static int32_t t195 = 189218244;
static uint32_t x882 = 928323437U;
volatile int64_t t198 = -802921272LL;
volatile uint8_t x892 = 1U;


void f0(void) {
    	uint64_t x3 = 235795LLU;
	int16_t x4 = -1;
	volatile uint64_t t0 = 10210LLU;

    t0 = ((x1-(x2/x3))/x4);

    if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 4167U;
	volatile int32_t x6 = INT32_MIN;
	static int64_t x8 = -255392469817870863LL;
	volatile uint64_t t1 = 16LLU;

    t1 = ((x5-(x6/x7))/x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = -18;
	uint32_t x14 = 2641812U;
	int8_t x16 = -4;
	volatile int64_t t2 = 27324925112322546LL;

    t2 = ((x13-(x14/x15))/x16);

    if (t2 != 4LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = 0;
	uint16_t x18 = 28U;
	static uint64_t x19 = 2844508795LLU;
	static int32_t x20 = INT32_MAX;

    t3 = ((x17-(x18/x19))/x20);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x22 = 399LLU;
	static uint16_t x23 = 1U;
	volatile int8_t x24 = INT8_MAX;
	static volatile uint64_t t4 = 589193503861225LLU;

    t4 = ((x21-(x22/x23))/x24);

    if (t4 != 145249953336295677LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	int32_t x28 = -1;
	int32_t t5 = INT32_MAX;

    t5 = ((x25-(x26/x27))/x28);

    if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t x29 = INT32_MIN;
	int16_t x30 = -1;
	int16_t x31 = -26;
	uint8_t x32 = UINT8_MAX;
	int32_t t6 = 84290;

    t6 = ((x29-(x30/x31))/x32);

    if (t6 != -8421504) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = 3U;
	volatile int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MAX;
	volatile int32_t t7 = -16479;

    t7 = ((x33-(x34/x35))/x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = INT32_MAX;
	int32_t x42 = -53;
	static uint8_t x44 = UINT8_MAX;
	volatile uint64_t t8 = 99813647257983LLU;

    t8 = ((x41-(x42/x43))/x44);

    if (t8 != 8421504LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x46 = INT16_MIN;
	int8_t x47 = INT8_MIN;
	static volatile int16_t x48 = -1;
	int32_t t9 = 936;

    t9 = ((x45-(x46/x47))/x48);

    if (t9 != 247) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x49 = 0;
	int16_t x51 = INT16_MIN;
	uint32_t x52 = 3U;
	static uint32_t t10 = 479235565U;

    t10 = ((x49-(x50/x51))/x52);

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x54 = -280321;
	int64_t x55 = -47776128LL;
	uint64_t x56 = 14030061523640439LLU;
	volatile uint64_t t11 = 365099LLU;

    t11 = ((x53-(x54/x55))/x56);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x57 = UINT32_MAX;
	volatile int8_t x58 = INT8_MIN;
	int8_t x59 = 7;
	uint64_t x60 = UINT64_MAX;
	uint64_t t12 = 58149667036283LLU;

    t12 = ((x57-(x58/x59))/x60);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x62 = INT64_MIN;
	static uint32_t x63 = UINT32_MAX;
	static int8_t x64 = -1;
	volatile int64_t t13 = -391422707LL;

    t13 = ((x61-(x62/x63))/x64);

    if (t13 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = 45;
	uint32_t x66 = UINT32_MAX;
	volatile uint64_t x67 = 12LLU;
	int16_t x68 = -437;
	volatile uint64_t t14 = 29335466656560210LLU;

    t14 = ((x65-(x66/x67))/x68);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x69 = 423U;
	static int32_t x70 = 662076527;
	int32_t x71 = INT32_MIN;
	uint16_t x72 = 21U;

    t15 = ((x69-(x70/x71))/x72);

    if (t15 != 20U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x77 = 0;
	int64_t x78 = INT64_MIN;
	volatile int16_t x80 = 6;
	int64_t t16 = -1LL;

    t16 = ((x77-(x78/x79))/x80);

    if (t16 != -715827882LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = -1;
	static int16_t x82 = INT16_MIN;
	volatile int64_t x84 = -1LL;
	int64_t t17 = -91405413641274826LL;

    t17 = ((x81-(x82/x83))/x84);

    if (t17 != -554LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x85 = -1;
	static volatile int32_t x87 = INT32_MIN;

    t18 = ((x85-(x86/x87))/x88);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint16_t x89 = 1130U;
	static uint64_t x90 = 4271079703286778664LLU;
	int64_t x91 = -1LL;
	uint64_t t19 = 2LLU;

    t19 = ((x89-(x90/x91))/x92);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x93 = 2377;
	int64_t x94 = INT64_MAX;
	static int64_t x96 = -1LL;
	volatile int64_t t20 = 201921LL;

    t20 = ((x93-(x94/x95))/x96);

    if (t20 != 3859897616683LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = INT8_MIN;
	volatile int32_t x98 = INT32_MIN;
	int16_t x99 = 1;
	int32_t x100 = 3186990;

    t21 = ((x97-(x98/x99))/x100);

    if (t21 != 673) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x101 = INT32_MIN;
	uint16_t x102 = UINT16_MAX;
	int32_t x104 = INT32_MIN;
	volatile int32_t t22 = 249;

    t22 = ((x101-(x102/x103))/x104);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = INT16_MIN;
	int32_t x106 = INT32_MIN;
	volatile int16_t x107 = INT16_MIN;
	uint16_t x108 = 7U;
	int32_t t23 = 423;

    t23 = ((x105-(x106/x107))/x108);

    if (t23 != -14043) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x109 = UINT8_MAX;
	uint16_t x111 = UINT16_MAX;
	int64_t t24 = -746698815578105LL;

    t24 = ((x109-(x110/x111))/x112);

    if (t24 != -65537LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x113 = UINT16_MAX;
	static int16_t x114 = -1;
	uint64_t x116 = 7738944048441406643LLU;
	uint64_t t25 = 56606168291LLU;

    t25 = ((x113-(x114/x115))/x116);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x117 = INT16_MIN;
	static int32_t x118 = INT32_MIN;
	volatile uint64_t x119 = 574905276037521568LLU;
	static int8_t x120 = INT8_MAX;
	uint64_t t26 = 2LLU;

    t26 = ((x117-(x118/x119))/x120);

    if (t26 != 145249953336295423LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x121 = 12589;
	int16_t x122 = INT16_MIN;
	int32_t x123 = INT32_MIN;
	int8_t x124 = INT8_MAX;
	volatile int32_t t27 = -232;

    t27 = ((x121-(x122/x123))/x124);

    if (t27 != 99) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x125 = 27U;
	uint8_t x126 = UINT8_MAX;
	uint32_t x127 = 26827949U;
	int64_t x128 = INT64_MIN;

    t28 = ((x125-(x126/x127))/x128);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = INT16_MIN;
	static int8_t x130 = INT8_MAX;
	volatile int16_t x131 = INT16_MIN;
	volatile int32_t t29 = 12516;

    t29 = ((x129-(x130/x131))/x132);

    if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x134 = INT16_MIN;
	volatile int32_t x135 = -1;
	int64_t x136 = INT64_MIN;
	int64_t t30 = -438LL;

    t30 = ((x133-(x134/x135))/x136);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = INT32_MIN;
	volatile int32_t x139 = -1;
	uint64_t x140 = 223382809617660LLU;

    t31 = ((x137-(x138/x139))/x140);

    if (t31 != 82579LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x142 = INT32_MAX;
	int64_t x144 = -717LL;
	volatile int64_t t32 = 1450LL;

    t32 = ((x141-(x142/x143))/x144);

    if (t32 != -2995095LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x146 = -49;
	volatile int8_t x148 = 7;

    t33 = ((x145-(x146/x147))/x148);

    if (t33 != -2277LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x149 = 580U;
	uint64_t x151 = 168902594LLU;
	int64_t x152 = 22061570525172LL;

    t34 = ((x149-(x150/x151))/x152);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = INT8_MIN;
	static int8_t x154 = 1;

    t35 = ((x153-(x154/x155))/x156);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x157 = 8U;
	static volatile int16_t x160 = INT16_MAX;
	int32_t t36 = -3799;

    t36 = ((x157-(x158/x159))/x160);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x161 = 2U;
	static int8_t x162 = -1;
	int64_t x163 = -1LL;
	volatile uint32_t x164 = UINT32_MAX;
	int64_t t37 = 156807876408093900LL;

    t37 = ((x161-(x162/x163))/x164);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x165 = INT8_MAX;
	static int64_t x166 = INT64_MIN;
	int16_t x167 = INT16_MIN;

    t38 = ((x165-(x166/x167))/x168);

    if (t38 != -4295032832LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x169 = 1959U;
	volatile int32_t x170 = INT32_MIN;
	int32_t x171 = INT32_MIN;
	static uint16_t x172 = UINT16_MAX;
	uint32_t t39 = 9730860U;

    t39 = ((x169-(x170/x171))/x172);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x173 = UINT32_MAX;
	int64_t x174 = INT64_MIN;
	int32_t x175 = INT32_MIN;
	uint32_t x176 = 13390U;
	int64_t t40 = 48251028855LL;

    t40 = ((x173-(x174/x175))/x176);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x177 = UINT64_MAX;
	uint16_t x178 = 16U;
	uint8_t x179 = 7U;
	volatile uint64_t t41 = 22365LLU;

    t41 = ((x177-(x178/x179))/x180);

    if (t41 != 882746043628729LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x182 = INT32_MIN;
	static int16_t x183 = INT16_MIN;
	int32_t t42 = -155487714;

    t42 = ((x181-(x182/x183))/x184);

    if (t42 != 512) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x185 = -1LL;
	uint64_t x188 = 22506763LLU;

    t43 = ((x185-(x186/x187))/x188);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x189 = INT8_MIN;
	int16_t x190 = INT16_MAX;
	uint64_t x191 = UINT64_MAX;
	static volatile uint8_t x192 = UINT8_MAX;

    t44 = ((x189-(x190/x191))/x192);

    if (t44 != 72340172838076672LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x194 = UINT32_MAX;
	uint32_t x195 = UINT32_MAX;
	static volatile uint64_t t45 = 48584506061662125LLU;

    t45 = ((x193-(x194/x195))/x196);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x197 = -1;
	volatile uint8_t x199 = UINT8_MAX;
	int16_t x200 = -1;
	volatile int32_t t46 = -105;

    t46 = ((x197-(x198/x199))/x200);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = -1;
	uint32_t x202 = 322U;
	int64_t x203 = -1LL;
	int16_t x204 = INT16_MIN;
	int64_t t47 = -1LL;

    t47 = ((x201-(x202/x203))/x204);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x205 = -1;
	volatile int8_t x206 = INT8_MIN;
	static int32_t t48 = 1;

    t48 = ((x205-(x206/x207))/x208);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x209 = INT8_MIN;
	uint8_t x210 = UINT8_MAX;
	volatile uint32_t x211 = 283617018U;
	int64_t x212 = INT64_MIN;
	int64_t t49 = 7063815667880176LL;

    t49 = ((x209-(x210/x211))/x212);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x213 = INT8_MIN;
	int64_t x215 = INT64_MIN;
	int64_t x216 = -49234330LL;
	static volatile int64_t t50 = 3815938536057725LL;

    t50 = ((x213-(x214/x215))/x216);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x217 = 6771U;
	int32_t x218 = 740464758;
	uint64_t x219 = UINT64_MAX;
	static volatile int16_t x220 = INT16_MAX;
	static volatile uint64_t t51 = 58LLU;

    t51 = ((x217-(x218/x219))/x220);

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x221 = -1;
	uint64_t x222 = UINT64_MAX;
	uint64_t x223 = 17LLU;
	int32_t x224 = INT32_MIN;
	uint64_t t52 = 2549097382213095797LLU;

    t52 = ((x221-(x222/x223))/x224);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x225 = -1;
	volatile uint64_t x226 = UINT64_MAX;
	int64_t x227 = INT64_MAX;
	static int64_t x228 = INT64_MAX;
	uint64_t t53 = 169LLU;

    t53 = ((x225-(x226/x227))/x228);

    if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x229 = 14U;
	static int64_t x230 = 1LL;
	static int8_t x231 = 14;
	volatile int64_t t54 = -4LL;

    t54 = ((x229-(x230/x231))/x232);

    if (t54 != 7LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x237 = UINT8_MAX;
	static int8_t x238 = -1;
	uint32_t x239 = UINT32_MAX;
	static int32_t x240 = 45;
	volatile uint32_t t55 = 55U;

    t55 = ((x237-(x238/x239))/x240);

    if (t55 != 5U) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x241 = UINT32_MAX;
	int8_t x243 = -21;
	int16_t x244 = -43;
	uint32_t t56 = 4462U;

    t56 = ((x241-(x242/x243))/x244);

    if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x250 = UINT32_MAX;
	int8_t x251 = INT8_MIN;
	int32_t x252 = INT32_MAX;

    t57 = ((x249-(x250/x251))/x252);

    if (t57 != 2U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x254 = INT8_MAX;
	static int8_t x256 = INT8_MIN;
	volatile int32_t t58 = -723263756;

    t58 = ((x253-(x254/x255))/x256);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x257 = 26;
	volatile int32_t x259 = 7179;
	volatile uint64_t x260 = UINT64_MAX;
	volatile uint64_t t59 = 21504518322LLU;

    t59 = ((x257-(x258/x259))/x260);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x261 = -1;
	int64_t x262 = 28LL;
	static int16_t x263 = 232;
	int64_t t60 = -952326102937LL;

    t60 = ((x261-(x262/x263))/x264);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x265 = UINT32_MAX;
	int64_t x266 = -17119815115606659LL;
	int64_t x267 = 128382051910908683LL;
	volatile int64_t x268 = 7759239164805LL;
	volatile int64_t t61 = 4LL;

    t61 = ((x265-(x266/x267))/x268);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x269 = UINT64_MAX;
	volatile int8_t x270 = 0;
	int32_t x271 = INT32_MIN;
	uint32_t x272 = 2373U;
	volatile uint64_t t62 = 26531LLU;

    t62 = ((x269-(x270/x271))/x272);

    if (t62 != 7773596322675748LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x273 = 6194374685463LLU;
	uint8_t x274 = UINT8_MAX;
	int16_t x275 = INT16_MIN;
	int64_t x276 = INT64_MIN;
	volatile uint64_t t63 = 1LLU;

    t63 = ((x273-(x274/x275))/x276);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x277 = -1;
	static int8_t x278 = -1;
	int8_t x279 = 38;
	static int32_t x280 = -60245544;
	volatile int32_t t64 = -2432;

    t64 = ((x277-(x278/x279))/x280);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x281 = INT16_MAX;
	uint32_t x282 = 463U;
	int16_t x283 = INT16_MAX;
	static volatile uint32_t x284 = 223804U;
	uint32_t t65 = 0U;

    t65 = ((x281-(x282/x283))/x284);

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x285 = INT16_MIN;
	static volatile int32_t x286 = INT32_MIN;
	int8_t x287 = INT8_MIN;
	int64_t x288 = -448070LL;

    t66 = ((x285-(x286/x287))/x288);

    if (t66 != 37LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x297 = 1368LLU;
	volatile uint32_t x298 = 357U;
	int64_t x300 = -1LL;

    t67 = ((x297-(x298/x299))/x300);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x301 = INT16_MIN;
	int64_t x302 = INT64_MAX;
	volatile int8_t x303 = INT8_MIN;
	static int64_t t68 = -2084569817699LL;

    t68 = ((x301-(x302/x303))/x304);

    if (t68 != 33554432LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x305 = UINT32_MAX;
	volatile int16_t x306 = -78;
	static int8_t x307 = INT8_MIN;
	volatile uint32_t t69 = 762U;

    t69 = ((x305-(x306/x307))/x308);

    if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x309 = UINT32_MAX;
	uint32_t x311 = 173U;
	int16_t x312 = INT16_MIN;
	volatile uint32_t t70 = 22324U;

    t70 = ((x309-(x310/x311))/x312);

    if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x313 = -1;
	int8_t x315 = INT8_MIN;
	int32_t x316 = INT32_MAX;

    t71 = ((x313-(x314/x315))/x316);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x318 = 14187U;
	uint32_t x320 = 4313U;
	volatile uint32_t t72 = 1666U;

    t72 = ((x317-(x318/x319))/x320);

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x321 = -1;
	volatile int64_t t73 = -1372294781711294950LL;

    t73 = ((x321-(x322/x323))/x324);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x325 = INT8_MAX;
	uint8_t x326 = 7U;
	static uint8_t x327 = 15U;
	static int8_t x328 = INT8_MIN;
	int32_t t74 = -65;

    t74 = ((x325-(x326/x327))/x328);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x329 = UINT8_MAX;
	static uint32_t x330 = 188892767U;
	uint8_t x331 = 80U;
	int16_t x332 = -2;
	volatile uint32_t t75 = 3142U;

    t75 = ((x329-(x330/x331))/x332);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x333 = 356494U;
	int32_t x334 = -1;
	int64_t x335 = INT64_MIN;
	static uint8_t x336 = UINT8_MAX;
	volatile int64_t t76 = -4693749LL;

    t76 = ((x333-(x334/x335))/x336);

    if (t76 != 1398LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x337 = UINT32_MAX;
	int32_t x338 = 52310178;
	int64_t x340 = INT64_MIN;
	int64_t t77 = 6586090793029LL;

    t77 = ((x337-(x338/x339))/x340);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x342 = 99U;
	int64_t x343 = -1LL;
	int8_t x344 = -23;
	int64_t t78 = -1719LL;

    t78 = ((x341-(x342/x343))/x344);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x346 = -1;
	static int8_t x347 = 8;
	static int16_t x348 = INT16_MIN;

    t79 = ((x345-(x346/x347))/x348);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x350 = -1;
	static int64_t x351 = INT64_MIN;
	static int8_t x352 = -21;
	volatile int64_t t80 = -552432504233073LL;

    t80 = ((x349-(x350/x351))/x352);

    if (t80 != -5LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x353 = -1;
	int32_t x354 = INT32_MIN;
	volatile int32_t t81 = 3;

    t81 = ((x353-(x354/x355))/x356);

    if (t81 != 201) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x357 = 11U;
	int8_t x358 = INT8_MAX;
	uint16_t x360 = UINT16_MAX;

    t82 = ((x357-(x358/x359))/x360);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x365 = INT32_MIN;
	uint8_t x366 = UINT8_MAX;
	uint64_t x367 = 7472154877678417LLU;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t83 = 1498LLU;

    t83 = ((x365-(x366/x367))/x368);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint64_t x369 = 5459579652422LLU;
	int16_t x370 = 1789;
	int8_t x371 = INT8_MIN;
	static volatile uint64_t t84 = 86252958451096LLU;

    t84 = ((x369-(x370/x371))/x372);

    if (t84 != 166618233LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x373 = INT8_MIN;
	int16_t x374 = INT16_MAX;
	uint64_t x375 = 2159918433019484LLU;
	volatile int64_t x376 = -62539LL;
	volatile uint64_t t85 = 189620LLU;

    t85 = ((x373-(x374/x375))/x376);

    if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x385 = -1;
	uint8_t x386 = UINT8_MAX;
	int8_t x387 = INT8_MIN;
	volatile int32_t x388 = -1;

    t86 = ((x385-(x386/x387))/x388);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x389 = INT32_MIN;
	int8_t x392 = INT8_MIN;
	int64_t t87 = -165500817401762LL;

    t87 = ((x389-(x390/x391))/x392);

    if (t87 != 16777216LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x397 = INT64_MAX;
	static int8_t x399 = -1;
	int16_t x400 = 1;
	int64_t t88 = -28LL;

    t88 = ((x397-(x398/x399))/x400);

    if (t88 != 9223372036854775759LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x401 = UINT16_MAX;
	volatile uint32_t x403 = 11U;
	int32_t x404 = -127;
	volatile uint32_t t89 = 6769U;

    t89 = ((x401-(x402/x403))/x404);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x405 = 48070U;
	uint8_t x406 = 0U;
	int8_t x408 = INT8_MAX;
	volatile uint32_t t90 = 772935907U;

    t90 = ((x405-(x406/x407))/x408);

    if (t90 != 378U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x409 = UINT8_MAX;
	volatile uint16_t x410 = UINT16_MAX;
	static int64_t x411 = 1LL;
	int64_t x412 = -1LL;
	volatile int64_t t91 = 1057753952992116695LL;

    t91 = ((x409-(x410/x411))/x412);

    if (t91 != 65280LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x413 = 2;
	int8_t x415 = INT8_MIN;
	int32_t x416 = 15412494;
	static uint64_t t92 = 1291LLU;

    t92 = ((x413-(x414/x415))/x416);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int8_t x419 = 4;
	volatile int16_t x420 = -278;
	static volatile uint32_t t93 = 23781U;

    t93 = ((x417-(x418/x419))/x420);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x421 = 6;
	int32_t t94 = 1354236;

    t94 = ((x421-(x422/x423))/x424);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x425 = -4;
	volatile int16_t x426 = INT16_MIN;
	uint64_t x427 = 4048270124309076412LLU;
	uint16_t x428 = 1148U;

    t95 = ((x425-(x426/x427))/x428);

    if (t95 != 16068592398701700LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint8_t x429 = 5U;
	int32_t x430 = -2;
	static volatile int16_t x431 = -4;
	static volatile int64_t t96 = -12102824789828LL;

    t96 = ((x429-(x430/x431))/x432);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint16_t x433 = UINT16_MAX;
	uint8_t x434 = 18U;
	volatile int64_t t97 = -52807318686445851LL;

    t97 = ((x433-(x434/x435))/x436);

    if (t97 != -65553LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x438 = 7U;
	int8_t x439 = INT8_MIN;
	int32_t x440 = INT32_MAX;
	volatile int64_t t98 = -15206LL;

    t98 = ((x437-(x438/x439))/x440);

    if (t98 != 4294967298LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x441 = UINT8_MAX;
	uint32_t x442 = UINT32_MAX;
	static int32_t x443 = 20554;
	int32_t x444 = INT32_MIN;
	uint32_t t99 = 1828975503U;

    t99 = ((x441-(x442/x443))/x444);

    if (t99 != 1U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x446 = -1;
	volatile int16_t x447 = 5;
	uint16_t x448 = 9U;
	volatile uint64_t t100 = 23233844563963LLU;

    t100 = ((x445-(x446/x447))/x448);

    if (t100 != 33035672624868866LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x449 = INT16_MIN;
	int16_t x450 = -1;
	int16_t x451 = -28;
	uint32_t x452 = 8037504U;
	uint32_t t101 = 0U;

    t101 = ((x449-(x450/x451))/x452);

    if (t101 != 534U) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x453 = INT32_MIN;
	volatile uint32_t x456 = 18174U;
	uint32_t t102 = 16257786U;

    t102 = ((x453-(x454/x455))/x456);

    if (t102 != 118162U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x457 = INT16_MIN;
	uint8_t x458 = 105U;
	static int8_t x459 = INT8_MIN;
	int8_t x460 = INT8_MIN;
	static volatile int32_t t103 = 2766704;

    t103 = ((x457-(x458/x459))/x460);

    if (t103 != 256) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t t104 = -1094165189105140LL;

    t104 = ((x461-(x462/x463))/x464);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x465 = UINT64_MAX;
	uint64_t x466 = 30284382487708328LLU;
	uint32_t x468 = 403182462U;

    t105 = ((x465-(x466/x467))/x468);

    if (t105 != 45752843469LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x469 = -1;
	int16_t x470 = -40;
	volatile int64_t x471 = -1LL;
	static int64_t t106 = 187790050980383LL;

    t106 = ((x469-(x470/x471))/x472);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x473 = 1;
	static uint16_t x474 = 5U;
	int16_t x475 = -1957;
	volatile uint8_t x476 = 69U;
	static int32_t t107 = -4766;

    t107 = ((x473-(x474/x475))/x476);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x481 = UINT32_MAX;
	int32_t x482 = -279361311;
	static volatile uint32_t x483 = 824176045U;
	int8_t x484 = INT8_MAX;
	uint32_t t108 = 7U;

    t108 = ((x481-(x482/x483))/x484);

    if (t108 != 33818640U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x485 = INT8_MAX;
	uint32_t x486 = 6475U;
	uint64_t x487 = 27557532463953LLU;
	int32_t x488 = -1;
	volatile uint64_t t109 = 69874608889096LLU;

    t109 = ((x485-(x486/x487))/x488);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x489 = 1053620;
	int32_t x490 = -69;
	int64_t x491 = -1LL;
	uint32_t x492 = 80881U;
	static volatile int64_t t110 = 227LL;

    t110 = ((x489-(x490/x491))/x492);

    if (t110 != 13LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int32_t x493 = -1;
	int32_t x494 = INT32_MAX;
	int8_t x495 = -1;
	volatile uint16_t x496 = UINT16_MAX;

    t111 = ((x493-(x494/x495))/x496);

    if (t111 != 32768) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x497 = 5U;
	int16_t x498 = -48;
	static uint16_t x499 = 6U;
	uint32_t x500 = UINT32_MAX;

    t112 = ((x497-(x498/x499))/x500);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x501 = INT32_MAX;
	uint32_t x502 = 9U;
	int8_t x503 = INT8_MIN;
	int8_t x504 = INT8_MIN;
	static volatile uint32_t t113 = 104240U;

    t113 = ((x501-(x502/x503))/x504);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x505 = INT8_MAX;
	int32_t x506 = 9;
	int64_t x507 = 2791689LL;
	volatile int32_t x508 = INT32_MAX;

    t114 = ((x505-(x506/x507))/x508);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x510 = 0;
	int16_t x512 = INT16_MIN;
	volatile int64_t t115 = 493564545LL;

    t115 = ((x509-(x510/x511))/x512);

    if (t115 != -6026LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x513 = INT16_MIN;
	int64_t x514 = -1LL;
	volatile int8_t x515 = 1;
	int8_t x516 = INT8_MIN;
	volatile int64_t t116 = 1025731304576LL;

    t116 = ((x513-(x514/x515))/x516);

    if (t116 != 255LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x517 = 11U;
	volatile int32_t x518 = INT32_MIN;
	static uint16_t x520 = UINT16_MAX;
	int32_t t117 = -1667;

    t117 = ((x517-(x518/x519))/x520);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x521 = 168221665688LL;
	int64_t x522 = INT64_MIN;
	int8_t x523 = INT8_MIN;
	int8_t x524 = INT8_MAX;

    t118 = ((x521-(x522/x523))/x524);

    if (t118 != -567381305639860LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x525 = 151U;
	uint16_t x527 = UINT16_MAX;
	uint64_t t119 = 2853408040635190LLU;

    t119 = ((x525-(x526/x527))/x528);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x529 = -41;
	volatile uint64_t x530 = 989652LLU;
	uint8_t x531 = 99U;
	static volatile uint64_t t120 = 15429035600820LLU;

    t120 = ((x529-(x530/x531))/x532);

    if (t120 != 90883643839314LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x533 = INT32_MAX;
	int32_t x534 = -29127;
	static int16_t x536 = INT16_MIN;
	volatile int64_t t121 = 1778889842LL;

    t121 = ((x533-(x534/x535))/x536);

    if (t121 != -65535LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x537 = INT64_MIN;
	int16_t x538 = 12;
	static int64_t x539 = INT64_MIN;
	uint64_t x540 = 861295922553234LLU;
	uint64_t t122 = 88086407585LLU;

    t122 = ((x537-(x538/x539))/x540);

    if (t122 != 10708LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x541 = -1;
	static volatile int64_t x542 = -1LL;
	uint8_t x543 = UINT8_MAX;
	int64_t x544 = INT64_MAX;

    t123 = ((x541-(x542/x543))/x544);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x546 = -7231780;
	volatile int32_t t124 = 1114;

    t124 = ((x545-(x546/x547))/x548);

    if (t124 != 247) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x549 = -1;
	uint32_t x551 = UINT32_MAX;
	volatile uint32_t t125 = 286677825U;

    t125 = ((x549-(x550/x551))/x552);

    if (t125 != 1U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x553 = INT32_MAX;
	int16_t x556 = INT16_MIN;
	volatile int64_t t126 = -15773926426110188LL;

    t126 = ((x553-(x554/x555))/x556);

    if (t126 != -65535LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x558 = -1;
	int64_t x559 = 20985936383484016LL;
	int64_t x560 = INT64_MAX;

    t127 = ((x557-(x558/x559))/x560);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint16_t x561 = UINT16_MAX;
	static int16_t x562 = -2111;
	uint64_t x563 = 59214LLU;
	uint16_t x564 = 2U;
	uint64_t t128 = 68345440783514LLU;

    t128 = ((x561-(x562/x563))/x564);

    if (t128 != 9223216273487414804LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x565 = INT32_MAX;
	uint8_t x568 = 7U;
	volatile int32_t t129 = 31;

    t129 = ((x565-(x566/x567))/x568);

    if (t129 != 306783378) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x569 = -1;
	uint16_t x570 = 22U;
	int16_t x571 = INT16_MIN;
	uint64_t t130 = 134129966576389080LLU;

    t130 = ((x569-(x570/x571))/x572);

    if (t130 != 4743531457LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x573 = UINT64_MAX;
	static volatile uint64_t t131 = 64LLU;

    t131 = ((x573-(x574/x575))/x576);

    if (t131 != 1LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x577 = INT32_MIN;
	static uint16_t x578 = 21U;
	int64_t x579 = INT64_MIN;
	volatile uint8_t x580 = 72U;
	static volatile int64_t t132 = 24678109757364766LL;

    t132 = ((x577-(x578/x579))/x580);

    if (t132 != -29826161LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x583 = INT16_MIN;
	int32_t x584 = -1;
	int32_t t133 = -1041951379;

    t133 = ((x581-(x582/x583))/x584);

    if (t133 != 128) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x585 = INT64_MIN;
	uint32_t x586 = UINT32_MAX;
	int64_t x587 = INT64_MAX;
	int32_t x588 = INT32_MIN;
	static int64_t t134 = -8294782LL;

    t134 = ((x585-(x586/x587))/x588);

    if (t134 != 4294967296LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x589 = -1;
	volatile int64_t x590 = -7766LL;
	uint8_t x591 = 41U;
	int64_t t135 = 0LL;

    t135 = ((x589-(x590/x591))/x592);

    if (t135 != 1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x593 = INT16_MAX;
	volatile int8_t x595 = INT8_MAX;
	int16_t x596 = INT16_MAX;
	volatile int32_t t136 = -2107219;

    t136 = ((x593-(x594/x595))/x596);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x597 = INT16_MIN;
	uint32_t x598 = 92651U;
	uint32_t x599 = 237228U;
	static uint32_t t137 = 52U;

    t137 = ((x597-(x598/x599))/x600);

    if (t137 != 79535824U) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x601 = INT64_MIN;
	static int16_t x602 = INT16_MIN;
	volatile int8_t x603 = INT8_MAX;
	static int16_t x604 = INT16_MAX;
	volatile int64_t t138 = 167LL;

    t138 = ((x601-(x602/x603))/x604);

    if (t138 != -281483566907399LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x615 = UINT8_MAX;
	int64_t x616 = INT64_MIN;
	int64_t t139 = -318491155159LL;

    t139 = ((x613-(x614/x615))/x616);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x621 = 12U;
	uint16_t x622 = 4U;
	int32_t x624 = INT32_MIN;
	int32_t t140 = 12;

    t140 = ((x621-(x622/x623))/x624);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x626 = 479U;
	uint16_t x627 = 493U;
	uint8_t x628 = UINT8_MAX;
	int32_t t141 = 1884471;

    t141 = ((x625-(x626/x627))/x628);

    if (t141 != -128) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x629 = -1;
	static int64_t x630 = -1LL;
	int32_t x632 = INT32_MIN;

    t142 = ((x629-(x630/x631))/x632);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x633 = INT16_MIN;
	int16_t x634 = 6627;
	volatile uint64_t x635 = UINT64_MAX;
	volatile uint64_t x636 = UINT64_MAX;
	static volatile uint64_t t143 = 35123086793986484LLU;

    t143 = ((x633-(x634/x635))/x636);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x637 = INT32_MIN;
	int8_t x638 = INT8_MAX;
	volatile int32_t x640 = -3308;

    t144 = ((x637-(x638/x639))/x640);

    if (t144 != 649178) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x645 = 35U;
	int32_t x646 = 14;
	static int64_t x647 = INT64_MAX;
	uint8_t x648 = UINT8_MAX;
	volatile int64_t t145 = -1453075257996616864LL;

    t145 = ((x645-(x646/x647))/x648);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x649 = INT32_MAX;
	static int8_t x650 = INT8_MIN;
	volatile int64_t x651 = INT64_MAX;
	static uint8_t x652 = UINT8_MAX;

    t146 = ((x649-(x650/x651))/x652);

    if (t146 != 8421504LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x655 = INT16_MIN;
	int64_t x656 = INT64_MIN;
	static int64_t t147 = 26LL;

    t147 = ((x653-(x654/x655))/x656);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x657 = INT32_MAX;
	uint64_t x658 = 9LLU;
	static volatile int8_t x659 = -1;
	int8_t x660 = -2;

    t148 = ((x657-(x658/x659))/x660);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x662 = INT32_MAX;
	int16_t x663 = -1;
	int32_t x664 = 19;
	volatile uint64_t t149 = 0LLU;

    t149 = ((x661-(x662/x663))/x664);

    if (t149 != 113025457LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x665 = INT32_MAX;
	int8_t x666 = INT8_MIN;
	static uint16_t x667 = 2492U;
	int16_t x668 = -1;

    t150 = ((x665-(x666/x667))/x668);

    if (t150 != -2147483647) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x671 = -1;
	int8_t x672 = INT8_MAX;

    t151 = ((x669-(x670/x671))/x672);

    if (t151 != 39279304271LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x673 = -8501895213738096LL;
	int32_t x674 = -323841;
	volatile int16_t x675 = INT16_MIN;
	volatile int32_t x676 = INT32_MIN;
	volatile int64_t t152 = 82730LL;

    t152 = ((x673-(x674/x675))/x676);

    if (t152 != 3959003LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x677 = UINT32_MAX;
	volatile int8_t x678 = INT8_MAX;
	volatile int64_t x679 = INT64_MIN;
	static int16_t x680 = -1;
	int64_t t153 = 0LL;

    t153 = ((x677-(x678/x679))/x680);

    if (t153 != -4294967295LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x681 = -11121189;
	int32_t x683 = -475;
	volatile int8_t x684 = INT8_MAX;
	volatile uint32_t t154 = 0U;

    t154 = ((x681-(x682/x683))/x684);

    if (t154 != 33731071U) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x685 = INT16_MIN;
	static int8_t x686 = -1;
	uint32_t x687 = 4U;
	static int64_t x688 = INT64_MIN;
	volatile int64_t t155 = 2627399376097LL;

    t155 = ((x685-(x686/x687))/x688);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x689 = UINT64_MAX;
	uint32_t x690 = UINT32_MAX;
	int32_t x691 = 244;
	int64_t x692 = 4038135610180390219LL;

    t156 = ((x689-(x690/x691))/x692);

    if (t156 != 4LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x693 = 14U;
	int32_t x694 = -1;
	uint8_t x695 = 2U;
	int8_t x696 = -3;
	int32_t t157 = -52;

    t157 = ((x693-(x694/x695))/x696);

    if (t157 != -4) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x697 = 724572053067LLU;
	volatile uint8_t x698 = 6U;
	int64_t x699 = -1LL;
	int16_t x700 = -3488;
	volatile uint64_t t158 = 38168631349831993LLU;

    t158 = ((x697-(x698/x699))/x700);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x705 = -33LL;
	int16_t x706 = INT16_MAX;
	volatile uint64_t x707 = 2678LLU;
	uint16_t x708 = UINT16_MAX;
	static volatile uint64_t t159 = 63395LLU;

    t159 = ((x705-(x706/x707))/x708);

    if (t159 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x710 = 5;
	int16_t x712 = -1;
	volatile int32_t t160 = -298383;

    t160 = ((x709-(x710/x711))/x712);

    if (t160 != -38) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x713 = INT16_MIN;
	uint8_t x714 = 1U;
	volatile uint8_t x716 = 23U;
	static int32_t t161 = -25;

    t161 = ((x713-(x714/x715))/x716);

    if (t161 != -1424) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x718 = INT64_MIN;
	static int64_t x719 = INT64_MIN;
	volatile int64_t t162 = 64563574781708LL;

    t162 = ((x717-(x718/x719))/x720);

    if (t162 != -127LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x721 = 11695903U;
	int64_t x722 = -38550044LL;
	uint64_t x723 = 3299581739832673LLU;
	volatile int8_t x724 = -1;
	volatile uint64_t t163 = 1LLU;

    t163 = ((x721-(x722/x723))/x724);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x725 = -1;
	int8_t x726 = INT8_MAX;
	uint64_t x727 = UINT64_MAX;
	int16_t x728 = INT16_MIN;

    t164 = ((x725-(x726/x727))/x728);

    if (t164 != 1LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x731 = 7636355013LLU;
	uint8_t x732 = UINT8_MAX;
	uint64_t t165 = 428875081616825765LLU;

    t165 = ((x729-(x730/x731))/x732);

    if (t165 != 72340172833340108LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x733 = 338961U;
	int64_t x734 = 3274LL;
	int64_t x735 = 280409LL;
	volatile int64_t t166 = 49167LL;

    t166 = ((x733-(x734/x735))/x736);

    if (t166 != -338961LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x737 = 0U;
	uint32_t x740 = 6646U;
	volatile int64_t t167 = 0LL;

    t167 = ((x737-(x738/x739))/x740);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x742 = -1;
	int32_t x743 = -1051664526;
	uint32_t x744 = 1491U;
	volatile uint32_t t168 = 7U;

    t168 = ((x741-(x742/x743))/x744);

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x753 = UINT64_MAX;
	int32_t x754 = -596;
	static int16_t x755 = INT16_MAX;
	int8_t x756 = -1;
	uint64_t t169 = 7095840895LLU;

    t169 = ((x753-(x754/x755))/x756);

    if (t169 != 1LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x757 = INT8_MIN;
	volatile int64_t x758 = -1LL;
	volatile int32_t x759 = -1;
	int16_t x760 = -1;
	static int64_t t170 = 956812LL;

    t170 = ((x757-(x758/x759))/x760);

    if (t170 != 129LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x761 = 3U;
	uint8_t x762 = UINT8_MAX;
	int32_t x764 = INT32_MIN;
	volatile uint32_t t171 = 1829618U;

    t171 = ((x761-(x762/x763))/x764);

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x765 = 1U;
	static volatile int8_t x766 = INT8_MIN;
	static int64_t x767 = INT64_MIN;
	uint8_t x768 = 2U;
	static volatile int64_t t172 = 65936358LL;

    t172 = ((x765-(x766/x767))/x768);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x769 = -361;
	uint64_t x770 = UINT64_MAX;
	uint32_t x771 = 85244812U;
	volatile uint64_t t173 = 110743473LLU;

    t173 = ((x769-(x770/x771))/x772);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x773 = INT16_MIN;
	static int64_t x774 = 1LL;
	uint8_t x776 = 4U;

    t174 = ((x773-(x774/x775))/x776);

    if (t174 != -8192LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x777 = 84U;
	uint64_t x778 = 57280322223820LLU;
	int8_t x779 = -1;
	static int64_t x780 = -732LL;

    t175 = ((x777-(x778/x779))/x780);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x781 = 16U;
	uint32_t x782 = UINT32_MAX;
	uint32_t x783 = UINT32_MAX;
	int16_t x784 = INT16_MIN;
	volatile uint32_t t176 = 1U;

    t176 = ((x781-(x782/x783))/x784);

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x785 = 1U;
	int16_t x786 = INT16_MAX;
	int32_t x787 = -1;
	static uint8_t x788 = 28U;
	int32_t t177 = 0;

    t177 = ((x785-(x786/x787))/x788);

    if (t177 != 1170) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x789 = -629;
	static int16_t x790 = -1;
	volatile uint64_t x791 = 164501269172962LLU;
	static uint64_t t178 = 100024LLU;

    t178 = ((x789-(x790/x791))/x792);

    if (t178 != 1LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x793 = INT64_MAX;
	volatile int16_t x794 = -1;
	volatile uint16_t x795 = 18770U;
	volatile int32_t x796 = INT32_MIN;

    t179 = ((x793-(x794/x795))/x796);

    if (t179 != -4294967295LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x797 = 10002497012697LLU;
	int64_t x798 = INT64_MAX;
	int8_t x799 = INT8_MIN;

    t180 = ((x797-(x798/x799))/x800);

    if (t180 != 13025435153LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x801 = INT8_MIN;
	int64_t x802 = INT64_MIN;
	int64_t x804 = -1LL;
	int64_t t181 = -17511295868LL;

    t181 = ((x801-(x802/x803))/x804);

    if (t181 != -12921467LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint64_t x805 = UINT64_MAX;
	int8_t x806 = -1;
	int16_t x807 = -39;
	static int16_t x808 = 3242;
	static uint64_t t182 = 4LLU;

    t182 = ((x805-(x806/x807))/x808);

    if (t182 != 5689927228164574LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x809 = -1;
	uint16_t x810 = 8038U;
	int64_t x811 = -128823296490323LL;
	int64_t t183 = -1172047235666932063LL;

    t183 = ((x809-(x810/x811))/x812);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x813 = -1;
	volatile int8_t x814 = 28;
	int8_t x815 = 1;
	volatile int64_t t184 = 126772082634LL;

    t184 = ((x813-(x814/x815))/x816);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x817 = 0U;
	static volatile int64_t x818 = INT64_MIN;
	int16_t x819 = INT16_MIN;
	volatile int64_t t185 = 219LL;

    t185 = ((x817-(x818/x819))/x820);

    if (t185 != -744642795530LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x822 = UINT16_MAX;
	static uint32_t x823 = UINT32_MAX;
	volatile int16_t x824 = INT16_MAX;
	uint32_t t186 = 1882117U;

    t186 = ((x821-(x822/x823))/x824);

    if (t186 != 65538U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x826 = 27U;
	int8_t x827 = -1;
	int16_t x828 = 1;

    t187 = ((x825-(x826/x827))/x828);

    if (t187 != -2147483621) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x829 = UINT64_MAX;
	static int8_t x830 = INT8_MAX;
	int64_t x831 = INT64_MAX;
	uint64_t x832 = 10892986987119766LLU;

    t188 = ((x829-(x830/x831))/x832);

    if (t188 != 1693LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x833 = -351045;
	uint16_t x835 = UINT16_MAX;
	uint8_t x836 = 76U;
	static int32_t t189 = 13054063;

    t189 = ((x833-(x834/x835))/x836);

    if (t189 != -4187) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x838 = UINT32_MAX;
	int32_t x839 = 12;
	static int16_t x840 = -70;
	volatile uint32_t t190 = 6152U;

    t190 = ((x837-(x838/x839))/x840);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x841 = UINT8_MAX;
	static int64_t x842 = -1LL;
	int32_t x844 = INT32_MIN;
	int64_t t191 = -111LL;

    t191 = ((x841-(x842/x843))/x844);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x849 = 176570295448LLU;
	int64_t x850 = 92040829829537564LL;
	uint16_t x851 = 18806U;
	static volatile uint64_t t192 = 678559376390LLU;

    t192 = ((x849-(x850/x851))/x852);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x858 = 3546LLU;
	int64_t x859 = 23574171LL;
	volatile int32_t x860 = 287;
	uint64_t t193 = 508LLU;

    t193 = ((x857-(x858/x859))/x860);

    if (t193 != 274548131LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x869 = 688U;
	volatile int32_t x870 = INT32_MIN;
	static int64_t x871 = INT64_MIN;
	uint64_t x872 = 6254LLU;
	volatile uint64_t t194 = 529125474LLU;

    t194 = ((x869-(x870/x871))/x872);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x873 = INT8_MIN;
	int32_t x874 = -57664747;
	volatile int32_t x876 = 7;

    t195 = ((x873-(x874/x875))/x876);

    if (t195 != 450) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x877 = -1LL;
	static int8_t x878 = INT8_MIN;
	volatile int64_t x879 = INT64_MAX;
	uint32_t x880 = 6U;
	int64_t t196 = 59740194LL;

    t196 = ((x877-(x878/x879))/x880);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x881 = -1;
	volatile int8_t x883 = -1;
	int32_t x884 = INT32_MIN;
	uint32_t t197 = 60804831U;

    t197 = ((x881-(x882/x883))/x884);

    if (t197 != 1U) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x885 = INT8_MAX;
	static int64_t x886 = 811LL;
	int64_t x887 = INT64_MIN;
	volatile int8_t x888 = 1;

    t198 = ((x885-(x886/x887))/x888);

    if (t198 != 127LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x889 = INT32_MIN;
	int16_t x890 = -1;
	int8_t x891 = INT8_MAX;
	static int32_t t199 = INT32_MIN;

    t199 = ((x889-(x890/x891))/x892);

    if (t199 != INT32_MIN) { NG(); } else { ; }
	
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

