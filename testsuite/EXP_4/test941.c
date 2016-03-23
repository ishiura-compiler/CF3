
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

static int64_t x5 = -6125519493LL;
uint8_t x9 = UINT8_MAX;
int32_t x10 = INT32_MIN;
volatile int64_t t1 = -110LL;
int16_t x13 = INT16_MIN;
volatile uint32_t t2 = 1508U;
static uint32_t x28 = UINT32_MAX;
volatile uint64_t x30 = UINT64_MAX;
int32_t x37 = 25;
volatile int64_t t7 = -239084LL;
uint32_t x46 = 1U;
int64_t x55 = -81763777309042528LL;
int64_t t10 = -23921831770132LL;
uint32_t x58 = 250653508U;
volatile int32_t x59 = INT32_MAX;
int8_t x69 = 0;
volatile int32_t x71 = INT32_MAX;
static volatile int16_t x72 = INT16_MIN;
int32_t t13 = -129;
static volatile int8_t x73 = 43;
volatile int32_t x75 = INT32_MIN;
int16_t x78 = 12137;
uint8_t x80 = 2U;
volatile int8_t x101 = INT8_MIN;
uint8_t x104 = UINT8_MAX;
int32_t t21 = 2;
volatile uint16_t x111 = 10945U;
int32_t x126 = INT32_MAX;
int16_t x128 = 11349;
volatile uint64_t t26 = 34995248LLU;
static int64_t x139 = INT64_MAX;
static volatile int64_t t29 = 23382LL;
int8_t x143 = -1;
int64_t x152 = INT64_MAX;
volatile uint32_t x157 = UINT32_MAX;
int16_t x161 = -2159;
int64_t x164 = INT64_MIN;
int16_t x168 = INT16_MIN;
int16_t x170 = INT16_MIN;
int8_t x172 = INT8_MAX;
volatile int32_t t37 = -314896042;
uint64_t t38 = 545291824302LLU;
volatile int8_t x180 = INT8_MIN;
volatile uint64_t t39 = 495434LLU;
volatile uint16_t x185 = 0U;
int64_t x191 = INT64_MIN;
static int16_t x198 = INT16_MIN;
uint32_t t45 = 1U;
int8_t x205 = INT8_MAX;
static uint64_t x206 = 160LLU;
volatile uint64_t t46 = 2697867488088378LLU;
uint32_t t47 = 888188U;
int8_t x218 = INT8_MAX;
volatile int32_t x221 = INT32_MIN;
volatile int32_t x224 = INT32_MAX;
static volatile int32_t t57 = -102628;
uint8_t x262 = UINT8_MAX;
int8_t x264 = -7;
volatile int64_t t58 = -182338LL;
uint16_t x271 = 2009U;
int16_t x272 = 4802;
static volatile int64_t t60 = 2097LL;
int32_t x275 = INT32_MIN;
uint8_t x278 = UINT8_MAX;
static uint64_t x279 = 1199363157513298LLU;
static uint32_t x283 = 18915120U;
volatile int64_t x286 = INT64_MIN;
int32_t x287 = INT32_MAX;
volatile int32_t x288 = -1;
int8_t x301 = 24;
volatile uint64_t x303 = 1999707LLU;
uint64_t t68 = 438657910926LLU;
volatile int8_t x307 = INT8_MIN;
int16_t x312 = INT16_MAX;
static uint64_t x322 = 550935LLU;
static volatile int8_t x326 = -1;
static uint64_t x331 = 41844661LLU;
static volatile uint64_t t74 = 2118104601LLU;
uint32_t x337 = UINT32_MAX;
int64_t x338 = INT64_MIN;
static volatile int64_t t76 = -501LL;
int16_t x349 = INT16_MIN;
uint8_t x352 = 13U;
static int64_t x359 = INT64_MIN;
int64_t t81 = 60LL;
uint8_t x371 = 7U;
volatile int64_t t82 = -486254LL;
volatile uint64_t t84 = 35902149702517LLU;
int32_t x382 = -23915786;
volatile int16_t x383 = INT16_MAX;
volatile int32_t t85 = -308215453;
int32_t x387 = INT32_MIN;
uint16_t x394 = UINT16_MAX;
volatile int32_t x395 = -4;
static uint8_t x396 = 72U;
int16_t x401 = -1;
uint8_t x405 = 44U;
static volatile uint32_t t92 = 0U;
volatile int64_t x419 = INT64_MIN;
static volatile int64_t t94 = -1097353473671417556LL;
int32_t t95 = 3610288;
int64_t x425 = -1LL;
static int64_t x426 = -1LL;
static int64_t t96 = -5121296LL;
int8_t x429 = 9;
int16_t x436 = 219;
volatile uint64_t x438 = UINT64_MAX;
volatile int32_t t101 = 364;
volatile uint8_t x455 = UINT8_MAX;
uint16_t x456 = UINT16_MAX;
volatile int32_t x459 = 3271;
static int32_t x460 = -28;
int32_t t104 = -306;
static int64_t x461 = 11366LL;
uint64_t x465 = 1265653494919075154LLU;
static int8_t x466 = 8;
uint64_t x474 = UINT64_MAX;
uint32_t x479 = 61859U;
uint16_t x486 = 28722U;
static volatile int8_t x487 = INT8_MIN;
int32_t x489 = -1;
int8_t x490 = -1;
int32_t x495 = INT32_MAX;
uint64_t t112 = 278338336993414LLU;
int32_t x507 = 39316;
static int8_t x509 = -1;
uint16_t x510 = 20773U;
static int16_t x517 = INT16_MAX;
volatile int8_t x518 = -1;
static uint16_t x521 = 4U;
int16_t x523 = INT16_MIN;
static volatile int64_t x527 = 761730840983109990LL;
int16_t x528 = -1;
volatile int8_t x529 = 57;
volatile int16_t x530 = INT16_MIN;
volatile int32_t t120 = -11785;
static int64_t x538 = -57485146294172LL;
uint32_t x539 = UINT32_MAX;
volatile uint64_t x540 = UINT64_MAX;
int32_t x546 = INT32_MIN;
int64_t x551 = INT64_MIN;
int64_t t125 = -2009578123650334LL;
static int8_t x554 = -1;
volatile uint64_t t126 = 461972747LLU;
uint32_t x565 = 5365U;
uint64_t x567 = UINT64_MAX;
int8_t x571 = 1;
static int16_t x576 = -1;
int8_t x578 = -1;
uint8_t x582 = UINT8_MAX;
uint8_t x583 = UINT8_MAX;
uint8_t x584 = UINT8_MAX;
int32_t x588 = -1;
int64_t t135 = 3281036540451519902LL;
uint64_t x593 = 2076741405LLU;
volatile int8_t x594 = INT8_MIN;
int8_t x596 = INT8_MAX;
volatile uint64_t t136 = 3801579001421112591LLU;
uint32_t x598 = UINT32_MAX;
static uint64_t x607 = 89LLU;
uint32_t x609 = 815646U;
int64_t x610 = 9785927168346195LL;
static uint8_t x612 = 7U;
int64_t t140 = -2026034049LL;
uint64_t x614 = UINT64_MAX;
int32_t x615 = INT32_MAX;
uint64_t x621 = UINT64_MAX;
int8_t x624 = INT8_MIN;
static volatile uint64_t t143 = 5907LLU;
int64_t x628 = INT64_MIN;
int8_t x631 = -27;
int16_t x634 = INT16_MIN;
volatile int32_t x648 = INT32_MIN;
volatile uint8_t x652 = 7U;
volatile int64_t x653 = -1LL;
int32_t x654 = -1;
int8_t x656 = INT8_MIN;
volatile uint32_t x660 = 2U;
int64_t x664 = INT64_MAX;
volatile uint64_t t154 = 4509122608LLU;
uint64_t x670 = UINT64_MAX;
volatile uint64_t t155 = 1083933090158LLU;
int16_t x674 = -27;
static volatile int32_t t156 = -1076;
static int32_t x688 = INT32_MIN;
int8_t x694 = 33;
int32_t x701 = INT32_MIN;
uint16_t x705 = 38U;
static volatile uint64_t t164 = 33455322688LLU;
int64_t x714 = 59LL;
int16_t x715 = 13;
uint16_t x720 = UINT16_MAX;
static int8_t x721 = 5;
volatile int16_t x722 = -5;
static volatile int64_t x730 = -1LL;
volatile uint64_t t170 = 686509529973LLU;
volatile uint16_t x733 = UINT16_MAX;
uint64_t x740 = 416928256154LLU;
int8_t x746 = -1;
uint32_t t176 = 6U;
int64_t x761 = -244LL;
volatile int64_t t177 = -7883716684175LL;
int64_t x767 = 4467737635797180903LL;
static int32_t x771 = INT32_MIN;
int8_t x772 = INT8_MIN;
int16_t x773 = INT16_MIN;
static int64_t x776 = INT64_MIN;
volatile int16_t x777 = INT16_MIN;
static volatile int8_t x788 = -44;
int8_t x796 = -1;
int32_t x798 = -1;
int64_t x799 = -1LL;
int32_t x803 = INT32_MIN;
static volatile int64_t x807 = INT64_MIN;
volatile uint64_t t188 = 17553111774773721LLU;
int8_t x812 = INT8_MIN;
volatile uint32_t x814 = 3U;
volatile uint32_t t190 = 97U;
static int16_t x822 = INT16_MIN;
int32_t x824 = INT32_MAX;
static int32_t t192 = 0;
int64_t x829 = 13292159425116LL;
volatile uint64_t t194 = 487725724LLU;
uint32_t x836 = UINT32_MAX;
volatile uint32_t t195 = 149016U;
uint8_t x838 = UINT8_MAX;
int16_t x841 = INT16_MIN;
volatile int8_t x843 = INT8_MIN;


