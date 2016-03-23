
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

int32_t x3 = INT32_MAX;
static int32_t t0 = 0;
int8_t x10 = INT8_MIN;
int64_t x15 = -1LL;
volatile int8_t x17 = INT8_MIN;
volatile uint64_t x24 = 17976929597388973LLU;
int32_t x33 = -1852;
volatile int32_t t8 = 1;
static volatile int32_t t9 = -214887;
static uint8_t x41 = 97U;
int16_t x42 = INT16_MIN;
int32_t t10 = -159;
int16_t x46 = INT16_MIN;
volatile uint8_t x48 = 123U;
volatile int32_t t12 = 7876483;
static int64_t x56 = -1LL;
int64_t x63 = INT64_MIN;
uint64_t x64 = 21023LLU;
int32_t t15 = -11748;
static volatile uint64_t x67 = 0LLU;
static volatile int32_t x68 = INT32_MIN;
int32_t t17 = -1138;
int64_t x78 = INT64_MIN;
int16_t x81 = -49;
int32_t x87 = 0;
volatile int32_t x89 = -3732786;
int8_t x91 = INT8_MAX;
int16_t x98 = INT16_MIN;
volatile int64_t x100 = INT64_MIN;
volatile int32_t t27 = -59;
static int8_t x114 = INT8_MAX;
volatile int32_t x119 = INT32_MIN;
int32_t t29 = 308625;
volatile int16_t x134 = -1;
int32_t x139 = INT32_MIN;
int32_t x157 = INT32_MIN;
volatile int32_t x163 = 406193;
static int16_t x164 = -1;
static int64_t x168 = INT64_MIN;
volatile int32_t t41 = -12992589;
static volatile int64_t x180 = INT64_MIN;
volatile int32_t t44 = -26049531;
int32_t x190 = -1721752;
int64_t x191 = INT64_MIN;
static int8_t x197 = -9;
volatile int8_t x199 = INT8_MIN;
static int32_t t50 = 483043;
uint8_t x205 = UINT8_MAX;
volatile uint16_t x207 = 15344U;
volatile int32_t t52 = -27;
static uint16_t x215 = 3U;
int16_t x216 = 49;
int16_t x217 = INT16_MIN;
int32_t x220 = 11125801;
int32_t x223 = INT32_MAX;
int64_t x225 = INT64_MIN;
int8_t x226 = 19;
int8_t x227 = INT8_MIN;
int16_t x234 = INT16_MIN;
volatile int16_t x236 = INT16_MIN;
volatile int16_t x238 = 44;
volatile int32_t x240 = INT32_MAX;
int64_t x244 = INT64_MAX;
int8_t x246 = -18;
uint16_t x250 = 14147U;
int8_t x251 = 13;
int64_t x252 = INT64_MAX;
uint64_t x256 = 254712682419LLU;
int64_t x258 = INT64_MAX;
volatile uint32_t x261 = 1103925U;
int8_t x263 = INT8_MIN;
volatile int32_t t65 = -225;
int32_t x268 = INT32_MIN;
static int16_t x269 = INT16_MIN;
volatile uint64_t x270 = 14953311954893LLU;
volatile int8_t x275 = INT8_MIN;
int32_t x276 = INT32_MAX;
volatile int32_t t68 = 1793;
int32_t x293 = INT32_MIN;
int8_t x294 = INT8_MAX;
int64_t x295 = -1LL;
volatile int32_t t73 = -47;
uint8_t x297 = UINT8_MAX;
int8_t x298 = INT8_MAX;
static volatile uint32_t x300 = UINT32_MAX;
volatile int32_t t74 = -5509892;
int32_t x301 = -1;
volatile uint64_t x307 = UINT64_MAX;
volatile int32_t t76 = 251827;
static uint8_t x309 = UINT8_MAX;
static int8_t x310 = INT8_MAX;
uint16_t x311 = UINT16_MAX;
int8_t x314 = 3;
static int32_t x316 = -31;
static volatile int32_t t78 = 3797;
uint64_t x320 = 4859529258260191LLU;
int8_t x321 = 1;
volatile int16_t x323 = INT16_MIN;
int64_t x327 = -1LL;
static volatile int32_t t81 = -527;
volatile int8_t x333 = INT8_MAX;
int64_t x340 = INT64_MAX;
int16_t x343 = -21;
static int32_t t86 = 14866;
volatile int32_t x355 = INT32_MIN;
int32_t x361 = -1;
int16_t x365 = 834;
int16_t x366 = -1;
int32_t x368 = INT32_MIN;
int16_t x372 = 2603;
int16_t x379 = 7457;
uint16_t x385 = 12U;
int32_t x389 = -1;
int8_t x406 = 3;
volatile int32_t t101 = -1162123;
int64_t x413 = INT64_MIN;
int32_t x415 = INT32_MIN;
uint16_t x416 = 19U;
uint32_t x420 = UINT32_MAX;
int16_t x423 = INT16_MIN;
volatile int8_t x424 = -11;
int32_t t105 = -759;
int64_t x426 = INT64_MAX;
static uint32_t x427 = 115832966U;
static volatile int16_t x428 = -1;
uint64_t x434 = UINT64_MAX;
int16_t x436 = INT16_MAX;
volatile uint16_t x439 = 694U;
volatile int32_t x440 = 184;
int32_t t109 = -4813294;
static uint32_t x444 = 14U;
uint16_t x446 = 25774U;
int16_t x449 = INT16_MAX;
volatile int32_t x451 = -9;
uint16_t x457 = 23U;
volatile int64_t x461 = INT64_MIN;
int64_t x463 = INT64_MIN;
int64_t x465 = 466LL;
uint8_t x466 = UINT8_MAX;
volatile int64_t x469 = INT64_MIN;
static uint64_t x472 = 1LLU;
uint64_t x480 = UINT64_MAX;
static int32_t x491 = INT32_MIN;
int64_t x495 = -1LL;
uint16_t x500 = UINT16_MAX;
int16_t x503 = INT16_MIN;
int64_t x515 = INT64_MIN;
int32_t t128 = -846;
int32_t x524 = INT32_MIN;
int32_t t130 = 159229397;
int64_t x526 = INT64_MIN;
static uint16_t x527 = 55U;
static int32_t x528 = INT32_MIN;
static int16_t x529 = -1;
static int32_t x535 = INT32_MAX;
static volatile int32_t t133 = -3;
int8_t x542 = 20;
int8_t x543 = INT8_MIN;
int8_t x548 = -1;
static int32_t t136 = -3504350;
static volatile uint32_t x550 = 2U;
volatile int32_t t137 = -165;
uint16_t x557 = 126U;
int16_t x561 = INT16_MIN;
int64_t x563 = INT64_MIN;
uint16_t x567 = 13230U;
int64_t x575 = 5781803416LL;
volatile int32_t t143 = -52397;
volatile int32_t t145 = -294721340;
static volatile int64_t x587 = INT64_MIN;
static volatile int32_t t146 = 112;
int64_t x589 = INT64_MIN;
int64_t x594 = 539642275866LL;
volatile int64_t x597 = -1LL;
int32_t t149 = 78313;
static int8_t x601 = 15;
uint16_t x605 = 3702U;
int32_t t152 = -688193874;
volatile int32_t t153 = 29;
uint64_t x618 = UINT64_MAX;
volatile int32_t x625 = 3116204;
volatile int32_t t157 = 0;
int64_t x640 = INT64_MIN;
volatile int32_t t160 = 84;
volatile uint32_t x647 = 126U;
volatile int8_t x657 = 3;
int64_t x660 = INT64_MIN;
static volatile int32_t x668 = INT32_MIN;
uint16_t x672 = 5520U;
int16_t x674 = -14;
int32_t t168 = 757711;
int16_t x679 = INT16_MIN;
int32_t x680 = INT32_MIN;
static int32_t x682 = INT32_MIN;
volatile int64_t x687 = -13706482LL;
int32_t t171 = -40;
uint8_t x700 = 31U;
uint16_t x710 = UINT16_MAX;
uint32_t x713 = 474U;
volatile int32_t t178 = 209;
volatile uint64_t x723 = 710LLU;
int8_t x725 = -2;
volatile int64_t x733 = INT64_MAX;
volatile int16_t x740 = -1;
int32_t t185 = -28679292;
int8_t x772 = 0;
int8_t x787 = INT8_MIN;
int8_t x789 = 9;
uint64_t x793 = UINT64_MAX;
uint32_t x796 = UINT32_MAX;


