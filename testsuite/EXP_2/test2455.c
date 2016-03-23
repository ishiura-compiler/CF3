
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

int16_t x4 = INT16_MIN;
volatile int64_t x5 = INT64_MIN;
volatile int32_t t1 = -23;
int32_t t3 = 2006;
static int8_t x17 = INT8_MAX;
static volatile int64_t x20 = INT64_MAX;
volatile uint32_t x22 = UINT32_MAX;
static int8_t x28 = INT8_MIN;
static uint64_t x36 = 1292816LLU;
volatile int32_t x38 = 1000;
volatile int32_t t9 = 12079;
int16_t x43 = INT16_MIN;
volatile int64_t t10 = 26810LL;
int64_t x45 = INT64_MIN;
volatile uint64_t x56 = 951060913431130LLU;
uint64_t t13 = 1316LLU;
static int32_t t16 = 8042603;
uint16_t x78 = UINT16_MAX;
uint16_t x81 = 29952U;
int16_t x83 = INT16_MIN;
uint8_t x86 = UINT8_MAX;
static volatile int8_t x95 = -22;
static int32_t x98 = INT32_MAX;
volatile int16_t x99 = INT16_MAX;
static int8_t x106 = INT8_MIN;
uint32_t x109 = 0U;
int64_t x112 = INT64_MIN;
uint16_t x116 = UINT16_MAX;
uint8_t x124 = 19U;
int32_t t29 = -397;
static int8_t x127 = INT8_MIN;
int64_t x136 = INT64_MIN;
uint32_t x144 = UINT32_MAX;
uint8_t x147 = UINT8_MAX;
int8_t x148 = 1;
uint32_t x151 = UINT32_MAX;
static volatile uint32_t t36 = 218U;
static uint32_t x153 = 3U;
int64_t x158 = INT64_MIN;
int64_t x167 = INT64_MIN;
int64_t x169 = INT64_MIN;
volatile uint32_t x172 = UINT32_MAX;
int16_t x173 = -6966;
uint64_t x174 = 372588804553924805LLU;
static int32_t t42 = 0;
volatile uint8_t x179 = 21U;
int16_t x188 = INT16_MIN;
uint8_t x190 = 120U;
volatile uint64_t t46 = 279793971656LLU;
static uint8_t x195 = 1U;
int32_t t47 = -12196071;
int16_t x197 = INT16_MAX;
uint16_t x199 = UINT16_MAX;
volatile uint32_t t48 = 118U;
int8_t x208 = 27;
int32_t x212 = INT32_MIN;
volatile int8_t x213 = INT8_MAX;
uint32_t x215 = UINT32_MAX;
volatile uint64_t t52 = 219LLU;
volatile int32_t t54 = 21;
static volatile uint64_t x226 = UINT64_MAX;
volatile int64_t x231 = INT64_MAX;
uint8_t x236 = 2U;
volatile int32_t t57 = -31857469;
int32_t x245 = INT32_MAX;
volatile int8_t x248 = INT8_MIN;
int16_t x249 = -1;
int64_t x262 = 2541LL;
int16_t x269 = INT16_MIN;
uint64_t t66 = 6297197LLU;
int8_t x273 = INT8_MIN;
int64_t x274 = -244621839847420126LL;
uint16_t x284 = 1422U;
static volatile int16_t x291 = -1;
uint8_t x318 = 15U;
uint16_t x321 = 1U;
volatile int16_t x323 = -1;
static volatile int32_t t77 = -499941855;
uint8_t x325 = 3U;
volatile uint32_t x331 = 3759360U;
volatile int32_t t79 = -125;
uint64_t x334 = 2LLU;
int32_t x339 = INT32_MAX;
uint8_t x345 = UINT8_MAX;
volatile uint32_t x349 = UINT32_MAX;
volatile int8_t x352 = INT8_MIN;
uint8_t x353 = UINT8_MAX;
int64_t x358 = 76675676266896LL;
uint64_t x360 = 17LLU;
uint8_t x361 = 23U;
volatile uint64_t x364 = UINT64_MAX;
uint64_t x367 = 14LLU;
uint32_t x369 = 3U;
static volatile int16_t x376 = 6330;
int32_t x377 = INT32_MIN;
int16_t x379 = -197;
int16_t x381 = -1;
static int32_t t92 = 22387725;
static uint64_t x389 = 123800LLU;
uint64_t x390 = UINT64_MAX;
int8_t x392 = -1;
static uint32_t x394 = 80U;
int8_t x397 = INT8_MIN;
uint64_t x401 = UINT64_MAX;
static int16_t x408 = INT16_MAX;
int32_t t98 = 0;
volatile int32_t x410 = INT32_MIN;
int64_t x424 = -1LL;
volatile int32_t x425 = 105;
uint32_t t103 = 0U;
static volatile uint8_t x437 = 0U;
int8_t x440 = INT8_MIN;
int64_t x442 = INT64_MAX;
int16_t x449 = INT16_MIN;
uint32_t x451 = UINT32_MAX;
int8_t x452 = 1;
volatile int32_t t109 = 113355587;
int32_t x453 = INT32_MIN;
uint64_t x458 = 59484362735LLU;
int64_t x460 = -1LL;
uint16_t x466 = 6U;
uint16_t x471 = 169U;
uint32_t x475 = 13737170U;
int32_t x479 = INT32_MIN;
int32_t x491 = -1;
int64_t t120 = 1545637LL;
int64_t x497 = INT64_MIN;
volatile int16_t x500 = 9080;
int8_t x512 = INT8_MIN;
volatile uint16_t x513 = 3597U;
int16_t x516 = INT16_MAX;
uint16_t x522 = UINT16_MAX;
uint64_t x526 = UINT64_MAX;
volatile int32_t x531 = INT32_MAX;
uint16_t x533 = 1U;
volatile uint64_t x534 = 4770LLU;
static volatile uint32_t x539 = 43023U;
static int32_t x544 = -1;
volatile uint16_t x553 = 220U;
int16_t x556 = -1;
volatile int32_t t135 = -4;
uint8_t x561 = UINT8_MAX;
int16_t x563 = -1;
int32_t x564 = 1;
static volatile int32_t t136 = -453;
int32_t x566 = INT32_MIN;
int8_t x570 = 14;
static int64_t x572 = -3797546150541LL;
int32_t x575 = INT32_MAX;
static volatile uint64_t x578 = 7254921977195421245LLU;
uint8_t x582 = UINT8_MAX;
volatile int32_t x587 = 2410410;
static int8_t x588 = INT8_MIN;
int32_t t142 = -106;
volatile int32_t t143 = 24;
int8_t x598 = -1;
volatile int64_t t145 = -42509466LL;
uint32_t t148 = 1403915U;
int8_t x615 = -1;
static int64_t t150 = -1657LL;
int16_t x621 = 299;
uint16_t x631 = 1562U;
uint8_t x632 = 54U;
static int32_t x636 = -1;
uint64_t x641 = UINT64_MAX;
uint8_t x642 = UINT8_MAX;
int32_t x652 = INT32_MIN;
int32_t x657 = INT32_MAX;
int32_t t159 = 23;
int8_t x661 = INT8_MIN;
int64_t x666 = -1LL;
int16_t x677 = INT16_MIN;
volatile uint32_t x686 = UINT32_MAX;
uint16_t x693 = 1295U;
uint8_t x695 = UINT8_MAX;
volatile uint8_t x697 = 120U;
volatile int16_t x702 = -1;
uint8_t x710 = 2U;
int16_t x711 = -7107;
int64_t x715 = INT64_MIN;
static int8_t x717 = 42;
int16_t x723 = INT16_MIN;
static volatile uint64_t x729 = 7043LLU;
int8_t x733 = 16;
int8_t x734 = INT8_MIN;
volatile int32_t t178 = 831;
static int32_t x755 = INT32_MAX;
static volatile uint64_t t184 = 73LLU;
volatile int32_t t185 = 63;
volatile int32_t x765 = -160485;
volatile int32_t t186 = -6;
int16_t x769 = INT16_MIN;
static int16_t x771 = INT16_MAX;
int8_t x778 = INT8_MAX;
volatile int16_t x779 = INT16_MAX;
static int32_t t189 = -333;
static int8_t x783 = INT8_MAX;
static volatile int32_t x786 = INT32_MAX;
int32_t t191 = -325948677;
uint64_t x790 = UINT64_MAX;
int64_t x795 = INT64_MIN;
static volatile uint64_t x799 = 35991045093085009LLU;
volatile uint32_t t194 = 951931U;
int8_t x805 = INT8_MIN;
int16_t x809 = INT16_MAX;
int64_t x810 = -1LL;
volatile int8_t x813 = INT8_MIN;
volatile int32_t t198 = -535;
static int32_t x817 = -12875;
int64_t x819 = -1LL;


