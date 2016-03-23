
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

int16_t x1 = INT16_MIN;
int32_t x3 = INT32_MIN;
int16_t x6 = INT16_MIN;
volatile int64_t x8 = INT64_MIN;
int64_t t2 = -13772946599341644LL;
volatile uint16_t x13 = 0U;
static int8_t x19 = INT8_MIN;
int32_t x20 = INT32_MIN;
uint32_t x25 = UINT32_MAX;
uint16_t x29 = 4190U;
volatile int32_t t7 = -2932362;
int8_t x37 = -27;
int32_t t9 = -1;
int32_t x46 = 117255;
uint8_t x48 = UINT8_MAX;
int8_t x58 = INT8_MIN;
volatile int64_t t15 = -78167513LL;
int8_t x72 = INT8_MAX;
static int16_t x79 = 5;
uint32_t x88 = 2U;
uint16_t x89 = 2U;
static volatile uint64_t x90 = 34LLU;
volatile uint64_t t22 = 595909498LLU;
static uint32_t x94 = 943333U;
uint32_t t23 = 1326184U;
int32_t x97 = INT32_MAX;
static uint8_t x98 = 14U;
int16_t x106 = -1;
uint32_t x107 = 121U;
int32_t x109 = INT32_MIN;
int32_t x110 = -47;
int64_t x115 = -486397411050LL;
uint64_t x118 = UINT64_MAX;
int32_t x129 = -1;
int32_t x131 = -1;
uint64_t t35 = 123597324LLU;
uint16_t x146 = 4U;
static int8_t x147 = INT8_MAX;
uint8_t x150 = 107U;
int64_t x157 = -1LL;
volatile int64_t t39 = -1458262369004065571LL;
int16_t x163 = 86;
static int64_t t40 = -21993LL;
int8_t x165 = INT8_MAX;
static int8_t x168 = 1;
volatile int32_t t41 = -5414;
int8_t x173 = 1;
int32_t x176 = INT32_MAX;
int32_t t43 = 24962;
volatile int32_t t44 = INT32_MIN;
int32_t x187 = 1;
int8_t x190 = -23;
volatile int32_t t47 = 1;
uint8_t x197 = 1U;
volatile int8_t x203 = 3;
static volatile uint8_t x205 = UINT8_MAX;
int16_t x208 = -173;
uint8_t x211 = 3U;
int16_t x214 = INT16_MIN;
static volatile int32_t t53 = 21524236;
volatile int32_t x217 = INT32_MAX;
static int32_t t54 = 6558544;
int16_t x224 = -1;
uint64_t x228 = 2275401337987747295LLU;
uint16_t x233 = UINT16_MAX;
volatile int64_t t59 = 5786255LL;
int64_t x244 = -1LL;
int16_t x248 = INT16_MIN;
uint32_t x257 = 1358230U;
uint64_t x269 = UINT64_MAX;
uint16_t x271 = 307U;
uint8_t x273 = 14U;
volatile int16_t x276 = INT16_MIN;
volatile int32_t x283 = INT32_MIN;
int8_t x287 = -4;
int64_t t71 = 8LL;
int64_t x297 = 6912401LL;
static volatile int64_t x300 = -66LL;
volatile uint8_t x304 = UINT8_MAX;
int64_t x307 = 0LL;
int64_t x308 = -201967304525LL;
int64_t x309 = -12054285253528242LL;
static int64_t x310 = INT64_MAX;
static volatile int32_t t78 = 591;
uint16_t x318 = 29U;
uint32_t x319 = 666554U;
int32_t t79 = -9;
volatile uint16_t x321 = 21U;
uint32_t x326 = 4722U;
int8_t x332 = -1;
int64_t x333 = -1LL;
volatile int64_t t83 = -4LL;
static int32_t x339 = INT32_MIN;
uint8_t x342 = 125U;
uint16_t x345 = 18431U;
int16_t x351 = INT16_MIN;
int16_t x352 = 1;
int32_t x356 = INT32_MIN;
int64_t t88 = -1224023716321LL;
static uint32_t x359 = UINT32_MAX;
uint16_t x368 = UINT16_MAX;
int64_t t93 = -10588122368925216LL;
static uint16_t x382 = UINT16_MAX;
static uint16_t x384 = UINT16_MAX;
volatile int32_t t95 = 203586;
uint8_t x385 = 2U;
int32_t x386 = INT32_MIN;
static volatile int32_t t96 = 4100472;
uint8_t x392 = 63U;
volatile int8_t x396 = 1;
volatile int64_t t98 = 2453476683234LL;
int16_t x398 = -1;
static volatile int32_t t99 = -66;
static volatile uint32_t t100 = 1187853519U;
volatile int64_t x410 = -222761LL;
static int16_t x412 = 70;
int8_t x417 = 0;
int8_t x418 = -7;
int64_t x421 = INT64_MIN;
uint8_t x423 = 0U;
int8_t x430 = INT8_MIN;
uint8_t x434 = 7U;
volatile int32_t t108 = 12;
int8_t x441 = INT8_MIN;
int16_t x444 = 50;
int16_t x447 = -1;
int8_t x456 = INT8_MIN;
uint8_t x458 = 4U;
int16_t x466 = INT16_MIN;
volatile uint64_t x467 = UINT64_MAX;
static uint16_t x469 = UINT16_MAX;
int8_t x474 = INT8_MAX;
uint32_t x481 = UINT32_MAX;
int64_t x483 = -1LL;
int8_t x492 = INT8_MIN;
static volatile int32_t t122 = -1;
uint64_t x497 = UINT64_MAX;
volatile uint64_t t124 = UINT64_MAX;
int16_t x503 = 5;
static int16_t x519 = 27;
volatile int16_t x524 = INT16_MIN;
uint64_t x528 = 264246692732281350LLU;
int64_t t131 = 113254707733868LL;
static int8_t x530 = INT8_MIN;
volatile int32_t t132 = -76084524;
uint32_t x538 = 75U;
int64_t x540 = INT64_MIN;
uint64_t t136 = 67565LLU;
static volatile uint16_t x553 = 0U;
int8_t x572 = 2;
int32_t x578 = 647002792;
volatile uint32_t t146 = 686U;
static int16_t x589 = INT16_MIN;
volatile int8_t x591 = 0;
uint32_t x596 = 1U;
volatile int64_t t153 = 2984LL;
uint8_t x620 = 60U;
uint64_t t154 = 39577423LLU;
uint16_t x629 = 1U;
uint32_t x631 = UINT32_MAX;
uint64_t x633 = 1920844801650187116LLU;
int16_t x635 = -1;
int32_t x639 = -1011;
int32_t t159 = -1;
uint32_t x645 = UINT32_MAX;
static volatile uint64_t x646 = 631562980LLU;
volatile int64_t x647 = INT64_MIN;
uint16_t x649 = UINT16_MAX;
static uint8_t x657 = 15U;
int16_t x663 = INT16_MIN;
uint8_t x670 = 4U;
uint64_t x674 = 43330024832499124LLU;
int32_t x678 = 73709;
volatile int32_t t169 = 4;
uint16_t x682 = UINT16_MAX;
static int16_t x685 = INT16_MIN;
uint8_t x690 = 7U;
volatile int16_t x691 = 77;
uint32_t x694 = 215U;
int64_t x695 = -1LL;
int8_t x696 = INT8_MIN;
int32_t x699 = -1;
static int8_t x700 = INT8_MAX;
uint64_t x712 = UINT64_MAX;
volatile int8_t x714 = INT8_MIN;
int32_t t178 = -110;
int32_t x719 = INT32_MIN;
int16_t x723 = INT16_MIN;
volatile uint64_t t181 = 1LLU;
volatile int16_t x730 = -1;
int16_t x736 = -1;
static int8_t x737 = INT8_MIN;
static int16_t x738 = INT16_MIN;
int32_t x742 = INT32_MIN;
volatile uint64_t x744 = 32236583LLU;
uint64_t x751 = 51167523408433818LLU;
static volatile int16_t x755 = -1;
volatile uint32_t x756 = 251402777U;
int32_t x758 = INT32_MIN;
volatile int32_t t189 = INT32_MAX;
uint16_t x761 = UINT16_MAX;
int32_t t190 = -8504975;
int64_t x765 = INT64_MIN;
static int32_t x766 = 562;
uint32_t x770 = UINT32_MAX;
int8_t x773 = INT8_MIN;
static int32_t x778 = -1;
int32_t x782 = 1847383;
int8_t x783 = INT8_MAX;
int64_t t195 = -17LL;
int16_t x786 = -2657;
static volatile int16_t x789 = INT16_MAX;
int16_t x791 = INT16_MIN;
int64_t x797 = INT64_MIN;


