
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

int8_t x1 = -1;
int32_t t1 = 5;
volatile uint16_t x10 = UINT16_MAX;
volatile uint16_t x17 = 1555U;
static uint32_t x18 = 8972151U;
volatile uint64_t t4 = 25758LLU;
static uint64_t x26 = 53LLU;
uint32_t x31 = 1U;
volatile int32_t t6 = 2484;
static volatile int32_t x38 = 172249775;
uint8_t x43 = 3U;
int8_t x50 = INT8_MIN;
volatile int64_t x55 = INT64_MIN;
static int8_t x59 = 0;
int32_t x60 = INT32_MIN;
volatile int32_t t11 = -931424184;
volatile int16_t x64 = 1;
int32_t t12 = -18;
volatile uint32_t x74 = UINT32_MAX;
static int16_t x76 = INT16_MIN;
int64_t x80 = 5LL;
int64_t t15 = -761283771012LL;
volatile int16_t x85 = 7180;
volatile uint64_t x86 = 0LLU;
static volatile int16_t x87 = 4772;
static uint16_t x110 = 29U;
int16_t x114 = INT16_MAX;
int64_t x115 = INT64_MAX;
static volatile int32_t x119 = -1;
uint64_t t25 = 1474592398LLU;
int32_t x132 = INT32_MIN;
volatile uint64_t x137 = 16412537072641536LLU;
static int32_t x138 = INT32_MAX;
int32_t x139 = -1;
int8_t x140 = 13;
volatile int64_t x151 = INT64_MIN;
uint64_t t31 = 20555LLU;
volatile int64_t t32 = -12827221LL;
volatile int64_t x160 = INT64_MIN;
volatile int64_t t33 = INT64_MAX;
int8_t x161 = -1;
int8_t x164 = INT8_MAX;
int8_t x173 = INT8_MAX;
volatile int32_t t39 = -1340452;
int16_t x189 = INT16_MIN;
uint32_t t41 = 76U;
static volatile uint16_t x200 = 1U;
volatile int32_t t42 = 2;
static int16_t x207 = INT16_MAX;
uint8_t x210 = 126U;
volatile uint8_t x223 = 2U;
int64_t t46 = -543101998988884LL;
int16_t x225 = -1;
volatile int64_t t47 = 99636LL;
uint8_t x233 = 99U;
static volatile uint16_t x235 = 3820U;
int16_t x238 = -46;
static int64_t x239 = INT64_MIN;
static volatile int64_t t49 = 45821091327LL;
uint64_t x244 = UINT64_MAX;
int8_t x247 = INT8_MIN;
int32_t x249 = INT32_MAX;
volatile uint8_t x250 = 43U;
int8_t x252 = -1;
volatile int32_t t52 = -7361;
int64_t x256 = INT64_MIN;
int32_t t54 = INT32_MAX;
volatile int16_t x267 = -29;
int64_t t55 = 80766183012631LL;
volatile uint64_t t57 = 3644LLU;
uint8_t x277 = UINT8_MAX;
int64_t x280 = INT64_MIN;
volatile int64_t t58 = 333LL;
volatile int16_t x286 = 169;
volatile int64_t x294 = INT64_MIN;
uint32_t t62 = 1481657750U;
volatile int32_t x298 = -45866;
int64_t x299 = INT64_MIN;
uint8_t x307 = 5U;
int32_t x311 = INT32_MIN;
uint64_t x313 = 321LLU;
int32_t x322 = 240;
int16_t x328 = INT16_MIN;
static volatile int64_t t73 = 2113314208048613155LL;
int64_t x348 = -1013167LL;
volatile int32_t t75 = -106;
int32_t x358 = INT32_MIN;
uint16_t x364 = UINT16_MAX;
int8_t x365 = INT8_MIN;
static uint32_t x373 = UINT32_MAX;
uint32_t t80 = 5863U;
volatile int16_t x378 = 108;
static int8_t x381 = 1;
volatile int8_t x383 = INT8_MIN;
uint32_t x384 = UINT32_MAX;
volatile uint32_t x388 = 1380833U;
int8_t x393 = INT8_MAX;
volatile int8_t x400 = INT8_MIN;
uint32_t x419 = 9U;
int64_t x422 = -1LL;
uint64_t x423 = UINT64_MAX;
uint32_t x432 = 23635839U;
volatile uint32_t t92 = 121373386U;
uint32_t x435 = 14U;
int8_t x441 = INT8_MAX;
static uint8_t x442 = 65U;
static uint16_t x443 = 223U;
static uint16_t x444 = UINT16_MAX;
int32_t t94 = 17786676;
static int32_t x452 = -420;
static int32_t t96 = -55658;
int16_t x453 = 5;
uint64_t x454 = UINT64_MAX;
int16_t x456 = INT16_MAX;
volatile int64_t x459 = 18653775LL;
static int8_t x465 = 9;
int8_t x467 = -4;
uint64_t x469 = 144586499870LLU;
volatile int32_t t103 = -62000670;
volatile int32_t t104 = -40743;
static int32_t x500 = INT32_MAX;
int8_t x502 = -1;
int32_t x504 = INT32_MAX;
static int32_t x506 = INT32_MIN;
static volatile int32_t t109 = 856263;
static int16_t x513 = -1;
int32_t x514 = -3687034;
int32_t t112 = 9985404;
int64_t x530 = INT64_MIN;
uint32_t x532 = UINT32_MAX;
volatile uint32_t t113 = 91836283U;
int8_t x534 = INT8_MAX;
static uint8_t x535 = 9U;
int32_t x547 = -1;
int64_t x548 = -1LL;
int16_t x554 = INT16_MIN;
volatile uint64_t t118 = 251LLU;
static uint64_t x557 = 1445298LLU;
int8_t x558 = INT8_MIN;
volatile uint64_t t119 = 116363LLU;
uint64_t x567 = UINT64_MAX;
volatile int16_t x569 = -502;
volatile int32_t x571 = INT32_MIN;
volatile int64_t t123 = 135244LL;
static int64_t x577 = 1601394847587069LL;
int8_t x587 = 61;
int32_t t126 = 1;
uint32_t x600 = UINT32_MAX;
volatile int32_t x604 = INT32_MAX;
volatile int64_t x606 = INT64_MIN;
int64_t x607 = INT64_MAX;
static int32_t x614 = -1;
static volatile uint8_t x621 = 38U;
volatile uint64_t t135 = 0LLU;
static int32_t x635 = INT32_MIN;
uint64_t t137 = 388310LLU;
int16_t x655 = 476;
volatile int16_t x663 = INT16_MIN;
volatile int16_t x665 = INT16_MIN;
int16_t x672 = INT16_MAX;
volatile uint32_t t143 = 58U;
static uint8_t x687 = 15U;
int32_t x688 = -1;
int8_t x690 = -24;
volatile int8_t x692 = -1;
int8_t x693 = 56;
int8_t x700 = INT8_MIN;
volatile uint64_t t149 = 504811845LLU;
volatile int8_t x706 = 1;
volatile int32_t t151 = -7990033;
uint16_t x709 = UINT16_MAX;
int64_t x710 = -1830756198514LL;
volatile int64_t t152 = 85851175523189278LL;
int8_t x716 = 1;
int32_t t153 = -18686806;
int8_t x725 = INT8_MAX;
uint64_t x728 = 0LLU;
volatile int32_t t156 = 97713;
uint32_t t159 = 925644015U;
static int16_t x755 = INT16_MAX;
int8_t x757 = -1;
int64_t x761 = INT64_MAX;
volatile int64_t t162 = 220623872774LL;
int64_t x766 = -1LL;
int64_t x767 = INT64_MAX;
int16_t x768 = INT16_MIN;
volatile int8_t x772 = -1;
static volatile uint32_t x777 = 10561472U;
volatile int32_t x783 = 578;
int64_t x784 = -1LL;
int32_t x788 = INT32_MIN;
volatile int16_t x792 = INT16_MAX;
int64_t x803 = INT64_MAX;
int16_t x805 = -1;
uint16_t x806 = UINT16_MAX;
int64_t x810 = -76603857148LL;
int32_t x815 = 502448448;
volatile uint32_t x816 = 734U;
static uint32_t t173 = 2193636U;
volatile int64_t t174 = -66235174342819LL;
int8_t x828 = INT8_MIN;
int32_t t175 = 57;
static int64_t x836 = -1LL;
static uint8_t x845 = 39U;
uint16_t x846 = UINT16_MAX;
uint16_t x859 = 3U;
static uint64_t x860 = 77779704567653601LLU;
uint64_t t182 = 22832560488LLU;
volatile int32_t x868 = INT32_MIN;
volatile int32_t t183 = -133;
uint32_t t187 = 1635U;
static int64_t x890 = 104781060035LL;
static volatile int32_t x899 = INT32_MAX;
int64_t x900 = -929139921LL;
int32_t t192 = 0;
uint16_t x911 = UINT16_MAX;
volatile int32_t t196 = -83;
volatile uint64_t t197 = 0LLU;
volatile int64_t x934 = INT64_MAX;
int64_t x936 = -1LL;
int8_t x937 = INT8_MIN;
int16_t x938 = INT16_MIN;
int64_t t199 = -262574422058720LL;


