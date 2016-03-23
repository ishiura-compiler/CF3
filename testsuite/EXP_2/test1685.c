
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

static int32_t x3 = INT32_MAX;
static volatile int64_t t1 = -42886003700LL;
static int64_t x10 = -32005LL;
int16_t x12 = INT16_MIN;
uint64_t x13 = 61643135874165751LLU;
int16_t x14 = -1;
volatile int32_t t3 = 15679145;
static int64_t x19 = INT64_MIN;
int32_t x24 = INT32_MAX;
static int8_t x32 = INT8_MIN;
int8_t x37 = INT8_MIN;
uint16_t x43 = 7U;
static int8_t x49 = INT8_MAX;
int32_t x52 = 1183;
static volatile int32_t t13 = 33406852;
static int16_t x59 = INT16_MAX;
int32_t x84 = -1;
int64_t x94 = -1LL;
int64_t t23 = -93LL;
int32_t t25 = 8240;
int64_t x109 = -1LL;
volatile int32_t t27 = 3349;
volatile uint32_t x120 = UINT32_MAX;
static int16_t x133 = -1;
uint64_t x148 = 1LLU;
volatile int16_t x149 = INT16_MIN;
static volatile int64_t t36 = 10LL;
int32_t t38 = -23066;
uint64_t x162 = UINT64_MAX;
volatile int64_t t39 = -1639766LL;
int16_t x166 = INT16_MIN;
int16_t x172 = -87;
int8_t x177 = INT8_MIN;
int32_t t43 = 280;
static int64_t x181 = INT64_MIN;
static int32_t x182 = 19;
static int32_t t45 = -21940;
uint32_t x192 = 64823995U;
int16_t x193 = -1;
int32_t x194 = INT32_MIN;
uint16_t x198 = 986U;
int8_t x199 = INT8_MAX;
int32_t x204 = INT32_MIN;
int8_t x207 = -1;
int16_t x208 = INT16_MIN;
uint64_t x210 = 1395318087304830325LLU;
int8_t x211 = INT8_MAX;
uint16_t x212 = 3422U;
volatile int16_t x213 = INT16_MIN;
volatile uint32_t x215 = 14U;
static uint16_t x216 = 30687U;
int64_t x222 = INT64_MIN;
static volatile uint64_t t54 = 1876202541314228602LLU;
int16_t x230 = INT16_MIN;
uint32_t x232 = 18395870U;
static volatile uint64_t t57 = 15352937716LLU;
static uint64_t x237 = 1098479832327477LLU;
int64_t x246 = INT64_MIN;
static int8_t x248 = INT8_MAX;
int32_t t60 = -4;
int64_t x249 = INT64_MIN;
uint32_t x250 = UINT32_MAX;
int8_t x252 = INT8_MIN;
static volatile int32_t t61 = -46443237;
uint16_t x261 = UINT16_MAX;
volatile int32_t t64 = 41903190;
volatile int32_t x266 = INT32_MAX;
int16_t x268 = -5095;
uint32_t x274 = UINT32_MAX;
int8_t x279 = 1;
uint64_t x289 = UINT64_MAX;
static uint64_t x293 = 1347788556LLU;
int8_t x302 = 33;
int16_t x308 = 6808;
uint8_t x314 = 15U;
static int64_t x315 = -549768LL;
volatile int32_t t77 = -28;
uint32_t x330 = 39607377U;
static volatile int64_t t81 = -67090523LL;
volatile int32_t t82 = -91;
volatile int32_t t83 = -844517456;
uint8_t x350 = 114U;
int8_t x353 = 0;
int8_t x354 = -1;
volatile uint8_t x364 = UINT8_MAX;
static int32_t t89 = -11124;
static uint32_t x366 = 7461U;
volatile int64_t t90 = -704719517LL;
static int32_t t91 = 96;
volatile int8_t x374 = INT8_MAX;
static uint64_t x375 = UINT64_MAX;
uint8_t x376 = 6U;
volatile uint8_t x379 = UINT8_MAX;
static uint64_t x382 = 123694980LLU;
volatile int8_t x383 = INT8_MIN;
uint32_t x387 = UINT32_MAX;
int32_t t97 = -2;
int16_t x403 = INT16_MIN;
int32_t x404 = INT32_MIN;
int32_t t99 = 909562683;
static volatile uint64_t x405 = 54564378355LLU;
static uint16_t x408 = UINT16_MAX;
volatile int32_t t100 = 475;
volatile int32_t x428 = 270851;
int16_t x430 = INT16_MAX;
uint16_t x431 = 6U;
static int32_t t106 = 1;
static int8_t x435 = INT8_MIN;
int16_t x437 = -1;
int32_t x443 = -1;
uint32_t x451 = UINT32_MAX;
uint32_t x452 = UINT32_MAX;
int64_t x453 = INT64_MIN;
uint16_t x459 = 1U;
uint16_t x461 = 8097U;
int32_t t114 = 52;
int8_t x466 = INT8_MIN;
uint8_t x468 = UINT8_MAX;
int32_t x469 = INT32_MIN;
uint32_t x470 = 708U;
volatile int64_t x477 = -1LL;
int32_t x478 = INT32_MIN;
uint8_t x490 = 0U;
int8_t x493 = INT8_MAX;
static uint8_t x498 = 64U;
int32_t x511 = INT32_MAX;
uint32_t t129 = 2183514U;
int64_t x526 = INT64_MIN;
static volatile int8_t x527 = -3;
int32_t x528 = INT32_MIN;
uint64_t x532 = 1870134LLU;
volatile uint32_t t132 = 68361711U;
static int64_t x544 = -38052632314716LL;
int64_t x545 = 44742852770LL;
volatile int64_t x548 = -3632606307195LL;
uint8_t x560 = 6U;
int8_t x563 = INT8_MIN;
uint32_t x565 = UINT32_MAX;
static volatile uint64_t t140 = 563132373999LLU;
volatile uint32_t x573 = UINT32_MAX;
uint8_t x582 = UINT8_MAX;
uint16_t x584 = UINT16_MAX;
volatile int32_t t144 = -14;
int32_t x587 = INT32_MAX;
uint32_t x588 = 31693U;
static int32_t t146 = 59;
static volatile int32_t t147 = -1728486;
volatile int32_t t150 = 3397580;
static volatile uint32_t x609 = UINT32_MAX;
uint16_t x610 = 92U;
int8_t x612 = INT8_MIN;
uint16_t x615 = 2919U;
volatile int32_t x620 = 212887;
volatile int32_t x622 = INT32_MAX;
int64_t x631 = 931LL;
static int16_t x632 = INT16_MIN;
uint16_t x636 = 2534U;
volatile int32_t t157 = 139763060;
static int8_t x638 = INT8_MIN;
int32_t x640 = INT32_MIN;
int64_t x644 = INT64_MIN;
volatile uint32_t x645 = UINT32_MAX;
int64_t x649 = -3820101LL;
int32_t t164 = -229414460;
volatile uint32_t x667 = UINT32_MAX;
int32_t x672 = INT32_MAX;
volatile uint8_t x674 = UINT8_MAX;
uint64_t x675 = UINT64_MAX;
volatile int32_t t167 = -109832;
volatile uint16_t x679 = 1U;
static int64_t x687 = -1LL;
static int8_t x689 = -1;
uint8_t x694 = UINT8_MAX;
static volatile int32_t t171 = -83943;
int64_t x699 = -8509081LL;
int64_t x705 = INT64_MAX;
int64_t x711 = INT64_MIN;
int16_t x713 = INT16_MAX;
uint8_t x719 = UINT8_MAX;
int32_t t178 = 1;
uint8_t x731 = 0U;
int32_t x747 = INT32_MIN;
uint64_t x749 = 394LLU;
static uint8_t x750 = 7U;
static volatile uint16_t x758 = 385U;
int64_t x762 = 1997LL;
static int32_t x770 = 13;
int64_t x771 = INT64_MIN;
int32_t x772 = 12558;
int32_t t192 = 3;
static volatile uint32_t t194 = 137920772U;
uint32_t t195 = 1050412345U;
volatile uint32_t x799 = 16313294U;
volatile int32_t t196 = -14;
volatile int64_t x801 = -30201342LL;
int32_t t197 = -934703;
int64_t x805 = INT64_MIN;
int64_t x806 = -1LL;
int32_t t198 = 1061358434;
uint8_t x809 = UINT8_MAX;
int64_t x810 = INT64_MIN;