void f0(void) {
    	uint64_t x1 = 2966LLU;
	uint8_t x2 = 34U;
	static volatile int16_t x3 = INT16_MIN;
	int32_t t0 = -33246031;

    t0 = ((x1==(x2|x3))%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x6 = -1LL;
	volatile int8_t x7 = INT8_MIN;
	uint8_t x8 = 90U;

    t1 = ((x5==(x6|x7))%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = -1LL;
	int64_t x10 = INT64_MIN;
	int32_t x11 = -1;
	int16_t x12 = -1;
	int32_t t2 = -31725497;

    t2 = ((x9==(x10|x11))%x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = -1;
	int16_t x14 = INT16_MIN;
	volatile int8_t x15 = INT8_MIN;
	int8_t x16 = 1;

    t3 = ((x13==(x14|x15))%x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x18 = 89U;
	static int64_t x19 = -46631LL;
	int64_t t4 = 38LL;

    t4 = ((x17==(x18|x19))%x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = INT16_MAX;
	int32_t x23 = -786367;
	int8_t x24 = -1;
	static volatile int32_t t5 = 370261;

    t5 = ((x21==(x22|x23))%x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = INT64_MAX;
	int64_t x26 = INT64_MIN;
	uint32_t x27 = UINT32_MAX;
	int32_t t6 = 5489912;

    t6 = ((x25==(x26|x27))%x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 296U;
	int32_t x30 = INT32_MIN;
	int16_t x31 = INT16_MIN;
	int8_t x32 = -1;
	volatile int32_t t7 = 171035028;

    t7 = ((x29==(x30|x31))%x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = INT16_MIN;
	volatile uint64_t x34 = 872847LLU;
	int64_t x35 = -1762787LL;
	static volatile uint64_t t8 = 821LLU;

    t8 = ((x33==(x34|x35))%x36);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -493;
	uint16_t x39 = 4187U;
	int32_t x40 = 22;

    t9 = ((x37==(x38|x39))%x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = INT64_MAX;
	volatile int8_t x42 = INT8_MAX;
	int64_t x44 = -413569LL;

    t10 = ((x41==(x42|x43))%x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x46 = INT32_MIN;
	volatile uint16_t x47 = 9U;
	int32_t x48 = INT32_MIN;
	static volatile int32_t t11 = -922273;

    t11 = ((x45==(x46|x47))%x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = -1;
	int8_t x50 = INT8_MAX;
	int16_t x51 = INT16_MIN;
	static uint64_t x52 = 269LLU;
	static volatile uint64_t t12 = 11LLU;

    t12 = ((x49==(x50|x51))%x52);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	uint32_t x54 = 62810U;
	static int16_t x55 = -1;

    t13 = ((x53==(x54|x55))%x56);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = 6;
	static uint8_t x58 = 2U;
	int64_t x59 = INT64_MAX;
	int16_t x60 = INT16_MAX;
	volatile int32_t t14 = -3529;

    t14 = ((x57==(x58|x59))%x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = INT64_MIN;
	volatile uint64_t x66 = 233LLU;
	int8_t x67 = INT8_MAX;
	uint32_t x68 = UINT32_MAX;
	volatile uint32_t t15 = 0U;

    t15 = ((x65==(x66|x67))%x68);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x69 = INT64_MIN;
	int32_t x70 = -67837936;
	static uint16_t x71 = 94U;
	uint16_t x72 = UINT16_MAX;

    t16 = ((x69==(x70|x71))%x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = 74U;
	static int64_t x74 = 102708592359214624LL;
	static uint64_t x75 = 419923850878LLU;
	int8_t x76 = -1;
	volatile int32_t t17 = 3;

    t17 = ((x73==(x74|x75))%x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x77 = 9120U;
	uint16_t x79 = UINT16_MAX;
	uint32_t x80 = 277U;
	volatile uint32_t t18 = 6886U;

    t18 = ((x77==(x78|x79))%x80);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x82 = -8455LL;
	int32_t x84 = INT32_MIN;
	int32_t t19 = 2615731;

    t19 = ((x81==(x82|x83))%x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = INT8_MIN;
	uint32_t x87 = 90U;
	static uint8_t x88 = 25U;
	int32_t t20 = 7;

    t20 = ((x85==(x86|x87))%x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MIN;
	uint32_t x90 = 0U;
	int16_t x91 = INT16_MAX;
	static volatile int16_t x92 = 2;
	int32_t t21 = -180;

    t21 = ((x89==(x90|x91))%x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x93 = 950928406U;
	int32_t x94 = -2007;
	uint8_t x96 = UINT8_MAX;
	static int32_t t22 = 55663;

    t22 = ((x93==(x94|x95))%x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = INT64_MIN;
	int8_t x100 = -1;
	volatile int32_t t23 = 792;

    t23 = ((x97==(x98|x99))%x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = -12;
	volatile uint16_t x102 = 115U;
	int16_t x103 = INT16_MIN;
	volatile int16_t x104 = INT16_MIN;
	int32_t t24 = 157163;

    t24 = ((x101==(x102|x103))%x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x105 = 124U;
	int16_t x107 = INT16_MIN;
	static int16_t x108 = INT16_MIN;
	volatile int32_t t25 = 6040;

    t25 = ((x105==(x106|x107))%x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x110 = INT16_MIN;
	int32_t x111 = 0;
	volatile int64_t t26 = 14216472048LL;

    t26 = ((x109==(x110|x111))%x112);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x113 = INT64_MIN;
	static int32_t x114 = -1753939;
	int16_t x115 = INT16_MIN;
	int32_t t27 = 5698;

    t27 = ((x113==(x114|x115))%x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = -86756195;
	static int64_t x118 = 7154460945281491LL;
	int16_t x119 = INT16_MIN;
	static int16_t x120 = INT16_MAX;
	volatile int32_t t28 = 2;

    t28 = ((x117==(x118|x119))%x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = INT8_MIN;
	volatile int32_t x122 = INT32_MIN;
	static volatile int8_t x123 = 3;

    t29 = ((x121==(x122|x123))%x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = -27;
	uint16_t x126 = UINT16_MAX;
	volatile uint64_t x128 = UINT64_MAX;
	uint64_t t30 = 226LLU;

    t30 = ((x125==(x126|x127))%x128);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x129 = 3U;
	volatile int8_t x130 = -3;
	volatile int32_t x131 = INT32_MAX;
	volatile int16_t x132 = INT16_MIN;
	int32_t t31 = 17413;

    t31 = ((x129==(x130|x131))%x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = -12;
	volatile int32_t x134 = INT32_MIN;
	int16_t x135 = -1;
	int64_t t32 = 78LL;

    t32 = ((x133==(x134|x135))%x136);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = -1;
	static int8_t x138 = INT8_MIN;
	static uint16_t x139 = 12U;
	uint64_t x140 = 1989365LLU;
	static uint64_t t33 = 310370199989201LLU;

    t33 = ((x137==(x138|x139))%x140);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x141 = 1137073254048895231LL;
	uint64_t x142 = 3885LLU;
	volatile uint8_t x143 = 100U;
	static uint32_t t34 = 771031295U;

    t34 = ((x141==(x142|x143))%x144);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x145 = 0;
	uint64_t x146 = 13323960797LLU;
	volatile int32_t t35 = 1;

    t35 = ((x145==(x146|x147))%x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = INT64_MIN;
	int64_t x150 = -1LL;
	volatile uint32_t x152 = 16U;

    t36 = ((x149==(x150|x151))%x152);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x154 = INT8_MIN;
	volatile uint8_t x155 = 0U;
	static volatile uint16_t x156 = 2U;
	volatile int32_t t37 = 108810365;

    t37 = ((x153==(x154|x155))%x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = INT8_MIN;
	int64_t x159 = INT64_MAX;
	int64_t x160 = -717222644LL;
	static volatile int64_t t38 = 1LL;

    t38 = ((x157==(x158|x159))%x160);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x161 = 1603717LLU;
	uint8_t x162 = 3U;
	volatile int32_t x163 = -124;
	static int16_t x164 = 76;
	volatile int32_t t39 = -386982088;

    t39 = ((x161==(x162|x163))%x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MIN;
	int8_t x168 = -31;
	static volatile int32_t t40 = 13648480;

    t40 = ((x165==(x166|x167))%x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x170 = 90674354U;
	int64_t x171 = -1LL;
	volatile uint32_t t41 = 152413218U;

    t41 = ((x169==(x170|x171))%x172);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x175 = -1;
	static volatile int16_t x176 = INT16_MIN;

    t42 = ((x173==(x174|x175))%x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint64_t x177 = 3192LLU;
	uint32_t x178 = 1965364U;
	static uint16_t x180 = UINT16_MAX;
	static volatile int32_t t43 = -39063;

    t43 = ((x177==(x178|x179))%x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x181 = -6;
	static int64_t x182 = INT64_MIN;
	volatile int16_t x183 = 14388;
	int16_t x184 = -1;
	static volatile int32_t t44 = 416;

    t44 = ((x181==(x182|x183))%x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = INT16_MIN;
	int16_t x186 = 7527;
	uint16_t x187 = 2U;
	volatile int32_t t45 = 149914;

    t45 = ((x185==(x186|x187))%x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = 51;
	int32_t x191 = 16550296;
	uint64_t x192 = UINT64_MAX;

    t46 = ((x189==(x190|x191))%x192);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x193 = -1LL;
	uint32_t x194 = 7112U;
	volatile int32_t x196 = INT32_MIN;

    t47 = ((x193==(x194|x195))%x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x198 = 15U;
	uint32_t x200 = 6016873U;

    t48 = ((x197==(x198|x199))%x200);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x201 = INT64_MIN;
	int16_t x202 = -3;
	static int64_t x203 = 2LL;
	volatile uint32_t x204 = UINT32_MAX;
	uint32_t t49 = 64984280U;

    t49 = ((x201==(x202|x203))%x204);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x205 = UINT32_MAX;
	volatile uint32_t x206 = 35560889U;
	uint32_t x207 = UINT32_MAX;
	int32_t t50 = 6479107;

    t50 = ((x205==(x206|x207))%x208);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x209 = 195;
	static int16_t x210 = INT16_MAX;
	int64_t x211 = -1LL;
	static int32_t t51 = 2043492;

    t51 = ((x209==(x210|x211))%x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x214 = -11;
	uint64_t x216 = 136663867127937LLU;

    t52 = ((x213==(x214|x215))%x216);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x217 = 29LLU;
	int64_t x218 = INT64_MIN;
	uint32_t x219 = 60U;
	int16_t x220 = INT16_MIN;
	volatile int32_t t53 = -48;

    t53 = ((x217==(x218|x219))%x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x221 = 1;
	static uint8_t x222 = UINT8_MAX;
	static int16_t x223 = -2937;
	uint16_t x224 = UINT16_MAX;

    t54 = ((x221==(x222|x223))%x224);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x225 = UINT8_MAX;
	uint64_t x227 = UINT64_MAX;
	int8_t x228 = 4;
	int32_t t55 = 628017891;

    t55 = ((x225==(x226|x227))%x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x229 = UINT16_MAX;
	volatile int64_t x230 = INT64_MAX;
	int8_t x232 = 1;
	int32_t t56 = -710;

    t56 = ((x229==(x230|x231))%x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x233 = -111488;
	int8_t x234 = -1;
	int32_t x235 = INT32_MAX;

    t57 = ((x233==(x234|x235))%x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x237 = 22U;
	int8_t x238 = INT8_MAX;
	int16_t x239 = -1;
	volatile int64_t x240 = INT64_MAX;
	int64_t t58 = -95953401564473LL;

    t58 = ((x237==(x238|x239))%x240);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x241 = INT16_MAX;
	volatile int64_t x242 = INT64_MIN;
	uint8_t x243 = UINT8_MAX;
	int32_t x244 = 607582426;
	volatile int32_t t59 = 2838550;

    t59 = ((x241==(x242|x243))%x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x246 = -7;
	static uint8_t x247 = 5U;
	int32_t t60 = 63614;

    t60 = ((x245==(x246|x247))%x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x250 = INT16_MAX;
	uint32_t x251 = UINT32_MAX;
	uint32_t x252 = 691U;
	uint32_t t61 = 156373U;

    t61 = ((x249==(x250|x251))%x252);

    if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x253 = 4060LLU;
	int8_t x254 = 1;
	int64_t x255 = -3539LL;
	static uint32_t x256 = UINT32_MAX;
	uint32_t t62 = 0U;

    t62 = ((x253==(x254|x255))%x256);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x257 = 182U;
	int32_t x258 = INT32_MIN;
	int64_t x259 = -1LL;
	volatile int8_t x260 = -40;
	int32_t t63 = 78;

    t63 = ((x257==(x258|x259))%x260);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x261 = INT64_MAX;
	int8_t x263 = INT8_MIN;
	int8_t x264 = -3;
	volatile int32_t t64 = 3;

    t64 = ((x261==(x262|x263))%x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x265 = INT16_MIN;
	volatile uint64_t x266 = 5789363607613899LLU;
	int8_t x267 = -53;
	int8_t x268 = -1;
	volatile int32_t t65 = -2014865;

    t65 = ((x265==(x266|x267))%x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x270 = UINT16_MAX;
	int32_t x271 = -1;
	uint64_t x272 = UINT64_MAX;

    t66 = ((x269==(x270|x271))%x272);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x275 = INT16_MAX;
	volatile int64_t x276 = INT64_MIN;
	int64_t t67 = -1860LL;

    t67 = ((x273==(x274|x275))%x276);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x281 = UINT16_MAX;
	static uint64_t x282 = UINT64_MAX;
	int32_t x283 = INT32_MAX;
	volatile int32_t t68 = -110887489;

    t68 = ((x281==(x282|x283))%x284);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x285 = 62085U;
	int64_t x286 = 227427381LL;
	static uint32_t x287 = 1U;
	int64_t x288 = INT64_MIN;
	int64_t t69 = -148825697599664LL;

    t69 = ((x285==(x286|x287))%x288);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x289 = INT16_MAX;
	int16_t x290 = 3171;
	int64_t x292 = INT64_MAX;
	int64_t t70 = 64550169107229LL;

    t70 = ((x289==(x290|x291))%x292);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x293 = INT64_MIN;
	static int8_t x294 = INT8_MIN;
	int64_t x295 = -1LL;
	static int32_t x296 = 23655759;
	static int32_t t71 = 486899;

    t71 = ((x293==(x294|x295))%x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x297 = INT64_MIN;
	int16_t x298 = INT16_MIN;
	uint64_t x299 = 160317232LLU;
	int64_t x300 = 2647721482029207276LL;
	static int64_t t72 = 66430648LL;

    t72 = ((x297==(x298|x299))%x300);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x305 = -1LL;
	int8_t x306 = -20;
	volatile uint8_t x307 = 4U;
	int32_t x308 = INT32_MIN;
	static volatile int32_t t73 = -12017371;

    t73 = ((x305==(x306|x307))%x308);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x309 = UINT32_MAX;
	int16_t x310 = -245;
	volatile uint16_t x311 = UINT16_MAX;
	static int64_t x312 = 122665LL;
	int64_t t74 = 307625043638767LL;

    t74 = ((x309==(x310|x311))%x312);

    if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x313 = 38;
	int16_t x314 = -3;
	uint64_t x315 = 449006499999LLU;
	volatile uint16_t x316 = 1U;
	volatile int32_t t75 = -502874003;

    t75 = ((x313==(x314|x315))%x316);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x317 = 75567485U;
	int8_t x319 = INT8_MAX;
	volatile uint16_t x320 = 35U;
	volatile int32_t t76 = 24525;

    t76 = ((x317==(x318|x319))%x320);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x322 = INT16_MIN;
	int32_t x324 = INT32_MIN;

    t77 = ((x321==(x322|x323))%x324);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x326 = 11;
	int16_t x327 = 113;
	int16_t x328 = INT16_MIN;
	int32_t t78 = -226074766;

    t78 = ((x325==(x326|x327))%x328);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x329 = -21;
	int32_t x330 = INT32_MIN;
	int16_t x332 = INT16_MAX;

    t79 = ((x329==(x330|x331))%x332);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x333 = 96815325220LLU;
	int64_t x335 = 1LL;
	int64_t x336 = INT64_MIN;
	static int64_t t80 = 1471LL;

    t80 = ((x333==(x334|x335))%x336);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x337 = 31365LLU;
	uint64_t x338 = 347646336LLU;
	int16_t x340 = -1;
	int32_t t81 = 7867878;

    t81 = ((x337==(x338|x339))%x340);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x341 = -2025;
	int64_t x342 = 399067364LL;
	int16_t x343 = INT16_MIN;
	uint16_t x344 = 1223U;
	volatile int32_t t82 = 3547947;

    t82 = ((x341==(x342|x343))%x344);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x346 = 377U;
	int16_t x347 = -1;
	int8_t x348 = INT8_MIN;
	int32_t t83 = -14112;

    t83 = ((x345==(x346|x347))%x348);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x350 = 1256LLU;
	static int8_t x351 = 13;
	volatile int32_t t84 = 7011292;

    t84 = ((x349==(x350|x351))%x352);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x354 = 606;
	static int32_t x355 = -1;
	int64_t x356 = INT64_MAX;
	int64_t t85 = -8677282654635158LL;

    t85 = ((x353==(x354|x355))%x356);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x357 = INT8_MIN;
	uint8_t x359 = UINT8_MAX;
	static uint64_t t86 = 132498976811486669LLU;

    t86 = ((x357==(x358|x359))%x360);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x362 = INT64_MIN;
	int32_t x363 = INT32_MIN;
	volatile uint64_t t87 = 1907850LLU;

    t87 = ((x361==(x362|x363))%x364);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x365 = -15;
	uint64_t x366 = UINT64_MAX;
	volatile int64_t x368 = INT64_MIN;
	int64_t t88 = 592752784633401LL;

    t88 = ((x365==(x366|x367))%x368);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x370 = 2LL;
	static volatile int16_t x371 = INT16_MAX;
	static int8_t x372 = -1;
	int32_t t89 = -13186566;

    t89 = ((x369==(x370|x371))%x372);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x373 = INT16_MIN;
	uint64_t x374 = 1987695107LLU;
	int16_t x375 = INT16_MIN;
	volatile int32_t t90 = -1531476;

    t90 = ((x373==(x374|x375))%x376);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x378 = 1026234U;
	int32_t x380 = -1;
	volatile int32_t t91 = -39895;

    t91 = ((x377==(x378|x379))%x380);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x382 = UINT8_MAX;
	static int64_t x383 = INT64_MIN;
	int32_t x384 = -1;

    t92 = ((x381==(x382|x383))%x384);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x385 = 0;
	volatile int8_t x386 = INT8_MIN;
	uint8_t x387 = 15U;
	static int16_t x388 = -4966;
	int32_t t93 = -23;

    t93 = ((x385==(x386|x387))%x388);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x391 = UINT32_MAX;
	int32_t t94 = -1867;

    t94 = ((x389==(x390|x391))%x392);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x393 = INT64_MIN;
	int16_t x395 = INT16_MIN;
	int32_t x396 = -1;
	volatile int32_t t95 = -36233740;

    t95 = ((x393==(x394|x395))%x396);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x398 = 1;
	int16_t x399 = INT16_MIN;
	volatile int32_t x400 = INT32_MAX;
	int32_t t96 = 14915401;

    t96 = ((x397==(x398|x399))%x400);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x402 = INT32_MIN;
	uint16_t x403 = 30842U;
	volatile int16_t x404 = INT16_MIN;
	volatile int32_t t97 = 2;

    t97 = ((x401==(x402|x403))%x404);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x405 = -1;
	int32_t x406 = -1;
	int32_t x407 = -637099346;

    t98 = ((x405==(x406|x407))%x408);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x409 = 7U;
	int32_t x411 = INT32_MIN;
	int32_t x412 = INT32_MIN;
	int32_t t99 = 9509648;

    t99 = ((x409==(x410|x411))%x412);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x413 = 9;
	volatile uint32_t x414 = UINT32_MAX;
	int64_t x415 = INT64_MIN;
	int16_t x416 = INT16_MAX;
	static int32_t t100 = -221922;

    t100 = ((x413==(x414|x415))%x416);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x417 = UINT8_MAX;
	int64_t x418 = INT64_MIN;
	int8_t x419 = INT8_MIN;
	static volatile int8_t x420 = -3;
	volatile int32_t t101 = 25061469;

    t101 = ((x417==(x418|x419))%x420);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x421 = 1967452636353LLU;
	uint16_t x422 = 0U;
	uint32_t x423 = UINT32_MAX;
	int64_t t102 = -316LL;

    t102 = ((x421==(x422|x423))%x424);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x426 = -1;
	int32_t x427 = INT32_MIN;
	uint32_t x428 = UINT32_MAX;

    t103 = ((x425==(x426|x427))%x428);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x429 = -1LL;
	uint16_t x430 = 31U;
	int64_t x431 = INT64_MAX;
	uint32_t x432 = UINT32_MAX;
	uint32_t t104 = 2U;

    t104 = ((x429==(x430|x431))%x432);

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x433 = -25991435LL;
	uint8_t x434 = 13U;
	static volatile uint32_t x435 = UINT32_MAX;
	uint8_t x436 = UINT8_MAX;
	int32_t t105 = -74030;

    t105 = ((x433==(x434|x435))%x436);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x438 = -1;
	uint8_t x439 = 81U;
	static volatile int32_t t106 = 10527;

    t106 = ((x437==(x438|x439))%x440);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x441 = INT64_MIN;
	static uint16_t x443 = UINT16_MAX;
	volatile int16_t x444 = 123;
	int32_t t107 = -387784;

    t107 = ((x441==(x442|x443))%x444);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int64_t x445 = -1LL;
	int8_t x446 = INT8_MIN;
	int64_t x447 = -241710587LL;
	uint16_t x448 = 364U;
	volatile int32_t t108 = -721;

    t108 = ((x445==(x446|x447))%x448);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x450 = INT16_MIN;

    t109 = ((x449==(x450|x451))%x452);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x454 = 11;
	int16_t x455 = INT16_MIN;
	int64_t x456 = -4351665829901LL;
	int64_t t110 = 1LL;

    t110 = ((x453==(x454|x455))%x456);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x457 = -16;
	int16_t x459 = -1;
	int64_t t111 = -14600137688LL;

    t111 = ((x457==(x458|x459))%x460);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x461 = INT64_MIN;
	int8_t x462 = INT8_MIN;
	static int64_t x463 = INT64_MIN;
	volatile int8_t x464 = 1;
	volatile int32_t t112 = 59309294;

    t112 = ((x461==(x462|x463))%x464);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x465 = INT64_MIN;
	volatile int32_t x467 = INT32_MIN;
	static int32_t x468 = -116;
	volatile int32_t t113 = 150280;

    t113 = ((x465==(x466|x467))%x468);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x469 = -1;
	int32_t x470 = 1;
	int16_t x472 = 11;
	volatile int32_t t114 = -106650;

    t114 = ((x469==(x470|x471))%x472);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x473 = 71U;
	static volatile uint32_t x474 = UINT32_MAX;
	uint8_t x476 = 25U;
	static int32_t t115 = 4274091;

    t115 = ((x473==(x474|x475))%x476);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x477 = -1;
	uint64_t x478 = 6846515LLU;
	int16_t x480 = -5;
	volatile int32_t t116 = -147779;

    t116 = ((x477==(x478|x479))%x480);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x481 = INT32_MAX;
	uint32_t x482 = UINT32_MAX;
	int32_t x483 = -1;
	uint16_t x484 = 28746U;
	int32_t t117 = 15;

    t117 = ((x481==(x482|x483))%x484);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x485 = 0;
	static int8_t x486 = INT8_MIN;
	int8_t x487 = -5;
	uint64_t x488 = 7069493190539201257LLU;
	volatile uint64_t t118 = 2774036324LLU;

    t118 = ((x485==(x486|x487))%x488);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x489 = UINT16_MAX;
	int16_t x490 = INT16_MAX;
	static int64_t x492 = INT64_MIN;
	int64_t t119 = 4556848377LL;

    t119 = ((x489==(x490|x491))%x492);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x493 = -202818;
	int16_t x494 = -1;
	int16_t x495 = -1;
	int64_t x496 = INT64_MAX;

    t120 = ((x493==(x494|x495))%x496);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x498 = -5;
	int8_t x499 = -30;
	volatile int32_t t121 = -3;

    t121 = ((x497==(x498|x499))%x500);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x501 = 6721590LLU;
	int32_t x502 = -11;
	int64_t x503 = -1LL;
	int8_t x504 = INT8_MIN;
	volatile int32_t t122 = 26;

    t122 = ((x501==(x502|x503))%x504);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x505 = UINT32_MAX;
	uint8_t x506 = UINT8_MAX;
	volatile int16_t x507 = -7;
	static int64_t x508 = INT64_MAX;
	int64_t t123 = -10151282317621462LL;

    t123 = ((x505==(x506|x507))%x508);

    if (t123 != 1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x509 = -1959;
	int16_t x510 = INT16_MIN;
	volatile uint64_t x511 = 639703775774LLU;
	int32_t t124 = -1683607;

    t124 = ((x509==(x510|x511))%x512);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x514 = INT16_MIN;
	static int64_t x515 = -1LL;
	volatile int32_t t125 = -93200;

    t125 = ((x513==(x514|x515))%x516);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x517 = -1;
	volatile int16_t x518 = 1;
	int32_t x519 = INT32_MIN;
	static uint64_t x520 = 8624235528279LLU;
	static uint64_t t126 = 18642973LLU;

    t126 = ((x517==(x518|x519))%x520);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x521 = UINT16_MAX;
	int32_t x523 = 3;
	static volatile uint32_t x524 = 43U;
	volatile uint32_t t127 = 93293025U;

    t127 = ((x521==(x522|x523))%x524);

    if (t127 != 1U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x525 = -1LL;
	static int32_t x527 = INT32_MIN;
	int32_t x528 = -174847;
	volatile int32_t t128 = 22258;

    t128 = ((x525==(x526|x527))%x528);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x529 = 6049U;
	uint32_t x530 = 1U;
	int32_t x532 = INT32_MIN;
	static int32_t t129 = -93642004;

    t129 = ((x529==(x530|x531))%x532);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x535 = INT32_MIN;
	uint8_t x536 = 94U;
	int32_t t130 = 63603834;

    t130 = ((x533==(x534|x535))%x536);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x537 = INT32_MIN;
	int8_t x538 = INT8_MIN;
	int64_t x540 = -1LL;
	int64_t t131 = 236855260LL;

    t131 = ((x537==(x538|x539))%x540);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x541 = -1LL;
	volatile int16_t x542 = INT16_MIN;
	uint16_t x543 = 3U;
	volatile int32_t t132 = -594;

    t132 = ((x541==(x542|x543))%x544);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x545 = INT16_MIN;
	static int16_t x546 = -672;
	int8_t x547 = INT8_MIN;
	uint16_t x548 = 1452U;
	static int32_t t133 = 8;

    t133 = ((x545==(x546|x547))%x548);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x549 = -123;
	int64_t x550 = INT64_MAX;
	uint16_t x551 = UINT16_MAX;
	int64_t x552 = 31367181498483648LL;
	static volatile int64_t t134 = 0LL;

    t134 = ((x549==(x550|x551))%x552);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x554 = 0U;
	static volatile int16_t x555 = INT16_MIN;

    t135 = ((x553==(x554|x555))%x556);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x562 = -1;

    t136 = ((x561==(x562|x563))%x564);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x565 = 8;
	uint64_t x567 = 9797221LLU;
	uint64_t x568 = 93841363132765LLU;
	uint64_t t137 = 66742599LLU;

    t137 = ((x565==(x566|x567))%x568);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x569 = INT8_MIN;
	uint64_t x571 = UINT64_MAX;
	int64_t t138 = 8732185740LL;

    t138 = ((x569==(x570|x571))%x572);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x573 = 1822257U;
	volatile int16_t x574 = INT16_MAX;
	int16_t x576 = INT16_MAX;
	static int32_t t139 = -179;

    t139 = ((x573==(x574|x575))%x576);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x577 = -1LL;
	int16_t x579 = -198;
	int16_t x580 = 293;
	volatile int32_t t140 = -30259;

    t140 = ((x577==(x578|x579))%x580);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x581 = -1;
	volatile uint64_t x583 = 1864LLU;
	int16_t x584 = INT16_MAX;
	int32_t t141 = 255;

    t141 = ((x581==(x582|x583))%x584);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x585 = INT8_MIN;
	volatile int16_t x586 = -1;

    t142 = ((x585==(x586|x587))%x588);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x589 = INT32_MIN;
	static volatile int16_t x590 = INT16_MIN;
	int64_t x591 = INT64_MIN;
	int16_t x592 = INT16_MAX;

    t143 = ((x589==(x590|x591))%x592);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x593 = INT8_MAX;
	int32_t x594 = INT32_MAX;
	static uint32_t x595 = 54469512U;
	int8_t x596 = INT8_MIN;
	int32_t t144 = -1817208;

    t144 = ((x593==(x594|x595))%x596);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x597 = 1583U;
	int16_t x599 = INT16_MIN;
	int64_t x600 = INT64_MIN;

    t145 = ((x597==(x598|x599))%x600);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x601 = 0;
	uint16_t x602 = UINT16_MAX;
	uint32_t x603 = UINT32_MAX;
	int32_t x604 = INT32_MIN;
	static volatile int32_t t146 = 51;

    t146 = ((x601==(x602|x603))%x604);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x605 = -1;
	volatile uint32_t x606 = 25235354U;
	int16_t x607 = INT16_MIN;
	int8_t x608 = INT8_MIN;
	volatile int32_t t147 = -304015253;

    t147 = ((x605==(x606|x607))%x608);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x609 = INT32_MIN;
	int32_t x610 = INT32_MIN;
	volatile int64_t x611 = INT64_MIN;
	uint32_t x612 = 690U;

    t148 = ((x609==(x610|x611))%x612);

    if (t148 != 1U) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x613 = 15703967577911023LLU;
	int8_t x614 = 32;
	static uint64_t x616 = UINT64_MAX;
	uint64_t t149 = 771308519075573136LLU;

    t149 = ((x613==(x614|x615))%x616);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x617 = INT64_MIN;
	int64_t x618 = INT64_MAX;
	uint16_t x619 = 27419U;
	static volatile int64_t x620 = INT64_MIN;

    t150 = ((x617==(x618|x619))%x620);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x622 = UINT64_MAX;
	int32_t x623 = INT32_MIN;
	static int8_t x624 = -1;
	int32_t t151 = -49;

    t151 = ((x621==(x622|x623))%x624);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x625 = 3U;
	volatile int16_t x626 = INT16_MIN;
	static uint8_t x627 = UINT8_MAX;
	static uint8_t x628 = UINT8_MAX;
	volatile int32_t t152 = -4032;

    t152 = ((x625==(x626|x627))%x628);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x629 = 1U;
	int16_t x630 = -1;
	volatile int32_t t153 = 7;

    t153 = ((x629==(x630|x631))%x632);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x633 = UINT64_MAX;
	static int64_t x634 = -1LL;
	uint16_t x635 = 5U;
	int32_t t154 = -156526;

    t154 = ((x633==(x634|x635))%x636);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x637 = INT64_MIN;
	int64_t x638 = 3979LL;
	static int32_t x639 = -24482580;
	int64_t x640 = -1LL;
	static volatile int64_t t155 = -98LL;

    t155 = ((x637==(x638|x639))%x640);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x643 = INT32_MAX;
	int16_t x644 = 7789;
	volatile int32_t t156 = 11301;

    t156 = ((x641==(x642|x643))%x644);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x645 = UINT8_MAX;
	uint8_t x646 = UINT8_MAX;
	uint8_t x647 = UINT8_MAX;
	uint8_t x648 = UINT8_MAX;
	static int32_t t157 = 1565282;

    t157 = ((x645==(x646|x647))%x648);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x649 = 2U;
	uint8_t x650 = UINT8_MAX;
	static uint64_t x651 = UINT64_MAX;
	static volatile int32_t t158 = -311006834;

    t158 = ((x649==(x650|x651))%x652);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x658 = 9513926118791994LLU;
	uint16_t x659 = 1U;
	int32_t x660 = 15898899;

    t159 = ((x657==(x658|x659))%x660);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x662 = -13;
	static int64_t x663 = -1LL;
	static uint32_t x664 = UINT32_MAX;
	volatile uint32_t t160 = 1292U;

    t160 = ((x661==(x662|x663))%x664);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x665 = INT64_MIN;
	static int32_t x667 = INT32_MIN;
	volatile uint32_t x668 = 170000U;
	uint32_t t161 = 58U;

    t161 = ((x665==(x666|x667))%x668);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x669 = UINT64_MAX;
	int32_t x670 = 1048047765;
	uint32_t x671 = UINT32_MAX;
	volatile int32_t x672 = INT32_MIN;
	static int32_t t162 = -27;

    t162 = ((x669==(x670|x671))%x672);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x673 = 35U;
	int8_t x674 = -1;
	int8_t x675 = INT8_MAX;
	int64_t x676 = -5543651709LL;
	volatile int64_t t163 = 93371532448LL;

    t163 = ((x673==(x674|x675))%x676);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x678 = 153874841U;
	int64_t x679 = -19670806984325689LL;
	volatile uint8_t x680 = UINT8_MAX;
	volatile int32_t t164 = 3771153;

    t164 = ((x677==(x678|x679))%x680);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x681 = 3;
	volatile uint16_t x682 = 5U;
	static volatile int64_t x683 = INT64_MAX;
	int8_t x684 = INT8_MAX;
	int32_t t165 = -375;

    t165 = ((x681==(x682|x683))%x684);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x685 = INT32_MIN;
	int32_t x687 = INT32_MAX;
	int32_t x688 = -1;
	volatile int32_t t166 = 219862305;

    t166 = ((x685==(x686|x687))%x688);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x689 = INT8_MIN;
	static int16_t x690 = -9;
	int8_t x691 = INT8_MAX;
	static int8_t x692 = 1;
	static volatile int32_t t167 = -194;

    t167 = ((x689==(x690|x691))%x692);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x694 = 44445633;
	int16_t x696 = -333;
	static int32_t t168 = -370767;

    t168 = ((x693==(x694|x695))%x696);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x698 = INT8_MAX;
	volatile int64_t x699 = -1LL;
	int64_t x700 = -1LL;
	volatile int64_t t169 = -7LL;

    t169 = ((x697==(x698|x699))%x700);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x701 = -1;
	static volatile int32_t x703 = INT32_MIN;
	static int64_t x704 = 193261LL;
	volatile int64_t t170 = -4522254623LL;

    t170 = ((x701==(x702|x703))%x704);

    if (t170 != 1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x705 = 2U;
	int32_t x706 = INT32_MIN;
	volatile uint8_t x707 = 19U;
	static int8_t x708 = 1;
	static volatile int32_t t171 = 0;

    t171 = ((x705==(x706|x707))%x708);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x709 = INT32_MAX;
	volatile int32_t x712 = INT32_MIN;
	volatile int32_t t172 = -10360;

    t172 = ((x709==(x710|x711))%x712);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x713 = INT16_MAX;
	uint32_t x714 = 5858U;
	volatile int16_t x716 = INT16_MIN;
	volatile int32_t t173 = -8707805;

    t173 = ((x713==(x714|x715))%x716);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x718 = INT8_MIN;
	volatile int16_t x719 = 1;
	volatile int16_t x720 = 423;
	volatile int32_t t174 = -127648;

    t174 = ((x717==(x718|x719))%x720);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x721 = INT32_MIN;
	int32_t x722 = -18561817;
	int8_t x724 = INT8_MAX;
	static volatile int32_t t175 = -94727;

    t175 = ((x721==(x722|x723))%x724);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x725 = UINT32_MAX;
	int64_t x726 = INT64_MIN;
	volatile int16_t x727 = INT16_MIN;
	uint32_t x728 = 407650U;
	uint32_t t176 = 14U;

    t176 = ((x725==(x726|x727))%x728);

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x730 = 1U;
	int16_t x731 = INT16_MIN;
	uint32_t x732 = UINT32_MAX;
	volatile uint32_t t177 = 0U;

    t177 = ((x729==(x730|x731))%x732);

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x735 = INT16_MAX;
	int8_t x736 = INT8_MIN;

    t178 = ((x733==(x734|x735))%x736);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x737 = INT64_MIN;
	uint64_t x738 = 1023502187232LLU;
	int16_t x739 = INT16_MIN;
	static int64_t x740 = INT64_MIN;
	volatile int64_t t179 = 2041684LL;

    t179 = ((x737==(x738|x739))%x740);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x741 = UINT8_MAX;
	int16_t x742 = INT16_MIN;
	int32_t x743 = INT32_MAX;
	volatile int8_t x744 = INT8_MIN;
	volatile int32_t t180 = -6871;

    t180 = ((x741==(x742|x743))%x744);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x745 = 10874;
	static uint16_t x746 = 1462U;
	int16_t x747 = 939;
	int64_t x748 = 10736636388LL;
	volatile int64_t t181 = 9270LL;

    t181 = ((x745==(x746|x747))%x748);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x749 = INT16_MIN;
	uint8_t x750 = UINT8_MAX;
	int64_t x751 = -1LL;
	int8_t x752 = 22;
	int32_t t182 = -88;

    t182 = ((x749==(x750|x751))%x752);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x753 = 39U;
	static volatile int8_t x754 = INT8_MIN;
	uint16_t x756 = 8U;
	int32_t t183 = -955;

    t183 = ((x753==(x754|x755))%x756);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x757 = UINT32_MAX;
	uint16_t x758 = UINT16_MAX;
	static int16_t x759 = INT16_MAX;
	uint64_t x760 = UINT64_MAX;

    t184 = ((x757==(x758|x759))%x760);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x761 = -4;
	static int16_t x762 = INT16_MIN;
	int64_t x763 = INT64_MIN;
	int8_t x764 = -59;

    t185 = ((x761==(x762|x763))%x764);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint8_t x766 = UINT8_MAX;
	int8_t x767 = INT8_MIN;
	static int16_t x768 = 7355;

    t186 = ((x765==(x766|x767))%x768);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x770 = INT16_MAX;
	int32_t x772 = INT32_MIN;
	volatile int32_t t187 = 0;

    t187 = ((x769==(x770|x771))%x772);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x773 = INT32_MAX;
	volatile int16_t x774 = 540;
	static uint64_t x775 = 660049259362114386LLU;
	volatile int8_t x776 = INT8_MAX;
	volatile int32_t t188 = 27586643;

    t188 = ((x773==(x774|x775))%x776);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x777 = UINT16_MAX;
	static uint8_t x780 = UINT8_MAX;

    t189 = ((x777==(x778|x779))%x780);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x781 = INT64_MAX;
	static int16_t x782 = 3;
	volatile uint8_t x784 = UINT8_MAX;
	int32_t t190 = 241428;

    t190 = ((x781==(x782|x783))%x784);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x785 = -38;
	static uint8_t x787 = 109U;
	int16_t x788 = INT16_MIN;

    t191 = ((x785==(x786|x787))%x788);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x789 = -785946;
	int16_t x791 = -1;
	uint8_t x792 = 7U;
	volatile int32_t t192 = 7785105;

    t192 = ((x789==(x790|x791))%x792);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x793 = INT8_MIN;
	int16_t x794 = -45;
	static uint64_t x796 = UINT64_MAX;
	volatile uint64_t t193 = 767852115LLU;

    t193 = ((x793==(x794|x795))%x796);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x797 = INT32_MAX;
	int8_t x798 = -1;
	uint32_t x800 = 10U;

    t194 = ((x797==(x798|x799))%x800);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x801 = INT32_MAX;
	volatile int32_t x802 = INT32_MIN;
	int64_t x803 = INT64_MIN;
	int8_t x804 = INT8_MIN;
	static volatile int32_t t195 = 1;

    t195 = ((x801==(x802|x803))%x804);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x806 = INT8_MIN;
	int8_t x807 = INT8_MAX;
	volatile int16_t x808 = 22;
	volatile int32_t t196 = -2;

    t196 = ((x805==(x806|x807))%x808);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x811 = 470U;
	int16_t x812 = -6679;
	static volatile int32_t t197 = -219420;

    t197 = ((x809==(x810|x811))%x812);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x814 = INT32_MIN;
	int8_t x815 = INT8_MIN;
	int16_t x816 = INT16_MIN;

    t198 = ((x813==(x814|x815))%x816);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x818 = 2;
	int8_t x820 = INT8_MIN;
	static volatile int32_t t199 = -488;

    t199 = ((x817==(x818|x819))%x820);

    if (t199 != 0) { NG(); } else { ; }
	
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

