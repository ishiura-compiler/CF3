
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

static uint16_t x1 = 0U;
uint16_t x7 = 4U;
int16_t x11 = -328;
uint32_t x20 = 828U;
int64_t x21 = -1LL;
static int32_t t7 = -9761;
volatile int32_t x39 = 219;
int8_t x42 = INT8_MIN;
static int32_t x44 = INT32_MIN;
static int32_t t10 = 8088;
int16_t x46 = -1;
int16_t x49 = -1;
int8_t x56 = -1;
volatile int32_t x57 = -1;
static volatile int32_t x59 = 12230349;
static volatile int32_t t14 = 15;
int16_t x63 = -1;
uint8_t x65 = 31U;
uint8_t x72 = 7U;
volatile int32_t t17 = -123918209;
static uint8_t x74 = 28U;
int16_t x75 = 3985;
uint64_t x76 = 178272675350LLU;
int32_t x83 = INT32_MIN;
int8_t x92 = -30;
volatile int32_t t22 = -3;
static uint64_t x98 = UINT64_MAX;
int64_t x104 = -4571794867587LL;
uint32_t x114 = UINT32_MAX;
uint16_t x119 = 19733U;
int16_t x122 = INT16_MIN;
int32_t x123 = 80;
int16_t x138 = 378;
int64_t x140 = -1LL;
int32_t x148 = INT32_MAX;
uint64_t x149 = 552001LLU;
static volatile uint32_t x150 = UINT32_MAX;
volatile int32_t t37 = 340625;
uint8_t x166 = UINT8_MAX;
uint32_t x167 = 167445251U;
volatile int8_t x168 = INT8_MIN;
int64_t x182 = -1LL;
int32_t x183 = INT32_MAX;
int64_t x188 = -560258201369158LL;
int32_t x190 = INT32_MAX;
static int32_t t49 = 33289;
int8_t x214 = -1;
int8_t x215 = 11;
static int8_t x216 = INT8_MIN;
uint16_t x225 = 46U;
static int32_t x227 = -1;
int8_t x233 = INT8_MIN;
volatile int64_t x234 = 28257791791LL;
int16_t x236 = INT16_MIN;
int32_t t58 = 0;
int16_t x244 = INT16_MIN;
int32_t t59 = -231266;
int64_t x246 = INT64_MIN;
volatile uint32_t x250 = UINT32_MAX;
int16_t x251 = INT16_MIN;
int32_t t61 = 17960496;
int16_t x253 = INT16_MAX;
int8_t x259 = INT8_MIN;
static volatile int64_t x261 = -457LL;
int64_t x263 = INT64_MIN;
volatile int32_t x265 = -2793685;
static int16_t x266 = INT16_MIN;
volatile int8_t x269 = 6;
static int8_t x274 = INT8_MIN;
static volatile uint32_t x275 = 109126890U;
volatile int32_t t67 = 180669588;
int32_t x277 = INT32_MIN;
uint8_t x279 = UINT8_MAX;
int64_t x282 = 2112832866069LL;
uint8_t x285 = 14U;
uint16_t x288 = UINT16_MAX;
volatile int32_t t70 = 8112;
volatile uint16_t x289 = 14U;
int32_t x291 = INT32_MIN;
static uint16_t x292 = 6U;
volatile int32_t t71 = -20854086;
static uint64_t x293 = 14488764761369230LLU;
int32_t x296 = INT32_MIN;
volatile int8_t x304 = INT8_MAX;
uint32_t x312 = 14U;
static int64_t x316 = -1LL;
int32_t x318 = 2829822;
static volatile int32_t t78 = 1410803;
int16_t x336 = -2;
volatile int32_t t81 = 2106;
volatile uint64_t x344 = 7073370068LLU;
uint32_t x346 = 3U;
volatile int64_t x348 = INT64_MIN;
int16_t x353 = INT16_MAX;
int64_t x358 = -1LL;
static volatile int32_t x362 = INT32_MAX;
int64_t x365 = 28673447244651LL;
static int8_t x367 = INT8_MAX;
volatile int32_t t90 = -1855;
static uint32_t x386 = 267U;
volatile int32_t t93 = -12181723;
volatile int32_t t95 = 3541;
int32_t x398 = INT32_MIN;
int16_t x399 = INT16_MIN;
int32_t x401 = INT32_MAX;
uint16_t x410 = 147U;
uint8_t x414 = 8U;
uint64_t x421 = 1666301608653304LLU;
uint8_t x424 = 26U;
int16_t x427 = INT16_MIN;
static int32_t t103 = -462;
static int8_t x434 = -45;
int8_t x439 = INT8_MIN;
int16_t x442 = INT16_MIN;
volatile int16_t x444 = INT16_MIN;
int8_t x446 = 1;
int32_t x449 = -95;
int32_t x450 = 0;
int32_t x452 = INT32_MAX;
static int32_t t109 = -2012;
uint32_t x459 = 76U;
volatile int64_t x460 = -119559717844LL;
static volatile int64_t x464 = INT64_MAX;
uint8_t x481 = 9U;
volatile uint8_t x483 = UINT8_MAX;
volatile int16_t x485 = INT16_MAX;
int64_t x489 = -1LL;
static int32_t x492 = INT32_MIN;
static int32_t x502 = 3846;
int32_t t122 = 116545;
volatile int32_t t125 = -2382;
uint32_t x522 = 24533U;
static int32_t x523 = 96849194;
int8_t x524 = INT8_MIN;
uint8_t x525 = UINT8_MAX;
uint16_t x529 = 113U;
int8_t x531 = INT8_MAX;
volatile uint16_t x532 = 224U;
static int16_t x533 = -1;
uint16_t x535 = 26606U;
int32_t x538 = INT32_MAX;
static int64_t x559 = INT64_MIN;
int8_t x560 = INT8_MAX;
static int32_t t133 = 166;
volatile int32_t t134 = 1207;
static uint16_t x565 = UINT16_MAX;
uint32_t x569 = UINT32_MAX;
int16_t x575 = INT16_MIN;
uint8_t x579 = 89U;
uint8_t x580 = 59U;
static volatile int32_t t141 = -2930;
int32_t x593 = -59403;
volatile int32_t t144 = 6168088;
static uint8_t x605 = UINT8_MAX;
uint32_t x607 = 1123327394U;
int32_t x609 = 27146158;
int8_t x611 = INT8_MIN;
int64_t x614 = INT64_MIN;
int64_t x615 = INT64_MIN;
volatile int64_t x618 = INT64_MAX;
int16_t x619 = -1;
int8_t x620 = INT8_MIN;
uint8_t x621 = UINT8_MAX;
uint16_t x629 = UINT16_MAX;
int8_t x631 = 25;
int16_t x632 = -3;
volatile int32_t t151 = 3773;
volatile uint32_t x639 = 44U;
int8_t x643 = -31;
int32_t t154 = -354416054;
int16_t x657 = INT16_MIN;
static uint64_t x659 = 14186150820539LLU;
uint8_t x665 = 0U;
volatile int16_t x685 = 909;
int32_t x686 = -1;
int32_t x688 = 5;
int64_t x701 = INT64_MIN;
uint64_t x703 = UINT64_MAX;
static volatile int32_t t168 = -3780;
uint8_t x707 = 18U;
int16_t x714 = -1;
static int8_t x721 = INT8_MIN;
uint64_t x729 = UINT64_MAX;
int32_t x737 = INT32_MIN;
uint16_t x740 = 6U;
uint8_t x744 = 14U;
int32_t x748 = INT32_MAX;
static uint32_t x749 = 59U;
volatile int64_t x755 = -566830LL;
uint64_t x757 = UINT64_MAX;
int8_t x761 = INT8_MIN;
int32_t x764 = INT32_MIN;
volatile int32_t t182 = 9023690;
int64_t x775 = INT64_MIN;
volatile int64_t x776 = -50737379228616526LL;
int16_t x779 = INT16_MIN;
static volatile int32_t x786 = 801027164;
int16_t x787 = INT16_MIN;
int16_t x793 = INT16_MAX;
volatile int8_t x797 = -33;
int16_t x801 = INT16_MIN;
uint8_t x802 = 105U;
uint64_t x803 = 15415966082LLU;
uint8_t x809 = 11U;
uint32_t x812 = UINT32_MAX;
int32_t t195 = -857964401;
uint32_t x821 = UINT32_MAX;
int8_t x822 = INT8_MIN;
uint16_t x831 = 1931U;
volatile uint64_t x833 = 1151676881LLU;
static int32_t x835 = -105870;


