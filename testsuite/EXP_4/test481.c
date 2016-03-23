
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

int8_t x1 = INT8_MAX;
int32_t t1 = 16;
static volatile int32_t t2 = -113;
static int32_t t4 = 7281419;
static int32_t x42 = INT32_MIN;
volatile int8_t x45 = -1;
int8_t x47 = INT8_MIN;
volatile int32_t t6 = 109122906;
volatile uint8_t x51 = 80U;
static volatile uint8_t x52 = UINT8_MAX;
int32_t t7 = -359;
int32_t x57 = INT32_MIN;
static int32_t t8 = -1;
int16_t x62 = 2118;
int8_t x63 = 10;
volatile int8_t x68 = 1;
static volatile int32_t t11 = -430126;
static int32_t x75 = INT32_MIN;
uint32_t x76 = 399U;
int32_t t13 = -692398;
uint32_t x82 = UINT32_MAX;
static int32_t x84 = -4200;
int32_t x88 = -1;
volatile int16_t x91 = INT16_MIN;
volatile int64_t x113 = INT64_MIN;
int8_t x116 = 50;
static int64_t x118 = INT64_MIN;
int8_t x120 = INT8_MIN;
volatile uint32_t x129 = 231U;
uint64_t x134 = 119463428171585LLU;
uint32_t x142 = 6629U;
uint8_t x147 = UINT8_MAX;
int8_t x148 = 18;
int16_t x149 = INT16_MIN;
int8_t x161 = 11;
volatile int32_t t33 = 23048178;
int64_t x197 = INT64_MAX;
volatile int16_t x200 = INT16_MAX;
uint32_t x207 = 10928U;
int16_t x212 = 9;
static uint8_t x224 = UINT8_MAX;
uint64_t t43 = 340LLU;
static volatile uint64_t x231 = 533957LLU;
static volatile int32_t t45 = 26;
static volatile int16_t x234 = -1;
uint32_t x238 = 1681240U;
volatile uint16_t x248 = 0U;
int16_t x251 = -1;
static int16_t x259 = 1006;
static volatile int64_t x261 = INT64_MIN;
volatile int8_t x266 = INT8_MIN;
int8_t x270 = 3;
uint32_t x278 = UINT32_MAX;
int16_t x298 = INT16_MIN;
int16_t x302 = INT16_MIN;
volatile int16_t x303 = INT16_MIN;
static volatile int32_t t60 = 3331182;
static volatile int16_t x306 = -13014;
uint64_t t61 = 4472LLU;
int32_t x314 = INT32_MAX;
int32_t t63 = 14240;
volatile int32_t t64 = 357993;
volatile int8_t x330 = INT8_MIN;
int16_t x332 = INT16_MIN;
int16_t x334 = INT16_MIN;
int32_t x342 = INT32_MAX;
uint8_t x343 = 122U;
int32_t t68 = 83;
static int64_t x346 = INT64_MAX;
uint32_t x350 = UINT32_MAX;
static int32_t t70 = 1014605;
int32_t t72 = 7111165;
uint8_t x368 = 48U;
uint8_t x369 = 0U;
volatile int32_t x372 = -1;
int16_t x375 = -34;
volatile int64_t x390 = INT64_MIN;
uint16_t x406 = 12471U;
int32_t t79 = 16704683;
static int16_t x418 = -314;
volatile int32_t t80 = 491258;
int16_t x422 = INT16_MIN;
uint32_t t81 = 436771U;
static int8_t x426 = INT8_MIN;
int32_t x427 = 1029092990;
static int8_t x429 = INT8_MAX;
volatile int32_t t84 = 530;
volatile uint8_t x463 = 47U;
volatile uint64_t t87 = 3421971265032611LLU;
uint32_t x478 = 8U;
volatile int32_t t89 = -59;
static uint8_t x482 = 1U;
static int32_t x493 = INT32_MAX;
uint16_t x503 = 94U;
uint64_t x519 = 618486LLU;
volatile uint16_t x528 = 80U;
static uint64_t x531 = 3087809899LLU;
int64_t x534 = INT64_MIN;
static volatile uint8_t x537 = 121U;
int16_t x539 = 1;
static uint32_t x540 = 0U;
static volatile int32_t t102 = 5653;
static uint64_t x544 = 1315843825229LLU;
volatile int8_t x547 = -2;
uint32_t x571 = 1980856U;
static uint64_t x572 = 195256394985LLU;
int64_t x576 = -21961746LL;
int32_t t109 = 1;
volatile int32_t x582 = INT32_MIN;
uint8_t x588 = UINT8_MAX;
uint8_t x596 = 26U;
int32_t t112 = -14;
static uint64_t x597 = 5653LLU;
volatile int16_t x601 = -1;
int32_t t116 = 1;
uint64_t x622 = 8683462460435142LLU;
volatile uint64_t x624 = 213549LLU;
int8_t x630 = -1;
int64_t x637 = 2069276286951190329LL;
uint8_t x638 = 15U;
int64_t t121 = -224367LL;
int32_t x644 = 32120;
int32_t t122 = 162554;
int8_t x652 = 3;
static uint8_t x658 = 107U;
volatile int64_t x669 = INT64_MIN;
int8_t x670 = 1;
int8_t x676 = INT8_MAX;
int32_t t130 = 20;
static int64_t x693 = INT64_MAX;
int32_t x695 = 968392285;
uint32_t x699 = UINT32_MAX;
int64_t t132 = 36LL;
volatile int16_t x721 = INT16_MAX;
static uint32_t x737 = 49981769U;
int8_t x741 = 0;
int16_t x748 = INT16_MAX;
volatile int32_t t139 = 69261018;
static volatile int32_t t141 = 829770648;
volatile int16_t x784 = INT16_MAX;
volatile uint32_t x785 = UINT32_MAX;
volatile uint64_t x791 = 1LLU;
int16_t x792 = INT16_MIN;
int32_t x797 = 23;
volatile int8_t x798 = -1;
int8_t x799 = 39;
int32_t x820 = -61;
static volatile int16_t x824 = -1;
static uint32_t x830 = 12709710U;
static int32_t x831 = 212938428;
int16_t x856 = -25;
static uint8_t x860 = UINT8_MAX;
int64_t x863 = -4721609247LL;
volatile int32_t x865 = -1;
int8_t x886 = INT8_MIN;
static volatile int32_t t160 = -1601;
uint64_t x890 = UINT64_MAX;
volatile uint64_t t161 = 0LLU;
volatile int32_t t163 = -1;
uint32_t x909 = 60067U;
volatile uint32_t t165 = 384072469U;
static int64_t x913 = -1LL;
static volatile uint8_t x930 = 7U;
static int8_t x937 = INT8_MIN;
static volatile int64_t x938 = INT64_MAX;
int16_t x951 = INT16_MIN;
uint64_t t170 = 1645992LLU;
uint32_t x953 = UINT32_MAX;
static int16_t x957 = INT16_MAX;
volatile uint32_t x967 = UINT32_MAX;
int32_t t173 = 85971;
uint32_t x973 = UINT32_MAX;
int64_t t176 = 2012LL;
int16_t x986 = INT16_MIN;
static int8_t x989 = -1;
static volatile int32_t t178 = 108173;
int64_t x1002 = -10LL;
static int16_t x1011 = 0;
int16_t x1012 = 1;
volatile int64_t x1013 = INT64_MIN;
volatile uint32_t x1014 = 3655672U;
uint16_t x1015 = UINT16_MAX;
volatile int8_t x1020 = -1;
int8_t x1024 = 6;
uint32_t x1026 = UINT32_MAX;
int16_t x1039 = 15841;
int16_t x1056 = -1;
uint64_t x1061 = 430797672814LLU;
static int64_t x1062 = INT64_MIN;
uint64_t t194 = 37LLU;
uint16_t x1071 = UINT16_MAX;
uint32_t x1084 = 6U;
volatile int64_t t199 = -419346309207003LL;


