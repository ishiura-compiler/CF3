
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

uint16_t x1 = 7229U;
int16_t x4 = 218;
int32_t x13 = INT32_MIN;
static volatile uint32_t x16 = UINT32_MAX;
volatile uint32_t t3 = UINT32_MAX;
uint32_t x18 = 1U;
int8_t x20 = 15;
volatile uint8_t x21 = 122U;
int64_t x25 = INT64_MAX;
volatile uint16_t x27 = 434U;
uint64_t x28 = 547750686936714LLU;
static volatile int8_t x32 = INT8_MIN;
int16_t x33 = -393;
static uint8_t x34 = UINT8_MAX;
volatile int64_t t10 = 99830LL;
static uint64_t x59 = 230225650LLU;
volatile int8_t x73 = INT8_MIN;
uint32_t x77 = 240761U;
volatile int16_t x82 = INT16_MIN;
uint8_t x83 = UINT8_MAX;
uint16_t x85 = 53U;
int32_t x87 = INT32_MIN;
static volatile int16_t x100 = INT16_MAX;
int32_t x105 = -2;
volatile uint64_t x107 = 4506231554605785LLU;
int16_t x111 = 26;
int64_t x112 = -1LL;
int8_t x125 = INT8_MIN;
int16_t x131 = INT16_MIN;
int8_t x141 = INT8_MIN;
uint16_t x144 = UINT16_MAX;
int32_t x145 = 13246012;
static int8_t x148 = 1;
static volatile int32_t t36 = 502;
int16_t x153 = INT16_MIN;
static int8_t x155 = INT8_MIN;
static uint32_t x157 = 101583U;
int16_t x158 = -1;
uint16_t x161 = 1925U;
int32_t x174 = INT32_MAX;
int8_t x185 = -1;
int32_t x186 = INT32_MAX;
volatile int64_t x190 = INT64_MIN;
uint32_t x193 = 4416U;
int8_t x197 = INT8_MIN;
static int64_t x198 = -1LL;
int64_t x199 = INT64_MAX;
static volatile int64_t t48 = 257756820LL;
uint16_t x207 = UINT16_MAX;
int32_t x208 = INT32_MIN;
volatile int32_t t50 = -63955036;
uint8_t x213 = UINT8_MAX;
int32_t x224 = INT32_MAX;
int32_t x226 = INT32_MAX;
uint8_t x230 = 3U;
static uint16_t x232 = UINT16_MAX;
int64_t x247 = -5106884284LL;
uint8_t x252 = 0U;
int16_t x256 = -1;
static int64_t x262 = INT64_MIN;
volatile int32_t x267 = 21221;
volatile int64_t x268 = INT64_MIN;
int64_t x270 = -1LL;
uint32_t x275 = UINT32_MAX;
uint16_t x283 = UINT16_MAX;
volatile int8_t x287 = 0;
static int32_t x288 = INT32_MAX;
int32_t x289 = INT32_MIN;
int64_t x291 = -1LL;
int16_t x294 = 0;
static uint64_t x306 = 81541262324LLU;
uint32_t x308 = 430303280U;
int32_t x315 = INT32_MIN;
volatile uint64_t t76 = 237215LLU;
uint32_t t77 = 7U;
int8_t x322 = INT8_MIN;
int32_t x325 = INT32_MIN;
static int8_t x328 = INT8_MIN;
int32_t x333 = -1;
static int64_t x344 = INT64_MAX;
int64_t x345 = INT64_MIN;
static int16_t x347 = INT16_MAX;
uint8_t x359 = 63U;
static int32_t x363 = INT32_MAX;
uint64_t t88 = 2620402LLU;
int16_t x367 = -781;
int16_t x372 = INT16_MIN;
int64_t x374 = INT64_MIN;
int32_t x385 = 618802953;
volatile uint64_t t94 = 15984864294LLU;
int32_t x392 = -1;
static int16_t x396 = INT16_MIN;
int16_t x398 = -1;
int32_t x405 = -1;
int32_t x411 = -1;
int8_t x416 = INT8_MIN;
uint64_t t101 = 2647217863LLU;
int8_t x422 = INT8_MAX;
int8_t x424 = -1;
int8_t x425 = -1;
int32_t x428 = -1261;
int64_t x437 = INT64_MIN;
uint8_t x441 = 0U;
static int16_t x443 = -42;
static int8_t x444 = INT8_MIN;
volatile int16_t x453 = -1;
int32_t x456 = -1;
int64_t x458 = INT64_MAX;
static volatile int64_t t111 = -663086670630638LL;
int16_t x466 = -3;
int8_t x471 = INT8_MAX;
int64_t x473 = -21310900867356LL;
volatile int8_t x491 = -1;
uint32_t t119 = 14401609U;
volatile int32_t t120 = 103996;
uint32_t x497 = UINT32_MAX;
volatile int64_t t124 = 6185540158LL;
int8_t x513 = INT8_MIN;
uint8_t x514 = 53U;
uint8_t x516 = 57U;
int32_t x532 = INT32_MIN;
uint8_t x535 = 58U;
volatile int64_t t133 = 0LL;
int64_t x549 = INT64_MIN;
int64_t t134 = 4230229356923LL;
static int16_t x555 = -49;
uint32_t x557 = UINT32_MAX;
int32_t x559 = 357;
static int16_t x560 = INT16_MIN;
static int32_t x563 = -1;
static uint32_t x566 = UINT32_MAX;
static int64_t x568 = 705131696226558LL;
volatile uint64_t x575 = 2110251242045LLU;
static int64_t x577 = INT64_MIN;
int64_t t141 = -944LL;
int32_t x581 = -60779;
static int16_t x583 = INT16_MAX;
volatile int8_t x584 = INT8_MAX;
volatile int8_t x585 = INT8_MAX;
int64_t x590 = INT64_MAX;
uint16_t x594 = UINT16_MAX;
uint64_t t145 = UINT64_MAX;
int32_t x597 = -1;
int8_t x600 = INT8_MAX;
int32_t x604 = INT32_MIN;
int64_t t147 = 24816858072600LL;
volatile uint32_t t148 = 55883U;
uint64_t t150 = 3540397224674323LLU;
int32_t x617 = INT32_MIN;
volatile int64_t t151 = 2042LL;
int8_t x628 = INT8_MAX;
static volatile uint64_t t153 = 4LLU;
volatile int32_t t154 = -79;
int64_t t155 = -6735LL;
volatile int8_t x643 = 62;
static uint32_t t157 = 73U;
int16_t x651 = 63;
int16_t x663 = -4;
int64_t x664 = -1LL;
int16_t x680 = -1;
volatile int64_t t164 = -14687336161020048LL;
int8_t x688 = INT8_MIN;
volatile uint64_t t166 = 110842847LLU;
int64_t x694 = INT64_MAX;
int8_t x695 = INT8_MIN;
static volatile uint64_t x697 = 1LLU;
volatile int64_t x699 = INT64_MIN;
volatile int64_t x700 = INT64_MAX;
int32_t x701 = INT32_MIN;
int64_t x711 = 2467080525467LL;
int8_t x724 = -1;
int8_t x727 = INT8_MIN;
int8_t x733 = INT8_MIN;
volatile int32_t x738 = 5565;
static int16_t x741 = -1;
volatile int8_t x743 = 48;
static int16_t x745 = INT16_MIN;
int8_t x746 = -1;
uint16_t x747 = UINT16_MAX;
volatile int64_t t181 = -587317333LL;
uint16_t x753 = 12U;
int32_t x761 = -1;
uint64_t x764 = UINT64_MAX;
uint32_t t185 = 93774U;
int64_t x772 = INT64_MIN;
int64_t t186 = INT64_MIN;
int8_t x777 = -1;
int8_t x791 = 12;
uint8_t x797 = UINT8_MAX;
uint8_t x800 = 3U;
volatile uint64_t x803 = 361LLU;
volatile int16_t x804 = INT16_MIN;
volatile uint32_t t196 = 674827U;
int64_t x816 = -1LL;
volatile int64_t t197 = 71LL;
volatile int32_t x817 = -1376;
int8_t x823 = INT8_MIN;


