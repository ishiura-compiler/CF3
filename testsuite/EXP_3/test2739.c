
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

int8_t x3 = -1;
int8_t x4 = INT8_MIN;
int32_t x7 = -1;
volatile uint16_t x9 = UINT16_MAX;
int64_t x15 = -65260444228449992LL;
int8_t x20 = 8;
int64_t x23 = 1LL;
uint16_t x26 = UINT16_MAX;
int32_t t6 = -178260;
int16_t x30 = INT16_MAX;
static int32_t t7 = -4593754;
int32_t x35 = -1;
static int32_t t9 = -1797650;
static uint64_t x45 = 15LLU;
int32_t x48 = 0;
int64_t x49 = INT64_MIN;
volatile int32_t t14 = 93;
static uint16_t x63 = 7733U;
int64_t x65 = INT64_MAX;
int16_t x66 = -480;
volatile int8_t x68 = INT8_MAX;
static int32_t x71 = 106444313;
volatile int16_t x73 = INT16_MIN;
int32_t x76 = INT32_MIN;
int32_t t18 = 670470;
volatile uint64_t x78 = UINT64_MAX;
int64_t x89 = -4349865310098LL;
volatile int64_t x90 = -1LL;
int8_t x91 = -1;
int32_t x92 = INT32_MIN;
int32_t t22 = -32260;
int8_t x93 = INT8_MIN;
int32_t t23 = 58886306;
static uint16_t x103 = 17U;
int32_t t27 = 52;
static volatile int32_t t28 = -515569761;
uint8_t x120 = UINT8_MAX;
volatile int16_t x123 = -1;
int32_t x127 = 1976486;
int8_t x138 = INT8_MAX;
volatile int32_t t34 = -6969916;
uint32_t x141 = UINT32_MAX;
static int32_t x148 = INT32_MIN;
static volatile int32_t t36 = -507;
int32_t x149 = INT32_MIN;
int32_t x155 = INT32_MAX;
int32_t x156 = INT32_MIN;
volatile int32_t t39 = -1342551;
volatile int32_t t41 = 0;
int16_t x173 = INT16_MAX;
int64_t x174 = INT64_MIN;
static int16_t x175 = -1;
volatile int32_t t46 = 13232773;
int8_t x189 = INT8_MIN;
volatile int32_t t47 = -509397759;
volatile int32_t t49 = 100;
static volatile uint16_t x202 = 11U;
static volatile int32_t t50 = -15596140;
uint8_t x206 = 64U;
int16_t x209 = 33;
static int16_t x215 = INT16_MAX;
int16_t x216 = -1;
static int16_t x218 = -1;
int64_t x221 = -1LL;
int64_t x227 = -35536LL;
volatile int32_t x230 = INT32_MAX;
volatile int8_t x242 = INT8_MAX;
uint64_t x243 = 3118215669102395LLU;
int16_t x244 = -3088;
uint8_t x245 = UINT8_MAX;
volatile uint32_t x246 = 31743521U;
static int32_t x264 = 1945999;
int64_t x265 = INT64_MIN;
static uint32_t x275 = 731U;
uint32_t x278 = 109U;
static int8_t x279 = INT8_MAX;
int8_t x280 = -5;
int32_t x283 = INT32_MIN;
static int32_t t70 = -92;
int8_t x293 = INT8_MIN;
static uint32_t x294 = 211U;
uint16_t x297 = 7649U;
static int32_t t74 = -1167;
static int64_t x304 = INT64_MAX;
int16_t x309 = INT16_MIN;
volatile int8_t x310 = -1;
int32_t x313 = -1;
uint16_t x317 = 453U;
uint64_t x318 = 270337100943969LLU;
static uint64_t x319 = 7LLU;
int32_t t80 = -742;
int32_t t82 = 32570;
int32_t t83 = 5633873;
uint64_t x338 = UINT64_MAX;
volatile int64_t x341 = 829345443406738LL;
uint32_t x342 = 481U;
volatile uint64_t x349 = 1LLU;
volatile int16_t x350 = INT16_MIN;
int32_t x372 = INT32_MAX;
volatile int32_t t92 = 123;
uint32_t x376 = UINT32_MAX;
int32_t x380 = INT32_MIN;
volatile int64_t x383 = -1LL;
int32_t x385 = -1;
volatile int32_t x388 = -1;
static uint16_t x392 = 6U;
int32_t x398 = INT32_MIN;
int64_t x400 = INT64_MIN;
uint16_t x402 = UINT16_MAX;
volatile int32_t t102 = 328;
int8_t x418 = 1;
int32_t x426 = -1;
volatile int32_t t106 = -783625;
static int32_t t108 = 48581748;
volatile uint16_t x438 = 689U;
uint64_t x439 = 1240753LLU;
volatile uint32_t x441 = 207067644U;
uint16_t x445 = 0U;
volatile int32_t t111 = -12209744;
volatile int64_t x451 = INT64_MIN;
int8_t x473 = -1;
volatile int32_t x475 = INT32_MIN;
volatile int16_t x477 = INT16_MIN;
static uint16_t x480 = UINT16_MAX;
volatile int32_t t120 = 701202224;
volatile uint16_t x485 = 4U;
int8_t x487 = -30;
static uint64_t x488 = 5LLU;
int32_t t121 = 744062794;
int64_t x497 = INT64_MIN;
static int16_t x498 = -1;
volatile int32_t t124 = -171513508;
static uint16_t x501 = 1U;
int64_t x503 = INT64_MIN;
static uint16_t x510 = 14041U;
static uint64_t x514 = 8227561LLU;
volatile int64_t x520 = INT64_MAX;
int64_t x522 = INT64_MIN;
volatile uint32_t x526 = 949662U;
int64_t x532 = INT64_MIN;
static volatile int32_t t132 = 3222;
static uint64_t x533 = UINT64_MAX;
volatile int32_t t133 = 2202;
int16_t x546 = INT16_MIN;
static int32_t x551 = INT32_MAX;
static int32_t t140 = -61934283;
int8_t x565 = INT8_MIN;
int32_t x571 = -172908;
volatile int32_t t142 = -4228913;
int64_t x586 = 195613533LL;
static volatile int8_t x588 = INT8_MIN;
volatile int32_t t146 = -13673;
uint64_t x589 = UINT64_MAX;
volatile int64_t x590 = -1893LL;
int32_t x597 = -1;
int32_t t150 = -36;
uint64_t x605 = 87820073357LLU;
volatile int8_t x609 = INT8_MIN;
uint32_t x630 = 211U;
volatile int16_t x631 = INT16_MIN;
volatile int64_t x632 = INT64_MIN;
static int16_t x635 = -1;
int32_t t159 = -3362;
uint32_t x645 = 10U;
int32_t t162 = 9387206;
int32_t x660 = INT32_MAX;
static uint8_t x661 = UINT8_MAX;
volatile int8_t x668 = 1;
int32_t x671 = INT32_MIN;
volatile int16_t x674 = INT16_MIN;
volatile uint16_t x675 = UINT16_MAX;
static volatile int64_t x676 = INT64_MIN;
uint16_t x680 = UINT16_MAX;
int32_t x686 = -358920617;
uint8_t x688 = 20U;
int32_t t171 = -1;
static volatile int64_t x691 = 6195332713LL;
uint16_t x692 = 24840U;
int32_t t172 = 3;
static int64_t x694 = INT64_MIN;
int32_t t173 = 1;
volatile int32_t t175 = 46;
int64_t x705 = INT64_MIN;
uint32_t x709 = 7U;
static int32_t t177 = -8219428;
int32_t x719 = INT32_MAX;
int64_t x726 = INT64_MAX;
int64_t x728 = INT64_MIN;
int16_t x729 = -3;
static volatile uint32_t x731 = 979278986U;
volatile int32_t t185 = 75;
uint32_t x746 = 9745982U;
static uint16_t x750 = 21903U;
static int16_t x755 = -1;
static int64_t x757 = INT64_MIN;
int64_t x760 = -1LL;
static volatile int32_t t189 = -19883;
static int16_t x766 = 0;
static int8_t x767 = INT8_MAX;
int32_t t191 = -3397787;
int32_t x769 = 121179162;
volatile int32_t t192 = -1;
uint64_t x773 = UINT64_MAX;
uint64_t x789 = 8504100706LLU;
uint32_t x791 = 3U;
volatile uint16_t x792 = UINT16_MAX;
int32_t t198 = -570564939;
static int8_t x799 = -1;


