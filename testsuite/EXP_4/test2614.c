
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

uint32_t x2 = UINT32_MAX;
int32_t x5 = INT32_MIN;
static int16_t x7 = INT16_MIN;
int8_t x9 = -1;
volatile int16_t x10 = INT16_MIN;
static int32_t x16 = INT32_MAX;
int32_t x30 = INT32_MAX;
static int32_t x36 = INT32_MIN;
volatile int32_t t11 = 244110785;
volatile int8_t x56 = INT8_MIN;
static volatile int32_t t14 = -1472099;
uint8_t x63 = 8U;
uint32_t x69 = UINT32_MAX;
volatile int16_t x78 = INT16_MIN;
uint64_t x85 = 427954642830197283LLU;
volatile uint8_t x91 = 0U;
volatile uint16_t x93 = 1U;
int8_t x103 = 3;
int16_t x107 = -17;
uint32_t x110 = 35U;
volatile int64_t x114 = -1LL;
int64_t x115 = INT64_MIN;
static volatile int32_t t28 = -1;
int64_t x118 = -4164878LL;
volatile uint32_t x127 = UINT32_MAX;
int32_t t31 = -8806;
uint16_t x135 = 19644U;
int64_t x144 = -19406318LL;
static int16_t x153 = -1;
int64_t x154 = 15070219074193182LL;
int32_t x156 = -1;
uint32_t x158 = UINT32_MAX;
int8_t x166 = INT8_MAX;
uint8_t x167 = UINT8_MAX;
static int32_t t41 = -20809;
int32_t x170 = INT32_MIN;
static volatile int16_t x172 = INT16_MIN;
int32_t t44 = -39413047;
volatile int16_t x185 = INT16_MAX;
int32_t x206 = INT32_MIN;
volatile int32_t t51 = -139444882;
int16_t x210 = 1001;
int64_t x212 = INT64_MIN;
int32_t t53 = 156257429;
static int32_t x217 = -1;
uint32_t x220 = UINT32_MAX;
volatile uint64_t x225 = UINT64_MAX;
volatile int8_t x227 = -20;
int16_t x233 = 1;
int32_t x234 = INT32_MAX;
volatile int32_t t58 = 1468656;
int64_t x247 = INT64_MIN;
static volatile int8_t x255 = INT8_MAX;
int8_t x257 = INT8_MIN;
volatile int32_t t64 = 1744991;
uint64_t x262 = 69735899LLU;
volatile int32_t t65 = 1;
static uint8_t x267 = 0U;
static uint8_t x268 = 8U;
static volatile uint16_t x275 = 5U;
uint64_t x276 = UINT64_MAX;
int16_t x282 = INT16_MIN;
uint16_t x283 = 192U;
static volatile uint8_t x284 = 0U;
int16_t x287 = INT16_MIN;
volatile int32_t t72 = 0;
volatile int8_t x293 = INT8_MIN;
uint64_t x294 = 3118044025LLU;
int64_t x295 = 895LL;
int16_t x296 = INT16_MAX;
int8_t x300 = -1;
uint64_t x305 = UINT64_MAX;
uint32_t x307 = 101870160U;
int8_t x308 = 36;
uint8_t x319 = 12U;
volatile uint32_t x320 = UINT32_MAX;
int32_t x322 = 272;
uint32_t x325 = 18010486U;
int32_t x329 = INT32_MIN;
volatile uint64_t x331 = UINT64_MAX;
int16_t x336 = INT16_MIN;
int8_t x342 = -16;
uint32_t x343 = 157308461U;
volatile int32_t t84 = -81369;
int8_t x347 = -1;
volatile int32_t t85 = -9;
volatile int8_t x359 = -1;
uint32_t x362 = 256509097U;
volatile int8_t x363 = INT8_MAX;
volatile int32_t t90 = 716853;
volatile uint16_t x369 = UINT16_MAX;
int32_t t91 = 1;
volatile int32_t t92 = 1045251;
uint16_t x382 = 314U;
static int32_t t93 = -30037093;
volatile int32_t t94 = -98;
uint8_t x390 = 39U;
static int32_t x391 = INT32_MIN;
static uint64_t x395 = 5226625889175241LLU;
uint32_t x411 = 9U;
static int32_t x419 = -290463;
uint16_t x420 = UINT16_MAX;
volatile int32_t t102 = 3;
volatile uint16_t x421 = 163U;
int64_t x422 = INT64_MAX;
static uint64_t x423 = UINT64_MAX;
int16_t x430 = 48;
int64_t x438 = INT64_MIN;
int32_t x453 = INT32_MIN;
int8_t x456 = 0;
static int32_t t110 = 2272;
volatile int32_t t111 = 498611;
int16_t x462 = INT16_MAX;
int32_t x466 = 392218765;
volatile int32_t t113 = -59892995;
int16_t x470 = -1;
int16_t x479 = 1;
uint64_t x485 = UINT64_MAX;
uint16_t x486 = 0U;
uint32_t x488 = UINT32_MAX;
volatile int32_t t120 = 10856;
uint32_t x500 = UINT32_MAX;
volatile int32_t t123 = -5213766;
volatile int16_t x509 = -210;
static volatile int8_t x510 = INT8_MAX;
int32_t t125 = 47622;
int64_t x518 = -14780126717789LL;
volatile int32_t t126 = 909918004;
int32_t x522 = 18692;
int16_t x525 = -11;
volatile int32_t t130 = 555;
int8_t x538 = -1;
int64_t x548 = -184900140023416LL;
uint32_t x549 = 5820U;
int8_t x557 = INT8_MAX;
int64_t x564 = INT64_MIN;
int16_t x568 = 0;
int32_t t139 = 11;
int32_t x580 = 527096;
volatile int32_t t141 = -63501;
int16_t x585 = INT16_MIN;
int32_t x586 = INT32_MIN;
volatile int16_t x592 = INT16_MIN;
int8_t x601 = INT8_MIN;
volatile int32_t t146 = 141038;
volatile int32_t t147 = 801882;
uint32_t x609 = UINT32_MAX;
int64_t x616 = INT64_MIN;
volatile int16_t x626 = -74;
uint8_t x628 = 25U;
int32_t t153 = -716;
int32_t x635 = -38459;
volatile int16_t x637 = INT16_MAX;
int64_t x644 = INT64_MIN;
uint8_t x649 = 59U;
int16_t x652 = -1;
volatile int32_t t159 = 169059;
uint8_t x664 = UINT8_MAX;
int32_t t160 = -124166;
uint64_t x674 = 1323630317542357893LLU;
int64_t x676 = INT64_MIN;
int32_t t163 = 38609;
volatile int64_t x677 = INT64_MAX;
volatile uint16_t x680 = 21U;
volatile int32_t t165 = -1821665;
int16_t x686 = INT16_MAX;
int32_t x689 = 77436;
int64_t x690 = 0LL;
static uint64_t x695 = 3080LLU;
static int32_t x710 = -2467783;
int32_t t172 = -1;
static int32_t t174 = 72670391;
volatile int64_t x722 = INT64_MIN;
static volatile int64_t x724 = 103278284LL;
static volatile int64_t x729 = INT64_MIN;
uint32_t x740 = 1U;
static volatile int32_t t179 = 1;
int32_t t180 = 7975;
volatile int32_t t184 = 2690;
static int64_t x761 = -1LL;
int8_t x769 = INT8_MIN;
int8_t x772 = INT8_MAX;
uint32_t x773 = UINT32_MAX;
static int32_t x787 = INT32_MAX;
int32_t x793 = INT32_MIN;
int64_t x802 = -1LL;
static int8_t x804 = 1;
int32_t t195 = 1;
static int32_t x818 = 28384921;


