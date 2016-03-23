
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

uint32_t x4 = 1998193U;
int32_t x8 = INT32_MAX;
int16_t x13 = INT16_MAX;
static volatile int32_t t4 = 8183;
int32_t x23 = INT32_MAX;
volatile int32_t t5 = -154;
static int32_t x25 = INT32_MIN;
uint16_t x26 = 55U;
uint8_t x31 = 50U;
int64_t x40 = 29LL;
int64_t x43 = INT64_MIN;
int8_t x47 = INT8_MIN;
int16_t x51 = -897;
uint16_t x60 = 3U;
int8_t x61 = -1;
static volatile int32_t x66 = INT32_MIN;
static uint64_t x69 = 15639715898LLU;
int8_t x72 = -1;
int8_t x80 = INT8_MAX;
static uint64_t x83 = 250788LLU;
int32_t x85 = -1;
int8_t x91 = -36;
volatile int32_t t22 = -2601747;
int16_t x94 = 6404;
uint16_t x97 = 10U;
static int16_t x98 = INT16_MIN;
volatile int64_t t25 = 14149110LL;
int16_t x106 = 1;
int32_t t27 = 1268197;
int64_t x113 = -415986535LL;
volatile uint8_t x115 = UINT8_MAX;
int16_t x118 = INT16_MAX;
int8_t x119 = INT8_MAX;
int16_t x125 = -1377;
int8_t x129 = INT8_MIN;
int16_t x131 = INT16_MAX;
volatile int32_t x135 = 31987232;
int64_t x139 = INT64_MIN;
int16_t x140 = -1;
uint32_t x146 = UINT32_MAX;
int16_t x152 = INT16_MAX;
int32_t t38 = -29;
volatile uint32_t t41 = 64476U;
uint32_t x183 = 84U;
uint8_t x184 = 6U;
volatile int32_t t45 = -15373;
volatile int64_t t46 = 6156535570LL;
uint32_t x192 = 910600U;
volatile int32_t t47 = 49866480;
static int16_t x196 = -1512;
int64_t x201 = -1LL;
int16_t x206 = -1;
int32_t t51 = -3;
static uint8_t x213 = 7U;
uint32_t x220 = 157U;
static volatile uint64_t t54 = 11389664LLU;
int64_t x223 = -13121360717LL;
int64_t x227 = INT64_MIN;
uint32_t x228 = 1928781941U;
int16_t x232 = INT16_MIN;
volatile uint64_t x235 = 5672486203584LLU;
volatile uint64_t t58 = 1090328650876140704LLU;
uint64_t x247 = 1036417738072952702LLU;
uint32_t x250 = UINT32_MAX;
int8_t x253 = -1;
static int32_t x257 = -1;
int32_t x259 = 1;
volatile int32_t t64 = 1;
uint32_t x263 = UINT32_MAX;
int8_t x264 = -1;
static uint32_t x270 = 129351060U;
int64_t x273 = -1LL;
volatile int64_t t68 = -1732446836701LL;
volatile int64_t x285 = INT64_MIN;
uint8_t x286 = 28U;
int64_t x287 = INT64_MIN;
uint32_t x290 = UINT32_MAX;
uint8_t x294 = 1U;
int64_t x300 = INT64_MIN;
uint8_t x305 = 94U;
uint32_t x306 = 1U;
volatile uint32_t x313 = 76338771U;
uint64_t x314 = 6183874585801186970LLU;
static int8_t x326 = INT8_MIN;
volatile int32_t x330 = INT32_MIN;
int16_t x335 = -211;
int32_t x336 = INT32_MIN;
int32_t x344 = 43;
int16_t x346 = INT16_MAX;
static int32_t x356 = INT32_MAX;
volatile int32_t t90 = 50;
int16_t x365 = INT16_MAX;
volatile int32_t t91 = -10507510;
static uint16_t x371 = 3U;
int32_t x380 = 41451100;
volatile int32_t t94 = -940916;
static int64_t x382 = INT64_MAX;
int8_t x388 = INT8_MAX;
int16_t x391 = INT16_MIN;
volatile int32_t t97 = -449236;
volatile int32_t t98 = 2042;
int16_t x401 = INT16_MIN;
volatile uint32_t x418 = 15909U;
static int64_t x419 = INT64_MIN;
static volatile int32_t t106 = -126318;
static int8_t x431 = INT8_MAX;
int32_t x432 = INT32_MIN;
volatile int32_t t108 = 49540;
volatile int32_t t109 = -12;
volatile int16_t x443 = -33;
volatile int32_t x446 = 936835733;
volatile int64_t x458 = INT64_MIN;
int16_t x462 = 9564;
static int8_t x463 = INT8_MIN;
volatile int64_t t115 = -107990LL;
volatile uint8_t x466 = 1U;
volatile int32_t t117 = 181547;
volatile int8_t x474 = 0;
static int64_t x476 = INT64_MIN;
uint32_t x477 = 3166640U;
int16_t x486 = INT16_MAX;
static int8_t x491 = INT8_MIN;
static int16_t x494 = INT16_MAX;
int32_t x496 = 3365;
int8_t x500 = -5;
static volatile int16_t x503 = INT16_MAX;
volatile int32_t t125 = 3;
uint8_t x506 = 3U;
static volatile int8_t x507 = 25;
static int32_t t126 = 210;
int32_t x512 = -491605980;
static volatile uint64_t t127 = 432378LLU;
int16_t x514 = INT16_MAX;
volatile int64_t t129 = -281915LL;
volatile int64_t t130 = 43178703637LL;
uint8_t x540 = 0U;
uint8_t x545 = UINT8_MAX;
int32_t x546 = INT32_MAX;
volatile int32_t t138 = 237757;
int32_t t139 = -113;
volatile int32_t t140 = 14483568;
int32_t t141 = 624147801;
int8_t x572 = INT8_MIN;
static int32_t x581 = -3895;
int64_t x585 = -1LL;
int16_t x589 = INT16_MIN;
int16_t x590 = INT16_MAX;
int16_t x592 = INT16_MAX;
int32_t x594 = -1;
int32_t x595 = INT32_MIN;
volatile int32_t t148 = -1;
uint8_t x600 = 4U;
static int8_t x604 = -1;
volatile int8_t x606 = 3;
volatile int32_t t152 = 15381502;
volatile int64_t x617 = 1819899515702LL;
volatile int16_t x618 = -1;
uint16_t x623 = 12U;
int8_t x624 = -1;
int32_t t155 = 112396711;
volatile int32_t t156 = 244314576;
uint64_t x633 = 700443149846016114LLU;
int8_t x634 = INT8_MIN;
uint64_t t158 = 26308LLU;
volatile int64_t x641 = INT64_MAX;
volatile int64_t x648 = -757655607466573171LL;
uint32_t x653 = 3927U;
uint8_t x661 = UINT8_MAX;
uint16_t x667 = 1439U;
int32_t t167 = -1041064;
int8_t x673 = INT8_MAX;
int64_t x689 = INT64_MAX;
static int8_t x694 = INT8_MAX;
uint16_t x695 = 1242U;
static int64_t x697 = -1LL;
int64_t t174 = 1512908855018004610LL;
static int64_t x711 = INT64_MIN;
int8_t x715 = INT8_MAX;
static volatile int64_t t178 = 1082808342480887253LL;
uint16_t x717 = UINT16_MAX;
int16_t x722 = INT16_MIN;
static int8_t x729 = INT8_MIN;
static volatile int32_t t182 = 13550351;
int64_t x734 = -1LL;
int32_t x738 = -1;
static int32_t x740 = INT32_MAX;
uint32_t x744 = 4U;
static int32_t t185 = -1;
int16_t x745 = 22;
int8_t x752 = INT8_MIN;
int32_t t191 = 104;
int16_t x770 = INT16_MAX;
int8_t x774 = 0;
static uint64_t x783 = UINT64_MAX;
volatile int32_t x786 = INT32_MAX;
int8_t x789 = 1;
int64_t x790 = -2438LL;
volatile int32_t t197 = 247397;
int8_t x800 = INT8_MIN;


