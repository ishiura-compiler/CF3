
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
uint32_t x2 = UINT32_MAX;
int64_t x4 = INT64_MIN;
volatile int32_t x12 = -1665215;
volatile int64_t x14 = -1LL;
static volatile int64_t t3 = -2031033941879961LL;
int32_t t4 = 2327;
uint32_t x27 = 4502U;
uint8_t x32 = 10U;
volatile int16_t x43 = INT16_MAX;
int8_t x45 = INT8_MIN;
int16_t x47 = INT16_MIN;
uint8_t x48 = 4U;
uint32_t x49 = 390U;
uint64_t x50 = UINT64_MAX;
volatile uint64_t t9 = 342LLU;
int16_t x59 = -1;
uint8_t x78 = UINT8_MAX;
int32_t t17 = 102592933;
uint16_t x90 = 16U;
static uint64_t t18 = 844LLU;
static int16_t x95 = INT16_MIN;
volatile uint32_t t20 = 1137386392U;
volatile int8_t x105 = -6;
static int64_t x112 = INT64_MAX;
int64_t t22 = 16348034075LL;
uint8_t x121 = 11U;
uint16_t x123 = UINT16_MAX;
int64_t x127 = 21721868501106LL;
uint8_t x128 = UINT8_MAX;
volatile uint32_t x130 = 153124U;
static volatile int64_t t26 = 31775LL;
int64_t x135 = INT64_MIN;
int16_t x139 = INT16_MIN;
volatile uint8_t x142 = 18U;
static uint16_t x152 = 576U;
volatile int16_t x154 = -1778;
volatile uint64_t x155 = 727735LLU;
static uint32_t x158 = UINT32_MAX;
volatile int16_t x159 = 7943;
int64_t x160 = INT64_MIN;
uint16_t x162 = 520U;
static int16_t x181 = 5;
int64_t x196 = INT64_MIN;
int32_t x198 = INT32_MIN;
static uint8_t x201 = UINT8_MAX;
volatile int64_t t42 = -28289LL;
volatile int16_t x210 = -29;
int32_t x218 = 9446;
int32_t x232 = INT32_MIN;
static int64_t t48 = -40435510LL;
int8_t x234 = INT8_MIN;
static int64_t x235 = INT64_MAX;
int8_t x245 = INT8_MIN;
volatile uint64_t t52 = 4375082641422473667LLU;
volatile int32_t t53 = 258;
uint64_t x256 = 212816359LLU;
static volatile uint64_t t54 = 2713592724086607LLU;
volatile uint64_t x257 = 9LLU;
uint16_t x265 = UINT16_MAX;
volatile int8_t x267 = -1;
int64_t x270 = -4761LL;
volatile int32_t x274 = -1;
int16_t x277 = -1;
int8_t x279 = -1;
volatile int64_t t60 = INT64_MAX;
int8_t x281 = -1;
static uint16_t x286 = 251U;
static volatile int64_t x288 = INT64_MAX;
uint16_t x295 = UINT16_MAX;
int64_t x302 = INT64_MAX;
static uint8_t x307 = 115U;
int64_t t68 = 449675LL;
static uint8_t x317 = 102U;
static uint8_t x322 = 2U;
int16_t x323 = 1;
static int32_t x324 = INT32_MIN;
int64_t t71 = 150627435LL;
uint8_t x333 = UINT8_MAX;
volatile int16_t x342 = -1;
static uint16_t x350 = 224U;
static volatile int8_t x363 = INT8_MIN;
int16_t x364 = INT16_MIN;
int64_t x368 = INT64_MIN;
volatile uint32_t x369 = 13323U;
static int64_t x370 = 122LL;
uint16_t x384 = 48U;
static uint16_t x396 = 3U;
int32_t x401 = INT32_MIN;
static uint64_t x411 = UINT64_MAX;
volatile uint64_t t92 = 103523LLU;
int16_t x421 = INT16_MIN;
int64_t x425 = -1LL;
int64_t t96 = -449342505LL;
volatile uint64_t x434 = UINT64_MAX;
volatile uint16_t x437 = 2339U;
uint64_t x440 = 10157LLU;
static volatile uint64_t t98 = 488397129538349518LLU;
uint64_t x446 = UINT64_MAX;
uint8_t x449 = 43U;
volatile int32_t t101 = -4971;
volatile int8_t x454 = INT8_MIN;
static volatile int32_t t102 = -1;
uint8_t x464 = 30U;
volatile uint64_t t106 = 273058LLU;
volatile uint16_t x481 = UINT16_MAX;
volatile int32_t x483 = -10667265;
volatile int32_t x484 = INT32_MIN;
int32_t x492 = -1;
int8_t x497 = INT8_MAX;
static int16_t x498 = -1;
int32_t x506 = -37004864;
static uint16_t x507 = UINT16_MAX;
uint32_t x521 = UINT32_MAX;
volatile int16_t x522 = -3;
volatile int32_t x527 = INT32_MAX;
int32_t x537 = INT32_MAX;
int16_t x552 = INT16_MAX;
int64_t x553 = 2134364478976142LL;
volatile int8_t x563 = -3;
int8_t x565 = -1;
volatile int64_t t127 = -695363LL;
int64_t x572 = 17573101714762LL;
static volatile int64_t t128 = 826799333LL;
int8_t x575 = 0;
uint32_t t130 = 595315U;
int64_t x583 = INT64_MIN;
uint64_t x584 = 85156173580327LLU;
uint64_t x588 = 65776450535LLU;
static uint16_t x595 = 3U;
int32_t t135 = 28171261;
volatile int32_t t137 = 4678549;
int32_t x612 = INT32_MIN;
uint16_t x615 = 61U;
static volatile int64_t t140 = 2096576LL;
int64_t t141 = 88967440594013LL;
int64_t x631 = INT64_MIN;
int64_t t144 = 73084LL;
int32_t x653 = 503776;
static int32_t x656 = INT32_MAX;
int64_t x661 = 6079839072LL;
static int8_t x672 = INT8_MIN;
volatile int8_t x675 = INT8_MIN;
volatile uint32_t t152 = 25620U;
uint64_t x688 = 35686598424LLU;
uint64_t x697 = 2LLU;
uint32_t x698 = 0U;
int32_t x700 = 171;
int32_t t157 = 267026229;
volatile int32_t x707 = INT32_MAX;
uint32_t t158 = 3623U;
int16_t x712 = INT16_MAX;
int32_t x720 = INT32_MIN;
int16_t x727 = INT16_MAX;
volatile int32_t x730 = INT32_MIN;
int32_t t163 = 14;
volatile int64_t t165 = -3797770019LL;
uint8_t x754 = UINT8_MAX;
static uint8_t x755 = UINT8_MAX;
int8_t x760 = INT8_MAX;
volatile int32_t t169 = 16589995;
int8_t x768 = -1;
int16_t x771 = 22;
int8_t x773 = INT8_MAX;
int32_t x774 = 1;
uint32_t x783 = UINT32_MAX;
int32_t x787 = INT32_MIN;
int32_t x788 = INT32_MAX;
uint64_t x789 = UINT64_MAX;
uint8_t x792 = 87U;
static int64_t x794 = INT64_MIN;
volatile int64_t t178 = -1691742712LL;
int8_t x799 = INT8_MIN;
int64_t t181 = INT64_MIN;
uint8_t x811 = 1U;
int32_t t182 = -21529;
static uint64_t x815 = 17108946137182044LLU;
uint32_t x821 = UINT32_MAX;
int16_t x822 = -1;
volatile int8_t x826 = INT8_MAX;
int32_t x830 = 3;
volatile uint32_t t186 = 97U;
int8_t x833 = INT8_MAX;
int64_t x836 = 5535LL;
int64_t t187 = 1705882607LL;
int8_t x842 = 31;
static uint16_t x849 = 3135U;
uint32_t x853 = UINT32_MAX;
volatile uint64_t t192 = 12088LLU;
uint32_t x864 = 71737U;
uint64_t t194 = 39769151837882502LLU;
volatile uint64_t x872 = 17236517829168740LLU;
int8_t x874 = INT8_MAX;
uint64_t x882 = 151LLU;
int16_t x884 = INT16_MIN;
static volatile uint8_t x885 = UINT8_MAX;
int8_t x886 = 0;
uint32_t x887 = 3305938U;


