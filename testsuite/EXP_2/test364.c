
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

volatile int64_t x4 = 23LL;
static uint8_t x12 = 0U;
uint8_t x25 = 0U;
int8_t x36 = 1;
int32_t x42 = INT32_MAX;
int16_t x44 = INT16_MIN;
static uint16_t x46 = 15682U;
volatile int64_t t12 = 1514464611723397LL;
volatile uint64_t x56 = 0LLU;
int8_t x57 = -1;
int64_t x60 = -1LL;
int64_t t14 = -4593622132893047516LL;
volatile int32_t x61 = INT32_MIN;
volatile uint16_t x66 = UINT16_MAX;
volatile uint32_t t17 = 877U;
uint8_t x78 = UINT8_MAX;
int16_t x90 = INT16_MIN;
int8_t x95 = -1;
static volatile uint64_t t21 = 26213599247741102LLU;
static volatile uint8_t x106 = 0U;
int64_t x116 = INT64_MAX;
static volatile int64_t t24 = -407477078002865LL;
uint32_t x120 = 1451123107U;
int64_t x139 = -1LL;
int16_t x141 = -10613;
volatile uint64_t x147 = 3067996650254LLU;
uint16_t x149 = 486U;
int32_t x150 = INT32_MIN;
int64_t x151 = INT64_MIN;
volatile int32_t x153 = -1;
int32_t x155 = 826718;
static uint16_t x161 = 40U;
static int16_t x171 = INT16_MIN;
int32_t t37 = 22346;
uint16_t x175 = UINT16_MAX;
uint16_t x180 = 1572U;
uint32_t x182 = 7856U;
int64_t x188 = -1LL;
int64_t t41 = 14518144080589469LL;
static int32_t x191 = INT32_MAX;
static int64_t x205 = INT64_MIN;
static volatile int8_t x207 = INT8_MAX;
static volatile uint64_t t47 = 1LLU;
volatile int32_t x223 = INT32_MIN;
int64_t x225 = -1LL;
int8_t x229 = 2;
static int16_t x231 = INT16_MIN;
int8_t x232 = INT8_MIN;
int64_t x233 = -5567LL;
static int16_t x244 = -62;
int16_t x252 = INT16_MIN;
volatile uint8_t x255 = 11U;
int64_t t57 = 222349926LL;
int64_t x267 = -2950104096LL;
uint8_t x269 = UINT8_MAX;
volatile int8_t x272 = 0;
static int8_t x273 = INT8_MAX;
uint32_t x298 = UINT32_MAX;
int8_t x318 = 13;
volatile int16_t x328 = INT16_MAX;
uint8_t x329 = 31U;
volatile uint8_t x333 = UINT8_MAX;
uint32_t x343 = UINT32_MAX;
uint16_t x357 = 3U;
uint16_t x358 = 4404U;
volatile int32_t x363 = -1;
volatile int64_t t78 = -949305541LL;
static volatile int64_t x366 = -246764527398LL;
static uint64_t t79 = 205240120529LLU;
uint8_t x375 = UINT8_MAX;
int8_t x380 = INT8_MIN;
static uint8_t x390 = 1U;
int16_t x392 = -1;
static volatile uint32_t t86 = 133U;
uint32_t x399 = 111U;
static int16_t x401 = -1;
static int8_t x405 = -1;
volatile uint16_t x409 = 118U;
uint8_t x411 = 3U;
volatile uint64_t x413 = UINT64_MAX;
int8_t x414 = INT8_MIN;
int8_t x415 = INT8_MIN;
volatile uint64_t t91 = UINT64_MAX;
uint64_t x427 = UINT64_MAX;
static uint32_t x428 = UINT32_MAX;
int64_t x429 = INT64_MAX;
int8_t x432 = INT8_MIN;
int64_t t95 = 349912482572LL;
uint32_t x438 = 95535U;
uint64_t x439 = 10959446730288457LLU;
volatile uint64_t t97 = 1810168195565912325LLU;
int64_t x442 = 59LL;
uint8_t x444 = 0U;
int64_t x448 = INT64_MIN;
int32_t x453 = -1;
uint16_t x487 = 1U;
int8_t x490 = INT8_MIN;
static int16_t x495 = 20;
volatile int32_t x496 = 41749;
int32_t x505 = INT32_MIN;
int16_t x507 = 1;
int16_t x514 = 71;
uint64_t t115 = 15783529774911252LLU;
volatile int8_t x526 = -1;
uint16_t x530 = 8626U;
uint8_t x532 = 103U;
volatile uint32_t t118 = 9634206U;
int32_t x539 = INT32_MAX;
static uint16_t x540 = 23U;
volatile int8_t x541 = -1;
volatile int16_t x543 = INT16_MAX;
uint16_t x544 = 29U;
volatile uint32_t t120 = 286815U;
int8_t x546 = -31;
volatile int32_t t121 = 11;
volatile int64_t x553 = INT64_MIN;
int16_t x555 = -1;
int16_t x563 = INT16_MIN;
static uint32_t t127 = 11U;
static int8_t x575 = INT8_MIN;
static int32_t x576 = INT32_MIN;
int8_t x583 = INT8_MIN;
static int8_t x586 = INT8_MIN;
uint8_t x592 = UINT8_MAX;
static int64_t x595 = INT64_MAX;
int64_t t133 = -3947LL;
int16_t x597 = 5;
int16_t x598 = INT16_MAX;
uint16_t x610 = 25717U;
uint64_t x616 = 1605974LLU;
volatile int64_t x617 = 24499LL;
volatile uint8_t x619 = 127U;
uint32_t x622 = 9U;
uint16_t x623 = UINT16_MAX;
uint16_t x627 = 3U;
int16_t x637 = -15;
volatile int64_t t143 = -1361995261658770237LL;
static int64_t x647 = 106LL;
volatile uint64_t t145 = 330LLU;
static volatile int8_t x666 = INT8_MIN;
volatile int32_t t147 = 22573215;
uint32_t t148 = 9494684U;
volatile uint32_t x681 = 12064U;
int32_t x689 = -1;
uint32_t x692 = 35227771U;
int16_t x694 = -287;
int64_t x696 = 36551607584LL;
static uint16_t x705 = 633U;
static int32_t x708 = -7392910;
int16_t x713 = INT16_MAX;
volatile uint64_t t159 = 121LLU;
int32_t x722 = INT32_MIN;
static int64_t x725 = INT64_MIN;
uint64_t t162 = 14744402347555131LLU;
static int64_t x730 = INT64_MAX;
int32_t x736 = INT32_MIN;
volatile int32_t t164 = INT32_MIN;
uint64_t x751 = 183749803619711212LLU;
volatile int64_t x756 = INT64_MAX;
uint32_t x759 = UINT32_MAX;
static uint16_t x764 = 2349U;
static int64_t t170 = -201500LL;
int32_t t172 = 53;
uint16_t x782 = UINT16_MAX;
int32_t t174 = -49355820;
int8_t x787 = INT8_MAX;
uint64_t t178 = 7675527124291726LLU;
static volatile uint64_t t179 = UINT64_MAX;
int32_t x819 = INT32_MAX;
volatile int8_t x820 = INT8_MIN;
uint16_t x823 = 1U;
int8_t x829 = 6;
int16_t x836 = 3;
int8_t x838 = INT8_MIN;
int16_t x852 = INT16_MAX;
uint32_t x854 = 65U;
uint16_t x855 = UINT16_MAX;
uint16_t x856 = 0U;
volatile int8_t x863 = -14;
uint64_t t193 = 2610175482811LLU;
int32_t x870 = -1;
volatile int16_t x874 = 264;
static int32_t x877 = INT32_MIN;
int32_t x888 = INT32_MIN;


