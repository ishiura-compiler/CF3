
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

uint16_t x1 = UINT16_MAX;
uint32_t x5 = UINT32_MAX;
uint64_t x12 = UINT64_MAX;
uint64_t x14 = 3LLU;
volatile uint32_t t3 = 40219U;
static volatile int32_t x31 = -1;
static uint8_t x38 = UINT8_MAX;
static volatile int32_t x39 = INT32_MIN;
int16_t x40 = INT16_MIN;
static uint8_t x43 = 0U;
int64_t x45 = INT64_MAX;
int8_t x51 = INT8_MIN;
int64_t x52 = -3848022602688LL;
int16_t x56 = -1;
static uint8_t x63 = 27U;
static volatile int32_t t15 = 122385398;
static uint16_t x65 = 5U;
uint64_t x66 = 13745355895311097LLU;
int32_t t16 = 598392275;
int16_t x71 = 6548;
int8_t x72 = -1;
static int64_t x73 = INT64_MIN;
int8_t x84 = -1;
int32_t x92 = -1;
volatile int32_t t23 = 55;
static volatile int32_t x98 = 2544;
static uint16_t x109 = 9890U;
int32_t x110 = -1;
volatile int32_t t27 = 195825;
static uint8_t x114 = 3U;
static volatile int16_t x123 = 1;
static volatile int32_t t30 = -117787302;
int8_t x125 = INT8_MIN;
int64_t x134 = -6790LL;
volatile int8_t x140 = -1;
volatile int32_t t34 = -61878326;
uint32_t x146 = UINT32_MAX;
static int16_t x148 = -1;
volatile int32_t t36 = 241;
int32_t x158 = INT32_MIN;
uint8_t x161 = 74U;
int32_t x171 = -1;
static int32_t t43 = 16204030;
volatile uint16_t x180 = 3U;
int32_t t44 = 212834;
int64_t x187 = INT64_MAX;
static volatile int32_t t46 = -1291;
volatile int64_t x191 = 1102384685301239436LL;
uint8_t x193 = 6U;
volatile int32_t t48 = -13;
uint8_t x198 = UINT8_MAX;
volatile int32_t t49 = 10400529;
uint8_t x205 = UINT8_MAX;
uint8_t x207 = UINT8_MAX;
volatile int32_t t53 = 128316810;
int8_t x219 = -1;
uint16_t x222 = 6U;
static uint32_t x223 = 2U;
static int32_t x226 = -7;
volatile int32_t x237 = INT32_MAX;
int64_t x240 = -1LL;
volatile int16_t x252 = 3;
int32_t t63 = -3014431;
static int32_t x271 = -12;
uint8_t x282 = 3U;
uint16_t x284 = 41U;
volatile int16_t x286 = INT16_MIN;
int32_t t71 = 265139946;
static int64_t x292 = -6035938969054LL;
uint32_t x294 = 1815U;
int16_t x296 = INT16_MIN;
volatile uint8_t x298 = 16U;
int64_t x299 = 267835779247028LL;
static int32_t t76 = 0;
static int8_t x313 = 3;
int64_t x314 = -9985718117261260LL;
static volatile uint32_t t78 = 191U;
uint32_t x320 = 3075U;
static int8_t x323 = -1;
volatile int32_t x326 = -1;
int16_t x328 = INT16_MIN;
int8_t x342 = INT8_MIN;
static int16_t x343 = -1;
volatile int32_t x352 = -1;
uint8_t x358 = 85U;
static int16_t x359 = -1;
static volatile uint16_t x362 = 164U;
static uint64_t x368 = 18848143LLU;
volatile int64_t x371 = -1LL;
volatile int32_t x376 = 38212028;
uint32_t x380 = UINT32_MAX;
uint32_t t94 = 910782540U;
int64_t x384 = -1LL;
volatile int64_t t95 = 0LL;
int32_t x387 = -1;
uint32_t x389 = UINT32_MAX;
int64_t x390 = INT64_MIN;
int8_t x392 = -57;
uint64_t x401 = UINT64_MAX;
uint16_t x402 = 11U;
static uint8_t x404 = UINT8_MAX;
uint8_t x405 = UINT8_MAX;
int32_t t101 = 244458308;
volatile int32_t t102 = -112297;
static uint64_t x417 = 15356LLU;
int16_t x418 = -1;
int8_t x419 = INT8_MAX;
static int8_t x421 = 1;
volatile int8_t x422 = 5;
static volatile int64_t t105 = 1177943718294416191LL;
static int32_t t107 = 394578892;
int64_t x438 = INT64_MIN;
static volatile int64_t x440 = 8173LL;
volatile uint32_t x447 = 4402533U;
static volatile uint16_t x450 = UINT16_MAX;
static volatile int64_t t112 = -14799046367874LL;
static int8_t x455 = -1;
volatile uint32_t x457 = 1U;
int8_t x464 = -1;
uint16_t x466 = 428U;
static int16_t x469 = INT16_MIN;
int16_t x471 = -6177;
volatile uint32_t x472 = 290U;
int32_t t119 = -921185;
static int32_t x485 = INT32_MAX;
volatile uint16_t x486 = UINT16_MAX;
volatile int32_t t121 = 328254;
int32_t x490 = -87205385;
int32_t x491 = INT32_MIN;
int32_t t122 = -6908694;
static int16_t x493 = INT16_MAX;
static volatile uint16_t x495 = UINT16_MAX;
int16_t x498 = INT16_MAX;
int32_t x499 = -1;
int32_t t126 = 0;
int64_t x513 = -1LL;
int16_t x515 = INT16_MAX;
int32_t x518 = INT32_MAX;
uint64_t x521 = 20031824LLU;
int32_t x528 = INT32_MAX;
int8_t x535 = -29;
int32_t x548 = INT32_MIN;
int32_t t136 = INT32_MIN;
static volatile uint8_t x550 = 6U;
int32_t x563 = -2590;
volatile uint64_t x566 = UINT64_MAX;
static int16_t x568 = INT16_MIN;
volatile int32_t t141 = -433100326;
static uint64_t x569 = UINT64_MAX;
int32_t x574 = 5689058;
uint32_t x578 = 19022U;
int8_t x584 = INT8_MAX;
int32_t t145 = 10;
volatile uint8_t x590 = 2U;
volatile uint16_t x591 = 28068U;
static int32_t t147 = 1;
static int64_t x595 = -1LL;
static int16_t x596 = -2625;
uint32_t x604 = UINT32_MAX;
volatile uint64_t t151 = 730476LLU;
static uint16_t x611 = UINT16_MAX;
uint64_t x615 = UINT64_MAX;
static int16_t x616 = INT16_MIN;
int32_t t153 = 14302657;
uint64_t t158 = 2LLU;
static int16_t x638 = -10;
uint64_t x653 = UINT64_MAX;
int16_t x657 = -4;
uint32_t x660 = UINT32_MAX;
int8_t x661 = -1;
int16_t x662 = 62;
int64_t x663 = -248071169217885567LL;
int64_t x664 = INT64_MAX;
static int8_t x668 = INT8_MIN;
int8_t x670 = 4;
int32_t x671 = -1025;
int64_t x676 = INT64_MIN;
int64_t x677 = -1LL;
volatile int32_t t169 = -778746922;
static int16_t x691 = INT16_MAX;
volatile int64_t t172 = INT64_MAX;
int16_t x694 = INT16_MAX;
static uint32_t x704 = UINT32_MAX;
uint32_t x707 = UINT32_MAX;
uint32_t x721 = 224664U;
int16_t x725 = INT16_MIN;
int32_t x726 = INT32_MIN;
static int8_t x729 = INT8_MIN;
uint8_t x733 = 1U;
uint32_t x735 = UINT32_MAX;
int64_t t183 = 3921972021628371LL;
int8_t x741 = INT8_MIN;
int16_t x746 = INT16_MIN;
int8_t x754 = -1;
int32_t t188 = 0;
int32_t x757 = INT32_MAX;
static uint32_t x759 = UINT32_MAX;
int8_t x760 = INT8_MIN;
volatile int32_t t189 = 891235;
uint64_t x764 = 3273361772311038809LLU;
volatile uint64_t t190 = 2996036389LLU;
int32_t x766 = INT32_MIN;
static int16_t x767 = -5985;
volatile uint64_t t192 = 722282906783880961LLU;
int64_t x774 = -1LL;
volatile int32_t t193 = 10839752;
int8_t x777 = INT8_MIN;
uint16_t x783 = 11226U;
int64_t x784 = INT64_MIN;
volatile int64_t t195 = INT64_MIN;
int16_t x790 = INT16_MIN;
uint64_t t197 = 24533085043194LLU;
uint8_t x794 = 13U;


