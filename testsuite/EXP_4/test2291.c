
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

uint32_t x5 = 1934552435U;
int16_t x10 = INT16_MIN;
int8_t x12 = INT8_MIN;
static int32_t x14 = INT32_MAX;
volatile int8_t x15 = INT8_MIN;
volatile uint8_t x19 = UINT8_MAX;
int32_t t5 = -8118;
static int64_t x25 = -9157387LL;
int32_t t7 = -1;
volatile uint64_t x41 = UINT64_MAX;
static int32_t t10 = 2881;
volatile int64_t x45 = INT64_MIN;
volatile int32_t t11 = 7012795;
int16_t x52 = 59;
int32_t t12 = 459678;
volatile uint32_t x58 = 475U;
int64_t x61 = 13663071LL;
volatile int8_t x63 = 0;
int8_t x65 = -6;
uint64_t x66 = UINT64_MAX;
int8_t x71 = 14;
static volatile int32_t t17 = -1;
static int16_t x75 = INT16_MAX;
volatile uint16_t x77 = 23428U;
uint64_t x79 = 63LLU;
int32_t t19 = -391187;
static uint64_t x84 = 399913LLU;
static volatile int32_t t20 = 211876540;
int16_t x90 = INT16_MAX;
uint16_t x91 = 3358U;
int8_t x92 = INT8_MIN;
volatile int32_t t22 = 174;
uint16_t x94 = 8U;
static int32_t x98 = 266;
int32_t t24 = 0;
int64_t x101 = INT64_MIN;
static volatile int32_t t25 = 216393334;
volatile int32_t x105 = INT32_MAX;
int8_t x106 = 4;
int16_t x108 = 1;
volatile int16_t x110 = 1781;
static int32_t x111 = -1;
uint64_t x112 = 8958496294392789507LLU;
volatile int8_t x113 = INT8_MIN;
uint64_t x116 = UINT64_MAX;
int32_t x118 = INT32_MIN;
volatile int32_t x119 = INT32_MIN;
int16_t x124 = -313;
uint64_t x127 = 3110294738162461LLU;
static uint64_t x128 = 7147261LLU;
int64_t x132 = -1LL;
int8_t x136 = 0;
int32_t t34 = 4990272;
int8_t x144 = INT8_MIN;
int64_t x171 = INT64_MIN;
int32_t x179 = INT32_MAX;
volatile int64_t x180 = -3730790LL;
volatile int32_t x187 = -862;
int64_t x188 = INT64_MAX;
volatile int32_t t46 = 4548;
int64_t x190 = 1265LL;
int32_t x192 = INT32_MIN;
uint16_t x196 = UINT16_MAX;
volatile int32_t t48 = 32483;
int32_t x206 = INT32_MIN;
volatile int16_t x207 = INT16_MIN;
int32_t t52 = -92169600;
uint16_t x217 = 2004U;
int32_t x222 = -1;
uint64_t x226 = UINT64_MAX;
static int8_t x231 = 1;
int16_t x246 = INT16_MIN;
int32_t t63 = 312862050;
static int32_t t64 = -848;
static volatile int32_t t65 = -215413256;
volatile int32_t t66 = -123;
static int8_t x270 = INT8_MIN;
uint32_t x271 = 504U;
int64_t x275 = INT64_MAX;
volatile int32_t t69 = -210691472;
int32_t x293 = 998759;
uint64_t x295 = UINT64_MAX;
int32_t x298 = -1;
uint32_t x303 = 183399U;
int16_t x307 = INT16_MIN;
uint8_t x312 = UINT8_MAX;
uint32_t x316 = 6444545U;
int16_t x323 = INT16_MIN;
int32_t t80 = -183510;
static uint16_t x327 = 1U;
static volatile int16_t x332 = 30;
int32_t x334 = -133965697;
static int64_t x340 = INT64_MIN;
int32_t x348 = INT32_MAX;
static int16_t x350 = INT16_MIN;
volatile int64_t x356 = 265LL;
int16_t x357 = -1;
int64_t x360 = INT64_MAX;
int32_t t89 = -155;
static volatile uint8_t x361 = 34U;
uint8_t x364 = UINT8_MAX;
static volatile int32_t x368 = INT32_MIN;
static int8_t x369 = INT8_MIN;
volatile int8_t x370 = -7;
uint64_t x375 = UINT64_MAX;
volatile int16_t x382 = INT16_MAX;
int8_t x392 = INT8_MIN;
int32_t t98 = -2651136;
volatile uint16_t x407 = 944U;
volatile int32_t x412 = -3;
int32_t t104 = -242547345;
volatile int64_t x421 = -1LL;
uint64_t x423 = 1790LLU;
int32_t t105 = -410868;
static int32_t t106 = 695124;
volatile int8_t x429 = -6;
uint32_t x435 = 635U;
int64_t x440 = 114972LL;
uint8_t x442 = UINT8_MAX;
int32_t x450 = 49132777;
uint64_t x463 = 580898619753LLU;
volatile int32_t t117 = 373294731;
int32_t t120 = -1245;
uint16_t x485 = 1U;
int16_t x487 = INT16_MIN;
uint64_t x494 = UINT64_MAX;
int32_t x504 = -1;
int32_t x507 = -1;
uint16_t x510 = 259U;
volatile int32_t t129 = 30633;
int64_t x528 = INT64_MIN;
int32_t x532 = INT32_MAX;
int32_t t132 = -23;
int8_t x533 = -1;
uint8_t x536 = 0U;
int8_t x537 = -1;
int32_t t135 = 6790195;
int64_t x546 = -1LL;
static uint16_t x551 = 805U;
int64_t x554 = -1LL;
int16_t x555 = -1;
int8_t x563 = INT8_MIN;
int8_t x565 = INT8_MIN;
int32_t t143 = 190;
volatile int32_t x577 = -1;
uint32_t x583 = 2477U;
uint32_t x584 = 23U;
int8_t x586 = -1;
int32_t t147 = -48229;
volatile int32_t x599 = -1;
static volatile int32_t t149 = 3627116;
volatile int16_t x603 = -1;
int32_t x605 = INT32_MIN;
volatile int32_t t151 = 1297;
int32_t t152 = -2081642;
volatile uint16_t x613 = 331U;
volatile int32_t t153 = 187;
uint16_t x618 = 3722U;
int64_t x639 = INT64_MIN;
int32_t t160 = 0;
int32_t x651 = 58613898;
static volatile int32_t t164 = -4071619;
volatile int8_t x661 = -1;
int16_t x662 = -6;
static int32_t x668 = INT32_MAX;
static int8_t x669 = INT8_MIN;
uint64_t x674 = 52454915LLU;
uint16_t x675 = 0U;
int16_t x677 = -1;
int8_t x679 = -14;
volatile uint8_t x681 = 0U;
int8_t x682 = 3;
int8_t x688 = -28;
int16_t x690 = INT16_MAX;
int8_t x695 = 1;
int16_t x704 = -10494;
int64_t x706 = 6979883555693974LL;
int64_t x708 = INT64_MAX;
static int16_t x710 = INT16_MIN;
int32_t x720 = INT32_MIN;
int16_t x723 = -407;
int16_t x724 = INT16_MIN;
uint64_t x727 = 132205284110637285LLU;
int32_t t182 = 1920;
int16_t x742 = INT16_MAX;
volatile uint64_t x747 = 69931264400659909LLU;
int8_t x768 = INT8_MIN;
static int64_t x769 = INT64_MIN;
static int64_t x771 = INT64_MAX;
int16_t x775 = -7;
volatile int32_t x789 = -28;
int32_t t197 = 29849;
volatile int8_t x794 = INT8_MAX;


