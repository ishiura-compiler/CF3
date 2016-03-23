
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

static volatile int32_t t0 = 75;
volatile int16_t x5 = -116;
static uint32_t x12 = UINT32_MAX;
static volatile int32_t t2 = -30;
static int8_t x13 = 1;
int8_t x15 = INT8_MIN;
int32_t x17 = 3578;
int64_t t4 = -2171294954059LL;
static uint64_t x22 = 70969LLU;
static int64_t x24 = 2059375177803LL;
uint64_t x27 = 2LLU;
uint8_t x36 = 27U;
volatile int64_t x38 = INT64_MIN;
static int32_t x48 = -2919250;
uint32_t x53 = 2U;
volatile uint8_t x57 = 1U;
uint32_t x64 = UINT32_MAX;
volatile uint16_t x71 = 131U;
int64_t t17 = INT64_MAX;
int64_t x82 = -12LL;
int8_t x83 = INT8_MAX;
int64_t x84 = 263821084953LL;
volatile int64_t t19 = 0LL;
static int32_t x86 = -1;
uint32_t x88 = 145U;
static volatile int32_t t20 = -239441946;
volatile int64_t t21 = INT64_MIN;
uint32_t x99 = 113487U;
volatile int8_t x101 = -17;
volatile uint16_t x102 = 2427U;
int32_t x111 = 587031;
static int16_t x127 = INT16_MIN;
static int64_t x128 = INT64_MAX;
volatile uint32_t x132 = 5670610U;
int16_t x138 = 4623;
int64_t x141 = INT64_MAX;
uint32_t t35 = 11990170U;
int8_t x150 = 1;
static int32_t x155 = INT32_MAX;
int64_t x160 = 81820842474LL;
int16_t x162 = INT16_MAX;
uint8_t x164 = 89U;
int8_t x169 = -2;
int32_t x180 = INT32_MAX;
static int64_t t43 = -4287560682791LL;
uint8_t x186 = 0U;
uint32_t x206 = 160U;
volatile int8_t x207 = 1;
int32_t t49 = -4160736;
volatile uint32_t x214 = 1502086U;
int8_t x218 = 1;
int16_t x219 = -1;
int16_t x220 = 176;
int16_t x225 = -188;
int16_t x236 = INT16_MIN;
int64_t x239 = -827958078313220LL;
static int8_t x260 = INT8_MIN;
int16_t x271 = 3246;
uint16_t x274 = UINT16_MAX;
int32_t x275 = INT32_MIN;
uint16_t x276 = 6721U;
int32_t x277 = INT32_MIN;
static uint64_t x287 = UINT64_MAX;
volatile int32_t t68 = 0;
int32_t x303 = INT32_MIN;
static uint16_t x312 = UINT16_MAX;
uint16_t x317 = 972U;
int8_t x324 = -1;
uint64_t x326 = 6388564LLU;
static int8_t x344 = -12;
static uint32_t t81 = UINT32_MAX;
uint16_t x346 = 560U;
volatile int64_t t83 = 4358LL;
uint64_t x358 = 6032841790505075040LLU;
static int8_t x361 = 7;
uint64_t x374 = 553228905LLU;
static int64_t x390 = -196577LL;
int32_t t94 = -118265;
int8_t x401 = 0;
int8_t x406 = INT8_MIN;
volatile int32_t t96 = -23416;
static int32_t x410 = -43880197;
int16_t x411 = INT16_MIN;
uint16_t x413 = 3U;
int64_t x416 = INT64_MAX;
int16_t x417 = -1;
static volatile int16_t x423 = 3471;
static int32_t t102 = 307827;
int16_t x433 = INT16_MIN;
int16_t x435 = INT16_MIN;
static volatile int32_t t103 = 337418439;
int8_t x438 = INT8_MAX;
int32_t x445 = -1;
volatile int16_t x451 = -1;
uint16_t x453 = 1685U;
static int32_t t108 = -10;
int64_t x461 = INT64_MIN;
int32_t x462 = 389;
uint32_t x463 = UINT32_MAX;
int8_t x472 = 37;
int64_t x483 = -1LL;
volatile int32_t t116 = 3696;
static uint32_t x499 = 41819U;
static int16_t x501 = INT16_MAX;
int16_t x503 = -1;
int32_t t119 = 52257766;
volatile int32_t t122 = 0;
static int8_t x520 = INT8_MIN;
static int32_t t123 = 723523296;
int8_t x523 = 1;
int32_t t124 = -23311883;
uint64_t x526 = 7737840658479027534LLU;
int8_t x532 = INT8_MAX;
int32_t x536 = -7577;
volatile uint8_t x541 = 0U;
int16_t x542 = INT16_MIN;
int16_t x544 = INT16_MIN;
uint16_t x545 = UINT16_MAX;
uint32_t x555 = UINT32_MAX;
volatile int16_t x557 = 1;
int8_t x558 = INT8_MIN;
int16_t x562 = -1;
int32_t x572 = -109;
int32_t x575 = -1;
static uint8_t x583 = 3U;
int32_t x585 = 10;
uint32_t x588 = UINT32_MAX;
volatile int32_t t139 = -843;
int64_t x608 = INT64_MIN;
volatile uint64_t x611 = UINT64_MAX;
uint64_t x612 = 11410274276LLU;
int32_t t145 = -3292;
static uint64_t x621 = UINT64_MAX;
static uint64_t t147 = UINT64_MAX;
uint16_t x628 = 3866U;
int64_t x635 = 8106036283LL;
int64_t x636 = 52948LL;
volatile int64_t t149 = -1LL;
volatile int32_t t150 = 1322177;
int8_t x648 = INT8_MIN;
static uint32_t x650 = UINT32_MAX;
int8_t x654 = INT8_MIN;
uint8_t x655 = UINT8_MAX;
static uint8_t x658 = UINT8_MAX;
int16_t x659 = INT16_MAX;
int32_t x660 = 82494;
volatile int8_t x664 = 3;
volatile int8_t x667 = INT8_MIN;
int16_t x669 = -1;
volatile int64_t x677 = -1LL;
uint8_t x678 = 3U;
int64_t t159 = -5LL;
volatile int32_t x686 = -1;
static int32_t x689 = INT32_MIN;
int64_t t164 = 14441LL;
uint32_t x707 = 8U;
volatile int8_t x709 = 3;
uint64_t x710 = 81359LLU;
int16_t x711 = INT16_MIN;
int8_t x712 = -1;
static int64_t x724 = INT64_MIN;
uint16_t x726 = 2U;
int32_t t170 = 22;
int16_t x739 = INT16_MAX;
static int32_t t175 = -187139;
uint32_t x749 = 21U;
static int64_t t177 = -125595478010585686LL;
static uint8_t x758 = UINT8_MAX;
uint32_t x761 = 100U;
int16_t x771 = INT16_MIN;
int32_t t182 = INT32_MAX;
volatile int32_t t183 = INT32_MIN;
int32_t x786 = -1;
int16_t x789 = INT16_MAX;
int64_t t186 = -1629544LL;
static int32_t x806 = INT32_MIN;
static int32_t x809 = -172;
int32_t x810 = INT32_MAX;
int16_t x811 = INT16_MAX;
int16_t x813 = 1;
uint64_t x818 = UINT64_MAX;
static uint64_t t192 = 1556LLU;
int64_t x827 = INT64_MIN;
int8_t x828 = INT8_MAX;
static int64_t x832 = -267711218LL;
volatile int64_t x835 = -1LL;
int16_t x837 = 66;
int8_t x838 = INT8_MAX;
int32_t x839 = INT32_MIN;
static int8_t x842 = INT8_MIN;
int8_t x844 = -3;
int32_t x848 = INT32_MAX;
int8_t x849 = INT8_MIN;
int16_t x850 = -1;


