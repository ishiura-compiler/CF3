
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

int32_t x4 = INT32_MAX;
uint16_t x9 = 19154U;
volatile uint8_t x10 = 1U;
int32_t x12 = INT32_MIN;
uint64_t x15 = UINT64_MAX;
int64_t x22 = 214979825645LL;
static uint32_t x36 = 248209150U;
int64_t x47 = INT64_MIN;
static int64_t t9 = 1LL;
volatile int16_t x55 = INT16_MAX;
static volatile uint64_t t12 = 26558914LLU;
int8_t x61 = -1;
int8_t x65 = INT8_MIN;
int64_t t14 = 1654776292LL;
volatile uint32_t x69 = UINT32_MAX;
int8_t x71 = 1;
int8_t x72 = INT8_MIN;
int64_t t15 = -3843205LL;
static uint64_t t16 = 2452LLU;
uint32_t x87 = 12U;
static uint32_t t19 = UINT32_MAX;
int32_t x93 = INT32_MIN;
int64_t x96 = 11LL;
volatile int64_t t21 = -29309444LL;
static volatile uint16_t x99 = 9U;
volatile int64_t t22 = -198141506LL;
volatile int32_t x111 = INT32_MAX;
volatile uint64_t t27 = 3388864029753LLU;
uint8_t x128 = UINT8_MAX;
volatile int32_t x134 = INT32_MIN;
static int32_t x135 = INT32_MIN;
static int16_t x137 = INT16_MAX;
uint32_t x144 = 53605U;
int16_t x155 = -10346;
volatile int64_t t36 = 95094971166787LL;
uint32_t x163 = 18100U;
int64_t x165 = INT64_MIN;
volatile int64_t t38 = 101852798LL;
static volatile int64_t x170 = -56185131LL;
int64_t x171 = INT64_MIN;
int64_t x175 = -16LL;
int16_t x176 = 8;
int8_t x180 = -1;
static uint32_t t41 = 48837U;
int8_t x181 = INT8_MAX;
int64_t x183 = INT64_MIN;
volatile uint64_t x187 = UINT64_MAX;
uint64_t t44 = 3414280LLU;
int8_t x198 = -20;
static int32_t x199 = 5995;
int32_t x201 = INT32_MAX;
uint8_t x205 = 22U;
volatile int32_t t47 = -1561;
int8_t x218 = -1;
int64_t x229 = INT64_MIN;
uint64_t x233 = 619553284773LLU;
int64_t x237 = INT64_MIN;
uint32_t x238 = UINT32_MAX;
static int64_t x240 = INT64_MIN;
static volatile int16_t x256 = -1;
int32_t t59 = -27;
int32_t x262 = INT32_MIN;
uint32_t x264 = UINT32_MAX;
int32_t t61 = -3787;
int64_t x271 = INT64_MIN;
int64_t x277 = -12276193095LL;
static volatile uint16_t x308 = UINT16_MAX;
volatile int32_t t70 = -551182444;
static volatile uint32_t t71 = 398494U;
int64_t x324 = INT64_MIN;
int16_t x326 = INT16_MAX;
int64_t x339 = INT64_MIN;
static volatile uint64_t t78 = 18551717186401008LLU;
int64_t x354 = 27400089810641437LL;
static int32_t x365 = INT32_MAX;
int16_t x367 = 3825;
int64_t x370 = INT64_MIN;
uint64_t x374 = 18620009890LLU;
int8_t x377 = INT8_MIN;
int32_t x389 = INT32_MIN;
int64_t x404 = -1LL;
static uint64_t x405 = 1750178460409095132LLU;
int16_t x406 = -1;
static int16_t x408 = INT16_MIN;
volatile uint32_t x410 = 3953U;
int16_t x418 = 88;
int32_t x422 = 956065;
uint8_t x429 = UINT8_MAX;
volatile int32_t x431 = INT32_MIN;
int16_t x435 = -16;
uint16_t x442 = 0U;
static volatile int32_t x450 = 1226688;
volatile int32_t x452 = INT32_MIN;
static volatile int64_t t103 = 4409875268LL;
uint32_t x462 = 23U;
int16_t x482 = -1;
int8_t x490 = INT8_MIN;
uint64_t x491 = 56219610535LLU;
static int8_t x506 = INT8_MIN;
volatile uint64_t t116 = 127630024778LLU;
int32_t x517 = 943704234;
uint64_t x520 = 15195909LLU;
static uint8_t x523 = 1U;
volatile int64_t x532 = INT64_MIN;
int32_t x538 = INT32_MIN;
int8_t x546 = INT8_MIN;
int8_t x548 = INT8_MAX;
int16_t x552 = -1;
int32_t x553 = 1304;
uint8_t x554 = 1U;
int32_t x558 = -1;
int16_t x559 = INT16_MIN;
int64_t t127 = -2648323LL;
static volatile int16_t x569 = INT16_MIN;
int32_t x575 = INT32_MIN;
volatile int32_t t130 = 8380037;
static int8_t x580 = -23;
int16_t x581 = INT16_MIN;
int64_t x587 = -3390336605601419LL;
volatile uint64_t t133 = 953647332997737852LLU;
volatile uint64_t t134 = UINT64_MAX;
static volatile int8_t x595 = 2;
int16_t x601 = INT16_MIN;
int32_t x602 = INT32_MIN;
static int64_t t137 = 255349431588839LL;
volatile uint64_t t142 = 712237192954140582LLU;
uint16_t x626 = 2508U;
static int16_t x628 = -1;
static volatile uint8_t x630 = UINT8_MAX;
uint64_t x641 = 8LLU;
uint64_t x643 = 4606LLU;
volatile int32_t x645 = INT32_MIN;
int16_t x662 = -1;
volatile int8_t x671 = -30;
int64_t x672 = -5198802945524LL;
int32_t x679 = 1;
int16_t x682 = INT16_MIN;
int16_t x684 = -8;
static int64_t x692 = -183070175LL;
volatile int64_t t159 = 654644550879261LL;
uint16_t x705 = 1652U;
int16_t x723 = INT16_MIN;
uint16_t x727 = 46U;
int32_t x728 = -1;
uint64_t t164 = 1766173LLU;
int64_t t166 = 6794298209361LL;
static int32_t t167 = -165277;
static int32_t x746 = 19161052;
int16_t x751 = INT16_MAX;
static uint8_t x752 = 47U;
int16_t x759 = INT16_MIN;
int16_t x762 = -1;
int16_t x769 = INT16_MIN;
int64_t t175 = 662886880373041LL;
int8_t x782 = INT8_MIN;
int32_t x786 = INT32_MIN;
static volatile int16_t x792 = INT16_MIN;
int64_t x798 = INT64_MIN;
int32_t x799 = INT32_MAX;
static int16_t x802 = INT16_MIN;
static uint64_t t182 = 13733LLU;
int32_t x820 = -1;
int64_t t184 = 26116209097876LL;
volatile uint16_t x829 = 1958U;
static int16_t x830 = INT16_MIN;
int64_t t185 = 122191105LL;
int16_t x833 = -43;
int16_t x838 = -1;
int64_t x844 = -534171643LL;
int8_t x850 = INT8_MIN;
uint16_t x853 = 12U;
volatile uint8_t x859 = 36U;
volatile uint32_t x863 = 0U;
volatile int64_t x869 = -1LL;
volatile uint32_t t196 = UINT32_MAX;
static uint64_t x880 = UINT64_MAX;
int16_t x886 = -1;