void f0(void) {
    	volatile int8_t x1 = INT8_MIN;
	int64_t x3 = INT64_MAX;
	volatile int64_t x4 = -1LL;
	int32_t t0 = -990421;

    t0 = (x1<=(x2%(x3^x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MIN;
	static uint32_t x8 = UINT32_MAX;
	int32_t t1 = -6971;

    t1 = (x5<=(x6%(x7^x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x11 = INT16_MIN;
	volatile uint64_t x12 = UINT64_MAX;
	volatile int32_t t2 = -3775545;

    t2 = (x9<=(x10%(x11^x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x13 = 1613U;
	volatile int16_t x14 = INT16_MAX;
	volatile int32_t x15 = INT32_MIN;
	int32_t t3 = 3155801;

    t3 = (x13<=(x14%(x15^x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 506U;
	static volatile int16_t x18 = -28;
	uint64_t x19 = UINT64_MAX;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 6932601;

    t4 = (x17<=(x18%(x19^x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = UINT32_MAX;
	int16_t x22 = INT16_MIN;
	int8_t x23 = INT8_MAX;
	uint32_t x24 = 5U;
	volatile int32_t t5 = -77;

    t5 = (x21<=(x22%(x23^x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = 26937962756744LL;
	uint64_t x26 = 31185118655791293LLU;
	int8_t x27 = INT8_MIN;
	uint64_t x28 = UINT64_MAX;
	int32_t t6 = -51;

    t6 = (x25<=(x26%(x27^x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	volatile uint32_t x31 = UINT32_MAX;
	volatile int16_t x32 = INT16_MIN;
	int32_t t7 = 1052858548;

    t7 = (x29<=(x30%(x31^x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int16_t x34 = -1;
	int32_t x35 = -66533534;
	volatile int32_t t8 = -1941809;

    t8 = (x33<=(x34%(x35^x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x37 = UINT8_MAX;
	int8_t x38 = INT8_MIN;
	int8_t x39 = -1;
	int32_t x40 = -24;
	volatile int32_t t9 = 54821;

    t9 = (x37<=(x38%(x39^x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MAX;
	int16_t x42 = INT16_MIN;
	static volatile uint64_t x43 = 1LLU;
	int16_t x44 = -1;
	volatile int32_t t10 = -917;

    t10 = (x41<=(x42%(x43^x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = 14146;
	int32_t x46 = -1;
	int16_t x47 = 18;
	int16_t x48 = -1;

    t11 = (x45<=(x46%(x47^x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -50974;
	volatile int64_t x50 = -1LL;
	static int8_t x51 = 8;
	int16_t x52 = 151;
	int32_t t12 = -362601;

    t12 = (x49<=(x50%(x51^x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 2U;
	uint32_t x54 = UINT32_MAX;
	uint16_t x55 = UINT16_MAX;
	int32_t t13 = 11;

    t13 = (x53<=(x54%(x55^x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	static int32_t x58 = INT32_MAX;
	uint8_t x59 = UINT8_MAX;
	uint16_t x60 = UINT16_MAX;

    t14 = (x57<=(x58%(x59^x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	static int32_t x62 = INT32_MIN;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 49374583;

    t15 = (x61<=(x62%(x63^x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 80992LLU;
	static uint64_t x66 = 101LLU;
	volatile uint32_t x67 = 2390506U;
	static int32_t x68 = INT32_MAX;
	static volatile int32_t t16 = 4877999;

    t16 = (x65<=(x66%(x67^x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = -1;
	int64_t x71 = INT64_MIN;
	uint16_t x72 = 542U;
	volatile int32_t t17 = -916361;

    t17 = (x69<=(x70%(x71^x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 46LLU;
	volatile int32_t x74 = INT32_MIN;
	int32_t x75 = INT32_MIN;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = -118;

    t18 = (x73<=(x74%(x75^x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 349LLU;
	uint16_t x79 = 2740U;
	int64_t x80 = -1695281LL;
	int32_t t19 = 115139;

    t19 = (x77<=(x78%(x79^x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -18913;
	uint8_t x82 = UINT8_MAX;
	volatile int8_t x83 = INT8_MIN;
	volatile uint32_t x84 = 44U;
	static int32_t t20 = -40594;

    t20 = (x81<=(x82%(x83^x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x86 = -1LL;
	uint64_t x87 = 568155759514405LLU;
	uint32_t x88 = UINT32_MAX;
	int32_t t21 = 11;

    t21 = (x85<=(x86%(x87^x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = UINT8_MAX;
	uint64_t x90 = UINT64_MAX;
	static uint8_t x92 = UINT8_MAX;
	int32_t t22 = -2528639;

    t22 = (x89<=(x90%(x91^x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = INT64_MAX;
	volatile int32_t x95 = INT32_MIN;
	int64_t x96 = INT64_MAX;
	int32_t t23 = 19914;

    t23 = (x93<=(x94%(x95^x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	int64_t x98 = 209819075LL;
	int8_t x99 = INT8_MAX;
	static int16_t x100 = -161;
	int32_t t24 = 4860;

    t24 = (x97<=(x98%(x99^x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x101 = 366LLU;
	uint16_t x102 = 2U;
	uint16_t x104 = 12U;
	int32_t t25 = 6;

    t25 = (x101<=(x102%(x103^x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x105 = INT64_MAX;
	int16_t x106 = INT16_MIN;
	volatile uint64_t x108 = 2347036991LLU;
	static int32_t t26 = -17993166;

    t26 = (x105<=(x106%(x107^x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x109 = INT8_MIN;
	static int16_t x111 = INT16_MIN;
	volatile int16_t x112 = 5;
	volatile int32_t t27 = -50476780;

    t27 = (x109<=(x110%(x111^x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 56U;
	int8_t x116 = INT8_MIN;

    t28 = (x113<=(x114%(x115^x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = -1;
	int8_t x119 = -1;
	int16_t x120 = INT16_MIN;
	int32_t t29 = -32432764;

    t29 = (x117<=(x118%(x119^x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x121 = 14;
	int32_t x122 = -1;
	int32_t x123 = -1;
	static int16_t x124 = INT16_MIN;
	int32_t t30 = -3449;

    t30 = (x121<=(x122%(x123^x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x125 = -1;
	int8_t x126 = INT8_MIN;
	volatile uint64_t x128 = UINT64_MAX;

    t31 = (x125<=(x126%(x127^x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MAX;
	int16_t x130 = INT16_MAX;
	int32_t x131 = 488504877;
	uint8_t x132 = UINT8_MAX;
	int32_t t32 = 14143;

    t32 = (x129<=(x130%(x131^x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -503019228;
	static volatile uint16_t x134 = 5376U;
	uint64_t x136 = 8732370927564LLU;
	int32_t t33 = -177;

    t33 = (x133<=(x134%(x135^x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x137 = INT8_MIN;
	volatile int16_t x138 = INT16_MAX;
	int16_t x139 = 14;
	uint64_t x140 = UINT64_MAX;
	int32_t t34 = -64;

    t34 = (x137<=(x138%(x139^x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MAX;
	volatile int8_t x142 = 2;
	static volatile uint64_t x143 = 331020011LLU;
	static volatile int32_t t35 = -13401625;

    t35 = (x141<=(x142%(x143^x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x145 = -1;
	static int32_t x146 = 50;
	int32_t x147 = 11054;
	static uint8_t x148 = 14U;
	int32_t t36 = 5;

    t36 = (x145<=(x146%(x147^x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = UINT32_MAX;
	int32_t x150 = INT32_MIN;
	static uint8_t x151 = 12U;
	int8_t x152 = 16;
	static volatile int32_t t37 = 55554031;

    t37 = (x149<=(x150%(x151^x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x155 = INT32_MAX;
	volatile int32_t t38 = 1783;

    t38 = (x153<=(x154%(x155^x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = 0;
	static int64_t x159 = INT64_MAX;
	uint8_t x160 = 6U;
	int32_t t39 = 26899745;

    t39 = (x157<=(x158%(x159^x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 65U;
	volatile int32_t x162 = INT32_MAX;
	volatile int32_t x163 = INT32_MIN;
	uint32_t x164 = UINT32_MAX;
	static volatile int32_t t40 = 119333890;

    t40 = (x161<=(x162%(x163^x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = INT16_MIN;
	int16_t x168 = INT16_MIN;

    t41 = (x165<=(x166%(x167^x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = UINT8_MAX;
	int32_t x171 = 774397;
	volatile int32_t t42 = 40713974;

    t42 = (x169<=(x170%(x171^x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = 1;
	int8_t x174 = INT8_MIN;
	uint8_t x175 = 56U;
	volatile uint32_t x176 = 0U;
	static int32_t t43 = 616441;

    t43 = (x173<=(x174%(x175^x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MAX;
	static int16_t x178 = INT16_MAX;
	uint8_t x179 = 0U;
	volatile int64_t x180 = INT64_MIN;

    t44 = (x177<=(x178%(x179^x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MIN;
	static int16_t x183 = INT16_MIN;
	int32_t x184 = INT32_MIN;
	static int32_t t45 = 181555;

    t45 = (x181<=(x182%(x183^x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x186 = 0;
	static uint64_t x187 = 177722366LLU;
	static int16_t x188 = -1;
	int32_t t46 = -216514;

    t46 = (x185<=(x186%(x187^x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = UINT8_MAX;
	int16_t x190 = INT16_MIN;
	int8_t x191 = -1;
	uint64_t x192 = 488LLU;
	static volatile int32_t t47 = -89;

    t47 = (x189<=(x190%(x191^x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = 368;
	int8_t x194 = 14;
	volatile int32_t x195 = -1;
	volatile int32_t x196 = 91;
	int32_t t48 = -653633;

    t48 = (x193<=(x194%(x195^x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = 2;
	int8_t x198 = INT8_MIN;
	uint16_t x199 = 2326U;
	volatile int64_t x200 = 109091663666413LL;
	volatile int32_t t49 = 740958;

    t49 = (x197<=(x198%(x199^x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	volatile int64_t x202 = -1LL;
	static volatile int64_t x203 = -1LL;
	static uint8_t x204 = UINT8_MAX;
	static int32_t t50 = 221777823;

    t50 = (x201<=(x202%(x203^x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	uint64_t x207 = UINT64_MAX;
	int64_t x208 = 90583693505586LL;

    t51 = (x205<=(x206%(x207^x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x209 = 1;
	int16_t x211 = INT16_MIN;
	int32_t t52 = -3;

    t52 = (x209<=(x210%(x211^x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = 1054826771574824058LLU;
	uint32_t x214 = 978892421U;
	static int64_t x215 = -65989459LL;
	static int16_t x216 = -1;

    t53 = (x213<=(x214%(x215^x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x218 = INT64_MIN;
	int32_t x219 = -3;
	int32_t t54 = 6062593;

    t54 = (x217<=(x218%(x219^x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = UINT16_MAX;
	volatile uint8_t x222 = UINT8_MAX;
	static int8_t x223 = INT8_MIN;
	volatile int32_t x224 = -1;
	int32_t t55 = -9880235;

    t55 = (x221<=(x222%(x223^x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x226 = INT8_MIN;
	int32_t x228 = 1;
	volatile int32_t t56 = 2527138;

    t56 = (x225<=(x226%(x227^x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x229 = -1;
	int64_t x230 = -1LL;
	int16_t x231 = INT16_MIN;
	uint16_t x232 = 68U;
	int32_t t57 = -7;

    t57 = (x229<=(x230%(x231^x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x235 = UINT16_MAX;
	volatile uint16_t x236 = 0U;

    t58 = (x233<=(x234%(x235^x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x237 = 5U;
	uint8_t x238 = UINT8_MAX;
	volatile uint32_t x239 = 59813580U;
	int8_t x240 = INT8_MAX;
	volatile int32_t t59 = 5984424;

    t59 = (x237<=(x238%(x239^x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x241 = INT8_MAX;
	int16_t x242 = -1;
	int32_t x243 = 29734709;
	uint32_t x244 = 7990U;
	int32_t t60 = -7731;

    t60 = (x241<=(x242%(x243^x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MIN;
	int16_t x246 = -1;
	volatile int32_t x248 = INT32_MAX;
	int32_t t61 = -144229;

    t61 = (x245<=(x246%(x247^x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x249 = 12LLU;
	int64_t x250 = -1555157388891413LL;
	static int64_t x251 = INT64_MIN;
	volatile int16_t x252 = -37;
	int32_t t62 = -3318573;

    t62 = (x249<=(x250%(x251^x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = 6;
	uint32_t x254 = 11822U;
	int64_t x256 = 70028LL;
	volatile int32_t t63 = -799;

    t63 = (x253<=(x254%(x255^x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x258 = 11;
	int16_t x259 = INT16_MAX;
	uint32_t x260 = 1412242184U;

    t64 = (x257<=(x258%(x259^x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MAX;
	int64_t x263 = INT64_MIN;
	int16_t x264 = -1;

    t65 = (x261<=(x262%(x263^x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x265 = UINT8_MAX;
	static int8_t x266 = -1;
	int32_t t66 = 35677843;

    t66 = (x265<=(x266%(x267^x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x269 = UINT64_MAX;
	static uint64_t x270 = UINT64_MAX;
	volatile int16_t x271 = -6;
	int32_t x272 = INT32_MIN;
	static volatile int32_t t67 = 670;

    t67 = (x269<=(x270%(x271^x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = 133587160LL;
	volatile uint32_t x274 = 202U;
	volatile int32_t t68 = 11232;

    t68 = (x273<=(x274%(x275^x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MIN;
	static int32_t x278 = -1;
	uint8_t x279 = UINT8_MAX;
	static int64_t x280 = 11011589084570LL;
	volatile int32_t t69 = -759;

    t69 = (x277<=(x278%(x279^x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = 2;
	int32_t t70 = 3;

    t70 = (x281<=(x282%(x283^x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 97U;
	int16_t x286 = -9663;
	volatile int64_t x288 = INT64_MAX;
	int32_t t71 = -19;

    t71 = (x285<=(x286%(x287^x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int32_t x289 = -8911877;
	volatile int8_t x290 = 0;
	static volatile uint32_t x291 = UINT32_MAX;
	uint16_t x292 = UINT16_MAX;

    t72 = (x289<=(x290%(x291^x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t t73 = 10025;

    t73 = (x293<=(x294%(x295^x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -224;
	volatile int16_t x298 = 213;
	uint64_t x299 = 111279751LLU;
	int32_t t74 = -10456867;

    t74 = (x297<=(x298%(x299^x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x301 = INT8_MAX;
	int64_t x302 = -1LL;
	int16_t x303 = 20;
	int8_t x304 = INT8_MAX;
	int32_t t75 = -9241637;

    t75 = (x301<=(x302%(x303^x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x306 = INT8_MAX;
	static volatile int32_t t76 = 7071561;

    t76 = (x305<=(x306%(x307^x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x313 = -1;
	volatile int8_t x314 = INT8_MIN;
	volatile int64_t x315 = INT64_MIN;
	static uint32_t x316 = 58270261U;
	int32_t t77 = 44950;

    t77 = (x313<=(x314%(x315^x316)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x317 = UINT64_MAX;
	uint64_t x318 = UINT64_MAX;
	volatile int32_t t78 = -13;

    t78 = (x317<=(x318%(x319^x320)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x321 = UINT16_MAX;
	uint64_t x323 = 3871836999511LLU;
	int64_t x324 = -245591137LL;
	volatile int32_t t79 = 3232;

    t79 = (x321<=(x322%(x323^x324)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x326 = -951602;
	int8_t x327 = -3;
	uint16_t x328 = 6U;
	int32_t t80 = -7;

    t80 = (x325<=(x326%(x327^x328)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x330 = -10;
	int32_t x332 = INT32_MIN;
	volatile int32_t t81 = -475311;

    t81 = (x329<=(x330%(x331^x332)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x333 = INT8_MIN;
	int32_t x334 = -26487324;
	static int64_t x335 = INT64_MIN;
	volatile int32_t t82 = -15180418;

    t82 = (x333<=(x334%(x335^x336)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x337 = INT16_MAX;
	int32_t x338 = 1;
	int8_t x339 = -1;
	volatile int16_t x340 = -1435;
	volatile int32_t t83 = -3;

    t83 = (x337<=(x338%(x339^x340)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x341 = -1664450588930010731LL;
	int8_t x344 = 55;

    t84 = (x341<=(x342%(x343^x344)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x345 = UINT16_MAX;
	volatile uint16_t x346 = 456U;
	int64_t x348 = INT64_MIN;

    t85 = (x345<=(x346%(x347^x348)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x349 = 60;
	int16_t x350 = INT16_MIN;
	int32_t x351 = -7337;
	static uint8_t x352 = 4U;
	int32_t t86 = -52220;

    t86 = (x349<=(x350%(x351^x352)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x353 = 1049;
	int32_t x354 = 1;
	int16_t x355 = INT16_MIN;
	uint32_t x356 = 0U;
	int32_t t87 = -15;

    t87 = (x353<=(x354%(x355^x356)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x357 = INT16_MIN;
	int64_t x358 = -158810202441068800LL;
	volatile uint16_t x360 = 15U;
	static volatile int32_t t88 = -783156294;

    t88 = (x357<=(x358%(x359^x360)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x361 = -1;
	int32_t x364 = INT32_MIN;
	int32_t t89 = -303638;

    t89 = (x361<=(x362%(x363^x364)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x365 = INT32_MAX;
	static uint8_t x366 = UINT8_MAX;
	uint16_t x367 = 2167U;
	static int16_t x368 = INT16_MIN;

    t90 = (x365<=(x366%(x367^x368)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x370 = -24;
	uint64_t x371 = 3401899LLU;
	volatile uint64_t x372 = UINT64_MAX;

    t91 = (x369<=(x370%(x371^x372)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int64_t x377 = -523013273LL;
	int8_t x378 = -1;
	int8_t x379 = INT8_MIN;
	int8_t x380 = 0;

    t92 = (x377<=(x378%(x379^x380)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x381 = INT64_MAX;
	uint32_t x383 = 14U;
	static volatile int16_t x384 = INT16_MIN;

    t93 = (x381<=(x382%(x383^x384)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x385 = INT16_MIN;
	int8_t x386 = INT8_MIN;
	int8_t x387 = -1;
	int16_t x388 = 511;

    t94 = (x385<=(x386%(x387^x388)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x389 = 127564971LL;
	int64_t x392 = INT64_MAX;
	static volatile int32_t t95 = -26257095;

    t95 = (x389<=(x390%(x391^x392)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x393 = INT8_MAX;
	static volatile int16_t x394 = INT16_MAX;
	volatile uint16_t x396 = 63U;
	volatile int32_t t96 = -58548;

    t96 = (x393<=(x394%(x395^x396)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x397 = INT8_MAX;
	int32_t x398 = 19339;
	int32_t x399 = INT32_MIN;
	volatile int16_t x400 = INT16_MIN;
	int32_t t97 = 3967527;

    t97 = (x397<=(x398%(x399^x400)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x401 = UINT8_MAX;
	int32_t x402 = 253997753;
	volatile int32_t x403 = INT32_MAX;
	int64_t x404 = 391318777733168210LL;
	int32_t t98 = -21;

    t98 = (x401<=(x402%(x403^x404)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x405 = INT8_MAX;
	static volatile int32_t x406 = -1;
	int32_t x407 = INT32_MIN;
	int16_t x408 = -1;
	int32_t t99 = -844;

    t99 = (x405<=(x406%(x407^x408)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x409 = INT64_MAX;
	int16_t x410 = -87;
	int8_t x412 = INT8_MAX;
	int32_t t100 = 0;

    t100 = (x409<=(x410%(x411^x412)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x413 = INT8_MIN;
	volatile int16_t x414 = INT16_MAX;
	int32_t x415 = 185955;
	static volatile int16_t x416 = 111;
	int32_t t101 = 1;

    t101 = (x413<=(x414%(x415^x416)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x417 = INT64_MIN;
	volatile uint64_t x418 = 32292442646LLU;

    t102 = (x417<=(x418%(x419^x420)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x424 = INT8_MIN;
	volatile int32_t t103 = -1611444;

    t103 = (x421<=(x422%(x423^x424)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x425 = -1LL;
	uint16_t x426 = 2U;
	int32_t x427 = 28617;
	static uint16_t x428 = UINT16_MAX;
	static int32_t t104 = -1;

    t104 = (x425<=(x426%(x427^x428)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x429 = INT32_MAX;
	uint8_t x431 = 98U;
	int64_t x432 = INT64_MIN;
	volatile int32_t t105 = 51108854;

    t105 = (x429<=(x430%(x431^x432)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x433 = INT16_MIN;
	int8_t x434 = INT8_MIN;
	int64_t x435 = INT64_MIN;
	int16_t x436 = -1;
	int32_t t106 = 2;

    t106 = (x433<=(x434%(x435^x436)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x437 = -1LL;
	volatile int16_t x439 = INT16_MAX;
	static int32_t x440 = INT32_MAX;
	int32_t t107 = -41832425;

    t107 = (x437<=(x438%(x439^x440)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x441 = 15U;
	volatile uint8_t x442 = UINT8_MAX;
	int8_t x443 = -18;
	int32_t x444 = -1;
	int32_t t108 = 56691556;

    t108 = (x441<=(x442%(x443^x444)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x449 = UINT64_MAX;
	static uint8_t x450 = UINT8_MAX;
	static uint32_t x451 = 2296722U;
	int64_t x452 = INT64_MIN;
	volatile int32_t t109 = -227819385;

    t109 = (x449<=(x450%(x451^x452)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x454 = 0;
	uint32_t x455 = 17945169U;

    t110 = (x453<=(x454%(x455^x456)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x457 = 0U;
	int64_t x458 = 223562828802584LL;
	uint32_t x459 = UINT32_MAX;
	int64_t x460 = -1LL;

    t111 = (x457<=(x458%(x459^x460)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x461 = -170;
	volatile uint8_t x463 = 2U;
	uint32_t x464 = 820751U;
	volatile int32_t t112 = -122115971;

    t112 = (x461<=(x462%(x463^x464)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x465 = 397U;
	int16_t x467 = -279;
	int8_t x468 = -48;

    t113 = (x465<=(x466%(x467^x468)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x469 = 0LLU;
	int8_t x471 = 1;
	int64_t x472 = 513205678588470155LL;
	volatile int32_t t114 = 1;

    t114 = (x469<=(x470%(x471^x472)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x473 = INT16_MAX;
	volatile uint32_t x474 = UINT32_MAX;
	uint16_t x475 = UINT16_MAX;
	static uint64_t x476 = 1595LLU;
	int32_t t115 = -374534;

    t115 = (x473<=(x474%(x475^x476)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x477 = -17;
	int64_t x478 = INT64_MAX;
	int64_t x480 = 64676053344098LL;
	volatile int32_t t116 = -2967;

    t116 = (x477<=(x478%(x479^x480)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x481 = UINT64_MAX;
	uint32_t x482 = 3499U;
	int64_t x483 = 2091426710006LL;
	volatile uint32_t x484 = 412U;
	static int32_t t117 = 69781;

    t117 = (x481<=(x482%(x483^x484)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x487 = 2;
	int32_t t118 = 21610;

    t118 = (x485<=(x486%(x487^x488)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x489 = INT16_MIN;
	volatile uint8_t x490 = 15U;
	int8_t x491 = -12;
	int8_t x492 = 1;
	int32_t t119 = -252067;

    t119 = (x489<=(x490%(x491^x492)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x493 = -43;
	int16_t x494 = INT16_MAX;
	static uint16_t x495 = UINT16_MAX;
	int64_t x496 = INT64_MAX;

    t120 = (x493<=(x494%(x495^x496)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x497 = 14U;
	volatile int64_t x498 = -2165935763917LL;
	uint16_t x499 = UINT16_MAX;
	int32_t t121 = 53004;

    t121 = (x497<=(x498%(x499^x500)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x501 = INT16_MAX;
	int64_t x502 = -316LL;
	int64_t x503 = INT64_MAX;
	volatile int32_t x504 = 1233;
	static int32_t t122 = 810;

    t122 = (x501<=(x502%(x503^x504)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x505 = INT16_MAX;
	int8_t x506 = 57;
	uint32_t x507 = 9842U;
	int64_t x508 = -52138122LL;

    t123 = (x505<=(x506%(x507^x508)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x511 = 31357U;
	uint8_t x512 = 90U;
	volatile int32_t t124 = 1957471;

    t124 = (x509<=(x510%(x511^x512)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x513 = 0U;
	int8_t x514 = 25;
	int64_t x515 = -877047102985221567LL;
	int8_t x516 = INT8_MIN;

    t125 = (x513<=(x514%(x515^x516)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x517 = 0;
	int32_t x519 = -2827414;
	int64_t x520 = 16301522LL;

    t126 = (x517<=(x518%(x519^x520)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x521 = -1;
	int32_t x523 = INT32_MAX;
	uint16_t x524 = UINT16_MAX;
	volatile int32_t t127 = 2;

    t127 = (x521<=(x522%(x523^x524)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x526 = UINT8_MAX;
	volatile int64_t x527 = INT64_MAX;
	int32_t x528 = -1313;
	int32_t t128 = -1;

    t128 = (x525<=(x526%(x527^x528)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x529 = -2304060;
	volatile uint64_t x530 = 93LLU;
	int32_t x531 = 2710;
	int32_t x532 = INT32_MAX;
	int32_t t129 = 1030599739;

    t129 = (x529<=(x530%(x531^x532)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x533 = 1U;
	int64_t x534 = INT64_MIN;
	int32_t x535 = 224442;
	int32_t x536 = -1;

    t130 = (x533<=(x534%(x535^x536)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x537 = INT16_MIN;
	uint8_t x539 = 99U;
	uint16_t x540 = 25754U;
	int32_t t131 = 2;

    t131 = (x537<=(x538%(x539^x540)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x541 = UINT32_MAX;
	int8_t x542 = INT8_MAX;
	uint8_t x543 = 13U;
	int64_t x544 = -1LL;
	int32_t t132 = -6;

    t132 = (x541<=(x542%(x543^x544)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x545 = -1;
	int16_t x546 = -1;
	static int64_t x547 = INT64_MAX;
	int32_t t133 = -6;

    t133 = (x545<=(x546%(x547^x548)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x550 = -4;
	int8_t x551 = -1;
	static int16_t x552 = INT16_MAX;
	volatile int32_t t134 = -57846581;

    t134 = (x549<=(x550%(x551^x552)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x553 = -1;
	int32_t x554 = -38;
	int8_t x555 = -23;
	uint64_t x556 = 447665943215LLU;
	volatile int32_t t135 = 583741358;

    t135 = (x553<=(x554%(x555^x556)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x558 = INT8_MAX;
	volatile uint8_t x559 = 5U;
	int32_t x560 = INT32_MIN;
	static volatile int32_t t136 = -11195033;

    t136 = (x557<=(x558%(x559^x560)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x561 = -8166664LL;
	int8_t x562 = INT8_MAX;
	volatile int32_t x563 = 6;
	int32_t t137 = -43;

    t137 = (x561<=(x562%(x563^x564)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x565 = INT32_MIN;
	volatile int8_t x566 = -1;
	int32_t x567 = 1;
	int32_t t138 = 985804982;

    t138 = (x565<=(x566%(x567^x568)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x569 = INT16_MAX;
	volatile int8_t x570 = -17;
	int8_t x571 = INT8_MIN;
	int32_t x572 = INT32_MIN;

    t139 = (x569<=(x570%(x571^x572)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x573 = -1;
	volatile int64_t x574 = -10609LL;
	static int8_t x575 = INT8_MIN;
	int64_t x576 = 349LL;
	volatile int32_t t140 = 0;

    t140 = (x573<=(x574%(x575^x576)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x577 = INT64_MAX;
	static int32_t x578 = 79281;
	uint32_t x579 = UINT32_MAX;

    t141 = (x577<=(x578%(x579^x580)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x581 = INT8_MIN;
	static int8_t x582 = -1;
	int32_t x583 = INT32_MIN;
	int8_t x584 = INT8_MIN;
	static int32_t t142 = -11716;

    t142 = (x581<=(x582%(x583^x584)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x587 = 885LL;
	uint16_t x588 = UINT16_MAX;
	volatile int32_t t143 = -12713228;

    t143 = (x585<=(x586%(x587^x588)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x589 = INT16_MIN;
	volatile int64_t x590 = -1LL;
	static uint64_t x591 = 411678LLU;
	volatile int32_t t144 = 27789;

    t144 = (x589<=(x590%(x591^x592)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x597 = 124U;
	int8_t x598 = INT8_MAX;
	int64_t x599 = INT64_MIN;
	uint8_t x600 = UINT8_MAX;
	static int32_t t145 = -480517430;

    t145 = (x597<=(x598%(x599^x600)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x602 = UINT64_MAX;
	int32_t x603 = INT32_MIN;
	int32_t x604 = INT32_MAX;

    t146 = (x601<=(x602%(x603^x604)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x605 = INT8_MAX;
	uint32_t x606 = 208U;
	int8_t x607 = INT8_MIN;
	uint64_t x608 = 522702906500193LLU;

    t147 = (x605<=(x606%(x607^x608)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x610 = 267U;
	int8_t x611 = -60;
	volatile int8_t x612 = -8;
	int32_t t148 = 8879;

    t148 = (x609<=(x610%(x611^x612)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x613 = INT16_MIN;
	static int32_t x614 = 2559;
	static uint64_t x615 = 41383316LLU;
	static volatile int32_t t149 = 7589;

    t149 = (x613<=(x614%(x615^x616)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x617 = INT32_MAX;
	uint32_t x618 = UINT32_MAX;
	volatile uint32_t x619 = UINT32_MAX;
	static int16_t x620 = INT16_MIN;
	int32_t t150 = -536;

    t150 = (x617<=(x618%(x619^x620)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x621 = -4417269221543202325LL;
	uint64_t x622 = 18467046LLU;
	int64_t x623 = INT64_MIN;
	static volatile int16_t x624 = -1;
	volatile int32_t t151 = 492823337;

    t151 = (x621<=(x622%(x623^x624)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int16_t x625 = -63;
	uint32_t x627 = 188058U;
	volatile int32_t t152 = -9;

    t152 = (x625<=(x626%(x627^x628)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x629 = 1359262U;
	uint16_t x630 = UINT16_MAX;
	static int8_t x631 = 1;
	uint8_t x632 = 3U;

    t153 = (x629<=(x630%(x631^x632)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x633 = 1;
	int64_t x634 = 42609301144LL;
	uint16_t x636 = UINT16_MAX;
	volatile int32_t t154 = 4573;

    t154 = (x633<=(x634%(x635^x636)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x638 = 16589751LL;
	static uint8_t x639 = 39U;
	int32_t x640 = INT32_MIN;
	int32_t t155 = -113446558;

    t155 = (x637<=(x638%(x639^x640)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x641 = INT16_MAX;
	int32_t x642 = INT32_MIN;
	uint32_t x643 = UINT32_MAX;
	int32_t t156 = 235;

    t156 = (x641<=(x642%(x643^x644)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x650 = UINT8_MAX;
	uint32_t x651 = 1038336U;
	int32_t t157 = -36331815;

    t157 = (x649<=(x650%(x651^x652)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x653 = INT16_MIN;
	static volatile int64_t x654 = -4564342973320110340LL;
	uint32_t x655 = UINT32_MAX;
	volatile int32_t x656 = 199777054;
	volatile int32_t t158 = 202;

    t158 = (x653<=(x654%(x655^x656)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x657 = -1;
	uint32_t x658 = UINT32_MAX;
	static int32_t x659 = -12657555;
	int32_t x660 = -113568304;

    t159 = (x657<=(x658%(x659^x660)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x661 = INT8_MIN;
	int32_t x662 = 76;
	static int64_t x663 = -1LL;

    t160 = (x661<=(x662%(x663^x664)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x665 = INT64_MIN;
	volatile int16_t x666 = -1;
	int32_t x667 = INT32_MAX;
	int16_t x668 = INT16_MIN;
	int32_t t161 = 513210;

    t161 = (x665<=(x666%(x667^x668)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x669 = 5LL;
	int16_t x670 = INT16_MIN;
	volatile int32_t x671 = INT32_MIN;
	int64_t x672 = INT64_MIN;
	static int32_t t162 = -478863254;

    t162 = (x669<=(x670%(x671^x672)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x673 = 4LLU;
	volatile int16_t x675 = INT16_MIN;

    t163 = (x673<=(x674%(x675^x676)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x678 = 229561U;
	uint16_t x679 = UINT16_MAX;
	static volatile int32_t t164 = -714;

    t164 = (x677<=(x678%(x679^x680)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x681 = 27LL;
	uint8_t x682 = 7U;
	static volatile int16_t x683 = 2;
	uint32_t x684 = UINT32_MAX;

    t165 = (x681<=(x682%(x683^x684)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x685 = -1;
	uint16_t x687 = 353U;
	uint16_t x688 = 2525U;
	static volatile int32_t t166 = 134;

    t166 = (x685<=(x686%(x687^x688)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x691 = INT8_MIN;
	int64_t x692 = INT64_MAX;
	int32_t t167 = 895;

    t167 = (x689<=(x690%(x691^x692)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x693 = 153U;
	volatile int32_t x694 = -133584780;
	static uint64_t x696 = 2562847522366267420LLU;
	int32_t t168 = -3;

    t168 = (x693<=(x694%(x695^x696)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x697 = 19;
	volatile uint64_t x698 = UINT64_MAX;
	int16_t x699 = INT16_MIN;
	int32_t x700 = INT32_MAX;
	volatile int32_t t169 = 53;

    t169 = (x697<=(x698%(x699^x700)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x701 = 7U;
	uint32_t x702 = UINT32_MAX;
	int64_t x703 = INT64_MIN;
	int64_t x704 = -2980669520056123LL;
	volatile int32_t t170 = 38594758;

    t170 = (x701<=(x702%(x703^x704)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x705 = INT8_MIN;
	static uint16_t x706 = UINT16_MAX;
	uint32_t x707 = UINT32_MAX;
	static volatile uint8_t x708 = UINT8_MAX;
	volatile int32_t t171 = 1010328;

    t171 = (x705<=(x706%(x707^x708)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x709 = 1051U;
	int16_t x711 = INT16_MIN;
	volatile uint8_t x712 = 3U;

    t172 = (x709<=(x710%(x711^x712)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x713 = INT8_MAX;
	uint16_t x714 = 1891U;
	int32_t x715 = INT32_MIN;
	static uint16_t x716 = UINT16_MAX;
	volatile int32_t t173 = 914;

    t173 = (x713<=(x714%(x715^x716)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x717 = -606449928438961546LL;
	uint8_t x718 = 51U;
	int64_t x719 = 566LL;
	uint64_t x720 = 62094998LLU;

    t174 = (x717<=(x718%(x719^x720)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x721 = 1923662265615917673LLU;
	int16_t x723 = -12;
	int32_t t175 = 1;

    t175 = (x721<=(x722%(x723^x724)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x725 = 3U;
	uint16_t x726 = 22U;
	int8_t x727 = INT8_MAX;
	int16_t x728 = INT16_MIN;
	int32_t t176 = 13352;

    t176 = (x725<=(x726%(x727^x728)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x730 = -1;
	int64_t x731 = -1LL;
	static uint32_t x732 = 2990025U;
	int32_t t177 = -31854141;

    t177 = (x729<=(x730%(x731^x732)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x733 = -1LL;
	static uint8_t x734 = UINT8_MAX;
	static uint8_t x735 = UINT8_MAX;
	int32_t x736 = 1034507230;
	int32_t t178 = -303490488;

    t178 = (x733<=(x734%(x735^x736)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x737 = 367533;
	volatile int32_t x738 = INT32_MIN;
	int8_t x739 = 42;

    t179 = (x737<=(x738%(x739^x740)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int16_t x741 = INT16_MAX;
	int8_t x742 = -1;
	uint64_t x743 = UINT64_MAX;
	volatile int64_t x744 = INT64_MIN;

    t180 = (x741<=(x742%(x743^x744)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x745 = -395;
	uint8_t x746 = 5U;
	uint64_t x747 = 95109058787LLU;
	int32_t x748 = 581150;
	volatile int32_t t181 = 469;

    t181 = (x745<=(x746%(x747^x748)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x749 = 6965U;
	static volatile int8_t x750 = 13;
	int8_t x751 = -1;
	static uint32_t x752 = 1962172366U;
	volatile int32_t t182 = 112617073;

    t182 = (x749<=(x750%(x751^x752)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x753 = INT16_MAX;
	static int16_t x754 = INT16_MIN;
	static uint32_t x755 = 559474U;
	uint8_t x756 = 0U;
	int32_t t183 = 106584861;

    t183 = (x753<=(x754%(x755^x756)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x757 = INT8_MIN;
	volatile uint64_t x758 = 104719434530817321LLU;
	uint8_t x759 = 0U;
	int64_t x760 = -123581199LL;

    t184 = (x757<=(x758%(x759^x760)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x762 = 3U;
	volatile uint8_t x763 = UINT8_MAX;
	static volatile int8_t x764 = INT8_MIN;
	static int32_t t185 = 1732;

    t185 = (x761<=(x762%(x763^x764)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x765 = 51721;
	static uint16_t x766 = 5U;
	uint32_t x767 = UINT32_MAX;
	static uint32_t x768 = 707173U;
	int32_t t186 = 26;

    t186 = (x765<=(x766%(x767^x768)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x770 = UINT16_MAX;
	int32_t x771 = -465994;
	volatile int32_t t187 = -210859164;

    t187 = (x769<=(x770%(x771^x772)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x774 = 481U;
	int32_t x775 = INT32_MAX;
	volatile uint64_t x776 = 1LLU;
	volatile int32_t t188 = 1066351;

    t188 = (x773<=(x774%(x775^x776)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x777 = -1LL;
	static int8_t x778 = 1;
	int8_t x779 = INT8_MAX;
	static uint32_t x780 = 1834130U;
	volatile int32_t t189 = 1;

    t189 = (x777<=(x778%(x779^x780)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x781 = INT32_MAX;
	uint8_t x782 = 1U;
	int64_t x783 = INT64_MIN;
	int8_t x784 = INT8_MAX;
	volatile int32_t t190 = 1;

    t190 = (x781<=(x782%(x783^x784)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x785 = -163;
	int32_t x786 = 452755396;
	int32_t x788 = INT32_MIN;
	volatile int32_t t191 = -1;

    t191 = (x785<=(x786%(x787^x788)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x789 = -1;
	int32_t x790 = INT32_MAX;
	int64_t x791 = INT64_MIN;
	int8_t x792 = INT8_MIN;
	volatile int32_t t192 = 12;

    t192 = (x789<=(x790%(x791^x792)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x794 = -56;
	static uint8_t x795 = 1U;
	int64_t x796 = -1LL;
	static int32_t t193 = -75576884;

    t193 = (x793<=(x794%(x795^x796)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x797 = -1;
	int16_t x798 = -1;
	uint32_t x799 = 8U;
	static volatile int16_t x800 = INT16_MAX;
	static int32_t t194 = -921719826;

    t194 = (x797<=(x798%(x799^x800)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x801 = 133451854LLU;
	int64_t x803 = INT64_MIN;

    t195 = (x801<=(x802%(x803^x804)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x805 = -1LL;
	uint8_t x806 = UINT8_MAX;
	int64_t x807 = -6080742170LL;
	int64_t x808 = INT64_MAX;
	static volatile int32_t t196 = 192761;

    t196 = (x805<=(x806%(x807^x808)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x809 = 0;
	uint64_t x810 = UINT64_MAX;
	int8_t x811 = 0;
	uint16_t x812 = 2U;
	int32_t t197 = -984107214;

    t197 = (x809<=(x810%(x811^x812)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x813 = INT8_MAX;
	uint32_t x814 = 80454U;
	int8_t x815 = -16;
	int32_t x816 = INT32_MIN;
	int32_t t198 = 4;

    t198 = (x813<=(x814%(x815^x816)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x817 = -1;
	static volatile uint8_t x819 = 7U;
	uint16_t x820 = UINT16_MAX;
	volatile int32_t t199 = -680;

    t199 = (x817<=(x818%(x819^x820)));

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