void f0(void) {
    	int8_t x3 = INT8_MAX;
	static volatile int64_t t0 = 2172804378476186LL;

    t0 = ((x1-x2)&(x3&x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MAX;
	static int8_t x6 = INT8_MAX;
	static uint64_t x7 = UINT64_MAX;
	uint32_t x8 = 34U;
	uint64_t t1 = 130033298808846657LLU;

    t1 = ((x5-x6)&(x7&x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int16_t x10 = INT16_MIN;
	static uint32_t x11 = 124189U;
	static int64_t t2 = -75452546060142835LL;

    t2 = ((x9-x10)&(x11&x12));

    if (t2 != 32768LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	static volatile int32_t x15 = INT32_MAX;
	int64_t x16 = INT64_MIN;

    t3 = ((x13-x14)&(x15&x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = INT16_MIN;
	int32_t x22 = INT32_MIN;
	volatile int16_t x23 = -1;
	int8_t x24 = INT8_MIN;

    t4 = ((x21-x22)&(x23&x24));

    if (t4 != 2147450880) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x25 = UINT8_MAX;
	uint64_t x26 = 1886LLU;
	static int8_t x28 = INT8_MAX;
	volatile uint64_t t5 = 7280345LLU;

    t5 = ((x25-x26)&(x27&x28));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x29 = INT32_MIN;
	int32_t x30 = -26773534;
	int8_t x31 = 17;
	int32_t t6 = -1401;

    t6 = ((x29-x30)&(x31&x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x41 = -1;
	volatile uint32_t x42 = UINT32_MAX;
	static volatile int64_t x44 = INT64_MAX;
	volatile int64_t t7 = 339346968711191891LL;

    t7 = ((x41-x42)&(x43&x44));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x46 = -169542190338LL;
	volatile int64_t t8 = -131628861050556777LL;

    t8 = ((x45-x46)&(x47&x48));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x51 = INT16_MAX;
	static uint32_t x52 = UINT32_MAX;

    t9 = ((x49-x50)&(x51&x52));

    if (t9 != 391LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x53 = 1958;
	static volatile uint8_t x54 = UINT8_MAX;
	uint16_t x55 = UINT16_MAX;
	volatile int64_t x56 = 33566LL;
	volatile int64_t t10 = -3753470LL;

    t10 = ((x53-x54)&(x55&x56));

    if (t10 != 518LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x57 = UINT32_MAX;
	uint8_t x58 = 36U;
	volatile uint64_t x60 = 1663987607450LLU;
	volatile uint64_t t11 = 7LLU;

    t11 = ((x57-x58)&(x59&x60));

    if (t11 != 1835263898LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x61 = -1;
	static uint32_t x62 = UINT32_MAX;
	volatile uint32_t x63 = 864359646U;
	uint64_t x64 = UINT64_MAX;
	static uint64_t t12 = 85112516LLU;

    t12 = ((x61-x62)&(x63&x64));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x65 = INT32_MIN;
	static uint64_t x66 = 113983996LLU;
	int64_t x67 = INT64_MAX;
	uint32_t x68 = 353908809U;
	volatile uint64_t t13 = 307986325LLU;

    t13 = ((x65-x66)&(x67&x68));

    if (t13 != 286275584LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = 13809;
	static uint8_t x70 = 83U;
	static int32_t x71 = INT32_MAX;
	int64_t x72 = -1LL;
	int64_t t14 = -93548488LL;

    t14 = ((x69-x70)&(x71&x72));

    if (t14 != 13726LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x77 = 1732;
	int8_t x79 = -9;
	int32_t x80 = -1;
	volatile int32_t t15 = -43941732;

    t15 = ((x77-x78)&(x79&x80));

    if (t15 != 1477) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x81 = 1523U;
	int8_t x82 = 5;
	volatile int64_t x83 = 154LL;
	uint16_t x84 = 6U;
	int64_t t16 = 16235536391LL;

    t16 = ((x81-x82)&(x83&x84));

    if (t16 != 2LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x85 = -3499;
	int8_t x86 = -1;
	int16_t x87 = INT16_MIN;
	static int8_t x88 = 0;

    t17 = ((x85-x86)&(x87&x88));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x89 = 81788797301LLU;
	int8_t x91 = 11;
	static int64_t x92 = INT64_MAX;

    t18 = ((x89-x90)&(x91&x92));

    if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x93 = 181030;
	int32_t x94 = 198;
	uint32_t x96 = 2U;
	uint32_t t19 = 425U;

    t19 = ((x93-x94)&(x95&x96));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x101 = 68U;
	int16_t x102 = INT16_MIN;
	int16_t x103 = INT16_MAX;
	uint32_t x104 = UINT32_MAX;

    t20 = ((x101-x102)&(x103&x104));

    if (t20 != 68U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x106 = 3U;
	volatile int64_t x107 = INT64_MIN;
	int16_t x108 = INT16_MAX;
	int64_t t21 = -3216873LL;

    t21 = ((x105-x106)&(x107&x108));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x109 = -1536;
	int32_t x110 = -1;
	int16_t x111 = INT16_MAX;

    t22 = ((x109-x110)&(x111&x112));

    if (t22 != 31233LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x113 = -9189439LL;
	volatile int64_t x114 = INT64_MIN;
	uint8_t x115 = UINT8_MAX;
	int16_t x116 = 209;
	volatile int64_t t23 = 58453576LL;

    t23 = ((x113-x114)&(x115&x116));

    if (t23 != 193LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x122 = -1;
	int8_t x124 = -1;
	int32_t t24 = 992745045;

    t24 = ((x121-x122)&(x123&x124));

    if (t24 != 12) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x125 = INT8_MAX;
	int32_t x126 = -1;
	int64_t t25 = 28032312LL;

    t25 = ((x125-x126)&(x127&x128));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x129 = UINT32_MAX;
	int16_t x131 = INT16_MAX;
	int64_t x132 = -1LL;

    t26 = ((x129-x130)&(x131&x132));

    if (t26 != 10715LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x133 = -1LL;
	int16_t x134 = INT16_MIN;
	volatile int16_t x136 = -1;
	volatile int64_t t27 = 8310810LL;

    t27 = ((x133-x134)&(x135&x136));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x137 = -22;
	static int8_t x138 = -1;
	volatile int8_t x140 = -1;
	static volatile int32_t t28 = 13629515;

    t28 = ((x137-x138)&(x139&x140));

    if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x141 = 3125LLU;
	static uint8_t x143 = 16U;
	volatile int64_t x144 = INT64_MIN;
	uint64_t t29 = 499196000695599LLU;

    t29 = ((x141-x142)&(x143&x144));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x145 = INT32_MIN;
	int64_t x146 = -1LL;
	int16_t x147 = -1975;
	int8_t x148 = INT8_MIN;
	volatile int64_t t30 = 52511952LL;

    t30 = ((x145-x146)&(x147&x148));

    if (t30 != -2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x149 = 3837U;
	uint64_t x150 = UINT64_MAX;
	int32_t x151 = INT32_MIN;
	uint64_t t31 = 130667965LLU;

    t31 = ((x149-x150)&(x151&x152));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x153 = INT32_MIN;
	static int32_t x156 = -1;
	uint64_t t32 = 72267622082LLU;

    t32 = ((x153-x154)&(x155&x156));

    if (t32 != 690LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x157 = -1;
	volatile int64_t t33 = 4638114220340288LL;

    t33 = ((x157-x158)&(x159&x160));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x161 = UINT64_MAX;
	int16_t x163 = -12303;
	static int64_t x164 = INT64_MAX;
	static volatile uint64_t t34 = 12653042839LLU;

    t34 = ((x161-x162)&(x163&x164));

    if (t34 != 9223372036854762993LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x165 = 860LLU;
	uint16_t x166 = 8U;
	uint64_t x167 = UINT64_MAX;
	int16_t x168 = -1;
	uint64_t t35 = 464782290320370LLU;

    t35 = ((x165-x166)&(x167&x168));

    if (t35 != 852LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x169 = -310;
	uint8_t x170 = UINT8_MAX;
	int8_t x171 = INT8_MIN;
	int32_t x172 = -1;
	volatile int32_t t36 = 54;

    t36 = ((x169-x170)&(x171&x172));

    if (t36 != -640) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x173 = -6;
	volatile int32_t x174 = INT32_MIN;
	int16_t x175 = INT16_MAX;
	static uint32_t x176 = 1027886459U;
	volatile uint32_t t37 = 199U;

    t37 = ((x173-x174)&(x175&x176));

    if (t37 != 19834U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x177 = -1;
	volatile int32_t x178 = INT32_MIN;
	static volatile uint16_t x179 = UINT16_MAX;
	static int32_t x180 = 83883450;
	int32_t t38 = 0;

    t38 = ((x177-x178)&(x179&x180));

    if (t38 != 62906) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x182 = INT64_MAX;
	static int8_t x183 = INT8_MIN;
	int16_t x184 = -1;
	int64_t t39 = INT64_MIN;

    t39 = ((x181-x182)&(x183&x184));

    if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x193 = -3;
	static uint16_t x194 = 7U;
	int32_t x195 = 91227432;
	volatile int64_t t40 = -63760LL;

    t40 = ((x193-x194)&(x195&x196));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x197 = -568852741397344903LL;
	uint32_t x199 = 3359541U;
	volatile int64_t x200 = -1LL;
	static volatile int64_t t41 = -8173941LL;

    t41 = ((x197-x198)&(x199&x200));

    if (t41 != 65841LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x202 = -1;
	uint8_t x203 = 100U;
	int64_t x204 = INT64_MIN;

    t42 = ((x201-x202)&(x203&x204));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x205 = INT8_MIN;
	int16_t x206 = -1;
	int16_t x207 = -18;
	int64_t x208 = INT64_MIN;
	volatile int64_t t43 = INT64_MIN;

    t43 = ((x205-x206)&(x207&x208));

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x209 = 205;
	int8_t x211 = -1;
	int32_t x212 = INT32_MIN;
	static int32_t t44 = -33;

    t44 = ((x209-x210)&(x211&x212));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x213 = INT16_MAX;
	uint8_t x214 = UINT8_MAX;
	uint16_t x215 = 1U;
	int16_t x216 = INT16_MIN;
	volatile int32_t t45 = 873401;

    t45 = ((x213-x214)&(x215&x216));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x217 = INT8_MAX;
	int8_t x219 = INT8_MIN;
	uint8_t x220 = 0U;
	int32_t t46 = 3;

    t46 = ((x217-x218)&(x219&x220));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x221 = -1LL;
	int64_t x222 = INT64_MAX;
	int64_t x223 = INT64_MAX;
	volatile int16_t x224 = -7293;
	volatile int64_t t47 = 0LL;

    t47 = ((x221-x222)&(x223&x224));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x229 = INT64_MAX;
	int32_t x230 = INT32_MAX;
	volatile int64_t x231 = INT64_MAX;

    t48 = ((x229-x230)&(x231&x232));

    if (t48 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x233 = UINT32_MAX;
	int16_t x236 = -1;
	volatile int64_t t49 = -516190787285812446LL;

    t49 = ((x233-x234)&(x235&x236));

    if (t49 != 127LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x237 = -1;
	volatile uint8_t x238 = UINT8_MAX;
	uint16_t x239 = 36U;
	int64_t x240 = INT64_MIN;
	static volatile int64_t t50 = -108346LL;

    t50 = ((x237-x238)&(x239&x240));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x241 = INT8_MIN;
	static uint8_t x242 = 44U;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = UINT16_MAX;
	int32_t t51 = 1728;

    t51 = ((x241-x242)&(x243&x244));

    if (t51 != 32768) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x246 = -1LL;
	uint64_t x247 = UINT64_MAX;
	static uint16_t x248 = 149U;

    t52 = ((x245-x246)&(x247&x248));

    if (t52 != 129LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x249 = INT8_MIN;
	int16_t x250 = INT16_MIN;
	static int8_t x251 = -1;
	int16_t x252 = INT16_MIN;

    t53 = ((x249-x250)&(x251&x252));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x253 = 54639U;
	int16_t x254 = -98;
	int16_t x255 = INT16_MIN;

    t54 = ((x253-x254)&(x255&x256));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x258 = -1LL;
	uint8_t x259 = 0U;
	static int16_t x260 = -46;
	volatile uint64_t t55 = 577068593LLU;

    t55 = ((x257-x258)&(x259&x260));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x261 = 5828U;
	volatile uint64_t x262 = 5360066LLU;
	int16_t x263 = 2;
	int64_t x264 = INT64_MIN;
	static uint64_t t56 = 15154856761239996LLU;

    t56 = ((x261-x262)&(x263&x264));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x266 = UINT8_MAX;
	volatile uint8_t x268 = 8U;
	volatile int32_t t57 = 63339057;

    t57 = ((x265-x266)&(x267&x268));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x269 = 10331;
	volatile int8_t x271 = INT8_MIN;
	int64_t x272 = INT64_MAX;
	volatile int64_t t58 = 454658314061LL;

    t58 = ((x269-x270)&(x271&x272));

    if (t58 != 14976LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x273 = -3185;
	volatile int16_t x275 = 0;
	static int16_t x276 = -60;
	int32_t t59 = -1;

    t59 = ((x273-x274)&(x275&x276));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x278 = INT64_MIN;
	int32_t x280 = -1;

    t60 = ((x277-x278)&(x279&x280));

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x282 = 1;
	static volatile uint32_t x283 = 19687424U;
	int64_t x284 = INT64_MAX;
	int64_t t61 = 1621LL;

    t61 = ((x281-x282)&(x283&x284));

    if (t61 != 19687424LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x285 = INT16_MAX;
	int32_t x287 = INT32_MAX;
	static int64_t t62 = -8730439212288637LL;

    t62 = ((x285-x286)&(x287&x288));

    if (t62 != 32516LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x289 = 23524687330800638LL;
	int64_t x290 = -10LL;
	static volatile int16_t x291 = INT16_MIN;
	static volatile int32_t x292 = 1515246;
	volatile int64_t t63 = -974300623920161LL;

    t63 = ((x289-x290)&(x291&x292));

    if (t63 != 327680LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x293 = -1LL;
	int64_t x294 = 57044712044LL;
	int32_t x296 = INT32_MAX;
	volatile int64_t t64 = -1LL;

    t64 = ((x293-x294)&(x295&x296));

    if (t64 != 50579LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x297 = INT32_MIN;
	int32_t x298 = INT32_MIN;
	int16_t x299 = -2;
	int8_t x300 = -1;
	volatile int32_t t65 = -15120;

    t65 = ((x297-x298)&(x299&x300));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x301 = 11874;
	int8_t x303 = 28;
	static int32_t x304 = INT32_MIN;
	int64_t t66 = -372062223258LL;

    t66 = ((x301-x302)&(x303&x304));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x305 = INT64_MIN;
	static int32_t x306 = -1;
	int32_t x308 = INT32_MIN;
	volatile int64_t t67 = 0LL;

    t67 = ((x305-x306)&(x307&x308));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x309 = -1LL;
	volatile int8_t x310 = -1;
	static int8_t x311 = -1;
	int32_t x312 = 99644;

    t68 = ((x309-x310)&(x311&x312));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x313 = 58U;
	uint8_t x314 = UINT8_MAX;
	volatile uint8_t x315 = 1U;
	volatile int16_t x316 = INT16_MIN;
	int32_t t69 = -2;

    t69 = ((x313-x314)&(x315&x316));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x318 = 2525LLU;
	static int64_t x319 = -3806099142LL;
	static int16_t x320 = INT16_MIN;
	uint64_t t70 = 1LLU;

    t70 = ((x317-x318)&(x319&x320));

    if (t70 != 18446744069903450112LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x321 = INT64_MAX;

    t71 = ((x321-x322)&(x323&x324));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x325 = -1;
	static uint32_t x326 = 1763734474U;
	static volatile int8_t x327 = -2;
	volatile int32_t x328 = 1969;
	uint32_t t72 = 1779837604U;

    t72 = ((x325-x326)&(x327&x328));

    if (t72 != 1072U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x329 = UINT32_MAX;
	int64_t x330 = -1LL;
	volatile uint8_t x331 = UINT8_MAX;
	uint8_t x332 = UINT8_MAX;
	static volatile int64_t t73 = 24688947257544252LL;

    t73 = ((x329-x330)&(x331&x332));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x334 = 5U;
	int64_t x335 = INT64_MIN;
	int8_t x336 = INT8_MIN;
	static int64_t t74 = -864LL;

    t74 = ((x333-x334)&(x335&x336));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x337 = INT32_MIN;
	uint64_t x338 = 13017LLU;
	uint64_t x339 = 882805LLU;
	int32_t x340 = INT32_MIN;
	volatile uint64_t t75 = 2189895658327302LLU;

    t75 = ((x337-x338)&(x339&x340));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x341 = 1;
	uint64_t x343 = 435995596LLU;
	int64_t x344 = INT64_MIN;
	uint64_t t76 = 71364843832LLU;

    t76 = ((x341-x342)&(x343&x344));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x345 = 431793245U;
	int32_t x346 = INT32_MAX;
	uint16_t x347 = 1U;
	volatile int64_t x348 = INT64_MIN;
	static volatile int64_t t77 = -31129006144LL;

    t77 = ((x345-x346)&(x347&x348));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x349 = 31845U;
	int8_t x351 = INT8_MAX;
	static int32_t x352 = INT32_MAX;
	volatile uint32_t t78 = 284U;

    t78 = ((x349-x350)&(x351&x352));

    if (t78 != 5U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x353 = -1;
	static int64_t x354 = INT64_MAX;
	volatile int64_t x355 = -1LL;
	int64_t x356 = 682295854LL;
	static int64_t t79 = 32304061980LL;

    t79 = ((x353-x354)&(x355&x356));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x357 = UINT64_MAX;
	int64_t x358 = 124624555656143526LL;
	uint16_t x359 = 25U;
	volatile uint8_t x360 = 0U;
	volatile uint64_t t80 = 141365791294387607LLU;

    t80 = ((x357-x358)&(x359&x360));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x361 = -1;
	int16_t x362 = INT16_MAX;
	static int32_t t81 = 215192;

    t81 = ((x361-x362)&(x363&x364));

    if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x365 = 24;
	int64_t x366 = -66377826LL;
	int8_t x367 = -5;
	int64_t t82 = -225LL;

    t82 = ((x365-x366)&(x367&x368));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x371 = -452;
	int16_t x372 = 210;
	volatile int64_t t83 = -135885LL;

    t83 = ((x369-x370)&(x371&x372));

    if (t83 != 16LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x373 = INT64_MIN;
	static int32_t x374 = INT32_MIN;
	volatile uint16_t x375 = UINT16_MAX;
	int8_t x376 = INT8_MIN;
	volatile int64_t t84 = -7814LL;

    t84 = ((x373-x374)&(x375&x376));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x377 = INT16_MIN;
	int8_t x378 = 15;
	volatile uint8_t x379 = 2U;
	int64_t x380 = INT64_MIN;
	int64_t t85 = -44856109041052934LL;

    t85 = ((x377-x378)&(x379&x380));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x381 = -2;
	int64_t x382 = INT64_MIN;
	int32_t x383 = INT32_MIN;
	static volatile int64_t t86 = -3LL;

    t86 = ((x381-x382)&(x383&x384));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x385 = INT8_MIN;
	int8_t x386 = -1;
	volatile int64_t x387 = -16680796LL;
	volatile int32_t x388 = -4;
	static volatile int64_t t87 = 1918295083987LL;

    t87 = ((x385-x386)&(x387&x388));

    if (t87 != -16680832LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x393 = -26256826LL;
	static int16_t x394 = INT16_MIN;
	int8_t x395 = INT8_MAX;
	volatile int64_t t88 = 2630719LL;

    t88 = ((x393-x394)&(x395&x396));

    if (t88 != 2LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x397 = UINT64_MAX;
	uint32_t x398 = 2291130U;
	uint8_t x399 = 4U;
	int16_t x400 = INT16_MIN;
	uint64_t t89 = 16243372307635LLU;

    t89 = ((x397-x398)&(x399&x400));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x402 = 0U;
	int64_t x403 = INT64_MAX;
	volatile uint32_t x404 = 2073207671U;
	int64_t t90 = 0LL;

    t90 = ((x401-x402)&(x403&x404));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x405 = UINT32_MAX;
	static int32_t x406 = INT32_MIN;
	int32_t x407 = INT32_MIN;
	static int8_t x408 = -1;
	volatile uint32_t t91 = 5594U;

    t91 = ((x405-x406)&(x407&x408));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x409 = INT64_MAX;
	static uint16_t x410 = 15209U;
	int32_t x412 = -11;

    t92 = ((x409-x410)&(x411&x412));

    if (t92 != 9223372036854760596LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x413 = 1;
	uint64_t x414 = 413LLU;
	uint8_t x415 = 6U;
	static volatile uint16_t x416 = UINT16_MAX;
	volatile uint64_t t93 = 3237739459419LLU;

    t93 = ((x413-x414)&(x415&x416));

    if (t93 != 4LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x417 = UINT32_MAX;
	static int16_t x418 = -27;
	int8_t x419 = 2;
	int8_t x420 = INT8_MIN;
	uint32_t t94 = 2U;

    t94 = ((x417-x418)&(x419&x420));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x422 = INT16_MIN;
	volatile int8_t x423 = INT8_MIN;
	uint16_t x424 = 573U;
	int32_t t95 = 194074927;

    t95 = ((x421-x422)&(x423&x424));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x426 = 17U;
	uint16_t x427 = UINT16_MAX;
	uint16_t x428 = 1U;

    t96 = ((x425-x426)&(x427&x428));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint8_t x433 = 43U;
	int64_t x435 = INT64_MIN;
	int64_t x436 = INT64_MAX;
	volatile uint64_t t97 = 1663147004LLU;

    t97 = ((x433-x434)&(x435&x436));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x438 = -55;
	uint16_t x439 = 1U;

    t98 = ((x437-x438)&(x439&x440));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x441 = 89U;
	int64_t x442 = -23831071674492LL;
	int32_t x443 = INT32_MIN;
	uint8_t x444 = UINT8_MAX;
	int64_t t99 = -1101LL;

    t99 = ((x441-x442)&(x443&x444));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x445 = INT8_MIN;
	int32_t x447 = INT32_MIN;
	volatile int32_t x448 = INT32_MAX;
	volatile uint64_t t100 = 793149252LLU;

    t100 = ((x445-x446)&(x447&x448));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x450 = UINT16_MAX;
	uint16_t x451 = UINT16_MAX;
	int32_t x452 = -115530;

    t101 = ((x449-x450)&(x451&x452));

    if (t101 != 36) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x453 = 1523935;
	uint16_t x455 = 9U;
	volatile int16_t x456 = 1;

    t102 = ((x453-x454)&(x455&x456));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x457 = 28074126;
	volatile int16_t x458 = INT16_MAX;
	volatile int64_t x459 = -1LL;
	static int64_t x460 = -5868LL;
	int64_t t103 = 13029519668710LL;

    t103 = ((x457-x458)&(x459&x460));

    if (t103 != 28041220LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x461 = 2633;
	int64_t x462 = -1LL;
	static uint64_t x463 = 7591863LLU;
	volatile uint64_t t104 = 179978208683327052LLU;

    t104 = ((x461-x462)&(x463&x464));

    if (t104 != 2LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x465 = INT16_MIN;
	uint64_t x466 = 9832941902LLU;
	volatile int16_t x467 = -48;
	int8_t x468 = INT8_MIN;
	volatile uint64_t t105 = 1501681LLU;

    t105 = ((x465-x466)&(x467&x468));

    if (t105 != 18446744063876576896LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x469 = 3U;
	static uint32_t x470 = UINT32_MAX;
	uint64_t x471 = 418537155195509LLU;
	int16_t x472 = -5;

    t106 = ((x469-x470)&(x471&x472));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x473 = 2U;
	static uint8_t x474 = 11U;
	uint16_t x475 = 2689U;
	int64_t x476 = INT64_MAX;
	volatile int64_t t107 = 24770972LL;

    t107 = ((x473-x474)&(x475&x476));

    if (t107 != 2689LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x482 = -1;
	int32_t t108 = -2;

    t108 = ((x481-x482)&(x483&x484));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x485 = 784530LLU;
	volatile int16_t x486 = INT16_MIN;
	int32_t x487 = -37863;
	uint64_t x488 = 795143167113LLU;
	uint64_t t109 = 400LLU;

    t109 = ((x485-x486)&(x487&x488));

    if (t109 != 542720LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x489 = 515576U;
	uint64_t x490 = UINT64_MAX;
	static volatile int16_t x491 = 0;
	volatile uint64_t t110 = 50530LLU;

    t110 = ((x489-x490)&(x491&x492));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x493 = -1;
	static int64_t x494 = 1LL;
	static int32_t x495 = INT32_MIN;
	volatile uint64_t x496 = 1014272536218283884LLU;
	uint64_t t111 = 282384429514LLU;

    t111 = ((x493-x494)&(x495&x496));

    if (t111 != 1014272534293512192LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x499 = UINT8_MAX;
	uint8_t x500 = 3U;
	volatile int32_t t112 = -22;

    t112 = ((x497-x498)&(x499&x500));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x501 = -85315627510427724LL;
	volatile int64_t x502 = INT64_MIN;
	int32_t x503 = -1;
	volatile int64_t x504 = INT64_MAX;
	volatile int64_t t113 = 0LL;

    t113 = ((x501-x502)&(x503&x504));

    if (t113 != 9138056409344348084LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x505 = 3;
	int16_t x508 = -1;
	volatile int32_t t114 = -176486;

    t114 = ((x505-x506)&(x507&x508));

    if (t114 != 42563) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x509 = 15011U;
	static int8_t x510 = -1;
	int32_t x511 = INT32_MIN;
	int64_t x512 = -1LL;
	int64_t t115 = 4602225913508644339LL;

    t115 = ((x509-x510)&(x511&x512));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x517 = -1LL;
	static int32_t x518 = INT32_MIN;
	int8_t x519 = INT8_MAX;
	uint16_t x520 = 321U;
	int64_t t116 = -221944045466276LL;

    t116 = ((x517-x518)&(x519&x520));

    if (t116 != 65LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x523 = INT16_MAX;
	int8_t x524 = INT8_MAX;
	uint32_t t117 = 2117187941U;

    t117 = ((x521-x522)&(x523&x524));

    if (t117 != 2U) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x525 = 41U;
	volatile uint8_t x526 = UINT8_MAX;
	int16_t x528 = INT16_MIN;
	volatile int32_t t118 = 1;

    t118 = ((x525-x526)&(x527&x528));

    if (t118 != 2147450880) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x529 = -1LL;
	volatile uint32_t x530 = UINT32_MAX;
	volatile uint32_t x531 = UINT32_MAX;
	static uint16_t x532 = UINT16_MAX;
	volatile int64_t t119 = 9661724347482LL;

    t119 = ((x529-x530)&(x531&x532));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x538 = UINT8_MAX;
	static int32_t x539 = -1;
	static int32_t x540 = -93941587;
	volatile int32_t t120 = -127424;

    t120 = ((x537-x538)&(x539&x540));

    if (t120 != 2053541888) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x541 = -344;
	int8_t x542 = INT8_MAX;
	static uint8_t x543 = UINT8_MAX;
	static uint8_t x544 = 27U;
	static volatile int32_t t121 = -149231332;

    t121 = ((x541-x542)&(x543&x544));

    if (t121 != 9) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x545 = INT16_MAX;
	int8_t x546 = INT8_MIN;
	int8_t x547 = INT8_MIN;
	static volatile int64_t x548 = 11622845985999LL;
	volatile int64_t t122 = 637063989362LL;

    t122 = ((x545-x546)&(x547&x548));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x549 = 7U;
	int8_t x550 = -1;
	uint32_t x551 = 20U;
	volatile uint32_t t123 = 7957559U;

    t123 = ((x549-x550)&(x551&x552));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x554 = 114LL;
	int64_t x555 = -1LL;
	uint16_t x556 = UINT16_MAX;
	volatile int64_t t124 = 5194895966LL;

    t124 = ((x553-x554)&(x555&x556));

    if (t124 != 12316LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x557 = INT32_MAX;
	int16_t x558 = 451;
	uint64_t x559 = 114LLU;
	volatile uint16_t x560 = 13U;
	volatile uint64_t t125 = 20LLU;

    t125 = ((x557-x558)&(x559&x560));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x561 = 5;
	int8_t x562 = INT8_MIN;
	int32_t x564 = INT32_MIN;
	volatile int32_t t126 = 893;

    t126 = ((x561-x562)&(x563&x564));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x566 = 3U;
	int32_t x567 = 3750486;
	static int64_t x568 = -1LL;

    t127 = ((x565-x566)&(x567&x568));

    if (t127 != 3750484LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x569 = UINT32_MAX;
	int16_t x570 = -1;
	volatile int32_t x571 = INT32_MIN;

    t128 = ((x569-x570)&(x571&x572));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x573 = 33185430497LLU;
	uint16_t x574 = 3U;
	int32_t x576 = -1;
	uint64_t t129 = 603600281LLU;

    t129 = ((x573-x574)&(x575&x576));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x577 = 121219873U;
	int32_t x578 = -7;
	int32_t x579 = -1;
	static int8_t x580 = -1;

    t130 = ((x577-x578)&(x579&x580));

    if (t130 != 121219880U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x581 = INT16_MIN;
	int32_t x582 = INT32_MIN;
	static volatile uint64_t t131 = 5498397499203317889LLU;

    t131 = ((x581-x582)&(x583&x584));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x585 = 803018LLU;
	int8_t x586 = -2;
	int64_t x587 = -7404286612137LL;
	volatile uint64_t t132 = 59215270949282LLU;

    t132 = ((x585-x586)&(x587&x588));

    if (t132 != 16452LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x589 = -920;
	uint32_t x590 = UINT32_MAX;
	int64_t x591 = -1LL;
	uint16_t x592 = 65U;
	volatile int64_t t133 = -19603911LL;

    t133 = ((x589-x590)&(x591&x592));

    if (t133 != 65LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x593 = 26U;
	uint16_t x594 = 2U;
	uint8_t x596 = 3U;
	volatile int32_t t134 = 9590997;

    t134 = ((x593-x594)&(x595&x596));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x597 = 14589U;
	int16_t x598 = INT16_MIN;
	static int8_t x599 = 1;
	int32_t x600 = -962;

    t135 = ((x597-x598)&(x599&x600));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x601 = 345U;
	static int16_t x602 = -1;
	volatile uint8_t x603 = 49U;
	int32_t x604 = INT32_MAX;
	volatile int32_t t136 = -65460721;

    t136 = ((x601-x602)&(x603&x604));

    if (t136 != 16) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x605 = INT32_MAX;
	static uint16_t x606 = 3842U;
	volatile int8_t x607 = -3;
	int8_t x608 = INT8_MIN;

    t137 = ((x605-x606)&(x607&x608));

    if (t137 != 2147479680) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x609 = 131U;
	volatile uint8_t x610 = UINT8_MAX;
	int32_t x611 = INT32_MIN;
	static int32_t t138 = INT32_MIN;

    t138 = ((x609-x610)&(x611&x612));

    if (t138 != INT32_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x613 = INT32_MIN;
	int32_t x614 = INT32_MIN;
	int32_t x616 = INT32_MIN;
	volatile int32_t t139 = 1;

    t139 = ((x613-x614)&(x615&x616));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x621 = -1;
	int8_t x622 = -1;
	volatile uint8_t x623 = UINT8_MAX;
	int64_t x624 = INT64_MIN;

    t140 = ((x621-x622)&(x623&x624));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x625 = 2;
	int64_t x626 = -728916729089033LL;
	static int8_t x627 = -1;
	volatile uint32_t x628 = 443634316U;

    t141 = ((x625-x626)&(x627&x628));

    if (t141 != 36782088LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x629 = 17U;
	static int16_t x630 = INT16_MIN;
	volatile int64_t x632 = 907495330LL;
	volatile int64_t t142 = 3LL;

    t142 = ((x629-x630)&(x631&x632));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x637 = -7LL;
	int8_t x638 = INT8_MAX;
	int16_t x639 = INT16_MAX;
	volatile int16_t x640 = 0;
	int64_t t143 = 3LL;

    t143 = ((x637-x638)&(x639&x640));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x641 = 193620571;
	static uint16_t x642 = UINT16_MAX;
	int64_t x643 = INT64_MIN;
	int32_t x644 = INT32_MIN;

    t144 = ((x641-x642)&(x643&x644));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x649 = UINT16_MAX;
	int16_t x650 = -1;
	volatile int8_t x651 = INT8_MAX;
	volatile int32_t x652 = 0;
	static volatile int32_t t145 = -7;

    t145 = ((x649-x650)&(x651&x652));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x654 = INT8_MIN;
	uint8_t x655 = UINT8_MAX;
	int32_t t146 = 974509495;

    t146 = ((x653-x654)&(x655&x656));

    if (t146 != 96) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x657 = 6;
	static int16_t x658 = INT16_MAX;
	int8_t x659 = 4;
	uint16_t x660 = 17U;
	volatile int32_t t147 = -28771633;

    t147 = ((x657-x658)&(x659&x660));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x662 = -347;
	int8_t x663 = INT8_MIN;
	volatile int8_t x664 = -1;
	int64_t t148 = 34686115LL;

    t148 = ((x661-x662)&(x663&x664));

    if (t148 != 6079839360LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x665 = 37;
	int8_t x666 = INT8_MAX;
	static uint64_t x667 = UINT64_MAX;
	volatile int64_t x668 = INT64_MIN;
	uint64_t t149 = 30892LLU;

    t149 = ((x665-x666)&(x667&x668));

    if (t149 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x669 = 4738385207047LLU;
	int16_t x670 = -1583;
	int32_t x671 = INT32_MIN;
	uint64_t t150 = 544986578319614784LLU;

    t150 = ((x669-x670)&(x671&x672));

    if (t150 != 4737348927488LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x673 = 265U;
	uint64_t x674 = UINT64_MAX;
	int8_t x676 = INT8_MIN;
	uint64_t t151 = 3931581769LLU;

    t151 = ((x673-x674)&(x675&x676));

    if (t151 != 256LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x677 = 3U;
	static int8_t x678 = -1;
	uint32_t x679 = UINT32_MAX;
	uint16_t x680 = UINT16_MAX;

    t152 = ((x677-x678)&(x679&x680));

    if (t152 != 4U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x681 = 2027257621LLU;
	int16_t x682 = -1;
	int8_t x683 = -21;
	uint16_t x684 = UINT16_MAX;
	uint64_t t153 = 82LLU;

    t153 = ((x681-x682)&(x683&x684));

    if (t153 != 32514LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x685 = UINT8_MAX;
	int16_t x686 = 1386;
	volatile uint64_t x687 = 1021681510LLU;
	volatile uint64_t t154 = 705135059849598LLU;

    t154 = ((x685-x686)&(x687&x688));

    if (t154 != 201589504LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x689 = INT16_MAX;
	int16_t x690 = INT16_MAX;
	int16_t x691 = INT16_MIN;
	static int8_t x692 = -1;
	volatile int32_t t155 = -7;

    t155 = ((x689-x690)&(x691&x692));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x699 = INT8_MIN;
	volatile uint64_t t156 = 133223103354LLU;

    t156 = ((x697-x698)&(x699&x700));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x701 = 52;
	int16_t x702 = INT16_MAX;
	int8_t x703 = -1;
	uint8_t x704 = 77U;

    t157 = ((x701-x702)&(x703&x704));

    if (t157 != 5) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x705 = UINT8_MAX;
	uint32_t x706 = 69227171U;
	int32_t x708 = INT32_MIN;

    t158 = ((x705-x706)&(x707&x708));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x709 = -1;
	volatile int16_t x710 = -7653;
	static int8_t x711 = INT8_MAX;
	int32_t t159 = 35286322;

    t159 = ((x709-x710)&(x711&x712));

    if (t159 != 100) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x717 = INT64_MAX;
	uint32_t x718 = 264U;
	int8_t x719 = 4;
	volatile int64_t t160 = 7825848342911LL;

    t160 = ((x717-x718)&(x719&x720));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x721 = -1LL;
	static uint16_t x722 = 2U;
	uint32_t x723 = UINT32_MAX;
	uint64_t x724 = 6169LLU;
	uint64_t t161 = 1480943LLU;

    t161 = ((x721-x722)&(x723&x724));

    if (t161 != 6169LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x725 = 0U;
	int8_t x726 = INT8_MIN;
	int32_t x728 = INT32_MIN;
	uint32_t t162 = 3U;

    t162 = ((x725-x726)&(x727&x728));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x729 = -5125;
	int16_t x731 = INT16_MIN;
	volatile int8_t x732 = INT8_MAX;

    t163 = ((x729-x730)&(x731&x732));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x733 = 655475163497686235LLU;
	uint64_t x734 = 448LLU;
	static int64_t x735 = INT64_MIN;
	uint32_t x736 = UINT32_MAX;
	volatile uint64_t t164 = 1712LLU;

    t164 = ((x733-x734)&(x735&x736));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint8_t x737 = 5U;
	int8_t x738 = -6;
	static int64_t x739 = -4912182LL;
	int16_t x740 = INT16_MIN;

    t165 = ((x737-x738)&(x739&x740));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x741 = -1;
	int8_t x742 = 2;
	volatile int32_t x743 = -221667121;
	volatile int8_t x744 = -57;
	static int32_t t166 = -1;

    t166 = ((x741-x742)&(x743&x744));

    if (t166 != -221667131) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x749 = 14LLU;
	uint32_t x750 = 10U;
	static int8_t x751 = INT8_MAX;
	static int64_t x752 = -1LL;
	volatile uint64_t t167 = 318342173845018502LLU;

    t167 = ((x749-x750)&(x751&x752));

    if (t167 != 4LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x753 = INT64_MAX;
	int32_t x756 = -1;
	int64_t t168 = -3LL;

    t168 = ((x753-x754)&(x755&x756));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x757 = UINT8_MAX;
	static int32_t x758 = -1;
	static volatile int8_t x759 = INT8_MAX;

    t169 = ((x757-x758)&(x759&x760));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x761 = INT8_MIN;
	uint64_t x762 = 953648619907LLU;
	volatile int8_t x763 = INT8_MIN;
	int32_t x764 = -243;
	volatile uint64_t t170 = 512590084LLU;

    t170 = ((x761-x762)&(x763&x764));

    if (t170 != 18446743120060931328LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x765 = 0;
	uint32_t x766 = 489333472U;
	static int32_t x767 = INT32_MAX;
	static uint32_t t171 = 13635963U;

    t171 = ((x765-x766)&(x767&x768));

    if (t171 != 1658150176U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x769 = 544516;
	uint16_t x770 = 4221U;
	int32_t x772 = INT32_MAX;
	volatile int32_t t172 = 7129679;

    t172 = ((x769-x770)&(x771&x772));

    if (t172 != 6) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x775 = INT16_MIN;
	int64_t x776 = -1LL;
	volatile int64_t t173 = 2641348599630LL;

    t173 = ((x773-x774)&(x775&x776));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x777 = -1;
	uint8_t x778 = UINT8_MAX;
	uint64_t x779 = 4099598533770919272LLU;
	int8_t x780 = -62;
	uint64_t t174 = 20345688825260LLU;

    t174 = ((x777-x778)&(x779&x780));

    if (t174 != 4099598533770919168LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x781 = INT16_MAX;
	static uint16_t x782 = 1U;
	volatile uint8_t x784 = 70U;
	uint32_t t175 = 1448476517U;

    t175 = ((x781-x782)&(x783&x784));

    if (t175 != 70U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x785 = 71U;
	int8_t x786 = INT8_MAX;
	volatile int32_t t176 = -1815214;

    t176 = ((x785-x786)&(x787&x788));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x790 = INT16_MIN;
	int64_t x791 = INT64_MAX;
	volatile uint64_t t177 = 52259476261476LLU;

    t177 = ((x789-x790)&(x791&x792));

    if (t177 != 87LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x793 = INT16_MIN;
	volatile int32_t x795 = INT32_MIN;
	int8_t x796 = -1;

    t178 = ((x793-x794)&(x795&x796));

    if (t178 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x797 = -1;
	int8_t x798 = INT8_MIN;
	int64_t x800 = INT64_MIN;
	static int64_t t179 = 2354LL;

    t179 = ((x797-x798)&(x799&x800));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x801 = INT8_MAX;
	int16_t x802 = 14;
	int8_t x803 = 0;
	int8_t x804 = INT8_MAX;
	volatile int32_t t180 = -5803;

    t180 = ((x801-x802)&(x803&x804));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x805 = INT16_MIN;
	int16_t x806 = -1;
	int16_t x807 = -53;
	volatile int64_t x808 = INT64_MIN;

    t181 = ((x805-x806)&(x807&x808));

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int8_t x809 = 1;
	int8_t x810 = INT8_MAX;
	volatile int8_t x812 = 1;

    t182 = ((x809-x810)&(x811&x812));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x813 = INT64_MIN;
	int8_t x814 = -1;
	int16_t x816 = INT16_MIN;
	uint64_t t183 = 230319009552482LLU;

    t183 = ((x813-x814)&(x815&x816));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x823 = INT8_MAX;
	int64_t x824 = INT64_MIN;
	static volatile int64_t t184 = 13181175LL;

    t184 = ((x821-x822)&(x823&x824));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x825 = -6330248884689547LL;
	static volatile int8_t x827 = -1;
	static int8_t x828 = -2;
	int64_t t185 = 7476349091943906LL;

    t185 = ((x825-x826)&(x827&x828));

    if (t185 != -6330248884689674LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x829 = 12U;
	static volatile uint8_t x831 = UINT8_MAX;
	uint16_t x832 = 20U;

    t186 = ((x829-x830)&(x831&x832));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x834 = -1;
	int16_t x835 = -1;

    t187 = ((x833-x834)&(x835&x836));

    if (t187 != 128LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x837 = -1LL;
	int64_t x838 = INT64_MIN;
	int8_t x839 = 14;
	static uint8_t x840 = 12U;
	static volatile int64_t t188 = -13364122758181947LL;

    t188 = ((x837-x838)&(x839&x840));

    if (t188 != 12LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x841 = 63026;
	int64_t x843 = INT64_MAX;
	int64_t x844 = INT64_MIN;
	int64_t t189 = 13439376700LL;

    t189 = ((x841-x842)&(x843&x844));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x845 = INT64_MIN;
	int8_t x846 = -3;
	uint64_t x847 = 105LLU;
	volatile int16_t x848 = INT16_MIN;
	volatile uint64_t t190 = 36504117148130104LLU;

    t190 = ((x845-x846)&(x847&x848));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x850 = INT8_MAX;
	int32_t x851 = INT32_MAX;
	volatile int16_t x852 = 1;
	volatile int32_t t191 = -4;

    t191 = ((x849-x850)&(x851&x852));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x854 = 70U;
	static volatile uint16_t x855 = UINT16_MAX;
	uint64_t x856 = 99407936880708LLU;

    t192 = ((x853-x854)&(x855&x856));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x861 = 3U;
	int64_t x862 = INT64_MAX;
	volatile int32_t x863 = INT32_MAX;
	volatile int64_t t193 = 28972815363LL;

    t193 = ((x861-x862)&(x863&x864));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int64_t x865 = INT64_MIN;
	uint64_t x866 = 39LLU;
	int16_t x867 = INT16_MIN;
	int8_t x868 = 53;

    t194 = ((x865-x866)&(x867&x868));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x869 = INT16_MAX;
	static int64_t x870 = INT64_MAX;
	int16_t x871 = -1;
	volatile uint64_t t195 = 827041543194064LLU;

    t195 = ((x869-x870)&(x871&x872));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x873 = 731091308LL;
	int32_t x875 = INT32_MIN;
	int64_t x876 = 588LL;
	int64_t t196 = 7LL;

    t196 = ((x873-x874)&(x875&x876));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x877 = 61;
	uint32_t x878 = 1877810U;
	static uint32_t x879 = 25449243U;
	static int8_t x880 = 11;
	volatile uint32_t t197 = 3U;

    t197 = ((x877-x878)&(x879&x880));

    if (t197 != 11U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x881 = -3775;
	static int8_t x883 = 0;
	uint64_t t198 = 8105LLU;

    t198 = ((x881-x882)&(x883&x884));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x888 = -1LL;
	int64_t t199 = 1LL;

    t199 = ((x885-x886)&(x887&x888));

    if (t199 != 210LL) { NG(); } else { ; }
	
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

