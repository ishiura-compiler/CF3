
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

static int16_t x2 = 13;
static int64_t x8 = INT64_MAX;
int8_t x9 = -1;
uint8_t x10 = 16U;
static int8_t x15 = -43;
int64_t x16 = -1LL;
int8_t x19 = -31;
uint64_t x20 = 7437544185429LLU;
uint16_t x22 = 0U;
volatile int32_t t7 = 121;
uint64_t x34 = 472LLU;
int8_t x35 = -1;
volatile int32_t t8 = -1017039934;
uint16_t x43 = UINT16_MAX;
int16_t x44 = -1;
int32_t t10 = 0;
int64_t x49 = -1LL;
uint64_t t14 = 361898LLU;
uint32_t t15 = UINT32_MAX;
volatile int32_t t17 = 376;
int64_t x73 = 44641271998112LL;
int16_t x74 = 27;
static int32_t t19 = -82278;
uint16_t x86 = UINT16_MAX;
static int32_t x87 = -1;
int64_t x89 = INT64_MAX;
int16_t x90 = INT16_MAX;
static int16_t x95 = 75;
uint16_t x101 = 20733U;
int64_t x110 = 3943LL;
volatile uint64_t t26 = 58LLU;
volatile int64_t t27 = -14179LL;
int8_t x119 = INT8_MAX;
int64_t x122 = -1LL;
int8_t x124 = -30;
uint8_t x127 = UINT8_MAX;
static int16_t x129 = INT16_MIN;
static volatile int32_t t31 = 500;
static int64_t x134 = -1LL;
int32_t x135 = INT32_MIN;
int16_t x139 = INT16_MAX;
int16_t x141 = 32;
uint64_t x142 = 94200LLU;
static int16_t x143 = INT16_MIN;
static int32_t t35 = 28;
uint16_t x149 = 1U;
static volatile uint32_t x154 = UINT32_MAX;
uint16_t x156 = UINT16_MAX;
uint64_t x157 = UINT64_MAX;
int32_t x168 = INT32_MIN;
int64_t x170 = 3101654913276291440LL;
volatile uint16_t x171 = 255U;
volatile uint16_t x203 = UINT16_MAX;
int8_t x214 = INT8_MIN;
uint16_t x218 = 18U;
int8_t x221 = 11;
int32_t t51 = -119333149;
uint64_t x226 = 399647LLU;
int32_t x229 = -1;
int32_t x235 = -519;
int32_t x237 = 1008116;
volatile uint32_t x245 = 915093U;
int64_t x247 = INT64_MIN;
volatile int32_t x248 = INT32_MAX;
int8_t x258 = -1;
int16_t x261 = INT16_MAX;
static uint32_t x265 = 6456770U;
static int64_t x274 = -1LL;
int64_t x277 = -16390715565091843LL;
static int32_t x279 = -28385;
uint32_t x295 = UINT32_MAX;
int8_t x297 = INT8_MAX;
volatile int32_t t70 = 343992021;
uint32_t x318 = UINT32_MAX;
volatile uint16_t x328 = 437U;
static int8_t x341 = -1;
int16_t x342 = 2023;
uint32_t x347 = UINT32_MAX;
int64_t x348 = -624354273067850LL;
int64_t x355 = INT64_MAX;
uint8_t x360 = 0U;
volatile uint8_t x362 = 0U;
int64_t x363 = -1LL;
static volatile int32_t t84 = -218513;
int64_t x365 = INT64_MIN;
static volatile int32_t t85 = -1;
uint64_t x373 = 915684698LLU;
volatile int64_t x377 = INT64_MIN;
volatile int64_t x384 = INT64_MIN;
static int64_t x385 = INT64_MIN;
int32_t x391 = -1;
volatile int8_t x392 = -1;
static int32_t t90 = -310;
uint32_t x393 = 7U;
static uint8_t x404 = UINT8_MAX;
int64_t x407 = INT64_MIN;
uint32_t t94 = 1577820823U;
int32_t x410 = -1658;
int8_t x411 = INT8_MAX;
int32_t x413 = INT32_MAX;
static int8_t x421 = 1;
static volatile int64_t x424 = INT64_MAX;
int64_t t97 = INT64_MAX;
volatile uint16_t x429 = 30U;
static int64_t x431 = INT64_MAX;
int8_t x432 = -10;
int8_t x433 = 1;
uint8_t x438 = 11U;
int32_t x439 = INT32_MAX;
static volatile uint8_t x441 = UINT8_MAX;
static uint64_t x442 = UINT64_MAX;
int64_t t102 = INT64_MAX;
int32_t x445 = -1873061;
volatile int32_t x449 = -1;
int32_t x454 = INT32_MIN;
uint16_t x459 = 1U;
uint8_t x460 = UINT8_MAX;
int8_t x463 = -1;
int64_t x469 = -1007386855248089427LL;
volatile int32_t t109 = -50138;
uint64_t x483 = 1396156834LLU;
int8_t x485 = INT8_MIN;
static int8_t x492 = INT8_MAX;
uint64_t x493 = UINT64_MAX;
volatile int8_t x495 = 1;
static uint32_t x500 = 4U;
uint64_t x502 = 8116548717311LLU;
volatile uint64_t t118 = 2607615758LLU;
int64_t x514 = -1LL;
volatile int32_t t121 = 272;
static int32_t t122 = -1090669;
int32_t x533 = -1;
uint8_t x534 = 92U;
volatile int16_t x536 = INT16_MIN;
uint32_t x547 = UINT32_MAX;
int32_t x549 = -1;
int32_t x552 = INT32_MIN;
volatile int32_t t129 = -31637165;
uint64_t x559 = 75LLU;
uint8_t x567 = UINT8_MAX;
int32_t t131 = 236;
int32_t x584 = -1;
int64_t x597 = -1LL;
volatile int16_t x606 = INT16_MAX;
volatile int8_t x619 = -1;
volatile int32_t t143 = 60069;
uint16_t x631 = 5048U;
int16_t x645 = INT16_MAX;
int16_t x654 = INT16_MIN;
volatile int32_t x660 = INT32_MAX;
int64_t x661 = 35583965943291618LL;
int64_t x676 = INT64_MIN;
int64_t t155 = INT64_MIN;
uint16_t x677 = UINT16_MAX;
uint32_t x678 = 4097732U;
static int16_t x690 = 0;
int8_t x693 = INT8_MIN;
static volatile int32_t t159 = 3014;
uint64_t x702 = UINT64_MAX;
int32_t x703 = INT32_MAX;
uint8_t x707 = 51U;
int16_t x716 = INT16_MIN;
int8_t x725 = INT8_MIN;
static volatile int64_t x735 = INT64_MIN;
int64_t x741 = -1LL;
volatile int64_t x748 = -95485276LL;
volatile int64_t t170 = 1LL;
volatile int8_t x754 = INT8_MIN;
volatile uint32_t t173 = 535266U;
volatile int32_t t174 = -291663670;
int16_t x778 = INT16_MAX;
int16_t x779 = INT16_MIN;
int16_t x796 = 3382;
volatile int32_t t180 = -73993016;
int8_t x798 = INT8_MAX;
int64_t t181 = -383387461928LL;
int32_t t182 = 5;
static int32_t x805 = -1;
int32_t t183 = -415861;
static volatile uint32_t t184 = 1745069312U;
uint16_t x822 = UINT16_MAX;
uint8_t x824 = 3U;
static int32_t t185 = -14;
static uint8_t x835 = 106U;
uint32_t x836 = UINT32_MAX;
volatile uint32_t t187 = 210569950U;
uint16_t x840 = UINT16_MAX;
uint64_t x875 = 1656LLU;
uint64_t x883 = 4070020LLU;
static uint16_t x886 = 1327U;


