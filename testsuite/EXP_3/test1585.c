
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

int16_t x2 = -1;
uint8_t x7 = 123U;
int8_t x12 = INT8_MIN;
static volatile int64_t x18 = -7317956LL;
volatile int16_t x22 = INT16_MIN;
int16_t x32 = INT16_MIN;
int8_t x33 = INT8_MIN;
volatile uint32_t x36 = 108237769U;
int16_t x47 = -15025;
int8_t x49 = -6;
int32_t x51 = -1;
uint16_t x52 = UINT16_MAX;
int32_t x73 = INT32_MAX;
uint8_t x76 = 7U;
int64_t t14 = 33988166424830LL;
volatile uint64_t x77 = 0LLU;
static uint8_t x83 = 118U;
int64_t x84 = -950773118110352LL;
static int8_t x88 = -1;
int64_t x91 = -2662525753366888LL;
volatile int16_t x93 = -1;
int8_t x94 = INT8_MAX;
volatile int32_t t19 = 50074110;
volatile int32_t t20 = 237;
int16_t x102 = -12656;
int64_t x107 = INT64_MIN;
static int64_t t22 = 45633900784843411LL;
volatile uint8_t x109 = UINT8_MAX;
volatile int32_t t23 = -2325148;
int16_t x114 = INT16_MIN;
static int8_t x120 = 16;
volatile int64_t t26 = -2367211445LL;
int8_t x125 = INT8_MIN;
volatile int16_t x128 = -1;
uint8_t x132 = 1U;
volatile uint64_t t28 = 1360099825501006738LLU;
int32_t x133 = -150045385;
static volatile int32_t x140 = INT32_MIN;
int32_t x141 = INT32_MAX;
int16_t x146 = INT16_MIN;
volatile int8_t x153 = -1;
volatile int16_t x159 = -1;
volatile int64_t x160 = -1LL;
int16_t x163 = INT16_MIN;
uint16_t x183 = UINT16_MAX;
uint16_t x185 = 247U;
int16_t x190 = 29;
volatile int32_t x194 = -1;
uint32_t x201 = 205460U;
volatile uint32_t t45 = 920U;
volatile int16_t x214 = INT16_MIN;
uint8_t x216 = 3U;
static volatile int32_t t46 = 160809457;
uint8_t x222 = 6U;
int8_t x229 = INT8_MIN;
int32_t x230 = INT32_MIN;
int32_t x232 = 214496;
int32_t x236 = INT32_MAX;
volatile uint8_t x244 = 2U;
int32_t t53 = 1;
int16_t x245 = INT16_MIN;
volatile uint64_t t54 = 6603644655167771199LLU;
static uint8_t x258 = 101U;
volatile int32_t x260 = -717216;
static uint32_t x267 = UINT32_MAX;
uint16_t x281 = UINT16_MAX;
int32_t x283 = INT32_MIN;
volatile int32_t t61 = -67;
volatile int64_t t62 = 2501019LL;
volatile int32_t x290 = INT32_MAX;
uint64_t x293 = 510849515416LLU;
static int64_t x294 = -1LL;
int8_t x296 = INT8_MIN;
static int32_t x301 = -1;
static volatile int32_t x303 = -449234398;
uint64_t x308 = 80LLU;
int64_t t67 = -85082176560LL;
int8_t x318 = INT8_MAX;
uint8_t x322 = 1U;
int8_t x325 = 1;
volatile uint32_t t72 = 924209954U;
int16_t x339 = INT16_MIN;
int64_t x355 = INT64_MAX;
static int32_t x356 = INT32_MIN;
int8_t x359 = INT8_MIN;
int64_t x367 = INT64_MAX;
volatile uint64_t t79 = 47234173400015139LLU;
int32_t x371 = INT32_MIN;
static int16_t x382 = INT16_MIN;
int64_t t83 = -5564004LL;
int8_t x396 = INT8_MIN;
volatile int8_t x399 = -9;
uint64_t x403 = 1LLU;
uint64_t t89 = 241LLU;
uint32_t x410 = 84337U;
static int8_t x419 = -62;
volatile int16_t x420 = INT16_MIN;
uint8_t x426 = 1U;
volatile int32_t t95 = 1765885;
volatile int8_t x433 = INT8_MAX;
static int8_t x436 = 3;
uint32_t t99 = 838499403U;
int8_t x449 = -1;
volatile int32_t x455 = INT32_MIN;
int64_t x463 = INT64_MIN;
int64_t x465 = -1LL;
static int8_t x466 = INT8_MAX;
volatile uint32_t x470 = 44U;
volatile int8_t x471 = -1;
int64_t x482 = 4520549345348074LL;
int8_t x484 = -1;
volatile uint64_t t107 = 52626874LLU;
int16_t x485 = INT16_MAX;
uint32_t x488 = UINT32_MAX;
int8_t x489 = -1;
volatile uint8_t x490 = 6U;
volatile int16_t x491 = INT16_MAX;
int16_t x498 = -5;
uint16_t x503 = UINT16_MAX;
int8_t x505 = -1;
volatile int16_t x506 = 41;
int8_t x508 = -33;
int64_t x534 = -53LL;
uint64_t t117 = 89LLU;
int8_t x559 = INT8_MIN;
int8_t x562 = -1;
int8_t x563 = INT8_MIN;
int16_t x564 = INT16_MIN;
static int16_t x567 = 0;
volatile uint64_t t122 = 551525LLU;
int8_t x581 = 5;
volatile uint8_t x586 = UINT8_MAX;
volatile int16_t x588 = INT16_MAX;
static int32_t x605 = INT32_MIN;
static int32_t x606 = -16950944;
static volatile int32_t t130 = -259941432;
uint8_t x617 = 31U;
uint32_t x625 = 24U;
uint64_t x626 = UINT64_MAX;
uint8_t x627 = 125U;
volatile uint64_t t134 = 20909LLU;
int8_t x630 = -6;
int8_t x631 = -1;
volatile int64_t t135 = 26547824019LL;
uint32_t x638 = UINT32_MAX;
int8_t x641 = 7;
static volatile int8_t x643 = -1;
uint32_t x644 = UINT32_MAX;
volatile uint8_t x647 = 7U;
volatile uint32_t t139 = 51201496U;
volatile uint32_t x649 = UINT32_MAX;
int8_t x654 = INT8_MAX;
static int16_t x657 = INT16_MIN;
int8_t x664 = INT8_MIN;
int8_t x665 = -3;
static uint8_t x666 = UINT8_MAX;
uint32_t t145 = 923218595U;
volatile uint8_t x673 = 1U;
static int32_t x675 = INT32_MIN;
int16_t x679 = INT16_MIN;
uint32_t x683 = UINT32_MAX;
uint64_t t148 = 381283545213851LLU;
int64_t x696 = -1LL;
static int16_t x700 = 332;
uint16_t x704 = 26U;
uint32_t x706 = UINT32_MAX;
uint32_t t155 = 163582171U;
static uint32_t x717 = 31802U;
int64_t x721 = 55797351012253LL;
static int16_t x738 = -2;
uint8_t x739 = 5U;
static int16_t x749 = 534;
uint16_t x756 = 178U;
volatile int32_t t160 = -158628;
static int32_t x760 = -304;
int64_t x761 = INT64_MIN;
volatile uint8_t x776 = 2U;
int8_t x777 = 0;
uint64_t x778 = UINT64_MAX;
int8_t x779 = -1;
volatile uint16_t x793 = 10U;
int16_t x794 = -81;
static volatile int32_t t168 = -970330856;
int32_t x826 = INT32_MIN;
volatile int32_t x827 = -65;
static volatile int64_t t180 = -16477817849268LL;
int32_t x869 = -1;
static int16_t x874 = INT16_MIN;
int8_t x887 = INT8_MAX;
volatile uint32_t t186 = 1427276692U;
int32_t t187 = 1;
int32_t x896 = INT32_MIN;
int8_t x898 = INT8_MIN;
volatile int64_t t191 = 1LL;
uint64_t x915 = UINT64_MAX;
int8_t x918 = INT8_MIN;
volatile int32_t t194 = 9406330;
int32_t t198 = 2840;