void f0(void) {
    	static uint32_t x1 = 15U;
	int8_t x2 = INT8_MIN;
	int32_t x3 = INT32_MIN;
	volatile int64_t t0 = -1084521632LL;

    t0 = ((x1&(x2-x3))^x4);

    if (t0 != 23LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 7278640474LLU;
	volatile int64_t x6 = 29482101013037LL;
	int64_t x7 = 1593254LL;
	uint32_t x8 = 17741U;
	static volatile uint64_t t1 = 7961213721749637LLU;

    t1 = ((x5&(x6-x7))^x8);

    if (t1 != 269512015LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	volatile int8_t x10 = 14;
	static volatile uint16_t x11 = UINT16_MAX;
	volatile int32_t t2 = 6;

    t2 = ((x9&(x10-x11))^x12);

    if (t2 != -65521) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int8_t x14 = -1;
	static int32_t x15 = INT32_MIN;
	static int32_t x16 = -102143736;
	int32_t t3 = -1;

    t3 = ((x13&(x14-x15))^x16);

    if (t3 != -102143736) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	volatile int16_t x18 = 88;
	static uint8_t x19 = 0U;
	static uint16_t x20 = 4U;
	volatile int64_t t4 = -1LL;

    t4 = ((x17&(x18-x19))^x20);

    if (t4 != 92LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 1776489LLU;
	int32_t x22 = -838;
	int16_t x23 = -1;
	int16_t x24 = INT16_MIN;
	volatile uint64_t t5 = 129078181LLU;

    t5 = ((x21&(x22-x23))^x24);

    if (t5 != 18446744073707755561LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = INT64_MIN;
	int64_t x27 = -1LL;
	static volatile int8_t x28 = INT8_MIN;
	volatile int64_t t6 = 28LL;

    t6 = ((x25&(x26-x27))^x28);

    if (t6 != -128LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = UINT8_MAX;
	static int8_t x30 = INT8_MIN;
	int64_t x31 = INT64_MIN;
	int64_t x32 = 500LL;
	volatile int64_t t7 = 1677909316LL;

    t7 = ((x29&(x30-x31))^x32);

    if (t7 != 372LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x33 = 3U;
	static uint64_t x34 = 5398LLU;
	int32_t x35 = -1;
	volatile uint64_t t8 = 81LLU;

    t8 = ((x33&(x34-x35))^x36);

    if (t8 != 2LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 37U;
	int64_t x38 = 14594264LL;
	volatile uint8_t x39 = 2U;
	int64_t x40 = INT64_MAX;
	int64_t t9 = 138065645474LL;

    t9 = ((x37&(x38-x39))^x40);

    if (t9 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 1U;
	int64_t x43 = 735934695LL;
	static volatile int64_t t10 = 163528897583218LL;

    t10 = ((x41&(x42-x43))^x44);

    if (t10 != -32768LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 47U;
	int32_t x47 = INT32_MAX;
	int64_t x48 = 4244665634663443LL;
	static int64_t t11 = 1657260LL;

    t11 = ((x45&(x46-x47))^x48);

    if (t11 != 4244665634663440LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 83935143U;
	static int64_t x50 = -10132164255LL;
	volatile int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MAX;

    t12 = ((x49&(x50-x51))^x52);

    if (t12 != 67129054LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = 31891;
	int8_t x54 = -1;
	volatile int8_t x55 = -1;
	volatile uint64_t t13 = 1144058LLU;

    t13 = ((x53&(x54-x55))^x56);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x58 = INT32_MIN;
	int8_t x59 = INT8_MIN;

    t14 = ((x57&(x58-x59))^x60);

    if (t14 != 2147483519LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x62 = 51U;
	uint8_t x63 = UINT8_MAX;
	int8_t x64 = 2;
	static volatile int32_t t15 = 255;

    t15 = ((x61&(x62-x63))^x64);

    if (t15 != -2147483646) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = INT8_MIN;
	volatile int16_t x67 = INT16_MAX;
	static int16_t x68 = INT16_MIN;
	int32_t t16 = 15228;

    t16 = ((x65&(x66-x67))^x68);

    if (t16 != -65536) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -1;
	static uint32_t x70 = 0U;
	static uint32_t x71 = UINT32_MAX;
	static int16_t x72 = 0;

    t17 = ((x69&(x70-x71))^x72);

    if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	int16_t x74 = INT16_MIN;
	int16_t x75 = -1;
	int32_t x76 = INT32_MIN;
	int32_t t18 = 1959;

    t18 = ((x73&(x74-x75))^x76);

    if (t18 != 2147450880) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = -2200;
	int32_t x79 = -155;
	int64_t x80 = INT64_MAX;
	int64_t t19 = 4213439LL;

    t19 = ((x77&(x78-x79))^x80);

    if (t19 != 9223372036854775543LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x89 = -2707LL;
	static uint32_t x91 = UINT32_MAX;
	static int64_t x92 = -1LL;
	static int64_t t20 = 494195LL;

    t20 = ((x89&(x90-x91))^x92);

    if (t20 != -4294934530LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x93 = -907815401;
	uint64_t x94 = UINT64_MAX;
	int64_t x96 = INT64_MIN;

    t21 = ((x93&(x94-x95))^x96);

    if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x105 = INT32_MAX;
	uint16_t x107 = 907U;
	int16_t x108 = -1;
	static int32_t t22 = -91;

    t22 = ((x105&(x106-x107))^x108);

    if (t22 != -2147482742) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x109 = -1;
	static volatile int8_t x110 = INT8_MIN;
	int32_t x111 = -700;
	volatile int32_t x112 = INT32_MIN;
	int32_t t23 = 234953297;

    t23 = ((x109&(x110-x111))^x112);

    if (t23 != -2147483076) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x113 = -1;
	int8_t x114 = 14;
	int64_t x115 = -1LL;

    t24 = ((x113&(x114-x115))^x116);

    if (t24 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x117 = -319;
	static int8_t x118 = 3;
	uint32_t x119 = UINT32_MAX;
	uint32_t t25 = 2276U;

    t25 = ((x117&(x118-x119))^x120);

    if (t25 != 1451123107U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x121 = INT8_MAX;
	static int32_t x122 = INT32_MIN;
	int32_t x123 = -20;
	volatile int16_t x124 = -1;
	int32_t t26 = 3494530;

    t26 = ((x121&(x122-x123))^x124);

    if (t26 != -21) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x125 = 804;
	int16_t x126 = -1;
	int16_t x127 = -1;
	uint64_t x128 = 4598LLU;
	volatile uint64_t t27 = 124LLU;

    t27 = ((x125&(x126-x127))^x128);

    if (t27 != 4598LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x129 = -1;
	int16_t x130 = 250;
	uint16_t x131 = 778U;
	volatile uint16_t x132 = 202U;
	static volatile int32_t t28 = 9431378;

    t28 = ((x129&(x130-x131))^x132);

    if (t28 != -710) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x137 = -1;
	int32_t x138 = INT32_MAX;
	int8_t x140 = -1;
	int64_t t29 = -18753LL;

    t29 = ((x137&(x138-x139))^x140);

    if (t29 != -2147483649LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x142 = 1U;
	int32_t x143 = INT32_MIN;
	int16_t x144 = 435;
	volatile uint32_t t30 = 9U;

    t30 = ((x141&(x142-x143))^x144);

    if (t30 != 2147484082U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x145 = INT16_MAX;
	int64_t x146 = 530448113777328521LL;
	uint16_t x148 = 145U;
	uint64_t t31 = 435028418183999468LLU;

    t31 = ((x145&(x146-x147))^x148);

    if (t31 != 1770LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x152 = -35705946264630LL;
	volatile int64_t t32 = 4LL;

    t32 = ((x149&(x150-x151))^x152);

    if (t32 != -35705946264630LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x154 = 80U;
	int32_t x156 = INT32_MAX;
	volatile int32_t t33 = -71623;

    t33 = ((x153&(x154-x155))^x156);

    if (t33 != -2146657011) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x157 = INT16_MIN;
	int8_t x158 = -1;
	int16_t x159 = 0;
	int16_t x160 = INT16_MAX;
	int32_t t34 = 86746;

    t34 = ((x157&(x158-x159))^x160);

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x162 = 567648955528380137LL;
	uint64_t x163 = 7769LLU;
	int16_t x164 = -1;
	volatile uint64_t t35 = UINT64_MAX;

    t35 = ((x161&(x162-x163))^x164);

    if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x165 = -1;
	static int32_t x166 = -1;
	uint32_t x167 = UINT32_MAX;
	uint32_t x168 = 253U;
	static uint32_t t36 = 24017844U;

    t36 = ((x165&(x166-x167))^x168);

    if (t36 != 253U) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x169 = 47U;
	volatile int8_t x170 = INT8_MAX;
	int32_t x172 = -41;

    t37 = ((x169&(x170-x171))^x172);

    if (t37 != -8) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x173 = INT32_MIN;
	int8_t x174 = INT8_MAX;
	static volatile uint32_t x176 = 1799124947U;
	uint32_t t38 = 14279174U;

    t38 = ((x173&(x174-x175))^x176);

    if (t38 != 3946608595U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x177 = INT32_MIN;
	static int32_t x178 = -1;
	uint16_t x179 = UINT16_MAX;
	int32_t t39 = 346;

    t39 = ((x177&(x178-x179))^x180);

    if (t39 != -2147482076) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x181 = 4U;
	int16_t x183 = 50;
	int32_t x184 = INT32_MIN;
	uint32_t t40 = 43U;

    t40 = ((x181&(x182-x183))^x184);

    if (t40 != 2147483652U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x185 = UINT32_MAX;
	volatile int32_t x186 = -1;
	uint32_t x187 = 1959346424U;

    t41 = ((x185&(x186-x187))^x188);

    if (t41 != -2335620872LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x189 = INT64_MIN;
	int64_t x190 = 1975177999144LL;
	uint16_t x192 = UINT16_MAX;
	static volatile int64_t t42 = 1404164LL;

    t42 = ((x189&(x190-x191))^x192);

    if (t42 != 65535LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x193 = UINT32_MAX;
	volatile uint16_t x194 = UINT16_MAX;
	static volatile uint8_t x195 = 26U;
	static int32_t x196 = INT32_MAX;
	uint32_t t43 = 124U;

    t43 = ((x193&(x194-x195))^x196);

    if (t43 != 2147418138U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x197 = 45867888333LLU;
	static int8_t x198 = INT8_MAX;
	int8_t x199 = INT8_MIN;
	uint8_t x200 = UINT8_MAX;
	static uint64_t t44 = 7656472380LLU;

    t44 = ((x197&(x198-x199))^x200);

    if (t44 != 50LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x201 = INT32_MIN;
	volatile int16_t x202 = -7528;
	static volatile int32_t x203 = -1;
	int16_t x204 = INT16_MAX;
	volatile int32_t t45 = -7;

    t45 = ((x201&(x202-x203))^x204);

    if (t45 != -2147450881) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x206 = -1;
	int8_t x208 = -26;
	volatile int64_t t46 = 9946888031688LL;

    t46 = ((x205&(x206-x207))^x208);

    if (t46 != 9223372036854775782LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x209 = 41373491LLU;
	int16_t x210 = INT16_MIN;
	int64_t x211 = 144839855LL;
	static volatile uint16_t x212 = UINT16_MAX;

    t47 = ((x209&(x210-x211))^x212);

    if (t47 != 39171310LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x217 = UINT8_MAX;
	uint16_t x218 = 149U;
	volatile uint16_t x219 = UINT16_MAX;
	static int64_t x220 = INT64_MAX;
	volatile int64_t t48 = -230651LL;

    t48 = ((x217&(x218-x219))^x220);

    if (t48 != 9223372036854775657LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x221 = 0U;
	int32_t x222 = -7;
	volatile int64_t x224 = -1LL;
	volatile int64_t t49 = -106228808636612LL;

    t49 = ((x221&(x222-x223))^x224);

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x226 = INT8_MIN;
	int8_t x227 = INT8_MAX;
	int64_t x228 = -2107LL;
	volatile int64_t t50 = -4638190057LL;

    t50 = ((x225&(x226-x227))^x228);

    if (t50 != 2244LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x230 = -1;
	volatile int32_t t51 = -7;

    t51 = ((x229&(x230-x231))^x232);

    if (t51 != -126) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x234 = INT8_MAX;
	int32_t x235 = -1;
	int64_t x236 = INT64_MIN;
	volatile int64_t t52 = INT64_MIN;

    t52 = ((x233&(x234-x235))^x236);

    if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x241 = UINT16_MAX;
	int16_t x242 = INT16_MIN;
	int64_t x243 = -1419121381LL;
	int64_t t53 = 0LL;

    t53 = ((x241&(x242-x243))^x244);

    if (t53 != -37593LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x245 = 499U;
	static int16_t x246 = INT16_MIN;
	static int8_t x247 = INT8_MIN;
	static int32_t x248 = INT32_MIN;
	int32_t t54 = 455259217;

    t54 = ((x245&(x246-x247))^x248);

    if (t54 != -2147483520) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int16_t x249 = INT16_MIN;
	static int16_t x250 = INT16_MIN;
	volatile int8_t x251 = INT8_MIN;
	static int32_t t55 = -5772070;

    t55 = ((x249&(x250-x251))^x252);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x253 = 63428859U;
	int32_t x254 = -256154;
	int16_t x256 = INT16_MIN;
	uint32_t t56 = 63U;

    t56 = ((x253&(x254-x255))^x256);

    if (t56 != 4231762011U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x257 = 2430U;
	static int8_t x258 = INT8_MIN;
	static uint8_t x259 = UINT8_MAX;
	int64_t x260 = -1380624LL;

    t57 = ((x257&(x258-x259))^x260);

    if (t57 != -1382672LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x265 = 732;
	static int64_t x266 = 31LL;
	int16_t x268 = INT16_MAX;
	static volatile int64_t t58 = 130386LL;

    t58 = ((x265&(x266-x267))^x268);

    if (t58 != 32739LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x270 = INT8_MIN;
	static int8_t x271 = -1;
	volatile int32_t t59 = 0;

    t59 = ((x269&(x270-x271))^x272);

    if (t59 != 129) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x274 = INT8_MIN;
	volatile int8_t x275 = INT8_MIN;
	int32_t x276 = -521872574;
	int32_t t60 = 483;

    t60 = ((x273&(x274-x275))^x276);

    if (t60 != -521872574) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x285 = 1026688705LL;
	int32_t x286 = -473;
	int64_t x287 = -1LL;
	int8_t x288 = -1;
	int64_t t61 = 0LL;

    t61 = ((x285&(x286-x287))^x288);

    if (t61 != -1026688513LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x289 = UINT8_MAX;
	int16_t x290 = 5415;
	int64_t x291 = -1LL;
	int8_t x292 = -6;
	static volatile int64_t t62 = 134LL;

    t62 = ((x289&(x290-x291))^x292);

    if (t62 != -46LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x297 = -8195380;
	int32_t x299 = INT32_MIN;
	volatile int32_t x300 = INT32_MAX;
	uint32_t t63 = 874102363U;

    t63 = ((x297&(x298-x299))^x300);

    if (t63 != 8195379U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x301 = INT64_MIN;
	uint32_t x302 = 4U;
	static volatile uint32_t x303 = 40U;
	uint64_t x304 = 428904188LLU;
	uint64_t t64 = 436073595098597LLU;

    t64 = ((x301&(x302-x303))^x304);

    if (t64 != 428904188LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x305 = UINT16_MAX;
	int16_t x306 = INT16_MIN;
	uint16_t x307 = 10U;
	int32_t x308 = 688949;
	volatile int32_t t65 = -58908726;

    t65 = ((x305&(x306-x307))^x308);

    if (t65 != 720067) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x309 = INT16_MIN;
	uint8_t x310 = 31U;
	volatile int16_t x311 = INT16_MAX;
	static int16_t x312 = INT16_MIN;
	int32_t t66 = -709572;

    t66 = ((x309&(x310-x311))^x312);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x313 = 1707U;
	int8_t x314 = INT8_MIN;
	volatile int16_t x315 = -1;
	int64_t x316 = -299114611460831LL;
	int64_t t67 = 1LL;

    t67 = ((x313&(x314-x315))^x316);

    if (t67 != -299114611461216LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x317 = INT64_MAX;
	int32_t x319 = -1;
	volatile int32_t x320 = INT32_MIN;
	volatile int64_t t68 = -70854LL;

    t68 = ((x317&(x318-x319))^x320);

    if (t68 != -2147483634LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MAX;
	int16_t x327 = -1;
	int64_t t69 = -1990037LL;

    t69 = ((x325&(x326-x327))^x328);

    if (t69 != 32767LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x330 = UINT8_MAX;
	uint64_t x331 = 4992313893086190LLU;
	int16_t x332 = 172;
	uint64_t t70 = 29692664258LLU;

    t70 = ((x329&(x330-x331))^x332);

    if (t70 != 189LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint32_t x334 = 108930830U;
	int16_t x335 = 23;
	int8_t x336 = INT8_MIN;
	static uint32_t t71 = 33544824U;

    t71 = ((x333&(x334-x335))^x336);

    if (t71 != 4294967159U) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x337 = 106837674U;
	static int16_t x338 = -1;
	static int8_t x339 = 0;
	int64_t x340 = INT64_MIN;
	volatile int64_t t72 = 34815285718806LL;

    t72 = ((x337&(x338-x339))^x340);

    if (t72 != -9223372036747938134LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x341 = INT32_MIN;
	uint64_t x342 = UINT64_MAX;
	int16_t x344 = INT16_MIN;
	static uint64_t t73 = 1877066087LLU;

    t73 = ((x341&(x342-x343))^x344);

    if (t73 != 4294934528LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x345 = INT8_MIN;
	volatile uint8_t x346 = 2U;
	int8_t x347 = INT8_MIN;
	uint8_t x348 = 36U;
	static volatile int32_t t74 = 13;

    t74 = ((x345&(x346-x347))^x348);

    if (t74 != 164) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x349 = INT64_MAX;
	uint32_t x350 = 51U;
	uint8_t x351 = 3U;
	int32_t x352 = INT32_MAX;
	int64_t t75 = -173273LL;

    t75 = ((x349&(x350-x351))^x352);

    if (t75 != 2147483599LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x353 = 6434309LL;
	static volatile int8_t x354 = INT8_MAX;
	int16_t x355 = 0;
	volatile int32_t x356 = INT32_MAX;
	volatile int64_t t76 = -587473200LL;

    t76 = ((x353&(x354-x355))^x356);

    if (t76 != 2147483642LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x359 = 122;
	volatile uint32_t x360 = UINT32_MAX;
	volatile uint32_t t77 = 15804U;

    t77 = ((x357&(x358-x359))^x360);

    if (t77 != 4294967293U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x361 = 7866U;
	int64_t x362 = -1LL;
	uint16_t x364 = UINT16_MAX;

    t78 = ((x361&(x362-x363))^x364);

    if (t78 != 65535LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x365 = INT16_MIN;
	uint64_t x367 = 1968879027096LLU;
	int16_t x368 = INT16_MIN;

    t79 = ((x365&(x366-x367))^x368);

    if (t79 != 2215643545600LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x369 = INT64_MIN;
	int16_t x370 = INT16_MAX;
	int32_t x371 = 0;
	uint16_t x372 = 606U;
	volatile int64_t t80 = -117LL;

    t80 = ((x369&(x370-x371))^x372);

    if (t80 != 606LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x373 = 0;
	volatile int16_t x374 = 1259;
	volatile int32_t x376 = -1;
	volatile int32_t t81 = 494465242;

    t81 = ((x373&(x374-x375))^x376);

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x377 = UINT8_MAX;
	int32_t x378 = INT32_MIN;
	static int16_t x379 = -1;
	volatile int32_t t82 = -959760963;

    t82 = ((x377&(x378-x379))^x380);

    if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x381 = -1;
	static int32_t x382 = INT32_MIN;
	volatile uint64_t x383 = UINT64_MAX;
	int16_t x384 = INT16_MIN;
	volatile uint64_t t83 = 1733498000267LLU;

    t83 = ((x381&(x382-x383))^x384);

    if (t83 != 2147450881LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x385 = 59667716007065LLU;
	uint8_t x386 = UINT8_MAX;
	uint32_t x387 = 984278301U;
	int8_t x388 = INT8_MIN;
	static uint64_t t84 = 9282695447LLU;

    t84 = ((x385&(x386-x387))^x388);

    if (t84 != 18446744072618770176LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x389 = -32661144919253LL;
	uint32_t x391 = UINT32_MAX;
	int64_t t85 = -27009063636123LL;

    t85 = ((x389&(x390-x391))^x392);

    if (t85 != -3LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x393 = INT32_MIN;
	uint32_t x394 = 5266U;
	int16_t x395 = -1;
	volatile int16_t x396 = -81;

    t86 = ((x393&(x394-x395))^x396);

    if (t86 != 4294967215U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x397 = -1;
	int8_t x398 = 12;
	static uint64_t x400 = UINT64_MAX;
	uint64_t t87 = 7486779744801415657LLU;

    t87 = ((x397&(x398-x399))^x400);

    if (t87 != 18446744069414584418LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x402 = UINT32_MAX;
	volatile int16_t x403 = 12444;
	int32_t x404 = INT32_MAX;
	volatile uint32_t t88 = 118846166U;

    t88 = ((x401&(x402-x403))^x404);

    if (t88 != 2147496092U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x406 = 2666U;
	volatile int64_t x407 = -1LL;
	static uint16_t x408 = 450U;
	static int64_t t89 = -45110LL;

    t89 = ((x405&(x406-x407))^x408);

    if (t89 != 2985LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x410 = 461U;
	int64_t x412 = -10481159477506LL;
	volatile int64_t t90 = 95188588247935LL;

    t90 = ((x409&(x410-x411))^x412);

    if (t90 != -10481159477572LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x416 = -1;

    t91 = ((x413&(x414-x415))^x416);

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x417 = 4346746U;
	int64_t x418 = -15LL;
	static int8_t x419 = 1;
	volatile int16_t x420 = INT16_MIN;
	int64_t t92 = 9100487812584LL;

    t92 = ((x417&(x418-x419))^x420);

    if (t92 != -4336784LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x421 = INT16_MIN;
	int8_t x422 = 15;
	int64_t x423 = 223637922401213LL;
	volatile int8_t x424 = INT8_MIN;
	int64_t t93 = -1451487536423LL;

    t93 = ((x421&(x422-x423))^x424);

    if (t93 != 223637922414464LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x425 = 45059LLU;
	static int64_t x426 = -23887352863350633LL;
	uint64_t t94 = 124724LLU;

    t94 = ((x425&(x426-x427))^x428);

    if (t94 != 4294926335LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x430 = 111444955U;
	int64_t x431 = INT64_MAX;

    t95 = ((x429&(x430-x431))^x432);

    if (t95 != -111444900LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x433 = INT64_MAX;
	int16_t x434 = -123;
	uint16_t x435 = 28538U;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t96 = 3052969331121LLU;

    t96 = ((x433&(x434-x435))^x436);

    if (t96 != 9223372036854804468LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x437 = INT8_MIN;
	int16_t x440 = INT16_MIN;

    t97 = ((x437&(x438-x439))^x440);

    if (t97 != 10959446730196864LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x441 = UINT8_MAX;
	int16_t x443 = -1;
	volatile int64_t t98 = 21810779464LL;

    t98 = ((x441&(x442-x443))^x444);

    if (t98 != 60LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x445 = 4062243603541LLU;
	static volatile uint16_t x446 = 25257U;
	int32_t x447 = -1;
	static uint64_t t99 = 27079LLU;

    t99 = ((x445&(x446-x447))^x448);

    if (t99 != 9223372036854792192LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x454 = 5906609216LLU;
	static uint8_t x455 = 19U;
	volatile int32_t x456 = INT32_MIN;
	static volatile uint64_t t100 = 1030822741596144LLU;

    t100 = ((x453&(x454-x455))^x456);

    if (t100 != 18446744068878742573LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x457 = 1061063U;
	volatile uint32_t x458 = 400452U;
	uint16_t x459 = UINT16_MAX;
	static volatile uint8_t x460 = UINT8_MAX;
	uint32_t t101 = 641494U;

    t101 = ((x457&(x458-x459))^x460);

    if (t101 != 4282U) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x461 = 16948492756LLU;
	int8_t x462 = INT8_MAX;
	uint32_t x463 = 11U;
	uint8_t x464 = 9U;
	volatile uint64_t t102 = 525431758LLU;

    t102 = ((x461&(x462-x463))^x464);

    if (t102 != 93LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x465 = INT64_MIN;
	int8_t x466 = INT8_MIN;
	int8_t x467 = INT8_MIN;
	volatile int8_t x468 = INT8_MAX;
	int64_t t103 = -2065028680LL;

    t103 = ((x465&(x466-x467))^x468);

    if (t103 != 127LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x469 = 9U;
	uint64_t x470 = UINT64_MAX;
	uint16_t x471 = 3511U;
	int32_t x472 = INT32_MAX;
	static volatile uint64_t t104 = 388331112LLU;

    t104 = ((x469&(x470-x471))^x472);

    if (t104 != 2147483639LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x473 = -1;
	volatile uint64_t x474 = UINT64_MAX;
	static uint64_t x475 = 62311LLU;
	volatile uint32_t x476 = UINT32_MAX;
	volatile uint64_t t105 = 2709547257LLU;

    t105 = ((x473&(x474-x475))^x476);

    if (t105 != 18446744069414646631LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x477 = 989604U;
	volatile int8_t x478 = INT8_MAX;
	volatile uint32_t x479 = UINT32_MAX;
	int16_t x480 = -1;
	uint32_t t106 = 47U;

    t106 = ((x477&(x478-x479))^x480);

    if (t106 != 4294967167U) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x485 = 26U;
	volatile uint8_t x486 = UINT8_MAX;
	int8_t x488 = INT8_MIN;
	volatile uint32_t t107 = 16U;

    t107 = ((x485&(x486-x487))^x488);

    if (t107 != 4294967194U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x489 = -1;
	static volatile int64_t x491 = INT64_MIN;
	volatile int32_t x492 = INT32_MAX;
	volatile int64_t t108 = 9026326127LL;

    t108 = ((x489&(x490-x491))^x492);

    if (t108 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x493 = 1U;
	int16_t x494 = 0;
	volatile int32_t t109 = 18929;

    t109 = ((x493&(x494-x495))^x496);

    if (t109 != 41749) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x497 = 12994U;
	int16_t x498 = INT16_MAX;
	static volatile uint32_t x499 = 3372313U;
	volatile uint64_t x500 = 5728934331200628LLU;
	uint64_t t110 = 7307347LLU;

    t110 = ((x497&(x498-x499))^x500);

    if (t110 != 5728934331201206LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x501 = -1LL;
	static volatile uint32_t x502 = 3145675U;
	static int32_t x503 = INT32_MAX;
	int16_t x504 = INT16_MIN;
	volatile int64_t t111 = -72576LL;

    t111 = ((x501&(x502-x503))^x504);

    if (t111 != -2150596660LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x506 = -31460331036275312LL;
	int32_t x508 = INT32_MAX;
	volatile int64_t t112 = -130653255111227465LL;

    t112 = ((x505&(x506-x507))^x508);

    if (t112 != -31460330500521985LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x513 = -1;
	int8_t x515 = -1;
	uint32_t x516 = 5U;
	uint32_t t113 = 1820910683U;

    t113 = ((x513&(x514-x515))^x516);

    if (t113 != 77U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x517 = 53134126LLU;
	int8_t x518 = INT8_MIN;
	volatile int16_t x519 = -1;
	int64_t x520 = INT64_MIN;
	static uint64_t t114 = 259738749667005747LLU;

    t114 = ((x517&(x518-x519))^x520);

    if (t114 != 9223372036907909888LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x521 = 6U;
	volatile uint64_t x522 = UINT64_MAX;
	int16_t x523 = INT16_MAX;
	static int32_t x524 = INT32_MIN;

    t115 = ((x521&(x522-x523))^x524);

    if (t115 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x525 = INT8_MAX;
	int16_t x527 = INT16_MIN;
	int32_t x528 = INT32_MIN;
	int32_t t116 = -1;

    t116 = ((x525&(x526-x527))^x528);

    if (t116 != -2147483521) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x529 = -44LL;
	int8_t x531 = -1;
	static volatile int64_t t117 = 30LL;

    t117 = ((x529&(x530-x531))^x532);

    if (t117 != 8695LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x533 = 127U;
	uint32_t x534 = 70U;
	uint8_t x535 = 21U;
	int16_t x536 = INT16_MIN;

    t118 = ((x533&(x534-x535))^x536);

    if (t118 != 4294934577U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x537 = 54954205541695742LLU;
	uint8_t x538 = UINT8_MAX;
	uint64_t t119 = 5887042836839227582LLU;

    t119 = ((x537&(x538-x539))^x540);

    if (t119 != 54954205336567831LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x542 = UINT32_MAX;

    t120 = ((x541&(x542-x543))^x544);

    if (t120 != 4294934557U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x545 = 0;
	uint16_t x547 = UINT16_MAX;
	uint16_t x548 = 17907U;

    t121 = ((x545&(x546-x547))^x548);

    if (t121 != 17907) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x549 = INT64_MIN;
	uint64_t x550 = 3900322071543566403LLU;
	int16_t x551 = INT16_MIN;
	static volatile uint32_t x552 = 1U;
	volatile uint64_t t122 = 0LLU;

    t122 = ((x549&(x550-x551))^x552);

    if (t122 != 1LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x554 = UINT16_MAX;
	int32_t x556 = INT32_MAX;
	static volatile int64_t t123 = 3619124LL;

    t123 = ((x553&(x554-x555))^x556);

    if (t123 != 2147483647LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x557 = 22;
	static volatile int8_t x558 = INT8_MIN;
	static int16_t x559 = INT16_MIN;
	volatile int16_t x560 = INT16_MAX;
	static int32_t t124 = -4396;

    t124 = ((x557&(x558-x559))^x560);

    if (t124 != 32767) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x561 = 0;
	int8_t x562 = INT8_MIN;
	volatile int64_t x564 = INT64_MIN;
	volatile int64_t t125 = INT64_MIN;

    t125 = ((x561&(x562-x563))^x564);

    if (t125 != INT64_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x565 = -1;
	int32_t x566 = INT32_MIN;
	volatile int8_t x567 = INT8_MIN;
	volatile int8_t x568 = 0;
	static int32_t t126 = -636741;

    t126 = ((x565&(x566-x567))^x568);

    if (t126 != -2147483520) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x569 = INT16_MIN;
	static int16_t x570 = INT16_MAX;
	volatile uint32_t x571 = 148192U;
	static int16_t x572 = -1;

    t127 = ((x569&(x570-x571))^x572);

    if (t127 != 131071U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x573 = 440;
	uint32_t x574 = 106895198U;
	volatile uint32_t t128 = 1761525540U;

    t128 = ((x573&(x574-x575))^x576);

    if (t128 != 2147484056U) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint16_t x577 = 6387U;
	volatile int16_t x578 = 2;
	int8_t x579 = INT8_MIN;
	int16_t x580 = -84;
	volatile int32_t t129 = -14224;

    t129 = ((x577&(x578-x579))^x580);

    if (t129 != -210) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x581 = -46;
	volatile int8_t x582 = -1;
	static int64_t x584 = INT64_MAX;
	int64_t t130 = 55LL;

    t130 = ((x581&(x582-x583))^x584);

    if (t130 != 9223372036854775725LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x585 = -28;
	int64_t x587 = INT64_MIN;
	int64_t x588 = INT64_MIN;
	volatile int64_t t131 = -3052704505774060085LL;

    t131 = ((x585&(x586-x587))^x588);

    if (t131 != -128LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x589 = INT16_MAX;
	volatile int16_t x590 = -6;
	static int32_t x591 = -166607241;
	static volatile int32_t t132 = -345956031;

    t132 = ((x589&(x590-x591))^x592);

    if (t132 != 14716) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x593 = 140U;
	int8_t x594 = -1;
	int64_t x596 = 6894738403306485LL;

    t133 = ((x593&(x594-x595))^x596);

    if (t133 != 6894738403306485LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x599 = -35;
	uint64_t x600 = UINT64_MAX;
	uint64_t t134 = UINT64_MAX;

    t134 = ((x597&(x598-x599))^x600);

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x601 = INT32_MAX;
	volatile int8_t x602 = INT8_MIN;
	volatile uint64_t x603 = UINT64_MAX;
	static int16_t x604 = 517;
	uint64_t t135 = 1LLU;

    t135 = ((x601&(x602-x603))^x604);

    if (t135 != 2147483012LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x609 = 138U;
	int64_t x611 = -1LL;
	int8_t x612 = INT8_MIN;
	volatile int64_t t136 = 783273LL;

    t136 = ((x609&(x610-x611))^x612);

    if (t136 != -126LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x613 = 14451U;
	int64_t x614 = -439LL;
	static uint16_t x615 = 94U;
	volatile uint64_t t137 = 179950325323625701LLU;

    t137 = ((x613&(x614-x615))^x616);

    if (t137 != 1620277LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x618 = INT16_MAX;
	int32_t x620 = 21885;
	int64_t t138 = 1920464152498LL;

    t138 = ((x617&(x618-x619))^x620);

    if (t138 != 2813LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x621 = INT8_MAX;
	int16_t x624 = INT16_MIN;
	static volatile uint32_t t139 = 90339792U;

    t139 = ((x621&(x622-x623))^x624);

    if (t139 != 4294934538U) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x625 = INT32_MAX;
	int8_t x626 = INT8_MAX;
	static uint8_t x628 = 0U;
	volatile int32_t t140 = -7550;

    t140 = ((x625&(x626-x627))^x628);

    if (t140 != 124) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x629 = 2LLU;
	static uint64_t x630 = 34344LLU;
	static int64_t x631 = INT64_MIN;
	uint64_t x632 = 17977871838253220LLU;
	uint64_t t141 = 24757922LLU;

    t141 = ((x629&(x630-x631))^x632);

    if (t141 != 17977871838253220LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x633 = 6195525510095969LLU;
	static uint32_t x634 = 3992U;
	int32_t x635 = -1;
	int32_t x636 = 8;
	volatile uint64_t t142 = 9956LLU;

    t142 = ((x633&(x634-x635))^x636);

    if (t142 != 1033LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x638 = INT64_MIN;
	int64_t x639 = INT64_MIN;
	int32_t x640 = INT32_MIN;

    t143 = ((x637&(x638-x639))^x640);

    if (t143 != -2147483648LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x641 = 5;
	int16_t x642 = INT16_MIN;
	int8_t x643 = 0;
	uint8_t x644 = 1U;
	static int32_t t144 = 1929;

    t144 = ((x641&(x642-x643))^x644);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x645 = 18LLU;
	static int8_t x646 = -17;
	volatile int8_t x648 = INT8_MIN;

    t145 = ((x645&(x646-x647))^x648);

    if (t145 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x649 = INT32_MIN;
	static uint8_t x650 = UINT8_MAX;
	volatile uint8_t x651 = 23U;
	int32_t x652 = -968856354;
	volatile int32_t t146 = -862079;

    t146 = ((x649&(x650-x651))^x652);

    if (t146 != -968856354) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x665 = -1;
	uint8_t x667 = 30U;
	int32_t x668 = -1;

    t147 = ((x665&(x666-x667))^x668);

    if (t147 != 157) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x669 = 9U;
	uint16_t x670 = 1865U;
	static volatile int16_t x671 = INT16_MAX;
	int16_t x672 = 58;

    t148 = ((x669&(x670-x671))^x672);

    if (t148 != 50U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x673 = UINT8_MAX;
	uint64_t x674 = 11770192888955350LLU;
	uint64_t x675 = 1990225218212LLU;
	volatile int64_t x676 = INT64_MIN;
	volatile uint64_t t149 = 314211876978LLU;

    t149 = ((x673&(x674-x675))^x676);

    if (t149 != 9223372036854775858LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x677 = 5225502363969LL;
	static uint16_t x678 = 100U;
	int8_t x679 = INT8_MIN;
	int32_t x680 = -1662378;
	static int64_t t150 = -637993178343217LL;

    t150 = ((x677&(x678-x679))^x680);

    if (t150 != -1662442LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x682 = UINT32_MAX;
	static uint16_t x683 = 4U;
	volatile int8_t x684 = 0;
	volatile uint32_t t151 = 5874U;

    t151 = ((x681&(x682-x683))^x684);

    if (t151 != 12064U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x685 = INT8_MIN;
	int16_t x686 = INT16_MIN;
	volatile int64_t x687 = -5541LL;
	static int32_t x688 = 1153;
	int64_t t152 = 30944LL;

    t152 = ((x685&(x686-x687))^x688);

    if (t152 != -28415LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x690 = INT32_MIN;
	volatile uint64_t x691 = UINT64_MAX;
	static volatile uint64_t t153 = 502289LLU;

    t153 = ((x689&(x690-x691))^x692);

    if (t153 != 18446744071597295738LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x693 = 1U;
	static volatile int16_t x695 = INT16_MIN;
	volatile int64_t t154 = 6065852949122LL;

    t154 = ((x693&(x694-x695))^x696);

    if (t154 != 36551607585LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x697 = INT32_MIN;
	int64_t x698 = -2357LL;
	volatile int16_t x699 = -1;
	int32_t x700 = -1;
	int64_t t155 = -2LL;

    t155 = ((x697&(x698-x699))^x700);

    if (t155 != 2147483647LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x701 = UINT64_MAX;
	volatile uint64_t x702 = 8521382635423323LLU;
	int8_t x703 = INT8_MIN;
	uint8_t x704 = 0U;
	uint64_t t156 = 20151134859LLU;

    t156 = ((x701&(x702-x703))^x704);

    if (t156 != 8521382635423451LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x706 = INT16_MIN;
	uint16_t x707 = 438U;
	volatile int32_t t157 = 26211700;

    t157 = ((x705&(x706-x707))^x708);

    if (t157 != -7392454) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x709 = -22;
	int64_t x710 = 7029474301140813LL;
	volatile int32_t x711 = INT32_MAX;
	int8_t x712 = 0;
	int64_t t158 = 3238LL;

    t158 = ((x709&(x710-x711))^x712);

    if (t158 != 7029472153657162LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x714 = 15154716U;
	uint64_t x715 = UINT64_MAX;
	int32_t x716 = INT32_MIN;

    t159 = ((x713&(x714-x715))^x716);

    if (t159 != 18446744071562083869LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x717 = -1;
	uint8_t x718 = 41U;
	int16_t x719 = INT16_MAX;
	int32_t x720 = -5;
	int32_t t160 = 142;

    t160 = ((x717&(x718-x719))^x720);

    if (t160 != 32721) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x721 = INT32_MIN;
	int16_t x723 = INT16_MIN;
	uint8_t x724 = 62U;
	volatile int32_t t161 = -166;

    t161 = ((x721&(x722-x723))^x724);

    if (t161 != -2147483586) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x726 = -1;
	static uint64_t x727 = UINT64_MAX;
	static int32_t x728 = INT32_MIN;

    t162 = ((x725&(x726-x727))^x728);

    if (t162 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x729 = UINT32_MAX;
	volatile int16_t x731 = INT16_MAX;
	static int16_t x732 = 321;
	volatile int64_t t163 = 12LL;

    t163 = ((x729&(x730-x731))^x732);

    if (t163 != 4294934849LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x733 = 0U;
	int16_t x734 = -15;
	int8_t x735 = -1;

    t164 = ((x733&(x734-x735))^x736);

    if (t164 != INT32_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x737 = INT8_MIN;
	static uint64_t x738 = 124881200217LLU;
	volatile uint8_t x739 = 18U;
	int64_t x740 = INT64_MIN;
	static volatile uint64_t t165 = 8081LLU;

    t165 = ((x737&(x738-x739))^x740);

    if (t165 != 9223372161735975936LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x741 = -1;
	volatile int64_t x742 = -1LL;
	uint16_t x743 = UINT16_MAX;
	int8_t x744 = INT8_MAX;
	int64_t t166 = -525621779780981LL;

    t166 = ((x741&(x742-x743))^x744);

    if (t166 != -65409LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x749 = 22;
	static uint8_t x750 = 0U;
	int8_t x752 = INT8_MIN;
	volatile uint64_t t167 = 58248LLU;

    t167 = ((x749&(x750-x751))^x752);

    if (t167 != 18446744073709551508LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x753 = INT16_MIN;
	uint16_t x754 = 2193U;
	int16_t x755 = -3720;
	volatile int64_t t168 = INT64_MAX;

    t168 = ((x753&(x754-x755))^x756);

    if (t168 != INT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x757 = -1;
	uint8_t x758 = 1U;
	static int64_t x760 = INT64_MIN;
	int64_t t169 = -34740LL;

    t169 = ((x757&(x758-x759))^x760);

    if (t169 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x761 = INT64_MAX;
	int32_t x762 = INT32_MAX;
	uint32_t x763 = 221U;

    t170 = ((x761&(x762-x763))^x764);

    if (t170 != 2147481103LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x769 = 4152814129084459068LLU;
	int8_t x770 = -1;
	volatile int16_t x771 = INT16_MIN;
	int32_t x772 = 55;
	static volatile uint64_t t171 = 0LLU;

    t171 = ((x769&(x770-x771))^x772);

    if (t171 != 26635LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x773 = -7;
	static int8_t x774 = INT8_MIN;
	int32_t x775 = INT32_MIN;
	uint16_t x776 = UINT16_MAX;

    t172 = ((x773&(x774-x775))^x776);

    if (t172 != 2147418239) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x777 = 0;
	volatile int64_t x778 = INT64_MIN;
	int16_t x779 = -3;
	volatile int8_t x780 = 7;
	volatile int64_t t173 = -29290342263736LL;

    t173 = ((x777&(x778-x779))^x780);

    if (t173 != 7LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x781 = -4;
	int16_t x783 = 11;
	int32_t x784 = INT32_MIN;

    t174 = ((x781&(x782-x783))^x784);

    if (t174 != -2147418124) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x785 = 1554U;
	static int32_t x786 = INT32_MAX;
	int8_t x788 = INT8_MAX;
	static volatile int32_t t175 = 19506;

    t175 = ((x785&(x786-x787))^x788);

    if (t175 != 1663) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x789 = INT32_MIN;
	uint16_t x790 = 0U;
	int64_t x791 = INT64_MAX;
	int8_t x792 = INT8_MIN;
	volatile int64_t t176 = -17547LL;

    t176 = ((x789&(x790-x791))^x792);

    if (t176 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int64_t x793 = -1LL;
	static int64_t x794 = INT64_MAX;
	static volatile int64_t x795 = INT64_MAX;
	int8_t x796 = INT8_MAX;
	int64_t t177 = -244335LL;

    t177 = ((x793&(x794-x795))^x796);

    if (t177 != 127LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x797 = 453256504;
	static uint64_t x798 = UINT64_MAX;
	int32_t x799 = 3412;
	int64_t x800 = INT64_MAX;

    t178 = ((x797&(x798-x799))^x800);

    if (t178 != 9223372036401520599LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x801 = -11997085440LL;
	uint32_t x802 = 0U;
	int16_t x803 = INT16_MIN;
	uint64_t x804 = UINT64_MAX;

    t179 = ((x801&(x802-x803))^x804);

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x805 = 620168850518570LL;
	int16_t x806 = INT16_MIN;
	static volatile int8_t x807 = INT8_MAX;
	static uint32_t x808 = 712U;
	int64_t t180 = 354354792606553LL;

    t180 = ((x805&(x806-x807))^x808);

    if (t180 != 620168850518216LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x809 = 619268397458LL;
	volatile uint16_t x810 = 106U;
	int32_t x811 = INT32_MAX;
	static volatile int32_t x812 = -554895701;
	volatile int64_t t181 = -114425LL;

    t181 = ((x809&(x810-x811))^x812);

    if (t181 != -619030186327LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x817 = INT64_MIN;
	int8_t x818 = -1;
	static volatile int64_t t182 = -909316041007672690LL;

    t182 = ((x817&(x818-x819))^x820);

    if (t182 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint16_t x821 = UINT16_MAX;
	int16_t x822 = INT16_MAX;
	int64_t x824 = INT64_MIN;
	int64_t t183 = -32035446LL;

    t183 = ((x821&(x822-x823))^x824);

    if (t183 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x825 = INT16_MAX;
	int16_t x826 = INT16_MIN;
	static int16_t x827 = -1;
	volatile uint16_t x828 = 42U;
	volatile int32_t t184 = -6913749;

    t184 = ((x825&(x826-x827))^x828);

    if (t184 != 43) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x830 = -11551;
	int32_t x831 = INT32_MIN;
	int32_t x832 = INT32_MIN;
	volatile int32_t t185 = INT32_MIN;

    t185 = ((x829&(x830-x831))^x832);

    if (t185 != INT32_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x833 = -781LL;
	uint64_t x834 = UINT64_MAX;
	volatile int32_t x835 = 102678;
	static volatile uint64_t t186 = 3671725173LLU;

    t186 = ((x833&(x834-x835))^x836);

    if (t186 != 18446744073709448418LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x837 = 5U;
	static volatile uint32_t x839 = UINT32_MAX;
	int64_t x840 = -1LL;
	volatile int64_t t187 = -86992846192799552LL;

    t187 = ((x837&(x838-x839))^x840);

    if (t187 != -2LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x845 = UINT32_MAX;
	int32_t x846 = 319;
	static uint8_t x847 = 9U;
	int16_t x848 = INT16_MIN;
	uint32_t t188 = 26333U;

    t188 = ((x845&(x846-x847))^x848);

    if (t188 != 4294934838U) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x849 = INT32_MAX;
	int16_t x850 = INT16_MAX;
	static uint64_t x851 = UINT64_MAX;
	uint64_t t189 = 825417742315179LLU;

    t189 = ((x849&(x850-x851))^x852);

    if (t189 != 65535LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x853 = 129U;
	uint32_t t190 = 49007731U;

    t190 = ((x853&(x854-x855))^x856);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x857 = 1U;
	int8_t x858 = INT8_MIN;
	static volatile int16_t x859 = INT16_MIN;
	int16_t x860 = 6;
	int32_t t191 = -1069;

    t191 = ((x857&(x858-x859))^x860);

    if (t191 != 6) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int8_t x861 = -22;
	int32_t x862 = INT32_MIN;
	uint16_t x864 = UINT16_MAX;
	int32_t t192 = 753963;

    t192 = ((x861&(x862-x863))^x864);

    if (t192 != -2147418123) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x865 = INT16_MIN;
	static int64_t x866 = -1LL;
	int32_t x867 = -1;
	uint64_t x868 = 361848344350626048LLU;

    t193 = ((x865&(x866-x867))^x868);

    if (t193 != 361848344350626048LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x869 = -1;
	int32_t x871 = INT32_MIN;
	int8_t x872 = 1;
	static int32_t t194 = 7150932;

    t194 = ((x869&(x870-x871))^x872);

    if (t194 != 2147483646) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x873 = INT16_MAX;
	uint16_t x875 = UINT16_MAX;
	volatile uint16_t x876 = 611U;
	volatile int32_t t195 = 24;

    t195 = ((x873&(x874-x875))^x876);

    if (t195 != 874) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x878 = 951U;
	volatile uint8_t x879 = 4U;
	volatile int64_t x880 = INT64_MIN;
	static int64_t t196 = INT64_MIN;

    t196 = ((x877&(x878-x879))^x880);

    if (t196 != INT64_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x881 = -1LL;
	volatile uint64_t x882 = UINT64_MAX;
	static int16_t x883 = INT16_MAX;
	static int64_t x884 = INT64_MIN;
	volatile uint64_t t197 = 2607102737LLU;

    t197 = ((x881&(x882-x883))^x884);

    if (t197 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x885 = INT32_MAX;
	int32_t x886 = 0;
	int64_t x887 = -1LL;
	volatile int64_t t198 = 1986064LL;

    t198 = ((x885&(x886-x887))^x888);

    if (t198 != -2147483647LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x889 = -1;
	int8_t x890 = -5;
	int16_t x891 = INT16_MAX;
	volatile int32_t x892 = INT32_MIN;
	int32_t t199 = 852528;

    t199 = ((x889&(x890-x891))^x892);

    if (t199 != 2147450876) { NG(); } else { ; }
	
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