void f0(void) {
    	int32_t x1 = -30448;
	int16_t x3 = INT16_MIN;
	static int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = 380;

    t0 = (((x1-x2)<=x3)*x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 643;
	uint32_t x6 = 808U;
	uint64_t x7 = 2639905061LLU;
	int64_t t1 = -1603490LL;

    t1 = (((x5-x6)<=x7)*x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x11 = INT16_MAX;
	int16_t x12 = INT16_MIN;
	int32_t t2 = -8;

    t2 = (((x9-x10)<=x11)*x12);

    if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 15U;
	int16_t x14 = 240;
	volatile int64_t t3 = -3LL;

    t3 = (((x13-x14)<=x15)*x16);

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x17 = 733735U;
	int16_t x18 = INT16_MIN;
	uint64_t t4 = 5143766LLU;

    t4 = (((x17-x18)<=x19)*x20);

    if (t4 != 7437544185429LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = -116;
	volatile uint64_t x23 = 191368364LLU;
	uint64_t x24 = UINT64_MAX;
	volatile uint64_t t5 = 76804067LLU;

    t5 = (((x21-x22)<=x23)*x24);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = 3517980;
	volatile int16_t x26 = -1;
	uint8_t x27 = 9U;
	int16_t x28 = INT16_MAX;
	volatile int32_t t6 = 1;

    t6 = (((x25-x26)<=x27)*x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 210U;
	int8_t x30 = INT8_MAX;
	static int8_t x31 = 21;
	volatile int8_t x32 = -2;

    t7 = (((x29-x30)<=x31)*x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x33 = 68311495LLU;
	int8_t x36 = -1;

    t8 = (((x33-x34)<=x35)*x36);

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -13;
	static volatile uint64_t x38 = UINT64_MAX;
	int8_t x39 = INT8_MAX;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -47;

    t9 = (((x37-x38)<=x39)*x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = INT16_MIN;
	int32_t x42 = -879364;

    t10 = (((x41-x42)<=x43)*x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -62;
	int8_t x46 = -1;
	uint64_t x47 = UINT64_MAX;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = INT32_MIN;

    t11 = (((x45-x46)<=x47)*x48);

    if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = INT64_MIN;
	uint8_t x51 = 4U;
	volatile uint64_t x52 = 1976726769396LLU;
	uint64_t t12 = 2LLU;

    t12 = (((x49-x50)<=x51)*x52);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	volatile int64_t x54 = 219238LL;
	static uint32_t x55 = UINT32_MAX;
	int64_t x56 = -27988LL;
	int64_t t13 = -1179017LL;

    t13 = (((x53-x54)<=x55)*x56);

    if (t13 != -27988LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 1422320U;
	int32_t x58 = INT32_MIN;
	static uint16_t x59 = 27U;
	uint64_t x60 = 13LLU;

    t14 = (((x57-x58)<=x59)*x60);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x61 = UINT32_MAX;
	uint64_t x62 = 1040685225LLU;
	int16_t x63 = -625;
	volatile uint32_t x64 = UINT32_MAX;

    t15 = (((x61-x62)<=x63)*x64);

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = -109390986984LL;
	uint8_t x66 = 3U;
	int64_t x67 = INT64_MIN;
	volatile uint64_t x68 = 1876127133LLU;
	volatile uint64_t t16 = 22LLU;

    t16 = (((x65-x66)<=x67)*x68);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 2U;
	uint32_t x70 = 7608U;
	volatile int64_t x71 = INT64_MIN;
	int8_t x72 = INT8_MIN;

    t17 = (((x69-x70)<=x71)*x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x75 = 14;
	uint32_t x76 = 46671U;
	volatile uint32_t t18 = 222U;

    t18 = (((x73-x74)<=x75)*x76);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = UINT16_MAX;
	static uint16_t x78 = UINT16_MAX;
	uint32_t x79 = 184U;
	uint16_t x80 = 1971U;

    t19 = (((x77-x78)<=x79)*x80);

    if (t19 != 1971) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = 0;
	int16_t x82 = INT16_MAX;
	volatile uint32_t x83 = 1093U;
	uint8_t x84 = 7U;
	volatile int32_t t20 = -19;

    t20 = (((x81-x82)<=x83)*x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x85 = 92246383;
	int64_t x88 = 1201LL;
	volatile int64_t t21 = 31943384LL;

    t21 = (((x85-x86)<=x87)*x88);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x91 = 9;
	volatile uint8_t x92 = 5U;
	int32_t t22 = -41096028;

    t22 = (((x89-x90)<=x91)*x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 271U;
	int8_t x94 = INT8_MAX;
	int8_t x96 = INT8_MIN;
	static int32_t t23 = -916258596;

    t23 = (((x93-x94)<=x95)*x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = 22894;
	static int16_t x98 = INT16_MIN;
	volatile uint32_t x99 = 50U;
	uint64_t x100 = 1LLU;
	uint64_t t24 = 7551LLU;

    t24 = (((x97-x98)<=x99)*x100);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x102 = 59;
	volatile uint16_t x103 = 0U;
	int32_t x104 = INT32_MIN;
	volatile int32_t t25 = -20923;

    t25 = (((x101-x102)<=x103)*x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x109 = UINT32_MAX;
	volatile int16_t x111 = INT16_MIN;
	volatile uint64_t x112 = 961536LLU;

    t26 = (((x109-x110)<=x111)*x112);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = INT32_MIN;
	static uint32_t x114 = UINT32_MAX;
	int16_t x115 = 2;
	volatile int64_t x116 = -29542913709LL;

    t27 = (((x113-x114)<=x115)*x116);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = -1389;
	static int64_t x118 = -1LL;
	volatile uint16_t x120 = 15744U;
	volatile int32_t t28 = 0;

    t28 = (((x117-x118)<=x119)*x120);

    if (t28 != 15744) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x121 = 16983691727LLU;
	int64_t x123 = 243494600010700140LL;
	static int32_t t29 = -10202;

    t29 = (((x121-x122)<=x123)*x124);

    if (t29 != -30) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x125 = 1U;
	int8_t x126 = INT8_MIN;
	volatile uint8_t x128 = UINT8_MAX;
	volatile int32_t t30 = -192;

    t30 = (((x125-x126)<=x127)*x128);

    if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x130 = 4630;
	int16_t x131 = INT16_MIN;
	int8_t x132 = 17;

    t31 = (((x129-x130)<=x131)*x132);

    if (t31 != 17) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = INT32_MIN;
	static int32_t x136 = -1;
	volatile int32_t t32 = -54892;

    t32 = (((x133-x134)<=x135)*x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = -1;
	int16_t x138 = INT16_MIN;
	int32_t x140 = INT32_MIN;
	int32_t t33 = INT32_MIN;

    t33 = (((x137-x138)<=x139)*x140);

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x144 = 51U;
	volatile int32_t t34 = 169264136;

    t34 = (((x141-x142)<=x143)*x144);

    if (t34 != 51) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x145 = INT64_MAX;
	uint16_t x146 = 2U;
	uint16_t x147 = UINT16_MAX;
	int32_t x148 = -1;

    t35 = (((x145-x146)<=x147)*x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x150 = -37785557;
	int8_t x151 = INT8_MAX;
	static volatile int64_t x152 = 27505LL;
	int64_t t36 = 7816728LL;

    t36 = (((x149-x150)<=x151)*x152);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x153 = UINT8_MAX;
	volatile int16_t x155 = INT16_MAX;
	int32_t t37 = -26;

    t37 = (((x153-x154)<=x155)*x156);

    if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x158 = -1;
	static int16_t x159 = -1;
	uint32_t x160 = 981657102U;
	volatile uint32_t t38 = 373339027U;

    t38 = (((x157-x158)<=x159)*x160);

    if (t38 != 981657102U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = INT16_MIN;
	volatile int16_t x162 = 166;
	int8_t x163 = 0;
	int32_t x164 = INT32_MIN;
	int32_t t39 = INT32_MIN;

    t39 = (((x161-x162)<=x163)*x164);

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x165 = 1;
	uint64_t x166 = UINT64_MAX;
	int32_t x167 = INT32_MIN;
	volatile int32_t t40 = INT32_MIN;

    t40 = (((x165-x166)<=x167)*x168);

    if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x169 = 11601006U;
	int32_t x172 = -1;
	int32_t t41 = 22600;

    t41 = (((x169-x170)<=x171)*x172);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x173 = -7263;
	int32_t x174 = INT32_MIN;
	volatile uint64_t x175 = UINT64_MAX;
	int64_t x176 = INT64_MAX;
	volatile int64_t t42 = INT64_MAX;

    t42 = (((x173-x174)<=x175)*x176);

    if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x177 = UINT32_MAX;
	uint64_t x178 = 1651183910LLU;
	uint32_t x179 = 70U;
	int8_t x180 = -1;
	volatile int32_t t43 = 4759238;

    t43 = (((x177-x178)<=x179)*x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x181 = -1;
	int8_t x182 = INT8_MIN;
	static volatile int8_t x183 = INT8_MAX;
	volatile uint64_t x184 = 1156LLU;
	static uint64_t t44 = 3725103489095LLU;

    t44 = (((x181-x182)<=x183)*x184);

    if (t44 != 1156LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x193 = 1739662LL;
	int16_t x194 = INT16_MIN;
	volatile uint64_t x195 = UINT64_MAX;
	volatile int16_t x196 = INT16_MIN;
	int32_t t45 = -4077;

    t45 = (((x193-x194)<=x195)*x196);

    if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x197 = -1;
	static volatile int16_t x198 = 51;
	uint8_t x199 = 5U;
	int8_t x200 = INT8_MIN;
	volatile int32_t t46 = 94;

    t46 = (((x197-x198)<=x199)*x200);

    if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = INT8_MAX;
	int32_t x202 = 37;
	int16_t x204 = INT16_MAX;
	int32_t t47 = 3;

    t47 = (((x201-x202)<=x203)*x204);

    if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x209 = INT8_MIN;
	static int64_t x210 = INT64_MIN;
	int64_t x211 = INT64_MIN;
	int32_t x212 = -1;
	static volatile int32_t t48 = 188806;

    t48 = (((x209-x210)<=x211)*x212);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x213 = -1;
	volatile int32_t x215 = -960;
	int32_t x216 = 234;
	volatile int32_t t49 = 101359;

    t49 = (((x213-x214)<=x215)*x216);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x217 = -1;
	int32_t x219 = INT32_MAX;
	uint64_t x220 = UINT64_MAX;
	uint64_t t50 = UINT64_MAX;

    t50 = (((x217-x218)<=x219)*x220);

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x222 = -1;
	int32_t x223 = INT32_MIN;
	static int32_t x224 = INT32_MIN;

    t51 = (((x221-x222)<=x223)*x224);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x225 = 21U;
	static volatile uint16_t x227 = UINT16_MAX;
	int32_t x228 = INT32_MAX;
	volatile int32_t t52 = -9;

    t52 = (((x225-x226)<=x227)*x228);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int32_t x230 = INT32_MIN;
	uint32_t x231 = 6755632U;
	int16_t x232 = INT16_MIN;
	static volatile int32_t t53 = 100886622;

    t53 = (((x229-x230)<=x231)*x232);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x233 = INT16_MIN;
	int16_t x234 = -1;
	int8_t x236 = 14;
	volatile int32_t t54 = 213767440;

    t54 = (((x233-x234)<=x235)*x236);

    if (t54 != 14) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x238 = INT64_MAX;
	uint64_t x239 = 1379LLU;
	static int32_t x240 = INT32_MAX;
	static volatile int32_t t55 = -1;

    t55 = (((x237-x238)<=x239)*x240);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x241 = UINT16_MAX;
	uint32_t x242 = UINT32_MAX;
	volatile uint8_t x243 = UINT8_MAX;
	static volatile int32_t x244 = INT32_MAX;
	int32_t t56 = 1;

    t56 = (((x241-x242)<=x243)*x244);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x246 = INT16_MIN;
	volatile int32_t t57 = -1322;

    t57 = (((x245-x246)<=x247)*x248);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x253 = -5668LL;
	volatile int64_t x254 = INT64_MIN;
	uint64_t x255 = 2763020470300LLU;
	static volatile uint16_t x256 = UINT16_MAX;
	static volatile int32_t t58 = 30;

    t58 = (((x253-x254)<=x255)*x256);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x257 = 36U;
	volatile int64_t x259 = -2271695114610838934LL;
	uint8_t x260 = UINT8_MAX;
	int32_t t59 = -4;

    t59 = (((x257-x258)<=x259)*x260);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x262 = 19026859LL;
	int32_t x263 = INT32_MIN;
	volatile uint16_t x264 = UINT16_MAX;
	int32_t t60 = -56;

    t60 = (((x261-x262)<=x263)*x264);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x266 = UINT16_MAX;
	uint8_t x267 = 46U;
	int32_t x268 = INT32_MAX;
	volatile int32_t t61 = -19119676;

    t61 = (((x265-x266)<=x267)*x268);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x269 = INT64_MAX;
	int8_t x270 = INT8_MAX;
	uint8_t x271 = UINT8_MAX;
	int8_t x272 = -1;
	int32_t t62 = -43336;

    t62 = (((x269-x270)<=x271)*x272);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x273 = INT64_MIN;
	uint64_t x275 = 12820LLU;
	int8_t x276 = 11;
	int32_t t63 = 1068854833;

    t63 = (((x273-x274)<=x275)*x276);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x278 = 820;
	static int8_t x280 = -59;
	volatile int32_t t64 = 7822624;

    t64 = (((x277-x278)<=x279)*x280);

    if (t64 != -59) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x281 = INT16_MIN;
	volatile uint8_t x282 = 1U;
	int32_t x283 = -167379;
	int64_t x284 = -17079907813303LL;
	int64_t t65 = -43LL;

    t65 = (((x281-x282)<=x283)*x284);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x285 = 920U;
	static int32_t x286 = INT32_MIN;
	static int32_t x287 = INT32_MIN;
	int64_t x288 = INT64_MIN;
	static int64_t t66 = -6142186998992160LL;

    t66 = (((x285-x286)<=x287)*x288);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x289 = 7243497738381845393LLU;
	volatile uint64_t x290 = UINT64_MAX;
	volatile int8_t x291 = 1;
	static int8_t x292 = INT8_MIN;
	volatile int32_t t67 = 11691;

    t67 = (((x289-x290)<=x291)*x292);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x293 = -21439956;
	int8_t x294 = -1;
	uint32_t x296 = UINT32_MAX;
	static volatile uint32_t t68 = UINT32_MAX;

    t68 = (((x293-x294)<=x295)*x296);

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x298 = -2823LL;
	int16_t x299 = 6;
	uint16_t x300 = 9U;
	int32_t t69 = -1226;

    t69 = (((x297-x298)<=x299)*x300);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x301 = INT8_MAX;
	int32_t x302 = INT32_MAX;
	uint32_t x303 = 851609U;
	int8_t x304 = INT8_MIN;

    t70 = (((x301-x302)<=x303)*x304);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x305 = 34818905LLU;
	uint32_t x306 = 1295U;
	static int32_t x307 = INT32_MIN;
	int16_t x308 = INT16_MAX;
	volatile int32_t t71 = -239727;

    t71 = (((x305-x306)<=x307)*x308);

    if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x309 = -1;
	static int16_t x310 = -1;
	volatile uint32_t x311 = 52380U;
	static int16_t x312 = -1;
	int32_t t72 = -49971472;

    t72 = (((x309-x310)<=x311)*x312);

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x313 = INT8_MAX;
	volatile uint8_t x314 = 54U;
	uint16_t x315 = 1U;
	int8_t x316 = INT8_MIN;
	volatile int32_t t73 = 12096001;

    t73 = (((x313-x314)<=x315)*x316);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x317 = 0;
	int8_t x319 = -1;
	int32_t x320 = INT32_MAX;
	volatile int32_t t74 = INT32_MAX;

    t74 = (((x317-x318)<=x319)*x320);

    if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x321 = 1227436077467642591LL;
	int8_t x322 = INT8_MIN;
	volatile int32_t x323 = INT32_MIN;
	volatile uint16_t x324 = UINT16_MAX;
	volatile int32_t t75 = -5304818;

    t75 = (((x321-x322)<=x323)*x324);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x325 = -1805577070389862LL;
	int8_t x326 = -1;
	uint8_t x327 = 1U;
	volatile int32_t t76 = 10336;

    t76 = (((x325-x326)<=x327)*x328);

    if (t76 != 437) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MIN;
	uint64_t x331 = 104583033112LLU;
	uint16_t x332 = 19U;
	volatile int32_t t77 = -3236554;

    t77 = (((x329-x330)<=x331)*x332);

    if (t77 != 19) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x337 = INT8_MIN;
	int16_t x338 = INT16_MIN;
	int16_t x339 = 15984;
	volatile int16_t x340 = INT16_MAX;
	volatile int32_t t78 = -1;

    t78 = (((x337-x338)<=x339)*x340);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x343 = -1;
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t79 = 3201;

    t79 = (((x341-x342)<=x343)*x344);

    if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int32_t x345 = -1;
	int64_t x346 = -1LL;
	volatile int64_t t80 = -123878897771LL;

    t80 = (((x345-x346)<=x347)*x348);

    if (t80 != -624354273067850LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x349 = -1;
	uint64_t x350 = 10411LLU;
	uint16_t x351 = 18807U;
	int16_t x352 = INT16_MIN;
	volatile int32_t t81 = -38898;

    t81 = (((x349-x350)<=x351)*x352);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x353 = -1;
	int16_t x354 = INT16_MIN;
	static int16_t x356 = 50;
	static volatile int32_t t82 = 7;

    t82 = (((x353-x354)<=x355)*x356);

    if (t82 != 50) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x357 = -1;
	static int32_t x358 = 2593392;
	int32_t x359 = INT32_MIN;
	int32_t t83 = -6478;

    t83 = (((x357-x358)<=x359)*x360);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x361 = 619897144LL;
	int16_t x364 = INT16_MIN;

    t84 = (((x361-x362)<=x363)*x364);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x366 = -1;
	int32_t x367 = INT32_MIN;
	volatile int16_t x368 = INT16_MIN;

    t85 = (((x365-x366)<=x367)*x368);

    if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x374 = -15636;
	static volatile int8_t x375 = -1;
	static int32_t x376 = INT32_MIN;
	int32_t t86 = INT32_MIN;

    t86 = (((x373-x374)<=x375)*x376);

    if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x378 = INT64_MIN;
	volatile uint32_t x379 = UINT32_MAX;
	volatile int32_t x380 = INT32_MAX;
	static volatile int32_t t87 = INT32_MAX;

    t87 = (((x377-x378)<=x379)*x380);

    if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x381 = -1;
	uint16_t x382 = UINT16_MAX;
	volatile int64_t x383 = INT64_MIN;
	int64_t t88 = -3856LL;

    t88 = (((x381-x382)<=x383)*x384);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x386 = INT32_MIN;
	int64_t x387 = INT64_MIN;
	int8_t x388 = -3;
	static volatile int32_t t89 = 227;

    t89 = (((x385-x386)<=x387)*x388);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x389 = 4U;
	static volatile int64_t x390 = -135478095LL;

    t90 = (((x389-x390)<=x391)*x392);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x394 = 1U;
	static int64_t x395 = INT64_MIN;
	int8_t x396 = INT8_MIN;
	volatile int32_t t91 = -31554005;

    t91 = (((x393-x394)<=x395)*x396);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x397 = -1;
	uint16_t x398 = 139U;
	static int32_t x399 = INT32_MAX;
	int16_t x400 = -2640;
	volatile int32_t t92 = -3478;

    t92 = (((x397-x398)<=x399)*x400);

    if (t92 != -2640) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x401 = INT16_MIN;
	uint16_t x402 = 253U;
	uint64_t x403 = 25208LLU;
	volatile int32_t t93 = 9;

    t93 = (((x401-x402)<=x403)*x404);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x405 = INT16_MIN;
	uint32_t x406 = 9630348U;
	static uint32_t x408 = UINT32_MAX;

    t94 = (((x405-x406)<=x407)*x408);

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x409 = -1LL;
	int64_t x412 = INT64_MIN;
	volatile int64_t t95 = -196447LL;

    t95 = (((x409-x410)<=x411)*x412);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x414 = 63057150LL;
	static int64_t x415 = -2030356224453LL;
	int64_t x416 = 390869481021495LL;
	int64_t t96 = 16463LL;

    t96 = (((x413-x414)<=x415)*x416);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x422 = -54;
	uint32_t x423 = 91904877U;

    t97 = (((x421-x422)<=x423)*x424);

    if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x425 = 2U;
	volatile int16_t x426 = INT16_MIN;
	int16_t x427 = INT16_MIN;
	static int8_t x428 = -1;
	int32_t t98 = -6304250;

    t98 = (((x425-x426)<=x427)*x428);

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x430 = 30;
	int32_t t99 = 3;

    t99 = (((x429-x430)<=x431)*x432);

    if (t99 != -10) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x434 = -2;
	int64_t x435 = INT64_MAX;
	int32_t x436 = INT32_MIN;
	int32_t t100 = INT32_MIN;

    t100 = (((x433-x434)<=x435)*x436);

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x437 = -1;
	static int8_t x440 = INT8_MIN;
	volatile int32_t t101 = -37929;

    t101 = (((x437-x438)<=x439)*x440);

    if (t101 != -128) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x443 = INT16_MIN;
	static int64_t x444 = INT64_MAX;

    t102 = (((x441-x442)<=x443)*x444);

    if (t102 != INT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x446 = -1;
	int8_t x447 = 0;
	static int16_t x448 = INT16_MIN;
	volatile int32_t t103 = 641185842;

    t103 = (((x445-x446)<=x447)*x448);

    if (t103 != -32768) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x450 = 17;
	int16_t x451 = INT16_MIN;
	int64_t x452 = -1866617610448761708LL;
	static int64_t t104 = 1801LL;

    t104 = (((x449-x450)<=x451)*x452);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x453 = -1;
	volatile int16_t x455 = -12547;
	static uint16_t x456 = UINT16_MAX;
	volatile int32_t t105 = 14546;

    t105 = (((x453-x454)<=x455)*x456);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x457 = UINT64_MAX;
	int16_t x458 = -1;
	volatile int32_t t106 = 2395;

    t106 = (((x457-x458)<=x459)*x460);

    if (t106 != 255) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x461 = 1;
	uint32_t x462 = 178008160U;
	int16_t x464 = -26;
	int32_t t107 = 127480;

    t107 = (((x461-x462)<=x463)*x464);

    if (t107 != -26) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x465 = INT32_MIN;
	int16_t x466 = -27;
	volatile int32_t x467 = INT32_MIN;
	int8_t x468 = -1;
	int32_t t108 = 0;

    t108 = (((x465-x466)<=x467)*x468);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x470 = INT32_MIN;
	int64_t x471 = -748159620333LL;
	uint16_t x472 = 3U;

    t109 = (((x469-x470)<=x471)*x472);

    if (t109 != 3) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x473 = -6011958LL;
	volatile int16_t x474 = 122;
	static int16_t x475 = INT16_MAX;
	int8_t x476 = INT8_MIN;
	int32_t t110 = -13736833;

    t110 = (((x473-x474)<=x475)*x476);

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x477 = INT16_MIN;
	uint8_t x478 = 1U;
	volatile int64_t x479 = INT64_MIN;
	int16_t x480 = -1;
	int32_t t111 = 47;

    t111 = (((x477-x478)<=x479)*x480);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x481 = -1;
	static int64_t x482 = -3130904LL;
	static uint32_t x484 = 143724U;
	static volatile uint32_t t112 = 208U;

    t112 = (((x481-x482)<=x483)*x484);

    if (t112 != 143724U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x486 = -3147;
	int64_t x487 = -1LL;
	uint16_t x488 = 2U;
	static int32_t t113 = 223284942;

    t113 = (((x485-x486)<=x487)*x488);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x489 = -8132LL;
	static int64_t x490 = -1LL;
	int8_t x491 = INT8_MIN;
	volatile int32_t t114 = -1146714;

    t114 = (((x489-x490)<=x491)*x492);

    if (t114 != 127) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x494 = INT64_MAX;
	uint32_t x496 = UINT32_MAX;
	uint32_t t115 = 20U;

    t115 = (((x493-x494)<=x495)*x496);

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x497 = INT32_MIN;
	int8_t x498 = INT8_MIN;
	volatile uint64_t x499 = 119486585876400LLU;
	volatile uint32_t t116 = 839U;

    t116 = (((x497-x498)<=x499)*x500);

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x501 = -7;
	int16_t x503 = INT16_MIN;
	volatile int8_t x504 = INT8_MIN;
	volatile int32_t t117 = -217078709;

    t117 = (((x501-x502)<=x503)*x504);

    if (t117 != -128) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x505 = 28726711U;
	uint32_t x506 = 85046619U;
	int64_t x507 = INT64_MIN;
	uint64_t x508 = 6746699606LLU;

    t118 = (((x505-x506)<=x507)*x508);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x509 = INT32_MIN;
	int8_t x510 = -62;
	volatile int8_t x511 = INT8_MIN;
	int64_t x512 = -1LL;
	static volatile int64_t t119 = -36645175173174545LL;

    t119 = (((x509-x510)<=x511)*x512);

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint32_t x513 = 3U;
	uint16_t x515 = UINT16_MAX;
	volatile uint16_t x516 = 8148U;
	volatile int32_t t120 = -30103786;

    t120 = (((x513-x514)<=x515)*x516);

    if (t120 != 8148) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x521 = INT64_MIN;
	int8_t x522 = -1;
	volatile uint16_t x523 = UINT16_MAX;
	volatile int16_t x524 = INT16_MIN;

    t121 = (((x521-x522)<=x523)*x524);

    if (t121 != -32768) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x525 = 4U;
	static int8_t x526 = 9;
	uint32_t x527 = 86322U;
	int32_t x528 = INT32_MIN;

    t122 = (((x525-x526)<=x527)*x528);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x529 = 8U;
	uint64_t x530 = 20036517LLU;
	volatile uint64_t x531 = 109720123618519LLU;
	int8_t x532 = INT8_MIN;
	int32_t t123 = 124;

    t123 = (((x529-x530)<=x531)*x532);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x535 = INT32_MAX;
	static int32_t t124 = -34021738;

    t124 = (((x533-x534)<=x535)*x536);

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x537 = -1;
	uint16_t x538 = 19469U;
	volatile int8_t x539 = -1;
	uint32_t x540 = 12U;
	uint32_t t125 = 80U;

    t125 = (((x537-x538)<=x539)*x540);

    if (t125 != 12U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x541 = UINT8_MAX;
	int16_t x542 = INT16_MIN;
	static int8_t x543 = 1;
	static uint64_t x544 = UINT64_MAX;
	uint64_t t126 = 15779243694LLU;

    t126 = (((x541-x542)<=x543)*x544);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x545 = 6U;
	uint32_t x546 = 15U;
	int32_t x548 = INT32_MIN;
	volatile int32_t t127 = INT32_MIN;

    t127 = (((x545-x546)<=x547)*x548);

    if (t127 != INT32_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x550 = -10;
	uint32_t x551 = 15098U;
	static volatile int32_t t128 = INT32_MIN;

    t128 = (((x549-x550)<=x551)*x552);

    if (t128 != INT32_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x553 = INT16_MIN;
	uint16_t x554 = UINT16_MAX;
	static int16_t x555 = INT16_MIN;
	int8_t x556 = INT8_MAX;

    t129 = (((x553-x554)<=x555)*x556);

    if (t129 != 127) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x557 = 0;
	int16_t x558 = INT16_MIN;
	int64_t x560 = -92960044794LL;
	int64_t t130 = 2LL;

    t130 = (((x557-x558)<=x559)*x560);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x565 = 0;
	static int32_t x566 = -13820070;
	int8_t x568 = INT8_MIN;

    t131 = (((x565-x566)<=x567)*x568);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x573 = INT8_MAX;
	int64_t x574 = 194221814782066876LL;
	int8_t x575 = INT8_MIN;
	int16_t x576 = 0;
	int32_t t132 = -85589;

    t132 = (((x573-x574)<=x575)*x576);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x577 = 14LLU;
	int8_t x578 = INT8_MAX;
	uint8_t x579 = UINT8_MAX;
	uint16_t x580 = 3235U;
	volatile int32_t t133 = -33754;

    t133 = (((x577-x578)<=x579)*x580);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x581 = INT64_MIN;
	static int16_t x582 = INT16_MIN;
	static int64_t x583 = -1LL;
	static volatile int32_t t134 = 980;

    t134 = (((x581-x582)<=x583)*x584);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int64_t x585 = 750243173490740529LL;
	int32_t x586 = INT32_MIN;
	static int32_t x587 = 465169116;
	uint16_t x588 = 7U;
	volatile int32_t t135 = 13;

    t135 = (((x585-x586)<=x587)*x588);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x589 = 42721U;
	int8_t x590 = INT8_MIN;
	int64_t x591 = -1552125LL;
	int64_t x592 = -1LL;
	volatile int64_t t136 = -14LL;

    t136 = (((x589-x590)<=x591)*x592);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x593 = -1;
	volatile int64_t x594 = INT64_MAX;
	int16_t x595 = INT16_MIN;
	int16_t x596 = -1;
	int32_t t137 = 248755124;

    t137 = (((x593-x594)<=x595)*x596);

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x598 = INT32_MIN;
	uint64_t x599 = UINT64_MAX;
	int8_t x600 = 0;
	int32_t t138 = -318171;

    t138 = (((x597-x598)<=x599)*x600);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x601 = INT32_MIN;
	uint64_t x602 = 3846527506036LLU;
	volatile int32_t x603 = -1;
	int8_t x604 = -1;
	int32_t t139 = 4922;

    t139 = (((x601-x602)<=x603)*x604);

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x605 = 569;
	int32_t x607 = INT32_MIN;
	int64_t x608 = INT64_MAX;
	volatile int64_t t140 = 3836147221LL;

    t140 = (((x605-x606)<=x607)*x608);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int16_t x617 = -1;
	int8_t x618 = INT8_MIN;
	volatile int8_t x620 = -3;
	volatile int32_t t141 = -28643376;

    t141 = (((x617-x618)<=x619)*x620);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x621 = 16207U;
	volatile int8_t x622 = -44;
	int32_t x623 = 19;
	int16_t x624 = INT16_MAX;
	int32_t t142 = -1;

    t142 = (((x621-x622)<=x623)*x624);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x625 = 1LLU;
	int8_t x626 = INT8_MIN;
	int32_t x627 = INT32_MIN;
	int8_t x628 = INT8_MAX;

    t143 = (((x625-x626)<=x627)*x628);

    if (t143 != 127) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x629 = INT16_MIN;
	int16_t x630 = INT16_MIN;
	int32_t x632 = 1;
	int32_t t144 = -483;

    t144 = (((x629-x630)<=x631)*x632);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x633 = 1086100540103LL;
	uint64_t x634 = 3233812191102714LLU;
	static int32_t x635 = INT32_MIN;
	static uint64_t x636 = 928800LLU;
	uint64_t t145 = 129031610156LLU;

    t145 = (((x633-x634)<=x635)*x636);

    if (t145 != 928800LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x637 = 4U;
	static uint16_t x638 = 25U;
	uint64_t x639 = 458407LLU;
	static int64_t x640 = -37532423561428184LL;
	volatile int64_t t146 = -1170210LL;

    t146 = (((x637-x638)<=x639)*x640);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x641 = -1LL;
	int8_t x642 = INT8_MIN;
	static volatile int16_t x643 = INT16_MAX;
	int16_t x644 = INT16_MIN;
	int32_t t147 = 490838631;

    t147 = (((x641-x642)<=x643)*x644);

    if (t147 != -32768) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x646 = INT16_MIN;
	volatile int32_t x647 = 13447668;
	int64_t x648 = -1LL;
	volatile int64_t t148 = -46001004762684LL;

    t148 = (((x645-x646)<=x647)*x648);

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x649 = INT32_MIN;
	int32_t x650 = INT32_MIN;
	volatile uint8_t x651 = UINT8_MAX;
	volatile int64_t x652 = -1LL;
	int64_t t149 = -29LL;

    t149 = (((x649-x650)<=x651)*x652);

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x653 = INT8_MAX;
	int8_t x655 = 1;
	static int8_t x656 = INT8_MAX;
	int32_t t150 = 345975186;

    t150 = (((x653-x654)<=x655)*x656);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x657 = -1;
	uint16_t x658 = 691U;
	uint64_t x659 = 179898LLU;
	volatile int32_t t151 = -19657372;

    t151 = (((x657-x658)<=x659)*x660);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x662 = 2;
	uint64_t x663 = 1454519LLU;
	volatile int32_t x664 = -1;
	static int32_t t152 = 0;

    t152 = (((x661-x662)<=x663)*x664);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x665 = UINT64_MAX;
	int8_t x666 = INT8_MIN;
	volatile int8_t x667 = INT8_MIN;
	static uint32_t x668 = 33U;
	uint32_t t153 = 184164U;

    t153 = (((x665-x666)<=x667)*x668);

    if (t153 != 33U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x669 = INT32_MIN;
	static uint32_t x670 = 352052630U;
	int32_t x671 = INT32_MIN;
	static volatile uint16_t x672 = 713U;
	static volatile int32_t t154 = -350442;

    t154 = (((x669-x670)<=x671)*x672);

    if (t154 != 713) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x673 = UINT16_MAX;
	int64_t x674 = 7407244158329645LL;
	uint32_t x675 = 543218234U;

    t155 = (((x673-x674)<=x675)*x676);

    if (t155 != INT64_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x679 = -1;
	static volatile int16_t x680 = 0;
	volatile int32_t t156 = 751;

    t156 = (((x677-x678)<=x679)*x680);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x685 = UINT8_MAX;
	static int64_t x686 = -1LL;
	int8_t x687 = -1;
	int16_t x688 = INT16_MIN;
	int32_t t157 = -5;

    t157 = (((x685-x686)<=x687)*x688);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x689 = -205;
	int16_t x691 = INT16_MIN;
	int64_t x692 = INT64_MIN;
	volatile int64_t t158 = 3864344094283786LL;

    t158 = (((x689-x690)<=x691)*x692);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x694 = INT16_MIN;
	volatile int64_t x695 = -2621490LL;
	volatile int32_t x696 = 81;

    t159 = (((x693-x694)<=x695)*x696);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x701 = 23U;
	uint64_t x704 = UINT64_MAX;
	uint64_t t160 = UINT64_MAX;

    t160 = (((x701-x702)<=x703)*x704);

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x705 = -1;
	uint8_t x706 = 0U;
	uint64_t x708 = UINT64_MAX;
	static uint64_t t161 = UINT64_MAX;

    t161 = (((x705-x706)<=x707)*x708);

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x709 = INT8_MIN;
	int64_t x710 = -1LL;
	int64_t x711 = 2101877392LL;
	volatile uint64_t x712 = 6LLU;
	volatile uint64_t t162 = 3998812738638LLU;

    t162 = (((x709-x710)<=x711)*x712);

    if (t162 != 6LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x713 = -18;
	static int8_t x714 = INT8_MIN;
	static int16_t x715 = INT16_MAX;
	int32_t t163 = -6573;

    t163 = (((x713-x714)<=x715)*x716);

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x721 = -14;
	uint16_t x722 = 5U;
	int64_t x723 = -1LL;
	int64_t x724 = INT64_MIN;
	int64_t t164 = INT64_MIN;

    t164 = (((x721-x722)<=x723)*x724);

    if (t164 != INT64_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x726 = 27520509LL;
	static int8_t x727 = INT8_MIN;
	int64_t x728 = INT64_MIN;
	volatile int64_t t165 = INT64_MIN;

    t165 = (((x725-x726)<=x727)*x728);

    if (t165 != INT64_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x729 = INT32_MIN;
	int64_t x730 = -37521718LL;
	uint32_t x731 = 170396677U;
	int64_t x732 = INT64_MAX;
	static volatile int64_t t166 = INT64_MAX;

    t166 = (((x729-x730)<=x731)*x732);

    if (t166 != INT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x733 = -5;
	static int32_t x734 = -1;
	int8_t x736 = INT8_MIN;
	static volatile int32_t t167 = 3453;

    t167 = (((x733-x734)<=x735)*x736);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x737 = INT16_MAX;
	int32_t x738 = -141;
	volatile int64_t x739 = INT64_MIN;
	int64_t x740 = -26506511LL;
	int64_t t168 = 88LL;

    t168 = (((x737-x738)<=x739)*x740);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x742 = INT8_MIN;
	int32_t x743 = 0;
	volatile int32_t x744 = 1679;
	static volatile int32_t t169 = -274970143;

    t169 = (((x741-x742)<=x743)*x744);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x745 = INT32_MIN;
	int64_t x746 = INT64_MIN;
	volatile int8_t x747 = 0;

    t170 = (((x745-x746)<=x747)*x748);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x749 = 61U;
	uint32_t x750 = UINT32_MAX;
	uint32_t x751 = 54891478U;
	uint8_t x752 = UINT8_MAX;
	int32_t t171 = -13991013;

    t171 = (((x749-x750)<=x751)*x752);

    if (t171 != 255) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x753 = UINT16_MAX;
	static volatile uint16_t x755 = UINT16_MAX;
	volatile int64_t x756 = INT64_MIN;
	volatile int64_t t172 = 4302228LL;

    t172 = (((x753-x754)<=x755)*x756);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x757 = INT16_MIN;
	int16_t x758 = INT16_MIN;
	int64_t x759 = 7399805571848996LL;
	static uint32_t x760 = 584290U;

    t173 = (((x757-x758)<=x759)*x760);

    if (t173 != 584290U) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x765 = INT32_MAX;
	uint8_t x766 = 58U;
	volatile uint8_t x767 = 3U;
	int32_t x768 = INT32_MIN;

    t174 = (((x765-x766)<=x767)*x768);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x769 = 7004652653LLU;
	static int8_t x770 = -2;
	volatile int32_t x771 = INT32_MIN;
	uint32_t x772 = 2029996190U;
	uint32_t t175 = 11744U;

    t175 = (((x769-x770)<=x771)*x772);

    if (t175 != 2029996190U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x777 = 23U;
	static volatile int64_t x780 = -1LL;
	volatile int64_t t176 = 29215973470941100LL;

    t176 = (((x777-x778)<=x779)*x780);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x781 = 194625516LLU;
	int16_t x782 = INT16_MIN;
	static int32_t x783 = INT32_MAX;
	int16_t x784 = INT16_MIN;
	int32_t t177 = 29598256;

    t177 = (((x781-x782)<=x783)*x784);

    if (t177 != -32768) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x785 = INT64_MIN;
	volatile uint64_t x786 = 1512953LLU;
	uint64_t x787 = UINT64_MAX;
	uint8_t x788 = 3U;
	int32_t t178 = -1342993;

    t178 = (((x785-x786)<=x787)*x788);

    if (t178 != 3) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x789 = INT16_MIN;
	static int64_t x790 = INT64_MIN;
	uint64_t x791 = UINT64_MAX;
	int32_t x792 = INT32_MIN;
	static int32_t t179 = INT32_MIN;

    t179 = (((x789-x790)<=x791)*x792);

    if (t179 != INT32_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x793 = INT32_MIN;
	int16_t x794 = -1;
	volatile uint32_t x795 = UINT32_MAX;

    t180 = (((x793-x794)<=x795)*x796);

    if (t180 != 3382) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x797 = 1710U;
	int32_t x799 = -1;
	volatile int64_t x800 = 0LL;

    t181 = (((x797-x798)<=x799)*x800);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x801 = 236LLU;
	static int32_t x802 = -1;
	int16_t x803 = -1;
	int16_t x804 = 42;

    t182 = (((x801-x802)<=x803)*x804);

    if (t182 != 42) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x806 = UINT16_MAX;
	int8_t x807 = -1;
	volatile uint16_t x808 = UINT16_MAX;

    t183 = (((x805-x806)<=x807)*x808);

    if (t183 != 65535) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x809 = -723732;
	uint64_t x810 = UINT64_MAX;
	static int32_t x811 = 124275;
	static uint32_t x812 = UINT32_MAX;

    t184 = (((x809-x810)<=x811)*x812);

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x821 = -615931460;
	int16_t x823 = -7780;

    t185 = (((x821-x822)<=x823)*x824);

    if (t185 != 3) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x825 = -1;
	int32_t x826 = INT32_MIN;
	int8_t x827 = 1;
	int16_t x828 = INT16_MIN;
	static volatile int32_t t186 = 223;

    t186 = (((x825-x826)<=x827)*x828);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x833 = -1;
	int16_t x834 = INT16_MIN;

    t187 = (((x833-x834)<=x835)*x836);

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x837 = 1;
	int16_t x838 = 601;
	int32_t x839 = 317;
	static int32_t t188 = 1038;

    t188 = (((x837-x838)<=x839)*x840);

    if (t188 != 65535) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x841 = INT8_MAX;
	uint32_t x842 = 67633U;
	int16_t x843 = -1;
	static uint32_t x844 = 0U;
	volatile uint32_t t189 = 5U;

    t189 = (((x841-x842)<=x843)*x844);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint8_t x845 = 41U;
	uint64_t x846 = 9LLU;
	int8_t x847 = -1;
	uint32_t x848 = 2817035U;
	uint32_t t190 = 4U;

    t190 = (((x845-x846)<=x847)*x848);

    if (t190 != 2817035U) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x849 = 3641LLU;
	int8_t x850 = -1;
	int8_t x851 = 16;
	static int8_t x852 = INT8_MAX;
	int32_t t191 = 378313325;

    t191 = (((x849-x850)<=x851)*x852);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x857 = -1;
	int32_t x858 = INT32_MAX;
	static uint32_t x859 = 535470671U;
	static int64_t x860 = 8379LL;
	volatile int64_t t192 = 1055318LL;

    t192 = (((x857-x858)<=x859)*x860);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x861 = -1;
	static int8_t x862 = -1;
	int32_t x863 = -27;
	uint8_t x864 = UINT8_MAX;
	volatile int32_t t193 = 0;

    t193 = (((x861-x862)<=x863)*x864);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x865 = 46U;
	uint16_t x866 = 0U;
	int16_t x867 = -555;
	int8_t x868 = 18;
	static volatile int32_t t194 = 6297;

    t194 = (((x865-x866)<=x867)*x868);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x869 = INT16_MIN;
	uint16_t x870 = 28819U;
	uint16_t x871 = 381U;
	volatile int8_t x872 = INT8_MIN;
	volatile int32_t t195 = -8137;

    t195 = (((x869-x870)<=x871)*x872);

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x873 = -403;
	uint32_t x874 = UINT32_MAX;
	uint32_t x876 = 136U;
	static uint32_t t196 = 119U;

    t196 = (((x873-x874)<=x875)*x876);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x877 = 1;
	static int8_t x878 = 59;
	volatile int64_t x879 = -1LL;
	static uint16_t x880 = 0U;
	static int32_t t197 = -124373307;

    t197 = (((x877-x878)<=x879)*x880);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x881 = -10;
	int32_t x882 = INT32_MIN;
	volatile int8_t x884 = INT8_MIN;
	int32_t t198 = -50273;

    t198 = (((x881-x882)<=x883)*x884);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x885 = INT16_MAX;
	int64_t x887 = INT64_MAX;
	int8_t x888 = INT8_MAX;
	int32_t t199 = -3482876;

    t199 = (((x885-x886)<=x887)*x888);

    if (t199 != 127) { NG(); } else { ; }
	
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