void f0(void) {
    	static uint32_t x1 = UINT32_MAX;
	uint16_t x3 = 0U;
	volatile uint16_t x4 = UINT16_MAX;
	static volatile uint32_t t0 = 29005U;

    t0 = ((x1-x2)*(x3>x4));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	int8_t x6 = -1;
	volatile int8_t x8 = -1;
	static volatile int32_t t1 = 6248;

    t1 = ((x5-x6)*(x7>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	static int8_t x10 = -1;
	uint16_t x11 = 2U;
	volatile int32_t t2 = 137;

    t2 = ((x9-x10)*(x11>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	volatile int8_t x14 = INT8_MIN;
	volatile uint64_t x15 = UINT64_MAX;
	uint64_t x16 = UINT64_MAX;
	static int32_t t3 = -41;

    t3 = ((x13-x14)*(x15>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 188U;
	int8_t x19 = INT8_MIN;
	uint32_t x20 = 228U;
	int64_t t4 = 136730384006065184LL;

    t4 = ((x17-x18)*(x19>x20));

    if (t4 != 7318144LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = INT64_MIN;
	uint8_t x23 = 7U;
	uint32_t x24 = 1018U;
	int64_t t5 = -16394LL;

    t5 = ((x21-x22)*(x23>x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x29 = 31;
	uint32_t x30 = UINT32_MAX;
	static int16_t x31 = INT16_MIN;
	uint32_t t6 = 883582349U;

    t6 = ((x29-x30)*(x31>x32));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x34 = -1LL;
	int32_t x35 = -3028964;
	int64_t t7 = 6187347LL;

    t7 = ((x33-x34)*(x35>x36));

    if (t7 != -127LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = INT32_MIN;
	int32_t x38 = INT32_MIN;
	uint16_t x39 = UINT16_MAX;
	uint64_t x40 = 136933999193493699LLU;
	volatile int32_t t8 = 811777;

    t8 = ((x37-x38)*(x39>x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = 1;
	int8_t x46 = -1;
	uint8_t x48 = 1U;
	volatile int32_t t9 = 1048;

    t9 = ((x45-x46)*(x47>x48));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x50 = -37394;
	int32_t t10 = -10841;

    t10 = ((x49-x50)*(x51>x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x53 = INT64_MIN;
	uint64_t x54 = 2684802543897618683LLU;
	int16_t x55 = INT16_MIN;
	uint32_t x56 = 41468U;
	volatile uint64_t t11 = 485208LLU;

    t11 = ((x53-x54)*(x55>x56));

    if (t11 != 6538569492957157125LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x61 = 1;
	uint64_t x62 = 534491607816LLU;
	int32_t x63 = INT32_MIN;
	int8_t x64 = -1;
	volatile uint64_t t12 = 1080133025264981697LLU;

    t12 = ((x61-x62)*(x63>x64));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x65 = UINT64_MAX;
	int64_t x66 = -5080527373909LL;
	volatile int8_t x67 = INT8_MAX;
	int64_t x68 = 156683543442875122LL;
	volatile uint64_t t13 = 940694393242433LLU;

    t13 = ((x65-x66)*(x67>x68));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x74 = -61737277LL;
	uint32_t x75 = 8U;

    t14 = ((x73-x74)*(x75>x76));

    if (t14 != 2209220924LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x78 = 5;
	uint16_t x79 = 315U;
	int32_t x80 = -1;
	uint64_t t15 = 2603972388LLU;

    t15 = ((x77-x78)*(x79>x80));

    if (t15 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x81 = 12027959434LLU;
	volatile int8_t x82 = INT8_MAX;
	uint64_t t16 = 1149848802784507984LLU;

    t16 = ((x81-x82)*(x83>x84));

    if (t16 != 12027959307LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x85 = UINT16_MAX;
	int16_t x86 = 104;
	int8_t x87 = 9;
	volatile int32_t t17 = -238193137;

    t17 = ((x85-x86)*(x87>x88));

    if (t17 != 65431) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x89 = INT8_MAX;
	static int16_t x90 = -128;
	uint8_t x92 = UINT8_MAX;
	static int32_t t18 = -1;

    t18 = ((x89-x90)*(x91>x92));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MIN;

    t19 = ((x93-x94)*(x95>x96));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x97 = -1;
	int16_t x98 = -2440;
	int32_t x99 = INT32_MIN;
	int32_t x100 = -1186371;

    t20 = ((x97-x98)*(x99>x100));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int64_t x101 = INT64_MIN;
	int32_t x103 = INT32_MAX;
	volatile int32_t x104 = -1;
	volatile int64_t t21 = 16982700429393465LL;

    t21 = ((x101-x102)*(x103>x104));

    if (t21 != -9223372036854763152LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x105 = 1;
	int64_t x106 = -481691418598356420LL;
	uint8_t x108 = UINT8_MAX;

    t22 = ((x105-x106)*(x107>x108));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x110 = INT16_MIN;
	uint32_t x111 = 824886U;
	uint16_t x112 = 1U;

    t23 = ((x109-x110)*(x111>x112));

    if (t23 != 33023) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x113 = INT8_MIN;
	uint32_t x115 = UINT32_MAX;
	volatile uint32_t x116 = UINT32_MAX;
	volatile int32_t t24 = -160;

    t24 = ((x113-x114)*(x115>x116));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x117 = 2;
	static volatile int32_t x118 = 5368;
	static int64_t x119 = INT64_MIN;
	static volatile int32_t t25 = 164;

    t25 = ((x117-x118)*(x119>x120));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x121 = INT64_MAX;
	int16_t x122 = 31;
	int16_t x123 = -1;
	uint64_t x124 = 28774687LLU;

    t26 = ((x121-x122)*(x123>x124));

    if (t26 != 9223372036854775776LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x126 = UINT32_MAX;
	uint32_t x127 = 433147U;
	uint32_t t27 = 2U;

    t27 = ((x125-x126)*(x127>x128));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x129 = 401062LLU;
	uint32_t x130 = 234496U;
	static int8_t x131 = -24;

    t28 = ((x129-x130)*(x131>x132));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x134 = INT8_MIN;
	uint8_t x135 = 16U;
	uint8_t x136 = 49U;
	volatile int32_t t29 = 13;

    t29 = ((x133-x134)*(x135>x136));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x137 = -1;
	int16_t x138 = INT16_MIN;
	static volatile int32_t x139 = -1;
	volatile int32_t t30 = -44;

    t30 = ((x137-x138)*(x139>x140));

    if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x142 = UINT8_MAX;
	uint64_t x143 = UINT64_MAX;
	static uint64_t x144 = 99048137530211LLU;
	volatile int32_t t31 = 145;

    t31 = ((x141-x142)*(x143>x144));

    if (t31 != 2147483392) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x145 = 2902290461763432602LLU;
	volatile uint8_t x147 = UINT8_MAX;
	volatile uint8_t x148 = 32U;
	volatile uint64_t t32 = 0LLU;

    t32 = ((x145-x146)*(x147>x148));

    if (t32 != 2902290461763465370LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x149 = 0;
	int16_t x150 = -782;
	int64_t x151 = INT64_MIN;
	static volatile uint8_t x152 = 0U;
	int32_t t33 = -121509656;

    t33 = ((x149-x150)*(x151>x152));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x154 = INT16_MAX;
	int32_t x155 = INT32_MAX;
	int8_t x156 = INT8_MIN;
	volatile int32_t t34 = 16;

    t34 = ((x153-x154)*(x155>x156));

    if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x157 = 0U;
	volatile int64_t x158 = -264265813LL;
	static int64_t t35 = 82042161958LL;

    t35 = ((x157-x158)*(x159>x160));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x161 = INT16_MIN;
	int32_t x162 = -262328;
	static int32_t x164 = INT32_MIN;
	static int32_t t36 = 237272;

    t36 = ((x161-x162)*(x163>x164));

    if (t36 != 229560) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t x169 = INT32_MIN;
	uint8_t x170 = 0U;
	int16_t x171 = INT16_MIN;
	static int64_t x172 = -1LL;
	static int32_t t37 = -11140;

    t37 = ((x169-x170)*(x171>x172));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x173 = 133448LLU;
	static volatile int16_t x174 = INT16_MIN;
	int8_t x175 = -1;
	static int8_t x176 = -1;
	uint64_t t38 = 2059384466895840LLU;

    t38 = ((x173-x174)*(x175>x176));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x177 = -6990236571LL;
	volatile uint16_t x178 = 6U;
	static int64_t x179 = -1LL;
	int8_t x180 = -1;
	volatile int64_t t39 = 204972655299562403LL;

    t39 = ((x177-x178)*(x179>x180));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x181 = 31239U;
	int64_t x182 = -47LL;
	uint32_t x184 = 8U;
	static int64_t t40 = -494857LL;

    t40 = ((x181-x182)*(x183>x184));

    if (t40 != 31286LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x186 = INT8_MIN;
	static int64_t x187 = INT64_MIN;
	int32_t x188 = INT32_MAX;
	volatile int32_t t41 = 511630054;

    t41 = ((x185-x186)*(x187>x188));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x189 = INT16_MIN;
	static int64_t x191 = 11914930LL;
	uint16_t x192 = UINT16_MAX;
	static volatile int32_t t42 = -51947;

    t42 = ((x189-x190)*(x191>x192));

    if (t42 != -32797) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x193 = INT64_MIN;
	int8_t x195 = 0;
	int16_t x196 = -1;
	int64_t t43 = -1659892612LL;

    t43 = ((x193-x194)*(x195>x196));

    if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x197 = INT16_MIN;
	int8_t x198 = INT8_MIN;
	static int64_t x199 = INT64_MIN;
	static uint64_t x200 = 737421LLU;
	static int32_t t44 = 1517319;

    t44 = ((x197-x198)*(x199>x200));

    if (t44 != -32640) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x202 = 71U;
	int32_t x203 = INT32_MIN;
	uint32_t x204 = 26879184U;

    t45 = ((x201-x202)*(x203>x204));

    if (t45 != 205389U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x213 = 2U;
	volatile uint64_t x215 = 503835LLU;

    t46 = ((x213-x214)*(x215>x216));

    if (t46 != 32770) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x217 = 1;
	uint32_t x218 = 49329U;
	uint64_t x219 = UINT64_MAX;
	int64_t x220 = -16970251475LL;
	volatile uint32_t t47 = 805971840U;

    t47 = ((x217-x218)*(x219>x220));

    if (t47 != 4294917968U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x221 = -212;
	int16_t x223 = INT16_MIN;
	int32_t x224 = -1;
	int32_t t48 = -56189448;

    t48 = ((x221-x222)*(x223>x224));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x225 = INT16_MIN;
	int64_t x226 = INT64_MIN;
	int32_t x227 = -121;
	uint64_t x228 = 12LLU;
	int64_t t49 = -62LL;

    t49 = ((x225-x226)*(x227>x228));

    if (t49 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x231 = 453710619506LLU;
	volatile int32_t t50 = -2547;

    t50 = ((x229-x230)*(x231>x232));

    if (t50 != 2147483520) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x233 = 729LLU;
	int64_t x234 = INT64_MAX;
	int32_t x235 = INT32_MAX;
	uint64_t t51 = 1020623356748139LLU;

    t51 = ((x233-x234)*(x235>x236));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x237 = INT64_MIN;
	int16_t x238 = -1;
	static uint8_t x239 = 50U;
	uint16_t x240 = 4773U;
	volatile int64_t t52 = 37785284916394LL;

    t52 = ((x237-x238)*(x239>x240));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x241 = UINT8_MAX;
	int8_t x242 = -1;
	int8_t x243 = 0;

    t53 = ((x241-x242)*(x243>x244));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x246 = UINT64_MAX;
	uint8_t x247 = 1U;
	uint32_t x248 = 61U;

    t54 = ((x245-x246)*(x247>x248));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x249 = 0;
	volatile uint8_t x250 = 8U;
	int16_t x251 = INT16_MAX;
	uint8_t x252 = 103U;
	volatile int32_t t55 = 357391;

    t55 = ((x249-x250)*(x251>x252));

    if (t55 != -8) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x257 = 82070LL;
	static volatile uint16_t x259 = 15U;
	volatile int64_t t56 = -106952678686LL;

    t56 = ((x257-x258)*(x259>x260));

    if (t56 != 81969LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x261 = UINT16_MAX;
	int64_t x262 = -1LL;
	int64_t x263 = INT64_MAX;
	int64_t x264 = -1LL;
	volatile int64_t t57 = -1378361274090679357LL;

    t57 = ((x261-x262)*(x263>x264));

    if (t57 != 65536LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x265 = 11686364U;
	int32_t x266 = -93;
	int8_t x268 = -11;
	volatile uint32_t t58 = 8758582U;

    t58 = ((x265-x266)*(x267>x268));

    if (t58 != 11686457U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x269 = UINT32_MAX;
	int8_t x270 = -1;
	int64_t x271 = -69323182444638LL;
	int32_t x272 = -306781;
	static uint32_t t59 = 11U;

    t59 = ((x269-x270)*(x271>x272));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x273 = UINT8_MAX;
	volatile uint64_t x274 = UINT64_MAX;
	int32_t x275 = INT32_MAX;
	int64_t x276 = -1LL;
	volatile uint64_t t60 = 338955LLU;

    t60 = ((x273-x274)*(x275>x276));

    if (t60 != 256LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x282 = INT8_MIN;
	uint32_t x284 = 1088347195U;

    t61 = ((x281-x282)*(x283>x284));

    if (t61 != 65663) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x285 = INT32_MIN;
	int64_t x286 = 84268127138116LL;
	int8_t x287 = INT8_MAX;
	int8_t x288 = -27;

    t62 = ((x285-x286)*(x287>x288));

    if (t62 != -84270274621764LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x289 = -1;
	int64_t x291 = 4163LL;
	volatile int64_t x292 = 1248LL;
	volatile int32_t t63 = INT32_MIN;

    t63 = ((x289-x290)*(x291>x292));

    if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x295 = INT8_MIN;
	uint64_t t64 = 22724018753LLU;

    t64 = ((x293-x294)*(x295>x296));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x297 = INT8_MAX;
	static uint16_t x298 = UINT16_MAX;
	int32_t x299 = -29344419;
	volatile int16_t x300 = -1;
	volatile int32_t t65 = -928;

    t65 = ((x297-x298)*(x299>x300));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x302 = INT64_MAX;
	static uint32_t x304 = 19373679U;
	int64_t t66 = INT64_MIN;

    t66 = ((x301-x302)*(x303>x304));

    if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x305 = -1LL;
	int8_t x306 = 3;
	int64_t x307 = INT64_MIN;

    t67 = ((x305-x306)*(x307>x308));

    if (t67 != -4LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MIN;
	static volatile int8_t x311 = INT8_MIN;
	int64_t x312 = 36LL;
	volatile int64_t t68 = 215861LL;

    t68 = ((x309-x310)*(x311>x312));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x313 = 315U;
	int8_t x314 = 4;
	static int64_t x315 = INT64_MIN;
	volatile int16_t x316 = -7;
	int32_t t69 = 63218059;

    t69 = ((x313-x314)*(x315>x316));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x317 = 159U;
	static int32_t x319 = INT32_MIN;
	int32_t x320 = INT32_MAX;
	uint32_t t70 = 1242378U;

    t70 = ((x317-x318)*(x319>x320));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x321 = -1;
	int32_t x323 = 20502;
	static int64_t x324 = INT64_MAX;
	static int32_t t71 = 787545225;

    t71 = ((x321-x322)*(x323>x324));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x326 = UINT32_MAX;
	uint8_t x327 = 7U;
	uint64_t x328 = UINT64_MAX;

    t72 = ((x325-x326)*(x327>x328));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x333 = -2827965054184467272LL;
	static volatile int64_t x334 = -25436965LL;
	int8_t x335 = -1;
	int8_t x336 = -1;
	static int64_t t73 = -1117957580735253420LL;

    t73 = ((x333-x334)*(x335>x336));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x337 = -1;
	int8_t x338 = INT8_MIN;
	uint32_t x340 = 3445U;
	volatile int32_t t74 = 1421899;

    t74 = ((x337-x338)*(x339>x340));

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x341 = 1U;
	static volatile int16_t x342 = -1;
	int64_t x343 = INT64_MIN;
	uint8_t x344 = UINT8_MAX;
	volatile uint32_t t75 = 1541U;

    t75 = ((x341-x342)*(x343>x344));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x353 = 125563648LL;
	int32_t x354 = INT32_MAX;
	volatile int64_t t76 = 4144543635247LL;

    t76 = ((x353-x354)*(x355>x356));

    if (t76 != -2021919999LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x357 = -1;
	static uint64_t x358 = UINT64_MAX;
	volatile uint8_t x360 = 0U;
	static volatile uint64_t t77 = 3408860432583620058LLU;

    t77 = ((x357-x358)*(x359>x360));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x361 = -9298666LL;
	int64_t x362 = INT64_MIN;
	static volatile int16_t x363 = INT16_MIN;
	volatile uint64_t x364 = 199670932590LLU;
	static volatile int64_t t78 = 187LL;

    t78 = ((x361-x362)*(x363>x364));

    if (t78 != 9223372036845477142LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x365 = 1950503LLU;
	int8_t x366 = INT8_MIN;
	int8_t x368 = INT8_MIN;

    t79 = ((x365-x366)*(x367>x368));

    if (t79 != 1950631LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x369 = 10158887859LLU;
	static uint8_t x370 = 98U;
	uint32_t x372 = 109323U;
	uint64_t t80 = 41726LLU;

    t80 = ((x369-x370)*(x371>x372));

    if (t80 != 10158887761LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x373 = -1;
	int16_t x374 = -1;
	static int8_t x375 = INT8_MAX;
	int32_t x376 = INT32_MAX;
	volatile int32_t t81 = 95713;

    t81 = ((x373-x374)*(x375>x376));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x377 = INT16_MAX;
	volatile int32_t x378 = INT32_MAX;
	uint8_t x379 = 4U;
	uint32_t x380 = 65U;
	int32_t t82 = -293927;

    t82 = ((x377-x378)*(x379>x380));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x381 = -49633460LL;
	int64_t x383 = 782404LL;
	uint32_t x384 = UINT32_MAX;

    t83 = ((x381-x382)*(x383>x384));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x385 = INT16_MAX;
	uint64_t x386 = UINT64_MAX;
	uint8_t x387 = 14U;
	int8_t x388 = 3;
	uint64_t t84 = 2640353448LLU;

    t84 = ((x385-x386)*(x387>x388));

    if (t84 != 32768LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint16_t x389 = 153U;
	uint8_t x390 = 2U;
	uint8_t x391 = 56U;
	uint64_t x392 = UINT64_MAX;
	int32_t t85 = 3827278;

    t85 = ((x389-x390)*(x391>x392));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x393 = -1LL;
	int64_t x394 = INT64_MIN;
	int64_t x395 = 20LL;
	int64_t t86 = INT64_MAX;

    t86 = ((x393-x394)*(x395>x396));

    if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x397 = -1;
	volatile int16_t x398 = INT16_MIN;
	uint32_t x400 = UINT32_MAX;
	volatile int32_t t87 = -10;

    t87 = ((x397-x398)*(x399>x400));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x401 = -1;
	int8_t x402 = -1;
	static uint8_t x404 = 0U;
	volatile int32_t t88 = -28005878;

    t88 = ((x401-x402)*(x403>x404));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x405 = UINT64_MAX;
	static int32_t x406 = -65995355;
	volatile int32_t x407 = 2;
	static int8_t x408 = 2;

    t89 = ((x405-x406)*(x407>x408));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x409 = INT16_MIN;
	int8_t x411 = -1;
	uint16_t x412 = 2U;
	uint32_t t90 = 3864U;

    t90 = ((x409-x410)*(x411>x412));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x413 = 3452LLU;
	int64_t x414 = -1LL;
	int32_t x415 = INT32_MIN;
	static int8_t x416 = INT8_MAX;
	volatile uint64_t t91 = 6LLU;

    t91 = ((x413-x414)*(x415>x416));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x417 = INT16_MIN;
	int64_t x418 = INT64_MIN;
	volatile int64_t t92 = 68947953LL;

    t92 = ((x417-x418)*(x419>x420));

    if (t92 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x421 = INT64_MIN;
	int8_t x422 = INT8_MIN;
	uint32_t x423 = 1U;
	uint16_t x424 = 7019U;
	int64_t t93 = -24629655816398800LL;

    t93 = ((x421-x422)*(x423>x424));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x425 = 57U;
	static uint16_t x427 = 353U;
	volatile int64_t x428 = -91785803856292655LL;
	volatile int32_t t94 = -41412313;

    t94 = ((x425-x426)*(x427>x428));

    if (t94 != 56) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x429 = 246118413;
	static int16_t x430 = INT16_MAX;
	static uint64_t x431 = UINT64_MAX;
	static uint32_t x432 = 5U;

    t95 = ((x429-x430)*(x431>x432));

    if (t95 != 246085646) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x434 = UINT32_MAX;
	uint64_t x435 = 52LLU;
	volatile uint32_t t96 = 126U;

    t96 = ((x433-x434)*(x435>x436));

    if (t96 != 128U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x437 = INT16_MIN;
	int64_t x438 = -10080803090142252LL;
	int8_t x439 = -1;
	volatile uint32_t x440 = 2U;
	volatile int64_t t97 = -460364112LL;

    t97 = ((x437-x438)*(x439>x440));

    if (t97 != 10080803090109484LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x441 = UINT64_MAX;
	int64_t x442 = INT64_MAX;
	uint32_t x443 = 1431324U;
	int8_t x444 = INT8_MIN;
	uint64_t t98 = 5735614275507288671LLU;

    t98 = ((x441-x442)*(x443>x444));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x445 = INT16_MIN;
	uint32_t x446 = UINT32_MAX;
	uint32_t x447 = UINT32_MAX;
	static int32_t x448 = INT32_MIN;

    t99 = ((x445-x446)*(x447>x448));

    if (t99 != 4294934529U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x450 = UINT64_MAX;
	int32_t x451 = INT32_MIN;
	static uint64_t x452 = 71423606LLU;
	uint64_t t100 = 2571418409LLU;

    t100 = ((x449-x450)*(x451>x452));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x453 = 65U;
	uint16_t x454 = UINT16_MAX;
	int64_t x456 = -1LL;
	int32_t t101 = -116;

    t101 = ((x453-x454)*(x455>x456));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x457 = -1;
	int32_t x458 = 23;
	static uint32_t x459 = 19191062U;
	int16_t x460 = INT16_MIN;
	volatile int32_t t102 = 456832968;

    t102 = ((x457-x458)*(x459>x460));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x461 = 12U;
	int16_t x462 = 0;
	int32_t x464 = 5453423;
	int32_t t103 = -447445;

    t103 = ((x461-x462)*(x463>x464));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x467 = 1970203;
	static uint16_t x468 = 6897U;
	volatile int64_t t104 = -1452371245539LL;

    t104 = ((x465-x466)*(x467>x468));

    if (t104 != -128LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x469 = -1;
	int64_t x472 = INT64_MAX;
	static volatile uint32_t t105 = 41U;

    t105 = ((x469-x470)*(x471>x472));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x477 = -1;
	int16_t x478 = 325;
	int16_t x479 = -55;
	int16_t x480 = INT16_MIN;
	volatile int32_t t106 = 74;

    t106 = ((x477-x478)*(x479>x480));

    if (t106 != -326) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x481 = 182402042031LLU;
	static volatile int16_t x483 = INT16_MAX;

    t107 = ((x481-x482)*(x483>x484));

    if (t107 != 18442223706766245573LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x486 = -1;
	volatile int8_t x487 = INT8_MAX;
	volatile int32_t t108 = -196847147;

    t108 = ((x485-x486)*(x487>x488));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x492 = 44;
	static volatile int32_t t109 = -8;

    t109 = ((x489-x490)*(x491>x492));

    if (t109 != -7) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x497 = -958268225;
	uint32_t x499 = UINT32_MAX;
	uint32_t x500 = 107037089U;
	volatile int32_t t110 = 0;

    t110 = ((x497-x498)*(x499>x500));

    if (t110 != -958268220) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x501 = INT16_MIN;
	int32_t x502 = -29076573;
	int32_t x504 = -37;
	int32_t t111 = 634;

    t111 = ((x501-x502)*(x503>x504));

    if (t111 != 29043805) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x507 = INT16_MIN;
	volatile int32_t t112 = 63352;

    t112 = ((x505-x506)*(x507>x508));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x517 = UINT8_MAX;
	int16_t x518 = -3;
	int8_t x519 = INT8_MIN;
	static int16_t x520 = -1;
	volatile int32_t t113 = 1272;

    t113 = ((x517-x518)*(x519>x520));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x525 = -1;
	static int32_t x526 = INT32_MIN;
	volatile int16_t x527 = -1;
	volatile int16_t x528 = INT16_MIN;
	static volatile int32_t t114 = INT32_MAX;

    t114 = ((x525-x526)*(x527>x528));

    if (t114 != INT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x529 = -1;
	volatile uint8_t x530 = 1U;
	int32_t x531 = INT32_MAX;
	uint64_t x532 = UINT64_MAX;
	volatile int32_t t115 = 1819;

    t115 = ((x529-x530)*(x531>x532));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x533 = -1;
	int8_t x535 = INT8_MIN;
	int64_t x536 = INT64_MIN;
	int64_t t116 = -689652257375340025LL;

    t116 = ((x533-x534)*(x535>x536));

    if (t116 != 52LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x537 = UINT8_MAX;
	uint64_t x538 = 124084LLU;
	int8_t x539 = 1;
	int32_t x540 = INT32_MIN;

    t117 = ((x537-x538)*(x539>x540));

    if (t117 != 18446744073709427787LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x541 = -6755;
	static uint8_t x542 = 48U;
	volatile int8_t x543 = 1;
	int64_t x544 = -1LL;
	int32_t t118 = 1;

    t118 = ((x541-x542)*(x543>x544));

    if (t118 != -6803) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x553 = -1;
	volatile int32_t x554 = INT32_MIN;
	int64_t x555 = INT64_MIN;
	static uint16_t x556 = 14951U;
	int32_t t119 = -1074;

    t119 = ((x553-x554)*(x555>x556));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x557 = UINT16_MAX;
	int8_t x558 = 1;
	static uint32_t x560 = 3U;
	volatile int32_t t120 = 346792;

    t120 = ((x557-x558)*(x559>x560));

    if (t120 != 65534) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x561 = -58563173;
	int32_t t121 = 2;

    t121 = ((x561-x562)*(x563>x564));

    if (t121 != -58563172) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x565 = UINT64_MAX;
	static int32_t x566 = INT32_MAX;
	int64_t x568 = INT64_MIN;

    t122 = ((x565-x566)*(x567>x568));

    if (t122 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x573 = -1;
	int8_t x574 = -1;
	volatile int8_t x575 = -1;
	volatile uint64_t x576 = 2555449288150481LLU;
	static int32_t t123 = -988408207;

    t123 = ((x573-x574)*(x575>x576));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x577 = 36;
	int64_t x578 = INT64_MAX;
	int16_t x579 = INT16_MAX;
	static int64_t x580 = INT64_MIN;
	int64_t t124 = -1912643787LL;

    t124 = ((x577-x578)*(x579>x580));

    if (t124 != -9223372036854775771LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x582 = 42;
	uint32_t x583 = 688U;
	volatile uint8_t x584 = UINT8_MAX;
	volatile int32_t t125 = 8119;

    t125 = ((x581-x582)*(x583>x584));

    if (t125 != -37) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x585 = 0;
	volatile uint8_t x587 = 107U;
	static int32_t t126 = -48;

    t126 = ((x585-x586)*(x587>x588));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x593 = 2573205990572LL;
	static uint64_t x594 = 310284456432504787LLU;
	int16_t x595 = 1;
	int8_t x596 = INT8_MAX;
	volatile uint64_t t127 = 146106205999011LLU;

    t127 = ((x593-x594)*(x595>x596));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x597 = -60;
	int64_t x598 = INT64_MIN;
	int8_t x599 = -44;
	static uint8_t x600 = UINT8_MAX;
	volatile int64_t t128 = 1477513406804812LL;

    t128 = ((x597-x598)*(x599>x600));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x601 = 5U;
	uint64_t x602 = 106160LLU;
	uint64_t x603 = 27823LLU;
	static int8_t x604 = INT8_MIN;
	volatile uint64_t t129 = 327595512676LLU;

    t129 = ((x601-x602)*(x603>x604));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x607 = 8U;
	int32_t x608 = -1;

    t130 = ((x605-x606)*(x607>x608));

    if (t130 != -2130532704) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint16_t x613 = 25U;
	int8_t x614 = INT8_MAX;
	volatile uint64_t x615 = 370LLU;
	volatile uint32_t x616 = 1749241U;
	volatile int32_t t131 = -44;

    t131 = ((x613-x614)*(x615>x616));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x618 = -1;
	static uint16_t x619 = 391U;
	uint32_t x620 = 59605249U;
	static volatile int32_t t132 = 1;

    t132 = ((x617-x618)*(x619>x620));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x621 = UINT64_MAX;
	int16_t x622 = -1;
	int8_t x623 = -1;
	int64_t x624 = -1LL;
	uint64_t t133 = 2191509LLU;

    t133 = ((x621-x622)*(x623>x624));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x628 = INT16_MAX;

    t134 = ((x625-x626)*(x627>x628));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x629 = 2187LL;
	volatile int64_t x632 = INT64_MAX;

    t135 = ((x629-x630)*(x631>x632));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x633 = -22508849;
	volatile int8_t x634 = -1;
	uint16_t x635 = 29U;
	volatile int32_t x636 = -1046961548;
	volatile int32_t t136 = 26690083;

    t136 = ((x633-x634)*(x635>x636));

    if (t136 != -22508848) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x637 = 9U;
	int16_t x639 = INT16_MIN;
	volatile int64_t x640 = INT64_MAX;
	volatile uint32_t t137 = 79279U;

    t137 = ((x637-x638)*(x639>x640));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x642 = INT16_MAX;
	static int32_t t138 = 1044;

    t138 = ((x641-x642)*(x643>x644));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x645 = INT32_MIN;
	uint32_t x646 = UINT32_MAX;
	volatile int64_t x648 = INT64_MAX;

    t139 = ((x645-x646)*(x647>x648));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x650 = 0LL;
	int64_t x651 = INT64_MIN;
	static uint32_t x652 = 276921U;
	int64_t t140 = 61165287697LL;

    t140 = ((x649-x650)*(x651>x652));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x653 = UINT8_MAX;
	uint8_t x655 = UINT8_MAX;
	volatile int64_t x656 = INT64_MAX;
	static int32_t t141 = -5744199;

    t141 = ((x653-x654)*(x655>x656));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x658 = INT16_MIN;
	int8_t x659 = INT8_MAX;
	volatile int16_t x660 = -39;
	static int32_t t142 = -430289;

    t142 = ((x657-x658)*(x659>x660));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x661 = -26;
	int32_t x662 = 20569;
	uint64_t x663 = UINT64_MAX;
	int32_t t143 = 32276;

    t143 = ((x661-x662)*(x663>x664));

    if (t143 != -20595) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x667 = -1;
	uint64_t x668 = 0LLU;
	int32_t t144 = -351521486;

    t144 = ((x665-x666)*(x667>x668));

    if (t144 != -258) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x669 = 785U;
	volatile int8_t x670 = -1;
	uint32_t x671 = UINT32_MAX;
	int32_t x672 = -1;

    t145 = ((x669-x670)*(x671>x672));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x674 = -63;
	uint64_t x676 = 191569LLU;
	volatile int32_t t146 = -22829;

    t146 = ((x673-x674)*(x675>x676));

    if (t146 != 64) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x677 = INT16_MAX;
	volatile uint32_t x678 = 32U;
	volatile int64_t x680 = 11377084LL;
	volatile uint32_t t147 = 7891U;

    t147 = ((x677-x678)*(x679>x680));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x681 = 7871037858LLU;
	static int8_t x682 = -1;
	int64_t x684 = -26776669178164LL;

    t148 = ((x681-x682)*(x683>x684));

    if (t148 != 7871037859LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x685 = INT16_MAX;
	int8_t x686 = INT8_MIN;
	int32_t x687 = -157958495;
	volatile int16_t x688 = 2397;
	int32_t t149 = 501;

    t149 = ((x685-x686)*(x687>x688));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x689 = UINT8_MAX;
	uint8_t x690 = 31U;
	int16_t x691 = INT16_MIN;
	int16_t x692 = -1;
	int32_t t150 = 106;

    t150 = ((x689-x690)*(x691>x692));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x693 = 0U;
	uint64_t x694 = UINT64_MAX;
	int32_t x695 = -1;
	static volatile uint64_t t151 = 17196LLU;

    t151 = ((x693-x694)*(x695>x696));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x697 = UINT16_MAX;
	static uint16_t x698 = 11280U;
	uint64_t x699 = 500030693LLU;
	int32_t t152 = -657764275;

    t152 = ((x697-x698)*(x699>x700));

    if (t152 != 54255) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x701 = -1;
	static int32_t x702 = INT32_MIN;
	static int64_t x703 = -56914589LL;
	volatile int32_t t153 = -907574044;

    t153 = ((x701-x702)*(x703>x704));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint8_t x705 = 7U;
	volatile int8_t x707 = -12;
	int32_t x708 = INT32_MIN;
	uint32_t t154 = 1U;

    t154 = ((x705-x706)*(x707>x708));

    if (t154 != 8U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x709 = INT32_MIN;
	uint32_t x710 = UINT32_MAX;
	static volatile int32_t x711 = INT32_MAX;
	int32_t x712 = INT32_MIN;

    t155 = ((x709-x710)*(x711>x712));

    if (t155 != 2147483649U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x718 = -2298420331811LL;
	int64_t x719 = -463320265278048099LL;
	int64_t x720 = -1LL;
	int64_t t156 = -6985993352951LL;

    t156 = ((x717-x718)*(x719>x720));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x722 = -1;
	uint32_t x723 = UINT32_MAX;
	volatile int16_t x724 = INT16_MIN;
	int64_t t157 = -7360LL;

    t157 = ((x721-x722)*(x723>x724));

    if (t157 != 55797351012254LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x737 = 22U;
	int64_t x740 = 0LL;
	static int32_t t158 = -36;

    t158 = ((x737-x738)*(x739>x740));

    if (t158 != 24) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x750 = 0U;
	static int64_t x751 = INT64_MAX;
	uint32_t x752 = 129424U;
	int32_t t159 = 912690;

    t159 = ((x749-x750)*(x751>x752));

    if (t159 != 534) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x753 = -1;
	static int16_t x754 = INT16_MIN;
	uint8_t x755 = UINT8_MAX;

    t160 = ((x753-x754)*(x755>x756));

    if (t160 != 32767) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x757 = 7352LLU;
	uint64_t x758 = 711892688453LLU;
	int8_t x759 = INT8_MIN;
	uint64_t t161 = 2955768105LLU;

    t161 = ((x757-x758)*(x759>x760));

    if (t161 != 18446743361816870515LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x762 = INT64_MIN;
	int8_t x763 = INT8_MIN;
	static uint64_t x764 = UINT64_MAX;
	static volatile int64_t t162 = -1LL;

    t162 = ((x761-x762)*(x763>x764));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x765 = INT32_MIN;
	int64_t x766 = 42LL;
	uint8_t x767 = 11U;
	uint64_t x768 = UINT64_MAX;
	int64_t t163 = 224952LL;

    t163 = ((x765-x766)*(x767>x768));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x773 = -1;
	int32_t x774 = INT32_MIN;
	volatile int32_t x775 = INT32_MIN;
	int32_t t164 = 1191;

    t164 = ((x773-x774)*(x775>x776));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x780 = 108U;
	uint64_t t165 = 282492836312605897LLU;

    t165 = ((x777-x778)*(x779>x780));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x781 = INT32_MIN;
	int16_t x782 = INT16_MIN;
	int8_t x783 = INT8_MIN;
	uint16_t x784 = 146U;
	volatile int32_t t166 = 797595;

    t166 = ((x781-x782)*(x783>x784));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x785 = INT8_MAX;
	int32_t x786 = -1;
	volatile uint8_t x787 = 4U;
	static int32_t x788 = INT32_MIN;
	int32_t t167 = -916;

    t167 = ((x785-x786)*(x787>x788));

    if (t167 != 128) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x795 = INT32_MAX;
	int32_t x796 = -1;

    t168 = ((x793-x794)*(x795>x796));

    if (t168 != 91) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x801 = INT32_MIN;
	int64_t x802 = -43LL;
	volatile uint16_t x803 = 3U;
	uint16_t x804 = 69U;
	static int64_t t169 = -28611452LL;

    t169 = ((x801-x802)*(x803>x804));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x805 = 185511831U;
	int16_t x806 = INT16_MIN;
	int64_t x807 = INT64_MIN;
	int64_t x808 = INT64_MIN;
	static uint32_t t170 = 337545573U;

    t170 = ((x805-x806)*(x807>x808));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x809 = INT8_MIN;
	uint64_t x810 = UINT64_MAX;
	int8_t x811 = 6;
	static int64_t x812 = INT64_MIN;
	volatile uint64_t t171 = 25904131100LLU;

    t171 = ((x809-x810)*(x811>x812));

    if (t171 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x813 = INT8_MIN;
	uint64_t x814 = 1LLU;
	uint64_t x815 = 1933274944506166578LLU;
	int16_t x816 = INT16_MIN;
	uint64_t t172 = 2152642752474LLU;

    t172 = ((x813-x814)*(x815>x816));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x817 = -200LL;
	int32_t x818 = -1;
	uint32_t x819 = 2609U;
	int8_t x820 = INT8_MIN;
	static volatile int64_t t173 = 890380554LL;

    t173 = ((x817-x818)*(x819>x820));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x821 = -1;
	static int32_t x822 = -1;
	int32_t x823 = 18758682;
	volatile int32_t x824 = 442586;
	volatile int32_t t174 = -21370;

    t174 = ((x821-x822)*(x823>x824));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x825 = INT64_MIN;
	int64_t x828 = -283LL;
	volatile int64_t t175 = 275558LL;

    t175 = ((x825-x826)*(x827>x828));

    if (t175 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x829 = 273U;
	int32_t x830 = INT32_MAX;
	int32_t x831 = INT32_MIN;
	uint8_t x832 = 19U;
	int32_t t176 = -2331944;

    t176 = ((x829-x830)*(x831>x832));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x833 = -14050550266764LL;
	int8_t x834 = INT8_MIN;
	int64_t x835 = -8202289563638595LL;
	uint32_t x836 = UINT32_MAX;
	volatile int64_t t177 = -881LL;

    t177 = ((x833-x834)*(x835>x836));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x837 = -4367020;
	int64_t x838 = 108736700499LL;
	int32_t x839 = -1;
	int8_t x840 = INT8_MIN;
	int64_t t178 = 7361359LL;

    t178 = ((x837-x838)*(x839>x840));

    if (t178 != -108741067519LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x849 = -7141;
	volatile uint16_t x850 = UINT16_MAX;
	uint16_t x851 = 1U;
	int16_t x852 = -1;
	volatile int32_t t179 = -115505;

    t179 = ((x849-x850)*(x851>x852));

    if (t179 != -72676) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x853 = 741641028LL;
	volatile uint16_t x854 = 1U;
	static int8_t x855 = INT8_MIN;
	int8_t x856 = INT8_MAX;

    t180 = ((x853-x854)*(x855>x856));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x857 = INT16_MIN;
	uint64_t x858 = UINT64_MAX;
	int64_t x859 = -1LL;
	volatile int8_t x860 = -2;
	volatile uint64_t t181 = 29316471710017839LLU;

    t181 = ((x857-x858)*(x859>x860));

    if (t181 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x861 = UINT64_MAX;
	int16_t x862 = INT16_MAX;
	uint32_t x863 = 10677954U;
	int16_t x864 = INT16_MIN;
	uint64_t t182 = 1616244593LLU;

    t182 = ((x861-x862)*(x863>x864));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x865 = -711712934;
	static uint64_t x866 = UINT64_MAX;
	int32_t x867 = INT32_MIN;
	int32_t x868 = INT32_MIN;
	static volatile uint64_t t183 = 109710LLU;

    t183 = ((x865-x866)*(x867>x868));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x870 = INT8_MIN;
	int8_t x871 = INT8_MIN;
	int64_t x872 = INT64_MAX;
	volatile int32_t t184 = -195;

    t184 = ((x869-x870)*(x871>x872));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x873 = -12683661;
	volatile int8_t x875 = 1;
	int32_t x876 = INT32_MAX;
	volatile int32_t t185 = 480;

    t185 = ((x873-x874)*(x875>x876));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x885 = 3U;
	static int16_t x886 = -55;
	int16_t x888 = -4684;

    t186 = ((x885-x886)*(x887>x888));

    if (t186 != 58U) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x889 = 1505;
	int8_t x890 = -1;
	static volatile uint8_t x891 = 0U;
	uint64_t x892 = 143618LLU;

    t187 = ((x889-x890)*(x891>x892));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x893 = INT8_MIN;
	int16_t x894 = INT16_MIN;
	uint64_t x895 = 125576744791369451LLU;
	volatile int32_t t188 = -56;

    t188 = ((x893-x894)*(x895>x896));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x897 = 5559177;
	int8_t x899 = -1;
	volatile int16_t x900 = -1;
	volatile int32_t t189 = 1;

    t189 = ((x897-x898)*(x899>x900));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x901 = INT64_MIN;
	volatile int32_t x902 = INT32_MIN;
	uint64_t x903 = 63477LLU;
	volatile int32_t x904 = -354;
	int64_t t190 = -75727333752862LL;

    t190 = ((x901-x902)*(x903>x904));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x905 = UINT32_MAX;
	static int64_t x906 = -10907136951LL;
	uint8_t x907 = UINT8_MAX;
	int32_t x908 = -416;

    t191 = ((x905-x906)*(x907>x908));

    if (t191 != 15202104246LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x909 = INT16_MIN;
	int8_t x910 = INT8_MIN;
	uint32_t x911 = 1U;
	uint32_t x912 = UINT32_MAX;
	volatile int32_t t192 = 760711272;

    t192 = ((x909-x910)*(x911>x912));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x913 = 10308;
	int8_t x914 = -1;
	volatile uint64_t x916 = UINT64_MAX;
	int32_t t193 = -11384;

    t193 = ((x913-x914)*(x915>x916));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x917 = 7U;
	int8_t x919 = -1;
	uint64_t x920 = 30305LLU;

    t194 = ((x917-x918)*(x919>x920));

    if (t194 != 135) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x921 = 202U;
	volatile int8_t x922 = INT8_MAX;
	volatile int16_t x923 = INT16_MIN;
	int32_t x924 = INT32_MIN;
	volatile int32_t t195 = -826054;

    t195 = ((x921-x922)*(x923>x924));

    if (t195 != 75) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x925 = 13U;
	static uint16_t x926 = 48U;
	int32_t x927 = INT32_MIN;
	int8_t x928 = INT8_MIN;
	int32_t t196 = -1137;

    t196 = ((x925-x926)*(x927>x928));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x929 = 1;
	static int16_t x930 = INT16_MIN;
	volatile int16_t x931 = INT16_MIN;
	int64_t x932 = -1LL;
	int32_t t197 = -71;

    t197 = ((x929-x930)*(x931>x932));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x933 = INT32_MIN;
	int32_t x934 = -42275948;
	int64_t x935 = -1LL;
	uint16_t x936 = UINT16_MAX;

    t198 = ((x933-x934)*(x935>x936));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x937 = INT8_MIN;
	uint64_t x938 = UINT64_MAX;
	static int64_t x939 = 523240LL;
	int8_t x940 = -2;
	volatile uint64_t t199 = 243045625490LLU;

    t199 = ((x937-x938)*(x939>x940));

    if (t199 != 18446744073709551489LLU) { NG(); } else { ; }
	
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

