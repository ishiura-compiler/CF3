
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
volatile int32_t t1 = 16;
uint32_t x23 = 84574U;
int32_t x26 = INT32_MIN;
int32_t x28 = 59;
static volatile int16_t x34 = 27;
int64_t x40 = -7390LL;
int32_t x42 = 168;
volatile int32_t x53 = -1;
static int32_t t10 = -27;
volatile int32_t x60 = INT32_MAX;
int16_t x63 = INT16_MIN;
static int64_t x64 = INT64_MIN;
int8_t x65 = INT8_MIN;
int16_t x74 = 0;
uint16_t x92 = 370U;
volatile int64_t x96 = INT64_MIN;
uint64_t x107 = 17418326853410158LLU;
uint64_t x108 = 90681098883020LLU;
static int32_t t22 = -16052058;
int32_t x121 = -1;
int32_t x124 = INT32_MAX;
uint16_t x128 = 81U;
int64_t x129 = INT64_MAX;
int8_t x130 = -1;
volatile int64_t t25 = -917656577648187LL;
int8_t x139 = 2;
static int8_t x149 = INT8_MIN;
volatile uint64_t x152 = UINT64_MAX;
int16_t x153 = -1;
static uint8_t x160 = UINT8_MAX;
uint16_t x163 = UINT16_MAX;
volatile int32_t t32 = 60248;
int64_t t33 = -4317874977938437LL;
volatile uint64_t x176 = UINT64_MAX;
static uint64_t x181 = 950LLU;
int32_t t35 = 1;
int32_t t36 = -1128410;
static int64_t x190 = INT64_MIN;
int8_t x192 = INT8_MAX;
static int16_t x194 = 12;
static int64_t t38 = -6408358LL;
volatile int8_t x203 = -1;
static volatile int64_t t43 = 3515014LL;
int16_t x234 = INT16_MAX;
int64_t x236 = -1LL;
int8_t x251 = -42;
int64_t x253 = -28725302158339LL;
static int64_t x257 = 3791129885660LL;
int8_t x258 = INT8_MAX;
int8_t x264 = 1;
volatile int16_t x267 = 6;
int16_t x270 = -1;
volatile uint16_t x281 = 1U;
int8_t x287 = 6;
static int8_t x290 = INT8_MIN;
static int16_t x291 = -1;
volatile uint16_t x292 = 13457U;
int32_t x294 = INT32_MAX;
int16_t x297 = INT16_MIN;
uint8_t x298 = 1U;
static volatile int64_t x299 = INT64_MAX;
volatile int64_t t60 = 95258183909LL;
int64_t x301 = INT64_MIN;
volatile int32_t t63 = 962203253;
uint32_t x334 = 14582901U;
int16_t x338 = INT16_MIN;
uint8_t x341 = 0U;
int32_t t70 = -3;
static volatile uint64_t t71 = 2130767560802LLU;
volatile uint16_t x380 = UINT16_MAX;
static int64_t t73 = 68415743322884LL;
uint16_t x381 = 403U;
volatile int8_t x385 = INT8_MIN;
volatile uint8_t x387 = 37U;
int16_t x401 = INT16_MIN;
int16_t x402 = -1;
volatile uint16_t x412 = 19U;
static int32_t t77 = 57;
uint64_t t78 = 162LLU;
int16_t x417 = 21;
volatile int32_t x424 = INT32_MAX;
volatile int8_t x448 = INT8_MIN;
volatile int16_t x450 = INT16_MIN;
static volatile int16_t x454 = -1;
static int32_t x456 = -1;
int64_t x462 = INT64_MAX;
uint64_t x463 = UINT64_MAX;
volatile int64_t t91 = -714LL;
int8_t x471 = 2;
uint32_t x472 = UINT32_MAX;
volatile int16_t x473 = INT16_MIN;
int8_t x474 = 6;
int64_t x482 = 60483799290LL;
int16_t x485 = -1;
int16_t x492 = -2262;
int8_t x499 = INT8_MAX;
int16_t x506 = -11;
uint16_t x507 = UINT16_MAX;
int8_t x513 = INT8_MAX;
volatile int32_t t101 = -26;
int32_t x530 = -1;
uint16_t x531 = 200U;
static uint16_t x535 = 3U;
int16_t x536 = INT16_MIN;
static uint16_t x538 = 359U;
int32_t x539 = 93369089;
volatile uint16_t x543 = UINT16_MAX;
int8_t x544 = INT8_MIN;
volatile int32_t t107 = 715;
int16_t x545 = INT16_MIN;
uint32_t x546 = 98596250U;
int64_t x559 = -330013LL;
uint32_t x561 = UINT32_MAX;
uint32_t x563 = 1U;
uint32_t t112 = 1158631U;
int64_t x565 = -1LL;
uint64_t x572 = 251LLU;
uint64_t t114 = 476583377785LLU;
static volatile int8_t x573 = -1;
uint16_t x575 = 3U;
volatile int32_t t115 = 32177410;
static uint8_t x582 = 13U;
static volatile uint16_t x586 = UINT16_MAX;
int8_t x587 = INT8_MAX;
static int64_t x592 = INT64_MIN;
uint32_t t120 = 26U;
int16_t x605 = -1;
uint8_t x608 = 21U;
volatile int32_t t121 = 49003;
uint64_t x609 = 144765180173244761LLU;
int32_t x612 = -1;
uint64_t x613 = 482782461423LLU;
int16_t x616 = 4;
int8_t x618 = -1;
uint32_t x620 = 64U;
volatile uint16_t x621 = UINT16_MAX;
int8_t x629 = INT8_MIN;
volatile int64_t x631 = -1LL;
static int16_t x633 = INT16_MIN;
int32_t x634 = INT32_MIN;
int8_t x636 = -1;
uint64_t t128 = 592LLU;
uint8_t x650 = UINT8_MAX;
int64_t t132 = -84652247975510641LL;
static uint8_t x656 = UINT8_MAX;
uint32_t x660 = UINT32_MAX;
int32_t x661 = -37342126;
int32_t x664 = 96701;
int32_t x669 = INT32_MAX;
int8_t x670 = 1;
uint64_t x671 = 77447731LLU;
static int16_t x676 = -2647;
int64_t t138 = -523750LL;
static int32_t t141 = -304653;
static volatile uint64_t t142 = 4213755635LLU;
int8_t x693 = INT8_MIN;
volatile uint8_t x699 = UINT8_MAX;
int64_t x700 = INT64_MAX;
uint32_t x703 = UINT32_MAX;
volatile uint32_t x707 = 2U;
static volatile uint32_t t146 = 805812793U;
uint64_t x711 = UINT64_MAX;
int32_t x714 = INT32_MIN;
int8_t x718 = -28;
uint64_t x720 = 40918012918666LLU;
static int64_t x721 = 671460796687LL;
uint32_t x723 = 1051705325U;
uint8_t x726 = 7U;
int32_t x740 = INT32_MIN;
uint8_t x745 = UINT8_MAX;
static int16_t x746 = INT16_MIN;
volatile int32_t x752 = INT32_MIN;
volatile uint32_t t157 = 4765217U;
int64_t x759 = -302694578786LL;
uint64_t x760 = 3870289LLU;
volatile uint64_t t158 = 3505611LLU;
volatile int64_t x764 = 1608LL;
static volatile uint32_t t160 = 792U;
uint16_t x769 = UINT16_MAX;
int8_t x771 = INT8_MIN;
static uint32_t t162 = 4U;
static uint8_t x780 = UINT8_MAX;
static int32_t t163 = -4;
int8_t x785 = 3;
uint32_t x788 = UINT32_MAX;
int64_t t165 = 1LL;
uint16_t x790 = UINT16_MAX;
static volatile int8_t x795 = INT8_MAX;
volatile uint64_t t168 = 1684850LLU;
int16_t x818 = INT16_MIN;
static int16_t x823 = INT16_MAX;
uint8_t x825 = 26U;
int8_t x833 = INT8_MAX;
static volatile int32_t t178 = 31518;
int8_t x850 = 1;
int16_t x851 = -1466;
static volatile int64_t t179 = -170LL;
uint32_t x871 = 340U;
int16_t x877 = -1;
static int64_t x880 = -1LL;
static int8_t x885 = INT8_MIN;
uint8_t x886 = 37U;
volatile int32_t x888 = -1;
uint8_t x889 = 15U;
int32_t x894 = INT32_MIN;
volatile uint32_t t189 = 2669U;
int64_t x912 = INT64_MIN;
int32_t x916 = INT32_MAX;
static int8_t x927 = INT8_MIN;
static int64_t x948 = INT64_MIN;
static int64_t t198 = -852LL;
int8_t x952 = 0;