void f0(void) {
    	volatile uint16_t x6 = 14684U;
	int32_t x7 = 1243;
	int8_t x8 = -1;
	volatile int64_t t0 = 10LL;

    t0 = (x5*(x6&(x7%x8)));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x11 = 1;
	int64_t x12 = INT64_MIN;

    t1 = (x9*(x10&(x11%x12)));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x14 = INT32_MAX;
	static uint32_t x15 = 3938828U;
	int32_t x16 = -9244215;

    t2 = (x13*(x14&(x15%x16)));

    if (t2 != 4076470272U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x25 = -1;
	volatile int16_t x26 = -55;
	volatile uint32_t x27 = UINT32_MAX;
	volatile uint32_t t3 = 228U;

    t3 = (x25*(x26&(x27%x28)));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x29 = INT16_MIN;
	uint8_t x31 = 15U;
	static int64_t x32 = -16098LL;
	volatile uint64_t t4 = 808397321280875113LLU;

    t4 = (x29*(x30&(x31%x32)));

    if (t4 != 18446744073709060096LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x33 = UINT8_MAX;
	volatile int32_t x34 = -491454814;
	int64_t x35 = INT64_MIN;
	static int16_t x36 = INT16_MAX;
	int64_t t5 = -7186LL;

    t5 = (x33*(x34&(x35%x36)));

    if (t5 != -125320978080LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x38 = INT8_MAX;
	int16_t x39 = -1;
	int32_t x40 = INT32_MAX;
	volatile int32_t t6 = 2;

    t6 = (x37*(x38&(x39%x40)));

    if (t6 != 3175) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x41 = -45419759LL;
	uint16_t x42 = 2196U;
	volatile int32_t x43 = -1;
	int64_t x44 = 3LL;

    t7 = (x41*(x42&(x43%x44)));

    if (t7 != -99741790764LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x45 = INT16_MIN;
	int32_t x47 = -3355552;
	int16_t x48 = INT16_MAX;
	volatile uint32_t t8 = 9U;

    t8 = (x45*(x46&(x47%x48)));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x49 = UINT8_MAX;
	uint64_t x50 = UINT64_MAX;
	int8_t x51 = INT8_MAX;
	volatile uint8_t x52 = UINT8_MAX;
	volatile uint64_t t9 = 2931932900LLU;

    t9 = (x49*(x50&(x51%x52)));

    if (t9 != 32385LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x53 = -1;
	volatile int32_t x54 = INT32_MIN;
	int64_t x56 = INT64_MIN;

    t10 = (x53*(x54&(x55%x56)));

    if (t10 != 81763777745256448LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x57 = 0U;
	volatile uint64_t x60 = 1439724LLU;
	volatile uint64_t t11 = 24252810082LLU;

    t11 = (x57*(x58&(x59%x60)));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x65 = 15124U;
	static int64_t x66 = INT64_MAX;
	static volatile int8_t x67 = INT8_MIN;
	int32_t x68 = -4;
	volatile int64_t t12 = 89110532282080LL;

    t12 = (x65*(x66&(x67%x68)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x70 = -1;

    t13 = (x69*(x70&(x71%x72)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x74 = INT32_MAX;
	int8_t x76 = 1;
	volatile int32_t t14 = 1380;

    t14 = (x73*(x74&(x75%x76)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x77 = 4920;
	int16_t x79 = INT16_MAX;
	static volatile int32_t t15 = 152;

    t15 = (x77*(x78&(x79%x80)));

    if (t15 != 4920) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x81 = 28229591;
	uint64_t x82 = UINT64_MAX;
	int32_t x83 = INT32_MIN;
	int32_t x84 = INT32_MIN;
	uint64_t t16 = 885LLU;

    t16 = (x81*(x82&(x83%x84)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x85 = -11051650;
	int8_t x86 = -51;
	int32_t x87 = INT32_MAX;
	static int8_t x88 = INT8_MIN;
	int32_t t17 = -3321742;

    t17 = (x85*(x86&(x87%x88)));

    if (t17 != -850977050) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x89 = 1U;
	volatile uint32_t x90 = 13U;
	uint64_t x91 = 12729800LLU;
	static volatile uint16_t x92 = 32U;
	volatile uint64_t t18 = 10142659750682LLU;

    t18 = (x89*(x90&(x91%x92)));

    if (t18 != 8LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x93 = 41166407263LL;
	int64_t x94 = INT64_MIN;
	volatile uint8_t x95 = UINT8_MAX;
	volatile int64_t x96 = INT64_MIN;
	int64_t t19 = 9845355714226981LL;

    t19 = (x93*(x94&(x95%x96)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x97 = 15;
	uint8_t x98 = UINT8_MAX;
	uint16_t x99 = UINT16_MAX;
	int32_t x100 = -1;
	volatile int32_t t20 = 1;

    t20 = (x97*(x98&(x99%x100)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x102 = 8417;
	uint16_t x103 = 31392U;

    t21 = (x101*(x102&(x103%x104)));

    if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x105 = INT8_MIN;
	uint8_t x106 = 2U;
	uint8_t x107 = UINT8_MAX;
	int64_t x108 = INT64_MAX;
	volatile int64_t t22 = 552434019866146161LL;

    t22 = (x105*(x106&(x107%x108)));

    if (t22 != -256LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x109 = -4547LL;
	int32_t x110 = INT32_MAX;
	static int16_t x112 = 4669;
	static int64_t t23 = 512LL;

    t23 = (x109*(x110&(x111%x112)));

    if (t23 != -7307029LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x113 = 1;
	int16_t x114 = -1;
	volatile int32_t x115 = INT32_MIN;
	uint8_t x116 = 5U;
	static int32_t t24 = 13375753;

    t24 = (x113*(x114&(x115%x116)));

    if (t24 != -3) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x117 = 2179124LLU;
	volatile uint64_t x118 = UINT64_MAX;
	int8_t x119 = INT8_MAX;
	int32_t x120 = 10337961;
	volatile uint64_t t25 = 61522LLU;

    t25 = (x117*(x118&(x119%x120)));

    if (t25 != 276748748LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x125 = UINT64_MAX;
	int64_t x127 = 6047010518LL;

    t26 = (x125*(x126&(x127%x128)));

    if (t26 != 18446744073709549325LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x129 = INT64_MAX;
	volatile int16_t x130 = -1;
	static volatile uint64_t x131 = 47220LLU;
	int64_t x132 = -5LL;
	volatile uint64_t t27 = 8030540665091LLU;

    t27 = (x129*(x130&(x131%x132)));

    if (t27 != 18446744073709504396LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x133 = -42LL;
	static int32_t x134 = INT32_MAX;
	static int16_t x135 = 3728;
	uint16_t x136 = 5765U;
	static int64_t t28 = -22LL;

    t28 = (x133*(x134&(x135%x136)));

    if (t28 != -156576LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x137 = -1;
	int32_t x138 = -1;
	int64_t x140 = INT64_MIN;

    t29 = (x137*(x138&(x139%x140)));

    if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x141 = -89;
	static int16_t x142 = -1;
	static uint32_t x144 = UINT32_MAX;
	uint32_t t30 = 21U;

    t30 = (x141*(x142&(x143%x144)));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x145 = 217;
	volatile int32_t x146 = 511;
	int64_t x147 = 4145883687084LL;
	static int64_t x148 = INT64_MIN;
	static volatile int64_t t31 = -4007246268LL;

    t31 = (x145*(x146&(x147%x148)));

    if (t31 != 37324LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x149 = 72U;
	static int16_t x150 = INT16_MAX;
	uint8_t x151 = 2U;
	int64_t t32 = 124676LL;

    t32 = (x149*(x150&(x151%x152)));

    if (t32 != 144LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x153 = 186;
	int32_t x154 = INT32_MIN;
	int64_t x155 = INT64_MIN;
	int64_t x156 = INT64_MIN;
	int64_t t33 = 17430LL;

    t33 = (x153*(x154&(x155%x156)));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x158 = UINT8_MAX;
	uint16_t x159 = 3U;
	uint8_t x160 = UINT8_MAX;
	static uint32_t t34 = 86815266U;

    t34 = (x157*(x158&(x159%x160)));

    if (t34 != 4294967293U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x162 = 0U;
	int32_t x163 = -1;
	volatile int64_t t35 = -275008LL;

    t35 = (x161*(x162&(x163%x164)));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x165 = -1LL;
	int16_t x166 = INT16_MAX;
	int32_t x167 = INT32_MIN;
	static volatile int64_t t36 = -596514216436LL;

    t36 = (x165*(x166&(x167%x168)));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x169 = 7425U;
	volatile uint8_t x171 = UINT8_MAX;

    t37 = (x169*(x170&(x171%x172)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x173 = -46232;
	volatile int32_t x174 = -69;
	static uint64_t x175 = UINT64_MAX;
	uint32_t x176 = 35118U;

    t38 = (x173*(x174&(x175%x176)));

    if (t38 != 18446744073330033128LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x177 = -1;
	uint64_t x178 = 70381LLU;
	int64_t x179 = INT64_MIN;

    t39 = (x177*(x178&(x179%x180)));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x181 = INT8_MIN;
	int64_t x182 = -139512LL;
	volatile uint16_t x183 = UINT16_MAX;
	int16_t x184 = -2034;
	static int64_t t40 = -35745775371668LL;

    t40 = (x181*(x182&(x183%x184)));

    if (t40 != -33792LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x186 = -1LL;
	int16_t x187 = 6;
	uint32_t x188 = UINT32_MAX;
	int64_t t41 = -462567346669226LL;

    t41 = (x185*(x186&(x187%x188)));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x189 = UINT8_MAX;
	static uint8_t x190 = 4U;
	uint16_t x192 = 21627U;
	static int64_t t42 = -1707637752783LL;

    t42 = (x189*(x190&(x191%x192)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x193 = INT8_MAX;
	uint8_t x194 = 1U;
	int8_t x195 = INT8_MIN;
	int16_t x196 = INT16_MAX;
	int32_t t43 = -90843949;

    t43 = (x193*(x194&(x195%x196)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x197 = INT8_MIN;
	int8_t x199 = 1;
	volatile int8_t x200 = -1;
	int32_t t44 = 74149296;

    t44 = (x197*(x198&(x199%x200)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x201 = 42363U;
	int16_t x202 = -1;
	uint32_t x203 = 180720025U;
	uint16_t x204 = UINT16_MAX;

    t45 = (x201*(x202&(x203%x204)));

    if (t45 != 1695790890U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x207 = UINT32_MAX;
	uint64_t x208 = 83645809LLU;

    t46 = (x205*(x206&(x207%x208)));

    if (t46 != 4064LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x209 = INT16_MIN;
	uint32_t x210 = 8141165U;
	static int32_t x211 = -1;
	volatile int32_t x212 = -6;

    t47 = (x209*(x210&(x211%x212)));

    if (t47 != 3813244928U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x213 = -1;
	int8_t x214 = INT8_MIN;
	int8_t x215 = INT8_MIN;
	int32_t x216 = INT32_MIN;
	int32_t t48 = -81258;

    t48 = (x213*(x214&(x215%x216)));

    if (t48 != 128) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint32_t x217 = 1066391401U;
	uint16_t x219 = UINT16_MAX;
	int16_t x220 = INT16_MIN;
	uint32_t t49 = 13U;

    t49 = (x217*(x218&(x219%x220)));

    if (t49 != 2287721751U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x222 = UINT32_MAX;
	int32_t x223 = -369;
	static volatile uint32_t t50 = 8U;

    t50 = (x221*(x222&(x223%x224)));

    if (t50 != 2147483648U) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x225 = -1LL;
	static volatile int16_t x226 = INT16_MAX;
	volatile int16_t x227 = 4;
	int32_t x228 = INT32_MIN;
	volatile int64_t t51 = 109020272891576251LL;

    t51 = (x225*(x226&(x227%x228)));

    if (t51 != -4LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x229 = -2;
	int16_t x230 = INT16_MIN;
	uint32_t x231 = 1560328159U;
	uint8_t x232 = 25U;
	volatile uint32_t t52 = 392U;

    t52 = (x229*(x230&(x231%x232)));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x233 = UINT16_MAX;
	static uint16_t x234 = UINT16_MAX;
	int8_t x235 = -4;
	static int32_t x236 = -2;
	int32_t t53 = -384123393;

    t53 = (x233*(x234&(x235%x236)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x241 = INT8_MIN;
	volatile int64_t x242 = 44755LL;
	int32_t x243 = INT32_MIN;
	int16_t x244 = 725;
	static int64_t t54 = -573149407309451290LL;

    t54 = (x241*(x242&(x243%x244)));

    if (t54 != -5728512LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x245 = INT8_MIN;
	int32_t x246 = 5833443;
	int8_t x247 = -22;
	int32_t x248 = 3549693;
	static volatile int32_t t55 = 484537;

    t55 = (x245*(x246&(x247%x248)));

    if (t55 != -746680576) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x249 = INT16_MIN;
	volatile uint32_t x250 = 89854049U;
	uint32_t x251 = 26997316U;
	static int32_t x252 = -3;
	volatile uint32_t t56 = 632U;

    t56 = (x249*(x250&(x251%x252)));

    if (t56 != 2011168768U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x257 = -1;
	int8_t x258 = INT8_MAX;
	uint8_t x259 = 1U;
	int8_t x260 = INT8_MAX;

    t57 = (x257*(x258&(x259%x260)));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x261 = INT8_MAX;
	static int64_t x263 = INT64_MIN;

    t58 = (x261*(x262&(x263%x264)));

    if (t58 != 32385LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x265 = -1LL;
	int8_t x266 = INT8_MAX;
	int64_t x267 = 10913LL;
	uint16_t x268 = UINT16_MAX;
	volatile int64_t t59 = -7808969364847LL;

    t59 = (x265*(x266&(x267%x268)));

    if (t59 != -33LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x269 = 26U;
	int64_t x270 = INT64_MIN;

    t60 = (x269*(x270&(x271%x272)));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x273 = 1;
	int32_t x274 = -1;
	int64_t x276 = INT64_MIN;
	volatile int64_t t61 = -4206LL;

    t61 = (x273*(x274&(x275%x276)));

    if (t61 != -2147483648LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x277 = INT8_MIN;
	uint8_t x280 = 1U;
	volatile uint64_t t62 = 758719532000LLU;

    t62 = (x277*(x278&(x279%x280)));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x281 = UINT64_MAX;
	volatile uint32_t x282 = 541574204U;
	volatile uint16_t x284 = 138U;
	static uint64_t t63 = 462LLU;

    t63 = (x281*(x282&(x283%x284)));

    if (t63 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x285 = UINT8_MAX;
	int64_t t64 = -166692767954LL;

    t64 = (x285*(x286&(x287%x288)));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x289 = INT16_MIN;
	volatile uint64_t x290 = UINT64_MAX;
	static volatile uint32_t x291 = UINT32_MAX;
	static int32_t x292 = -1;
	static uint64_t t65 = 806086835516528LLU;

    t65 = (x289*(x290&(x291%x292)));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x293 = -1;
	int32_t x294 = 1;
	volatile int16_t x295 = -1;
	int16_t x296 = INT16_MAX;
	int32_t t66 = -1607312;

    t66 = (x293*(x294&(x295%x296)));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x297 = -5294364;
	uint8_t x298 = 12U;
	static int16_t x299 = INT16_MAX;
	uint8_t x300 = UINT8_MAX;
	int32_t t67 = 389970;

    t67 = (x297*(x298&(x299%x300)));

    if (t67 != -63532368) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x302 = 13328U;
	int32_t x304 = -555;

    t68 = (x301*(x302&(x303%x304)));

    if (t68 != 384LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x305 = 12;
	int16_t x306 = 78;
	volatile uint64_t x308 = UINT64_MAX;
	uint64_t t69 = 31LLU;

    t69 = (x305*(x306&(x307%x308)));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x309 = INT8_MAX;
	static int16_t x310 = -53;
	uint16_t x311 = 3345U;
	volatile int32_t t70 = -56351656;

    t70 = (x309*(x310&(x311%x312)));

    if (t70 != 422783) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x317 = 4U;
	uint64_t x318 = UINT64_MAX;
	int64_t x319 = INT64_MIN;
	static int8_t x320 = INT8_MIN;
	uint64_t t71 = 7567173902560LLU;

    t71 = (x317*(x318&(x319%x320)));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x321 = INT8_MAX;
	int64_t x323 = 34074377662837LL;
	int64_t x324 = -24632039099514040LL;
	volatile uint64_t t72 = 140381LLU;

    t72 = (x321*(x322&(x323%x324)));

    if (t72 != 67627627LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x325 = INT8_MIN;
	uint16_t x327 = 5337U;
	uint64_t x328 = UINT64_MAX;
	static uint64_t t73 = 2060365LLU;

    t73 = (x325*(x326&(x327%x328)));

    if (t73 != 18446744073708868480LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x329 = 417U;
	volatile int32_t x330 = -1;
	uint8_t x332 = 32U;

    t74 = (x329*(x330&(x331%x332)));

    if (t74 != 8757LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x333 = -770;
	volatile int32_t x334 = -1;
	int32_t x335 = 5;
	volatile uint32_t x336 = 218742974U;
	uint32_t t75 = 5632U;

    t75 = (x333*(x334&(x335%x336)));

    if (t75 != 4294963446U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x339 = INT8_MAX;
	static int8_t x340 = INT8_MAX;

    t76 = (x337*(x338&(x339%x340)));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x341 = UINT16_MAX;
	volatile uint16_t x342 = 103U;
	static int32_t x343 = -1;
	int32_t x344 = INT32_MIN;
	volatile int32_t t77 = 191384;

    t77 = (x341*(x342&(x343%x344)));

    if (t77 != 6750105) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x350 = 2039662;
	int16_t x351 = INT16_MAX;
	volatile int32_t t78 = -111100132;

    t78 = (x349*(x350&(x351%x352)));

    if (t78 != -196608) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x353 = INT64_MIN;
	int8_t x354 = 59;
	static volatile uint64_t x355 = UINT64_MAX;
	int16_t x356 = INT16_MIN;
	uint64_t t79 = 79364032LLU;

    t79 = (x353*(x354&(x355%x356)));

    if (t79 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x357 = 13U;
	int32_t x358 = INT32_MIN;
	static int32_t x360 = INT32_MIN;
	volatile int64_t t80 = -442LL;

    t80 = (x357*(x358&(x359%x360)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x361 = -1;
	static volatile int16_t x362 = INT16_MIN;
	int8_t x363 = 1;
	int64_t x364 = -1LL;

    t81 = (x361*(x362&(x363%x364)));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x369 = INT16_MIN;
	static int64_t x370 = INT64_MIN;
	static int32_t x372 = INT32_MIN;

    t82 = (x369*(x370&(x371%x372)));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x373 = 44U;
	static int16_t x374 = INT16_MAX;
	static int64_t x375 = -1LL;
	int16_t x376 = 11562;
	int64_t t83 = 1769735LL;

    t83 = (x373*(x374&(x375%x376)));

    if (t83 != 1441748LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x377 = UINT64_MAX;
	static uint32_t x378 = UINT32_MAX;
	int64_t x379 = -31485LL;
	int8_t x380 = -13;

    t84 = (x377*(x378&(x379%x380)));

    if (t84 != 18446744069414584332LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x381 = UINT16_MAX;
	int8_t x384 = INT8_MAX;

    t85 = (x381*(x382&(x383%x384)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x385 = -1LL;
	int64_t x386 = -35LL;
	uint16_t x388 = 1U;
	volatile int64_t t86 = -3247230643810LL;

    t86 = (x385*(x386&(x387%x388)));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x389 = INT32_MIN;
	volatile uint16_t x390 = 143U;
	volatile uint64_t x391 = UINT64_MAX;
	volatile int32_t x392 = INT32_MAX;
	volatile uint64_t t87 = 1041859887154LLU;

    t87 = (x389*(x390&(x391%x392)));

    if (t87 != 18446744067267100672LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x393 = 3128809U;
	volatile uint32_t t88 = 115U;

    t88 = (x393*(x394&(x395%x396)));

    if (t88 != 3173648476U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x397 = INT8_MIN;
	uint16_t x398 = 84U;
	int8_t x399 = 2;
	uint16_t x400 = 86U;
	static int32_t t89 = 0;

    t89 = (x397*(x398&(x399%x400)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x402 = 1;
	int32_t x403 = -1;
	uint64_t x404 = 70959158864508934LLU;
	volatile uint64_t t90 = UINT64_MAX;

    t90 = (x401*(x402&(x403%x404)));

    if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x406 = 28U;
	static uint16_t x407 = UINT16_MAX;
	int64_t x408 = INT64_MAX;
	int64_t t91 = 89931005712LL;

    t91 = (x405*(x406&(x407%x408)));

    if (t91 != 1232LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x409 = UINT8_MAX;
	uint8_t x410 = 0U;
	static uint8_t x411 = UINT8_MAX;
	uint32_t x412 = 25622952U;

    t92 = (x409*(x410&(x411%x412)));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x413 = INT32_MIN;
	uint64_t x414 = UINT64_MAX;
	static int32_t x415 = INT32_MIN;
	static int16_t x416 = INT16_MIN;
	uint64_t t93 = 1050255039444LLU;

    t93 = (x413*(x414&(x415%x416)));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x417 = INT16_MIN;
	volatile int32_t x418 = 0;
	volatile uint8_t x420 = 13U;

    t94 = (x417*(x418&(x419%x420)));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x421 = INT32_MIN;
	int32_t x422 = INT32_MIN;
	volatile int16_t x423 = INT16_MAX;
	uint8_t x424 = 5U;

    t95 = (x421*(x422&(x423%x424)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x427 = INT32_MAX;
	int64_t x428 = 1159146LL;

    t96 = (x425*(x426&(x427%x428)));

    if (t96 != -745255LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x430 = -871157771316LL;
	int32_t x431 = -1;
	int8_t x432 = INT8_MIN;
	int64_t t97 = -44052546LL;

    t97 = (x429*(x430&(x431%x432)));

    if (t97 != -7840419941844LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x433 = UINT8_MAX;
	volatile int16_t x434 = INT16_MAX;
	int64_t x435 = -1LL;
	static int64_t t98 = 52684137870543LL;

    t98 = (x433*(x434&(x435%x436)));

    if (t98 != 8355585LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x437 = INT16_MIN;
	int8_t x439 = -1;
	uint8_t x440 = 8U;
	static uint64_t t99 = 8259859LLU;

    t99 = (x437*(x438&(x439%x440)));

    if (t99 != 32768LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x441 = INT16_MIN;
	int32_t x442 = INT32_MIN;
	uint16_t x443 = UINT16_MAX;
	uint8_t x444 = UINT8_MAX;
	volatile int32_t t100 = -834002;

    t100 = (x441*(x442&(x443%x444)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x445 = UINT8_MAX;
	volatile uint16_t x446 = UINT16_MAX;
	static int16_t x447 = -1;
	int8_t x448 = 1;

    t101 = (x445*(x446&(x447%x448)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x449 = 5119932420756LLU;
	static int16_t x450 = -2;
	static int8_t x451 = 56;
	uint16_t x452 = 8U;
	uint64_t t102 = 5282758871325663735LLU;

    t102 = (x449*(x450&(x451%x452)));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x453 = 8531310U;
	uint8_t x454 = 6U;
	volatile uint32_t t103 = 21221U;

    t103 = (x453*(x454&(x455%x456)));

    if (t103 != 51187860U) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x457 = -1;
	int8_t x458 = INT8_MAX;

    t104 = (x457*(x458&(x459%x460)));

    if (t104 != -23) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x462 = INT64_MIN;
	static int8_t x463 = INT8_MIN;
	volatile int16_t x464 = -1;
	static int64_t t105 = -163007903LL;

    t105 = (x461*(x462&(x463%x464)));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x467 = 432691383144LLU;
	uint64_t x468 = 3169552513072084546LLU;
	uint64_t t106 = 142418179540359167LLU;

    t106 = (x465*(x466&(x467%x468)));

    if (t106 != 10125227959352601232LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x473 = INT32_MAX;
	volatile int8_t x475 = INT8_MAX;
	int32_t x476 = 2815967;
	volatile uint64_t t107 = 235112287LLU;

    t107 = (x473*(x474&(x475%x476)));

    if (t107 != 272730423169LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x477 = -1;
	static uint8_t x478 = UINT8_MAX;
	int8_t x480 = -1;
	static volatile uint32_t t108 = 0U;

    t108 = (x477*(x478&(x479%x480)));

    if (t108 != 4294967133U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x485 = -1;
	uint32_t x488 = 66U;
	static volatile uint32_t t109 = 0U;

    t109 = (x485*(x486&(x487%x488)));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int32_t x491 = INT32_MIN;
	int8_t x492 = -1;
	static volatile int32_t t110 = 203950;

    t110 = (x489*(x490&(x491%x492)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x493 = INT8_MAX;
	volatile uint8_t x494 = 3U;
	uint8_t x496 = 2U;
	static int32_t t111 = 1741;

    t111 = (x493*(x494&(x495%x496)));

    if (t111 != 127) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x497 = UINT64_MAX;
	static volatile int8_t x498 = 31;
	int64_t x499 = INT64_MIN;
	uint32_t x500 = UINT32_MAX;

    t112 = (x497*(x498&(x499%x500)));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x501 = 54U;
	int16_t x502 = 5;
	volatile int32_t x503 = 16928747;
	int8_t x504 = 20;
	volatile int32_t t113 = -99807;

    t113 = (x501*(x502&(x503%x504)));

    if (t113 != 270) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x505 = INT16_MIN;
	volatile uint64_t x506 = 10429LLU;
	int8_t x508 = 1;
	uint64_t t114 = 409418657023981LLU;

    t114 = (x505*(x506&(x507%x508)));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x511 = 332322U;
	int16_t x512 = 1714;
	uint32_t t115 = 3972U;

    t115 = (x509*(x510&(x511%x512)));

    if (t115 != 4294967008U) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x513 = -2677324707761LL;
	int64_t x514 = 1LL;
	uint32_t x515 = UINT32_MAX;
	uint32_t x516 = 434U;
	volatile int64_t t116 = 100809417LL;

    t116 = (x513*(x514&(x515%x516)));

    if (t116 != -2677324707761LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x519 = -7578924LL;
	uint64_t x520 = 2805745985632990LLU;
	static uint64_t t117 = 52519635335182162LLU;

    t117 = (x517*(x518&(x519%x520)));

    if (t117 != 2656183104741332496LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x522 = -1;
	int64_t x524 = INT64_MIN;
	volatile int64_t t118 = -11521818160LL;

    t118 = (x521*(x522&(x523%x524)));

    if (t118 != -131072LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x525 = 237;
	volatile uint8_t x526 = 10U;
	int64_t t119 = 294252643666430388LL;

    t119 = (x525*(x526&(x527%x528)));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x531 = INT8_MAX;
	uint16_t x532 = UINT16_MAX;

    t120 = (x529*(x530&(x531%x532)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x533 = 130490217LLU;
	uint16_t x534 = 52U;
	volatile int64_t x535 = -1LL;
	volatile int16_t x536 = INT16_MIN;
	uint64_t t121 = 3509421436294812736LLU;

    t121 = (x533*(x534&(x535%x536)));

    if (t121 != 6785491284LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x537 = -11207LL;
	volatile uint64_t t122 = 1504615647LLU;

    t122 = (x537*(x538&(x539%x540)));

    if (t122 != 18446710553989586500LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x541 = INT64_MAX;
	volatile int32_t x542 = INT32_MIN;
	uint32_t x543 = 7981U;
	static int64_t x544 = -207839LL;
	int64_t t123 = -155693611LL;

    t123 = (x541*(x542&(x543%x544)));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x545 = -72;
	static volatile int8_t x547 = INT8_MAX;
	uint64_t x548 = 1397229365730LLU;
	volatile uint64_t t124 = 992554306LLU;

    t124 = (x545*(x546&(x547%x548)));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x549 = -1130;
	int16_t x550 = -1;
	uint8_t x552 = UINT8_MAX;

    t125 = (x549*(x550&(x551%x552)));

    if (t125 != 144640LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x553 = 0U;
	volatile uint64_t x555 = 35054140739111409LLU;
	int8_t x556 = INT8_MIN;

    t126 = (x553*(x554&(x555%x556)));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x557 = INT8_MIN;
	uint16_t x558 = UINT16_MAX;
	int32_t x559 = INT32_MIN;
	static volatile uint8_t x560 = UINT8_MAX;
	int32_t t127 = 44509;

    t127 = (x557*(x558&(x559%x560)));

    if (t127 != -8372224) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x561 = INT8_MIN;
	static uint64_t x562 = UINT64_MAX;
	volatile int8_t x563 = INT8_MAX;
	int16_t x564 = 1;
	uint64_t t128 = 7904382875902LLU;

    t128 = (x561*(x562&(x563%x564)));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x566 = UINT32_MAX;
	static int32_t x568 = INT32_MIN;
	static volatile uint64_t t129 = 33062502LLU;

    t129 = (x565*(x566&(x567%x568)));

    if (t129 != 11521249766155LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x569 = 33220658LLU;
	int32_t x570 = INT32_MAX;
	int16_t x572 = 1142;
	uint64_t t130 = 56962LLU;

    t130 = (x569*(x570&(x571%x572)));

    if (t130 != 33220658LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x573 = INT16_MIN;
	uint8_t x574 = 0U;
	int8_t x575 = -1;
	static int32_t t131 = -4273078;

    t131 = (x573*(x574&(x575%x576)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x577 = 759610665U;
	static uint8_t x579 = 14U;
	static int8_t x580 = -1;
	uint32_t t132 = 546300U;

    t132 = (x577*(x578&(x579%x580)));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x581 = INT64_MAX;
	volatile int64_t t133 = -7LL;

    t133 = (x581*(x582&(x583%x584)));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x585 = 7;
	int32_t x586 = INT32_MIN;
	static volatile int32_t x587 = INT32_MIN;
	volatile int32_t t134 = -2952730;

    t134 = (x585*(x586&(x587%x588)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x589 = INT32_MAX;
	volatile int32_t x590 = INT32_MIN;
	int32_t x591 = 4960;
	int64_t x592 = INT64_MIN;

    t135 = (x589*(x590&(x591%x592)));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x595 = 193U;

    t136 = (x593*(x594&(x595%x596)));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x597 = UINT16_MAX;
	volatile int8_t x599 = -52;
	static uint8_t x600 = UINT8_MAX;
	uint32_t t137 = 19833375U;

    t137 = (x597*(x598&(x599%x600)));

    if (t137 != 4291559476U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x601 = 5LLU;
	static uint64_t x602 = 1523316LLU;
	int32_t x603 = INT32_MAX;
	int16_t x604 = INT16_MIN;
	volatile uint64_t t138 = 363500293LLU;

    t138 = (x601*(x602&(x603%x604)));

    if (t138 != 79940LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x605 = 11;
	int16_t x606 = INT16_MAX;
	int8_t x608 = 1;
	volatile uint64_t t139 = 7921LLU;

    t139 = (x605*(x606&(x607%x608)));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int64_t x611 = INT64_MAX;

    t140 = (x609*(x610&(x611%x612)));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x613 = -1;
	uint32_t x616 = 165343421U;
	volatile uint64_t t141 = 1441410056783728794LLU;

    t141 = (x613*(x614&(x615%x616)));

    if (t141 != 18446744073546189021LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x617 = INT8_MAX;
	int8_t x618 = 52;
	static int16_t x619 = INT16_MIN;
	int16_t x620 = -1;
	static int32_t t142 = 451964;

    t142 = (x617*(x618&(x619%x620)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x622 = 52LLU;
	int32_t x623 = -1;

    t143 = (x621*(x622&(x623%x624)));

    if (t143 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x625 = INT32_MIN;
	static uint16_t x626 = UINT16_MAX;
	uint8_t x627 = UINT8_MAX;
	int64_t t144 = 15106283LL;

    t144 = (x625*(x626&(x627%x628)));

    if (t144 != -547608330240LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x629 = 0;
	uint64_t x630 = UINT64_MAX;
	int64_t x632 = INT64_MAX;
	static volatile uint64_t t145 = 10528807733LLU;

    t145 = (x629*(x630&(x631%x632)));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint8_t x633 = 1U;
	int8_t x635 = INT8_MIN;
	int16_t x636 = INT16_MIN;
	static int32_t t146 = -1137;

    t146 = (x633*(x634&(x635%x636)));

    if (t146 != -32768) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x637 = 0U;
	static int64_t x638 = -1LL;
	volatile int64_t x639 = INT64_MIN;
	uint32_t x640 = 23104U;
	static int64_t t147 = -31614723000335218LL;

    t147 = (x637*(x638&(x639%x640)));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x641 = INT8_MAX;
	int32_t x642 = -1;
	int64_t x643 = 164205314981980765LL;
	volatile uint16_t x644 = 903U;
	int64_t t148 = -2839054LL;

    t148 = (x641*(x642&(x643%x644)));

    if (t148 != 51943LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x645 = UINT32_MAX;
	volatile int32_t x646 = INT32_MIN;
	volatile int64_t x647 = -51002LL;
	volatile int64_t t149 = -18160539549LL;

    t149 = (x645*(x646&(x647%x648)));

    if (t149 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x649 = INT64_MAX;
	int32_t x650 = INT32_MIN;
	uint16_t x651 = 1U;
	int64_t t150 = 167481420229016480LL;

    t150 = (x649*(x650&(x651%x652)));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x655 = 14614;
	volatile int64_t t151 = -90257LL;

    t151 = (x653*(x654&(x655%x656)));

    if (t151 != -22LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x657 = 1;
	uint16_t x658 = 43U;
	int64_t x659 = INT64_MAX;
	volatile int64_t t152 = -34LL;

    t152 = (x657*(x658&(x659%x660)));

    if (t152 != 1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x661 = 3;
	static uint64_t x662 = UINT64_MAX;
	uint64_t x663 = UINT64_MAX;
	uint64_t t153 = 40462386462287LLU;

    t153 = (x661*(x662&(x663%x664)));

    if (t153 != 3LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x665 = INT16_MIN;
	int16_t x666 = INT16_MIN;
	static uint64_t x667 = UINT64_MAX;
	int8_t x668 = INT8_MAX;

    t154 = (x665*(x666&(x667%x668)));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x669 = INT64_MAX;
	int16_t x671 = INT16_MAX;
	static int8_t x672 = INT8_MIN;

    t155 = (x669*(x670&(x671%x672)));

    if (t155 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x673 = -1;
	static int16_t x675 = INT16_MIN;
	int32_t x676 = 6862;

    t156 = (x673*(x674&(x675%x676)));

    if (t156 != 5344) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x677 = -78;
	int32_t x678 = -2;
	int64_t x679 = -1LL;
	int8_t x680 = INT8_MAX;
	int64_t t157 = 703902LL;

    t157 = (x677*(x678&(x679%x680)));

    if (t157 != 156LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x681 = INT32_MAX;
	volatile int64_t x682 = 31257268138106LL;
	int16_t x683 = -1;
	static volatile int32_t x684 = -1;
	volatile int64_t t158 = 65000418721435LL;

    t158 = (x681*(x682&(x683%x684)));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x685 = -1;
	int32_t x686 = INT32_MAX;
	int16_t x687 = INT16_MAX;
	int32_t t159 = 60888774;

    t159 = (x685*(x686&(x687%x688)));

    if (t159 != -32767) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x689 = 3641LLU;
	int8_t x690 = 0;
	int32_t x691 = -354862042;
	int8_t x692 = INT8_MIN;
	static uint64_t t160 = 377712752531570123LLU;

    t160 = (x689*(x690&(x691%x692)));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x693 = INT32_MIN;
	int8_t x695 = 0;
	static uint8_t x696 = 1U;
	volatile int32_t t161 = 138033622;

    t161 = (x693*(x694&(x695%x696)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x697 = -1LL;
	static uint32_t x698 = 1U;
	int64_t x699 = 56LL;
	int32_t x700 = INT32_MIN;
	int64_t t162 = 257716992785475LL;

    t162 = (x697*(x698&(x699%x700)));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x702 = -1;
	int32_t x703 = 25;
	static int64_t x704 = INT64_MIN;
	static int64_t t163 = 198LL;

    t163 = (x701*(x702&(x703%x704)));

    if (t163 != -53687091200LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x706 = INT8_MIN;
	int16_t x707 = -916;
	uint64_t x708 = 17101244745486247LLU;

    t164 = (x705*(x706&(x707%x708)));

    if (t164 != 440885046864302592LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x709 = -4390307LL;
	uint32_t x710 = UINT32_MAX;
	int64_t x711 = INT64_MAX;
	uint8_t x712 = UINT8_MAX;
	volatile int64_t t165 = -464544385LL;

    t165 = (x709*(x710&(x711%x712)));

    if (t165 != -557568989LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x713 = UINT16_MAX;
	uint64_t x716 = 148713235630124LLU;
	uint64_t t166 = 444688LLU;

    t166 = (x713*(x714&(x715%x716)));

    if (t166 != 589815LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x717 = INT64_MIN;
	static int64_t x718 = INT64_MIN;
	volatile uint32_t x719 = 46422262U;
	volatile int64_t t167 = 206984584LL;

    t167 = (x717*(x718&(x719%x720)));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x723 = 6467293LL;
	int8_t x724 = INT8_MIN;
	volatile int64_t t168 = 8633590225LL;

    t168 = (x721*(x722&(x723%x724)));

    if (t168 != 445LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x725 = INT16_MIN;
	uint16_t x726 = UINT16_MAX;
	int64_t x727 = 69878832629491LL;
	int32_t x728 = INT32_MIN;
	static int64_t t169 = -402799783092LL;

    t169 = (x725*(x726&(x727%x728)));

    if (t169 != -58294272LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x729 = INT64_MIN;
	int16_t x731 = INT16_MAX;
	uint64_t x732 = 14LLU;

    t170 = (x729*(x730&(x731%x732)));

    if (t170 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x734 = 790311LL;
	static uint64_t x735 = 16834732LLU;
	uint16_t x736 = 219U;
	volatile uint64_t t171 = 1066388935789864757LLU;

    t171 = (x733*(x734&(x735%x736)));

    if (t171 != 131070LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x737 = -387822292LL;
	int32_t x738 = -1;
	static int64_t x739 = -1LL;
	uint64_t t172 = 2834537404LLU;

    t172 = (x737*(x738&(x739%x740)));

    if (t172 != 14008620352063415444LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x741 = -256640489222LL;
	uint32_t x742 = 1618852U;
	static uint8_t x743 = 9U;
	static int32_t x744 = -1;
	volatile int64_t t173 = 1434005394270877LL;

    t173 = (x741*(x742&(x743%x744)));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x745 = INT16_MIN;
	int32_t x747 = -1;
	int8_t x748 = -1;
	static int32_t t174 = 1;

    t174 = (x745*(x746&(x747%x748)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x753 = -57344;
	static int64_t x754 = -1982LL;
	int8_t x755 = INT8_MIN;
	static volatile int8_t x756 = 2;
	int64_t t175 = 6861778LL;

    t175 = (x753*(x754&(x755%x756)));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x757 = 853U;
	int8_t x758 = 2;
	int16_t x759 = -77;
	volatile uint16_t x760 = 5U;

    t176 = (x757*(x758&(x759%x760)));

    if (t176 != 1706U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x762 = 47U;
	int64_t x763 = INT64_MIN;
	static uint8_t x764 = 22U;

    t177 = (x761*(x762&(x763%x764)));

    if (t177 != -9760LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x765 = 570;
	static volatile int32_t x766 = INT32_MIN;
	uint64_t x768 = 1326484LLU;
	uint64_t t178 = 121957772724955LLU;

    t178 = (x765*(x766&(x767%x768)));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x769 = UINT16_MAX;
	uint64_t x770 = 64682547470021047LLU;
	uint64_t t179 = 200717896384960LLU;

    t179 = (x769*(x770&(x771%x772)));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x774 = INT16_MAX;
	static volatile uint16_t x775 = 3U;
	static int64_t t180 = 13399660230LL;

    t180 = (x773*(x774&(x775%x776)));

    if (t180 != -98304LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x778 = -229724259LL;
	int32_t x779 = INT32_MIN;
	volatile int32_t x780 = -879489817;
	static int64_t t181 = 14047LL;

    t181 = (x777*(x778&(x779%x780)));

    if (t181 != 17440469155840LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x781 = UINT8_MAX;
	static int32_t x782 = -1;
	uint32_t x783 = 933575923U;
	int64_t x784 = INT64_MAX;
	volatile int64_t t182 = 22LL;

    t182 = (x781*(x782&(x783%x784)));

    if (t182 != 238061860365LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x785 = INT64_MAX;
	int32_t x786 = INT32_MIN;
	uint64_t x787 = 286605LLU;
	volatile uint64_t t183 = 265231441658447538LLU;

    t183 = (x785*(x786&(x787%x788)));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x789 = 2680261291119LLU;
	static volatile int64_t x790 = INT64_MIN;
	int16_t x791 = -1;
	static int16_t x792 = -2256;
	volatile uint64_t t184 = 2191692LLU;

    t184 = (x789*(x790&(x791%x792)));

    if (t184 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x793 = INT16_MIN;
	int32_t x794 = INT32_MIN;
	static uint16_t x795 = 0U;
	int32_t t185 = -5445;

    t185 = (x793*(x794&(x795%x796)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x797 = -1;
	int8_t x800 = -1;
	int64_t t186 = -136763466202451046LL;

    t186 = (x797*(x798&(x799%x800)));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x801 = -1;
	uint64_t x802 = 139LLU;
	uint16_t x804 = 3441U;
	volatile uint64_t t187 = 6647532LLU;

    t187 = (x801*(x802&(x803%x804)));

    if (t187 != 18446744073709551485LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x805 = 1LLU;
	int64_t x806 = -3376655799406400823LL;
	static int8_t x808 = -59;

    t188 = (x805*(x806&(x807%x808)));

    if (t188 != 15070088274303150784LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x809 = 114389919U;
	volatile int64_t x810 = 28449169LL;
	int64_t x811 = 24360341831LL;
	volatile int64_t t189 = 250460289880495LL;

    t189 = (x809*(x810&(x811%x812)));

    if (t189 != 114389919LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x813 = -1;
	uint16_t x815 = UINT16_MAX;
	int8_t x816 = INT8_MIN;

    t190 = (x813*(x814&(x815%x816)));

    if (t190 != 4294967293U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x817 = 1U;
	int32_t x818 = 59630;
	int16_t x819 = INT16_MAX;
	static int64_t x820 = 3LL;
	static int64_t t191 = -102763463966LL;

    t191 = (x817*(x818&(x819%x820)));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x821 = INT16_MIN;
	int32_t x823 = INT32_MIN;

    t192 = (x821*(x822&(x823%x824)));

    if (t192 != 1073741824) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x825 = INT64_MIN;
	uint16_t x826 = 0U;
	volatile int8_t x827 = -50;
	int32_t x828 = -1;
	volatile int64_t t193 = 12795595LL;

    t193 = (x825*(x826&(x827%x828)));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x830 = UINT8_MAX;
	int32_t x831 = INT32_MAX;
	uint64_t x832 = UINT64_MAX;

    t194 = (x829*(x830&(x831%x832)));

    if (t194 != 3389500653404580LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x833 = 2;
	uint8_t x834 = 17U;
	uint32_t x835 = UINT32_MAX;

    t195 = (x833*(x834&(x835%x836)));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x837 = 24;
	uint8_t x839 = UINT8_MAX;
	volatile int8_t x840 = 1;
	int32_t t196 = -7;

    t196 = (x837*(x838&(x839%x840)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x842 = INT64_MAX;
	uint64_t x844 = UINT64_MAX;
	volatile uint64_t t197 = 286435759134667978LLU;

    t197 = (x841*(x842&(x843%x844)));

    if (t197 != 4194304LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x849 = 110U;
	static int8_t x850 = INT8_MIN;
	static uint64_t x851 = 43892894944LLU;
	volatile int8_t x852 = INT8_MAX;
	uint64_t t198 = 964972124174LLU;

    t198 = (x849*(x850&(x851%x852)));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x853 = INT8_MIN;
	int32_t x854 = INT32_MIN;
	volatile int64_t x855 = 14435625734065220LL;
	uint8_t x856 = 3U;
	static volatile int64_t t199 = 157272937699922LL;

    t199 = (x853*(x854&(x855%x856)));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

