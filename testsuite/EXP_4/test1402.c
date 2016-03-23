
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

int32_t x4 = INT32_MIN;
int8_t x6 = INT8_MIN;
volatile int8_t x8 = INT8_MIN;
static uint64_t x12 = 48624200574289LLU;
volatile uint32_t t2 = 14541U;
int8_t x32 = -1;
volatile int64_t x34 = INT64_MAX;
volatile uint16_t x42 = 37U;
int64_t t10 = -127971LL;
uint32_t x45 = 1147U;
uint16_t x49 = 211U;
static int64_t x52 = 6607220LL;
int16_t x57 = -13;
static uint64_t x59 = UINT64_MAX;
int32_t x60 = INT32_MAX;
int8_t x63 = INT8_MAX;
static int8_t x71 = INT8_MIN;
int32_t x81 = 289724;
uint16_t x86 = 1309U;
static volatile uint32_t x89 = 819405U;
static int64_t t23 = INT64_MIN;
volatile int8_t x104 = INT8_MAX;
int32_t x107 = 260946;
uint16_t x121 = 91U;
uint32_t x126 = UINT32_MAX;
static int32_t x130 = INT32_MIN;
volatile int64_t x138 = -1LL;
static uint8_t x140 = 3U;
uint32_t x146 = 337U;
uint8_t x149 = UINT8_MAX;
int64_t t37 = 33437466384112LL;
volatile int16_t x162 = -1;
int64_t x164 = 413LL;
static int64_t x166 = INT64_MIN;
volatile int64_t t41 = -2LL;
int32_t x171 = 39;
int32_t x172 = INT32_MIN;
int32_t x179 = -1;
int64_t x186 = 925350727765680171LL;
volatile int64_t t46 = 2382846LL;
static int64_t x192 = 13LL;
uint32_t t48 = 42U;
int64_t x202 = 3429132733096593624LL;
static int16_t x206 = 0;
static volatile int64_t t52 = 166025LL;
int8_t x217 = INT8_MIN;
uint16_t x221 = 475U;
int64_t x234 = INT64_MAX;
static volatile int64_t x236 = -20814035LL;
volatile int32_t t59 = 7897592;
static uint16_t x248 = UINT16_MAX;
volatile int32_t t61 = -29690;
int64_t x257 = -6939247113903754LL;
static int8_t x263 = INT8_MIN;
int64_t x266 = INT64_MIN;
volatile uint64_t x269 = 7430485993LLU;
int16_t x270 = INT16_MIN;
int16_t x279 = -1513;
static int64_t x280 = 164221134965732825LL;
static int64_t x283 = -2366092LL;
uint16_t x288 = UINT16_MAX;
uint16_t x290 = UINT16_MAX;
int32_t x291 = INT32_MIN;
int8_t x292 = INT8_MIN;
volatile uint16_t x301 = UINT16_MAX;
static volatile uint8_t x314 = 9U;
volatile int8_t x316 = -25;
int16_t x318 = INT16_MIN;
static volatile int32_t x326 = -4377;
volatile int32_t x328 = 6955;
static volatile uint32_t t83 = 485044U;
uint16_t x341 = UINT16_MAX;
volatile int64_t x342 = INT64_MIN;
int64_t t85 = INT64_MAX;
static uint32_t x354 = 3906U;
uint32_t x355 = UINT32_MAX;
static int8_t x362 = INT8_MAX;
uint64_t x368 = 90LLU;
int32_t x375 = -1;
static volatile int32_t t92 = 1296057;
volatile int16_t x380 = -4;
int16_t x382 = 3;
int32_t x385 = INT32_MIN;
volatile int64_t x391 = 4287609274517106LL;
uint64_t t96 = 239429681LLU;
int32_t x401 = INT32_MIN;
static int32_t t99 = INT32_MIN;
int8_t x413 = INT8_MAX;
uint64_t t102 = 721752LLU;
uint16_t x419 = 0U;
static volatile uint16_t x421 = 245U;
volatile int8_t x423 = -1;
int64_t x426 = INT64_MIN;
int16_t x428 = INT16_MIN;
volatile int64_t t105 = 1086692637453899LL;
static uint16_t x431 = 79U;
uint64_t x439 = 255436615515691LLU;
int64_t x441 = -1533797LL;
static volatile int64_t t109 = -67601850973LL;
static uint16_t x449 = 57U;
volatile int16_t x454 = 1;
static volatile uint32_t x455 = 952715U;
int8_t x458 = 1;
static volatile int16_t x459 = INT16_MAX;
volatile int32_t t113 = -44;
int16_t x466 = INT16_MIN;
volatile int32_t t115 = INT32_MIN;
uint8_t x469 = 0U;
int16_t x470 = INT16_MIN;
static uint16_t x475 = UINT16_MAX;
int32_t x478 = -1;
static uint64_t t118 = 1001052167832274372LLU;
uint32_t x490 = UINT32_MAX;
int64_t x496 = 2477363LL;
volatile uint64_t t122 = 191862LLU;
uint64_t x508 = 2LLU;
int32_t t125 = -63149397;
static uint16_t x514 = UINT16_MAX;
int64_t x518 = -1LL;
volatile int16_t x525 = -834;
int16_t x526 = -16099;
int16_t x533 = -7;
volatile int32_t x535 = -1;
uint64_t x537 = 446739836471LLU;
int16_t x541 = 0;
volatile uint32_t x546 = UINT32_MAX;
int32_t x547 = -138;
static volatile int32_t t137 = 78;
static uint32_t x559 = 23U;
volatile uint64_t t138 = 880195379265545237LLU;
int32_t x561 = -1;
int32_t t139 = -871;
volatile int32_t x565 = INT32_MIN;
static int16_t x571 = -1;
volatile int16_t x576 = 22;
static int32_t x577 = -1;
int32_t t144 = INT32_MIN;
int16_t x586 = -1;
int16_t x587 = INT16_MIN;
uint64_t x589 = 115038487036LLU;
uint16_t x602 = 14U;
static volatile int8_t x603 = INT8_MIN;
uint64_t x605 = 138LLU;
uint64_t t150 = 1238654364LLU;
uint64_t x609 = 1592597481055596410LLU;
volatile uint64_t t151 = 30041814691040LLU;
uint16_t x615 = 12U;
static int32_t x617 = INT32_MIN;
uint64_t t154 = 17LLU;
volatile int32_t x626 = INT32_MAX;
int32_t x627 = INT32_MIN;
static uint64_t t158 = 15542817LLU;
static int64_t x643 = -219LL;
volatile int64_t t159 = 1028482639561485812LL;
int8_t x649 = INT8_MIN;
uint16_t x653 = 3U;
int64_t x658 = 1975448857687520LL;
uint32_t x661 = 331U;
volatile int16_t x665 = 66;
int64_t x667 = INT64_MIN;
int32_t x674 = INT32_MAX;
int16_t x675 = 1;
int32_t x678 = INT32_MIN;
uint32_t x679 = 113U;
uint8_t x680 = 1U;
volatile uint16_t x688 = 14U;
int64_t x696 = INT64_MIN;
int64_t t172 = INT64_MIN;
volatile int16_t x701 = 1655;
static uint64_t x711 = 17564LLU;
uint32_t x713 = 14U;
volatile uint64_t t178 = 73954075727704LLU;
uint64_t x726 = 3086694LLU;
int64_t x727 = INT64_MAX;
uint32_t x732 = UINT32_MAX;
volatile int64_t t181 = 916909413LL;
static uint8_t x734 = UINT8_MAX;
volatile uint32_t x739 = 439777821U;
int32_t x747 = INT32_MIN;
int32_t x754 = 227851003;
uint64_t x755 = UINT64_MAX;
int32_t t188 = 6054;
int16_t x767 = INT16_MIN;
uint64_t t191 = 11507161LLU;
static int32_t x773 = -1;
int16_t x774 = INT16_MAX;
static int64_t x776 = INT64_MIN;
uint32_t x778 = UINT32_MAX;
uint32_t t193 = 15013295U;
volatile int32_t t194 = -3;
int8_t x785 = -1;
volatile int32_t t195 = 656;
static volatile int64_t t197 = 1760797098727809LL;
volatile int32_t x800 = 33443702;


