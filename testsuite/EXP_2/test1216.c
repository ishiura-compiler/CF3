
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

static int64_t x4 = -1LL;
int32_t x11 = -1;
static int32_t t2 = 1;
volatile uint64_t x15 = 6373261254LLU;
volatile int64_t x16 = -1LL;
volatile int32_t x22 = -1;
volatile int64_t t6 = 11729LL;
int8_t x30 = 1;
int16_t x37 = -292;
volatile int32_t x44 = INT32_MIN;
static int32_t x48 = INT32_MIN;
volatile int64_t x52 = INT64_MAX;
static volatile int64_t x53 = INT64_MIN;
int8_t x56 = INT8_MIN;
uint64_t x66 = 2330LLU;
int64_t x73 = INT64_MIN;
volatile uint16_t x75 = 416U;
static int16_t x81 = INT16_MIN;
static int32_t x82 = INT32_MAX;
uint64_t x83 = 5101687LLU;
volatile int64_t t21 = -113763664194450LL;
static volatile int64_t t22 = 275849280157755LL;
int8_t x102 = -1;
int16_t x104 = INT16_MIN;
int8_t x105 = -1;
static uint64_t x111 = 848735865740870LLU;
static int16_t x121 = INT16_MIN;
int8_t x122 = -51;
static uint64_t x131 = UINT64_MAX;
uint64_t t32 = 446558LLU;
int16_t x136 = 236;
static volatile int32_t t33 = 0;
uint32_t x137 = 10190772U;
volatile int16_t x139 = INT16_MIN;
static volatile uint32_t t34 = 1U;
int32_t x144 = INT32_MIN;
int64_t x146 = INT64_MIN;
volatile int32_t t36 = 7004;
int64_t x158 = 9139867012193928LL;
uint32_t x159 = 426657U;
uint64_t x168 = UINT64_MAX;
uint32_t x169 = 104661U;
int16_t x173 = INT16_MIN;
uint64_t x181 = 5LLU;
int8_t x184 = 6;
static volatile int32_t x187 = -1;
static volatile uint8_t x193 = 2U;
static uint8_t x194 = UINT8_MAX;
int32_t x199 = INT32_MIN;
int32_t x211 = 2;
static volatile uint32_t x213 = 5U;
static volatile int16_t x219 = INT16_MIN;
static int32_t x220 = INT32_MIN;
volatile int32_t t54 = -3832692;
int8_t x223 = INT8_MIN;
int64_t x225 = 7389699002526LL;
int64_t t56 = 1LL;
int64_t x231 = INT64_MIN;
int16_t x233 = -1;
int8_t x246 = -1;
int64_t x249 = INT64_MIN;
int8_t x250 = 4;
int16_t x253 = INT16_MIN;
volatile int32_t x254 = INT32_MAX;
int32_t x257 = 111651;
static volatile int32_t x263 = -1;
volatile int64_t t65 = 34534220243555LL;
volatile int32_t t67 = -60;
volatile uint8_t x278 = UINT8_MAX;
int32_t t69 = 87589;
int32_t x281 = -1;
int32_t x295 = 1;
volatile int32_t t75 = -72231;
uint32_t t76 = 456U;
uint8_t x310 = UINT8_MAX;
volatile int64_t x311 = INT64_MIN;
volatile int8_t x315 = INT8_MAX;
static volatile uint16_t x317 = 1162U;
uint32_t x323 = 886651177U;
int32_t x332 = INT32_MAX;
volatile uint64_t x337 = 648738LLU;
uint32_t x341 = 358049268U;
uint64_t x342 = 9604094114738551LLU;
static int64_t x349 = INT64_MIN;
static volatile int16_t x351 = -9;
int16_t x354 = -1;
static int16_t x361 = INT16_MIN;
int32_t x367 = 307295;
static uint16_t x368 = 3000U;
static uint64_t t93 = 713122713242206669LLU;
volatile int8_t x380 = -1;
volatile int32_t x384 = INT32_MIN;
int8_t x387 = -1;
int16_t x391 = 5;
int32_t t97 = -12529215;
uint32_t t99 = UINT32_MAX;
int16_t x411 = 2;
volatile uint8_t x413 = 6U;
static int16_t x414 = 132;
volatile uint32_t x415 = 3854778U;
int32_t t103 = -228;
int64_t x417 = -713697920LL;
int16_t x418 = INT16_MIN;
int8_t x433 = INT8_MIN;
int32_t x436 = INT32_MIN;
int16_t x437 = INT16_MIN;
int64_t x440 = -1LL;
uint16_t x446 = UINT16_MAX;
volatile int64_t x449 = -1LL;
int64_t x453 = 307882LL;
int16_t x454 = INT16_MAX;
uint8_t x461 = UINT8_MAX;
static uint64_t x463 = 1006684674462LLU;
static int8_t x464 = INT8_MIN;
int32_t x476 = -463;
static int32_t t118 = 1475;
uint8_t x484 = 5U;
uint16_t x486 = 2007U;
int16_t x496 = 505;
volatile int8_t x497 = -2;
int32_t x499 = -2167;
int32_t x515 = -106522428;
uint64_t t128 = UINT64_MAX;
int16_t x522 = -1;
uint16_t x526 = UINT16_MAX;
int32_t x528 = INT32_MIN;
static volatile uint64_t x530 = UINT64_MAX;
int64_t x534 = INT64_MAX;
uint32_t t133 = 57U;
uint32_t x538 = UINT32_MAX;
int32_t x539 = -1;
static int32_t t134 = -51551808;
int16_t x544 = 359;
uint64_t t135 = 101200524106LLU;
uint16_t x554 = 82U;
static int8_t x557 = INT8_MIN;
int32_t x558 = INT32_MIN;
volatile int8_t x566 = 0;
static int32_t t141 = 13528;
volatile uint8_t x573 = UINT8_MAX;
int16_t x578 = INT16_MIN;
volatile int32_t x587 = 1463712;
volatile uint32_t t146 = 363U;
int16_t x590 = INT16_MIN;
int32_t x592 = INT32_MIN;
int32_t t147 = 17698266;
uint8_t x594 = 3U;
int32_t x596 = 47768;
int32_t t148 = -40;
volatile uint64_t t151 = 1500LLU;
static int16_t x610 = INT16_MIN;
uint16_t x612 = 4108U;
volatile uint16_t x618 = 7U;
static int8_t x619 = 3;
int32_t t156 = -59426;
int8_t x630 = INT8_MAX;
int32_t t158 = 1;
uint64_t x641 = 1566390276951830782LLU;
int16_t x650 = -1;
static volatile uint16_t x653 = 102U;
uint8_t x654 = UINT8_MAX;
int64_t t163 = 989613578LL;
int32_t x657 = INT32_MAX;
static uint32_t x668 = 21329U;
int8_t x670 = 50;
int32_t x672 = 9559;
int16_t x684 = -2;
uint16_t x685 = 52U;
uint32_t x688 = UINT32_MAX;
volatile int8_t x693 = -1;
int16_t x695 = 1593;
int8_t x697 = INT8_MIN;
int64_t x699 = 5534LL;
int8_t x702 = INT8_MAX;
uint32_t x704 = 372U;
static int8_t x705 = INT8_MAX;
static int8_t x709 = -1;
uint64_t x713 = 57295568LLU;
static uint32_t x715 = UINT32_MAX;
int8_t x718 = INT8_MIN;
uint32_t x723 = 222U;
volatile int32_t x732 = -1;
volatile int32_t t182 = 246359;
int64_t t183 = -130LL;
int16_t x741 = INT16_MIN;
volatile int32_t x743 = -747;
static int32_t t185 = -321506;
int32_t x752 = 0;
int8_t x753 = INT8_MAX;
uint64_t x755 = 20890614264605LLU;
uint8_t x756 = 3U;
uint64_t x761 = UINT64_MAX;
volatile uint16_t x762 = 15U;
int32_t x763 = -1;
static uint16_t x775 = 2531U;
int16_t x778 = INT16_MIN;
int32_t x779 = INT32_MIN;
int16_t x784 = INT16_MAX;
int16_t x786 = INT16_MIN;
volatile int32_t t198 = -1;
int32_t x799 = INT32_MAX;