void f0(void) {
    	int32_t x2 = -5;
	uint16_t x3 = 20674U;
	volatile uint64_t x4 = UINT64_MAX;
	int32_t t0 = 3279;

    t0 = (x1%(x2!=(x3*x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 3925455;
	int32_t x6 = INT32_MIN;
	uint16_t x7 = UINT16_MAX;
	static uint8_t x8 = 117U;

    t1 = (x5%(x6!=(x7*x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x17 = -1;
	static volatile int32_t x18 = INT32_MIN;
	volatile int16_t x19 = 43;
	int16_t x20 = INT16_MAX;

    t2 = (x17%(x18!=(x19*x20)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x29 = UINT8_MAX;
	int16_t x30 = INT16_MAX;
	static int16_t x31 = 155;
	int8_t x32 = 1;
	volatile int32_t t3 = -226583;

    t3 = (x29%(x30!=(x31*x32)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x33 = -135;
	uint64_t x34 = 22552400LLU;
	int16_t x35 = INT16_MAX;
	uint16_t x36 = 110U;

    t4 = (x33%(x34!=(x35*x36)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int32_t x41 = INT32_MIN;
	int32_t x43 = -46;
	uint64_t x44 = 5046739829737LLU;
	static volatile int32_t t5 = -9;

    t5 = (x41%(x42!=(x43*x44)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x46 = 2U;
	int16_t x48 = 108;

    t6 = (x45%(x46!=(x47*x48)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x49 = INT8_MIN;
	int32_t x50 = -1;

    t7 = (x49%(x50!=(x51*x52)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x58 = -1;
	int64_t x59 = 910142497784173LL;
	static uint8_t x60 = 0U;

    t8 = (x57%(x58!=(x59*x60)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x61 = 22409;
	volatile int16_t x64 = -639;
	volatile int32_t t9 = 1002;

    t9 = (x61%(x62!=(x63*x64)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x65 = 370885U;
	static int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MIN;
	uint32_t t10 = 4U;

    t10 = (x65%(x66!=(x67*x68)));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x69 = UINT8_MAX;
	static int8_t x70 = -63;
	int16_t x71 = INT16_MAX;
	volatile int8_t x72 = 15;

    t11 = (x69%(x70!=(x71*x72)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x73 = INT64_MIN;
	int16_t x74 = 678;
	volatile int64_t t12 = 7263884370498091LL;

    t12 = (x73%(x74!=(x75*x76)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x77 = INT32_MIN;
	int64_t x78 = -1LL;
	uint16_t x79 = 1292U;
	static uint32_t x80 = UINT32_MAX;

    t13 = (x77%(x78!=(x79*x80)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x81 = UINT64_MAX;
	int16_t x83 = -1;
	uint64_t t14 = 336341320244LLU;

    t14 = (x81%(x82!=(x83*x84)));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x85 = INT64_MIN;
	uint8_t x86 = UINT8_MAX;
	static int64_t x87 = -1LL;
	volatile int64_t t15 = 0LL;

    t15 = (x85%(x86!=(x87*x88)));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x89 = 7487068740LLU;
	volatile int16_t x90 = INT16_MIN;
	int8_t x92 = -1;
	volatile uint64_t t16 = 1652887607LLU;

    t16 = (x89%(x90!=(x91*x92)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x93 = INT8_MAX;
	int64_t x94 = -1LL;
	static int32_t x95 = INT32_MIN;
	int64_t x96 = -1LL;
	int32_t t17 = 450651;

    t17 = (x93%(x94!=(x95*x96)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x109 = UINT32_MAX;
	uint64_t x110 = UINT64_MAX;
	int8_t x111 = INT8_MIN;
	volatile int64_t x112 = 38923193119100LL;
	volatile uint32_t t18 = 57724U;

    t18 = (x109%(x110!=(x111*x112)));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x114 = 153U;
	int8_t x115 = 24;
	volatile int64_t t19 = 1LL;

    t19 = (x113%(x114!=(x115*x116)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x117 = -19;
	static int64_t x119 = 6136809LL;
	volatile int32_t t20 = 141394863;

    t20 = (x117%(x118!=(x119*x120)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x121 = -3;
	volatile uint16_t x122 = 6761U;
	int16_t x123 = -1;
	int64_t x124 = -1670860807677372557LL;
	volatile int32_t t21 = 4;

    t21 = (x121%(x122!=(x123*x124)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x125 = -1;
	static int16_t x126 = INT16_MAX;
	volatile int16_t x127 = INT16_MIN;
	uint32_t x128 = 157U;
	static volatile int32_t t22 = 48;

    t22 = (x125%(x126!=(x127*x128)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x130 = INT16_MAX;
	uint32_t x131 = UINT32_MAX;
	uint32_t x132 = 629U;
	static uint32_t t23 = 3U;

    t23 = (x129%(x130!=(x131*x132)));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x133 = INT8_MAX;
	int8_t x135 = 4;
	uint32_t x136 = 26U;
	int32_t t24 = 1406;

    t24 = (x133%(x134!=(x135*x136)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x137 = UINT32_MAX;
	uint64_t x138 = UINT64_MAX;
	static int8_t x139 = INT8_MIN;
	static int8_t x140 = INT8_MAX;
	volatile uint32_t t25 = 208U;

    t25 = (x137%(x138!=(x139*x140)));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x141 = INT16_MAX;
	int8_t x143 = -1;
	int32_t x144 = 1394;
	static volatile int32_t t26 = 74289;

    t26 = (x141%(x142!=(x143*x144)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x145 = 26U;
	int16_t x146 = 7192;
	static int32_t t27 = 88;

    t27 = (x145%(x146!=(x147*x148)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x150 = -84;
	uint64_t x151 = 121518969142LLU;
	volatile uint16_t x152 = 2205U;
	int32_t t28 = -1;

    t28 = (x149%(x150!=(x151*x152)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x157 = -1;
	int8_t x158 = -1;
	int8_t x159 = INT8_MAX;
	uint8_t x160 = 46U;
	volatile int32_t t29 = 2659343;

    t29 = (x157%(x158!=(x159*x160)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x162 = INT8_MIN;
	int32_t x163 = 71;
	int16_t x164 = 2675;
	static int32_t t30 = -2736;

    t30 = (x161%(x162!=(x163*x164)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x165 = -1;
	volatile uint8_t x166 = 20U;
	uint64_t x167 = 204804LLU;
	int32_t x168 = INT32_MIN;
	volatile int32_t t31 = -219850;

    t31 = (x165%(x166!=(x167*x168)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x169 = -1;
	uint8_t x170 = 35U;
	uint16_t x171 = 13998U;
	volatile uint16_t x172 = 0U;
	volatile int32_t t32 = -20;

    t32 = (x169%(x170!=(x171*x172)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x173 = INT16_MAX;
	uint32_t x174 = 2017862979U;
	volatile int8_t x175 = -14;
	volatile uint64_t x176 = UINT64_MAX;

    t33 = (x173%(x174!=(x175*x176)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint32_t x177 = 854297U;
	int32_t x178 = 394;
	static uint8_t x179 = 52U;
	int32_t x180 = -1;
	uint32_t t34 = 1U;

    t34 = (x177%(x178!=(x179*x180)));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x181 = -1;
	int32_t x182 = INT32_MAX;
	static volatile int8_t x183 = INT8_MIN;
	uint8_t x184 = 6U;
	int32_t t35 = -3;

    t35 = (x181%(x182!=(x183*x184)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x189 = UINT8_MAX;
	int8_t x190 = 2;
	int32_t x191 = 0;
	static volatile int64_t x192 = INT64_MIN;
	volatile int32_t t36 = 0;

    t36 = (x189%(x190!=(x191*x192)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x193 = 28U;
	volatile uint32_t x194 = 105U;
	uint32_t x195 = UINT32_MAX;
	uint32_t x196 = 275U;
	int32_t t37 = 123249;

    t37 = (x193%(x194!=(x195*x196)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x198 = 8309007LL;
	int8_t x199 = INT8_MIN;
	volatile int64_t t38 = 4002032961091LL;

    t38 = (x197%(x198!=(x199*x200)));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x205 = -1;
	volatile int16_t x206 = -73;
	int32_t x208 = -1;
	int32_t t39 = 12;

    t39 = (x205%(x206!=(x207*x208)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x209 = -1;
	volatile int32_t x210 = INT32_MIN;
	uint64_t x211 = 38206LLU;
	volatile int32_t t40 = 3;

    t40 = (x209%(x210!=(x211*x212)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x213 = -1;
	volatile int16_t x214 = -682;
	volatile uint16_t x215 = UINT16_MAX;
	uint32_t x216 = UINT32_MAX;
	volatile int32_t t41 = -11;

    t41 = (x213%(x214!=(x215*x216)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x217 = INT16_MIN;
	int16_t x218 = INT16_MAX;
	volatile int8_t x219 = INT8_MIN;
	static uint16_t x220 = 230U;
	volatile int32_t t42 = -2;

    t42 = (x217%(x218!=(x219*x220)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x221 = 239LLU;
	int64_t x222 = INT64_MIN;
	volatile int8_t x223 = 0;

    t43 = (x221%(x222!=(x223*x224)));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x225 = 1U;
	uint16_t x226 = 15U;
	int8_t x227 = INT8_MAX;
	int64_t x228 = -1LL;
	int32_t t44 = 0;

    t44 = (x225%(x226!=(x227*x228)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x229 = -1;
	int64_t x230 = -77747LL;
	uint64_t x232 = 4022926801114LLU;

    t45 = (x229%(x230!=(x231*x232)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x233 = -3;
	static int16_t x235 = -3160;
	static volatile int8_t x236 = INT8_MIN;
	int32_t t46 = 48;

    t46 = (x233%(x234!=(x235*x236)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint64_t x237 = 242LLU;
	uint8_t x239 = 2U;
	int64_t x240 = -1LL;
	volatile uint64_t t47 = 3176LLU;

    t47 = (x237%(x238!=(x239*x240)));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x241 = 25366565132LLU;
	int32_t x242 = INT32_MIN;
	uint32_t x243 = 35041984U;
	uint16_t x244 = 282U;
	volatile uint64_t t48 = 2705753537LLU;

    t48 = (x241%(x242!=(x243*x244)));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x245 = INT8_MIN;
	int64_t x246 = -1LL;
	int32_t x247 = 174295088;
	int32_t t49 = 79379;

    t49 = (x245%(x246!=(x247*x248)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x249 = 2036U;
	int8_t x250 = INT8_MIN;
	int8_t x252 = INT8_MAX;
	uint32_t t50 = 58919615U;

    t50 = (x249%(x250!=(x251*x252)));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x253 = INT8_MIN;
	int64_t x254 = -1LL;
	uint32_t x255 = UINT32_MAX;
	int32_t x256 = -361;
	static int32_t t51 = 11;

    t51 = (x253%(x254!=(x255*x256)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x257 = UINT16_MAX;
	int8_t x258 = -34;
	int32_t x260 = 205;
	int32_t t52 = -634;

    t52 = (x257%(x258!=(x259*x260)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x262 = INT64_MAX;
	int8_t x263 = INT8_MAX;
	static uint8_t x264 = 4U;
	int64_t t53 = -3143220730356534LL;

    t53 = (x261%(x262!=(x263*x264)));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x265 = 0U;
	int16_t x267 = -1;
	volatile int16_t x268 = -4444;
	volatile int32_t t54 = -87;

    t54 = (x265%(x266!=(x267*x268)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x269 = 8;
	volatile int16_t x271 = -6370;
	uint8_t x272 = 1U;
	int32_t t55 = 24292;

    t55 = (x269%(x270!=(x271*x272)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint64_t x277 = 4441426595628380LLU;
	volatile int16_t x279 = -1;
	volatile int32_t x280 = -337120;
	uint64_t t56 = 2030LLU;

    t56 = (x277%(x278!=(x279*x280)));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x281 = -3;
	int8_t x282 = INT8_MAX;
	uint64_t x283 = 33988044054552LLU;
	int8_t x284 = -1;
	volatile int32_t t57 = 0;

    t57 = (x281%(x282!=(x283*x284)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x285 = -1;
	static int16_t x286 = INT16_MIN;
	int8_t x287 = INT8_MIN;
	volatile int8_t x288 = INT8_MIN;
	int32_t t58 = 6711;

    t58 = (x285%(x286!=(x287*x288)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x297 = INT32_MIN;
	int16_t x299 = INT16_MIN;
	uint32_t x300 = UINT32_MAX;
	volatile int32_t t59 = 47;

    t59 = (x297%(x298!=(x299*x300)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x301 = UINT8_MAX;
	volatile uint64_t x304 = 45326734397LLU;

    t60 = (x301%(x302!=(x303*x304)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x305 = 68568348510669086LLU;
	int8_t x307 = INT8_MIN;
	uint64_t x308 = 436229LLU;

    t61 = (x305%(x306!=(x307*x308)));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x313 = 1145U;
	int64_t x315 = 262993512936LL;
	int16_t x316 = INT16_MAX;
	int32_t t62 = 314684604;

    t62 = (x313%(x314!=(x315*x316)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x317 = INT32_MIN;
	volatile int16_t x318 = -14;
	uint8_t x319 = 1U;
	static volatile int16_t x320 = INT16_MIN;

    t63 = (x317%(x318!=(x319*x320)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x325 = INT16_MIN;
	volatile int16_t x326 = 496;
	uint32_t x327 = 0U;
	int32_t x328 = -1;

    t64 = (x325%(x326!=(x327*x328)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x329 = -5020260LL;
	volatile uint8_t x331 = 6U;
	int64_t t65 = 1748410LL;

    t65 = (x329%(x330!=(x331*x332)));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x333 = INT8_MIN;
	uint32_t x335 = 1660U;
	int8_t x336 = -1;
	volatile int32_t t66 = 21120434;

    t66 = (x333%(x334!=(x335*x336)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x337 = 0U;
	int32_t x338 = INT32_MIN;
	int8_t x339 = -15;
	volatile int64_t x340 = -720846231LL;
	volatile int32_t t67 = 0;

    t67 = (x337%(x338!=(x339*x340)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x341 = 6651U;
	uint8_t x344 = UINT8_MAX;

    t68 = (x341%(x342!=(x343*x344)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x345 = 9726782060555354LLU;
	volatile uint64_t x347 = 1066269430LLU;
	uint64_t x348 = 4442699019927033183LLU;
	volatile uint64_t t69 = 27052LLU;

    t69 = (x345%(x346!=(x347*x348)));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int8_t x349 = INT8_MIN;
	static int64_t x351 = -1LL;
	static uint16_t x352 = UINT16_MAX;

    t70 = (x349%(x350!=(x351*x352)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x357 = INT8_MIN;
	volatile int32_t x358 = -4601353;
	int16_t x359 = INT16_MIN;
	static int16_t x360 = INT16_MIN;
	int32_t t71 = -140;

    t71 = (x357%(x358!=(x359*x360)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x361 = -10;
	int8_t x362 = INT8_MIN;
	static int8_t x363 = 1;
	volatile int16_t x364 = 4;

    t72 = (x361%(x362!=(x363*x364)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x365 = UINT32_MAX;
	uint8_t x366 = 10U;
	int64_t x367 = -1LL;
	uint32_t t73 = 0U;

    t73 = (x365%(x366!=(x367*x368)));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x370 = INT32_MIN;
	uint64_t x371 = 58476182454810491LLU;
	int32_t t74 = 269339610;

    t74 = (x369%(x370!=(x371*x372)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x373 = INT16_MIN;
	int32_t x374 = INT32_MIN;
	int32_t x376 = -28965;
	int32_t t75 = -1;

    t75 = (x373%(x374!=(x375*x376)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x385 = UINT64_MAX;
	uint32_t x386 = 15U;
	volatile int16_t x387 = -238;
	int64_t x388 = -1573971220310747LL;
	volatile uint64_t t76 = 3580446606LLU;

    t76 = (x385%(x386!=(x387*x388)));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x389 = -2;
	int16_t x391 = INT16_MIN;
	int16_t x392 = INT16_MAX;
	int32_t t77 = -464467826;

    t77 = (x389%(x390!=(x391*x392)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x401 = 914;
	uint32_t x402 = 469316U;
	uint64_t x403 = 13LLU;
	int16_t x404 = 154;
	int32_t t78 = 102900965;

    t78 = (x401%(x402!=(x403*x404)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x405 = INT16_MIN;
	volatile int8_t x407 = 0;
	static int8_t x408 = INT8_MIN;

    t79 = (x405%(x406!=(x407*x408)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x417 = INT8_MIN;
	int16_t x419 = INT16_MIN;
	int16_t x420 = 63;

    t80 = (x417%(x418!=(x419*x420)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x421 = UINT32_MAX;
	volatile int32_t x423 = 6330;
	uint16_t x424 = 7U;

    t81 = (x421%(x422!=(x423*x424)));

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x425 = UINT32_MAX;
	int8_t x428 = 1;
	static uint32_t t82 = 1293335U;

    t82 = (x425%(x426!=(x427*x428)));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x430 = INT64_MIN;
	static int64_t x431 = 13LL;
	int16_t x432 = 4;
	int32_t t83 = 3;

    t83 = (x429%(x430!=(x431*x432)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x437 = 59;
	volatile uint64_t x438 = 31935LLU;
	int8_t x439 = -31;
	static int8_t x440 = INT8_MAX;

    t84 = (x437%(x438!=(x439*x440)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x449 = INT16_MIN;
	static volatile int16_t x450 = 6858;
	int8_t x451 = -1;
	int32_t x452 = -1;
	int32_t t85 = 344850917;

    t85 = (x449%(x450!=(x451*x452)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x461 = 13569U;
	int64_t x462 = INT64_MIN;
	int32_t x464 = -1;
	volatile int32_t t86 = -117;

    t86 = (x461%(x462!=(x463*x464)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x465 = 196889LLU;
	static volatile int16_t x466 = INT16_MAX;
	int16_t x467 = 6710;
	static uint32_t x468 = 824140460U;

    t87 = (x465%(x466!=(x467*x468)));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x469 = INT16_MAX;
	static volatile uint32_t x470 = 52943U;
	int8_t x471 = -1;
	int16_t x472 = INT16_MAX;
	int32_t t88 = 38582;

    t88 = (x469%(x470!=(x471*x472)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x477 = 15;
	static uint64_t x479 = UINT64_MAX;
	volatile int8_t x480 = INT8_MAX;

    t89 = (x477%(x478!=(x479*x480)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x481 = 5724984U;
	volatile uint32_t x483 = 136971U;
	uint8_t x484 = 7U;
	static uint32_t t90 = 9299516U;

    t90 = (x481%(x482!=(x483*x484)));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x485 = INT64_MIN;
	volatile int8_t x486 = INT8_MAX;
	static uint16_t x487 = UINT16_MAX;
	int64_t x488 = -1LL;
	int64_t t91 = -3LL;

    t91 = (x485%(x486!=(x487*x488)));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x494 = 0U;
	volatile int32_t x495 = INT32_MIN;
	int64_t x496 = 3851548342LL;
	volatile int32_t t92 = 134987540;

    t92 = (x493%(x494!=(x495*x496)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x497 = 4;
	int16_t x498 = INT16_MIN;
	int16_t x499 = 503;
	int8_t x500 = INT8_MIN;
	volatile int32_t t93 = 26029;

    t93 = (x497%(x498!=(x499*x500)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x501 = UINT64_MAX;
	uint16_t x502 = UINT16_MAX;
	int64_t x504 = 2607179416998LL;
	uint64_t t94 = 6LLU;

    t94 = (x501%(x502!=(x503*x504)));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x505 = 7;
	uint64_t x506 = 51281554049606827LLU;
	uint64_t x507 = 12541976370497014LLU;
	volatile int32_t x508 = -1;
	static volatile int32_t t95 = 44687;

    t95 = (x505%(x506!=(x507*x508)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x509 = INT64_MAX;
	volatile int8_t x510 = INT8_MIN;
	int8_t x511 = 5;
	uint32_t x512 = 754U;
	volatile int64_t t96 = 711LL;

    t96 = (x509%(x510!=(x511*x512)));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x517 = UINT64_MAX;
	int16_t x518 = -1;
	int8_t x520 = INT8_MIN;
	volatile uint64_t t97 = 5930044LLU;

    t97 = (x517%(x518!=(x519*x520)));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x521 = -116483955739678741LL;
	uint64_t x522 = 166966096240061LLU;
	static volatile int16_t x523 = INT16_MIN;
	volatile int8_t x524 = INT8_MIN;
	volatile int64_t t98 = 10289821036LL;

    t98 = (x521%(x522!=(x523*x524)));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x525 = INT32_MAX;
	int64_t x526 = -1LL;
	uint16_t x527 = 3169U;
	int32_t t99 = -2852;

    t99 = (x525%(x526!=(x527*x528)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x529 = 0U;
	int8_t x530 = 0;
	uint8_t x532 = UINT8_MAX;
	int32_t t100 = -146401;

    t100 = (x529%(x530!=(x531*x532)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x533 = 100U;
	uint64_t x535 = 70436LLU;
	static int16_t x536 = INT16_MIN;
	int32_t t101 = 74594;

    t101 = (x533%(x534!=(x535*x536)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x538 = 14U;

    t102 = (x537%(x538!=(x539*x540)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x541 = INT32_MIN;
	int8_t x542 = -1;
	int64_t x543 = -88941413235384LL;
	volatile int32_t t103 = -1949;

    t103 = (x541%(x542!=(x543*x544)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x545 = -1;
	volatile int32_t x546 = INT32_MAX;
	static int64_t x548 = -62LL;
	static volatile int32_t t104 = 810273845;

    t104 = (x545%(x546!=(x547*x548)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x549 = INT16_MIN;
	uint16_t x550 = UINT16_MAX;
	volatile uint64_t x551 = UINT64_MAX;
	int64_t x552 = -1LL;
	int32_t t105 = 3384;

    t105 = (x549%(x550!=(x551*x552)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x565 = -359;
	int16_t x566 = -1;
	volatile uint8_t x567 = 46U;
	volatile int16_t x568 = -5702;
	volatile int32_t t106 = -31985;

    t106 = (x565%(x566!=(x567*x568)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x569 = UINT16_MAX;
	int64_t x570 = INT64_MIN;
	int32_t t107 = -26901;

    t107 = (x569%(x570!=(x571*x572)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x573 = INT16_MIN;
	volatile int32_t x574 = INT32_MIN;
	uint64_t x575 = 1LLU;
	int32_t t108 = 1;

    t108 = (x573%(x574!=(x575*x576)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x577 = 445U;
	int8_t x578 = INT8_MIN;
	volatile uint64_t x579 = 39LLU;
	int8_t x580 = INT8_MIN;

    t109 = (x577%(x578!=(x579*x580)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x581 = UINT32_MAX;
	int16_t x583 = INT16_MIN;
	int64_t x584 = -1549947182LL;
	volatile uint32_t t110 = 230U;

    t110 = (x581%(x582!=(x583*x584)));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x585 = UINT64_MAX;
	int16_t x586 = INT16_MAX;
	uint64_t x587 = UINT64_MAX;
	volatile uint64_t t111 = 609309230403965LLU;

    t111 = (x585%(x586!=(x587*x588)));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x593 = UINT16_MAX;
	int8_t x594 = -56;
	volatile uint16_t x595 = UINT16_MAX;

    t112 = (x593%(x594!=(x595*x596)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x598 = 783U;
	volatile uint32_t x599 = 1533008U;
	uint16_t x600 = 876U;
	uint64_t t113 = 7272540054366LLU;

    t113 = (x597%(x598!=(x599*x600)));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x602 = 360468939U;
	int64_t x603 = 247359458877423LL;
	static int16_t x604 = INT16_MIN;
	volatile int32_t t114 = -3;

    t114 = (x601%(x602!=(x603*x604)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x605 = INT64_MIN;
	int8_t x606 = -1;
	uint16_t x607 = 245U;
	uint64_t x608 = 6LLU;
	volatile int64_t t115 = 2LL;

    t115 = (x605%(x606!=(x607*x608)));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x609 = INT16_MIN;
	int32_t x610 = -1;
	int8_t x611 = -1;
	uint16_t x612 = 1494U;

    t116 = (x609%(x610!=(x611*x612)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint64_t x617 = 115285LLU;
	int16_t x618 = 778;
	uint64_t x619 = UINT64_MAX;
	uint8_t x620 = 45U;
	volatile uint64_t t117 = 10094003161086LLU;

    t117 = (x617%(x618!=(x619*x620)));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x621 = -1;
	int32_t x623 = -1;
	volatile int32_t t118 = 1;

    t118 = (x621%(x622!=(x623*x624)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x629 = INT8_MIN;
	uint8_t x631 = 91U;
	int16_t x632 = -76;
	static volatile int32_t t119 = 172;

    t119 = (x629%(x630!=(x631*x632)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x633 = INT16_MIN;
	uint64_t x634 = 214767956544LLU;
	int8_t x635 = -1;
	int32_t x636 = -31;
	int32_t t120 = -224032;

    t120 = (x633%(x634!=(x635*x636)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x639 = -1;
	int8_t x640 = INT8_MAX;

    t121 = (x637%(x638!=(x639*x640)));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x641 = -2;
	uint64_t x642 = 432LLU;
	int16_t x643 = -1;

    t122 = (x641%(x642!=(x643*x644)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x645 = -1LL;
	uint32_t x646 = 14825001U;
	int8_t x647 = 0;
	int16_t x648 = -1;
	volatile int64_t t123 = -3579LL;

    t123 = (x645%(x646!=(x647*x648)));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x649 = UINT32_MAX;
	int16_t x650 = 14273;
	static int32_t x651 = -1;
	uint32_t t124 = 11638U;

    t124 = (x649%(x650!=(x651*x652)));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x657 = 1693570U;
	uint64_t x659 = 6547834LLU;
	uint32_t x660 = 0U;
	volatile uint32_t t125 = 12129948U;

    t125 = (x657%(x658!=(x659*x660)));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x661 = 0U;
	int32_t x662 = -1;
	int8_t x663 = -1;
	static int64_t x664 = -1024925280293LL;
	int32_t t126 = 15546;

    t126 = (x661%(x662!=(x663*x664)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x665 = INT16_MIN;
	int64_t x666 = -65157LL;
	volatile uint8_t x667 = 89U;
	uint8_t x668 = 14U;
	static volatile int32_t t127 = -19;

    t127 = (x665%(x666!=(x667*x668)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x671 = 1119655964301794616LL;
	uint64_t x672 = UINT64_MAX;
	volatile int64_t t128 = 450144LL;

    t128 = (x669%(x670!=(x671*x672)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x673 = INT8_MIN;
	int16_t x674 = INT16_MAX;
	int64_t x675 = -3711642LL;
	volatile int32_t t129 = -1325506;

    t129 = (x673%(x674!=(x675*x676)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x685 = 0;
	int64_t x686 = -568LL;
	uint16_t x687 = 52U;
	static int16_t x688 = INT16_MIN;

    t130 = (x685%(x686!=(x687*x688)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x694 = -85;
	static uint64_t x696 = 14930LLU;
	volatile int64_t t131 = 43438952807774LL;

    t131 = (x693%(x694!=(x695*x696)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x697 = INT64_MAX;
	uint8_t x698 = 0U;
	int16_t x700 = 273;

    t132 = (x697%(x698!=(x699*x700)));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint64_t x701 = 90034284506LLU;
	int16_t x702 = -1;
	int8_t x703 = INT8_MIN;
	static int8_t x704 = 0;
	volatile uint64_t t133 = 1LLU;

    t133 = (x701%(x702!=(x703*x704)));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x709 = INT16_MIN;
	volatile int32_t x710 = -1;
	int16_t x711 = INT16_MIN;
	int16_t x712 = 4;
	volatile int32_t t134 = -367;

    t134 = (x709%(x710!=(x711*x712)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x713 = -1070257053LL;
	static uint64_t x714 = 2405LLU;
	int8_t x715 = 20;
	static int8_t x716 = -62;
	volatile int64_t t135 = -873LL;

    t135 = (x713%(x714!=(x715*x716)));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x722 = 0LL;
	int64_t x723 = INT64_MIN;
	uint16_t x724 = 1U;
	volatile int32_t t136 = -12;

    t136 = (x721%(x722!=(x723*x724)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x738 = -1;
	static volatile uint8_t x739 = UINT8_MAX;
	int16_t x740 = 1;
	volatile uint32_t t137 = 423572973U;

    t137 = (x737%(x738!=(x739*x740)));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x742 = INT16_MIN;
	volatile uint64_t x743 = UINT64_MAX;
	int8_t x744 = -1;
	int32_t t138 = 23;

    t138 = (x741%(x742!=(x743*x744)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x745 = -1;
	int64_t x746 = -1LL;
	int16_t x747 = INT16_MAX;

    t139 = (x745%(x746!=(x747*x748)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x749 = UINT8_MAX;
	int32_t x750 = INT32_MIN;
	uint8_t x751 = 3U;
	int64_t x752 = -21LL;
	volatile int32_t t140 = -2002;

    t140 = (x749%(x750!=(x751*x752)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x753 = INT16_MAX;
	int16_t x754 = INT16_MAX;
	uint64_t x755 = 57230377608504325LLU;
	uint32_t x756 = 258U;

    t141 = (x753%(x754!=(x755*x756)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x757 = 7135U;
	int32_t x758 = -1;
	int32_t x759 = -1;
	static int64_t x760 = INT64_MAX;
	volatile int32_t t142 = 3939;

    t142 = (x757%(x758!=(x759*x760)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x761 = -1;
	int8_t x762 = 4;
	int16_t x763 = -6739;
	static uint8_t x764 = 4U;
	int32_t t143 = 1;

    t143 = (x761%(x762!=(x763*x764)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x773 = INT64_MAX;
	static int16_t x774 = INT16_MAX;
	int16_t x775 = -3;
	static int16_t x776 = INT16_MIN;
	volatile int64_t t144 = -1047168LL;

    t144 = (x773%(x774!=(x775*x776)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x781 = INT8_MAX;
	static uint32_t x782 = UINT32_MAX;
	static uint32_t x783 = UINT32_MAX;
	volatile int32_t t145 = 136927;

    t145 = (x781%(x782!=(x783*x784)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x786 = INT8_MAX;
	int32_t x787 = -1;
	volatile int16_t x788 = -71;
	uint32_t t146 = 13092U;

    t146 = (x785%(x786!=(x787*x788)));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x789 = -1;
	static int64_t x790 = INT64_MIN;
	static volatile int32_t t147 = -1;

    t147 = (x789%(x790!=(x791*x792)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x800 = INT8_MIN;
	volatile int32_t t148 = -162676;

    t148 = (x797%(x798!=(x799*x800)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x813 = INT64_MAX;
	int64_t x814 = INT64_MIN;
	static int64_t x815 = INT64_MAX;
	static int8_t x816 = -1;
	int64_t t149 = 8LL;

    t149 = (x813%(x814!=(x815*x816)));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x817 = INT32_MAX;
	static uint32_t x818 = 311891232U;
	static uint8_t x819 = 0U;
	int32_t t150 = 49899;

    t150 = (x817%(x818!=(x819*x820)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x821 = 233283438250LL;
	uint16_t x822 = UINT16_MAX;
	int8_t x823 = 11;
	volatile int64_t t151 = 2897LL;

    t151 = (x821%(x822!=(x823*x824)));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x825 = 1328822U;
	int64_t x826 = -22062999288LL;
	volatile int32_t x827 = INT32_MAX;
	static int16_t x828 = -1;
	volatile uint32_t t152 = 187307691U;

    t152 = (x825%(x826!=(x827*x828)));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x829 = INT8_MIN;
	uint32_t x832 = UINT32_MAX;
	int32_t t153 = -14;

    t153 = (x829%(x830!=(x831*x832)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x853 = 446016U;
	static volatile int16_t x854 = INT16_MIN;
	int32_t x855 = -1;
	volatile uint32_t t154 = 11U;

    t154 = (x853%(x854!=(x855*x856)));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x857 = 211721565U;
	int64_t x858 = -422831870LL;
	static int64_t x859 = 128274101972178LL;
	uint32_t t155 = 1871621284U;

    t155 = (x857%(x858!=(x859*x860)));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x861 = -1;
	int64_t x862 = INT64_MAX;
	uint32_t x864 = 371956U;
	static int32_t t156 = 29672;

    t156 = (x861%(x862!=(x863*x864)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x866 = INT16_MAX;
	int32_t x867 = INT32_MAX;
	int64_t x868 = 1507621403LL;
	static int32_t t157 = 0;

    t157 = (x865%(x866!=(x867*x868)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x873 = UINT16_MAX;
	int64_t x874 = -257027549616048LL;
	uint64_t x875 = 8300180569LLU;
	static uint16_t x876 = 1U;
	int32_t t158 = 1492;

    t158 = (x873%(x874!=(x875*x876)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x881 = UINT16_MAX;
	int16_t x882 = -1;
	int64_t x883 = 0LL;
	static uint16_t x884 = 24U;
	int32_t t159 = -550017;

    t159 = (x881%(x882!=(x883*x884)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x885 = 20820U;
	int32_t x887 = -3458;
	volatile uint64_t x888 = 81211541855LLU;

    t160 = (x885%(x886!=(x887*x888)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x889 = 8733008159595LLU;
	static int64_t x891 = 193433846711464866LL;
	int64_t x892 = -1LL;

    t161 = (x889%(x890!=(x891*x892)));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x893 = -10248463;
	int16_t x894 = -1;
	volatile uint64_t x895 = UINT64_MAX;
	int32_t x896 = 2127074;
	volatile int32_t t162 = 695149;

    t162 = (x893%(x894!=(x895*x896)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x897 = 61;
	int8_t x898 = INT8_MIN;
	int8_t x899 = 3;
	int16_t x900 = 3;

    t163 = (x897%(x898!=(x899*x900)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x905 = 352688U;
	uint8_t x906 = UINT8_MAX;
	int32_t x907 = INT32_MAX;
	uint64_t x908 = 210853LLU;
	volatile uint32_t t164 = 10534U;

    t164 = (x905%(x906!=(x907*x908)));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x910 = 116U;
	volatile uint32_t x911 = 132502U;
	int16_t x912 = -1;

    t165 = (x909%(x910!=(x911*x912)));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x914 = INT64_MAX;
	static uint64_t x915 = 114658442LLU;
	volatile int64_t x916 = -1LL;
	volatile int64_t t166 = 1022544284136489LL;

    t166 = (x913%(x914!=(x915*x916)));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x917 = 8564;
	int32_t x918 = 1720;
	int16_t x919 = -8688;
	static uint64_t x920 = 5668002396390LLU;
	volatile int32_t t167 = -377;

    t167 = (x917%(x918!=(x919*x920)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x929 = UINT64_MAX;
	static int32_t x931 = 345028;
	int32_t x932 = -1;
	uint64_t t168 = 2061627014164LLU;

    t168 = (x929%(x930!=(x931*x932)));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x939 = 6718416U;
	int8_t x940 = INT8_MIN;
	static int32_t t169 = -196202;

    t169 = (x937%(x938!=(x939*x940)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x949 = UINT64_MAX;
	static int32_t x950 = INT32_MAX;
	uint64_t x952 = 2349LLU;

    t170 = (x949%(x950!=(x951*x952)));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x954 = 2765U;
	static int16_t x955 = -1;
	static int8_t x956 = 1;
	volatile uint32_t t171 = 146551U;

    t171 = (x953%(x954!=(x955*x956)));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x958 = INT32_MIN;
	static int16_t x959 = INT16_MAX;
	int16_t x960 = INT16_MIN;
	static volatile int32_t t172 = 77;

    t172 = (x957%(x958!=(x959*x960)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x965 = UINT8_MAX;
	volatile uint16_t x966 = 1877U;
	int8_t x968 = 57;

    t173 = (x965%(x966!=(x967*x968)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x969 = UINT8_MAX;
	int32_t x970 = INT32_MIN;
	volatile int32_t x971 = -521969;
	volatile uint64_t x972 = 1299658327LLU;
	volatile int32_t t174 = -1195293;

    t174 = (x969%(x970!=(x971*x972)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x974 = UINT64_MAX;
	int64_t x975 = INT64_MIN;
	uint64_t x976 = 202611148044538012LLU;
	volatile uint32_t t175 = 117793U;

    t175 = (x973%(x974!=(x975*x976)));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x981 = 8100LL;
	int64_t x982 = -3124895698131018544LL;
	volatile uint32_t x983 = UINT32_MAX;
	int16_t x984 = -1;

    t176 = (x981%(x982!=(x983*x984)));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x985 = 42U;
	int16_t x987 = INT16_MIN;
	volatile int8_t x988 = INT8_MIN;
	int32_t t177 = 34;

    t177 = (x985%(x986!=(x987*x988)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x990 = -4835580;
	volatile int16_t x991 = INT16_MIN;
	volatile int64_t x992 = 2461744LL;

    t178 = (x989%(x990!=(x991*x992)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x997 = UINT8_MAX;
	int16_t x998 = -1;
	static int32_t x999 = 7939;
	volatile int8_t x1000 = INT8_MIN;
	int32_t t179 = -369976127;

    t179 = (x997%(x998!=(x999*x1000)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1001 = INT16_MIN;
	uint32_t x1003 = 463783U;
	uint32_t x1004 = 253U;
	static int32_t t180 = -1091;

    t180 = (x1001%(x1002!=(x1003*x1004)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1009 = -6LL;
	int8_t x1010 = -1;
	int64_t t181 = -1104LL;

    t181 = (x1009%(x1010!=(x1011*x1012)));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1016 = INT8_MAX;
	int64_t t182 = 1LL;

    t182 = (x1013%(x1014!=(x1015*x1016)));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1017 = 4U;
	int16_t x1018 = -1;
	int8_t x1019 = -1;
	static uint32_t t183 = 159290091U;

    t183 = (x1017%(x1018!=(x1019*x1020)));

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1021 = 2540288677326LLU;
	volatile uint32_t x1022 = UINT32_MAX;
	uint8_t x1023 = UINT8_MAX;
	volatile uint64_t t184 = 63011LLU;

    t184 = (x1021%(x1022!=(x1023*x1024)));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1025 = INT64_MIN;
	static int8_t x1027 = 0;
	static int32_t x1028 = 179987563;
	volatile int64_t t185 = -16355829050546LL;

    t185 = (x1025%(x1026!=(x1027*x1028)));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1029 = INT16_MIN;
	int16_t x1030 = -64;
	volatile uint16_t x1031 = 22131U;
	volatile int16_t x1032 = INT16_MAX;
	volatile int32_t t186 = 1;

    t186 = (x1029%(x1030!=(x1031*x1032)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x1033 = 1292U;
	int64_t x1034 = INT64_MIN;
	uint16_t x1035 = 3043U;
	uint32_t x1036 = 31139179U;
	volatile int32_t t187 = -477386;

    t187 = (x1033%(x1034!=(x1035*x1036)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x1037 = -5;
	uint64_t x1038 = 3LLU;
	int16_t x1040 = -8018;
	static volatile int32_t t188 = 766766017;

    t188 = (x1037%(x1038!=(x1039*x1040)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1041 = 1;
	uint16_t x1042 = 466U;
	int32_t x1043 = -1;
	static int32_t x1044 = -1;
	volatile int32_t t189 = 88789;

    t189 = (x1041%(x1042!=(x1043*x1044)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1045 = 989686LLU;
	static volatile int32_t x1046 = -5;
	static uint64_t x1047 = 3371114816LLU;
	int8_t x1048 = 1;
	static volatile uint64_t t190 = 5973628LLU;

    t190 = (x1045%(x1046!=(x1047*x1048)));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x1049 = 85LLU;
	volatile uint32_t x1050 = UINT32_MAX;
	int8_t x1051 = -1;
	uint8_t x1052 = 4U;
	uint64_t t191 = 427798LLU;

    t191 = (x1049%(x1050!=(x1051*x1052)));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x1053 = 27U;
	static int16_t x1054 = INT16_MIN;
	uint8_t x1055 = 7U;
	volatile int32_t t192 = 26;

    t192 = (x1053%(x1054!=(x1055*x1056)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x1057 = INT8_MAX;
	uint32_t x1058 = UINT32_MAX;
	uint16_t x1059 = 16659U;
	volatile int16_t x1060 = -1;
	volatile int32_t t193 = -188598852;

    t193 = (x1057%(x1058!=(x1059*x1060)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1063 = -1LL;
	static int16_t x1064 = -6926;

    t194 = (x1061%(x1062!=(x1063*x1064)));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x1065 = -1;
	static int16_t x1066 = INT16_MAX;
	int64_t x1067 = INT64_MIN;
	uint64_t x1068 = UINT64_MAX;
	int32_t t195 = -227317422;

    t195 = (x1065%(x1066!=(x1067*x1068)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1069 = INT64_MIN;
	int64_t x1070 = INT64_MAX;
	uint64_t x1072 = 22LLU;
	volatile int64_t t196 = -21LL;

    t196 = (x1069%(x1070!=(x1071*x1072)));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x1073 = INT64_MIN;
	int16_t x1074 = INT16_MIN;
	int16_t x1075 = 127;
	uint64_t x1076 = 155035658808LLU;
	static volatile int64_t t197 = 0LL;

    t197 = (x1073%(x1074!=(x1075*x1076)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1081 = INT64_MIN;
	uint16_t x1082 = 77U;
	static int16_t x1083 = -5214;
	volatile int64_t t198 = -4145728732LL;

    t198 = (x1081%(x1082!=(x1083*x1084)));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1085 = INT64_MIN;
	uint8_t x1086 = UINT8_MAX;
	volatile int64_t x1087 = -491222512080LL;
	volatile int32_t x1088 = -1;

    t199 = (x1085%(x1086!=(x1087*x1088)));

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