void f0(void) {
    	int32_t x1 = -1;
	static int16_t x2 = INT16_MIN;
	volatile int32_t t0 = -198;

    t0 = ((x1^x2)>(x3^x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	uint16_t x6 = 12221U;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -499;

    t1 = ((x5^x6)>(x7^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int32_t x10 = -1;
	int32_t x11 = INT32_MIN;
	volatile int64_t x12 = 36407583537344218LL;
	volatile int32_t t2 = -211866776;

    t2 = ((x9^x10)>(x11^x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	uint16_t x14 = 1619U;
	static uint32_t x16 = 1457U;
	volatile int32_t t3 = 2056841;

    t3 = ((x13^x14)>(x15^x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	volatile uint16_t x18 = UINT16_MAX;
	static uint16_t x19 = UINT16_MAX;
	int32_t t4 = 3932;

    t4 = ((x17^x18)>(x19^x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x21 = UINT16_MAX;
	static uint8_t x22 = 4U;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 276623;

    t5 = ((x21^x22)>(x23^x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	int32_t x27 = 2402;
	int16_t x28 = INT16_MAX;

    t6 = ((x25^x26)>(x27^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = -980828;
	int32_t x31 = INT32_MIN;
	volatile int8_t x32 = INT8_MIN;

    t7 = ((x29^x30)>(x31^x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x33 = INT8_MAX;
	int32_t x34 = INT32_MAX;
	int32_t x36 = INT32_MAX;
	static int32_t t8 = 378;

    t8 = ((x33^x34)>(x35^x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 122U;
	volatile int64_t x38 = INT64_MIN;
	int8_t x39 = INT8_MAX;
	int8_t x40 = -7;

    t9 = ((x37^x38)>(x39^x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x41 = 2265196909105560426LL;
	static volatile int16_t x42 = INT16_MAX;
	uint8_t x43 = UINT8_MAX;
	int32_t x44 = INT32_MIN;
	static int32_t t10 = -2583708;

    t10 = ((x41^x42)>(x43^x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = -14857;
	volatile uint16_t x47 = 1453U;
	static int32_t t11 = 1;

    t11 = ((x45^x46)>(x47^x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = 1517116743269261372LL;
	uint64_t x51 = 632LLU;
	static uint32_t x52 = UINT32_MAX;
	volatile int32_t t12 = 519623;

    t12 = ((x49^x50)>(x51^x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 70251420045761948LLU;
	uint16_t x54 = 11165U;
	static uint8_t x55 = 7U;
	volatile int16_t x56 = INT16_MAX;
	static volatile int32_t t13 = 20;

    t13 = ((x53^x54)>(x55^x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = -1522LL;
	int32_t x58 = INT32_MIN;
	int16_t x59 = INT16_MIN;
	uint8_t x60 = UINT8_MAX;

    t14 = ((x57^x58)>(x59^x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	int8_t x62 = 0;
	int64_t x64 = INT64_MIN;
	int32_t t15 = 386;

    t15 = ((x61^x62)>(x63^x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x67 = UINT8_MAX;
	volatile int32_t t16 = 279705648;

    t16 = ((x65^x66)>(x67^x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -15;
	uint16_t x70 = 3198U;
	volatile int8_t x72 = INT8_MIN;
	static volatile int32_t t17 = 124;

    t17 = ((x69^x70)>(x71^x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x74 = 1U;
	int64_t x75 = INT64_MIN;

    t18 = ((x73^x74)>(x75^x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 13847LLU;
	static volatile int32_t x79 = INT32_MIN;
	int8_t x80 = -1;
	volatile int32_t t19 = 1976391;

    t19 = ((x77^x78)>(x79^x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint64_t x81 = UINT64_MAX;
	static volatile int32_t x82 = -1;
	volatile int16_t x83 = -1;
	int32_t x84 = 2803;
	volatile int32_t t20 = -85998019;

    t20 = ((x81^x82)>(x83^x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = UINT64_MAX;
	int32_t x86 = -1;
	int8_t x87 = 0;
	int8_t x88 = INT8_MIN;
	int32_t t21 = -367099;

    t21 = ((x85^x86)>(x87^x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    

    t22 = ((x89^x90)>(x91^x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x94 = INT32_MAX;
	uint8_t x95 = 102U;
	static int32_t x96 = -153;

    t23 = ((x93^x94)>(x95^x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x97 = 0;
	int32_t x98 = INT32_MAX;
	int64_t x99 = -1LL;
	uint8_t x100 = 83U;
	volatile int32_t t24 = 164144740;

    t24 = ((x97^x98)>(x99^x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MAX;
	uint16_t x102 = 1402U;
	int16_t x104 = INT16_MAX;
	volatile int32_t t25 = -3301141;

    t25 = ((x101^x102)>(x103^x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MAX;
	int64_t x106 = 7100198220179352LL;
	int16_t x107 = INT16_MIN;
	static uint32_t x108 = UINT32_MAX;
	volatile int32_t t26 = -3287552;

    t26 = ((x105^x106)>(x107^x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MAX;
	int8_t x111 = 11;
	uint64_t x112 = 1215424885818LLU;

    t27 = ((x109^x110)>(x111^x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint32_t x113 = UINT32_MAX;
	uint8_t x114 = 1U;
	static int16_t x115 = INT16_MAX;
	int8_t x116 = INT8_MAX;

    t28 = ((x113^x114)>(x115^x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -1LL;
	static int32_t x118 = -505077219;
	int8_t x119 = -1;
	volatile int32_t t29 = 4;

    t29 = ((x117^x118)>(x119^x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x121 = -1;
	int64_t x122 = 47LL;
	static int64_t x124 = INT64_MAX;
	volatile int32_t t30 = 118595;

    t30 = ((x121^x122)>(x123^x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MAX;
	static uint16_t x126 = 0U;
	int64_t x128 = INT64_MIN;
	static volatile int32_t t31 = -1162;

    t31 = ((x125^x126)>(x127^x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x129 = 1U;
	volatile int8_t x130 = INT8_MAX;
	int8_t x131 = INT8_MIN;
	static volatile int32_t x132 = 1863912;
	static volatile int32_t t32 = 250258293;

    t32 = ((x129^x130)>(x131^x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MAX;
	uint16_t x134 = UINT16_MAX;
	int8_t x135 = INT8_MIN;
	int32_t x136 = INT32_MIN;
	int32_t t33 = 11089;

    t33 = ((x133^x134)>(x135^x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x137 = UINT16_MAX;
	uint32_t x139 = 124726902U;
	uint32_t x140 = 0U;

    t34 = ((x137^x138)>(x139^x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x142 = INT8_MIN;
	int16_t x143 = -124;
	volatile int64_t x144 = INT64_MIN;
	static int32_t t35 = -65690304;

    t35 = ((x141^x142)>(x143^x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x145 = 14775U;
	static int16_t x146 = INT16_MIN;
	static int8_t x147 = -1;

    t36 = ((x145^x146)>(x147^x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x150 = INT8_MIN;
	volatile int32_t x151 = INT32_MIN;
	volatile int16_t x152 = -1;
	volatile int32_t t37 = 253841;

    t37 = ((x149^x150)>(x151^x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	int32_t x154 = INT32_MAX;
	int32_t t38 = -21335557;

    t38 = ((x153^x154)>(x155^x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = 2U;
	uint32_t x158 = 393449713U;
	int64_t x159 = 306213739243LL;
	volatile int8_t x160 = 52;

    t39 = ((x157^x158)>(x159^x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x161 = 48795357440356295LLU;
	int8_t x162 = -1;
	static int64_t x163 = -1LL;
	int8_t x164 = 5;
	volatile int32_t t40 = -9;

    t40 = ((x161^x162)>(x163^x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	uint16_t x166 = UINT16_MAX;
	int64_t x167 = INT64_MIN;
	int32_t x168 = INT32_MIN;

    t41 = ((x165^x166)>(x167^x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	uint64_t x170 = 1552296245679205754LLU;
	int32_t x171 = INT32_MIN;
	int16_t x172 = -252;
	int32_t t42 = 3142;

    t42 = ((x169^x170)>(x171^x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x176 = INT64_MIN;
	static int32_t t43 = 0;

    t43 = ((x173^x174)>(x175^x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x177 = INT64_MIN;
	static int16_t x178 = 13950;
	int16_t x179 = 1;
	int8_t x180 = 1;
	volatile int32_t t44 = 49396;

    t44 = ((x177^x178)>(x179^x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x181 = 1891LLU;
	static int16_t x182 = -1;
	volatile uint16_t x183 = UINT16_MAX;
	volatile uint32_t x184 = 9U;
	volatile int32_t t45 = 7599;

    t45 = ((x181^x182)>(x183^x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -1;
	uint8_t x186 = 13U;
	volatile int16_t x187 = INT16_MIN;
	volatile uint64_t x188 = 8162273LLU;

    t46 = ((x185^x186)>(x187^x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int8_t x190 = INT8_MIN;
	uint32_t x191 = 37863463U;
	volatile int8_t x192 = 4;

    t47 = ((x189^x190)>(x191^x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x193 = -1LL;
	int32_t x194 = -1;
	uint8_t x195 = UINT8_MAX;
	int64_t x196 = 50LL;
	int32_t t48 = 261768564;

    t48 = ((x193^x194)>(x195^x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x197 = 65836535U;
	static int8_t x198 = 0;
	int32_t x199 = -50;
	int32_t x200 = INT32_MIN;

    t49 = ((x197^x198)>(x199^x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x201 = -1;
	int64_t x203 = 123677LL;
	int64_t x204 = 2193592741221588805LL;

    t50 = ((x201^x202)>(x203^x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -1022054751253LL;
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MIN;
	volatile int32_t t51 = -1923;

    t51 = ((x205^x206)>(x207^x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x210 = INT64_MIN;
	volatile uint8_t x211 = UINT8_MAX;
	uint8_t x212 = UINT8_MAX;
	int32_t t52 = -1;

    t52 = ((x209^x210)>(x211^x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = 1;
	int64_t x214 = 102128792506662659LL;
	static volatile int32_t t53 = -91;

    t53 = ((x213^x214)>(x215^x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x217 = 654;
	static volatile int8_t x219 = INT8_MIN;
	int16_t x220 = INT16_MAX;
	static volatile int32_t t54 = 64499361;

    t54 = ((x217^x218)>(x219^x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x222 = 21371686U;
	int32_t x223 = -1;
	uint64_t x224 = 352LLU;
	int32_t t55 = -497;

    t55 = ((x221^x222)>(x223^x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x225 = 113U;
	static uint64_t x226 = 200801353593152156LLU;
	uint16_t x228 = 1365U;
	int32_t t56 = 47924018;

    t56 = ((x225^x226)>(x227^x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = 912631520049685LL;
	int32_t x231 = 1600020;
	int32_t x232 = -309227028;
	static volatile int32_t t57 = -131988;

    t57 = ((x229^x230)>(x231^x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x233 = INT16_MIN;
	int32_t x234 = INT32_MAX;
	static volatile uint32_t x235 = 167U;
	volatile uint32_t x236 = 1055083001U;
	volatile int32_t t58 = -1;

    t58 = ((x233^x234)>(x235^x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -1;
	int16_t x238 = INT16_MIN;
	static int16_t x239 = INT16_MAX;
	int64_t x240 = -1LL;
	int32_t t59 = -1098;

    t59 = ((x237^x238)>(x239^x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = -3354914;
	int32_t t60 = 19857;

    t60 = ((x241^x242)>(x243^x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x247 = INT8_MAX;
	static int64_t x248 = INT64_MIN;
	int32_t t61 = -1;

    t61 = ((x245^x246)>(x247^x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x249 = INT32_MIN;
	int64_t x250 = -1LL;
	static volatile int32_t x251 = -1;
	uint32_t x252 = 1015U;
	static int32_t t62 = 103;

    t62 = ((x249^x250)>(x251^x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 4354U;
	int8_t x254 = 2;
	int32_t x255 = 1;
	static int8_t x256 = INT8_MAX;
	volatile int32_t t63 = 23;

    t63 = ((x253^x254)>(x255^x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x257 = INT16_MIN;
	volatile uint32_t x258 = 425594U;
	static volatile int32_t x259 = INT32_MAX;
	volatile int16_t x260 = INT16_MIN;
	volatile int32_t t64 = 4505036;

    t64 = ((x257^x258)>(x259^x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 3U;
	uint32_t x262 = 1251008664U;
	uint8_t x263 = 48U;
	volatile int32_t t65 = 38;

    t65 = ((x261^x262)>(x263^x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x266 = 40850496U;
	static uint16_t x267 = 203U;
	int32_t x268 = INT32_MIN;
	volatile int32_t t66 = -44361;

    t66 = ((x265^x266)>(x267^x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 495281953U;
	static volatile int64_t x270 = INT64_MIN;
	int8_t x271 = INT8_MIN;
	int8_t x272 = -1;
	volatile int32_t t67 = -3;

    t67 = ((x269^x270)>(x271^x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x273 = INT8_MAX;
	int16_t x274 = 8863;
	static int8_t x276 = INT8_MIN;
	int32_t t68 = -39;

    t68 = ((x273^x274)>(x275^x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MAX;
	static volatile int32_t t69 = 1248170;

    t69 = ((x277^x278)>(x279^x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = -1;
	int32_t x282 = -1;
	static volatile int16_t x284 = -1;

    t70 = ((x281^x282)>(x283^x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x285 = -1;
	static uint64_t x286 = UINT64_MAX;
	volatile int64_t x287 = 438LL;
	int16_t x288 = INT16_MAX;
	int32_t t71 = 130;

    t71 = ((x285^x286)>(x287^x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = UINT8_MAX;
	int16_t x290 = INT16_MIN;
	static uint8_t x291 = 49U;
	int16_t x292 = 8507;
	volatile int32_t t72 = 241819340;

    t72 = ((x289^x290)>(x291^x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int16_t x295 = INT16_MAX;
	static int32_t x296 = INT32_MIN;
	volatile int32_t t73 = 1;

    t73 = ((x293^x294)>(x295^x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x298 = 182U;
	uint64_t x299 = 1LLU;
	static uint64_t x300 = 1390501505784671LLU;

    t74 = ((x297^x298)>(x299^x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = INT16_MIN;
	int8_t x302 = INT8_MAX;
	volatile int32_t x303 = INT32_MAX;
	int32_t t75 = 34051;

    t75 = ((x301^x302)>(x303^x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -29;
	uint64_t x306 = 60628254590249316LLU;
	volatile uint16_t x307 = UINT16_MAX;
	static volatile uint32_t x308 = UINT32_MAX;
	volatile int32_t t76 = 14858;

    t76 = ((x305^x306)>(x307^x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint32_t x311 = 5U;
	int32_t x312 = INT32_MAX;
	int32_t t77 = 0;

    t77 = ((x309^x310)>(x311^x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x314 = UINT16_MAX;
	static int16_t x315 = -1;
	volatile int32_t x316 = INT32_MAX;
	int32_t t78 = -1884481;

    t78 = ((x313^x314)>(x315^x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x320 = 83;
	volatile int32_t t79 = 117881;

    t79 = ((x317^x318)>(x319^x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 64314646LLU;
	int64_t x322 = INT64_MAX;
	int64_t x323 = INT64_MAX;
	static volatile int64_t x324 = INT64_MIN;

    t80 = ((x321^x322)>(x323^x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = 23;
	uint16_t x326 = 49U;
	static int8_t x327 = -1;
	uint32_t x328 = UINT32_MAX;
	int32_t t81 = 3490005;

    t81 = ((x325^x326)>(x327^x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = 502615391;
	int32_t x330 = 95;
	static int64_t x331 = INT64_MIN;
	int64_t x332 = INT64_MAX;

    t82 = ((x329^x330)>(x331^x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x333 = -1523;
	volatile int16_t x334 = INT16_MIN;
	int16_t x335 = -1;
	int64_t x336 = -1LL;

    t83 = ((x333^x334)>(x335^x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = -1;
	uint64_t x339 = 259LLU;
	uint8_t x340 = UINT8_MAX;
	static int32_t t84 = -3622689;

    t84 = ((x337^x338)>(x339^x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MAX;
	int32_t t85 = 45;

    t85 = ((x341^x342)>(x343^x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x345 = 44190U;
	volatile int32_t x346 = INT32_MIN;
	int64_t x347 = INT64_MAX;
	int16_t x348 = INT16_MIN;
	volatile int32_t t86 = -16;

    t86 = ((x345^x346)>(x347^x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x351 = 12;
	static volatile int8_t x352 = INT8_MIN;
	int32_t t87 = -24040;

    t87 = ((x349^x350)>(x351^x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = -40516942;
	int64_t x354 = INT64_MIN;
	uint64_t x355 = 797081377543232448LLU;
	static uint32_t x356 = 816U;
	int32_t t88 = 1;

    t88 = ((x353^x354)>(x355^x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = UINT64_MAX;
	int64_t x358 = 134149288315540LL;
	int64_t x359 = INT64_MIN;
	volatile uint16_t x360 = 10863U;
	volatile int32_t t89 = -31788;

    t89 = ((x357^x358)>(x359^x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 129004055521234LLU;
	int16_t x362 = -836;
	int32_t x363 = INT32_MIN;
	uint8_t x364 = UINT8_MAX;
	int32_t t90 = -53902250;

    t90 = ((x361^x362)>(x363^x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x365 = INT64_MAX;
	int64_t x366 = INT64_MIN;
	static uint16_t x367 = UINT16_MAX;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = -68;

    t91 = ((x365^x366)>(x367^x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -1LL;
	volatile int16_t x370 = INT16_MIN;
	volatile uint32_t x371 = UINT32_MAX;

    t92 = ((x369^x370)>(x371^x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = INT32_MIN;
	volatile int8_t x374 = INT8_MAX;
	static uint8_t x375 = 30U;
	volatile int32_t t93 = -19854;

    t93 = ((x373^x374)>(x375^x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x377 = 2LLU;
	uint64_t x378 = UINT64_MAX;
	volatile uint8_t x379 = 3U;
	int32_t t94 = 11;

    t94 = ((x377^x378)>(x379^x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = 1;
	uint64_t x382 = UINT64_MAX;
	static int16_t x384 = INT16_MAX;
	volatile int32_t t95 = 5290344;

    t95 = ((x381^x382)>(x383^x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x386 = UINT64_MAX;
	uint64_t x387 = 6363431525LLU;
	static volatile int32_t t96 = -1;

    t96 = ((x385^x386)>(x387^x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = 18;
	int64_t x390 = INT64_MIN;
	int32_t x391 = INT32_MAX;
	volatile int32_t t97 = -194346959;

    t97 = ((x389^x390)>(x391^x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x393 = INT8_MIN;
	static volatile int16_t x394 = INT16_MAX;
	volatile int64_t x395 = INT64_MAX;
	static uint8_t x396 = UINT8_MAX;
	int32_t t98 = -1;

    t98 = ((x393^x394)>(x395^x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MIN;
	int32_t x399 = -1;
	volatile int32_t t99 = -1;

    t99 = ((x397^x398)>(x399^x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = UINT16_MAX;
	uint8_t x403 = UINT8_MAX;
	int64_t x404 = -1LL;
	static int32_t t100 = 30226;

    t100 = ((x401^x402)>(x403^x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MIN;
	volatile int32_t x406 = INT32_MIN;
	volatile uint8_t x407 = UINT8_MAX;
	int32_t x408 = INT32_MIN;
	int32_t t101 = -3;

    t101 = ((x405^x406)>(x407^x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x409 = INT16_MIN;
	uint8_t x410 = 60U;
	int64_t x411 = INT64_MIN;
	int16_t x412 = INT16_MIN;

    t102 = ((x409^x410)>(x411^x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = UINT8_MAX;
	int16_t x414 = INT16_MAX;
	int8_t x415 = INT8_MIN;
	uint32_t x416 = 3181U;
	volatile int32_t t103 = 4;

    t103 = ((x413^x414)>(x415^x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int16_t x417 = INT16_MIN;
	static int64_t x419 = INT64_MIN;
	volatile int8_t x420 = 25;
	volatile int32_t t104 = 7196;

    t104 = ((x417^x418)>(x419^x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x421 = UINT16_MAX;
	static int8_t x422 = INT8_MIN;
	static int32_t x423 = 61;
	static uint64_t x424 = UINT64_MAX;
	volatile int32_t t105 = -360382;

    t105 = ((x421^x422)>(x423^x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = UINT32_MAX;
	uint64_t x427 = UINT64_MAX;
	int64_t x428 = 16659842LL;

    t106 = ((x425^x426)>(x427^x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MIN;
	int64_t x430 = -962LL;
	int8_t x431 = INT8_MAX;
	volatile int64_t x432 = -1LL;
	static int32_t t107 = 71620751;

    t107 = ((x429^x430)>(x431^x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = INT32_MIN;
	int32_t x434 = INT32_MIN;
	int16_t x435 = INT16_MAX;
	int64_t x436 = INT64_MIN;

    t108 = ((x433^x434)>(x435^x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint32_t x437 = UINT32_MAX;
	static int32_t x440 = -1;
	int32_t t109 = -94229;

    t109 = ((x437^x438)>(x439^x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x442 = 33U;
	static int32_t x443 = 405427;
	static volatile int16_t x444 = INT16_MIN;
	static volatile int32_t t110 = -29192;

    t110 = ((x441^x442)>(x443^x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x446 = -1LL;
	volatile int64_t x447 = 2LL;
	static int16_t x448 = -5270;

    t111 = ((x445^x446)>(x447^x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -1;
	int32_t x450 = -26150;
	volatile uint8_t x452 = UINT8_MAX;
	volatile int32_t t112 = -304774;

    t112 = ((x449^x450)>(x451^x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MAX;
	int32_t x454 = INT32_MIN;
	int8_t x455 = INT8_MIN;
	int32_t x456 = -1;
	static volatile int32_t t113 = 114942036;

    t113 = ((x453^x454)>(x455^x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = UINT16_MAX;
	int16_t x458 = -1;
	int8_t x459 = INT8_MIN;
	int32_t x460 = INT32_MIN;
	volatile int32_t t114 = 3;

    t114 = ((x457^x458)>(x459^x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MAX;
	int32_t x462 = INT32_MIN;
	int8_t x463 = INT8_MIN;
	volatile uint16_t x464 = 13U;
	volatile int32_t t115 = -526558101;

    t115 = ((x461^x462)>(x463^x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x465 = 2;
	static int32_t x466 = 1970;
	volatile int64_t x467 = 888148369189508LL;
	volatile int16_t x468 = INT16_MAX;
	int32_t t116 = 40019514;

    t116 = ((x465^x466)>(x467^x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 1725U;
	int16_t x470 = INT16_MIN;
	int32_t x471 = 3;
	int16_t x472 = INT16_MIN;
	static volatile int32_t t117 = -48;

    t117 = ((x469^x470)>(x471^x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x474 = INT16_MIN;
	uint16_t x476 = UINT16_MAX;
	volatile int32_t t118 = 566027;

    t118 = ((x473^x474)>(x475^x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x478 = INT64_MIN;
	int32_t x479 = INT32_MAX;
	volatile int32_t t119 = 2;

    t119 = ((x477^x478)>(x479^x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 0U;
	int16_t x482 = 21;
	int8_t x483 = INT8_MAX;
	int32_t x484 = INT32_MAX;

    t120 = ((x481^x482)>(x483^x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x486 = UINT8_MAX;

    t121 = ((x485^x486)>(x487^x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = -11101;
	int32_t x490 = -110;
	static uint8_t x491 = 35U;
	int64_t x492 = 3676LL;
	volatile int32_t t122 = 3124;

    t122 = ((x489^x490)>(x491^x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x493 = 17U;
	uint16_t x494 = 9216U;
	volatile uint16_t x495 = 10U;
	static int8_t x496 = INT8_MIN;
	static int32_t t123 = -1032662;

    t123 = ((x493^x494)>(x495^x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x499 = UINT16_MAX;
	static volatile int32_t x500 = INT32_MIN;

    t124 = ((x497^x498)>(x499^x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x502 = -1LL;
	int16_t x504 = INT16_MAX;
	static int32_t t125 = -3982684;

    t125 = ((x501^x502)>(x503^x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x505 = 786U;
	uint32_t x506 = 6929U;
	static int64_t x507 = -1LL;
	static int16_t x508 = INT16_MAX;
	int32_t t126 = 8667714;

    t126 = ((x505^x506)>(x507^x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = 5361LL;
	uint32_t x511 = 1U;
	int8_t x512 = 53;
	static volatile int32_t t127 = 3001265;

    t127 = ((x509^x510)>(x511^x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	int16_t x515 = INT16_MIN;
	volatile uint32_t x516 = 1U;
	volatile int32_t t128 = -3890011;

    t128 = ((x513^x514)>(x515^x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x517 = UINT32_MAX;
	int64_t x518 = 4100406264714328LL;
	uint64_t x519 = UINT64_MAX;
	volatile int32_t t129 = 166;

    t129 = ((x517^x518)>(x519^x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	int32_t x523 = INT32_MAX;
	uint8_t x524 = UINT8_MAX;
	static volatile int32_t t130 = -4306133;

    t130 = ((x521^x522)>(x523^x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 7391U;
	volatile int64_t x527 = INT64_MIN;
	volatile int32_t x528 = 231;
	volatile int32_t t131 = -33161010;

    t131 = ((x525^x526)>(x527^x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = UINT8_MAX;
	int32_t x530 = -1;
	uint64_t x531 = 0LLU;

    t132 = ((x529^x530)>(x531^x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x534 = -1;
	int16_t x535 = 313;
	int64_t x536 = INT64_MIN;

    t133 = ((x533^x534)>(x535^x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = -1LL;
	int8_t x538 = INT8_MAX;
	int32_t x539 = -1;
	int32_t x540 = -1;
	int32_t t134 = 0;

    t134 = ((x537^x538)>(x539^x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = -3;
	volatile int16_t x542 = 6;
	int32_t x543 = INT32_MAX;
	uint8_t x544 = 19U;
	static int32_t t135 = -417;

    t135 = ((x541^x542)>(x543^x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MIN;
	int16_t x547 = -14572;
	uint8_t x548 = 16U;
	volatile int32_t t136 = 4;

    t136 = ((x545^x546)>(x547^x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MIN;
	int8_t x550 = -1;
	uint16_t x552 = UINT16_MAX;
	int32_t t137 = 2659172;

    t137 = ((x549^x550)>(x551^x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x553 = 5U;
	int64_t x554 = -369645935423LL;
	uint32_t x555 = 494U;
	volatile uint32_t x556 = 393031U;
	int32_t t138 = -5131154;

    t138 = ((x553^x554)>(x555^x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = UINT8_MAX;
	int16_t x558 = -1;
	volatile uint8_t x559 = 6U;
	int32_t x560 = 4026118;
	volatile int32_t t139 = -3270;

    t139 = ((x557^x558)>(x559^x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x561 = 6U;
	static int64_t x562 = -8974647235LL;
	uint64_t x563 = UINT64_MAX;
	int32_t x564 = INT32_MIN;

    t140 = ((x561^x562)>(x563^x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x566 = 61838288U;
	uint16_t x567 = 3325U;
	int8_t x568 = 30;
	int32_t t141 = -3095707;

    t141 = ((x565^x566)>(x567^x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x569 = -1664;
	uint16_t x570 = 5640U;
	uint32_t x572 = UINT32_MAX;

    t142 = ((x569^x570)>(x571^x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MAX;
	int64_t x574 = -3960LL;
	uint32_t x575 = 55956U;
	uint16_t x576 = UINT16_MAX;
	int32_t t143 = -14;

    t143 = ((x573^x574)>(x575^x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 311845797U;
	volatile int32_t x578 = INT32_MAX;
	int16_t x579 = -1;
	int16_t x580 = -130;
	int32_t t144 = -11;

    t144 = ((x577^x578)>(x579^x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MAX;
	int32_t x582 = -1;
	uint64_t x583 = 310234043LLU;
	uint16_t x584 = UINT16_MAX;
	volatile int32_t t145 = 85336;

    t145 = ((x581^x582)>(x583^x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x585 = -4;
	int16_t x587 = INT16_MIN;

    t146 = ((x585^x586)>(x587^x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x591 = 11;
	int8_t x592 = -2;
	volatile int32_t t147 = 2;

    t147 = ((x589^x590)>(x591^x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = 18U;
	uint32_t x594 = 1960U;
	int32_t x595 = INT32_MAX;
	uint16_t x596 = 6138U;
	volatile int32_t t148 = -1;

    t148 = ((x593^x594)>(x595^x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x598 = INT64_MAX;
	uint64_t x599 = UINT64_MAX;
	int32_t x600 = -1778324;
	int32_t t149 = -2;

    t149 = ((x597^x598)>(x599^x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x601 = 3762LLU;
	uint8_t x602 = UINT8_MAX;
	static volatile uint16_t x603 = 211U;
	int8_t x604 = 1;

    t150 = ((x601^x602)>(x603^x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x606 = INT64_MIN;
	int64_t x607 = 1LL;
	volatile uint16_t x608 = 3U;
	int32_t t151 = -550;

    t151 = ((x605^x606)>(x607^x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x610 = -1;
	volatile uint64_t x611 = 52723259064331LLU;
	volatile uint8_t x612 = 0U;
	int32_t t152 = 197;

    t152 = ((x609^x610)>(x611^x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x613 = INT32_MIN;
	volatile uint8_t x614 = 3U;
	uint16_t x615 = 23422U;
	volatile int32_t x616 = INT32_MIN;
	static int32_t t153 = -115210087;

    t153 = ((x613^x614)>(x615^x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x617 = 344639;
	uint16_t x618 = 15352U;
	volatile int16_t x619 = INT16_MIN;
	int32_t x620 = INT32_MIN;
	int32_t t154 = -98;

    t154 = ((x617^x618)>(x619^x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = -1;
	int8_t x622 = 32;
	uint8_t x623 = UINT8_MAX;
	int16_t x624 = INT16_MIN;
	int32_t t155 = 925085870;

    t155 = ((x621^x622)>(x623^x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = 297308987728LLU;
	int64_t x626 = -8525524382LL;
	static int64_t x627 = 373094LL;
	static int8_t x628 = INT8_MIN;
	int32_t t156 = 1;

    t156 = ((x625^x626)>(x627^x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = 172;
	static int32_t t157 = -22017477;

    t157 = ((x629^x630)>(x631^x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = UINT16_MAX;
	int8_t x634 = -1;
	volatile int32_t x636 = INT32_MIN;
	static volatile int32_t t158 = 25;

    t158 = ((x633^x634)>(x635^x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x637 = -8LL;
	static int16_t x638 = 6;
	int16_t x639 = INT16_MIN;
	uint64_t x640 = 415087252LLU;

    t159 = ((x637^x638)>(x639^x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x641 = 308;
	static int64_t x642 = INT64_MIN;
	uint32_t x643 = UINT32_MAX;
	volatile int8_t x644 = INT8_MIN;
	volatile int32_t t160 = 14;

    t160 = ((x641^x642)>(x643^x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x646 = -1;
	int16_t x647 = INT16_MAX;
	int64_t x648 = INT64_MIN;
	volatile int32_t t161 = 282;

    t161 = ((x645^x646)>(x647^x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	volatile uint16_t x650 = UINT16_MAX;
	int32_t x651 = INT32_MIN;
	uint16_t x652 = UINT16_MAX;

    t162 = ((x649^x650)>(x651^x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = UINT8_MAX;
	volatile int32_t x654 = INT32_MAX;
	volatile int32_t x655 = -47;
	volatile int64_t x656 = INT64_MIN;
	volatile int32_t t163 = 0;

    t163 = ((x653^x654)>(x655^x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	int64_t x658 = INT64_MIN;
	static volatile int32_t x659 = 701613144;
	int32_t t164 = -14800;

    t164 = ((x657^x658)>(x659^x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x662 = UINT16_MAX;
	int64_t x663 = INT64_MIN;
	int8_t x664 = INT8_MIN;
	int32_t t165 = 51;

    t165 = ((x661^x662)>(x663^x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = 159389LLU;
	uint32_t x666 = 2394332U;
	int8_t x667 = -2;
	int32_t t166 = -147295;

    t166 = ((x665^x666)>(x667^x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 795152779U;
	volatile int16_t x670 = INT16_MAX;
	uint64_t x672 = UINT64_MAX;
	volatile int32_t t167 = 1;

    t167 = ((x669^x670)>(x671^x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	volatile int32_t t168 = -1590;

    t168 = ((x673^x674)>(x675^x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = UINT8_MAX;
	uint8_t x678 = UINT8_MAX;
	uint8_t x679 = 0U;
	static volatile int32_t t169 = 53172615;

    t169 = ((x677^x678)>(x679^x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x681 = INT16_MAX;
	static int8_t x682 = -1;
	uint8_t x683 = UINT8_MAX;
	int64_t x684 = -1LL;
	static int32_t t170 = 32931252;

    t170 = ((x681^x682)>(x683^x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 14U;
	static int32_t x687 = -1;

    t171 = ((x685^x686)>(x687^x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MIN;
	int32_t x690 = -7;

    t172 = ((x689^x690)>(x691^x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 1U;
	int64_t x695 = 242817543243369LL;
	int16_t x696 = 14;

    t173 = ((x693^x694)>(x695^x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -1;
	static int8_t x698 = 55;
	uint16_t x699 = 411U;
	uint32_t x700 = 3947U;
	static volatile int32_t t174 = 261;

    t174 = ((x697^x698)>(x699^x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	int16_t x702 = -1584;
	uint16_t x703 = 15599U;
	uint16_t x704 = 28U;

    t175 = ((x701^x702)>(x703^x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x706 = 0U;
	int32_t x707 = INT32_MIN;
	volatile int32_t x708 = -1;
	int32_t t176 = 1709;

    t176 = ((x705^x706)>(x707^x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x710 = 578LLU;
	int16_t x711 = -1;
	int8_t x712 = INT8_MAX;

    t177 = ((x709^x710)>(x711^x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x713 = INT8_MIN;
	int8_t x714 = -7;
	int64_t x715 = INT64_MAX;
	int64_t x716 = INT64_MIN;
	static volatile int32_t t178 = -239982851;

    t178 = ((x713^x714)>(x715^x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x717 = 1LLU;
	int16_t x718 = INT16_MAX;
	int32_t x720 = 16754;
	int32_t t179 = 1042052;

    t179 = ((x717^x718)>(x719^x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x721 = 2323292040782544LLU;
	uint8_t x722 = 0U;
	int16_t x723 = -7;
	static uint8_t x724 = 79U;
	volatile int32_t t180 = 385974677;

    t180 = ((x721^x722)>(x723^x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int32_t x725 = INT32_MIN;
	uint32_t x727 = 481U;
	int32_t t181 = 79235311;

    t181 = ((x725^x726)>(x727^x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x730 = INT64_MIN;
	uint32_t x732 = 7796576U;
	static int32_t t182 = -4;

    t182 = ((x729^x730)>(x731^x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = UINT64_MAX;
	static volatile int32_t x734 = -7;
	int16_t x735 = INT16_MAX;
	int64_t x736 = INT64_MIN;
	volatile int32_t t183 = 0;

    t183 = ((x733^x734)>(x735^x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x737 = INT8_MIN;
	static int8_t x738 = 1;
	uint8_t x739 = 9U;
	int64_t x740 = INT64_MIN;
	int32_t t184 = 213;

    t184 = ((x737^x738)>(x739^x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -1;
	volatile int8_t x742 = -5;
	volatile int8_t x743 = INT8_MAX;
	static uint32_t x744 = 12519925U;

    t185 = ((x741^x742)>(x743^x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x745 = INT16_MAX;
	uint16_t x747 = 6U;
	uint8_t x748 = 33U;
	static volatile int32_t t186 = 1;

    t186 = ((x745^x746)>(x747^x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = INT16_MIN;
	volatile int64_t x751 = -1LL;
	volatile uint8_t x752 = 13U;
	volatile int32_t t187 = 29;

    t187 = ((x749^x750)>(x751^x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x753 = INT8_MAX;
	volatile uint32_t x754 = 383U;
	int64_t x756 = -1LL;
	volatile int32_t t188 = -757158;

    t188 = ((x753^x754)>(x755^x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x758 = INT32_MIN;
	static int64_t x759 = INT64_MIN;

    t189 = ((x757^x758)>(x759^x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MIN;
	int32_t x762 = 10961;
	int64_t x763 = INT64_MAX;
	int32_t x764 = INT32_MAX;
	volatile int32_t t190 = -492298119;

    t190 = ((x761^x762)>(x763^x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	int32_t x768 = -1;

    t191 = ((x765^x766)>(x767^x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x770 = INT64_MIN;
	static int8_t x771 = INT8_MIN;
	uint16_t x772 = 0U;

    t192 = ((x769^x770)>(x771^x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x774 = INT8_MIN;
	static uint8_t x775 = UINT8_MAX;
	static int64_t x776 = -1LL;
	int32_t t193 = 6747;

    t193 = ((x773^x774)>(x775^x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = -21;
	uint16_t x778 = UINT16_MAX;
	int32_t x779 = 13;
	static uint64_t x780 = 16706981408914LLU;
	int32_t t194 = 6;

    t194 = ((x777^x778)>(x779^x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = -8255;
	int32_t x782 = -542;
	uint64_t x783 = 60947964LLU;
	int16_t x784 = INT16_MIN;
	int32_t t195 = -1944;

    t195 = ((x781^x782)>(x783^x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = INT16_MAX;
	int32_t x786 = 12288;
	int8_t x787 = INT8_MIN;
	uint8_t x788 = 25U;
	volatile int32_t t196 = 57;

    t196 = ((x785^x786)>(x787^x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint8_t x790 = 49U;
	int32_t t197 = 12646;

    t197 = ((x789^x790)>(x791^x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MIN;
	uint64_t x794 = UINT64_MAX;
	static int32_t x795 = INT32_MIN;
	uint32_t x796 = 6097618U;

    t198 = ((x793^x794)>(x795^x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x797 = 1U;
	static volatile int16_t x798 = INT16_MIN;
	int32_t x800 = INT32_MAX;
	volatile int32_t t199 = -30;

    t199 = ((x797^x798)>(x799^x800));

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

