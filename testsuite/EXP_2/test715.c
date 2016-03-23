
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

int32_t x4 = -1;
uint8_t x5 = 5U;
int32_t x15 = INT32_MIN;
uint64_t x20 = UINT64_MAX;
int8_t x22 = -9;
uint64_t x29 = 31447315584154LLU;
static int64_t x33 = 89LL;
int32_t t9 = 13036864;
int64_t x61 = 40572818LL;
int16_t x62 = INT16_MIN;
static uint16_t x63 = 7008U;
int16_t x64 = -40;
int8_t x68 = -6;
static int32_t t15 = -9;
int32_t x69 = 1;
int8_t x73 = -1;
volatile int64_t x84 = INT64_MIN;
int64_t x86 = 7421144LL;
int64_t x87 = -1LL;
uint32_t x90 = 59503U;
int16_t x94 = INT16_MIN;
int64_t x101 = 320LL;
int32_t t24 = 7388;
int32_t t25 = 2961;
static volatile uint64_t t26 = 4484LLU;
uint8_t x118 = UINT8_MAX;
int16_t x119 = -1;
uint16_t x121 = 0U;
static volatile int8_t x122 = INT8_MIN;
volatile int64_t t30 = -22305864530LL;
int64_t x134 = INT64_MAX;
static int8_t x135 = INT8_MIN;
int64_t x141 = -1LL;
static uint32_t x144 = 22402U;
int32_t x147 = INT32_MIN;
static int8_t x157 = -9;
volatile int16_t x164 = 28;
volatile int32_t t38 = -5982;
static volatile int64_t x175 = 25LL;
volatile uint64_t t40 = 69464LLU;
int64_t x179 = INT64_MIN;
uint64_t t42 = 388LLU;
volatile int32_t t43 = 206440;
static volatile int64_t x189 = -1498566066244LL;
static volatile uint64_t x205 = 55LLU;
int8_t x207 = -3;
volatile int32_t x210 = INT32_MIN;
uint8_t x212 = 1U;
volatile int32_t x218 = -1463965;
static volatile int8_t x221 = INT8_MAX;
int32_t x225 = -1;
int32_t x228 = 9;
static int32_t t52 = -651;
uint32_t x238 = 1U;
int32_t x239 = INT32_MIN;
uint64_t x245 = 31888LLU;
static volatile uint64_t x258 = 7LLU;
int32_t t57 = 1;
int32_t x262 = -1;
static volatile uint64_t x263 = 101717400LLU;
int64_t x264 = 127882573412344LL;
volatile int64_t t58 = 199442415607696770LL;
uint32_t x265 = 19005U;
uint16_t x266 = 7490U;
volatile int32_t t59 = 128343;
static int32_t x270 = -23557772;
int64_t x272 = INT64_MIN;
volatile int64_t x273 = -10480687305544285LL;
uint16_t x285 = UINT16_MAX;
uint32_t x286 = 403148U;
uint16_t x300 = 1U;
int8_t x306 = INT8_MIN;
volatile int8_t x308 = 3;
volatile int32_t t68 = -923703;
volatile int32_t t70 = 968;
uint16_t x321 = 3691U;
int8_t x322 = INT8_MAX;
int8_t x325 = INT8_MIN;
int16_t x326 = -1;
static uint8_t x328 = 1U;
uint16_t x330 = 9762U;
int16_t x331 = 308;
volatile int64_t t74 = INT64_MIN;
uint8_t x335 = UINT8_MAX;
int32_t t76 = -667233;
static uint8_t x343 = 78U;
uint16_t x344 = 73U;
uint8_t x345 = UINT8_MAX;
volatile int32_t t78 = -5042251;
uint32_t t79 = 477U;
uint16_t x355 = UINT16_MAX;
int16_t x357 = INT16_MAX;
int32_t t82 = -4296373;
volatile int16_t x365 = INT16_MAX;
volatile uint64_t t83 = 28780360043504LLU;
uint64_t x369 = UINT64_MAX;
uint64_t x372 = 305199643LLU;
int32_t x375 = -594;
uint32_t x376 = 15661306U;
uint32_t t85 = 8409U;
int64_t x381 = INT64_MAX;
static int16_t x382 = INT16_MIN;
volatile uint64_t x388 = 5194LLU;
volatile uint64_t t88 = 8123295951LLU;
static int64_t x389 = 43LL;
int64_t x390 = -9349332896743190LL;
int8_t x391 = -10;
volatile int8_t x393 = INT8_MAX;
static int32_t x395 = INT32_MIN;
volatile int64_t x396 = -55606899LL;
int8_t x398 = INT8_MIN;
volatile int32_t t91 = -420;
int8_t x402 = INT8_MIN;
int16_t x403 = INT16_MIN;
volatile int32_t t92 = -273151;
int64_t x407 = INT64_MAX;
volatile int16_t x411 = INT16_MIN;
volatile int16_t x412 = 3213;
static int16_t x418 = INT16_MIN;
static int64_t x425 = INT64_MAX;
uint64_t x427 = 1166246125491LLU;
static volatile int32_t t98 = 1;
int8_t x436 = -1;
int64_t x443 = 369258LL;
int32_t t102 = -128278;
int32_t x446 = -933;
int64_t x449 = 913545LL;
uint64_t x451 = 1LLU;
int64_t x463 = INT64_MIN;
volatile int64_t t108 = -17323119021415898LL;
volatile uint32_t x477 = UINT32_MAX;
int8_t x483 = -1;
volatile uint32_t t113 = 189U;
volatile int64_t t117 = 19938LL;
uint32_t x508 = 466834U;
uint8_t x510 = 6U;
static int64_t x515 = -103LL;
static int64_t x516 = INT64_MIN;
int64_t x519 = INT64_MIN;
int16_t x520 = INT16_MAX;
int64_t x522 = INT64_MIN;
int32_t t124 = -100195;
static int64_t x537 = INT64_MAX;
int16_t x538 = 1;
volatile uint8_t x542 = 50U;
int32_t x546 = 2;
static int64_t x552 = INT64_MIN;
int8_t x553 = 0;
int32_t t129 = -3614954;
static volatile int64_t x566 = INT64_MIN;
int64_t x568 = -1LL;
int32_t t134 = 819;
uint8_t x591 = 1U;
static uint8_t x593 = 2U;
static int32_t t138 = -499;
static int64_t x600 = INT64_MIN;
volatile int16_t x603 = 10370;
volatile int32_t t141 = -3284062;
int32_t x613 = INT32_MAX;
int64_t x622 = INT64_MIN;
static int8_t x625 = INT8_MAX;
int8_t x638 = 41;
static uint64_t x642 = 1983157688LLU;
int32_t x647 = -1;
int32_t x651 = -1;
static volatile int64_t t152 = -56520479411142LL;
int8_t x657 = INT8_MIN;
int64_t x663 = INT64_MIN;
uint64_t x671 = 61059816102LLU;
int64_t x674 = INT64_MAX;
uint64_t x675 = 29388542245466LLU;
static int8_t x681 = -14;
int32_t x683 = INT32_MAX;
static int64_t t159 = -3477801176LL;
uint16_t x686 = 0U;
volatile int32_t t160 = 1342943;
volatile int16_t x690 = -1;
volatile uint8_t x695 = UINT8_MAX;
int32_t x696 = -1;
static int64_t x698 = -1LL;
int8_t x700 = INT8_MAX;
uint64_t x702 = 5654862LLU;
volatile int64_t t165 = 69024LL;
int16_t x710 = INT16_MIN;
static int32_t x717 = INT32_MIN;
static int8_t x724 = INT8_MIN;
volatile int16_t x727 = INT16_MAX;
static volatile uint16_t x737 = 8U;
uint8_t x741 = 5U;
volatile int32_t t173 = 199688930;
int32_t x745 = 340623202;
uint32_t x748 = 3796U;
int16_t x754 = INT16_MIN;
int32_t x761 = INT32_MIN;
int64_t x767 = -15347711LL;
int16_t x778 = INT16_MAX;
int32_t x782 = INT32_MIN;
uint32_t t182 = 21494234U;
int64_t x790 = INT64_MIN;
uint64_t x791 = UINT64_MAX;
volatile int32_t t184 = 3746;
int8_t x798 = INT8_MAX;
volatile int8_t x799 = INT8_MIN;
int32_t t187 = -139189782;
static volatile int32_t t188 = 39;
static uint64_t x810 = UINT64_MAX;
int32_t x816 = -1;
int32_t x818 = INT32_MAX;
int8_t x823 = -1;
volatile int32_t t192 = INT32_MIN;
uint16_t x829 = 894U;
volatile int64_t x832 = INT64_MIN;
static volatile int64_t t194 = INT64_MIN;
volatile int16_t x836 = 63;
int8_t x839 = -22;
int64_t t196 = -567660018712535121LL;
int8_t x844 = 5;


