
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

uint8_t x2 = 8U;
int8_t x10 = -1;
int32_t t3 = 0;
int32_t t5 = -1165303;
uint16_t x36 = 200U;
int8_t x37 = 0;
int32_t t7 = 341684014;
int16_t x41 = -1;
int32_t x44 = INT32_MIN;
int64_t x48 = INT64_MIN;
volatile int16_t x51 = -752;
int64_t x53 = INT64_MAX;
static uint8_t x54 = 22U;
int32_t x55 = INT32_MIN;
volatile uint8_t x58 = UINT8_MAX;
int8_t x59 = INT8_MIN;
static int16_t x63 = -5684;
int32_t t13 = 14445;
int64_t x68 = INT64_MIN;
int64_t x71 = 73730181LL;
static int32_t x79 = INT32_MIN;
int32_t t17 = 422923;
uint64_t x82 = 1864533581453LLU;
int16_t x93 = 1;
volatile int64_t x96 = -1LL;
int64_t x99 = -567LL;
int8_t x113 = -1;
volatile int64_t x114 = INT64_MIN;
static int32_t x117 = 405376;
int16_t x129 = 1282;
uint16_t x132 = 15U;
static int16_t x139 = 1;
int16_t x140 = -93;
volatile int32_t t35 = -681043308;
uint64_t x155 = 384283795LLU;
uint16_t x156 = 148U;
int32_t x157 = INT32_MAX;
int32_t t38 = -10001;
volatile uint8_t x171 = 56U;
static volatile int8_t x178 = -2;
uint64_t x185 = 27927755345309713LLU;
static int32_t t44 = 1;
int8_t x198 = INT8_MAX;
static int32_t x204 = INT32_MAX;
volatile uint16_t x205 = UINT16_MAX;
volatile int64_t x208 = -1LL;
int16_t x209 = 407;
volatile int8_t x212 = 2;
int16_t x217 = -1;
volatile int16_t x219 = 0;
volatile int32_t t52 = -37477;
volatile int32_t t55 = 5;
int64_t x248 = -1LL;
int32_t x251 = INT32_MIN;
int8_t x264 = INT8_MIN;
volatile int32_t t60 = -10;
uint64_t x268 = UINT64_MAX;
static int64_t x269 = INT64_MAX;
volatile int32_t t62 = -68;
static int16_t x274 = INT16_MIN;
int32_t x277 = -288137414;
uint8_t x280 = 24U;
volatile int32_t t65 = -3093349;
static int32_t x292 = INT32_MIN;
uint32_t x294 = 904868706U;
static volatile int64_t x297 = INT64_MIN;
int8_t x300 = -1;
static volatile int64_t x303 = -25LL;
int64_t x304 = -1LL;
int8_t x308 = INT8_MAX;
static volatile int32_t t71 = 4732;
static int16_t x313 = 1439;
int32_t x316 = INT32_MIN;
int8_t x323 = INT8_MIN;
int64_t x326 = INT64_MIN;
uint8_t x329 = 0U;
int16_t x331 = -1;
volatile uint64_t x334 = UINT64_MAX;
static int64_t x335 = 1LL;
uint64_t x336 = 194LLU;
uint64_t x337 = 30565537016LLU;
volatile int32_t t80 = -473;
uint8_t x345 = UINT8_MAX;
int16_t x353 = INT16_MIN;
static volatile uint32_t x358 = 1101915U;
static uint32_t x363 = 395557U;
uint64_t x369 = UINT64_MAX;
static int16_t x372 = INT16_MIN;
volatile int8_t x387 = INT8_MAX;
volatile int16_t x389 = INT16_MIN;
int32_t t92 = 41560;
static int32_t t93 = -14829378;
int64_t x402 = -50719815979LL;
uint64_t x409 = UINT64_MAX;
static int8_t x411 = 5;
static int16_t x414 = INT16_MAX;
int16_t x416 = -1704;
static int8_t x422 = INT8_MIN;
int64_t x439 = -6655433350068662LL;
static uint32_t x440 = UINT32_MAX;
int64_t x443 = -2278LL;
uint64_t x444 = 123794476735LLU;
volatile int32_t t102 = -3;
int32_t x450 = INT32_MIN;
int32_t t104 = -8597;
int32_t x460 = INT32_MIN;
volatile int32_t t107 = -302617;
uint16_t x465 = UINT16_MAX;
volatile int8_t x471 = -1;
int32_t t109 = 1671842;
uint16_t x478 = UINT16_MAX;
volatile uint32_t x488 = 649967U;
volatile int32_t t114 = 2058;
int16_t x499 = INT16_MAX;
static int32_t x505 = 396141772;
uint16_t x506 = 3118U;
volatile int16_t x511 = 82;
int32_t t120 = 29;
volatile int32_t x521 = -1;
int8_t x522 = 60;
int16_t x530 = -14;
static int32_t t123 = -162067911;
volatile int64_t x541 = INT64_MIN;
uint32_t x545 = 3808U;
int32_t x551 = -1;
int8_t x553 = -3;
int16_t x554 = 1;
static volatile int32_t t130 = 6;
int32_t x561 = INT32_MAX;
int32_t t131 = -2;
int16_t x567 = 1;
int32_t x568 = INT32_MIN;
int32_t t134 = -949;
static volatile int32_t x578 = INT32_MIN;
volatile int32_t t137 = 57;
int32_t t138 = -577;
int32_t x597 = -1;
int8_t x598 = -1;
volatile int32_t x603 = 257;
int16_t x607 = -1;
int32_t x611 = -482590;
uint64_t x612 = 2044135621792LLU;
static volatile int32_t x616 = INT32_MIN;
uint16_t x625 = 27U;
int32_t t146 = -77888697;
int16_t x629 = -1634;
int8_t x632 = INT8_MIN;
static int64_t x643 = -1LL;
static volatile int64_t x649 = INT64_MIN;
int32_t x650 = -1;
static int8_t x651 = -24;
int32_t t152 = 216367167;
volatile int32_t t153 = 610413;
int32_t x659 = INT32_MIN;
int16_t x666 = INT16_MAX;
static int32_t x668 = INT32_MIN;
volatile int16_t x670 = INT16_MIN;
int32_t t157 = 643475;
static uint8_t x677 = UINT8_MAX;
uint32_t x694 = 406620615U;
int16_t x696 = -1;
volatile int64_t x698 = -149116527351532911LL;
int64_t x700 = INT64_MIN;
int32_t t167 = 123;
int8_t x730 = -1;
volatile int32_t t173 = 68110272;
static uint8_t x737 = 1U;
int8_t x746 = -1;
int32_t t176 = -54146;
volatile uint8_t x757 = UINT8_MAX;
volatile int32_t x762 = -1592397;
int64_t x768 = INT64_MAX;
int32_t t181 = -371856371;
uint8_t x786 = UINT8_MAX;
uint32_t x788 = 586102127U;
volatile int32_t t186 = 1845;
int32_t t187 = -36;
int32_t t188 = 87179;
static int64_t x805 = INT64_MIN;
int16_t x817 = INT16_MAX;
int16_t x828 = -1;
static int32_t x829 = INT32_MIN;
static uint16_t x836 = 20976U;
int32_t x840 = -2865892;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	uint32_t x3 = 12461618U;
	volatile uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = -89;

    t0 = (x1<=(x2>(x3/x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 3U;
	static int64_t x6 = -1LL;
	int16_t x7 = -889;
	volatile uint16_t x8 = 8U;
	int32_t t1 = 24797165;

    t1 = (x5<=(x6>(x7/x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	int8_t x11 = INT8_MAX;
	static int64_t x12 = INT64_MAX;
	volatile int32_t t2 = 30437566;

    t2 = (x9<=(x10>(x11/x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x17 = 8;
	int32_t x18 = 901449;
	static uint64_t x19 = 65416LLU;
	uint64_t x20 = 97558786904875LLU;

    t3 = (x17<=(x18>(x19/x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x25 = -1;
	volatile uint16_t x26 = 15U;
	volatile uint8_t x27 = 23U;
	uint64_t x28 = UINT64_MAX;
	volatile int32_t t4 = 448609701;

    t4 = (x25<=(x26>(x27/x28)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x29 = INT16_MIN;
	uint8_t x30 = UINT8_MAX;
	volatile uint64_t x31 = 63LLU;
	int64_t x32 = -1LL;

    t5 = (x29<=(x30>(x31/x32)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x33 = -1;
	uint8_t x34 = 88U;
	volatile uint64_t x35 = 25710LLU;
	volatile int32_t t6 = -10424531;

    t6 = (x33<=(x34>(x35/x36)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int16_t x38 = INT16_MIN;
	uint64_t x39 = 656617506952277673LLU;
	static int16_t x40 = INT16_MAX;

    t7 = (x37<=(x38>(x39/x40)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x42 = INT32_MAX;
	static int8_t x43 = -1;
	volatile int32_t t8 = -6351430;

    t8 = (x41<=(x42>(x43/x44)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = INT32_MIN;
	static int8_t x46 = -1;
	uint64_t x47 = 402560756LLU;
	int32_t t9 = -431904158;

    t9 = (x45<=(x46>(x47/x48)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x49 = INT8_MIN;
	uint8_t x50 = 2U;
	int32_t x52 = INT32_MAX;
	volatile int32_t t10 = 30034;

    t10 = (x49<=(x50>(x51/x52)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x56 = INT8_MAX;
	volatile int32_t t11 = 176053;

    t11 = (x53<=(x54>(x55/x56)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = INT64_MIN;
	uint8_t x60 = UINT8_MAX;
	int32_t t12 = 6751;

    t12 = (x57<=(x58>(x59/x60)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = -1;
	int32_t x62 = -1;
	static uint16_t x64 = 1146U;

    t13 = (x61<=(x62>(x63/x64)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x65 = UINT32_MAX;
	int64_t x66 = 29237236769173LL;
	int64_t x67 = -1LL;
	int32_t t14 = 11943206;

    t14 = (x65<=(x66>(x67/x68)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = -1;
	int16_t x70 = -1;
	uint32_t x72 = 2273233U;
	static volatile int32_t t15 = -6601;

    t15 = (x69<=(x70>(x71/x72)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x73 = 26U;
	int16_t x74 = -8139;
	int8_t x75 = 35;
	int16_t x76 = INT16_MIN;
	int32_t t16 = -100009;

    t16 = (x73<=(x74>(x75/x76)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x77 = 30951116532LLU;
	int8_t x78 = -1;
	int64_t x80 = -509921LL;

    t17 = (x77<=(x78>(x79/x80)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = INT64_MAX;
	uint64_t x83 = UINT64_MAX;
	static int32_t x84 = INT32_MAX;
	static int32_t t18 = 3177456;

    t18 = (x81<=(x82>(x83/x84)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = 0;
	int16_t x86 = -1;
	uint16_t x87 = 104U;
	static uint16_t x88 = 24U;
	volatile int32_t t19 = 8098275;

    t19 = (x85<=(x86>(x87/x88)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = INT16_MAX;
	int16_t x90 = 10;
	uint8_t x91 = UINT8_MAX;
	uint64_t x92 = 74LLU;
	static int32_t t20 = -1818;

    t20 = (x89<=(x90>(x91/x92)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x94 = UINT16_MAX;
	volatile uint8_t x95 = 75U;
	volatile int32_t t21 = -34;

    t21 = (x93<=(x94>(x95/x96)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x97 = -1;
	volatile uint16_t x98 = 13U;
	int32_t x100 = 144;
	int32_t t22 = -81973724;

    t22 = (x97<=(x98>(x99/x100)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x101 = 234282899U;
	static int8_t x102 = INT8_MIN;
	int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MAX;
	int32_t t23 = 21362;

    t23 = (x101<=(x102>(x103/x104)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = INT64_MIN;
	static int64_t x106 = -1827534426LL;
	uint32_t x107 = UINT32_MAX;
	volatile uint64_t x108 = 947919068LLU;
	int32_t t24 = 621281678;

    t24 = (x105<=(x106>(x107/x108)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x109 = 4;
	int16_t x110 = 16;
	static int8_t x111 = INT8_MAX;
	int8_t x112 = 8;
	static volatile int32_t t25 = 1237;

    t25 = (x109<=(x110>(x111/x112)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x115 = INT32_MIN;
	int32_t x116 = INT32_MIN;
	volatile int32_t t26 = 504;

    t26 = (x113<=(x114>(x115/x116)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x118 = INT16_MAX;
	volatile int16_t x119 = INT16_MIN;
	volatile uint8_t x120 = UINT8_MAX;
	volatile int32_t t27 = -44728;

    t27 = (x117<=(x118>(x119/x120)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x121 = 127329;
	int32_t x122 = INT32_MIN;
	int32_t x123 = INT32_MIN;
	uint64_t x124 = 681LLU;
	volatile int32_t t28 = -399737957;

    t28 = (x121<=(x122>(x123/x124)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = 6;
	static volatile int64_t x126 = INT64_MAX;
	int64_t x127 = -108246375211725548LL;
	volatile int32_t x128 = -1;
	int32_t t29 = -388547877;

    t29 = (x125<=(x126>(x127/x128)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x130 = INT64_MIN;
	uint8_t x131 = UINT8_MAX;
	int32_t t30 = -224080734;

    t30 = (x129<=(x130>(x131/x132)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x133 = 7195590U;
	static int8_t x134 = 40;
	int32_t x135 = 71588871;
	static int64_t x136 = -5184809490LL;
	static int32_t t31 = -45528353;

    t31 = (x133<=(x134>(x135/x136)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = INT32_MIN;
	static volatile int64_t x138 = 1LL;
	volatile int32_t t32 = 4676317;

    t32 = (x137<=(x138>(x139/x140)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x141 = 27U;
	static int64_t x142 = INT64_MIN;
	static int8_t x143 = -57;
	uint64_t x144 = 6LLU;
	int32_t t33 = -4342;

    t33 = (x141<=(x142>(x143/x144)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x145 = 15089154U;
	int64_t x146 = INT64_MAX;
	int32_t x147 = INT32_MIN;
	static int64_t x148 = 98116620137LL;
	volatile int32_t t34 = -46630052;

    t34 = (x145<=(x146>(x147/x148)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x149 = 524142221000881546LLU;
	int16_t x150 = 130;
	int16_t x151 = 4171;
	int8_t x152 = 1;

    t35 = (x149<=(x150>(x151/x152)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x153 = -3931723979746LL;
	int8_t x154 = INT8_MIN;
	int32_t t36 = 1150;

    t36 = (x153<=(x154>(x155/x156)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x158 = 1U;
	uint64_t x159 = UINT64_MAX;
	volatile int16_t x160 = INT16_MIN;
	volatile int32_t t37 = -58438511;

    t37 = (x157<=(x158>(x159/x160)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x161 = INT64_MAX;
	uint8_t x162 = UINT8_MAX;
	volatile int16_t x163 = -225;
	uint16_t x164 = UINT16_MAX;

    t38 = (x161<=(x162>(x163/x164)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = INT16_MAX;
	int8_t x166 = INT8_MIN;
	static volatile uint16_t x167 = UINT16_MAX;
	uint32_t x168 = UINT32_MAX;
	volatile int32_t t39 = 187207960;

    t39 = (x165<=(x166>(x167/x168)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x169 = INT16_MAX;
	uint32_t x170 = UINT32_MAX;
	volatile uint64_t x172 = 1102037435050644LLU;
	volatile int32_t t40 = -1448117;

    t40 = (x169<=(x170>(x171/x172)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x173 = 52915LLU;
	int8_t x174 = -1;
	int8_t x175 = 0;
	volatile int64_t x176 = -3LL;
	int32_t t41 = 1;

    t41 = (x173<=(x174>(x175/x176)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x177 = -231897163136977LL;
	static volatile int32_t x179 = -1;
	int8_t x180 = 1;
	volatile int32_t t42 = -304260;

    t42 = (x177<=(x178>(x179/x180)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x181 = UINT32_MAX;
	volatile int8_t x182 = INT8_MIN;
	static uint8_t x183 = UINT8_MAX;
	static int8_t x184 = INT8_MIN;
	int32_t t43 = 13;

    t43 = (x181<=(x182>(x183/x184)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x186 = INT64_MAX;
	int64_t x187 = INT64_MAX;
	static int64_t x188 = -1LL;

    t44 = (x185<=(x186>(x187/x188)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x189 = 4317;
	uint32_t x190 = UINT32_MAX;
	int8_t x191 = -1;
	int16_t x192 = INT16_MAX;
	volatile int32_t t45 = -137305501;

    t45 = (x189<=(x190>(x191/x192)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x193 = UINT64_MAX;
	static int8_t x194 = INT8_MIN;
	static uint8_t x195 = UINT8_MAX;
	int64_t x196 = -1LL;
	int32_t t46 = -6185;

    t46 = (x193<=(x194>(x195/x196)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = INT8_MAX;
	volatile uint16_t x199 = UINT16_MAX;
	volatile int32_t x200 = INT32_MIN;
	volatile int32_t t47 = -314818242;

    t47 = (x197<=(x198>(x199/x200)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint8_t x201 = 31U;
	static uint32_t x202 = 2U;
	static int32_t x203 = INT32_MIN;
	volatile int32_t t48 = -4097;

    t48 = (x201<=(x202>(x203/x204)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x206 = 2087U;
	static int8_t x207 = 0;
	volatile int32_t t49 = -39018;

    t49 = (x205<=(x206>(x207/x208)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x210 = 13480653302LLU;
	uint32_t x211 = 444776U;
	volatile int32_t t50 = -1;

    t50 = (x209<=(x210>(x211/x212)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x218 = INT16_MIN;
	static int8_t x220 = INT8_MAX;
	volatile int32_t t51 = 9072131;

    t51 = (x217<=(x218>(x219/x220)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x221 = INT8_MIN;
	int8_t x222 = 14;
	int32_t x223 = -2328215;
	int64_t x224 = -2190382483026988LL;

    t52 = (x221<=(x222>(x223/x224)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x225 = UINT32_MAX;
	uint64_t x226 = 7163732989LLU;
	static int32_t x227 = -6789;
	int64_t x228 = INT64_MIN;
	int32_t t53 = -86620391;

    t53 = (x225<=(x226>(x227/x228)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x233 = 612U;
	static int32_t x234 = 681861;
	int64_t x235 = INT64_MIN;
	int16_t x236 = -7973;
	volatile int32_t t54 = -13913;

    t54 = (x233<=(x234>(x235/x236)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x237 = -416;
	static int16_t x238 = 3;
	static int8_t x239 = INT8_MAX;
	int64_t x240 = INT64_MIN;

    t55 = (x237<=(x238>(x239/x240)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x245 = INT32_MIN;
	static int32_t x246 = -40075330;
	int8_t x247 = -1;
	volatile int32_t t56 = 924;

    t56 = (x245<=(x246>(x247/x248)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x249 = -1;
	volatile uint32_t x250 = 92U;
	int32_t x252 = -39;
	int32_t t57 = 29510914;

    t57 = (x249<=(x250>(x251/x252)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x253 = -1639;
	static int32_t x254 = -1;
	uint64_t x255 = 6901LLU;
	volatile int8_t x256 = -1;
	volatile int32_t t58 = -3;

    t58 = (x253<=(x254>(x255/x256)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x257 = INT32_MAX;
	int32_t x258 = INT32_MIN;
	int16_t x259 = INT16_MAX;
	static volatile int32_t x260 = 1;
	static int32_t t59 = -52577002;

    t59 = (x257<=(x258>(x259/x260)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x261 = INT32_MAX;
	uint16_t x262 = UINT16_MAX;
	int8_t x263 = -1;

    t60 = (x261<=(x262>(x263/x264)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x265 = INT8_MIN;
	uint8_t x266 = 7U;
	volatile uint32_t x267 = 13230U;
	int32_t t61 = -58920314;

    t61 = (x265<=(x266>(x267/x268)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x270 = INT32_MAX;
	int32_t x271 = INT32_MAX;
	volatile int8_t x272 = -1;

    t62 = (x269<=(x270>(x271/x272)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x273 = -1;
	uint32_t x275 = UINT32_MAX;
	int16_t x276 = -2383;
	volatile int32_t t63 = 1047715;

    t63 = (x273<=(x274>(x275/x276)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x278 = 9U;
	int16_t x279 = -1;
	volatile int32_t t64 = -322773564;

    t64 = (x277<=(x278>(x279/x280)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x281 = INT16_MIN;
	int64_t x282 = 1041449912964951592LL;
	static uint16_t x283 = 7U;
	static uint8_t x284 = UINT8_MAX;

    t65 = (x281<=(x282>(x283/x284)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x285 = -15;
	static volatile uint16_t x286 = 6423U;
	uint64_t x287 = UINT64_MAX;
	int8_t x288 = 1;
	static int32_t t66 = -48187795;

    t66 = (x285<=(x286>(x287/x288)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x289 = 127753343LL;
	int64_t x290 = -1LL;
	static int32_t x291 = INT32_MIN;
	int32_t t67 = 13679;

    t67 = (x289<=(x290>(x291/x292)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x293 = 6004LL;
	volatile int16_t x295 = INT16_MIN;
	static int16_t x296 = 52;
	int32_t t68 = -3;

    t68 = (x293<=(x294>(x295/x296)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x298 = 114U;
	int8_t x299 = INT8_MIN;
	volatile int32_t t69 = -33;

    t69 = (x297<=(x298>(x299/x300)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x301 = 8282449LL;
	static uint8_t x302 = 1U;
	static volatile int32_t t70 = 14;

    t70 = (x301<=(x302>(x303/x304)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x305 = 5292U;
	int16_t x306 = INT16_MIN;
	static int64_t x307 = -419701483466LL;

    t71 = (x305<=(x306>(x307/x308)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x309 = INT64_MAX;
	int16_t x310 = -1;
	int8_t x311 = INT8_MIN;
	static int64_t x312 = 3973062379464LL;
	static volatile int32_t t72 = 170;

    t72 = (x309<=(x310>(x311/x312)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x314 = 4U;
	int64_t x315 = INT64_MIN;
	volatile int32_t t73 = -11761;

    t73 = (x313<=(x314>(x315/x316)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x317 = -5397;
	int16_t x318 = 23;
	static uint64_t x319 = 215155880LLU;
	int8_t x320 = INT8_MIN;
	volatile int32_t t74 = -29;

    t74 = (x317<=(x318>(x319/x320)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x321 = 123491;
	int8_t x322 = INT8_MIN;
	volatile uint64_t x324 = UINT64_MAX;
	int32_t t75 = -9817;

    t75 = (x321<=(x322>(x323/x324)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x325 = INT8_MAX;
	volatile uint8_t x327 = UINT8_MAX;
	volatile uint64_t x328 = UINT64_MAX;
	int32_t t76 = -39246;

    t76 = (x325<=(x326>(x327/x328)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x330 = 2LLU;
	volatile int32_t x332 = 67;
	volatile int32_t t77 = -87570082;

    t77 = (x329<=(x330>(x331/x332)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x333 = -1;
	volatile int32_t t78 = -34896557;

    t78 = (x333<=(x334>(x335/x336)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x338 = UINT16_MAX;
	int8_t x339 = INT8_MIN;
	int16_t x340 = INT16_MIN;
	volatile int32_t t79 = -4897;

    t79 = (x337<=(x338>(x339/x340)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x341 = -13;
	static int64_t x342 = INT64_MAX;
	int16_t x343 = INT16_MIN;
	volatile int64_t x344 = INT64_MIN;

    t80 = (x341<=(x342>(x343/x344)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x346 = INT8_MIN;
	static uint8_t x347 = 13U;
	int32_t x348 = INT32_MIN;
	int32_t t81 = 0;

    t81 = (x345<=(x346>(x347/x348)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x349 = INT16_MAX;
	int64_t x350 = -1LL;
	volatile uint16_t x351 = 435U;
	int32_t x352 = INT32_MIN;
	volatile int32_t t82 = 246071058;

    t82 = (x349<=(x350>(x351/x352)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x354 = INT8_MIN;
	int64_t x355 = -1LL;
	int16_t x356 = INT16_MAX;
	volatile int32_t t83 = 5;

    t83 = (x353<=(x354>(x355/x356)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x357 = -2;
	int16_t x359 = INT16_MIN;
	int32_t x360 = INT32_MIN;
	volatile int32_t t84 = -179497;

    t84 = (x357<=(x358>(x359/x360)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x361 = 15867987U;
	int64_t x362 = -121LL;
	static int16_t x364 = INT16_MIN;
	int32_t t85 = -26;

    t85 = (x361<=(x362>(x363/x364)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint8_t x365 = UINT8_MAX;
	uint8_t x366 = 24U;
	uint64_t x367 = UINT64_MAX;
	static int64_t x368 = 50090614LL;
	static volatile int32_t t86 = 22;

    t86 = (x365<=(x366>(x367/x368)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x370 = -1;
	int8_t x371 = 10;
	volatile int32_t t87 = -32537316;

    t87 = (x369<=(x370>(x371/x372)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x373 = UINT64_MAX;
	int64_t x374 = 447930329535136935LL;
	uint32_t x375 = 236U;
	int16_t x376 = -1;
	int32_t t88 = -1036162817;

    t88 = (x373<=(x374>(x375/x376)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x381 = INT32_MAX;
	int16_t x382 = -1;
	uint64_t x383 = 741935040LLU;
	uint8_t x384 = UINT8_MAX;
	int32_t t89 = 10161860;

    t89 = (x381<=(x382>(x383/x384)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x385 = -245;
	int16_t x386 = INT16_MAX;
	int8_t x388 = INT8_MIN;
	volatile int32_t t90 = 3747313;

    t90 = (x385<=(x386>(x387/x388)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x390 = INT16_MIN;
	static int32_t x391 = 1;
	static int16_t x392 = INT16_MAX;
	static volatile int32_t t91 = 27;

    t91 = (x389<=(x390>(x391/x392)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint8_t x393 = UINT8_MAX;
	volatile int8_t x394 = INT8_MIN;
	int16_t x395 = 0;
	uint16_t x396 = UINT16_MAX;

    t92 = (x393<=(x394>(x395/x396)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x397 = -9;
	int16_t x398 = INT16_MAX;
	static volatile int64_t x399 = INT64_MIN;
	int8_t x400 = INT8_MIN;

    t93 = (x397<=(x398>(x399/x400)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x401 = INT8_MIN;
	uint8_t x403 = 7U;
	static volatile int8_t x404 = 10;
	int32_t t94 = -28;

    t94 = (x401<=(x402>(x403/x404)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x405 = 1705;
	int16_t x406 = 120;
	int64_t x407 = 531423790LL;
	static uint8_t x408 = 4U;
	volatile int32_t t95 = 219046854;

    t95 = (x405<=(x406>(x407/x408)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x410 = 0;
	uint16_t x412 = UINT16_MAX;
	static volatile int32_t t96 = 147820514;

    t96 = (x409<=(x410>(x411/x412)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x413 = UINT8_MAX;
	int64_t x415 = 1016794155699LL;
	int32_t t97 = -107857246;

    t97 = (x413<=(x414>(x415/x416)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x417 = 356;
	static uint8_t x418 = 2U;
	volatile uint16_t x419 = 56U;
	volatile int8_t x420 = INT8_MIN;
	volatile int32_t t98 = -760;

    t98 = (x417<=(x418>(x419/x420)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x421 = 7U;
	volatile uint16_t x423 = 129U;
	int8_t x424 = INT8_MAX;
	static int32_t t99 = -112496218;

    t99 = (x421<=(x422>(x423/x424)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x433 = 809684426312778LLU;
	volatile int64_t x434 = -1LL;
	int32_t x435 = INT32_MAX;
	volatile uint64_t x436 = 12LLU;
	volatile int32_t t100 = 683;

    t100 = (x433<=(x434>(x435/x436)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x437 = -1;
	int16_t x438 = INT16_MAX;
	volatile int32_t t101 = 147;

    t101 = (x437<=(x438>(x439/x440)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x441 = INT64_MAX;
	volatile int64_t x442 = -267337019LL;

    t102 = (x441<=(x442>(x443/x444)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x445 = INT32_MAX;
	int8_t x446 = -1;
	volatile int64_t x447 = INT64_MIN;
	volatile int32_t x448 = 27;
	int32_t t103 = -98;

    t103 = (x445<=(x446>(x447/x448)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x449 = INT16_MIN;
	int64_t x451 = -1LL;
	uint8_t x452 = 3U;

    t104 = (x449<=(x450>(x451/x452)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint16_t x453 = 226U;
	static int64_t x454 = INT64_MAX;
	int8_t x455 = INT8_MIN;
	int32_t x456 = INT32_MIN;
	int32_t t105 = 19703465;

    t105 = (x453<=(x454>(x455/x456)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x457 = -1;
	int8_t x458 = 54;
	uint8_t x459 = 48U;
	int32_t t106 = -13215107;

    t106 = (x457<=(x458>(x459/x460)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x461 = INT32_MIN;
	int8_t x462 = -1;
	static int32_t x463 = INT32_MIN;
	int32_t x464 = INT32_MIN;

    t107 = (x461<=(x462>(x463/x464)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x466 = 1;
	static int64_t x467 = -1LL;
	int64_t x468 = INT64_MIN;
	volatile int32_t t108 = -1346646;

    t108 = (x465<=(x466>(x467/x468)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x469 = INT32_MAX;
	uint16_t x470 = UINT16_MAX;
	uint64_t x472 = 21LLU;

    t109 = (x469<=(x470>(x471/x472)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x473 = INT16_MIN;
	volatile uint16_t x474 = 6914U;
	uint64_t x475 = UINT64_MAX;
	uint16_t x476 = 9036U;
	int32_t t110 = 2;

    t110 = (x473<=(x474>(x475/x476)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x477 = INT16_MIN;
	int64_t x479 = 19013LL;
	uint32_t x480 = UINT32_MAX;
	volatile int32_t t111 = 1;

    t111 = (x477<=(x478>(x479/x480)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x481 = -1;
	int8_t x482 = -1;
	int16_t x483 = 77;
	int64_t x484 = INT64_MIN;
	volatile int32_t t112 = -2;

    t112 = (x481<=(x482>(x483/x484)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x485 = INT32_MAX;
	static uint64_t x486 = 19752409730LLU;
	static uint32_t x487 = UINT32_MAX;
	volatile int32_t t113 = 61798;

    t113 = (x485<=(x486>(x487/x488)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x489 = INT8_MIN;
	int64_t x490 = INT64_MAX;
	int16_t x491 = 158;
	int16_t x492 = 214;

    t114 = (x489<=(x490>(x491/x492)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x493 = -1;
	volatile int64_t x494 = INT64_MAX;
	int64_t x495 = -27575597LL;
	uint16_t x496 = 46U;
	static volatile int32_t t115 = 3;

    t115 = (x493<=(x494>(x495/x496)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x497 = 1254U;
	static int64_t x498 = INT64_MIN;
	volatile uint8_t x500 = 16U;
	static int32_t t116 = 42787;

    t116 = (x497<=(x498>(x499/x500)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int32_t x507 = INT32_MIN;
	int32_t x508 = 669;
	int32_t t117 = 318;

    t117 = (x505<=(x506>(x507/x508)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x509 = 407150U;
	int8_t x510 = INT8_MIN;
	uint32_t x512 = UINT32_MAX;
	volatile int32_t t118 = 691635;

    t118 = (x509<=(x510>(x511/x512)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x513 = INT64_MAX;
	int32_t x514 = INT32_MIN;
	int16_t x515 = INT16_MAX;
	int16_t x516 = -1;
	int32_t t119 = -1;

    t119 = (x513<=(x514>(x515/x516)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x517 = INT8_MIN;
	uint8_t x518 = 11U;
	int8_t x519 = INT8_MIN;
	int64_t x520 = INT64_MIN;

    t120 = (x517<=(x518>(x519/x520)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x523 = INT32_MIN;
	static uint64_t x524 = UINT64_MAX;
	volatile int32_t t121 = 899;

    t121 = (x521<=(x522>(x523/x524)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x525 = UINT64_MAX;
	static int64_t x526 = 427582116091977LL;
	uint64_t x527 = 51LLU;
	uint8_t x528 = 1U;
	volatile int32_t t122 = 1;

    t122 = (x525<=(x526>(x527/x528)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x529 = -1;
	int8_t x531 = -1;
	int16_t x532 = -2542;

    t123 = (x529<=(x530>(x531/x532)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x533 = INT16_MIN;
	int8_t x534 = 60;
	int16_t x535 = -283;
	int64_t x536 = -1LL;
	volatile int32_t t124 = -44461197;

    t124 = (x533<=(x534>(x535/x536)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x537 = INT8_MAX;
	volatile int64_t x538 = -1LL;
	int32_t x539 = 32377179;
	volatile int64_t x540 = INT64_MAX;
	int32_t t125 = -434;

    t125 = (x537<=(x538>(x539/x540)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x542 = 5046550504312894LL;
	int8_t x543 = 0;
	static int16_t x544 = INT16_MIN;
	volatile int32_t t126 = 1125084;

    t126 = (x541<=(x542>(x543/x544)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x546 = -1;
	static volatile uint8_t x547 = UINT8_MAX;
	volatile uint64_t x548 = 16521958961LLU;
	volatile int32_t t127 = -1643;

    t127 = (x545<=(x546>(x547/x548)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x549 = 32671058694588497LLU;
	volatile int16_t x550 = INT16_MIN;
	int8_t x552 = -1;
	volatile int32_t t128 = -7382169;

    t128 = (x549<=(x550>(x551/x552)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x555 = 2U;
	int32_t x556 = 37245644;
	int32_t t129 = 882597323;

    t129 = (x553<=(x554>(x555/x556)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x557 = 0LL;
	uint32_t x558 = 1081U;
	int16_t x559 = -1;
	static volatile int64_t x560 = 6094251198472LL;

    t130 = (x557<=(x558>(x559/x560)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x562 = -30;
	uint16_t x563 = 13U;
	uint8_t x564 = UINT8_MAX;

    t131 = (x561<=(x562>(x563/x564)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint32_t x565 = UINT32_MAX;
	static volatile int8_t x566 = -24;
	static int32_t t132 = 595668803;

    t132 = (x565<=(x566>(x567/x568)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x569 = INT64_MIN;
	int8_t x570 = INT8_MIN;
	int32_t x571 = -1;
	int64_t x572 = -1LL;
	static volatile int32_t t133 = -126;

    t133 = (x569<=(x570>(x571/x572)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x573 = INT16_MIN;
	int64_t x574 = INT64_MIN;
	int32_t x575 = INT32_MAX;
	volatile int16_t x576 = -5914;

    t134 = (x573<=(x574>(x575/x576)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x577 = 10;
	int8_t x579 = 0;
	int64_t x580 = 8938864210213819LL;
	int32_t t135 = 51;

    t135 = (x577<=(x578>(x579/x580)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x585 = -20;
	volatile int8_t x586 = 1;
	uint16_t x587 = 1U;
	uint64_t x588 = UINT64_MAX;
	volatile int32_t t136 = 4079;

    t136 = (x585<=(x586>(x587/x588)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x589 = -1LL;
	static int64_t x590 = INT64_MAX;
	int16_t x591 = INT16_MIN;
	static int64_t x592 = 257216LL;

    t137 = (x589<=(x590>(x591/x592)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x593 = 0U;
	uint16_t x594 = 4U;
	uint16_t x595 = UINT16_MAX;
	int32_t x596 = 1525738;

    t138 = (x593<=(x594>(x595/x596)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x599 = -1LL;
	volatile uint32_t x600 = UINT32_MAX;
	static int32_t t139 = 113064;

    t139 = (x597<=(x598>(x599/x600)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x601 = 80U;
	int64_t x602 = 5842272LL;
	static volatile int8_t x604 = INT8_MAX;
	volatile int32_t t140 = 396;

    t140 = (x601<=(x602>(x603/x604)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x605 = 285;
	int32_t x606 = -29766342;
	int16_t x608 = 1;
	int32_t t141 = -1;

    t141 = (x605<=(x606>(x607/x608)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x609 = INT16_MIN;
	static int64_t x610 = 1128453764646562LL;
	static volatile int32_t t142 = 525950544;

    t142 = (x609<=(x610>(x611/x612)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x613 = UINT16_MAX;
	uint8_t x614 = UINT8_MAX;
	static uint8_t x615 = 3U;
	int32_t t143 = 7049;

    t143 = (x613<=(x614>(x615/x616)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x617 = 5324276310482970LL;
	int64_t x618 = INT64_MAX;
	int64_t x619 = 174LL;
	static int32_t x620 = -45684509;
	static int32_t t144 = -6205038;

    t144 = (x617<=(x618>(x619/x620)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x621 = 59;
	int64_t x622 = INT64_MIN;
	int32_t x623 = -1;
	static int64_t x624 = 2123683583855909LL;
	static int32_t t145 = 956319905;

    t145 = (x621<=(x622>(x623/x624)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x626 = UINT32_MAX;
	uint32_t x627 = 14521U;
	uint32_t x628 = 93U;

    t146 = (x625<=(x626>(x627/x628)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x630 = 0U;
	uint32_t x631 = UINT32_MAX;
	volatile int32_t t147 = -657932;

    t147 = (x629<=(x630>(x631/x632)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x633 = INT8_MIN;
	int64_t x634 = INT64_MIN;
	int8_t x635 = INT8_MIN;
	int16_t x636 = -1;
	int32_t t148 = -30353;

    t148 = (x633<=(x634>(x635/x636)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x637 = -1;
	uint16_t x638 = 18826U;
	static int64_t x639 = -15847LL;
	uint32_t x640 = UINT32_MAX;
	int32_t t149 = 8;

    t149 = (x637<=(x638>(x639/x640)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x641 = 249U;
	int8_t x642 = INT8_MIN;
	static volatile uint64_t x644 = 5640LLU;
	volatile int32_t t150 = 69296;

    t150 = (x641<=(x642>(x643/x644)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x645 = UINT16_MAX;
	volatile uint64_t x646 = 48436388979342LLU;
	uint64_t x647 = UINT64_MAX;
	int32_t x648 = INT32_MIN;
	static int32_t t151 = -4460;

    t151 = (x645<=(x646>(x647/x648)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x652 = 54LLU;

    t152 = (x649<=(x650>(x651/x652)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x653 = 26U;
	uint32_t x654 = UINT32_MAX;
	int64_t x655 = INT64_MAX;
	int8_t x656 = INT8_MIN;

    t153 = (x653<=(x654>(x655/x656)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x657 = 1;
	int16_t x658 = INT16_MIN;
	uint32_t x660 = 32153713U;
	volatile int32_t t154 = 23986170;

    t154 = (x657<=(x658>(x659/x660)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x661 = 1;
	uint8_t x662 = 127U;
	int16_t x663 = -1666;
	static int16_t x664 = INT16_MAX;
	int32_t t155 = -165589181;

    t155 = (x661<=(x662>(x663/x664)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint16_t x665 = 32367U;
	int64_t x667 = -1LL;
	volatile int32_t t156 = 31342324;

    t156 = (x665<=(x666>(x667/x668)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x669 = INT16_MIN;
	static uint32_t x671 = UINT32_MAX;
	volatile int16_t x672 = -1;

    t157 = (x669<=(x670>(x671/x672)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x673 = -85101;
	volatile int16_t x674 = INT16_MIN;
	int16_t x675 = INT16_MIN;
	uint16_t x676 = 4U;
	int32_t t158 = -800251;

    t158 = (x673<=(x674>(x675/x676)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x678 = INT16_MIN;
	uint16_t x679 = 241U;
	static uint32_t x680 = 11223U;
	volatile int32_t t159 = -431;

    t159 = (x677<=(x678>(x679/x680)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x681 = 1U;
	int64_t x682 = INT64_MIN;
	int64_t x683 = -1LL;
	uint8_t x684 = 16U;
	static volatile int32_t t160 = -9;

    t160 = (x681<=(x682>(x683/x684)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x685 = INT8_MIN;
	int16_t x686 = INT16_MAX;
	int64_t x687 = INT64_MAX;
	int32_t x688 = -66;
	static volatile int32_t t161 = 325;

    t161 = (x685<=(x686>(x687/x688)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x689 = UINT32_MAX;
	int16_t x690 = INT16_MIN;
	volatile int8_t x691 = INT8_MAX;
	int16_t x692 = INT16_MIN;
	int32_t t162 = -3;

    t162 = (x689<=(x690>(x691/x692)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x693 = INT8_MIN;
	uint32_t x695 = 1U;
	static int32_t t163 = -300226;

    t163 = (x693<=(x694>(x695/x696)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x697 = -1;
	int32_t x699 = -1;
	static int32_t t164 = -196812473;

    t164 = (x697<=(x698>(x699/x700)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x701 = -1LL;
	uint8_t x702 = UINT8_MAX;
	volatile int16_t x703 = -1;
	volatile int32_t x704 = 142;
	int32_t t165 = -192;

    t165 = (x701<=(x702>(x703/x704)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x705 = UINT32_MAX;
	int32_t x706 = -1;
	int64_t x707 = INT64_MIN;
	int64_t x708 = INT64_MIN;
	volatile int32_t t166 = 3157004;

    t166 = (x705<=(x706>(x707/x708)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x709 = INT32_MAX;
	volatile int8_t x710 = INT8_MIN;
	int8_t x711 = -1;
	int64_t x712 = 39940540174LL;

    t167 = (x709<=(x710>(x711/x712)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x713 = 719U;
	int64_t x714 = INT64_MAX;
	int16_t x715 = 5;
	uint64_t x716 = 3LLU;
	int32_t t168 = 69757819;

    t168 = (x713<=(x714>(x715/x716)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x717 = UINT32_MAX;
	int16_t x718 = INT16_MAX;
	int16_t x719 = INT16_MIN;
	int32_t x720 = INT32_MAX;
	volatile int32_t t169 = 52102753;

    t169 = (x717<=(x718>(x719/x720)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x721 = INT16_MIN;
	static int8_t x722 = INT8_MIN;
	int32_t x723 = INT32_MIN;
	uint64_t x724 = UINT64_MAX;
	int32_t t170 = 102490;

    t170 = (x721<=(x722>(x723/x724)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x725 = -84;
	uint16_t x726 = 1U;
	int32_t x727 = INT32_MIN;
	volatile int16_t x728 = INT16_MIN;
	int32_t t171 = 141103;

    t171 = (x725<=(x726>(x727/x728)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x729 = INT64_MIN;
	int8_t x731 = -1;
	int32_t x732 = INT32_MIN;
	int32_t t172 = -14426;

    t172 = (x729<=(x730>(x731/x732)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x733 = INT64_MAX;
	int16_t x734 = 1;
	int8_t x735 = -15;
	static int8_t x736 = INT8_MIN;

    t173 = (x733<=(x734>(x735/x736)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x738 = UINT16_MAX;
	volatile uint16_t x739 = 115U;
	uint8_t x740 = 12U;
	volatile int32_t t174 = 3795232;

    t174 = (x737<=(x738>(x739/x740)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x741 = 1LLU;
	uint16_t x742 = 6U;
	int8_t x743 = INT8_MIN;
	volatile int8_t x744 = INT8_MAX;
	volatile int32_t t175 = -239;

    t175 = (x741<=(x742>(x743/x744)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x745 = 4LLU;
	int8_t x747 = 1;
	volatile int64_t x748 = -1LL;

    t176 = (x745<=(x746>(x747/x748)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x749 = -2;
	static uint64_t x750 = UINT64_MAX;
	volatile int32_t x751 = INT32_MIN;
	volatile int64_t x752 = INT64_MAX;
	static int32_t t177 = -7464992;

    t177 = (x749<=(x750>(x751/x752)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x753 = -110622456664LL;
	int16_t x754 = -1;
	uint16_t x755 = 0U;
	int8_t x756 = INT8_MIN;
	static volatile int32_t t178 = -164492501;

    t178 = (x753<=(x754>(x755/x756)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x758 = 5873;
	uint64_t x759 = UINT64_MAX;
	int64_t x760 = INT64_MIN;
	int32_t t179 = -1;

    t179 = (x757<=(x758>(x759/x760)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x761 = UINT32_MAX;
	static int64_t x763 = INT64_MIN;
	int16_t x764 = INT16_MIN;
	int32_t t180 = 222;

    t180 = (x761<=(x762>(x763/x764)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x765 = 3181U;
	uint16_t x766 = 2U;
	static int16_t x767 = INT16_MAX;

    t181 = (x765<=(x766>(x767/x768)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x769 = INT64_MIN;
	static int8_t x770 = INT8_MIN;
	int16_t x771 = -250;
	static volatile int16_t x772 = INT16_MIN;
	static int32_t t182 = -5;

    t182 = (x769<=(x770>(x771/x772)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x773 = 101U;
	int8_t x774 = INT8_MIN;
	int16_t x775 = INT16_MAX;
	int8_t x776 = 3;
	static volatile int32_t t183 = 43;

    t183 = (x773<=(x774>(x775/x776)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x777 = 6;
	volatile uint16_t x778 = UINT16_MAX;
	static int64_t x779 = -14223658620146LL;
	int64_t x780 = INT64_MIN;
	volatile int32_t t184 = -33479936;

    t184 = (x777<=(x778>(x779/x780)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x781 = INT8_MIN;
	static volatile uint32_t x782 = 406468692U;
	static int64_t x783 = 1649732037059LL;
	volatile int16_t x784 = INT16_MAX;
	volatile int32_t t185 = -175;

    t185 = (x781<=(x782>(x783/x784)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x785 = UINT32_MAX;
	static int32_t x787 = 117502;

    t186 = (x785<=(x786>(x787/x788)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x789 = INT16_MIN;
	int32_t x790 = 7596000;
	volatile uint64_t x791 = 0LLU;
	uint8_t x792 = 1U;

    t187 = (x789<=(x790>(x791/x792)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x797 = INT64_MIN;
	static int64_t x798 = INT64_MIN;
	uint32_t x799 = 409199U;
	static volatile int64_t x800 = 9LL;

    t188 = (x797<=(x798>(x799/x800)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x801 = 7570U;
	int8_t x802 = INT8_MIN;
	int16_t x803 = 3;
	int64_t x804 = INT64_MAX;
	static volatile int32_t t189 = 691;

    t189 = (x801<=(x802>(x803/x804)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x806 = 5U;
	int32_t x807 = -1;
	volatile uint32_t x808 = 6668U;
	static int32_t t190 = 683;

    t190 = (x805<=(x806>(x807/x808)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x809 = -1;
	int16_t x810 = -1;
	static int32_t x811 = INT32_MAX;
	int64_t x812 = 203677350273986LL;
	static int32_t t191 = 1344284;

    t191 = (x809<=(x810>(x811/x812)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x813 = 7121;
	int16_t x814 = INT16_MAX;
	int16_t x815 = INT16_MIN;
	uint8_t x816 = 2U;
	volatile int32_t t192 = 54476;

    t192 = (x813<=(x814>(x815/x816)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x818 = INT64_MIN;
	volatile int8_t x819 = INT8_MAX;
	int16_t x820 = -1;
	int32_t t193 = 624469;

    t193 = (x817<=(x818>(x819/x820)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x821 = 149U;
	uint8_t x822 = 3U;
	int64_t x823 = INT64_MAX;
	uint16_t x824 = 485U;
	volatile int32_t t194 = -31;

    t194 = (x821<=(x822>(x823/x824)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x825 = -3553596594532854178LL;
	int8_t x826 = -1;
	static int8_t x827 = 0;
	int32_t t195 = 1;

    t195 = (x825<=(x826>(x827/x828)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x830 = UINT16_MAX;
	static int32_t x831 = INT32_MIN;
	int16_t x832 = 7752;
	int32_t t196 = 1;

    t196 = (x829<=(x830>(x831/x832)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x833 = -1;
	static volatile int32_t x834 = INT32_MAX;
	volatile uint64_t x835 = 150158LLU;
	static int32_t t197 = -259255;

    t197 = (x833<=(x834>(x835/x836)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x837 = 0;
	int32_t x838 = 55090673;
	uint32_t x839 = UINT32_MAX;
	volatile int32_t t198 = -365990;

    t198 = (x837<=(x838>(x839/x840)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x841 = 3006U;
	int32_t x842 = -16284;
	volatile int16_t x843 = INT16_MIN;
	volatile int8_t x844 = INT8_MIN;
	int32_t t199 = 234332;

    t199 = (x841<=(x842>(x843/x844)));

    if (t199 != 0) { NG(); } else { ; }
	
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