void f0(void) {
    	uint32_t x2 = UINT32_MAX;
	uint16_t x4 = 97U;
	volatile uint32_t t0 = 218U;

    t0 = (x1^(x2*(x3<=x4)));

    if (t0 != 32767U) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x5 = UINT16_MAX;
	int8_t x7 = -1;
	volatile int32_t t1 = 295459495;

    t1 = (x5^(x6*(x7<=x8)));

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	static int64_t x10 = INT64_MIN;
	static volatile int64_t x11 = INT64_MIN;
	uint32_t x12 = 105118U;

    t2 = (x9^(x10*(x11<=x12)));

    if (t2 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = INT32_MIN;
	static uint64_t x15 = UINT64_MAX;
	uint64_t x16 = 5253624186430LLU;
	volatile int32_t t3 = 7324;

    t3 = (x13^(x14*(x15<=x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	volatile int16_t x18 = INT16_MIN;
	int32_t t4 = 2301237;

    t4 = (x17^(x18*(x19<=x20)));

    if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	int16_t x22 = INT16_MIN;
	volatile int64_t x23 = -2LL;
	int16_t x24 = -1;
	static volatile int64_t t5 = 3859LL;

    t5 = (x21^(x22*(x23<=x24)));

    if (t5 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = -56625441;
	int16_t x27 = INT16_MAX;
	int8_t x28 = 21;
	uint32_t t6 = UINT32_MAX;

    t6 = (x25^(x26*(x27<=x28)));

    if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = INT16_MIN;
	static uint8_t x31 = 1U;
	volatile int64_t x32 = INT64_MAX;

    t7 = (x29^(x30*(x31<=x32)));

    if (t7 != -28578) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	int32_t x34 = -8;
	static uint64_t x35 = UINT64_MAX;
	int32_t x36 = INT32_MAX;
	static int32_t t8 = -214;

    t8 = (x33^(x34*(x35<=x36)));

    if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x38 = INT16_MAX;
	int16_t x39 = INT16_MAX;
	static int8_t x40 = INT8_MAX;

    t9 = (x37^(x38*(x39<=x40)));

    if (t9 != -27) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x41 = -30;
	int64_t x42 = INT64_MIN;
	static int8_t x43 = -8;
	uint16_t x44 = 5145U;
	int64_t t10 = 8950342143651604LL;

    t10 = (x41^(x42*(x43<=x44)));

    if (t10 != 9223372036854775778LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 18076U;
	int64_t x47 = INT64_MIN;
	uint32_t t11 = 26687173U;

    t11 = (x45^(x46*(x47<=x48)));

    if (t11 != 101531U) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	uint16_t x50 = 375U;
	static int32_t x51 = INT32_MAX;
	uint32_t x52 = UINT32_MAX;
	int32_t t12 = -488387;

    t12 = (x49^(x50*(x51<=x52)));

    if (t12 != -32393) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = 6;
	int8_t x54 = -1;
	volatile uint8_t x55 = UINT8_MAX;
	int8_t x56 = INT8_MAX;
	static volatile int32_t t13 = -227;

    t13 = (x53^(x54*(x55<=x56)));

    if (t13 != 6) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint32_t x57 = UINT32_MAX;
	int8_t x59 = INT8_MIN;
	volatile int8_t x60 = -1;
	volatile uint32_t t14 = 37326U;

    t14 = (x57^(x58*(x59<=x60)));

    if (t14 != 127U) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	int16_t x62 = INT16_MIN;
	volatile uint8_t x63 = 20U;
	uint8_t x64 = 0U;

    t15 = (x61^(x62*(x63<=x64)));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	uint8_t x66 = UINT8_MAX;
	int16_t x67 = -1;
	int32_t x68 = INT32_MIN;
	static int32_t t16 = -3109;

    t16 = (x65^(x66*(x67<=x68)));

    if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	int8_t x70 = -22;
	uint8_t x71 = 2U;
	volatile int32_t t17 = 50789;

    t17 = (x69^(x70*(x71<=x72)));

    if (t17 != -235) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 918413219060LLU;
	uint16_t x74 = 0U;
	volatile int64_t x75 = 492421396LL;
	uint32_t x76 = UINT32_MAX;
	uint64_t t18 = 274533872855655161LLU;

    t18 = (x73^(x74*(x75<=x76)));

    if (t18 != 918413219060LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = UINT16_MAX;
	static volatile int16_t x78 = -1;
	uint16_t x80 = 11U;
	int32_t t19 = -1;

    t19 = (x77^(x78*(x79<=x80)));

    if (t19 != -65536) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x81 = UINT64_MAX;
	static uint32_t x82 = 51U;
	int16_t x83 = 153;
	int16_t x84 = -1;
	volatile uint64_t t20 = UINT64_MAX;

    t20 = (x81^(x82*(x83<=x84)));

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = UINT16_MAX;
	static int32_t x86 = 375613;
	uint32_t x87 = UINT32_MAX;
	volatile int32_t t21 = -97695716;

    t21 = (x85^(x86*(x87<=x88)));

    if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x91 = INT8_MIN;
	static uint32_t x92 = 12080U;

    t22 = (x89^(x90*(x91<=x92)));

    if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = UINT16_MAX;
	int32_t x95 = INT32_MAX;
	int32_t x96 = -1;

    t23 = (x93^(x94*(x95<=x96)));

    if (t23 != 65535U) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x99 = -1;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = INT32_MAX;

    t24 = (x97^(x98*(x99<=x100)));

    if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 7U;
	volatile uint32_t x102 = 4029U;
	int8_t x103 = INT8_MIN;
	int64_t x104 = -1LL;
	volatile uint32_t t25 = 21U;

    t25 = (x101^(x102*(x103<=x104)));

    if (t25 != 4026U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 1854333966U;
	int8_t x108 = INT8_MIN;
	static volatile uint32_t t26 = 23552032U;

    t26 = (x105^(x106*(x107<=x108)));

    if (t26 != 2440633329U) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x111 = INT32_MIN;
	int8_t x112 = 0;
	int32_t t27 = 1408967;

    t27 = (x109^(x110*(x111<=x112)));

    if (t27 != 2147483601) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = -164013918281835869LL;
	static uint8_t x114 = 14U;
	static int64_t x116 = -589174612362372LL;
	volatile int64_t t28 = -583630LL;

    t28 = (x113^(x114*(x115<=x116)));

    if (t28 != -164013918281835869LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -1;
	volatile int8_t x119 = 31;
	int8_t x120 = INT8_MIN;
	uint64_t t29 = UINT64_MAX;

    t29 = (x117^(x118*(x119<=x120)));

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint16_t x121 = UINT16_MAX;
	volatile int32_t x122 = INT32_MIN;
	volatile int16_t x123 = INT16_MIN;
	volatile int8_t x124 = -15;
	int32_t t30 = -5;

    t30 = (x121^(x122*(x123<=x124)));

    if (t30 != -2147418113) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x125 = 1U;
	uint32_t x126 = 111517788U;
	uint32_t x127 = UINT32_MAX;
	int8_t x128 = -1;
	volatile uint32_t t31 = 117029524U;

    t31 = (x125^(x126*(x127<=x128)));

    if (t31 != 111517789U) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x130 = UINT8_MAX;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t32 = -2341622;

    t32 = (x129^(x130*(x131<=x132)));

    if (t32 != -256) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x133 = -667233174;
	static uint16_t x134 = UINT16_MAX;
	uint8_t x135 = 2U;
	volatile int8_t x136 = INT8_MAX;
	static int32_t t33 = 1;

    t33 = (x133^(x134*(x135<=x136)));

    if (t33 != -667276395) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = 110972208435905671LL;
	static int8_t x138 = 8;
	static int64_t x139 = -1LL;
	int64_t x140 = INT64_MIN;
	static int64_t t34 = 2259825LL;

    t34 = (x137^(x138*(x139<=x140)));

    if (t34 != 110972208435905671LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = 9688LLU;
	static int8_t x142 = -1;
	int16_t x143 = -1;
	int16_t x144 = 0;

    t35 = (x141^(x142*(x143<=x144)));

    if (t35 != 18446744073709541927LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = UINT64_MAX;
	int32_t x148 = INT32_MIN;
	uint64_t t36 = UINT64_MAX;

    t36 = (x145^(x146*(x147<=x148)));

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = 315433;
	uint32_t x151 = 2873238U;
	int32_t x152 = INT32_MAX;
	int32_t t37 = -20;

    t37 = (x149^(x150*(x151<=x152)));

    if (t37 != 315458) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = UINT64_MAX;
	int32_t x154 = INT32_MIN;
	int32_t x155 = INT32_MAX;
	uint8_t x156 = 1U;
	volatile uint64_t t38 = UINT64_MAX;

    t38 = (x153^(x154*(x155<=x156)));

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x158 = UINT8_MAX;
	uint16_t x159 = 3119U;
	int16_t x160 = INT16_MIN;

    t39 = (x157^(x158*(x159<=x160)));

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x161 = INT8_MIN;
	volatile int64_t x162 = 0LL;
	int16_t x164 = -177;

    t40 = (x161^(x162*(x163<=x164)));

    if (t40 != -128LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x166 = INT8_MIN;
	int8_t x167 = 1;

    t41 = (x165^(x166*(x167<=x168)));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -1;
	int8_t x170 = -1;
	uint32_t x171 = UINT32_MAX;
	int64_t x172 = 37349577LL;
	int32_t t42 = -60651;

    t42 = (x169^(x170*(x171<=x172)));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x174 = INT8_MAX;
	int16_t x175 = INT16_MAX;

    t43 = (x173^(x174*(x175<=x176)));

    if (t43 != 126) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MIN;
	volatile int8_t x178 = INT8_MIN;
	volatile int32_t x179 = INT32_MAX;
	int16_t x180 = INT16_MIN;

    t44 = (x177^(x178*(x179<=x180)));

    if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = 26LLU;
	static int32_t x182 = INT32_MIN;
	static int64_t x183 = INT64_MIN;
	int32_t x184 = INT32_MIN;
	uint64_t t45 = 58082082410LLU;

    t45 = (x181^(x182*(x183<=x184)));

    if (t45 != 18446744071562067994LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -1;
	int32_t x186 = 42;
	int64_t x188 = -1LL;
	static volatile int32_t t46 = 900;

    t46 = (x185^(x186*(x187<=x188)));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -15399878;
	int32_t x191 = INT32_MIN;
	uint64_t x192 = UINT64_MAX;

    t47 = (x189^(x190*(x191<=x192)));

    if (t47 != 15399891) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = UINT32_MAX;
	static volatile uint64_t x194 = UINT64_MAX;
	int32_t x195 = INT32_MAX;
	int16_t x196 = -9959;
	uint64_t t48 = 9752832LLU;

    t48 = (x193^(x194*(x195<=x196)));

    if (t48 != 4294967295LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = 1;
	int8_t x199 = 1;
	int16_t x200 = INT16_MIN;
	int32_t t49 = -1;

    t49 = (x197^(x198*(x199<=x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 445025U;
	static int8_t x202 = -1;
	volatile int8_t x204 = 7;
	volatile uint32_t t50 = 2U;

    t50 = (x201^(x202*(x203<=x204)));

    if (t50 != 4294522270U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x206 = 48483518335769LLU;
	int8_t x207 = -1;
	uint64_t t51 = 66727108LLU;

    t51 = (x205^(x206*(x207<=x208)));

    if (t51 != 255LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -395;
	static int32_t x210 = INT32_MIN;
	static int16_t x212 = INT16_MAX;
	volatile int32_t t52 = -168288658;

    t52 = (x209^(x210*(x211<=x212)));

    if (t52 != 2147483253) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x213 = INT32_MIN;
	int32_t x215 = INT32_MIN;
	volatile uint16_t x216 = UINT16_MAX;

    t53 = (x213^(x214*(x215<=x216)));

    if (t53 != 2147450880) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x218 = 1;
	volatile int16_t x219 = -2360;
	uint16_t x220 = 5373U;

    t54 = (x217^(x218*(x219<=x220)));

    if (t54 != 2147483646) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	volatile int64_t x222 = INT64_MIN;
	volatile int32_t x223 = -1;
	static int64_t t55 = 1062531287004075LL;

    t55 = (x221^(x222*(x223<=x224)));

    if (t55 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MAX;
	int16_t x226 = INT16_MIN;
	int8_t x227 = 0;
	int32_t t56 = 3;

    t56 = (x225^(x226*(x227<=x228)));

    if (t56 != -2147450881) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -38381827;
	static int32_t x230 = INT32_MIN;
	volatile int16_t x231 = -24;
	int32_t x232 = INT32_MIN;
	int32_t t57 = 1;

    t57 = (x229^(x230*(x231<=x232)));

    if (t57 != -38381827) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x234 = 850964520LLU;
	int32_t x235 = 6480;
	int16_t x236 = INT16_MIN;
	volatile uint64_t t58 = 110102192070LLU;

    t58 = (x233^(x234*(x235<=x236)));

    if (t58 != 65535LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = 156370660303315376LL;
	volatile int8_t x238 = -8;
	volatile int8_t x239 = INT8_MIN;
	int64_t x240 = 237875072LL;

    t59 = (x237^(x238*(x239<=x240)));

    if (t59 != -156370660303315384LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -318082372188LL;
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = 44;
	uint64_t t60 = 2740254LLU;

    t60 = (x241^(x242*(x243<=x244)));

    if (t60 != 18446743755627179428LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x245 = -888090630044LL;
	uint64_t x246 = UINT64_MAX;
	int32_t x247 = INT32_MIN;
	volatile uint64_t t61 = 26486411LLU;

    t61 = (x245^(x246*(x247<=x248)));

    if (t61 != 888090630043LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x249 = INT64_MIN;
	volatile uint8_t x250 = 9U;
	int8_t x251 = 0;
	int16_t x252 = -1;
	volatile int64_t t62 = INT64_MIN;

    t62 = (x249^(x250*(x251<=x252)));

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -1;
	uint64_t x254 = 2644LLU;
	int16_t x255 = INT16_MIN;
	uint32_t x256 = UINT32_MAX;
	static uint64_t t63 = 219924455810LLU;

    t63 = (x253^(x254*(x255<=x256)));

    if (t63 != 18446744073709548971LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x258 = 40114837LLU;
	int8_t x259 = -1;
	int8_t x260 = 0;
	uint64_t t64 = 585803617093728456LLU;

    t64 = (x257^(x258*(x259<=x260)));

    if (t64 != 40936195LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -3;
	volatile int32_t x262 = INT32_MIN;
	int8_t x263 = -1;
	static int16_t x264 = INT16_MAX;
	volatile int32_t t65 = 2281;

    t65 = (x261^(x262*(x263<=x264)));

    if (t65 != 2147483645) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x265 = 1U;
	int16_t x266 = -111;
	int8_t x267 = 15;
	uint64_t x268 = UINT64_MAX;
	static volatile int32_t t66 = 2;

    t66 = (x265^(x266*(x267<=x268)));

    if (t66 != -112) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x270 = -55;
	uint8_t x272 = 1U;
	uint64_t t67 = UINT64_MAX;

    t67 = (x269^(x270*(x271<=x272)));

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x274 = UINT64_MAX;
	int16_t x275 = INT16_MIN;
	volatile uint64_t t68 = 11542LLU;

    t68 = (x273^(x274*(x275<=x276)));

    if (t68 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 0U;
	static volatile uint8_t x278 = 2U;
	int16_t x279 = INT16_MAX;
	volatile int8_t x280 = INT8_MIN;
	volatile int32_t t69 = -484;

    t69 = (x277^(x278*(x279<=x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = INT64_MAX;
	int8_t x282 = INT8_MIN;
	int16_t x284 = 4674;
	volatile int64_t t70 = -9743836692886LL;

    t70 = (x281^(x282*(x283<=x284)));

    if (t70 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int8_t x285 = 62;
	volatile int64_t x286 = INT64_MIN;
	int16_t x288 = INT16_MIN;

    t71 = (x285^(x286*(x287<=x288)));

    if (t71 != 62LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = 160691;
	volatile uint32_t x290 = UINT32_MAX;
	int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MAX;
	volatile uint32_t t72 = 39766U;

    t72 = (x289^(x290*(x291<=x292)));

    if (t72 != 4294806604U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 32392U;
	uint32_t x294 = 100857U;
	int16_t x295 = INT16_MIN;
	uint32_t x296 = UINT32_MAX;
	volatile uint32_t t73 = 57944896U;

    t73 = (x293^(x294*(x295<=x296)));

    if (t73 != 128881U) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x298 = INT64_MIN;
	static uint8_t x299 = 22U;
	int64_t t74 = -61786501LL;

    t74 = (x297^(x298*(x299<=x300)));

    if (t74 != 6912401LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = 14LLU;
	volatile uint8_t x302 = UINT8_MAX;
	static int64_t x303 = 3120700865839148LL;
	static volatile uint64_t t75 = 4569931659395LLU;

    t75 = (x301^(x302*(x303<=x304)));

    if (t75 != 14LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 36U;
	int16_t x306 = INT16_MAX;
	static int32_t t76 = -935;

    t76 = (x305^(x306*(x307<=x308)));

    if (t76 != 36) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint16_t x311 = 1412U;
	uint16_t x312 = UINT16_MAX;
	static volatile int64_t t77 = -82131LL;

    t77 = (x309^(x310*(x311<=x312)));

    if (t77 != -9211317751601247567LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x313 = INT8_MAX;
	static int16_t x314 = -7088;
	volatile uint64_t x315 = UINT64_MAX;
	int16_t x316 = -3603;

    t78 = (x313^(x314*(x315<=x316)));

    if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MAX;
	static int32_t x320 = INT32_MIN;

    t79 = (x317^(x318*(x319<=x320)));

    if (t79 != 32738) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x322 = UINT64_MAX;
	uint16_t x323 = UINT16_MAX;
	static int16_t x324 = 40;
	uint64_t t80 = 0LLU;

    t80 = (x321^(x322*(x323<=x324)));

    if (t80 != 21LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = -112;
	uint64_t x327 = 6404518613215383LLU;
	static int8_t x328 = INT8_MIN;
	static uint32_t t81 = 172U;

    t81 = (x325^(x326*(x327<=x328)));

    if (t81 != 4294962658U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = 7;
	volatile int64_t x330 = -1LL;
	int64_t x331 = INT64_MIN;
	int64_t t82 = -161395137LL;

    t82 = (x329^(x330*(x331<=x332)));

    if (t82 != -8LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x334 = INT8_MIN;
	static int16_t x335 = -1;
	int32_t x336 = INT32_MIN;

    t83 = (x333^(x334*(x335<=x336)));

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -1;
	volatile int64_t x338 = -1LL;
	int64_t x340 = INT64_MAX;
	static volatile int64_t t84 = -1991926892657LL;

    t84 = (x337^(x338*(x339<=x340)));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	static int8_t x343 = INT8_MIN;
	int32_t x344 = INT32_MIN;
	volatile int64_t t85 = INT64_MIN;

    t85 = (x341^(x342*(x343<=x344)));

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x346 = 33U;
	uint16_t x347 = 9U;
	static uint16_t x348 = UINT16_MAX;
	static volatile int32_t t86 = -7040;

    t86 = (x345^(x346*(x347<=x348)));

    if (t86 != 18398) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x349 = 119U;
	int32_t x350 = 9563563;
	static int32_t t87 = -5696595;

    t87 = (x349^(x350*(x351<=x352)));

    if (t87 != 9563612) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MIN;
	int64_t x354 = -131279940183156LL;
	int64_t x355 = INT64_MIN;

    t88 = (x353^(x354*(x355<=x356)));

    if (t88 != 9223240756914592652LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	int64_t x358 = INT64_MIN;
	int8_t x360 = INT8_MIN;
	int64_t t89 = -2630562590452111073LL;

    t89 = (x357^(x358*(x359<=x360)));

    if (t89 != -2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 3U;
	uint64_t x362 = 6725520692283681873LLU;
	int8_t x363 = INT8_MIN;
	uint8_t x364 = 6U;
	uint64_t t90 = 1078LLU;

    t90 = (x361^(x362*(x363<=x364)));

    if (t90 != 6725520692283681874LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MIN;
	volatile uint32_t x366 = 558473U;
	volatile int8_t x367 = INT8_MIN;
	volatile uint32_t t91 = 100290U;

    t91 = (x365^(x366*(x367<=x368)));

    if (t91 != 2148042121U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 1U;
	int64_t x370 = -995463759554LL;
	static uint8_t x371 = UINT8_MAX;
	static int64_t x372 = INT64_MAX;
	volatile int64_t t92 = 729772LL;

    t92 = (x369^(x370*(x371<=x372)));

    if (t92 != -995463759553LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = -1;
	int64_t x374 = -1LL;
	static volatile int8_t x375 = INT8_MIN;
	static int32_t x376 = INT32_MIN;

    t93 = (x373^(x374*(x375<=x376)));

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = UINT64_MAX;
	int64_t x378 = 34616LL;
	int64_t x379 = -1LL;
	int16_t x380 = INT16_MIN;
	volatile uint64_t t94 = UINT64_MAX;

    t94 = (x377^(x378*(x379<=x380)));

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = UINT16_MAX;
	int64_t x383 = INT64_MIN;

    t95 = (x381^(x382*(x383<=x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x387 = -338346751238570LL;
	int64_t x388 = INT64_MIN;

    t96 = (x385^(x386*(x387<=x388)));

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x389 = -1;
	uint8_t x390 = 20U;
	static int16_t x391 = -169;
	static int32_t t97 = -54;

    t97 = (x389^(x390*(x391<=x392)));

    if (t97 != -21) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MAX;
	int64_t x394 = -1LL;
	static int32_t x395 = INT32_MIN;

    t98 = (x393^(x394*(x395<=x396)));

    if (t98 != -2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x397 = -1;
	uint16_t x399 = 15U;
	int16_t x400 = INT16_MIN;

    t99 = (x397^(x398*(x399<=x400)));

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 2847510U;
	int8_t x402 = 1;
	int64_t x403 = INT64_MIN;
	uint16_t x404 = 0U;

    t100 = (x401^(x402*(x403<=x404)));

    if (t100 != 2847511U) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x405 = 16190834U;
	static int32_t x406 = -26706563;
	static int8_t x407 = INT8_MAX;
	uint64_t x408 = UINT64_MAX;
	uint32_t t101 = 21567366U;

    t101 = (x405^(x406*(x407<=x408)));

    if (t101 != 4271861775U) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	volatile uint64_t x411 = 1LLU;
	static volatile int64_t t102 = -24773223848LL;

    t102 = (x409^(x410*(x411<=x412)));

    if (t102 != 222807LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = 437;
	uint16_t x414 = 53U;
	int32_t x415 = INT32_MIN;
	volatile int64_t x416 = -209229473907515LL;
	volatile int32_t t103 = -58;

    t103 = (x413^(x414*(x415<=x416)));

    if (t103 != 437) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x419 = 17U;
	static uint32_t x420 = 1663U;
	int32_t t104 = 162472;

    t104 = (x417^(x418*(x419<=x420)));

    if (t104 != -7) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x422 = -1;
	static int8_t x424 = INT8_MAX;
	volatile int64_t t105 = INT64_MAX;

    t105 = (x421^(x422*(x423<=x424)));

    if (t105 != INT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 23U;
	static volatile int32_t x426 = INT32_MAX;
	uint16_t x427 = UINT16_MAX;
	static int8_t x428 = -5;
	uint32_t t106 = 1109378713U;

    t106 = (x425^(x426*(x427<=x428)));

    if (t106 != 23U) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x429 = INT64_MIN;
	int8_t x431 = INT8_MIN;
	static uint8_t x432 = 82U;
	int64_t t107 = -3148LL;

    t107 = (x429^(x430*(x431<=x432)));

    if (t107 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x433 = 9U;
	volatile int8_t x435 = -1;
	int32_t x436 = -1;

    t108 = (x433^(x434*(x435<=x436)));

    if (t108 != 14) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x437 = -46;
	uint32_t x438 = 405418U;
	uint16_t x439 = 183U;
	int32_t x440 = 990;
	static volatile uint32_t t109 = 30478449U;

    t109 = (x437^(x438*(x439<=x440)));

    if (t109 != 4294561912U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x442 = 71U;
	int64_t x443 = -1LL;
	volatile int32_t t110 = -2209;

    t110 = (x441^(x442*(x443<=x444)));

    if (t110 != -57) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x445 = -1;
	uint32_t x446 = UINT32_MAX;
	int32_t x448 = INT32_MAX;
	uint32_t t111 = 64724187U;

    t111 = (x445^(x446*(x447<=x448)));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = 229LLU;
	static int32_t x450 = INT32_MAX;
	static uint16_t x451 = UINT16_MAX;
	static int64_t x452 = 162102028291LL;
	volatile uint64_t t112 = 412LLU;

    t112 = (x449^(x450*(x451<=x452)));

    if (t112 != 2147483418LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x453 = -154571779682LL;
	static int8_t x454 = -1;
	int32_t x455 = INT32_MIN;
	int64_t t113 = -16024LL;

    t113 = (x453^(x454*(x455<=x456)));

    if (t113 != 154571779681LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x457 = -5;
	int64_t x459 = INT64_MIN;
	static uint32_t x460 = UINT32_MAX;
	volatile int32_t t114 = 1;

    t114 = (x457^(x458*(x459<=x460)));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MAX;
	int64_t x462 = -1LL;
	volatile int8_t x463 = -9;
	int8_t x464 = INT8_MIN;
	int64_t t115 = -84734748685LL;

    t115 = (x461^(x462*(x463<=x464)));

    if (t115 != 32767LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -4;
	uint32_t x468 = 13477U;
	int32_t t116 = 449567;

    t116 = (x465^(x466*(x467<=x468)));

    if (t116 != -4) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x470 = 23675U;
	int32_t x471 = -1;
	volatile uint32_t x472 = UINT32_MAX;
	uint32_t t117 = 18U;

    t117 = (x469^(x470*(x471<=x472)));

    if (t117 != 41860U) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x473 = 3;
	int8_t x475 = INT8_MIN;
	uint8_t x476 = UINT8_MAX;
	volatile int32_t t118 = -1369;

    t118 = (x473^(x474*(x475<=x476)));

    if (t118 != 124) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x477 = INT64_MIN;
	static int16_t x478 = INT16_MIN;
	static int32_t x479 = INT32_MAX;
	int32_t x480 = 20063;
	volatile int64_t t119 = INT64_MIN;

    t119 = (x477^(x478*(x479<=x480)));

    if (t119 != INT64_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x482 = 2812U;
	volatile int16_t x484 = -1;
	uint32_t t120 = 58U;

    t120 = (x481^(x482*(x483<=x484)));

    if (t120 != 4294964483U) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x485 = 11;
	volatile uint8_t x486 = 8U;
	int32_t x487 = -1;
	uint64_t x488 = 7661LLU;
	int32_t t121 = -3587;

    t121 = (x485^(x486*(x487<=x488)));

    if (t121 != 11) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -1;
	uint16_t x490 = UINT16_MAX;
	uint32_t x491 = UINT32_MAX;

    t122 = (x489^(x490*(x491<=x492)));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	volatile int16_t x494 = INT16_MAX;
	uint16_t x495 = 397U;
	int32_t x496 = -1;
	volatile int64_t t123 = INT64_MIN;

    t123 = (x493^(x494*(x495<=x496)));

    if (t123 != INT64_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x498 = -4LL;
	uint32_t x499 = 77576U;
	volatile int64_t x500 = INT64_MIN;

    t124 = (x497^(x498*(x499<=x500)));

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = -101;
	int16_t x502 = 13868;
	uint16_t x504 = 6655U;
	int32_t t125 = -13262;

    t125 = (x501^(x502*(x503<=x504)));

    if (t125 != -13897) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = -1;
	uint64_t x506 = UINT64_MAX;
	int16_t x507 = -889;
	static int16_t x508 = INT16_MIN;
	volatile uint64_t t126 = UINT64_MAX;

    t126 = (x505^(x506*(x507<=x508)));

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MIN;
	static uint64_t x510 = 1721253893LLU;
	int32_t x511 = INT32_MIN;
	int64_t x512 = INT64_MIN;
	volatile uint64_t t127 = 111967483729LLU;

    t127 = (x509^(x510*(x511<=x512)));

    if (t127 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MAX;
	int32_t x514 = -570;
	static int8_t x515 = -6;
	int64_t x516 = -294LL;
	int64_t t128 = INT64_MAX;

    t128 = (x513^(x514*(x515<=x516)));

    if (t128 != INT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x517 = -1LL;
	int16_t x518 = INT16_MAX;
	uint64_t x520 = 8LLU;
	int64_t t129 = 23924695765639LL;

    t129 = (x517^(x518*(x519<=x520)));

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -1;
	static uint8_t x522 = UINT8_MAX;
	static uint64_t x523 = UINT64_MAX;
	int32_t t130 = 3087519;

    t130 = (x521^(x522*(x523<=x524)));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MIN;
	static int64_t x526 = 1560LL;
	int8_t x527 = INT8_MIN;

    t131 = (x525^(x526*(x527<=x528)));

    if (t131 != -2147483648LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x529 = INT32_MIN;
	int32_t x531 = 1490;
	uint16_t x532 = UINT16_MAX;

    t132 = (x529^(x530*(x531<=x532)));

    if (t132 != 2147483520) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x533 = 9U;
	uint32_t x534 = 130019934U;
	uint64_t x535 = UINT64_MAX;
	int32_t x536 = 30354;
	volatile uint32_t t133 = 5252218U;

    t133 = (x533^(x534*(x535<=x536)));

    if (t133 != 9U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = 229U;
	volatile uint32_t x539 = UINT32_MAX;
	uint32_t t134 = 6U;

    t134 = (x537^(x538*(x539<=x540)));

    if (t134 != 229U) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x541 = 2U;
	int64_t x542 = -59942263765455LL;
	int64_t x543 = INT64_MIN;
	int64_t x544 = -1LL;
	int64_t t135 = 77950164059LL;

    t135 = (x541^(x542*(x543<=x544)));

    if (t135 != -59942263765453LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = 846766732062905LLU;
	int8_t x546 = INT8_MIN;
	uint32_t x547 = UINT32_MAX;
	int8_t x548 = 6;

    t136 = (x545^(x546*(x547<=x548)));

    if (t136 != 846766732062905LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	int64_t x550 = -1444680700485151861LL;
	uint32_t x551 = 53966U;
	static int32_t x552 = INT32_MIN;
	volatile int64_t t137 = 1LL;

    t137 = (x549^(x550*(x551<=x552)));

    if (t137 != 1444680700485151755LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x554 = 1U;
	volatile uint32_t x555 = 3U;
	static int64_t x556 = -840347079353116LL;
	volatile uint32_t t138 = 7U;

    t138 = (x553^(x554*(x555<=x556)));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x557 = 0U;
	int32_t x558 = INT32_MIN;
	uint16_t x559 = 30081U;
	static uint64_t x560 = UINT64_MAX;
	volatile uint32_t t139 = 34343U;

    t139 = (x557^(x558*(x559<=x560)));

    if (t139 != 2147483648U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = -1;
	int64_t x562 = INT64_MAX;
	int32_t x563 = INT32_MIN;
	static int16_t x564 = INT16_MIN;
	volatile int64_t t140 = INT64_MIN;

    t140 = (x561^(x562*(x563<=x564)));

    if (t140 != INT64_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x565 = -10;
	static int64_t x566 = INT64_MAX;
	int64_t x567 = INT64_MIN;
	static int32_t x568 = INT32_MAX;
	volatile int64_t t141 = 11380775LL;

    t141 = (x565^(x566*(x567<=x568)));

    if (t141 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = UINT64_MAX;
	uint64_t x570 = 400749538041709LLU;
	volatile int32_t x571 = INT32_MIN;
	uint64_t t142 = 3380194698573805LLU;

    t142 = (x569^(x570*(x571<=x572)));

    if (t142 != 18446343324171509906LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = 202373279U;
	int8_t x574 = -51;
	volatile int8_t x575 = -1;
	uint32_t x576 = 145374007U;
	uint32_t t143 = 2021010073U;

    t143 = (x573^(x574*(x575<=x576)));

    if (t143 != 202373279U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 3608U;
	volatile int64_t x579 = INT64_MIN;
	uint8_t x580 = 5U;
	volatile uint32_t t144 = 33U;

    t144 = (x577^(x578*(x579<=x580)));

    if (t144 != 647001264U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = -23;
	static int16_t x582 = 0;
	volatile int64_t x583 = INT64_MIN;
	static uint32_t x584 = 250030366U;
	volatile int32_t t145 = -16;

    t145 = (x581^(x582*(x583<=x584)));

    if (t145 != -23) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = 38555006U;
	int16_t x586 = -1;
	uint8_t x587 = 19U;
	static int64_t x588 = -1LL;

    t146 = (x585^(x586*(x587<=x588)));

    if (t146 != 38555006U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x590 = 384359610U;
	volatile int8_t x592 = INT8_MIN;
	volatile uint32_t t147 = 20584U;

    t147 = (x589^(x590*(x591<=x592)));

    if (t147 != 4294934528U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = UINT64_MAX;
	volatile int32_t x594 = -1;
	int16_t x595 = INT16_MAX;
	uint64_t t148 = UINT64_MAX;

    t148 = (x593^(x594*(x595<=x596)));

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = UINT16_MAX;
	volatile int64_t x598 = -1LL;
	volatile uint64_t x599 = 14249351212LLU;
	uint32_t x600 = UINT32_MAX;
	int64_t t149 = 68LL;

    t149 = (x597^(x598*(x599<=x600)));

    if (t149 != 65535LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = -1;
	int16_t x602 = INT16_MIN;
	int64_t x603 = INT64_MIN;
	int16_t x604 = INT16_MAX;
	static int32_t t150 = 5467200;

    t150 = (x601^(x602*(x603<=x604)));

    if (t150 != 32767) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MIN;
	int32_t x606 = INT32_MIN;
	int16_t x607 = INT16_MIN;
	volatile int8_t x608 = INT8_MIN;
	volatile int32_t t151 = -574305;

    t151 = (x605^(x606*(x607<=x608)));

    if (t151 != 2147450880) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int16_t x609 = INT16_MAX;
	static volatile int32_t x610 = -1;
	uint8_t x611 = UINT8_MAX;
	volatile uint16_t x612 = 62U;
	volatile int32_t t152 = -401;

    t152 = (x609^(x610*(x611<=x612)));

    if (t152 != 32767) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x613 = INT64_MIN;
	int32_t x614 = -2509;
	int64_t x615 = INT64_MIN;
	uint8_t x616 = UINT8_MAX;

    t153 = (x613^(x614*(x615<=x616)));

    if (t153 != 9223372036854773299LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MIN;
	uint64_t x618 = 89LLU;
	int32_t x619 = -397629673;

    t154 = (x617^(x618*(x619<=x620)));

    if (t154 != 18446744071562068057LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x621 = 0U;
	static volatile int64_t x622 = INT64_MIN;
	int16_t x623 = 5930;
	volatile uint16_t x624 = 2812U;
	volatile int64_t t155 = -2252444396198LL;

    t155 = (x621^(x622*(x623<=x624)));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x625 = 35715U;
	int16_t x626 = -8876;
	int32_t x627 = 243;
	volatile int64_t x628 = INT64_MIN;
	static uint32_t t156 = 6U;

    t156 = (x625^(x626*(x627<=x628)));

    if (t156 != 35715U) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x630 = INT8_MIN;
	volatile int32_t x632 = 7;
	volatile int32_t t157 = 28;

    t157 = (x629^(x630*(x631<=x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x634 = 7129109266LL;
	int8_t x636 = -1;
	static volatile uint64_t t158 = 32817LLU;

    t158 = (x633^(x634*(x635<=x636)));

    if (t158 != 1920844795894188158LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint8_t x637 = 1U;
	uint16_t x638 = UINT16_MAX;
	static int16_t x640 = 122;

    t159 = (x637^(x638*(x639<=x640)));

    if (t159 != 65534) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = 4U;
	volatile uint16_t x642 = 1929U;
	static int16_t x643 = INT16_MIN;
	int8_t x644 = INT8_MIN;
	volatile int32_t t160 = 1;

    t160 = (x641^(x642*(x643<=x644)));

    if (t160 != 1933) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x648 = 113106LLU;
	static uint64_t t161 = 816599845LLU;

    t161 = (x645^(x646*(x647<=x648)));

    if (t161 != 4294967295LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x650 = -1046602149345628089LL;
	volatile int16_t x651 = INT16_MAX;
	int32_t x652 = 38490424;
	static int64_t t162 = 23404424LL;

    t162 = (x649^(x650*(x651<=x652)));

    if (t162 != -1046602149345685576LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = -9;
	static int8_t x654 = -1;
	static uint32_t x655 = UINT32_MAX;
	static int32_t x656 = INT32_MIN;
	static volatile int32_t t163 = 5;

    t163 = (x653^(x654*(x655<=x656)));

    if (t163 != -9) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x658 = INT64_MIN;
	volatile int32_t x659 = INT32_MIN;
	static int32_t x660 = INT32_MIN;
	int64_t t164 = 84251078202LL;

    t164 = (x657^(x658*(x659<=x660)));

    if (t164 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = 60517998LL;
	volatile int32_t x662 = -1;
	static int64_t x664 = -1LL;
	int64_t t165 = 238412707696777LL;

    t165 = (x661^(x662*(x663<=x664)));

    if (t165 != -60517999LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x665 = INT16_MIN;
	int32_t x666 = INT32_MIN;
	volatile uint64_t x667 = UINT64_MAX;
	uint16_t x668 = 8806U;
	int32_t t166 = 10666850;

    t166 = (x665^(x666*(x667<=x668)));

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	int64_t x671 = INT64_MAX;
	int32_t x672 = -396879373;
	volatile int64_t t167 = INT64_MIN;

    t167 = (x669^(x670*(x671<=x672)));

    if (t167 != INT64_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = UINT8_MAX;
	uint32_t x675 = UINT32_MAX;
	int64_t x676 = -1LL;
	uint64_t t168 = 207449LLU;

    t168 = (x673^(x674*(x675<=x676)));

    if (t168 != 255LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	static int8_t x679 = INT8_MAX;
	int64_t x680 = 95840927LL;

    t169 = (x677^(x678*(x679<=x680)));

    if (t169 != -2147409939) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x681 = UINT8_MAX;
	int8_t x683 = 32;
	volatile int64_t x684 = -148LL;
	volatile int32_t t170 = -3322;

    t170 = (x681^(x682*(x683<=x684)));

    if (t170 != 255) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x686 = INT16_MIN;
	uint64_t x687 = 1LLU;
	volatile int64_t x688 = -97LL;
	int32_t t171 = 794459;

    t171 = (x685^(x686*(x687<=x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MIN;
	uint8_t x692 = 60U;
	volatile int32_t t172 = 23865;

    t172 = (x689^(x690*(x691<=x692)));

    if (t172 != -32768) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x693 = UINT32_MAX;
	static uint32_t t173 = UINT32_MAX;

    t173 = (x693^(x694*(x695<=x696)));

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x697 = INT64_MIN;
	int8_t x698 = 2;
	int64_t t174 = -28LL;

    t174 = (x697^(x698*(x699<=x700)));

    if (t174 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 6644U;
	int8_t x702 = INT8_MIN;
	int32_t x703 = INT32_MIN;
	uint32_t x704 = 17U;
	int32_t t175 = -18869;

    t175 = (x701^(x702*(x703<=x704)));

    if (t175 != 6644) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	static int64_t x706 = INT64_MIN;
	uint8_t x707 = 57U;
	static uint64_t x708 = 68956473119145LLU;
	static volatile int64_t t176 = -1270308511964806990LL;

    t176 = (x705^(x706*(x707<=x708)));

    if (t176 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = 0LLU;
	static int8_t x710 = INT8_MAX;
	int64_t x711 = INT64_MIN;
	uint64_t t177 = 6571772LLU;

    t177 = (x709^(x710*(x711<=x712)));

    if (t177 != 127LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x713 = 152;
	int16_t x715 = -1;
	int64_t x716 = -1LL;

    t178 = (x713^(x714*(x715<=x716)));

    if (t178 != -232) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = UINT64_MAX;
	int64_t x718 = -33LL;
	uint16_t x720 = 240U;
	uint64_t t179 = 208920LLU;

    t179 = (x717^(x718*(x719<=x720)));

    if (t179 != 32LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MIN;
	int64_t x722 = -1LL;
	static volatile int8_t x724 = 2;
	int64_t t180 = -222727LL;

    t180 = (x721^(x722*(x723<=x724)));

    if (t180 != 32767LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -1;
	uint64_t x726 = 2021LLU;
	int64_t x727 = -1LL;
	uint16_t x728 = UINT16_MAX;

    t181 = (x725^(x726*(x727<=x728)));

    if (t181 != 18446744073709549594LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	static int32_t x731 = -1;
	static int32_t x732 = INT32_MIN;
	int32_t t182 = INT32_MIN;

    t182 = (x729^(x730*(x731<=x732)));

    if (t182 != INT32_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MAX;
	int8_t x734 = 2;
	static int8_t x735 = -3;
	int64_t t183 = 816436003LL;

    t183 = (x733^(x734*(x735<=x736)));

    if (t183 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x739 = 43;
	int16_t x740 = 2624;
	static int32_t t184 = 64207;

    t184 = (x737^(x738*(x739<=x740)));

    if (t184 != 32640) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = 57;
	static volatile int16_t x743 = INT16_MIN;
	static int32_t t185 = -97;

    t185 = (x741^(x742*(x743<=x744)));

    if (t185 != 57) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 30676010930644567LLU;
	int16_t x746 = -2600;
	int16_t x747 = -1;
	int64_t x748 = -1LL;
	volatile uint64_t t186 = 144228631881LLU;

    t186 = (x745^(x746*(x747<=x748)));

    if (t186 != 18416068062778905487LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	uint32_t x750 = 28U;
	int8_t x752 = INT8_MIN;
	volatile uint32_t t187 = 2703U;

    t187 = (x749^(x750*(x751<=x752)));

    if (t187 != 4294967196U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -7;
	volatile int64_t x754 = -3283019LL;
	volatile int64_t t188 = -33856432LL;

    t188 = (x753^(x754*(x755<=x756)));

    if (t188 != -7LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MAX;
	uint8_t x759 = 6U;
	int8_t x760 = -1;

    t189 = (x757^(x758*(x759<=x760)));

    if (t189 != INT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x762 = -1;
	int8_t x763 = 1;
	int32_t x764 = INT32_MAX;

    t190 = (x761^(x762*(x763<=x764)));

    if (t190 != -65536) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x767 = INT32_MAX;
	int16_t x768 = INT16_MIN;
	int64_t t191 = INT64_MIN;

    t191 = (x765^(x766*(x767<=x768)));

    if (t191 != INT64_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x769 = UINT32_MAX;
	int32_t x771 = 391;
	static uint32_t x772 = 655276U;
	volatile uint32_t t192 = 512637U;

    t192 = (x769^(x770*(x771<=x772)));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x774 = 0;
	int64_t x775 = INT64_MAX;
	volatile int8_t x776 = -1;
	int32_t t193 = -71;

    t193 = (x773^(x774*(x775<=x776)));

    if (t193 != -128) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = 220860807;
	int8_t x779 = INT8_MIN;
	int8_t x780 = INT8_MIN;
	int32_t t194 = 290476570;

    t194 = (x777^(x778*(x779<=x780)));

    if (t194 != -220860808) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MIN;
	uint16_t x784 = UINT16_MAX;

    t195 = (x781^(x782*(x783<=x784)));

    if (t195 != -9223372036852928425LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = 16153U;
	volatile int64_t x787 = INT64_MAX;
	static int32_t x788 = 601751376;
	uint32_t t196 = 54U;

    t196 = (x785^(x786*(x787<=x788)));

    if (t196 != 16153U) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x790 = INT64_MIN;
	int64_t x792 = -1LL;
	volatile int64_t t197 = -11LL;

    t197 = (x789^(x790*(x791<=x792)));

    if (t197 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 27778U;
	uint64_t x794 = UINT64_MAX;
	int16_t x795 = -1;
	static uint64_t x796 = 883254256791LLU;
	uint64_t t198 = 5965229277LLU;

    t198 = (x793^(x794*(x795<=x796)));

    if (t198 != 27778LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x798 = INT8_MIN;
	int8_t x799 = -4;
	uint32_t x800 = UINT32_MAX;
	volatile int64_t t199 = -5677460LL;

    t199 = (x797^(x798*(x799<=x800)));

    if (t199 != 9223372036854775680LL) { NG(); } else { ; }
	
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