void f0(void) {
    	uint16_t x1 = 243U;
	uint32_t x2 = UINT32_MAX;
	static int8_t x3 = INT8_MAX;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -25;

    t0 = (x1>(x2<=(x3&x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = INT16_MIN;
	int8_t x7 = 1;
	static int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -491575;

    t1 = (x5>(x6<=(x7&x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = -1LL;
	uint16_t x11 = 210U;
	int32_t t2 = -8821;

    t2 = (x9>(x10<=(x11&x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 86400U;
	static int64_t x16 = -9961LL;
	volatile int32_t t3 = -9292557;

    t3 = (x13>(x14<=(x15&x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = INT16_MIN;
	static int16_t x18 = -687;
	static int8_t x20 = -1;
	int32_t t4 = 203;

    t4 = (x17>(x18<=(x19&x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MIN;
	static int8_t x22 = 7;
	uint16_t x23 = 0U;
	uint8_t x24 = 7U;

    t5 = (x21>(x22<=(x23&x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = -41;
	int64_t x27 = INT64_MAX;
	int64_t x28 = -2037071290919089LL;
	volatile int32_t t6 = 29134;

    t6 = (x25>(x26<=(x27&x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	int8_t x30 = INT8_MAX;
	volatile int64_t x31 = INT64_MIN;
	int8_t x32 = 6;

    t7 = (x29>(x30<=(x31&x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = UINT8_MAX;
	int16_t x34 = INT16_MIN;
	uint32_t x35 = 106812U;
	int32_t x36 = -497404;
	int32_t t8 = 12;

    t8 = (x33>(x34<=(x35&x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MAX;
	uint8_t x38 = 12U;
	static int64_t x39 = INT64_MAX;
	int8_t x40 = INT8_MAX;
	volatile int32_t t9 = -2326;

    t9 = (x37>(x38<=(x39&x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x42 = -1;
	int16_t x43 = INT16_MAX;
	volatile uint16_t x44 = UINT16_MAX;

    t10 = (x41>(x42<=(x43&x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = INT64_MIN;
	static int16_t x47 = -1;
	static int8_t x48 = -1;

    t11 = (x45>(x46<=(x47&x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -683;
	uint64_t x50 = 93599312831803LLU;
	static int16_t x51 = INT16_MAX;

    t12 = (x49>(x50<=(x51&x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = UINT32_MAX;
	int32_t x54 = INT32_MIN;
	int8_t x55 = INT8_MIN;
	uint8_t x56 = 5U;
	static int32_t t13 = -1029433;

    t13 = (x53>(x54<=(x55&x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 12U;
	static int16_t x59 = -1323;
	int8_t x60 = -1;
	int32_t t14 = 6;

    t14 = (x57>(x58<=(x59&x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x62 = INT8_MIN;
	int64_t x64 = -1LL;
	int32_t t15 = -836676;

    t15 = (x61>(x62<=(x63&x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x67 = 42058U;
	int16_t x68 = INT16_MIN;
	int32_t t16 = -221;

    t16 = (x65>(x66<=(x67&x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -1LL;
	int64_t x70 = INT64_MAX;
	int32_t x72 = INT32_MAX;

    t17 = (x69>(x70<=(x71&x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	int8_t x74 = 10;
	static uint32_t x76 = 1915375274U;
	int32_t t18 = 455879;

    t18 = (x73>(x74<=(x75&x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x78 = 69U;
	int32_t x80 = -1691;

    t19 = (x77>(x78<=(x79&x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 447294060;
	int16_t x82 = INT16_MAX;
	static volatile uint8_t x83 = 6U;

    t20 = (x81>(x82<=(x83&x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = -29;
	volatile int16_t x86 = INT16_MAX;
	int8_t x87 = INT8_MIN;
	volatile uint16_t x88 = 103U;
	int32_t t21 = 98385697;

    t21 = (x85>(x86<=(x87&x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MAX;

    t22 = (x89>(x90<=(x91&x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = 917;
	int32_t x95 = INT32_MIN;
	volatile uint32_t x96 = 89326781U;
	volatile int32_t t23 = -4208535;

    t23 = (x93>(x94<=(x95&x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 53U;
	static int64_t x99 = INT64_MAX;
	static volatile int32_t x100 = -9499055;

    t24 = (x97>(x98<=(x99&x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x102 = 3;
	static int8_t x103 = 4;
	static int16_t x104 = -1;

    t25 = (x101>(x102<=(x103&x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x107 = -1;
	int32_t t26 = 10;

    t26 = (x105>(x106<=(x107&x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x109 = 97U;
	volatile int32_t t27 = -107293059;

    t27 = (x109>(x110<=(x111&x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x114 = UINT16_MAX;
	static int32_t x115 = INT32_MAX;
	volatile int32_t t28 = -817692;

    t28 = (x113>(x114<=(x115&x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = UINT64_MAX;
	int8_t x120 = INT8_MAX;
	int32_t t29 = -1;

    t29 = (x117>(x118<=(x119&x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = UINT8_MAX;
	int16_t x122 = INT16_MIN;
	int32_t x123 = INT32_MIN;
	static int32_t t30 = 1;

    t30 = (x121>(x122<=(x123&x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -1;
	static volatile int8_t x126 = INT8_MIN;
	int32_t t31 = 3046;

    t31 = (x125>(x126<=(x127&x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = 343;
	uint64_t x130 = 97923930LLU;
	uint32_t x131 = 3307U;
	int32_t t32 = -274635225;

    t32 = (x129>(x130<=(x131&x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x133 = 338556526LLU;
	static int8_t x134 = -6;
	int16_t x135 = INT16_MAX;
	int32_t t33 = -8969;

    t33 = (x133>(x134<=(x135&x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = 2001618LL;
	uint64_t x138 = UINT64_MAX;
	uint64_t x139 = 49712197086LLU;
	uint64_t x140 = 1425158623380696LLU;

    t34 = (x137>(x138<=(x139&x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x141 = INT32_MIN;
	uint8_t x142 = 59U;
	volatile uint16_t x143 = 2U;
	volatile int32_t t35 = -10;

    t35 = (x141>(x142<=(x143&x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = 93;
	int32_t x146 = -14057;
	static int8_t x147 = -7;
	uint64_t x148 = UINT64_MAX;
	volatile int32_t t36 = -585568;

    t36 = (x145>(x146<=(x147&x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MAX;
	static int8_t x150 = INT8_MIN;
	uint32_t x151 = 216U;
	int16_t x152 = 3820;
	volatile int32_t t37 = 11955519;

    t37 = (x149>(x150<=(x151&x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -1;
	int16_t x154 = INT16_MAX;
	int8_t x155 = -1;
	int64_t x156 = -1LL;
	volatile int32_t t38 = -57;

    t38 = (x153>(x154<=(x155&x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x157 = 28;
	uint8_t x158 = 47U;
	static uint32_t x159 = 2896U;
	int8_t x160 = -1;
	volatile int32_t t39 = -89252;

    t39 = (x157>(x158<=(x159&x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x161 = -1LL;
	volatile uint8_t x162 = 0U;
	int32_t x163 = -1;
	int64_t x164 = -4910312LL;
	volatile int32_t t40 = -3;

    t40 = (x161>(x162<=(x163&x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	uint8_t x166 = 1U;
	uint16_t x167 = 13U;
	int32_t x168 = -3;
	int32_t t41 = 577;

    t41 = (x165>(x166<=(x167&x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 2289354819939860253LLU;
	int8_t x170 = -26;
	volatile int8_t x172 = INT8_MAX;
	static int32_t t42 = -10;

    t42 = (x169>(x170<=(x171&x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 3U;
	int16_t x174 = INT16_MIN;
	uint64_t x175 = UINT64_MAX;
	static volatile int32_t x176 = INT32_MIN;
	volatile int32_t t43 = 30298027;

    t43 = (x173>(x174<=(x175&x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -1;
	uint16_t x178 = 562U;
	static int32_t t44 = -1;

    t44 = (x177>(x178<=(x179&x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = 5660;
	int16_t x182 = -9911;
	uint16_t x183 = 0U;
	static uint16_t x184 = UINT16_MAX;
	static int32_t t45 = -3;

    t45 = (x181>(x182<=(x183&x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x185 = UINT16_MAX;
	static int8_t x186 = INT8_MAX;

    t46 = (x185>(x186<=(x187&x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x189 = INT32_MIN;
	volatile uint64_t x191 = UINT64_MAX;
	int32_t t47 = -209;

    t47 = (x189>(x190<=(x191&x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 492;
	volatile int32_t x194 = INT32_MIN;
	int32_t x195 = -180874348;

    t48 = (x193>(x194<=(x195&x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MAX;
	volatile uint32_t x198 = 31767U;
	int16_t x199 = INT16_MAX;
	int8_t x200 = INT8_MAX;
	int32_t t49 = 107387;

    t49 = (x197>(x198<=(x199&x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	volatile int16_t x202 = -16028;
	int64_t x203 = -1LL;
	volatile int16_t x204 = INT16_MIN;
	volatile int32_t t50 = 0;

    t50 = (x201>(x202<=(x203&x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 427U;
	int8_t x208 = INT8_MIN;
	int32_t t51 = 32301856;

    t51 = (x205>(x206<=(x207&x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = 1;
	uint32_t x210 = 6U;
	int16_t x211 = INT16_MAX;
	static int64_t x212 = INT64_MIN;

    t52 = (x209>(x210<=(x211&x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MAX;
	int16_t x214 = INT16_MIN;
	int8_t x215 = INT8_MIN;
	int16_t x216 = 3802;
	int32_t t53 = 30852286;

    t53 = (x213>(x214<=(x215&x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x218 = 75;
	uint64_t x219 = UINT64_MAX;
	volatile int16_t x220 = -1;
	int32_t t54 = -31144186;

    t54 = (x217>(x218<=(x219&x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	volatile int16_t x223 = INT16_MAX;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = -41;

    t55 = (x221>(x222<=(x223&x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 72635738480618LLU;
	uint32_t x227 = 760154U;
	int32_t x228 = 238;
	int32_t t56 = -1;

    t56 = (x225>(x226<=(x227&x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 859U;
	int64_t x230 = INT64_MIN;
	static volatile uint64_t x232 = UINT64_MAX;
	volatile int32_t t57 = -91234116;

    t57 = (x229>(x230<=(x231&x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = 3234896823475LL;
	uint32_t x234 = 30U;
	int32_t x235 = INT32_MIN;
	static volatile int16_t x236 = 304;
	int32_t t58 = 1;

    t58 = (x233>(x234<=(x235&x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = INT64_MIN;
	volatile int8_t x238 = -1;
	static volatile int8_t x239 = INT8_MAX;
	int8_t x240 = INT8_MIN;
	int32_t t59 = 516879832;

    t59 = (x237>(x238<=(x239&x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = -1;
	int32_t x242 = INT32_MIN;
	int16_t x243 = -1707;
	uint8_t x244 = 35U;
	volatile int32_t t60 = 0;

    t60 = (x241>(x242<=(x243&x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 12U;
	int32_t x247 = -13;
	volatile uint16_t x248 = 167U;
	static volatile int32_t t61 = 4054;

    t61 = (x245>(x246<=(x247&x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	int32_t x250 = -5;
	int8_t x251 = INT8_MAX;
	uint32_t x252 = UINT32_MAX;
	volatile int32_t t62 = 8;

    t62 = (x249>(x250<=(x251&x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = INT32_MIN;
	uint32_t x254 = 17063U;
	volatile uint64_t x255 = 0LLU;
	static int16_t x256 = INT16_MIN;

    t63 = (x253>(x254<=(x255&x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -1;
	volatile int64_t x258 = -500328002760001LL;
	int64_t x259 = INT64_MIN;
	uint64_t x260 = UINT64_MAX;

    t64 = (x257>(x258<=(x259&x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 10360U;
	uint64_t x262 = 226398532155982LLU;
	uint32_t x263 = 101036143U;
	int16_t x264 = INT16_MIN;

    t65 = (x261>(x262<=(x263&x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 977U;
	int8_t x266 = INT8_MIN;
	static uint16_t x267 = UINT16_MAX;
	int64_t x268 = -868083LL;

    t66 = (x265>(x266<=(x267&x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint32_t x269 = 1055516U;
	volatile int8_t x272 = -1;
	volatile int32_t t67 = 14;

    t67 = (x269>(x270<=(x271&x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = 64196719U;
	int32_t x274 = INT32_MIN;
	int8_t x276 = -34;
	int32_t t68 = -2229291;

    t68 = (x273>(x274<=(x275&x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x277 = -1;
	int64_t x278 = 607438876LL;
	int16_t x279 = INT16_MIN;
	uint16_t x280 = UINT16_MAX;

    t69 = (x277>(x278<=(x279&x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = 114868446397084LL;
	uint16_t x282 = 79U;
	int32_t x283 = 0;
	int32_t x284 = -1;
	static int32_t t70 = 1;

    t70 = (x281>(x282<=(x283&x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = UINT64_MAX;
	static int64_t x286 = INT64_MAX;
	int16_t x287 = INT16_MAX;
	volatile int8_t x288 = 8;
	static volatile int32_t t71 = 5;

    t71 = (x285>(x286<=(x287&x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = 24U;
	static int16_t x290 = INT16_MIN;
	int8_t x291 = -1;
	static int8_t x292 = INT8_MAX;
	volatile int32_t t72 = -33731395;

    t72 = (x289>(x290<=(x291&x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x294 = INT32_MAX;
	volatile uint64_t x296 = UINT64_MAX;
	int32_t t73 = 206;

    t73 = (x293>(x294<=(x295&x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = -2;
	int16_t x299 = INT16_MIN;
	int8_t x300 = -1;
	volatile int32_t t74 = 122752;

    t74 = (x297>(x298<=(x299&x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x301 = -829;
	static int32_t x302 = INT32_MAX;
	uint16_t x304 = 7U;
	volatile int32_t t75 = 88611686;

    t75 = (x301>(x302<=(x303&x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MAX;
	volatile int32_t x306 = -90016739;
	int16_t x308 = -46;
	int32_t t76 = 19188;

    t76 = (x305>(x306<=(x307&x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x309 = 1U;
	int32_t x310 = INT32_MIN;
	uint8_t x311 = 0U;
	int32_t t77 = -103743;

    t77 = (x309>(x310<=(x311&x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 18U;
	volatile uint64_t x314 = UINT64_MAX;
	int64_t x315 = 6LL;
	int32_t t78 = -2829;

    t78 = (x313>(x314<=(x315&x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = 1;
	static int16_t x318 = INT16_MIN;
	int8_t x319 = -1;
	int16_t x320 = 839;
	volatile int32_t t79 = 12497721;

    t79 = (x317>(x318<=(x319&x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MIN;
	int32_t x322 = 60492;
	int16_t x324 = -1;

    t80 = (x321>(x322<=(x323&x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x325 = 2130922037660461LLU;
	int8_t x326 = INT8_MAX;
	int64_t x328 = -1LL;
	static int32_t t81 = -103090;

    t81 = (x325>(x326<=(x327&x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x329 = 1U;
	int8_t x330 = 0;
	static int8_t x331 = INT8_MAX;
	volatile int32_t t82 = -11329037;

    t82 = (x329>(x330<=(x331&x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -4231;
	static int64_t x335 = 0LL;
	volatile int64_t x336 = -1LL;
	int32_t t83 = -9;

    t83 = (x333>(x334<=(x335&x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	static int16_t x338 = -1702;
	static uint32_t x339 = 9U;
	volatile int32_t t84 = -5;

    t84 = (x337>(x338<=(x339&x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -232886954;
	volatile int16_t x342 = INT16_MIN;
	int32_t x343 = -1;
	uint64_t x344 = UINT64_MAX;
	volatile int32_t t85 = 3884268;

    t85 = (x341>(x342<=(x343&x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -6;
	int8_t x346 = 0;
	int16_t x347 = 2980;
	volatile int32_t t86 = -6856;

    t86 = (x345>(x346<=(x347&x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 23945932421LLU;
	int64_t x351 = -299545198187151LL;
	static uint16_t x352 = UINT16_MAX;
	volatile int32_t t87 = 1305373;

    t87 = (x349>(x350<=(x351&x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x353 = INT64_MAX;
	int8_t x354 = -3;
	int16_t x355 = -1;
	static volatile int32_t t88 = 29538;

    t88 = (x353>(x354<=(x355&x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x358 = UINT8_MAX;
	uint32_t x359 = UINT32_MAX;

    t89 = (x357>(x358<=(x359&x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x362 = INT8_MIN;
	volatile int8_t x363 = INT8_MIN;
	static volatile int32_t t90 = 585;

    t90 = (x361>(x362<=(x363&x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = -4059;
	uint8_t x366 = UINT8_MAX;
	int64_t x367 = -7339912599LL;
	volatile int32_t t91 = -1414672;

    t91 = (x365>(x366<=(x367&x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x371 = INT8_MAX;
	int32_t x372 = -268655;
	volatile int32_t t92 = -6682447;

    t92 = (x369>(x370<=(x371&x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x373 = 26LLU;
	uint32_t x374 = 492714344U;
	static int64_t x376 = -38609LL;
	volatile int32_t t93 = 1811835;

    t93 = (x373>(x374<=(x375&x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x377 = INT64_MIN;
	static volatile int16_t x378 = INT16_MIN;
	static int64_t x379 = INT64_MAX;
	int8_t x380 = INT8_MIN;
	int32_t t94 = -17870;

    t94 = (x377>(x378<=(x379&x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x381 = -1;
	int64_t x383 = -43201LL;
	int8_t x384 = -59;
	volatile int32_t t95 = -451503279;

    t95 = (x381>(x382<=(x383&x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x385 = UINT8_MAX;
	volatile uint32_t x386 = 355U;
	volatile uint64_t x387 = 12101021LLU;
	volatile int8_t x388 = 0;
	volatile int32_t t96 = 303;

    t96 = (x385>(x386<=(x387&x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = -1;
	static volatile int8_t x390 = -1;
	int32_t x391 = 1714;
	int32_t t97 = -16106;

    t97 = (x389>(x390<=(x391&x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = 130814122U;
	int8_t x394 = INT8_MIN;
	volatile int16_t x395 = 152;
	int64_t x396 = 2893689LL;

    t98 = (x393>(x394<=(x395&x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = 1;
	uint32_t x398 = 117758538U;
	uint16_t x399 = UINT16_MAX;
	int64_t x400 = -1LL;
	int32_t t99 = 250936;

    t99 = (x397>(x398<=(x399&x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = -16569913LL;
	uint32_t x402 = 1585U;
	volatile int16_t x403 = INT16_MIN;
	volatile int64_t x404 = INT64_MIN;
	int32_t t100 = -137680886;

    t100 = (x401>(x402<=(x403&x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x405 = 3;
	static int8_t x406 = INT8_MIN;
	uint64_t x408 = 8542651322607267487LLU;
	int32_t t101 = -274830;

    t101 = (x405>(x406<=(x407&x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x409 = INT16_MIN;
	int16_t x410 = INT16_MIN;
	uint16_t x411 = 1U;
	int32_t t102 = -52532776;

    t102 = (x409>(x410<=(x411&x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x413 = INT8_MIN;
	uint16_t x414 = UINT16_MAX;
	volatile uint8_t x415 = UINT8_MAX;
	int16_t x416 = -1;
	static int32_t t103 = -292142;

    t103 = (x413>(x414<=(x415&x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MIN;
	uint32_t x418 = 57098800U;
	int32_t x419 = -82856;
	volatile int32_t x420 = INT32_MIN;

    t104 = (x417>(x418<=(x419&x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint32_t x422 = 54U;
	int64_t x424 = -13439448447LL;

    t105 = (x421>(x422<=(x423&x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x425 = -1LL;
	int32_t x426 = -446;
	int8_t x427 = INT8_MAX;
	int16_t x428 = 654;

    t106 = (x425>(x426<=(x427&x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x430 = INT64_MAX;
	volatile int16_t x431 = -1;
	int64_t x432 = 3LL;
	volatile int32_t t107 = -2;

    t107 = (x429>(x430<=(x431&x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 24348U;
	uint16_t x434 = 30251U;
	int64_t x436 = -1646521354293LL;
	volatile int32_t t108 = -1;

    t108 = (x433>(x434<=(x435&x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MAX;
	uint64_t x438 = 77007316758964445LLU;
	uint64_t x439 = UINT64_MAX;
	volatile int32_t t109 = -1350;

    t109 = (x437>(x438<=(x439&x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x441 = INT64_MIN;
	int8_t x443 = INT8_MIN;
	static int64_t x444 = 734577158884616066LL;
	volatile int32_t t110 = 467;

    t110 = (x441>(x442<=(x443&x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x445 = UINT8_MAX;
	static int64_t x446 = INT64_MIN;
	int32_t x447 = INT32_MIN;
	uint8_t x448 = UINT8_MAX;
	static volatile int32_t t111 = 9287;

    t111 = (x445>(x446<=(x447&x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = 240;
	static volatile int32_t x451 = -31;
	static uint8_t x452 = 31U;
	int32_t t112 = -188014;

    t112 = (x449>(x450<=(x451&x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint32_t x453 = UINT32_MAX;
	int16_t x454 = -1;
	volatile uint32_t x455 = 473U;
	static int64_t x456 = INT64_MIN;
	static int32_t t113 = -57360162;

    t113 = (x453>(x454<=(x455&x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x457 = 53U;
	int16_t x458 = -1;
	int16_t x459 = INT16_MAX;
	uint16_t x460 = UINT16_MAX;
	static int32_t t114 = -1;

    t114 = (x457>(x458<=(x459&x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = INT64_MAX;
	volatile int64_t x462 = INT64_MAX;
	int64_t x464 = INT64_MAX;
	volatile int32_t t115 = 19;

    t115 = (x461>(x462<=(x463&x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -1;
	uint32_t x466 = 233078029U;
	int16_t x467 = INT16_MIN;
	int64_t x468 = INT64_MIN;
	int32_t t116 = 2;

    t116 = (x465>(x466<=(x467&x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MIN;
	int16_t x470 = INT16_MAX;
	uint32_t x471 = 5584785U;
	uint16_t x472 = 0U;

    t117 = (x469>(x470<=(x471&x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = 1;
	uint32_t x474 = 1126794U;
	int16_t x475 = -1;
	volatile int8_t x476 = INT8_MIN;
	volatile int32_t t118 = -177837204;

    t118 = (x473>(x474<=(x475&x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int8_t x477 = -1;
	int8_t x478 = 0;
	static int32_t x479 = INT32_MIN;
	int16_t x480 = INT16_MAX;
	volatile int32_t t119 = 1968;

    t119 = (x477>(x478<=(x479&x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 2188U;
	int32_t x482 = INT32_MIN;
	int8_t x483 = -1;
	static int32_t x484 = INT32_MIN;

    t120 = (x481>(x482<=(x483&x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x486 = -1;
	uint8_t x488 = UINT8_MAX;
	volatile int32_t t121 = 2162;

    t121 = (x485>(x486<=(x487&x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 410207741068LLU;
	uint32_t x490 = 5708168U;
	int64_t x491 = 138923155361LL;
	uint16_t x492 = 20279U;
	int32_t t122 = 205;

    t122 = (x489>(x490<=(x491&x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = UINT8_MAX;
	static int16_t x495 = INT16_MAX;
	int16_t x496 = 1;
	volatile int32_t t123 = -1;

    t123 = (x493>(x494<=(x495&x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x497 = 253075941LLU;
	uint64_t x498 = 24379969870LLU;
	volatile int16_t x499 = INT16_MIN;
	static int64_t x500 = -1LL;
	volatile int32_t t124 = -441241765;

    t124 = (x497>(x498<=(x499&x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x501 = INT32_MAX;
	int8_t x502 = -8;
	int64_t x503 = -1LL;
	static int32_t t125 = 9;

    t125 = (x501>(x502<=(x503&x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MIN;
	int32_t x506 = INT32_MAX;
	static int32_t x508 = -4180570;
	int32_t t126 = 2;

    t126 = (x505>(x506<=(x507&x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = 52595;
	int8_t x511 = INT8_MIN;
	volatile uint32_t x512 = 818U;
	int32_t t127 = 211097;

    t127 = (x509>(x510<=(x511&x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = 4U;
	int64_t x514 = INT64_MIN;
	int32_t x515 = 6;
	int32_t x516 = -771;
	int32_t t128 = 131522;

    t128 = (x513>(x514<=(x515&x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x517 = UINT32_MAX;
	uint16_t x518 = UINT16_MAX;
	int8_t x519 = INT8_MIN;
	int64_t x520 = INT64_MIN;

    t129 = (x517>(x518<=(x519&x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = 6U;
	static volatile uint32_t x522 = 49106723U;
	static int64_t x523 = -35217618LL;
	int8_t x524 = INT8_MIN;
	int32_t t130 = 9;

    t130 = (x521>(x522<=(x523&x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -1;
	int32_t x526 = -6;
	int64_t x527 = INT64_MAX;
	int32_t t131 = -10858;

    t131 = (x525>(x526<=(x527&x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x529 = INT64_MIN;
	int16_t x530 = 0;
	int16_t x531 = -1;

    t132 = (x529>(x530<=(x531&x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x534 = INT16_MAX;
	int32_t x535 = -1;
	static volatile int32_t t133 = 2;

    t133 = (x533>(x534<=(x535&x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x538 = 28717;
	static uint8_t x539 = 48U;
	uint8_t x540 = 5U;
	int32_t t134 = -32809510;

    t134 = (x537>(x538<=(x539&x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x541 = 98869193LLU;
	volatile uint8_t x542 = 1U;
	int64_t x543 = INT64_MAX;
	int64_t x544 = -226854408826453250LL;

    t135 = (x541>(x542<=(x543&x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x545 = INT8_MIN;
	uint64_t x547 = 54544168824582129LLU;
	int16_t x548 = INT16_MAX;
	volatile int32_t t136 = 862;

    t136 = (x545>(x546<=(x547&x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = INT64_MIN;
	int32_t x550 = INT32_MIN;
	static volatile int32_t x552 = -624453792;
	int32_t t137 = -153;

    t137 = (x549>(x550<=(x551&x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = -1;
	uint64_t x556 = 7180699170087LLU;
	int32_t t138 = 10610312;

    t138 = (x553>(x554<=(x555&x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x557 = INT64_MAX;
	uint32_t x558 = 284U;
	int16_t x559 = 21;
	uint8_t x560 = 12U;
	volatile int32_t t139 = -25;

    t139 = (x557>(x558<=(x559&x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	volatile int8_t x562 = INT8_MIN;
	int8_t x564 = INT8_MIN;
	static volatile int32_t t140 = -336423601;

    t140 = (x561>(x562<=(x563&x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x566 = 101U;
	int8_t x567 = INT8_MAX;
	int64_t x568 = -126844LL;
	int32_t t141 = 222;

    t141 = (x565>(x566<=(x567&x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x569 = UINT16_MAX;
	int8_t x570 = INT8_MIN;
	int16_t x571 = -187;
	uint64_t x572 = 18210488LLU;
	volatile int32_t t142 = 444754;

    t142 = (x569>(x570<=(x571&x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x573 = 46LLU;
	static int64_t x574 = 9LL;
	int32_t x575 = 182;
	volatile int16_t x576 = -427;

    t143 = (x573>(x574<=(x575&x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x578 = INT8_MIN;
	int64_t x579 = -1LL;
	uint8_t x580 = UINT8_MAX;
	int32_t t144 = 744201;

    t144 = (x577>(x578<=(x579&x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x581 = -1;
	int8_t x582 = 10;
	static int32_t t145 = 162039;

    t145 = (x581>(x582<=(x583&x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = 35U;
	uint16_t x587 = UINT16_MAX;
	int64_t x588 = 270420LL;
	volatile int32_t t146 = -13;

    t146 = (x585>(x586<=(x587&x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	volatile int64_t x590 = 4023373LL;
	uint64_t x591 = 54414445329711909LLU;
	volatile int64_t x592 = -126490141047677761LL;

    t147 = (x589>(x590<=(x591&x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x593 = INT8_MIN;
	uint8_t x594 = 2U;
	int16_t x595 = -1;
	volatile int16_t x596 = -866;
	volatile int32_t t148 = -247;

    t148 = (x593>(x594<=(x595&x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = 3960698776883LL;
	static int16_t x598 = 0;
	volatile uint8_t x600 = 0U;

    t149 = (x597>(x598<=(x599&x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x601 = 19U;
	volatile int32_t x602 = INT32_MIN;
	uint16_t x604 = 16U;
	static int32_t t150 = 53;

    t150 = (x601>(x602<=(x603&x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int8_t x606 = -7;
	int8_t x607 = INT8_MAX;
	uint8_t x608 = 0U;

    t151 = (x605>(x606<=(x607&x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = UINT8_MAX;
	int32_t x610 = -1;
	uint8_t x611 = 4U;
	volatile int8_t x612 = -1;

    t152 = (x609>(x610<=(x611&x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x614 = -1LL;
	int16_t x615 = INT16_MIN;
	int64_t x616 = -1LL;

    t153 = (x613>(x614<=(x615&x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -26964713094942LL;
	int16_t x619 = 9;
	volatile uint16_t x620 = 1842U;
	static volatile int32_t t154 = -1196042;

    t154 = (x617>(x618<=(x619&x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = 306U;
	int16_t x622 = -649;
	static uint64_t x623 = 34719LLU;
	uint32_t x624 = 188610484U;
	volatile int32_t t155 = 3666147;

    t155 = (x621>(x622<=(x623&x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x625 = UINT16_MAX;
	uint16_t x626 = UINT16_MAX;
	static int64_t x627 = INT64_MAX;
	volatile uint32_t x628 = 94U;
	static volatile int32_t t156 = -21;

    t156 = (x625>(x626<=(x627&x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x629 = 1U;
	int32_t x630 = INT32_MIN;
	uint16_t x631 = UINT16_MAX;
	int32_t x632 = INT32_MAX;
	volatile int32_t t157 = -143;

    t157 = (x629>(x630<=(x631&x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = 12U;
	uint64_t x634 = UINT64_MAX;
	static uint16_t x635 = 109U;
	int16_t x636 = INT16_MIN;
	volatile int32_t t158 = -4;

    t158 = (x633>(x634<=(x635&x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MIN;
	int8_t x638 = INT8_MAX;
	volatile int32_t x640 = INT32_MIN;
	int32_t t159 = -5069;

    t159 = (x637>(x638<=(x639&x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -1LL;
	static int32_t x642 = -3;
	uint32_t x643 = 8237U;
	int32_t x644 = 23;

    t160 = (x641>(x642<=(x643&x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MAX;
	uint8_t x646 = 31U;
	static volatile int32_t x647 = -1;
	static int8_t x648 = -6;
	int32_t t161 = 198;

    t161 = (x645>(x646<=(x647&x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = -2;
	uint16_t x650 = UINT16_MAX;
	volatile int16_t x652 = INT16_MIN;
	int32_t t162 = -22824;

    t162 = (x649>(x650<=(x651&x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MAX;
	int16_t x654 = -1;
	int8_t x655 = INT8_MIN;
	static uint32_t x656 = 385675061U;
	int32_t t163 = -4080;

    t163 = (x653>(x654<=(x655&x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x657 = 7442U;
	int64_t x658 = INT64_MIN;
	int16_t x659 = -1;
	int64_t x660 = 2606722720LL;

    t164 = (x657>(x658<=(x659&x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x663 = INT64_MAX;
	int16_t x664 = INT16_MAX;
	volatile int32_t t165 = -3825;

    t165 = (x661>(x662<=(x663&x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = -1;
	int8_t x666 = -37;
	int32_t x667 = INT32_MIN;
	volatile int32_t t166 = -78213144;

    t166 = (x665>(x666<=(x667&x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x670 = INT32_MAX;
	uint64_t x671 = 185591LLU;
	static int8_t x672 = INT8_MIN;
	int32_t t167 = 138705;

    t167 = (x669>(x670<=(x671&x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = 61;
	int64_t x676 = -1LL;
	volatile int32_t t168 = 21081317;

    t168 = (x673>(x674<=(x675&x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x678 = INT8_MIN;
	int16_t x680 = 42;
	volatile int32_t t169 = -29927670;

    t169 = (x677>(x678<=(x679&x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x683 = INT32_MIN;
	uint16_t x684 = 8168U;
	volatile int32_t t170 = -2145;

    t170 = (x681>(x682<=(x683&x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = 4084;
	int64_t x686 = -452146227421816875LL;
	uint16_t x687 = UINT16_MAX;
	int32_t t171 = -159870901;

    t171 = (x685>(x686<=(x687&x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x689 = 474720778U;
	int32_t x691 = 66650;
	volatile int16_t x692 = -3;
	static int32_t t172 = 276568;

    t172 = (x689>(x690<=(x691&x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x693 = -1;
	int32_t x694 = INT32_MAX;
	int8_t x696 = -1;
	static int32_t t173 = -71;

    t173 = (x693>(x694<=(x695&x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MAX;
	int64_t x698 = INT64_MIN;
	uint32_t x699 = 151U;
	volatile int8_t x700 = INT8_MAX;
	static int32_t t174 = 7249341;

    t174 = (x697>(x698<=(x699&x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = 25;
	int8_t x702 = INT8_MAX;
	int8_t x703 = INT8_MIN;
	int32_t t175 = -2587;

    t175 = (x701>(x702<=(x703&x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x705 = 1993U;
	volatile uint32_t x707 = 5U;
	volatile int32_t t176 = -1;

    t176 = (x705>(x706<=(x707&x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int16_t x709 = -1;
	int32_t x711 = 900706140;
	int32_t x712 = INT32_MAX;
	int32_t t177 = 1625768;

    t177 = (x709>(x710<=(x711&x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x713 = 0LL;
	uint32_t x714 = 1959U;
	uint64_t x715 = 2285LLU;
	volatile uint64_t x716 = 172LLU;
	volatile int32_t t178 = -437484;

    t178 = (x713>(x714<=(x715&x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x717 = 3LLU;
	static volatile uint16_t x718 = 1141U;
	static int16_t x719 = 2;
	int32_t t179 = 5955;

    t179 = (x717>(x718<=(x719&x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 224630861LLU;
	volatile int32_t x722 = -145;
	static int32_t t180 = 369041471;

    t180 = (x721>(x722<=(x723&x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = 5259U;
	static int16_t x726 = INT16_MIN;
	uint8_t x728 = UINT8_MAX;
	volatile int32_t t181 = 27263169;

    t181 = (x725>(x726<=(x727&x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x729 = INT16_MIN;
	static int32_t x730 = -1;
	volatile int32_t x731 = INT32_MAX;
	volatile int16_t x732 = -738;

    t182 = (x729>(x730<=(x731&x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MAX;
	int16_t x734 = -1;
	uint16_t x735 = 74U;
	int64_t x736 = -1LL;
	volatile int32_t t183 = 6;

    t183 = (x733>(x734<=(x735&x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MAX;
	volatile int32_t x738 = -1;
	int64_t x739 = -1LL;
	int16_t x740 = -483;
	int32_t t184 = -44;

    t184 = (x737>(x738<=(x739&x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MAX;
	uint64_t x743 = UINT64_MAX;
	int32_t x744 = INT32_MIN;
	volatile int32_t t185 = -874883044;

    t185 = (x741>(x742<=(x743&x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x745 = -848400012;
	int16_t x746 = 172;
	uint8_t x748 = 12U;
	volatile int32_t t186 = 3286;

    t186 = (x745>(x746<=(x747&x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = -1;
	uint8_t x750 = 1U;
	static int8_t x751 = INT8_MIN;
	int32_t x752 = 31740;
	int32_t t187 = -16670576;

    t187 = (x749>(x750<=(x751&x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x753 = INT64_MIN;
	int8_t x754 = INT8_MIN;
	int64_t x755 = INT64_MIN;
	int16_t x756 = INT16_MIN;
	int32_t t188 = -31470;

    t188 = (x753>(x754<=(x755&x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 38115895U;
	static volatile int8_t x758 = -23;
	int64_t x759 = INT64_MIN;
	static int8_t x760 = -1;
	int32_t t189 = -107668808;

    t189 = (x757>(x758<=(x759&x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = 1405;
	int8_t x762 = -1;
	int16_t x763 = -1;
	uint8_t x764 = 0U;
	int32_t t190 = -2;

    t190 = (x761>(x762<=(x763&x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = 99;
	int8_t x766 = INT8_MIN;
	static int64_t x767 = -961LL;
	int32_t t191 = 27;

    t191 = (x765>(x766<=(x767&x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x770 = UINT64_MAX;
	int8_t x772 = INT8_MIN;
	volatile int32_t t192 = 123910413;

    t192 = (x769>(x770<=(x771&x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = 51;
	int64_t x774 = -653727521027046LL;
	volatile int8_t x776 = -1;
	int32_t t193 = 2;

    t193 = (x773>(x774<=(x775&x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = -1;
	uint64_t x778 = 213680LLU;
	uint16_t x779 = 320U;
	volatile int8_t x780 = 12;
	int32_t t194 = 1376;

    t194 = (x777>(x778<=(x779&x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x781 = -2806730;
	static volatile int64_t x782 = INT64_MIN;
	static int64_t x783 = INT64_MIN;
	int64_t x784 = -1LL;
	volatile int32_t t195 = 59;

    t195 = (x781>(x782<=(x783&x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = 0;
	int64_t x786 = -1LL;
	static int16_t x787 = INT16_MIN;
	int16_t x788 = INT16_MIN;
	volatile int32_t t196 = 505748677;

    t196 = (x785>(x786<=(x787&x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x790 = INT16_MAX;
	volatile uint8_t x791 = 0U;
	int64_t x792 = INT64_MIN;

    t197 = (x789>(x790<=(x791&x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = 3;
	int32_t x795 = -1;
	volatile uint8_t x796 = UINT8_MAX;
	volatile int32_t t198 = 13;

    t198 = (x793>(x794<=(x795&x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x797 = 332;
	static volatile uint16_t x798 = 1607U;
	volatile int8_t x799 = INT8_MAX;
	int64_t x800 = INT64_MIN;
	volatile int32_t t199 = 2834;

    t199 = (x797>(x798<=(x799&x800)));

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