void f0(void) {
    	volatile uint8_t x1 = 2U;
	volatile int32_t x2 = -1;
	static int64_t x3 = INT64_MAX;
	int64_t t0 = -77401LL;

    t0 = (((x1==x2)-x3)^x4);

    if (t0 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x13 = -1;
	int64_t x14 = INT64_MAX;
	volatile uint16_t x15 = UINT16_MAX;
	int32_t x16 = INT32_MIN;

    t1 = (((x13==x14)-x15)^x16);

    if (t1 != 2147418113) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint64_t x17 = 836LLU;
	int64_t x18 = -921417270852LL;
	int64_t x19 = INT64_MAX;
	int16_t x20 = -1;
	int64_t t2 = -361509456624LL;

    t2 = (((x17==x18)-x19)^x20);

    if (t2 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x21 = INT16_MIN;
	uint8_t x22 = 0U;
	int64_t x24 = INT64_MIN;
	int64_t t3 = 109481LL;

    t3 = (((x21==x22)-x23)^x24);

    if (t3 != -9223372032559893086LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x25 = -22765062534753939LL;
	uint8_t x27 = 14U;
	int32_t t4 = 170;

    t4 = (((x25==x26)-x27)^x28);

    if (t4 != -55) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint64_t x33 = 33256837225LLU;
	int64_t x35 = INT64_MAX;
	int32_t x36 = -1099734;
	volatile int64_t t5 = -4483088818279781LL;

    t5 = (((x33==x34)-x35)^x36);

    if (t5 != 9223372036853676075LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MAX;
	uint8_t x39 = UINT8_MAX;
	int64_t t6 = -519563691547377LL;

    t6 = (((x37==x38)-x39)^x40);

    if (t6 != 7203LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x41 = -5;
	static uint32_t x43 = 1449669U;
	static int8_t x44 = -13;
	uint32_t t7 = 31529U;

    t7 = (((x41==x42)-x43)^x44);

    if (t7 != 1449672U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x45 = -3177554696815437546LL;
	static uint64_t x46 = 255747183894LLU;
	int32_t x47 = INT32_MAX;
	static int8_t x48 = 1;
	int32_t t8 = INT32_MIN;

    t8 = (((x45==x46)-x47)^x48);

    if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x49 = 1869271030331LLU;
	volatile uint32_t x50 = UINT32_MAX;
	uint32_t x51 = 936971U;
	volatile uint64_t x52 = 5LLU;
	uint64_t t9 = 11586130LLU;

    t9 = (((x49==x50)-x51)^x52);

    if (t9 != 4294030320LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x54 = INT64_MIN;
	static int8_t x55 = INT8_MAX;
	int32_t x56 = -7302;

    t10 = (((x53==x54)-x55)^x56);

    if (t10 != 7419) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x57 = -1;
	int16_t x58 = 718;
	uint16_t x59 = 34U;
	static volatile int32_t t11 = -13;

    t11 = (((x57==x58)-x59)^x60);

    if (t11 != -2147483615) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x61 = 0U;
	static uint8_t x62 = 0U;
	static int64_t t12 = 4500920768795180660LL;

    t12 = (((x61==x62)-x63)^x64);

    if (t12 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x66 = 0LL;
	int16_t x67 = -1;
	static int32_t x68 = -82;
	int32_t t13 = -415381810;

    t13 = (((x65==x66)-x67)^x68);

    if (t13 != -81) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x69 = INT64_MIN;
	int64_t x70 = INT64_MIN;
	volatile int8_t x71 = INT8_MIN;
	static volatile uint8_t x72 = 14U;
	int32_t t14 = 21704;

    t14 = (((x69==x70)-x71)^x72);

    if (t14 != 143) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x73 = INT64_MIN;
	int32_t x75 = -1;
	int64_t x76 = INT64_MAX;
	int64_t t15 = 465259306LL;

    t15 = (((x73==x74)-x75)^x76);

    if (t15 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x81 = 1649LLU;
	int16_t x82 = INT16_MIN;
	static int16_t x83 = INT16_MIN;
	static uint64_t x84 = UINT64_MAX;
	volatile uint64_t t16 = 5629649765474LLU;

    t16 = (((x81==x82)-x83)^x84);

    if (t16 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x85 = 0U;
	uint8_t x86 = 1U;
	static int64_t x87 = INT64_MAX;
	int16_t x88 = -9538;
	static volatile int64_t t17 = -93LL;

    t17 = (((x85==x86)-x87)^x88);

    if (t17 != 9223372036854766271LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x89 = UINT16_MAX;
	int8_t x90 = INT8_MIN;
	volatile int8_t x91 = INT8_MIN;
	static volatile int32_t t18 = 64247;

    t18 = (((x89==x90)-x91)^x92);

    if (t18 != 498) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x93 = 27958U;
	uint8_t x94 = UINT8_MAX;
	static int16_t x95 = -1;
	volatile int64_t t19 = 1996469692787810LL;

    t19 = (((x93==x94)-x95)^x96);

    if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x97 = 1U;
	static uint16_t x98 = UINT16_MAX;
	int8_t x99 = INT8_MAX;
	int16_t x100 = 80;
	static int32_t t20 = 21483479;

    t20 = (((x97==x98)-x99)^x100);

    if (t20 != -47) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x105 = 1;
	int32_t x106 = -1;
	volatile uint64_t t21 = 29511870LLU;

    t21 = (((x105==x106)-x107)^x108);

    if (t21 != 18429376630049598814LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x113 = -1;
	static uint64_t x114 = 185937LLU;
	int32_t x115 = 660838132;
	static volatile int8_t x116 = INT8_MIN;

    t22 = (((x113==x114)-x115)^x116);

    if (t22 != 660838028) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x122 = INT64_MIN;
	static int32_t x123 = -1;
	volatile int32_t t23 = 3235;

    t23 = (((x121==x122)-x123)^x124);

    if (t23 != 2147483646) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x125 = 2;
	uint8_t x126 = 66U;
	volatile uint16_t x127 = 2220U;
	volatile int32_t t24 = -103;

    t24 = (((x125==x126)-x127)^x128);

    if (t24 != -2299) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x131 = INT16_MIN;
	static int64_t x132 = INT64_MIN;

    t25 = (((x129==x130)-x131)^x132);

    if (t25 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x137 = -494;
	int64_t x138 = INT64_MIN;
	int32_t x140 = INT32_MIN;
	volatile int32_t t26 = -762546274;

    t26 = (((x137==x138)-x139)^x140);

    if (t26 != 2147483646) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x141 = 3;
	uint8_t x142 = 59U;
	uint8_t x143 = 60U;
	uint32_t x144 = 0U;
	volatile uint32_t t27 = 13121545U;

    t27 = (((x141==x142)-x143)^x144);

    if (t27 != 4294967236U) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x145 = INT8_MIN;
	static uint16_t x146 = 17U;
	static uint8_t x147 = UINT8_MAX;
	static uint32_t x148 = 731770U;
	volatile uint32_t t28 = 1230569U;

    t28 = (((x145==x146)-x147)^x148);

    if (t28 != 4294235515U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x150 = -1;
	int16_t x151 = -1;
	uint64_t t29 = 4201882546298LLU;

    t29 = (((x149==x150)-x151)^x152);

    if (t29 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x154 = INT8_MIN;
	static int16_t x155 = INT16_MIN;
	static uint8_t x156 = 3U;
	volatile int32_t t30 = 0;

    t30 = (((x153==x154)-x155)^x156);

    if (t30 != 32771) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x157 = 1;
	volatile uint64_t x158 = 1LLU;
	uint8_t x159 = 7U;
	volatile int32_t t31 = -5370;

    t31 = (((x157==x158)-x159)^x160);

    if (t31 != -251) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x161 = INT64_MAX;
	volatile int64_t x162 = 1994347535LL;
	int32_t x164 = -803;

    t32 = (((x161==x162)-x163)^x164);

    if (t32 != 64732) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x169 = 0U;
	static uint32_t x170 = UINT32_MAX;
	static int64_t x171 = -92280LL;
	int16_t x172 = INT16_MAX;

    t33 = (((x169==x170)-x171)^x172);

    if (t33 != 71559LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x173 = INT64_MIN;
	int16_t x174 = 15;
	volatile int16_t x175 = INT16_MAX;
	uint64_t t34 = 13697847LLU;

    t34 = (((x173==x174)-x175)^x176);

    if (t34 != 32766LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x182 = INT8_MIN;
	static volatile int32_t x183 = INT32_MAX;
	int8_t x184 = INT8_MIN;

    t35 = (((x181==x182)-x183)^x184);

    if (t35 != 2147483521) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x185 = -51894454;
	int64_t x186 = INT64_MIN;
	static int32_t x187 = -1;
	static volatile int8_t x188 = -1;

    t36 = (((x185==x186)-x187)^x188);

    if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x189 = 9128850LL;
	uint32_t x191 = 2241U;
	uint32_t t37 = 307074U;

    t37 = (((x189==x190)-x191)^x192);

    if (t37 != 4294965056U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x193 = INT64_MAX;
	int16_t x195 = INT16_MIN;
	int64_t x196 = -407153596LL;

    t38 = (((x193==x194)-x195)^x196);

    if (t38 != -407120828LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x197 = 206285112468209LL;
	uint64_t x198 = 1193862948023LLU;
	static volatile int16_t x199 = -1;
	volatile uint64_t x200 = 125765LLU;
	uint64_t t39 = 2334084442442126LLU;

    t39 = (((x197==x198)-x199)^x200);

    if (t39 != 125764LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x201 = 871749170U;
	int64_t x202 = 5LL;
	int64_t x204 = INT64_MIN;
	volatile int64_t t40 = 1973387363302814LL;

    t40 = (((x201==x202)-x203)^x204);

    if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x209 = INT16_MAX;
	static int8_t x210 = INT8_MAX;
	static int32_t x211 = -1;
	uint16_t x212 = 18259U;
	static volatile int32_t t41 = 7533830;

    t41 = (((x209==x210)-x211)^x212);

    if (t41 != 18258) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x221 = UINT64_MAX;
	uint32_t x222 = 1U;
	static uint16_t x223 = 577U;
	uint32_t x224 = 9595U;
	volatile uint32_t t42 = 24U;

    t42 = (((x221==x222)-x223)^x224);

    if (t42 != 4294957252U) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x225 = -1;
	uint32_t x226 = 27413340U;
	int64_t x227 = 523947449LL;
	uint32_t x228 = 5U;

    t43 = (((x225==x226)-x227)^x228);

    if (t43 != -523947454LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x229 = INT64_MIN;
	int16_t x230 = INT16_MAX;
	static uint64_t x231 = UINT64_MAX;
	volatile int16_t x232 = INT16_MIN;
	uint64_t t44 = 5625344589541912LLU;

    t44 = (((x229==x230)-x231)^x232);

    if (t44 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x233 = -1LL;
	uint16_t x235 = UINT16_MAX;
	int64_t t45 = 2306159597LL;

    t45 = (((x233==x234)-x235)^x236);

    if (t45 != 65534LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x237 = -1147;
	volatile int8_t x238 = -1;
	uint8_t x239 = 114U;
	int32_t x240 = -1;
	volatile int32_t t46 = 128;

    t46 = (((x237==x238)-x239)^x240);

    if (t46 != 113) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x241 = -1;
	int8_t x242 = -1;
	int64_t x243 = INT64_MAX;
	static uint8_t x244 = UINT8_MAX;
	int64_t t47 = 26250101096LL;

    t47 = (((x241==x242)-x243)^x244);

    if (t47 != -9223372036854775555LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x249 = -1;
	int8_t x250 = -1;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t48 = 4201371340013179LLU;

    t48 = (((x249==x250)-x251)^x252);

    if (t48 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x254 = INT32_MIN;
	int32_t x255 = 483278554;
	static int32_t x256 = INT32_MAX;
	int32_t t49 = 34213;

    t49 = (((x253==x254)-x255)^x256);

    if (t49 != -1664205095) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x259 = 1940U;
	static int16_t x260 = -1;
	uint32_t t50 = 4U;

    t50 = (((x257==x258)-x259)^x260);

    if (t50 != 1939U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x261 = 13162LLU;
	static int16_t x262 = -1;
	static int16_t x263 = -6;
	volatile int32_t t51 = 745866;

    t51 = (((x261==x262)-x263)^x264);

    if (t51 != 7) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x265 = INT16_MIN;
	static int64_t x266 = -2398885LL;
	int8_t x268 = 6;
	volatile int32_t t52 = -120940246;

    t52 = (((x265==x266)-x267)^x268);

    if (t52 != -4) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x269 = -1;
	volatile int16_t x271 = INT16_MAX;
	uint16_t x272 = 26U;
	int32_t t53 = 1808387;

    t53 = (((x269==x270)-x271)^x272);

    if (t53 != -32744) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x273 = 20059U;
	uint8_t x274 = 17U;
	int32_t x275 = -221;
	int8_t x276 = INT8_MAX;
	static volatile int32_t t54 = -668867;

    t54 = (((x273==x274)-x275)^x276);

    if (t54 != 162) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x277 = INT64_MIN;
	uint64_t x278 = 124095LLU;
	static uint16_t x279 = UINT16_MAX;
	int64_t x280 = 743351LL;
	int64_t t55 = 477214476LL;

    t55 = (((x277==x278)-x279)^x280);

    if (t55 != -763978LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x282 = INT16_MIN;
	uint32_t x283 = 2U;
	static int8_t x284 = -2;
	uint32_t t56 = 134006886U;

    t56 = (((x281==x282)-x283)^x284);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x285 = 9165423U;
	volatile uint64_t x286 = 905628LLU;
	uint8_t x288 = UINT8_MAX;
	int32_t t57 = -74331;

    t57 = (((x285==x286)-x287)^x288);

    if (t57 != -251) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x289 = INT16_MAX;
	int32_t t58 = 117691;

    t58 = (((x289==x290)-x291)^x292);

    if (t58 != 13456) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x293 = INT32_MIN;
	uint16_t x295 = 20310U;
	uint16_t x296 = 1900U;
	volatile int32_t t59 = 178;

    t59 = (((x293==x294)-x295)^x296);

    if (t59 != -18490) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x300 = -1;

    t60 = (((x297==x298)-x299)^x300);

    if (t60 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x302 = 92U;
	int16_t x303 = -1;
	uint8_t x304 = UINT8_MAX;
	static volatile int32_t t61 = 0;

    t61 = (((x301==x302)-x303)^x304);

    if (t61 != 254) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x321 = 140495071;
	static volatile int32_t x322 = -1;
	int8_t x323 = INT8_MAX;
	int32_t x324 = INT32_MIN;
	int32_t t62 = -23127501;

    t62 = (((x321==x322)-x323)^x324);

    if (t62 != 2147483521) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x329 = -885935924;
	uint32_t x330 = UINT32_MAX;
	int16_t x331 = INT16_MIN;
	uint8_t x332 = 3U;

    t63 = (((x329==x330)-x331)^x332);

    if (t63 != 32771) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x333 = INT8_MAX;
	volatile int16_t x335 = -1;
	volatile int8_t x336 = -1;
	volatile int32_t t64 = -10014497;

    t64 = (((x333==x334)-x335)^x336);

    if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x337 = 6007;
	static int64_t x339 = -1LL;
	static uint32_t x340 = UINT32_MAX;
	int64_t t65 = -14332LL;

    t65 = (((x337==x338)-x339)^x340);

    if (t65 != 4294967294LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x342 = -1LL;
	volatile int8_t x343 = 18;
	uint16_t x344 = UINT16_MAX;
	int32_t t66 = -1;

    t66 = (((x341==x342)-x343)^x344);

    if (t66 != -65519) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x345 = INT64_MIN;
	uint32_t x346 = 12023550U;
	int16_t x347 = 40;
	uint64_t x348 = 290731676895670LLU;
	uint64_t t67 = 6722518543103LLU;

    t67 = (((x345==x346)-x347)^x348);

    if (t67 != 18446453342032655982LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x353 = 2LLU;
	int8_t x354 = INT8_MIN;
	int32_t x355 = -1598;
	static uint8_t x356 = 7U;
	int32_t t68 = -1485;

    t68 = (((x353==x354)-x355)^x356);

    if (t68 != 1593) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int8_t x361 = -1;
	int64_t x362 = INT64_MAX;
	int64_t x363 = -868359434300LL;
	int8_t x364 = -1;
	int64_t t69 = 1630036401LL;

    t69 = (((x361==x362)-x363)^x364);

    if (t69 != -868359434301LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x365 = 686501430087133LLU;
	int64_t x366 = INT64_MIN;
	uint16_t x367 = UINT16_MAX;
	volatile int16_t x368 = 19;

    t70 = (((x365==x366)-x367)^x368);

    if (t70 != -65518) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x369 = UINT8_MAX;
	int8_t x370 = INT8_MAX;
	volatile int32_t x371 = 14909;
	uint64_t x372 = 19117759671LLU;

    t71 = (((x369==x370)-x371)^x372);

    if (t71 != 18446744054591789428LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x373 = 1;
	int8_t x374 = INT8_MIN;
	volatile uint32_t x375 = 347U;
	int8_t x376 = INT8_MIN;
	uint32_t t72 = 744876263U;

    t72 = (((x373==x374)-x375)^x376);

    if (t72 != 293U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x377 = 1U;
	static int16_t x378 = -1;
	static int64_t x379 = INT64_MAX;

    t73 = (((x377==x378)-x379)^x380);

    if (t73 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x382 = -1;
	int64_t x383 = INT64_MAX;
	int32_t x384 = INT32_MAX;
	volatile int64_t t74 = -4034459742668776960LL;

    t74 = (((x381==x382)-x383)^x384);

    if (t74 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x386 = 13;
	int16_t x388 = 208;
	int32_t t75 = 1;

    t75 = (((x385==x386)-x387)^x388);

    if (t75 != -245) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x403 = UINT64_MAX;
	uint16_t x404 = 308U;
	static uint64_t t76 = 3509769LLU;

    t76 = (((x401==x402)-x403)^x404);

    if (t76 != 309LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x409 = 22U;
	uint16_t x410 = 3262U;
	static int16_t x411 = INT16_MIN;

    t77 = (((x409==x410)-x411)^x412);

    if (t77 != 32787) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int16_t x413 = INT16_MIN;
	int32_t x414 = INT32_MAX;
	uint64_t x415 = UINT64_MAX;
	volatile uint16_t x416 = 0U;

    t78 = (((x413==x414)-x415)^x416);

    if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x418 = 7U;
	int16_t x419 = 49;
	int16_t x420 = -1;
	int32_t t79 = -17709130;

    t79 = (((x417==x418)-x419)^x420);

    if (t79 != 48) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x421 = UINT32_MAX;
	int32_t x422 = -60468411;
	static int8_t x423 = -6;
	int32_t t80 = -1839;

    t80 = (((x421==x422)-x423)^x424);

    if (t80 != 2147483641) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x425 = -1LL;
	int64_t x426 = INT64_MAX;
	int16_t x427 = INT16_MIN;
	int16_t x428 = INT16_MAX;
	volatile int32_t t81 = 200324;

    t81 = (((x425==x426)-x427)^x428);

    if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x429 = -1;
	volatile uint16_t x430 = 12U;
	int32_t x431 = 8;
	int8_t x432 = -6;
	static volatile int32_t t82 = -24161967;

    t82 = (((x429==x430)-x431)^x432);

    if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x433 = 1162;
	volatile int64_t x434 = INT64_MIN;
	int32_t x435 = -228919;
	static uint64_t x436 = UINT64_MAX;
	volatile uint64_t t83 = 849115LLU;

    t83 = (((x433==x434)-x435)^x436);

    if (t83 != 18446744073709322696LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x437 = -12;
	int8_t x438 = INT8_MIN;
	static volatile uint32_t x439 = UINT32_MAX;
	int16_t x440 = INT16_MIN;
	uint32_t t84 = 8U;

    t84 = (((x437==x438)-x439)^x440);

    if (t84 != 4294934529U) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x441 = INT64_MIN;
	static int32_t x442 = 1594;
	static int16_t x443 = INT16_MIN;
	static volatile uint64_t x444 = 7055341LLU;
	static uint64_t t85 = 2048708LLU;

    t85 = (((x441==x442)-x443)^x444);

    if (t85 != 7022573LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x445 = 190195611837493766LL;
	static uint32_t x446 = 46443269U;
	uint8_t x447 = 3U;
	int32_t t86 = -56472;

    t86 = (((x445==x446)-x447)^x448);

    if (t86 != 125) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x449 = UINT64_MAX;
	static uint64_t x451 = 23044469238LLU;
	uint16_t x452 = UINT16_MAX;
	static uint64_t t87 = 2093546645604LLU;

    t87 = (((x449==x450)-x451)^x452);

    if (t87 != 18446744050665107957LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x453 = INT16_MIN;
	int16_t x455 = -604;
	int32_t t88 = 109358908;

    t88 = (((x453==x454)-x455)^x456);

    if (t88 != -605) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x457 = -254235404;
	int32_t x458 = INT32_MIN;
	volatile int8_t x459 = -1;
	static uint16_t x460 = 13U;
	static int32_t t89 = 1950;

    t89 = (((x457==x458)-x459)^x460);

    if (t89 != 12) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x461 = 1413025U;
	int16_t x464 = INT16_MIN;
	static uint64_t t90 = 418563657LLU;

    t90 = (((x461==x462)-x463)^x464);

    if (t90 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x465 = -15875612;
	static int32_t x466 = 274;
	volatile int8_t x467 = 2;
	int64_t x468 = INT64_MIN;

    t91 = (((x465==x466)-x467)^x468);

    if (t91 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x469 = INT64_MIN;
	int64_t x470 = INT64_MIN;
	volatile uint32_t t92 = 7332U;

    t92 = (((x469==x470)-x471)^x472);

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x475 = -3;
	int16_t x476 = INT16_MIN;
	int32_t t93 = -67;

    t93 = (((x473==x474)-x475)^x476);

    if (t93 != -32765) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x477 = 215;
	int16_t x478 = -929;
	static int16_t x479 = INT16_MAX;
	volatile uint64_t x480 = UINT64_MAX;
	uint64_t t94 = 209148613112990162LLU;

    t94 = (((x477==x478)-x479)^x480);

    if (t94 != 32766LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x481 = UINT8_MAX;
	static volatile int32_t x483 = 347;
	int8_t x484 = INT8_MIN;
	volatile int32_t t95 = 77700311;

    t95 = (((x481==x482)-x483)^x484);

    if (t95 != 293) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x486 = 1;
	int16_t x487 = INT16_MIN;
	int16_t x488 = INT16_MAX;
	volatile int32_t t96 = 29;

    t96 = (((x485==x486)-x487)^x488);

    if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x489 = 125U;
	int64_t x490 = INT64_MAX;
	static volatile uint64_t x491 = UINT64_MAX;
	volatile uint64_t t97 = 7LLU;

    t97 = (((x489==x490)-x491)^x492);

    if (t97 != 18446744073709549355LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x493 = 0;
	static volatile int32_t x494 = -2;
	int64_t x495 = INT64_MAX;
	static int8_t x496 = 0;
	volatile int64_t t98 = 253697018693LL;

    t98 = (((x493==x494)-x495)^x496);

    if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x497 = 2U;
	int16_t x498 = -1;
	int32_t x500 = 815;
	volatile int32_t t99 = 772729847;

    t99 = (((x497==x498)-x499)^x500);

    if (t99 != -850) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x505 = UINT64_MAX;
	uint64_t x508 = UINT64_MAX;
	static uint64_t t100 = 1688566257473205587LLU;

    t100 = (((x505==x506)-x507)^x508);

    if (t100 != 65534LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x514 = 7;
	int16_t x515 = INT16_MIN;
	static int16_t x516 = 5904;

    t101 = (((x513==x514)-x515)^x516);

    if (t101 != 38672) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x517 = -1;
	int64_t x518 = INT64_MAX;
	int16_t x519 = INT16_MAX;
	int64_t x520 = -9LL;
	int64_t t102 = 0LL;

    t102 = (((x517==x518)-x519)^x520);

    if (t102 != 32758LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x525 = -1;
	int8_t x526 = INT8_MIN;
	static uint8_t x527 = UINT8_MAX;
	static volatile uint64_t x528 = UINT64_MAX;
	static uint64_t t103 = 47342976111189905LLU;

    t103 = (((x525==x526)-x527)^x528);

    if (t103 != 254LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x529 = INT32_MAX;
	volatile int8_t x532 = INT8_MIN;
	volatile int32_t t104 = 522576120;

    t104 = (((x529==x530)-x531)^x532);

    if (t104 != 184) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x533 = UINT32_MAX;
	int8_t x534 = 1;
	volatile int32_t t105 = 95493542;

    t105 = (((x533==x534)-x535)^x536);

    if (t105 != 32765) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x537 = 0U;
	static int8_t x540 = -1;
	volatile int32_t t106 = 13930;

    t106 = (((x537==x538)-x539)^x540);

    if (t106 != 93369088) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x541 = INT16_MAX;
	int8_t x542 = INT8_MIN;

    t107 = (((x541==x542)-x543)^x544);

    if (t107 != 65409) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x547 = INT16_MIN;
	int32_t x548 = INT32_MIN;
	int32_t t108 = -1;

    t108 = (((x545==x546)-x547)^x548);

    if (t108 != -2147450880) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x549 = INT32_MIN;
	uint32_t x550 = UINT32_MAX;
	static int8_t x551 = INT8_MIN;
	uint8_t x552 = 3U;
	int32_t t109 = -6456;

    t109 = (((x549==x550)-x551)^x552);

    if (t109 != 131) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x553 = INT8_MAX;
	static int64_t x554 = INT64_MIN;
	uint8_t x555 = UINT8_MAX;
	int8_t x556 = 6;
	volatile int32_t t110 = 2513221;

    t110 = (((x553==x554)-x555)^x556);

    if (t110 != -249) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x557 = INT32_MAX;
	volatile uint16_t x558 = 1051U;
	uint32_t x560 = 499U;
	volatile int64_t t111 = 243546613381LL;

    t111 = (((x557==x558)-x559)^x560);

    if (t111 != 329966LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x562 = INT8_MAX;
	int8_t x564 = -1;

    t112 = (((x561==x562)-x563)^x564);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x566 = -3;
	volatile int32_t x567 = INT32_MAX;
	volatile int32_t x568 = -47181;
	int32_t t113 = 630;

    t113 = (((x565==x566)-x567)^x568);

    if (t113 != 2147436466) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x569 = 133541141713178LL;
	int32_t x570 = -1;
	int8_t x571 = INT8_MAX;

    t114 = (((x569==x570)-x571)^x572);

    if (t114 != 18446744073709551482LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint64_t x574 = 1882334452LLU;
	int8_t x576 = -13;

    t115 = (((x573==x574)-x575)^x576);

    if (t115 != 14) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x581 = 5918471156807LL;
	volatile int8_t x583 = INT8_MIN;
	static uint16_t x584 = 205U;
	volatile int32_t t116 = 23844309;

    t116 = (((x581==x582)-x583)^x584);

    if (t116 != 77) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x585 = 5U;
	int16_t x588 = -1;
	volatile int32_t t117 = 66855164;

    t117 = (((x585==x586)-x587)^x588);

    if (t117 != 126) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x589 = -1;
	int32_t x590 = -1;
	volatile int16_t x591 = 1864;
	volatile int64_t t118 = -218764664LL;

    t118 = (((x589==x590)-x591)^x592);

    if (t118 != 9223372036854773945LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x593 = INT32_MIN;
	int16_t x594 = INT16_MAX;
	int64_t x595 = -400069563715209LL;
	int64_t x596 = -3195766674LL;
	volatile int64_t t119 = 65758580111386415LL;

    t119 = (((x593==x594)-x595)^x596);

    if (t119 != -400071006914841LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x601 = INT8_MIN;
	static int32_t x602 = INT32_MIN;
	int32_t x603 = 14;
	uint32_t x604 = 25435U;

    t120 = (((x601==x602)-x603)^x604);

    if (t120 != 4294941865U) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x606 = -1LL;
	uint8_t x607 = 4U;

    t121 = (((x605==x606)-x607)^x608);

    if (t121 != -24) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x610 = 12U;
	int16_t x611 = -1;
	volatile int32_t t122 = -58207903;

    t122 = (((x609==x610)-x611)^x612);

    if (t122 != -2) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x614 = INT64_MIN;
	int16_t x615 = 67;
	volatile int32_t t123 = 54011322;

    t123 = (((x613==x614)-x615)^x616);

    if (t123 != -71) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x617 = 44U;
	int64_t x619 = -1LL;
	int64_t t124 = 468LL;

    t124 = (((x617==x618)-x619)^x620);

    if (t124 != 65LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x622 = 26;
	int64_t x623 = INT64_MAX;
	static uint8_t x624 = 1U;
	int64_t t125 = INT64_MIN;

    t125 = (((x621==x622)-x623)^x624);

    if (t125 != INT64_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint64_t x625 = 255281LLU;
	volatile uint32_t x626 = 58783U;
	volatile int16_t x627 = 0;
	int8_t x628 = -2;
	static int32_t t126 = -316718253;

    t126 = (((x625==x626)-x627)^x628);

    if (t126 != -2) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x630 = -1;
	volatile uint32_t x632 = 96618269U;
	int64_t t127 = 2655LL;

    t127 = (((x629==x630)-x631)^x632);

    if (t127 != 96618268LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x635 = 2756LLU;

    t128 = (((x633==x634)-x635)^x636);

    if (t128 != 2755LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x637 = INT32_MIN;
	static int16_t x638 = -1;
	int8_t x639 = INT8_MIN;
	int32_t x640 = INT32_MIN;
	int32_t t129 = 1;

    t129 = (((x637==x638)-x639)^x640);

    if (t129 != -2147483520) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x641 = 442441LLU;
	int64_t x642 = INT64_MAX;
	int16_t x643 = INT16_MIN;
	static int64_t x644 = INT64_MIN;
	volatile int64_t t130 = -1641390241602LL;

    t130 = (((x641==x642)-x643)^x644);

    if (t130 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x645 = -1;
	int16_t x646 = INT16_MIN;
	volatile uint64_t x647 = 95818LLU;
	static int16_t x648 = INT16_MIN;
	volatile uint64_t t131 = 209621031004868368LLU;

    t131 = (((x645==x646)-x647)^x648);

    if (t131 != 68022LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x649 = UINT16_MAX;
	int32_t x651 = -1;
	volatile int64_t x652 = -34371LL;

    t132 = (((x649==x650)-x651)^x652);

    if (t132 != -34372LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x653 = INT32_MIN;
	int32_t x654 = -1;
	int8_t x655 = 46;
	volatile int32_t t133 = -5843439;

    t133 = (((x653==x654)-x655)^x656);

    if (t133 != -211) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x657 = UINT16_MAX;
	volatile int32_t x658 = -1;
	int64_t x659 = -1LL;
	int64_t t134 = 35974145000LL;

    t134 = (((x657==x658)-x659)^x660);

    if (t134 != 4294967294LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x662 = -13;
	int8_t x663 = -1;
	static volatile int32_t t135 = -5219;

    t135 = (((x661==x662)-x663)^x664);

    if (t135 != 96700) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x665 = INT64_MIN;
	int16_t x666 = INT16_MIN;
	static uint32_t x667 = 2254U;
	int32_t x668 = INT32_MIN;
	static uint32_t t136 = 2U;

    t136 = (((x665==x666)-x667)^x668);

    if (t136 != 2147481394U) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x672 = 50212377U;
	static volatile uint64_t t137 = 668915LLU;

    t137 = (((x669==x670)-x671)^x672);

    if (t137 != 18446744073602339796LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x673 = -23697;
	int64_t x674 = INT64_MAX;
	static int64_t x675 = INT64_MAX;

    t138 = (((x673==x674)-x675)^x676);

    if (t138 != 9223372036854773160LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x677 = INT8_MIN;
	int8_t x678 = INT8_MIN;
	volatile int16_t x679 = -1;
	int8_t x680 = INT8_MAX;
	static int32_t t139 = 100;

    t139 = (((x677==x678)-x679)^x680);

    if (t139 != 125) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x681 = -1;
	volatile int64_t x682 = -1LL;
	uint16_t x683 = 17U;
	static uint64_t x684 = UINT64_MAX;
	volatile uint64_t t140 = 2521820LLU;

    t140 = (((x681==x682)-x683)^x684);

    if (t140 != 15LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x685 = -1LL;
	volatile int32_t x686 = -1;
	static volatile int8_t x687 = INT8_MAX;
	static uint16_t x688 = 115U;

    t141 = (((x685==x686)-x687)^x688);

    if (t141 != -15) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x689 = -1;
	int64_t x690 = INT64_MIN;
	uint64_t x691 = UINT64_MAX;
	int8_t x692 = 3;

    t142 = (((x689==x690)-x691)^x692);

    if (t142 != 2LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x694 = UINT8_MAX;
	int64_t x695 = -928LL;
	int64_t x696 = INT64_MIN;
	int64_t t143 = -13601166LL;

    t143 = (((x693==x694)-x695)^x696);

    if (t143 != -9223372036854774880LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x697 = INT64_MIN;
	int32_t x698 = -69615;
	volatile int64_t t144 = -3226649488186661253LL;

    t144 = (((x697==x698)-x699)^x700);

    if (t144 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x701 = 3U;
	static int8_t x702 = INT8_MAX;
	uint32_t x704 = 4077482U;
	uint32_t t145 = 196361293U;

    t145 = (((x701==x702)-x703)^x704);

    if (t145 != 4077483U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x705 = UINT16_MAX;
	static int16_t x706 = INT16_MAX;
	uint32_t x708 = UINT32_MAX;

    t146 = (((x705==x706)-x707)^x708);

    if (t146 != 1U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x709 = 1;
	int32_t x710 = INT32_MIN;
	volatile uint16_t x712 = 197U;
	volatile uint64_t t147 = 4358651387492480LLU;

    t147 = (((x709==x710)-x711)^x712);

    if (t147 != 196LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x713 = INT32_MAX;
	static uint16_t x715 = 265U;
	volatile int32_t x716 = INT32_MIN;
	volatile int32_t t148 = 455327164;

    t148 = (((x713==x714)-x715)^x716);

    if (t148 != 2147483383) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x717 = UINT8_MAX;
	int8_t x719 = -1;
	volatile uint64_t t149 = 419141429758278LLU;

    t149 = (((x717==x718)-x719)^x720);

    if (t149 != 40918012918667LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x722 = 1LLU;
	int32_t x724 = INT32_MIN;
	uint32_t t150 = 183U;

    t150 = (((x721==x722)-x723)^x724);

    if (t150 != 1095778323U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x725 = UINT8_MAX;
	volatile uint64_t x727 = UINT64_MAX;
	int16_t x728 = INT16_MIN;
	uint64_t t151 = 30162008212LLU;

    t151 = (((x725==x726)-x727)^x728);

    if (t151 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x729 = INT64_MIN;
	int32_t x730 = INT32_MAX;
	volatile uint32_t x731 = 80365U;
	static int64_t x732 = INT64_MIN;
	int64_t t152 = -5805632467770LL;

    t152 = (((x729==x730)-x731)^x732);

    if (t152 != -9223372032559888877LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x737 = INT8_MAX;
	int16_t x738 = -1;
	static uint64_t x739 = 2202505856645929847LLU;
	volatile uint64_t t153 = 661188257166603LLU;

    t153 = (((x737==x738)-x739)^x740);

    if (t153 != 2202505856609084553LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x741 = UINT32_MAX;
	int32_t x742 = -290459;
	uint32_t x743 = 1342U;
	int64_t x744 = INT64_MIN;
	int64_t t154 = -378134622792LL;

    t154 = (((x741==x742)-x743)^x744);

    if (t154 != -9223372032559809854LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x747 = -1;
	int32_t x748 = INT32_MIN;
	static int32_t t155 = 6355;

    t155 = (((x745==x746)-x747)^x748);

    if (t155 != -2147483647) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x749 = INT32_MIN;
	int8_t x750 = -1;
	int8_t x751 = INT8_MAX;
	static int32_t t156 = 4026;

    t156 = (((x749==x750)-x751)^x752);

    if (t156 != 2147483521) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x753 = INT8_MIN;
	int64_t x754 = INT64_MIN;
	uint32_t x755 = 50150364U;
	int8_t x756 = INT8_MIN;

    t157 = (((x753==x754)-x755)^x756);

    if (t157 != 50150308U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x757 = 17;
	volatile int16_t x758 = INT16_MIN;

    t158 = (((x757==x758)-x759)^x760);

    if (t158 != 302698443827LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x761 = UINT64_MAX;
	volatile uint8_t x762 = UINT8_MAX;
	volatile uint32_t x763 = 49669U;
	volatile int64_t t159 = 1164192555LL;

    t159 = (((x761==x762)-x763)^x764);

    if (t159 != 4294917043LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x765 = -79941148143134LL;
	static int8_t x766 = INT8_MIN;
	uint32_t x767 = UINT32_MAX;
	uint16_t x768 = UINT16_MAX;

    t160 = (((x765==x766)-x767)^x768);

    if (t160 != 65534U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x770 = INT32_MIN;
	uint32_t x772 = 18202U;
	uint32_t t161 = 0U;

    t161 = (((x769==x770)-x771)^x772);

    if (t161 != 18330U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x773 = -424032473064127026LL;
	uint8_t x774 = 34U;
	uint32_t x775 = 878583058U;
	static uint16_t x776 = 7858U;

    t162 = (((x773==x774)-x775)^x776);

    if (t162 != 3416390748U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x777 = INT16_MIN;
	volatile int32_t x778 = INT32_MIN;
	int16_t x779 = 1136;

    t163 = (((x777==x778)-x779)^x780);

    if (t163 != -1169) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x781 = 1191U;
	uint64_t x782 = 7030236311494590LLU;
	uint16_t x783 = 1470U;
	volatile uint64_t x784 = UINT64_MAX;
	uint64_t t164 = 73566LLU;

    t164 = (((x781==x782)-x783)^x784);

    if (t164 != 1469LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x786 = -1;
	int64_t x787 = 157048LL;

    t165 = (((x785==x786)-x787)^x788);

    if (t165 != -4294810249LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x789 = INT32_MIN;
	volatile uint16_t x791 = 1U;
	static int64_t x792 = INT64_MIN;
	volatile int64_t t166 = INT64_MAX;

    t166 = (((x789==x790)-x791)^x792);

    if (t166 != INT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x793 = 1981U;
	volatile int16_t x794 = -1;
	int16_t x796 = INT16_MIN;
	static int32_t t167 = -1;

    t167 = (((x793==x794)-x795)^x796);

    if (t167 != 32641) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x801 = INT8_MIN;
	uint64_t x802 = 451657113089883LLU;
	int16_t x803 = INT16_MIN;
	uint64_t x804 = UINT64_MAX;

    t168 = (((x801==x802)-x803)^x804);

    if (t168 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x805 = UINT32_MAX;
	uint8_t x806 = 18U;
	volatile int32_t x807 = -481;
	int8_t x808 = INT8_MIN;
	static int32_t t169 = 15;

    t169 = (((x805==x806)-x807)^x808);

    if (t169 != -415) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x809 = INT8_MIN;
	int8_t x810 = -18;
	volatile int64_t x811 = 394320469515658LL;
	volatile int64_t x812 = 55196LL;
	int64_t t170 = -452991LL;

    t170 = (((x809==x810)-x811)^x812);

    if (t170 != -394320469527062LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x817 = 0U;
	int32_t x819 = INT32_MAX;
	int32_t x820 = INT32_MIN;
	volatile int32_t t171 = -1992330;

    t171 = (((x817==x818)-x819)^x820);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int8_t x821 = 22;
	uint64_t x822 = UINT64_MAX;
	uint16_t x824 = 54U;
	static volatile int32_t t172 = 7439;

    t172 = (((x821==x822)-x823)^x824);

    if (t172 != -32713) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x826 = INT64_MAX;
	static uint8_t x827 = 11U;
	static volatile int16_t x828 = -1114;
	static volatile int32_t t173 = 11;

    t173 = (((x825==x826)-x827)^x828);

    if (t173 != 1107) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x829 = 2;
	int64_t x830 = 305094545238968508LL;
	int16_t x831 = INT16_MIN;
	static int32_t x832 = -1;
	static int32_t t174 = 1;

    t174 = (((x829==x830)-x831)^x832);

    if (t174 != -32769) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x834 = INT32_MIN;
	volatile int32_t x835 = -1;
	uint32_t x836 = 67588194U;
	volatile uint32_t t175 = 1373077064U;

    t175 = (((x833==x834)-x835)^x836);

    if (t175 != 67588195U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x837 = 491LLU;
	int8_t x838 = -1;
	int64_t x839 = 0LL;
	volatile uint8_t x840 = UINT8_MAX;
	static volatile int64_t t176 = 383190LL;

    t176 = (((x837==x838)-x839)^x840);

    if (t176 != 255LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x841 = 39U;
	uint64_t x842 = 281529LLU;
	int8_t x843 = INT8_MAX;
	int32_t x844 = INT32_MIN;
	volatile int32_t t177 = -24;

    t177 = (((x841==x842)-x843)^x844);

    if (t177 != 2147483521) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int32_t x845 = INT32_MIN;
	volatile uint32_t x846 = 8U;
	volatile int16_t x847 = INT16_MAX;
	volatile uint8_t x848 = UINT8_MAX;

    t178 = (((x845==x846)-x847)^x848);

    if (t178 != -32514) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x849 = INT16_MIN;
	int64_t x852 = INT64_MIN;

    t179 = (((x849==x850)-x851)^x852);

    if (t179 != -9223372036854774342LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x853 = -1;
	uint8_t x854 = UINT8_MAX;
	uint16_t x855 = 5185U;
	int32_t x856 = INT32_MAX;
	int32_t t180 = -3423;

    t180 = (((x853==x854)-x855)^x856);

    if (t180 != -2147478464) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x857 = -3;
	int16_t x858 = INT16_MIN;
	static volatile uint32_t x859 = 40627938U;
	int64_t x860 = 89532928803064LL;
	static int64_t t181 = 1261824794087283LL;

    t181 = (((x857==x858)-x859)^x860);

    if (t181 != 89537183142374LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x861 = -1;
	uint64_t x862 = UINT64_MAX;
	int8_t x863 = -1;
	uint16_t x864 = 30U;
	volatile int32_t t182 = -828706480;

    t182 = (((x861==x862)-x863)^x864);

    if (t182 != 28) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x865 = 115822U;
	int16_t x866 = 478;
	uint64_t x867 = 54706349LLU;
	static volatile int64_t x868 = -19987232LL;
	uint64_t t183 = 9LLU;

    t183 = (((x865==x866)-x867)^x868);

    if (t183 != 41040819LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x869 = INT64_MIN;
	int64_t x870 = INT64_MIN;
	int8_t x872 = INT8_MIN;
	uint32_t t184 = 2008U;

    t184 = (((x869==x870)-x871)^x872);

    if (t184 != 301U) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x878 = 9507;
	int8_t x879 = 2;
	volatile int64_t t185 = 349253LL;

    t185 = (((x877==x878)-x879)^x880);

    if (t185 != 1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x881 = 3873LL;
	static int8_t x882 = INT8_MIN;
	uint16_t x883 = 4U;
	int8_t x884 = -1;
	int32_t t186 = -124254;

    t186 = (((x881==x882)-x883)^x884);

    if (t186 != 3) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x887 = INT16_MIN;
	volatile int32_t t187 = 14146832;

    t187 = (((x885==x886)-x887)^x888);

    if (t187 != -32769) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x890 = 533406817176LLU;
	static int32_t x891 = INT32_MAX;
	int16_t x892 = INT16_MIN;
	int32_t t188 = -32;

    t188 = (((x889==x890)-x891)^x892);

    if (t188 != 2147450881) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x893 = 344809618U;
	volatile int16_t x895 = INT16_MIN;
	uint32_t x896 = UINT32_MAX;

    t189 = (((x893==x894)-x895)^x896);

    if (t189 != 4294934527U) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x905 = INT32_MIN;
	uint16_t x906 = UINT16_MAX;
	int16_t x907 = INT16_MIN;
	int64_t x908 = -262041608293LL;
	static int64_t t190 = 25248575896841238LL;

    t190 = (((x905==x906)-x907)^x908);

    if (t190 != -262041575525LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x909 = -1;
	volatile int32_t x910 = -1;
	int16_t x911 = -2657;
	static volatile int64_t t191 = -2954755928LL;

    t191 = (((x909==x910)-x911)^x912);

    if (t191 != -9223372036854773150LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x913 = 110756980LLU;
	int16_t x914 = -1;
	uint16_t x915 = 3U;
	volatile int32_t t192 = -14;

    t192 = (((x913==x914)-x915)^x916);

    if (t192 != -2147483646) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x921 = 354988LL;
	uint32_t x922 = UINT32_MAX;
	int16_t x923 = -4561;
	int64_t x924 = INT64_MIN;
	volatile int64_t t193 = 49683384202LL;

    t193 = (((x921==x922)-x923)^x924);

    if (t193 != -9223372036854771247LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x925 = INT16_MIN;
	uint16_t x926 = 155U;
	volatile int8_t x928 = INT8_MIN;
	int32_t t194 = 2;

    t194 = (((x925==x926)-x927)^x928);

    if (t194 != -256) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x933 = -1354;
	int32_t x934 = INT32_MAX;
	int8_t x935 = -1;
	int8_t x936 = -6;
	int32_t t195 = -1;

    t195 = (((x933==x934)-x935)^x936);

    if (t195 != -5) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x937 = UINT16_MAX;
	int8_t x938 = INT8_MAX;
	int8_t x939 = INT8_MAX;
	int16_t x940 = 3665;
	int32_t t196 = -3363518;

    t196 = (((x937==x938)-x939)^x940);

    if (t196 != -3632) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x941 = 348110134700LL;
	int32_t x942 = -177896309;
	uint8_t x943 = 28U;
	int16_t x944 = -2;
	volatile int32_t t197 = -2;

    t197 = (((x941==x942)-x943)^x944);

    if (t197 != 26) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x945 = -1;
	int16_t x946 = INT16_MAX;
	int64_t x947 = INT64_MAX;

    t198 = (((x945==x946)-x947)^x948);

    if (t198 != 1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x949 = UINT32_MAX;
	uint8_t x950 = UINT8_MAX;
	static int8_t x951 = INT8_MIN;
	static int32_t t199 = -5992;

    t199 = (((x949==x950)-x951)^x952);

    if (t199 != 128) { NG(); } else { ; }
	
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