void f0(void) {
    	int8_t x1 = 26;
	int16_t x2 = -1;
	volatile int16_t x3 = -5030;
	int32_t t0 = -7475;

    t0 = (x1|(x2+(x3%x4)));

    if (t0 != -5029) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	uint64_t x6 = 2079181372494559LLU;
	int64_t x7 = INT64_MIN;
	int64_t x8 = -2037258LL;
	volatile uint64_t t1 = UINT64_MAX;

    t1 = (x5|(x6+(x7%x8)));

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x11 = 667;
	int32_t t2 = 223198759;

    t2 = (x9|(x10+(x11%x12)));

    if (t2 != 19166) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	uint32_t x14 = UINT32_MAX;
	volatile uint16_t x16 = 269U;
	uint64_t t3 = 5562736LLU;

    t3 = (x13|(x14+(x15%x16)));

    if (t3 != 18446744071562068023LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x17 = 424U;
	uint8_t x18 = 55U;
	int8_t x19 = INT8_MIN;
	volatile int16_t x20 = 8;
	volatile int32_t t4 = 1017722;

    t4 = (x17|(x18+(x19%x20)));

    if (t4 != 447) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MAX;
	static volatile int64_t x23 = 177029890529LL;
	int32_t x24 = 46501626;
	volatile int64_t t5 = INT64_MAX;

    t5 = (x21|(x22+(x23%x24)));

    if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x29 = 13402LLU;
	int8_t x30 = INT8_MIN;
	volatile int16_t x31 = -1;
	static uint32_t x32 = UINT32_MAX;
	uint64_t t6 = 137787701151384928LLU;

    t6 = (x29|(x30+(x31%x32)));

    if (t6 != 4294967258LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = 15U;
	int32_t x34 = -20;
	volatile int8_t x35 = -1;
	static volatile uint32_t t7 = 2U;

    t7 = (x33|(x34+(x35%x36)));

    if (t7 != 75411727U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = -3;
	static volatile int64_t x38 = -2621721061450936LL;
	static volatile int16_t x39 = INT16_MAX;
	int16_t x40 = -1;
	int64_t t8 = 129782288415526LL;

    t8 = (x37|(x38+(x39%x40)));

    if (t8 != -3LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x45 = -14LL;
	int32_t x46 = 26086063;
	volatile int64_t x48 = INT64_MIN;

    t9 = (x45|(x46+(x47%x48)));

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x49 = 21571U;
	int64_t x50 = -1LL;
	uint8_t x51 = 2U;
	int32_t x52 = -598741;
	static volatile int64_t t10 = -97713874389LL;

    t10 = (x49|(x50+(x51%x52)));

    if (t10 != 21571LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = -1;
	int32_t x54 = -35;
	int32_t x56 = INT32_MIN;
	volatile int32_t t11 = -710;

    t11 = (x53|(x54+(x55%x56)));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = 1LL;
	int64_t x58 = 253LL;
	uint64_t x59 = UINT64_MAX;
	uint32_t x60 = 1638U;

    t12 = (x57|(x58+(x59%x60)));

    if (t12 != 269LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x62 = -1;
	int16_t x63 = 13;
	uint32_t x64 = UINT32_MAX;
	uint32_t t13 = UINT32_MAX;

    t13 = (x61|(x62+(x63%x64)));

    if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x66 = 74468LL;
	uint8_t x67 = UINT8_MAX;
	static int64_t x68 = INT64_MIN;

    t14 = (x65|(x66+(x67%x68)));

    if (t14 != -29LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x70 = 1059966257724596069LL;

    t15 = (x69|(x70+(x71%x72)));

    if (t15 != 1059966261858926591LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = INT64_MIN;
	int32_t x74 = -10341;
	uint64_t x75 = UINT64_MAX;
	int16_t x76 = INT16_MIN;

    t16 = (x73|(x74+(x75%x76)));

    if (t16 != 9223372036854798234LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint64_t x77 = 3LLU;
	static int16_t x78 = 3;
	int8_t x79 = -1;
	int8_t x80 = INT8_MIN;
	uint64_t t17 = 26LLU;

    t17 = (x77|(x78+(x79%x80)));

    if (t17 != 3LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x81 = INT32_MIN;
	int8_t x82 = -1;
	static uint16_t x83 = UINT16_MAX;
	int64_t x84 = INT64_MIN;
	volatile int64_t t18 = -1796LL;

    t18 = (x81|(x82+(x83%x84)));

    if (t18 != -2147418114LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = -1;
	static int32_t x86 = 394369165;
	static int8_t x88 = -1;

    t19 = (x85|(x86+(x87%x88)));

    if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x89 = UINT32_MAX;
	volatile uint32_t x90 = 1U;
	int8_t x91 = -1;
	uint8_t x92 = 24U;
	uint32_t t20 = UINT32_MAX;

    t20 = (x89|(x90+(x91%x92)));

    if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x94 = 4584;
	uint16_t x95 = 1U;

    t21 = (x93|(x94+(x95%x96)));

    if (t21 != -2147479063LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x97 = -1;
	uint16_t x98 = 1U;
	volatile int64_t x100 = -1LL;

    t22 = (x97|(x98+(x99%x100)));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x101 = INT16_MIN;
	volatile int32_t x102 = 2840862;
	int64_t x103 = -1LL;
	uint32_t x104 = 2050127932U;
	static volatile int64_t t23 = -42864536024576240LL;

    t23 = (x101|(x102+(x103%x104)));

    if (t23 != -9955LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = INT64_MIN;
	int16_t x106 = 2;
	volatile uint16_t x107 = UINT16_MAX;
	static uint32_t x108 = UINT32_MAX;
	static int64_t t24 = -30831486LL;

    t24 = (x105|(x106+(x107%x108)));

    if (t24 != -9223372036854710271LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x109 = INT16_MIN;
	int64_t x110 = INT64_MIN;
	volatile uint64_t x112 = 2421957400023366217LLU;
	static volatile uint64_t t25 = UINT64_MAX;

    t25 = (x109|(x110+(x111%x112)));

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x113 = UINT8_MAX;
	int32_t x114 = -91;
	uint32_t x115 = 78U;
	uint64_t x116 = UINT64_MAX;
	static volatile uint64_t t26 = UINT64_MAX;

    t26 = (x113|(x114+(x115%x116)));

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x117 = 115653495LLU;
	int64_t x118 = INT64_MIN;
	uint16_t x119 = UINT16_MAX;
	uint64_t x120 = UINT64_MAX;

    t27 = (x117|(x118+(x119%x120)));

    if (t27 != 9223372036970446847LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = INT64_MIN;
	int16_t x122 = -4;
	volatile int8_t x123 = INT8_MIN;
	int16_t x124 = -1;
	volatile int64_t t28 = 13546LL;

    t28 = (x121|(x122+(x123%x124)));

    if (t28 != -4LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x125 = INT16_MIN;
	static int8_t x126 = INT8_MAX;
	volatile int16_t x127 = INT16_MIN;
	int32_t t29 = -28;

    t29 = (x125|(x126+(x127%x128)));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x129 = INT8_MIN;
	static uint64_t x130 = UINT64_MAX;
	uint16_t x131 = UINT16_MAX;
	int16_t x132 = -889;
	uint64_t t30 = 63828057828950167LLU;

    t30 = (x129|(x130+(x131%x132)));

    if (t30 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = INT8_MIN;
	uint32_t x136 = UINT32_MAX;
	static volatile uint32_t t31 = 0U;

    t31 = (x133|(x134+(x135%x136)));

    if (t31 != 4294967168U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x138 = -21;
	int32_t x139 = 221255;
	int16_t x140 = 5;
	volatile int32_t t32 = 91;

    t32 = (x137|(x138+(x139%x140)));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x141 = INT64_MIN;
	int64_t x142 = 8791836909237LL;
	uint64_t x143 = UINT64_MAX;
	static volatile uint64_t t33 = 431799101LLU;

    t33 = (x141|(x142+(x143%x144)));

    if (t33 != 9223380828691709975LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x145 = -10;
	volatile uint8_t x146 = UINT8_MAX;
	volatile int8_t x147 = -43;
	volatile int16_t x148 = INT16_MAX;
	volatile int32_t t34 = 1707464;

    t34 = (x145|(x146+(x147%x148)));

    if (t34 != -10) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x149 = 308385357044LLU;
	int32_t x150 = INT32_MAX;
	int32_t x151 = -1;
	static int16_t x152 = INT16_MIN;
	uint64_t t35 = 2544537LLU;

    t35 = (x149|(x150+(x151%x152)));

    if (t35 != 309237645310LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x153 = INT64_MAX;
	static volatile int8_t x154 = INT8_MIN;
	int32_t x156 = INT32_MAX;

    t36 = (x153|(x154+(x155%x156)));

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x161 = 88;
	uint8_t x162 = UINT8_MAX;
	uint64_t x164 = 2192273686LLU;
	uint64_t t37 = 127LLU;

    t37 = (x161|(x162+(x163%x164)));

    if (t37 != 18427LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x166 = UINT32_MAX;
	int64_t x167 = -61LL;
	volatile uint16_t x168 = 1U;

    t38 = (x165|(x166+(x167%x168)));

    if (t38 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x169 = INT64_MIN;
	uint8_t x172 = 16U;
	int64_t t39 = 43280245822932LL;

    t39 = (x169|(x170+(x171%x172)));

    if (t39 != -56185131LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x173 = INT32_MIN;
	int8_t x174 = INT8_MIN;
	volatile int64_t t40 = -11841574998112641LL;

    t40 = (x173|(x174+(x175%x176)));

    if (t40 != -128LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x177 = UINT8_MAX;
	uint32_t x178 = 4068U;
	int8_t x179 = -3;

    t41 = (x177|(x178+(x179%x180)));

    if (t41 != 4095U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x182 = -1;
	int64_t x184 = INT64_MIN;
	int64_t t42 = 9206LL;

    t42 = (x181|(x182+(x183%x184)));

    if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x185 = 30U;
	uint8_t x186 = 15U;
	uint16_t x188 = 445U;
	volatile uint64_t t43 = 1096438044595744LLU;

    t43 = (x185|(x186+(x187%x188)));

    if (t43 != 190LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x193 = 16097LLU;
	volatile uint64_t x194 = UINT64_MAX;
	static int8_t x195 = INT8_MAX;
	volatile int32_t x196 = 3233;

    t44 = (x193|(x194+(x195%x196)));

    if (t44 != 16127LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x197 = INT64_MIN;
	uint16_t x200 = UINT16_MAX;
	int64_t t45 = -11965781238460067LL;

    t45 = (x197|(x198+(x199%x200)));

    if (t45 != -9223372036854769833LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x202 = INT8_MAX;
	static volatile int32_t x203 = INT32_MIN;
	volatile uint64_t x204 = 2423171225765154LLU;
	uint64_t t46 = 214876LLU;

    t46 = (x201|(x202+(x203%x204)));

    if (t46 != 1564701683089407LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x206 = INT32_MIN;
	volatile uint16_t x207 = UINT16_MAX;
	int16_t x208 = -16;

    t47 = (x205|(x206+(x207%x208)));

    if (t47 != -2147483617) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x213 = INT64_MAX;
	static uint32_t x214 = UINT32_MAX;
	int64_t x215 = INT64_MAX;
	volatile int8_t x216 = INT8_MIN;
	volatile int64_t t48 = INT64_MAX;

    t48 = (x213|(x214+(x215%x216)));

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x217 = -1;
	int64_t x219 = INT64_MIN;
	volatile uint8_t x220 = UINT8_MAX;
	volatile int64_t t49 = -74856299984246577LL;

    t49 = (x217|(x218+(x219%x220)));

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x221 = INT16_MIN;
	uint32_t x222 = 2423543U;
	static volatile uint16_t x223 = 539U;
	volatile int16_t x224 = -1;
	volatile uint32_t t50 = 13486U;

    t50 = (x221|(x222+(x223%x224)));

    if (t50 != 4294966007U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x225 = 1U;
	volatile uint64_t x226 = 140411509785857LLU;
	static int8_t x227 = 1;
	int8_t x228 = INT8_MIN;
	uint64_t t51 = 1834987145LLU;

    t51 = (x225|(x226+(x227%x228)));

    if (t51 != 140411509785859LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x230 = UINT16_MAX;
	int16_t x231 = 0;
	volatile int16_t x232 = INT16_MIN;
	volatile int64_t t52 = 13598469471LL;

    t52 = (x229|(x230+(x231%x232)));

    if (t52 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int32_t x234 = INT32_MIN;
	static uint16_t x235 = 5U;
	int64_t x236 = INT64_MIN;
	static uint64_t t53 = 615967LLU;

    t53 = (x233|(x234+(x235%x236)));

    if (t53 != 18446744072640062117LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x239 = 3324080LLU;
	uint64_t t54 = 164083LLU;

    t54 = (x237|(x238+(x239%x240)));

    if (t54 != 9223372041153067183LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x241 = INT16_MAX;
	static int64_t x242 = -4186154265991391LL;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = UINT16_MAX;
	volatile int64_t t55 = 408LL;

    t55 = (x241|(x242+(x243%x244)));

    if (t55 != -4186154266001409LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x245 = 251408345U;
	int32_t x246 = -6597397;
	int8_t x247 = INT8_MIN;
	volatile int32_t x248 = INT32_MAX;
	uint32_t t56 = 14883839U;

    t56 = (x245|(x246+(x247%x248)));

    if (t56 != 4294934523U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x249 = 159272762247514405LL;
	uint8_t x250 = 0U;
	int32_t x251 = -117;
	int16_t x252 = INT16_MAX;
	static int64_t t57 = -24871948964LL;

    t57 = (x249|(x250+(x251%x252)));

    if (t57 != -81LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x253 = UINT8_MAX;
	volatile uint16_t x254 = 1U;
	static volatile int8_t x255 = -1;
	static volatile int32_t t58 = 26;

    t58 = (x253|(x254+(x255%x256)));

    if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x257 = 91U;
	static int8_t x258 = -1;
	int16_t x259 = INT16_MIN;
	int16_t x260 = 22;

    t59 = (x257|(x258+(x259%x260)));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint16_t x261 = UINT16_MAX;
	uint64_t x263 = 57090LLU;
	uint64_t t60 = 198416734827LLU;

    t60 = (x261|(x262+(x263%x264)));

    if (t60 != 18446744071562133503LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x265 = 54U;
	int16_t x266 = -1;
	volatile int16_t x267 = -1;
	static int8_t x268 = INT8_MIN;

    t61 = (x265|(x266+(x267%x268)));

    if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x269 = 16457116U;
	static uint8_t x270 = 0U;
	static int32_t x272 = 972857;
	volatile int64_t t62 = 46387368LL;

    t62 = (x269|(x270+(x271%x272)));

    if (t62 != -57345LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x278 = 1U;
	volatile int8_t x279 = INT8_MIN;
	uint32_t x280 = UINT32_MAX;
	int64_t t63 = 8993195677610309LL;

    t63 = (x277|(x278+(x279%x280)));

    if (t63 != -8589934663LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x281 = -150;
	int64_t x282 = 9207623318594735LL;
	uint64_t x283 = 13321676364271685LLU;
	int16_t x284 = -1;
	uint64_t t64 = 32048170LLU;

    t64 = (x281|(x282+(x283%x284)));

    if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x285 = 1U;
	uint8_t x286 = UINT8_MAX;
	static volatile int64_t x287 = INT64_MIN;
	uint8_t x288 = 10U;
	int64_t t65 = 189597210127194312LL;

    t65 = (x285|(x286+(x287%x288)));

    if (t65 != 247LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x293 = INT16_MIN;
	volatile int8_t x294 = 0;
	uint8_t x295 = 6U;
	volatile uint32_t x296 = 62429497U;
	volatile uint32_t t66 = 0U;

    t66 = (x293|(x294+(x295%x296)));

    if (t66 != 4294934534U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x297 = UINT8_MAX;
	int32_t x298 = INT32_MIN;
	int8_t x299 = INT8_MAX;
	int32_t x300 = -1;
	int32_t t67 = 67971483;

    t67 = (x297|(x298+(x299%x300)));

    if (t67 != -2147483393) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x301 = INT16_MAX;
	static int16_t x302 = 2904;
	int16_t x303 = 0;
	int32_t x304 = INT32_MIN;
	int32_t t68 = 1291898;

    t68 = (x301|(x302+(x303%x304)));

    if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x305 = -1;
	uint8_t x306 = 12U;
	int16_t x307 = -1929;
	volatile int32_t t69 = 0;

    t69 = (x305|(x306+(x307%x308)));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x309 = INT16_MIN;
	volatile uint8_t x310 = 59U;
	int8_t x311 = -4;
	int32_t x312 = INT32_MAX;

    t70 = (x309|(x310+(x311%x312)));

    if (t70 != -32713) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x313 = INT16_MAX;
	uint8_t x314 = 5U;
	volatile uint32_t x315 = 33497448U;
	int8_t x316 = -1;

    t71 = (x313|(x314+(x315%x316)));

    if (t71 != 33521663U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x317 = 703U;
	uint64_t x318 = 12LLU;
	static int16_t x319 = -1;
	int32_t x320 = 657929;
	uint64_t t72 = 0LLU;

    t72 = (x317|(x318+(x319%x320)));

    if (t72 != 703LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x321 = INT8_MAX;
	volatile uint32_t x322 = 12U;
	int64_t x323 = -1LL;
	volatile int64_t t73 = 1419951528268328196LL;

    t73 = (x321|(x322+(x323%x324)));

    if (t73 != 127LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x325 = -1;
	int16_t x327 = -2;
	volatile int32_t x328 = INT32_MAX;
	int32_t t74 = 65;

    t74 = (x325|(x326+(x327%x328)));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x329 = UINT32_MAX;
	int64_t x330 = 26971946245LL;
	static int64_t x331 = INT64_MAX;
	int64_t x332 = 6872LL;
	static volatile int64_t t75 = 94341213433LL;

    t75 = (x329|(x330+(x331%x332)));

    if (t75 != 30064771071LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x333 = -7441346LL;
	static int32_t x334 = -1;
	uint8_t x335 = UINT8_MAX;
	uint64_t x336 = 184748521381957297LLU;
	volatile uint64_t t76 = 568617105928647LLU;

    t76 = (x333|(x334+(x335%x336)));

    if (t76 != 18446744073702110462LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x337 = 3;
	int8_t x338 = INT8_MIN;
	int16_t x340 = 5;
	static volatile int64_t t77 = 267327019LL;

    t77 = (x337|(x338+(x339%x340)));

    if (t77 != -129LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x341 = INT64_MAX;
	static uint64_t x342 = UINT64_MAX;
	uint32_t x343 = 762606805U;
	uint8_t x344 = 2U;

    t78 = (x341|(x342+(x343%x344)));

    if (t78 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x345 = 940U;
	int64_t x346 = -1LL;
	int32_t x347 = 16;
	int32_t x348 = INT32_MIN;
	static int64_t t79 = -5464066860791474LL;

    t79 = (x345|(x346+(x347%x348)));

    if (t79 != 943LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x353 = UINT32_MAX;
	volatile uint32_t x355 = UINT32_MAX;
	int16_t x356 = -1;
	static volatile int64_t t80 = 2172982125203425801LL;

    t80 = (x353|(x354+(x355%x356)));

    if (t80 != 27400091757182975LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x357 = INT64_MAX;
	int8_t x358 = 2;
	static int16_t x359 = INT16_MAX;
	static int64_t x360 = 26891632533851378LL;
	int64_t t81 = INT64_MAX;

    t81 = (x357|(x358+(x359%x360)));

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x366 = INT32_MIN;
	uint16_t x368 = 42U;
	int32_t t82 = -30842;

    t82 = (x365|(x366+(x367%x368)));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x369 = -1LL;
	uint32_t x371 = UINT32_MAX;
	int32_t x372 = INT32_MIN;
	volatile int64_t t83 = 0LL;

    t83 = (x369|(x370+(x371%x372)));

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x373 = INT16_MIN;
	int64_t x375 = INT64_MAX;
	uint64_t x376 = 1372LLU;
	volatile uint64_t t84 = 35LLU;

    t84 = (x373|(x374+(x375%x376)));

    if (t84 != 18446744073709538869LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x378 = INT8_MIN;
	int32_t x379 = INT32_MIN;
	int16_t x380 = -38;
	volatile int32_t t85 = -2778476;

    t85 = (x377|(x378+(x379%x380)));

    if (t85 != -22) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x381 = UINT8_MAX;
	static int8_t x382 = -1;
	int8_t x383 = INT8_MIN;
	static uint32_t x384 = 38400150U;
	volatile uint32_t t86 = 1114630984U;

    t86 = (x381|(x382+(x383%x384)));

    if (t86 != 32550655U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x385 = INT32_MIN;
	int64_t x386 = -1LL;
	uint32_t x387 = 0U;
	uint16_t x388 = 1U;
	int64_t t87 = 2459LL;

    t87 = (x385|(x386+(x387%x388)));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x390 = INT16_MIN;
	int8_t x391 = INT8_MIN;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t88 = 12LLU;

    t88 = (x389|(x390+(x391%x392)));

    if (t88 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x397 = 2850916323980LLU;
	uint16_t x398 = 4890U;
	int8_t x399 = -1;
	int16_t x400 = INT16_MIN;
	volatile uint64_t t89 = 27LLU;

    t89 = (x397|(x398+(x399%x400)));

    if (t89 != 2850916324253LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x401 = UINT16_MAX;
	volatile uint8_t x402 = 71U;
	int16_t x403 = 12;
	int64_t t90 = -141601LL;

    t90 = (x401|(x402+(x403%x404)));

    if (t90 != 65535LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int64_t x407 = INT64_MIN;
	volatile uint64_t t91 = UINT64_MAX;

    t91 = (x405|(x406+(x407%x408)));

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x409 = INT64_MIN;
	int16_t x411 = -58;
	int64_t x412 = 192LL;
	volatile int64_t t92 = 10102903866499LL;

    t92 = (x409|(x410+(x411%x412)));

    if (t92 != -9223372036854771913LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x413 = 19;
	static int16_t x414 = 995;
	static uint8_t x415 = 7U;
	uint8_t x416 = 29U;
	static volatile int32_t t93 = 64726048;

    t93 = (x413|(x414+(x415%x416)));

    if (t93 != 1019) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x417 = 5;
	int16_t x419 = INT16_MIN;
	int16_t x420 = 16187;
	volatile int32_t t94 = 161422;

    t94 = (x417|(x418+(x419%x420)));

    if (t94 != -305) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x421 = -482053446327285357LL;
	int8_t x423 = INT8_MAX;
	int32_t x424 = 8417;
	int64_t t95 = -62590LL;

    t95 = (x421|(x422+(x423%x424)));

    if (t95 != -482053446326886477LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x425 = INT64_MAX;
	volatile int64_t x426 = -12621225459LL;
	volatile uint16_t x427 = 374U;
	static int8_t x428 = -1;
	volatile int64_t t96 = 44736226212463948LL;

    t96 = (x425|(x426+(x427%x428)));

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x430 = 40;
	int16_t x432 = INT16_MAX;
	volatile int32_t t97 = -19;

    t97 = (x429|(x430+(x431%x432)));

    if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x433 = -14987397LL;
	uint16_t x434 = 888U;
	int8_t x436 = INT8_MAX;
	int64_t t98 = 11307LL;

    t98 = (x433|(x434+(x435%x436)));

    if (t98 != -14987397LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x437 = INT16_MIN;
	volatile int64_t x438 = INT64_MAX;
	int8_t x439 = 3;
	int16_t x440 = -1;
	int64_t t99 = -39366LL;

    t99 = (x437|(x438+(x439%x440)));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x441 = INT32_MAX;
	int32_t x443 = INT32_MIN;
	uint8_t x444 = UINT8_MAX;
	int32_t t100 = -97142;

    t100 = (x441|(x442+(x443%x444)));

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x445 = INT32_MIN;
	int32_t x446 = -1;
	static int8_t x447 = -1;
	int32_t x448 = INT32_MIN;
	volatile int32_t t101 = -951;

    t101 = (x445|(x446+(x447%x448)));

    if (t101 != -2) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x449 = 5U;
	volatile int8_t x451 = -1;
	volatile int32_t t102 = 4;

    t102 = (x449|(x450+(x451%x452)));

    if (t102 != 1226687) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x453 = 256;
	int64_t x454 = 4013267LL;
	int32_t x455 = INT32_MAX;
	int32_t x456 = INT32_MIN;

    t103 = (x453|(x454+(x455%x456)));

    if (t103 != 2151497170LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x457 = -1LL;
	uint16_t x458 = UINT16_MAX;
	volatile int64_t x459 = INT64_MIN;
	int32_t x460 = -1;
	volatile int64_t t104 = 12367235LL;

    t104 = (x457|(x458+(x459%x460)));

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x461 = 6U;
	static int16_t x463 = INT16_MIN;
	int8_t x464 = -12;
	volatile uint32_t t105 = 145445U;

    t105 = (x461|(x462+(x463%x464)));

    if (t105 != 15U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x465 = 3U;
	int32_t x466 = -1;
	int32_t x467 = INT32_MAX;
	int32_t x468 = -1;
	volatile int32_t t106 = 502671684;

    t106 = (x465|(x466+(x467%x468)));

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x473 = 1LLU;
	static volatile int32_t x474 = -1;
	int64_t x475 = INT64_MIN;
	static volatile uint16_t x476 = 1730U;
	volatile uint64_t t107 = 0LLU;

    t107 = (x473|(x474+(x475%x476)));

    if (t107 != 18446744073709550467LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x481 = INT32_MAX;
	static volatile uint16_t x483 = 60U;
	volatile int32_t x484 = INT32_MAX;
	volatile int32_t t108 = INT32_MAX;

    t108 = (x481|(x482+(x483%x484)));

    if (t108 != INT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x485 = INT16_MIN;
	int16_t x486 = INT16_MAX;
	volatile int8_t x487 = -1;
	uint8_t x488 = 1U;
	volatile int32_t t109 = 245578925;

    t109 = (x485|(x486+(x487%x488)));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x489 = 2127296028U;
	volatile uint16_t x492 = 16U;
	volatile uint64_t t110 = 8187084358850LLU;

    t110 = (x489|(x490+(x491%x492)));

    if (t110 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x493 = -1;
	uint8_t x494 = 2U;
	int8_t x495 = -1;
	volatile int8_t x496 = INT8_MAX;
	int32_t t111 = -7;

    t111 = (x493|(x494+(x495%x496)));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x497 = 328787826864510420LLU;
	uint16_t x498 = UINT16_MAX;
	volatile uint64_t x499 = UINT64_MAX;
	int32_t x500 = INT32_MIN;
	volatile uint64_t t112 = 84286085843525LLU;

    t112 = (x497|(x498+(x499%x500)));

    if (t112 != 328787829012037630LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x501 = 215;
	static int32_t x502 = INT32_MIN;
	static uint64_t x503 = UINT64_MAX;
	uint32_t x504 = 363U;
	static uint64_t t113 = 671496LLU;

    t113 = (x501|(x502+(x503%x504)));

    if (t113 != 18446744071562068183LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x505 = 0U;
	static int32_t x507 = INT32_MAX;
	int8_t x508 = -2;
	int32_t t114 = -67;

    t114 = (x505|(x506+(x507%x508)));

    if (t114 != -127) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x509 = UINT8_MAX;
	static int16_t x510 = -1;
	static int32_t x511 = INT32_MIN;
	int32_t x512 = INT32_MIN;
	volatile int32_t t115 = 160496;

    t115 = (x509|(x510+(x511%x512)));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x513 = 1U;
	uint64_t x514 = UINT64_MAX;
	uint32_t x515 = UINT32_MAX;
	uint64_t x516 = 496210685344815945LLU;

    t116 = (x513|(x514+(x515%x516)));

    if (t116 != 4294967295LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x518 = 5054U;
	int8_t x519 = INT8_MIN;
	volatile uint64_t t117 = 1120246499LLU;

    t117 = (x517|(x518+(x519%x520)));

    if (t117 != 943706031LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x521 = 7988;
	int8_t x522 = INT8_MAX;
	uint16_t x524 = 22645U;
	static volatile int32_t t118 = 51440103;

    t118 = (x521|(x522+(x523%x524)));

    if (t118 != 8116) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x525 = INT8_MAX;
	int8_t x526 = -10;
	int64_t x527 = -1LL;
	int16_t x528 = INT16_MIN;
	volatile int64_t t119 = -4554LL;

    t119 = (x525|(x526+(x527%x528)));

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x529 = 32U;
	static uint8_t x530 = UINT8_MAX;
	uint32_t x531 = 45824U;
	volatile int64_t t120 = -82623LL;

    t120 = (x529|(x530+(x531%x532)));

    if (t120 != 46079LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x533 = 0;
	uint32_t x534 = 89639841U;
	int16_t x535 = INT16_MIN;
	uint8_t x536 = 7U;
	volatile uint32_t t121 = 1U;

    t121 = (x533|(x534+(x535%x536)));

    if (t121 != 89639840U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x537 = INT64_MAX;
	int8_t x539 = INT8_MIN;
	volatile int16_t x540 = -1;
	volatile int64_t t122 = -8142140443LL;

    t122 = (x537|(x538+(x539%x540)));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x541 = INT64_MIN;
	int32_t x542 = INT32_MIN;
	int64_t x543 = -11329405892388150LL;
	uint16_t x544 = 6812U;
	static volatile int64_t t123 = 21951LL;

    t123 = (x541|(x542+(x543%x544)));

    if (t123 != -2147490338LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x545 = -1;
	int8_t x547 = 6;
	int32_t t124 = 25;

    t124 = (x545|(x546+(x547%x548)));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x549 = 627853594LLU;
	volatile uint16_t x550 = UINT16_MAX;
	int16_t x551 = 27;
	uint64_t t125 = 5629LLU;

    t125 = (x549|(x550+(x551%x552)));

    if (t125 != 627900415LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x555 = INT16_MAX;
	volatile int64_t x556 = INT64_MAX;
	static int64_t t126 = -1598564578161433LL;

    t126 = (x553|(x554+(x555%x556)));

    if (t126 != 34072LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int64_t x557 = 281274643635592LL;
	int8_t x560 = INT8_MAX;

    t127 = (x557|(x558+(x559%x560)));

    if (t127 != -3LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int32_t x565 = 2641830;
	uint16_t x566 = UINT16_MAX;
	uint16_t x567 = 888U;
	int8_t x568 = -1;
	volatile int32_t t128 = 58752662;

    t128 = (x565|(x566+(x567%x568)));

    if (t128 != 2686975) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x570 = 1U;
	int64_t x571 = -1LL;
	int64_t x572 = -1LL;
	volatile int64_t t129 = 162451LL;

    t129 = (x569|(x570+(x571%x572)));

    if (t129 != -32767LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x573 = 0;
	int8_t x574 = -1;
	int16_t x576 = INT16_MAX;

    t130 = (x573|(x574+(x575%x576)));

    if (t130 != -3) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x577 = -40887639LL;
	int8_t x578 = -1;
	int64_t x579 = 193107653878569984LL;
	volatile int64_t t131 = -6200758LL;

    t131 = (x577|(x578+(x579%x580)));

    if (t131 != -40887635LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x582 = -1;
	volatile uint16_t x583 = 3365U;
	volatile int32_t x584 = -4;
	static int32_t t132 = 7;

    t132 = (x581|(x582+(x583%x584)));

    if (t132 != -32768) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x585 = 1U;
	static int64_t x586 = INT64_MIN;
	uint64_t x588 = 3821742289288LLU;

    t133 = (x585|(x586+(x587%x588)));

    if (t133 != 9223375838341477517LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x589 = INT32_MAX;
	static int16_t x590 = INT16_MIN;
	int16_t x591 = -2302;
	uint64_t x592 = UINT64_MAX;

    t134 = (x589|(x590+(x591%x592)));

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x593 = -1LL;
	static int16_t x594 = INT16_MAX;
	volatile int64_t x596 = -2115166494LL;
	volatile int64_t t135 = -30171824LL;

    t135 = (x593|(x594+(x595%x596)));

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x597 = UINT64_MAX;
	volatile int64_t x598 = INT64_MAX;
	static volatile int64_t x599 = INT64_MIN;
	uint64_t x600 = 49424694LLU;
	volatile uint64_t t136 = UINT64_MAX;

    t136 = (x597|(x598+(x599%x600)));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x603 = -1LL;
	volatile int16_t x604 = -91;

    t137 = (x601|(x602+(x603%x604)));

    if (t137 != -1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x605 = INT8_MAX;
	volatile int16_t x606 = INT16_MIN;
	static uint64_t x607 = UINT64_MAX;
	volatile uint32_t x608 = 1U;
	static volatile uint64_t t138 = 15037LLU;

    t138 = (x605|(x606+(x607%x608)));

    if (t138 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x609 = INT32_MAX;
	uint32_t x610 = UINT32_MAX;
	int32_t x611 = INT32_MIN;
	int16_t x612 = INT16_MIN;
	uint32_t t139 = UINT32_MAX;

    t139 = (x609|(x610+(x611%x612)));

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x613 = INT32_MIN;
	int8_t x614 = INT8_MIN;
	int16_t x615 = INT16_MIN;
	int8_t x616 = -1;
	int32_t t140 = -90;

    t140 = (x613|(x614+(x615%x616)));

    if (t140 != -128) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x617 = -1;
	volatile uint64_t x618 = 563LLU;
	static int64_t x619 = 282636547464140LL;
	static int64_t x620 = INT64_MAX;
	volatile uint64_t t141 = UINT64_MAX;

    t141 = (x617|(x618+(x619%x620)));

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x621 = INT16_MIN;
	static uint64_t x622 = 173813080LLU;
	static int16_t x623 = 0;
	int32_t x624 = INT32_MIN;

    t142 = (x621|(x622+(x623%x624)));

    if (t142 != 18446744073709530456LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x625 = UINT64_MAX;
	int64_t x627 = INT64_MIN;
	static volatile uint64_t t143 = UINT64_MAX;

    t143 = (x625|(x626+(x627%x628)));

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x629 = INT16_MIN;
	static volatile int64_t x631 = -1LL;
	int64_t x632 = INT64_MAX;
	int64_t t144 = 645LL;

    t144 = (x629|(x630+(x631%x632)));

    if (t144 != -32514LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x633 = UINT64_MAX;
	int8_t x634 = INT8_MAX;
	uint8_t x635 = 104U;
	int32_t x636 = -1564909;
	uint64_t t145 = UINT64_MAX;

    t145 = (x633|(x634+(x635%x636)));

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x642 = -6;
	static int32_t x644 = INT32_MAX;
	uint64_t t146 = 189352516LLU;

    t146 = (x641|(x642+(x643%x644)));

    if (t146 != 4600LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x646 = -23LL;
	volatile int64_t x647 = INT64_MIN;
	volatile int64_t x648 = INT64_MIN;
	volatile int64_t t147 = -74954122717807359LL;

    t147 = (x645|(x646+(x647%x648)));

    if (t147 != -23LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x649 = INT8_MIN;
	int8_t x650 = 0;
	int8_t x651 = -1;
	static int32_t x652 = -798104;
	int32_t t148 = 193548062;

    t148 = (x649|(x650+(x651%x652)));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x657 = INT16_MIN;
	volatile int64_t x658 = INT64_MAX;
	static int16_t x659 = -1;
	int32_t x660 = 2213103;
	volatile int64_t t149 = 1959074LL;

    t149 = (x657|(x658+(x659%x660)));

    if (t149 != -2LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint8_t x661 = 3U;
	volatile int8_t x663 = INT8_MAX;
	static volatile int8_t x664 = INT8_MIN;
	volatile int32_t t150 = -1773440;

    t150 = (x661|(x662+(x663%x664)));

    if (t150 != 127) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x665 = 11907774665863756LL;
	static uint16_t x666 = UINT16_MAX;
	static uint64_t x667 = 152043LLU;
	int64_t x668 = -1LL;
	volatile uint64_t t151 = 29841256635288LLU;

    t151 = (x665|(x666+(x667%x668)));

    if (t151 != 11907774665946094LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x669 = INT64_MIN;
	uint32_t x670 = UINT32_MAX;
	volatile int64_t t152 = 75069LL;

    t152 = (x669|(x670+(x671%x672)));

    if (t152 != -9223372032559808543LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x673 = 9;
	int32_t x674 = -1;
	int16_t x675 = 12;
	int32_t x676 = -169853408;
	int32_t t153 = 9337606;

    t153 = (x673|(x674+(x675%x676)));

    if (t153 != 11) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x677 = -1;
	volatile int16_t x678 = -1;
	int64_t x680 = -1LL;
	int64_t t154 = -45562791430LL;

    t154 = (x677|(x678+(x679%x680)));

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x681 = 93U;
	int8_t x683 = INT8_MIN;
	volatile int32_t t155 = 0;

    t155 = (x681|(x682+(x683%x684)));

    if (t155 != -32675) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x685 = UINT64_MAX;
	int16_t x686 = -7;
	static uint64_t x687 = 1102LLU;
	static int64_t x688 = 614468893377383LL;
	uint64_t t156 = UINT64_MAX;

    t156 = (x685|(x686+(x687%x688)));

    if (t156 != UINT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x689 = INT16_MAX;
	uint8_t x690 = 0U;
	volatile int8_t x691 = 2;
	int64_t t157 = 90199LL;

    t157 = (x689|(x690+(x691%x692)));

    if (t157 != 32767LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x693 = 419LLU;
	int32_t x694 = -1;
	volatile int16_t x695 = INT16_MAX;
	uint64_t x696 = UINT64_MAX;
	static volatile uint64_t t158 = 6473LLU;

    t158 = (x693|(x694+(x695%x696)));

    if (t158 != 32767LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x701 = -2;
	int8_t x702 = INT8_MIN;
	int16_t x703 = INT16_MIN;
	int64_t x704 = -1LL;

    t159 = (x701|(x702+(x703%x704)));

    if (t159 != -2LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x706 = -9;
	int32_t x707 = -23886844;
	static uint8_t x708 = 1U;
	volatile int32_t t160 = -622909669;

    t160 = (x705|(x706+(x707%x708)));

    if (t160 != -9) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x717 = -1;
	int8_t x718 = INT8_MIN;
	uint8_t x719 = 14U;
	int32_t x720 = INT32_MIN;
	volatile int32_t t161 = -87;

    t161 = (x717|(x718+(x719%x720)));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x721 = 278361780908189600LLU;
	static volatile int16_t x722 = -12414;
	int16_t x724 = INT16_MIN;
	volatile uint64_t t162 = 181201LLU;

    t162 = (x721|(x722+(x723%x724)));

    if (t162 != 18446744073709547426LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x725 = UINT64_MAX;
	static volatile int32_t x726 = -496732;
	uint64_t t163 = UINT64_MAX;

    t163 = (x725|(x726+(x727%x728)));

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x729 = 50U;
	int32_t x730 = -1451;
	static int16_t x731 = 0;
	static uint64_t x732 = 146873574991LLU;

    t164 = (x729|(x730+(x731%x732)));

    if (t164 != 18446744073709550199LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x733 = -1;
	int64_t x734 = INT64_MIN;
	volatile uint16_t x735 = UINT16_MAX;
	int64_t x736 = -1660797037378805326LL;
	volatile int64_t t165 = -877132583LL;

    t165 = (x733|(x734+(x735%x736)));

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x737 = -1LL;
	volatile uint8_t x738 = UINT8_MAX;
	uint8_t x739 = 54U;
	static int64_t x740 = INT64_MIN;

    t166 = (x737|(x738+(x739%x740)));

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x741 = -1;
	uint16_t x742 = 38U;
	int32_t x743 = INT32_MIN;
	static int32_t x744 = -2932587;

    t167 = (x741|(x742+(x743%x744)));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x745 = INT32_MIN;
	int64_t x747 = INT64_MIN;
	volatile int64_t x748 = -1LL;
	static volatile int64_t t168 = -14079724LL;

    t168 = (x745|(x746+(x747%x748)));

    if (t168 != -2128322596LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x749 = 28537LLU;
	static int64_t x750 = INT64_MIN;
	volatile uint64_t t169 = 1LLU;

    t169 = (x749|(x750+(x751%x752)));

    if (t169 != 9223372036854804345LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x757 = -1;
	int64_t x758 = -27015208492182376LL;
	int64_t x760 = INT64_MIN;
	volatile int64_t t170 = -907991871LL;

    t170 = (x757|(x758+(x759%x760)));

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x761 = INT8_MAX;
	int32_t x763 = INT32_MIN;
	int32_t x764 = INT32_MIN;
	int32_t t171 = -27092081;

    t171 = (x761|(x762+(x763%x764)));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x765 = -68177564188829LL;
	int16_t x766 = INT16_MAX;
	uint8_t x767 = 2U;
	int16_t x768 = INT16_MIN;
	int64_t t172 = 394115181487LL;

    t172 = (x765|(x766+(x767%x768)));

    if (t172 != -68177564156061LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x770 = -1;
	int32_t x771 = INT32_MIN;
	uint32_t x772 = 89U;
	uint32_t t173 = 21U;

    t173 = (x769|(x770+(x771%x772)));

    if (t173 != 4294934594U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x773 = 461U;
	uint8_t x774 = 0U;
	static int8_t x775 = INT8_MAX;
	volatile int32_t x776 = INT32_MIN;
	int32_t t174 = -310501529;

    t174 = (x773|(x774+(x775%x776)));

    if (t174 != 511) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x777 = 3;
	uint16_t x778 = 4U;
	int64_t x779 = INT64_MIN;
	int16_t x780 = INT16_MIN;

    t175 = (x777|(x778+(x779%x780)));

    if (t175 != 7LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x781 = -1623888;
	int32_t x783 = -2;
	volatile uint8_t x784 = UINT8_MAX;
	int32_t t176 = 352282;

    t176 = (x781|(x782+(x783%x784)));

    if (t176 != -2) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x785 = 52U;
	volatile uint8_t x787 = 21U;
	static uint64_t x788 = 28037255LLU;
	uint64_t t177 = 577797169354253LLU;

    t177 = (x785|(x786+(x787%x788)));

    if (t177 != 18446744071562068021LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x789 = -1;
	int64_t x790 = INT64_MIN;
	int64_t x791 = INT64_MAX;
	volatile int64_t t178 = 31465593LL;

    t178 = (x789|(x790+(x791%x792)));

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x797 = INT16_MIN;
	static int16_t x800 = -1;
	int64_t t179 = -13742LL;

    t179 = (x797|(x798+(x799%x800)));

    if (t179 != -32768LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x801 = -7LL;
	static int8_t x803 = INT8_MIN;
	int64_t x804 = -542502541481544324LL;
	int64_t t180 = -12182949467597LL;

    t180 = (x801|(x802+(x803%x804)));

    if (t180 != -7LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x805 = 30;
	int16_t x806 = INT16_MIN;
	int16_t x807 = -1;
	static uint16_t x808 = 8860U;
	int32_t t181 = -21356;

    t181 = (x805|(x806+(x807%x808)));

    if (t181 != -32769) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x813 = INT32_MIN;
	volatile int16_t x814 = -646;
	uint64_t x815 = 324604LLU;
	static int32_t x816 = INT32_MIN;

    t182 = (x813|(x814+(x815%x816)));

    if (t182 != 18446744071562391926LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x817 = 14594378U;
	int16_t x818 = -1;
	int32_t x819 = -809446587;
	volatile uint32_t t183 = UINT32_MAX;

    t183 = (x817|(x818+(x819%x820)));

    if (t183 != UINT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x825 = 6U;
	int64_t x826 = INT64_MIN;
	uint8_t x827 = 1U;
	int8_t x828 = INT8_MIN;

    t184 = (x825|(x826+(x827%x828)));

    if (t184 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x831 = INT8_MAX;
	int64_t x832 = INT64_MIN;

    t185 = (x829|(x830+(x831%x832)));

    if (t185 != -30721LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x834 = -1;
	uint32_t x835 = 2338U;
	volatile int32_t x836 = -1;
	volatile uint32_t t186 = 119U;

    t186 = (x833|(x834+(x835%x836)));

    if (t186 != 4294967285U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x837 = 6U;
	static volatile int8_t x839 = INT8_MIN;
	int32_t x840 = INT32_MIN;
	static volatile uint32_t t187 = 325447U;

    t187 = (x837|(x838+(x839%x840)));

    if (t187 != 4294967167U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x841 = -1;
	int16_t x842 = -6;
	int64_t x843 = -1LL;
	volatile int64_t t188 = -377344LL;

    t188 = (x841|(x842+(x843%x844)));

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x845 = -1;
	int64_t x846 = -1LL;
	int8_t x847 = INT8_MAX;
	static volatile int16_t x848 = -1;
	static volatile int64_t t189 = 1LL;

    t189 = (x845|(x846+(x847%x848)));

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x849 = -458;
	uint8_t x851 = 27U;
	uint32_t x852 = 1118517618U;
	volatile uint32_t t190 = 1634895979U;

    t190 = (x849|(x850+(x851%x852)));

    if (t190 != 4294967231U) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x854 = INT64_MAX;
	int64_t x855 = 814135897LL;
	int64_t x856 = -1LL;
	static int64_t t191 = INT64_MAX;

    t191 = (x853|(x854+(x855%x856)));

    if (t191 != INT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x857 = INT16_MIN;
	static uint64_t x858 = UINT64_MAX;
	volatile uint16_t x860 = UINT16_MAX;
	volatile uint64_t t192 = 6346629280109963LLU;

    t192 = (x857|(x858+(x859%x860)));

    if (t192 != 18446744073709518883LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x861 = 529591705U;
	int64_t x862 = 9114963LL;
	volatile uint8_t x864 = 8U;
	int64_t t193 = -16100LL;

    t193 = (x861|(x862+(x863%x864)));

    if (t193 != 530316763LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x865 = -1;
	int16_t x866 = 480;
	static int8_t x867 = -1;
	int8_t x868 = INT8_MAX;
	int32_t t194 = -30;

    t194 = (x865|(x866+(x867%x868)));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x870 = 4U;
	volatile int64_t x871 = INT64_MIN;
	uint8_t x872 = UINT8_MAX;
	volatile int64_t t195 = 513474414219779165LL;

    t195 = (x869|(x870+(x871%x872)));

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x873 = UINT32_MAX;
	int8_t x874 = 12;
	uint32_t x875 = 7U;
	int16_t x876 = -1;

    t196 = (x873|(x874+(x875%x876)));

    if (t196 != UINT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x877 = 8U;
	static uint64_t x878 = UINT64_MAX;
	int64_t x879 = INT64_MIN;
	static volatile uint64_t t197 = 123LLU;

    t197 = (x877|(x878+(x879%x880)));

    if (t197 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x881 = INT32_MIN;
	uint32_t x882 = 118U;
	static int16_t x883 = INT16_MAX;
	uint64_t x884 = 116884895127054289LLU;
	static volatile uint64_t t198 = 216595LLU;

    t198 = (x881|(x882+(x883%x884)));

    if (t198 != 18446744071562100853LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x885 = 6U;
	int16_t x887 = -1;
	static int32_t x888 = INT32_MIN;
	static volatile int32_t t199 = -446;

    t199 = (x885|(x886+(x887%x888)));

    if (t199 != -2) { NG(); } else { ; }
	
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