void f0(void) {
    	int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MIN;
	int8_t x4 = -5;
	volatile int32_t t0 = -242086;

    t0 = (x1==(x2|(x3%x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x5 = 507830U;
	int64_t x6 = -1LL;
	static int64_t x8 = 326LL;
	int32_t t1 = -197;

    t1 = (x5==(x6|(x7%x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MIN;
	static uint64_t x10 = 2116036398LLU;
	int64_t x12 = INT64_MAX;
	volatile int32_t t2 = -5;

    t2 = (x9==(x10|(x11%x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	static int8_t x14 = 1;
	volatile int32_t x15 = INT32_MIN;
	int16_t x16 = -1;
	int32_t t3 = -5;

    t3 = (x13==(x14|(x15%x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MAX;
	int64_t x18 = -165425868982LL;
	static uint16_t x19 = UINT16_MAX;
	volatile int32_t t4 = 959;

    t4 = (x17==(x18|(x19%x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = INT64_MIN;
	static uint32_t x23 = 189603U;
	static uint16_t x24 = 111U;
	static volatile int32_t t5 = 39751804;

    t5 = (x21==(x22|(x23%x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = INT8_MIN;
	volatile int32_t x26 = -1;
	int32_t x27 = INT32_MIN;
	static int8_t x28 = INT8_MIN;
	int32_t t6 = 467;

    t6 = (x25==(x26|(x27%x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = INT64_MIN;
	volatile uint8_t x30 = 1U;
	int32_t x31 = 51569648;
	static volatile int64_t x32 = INT64_MIN;

    t7 = (x29==(x30|(x31%x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	uint32_t x34 = 6255606U;
	int64_t x35 = 7976LL;
	uint64_t x36 = UINT64_MAX;
	int32_t t8 = -3880;

    t8 = (x33==(x34|(x35%x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	int32_t x38 = INT32_MIN;
	static int64_t x40 = INT64_MAX;
	volatile int32_t t9 = 26;

    t9 = (x37==(x38|(x39%x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = 25;
	int32_t x43 = INT32_MIN;

    t10 = (x41==(x42|(x43%x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	static volatile uint32_t x47 = UINT32_MAX;
	int16_t x48 = -1;
	volatile int32_t t11 = 15;

    t11 = (x45==(x46|(x47%x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x50 = 8273756LLU;
	int16_t x51 = 1;
	static int8_t x52 = 23;
	int32_t t12 = -516;

    t12 = (x49==(x50|(x51%x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 1U;
	int64_t x54 = INT64_MAX;
	static int64_t x55 = INT64_MIN;
	int32_t t13 = 12277905;

    t13 = (x53==(x54|(x55%x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = INT64_MIN;
	volatile uint8_t x60 = UINT8_MAX;

    t14 = (x57==(x58|(x59%x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = -1;
	int32_t x62 = 19005;
	int8_t x64 = INT8_MIN;
	int32_t t15 = 24545305;

    t15 = (x61==(x62|(x63%x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x66 = INT16_MIN;
	int32_t x67 = -5480735;
	int64_t x68 = -2152361300LL;
	volatile int32_t t16 = 40128;

    t16 = (x65==(x66|(x67%x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 6U;
	uint32_t x70 = 211905U;
	uint8_t x71 = 1U;

    t17 = (x69==(x70|(x71%x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 1U;
	volatile int32_t t18 = -3;

    t18 = (x73==(x74|(x75%x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x77 = 268313254U;
	uint32_t x78 = UINT32_MAX;
	static int16_t x79 = -25;
	volatile uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = -16191;

    t19 = (x77==(x78|(x79%x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = -1;
	int32_t x82 = -1;
	int32_t x84 = 67;
	volatile int32_t t20 = 7;

    t20 = (x81==(x82|(x83%x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	uint64_t x86 = 91LLU;
	volatile uint8_t x87 = UINT8_MAX;
	static volatile int16_t x88 = -7;
	volatile int32_t t21 = -425;

    t21 = (x85==(x86|(x87%x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -12;
	int64_t x90 = INT64_MAX;
	int16_t x91 = -3727;

    t22 = (x89==(x90|(x91%x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	uint32_t x94 = UINT32_MAX;
	int8_t x95 = INT8_MIN;
	volatile uint64_t x96 = 4682203729003157LLU;
	volatile int32_t t23 = -2909104;

    t23 = (x93==(x94|(x95%x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 1722U;
	uint64_t x99 = 11483LLU;
	int64_t x100 = INT64_MIN;
	volatile int32_t t24 = 910695;

    t24 = (x97==(x98|(x99%x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MAX;
	volatile uint8_t x102 = UINT8_MAX;
	int8_t x103 = INT8_MIN;
	int32_t t25 = 6;

    t25 = (x101==(x102|(x103%x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = UINT64_MAX;
	int32_t x106 = INT32_MIN;
	int32_t x107 = INT32_MAX;
	static int16_t x108 = INT16_MAX;
	static volatile int32_t t26 = -1;

    t26 = (x105==(x106|(x107%x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = 3017;
	int32_t x110 = INT32_MIN;
	int16_t x111 = -4;
	uint32_t x112 = 32768U;
	int32_t t27 = -299185;

    t27 = (x109==(x110|(x111%x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	int64_t x115 = -263856632LL;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t28 = -258;

    t28 = (x113==(x114|(x115%x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x117 = INT64_MIN;
	volatile int16_t x118 = -5;
	static int16_t x120 = -1;
	volatile int32_t t29 = 1467;

    t29 = (x117==(x118|(x119%x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int8_t x124 = -1;
	volatile int32_t t30 = 177;

    t30 = (x121==(x122|(x123%x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 18U;
	volatile uint64_t x126 = 5569599421LLU;
	static int16_t x127 = 2614;
	uint64_t x128 = UINT64_MAX;
	int32_t t31 = -160841;

    t31 = (x125==(x126|(x127%x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	int16_t x130 = INT16_MIN;
	int16_t x131 = 0;
	int8_t x132 = -1;
	volatile int32_t t32 = -55023063;

    t32 = (x129==(x130|(x131%x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x133 = 416934390;
	volatile uint8_t x134 = 0U;
	int16_t x135 = -1;
	uint32_t x136 = 1399564759U;
	static volatile int32_t t33 = 19877790;

    t33 = (x133==(x134|(x135%x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MAX;
	int32_t x139 = INT32_MIN;
	volatile int32_t t34 = -705678;

    t34 = (x137==(x138|(x139%x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x141 = INT16_MIN;
	uint8_t x142 = 1U;
	uint64_t x143 = UINT64_MAX;
	int32_t x144 = INT32_MIN;
	static int32_t t35 = -46873;

    t35 = (x141==(x142|(x143%x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MAX;
	int8_t x146 = INT8_MIN;
	int8_t x147 = -1;
	static volatile int32_t t36 = 113518;

    t36 = (x145==(x146|(x147%x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x151 = INT32_MIN;
	static int8_t x152 = INT8_MIN;

    t37 = (x149==(x150|(x151%x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MAX;
	uint64_t x154 = UINT64_MAX;
	int16_t x155 = INT16_MAX;
	uint64_t x156 = 3696561LLU;
	int32_t t38 = -72583316;

    t38 = (x153==(x154|(x155%x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = 1U;
	int32_t x158 = INT32_MIN;
	int32_t x159 = INT32_MIN;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -48;

    t39 = (x157==(x158|(x159%x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = -2;
	static int16_t x162 = INT16_MAX;
	int16_t x163 = -2659;
	volatile int8_t x164 = -1;
	int32_t t40 = 28;

    t40 = (x161==(x162|(x163%x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x165 = 2496785LL;
	volatile int32_t t41 = -40629571;

    t41 = (x165==(x166|(x167%x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -3233;
	int8_t x170 = INT8_MIN;
	volatile uint8_t x171 = UINT8_MAX;
	int16_t x172 = -1;
	int32_t t42 = 3837833;

    t42 = (x169==(x170|(x171%x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 243U;
	int64_t x174 = INT64_MIN;
	volatile int32_t x175 = 918528295;
	int64_t x176 = -1LL;
	volatile int32_t t43 = 463873;

    t43 = (x173==(x174|(x175%x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x177 = -1LL;
	int16_t x178 = INT16_MIN;
	int16_t x179 = INT16_MIN;
	static uint64_t x180 = 37966408098208094LLU;
	volatile int32_t t44 = 47102471;

    t44 = (x177==(x178|(x179%x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = 2029391862248LL;
	int64_t x184 = INT64_MIN;
	volatile int32_t t45 = -27497030;

    t45 = (x181==(x182|(x183%x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	int8_t x186 = 9;
	static uint16_t x187 = 15139U;
	volatile int32_t t46 = -198550018;

    t46 = (x185==(x186|(x187%x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x189 = INT16_MAX;
	uint8_t x191 = UINT8_MAX;
	int64_t x192 = INT64_MAX;
	int32_t t47 = -29694571;

    t47 = (x189==(x190|(x191%x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = -1;
	int8_t x194 = INT8_MAX;
	volatile int16_t x195 = -6395;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = 55;

    t48 = (x193==(x194|(x195%x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	volatile int8_t x198 = INT8_MIN;
	static uint8_t x199 = 0U;
	int8_t x200 = -1;

    t49 = (x197==(x198|(x199%x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = 12U;
	int16_t x202 = INT16_MIN;
	volatile int8_t x203 = -1;
	volatile int32_t x204 = 29;
	int32_t t50 = 2504;

    t50 = (x201==(x202|(x203%x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x209 = INT64_MIN;
	static uint16_t x210 = 14U;
	uint32_t x211 = UINT32_MAX;
	int32_t x212 = -1;
	int32_t t51 = -7930;

    t51 = (x209==(x210|(x211%x212)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x213 = UINT8_MAX;
	volatile int32_t t52 = 2998;

    t52 = (x213==(x214|(x215%x216)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x217 = -17LL;
	int64_t x218 = -1LL;
	int8_t x219 = INT8_MIN;
	uint16_t x220 = UINT16_MAX;
	int32_t t53 = -19413898;

    t53 = (x217==(x218|(x219%x220)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x221 = -1LL;
	static uint16_t x222 = 533U;
	uint8_t x223 = 2U;
	static uint16_t x224 = 8U;
	static int32_t t54 = 1;

    t54 = (x221==(x222|(x223%x224)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x226 = INT16_MAX;
	int8_t x228 = INT8_MIN;
	int32_t t55 = 40619;

    t55 = (x225==(x226|(x227%x228)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x229 = 721U;
	static uint8_t x230 = UINT8_MAX;
	uint16_t x231 = 94U;
	static volatile int32_t x232 = INT32_MIN;
	int32_t t56 = 1;

    t56 = (x229==(x230|(x231%x232)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x235 = 6124LL;
	volatile int32_t t57 = 741866;

    t57 = (x233==(x234|(x235%x236)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x237 = UINT32_MAX;
	uint64_t x238 = 14566163886082LLU;
	uint8_t x239 = UINT8_MAX;
	int16_t x240 = -1;

    t58 = (x237==(x238|(x239%x240)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x241 = 27U;
	int16_t x242 = INT16_MIN;
	volatile uint8_t x243 = 3U;

    t59 = (x241==(x242|(x243%x244)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x245 = INT32_MIN;
	uint16_t x247 = UINT16_MAX;
	uint16_t x248 = UINT16_MAX;
	static int32_t t60 = -217;

    t60 = (x245==(x246|(x247%x248)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x249 = -1;
	int64_t x252 = -91LL;

    t61 = (x249==(x250|(x251%x252)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x254 = INT16_MAX;
	int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MIN;
	int32_t t62 = -5335705;

    t62 = (x253==(x254|(x255%x256)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x257 = -1;
	int8_t x258 = 62;
	volatile uint8_t x260 = 15U;
	static int32_t t63 = 1179931;

    t63 = (x257==(x258|(x259%x260)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x262 = UINT8_MAX;
	int64_t x264 = INT64_MAX;
	static int32_t t64 = 336679;

    t64 = (x261==(x262|(x263%x264)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x267 = 352;
	int32_t x268 = INT32_MIN;
	volatile int32_t t65 = 65203;

    t65 = (x265==(x266|(x267%x268)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x270 = -11461;
	int32_t x271 = INT32_MIN;
	uint64_t x272 = 3085455005583500LLU;
	volatile int32_t t66 = -8;

    t66 = (x269==(x270|(x271%x272)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x273 = -6393;
	int32_t x276 = -102;

    t67 = (x273==(x274|(x275%x276)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x278 = UINT8_MAX;
	uint64_t x280 = UINT64_MAX;
	int32_t t68 = 17970566;

    t68 = (x277==(x278|(x279%x280)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x281 = -2439073;
	int16_t x283 = INT16_MIN;
	uint64_t x284 = UINT64_MAX;
	int32_t t69 = 650666;

    t69 = (x281==(x282|(x283%x284)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x286 = INT8_MIN;
	int16_t x287 = -10;

    t70 = (x285==(x286|(x287%x288)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x290 = -1LL;

    t71 = (x289==(x290|(x291%x292)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x294 = 286U;
	int32_t x295 = INT32_MIN;
	volatile int32_t t72 = 79107;

    t72 = (x293==(x294|(x295%x296)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x297 = 1U;
	volatile uint64_t x298 = 13LLU;
	int32_t x299 = INT32_MAX;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t73 = -55372;

    t73 = (x297==(x298|(x299%x300)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x301 = 119821U;
	int32_t x302 = INT32_MIN;
	uint8_t x303 = UINT8_MAX;
	volatile int32_t t74 = 0;

    t74 = (x301==(x302|(x303%x304)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x309 = -1;
	uint64_t x310 = 13271300LLU;
	uint8_t x311 = UINT8_MAX;
	int32_t t75 = -2035897;

    t75 = (x309==(x310|(x311%x312)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x313 = 8594U;
	int8_t x314 = -34;
	int64_t x315 = -1LL;
	int32_t t76 = -1;

    t76 = (x313==(x314|(x315%x316)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x317 = INT64_MAX;
	int16_t x319 = -3725;
	static int64_t x320 = INT64_MAX;
	int32_t t77 = 4713411;

    t77 = (x317==(x318|(x319%x320)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x321 = INT32_MIN;
	int32_t x322 = INT32_MIN;
	int64_t x323 = -1LL;
	int8_t x324 = -55;

    t78 = (x321==(x322|(x323%x324)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x325 = -1LL;
	int8_t x326 = 3;
	static volatile uint32_t x327 = UINT32_MAX;
	int64_t x328 = -457659LL;
	int32_t t79 = -32305761;

    t79 = (x325==(x326|(x327%x328)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x329 = 33U;
	int32_t x330 = -1;
	uint32_t x331 = 13596379U;
	static uint32_t x332 = 2U;
	int32_t t80 = -1;

    t80 = (x329==(x330|(x331%x332)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x333 = -11;
	int64_t x334 = INT64_MIN;
	volatile uint32_t x335 = 109561461U;

    t81 = (x333==(x334|(x335%x336)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x337 = 3044U;
	volatile int8_t x338 = INT8_MAX;
	uint8_t x339 = 6U;
	int8_t x340 = -2;
	volatile int32_t t82 = 3;

    t82 = (x337==(x338|(x339%x340)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x341 = -1;
	volatile int32_t x342 = -1;
	int16_t x343 = -1;
	int32_t t83 = 9514450;

    t83 = (x341==(x342|(x343%x344)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x345 = -1;
	uint8_t x347 = 13U;
	volatile int32_t t84 = 0;

    t84 = (x345==(x346|(x347%x348)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x354 = INT8_MIN;
	uint32_t x355 = 141508923U;
	uint16_t x356 = 8835U;
	int32_t t85 = -58330291;

    t85 = (x353==(x354|(x355%x356)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x357 = -1;
	int32_t x359 = INT32_MIN;
	int64_t x360 = 3955264144359376480LL;
	volatile int32_t t86 = -2494719;

    t86 = (x357==(x358|(x359%x360)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x361 = INT64_MAX;
	uint64_t x363 = 753331982023316LLU;
	int64_t x364 = -30903310LL;
	volatile int32_t t87 = 32165;

    t87 = (x361==(x362|(x363%x364)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x366 = UINT16_MAX;
	int16_t x368 = INT16_MIN;
	int32_t t88 = 814044;

    t88 = (x365==(x366|(x367%x368)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x369 = INT8_MIN;
	volatile int8_t x370 = 0;
	uint16_t x371 = 205U;
	static int32_t x372 = INT32_MIN;
	static int32_t t89 = 18990;

    t89 = (x369==(x370|(x371%x372)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x373 = UINT32_MAX;
	static int32_t x374 = -1;
	int64_t x375 = 471LL;
	int64_t x376 = -1LL;

    t90 = (x373==(x374|(x375%x376)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x377 = -25885651247LL;
	int8_t x378 = INT8_MIN;
	volatile int8_t x379 = 2;
	int64_t x380 = INT64_MAX;
	volatile int32_t t91 = -217692;

    t91 = (x377==(x378|(x379%x380)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x381 = UINT16_MAX;
	int16_t x382 = 1;
	static uint32_t x383 = UINT32_MAX;
	volatile uint8_t x384 = 6U;
	int32_t t92 = 107;

    t92 = (x381==(x382|(x383%x384)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x385 = 34U;
	uint64_t x387 = 1009519465LLU;
	static volatile int64_t x388 = -1LL;

    t93 = (x385==(x386|(x387%x388)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x389 = 6044U;
	int16_t x390 = 80;
	static int64_t x391 = INT64_MAX;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t94 = 18827047;

    t94 = (x389==(x390|(x391%x392)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x393 = UINT64_MAX;
	int32_t x394 = -33;
	int8_t x395 = 5;
	static uint16_t x396 = 837U;

    t95 = (x393==(x394|(x395%x396)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x397 = INT32_MIN;
	volatile int16_t x400 = INT16_MIN;
	int32_t t96 = -1795;

    t96 = (x397==(x398|(x399%x400)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x402 = 201U;
	uint8_t x403 = UINT8_MAX;
	int32_t x404 = INT32_MIN;
	static volatile int32_t t97 = 117761824;

    t97 = (x401==(x402|(x403%x404)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x405 = UINT8_MAX;
	int8_t x406 = 45;
	int32_t x407 = INT32_MIN;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t98 = 80140;

    t98 = (x405==(x406|(x407%x408)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint32_t x409 = 1518281431U;
	int32_t x411 = -1;
	uint64_t x412 = 100461120926613956LLU;
	volatile int32_t t99 = 326376;

    t99 = (x409==(x410|(x411%x412)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x413 = INT16_MIN;
	int32_t x415 = -1203870;
	volatile int8_t x416 = -1;
	int32_t t100 = 2;

    t100 = (x413==(x414|(x415%x416)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x417 = INT32_MAX;
	int16_t x418 = INT16_MIN;
	int32_t x419 = -3570;
	static int32_t x420 = INT32_MAX;
	int32_t t101 = -40580588;

    t101 = (x417==(x418|(x419%x420)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x422 = 1266U;
	static volatile uint16_t x423 = 1U;
	volatile int32_t t102 = 19908;

    t102 = (x421==(x422|(x423%x424)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x425 = 515673057097167LL;
	uint16_t x426 = UINT16_MAX;
	volatile uint32_t x428 = UINT32_MAX;

    t103 = (x425==(x426|(x427%x428)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x429 = -1;
	int64_t x430 = -4361532130LL;
	int64_t x431 = -1LL;
	static uint16_t x432 = 29987U;
	static int32_t t104 = 282860652;

    t104 = (x429==(x430|(x431%x432)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x433 = -1;
	int64_t x435 = INT64_MIN;
	int64_t x436 = 1LL;
	static volatile int32_t t105 = -1412;

    t105 = (x433==(x434|(x435%x436)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x437 = 3660347077865705290LLU;
	int16_t x438 = -387;
	static int16_t x440 = INT16_MIN;
	static int32_t t106 = -1;

    t106 = (x437==(x438|(x439%x440)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x441 = -11103648;
	int32_t x443 = INT32_MIN;
	static int32_t t107 = -6643175;

    t107 = (x441==(x442|(x443%x444)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x445 = -1;
	int16_t x447 = -3;
	int64_t x448 = INT64_MAX;
	int32_t t108 = 17782;

    t108 = (x445==(x446|(x447%x448)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x451 = -1;

    t109 = (x449==(x450|(x451%x452)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x453 = -85479689LL;
	static uint64_t x454 = UINT64_MAX;
	volatile int32_t x455 = 0;
	int8_t x456 = -1;
	volatile int32_t t110 = -780933320;

    t110 = (x453==(x454|(x455%x456)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x457 = -390845726879436LL;
	volatile int32_t x458 = -1;
	static int32_t t111 = -66935197;

    t111 = (x457==(x458|(x459%x460)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x461 = 2150529835632250LLU;
	int64_t x462 = -1LL;
	int64_t x463 = -1LL;
	int32_t t112 = -10433860;

    t112 = (x461==(x462|(x463%x464)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x465 = INT64_MIN;
	uint8_t x466 = 1U;
	int16_t x467 = INT16_MAX;
	uint16_t x468 = UINT16_MAX;
	static int32_t t113 = 0;

    t113 = (x465==(x466|(x467%x468)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x473 = INT16_MAX;
	int64_t x474 = INT64_MIN;
	int8_t x475 = -1;
	int64_t x476 = 73918454393715LL;
	int32_t t114 = -193525018;

    t114 = (x473==(x474|(x475%x476)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x477 = 3U;
	static uint64_t x478 = 1181314448779134525LLU;
	int8_t x479 = 7;
	int16_t x480 = -1;
	static int32_t t115 = -2;

    t115 = (x477==(x478|(x479%x480)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x482 = -1;
	int8_t x484 = -34;
	static volatile int32_t t116 = -41411;

    t116 = (x481==(x482|(x483%x484)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x486 = -1;
	uint32_t x487 = 2U;
	static int16_t x488 = INT16_MIN;
	volatile int32_t t117 = -43299535;

    t117 = (x485==(x486|(x487%x488)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x490 = 15U;
	uint32_t x491 = UINT32_MAX;
	int32_t t118 = -6992;

    t118 = (x489==(x490|(x491%x492)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x493 = UINT16_MAX;
	static int8_t x494 = INT8_MAX;
	uint64_t x495 = 15264LLU;
	int8_t x496 = INT8_MIN;
	volatile int32_t t119 = -36750520;

    t119 = (x493==(x494|(x495%x496)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x497 = INT64_MIN;
	static int64_t x498 = -3553895852508190916LL;
	int16_t x499 = -115;
	static int64_t x500 = INT64_MIN;
	int32_t t120 = 2559;

    t120 = (x497==(x498|(x499%x500)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x501 = INT64_MAX;
	int32_t x503 = -1;
	uint32_t x504 = UINT32_MAX;
	volatile int32_t t121 = 9822120;

    t121 = (x501==(x502|(x503%x504)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x505 = INT16_MIN;
	static uint64_t x506 = UINT64_MAX;
	volatile int8_t x507 = INT8_MIN;
	static int16_t x508 = -12;

    t122 = (x505==(x506|(x507%x508)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x509 = INT32_MAX;
	static volatile uint8_t x510 = UINT8_MAX;
	int32_t x511 = INT32_MIN;
	uint32_t x512 = 51032U;
	static volatile int32_t t123 = 32;

    t123 = (x509==(x510|(x511%x512)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x513 = 60U;
	uint64_t x514 = 161889062178834LLU;
	int64_t x515 = INT64_MIN;
	static volatile int8_t x516 = INT8_MIN;
	int32_t t124 = -38209081;

    t124 = (x513==(x514|(x515%x516)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x517 = 4353167529LLU;
	static int8_t x518 = INT8_MIN;
	uint8_t x519 = 94U;
	int32_t x520 = -82;

    t125 = (x517==(x518|(x519%x520)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int8_t x521 = -1;
	volatile int32_t t126 = -12563;

    t126 = (x521==(x522|(x523%x524)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x526 = 6119LLU;
	static volatile uint32_t x527 = 730U;
	static volatile int64_t x528 = INT64_MAX;
	int32_t t127 = 1513067;

    t127 = (x525==(x526|(x527%x528)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x530 = 4360434;
	volatile int32_t t128 = 5802;

    t128 = (x529==(x530|(x531%x532)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x534 = -295;
	static uint32_t x536 = 114846U;
	int32_t t129 = 1;

    t129 = (x533==(x534|(x535%x536)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x537 = UINT8_MAX;
	volatile int64_t x539 = INT64_MAX;
	volatile int8_t x540 = INT8_MAX;
	volatile int32_t t130 = -3246533;

    t130 = (x537==(x538|(x539%x540)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x541 = INT32_MIN;
	int16_t x542 = -1;
	int8_t x543 = 3;
	uint64_t x544 = 89LLU;
	volatile int32_t t131 = 3;

    t131 = (x541==(x542|(x543%x544)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x545 = UINT32_MAX;
	int16_t x546 = 1;
	int16_t x547 = 332;
	int16_t x548 = -1;
	int32_t t132 = 0;

    t132 = (x545==(x546|(x547%x548)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x557 = UINT32_MAX;
	uint8_t x558 = 32U;

    t133 = (x557==(x558|(x559%x560)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x561 = UINT16_MAX;
	int8_t x562 = INT8_MIN;
	uint16_t x563 = UINT16_MAX;
	uint32_t x564 = 25169318U;

    t134 = (x561==(x562|(x563%x564)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x566 = INT8_MAX;
	int32_t x567 = -363;
	volatile int8_t x568 = -1;
	volatile int32_t t135 = 16131;

    t135 = (x565==(x566|(x567%x568)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x570 = 1;
	uint32_t x571 = UINT32_MAX;
	int16_t x572 = INT16_MIN;
	volatile int32_t t136 = -59003021;

    t136 = (x569==(x570|(x571%x572)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x573 = 2366U;
	volatile uint32_t x574 = 96491606U;
	static int64_t x576 = -36778LL;
	volatile int32_t t137 = 167118282;

    t137 = (x573==(x574|(x575%x576)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x577 = INT8_MIN;
	uint32_t x578 = UINT32_MAX;
	volatile int32_t t138 = 1498;

    t138 = (x577==(x578|(x579%x580)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x581 = 422883655;
	int16_t x582 = INT16_MIN;
	uint8_t x583 = 3U;
	uint32_t x584 = UINT32_MAX;
	static volatile int32_t t139 = -15957432;

    t139 = (x581==(x582|(x583%x584)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x585 = INT8_MIN;
	static int64_t x586 = INT64_MAX;
	static volatile int8_t x587 = INT8_MIN;
	uint64_t x588 = 374LLU;
	int32_t t140 = 20096;

    t140 = (x585==(x586|(x587%x588)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x589 = -1LL;
	static uint64_t x590 = UINT64_MAX;
	uint32_t x591 = UINT32_MAX;
	int32_t x592 = INT32_MAX;

    t141 = (x589==(x590|(x591%x592)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x594 = INT8_MIN;
	uint32_t x595 = UINT32_MAX;
	int8_t x596 = INT8_MIN;
	static int32_t t142 = -1;

    t142 = (x593==(x594|(x595%x596)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x597 = 336565;
	int16_t x598 = INT16_MIN;
	int64_t x599 = 355653378779LL;
	uint64_t x600 = 5280600681048412LLU;
	volatile int32_t t143 = 20085;

    t143 = (x597==(x598|(x599%x600)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x601 = -862;
	uint8_t x602 = UINT8_MAX;
	int32_t x603 = INT32_MAX;
	uint32_t x604 = 359U;

    t144 = (x601==(x602|(x603%x604)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x606 = UINT32_MAX;
	volatile int64_t x608 = INT64_MIN;
	int32_t t145 = 2540;

    t145 = (x605==(x606|(x607%x608)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x610 = UINT16_MAX;
	int32_t x612 = INT32_MIN;
	int32_t t146 = -90;

    t146 = (x609==(x610|(x611%x612)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x613 = INT16_MIN;
	uint16_t x616 = 7843U;
	volatile int32_t t147 = 3501168;

    t147 = (x613==(x614|(x615%x616)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x617 = INT8_MIN;
	int32_t t148 = -3901188;

    t148 = (x617==(x618|(x619%x620)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x622 = 1U;
	int32_t x623 = 5;
	int32_t x624 = INT32_MAX;
	volatile int32_t t149 = -433696896;

    t149 = (x621==(x622|(x623%x624)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x625 = INT64_MAX;
	static int16_t x626 = -216;
	int32_t x627 = INT32_MIN;
	int32_t x628 = INT32_MIN;
	volatile int32_t t150 = -339;

    t150 = (x625==(x626|(x627%x628)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x630 = 1U;

    t151 = (x629==(x630|(x631%x632)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x633 = -1;
	static int16_t x634 = INT16_MAX;
	int32_t x635 = -1;
	uint16_t x636 = 8177U;
	static int32_t t152 = -2607442;

    t152 = (x633==(x634|(x635%x636)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x637 = -1;
	uint8_t x638 = UINT8_MAX;
	volatile int8_t x640 = INT8_MAX;
	int32_t t153 = -152078;

    t153 = (x637==(x638|(x639%x640)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x641 = 507663U;
	volatile int16_t x642 = -1287;
	static int16_t x644 = 1787;

    t154 = (x641==(x642|(x643%x644)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x645 = INT64_MAX;
	static int64_t x646 = 79LL;
	uint8_t x647 = 1U;
	int8_t x648 = INT8_MAX;
	static volatile int32_t t155 = 578029;

    t155 = (x645==(x646|(x647%x648)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x649 = UINT32_MAX;
	int64_t x650 = INT64_MIN;
	volatile int8_t x651 = -1;
	static int16_t x652 = -13;
	volatile int32_t t156 = -1780;

    t156 = (x649==(x650|(x651%x652)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x653 = 2062593473LLU;
	static int8_t x654 = -1;
	volatile int64_t x655 = 285900LL;
	volatile uint8_t x656 = UINT8_MAX;
	int32_t t157 = -11;

    t157 = (x653==(x654|(x655%x656)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x658 = INT16_MAX;
	int8_t x660 = 2;
	int32_t t158 = -34367932;

    t158 = (x657==(x658|(x659%x660)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x661 = -11017246;
	int16_t x662 = 498;
	int8_t x663 = INT8_MIN;
	int16_t x664 = INT16_MIN;
	static volatile int32_t t159 = 30079;

    t159 = (x661==(x662|(x663%x664)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x666 = 15;
	int8_t x667 = 0;
	static int16_t x668 = -1;
	int32_t t160 = 723477846;

    t160 = (x665==(x666|(x667%x668)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x669 = UINT8_MAX;
	int8_t x670 = INT8_MIN;
	int8_t x671 = -1;
	int8_t x672 = -7;
	int32_t t161 = 141728367;

    t161 = (x669==(x670|(x671%x672)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x677 = INT16_MAX;
	volatile uint32_t x678 = 57730U;
	int8_t x679 = INT8_MIN;
	volatile int64_t x680 = 9LL;
	int32_t t162 = -1;

    t162 = (x677==(x678|(x679%x680)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x681 = -100538975LL;
	uint16_t x682 = UINT16_MAX;
	uint64_t x683 = 247548071LLU;
	int16_t x684 = 1;
	int32_t t163 = -19;

    t163 = (x681==(x682|(x683%x684)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x687 = -15;
	int32_t t164 = 3158491;

    t164 = (x685==(x686|(x687%x688)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x689 = -1802;
	int8_t x690 = -1;
	uint64_t x691 = 9093141153LLU;
	static int16_t x692 = -1;
	volatile int32_t t165 = 334;

    t165 = (x689==(x690|(x691%x692)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint64_t x693 = 3918060838079LLU;
	uint16_t x694 = UINT16_MAX;
	volatile uint32_t x695 = 2854U;
	int64_t x696 = -421137LL;
	static int32_t t166 = -21380;

    t166 = (x693==(x694|(x695%x696)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x697 = 1;
	uint8_t x698 = 2U;
	volatile uint8_t x699 = 56U;
	int64_t x700 = INT64_MIN;
	int32_t t167 = -1919;

    t167 = (x697==(x698|(x699%x700)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x702 = UINT64_MAX;
	static uint32_t x704 = 63U;

    t168 = (x701==(x702|(x703%x704)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x705 = UINT16_MAX;
	volatile int16_t x706 = INT16_MAX;
	uint64_t x708 = 26746LLU;
	volatile int32_t t169 = -55152;

    t169 = (x705==(x706|(x707%x708)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x709 = INT64_MIN;
	int32_t x710 = INT32_MIN;
	static int16_t x711 = -1;
	uint32_t x712 = 5336U;
	volatile int32_t t170 = -1053912748;

    t170 = (x709==(x710|(x711%x712)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x713 = UINT16_MAX;
	volatile int32_t x715 = 7;
	int64_t x716 = -47280LL;
	static int32_t t171 = 139161629;

    t171 = (x713==(x714|(x715%x716)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x717 = -1;
	int64_t x718 = -310248593742LL;
	volatile uint8_t x719 = UINT8_MAX;
	volatile uint64_t x720 = 1653LLU;
	volatile int32_t t172 = -1327952;

    t172 = (x717==(x718|(x719%x720)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x722 = INT64_MIN;
	int64_t x723 = -457479693317075LL;
	int16_t x724 = INT16_MAX;
	volatile int32_t t173 = -91770;

    t173 = (x721==(x722|(x723%x724)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x730 = INT16_MIN;
	int32_t x731 = INT32_MIN;
	static int32_t x732 = INT32_MIN;
	volatile int32_t t174 = -892185;

    t174 = (x729==(x730|(x731%x732)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x733 = UINT8_MAX;
	uint16_t x734 = UINT16_MAX;
	int8_t x735 = -1;
	int8_t x736 = INT8_MIN;
	int32_t t175 = -5;

    t175 = (x733==(x734|(x735%x736)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x738 = 55U;
	int32_t x739 = INT32_MIN;
	static int32_t t176 = -4414315;

    t176 = (x737==(x738|(x739%x740)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x741 = -1774;
	int32_t x742 = -1;
	static int32_t x743 = INT32_MIN;
	volatile int32_t t177 = -4241;

    t177 = (x741==(x742|(x743%x744)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x745 = INT8_MIN;
	int8_t x746 = -3;
	int64_t x747 = INT64_MIN;
	static volatile int32_t t178 = -8000781;

    t178 = (x745==(x746|(x747%x748)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x750 = 365398U;
	volatile uint16_t x751 = UINT16_MAX;
	int16_t x752 = -1;
	volatile int32_t t179 = -29;

    t179 = (x749==(x750|(x751%x752)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x753 = UINT8_MAX;
	uint64_t x754 = 365340245LLU;
	int16_t x756 = INT16_MIN;
	int32_t t180 = 237000;

    t180 = (x753==(x754|(x755%x756)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x758 = 31;
	volatile int32_t x759 = -125952;
	volatile int8_t x760 = INT8_MAX;
	int32_t t181 = 6908;

    t181 = (x757==(x758|(x759%x760)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x762 = INT8_MAX;
	int64_t x763 = INT64_MAX;

    t182 = (x761==(x762|(x763%x764)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x765 = INT16_MAX;
	int64_t x766 = INT64_MAX;
	int8_t x767 = INT8_MIN;
	int32_t x768 = -1;
	volatile int32_t t183 = 4872;

    t183 = (x765==(x766|(x767%x768)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x769 = INT64_MIN;
	int32_t x770 = INT32_MIN;
	int32_t x771 = 31114007;
	int8_t x772 = 14;
	int32_t t184 = -4;

    t184 = (x769==(x770|(x771%x772)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x773 = -678824;
	int16_t x774 = -1;
	int32_t t185 = -60422018;

    t185 = (x773==(x774|(x775%x776)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x777 = -4;
	int32_t x778 = -1;
	volatile int32_t x780 = -53896;
	int32_t t186 = 16924462;

    t186 = (x777==(x778|(x779%x780)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x781 = UINT8_MAX;
	static uint16_t x782 = 0U;
	uint32_t x783 = 2625U;
	int32_t x784 = 8;
	int32_t t187 = 18;

    t187 = (x781==(x782|(x783%x784)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x785 = -1;
	int8_t x788 = -1;
	static int32_t t188 = -100142;

    t188 = (x785==(x786|(x787%x788)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x789 = 778235;
	uint16_t x790 = UINT16_MAX;
	uint32_t x791 = 166325U;
	int32_t x792 = -1;
	volatile int32_t t189 = 497019949;

    t189 = (x789==(x790|(x791%x792)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x794 = INT64_MIN;
	volatile int64_t x795 = INT64_MAX;
	uint16_t x796 = 27065U;
	static volatile int32_t t190 = 14026299;

    t190 = (x793==(x794|(x795%x796)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x798 = 5U;
	int32_t x799 = INT32_MAX;
	int64_t x800 = -3521888LL;
	volatile int32_t t191 = 30553747;

    t191 = (x797==(x798|(x799%x800)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x804 = INT16_MAX;
	static volatile int32_t t192 = -1783918;

    t192 = (x801==(x802|(x803%x804)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x805 = INT64_MIN;
	int8_t x806 = -1;
	int32_t x807 = INT32_MIN;
	int16_t x808 = -1;
	volatile int32_t t193 = 1136;

    t193 = (x805==(x806|(x807%x808)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x810 = 307956269333966LL;
	static volatile int8_t x811 = INT8_MIN;
	int32_t t194 = -731882;

    t194 = (x809==(x810|(x811%x812)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x813 = INT64_MAX;
	static uint32_t x814 = 841U;
	int32_t x815 = -20;
	int32_t x816 = -359;

    t195 = (x813==(x814|(x815%x816)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x817 = INT16_MAX;
	static uint16_t x818 = UINT16_MAX;
	uint32_t x819 = 0U;
	int32_t x820 = INT32_MIN;
	volatile int32_t t196 = 1;

    t196 = (x817==(x818|(x819%x820)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x823 = UINT16_MAX;
	int64_t x824 = INT64_MIN;
	volatile int32_t t197 = -453242;

    t197 = (x821==(x822|(x823%x824)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x829 = 815438770359374LL;
	static volatile int64_t x830 = -110262291922582LL;
	volatile int8_t x832 = INT8_MIN;
	volatile int32_t t198 = 2;

    t198 = (x829==(x830|(x831%x832)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x834 = INT8_MIN;
	static int64_t x836 = INT64_MIN;
	int32_t t199 = 112450;

    t199 = (x833==(x834|(x835%x836)));

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

