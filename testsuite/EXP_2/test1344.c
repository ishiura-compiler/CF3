
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

static uint32_t x3 = UINT32_MAX;
int8_t x4 = -24;
uint8_t x11 = UINT8_MAX;
static volatile uint16_t x15 = 20596U;
int16_t x30 = INT16_MIN;
static int32_t x32 = INT32_MIN;
volatile uint64_t t7 = 1069056153370296072LLU;
int32_t x33 = INT32_MAX;
int16_t x34 = -1379;
uint8_t x36 = 2U;
uint16_t x42 = 603U;
int16_t x51 = 60;
volatile int32_t t12 = 15470;
int8_t x53 = INT8_MIN;
int16_t x54 = INT16_MIN;
static volatile int32_t x55 = 87;
uint8_t x60 = UINT8_MAX;
int32_t t14 = 0;
int8_t x62 = INT8_MAX;
volatile int32_t t15 = -334;
static int32_t x65 = -1;
uint64_t x68 = 172871080490LLU;
int8_t x79 = INT8_MIN;
int32_t t19 = 472235;
int8_t x95 = -1;
static int8_t x99 = INT8_MIN;
int32_t x103 = 1751;
uint16_t x105 = UINT16_MAX;
volatile int8_t x122 = INT8_MIN;
int8_t x127 = INT8_MAX;
static int16_t x129 = INT16_MIN;
int32_t t32 = INT32_MIN;
int16_t x133 = 795;
volatile uint8_t x135 = UINT8_MAX;
static int8_t x141 = INT8_MAX;
uint32_t x142 = 100U;
volatile uint64_t t35 = 13152343189LLU;
static int32_t x146 = 0;
int8_t x147 = INT8_MIN;
static volatile int64_t t36 = -305901939209LL;
int16_t x158 = INT16_MAX;
static int32_t x160 = INT32_MAX;
volatile int64_t x164 = INT64_MIN;
static int16_t x167 = INT16_MIN;
volatile int32_t x170 = INT32_MIN;
static int8_t x173 = -1;
int64_t t44 = INT64_MAX;
int8_t x184 = INT8_MIN;
volatile int64_t x189 = -13340946541588048LL;
uint16_t x192 = 1U;
uint64_t t48 = 51455LLU;
int64_t x197 = -472998753308572263LL;
int64_t x201 = 0LL;
volatile int8_t x202 = INT8_MAX;
int16_t x204 = -1;
volatile int64_t x213 = 405574108LL;
uint32_t x217 = 97648U;
int64_t x223 = INT64_MIN;
int64_t x225 = INT64_MAX;
int64_t x228 = 15453303540LL;
int64_t x230 = INT64_MIN;
volatile uint64_t x233 = 252267052477175LLU;
uint32_t x239 = UINT32_MAX;
volatile uint64_t x240 = 4474202953697929869LLU;
int16_t x243 = INT16_MIN;
static volatile int64_t x245 = INT64_MIN;
volatile int64_t t62 = 12796305711578817LL;
uint8_t x254 = 45U;
static uint16_t x256 = 58U;
int16_t x258 = INT16_MIN;
int32_t x263 = 235799;
uint64_t x271 = 258502046886986LLU;
int8_t x273 = INT8_MIN;
uint16_t x274 = UINT16_MAX;
volatile uint8_t x277 = UINT8_MAX;
int32_t x278 = -1;
int64_t x280 = 4250810403559316728LL;
int8_t x281 = 11;
int8_t x282 = -1;
static volatile int64_t t72 = 392737635075255904LL;
int64_t x294 = -1LL;
static volatile int32_t x299 = INT32_MIN;
int32_t x300 = -1;
static volatile int32_t t74 = 177;
volatile int64_t t76 = 39048LL;
static uint16_t x309 = 13U;
volatile int32_t t77 = 150311701;
int32_t x316 = INT32_MIN;
int8_t x326 = -1;
int32_t x331 = INT32_MAX;
int64_t x332 = 27384237785904852LL;
uint64_t x334 = 2009566021899LLU;
int8_t x337 = 19;
uint16_t x338 = 15U;
int32_t x341 = INT32_MAX;
static int64_t x351 = INT64_MAX;
static volatile int16_t x356 = -1;
volatile int64_t t88 = -183LL;
volatile int8_t x360 = -1;
volatile int8_t x363 = INT8_MIN;
int64_t t90 = -59621811147469807LL;
int64_t x366 = -375691LL;
uint8_t x370 = UINT8_MAX;
static int8_t x374 = -61;
volatile int16_t x382 = INT16_MAX;
static int32_t x387 = -1;
int32_t t96 = -8697;
uint32_t x390 = 12701U;
int64_t x399 = -3960657632LL;
uint16_t x403 = 65U;
static volatile uint8_t x404 = 34U;
int64_t x405 = INT64_MIN;
uint32_t t103 = 0U;
int32_t t104 = -7358888;
static int8_t x426 = INT8_MIN;
static uint32_t t107 = 2U;
int8_t x439 = -1;
static int32_t t109 = -440960721;
uint64_t x451 = 216LLU;
int32_t x462 = INT32_MAX;
int8_t x463 = INT8_MIN;
int32_t x467 = INT32_MAX;
volatile int32_t t116 = 33;
int64_t x469 = INT64_MIN;
int16_t x474 = INT16_MAX;
uint32_t x478 = 1395U;
volatile int64_t t120 = 170290374747LL;
volatile uint16_t x487 = 2438U;
volatile uint32_t x499 = 500804U;
int64_t x503 = INT64_MIN;
static int16_t x508 = INT16_MIN;
int8_t x509 = INT8_MAX;
int16_t x510 = INT16_MAX;
volatile int64_t x514 = INT64_MIN;
int16_t x515 = INT16_MAX;
static int32_t t129 = 4805342;
int8_t x535 = -1;
static int32_t t136 = -3;
uint16_t x554 = 0U;
static int8_t x555 = -1;
int32_t t139 = -6;
int16_t x561 = INT16_MIN;
volatile int32_t t140 = 3;
static uint32_t x568 = 4389U;
volatile uint32_t t141 = 37U;
int8_t x572 = -1;
volatile int64_t t142 = -1LL;
int8_t x574 = INT8_MAX;
static uint8_t x576 = UINT8_MAX;
uint16_t x580 = 6U;
int16_t x589 = INT16_MIN;
uint32_t x591 = UINT32_MAX;
int8_t x594 = INT8_MIN;
uint64_t x600 = UINT64_MAX;
uint64_t t149 = UINT64_MAX;
int32_t t150 = -4;
static uint8_t x605 = UINT8_MAX;
int8_t x609 = -1;
uint16_t x610 = 8U;
uint64_t x611 = UINT64_MAX;
int16_t x615 = -1;
uint8_t x617 = UINT8_MAX;
volatile uint64_t t155 = 11052LLU;
static uint32_t x625 = 3362382U;
uint16_t x626 = 1U;
int64_t x631 = INT64_MIN;
volatile int16_t x636 = -2;
volatile uint16_t x642 = 28245U;
static int32_t x647 = INT32_MAX;
volatile int32_t x650 = INT32_MIN;
uint8_t x654 = 5U;
uint16_t x657 = UINT16_MAX;
int8_t x658 = INT8_MIN;
static int8_t x663 = INT8_MIN;
static volatile int64_t x668 = -38802LL;
int16_t x671 = -627;
volatile uint16_t x672 = UINT16_MAX;
int16_t x678 = 111;
volatile int8_t x686 = INT8_MIN;
volatile uint64_t t172 = 6587668256433071LLU;
int32_t t174 = -80;
uint8_t x706 = 1U;
int64_t t176 = 377516998379008LL;
int8_t x709 = INT8_MAX;
int32_t t177 = -9;
int16_t x713 = INT16_MIN;
static int64_t x718 = INT64_MIN;
int64_t x727 = -1LL;
volatile int32_t t181 = -94;
volatile int64_t t183 = 11205LL;
volatile uint64_t t184 = 7461037941241846LLU;
uint32_t x743 = UINT32_MAX;
uint64_t x755 = 466802313376944479LLU;
static int64_t t189 = -184LL;
static int32_t x761 = INT32_MAX;
static int16_t x765 = -3741;
int16_t x766 = 1309;
uint16_t x767 = UINT16_MAX;
static int64_t t194 = 0LL;
uint32_t x782 = 2488U;
int64_t x783 = -1LL;
int32_t x791 = INT32_MAX;
static volatile uint64_t x793 = 154051250885LLU;
static int8_t x795 = INT8_MIN;
volatile int32_t x796 = INT32_MAX;