void f0(void) {
    	volatile int32_t x1 = INT32_MIN;
	volatile uint16_t x2 = 832U;
	uint8_t x4 = 1U;
	volatile int32_t t0 = 123502389;

    t0 = ((x1>(x2>x3))%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 5910;
	int16_t x6 = INT16_MIN;
	uint64_t x7 = 365281LLU;
	int64_t x8 = 4210663872258007764LL;

    t1 = ((x5>(x6>x7))%x8);

    if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = UINT64_MAX;
	int8_t x11 = INT8_MIN;
	int32_t t2 = 967;

    t2 = ((x9>(x10>x11))%x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x15 = INT16_MIN;
	static volatile uint16_t x16 = 13U;

    t3 = ((x13>(x14>x15))%x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 58979;
	int16_t x18 = 1;
	volatile uint16_t x20 = UINT16_MAX;
	static int32_t t4 = 7569766;

    t4 = ((x17>(x18>x19))%x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	int8_t x22 = INT8_MIN;
	volatile int16_t x23 = 1253;
	int32_t t5 = 3;

    t5 = ((x21>(x22>x23))%x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	volatile int8_t x26 = -1;
	uint8_t x27 = UINT8_MAX;
	uint8_t x28 = 18U;
	int32_t t6 = 7;

    t6 = ((x25>(x26>x27))%x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 766491032625196LLU;
	uint16_t x30 = 3130U;
	uint64_t x31 = 8365608416283417LLU;
	static volatile int32_t t7 = -27265;

    t7 = ((x29>(x30>x31))%x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 157703937140LL;
	int8_t x34 = -1;
	volatile uint32_t x35 = 148818U;
	static int64_t x36 = -1LL;
	volatile int64_t t8 = -52181LL;

    t8 = ((x33>(x34>x35))%x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x38 = INT16_MIN;
	int16_t x39 = INT16_MIN;
	uint16_t x40 = UINT16_MAX;
	static int32_t t9 = -236;

    t9 = ((x37>(x38>x39))%x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	volatile uint16_t x42 = 9926U;
	static volatile int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -482150;

    t10 = ((x41>(x42>x43))%x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 4U;
	int32_t x46 = INT32_MAX;
	int16_t x47 = -1;
	static uint16_t x48 = 5U;
	int32_t t11 = -1;

    t11 = ((x45>(x46>x47))%x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x50 = INT8_MIN;
	static volatile int8_t x51 = INT8_MIN;
	volatile int32_t t12 = -5713;

    t12 = ((x49>(x50>x51))%x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 457322301U;
	static int64_t x54 = INT64_MAX;
	int8_t x55 = INT8_MAX;
	volatile int16_t x56 = -1;

    t13 = ((x53>(x54>x55))%x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 315348065625630546LLU;
	int64_t x58 = -1LL;
	int64_t x60 = INT64_MIN;
	volatile int64_t t14 = 54820357096337LL;

    t14 = ((x57>(x58>x59))%x60);

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 115U;
	static volatile int8_t x62 = INT8_MAX;
	int64_t x63 = -33252LL;
	int64_t x64 = -3630596492735LL;
	static volatile int64_t t15 = -62229470132680LL;

    t15 = ((x61>(x62>x63))%x64);

    if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MIN;
	int8_t x67 = INT8_MAX;
	static uint16_t x68 = 41U;
	int32_t t16 = -14410183;

    t16 = ((x65>(x66>x67))%x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = -479;
	int16_t x70 = -18;
	int32_t x71 = INT32_MAX;
	static uint16_t x72 = 30U;
	int32_t t17 = -826430;

    t17 = ((x69>(x70>x71))%x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x77 = 0;
	static int32_t x78 = INT32_MIN;
	int8_t x79 = INT8_MIN;
	volatile int8_t x80 = INT8_MIN;
	volatile int32_t t18 = -927;

    t18 = ((x77>(x78>x79))%x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x81 = INT32_MAX;
	static int32_t x82 = INT32_MIN;
	uint8_t x83 = UINT8_MAX;
	volatile int32_t t19 = 1847;

    t19 = ((x81>(x82>x83))%x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = 6U;
	uint32_t x86 = 6971770U;
	int8_t x87 = INT8_MIN;
	uint8_t x88 = 1U;
	int32_t t20 = -20573;

    t20 = ((x85>(x86>x87))%x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = -1;
	uint8_t x90 = UINT8_MAX;
	uint16_t x91 = 414U;
	volatile uint16_t x92 = UINT16_MAX;
	int32_t t21 = -5750;

    t21 = ((x89>(x90>x91))%x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x93 = INT32_MAX;
	uint32_t x95 = 6422457U;
	static uint8_t x96 = UINT8_MAX;
	volatile int32_t t22 = 1957515;

    t22 = ((x93>(x94>x95))%x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x97 = -430993874;
	static int8_t x98 = INT8_MIN;
	static int32_t x99 = -1;
	int64_t x100 = INT64_MIN;

    t23 = ((x97>(x98>x99))%x100);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x101 = 3U;
	uint32_t x102 = 1617580U;
	volatile int16_t x103 = -1;
	static uint16_t x104 = 2335U;
	static volatile int32_t t24 = -4805120;

    t24 = ((x101>(x102>x103))%x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x105 = 8060093661446LLU;
	volatile uint32_t x106 = 213U;
	uint32_t x107 = 217949914U;
	int8_t x108 = INT8_MIN;

    t25 = ((x105>(x106>x107))%x108);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x110 = 875864U;
	uint32_t x111 = 115558U;
	int8_t x112 = -18;
	int32_t t26 = 114844;

    t26 = ((x109>(x110>x111))%x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x113 = INT32_MIN;
	uint8_t x114 = UINT8_MAX;
	int64_t x115 = INT64_MIN;
	volatile int16_t x116 = -13332;

    t27 = ((x113>(x114>x115))%x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = -2;
	int64_t x118 = INT64_MIN;
	static int32_t x119 = INT32_MAX;
	uint32_t t28 = 30U;

    t28 = ((x117>(x118>x119))%x120);

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = INT8_MAX;
	int8_t x122 = INT8_MIN;
	volatile int8_t x123 = 3;
	uint64_t x124 = UINT64_MAX;
	volatile uint64_t t29 = 1172149LLU;

    t29 = ((x121>(x122>x123))%x124);

    if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x125 = 22U;
	int8_t x126 = -1;
	uint32_t x127 = UINT32_MAX;
	int8_t x128 = 5;
	int32_t t30 = 12995664;

    t30 = ((x125>(x126>x127))%x128);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = INT32_MIN;
	volatile int64_t x130 = INT64_MIN;
	int8_t x131 = -1;
	int64_t x132 = INT64_MAX;
	volatile int64_t t31 = 398LL;

    t31 = ((x129>(x130>x131))%x132);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x134 = 179771716U;
	int8_t x135 = 3;
	uint32_t x136 = 53939930U;
	uint32_t t32 = 22724U;

    t32 = ((x133>(x134>x135))%x136);

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x137 = INT32_MIN;
	uint64_t x138 = UINT64_MAX;
	int8_t x139 = INT8_MIN;
	int32_t x140 = -184495213;
	volatile int32_t t33 = -35004;

    t33 = ((x137>(x138>x139))%x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x141 = -14219;
	static int16_t x142 = 3302;
	static int16_t x143 = -1;
	static int16_t x144 = INT16_MIN;
	static int32_t t34 = 3637;

    t34 = ((x141>(x142>x143))%x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x145 = INT64_MAX;
	int32_t x146 = INT32_MIN;
	static uint32_t x147 = 1078133477U;
	static volatile uint64_t t35 = 10876623713475622LLU;

    t35 = ((x145>(x146>x147))%x148);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x150 = 80U;
	uint32_t x151 = 2373560U;
	int64_t x152 = INT64_MIN;

    t36 = ((x149>(x150>x151))%x152);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x153 = 25U;
	volatile int8_t x154 = INT8_MAX;
	int8_t x155 = -1;
	uint32_t x156 = 41789U;
	volatile uint32_t t37 = 245938U;

    t37 = ((x153>(x154>x155))%x156);

    if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x157 = 1;
	int16_t x158 = INT16_MIN;
	volatile uint8_t x159 = UINT8_MAX;
	static int32_t x160 = 43019123;

    t38 = ((x157>(x158>x159))%x160);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x161 = 2U;
	int16_t x163 = 1;
	int64_t x164 = -800LL;

    t39 = ((x161>(x162>x163))%x164);

    if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = INT16_MAX;
	static int16_t x167 = INT16_MIN;
	int8_t x168 = INT8_MIN;
	volatile int32_t t40 = -438849211;

    t40 = ((x165>(x166>x167))%x168);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x169 = INT64_MIN;
	volatile uint64_t x170 = UINT64_MAX;
	static int64_t x171 = INT64_MIN;
	volatile int32_t t41 = 111;

    t41 = ((x169>(x170>x171))%x172);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x173 = INT8_MAX;
	int8_t x174 = -1;
	int32_t x175 = -2;
	int64_t x176 = INT64_MIN;
	int64_t t42 = 78521966351593955LL;

    t42 = ((x173>(x174>x175))%x176);

    if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x178 = 0U;
	int64_t x179 = INT64_MIN;
	static int32_t x180 = INT32_MIN;

    t43 = ((x177>(x178>x179))%x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x183 = UINT16_MAX;
	int64_t x184 = -3107694031LL;
	volatile int64_t t44 = 12089299251482LL;

    t44 = ((x181>(x182>x183))%x184);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x185 = -1LL;
	uint16_t x186 = 18702U;
	static int64_t x187 = INT64_MIN;
	int16_t x188 = -111;

    t45 = ((x185>(x186>x187))%x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x189 = 0LL;
	int32_t x190 = INT32_MAX;
	static uint16_t x191 = UINT16_MAX;
	uint32_t t46 = 694870936U;

    t46 = ((x189>(x190>x191))%x192);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x195 = INT8_MAX;
	static int16_t x196 = -1;
	int32_t t47 = -171682018;

    t47 = ((x193>(x194>x195))%x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x197 = 2U;
	int64_t x200 = 701140866768LL;
	int64_t t48 = -3130361857220813LL;

    t48 = ((x197>(x198>x199))%x200);

    if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x201 = -3;
	uint64_t x202 = 739478642240015999LLU;
	uint64_t x203 = UINT64_MAX;
	int32_t t49 = 7;

    t49 = ((x201>(x202>x203))%x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x205 = UINT16_MAX;
	volatile int16_t x206 = -88;
	int32_t t50 = 2;

    t50 = ((x205>(x206>x207))%x208);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x209 = UINT32_MAX;
	volatile int32_t t51 = -1580235;

    t51 = ((x209>(x210>x211))%x212);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x214 = 0;
	int32_t t52 = 11322293;

    t52 = ((x213>(x214>x215))%x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x217 = -2;
	int64_t x218 = -23438138687LL;
	uint8_t x219 = UINT8_MAX;
	int32_t x220 = -1;
	volatile int32_t t53 = 46471353;

    t53 = ((x217>(x218>x219))%x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x221 = 414638852U;
	int16_t x223 = 0;
	static uint64_t x224 = 12928503085LLU;

    t54 = ((x221>(x222>x223))%x224);

    if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x225 = UINT8_MAX;
	uint16_t x226 = UINT16_MAX;
	int64_t x227 = INT64_MAX;
	int64_t x228 = INT64_MIN;
	volatile int64_t t55 = -528592142604020967LL;

    t55 = ((x225>(x226>x227))%x228);

    if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x229 = UINT16_MAX;
	static int64_t x231 = INT64_MIN;
	uint32_t t56 = 1737825U;

    t56 = ((x229>(x230>x231))%x232);

    if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x233 = 7262107LLU;
	static uint16_t x234 = UINT16_MAX;
	uint16_t x235 = 886U;
	static volatile uint64_t x236 = 45LLU;

    t57 = ((x233>(x234>x235))%x236);

    if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x238 = -1LL;
	static int32_t x239 = INT32_MIN;
	static uint64_t x240 = 31875652LLU;
	uint64_t t58 = 9750198274LLU;

    t58 = ((x237>(x238>x239))%x240);

    if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x241 = INT32_MIN;
	volatile int32_t x242 = 7673;
	int16_t x243 = INT16_MAX;
	uint8_t x244 = 8U;
	volatile int32_t t59 = -14;

    t59 = ((x241>(x242>x243))%x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x245 = 377406640162666968LL;
	int8_t x247 = INT8_MIN;

    t60 = ((x245>(x246>x247))%x248);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x251 = 4743;

    t61 = ((x249>(x250>x251))%x252);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x253 = -238259077;
	static int8_t x254 = INT8_MIN;
	int32_t x255 = 13114;
	volatile int64_t x256 = INT64_MAX;
	int64_t t62 = 419057280907443046LL;

    t62 = ((x253>(x254>x255))%x256);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x257 = -1;
	volatile int64_t x258 = -1LL;
	volatile uint16_t x259 = 4935U;
	volatile int16_t x260 = INT16_MIN;
	volatile int32_t t63 = 255925981;

    t63 = ((x257>(x258>x259))%x260);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x262 = INT8_MAX;
	uint16_t x263 = UINT16_MAX;
	int32_t x264 = -3934;

    t64 = ((x261>(x262>x263))%x264);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x265 = 62U;
	int64_t x267 = -1LL;
	int32_t t65 = 940;

    t65 = ((x265>(x266>x267))%x268);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x269 = 9939U;
	int32_t x270 = INT32_MIN;
	int64_t x271 = INT64_MIN;
	volatile int8_t x272 = INT8_MAX;
	static volatile int32_t t66 = -26;

    t66 = ((x269>(x270>x271))%x272);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int16_t x273 = INT16_MIN;
	static uint8_t x275 = 92U;
	static int64_t x276 = -330LL;
	static int64_t t67 = 11081LL;

    t67 = ((x273>(x274>x275))%x276);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x277 = INT64_MIN;
	uint32_t x278 = 595959U;
	int32_t x280 = -1;
	static volatile int32_t t68 = -16840757;

    t68 = ((x277>(x278>x279))%x280);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x281 = INT16_MIN;
	uint32_t x282 = 2100994054U;
	uint64_t x283 = UINT64_MAX;
	int16_t x284 = -13;
	volatile int32_t t69 = -12818826;

    t69 = ((x281>(x282>x283))%x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x285 = UINT16_MAX;
	uint32_t x286 = 63723651U;
	uint32_t x287 = 2688019U;
	int16_t x288 = -38;
	volatile int32_t t70 = -34717;

    t70 = ((x285>(x286>x287))%x288);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x290 = 37U;
	volatile int16_t x291 = 3;
	uint8_t x292 = 102U;
	volatile int32_t t71 = -8925;

    t71 = ((x289>(x290>x291))%x292);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x294 = 1U;
	uint8_t x295 = 11U;
	int16_t x296 = INT16_MIN;
	volatile int32_t t72 = 77012;

    t72 = ((x293>(x294>x295))%x296);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x297 = 0U;
	int64_t x298 = -444LL;
	int32_t x299 = -1;
	int8_t x300 = INT8_MIN;
	volatile int32_t t73 = 961474;

    t73 = ((x297>(x298>x299))%x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x301 = 127;
	volatile int16_t x303 = 10842;
	static int8_t x304 = INT8_MIN;
	int32_t t74 = 31861171;

    t74 = ((x301>(x302>x303))%x304);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x305 = INT16_MIN;
	uint32_t x306 = 1U;
	int8_t x307 = -6;
	int32_t t75 = -20408730;

    t75 = ((x305>(x306>x307))%x308);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x309 = INT64_MIN;
	volatile int8_t x310 = INT8_MIN;
	static uint16_t x311 = 135U;
	int32_t x312 = INT32_MIN;
	int32_t t76 = 1147748;

    t76 = ((x309>(x310>x311))%x312);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x313 = INT8_MIN;
	int16_t x316 = 8608;

    t77 = ((x313>(x314>x315))%x316);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x317 = -221853;
	int32_t x318 = 1;
	uint64_t x319 = UINT64_MAX;
	int16_t x320 = -1;
	static int32_t t78 = -14316332;

    t78 = ((x317>(x318>x319))%x320);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x321 = INT64_MAX;
	int32_t x322 = -1;
	volatile int8_t x323 = 1;
	static int8_t x324 = INT8_MAX;
	int32_t t79 = 0;

    t79 = ((x321>(x322>x323))%x324);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int64_t x325 = 7405234817048LL;
	int32_t x326 = INT32_MIN;
	uint16_t x327 = 0U;
	int8_t x328 = 5;
	int32_t t80 = -12663433;

    t80 = ((x325>(x326>x327))%x328);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x329 = INT64_MIN;
	volatile int8_t x331 = INT8_MIN;
	int64_t x332 = INT64_MIN;

    t81 = ((x329>(x330>x331))%x332);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x333 = -12;
	int64_t x334 = -1LL;
	static int16_t x335 = -23;
	int8_t x336 = INT8_MAX;

    t82 = ((x333>(x334>x335))%x336);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x337 = 115LLU;
	volatile uint8_t x338 = 11U;
	static volatile uint8_t x339 = 3U;
	static volatile int32_t x340 = INT32_MIN;

    t83 = ((x337>(x338>x339))%x340);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x341 = 0U;
	volatile int32_t x342 = -1;
	volatile uint16_t x343 = UINT16_MAX;
	volatile int16_t x344 = INT16_MIN;
	volatile int32_t t84 = -28671850;

    t84 = ((x341>(x342>x343))%x344);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x345 = INT8_MAX;
	int16_t x346 = 3174;
	uint8_t x347 = 13U;
	int8_t x348 = INT8_MIN;
	int32_t t85 = -2584253;

    t85 = ((x345>(x346>x347))%x348);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x349 = UINT8_MAX;
	volatile int8_t x351 = INT8_MAX;
	static int32_t x352 = INT32_MAX;
	volatile int32_t t86 = -26558550;

    t86 = ((x349>(x350>x351))%x352);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x355 = -1819605488069LL;
	int16_t x356 = INT16_MIN;
	volatile int32_t t87 = -3712439;

    t87 = ((x353>(x354>x355))%x356);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint8_t x357 = 2U;
	int32_t x358 = -4063887;
	uint16_t x359 = 3U;
	uint32_t x360 = UINT32_MAX;
	uint32_t t88 = 248920788U;

    t88 = ((x357>(x358>x359))%x360);

    if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x361 = 3;
	static int8_t x362 = -1;
	uint8_t x363 = 15U;

    t89 = ((x361>(x362>x363))%x364);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x365 = INT64_MIN;
	static uint32_t x367 = 232U;
	int64_t x368 = INT64_MIN;

    t90 = ((x365>(x366>x367))%x368);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x369 = -17;
	int32_t x370 = -1;
	uint16_t x371 = UINT16_MAX;
	static int16_t x372 = -1;

    t91 = ((x369>(x370>x371))%x372);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x373 = UINT8_MAX;
	int32_t t92 = -10;

    t92 = ((x373>(x374>x375))%x376);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x377 = 81U;
	int16_t x378 = INT16_MIN;
	static uint8_t x380 = UINT8_MAX;
	int32_t t93 = 2044673;

    t93 = ((x377>(x378>x379))%x380);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x381 = 0;
	volatile int8_t x384 = INT8_MIN;
	int32_t t94 = 63289;

    t94 = ((x381>(x382>x383))%x384);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x385 = INT64_MIN;
	uint32_t x386 = 101358337U;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t95 = 29;

    t95 = ((x385>(x386>x387))%x388);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x389 = INT16_MIN;
	int16_t x390 = -1;
	int8_t x391 = 12;
	static volatile int32_t x392 = 1;
	int32_t t96 = -291554;

    t96 = ((x389>(x390>x391))%x392);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x393 = 2;
	volatile int8_t x394 = INT8_MAX;
	int8_t x395 = -1;
	int16_t x396 = 5;

    t97 = ((x393>(x394>x395))%x396);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x397 = INT32_MIN;
	int8_t x398 = -11;
	int64_t x399 = INT64_MAX;
	uint64_t x400 = 3LLU;
	volatile uint64_t t98 = 2811872380LLU;

    t98 = ((x397>(x398>x399))%x400);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x401 = INT8_MAX;
	uint64_t x402 = 5523474LLU;

    t99 = ((x401>(x402>x403))%x404);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x406 = 3U;
	int32_t x407 = INT32_MIN;

    t100 = ((x405>(x406>x407))%x408);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint64_t x409 = UINT64_MAX;
	int32_t x410 = -164;
	volatile int32_t x411 = INT32_MIN;
	static uint64_t x412 = 24286228LLU;
	volatile uint64_t t101 = 150078257058LLU;

    t101 = ((x409>(x410>x411))%x412);

    if (t101 != 1LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x413 = INT16_MIN;
	static uint16_t x414 = 156U;
	static uint32_t x415 = 2U;
	static int16_t x416 = -1;
	volatile int32_t t102 = -288145;

    t102 = ((x413>(x414>x415))%x416);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x417 = INT8_MIN;
	static volatile int8_t x418 = -1;
	uint64_t x419 = 95LLU;
	int64_t x420 = INT64_MAX;
	volatile int64_t t103 = -17272LL;

    t103 = ((x417>(x418>x419))%x420);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x421 = INT64_MAX;
	int64_t x422 = INT64_MIN;
	int32_t x423 = -1;
	static int8_t x424 = -1;
	int32_t t104 = -14;

    t104 = ((x421>(x422>x423))%x424);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x425 = -1;
	volatile int32_t x426 = INT32_MIN;
	volatile uint32_t x427 = UINT32_MAX;
	volatile int32_t t105 = -66835;

    t105 = ((x425>(x426>x427))%x428);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x429 = -2;
	int8_t x432 = -2;

    t106 = ((x429>(x430>x431))%x432);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x433 = 3;
	uint16_t x434 = UINT16_MAX;
	int8_t x436 = -1;
	volatile int32_t t107 = 1;

    t107 = ((x433>(x434>x435))%x436);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x438 = UINT32_MAX;
	int8_t x439 = -1;
	int64_t x440 = INT64_MIN;
	volatile int64_t t108 = 3LL;

    t108 = ((x437>(x438>x439))%x440);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x441 = INT32_MIN;
	volatile uint32_t x442 = 151300U;
	uint8_t x444 = 29U;
	volatile int32_t t109 = 54646;

    t109 = ((x441>(x442>x443))%x444);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x445 = INT64_MAX;
	static int16_t x446 = INT16_MIN;
	uint64_t x447 = UINT64_MAX;
	int32_t x448 = INT32_MIN;
	volatile int32_t t110 = 871;

    t110 = ((x445>(x446>x447))%x448);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x449 = UINT16_MAX;
	int32_t x450 = INT32_MAX;
	volatile uint32_t t111 = 175U;

    t111 = ((x449>(x450>x451))%x452);

    if (t111 != 1U) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x454 = INT8_MIN;
	volatile int64_t x455 = INT64_MIN;
	volatile uint64_t x456 = 16192125738801198LLU;
	uint64_t t112 = 255511958751703LLU;

    t112 = ((x453>(x454>x455))%x456);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x457 = UINT8_MAX;
	int16_t x458 = INT16_MAX;
	int8_t x460 = INT8_MAX;
	int32_t t113 = 461297;

    t113 = ((x457>(x458>x459))%x460);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x462 = -1;
	static int32_t x463 = -1;
	static int32_t x464 = INT32_MIN;

    t114 = ((x461>(x462>x463))%x464);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x465 = -1;
	volatile int64_t x467 = INT64_MAX;
	volatile int32_t t115 = -3;

    t115 = ((x465>(x466>x467))%x468);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x471 = UINT64_MAX;
	volatile uint64_t x472 = 5662774192LLU;
	volatile uint64_t t116 = 672826446712885LLU;

    t116 = ((x469>(x470>x471))%x472);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x473 = INT16_MIN;
	int16_t x474 = -24;
	int64_t x475 = -8LL;
	static volatile int32_t x476 = INT32_MIN;
	int32_t t117 = 100027982;

    t117 = ((x473>(x474>x475))%x476);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x479 = -2;
	uint8_t x480 = 3U;
	volatile int32_t t118 = 0;

    t118 = ((x477>(x478>x479))%x480);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x481 = -1;
	volatile int8_t x482 = INT8_MIN;
	static int64_t x483 = INT64_MIN;
	uint8_t x484 = 2U;
	volatile int32_t t119 = -123;

    t119 = ((x481>(x482>x483))%x484);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x485 = 658355016U;
	static int16_t x486 = INT16_MIN;
	static volatile int64_t x487 = 31910044092395LL;
	uint16_t x488 = UINT16_MAX;
	static int32_t t120 = 190835831;

    t120 = ((x485>(x486>x487))%x488);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x489 = UINT64_MAX;
	int32_t x491 = INT32_MIN;
	static int32_t x492 = -1078;
	int32_t t121 = 11828354;

    t121 = ((x489>(x490>x491))%x492);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x494 = -1LL;
	static volatile int64_t x495 = INT64_MIN;
	static int64_t x496 = INT64_MAX;
	static int64_t t122 = -33411726415742LL;

    t122 = ((x493>(x494>x495))%x496);

    if (t122 != 1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x497 = 660025483582173523LL;
	int8_t x499 = INT8_MIN;
	uint32_t x500 = 402645U;
	volatile uint32_t t123 = 3521U;

    t123 = ((x497>(x498>x499))%x500);

    if (t123 != 1U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x501 = -278420983;
	int64_t x502 = -1LL;
	int32_t x503 = INT32_MIN;
	uint8_t x504 = UINT8_MAX;
	int32_t t124 = -10;

    t124 = ((x501>(x502>x503))%x504);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x505 = 1;
	static volatile int8_t x506 = 4;
	int64_t x507 = INT64_MIN;
	int64_t x508 = 17580391LL;
	static int64_t t125 = 525254262822008629LL;

    t125 = ((x505>(x506>x507))%x508);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x509 = INT64_MAX;
	uint16_t x510 = 15U;
	static int16_t x512 = INT16_MIN;
	int32_t t126 = -508424;

    t126 = ((x509>(x510>x511))%x512);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x513 = 1321U;
	volatile int16_t x514 = INT16_MIN;
	volatile int16_t x515 = INT16_MIN;
	int8_t x516 = INT8_MAX;
	volatile int32_t t127 = -221074;

    t127 = ((x513>(x514>x515))%x516);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x517 = 12U;
	uint8_t x518 = 31U;
	uint32_t x519 = 25U;
	int8_t x520 = INT8_MIN;
	static int32_t t128 = 94118;

    t128 = ((x517>(x518>x519))%x520);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x521 = 84U;
	int32_t x522 = INT32_MIN;
	int64_t x523 = -1LL;
	static volatile uint32_t x524 = 16U;

    t129 = ((x521>(x522>x523))%x524);

    if (t129 != 1U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x525 = INT64_MIN;
	volatile int32_t t130 = -208434855;

    t130 = ((x525>(x526>x527))%x528);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x529 = INT8_MIN;
	static int8_t x530 = -1;
	volatile uint64_t x531 = 68793377198LLU;
	uint64_t t131 = 195LLU;

    t131 = ((x529>(x530>x531))%x532);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x533 = INT64_MIN;
	int16_t x534 = INT16_MIN;
	static int64_t x535 = INT64_MAX;
	uint32_t x536 = 82416U;

    t132 = ((x533>(x534>x535))%x536);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x537 = INT16_MIN;
	static int32_t x538 = -1;
	uint16_t x539 = 7U;
	static int32_t x540 = -3655;
	volatile int32_t t133 = -631147;

    t133 = ((x537>(x538>x539))%x540);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x541 = 67U;
	int16_t x542 = -1;
	uint32_t x543 = 201529U;
	volatile int64_t t134 = 0LL;

    t134 = ((x541>(x542>x543))%x544);

    if (t134 != 1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x546 = 8;
	uint16_t x547 = 3U;
	volatile int64_t t135 = 15040891281886LL;

    t135 = ((x545>(x546>x547))%x548);

    if (t135 != 1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x549 = INT16_MIN;
	volatile uint64_t x550 = UINT64_MAX;
	int8_t x551 = -4;
	int16_t x552 = INT16_MIN;
	volatile int32_t t136 = -82;

    t136 = ((x549>(x550>x551))%x552);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x553 = INT64_MAX;
	int8_t x554 = INT8_MIN;
	uint32_t x555 = 488789887U;
	uint64_t x556 = 347090337395696730LLU;
	uint64_t t137 = 115142228855735917LLU;

    t137 = ((x553>(x554>x555))%x556);

    if (t137 != 1LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x557 = 1U;
	volatile int8_t x558 = -1;
	int64_t x559 = INT64_MIN;
	int32_t t138 = -8233672;

    t138 = ((x557>(x558>x559))%x560);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x561 = -13617;
	int16_t x562 = -1;
	volatile int32_t x564 = INT32_MAX;
	static volatile int32_t t139 = -1;

    t139 = ((x561>(x562>x563))%x564);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x566 = 13921LLU;
	int64_t x567 = 4211LL;
	uint64_t x568 = UINT64_MAX;

    t140 = ((x565>(x566>x567))%x568);

    if (t140 != 1LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x569 = 2;
	int64_t x570 = INT64_MIN;
	uint16_t x571 = 35U;
	static int32_t x572 = -1;
	int32_t t141 = -1;

    t141 = ((x569>(x570>x571))%x572);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x574 = 1;
	uint64_t x575 = 379753235543647725LLU;
	uint16_t x576 = 15U;
	int32_t t142 = -2;

    t142 = ((x573>(x574>x575))%x576);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x577 = INT8_MAX;
	uint64_t x578 = 366LLU;
	int16_t x579 = 161;
	int64_t x580 = INT64_MIN;
	volatile int64_t t143 = -23LL;

    t143 = ((x577>(x578>x579))%x580);

    if (t143 != 1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x581 = INT32_MIN;
	static uint64_t x583 = UINT64_MAX;

    t144 = ((x581>(x582>x583))%x584);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x585 = INT8_MIN;
	int64_t x586 = INT64_MIN;
	static volatile uint32_t t145 = 195989345U;

    t145 = ((x585>(x586>x587))%x588);

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x589 = 0;
	uint16_t x590 = UINT16_MAX;
	int8_t x591 = -6;
	volatile int8_t x592 = -47;

    t146 = ((x589>(x590>x591))%x592);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x593 = 28U;
	int32_t x594 = INT32_MIN;
	static int32_t x595 = INT32_MAX;
	int8_t x596 = INT8_MAX;

    t147 = ((x593>(x594>x595))%x596);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x597 = -4550643223996542LL;
	int16_t x598 = INT16_MIN;
	static int16_t x599 = -1;
	static volatile int8_t x600 = -1;
	int32_t t148 = -25682618;

    t148 = ((x597>(x598>x599))%x600);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x601 = 1U;
	static int64_t x602 = INT64_MAX;
	uint64_t x603 = UINT64_MAX;
	static int64_t x604 = INT64_MAX;
	int64_t t149 = -25947LL;

    t149 = ((x601>(x602>x603))%x604);

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x605 = -1LL;
	uint64_t x606 = UINT64_MAX;
	int8_t x607 = INT8_MIN;
	volatile int8_t x608 = -1;

    t150 = ((x605>(x606>x607))%x608);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x611 = -1LL;
	int32_t t151 = 144474;

    t151 = ((x609>(x610>x611))%x612);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x613 = INT8_MAX;
	int16_t x614 = INT16_MIN;
	int64_t x616 = -2217624152673736600LL;
	static volatile int64_t t152 = -806838800509441LL;

    t152 = ((x613>(x614>x615))%x616);

    if (t152 != 1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x617 = INT64_MIN;
	uint64_t x618 = 6092454770687LLU;
	uint16_t x619 = 0U;
	int32_t t153 = -1;

    t153 = ((x617>(x618>x619))%x620);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x621 = -1;
	int32_t x623 = INT32_MIN;
	int32_t x624 = INT32_MIN;
	static int32_t t154 = -457297238;

    t154 = ((x621>(x622>x623))%x624);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x625 = INT32_MIN;
	volatile uint64_t x626 = 3747237921995591460LLU;
	static int64_t x627 = -474011554742641LL;
	int16_t x628 = 2;
	volatile int32_t t155 = -461453278;

    t155 = ((x625>(x626>x627))%x628);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x629 = INT32_MIN;
	uint64_t x630 = 197457592182811LLU;
	volatile int32_t t156 = -31856232;

    t156 = ((x629>(x630>x631))%x632);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x633 = -1;
	int64_t x634 = INT64_MIN;
	static int8_t x635 = 0;

    t157 = ((x633>(x634>x635))%x636);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x637 = 10625;
	static int64_t x639 = INT64_MIN;
	int32_t t158 = -3296;

    t158 = ((x637>(x638>x639))%x640);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x641 = -2;
	volatile uint64_t x642 = 7400509962591448LLU;
	uint8_t x643 = 118U;
	int64_t t159 = 3184260541654352LL;

    t159 = ((x641>(x642>x643))%x644);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x646 = 14075042U;
	static volatile int16_t x647 = 14907;
	int16_t x648 = -222;
	int32_t t160 = -3193682;

    t160 = ((x645>(x646>x647))%x648);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x650 = INT8_MIN;
	int32_t x651 = INT32_MAX;
	int64_t x652 = 42149450603038LL;
	volatile int64_t t161 = 2554428207LL;

    t161 = ((x649>(x650>x651))%x652);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x653 = 35069U;
	int32_t x654 = INT32_MIN;
	int64_t x655 = -1LL;
	int64_t x656 = -1LL;
	static int64_t t162 = 10247283383LL;

    t162 = ((x653>(x654>x655))%x656);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int32_t x657 = -11149609;
	volatile uint16_t x658 = UINT16_MAX;
	int32_t x659 = INT32_MIN;
	volatile int32_t x660 = INT32_MIN;
	int32_t t163 = -9;

    t163 = ((x657>(x658>x659))%x660);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x661 = 380LLU;
	int32_t x662 = -1;
	static int32_t x663 = -60;
	uint16_t x664 = 1U;

    t164 = ((x661>(x662>x663))%x664);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x665 = INT32_MAX;
	uint64_t x666 = 2814531655028LLU;
	volatile int16_t x668 = -1;
	int32_t t165 = 53;

    t165 = ((x665>(x666>x667))%x668);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x669 = INT64_MIN;
	volatile int64_t x670 = INT64_MAX;
	int8_t x671 = -1;
	int32_t t166 = -1913;

    t166 = ((x669>(x670>x671))%x672);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x673 = UINT64_MAX;
	uint16_t x676 = UINT16_MAX;

    t167 = ((x673>(x674>x675))%x676);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x677 = 29U;
	uint32_t x678 = UINT32_MAX;
	uint16_t x680 = 124U;
	volatile int32_t t168 = 539728197;

    t168 = ((x677>(x678>x679))%x680);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x685 = 2U;
	uint64_t x686 = UINT64_MAX;
	int32_t x688 = 2110241;
	int32_t t169 = 22;

    t169 = ((x685>(x686>x687))%x688);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x690 = 5U;
	uint32_t x691 = 3344U;
	volatile uint8_t x692 = 6U;
	volatile int32_t t170 = -15920930;

    t170 = ((x689>(x690>x691))%x692);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x693 = -1;
	int32_t x695 = -101601667;
	int16_t x696 = INT16_MAX;

    t171 = ((x693>(x694>x695))%x696);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x697 = -1;
	int32_t x698 = -727;
	static int8_t x700 = -1;
	static int32_t t172 = 383613;

    t172 = ((x697>(x698>x699))%x700);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int64_t x701 = INT64_MAX;
	int16_t x702 = INT16_MAX;
	volatile uint16_t x703 = UINT16_MAX;
	int64_t x704 = INT64_MAX;
	int64_t t173 = -11090486LL;

    t173 = ((x701>(x702>x703))%x704);

    if (t173 != 1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x706 = 2;
	static int64_t x707 = INT64_MAX;
	static int32_t x708 = -276;
	int32_t t174 = 467781;

    t174 = ((x705>(x706>x707))%x708);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x709 = 12000572LLU;
	int16_t x710 = INT16_MAX;
	static int8_t x712 = 5;
	static int32_t t175 = 45790;

    t175 = ((x709>(x710>x711))%x712);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x714 = INT16_MIN;
	uint8_t x715 = 95U;
	volatile int64_t x716 = INT64_MIN;
	volatile int64_t t176 = 3LL;

    t176 = ((x713>(x714>x715))%x716);

    if (t176 != 1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x717 = -6746472LL;
	static int16_t x718 = INT16_MIN;
	int8_t x720 = -1;
	static volatile int32_t t177 = 245;

    t177 = ((x717>(x718>x719))%x720);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x721 = 1;
	int16_t x722 = INT16_MIN;
	volatile uint8_t x723 = 28U;
	uint16_t x724 = 44U;

    t178 = ((x721>(x722>x723))%x724);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x725 = -67583;
	uint64_t x726 = UINT64_MAX;
	int16_t x727 = INT16_MIN;
	int8_t x728 = INT8_MAX;
	static int32_t t179 = -5382615;

    t179 = ((x725>(x726>x727))%x728);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x729 = 516259415LLU;
	uint16_t x730 = UINT16_MAX;
	volatile uint16_t x732 = 236U;
	int32_t t180 = 0;

    t180 = ((x729>(x730>x731))%x732);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x733 = 568585U;
	int64_t x734 = 161789635443743LL;
	int64_t x735 = INT64_MIN;
	static int32_t x736 = -208111374;
	int32_t t181 = -73327;

    t181 = ((x733>(x734>x735))%x736);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x737 = 4U;
	int8_t x738 = INT8_MIN;
	static int64_t x739 = -37324165601202991LL;
	uint16_t x740 = UINT16_MAX;
	volatile int32_t t182 = 880;

    t182 = ((x737>(x738>x739))%x740);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x741 = -1;
	uint8_t x742 = UINT8_MAX;
	uint16_t x743 = 5U;
	int32_t x744 = 12830;
	volatile int32_t t183 = -8546652;

    t183 = ((x741>(x742>x743))%x744);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x745 = -5;
	uint64_t x746 = 8584648553338055LLU;
	int8_t x748 = -1;
	volatile int32_t t184 = 6168556;

    t184 = ((x745>(x746>x747))%x748);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x751 = INT32_MIN;
	static volatile int64_t x752 = INT64_MAX;
	volatile int64_t t185 = 20105666422LL;

    t185 = ((x749>(x750>x751))%x752);

    if (t185 != 1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x753 = UINT32_MAX;
	int8_t x754 = -1;
	volatile int16_t x755 = 4048;
	uint8_t x756 = UINT8_MAX;
	static volatile int32_t t186 = 904330291;

    t186 = ((x753>(x754>x755))%x756);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x757 = 977U;
	static uint64_t x759 = 4051LLU;
	static uint8_t x760 = 13U;
	static volatile int32_t t187 = 8689;

    t187 = ((x757>(x758>x759))%x760);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x761 = UINT64_MAX;
	int16_t x763 = INT16_MIN;
	static volatile int64_t x764 = -9956882147803373LL;
	volatile int64_t t188 = -811008392696372LL;

    t188 = ((x761>(x762>x763))%x764);

    if (t188 != 1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x765 = INT64_MAX;
	volatile int16_t x766 = 1;
	int64_t x767 = -6661842856815LL;
	int32_t x768 = INT32_MAX;
	int32_t t189 = 37;

    t189 = ((x765>(x766>x767))%x768);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int32_t x769 = 54;
	volatile int32_t t190 = 5024;

    t190 = ((x769>(x770>x771))%x772);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x773 = -1;
	int8_t x774 = INT8_MIN;
	uint16_t x775 = 1U;
	int8_t x776 = -1;
	static int32_t t191 = -3352062;

    t191 = ((x773>(x774>x775))%x776);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x777 = INT16_MAX;
	int16_t x778 = -3;
	int8_t x779 = INT8_MAX;
	int16_t x780 = -263;

    t192 = ((x777>(x778>x779))%x780);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x781 = 37LLU;
	int32_t x782 = INT32_MAX;
	int16_t x783 = INT16_MIN;
	uint8_t x784 = 113U;
	volatile int32_t t193 = -3176410;

    t193 = ((x781>(x782>x783))%x784);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x785 = 2489507LLU;
	int32_t x786 = INT32_MAX;
	static int32_t x787 = INT32_MAX;
	volatile uint32_t x788 = 257677U;

    t194 = ((x785>(x786>x787))%x788);

    if (t194 != 1U) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x793 = INT64_MAX;
	uint32_t x794 = 164U;
	int16_t x795 = INT16_MIN;
	static uint32_t x796 = UINT32_MAX;

    t195 = ((x793>(x794>x795))%x796);

    if (t195 != 1U) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x797 = 6;
	int64_t x798 = INT64_MIN;
	int16_t x800 = INT16_MIN;

    t196 = ((x797>(x798>x799))%x800);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x802 = INT8_MIN;
	static volatile int64_t x803 = -167702415LL;
	int8_t x804 = 12;

    t197 = ((x801>(x802>x803))%x804);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x807 = UINT8_MAX;
	uint16_t x808 = 27U;

    t198 = ((x805>(x806>x807))%x808);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x811 = UINT8_MAX;
	volatile uint64_t x812 = UINT64_MAX;
	volatile uint64_t t199 = 0LLU;

    t199 = ((x809>(x810>x811))%x812);

    if (t199 != 1LLU) { NG(); } else { ; }
	
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

