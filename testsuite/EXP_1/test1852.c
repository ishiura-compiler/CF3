
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

int64_t x4 = -1LL;
int64_t t0 = -6LL;
volatile int32_t x5 = -1;
static volatile uint32_t x6 = 254U;
int32_t t2 = -458;
int8_t x17 = INT8_MAX;
int16_t x23 = -72;
volatile int32_t x38 = -18;
volatile uint64_t x43 = 183266217919362LLU;
int16_t x47 = 73;
int32_t x48 = 10876211;
static int32_t t11 = 276023;
int64_t x54 = INT64_MAX;
int64_t x55 = INT64_MIN;
volatile int8_t x58 = 1;
uint32_t x78 = 17984480U;
volatile int16_t x87 = INT16_MAX;
int64_t x92 = 3702LL;
volatile int64_t t22 = -23068284922783261LL;
int16_t x95 = INT16_MAX;
volatile int64_t x98 = 950162LL;
static uint32_t x100 = 151426509U;
uint64_t x114 = 985816LLU;
static volatile int32_t t29 = -5386498;
int8_t x122 = INT8_MIN;
static volatile int16_t x136 = -352;
uint32_t x137 = UINT32_MAX;
int32_t x138 = -1;
int64_t x139 = INT64_MIN;
volatile uint64_t t34 = 300LLU;
int8_t x144 = INT8_MAX;
int32_t x145 = INT32_MIN;
volatile int8_t x146 = INT8_MIN;
int64_t x148 = INT64_MIN;
static int64_t x150 = INT64_MIN;
int16_t x159 = INT16_MIN;
int64_t x160 = INT64_MIN;
int64_t t39 = -309LL;
int16_t x165 = 3634;
int32_t t42 = -8634503;
int64_t x175 = -1LL;
volatile int32_t t43 = 3;
int16_t x185 = INT16_MIN;
volatile int32_t t49 = 210671;
volatile int16_t x201 = INT16_MIN;
static int32_t x202 = INT32_MIN;
int16_t x207 = INT16_MAX;
int64_t x215 = INT64_MAX;
volatile int32_t x217 = INT32_MAX;
volatile int64_t t54 = 3782254507LL;
static int16_t x224 = INT16_MAX;
int64_t x225 = INT64_MIN;
static volatile uint64_t x228 = UINT64_MAX;
uint64_t t56 = 88LLU;
int32_t t57 = -639118594;
static volatile int32_t x235 = 434;
int64_t t61 = 60140836167467743LL;
uint32_t x253 = 93U;
volatile int32_t x254 = INT32_MIN;
int8_t x262 = -13;
static volatile int32_t t65 = -7;
static int16_t x270 = -1;
int64_t x272 = INT64_MIN;
static volatile int64_t t68 = 11470635161620052LL;
volatile uint64_t t69 = 4920759700334LLU;
int32_t x283 = INT32_MIN;
int8_t x290 = -1;
volatile int32_t t72 = -207869;
volatile uint64_t x294 = UINT64_MAX;
static volatile uint64_t t73 = 3469LLU;
static volatile int8_t x304 = -1;
static int16_t x308 = INT16_MIN;
int32_t x312 = INT32_MIN;
volatile int32_t t77 = 40;
uint16_t x313 = 950U;
int8_t x315 = 3;
volatile uint32_t t78 = 127036849U;
volatile int16_t x320 = 6;
static int16_t x323 = 0;
int8_t x324 = INT8_MIN;
int8_t x325 = 2;
static int64_t x327 = INT64_MIN;
static uint16_t x328 = UINT16_MAX;
uint32_t x331 = UINT32_MAX;
int16_t x337 = INT16_MIN;
uint64_t x339 = 253395819LLU;
int16_t x340 = 7514;
volatile int32_t x342 = 10565443;
volatile int64_t t85 = 3104447LL;
int8_t x346 = INT8_MIN;
uint64_t x358 = 260808523197725LLU;
uint64_t x362 = 4669LLU;
int64_t x365 = INT64_MAX;
uint32_t x368 = 194764424U;
static volatile uint64_t t92 = 51491888535157255LLU;
volatile uint32_t x377 = 401285U;
int8_t x379 = INT8_MIN;
static volatile int64_t t94 = -10801LL;
uint8_t x390 = 2U;
uint32_t x395 = UINT32_MAX;
static int32_t t98 = -1;
static int8_t x408 = INT8_MIN;
volatile int64_t x409 = INT64_MIN;
static int64_t x410 = INT64_MIN;
uint32_t x426 = UINT32_MAX;
volatile int64_t x427 = INT64_MIN;
int32_t t106 = 365026004;
int16_t x430 = 8468;
static volatile int8_t x432 = INT8_MAX;
volatile int32_t t107 = 19305;
static uint16_t x435 = UINT16_MAX;
uint64_t t108 = 75664011625360LLU;
uint16_t x442 = 1U;
uint8_t x444 = 10U;
uint16_t x449 = UINT16_MAX;
int8_t x458 = 1;
volatile int32_t t114 = 1809292;
int8_t x471 = -1;
volatile int32_t t117 = -3241554;
uint8_t x476 = UINT8_MAX;
int16_t x477 = INT16_MIN;
volatile int32_t t119 = 156514;
volatile uint8_t x483 = 1U;
int32_t x498 = INT32_MIN;
uint64_t x502 = 9946LLU;
int32_t x503 = INT32_MIN;
int16_t x509 = INT16_MIN;
volatile int8_t x513 = -1;
int16_t x517 = -4505;
int16_t x525 = INT16_MIN;
uint64_t x527 = 20LLU;
volatile int64_t x530 = -3663293723977738086LL;
static int8_t x531 = INT8_MIN;
uint32_t x533 = 12378U;
int64_t x534 = 210624214LL;
volatile int16_t x536 = 37;
volatile int64_t x542 = INT64_MIN;
static volatile int8_t x551 = -1;
int32_t x555 = INT32_MAX;
int8_t x556 = INT8_MIN;
int64_t x558 = INT64_MIN;
volatile int64_t t140 = -1LL;
volatile int32_t t142 = 369;
int64_t x577 = INT64_MIN;
uint8_t x585 = 36U;
int8_t x591 = -1;
static volatile int32_t x594 = INT32_MAX;
uint16_t x600 = 1608U;
static uint32_t x601 = 5864U;
int64_t x603 = 1047877693LL;
int16_t x612 = INT16_MAX;
volatile uint32_t x613 = 76246U;
int32_t t152 = -42495;
uint16_t x617 = 2U;
uint64_t x626 = UINT64_MAX;
int16_t x627 = 2071;
uint8_t x637 = 12U;
uint64_t x638 = UINT64_MAX;
int64_t x639 = INT64_MIN;
volatile int32_t x640 = INT32_MIN;
int32_t t158 = 310803902;
uint16_t x648 = 6392U;
static int8_t x649 = 2;
volatile int8_t x657 = INT8_MIN;
volatile int8_t x659 = INT8_MIN;
uint32_t x666 = UINT32_MAX;
static volatile uint8_t x671 = 114U;
int32_t x678 = 103016333;
int8_t x682 = 7;
volatile uint64_t x688 = UINT64_MAX;
volatile int32_t x702 = INT32_MIN;
volatile int64_t x706 = 111844LL;
uint32_t x707 = UINT32_MAX;
int16_t x708 = -15240;
volatile uint64_t t177 = 59224547644LLU;
volatile int64_t x718 = -1LL;
int8_t x722 = -41;
int8_t x734 = INT8_MAX;
int8_t x736 = -1;
int8_t x740 = INT8_MIN;
volatile int8_t x745 = -1;
volatile int32_t t186 = 5780875;
uint64_t x756 = 328476698LLU;
static int8_t x759 = -2;
static int32_t x767 = 220840;
volatile int32_t t198 = -10519441;
volatile int8_t x804 = INT8_MAX;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	uint32_t x2 = UINT32_MAX;
	uint8_t x3 = 9U;

    t0 = (((x1<=x2)!=x3)/x4);

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x7 = 6LLU;
	volatile int64_t x8 = INT64_MAX;
	volatile int64_t t1 = -2LL;

    t1 = (((x5<=x6)!=x7)/x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MAX;
	int32_t x10 = INT32_MIN;
	volatile int16_t x11 = 490;
	uint8_t x12 = UINT8_MAX;

    t2 = (((x9<=x10)!=x11)/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	static uint8_t x14 = UINT8_MAX;
	int8_t x15 = INT8_MAX;
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = -244;

    t3 = (((x13<=x14)!=x15)/x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x18 = 2U;
	volatile int64_t x19 = 0LL;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = -1522;

    t4 = (((x17<=x18)!=x19)/x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = UINT32_MAX;
	int8_t x22 = 2;
	int16_t x24 = -1;
	int32_t t5 = -439;

    t5 = (((x21<=x22)!=x23)/x24);

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = 2149592;
	uint8_t x26 = 28U;
	static int16_t x27 = INT16_MAX;
	int16_t x28 = INT16_MAX;
	volatile int32_t t6 = -1;

    t6 = (((x25<=x26)!=x27)/x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x29 = 2872U;
	uint8_t x30 = 111U;
	uint16_t x31 = 2U;
	int16_t x32 = INT16_MIN;
	int32_t t7 = 35;

    t7 = (((x29<=x30)!=x31)/x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x33 = UINT64_MAX;
	uint32_t x34 = UINT32_MAX;
	uint8_t x35 = UINT8_MAX;
	volatile uint64_t x36 = 10830LLU;
	static volatile uint64_t t8 = 251505707LLU;

    t8 = (((x33<=x34)!=x35)/x36);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = UINT32_MAX;
	static volatile int16_t x39 = INT16_MAX;
	int64_t x40 = INT64_MIN;
	volatile int64_t t9 = -105627232LL;

    t9 = (((x37<=x38)!=x39)/x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -6;
	uint8_t x42 = 83U;
	volatile uint64_t x44 = 38LLU;
	static uint64_t t10 = 7469065240670LLU;

    t10 = (((x41<=x42)!=x43)/x44);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = INT32_MIN;
	int32_t x46 = INT32_MIN;

    t11 = (((x45<=x46)!=x47)/x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = UINT16_MAX;
	uint8_t x50 = UINT8_MAX;
	int16_t x51 = -1;
	static uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = -1;

    t12 = (((x49<=x50)!=x51)/x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	int32_t x56 = -23789052;
	volatile int32_t t13 = -149507148;

    t13 = (((x53<=x54)!=x55)/x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MIN;
	int16_t x59 = INT16_MIN;
	static volatile int32_t x60 = INT32_MIN;
	volatile int32_t t14 = -127960860;

    t14 = (((x57<=x58)!=x59)/x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	uint8_t x62 = 3U;
	int64_t x63 = 73955918139LL;
	int32_t x64 = 53462;
	volatile int32_t t15 = 1024;

    t15 = (((x61<=x62)!=x63)/x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = -20731325842LL;
	static uint64_t x66 = UINT64_MAX;
	static int64_t x67 = INT64_MAX;
	uint16_t x68 = UINT16_MAX;
	int32_t t16 = -1314;

    t16 = (((x65<=x66)!=x67)/x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1;
	int8_t x70 = 60;
	static int64_t x71 = INT64_MIN;
	volatile int16_t x72 = INT16_MAX;
	volatile int32_t t17 = -1;

    t17 = (((x69<=x70)!=x71)/x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = 720724271772773178LL;
	int32_t x74 = INT32_MAX;
	volatile int16_t x75 = -5;
	uint16_t x76 = UINT16_MAX;
	int32_t t18 = -693075446;

    t18 = (((x73<=x74)!=x75)/x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 7758U;
	volatile int16_t x79 = INT16_MIN;
	static int32_t x80 = -20;
	volatile int32_t t19 = -4950520;

    t19 = (((x77<=x78)!=x79)/x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = 31;
	int16_t x82 = INT16_MAX;
	int8_t x83 = INT8_MAX;
	int8_t x84 = 24;
	volatile int32_t t20 = -100000975;

    t20 = (((x81<=x82)!=x83)/x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -1;
	int8_t x86 = INT8_MIN;
	static uint32_t x88 = 83914U;
	uint32_t t21 = 99496U;

    t21 = (((x85<=x86)!=x87)/x88);

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -1;
	int32_t x90 = -1;
	uint64_t x91 = 8128463848320806LLU;

    t22 = (((x89<=x90)!=x91)/x92);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = -60;
	int16_t x94 = -180;
	volatile int16_t x96 = -53;
	static volatile int32_t t23 = -46573007;

    t23 = (((x93<=x94)!=x95)/x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 69U;
	uint16_t x99 = 1217U;
	uint32_t t24 = 1617829073U;

    t24 = (((x97<=x98)!=x99)/x100);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MAX;
	static volatile uint64_t x102 = UINT64_MAX;
	int8_t x103 = INT8_MIN;
	static volatile uint8_t x104 = UINT8_MAX;
	static volatile int32_t t25 = 0;

    t25 = (((x101<=x102)!=x103)/x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -1;
	volatile uint64_t x106 = UINT64_MAX;
	volatile int64_t x107 = INT64_MIN;
	int8_t x108 = INT8_MIN;
	volatile int32_t t26 = 117233;

    t26 = (((x105<=x106)!=x107)/x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	static int16_t x110 = INT16_MIN;
	uint64_t x111 = 26LLU;
	int32_t x112 = 50559128;
	volatile int32_t t27 = 1715;

    t27 = (((x109<=x110)!=x111)/x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint32_t x113 = 8385U;
	uint32_t x115 = UINT32_MAX;
	int64_t x116 = 2676830422866LL;
	int64_t t28 = -454951LL;

    t28 = (((x113<=x114)!=x115)/x116);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x117 = 1U;
	int64_t x118 = -1075866865LL;
	int8_t x119 = 2;
	int8_t x120 = INT8_MIN;

    t29 = (((x117<=x118)!=x119)/x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	int64_t x123 = -1LL;
	int64_t x124 = INT64_MIN;
	int64_t t30 = -317209627930LL;

    t30 = (((x121<=x122)!=x123)/x124);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = 629533668203LL;
	int32_t x126 = INT32_MIN;
	uint8_t x127 = 0U;
	uint32_t x128 = UINT32_MAX;
	static uint32_t t31 = 835852066U;

    t31 = (((x125<=x126)!=x127)/x128);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	int16_t x130 = -7041;
	int8_t x131 = -1;
	uint16_t x132 = UINT16_MAX;
	static int32_t t32 = -24392;

    t32 = (((x129<=x130)!=x131)/x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x133 = 216;
	int64_t x134 = -4394LL;
	int64_t x135 = -1LL;
	volatile int32_t t33 = -101;

    t33 = (((x133<=x134)!=x135)/x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x140 = 255808LLU;

    t34 = (((x137<=x138)!=x139)/x140);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x141 = INT8_MIN;
	uint64_t x142 = 227542447974313LLU;
	int16_t x143 = 5813;
	static volatile int32_t t35 = -172;

    t35 = (((x141<=x142)!=x143)/x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x147 = UINT64_MAX;
	volatile int64_t t36 = 1372892LL;

    t36 = (((x145<=x146)!=x147)/x148);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = UINT64_MAX;
	volatile int64_t x151 = 954262LL;
	static int8_t x152 = -13;
	volatile int32_t t37 = -1629095;

    t37 = (((x149<=x150)!=x151)/x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x153 = -770846;
	int64_t x154 = -1LL;
	uint32_t x155 = UINT32_MAX;
	int8_t x156 = INT8_MAX;
	volatile int32_t t38 = 1181;

    t38 = (((x153<=x154)!=x155)/x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = INT8_MAX;
	uint16_t x158 = UINT16_MAX;

    t39 = (((x157<=x158)!=x159)/x160);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = UINT32_MAX;
	static volatile int8_t x162 = INT8_MIN;
	static uint16_t x163 = UINT16_MAX;
	int16_t x164 = 1;
	volatile int32_t t40 = 124079111;

    t40 = (((x161<=x162)!=x163)/x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x166 = INT8_MIN;
	int32_t x167 = INT32_MIN;
	volatile uint16_t x168 = UINT16_MAX;
	volatile int32_t t41 = 98817849;

    t41 = (((x165<=x166)!=x167)/x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x169 = 7417507LLU;
	int16_t x170 = -14;
	int64_t x171 = INT64_MAX;
	uint16_t x172 = UINT16_MAX;

    t42 = (((x169<=x170)!=x171)/x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MIN;
	static uint16_t x174 = UINT16_MAX;
	static int16_t x176 = 57;

    t43 = (((x173<=x174)!=x175)/x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = INT8_MIN;
	int8_t x178 = -1;
	uint32_t x179 = UINT32_MAX;
	volatile int8_t x180 = -1;
	volatile int32_t t44 = -65268208;

    t44 = (((x177<=x178)!=x179)/x180);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MAX;
	uint16_t x182 = UINT16_MAX;
	volatile int64_t x183 = -1LL;
	static int64_t x184 = INT64_MAX;
	volatile int64_t t45 = 134716916757704LL;

    t45 = (((x181<=x182)!=x183)/x184);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x186 = 1542920771636046882LLU;
	static int32_t x187 = INT32_MAX;
	uint32_t x188 = 5575U;
	volatile uint32_t t46 = 24213U;

    t46 = (((x185<=x186)!=x187)/x188);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	uint32_t x190 = 12520353U;
	static int64_t x191 = INT64_MIN;
	volatile uint8_t x192 = 3U;
	int32_t t47 = 48242328;

    t47 = (((x189<=x190)!=x191)/x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x193 = INT64_MAX;
	int64_t x194 = 1441841LL;
	int16_t x195 = 273;
	uint64_t x196 = UINT64_MAX;
	static uint64_t t48 = 402172154758055LLU;

    t48 = (((x193<=x194)!=x195)/x196);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	int32_t x198 = INT32_MAX;
	uint64_t x199 = 9765251451246LLU;
	int16_t x200 = INT16_MIN;

    t49 = (((x197<=x198)!=x199)/x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x203 = INT8_MIN;
	volatile int32_t x204 = 383010403;
	volatile int32_t t50 = 1;

    t50 = (((x201<=x202)!=x203)/x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = UINT8_MAX;
	int8_t x206 = INT8_MIN;
	int32_t x208 = INT32_MAX;
	int32_t t51 = 7;

    t51 = (((x205<=x206)!=x207)/x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x209 = 0LLU;
	int16_t x210 = 225;
	int32_t x211 = -12;
	static int16_t x212 = -1;
	volatile int32_t t52 = 2154;

    t52 = (((x209<=x210)!=x211)/x212);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = 10043958LL;
	static int8_t x214 = 1;
	volatile int8_t x216 = 1;
	volatile int32_t t53 = 3066360;

    t53 = (((x213<=x214)!=x215)/x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x218 = 155113618674880775LLU;
	static int16_t x219 = -1;
	static int64_t x220 = INT64_MIN;

    t54 = (((x217<=x218)!=x219)/x220);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	uint8_t x222 = 72U;
	int32_t x223 = INT32_MIN;
	int32_t t55 = 0;

    t55 = (((x221<=x222)!=x223)/x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x226 = 1U;
	volatile uint32_t x227 = UINT32_MAX;

    t56 = (((x225<=x226)!=x227)/x228);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MIN;
	int8_t x230 = -27;
	uint8_t x231 = 4U;
	uint8_t x232 = UINT8_MAX;

    t57 = (((x229<=x230)!=x231)/x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = -2;
	int16_t x234 = 13;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t58 = 31424;

    t58 = (((x233<=x234)!=x235)/x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x237 = -1;
	int16_t x238 = INT16_MIN;
	uint16_t x239 = 160U;
	static int8_t x240 = INT8_MIN;
	static int32_t t59 = -938;

    t59 = (((x237<=x238)!=x239)/x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MAX;
	int64_t x242 = INT64_MAX;
	static int16_t x243 = INT16_MIN;
	int64_t x244 = -1LL;
	static volatile int64_t t60 = -1LL;

    t60 = (((x241<=x242)!=x243)/x244);

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x245 = 0;
	uint8_t x246 = 3U;
	int32_t x247 = INT32_MIN;
	int64_t x248 = -1LL;

    t61 = (((x245<=x246)!=x247)/x248);

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x249 = INT8_MAX;
	int64_t x250 = INT64_MIN;
	int64_t x251 = INT64_MIN;
	static volatile int16_t x252 = -1;
	int32_t t62 = 18106;

    t62 = (((x249<=x250)!=x251)/x252);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x255 = INT16_MAX;
	volatile int64_t x256 = INT64_MAX;
	volatile int64_t t63 = 42902388972LL;

    t63 = (((x253<=x254)!=x255)/x256);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x257 = UINT32_MAX;
	uint64_t x258 = 10518562413840029LLU;
	static int64_t x259 = INT64_MAX;
	volatile int8_t x260 = INT8_MIN;
	int32_t t64 = 6369027;

    t64 = (((x257<=x258)!=x259)/x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = -1;
	static int32_t x263 = 177547793;
	uint16_t x264 = UINT16_MAX;

    t65 = (((x261<=x262)!=x263)/x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x265 = INT16_MIN;
	static volatile int32_t x266 = INT32_MIN;
	int16_t x267 = 5059;
	uint64_t x268 = 15129482LLU;
	volatile uint64_t t66 = 31254990533044339LLU;

    t66 = (((x265<=x266)!=x267)/x268);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 186U;
	int32_t x271 = -11325;
	int64_t t67 = 27LL;

    t67 = (((x269<=x270)!=x271)/x272);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = UINT64_MAX;
	int32_t x274 = INT32_MIN;
	int32_t x275 = INT32_MAX;
	int64_t x276 = INT64_MIN;

    t68 = (((x273<=x274)!=x275)/x276);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 9640U;
	uint16_t x278 = 0U;
	volatile int16_t x279 = INT16_MIN;
	uint64_t x280 = 413830LLU;

    t69 = (((x277<=x278)!=x279)/x280);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	int8_t x282 = INT8_MAX;
	static int64_t x284 = INT64_MAX;
	static volatile int64_t t70 = 91LL;

    t70 = (((x281<=x282)!=x283)/x284);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x285 = 3U;
	volatile uint8_t x286 = 30U;
	uint8_t x287 = 1U;
	uint8_t x288 = UINT8_MAX;
	int32_t t71 = -243;

    t71 = (((x285<=x286)!=x287)/x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = 1943139794U;
	int64_t x291 = 488347406324490LL;
	int32_t x292 = INT32_MIN;

    t72 = (((x289<=x290)!=x291)/x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = 411LL;
	volatile int8_t x295 = -1;
	static volatile uint64_t x296 = UINT64_MAX;

    t73 = (((x293<=x294)!=x295)/x296);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x297 = -1;
	uint64_t x298 = UINT64_MAX;
	volatile int64_t x299 = -1LL;
	int32_t x300 = -1;
	static int32_t t74 = 209793071;

    t74 = (((x297<=x298)!=x299)/x300);

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = 1;
	static int16_t x302 = INT16_MIN;
	int32_t x303 = INT32_MIN;
	static volatile int32_t t75 = -1;

    t75 = (((x301<=x302)!=x303)/x304);

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x305 = UINT8_MAX;
	int8_t x306 = 13;
	int32_t x307 = INT32_MIN;
	int32_t t76 = -444090790;

    t76 = (((x305<=x306)!=x307)/x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = INT8_MIN;
	int16_t x310 = INT16_MAX;
	int16_t x311 = 1420;

    t77 = (((x309<=x310)!=x311)/x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x314 = 520U;
	uint32_t x316 = 1280787U;

    t78 = (((x313<=x314)!=x315)/x316);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int64_t x317 = INT64_MIN;
	int64_t x318 = INT64_MIN;
	volatile int8_t x319 = -1;
	static int32_t t79 = -257477;

    t79 = (((x317<=x318)!=x319)/x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x321 = 8;
	int8_t x322 = 2;
	volatile int32_t t80 = -481916998;

    t80 = (((x321<=x322)!=x323)/x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int32_t x326 = INT32_MIN;
	volatile int32_t t81 = 15628766;

    t81 = (((x325<=x326)!=x327)/x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = INT8_MAX;
	static int16_t x330 = INT16_MIN;
	static int16_t x332 = INT16_MIN;
	volatile int32_t t82 = 394;

    t82 = (((x329<=x330)!=x331)/x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x333 = -1;
	uint8_t x334 = UINT8_MAX;
	uint16_t x335 = 60U;
	int32_t x336 = INT32_MAX;
	int32_t t83 = 30;

    t83 = (((x333<=x334)!=x335)/x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x338 = INT32_MIN;
	static volatile int32_t t84 = -1;

    t84 = (((x337<=x338)!=x339)/x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int32_t x341 = INT32_MIN;
	volatile int8_t x343 = -1;
	static int64_t x344 = INT64_MAX;

    t85 = (((x341<=x342)!=x343)/x344);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x345 = INT16_MIN;
	int32_t x347 = INT32_MAX;
	int64_t x348 = INT64_MIN;
	volatile int64_t t86 = 65123926LL;

    t86 = (((x345<=x346)!=x347)/x348);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = 97;
	int16_t x350 = 4;
	int16_t x351 = INT16_MIN;
	uint8_t x352 = 85U;
	int32_t t87 = -2;

    t87 = (((x349<=x350)!=x351)/x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int8_t x353 = -1;
	int16_t x354 = 7;
	int8_t x355 = INT8_MIN;
	int32_t x356 = INT32_MIN;
	int32_t t88 = 230;

    t88 = (((x353<=x354)!=x355)/x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = 1;
	int8_t x359 = INT8_MIN;
	uint32_t x360 = UINT32_MAX;
	uint32_t t89 = 381772U;

    t89 = (((x357<=x358)!=x359)/x360);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x361 = INT64_MAX;
	volatile int64_t x363 = -144LL;
	volatile int32_t x364 = -1;
	static int32_t t90 = -2609089;

    t90 = (((x361<=x362)!=x363)/x364);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x366 = 760U;
	uint32_t x367 = UINT32_MAX;
	volatile uint32_t t91 = 291104565U;

    t91 = (((x365<=x366)!=x367)/x368);

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -1LL;
	int16_t x370 = 4;
	int8_t x371 = -33;
	uint64_t x372 = 1775LLU;

    t92 = (((x369<=x370)!=x371)/x372);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = -115;
	int8_t x374 = INT8_MIN;
	volatile int32_t x375 = INT32_MIN;
	uint64_t x376 = 1383LLU;
	static uint64_t t93 = 2413469340494938LLU;

    t93 = (((x373<=x374)!=x375)/x376);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x378 = 1;
	int64_t x380 = -1LL;

    t94 = (((x377<=x378)!=x379)/x380);

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x381 = UINT32_MAX;
	uint8_t x382 = UINT8_MAX;
	static int16_t x383 = INT16_MIN;
	uint64_t x384 = 4912839331129448LLU;
	volatile uint64_t t95 = 50LLU;

    t95 = (((x381<=x382)!=x383)/x384);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x385 = 141889605U;
	int32_t x386 = 114402;
	int16_t x387 = -2512;
	volatile int32_t x388 = -19394580;
	int32_t t96 = 26550;

    t96 = (((x385<=x386)!=x387)/x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = -33836616;
	int32_t x391 = -27;
	uint16_t x392 = 2033U;
	int32_t t97 = 0;

    t97 = (((x389<=x390)!=x391)/x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = INT64_MAX;
	int8_t x394 = INT8_MAX;
	uint8_t x396 = 33U;

    t98 = (((x393<=x394)!=x395)/x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x397 = -6872LL;
	int64_t x398 = INT64_MIN;
	int32_t x399 = -1;
	static volatile int32_t x400 = INT32_MIN;
	volatile int32_t t99 = -1627;

    t99 = (((x397<=x398)!=x399)/x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = UINT32_MAX;
	int16_t x402 = INT16_MAX;
	int8_t x403 = -1;
	uint8_t x404 = UINT8_MAX;
	static int32_t t100 = 0;

    t100 = (((x401<=x402)!=x403)/x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x405 = -20248511674627LL;
	int8_t x406 = INT8_MAX;
	volatile int32_t x407 = INT32_MAX;
	int32_t t101 = 21874750;

    t101 = (((x405<=x406)!=x407)/x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x411 = UINT32_MAX;
	int32_t x412 = INT32_MIN;
	static volatile int32_t t102 = 7;

    t102 = (((x409<=x410)!=x411)/x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x413 = 931U;
	int16_t x414 = INT16_MAX;
	int16_t x415 = INT16_MIN;
	volatile int64_t x416 = INT64_MAX;
	static volatile int64_t t103 = -2066758508LL;

    t103 = (((x413<=x414)!=x415)/x416);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = -1;
	uint8_t x418 = UINT8_MAX;
	uint16_t x419 = 5365U;
	int64_t x420 = -283088216967561823LL;
	volatile int64_t t104 = -129990920LL;

    t104 = (((x417<=x418)!=x419)/x420);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	int16_t x422 = 0;
	static uint8_t x423 = 1U;
	int8_t x424 = INT8_MIN;
	volatile int32_t t105 = -71652609;

    t105 = (((x421<=x422)!=x423)/x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x425 = 12565U;
	volatile int16_t x428 = -2;

    t106 = (((x425<=x426)!=x427)/x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x429 = 18700U;
	uint8_t x431 = UINT8_MAX;

    t107 = (((x429<=x430)!=x431)/x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 125U;
	uint32_t x434 = 61907U;
	uint64_t x436 = 557588904011193LLU;

    t108 = (((x433<=x434)!=x435)/x436);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	int64_t x438 = INT64_MIN;
	int16_t x439 = -1559;
	int16_t x440 = INT16_MIN;
	int32_t t109 = 12788832;

    t109 = (((x437<=x438)!=x439)/x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 132U;
	int32_t x443 = 104299;
	int32_t t110 = -6843;

    t110 = (((x441<=x442)!=x443)/x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 87U;
	static uint8_t x446 = 5U;
	int64_t x447 = -1LL;
	volatile uint32_t x448 = UINT32_MAX;
	uint32_t t111 = 230481U;

    t111 = (((x445<=x446)!=x447)/x448);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x450 = 672U;
	int32_t x451 = -1;
	int8_t x452 = 25;
	volatile int32_t t112 = 15491707;

    t112 = (((x449<=x450)!=x451)/x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x453 = INT32_MIN;
	volatile int32_t x454 = -1;
	int8_t x455 = -1;
	uint64_t x456 = 3071853300130724399LLU;
	volatile uint64_t t113 = 0LLU;

    t113 = (((x453<=x454)!=x455)/x456);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x457 = UINT8_MAX;
	int32_t x459 = -320776776;
	int16_t x460 = INT16_MIN;

    t114 = (((x457<=x458)!=x459)/x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x461 = INT16_MAX;
	volatile uint64_t x462 = 670229348330488051LLU;
	static int8_t x463 = INT8_MIN;
	volatile uint16_t x464 = 21326U;
	int32_t t115 = -39;

    t115 = (((x461<=x462)!=x463)/x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x465 = 7964788227123939868LLU;
	int32_t x466 = INT32_MAX;
	static int8_t x467 = INT8_MIN;
	int32_t x468 = -7800;
	int32_t t116 = -5583694;

    t116 = (((x465<=x466)!=x467)/x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MIN;
	int16_t x470 = -1;
	uint16_t x472 = UINT16_MAX;

    t117 = (((x469<=x470)!=x471)/x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -1;
	int8_t x474 = 0;
	int32_t x475 = -12222;
	volatile int32_t t118 = -407466;

    t118 = (((x473<=x474)!=x475)/x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x478 = INT64_MIN;
	uint64_t x479 = 168LLU;
	uint16_t x480 = 29U;

    t119 = (((x477<=x478)!=x479)/x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 5138729864620LLU;
	int16_t x482 = -1;
	volatile int8_t x484 = 1;
	static volatile int32_t t120 = -1;

    t120 = (((x481<=x482)!=x483)/x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 2U;
	uint8_t x486 = UINT8_MAX;
	int32_t x487 = -1;
	uint64_t x488 = UINT64_MAX;
	static uint64_t t121 = 273510667863LLU;

    t121 = (((x485<=x486)!=x487)/x488);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = 203282954274726516LL;
	int16_t x490 = INT16_MIN;
	int8_t x491 = -1;
	uint8_t x492 = 7U;
	int32_t t122 = 36369775;

    t122 = (((x489<=x490)!=x491)/x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = -1;
	static uint64_t x494 = UINT64_MAX;
	int8_t x495 = INT8_MAX;
	int32_t x496 = INT32_MAX;
	volatile int32_t t123 = -21467902;

    t123 = (((x493<=x494)!=x495)/x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x497 = -1;
	static int64_t x499 = INT64_MIN;
	int8_t x500 = -1;
	static volatile int32_t t124 = 84058669;

    t124 = (((x497<=x498)!=x499)/x500);

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x501 = INT64_MIN;
	uint32_t x504 = UINT32_MAX;
	volatile uint32_t t125 = 17U;

    t125 = (((x501<=x502)!=x503)/x504);

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = 4506LLU;
	volatile int8_t x506 = INT8_MAX;
	volatile int16_t x507 = INT16_MIN;
	volatile int32_t x508 = INT32_MIN;
	static volatile int32_t t126 = 1;

    t126 = (((x505<=x506)!=x507)/x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x510 = -1;
	static int8_t x511 = 6;
	volatile uint16_t x512 = 2159U;
	int32_t t127 = -40908;

    t127 = (((x509<=x510)!=x511)/x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x514 = INT8_MAX;
	static int64_t x515 = INT64_MIN;
	uint32_t x516 = UINT32_MAX;
	volatile uint32_t t128 = 57656U;

    t128 = (((x513<=x514)!=x515)/x516);

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x518 = INT32_MIN;
	int32_t x519 = INT32_MIN;
	static volatile int16_t x520 = INT16_MIN;
	static int32_t t129 = -88;

    t129 = (((x517<=x518)!=x519)/x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x521 = -1;
	int32_t x522 = -1;
	int64_t x523 = -15211LL;
	static volatile uint32_t x524 = 5223U;
	static volatile uint32_t t130 = 0U;

    t130 = (((x521<=x522)!=x523)/x524);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x526 = INT16_MIN;
	int32_t x528 = INT32_MIN;
	static int32_t t131 = -8;

    t131 = (((x525<=x526)!=x527)/x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = 24U;
	static volatile int32_t x532 = INT32_MIN;
	int32_t t132 = -36;

    t132 = (((x529<=x530)!=x531)/x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x535 = -305;
	int32_t t133 = 1;

    t133 = (((x533<=x534)!=x535)/x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MIN;
	int32_t x538 = INT32_MAX;
	uint32_t x539 = 1420217597U;
	volatile int8_t x540 = -10;
	volatile int32_t t134 = -64903;

    t134 = (((x537<=x538)!=x539)/x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x541 = 61U;
	static volatile int8_t x543 = INT8_MAX;
	uint32_t x544 = 10U;
	volatile uint32_t t135 = 0U;

    t135 = (((x541<=x542)!=x543)/x544);

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	int16_t x546 = INT16_MIN;
	int64_t x547 = INT64_MAX;
	static int32_t x548 = INT32_MIN;
	int32_t t136 = -18;

    t136 = (((x545<=x546)!=x547)/x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x549 = 4828625U;
	int16_t x550 = INT16_MIN;
	uint16_t x552 = UINT16_MAX;
	static int32_t t137 = -13561498;

    t137 = (((x549<=x550)!=x551)/x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = UINT32_MAX;
	volatile int16_t x554 = -13;
	static int32_t t138 = -2;

    t138 = (((x553<=x554)!=x555)/x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MIN;
	int16_t x559 = 4417;
	int32_t x560 = -1;
	volatile int32_t t139 = 5862216;

    t139 = (((x557<=x558)!=x559)/x560);

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	uint64_t x562 = 1517LLU;
	int8_t x563 = INT8_MIN;
	int64_t x564 = -1LL;

    t140 = (((x561<=x562)!=x563)/x564);

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	uint8_t x566 = 5U;
	int16_t x567 = -1;
	uint32_t x568 = UINT32_MAX;
	volatile uint32_t t141 = 328U;

    t141 = (((x565<=x566)!=x567)/x568);

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x573 = 777;
	uint64_t x574 = 57909215268933LLU;
	int32_t x575 = 142633738;
	static int16_t x576 = -3;

    t142 = (((x573<=x574)!=x575)/x576);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x578 = -511356;
	int16_t x579 = INT16_MIN;
	int64_t x580 = -1LL;
	volatile int64_t t143 = 595090646734446LL;

    t143 = (((x577<=x578)!=x579)/x580);

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x581 = INT64_MIN;
	int8_t x582 = INT8_MIN;
	int64_t x583 = INT64_MAX;
	int64_t x584 = INT64_MIN;
	int64_t t144 = 7830630551970678LL;

    t144 = (((x581<=x582)!=x583)/x584);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x586 = INT32_MIN;
	uint64_t x587 = 6589887381LLU;
	static int32_t x588 = 5;
	static int32_t t145 = -117446;

    t145 = (((x585<=x586)!=x587)/x588);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x589 = -1LL;
	static uint64_t x590 = 26LLU;
	uint64_t x592 = 4LLU;
	uint64_t t146 = 1642809746233476772LLU;

    t146 = (((x589<=x590)!=x591)/x592);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x593 = -1;
	int32_t x595 = INT32_MIN;
	int64_t x596 = -1LL;
	volatile int64_t t147 = 472826349641780LL;

    t147 = (((x593<=x594)!=x595)/x596);

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x597 = INT32_MIN;
	int8_t x598 = -1;
	static int64_t x599 = INT64_MAX;
	static int32_t t148 = 1328741;

    t148 = (((x597<=x598)!=x599)/x600);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x602 = 16057U;
	static int64_t x604 = INT64_MAX;
	int64_t t149 = 22892855461LL;

    t149 = (((x601<=x602)!=x603)/x604);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x605 = INT64_MIN;
	int32_t x606 = INT32_MIN;
	int16_t x607 = INT16_MIN;
	int8_t x608 = INT8_MIN;
	volatile int32_t t150 = -18350414;

    t150 = (((x605<=x606)!=x607)/x608);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x609 = 1U;
	uint64_t x610 = UINT64_MAX;
	int32_t x611 = INT32_MAX;
	volatile int32_t t151 = -120100;

    t151 = (((x609<=x610)!=x611)/x612);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x614 = 20;
	static int16_t x615 = INT16_MIN;
	int32_t x616 = 73022;

    t152 = (((x613<=x614)!=x615)/x616);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x618 = INT16_MAX;
	volatile uint32_t x619 = 58789U;
	static int64_t x620 = INT64_MAX;
	volatile int64_t t153 = 1393238147286LL;

    t153 = (((x617<=x618)!=x619)/x620);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x621 = INT64_MAX;
	static volatile uint32_t x622 = 38U;
	volatile int16_t x623 = 4;
	static int64_t x624 = INT64_MIN;
	volatile int64_t t154 = 130631875431LL;

    t154 = (((x621<=x622)!=x623)/x624);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x625 = -1LL;
	static int16_t x628 = INT16_MIN;
	int32_t t155 = -28000;

    t155 = (((x625<=x626)!=x627)/x628);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x629 = INT16_MAX;
	uint8_t x630 = 90U;
	static int8_t x631 = -15;
	volatile int64_t x632 = INT64_MAX;
	static int64_t t156 = 58853883077LL;

    t156 = (((x629<=x630)!=x631)/x632);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x633 = 61468780438068839LL;
	volatile int16_t x634 = -1;
	uint16_t x635 = UINT16_MAX;
	static int32_t x636 = INT32_MIN;
	volatile int32_t t157 = 7;

    t157 = (((x633<=x634)!=x635)/x636);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    

    t158 = (((x637<=x638)!=x639)/x640);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x641 = INT32_MAX;
	static volatile int8_t x642 = -54;
	static volatile int16_t x643 = INT16_MIN;
	uint32_t x644 = UINT32_MAX;
	uint32_t t159 = 16653U;

    t159 = (((x641<=x642)!=x643)/x644);

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x645 = 4780;
	int8_t x646 = INT8_MAX;
	uint64_t x647 = 21684703139116LLU;
	volatile int32_t t160 = 0;

    t160 = (((x645<=x646)!=x647)/x648);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x650 = UINT32_MAX;
	int32_t x651 = INT32_MIN;
	int16_t x652 = 32;
	int32_t t161 = -1640871;

    t161 = (((x649<=x650)!=x651)/x652);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x653 = INT16_MAX;
	static int32_t x654 = -1;
	int32_t x655 = -1;
	int64_t x656 = 317139006845LL;
	int64_t t162 = 1478649360173LL;

    t162 = (((x653<=x654)!=x655)/x656);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x658 = -63;
	int64_t x660 = INT64_MIN;
	int64_t t163 = -1627561219434296419LL;

    t163 = (((x657<=x658)!=x659)/x660);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x661 = 101;
	static volatile uint16_t x662 = UINT16_MAX;
	volatile int16_t x663 = INT16_MAX;
	uint32_t x664 = 210U;
	uint32_t t164 = 26052347U;

    t164 = (((x661<=x662)!=x663)/x664);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x665 = 5507U;
	volatile int32_t x667 = INT32_MIN;
	volatile int8_t x668 = -1;
	int32_t t165 = -8243267;

    t165 = (((x665<=x666)!=x667)/x668);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x669 = -1;
	uint8_t x670 = 50U;
	int8_t x672 = INT8_MIN;
	int32_t t166 = 126;

    t166 = (((x669<=x670)!=x671)/x672);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x673 = -1;
	uint32_t x674 = UINT32_MAX;
	int16_t x675 = -1;
	int16_t x676 = -1;
	int32_t t167 = -5;

    t167 = (((x673<=x674)!=x675)/x676);

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x677 = -3;
	static int8_t x679 = -1;
	static uint16_t x680 = UINT16_MAX;
	volatile int32_t t168 = -11303;

    t168 = (((x677<=x678)!=x679)/x680);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x681 = INT8_MIN;
	static int8_t x683 = -1;
	volatile int16_t x684 = -1;
	volatile int32_t t169 = -45;

    t169 = (((x681<=x682)!=x683)/x684);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x685 = 443182489U;
	uint64_t x686 = 7011LLU;
	int8_t x687 = INT8_MAX;
	volatile uint64_t t170 = 1038269751461LLU;

    t170 = (((x685<=x686)!=x687)/x688);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x689 = INT64_MAX;
	volatile uint32_t x690 = 2643U;
	volatile int32_t x691 = -53620511;
	int16_t x692 = INT16_MIN;
	int32_t t171 = -54805;

    t171 = (((x689<=x690)!=x691)/x692);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x693 = 3U;
	int64_t x694 = INT64_MIN;
	int16_t x695 = 1;
	volatile int64_t x696 = -67945348655338694LL;
	volatile int64_t t172 = 0LL;

    t172 = (((x693<=x694)!=x695)/x696);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x697 = -1;
	int8_t x698 = INT8_MIN;
	static uint64_t x699 = 101468994790LLU;
	int32_t x700 = 4794;
	volatile int32_t t173 = -4152070;

    t173 = (((x697<=x698)!=x699)/x700);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x701 = UINT16_MAX;
	static int16_t x703 = -1;
	int64_t x704 = INT64_MIN;
	int64_t t174 = -2LL;

    t174 = (((x701<=x702)!=x703)/x704);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x705 = INT64_MIN;
	int32_t t175 = 1044578;

    t175 = (((x705<=x706)!=x707)/x708);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x709 = 31U;
	static int64_t x710 = INT64_MIN;
	int8_t x711 = 3;
	int16_t x712 = INT16_MAX;
	int32_t t176 = -8165;

    t176 = (((x709<=x710)!=x711)/x712);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x713 = 35;
	int8_t x714 = 53;
	int32_t x715 = INT32_MIN;
	uint64_t x716 = UINT64_MAX;

    t177 = (((x713<=x714)!=x715)/x716);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x717 = INT8_MIN;
	uint32_t x719 = UINT32_MAX;
	int64_t x720 = INT64_MIN;
	static volatile int64_t t178 = -71129LL;

    t178 = (((x717<=x718)!=x719)/x720);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint32_t x721 = 26832U;
	int8_t x723 = 10;
	static int64_t x724 = -75435598820428793LL;
	volatile int64_t t179 = 161486943392663LL;

    t179 = (((x721<=x722)!=x723)/x724);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x725 = 940461406768LLU;
	int16_t x726 = -658;
	uint8_t x727 = UINT8_MAX;
	uint16_t x728 = 15359U;
	volatile int32_t t180 = 57000303;

    t180 = (((x725<=x726)!=x727)/x728);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x729 = INT64_MIN;
	static int32_t x730 = INT32_MAX;
	int16_t x731 = -1;
	uint8_t x732 = UINT8_MAX;
	int32_t t181 = -148;

    t181 = (((x729<=x730)!=x731)/x732);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x733 = -1;
	int64_t x735 = 380LL;
	int32_t t182 = -45;

    t182 = (((x733<=x734)!=x735)/x736);

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x737 = 26U;
	int8_t x738 = 59;
	int16_t x739 = -1;
	volatile int32_t t183 = 152604884;

    t183 = (((x737<=x738)!=x739)/x740);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x741 = 1100;
	uint64_t x742 = UINT64_MAX;
	static int16_t x743 = 5356;
	static volatile uint32_t x744 = 7514U;
	volatile uint32_t t184 = 2162834U;

    t184 = (((x741<=x742)!=x743)/x744);

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x746 = 31;
	int16_t x747 = 881;
	static uint32_t x748 = UINT32_MAX;
	static uint32_t t185 = 59U;

    t185 = (((x745<=x746)!=x747)/x748);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x749 = INT16_MAX;
	uint8_t x750 = 1U;
	static int16_t x751 = INT16_MIN;
	int8_t x752 = INT8_MAX;

    t186 = (((x749<=x750)!=x751)/x752);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x753 = UINT8_MAX;
	int32_t x754 = INT32_MIN;
	int8_t x755 = 38;
	volatile uint64_t t187 = 839LLU;

    t187 = (((x753<=x754)!=x755)/x756);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x757 = INT8_MIN;
	int16_t x758 = 703;
	volatile uint16_t x760 = UINT16_MAX;
	volatile int32_t t188 = -26099;

    t188 = (((x757<=x758)!=x759)/x760);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x761 = INT16_MIN;
	int64_t x762 = -35344253360890680LL;
	int32_t x763 = -6;
	uint8_t x764 = 27U;
	volatile int32_t t189 = -15568;

    t189 = (((x761<=x762)!=x763)/x764);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x765 = 38060U;
	int16_t x766 = -95;
	volatile int32_t x768 = -1;
	int32_t t190 = 5782288;

    t190 = (((x765<=x766)!=x767)/x768);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x769 = UINT64_MAX;
	uint16_t x770 = 1306U;
	int16_t x771 = INT16_MIN;
	int64_t x772 = INT64_MAX;
	volatile int64_t t191 = -7025773461LL;

    t191 = (((x769<=x770)!=x771)/x772);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x773 = INT64_MIN;
	volatile uint8_t x774 = 70U;
	static volatile uint8_t x775 = UINT8_MAX;
	int32_t x776 = INT32_MAX;
	static volatile int32_t t192 = 11983789;

    t192 = (((x773<=x774)!=x775)/x776);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x777 = -7;
	int64_t x778 = -1LL;
	uint8_t x779 = 76U;
	static int16_t x780 = INT16_MIN;
	volatile int32_t t193 = -7;

    t193 = (((x777<=x778)!=x779)/x780);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x781 = -1;
	int16_t x782 = -1;
	uint16_t x783 = 16246U;
	int16_t x784 = -1241;
	int32_t t194 = 6863439;

    t194 = (((x781<=x782)!=x783)/x784);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x785 = INT64_MIN;
	volatile int8_t x786 = INT8_MIN;
	int64_t x787 = -1LL;
	static int64_t x788 = 660818400661LL;
	int64_t t195 = 27LL;

    t195 = (((x785<=x786)!=x787)/x788);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x789 = INT64_MAX;
	int32_t x790 = -38027183;
	int64_t x791 = INT64_MIN;
	int8_t x792 = -1;
	static volatile int32_t t196 = 1;

    t196 = (((x789<=x790)!=x791)/x792);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x793 = INT8_MIN;
	volatile uint8_t x794 = UINT8_MAX;
	int16_t x795 = 31;
	static int16_t x796 = -1;
	volatile int32_t t197 = 21481026;

    t197 = (((x793<=x794)!=x795)/x796);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x797 = INT16_MIN;
	volatile int8_t x798 = INT8_MIN;
	int64_t x799 = INT64_MAX;
	volatile int8_t x800 = INT8_MAX;

    t198 = (((x797<=x798)!=x799)/x800);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x801 = INT64_MIN;
	uint16_t x802 = 28U;
	uint64_t x803 = UINT64_MAX;
	int32_t t199 = 0;

    t199 = (((x801<=x802)!=x803)/x804);

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