void f0(void) {
    	static uint32_t x1 = 762665U;
	int8_t x2 = INT8_MIN;
	uint32_t t0 = 54099U;

    t0 = ((x1&(x2!=x3))^x4);

    if (t0 != 4294967273U) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	uint32_t x6 = 547415U;
	int8_t x7 = 20;
	uint8_t x8 = 2U;
	volatile int64_t t1 = -247670104248489LL;

    t1 = ((x5&(x6!=x7))^x8);

    if (t1 != 3LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 27584728U;
	static int16_t x10 = -80;
	volatile int8_t x12 = INT8_MAX;
	volatile uint32_t t2 = 995194U;

    t2 = ((x9&(x10!=x11))^x12);

    if (t2 != 127U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	int32_t x14 = INT32_MIN;
	static uint8_t x16 = 0U;
	int32_t t3 = 25;

    t3 = ((x13&(x14!=x15))^x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x17 = 4U;
	uint64_t x18 = 47LLU;
	int64_t x19 = -130LL;
	volatile uint32_t x20 = UINT32_MAX;
	volatile uint32_t t4 = UINT32_MAX;

    t4 = ((x17&(x18!=x19))^x20);

    if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -79;
	uint64_t x22 = UINT64_MAX;
	uint16_t x23 = UINT16_MAX;
	int32_t x24 = INT32_MIN;
	int32_t t5 = 16173928;

    t5 = ((x21&(x22!=x23))^x24);

    if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 4;
	uint8_t x26 = 76U;
	uint32_t x27 = UINT32_MAX;
	int32_t x28 = -42815;
	volatile int32_t t6 = 195099;

    t6 = ((x25&(x26!=x27))^x28);

    if (t6 != -42815) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 771569875168707LLU;
	volatile uint64_t x31 = 186LLU;

    t7 = ((x29&(x30!=x31))^x32);

    if (t7 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x35 = 4420909;
	volatile int32_t t8 = 6194067;

    t8 = ((x33&(x34!=x35))^x36);

    if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	int64_t x38 = -1LL;
	uint16_t x39 = 11449U;
	static int8_t x40 = 2;
	volatile int32_t t9 = -3;

    t9 = ((x37&(x38!=x39))^x40);

    if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	int64_t x43 = -4362115002029498LL;
	int32_t x44 = 238;
	int32_t t10 = -1;

    t10 = ((x41&(x42!=x43))^x44);

    if (t10 != 238) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = INT16_MIN;
	int16_t x46 = -1;
	int32_t x47 = INT32_MAX;
	static int16_t x48 = INT16_MIN;
	int32_t t11 = 215679443;

    t11 = ((x45&(x46!=x47))^x48);

    if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MAX;
	int16_t x50 = 12;
	uint16_t x52 = 5578U;

    t12 = ((x49&(x50!=x51))^x52);

    if (t12 != 5579) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x56 = INT64_MAX;
	int64_t t13 = INT64_MAX;

    t13 = ((x53&(x54!=x55))^x56);

    if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	int8_t x58 = INT8_MAX;
	uint32_t x59 = 4414852U;

    t14 = ((x57&(x58!=x59))^x60);

    if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x61 = 20799U;
	volatile int64_t x63 = INT64_MIN;
	int32_t x64 = 0;

    t15 = ((x61&(x62!=x63))^x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x66 = 845903;
	int16_t x67 = INT16_MIN;
	uint64_t t16 = 23584LLU;

    t16 = ((x65&(x66!=x67))^x68);

    if (t16 != 172871080491LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 7839066559903229996LLU;
	static volatile int16_t x70 = INT16_MAX;
	int16_t x71 = INT16_MAX;
	static uint16_t x72 = UINT16_MAX;
	static volatile uint64_t t17 = 2055172938LLU;

    t17 = ((x69&(x70!=x71))^x72);

    if (t17 != 65535LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	uint32_t x74 = UINT32_MAX;
	int32_t x75 = -7677;
	int64_t x76 = -1LL;
	int64_t t18 = -111578265546LL;

    t18 = ((x73&(x74!=x75))^x76);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = -17;
	uint8_t x78 = UINT8_MAX;
	int16_t x80 = INT16_MIN;

    t19 = ((x77&(x78!=x79))^x80);

    if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = INT16_MIN;
	int8_t x82 = INT8_MIN;
	uint32_t x83 = 2903U;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = INT32_MIN;

    t20 = ((x81&(x82!=x83))^x84);

    if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -11092;
	volatile uint16_t x86 = 47U;
	static int64_t x87 = -1LL;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t21 = UINT64_MAX;

    t21 = ((x85&(x86!=x87))^x88);

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = UINT32_MAX;
	uint64_t x90 = UINT64_MAX;
	int64_t x91 = -239174997255112LL;
	uint16_t x92 = 2U;
	volatile uint32_t t22 = 2350668U;

    t22 = ((x89&(x90!=x91))^x92);

    if (t22 != 3U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = INT8_MIN;
	uint16_t x94 = 1U;
	int16_t x96 = 5635;
	static int32_t t23 = -3;

    t23 = ((x93&(x94!=x95))^x96);

    if (t23 != 5635) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	volatile uint16_t x98 = UINT16_MAX;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = INT32_MIN;

    t24 = ((x97&(x98!=x99))^x100);

    if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MAX;
	int64_t x102 = 73027269781621LL;
	volatile uint64_t x104 = 75787743235516660LLU;
	uint64_t t25 = 15880LLU;

    t25 = ((x101&(x102!=x103))^x104);

    if (t25 != 75787743235516661LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x106 = -1;
	int16_t x107 = -109;
	int32_t x108 = -472444222;
	int32_t t26 = 66074;

    t26 = ((x105&(x106!=x107))^x108);

    if (t26 != -472444221) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = INT16_MIN;
	int32_t x110 = INT32_MAX;
	static int16_t x111 = -1;
	uint64_t x112 = 9LLU;
	volatile uint64_t t27 = 547192483933LLU;

    t27 = ((x109&(x110!=x111))^x112);

    if (t27 != 9LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = UINT64_MAX;
	volatile int16_t x114 = INT16_MAX;
	int32_t x115 = -1;
	int64_t x116 = -1LL;
	static uint64_t t28 = 82LLU;

    t28 = ((x113&(x114!=x115))^x116);

    if (t28 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint64_t x117 = 67993378224999LLU;
	int64_t x118 = INT64_MIN;
	uint64_t x119 = 22857LLU;
	volatile int32_t x120 = INT32_MIN;
	volatile uint64_t t29 = 234287651827061LLU;

    t29 = ((x117&(x118!=x119))^x120);

    if (t29 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 14859U;
	uint32_t x123 = 4312U;
	int32_t x124 = INT32_MAX;
	int32_t t30 = -228;

    t30 = ((x121&(x122!=x123))^x124);

    if (t30 != 2147483646) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -628581;
	volatile uint16_t x126 = 5681U;
	static int16_t x128 = 2;
	volatile int32_t t31 = -2037308;

    t31 = ((x125&(x126!=x127))^x128);

    if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x130 = INT64_MIN;
	int64_t x131 = -1LL;
	volatile int32_t x132 = INT32_MIN;

    t32 = ((x129&(x130!=x131))^x132);

    if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x134 = INT16_MIN;
	static int64_t x136 = -1LL;
	static volatile int64_t t33 = -9939999800881340LL;

    t33 = ((x133&(x134!=x135))^x136);

    if (t33 != -2LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x137 = INT64_MIN;
	int8_t x138 = 16;
	int16_t x139 = INT16_MIN;
	volatile int8_t x140 = INT8_MIN;
	volatile int64_t t34 = 2330465952177LL;

    t34 = ((x137&(x138!=x139))^x140);

    if (t34 != -128LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x143 = 245081087U;
	volatile uint64_t x144 = 3086436LLU;

    t35 = ((x141&(x142!=x143))^x144);

    if (t35 != 3086437LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MAX;
	int64_t x148 = -30627LL;

    t36 = ((x145&(x146!=x147))^x148);

    if (t36 != -30628LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x149 = 50LL;
	int16_t x150 = 126;
	static volatile uint8_t x151 = UINT8_MAX;
	uint32_t x152 = 14346U;
	volatile int64_t t37 = -849971745LL;

    t37 = ((x149&(x150!=x151))^x152);

    if (t37 != 14346LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	volatile int8_t x154 = 0;
	int32_t x155 = 2;
	int16_t x156 = -1;
	volatile int32_t t38 = 4;

    t38 = ((x153&(x154!=x155))^x156);

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = -5389899;
	int16_t x159 = INT16_MAX;
	int32_t t39 = INT32_MAX;

    t39 = ((x157&(x158!=x159))^x160);

    if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = 959181036476LLU;
	int64_t x162 = INT64_MIN;
	int8_t x163 = 57;
	uint64_t t40 = 2897312LLU;

    t40 = ((x161&(x162!=x163))^x164);

    if (t40 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 1U;
	static int8_t x166 = -24;
	uint16_t x168 = 10U;
	volatile uint32_t t41 = 12U;

    t41 = ((x165&(x166!=x167))^x168);

    if (t41 != 11U) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x169 = UINT64_MAX;
	int8_t x171 = -1;
	uint16_t x172 = 4142U;
	static uint64_t t42 = 31275739LLU;

    t42 = ((x169&(x170!=x171))^x172);

    if (t42 != 4143LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x174 = 30U;
	int8_t x175 = INT8_MIN;
	static uint64_t x176 = UINT64_MAX;
	uint64_t t43 = 1199236LLU;

    t43 = ((x173&(x174!=x175))^x176);

    if (t43 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	static int32_t x178 = -1;
	uint32_t x179 = UINT32_MAX;
	static volatile int64_t x180 = INT64_MAX;

    t44 = ((x177&(x178!=x179))^x180);

    if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x181 = 12U;
	volatile uint32_t x182 = 2077190U;
	volatile uint32_t x183 = 45060994U;
	volatile int32_t t45 = 1678;

    t45 = ((x181&(x182!=x183))^x184);

    if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = UINT32_MAX;
	int64_t x186 = INT64_MIN;
	int64_t x187 = -1LL;
	int32_t x188 = INT32_MIN;
	volatile uint32_t t46 = 2660U;

    t46 = ((x185&(x186!=x187))^x188);

    if (t46 != 2147483649U) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = INT8_MIN;
	int64_t x191 = -16LL;
	volatile int64_t t47 = 2LL;

    t47 = ((x189&(x190!=x191))^x192);

    if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 25034280LLU;
	int16_t x194 = 25;
	int8_t x195 = INT8_MIN;
	static volatile int16_t x196 = INT16_MIN;

    t48 = ((x193&(x194!=x195))^x196);

    if (t48 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x198 = 7355U;
	volatile int32_t x199 = INT32_MAX;
	volatile uint16_t x200 = UINT16_MAX;
	static int64_t t49 = 199780660670618LL;

    t49 = ((x197&(x198!=x199))^x200);

    if (t49 != 65534LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x203 = -126;
	volatile int64_t t50 = -87453LL;

    t50 = ((x201&(x202!=x203))^x204);

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x205 = 15230U;
	uint16_t x206 = 13717U;
	int8_t x207 = INT8_MIN;
	volatile int32_t x208 = -1;
	volatile int32_t t51 = -88688278;

    t51 = ((x205&(x206!=x207))^x208);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = UINT32_MAX;
	int8_t x210 = INT8_MIN;
	int16_t x211 = 3;
	static uint8_t x212 = UINT8_MAX;
	static volatile uint32_t t52 = 1745543U;

    t52 = ((x209&(x210!=x211))^x212);

    if (t52 != 254U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x214 = INT8_MIN;
	uint32_t x215 = 769755824U;
	int16_t x216 = -58;
	volatile int64_t t53 = 44LL;

    t53 = ((x213&(x214!=x215))^x216);

    if (t53 != -58LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x218 = INT64_MIN;
	volatile int32_t x219 = -780599;
	int32_t x220 = INT32_MAX;
	uint32_t t54 = 247969573U;

    t54 = ((x217&(x218!=x219))^x220);

    if (t54 != 2147483647U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = 307;
	int16_t x222 = INT16_MAX;
	volatile uint64_t x224 = 1083401379LLU;
	uint64_t t55 = 118970618526336518LLU;

    t55 = ((x221&(x222!=x223))^x224);

    if (t55 != 1083401378LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x226 = UINT16_MAX;
	int64_t x227 = INT64_MAX;
	volatile int64_t t56 = -14LL;

    t56 = ((x225&(x226!=x227))^x228);

    if (t56 != 15453303541LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	uint64_t x231 = UINT64_MAX;
	uint16_t x232 = 15U;
	static volatile int32_t t57 = 162986;

    t57 = ((x229&(x230!=x231))^x232);

    if (t57 != 15) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x234 = INT64_MIN;
	int32_t x235 = INT32_MIN;
	int64_t x236 = INT64_MIN;
	volatile uint64_t t58 = 7071967197625LLU;

    t58 = ((x233&(x234!=x235))^x236);

    if (t58 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	uint64_t x238 = 631LLU;
	static uint64_t t59 = 915322LLU;

    t59 = ((x237&(x238!=x239))^x240);

    if (t59 != 4474202953697929869LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MIN;
	volatile uint64_t x242 = 50608LLU;
	int16_t x244 = -1;
	volatile int32_t t60 = 248;

    t60 = ((x241&(x242!=x243))^x244);

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x246 = -1;
	uint8_t x247 = 24U;
	uint8_t x248 = 66U;
	volatile int64_t t61 = -4LL;

    t61 = ((x245&(x246!=x247))^x248);

    if (t61 != 66LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = INT16_MIN;
	static uint8_t x250 = 11U;
	int16_t x251 = 331;
	int64_t x252 = -1LL;

    t62 = ((x249&(x250!=x251))^x252);

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x253 = INT16_MIN;
	uint64_t x255 = UINT64_MAX;
	volatile int32_t t63 = 7466;

    t63 = ((x253&(x254!=x255))^x256);

    if (t63 != 58) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MAX;
	int16_t x259 = -496;
	uint64_t x260 = 1039188339323479LLU;
	uint64_t t64 = 14470859867991LLU;

    t64 = ((x257&(x258!=x259))^x260);

    if (t64 != 1039188339323478LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = -489841608152779LL;
	int32_t x262 = INT32_MIN;
	static uint16_t x264 = UINT16_MAX;
	int64_t t65 = -12878LL;

    t65 = ((x261&(x262!=x263))^x264);

    if (t65 != 65534LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MIN;
	int32_t x266 = INT32_MAX;
	static uint8_t x267 = UINT8_MAX;
	int32_t x268 = -1;
	static int64_t t66 = -29793LL;

    t66 = ((x265&(x266!=x267))^x268);

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = UINT8_MAX;
	static volatile int32_t x270 = INT32_MIN;
	uint32_t x272 = 3U;
	volatile uint32_t t67 = 433108U;

    t67 = ((x269&(x270!=x271))^x272);

    if (t67 != 2U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x275 = INT64_MIN;
	uint8_t x276 = 127U;
	volatile int32_t t68 = -86934;

    t68 = ((x273&(x274!=x275))^x276);

    if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x279 = 12166039210882LLU;
	volatile int64_t t69 = -567398609083797702LL;

    t69 = ((x277&(x278!=x279))^x280);

    if (t69 != 4250810403559316729LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x283 = -1;
	static volatile uint16_t x284 = 9552U;
	int32_t t70 = 9;

    t70 = ((x281&(x282!=x283))^x284);

    if (t70 != 9552) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = -1;
	uint32_t x286 = 181106U;
	volatile int8_t x287 = -3;
	uint8_t x288 = 4U;
	static volatile int32_t t71 = 9858;

    t71 = ((x285&(x286!=x287))^x288);

    if (t71 != 5) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = 58897897125LL;
	int32_t x290 = 201684;
	volatile int64_t x291 = INT64_MIN;
	int8_t x292 = INT8_MAX;

    t72 = ((x289&(x290!=x291))^x292);

    if (t72 != 126LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x293 = INT8_MAX;
	uint16_t x295 = 2U;
	int16_t x296 = -1;
	int32_t t73 = -354022;

    t73 = ((x293&(x294!=x295))^x296);

    if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint8_t x297 = UINT8_MAX;
	static int32_t x298 = 14664081;

    t74 = ((x297&(x298!=x299))^x300);

    if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x301 = INT32_MAX;
	int8_t x302 = 14;
	static volatile uint32_t x303 = 1603702794U;
	uint64_t x304 = 22535257247326123LLU;
	uint64_t t75 = 330155658206624LLU;

    t75 = ((x301&(x302!=x303))^x304);

    if (t75 != 22535257247326122LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x305 = INT64_MIN;
	volatile int16_t x306 = INT16_MAX;
	static int32_t x307 = INT32_MAX;
	volatile uint32_t x308 = UINT32_MAX;

    t76 = ((x305&(x306!=x307))^x308);

    if (t76 != 4294967295LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x310 = INT16_MIN;
	uint16_t x311 = UINT16_MAX;
	uint16_t x312 = UINT16_MAX;

    t77 = ((x309&(x310!=x311))^x312);

    if (t77 != 65534) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 2U;
	static volatile int64_t x314 = -211744068LL;
	static uint64_t x315 = 98289645501LLU;
	static uint32_t t78 = 10872250U;

    t78 = ((x313&(x314!=x315))^x316);

    if (t78 != 2147483648U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = INT64_MIN;
	int32_t x318 = INT32_MIN;
	volatile uint64_t x319 = 21670737LLU;
	int8_t x320 = -1;
	volatile int64_t t79 = 36LL;

    t79 = ((x317&(x318!=x319))^x320);

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MIN;
	static uint32_t x322 = UINT32_MAX;
	volatile int8_t x323 = INT8_MIN;
	int32_t x324 = INT32_MIN;
	volatile int64_t t80 = 133116430752LL;

    t80 = ((x321&(x322!=x323))^x324);

    if (t80 != -2147483648LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 0U;
	int16_t x327 = 36;
	uint8_t x328 = 45U;
	int32_t t81 = 35;

    t81 = ((x325&(x326!=x327))^x328);

    if (t81 != 45) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = 219;
	static int32_t x330 = INT32_MIN;
	static int64_t t82 = -21060123LL;

    t82 = ((x329&(x330!=x331))^x332);

    if (t82 != 27384237785904853LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = 724435106594646LLU;
	int8_t x335 = 0;
	static int64_t x336 = INT64_MIN;
	volatile uint64_t t83 = 16091845483LLU;

    t83 = ((x333&(x334!=x335))^x336);

    if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint64_t x339 = UINT64_MAX;
	volatile uint8_t x340 = UINT8_MAX;
	volatile int32_t t84 = -2;

    t84 = ((x337&(x338!=x339))^x340);

    if (t84 != 254) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x342 = -1508;
	static volatile int32_t x343 = INT32_MIN;
	int16_t x344 = INT16_MIN;
	int32_t t85 = 631331;

    t85 = ((x341&(x342!=x343))^x344);

    if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = UINT8_MAX;
	int32_t x346 = INT32_MIN;
	int16_t x347 = INT16_MAX;
	int16_t x348 = -1;
	volatile int32_t t86 = -1147350;

    t86 = ((x345&(x346!=x347))^x348);

    if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = 375487201U;
	static volatile uint8_t x350 = 0U;
	static volatile int16_t x352 = -1;
	uint32_t t87 = 18U;

    t87 = ((x349&(x350!=x351))^x352);

    if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MAX;
	volatile int32_t x354 = INT32_MIN;
	uint8_t x355 = 1U;

    t88 = ((x353&(x354!=x355))^x356);

    if (t88 != -2LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x357 = 464;
	uint32_t x358 = 800488918U;
	int32_t x359 = INT32_MIN;
	int32_t t89 = 0;

    t89 = ((x357&(x358!=x359))^x360);

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MAX;
	volatile uint64_t x362 = 2216LLU;
	uint16_t x364 = 1348U;

    t90 = ((x361&(x362!=x363))^x364);

    if (t90 != 1349LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = -3;
	uint16_t x367 = UINT16_MAX;
	volatile int64_t x368 = INT64_MIN;
	volatile int64_t t91 = -22366111606454LL;

    t91 = ((x365&(x366!=x367))^x368);

    if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = 8U;
	int8_t x371 = -8;
	static volatile int8_t x372 = -1;
	volatile int32_t t92 = 63360978;

    t92 = ((x369&(x370!=x371))^x372);

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x373 = -5;
	int64_t x375 = -24638354313006492LL;
	uint32_t x376 = 25592U;
	uint32_t t93 = 1U;

    t93 = ((x373&(x374!=x375))^x376);

    if (t93 != 25593U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MIN;
	volatile int64_t x378 = 129772LL;
	volatile uint8_t x379 = 5U;
	int8_t x380 = INT8_MIN;
	int32_t t94 = -29341487;

    t94 = ((x377&(x378!=x379))^x380);

    if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x381 = 1;
	int64_t x383 = INT64_MIN;
	int64_t x384 = INT64_MIN;
	volatile int64_t t95 = -12913541LL;

    t95 = ((x381&(x382!=x383))^x384);

    if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = UINT16_MAX;
	static uint32_t x386 = 5626U;
	int32_t x388 = 84;

    t96 = ((x385&(x386!=x387))^x388);

    if (t96 != 85) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x389 = INT16_MIN;
	int32_t x391 = -1;
	static uint32_t x392 = 5503U;
	static uint32_t t97 = 1722472U;

    t97 = ((x389&(x390!=x391))^x392);

    if (t97 != 5503U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x393 = INT16_MIN;
	uint32_t x394 = 0U;
	int64_t x395 = -104225044LL;
	int64_t x396 = INT64_MIN;
	int64_t t98 = INT64_MIN;

    t98 = ((x393&(x394!=x395))^x396);

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x397 = 1523;
	int32_t x398 = INT32_MAX;
	static int8_t x400 = INT8_MIN;
	static int32_t t99 = -12197;

    t99 = ((x397&(x398!=x399))^x400);

    if (t99 != -127) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = UINT32_MAX;
	static int8_t x402 = 15;
	volatile uint32_t t100 = 40U;

    t100 = ((x401&(x402!=x403))^x404);

    if (t100 != 35U) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x406 = -381;
	volatile uint32_t x407 = 251309097U;
	int16_t x408 = -99;
	volatile int64_t t101 = 330868712431265658LL;

    t101 = ((x405&(x406!=x407))^x408);

    if (t101 != -99LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x409 = 249574584484219LLU;
	volatile int32_t x410 = -33755473;
	int32_t x411 = 193;
	static int32_t x412 = 2866026;
	volatile uint64_t t102 = 52110306LLU;

    t102 = ((x409&(x410!=x411))^x412);

    if (t102 != 2866027LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x413 = UINT32_MAX;
	volatile int64_t x414 = 8875687627374LL;
	int8_t x415 = INT8_MIN;
	volatile uint32_t x416 = 59U;

    t103 = ((x413&(x414!=x415))^x416);

    if (t103 != 58U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = INT8_MIN;
	int8_t x418 = INT8_MIN;
	volatile int32_t x419 = INT32_MIN;
	int16_t x420 = INT16_MIN;

    t104 = ((x417&(x418!=x419))^x420);

    if (t104 != -32768) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = 4668859062LLU;
	int32_t x422 = 205385888;
	int8_t x423 = -1;
	int64_t x424 = INT64_MAX;
	volatile uint64_t t105 = 12712393LLU;

    t105 = ((x421&(x422!=x423))^x424);

    if (t105 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x425 = 32479U;
	volatile int16_t x427 = -592;
	int64_t x428 = INT64_MIN;
	int64_t t106 = 1900583268LL;

    t106 = ((x425&(x426!=x427))^x428);

    if (t106 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = 11;
	int16_t x430 = INT16_MIN;
	int64_t x431 = INT64_MIN;
	uint32_t x432 = 12350U;

    t107 = ((x429&(x430!=x431))^x432);

    if (t107 != 12351U) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MIN;
	int16_t x434 = INT16_MAX;
	int16_t x435 = -1;
	int8_t x436 = INT8_MIN;
	int32_t t108 = -27;

    t108 = ((x433&(x434!=x435))^x436);

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = -1520032;
	int32_t x438 = INT32_MIN;
	uint8_t x440 = 21U;

    t109 = ((x437&(x438!=x439))^x440);

    if (t109 != 21) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x441 = INT64_MIN;
	int64_t x442 = -1LL;
	volatile int64_t x443 = -1LL;
	int64_t x444 = 282689LL;
	volatile int64_t t110 = -135907235LL;

    t110 = ((x441&(x442!=x443))^x444);

    if (t110 != 282689LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 13U;
	volatile int64_t x446 = INT64_MIN;
	volatile int64_t x447 = INT64_MIN;
	int16_t x448 = INT16_MAX;
	volatile uint32_t t111 = 8316459U;

    t111 = ((x445&(x446!=x447))^x448);

    if (t111 != 32767U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = -1LL;
	int8_t x450 = -15;
	uint64_t x452 = 8026LLU;
	volatile uint64_t t112 = 8535996216LLU;

    t112 = ((x449&(x450!=x451))^x452);

    if (t112 != 8027LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x453 = INT32_MIN;
	uint16_t x454 = 38U;
	static uint64_t x455 = 5176445764834224LLU;
	static volatile uint64_t x456 = 58823LLU;
	uint64_t t113 = 51732567952941958LLU;

    t113 = ((x453&(x454!=x455))^x456);

    if (t113 != 58823LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	volatile uint8_t x458 = 59U;
	static int64_t x459 = -1275LL;
	int64_t x460 = 32540168337LL;
	volatile int64_t t114 = 18LL;

    t114 = ((x457&(x458!=x459))^x460);

    if (t114 != 32540168337LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = -1;
	int8_t x464 = INT8_MIN;
	int32_t t115 = 1899212;

    t115 = ((x461&(x462!=x463))^x464);

    if (t115 != -127) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MIN;
	int32_t x466 = -1;
	volatile int16_t x468 = -1;

    t116 = ((x465&(x466!=x467))^x468);

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x470 = 6;
	int16_t x471 = 0;
	static int32_t x472 = 2694;
	volatile int64_t t117 = 600890442247525LL;

    t117 = ((x469&(x470!=x471))^x472);

    if (t117 != 2694LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 1022376LLU;
	uint32_t x475 = 100183603U;
	int64_t x476 = -3385LL;
	volatile uint64_t t118 = 0LLU;

    t118 = ((x473&(x474!=x475))^x476);

    if (t118 != 18446744073709548231LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = UINT16_MAX;
	int8_t x479 = -1;
	int32_t x480 = -1;
	volatile int32_t t119 = -12460;

    t119 = ((x477&(x478!=x479))^x480);

    if (t119 != -2) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x481 = 755U;
	int16_t x482 = -386;
	uint16_t x483 = 112U;
	int64_t x484 = INT64_MIN;

    t120 = ((x481&(x482!=x483))^x484);

    if (t120 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = 0;
	static uint64_t x486 = 15LLU;
	uint32_t x488 = 779U;
	uint32_t t121 = 10870U;

    t121 = ((x485&(x486!=x487))^x488);

    if (t121 != 779U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 257U;
	int32_t x490 = 1790;
	uint32_t x491 = UINT32_MAX;
	static int8_t x492 = 30;
	int32_t t122 = -21;

    t122 = ((x489&(x490!=x491))^x492);

    if (t122 != 31) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x493 = INT32_MIN;
	static int64_t x494 = INT64_MAX;
	uint32_t x495 = 1234551824U;
	static uint64_t x496 = UINT64_MAX;
	volatile uint64_t t123 = UINT64_MAX;

    t123 = ((x493&(x494!=x495))^x496);

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = UINT64_MAX;
	int32_t x498 = INT32_MAX;
	static uint64_t x500 = 739LLU;
	volatile uint64_t t124 = 19847987374820LLU;

    t124 = ((x497&(x498!=x499))^x500);

    if (t124 != 738LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = 21018428974618104LLU;
	uint32_t x502 = 11U;
	int16_t x504 = -1;
	uint64_t t125 = UINT64_MAX;

    t125 = ((x501&(x502!=x503))^x504);

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MIN;
	uint16_t x506 = 16U;
	int32_t x507 = -26302492;
	volatile int32_t t126 = 17042;

    t126 = ((x505&(x506!=x507))^x508);

    if (t126 != -32768) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x511 = 39172019U;
	int16_t x512 = INT16_MAX;
	volatile int32_t t127 = -232506985;

    t127 = ((x509&(x510!=x511))^x512);

    if (t127 != 32766) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = -117LL;
	int16_t x516 = -1;
	volatile int64_t t128 = -32286425889102LL;

    t128 = ((x513&(x514!=x515))^x516);

    if (t128 != -2LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	int16_t x518 = -1;
	static uint64_t x519 = 123175387LLU;
	int8_t x520 = -1;

    t129 = ((x517&(x518!=x519))^x520);

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = 32031958LLU;
	int64_t x522 = INT64_MAX;
	volatile int64_t x523 = -1LL;
	int16_t x524 = 108;
	uint64_t t130 = 6645073269LLU;

    t130 = ((x521&(x522!=x523))^x524);

    if (t130 != 108LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -1;
	static int8_t x526 = 57;
	int64_t x527 = 8549215494204LL;
	int32_t x528 = -691;
	int32_t t131 = 26;

    t131 = ((x525&(x526!=x527))^x528);

    if (t131 != -692) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = UINT16_MAX;
	int16_t x530 = INT16_MIN;
	static volatile int16_t x531 = 80;
	static volatile int32_t x532 = -1010;
	volatile int32_t t132 = -8325797;

    t132 = ((x529&(x530!=x531))^x532);

    if (t132 != -1009) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = 30U;
	uint8_t x534 = UINT8_MAX;
	static int8_t x536 = 3;
	volatile int32_t t133 = 216241122;

    t133 = ((x533&(x534!=x535))^x536);

    if (t133 != 3) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x537 = 20U;
	volatile int16_t x538 = INT16_MIN;
	int8_t x539 = 6;
	uint8_t x540 = 0U;
	volatile int32_t t134 = -44;

    t134 = ((x537&(x538!=x539))^x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x541 = 1528917LLU;
	volatile int8_t x542 = -3;
	uint8_t x543 = 2U;
	static int32_t x544 = -146;
	volatile uint64_t t135 = 32315LLU;

    t135 = ((x541&(x542!=x543))^x544);

    if (t135 != 18446744073709551471LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MIN;
	uint8_t x546 = 4U;
	int32_t x547 = -14751;
	int8_t x548 = INT8_MIN;

    t136 = ((x545&(x546!=x547))^x548);

    if (t136 != -128) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -1LL;
	int8_t x550 = -1;
	int64_t x551 = INT64_MAX;
	static uint64_t x552 = 814471774099LLU;
	uint64_t t137 = 53LLU;

    t137 = ((x549&(x550!=x551))^x552);

    if (t137 != 814471774098LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x553 = 7372U;
	uint32_t x556 = UINT32_MAX;
	volatile uint32_t t138 = UINT32_MAX;

    t138 = ((x553&(x554!=x555))^x556);

    if (t138 != UINT32_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x557 = -1;
	static volatile uint16_t x558 = 753U;
	int64_t x559 = 4289933559864LL;
	int32_t x560 = 6566;

    t139 = ((x557&(x558!=x559))^x560);

    if (t139 != 6567) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x562 = INT8_MIN;
	volatile int16_t x563 = INT16_MIN;
	static uint16_t x564 = 2498U;

    t140 = ((x561&(x562!=x563))^x564);

    if (t140 != 2498) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = 31;
	uint64_t x566 = 338375973096465LLU;
	uint64_t x567 = 4179963997501625025LLU;

    t141 = ((x565&(x566!=x567))^x568);

    if (t141 != 4388U) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -133400289678576577LL;
	static int32_t x570 = INT32_MAX;
	int8_t x571 = INT8_MAX;

    t142 = ((x569&(x570!=x571))^x572);

    if (t142 != -2LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x573 = INT16_MIN;
	int16_t x575 = INT16_MAX;
	int32_t t143 = 0;

    t143 = ((x573&(x574!=x575))^x576);

    if (t143 != 255) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x577 = UINT8_MAX;
	volatile int32_t x578 = INT32_MIN;
	static int8_t x579 = INT8_MIN;
	int32_t t144 = 1721;

    t144 = ((x577&(x578!=x579))^x580);

    if (t144 != 7) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x581 = -1;
	static int32_t x582 = -470510923;
	static int8_t x583 = 18;
	uint8_t x584 = 22U;
	int32_t t145 = -2264580;

    t145 = ((x581&(x582!=x583))^x584);

    if (t145 != 23) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MAX;
	int32_t x586 = INT32_MAX;
	int64_t x587 = -56729LL;
	int32_t x588 = -2;
	volatile int32_t t146 = 942;

    t146 = ((x585&(x586!=x587))^x588);

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x590 = 263203683556LL;
	volatile uint64_t x592 = 1567LLU;
	static volatile uint64_t t147 = 24084620LLU;

    t147 = ((x589&(x590!=x591))^x592);

    if (t147 != 1567LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MIN;
	int16_t x595 = INT16_MAX;
	uint64_t x596 = UINT64_MAX;
	uint64_t t148 = UINT64_MAX;

    t148 = ((x593&(x594!=x595))^x596);

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MIN;
	int16_t x598 = INT16_MAX;
	int32_t x599 = 12174;

    t149 = ((x597&(x598!=x599))^x600);

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int16_t x601 = INT16_MIN;
	int16_t x602 = INT16_MIN;
	uint16_t x603 = 20098U;
	int32_t x604 = -12341929;

    t150 = ((x601&(x602!=x603))^x604);

    if (t150 != -12341929) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x606 = 177079538U;
	int8_t x607 = -1;
	uint16_t x608 = UINT16_MAX;
	int32_t t151 = -6272;

    t151 = ((x605&(x606!=x607))^x608);

    if (t151 != 65534) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x612 = -1;
	int32_t t152 = 543704859;

    t152 = ((x609&(x610!=x611))^x612);

    if (t152 != -2) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = -18936747348309LL;
	volatile uint8_t x614 = 0U;
	int8_t x616 = INT8_MIN;
	int64_t t153 = 113548200LL;

    t153 = ((x613&(x614!=x615))^x616);

    if (t153 != -127LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x618 = UINT32_MAX;
	int16_t x619 = INT16_MIN;
	int8_t x620 = -16;
	int32_t t154 = 9;

    t154 = ((x617&(x618!=x619))^x620);

    if (t154 != -15) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = UINT64_MAX;
	int64_t x622 = -1LL;
	uint8_t x623 = UINT8_MAX;
	int64_t x624 = INT64_MIN;

    t155 = ((x621&(x622!=x623))^x624);

    if (t155 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x627 = 112;
	int64_t x628 = -1LL;
	volatile int64_t t156 = -6LL;

    t156 = ((x625&(x626!=x627))^x628);

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int16_t x629 = INT16_MIN;
	uint32_t x630 = 67049967U;
	static uint64_t x632 = 852930266238222452LLU;
	volatile uint64_t t157 = 4669241330LLU;

    t157 = ((x629&(x630!=x631))^x632);

    if (t157 != 852930266238222452LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 0U;
	volatile uint32_t x634 = 97085024U;
	static volatile int8_t x635 = INT8_MIN;
	uint32_t t158 = 1560U;

    t158 = ((x633&(x634!=x635))^x636);

    if (t158 != 4294967294U) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MIN;
	static int64_t x638 = INT64_MAX;
	int64_t x639 = 16407537896745LL;
	int32_t x640 = -34986978;
	int32_t t159 = -882441017;

    t159 = ((x637&(x638!=x639))^x640);

    if (t159 != -34986978) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = INT8_MAX;
	volatile int32_t x643 = INT32_MAX;
	int16_t x644 = 2001;
	int32_t t160 = -47710;

    t160 = ((x641&(x642!=x643))^x644);

    if (t160 != 2000) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = 13U;
	volatile uint16_t x646 = 1U;
	int16_t x648 = -1;
	volatile int32_t t161 = 117;

    t161 = ((x645&(x646!=x647))^x648);

    if (t161 != -2) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = 4;
	uint16_t x651 = 6U;
	volatile int64_t x652 = -1LL;
	int64_t t162 = -2LL;

    t162 = ((x649&(x650!=x651))^x652);

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = 65U;
	int32_t x655 = INT32_MAX;
	int8_t x656 = -4;
	int32_t t163 = -1;

    t163 = ((x653&(x654!=x655))^x656);

    if (t163 != -3) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x659 = -3;
	uint64_t x660 = 210509LLU;
	volatile uint64_t t164 = 2LLU;

    t164 = ((x657&(x658!=x659))^x660);

    if (t164 != 210508LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x661 = -3;
	static int8_t x662 = INT8_MAX;
	uint32_t x664 = 100877950U;
	uint32_t t165 = 176U;

    t165 = ((x661&(x662!=x663))^x664);

    if (t165 != 100877951U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = -1;
	int32_t x666 = INT32_MIN;
	static uint32_t x667 = 3506U;
	volatile int64_t t166 = -3594308637LL;

    t166 = ((x665&(x666!=x667))^x668);

    if (t166 != -38801LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x669 = UINT64_MAX;
	int64_t x670 = INT64_MAX;
	static volatile uint64_t t167 = 2051828576889860LLU;

    t167 = ((x669&(x670!=x671))^x672);

    if (t167 != 65534LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = 32014U;
	int8_t x674 = INT8_MAX;
	int32_t x675 = -13;
	int64_t x676 = INT64_MAX;
	static volatile int64_t t168 = INT64_MAX;

    t168 = ((x673&(x674!=x675))^x676);

    if (t168 != INT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x677 = UINT16_MAX;
	int8_t x679 = -43;
	int32_t x680 = -1;
	volatile int32_t t169 = 29;

    t169 = ((x677&(x678!=x679))^x680);

    if (t169 != -2) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	int16_t x682 = INT16_MAX;
	static uint32_t x683 = 26U;
	static int16_t x684 = INT16_MAX;
	int32_t t170 = -1870004;

    t170 = ((x681&(x682!=x683))^x684);

    if (t170 != 32767) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x685 = INT16_MIN;
	int8_t x687 = INT8_MIN;
	uint16_t x688 = 3U;
	volatile int32_t t171 = -58419;

    t171 = ((x685&(x686!=x687))^x688);

    if (t171 != 3) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 712160707404280553LLU;
	volatile int8_t x690 = -1;
	volatile int8_t x691 = -1;
	static uint32_t x692 = 7775248U;

    t172 = ((x689&(x690!=x691))^x692);

    if (t172 != 7775248LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x693 = UINT32_MAX;
	int16_t x694 = INT16_MIN;
	int64_t x695 = 17LL;
	uint8_t x696 = 7U;
	uint32_t t173 = 1U;

    t173 = ((x693&(x694!=x695))^x696);

    if (t173 != 6U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 0U;
	int64_t x698 = 2473LL;
	int32_t x699 = -1;
	volatile uint16_t x700 = UINT16_MAX;

    t174 = ((x697&(x698!=x699))^x700);

    if (t174 != 65535) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x701 = UINT8_MAX;
	volatile uint8_t x702 = UINT8_MAX;
	uint32_t x703 = 0U;
	int64_t x704 = INT64_MIN;
	int64_t t175 = -26223693799546LL;

    t175 = ((x701&(x702!=x703))^x704);

    if (t175 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x705 = INT64_MIN;
	volatile uint32_t x707 = 773846216U;
	int32_t x708 = INT32_MIN;

    t176 = ((x705&(x706!=x707))^x708);

    if (t176 != -2147483648LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x710 = UINT64_MAX;
	volatile int8_t x711 = INT8_MIN;
	static int16_t x712 = 0;

    t177 = ((x709&(x710!=x711))^x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x714 = 63U;
	static int64_t x715 = -590LL;
	static int8_t x716 = INT8_MIN;
	static int32_t t178 = 6996792;

    t178 = ((x713&(x714!=x715))^x716);

    if (t178 != -128) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x717 = -1;
	int64_t x719 = 7LL;
	int8_t x720 = 1;
	volatile int32_t t179 = 64;

    t179 = ((x717&(x718!=x719))^x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = UINT32_MAX;
	uint32_t x722 = 3288U;
	static int64_t x723 = INT64_MAX;
	uint8_t x724 = UINT8_MAX;
	volatile uint32_t t180 = 72104U;

    t180 = ((x721&(x722!=x723))^x724);

    if (t180 != 254U) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x725 = 27236U;
	static volatile uint16_t x726 = 1448U;
	uint16_t x728 = 15862U;

    t181 = ((x725&(x726!=x727))^x728);

    if (t181 != 15862) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = 1;
	uint64_t x730 = 4501357152841057904LLU;
	int16_t x731 = -1;
	volatile int64_t x732 = -1LL;
	static int64_t t182 = 3484LL;

    t182 = ((x729&(x730!=x731))^x732);

    if (t182 != -2LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint32_t x733 = 7711U;
	int64_t x734 = INT64_MAX;
	int8_t x735 = -1;
	static int64_t x736 = -375197796LL;

    t183 = ((x733&(x734!=x735))^x736);

    if (t183 != -375197795LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MIN;
	int64_t x738 = 18859731LL;
	int64_t x739 = INT64_MIN;
	uint64_t x740 = 513667680923LLU;

    t184 = ((x737&(x738!=x739))^x740);

    if (t184 != 513667680923LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MAX;
	uint16_t x742 = UINT16_MAX;
	int8_t x744 = INT8_MIN;
	int64_t t185 = 3305956844LL;

    t185 = ((x741&(x742!=x743))^x744);

    if (t185 != -127LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = 17101U;
	uint32_t x746 = UINT32_MAX;
	int64_t x747 = INT64_MIN;
	volatile int8_t x748 = 62;
	volatile int32_t t186 = -106308218;

    t186 = ((x745&(x746!=x747))^x748);

    if (t186 != 63) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x749 = -6;
	volatile int8_t x750 = -1;
	uint16_t x751 = 217U;
	int8_t x752 = INT8_MIN;
	int32_t t187 = 185182014;

    t187 = ((x749&(x750!=x751))^x752);

    if (t187 != -128) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = INT64_MIN;
	int16_t x754 = -11158;
	static uint8_t x756 = 17U;
	int64_t t188 = 1480877283925663LL;

    t188 = ((x753&(x754!=x755))^x756);

    if (t188 != 17LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x757 = -17570LL;
	uint8_t x758 = UINT8_MAX;
	volatile int8_t x759 = INT8_MIN;
	volatile uint8_t x760 = 15U;

    t189 = ((x757&(x758!=x759))^x760);

    if (t189 != 15LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x762 = INT64_MIN;
	static uint16_t x763 = 544U;
	int64_t x764 = -66306492364LL;
	volatile int64_t t190 = -1733582621429800LL;

    t190 = ((x761&(x762!=x763))^x764);

    if (t190 != -66306492363LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x768 = INT64_MAX;
	static int64_t t191 = 11404084671LL;

    t191 = ((x765&(x766!=x767))^x768);

    if (t191 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = 70U;
	int32_t x770 = -156032334;
	int8_t x771 = 3;
	static int16_t x772 = INT16_MIN;
	static volatile uint32_t t192 = 0U;

    t192 = ((x769&(x770!=x771))^x772);

    if (t192 != 4294934528U) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MAX;
	int16_t x774 = -1;
	volatile int32_t x775 = -25743637;
	uint8_t x776 = 4U;
	static int32_t t193 = -1672813;

    t193 = ((x773&(x774!=x775))^x776);

    if (t193 != 5) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MIN;
	int8_t x778 = INT8_MAX;
	int32_t x779 = 29699162;
	int32_t x780 = INT32_MAX;

    t194 = ((x777&(x778!=x779))^x780);

    if (t194 != 2147483647LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x781 = -1;
	int16_t x784 = INT16_MIN;
	volatile int32_t t195 = 155;

    t195 = ((x781&(x782!=x783))^x784);

    if (t195 != -32767) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x785 = 26U;
	volatile int16_t x786 = -1;
	volatile int16_t x787 = -1;
	int32_t x788 = -1;
	int32_t t196 = 15648502;

    t196 = ((x785&(x786!=x787))^x788);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = 0U;
	volatile int16_t x790 = INT16_MIN;
	volatile uint64_t x792 = 183942607104LLU;
	uint64_t t197 = 2574890253473662LLU;

    t197 = ((x789&(x790!=x791))^x792);

    if (t197 != 183942607104LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x794 = 27;
	uint64_t t198 = 806LLU;

    t198 = ((x793&(x794!=x795))^x796);

    if (t198 != 2147483646LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint32_t x797 = 1348U;
	static volatile int8_t x798 = INT8_MAX;
	int32_t x799 = -547176;
	int32_t x800 = INT32_MIN;
	static uint32_t t199 = 100U;

    t199 = ((x797&(x798!=x799))^x800);

    if (t199 != 2147483648U) { NG(); } else { ; }
	
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