void f0(void) {
    	int32_t x1 = -1;
	uint16_t x2 = UINT16_MAX;
	static int8_t x3 = -1;
	uint64_t x4 = UINT64_MAX;

    t0 = (x1&(x2-(x3<=x4)));

    if (t0 != 65534) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = -37;
	uint8_t x7 = UINT8_MAX;
	uint8_t x8 = 0U;
	int32_t t1 = 216;

    t1 = (x5&(x6-(x7<=x8)));

    if (t1 != -120) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int8_t x10 = -1;
	int32_t x11 = INT32_MAX;

    t2 = (x9&(x10-(x11<=x12)));

    if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x14 = UINT8_MAX;
	static uint8_t x16 = 21U;
	volatile int32_t t3 = 5249;

    t3 = (x13&(x14-(x15<=x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = 130267456LL;
	int32_t x19 = INT32_MIN;
	int32_t x20 = -1;

    t4 = (x17&(x18-(x19<=x20)));

    if (t4 != 2362LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 1U;
	static uint32_t x23 = UINT32_MAX;
	volatile uint64_t t5 = 5262059025890429226LLU;

    t5 = (x21&(x22-(x23<=x24)));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = 1;
	uint64_t x26 = UINT64_MAX;
	int8_t x28 = -1;
	volatile uint64_t t6 = 51585LLU;

    t6 = (x25&(x26-(x27<=x28)));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int32_t x29 = INT32_MIN;
	int64_t x30 = -1LL;
	int8_t x31 = 2;
	int16_t x32 = -1;
	volatile int64_t t7 = 375803LL;

    t7 = (x29&(x30-(x31<=x32)));

    if (t7 != -2147483648LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1LL;
	int64_t x34 = 125111640LL;
	uint64_t x35 = 916593356511012LLU;
	int64_t t8 = 526285405101831LL;

    t8 = (x33&(x34-(x35<=x36)));

    if (t8 != 125111640LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -22;
	volatile int32_t x39 = INT32_MIN;
	uint32_t x40 = 954159U;
	int64_t t9 = INT64_MIN;

    t9 = (x37&(x38-(x39<=x40)));

    if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x41 = INT64_MIN;
	uint32_t x42 = 36232U;
	int16_t x43 = -1;
	uint64_t x44 = 138725706LLU;
	int64_t t10 = -4530LL;

    t10 = (x41&(x42-(x43<=x44)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	int64_t x46 = -54LL;
	uint8_t x47 = 0U;
	volatile int64_t t11 = 0LL;

    t11 = (x45&(x46-(x47<=x48)));

    if (t11 != -128LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 13U;
	int32_t x50 = INT32_MIN;
	uint8_t x51 = UINT8_MAX;
	int8_t x52 = -1;
	static int32_t t12 = 2831579;

    t12 = (x49&(x50-(x51<=x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = -1LL;
	static int8_t x55 = INT8_MAX;
	int64_t x56 = -137738804295LL;
	volatile int64_t t13 = 73634599589LL;

    t13 = (x53&(x54-(x55<=x56)));

    if (t13 != 2LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x58 = 7U;
	int64_t x59 = INT64_MAX;
	static uint16_t x60 = 3716U;
	volatile int32_t t14 = 671;

    t14 = (x57&(x58-(x59<=x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = 6250;
	volatile int32_t x62 = -1;
	static uint32_t x63 = UINT32_MAX;
	volatile int32_t t15 = -42096;

    t15 = (x61&(x62-(x63<=x64)));

    if (t15 != 6250) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -1;
	int64_t x66 = -1LL;
	uint64_t x67 = UINT64_MAX;
	volatile int32_t x68 = 23893341;
	static int64_t t16 = 40056045688LL;

    t16 = (x65&(x66-(x67<=x68)));

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MAX;
	int8_t x70 = -1;
	int8_t x72 = -5;

    t17 = (x69&(x70-(x71<=x72)));

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	volatile uint32_t x74 = 175396U;
	uint32_t x75 = UINT32_MAX;
	int64_t x76 = -13LL;
	uint32_t t18 = 51566U;

    t18 = (x73&(x74-(x75<=x76)));

    if (t18 != 175396U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = 793843030103214689LL;

    t19 = (x81&(x82-(x83<=x84)));

    if (t19 != 793843030103214689LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x85 = 0U;
	int64_t x87 = 0LL;

    t20 = (x85&(x86-(x87<=x88)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MIN;
	int8_t x91 = 2;
	static int8_t x92 = INT8_MAX;

    t21 = (x89&(x90-(x91<=x92)));

    if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x93 = -1;
	static volatile uint32_t x94 = 101189U;
	int8_t x95 = INT8_MIN;
	int32_t x96 = INT32_MIN;
	volatile uint32_t t22 = 870628401U;

    t22 = (x93&(x94-(x95<=x96)));

    if (t22 != 101189U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x97 = 13U;
	int8_t x98 = INT8_MAX;
	uint32_t x100 = 1U;
	int32_t t23 = 156069;

    t23 = (x97&(x98-(x99<=x100)));

    if (t23 != 13) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x103 = UINT8_MAX;
	int32_t x104 = -1;
	volatile int32_t t24 = -108690787;

    t24 = (x101&(x102-(x103<=x104)));

    if (t24 != 2411) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = INT8_MAX;
	static volatile uint64_t x106 = 58LLU;
	int32_t x107 = 113935633;
	int32_t x108 = INT32_MAX;
	uint64_t t25 = 2235839094186977LLU;

    t25 = (x105&(x106-(x107<=x108)));

    if (t25 != 57LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = INT8_MIN;
	int8_t x110 = INT8_MIN;
	static uint8_t x112 = 3U;
	int32_t t26 = -3702;

    t26 = (x109&(x110-(x111<=x112)));

    if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = -13LL;
	uint8_t x114 = 0U;
	int8_t x115 = 25;
	static uint64_t x116 = 212436379617561LLU;
	volatile int64_t t27 = -154LL;

    t27 = (x113&(x114-(x115<=x116)));

    if (t27 != -13LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = 27309354;
	int8_t x118 = -1;
	uint16_t x119 = 8U;
	uint16_t x120 = 12U;
	static int32_t t28 = 0;

    t28 = (x117&(x118-(x119<=x120)));

    if (t28 != 27309354) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = INT32_MIN;
	uint8_t x122 = 23U;
	static int8_t x123 = INT8_MAX;
	volatile int8_t x124 = INT8_MIN;
	int32_t t29 = -2883819;

    t29 = (x121&(x122-(x123<=x124)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x125 = 1077834;
	static uint64_t x126 = 17358577255195LLU;
	uint64_t t30 = 516LLU;

    t30 = (x125&(x126-(x127<=x128)));

    if (t30 != 1065482LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x129 = UINT16_MAX;
	int64_t x130 = INT64_MAX;
	volatile uint16_t x131 = 20988U;
	volatile int64_t t31 = -148461730244LL;

    t31 = (x129&(x130-(x131<=x132)));

    if (t31 != 65534LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = -1;
	int64_t x134 = INT64_MAX;
	uint32_t x135 = 91U;
	int8_t x136 = -1;
	int64_t t32 = -14641022LL;

    t32 = (x133&(x134-(x135<=x136)));

    if (t32 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = INT32_MIN;
	volatile uint16_t x139 = 7U;
	int16_t x140 = -1;
	int32_t t33 = -318;

    t33 = (x137&(x138-(x139<=x140)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x142 = -1;
	static uint64_t x143 = 6196533198LLU;
	int16_t x144 = 6348;
	volatile int64_t t34 = INT64_MAX;

    t34 = (x141&(x142-(x143<=x144)));

    if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = INT16_MIN;
	uint32_t x146 = 10248913U;
	int64_t x147 = -495071679602LL;
	static volatile uint8_t x148 = 1U;

    t35 = (x145&(x146-(x147<=x148)));

    if (t35 != 10223616U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x149 = -1;
	int16_t x151 = INT16_MIN;
	static uint64_t x152 = 511052LLU;
	static int32_t t36 = 2171504;

    t36 = (x149&(x150-(x151<=x152)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x153 = -1;
	volatile int16_t x154 = 33;
	int8_t x156 = INT8_MIN;
	int32_t t37 = 10154;

    t37 = (x153&(x154-(x155<=x156)));

    if (t37 != 33) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x157 = INT64_MIN;
	uint32_t x158 = UINT32_MAX;
	int8_t x159 = INT8_MIN;
	static int64_t t38 = -1813446175196LL;

    t38 = (x157&(x158-(x159<=x160)));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x161 = 5238U;
	int32_t x163 = -1;
	int32_t t39 = 544429;

    t39 = (x161&(x162-(x163<=x164)));

    if (t39 != 5238) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = -1;
	int8_t x166 = -1;
	int64_t x167 = 125215LL;
	uint32_t x168 = 35U;
	volatile int32_t t40 = -130284957;

    t40 = (x165&(x166-(x167<=x168)));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x170 = 1896;
	static int32_t x171 = 0;
	int8_t x172 = -1;
	static int32_t t41 = -28944;

    t41 = (x169&(x170-(x171<=x172)));

    if (t41 != 1896) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x173 = UINT16_MAX;
	int16_t x174 = 5881;
	static int8_t x175 = 1;
	int64_t x176 = INT64_MAX;
	int32_t t42 = -4008365;

    t42 = (x173&(x174-(x175<=x176)));

    if (t42 != 5880) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = 8LL;
	int16_t x178 = INT16_MAX;
	static uint8_t x179 = 1U;

    t43 = (x177&(x178-(x179<=x180)));

    if (t43 != 8LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x185 = INT64_MIN;
	int16_t x187 = -12;
	volatile int64_t x188 = -1LL;
	static int64_t t44 = INT64_MIN;

    t44 = (x185&(x186-(x187<=x188)));

    if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x189 = UINT64_MAX;
	uint16_t x190 = 182U;
	int32_t x191 = 30;
	int32_t x192 = -17;
	uint64_t t45 = 392LLU;

    t45 = (x189&(x190-(x191<=x192)));

    if (t45 != 182LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x197 = INT16_MIN;
	int16_t x198 = -1;
	volatile uint16_t x199 = UINT16_MAX;
	uint16_t x200 = 144U;
	int32_t t46 = -44;

    t46 = (x197&(x198-(x199<=x200)));

    if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x201 = INT64_MIN;
	static int8_t x202 = -1;
	int64_t x203 = -1LL;
	uint32_t x204 = 2U;
	volatile int64_t t47 = INT64_MIN;

    t47 = (x201&(x202-(x203<=x204)));

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x205 = 5680;
	volatile uint8_t x208 = 5U;
	volatile uint32_t t48 = 19831U;

    t48 = (x205&(x206-(x207<=x208)));

    if (t48 != 16U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x209 = 1U;
	uint16_t x210 = UINT16_MAX;
	int64_t x211 = INT64_MAX;
	volatile int64_t x212 = -1LL;

    t49 = (x209&(x210-(x211<=x212)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x213 = INT32_MIN;
	int32_t x215 = 114;
	int32_t x216 = INT32_MIN;
	volatile uint32_t t50 = 435621375U;

    t50 = (x213&(x214-(x215<=x216)));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x217 = -39698776;
	int32_t t51 = 274;

    t51 = (x217&(x218-(x219<=x220)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x221 = 15;
	uint32_t x222 = UINT32_MAX;
	static volatile uint8_t x223 = 125U;
	static volatile uint32_t x224 = 41U;
	uint32_t t52 = 1U;

    t52 = (x221&(x222-(x223<=x224)));

    if (t52 != 15U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x226 = INT16_MIN;
	int8_t x227 = INT8_MIN;
	int32_t x228 = 22432105;
	int32_t t53 = -134087071;

    t53 = (x225&(x226-(x227<=x228)));

    if (t53 != -32956) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x229 = 227;
	volatile uint16_t x230 = UINT16_MAX;
	static volatile int32_t x231 = 1702716;
	uint64_t x232 = 63268243028LLU;
	int32_t t54 = -73142122;

    t54 = (x229&(x230-(x231<=x232)));

    if (t54 != 226) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x233 = INT64_MIN;
	volatile uint64_t x234 = 98465401694167879LLU;
	volatile int32_t x235 = -1;
	uint64_t t55 = 304970998427043LLU;

    t55 = (x233&(x234-(x235<=x236)));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x237 = -1LL;
	volatile uint32_t x238 = 7346975U;
	static uint64_t x240 = 333540078226LLU;
	int64_t t56 = -160065318316LL;

    t56 = (x237&(x238-(x239<=x240)));

    if (t56 != 7346975LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x241 = 1732320;
	int32_t x242 = -1;
	uint64_t x243 = UINT64_MAX;
	int32_t x244 = INT32_MIN;
	int32_t t57 = 2;

    t57 = (x241&(x242-(x243<=x244)));

    if (t57 != 1732320) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x245 = 242;
	int64_t x246 = -1LL;
	int8_t x247 = -1;
	static volatile int64_t x248 = 153685729956074LL;
	int64_t t58 = 112932232007563139LL;

    t58 = (x245&(x246-(x247<=x248)));

    if (t58 != 242LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x249 = UINT64_MAX;
	int8_t x250 = 9;
	int64_t x251 = -141008202340604166LL;
	uint16_t x252 = 1785U;
	uint64_t t59 = 795402341372LLU;

    t59 = (x249&(x250-(x251<=x252)));

    if (t59 != 8LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x253 = INT32_MIN;
	static uint16_t x254 = UINT16_MAX;
	int32_t x255 = INT32_MIN;
	uint32_t x256 = 41U;
	volatile int32_t t60 = -5134;

    t60 = (x253&(x254-(x255<=x256)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x257 = 10U;
	int8_t x258 = -1;
	static uint8_t x259 = 1U;
	static int32_t t61 = 2378901;

    t61 = (x257&(x258-(x259<=x260)));

    if (t61 != 10) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x265 = 23927U;
	static volatile int16_t x266 = -1;
	int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MIN;
	int32_t t62 = -8;

    t62 = (x265&(x266-(x267<=x268)));

    if (t62 != 23926) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x269 = -1LL;
	static int32_t x270 = INT32_MIN;
	static int8_t x272 = INT8_MIN;
	static int64_t t63 = -1591043823214062900LL;

    t63 = (x269&(x270-(x271<=x272)));

    if (t63 != -2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x273 = INT32_MIN;
	static volatile int32_t t64 = -973613;

    t64 = (x273&(x274-(x275<=x276)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x278 = UINT16_MAX;
	volatile int8_t x279 = -1;
	int32_t x280 = 172;
	static int32_t t65 = -1;

    t65 = (x277&(x278-(x279<=x280)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x281 = INT64_MIN;
	uint8_t x282 = 0U;
	int16_t x283 = -1;
	int8_t x284 = -1;
	volatile int64_t t66 = INT64_MIN;

    t66 = (x281&(x282-(x283<=x284)));

    if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x285 = 6U;
	volatile uint64_t x286 = 12507454609515742LLU;
	uint16_t x288 = 870U;
	uint64_t t67 = 26LLU;

    t67 = (x285&(x286-(x287<=x288)));

    if (t67 != 6LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x289 = -2;
	volatile int16_t x290 = INT16_MAX;
	int16_t x291 = 13;
	int64_t x292 = INT64_MIN;

    t68 = (x289&(x290-(x291<=x292)));

    if (t68 != 32766) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x293 = INT16_MIN;
	int32_t x294 = -1;
	volatile int16_t x295 = INT16_MIN;
	uint64_t x296 = 19273014657558359LLU;
	volatile int32_t t69 = -309;

    t69 = (x293&(x294-(x295<=x296)));

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x297 = -1LL;
	uint16_t x298 = 0U;
	volatile uint8_t x299 = UINT8_MAX;
	int16_t x300 = -13754;
	int64_t t70 = 445006LL;

    t70 = (x297&(x298-(x299<=x300)));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x301 = 3U;
	volatile uint32_t x302 = 50U;
	int32_t x304 = -1;
	volatile uint32_t t71 = 107U;

    t71 = (x301&(x302-(x303<=x304)));

    if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x305 = UINT16_MAX;
	int32_t x306 = -7540;
	uint16_t x307 = UINT16_MAX;
	int16_t x308 = 1;
	volatile int32_t t72 = 4338;

    t72 = (x305&(x306-(x307<=x308)));

    if (t72 != 57996) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x309 = 533LL;
	int32_t x310 = -2518504;
	int16_t x311 = -1097;
	volatile int64_t t73 = -19LL;

    t73 = (x309&(x310-(x311<=x312)));

    if (t73 != 533LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	uint64_t x314 = 13LLU;
	int64_t x315 = INT64_MIN;
	int8_t x316 = 0;
	static uint64_t t74 = 2LLU;

    t74 = (x313&(x314-(x315<=x316)));

    if (t74 != 12LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x318 = -1LL;
	int32_t x319 = 14247;
	static int8_t x320 = INT8_MAX;
	int64_t t75 = 4735418198239109LL;

    t75 = (x317&(x318-(x319<=x320)));

    if (t75 != 972LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x321 = 1754683833U;
	static volatile int64_t x322 = -46630579LL;
	int16_t x323 = 2;
	int64_t t76 = -101LL;

    t76 = (x321&(x322-(x323<=x324)));

    if (t76 != 1745901833LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x325 = INT64_MIN;
	static uint32_t x327 = 7U;
	static uint32_t x328 = UINT32_MAX;
	uint64_t t77 = 306502031LLU;

    t77 = (x325&(x326-(x327<=x328)));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x329 = INT64_MIN;
	static int64_t x330 = 73LL;
	static int16_t x331 = -159;
	volatile int64_t x332 = -1LL;
	volatile int64_t t78 = -24290692LL;

    t78 = (x329&(x330-(x331<=x332)));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x333 = -192;
	uint64_t x334 = 20195106539560652LLU;
	uint8_t x335 = UINT8_MAX;
	int32_t x336 = 103805;
	uint64_t t79 = 656540739LLU;

    t79 = (x333&(x334-(x335<=x336)));

    if (t79 != 20195106539560512LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x337 = 73LL;
	int16_t x338 = -1;
	uint32_t x339 = 5U;
	int16_t x340 = -1;
	int64_t t80 = 61LL;

    t80 = (x337&(x338-(x339<=x340)));

    if (t80 != 72LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x341 = UINT32_MAX;
	static uint8_t x342 = 0U;
	uint64_t x343 = 485489830525LLU;

    t81 = (x341&(x342-(x343<=x344)));

    if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x345 = -5951652LL;
	int64_t x347 = 72093370050278LL;
	int16_t x348 = 3;
	int64_t t82 = -31608762390206958LL;

    t82 = (x345&(x346-(x347<=x348)));

    if (t82 != 528LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x349 = 261245047397086995LL;
	volatile int32_t x350 = -1;
	uint64_t x351 = 885274456LLU;
	int64_t x352 = 2966240041339LL;

    t83 = (x349&(x350-(x351<=x352)));

    if (t83 != 261245047397086994LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x353 = INT64_MAX;
	int32_t x354 = INT32_MAX;
	volatile int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MIN;
	static int64_t t84 = -95495102898039LL;

    t84 = (x353&(x354-(x355<=x356)));

    if (t84 != 2147483646LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x357 = -1156;
	int16_t x359 = -926;
	uint8_t x360 = UINT8_MAX;
	uint64_t t85 = 29994384LLU;

    t85 = (x357&(x358-(x359<=x360)));

    if (t85 != 6032841790505075036LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x362 = INT16_MIN;
	volatile int8_t x363 = -1;
	volatile int64_t x364 = INT64_MIN;
	volatile int32_t t86 = 5;

    t86 = (x361&(x362-(x363<=x364)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x365 = 1LL;
	uint64_t x366 = 196121849699LLU;
	int16_t x367 = INT16_MAX;
	volatile int64_t x368 = -1LL;
	uint64_t t87 = 26133566002776LLU;

    t87 = (x365&(x366-(x367<=x368)));

    if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x369 = UINT64_MAX;
	uint32_t x370 = UINT32_MAX;
	int8_t x371 = -1;
	static volatile int64_t x372 = INT64_MAX;
	volatile uint64_t t88 = 7170590263011865343LLU;

    t88 = (x369&(x370-(x371<=x372)));

    if (t88 != 4294967294LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x373 = -203433848406148591LL;
	volatile int32_t x375 = -36;
	volatile int16_t x376 = -31;
	uint64_t t89 = 290560022983947867LLU;

    t89 = (x373&(x374-(x375<=x376)));

    if (t89 != 544315904LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x377 = -2;
	int8_t x378 = -48;
	int8_t x379 = -1;
	static int16_t x380 = INT16_MIN;
	static int32_t t90 = 17209;

    t90 = (x377&(x378-(x379<=x380)));

    if (t90 != -48) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x381 = 1;
	static int32_t x382 = INT32_MAX;
	volatile int8_t x383 = INT8_MAX;
	int32_t x384 = 1;
	static volatile int32_t t91 = 25146;

    t91 = (x381&(x382-(x383<=x384)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x385 = 231;
	volatile uint16_t x386 = 187U;
	int32_t x387 = 1555;
	int64_t x388 = -1LL;
	volatile int32_t t92 = 65597536;

    t92 = (x385&(x386-(x387<=x388)));

    if (t92 != 163) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x389 = UINT64_MAX;
	int8_t x391 = 1;
	static int8_t x392 = INT8_MIN;
	uint64_t t93 = 53LLU;

    t93 = (x389&(x390-(x391<=x392)));

    if (t93 != 18446744073709355039LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x397 = INT16_MIN;
	static volatile int32_t x398 = INT32_MAX;
	int32_t x399 = -1;
	static int64_t x400 = INT64_MIN;

    t94 = (x397&(x398-(x399<=x400)));

    if (t94 != 2147450880) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x402 = -47;
	volatile uint32_t x403 = UINT32_MAX;
	int64_t x404 = -167916LL;
	static volatile int32_t t95 = 24740972;

    t95 = (x401&(x402-(x403<=x404)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x405 = UINT8_MAX;
	int8_t x407 = INT8_MAX;
	uint16_t x408 = 267U;

    t96 = (x405&(x406-(x407<=x408)));

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x409 = 71415112230LL;
	static volatile uint32_t x412 = 64247U;
	volatile int64_t t97 = 5848LL;

    t97 = (x409&(x410-(x411<=x412)));

    if (t97 != 71405936674LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x414 = 123U;
	volatile uint16_t x415 = 1U;
	int32_t t98 = -158;

    t98 = (x413&(x414-(x415<=x416)));

    if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x418 = INT8_MAX;
	int32_t x419 = INT32_MAX;
	uint64_t x420 = 5248071907565648975LLU;
	int32_t t99 = -3797;

    t99 = (x417&(x418-(x419<=x420)));

    if (t99 != 126) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x421 = -104510415391768LL;
	static uint64_t x422 = UINT64_MAX;
	uint64_t x424 = 4030LLU;
	uint64_t t100 = 11LLU;

    t100 = (x421&(x422-(x423<=x424)));

    if (t100 != 18446639563294159848LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x425 = -1;
	int64_t x426 = -107110LL;
	static int16_t x427 = -1;
	static uint32_t x428 = 54049064U;
	int64_t t101 = 24295LL;

    t101 = (x425&(x426-(x427<=x428)));

    if (t101 != -107110LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x429 = UINT8_MAX;
	static int8_t x430 = -1;
	int16_t x431 = -893;
	int16_t x432 = 400;

    t102 = (x429&(x430-(x431<=x432)));

    if (t102 != 254) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x434 = 5;
	int32_t x436 = INT32_MIN;

    t103 = (x433&(x434-(x435<=x436)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x437 = 3U;
	volatile int32_t x439 = -5877844;
	int16_t x440 = INT16_MIN;
	volatile int32_t t104 = 1347;

    t104 = (x437&(x438-(x439<=x440)));

    if (t104 != 2) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x441 = 0U;
	volatile int16_t x442 = -107;
	int8_t x443 = -1;
	uint8_t x444 = UINT8_MAX;
	int32_t t105 = -209561545;

    t105 = (x441&(x442-(x443<=x444)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x446 = 1U;
	static uint8_t x447 = UINT8_MAX;
	volatile int8_t x448 = 12;
	int32_t t106 = -1;

    t106 = (x445&(x446-(x447<=x448)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x449 = INT32_MAX;
	uint32_t x450 = UINT32_MAX;
	int8_t x452 = INT8_MIN;
	volatile uint32_t t107 = 5446U;

    t107 = (x449&(x450-(x451<=x452)));

    if (t107 != 2147483647U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x454 = 29U;
	int64_t x455 = -30514250561030949LL;
	int8_t x456 = INT8_MAX;

    t108 = (x453&(x454-(x455<=x456)));

    if (t108 != 20) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x457 = 1;
	uint16_t x458 = UINT16_MAX;
	static int8_t x459 = INT8_MIN;
	int32_t x460 = INT32_MAX;
	volatile int32_t t109 = 110;

    t109 = (x457&(x458-(x459<=x460)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x464 = -1;
	int64_t t110 = -47683981558LL;

    t110 = (x461&(x462-(x463<=x464)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x465 = -1;
	uint16_t x466 = 20U;
	static int8_t x467 = -1;
	volatile uint64_t x468 = UINT64_MAX;
	volatile int32_t t111 = 60;

    t111 = (x465&(x466-(x467<=x468)));

    if (t111 != 19) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x469 = INT64_MAX;
	int8_t x470 = INT8_MIN;
	uint64_t x471 = UINT64_MAX;
	volatile int64_t t112 = 4253285049LL;

    t112 = (x469&(x470-(x471<=x472)));

    if (t112 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x473 = -1;
	int8_t x474 = INT8_MIN;
	static int64_t x475 = 97580533LL;
	int64_t x476 = -4LL;
	int32_t t113 = -45340424;

    t113 = (x473&(x474-(x475<=x476)));

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x477 = UINT32_MAX;
	static int8_t x478 = -1;
	int16_t x479 = INT16_MIN;
	uint8_t x480 = 3U;
	volatile uint32_t t114 = 39U;

    t114 = (x477&(x478-(x479<=x480)));

    if (t114 != 4294967294U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x481 = INT8_MIN;
	int64_t x482 = -1832227340LL;
	uint32_t x484 = UINT32_MAX;
	volatile int64_t t115 = 127448454417LL;

    t115 = (x481&(x482-(x483<=x484)));

    if (t115 != -1832227456LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x489 = INT32_MAX;
	static int16_t x490 = INT16_MIN;
	int32_t x491 = 190;
	int16_t x492 = -6884;

    t116 = (x489&(x490-(x491<=x492)));

    if (t116 != 2147450880) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x493 = UINT64_MAX;
	volatile uint64_t x494 = 7448031785LLU;
	uint64_t x495 = UINT64_MAX;
	int16_t x496 = INT16_MIN;
	static uint64_t t117 = 53717266LLU;

    t117 = (x493&(x494-(x495<=x496)));

    if (t117 != 7448031785LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x497 = UINT64_MAX;
	uint32_t x498 = 176568U;
	int8_t x500 = -15;
	static uint64_t t118 = 139847097484671353LLU;

    t118 = (x497&(x498-(x499<=x500)));

    if (t118 != 176567LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x502 = INT32_MAX;
	int64_t x504 = 245969352101236749LL;

    t119 = (x501&(x502-(x503<=x504)));

    if (t119 != 32766) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x505 = -2459;
	int8_t x506 = INT8_MIN;
	int64_t x507 = -1LL;
	volatile int32_t x508 = 169620398;
	volatile int32_t t120 = 31477937;

    t120 = (x505&(x506-(x507<=x508)));

    if (t120 != -2459) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x509 = 165332774239714803LLU;
	static int64_t x510 = INT64_MIN;
	volatile int16_t x511 = INT16_MIN;
	uint64_t x512 = 257193174LLU;
	uint64_t t121 = 3818LLU;

    t121 = (x509&(x510-(x511<=x512)));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x513 = -2;
	uint8_t x514 = UINT8_MAX;
	int32_t x515 = INT32_MIN;
	int32_t x516 = INT32_MAX;

    t122 = (x513&(x514-(x515<=x516)));

    if (t122 != 254) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x517 = 93U;
	int32_t x518 = -1;
	int32_t x519 = 97352;

    t123 = (x517&(x518-(x519<=x520)));

    if (t123 != 93) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x521 = -1;
	uint8_t x522 = UINT8_MAX;
	uint16_t x524 = 9151U;

    t124 = (x521&(x522-(x523<=x524)));

    if (t124 != 254) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x525 = INT8_MAX;
	int8_t x527 = 30;
	static int64_t x528 = INT64_MIN;
	static volatile uint64_t t125 = 5735044666138476680LLU;

    t125 = (x525&(x526-(x527<=x528)));

    if (t125 != 78LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x529 = INT64_MIN;
	int16_t x530 = INT16_MAX;
	int64_t x531 = -1LL;
	static volatile int64_t t126 = 27529725936LL;

    t126 = (x529&(x530-(x531<=x532)));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x533 = 125;
	uint16_t x534 = 2389U;
	volatile int8_t x535 = INT8_MIN;
	int32_t t127 = -110796;

    t127 = (x533&(x534-(x535<=x536)));

    if (t127 != 85) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x543 = -1;
	volatile int32_t t128 = -16522395;

    t128 = (x541&(x542-(x543<=x544)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x546 = INT32_MAX;
	uint16_t x547 = 10U;
	static int8_t x548 = 1;
	int32_t t129 = -15;

    t129 = (x545&(x546-(x547<=x548)));

    if (t129 != 65535) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x549 = -1LL;
	int32_t x550 = 44;
	int8_t x551 = 0;
	uint16_t x552 = 446U;
	int64_t t130 = 267848611533LL;

    t130 = (x549&(x550-(x551<=x552)));

    if (t130 != 43LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x553 = 39U;
	uint8_t x554 = UINT8_MAX;
	static int32_t x556 = INT32_MIN;
	uint32_t t131 = 570941U;

    t131 = (x553&(x554-(x555<=x556)));

    if (t131 != 39U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x559 = INT64_MIN;
	uint16_t x560 = 6U;
	int32_t t132 = 1209;

    t132 = (x557&(x558-(x559<=x560)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x561 = INT32_MIN;
	int8_t x563 = -1;
	volatile int32_t x564 = INT32_MIN;
	int32_t t133 = INT32_MIN;

    t133 = (x561&(x562-(x563<=x564)));

    if (t133 != INT32_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x565 = 1328737497LL;
	uint32_t x566 = UINT32_MAX;
	int32_t x567 = -3117418;
	int8_t x568 = INT8_MIN;
	volatile int64_t t134 = 13676092890364383LL;

    t134 = (x565&(x566-(x567<=x568)));

    if (t134 != 1328737496LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int64_t x569 = INT64_MAX;
	uint32_t x570 = UINT32_MAX;
	static volatile uint32_t x571 = 1464960U;
	volatile int64_t t135 = -143137LL;

    t135 = (x569&(x570-(x571<=x572)));

    if (t135 != 4294967294LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x573 = 1648147287946LLU;
	uint32_t x574 = UINT32_MAX;
	static int8_t x576 = -1;
	uint64_t t136 = 62804LLU;

    t136 = (x573&(x574-(x575<=x576)));

    if (t136 != 3174813578LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int64_t x577 = -13998LL;
	static uint8_t x578 = 11U;
	static volatile int8_t x579 = -1;
	int32_t x580 = 13;
	int64_t t137 = -52902738LL;

    t137 = (x577&(x578-(x579<=x580)));

    if (t137 != 2LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x581 = UINT64_MAX;
	int8_t x582 = -1;
	int8_t x584 = -1;
	uint64_t t138 = UINT64_MAX;

    t138 = (x581&(x582-(x583<=x584)));

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x586 = 86;
	static int16_t x587 = INT16_MIN;

    t139 = (x585&(x586-(x587<=x588)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x593 = INT64_MAX;
	uint8_t x594 = 1U;
	volatile int64_t x595 = INT64_MIN;
	uint64_t x596 = 15LLU;
	static volatile int64_t t140 = 40777107540LL;

    t140 = (x593&(x594-(x595<=x596)));

    if (t140 != 1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x597 = INT8_MIN;
	static int64_t x598 = -92832747549LL;
	uint64_t x599 = 0LLU;
	static int8_t x600 = INT8_MIN;
	volatile int64_t t141 = -1317739857227LL;

    t141 = (x597&(x598-(x599<=x600)));

    if (t141 != -92832747648LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x601 = -1;
	static int64_t x602 = 1190055017269LL;
	uint64_t x603 = 12677016590226389LLU;
	uint16_t x604 = 3U;
	int64_t t142 = 327LL;

    t142 = (x601&(x602-(x603<=x604)));

    if (t142 != 1190055017269LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x605 = 17125414782597806LLU;
	uint16_t x606 = 0U;
	int64_t x607 = INT64_MIN;
	static volatile uint64_t t143 = 2060973850157LLU;

    t143 = (x605&(x606-(x607<=x608)));

    if (t143 != 17125414782597806LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x609 = INT64_MIN;
	int32_t x610 = INT32_MIN;
	static int64_t t144 = INT64_MIN;

    t144 = (x609&(x610-(x611<=x612)));

    if (t144 != INT64_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x613 = -2;
	int16_t x614 = INT16_MIN;
	static int64_t x615 = INT64_MIN;
	volatile int64_t x616 = INT64_MAX;

    t145 = (x613&(x614-(x615<=x616)));

    if (t145 != -32770) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x617 = UINT16_MAX;
	int16_t x618 = INT16_MAX;
	int32_t x619 = 17931;
	uint32_t x620 = 145U;
	int32_t t146 = -329934;

    t146 = (x617&(x618-(x619<=x620)));

    if (t146 != 32767) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x622 = -1;
	int16_t x623 = 1;
	int64_t x624 = -1LL;

    t147 = (x621&(x622-(x623<=x624)));

    if (t147 != UINT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x625 = 0;
	uint8_t x626 = UINT8_MAX;
	static int16_t x627 = -378;
	static volatile int32_t t148 = 13193;

    t148 = (x625&(x626-(x627<=x628)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x633 = -233142224279LL;
	volatile int16_t x634 = INT16_MIN;

    t149 = (x633&(x634-(x635<=x636)));

    if (t149 != -233142255616LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x637 = INT16_MAX;
	int16_t x638 = INT16_MAX;
	static int64_t x639 = 403LL;
	int8_t x640 = -6;

    t150 = (x637&(x638-(x639<=x640)));

    if (t150 != 32767) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x641 = INT8_MAX;
	int32_t x642 = INT32_MAX;
	int16_t x643 = INT16_MIN;
	int32_t x644 = -1;
	volatile int32_t t151 = -1;

    t151 = (x641&(x642-(x643<=x644)));

    if (t151 != 126) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x645 = -10679483295429LL;
	int16_t x646 = -1;
	int64_t x647 = -448385LL;
	int64_t t152 = 224463349082LL;

    t152 = (x645&(x646-(x647<=x648)));

    if (t152 != -10679483295430LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x649 = 1120211055607801LL;
	static int8_t x651 = -1;
	int16_t x652 = -1;
	int64_t t153 = -83253946100363309LL;

    t153 = (x649&(x650-(x651<=x652)));

    if (t153 != 1980432376LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x653 = INT32_MIN;
	int8_t x656 = 34;
	volatile int32_t t154 = INT32_MIN;

    t154 = (x653&(x654-(x655<=x656)));

    if (t154 != INT32_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x657 = 37;
	volatile int32_t t155 = 946;

    t155 = (x657&(x658-(x659<=x660)));

    if (t155 != 36) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x661 = -2559;
	int64_t x662 = -980779823182123707LL;
	int8_t x663 = INT8_MAX;
	volatile int64_t t156 = -222LL;

    t156 = (x661&(x662-(x663<=x664)));

    if (t156 != -980779823182126079LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x665 = UINT16_MAX;
	uint16_t x666 = 3U;
	static int16_t x668 = 9;
	volatile int32_t t157 = -4177456;

    t157 = (x665&(x666-(x667<=x668)));

    if (t157 != 2) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x670 = 0;
	uint64_t x671 = 232LLU;
	int64_t x672 = INT64_MAX;
	int32_t t158 = -11;

    t158 = (x669&(x670-(x671<=x672)));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x679 = UINT64_MAX;
	int16_t x680 = 0;

    t159 = (x677&(x678-(x679<=x680)));

    if (t159 != 3LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x681 = INT16_MIN;
	uint8_t x682 = 22U;
	uint8_t x683 = 1U;
	int8_t x684 = INT8_MAX;
	int32_t t160 = -1030524;

    t160 = (x681&(x682-(x683<=x684)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x685 = 13693LLU;
	volatile uint32_t x687 = UINT32_MAX;
	static uint64_t x688 = 304987LLU;
	volatile uint64_t t161 = 14082901689740207LLU;

    t161 = (x685&(x686-(x687<=x688)));

    if (t161 != 13693LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x690 = 18;
	int16_t x691 = 1155;
	int32_t x692 = -1;
	int32_t t162 = 8157832;

    t162 = (x689&(x690-(x691<=x692)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x693 = 1684U;
	int32_t x694 = -1;
	uint32_t x695 = UINT32_MAX;
	int8_t x696 = -1;
	uint32_t t163 = 106U;

    t163 = (x693&(x694-(x695<=x696)));

    if (t163 != 1684U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x697 = -4189592324448724877LL;
	uint8_t x698 = UINT8_MAX;
	int32_t x699 = 207;
	static int16_t x700 = INT16_MIN;

    t164 = (x697&(x698-(x699<=x700)));

    if (t164 != 115LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x705 = INT32_MIN;
	volatile int32_t x706 = 0;
	int8_t x708 = -4;
	volatile int32_t t165 = INT32_MIN;

    t165 = (x705&(x706-(x707<=x708)));

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t t166 = 124759665970079LLU;

    t166 = (x709&(x710-(x711<=x712)));

    if (t166 != 2LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x713 = INT16_MIN;
	int8_t x714 = -1;
	volatile uint8_t x715 = UINT8_MAX;
	uint8_t x716 = 4U;
	int32_t t167 = 4978;

    t167 = (x713&(x714-(x715<=x716)));

    if (t167 != -32768) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x717 = 3U;
	int16_t x718 = INT16_MAX;
	static int32_t x719 = -41;
	uint16_t x720 = 4U;
	int32_t t168 = 1098;

    t168 = (x717&(x718-(x719<=x720)));

    if (t168 != 2) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x721 = INT32_MAX;
	int16_t x722 = INT16_MIN;
	volatile int16_t x723 = -1;
	volatile int32_t t169 = -18830;

    t169 = (x721&(x722-(x723<=x724)));

    if (t169 != 2147450880) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint16_t x725 = UINT16_MAX;
	static int16_t x727 = -1;
	volatile int32_t x728 = -1;

    t170 = (x725&(x726-(x727<=x728)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x729 = 3960U;
	uint64_t x730 = 2637004LLU;
	int8_t x731 = 3;
	int32_t x732 = INT32_MIN;
	volatile uint64_t t171 = 45LLU;

    t171 = (x729&(x730-(x731<=x732)));

    if (t171 != 3144LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x733 = UINT32_MAX;
	uint8_t x734 = 0U;
	static volatile int8_t x735 = INT8_MAX;
	volatile int64_t x736 = -3957LL;
	volatile uint32_t t172 = 19140U;

    t172 = (x733&(x734-(x735<=x736)));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x737 = -183400323;
	volatile int16_t x738 = 7;
	uint64_t x740 = UINT64_MAX;
	static volatile int32_t t173 = 103621;

    t173 = (x737&(x738-(x739<=x740)));

    if (t173 != 4) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x741 = INT8_MIN;
	uint8_t x742 = UINT8_MAX;
	static uint16_t x743 = 191U;
	int16_t x744 = -1;
	static int32_t t174 = -15;

    t174 = (x741&(x742-(x743<=x744)));

    if (t174 != 128) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x745 = 12U;
	uint8_t x746 = UINT8_MAX;
	int8_t x747 = -1;
	int64_t x748 = INT64_MIN;

    t175 = (x745&(x746-(x747<=x748)));

    if (t175 != 12) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x750 = 80900LL;
	uint64_t x751 = 726197105350LLU;
	uint64_t x752 = UINT64_MAX;
	volatile int64_t t176 = 832LL;

    t176 = (x749&(x750-(x751<=x752)));

    if (t176 != 1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x753 = -1LL;
	static uint32_t x754 = UINT32_MAX;
	volatile uint32_t x755 = UINT32_MAX;
	uint64_t x756 = UINT64_MAX;

    t177 = (x753&(x754-(x755<=x756)));

    if (t177 != 4294967294LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x757 = 1U;
	uint64_t x759 = 38LLU;
	int8_t x760 = INT8_MIN;
	volatile int32_t t178 = -7;

    t178 = (x757&(x758-(x759<=x760)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x762 = 2U;
	int64_t x763 = -2916LL;
	int32_t x764 = 20103596;
	uint32_t t179 = 38U;

    t179 = (x761&(x762-(x763<=x764)));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x765 = 70181570332504LLU;
	int64_t x766 = INT64_MAX;
	volatile int16_t x767 = INT16_MIN;
	int32_t x768 = 353;
	uint64_t t180 = 4148161666326992LLU;

    t180 = (x765&(x766-(x767<=x768)));

    if (t180 != 70181570332504LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x769 = INT64_MAX;
	int8_t x770 = INT8_MIN;
	int16_t x772 = 0;
	static volatile int64_t t181 = 1055548113661986553LL;

    t181 = (x769&(x770-(x771<=x772)));

    if (t181 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x777 = INT32_MAX;
	static volatile int16_t x778 = -1;
	int8_t x779 = INT8_MAX;
	uint16_t x780 = 2U;

    t182 = (x777&(x778-(x779<=x780)));

    if (t182 != INT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x781 = INT32_MIN;
	volatile int16_t x782 = -1;
	uint16_t x783 = 122U;
	static int8_t x784 = INT8_MAX;

    t183 = (x781&(x782-(x783<=x784)));

    if (t183 != INT32_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x785 = 637116289312444807LLU;
	int8_t x787 = -21;
	int64_t x788 = INT64_MAX;
	volatile uint64_t t184 = 267121LLU;

    t184 = (x785&(x786-(x787<=x788)));

    if (t184 != 637116289312444806LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x790 = UINT8_MAX;
	uint64_t x791 = 2107508LLU;
	int32_t x792 = -1;
	int32_t t185 = 0;

    t185 = (x789&(x790-(x791<=x792)));

    if (t185 != 254) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x793 = 126647LL;
	static uint16_t x794 = 3U;
	int64_t x795 = -403957LL;
	static int64_t x796 = -94440269LL;

    t186 = (x793&(x794-(x795<=x796)));

    if (t186 != 3LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x797 = 0U;
	int32_t x798 = 427143;
	int8_t x799 = INT8_MIN;
	static uint32_t x800 = UINT32_MAX;
	volatile int32_t t187 = -1;

    t187 = (x797&(x798-(x799<=x800)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x801 = 425LLU;
	int64_t x802 = -1LL;
	int16_t x803 = -43;
	uint16_t x804 = 0U;
	uint64_t t188 = 2725151LLU;

    t188 = (x801&(x802-(x803<=x804)));

    if (t188 != 424LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint32_t x805 = 8177U;
	static int8_t x807 = INT8_MAX;
	int16_t x808 = -1;
	volatile uint32_t t189 = 165U;

    t189 = (x805&(x806-(x807<=x808)));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x812 = 1LLU;
	int32_t t190 = 756952798;

    t190 = (x809&(x810-(x811<=x812)));

    if (t190 != 2147483476) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x814 = UINT32_MAX;
	int8_t x815 = 10;
	volatile uint16_t x816 = 25780U;
	volatile uint32_t t191 = 7690824U;

    t191 = (x813&(x814-(x815<=x816)));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x817 = -1LL;
	int16_t x819 = -1;
	int8_t x820 = 0;

    t192 = (x817&(x818-(x819<=x820)));

    if (t192 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x825 = -1;
	static int16_t x826 = 399;
	volatile int32_t t193 = -48;

    t193 = (x825&(x826-(x827<=x828)));

    if (t193 != 398) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x829 = INT64_MIN;
	int8_t x830 = -58;
	int32_t x831 = INT32_MIN;
	volatile int64_t t194 = INT64_MIN;

    t194 = (x829&(x830-(x831<=x832)));

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x833 = INT32_MAX;
	int64_t x834 = -8261916LL;
	int8_t x836 = -1;
	int64_t t195 = -7LL;

    t195 = (x833&(x834-(x835<=x836)));

    if (t195 != 2139221731LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x840 = INT8_MIN;
	static int32_t t196 = 6;

    t196 = (x837&(x838-(x839<=x840)));

    if (t196 != 66) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x841 = INT8_MIN;
	uint8_t x843 = 1U;
	volatile int32_t t197 = 93815835;

    t197 = (x841&(x842-(x843<=x844)));

    if (t197 != -128) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x845 = -1051LL;
	volatile int8_t x846 = -6;
	int16_t x847 = 2;
	static int64_t t198 = 2LL;

    t198 = (x845&(x846-(x847<=x848)));

    if (t198 != -1055LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x851 = 1359501511U;
	static volatile uint32_t x852 = 2U;
	int32_t t199 = -217904967;

    t199 = (x849&(x850-(x851<=x852)));

    if (t199 != -128) { NG(); } else { ; }
	
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