void f0(void) {
    	int64_t x1 = -20911LL;
	int8_t x2 = INT8_MIN;
	static int64_t x3 = -1LL;
	int32_t t0 = -67046627;

    t0 = ((x1<=(x2/x3))+x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MIN;
	uint64_t x7 = 528018412338822LLU;
	uint32_t x8 = UINT32_MAX;
	uint32_t t1 = 16911U;

    t1 = ((x5<=(x6/x7))+x8);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	int8_t x10 = INT8_MIN;
	volatile uint8_t x11 = 126U;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = 20LL;

    t2 = ((x9<=(x10/x11))+x12);

    if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MAX;
	volatile uint64_t x16 = 7306LLU;
	volatile uint64_t t3 = 1210648496719LLU;

    t3 = ((x13<=(x14/x15))+x16);

    if (t3 != 7307LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 6U;
	int64_t x18 = INT64_MIN;
	uint8_t x19 = 29U;
	volatile uint64_t t4 = UINT64_MAX;

    t4 = ((x17<=(x18/x19))+x20);

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	static int64_t x23 = INT64_MIN;
	uint32_t x24 = 64U;
	volatile uint32_t t5 = 6041U;

    t5 = ((x21<=(x22/x23))+x24);

    if (t5 != 65U) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x25 = -1LL;
	int64_t x26 = INT64_MIN;
	uint32_t x27 = 25082U;
	int8_t x28 = -51;
	int32_t t6 = -15;

    t6 = ((x25<=(x26/x27))+x28);

    if (t6 != -51) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = -1;
	uint16_t x31 = 2173U;
	uint16_t x32 = UINT16_MAX;
	static int32_t t7 = -8;

    t7 = ((x29<=(x30/x31))+x32);

    if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x34 = INT32_MIN;
	volatile int16_t x35 = INT16_MAX;
	uint64_t x36 = 50315199898331LLU;
	uint64_t t8 = 143745260LLU;

    t8 = ((x33<=(x34/x35))+x36);

    if (t8 != 50315199898331LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = -5;
	uint64_t x42 = UINT64_MAX;
	int16_t x43 = INT16_MAX;
	int8_t x44 = -1;

    t9 = ((x41<=(x42/x43))+x44);

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x45 = 58509877185941328LL;
	int64_t x46 = INT64_MIN;
	static int16_t x47 = INT16_MAX;
	static uint16_t x48 = UINT16_MAX;
	volatile int32_t t10 = -1;

    t10 = ((x45<=(x46/x47))+x48);

    if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x49 = 271U;
	int8_t x50 = INT8_MIN;
	int64_t x51 = -1LL;
	int64_t x52 = 71249355949011431LL;
	volatile int64_t t11 = -136458920180916097LL;

    t11 = ((x49<=(x50/x51))+x52);

    if (t11 != 71249355949011431LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x53 = INT32_MAX;
	uint64_t x54 = UINT64_MAX;
	volatile int16_t x55 = 239;
	static int32_t x56 = INT32_MIN;
	volatile int32_t t12 = -140743;

    t12 = ((x53<=(x54/x55))+x56);

    if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x57 = UINT16_MAX;
	int8_t x58 = INT8_MIN;
	static volatile uint64_t x59 = 4058245446293690LLU;
	uint8_t x60 = 1U;
	volatile int32_t t13 = -786577;

    t13 = ((x57<=(x58/x59))+x60);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t t14 = 60486926;

    t14 = ((x61<=(x62/x63))+x64);

    if (t14 != -40) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x65 = -1;
	int32_t x66 = INT32_MAX;
	int64_t x67 = INT64_MAX;

    t15 = ((x65<=(x66/x67))+x68);

    if (t15 != -5) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x70 = 6957064U;
	int8_t x71 = INT8_MIN;
	static int8_t x72 = INT8_MIN;
	static volatile int32_t t16 = -119963;

    t16 = ((x69<=(x70/x71))+x72);

    if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x74 = 0U;
	int32_t x75 = INT32_MAX;
	volatile uint16_t x76 = 17U;
	int32_t t17 = -14;

    t17 = ((x73<=(x74/x75))+x76);

    if (t17 != 18) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = INT16_MAX;
	int16_t x78 = 0;
	int64_t x79 = INT64_MAX;
	int32_t x80 = INT32_MIN;
	int32_t t18 = INT32_MIN;

    t18 = ((x77<=(x78/x79))+x80);

    if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x81 = -1LL;
	static int32_t x82 = 322007502;
	static int16_t x83 = -424;
	int64_t t19 = INT64_MIN;

    t19 = ((x81<=(x82/x83))+x84);

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = -10310365139927806LL;
	volatile uint8_t x88 = UINT8_MAX;
	volatile int32_t t20 = -236;

    t20 = ((x85<=(x86/x87))+x88);

    if (t20 != 256) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x89 = 2U;
	int32_t x91 = -1;
	static volatile uint8_t x92 = 13U;
	volatile int32_t t21 = 19808;

    t21 = ((x89<=(x90/x91))+x92);

    if (t21 != 13) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x93 = 5738781U;
	int8_t x95 = 32;
	static volatile int64_t x96 = 55979446330LL;
	volatile int64_t t22 = 0LL;

    t22 = ((x93<=(x94/x95))+x96);

    if (t22 != 55979446331LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x102 = INT64_MIN;
	int32_t x103 = 854563;
	int64_t x104 = INT64_MIN;
	volatile int64_t t23 = INT64_MIN;

    t23 = ((x101<=(x102/x103))+x104);

    if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = -1;
	volatile int16_t x106 = INT16_MIN;
	int64_t x107 = INT64_MAX;
	uint8_t x108 = 0U;

    t24 = ((x105<=(x106/x107))+x108);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = -1LL;
	int8_t x110 = INT8_MIN;
	uint32_t x111 = 309U;
	static int16_t x112 = INT16_MAX;

    t25 = ((x109<=(x110/x111))+x112);

    if (t25 != 32768) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x113 = -1;
	int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MIN;
	volatile uint64_t x116 = 48281092LLU;

    t26 = ((x113<=(x114/x115))+x116);

    if (t26 != 48281093LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x117 = 7U;
	static volatile uint8_t x120 = UINT8_MAX;
	volatile int32_t t27 = -61787295;

    t27 = ((x117<=(x118/x119))+x120);

    if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x123 = INT16_MIN;
	int16_t x124 = INT16_MIN;
	int32_t t28 = -2672;

    t28 = ((x121<=(x122/x123))+x124);

    if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x125 = 29997928U;
	int8_t x126 = -14;
	int64_t x127 = -98452596LL;
	int64_t x128 = INT64_MIN;
	volatile int64_t t29 = INT64_MIN;

    t29 = ((x125<=(x126/x127))+x128);

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x129 = UINT64_MAX;
	int64_t x130 = INT64_MIN;
	static int16_t x131 = INT16_MIN;
	int64_t x132 = -1LL;

    t30 = ((x129<=(x130/x131))+x132);

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x133 = -1;
	int64_t x136 = -29LL;
	static volatile int64_t t31 = -89669LL;

    t31 = ((x133<=(x134/x135))+x136);

    if (t31 != -29LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x137 = -1;
	int8_t x138 = 0;
	int8_t x139 = INT8_MIN;
	volatile uint64_t x140 = 30990LLU;
	volatile uint64_t t32 = 9352LLU;

    t32 = ((x137<=(x138/x139))+x140);

    if (t32 != 30991LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x142 = 216519669955900LL;
	static int8_t x143 = INT8_MIN;
	uint32_t t33 = 24U;

    t33 = ((x141<=(x142/x143))+x144);

    if (t33 != 22402U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x145 = UINT64_MAX;
	uint16_t x146 = UINT16_MAX;
	int64_t x148 = -1LL;
	volatile int64_t t34 = 22465912685846769LL;

    t34 = ((x145<=(x146/x147))+x148);

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x149 = UINT64_MAX;
	uint8_t x150 = UINT8_MAX;
	volatile int64_t x151 = INT64_MIN;
	static uint16_t x152 = 10U;
	int32_t t35 = -412600646;

    t35 = ((x149<=(x150/x151))+x152);

    if (t35 != 10) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x153 = -128287LL;
	int16_t x154 = -3333;
	volatile int32_t x155 = 1;
	uint16_t x156 = 1365U;
	int32_t t36 = -15802;

    t36 = ((x153<=(x154/x155))+x156);

    if (t36 != 1366) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x158 = INT64_MAX;
	uint64_t x159 = 11LLU;
	uint8_t x160 = 16U;
	static int32_t t37 = -243213199;

    t37 = ((x157<=(x158/x159))+x160);

    if (t37 != 16) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x161 = INT16_MIN;
	uint32_t x162 = 0U;
	int32_t x163 = INT32_MAX;

    t38 = ((x161<=(x162/x163))+x164);

    if (t38 != 28) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x169 = -3;
	int64_t x170 = -1065899376LL;
	int32_t x171 = -4;
	volatile int32_t x172 = INT32_MIN;
	volatile int32_t t39 = -11;

    t39 = ((x169<=(x170/x171))+x172);

    if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x173 = INT16_MAX;
	static int16_t x174 = -1;
	uint64_t x176 = 282576134884LLU;

    t40 = ((x173<=(x174/x175))+x176);

    if (t40 != 282576134884LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x177 = 7458U;
	static uint32_t x178 = 4934199U;
	static uint64_t x180 = 1044990105905LLU;
	uint64_t t41 = 384242472402229LLU;

    t41 = ((x177<=(x178/x179))+x180);

    if (t41 != 1044990105905LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x181 = INT32_MIN;
	uint16_t x182 = 16019U;
	volatile int16_t x183 = INT16_MIN;
	uint64_t x184 = 287458845423098374LLU;

    t42 = ((x181<=(x182/x183))+x184);

    if (t42 != 287458845423098375LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x185 = -1;
	int16_t x186 = INT16_MIN;
	int16_t x187 = INT16_MAX;
	uint16_t x188 = UINT16_MAX;

    t43 = ((x185<=(x186/x187))+x188);

    if (t43 != 65536) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x190 = INT64_MAX;
	int8_t x191 = INT8_MIN;
	volatile uint16_t x192 = 1U;
	int32_t t44 = 1307;

    t44 = ((x189<=(x190/x191))+x192);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x201 = -12367LL;
	uint16_t x202 = 3U;
	int32_t x203 = INT32_MIN;
	uint64_t x204 = 3122LLU;
	volatile uint64_t t45 = 21338460LLU;

    t45 = ((x201<=(x202/x203))+x204);

    if (t45 != 3123LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x206 = INT32_MIN;
	int8_t x208 = INT8_MIN;
	int32_t t46 = -706901;

    t46 = ((x205<=(x206/x207))+x208);

    if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x209 = UINT64_MAX;
	int16_t x211 = -593;
	int32_t t47 = -3;

    t47 = ((x209<=(x210/x211))+x212);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x217 = -1443493692527264149LL;
	uint8_t x219 = 51U;
	volatile int16_t x220 = INT16_MIN;
	static int32_t t48 = -152002;

    t48 = ((x217<=(x218/x219))+x220);

    if (t48 != -32767) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x222 = 0U;
	int8_t x223 = INT8_MAX;
	volatile int16_t x224 = -9;
	int32_t t49 = 8091434;

    t49 = ((x221<=(x222/x223))+x224);

    if (t49 != -9) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x226 = -8;
	int8_t x227 = INT8_MIN;
	volatile int32_t t50 = 8985;

    t50 = ((x225<=(x226/x227))+x228);

    if (t50 != 10) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x229 = INT8_MIN;
	static int16_t x230 = INT16_MIN;
	volatile int32_t x231 = 104995876;
	int8_t x232 = -1;
	int32_t t51 = -5;

    t51 = ((x229<=(x230/x231))+x232);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x233 = INT32_MIN;
	int64_t x234 = -1LL;
	int8_t x235 = -25;
	int8_t x236 = 0;

    t52 = ((x233<=(x234/x235))+x236);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x237 = INT16_MAX;
	uint16_t x240 = 3573U;
	int32_t t53 = 515983332;

    t53 = ((x237<=(x238/x239))+x240);

    if (t53 != 3573) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x241 = INT8_MAX;
	static volatile int8_t x242 = 1;
	static int64_t x243 = INT64_MIN;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t54 = UINT64_MAX;

    t54 = ((x241<=(x242/x243))+x244);

    if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x246 = INT16_MIN;
	uint8_t x247 = UINT8_MAX;
	int16_t x248 = INT16_MAX;
	volatile int32_t t55 = -7;

    t55 = ((x245<=(x246/x247))+x248);

    if (t55 != 32768) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x253 = 1;
	static int64_t x254 = INT64_MAX;
	int8_t x255 = -1;
	int32_t x256 = -1;
	volatile int32_t t56 = -147039750;

    t56 = ((x253<=(x254/x255))+x256);

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x257 = -1;
	volatile uint32_t x259 = 112445237U;
	volatile int8_t x260 = -1;

    t57 = ((x257<=(x258/x259))+x260);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x261 = UINT8_MAX;

    t58 = ((x261<=(x262/x263))+x264);

    if (t58 != 127882573412345LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x267 = INT64_MAX;
	uint8_t x268 = 5U;

    t59 = ((x265<=(x266/x267))+x268);

    if (t59 != 5) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x269 = -1LL;
	static uint32_t x271 = 65103821U;
	int64_t t60 = -16724531153699LL;

    t60 = ((x269<=(x270/x271))+x272);

    if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x274 = 420070708U;
	volatile int64_t x275 = INT64_MAX;
	static uint64_t x276 = UINT64_MAX;
	volatile uint64_t t61 = 1110414225780078LLU;

    t61 = ((x273<=(x274/x275))+x276);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x277 = INT32_MAX;
	int16_t x278 = 6325;
	uint8_t x279 = 13U;
	int32_t x280 = INT32_MIN;
	volatile int32_t t62 = INT32_MIN;

    t62 = ((x277<=(x278/x279))+x280);

    if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x281 = -45;
	uint8_t x282 = 16U;
	uint8_t x283 = UINT8_MAX;
	int8_t x284 = INT8_MIN;
	static volatile int32_t t63 = -252532790;

    t63 = ((x281<=(x282/x283))+x284);

    if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x287 = INT64_MAX;
	volatile int64_t x288 = INT64_MAX;
	volatile int64_t t64 = INT64_MAX;

    t64 = ((x285<=(x286/x287))+x288);

    if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x293 = -1LL;
	uint32_t x294 = UINT32_MAX;
	uint8_t x295 = UINT8_MAX;
	uint16_t x296 = 43U;
	volatile int32_t t65 = 903196;

    t65 = ((x293<=(x294/x295))+x296);

    if (t65 != 44) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x297 = INT8_MIN;
	int16_t x298 = INT16_MAX;
	uint32_t x299 = UINT32_MAX;
	volatile int32_t t66 = -163976571;

    t66 = ((x297<=(x298/x299))+x300);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x301 = 322U;
	uint16_t x302 = UINT16_MAX;
	uint16_t x303 = 94U;
	static int8_t x304 = INT8_MAX;
	int32_t t67 = 82;

    t67 = ((x301<=(x302/x303))+x304);

    if (t67 != 128) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x305 = UINT64_MAX;
	uint64_t x307 = 31LLU;

    t68 = ((x305<=(x306/x307))+x308);

    if (t68 != 3) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x309 = INT16_MIN;
	uint32_t x310 = UINT32_MAX;
	int64_t x311 = INT64_MIN;
	uint8_t x312 = UINT8_MAX;
	static volatile int32_t t69 = 999035;

    t69 = ((x309<=(x310/x311))+x312);

    if (t69 != 256) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x313 = -1;
	volatile uint64_t x314 = 2112259401852105LLU;
	static int32_t x315 = 471770485;
	int8_t x316 = -1;

    t70 = ((x313<=(x314/x315))+x316);

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x317 = -1;
	int16_t x318 = INT16_MIN;
	int32_t x319 = 22650461;
	int16_t x320 = 849;
	int32_t t71 = 22870;

    t71 = ((x317<=(x318/x319))+x320);

    if (t71 != 850) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x323 = -1;
	int64_t x324 = 1580821LL;
	volatile int64_t t72 = -2670260767747180402LL;

    t72 = ((x321<=(x322/x323))+x324);

    if (t72 != 1580821LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x327 = INT16_MAX;
	volatile int32_t t73 = 883309;

    t73 = ((x325<=(x326/x327))+x328);

    if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x329 = UINT16_MAX;
	int64_t x332 = INT64_MIN;

    t74 = ((x329<=(x330/x331))+x332);

    if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x333 = 55U;
	static int16_t x334 = INT16_MIN;
	volatile int16_t x336 = INT16_MIN;
	static int32_t t75 = -1;

    t75 = ((x333<=(x334/x335))+x336);

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x337 = -1;
	int64_t x338 = INT64_MIN;
	static int16_t x339 = 20;
	int16_t x340 = -144;

    t76 = ((x337<=(x338/x339))+x340);

    if (t76 != -144) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x341 = -36987462484084LL;
	int16_t x342 = -1;
	volatile int32_t t77 = 35753435;

    t77 = ((x341<=(x342/x343))+x344);

    if (t77 != 74) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x346 = -1;
	uint64_t x347 = UINT64_MAX;
	int16_t x348 = -4046;

    t78 = ((x345<=(x346/x347))+x348);

    if (t78 != -4046) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x349 = UINT16_MAX;
	volatile int8_t x350 = 7;
	int64_t x351 = -4LL;
	uint32_t x352 = 26U;

    t79 = ((x349<=(x350/x351))+x352);

    if (t79 != 26U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x353 = -1;
	int8_t x354 = 18;
	volatile int64_t x356 = -1LL;
	static volatile int64_t t80 = -1427LL;

    t80 = ((x353<=(x354/x355))+x356);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x358 = 40U;
	static volatile uint32_t x359 = 55U;
	volatile int64_t x360 = -1LL;
	volatile int64_t t81 = 6596542399121LL;

    t81 = ((x357<=(x358/x359))+x360);

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x361 = INT64_MAX;
	int16_t x362 = -1;
	uint32_t x363 = 3101634U;
	static volatile int32_t x364 = -2;

    t82 = ((x361<=(x362/x363))+x364);

    if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x366 = 852755355LL;
	static uint8_t x367 = 20U;
	uint64_t x368 = 50LLU;

    t83 = ((x365<=(x366/x367))+x368);

    if (t83 != 51LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x370 = 1U;
	volatile int16_t x371 = -1;
	volatile uint64_t t84 = 487690414086850LLU;

    t84 = ((x369<=(x370/x371))+x372);

    if (t84 != 305199644LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x373 = 1U;
	int32_t x374 = 385;

    t85 = ((x373<=(x374/x375))+x376);

    if (t85 != 15661306U) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x377 = INT8_MIN;
	volatile int32_t x378 = -711821;
	uint8_t x379 = 5U;
	static int64_t x380 = INT64_MIN;
	volatile int64_t t86 = INT64_MIN;

    t86 = ((x377<=(x378/x379))+x380);

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x383 = INT16_MIN;
	uint32_t x384 = 10499U;
	uint32_t t87 = 1837852179U;

    t87 = ((x381<=(x382/x383))+x384);

    if (t87 != 10499U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x385 = INT64_MAX;
	int8_t x386 = INT8_MIN;
	static uint32_t x387 = UINT32_MAX;

    t88 = ((x385<=(x386/x387))+x388);

    if (t88 != 5194LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x392 = 0U;
	int32_t t89 = 101024;

    t89 = ((x389<=(x390/x391))+x392);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x394 = UINT8_MAX;
	volatile int64_t t90 = 1768LL;

    t90 = ((x393<=(x394/x395))+x396);

    if (t90 != -55606899LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x397 = 245;
	volatile int8_t x399 = -1;
	int16_t x400 = INT16_MAX;

    t91 = ((x397<=(x398/x399))+x400);

    if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x401 = -1;
	uint16_t x404 = 12673U;

    t92 = ((x401<=(x402/x403))+x404);

    if (t92 != 12674) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x405 = INT64_MAX;
	volatile int16_t x406 = INT16_MIN;
	volatile int16_t x408 = -66;
	volatile int32_t t93 = -1737;

    t93 = ((x405<=(x406/x407))+x408);

    if (t93 != -66) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x409 = -1;
	static int32_t x410 = INT32_MIN;
	volatile int32_t t94 = -116060;

    t94 = ((x409<=(x410/x411))+x412);

    if (t94 != 3214) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x413 = 2U;
	int8_t x414 = -29;
	int32_t x415 = -991;
	uint16_t x416 = 2849U;
	int32_t t95 = 27500693;

    t95 = ((x413<=(x414/x415))+x416);

    if (t95 != 2849) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x417 = -1;
	int8_t x419 = -3;
	int32_t x420 = -83511588;
	static volatile int32_t t96 = -33597;

    t96 = ((x417<=(x418/x419))+x420);

    if (t96 != -83511587) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x421 = -832506;
	uint16_t x422 = 74U;
	static int32_t x423 = INT32_MAX;
	volatile int16_t x424 = INT16_MAX;
	volatile int32_t t97 = 3423687;

    t97 = ((x421<=(x422/x423))+x424);

    if (t97 != 32768) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x426 = INT32_MIN;
	int8_t x428 = INT8_MAX;

    t98 = ((x425<=(x426/x427))+x428);

    if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x429 = 81U;
	int16_t x430 = 148;
	int8_t x431 = -1;
	static int64_t x432 = INT64_MIN;
	volatile int64_t t99 = INT64_MIN;

    t99 = ((x429<=(x430/x431))+x432);

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x433 = 27U;
	volatile int16_t x434 = INT16_MAX;
	static int8_t x435 = -1;
	int32_t t100 = -1;

    t100 = ((x433<=(x434/x435))+x436);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x437 = INT16_MIN;
	uint32_t x438 = UINT32_MAX;
	static volatile int64_t x439 = INT64_MIN;
	int32_t x440 = INT32_MIN;
	int32_t t101 = 3022;

    t101 = ((x437<=(x438/x439))+x440);

    if (t101 != -2147483647) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x441 = 20U;
	uint16_t x442 = 21U;
	static int16_t x444 = INT16_MAX;

    t102 = ((x441<=(x442/x443))+x444);

    if (t102 != 32767) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x445 = INT32_MAX;
	int16_t x447 = INT16_MAX;
	static uint16_t x448 = 218U;
	static volatile int32_t t103 = -51879671;

    t103 = ((x445<=(x446/x447))+x448);

    if (t103 != 218) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x450 = -902LL;
	int8_t x452 = INT8_MIN;
	volatile int32_t t104 = -82552;

    t104 = ((x449<=(x450/x451))+x452);

    if (t104 != -127) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x453 = INT16_MIN;
	int64_t x454 = INT64_MIN;
	volatile int16_t x455 = INT16_MIN;
	uint8_t x456 = 0U;
	volatile int32_t t105 = -605;

    t105 = ((x453<=(x454/x455))+x456);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x457 = 52U;
	static int8_t x458 = INT8_MIN;
	uint32_t x459 = UINT32_MAX;
	volatile int16_t x460 = INT16_MIN;
	int32_t t106 = -15291942;

    t106 = ((x457<=(x458/x459))+x460);

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x461 = 13U;
	static uint32_t x462 = UINT32_MAX;
	int64_t x464 = -1LL;
	volatile int64_t t107 = 313LL;

    t107 = ((x461<=(x462/x463))+x464);

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x465 = -1;
	static int32_t x466 = INT32_MIN;
	int8_t x467 = INT8_MIN;
	volatile int64_t x468 = INT64_MIN;

    t108 = ((x465<=(x466/x467))+x468);

    if (t108 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x469 = INT32_MAX;
	volatile int32_t x470 = 1;
	int32_t x471 = -59;
	volatile uint16_t x472 = 4U;
	int32_t t109 = -557;

    t109 = ((x469<=(x470/x471))+x472);

    if (t109 != 4) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x473 = -1;
	int8_t x474 = INT8_MAX;
	volatile uint64_t x475 = UINT64_MAX;
	int32_t x476 = -1;
	int32_t t110 = 31;

    t110 = ((x473<=(x474/x475))+x476);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x478 = INT16_MIN;
	static int16_t x479 = 1;
	static volatile uint8_t x480 = 10U;
	static volatile int32_t t111 = 4371921;

    t111 = ((x477<=(x478/x479))+x480);

    if (t111 != 10) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x481 = 87U;
	uint16_t x482 = 3U;
	int32_t x484 = INT32_MIN;
	int32_t t112 = -16227;

    t112 = ((x481<=(x482/x483))+x484);

    if (t112 != -2147483647) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x485 = -1332379832688LL;
	int32_t x486 = INT32_MAX;
	volatile uint64_t x487 = 16576313440133LLU;
	volatile uint32_t x488 = 337U;

    t113 = ((x485<=(x486/x487))+x488);

    if (t113 != 337U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x489 = 4070;
	static volatile int8_t x490 = INT8_MIN;
	int64_t x491 = -1LL;
	int16_t x492 = INT16_MIN;
	int32_t t114 = 26;

    t114 = ((x489<=(x490/x491))+x492);

    if (t114 != -32768) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x493 = 3222U;
	int64_t x494 = INT64_MIN;
	static volatile uint64_t x495 = UINT64_MAX;
	uint32_t x496 = 5024015U;
	static uint32_t t115 = 58U;

    t115 = ((x493<=(x494/x495))+x496);

    if (t115 != 5024015U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x497 = 866U;
	int64_t x498 = -154888LL;
	int8_t x499 = INT8_MAX;
	int8_t x500 = -1;
	volatile int32_t t116 = -67;

    t116 = ((x497<=(x498/x499))+x500);

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x501 = 191339856LLU;
	int64_t x502 = 108606979721368022LL;
	static uint8_t x503 = UINT8_MAX;
	int64_t x504 = -39532763957414377LL;

    t117 = ((x501<=(x502/x503))+x504);

    if (t117 != -39532763957414376LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int64_t x505 = 18LL;
	uint32_t x506 = 206U;
	volatile uint16_t x507 = 3U;
	static volatile uint32_t t118 = 42U;

    t118 = ((x505<=(x506/x507))+x508);

    if (t118 != 466835U) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x509 = -1;
	int8_t x511 = 63;
	int32_t x512 = -973906;
	static volatile int32_t t119 = -2951745;

    t119 = ((x509<=(x510/x511))+x512);

    if (t119 != -973905) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x513 = 3;
	uint64_t x514 = 278957906078742960LLU;
	int64_t t120 = INT64_MIN;

    t120 = ((x513<=(x514/x515))+x516);

    if (t120 != INT64_MIN) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x517 = -1;
	int64_t x518 = -1LL;
	int32_t t121 = -209014593;

    t121 = ((x517<=(x518/x519))+x520);

    if (t121 != 32768) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x521 = -12;
	volatile uint8_t x523 = UINT8_MAX;
	volatile uint64_t x524 = UINT64_MAX;
	volatile uint64_t t122 = UINT64_MAX;

    t122 = ((x521<=(x522/x523))+x524);

    if (t122 != UINT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x529 = INT64_MAX;
	volatile uint8_t x530 = 0U;
	uint8_t x531 = 3U;
	static int32_t x532 = INT32_MIN;
	volatile int32_t t123 = INT32_MIN;

    t123 = ((x529<=(x530/x531))+x532);

    if (t123 != INT32_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x533 = -1LL;
	static volatile uint16_t x534 = UINT16_MAX;
	static uint16_t x535 = 11U;
	static int32_t x536 = -1;

    t124 = ((x533<=(x534/x535))+x536);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x539 = 36U;
	volatile uint32_t x540 = 393U;
	static volatile uint32_t t125 = 2U;

    t125 = ((x537<=(x538/x539))+x540);

    if (t125 != 393U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x541 = -7299811;
	int64_t x543 = -142651631682894383LL;
	int64_t x544 = -1LL;
	volatile int64_t t126 = -352443437872LL;

    t126 = ((x541<=(x542/x543))+x544);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x545 = INT8_MIN;
	int16_t x547 = INT16_MIN;
	uint16_t x548 = 7U;
	volatile int32_t t127 = -783;

    t127 = ((x545<=(x546/x547))+x548);

    if (t127 != 8) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x549 = 0;
	int8_t x550 = INT8_MIN;
	int64_t x551 = INT64_MAX;
	int64_t t128 = -113925337232LL;

    t128 = ((x549<=(x550/x551))+x552);

    if (t128 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x554 = UINT8_MAX;
	int32_t x555 = -1;
	volatile int8_t x556 = 20;

    t129 = ((x553<=(x554/x555))+x556);

    if (t129 != 20) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x557 = INT16_MIN;
	int64_t x558 = -1LL;
	static int16_t x559 = INT16_MIN;
	int16_t x560 = INT16_MIN;
	volatile int32_t t130 = -73451;

    t130 = ((x557<=(x558/x559))+x560);

    if (t130 != -32767) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x561 = 28463436LLU;
	static int16_t x562 = INT16_MIN;
	int8_t x563 = -25;
	static volatile int32_t x564 = INT32_MAX;
	volatile int32_t t131 = INT32_MAX;

    t131 = ((x561<=(x562/x563))+x564);

    if (t131 != INT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x565 = INT16_MAX;
	uint16_t x567 = 7U;
	volatile int64_t t132 = -13645320042LL;

    t132 = ((x565<=(x566/x567))+x568);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x573 = -1;
	uint8_t x574 = 58U;
	int16_t x575 = -1;
	int32_t x576 = INT32_MAX;
	int32_t t133 = INT32_MAX;

    t133 = ((x573<=(x574/x575))+x576);

    if (t133 != INT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x577 = UINT64_MAX;
	uint8_t x578 = UINT8_MAX;
	volatile int16_t x579 = -5406;
	int32_t x580 = -23;

    t134 = ((x577<=(x578/x579))+x580);

    if (t134 != -23) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x581 = INT32_MIN;
	static volatile uint64_t x582 = UINT64_MAX;
	static int8_t x583 = -1;
	int16_t x584 = INT16_MIN;
	static int32_t t135 = 6441;

    t135 = ((x581<=(x582/x583))+x584);

    if (t135 != -32768) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint64_t x585 = UINT64_MAX;
	static int64_t x586 = 201307775689LL;
	int32_t x587 = INT32_MIN;
	static int64_t x588 = INT64_MIN;
	static int64_t t136 = INT64_MIN;

    t136 = ((x585<=(x586/x587))+x588);

    if (t136 != INT64_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x589 = -104800965307538530LL;
	static int8_t x590 = -1;
	int8_t x592 = -4;
	volatile int32_t t137 = -2094591;

    t137 = ((x589<=(x590/x591))+x592);

    if (t137 != -3) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x594 = 2179U;
	int64_t x595 = INT64_MAX;
	int16_t x596 = -8;

    t138 = ((x593<=(x594/x595))+x596);

    if (t138 != -8) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x597 = 161LLU;
	int32_t x598 = INT32_MIN;
	uint8_t x599 = UINT8_MAX;
	volatile int64_t t139 = -13LL;

    t139 = ((x597<=(x598/x599))+x600);

    if (t139 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x601 = INT32_MIN;
	int64_t x602 = INT64_MAX;
	int32_t x604 = INT32_MIN;
	static volatile int32_t t140 = 58707;

    t140 = ((x601<=(x602/x603))+x604);

    if (t140 != -2147483647) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x605 = 0;
	volatile uint16_t x606 = UINT16_MAX;
	uint32_t x607 = UINT32_MAX;
	int8_t x608 = -1;

    t141 = ((x605<=(x606/x607))+x608);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x609 = -1;
	uint8_t x610 = 2U;
	static int16_t x611 = -3687;
	static int32_t x612 = INT32_MIN;
	int32_t t142 = 30012;

    t142 = ((x609<=(x610/x611))+x612);

    if (t142 != -2147483647) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x614 = INT16_MIN;
	volatile int16_t x615 = -226;
	int64_t x616 = 671945896170LL;
	volatile int64_t t143 = -2317LL;

    t143 = ((x613<=(x614/x615))+x616);

    if (t143 != 671945896170LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x617 = 1;
	int8_t x618 = INT8_MIN;
	int64_t x619 = INT64_MIN;
	volatile uint16_t x620 = UINT16_MAX;
	int32_t t144 = 2219;

    t144 = ((x617<=(x618/x619))+x620);

    if (t144 != 65535) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x621 = INT8_MAX;
	int16_t x623 = INT16_MAX;
	static uint32_t x624 = 420872U;
	static uint32_t t145 = 1U;

    t145 = ((x621<=(x622/x623))+x624);

    if (t145 != 420872U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x626 = 6U;
	uint8_t x627 = UINT8_MAX;
	uint32_t x628 = 100078356U;
	static uint32_t t146 = 52955169U;

    t146 = ((x625<=(x626/x627))+x628);

    if (t146 != 100078356U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x629 = -1003148568LL;
	uint32_t x630 = 252753U;
	static int8_t x631 = -2;
	int16_t x632 = -41;
	int32_t t147 = 123;

    t147 = ((x629<=(x630/x631))+x632);

    if (t147 != -40) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x633 = INT64_MIN;
	volatile int64_t x634 = 1946911837407043LL;
	int8_t x635 = -1;
	uint64_t x636 = UINT64_MAX;
	volatile uint64_t t148 = 236202970LLU;

    t148 = ((x633<=(x634/x635))+x636);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x637 = -3;
	static int32_t x639 = INT32_MIN;
	volatile int64_t x640 = 63426535879366945LL;
	volatile int64_t t149 = -1317786743859762311LL;

    t149 = ((x637<=(x638/x639))+x640);

    if (t149 != 63426535879366946LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x641 = -68042926812917564LL;
	uint64_t x643 = UINT64_MAX;
	uint8_t x644 = 0U;
	volatile int32_t t150 = 3008391;

    t150 = ((x641<=(x642/x643))+x644);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x645 = 34;
	static volatile int16_t x646 = INT16_MAX;
	int8_t x648 = INT8_MIN;
	volatile int32_t t151 = 1;

    t151 = ((x645<=(x646/x647))+x648);

    if (t151 != -128) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x649 = -1;
	int32_t x650 = 0;
	int64_t x652 = INT64_MIN;

    t152 = ((x649<=(x650/x651))+x652);

    if (t152 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x653 = 3U;
	uint8_t x654 = 13U;
	int64_t x655 = -12916054694LL;
	int64_t x656 = -1LL;
	int64_t t153 = 30573LL;

    t153 = ((x653<=(x654/x655))+x656);

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x658 = 9U;
	int32_t x659 = INT32_MIN;
	volatile int16_t x660 = 66;
	int32_t t154 = 99;

    t154 = ((x657<=(x658/x659))+x660);

    if (t154 != 67) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x661 = 85U;
	uint16_t x662 = 2U;
	int32_t x664 = INT32_MAX;
	static int32_t t155 = INT32_MAX;

    t155 = ((x661<=(x662/x663))+x664);

    if (t155 != INT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x669 = 17168565317316LLU;
	static int64_t x670 = -1LL;
	volatile int64_t x672 = -1LL;
	static volatile int64_t t156 = 3292989160432829211LL;

    t156 = ((x669<=(x670/x671))+x672);

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x673 = 5401U;
	int32_t x676 = -1;
	static int32_t t157 = -130978284;

    t157 = ((x673<=(x674/x675))+x676);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x677 = INT16_MIN;
	int64_t x678 = INT64_MIN;
	int16_t x679 = INT16_MIN;
	static int8_t x680 = INT8_MIN;
	volatile int32_t t158 = 7610;

    t158 = ((x677<=(x678/x679))+x680);

    if (t158 != -127) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x682 = -1097185248000908169LL;
	int64_t x684 = -1LL;

    t159 = ((x681<=(x682/x683))+x684);

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x685 = 17422337638976LL;
	static int8_t x687 = -8;
	int8_t x688 = INT8_MAX;

    t160 = ((x685<=(x686/x687))+x688);

    if (t160 != 127) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x689 = INT16_MIN;
	int32_t x691 = INT32_MIN;
	uint32_t x692 = 57U;
	static volatile uint32_t t161 = 413213230U;

    t161 = ((x689<=(x690/x691))+x692);

    if (t161 != 58U) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x693 = -1;
	static uint32_t x694 = 36U;
	int32_t t162 = 10;

    t162 = ((x693<=(x694/x695))+x696);

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x697 = -243;
	int16_t x699 = INT16_MIN;
	volatile int32_t t163 = -442301;

    t163 = ((x697<=(x698/x699))+x700);

    if (t163 != 128) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x701 = -732;
	uint16_t x703 = 3149U;
	int32_t x704 = INT32_MIN;
	volatile int32_t t164 = INT32_MIN;

    t164 = ((x701<=(x702/x703))+x704);

    if (t164 != INT32_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x705 = INT32_MIN;
	volatile int64_t x706 = INT64_MIN;
	static volatile int8_t x707 = INT8_MIN;
	volatile int64_t x708 = -1LL;

    t165 = ((x705<=(x706/x707))+x708);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x709 = 13U;
	static uint16_t x711 = 969U;
	volatile uint16_t x712 = UINT16_MAX;
	volatile int32_t t166 = 7;

    t166 = ((x709<=(x710/x711))+x712);

    if (t166 != 65536) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x713 = INT8_MAX;
	static int16_t x714 = -1;
	static uint32_t x715 = 6161U;
	int32_t x716 = 546816355;
	int32_t t167 = -60;

    t167 = ((x713<=(x714/x715))+x716);

    if (t167 != 546816356) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x718 = -1;
	int8_t x719 = INT8_MIN;
	uint64_t x720 = 16696802153750LLU;
	uint64_t t168 = 35LLU;

    t168 = ((x717<=(x718/x719))+x720);

    if (t168 != 16696802153751LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x721 = -7208399;
	int64_t x722 = -1LL;
	static volatile int32_t x723 = -79319;
	static volatile int32_t t169 = 155;

    t169 = ((x721<=(x722/x723))+x724);

    if (t169 != -127) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x725 = 6U;
	int32_t x726 = -6460704;
	int64_t x728 = INT64_MIN;
	volatile int64_t t170 = INT64_MIN;

    t170 = ((x725<=(x726/x727))+x728);

    if (t170 != INT64_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x729 = INT8_MAX;
	static volatile int16_t x730 = -1;
	int8_t x731 = -2;
	int64_t x732 = 816323829170LL;
	int64_t t171 = -226392LL;

    t171 = ((x729<=(x730/x731))+x732);

    if (t171 != 816323829170LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x738 = UINT64_MAX;
	int32_t x739 = 206722;
	volatile uint8_t x740 = 17U;
	volatile int32_t t172 = -7367326;

    t172 = ((x737<=(x738/x739))+x740);

    if (t172 != 18) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x742 = INT8_MIN;
	int8_t x743 = INT8_MAX;
	uint8_t x744 = UINT8_MAX;

    t173 = ((x741<=(x742/x743))+x744);

    if (t173 != 255) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x746 = 1;
	int16_t x747 = INT16_MAX;
	volatile uint32_t t174 = 24120U;

    t174 = ((x745<=(x746/x747))+x748);

    if (t174 != 3796U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x749 = 0U;
	int32_t x750 = 5;
	int64_t x751 = 690234LL;
	static volatile int64_t x752 = INT64_MIN;
	int64_t t175 = -119556093936454LL;

    t175 = ((x749<=(x750/x751))+x752);

    if (t175 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x753 = UINT32_MAX;
	int64_t x755 = INT64_MIN;
	int32_t x756 = -353;
	int32_t t176 = 1;

    t176 = ((x753<=(x754/x755))+x756);

    if (t176 != -353) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x757 = INT16_MIN;
	int32_t x758 = INT32_MIN;
	uint8_t x759 = 1U;
	uint32_t x760 = 135U;
	volatile uint32_t t177 = 840U;

    t177 = ((x757<=(x758/x759))+x760);

    if (t177 != 135U) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int8_t x762 = INT8_MIN;
	int32_t x763 = -1;
	static int8_t x764 = 29;
	int32_t t178 = -5366;

    t178 = ((x761<=(x762/x763))+x764);

    if (t178 != 30) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x765 = INT32_MIN;
	uint64_t x766 = UINT64_MAX;
	static int8_t x768 = INT8_MAX;
	int32_t t179 = 5475185;

    t179 = ((x765<=(x766/x767))+x768);

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x773 = 7601;
	int32_t x774 = -915105;
	int8_t x775 = INT8_MIN;
	static uint64_t x776 = UINT64_MAX;
	uint64_t t180 = UINT64_MAX;

    t180 = ((x773<=(x774/x775))+x776);

    if (t180 != UINT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x777 = INT16_MAX;
	uint64_t x779 = UINT64_MAX;
	volatile uint64_t x780 = UINT64_MAX;
	volatile uint64_t t181 = UINT64_MAX;

    t181 = ((x777<=(x778/x779))+x780);

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x781 = 8767U;
	int16_t x783 = 11;
	uint32_t x784 = 704641U;

    t182 = ((x781<=(x782/x783))+x784);

    if (t182 != 704641U) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x785 = 870LL;
	static uint16_t x786 = UINT16_MAX;
	uint64_t x787 = 1222735231950157697LLU;
	int64_t x788 = INT64_MIN;
	volatile int64_t t183 = INT64_MIN;

    t183 = ((x785<=(x786/x787))+x788);

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x789 = INT64_MAX;
	volatile int32_t x792 = -175870552;

    t184 = ((x789<=(x790/x791))+x792);

    if (t184 != -175870552) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x793 = 788231583647834979LLU;
	int32_t x794 = -445032;
	int8_t x795 = 1;
	static uint16_t x796 = 1U;
	int32_t t185 = 2;

    t185 = ((x793<=(x794/x795))+x796);

    if (t185 != 2) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x797 = INT8_MIN;
	volatile int64_t x800 = -5043078394LL;
	int64_t t186 = 387LL;

    t186 = ((x797<=(x798/x799))+x800);

    if (t186 != -5043078393LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x801 = INT16_MAX;
	int32_t x802 = 492;
	uint32_t x803 = UINT32_MAX;
	uint8_t x804 = 108U;

    t187 = ((x801<=(x802/x803))+x804);

    if (t187 != 108) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x805 = INT16_MIN;
	static int32_t x806 = 396573256;
	int64_t x807 = 262822817LL;
	volatile int8_t x808 = INT8_MAX;

    t188 = ((x805<=(x806/x807))+x808);

    if (t188 != 128) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x809 = UINT8_MAX;
	volatile int16_t x811 = 1658;
	uint32_t x812 = 35023U;
	uint32_t t189 = 40036438U;

    t189 = ((x809<=(x810/x811))+x812);

    if (t189 != 35024U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x813 = -9;
	uint64_t x814 = UINT64_MAX;
	volatile int16_t x815 = INT16_MIN;
	volatile int32_t t190 = 4;

    t190 = ((x813<=(x814/x815))+x816);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x817 = 60U;
	static int8_t x819 = INT8_MAX;
	int16_t x820 = 5;
	volatile int32_t t191 = -3;

    t191 = ((x817<=(x818/x819))+x820);

    if (t191 != 6) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x821 = 211;
	static volatile uint16_t x822 = 110U;
	int32_t x824 = INT32_MIN;

    t192 = ((x821<=(x822/x823))+x824);

    if (t192 != INT32_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x825 = -4;
	volatile uint8_t x826 = UINT8_MAX;
	int64_t x827 = -1LL;
	static volatile uint8_t x828 = 13U;
	volatile int32_t t193 = -797073377;

    t193 = ((x825<=(x826/x827))+x828);

    if (t193 != 13) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x830 = INT16_MIN;
	volatile int16_t x831 = INT16_MIN;

    t194 = ((x829<=(x830/x831))+x832);

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x833 = INT32_MIN;
	static volatile int64_t x834 = INT64_MIN;
	volatile int32_t x835 = INT32_MIN;
	volatile int32_t t195 = 244138790;

    t195 = ((x833<=(x834/x835))+x836);

    if (t195 != 64) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x837 = UINT8_MAX;
	int32_t x838 = INT32_MIN;
	int64_t x840 = -1LL;

    t196 = ((x837<=(x838/x839))+x840);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x841 = -1;
	int16_t x842 = -1;
	uint16_t x843 = 91U;
	volatile int32_t t197 = -193940961;

    t197 = ((x841<=(x842/x843))+x844);

    if (t197 != 6) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x845 = INT64_MIN;
	volatile uint8_t x846 = 1U;
	int16_t x847 = INT16_MAX;
	int8_t x848 = -1;
	static int32_t t198 = -9688;

    t198 = ((x845<=(x846/x847))+x848);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x849 = INT16_MIN;
	static volatile int32_t x850 = INT32_MIN;
	int32_t x851 = INT32_MIN;
	uint8_t x852 = 0U;
	int32_t t199 = 2958;

    t199 = ((x849<=(x850/x851))+x852);

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

