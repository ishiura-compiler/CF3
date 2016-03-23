
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

int32_t x1 = INT32_MAX;
volatile int32_t t0 = INT32_MAX;
static volatile uint8_t x6 = 1U;
int16_t x8 = INT16_MIN;
volatile int32_t t1 = -26107;
int8_t x11 = INT8_MIN;
uint8_t x19 = 15U;
uint64_t x27 = 177727LLU;
uint8_t x28 = 40U;
static int8_t x32 = INT8_MAX;
volatile int32_t t7 = -27;
int16_t x33 = 3740;
int16_t x34 = 133;
uint32_t x36 = UINT32_MAX;
static volatile int32_t t8 = -219;
int64_t x37 = -28LL;
int16_t x39 = INT16_MIN;
volatile int64_t t9 = -21LL;
int16_t x41 = INT16_MAX;
int64_t x45 = 0LL;
volatile uint8_t x47 = 5U;
static int8_t x49 = INT8_MIN;
int32_t x54 = -14404922;
int8_t x55 = -2;
int8_t x56 = INT8_MIN;
volatile int8_t x58 = INT8_MAX;
volatile int8_t x64 = -10;
static int64_t x68 = -1LL;
uint32_t x70 = UINT32_MAX;
volatile uint32_t t18 = 181U;
volatile int8_t x77 = INT8_MIN;
volatile int8_t x84 = INT8_MIN;
int32_t x88 = -1;
static uint16_t x93 = 1809U;
int8_t x95 = INT8_MIN;
volatile int64_t x98 = INT64_MIN;
int32_t x102 = -195076;
static int32_t x110 = -1;
static int8_t x114 = -1;
uint32_t x117 = UINT32_MAX;
volatile uint8_t x119 = UINT8_MAX;
int32_t x123 = -1;
volatile int32_t t30 = INT32_MIN;
int16_t x127 = INT16_MIN;
static uint32_t x131 = UINT32_MAX;
int16_t x134 = -207;
volatile int32_t x138 = INT32_MAX;
volatile int64_t t36 = 4726446703LL;
static int16_t x156 = -13;
uint64_t x157 = UINT64_MAX;
uint32_t x158 = 82131657U;
volatile uint64_t t39 = UINT64_MAX;
int8_t x161 = INT8_MAX;
volatile int32_t x162 = -1;
volatile int32_t t40 = 1090751;
static int64_t x165 = -1667897170LL;
volatile int8_t x166 = 1;
int32_t x167 = INT32_MIN;
int32_t x172 = -1;
volatile int8_t x174 = 3;
uint64_t x176 = 111650525091LLU;
static int32_t x178 = INT32_MIN;
uint64_t t44 = UINT64_MAX;
uint64_t x181 = 1313128398985852504LLU;
volatile int16_t x187 = 0;
int16_t x192 = INT16_MIN;
int64_t x195 = -1LL;
static uint16_t x196 = 4625U;
volatile int32_t x201 = INT32_MIN;
int32_t x203 = INT32_MIN;
int64_t x216 = 85697770668LL;
static volatile uint32_t x219 = 102989U;
static uint64_t x223 = UINT64_MAX;
int64_t x240 = INT64_MAX;
int8_t x245 = INT8_MAX;
int64_t x246 = INT64_MIN;
volatile int16_t x247 = INT16_MAX;
uint32_t x252 = UINT32_MAX;
int8_t x255 = INT8_MIN;
int8_t x258 = INT8_MIN;
static volatile uint64_t x260 = 32124413823981LLU;
static int32_t x261 = INT32_MIN;
uint16_t x266 = 266U;
uint8_t x267 = 1U;
static volatile int32_t t65 = -4074164;
int32_t x276 = INT32_MIN;
uint16_t x282 = UINT16_MAX;
static int64_t x302 = INT64_MIN;
static int8_t x304 = INT8_MIN;
int16_t x305 = -1;
int8_t x308 = INT8_MIN;
int64_t x314 = INT64_MAX;
volatile int32_t t75 = -147530536;
static uint16_t x321 = 20663U;
int64_t x322 = INT64_MAX;
int32_t x324 = 1084812;
int64_t x328 = -1926450151961363LL;
volatile int32_t t77 = 3;
volatile int16_t x338 = 3;
volatile int8_t x340 = -1;
uint64_t x343 = 234104816710722LLU;
volatile int32_t t81 = 6;
int64_t x353 = 10LL;
int16_t x354 = 13198;
int16_t x357 = -722;
volatile uint32_t x358 = 105U;
static uint64_t x365 = 1413LLU;
static uint16_t x373 = UINT16_MAX;
volatile int32_t t88 = 128517;
volatile uint32_t x380 = UINT32_MAX;
volatile int64_t t89 = 1570533LL;
uint32_t x399 = 29747394U;
int16_t x406 = INT16_MIN;
static uint16_t x410 = 207U;
int32_t t99 = 355521;
int32_t x425 = INT32_MIN;
static int64_t x428 = 48939LL;
volatile int16_t x444 = -3425;
uint64_t t102 = 64715463764859326LLU;
static int8_t x448 = INT8_MIN;
static int64_t x452 = -104888LL;
int8_t x454 = -29;
int8_t x456 = -1;
int8_t x473 = 11;
volatile uint32_t x476 = 49450199U;
uint64_t x479 = 31154580LLU;
int32_t t114 = 0;
int32_t x502 = INT32_MAX;
static int8_t x503 = INT8_MIN;
int8_t x504 = INT8_MIN;
int16_t x509 = -1;
uint32_t x511 = UINT32_MAX;
int16_t x512 = INT16_MIN;
volatile uint16_t x522 = 5U;
static int8_t x526 = INT8_MAX;
int16_t x528 = -105;
volatile int32_t x531 = 340944;
uint32_t x535 = 75869U;
int32_t x545 = INT32_MIN;
int32_t x549 = -1;
static uint32_t x552 = UINT32_MAX;
static int8_t x555 = INT8_MAX;
int64_t x559 = -1LL;
int16_t x565 = INT16_MAX;
static int16_t x571 = 0;
uint64_t t131 = UINT64_MAX;
static volatile int32_t t133 = -20539717;
int32_t x584 = INT32_MIN;
volatile uint8_t x587 = 55U;
uint64_t x590 = 15LLU;
int32_t x592 = INT32_MIN;
int8_t x596 = 1;
volatile int32_t t137 = 30;
volatile int32_t x598 = INT32_MIN;
volatile uint32_t t138 = 158584391U;
int8_t x602 = INT8_MIN;
int16_t x604 = INT16_MIN;
int64_t x605 = -1LL;
int64_t x615 = 387083634LL;
volatile int32_t t142 = 11753474;
uint32_t x620 = 82167U;
int32_t t143 = -23;
static int8_t x630 = -1;
static volatile int8_t x631 = INT8_MIN;
static volatile int32_t t146 = 38100298;
int64_t x634 = -1LL;
int32_t t147 = -4028;
int32_t t148 = -1846;
int8_t x642 = INT8_MAX;
volatile int64_t x654 = INT64_MIN;
int32_t x669 = INT32_MAX;
volatile int8_t x675 = 0;
uint64_t x678 = 46151338LLU;
static volatile int8_t x683 = INT8_MAX;
static int64_t x684 = -1LL;
int8_t x694 = INT8_MIN;
uint8_t x696 = 0U;
static int32_t t159 = 76903258;
uint8_t x698 = UINT8_MAX;
int16_t x706 = INT16_MIN;
volatile int32_t t162 = -4853;
volatile int64_t x709 = INT64_MIN;
uint64_t x718 = 59LLU;
int32_t x720 = INT32_MIN;
volatile int32_t t166 = -161779;
int8_t x728 = INT8_MAX;
int8_t x731 = INT8_MAX;
volatile uint32_t x740 = 95637U;
volatile int32_t t170 = 52755;
volatile int32_t x744 = INT32_MIN;
int8_t x745 = -3;
int64_t x746 = -3842698758LL;
int32_t t173 = -111;
static uint16_t x754 = UINT16_MAX;
uint16_t x756 = 8139U;
uint8_t x760 = UINT8_MAX;
static int16_t x761 = INT16_MIN;
int8_t x767 = INT8_MIN;
uint32_t x770 = UINT32_MAX;
int8_t x773 = INT8_MIN;
volatile int8_t x788 = INT8_MIN;
int32_t x789 = -102365;
int32_t t182 = -11982780;
int16_t x804 = INT16_MIN;
uint32_t x822 = 265464946U;
uint32_t x823 = UINT32_MAX;
int8_t x825 = INT8_MAX;
static int16_t x840 = INT16_MIN;
volatile int64_t x848 = -252363093309LL;
volatile uint64_t t194 = UINT64_MAX;
int64_t x850 = INT64_MIN;
volatile uint32_t x854 = UINT32_MAX;