void f0(void) {
    	int8_t x2 = INT8_MIN;
	int32_t x3 = INT32_MIN;
	int32_t t0 = -1953;

    t0 = ((x1%(x2^x3))&x4);

    if (t0 != 24) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	volatile int32_t x6 = -1;
	int32_t x7 = INT32_MAX;
	int8_t x8 = INT8_MIN;
	static int32_t t1 = 177633;

    t1 = ((x5%(x6^x7))&x8);

    if (t1 != 32640) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	static int32_t x10 = INT32_MAX;
	static volatile int8_t x11 = INT8_MIN;
	static uint16_t x12 = 136U;
	volatile int32_t t2 = 39300;

    t2 = ((x9%(x10^x11))&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x14 = -1;
	static volatile int32_t x15 = INT32_MIN;

    t3 = ((x13%(x14^x15))&x16);

    if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 5;
	uint32_t x19 = 6170084U;
	static volatile uint32_t t4 = 782860542U;

    t4 = ((x17%(x18^x19))&x20);

    if (t4 != 5U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MIN;
	int8_t x23 = INT8_MIN;
	volatile int32_t x24 = INT32_MAX;
	volatile int32_t t5 = -11167320;

    t5 = ((x21%(x22^x23))&x24);

    if (t5 != 122) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = INT32_MIN;
	uint64_t t6 = 14LLU;

    t6 = ((x25%(x26^x27))&x28);

    if (t6 != 298626LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 4U;
	int32_t x30 = -1;
	volatile int64_t x31 = INT64_MIN;
	static int64_t t7 = 22322050LL;

    t7 = ((x29%(x30^x31))&x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x35 = INT64_MIN;
	static volatile int8_t x36 = INT8_MAX;
	static volatile int64_t t8 = -181LL;

    t8 = ((x33%(x34^x35))&x36);

    if (t8 != 119LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = 480U;
	static int32_t x38 = INT32_MIN;
	int64_t x39 = INT64_MIN;
	int8_t x40 = INT8_MIN;
	static volatile int64_t t9 = 127293405LL;

    t9 = ((x37%(x38^x39))&x40);

    if (t9 != 384LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = 110088031LL;
	uint8_t x42 = 0U;
	int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MIN;

    t10 = ((x41%(x42^x43))&x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = -9;
	int8_t x46 = INT8_MAX;
	volatile uint64_t x47 = 7LLU;
	static uint16_t x48 = UINT16_MAX;
	static volatile uint64_t t11 = 284233089353691LLU;

    t11 = ((x45%(x46^x47))&x48);

    if (t11 != 7LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -51;
	int32_t x50 = -89559;
	int8_t x51 = INT8_MAX;
	volatile int32_t x52 = INT32_MAX;
	volatile int32_t t12 = -26201894;

    t12 = ((x49%(x50^x51))&x52);

    if (t12 != 2147483597) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 8693440019348461LLU;
	static uint64_t x54 = 385118LLU;
	static int8_t x55 = -1;
	static uint8_t x56 = UINT8_MAX;
	volatile uint64_t t13 = 21573078939LLU;

    t13 = ((x53%(x54^x55))&x56);

    if (t13 != 237LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1668979;
	uint16_t x58 = 491U;
	int64_t x60 = -1526533790739843418LL;
	static volatile uint64_t t14 = 48049453LLU;

    t14 = ((x57%(x58^x59))&x60);

    if (t14 != 16786980LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 89019319405753360LLU;
	uint16_t x62 = 10564U;
	int8_t x63 = -1;
	uint16_t x64 = 2322U;
	volatile uint64_t t15 = 3LLU;

    t15 = ((x61%(x62^x63))&x64);

    if (t15 != 16LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 28U;
	int32_t x66 = INT32_MIN;
	uint8_t x67 = 117U;
	static uint16_t x68 = 409U;
	int32_t t16 = 0;

    t16 = ((x65%(x66^x67))&x68);

    if (t16 != 24) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	volatile int64_t x70 = INT64_MAX;
	uint32_t x71 = UINT32_MAX;
	static int8_t x72 = -1;
	volatile int64_t t17 = 677031058067593LL;

    t17 = ((x69%(x70^x71))&x72);

    if (t17 != -4294967296LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x74 = -1LL;
	int8_t x75 = 5;
	int8_t x76 = -7;
	volatile int64_t t18 = 1LL;

    t18 = ((x73%(x74^x75))&x76);

    if (t18 != -8LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x78 = -1;
	uint32_t x79 = 101041U;
	volatile uint64_t x80 = 363203463445786LLU;
	static uint64_t t19 = 2945466749147997391LLU;

    t19 = ((x77%(x78^x79))&x80);

    if (t19 != 207896LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1;
	int64_t x84 = -1LL;
	int64_t t20 = -6100013774047LL;

    t20 = ((x81%(x82^x83))&x84);

    if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x86 = -1LL;
	int64_t x88 = -24804LL;
	static volatile int64_t t21 = 168700LL;

    t21 = ((x85%(x86^x87))&x88);

    if (t21 != 20LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = -1;
	volatile uint16_t x90 = UINT16_MAX;
	int16_t x91 = INT16_MAX;
	static int64_t x92 = INT64_MAX;
	int64_t t22 = INT64_MAX;

    t22 = ((x89%(x90^x91))&x92);

    if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -1;
	static volatile uint64_t x94 = 1607437028219LLU;
	volatile uint16_t x95 = UINT16_MAX;
	volatile int64_t x96 = INT64_MIN;
	volatile uint64_t t23 = 54125099LLU;

    t23 = ((x93%(x94^x95))&x96);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MIN;
	int8_t x99 = -1;
	static int64_t t24 = -1LL;

    t24 = ((x97%(x98^x99))&x100);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -2;
	int32_t x102 = INT32_MIN;
	int32_t x103 = -1;
	uint64_t x104 = 2423914285LLU;
	uint64_t t25 = 42068761LLU;

    t25 = ((x101%(x102^x103))&x104);

    if (t25 != 2423914284LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = INT32_MIN;
	uint32_t x108 = 24776445U;
	volatile uint64_t t26 = 11669045684LLU;

    t26 = ((x105%(x106^x107))&x108);

    if (t26 != 6818853LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = 29;
	uint32_t x110 = 11909U;
	int64_t t27 = -9LL;

    t27 = ((x109%(x110^x111))&x112);

    if (t27 != 29LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x113 = INT64_MIN;
	int16_t x114 = 30;
	int32_t x115 = INT32_MIN;
	int32_t x116 = -1;
	volatile int64_t t28 = -35LL;

    t28 = ((x113%(x114^x115))&x116);

    if (t28 != -1800LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	int64_t x118 = INT64_MIN;
	int64_t x119 = -117209344LL;
	int64_t x120 = INT64_MIN;
	volatile int64_t t29 = INT64_MIN;

    t29 = ((x117%(x118^x119))&x120);

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -2;
	int16_t x122 = 5;
	int16_t x123 = INT16_MIN;
	int16_t x124 = INT16_MAX;
	int32_t t30 = 1064;

    t30 = ((x121%(x122^x123))&x124);

    if (t30 != 32766) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x126 = -1;
	uint16_t x127 = 9U;
	uint32_t x128 = UINT32_MAX;
	uint32_t t31 = 14U;

    t31 = ((x125%(x126^x127))&x128);

    if (t31 != 4294967288U) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	uint16_t x130 = UINT16_MAX;
	volatile int16_t x132 = -4677;
	volatile int32_t t32 = -9903;

    t32 = ((x129%(x130^x131))&x132);

    if (t32 != -4678) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x133 = -1;
	int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MAX;
	int16_t x136 = INT16_MAX;
	int32_t t33 = -2551662;

    t33 = ((x133%(x134^x135))&x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x137 = 1829268717U;
	static int16_t x138 = -1;
	int64_t x139 = -4599335773190314813LL;
	int8_t x140 = -1;
	volatile int64_t t34 = 36268194880808217LL;

    t34 = ((x137%(x138^x139))&x140);

    if (t34 != 1829268717LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x142 = INT8_MIN;
	static int32_t x143 = -1;
	volatile int32_t t35 = 128;

    t35 = ((x141%(x142^x143))&x144);

    if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x146 = 68U;
	volatile int16_t x147 = -1;

    t36 = ((x145%(x146^x147))&x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = 0;
	volatile uint8_t x150 = 50U;
	int32_t x151 = INT32_MIN;
	static int8_t x152 = 27;
	int32_t t37 = -592;

    t37 = ((x149%(x150^x151))&x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x154 = -1;
	volatile int8_t x156 = -1;
	volatile int32_t t38 = 102;

    t38 = ((x153%(x154^x155))&x156);

    if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x159 = INT64_MIN;
	static int64_t x160 = INT64_MIN;
	volatile int64_t t39 = 175583550923068LL;

    t39 = ((x157%(x158^x159))&x160);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x162 = INT16_MAX;
	int16_t x163 = INT16_MIN;
	int32_t x164 = 205;
	int32_t t40 = 37201942;

    t40 = ((x161%(x162^x163))&x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = -3188;
	uint8_t x166 = 2U;
	int8_t x167 = -1;
	static uint8_t x168 = 2U;
	volatile int32_t t41 = -81952641;

    t41 = ((x165%(x166^x167))&x168);

    if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x169 = 1848980316LL;
	uint64_t x170 = 2146691505LLU;
	int32_t x171 = 0;
	static uint8_t x172 = 12U;
	volatile uint64_t t42 = 1662320964512LLU;

    t42 = ((x169%(x170^x171))&x172);

    if (t42 != 12LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MIN;
	uint8_t x175 = UINT8_MAX;
	int16_t x176 = 19;
	volatile int64_t t43 = -31434LL;

    t43 = ((x173%(x174^x175))&x176);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x177 = 2U;
	static volatile uint32_t x178 = UINT32_MAX;
	int8_t x179 = INT8_MIN;
	int16_t x180 = INT16_MIN;
	volatile uint32_t t44 = 24756072U;

    t44 = ((x177%(x178^x179))&x180);

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x187 = UINT64_MAX;
	volatile int64_t x188 = INT64_MIN;
	uint64_t t45 = 641677991260332LLU;

    t45 = ((x185%(x186^x187))&x188);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x189 = -1;
	uint64_t x191 = 844026293LLU;
	int32_t x192 = INT32_MAX;
	volatile uint64_t t46 = 26LLU;

    t46 = ((x189%(x190^x191))&x192);

    if (t46 != 1303457354LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x194 = INT64_MAX;
	static int8_t x195 = -1;
	uint32_t x196 = 1U;
	int64_t t47 = 10261LL;

    t47 = ((x193%(x194^x195))&x196);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x200 = INT8_MAX;

    t48 = ((x197%(x198^x199))&x200);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x205 = 0;
	volatile uint64_t x206 = UINT64_MAX;
	static uint64_t t49 = 150LLU;

    t49 = ((x205%(x206^x207))&x208);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x209 = -1;
	volatile int8_t x210 = -2;
	int16_t x211 = 235;
	static volatile int8_t x212 = INT8_MIN;

    t50 = ((x209%(x210^x211))&x212);

    if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x214 = INT8_MIN;
	uint32_t x215 = UINT32_MAX;
	int8_t x216 = INT8_MAX;
	volatile uint32_t t51 = 424439U;

    t51 = ((x213%(x214^x215))&x216);

    if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x217 = 236944;
	static int16_t x218 = INT16_MAX;
	static volatile uint32_t x219 = UINT32_MAX;
	int64_t x220 = INT64_MIN;
	int64_t t52 = 58345943372LL;

    t52 = ((x217%(x218^x219))&x220);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x221 = INT64_MIN;
	int8_t x222 = INT8_MIN;
	uint16_t x223 = UINT16_MAX;
	static volatile int64_t t53 = 1233860879373LL;

    t53 = ((x221%(x222^x223))&x224);

    if (t53 != 2147477124LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x225 = UINT16_MAX;
	int64_t x227 = 1LL;
	static int16_t x228 = -1;
	volatile int64_t t54 = -2LL;

    t54 = ((x225%(x226^x227))&x228);

    if (t54 != 65535LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x229 = -1;
	uint16_t x231 = 7U;
	static volatile int32_t t55 = 0;

    t55 = ((x229%(x230^x231))&x232);

    if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x233 = 11483U;
	int64_t x234 = -68332050694232LL;
	volatile int64_t x235 = INT64_MAX;
	int32_t x236 = 26628;
	int64_t t56 = 263542975164LL;

    t56 = ((x233%(x234^x235))&x236);

    if (t56 != 10240LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x237 = UINT16_MAX;
	int8_t x238 = -1;
	static int64_t x239 = 92111492LL;
	int16_t x240 = -1;
	static int64_t t57 = 25359618943LL;

    t57 = ((x237%(x238^x239))&x240);

    if (t57 != 65535LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x241 = INT32_MAX;
	int16_t x242 = INT16_MIN;
	int32_t x243 = 2;
	static int8_t x244 = 1;
	int32_t t58 = 28440788;

    t58 = ((x241%(x242^x243))&x244);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x245 = INT16_MIN;
	static uint64_t x246 = UINT64_MAX;
	int8_t x248 = -62;
	uint64_t t59 = 3850524244954898LLU;

    t59 = ((x245%(x246^x247))&x248);

    if (t59 != 2487264898LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x249 = -1LL;
	uint64_t x250 = UINT64_MAX;
	uint32_t x251 = UINT32_MAX;
	volatile uint64_t t60 = 8342083LLU;

    t60 = ((x249%(x250^x251))&x252);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x253 = -879;
	int8_t x254 = -3;
	volatile int64_t x255 = INT64_MAX;
	int64_t t61 = -598LL;

    t61 = ((x253%(x254^x255))&x256);

    if (t61 != -879LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x257 = INT8_MIN;
	uint8_t x258 = UINT8_MAX;
	int32_t x259 = INT32_MIN;
	int32_t x260 = -924;
	int32_t t62 = 127;

    t62 = ((x257%(x258^x259))&x260);

    if (t62 != -1024) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x261 = UINT16_MAX;
	int32_t x263 = INT32_MAX;
	volatile uint16_t x264 = UINT16_MAX;
	int64_t t63 = 198518429269792165LL;

    t63 = ((x261%(x262^x263))&x264);

    if (t63 != 65535LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x265 = INT64_MIN;
	uint32_t x266 = 72218U;
	volatile int64_t t64 = INT64_MIN;

    t64 = ((x265%(x266^x267))&x268);

    if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x269 = -47;
	int8_t x271 = INT8_MIN;
	volatile uint8_t x272 = 3U;
	volatile int64_t t65 = -239LL;

    t65 = ((x269%(x270^x271))&x272);

    if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = INT16_MAX;
	int8_t x274 = INT8_MIN;
	int64_t x276 = INT64_MAX;
	static volatile int64_t t66 = 21061LL;

    t66 = ((x273%(x274^x275))&x276);

    if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x277 = INT16_MAX;
	static uint32_t x278 = UINT32_MAX;
	uint64_t x279 = 474578183653295285LLU;
	volatile int8_t x280 = INT8_MIN;
	uint64_t t67 = 154671838LLU;

    t67 = ((x277%(x278^x279))&x280);

    if (t67 != 32640LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x281 = INT16_MIN;
	uint16_t x282 = 365U;
	static uint64_t x284 = 218196291119982LLU;
	static uint64_t t68 = 5629861177LLU;

    t68 = ((x281%(x282^x283))&x284);

    if (t68 != 218196291092480LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x285 = 7U;
	int8_t x286 = INT8_MIN;
	static volatile int32_t t69 = -8;

    t69 = ((x285%(x286^x287))&x288);

    if (t69 != 7) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x290 = UINT8_MAX;
	static int16_t x292 = INT16_MAX;
	int64_t t70 = 98208702744LL;

    t70 = ((x289%(x290^x291))&x292);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x293 = -1;
	uint8_t x295 = 3U;
	uint64_t x296 = 416143862LLU;
	static uint64_t t71 = 475154445110044LLU;

    t71 = ((x293%(x294^x295))&x296);

    if (t71 != 416143862LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x297 = UINT8_MAX;
	uint8_t x298 = 6U;
	int16_t x299 = INT16_MAX;
	int32_t x300 = 11364819;
	volatile int32_t t72 = -2802;

    t72 = ((x297%(x298^x299))&x300);

    if (t72 != 211) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x301 = INT32_MIN;
	int8_t x302 = -1;
	uint64_t x303 = 1LLU;
	int8_t x304 = INT8_MAX;
	uint64_t t73 = 2522969177388743020LLU;

    t73 = ((x301%(x302^x303))&x304);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x305 = UINT64_MAX;
	static uint32_t x307 = UINT32_MAX;
	static uint64_t t74 = 13118470695981LLU;

    t74 = ((x305%(x306^x307))&x308);

    if (t74 != 295788544LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x309 = UINT8_MAX;
	int16_t x310 = INT16_MIN;
	int8_t x311 = -3;
	static int64_t x312 = INT64_MIN;
	int64_t t75 = -21708LL;

    t75 = ((x309%(x310^x311))&x312);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x313 = INT8_MIN;
	int16_t x314 = INT16_MAX;
	uint64_t x316 = 5398LLU;

    t76 = ((x313%(x314^x315))&x316);

    if (t76 != 5376LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x317 = UINT8_MAX;
	uint8_t x318 = 19U;
	uint8_t x319 = 17U;
	static uint32_t x320 = 1459011U;

    t77 = ((x317%(x318^x319))&x320);

    if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x321 = -1LL;
	uint64_t x323 = UINT64_MAX;
	volatile int64_t x324 = 1768899527716965LL;
	static uint64_t t78 = 9511451240421289LLU;

    t78 = ((x321%(x322^x323))&x324);

    if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x326 = -1;
	volatile int16_t x327 = 1343;
	volatile int32_t t79 = 7285;

    t79 = ((x325%(x326^x327))&x328);

    if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x329 = 20208U;
	int16_t x330 = INT16_MAX;
	int32_t x331 = -457338;
	int32_t x332 = INT32_MIN;
	volatile int32_t t80 = 383;

    t80 = ((x329%(x330^x331))&x332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x334 = -3225;
	volatile uint64_t x335 = 16865746096027298LLU;
	int64_t x336 = -50LL;
	uint64_t t81 = 89119424201LLU;

    t81 = ((x333%(x334^x335))&x336);

    if (t81 != 16865746096028170LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x337 = UINT8_MAX;
	int32_t x338 = INT32_MIN;
	int64_t x339 = INT64_MIN;
	int16_t x340 = INT16_MAX;
	volatile int64_t t82 = -6266090724LL;

    t82 = ((x337%(x338^x339))&x340);

    if (t82 != 255LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x341 = 48944;
	int8_t x342 = INT8_MAX;
	static int16_t x343 = -1;
	int64_t t83 = 4410477074LL;

    t83 = ((x341%(x342^x343))&x344);

    if (t83 != 48LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x346 = 3639U;
	int32_t x348 = -1;
	volatile int64_t t84 = 436131664LL;

    t84 = ((x345%(x346^x347))&x348);

    if (t84 != -8LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x349 = INT16_MIN;
	int16_t x350 = INT16_MAX;
	int32_t x351 = INT32_MAX;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t85 = -17935;

    t85 = ((x349%(x350^x351))&x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x353 = UINT32_MAX;
	uint32_t x354 = 94047U;
	volatile uint64_t x355 = UINT64_MAX;
	int32_t x356 = INT32_MIN;
	static uint64_t t86 = 229522084331640LLU;

    t86 = ((x353%(x354^x355))&x356);

    if (t86 != 2147483648LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x357 = 1785U;
	int64_t x358 = -1LL;
	int32_t x360 = -6032995;
	volatile int64_t t87 = 11655489430961LL;

    t87 = ((x357%(x358^x359))&x360);

    if (t87 != 25LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x361 = -1;
	uint64_t x362 = UINT64_MAX;
	int32_t x364 = -3101;

    t88 = ((x361%(x362^x363))&x364);

    if (t88 != 2147480547LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x365 = INT8_MAX;
	volatile uint32_t x366 = 32161U;
	volatile uint8_t x368 = 3U;
	volatile uint32_t t89 = 1819U;

    t89 = ((x365%(x366^x367))&x368);

    if (t89 != 3U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x369 = INT32_MIN;
	int16_t x370 = INT16_MIN;
	int16_t x371 = -1;
	volatile int32_t t90 = -11;

    t90 = ((x369%(x370^x371))&x372);

    if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x373 = INT8_MIN;
	static int32_t x375 = 17970;
	static uint8_t x376 = 1U;
	volatile int64_t t91 = 3827489157957567LL;

    t91 = ((x373%(x374^x375))&x376);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x377 = 1U;
	int64_t x378 = 1LL;
	int16_t x379 = -13;
	uint32_t x380 = 1768U;
	static int64_t t92 = 26436LL;

    t92 = ((x377%(x378^x379))&x380);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x381 = 193;
	static uint32_t x382 = 20U;
	uint64_t x383 = 211999059166681LLU;
	uint32_t x384 = 743131063U;
	static volatile uint64_t t93 = 398510LLU;

    t93 = ((x381%(x382^x383))&x384);

    if (t93 != 129LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x386 = -44;
	int16_t x387 = INT16_MIN;
	uint64_t x388 = UINT64_MAX;

    t94 = ((x385%(x386^x387))&x388);

    if (t94 != 24837LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x389 = UINT16_MAX;
	int16_t x390 = 1;
	int16_t x391 = INT16_MIN;
	volatile int32_t t95 = -514731585;

    t95 = ((x389%(x390^x391))&x392);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x393 = -46;
	uint32_t x394 = 3U;
	int8_t x395 = INT8_MIN;
	uint32_t t96 = 641U;

    t96 = ((x393%(x394^x395))&x396);

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x397 = UINT64_MAX;
	int64_t x399 = -15827849531681LL;
	static int16_t x400 = INT16_MIN;
	static uint64_t t97 = 13705740LLU;

    t97 = ((x397%(x398^x399))&x400);

    if (t97 != 2730668228608LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int8_t x401 = 6;
	static int16_t x402 = 2973;
	uint32_t x403 = UINT32_MAX;
	static uint32_t x404 = UINT32_MAX;
	uint32_t t98 = 51033U;

    t98 = ((x401%(x402^x403))&x404);

    if (t98 != 6U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x406 = 318;
	int16_t x407 = INT16_MAX;
	int32_t x408 = INT32_MAX;
	int32_t t99 = INT32_MAX;

    t99 = ((x405%(x406^x407))&x408);

    if (t99 != INT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x409 = -2LL;
	uint16_t x410 = 419U;
	int32_t x412 = -866673716;
	volatile int64_t t100 = -346234988597LL;

    t100 = ((x409%(x410^x411))&x412);

    if (t100 != -866673716LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x413 = INT16_MIN;
	static int16_t x414 = 3150;
	uint64_t x415 = 70663072LLU;

    t101 = ((x413%(x414^x415))&x416);

    if (t101 != 54582912LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x417 = -1LL;
	static int16_t x418 = INT16_MIN;
	int32_t x419 = -1;
	int64_t x420 = INT64_MIN;
	volatile int64_t t102 = INT64_MIN;

    t102 = ((x417%(x418^x419))&x420);

    if (t102 != INT64_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x421 = -1;
	static uint8_t x423 = 38U;
	volatile int32_t t103 = -43;

    t103 = ((x421%(x422^x423))&x424);

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x426 = 17963966039596LLU;
	volatile int64_t x427 = INT64_MAX;
	uint64_t t104 = 874269827071LLU;

    t104 = ((x425%(x426^x427))&x428);

    if (t104 != 35927932078097LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x429 = INT8_MIN;
	uint64_t x430 = 735LLU;
	static uint64_t x431 = 116486134301883LLU;
	volatile uint64_t x432 = 517081756090890LLU;
	static volatile uint64_t t105 = 287708914354369115LLU;

    t105 = ((x429%(x430^x431))&x432);

    if (t105 != 70678290383360LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x433 = -971470028LL;
	volatile int64_t x434 = -1LL;
	int32_t x435 = INT32_MIN;
	int32_t x436 = 48;
	volatile int64_t t106 = 24LL;

    t106 = ((x433%(x434^x435))&x436);

    if (t106 != 48LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x438 = -1;
	int64_t x439 = 0LL;
	int64_t x440 = INT64_MIN;
	int64_t t107 = -1061053866LL;

    t107 = ((x437%(x438^x439))&x440);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x442 = INT64_MIN;
	int64_t t108 = 1LL;

    t108 = ((x441%(x442^x443))&x444);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x445 = 90U;
	static int32_t x446 = -1;
	volatile int8_t x447 = -25;
	uint32_t x448 = UINT32_MAX;
	uint32_t t109 = 518650U;

    t109 = ((x445%(x446^x447))&x448);

    if (t109 != 18U) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x454 = 46;
	uint64_t x455 = 53LLU;
	volatile uint64_t t110 = 346962537LLU;

    t110 = ((x453%(x454^x455))&x456);

    if (t110 != 24LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x457 = -12608407;
	int8_t x459 = INT8_MAX;
	int32_t x460 = INT32_MIN;

    t111 = ((x457%(x458^x459))&x460);

    if (t111 != -2147483648LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x461 = 0;
	uint8_t x462 = 12U;
	uint16_t x463 = UINT16_MAX;
	uint32_t x464 = 116U;
	uint32_t t112 = 5656394U;

    t112 = ((x461%(x462^x463))&x464);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x465 = -1LL;
	int64_t x467 = -1LL;
	static int16_t x468 = -1;
	volatile int64_t t113 = 29375LL;

    t113 = ((x465%(x466^x467))&x468);

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x469 = -2;
	int32_t x470 = INT32_MIN;
	int32_t x472 = -1;
	static volatile int32_t t114 = 0;

    t114 = ((x469%(x470^x471))&x472);

    if (t114 != -2) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x474 = 13U;
	static volatile int32_t x475 = -1;
	volatile int16_t x476 = INT16_MAX;
	volatile int64_t t115 = 480476096189LL;

    t115 = ((x473%(x474^x475))&x476);

    if (t115 != 32766LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x477 = 12U;
	uint32_t x478 = 206395U;
	int64_t x479 = INT64_MIN;
	uint32_t x480 = UINT32_MAX;
	int64_t t116 = -17LL;

    t116 = ((x477%(x478^x479))&x480);

    if (t116 != 12LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x481 = 15U;
	uint32_t x482 = 32380397U;
	int64_t x483 = -1LL;
	uint32_t x484 = UINT32_MAX;
	volatile int64_t t117 = -17566339065033308LL;

    t117 = ((x481%(x482^x483))&x484);

    if (t117 != 15LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x485 = 16;
	int8_t x486 = INT8_MIN;
	int32_t x487 = INT32_MIN;
	uint32_t x488 = 2U;
	volatile uint32_t t118 = 14986U;

    t118 = ((x485%(x486^x487))&x488);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x489 = INT8_MIN;
	volatile uint32_t x490 = 253U;
	int8_t x492 = INT8_MAX;

    t119 = ((x489%(x490^x491))&x492);

    if (t119 != 126U) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x493 = 17U;
	int16_t x494 = INT16_MIN;
	int16_t x495 = 2012;
	int16_t x496 = INT16_MIN;

    t120 = ((x493%(x494^x495))&x496);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x498 = INT64_MIN;
	static uint64_t x499 = 355LLU;
	int64_t x500 = INT64_MIN;
	uint64_t t121 = 3683699711753807318LLU;

    t121 = ((x497%(x498^x499))&x500);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x501 = 4U;
	volatile uint16_t x502 = 11U;
	static int8_t x503 = 1;
	int32_t x504 = 2;
	int32_t t122 = -7571;

    t122 = ((x501%(x502^x503))&x504);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x505 = -14910;
	int8_t x506 = INT8_MAX;
	static int16_t x507 = INT16_MAX;
	int32_t x508 = -353947717;
	int32_t t123 = 3;

    t123 = ((x505%(x506^x507))&x508);

    if (t123 != -353958526) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x509 = INT8_MIN;
	uint16_t x510 = 9011U;
	int64_t x511 = INT64_MAX;
	int32_t x512 = INT32_MIN;

    t124 = ((x509%(x510^x511))&x512);

    if (t124 != -2147483648LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x515 = INT16_MIN;
	volatile int32_t t125 = 2;

    t125 = ((x513%(x514^x515))&x516);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x517 = UINT32_MAX;
	int8_t x518 = -1;
	int16_t x519 = INT16_MIN;
	uint64_t x520 = 488967940925163LLU;
	uint64_t t126 = 18468LLU;

    t126 = ((x517%(x518^x519))&x520);

    if (t126 != 3LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x521 = UINT32_MAX;
	uint32_t x522 = UINT32_MAX;
	int64_t x523 = -206225664432LL;
	int64_t x524 = INT64_MIN;
	volatile int64_t t127 = -425439854351434LL;

    t127 = ((x521%(x522^x523))&x524);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x525 = -1;
	uint64_t x526 = UINT64_MAX;
	int32_t x527 = 4131;
	uint16_t x528 = UINT16_MAX;
	static uint64_t t128 = 446552435501141LLU;

    t128 = ((x525%(x526^x527))&x528);

    if (t128 != 4131LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x529 = INT64_MIN;
	uint32_t x530 = 595329U;
	static uint32_t x531 = 4U;
	int64_t t129 = 2085938819779640LL;

    t129 = ((x529%(x530^x531))&x532);

    if (t129 != -2147483648LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x533 = 3413352LLU;
	int8_t x534 = INT8_MIN;
	uint64_t x536 = UINT64_MAX;
	static uint64_t t130 = 1LLU;

    t130 = ((x533%(x534^x535))&x536);

    if (t130 != 3413352LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x537 = INT32_MIN;
	int16_t x538 = -1;
	int32_t x539 = INT32_MIN;
	int32_t x540 = 714296;
	int32_t t131 = 1;

    t131 = ((x537%(x538^x539))&x540);

    if (t131 != 714296) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x541 = -1;
	int16_t x542 = INT16_MAX;
	int8_t x543 = INT8_MIN;
	uint32_t x544 = 53U;
	uint32_t t132 = 230942U;

    t132 = ((x541%(x542^x543))&x544);

    if (t132 != 53U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x545 = 226452410921688LL;
	int64_t x546 = 73186826595547LL;
	uint16_t x547 = 4U;
	uint32_t x548 = 57059U;

    t133 = ((x545%(x546^x547))&x548);

    if (t133 != 19491LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x550 = INT32_MAX;
	int8_t x551 = INT8_MAX;
	volatile int8_t x552 = 0;

    t134 = ((x549%(x550^x551))&x552);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x553 = INT16_MAX;
	int32_t x554 = -1;
	uint16_t x556 = 0U;
	static int32_t t135 = -209258263;

    t135 = ((x553%(x554^x555))&x556);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x558 = -1;
	volatile uint32_t t136 = 58065006U;

    t136 = ((x557%(x558^x559))&x560);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x561 = INT8_MIN;
	int16_t x562 = -3;
	volatile uint32_t x564 = 913932811U;
	volatile uint32_t t137 = 64320673U;

    t137 = ((x561%(x562^x563))&x564);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x565 = -1;
	volatile int8_t x567 = INT8_MIN;
	int64_t t138 = -390804558989564LL;

    t138 = ((x565%(x566^x567))&x568);

    if (t138 != 14LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x569 = 15629;
	volatile uint16_t x570 = UINT16_MAX;
	static uint32_t x571 = UINT32_MAX;
	static int64_t x572 = INT64_MIN;
	volatile int64_t t139 = -6121301989LL;

    t139 = ((x569%(x570^x571))&x572);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x573 = 3U;
	uint32_t x574 = UINT32_MAX;
	uint32_t x576 = 97150U;
	static uint64_t t140 = 65956227002329382LLU;

    t140 = ((x573%(x574^x575))&x576);

    if (t140 != 2LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x578 = UINT32_MAX;
	static volatile uint16_t x579 = 1857U;
	static volatile int8_t x580 = INT8_MIN;

    t141 = ((x577%(x578^x579))&x580);

    if (t141 != -1726208LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x582 = 37944266LL;
	int64_t t142 = 16382LL;

    t142 = ((x581%(x582^x583))&x584);

    if (t142 != 21LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x586 = 3083U;
	uint16_t x587 = UINT16_MAX;
	int32_t x588 = INT32_MIN;
	volatile int32_t t143 = 100351;

    t143 = ((x585%(x586^x587))&x588);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x589 = INT8_MIN;
	static int64_t x591 = -1LL;
	volatile int8_t x592 = -1;
	int64_t t144 = 5321LL;

    t144 = ((x589%(x590^x591))&x592);

    if (t144 != -128LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x593 = -1LL;
	volatile int64_t x595 = INT64_MAX;
	volatile uint64_t x596 = UINT64_MAX;

    t145 = ((x593%(x594^x595))&x596);

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x598 = UINT8_MAX;
	int64_t x599 = -1LL;
	volatile int64_t t146 = 14868843688406755LL;

    t146 = ((x597%(x598^x599))&x600);

    if (t146 != 127LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x601 = -1LL;
	int64_t x602 = INT64_MAX;
	static int64_t x603 = 2099319619420630202LL;

    t147 = ((x601%(x602^x603))&x604);

    if (t147 != -2147483648LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x605 = 12U;
	uint32_t x606 = UINT32_MAX;
	int8_t x607 = INT8_MIN;
	volatile uint8_t x608 = 108U;

    t148 = ((x605%(x606^x607))&x608);

    if (t148 != 12U) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x609 = -1292;
	int16_t x610 = INT16_MIN;
	volatile int8_t x611 = -1;
	int16_t x612 = INT16_MIN;
	int32_t t149 = -415;

    t149 = ((x609%(x610^x611))&x612);

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x613 = INT8_MIN;
	uint64_t x614 = UINT64_MAX;
	int16_t x615 = 79;
	uint16_t x616 = UINT16_MAX;

    t150 = ((x613%(x614^x615))&x616);

    if (t150 != 65408LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x618 = -1LL;
	static uint16_t x619 = 1596U;
	uint8_t x620 = 45U;

    t151 = ((x617%(x618^x619))&x620);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x625 = INT32_MIN;
	volatile uint32_t x626 = 2041U;
	int64_t x627 = INT64_MAX;
	int64_t t152 = -1933691917041134074LL;

    t152 = ((x625%(x626^x627))&x628);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x629 = UINT32_MAX;
	uint64_t x630 = UINT64_MAX;
	int16_t x631 = INT16_MIN;
	int8_t x632 = INT8_MIN;

    t153 = ((x629%(x630^x631))&x632);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int8_t x633 = -1;
	int32_t x634 = -3041044;
	int16_t x635 = -1;
	static int8_t x636 = INT8_MIN;

    t154 = ((x633%(x634^x635))&x636);

    if (t154 != -128) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x637 = UINT16_MAX;
	static int64_t x638 = INT64_MAX;
	uint32_t x639 = UINT32_MAX;
	int16_t x640 = -1;

    t155 = ((x637%(x638^x639))&x640);

    if (t155 != 65535LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x641 = INT8_MAX;
	int32_t x642 = INT32_MIN;
	volatile int16_t x644 = -1;
	int32_t t156 = -79;

    t156 = ((x641%(x642^x643))&x644);

    if (t156 != 127) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x645 = -1;
	int32_t x646 = 12367;
	volatile int8_t x647 = -2;
	static uint32_t x648 = 26U;

    t157 = ((x645%(x646^x647))&x648);

    if (t157 != 26U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x649 = 97;
	int64_t x650 = -252LL;
	volatile uint16_t x652 = 4685U;
	volatile int64_t t158 = 6LL;

    t158 = ((x649%(x650^x651))&x652);

    if (t158 != 65LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x653 = -1;
	uint32_t x654 = 765073U;
	volatile uint16_t x655 = UINT16_MAX;
	uint32_t x656 = UINT32_MAX;
	uint32_t t159 = 32366386U;

    t159 = ((x653%(x654^x655))&x656);

    if (t159 != 285651U) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x657 = INT32_MAX;
	static volatile int32_t x658 = INT32_MAX;
	volatile uint64_t x659 = UINT64_MAX;
	int32_t x660 = -1;
	uint64_t t160 = 4015961299475255LLU;

    t160 = ((x657%(x658^x659))&x660);

    if (t160 != 2147483647LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x661 = INT32_MIN;
	uint16_t x662 = 1727U;
	volatile int64_t t161 = 18145049861654804LL;

    t161 = ((x661%(x662^x663))&x664);

    if (t161 != -98LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x665 = -3117LL;
	int32_t x666 = -1;
	volatile int8_t x667 = INT8_MIN;
	static uint32_t x668 = 151433345U;
	int64_t t162 = 382LL;

    t162 = ((x665%(x666^x667))&x668);

    if (t162 != 151433345LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x673 = -383808242;
	int64_t x674 = INT64_MIN;
	int32_t x675 = -1;
	volatile uint32_t x676 = UINT32_MAX;
	volatile int64_t t163 = 65915055LL;

    t163 = ((x673%(x674^x675))&x676);

    if (t163 != 3911159054LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint32_t x677 = 34U;
	int64_t x678 = INT64_MIN;
	volatile int16_t x679 = INT16_MIN;

    t164 = ((x677%(x678^x679))&x680);

    if (t164 != 34LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x681 = INT64_MIN;
	static int64_t x682 = 103LL;
	volatile uint8_t x683 = UINT8_MAX;
	static int16_t x684 = -1;
	volatile int64_t t165 = 565572605247LL;

    t165 = ((x681%(x682^x683))&x684);

    if (t165 != -56LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x685 = UINT32_MAX;
	volatile uint64_t x686 = 16LLU;
	int32_t x687 = 179;

    t166 = ((x685%(x686^x687))&x688);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x689 = 10;
	int16_t x690 = -388;
	volatile uint16_t x691 = UINT16_MAX;
	int64_t x692 = 5LL;
	int64_t t167 = -244572478LL;

    t167 = ((x689%(x690^x691))&x692);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x693 = INT32_MIN;
	volatile int32_t x696 = -1;
	int64_t t168 = 7764149503LL;

    t168 = ((x693%(x694^x695))&x696);

    if (t168 != -2147483648LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x698 = -1LL;
	static volatile uint64_t t169 = 195744268255281030LLU;

    t169 = ((x697%(x698^x699))&x700);

    if (t169 != 1LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x702 = -1;
	uint64_t x703 = 152195LLU;
	uint8_t x704 = 4U;
	volatile uint64_t t170 = 461042LLU;

    t170 = ((x701%(x702^x703))&x704);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x705 = 4076379168854204321LL;
	int32_t x706 = -907;
	int32_t x707 = 316233663;
	int32_t x708 = -1;
	static volatile int64_t t171 = 8439668651066LL;

    t171 = ((x705%(x706^x707))&x708);

    if (t171 != 29709743LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x709 = -1132182809814901800LL;
	volatile int16_t x710 = -1;
	int8_t x712 = -1;
	static int64_t t172 = 122577LL;

    t172 = ((x709%(x710^x711))&x712);

    if (t172 != -83389229112LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x713 = INT64_MIN;
	static int32_t x714 = -1;
	static int16_t x715 = INT16_MAX;
	int32_t x716 = INT32_MIN;
	static int64_t t173 = -900633974LL;

    t173 = ((x713%(x714^x715))&x716);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x717 = -1LL;
	int32_t x718 = INT32_MAX;
	uint64_t x719 = 668964LLU;
	int8_t x720 = 2;
	uint64_t t174 = 20935264LLU;

    t174 = ((x717%(x718^x719))&x720);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x721 = INT8_MIN;
	int8_t x722 = INT8_MAX;
	uint32_t x723 = 4668U;
	static volatile uint32_t t175 = 992696270U;

    t175 = ((x721%(x722^x723))&x724);

    if (t175 != 2593U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x725 = INT32_MIN;
	int32_t x726 = INT32_MIN;
	int8_t x728 = 1;
	int32_t t176 = 19;

    t176 = ((x725%(x726^x727))&x728);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x729 = UINT16_MAX;
	volatile int16_t x730 = 0;
	int8_t x731 = INT8_MIN;
	int32_t x732 = 1312946;
	static int32_t t177 = 36785555;

    t177 = ((x729%(x730^x731))&x732);

    if (t177 != 50) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x734 = INT32_MAX;
	volatile uint16_t x735 = 169U;
	uint64_t x736 = 5LLU;
	volatile uint64_t t178 = 14888LLU;

    t178 = ((x733%(x734^x735))&x736);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x737 = 3U;
	int16_t x739 = INT16_MAX;
	int16_t x740 = 0;
	int32_t t179 = 7670317;

    t179 = ((x737%(x738^x739))&x740);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x742 = INT32_MIN;
	int16_t x744 = INT16_MIN;
	int32_t t180 = 3279634;

    t180 = ((x741%(x742^x743))&x744);

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x748 = INT64_MAX;

    t181 = ((x745%(x746^x747))&x748);

    if (t181 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x749 = -1;
	static int16_t x750 = INT16_MIN;
	static volatile int8_t x751 = -1;
	volatile uint8_t x752 = UINT8_MAX;
	volatile int32_t t182 = -7;

    t182 = ((x749%(x750^x751))&x752);

    if (t182 != 255) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x754 = 9059228746LLU;
	int16_t x755 = INT16_MIN;
	volatile int32_t x756 = INT32_MAX;
	uint64_t t183 = 134LLU;

    t183 = ((x753%(x754^x755))&x756);

    if (t183 != 12LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint16_t x762 = UINT16_MAX;
	int16_t x763 = -1;
	volatile uint64_t t184 = UINT64_MAX;

    t184 = ((x761%(x762^x763))&x764);

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x765 = UINT8_MAX;
	static uint32_t x766 = UINT32_MAX;
	int32_t x767 = INT32_MAX;
	int16_t x768 = 1;

    t185 = ((x765%(x766^x767))&x768);

    if (t185 != 1U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x769 = INT64_MIN;
	int8_t x770 = 1;
	static int32_t x771 = INT32_MIN;

    t186 = ((x769%(x770^x771))&x772);

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x773 = -704959;
	uint32_t x774 = UINT32_MAX;
	uint16_t x775 = 1U;
	uint64_t x776 = 112525169343871LLU;
	uint64_t t187 = 7080690213LLU;

    t187 = ((x773%(x774^x775))&x776);

    if (t187 != 1320500289LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x778 = INT32_MAX;
	volatile int64_t x779 = 438347LL;
	int8_t x780 = INT8_MIN;
	volatile int64_t t188 = 42514571LL;

    t188 = ((x777%(x778^x779))&x780);

    if (t188 != -128LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x781 = INT16_MIN;
	int64_t x782 = INT64_MIN;
	volatile int64_t x783 = -1LL;
	int16_t x784 = INT16_MAX;
	static volatile int64_t t189 = -14LL;

    t189 = ((x781%(x782^x783))&x784);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x785 = INT32_MIN;
	int16_t x786 = -1;
	int16_t x787 = 13125;
	static uint32_t x788 = 87624U;
	static uint32_t t190 = 13973U;

    t190 = ((x785%(x786^x787))&x788);

    if (t190 != 83464U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x789 = 6083U;
	int64_t x790 = INT64_MIN;
	uint32_t x792 = 3U;
	volatile int64_t t191 = 952548138492162LL;

    t191 = ((x789%(x790^x791))&x792);

    if (t191 != 3LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x793 = 2U;
	static int64_t x794 = INT64_MIN;
	static volatile int32_t x795 = 1752;
	uint32_t x796 = UINT32_MAX;
	volatile int64_t t192 = -1545254646555LL;

    t192 = ((x793%(x794^x795))&x796);

    if (t192 != 2LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x798 = 2;
	static int16_t x799 = INT16_MIN;
	static int32_t t193 = -1406897;

    t193 = ((x797%(x798^x799))&x800);

    if (t193 != 3) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x801 = 131514LL;
	uint8_t x802 = 1U;
	static volatile uint64_t t194 = 1102LLU;

    t194 = ((x801%(x802^x803))&x804);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x805 = 2U;
	static int64_t x806 = INT64_MIN;
	uint64_t x807 = 65883631870LLU;
	int64_t x808 = 6758994LL;
	static uint64_t t195 = 478963000999023206LLU;

    t195 = ((x805%(x806^x807))&x808);

    if (t195 != 2LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x809 = 21U;
	uint32_t x810 = 1458196255U;
	int16_t x811 = 11987;
	uint16_t x812 = 14492U;

    t196 = ((x809%(x810^x811))&x812);

    if (t196 != 20U) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x813 = -1LL;
	uint32_t x814 = UINT32_MAX;
	uint32_t x815 = 5U;

    t197 = ((x813%(x814^x815))&x816);

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x818 = UINT8_MAX;
	int32_t x819 = -1;
	int8_t x820 = -1;
	int32_t t198 = 0;

    t198 = ((x817%(x818^x819))&x820);

    if (t198 != -96) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x821 = INT64_MIN;
	uint16_t x822 = UINT16_MAX;
	static volatile int8_t x824 = INT8_MAX;
	int64_t t199 = 430723603784473324LL;

    t199 = ((x821%(x822^x823))&x824);

    if (t199 != 4LL) { NG(); } else { ; }
	
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

