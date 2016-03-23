
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

static int8_t x8 = INT8_MIN;
int32_t t1 = 13688311;
int64_t x31 = -1LL;
int32_t t7 = 364364537;
int8_t x38 = -1;
uint16_t x43 = 135U;
int8_t x50 = INT8_MAX;
int32_t x51 = -41395;
int32_t x61 = INT32_MAX;
static int16_t x65 = 452;
int32_t t16 = -1827;
int8_t x69 = INT8_MAX;
static int16_t x76 = -1;
static uint8_t x80 = 76U;
int32_t t19 = -137787;
static volatile int32_t t20 = -153090274;
static int32_t x90 = 1281962;
int8_t x91 = INT8_MAX;
int32_t t22 = -27;
int8_t x97 = -1;
static volatile int32_t t25 = 8;
volatile int16_t x105 = INT16_MAX;
static volatile int32_t t26 = 8185270;
uint32_t x109 = 67033U;
uint8_t x110 = 1U;
static int32_t t27 = -82150298;
volatile int32_t t29 = 1;
int64_t x121 = -1LL;
int64_t x126 = -9189LL;
int64_t x129 = INT64_MAX;
uint16_t x130 = 4U;
static uint64_t x132 = 1849LLU;
int64_t x137 = -1LL;
volatile int32_t t34 = 8;
static int64_t x143 = -1LL;
static int8_t x146 = INT8_MAX;
int8_t x147 = INT8_MIN;
static uint16_t x152 = 12877U;
int8_t x156 = 1;
int32_t t38 = 1031209072;
int64_t x160 = INT64_MIN;
uint8_t x163 = 1U;
int32_t t40 = -585;
int8_t x167 = -14;
uint16_t x169 = 56U;
int16_t x179 = -605;
static int32_t x182 = -1;
volatile int64_t x184 = -1LL;
int32_t x187 = INT32_MIN;
int64_t x191 = 18315698515210146LL;
static uint16_t x193 = 169U;
static uint64_t x194 = 3121702876724LLU;
volatile uint64_t x196 = UINT64_MAX;
volatile int32_t t48 = -20663528;
volatile int32_t t49 = 6;
uint8_t x201 = UINT8_MAX;
volatile int32_t t50 = -408394716;
int32_t t51 = 11;
int8_t x211 = 2;
volatile uint16_t x212 = 0U;
int16_t x229 = -1114;
volatile int32_t t58 = 14;
int64_t x242 = 15670LL;
static uint32_t x243 = 337U;
volatile int16_t x245 = INT16_MIN;
static int8_t x247 = INT8_MIN;
volatile int32_t t62 = 1463;
volatile int32_t t63 = 123;
static int32_t x265 = -513969;
volatile uint16_t x275 = 8639U;
uint64_t x276 = 251359034086133LLU;
int64_t x282 = INT64_MIN;
int32_t x290 = -1;
int32_t t72 = 17;
volatile int16_t x293 = INT16_MIN;
volatile int32_t t73 = -1356148;
int8_t x299 = INT8_MAX;
static volatile int8_t x302 = INT8_MIN;
int32_t x305 = -554035586;
static uint64_t x307 = 972366536841203740LLU;
uint16_t x308 = 620U;
int8_t x311 = INT8_MAX;
int32_t t77 = -1;
uint32_t x320 = 1168849U;
volatile uint64_t x324 = 13992474586LLU;
static int64_t x328 = -1LL;
uint8_t x333 = UINT8_MAX;
int64_t x335 = INT64_MAX;
uint16_t x340 = 2U;
int32_t x353 = INT32_MIN;
volatile int32_t t88 = 1;
int16_t x359 = INT16_MAX;
static int16_t x360 = 4122;
static int32_t x362 = -662;
int8_t x363 = INT8_MAX;
int32_t x368 = INT32_MIN;
static int32_t x377 = INT32_MIN;
int64_t x382 = INT64_MAX;
int8_t x392 = INT8_MIN;
volatile int32_t t97 = 1;
int16_t x398 = -1981;
volatile int16_t x400 = -1;
static int32_t x402 = -6722;
static uint8_t x403 = 1U;
volatile int32_t x405 = INT32_MIN;
volatile uint64_t x406 = UINT64_MAX;
int16_t x407 = INT16_MIN;
int64_t x408 = 297147247394892936LL;
int32_t x413 = -1;
int16_t x416 = INT16_MIN;
int32_t t103 = 193321238;
int32_t x418 = 7275;
int8_t x420 = -15;
int16_t x422 = 3;
static volatile uint64_t x424 = 315896159597LLU;
uint32_t x428 = 11221U;
int16_t x432 = -1468;
int64_t x433 = -893206151LL;
uint16_t x435 = 414U;
uint16_t x450 = 49U;
int32_t t113 = -10389130;
uint32_t x459 = 362U;
uint32_t x460 = 1581162123U;
int32_t t114 = 55897667;
volatile int32_t x468 = -1;
int8_t x469 = -1;
int32_t x470 = -1;
volatile int16_t x477 = INT16_MIN;
int64_t x483 = INT64_MAX;
uint16_t x488 = UINT16_MAX;
uint8_t x496 = UINT8_MAX;
int64_t x501 = -1LL;
int64_t x503 = 6872554532969025LL;
int16_t x507 = 11481;
int64_t x510 = 0LL;
static int64_t x513 = INT64_MIN;
int64_t x517 = 3387675298498545369LL;
uint16_t x530 = 4U;
uint16_t x531 = 4U;
uint8_t x532 = 7U;
int32_t t134 = -222;
volatile uint64_t x541 = 23123LLU;
int64_t x544 = INT64_MAX;
volatile int64_t x546 = -693541357301445LL;
uint32_t x550 = 382425132U;
static volatile int64_t x553 = 792273896905LL;
uint64_t x555 = UINT64_MAX;
int16_t x558 = INT16_MAX;
volatile int32_t t139 = 2;
int32_t x575 = 2093919;
static uint32_t x577 = 244036U;
int32_t x579 = INT32_MIN;
uint64_t x581 = UINT64_MAX;
volatile int32_t t145 = 845675;
static int8_t x586 = INT8_MIN;
static uint8_t x589 = 2U;
volatile int16_t x597 = INT16_MIN;
int16_t x600 = INT16_MIN;
uint64_t x603 = 255112LLU;
int16_t x604 = INT16_MAX;
volatile int16_t x606 = INT16_MIN;
volatile int32_t t152 = 1040;
int16_t x616 = -45;
static int32_t t153 = -116444;
uint64_t x619 = 828761944018861LLU;
volatile int32_t t154 = 1707;
static volatile uint16_t x624 = UINT16_MAX;
static uint64_t x642 = 9527686LLU;
volatile int16_t x643 = -3;
volatile int32_t t160 = 12;
static int16_t x648 = INT16_MIN;
static uint16_t x649 = 23U;
int8_t x655 = INT8_MIN;
volatile int32_t x661 = INT32_MIN;
uint16_t x662 = 1U;
int16_t x666 = INT16_MAX;
static uint64_t x670 = 2490856150272405674LLU;
static int8_t x680 = INT8_MIN;
int32_t t172 = -76601687;
int16_t x693 = 8;
static int16_t x698 = INT16_MIN;
volatile int8_t x704 = -1;
static uint64_t x719 = 233335819587499LLU;
int8_t x720 = INT8_MAX;
int64_t x721 = INT64_MAX;
int32_t t181 = 1;
int8_t x730 = INT8_MIN;
volatile int64_t x733 = INT64_MAX;
uint32_t x739 = 70371U;
int32_t t184 = -571812878;
int16_t x741 = INT16_MAX;
uint64_t x742 = UINT64_MAX;
int32_t t185 = -169742589;
static int64_t x752 = INT64_MIN;
volatile uint16_t x760 = UINT16_MAX;
volatile int32_t t189 = -107;
int32_t t190 = -14020115;
uint64_t x769 = UINT64_MAX;
volatile int32_t t193 = 1417;
static int16_t x779 = -8623;
int64_t x784 = INT64_MAX;
volatile int32_t t195 = -105300;
int64_t x786 = -1LL;
int32_t x789 = -5255811;
uint8_t x796 = UINT8_MAX;
volatile int32_t t198 = -390799885;
uint64_t x799 = 6LLU;