void f0(void) {
    	static uint32_t x1 = 50968U;
	int64_t x2 = 4191LL;
	int8_t x3 = 11;
	static int64_t t0 = 120260766599LL;

    t0 = (x1-(x2*(x3==x4)));

    if (t0 != 50968LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = INT16_MIN;
	int8_t x7 = 0;
	volatile int32_t t1 = 38840049;

    t1 = (x5-(x6*(x7==x8)));

    if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	uint32_t x10 = 253170689U;
	int16_t x11 = INT16_MIN;

    t2 = (x9-(x10*(x11==x12)));

    if (t2 != 127U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	static int16_t x14 = INT16_MAX;
	static int64_t x15 = INT64_MAX;
	uint64_t x16 = UINT64_MAX;
	int32_t t3 = INT32_MIN;

    t3 = (x13-(x14*(x15==x16)));

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint16_t x17 = 0U;
	int32_t x18 = INT32_MIN;
	int32_t x19 = INT32_MIN;
	uint8_t x20 = 0U;
	int32_t t4 = 6552073;

    t4 = (x17-(x18*(x19==x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 821220LLU;
	uint64_t x22 = 2LLU;
	volatile uint8_t x23 = UINT8_MAX;
	static uint32_t x24 = UINT32_MAX;
	volatile uint64_t t5 = 22428728941752LLU;

    t5 = (x21-(x22*(x23==x24)));

    if (t5 != 821220LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 164U;
	int32_t x26 = 67;
	static uint16_t x27 = 34U;
	volatile uint16_t x28 = 232U;
	volatile int32_t t6 = 1;

    t6 = (x25-(x26*(x27==x28)));

    if (t6 != 164) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	int8_t x30 = 0;
	int16_t x31 = -1;
	uint64_t t7 = UINT64_MAX;

    t7 = (x29-(x30*(x31==x32)));

    if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = -460003099088601185LL;
	volatile int16_t x35 = INT16_MIN;
	uint64_t x36 = UINT64_MAX;
	volatile int64_t t8 = -20794463229011312LL;

    t8 = (x33-(x34*(x35==x36)));

    if (t8 != -460003099088601185LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 758398215055873483LLU;
	uint64_t x38 = 3300LLU;
	int8_t x39 = 0;
	int16_t x40 = INT16_MIN;
	uint64_t t9 = 8068661481LLU;

    t9 = (x37-(x38*(x39==x40)));

    if (t9 != 758398215055873483LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -69103LL;
	int64_t x43 = 455331366829400444LL;
	static uint32_t x44 = 12635U;

    t10 = (x41-(x42*(x43==x44)));

    if (t10 != -69103LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = -74984713975LL;
	uint8_t x47 = 23U;
	volatile uint64_t x48 = 456135364771731LLU;
	volatile int64_t t11 = 2128658027901LL;

    t11 = (x45-(x46*(x47==x48)));

    if (t11 != 1147LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = INT8_MAX;
	int64_t x51 = -452LL;
	volatile int32_t t12 = 11141299;

    t12 = (x49-(x50*(x51==x52)));

    if (t12 != 211) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = 26;
	uint32_t x54 = UINT32_MAX;
	uint8_t x55 = 1U;
	static int8_t x56 = 1;
	static uint32_t t13 = 688500049U;

    t13 = (x53-(x54*(x55==x56)));

    if (t13 != 27U) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = INT64_MIN;
	static volatile int64_t t14 = 1630997105755LL;

    t14 = (x57-(x58*(x59==x60)));

    if (t14 != -13LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int8_t x61 = INT8_MIN;
	static uint32_t x62 = 55960U;
	int8_t x64 = -1;
	static volatile uint32_t t15 = 126370U;

    t15 = (x61-(x62*(x63==x64)));

    if (t15 != 4294967168U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = -1;
	volatile uint16_t x66 = 95U;
	uint64_t x67 = 60890588566701531LLU;
	uint8_t x68 = 25U;
	static volatile int32_t t16 = 85514771;

    t16 = (x65-(x66*(x67==x68)));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	static int16_t x70 = INT16_MAX;
	static int32_t x72 = INT32_MIN;
	volatile int64_t t17 = INT64_MIN;

    t17 = (x69-(x70*(x71==x72)));

    if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = 123081;
	static int16_t x74 = -1;
	volatile int64_t x75 = -1LL;
	static uint64_t x76 = UINT64_MAX;
	int32_t t18 = 13;

    t18 = (x73-(x74*(x75==x76)));

    if (t18 != 123082) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x77 = 14U;
	uint16_t x78 = UINT16_MAX;
	volatile int32_t x79 = -644134970;
	static int32_t x80 = -2405;
	volatile int32_t t19 = -1;

    t19 = (x77-(x78*(x79==x80)));

    if (t19 != 14) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x82 = INT32_MIN;
	uint32_t x83 = 761U;
	static volatile int32_t x84 = INT32_MIN;
	static int32_t t20 = 563;

    t20 = (x81-(x82*(x83==x84)));

    if (t20 != 289724) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 1378425732U;
	int64_t x87 = INT64_MIN;
	int32_t x88 = -1;
	volatile uint32_t t21 = 967514U;

    t21 = (x85-(x86*(x87==x88)));

    if (t21 != 1378425732U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x90 = INT64_MAX;
	uint8_t x91 = 11U;
	int8_t x92 = INT8_MAX;
	volatile int64_t t22 = 83836778487393LL;

    t22 = (x89-(x90*(x91==x92)));

    if (t22 != 819405LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	int16_t x94 = INT16_MIN;
	static int8_t x95 = -1;
	static uint8_t x96 = UINT8_MAX;

    t23 = (x93-(x94*(x95==x96)));

    if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x97 = 10015U;
	uint16_t x98 = 6062U;
	int8_t x99 = 1;
	int64_t x100 = INT64_MIN;
	volatile int32_t t24 = -2072;

    t24 = (x97-(x98*(x99==x100)));

    if (t24 != 10015) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	int8_t x102 = 1;
	uint16_t x103 = UINT16_MAX;
	volatile int32_t t25 = INT32_MIN;

    t25 = (x101-(x102*(x103==x104)));

    if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	uint32_t x106 = 1468387U;
	int64_t x108 = -239155321710LL;
	volatile int64_t t26 = INT64_MIN;

    t26 = (x105-(x106*(x107==x108)));

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 0U;
	int8_t x110 = INT8_MIN;
	int16_t x111 = -1;
	int64_t x112 = INT64_MIN;
	int32_t t27 = 9810;

    t27 = (x109-(x110*(x111==x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	uint16_t x114 = 54U;
	int16_t x115 = INT16_MAX;
	int8_t x116 = INT8_MIN;
	static volatile int32_t t28 = -27082;

    t28 = (x113-(x114*(x115==x116)));

    if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MAX;
	int64_t x118 = INT64_MAX;
	volatile int16_t x119 = -90;
	uint16_t x120 = 2U;
	volatile int64_t t29 = 32365906588232LL;

    t29 = (x117-(x118*(x119==x120)));

    if (t29 != 32767LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x122 = -1;
	int32_t x123 = -1;
	static int64_t x124 = INT64_MAX;
	int32_t t30 = 8050157;

    t30 = (x121-(x122*(x123==x124)));

    if (t30 != 91) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	int8_t x127 = -42;
	volatile int16_t x128 = INT16_MAX;
	volatile uint32_t t31 = 3U;

    t31 = (x125-(x126*(x127==x128)));

    if (t31 != 2147483648U) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	uint8_t x131 = UINT8_MAX;
	int64_t x132 = INT64_MAX;
	int32_t t32 = 263245389;

    t32 = (x129-(x130*(x131==x132)));

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MAX;
	uint32_t x134 = 6482U;
	int8_t x135 = INT8_MIN;
	int8_t x136 = INT8_MIN;
	volatile uint32_t t33 = 510206072U;

    t33 = (x133-(x134*(x135==x136)));

    if (t33 != 26285U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MIN;
	int64_t x139 = INT64_MAX;
	int64_t t34 = 109976559LL;

    t34 = (x137-(x138*(x139==x140)));

    if (t34 != -32768LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 2U;
	uint16_t x142 = 3992U;
	int32_t x143 = INT32_MIN;
	int64_t x144 = INT64_MIN;
	static uint32_t t35 = 5288611U;

    t35 = (x141-(x142*(x143==x144)));

    if (t35 != 2U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = INT8_MIN;
	int32_t x147 = -1;
	int8_t x148 = -1;
	uint32_t t36 = 2246U;

    t36 = (x145-(x146*(x147==x148)));

    if (t36 != 4294966831U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x150 = 24519384635164LL;
	int16_t x151 = -2;
	uint64_t x152 = 2LLU;

    t37 = (x149-(x150*(x151==x152)));

    if (t37 != 255LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	int8_t x154 = -29;
	uint32_t x155 = 579077U;
	int32_t x156 = INT32_MAX;
	volatile int32_t t38 = 58;

    t38 = (x153-(x154*(x155==x156)));

    if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = 59;
	static volatile uint8_t x158 = UINT8_MAX;
	volatile int16_t x159 = -5;
	uint64_t x160 = 29787836192702LLU;
	volatile int32_t t39 = -1706;

    t39 = (x157-(x158*(x159==x160)));

    if (t39 != 59) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MAX;
	static int64_t x163 = 139958991LL;
	int32_t t40 = -12;

    t40 = (x161-(x162*(x163==x164)));

    if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 3U;
	uint64_t x167 = 115LLU;
	int8_t x168 = -1;

    t41 = (x165-(x166*(x167==x168)));

    if (t41 != 3LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = UINT32_MAX;
	uint64_t x170 = 12858439LLU;
	volatile uint64_t t42 = 46325880478051969LLU;

    t42 = (x169-(x170*(x171==x172)));

    if (t42 != 4294967295LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MAX;
	static int8_t x174 = INT8_MAX;
	uint16_t x175 = 10U;
	volatile uint16_t x176 = UINT16_MAX;
	static volatile int64_t t43 = INT64_MAX;

    t43 = (x173-(x174*(x175==x176)));

    if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = UINT32_MAX;
	uint64_t x178 = 12431387322915LLU;
	static int64_t x180 = -1LL;
	volatile uint64_t t44 = 677669367838173531LLU;

    t44 = (x177-(x178*(x179==x180)));

    if (t44 != 18446731646617195996LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = 15;
	int64_t x182 = 218LL;
	int32_t x183 = -237693;
	volatile int16_t x184 = -4098;
	static int64_t t45 = -250082174LL;

    t45 = (x181-(x182*(x183==x184)));

    if (t45 != 15LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -12;
	int16_t x187 = INT16_MAX;
	int16_t x188 = -1;

    t46 = (x185-(x186*(x187==x188)));

    if (t46 != -12LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -1;
	uint32_t x190 = 478218U;
	int8_t x191 = -1;
	uint32_t t47 = UINT32_MAX;

    t47 = (x189-(x190*(x191==x192)));

    if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x193 = 2U;
	uint32_t x194 = UINT32_MAX;
	static volatile uint16_t x195 = 321U;
	uint8_t x196 = 25U;

    t48 = (x193-(x194*(x195==x196)));

    if (t48 != 2U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MAX;
	static uint16_t x198 = UINT16_MAX;
	int8_t x199 = 37;
	volatile int32_t x200 = INT32_MAX;
	volatile int64_t t49 = INT64_MAX;

    t49 = (x197-(x198*(x199==x200)));

    if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = 61106167084LL;
	int32_t x203 = INT32_MIN;
	int16_t x204 = INT16_MIN;
	int64_t t50 = -31559759401798764LL;

    t50 = (x201-(x202*(x203==x204)));

    if (t50 != 61106167084LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x205 = INT16_MIN;
	volatile int16_t x207 = INT16_MAX;
	volatile int8_t x208 = INT8_MIN;
	volatile int32_t t51 = 0;

    t51 = (x205-(x206*(x207==x208)));

    if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = UINT8_MAX;
	int64_t x210 = INT64_MAX;
	int32_t x211 = -1;
	static int32_t x212 = 21233816;

    t52 = (x209-(x210*(x211==x212)));

    if (t52 != 255LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x213 = 9946U;
	uint16_t x214 = 2777U;
	volatile int64_t x215 = INT64_MAX;
	static volatile int64_t x216 = -2569290927223LL;
	volatile uint32_t t53 = 1329173600U;

    t53 = (x213-(x214*(x215==x216)));

    if (t53 != 9946U) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int16_t x218 = 14;
	int8_t x219 = INT8_MIN;
	uint32_t x220 = UINT32_MAX;
	volatile int32_t t54 = -51;

    t54 = (x217-(x218*(x219==x220)));

    if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x222 = -39659769991LL;
	static uint64_t x223 = 252666031526LLU;
	static int64_t x224 = INT64_MIN;
	int64_t t55 = -776732852LL;

    t55 = (x221-(x222*(x223==x224)));

    if (t55 != 475LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = UINT32_MAX;
	int32_t x226 = 0;
	static uint64_t x227 = UINT64_MAX;
	int16_t x228 = -1;
	uint32_t t56 = UINT32_MAX;

    t56 = (x225-(x226*(x227==x228)));

    if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = UINT64_MAX;
	uint8_t x230 = UINT8_MAX;
	volatile int64_t x231 = INT64_MAX;
	uint32_t x232 = 471219U;
	uint64_t t57 = UINT64_MAX;

    t57 = (x229-(x230*(x231==x232)));

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x233 = 1394091308U;
	int64_t x235 = INT64_MAX;
	static int64_t t58 = -398726481616536LL;

    t58 = (x233-(x234*(x235==x236)));

    if (t58 != 1394091308LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x237 = UINT8_MAX;
	static int16_t x238 = 238;
	static int64_t x239 = INT64_MIN;
	int32_t x240 = -1;

    t59 = (x237-(x238*(x239==x240)));

    if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	static int64_t x242 = INT64_MIN;
	static volatile uint16_t x243 = 89U;
	int64_t x244 = -1LL;
	int64_t t60 = 1976LL;

    t60 = (x241-(x242*(x243==x244)));

    if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 4U;
	static int32_t x246 = -2655596;
	uint32_t x247 = 71849U;

    t61 = (x245-(x246*(x247==x248)));

    if (t61 != 4) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x249 = 202U;
	int16_t x250 = INT16_MIN;
	static int8_t x251 = 1;
	int8_t x252 = INT8_MAX;
	static int32_t t62 = 0;

    t62 = (x249-(x250*(x251==x252)));

    if (t62 != 202) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = 16329U;
	static uint8_t x254 = 7U;
	static int32_t x255 = -15752383;
	static uint32_t x256 = 164U;
	int32_t t63 = 118;

    t63 = (x253-(x254*(x255==x256)));

    if (t63 != 16329) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x258 = 5810U;
	static int8_t x259 = 0;
	static int16_t x260 = INT16_MIN;
	volatile int64_t t64 = -102992381940353LL;

    t64 = (x257-(x258*(x259==x260)));

    if (t64 != -6939247113903754LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = 88U;
	uint64_t x262 = 4359LLU;
	uint8_t x264 = 2U;
	uint64_t t65 = 235640375385LLU;

    t65 = (x261-(x262*(x263==x264)));

    if (t65 != 88LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x265 = -7;
	volatile int8_t x267 = -1;
	int32_t x268 = INT32_MIN;
	static int64_t t66 = -1LL;

    t66 = (x265-(x266*(x267==x268)));

    if (t66 != -7LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x271 = 3;
	int32_t x272 = -1;
	static uint64_t t67 = 471220LLU;

    t67 = (x269-(x270*(x271==x272)));

    if (t67 != 7430485993LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = 39062U;
	uint16_t x274 = 0U;
	volatile int8_t x275 = INT8_MAX;
	int64_t x276 = INT64_MIN;
	static uint32_t t68 = 36008U;

    t68 = (x273-(x274*(x275==x276)));

    if (t68 != 39062U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x277 = INT64_MIN;
	int32_t x278 = INT32_MIN;
	static int64_t t69 = INT64_MIN;

    t69 = (x277-(x278*(x279==x280)));

    if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = 25848U;
	int8_t x282 = -1;
	int32_t x284 = INT32_MIN;
	int32_t t70 = -201186;

    t70 = (x281-(x282*(x283==x284)));

    if (t70 != 25848) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x285 = -32601696;
	static int32_t x286 = INT32_MIN;
	uint16_t x287 = UINT16_MAX;
	volatile int32_t t71 = -3545356;

    t71 = (x285-(x286*(x287==x288)));

    if (t71 != 2114881952) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = 41U;
	uint32_t t72 = 133U;

    t72 = (x289-(x290*(x291==x292)));

    if (t72 != 41U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MAX;
	int8_t x294 = INT8_MIN;
	uint16_t x295 = 2U;
	static int64_t x296 = 845820399381LL;
	volatile int32_t t73 = -1109355;

    t73 = (x293-(x294*(x295==x296)));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = -1;
	volatile int8_t x298 = 8;
	int16_t x299 = INT16_MIN;
	int8_t x300 = INT8_MAX;
	volatile int32_t t74 = 2453096;

    t74 = (x297-(x298*(x299==x300)));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x302 = INT8_MAX;
	int32_t x303 = INT32_MAX;
	int64_t x304 = 1LL;
	static int32_t t75 = 1818;

    t75 = (x301-(x302*(x303==x304)));

    if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x309 = -8;
	volatile int8_t x310 = -1;
	uint8_t x311 = 0U;
	static int64_t x312 = -263333443603LL;
	int32_t t76 = -77463651;

    t76 = (x309-(x310*(x311==x312)));

    if (t76 != -8) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x313 = 19;
	int32_t x315 = INT32_MIN;
	int32_t t77 = -559300838;

    t77 = (x313-(x314*(x315==x316)));

    if (t77 != 19) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x317 = 3U;
	int64_t x319 = INT64_MIN;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t78 = -2346584;

    t78 = (x317-(x318*(x319==x320)));

    if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x321 = 3740;
	int16_t x322 = INT16_MIN;
	uint64_t x323 = 4385603472928LLU;
	volatile int64_t x324 = INT64_MIN;
	static int32_t t79 = 1647;

    t79 = (x321-(x322*(x323==x324)));

    if (t79 != 3740) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x325 = 163LLU;
	int32_t x327 = 2767;
	volatile uint64_t t80 = 1345621270LLU;

    t80 = (x325-(x326*(x327==x328)));

    if (t80 != 163LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x329 = -1;
	static int16_t x330 = -96;
	volatile uint32_t x331 = 47611U;
	int8_t x332 = INT8_MAX;
	int32_t t81 = 22873;

    t81 = (x329-(x330*(x331==x332)));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x333 = 1U;
	static int64_t x334 = 10770325536051LL;
	int64_t x335 = -1LL;
	static volatile int64_t x336 = INT64_MIN;
	static volatile int64_t t82 = -471854879714257LL;

    t82 = (x333-(x334*(x335==x336)));

    if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x337 = 14U;
	uint32_t x338 = 32162548U;
	int64_t x339 = 11811040LL;
	int32_t x340 = -1272121;

    t83 = (x337-(x338*(x339==x340)));

    if (t83 != 14U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x343 = UINT16_MAX;
	static int64_t x344 = -10635006167115LL;
	static int64_t t84 = -1178304459842136LL;

    t84 = (x341-(x342*(x343==x344)));

    if (t84 != 65535LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int64_t x345 = INT64_MAX;
	int64_t x346 = INT64_MIN;
	int8_t x347 = 1;
	int32_t x348 = INT32_MAX;

    t85 = (x345-(x346*(x347==x348)));

    if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x349 = UINT32_MAX;
	int32_t x350 = INT32_MIN;
	static volatile int32_t x351 = 493989;
	int64_t x352 = INT64_MIN;
	volatile uint32_t t86 = UINT32_MAX;

    t86 = (x349-(x350*(x351==x352)));

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x353 = INT8_MIN;
	int8_t x356 = INT8_MIN;
	uint32_t t87 = 1354923U;

    t87 = (x353-(x354*(x355==x356)));

    if (t87 != 4294967168U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x357 = INT64_MIN;
	int8_t x358 = 8;
	volatile int8_t x359 = 7;
	static int16_t x360 = 25;
	static int64_t t88 = INT64_MIN;

    t88 = (x357-(x358*(x359==x360)));

    if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x361 = INT64_MAX;
	static int64_t x363 = -1707263105LL;
	int64_t x364 = INT64_MIN;
	int64_t t89 = INT64_MAX;

    t89 = (x361-(x362*(x363==x364)));

    if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int8_t x365 = -1;
	static volatile uint16_t x366 = 527U;
	uint32_t x367 = 0U;
	volatile int32_t t90 = 1794256;

    t90 = (x365-(x366*(x367==x368)));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x369 = -310694;
	int8_t x370 = -13;
	volatile uint64_t x371 = 1023252600325LLU;
	uint32_t x372 = 200446U;
	int32_t t91 = 165363;

    t91 = (x369-(x370*(x371==x372)));

    if (t91 != -310694) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x373 = 7U;
	int16_t x374 = -195;
	uint8_t x376 = 108U;

    t92 = (x373-(x374*(x375==x376)));

    if (t92 != 7) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x377 = INT32_MIN;
	volatile uint8_t x378 = 1U;
	int64_t x379 = 85246LL;
	volatile int32_t t93 = INT32_MIN;

    t93 = (x377-(x378*(x379==x380)));

    if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x381 = INT32_MIN;
	int64_t x383 = -144834893911214LL;
	static uint16_t x384 = 2336U;
	volatile int32_t t94 = INT32_MIN;

    t94 = (x381-(x382*(x383==x384)));

    if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x386 = 3U;
	int16_t x387 = -1;
	int8_t x388 = INT8_MAX;
	static int32_t t95 = INT32_MIN;

    t95 = (x385-(x386*(x387==x388)));

    if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x389 = INT16_MIN;
	volatile uint64_t x390 = UINT64_MAX;
	static volatile int8_t x392 = INT8_MIN;

    t96 = (x389-(x390*(x391==x392)));

    if (t96 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x393 = -415376505846LL;
	uint64_t x394 = UINT64_MAX;
	volatile int32_t x395 = 3838070;
	static int16_t x396 = -11;
	static volatile uint64_t t97 = 1LLU;

    t97 = (x393-(x394*(x395==x396)));

    if (t97 != 18446743658333045770LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x397 = 19892;
	volatile uint16_t x398 = UINT16_MAX;
	int8_t x399 = 6;
	int8_t x400 = INT8_MIN;
	static int32_t t98 = -3908;

    t98 = (x397-(x398*(x399==x400)));

    if (t98 != 19892) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x402 = 1;
	uint64_t x403 = 35828860360LLU;
	int64_t x404 = INT64_MIN;

    t99 = (x401-(x402*(x403==x404)));

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x405 = 24U;
	static volatile int32_t x406 = INT32_MAX;
	int64_t x407 = INT64_MIN;
	uint8_t x408 = UINT8_MAX;
	int32_t t100 = -298171;

    t100 = (x405-(x406*(x407==x408)));

    if (t100 != 24) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x409 = 102U;
	uint16_t x410 = UINT16_MAX;
	uint8_t x411 = 1U;
	volatile int16_t x412 = INT16_MAX;
	int32_t t101 = -125913;

    t101 = (x409-(x410*(x411==x412)));

    if (t101 != 102) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x414 = UINT64_MAX;
	int64_t x415 = -218238621128558219LL;
	volatile int64_t x416 = INT64_MIN;

    t102 = (x413-(x414*(x415==x416)));

    if (t102 != 127LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x417 = -161207500LL;
	int16_t x418 = 2;
	static volatile int16_t x420 = INT16_MIN;
	int64_t t103 = -7076550021LL;

    t103 = (x417-(x418*(x419==x420)));

    if (t103 != -161207500LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x422 = 625;
	int16_t x424 = INT16_MIN;
	int32_t t104 = -43220;

    t104 = (x421-(x422*(x423==x424)));

    if (t104 != 245) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x425 = 13;
	static int64_t x427 = INT64_MAX;

    t105 = (x425-(x426*(x427==x428)));

    if (t105 != 13LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x429 = 3969456852LLU;
	int64_t x430 = -1872977292035LL;
	static volatile int32_t x432 = -1;
	volatile uint64_t t106 = 86531LLU;

    t106 = (x429-(x430*(x431==x432)));

    if (t106 != 3969456852LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x433 = INT16_MIN;
	volatile uint32_t x434 = UINT32_MAX;
	uint8_t x435 = 10U;
	volatile int32_t x436 = INT32_MIN;
	volatile uint32_t t107 = 12521U;

    t107 = (x433-(x434*(x435==x436)));

    if (t107 != 4294934528U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x437 = -1LL;
	int64_t x438 = INT64_MIN;
	int32_t x440 = -1;
	int64_t t108 = -73LL;

    t108 = (x437-(x438*(x439==x440)));

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x442 = INT32_MIN;
	static uint8_t x443 = 120U;
	uint32_t x444 = 150924U;

    t109 = (x441-(x442*(x443==x444)));

    if (t109 != -1533797LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x445 = 8;
	int8_t x446 = INT8_MAX;
	static int64_t x447 = 5592819797386LL;
	int32_t x448 = -1;
	int32_t t110 = -491;

    t110 = (x445-(x446*(x447==x448)));

    if (t110 != 8) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x450 = 1;
	static int8_t x451 = -1;
	uint8_t x452 = 5U;
	int32_t t111 = -272;

    t111 = (x449-(x450*(x451==x452)));

    if (t111 != 57) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x453 = INT64_MAX;
	static volatile uint16_t x456 = 3U;
	int64_t t112 = INT64_MAX;

    t112 = (x453-(x454*(x455==x456)));

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x457 = INT16_MIN;
	uint32_t x460 = 7U;

    t113 = (x457-(x458*(x459==x460)));

    if (t113 != -32768) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x461 = -5377;
	int16_t x462 = -1;
	volatile int16_t x463 = INT16_MIN;
	int64_t x464 = -29300189LL;
	static int32_t t114 = -3;

    t114 = (x461-(x462*(x463==x464)));

    if (t114 != -5377) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x465 = INT32_MIN;
	int8_t x467 = INT8_MIN;
	static int32_t x468 = 2;

    t115 = (x465-(x466*(x467==x468)));

    if (t115 != INT32_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x471 = INT32_MIN;
	int16_t x472 = INT16_MIN;
	volatile int32_t t116 = -513860391;

    t116 = (x469-(x470*(x471==x472)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x473 = 5413U;
	volatile int32_t x474 = INT32_MIN;
	static int64_t x476 = INT64_MIN;
	volatile int32_t t117 = -846;

    t117 = (x473-(x474*(x475==x476)));

    if (t117 != 5413) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x477 = 801929685LLU;
	uint32_t x479 = 1368U;
	uint16_t x480 = 3747U;

    t118 = (x477-(x478*(x479==x480)));

    if (t118 != 801929685LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x481 = INT64_MIN;
	static int8_t x482 = -6;
	int16_t x483 = INT16_MAX;
	static uint8_t x484 = 53U;
	volatile int64_t t119 = INT64_MIN;

    t119 = (x481-(x482*(x483==x484)));

    if (t119 != INT64_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x485 = UINT8_MAX;
	int16_t x486 = INT16_MAX;
	static int8_t x487 = -2;
	uint64_t x488 = 3LLU;
	static int32_t t120 = -3;

    t120 = (x485-(x486*(x487==x488)));

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x489 = INT32_MAX;
	int8_t x491 = 2;
	uint16_t x492 = UINT16_MAX;
	volatile uint32_t t121 = 203U;

    t121 = (x489-(x490*(x491==x492)));

    if (t121 != 2147483647U) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x493 = 30666LLU;
	int16_t x494 = -2;
	uint8_t x495 = UINT8_MAX;

    t122 = (x493-(x494*(x495==x496)));

    if (t122 != 30666LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x497 = 7;
	uint8_t x498 = UINT8_MAX;
	int32_t x499 = -107931;
	int16_t x500 = INT16_MIN;
	volatile int32_t t123 = 4144;

    t123 = (x497-(x498*(x499==x500)));

    if (t123 != 7) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x501 = -1LL;
	static int32_t x502 = INT32_MAX;
	int16_t x503 = -936;
	int64_t x504 = INT64_MIN;
	volatile int64_t t124 = -662979020875104LL;

    t124 = (x501-(x502*(x503==x504)));

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x505 = -1;
	static volatile int32_t x506 = INT32_MAX;
	int64_t x507 = 42412760215940LL;

    t125 = (x505-(x506*(x507==x508)));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x509 = -3496LL;
	static int32_t x510 = -1;
	int16_t x511 = 2;
	int64_t x512 = INT64_MIN;
	static int64_t t126 = -3729LL;

    t126 = (x509-(x510*(x511==x512)));

    if (t126 != -3496LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x513 = INT64_MIN;
	static int8_t x515 = 1;
	volatile int16_t x516 = INT16_MIN;
	volatile int64_t t127 = INT64_MIN;

    t127 = (x513-(x514*(x515==x516)));

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x517 = INT64_MIN;
	static volatile int16_t x519 = INT16_MIN;
	int64_t x520 = 1607240187166687275LL;
	int64_t t128 = INT64_MIN;

    t128 = (x517-(x518*(x519==x520)));

    if (t128 != INT64_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x521 = INT8_MIN;
	volatile uint8_t x522 = 5U;
	int8_t x523 = 15;
	uint64_t x524 = UINT64_MAX;
	static int32_t t129 = -6830321;

    t129 = (x521-(x522*(x523==x524)));

    if (t129 != -128) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x527 = INT8_MIN;
	int16_t x528 = INT16_MIN;
	volatile int32_t t130 = 1;

    t130 = (x525-(x526*(x527==x528)));

    if (t130 != -834) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x529 = -16156;
	int64_t x530 = INT64_MIN;
	int64_t x531 = -222371LL;
	volatile int8_t x532 = INT8_MIN;
	int64_t t131 = -13193LL;

    t131 = (x529-(x530*(x531==x532)));

    if (t131 != -16156LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x534 = 3921U;
	int64_t x536 = -1LL;
	volatile int32_t t132 = -3830;

    t132 = (x533-(x534*(x535==x536)));

    if (t132 != -3928) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x538 = -1LL;
	volatile int16_t x539 = INT16_MIN;
	int32_t x540 = INT32_MAX;
	static volatile uint64_t t133 = 211050LLU;

    t133 = (x537-(x538*(x539==x540)));

    if (t133 != 446739836471LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x542 = -20;
	int64_t x543 = INT64_MAX;
	uint16_t x544 = 0U;
	int32_t t134 = 58828443;

    t134 = (x541-(x542*(x543==x544)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x545 = INT32_MIN;
	int32_t x548 = INT32_MIN;
	volatile uint32_t t135 = 1920994U;

    t135 = (x545-(x546*(x547==x548)));

    if (t135 != 2147483648U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x549 = UINT16_MAX;
	static int16_t x550 = INT16_MAX;
	static int64_t x551 = -1LL;
	int64_t x552 = INT64_MAX;
	volatile int32_t t136 = -683437738;

    t136 = (x549-(x550*(x551==x552)));

    if (t136 != 65535) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x553 = INT8_MAX;
	volatile uint16_t x554 = UINT16_MAX;
	int64_t x555 = -130320807476428349LL;
	static int16_t x556 = 2302;

    t137 = (x553-(x554*(x555==x556)));

    if (t137 != 127) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x557 = 2U;
	uint64_t x558 = 47558012162943LLU;
	static uint16_t x560 = UINT16_MAX;

    t138 = (x557-(x558*(x559==x560)));

    if (t138 != 2LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x562 = -8;
	static uint32_t x563 = 305703U;
	int32_t x564 = INT32_MIN;

    t139 = (x561-(x562*(x563==x564)));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int16_t x566 = INT16_MIN;
	volatile uint8_t x567 = UINT8_MAX;
	int32_t x568 = INT32_MIN;
	int32_t t140 = INT32_MIN;

    t140 = (x565-(x566*(x567==x568)));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x569 = UINT16_MAX;
	int64_t x570 = -1LL;
	int32_t x572 = INT32_MIN;
	volatile int64_t t141 = -71636110288395LL;

    t141 = (x569-(x570*(x571==x572)));

    if (t141 != 65535LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x573 = 2;
	int64_t x574 = -1LL;
	uint32_t x575 = UINT32_MAX;
	volatile int64_t t142 = 233187LL;

    t142 = (x573-(x574*(x575==x576)));

    if (t142 != 2LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x578 = -1LL;
	static int64_t x579 = INT64_MIN;
	uint32_t x580 = 59296U;
	volatile int64_t t143 = -2082LL;

    t143 = (x577-(x578*(x579==x580)));

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x581 = INT32_MIN;
	int16_t x582 = INT16_MIN;
	uint16_t x583 = UINT16_MAX;
	static int64_t x584 = INT64_MAX;

    t144 = (x581-(x582*(x583==x584)));

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x585 = INT64_MIN;
	static uint32_t x588 = UINT32_MAX;
	static volatile int64_t t145 = INT64_MIN;

    t145 = (x585-(x586*(x587==x588)));

    if (t145 != INT64_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x590 = UINT32_MAX;
	static int64_t x591 = INT64_MIN;
	int8_t x592 = 1;
	volatile uint64_t t146 = 135840670138950LLU;

    t146 = (x589-(x590*(x591==x592)));

    if (t146 != 115038487036LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x593 = -1;
	uint8_t x594 = 45U;
	int32_t x595 = INT32_MIN;
	int32_t x596 = -1;
	int32_t t147 = -1;

    t147 = (x593-(x594*(x595==x596)));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x597 = INT64_MAX;
	static int8_t x598 = INT8_MAX;
	static int32_t x599 = INT32_MIN;
	uint8_t x600 = UINT8_MAX;
	int64_t t148 = INT64_MAX;

    t148 = (x597-(x598*(x599==x600)));

    if (t148 != INT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x601 = -1;
	uint8_t x604 = UINT8_MAX;
	volatile int32_t t149 = 1360;

    t149 = (x601-(x602*(x603==x604)));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x606 = 806;
	static volatile int8_t x607 = INT8_MAX;
	int32_t x608 = -1;

    t150 = (x605-(x606*(x607==x608)));

    if (t150 != 138LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x610 = UINT32_MAX;
	int16_t x611 = INT16_MIN;
	static volatile uint8_t x612 = 1U;

    t151 = (x609-(x610*(x611==x612)));

    if (t151 != 1592597481055596410LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x613 = 0;
	static int64_t x614 = INT64_MIN;
	int64_t x616 = INT64_MAX;
	static int64_t t152 = 46526284LL;

    t152 = (x613-(x614*(x615==x616)));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x618 = INT32_MIN;
	static uint32_t x619 = UINT32_MAX;
	static uint64_t x620 = UINT64_MAX;
	volatile int32_t t153 = INT32_MIN;

    t153 = (x617-(x618*(x619==x620)));

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x621 = 21157140995916LLU;
	int64_t x622 = INT64_MAX;
	int64_t x623 = INT64_MAX;
	volatile int64_t x624 = INT64_MIN;

    t154 = (x621-(x622*(x623==x624)));

    if (t154 != 21157140995916LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x625 = INT16_MAX;
	int64_t x628 = 26798399939LL;
	volatile int32_t t155 = -6;

    t155 = (x625-(x626*(x627==x628)));

    if (t155 != 32767) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x629 = INT32_MIN;
	volatile uint32_t x630 = 77538274U;
	int32_t x631 = INT32_MIN;
	uint8_t x632 = 2U;
	uint32_t t156 = 168079629U;

    t156 = (x629-(x630*(x631==x632)));

    if (t156 != 2147483648U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x633 = INT32_MIN;
	uint32_t x634 = 24U;
	int8_t x635 = 0;
	static int16_t x636 = INT16_MIN;
	uint32_t t157 = 3U;

    t157 = (x633-(x634*(x635==x636)));

    if (t157 != 2147483648U) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x637 = 2114U;
	uint64_t x638 = UINT64_MAX;
	int64_t x639 = 0LL;
	volatile uint32_t x640 = UINT32_MAX;

    t158 = (x637-(x638*(x639==x640)));

    if (t158 != 2114LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x641 = 3382091029368785LL;
	int64_t x642 = INT64_MAX;
	static int8_t x644 = 1;

    t159 = (x641-(x642*(x643==x644)));

    if (t159 != 3382091029368785LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x645 = 2493U;
	int8_t x646 = INT8_MAX;
	int32_t x647 = -2;
	uint64_t x648 = 113LLU;
	uint32_t t160 = 272449648U;

    t160 = (x645-(x646*(x647==x648)));

    if (t160 != 2493U) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x650 = -1;
	volatile int8_t x651 = -36;
	uint8_t x652 = UINT8_MAX;
	int32_t t161 = 0;

    t161 = (x649-(x650*(x651==x652)));

    if (t161 != -128) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x654 = INT8_MIN;
	volatile int64_t x655 = INT64_MIN;
	static uint8_t x656 = 0U;
	int32_t t162 = -533;

    t162 = (x653-(x654*(x655==x656)));

    if (t162 != 3) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x657 = 6U;
	volatile int64_t x659 = INT64_MIN;
	int32_t x660 = -1;
	static int64_t t163 = 20599285LL;

    t163 = (x657-(x658*(x659==x660)));

    if (t163 != 6LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x662 = 27574139565326LLU;
	volatile int16_t x663 = -1;
	int16_t x664 = 0;
	volatile uint64_t t164 = 1973LLU;

    t164 = (x661-(x662*(x663==x664)));

    if (t164 != 331LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x666 = 0U;
	int64_t x668 = INT64_MIN;
	int32_t t165 = -391044;

    t165 = (x665-(x666*(x667==x668)));

    if (t165 != 66) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x669 = UINT64_MAX;
	uint8_t x670 = 24U;
	int64_t x671 = -4LL;
	uint16_t x672 = 2U;
	uint64_t t166 = UINT64_MAX;

    t166 = (x669-(x670*(x671==x672)));

    if (t166 != UINT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x673 = UINT32_MAX;
	uint64_t x676 = UINT64_MAX;
	volatile uint32_t t167 = UINT32_MAX;

    t167 = (x673-(x674*(x675==x676)));

    if (t167 != UINT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x677 = 1U;
	volatile int32_t t168 = 3;

    t168 = (x677-(x678*(x679==x680)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x681 = -1;
	static int16_t x682 = INT16_MAX;
	int32_t x683 = -1;
	int64_t x684 = INT64_MIN;
	int32_t t169 = -2;

    t169 = (x681-(x682*(x683==x684)));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x685 = INT16_MIN;
	static uint16_t x686 = 18U;
	int16_t x687 = INT16_MAX;
	int32_t t170 = 68863;

    t170 = (x685-(x686*(x687==x688)));

    if (t170 != -32768) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x689 = INT64_MAX;
	int16_t x690 = INT16_MIN;
	uint64_t x691 = UINT64_MAX;
	int16_t x692 = -18;
	static int64_t t171 = INT64_MAX;

    t171 = (x689-(x690*(x691==x692)));

    if (t171 != INT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x693 = INT64_MIN;
	static volatile int8_t x694 = 2;
	static int16_t x695 = -1;

    t172 = (x693-(x694*(x695==x696)));

    if (t172 != INT64_MIN) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x697 = 3;
	volatile int32_t x698 = INT32_MIN;
	static int16_t x699 = -1;
	volatile int16_t x700 = INT16_MIN;
	int32_t t173 = 570984306;

    t173 = (x697-(x698*(x699==x700)));

    if (t173 != 3) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x702 = UINT32_MAX;
	uint64_t x703 = 3757258810472584686LLU;
	int64_t x704 = -1LL;
	uint32_t t174 = 849U;

    t174 = (x701-(x702*(x703==x704)));

    if (t174 != 1655U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x705 = 87U;
	int16_t x706 = INT16_MIN;
	static int32_t x707 = INT32_MAX;
	int64_t x708 = INT64_MIN;
	volatile int32_t t175 = 869974;

    t175 = (x705-(x706*(x707==x708)));

    if (t175 != 87) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x709 = 30085474U;
	int16_t x710 = INT16_MAX;
	static int8_t x712 = 4;
	uint32_t t176 = 3U;

    t176 = (x709-(x710*(x711==x712)));

    if (t176 != 30085474U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x714 = 4U;
	static int64_t x715 = 3586891784583LL;
	uint32_t x716 = 25249U;
	uint32_t t177 = 82U;

    t177 = (x713-(x714*(x715==x716)));

    if (t177 != 14U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x717 = 31U;
	uint64_t x718 = 7718128865853583LLU;
	int32_t x719 = -1;
	int64_t x720 = INT64_MAX;

    t178 = (x717-(x718*(x719==x720)));

    if (t178 != 31LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x721 = 120U;
	int32_t x722 = 5010091;
	uint8_t x723 = 0U;
	uint8_t x724 = UINT8_MAX;
	int32_t t179 = 177734;

    t179 = (x721-(x722*(x723==x724)));

    if (t179 != 120) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x725 = INT8_MAX;
	static int64_t x728 = INT64_MIN;
	static volatile uint64_t t180 = 54942LLU;

    t180 = (x725-(x726*(x727==x728)));

    if (t180 != 127LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x729 = 240LL;
	int64_t x730 = INT64_MAX;
	int64_t x731 = -1LL;

    t181 = (x729-(x730*(x731==x732)));

    if (t181 != 240LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x733 = 11125;
	static int8_t x735 = INT8_MIN;
	int32_t x736 = INT32_MIN;
	int32_t t182 = -18489605;

    t182 = (x733-(x734*(x735==x736)));

    if (t182 != 11125) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x737 = INT16_MAX;
	int32_t x738 = INT32_MIN;
	static uint8_t x740 = 46U;
	static volatile int32_t t183 = -15702;

    t183 = (x737-(x738*(x739==x740)));

    if (t183 != 32767) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x741 = INT16_MIN;
	volatile int32_t x742 = INT32_MIN;
	int8_t x743 = -1;
	uint8_t x744 = UINT8_MAX;
	static volatile int32_t t184 = 804;

    t184 = (x741-(x742*(x743==x744)));

    if (t184 != -32768) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x745 = 6254276LL;
	int32_t x746 = -1;
	int16_t x748 = -1;
	int64_t t185 = 244014863LL;

    t185 = (x745-(x746*(x747==x748)));

    if (t185 != 6254276LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x749 = INT32_MIN;
	int64_t x750 = -1LL;
	static int64_t x751 = INT64_MAX;
	volatile int32_t x752 = INT32_MIN;
	int64_t t186 = 46678453497LL;

    t186 = (x749-(x750*(x751==x752)));

    if (t186 != -2147483648LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x753 = INT64_MAX;
	uint64_t x756 = UINT64_MAX;
	volatile int64_t t187 = 5768101085647LL;

    t187 = (x753-(x754*(x755==x756)));

    if (t187 != 9223372036626924804LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x757 = INT16_MIN;
	uint8_t x758 = 21U;
	int32_t x759 = INT32_MIN;
	int16_t x760 = INT16_MIN;

    t188 = (x757-(x758*(x759==x760)));

    if (t188 != -32768) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x761 = -1LL;
	int32_t x762 = -1;
	int32_t x763 = 1760161;
	static int8_t x764 = INT8_MIN;
	volatile int64_t t189 = -3LL;

    t189 = (x761-(x762*(x763==x764)));

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x765 = UINT32_MAX;
	int8_t x766 = 0;
	uint32_t x768 = 1584323U;
	volatile uint32_t t190 = UINT32_MAX;

    t190 = (x765-(x766*(x767==x768)));

    if (t190 != UINT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x769 = 952980896010501938LLU;
	uint16_t x770 = 3U;
	volatile int16_t x771 = INT16_MIN;
	int64_t x772 = INT64_MAX;

    t191 = (x769-(x770*(x771==x772)));

    if (t191 != 952980896010501938LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x775 = INT8_MIN;
	int32_t t192 = 17;

    t192 = (x773-(x774*(x775==x776)));

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x777 = INT16_MIN;
	int8_t x779 = 12;
	static int8_t x780 = INT8_MIN;

    t193 = (x777-(x778*(x779==x780)));

    if (t193 != 4294934528U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x781 = 4U;
	int8_t x782 = -50;
	int32_t x783 = INT32_MIN;
	int16_t x784 = -1;

    t194 = (x781-(x782*(x783==x784)));

    if (t194 != 4) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x786 = 2U;
	int16_t x787 = -1;
	int16_t x788 = 1;

    t195 = (x785-(x786*(x787==x788)));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x789 = -1;
	int32_t x790 = 6399463;
	int16_t x791 = -1;
	uint16_t x792 = 762U;
	static volatile int32_t t196 = 8;

    t196 = (x789-(x790*(x791==x792)));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x793 = 1LL;
	volatile int8_t x794 = 51;
	int32_t x795 = 713868332;
	int64_t x796 = -4811687031945893LL;

    t197 = (x793-(x794*(x795==x796)));

    if (t197 != 1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x797 = -1;
	int8_t x798 = INT8_MAX;
	int32_t x799 = -16;
	int32_t t198 = -19923108;

    t198 = (x797-(x798*(x799==x800)));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x801 = 24086U;
	static uint16_t x802 = 157U;
	static int8_t x803 = INT8_MIN;
	uint64_t x804 = 1822008LLU;
	volatile uint32_t t199 = 1667227969U;

    t199 = (x801-(x802*(x803==x804)));

    if (t199 != 24086U) { NG(); } else { ; }
	
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