void f0(void) {
    	int16_t x2 = -1;
	volatile int8_t x3 = 0;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -48867;

    t0 = ((x1<=(x2!=x3))^x4);

    if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x6 = INT32_MAX;
	int64_t x7 = 924LL;
	static int16_t x8 = INT16_MAX;
	int32_t t1 = 2281526;

    t1 = ((x5<=(x6!=x7))^x8);

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = -3;
	uint64_t x10 = 2803LLU;
	static int8_t x11 = INT8_MAX;
	uint64_t t2 = 28LLU;

    t2 = ((x9<=(x10!=x11))^x12);

    if (t2 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	uint64_t x15 = 16269737237LLU;
	static uint32_t x16 = 2670118U;

    t3 = ((x13<=(x14!=x15))^x16);

    if (t3 != 2670118U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	int64_t x18 = -1LL;
	static volatile int32_t x19 = INT32_MIN;
	int64_t x20 = INT64_MIN;
	int64_t t4 = -234LL;

    t4 = ((x17<=(x18!=x19))^x20);

    if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	static volatile int8_t x22 = -1;
	int32_t x23 = -1;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 1;

    t5 = ((x21<=(x22!=x23))^x24);

    if (t5 != -32767) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	static uint32_t x26 = 6241U;
	int64_t x27 = INT64_MAX;
	static volatile uint8_t x28 = 11U;
	static int32_t t6 = 241401;

    t6 = ((x25<=(x26!=x27))^x28);

    if (t6 != 10) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	static int32_t x30 = INT32_MIN;
	uint16_t x32 = 0U;
	volatile int32_t t7 = -775;

    t7 = ((x29<=(x30!=x31))^x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MAX;
	static int32_t x34 = 0;
	volatile int32_t x35 = -1;
	uint16_t x36 = 501U;
	volatile int32_t t8 = -295932;

    t8 = ((x33<=(x34!=x35))^x36);

    if (t8 != 501) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = INT64_MIN;
	volatile int32_t t9 = 8;

    t9 = ((x37<=(x38!=x39))^x40);

    if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x41 = 1563U;
	uint8_t x42 = 25U;
	int64_t x44 = -1LL;
	int64_t t10 = -291079640646040277LL;

    t10 = ((x41<=(x42!=x43))^x44);

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x46 = 0U;
	int16_t x47 = -10;
	int16_t x48 = INT16_MIN;
	static int32_t t11 = -439;

    t11 = ((x45<=(x46!=x47))^x48);

    if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	volatile int8_t x50 = 5;
	static volatile int64_t t12 = 1566LL;

    t12 = ((x49<=(x50!=x51))^x52);

    if (t12 != -3848022602688LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x53 = 96954145926815LLU;
	static int8_t x54 = -15;
	int32_t x55 = -1;
	static int32_t t13 = -123207;

    t13 = ((x53<=(x54!=x55))^x56);

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MAX;
	int64_t x59 = INT64_MIN;
	uint16_t x60 = 6685U;
	int32_t t14 = -1424;

    t14 = ((x57<=(x58!=x59))^x60);

    if (t14 != 6684) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	int32_t x62 = 258;
	volatile int8_t x64 = INT8_MIN;

    t15 = ((x61<=(x62!=x63))^x64);

    if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x67 = INT64_MAX;
	volatile int16_t x68 = 886;

    t16 = ((x65<=(x66!=x67))^x68);

    if (t16 != 886) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x69 = 1694306654U;
	int16_t x70 = 43;
	volatile int32_t t17 = -5958;

    t17 = ((x69<=(x70!=x71))^x72);

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = -1;
	volatile uint32_t x75 = 48008U;
	int16_t x76 = INT16_MAX;
	volatile int32_t t18 = -2787375;

    t18 = ((x73<=(x74!=x75))^x76);

    if (t18 != 32766) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MAX;
	static int32_t x78 = -1;
	volatile int32_t x79 = INT32_MIN;
	int16_t x80 = INT16_MIN;
	int32_t t19 = -77456767;

    t19 = ((x77<=(x78!=x79))^x80);

    if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	uint32_t x82 = UINT32_MAX;
	int16_t x83 = INT16_MIN;
	int32_t t20 = -396453;

    t20 = ((x81<=(x82!=x83))^x84);

    if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x85 = -14709807;
	static int16_t x86 = -1;
	static volatile int64_t x87 = 2821713LL;
	int8_t x88 = INT8_MIN;
	int32_t t21 = 2549;

    t21 = ((x85<=(x86!=x87))^x88);

    if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 7U;
	uint32_t x90 = 17269U;
	int64_t x91 = 16036471LL;
	volatile int32_t t22 = 66837501;

    t22 = ((x89<=(x90!=x91))^x92);

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = 0;
	int32_t x94 = 62;
	uint64_t x95 = UINT64_MAX;
	uint8_t x96 = 40U;

    t23 = ((x93<=(x94!=x95))^x96);

    if (t23 != 41) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint16_t x97 = 1018U;
	int8_t x99 = 0;
	int16_t x100 = -1;
	int32_t t24 = -3;

    t24 = ((x97<=(x98!=x99))^x100);

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = -1;
	static uint32_t x102 = UINT32_MAX;
	static uint8_t x103 = 35U;
	uint16_t x104 = 0U;
	static volatile int32_t t25 = 97432;

    t25 = ((x101<=(x102!=x103))^x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = -440811871684668LL;
	int32_t x106 = -1;
	int16_t x107 = -8;
	uint16_t x108 = 1569U;
	volatile int32_t t26 = -741981;

    t26 = ((x105<=(x106!=x107))^x108);

    if (t26 != 1568) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x111 = INT8_MIN;
	static int32_t x112 = 316;

    t27 = ((x109<=(x110!=x111))^x112);

    if (t27 != 316) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 441711790LLU;
	volatile int64_t x115 = INT64_MAX;
	int16_t x116 = INT16_MIN;
	static volatile int32_t t28 = 129035;

    t28 = ((x113<=(x114!=x115))^x116);

    if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x117 = INT8_MAX;
	volatile int64_t x118 = INT64_MIN;
	uint8_t x119 = 1U;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t29 = UINT32_MAX;

    t29 = ((x117<=(x118!=x119))^x120);

    if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = 1;
	int16_t x122 = INT16_MIN;
	int16_t x124 = INT16_MIN;

    t30 = ((x121<=(x122!=x123))^x124);

    if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x126 = UINT16_MAX;
	static int64_t x127 = 232448626LL;
	int64_t x128 = INT64_MIN;
	volatile int64_t t31 = 12855485712965LL;

    t31 = ((x125<=(x126!=x127))^x128);

    if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -1473255000040157802LL;
	int32_t x130 = INT32_MAX;
	int32_t x131 = INT32_MAX;
	int16_t x132 = INT16_MAX;
	static int32_t t32 = -10225;

    t32 = ((x129<=(x130!=x131))^x132);

    if (t32 != 32766) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = INT8_MIN;
	volatile int8_t x135 = 15;
	int64_t x136 = 5015279834107LL;
	static int64_t t33 = 15339355058849LL;

    t33 = ((x133<=(x134!=x135))^x136);

    if (t33 != 5015279834106LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = 3937LL;
	int64_t x138 = 975065356298139LL;
	static int64_t x139 = INT64_MAX;

    t34 = ((x137<=(x138!=x139))^x140);

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MAX;
	volatile int8_t x142 = -1;
	uint16_t x143 = 508U;
	volatile int8_t x144 = 30;
	static volatile int32_t t35 = -716396;

    t35 = ((x141<=(x142!=x143))^x144);

    if (t35 != 30) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x145 = 3LLU;
	int32_t x147 = INT32_MAX;

    t36 = ((x145<=(x146!=x147))^x148);

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = 192;
	int16_t x150 = INT16_MIN;
	int32_t x151 = 5676184;
	int8_t x152 = 1;
	static volatile int32_t t37 = 38829;

    t37 = ((x149<=(x150!=x151))^x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = 13591577863457LL;
	int64_t x154 = INT64_MIN;
	int32_t x155 = 609110486;
	int32_t x156 = -2937622;
	int32_t t38 = -51256;

    t38 = ((x153<=(x154!=x155))^x156);

    if (t38 != -2937622) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = INT64_MAX;
	int16_t x159 = INT16_MIN;
	int8_t x160 = INT8_MIN;
	volatile int32_t t39 = 3240;

    t39 = ((x157<=(x158!=x159))^x160);

    if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x162 = 4U;
	static uint64_t x163 = UINT64_MAX;
	int64_t x164 = INT64_MIN;
	int64_t t40 = INT64_MIN;

    t40 = ((x161<=(x162!=x163))^x164);

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = 0;
	static volatile int16_t x166 = -1;
	static int16_t x167 = 1;
	uint64_t x168 = UINT64_MAX;
	static volatile uint64_t t41 = 450016990692LLU;

    t41 = ((x165<=(x166!=x167))^x168);

    if (t41 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x169 = UINT32_MAX;
	int32_t x170 = 779878632;
	int8_t x172 = INT8_MAX;
	int32_t t42 = -53617;

    t42 = ((x169<=(x170!=x171))^x172);

    if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int32_t x173 = INT32_MAX;
	uint32_t x174 = 89453U;
	static int16_t x175 = 2838;
	static int8_t x176 = INT8_MIN;

    t43 = ((x173<=(x174!=x175))^x176);

    if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint32_t x177 = 14772369U;
	volatile uint8_t x178 = 121U;
	static uint8_t x179 = UINT8_MAX;

    t44 = ((x177<=(x178!=x179))^x180);

    if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MAX;
	uint32_t x183 = 84200U;
	static volatile uint64_t x184 = 155928302350540244LLU;
	uint64_t t45 = 217766176LLU;

    t45 = ((x181<=(x182!=x183))^x184);

    if (t45 != 155928302350540245LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 20158U;
	static int32_t x186 = 15;
	uint16_t x188 = 151U;

    t46 = ((x185<=(x186!=x187))^x188);

    if (t46 != 151) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	static uint16_t x190 = 15U;
	int8_t x192 = 39;
	static int32_t t47 = -60238051;

    t47 = ((x189<=(x190!=x191))^x192);

    if (t47 != 38) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x194 = -1;
	volatile int16_t x195 = INT16_MIN;
	volatile uint8_t x196 = 71U;

    t48 = ((x193<=(x194!=x195))^x196);

    if (t48 != 71) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	int16_t x199 = -10;
	int32_t x200 = INT32_MAX;

    t49 = ((x197<=(x198!=x199))^x200);

    if (t49 != 2147483646) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = 790623;
	int16_t x202 = -41;
	uint8_t x203 = 15U;
	int8_t x204 = 53;
	static int32_t t50 = -1712323;

    t50 = ((x201<=(x202!=x203))^x204);

    if (t50 != 53) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x206 = INT16_MAX;
	int32_t x208 = -669792137;
	int32_t t51 = -1001902118;

    t51 = ((x205<=(x206!=x207))^x208);

    if (t51 != -669792137) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	uint16_t x210 = 0U;
	uint16_t x211 = UINT16_MAX;
	volatile int32_t x212 = -223;
	int32_t t52 = -951496562;

    t52 = ((x209<=(x210!=x211))^x212);

    if (t52 != -224) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	volatile int32_t x214 = INT32_MIN;
	volatile uint16_t x215 = 5577U;
	int32_t x216 = -1033578669;

    t53 = ((x213<=(x214!=x215))^x216);

    if (t53 != -1033578670) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -729331LL;
	uint16_t x218 = UINT16_MAX;
	static int32_t x220 = INT32_MAX;
	volatile int32_t t54 = -13372272;

    t54 = ((x217<=(x218!=x219))^x220);

    if (t54 != 2147483646) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = -25LL;
	int64_t x224 = -1LL;
	volatile int64_t t55 = -3837384124LL;

    t55 = ((x221<=(x222!=x223))^x224);

    if (t55 != -2LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -411646060796645211LL;
	volatile int64_t x227 = -1LL;
	int32_t x228 = -244;
	volatile int32_t t56 = -82071;

    t56 = ((x225<=(x226!=x227))^x228);

    if (t56 != -243) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint32_t x229 = UINT32_MAX;
	int64_t x230 = -6158254551204LL;
	uint64_t x231 = UINT64_MAX;
	int32_t x232 = -1;
	volatile int32_t t57 = -3;

    t57 = ((x229<=(x230!=x231))^x232);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	int32_t x234 = INT32_MIN;
	static uint16_t x235 = 3U;
	int64_t x236 = 29529135LL;
	static int64_t t58 = 16133135983786992LL;

    t58 = ((x233<=(x234!=x235))^x236);

    if (t58 != 29529134LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x238 = -1041575LL;
	static int32_t x239 = INT32_MIN;
	int64_t t59 = 1034901151329463364LL;

    t59 = ((x237<=(x238!=x239))^x240);

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = 2;
	uint32_t x242 = 169756981U;
	static int16_t x243 = INT16_MIN;
	int64_t x244 = 122352209LL;
	static volatile int64_t t60 = 7101615312686227LL;

    t60 = ((x241<=(x242!=x243))^x244);

    if (t60 != 122352209LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = UINT32_MAX;
	int64_t x246 = INT64_MAX;
	int16_t x247 = -81;
	uint32_t x248 = UINT32_MAX;
	volatile uint32_t t61 = UINT32_MAX;

    t61 = ((x245<=(x246!=x247))^x248);

    if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	volatile int8_t x250 = -1;
	static uint16_t x251 = 1U;
	int32_t t62 = -1;

    t62 = ((x249<=(x250!=x251))^x252);

    if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = INT32_MAX;
	volatile uint64_t x254 = UINT64_MAX;
	int16_t x255 = INT16_MIN;
	int8_t x256 = -1;

    t63 = ((x253<=(x254!=x255))^x256);

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = -363;
	uint32_t x258 = 139464354U;
	volatile int32_t x259 = INT32_MIN;
	volatile uint64_t x260 = 34134211402856514LLU;
	volatile uint64_t t64 = 14268929013LLU;

    t64 = ((x257<=(x258!=x259))^x260);

    if (t64 != 34134211402856515LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MAX;
	uint64_t x262 = 13430410044332LLU;
	static uint16_t x263 = UINT16_MAX;
	volatile int64_t x264 = INT64_MAX;
	int64_t t65 = INT64_MAX;

    t65 = ((x261<=(x262!=x263))^x264);

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	static int16_t x266 = INT16_MAX;
	static int16_t x267 = -1;
	int64_t x268 = INT64_MIN;
	int64_t t66 = -25369885242LL;

    t66 = ((x265<=(x266!=x267))^x268);

    if (t66 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = -1;
	int64_t x270 = INT64_MIN;
	int64_t x272 = 2020130LL;
	int64_t t67 = -95LL;

    t67 = ((x269<=(x270!=x271))^x272);

    if (t67 != 2020131LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x273 = 2983;
	int64_t x274 = -261517771165422598LL;
	uint8_t x275 = 55U;
	volatile int64_t x276 = INT64_MIN;
	volatile int64_t t68 = INT64_MIN;

    t68 = ((x273<=(x274!=x275))^x276);

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int32_t x277 = INT32_MIN;
	int8_t x278 = INT8_MAX;
	uint8_t x279 = 6U;
	volatile int64_t x280 = -1LL;
	volatile int64_t t69 = 904104802LL;

    t69 = ((x277<=(x278!=x279))^x280);

    if (t69 != -2LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x281 = 4U;
	int16_t x283 = 961;
	static int32_t t70 = -20688548;

    t70 = ((x281<=(x282!=x283))^x284);

    if (t70 != 41) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x285 = INT32_MIN;
	uint8_t x287 = 0U;
	static int8_t x288 = INT8_MAX;

    t71 = ((x285<=(x286!=x287))^x288);

    if (t71 != 126) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 30U;
	int16_t x290 = -1;
	int32_t x291 = INT32_MIN;
	volatile int64_t t72 = 119650581651832LL;

    t72 = ((x289<=(x290!=x291))^x292);

    if (t72 != -6035938969054LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MAX;
	int8_t x295 = INT8_MAX;
	int32_t t73 = 10;

    t73 = ((x293<=(x294!=x295))^x296);

    if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = 3482;
	int32_t x300 = -3814;
	volatile int32_t t74 = 336;

    t74 = ((x297<=(x298!=x299))^x300);

    if (t74 != -3814) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x301 = 29067869096685522LL;
	volatile int64_t x302 = INT64_MIN;
	uint8_t x303 = 13U;
	int16_t x304 = 14;
	static int32_t t75 = -3605087;

    t75 = ((x301<=(x302!=x303))^x304);

    if (t75 != 14) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x305 = INT64_MAX;
	static int8_t x306 = 0;
	int8_t x307 = INT8_MIN;
	static uint16_t x308 = UINT16_MAX;

    t76 = ((x305<=(x306!=x307))^x308);

    if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x309 = INT16_MIN;
	volatile int16_t x310 = 2559;
	uint32_t x311 = UINT32_MAX;
	int64_t x312 = INT64_MIN;
	int64_t t77 = 3LL;

    t77 = ((x309<=(x310!=x311))^x312);

    if (t77 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x315 = -713142131;
	uint32_t x316 = 305013242U;

    t78 = ((x313<=(x314!=x315))^x316);

    if (t78 != 305013242U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = -1;
	static uint32_t x318 = 71067012U;
	static uint16_t x319 = 1832U;
	uint32_t t79 = 5894U;

    t79 = ((x317<=(x318!=x319))^x320);

    if (t79 != 3074U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x321 = 502922562LLU;
	int64_t x322 = -1LL;
	int16_t x324 = -1;
	volatile int32_t t80 = 4;

    t80 = ((x321<=(x322!=x323))^x324);

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x325 = UINT32_MAX;
	uint32_t x327 = UINT32_MAX;
	int32_t t81 = -27079471;

    t81 = ((x325<=(x326!=x327))^x328);

    if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = 23U;
	int64_t x330 = 41162LL;
	int8_t x331 = INT8_MIN;
	volatile uint16_t x332 = UINT16_MAX;
	volatile int32_t t82 = -414296;

    t82 = ((x329<=(x330!=x331))^x332);

    if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = 0U;
	uint64_t x334 = 4LLU;
	int16_t x335 = INT16_MAX;
	int32_t x336 = 3796;
	int32_t t83 = 38941422;

    t83 = ((x333<=(x334!=x335))^x336);

    if (t83 != 3797) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MAX;
	int64_t x338 = 4177456278LL;
	uint64_t x339 = 963LLU;
	int32_t x340 = 151303;
	int32_t t84 = -219;

    t84 = ((x337<=(x338!=x339))^x340);

    if (t84 != 151303) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = UINT16_MAX;
	static volatile uint8_t x344 = 111U;
	volatile int32_t t85 = 493;

    t85 = ((x341<=(x342!=x343))^x344);

    if (t85 != 111) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = INT32_MIN;
	uint16_t x346 = 11169U;
	volatile int8_t x347 = -1;
	int32_t x348 = 7165;
	volatile int32_t t86 = -61333;

    t86 = ((x345<=(x346!=x347))^x348);

    if (t86 != 7164) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = 13;
	uint8_t x350 = 60U;
	uint64_t x351 = UINT64_MAX;
	volatile int32_t t87 = 8734415;

    t87 = ((x349<=(x350!=x351))^x352);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	int8_t x354 = 30;
	uint8_t x355 = 1U;
	volatile int64_t x356 = 29940771123327LL;
	int64_t t88 = 3867482LL;

    t88 = ((x353<=(x354!=x355))^x356);

    if (t88 != 29940771123326LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = 0U;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = -4;

    t89 = ((x357<=(x358!=x359))^x360);

    if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	static uint64_t x363 = UINT64_MAX;
	volatile int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 1;

    t90 = ((x361<=(x362!=x363))^x364);

    if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x365 = -1;
	uint8_t x366 = UINT8_MAX;
	uint32_t x367 = UINT32_MAX;
	uint64_t t91 = 967056014LLU;

    t91 = ((x365<=(x366!=x367))^x368);

    if (t91 != 18848142LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MIN;
	uint8_t x370 = 10U;
	int8_t x372 = INT8_MAX;
	static volatile int32_t t92 = 636;

    t92 = ((x369<=(x370!=x371))^x372);

    if (t92 != 126) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x373 = INT8_MAX;
	int16_t x374 = 11;
	int16_t x375 = INT16_MAX;
	volatile int32_t t93 = -24;

    t93 = ((x373<=(x374!=x375))^x376);

    if (t93 != 38212028) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x377 = 1U;
	static int16_t x378 = INT16_MIN;
	uint16_t x379 = 221U;

    t94 = ((x377<=(x378!=x379))^x380);

    if (t94 != 4294967294U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x381 = 16U;
	volatile int64_t x382 = INT64_MIN;
	int8_t x383 = INT8_MIN;

    t95 = ((x381<=(x382!=x383))^x384);

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 7U;
	uint8_t x386 = 5U;
	int32_t x388 = -1;
	volatile int32_t t96 = 1;

    t96 = ((x385<=(x386!=x387))^x388);

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x391 = 1U;
	int32_t t97 = -13;

    t97 = ((x389<=(x390!=x391))^x392);

    if (t97 != -57) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = INT8_MIN;
	uint16_t x394 = 4991U;
	static int32_t x395 = INT32_MAX;
	int8_t x396 = INT8_MAX;
	int32_t t98 = -44;

    t98 = ((x393<=(x394!=x395))^x396);

    if (t98 != 126) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x397 = 2;
	volatile int32_t x398 = INT32_MIN;
	static uint8_t x399 = 22U;
	uint8_t x400 = 6U;
	int32_t t99 = 4094;

    t99 = ((x397<=(x398!=x399))^x400);

    if (t99 != 6) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x403 = 0U;
	volatile int32_t t100 = 2780;

    t100 = ((x401<=(x402!=x403))^x404);

    if (t100 != 255) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x406 = UINT32_MAX;
	uint32_t x407 = UINT32_MAX;
	static volatile int32_t x408 = -199;

    t101 = ((x405<=(x406!=x407))^x408);

    if (t101 != -199) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	int16_t x410 = INT16_MIN;
	static int32_t x411 = -16089;
	volatile int8_t x412 = INT8_MAX;

    t102 = ((x409<=(x410!=x411))^x412);

    if (t102 != 126) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x413 = 160937742LL;
	static uint16_t x414 = 7U;
	int64_t x415 = 820065900971642596LL;
	int64_t x416 = INT64_MIN;
	volatile int64_t t103 = INT64_MIN;

    t103 = ((x413<=(x414!=x415))^x416);

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x420 = 1U;
	volatile int32_t t104 = 86;

    t104 = ((x417<=(x418!=x419))^x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x423 = UINT32_MAX;
	volatile int64_t x424 = INT64_MIN;

    t105 = ((x421<=(x422!=x423))^x424);

    if (t105 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x425 = 20;
	int32_t x426 = INT32_MIN;
	volatile uint8_t x427 = UINT8_MAX;
	int32_t x428 = INT32_MIN;
	volatile int32_t t106 = INT32_MIN;

    t106 = ((x425<=(x426!=x427))^x428);

    if (t106 != INT32_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = 27;
	uint32_t x430 = 31095U;
	uint64_t x431 = UINT64_MAX;
	volatile int8_t x432 = 47;

    t107 = ((x429<=(x430!=x431))^x432);

    if (t107 != 47) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -6185;
	static int16_t x434 = INT16_MIN;
	int64_t x435 = INT64_MIN;
	uint8_t x436 = UINT8_MAX;
	int32_t t108 = -1565234;

    t108 = ((x433<=(x434!=x435))^x436);

    if (t108 != 254) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x437 = 52448771355916582LLU;
	volatile int16_t x439 = INT16_MAX;
	volatile int64_t t109 = -58809441490784089LL;

    t109 = ((x437<=(x438!=x439))^x440);

    if (t109 != 8173LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 37010794U;
	volatile int8_t x442 = INT8_MIN;
	static int32_t x443 = -37537283;
	int16_t x444 = INT16_MIN;
	volatile int32_t t110 = 178595877;

    t110 = ((x441<=(x442!=x443))^x444);

    if (t110 != -32768) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x445 = INT8_MIN;
	volatile int8_t x446 = 1;
	static volatile int64_t x448 = -1LL;
	volatile int64_t t111 = -1178380177078685064LL;

    t111 = ((x445<=(x446!=x447))^x448);

    if (t111 != -2LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x449 = -1;
	uint8_t x451 = UINT8_MAX;
	int64_t x452 = INT64_MIN;

    t112 = ((x449<=(x450!=x451))^x452);

    if (t112 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = 811;
	int64_t x454 = 283546746853392472LL;
	uint32_t x456 = 944840340U;
	uint32_t t113 = 32487U;

    t113 = ((x453<=(x454!=x455))^x456);

    if (t113 != 944840340U) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x458 = 10868857152795553LL;
	int16_t x459 = -1;
	volatile int64_t x460 = -3404084905LL;
	static int64_t t114 = 7477LL;

    t114 = ((x457<=(x458!=x459))^x460);

    if (t114 != -3404084906LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x461 = 50U;
	uint8_t x462 = UINT8_MAX;
	int64_t x463 = INT64_MAX;
	volatile int32_t t115 = 219262;

    t115 = ((x461<=(x462!=x463))^x464);

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MIN;
	static int64_t x467 = -168507936LL;
	volatile int8_t x468 = -1;
	int32_t t116 = 328821101;

    t116 = ((x465<=(x466!=x467))^x468);

    if (t116 != -2) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x470 = UINT32_MAX;
	uint32_t t117 = 392U;

    t117 = ((x469<=(x470!=x471))^x472);

    if (t117 != 291U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	static int8_t x474 = -15;
	uint32_t x475 = UINT32_MAX;
	volatile int8_t x476 = -1;
	volatile int32_t t118 = 236;

    t118 = ((x473<=(x474!=x475))^x476);

    if (t118 != -2) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x477 = 14U;
	int16_t x478 = INT16_MIN;
	int16_t x479 = INT16_MIN;
	int8_t x480 = 1;

    t119 = ((x477<=(x478!=x479))^x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = UINT32_MAX;
	int16_t x482 = -1;
	static uint64_t x483 = UINT64_MAX;
	static int32_t x484 = -5593;
	volatile int32_t t120 = -472449545;

    t120 = ((x481<=(x482!=x483))^x484);

    if (t120 != -5593) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x487 = INT8_MIN;
	int16_t x488 = -1;

    t121 = ((x485<=(x486!=x487))^x488);

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MAX;
	int8_t x492 = 6;

    t122 = ((x489<=(x490!=x491))^x492);

    if (t122 != 6) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x494 = 191732949U;
	volatile int8_t x496 = -1;
	volatile int32_t t123 = -11;

    t123 = ((x493<=(x494!=x495))^x496);

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = UINT64_MAX;
	int8_t x500 = INT8_MIN;
	static int32_t t124 = 4272044;

    t124 = ((x497<=(x498!=x499))^x500);

    if (t124 != -128) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x501 = -1;
	volatile uint16_t x502 = 234U;
	volatile int16_t x503 = -5105;
	int8_t x504 = -1;
	int32_t t125 = -810;

    t125 = ((x501<=(x502!=x503))^x504);

    if (t125 != -2) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = UINT16_MAX;
	int16_t x506 = -1;
	volatile int32_t x507 = INT32_MIN;
	uint8_t x508 = 4U;

    t126 = ((x505<=(x506!=x507))^x508);

    if (t126 != 4) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x509 = INT64_MAX;
	int64_t x510 = INT64_MIN;
	int16_t x511 = -139;
	static int32_t x512 = -4081;
	int32_t t127 = -4360479;

    t127 = ((x509<=(x510!=x511))^x512);

    if (t127 != -4081) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x514 = -8167668164LL;
	int64_t x516 = -7LL;
	int64_t t128 = 272826570137053LL;

    t128 = ((x513<=(x514!=x515))^x516);

    if (t128 != -8LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x517 = UINT32_MAX;
	int64_t x519 = -944009LL;
	static int32_t x520 = INT32_MIN;
	volatile int32_t t129 = INT32_MIN;

    t129 = ((x517<=(x518!=x519))^x520);

    if (t129 != INT32_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x522 = -38491342LL;
	static int16_t x523 = -1;
	uint16_t x524 = UINT16_MAX;
	int32_t t130 = -24;

    t130 = ((x521<=(x522!=x523))^x524);

    if (t130 != 65535) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x525 = 540715865481LL;
	static int32_t x526 = INT32_MAX;
	int64_t x527 = -549317045LL;
	int32_t t131 = INT32_MAX;

    t131 = ((x525<=(x526!=x527))^x528);

    if (t131 != INT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = -1LL;
	static uint32_t x530 = UINT32_MAX;
	volatile int8_t x531 = INT8_MIN;
	int8_t x532 = 0;
	static volatile int32_t t132 = -523944;

    t132 = ((x529<=(x530!=x531))^x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MIN;
	int16_t x534 = INT16_MIN;
	static uint16_t x536 = 15888U;
	int32_t t133 = 124433325;

    t133 = ((x533<=(x534!=x535))^x536);

    if (t133 != 15889) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x537 = UINT16_MAX;
	static volatile int8_t x538 = INT8_MIN;
	int64_t x539 = 336165935LL;
	uint16_t x540 = 2642U;
	static int32_t t134 = 389;

    t134 = ((x537<=(x538!=x539))^x540);

    if (t134 != 2642) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x541 = INT8_MIN;
	static int32_t x542 = INT32_MAX;
	uint8_t x543 = 2U;
	uint64_t x544 = UINT64_MAX;
	uint64_t t135 = 24445813344330211LLU;

    t135 = ((x541<=(x542!=x543))^x544);

    if (t135 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = UINT16_MAX;
	static int8_t x546 = 1;
	int32_t x547 = 772853;

    t136 = ((x545<=(x546!=x547))^x548);

    if (t136 != INT32_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = -43;
	int32_t x551 = INT32_MAX;
	uint8_t x552 = 0U;
	volatile int32_t t137 = 2;

    t137 = ((x549<=(x550!=x551))^x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = 2437821;
	int32_t x554 = 35;
	int8_t x555 = INT8_MAX;
	uint64_t x556 = UINT64_MAX;
	uint64_t t138 = UINT64_MAX;

    t138 = ((x553<=(x554!=x555))^x556);

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	static int8_t x558 = INT8_MIN;
	volatile uint16_t x559 = UINT16_MAX;
	static uint64_t x560 = 492LLU;
	volatile uint64_t t139 = 11266010671LLU;

    t139 = ((x557<=(x558!=x559))^x560);

    if (t139 != 493LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = UINT8_MAX;
	volatile int64_t x562 = -53LL;
	int32_t x564 = 183759;
	int32_t t140 = 72747;

    t140 = ((x561<=(x562!=x563))^x564);

    if (t140 != 183759) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = 918LL;
	volatile uint64_t x567 = 566102641443LLU;

    t141 = ((x565<=(x566!=x567))^x568);

    if (t141 != -32768) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x570 = 213U;
	int64_t x571 = INT64_MAX;
	int32_t x572 = INT32_MIN;
	static int32_t t142 = INT32_MIN;

    t142 = ((x569<=(x570!=x571))^x572);

    if (t142 != INT32_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = 2923752951977259LL;
	volatile int16_t x575 = INT16_MIN;
	int16_t x576 = -1;
	volatile int32_t t143 = 34;

    t143 = ((x573<=(x574!=x575))^x576);

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = UINT8_MAX;
	int16_t x579 = -887;
	static int32_t x580 = -41289973;
	volatile int32_t t144 = 7314724;

    t144 = ((x577<=(x578!=x579))^x580);

    if (t144 != -41289973) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 327U;
	uint64_t x582 = 4574869051404LLU;
	uint64_t x583 = UINT64_MAX;

    t145 = ((x581<=(x582!=x583))^x584);

    if (t145 != 127) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = -1LL;
	volatile uint64_t x586 = 425483981LLU;
	static int64_t x587 = INT64_MIN;
	int8_t x588 = INT8_MIN;
	static int32_t t146 = 214805916;

    t146 = ((x585<=(x586!=x587))^x588);

    if (t146 != -127) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = 121U;
	uint8_t x592 = UINT8_MAX;

    t147 = ((x589<=(x590!=x591))^x592);

    if (t147 != 255) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = 11320221402342326LL;
	volatile int8_t x594 = 1;
	static volatile int32_t t148 = 1456;

    t148 = ((x593<=(x594!=x595))^x596);

    if (t148 != -2625) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	static int8_t x598 = INT8_MAX;
	int32_t x599 = -1;
	int64_t x600 = -2209774916592822LL;
	volatile int64_t t149 = 113326602392220510LL;

    t149 = ((x597<=(x598!=x599))^x600);

    if (t149 != -2209774916592821LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MAX;
	volatile int32_t x602 = -13;
	static int64_t x603 = 213905923545736340LL;
	uint32_t t150 = UINT32_MAX;

    t150 = ((x601<=(x602!=x603))^x604);

    if (t150 != UINT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 124LLU;
	int64_t x606 = 287LL;
	uint32_t x607 = UINT32_MAX;
	volatile uint64_t x608 = 13970623LLU;

    t151 = ((x605<=(x606!=x607))^x608);

    if (t151 != 13970623LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MAX;
	static uint32_t x610 = 41U;
	int8_t x612 = -1;
	volatile int32_t t152 = 207;

    t152 = ((x609<=(x610!=x611))^x612);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = UINT16_MAX;
	uint32_t x614 = 432U;

    t153 = ((x613<=(x614!=x615))^x616);

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = 14;
	int64_t x618 = INT64_MIN;
	int64_t x619 = 814212943449773731LL;
	volatile int64_t x620 = 1039371296LL;
	static volatile int64_t t154 = -354LL;

    t154 = ((x617<=(x618!=x619))^x620);

    if (t154 != 1039371296LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x621 = -1;
	int8_t x622 = INT8_MIN;
	uint32_t x623 = 0U;
	volatile int8_t x624 = INT8_MAX;
	static volatile int32_t t155 = -2612579;

    t155 = ((x621<=(x622!=x623))^x624);

    if (t155 != 126) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MAX;
	static uint64_t x626 = 6734961136978721700LLU;
	volatile uint8_t x627 = 32U;
	static volatile uint8_t x628 = UINT8_MAX;
	volatile int32_t t156 = -26179030;

    t156 = ((x625<=(x626!=x627))^x628);

    if (t156 != 255) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -1354;
	uint8_t x630 = UINT8_MAX;
	int32_t x631 = INT32_MIN;
	static int32_t x632 = 13774264;
	int32_t t157 = 0;

    t157 = ((x629<=(x630!=x631))^x632);

    if (t157 != 13774265) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 1U;
	volatile uint8_t x634 = 97U;
	int8_t x635 = INT8_MAX;
	uint64_t x636 = 6LLU;

    t158 = ((x633<=(x634!=x635))^x636);

    if (t158 != 7LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = -1;
	int8_t x639 = INT8_MIN;
	uint64_t x640 = 4910597296LLU;
	volatile uint64_t t159 = 7267987791249LLU;

    t159 = ((x637<=(x638!=x639))^x640);

    if (t159 != 4910597297LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = UINT64_MAX;
	uint64_t x642 = 189864750473951LLU;
	static int16_t x643 = 152;
	static int16_t x644 = -362;
	static volatile int32_t t160 = 5;

    t160 = ((x641<=(x642!=x643))^x644);

    if (t160 != -362) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x645 = 29804971593955781LL;
	int16_t x646 = -1;
	int16_t x647 = -1;
	uint16_t x648 = 457U;
	static volatile int32_t t161 = 31350919;

    t161 = ((x645<=(x646!=x647))^x648);

    if (t161 != 457) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x649 = 0U;
	volatile uint16_t x650 = UINT16_MAX;
	int32_t x651 = INT32_MIN;
	static volatile int16_t x652 = INT16_MAX;
	volatile int32_t t162 = 57;

    t162 = ((x649<=(x650!=x651))^x652);

    if (t162 != 32766) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x654 = UINT64_MAX;
	volatile int32_t x655 = 15;
	uint16_t x656 = UINT16_MAX;
	int32_t t163 = -119708;

    t163 = ((x653<=(x654!=x655))^x656);

    if (t163 != 65535) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x658 = -1;
	static volatile uint16_t x659 = 5144U;
	volatile uint32_t t164 = 187608U;

    t164 = ((x657<=(x658!=x659))^x660);

    if (t164 != 4294967294U) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t t165 = 2098584923840LL;

    t165 = ((x661<=(x662!=x663))^x664);

    if (t165 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = UINT8_MAX;
	static int8_t x666 = 45;
	int32_t x667 = INT32_MIN;
	static volatile int32_t t166 = -129604;

    t166 = ((x665<=(x666!=x667))^x668);

    if (t166 != -128) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 30U;
	int32_t x672 = INT32_MIN;
	volatile int32_t t167 = INT32_MIN;

    t167 = ((x669<=(x670!=x671))^x672);

    if (t167 != INT32_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	int16_t x674 = -1;
	int64_t x675 = INT64_MIN;
	volatile int64_t t168 = -2356265825802LL;

    t168 = ((x673<=(x674!=x675))^x676);

    if (t168 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x678 = -1;
	uint64_t x679 = 2LLU;
	static int32_t x680 = INT32_MIN;

    t169 = ((x677<=(x678!=x679))^x680);

    if (t169 != -2147483647) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -1LL;
	static int64_t x682 = -1LL;
	uint16_t x683 = 5854U;
	int64_t x684 = INT64_MIN;
	static volatile int64_t t170 = -5190662LL;

    t170 = ((x681<=(x682!=x683))^x684);

    if (t170 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 0U;
	int16_t x686 = INT16_MIN;
	int16_t x687 = INT16_MIN;
	uint8_t x688 = UINT8_MAX;
	volatile int32_t t171 = 5385877;

    t171 = ((x685<=(x686!=x687))^x688);

    if (t171 != 254) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x689 = 797312043U;
	int32_t x690 = INT32_MIN;
	int64_t x692 = INT64_MAX;

    t172 = ((x689<=(x690!=x691))^x692);

    if (t172 != INT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	uint64_t x695 = 2LLU;
	volatile int8_t x696 = INT8_MIN;
	volatile int32_t t173 = -1270;

    t173 = ((x693<=(x694!=x695))^x696);

    if (t173 != -127) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MAX;
	volatile uint32_t x698 = 4U;
	int8_t x699 = INT8_MIN;
	int32_t x700 = 1612838;
	static int32_t t174 = -24859;

    t174 = ((x697<=(x698!=x699))^x700);

    if (t174 != 1612838) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = 446770164590720LL;
	int8_t x702 = -15;
	static uint8_t x703 = UINT8_MAX;
	volatile uint32_t t175 = UINT32_MAX;

    t175 = ((x701<=(x702!=x703))^x704);

    if (t175 != UINT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x705 = UINT64_MAX;
	int32_t x706 = -1;
	uint64_t x708 = UINT64_MAX;
	volatile uint64_t t176 = UINT64_MAX;

    t176 = ((x705<=(x706!=x707))^x708);

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x709 = 190577972U;
	int64_t x710 = INT64_MIN;
	uint64_t x711 = UINT64_MAX;
	uint16_t x712 = 1127U;
	volatile int32_t t177 = -18736393;

    t177 = ((x709<=(x710!=x711))^x712);

    if (t177 != 1127) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = -1LL;
	int64_t x714 = -3299154207613726463LL;
	int8_t x715 = INT8_MIN;
	static int16_t x716 = INT16_MIN;
	static volatile int32_t t178 = 7544076;

    t178 = ((x713<=(x714!=x715))^x716);

    if (t178 != -32767) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x717 = INT8_MAX;
	int16_t x718 = INT16_MIN;
	static volatile int16_t x719 = -1;
	int64_t x720 = INT64_MIN;
	volatile int64_t t179 = INT64_MIN;

    t179 = ((x717<=(x718!=x719))^x720);

    if (t179 != INT64_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x722 = INT16_MAX;
	volatile int64_t x723 = INT64_MIN;
	int64_t x724 = INT64_MAX;
	static volatile int64_t t180 = INT64_MAX;

    t180 = ((x721<=(x722!=x723))^x724);

    if (t180 != INT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x727 = UINT8_MAX;
	uint8_t x728 = UINT8_MAX;
	volatile int32_t t181 = 4;

    t181 = ((x725<=(x726!=x727))^x728);

    if (t181 != 254) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x730 = 2U;
	static volatile uint64_t x731 = 63737326410670184LLU;
	int32_t x732 = 683723;
	volatile int32_t t182 = -313876715;

    t182 = ((x729<=(x730!=x731))^x732);

    if (t182 != 683722) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x734 = UINT16_MAX;
	int64_t x736 = INT64_MAX;

    t183 = ((x733<=(x734!=x735))^x736);

    if (t183 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x737 = INT8_MIN;
	int8_t x738 = 7;
	int16_t x739 = INT16_MAX;
	uint16_t x740 = UINT16_MAX;
	static volatile int32_t t184 = 226109;

    t184 = ((x737<=(x738!=x739))^x740);

    if (t184 != 65534) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x742 = -3523207835421724898LL;
	int32_t x743 = INT32_MIN;
	volatile int8_t x744 = 1;
	volatile int32_t t185 = -7393847;

    t185 = ((x741<=(x742!=x743))^x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x745 = 48150LL;
	int8_t x747 = -1;
	static int64_t x748 = INT64_MIN;
	static int64_t t186 = INT64_MIN;

    t186 = ((x745<=(x746!=x747))^x748);

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MIN;
	uint16_t x750 = UINT16_MAX;
	int16_t x751 = INT16_MAX;
	static int8_t x752 = INT8_MIN;
	volatile int32_t t187 = -2450;

    t187 = ((x749<=(x750!=x751))^x752);

    if (t187 != -127) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x753 = INT64_MAX;
	static int64_t x755 = INT64_MIN;
	volatile int8_t x756 = -1;

    t188 = ((x753<=(x754!=x755))^x756);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x758 = INT16_MIN;

    t189 = ((x757<=(x758!=x759))^x760);

    if (t189 != -128) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = 57LL;
	int32_t x762 = 1;
	static int32_t x763 = INT32_MIN;

    t190 = ((x761<=(x762!=x763))^x764);

    if (t190 != 3273361772311038809LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = -1LL;
	static uint64_t x768 = 21216212993207777LLU;
	uint64_t t191 = 651380064LLU;

    t191 = ((x765<=(x766!=x767))^x768);

    if (t191 != 21216212993207776LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x769 = UINT8_MAX;
	int32_t x770 = 3;
	static volatile int32_t x771 = INT32_MIN;
	uint64_t x772 = 4073081428645430LLU;

    t192 = ((x769<=(x770!=x771))^x772);

    if (t192 != 4073081428645430LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x773 = INT8_MAX;
	volatile uint32_t x775 = 432U;
	volatile int8_t x776 = INT8_MIN;

    t193 = ((x773<=(x774!=x775))^x776);

    if (t193 != -128) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x778 = 1U;
	int64_t x779 = -1LL;
	uint64_t x780 = UINT64_MAX;
	volatile uint64_t t194 = 136515708766471LLU;

    t194 = ((x777<=(x778!=x779))^x780);

    if (t194 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MAX;
	static volatile int64_t x782 = INT64_MIN;

    t195 = ((x781<=(x782!=x783))^x784);

    if (t195 != INT64_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MAX;
	static int16_t x786 = -1;
	static int64_t x787 = INT64_MAX;
	int16_t x788 = INT16_MAX;
	int32_t t196 = -62;

    t196 = ((x785<=(x786!=x787))^x788);

    if (t196 != 32767) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MIN;
	static int64_t x791 = -1LL;
	uint64_t x792 = UINT64_MAX;

    t197 = ((x789<=(x790!=x791))^x792);

    if (t197 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x793 = INT32_MIN;
	int64_t x795 = -1LL;
	uint32_t x796 = 263396085U;
	static volatile uint32_t t198 = 101986U;

    t198 = ((x793<=(x794!=x795))^x796);

    if (t198 != 263396084U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = 232;
	volatile uint8_t x798 = UINT8_MAX;
	uint32_t x799 = UINT32_MAX;
	volatile uint16_t x800 = UINT16_MAX;
	int32_t t199 = 11;

    t199 = ((x797<=(x798!=x799))^x800);

    if (t199 != 65535) { NG(); } else { ; }
	
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

