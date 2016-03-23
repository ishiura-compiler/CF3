
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

int32_t x8 = INT32_MIN;
uint64_t x9 = 17LLU;
int8_t x10 = INT8_MIN;
uint16_t x24 = UINT16_MAX;
int32_t t5 = INT32_MIN;
int32_t x25 = INT32_MIN;
int64_t x30 = INT64_MAX;
int16_t x31 = 0;
uint32_t x32 = 403U;
int64_t t7 = 453190994LL;
int8_t x37 = INT8_MAX;
uint32_t x38 = UINT32_MAX;
volatile int64_t t9 = -3864LL;
int32_t x48 = -471;
int16_t x49 = INT16_MIN;
int8_t x59 = -1;
static int32_t x60 = -58471;
uint32_t x61 = 29U;
int16_t x62 = INT16_MIN;
volatile uint32_t t15 = 5577U;
static int32_t x66 = -280490675;
int8_t x70 = INT8_MAX;
uint32_t t17 = 1015795990U;
uint16_t x79 = 21U;
int32_t x83 = INT32_MAX;
volatile int32_t x86 = INT32_MAX;
volatile int64_t t21 = -8448244080LL;
int8_t x93 = 6;
int32_t t23 = 859;
volatile int32_t x99 = INT32_MIN;
static int16_t x100 = INT16_MIN;
static uint8_t x103 = 77U;
static uint16_t x106 = 726U;
int16_t x108 = -1;
static uint64_t x110 = 203950633LLU;
int64_t x120 = -1LL;
volatile int64_t t29 = 3530LL;
volatile uint16_t x122 = 15U;
static int64_t x123 = -1LL;
volatile int16_t x126 = INT16_MAX;
uint64_t x131 = 366957281LLU;
volatile int32_t x134 = INT32_MIN;
volatile int32_t x137 = 4302488;
uint8_t x145 = UINT8_MAX;
int8_t x146 = -2;
uint32_t x147 = UINT32_MAX;
volatile int16_t x154 = INT16_MAX;
volatile int64_t x155 = INT64_MAX;
uint16_t x157 = 5465U;
uint8_t x163 = 60U;
int16_t x169 = 4026;
static int64_t x172 = INT64_MIN;
uint16_t x177 = 125U;
int32_t x188 = 20;
int16_t x196 = 7792;
volatile uint8_t x198 = 2U;
static volatile int32_t x202 = -754551;
static uint8_t x203 = UINT8_MAX;
static volatile uint64_t x206 = 23196LLU;
uint16_t x209 = 22463U;
volatile uint64_t x212 = 75325385LLU;
int64_t t55 = -4167429388514035LL;
volatile int16_t x226 = -2;
int16_t x227 = INT16_MIN;
volatile uint64_t x229 = UINT64_MAX;
int16_t x231 = INT16_MAX;
uint32_t t60 = 2588U;
uint8_t x247 = 1U;
static volatile int64_t x249 = -1LL;
static volatile uint64_t x252 = 4162324265LLU;
uint64_t t62 = 2285959600LLU;
int16_t x254 = INT16_MAX;
volatile int64_t x256 = -1LL;
static uint8_t x264 = 11U;
int8_t x270 = 1;
uint16_t x271 = UINT16_MAX;
uint32_t x280 = 133907742U;
static volatile int64_t t70 = 2387386494LL;
volatile int8_t x286 = -1;
volatile int64_t x287 = -1LL;
volatile int32_t x288 = INT32_MIN;
static uint16_t x294 = 1028U;
int32_t x296 = -1;
volatile uint32_t t73 = 4288798U;
static volatile int8_t x298 = -1;
int8_t x299 = INT8_MIN;
uint32_t t74 = 6060U;
int64_t x301 = -1LL;
int64_t x319 = -1LL;
int32_t x322 = -1;
int32_t x326 = 1;
uint32_t x330 = 45046U;
uint16_t x337 = 1707U;
int16_t x338 = -100;
int64_t x344 = 1011723832LL;
static int64_t x354 = INT64_MIN;
int64_t x356 = INT64_MIN;
volatile int64_t t88 = -1699910365637339LL;
int64_t t90 = -5525248570LL;
static int64_t x373 = 792770873LL;
int64_t x378 = INT64_MIN;
volatile int64_t t93 = 18080610LL;
uint16_t x382 = 974U;
int32_t x384 = INT32_MAX;
int16_t x392 = -1;
uint64_t x394 = UINT64_MAX;
uint64_t t97 = 253867098837143LLU;
int16_t x401 = -10329;
static int64_t x408 = INT64_MAX;
int32_t x414 = -1;
uint64_t t102 = 4114104489827LLU;
volatile int32_t x419 = INT32_MIN;
volatile int64_t t103 = -2LL;
uint32_t x424 = UINT32_MAX;
int16_t x428 = INT16_MIN;
volatile uint32_t x431 = 11511204U;
volatile uint32_t t106 = 431913U;
static int64_t x436 = INT64_MAX;
static uint16_t x444 = UINT16_MAX;
int8_t x445 = INT8_MIN;
int64_t x456 = 132303011226LL;
static int32_t x459 = -1;
uint8_t x460 = 115U;
static int32_t x463 = INT32_MAX;
int64_t x477 = INT64_MAX;
volatile uint32_t x488 = 209601862U;
int64_t x490 = 271920688191090177LL;
static uint8_t x491 = UINT8_MAX;
uint16_t x497 = 701U;
static uint16_t x498 = 1U;
static uint32_t x501 = UINT32_MAX;
int16_t x506 = -5;
volatile uint8_t x507 = UINT8_MAX;
int16_t x513 = 143;
int32_t x517 = INT32_MAX;
uint16_t x523 = UINT16_MAX;
volatile uint32_t x524 = 5799198U;
static uint64_t t129 = 9885LLU;
int16_t x525 = 2;
uint64_t x528 = 49LLU;
uint32_t x531 = 65551107U;
static int16_t x532 = 1;
static uint32_t t131 = 3553556U;
uint32_t x540 = 25290407U;
static volatile int32_t x544 = -1;
static volatile int32_t x548 = -1;
uint16_t x560 = UINT16_MAX;
int64_t t139 = 36159770580080677LL;
int16_t x574 = INT16_MIN;
int32_t x575 = INT32_MIN;
volatile int32_t t141 = 3512;
volatile int8_t x579 = INT8_MAX;
volatile int32_t x580 = -1;
static volatile int32_t x587 = INT32_MIN;
int32_t x588 = -1;
int32_t x590 = INT32_MAX;
int16_t x592 = 5;
static volatile int64_t x600 = INT64_MIN;
int16_t x603 = -1;
uint64_t x611 = UINT64_MAX;
int16_t x618 = INT16_MIN;
int8_t x621 = INT8_MAX;
static volatile uint64_t x630 = UINT64_MAX;
int16_t x640 = -1;
volatile int64_t t157 = -18740LL;
volatile int32_t x647 = -21;
static uint32_t t160 = 14U;
int16_t x665 = INT16_MAX;
static int16_t x670 = -285;
volatile int8_t x671 = -17;
static uint32_t t163 = 7U;
volatile int16_t x673 = 14;
static int8_t x675 = 31;
static int8_t x686 = INT8_MIN;
int64_t x691 = INT64_MIN;
static uint32_t x694 = 1341U;
static uint32_t x699 = 236948111U;
int16_t x702 = INT16_MIN;
static uint64_t x711 = 8711559195765845LLU;
uint32_t x713 = 226739038U;
int8_t x714 = 1;
int32_t x715 = -733;
static int8_t x720 = -7;
int32_t x727 = -5577181;
int32_t x731 = -1;
volatile int16_t x740 = -1;
static int16_t x741 = 1;
uint64_t t180 = 58608LLU;
static int64_t x750 = 517375234881647LL;
static int16_t x755 = -1;
int64_t x757 = -3933806985LL;
uint64_t x761 = 17792787489513LLU;
int64_t x772 = INT64_MIN;
int32_t x776 = 961999075;
static int64_t t188 = 92312810353LL;
int64_t t189 = -2851307525LL;
static uint8_t x787 = 50U;
int16_t x792 = -1;
static int64_t t194 = INT64_MIN;
int64_t x806 = -249LL;
int16_t x814 = -542;
uint8_t x815 = 1U;
int8_t x816 = -1;
int32_t x818 = INT32_MIN;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	static uint64_t x2 = 1615690213018185158LLU;
	volatile uint8_t x3 = 2U;
	int16_t x4 = INT16_MIN;
	uint64_t t0 = 1804182353766961LLU;

    t0 = ((x1&x2)&(x3%x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MIN;
	int8_t x6 = 15;
	uint8_t x7 = 1U;
	static int64_t t1 = 15803012152278LL;

    t1 = ((x5&x6)&(x7%x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x11 = 1624U;
	uint16_t x12 = 1787U;
	volatile uint64_t t2 = 7225984126504192LLU;

    t2 = ((x9&x10)&(x11%x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = -1;
	int8_t x14 = INT8_MIN;
	uint16_t x15 = 53U;
	static int8_t x16 = INT8_MIN;
	static volatile int32_t t3 = -319619;

    t3 = ((x13&x14)&(x15%x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = -1LL;
	int64_t x18 = -40149756466594LL;
	int16_t x19 = INT16_MIN;
	int8_t x20 = 5;
	static volatile int64_t t4 = -475506924958LL;

    t4 = ((x17&x18)&(x19%x20));

    if (t4 != -40149756466596LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -14200;
	int32_t x22 = INT32_MIN;
	static int32_t x23 = -1;

    t5 = ((x21&x22)&(x23%x24));

    if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x26 = UINT64_MAX;
	uint64_t x27 = UINT64_MAX;
	uint8_t x28 = 2U;
	uint64_t t6 = 21043LLU;

    t6 = ((x25&x26)&(x27%x28));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;

    t7 = ((x29&x30)&(x31%x32));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1LL;
	uint32_t x34 = 611147421U;
	volatile uint64_t x35 = 31749270155987LLU;
	int64_t x36 = -1LL;
	uint64_t t8 = 861199LLU;

    t8 = ((x33&x34)&(x35%x36));

    if (t8 != 543691409LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x39 = -1LL;
	int64_t x40 = -623LL;

    t9 = ((x37&x38)&(x39%x40));

    if (t9 != 127LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x41 = 978803476421LLU;
	int16_t x42 = -1;
	int64_t x43 = -1LL;
	static int8_t x44 = -1;
	volatile uint64_t t10 = 1258LLU;

    t10 = ((x41&x42)&(x43%x44));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = UINT32_MAX;
	int64_t x46 = -3355708036LL;
	int8_t x47 = INT8_MAX;
	int64_t t11 = 1LL;

    t11 = ((x45&x46)&(x47%x48));

    if (t11 != 124LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x50 = -44164;
	uint64_t x51 = UINT64_MAX;
	int16_t x52 = 1;
	volatile uint64_t t12 = 230322851157880646LLU;

    t12 = ((x49&x50)&(x51%x52));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 1213522511010070LLU;
	static int32_t x54 = -1;
	uint64_t x55 = UINT64_MAX;
	static uint16_t x56 = UINT16_MAX;
	volatile uint64_t t13 = 613277732961802403LLU;

    t13 = ((x53&x54)&(x55%x56));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	uint16_t x58 = 180U;
	int32_t t14 = 7100023;

    t14 = ((x57&x58)&(x59%x60));

    if (t14 != 180) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x63 = 13U;
	int32_t x64 = 6;

    t15 = ((x61&x62)&(x63%x64));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = -1;
	int32_t x67 = 56;
	int16_t x68 = -1;
	volatile int32_t t16 = 1161;

    t16 = ((x65&x66)&(x67%x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x69 = 509124364U;
	static int16_t x71 = 2959;
	static uint8_t x72 = UINT8_MAX;

    t17 = ((x69&x70)&(x71%x72));

    if (t17 != 8U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = INT32_MIN;
	static int32_t x74 = 318;
	int8_t x75 = INT8_MIN;
	volatile int64_t x76 = INT64_MIN;
	static int64_t t18 = 1LL;

    t18 = ((x73&x74)&(x75%x76));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = UINT32_MAX;
	static int32_t x78 = INT32_MIN;
	static int16_t x80 = -11260;
	uint32_t t19 = 20U;

    t19 = ((x77&x78)&(x79%x80));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1;
	static uint32_t x82 = 806U;
	static int16_t x84 = -63;
	uint32_t t20 = 669U;

    t20 = ((x81&x82)&(x83%x84));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	int64_t x87 = 43537032180LL;
	uint16_t x88 = UINT16_MAX;

    t21 = ((x85&x86)&(x87%x88));

    if (t21 != 34560LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x89 = UINT8_MAX;
	uint32_t x90 = UINT32_MAX;
	int64_t x91 = INT64_MIN;
	uint8_t x92 = 126U;
	int64_t t22 = -1057421595794233LL;

    t22 = ((x89&x90)&(x91%x92));

    if (t22 != 248LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x94 = 50;
	int32_t x95 = INT32_MIN;
	static volatile int8_t x96 = INT8_MAX;

    t23 = ((x93&x94)&(x95%x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x97 = UINT64_MAX;
	volatile int64_t x98 = -1LL;
	volatile uint64_t t24 = 158888621003886001LLU;

    t24 = ((x97&x98)&(x99%x100));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 22991LLU;
	volatile int32_t x102 = 29;
	uint64_t x104 = 207267098LLU;
	uint64_t t25 = 5043926LLU;

    t25 = ((x101&x102)&(x103%x104));

    if (t25 != 13LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x105 = UINT32_MAX;
	uint8_t x107 = 0U;
	volatile uint32_t t26 = 0U;

    t26 = ((x105&x106)&(x107%x108));

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = -5LL;
	static volatile int16_t x111 = INT16_MAX;
	int32_t x112 = INT32_MIN;
	uint64_t t27 = 911LLU;

    t27 = ((x109&x110)&(x111%x112));

    if (t27 != 2601LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -970344241836390LL;
	int8_t x114 = INT8_MAX;
	static uint64_t x115 = UINT64_MAX;
	int8_t x116 = -1;
	volatile uint64_t t28 = 13766769LLU;

    t28 = ((x113&x114)&(x115%x116));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -1;
	volatile int64_t x118 = 117LL;
	volatile int64_t x119 = INT64_MAX;

    t29 = ((x117&x118)&(x119%x120));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	int8_t x124 = INT8_MIN;
	int64_t t30 = -2LL;

    t30 = ((x121&x122)&(x123%x124));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int16_t x125 = INT16_MAX;
	int32_t x127 = INT32_MIN;
	uint16_t x128 = 17619U;
	volatile int32_t t31 = 1;

    t31 = ((x125&x126)&(x127%x128));

    if (t31 != 23316) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	static uint32_t x130 = UINT32_MAX;
	static uint64_t x132 = UINT64_MAX;
	volatile uint64_t t32 = 260752026112850LLU;

    t32 = ((x129&x130)&(x131%x132));

    if (t32 != 97LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x133 = INT64_MIN;
	static uint32_t x135 = 3U;
	uint8_t x136 = UINT8_MAX;
	volatile int64_t t33 = 968020914784LL;

    t33 = ((x133&x134)&(x135%x136));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x138 = -1;
	uint32_t x139 = 27382U;
	int16_t x140 = -1;
	volatile uint32_t t34 = 3U;

    t34 = ((x137&x138)&(x139%x140));

    if (t34 != 8848U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x141 = 49399871LLU;
	uint64_t x142 = 727928641089LLU;
	volatile uint32_t x143 = UINT32_MAX;
	int32_t x144 = INT32_MAX;
	volatile uint64_t t35 = 887765604LLU;

    t35 = ((x141&x142)&(x143%x144));

    if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x148 = INT8_MIN;
	uint32_t t36 = 2168U;

    t36 = ((x145&x146)&(x147%x148));

    if (t36 != 126U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = 6006LL;
	volatile int16_t x150 = 553;
	volatile uint8_t x151 = 10U;
	static volatile int64_t x152 = INT64_MAX;
	int64_t t37 = -103931489526655954LL;

    t37 = ((x149&x150)&(x151%x152));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -1;
	static uint32_t x156 = UINT32_MAX;
	volatile int64_t t38 = -61712596126435251LL;

    t38 = ((x153&x154)&(x155%x156));

    if (t38 != 32767LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x158 = -50;
	volatile int8_t x159 = INT8_MIN;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = -3278329;

    t39 = ((x157&x158)&(x159%x160));

    if (t39 != 5376) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x161 = INT8_MIN;
	volatile int16_t x162 = -1;
	uint16_t x164 = 216U;
	static int32_t t40 = -492435851;

    t40 = ((x161&x162)&(x163%x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = 48;
	volatile int8_t x166 = -2;
	uint8_t x167 = 54U;
	int32_t x168 = INT32_MAX;
	int32_t t41 = 291;

    t41 = ((x165&x166)&(x167%x168));

    if (t41 != 48) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x170 = -1;
	int8_t x171 = -1;
	int64_t t42 = 1531LL;

    t42 = ((x169&x170)&(x171%x172));

    if (t42 != 4026LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x173 = INT32_MIN;
	int32_t x174 = INT32_MIN;
	uint16_t x175 = UINT16_MAX;
	volatile uint8_t x176 = 25U;
	int32_t t43 = 3;

    t43 = ((x173&x174)&(x175%x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x178 = 1806863215906LL;
	volatile uint8_t x179 = 11U;
	volatile int64_t x180 = INT64_MIN;
	int64_t t44 = -4LL;

    t44 = ((x177&x178)&(x179%x180));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = UINT64_MAX;
	static int32_t x182 = INT32_MIN;
	static int16_t x183 = -270;
	uint8_t x184 = UINT8_MAX;
	volatile uint64_t t45 = 225075LLU;

    t45 = ((x181&x182)&(x183%x184));

    if (t45 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MAX;
	int32_t x186 = INT32_MIN;
	volatile uint8_t x187 = 22U;
	int32_t t46 = -18303;

    t46 = ((x185&x186)&(x187%x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = 14771LLU;
	uint64_t x190 = 5765141LLU;
	uint64_t x191 = 1143238514586311357LLU;
	uint32_t x192 = UINT32_MAX;
	uint64_t t47 = 405LLU;

    t47 = ((x189&x190)&(x191%x192));

    if (t47 != 12304LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = -1;
	static int8_t x194 = -1;
	uint8_t x195 = 0U;
	int32_t t48 = 16109;

    t48 = ((x193&x194)&(x195%x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x197 = 2532;
	static int32_t x199 = INT32_MAX;
	int32_t x200 = 3348;
	int32_t t49 = -5436259;

    t49 = ((x197&x198)&(x199%x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x201 = INT8_MIN;
	int8_t x204 = 47;
	int32_t t50 = -56078120;

    t50 = ((x201&x202)&(x203%x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MAX;
	volatile int8_t x207 = 1;
	int64_t x208 = INT64_MIN;
	volatile uint64_t t51 = 64203LLU;

    t51 = ((x205&x206)&(x207%x208));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x210 = INT16_MAX;
	int64_t x211 = -1LL;
	uint64_t t52 = 33241LLU;

    t52 = ((x209&x210)&(x211%x212));

    if (t52 != 20786LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = 7;
	int8_t x214 = 0;
	static uint16_t x215 = 124U;
	static uint32_t x216 = UINT32_MAX;
	volatile uint32_t t53 = 257272378U;

    t53 = ((x213&x214)&(x215%x216));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	int64_t x218 = INT64_MIN;
	int8_t x219 = -1;
	volatile int16_t x220 = INT16_MIN;
	int64_t t54 = 4011LL;

    t54 = ((x217&x218)&(x219%x220));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = -241172626117LL;
	int32_t x222 = 644406;
	int16_t x223 = -1;
	int64_t x224 = -5483178342717LL;

    t55 = ((x221&x222)&(x223%x224));

    if (t55 != 640306LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x225 = UINT32_MAX;
	uint16_t x228 = 30668U;
	uint32_t t56 = 3865365U;

    t56 = ((x225&x226)&(x227%x228));

    if (t56 != 4294965196U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x230 = 64U;
	static int16_t x232 = -332;
	static uint64_t t57 = 19LLU;

    t57 = ((x229&x230)&(x231%x232));

    if (t57 != 64LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 2118676421720LLU;
	volatile int32_t x234 = INT32_MIN;
	uint8_t x235 = 9U;
	int8_t x236 = -48;
	volatile uint64_t t58 = 33LLU;

    t58 = ((x233&x234)&(x235%x236));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = UINT8_MAX;
	int8_t x238 = INT8_MIN;
	volatile int16_t x239 = -1;
	int64_t x240 = INT64_MIN;
	static volatile int64_t t59 = -9641140349652LL;

    t59 = ((x237&x238)&(x239%x240));

    if (t59 != 128LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint32_t x241 = UINT32_MAX;
	int32_t x242 = INT32_MIN;
	int8_t x243 = INT8_MIN;
	int16_t x244 = 1;

    t60 = ((x241&x242)&(x243%x244));

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -1695;
	int16_t x246 = INT16_MAX;
	static int32_t x248 = INT32_MIN;
	static int32_t t61 = -3;

    t61 = ((x245&x246)&(x247%x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x250 = 66U;
	uint32_t x251 = UINT32_MAX;

    t62 = ((x249&x250)&(x251%x252));

    if (t62 != 66LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x253 = INT64_MIN;
	int16_t x255 = INT16_MIN;
	volatile int64_t t63 = -5LL;

    t63 = ((x253&x254)&(x255%x256));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = 1;
	int64_t x258 = 252905189LL;
	uint64_t x259 = 501147648LLU;
	static uint32_t x260 = 29467783U;
	uint64_t t64 = 4LLU;

    t64 = ((x257&x258)&(x259%x260));

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = 496729366976275LLU;
	uint64_t x262 = 35255351LLU;
	int64_t x263 = -1LL;
	static uint64_t t65 = 14LLU;

    t65 = ((x261&x262)&(x263%x264));

    if (t65 != 1168403LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int8_t x265 = 2;
	volatile int64_t x266 = INT64_MIN;
	int8_t x267 = 1;
	int64_t x268 = -1LL;
	int64_t t66 = 1119182LL;

    t66 = ((x265&x266)&(x267%x268));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = -3;
	int16_t x272 = -243;
	int32_t t67 = -2502;

    t67 = ((x269&x270)&(x271%x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	volatile int32_t x274 = INT32_MIN;
	uint8_t x275 = 0U;
	static int64_t x276 = -1LL;
	int64_t t68 = -55LL;

    t68 = ((x273&x274)&(x275%x276));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x277 = INT32_MAX;
	int64_t x278 = 12698853463804LL;
	int32_t x279 = INT32_MIN;
	int64_t t69 = -15595919608LL;

    t69 = ((x277&x278)&(x279%x280));

    if (t69 != 132640LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x281 = -1;
	int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MIN;
	int64_t x284 = INT64_MAX;

    t70 = ((x281&x282)&(x283%x284));

    if (t70 != -32768LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = 9739680683763LL;
	volatile int64_t t71 = 3648493386449025LL;

    t71 = ((x285&x286)&(x287%x288));

    if (t71 != 9739680683763LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x289 = 3057064LLU;
	int32_t x290 = -1;
	int64_t x291 = INT64_MIN;
	static volatile int16_t x292 = INT16_MIN;
	static uint64_t t72 = 17670LLU;

    t72 = ((x289&x290)&(x291%x292));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = UINT8_MAX;
	static uint32_t x295 = 44U;

    t73 = ((x293&x294)&(x295%x296));

    if (t73 != 4U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x297 = 169785616U;
	static volatile uint32_t x300 = 443647166U;

    t74 = ((x297&x298)&(x299%x300));

    if (t74 != 33689616U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x302 = INT64_MIN;
	uint16_t x303 = UINT16_MAX;
	static int64_t x304 = INT64_MIN;
	volatile int64_t t75 = -297862LL;

    t75 = ((x301&x302)&(x303%x304));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x305 = INT64_MIN;
	int8_t x306 = -1;
	volatile uint16_t x307 = UINT16_MAX;
	static int8_t x308 = INT8_MIN;
	int64_t t76 = 68505LL;

    t76 = ((x305&x306)&(x307%x308));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x313 = 24110314U;
	uint32_t x314 = UINT32_MAX;
	int8_t x315 = INT8_MAX;
	int64_t x316 = -1LL;
	static volatile int64_t t77 = -9098983391754721LL;

    t77 = ((x313&x314)&(x315%x316));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x317 = UINT32_MAX;
	int32_t x318 = INT32_MAX;
	static int8_t x320 = INT8_MIN;
	volatile int64_t t78 = 242725796140450551LL;

    t78 = ((x317&x318)&(x319%x320));

    if (t78 != 2147483647LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x321 = -1;
	uint64_t x323 = 12238103015321LLU;
	int32_t x324 = INT32_MIN;
	volatile uint64_t t79 = 4248168794739670LLU;

    t79 = ((x321&x322)&(x323%x324));

    if (t79 != 12238103015321LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x325 = -1;
	uint32_t x327 = 35632071U;
	uint16_t x328 = 2851U;
	volatile uint32_t t80 = 13748U;

    t80 = ((x325&x326)&(x327%x328));

    if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x329 = -252LL;
	volatile uint8_t x331 = 3U;
	uint8_t x332 = 1U;
	int64_t t81 = 13602022902LL;

    t81 = ((x329&x330)&(x331%x332));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x333 = -3388;
	volatile int32_t x334 = 1;
	uint32_t x335 = 106544U;
	int32_t x336 = 540392;
	volatile uint32_t t82 = 63732993U;

    t82 = ((x333&x334)&(x335%x336));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x339 = 13764U;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t83 = 1642700820751712772LLU;

    t83 = ((x337&x338)&(x339%x340));

    if (t83 != 1152LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x341 = -122057454LL;
	volatile uint8_t x342 = 19U;
	int32_t x343 = INT32_MAX;
	int64_t t84 = 13LL;

    t84 = ((x341&x342)&(x343%x344));

    if (t84 != 2LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x345 = -1;
	uint32_t x346 = 18483964U;
	int8_t x347 = 1;
	static int8_t x348 = -1;
	uint32_t t85 = 11U;

    t85 = ((x345&x346)&(x347%x348));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x349 = INT32_MAX;
	static int8_t x350 = INT8_MAX;
	int64_t x351 = INT64_MIN;
	volatile uint64_t x352 = UINT64_MAX;
	uint64_t t86 = 0LLU;

    t86 = ((x349&x350)&(x351%x352));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x353 = 3U;
	int16_t x355 = INT16_MAX;
	int64_t t87 = -26LL;

    t87 = ((x353&x354)&(x355%x356));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x357 = 180U;
	int64_t x358 = INT64_MAX;
	volatile int8_t x359 = INT8_MAX;
	static uint32_t x360 = 495752058U;

    t88 = ((x357&x358)&(x359%x360));

    if (t88 != 52LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x361 = 29;
	int16_t x362 = INT16_MIN;
	uint32_t x363 = 90U;
	static int8_t x364 = INT8_MAX;
	static volatile uint32_t t89 = 0U;

    t89 = ((x361&x362)&(x363%x364));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x365 = -1;
	uint32_t x366 = 1633224680U;
	int64_t x367 = 16379266LL;
	int16_t x368 = 5233;

    t90 = ((x365&x366)&(x367%x368));

    if (t90 != 1096LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x369 = INT16_MIN;
	uint32_t x370 = 49U;
	int16_t x371 = INT16_MIN;
	volatile int8_t x372 = INT8_MIN;
	static volatile uint32_t t91 = 272887385U;

    t91 = ((x369&x370)&(x371%x372));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x374 = UINT8_MAX;
	uint16_t x375 = 3U;
	int8_t x376 = -3;
	static volatile int64_t t92 = -77731005LL;

    t92 = ((x373&x374)&(x375%x376));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x377 = INT32_MIN;
	int64_t x379 = 1715128591160977LL;
	int32_t x380 = -1;

    t93 = ((x377&x378)&(x379%x380));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x381 = INT16_MAX;
	int16_t x383 = -1;
	volatile int32_t t94 = 2085;

    t94 = ((x381&x382)&(x383%x384));

    if (t94 != 974) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x385 = -1;
	int64_t x386 = -1LL;
	uint16_t x387 = 2U;
	int16_t x388 = -1;
	volatile int64_t t95 = -179707047LL;

    t95 = ((x385&x386)&(x387%x388));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x389 = 7786346231398461LLU;
	static int64_t x390 = 207046LL;
	int32_t x391 = INT32_MIN;
	uint64_t t96 = 549920LLU;

    t96 = ((x389&x390)&(x391%x392));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x393 = UINT8_MAX;
	uint16_t x395 = 6343U;
	static uint32_t x396 = 124476990U;

    t97 = ((x393&x394)&(x395%x396));

    if (t97 != 199LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x397 = INT32_MAX;
	int16_t x398 = INT16_MAX;
	static int8_t x399 = INT8_MIN;
	uint32_t x400 = 15519U;
	static uint32_t t98 = 5681U;

    t98 = ((x397&x398)&(x399%x400));

    if (t98 != 6323U) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x402 = -1;
	int32_t x403 = INT32_MIN;
	static int16_t x404 = -1;
	volatile int32_t t99 = -25305636;

    t99 = ((x401&x402)&(x403%x404));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x405 = -20958127LL;
	uint32_t x406 = 803527626U;
	volatile uint16_t x407 = UINT16_MAX;
	volatile int64_t t100 = -8609715157409938LL;

    t100 = ((x405&x406)&(x407%x408));

    if (t100 != 4160LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x409 = -1LL;
	volatile int32_t x410 = -1;
	int8_t x411 = 1;
	uint16_t x412 = 195U;
	int64_t t101 = -12941106968LL;

    t101 = ((x409&x410)&(x411%x412));

    if (t101 != 1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x413 = 479215;
	uint64_t x415 = 640290345731028735LLU;
	int32_t x416 = 24;

    t102 = ((x413&x414)&(x415%x416));

    if (t102 != 15LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x417 = UINT32_MAX;
	static int64_t x418 = INT64_MIN;
	uint8_t x420 = 30U;

    t103 = ((x417&x418)&(x419%x420));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x421 = UINT16_MAX;
	int64_t x422 = INT64_MAX;
	int16_t x423 = INT16_MIN;
	volatile int64_t t104 = -1938LL;

    t104 = ((x421&x422)&(x423%x424));

    if (t104 != 32768LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x425 = -38;
	uint64_t x426 = 258LLU;
	static int64_t x427 = INT64_MAX;
	volatile uint64_t t105 = 517116013028161LLU;

    t105 = ((x425&x426)&(x427%x428));

    if (t105 != 258LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x429 = INT8_MAX;
	int8_t x430 = INT8_MIN;
	int8_t x432 = -1;

    t106 = ((x429&x430)&(x431%x432));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x433 = -1LL;
	int8_t x434 = INT8_MIN;
	uint8_t x435 = UINT8_MAX;
	volatile int64_t t107 = -952364268189LL;

    t107 = ((x433&x434)&(x435%x436));

    if (t107 != 128LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x437 = -1;
	static int16_t x438 = INT16_MIN;
	uint8_t x439 = UINT8_MAX;
	uint32_t x440 = 7595U;
	volatile uint32_t t108 = 360412U;

    t108 = ((x437&x438)&(x439%x440));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x441 = INT16_MIN;
	int32_t x442 = 625663514;
	uint32_t x443 = UINT32_MAX;
	uint32_t t109 = 108U;

    t109 = ((x441&x442)&(x443%x444));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x446 = -1LL;
	static volatile int8_t x447 = INT8_MIN;
	int16_t x448 = INT16_MIN;
	int64_t t110 = 1LL;

    t110 = ((x445&x446)&(x447%x448));

    if (t110 != -128LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x449 = UINT32_MAX;
	int8_t x450 = -41;
	volatile int8_t x451 = INT8_MIN;
	uint32_t x452 = 1439168U;
	volatile uint32_t t111 = 3444106U;

    t111 = ((x449&x450)&(x451%x452));

    if (t111 != 489856U) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x453 = INT16_MIN;
	volatile uint16_t x454 = 110U;
	static volatile int8_t x455 = INT8_MAX;
	int64_t t112 = 22210256216LL;

    t112 = ((x453&x454)&(x455%x456));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x457 = INT32_MIN;
	uint64_t x458 = UINT64_MAX;
	uint64_t t113 = 688908727794677886LLU;

    t113 = ((x457&x458)&(x459%x460));

    if (t113 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x461 = 12U;
	volatile int8_t x462 = -1;
	static int32_t x464 = -1;
	int32_t t114 = 6114;

    t114 = ((x461&x462)&(x463%x464));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x465 = -2;
	int64_t x466 = INT64_MIN;
	volatile uint64_t x467 = 123840415875485038LLU;
	static int8_t x468 = 35;
	uint64_t t115 = 3988LLU;

    t115 = ((x465&x466)&(x467%x468));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x469 = UINT64_MAX;
	uint8_t x470 = UINT8_MAX;
	volatile int8_t x471 = -1;
	static uint64_t x472 = UINT64_MAX;
	volatile uint64_t t116 = 3856LLU;

    t116 = ((x469&x470)&(x471%x472));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x473 = -1;
	int32_t x474 = -1;
	static int64_t x475 = -26353996109LL;
	uint16_t x476 = 64U;
	volatile int64_t t117 = -19352364703LL;

    t117 = ((x473&x474)&(x475%x476));

    if (t117 != -13LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x478 = 1512328236647LLU;
	uint32_t x479 = 34167213U;
	int8_t x480 = 2;
	static volatile uint64_t t118 = 33614LLU;

    t118 = ((x477&x478)&(x479%x480));

    if (t118 != 1LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x481 = UINT32_MAX;
	static int8_t x482 = INT8_MIN;
	int32_t x483 = 19015507;
	int8_t x484 = -11;
	uint32_t t119 = 18U;

    t119 = ((x481&x482)&(x483%x484));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x485 = 249LLU;
	static int8_t x486 = -1;
	volatile int8_t x487 = INT8_MIN;
	uint64_t t120 = 11388048LLU;

    t120 = ((x485&x486)&(x487%x488));

    if (t120 != 8LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x489 = -2;
	volatile int64_t x492 = INT64_MIN;
	int64_t t121 = -24271401437693483LL;

    t121 = ((x489&x490)&(x491%x492));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x493 = 125707030306LLU;
	int64_t x494 = -1LL;
	int64_t x495 = 2LL;
	static int32_t x496 = INT32_MIN;
	volatile uint64_t t122 = 17652679397LLU;

    t122 = ((x493&x494)&(x495%x496));

    if (t122 != 2LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x499 = UINT32_MAX;
	volatile uint8_t x500 = 60U;
	uint32_t t123 = 40767278U;

    t123 = ((x497&x498)&(x499%x500));

    if (t123 != 1U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x502 = 1738;
	static int16_t x503 = INT16_MIN;
	int8_t x504 = 6;
	volatile uint32_t t124 = 18141U;

    t124 = ((x501&x502)&(x503%x504));

    if (t124 != 1738U) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x505 = 4253245445560309LL;
	uint64_t x508 = 2751854343LLU;
	static volatile uint64_t t125 = 7515489LLU;

    t125 = ((x505&x506)&(x507%x508));

    if (t125 != 241LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x509 = INT32_MIN;
	int8_t x510 = INT8_MAX;
	int8_t x511 = 26;
	int16_t x512 = 2569;
	static int32_t t126 = 3981;

    t126 = ((x509&x510)&(x511%x512));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x514 = 157;
	int16_t x515 = -176;
	static uint8_t x516 = 1U;
	int32_t t127 = 31561;

    t127 = ((x513&x514)&(x515%x516));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x518 = UINT32_MAX;
	uint8_t x519 = UINT8_MAX;
	static int32_t x520 = INT32_MAX;
	volatile uint32_t t128 = 95912484U;

    t128 = ((x517&x518)&(x519%x520));

    if (t128 != 255U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x521 = -1;
	uint64_t x522 = 2201255200621532926LLU;

    t129 = ((x521&x522)&(x523%x524));

    if (t129 != 5886LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint64_t x526 = UINT64_MAX;
	static uint32_t x527 = UINT32_MAX;
	static uint64_t t130 = 353246827102422305LLU;

    t130 = ((x525&x526)&(x527%x528));

    if (t130 != 2LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x529 = INT8_MIN;
	int8_t x530 = -53;

    t131 = ((x529&x530)&(x531%x532));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x537 = UINT32_MAX;
	volatile int64_t x538 = -1LL;
	uint16_t x539 = 11257U;
	int64_t t132 = -35254LL;

    t132 = ((x537&x538)&(x539%x540));

    if (t132 != 11257LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x541 = 2U;
	static uint32_t x542 = UINT32_MAX;
	static volatile int8_t x543 = -2;
	uint32_t t133 = 1578U;

    t133 = ((x541&x542)&(x543%x544));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x545 = 12866;
	int16_t x546 = -311;
	int32_t x547 = -66;
	volatile int32_t t134 = -11070123;

    t134 = ((x545&x546)&(x547%x548));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x549 = 1062814313557140LL;
	volatile int64_t x550 = INT64_MAX;
	int64_t x551 = -580823756549125LL;
	volatile int64_t x552 = INT64_MIN;
	static volatile int64_t t135 = -405042865890026147LL;

    t135 = ((x549&x550)&(x551%x552));

    if (t135 != 499857623089296LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x553 = INT16_MAX;
	uint64_t x554 = UINT64_MAX;
	static uint64_t x555 = UINT64_MAX;
	uint16_t x556 = UINT16_MAX;
	static volatile uint64_t t136 = 12426832784593LLU;

    t136 = ((x553&x554)&(x555%x556));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x557 = INT32_MIN;
	int32_t x558 = -1;
	volatile int64_t x559 = INT64_MIN;
	static volatile int64_t t137 = -484760321271LL;

    t137 = ((x557&x558)&(x559%x560));

    if (t137 != -2147483648LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x561 = -15;
	int32_t x562 = -1;
	int64_t x563 = INT64_MAX;
	int8_t x564 = INT8_MIN;
	int64_t t138 = 0LL;

    t138 = ((x561&x562)&(x563%x564));

    if (t138 != 113LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x565 = INT32_MIN;
	int32_t x566 = INT32_MIN;
	int64_t x567 = -1LL;
	static uint8_t x568 = 122U;

    t139 = ((x565&x566)&(x567%x568));

    if (t139 != -2147483648LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x569 = INT32_MIN;
	uint32_t x570 = 362154518U;
	static int8_t x571 = -1;
	int8_t x572 = 40;
	volatile uint32_t t140 = 12225542U;

    t140 = ((x569&x570)&(x571%x572));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x573 = INT8_MIN;
	uint16_t x576 = 6883U;

    t141 = ((x573&x574)&(x575%x576));

    if (t141 != -32768) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x577 = -1;
	static uint8_t x578 = UINT8_MAX;
	static volatile int32_t t142 = 26;

    t142 = ((x577&x578)&(x579%x580));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x581 = 119U;
	int16_t x582 = 0;
	uint8_t x583 = 0U;
	static int16_t x584 = 2187;
	static int32_t t143 = 57613;

    t143 = ((x581&x582)&(x583%x584));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x585 = UINT8_MAX;
	volatile int32_t x586 = -3;
	int32_t t144 = 2;

    t144 = ((x585&x586)&(x587%x588));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x589 = INT64_MIN;
	int8_t x591 = -8;
	int64_t t145 = 130023232079LL;

    t145 = ((x589&x590)&(x591%x592));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x593 = 22U;
	uint8_t x594 = 3U;
	int16_t x595 = INT16_MAX;
	volatile int64_t x596 = INT64_MAX;
	volatile int64_t t146 = 53LL;

    t146 = ((x593&x594)&(x595%x596));

    if (t146 != 2LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x597 = -14829;
	uint64_t x598 = UINT64_MAX;
	static int8_t x599 = 6;
	static uint64_t t147 = 1221911125899LLU;

    t147 = ((x597&x598)&(x599%x600));

    if (t147 != 2LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x601 = INT32_MIN;
	uint64_t x602 = UINT64_MAX;
	int32_t x604 = -466286185;
	uint64_t t148 = 8LLU;

    t148 = ((x601&x602)&(x603%x604));

    if (t148 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x605 = INT8_MIN;
	int64_t x606 = INT64_MAX;
	volatile uint32_t x607 = 2068531U;
	int64_t x608 = -1LL;
	int64_t t149 = 31218887783447111LL;

    t149 = ((x605&x606)&(x607%x608));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x609 = INT64_MAX;
	uint32_t x610 = 1624U;
	int8_t x612 = -1;
	uint64_t t150 = 188312942055LLU;

    t150 = ((x609&x610)&(x611%x612));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x617 = INT16_MIN;
	int32_t x619 = INT32_MAX;
	static uint64_t x620 = UINT64_MAX;
	uint64_t t151 = 71033837307120581LLU;

    t151 = ((x617&x618)&(x619%x620));

    if (t151 != 2147450880LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x622 = -5942122;
	int32_t x623 = INT32_MIN;
	volatile int16_t x624 = -444;
	int32_t t152 = 958;

    t152 = ((x621&x622)&(x623%x624));

    if (t152 != 16) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x625 = -1;
	uint32_t x626 = 213688403U;
	volatile int8_t x627 = INT8_MIN;
	int8_t x628 = -1;
	uint32_t t153 = 1042424162U;

    t153 = ((x625&x626)&(x627%x628));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x629 = INT8_MIN;
	int8_t x631 = 7;
	int64_t x632 = INT64_MIN;
	uint64_t t154 = 90583LLU;

    t154 = ((x629&x630)&(x631%x632));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x633 = INT16_MAX;
	static volatile int16_t x634 = INT16_MIN;
	uint8_t x635 = 8U;
	int32_t x636 = INT32_MIN;
	volatile int32_t t155 = -1;

    t155 = ((x633&x634)&(x635%x636));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x637 = UINT16_MAX;
	int32_t x638 = -2259450;
	volatile uint32_t x639 = 167992845U;
	static volatile uint32_t t156 = 2186425U;

    t156 = ((x637&x638)&(x639%x640));

    if (t156 != 1540U) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x641 = INT64_MIN;
	static uint32_t x642 = UINT32_MAX;
	volatile uint32_t x643 = 12U;
	uint32_t x644 = UINT32_MAX;

    t157 = ((x641&x642)&(x643%x644));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x645 = 2U;
	uint8_t x646 = UINT8_MAX;
	static int32_t x648 = INT32_MIN;
	volatile int32_t t158 = 14547;

    t158 = ((x645&x646)&(x647%x648));

    if (t158 != 2) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x649 = INT64_MAX;
	uint32_t x650 = UINT32_MAX;
	int8_t x651 = INT8_MIN;
	uint16_t x652 = 2U;
	volatile int64_t t159 = 1547921631658LL;

    t159 = ((x649&x650)&(x651%x652));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x657 = 8882U;
	uint32_t x658 = 0U;
	static uint8_t x659 = 0U;
	int32_t x660 = INT32_MAX;

    t160 = ((x657&x658)&(x659%x660));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x661 = -36420154;
	uint32_t x662 = UINT32_MAX;
	int16_t x663 = -1;
	int64_t x664 = INT64_MIN;
	int64_t t161 = -766270997420000497LL;

    t161 = ((x661&x662)&(x663%x664));

    if (t161 != 4258547142LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x666 = INT64_MAX;
	static volatile int16_t x667 = INT16_MAX;
	volatile int64_t x668 = -1LL;
	static int64_t t162 = -1232821439618280LL;

    t162 = ((x665&x666)&(x667%x668));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x669 = 109933530;
	uint32_t x672 = UINT32_MAX;

    t163 = ((x669&x670)&(x671%x672));

    if (t163 != 109933250U) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x674 = 27;
	int64_t x676 = 950LL;
	volatile int64_t t164 = -334235057LL;

    t164 = ((x673&x674)&(x675%x676));

    if (t164 != 10LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x677 = INT8_MIN;
	static volatile int32_t x678 = -1;
	int64_t x679 = -1LL;
	int16_t x680 = INT16_MIN;
	volatile int64_t t165 = 32319331105LL;

    t165 = ((x677&x678)&(x679%x680));

    if (t165 != -128LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x681 = INT64_MIN;
	int16_t x682 = -5;
	int16_t x683 = -333;
	int16_t x684 = -6;
	static int64_t t166 = INT64_MIN;

    t166 = ((x681&x682)&(x683%x684));

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x685 = INT32_MIN;
	int16_t x687 = INT16_MIN;
	static uint16_t x688 = UINT16_MAX;
	volatile int32_t t167 = INT32_MIN;

    t167 = ((x685&x686)&(x687%x688));

    if (t167 != INT32_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x689 = INT16_MIN;
	uint64_t x690 = 616651909LLU;
	static uint64_t x692 = UINT64_MAX;
	volatile uint64_t t168 = 6864305600LLU;

    t168 = ((x689&x690)&(x691%x692));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x693 = UINT32_MAX;
	static int32_t x695 = 721;
	static int16_t x696 = -9331;
	volatile uint32_t t169 = 19033196U;

    t169 = ((x693&x694)&(x695%x696));

    if (t169 != 17U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x697 = INT64_MAX;
	static int16_t x698 = INT16_MIN;
	int16_t x700 = INT16_MIN;
	static volatile int64_t t170 = -22933180665LL;

    t170 = ((x697&x698)&(x699%x700));

    if (t170 != 236945408LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x701 = -1;
	int64_t x703 = INT64_MIN;
	uint32_t x704 = 478430U;
	int64_t t171 = 8935344019LL;

    t171 = ((x701&x702)&(x703%x704));

    if (t171 != -131072LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x709 = -1;
	uint32_t x710 = 111U;
	int64_t x712 = -1LL;
	volatile uint64_t t172 = 900LLU;

    t172 = ((x709&x710)&(x711%x712));

    if (t172 != 69LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x716 = INT8_MIN;
	volatile uint32_t t173 = 5264821U;

    t173 = ((x713&x714)&(x715%x716));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x717 = 107432827037LL;
	static volatile int8_t x718 = 31;
	int8_t x719 = 51;
	volatile int64_t t174 = 403160201921463LL;

    t174 = ((x717&x718)&(x719%x720));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x721 = UINT8_MAX;
	volatile int32_t x722 = 23982152;
	static uint32_t x723 = 1635U;
	uint32_t x724 = 788763U;
	volatile uint32_t t175 = 367270359U;

    t175 = ((x721&x722)&(x723%x724));

    if (t175 != 64U) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x725 = UINT8_MAX;
	static int32_t x726 = -1;
	uint64_t x728 = 58914824081643LLU;
	volatile uint64_t t176 = 214731768327LLU;

    t176 = ((x725&x726)&(x727%x728));

    if (t176 != 199LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x729 = INT8_MAX;
	int32_t x730 = -1;
	static int8_t x732 = INT8_MAX;
	static volatile int32_t t177 = 616;

    t177 = ((x729&x730)&(x731%x732));

    if (t177 != 127) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x733 = INT8_MAX;
	static int8_t x734 = INT8_MIN;
	uint8_t x735 = UINT8_MAX;
	volatile int64_t x736 = INT64_MIN;
	int64_t t178 = -3367032003489LL;

    t178 = ((x733&x734)&(x735%x736));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x737 = 92U;
	volatile uint64_t x738 = 12164432790440LLU;
	static int8_t x739 = -1;
	static uint64_t t179 = 50LLU;

    t179 = ((x737&x738)&(x739%x740));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x742 = 103933842286LLU;
	volatile int64_t x743 = INT64_MAX;
	volatile uint64_t x744 = 1LLU;

    t180 = ((x741&x742)&(x743%x744));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x745 = 1027;
	static int32_t x746 = INT32_MAX;
	static int32_t x747 = -1;
	int8_t x748 = INT8_MIN;
	volatile int32_t t181 = -1121;

    t181 = ((x745&x746)&(x747%x748));

    if (t181 != 1027) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x749 = UINT32_MAX;
	int16_t x751 = INT16_MAX;
	int64_t x752 = 82LL;
	int64_t t182 = 8796169256000240LL;

    t182 = ((x749&x750)&(x751%x752));

    if (t182 != 33LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x753 = -1;
	volatile int32_t x754 = 172743;
	static uint16_t x756 = 7966U;
	int32_t t183 = 1;

    t183 = ((x753&x754)&(x755%x756));

    if (t183 != 172743) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x758 = -1;
	uint64_t x759 = UINT64_MAX;
	uint32_t x760 = 138605467U;
	volatile uint64_t t184 = 10509971945491781LLU;

    t184 = ((x757&x758)&(x759%x760));

    if (t184 != 16812608LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x762 = 1U;
	int8_t x763 = 26;
	int64_t x764 = INT64_MIN;
	static uint64_t t185 = 44085LLU;

    t185 = ((x761&x762)&(x763%x764));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x765 = INT8_MIN;
	int8_t x766 = -16;
	static uint32_t x767 = 41U;
	static uint8_t x768 = 4U;
	uint32_t t186 = 617703U;

    t186 = ((x765&x766)&(x767%x768));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x769 = -1;
	int16_t x770 = INT16_MIN;
	int32_t x771 = INT32_MIN;
	volatile int64_t t187 = -1LL;

    t187 = ((x769&x770)&(x771%x772));

    if (t187 != -2147483648LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x773 = -1LL;
	int8_t x774 = 0;
	int16_t x775 = -1;

    t188 = ((x773&x774)&(x775%x776));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x777 = -1;
	volatile int64_t x778 = 198323LL;
	volatile uint8_t x779 = UINT8_MAX;
	volatile int8_t x780 = -1;

    t189 = ((x777&x778)&(x779%x780));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x781 = INT64_MIN;
	uint64_t x782 = 7981743LLU;
	int8_t x783 = INT8_MAX;
	volatile uint64_t x784 = 2548LLU;
	volatile uint64_t t190 = 787775827110373LLU;

    t190 = ((x781&x782)&(x783%x784));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x785 = 10U;
	uint32_t x786 = UINT32_MAX;
	static uint64_t x788 = 8922569392590460374LLU;
	static uint64_t t191 = 39413378578641LLU;

    t191 = ((x785&x786)&(x787%x788));

    if (t191 != 2LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x789 = INT64_MIN;
	int64_t x790 = -1LL;
	static volatile uint8_t x791 = UINT8_MAX;
	volatile int64_t t192 = -106LL;

    t192 = ((x789&x790)&(x791%x792));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x793 = -1;
	uint64_t x794 = UINT64_MAX;
	uint32_t x795 = UINT32_MAX;
	volatile uint64_t x796 = UINT64_MAX;
	uint64_t t193 = 220341291631LLU;

    t193 = ((x793&x794)&(x795%x796));

    if (t193 != 4294967295LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x797 = INT64_MIN;
	static volatile int64_t x798 = -141414811171860LL;
	volatile int8_t x799 = -1;
	static volatile uint16_t x800 = 40U;

    t194 = ((x797&x798)&(x799%x800));

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x801 = 6933744U;
	volatile int8_t x802 = INT8_MIN;
	int64_t x803 = -1LL;
	int64_t x804 = -1LL;
	volatile int64_t t195 = -97LL;

    t195 = ((x801&x802)&(x803%x804));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x805 = -775263057;
	int32_t x807 = -154948541;
	uint64_t x808 = 482936379133LLU;
	uint64_t t196 = 809850373LLU;

    t196 = ((x805&x806)&(x807%x808));

    if (t196 != 18257815555LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x809 = 0U;
	volatile int32_t x810 = INT32_MIN;
	volatile int8_t x811 = -1;
	uint32_t x812 = 4003552U;
	uint32_t t197 = 0U;

    t197 = ((x809&x810)&(x811%x812));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int64_t x813 = INT64_MAX;
	volatile int64_t t198 = -47256616200897228LL;

    t198 = ((x813&x814)&(x815%x816));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x817 = INT64_MAX;
	uint64_t x819 = 2127400898000LLU;
	uint16_t x820 = UINT16_MAX;
	uint64_t t199 = 971LLU;

    t199 = ((x817&x818)&(x819%x820));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