void f0(void) {
    	int8_t x1 = -1;
	static uint8_t x2 = 12U;
	int16_t x3 = INT16_MIN;
	int32_t t0 = 2567;

    t0 = (x1&(x2<=(x3<=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 124U;
	static int32_t x6 = INT32_MAX;
	uint64_t x7 = UINT64_MAX;
	volatile uint32_t t1 = 6788462U;

    t1 = (x5&(x6<=(x7<=x8)));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 0;
	int32_t x10 = INT32_MIN;
	static int32_t x11 = -1;
	int64_t x12 = INT64_MAX;
	static volatile int32_t t2 = 276;

    t2 = (x9&(x10<=(x11<=x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = INT64_MIN;
	int32_t x15 = -106440719;
	int32_t x16 = 54;
	int32_t t3 = -44099721;

    t3 = (x13&(x14<=(x15<=x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 1184U;
	int16_t x18 = 6163;
	int64_t x19 = -1LL;
	int16_t x20 = 3735;

    t4 = (x17&(x18<=(x19<=x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 0;
	int32_t x22 = -1;
	int32_t x24 = -394824797;

    t5 = (x21&(x22<=(x23<=x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x27 = -1;
	static uint32_t x28 = 30U;
	volatile int32_t t6 = 1;

    t6 = (x25&(x26<=(x27<=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 83235LLU;
	int8_t x30 = INT8_MAX;
	uint64_t x32 = 31557833489114447LLU;
	uint64_t t7 = 678059679817166049LLU;

    t7 = (x29&(x30<=(x31<=x32)));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = 3;
	volatile int32_t x34 = -1;
	volatile uint64_t x35 = 8641746LLU;
	uint8_t x36 = 16U;
	int32_t t8 = -10119521;

    t8 = (x33&(x34<=(x35<=x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	uint8_t x38 = 74U;
	volatile int64_t x39 = 809LL;
	volatile int32_t t9 = 733442573;

    t9 = (x37&(x38<=(x39<=x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x41 = 2228U;
	uint32_t x42 = 1105574213U;
	int32_t x44 = INT32_MIN;
	volatile uint32_t t10 = 5502U;

    t10 = (x41&(x42<=(x43<=x44)));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	static int32_t x46 = -1;
	volatile int8_t x48 = -54;
	int64_t t11 = -1164856778844LL;

    t11 = (x45&(x46<=(x47<=x48)));

    if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	int16_t x50 = INT16_MIN;
	int32_t x52 = -1;
	volatile int32_t t12 = -814994567;

    t12 = (x49&(x50<=(x51<=x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 69U;
	int64_t x54 = -1LL;
	volatile uint32_t x55 = 0U;
	int64_t x56 = -7736LL;
	volatile int32_t t13 = -144679;

    t13 = (x53&(x54<=(x55<=x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = UINT64_MAX;
	uint32_t x58 = 502736910U;
	int32_t x59 = 11740217;
	uint64_t t14 = 48928897636134LLU;

    t14 = (x57&(x58<=(x59<=x60)));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x62 = -1;
	int64_t x63 = 11665046LL;
	int16_t x64 = INT16_MIN;
	int32_t t15 = 0;

    t15 = (x61&(x62<=(x63<=x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x65 = -50LL;
	uint32_t x67 = 1730912378U;
	volatile int16_t x68 = INT16_MAX;
	volatile int64_t t16 = 31LL;

    t16 = (x65&(x66<=(x67<=x68)));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x70 = 29988516353981LL;
	static uint8_t x71 = UINT8_MAX;
	uint64_t t17 = 3249962326584LLU;

    t17 = (x69&(x70<=(x71<=x72)));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = UINT16_MAX;
	int16_t x74 = 92;
	static uint8_t x75 = 7U;
	int8_t x76 = 6;
	int32_t t18 = -640;

    t18 = (x73&(x74<=(x75<=x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 27U;
	int16_t x78 = INT16_MAX;
	int16_t x79 = INT16_MAX;
	volatile int32_t t19 = -412741365;

    t19 = (x77&(x78<=(x79<=x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = INT32_MIN;
	int32_t x82 = -1;
	static int16_t x84 = -40;
	int32_t t20 = 0;

    t20 = (x81&(x82<=(x83<=x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x86 = 276758LLU;
	uint16_t x87 = UINT16_MAX;
	static int8_t x88 = INT8_MIN;
	int32_t t21 = 0;

    t21 = (x85&(x86<=(x87<=x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = 430;
	uint64_t x90 = UINT64_MAX;
	uint32_t x92 = 4860U;

    t22 = (x89&(x90<=(x91<=x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	int32_t x95 = -430;
	static int64_t x96 = 650602697549930LL;
	volatile int32_t t23 = -443538;

    t23 = (x93&(x94<=(x95<=x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x99 = INT16_MIN;
	int64_t x100 = 253438490937888LL;
	volatile int32_t t24 = 0;

    t24 = (x97&(x98<=(x99<=x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x101 = INT64_MAX;
	volatile int16_t x102 = INT16_MIN;
	int64_t x103 = INT64_MIN;
	uint8_t x104 = 1U;

    t25 = (x101&(x102<=(x103<=x104)));

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = -1LL;
	int64_t x107 = -1LL;
	static int32_t x108 = INT32_MAX;
	volatile int64_t t26 = 838LL;

    t26 = (x105&(x106<=(x107<=x108)));

    if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 11080U;
	int32_t x110 = -1;
	static int64_t x111 = -5372LL;
	uint32_t x112 = UINT32_MAX;

    t27 = (x109&(x110<=(x111<=x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x114 = 30U;
	int16_t x116 = -1;
	static volatile int64_t t28 = -225613042819LL;

    t28 = (x113&(x114<=(x115<=x116)));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 6828U;
	int64_t x120 = -1LL;
	uint32_t t29 = 9U;

    t29 = (x117&(x118<=(x119<=x120)));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 4U;
	static int16_t x122 = 197;
	uint16_t x123 = UINT16_MAX;
	int16_t x124 = -206;
	int32_t t30 = -1;

    t30 = (x121&(x122<=(x123<=x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x126 = -2;
	int8_t x127 = INT8_MIN;
	volatile uint64_t x128 = UINT64_MAX;
	static volatile int32_t t31 = -190802032;

    t31 = (x125&(x126<=(x127<=x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x130 = INT8_MIN;
	static volatile int8_t x132 = INT8_MIN;
	volatile int32_t t32 = -616;

    t32 = (x129&(x130<=(x131<=x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x133 = INT16_MIN;
	static volatile int16_t x134 = INT16_MAX;
	int8_t x136 = -1;
	static int32_t t33 = -3;

    t33 = (x133&(x134<=(x135<=x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = 0;
	volatile int8_t x138 = INT8_MIN;
	volatile int32_t t34 = -437;

    t34 = (x137&(x138<=(x139<=x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -1LL;
	volatile int8_t x142 = 0;
	int32_t x143 = -9945589;
	static int32_t x144 = INT32_MAX;
	volatile int64_t t35 = -3526LL;

    t35 = (x141&(x142<=(x143<=x144)));

    if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = INT8_MAX;
	uint16_t x147 = 203U;
	volatile int16_t x148 = INT16_MIN;
	int32_t t36 = 0;

    t36 = (x145&(x146<=(x147<=x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 2902277941314076LLU;
	int16_t x150 = 8633;
	volatile uint64_t x151 = UINT64_MAX;
	static uint64_t t37 = 90672462502198LLU;

    t37 = (x149&(x150<=(x151<=x152)));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x153 = 0U;
	int8_t x154 = INT8_MIN;
	static int32_t x155 = -12169710;
	int8_t x156 = -1;

    t38 = (x153&(x154<=(x155<=x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x157 = UINT32_MAX;
	uint32_t x158 = 0U;
	int64_t x159 = INT64_MAX;
	int8_t x160 = INT8_MIN;
	volatile uint32_t t39 = 719U;

    t39 = (x157&(x158<=(x159<=x160)));

    if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x161 = UINT8_MAX;
	volatile uint8_t x162 = 0U;
	int64_t x163 = -1LL;
	int32_t x164 = INT32_MAX;
	static volatile int32_t t40 = -1;

    t40 = (x161&(x162<=(x163<=x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x165 = 98924U;
	int32_t x166 = INT32_MIN;
	volatile int32_t x167 = 1;
	uint64_t x168 = 49LLU;

    t41 = (x165&(x166<=(x167<=x168)));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x169 = INT8_MAX;
	int32_t x170 = INT32_MAX;
	int8_t x171 = INT8_MAX;
	static uint32_t x172 = UINT32_MAX;
	volatile int32_t t42 = -89981;

    t42 = (x169&(x170<=(x171<=x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x173 = INT16_MIN;
	uint32_t x174 = 333210538U;
	static int16_t x175 = INT16_MAX;
	volatile int32_t x176 = -3;
	int32_t t43 = -327;

    t43 = (x173&(x174<=(x175<=x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = INT16_MAX;
	int16_t x178 = -1;
	int8_t x179 = -2;
	int16_t x180 = INT16_MIN;
	int32_t t44 = 132247;

    t44 = (x177&(x178<=(x179<=x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = UINT16_MAX;
	static int8_t x182 = -1;

    t45 = (x181&(x182<=(x183<=x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = -1LL;
	int16_t x186 = INT16_MIN;
	volatile int8_t x187 = 12;
	static int64_t x188 = INT64_MAX;

    t46 = (x185&(x186<=(x187<=x188)));

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x189 = UINT16_MAX;
	static int64_t x190 = -1937986LL;
	int32_t x191 = INT32_MAX;

    t47 = (x189&(x190<=(x191<=x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = 0;
	static volatile uint64_t x194 = 33518362755LLU;
	int8_t x195 = INT8_MIN;
	int32_t t48 = -4;

    t48 = (x193&(x194<=(x195<=x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = UINT64_MAX;
	volatile int16_t x198 = INT16_MIN;
	static uint64_t x199 = 315LLU;
	static int8_t x200 = -1;
	volatile uint64_t t49 = 17LLU;

    t49 = (x197&(x198<=(x199<=x200)));

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x202 = INT8_MIN;
	volatile uint8_t x203 = 31U;
	int32_t x204 = -1;
	static int64_t t50 = 23LL;

    t50 = (x201&(x202<=(x203<=x204)));

    if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x205 = INT16_MAX;
	int64_t x207 = INT64_MAX;
	static uint32_t x208 = 0U;

    t51 = (x205&(x206<=(x207<=x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = UINT8_MAX;
	int64_t x210 = INT64_MIN;
	volatile uint8_t x211 = 11U;
	int32_t x212 = -3862;
	volatile int32_t t52 = 1;

    t52 = (x209&(x210<=(x211<=x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x214 = INT8_MAX;
	static volatile uint32_t x215 = UINT32_MAX;
	int16_t x216 = -2867;
	int32_t t53 = 398527;

    t53 = (x213&(x214<=(x215<=x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 1814594112LLU;
	volatile uint8_t x218 = 3U;
	int32_t x219 = INT32_MIN;

    t54 = (x217&(x218<=(x219<=x220)));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = 1LL;
	int32_t x222 = 2664;
	static volatile int32_t x224 = INT32_MAX;
	int64_t t55 = 138201277542775517LL;

    t55 = (x221&(x222<=(x223<=x224)));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -34726401LL;
	int64_t x226 = 41446LL;
	static volatile int64_t t56 = 79540663832240LL;

    t56 = (x225&(x226<=(x227<=x228)));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = 29;
	int32_t x230 = INT32_MIN;
	static int32_t x231 = INT32_MIN;
	int32_t t57 = -6;

    t57 = (x229&(x230<=(x231<=x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = UINT64_MAX;
	volatile uint8_t x234 = 3U;
	int8_t x236 = -1;

    t58 = (x233&(x234<=(x235<=x236)));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x237 = INT16_MIN;
	int32_t x238 = INT32_MAX;
	static uint16_t x239 = 1U;
	volatile int8_t x240 = 24;
	volatile int32_t t59 = 10;

    t59 = (x237&(x238<=(x239<=x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = 1675U;
	int8_t x242 = INT8_MAX;
	uint8_t x243 = 8U;
	volatile int32_t x244 = INT32_MIN;
	int32_t t60 = -21360236;

    t60 = (x241&(x242<=(x243<=x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = -31;
	volatile uint8_t x246 = 49U;
	int32_t x248 = INT32_MIN;
	volatile int32_t t61 = -18;

    t61 = (x245&(x246<=(x247<=x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x249 = INT16_MAX;
	int16_t x251 = INT16_MIN;
	int16_t x252 = -3;
	static volatile int32_t t62 = 10427;

    t62 = (x249&(x250<=(x251<=x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x254 = 174;
	static uint64_t x255 = 3554469LLU;
	int16_t x256 = INT16_MAX;
	volatile int32_t t63 = -6049;

    t63 = (x253&(x254<=(x255<=x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x258 = INT16_MIN;
	int64_t x260 = INT64_MIN;

    t64 = (x257&(x258<=(x259<=x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MIN;
	uint16_t x262 = 49U;
	static volatile int32_t t65 = 20398;

    t65 = (x261&(x262<=(x263<=x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = 11273;
	uint16_t x266 = 330U;
	static volatile int8_t x267 = -1;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = -18303274;

    t66 = (x265&(x266<=(x267<=x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = 75U;
	volatile int16_t x271 = 4;
	int32_t x272 = INT32_MIN;
	volatile int32_t t67 = 2580292;

    t67 = (x269&(x270<=(x271<=x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x274 = -1;
	int32_t x275 = 450525790;
	static volatile int64_t x276 = -43704LL;

    t68 = (x273&(x274<=(x275<=x276)));

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x277 = 1393;
	static uint64_t x278 = 1120127864LLU;
	volatile int64_t x279 = -1LL;
	volatile int32_t x280 = INT32_MIN;
	int32_t t69 = 11;

    t69 = (x277&(x278<=(x279<=x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = -15616231;
	uint8_t x282 = 1U;
	int8_t x283 = 14;
	static int64_t x284 = -19447LL;
	volatile int32_t t70 = -2;

    t70 = (x281&(x282<=(x283<=x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x288 = 936U;
	static volatile int64_t t71 = 9250271253368114LL;

    t71 = (x285&(x286<=(x287<=x288)));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = 1;
	uint16_t x291 = 417U;
	static uint64_t x292 = 1908252426714412LLU;
	int32_t t72 = 932;

    t72 = (x289&(x290<=(x291<=x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -1LL;
	uint64_t x295 = 2355151318326799622LLU;
	int32_t x296 = -64537922;
	int64_t t73 = 10992049978343LL;

    t73 = (x293&(x294<=(x295<=x296)));

    if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	volatile int16_t x298 = INT16_MIN;
	static int64_t x299 = -1LL;
	int64_t t74 = 1217LL;

    t74 = (x297&(x298<=(x299<=x300)));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x301 = -10146324809LL;
	int32_t x302 = -1;
	static int16_t x303 = INT16_MIN;
	uint32_t x304 = 1710779650U;
	volatile int64_t t75 = -546616437328248265LL;

    t75 = (x301&(x302<=(x303<=x304)));

    if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x307 = INT64_MAX;
	int32_t x308 = -1;
	volatile int32_t t76 = 523209;

    t76 = (x305&(x306<=(x307<=x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = 10LLU;
	static uint32_t x310 = UINT32_MAX;
	uint64_t x311 = 5374143394944LLU;
	static volatile uint64_t x312 = 54775LLU;
	static uint64_t t77 = 143612541168315247LLU;

    t77 = (x309&(x310<=(x311<=x312)));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x315 = 8122;
	int64_t x316 = INT64_MAX;
	volatile uint32_t t78 = 3187055U;

    t78 = (x313&(x314<=(x315<=x316)));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 94U;
	static volatile uint16_t x318 = UINT16_MAX;
	uint32_t x319 = 1910U;
	volatile uint8_t x320 = UINT8_MAX;
	volatile int32_t t79 = -117933461;

    t79 = (x317&(x318<=(x319<=x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MIN;
	volatile uint16_t x322 = 3U;
	static int8_t x323 = 42;
	volatile uint32_t x324 = UINT32_MAX;
	int32_t t80 = -64;

    t80 = (x321&(x322<=(x323<=x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x325 = 376U;
	static int8_t x327 = -1;
	static uint64_t x328 = UINT64_MAX;
	static volatile int32_t t81 = -1;

    t81 = (x325&(x326<=(x327<=x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x329 = 3U;
	int8_t x331 = 15;
	int8_t x332 = 9;
	int32_t t82 = -2;

    t82 = (x329&(x330<=(x331<=x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MAX;
	static uint32_t x334 = 65516U;
	static volatile int64_t t83 = 1489761421905LL;

    t83 = (x333&(x334<=(x335<=x336)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x337 = UINT32_MAX;
	volatile uint32_t x338 = 2920743U;
	int64_t x339 = 5LL;
	volatile int8_t x340 = 1;
	uint32_t t84 = 4545169U;

    t84 = (x337&(x338<=(x339<=x340)));

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = 2U;
	volatile int8_t x342 = INT8_MAX;
	volatile int64_t x343 = 11584LL;
	volatile int32_t t85 = 239;

    t85 = (x341&(x342<=(x343<=x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MIN;
	int16_t x347 = -14;
	uint16_t x348 = 1176U;
	static int32_t t86 = 503639;

    t86 = (x345&(x346<=(x347<=x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x349 = 3;
	int32_t x350 = 19802;
	int8_t x351 = INT8_MAX;
	int8_t x352 = INT8_MIN;
	int32_t t87 = 505750215;

    t87 = (x349&(x350<=(x351<=x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = 434U;
	int32_t x354 = INT32_MIN;
	uint64_t x355 = 23812205LLU;
	int32_t t88 = -1303439;

    t88 = (x353&(x354<=(x355<=x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x357 = 31U;
	uint64_t x358 = 5134454LLU;
	int32_t x359 = -3834181;
	uint16_t x360 = 31015U;
	uint32_t t89 = 11U;

    t89 = (x357&(x358<=(x359<=x360)));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = 5U;
	int16_t x362 = 0;
	int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MIN;

    t90 = (x361&(x362<=(x363<=x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x366 = -1;
	static int16_t x367 = -97;
	static uint8_t x368 = 3U;

    t91 = (x365&(x366<=(x367<=x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x369 = 12U;
	volatile int16_t x370 = 220;
	uint32_t x372 = 42584253U;
	volatile int32_t t92 = 76;

    t92 = (x369&(x370<=(x371<=x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MIN;
	int64_t x374 = 2749760435149571LL;
	int16_t x375 = -3535;
	int16_t x376 = 110;
	int32_t t93 = 1203;

    t93 = (x373&(x374<=(x375<=x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MIN;
	uint16_t x378 = 5120U;
	int64_t x379 = -1LL;

    t94 = (x377&(x378<=(x379<=x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 82U;
	static uint8_t x383 = UINT8_MAX;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = -776150;

    t95 = (x381&(x382<=(x383<=x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x385 = -10;
	int32_t x386 = -405794;
	int32_t x387 = INT32_MIN;
	int32_t t96 = -15902;

    t96 = (x385&(x386<=(x387<=x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = 9;
	volatile int16_t x390 = INT16_MIN;
	int16_t x392 = INT16_MIN;

    t97 = (x389&(x390<=(x391<=x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 937U;
	volatile int8_t x394 = INT8_MIN;
	int64_t x395 = -1115376017772064643LL;
	uint64_t x396 = 498216054193915630LLU;

    t98 = (x393&(x394<=(x395<=x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x397 = 0;
	static int8_t x398 = INT8_MIN;
	volatile int16_t x399 = INT16_MIN;
	int64_t x400 = INT64_MAX;
	int32_t t99 = -121;

    t99 = (x397&(x398<=(x399<=x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x402 = INT8_MAX;
	static int8_t x403 = -1;
	static volatile uint64_t x404 = UINT64_MAX;
	static int32_t t100 = 944856438;

    t100 = (x401&(x402<=(x403<=x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -1;
	static int16_t x406 = -1;
	static int16_t x407 = INT16_MIN;
	static uint32_t x408 = 1U;
	int32_t t101 = 27;

    t101 = (x405&(x406<=(x407<=x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	volatile int32_t x410 = INT32_MIN;
	volatile int8_t x411 = -1;
	uint8_t x412 = 121U;
	volatile int32_t t102 = 252;

    t102 = (x409&(x410<=(x411<=x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = 0;
	uint16_t x414 = 1U;
	uint8_t x415 = UINT8_MAX;
	int64_t x416 = INT64_MIN;
	static int32_t t103 = -6819446;

    t103 = (x413&(x414<=(x415<=x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x417 = 254835105644842336LL;
	int8_t x420 = -1;
	volatile int64_t t104 = -17385723001355LL;

    t104 = (x417&(x418<=(x419<=x420)));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = 577867247U;
	int64_t x422 = INT64_MAX;
	uint32_t x423 = 9155883U;
	static uint32_t x424 = 26040453U;
	volatile uint32_t t105 = 1954903U;

    t105 = (x421&(x422<=(x423<=x424)));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x425 = UINT8_MAX;
	int64_t x426 = 85584LL;
	volatile uint16_t x427 = 37U;
	int64_t x428 = 336560868LL;

    t106 = (x425&(x426<=(x427<=x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MAX;
	int16_t x430 = INT16_MAX;
	int32_t t107 = 1262;

    t107 = (x429&(x430<=(x431<=x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -1;
	static int32_t x434 = -1;
	volatile int64_t x435 = 25339709366054457LL;
	int8_t x436 = INT8_MIN;

    t108 = (x433&(x434<=(x435<=x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 403U;
	int64_t x438 = INT64_MAX;
	int8_t x439 = INT8_MAX;
	int64_t x440 = -3987LL;

    t109 = (x437&(x438<=(x439<=x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int16_t x441 = -1;
	uint16_t x442 = 1818U;
	int16_t x444 = -1;
	int32_t t110 = -11458375;

    t110 = (x441&(x442<=(x443<=x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = UINT16_MAX;
	int32_t x447 = INT32_MIN;
	static uint8_t x448 = UINT8_MAX;
	static volatile int32_t t111 = 58855;

    t111 = (x445&(x446<=(x447<=x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x449 = INT8_MIN;
	int8_t x450 = 27;
	int16_t x451 = 456;
	int16_t x452 = -3128;
	static volatile int32_t t112 = -14401781;

    t112 = (x449&(x450<=(x451<=x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x453 = INT8_MIN;
	volatile int64_t x454 = INT64_MIN;
	volatile int32_t x455 = -1;
	int64_t x456 = -116321443LL;
	volatile int32_t t113 = -509786156;

    t113 = (x453&(x454<=(x455<=x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x457 = UINT64_MAX;
	int16_t x459 = 69;
	volatile int8_t x460 = -1;
	volatile uint64_t t114 = 69LLU;

    t114 = (x457&(x458<=(x459<=x460)));

    if (t114 != 1LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = 32061697387682LL;
	static volatile uint16_t x464 = UINT16_MAX;

    t115 = (x461&(x462<=(x463<=x464)));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -7;
	volatile int16_t x467 = 1188;
	static volatile int16_t x468 = -1;
	volatile int32_t t116 = -1;

    t116 = (x465&(x466<=(x467<=x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MIN;
	volatile uint8_t x470 = UINT8_MAX;
	static uint16_t x471 = 2U;
	uint16_t x472 = 63U;

    t117 = (x469&(x470<=(x471<=x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x473 = INT8_MAX;
	uint16_t x475 = 6U;
	int32_t t118 = -10246;

    t118 = (x473&(x474<=(x475<=x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x478 = INT16_MAX;
	int64_t x479 = -42LL;
	volatile uint16_t x480 = 2274U;
	uint32_t t119 = 160822853U;

    t119 = (x477&(x478<=(x479<=x480)));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x481 = INT16_MAX;
	int8_t x482 = INT8_MIN;
	uint8_t x483 = 6U;
	int32_t x484 = INT32_MIN;
	int32_t t120 = -552920;

    t120 = (x481&(x482<=(x483<=x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = 10;
	static uint16_t x487 = 11U;
	static uint32_t x488 = 227109U;
	volatile int32_t t121 = 3045241;

    t121 = (x485&(x486<=(x487<=x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 4015345130055093514LLU;
	static uint16_t x490 = 8788U;
	int8_t x492 = -1;
	volatile uint64_t t122 = 1LLU;

    t122 = (x489&(x490<=(x491<=x492)));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -1LL;
	static volatile uint64_t x495 = 460531896LLU;
	volatile int64_t t123 = -5634089119004LL;

    t123 = (x493&(x494<=(x495<=x496)));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x497 = -1;
	int16_t x498 = -1;
	static uint16_t x499 = 2694U;
	int32_t t124 = 7042156;

    t124 = (x497&(x498<=(x499<=x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = UINT16_MAX;
	volatile uint64_t x502 = UINT64_MAX;
	int64_t x504 = -155213LL;

    t125 = (x501&(x502<=(x503<=x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = 19498U;
	int64_t x508 = -1LL;

    t126 = (x505&(x506<=(x507<=x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x509 = UINT64_MAX;
	static int64_t x510 = INT64_MIN;
	int64_t x511 = 13140096985230153LL;

    t127 = (x509&(x510<=(x511<=x512)));

    if (t127 != 1LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x513 = -1LL;
	int8_t x515 = -1;
	uint32_t x516 = UINT32_MAX;
	volatile int64_t t128 = 1797LL;

    t128 = (x513&(x514<=(x515<=x516)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	int16_t x518 = INT16_MAX;
	static int8_t x519 = -18;
	uint32_t x520 = UINT32_MAX;

    t129 = (x517&(x518<=(x519<=x520)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x521 = 195714118LL;
	uint32_t x522 = UINT32_MAX;
	static int64_t x523 = INT64_MIN;
	int8_t x524 = INT8_MIN;

    t130 = (x521&(x522<=(x523<=x524)));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MAX;
	int8_t x526 = -1;
	static int16_t x527 = INT16_MIN;
	int32_t x528 = 2476;
	int32_t t131 = 0;

    t131 = (x525&(x526<=(x527<=x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x529 = INT16_MIN;
	uint64_t x530 = 177133231677266488LLU;
	uint16_t x531 = UINT16_MAX;
	static int32_t x532 = INT32_MIN;
	int32_t t132 = 929922530;

    t132 = (x529&(x530<=(x531<=x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = 224;
	int64_t x534 = -1LL;
	int64_t x535 = INT64_MAX;
	uint64_t x536 = 3LLU;
	int32_t t133 = 48;

    t133 = (x533&(x534<=(x535<=x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	uint64_t x538 = 6791911613563996932LLU;
	uint16_t x539 = 4652U;
	static volatile int32_t t134 = 35427;

    t134 = (x537&(x538<=(x539<=x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = 0U;
	static int16_t x542 = INT16_MIN;
	int16_t x543 = 0;
	int8_t x544 = -3;
	static volatile int32_t t135 = -27750;

    t135 = (x541&(x542<=(x543<=x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x547 = 141220;
	volatile int32_t x548 = 208105983;
	int32_t t136 = 177507;

    t136 = (x545&(x546<=(x547<=x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MIN;
	uint32_t x550 = UINT32_MAX;
	volatile uint16_t x551 = UINT16_MAX;
	int8_t x552 = INT8_MIN;
	static volatile int64_t t137 = -19LL;

    t137 = (x549&(x550<=(x551<=x552)));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = UINT16_MAX;
	int16_t x554 = -1;
	uint64_t x555 = 388581929508LLU;
	int16_t x556 = 0;

    t138 = (x553&(x554<=(x555<=x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = 1U;
	uint64_t x558 = 261236344424517LLU;
	uint8_t x559 = UINT8_MAX;
	uint8_t x560 = 93U;

    t139 = (x557&(x558<=(x559<=x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MIN;
	int64_t x562 = INT64_MIN;
	static int16_t x563 = 181;
	uint32_t x564 = 0U;

    t140 = (x561&(x562<=(x563<=x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = -15;
	int32_t x566 = INT32_MAX;
	static int32_t x567 = -14026;
	uint16_t x568 = 5574U;

    t141 = (x565&(x566<=(x567<=x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x569 = -1;
	uint32_t x570 = 326428192U;
	int8_t x571 = -1;
	volatile int32_t t142 = 0;

    t142 = (x569&(x570<=(x571<=x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	int16_t x574 = INT16_MAX;
	uint32_t x575 = 585U;
	int64_t x576 = INT64_MIN;
	volatile int32_t t143 = 149977;

    t143 = (x573&(x574<=(x575<=x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 166373021U;
	int32_t x578 = 78539;
	int8_t x579 = -33;
	static int64_t x580 = -1LL;
	uint32_t t144 = 655556799U;

    t144 = (x577&(x578<=(x579<=x580)));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x582 = 5U;
	static uint32_t x583 = 4668341U;
	static uint8_t x584 = UINT8_MAX;
	volatile int32_t t145 = -317025076;

    t145 = (x581&(x582<=(x583<=x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x586 = UINT8_MAX;
	uint32_t x587 = 4U;
	volatile int32_t x588 = -3045815;
	int64_t t146 = -148LL;

    t146 = (x585&(x586<=(x587<=x588)));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x591 = 44687271375611LL;
	static volatile int32_t t147 = 11567070;

    t147 = (x589&(x590<=(x591<=x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MAX;
	int64_t x596 = 29LL;

    t148 = (x593&(x594<=(x595<=x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = 23807650775634426LL;
	static volatile uint64_t x598 = 277LLU;
	uint16_t x599 = 3183U;
	int64_t t149 = -300754LL;

    t149 = (x597&(x598<=(x599<=x600)));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = 9;
	volatile int32_t x602 = INT32_MAX;
	static uint64_t x603 = 141346736LLU;
	int32_t t150 = 35840;

    t150 = (x601&(x602<=(x603<=x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = 4;
	static uint64_t x607 = 165366491500206723LLU;
	volatile uint8_t x608 = 86U;
	volatile int32_t t151 = 3994;

    t151 = (x605&(x606<=(x607<=x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = UINT8_MAX;
	volatile uint64_t x610 = 10792LLU;
	int64_t x611 = INT64_MAX;
	volatile int32_t x612 = -1;

    t152 = (x609&(x610<=(x611<=x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x613 = 0;
	int16_t x614 = -1;
	static int32_t x615 = INT32_MIN;
	uint64_t x616 = UINT64_MAX;
	int32_t t153 = -13;

    t153 = (x613&(x614<=(x615<=x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x619 = 733922356993067785LLU;
	uint8_t x620 = 37U;
	static int64_t t154 = -50262LL;

    t154 = (x617&(x618<=(x619<=x620)));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x621 = INT32_MIN;
	int8_t x622 = -3;

    t155 = (x621&(x622<=(x623<=x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = -1;
	uint32_t x626 = 73U;
	int8_t x627 = 51;
	int16_t x628 = -1;

    t156 = (x625&(x626<=(x627<=x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x629 = -113295419LL;
	int16_t x630 = INT16_MAX;
	uint16_t x631 = 11U;
	volatile uint64_t x632 = UINT64_MAX;
	int64_t t157 = -2824135506LL;

    t157 = (x629&(x630<=(x631<=x632)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x635 = INT8_MAX;
	volatile uint64_t x636 = 1292051126623749063LLU;

    t158 = (x633&(x634<=(x635<=x636)));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 237U;
	int8_t x638 = INT8_MAX;
	int32_t x639 = INT32_MAX;
	uint16_t x640 = UINT16_MAX;
	int32_t t159 = 9803878;

    t159 = (x637&(x638<=(x639<=x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x642 = INT32_MAX;
	int64_t x643 = INT64_MAX;
	uint64_t x644 = 0LLU;
	volatile int64_t t160 = 905543517457739698LL;

    t160 = (x641&(x642<=(x643<=x644)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MAX;
	int32_t x646 = -1;
	int64_t x647 = 31806966858831177LL;
	static volatile int32_t t161 = 59287;

    t161 = (x645&(x646<=(x647<=x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MIN;
	static volatile uint32_t x650 = 5651U;
	static volatile uint32_t x651 = UINT32_MAX;
	volatile int32_t x652 = INT32_MIN;
	int32_t t162 = 1674;

    t162 = (x649&(x650<=(x651<=x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x654 = INT8_MAX;
	static volatile uint16_t x655 = 837U;
	volatile int32_t x656 = 398262421;
	volatile uint32_t t163 = 3U;

    t163 = (x653&(x654<=(x655<=x656)));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	volatile int64_t x658 = INT64_MAX;
	static int8_t x659 = INT8_MAX;
	int8_t x660 = -1;
	volatile int32_t t164 = 295;

    t164 = (x657&(x658<=(x659<=x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x662 = INT16_MIN;
	uint8_t x663 = UINT8_MAX;
	volatile int8_t x664 = INT8_MIN;
	static int32_t t165 = -2344523;

    t165 = (x661&(x662<=(x663<=x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = 7U;
	int32_t x666 = -1;
	int8_t x668 = 8;
	static volatile int32_t t166 = -8853468;

    t166 = (x665&(x666<=(x667<=x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MIN;
	volatile uint8_t x670 = UINT8_MAX;
	uint16_t x671 = 18U;
	static int32_t x672 = -250602374;

    t167 = (x669&(x670<=(x671<=x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x674 = INT32_MAX;
	int16_t x675 = -1;
	volatile int8_t x676 = INT8_MIN;
	static volatile int32_t t168 = -1003791;

    t168 = (x673&(x674<=(x675<=x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x677 = 179076448U;
	static int16_t x678 = -1;
	int32_t x679 = INT32_MIN;
	volatile uint8_t x680 = 4U;
	volatile uint32_t t169 = 1U;

    t169 = (x677&(x678<=(x679<=x680)));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	int8_t x682 = INT8_MIN;
	volatile int32_t x683 = -671;
	int64_t x684 = INT64_MIN;
	int32_t t170 = -12531603;

    t170 = (x681&(x682<=(x683<=x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = -1;
	static int64_t x686 = INT64_MAX;
	volatile int64_t x687 = INT64_MIN;
	static int8_t x688 = -1;
	volatile int32_t t171 = -2022787;

    t171 = (x685&(x686<=(x687<=x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x690 = 82594U;
	int32_t x691 = -1687249;
	int16_t x692 = 471;
	static int64_t t172 = 82410LL;

    t172 = (x689&(x690<=(x691<=x692)));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x693 = 3782583758175974LL;
	int8_t x696 = INT8_MAX;
	static volatile int64_t t173 = 19118635532807502LL;

    t173 = (x693&(x694<=(x695<=x696)));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x698 = UINT16_MAX;
	int16_t x699 = INT16_MAX;
	int16_t x700 = INT16_MAX;

    t174 = (x697&(x698<=(x699<=x700)));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = -48170;
	int8_t x702 = 14;
	int64_t x703 = 4LL;
	uint16_t x704 = UINT16_MAX;
	static int32_t t175 = 216711017;

    t175 = (x701&(x702<=(x703<=x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = -1LL;
	int16_t x706 = -30;
	int32_t x707 = -13934;
	uint64_t x708 = UINT64_MAX;
	volatile int64_t t176 = 568322835898877LL;

    t176 = (x705&(x706<=(x707<=x708)));

    if (t176 != 1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	volatile int64_t x710 = -1LL;
	int32_t x712 = -764820146;
	volatile int32_t t177 = -832639;

    t177 = (x709&(x710<=(x711<=x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = 1915141828360465966LL;
	static volatile int8_t x714 = -1;
	int64_t x716 = -1LL;

    t178 = (x713&(x714<=(x715<=x716)));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x718 = INT16_MAX;
	static int16_t x719 = 1;
	static uint32_t x720 = 57U;
	static int32_t t179 = 34623;

    t179 = (x717&(x718<=(x719<=x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -4861;
	int16_t x723 = INT16_MIN;
	int32_t x724 = 296716;
	volatile int32_t t180 = 1;

    t180 = (x721&(x722<=(x723<=x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 89U;
	static uint16_t x726 = 4552U;
	volatile uint64_t x727 = 57798351LLU;
	static volatile int64_t x728 = INT64_MIN;
	volatile int32_t t181 = 11;

    t181 = (x725&(x726<=(x727<=x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x730 = -78;
	static uint32_t x731 = UINT32_MAX;
	volatile uint64_t x732 = 48269LLU;

    t182 = (x729&(x730<=(x731<=x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x733 = -13;
	int8_t x735 = 12;
	uint32_t x736 = 406804301U;
	int32_t t183 = -20213;

    t183 = (x733&(x734<=(x735<=x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = 1U;
	uint16_t x739 = UINT16_MAX;
	int32_t t184 = 13350994;

    t184 = (x737&(x738<=(x739<=x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x741 = INT8_MIN;
	static uint16_t x742 = 259U;
	uint16_t x743 = 1302U;

    t185 = (x741&(x742<=(x743<=x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x746 = INT64_MAX;
	int8_t x747 = -1;
	uint8_t x748 = 2U;
	int32_t t186 = 54;

    t186 = (x745&(x746<=(x747<=x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = UINT32_MAX;
	volatile int32_t x750 = 19;
	uint16_t x751 = UINT16_MAX;
	uint32_t t187 = 729U;

    t187 = (x749&(x750<=(x751<=x752)));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MAX;
	volatile int8_t x754 = 1;
	volatile int8_t x755 = -3;
	uint32_t x756 = 1U;
	int32_t t188 = 936;

    t188 = (x753&(x754<=(x755<=x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x757 = INT32_MIN;
	static uint8_t x758 = 9U;
	int8_t x759 = INT8_MIN;
	int16_t x760 = 3;
	volatile int32_t t189 = -90282928;

    t189 = (x757&(x758<=(x759<=x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 68U;
	int8_t x762 = 0;
	static uint8_t x763 = 4U;
	int32_t x764 = -278162;
	volatile int32_t t190 = 1;

    t190 = (x761&(x762<=(x763<=x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x765 = INT8_MIN;
	int16_t x766 = INT16_MIN;
	int16_t x767 = -4898;
	static int64_t x768 = -1LL;

    t191 = (x765&(x766<=(x767<=x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MIN;
	uint16_t x771 = UINT16_MAX;
	int8_t x772 = -1;
	volatile int32_t t192 = 2925;

    t192 = (x769&(x770<=(x771<=x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x773 = UINT32_MAX;
	uint16_t x775 = 1530U;
	volatile uint64_t x776 = UINT64_MAX;
	uint32_t t193 = 7569926U;

    t193 = (x773&(x774<=(x775<=x776)));

    if (t193 != 1U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MAX;
	volatile int16_t x778 = INT16_MIN;
	volatile int64_t x779 = -295887LL;
	volatile int64_t x780 = INT64_MIN;
	int64_t t194 = 573432801LL;

    t194 = (x777&(x778<=(x779<=x780)));

    if (t194 != 1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x781 = INT16_MAX;
	int16_t x782 = 1;
	uint64_t x784 = UINT64_MAX;
	volatile int32_t t195 = 0;

    t195 = (x781&(x782<=(x783<=x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 5518682818LLU;
	int8_t x787 = INT8_MIN;
	volatile int64_t x788 = -18622690769433204LL;
	uint64_t t196 = 1LLU;

    t196 = (x785&(x786<=(x787<=x788)));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x791 = 54U;
	static uint8_t x792 = UINT8_MAX;

    t197 = (x789&(x790<=(x791<=x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 5180U;
	int8_t x794 = INT8_MIN;
	int16_t x795 = INT16_MAX;
	uint16_t x796 = 467U;
	volatile uint32_t t198 = 0U;

    t198 = (x793&(x794<=(x795<=x796)));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int64_t x797 = INT64_MIN;
	volatile int16_t x798 = -1;
	uint32_t x799 = UINT32_MAX;
	static volatile int64_t t199 = -2166355627062025155LL;

    t199 = (x797&(x798<=(x799<=x800)));

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