void f0(void) {
    	volatile int32_t x1 = INT32_MIN;
	int8_t x2 = INT8_MAX;
	static int8_t x4 = INT8_MIN;

    t0 = (((x1<=x2)!=x3)<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 51U;
	int16_t x6 = -1;
	int64_t x7 = INT64_MIN;
	volatile int64_t x8 = INT64_MIN;
	static volatile int32_t t1 = 1045112;

    t1 = (((x5<=x6)!=x7)<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = 43967686603196314LLU;
	uint8_t x11 = 39U;
	uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = -975;

    t2 = (((x9<=x10)!=x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = -1;
	int32_t x14 = INT32_MIN;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -4471678;

    t3 = (((x13<=x14)!=x15)<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = -1;
	uint16_t x19 = 19U;
	static uint32_t x20 = 808119U;
	int32_t t4 = -74517209;

    t4 = (((x17<=x18)!=x19)<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = -1;
	static volatile int16_t x22 = -1;
	static volatile int64_t x23 = INT64_MIN;
	int32_t t5 = -1054582;

    t5 = (((x21<=x22)!=x23)<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	int8_t x26 = INT8_MIN;
	static int64_t x27 = -1LL;
	uint16_t x28 = 445U;
	static volatile int32_t t6 = 97805257;

    t6 = (((x25<=x26)!=x27)<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 1U;
	uint16_t x30 = UINT16_MAX;
	int64_t x31 = INT64_MIN;
	static uint16_t x32 = 20U;
	int32_t t7 = 1165;

    t7 = (((x29<=x30)!=x31)<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x34 = UINT16_MAX;
	int8_t x35 = INT8_MIN;
	uint64_t x36 = 68154381871019LLU;

    t8 = (((x33<=x34)!=x35)<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x37 = UINT16_MAX;
	uint8_t x38 = 0U;
	static uint8_t x39 = 0U;
	uint16_t x40 = 5121U;

    t9 = (((x37<=x38)!=x39)<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x43 = INT16_MIN;
	int8_t x44 = -52;

    t10 = (((x41<=x42)!=x43)<=x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1LL;
	int8_t x47 = INT8_MIN;
	volatile int32_t t11 = -49060761;

    t11 = (((x45<=x46)!=x47)<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	volatile int16_t x50 = INT16_MAX;
	uint64_t x51 = 1487166001347018LLU;
	int16_t x52 = INT16_MIN;

    t12 = (((x49<=x50)!=x51)<=x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x53 = INT64_MIN;
	volatile uint64_t x54 = UINT64_MAX;
	uint64_t x55 = UINT64_MAX;
	int32_t t13 = 1;

    t13 = (((x53<=x54)!=x55)<=x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	int64_t x58 = INT64_MAX;
	uint16_t x59 = 7U;
	volatile int16_t x60 = 7175;
	static volatile int32_t t14 = 15765;

    t14 = (((x57<=x58)!=x59)<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = 1LL;
	int64_t x62 = INT64_MIN;

    t15 = (((x61<=x62)!=x63)<=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MAX;
	uint64_t x66 = UINT64_MAX;
	int32_t t16 = -412043775;

    t16 = (((x65<=x66)!=x67)<=x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 278195U;
	static uint64_t x70 = 269372784996LLU;
	int64_t x71 = -1LL;
	int64_t x72 = -30246243LL;

    t17 = (((x69<=x70)!=x71)<=x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x73 = INT64_MAX;
	uint8_t x74 = UINT8_MAX;
	uint8_t x75 = 0U;
	int8_t x76 = 57;
	int32_t t18 = 99005;

    t18 = (((x73<=x74)!=x75)<=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x77 = 1U;
	int8_t x79 = INT8_MIN;
	uint32_t x80 = UINT32_MAX;
	int32_t t19 = -1;

    t19 = (((x77<=x78)!=x79)<=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x82 = 0;
	int32_t x83 = -185995806;
	int16_t x84 = INT16_MIN;
	volatile int32_t t20 = 7131;

    t20 = (((x81<=x82)!=x83)<=x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 86U;
	volatile int32_t x86 = INT32_MIN;
	uint16_t x88 = UINT16_MAX;
	static int32_t t21 = -49;

    t21 = (((x85<=x86)!=x87)<=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x90 = 0;
	int16_t x92 = INT16_MIN;
	volatile int32_t t22 = 10;

    t22 = (((x89<=x90)!=x91)<=x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x93 = 25U;
	int64_t x94 = INT64_MAX;
	int32_t x95 = INT32_MIN;
	volatile int32_t x96 = INT32_MAX;
	int32_t t23 = 6353313;

    t23 = (((x93<=x94)!=x95)<=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 100U;
	int32_t x99 = -1;
	int32_t t24 = -195021;

    t24 = (((x97<=x98)!=x99)<=x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	int8_t x102 = 1;
	uint64_t x103 = 57460LLU;
	volatile int8_t x104 = INT8_MIN;
	volatile int32_t t25 = -746562886;

    t25 = (((x101<=x102)!=x103)<=x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = -1LL;
	int16_t x106 = INT16_MAX;
	static volatile uint32_t x107 = 13110U;
	volatile int16_t x108 = INT16_MAX;
	static int32_t t26 = 1998778;

    t26 = (((x105<=x106)!=x107)<=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = UINT8_MAX;
	uint32_t x110 = UINT32_MAX;
	uint64_t x111 = 950125LLU;
	uint8_t x112 = 3U;

    t27 = (((x109<=x110)!=x111)<=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = INT16_MIN;
	volatile uint8_t x115 = UINT8_MAX;
	int8_t x116 = -27;
	static volatile int32_t t28 = -10;

    t28 = (((x113<=x114)!=x115)<=x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x117 = UINT64_MAX;
	int64_t x118 = -148772LL;
	volatile int32_t x120 = INT32_MAX;

    t29 = (((x117<=x118)!=x119)<=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = 18974203993288LL;
	int16_t x122 = INT16_MIN;
	static int64_t x123 = -1LL;
	volatile int8_t x124 = 2;
	int32_t t30 = -37;

    t30 = (((x121<=x122)!=x123)<=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	uint16_t x126 = UINT16_MAX;
	uint8_t x127 = 1U;
	int64_t x128 = -1LL;
	int32_t t31 = 627518331;

    t31 = (((x125<=x126)!=x127)<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -1975277LL;
	int64_t x130 = -1LL;
	int64_t x131 = -1LL;
	int8_t x132 = 1;
	int32_t t32 = 71;

    t32 = (((x129<=x130)!=x131)<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MAX;
	int64_t x135 = INT64_MAX;
	static int8_t x136 = -1;
	int32_t t33 = 47498421;

    t33 = (((x133<=x134)!=x135)<=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	static int8_t x138 = INT8_MIN;
	volatile int8_t x140 = -1;
	volatile int32_t t34 = 169372372;

    t34 = (((x137<=x138)!=x139)<=x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x141 = UINT16_MAX;
	uint64_t x142 = 6LLU;
	static int64_t x143 = INT64_MIN;
	volatile uint8_t x144 = UINT8_MAX;
	int32_t t35 = 4;

    t35 = (((x141<=x142)!=x143)<=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x145 = -1;
	int64_t x146 = INT64_MIN;
	int16_t x147 = 0;
	uint32_t x148 = 98779U;
	volatile int32_t t36 = -375231140;

    t36 = (((x145<=x146)!=x147)<=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = 16U;
	int16_t x150 = INT16_MAX;
	volatile uint8_t x151 = 109U;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t37 = -2315166;

    t37 = (((x149<=x150)!=x151)<=x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -1;
	int32_t x154 = -685647101;
	volatile int8_t x155 = -1;
	uint8_t x156 = UINT8_MAX;
	static int32_t t38 = -1862;

    t38 = (((x153<=x154)!=x155)<=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x158 = UINT8_MAX;
	uint32_t x159 = UINT32_MAX;
	static uint32_t x160 = 77U;
	int32_t t39 = 248;

    t39 = (((x157<=x158)!=x159)<=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MAX;
	static volatile uint32_t x162 = 455773U;
	int32_t t40 = 126265;

    t40 = (((x161<=x162)!=x163)<=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -1;
	int8_t x166 = INT8_MIN;
	int16_t x167 = INT16_MIN;

    t41 = (((x165<=x166)!=x167)<=x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = UINT8_MAX;
	uint16_t x170 = UINT16_MAX;
	uint16_t x171 = UINT16_MAX;
	int32_t x172 = -1132;
	int32_t t42 = -303;

    t42 = (((x169<=x170)!=x171)<=x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x173 = INT16_MAX;
	int64_t x174 = INT64_MIN;
	int32_t x175 = -1;
	int64_t x176 = 55383LL;
	int32_t t43 = -9485331;

    t43 = (((x173<=x174)!=x175)<=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MIN;
	static int16_t x178 = -1;
	volatile uint8_t x179 = 3U;

    t44 = (((x177<=x178)!=x179)<=x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	volatile uint32_t x182 = 882U;
	int8_t x183 = INT8_MAX;
	int16_t x184 = INT16_MIN;
	static volatile int32_t t45 = -19953;

    t45 = (((x181<=x182)!=x183)<=x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -33;
	static uint64_t x186 = UINT64_MAX;
	volatile int8_t x187 = 0;
	int8_t x188 = INT8_MAX;
	int32_t t46 = 753;

    t46 = (((x185<=x186)!=x187)<=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = UINT8_MAX;
	uint8_t x192 = UINT8_MAX;
	int32_t t47 = -23168;

    t47 = (((x189<=x190)!=x191)<=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = 1;
	uint64_t x194 = 234036750461710130LLU;
	uint16_t x195 = UINT16_MAX;
	int16_t x196 = -75;
	volatile int32_t t48 = 59791;

    t48 = (((x193<=x194)!=x195)<=x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = INT16_MIN;
	volatile int8_t x200 = INT8_MIN;
	volatile int32_t t49 = -5290;

    t49 = (((x197<=x198)!=x199)<=x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 1472U;
	volatile int32_t x202 = 539;
	static uint16_t x203 = 14U;
	uint16_t x204 = 14U;

    t50 = (((x201<=x202)!=x203)<=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x206 = -1;
	volatile int8_t x208 = -1;
	int32_t t51 = 2;

    t51 = (((x205<=x206)!=x207)<=x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MAX;
	int32_t x210 = 1;
	int64_t x211 = INT64_MAX;
	uint16_t x212 = 2U;

    t52 = (((x209<=x210)!=x211)<=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	uint8_t x214 = 18U;
	int32_t t53 = 704;

    t53 = (((x213<=x214)!=x215)<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x218 = UINT64_MAX;
	volatile int16_t x219 = INT16_MAX;
	int32_t t54 = -4711;

    t54 = (((x217<=x218)!=x219)<=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x221 = -1LL;
	int8_t x222 = INT8_MIN;
	int8_t x224 = INT8_MAX;
	int32_t t55 = 1;

    t55 = (((x221<=x222)!=x223)<=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x228 = 3LLU;
	int32_t t56 = 2701505;

    t56 = (((x225<=x226)!=x227)<=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MAX;
	static int8_t x230 = -3;
	static int16_t x231 = 0;
	uint16_t x232 = 75U;
	int32_t t57 = 0;

    t57 = (((x229<=x230)!=x231)<=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x233 = -1;
	static int64_t x235 = INT64_MAX;
	volatile int32_t t58 = -1;

    t58 = (((x233<=x234)!=x235)<=x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x237 = 6;
	uint32_t x239 = 11U;
	int32_t t59 = -497;

    t59 = (((x237<=x238)!=x239)<=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x241 = INT32_MAX;
	int16_t x242 = INT16_MAX;
	int64_t x243 = -3398523305365503LL;
	volatile int32_t t60 = -915;

    t60 = (((x241<=x242)!=x243)<=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = 1LL;
	int16_t x247 = -1;
	volatile uint32_t x248 = 467U;
	int32_t t61 = -3547515;

    t61 = (((x245<=x246)!=x247)<=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	volatile int32_t t62 = 1594;

    t62 = (((x249<=x250)!=x251)<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MAX;
	volatile int64_t x254 = INT64_MIN;
	int32_t x255 = INT32_MAX;
	static volatile int32_t t63 = -107428;

    t63 = (((x253<=x254)!=x255)<=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MAX;
	int64_t x259 = INT64_MIN;
	static int8_t x260 = -4;
	volatile int32_t t64 = -8008373;

    t64 = (((x257<=x258)!=x259)<=x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x262 = -59005253LL;
	int32_t x264 = INT32_MAX;

    t65 = (((x261<=x262)!=x263)<=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = 54;
	uint16_t x266 = 75U;
	uint64_t x267 = 284071281652653884LLU;
	volatile int32_t t66 = 221928665;

    t66 = (((x265<=x266)!=x267)<=x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x271 = 2834U;
	int32_t x272 = INT32_MIN;
	static volatile int32_t t67 = -2;

    t67 = (((x269<=x270)!=x271)<=x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x273 = UINT64_MAX;
	volatile int8_t x274 = -1;

    t68 = (((x273<=x274)!=x275)<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MAX;
	uint64_t x278 = 224487905393LLU;
	volatile int16_t x279 = 34;
	uint8_t x280 = 58U;
	volatile int32_t t69 = 28520;

    t69 = (((x277<=x278)!=x279)<=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -1;
	int16_t x282 = INT16_MIN;
	int16_t x283 = -15136;
	uint32_t x284 = 636267384U;
	int32_t t70 = 13301292;

    t70 = (((x281<=x282)!=x283)<=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x285 = 1U;
	int64_t x286 = INT64_MAX;
	volatile int64_t x287 = -28020LL;
	volatile int32_t x288 = INT32_MAX;
	int32_t t71 = 6229;

    t71 = (((x285<=x286)!=x287)<=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x289 = INT64_MAX;
	int32_t x290 = INT32_MIN;
	int32_t x291 = INT32_MIN;
	int64_t x292 = INT64_MIN;
	volatile int32_t t72 = -267414447;

    t72 = (((x289<=x290)!=x291)<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x296 = UINT64_MAX;

    t73 = (((x293<=x294)!=x295)<=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x299 = -4558010926LL;

    t74 = (((x297<=x298)!=x299)<=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x302 = UINT32_MAX;
	int64_t x303 = INT64_MAX;
	static int32_t x304 = INT32_MAX;
	static volatile int32_t t75 = 303448919;

    t75 = (((x301<=x302)!=x303)<=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -187;
	int8_t x306 = INT8_MAX;
	uint16_t x308 = UINT16_MAX;

    t76 = (((x305<=x306)!=x307)<=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x312 = -1;
	int32_t t77 = 23968;

    t77 = (((x309<=x310)!=x311)<=x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = 205;
	static int32_t x315 = INT32_MAX;

    t78 = (((x313<=x314)!=x315)<=x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 1U;
	int16_t x318 = 27;
	uint16_t x319 = 1423U;
	int32_t t79 = -261085;

    t79 = (((x317<=x318)!=x319)<=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x322 = INT32_MIN;
	int16_t x324 = -1;
	int32_t t80 = -3864307;

    t80 = (((x321<=x322)!=x323)<=x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x325 = INT32_MIN;
	volatile int32_t x326 = -1;
	int32_t x328 = -1;

    t81 = (((x325<=x326)!=x327)<=x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = 22664;
	int8_t x330 = -40;
	static uint16_t x331 = 149U;
	volatile int32_t x332 = INT32_MIN;
	int32_t t82 = -1;

    t82 = (((x329<=x330)!=x331)<=x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x334 = -1;
	int64_t x335 = 524323038661260135LL;
	int64_t x336 = INT64_MIN;
	volatile int32_t t83 = -49;

    t83 = (((x333<=x334)!=x335)<=x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = 536599702607085112LLU;
	volatile uint32_t x338 = 12120839U;
	volatile int32_t x339 = INT32_MIN;
	static int32_t t84 = -5996599;

    t84 = (((x337<=x338)!=x339)<=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x341 = 15494U;
	static volatile int16_t x342 = INT16_MIN;
	static int32_t x344 = 0;
	volatile int32_t t85 = -5624;

    t85 = (((x341<=x342)!=x343)<=x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -1LL;
	volatile int8_t x346 = INT8_MIN;
	uint16_t x347 = UINT16_MAX;
	int32_t x348 = -1;

    t86 = (((x345<=x346)!=x347)<=x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x349 = UINT32_MAX;
	volatile int8_t x350 = INT8_MIN;
	volatile uint64_t x351 = UINT64_MAX;
	static uint16_t x352 = 651U;
	volatile int32_t t87 = 21110627;

    t87 = (((x349<=x350)!=x351)<=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int64_t x353 = -398787763LL;
	int64_t x354 = -392267859LL;
	static uint32_t x356 = 173174264U;
	volatile int32_t t88 = -10232715;

    t88 = (((x353<=x354)!=x355)<=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x357 = UINT64_MAX;
	static volatile uint64_t x358 = 2924923031322LLU;
	int64_t x359 = INT64_MAX;
	int64_t x360 = -15735LL;
	volatile int32_t t89 = -1;

    t89 = (((x357<=x358)!=x359)<=x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x362 = INT64_MAX;
	uint8_t x363 = UINT8_MAX;
	int8_t x364 = -9;
	volatile int32_t t90 = -53;

    t90 = (((x361<=x362)!=x363)<=x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x367 = -1;
	volatile int32_t t91 = 81905;

    t91 = (((x365<=x366)!=x367)<=x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int16_t x369 = -2;
	volatile int8_t x370 = -1;
	uint64_t x371 = 1341198575349713624LLU;
	int32_t t92 = 0;

    t92 = (((x369<=x370)!=x371)<=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x373 = -1LL;
	int32_t x374 = 10988;
	uint64_t x375 = 310282LLU;
	uint16_t x376 = 4556U;
	int32_t t93 = 1044939143;

    t93 = (((x373<=x374)!=x375)<=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	uint16_t x378 = 13692U;
	volatile int32_t x380 = INT32_MIN;
	volatile int32_t t94 = -1;

    t94 = (((x377<=x378)!=x379)<=x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x381 = -4528;
	uint8_t x382 = UINT8_MAX;
	uint32_t x383 = UINT32_MAX;
	uint64_t x384 = 35758205166614LLU;
	volatile int32_t t95 = 880374;

    t95 = (((x381<=x382)!=x383)<=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x386 = 56U;
	volatile int32_t x387 = -112;
	int32_t x388 = -434916675;
	static volatile int32_t t96 = 482;

    t96 = (((x385<=x386)!=x387)<=x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x390 = UINT8_MAX;
	uint8_t x391 = 7U;
	uint8_t x392 = 19U;
	volatile int32_t t97 = 1454896;

    t97 = (((x389<=x390)!=x391)<=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x393 = UINT64_MAX;
	int64_t x394 = INT64_MIN;
	static int8_t x395 = 45;
	uint64_t x396 = 1510568193640671509LLU;
	int32_t t98 = -180641480;

    t98 = (((x393<=x394)!=x395)<=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 145U;
	static volatile uint64_t x398 = UINT64_MAX;
	volatile int32_t x399 = INT32_MIN;
	int8_t x400 = 24;
	int32_t t99 = 0;

    t99 = (((x397<=x398)!=x399)<=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = INT64_MIN;
	int32_t x402 = -419169;
	int64_t x403 = INT64_MIN;
	int32_t x404 = 1;
	int32_t t100 = -1407;

    t100 = (((x401<=x402)!=x403)<=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = UINT8_MAX;
	uint16_t x407 = 18115U;
	volatile int64_t x408 = INT64_MIN;

    t101 = (((x405<=x406)!=x407)<=x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = -1;
	int64_t x410 = 1012434487LL;
	static volatile int16_t x411 = INT16_MIN;
	int64_t x412 = INT64_MAX;
	volatile int32_t t102 = 2488;

    t102 = (((x409<=x410)!=x411)<=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x414 = INT32_MIN;
	volatile int32_t t103 = 3931;

    t103 = (((x413<=x414)!=x415)<=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x417 = 26107749LLU;
	int32_t x418 = 2;
	static uint32_t x419 = UINT32_MAX;
	int32_t t104 = 11;

    t104 = (((x417<=x418)!=x419)<=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = 21198757LLU;
	int32_t x422 = INT32_MIN;

    t105 = (((x421<=x422)!=x423)<=x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	int32_t t106 = -124457212;

    t106 = (((x425<=x426)!=x427)<=x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	uint16_t x430 = UINT16_MAX;
	int8_t x431 = INT8_MAX;
	static uint64_t x432 = 1011220845LLU;
	int32_t t107 = -10;

    t107 = (((x429<=x430)!=x431)<=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = 1753;
	int32_t x435 = -1;
	volatile int32_t t108 = -623670185;

    t108 = (((x433<=x434)!=x435)<=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	static uint16_t x438 = 7U;

    t109 = (((x437<=x438)!=x439)<=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MAX;
	volatile uint8_t x442 = 34U;
	volatile int64_t x443 = INT64_MAX;
	static volatile int32_t t110 = -1479079;

    t110 = (((x441<=x442)!=x443)<=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x445 = INT32_MAX;
	int16_t x447 = INT16_MAX;
	static volatile int16_t x448 = INT16_MIN;
	int32_t t111 = 21847604;

    t111 = (((x445<=x446)!=x447)<=x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x450 = UINT64_MAX;
	uint16_t x452 = UINT16_MAX;
	static volatile int32_t t112 = 53917;

    t112 = (((x449<=x450)!=x451)<=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	static volatile int32_t x454 = INT32_MIN;
	static int8_t x455 = -1;
	static int16_t x456 = INT16_MIN;
	volatile int32_t t113 = -424213;

    t113 = (((x453<=x454)!=x455)<=x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x458 = -26383549;
	uint64_t x459 = 121198527249981597LLU;
	int8_t x460 = 1;
	int32_t t114 = 35791;

    t114 = (((x457<=x458)!=x459)<=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x462 = 22936321773354LLU;
	int32_t x464 = INT32_MAX;
	volatile int32_t t115 = -96227848;

    t115 = (((x461<=x462)!=x463)<=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x467 = -1;
	int16_t x468 = -1;
	static volatile int32_t t116 = -1891865;

    t116 = (((x465<=x466)!=x467)<=x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x470 = INT32_MAX;
	int32_t x471 = -1;
	int32_t t117 = 971066330;

    t117 = (((x469<=x470)!=x471)<=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x473 = INT8_MIN;
	int32_t x474 = 553;
	uint8_t x475 = 2U;
	uint64_t x476 = UINT64_MAX;
	int32_t t118 = -6;

    t118 = (((x473<=x474)!=x475)<=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -1;
	int64_t x478 = 238LL;
	uint32_t x479 = 15U;
	static volatile int32_t t119 = -15504;

    t119 = (((x477<=x478)!=x479)<=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x481 = 54;
	uint64_t x482 = 587LLU;
	uint16_t x483 = 106U;
	static uint64_t x484 = 2365746143585432351LLU;
	int32_t t120 = 190;

    t120 = (((x481<=x482)!=x483)<=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -1;
	uint64_t x486 = 8399957LLU;
	uint32_t x487 = 1213261U;
	int64_t x488 = INT64_MIN;
	int32_t t121 = 125;

    t121 = (((x485<=x486)!=x487)<=x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = -12617681826665716LL;
	static int16_t x490 = INT16_MIN;
	int32_t x492 = 776356505;
	static volatile int32_t t122 = 52437;

    t122 = (((x489<=x490)!=x491)<=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MIN;
	static volatile int64_t x494 = -21001945307769996LL;
	static volatile int32_t x496 = 125235294;
	static volatile int32_t t123 = 823;

    t123 = (((x493<=x494)!=x495)<=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = UINT8_MAX;
	int64_t x498 = -1LL;
	static volatile uint8_t x499 = 68U;
	int32_t t124 = 807;

    t124 = (((x497<=x498)!=x499)<=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x501 = INT64_MAX;
	volatile int8_t x502 = -4;
	int32_t x504 = -1;
	volatile int32_t t125 = -241563422;

    t125 = (((x501<=x502)!=x503)<=x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MIN;
	uint8_t x506 = 2U;
	int32_t x507 = -1;
	int8_t x508 = INT8_MAX;
	int32_t t126 = 59424559;

    t126 = (((x505<=x506)!=x507)<=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -1;
	int8_t x510 = INT8_MAX;
	int32_t x511 = 11;
	uint32_t x512 = 71U;
	int32_t t127 = 2518918;

    t127 = (((x509<=x510)!=x511)<=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x513 = 16161U;
	static int64_t x514 = INT64_MAX;
	static uint32_t x516 = UINT32_MAX;

    t128 = (((x513<=x514)!=x515)<=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MAX;
	volatile int8_t x518 = 2;
	uint32_t x519 = 483891U;
	int64_t x520 = -1LL;
	int32_t t129 = -7;

    t129 = (((x517<=x518)!=x519)<=x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = -7;
	uint32_t x522 = 17U;
	static volatile uint8_t x523 = 25U;

    t130 = (((x521<=x522)!=x523)<=x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = 115519841495914LLU;
	int32_t t131 = 1;

    t131 = (((x525<=x526)!=x527)<=x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x530 = INT8_MIN;
	uint16_t x531 = 6U;
	int8_t x532 = -58;
	int32_t t132 = -161380;

    t132 = (((x529<=x530)!=x531)<=x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = -1LL;
	static int16_t x534 = -1;
	static volatile int64_t x536 = INT64_MIN;

    t133 = (((x533<=x534)!=x535)<=x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 6156125992529336LLU;
	int8_t x538 = INT8_MIN;
	int8_t x539 = 39;
	static int32_t x540 = INT32_MIN;
	int32_t t134 = -379;

    t134 = (((x537<=x538)!=x539)<=x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x541 = 1199912LL;
	static int32_t x544 = 1325;
	int32_t t135 = 7;

    t135 = (((x541<=x542)!=x543)<=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x545 = 1U;
	int64_t x546 = INT64_MIN;
	volatile uint16_t x547 = UINT16_MAX;

    t136 = (((x545<=x546)!=x547)<=x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -1LL;
	int32_t x551 = 1864;
	int64_t x552 = -3487394LL;

    t137 = (((x549<=x550)!=x551)<=x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x553 = 1828575U;
	int8_t x554 = -1;
	int64_t x555 = 120370065817099811LL;
	static int32_t x556 = -61894287;
	volatile int32_t t138 = 7;

    t138 = (((x553<=x554)!=x555)<=x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x558 = INT64_MAX;
	int64_t x559 = -1LL;
	static int8_t x560 = 46;
	volatile int32_t t139 = -124819759;

    t139 = (((x557<=x558)!=x559)<=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x562 = INT16_MAX;
	static int32_t x564 = INT32_MIN;
	int32_t t140 = 24229;

    t140 = (((x561<=x562)!=x563)<=x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = INT8_MIN;
	uint8_t x566 = UINT8_MAX;
	int8_t x568 = -1;
	int32_t t141 = 45;

    t141 = (((x565<=x566)!=x567)<=x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = UINT8_MAX;
	int16_t x570 = -642;
	static int16_t x571 = 14;
	static volatile int64_t x572 = INT64_MIN;
	static int32_t t142 = 190940026;

    t142 = (((x569<=x570)!=x571)<=x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = 58425LLU;
	int8_t x574 = 0;
	uint8_t x576 = 115U;

    t143 = (((x573<=x574)!=x575)<=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = UINT8_MAX;
	static int16_t x578 = -5;
	static int32_t x579 = INT32_MAX;
	static uint64_t x580 = 270574634796LLU;
	int32_t t144 = -489;

    t144 = (((x577<=x578)!=x579)<=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MIN;
	uint32_t x582 = UINT32_MAX;
	volatile int8_t x583 = -1;
	uint64_t x584 = UINT64_MAX;

    t145 = (((x581<=x582)!=x583)<=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = -2;
	volatile uint8_t x586 = 5U;
	int32_t x588 = -1;

    t146 = (((x585<=x586)!=x587)<=x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x590 = 115605LLU;
	uint8_t x591 = 10U;
	static int64_t x592 = 20LL;
	int32_t t147 = 112;

    t147 = (((x589<=x590)!=x591)<=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x593 = INT16_MAX;
	int8_t x595 = INT8_MAX;
	static int64_t x596 = INT64_MIN;
	int32_t t148 = -212338267;

    t148 = (((x593<=x594)!=x595)<=x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x598 = INT16_MIN;
	uint64_t x599 = UINT64_MAX;
	uint32_t x600 = 2170822U;

    t149 = (((x597<=x598)!=x599)<=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x602 = 107062;
	static uint8_t x603 = 46U;
	int8_t x604 = -1;
	int32_t t150 = 285;

    t150 = (((x601<=x602)!=x603)<=x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x606 = 33U;
	uint32_t x607 = 29U;
	int64_t x608 = -1LL;
	int32_t t151 = 2169;

    t151 = (((x605<=x606)!=x607)<=x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MIN;
	static int32_t x610 = INT32_MIN;
	static uint64_t x611 = 5775707LLU;
	static uint8_t x612 = UINT8_MAX;

    t152 = (((x609<=x610)!=x611)<=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x613 = 1572239LLU;
	static uint32_t x614 = 8817U;
	volatile int32_t x615 = INT32_MIN;
	static int32_t x616 = -1;

    t153 = (((x613<=x614)!=x615)<=x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = INT16_MIN;
	static int16_t x619 = -1;
	int32_t x620 = -1;
	int32_t t154 = 5047266;

    t154 = (((x617<=x618)!=x619)<=x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x621 = UINT8_MAX;
	int32_t x622 = -1;
	uint16_t x623 = 14439U;
	int8_t x624 = INT8_MIN;
	volatile int32_t t155 = 925143;

    t155 = (((x621<=x622)!=x623)<=x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x626 = 1U;
	int8_t x627 = -2;
	int32_t x628 = INT32_MAX;
	int32_t t156 = -109446489;

    t156 = (((x625<=x626)!=x627)<=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = 29564286669LL;
	uint16_t x630 = 2256U;
	uint8_t x631 = 119U;
	static uint16_t x632 = 632U;

    t157 = (((x629<=x630)!=x631)<=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x633 = INT32_MIN;
	static int16_t x634 = -4;
	int64_t x635 = 2194LL;
	uint16_t x636 = 1U;
	int32_t t158 = 109;

    t158 = (((x633<=x634)!=x635)<=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MIN;
	int16_t x638 = INT16_MIN;
	uint16_t x639 = 27643U;
	int32_t t159 = -23770455;

    t159 = (((x637<=x638)!=x639)<=x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x641 = INT32_MIN;
	volatile uint8_t x642 = 6U;
	static volatile uint8_t x643 = 22U;
	volatile uint64_t x644 = 231371LLU;

    t160 = (((x641<=x642)!=x643)<=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MIN;
	static uint64_t x646 = 236551787337354349LLU;
	int32_t x648 = INT32_MIN;
	int32_t t161 = -3084;

    t161 = (((x645<=x646)!=x647)<=x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -1;
	static uint8_t x650 = UINT8_MAX;
	volatile int16_t x651 = -2202;
	uint16_t x652 = 36U;
	int32_t t162 = -1;

    t162 = (((x649<=x650)!=x651)<=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = -1LL;
	volatile int64_t x654 = INT64_MIN;
	volatile int16_t x655 = -1;
	int64_t x656 = -11LL;
	int32_t t163 = 166;

    t163 = (((x653<=x654)!=x655)<=x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x658 = 164U;
	uint32_t x659 = 688572194U;
	int32_t t164 = -45181484;

    t164 = (((x657<=x658)!=x659)<=x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int8_t x661 = -10;
	uint8_t x662 = 15U;
	int64_t x663 = 108LL;
	int32_t x664 = -4996892;
	volatile int32_t t165 = -7;

    t165 = (((x661<=x662)!=x663)<=x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = 10U;
	int16_t x666 = -1;
	int16_t x667 = INT16_MIN;
	volatile int32_t t166 = -201713068;

    t166 = (((x665<=x666)!=x667)<=x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = INT8_MIN;
	volatile int16_t x670 = -1;
	volatile int16_t x671 = INT16_MIN;
	static volatile int32_t t167 = 818510930;

    t167 = (((x669<=x670)!=x671)<=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = -1LL;
	static volatile uint8_t x675 = UINT8_MAX;
	static volatile int64_t x676 = INT64_MAX;

    t168 = (((x673<=x674)!=x675)<=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x677 = -1;
	uint64_t x678 = 2041055668LLU;
	int32_t t169 = -18713242;

    t169 = (((x677<=x678)!=x679)<=x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = 7289459;
	volatile int32_t x683 = INT32_MIN;
	int8_t x684 = -1;
	volatile int32_t t170 = 12484;

    t170 = (((x681<=x682)!=x683)<=x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x685 = -6;
	static uint16_t x686 = 102U;
	static uint8_t x688 = 19U;

    t171 = (((x685<=x686)!=x687)<=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = -99846;
	static volatile uint32_t x690 = 64U;
	static volatile uint8_t x691 = UINT8_MAX;
	int64_t x692 = INT64_MIN;
	int32_t t172 = 123;

    t172 = (((x689<=x690)!=x691)<=x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = -1;
	int8_t x694 = INT8_MIN;
	static int64_t x695 = INT64_MIN;
	uint32_t x696 = 3U;
	int32_t t173 = 65;

    t173 = (((x693<=x694)!=x695)<=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -1;
	volatile int8_t x698 = 1;
	int8_t x699 = INT8_MIN;
	volatile int32_t t174 = 22884;

    t174 = (((x697<=x698)!=x699)<=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x701 = INT32_MIN;
	int16_t x702 = INT16_MIN;
	uint8_t x703 = 0U;
	int8_t x704 = INT8_MIN;
	int32_t t175 = -106608;

    t175 = (((x701<=x702)!=x703)<=x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = -1LL;
	uint32_t x706 = 1434U;
	static volatile int32_t x707 = -5085502;
	int64_t x708 = INT64_MIN;
	static volatile int32_t t176 = 387781;

    t176 = (((x705<=x706)!=x707)<=x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x709 = INT8_MIN;
	int64_t x711 = INT64_MAX;
	static int8_t x712 = -1;
	volatile int32_t t177 = -829818071;

    t177 = (((x709<=x710)!=x711)<=x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int8_t x714 = INT8_MAX;
	int64_t x715 = -40622915LL;
	static volatile int16_t x716 = INT16_MIN;

    t178 = (((x713<=x714)!=x715)<=x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = UINT8_MAX;
	volatile uint8_t x718 = 10U;
	static volatile int16_t x719 = -1105;
	int8_t x720 = -4;
	volatile int32_t t179 = -27;

    t179 = (((x717<=x718)!=x719)<=x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MAX;
	int8_t x722 = 5;
	uint8_t x724 = UINT8_MAX;
	volatile int32_t t180 = 220;

    t180 = (((x721<=x722)!=x723)<=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x726 = 9196268184168382520LLU;
	uint32_t x727 = UINT32_MAX;
	static int16_t x728 = INT16_MIN;
	static volatile int32_t t181 = 14953509;

    t181 = (((x725<=x726)!=x727)<=x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x729 = -1;
	static int64_t x730 = INT64_MIN;
	static uint64_t x731 = 1034573447LLU;
	uint64_t x732 = 89274897636LLU;
	volatile int32_t t182 = 0;

    t182 = (((x729<=x730)!=x731)<=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x734 = 6820;
	volatile int8_t x735 = INT8_MIN;
	int32_t x736 = INT32_MIN;
	int32_t t183 = -11;

    t183 = (((x733<=x734)!=x735)<=x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	int16_t x738 = -1;
	int32_t x739 = INT32_MIN;
	volatile int32_t t184 = 10;

    t184 = (((x737<=x738)!=x739)<=x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = UINT64_MAX;
	uint8_t x742 = 2U;
	int16_t x743 = INT16_MAX;
	int32_t x744 = -1;

    t185 = (((x741<=x742)!=x743)<=x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = -362227595559LL;
	volatile int32_t x746 = -1;
	int64_t x747 = INT64_MAX;
	int8_t x748 = -1;
	int32_t t186 = 2707;

    t186 = (((x745<=x746)!=x747)<=x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x749 = 1U;
	int64_t x750 = INT64_MIN;
	int8_t x751 = INT8_MIN;
	int8_t x752 = INT8_MAX;
	volatile int32_t t187 = 242;

    t187 = (((x749<=x750)!=x751)<=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = UINT64_MAX;
	int64_t x754 = INT64_MIN;
	static uint32_t x755 = 5074581U;
	int8_t x756 = -22;
	volatile int32_t t188 = -85481462;

    t188 = (((x753<=x754)!=x755)<=x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = 1LL;
	int32_t x758 = -148147;
	uint64_t x759 = 8044331424216119565LLU;
	int16_t x760 = -20;
	int32_t t189 = 9381;

    t189 = (((x757<=x758)!=x759)<=x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x761 = 11424U;
	int8_t x762 = INT8_MIN;
	uint16_t x763 = 3679U;
	uint16_t x764 = 3665U;
	int32_t t190 = -43880901;

    t190 = (((x761<=x762)!=x763)<=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = INT16_MAX;
	volatile uint64_t x766 = 7632392480LLU;
	int32_t x767 = -56343846;
	int32_t x768 = INT32_MAX;
	int32_t t191 = -189885;

    t191 = (((x765<=x766)!=x767)<=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x769 = UINT32_MAX;
	volatile int64_t x770 = 72960341881759966LL;
	volatile uint32_t x771 = UINT32_MAX;
	volatile int32_t t192 = 61221;

    t192 = (((x769<=x770)!=x771)<=x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = INT64_MIN;
	static int8_t x774 = 1;
	int8_t x775 = 0;
	uint8_t x776 = 95U;
	volatile int32_t t193 = -2171;

    t193 = (((x773<=x774)!=x775)<=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x777 = 1;
	static uint16_t x778 = 13U;
	int8_t x779 = 29;
	int32_t x780 = 7239605;
	volatile int32_t t194 = -49160;

    t194 = (((x777<=x778)!=x779)<=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x781 = -1;
	volatile int16_t x782 = -1;
	int64_t x783 = INT64_MIN;
	int64_t x784 = -1LL;
	int32_t t195 = -1914354;

    t195 = (((x781<=x782)!=x783)<=x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = -1;
	static int64_t x786 = INT64_MAX;
	int8_t x788 = INT8_MIN;
	volatile int32_t t196 = 13453879;

    t196 = (((x785<=x786)!=x787)<=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x790 = INT32_MIN;
	int64_t x791 = INT64_MAX;
	int16_t x792 = INT16_MIN;
	int32_t t197 = -16480822;

    t197 = (((x789<=x790)!=x791)<=x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x794 = 11U;
	uint16_t x795 = 18583U;
	static volatile int32_t t198 = -1;

    t198 = (((x793<=x794)!=x795)<=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MIN;
	static int8_t x798 = INT8_MIN;
	int32_t x799 = INT32_MAX;
	uint8_t x800 = 1U;
	int32_t t199 = -124675967;

    t199 = (((x797<=x798)!=x799)<=x800);

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