void f0(void) {
    	int16_t x1 = -1;
	volatile int32_t x2 = 855;
	volatile int32_t x3 = INT32_MIN;
	volatile int64_t t0 = -103099LL;

    t0 = ((x1*(x2!=x3))&x4);

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	int64_t x6 = INT64_MIN;
	uint64_t x7 = 773625343149728LLU;
	uint16_t x8 = 20U;
	static volatile int32_t t1 = 16;

    t1 = ((x5*(x6!=x7))&x8);

    if (t1 != 20) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	static int64_t x10 = -106965LL;
	static uint8_t x12 = 1U;

    t2 = ((x9*(x10!=x11))&x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -352;
	int8_t x14 = -25;
	int64_t t3 = 1641000182780134LL;

    t3 = ((x13*(x14!=x15))&x16);

    if (t3 != -352LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = 48U;
	static volatile uint64_t x18 = 77829283785211LLU;
	int32_t x19 = INT32_MIN;
	int32_t x20 = -10;
	int32_t t4 = -1043763315;

    t4 = ((x17*(x18!=x19))&x20);

    if (t4 != 48) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 8U;
	int64_t x23 = INT64_MIN;
	int8_t x24 = INT8_MIN;
	int32_t t5 = 5;

    t5 = ((x21*(x22!=x23))&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	volatile int16_t x26 = INT16_MIN;
	static int64_t x27 = INT64_MIN;
	volatile int16_t x28 = -1;

    t6 = ((x25*(x26!=x27))&x28);

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	int16_t x31 = INT16_MIN;
	static uint32_t x32 = 21761U;
	volatile uint32_t t7 = 207U;

    t7 = ((x29*(x30!=x31))&x32);

    if (t7 != 21760U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = UINT32_MAX;
	int32_t x34 = INT32_MAX;
	volatile int8_t x35 = INT8_MAX;
	static int16_t x36 = INT16_MIN;
	volatile uint32_t t8 = 23U;

    t8 = ((x33*(x34!=x35))&x36);

    if (t8 != 4294934528U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x38 = 7805U;
	uint32_t x39 = 3372U;
	static uint32_t x40 = 0U;
	uint32_t t9 = 4200U;

    t9 = ((x37*(x38!=x39))&x40);

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 97959551204661LL;
	static uint8_t x42 = 1U;
	int16_t x43 = INT16_MIN;
	volatile int64_t t10 = -341245999966355LL;

    t10 = ((x41*(x42!=x43))&x44);

    if (t10 != 97957466603520LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	uint8_t x46 = 127U;
	static int32_t x47 = INT32_MIN;
	volatile int32_t t11 = INT32_MIN;

    t11 = ((x45*(x46!=x47))&x48);

    if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -830487522;
	volatile int16_t x50 = INT16_MAX;
	uint64_t x51 = 47274250LLU;
	int64_t t12 = 374086406773LL;

    t12 = ((x49*(x50!=x51))&x52);

    if (t12 != 9223372036024288286LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x54 = INT16_MIN;
	volatile int16_t x55 = INT16_MIN;
	int64_t t13 = -526405131908LL;

    t13 = ((x53*(x54!=x55))&x56);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 294719369967LLU;
	volatile int64_t x58 = 9066LL;
	static volatile int64_t x59 = INT64_MAX;
	int8_t x60 = 1;
	volatile uint64_t t14 = 76LLU;

    t14 = ((x57*(x58!=x59))&x60);

    if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int8_t x61 = INT8_MAX;
	int64_t x62 = 40581243247LL;
	int64_t x63 = -1331821LL;
	uint8_t x64 = 0U;
	int32_t t15 = -35169;

    t15 = ((x61*(x62!=x63))&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x65 = UINT16_MAX;
	int32_t x67 = 148245569;
	int16_t x68 = -1;
	int32_t t16 = 881303;

    t16 = ((x65*(x66!=x67))&x68);

    if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MAX;
	volatile int8_t x70 = 0;
	uint16_t x71 = 4U;
	uint32_t x72 = 111348477U;
	static volatile uint32_t t17 = 3645172U;

    t17 = ((x69*(x70!=x71))&x72);

    if (t17 != 2813U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x74 = -755LL;
	int16_t x76 = INT16_MIN;
	int64_t t18 = INT64_MIN;

    t18 = ((x73*(x74!=x75))&x76);

    if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 24622U;
	uint64_t x78 = UINT64_MAX;
	uint16_t x79 = UINT16_MAX;
	static int64_t x80 = INT64_MIN;
	static volatile int64_t t19 = -23715LL;

    t19 = ((x77*(x78!=x79))&x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x84 = 617907683U;
	volatile uint32_t t20 = 0U;

    t20 = ((x81*(x82!=x83))&x84);

    if (t20 != 617906176U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x85 = -10;
	int64_t x86 = INT64_MIN;
	static volatile uint16_t x87 = UINT16_MAX;
	static int64_t x88 = INT64_MAX;

    t21 = ((x85*(x86!=x87))&x88);

    if (t21 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = 116LL;
	int16_t x90 = INT16_MIN;
	int64_t x91 = 41030LL;
	static int16_t x92 = INT16_MAX;

    t22 = ((x89*(x90!=x91))&x92);

    if (t22 != 116LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = INT16_MIN;
	static uint64_t x94 = UINT64_MAX;
	static volatile int64_t x95 = -3LL;
	uint64_t x96 = 3307LLU;
	uint64_t t23 = 1708113702155598LLU;

    t23 = ((x93*(x94!=x95))&x96);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MAX;
	uint32_t x98 = 1671299U;
	int64_t x99 = INT64_MIN;
	volatile int8_t x100 = -6;
	int64_t t24 = 59769281442766LL;

    t24 = ((x97*(x98!=x99))&x100);

    if (t24 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 1933655701103LLU;
	volatile int16_t x103 = INT16_MIN;
	static volatile uint64_t t25 = 6419683470496609926LLU;

    t25 = ((x101*(x102!=x103))&x104);

    if (t25 != 1933655670784LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x106 = -1;
	static uint64_t x107 = 1LLU;
	int32_t x108 = INT32_MAX;
	static volatile int32_t t26 = INT32_MAX;

    t26 = ((x105*(x106!=x107))&x108);

    if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -1;
	uint32_t x110 = UINT32_MAX;
	uint64_t x112 = 410756509541185LLU;
	volatile uint64_t t27 = 884353586LLU;

    t27 = ((x109*(x110!=x111))&x112);

    if (t27 != 410756509541185LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = 3;
	static volatile uint16_t x114 = 2U;
	static volatile uint16_t x115 = 39U;
	int64_t x116 = INT64_MAX;
	int64_t t28 = 4194550687579LL;

    t28 = ((x113*(x114!=x115))&x116);

    if (t28 != 3LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MAX;
	uint8_t x118 = 1U;
	volatile int64_t x119 = 2646534LL;
	int16_t x120 = INT16_MAX;
	volatile int32_t t29 = -7030207;

    t29 = ((x117*(x118!=x119))&x120);

    if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x123 = INT16_MAX;
	static int32_t x124 = INT32_MAX;
	volatile int32_t t30 = 4547;

    t30 = ((x121*(x122!=x123))&x124);

    if (t30 != 2147450880) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 2390U;
	uint16_t x126 = 55U;
	uint16_t x127 = 2242U;
	volatile uint32_t x128 = 43U;
	volatile uint32_t t31 = 1848859715U;

    t31 = ((x125*(x126!=x127))&x128);

    if (t31 != 2U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 2889LLU;
	int8_t x130 = -1;
	volatile int8_t x132 = INT8_MIN;

    t32 = ((x129*(x130!=x131))&x132);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -3250;
	int16_t x134 = -1;
	int64_t x135 = INT64_MIN;

    t33 = ((x133*(x134!=x135))&x136);

    if (t33 != 76) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x138 = UINT64_MAX;
	uint8_t x140 = 0U;

    t34 = ((x137*(x138!=x139))&x140);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x141 = -1;
	static volatile uint64_t x142 = 349743344900633LLU;
	int8_t x143 = INT8_MIN;
	int32_t t35 = INT32_MIN;

    t35 = ((x141*(x142!=x143))&x144);

    if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = INT8_MAX;
	static int32_t x147 = 1;
	uint16_t x148 = 1U;

    t36 = ((x145*(x146!=x147))&x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t x149 = INT32_MIN;
	static uint8_t x150 = UINT8_MAX;
	int64_t x151 = INT64_MAX;
	uint16_t x152 = 1688U;
	int32_t t37 = -4;

    t37 = ((x149*(x150!=x151))&x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -5;
	int8_t x154 = INT8_MIN;
	uint64_t x155 = 5328554892329998493LLU;
	uint16_t x156 = 0U;
	volatile int32_t t38 = 343;

    t38 = ((x153*(x154!=x155))&x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = 18;
	volatile int8_t x160 = INT8_MIN;
	int32_t t39 = 2528;

    t39 = ((x157*(x158!=x159))&x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x161 = 869LL;
	uint8_t x162 = 16U;
	static int64_t x163 = INT64_MIN;
	int32_t x164 = -11;
	volatile int64_t t40 = 31LL;

    t40 = ((x161*(x162!=x163))&x164);

    if (t40 != 869LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = UINT16_MAX;
	uint64_t x166 = 8895619365LLU;
	static volatile int32_t x167 = -1;
	static uint64_t t41 = 218131266813078137LLU;

    t41 = ((x165*(x166!=x167))&x168);

    if (t41 != 65535LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x170 = 177022612U;
	int64_t x171 = -112836LL;
	int8_t x172 = -27;
	static uint32_t t42 = 43U;

    t42 = ((x169*(x170!=x171))&x172);

    if (t42 != 104645U) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x174 = UINT32_MAX;
	volatile int32_t x175 = INT32_MAX;
	uint64_t x176 = 609LLU;
	static uint64_t t43 = 465798700LLU;

    t43 = ((x173*(x174!=x175))&x176);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = -60;
	int16_t x178 = -1;
	static volatile uint64_t x179 = 37LLU;
	static volatile uint16_t x180 = UINT16_MAX;
	int32_t t44 = 73598;

    t44 = ((x177*(x178!=x179))&x180);

    if (t44 != 65476) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x182 = INT16_MIN;
	volatile int64_t x183 = INT64_MIN;
	volatile uint64_t t45 = 1120LLU;

    t45 = ((x181*(x182!=x183))&x184);

    if (t45 != 4LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -1;
	int32_t x186 = INT32_MIN;
	int64_t x188 = INT64_MIN;
	int64_t t46 = INT64_MIN;

    t46 = ((x185*(x186!=x187))&x188);

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x189 = 315146201U;
	uint64_t x190 = UINT64_MAX;
	int64_t x191 = -10551501993346981LL;
	static uint8_t x192 = 4U;
	uint32_t t47 = 237U;

    t47 = ((x189*(x190!=x191))&x192);

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x195 = INT8_MIN;
	static uint16_t x196 = UINT16_MAX;
	int32_t t48 = -18731261;

    t48 = ((x193*(x194!=x195))&x196);

    if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x197 = -8;
	int32_t x198 = INT32_MIN;
	int8_t x200 = 62;
	int32_t t49 = -250885;

    t49 = ((x197*(x198!=x199))&x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -1LL;
	volatile uint64_t x202 = 0LLU;
	int16_t x203 = 15812;
	uint8_t x204 = 20U;
	int64_t t50 = -124LL;

    t50 = ((x201*(x202!=x203))&x204);

    if (t50 != 20LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	uint32_t x206 = 0U;
	static int16_t x207 = -1;
	int16_t x208 = INT16_MIN;
	int32_t t51 = -431;

    t51 = ((x205*(x206!=x207))&x208);

    if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MAX;
	volatile int8_t x210 = -1;
	int8_t x212 = -1;
	int32_t t52 = INT32_MAX;

    t52 = ((x209*(x210!=x211))&x212);

    if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x214 = 735500610994811LLU;
	volatile int32_t x215 = -1;
	volatile uint64_t x216 = 23906024857656LLU;
	volatile uint64_t t53 = 2990LLU;

    t53 = ((x213*(x214!=x215))&x216);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 33U;
	int8_t x218 = INT8_MIN;

    t54 = ((x217*(x218!=x219))&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x221 = 8217LL;
	uint32_t x222 = UINT32_MAX;
	uint8_t x224 = 1U;
	volatile int64_t t55 = 18313431713LL;

    t55 = ((x221*(x222!=x223))&x224);

    if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x226 = INT16_MIN;
	int16_t x227 = 4402;
	int16_t x228 = INT16_MIN;

    t56 = ((x225*(x226!=x227))&x228);

    if (t56 != 7389698981888LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = UINT64_MAX;
	int32_t x230 = INT32_MAX;
	int64_t x232 = -1964LL;
	static uint64_t t57 = 1185253210990LLU;

    t57 = ((x229*(x230!=x231))&x232);

    if (t57 != 18446744073709549652LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x234 = 128;
	volatile int8_t x235 = -27;
	static volatile uint16_t x236 = 116U;
	int32_t t58 = 511;

    t58 = ((x233*(x234!=x235))&x236);

    if (t58 != 116) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	volatile int64_t x238 = INT64_MAX;
	uint32_t x239 = 7763237U;
	int64_t x240 = -1LL;
	int64_t t59 = 2LL;

    t59 = ((x237*(x238!=x239))&x240);

    if (t59 != -32768LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x241 = -3;
	int8_t x242 = INT8_MIN;
	uint32_t x243 = UINT32_MAX;
	int8_t x244 = INT8_MIN;
	volatile int32_t t60 = -18142;

    t60 = ((x241*(x242!=x243))&x244);

    if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x245 = INT16_MIN;
	int32_t x247 = INT32_MIN;
	int64_t x248 = -1LL;
	volatile int64_t t61 = 680LL;

    t61 = ((x245*(x246!=x247))&x248);

    if (t61 != -32768LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x251 = UINT64_MAX;
	volatile uint16_t x252 = 21813U;
	static volatile int64_t t62 = 85466187LL;

    t62 = ((x249*(x250!=x251))&x252);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x255 = -40;
	uint64_t x256 = 313397896LLU;
	volatile uint64_t t63 = 2026927380LLU;

    t63 = ((x253*(x254!=x255))&x256);

    if (t63 != 313393152LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x258 = 83U;
	volatile int16_t x259 = 309;
	int32_t x260 = 131689;
	volatile int32_t t64 = 4103936;

    t64 = ((x257*(x258!=x259))&x260);

    if (t64 != 33) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -19539LL;
	int8_t x262 = 3;
	static int8_t x264 = 9;

    t65 = ((x261*(x262!=x263))&x264);

    if (t65 != 9LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x265 = 10;
	static int16_t x266 = INT16_MIN;
	int8_t x267 = -1;
	int32_t x268 = 1031424;
	int32_t t66 = -14115;

    t66 = ((x265*(x266!=x267))&x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = 2U;
	static uint8_t x270 = UINT8_MAX;
	int32_t x271 = INT32_MAX;
	volatile int32_t x272 = INT32_MIN;

    t67 = ((x269*(x270!=x271))&x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x273 = 8956U;
	static uint32_t x274 = 73U;
	static int64_t x275 = INT64_MIN;
	uint64_t x276 = 5114861528LLU;
	volatile uint64_t t68 = 129320319586LLU;

    t68 = ((x273*(x274!=x275))&x276);

    if (t68 != 728LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x277 = INT8_MIN;
	static int8_t x279 = INT8_MIN;
	static int16_t x280 = -1;

    t69 = ((x277*(x278!=x279))&x280);

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x282 = UINT8_MAX;
	volatile int32_t x283 = INT32_MAX;
	int64_t x284 = INT64_MIN;
	int64_t t70 = INT64_MIN;

    t70 = ((x281*(x282!=x283))&x284);

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x285 = 3573U;
	volatile uint16_t x286 = UINT16_MAX;
	int64_t x287 = -149352094480187LL;
	uint16_t x288 = 118U;
	static int32_t t71 = 3098531;

    t71 = ((x285*(x286!=x287))&x288);

    if (t71 != 116) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x289 = 6572492025676452477LLU;
	int32_t x290 = INT32_MIN;
	volatile int16_t x291 = INT16_MIN;
	int8_t x292 = -1;
	volatile uint64_t t72 = 343111377791758725LLU;

    t72 = ((x289*(x290!=x291))&x292);

    if (t72 != 6572492025676452477LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x293 = UINT8_MAX;
	uint16_t x294 = UINT16_MAX;
	uint64_t x296 = UINT64_MAX;
	volatile uint64_t t73 = 796915LLU;

    t73 = ((x293*(x294!=x295))&x296);

    if (t73 != 255LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = -1;
	int16_t x298 = INT16_MAX;
	int32_t x299 = INT32_MIN;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = 26;

    t74 = ((x297*(x298!=x299))&x300);

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x301 = INT8_MAX;
	int32_t x302 = INT32_MAX;
	uint8_t x303 = UINT8_MAX;
	static uint16_t x304 = 259U;

    t75 = ((x301*(x302!=x303))&x304);

    if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x305 = 3;
	static uint32_t x306 = 533U;
	int64_t x307 = -1LL;
	uint32_t x308 = 316U;

    t76 = ((x305*(x306!=x307))&x308);

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 4018U;
	int16_t x312 = INT16_MIN;
	uint32_t t77 = 72991305U;

    t77 = ((x309*(x310!=x311))&x312);

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MIN;
	uint64_t x314 = 32LLU;
	int16_t x316 = 78;
	volatile int32_t t78 = 4429028;

    t78 = ((x313*(x314!=x315))&x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x318 = 891451524;
	uint32_t x319 = 19U;
	static uint64_t x320 = 10846816184287LLU;
	static uint64_t t79 = 1418156575LLU;

    t79 = ((x317*(x318!=x319))&x320);

    if (t79 != 1162LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = INT32_MAX;
	int32_t x322 = 394698;
	int64_t x324 = -6773507LL;
	volatile int64_t t80 = -869357488029372LL;

    t80 = ((x321*(x322!=x323))&x324);

    if (t80 != 2140710141LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -1;
	volatile int32_t x326 = -1;
	static volatile int32_t x327 = INT32_MAX;
	int64_t x328 = INT64_MAX;
	volatile int64_t t81 = INT64_MAX;

    t81 = ((x325*(x326!=x327))&x328);

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -14;
	static int16_t x330 = 27;
	int16_t x331 = 3005;
	volatile int32_t t82 = -34510457;

    t82 = ((x329*(x330!=x331))&x332);

    if (t82 != 2147483634) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = UINT64_MAX;
	volatile uint16_t x334 = UINT16_MAX;
	volatile uint8_t x335 = UINT8_MAX;
	volatile int32_t x336 = INT32_MAX;
	uint64_t t83 = 59776771LLU;

    t83 = ((x333*(x334!=x335))&x336);

    if (t83 != 2147483647LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x338 = INT8_MIN;
	static uint64_t x339 = 71408138527062LLU;
	volatile int64_t x340 = -1LL;
	static volatile uint64_t t84 = 158883122430LLU;

    t84 = ((x337*(x338!=x339))&x340);

    if (t84 != 648738LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x343 = INT32_MIN;
	uint16_t x344 = 173U;
	static volatile uint32_t t85 = 36369452U;

    t85 = ((x341*(x342!=x343))&x344);

    if (t85 != 164U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = 28;
	int64_t x346 = INT64_MIN;
	int8_t x347 = -1;
	volatile int16_t x348 = INT16_MIN;
	static volatile int32_t t86 = 1448;

    t86 = ((x345*(x346!=x347))&x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x350 = UINT64_MAX;
	uint32_t x352 = 3757U;
	int64_t t87 = 135LL;

    t87 = ((x349*(x350!=x351))&x352);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x353 = -264270712819LL;
	int16_t x355 = INT16_MIN;
	static int64_t x356 = INT64_MAX;
	int64_t t88 = -3LL;

    t88 = ((x353*(x354!=x355))&x356);

    if (t88 != 9223371772584062989LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = -1;
	volatile int16_t x358 = -1;
	int32_t x359 = -6;
	int8_t x360 = INT8_MIN;
	int32_t t89 = 51367;

    t89 = ((x357*(x358!=x359))&x360);

    if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x362 = INT8_MIN;
	uint16_t x363 = 12332U;
	int64_t x364 = INT64_MAX;
	volatile int64_t t90 = -11LL;

    t90 = ((x361*(x362!=x363))&x364);

    if (t90 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MIN;
	static int16_t x366 = -78;
	static int32_t t91 = 1025054919;

    t91 = ((x365*(x366!=x367))&x368);

    if (t91 != 2944) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -1;
	volatile int64_t x370 = -1LL;
	int16_t x371 = INT16_MIN;
	volatile uint8_t x372 = 22U;
	volatile int32_t t92 = 98262345;

    t92 = ((x369*(x370!=x371))&x372);

    if (t92 != 22) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x373 = 128891959LLU;
	uint8_t x374 = 6U;
	uint64_t x375 = 5LLU;
	int8_t x376 = INT8_MIN;

    t93 = ((x373*(x374!=x375))&x376);

    if (t93 != 128891904LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MAX;
	int64_t x378 = 25658782LL;
	int64_t x379 = -1526391626861LL;
	volatile int32_t t94 = INT32_MAX;

    t94 = ((x377*(x378!=x379))&x380);

    if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	volatile int64_t x382 = -84253657LL;
	volatile uint32_t x383 = UINT32_MAX;
	int64_t t95 = INT64_MIN;

    t95 = ((x381*(x382!=x383))&x384);

    if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x385 = INT32_MIN;
	volatile uint32_t x386 = 6659U;
	int32_t x388 = INT32_MAX;
	int32_t t96 = -11;

    t96 = ((x385*(x386!=x387))&x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = UINT16_MAX;
	static int32_t x390 = INT32_MIN;
	int32_t x392 = INT32_MIN;

    t97 = ((x389*(x390!=x391))&x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = 63U;
	volatile uint32_t x394 = 202637702U;
	static uint16_t x395 = UINT16_MAX;
	int32_t x396 = INT32_MIN;
	int32_t t98 = 206;

    t98 = ((x393*(x394!=x395))&x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = UINT32_MAX;
	static int8_t x398 = 1;
	int64_t x399 = INT64_MAX;
	int16_t x400 = -1;

    t99 = ((x397*(x398!=x399))&x400);

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x401 = 11U;
	int16_t x402 = -88;
	int64_t x403 = 0LL;
	static int64_t x404 = INT64_MIN;
	volatile int64_t t100 = -379362258689234437LL;

    t100 = ((x401*(x402!=x403))&x404);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x405 = -1;
	uint16_t x406 = 1195U;
	uint64_t x407 = 260878885782LLU;
	uint16_t x408 = 4U;
	int32_t t101 = -83;

    t101 = ((x405*(x406!=x407))&x408);

    if (t101 != 4) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 19450U;
	volatile int8_t x410 = -1;
	uint64_t x412 = UINT64_MAX;
	static volatile uint64_t t102 = 133480956LLU;

    t102 = ((x409*(x410!=x411))&x412);

    if (t102 != 19450LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x416 = INT32_MIN;

    t103 = ((x413*(x414!=x415))&x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x419 = INT32_MIN;
	static int8_t x420 = INT8_MAX;
	static int64_t t104 = 464147264246343LL;

    t104 = ((x417*(x418!=x419))&x420);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = 80400535527LLU;
	int8_t x422 = 1;
	uint16_t x423 = 24311U;
	uint64_t x424 = 58371425105379641LLU;
	volatile uint64_t t105 = 942254LLU;

    t105 = ((x421*(x422!=x423))&x424);

    if (t105 != 942702881LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x425 = INT8_MAX;
	int32_t x426 = INT32_MIN;
	static volatile int64_t x427 = INT64_MAX;
	int64_t x428 = -354LL;
	static volatile int64_t t106 = 2780432069767029941LL;

    t106 = ((x425*(x426!=x427))&x428);

    if (t106 != 30LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x429 = INT8_MIN;
	uint16_t x430 = 0U;
	static uint16_t x431 = 5419U;
	static volatile int8_t x432 = INT8_MAX;
	volatile int32_t t107 = 24;

    t107 = ((x429*(x430!=x431))&x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x434 = INT8_MIN;
	uint64_t x435 = 32858934LLU;
	int32_t t108 = INT32_MIN;

    t108 = ((x433*(x434!=x435))&x436);

    if (t108 != INT32_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x438 = UINT32_MAX;
	int8_t x439 = INT8_MAX;
	volatile int64_t t109 = 4LL;

    t109 = ((x437*(x438!=x439))&x440);

    if (t109 != -32768LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MAX;
	static int64_t x442 = -1LL;
	uint64_t x443 = UINT64_MAX;
	uint64_t x444 = 135776884874415585LLU;
	static volatile uint64_t t110 = 157705176LLU;

    t110 = ((x441*(x442!=x443))&x444);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x445 = -30;
	int16_t x447 = -1;
	uint16_t x448 = 197U;
	int32_t t111 = -1;

    t111 = ((x445*(x446!=x447))&x448);

    if (t111 != 192) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x450 = 8948;
	uint8_t x451 = UINT8_MAX;
	int64_t x452 = -1LL;
	static int64_t t112 = -68911LL;

    t112 = ((x449*(x450!=x451))&x452);

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x455 = 62010540482353LLU;
	static volatile int16_t x456 = INT16_MAX;
	int64_t t113 = -10LL;

    t113 = ((x453*(x454!=x455))&x456);

    if (t113 != 12970LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 621995508386LLU;
	static int16_t x458 = -1;
	uint8_t x459 = 1U;
	uint8_t x460 = 3U;
	volatile uint64_t t114 = 189019793LLU;

    t114 = ((x457*(x458!=x459))&x460);

    if (t114 != 2LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x462 = INT32_MIN;
	int32_t t115 = -2992;

    t115 = ((x461*(x462!=x463))&x464);

    if (t115 != 128) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = 1U;
	uint32_t x466 = 307991U;
	volatile uint64_t x467 = 48237969772LLU;
	volatile int8_t x468 = -15;
	volatile int32_t t116 = 138722705;

    t116 = ((x465*(x466!=x467))&x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x469 = INT16_MIN;
	int8_t x470 = INT8_MAX;
	int8_t x471 = INT8_MIN;
	int8_t x472 = INT8_MIN;
	volatile int32_t t117 = 6623542;

    t117 = ((x469*(x470!=x471))&x472);

    if (t117 != -32768) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = 0;
	uint8_t x474 = UINT8_MAX;
	int8_t x475 = INT8_MAX;

    t118 = ((x473*(x474!=x475))&x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = UINT64_MAX;
	uint8_t x478 = 2U;
	uint32_t x479 = 41768U;
	uint8_t x480 = UINT8_MAX;
	uint64_t t119 = 18LLU;

    t119 = ((x477*(x478!=x479))&x480);

    if (t119 != 255LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x481 = INT8_MAX;
	uint64_t x482 = UINT64_MAX;
	int64_t x483 = 38940704671LL;
	int32_t t120 = 0;

    t120 = ((x481*(x482!=x483))&x484);

    if (t120 != 5) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	uint8_t x487 = UINT8_MAX;
	volatile int64_t x488 = INT64_MIN;
	volatile int64_t t121 = INT64_MIN;

    t121 = ((x485*(x486!=x487))&x488);

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x489 = -97250;
	uint32_t x490 = 112744293U;
	uint64_t x491 = 9781307288LLU;
	static uint16_t x492 = UINT16_MAX;
	volatile int32_t t122 = -9914;

    t122 = ((x489*(x490!=x491))&x492);

    if (t122 != 33822) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = -1;
	uint8_t x494 = 4U;
	int64_t x495 = 3656LL;
	volatile int32_t t123 = -16040090;

    t123 = ((x493*(x494!=x495))&x496);

    if (t123 != 505) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x498 = INT16_MAX;
	uint64_t x500 = 5948052011LLU;
	static uint64_t t124 = 195619128LLU;

    t124 = ((x497*(x498!=x499))&x500);

    if (t124 != 5948052010LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = 1;
	uint8_t x502 = 1U;
	int16_t x503 = 116;
	uint64_t x504 = 16LLU;
	volatile uint64_t t125 = 90357433296688550LLU;

    t125 = ((x501*(x502!=x503))&x504);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = -1;
	int8_t x506 = INT8_MIN;
	int8_t x507 = INT8_MAX;
	int16_t x508 = INT16_MIN;
	int32_t t126 = 789196425;

    t126 = ((x505*(x506!=x507))&x508);

    if (t126 != -32768) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x509 = UINT64_MAX;
	int32_t x510 = INT32_MIN;
	volatile uint32_t x511 = 2U;
	uint32_t x512 = 11363U;
	static uint64_t t127 = 0LLU;

    t127 = ((x509*(x510!=x511))&x512);

    if (t127 != 11363LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -1;
	int8_t x514 = INT8_MAX;
	uint64_t x516 = UINT64_MAX;

    t128 = ((x513*(x514!=x515))&x516);

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = UINT8_MAX;
	static volatile int32_t x518 = INT32_MAX;
	int32_t x519 = INT32_MAX;
	int32_t x520 = 6132;
	static volatile int32_t t129 = -978;

    t129 = ((x517*(x518!=x519))&x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x521 = INT32_MIN;
	static int32_t x523 = INT32_MIN;
	uint8_t x524 = 15U;
	volatile int32_t t130 = 501941;

    t130 = ((x521*(x522!=x523))&x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MIN;
	int8_t x527 = -1;
	static int32_t t131 = INT32_MIN;

    t131 = ((x525*(x526!=x527))&x528);

    if (t131 != INT32_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x529 = INT32_MAX;
	static uint8_t x531 = 2U;
	static int16_t x532 = -1;
	volatile int32_t t132 = INT32_MAX;

    t132 = ((x529*(x530!=x531))&x532);

    if (t132 != INT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x533 = 58;
	int16_t x535 = -2916;
	static uint32_t x536 = 596693U;

    t133 = ((x533*(x534!=x535))&x536);

    if (t133 != 16U) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x537 = UINT8_MAX;
	int32_t x540 = -1;

    t134 = ((x537*(x538!=x539))&x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = 2073567459621727LLU;
	uint16_t x542 = UINT16_MAX;
	int32_t x543 = INT32_MAX;

    t135 = ((x541*(x542!=x543))&x544);

    if (t135 != 327LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = 2332U;
	int32_t x546 = INT32_MAX;
	static uint64_t x547 = UINT64_MAX;
	volatile uint64_t x548 = 191536LLU;
	volatile uint64_t t136 = 247521LLU;

    t136 = ((x545*(x546!=x547))&x548);

    if (t136 != 2064LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint64_t x549 = UINT64_MAX;
	int16_t x550 = INT16_MIN;
	int16_t x551 = INT16_MIN;
	int16_t x552 = INT16_MIN;
	uint64_t t137 = 2862123769860999824LLU;

    t137 = ((x549*(x550!=x551))&x552);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = -725;
	static volatile uint16_t x555 = 4U;
	static volatile int16_t x556 = INT16_MIN;
	int32_t t138 = 7;

    t138 = ((x553*(x554!=x555))&x556);

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x559 = 964U;
	static int16_t x560 = 967;
	int32_t t139 = 657812;

    t139 = ((x557*(x558!=x559))&x560);

    if (t139 != 896) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MIN;
	int16_t x562 = -1;
	static uint64_t x563 = 5723826998LLU;
	int32_t x564 = INT32_MIN;
	int32_t t140 = INT32_MIN;

    t140 = ((x561*(x562!=x563))&x564);

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = -50;
	int64_t x567 = -17594358118055LL;
	uint16_t x568 = 27U;

    t141 = ((x565*(x566!=x567))&x568);

    if (t141 != 10) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x569 = -1;
	volatile int64_t x570 = -1700303LL;
	uint64_t x571 = 757071073859566LLU;
	uint32_t x572 = 96199625U;
	uint32_t t142 = 62823817U;

    t142 = ((x569*(x570!=x571))&x572);

    if (t142 != 96199625U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x574 = -1;
	uint8_t x575 = UINT8_MAX;
	volatile uint32_t x576 = 32989U;
	volatile uint32_t t143 = 14492840U;

    t143 = ((x573*(x574!=x575))&x576);

    if (t143 != 221U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MIN;
	uint8_t x579 = UINT8_MAX;
	int8_t x580 = INT8_MIN;
	volatile int32_t t144 = -10;

    t144 = ((x577*(x578!=x579))&x580);

    if (t144 != -32768) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x581 = 51U;
	int16_t x582 = 25;
	static int16_t x583 = 140;
	static int8_t x584 = -1;
	volatile int32_t t145 = 517495;

    t145 = ((x581*(x582!=x583))&x584);

    if (t145 != 51) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = 463090U;
	int8_t x586 = -36;
	int16_t x588 = -1;

    t146 = ((x585*(x586!=x587))&x588);

    if (t146 != 463090U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x589 = 79U;
	static volatile uint8_t x591 = UINT8_MAX;

    t147 = ((x589*(x590!=x591))&x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int8_t x593 = -1;
	static uint8_t x595 = UINT8_MAX;

    t148 = ((x593*(x594!=x595))&x596);

    if (t148 != 47768) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = UINT16_MAX;
	volatile uint64_t x598 = UINT64_MAX;
	uint64_t x599 = UINT64_MAX;
	volatile int8_t x600 = INT8_MAX;
	volatile int32_t t149 = 98332443;

    t149 = ((x597*(x598!=x599))&x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x601 = INT8_MIN;
	uint32_t x602 = UINT32_MAX;
	uint8_t x603 = 60U;
	static int64_t x604 = 34995056820613LL;
	int64_t t150 = 82108151LL;

    t150 = ((x601*(x602!=x603))&x604);

    if (t150 != 34995056820608LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x605 = UINT32_MAX;
	uint8_t x606 = 35U;
	static int8_t x607 = INT8_MAX;
	static uint64_t x608 = UINT64_MAX;

    t151 = ((x605*(x606!=x607))&x608);

    if (t151 != 4294967295LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MAX;
	int64_t x611 = INT64_MIN;
	static int32_t t152 = -3934;

    t152 = ((x609*(x610!=x611))&x612);

    if (t152 != 12) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x613 = -1;
	static uint16_t x614 = 34U;
	static int8_t x615 = 2;
	int64_t x616 = 24717961LL;
	int64_t t153 = 20LL;

    t153 = ((x613*(x614!=x615))&x616);

    if (t153 != 24717961LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = -1;
	uint32_t x620 = 25U;
	static volatile uint32_t t154 = 48006510U;

    t154 = ((x617*(x618!=x619))&x620);

    if (t154 != 25U) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x621 = UINT16_MAX;
	uint16_t x622 = 20U;
	int32_t x623 = INT32_MAX;
	volatile uint64_t x624 = UINT64_MAX;
	uint64_t t155 = 211051252595943LLU;

    t155 = ((x621*(x622!=x623))&x624);

    if (t155 != 65535LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x625 = -2;
	static volatile uint8_t x626 = UINT8_MAX;
	volatile int32_t x627 = -1;
	int16_t x628 = 1504;

    t156 = ((x625*(x626!=x627))&x628);

    if (t156 != 1504) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x629 = -1;
	uint32_t x631 = UINT32_MAX;
	int64_t x632 = -1LL;
	volatile int64_t t157 = -844185LL;

    t157 = ((x629*(x630!=x631))&x632);

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	static volatile uint64_t x634 = UINT64_MAX;
	int32_t x635 = INT32_MAX;
	volatile int8_t x636 = INT8_MIN;

    t158 = ((x633*(x634!=x635))&x636);

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MIN;
	static uint32_t x638 = UINT32_MAX;
	uint32_t x639 = 99U;
	int32_t x640 = INT32_MIN;
	volatile int64_t t159 = INT64_MIN;

    t159 = ((x637*(x638!=x639))&x640);

    if (t159 != INT64_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x642 = UINT32_MAX;
	uint32_t x643 = UINT32_MAX;
	int32_t x644 = -1;
	volatile uint64_t t160 = 19028381796213475LLU;

    t160 = ((x641*(x642!=x643))&x644);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x645 = INT8_MIN;
	static uint32_t x646 = 319U;
	int32_t x647 = 394119;
	int64_t x648 = -1LL;
	int64_t t161 = 2789366634LL;

    t161 = ((x645*(x646!=x647))&x648);

    if (t161 != -128LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x649 = INT8_MIN;
	static int32_t x651 = -1;
	int16_t x652 = INT16_MIN;
	volatile int32_t t162 = 1543545;

    t162 = ((x649*(x650!=x651))&x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x655 = INT32_MAX;
	int64_t x656 = 0LL;

    t163 = ((x653*(x654!=x655))&x656);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x658 = 31251U;
	uint32_t x659 = 6738187U;
	int64_t x660 = -749939959116251LL;
	static volatile int64_t t164 = 3828451846986139359LL;

    t164 = ((x657*(x658!=x659))&x660);

    if (t164 != 2132954661LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	static int64_t x662 = -1012248938085624744LL;
	int32_t x663 = INT32_MAX;
	uint64_t x664 = 600073794584LLU;
	uint64_t t165 = 1385375311LLU;

    t165 = ((x661*(x662!=x663))&x664);

    if (t165 != 599147937792LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MIN;
	int16_t x666 = INT16_MIN;
	int16_t x667 = 13;
	static volatile uint32_t t166 = 46894718U;

    t166 = ((x665*(x666!=x667))&x668);

    if (t166 != 21248U) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = INT8_MIN;
	static uint64_t x671 = 17013593810LLU;
	volatile int32_t t167 = 79051;

    t167 = ((x669*(x670!=x671))&x672);

    if (t167 != 9472) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x673 = -1LL;
	uint16_t x674 = 30U;
	int32_t x675 = INT32_MIN;
	int64_t x676 = -6893811226599LL;
	volatile int64_t t168 = 252241056704328LL;

    t168 = ((x673*(x674!=x675))&x676);

    if (t168 != -6893811226599LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = 109U;
	uint32_t x678 = 55U;
	static int32_t x679 = -10505;
	uint32_t x680 = UINT32_MAX;
	volatile uint32_t t169 = 127U;

    t169 = ((x677*(x678!=x679))&x680);

    if (t169 != 109U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 99616336645167094LLU;
	uint32_t x682 = 390378U;
	int16_t x683 = -14035;
	static uint64_t t170 = 22831027LLU;

    t170 = ((x681*(x682!=x683))&x684);

    if (t170 != 99616336645167094LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x686 = -1;
	int64_t x687 = -1LL;
	uint32_t t171 = 6890085U;

    t171 = ((x685*(x686!=x687))&x688);

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x689 = INT8_MIN;
	volatile int64_t x690 = -1LL;
	int8_t x691 = -1;
	int8_t x692 = -1;
	volatile int32_t t172 = 144693839;

    t172 = ((x689*(x690!=x691))&x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x694 = 2329555U;
	uint8_t x696 = 11U;
	int32_t t173 = 54694;

    t173 = ((x693*(x694!=x695))&x696);

    if (t173 != 11) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x698 = 87475U;
	int16_t x700 = INT16_MIN;
	int32_t t174 = 97;

    t174 = ((x697*(x698!=x699))&x700);

    if (t174 != -32768) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = -11;
	volatile int64_t x703 = -50967LL;
	volatile uint32_t t175 = 140377294U;

    t175 = ((x701*(x702!=x703))&x704);

    if (t175 != 372U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x706 = 1;
	int16_t x707 = -84;
	uint16_t x708 = 1U;
	static int32_t t176 = -1527753;

    t176 = ((x705*(x706!=x707))&x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x710 = -1;
	int32_t x711 = -1;
	static int32_t x712 = INT32_MAX;
	volatile int32_t t177 = -225;

    t177 = ((x709*(x710!=x711))&x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x714 = -511;
	volatile int8_t x716 = INT8_MIN;
	uint64_t t178 = 116711627114LLU;

    t178 = ((x713*(x714!=x715))&x716);

    if (t178 != 57295488LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MIN;
	int8_t x719 = -14;
	int8_t x720 = INT8_MAX;
	int32_t t179 = -4850;

    t179 = ((x717*(x718!=x719))&x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 1046649762U;
	volatile uint64_t x722 = UINT64_MAX;
	int64_t x724 = -8637LL;
	static int64_t t180 = -34168183591140LL;

    t180 = ((x721*(x722!=x723))&x724);

    if (t180 != 1046649346LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x725 = INT16_MIN;
	int16_t x726 = INT16_MIN;
	int32_t x727 = 0;
	int32_t x728 = -1;
	static int32_t t181 = 77823;

    t181 = ((x725*(x726!=x727))&x728);

    if (t181 != -32768) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x729 = 6U;
	volatile int8_t x730 = INT8_MIN;
	uint64_t x731 = UINT64_MAX;

    t182 = ((x729*(x730!=x731))&x732);

    if (t182 != 6) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MAX;
	int32_t x734 = INT32_MIN;
	int8_t x735 = 0;
	int64_t x736 = INT64_MIN;

    t183 = ((x733*(x734!=x735))&x736);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = 31LL;
	int8_t x738 = -1;
	int32_t x739 = INT32_MIN;
	volatile int64_t x740 = -694LL;
	int64_t t184 = -227974845654263LL;

    t184 = ((x737*(x738!=x739))&x740);

    if (t184 != 10LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x742 = UINT32_MAX;
	static int32_t x744 = INT32_MAX;

    t185 = ((x741*(x742!=x743))&x744);

    if (t185 != 2147450880) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x745 = 6333U;
	int32_t x746 = -1;
	volatile int64_t x747 = INT64_MIN;
	static uint32_t x748 = 15U;
	volatile uint32_t t186 = 4150U;

    t186 = ((x745*(x746!=x747))&x748);

    if (t186 != 13U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = UINT8_MAX;
	int16_t x750 = 4612;
	uint32_t x751 = 3493842U;
	volatile int32_t t187 = -4280;

    t187 = ((x749*(x750!=x751))&x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint8_t x754 = 1U;
	int32_t t188 = 1146908;

    t188 = ((x753*(x754!=x755))&x756);

    if (t188 != 3) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint64_t x757 = 1178844331472LLU;
	volatile int16_t x758 = 506;
	int8_t x759 = INT8_MAX;
	int32_t x760 = INT32_MIN;
	uint64_t t189 = 9439465641705523LLU;

    t189 = ((x757*(x758!=x759))&x760);

    if (t189 != 1176821039104LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x764 = UINT32_MAX;
	uint64_t t190 = 0LLU;

    t190 = ((x761*(x762!=x763))&x764);

    if (t190 != 4294967295LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	uint8_t x766 = 112U;
	int64_t x767 = 2365905262251658621LL;
	static int8_t x768 = -1;
	int32_t t191 = 5;

    t191 = ((x765*(x766!=x767))&x768);

    if (t191 != -32768) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x769 = 176063846U;
	int8_t x770 = -1;
	uint8_t x771 = 1U;
	int64_t x772 = INT64_MAX;
	int64_t t192 = 2200LL;

    t192 = ((x769*(x770!=x771))&x772);

    if (t192 != 176063846LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x773 = 40324U;
	static int8_t x774 = INT8_MIN;
	uint8_t x776 = 7U;
	uint32_t t193 = 339754U;

    t193 = ((x773*(x774!=x775))&x776);

    if (t193 != 4U) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x777 = -1;
	uint64_t x780 = UINT64_MAX;
	volatile uint64_t t194 = UINT64_MAX;

    t194 = ((x777*(x778!=x779))&x780);

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x781 = 0;
	static int32_t x782 = -53296;
	int32_t x783 = -3783864;
	static int32_t t195 = -451;

    t195 = ((x781*(x782!=x783))&x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x785 = 4815LL;
	int8_t x787 = 15;
	int16_t x788 = INT16_MAX;
	static int64_t t196 = -3801333LL;

    t196 = ((x785*(x786!=x787))&x788);

    if (t196 != 4815LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MAX;
	int64_t x790 = -1LL;
	int16_t x791 = INT16_MIN;
	int8_t x792 = INT8_MIN;
	volatile int64_t t197 = -366552645304LL;

    t197 = ((x789*(x790!=x791))&x792);

    if (t197 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x793 = INT8_MIN;
	static int8_t x794 = INT8_MIN;
	int64_t x795 = -88358727LL;
	static volatile int16_t x796 = INT16_MIN;

    t198 = ((x793*(x794!=x795))&x796);

    if (t198 != -32768) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MIN;
	uint64_t x798 = 1885721650023LLU;
	static uint8_t x800 = 124U;
	volatile int64_t t199 = -261035616LL;

    t199 = ((x797*(x798!=x799))&x800);

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