void f0(void) {
    	int64_t x2 = INT64_MAX;
	uint16_t x3 = 3U;
	static int16_t x4 = INT16_MIN;

    t0 = (x1|(x2<=(x3-x4)));

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 256U;
	uint32_t x7 = UINT32_MAX;

    t1 = (x5|(x6<=(x7-x8)));

    if (t1 != 257) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -35;
	int32_t x10 = -53187;
	uint64_t x12 = 6209LLU;
	volatile int32_t t2 = 12;

    t2 = (x9|(x10<=(x11-x12)));

    if (t2 != -35) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MIN;
	static int8_t x14 = INT8_MIN;
	volatile int16_t x15 = INT16_MIN;
	static int8_t x16 = 3;
	int32_t t3 = -1127;

    t3 = (x13|(x14<=(x15-x16)));

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	static uint64_t x18 = UINT64_MAX;
	static int16_t x20 = INT16_MIN;
	int32_t t4 = INT32_MIN;

    t4 = (x17|(x18<=(x19-x20)));

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MAX;
	int64_t x22 = INT64_MAX;
	static int16_t x23 = -5914;
	static uint64_t x24 = 6LLU;
	int64_t t5 = INT64_MAX;

    t5 = (x21|(x22<=(x23-x24)));

    if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	int8_t x26 = -1;
	int32_t t6 = -736;

    t6 = (x25|(x26<=(x27-x28)));

    if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	static uint16_t x30 = 3361U;
	uint16_t x31 = 8U;

    t7 = (x29|(x30<=(x31-x32)));

    if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x35 = 352LL;

    t8 = (x33|(x34<=(x35-x36)));

    if (t8 != 3740) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = 0;
	static volatile uint64_t x40 = UINT64_MAX;

    t9 = (x37|(x38<=(x39-x40)));

    if (t9 != -27LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x42 = 273667476107LLU;
	int16_t x43 = INT16_MIN;
	static int16_t x44 = -1;
	static int32_t t10 = 1912;

    t10 = (x41|(x42<=(x43-x44)));

    if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x46 = 29;
	int8_t x48 = -1;
	volatile int64_t t11 = -95052065779041LL;

    t11 = (x45|(x46<=(x47-x48)));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x50 = 104;
	int32_t x51 = -148263;
	uint16_t x52 = 2U;
	int32_t t12 = -6518791;

    t12 = (x49|(x50<=(x51-x52)));

    if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	volatile int64_t t13 = -9483127106LL;

    t13 = (x53|(x54<=(x55-x56)));

    if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = INT64_MIN;
	int8_t x59 = INT8_MIN;
	volatile uint32_t x60 = 199195561U;
	volatile int64_t t14 = -192816812491098LL;

    t14 = (x57|(x58<=(x59-x60)));

    if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x61 = UINT64_MAX;
	static int32_t x62 = INT32_MIN;
	static int16_t x63 = INT16_MAX;
	uint64_t t15 = UINT64_MAX;

    t15 = (x61|(x62<=(x63-x64)));

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = 212;
	int16_t x66 = 3;
	int8_t x67 = INT8_MIN;
	volatile int32_t t16 = 2601326;

    t16 = (x65|(x66<=(x67-x68)));

    if (t16 != 212) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	int64_t x71 = -1LL;
	volatile int32_t x72 = INT32_MAX;
	int32_t t17 = -672357236;

    t17 = (x69|(x70<=(x71-x72)));

    if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 1388432330U;
	static int8_t x74 = INT8_MIN;
	int64_t x75 = -1LL;
	static int16_t x76 = INT16_MIN;

    t18 = (x73|(x74<=(x75-x76)));

    if (t18 != 1388432331U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x78 = INT8_MIN;
	uint32_t x79 = 5U;
	static int8_t x80 = INT8_MIN;
	int32_t t19 = 349032260;

    t19 = (x77|(x78<=(x79-x80)));

    if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	uint8_t x82 = UINT8_MAX;
	int64_t x83 = -1LL;
	volatile int32_t t20 = INT32_MIN;

    t20 = (x81|(x82<=(x83-x84)));

    if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 176LLU;
	uint32_t x86 = UINT32_MAX;
	int64_t x87 = 56358071490LL;
	static volatile uint64_t t21 = 5562063738LLU;

    t21 = (x85|(x86<=(x87-x88)));

    if (t21 != 177LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 12U;
	uint8_t x90 = UINT8_MAX;
	uint64_t x91 = 20LLU;
	int32_t x92 = 6296;
	volatile int32_t t22 = 2131473;

    t22 = (x89|(x90<=(x91-x92)));

    if (t22 != 13) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x94 = INT32_MAX;
	volatile uint64_t x96 = 2846108846748LLU;
	int32_t t23 = -2224644;

    t23 = (x93|(x94<=(x95-x96)));

    if (t23 != 1809) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = 6044LL;
	static int16_t x99 = INT16_MAX;
	volatile int16_t x100 = INT16_MAX;
	volatile int64_t t24 = 8025844134043LL;

    t24 = (x97|(x98<=(x99-x100)));

    if (t24 != 6045LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = INT16_MIN;
	volatile uint8_t x103 = 8U;
	volatile int8_t x104 = -9;
	int32_t t25 = -1;

    t25 = (x101|(x102<=(x103-x104)));

    if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x105 = INT32_MIN;
	static int8_t x106 = INT8_MIN;
	int16_t x107 = -1;
	int16_t x108 = -53;
	int32_t t26 = -2076102;

    t26 = (x105|(x106<=(x107-x108)));

    if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	int32_t x111 = -1;
	int16_t x112 = INT16_MAX;
	static int32_t t27 = 9955808;

    t27 = (x109|(x110<=(x111-x112)));

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = 4255195733676LL;
	volatile uint64_t x115 = UINT64_MAX;
	uint64_t x116 = 197076LLU;
	int64_t t28 = 238171773770061LL;

    t28 = (x113|(x114<=(x115-x116)));

    if (t28 != 4255195733676LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = INT64_MIN;
	int32_t x120 = 1514034;
	volatile uint32_t t29 = UINT32_MAX;

    t29 = (x117|(x118<=(x119-x120)));

    if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	int32_t x122 = INT32_MAX;
	static int16_t x124 = -7;

    t30 = (x121|(x122<=(x123-x124)));

    if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	static volatile uint16_t x126 = UINT16_MAX;
	int16_t x128 = 797;
	int32_t t31 = INT32_MIN;

    t31 = (x125|(x126<=(x127-x128)));

    if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = UINT32_MAX;
	volatile int16_t x130 = INT16_MIN;
	uint32_t x132 = 1466U;
	static volatile uint32_t t32 = UINT32_MAX;

    t32 = (x129|(x130<=(x131-x132)));

    if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 1U;
	int8_t x135 = INT8_MIN;
	volatile int64_t x136 = INT64_MIN;
	volatile uint32_t t33 = 204U;

    t33 = (x133|(x134<=(x135-x136)));

    if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 973298U;
	int16_t x139 = -1;
	volatile int64_t x140 = INT64_MIN;
	static uint32_t t34 = 134U;

    t34 = (x137|(x138<=(x139-x140)));

    if (t34 != 973299U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = 38U;
	uint32_t x142 = 2646668U;
	int64_t x143 = -1LL;
	int64_t x144 = INT64_MIN;
	volatile int32_t t35 = -116963;

    t35 = (x141|(x142<=(x143-x144)));

    if (t35 != 39) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x145 = 57846477LL;
	int8_t x146 = INT8_MAX;
	volatile uint64_t x147 = UINT64_MAX;
	int16_t x148 = 21;

    t36 = (x145|(x146<=(x147-x148)));

    if (t36 != 57846477LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x149 = -1;
	uint8_t x150 = UINT8_MAX;
	static int64_t x151 = 1LL;
	int8_t x152 = 24;
	int32_t t37 = 2318283;

    t37 = (x149|(x150<=(x151-x152)));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MAX;
	int16_t x154 = INT16_MAX;
	volatile uint16_t x155 = 18U;
	int32_t t38 = 62912391;

    t38 = (x153|(x154<=(x155-x156)));

    if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x159 = 7624LLU;
	volatile int32_t x160 = -75244;

    t39 = (x157|(x158<=(x159-x160)));

    if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x163 = UINT8_MAX;
	static int8_t x164 = INT8_MIN;

    t40 = (x161|(x162<=(x163-x164)));

    if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x168 = INT32_MIN;
	volatile int64_t t41 = 374017092633LL;

    t41 = (x165|(x166<=(x167-x168)));

    if (t41 != -1667897170LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x169 = -1;
	static int8_t x170 = INT8_MAX;
	int16_t x171 = 15;
	static int32_t t42 = -9;

    t42 = (x169|(x170<=(x171-x172)));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 20481421LLU;
	int64_t x175 = 9871LL;
	static uint64_t t43 = 1865056066995133589LLU;

    t43 = (x173|(x174<=(x175-x176)));

    if (t43 != 20481421LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = UINT64_MAX;
	int64_t x179 = -1257252518890903LL;
	int8_t x180 = INT8_MAX;

    t44 = (x177|(x178<=(x179-x180)));

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x182 = INT16_MIN;
	static int8_t x183 = -1;
	int8_t x184 = INT8_MIN;
	uint64_t t45 = 52266025LLU;

    t45 = (x181|(x182<=(x183-x184)));

    if (t45 != 1313128398985852505LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x185 = INT8_MIN;
	uint32_t x186 = UINT32_MAX;
	int64_t x188 = -460298699LL;
	volatile int32_t t46 = -4148267;

    t46 = (x185|(x186<=(x187-x188)));

    if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MAX;
	uint32_t x190 = UINT32_MAX;
	int16_t x191 = INT16_MAX;
	volatile int64_t t47 = INT64_MAX;

    t47 = (x189|(x190<=(x191-x192)));

    if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x193 = -1LL;
	int32_t x194 = -1;
	static volatile int64_t t48 = 9410LL;

    t48 = (x193|(x194<=(x195-x196)));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x197 = UINT64_MAX;
	int64_t x198 = -98784891LL;
	static volatile uint16_t x199 = 7U;
	int32_t x200 = -1;
	volatile uint64_t t49 = UINT64_MAX;

    t49 = (x197|(x198<=(x199-x200)));

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int64_t x202 = -404680926LL;
	uint32_t x204 = 488U;
	volatile int32_t t50 = -6;

    t50 = (x201|(x202<=(x203-x204)));

    if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x205 = INT64_MAX;
	volatile int16_t x206 = INT16_MIN;
	static int16_t x207 = 0;
	static int8_t x208 = INT8_MAX;
	int64_t t51 = INT64_MAX;

    t51 = (x205|(x206<=(x207-x208)));

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x209 = UINT32_MAX;
	volatile uint16_t x210 = 11U;
	int8_t x211 = INT8_MIN;
	int16_t x212 = INT16_MAX;
	static volatile uint32_t t52 = UINT32_MAX;

    t52 = (x209|(x210<=(x211-x212)));

    if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 23U;
	int8_t x214 = -7;
	int8_t x215 = INT8_MIN;
	static volatile int32_t t53 = -210471495;

    t53 = (x213|(x214<=(x215-x216)));

    if (t53 != 23) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = 256U;
	uint16_t x218 = 20U;
	volatile int8_t x220 = INT8_MIN;
	int32_t t54 = -123;

    t54 = (x217|(x218<=(x219-x220)));

    if (t54 != 257) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int16_t x221 = 7317;
	static volatile int32_t x222 = -3;
	int32_t x224 = 384;
	volatile int32_t t55 = -883152259;

    t55 = (x221|(x222<=(x223-x224)));

    if (t55 != 7317) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = -3;
	uint32_t x226 = UINT32_MAX;
	int64_t x227 = -759032478LL;
	static int32_t x228 = INT32_MIN;
	int32_t t56 = 1;

    t56 = (x225|(x226<=(x227-x228)));

    if (t56 != -3) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x233 = INT32_MIN;
	int16_t x234 = INT16_MIN;
	int64_t x235 = INT64_MIN;
	int32_t x236 = -1;
	volatile int32_t t57 = INT32_MIN;

    t57 = (x233|(x234<=(x235-x236)));

    if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x237 = 0U;
	volatile int64_t x238 = INT64_MIN;
	uint16_t x239 = 139U;
	int32_t t58 = 11;

    t58 = (x237|(x238<=(x239-x240)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x248 = UINT64_MAX;
	static int32_t t59 = 555592;

    t59 = (x245|(x246<=(x247-x248)));

    if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x249 = 0U;
	uint32_t x250 = 84392U;
	static volatile uint64_t x251 = UINT64_MAX;
	static volatile int32_t t60 = 233045;

    t60 = (x249|(x250<=(x251-x252)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x253 = INT64_MIN;
	volatile int16_t x254 = INT16_MAX;
	int8_t x256 = INT8_MIN;
	volatile int64_t t61 = INT64_MIN;

    t61 = (x253|(x254<=(x255-x256)));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x257 = INT64_MIN;
	int32_t x259 = -31721147;
	static volatile int64_t t62 = INT64_MIN;

    t62 = (x257|(x258<=(x259-x260)));

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x262 = INT64_MAX;
	static uint64_t x263 = UINT64_MAX;
	static int64_t x264 = INT64_MIN;
	static volatile int32_t t63 = 220230;

    t63 = (x261|(x262<=(x263-x264)));

    if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x265 = INT32_MIN;
	uint16_t x268 = 175U;
	static volatile int32_t t64 = INT32_MIN;

    t64 = (x265|(x266<=(x267-x268)));

    if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x269 = 1U;
	uint8_t x270 = UINT8_MAX;
	static int16_t x271 = INT16_MIN;
	int64_t x272 = INT64_MIN;

    t65 = (x269|(x270<=(x271-x272)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x273 = 1U;
	int16_t x274 = INT16_MIN;
	int8_t x275 = -1;
	int32_t t66 = -101;

    t66 = (x273|(x274<=(x275-x276)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = INT8_MIN;
	uint32_t x278 = UINT32_MAX;
	int32_t x279 = INT32_MAX;
	int32_t x280 = 10880;
	volatile int32_t t67 = -1607;

    t67 = (x277|(x278<=(x279-x280)));

    if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x281 = -481481LL;
	static volatile uint8_t x283 = 0U;
	uint32_t x284 = 2U;
	int64_t t68 = -3343347LL;

    t68 = (x281|(x282<=(x283-x284)));

    if (t68 != -481481LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x293 = INT8_MAX;
	static int32_t x294 = INT32_MIN;
	static uint64_t x295 = UINT64_MAX;
	int32_t x296 = INT32_MAX;
	int32_t t69 = 484231241;

    t69 = (x293|(x294<=(x295-x296)));

    if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x297 = INT16_MIN;
	volatile uint8_t x298 = 0U;
	uint64_t x299 = UINT64_MAX;
	uint8_t x300 = 0U;
	volatile int32_t t70 = 151674;

    t70 = (x297|(x298<=(x299-x300)));

    if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x301 = INT64_MIN;
	static volatile int8_t x303 = 0;
	int64_t t71 = 3829478946327LL;

    t71 = (x301|(x302<=(x303-x304)));

    if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x306 = INT32_MAX;
	static int64_t x307 = -1LL;
	int32_t t72 = 5;

    t72 = (x305|(x306<=(x307-x308)));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x309 = 1U;
	int16_t x310 = INT16_MIN;
	volatile int16_t x311 = -1;
	static int8_t x312 = INT8_MIN;
	static volatile uint32_t t73 = 916U;

    t73 = (x309|(x310<=(x311-x312)));

    if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x313 = -1;
	int32_t x315 = -1;
	int16_t x316 = -1;
	int32_t t74 = 5670350;

    t74 = (x313|(x314<=(x315-x316)));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x317 = UINT8_MAX;
	volatile int64_t x318 = INT64_MAX;
	volatile int64_t x319 = -132402937399496268LL;
	int16_t x320 = INT16_MAX;

    t75 = (x317|(x318<=(x319-x320)));

    if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x323 = INT16_MIN;
	static int32_t t76 = -753826301;

    t76 = (x321|(x322<=(x323-x324)));

    if (t76 != 20663) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x325 = INT8_MIN;
	int16_t x326 = 0;
	uint64_t x327 = 129093349993171890LLU;

    t77 = (x325|(x326<=(x327-x328)));

    if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x333 = INT16_MIN;
	int16_t x334 = -5001;
	volatile int8_t x335 = 23;
	int64_t x336 = INT64_MAX;
	static volatile int32_t t78 = 162848037;

    t78 = (x333|(x334<=(x335-x336)));

    if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x337 = INT16_MAX;
	static int32_t x339 = INT32_MIN;
	volatile int32_t t79 = 50;

    t79 = (x337|(x338<=(x339-x340)));

    if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x341 = UINT8_MAX;
	int8_t x342 = -1;
	volatile uint8_t x344 = 47U;
	int32_t t80 = -37423;

    t80 = (x341|(x342<=(x343-x344)));

    if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x345 = INT16_MIN;
	volatile uint64_t x346 = UINT64_MAX;
	static volatile int8_t x347 = 53;
	static int8_t x348 = INT8_MAX;

    t81 = (x345|(x346<=(x347-x348)));

    if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x349 = INT16_MAX;
	int32_t x350 = -14;
	static volatile int16_t x351 = INT16_MIN;
	volatile uint8_t x352 = 54U;
	int32_t t82 = -5074;

    t82 = (x349|(x350<=(x351-x352)));

    if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x355 = -1;
	int64_t x356 = INT64_MIN;
	int64_t t83 = -175625838990LL;

    t83 = (x353|(x354<=(x355-x356)));

    if (t83 != 11LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x359 = UINT8_MAX;
	volatile uint64_t x360 = UINT64_MAX;
	volatile int32_t t84 = 1818;

    t84 = (x357|(x358<=(x359-x360)));

    if (t84 != -721) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x361 = 0;
	int64_t x362 = -1LL;
	int32_t x363 = 1959;
	volatile int32_t x364 = 329296;
	volatile int32_t t85 = -1;

    t85 = (x361|(x362<=(x363-x364)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x366 = UINT16_MAX;
	volatile int16_t x367 = -1;
	int8_t x368 = 14;
	uint64_t t86 = 4202433669LLU;

    t86 = (x365|(x366<=(x367-x368)));

    if (t86 != 1413LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x369 = UINT16_MAX;
	int16_t x370 = INT16_MAX;
	uint64_t x371 = UINT64_MAX;
	static int8_t x372 = INT8_MAX;
	int32_t t87 = 0;

    t87 = (x369|(x370<=(x371-x372)));

    if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x374 = 79418;
	int32_t x375 = INT32_MIN;
	int8_t x376 = INT8_MIN;

    t88 = (x373|(x374<=(x375-x376)));

    if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x377 = 7732954LL;
	volatile uint16_t x378 = UINT16_MAX;
	int8_t x379 = INT8_MIN;

    t89 = (x377|(x378<=(x379-x380)));

    if (t89 != 7732955LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x381 = INT32_MAX;
	volatile int32_t x382 = INT32_MAX;
	int32_t x383 = -1;
	volatile int16_t x384 = 1;
	volatile int32_t t90 = INT32_MAX;

    t90 = (x381|(x382<=(x383-x384)));

    if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x385 = INT32_MIN;
	static volatile int16_t x386 = -2;
	uint8_t x387 = UINT8_MAX;
	int16_t x388 = INT16_MIN;
	int32_t t91 = 1311;

    t91 = (x385|(x386<=(x387-x388)));

    if (t91 != -2147483647) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x389 = UINT32_MAX;
	int16_t x390 = INT16_MAX;
	int8_t x391 = 1;
	uint32_t x392 = 11675U;
	uint32_t t92 = UINT32_MAX;

    t92 = (x389|(x390<=(x391-x392)));

    if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x393 = UINT32_MAX;
	int16_t x394 = 9067;
	uint64_t x395 = 7529131752756LLU;
	int8_t x396 = INT8_MIN;
	volatile uint32_t t93 = UINT32_MAX;

    t93 = (x393|(x394<=(x395-x396)));

    if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x397 = 420;
	int32_t x398 = -1;
	uint32_t x400 = UINT32_MAX;
	static volatile int32_t t94 = 1;

    t94 = (x397|(x398<=(x399-x400)));

    if (t94 != 420) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x401 = -1;
	int64_t x402 = INT64_MIN;
	int8_t x403 = INT8_MIN;
	int64_t x404 = INT64_MIN;
	volatile int32_t t95 = 0;

    t95 = (x401|(x402<=(x403-x404)));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x405 = INT32_MAX;
	int64_t x407 = -1LL;
	int8_t x408 = INT8_MAX;
	static volatile int32_t t96 = INT32_MAX;

    t96 = (x405|(x406<=(x407-x408)));

    if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x409 = UINT16_MAX;
	int64_t x411 = INT64_MIN;
	int8_t x412 = INT8_MIN;
	volatile int32_t t97 = -235356149;

    t97 = (x409|(x410<=(x411-x412)));

    if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x413 = -174;
	volatile int8_t x414 = INT8_MIN;
	int64_t x415 = -1550407LL;
	int16_t x416 = -1;
	volatile int32_t t98 = 14555262;

    t98 = (x413|(x414<=(x415-x416)));

    if (t98 != -174) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x421 = INT16_MIN;
	int32_t x422 = -27;
	static int8_t x423 = -24;
	int32_t x424 = -1;

    t99 = (x421|(x422<=(x423-x424)));

    if (t99 != -32767) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x426 = 422U;
	static uint64_t x427 = 2055934912140457479LLU;
	static volatile int32_t t100 = 0;

    t100 = (x425|(x426<=(x427-x428)));

    if (t100 != -2147483647) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x437 = 0;
	volatile int64_t x438 = 18062024LL;
	int8_t x439 = INT8_MIN;
	volatile uint32_t x440 = 160326U;
	int32_t t101 = 263;

    t101 = (x437|(x438<=(x439-x440)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x441 = 311988287888281LLU;
	int64_t x442 = INT64_MIN;
	volatile int64_t x443 = 5LL;

    t102 = (x441|(x442<=(x443-x444)));

    if (t102 != 311988287888281LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x445 = 30222LLU;
	volatile int32_t x446 = INT32_MAX;
	int16_t x447 = 0;
	volatile uint64_t t103 = 125169077LLU;

    t103 = (x445|(x446<=(x447-x448)));

    if (t103 != 30222LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x449 = -401751893555LL;
	int32_t x450 = INT32_MIN;
	uint16_t x451 = 4393U;
	volatile int64_t t104 = -1LL;

    t104 = (x449|(x450<=(x451-x452)));

    if (t104 != -401751893555LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x453 = 2245645833082LLU;
	volatile int16_t x455 = -2107;
	volatile uint64_t t105 = 81LLU;

    t105 = (x453|(x454<=(x455-x456)));

    if (t105 != 2245645833082LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x457 = 115830604U;
	int64_t x458 = INT64_MIN;
	volatile int32_t x459 = INT32_MIN;
	static uint32_t x460 = 130563042U;
	volatile uint32_t t106 = 4U;

    t106 = (x457|(x458<=(x459-x460)));

    if (t106 != 115830605U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x461 = 256807844;
	uint8_t x462 = UINT8_MAX;
	int32_t x463 = 1;
	uint8_t x464 = 20U;
	int32_t t107 = 244996255;

    t107 = (x461|(x462<=(x463-x464)));

    if (t107 != 256807844) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x469 = 1U;
	int64_t x470 = -195LL;
	int8_t x471 = 1;
	static uint16_t x472 = 84U;
	volatile int32_t t108 = -704;

    t108 = (x469|(x470<=(x471-x472)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x474 = INT8_MIN;
	int16_t x475 = INT16_MIN;
	int32_t t109 = 119419;

    t109 = (x473|(x474<=(x475-x476)));

    if (t109 != 11) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x477 = 1768690751478609436LLU;
	volatile int32_t x478 = 1;
	uint16_t x480 = 60U;
	uint64_t t110 = 3LLU;

    t110 = (x477|(x478<=(x479-x480)));

    if (t110 != 1768690751478609437LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x481 = 0U;
	uint8_t x482 = UINT8_MAX;
	int16_t x483 = INT16_MAX;
	volatile int32_t x484 = 3625747;
	volatile int32_t t111 = 10848;

    t111 = (x481|(x482<=(x483-x484)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x485 = 14;
	volatile int64_t x486 = INT64_MAX;
	uint16_t x487 = 192U;
	volatile uint16_t x488 = 3U;
	volatile int32_t t112 = 1688945;

    t112 = (x485|(x486<=(x487-x488)));

    if (t112 != 14) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x493 = INT16_MIN;
	int64_t x494 = INT64_MIN;
	static int32_t x495 = INT32_MIN;
	volatile int64_t x496 = -4LL;
	volatile int32_t t113 = 26;

    t113 = (x493|(x494<=(x495-x496)));

    if (t113 != -32767) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x497 = -55;
	static int16_t x498 = INT16_MIN;
	volatile int16_t x499 = 713;
	static int8_t x500 = INT8_MIN;

    t114 = (x497|(x498<=(x499-x500)));

    if (t114 != -55) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x501 = UINT64_MAX;
	volatile uint64_t t115 = UINT64_MAX;

    t115 = (x501|(x502<=(x503-x504)));

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x505 = 3320U;
	uint32_t x506 = UINT32_MAX;
	uint32_t x507 = 1784U;
	static int8_t x508 = INT8_MAX;
	static volatile int32_t t116 = 224;

    t116 = (x505|(x506<=(x507-x508)));

    if (t116 != 3320) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x510 = 3216324LLU;
	int32_t t117 = 130574;

    t117 = (x509|(x510<=(x511-x512)));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x517 = UINT32_MAX;
	uint64_t x518 = UINT64_MAX;
	int64_t x519 = INT64_MAX;
	volatile uint32_t x520 = 80U;
	static uint32_t t118 = UINT32_MAX;

    t118 = (x517|(x518<=(x519-x520)));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x521 = 29260U;
	uint8_t x523 = 9U;
	int8_t x524 = INT8_MIN;
	int32_t t119 = -23;

    t119 = (x521|(x522<=(x523-x524)));

    if (t119 != 29261) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x525 = 1;
	volatile int32_t x527 = -1;
	volatile int32_t t120 = -95627437;

    t120 = (x525|(x526<=(x527-x528)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x529 = INT8_MIN;
	volatile int16_t x530 = INT16_MAX;
	uint32_t x532 = 40634U;
	int32_t t121 = 23;

    t121 = (x529|(x530<=(x531-x532)));

    if (t121 != -127) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x533 = 15U;
	static int32_t x534 = 54;
	static int16_t x536 = INT16_MAX;
	volatile int32_t t122 = 976;

    t122 = (x533|(x534<=(x535-x536)));

    if (t122 != 15) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x537 = UINT8_MAX;
	static uint8_t x538 = 121U;
	uint32_t x539 = 1301219592U;
	int32_t x540 = -1;
	static volatile int32_t t123 = 20430783;

    t123 = (x537|(x538<=(x539-x540)));

    if (t123 != 255) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x541 = INT16_MAX;
	uint16_t x542 = 5913U;
	volatile int64_t x543 = INT64_MIN;
	volatile int16_t x544 = -29;
	int32_t t124 = 669902114;

    t124 = (x541|(x542<=(x543-x544)));

    if (t124 != 32767) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x546 = 7U;
	int8_t x547 = INT8_MAX;
	uint8_t x548 = 8U;
	volatile int32_t t125 = -46;

    t125 = (x545|(x546<=(x547-x548)));

    if (t125 != -2147483647) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x550 = INT16_MIN;
	volatile uint32_t x551 = UINT32_MAX;
	int32_t t126 = -231881;

    t126 = (x549|(x550<=(x551-x552)));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x553 = UINT32_MAX;
	int64_t x554 = INT64_MIN;
	int8_t x556 = INT8_MIN;
	uint32_t t127 = UINT32_MAX;

    t127 = (x553|(x554<=(x555-x556)));

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x557 = -9;
	uint8_t x558 = 2U;
	int32_t x560 = INT32_MAX;
	int32_t t128 = 1774;

    t128 = (x557|(x558<=(x559-x560)));

    if (t128 != -9) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x561 = 1U;
	int64_t x562 = -1LL;
	int16_t x563 = INT16_MIN;
	uint32_t x564 = 1355457U;
	static int32_t t129 = -82;

    t129 = (x561|(x562<=(x563-x564)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x566 = 15;
	static int16_t x567 = INT16_MIN;
	static int16_t x568 = INT16_MIN;
	static volatile int32_t t130 = 177108166;

    t130 = (x565|(x566<=(x567-x568)));

    if (t130 != 32767) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x569 = UINT64_MAX;
	uint8_t x570 = 82U;
	uint64_t x572 = 26086260344907913LLU;

    t131 = (x569|(x570<=(x571-x572)));

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x573 = INT64_MIN;
	int32_t x574 = INT32_MIN;
	int32_t x575 = 116744;
	uint8_t x576 = 5U;
	static volatile int64_t t132 = 55403122364298813LL;

    t132 = (x573|(x574<=(x575-x576)));

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x577 = 6492U;
	volatile uint64_t x578 = 507609434LLU;
	int8_t x579 = INT8_MIN;
	int64_t x580 = INT64_MIN;

    t133 = (x577|(x578<=(x579-x580)));

    if (t133 != 6493) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x581 = 6;
	static int8_t x582 = 1;
	int64_t x583 = INT64_MIN;
	int32_t t134 = -284;

    t134 = (x581|(x582<=(x583-x584)));

    if (t134 != 6) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x585 = INT32_MAX;
	volatile int8_t x586 = INT8_MIN;
	int16_t x588 = INT16_MIN;
	static volatile int32_t t135 = INT32_MAX;

    t135 = (x585|(x586<=(x587-x588)));

    if (t135 != INT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x589 = -1LL;
	volatile int8_t x591 = INT8_MIN;
	int64_t t136 = -833021LL;

    t136 = (x589|(x590<=(x591-x592)));

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x593 = INT16_MIN;
	uint64_t x594 = UINT64_MAX;
	int32_t x595 = -1;

    t137 = (x593|(x594<=(x595-x596)));

    if (t137 != -32768) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x597 = 569601U;
	int16_t x599 = INT16_MIN;
	int64_t x600 = INT64_MIN;

    t138 = (x597|(x598<=(x599-x600)));

    if (t138 != 569601U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x601 = INT64_MIN;
	int16_t x603 = INT16_MIN;
	volatile int64_t t139 = -3193408748487690LL;

    t139 = (x601|(x602<=(x603-x604)));

    if (t139 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int8_t x606 = 20;
	uint32_t x607 = 502508280U;
	volatile int64_t x608 = -1932252LL;
	int64_t t140 = 3252101819148LL;

    t140 = (x605|(x606<=(x607-x608)));

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x609 = UINT16_MAX;
	int16_t x610 = 721;
	int32_t x611 = -1;
	static int16_t x612 = INT16_MAX;
	volatile int32_t t141 = -2;

    t141 = (x609|(x610<=(x611-x612)));

    if (t141 != 65535) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x613 = 6U;
	uint16_t x614 = 477U;
	static volatile int8_t x616 = -1;

    t142 = (x613|(x614<=(x615-x616)));

    if (t142 != 7) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x617 = 449;
	volatile int32_t x618 = INT32_MAX;
	int32_t x619 = -295;

    t143 = (x617|(x618<=(x619-x620)));

    if (t143 != 449) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x621 = 11503;
	int16_t x622 = -1;
	int8_t x623 = -1;
	int8_t x624 = INT8_MIN;
	volatile int32_t t144 = -12;

    t144 = (x621|(x622<=(x623-x624)));

    if (t144 != 11503) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x625 = -1;
	uint16_t x626 = UINT16_MAX;
	uint16_t x627 = 6U;
	static int8_t x628 = 0;
	volatile int32_t t145 = -264;

    t145 = (x625|(x626<=(x627-x628)));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x629 = INT16_MIN;
	int16_t x632 = -1;

    t146 = (x629|(x630<=(x631-x632)));

    if (t146 != -32768) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x633 = 48;
	uint32_t x635 = 387U;
	int64_t x636 = INT64_MAX;

    t147 = (x633|(x634<=(x635-x636)));

    if (t147 != 48) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x637 = INT32_MIN;
	uint8_t x638 = 1U;
	volatile int8_t x639 = INT8_MIN;
	uint64_t x640 = UINT64_MAX;

    t148 = (x637|(x638<=(x639-x640)));

    if (t148 != -2147483647) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x641 = -1;
	volatile uint64_t x643 = 0LLU;
	static uint64_t x644 = UINT64_MAX;
	static int32_t t149 = 4725;

    t149 = (x641|(x642<=(x643-x644)));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x653 = 21U;
	int64_t x655 = INT64_MAX;
	uint32_t x656 = 20525U;
	int32_t t150 = -3083;

    t150 = (x653|(x654<=(x655-x656)));

    if (t150 != 21) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x661 = -1;
	int8_t x662 = 3;
	static uint16_t x663 = UINT16_MAX;
	volatile int32_t x664 = INT32_MAX;
	static volatile int32_t t151 = 35888788;

    t151 = (x661|(x662<=(x663-x664)));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x665 = INT8_MIN;
	uint64_t x666 = 724LLU;
	static int8_t x667 = -1;
	int64_t x668 = INT64_MIN;
	int32_t t152 = -2298;

    t152 = (x665|(x666<=(x667-x668)));

    if (t152 != -127) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x670 = UINT64_MAX;
	static int8_t x671 = INT8_MIN;
	uint16_t x672 = 0U;
	int32_t t153 = INT32_MAX;

    t153 = (x669|(x670<=(x671-x672)));

    if (t153 != INT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x673 = 11U;
	uint32_t x674 = 157U;
	int16_t x676 = INT16_MIN;
	volatile int32_t t154 = -20539;

    t154 = (x673|(x674<=(x675-x676)));

    if (t154 != 11) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x677 = 9475094349742191LLU;
	volatile int8_t x679 = INT8_MAX;
	int8_t x680 = 2;
	static uint64_t t155 = 211538705583648LLU;

    t155 = (x677|(x678<=(x679-x680)));

    if (t155 != 9475094349742191LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint32_t x681 = 404995U;
	int64_t x682 = INT64_MIN;
	uint32_t t156 = 647041762U;

    t156 = (x681|(x682<=(x683-x684)));

    if (t156 != 404995U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x685 = 1U;
	static volatile uint16_t x686 = UINT16_MAX;
	uint32_t x687 = 0U;
	static uint64_t x688 = UINT64_MAX;
	static int32_t t157 = -31369;

    t157 = (x685|(x686<=(x687-x688)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x689 = 251667292;
	int32_t x690 = INT32_MIN;
	int16_t x691 = INT16_MAX;
	int64_t x692 = 1444707LL;
	volatile int32_t t158 = -469992461;

    t158 = (x689|(x690<=(x691-x692)));

    if (t158 != 251667293) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x693 = INT8_MAX;
	int8_t x695 = INT8_MIN;

    t159 = (x693|(x694<=(x695-x696)));

    if (t159 != 127) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x697 = INT64_MIN;
	uint8_t x699 = 22U;
	uint8_t x700 = 3U;
	int64_t t160 = INT64_MIN;

    t160 = (x697|(x698<=(x699-x700)));

    if (t160 != INT64_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x701 = 1;
	volatile uint16_t x702 = 10122U;
	int64_t x703 = -3155643LL;
	int32_t x704 = INT32_MIN;
	volatile int32_t t161 = 9008802;

    t161 = (x701|(x702<=(x703-x704)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x705 = INT8_MAX;
	uint64_t x707 = 340137826408LLU;
	uint64_t x708 = UINT64_MAX;

    t162 = (x705|(x706<=(x707-x708)));

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x710 = 11U;
	int8_t x711 = 0;
	volatile uint32_t x712 = UINT32_MAX;
	volatile int64_t t163 = INT64_MIN;

    t163 = (x709|(x710<=(x711-x712)));

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x713 = 21612U;
	int8_t x714 = INT8_MIN;
	uint8_t x715 = UINT8_MAX;
	static volatile int32_t x716 = INT32_MAX;
	volatile uint32_t t164 = 357303U;

    t164 = (x713|(x714<=(x715-x716)));

    if (t164 != 21612U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x717 = -1;
	int64_t x719 = INT64_MIN;
	int32_t t165 = 1;

    t165 = (x717|(x718<=(x719-x720)));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x721 = 27797099;
	int64_t x722 = 2LL;
	uint64_t x723 = 24LLU;
	int16_t x724 = INT16_MIN;

    t166 = (x721|(x722<=(x723-x724)));

    if (t166 != 27797099) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x725 = 63898650U;
	int8_t x726 = -1;
	static int32_t x727 = INT32_MAX;
	static uint32_t t167 = 2U;

    t167 = (x725|(x726<=(x727-x728)));

    if (t167 != 63898651U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x729 = -1;
	uint16_t x730 = 3468U;
	int64_t x732 = -1931531693413398761LL;
	int32_t t168 = 57280;

    t168 = (x729|(x730<=(x731-x732)));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x733 = 1782U;
	int32_t x734 = INT32_MIN;
	int8_t x735 = INT8_MIN;
	uint16_t x736 = 0U;
	volatile int32_t t169 = 34;

    t169 = (x733|(x734<=(x735-x736)));

    if (t169 != 1783) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x737 = INT32_MIN;
	static int8_t x738 = 1;
	static int64_t x739 = INT64_MAX;

    t170 = (x737|(x738<=(x739-x740)));

    if (t170 != -2147483647) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x741 = -2024167;
	int8_t x742 = INT8_MIN;
	int32_t x743 = -1;
	volatile int32_t t171 = -43020451;

    t171 = (x741|(x742<=(x743-x744)));

    if (t171 != -2024167) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x747 = 1122U;
	volatile uint64_t x748 = UINT64_MAX;
	int32_t t172 = 141;

    t172 = (x745|(x746<=(x747-x748)));

    if (t172 != -3) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x749 = INT32_MIN;
	uint64_t x750 = 374947312578056LLU;
	uint8_t x751 = 4U;
	static uint64_t x752 = 227303142313406LLU;

    t173 = (x749|(x750<=(x751-x752)));

    if (t173 != -2147483647) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x753 = INT32_MIN;
	volatile int32_t x755 = INT32_MAX;
	int32_t t174 = -500;

    t174 = (x753|(x754<=(x755-x756)));

    if (t174 != -2147483647) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x757 = -104LL;
	static int8_t x758 = 28;
	int16_t x759 = -1;
	volatile int64_t t175 = -689507LL;

    t175 = (x757|(x758<=(x759-x760)));

    if (t175 != -104LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x762 = 8901LLU;
	uint8_t x763 = 0U;
	int8_t x764 = INT8_MIN;
	int32_t t176 = 10068410;

    t176 = (x761|(x762<=(x763-x764)));

    if (t176 != -32768) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x765 = -8048564398LL;
	volatile int16_t x766 = -60;
	int32_t x768 = -683399;
	volatile int64_t t177 = 134951630619LL;

    t177 = (x765|(x766<=(x767-x768)));

    if (t177 != -8048564397LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x769 = 0U;
	static uint16_t x771 = 8U;
	int8_t x772 = INT8_MIN;
	volatile int32_t t178 = -6;

    t178 = (x769|(x770<=(x771-x772)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x774 = 6U;
	volatile uint32_t x775 = 10363U;
	int16_t x776 = 5;
	static volatile int32_t t179 = 24942519;

    t179 = (x773|(x774<=(x775-x776)));

    if (t179 != -127) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x777 = 1;
	static volatile uint32_t x778 = 3U;
	volatile int8_t x779 = -1;
	int64_t x780 = 55LL;
	static volatile int32_t t180 = -215437071;

    t180 = (x777|(x778<=(x779-x780)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x785 = -430597;
	volatile int16_t x786 = INT16_MIN;
	volatile uint8_t x787 = 2U;
	volatile int32_t t181 = -2785;

    t181 = (x785|(x786<=(x787-x788)));

    if (t181 != -430597) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x790 = 59392LLU;
	static int8_t x791 = INT8_MAX;
	volatile int16_t x792 = -1;

    t182 = (x789|(x790<=(x791-x792)));

    if (t182 != -102365) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x793 = INT64_MIN;
	int16_t x794 = -1;
	int64_t x795 = -1LL;
	int16_t x796 = INT16_MAX;
	static int64_t t183 = INT64_MIN;

    t183 = (x793|(x794<=(x795-x796)));

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x797 = -12;
	static volatile int8_t x798 = -30;
	volatile int32_t x799 = -150387393;
	int8_t x800 = 13;
	volatile int32_t t184 = 36589;

    t184 = (x797|(x798<=(x799-x800)));

    if (t184 != -12) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x801 = 2803825;
	int32_t x802 = INT32_MAX;
	int64_t x803 = -1887LL;
	volatile int32_t t185 = 539016;

    t185 = (x801|(x802<=(x803-x804)));

    if (t185 != 2803825) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x805 = 14768358580600LL;
	uint16_t x806 = 12U;
	uint64_t x807 = 17394006626984LLU;
	static uint64_t x808 = 5388988230548082540LLU;
	volatile int64_t t186 = -33LL;

    t186 = (x805|(x806<=(x807-x808)));

    if (t186 != 14768358580601LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x809 = -1;
	int16_t x810 = INT16_MAX;
	int8_t x811 = -1;
	uint32_t x812 = UINT32_MAX;
	static volatile int32_t t187 = 0;

    t187 = (x809|(x810<=(x811-x812)));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x817 = -497228LL;
	uint16_t x818 = UINT16_MAX;
	volatile uint64_t x819 = 2512228653501787LLU;
	uint16_t x820 = 1848U;
	int64_t t188 = 264801340LL;

    t188 = (x817|(x818<=(x819-x820)));

    if (t188 != -497227LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x821 = INT64_MIN;
	uint8_t x824 = UINT8_MAX;
	int64_t t189 = 2734866449329046LL;

    t189 = (x821|(x822<=(x823-x824)));

    if (t189 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x826 = -6;
	int64_t x827 = INT64_MIN;
	int64_t x828 = INT64_MIN;
	int32_t t190 = -571;

    t190 = (x825|(x826<=(x827-x828)));

    if (t190 != 127) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x833 = 14115;
	uint64_t x834 = 6372892553173281LLU;
	static uint32_t x835 = UINT32_MAX;
	int64_t x836 = -1LL;
	static volatile int32_t t191 = -39409;

    t191 = (x833|(x834<=(x835-x836)));

    if (t191 != 14115) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x837 = 0U;
	static int16_t x838 = -930;
	uint32_t x839 = 5623211U;
	int32_t t192 = 29;

    t192 = (x837|(x838<=(x839-x840)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x841 = 17464U;
	int64_t x842 = 7299384LL;
	int64_t x843 = 35935LL;
	int64_t x844 = 3419LL;
	volatile uint32_t t193 = 12U;

    t193 = (x841|(x842<=(x843-x844)));

    if (t193 != 17464U) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x845 = UINT64_MAX;
	uint8_t x846 = 105U;
	uint32_t x847 = 1789098289U;

    t194 = (x845|(x846<=(x847-x848)));

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x849 = INT64_MIN;
	int64_t x851 = -1LL;
	uint16_t x852 = 4U;
	static int64_t t195 = 4675LL;

    t195 = (x849|(x850<=(x851-x852)));

    if (t195 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x853 = -1;
	uint32_t x855 = 3U;
	volatile int16_t x856 = 1;
	volatile int32_t t196 = -763474205;

    t196 = (x853|(x854<=(x855-x856)));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x861 = 29;
	volatile uint8_t x862 = UINT8_MAX;
	uint32_t x863 = UINT32_MAX;
	uint8_t x864 = 56U;
	int32_t t197 = -715926;

    t197 = (x861|(x862<=(x863-x864)));

    if (t197 != 29) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x865 = -1;
	int16_t x866 = -1;
	uint32_t x867 = 215U;
	static uint64_t x868 = UINT64_MAX;
	volatile int32_t t198 = -96;

    t198 = (x865|(x866<=(x867-x868)));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x869 = INT32_MIN;
	static int16_t x870 = -1;
	static uint16_t x871 = 463U;
	static uint16_t x872 = UINT16_MAX;
	int32_t t199 = INT32_MIN;

    t199 = (x869|(x870<=(x871-x872)));

    if (t199 != INT32_MIN) { NG(); } else { ; }
	
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

