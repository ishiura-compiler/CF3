
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

int8_t x4 = 0;
uint16_t x6 = 131U;
volatile int32_t t1 = -1236;
volatile int16_t x13 = -505;
static int8_t x14 = -1;
uint8_t x15 = 47U;
volatile uint8_t x22 = 0U;
volatile int32_t t5 = -47430;
int8_t x27 = INT8_MAX;
uint16_t x38 = UINT16_MAX;
static volatile int32_t t7 = -3923;
static uint8_t x53 = 15U;
static int8_t x58 = INT8_MAX;
uint32_t x62 = 5394U;
static uint16_t x71 = 12U;
volatile int32_t t16 = 216011;
int16_t x81 = INT16_MAX;
uint8_t x84 = UINT8_MAX;
static volatile uint32_t x87 = 54323U;
volatile int32_t t19 = 1631;
int16_t x105 = -1;
int8_t x108 = INT8_MIN;
static uint32_t x111 = 7110008U;
static volatile int32_t t23 = -598691;
int16_t x122 = 0;
int8_t x137 = INT8_MAX;
uint8_t x138 = 1U;
int32_t t25 = -72384;
int64_t x143 = -1LL;
static int16_t x144 = INT16_MIN;
volatile int32_t t26 = -1757877;
uint16_t x146 = UINT16_MAX;
int64_t x151 = -150768LL;
uint64_t x162 = 32594119675LLU;
uint64_t x174 = 220210528637LLU;
int8_t x182 = INT8_MIN;
volatile uint16_t x192 = 2U;
static uint64_t x199 = 554228LLU;
static volatile uint64_t x211 = 554745LLU;
volatile int16_t x216 = INT16_MIN;
int8_t x217 = INT8_MIN;
uint32_t x219 = 32040U;
static volatile int16_t x220 = 1069;
int8_t x226 = -1;
int64_t x237 = -7LL;
static int64_t x261 = 778086LL;
int16_t x268 = INT16_MIN;
uint64_t x270 = 58539379680064LLU;
volatile int16_t x272 = -1;
int8_t x292 = INT8_MAX;
int8_t x296 = INT8_MIN;
int8_t x307 = INT8_MAX;
uint64_t x313 = 727530415LLU;
int32_t x321 = INT32_MIN;
int16_t x329 = 6477;
volatile int32_t t57 = 53881188;
volatile int64_t x334 = -301802LL;
uint64_t x335 = UINT64_MAX;
int32_t x353 = INT32_MIN;
int16_t x355 = INT16_MIN;
static uint64_t x365 = UINT64_MAX;
volatile uint64_t x383 = UINT64_MAX;
volatile int8_t x384 = INT8_MIN;
int32_t x389 = 0;
volatile int32_t t71 = 5282308;
int32_t t73 = 2590593;
int64_t x401 = 262872528334058305LL;
volatile int64_t x407 = -1LL;
uint8_t x408 = 28U;
uint32_t x414 = UINT32_MAX;
uint64_t x422 = 3319LLU;
static int64_t x434 = -1LL;
int16_t x448 = 5;
volatile int32_t t82 = 53626;
int8_t x453 = 1;
int16_t x461 = INT16_MIN;
volatile uint16_t x466 = 13U;
static int32_t t86 = -198;
volatile uint64_t x476 = UINT64_MAX;
static volatile int32_t x484 = INT32_MAX;
int8_t x495 = INT8_MIN;
int64_t x502 = -1LL;
uint16_t x503 = 287U;
volatile int32_t t91 = 62834;
int64_t x508 = -3041261000235903203LL;
int16_t x510 = INT16_MIN;
int32_t t94 = -20;
static uint8_t x528 = 15U;
volatile int32_t t95 = -43258758;
int64_t x533 = INT64_MIN;
uint32_t x535 = 2269U;
int32_t t96 = 122193111;
volatile int8_t x538 = -15;
int8_t x544 = 1;
volatile int32_t t99 = 6515;
int8_t x561 = INT8_MIN;
int8_t x562 = -1;
int32_t t102 = -2;
static volatile int32_t t103 = 793576868;
static int32_t x576 = INT32_MIN;
uint64_t x581 = 123131682509LLU;
uint32_t x582 = UINT32_MAX;
static int32_t t107 = 0;
static int32_t x588 = INT32_MIN;
int32_t t108 = -27106095;
uint64_t x589 = 1950520080703165502LLU;
static int32_t t109 = 57;
uint16_t x600 = 3U;
uint8_t x609 = 36U;
static int8_t x614 = INT8_MAX;
uint64_t x618 = UINT64_MAX;
volatile uint64_t x620 = 700554LLU;
volatile int32_t x626 = -1;
int32_t t114 = 1424413;
int8_t x629 = 15;
uint32_t x630 = 43U;
static volatile int32_t t116 = -12962150;
volatile int32_t t117 = -440;
volatile int64_t x643 = 26408663050LL;
int32_t t122 = -256336089;
int64_t x678 = -1LL;
int32_t x680 = INT32_MAX;
static volatile uint32_t x687 = 110879U;
int32_t t127 = -713797778;
int32_t t129 = 58544526;
int16_t x703 = INT16_MIN;
static uint64_t x711 = UINT64_MAX;
static volatile int8_t x712 = INT8_MAX;
volatile int32_t t132 = -31208949;
uint64_t x715 = 23LLU;
int32_t t134 = -2073195;
uint32_t x758 = 514U;
int64_t x767 = 3LL;
static volatile int32_t t146 = 205;
int8_t x774 = INT8_MIN;
uint32_t x790 = 397U;
uint8_t x794 = 9U;
static uint8_t x798 = 20U;
static volatile int32_t t151 = 236991707;
static uint16_t x819 = UINT16_MAX;
uint32_t x821 = UINT32_MAX;
int8_t x825 = 1;
volatile int32_t t156 = -85665801;
static uint32_t x829 = UINT32_MAX;
static volatile int64_t x831 = INT64_MIN;
int16_t x833 = -2639;
uint8_t x834 = UINT8_MAX;
static uint8_t x841 = 17U;
static uint16_t x842 = UINT16_MAX;
static int32_t x845 = INT32_MIN;
volatile int32_t x848 = -1;
static int64_t x856 = -1LL;
uint32_t x857 = 138990U;
volatile int16_t x858 = INT16_MAX;
int32_t x859 = INT32_MIN;
uint64_t x875 = 65664624LLU;
int64_t x881 = -1LL;
static volatile int32_t t168 = 19202241;
volatile uint16_t x896 = 12U;
int32_t x905 = INT32_MIN;
static volatile int64_t x906 = 104153449630LL;
volatile int32_t t171 = 7;
int8_t x911 = INT8_MAX;
uint64_t x917 = 129334519250393201LLU;
volatile int32_t x921 = INT32_MAX;
int8_t x933 = -1;
static volatile int8_t x936 = INT8_MAX;
volatile int16_t x959 = INT16_MAX;
int32_t t179 = 896837;
int64_t x972 = INT64_MIN;
volatile int64_t x983 = INT64_MIN;
int64_t x987 = -1LL;
int64_t x988 = 734LL;
uint8_t x989 = 37U;
volatile int32_t x992 = INT32_MIN;
int16_t x1000 = -1;
volatile uint8_t x1003 = 4U;
int32_t x1006 = INT32_MAX;
int32_t t188 = 1778;
int32_t x1014 = -29;
int8_t x1030 = 23;
static int16_t x1032 = INT16_MAX;
static int64_t x1038 = -1LL;
uint64_t x1046 = UINT64_MAX;
volatile int8_t x1050 = INT8_MAX;
int32_t x1051 = -1;
uint32_t x1059 = 19526U;
int32_t x1069 = INT32_MIN;
int8_t x1077 = -1;
uint64_t x1079 = 86735942018780LLU;
int64_t x1080 = 831381291213LL;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	int32_t x2 = 1954;
	int8_t x3 = INT8_MIN;
	int32_t t0 = 558652;

    t0 = (x1>(x2*(x3+x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	int16_t x7 = INT16_MIN;
	int16_t x8 = -1;

    t1 = (x5>(x6*(x7+x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int8_t x10 = 0;
	int8_t x11 = INT8_MIN;
	uint8_t x12 = 4U;
	volatile int32_t t2 = -2;

    t2 = (x9>(x10*(x11+x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x16 = 0U;
	int32_t t3 = -278751;

    t3 = (x13>(x14*(x15+x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 237060;
	int64_t x18 = INT64_MAX;
	int16_t x19 = 1932;
	volatile uint64_t x20 = 6860382569983236723LLU;
	volatile int32_t t4 = 202;

    t4 = (x17>(x18*(x19+x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MIN;
	int32_t x23 = -1;
	int16_t x24 = 12816;

    t5 = (x21>(x22*(x23+x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 39U;
	int8_t x26 = -1;
	uint64_t x28 = 1146292LLU;
	int32_t t6 = -78633;

    t6 = (x25>(x26*(x27+x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x37 = -1;
	uint16_t x39 = UINT16_MAX;
	static int16_t x40 = INT16_MIN;

    t7 = (x37>(x38*(x39+x40)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x41 = 8U;
	uint64_t x42 = 20266431559LLU;
	uint16_t x43 = UINT16_MAX;
	volatile uint8_t x44 = 3U;
	int32_t t8 = -1;

    t8 = (x41>(x42*(x43+x44)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = INT16_MIN;
	volatile int16_t x46 = INT16_MIN;
	uint8_t x47 = 12U;
	int8_t x48 = INT8_MAX;
	static volatile int32_t t9 = 376802775;

    t9 = (x45>(x46*(x47+x48)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x49 = INT8_MIN;
	int16_t x50 = -1;
	static int8_t x51 = INT8_MAX;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t10 = 145;

    t10 = (x49>(x50*(x51+x52)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x54 = 1;
	int64_t x55 = INT64_MIN;
	volatile int64_t x56 = 0LL;
	volatile int32_t t11 = 1043593;

    t11 = (x53>(x54*(x55+x56)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = INT64_MIN;
	uint8_t x59 = 5U;
	int64_t x60 = 406484151803LL;
	volatile int32_t t12 = 16470718;

    t12 = (x57>(x58*(x59+x60)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x61 = -1LL;
	volatile uint64_t x63 = 77101333377788LLU;
	volatile uint32_t x64 = UINT32_MAX;
	int32_t t13 = 536022376;

    t13 = (x61>(x62*(x63+x64)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x65 = -21;
	volatile int8_t x66 = INT8_MAX;
	int16_t x67 = INT16_MIN;
	uint32_t x68 = 78594U;
	int32_t t14 = -8546921;

    t14 = (x65>(x66*(x67+x68)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = INT32_MAX;
	volatile uint64_t x70 = 204434213LLU;
	int16_t x72 = INT16_MIN;
	volatile int32_t t15 = 183;

    t15 = (x69>(x70*(x71+x72)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x73 = 369U;
	uint16_t x74 = 7687U;
	volatile int64_t x75 = -1070570LL;
	int32_t x76 = -1;

    t16 = (x73>(x74*(x75+x76)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = 44212LL;
	int8_t x78 = INT8_MIN;
	int64_t x79 = INT64_MIN;
	uint64_t x80 = 3LLU;
	int32_t t17 = -80325;

    t17 = (x77>(x78*(x79+x80)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x82 = -1LL;
	int64_t x83 = INT64_MIN;
	static volatile int32_t t18 = 0;

    t18 = (x81>(x82*(x83+x84)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = INT64_MIN;
	uint16_t x86 = UINT16_MAX;
	volatile uint64_t x88 = UINT64_MAX;

    t19 = (x85>(x86*(x87+x88)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x97 = -1;
	static int8_t x98 = INT8_MAX;
	uint64_t x99 = 5980074684720LLU;
	int8_t x100 = -1;
	volatile int32_t t20 = 3144;

    t20 = (x97>(x98*(x99+x100)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x101 = -10312LL;
	volatile int8_t x102 = -1;
	int8_t x103 = INT8_MAX;
	volatile int32_t x104 = -5195;
	volatile int32_t t21 = 2185;

    t21 = (x101>(x102*(x103+x104)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x106 = -1LL;
	int8_t x107 = 1;
	static volatile int32_t t22 = 1;

    t22 = (x105>(x106*(x107+x108)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x109 = -5667LL;
	static volatile uint32_t x110 = UINT32_MAX;
	uint32_t x112 = 124U;

    t23 = (x109>(x110*(x111+x112)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x121 = UINT16_MAX;
	int16_t x123 = -1;
	volatile int16_t x124 = -3;
	static int32_t t24 = 114;

    t24 = (x121>(x122*(x123+x124)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x139 = 1LLU;
	static int32_t x140 = INT32_MAX;

    t25 = (x137>(x138*(x139+x140)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x141 = 78320274U;
	volatile uint64_t x142 = UINT64_MAX;

    t26 = (x141>(x142*(x143+x144)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint16_t x145 = UINT16_MAX;
	int8_t x147 = INT8_MIN;
	volatile int8_t x148 = -1;
	int32_t t27 = 3;

    t27 = (x145>(x146*(x147+x148)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x149 = INT8_MAX;
	int32_t x150 = INT32_MIN;
	static volatile uint8_t x152 = 19U;
	int32_t t28 = -81465511;

    t28 = (x149>(x150*(x151+x152)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x153 = 46U;
	int64_t x154 = 15032892783610LL;
	static int16_t x155 = INT16_MIN;
	static uint16_t x156 = UINT16_MAX;
	int32_t t29 = -9209273;

    t29 = (x153>(x154*(x155+x156)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x161 = -21;
	int64_t x163 = INT64_MIN;
	static uint32_t x164 = 3U;
	int32_t t30 = 1574;

    t30 = (x161>(x162*(x163+x164)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x173 = 133078440;
	int16_t x175 = -1;
	int8_t x176 = 1;
	volatile int32_t t31 = 47027;

    t31 = (x173>(x174*(x175+x176)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x177 = -1;
	int16_t x178 = INT16_MIN;
	static volatile uint64_t x179 = 30876149160123LLU;
	volatile uint32_t x180 = UINT32_MAX;
	int32_t t32 = 11181677;

    t32 = (x177>(x178*(x179+x180)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x181 = 2476;
	uint8_t x183 = UINT8_MAX;
	volatile uint64_t x184 = 10525549559037515LLU;
	static volatile int32_t t33 = 27547962;

    t33 = (x181>(x182*(x183+x184)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x189 = -1;
	static int8_t x190 = INT8_MAX;
	uint16_t x191 = UINT16_MAX;
	int32_t t34 = -40939854;

    t34 = (x189>(x190*(x191+x192)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x193 = INT32_MIN;
	static int32_t x194 = -5313;
	uint64_t x195 = 3549280289LLU;
	uint64_t x196 = UINT64_MAX;
	volatile int32_t t35 = 1148775;

    t35 = (x193>(x194*(x195+x196)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x197 = -3;
	uint16_t x198 = 6U;
	volatile int8_t x200 = -1;
	int32_t t36 = -142471464;

    t36 = (x197>(x198*(x199+x200)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x209 = 1253726971U;
	int64_t x210 = -1469695882319309955LL;
	int16_t x212 = -1;
	volatile int32_t t37 = -16365026;

    t37 = (x209>(x210*(x211+x212)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x213 = INT32_MIN;
	uint32_t x214 = UINT32_MAX;
	int8_t x215 = INT8_MIN;
	static int32_t t38 = -4804;

    t38 = (x213>(x214*(x215+x216)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x218 = 2219U;
	static volatile int32_t t39 = -26845;

    t39 = (x217>(x218*(x219+x220)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x225 = INT64_MIN;
	int32_t x227 = 1857;
	static int32_t x228 = -1;
	volatile int32_t t40 = -508;

    t40 = (x225>(x226*(x227+x228)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x238 = 1162006U;
	uint64_t x239 = UINT64_MAX;
	int16_t x240 = -1;
	int32_t t41 = 27;

    t41 = (x237>(x238*(x239+x240)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x249 = 64970291693269275LLU;
	static uint8_t x250 = 38U;
	static int64_t x251 = -1LL;
	static uint16_t x252 = 20U;
	int32_t t42 = 16900701;

    t42 = (x249>(x250*(x251+x252)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x253 = UINT32_MAX;
	int32_t x254 = INT32_MIN;
	volatile int64_t x255 = -1LL;
	int8_t x256 = INT8_MIN;
	int32_t t43 = -30;

    t43 = (x253>(x254*(x255+x256)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x262 = 1U;
	volatile int8_t x263 = INT8_MAX;
	int32_t x264 = 737046;
	int32_t t44 = -408041;

    t44 = (x261>(x262*(x263+x264)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x265 = INT64_MIN;
	int8_t x266 = INT8_MIN;
	int16_t x267 = -1;
	int32_t t45 = -122698597;

    t45 = (x265>(x266*(x267+x268)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x269 = 250309185998985LLU;
	uint16_t x271 = 6134U;
	int32_t t46 = -1;

    t46 = (x269>(x270*(x271+x272)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x273 = INT64_MAX;
	static uint8_t x274 = UINT8_MAX;
	uint16_t x275 = 0U;
	static uint64_t x276 = 1749LLU;
	int32_t t47 = 195579;

    t47 = (x273>(x274*(x275+x276)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x277 = INT8_MIN;
	uint16_t x278 = UINT16_MAX;
	volatile int8_t x279 = INT8_MAX;
	uint64_t x280 = UINT64_MAX;
	int32_t t48 = -21;

    t48 = (x277>(x278*(x279+x280)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x281 = 1876;
	static uint64_t x282 = UINT64_MAX;
	uint8_t x283 = UINT8_MAX;
	static int16_t x284 = INT16_MAX;
	int32_t t49 = 105;

    t49 = (x281>(x282*(x283+x284)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x289 = INT64_MIN;
	int64_t x290 = 633603505940LL;
	int64_t x291 = -1LL;
	volatile int32_t t50 = 289459;

    t50 = (x289>(x290*(x291+x292)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x293 = 29424U;
	volatile int64_t x294 = -1LL;
	uint64_t x295 = 1LLU;
	volatile int32_t t51 = 46;

    t51 = (x293>(x294*(x295+x296)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x301 = INT64_MAX;
	static uint8_t x302 = 1U;
	static uint16_t x303 = UINT16_MAX;
	static uint8_t x304 = 38U;
	int32_t t52 = -3;

    t52 = (x301>(x302*(x303+x304)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x305 = -1LL;
	static uint32_t x306 = 238259869U;
	volatile int16_t x308 = -3583;
	int32_t t53 = 47374;

    t53 = (x305>(x306*(x307+x308)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x314 = -6LL;
	uint8_t x315 = 1U;
	int8_t x316 = INT8_MAX;
	volatile int32_t t54 = -461;

    t54 = (x313>(x314*(x315+x316)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x317 = 1;
	uint64_t x318 = 1716476109594906060LLU;
	int8_t x319 = INT8_MIN;
	volatile int8_t x320 = INT8_MIN;
	volatile int32_t t55 = -6782;

    t55 = (x317>(x318*(x319+x320)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x322 = 9265210397699LL;
	uint8_t x323 = 3U;
	int64_t x324 = 1LL;
	volatile int32_t t56 = 0;

    t56 = (x321>(x322*(x323+x324)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x330 = -1;
	int32_t x331 = INT32_MIN;
	static int64_t x332 = 57LL;

    t57 = (x329>(x330*(x331+x332)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x333 = INT8_MIN;
	int64_t x336 = INT64_MIN;
	int32_t t58 = 61287;

    t58 = (x333>(x334*(x335+x336)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x341 = -7;
	static int64_t x342 = 67466724012LL;
	static int32_t x343 = -1;
	int16_t x344 = INT16_MIN;
	volatile int32_t t59 = 0;

    t59 = (x341>(x342*(x343+x344)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x345 = 160396710U;
	int16_t x346 = -1;
	uint32_t x347 = UINT32_MAX;
	int64_t x348 = INT64_MIN;
	volatile int32_t t60 = 2061500;

    t60 = (x345>(x346*(x347+x348)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x349 = 255138541463834382LL;
	volatile uint8_t x350 = 23U;
	static volatile int64_t x351 = -1LL;
	uint16_t x352 = UINT16_MAX;
	static volatile int32_t t61 = 0;

    t61 = (x349>(x350*(x351+x352)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x354 = 19U;
	volatile int64_t x356 = -1LL;
	static int32_t t62 = -10457328;

    t62 = (x353>(x354*(x355+x356)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x357 = -11;
	int8_t x358 = INT8_MIN;
	volatile uint32_t x359 = 648856U;
	static int8_t x360 = 1;
	int32_t t63 = 412921;

    t63 = (x357>(x358*(x359+x360)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x361 = 56487U;
	int64_t x362 = -1LL;
	static uint64_t x363 = 839703794LLU;
	static int32_t x364 = INT32_MAX;
	static volatile int32_t t64 = 14506665;

    t64 = (x361>(x362*(x363+x364)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x366 = UINT16_MAX;
	uint16_t x367 = 29U;
	static volatile uint64_t x368 = 135LLU;
	int32_t t65 = 145442;

    t65 = (x365>(x366*(x367+x368)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint8_t x369 = 13U;
	volatile int16_t x370 = INT16_MAX;
	uint8_t x371 = UINT8_MAX;
	int8_t x372 = -1;
	int32_t t66 = 4;

    t66 = (x369>(x370*(x371+x372)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x373 = 1;
	int16_t x374 = 0;
	int16_t x375 = INT16_MAX;
	int16_t x376 = INT16_MAX;
	volatile int32_t t67 = 31827687;

    t67 = (x373>(x374*(x375+x376)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x377 = 1;
	uint8_t x378 = UINT8_MAX;
	volatile uint64_t x379 = 41LLU;
	static int16_t x380 = -504;
	int32_t t68 = -264212137;

    t68 = (x377>(x378*(x379+x380)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x381 = -1;
	volatile uint32_t x382 = 3666U;
	static int32_t t69 = -1529653;

    t69 = (x381>(x382*(x383+x384)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x385 = INT8_MAX;
	static int16_t x386 = INT16_MAX;
	int32_t x387 = INT32_MIN;
	uint64_t x388 = UINT64_MAX;
	volatile int32_t t70 = -746;

    t70 = (x385>(x386*(x387+x388)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x390 = -21825168;
	int64_t x391 = 2849633LL;
	int64_t x392 = 501357LL;

    t71 = (x389>(x390*(x391+x392)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x393 = 34;
	uint32_t x394 = UINT32_MAX;
	int8_t x395 = INT8_MIN;
	volatile uint8_t x396 = 3U;
	volatile int32_t t72 = 15295;

    t72 = (x393>(x394*(x395+x396)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x397 = 6U;
	int8_t x398 = INT8_MAX;
	int8_t x399 = INT8_MIN;
	uint16_t x400 = 19U;

    t73 = (x397>(x398*(x399+x400)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x402 = 9701;
	int8_t x403 = INT8_MIN;
	volatile int8_t x404 = 2;
	static volatile int32_t t74 = -81;

    t74 = (x401>(x402*(x403+x404)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint32_t x405 = 487857310U;
	int16_t x406 = INT16_MIN;
	volatile int32_t t75 = -39344758;

    t75 = (x405>(x406*(x407+x408)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x413 = 1LL;
	int8_t x415 = INT8_MIN;
	int8_t x416 = -1;
	int32_t t76 = 331;

    t76 = (x413>(x414*(x415+x416)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int8_t x417 = -1;
	static int64_t x418 = -1LL;
	uint32_t x419 = 11317343U;
	uint16_t x420 = 28305U;
	volatile int32_t t77 = 7377;

    t77 = (x417>(x418*(x419+x420)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x421 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	uint16_t x424 = UINT16_MAX;
	int32_t t78 = 25340905;

    t78 = (x421>(x422*(x423+x424)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x433 = UINT8_MAX;
	int8_t x435 = INT8_MIN;
	static uint16_t x436 = 7882U;
	int32_t t79 = -6197694;

    t79 = (x433>(x434*(x435+x436)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x437 = -1LL;
	int8_t x438 = INT8_MIN;
	int8_t x439 = -28;
	int16_t x440 = INT16_MIN;
	volatile int32_t t80 = -26922282;

    t80 = (x437>(x438*(x439+x440)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x441 = 1;
	uint8_t x442 = UINT8_MAX;
	uint8_t x443 = 121U;
	int8_t x444 = INT8_MAX;
	static volatile int32_t t81 = -15;

    t81 = (x441>(x442*(x443+x444)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x445 = INT8_MIN;
	volatile int16_t x446 = INT16_MAX;
	volatile uint16_t x447 = 172U;

    t82 = (x445>(x446*(x447+x448)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x454 = INT16_MAX;
	uint32_t x455 = 20U;
	int8_t x456 = 29;
	volatile int32_t t83 = -47396;

    t83 = (x453>(x454*(x455+x456)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x457 = 20757236348453092LLU;
	int8_t x458 = INT8_MIN;
	int32_t x459 = INT32_MIN;
	int64_t x460 = -1LL;
	int32_t t84 = -13006412;

    t84 = (x457>(x458*(x459+x460)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x462 = 286U;
	int8_t x463 = INT8_MIN;
	uint64_t x464 = 1523LLU;
	volatile int32_t t85 = -190;

    t85 = (x461>(x462*(x463+x464)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x465 = -7677;
	volatile uint32_t x467 = 16404252U;
	int32_t x468 = INT32_MIN;

    t86 = (x465>(x466*(x467+x468)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x473 = UINT8_MAX;
	int64_t x474 = 69984514149365088LL;
	int64_t x475 = -1LL;
	volatile int32_t t87 = -489602819;

    t87 = (x473>(x474*(x475+x476)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x481 = 2U;
	uint64_t x482 = UINT64_MAX;
	int16_t x483 = -1;
	static int32_t t88 = -1474043;

    t88 = (x481>(x482*(x483+x484)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x485 = 66675729766LL;
	static int8_t x486 = INT8_MIN;
	int64_t x487 = 7399790339LL;
	int8_t x488 = INT8_MIN;
	int32_t t89 = 23;

    t89 = (x485>(x486*(x487+x488)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x493 = UINT8_MAX;
	int16_t x494 = -502;
	uint8_t x496 = UINT8_MAX;
	volatile int32_t t90 = 3017;

    t90 = (x493>(x494*(x495+x496)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x501 = INT64_MIN;
	int16_t x504 = 501;

    t91 = (x501>(x502*(x503+x504)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x505 = 2LLU;
	volatile int32_t x506 = -1;
	int16_t x507 = INT16_MIN;
	int32_t t92 = 6;

    t92 = (x505>(x506*(x507+x508)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x509 = -1;
	uint8_t x511 = UINT8_MAX;
	int8_t x512 = -1;
	volatile int32_t t93 = -307862;

    t93 = (x509>(x510*(x511+x512)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x513 = UINT32_MAX;
	int8_t x514 = 57;
	int16_t x515 = INT16_MAX;
	int16_t x516 = -1;

    t94 = (x513>(x514*(x515+x516)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x525 = INT32_MIN;
	uint64_t x526 = UINT64_MAX;
	static int8_t x527 = INT8_MIN;

    t95 = (x525>(x526*(x527+x528)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x534 = UINT64_MAX;
	int16_t x536 = INT16_MIN;

    t96 = (x533>(x534*(x535+x536)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x537 = 3U;
	static uint8_t x539 = 0U;
	uint64_t x540 = 4071454193LLU;
	volatile int32_t t97 = 2044;

    t97 = (x537>(x538*(x539+x540)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x541 = 897708464818990574LL;
	uint8_t x542 = 0U;
	uint16_t x543 = 1U;
	volatile int32_t t98 = -1946548;

    t98 = (x541>(x542*(x543+x544)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x549 = UINT64_MAX;
	uint32_t x550 = 33985948U;
	uint16_t x551 = 5U;
	int8_t x552 = -1;

    t99 = (x549>(x550*(x551+x552)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x553 = 4158201LLU;
	int8_t x554 = INT8_MAX;
	int16_t x555 = -1;
	volatile int8_t x556 = INT8_MIN;
	int32_t t100 = 301334399;

    t100 = (x553>(x554*(x555+x556)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x557 = 3U;
	uint8_t x558 = UINT8_MAX;
	static volatile uint32_t x559 = 6584353U;
	uint64_t x560 = 196929LLU;
	static volatile int32_t t101 = 2175;

    t101 = (x557>(x558*(x559+x560)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x563 = INT16_MIN;
	int8_t x564 = INT8_MAX;

    t102 = (x561>(x562*(x563+x564)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x565 = 41LLU;
	int16_t x566 = INT16_MIN;
	uint64_t x567 = 33799140962300615LLU;
	static volatile int8_t x568 = INT8_MIN;

    t103 = (x565>(x566*(x567+x568)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x569 = -7;
	uint8_t x570 = 0U;
	int8_t x571 = -1;
	static volatile int64_t x572 = -122283145798LL;
	int32_t t104 = 61902938;

    t104 = (x569>(x570*(x571+x572)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x573 = INT8_MIN;
	uint32_t x574 = UINT32_MAX;
	int16_t x575 = 1613;
	int32_t t105 = -6557;

    t105 = (x573>(x574*(x575+x576)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x577 = INT64_MIN;
	int16_t x578 = INT16_MIN;
	int8_t x579 = -1;
	int8_t x580 = INT8_MAX;
	static int32_t t106 = 47814113;

    t106 = (x577>(x578*(x579+x580)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x583 = INT64_MIN;
	static volatile uint64_t x584 = 220545306012810LLU;

    t107 = (x581>(x582*(x583+x584)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x585 = 17;
	int64_t x586 = -1LL;
	int64_t x587 = INT64_MAX;

    t108 = (x585>(x586*(x587+x588)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x590 = INT8_MAX;
	static uint64_t x591 = 1219987LLU;
	int8_t x592 = -37;

    t109 = (x589>(x590*(x591+x592)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x597 = INT64_MAX;
	int16_t x598 = 1;
	volatile int32_t x599 = -540;
	volatile int32_t t110 = 794898217;

    t110 = (x597>(x598*(x599+x600)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x610 = 423270194625LLU;
	uint32_t x611 = 14U;
	static int8_t x612 = -56;
	int32_t t111 = -49799;

    t111 = (x609>(x610*(x611+x612)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x613 = INT64_MAX;
	volatile int16_t x615 = INT16_MIN;
	volatile uint8_t x616 = UINT8_MAX;
	int32_t t112 = -88421744;

    t112 = (x613>(x614*(x615+x616)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x617 = INT16_MAX;
	uint32_t x619 = 385460U;
	volatile int32_t t113 = -53;

    t113 = (x617>(x618*(x619+x620)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x625 = 3560385869LLU;
	uint64_t x627 = UINT64_MAX;
	volatile int64_t x628 = INT64_MAX;

    t114 = (x625>(x626*(x627+x628)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x631 = 0LLU;
	static volatile uint32_t x632 = 534069255U;
	int32_t t115 = 1957;

    t115 = (x629>(x630*(x631+x632)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x633 = 12;
	volatile int16_t x634 = INT16_MIN;
	static volatile int16_t x635 = INT16_MIN;
	int8_t x636 = INT8_MAX;

    t116 = (x633>(x634*(x635+x636)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x637 = -1;
	static int8_t x638 = INT8_MAX;
	volatile int8_t x639 = 0;
	int64_t x640 = -15092751318965LL;

    t117 = (x637>(x638*(x639+x640)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x641 = 5U;
	uint16_t x642 = UINT16_MAX;
	volatile int32_t x644 = -1;
	volatile int32_t t118 = -3868;

    t118 = (x641>(x642*(x643+x644)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x645 = INT64_MAX;
	uint8_t x646 = UINT8_MAX;
	static int64_t x647 = -24172776858024LL;
	int8_t x648 = -1;
	static volatile int32_t t119 = 7;

    t119 = (x645>(x646*(x647+x648)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x653 = -1;
	static int8_t x654 = 21;
	int16_t x655 = INT16_MAX;
	int16_t x656 = -1;
	int32_t t120 = -3908;

    t120 = (x653>(x654*(x655+x656)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x661 = INT64_MAX;
	uint64_t x662 = UINT64_MAX;
	int64_t x663 = -1LL;
	uint32_t x664 = UINT32_MAX;
	int32_t t121 = 411388811;

    t121 = (x661>(x662*(x663+x664)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x665 = -1;
	static int64_t x666 = INT64_MAX;
	static volatile uint64_t x667 = 65484LLU;
	int64_t x668 = -1996028814LL;

    t122 = (x665>(x666*(x667+x668)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x669 = UINT8_MAX;
	volatile int16_t x670 = INT16_MAX;
	uint32_t x671 = UINT32_MAX;
	uint64_t x672 = 4637LLU;
	static volatile int32_t t123 = -116912;

    t123 = (x669>(x670*(x671+x672)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x673 = UINT16_MAX;
	int16_t x674 = 57;
	int64_t x675 = -4519925LL;
	volatile int16_t x676 = INT16_MIN;
	int32_t t124 = 698916;

    t124 = (x673>(x674*(x675+x676)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x677 = 1141670U;
	int32_t x679 = INT32_MIN;
	int32_t t125 = -4062220;

    t125 = (x677>(x678*(x679+x680)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x681 = INT16_MIN;
	int64_t x682 = -1LL;
	int16_t x683 = -20;
	volatile uint32_t x684 = 13U;
	int32_t t126 = 308;

    t126 = (x681>(x682*(x683+x684)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x685 = INT64_MAX;
	uint32_t x686 = 352U;
	uint64_t x688 = 9176662780294863159LLU;

    t127 = (x685>(x686*(x687+x688)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x689 = UINT32_MAX;
	volatile uint16_t x690 = 770U;
	uint64_t x691 = 28382855LLU;
	int16_t x692 = 85;
	int32_t t128 = 10295962;

    t128 = (x689>(x690*(x691+x692)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x693 = 12U;
	int64_t x694 = INT64_MIN;
	int64_t x695 = INT64_MIN;
	static uint64_t x696 = UINT64_MAX;

    t129 = (x693>(x694*(x695+x696)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint8_t x697 = UINT8_MAX;
	int8_t x698 = INT8_MIN;
	uint16_t x699 = 60U;
	uint32_t x700 = 832731U;
	volatile int32_t t130 = 245223;

    t130 = (x697>(x698*(x699+x700)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x701 = 7;
	uint16_t x702 = 8854U;
	static uint8_t x704 = UINT8_MAX;
	volatile int32_t t131 = 262797857;

    t131 = (x701>(x702*(x703+x704)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x709 = UINT32_MAX;
	int64_t x710 = 1378383918615129117LL;

    t132 = (x709>(x710*(x711+x712)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x714 = INT16_MAX;
	int32_t x716 = INT32_MIN;
	int32_t t133 = -679742;

    t133 = (x713>(x714*(x715+x716)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x717 = INT16_MIN;
	int64_t x718 = -1LL;
	int8_t x719 = INT8_MAX;
	int64_t x720 = INT64_MIN;

    t134 = (x717>(x718*(x719+x720)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x721 = 43;
	int64_t x722 = INT64_MIN;
	static int8_t x723 = INT8_MIN;
	uint64_t x724 = UINT64_MAX;
	static int32_t t135 = 212953;

    t135 = (x721>(x722*(x723+x724)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x725 = 209664LLU;
	volatile uint32_t x726 = UINT32_MAX;
	int32_t x727 = INT32_MAX;
	volatile int64_t x728 = -229502LL;
	int32_t t136 = 1361511;

    t136 = (x725>(x726*(x727+x728)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x729 = 2U;
	int64_t x730 = -1LL;
	uint32_t x731 = UINT32_MAX;
	int32_t x732 = 0;
	volatile int32_t t137 = 0;

    t137 = (x729>(x730*(x731+x732)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x733 = 15U;
	uint64_t x734 = UINT64_MAX;
	static uint32_t x735 = 180U;
	volatile int64_t x736 = -2603886982249LL;
	volatile int32_t t138 = 1;

    t138 = (x733>(x734*(x735+x736)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x741 = -1;
	volatile int16_t x742 = -1;
	static int16_t x743 = -1;
	volatile int8_t x744 = -15;
	volatile int32_t t139 = -1;

    t139 = (x741>(x742*(x743+x744)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x745 = INT32_MAX;
	int32_t x746 = -2727158;
	uint16_t x747 = 17U;
	int32_t x748 = -1;
	int32_t t140 = 39886664;

    t140 = (x745>(x746*(x747+x748)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x749 = 161125622619LLU;
	uint64_t x750 = 885990LLU;
	uint32_t x751 = 2973U;
	static int64_t x752 = INT64_MIN;
	int32_t t141 = 0;

    t141 = (x749>(x750*(x751+x752)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x753 = INT16_MAX;
	int32_t x754 = 12;
	int32_t x755 = INT32_MAX;
	int64_t x756 = -5141984LL;
	volatile int32_t t142 = 5912099;

    t142 = (x753>(x754*(x755+x756)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x757 = 1;
	int8_t x759 = 54;
	static uint16_t x760 = UINT16_MAX;
	volatile int32_t t143 = -15697403;

    t143 = (x757>(x758*(x759+x760)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x761 = 142270317198708435LLU;
	uint16_t x762 = UINT16_MAX;
	uint64_t x763 = 777635LLU;
	uint32_t x764 = 519569U;
	static volatile int32_t t144 = 15;

    t144 = (x761>(x762*(x763+x764)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x765 = 1;
	int32_t x766 = INT32_MIN;
	int8_t x768 = -1;
	volatile int32_t t145 = -973595231;

    t145 = (x765>(x766*(x767+x768)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x769 = -1;
	volatile int32_t x770 = 287630;
	volatile int32_t x771 = -1;
	int64_t x772 = 257966105873LL;

    t146 = (x769>(x770*(x771+x772)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x773 = 0;
	int16_t x775 = INT16_MAX;
	uint64_t x776 = 88315LLU;
	volatile int32_t t147 = -1;

    t147 = (x773>(x774*(x775+x776)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x789 = 1807988U;
	int8_t x791 = 26;
	int64_t x792 = 7942990756LL;
	static volatile int32_t t148 = -1;

    t148 = (x789>(x790*(x791+x792)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x793 = UINT16_MAX;
	int32_t x795 = -4808;
	static uint8_t x796 = 84U;
	int32_t t149 = -417;

    t149 = (x793>(x794*(x795+x796)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x797 = 28461U;
	int16_t x799 = INT16_MIN;
	volatile int8_t x800 = INT8_MIN;
	int32_t t150 = -7248;

    t150 = (x797>(x798*(x799+x800)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x801 = 0U;
	static volatile int64_t x802 = INT64_MIN;
	uint32_t x803 = 1001049938U;
	uint64_t x804 = 5633LLU;

    t151 = (x801>(x802*(x803+x804)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x809 = 636456280LLU;
	int8_t x810 = INT8_MIN;
	uint64_t x811 = UINT64_MAX;
	uint16_t x812 = 5U;
	volatile int32_t t152 = 280;

    t152 = (x809>(x810*(x811+x812)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x813 = -1;
	static int8_t x814 = 1;
	uint32_t x815 = UINT32_MAX;
	static int8_t x816 = INT8_MAX;
	int32_t t153 = -26532755;

    t153 = (x813>(x814*(x815+x816)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x817 = 1293U;
	uint16_t x818 = 2U;
	uint64_t x820 = UINT64_MAX;
	volatile int32_t t154 = -22621460;

    t154 = (x817>(x818*(x819+x820)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x822 = -52;
	volatile int8_t x823 = INT8_MAX;
	uint64_t x824 = 189298LLU;
	int32_t t155 = -472099;

    t155 = (x821>(x822*(x823+x824)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x826 = 2247LL;
	static int16_t x827 = -1;
	int16_t x828 = INT16_MIN;

    t156 = (x825>(x826*(x827+x828)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x830 = -1042845LL;
	static uint64_t x832 = UINT64_MAX;
	int32_t t157 = -481;

    t157 = (x829>(x830*(x831+x832)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x835 = UINT16_MAX;
	uint16_t x836 = UINT16_MAX;
	int32_t t158 = 867;

    t158 = (x833>(x834*(x835+x836)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x837 = 6U;
	uint8_t x838 = UINT8_MAX;
	static uint16_t x839 = 7U;
	static int16_t x840 = INT16_MIN;
	static int32_t t159 = 897952;

    t159 = (x837>(x838*(x839+x840)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x843 = 19;
	int8_t x844 = -1;
	volatile int32_t t160 = 243357;

    t160 = (x841>(x842*(x843+x844)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x846 = INT8_MAX;
	int8_t x847 = 17;
	volatile int32_t t161 = 238879;

    t161 = (x845>(x846*(x847+x848)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x853 = -49;
	volatile uint32_t x854 = 114643U;
	int16_t x855 = 103;
	volatile int32_t t162 = -135;

    t162 = (x853>(x854*(x855+x856)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x860 = -1LL;
	int32_t t163 = -7240;

    t163 = (x857>(x858*(x859+x860)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x869 = -80755LL;
	int8_t x870 = INT8_MIN;
	int16_t x871 = INT16_MIN;
	volatile int16_t x872 = -1;
	static volatile int32_t t164 = 1290506;

    t164 = (x869>(x870*(x871+x872)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x873 = INT16_MAX;
	volatile uint16_t x874 = 0U;
	int32_t x876 = -1;
	static volatile int32_t t165 = 3458197;

    t165 = (x873>(x874*(x875+x876)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x882 = -1LL;
	volatile int32_t x883 = -1;
	uint16_t x884 = 7134U;
	volatile int32_t t166 = 1203182;

    t166 = (x881>(x882*(x883+x884)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x885 = INT64_MAX;
	int8_t x886 = INT8_MIN;
	volatile int8_t x887 = INT8_MIN;
	int32_t x888 = -813794;
	int32_t t167 = 1;

    t167 = (x885>(x886*(x887+x888)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x889 = INT64_MIN;
	int8_t x890 = INT8_MIN;
	int8_t x891 = -29;
	uint64_t x892 = 12LLU;

    t168 = (x889>(x890*(x891+x892)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x893 = -1;
	uint8_t x894 = 45U;
	int8_t x895 = -22;
	static int32_t t169 = -215;

    t169 = (x893>(x894*(x895+x896)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x901 = INT8_MIN;
	uint64_t x902 = 226342LLU;
	volatile int64_t x903 = 12297281565912474LL;
	int16_t x904 = INT16_MIN;
	static int32_t t170 = 2364;

    t170 = (x901>(x902*(x903+x904)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x907 = 0U;
	int16_t x908 = INT16_MIN;

    t171 = (x905>(x906*(x907+x908)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x909 = INT64_MIN;
	uint8_t x910 = UINT8_MAX;
	uint64_t x912 = UINT64_MAX;
	static int32_t t172 = 39640;

    t172 = (x909>(x910*(x911+x912)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x913 = INT8_MIN;
	uint16_t x914 = 12U;
	static volatile int16_t x915 = INT16_MAX;
	volatile int32_t x916 = 3144618;
	int32_t t173 = -85967913;

    t173 = (x913>(x914*(x915+x916)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x918 = INT32_MAX;
	volatile uint32_t x919 = 431557669U;
	volatile int32_t x920 = INT32_MAX;
	int32_t t174 = 5;

    t174 = (x917>(x918*(x919+x920)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x922 = 3U;
	int32_t x923 = 1153;
	int16_t x924 = 6447;
	static volatile int32_t t175 = 1082;

    t175 = (x921>(x922*(x923+x924)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x929 = UINT64_MAX;
	volatile uint8_t x930 = 126U;
	uint64_t x931 = 941253LLU;
	static uint64_t x932 = 10247099863988LLU;
	volatile int32_t t176 = 559795;

    t176 = (x929>(x930*(x931+x932)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x934 = INT16_MIN;
	int64_t x935 = 3817968447536LL;
	static volatile int32_t t177 = 1534393;

    t177 = (x933>(x934*(x935+x936)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x945 = 12164459384186533LL;
	int64_t x946 = 7070768592144LL;
	uint32_t x947 = 18U;
	uint16_t x948 = 3U;
	volatile int32_t t178 = 267377443;

    t178 = (x945>(x946*(x947+x948)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x957 = INT32_MAX;
	volatile int32_t x958 = -58066;
	uint16_t x960 = 14U;

    t179 = (x957>(x958*(x959+x960)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x961 = -1;
	volatile uint32_t x962 = 33U;
	int8_t x963 = -57;
	int16_t x964 = -1;
	volatile int32_t t180 = -8180;

    t180 = (x961>(x962*(x963+x964)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x969 = INT8_MAX;
	volatile uint64_t x970 = 35764678435944LLU;
	int8_t x971 = INT8_MAX;
	int32_t t181 = 90337764;

    t181 = (x969>(x970*(x971+x972)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x981 = INT32_MIN;
	uint32_t x982 = 5644832U;
	int64_t x984 = INT64_MAX;
	volatile int32_t t182 = -684227443;

    t182 = (x981>(x982*(x983+x984)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x985 = INT64_MAX;
	uint8_t x986 = 39U;
	static volatile int32_t t183 = 304858181;

    t183 = (x985>(x986*(x987+x988)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x990 = 881U;
	uint32_t x991 = 566274U;
	volatile int32_t t184 = -1443052;

    t184 = (x989>(x990*(x991+x992)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x997 = INT32_MAX;
	volatile uint8_t x998 = 53U;
	static uint8_t x999 = 1U;
	static int32_t t185 = 1;

    t185 = (x997>(x998*(x999+x1000)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x1001 = -5LL;
	uint64_t x1002 = 55879LLU;
	static int8_t x1004 = -1;
	volatile int32_t t186 = 342;

    t186 = (x1001>(x1002*(x1003+x1004)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1005 = INT64_MIN;
	static int8_t x1007 = INT8_MAX;
	static uint64_t x1008 = 2599LLU;
	volatile int32_t t187 = 649;

    t187 = (x1005>(x1006*(x1007+x1008)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1009 = 220656619030410893LLU;
	uint16_t x1010 = 1U;
	uint32_t x1011 = 170U;
	int32_t x1012 = INT32_MAX;

    t188 = (x1009>(x1010*(x1011+x1012)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x1013 = -18;
	static int8_t x1015 = INT8_MIN;
	static uint32_t x1016 = 2049857415U;
	static int32_t t189 = 81132166;

    t189 = (x1013>(x1014*(x1015+x1016)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x1025 = UINT8_MAX;
	int16_t x1026 = INT16_MIN;
	uint16_t x1027 = 188U;
	volatile int16_t x1028 = INT16_MIN;
	volatile int32_t t190 = -1;

    t190 = (x1025>(x1026*(x1027+x1028)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x1029 = -1LL;
	uint32_t x1031 = UINT32_MAX;
	static int32_t t191 = -85;

    t191 = (x1029>(x1030*(x1031+x1032)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x1037 = UINT32_MAX;
	static uint64_t x1039 = UINT64_MAX;
	uint8_t x1040 = UINT8_MAX;
	volatile int32_t t192 = -20;

    t192 = (x1037>(x1038*(x1039+x1040)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1045 = -1;
	volatile int32_t x1047 = -1;
	int32_t x1048 = INT32_MAX;
	volatile int32_t t193 = -6817887;

    t193 = (x1045>(x1046*(x1047+x1048)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1049 = -10;
	volatile uint32_t x1052 = 10114U;
	volatile int32_t t194 = -4756323;

    t194 = (x1049>(x1050*(x1051+x1052)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1057 = INT32_MIN;
	uint8_t x1058 = 6U;
	volatile int64_t x1060 = -1233857390LL;
	int32_t t195 = -9;

    t195 = (x1057>(x1058*(x1059+x1060)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1065 = INT8_MIN;
	int16_t x1066 = INT16_MIN;
	uint16_t x1067 = 689U;
	volatile int8_t x1068 = -1;
	int32_t t196 = 26766177;

    t196 = (x1065>(x1066*(x1067+x1068)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1070 = -1;
	int16_t x1071 = INT16_MIN;
	volatile int64_t x1072 = 1840767034577145249LL;
	int32_t t197 = -2;

    t197 = (x1069>(x1070*(x1071+x1072)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x1078 = INT8_MAX;
	int32_t t198 = -50;

    t198 = (x1077>(x1078*(x1079+x1080)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int8_t x1085 = INT8_MIN;
	uint32_t x1086 = 2134658U;
	int16_t x1087 = -3891;
	uint64_t x1088 = 190013961LLU;
	volatile int32_t t199 = -2118;

    t199 = (x1085>(x1086*(x1087+x1088)));

    if (t199 != 1) { NG(); } else { ; }
	
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