void f0(void) {
    	uint64_t x2 = UINT64_MAX;
	uint32_t x3 = 55272U;
	int32_t x4 = INT32_MAX;
	static volatile int32_t t0 = -616342663;

    t0 = ((x1-(x2!=x3))^x4);

    if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	int8_t x6 = INT8_MAX;
	static int16_t x7 = INT16_MIN;
	static int16_t x8 = -1;

    t1 = ((x5-(x6!=x7))^x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = UINT64_MAX;
	static int64_t x11 = -11LL;
	int32_t x12 = -126737;
	volatile uint64_t t2 = 3209300821808465LLU;

    t2 = ((x9-(x10!=x11))^x12);

    if (t2 != 126737LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x19 = 7U;
	static int16_t x20 = INT16_MAX;
	volatile int32_t t3 = -561293;

    t3 = ((x17-(x18!=x19))^x20);

    if (t3 != 31213) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = 8LLU;
	uint8_t x22 = UINT8_MAX;
	uint8_t x23 = 6U;
	int64_t x24 = INT64_MIN;

    t4 = ((x21-(x22!=x23))^x24);

    if (t4 != 9223372036854775815LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = INT8_MAX;
	uint64_t x27 = UINT64_MAX;
	static int64_t x28 = 1024652936341LL;
	volatile int64_t t5 = 0LL;

    t5 = ((x25-(x26!=x27))^x28);

    if (t5 != 1024652936427LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = -1;
	int16_t x30 = -2139;
	int16_t x32 = -1;

    t6 = ((x29-(x30!=x31))^x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x37 = UINT64_MAX;
	static uint16_t x39 = 21U;
	int8_t x40 = INT8_MIN;
	static uint64_t t7 = 3510513501543LLU;

    t7 = ((x37-(x38!=x39))^x40);

    if (t7 != 126LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x41 = INT64_MIN;
	uint8_t x42 = 3U;
	int32_t x44 = -1;
	static volatile int64_t t8 = INT64_MAX;

    t8 = ((x41-(x42!=x43))^x44);

    if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x49 = UINT32_MAX;
	int16_t x51 = -1;
	static int16_t x52 = -1;
	uint32_t t9 = 134852329U;

    t9 = ((x49-(x50!=x51))^x52);

    if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x53 = -16;
	int32_t x54 = 1;
	uint32_t x56 = 1U;
	uint32_t t10 = 1526523071U;

    t10 = ((x53-(x54!=x55))^x56);

    if (t10 != 4294967278U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x57 = 78U;
	volatile uint64_t x58 = 18496821LLU;

    t11 = ((x57-(x58!=x59))^x60);

    if (t11 != -2147483571) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x61 = 2;
	uint16_t x62 = 11855U;
	static uint64_t x63 = UINT64_MAX;

    t12 = ((x61-(x62!=x63))^x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x65 = -1;
	int16_t x66 = INT16_MAX;
	uint64_t x67 = 1432465451LLU;
	int64_t x68 = INT64_MIN;
	volatile int64_t t13 = -5013877769LL;

    t13 = ((x65-(x66!=x67))^x68);

    if (t13 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x73 = INT16_MIN;
	static int8_t x75 = 0;
	volatile int32_t t14 = 564840;

    t14 = ((x73-(x74!=x75))^x76);

    if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x77 = -348583;
	static int16_t x78 = INT16_MIN;
	int64_t x79 = -935958436365LL;

    t15 = ((x77-(x78!=x79))^x80);

    if (t15 != -348579LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x81 = -1LL;
	volatile int64_t x82 = 10238784785627538LL;
	volatile int32_t x83 = 526988578;
	int64_t x84 = INT64_MIN;
	volatile int64_t t16 = -111625LL;

    t16 = ((x81-(x82!=x83))^x84);

    if (t16 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x88 = INT32_MIN;
	static int32_t t17 = -782;

    t17 = ((x85-(x86!=x87))^x88);

    if (t17 != -2147476469) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x89 = INT8_MIN;
	int64_t x90 = INT64_MIN;
	int8_t x91 = -1;
	volatile int16_t x92 = -1;
	volatile int32_t t18 = -14;

    t18 = ((x89-(x90!=x91))^x92);

    if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x97 = 43715398LL;
	volatile int16_t x98 = 33;
	int16_t x99 = 410;
	int64_t x100 = INT64_MIN;
	volatile int64_t t19 = -53084856354180LL;

    t19 = ((x97-(x98!=x99))^x100);

    if (t19 != -9223372036811060411LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x101 = INT16_MIN;
	int32_t x102 = -654335389;
	uint32_t x103 = UINT32_MAX;
	uint8_t x104 = 60U;
	static int32_t t20 = 593;

    t20 = ((x101-(x102!=x103))^x104);

    if (t20 != -32829) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x105 = UINT32_MAX;
	uint32_t x106 = 31398U;
	uint32_t x107 = UINT32_MAX;
	int8_t x108 = -1;
	volatile uint32_t t21 = 2U;

    t21 = ((x105-(x106!=x107))^x108);

    if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x109 = 56841912683238LLU;
	int32_t x111 = INT32_MAX;
	int16_t x112 = INT16_MIN;
	static volatile uint64_t t22 = 17664844335LLU;

    t22 = ((x109-(x110!=x111))^x112);

    if (t22 != 18446687231796841189LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x113 = -198;
	static volatile int16_t x116 = -1;
	static volatile int32_t t23 = 10779;

    t23 = ((x113-(x114!=x115))^x116);

    if (t23 != 198) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x117 = 63U;
	int32_t x118 = -1;
	volatile int64_t x120 = INT64_MAX;
	volatile int64_t t24 = -416125235259LL;

    t24 = ((x117-(x118!=x119))^x120);

    if (t24 != 9223372036854775744LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint64_t x121 = UINT64_MAX;
	int64_t x122 = 1771044278746579LL;
	static uint32_t x123 = 0U;
	int8_t x124 = INT8_MIN;

    t25 = ((x121-(x122!=x123))^x124);

    if (t25 != 126LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x129 = 9U;
	uint16_t x130 = UINT16_MAX;
	int16_t x131 = INT16_MIN;
	int32_t t26 = -9686;

    t26 = ((x129-(x130!=x131))^x132);

    if (t26 != -2147483640) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x133 = -1LL;
	int32_t x134 = INT32_MIN;
	int64_t x135 = 0LL;
	static uint8_t x136 = UINT8_MAX;
	int64_t t27 = 272335839268074023LL;

    t27 = ((x133-(x134!=x135))^x136);

    if (t27 != -255LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t t28 = 21963198176067743LLU;

    t28 = ((x137-(x138!=x139))^x140);

    if (t28 != 16412537072641522LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x141 = 162223U;
	uint16_t x142 = 30517U;
	static int8_t x143 = -1;
	uint64_t x144 = 238LLU;
	volatile uint64_t t29 = 16782833527LLU;

    t29 = ((x141-(x142!=x143))^x144);

    if (t29 != 162112LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x145 = INT64_MAX;
	int16_t x146 = -1;
	uint64_t x147 = 8855671LLU;
	int32_t x148 = INT32_MIN;
	volatile int64_t t30 = 2846LL;

    t30 = ((x145-(x146!=x147))^x148);

    if (t30 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint64_t x149 = UINT64_MAX;
	uint32_t x150 = 90955U;
	int8_t x152 = INT8_MIN;

    t31 = ((x149-(x150!=x151))^x152);

    if (t31 != 126LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x153 = INT64_MIN;
	volatile int32_t x154 = -1;
	volatile uint32_t x155 = UINT32_MAX;
	int8_t x156 = INT8_MAX;

    t32 = ((x153-(x154!=x155))^x156);

    if (t32 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x157 = 0U;
	uint64_t x158 = 459725416729035327LLU;
	int32_t x159 = -228049;

    t33 = ((x157-(x158!=x159))^x160);

    if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint16_t x162 = 151U;
	static volatile int64_t x163 = INT64_MIN;
	static int32_t t34 = -4046941;

    t34 = ((x161-(x162!=x163))^x164);

    if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x169 = -1;
	int16_t x170 = -1;
	static uint64_t x171 = 277449508388768LLU;
	static uint16_t x172 = UINT16_MAX;
	volatile int32_t t35 = 1;

    t35 = ((x169-(x170!=x171))^x172);

    if (t35 != -65535) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x174 = 1130421299LLU;
	uint32_t x175 = 1980522738U;
	int8_t x176 = INT8_MIN;
	volatile int32_t t36 = 3241;

    t36 = ((x173-(x174!=x175))^x176);

    if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x177 = INT16_MIN;
	static volatile int8_t x178 = 23;
	uint16_t x179 = 30749U;
	static int32_t x180 = INT32_MIN;
	int32_t t37 = 193709623;

    t37 = ((x177-(x178!=x179))^x180);

    if (t37 != 2147450879) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x181 = -1;
	volatile int8_t x182 = INT8_MAX;
	volatile uint32_t x183 = 75U;
	int16_t x184 = -1;
	int32_t t38 = -16061;

    t38 = ((x181-(x182!=x183))^x184);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x185 = 13421316;
	static volatile int64_t x186 = -1LL;
	int8_t x187 = 14;
	int32_t x188 = 13315464;

    t39 = ((x185-(x186!=x187))^x188);

    if (t39 != 517771) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x190 = -25;
	uint8_t x191 = 0U;
	int8_t x192 = -1;
	volatile int32_t t40 = 217282;

    t40 = ((x189-(x190!=x191))^x192);

    if (t40 != 32768) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x193 = INT16_MIN;
	int8_t x194 = INT8_MIN;
	uint8_t x195 = 119U;
	uint32_t x196 = 793962U;

    t41 = ((x193-(x194!=x195))^x196);

    if (t41 != 4294140565U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x197 = -44;
	uint32_t x198 = 10213916U;
	int8_t x199 = 0;

    t42 = ((x197-(x198!=x199))^x200);

    if (t42 != -46) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x201 = 111388999976749LLU;
	int64_t x202 = 19588LL;
	volatile int64_t x203 = -434LL;
	int64_t x204 = -115LL;
	volatile uint64_t t43 = 1955LLU;

    t43 = ((x201-(x202!=x203))^x204);

    if (t43 != 18446632684709574817LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x205 = UINT16_MAX;
	int32_t x206 = INT32_MAX;
	int16_t x208 = INT16_MIN;
	int32_t t44 = 627;

    t44 = ((x205-(x206!=x207))^x208);

    if (t44 != -32770) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x209 = INT32_MAX;
	int64_t x211 = 36042309912512239LL;
	int8_t x212 = 0;
	int32_t t45 = -5;

    t45 = ((x209-(x210!=x211))^x212);

    if (t45 != 2147483646) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x221 = -1LL;
	int16_t x222 = INT16_MAX;
	uint32_t x224 = UINT32_MAX;

    t46 = ((x221-(x222!=x223))^x224);

    if (t46 != -4294967295LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x226 = -1LL;
	int64_t x227 = 64096LL;
	int64_t x228 = INT64_MIN;

    t47 = ((x225-(x226!=x227))^x228);

    if (t47 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x234 = 245663U;
	volatile int64_t x236 = 30887LL;
	volatile int64_t t48 = -34154036671LL;

    t48 = ((x233-(x234!=x235))^x236);

    if (t48 != 30917LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x237 = -1;
	int64_t x240 = -1LL;

    t49 = ((x237-(x238!=x239))^x240);

    if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x241 = UINT64_MAX;
	volatile int8_t x242 = INT8_MIN;
	int64_t x243 = -1LL;
	volatile uint64_t t50 = 0LLU;

    t50 = ((x241-(x242!=x243))^x244);

    if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x245 = -99723119641LL;
	volatile int64_t x246 = INT64_MIN;
	uint8_t x248 = 1U;
	static int64_t t51 = 4LL;

    t51 = ((x245-(x246!=x247))^x248);

    if (t51 != -99723119641LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x251 = -1;

    t52 = ((x249-(x250!=x251))^x252);

    if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x253 = INT8_MIN;
	uint64_t x254 = 0LLU;
	static int8_t x255 = INT8_MIN;
	volatile int64_t t53 = -3351214452963792LL;

    t53 = ((x253-(x254!=x255))^x256);

    if (t53 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x257 = INT32_MAX;
	int64_t x258 = -1LL;
	volatile int8_t x259 = INT8_MAX;
	uint16_t x260 = 1U;

    t54 = ((x257-(x258!=x259))^x260);

    if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x265 = 1U;
	uint64_t x266 = 13193093962362LLU;
	int64_t x268 = 144401607975175489LL;

    t55 = ((x265-(x266!=x267))^x268);

    if (t55 != 144401607975175489LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x269 = INT16_MIN;
	volatile uint32_t x270 = UINT32_MAX;
	int32_t x271 = INT32_MIN;
	int64_t x272 = -1LL;
	static int64_t t56 = -363LL;

    t56 = ((x269-(x270!=x271))^x272);

    if (t56 != 32768LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x273 = UINT64_MAX;
	static int32_t x274 = INT32_MIN;
	static int64_t x275 = INT64_MIN;
	int32_t x276 = INT32_MIN;

    t57 = ((x273-(x274!=x275))^x276);

    if (t57 != 2147483646LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x278 = -1;
	uint16_t x279 = 53U;

    t58 = ((x277-(x278!=x279))^x280);

    if (t58 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x281 = 1329038314LL;
	uint64_t x282 = UINT64_MAX;
	static int64_t x283 = INT64_MIN;
	int16_t x284 = 14;
	volatile int64_t t59 = 3864820070093LL;

    t59 = ((x281-(x282!=x283))^x284);

    if (t59 != 1329038311LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x285 = 4U;
	volatile uint32_t x287 = UINT32_MAX;
	static int16_t x288 = INT16_MIN;
	int32_t t60 = -3507;

    t60 = ((x285-(x286!=x287))^x288);

    if (t60 != -32765) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x289 = INT8_MIN;
	volatile uint8_t x290 = 10U;
	uint32_t x291 = UINT32_MAX;
	uint64_t x292 = 2875486268LLU;
	uint64_t t61 = 128109798LLU;

    t61 = ((x289-(x290!=x291))^x292);

    if (t61 != 18446744070834065219LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x293 = UINT8_MAX;
	int32_t x295 = INT32_MIN;
	uint32_t x296 = UINT32_MAX;

    t62 = ((x293-(x294!=x295))^x296);

    if (t62 != 4294967041U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x297 = 7U;
	int16_t x300 = INT16_MIN;
	int32_t t63 = 95687;

    t63 = ((x297-(x298!=x299))^x300);

    if (t63 != -32762) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x301 = -1;
	volatile int64_t x302 = -14474627241887333LL;
	int8_t x303 = INT8_MIN;
	uint32_t x304 = 6U;
	uint32_t t64 = 123U;

    t64 = ((x301-(x302!=x303))^x304);

    if (t64 != 4294967288U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x305 = 32752U;
	uint16_t x306 = 16U;
	int32_t x308 = INT32_MIN;
	static volatile uint32_t t65 = 3U;

    t65 = ((x305-(x306!=x307))^x308);

    if (t65 != 2147516399U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x309 = UINT32_MAX;
	uint32_t x310 = 14735U;
	int16_t x312 = -1;
	uint32_t t66 = 466138U;

    t66 = ((x309-(x310!=x311))^x312);

    if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x314 = INT64_MAX;
	uint32_t x315 = 98878U;
	uint8_t x316 = UINT8_MAX;
	volatile uint64_t t67 = 17310346967928465LLU;

    t67 = ((x313-(x314!=x315))^x316);

    if (t67 != 447LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x317 = 248938947;
	int16_t x318 = -387;
	volatile int8_t x319 = INT8_MIN;
	int32_t x320 = INT32_MIN;
	int32_t t68 = 58206741;

    t68 = ((x317-(x318!=x319))^x320);

    if (t68 != -1898544702) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x321 = -1LL;
	int64_t x323 = -7616658LL;
	int32_t x324 = 2290666;
	int64_t t69 = 21766924725948177LL;

    t69 = ((x321-(x322!=x323))^x324);

    if (t69 != -2290668LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x325 = 113467618458LLU;
	uint8_t x326 = 0U;
	static uint32_t x327 = 24U;
	volatile uint64_t t70 = 7822595118844036LLU;

    t70 = ((x325-(x326!=x327))^x328);

    if (t70 != 18446743960241960089LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x329 = 1U;
	int32_t x330 = INT32_MAX;
	volatile int64_t x331 = 1421733420793815411LL;
	int8_t x332 = INT8_MAX;
	volatile int32_t t71 = 374662;

    t71 = ((x329-(x330!=x331))^x332);

    if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x333 = 5397529442785666LLU;
	uint8_t x334 = UINT8_MAX;
	volatile uint8_t x335 = 1U;
	int8_t x336 = INT8_MIN;
	uint64_t t72 = 9042024704427011LLU;

    t72 = ((x333-(x334!=x335))^x336);

    if (t72 != 18441346544266765825LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x341 = -3819185135836218LL;
	volatile int8_t x342 = INT8_MAX;
	uint32_t x343 = UINT32_MAX;
	int16_t x344 = 5919;

    t73 = ((x341-(x342!=x343))^x344);

    if (t73 != -3819185135831846LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x345 = 15;
	uint8_t x346 = 15U;
	int16_t x347 = 15;
	int64_t t74 = -104685507656819LL;

    t74 = ((x345-(x346!=x347))^x348);

    if (t74 != -1013154LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x349 = 0U;
	volatile uint64_t x350 = UINT64_MAX;
	int64_t x351 = INT64_MIN;
	volatile int32_t x352 = -1;

    t75 = ((x349-(x350!=x351))^x352);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x357 = INT64_MAX;
	uint8_t x359 = 102U;
	int32_t x360 = INT32_MIN;
	int64_t t76 = 217287517657389629LL;

    t76 = ((x357-(x358!=x359))^x360);

    if (t76 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x361 = UINT8_MAX;
	volatile uint16_t x362 = 15U;
	uint16_t x363 = UINT16_MAX;
	int32_t t77 = 376077;

    t77 = ((x361-(x362!=x363))^x364);

    if (t77 != 65281) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x366 = -56LL;
	static volatile int16_t x367 = INT16_MAX;
	uint16_t x368 = 50U;
	int32_t t78 = 7192;

    t78 = ((x365-(x366!=x367))^x368);

    if (t78 != -179) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x369 = 18U;
	static volatile int32_t x370 = -1;
	volatile uint16_t x371 = 1575U;
	volatile uint64_t x372 = 156138612LLU;
	volatile uint64_t t79 = 1493530LLU;

    t79 = ((x369-(x370!=x371))^x372);

    if (t79 != 156138597LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x374 = 153U;
	int16_t x375 = INT16_MIN;
	static volatile uint8_t x376 = 115U;

    t80 = ((x373-(x374!=x375))^x376);

    if (t80 != 4294967181U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x377 = INT32_MAX;
	static int32_t x379 = 6464;
	uint16_t x380 = 31U;
	int32_t t81 = -137659;

    t81 = ((x377-(x378!=x379))^x380);

    if (t81 != 2147483617) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x382 = 260656LLU;
	static uint32_t t82 = UINT32_MAX;

    t82 = ((x381-(x382!=x383))^x384);

    if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x385 = -43;
	volatile uint16_t x386 = 13236U;
	int32_t x387 = 15801;
	volatile uint32_t t83 = 1U;

    t83 = ((x385-(x386!=x387))^x388);

    if (t83 != 4293586485U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x389 = 13711;
	uint16_t x390 = UINT16_MAX;
	int8_t x391 = INT8_MAX;
	uint8_t x392 = 117U;
	volatile int32_t t84 = -6270;

    t84 = ((x389-(x390!=x391))^x392);

    if (t84 != 13819) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x394 = 3;
	int16_t x395 = -1673;
	int32_t x396 = -13852646;
	int32_t t85 = -219;

    t85 = ((x393-(x394!=x395))^x396);

    if (t85 != -13852572) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x397 = INT32_MAX;
	int64_t x398 = INT64_MIN;
	static uint16_t x399 = 756U;
	volatile int32_t t86 = 15901157;

    t86 = ((x397-(x398!=x399))^x400);

    if (t86 != -2147483522) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x401 = 1U;
	uint32_t x402 = 2U;
	static int64_t x403 = INT64_MIN;
	static int32_t x404 = 37973470;
	volatile int32_t t87 = 76760540;

    t87 = ((x401-(x402!=x403))^x404);

    if (t87 != 37973470) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x409 = 90128233U;
	int32_t x410 = INT32_MIN;
	int64_t x411 = INT64_MIN;
	int64_t x412 = 2428835266019LL;
	static int64_t t88 = -55593LL;

    t88 = ((x409-(x410!=x411))^x412);

    if (t88 != 2428879749771LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x417 = -147;
	int64_t x418 = INT64_MAX;
	static uint64_t x420 = UINT64_MAX;
	uint64_t t89 = 934266990LLU;

    t89 = ((x417-(x418!=x419))^x420);

    if (t89 != 147LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x421 = INT64_MIN;
	static int32_t x424 = INT32_MAX;
	volatile int64_t t90 = -558079147419591346LL;

    t90 = ((x421-(x422!=x423))^x424);

    if (t90 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x425 = UINT32_MAX;
	int16_t x426 = -1;
	int16_t x427 = INT16_MIN;
	volatile int32_t x428 = INT32_MAX;
	static uint32_t t91 = 9789U;

    t91 = ((x425-(x426!=x427))^x428);

    if (t91 != 2147483649U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x429 = 80U;
	static uint64_t x430 = UINT64_MAX;
	volatile uint64_t x431 = UINT64_MAX;

    t92 = ((x429-(x430!=x431))^x432);

    if (t92 != 23635759U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x433 = -1;
	volatile int32_t x434 = INT32_MAX;
	int16_t x436 = INT16_MAX;
	int32_t t93 = -651679112;

    t93 = ((x433-(x434!=x435))^x436);

    if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
    

    t94 = ((x441-(x442!=x443))^x444);

    if (t94 != 65409) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x445 = 1;
	int8_t x446 = INT8_MAX;
	int16_t x447 = INT16_MIN;
	static int16_t x448 = -1;
	int32_t t95 = -31211860;

    t95 = ((x445-(x446!=x447))^x448);

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x449 = INT32_MAX;
	uint32_t x450 = UINT32_MAX;
	int32_t x451 = INT32_MAX;

    t96 = ((x449-(x450!=x451))^x452);

    if (t96 != -2147483230) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x455 = 14U;
	static volatile int32_t t97 = -89526111;

    t97 = ((x453-(x454!=x455))^x456);

    if (t97 != 32763) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x457 = UINT16_MAX;
	uint8_t x458 = 19U;
	int16_t x460 = 9;
	volatile int32_t t98 = -1;

    t98 = ((x457-(x458!=x459))^x460);

    if (t98 != 65527) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x461 = 30804834411074LLU;
	static int16_t x462 = INT16_MIN;
	uint64_t x463 = 7097LLU;
	int8_t x464 = INT8_MIN;
	uint64_t t99 = 1670317LLU;

    t99 = ((x461-(x462!=x463))^x464);

    if (t99 != 18446713268875140545LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x466 = UINT64_MAX;
	volatile int8_t x468 = -25;
	volatile int32_t t100 = 2083;

    t100 = ((x465-(x466!=x467))^x468);

    if (t100 != -17) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x470 = 557406007506938LLU;
	int64_t x471 = INT64_MIN;
	int32_t x472 = INT32_MAX;
	static volatile uint64_t t101 = 11865612333LLU;

    t101 = ((x469-(x470!=x471))^x472);

    if (t101 != 145323792610LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x473 = 1778U;
	int8_t x474 = INT8_MIN;
	static uint16_t x475 = UINT16_MAX;
	volatile int16_t x476 = -1;
	static uint32_t t102 = 65103092U;

    t102 = ((x473-(x474!=x475))^x476);

    if (t102 != 4294965518U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x477 = INT16_MIN;
	static int16_t x478 = -16038;
	static int16_t x479 = INT16_MAX;
	int32_t x480 = INT32_MAX;

    t103 = ((x477-(x478!=x479))^x480);

    if (t103 != -2147450880) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x481 = INT32_MAX;
	int8_t x482 = INT8_MIN;
	static int32_t x483 = -1;
	int8_t x484 = INT8_MIN;

    t104 = ((x481-(x482!=x483))^x484);

    if (t104 != -2147483522) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x493 = UINT64_MAX;
	volatile uint16_t x494 = 232U;
	int32_t x495 = -1;
	uint64_t x496 = 635923463744LLU;
	static uint64_t t105 = 83132LLU;

    t105 = ((x493-(x494!=x495))^x496);

    if (t105 != 18446743437786087870LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x497 = UINT32_MAX;
	uint64_t x498 = 11057063LLU;
	static int8_t x499 = INT8_MIN;
	volatile uint32_t t106 = 18U;

    t106 = ((x497-(x498!=x499))^x500);

    if (t106 != 2147483649U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x501 = 3U;
	volatile uint16_t x503 = 12U;
	volatile uint32_t t107 = 445195389U;

    t107 = ((x501-(x502!=x503))^x504);

    if (t107 != 2147483645U) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x505 = UINT16_MAX;
	volatile int32_t x507 = INT32_MAX;
	volatile int64_t x508 = -211LL;
	int64_t t108 = 339LL;

    t108 = ((x505-(x506!=x507))^x508);

    if (t108 != -65325LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x509 = INT16_MAX;
	volatile uint32_t x510 = 6453164U;
	int32_t x511 = -23701;
	int16_t x512 = INT16_MIN;

    t109 = ((x509-(x510!=x511))^x512);

    if (t109 != -2) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x515 = INT16_MIN;
	volatile uint32_t x516 = 85957127U;
	volatile uint32_t t110 = 132968015U;

    t110 = ((x513-(x514!=x515))^x516);

    if (t110 != 4209010169U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x517 = UINT8_MAX;
	static uint64_t x518 = UINT64_MAX;
	uint64_t x519 = 8834244617713147052LLU;
	int64_t x520 = INT64_MIN;
	static volatile int64_t t111 = 847258472251LL;

    t111 = ((x517-(x518!=x519))^x520);

    if (t111 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x525 = 7U;
	volatile uint16_t x526 = UINT16_MAX;
	int16_t x527 = INT16_MIN;
	int32_t x528 = INT32_MIN;

    t112 = ((x525-(x526!=x527))^x528);

    if (t112 != -2147483642) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x529 = 186;
	static uint16_t x531 = 45U;

    t113 = ((x529-(x530!=x531))^x532);

    if (t113 != 4294967110U) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x533 = INT32_MAX;
	int16_t x536 = 150;
	int32_t t114 = -702011889;

    t114 = ((x533-(x534!=x535))^x536);

    if (t114 != 2147483496) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x541 = 5U;
	volatile int32_t x542 = -243;
	int64_t x543 = INT64_MIN;
	int64_t x544 = INT64_MIN;
	static volatile int64_t t115 = 5727510711804847LL;

    t115 = ((x541-(x542!=x543))^x544);

    if (t115 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x545 = 2193U;
	uint8_t x546 = 3U;
	int64_t t116 = 12059LL;

    t116 = ((x545-(x546!=x547))^x548);

    if (t116 != -2193LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x549 = 570583U;
	volatile int16_t x550 = INT16_MIN;
	uint16_t x551 = 3U;
	int32_t x552 = INT32_MIN;
	uint32_t t117 = 1260U;

    t117 = ((x549-(x550!=x551))^x552);

    if (t117 != 2148054230U) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x553 = 7U;
	volatile uint8_t x555 = UINT8_MAX;
	uint64_t x556 = 1109223LLU;

    t118 = ((x553-(x554!=x555))^x556);

    if (t118 != 1109217LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x559 = 131288718582283LL;
	volatile int64_t x560 = 314803714504213LL;

    t119 = ((x557-(x558!=x559))^x560);

    if (t119 != 314803713588132LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x561 = 36U;
	uint8_t x562 = UINT8_MAX;
	uint8_t x563 = 37U;
	static int16_t x564 = -1;
	int32_t t120 = -1726925;

    t120 = ((x561-(x562!=x563))^x564);

    if (t120 != -36) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x565 = 11U;
	int32_t x566 = INT32_MAX;
	static int64_t x568 = -2930393863380LL;
	volatile int64_t t121 = 2120040653208LL;

    t121 = ((x565-(x566!=x567))^x568);

    if (t121 != -2930393863386LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x570 = -3;
	int8_t x572 = INT8_MIN;
	int32_t t122 = 8895703;

    t122 = ((x569-(x570!=x571))^x572);

    if (t122 != 393) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x573 = -1;
	int8_t x574 = -51;
	static int64_t x575 = -1368011055LL;
	int64_t x576 = -1LL;

    t123 = ((x573-(x574!=x575))^x576);

    if (t123 != 1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x578 = 3;
	int32_t x579 = -8350;
	int32_t x580 = INT32_MIN;
	int64_t t124 = 882944048327419434LL;

    t124 = ((x577-(x578!=x579))^x580);

    if (t124 != -1601394477294852LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x581 = 5658U;
	int16_t x582 = -1;
	static int8_t x583 = INT8_MIN;
	static int32_t x584 = -1;
	volatile int32_t t125 = 22241;

    t125 = ((x581-(x582!=x583))^x584);

    if (t125 != -5658) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x585 = -12;
	int8_t x586 = 34;
	uint16_t x588 = UINT16_MAX;

    t126 = ((x585-(x586!=x587))^x588);

    if (t126 != -65524) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x593 = INT8_MAX;
	volatile int32_t x594 = INT32_MAX;
	int64_t x595 = INT64_MIN;
	static int8_t x596 = INT8_MIN;
	volatile int32_t t127 = -621;

    t127 = ((x593-(x594!=x595))^x596);

    if (t127 != -2) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x597 = -3;
	int8_t x598 = INT8_MAX;
	int64_t x599 = INT64_MIN;
	volatile uint32_t t128 = 2U;

    t128 = ((x597-(x598!=x599))^x600);

    if (t128 != 3U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x601 = 15378U;
	int8_t x602 = INT8_MIN;
	int8_t x603 = INT8_MIN;
	static volatile uint32_t t129 = 1054U;

    t129 = ((x601-(x602!=x603))^x604);

    if (t129 != 2147468269U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x605 = INT64_MAX;
	int8_t x608 = -1;
	volatile int64_t t130 = 39967269804853LL;

    t130 = ((x605-(x606!=x607))^x608);

    if (t130 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x609 = 2U;
	int32_t x610 = 7;
	static int16_t x611 = 1030;
	uint32_t x612 = 2091688U;
	static volatile uint32_t t131 = 5242U;

    t131 = ((x609-(x610!=x611))^x612);

    if (t131 != 2091689U) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x613 = 1U;
	int64_t x615 = INT64_MIN;
	int32_t x616 = 801522684;
	static volatile int32_t t132 = 1;

    t132 = ((x613-(x614!=x615))^x616);

    if (t132 != 801522684) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x617 = UINT16_MAX;
	volatile int32_t x618 = -1;
	static uint32_t x619 = 9462U;
	int32_t x620 = -1;
	volatile int32_t t133 = 14907;

    t133 = ((x617-(x618!=x619))^x620);

    if (t133 != -65535) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x622 = UINT16_MAX;
	int8_t x623 = INT8_MAX;
	static uint8_t x624 = 0U;
	static volatile int32_t t134 = -2130886;

    t134 = ((x621-(x622!=x623))^x624);

    if (t134 != 37) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x625 = 6456192221344222547LLU;
	int32_t x626 = -117;
	int16_t x627 = -1;
	int64_t x628 = 83609616192LL;

    t135 = ((x625-(x626!=x627))^x628);

    if (t135 != 6456192146492469778LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x633 = INT16_MIN;
	static volatile uint16_t x634 = 0U;
	int16_t x636 = INT16_MIN;
	int32_t t136 = 3582084;

    t136 = ((x633-(x634!=x635))^x636);

    if (t136 != 65535) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x637 = -1;
	int32_t x638 = INT32_MIN;
	int64_t x639 = INT64_MAX;
	static uint64_t x640 = UINT64_MAX;

    t137 = ((x637-(x638!=x639))^x640);

    if (t137 != 1LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x645 = 47288045562518LLU;
	volatile int32_t x646 = 623011;
	static volatile int8_t x647 = INT8_MAX;
	int16_t x648 = -1;
	static volatile uint64_t t138 = 204LLU;

    t138 = ((x645-(x646!=x647))^x648);

    if (t138 != 18446696785663989098LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x653 = -1;
	int8_t x654 = INT8_MAX;
	uint8_t x656 = 6U;
	volatile int32_t t139 = -3879;

    t139 = ((x653-(x654!=x655))^x656);

    if (t139 != -8) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x661 = 24U;
	int64_t x662 = -1LL;
	volatile uint8_t x664 = 0U;
	static int32_t t140 = 71;

    t140 = ((x661-(x662!=x663))^x664);

    if (t140 != 23) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x666 = INT16_MAX;
	uint32_t x667 = 486914U;
	static int64_t x668 = 34LL;
	static volatile int64_t t141 = -18060344344091LL;

    t141 = ((x665-(x666!=x667))^x668);

    if (t141 != -32803LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x669 = INT16_MIN;
	int32_t x670 = INT32_MIN;
	int32_t x671 = -1;
	int32_t t142 = 7;

    t142 = ((x669-(x670!=x671))^x672);

    if (t142 != -65536) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x673 = 897094U;
	static int16_t x674 = INT16_MIN;
	int64_t x675 = -30988LL;
	int16_t x676 = INT16_MIN;

    t143 = ((x673-(x674!=x675))^x676);

    if (t143 != 4294062149U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x677 = -1;
	volatile int64_t x678 = INT64_MAX;
	int32_t x679 = -1;
	static int32_t x680 = INT32_MIN;
	int32_t t144 = 28;

    t144 = ((x677-(x678!=x679))^x680);

    if (t144 != 2147483646) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x681 = -1039;
	int8_t x682 = INT8_MAX;
	volatile uint64_t x683 = 3637372LLU;
	uint16_t x684 = UINT16_MAX;
	volatile int32_t t145 = 327467;

    t145 = ((x681-(x682!=x683))^x684);

    if (t145 != -64497) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x685 = 3U;
	int64_t x686 = -6980LL;
	int32_t t146 = -719713441;

    t146 = ((x685-(x686!=x687))^x688);

    if (t146 != -3) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x689 = 103894669LLU;
	int16_t x691 = INT16_MIN;
	static volatile uint64_t t147 = 3193LLU;

    t147 = ((x689-(x690!=x691))^x692);

    if (t147 != 18446744073605656947LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x694 = INT8_MIN;
	int64_t x695 = 414514LL;
	int16_t x696 = -621;
	volatile int32_t t148 = 161;

    t148 = ((x693-(x694!=x695))^x696);

    if (t148 != -604) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x697 = 33801312207817463LLU;
	volatile int64_t x698 = 63800LL;
	int64_t x699 = INT64_MIN;

    t149 = ((x697-(x698!=x699))^x700);

    if (t149 != 18412942761501734262LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x701 = UINT32_MAX;
	int8_t x702 = -1;
	uint8_t x703 = UINT8_MAX;
	int64_t x704 = -1LL;
	volatile int64_t t150 = 1LL;

    t150 = ((x701-(x702!=x703))^x704);

    if (t150 != -4294967295LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x705 = 147U;
	static int8_t x707 = INT8_MAX;
	static int16_t x708 = INT16_MIN;

    t151 = ((x705-(x706!=x707))^x708);

    if (t151 != -32622) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x711 = INT8_MIN;
	int64_t x712 = 4289284329LL;

    t152 = ((x709-(x710!=x711))^x712);

    if (t152 != 4289312535LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x713 = UINT16_MAX;
	int32_t x714 = INT32_MIN;
	int64_t x715 = INT64_MIN;

    t153 = ((x713-(x714!=x715))^x716);

    if (t153 != 65535) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x721 = 27574U;
	static uint64_t x722 = UINT64_MAX;
	uint64_t x723 = 1126209090106607LLU;
	uint16_t x724 = 117U;
	volatile uint32_t t154 = 76U;

    t154 = ((x721-(x722!=x723))^x724);

    if (t154 != 27584U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x726 = UINT16_MAX;
	int8_t x727 = INT8_MIN;
	uint64_t t155 = 6414LLU;

    t155 = ((x725-(x726!=x727))^x728);

    if (t155 != 126LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x729 = 5U;
	int16_t x730 = -1;
	int16_t x731 = 2232;
	uint8_t x732 = 11U;

    t156 = ((x729-(x730!=x731))^x732);

    if (t156 != 15) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x741 = 3;
	int32_t x742 = -1;
	static int8_t x743 = -1;
	uint64_t x744 = UINT64_MAX;
	static uint64_t t157 = 10LLU;

    t157 = ((x741-(x742!=x743))^x744);

    if (t157 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x745 = -1;
	uint16_t x746 = 23U;
	uint16_t x747 = 1732U;
	static int8_t x748 = 0;
	volatile int32_t t158 = -18474;

    t158 = ((x745-(x746!=x747))^x748);

    if (t158 != -2) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x749 = 30U;
	uint16_t x750 = UINT16_MAX;
	int8_t x751 = INT8_MAX;
	volatile int8_t x752 = -1;

    t159 = ((x749-(x750!=x751))^x752);

    if (t159 != 4294967266U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x753 = 26558120034323LLU;
	volatile int64_t x754 = INT64_MIN;
	volatile int32_t x756 = -1;
	volatile uint64_t t160 = 87193927LLU;

    t160 = ((x753-(x754!=x755))^x756);

    if (t160 != 18446717515589517293LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x758 = 916862315477552LLU;
	static int32_t x759 = INT32_MIN;
	uint32_t x760 = 1U;
	uint32_t t161 = UINT32_MAX;

    t161 = ((x757-(x758!=x759))^x760);

    if (t161 != UINT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x762 = INT16_MAX;
	int16_t x763 = -3312;
	int32_t x764 = INT32_MIN;

    t162 = ((x761-(x762!=x763))^x764);

    if (t162 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x765 = 0U;
	volatile uint32_t t163 = 911U;

    t163 = ((x765-(x766!=x767))^x768);

    if (t163 != 32767U) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x769 = -38772719;
	volatile int16_t x770 = INT16_MIN;
	static int32_t x771 = INT32_MIN;
	static volatile int32_t t164 = -2899;

    t164 = ((x769-(x770!=x771))^x772);

    if (t164 != 38772719) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x778 = INT8_MIN;
	static int16_t x779 = -3;
	static volatile uint64_t x780 = 14103075LLU;
	volatile uint64_t t165 = 3350170LLU;

    t165 = ((x777-(x778!=x779))^x780);

    if (t165 != 7738780LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x781 = -1;
	int16_t x782 = 1512;
	int64_t t166 = -29550045690LL;

    t166 = ((x781-(x782!=x783))^x784);

    if (t166 != 1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x785 = INT16_MAX;
	static volatile int8_t x786 = -1;
	volatile int16_t x787 = -1;
	int32_t t167 = -2;

    t167 = ((x785-(x786!=x787))^x788);

    if (t167 != -2147450881) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x789 = 104993U;
	static int32_t x790 = -1;
	static int32_t x791 = -1;
	volatile uint32_t t168 = 21U;

    t168 = ((x789-(x790!=x791))^x792);

    if (t168 != 124382U) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x797 = 153482027459227LLU;
	uint32_t x798 = 3203242U;
	int16_t x799 = INT16_MIN;
	static int8_t x800 = INT8_MIN;
	uint64_t t169 = 39636822975404096LLU;

    t169 = ((x797-(x798!=x799))^x800);

    if (t169 != 18446590591682092314LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x801 = INT8_MIN;
	volatile uint32_t x802 = 7U;
	int8_t x804 = -1;
	volatile int32_t t170 = 1764986;

    t170 = ((x801-(x802!=x803))^x804);

    if (t170 != 128) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x807 = INT32_MIN;
	static uint16_t x808 = UINT16_MAX;
	volatile int32_t t171 = -7532;

    t171 = ((x805-(x806!=x807))^x808);

    if (t171 != -65535) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x809 = 7LLU;
	int16_t x811 = -1;
	static int64_t x812 = -1LL;
	uint64_t t172 = 146451898260796642LLU;

    t172 = ((x809-(x810!=x811))^x812);

    if (t172 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x813 = 392U;
	int8_t x814 = -1;

    t173 = ((x813-(x814!=x815))^x816);

    if (t173 != 857U) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x817 = -1LL;
	static int8_t x818 = INT8_MIN;
	int64_t x819 = INT64_MIN;
	int16_t x820 = INT16_MIN;

    t174 = ((x817-(x818!=x819))^x820);

    if (t174 != 32766LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x825 = INT8_MIN;
	int8_t x826 = INT8_MIN;
	volatile int8_t x827 = -13;

    t175 = ((x825-(x826!=x827))^x828);

    if (t175 != 255) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x829 = 247689LLU;
	static int16_t x830 = INT16_MIN;
	uint16_t x831 = 97U;
	uint32_t x832 = 175U;
	uint64_t t176 = 10188795035768LLU;

    t176 = ((x829-(x830!=x831))^x832);

    if (t176 != 247591LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x833 = 2U;
	uint16_t x834 = 73U;
	int64_t x835 = -2LL;
	static int64_t t177 = -319369983691960LL;

    t177 = ((x833-(x834!=x835))^x836);

    if (t177 != -2LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x837 = UINT8_MAX;
	uint16_t x838 = 13U;
	int64_t x839 = INT64_MIN;
	uint32_t x840 = 147491003U;
	volatile uint32_t t178 = 39667U;

    t178 = ((x837-(x838!=x839))^x840);

    if (t178 != 147490885U) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x847 = 7567LLU;
	int32_t x848 = INT32_MIN;
	volatile int32_t t179 = -172720181;

    t179 = ((x845-(x846!=x847))^x848);

    if (t179 != -2147483610) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x849 = INT16_MIN;
	volatile int8_t x850 = 0;
	int32_t x851 = 137765;
	static int64_t x852 = 82839339LL;
	int64_t t180 = 64092734203LL;

    t180 = ((x849-(x850!=x851))^x852);

    if (t180 != -82872108LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x853 = INT8_MIN;
	int8_t x854 = -1;
	int8_t x855 = 1;
	uint64_t x856 = 41965542112LLU;
	static uint64_t t181 = 17LLU;

    t181 = ((x853-(x854!=x855))^x856);

    if (t181 != 18446744031744009631LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x857 = -4;
	volatile int32_t x858 = INT32_MAX;

    t182 = ((x857-(x858!=x859))^x860);

    if (t182 != 18368964369141898010LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x865 = INT32_MAX;
	volatile int8_t x866 = 0;
	static int64_t x867 = 196LL;

    t183 = ((x865-(x866!=x867))^x868);

    if (t183 != -2) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x869 = INT8_MAX;
	int8_t x870 = INT8_MAX;
	static uint8_t x871 = 3U;
	int32_t x872 = INT32_MIN;
	volatile int32_t t184 = -26738;

    t184 = ((x869-(x870!=x871))^x872);

    if (t184 != -2147483522) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x873 = -25297758LL;
	int64_t x874 = INT64_MIN;
	static uint64_t x875 = 34LLU;
	int8_t x876 = 6;
	volatile int64_t t185 = -231770548104362LL;

    t185 = ((x873-(x874!=x875))^x876);

    if (t185 != -25297753LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x877 = INT32_MAX;
	int16_t x878 = 36;
	int16_t x879 = -1;
	uint16_t x880 = 243U;
	static int32_t t186 = -3907;

    t186 = ((x877-(x878!=x879))^x880);

    if (t186 != 2147483405) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x881 = INT16_MIN;
	volatile int8_t x882 = INT8_MIN;
	int64_t x883 = INT64_MIN;
	uint32_t x884 = UINT32_MAX;

    t187 = ((x881-(x882!=x883))^x884);

    if (t187 != 32768U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x885 = -1;
	volatile int8_t x886 = INT8_MIN;
	static uint32_t x887 = 4727U;
	volatile int16_t x888 = -1;
	volatile int32_t t188 = -41;

    t188 = ((x885-(x886!=x887))^x888);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x889 = -1;
	int64_t x891 = INT64_MIN;
	int8_t x892 = INT8_MIN;
	volatile int32_t t189 = 55179;

    t189 = ((x889-(x890!=x891))^x892);

    if (t189 != 126) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x897 = INT64_MIN;
	int32_t x898 = INT32_MAX;
	int64_t t190 = 721462LL;

    t190 = ((x897-(x898!=x899))^x900);

    if (t190 != 9223372035925635887LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x901 = INT8_MAX;
	uint16_t x902 = 6132U;
	int64_t x903 = INT64_MIN;
	uint64_t x904 = 704819828404229LLU;
	volatile uint64_t t191 = 3729LLU;

    t191 = ((x901-(x902!=x903))^x904);

    if (t191 != 704819828404347LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x905 = 73U;
	static volatile int64_t x906 = INT64_MIN;
	int64_t x907 = -754840LL;
	volatile int32_t x908 = INT32_MAX;

    t192 = ((x905-(x906!=x907))^x908);

    if (t192 != 2147483575) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int64_t x909 = 1231LL;
	static volatile int8_t x910 = INT8_MAX;
	volatile int32_t x912 = -309428350;
	static int64_t t193 = -31785373275526LL;

    t193 = ((x909-(x910!=x911))^x912);

    if (t193 != -309429428LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x913 = -15;
	int16_t x914 = INT16_MIN;
	int32_t x915 = INT32_MIN;
	int32_t x916 = INT32_MIN;
	int32_t t194 = 3685706;

    t194 = ((x913-(x914!=x915))^x916);

    if (t194 != 2147483632) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x921 = INT8_MAX;
	int8_t x922 = 3;
	static uint8_t x923 = 1U;
	volatile uint16_t x924 = 3742U;
	volatile int32_t t195 = 126;

    t195 = ((x921-(x922!=x923))^x924);

    if (t195 != 3808) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x925 = 15;
	int16_t x926 = -1;
	int32_t x927 = INT32_MAX;
	static int8_t x928 = INT8_MIN;

    t196 = ((x925-(x926!=x927))^x928);

    if (t196 != -114) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x929 = 0;
	int16_t x930 = INT16_MIN;
	int64_t x931 = -3036235LL;
	uint64_t x932 = UINT64_MAX;

    t197 = ((x929-(x930!=x931))^x932);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x933 = INT64_MAX;
	uint64_t x935 = 79790LLU;
	int64_t t198 = -170LL;

    t198 = ((x933-(x934!=x935))^x936);

    if (t198 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x939 = 2U;
	int64_t x940 = 5753LL;

    t199 = ((x937-(x938!=x939))^x940);

    if (t199 != -5882LL) { NG(); } else { ; }
	
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