void f0(void) {
    	static int8_t x1 = -1;
	int8_t x2 = -1;
	int8_t x3 = 14;
	int8_t x4 = INT8_MAX;
	static int32_t t0 = 14270;

    t0 = (x1<=(x2!=(x3>x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	int8_t x6 = 6;
	int32_t x7 = -1;

    t1 = (x5<=(x6!=(x7>x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 140139LLU;
	int16_t x10 = INT16_MAX;
	volatile int16_t x11 = INT16_MIN;
	static uint16_t x12 = 13132U;
	volatile int32_t t2 = -3;

    t2 = (x9<=(x10!=(x11>x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	volatile uint16_t x14 = 96U;
	static volatile int16_t x15 = -1;
	static int8_t x16 = INT8_MIN;
	int32_t t3 = 63;

    t3 = (x13<=(x14!=(x15>x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 184U;
	int16_t x18 = INT16_MIN;
	uint8_t x19 = 3U;
	int16_t x20 = 129;
	volatile int32_t t4 = 1;

    t4 = (x17<=(x18!=(x19>x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x21 = UINT64_MAX;
	uint64_t x22 = UINT64_MAX;
	int32_t x23 = INT32_MIN;
	static int64_t x24 = INT64_MIN;
	volatile int32_t t5 = -63;

    t5 = (x21<=(x22!=(x23>x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	uint32_t x26 = 1U;
	static int32_t x27 = 30550;
	int16_t x28 = INT16_MAX;
	volatile int32_t t6 = 5308;

    t6 = (x25<=(x26!=(x27>x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	int16_t x30 = 1853;
	volatile int32_t x32 = -3068682;

    t7 = (x29<=(x30!=(x31>x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MAX;
	static int64_t x34 = INT64_MAX;
	static uint64_t x35 = UINT64_MAX;
	static int8_t x36 = INT8_MIN;
	int32_t t8 = 110465;

    t8 = (x33<=(x34!=(x35>x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = UINT32_MAX;
	volatile int8_t x39 = INT8_MAX;
	int8_t x40 = INT8_MIN;
	int32_t t9 = 2240;

    t9 = (x37<=(x38!=(x39>x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint16_t x41 = 65U;
	uint64_t x42 = UINT64_MAX;
	uint8_t x44 = 5U;
	volatile int32_t t10 = 1892128;

    t10 = (x41<=(x42!=(x43>x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	volatile int64_t x46 = INT64_MIN;
	int32_t x47 = INT32_MIN;
	int64_t x48 = 0LL;
	static int32_t t11 = 389583;

    t11 = (x45<=(x46!=(x47>x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -373;
	volatile int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 129658;

    t12 = (x49<=(x50!=(x51>x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MAX;
	static volatile int64_t x54 = -23LL;
	uint64_t x55 = 272086354LLU;
	int16_t x56 = INT16_MAX;
	volatile int32_t t13 = 5161661;

    t13 = (x53<=(x54!=(x55>x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MIN;
	int16_t x59 = INT16_MIN;
	uint8_t x60 = UINT8_MAX;
	int32_t t14 = 133719164;

    t14 = (x57<=(x58!=(x59>x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x62 = -21636541835LL;
	int32_t x63 = -1;
	uint16_t x64 = 135U;
	int32_t t15 = -3652;

    t15 = (x61<=(x62!=(x63>x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x66 = INT8_MAX;
	int8_t x67 = 11;
	uint32_t x68 = 3090U;

    t16 = (x65<=(x66!=(x67>x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x70 = 26297295352649752LLU;
	int8_t x71 = INT8_MAX;
	static int8_t x72 = INT8_MAX;
	int32_t t17 = -7829316;

    t17 = (x69<=(x70!=(x71>x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = 2649386LL;
	uint32_t x74 = 2418283U;
	int8_t x75 = INT8_MAX;
	volatile int32_t t18 = 5727;

    t18 = (x73<=(x74!=(x75>x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = 1643;
	uint8_t x78 = 0U;
	int64_t x79 = 4124415664909LL;

    t19 = (x77<=(x78!=(x79>x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -1140391LL;
	volatile uint64_t x82 = 4211375LLU;
	uint64_t x83 = UINT64_MAX;
	static int64_t x84 = -1LL;

    t20 = (x81<=(x82!=(x83>x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 0U;
	volatile int32_t x86 = -1;
	static volatile int64_t x87 = INT64_MIN;
	uint32_t x88 = UINT32_MAX;
	volatile int32_t t21 = -3243;

    t21 = (x85<=(x86!=(x87>x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = INT64_MIN;
	int64_t x92 = INT64_MIN;

    t22 = (x89<=(x90!=(x91>x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MAX;
	uint32_t x94 = 19U;
	volatile uint64_t x95 = 293LLU;
	uint16_t x96 = 2U;
	static volatile int32_t t23 = 2777;

    t23 = (x93<=(x94!=(x95>x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = INT16_MIN;
	static int64_t x99 = -1LL;
	uint8_t x100 = UINT8_MAX;
	volatile int32_t t24 = 105;

    t24 = (x97<=(x98!=(x99>x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = -420046709121766221LL;
	int8_t x102 = -1;
	uint64_t x103 = UINT64_MAX;
	uint16_t x104 = 0U;

    t25 = (x101<=(x102!=(x103>x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x106 = INT64_MAX;
	int32_t x107 = -238;
	volatile int32_t x108 = -56;

    t26 = (x105<=(x106!=(x107>x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x111 = 2089608609999381197LLU;
	int32_t x112 = INT32_MAX;

    t27 = (x109<=(x110!=(x111>x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -1LL;
	int32_t x114 = 127200691;
	static int64_t x115 = INT64_MIN;
	volatile uint16_t x116 = 15U;
	static int32_t t28 = 1003759;

    t28 = (x113<=(x114!=(x115>x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -132;
	int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MIN;
	uint16_t x120 = 21U;

    t29 = (x117<=(x118!=(x119>x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x122 = 849U;
	volatile int16_t x123 = -1;
	int16_t x124 = -1;
	volatile int32_t t30 = -6286;

    t30 = (x121<=(x122!=(x123>x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 0LLU;
	int16_t x127 = INT16_MIN;
	static int8_t x128 = -1;
	volatile int32_t t31 = 154736369;

    t31 = (x125<=(x126!=(x127>x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x131 = UINT8_MAX;
	int32_t t32 = 1;

    t32 = (x129<=(x130!=(x131>x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x133 = INT8_MIN;
	int16_t x134 = -25;
	uint64_t x135 = UINT64_MAX;
	uint32_t x136 = UINT32_MAX;
	volatile int32_t t33 = -137;

    t33 = (x133<=(x134!=(x135>x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = -1LL;
	int32_t x139 = 12;
	static volatile int16_t x140 = INT16_MIN;

    t34 = (x137<=(x138!=(x139>x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x141 = 1;
	int32_t x142 = INT32_MAX;
	int8_t x144 = INT8_MAX;
	volatile int32_t t35 = -1037162295;

    t35 = (x141<=(x142!=(x143>x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	int64_t x148 = INT64_MIN;
	volatile int32_t t36 = 28713663;

    t36 = (x145<=(x146!=(x147>x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = 21791U;
	static uint16_t x150 = UINT16_MAX;
	int16_t x151 = INT16_MIN;
	int32_t t37 = -54449;

    t37 = (x149<=(x150!=(x151>x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x153 = 108U;
	volatile int16_t x154 = INT16_MIN;
	uint8_t x155 = 1U;

    t38 = (x153<=(x154!=(x155>x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MIN;
	int8_t x158 = -1;
	static int64_t x159 = -84471968LL;
	volatile int32_t t39 = 7;

    t39 = (x157<=(x158!=(x159>x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x161 = INT8_MIN;
	static int64_t x162 = INT64_MAX;
	uint64_t x164 = UINT64_MAX;

    t40 = (x161<=(x162!=(x163>x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = UINT16_MAX;
	volatile int64_t x166 = 1403490LL;
	static uint16_t x168 = 1168U;
	volatile int32_t t41 = 573576898;

    t41 = (x165<=(x166!=(x167>x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x170 = -432890347LL;
	static uint64_t x171 = 102940090057LLU;
	int64_t x172 = -1LL;
	int32_t t42 = -16;

    t42 = (x169<=(x170!=(x171>x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = INT8_MIN;
	int32_t x174 = INT32_MAX;
	int8_t x175 = -2;
	volatile int8_t x176 = -2;
	int32_t t43 = -860313;

    t43 = (x173<=(x174!=(x175>x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MAX;
	int8_t x178 = INT8_MAX;
	int8_t x180 = -56;
	static volatile int32_t t44 = 740714;

    t44 = (x177<=(x178!=(x179>x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x181 = 68U;
	static int64_t x183 = -1LL;
	volatile int32_t t45 = 474051;

    t45 = (x181<=(x182!=(x183>x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -1;
	int32_t x186 = -1;
	int64_t x188 = INT64_MIN;
	static int32_t t46 = -122778662;

    t46 = (x185<=(x186!=(x187>x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	int32_t x190 = INT32_MIN;
	static int16_t x192 = 202;
	int32_t t47 = 51962885;

    t47 = (x189<=(x190!=(x191>x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x195 = 57;

    t48 = (x193<=(x194!=(x195>x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -1;
	volatile int8_t x198 = -1;
	int32_t x199 = 236428179;
	int64_t x200 = 254025813LL;

    t49 = (x197<=(x198!=(x199>x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x202 = 4U;
	int32_t x203 = -1;
	static uint32_t x204 = 44U;

    t50 = (x201<=(x202!=(x203>x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x205 = INT16_MIN;
	int8_t x206 = -1;
	int64_t x207 = INT64_MIN;
	int16_t x208 = -1;

    t51 = (x205<=(x206!=(x207>x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -1;
	volatile uint8_t x210 = 31U;
	int32_t t52 = 128829;

    t52 = (x209<=(x210!=(x211>x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = 96;
	int8_t x214 = INT8_MIN;
	int32_t x215 = 8912874;
	uint16_t x216 = UINT16_MAX;
	int32_t t53 = -81;

    t53 = (x213<=(x214!=(x215>x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	int64_t x218 = 2641578602587LL;
	int32_t x219 = INT32_MIN;
	int32_t x220 = 43831;
	volatile int32_t t54 = 43298;

    t54 = (x217<=(x218!=(x219>x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 24U;
	int16_t x222 = INT16_MIN;
	int32_t x223 = -60990600;
	uint8_t x224 = UINT8_MAX;
	static int32_t t55 = 1813;

    t55 = (x221<=(x222!=(x223>x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MIN;
	uint64_t x226 = UINT64_MAX;
	volatile uint8_t x227 = 3U;
	int64_t x228 = 489547237870LL;
	volatile int32_t t56 = -2951;

    t56 = (x225<=(x226!=(x227>x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x230 = INT8_MIN;
	int8_t x231 = INT8_MIN;
	volatile int16_t x232 = -5;
	volatile int32_t t57 = -31;

    t57 = (x229<=(x230!=(x231>x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = 0;
	uint64_t x234 = 42902687LLU;
	uint16_t x235 = UINT16_MAX;
	int16_t x236 = INT16_MIN;

    t58 = (x233<=(x234!=(x235>x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 13U;
	uint64_t x238 = UINT64_MAX;
	uint8_t x239 = UINT8_MAX;
	uint64_t x240 = 349563286277LLU;
	volatile int32_t t59 = 148747867;

    t59 = (x237<=(x238!=(x239>x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	int8_t x244 = -1;
	volatile int32_t t60 = 14554;

    t60 = (x241<=(x242!=(x243>x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x246 = 13;
	int64_t x248 = 28369244LL;
	int32_t t61 = 43590;

    t61 = (x245<=(x246!=(x247>x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = INT16_MIN;
	uint8_t x250 = UINT8_MAX;
	int32_t x251 = INT32_MIN;
	uint64_t x252 = 22009LLU;

    t62 = (x249<=(x250!=(x251>x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -1;
	volatile uint16_t x254 = 1U;
	uint8_t x255 = 2U;
	uint16_t x256 = 16920U;

    t63 = (x253<=(x254!=(x255>x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MIN;
	static uint64_t x258 = 12543LLU;
	int64_t x259 = INT64_MIN;
	int64_t x260 = INT64_MIN;
	int32_t t64 = -33663;

    t64 = (x257<=(x258!=(x259>x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 2;
	uint32_t x262 = UINT32_MAX;
	int64_t x263 = 95610417247516LL;
	int8_t x264 = INT8_MIN;
	volatile int32_t t65 = 243544;

    t65 = (x261<=(x262!=(x263>x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x266 = INT64_MAX;
	int8_t x267 = -15;
	int32_t x268 = -61082;
	volatile int32_t t66 = 128;

    t66 = (x265<=(x266!=(x267>x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	int16_t x270 = 9263;
	int32_t x271 = INT32_MIN;
	uint16_t x272 = 32066U;
	int32_t t67 = 568;

    t67 = (x269<=(x270!=(x271>x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = -3;
	int16_t x274 = -3306;
	int32_t t68 = -825097;

    t68 = (x273<=(x274!=(x275>x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = 1;
	static int8_t x278 = 15;
	static int32_t x279 = -247;
	int16_t x280 = INT16_MIN;
	volatile int32_t t69 = -477233;

    t69 = (x277<=(x278!=(x279>x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	volatile uint8_t x283 = 4U;
	static uint64_t x284 = UINT64_MAX;
	static int32_t t70 = 8058446;

    t70 = (x281<=(x282!=(x283>x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x285 = INT64_MIN;
	int64_t x286 = -1LL;
	int32_t x287 = -2013;
	volatile int16_t x288 = INT16_MIN;
	static volatile int32_t t71 = -263028565;

    t71 = (x285<=(x286!=(x287>x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x289 = 1LLU;
	uint16_t x291 = UINT16_MAX;
	static int64_t x292 = -1LL;

    t72 = (x289<=(x290!=(x291>x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x294 = UINT16_MAX;
	static uint64_t x295 = 100395151LLU;
	static volatile uint16_t x296 = UINT16_MAX;

    t73 = (x293<=(x294!=(x295>x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = -14432289249LL;
	static uint32_t x298 = 119296163U;
	uint32_t x300 = UINT32_MAX;
	volatile int32_t t74 = -41570;

    t74 = (x297<=(x298!=(x299>x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x301 = 1364U;
	int64_t x303 = INT64_MAX;
	static int64_t x304 = INT64_MAX;
	int32_t t75 = 5;

    t75 = (x301<=(x302!=(x303>x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x306 = INT8_MAX;
	volatile int32_t t76 = 2;

    t76 = (x305<=(x306!=(x307>x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 4020U;
	uint16_t x310 = 0U;
	int8_t x312 = 10;

    t77 = (x309<=(x310!=(x311>x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -1;
	int16_t x314 = -1;
	uint32_t x315 = UINT32_MAX;
	int16_t x316 = 2;
	int32_t t78 = -10088661;

    t78 = (x313<=(x314!=(x315>x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = -1LL;
	int16_t x318 = INT16_MIN;
	uint64_t x319 = 13192LLU;
	int32_t t79 = 3;

    t79 = (x317<=(x318!=(x319>x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int16_t x321 = -16;
	uint32_t x322 = 1701315U;
	uint32_t x323 = UINT32_MAX;
	volatile int32_t t80 = -111;

    t80 = (x321<=(x322!=(x323>x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -2959147266603176297LL;
	int8_t x326 = INT8_MIN;
	static volatile int32_t x327 = INT32_MAX;
	int32_t t81 = 48130;

    t81 = (x325<=(x326!=(x327>x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x329 = -1;
	uint64_t x330 = 97658LLU;
	int8_t x331 = INT8_MIN;
	static int8_t x332 = INT8_MAX;
	static int32_t t82 = -1869;

    t82 = (x329<=(x330!=(x331>x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x334 = -1LL;
	int16_t x336 = 579;
	static volatile int32_t t83 = -301;

    t83 = (x333<=(x334!=(x335>x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x337 = -1;
	int32_t x338 = INT32_MIN;
	int8_t x339 = INT8_MAX;
	int32_t t84 = 1791;

    t84 = (x337<=(x338!=(x339>x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 34584U;
	static volatile int8_t x342 = -14;
	uint16_t x343 = 29166U;
	static uint8_t x344 = UINT8_MAX;
	volatile int32_t t85 = 774307;

    t85 = (x341<=(x342!=(x343>x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	uint16_t x346 = 54U;
	int32_t x347 = INT32_MIN;
	uint16_t x348 = UINT16_MAX;
	int32_t t86 = 6;

    t86 = (x345<=(x346!=(x347>x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = 7765;
	int16_t x350 = 1;
	int64_t x351 = INT64_MIN;
	static int8_t x352 = INT8_MIN;
	int32_t t87 = 27;

    t87 = (x349<=(x350!=(x351>x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x354 = -1;
	int32_t x355 = INT32_MIN;
	volatile uint8_t x356 = UINT8_MAX;

    t88 = (x353<=(x354!=(x355>x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x357 = UINT8_MAX;
	static int64_t x358 = -1LL;
	volatile int32_t t89 = 1714;

    t89 = (x357<=(x358!=(x359>x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x361 = INT32_MIN;
	int8_t x364 = 4;
	static volatile int32_t t90 = -277456;

    t90 = (x361<=(x362!=(x363>x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = -1;
	uint32_t x366 = 111190346U;
	volatile int32_t x367 = -1;
	volatile int32_t t91 = 0;

    t91 = (x365<=(x366!=(x367>x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;
	uint32_t x371 = UINT32_MAX;
	int8_t x372 = INT8_MAX;
	int32_t t92 = 9076632;

    t92 = (x369<=(x370!=(x371>x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = -1;
	int32_t x374 = 2;
	int16_t x375 = INT16_MIN;
	static uint16_t x376 = 1099U;
	static int32_t t93 = 5530;

    t93 = (x373<=(x374!=(x375>x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x378 = INT16_MAX;
	volatile int64_t x379 = -568923197LL;
	int16_t x380 = INT16_MIN;
	int32_t t94 = -516496;

    t94 = (x377<=(x378!=(x379>x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x381 = INT16_MIN;
	volatile int8_t x383 = INT8_MAX;
	int16_t x384 = -2320;
	int32_t t95 = -338038;

    t95 = (x381<=(x382!=(x383>x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = UINT8_MAX;
	int64_t x386 = 430364LL;
	int32_t x387 = -1;
	uint16_t x388 = 324U;
	static volatile int32_t t96 = -1930304;

    t96 = (x385<=(x386!=(x387>x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MIN;
	int64_t x390 = -1LL;
	int64_t x391 = -173LL;

    t97 = (x389<=(x390!=(x391>x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int8_t x393 = INT8_MIN;
	int32_t x394 = -172;
	int8_t x395 = INT8_MAX;
	int16_t x396 = -1;
	static int32_t t98 = 2;

    t98 = (x393<=(x394!=(x395>x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 6196LLU;
	static volatile int64_t x399 = INT64_MAX;
	volatile int32_t t99 = 1611;

    t99 = (x397<=(x398!=(x399>x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MAX;
	static uint32_t x404 = UINT32_MAX;
	static int32_t t100 = -6301515;

    t100 = (x401<=(x402!=(x403>x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t t101 = -6324;

    t101 = (x405<=(x406!=(x407>x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x409 = UINT32_MAX;
	static int32_t x410 = -1;
	volatile uint64_t x411 = UINT64_MAX;
	volatile int64_t x412 = -1LL;
	static volatile int32_t t102 = -6;

    t102 = (x409<=(x410!=(x411>x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = -1LL;
	int8_t x415 = -1;

    t103 = (x413<=(x414!=(x415>x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 9U;
	uint8_t x419 = UINT8_MAX;
	int32_t t104 = -1344;

    t104 = (x417<=(x418!=(x419>x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = UINT64_MAX;
	static int16_t x423 = INT16_MIN;
	volatile int32_t t105 = -47618296;

    t105 = (x421<=(x422!=(x423>x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x425 = UINT8_MAX;
	volatile int16_t x426 = -1;
	uint32_t x427 = 2344631U;
	int32_t t106 = -1;

    t106 = (x425<=(x426!=(x427>x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = INT16_MAX;
	int64_t x430 = -6552LL;
	int32_t x431 = INT32_MIN;
	volatile int32_t t107 = 51;

    t107 = (x429<=(x430!=(x431>x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x434 = UINT32_MAX;
	int16_t x436 = -1;
	static int32_t t108 = 13624;

    t108 = (x433<=(x434!=(x435>x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint8_t x437 = 1U;
	static int16_t x438 = INT16_MIN;
	static int16_t x439 = INT16_MAX;
	int8_t x440 = INT8_MIN;
	int32_t t109 = -14700289;

    t109 = (x437<=(x438!=(x439>x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = UINT64_MAX;
	volatile int16_t x442 = INT16_MIN;
	int64_t x443 = -1LL;
	int64_t x444 = -1LL;
	static int32_t t110 = -4302243;

    t110 = (x441<=(x442!=(x443>x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x445 = INT64_MIN;
	uint64_t x446 = 58936019929897814LLU;
	uint8_t x447 = 30U;
	uint8_t x448 = 0U;
	static int32_t t111 = -957594272;

    t111 = (x445<=(x446!=(x447>x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = -1LL;
	int8_t x451 = INT8_MAX;
	int64_t x452 = 32008085LL;
	volatile int32_t t112 = -45;

    t112 = (x449<=(x450!=(x451>x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x453 = INT8_MIN;
	uint64_t x454 = 145102LLU;
	static volatile uint32_t x455 = 157U;
	volatile uint8_t x456 = 95U;

    t113 = (x453<=(x454!=(x455>x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = UINT8_MAX;
	int32_t x458 = -1;

    t114 = (x457<=(x458!=(x459>x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = 2;
	static volatile int32_t x462 = 1;
	int32_t x463 = -877;
	volatile int32_t x464 = INT32_MIN;
	static int32_t t115 = 943362654;

    t115 = (x461<=(x462!=(x463>x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int16_t x465 = INT16_MIN;
	uint64_t x466 = 1486461520822797LLU;
	uint16_t x467 = 13675U;
	static int32_t t116 = 0;

    t116 = (x465<=(x466!=(x467>x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x471 = INT64_MAX;
	uint64_t x472 = UINT64_MAX;
	static int32_t t117 = -1;

    t117 = (x469<=(x470!=(x471>x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = -3939182LL;
	volatile uint16_t x474 = 7U;
	static volatile int64_t x475 = INT64_MIN;
	static int64_t x476 = 196041022LL;
	int32_t t118 = 82;

    t118 = (x473<=(x474!=(x475>x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x478 = 9646885545LLU;
	volatile uint8_t x479 = UINT8_MAX;
	static volatile uint64_t x480 = 8118LLU;
	int32_t t119 = -107971849;

    t119 = (x477<=(x478!=(x479>x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = 1535;
	static volatile int32_t x482 = INT32_MAX;
	volatile uint64_t x484 = 656595785LLU;
	volatile int32_t t120 = 693935502;

    t120 = (x481<=(x482!=(x483>x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = UINT64_MAX;
	uint64_t x486 = UINT64_MAX;
	int32_t x487 = INT32_MAX;
	volatile int32_t t121 = -744;

    t121 = (x485<=(x486!=(x487>x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = 2363LL;
	int16_t x490 = -509;
	static int64_t x491 = 2720261398365369LL;
	int64_t x492 = 525406457536509LL;
	volatile int32_t t122 = -2836;

    t122 = (x489<=(x490!=(x491>x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x493 = 1;
	int8_t x494 = INT8_MIN;
	static uint64_t x495 = 6521LLU;
	int32_t t123 = -1807;

    t123 = (x493<=(x494!=(x495>x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	int8_t x498 = INT8_MIN;
	int64_t x499 = -4596551982733630998LL;
	int64_t x500 = -1LL;
	volatile int32_t t124 = 47;

    t124 = (x497<=(x498!=(x499>x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x502 = 15465U;
	int32_t x504 = INT32_MIN;
	int32_t t125 = 611;

    t125 = (x501<=(x502!=(x503>x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = INT32_MIN;
	volatile uint8_t x506 = UINT8_MAX;
	static volatile uint8_t x508 = 74U;
	int32_t t126 = 703643;

    t126 = (x505<=(x506!=(x507>x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MIN;
	volatile int64_t x511 = INT64_MIN;
	int64_t x512 = 7542975445846LL;
	static int32_t t127 = -524;

    t127 = (x509<=(x510!=(x511>x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x514 = INT8_MIN;
	volatile int8_t x515 = INT8_MIN;
	int16_t x516 = INT16_MAX;
	volatile int32_t t128 = 66327453;

    t128 = (x513<=(x514!=(x515>x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x518 = UINT32_MAX;
	uint32_t x519 = 1116U;
	static uint16_t x520 = 0U;
	int32_t t129 = -23597;

    t129 = (x517<=(x518!=(x519>x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MIN;
	int8_t x522 = -32;
	int8_t x523 = -4;
	uint64_t x524 = 514540927619LLU;
	int32_t t130 = 8339;

    t130 = (x521<=(x522!=(x523>x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = UINT16_MAX;
	int16_t x526 = -1;
	uint16_t x527 = 0U;
	int8_t x528 = 2;
	int32_t t131 = 6187794;

    t131 = (x525<=(x526!=(x527>x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x529 = 0U;
	volatile int32_t t132 = 160130725;

    t132 = (x529<=(x530!=(x531>x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = 9;
	static uint64_t x534 = 238884LLU;
	int64_t x535 = INT64_MIN;
	int64_t x536 = INT64_MIN;
	static volatile int32_t t133 = 9;

    t133 = (x533<=(x534!=(x535>x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = -12733895659LL;
	int64_t x538 = -1LL;
	int16_t x539 = -33;
	volatile int32_t x540 = INT32_MIN;

    t134 = (x537<=(x538!=(x539>x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x542 = INT8_MIN;
	uint32_t x543 = 1U;
	volatile int32_t t135 = 1;

    t135 = (x541<=(x542!=(x543>x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = -1;
	int8_t x547 = INT8_MIN;
	int64_t x548 = INT64_MIN;
	static volatile int32_t t136 = -314326;

    t136 = (x545<=(x546!=(x547>x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x549 = -29409;
	static volatile int8_t x551 = 0;
	static int8_t x552 = INT8_MIN;
	int32_t t137 = 151345145;

    t137 = (x549<=(x550!=(x551>x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x554 = 880U;
	int16_t x556 = INT16_MIN;
	static int32_t t138 = -234;

    t138 = (x553<=(x554!=(x555>x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = 5464532U;
	volatile int32_t x559 = 2;
	int32_t x560 = -1;

    t139 = (x557<=(x558!=(x559>x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = 115U;
	uint8_t x562 = 0U;
	int64_t x563 = INT64_MIN;
	static int64_t x564 = 48880836548610LL;
	volatile int32_t t140 = -913523;

    t140 = (x561<=(x562!=(x563>x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x565 = UINT32_MAX;
	uint32_t x566 = UINT32_MAX;
	static int8_t x567 = INT8_MIN;
	int32_t x568 = INT32_MIN;
	volatile int32_t t141 = 0;

    t141 = (x565<=(x566!=(x567>x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = 119U;
	int16_t x570 = INT16_MIN;
	static uint32_t x571 = 10970U;
	int16_t x572 = INT16_MAX;
	int32_t t142 = -1346096;

    t142 = (x569<=(x570!=(x571>x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int16_t x573 = 1;
	uint8_t x574 = UINT8_MAX;
	int8_t x576 = INT8_MIN;
	volatile int32_t t143 = 424088;

    t143 = (x573<=(x574!=(x575>x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x578 = 245653530116875LLU;
	static volatile int8_t x580 = INT8_MIN;
	static volatile int32_t t144 = 32164228;

    t144 = (x577<=(x578!=(x579>x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x582 = 3718962;
	volatile int16_t x583 = 639;
	static int32_t x584 = 0;

    t145 = (x581<=(x582!=(x583>x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	volatile int16_t x587 = INT16_MAX;
	int16_t x588 = -1;
	volatile int32_t t146 = -926164539;

    t146 = (x585<=(x586!=(x587>x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x590 = INT16_MAX;
	uint32_t x591 = 881U;
	int64_t x592 = INT64_MIN;
	volatile int32_t t147 = -170672864;

    t147 = (x589<=(x590!=(x591>x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int8_t x593 = INT8_MAX;
	static int32_t x594 = 868;
	int32_t x595 = 248;
	static int32_t x596 = INT32_MIN;
	int32_t t148 = 867154175;

    t148 = (x593<=(x594!=(x595>x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x598 = -3609;
	int16_t x599 = INT16_MIN;
	int32_t t149 = -119;

    t149 = (x597<=(x598!=(x599>x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x601 = INT32_MAX;
	int64_t x602 = 139077735972LL;
	static volatile int32_t t150 = -81;

    t150 = (x601<=(x602!=(x603>x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x605 = 41U;
	int8_t x607 = INT8_MIN;
	uint16_t x608 = 7700U;
	int32_t t151 = -1;

    t151 = (x605<=(x606!=(x607>x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = -1;
	int16_t x610 = -1;
	static volatile uint16_t x611 = 2697U;
	static int8_t x612 = INT8_MIN;

    t152 = (x609<=(x610!=(x611>x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x613 = INT8_MIN;
	int64_t x614 = INT64_MIN;
	uint32_t x615 = 2U;

    t153 = (x613<=(x614!=(x615>x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MAX;
	static int16_t x618 = -1;
	int16_t x620 = -4353;

    t154 = (x617<=(x618!=(x619>x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = 0;
	uint32_t x622 = 1720974206U;
	volatile uint16_t x623 = 273U;
	int32_t t155 = 0;

    t155 = (x621<=(x622!=(x623>x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = 505;
	volatile int8_t x626 = -58;
	int16_t x627 = INT16_MAX;
	int8_t x628 = INT8_MIN;
	static int32_t t156 = 0;

    t156 = (x625<=(x626!=(x627>x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 3U;
	int16_t x630 = -1;
	uint32_t x631 = 245186301U;
	static uint32_t x632 = 882U;
	volatile int32_t t157 = -191;

    t157 = (x629<=(x630!=(x631>x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x633 = 23;
	int32_t x634 = INT32_MIN;
	uint16_t x635 = 24U;
	volatile int64_t x636 = INT64_MAX;
	int32_t t158 = 5;

    t158 = (x633<=(x634!=(x635>x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MAX;
	int64_t x638 = INT64_MAX;
	uint64_t x639 = 3LLU;
	int8_t x640 = 0;
	volatile int32_t t159 = -15;

    t159 = (x637<=(x638!=(x639>x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = 1;
	int32_t x644 = INT32_MIN;

    t160 = (x641<=(x642!=(x643>x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x645 = 15U;
	static int16_t x646 = 0;
	uint32_t x647 = UINT32_MAX;
	static volatile int32_t t161 = -35627;

    t161 = (x645<=(x646!=(x647>x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x650 = INT8_MAX;
	uint8_t x651 = 23U;
	static int64_t x652 = INT64_MIN;
	int32_t t162 = 84;

    t162 = (x649<=(x650!=(x651>x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MAX;
	static int64_t x654 = -1LL;
	volatile int8_t x656 = INT8_MIN;
	int32_t t163 = 138462560;

    t163 = (x653<=(x654!=(x655>x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = 19LL;
	uint32_t x658 = 303U;
	int16_t x659 = 2;
	int32_t x660 = INT32_MAX;
	static int32_t t164 = 255;

    t164 = (x657<=(x658!=(x659>x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x663 = 2534026034LL;
	int32_t x664 = 1327670;
	int32_t t165 = -130323712;

    t165 = (x661<=(x662!=(x663>x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MIN;
	volatile int16_t x667 = INT16_MAX;
	int64_t x668 = 3283242LL;
	static volatile int32_t t166 = -39398765;

    t166 = (x665<=(x666!=(x667>x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = INT8_MIN;
	volatile int16_t x671 = INT16_MAX;
	int64_t x672 = INT64_MIN;
	int32_t t167 = 534135087;

    t167 = (x669<=(x670!=(x671>x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x673 = INT64_MIN;
	int32_t x674 = -1;
	static int32_t x675 = 1;
	int16_t x676 = INT16_MAX;
	int32_t t168 = 6239728;

    t168 = (x673<=(x674!=(x675>x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = 190;
	int16_t x678 = INT16_MIN;
	uint16_t x679 = 140U;
	volatile int32_t t169 = -26430;

    t169 = (x677<=(x678!=(x679>x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = UINT16_MAX;
	uint8_t x682 = UINT8_MAX;
	uint16_t x683 = UINT16_MAX;
	int32_t x684 = -1;
	int32_t t170 = -141075153;

    t170 = (x681<=(x682!=(x683>x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int32_t x685 = INT32_MAX;
	static int8_t x686 = INT8_MIN;
	int32_t x687 = INT32_MIN;
	static volatile uint16_t x688 = 21235U;
	volatile int32_t t171 = 1;

    t171 = (x685<=(x686!=(x687>x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x689 = INT64_MAX;
	volatile uint32_t x690 = 1702U;
	uint16_t x691 = 7562U;
	uint8_t x692 = UINT8_MAX;

    t172 = (x689<=(x690!=(x691>x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint8_t x694 = 2U;
	volatile uint64_t x695 = 49482592722LLU;
	uint32_t x696 = 29343U;
	volatile int32_t t173 = -193176;

    t173 = (x693<=(x694!=(x695>x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -15;
	uint64_t x699 = 427LLU;
	volatile int32_t x700 = INT32_MIN;
	int32_t t174 = 3019;

    t174 = (x697<=(x698!=(x699>x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x701 = INT32_MIN;
	static int64_t x702 = INT64_MAX;
	uint32_t x703 = UINT32_MAX;
	int32_t t175 = -935419407;

    t175 = (x701<=(x702!=(x703>x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	static volatile int32_t x706 = INT32_MIN;
	uint16_t x707 = 59U;
	int8_t x708 = INT8_MIN;
	volatile int32_t t176 = -1799017;

    t176 = (x705<=(x706!=(x707>x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MAX;
	uint8_t x710 = 0U;
	int16_t x711 = 180;
	static volatile int64_t x712 = INT64_MIN;
	int32_t t177 = -23;

    t177 = (x709<=(x710!=(x711>x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MIN;
	static uint8_t x714 = UINT8_MAX;
	int8_t x715 = -1;
	volatile uint64_t x716 = 6215734119LLU;
	int32_t t178 = 1;

    t178 = (x713<=(x714!=(x715>x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = -1;
	int16_t x718 = -13;
	static volatile int32_t t179 = 175379817;

    t179 = (x717<=(x718!=(x719>x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x722 = INT32_MAX;
	int16_t x723 = -1;
	int8_t x724 = INT8_MIN;
	int32_t t180 = -112744;

    t180 = (x721<=(x722!=(x723>x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MAX;
	static uint32_t x726 = 1095079U;
	volatile int16_t x727 = INT16_MIN;
	int8_t x728 = INT8_MIN;

    t181 = (x725<=(x726!=(x727>x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = 29676U;
	int64_t x731 = -1LL;
	static int8_t x732 = INT8_MAX;
	int32_t t182 = -7468875;

    t182 = (x729<=(x730!=(x731>x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x734 = INT64_MIN;
	volatile int8_t x735 = INT8_MIN;
	volatile int32_t x736 = -1;
	static volatile int32_t t183 = -5;

    t183 = (x733<=(x734!=(x735>x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x737 = 13U;
	int64_t x738 = 605046860012LL;
	static uint8_t x740 = 14U;

    t184 = (x737<=(x738!=(x739>x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x743 = -29;
	int64_t x744 = INT64_MIN;

    t185 = (x741<=(x742!=(x743>x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x745 = INT8_MIN;
	int32_t x746 = 1;
	volatile uint8_t x747 = 0U;
	int16_t x748 = 10;
	volatile int32_t t186 = 2622;

    t186 = (x745<=(x746!=(x747>x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x749 = INT64_MAX;
	volatile int32_t x750 = 172;
	volatile int8_t x751 = INT8_MIN;
	volatile int32_t t187 = -15181;

    t187 = (x749<=(x750!=(x751>x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x753 = -1;
	int32_t x754 = INT32_MAX;
	uint64_t x755 = 36012233646137536LLU;
	static int32_t x756 = INT32_MIN;
	int32_t t188 = 3;

    t188 = (x753<=(x754!=(x755>x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -401533778;
	static volatile int64_t x758 = -4071794LL;
	int32_t x759 = 5421;

    t189 = (x757<=(x758!=(x759>x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int32_t x761 = INT32_MAX;
	int16_t x762 = INT16_MIN;
	uint8_t x763 = 107U;
	uint32_t x764 = 6U;

    t190 = (x761<=(x762!=(x763>x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x765 = INT64_MIN;
	volatile int16_t x766 = -11958;
	int64_t x767 = -1LL;
	uint8_t x768 = UINT8_MAX;
	int32_t t191 = -22186725;

    t191 = (x765<=(x766!=(x767>x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x770 = 74U;
	int16_t x771 = INT16_MAX;
	int8_t x772 = INT8_MAX;
	volatile int32_t t192 = 0;

    t192 = (x769<=(x770!=(x771>x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MAX;
	int16_t x774 = -1;
	int64_t x775 = INT64_MAX;
	int64_t x776 = -957476LL;

    t193 = (x773<=(x774!=(x775>x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x777 = UINT64_MAX;
	volatile uint64_t x778 = 718LLU;
	int8_t x780 = INT8_MIN;
	static volatile int32_t t194 = -5540;

    t194 = (x777<=(x778!=(x779>x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = -1;
	static int16_t x782 = INT16_MIN;
	int32_t x783 = -244;

    t195 = (x781<=(x782!=(x783>x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 101544LLU;
	uint8_t x787 = 1U;
	int32_t x788 = -12074066;
	static volatile int32_t t196 = -14138903;

    t196 = (x785<=(x786!=(x787>x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint32_t x790 = UINT32_MAX;
	int16_t x791 = -1;
	uint8_t x792 = UINT8_MAX;
	int32_t t197 = 3750101;

    t197 = (x789<=(x790!=(x791>x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x793 = INT16_MIN;
	uint32_t x794 = 229857U;
	uint8_t x795 = 15U;

    t198 = (x793<=(x794!=(x795>x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = 587LL;
	volatile int16_t x798 = -1;
	int64_t x800 = INT64_MIN;
	int32_t t199 = -1287701;

    t199 = (x797<=(x798!=(x799>x800)));

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

