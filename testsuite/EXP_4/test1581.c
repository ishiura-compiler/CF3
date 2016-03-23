
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

int32_t x10 = INT32_MIN;
volatile int8_t x11 = -1;
static uint64_t x12 = 7078217LLU;
static volatile int32_t t3 = -301352;
volatile int16_t x18 = INT16_MIN;
int8_t x32 = INT8_MIN;
volatile int32_t x34 = INT32_MAX;
volatile int32_t t7 = -1539;
uint8_t x37 = 22U;
int32_t x40 = INT32_MIN;
int64_t x41 = 950LL;
static volatile int64_t t9 = -77679677873LL;
static int32_t x46 = INT32_MAX;
int8_t x54 = INT8_MIN;
int64_t t13 = INT64_MAX;
int16_t x61 = 7151;
volatile uint32_t x63 = UINT32_MAX;
int16_t x64 = -1;
int32_t x68 = -26837588;
static int16_t x76 = INT16_MIN;
uint64_t t17 = 1473255LLU;
int32_t x77 = -1;
volatile int32_t t18 = -512879;
volatile uint32_t x90 = UINT32_MAX;
static uint32_t t21 = 314312U;
uint32_t x98 = 3U;
static uint16_t x101 = 0U;
int8_t x103 = 42;
volatile uint64_t x105 = 1616631765056846071LLU;
volatile int32_t t26 = 429374281;
uint64_t x115 = 8865617192LLU;
int16_t x118 = INT16_MIN;
uint64_t x122 = UINT64_MAX;
int64_t x128 = INT64_MAX;
int32_t t30 = -12;
uint64_t x131 = 527434895396663LLU;
static int64_t t31 = 1LL;
int16_t x133 = -1;
int64_t x139 = -2060052862805833LL;
int32_t x140 = INT32_MIN;
uint16_t x143 = 14022U;
static int32_t x146 = -1;
int8_t x147 = -1;
static int64_t t36 = 24282LL;
int8_t x155 = INT8_MIN;
volatile int32_t x159 = 8049;
int8_t x164 = -5;
volatile int32_t t39 = 16;
static int64_t x167 = -1LL;
int32_t x168 = INT32_MAX;
int16_t x171 = INT16_MAX;
volatile int16_t x174 = INT16_MIN;
int16_t x175 = -1;
static uint16_t x183 = UINT16_MAX;
volatile uint64_t t45 = 13911460629463LLU;
static int64_t x190 = INT64_MAX;
int16_t x199 = INT16_MAX;
uint64_t t48 = 3257LLU;
int16_t x201 = INT16_MAX;
uint32_t x206 = UINT32_MAX;
volatile int8_t x208 = -1;
uint16_t x210 = 4U;
static volatile int16_t x211 = INT16_MIN;
uint32_t x215 = 78168U;
volatile int32_t t52 = -25;
uint8_t x227 = 2U;
int16_t x234 = INT16_MIN;
volatile uint16_t x239 = 0U;
int32_t t58 = -9045;
static volatile uint8_t x244 = 0U;
int16_t x248 = INT16_MIN;
uint8_t x249 = 43U;
uint8_t x255 = 7U;
uint64_t x258 = 32115859648141LLU;
uint8_t x260 = UINT8_MAX;
int32_t x267 = INT32_MAX;
int32_t x279 = INT32_MIN;
volatile int32_t x282 = INT32_MIN;
volatile int64_t x286 = INT64_MIN;
static int64_t x287 = INT64_MIN;
int64_t x292 = INT64_MAX;
int8_t x294 = -58;
int8_t x298 = 0;
uint16_t x300 = 146U;
int16_t x303 = INT16_MAX;
uint16_t x321 = 228U;
int64_t x322 = INT64_MIN;
static int64_t x329 = -1LL;
int32_t x333 = -1;
int8_t x334 = INT8_MIN;
static int16_t x336 = INT16_MIN;
volatile int64_t x338 = INT64_MIN;
volatile uint32_t x342 = UINT32_MAX;
static int64_t t84 = -1LL;
static int32_t t85 = 430519813;
volatile int32_t x350 = INT32_MIN;
int8_t x356 = INT8_MAX;
int64_t x371 = -1LL;
int32_t x373 = 35135;
volatile int16_t x379 = INT16_MAX;
int32_t x386 = 0;
int64_t x396 = 1962503451LL;
int16_t x405 = -55;
int32_t x412 = INT32_MIN;
uint8_t x415 = UINT8_MAX;
int64_t t102 = -8009948691598LL;
volatile int8_t x419 = INT8_MIN;
uint64_t x434 = 5986021656LLU;
volatile int8_t x439 = -1;
static volatile int8_t x447 = 19;
static int16_t x458 = INT16_MIN;
int32_t x467 = -1;
volatile uint64_t x470 = 326513138874LLU;
uint16_t x473 = 26U;
uint16_t x475 = UINT16_MAX;
int16_t x477 = -1;
int16_t x485 = INT16_MAX;
uint32_t x486 = 23571U;
volatile uint16_t x487 = 5587U;
static volatile uint32_t t120 = 0U;
uint64_t x490 = 187688914LLU;
int32_t t122 = 13749;
uint16_t x500 = 13417U;
volatile int8_t x503 = INT8_MIN;
int8_t x508 = INT8_MIN;
static int8_t x509 = INT8_MIN;
int16_t x515 = -1;
int32_t t127 = -261672;
int8_t x520 = INT8_MAX;
volatile int16_t x528 = -1;
int32_t t131 = 3521;
static int8_t x548 = INT8_MIN;
uint64_t x549 = 45LLU;
uint32_t x553 = 117208U;
uint64_t x554 = UINT64_MAX;
static uint64_t x556 = 26725LLU;
int32_t x568 = -1;
int32_t x569 = INT32_MIN;
uint8_t x573 = 3U;
uint8_t x575 = 16U;
static int32_t x581 = 0;
int64_t x587 = -1LL;
volatile uint64_t t144 = 9LLU;
int32_t x590 = INT32_MAX;
uint8_t x596 = 41U;
volatile int64_t x599 = INT64_MAX;
int16_t x600 = 5107;
uint32_t x603 = 98U;
int64_t x610 = 13LL;
int8_t x611 = 3;
static volatile uint8_t x612 = UINT8_MAX;
int64_t x614 = INT64_MIN;
volatile int32_t x617 = 1;
int64_t x618 = INT64_MAX;
static uint32_t x622 = 55869U;
uint32_t t154 = 836U;
int16_t x629 = 60;
int64_t x633 = INT64_MIN;
static volatile int64_t t157 = -508994486LL;
volatile int32_t t158 = INT32_MAX;
int16_t x651 = INT16_MAX;
volatile uint32_t x653 = 4279U;
static volatile uint64_t t162 = 623150437350LLU;
static int64_t x661 = INT64_MAX;
int32_t x663 = INT32_MIN;
volatile int64_t t163 = INT64_MAX;
int16_t x666 = INT16_MIN;
int64_t x668 = -2LL;
int32_t t164 = 1030484900;
int32_t x669 = INT32_MIN;
int8_t x688 = 1;
static int8_t x691 = -1;
uint64_t x692 = 3594372436LLU;
int16_t x699 = INT16_MAX;
uint8_t x702 = 0U;
int32_t x704 = INT32_MAX;
volatile uint16_t x715 = 154U;
static volatile uint64_t t176 = UINT64_MAX;
volatile int64_t x731 = -307463LL;
volatile int64_t t179 = -6376LL;
static int64_t t180 = 442738LL;
uint64_t x745 = UINT64_MAX;
uint64_t t182 = UINT64_MAX;
int64_t x763 = INT64_MAX;
volatile uint32_t x764 = UINT32_MAX;
volatile int32_t t185 = -6;
int32_t t186 = 59990867;
uint64_t x774 = UINT64_MAX;
static int16_t x777 = INT16_MAX;
int32_t x778 = -778;
uint32_t x793 = UINT32_MAX;
uint8_t x798 = 3U;
int8_t x799 = INT8_MIN;
int16_t x800 = INT16_MAX;
uint8_t x802 = 2U;
int32_t x803 = INT32_MAX;
uint8_t x813 = 2U;
volatile int8_t x814 = INT8_MIN;
uint64_t t199 = 188937LLU;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	uint64_t x2 = 124621842LLU;
	int64_t x3 = INT64_MIN;
	int8_t x4 = -2;
	uint64_t t0 = 3769LLU;

    t0 = (x1|(x2+(x3>x4)));

    if (t0 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	volatile uint64_t x6 = 116875412088119LLU;
	int32_t x7 = 260;
	static volatile uint64_t x8 = 968LLU;
	static volatile uint64_t t1 = 1557042653322417LLU;

    t1 = (x5|(x6+(x7>x8)));

    if (t1 != 116876797542399LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 5U;
	volatile int32_t t2 = 16;

    t2 = (x9|(x10+(x11>x12)));

    if (t2 != -2147483643) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	int32_t x14 = 3818112;
	static volatile int8_t x15 = -1;
	int32_t x16 = -1;

    t3 = (x13|(x14+(x15>x16)));

    if (t3 != 3818239) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	volatile int32_t x19 = 918840;
	static uint8_t x20 = UINT8_MAX;
	static int32_t t4 = -5113214;

    t4 = (x17|(x18+(x19>x20)));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x25 = INT64_MIN;
	int16_t x26 = -125;
	uint8_t x27 = 33U;
	static int64_t x28 = INT64_MIN;
	volatile int64_t t5 = 11LL;

    t5 = (x25|(x26+(x27>x28)));

    if (t5 != -124LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x29 = 15305873LL;
	int32_t x30 = -1;
	uint16_t x31 = 26U;
	static int64_t t6 = 679336613LL;

    t6 = (x29|(x30+(x31>x32)));

    if (t6 != 15305873LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x33 = -1;
	int8_t x35 = INT8_MIN;
	volatile int8_t x36 = INT8_MIN;

    t7 = (x33|(x34+(x35>x36)));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x38 = 3U;
	static volatile int32_t x39 = INT32_MAX;
	int32_t t8 = 1544;

    t8 = (x37|(x38+(x39>x40)));

    if (t8 != 22) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x42 = INT32_MIN;
	uint8_t x43 = UINT8_MAX;
	int32_t x44 = INT32_MAX;

    t9 = (x41|(x42+(x43>x44)));

    if (t9 != -2147482698LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MAX;
	volatile uint32_t x47 = 2U;
	int64_t x48 = 132234376643413LL;
	volatile int32_t t10 = INT32_MAX;

    t10 = (x45|(x46+(x47>x48)));

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = INT16_MAX;
	volatile int8_t x50 = INT8_MAX;
	static int8_t x51 = INT8_MIN;
	static volatile uint32_t x52 = 9117895U;
	static int32_t t11 = -212161052;

    t11 = (x49|(x50+(x51>x52)));

    if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = 369LLU;
	int64_t x55 = INT64_MIN;
	int16_t x56 = INT16_MIN;
	uint64_t t12 = 10405142439LLU;

    t12 = (x53|(x54+(x55>x56)));

    if (t12 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x57 = UINT8_MAX;
	volatile int64_t x58 = INT64_MAX;
	static int8_t x59 = INT8_MAX;
	int16_t x60 = INT16_MAX;

    t13 = (x57|(x58+(x59>x60)));

    if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x62 = 58U;
	static volatile uint32_t t14 = 812912181U;

    t14 = (x61|(x62+(x63>x64)));

    if (t14 != 7167U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = 3844U;
	volatile int8_t x66 = INT8_MAX;
	static uint8_t x67 = UINT8_MAX;
	volatile uint32_t t15 = 55U;

    t15 = (x65|(x66+(x67>x68)));

    if (t15 != 3972U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = 10;
	int64_t x70 = -1LL;
	int8_t x71 = 31;
	static volatile int32_t x72 = INT32_MAX;
	int64_t t16 = 62593796799LL;

    t16 = (x69|(x70+(x71>x72)));

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = -1707740LL;
	uint64_t x74 = 82LLU;
	int32_t x75 = INT32_MAX;

    t17 = (x73|(x74+(x75>x76)));

    if (t17 != 18446744073707843959LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x78 = INT8_MIN;
	volatile int16_t x79 = INT16_MIN;
	static uint32_t x80 = UINT32_MAX;

    t18 = (x77|(x78+(x79>x80)));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MIN;
	int32_t x83 = -1;
	int32_t x84 = 366575;
	volatile int32_t t19 = 1553;

    t19 = (x81|(x82+(x83>x84)));

    if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x85 = INT8_MAX;
	static int64_t x86 = INT64_MIN;
	int8_t x87 = 6;
	int8_t x88 = -9;
	volatile int64_t t20 = -26549LL;

    t20 = (x85|(x86+(x87>x88)));

    if (t20 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = INT16_MIN;
	static uint8_t x91 = 0U;
	int8_t x92 = INT8_MIN;

    t21 = (x89|(x90+(x91>x92)));

    if (t21 != 4294934528U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x93 = INT64_MAX;
	static int8_t x94 = INT8_MIN;
	static uint32_t x95 = UINT32_MAX;
	volatile int16_t x96 = INT16_MIN;
	static int64_t t22 = 3731253LL;

    t22 = (x93|(x94+(x95>x96)));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint8_t x97 = 3U;
	int16_t x99 = INT16_MIN;
	int32_t x100 = INT32_MAX;
	uint32_t t23 = 165U;

    t23 = (x97|(x98+(x99>x100)));

    if (t23 != 3U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x102 = 66142856;
	uint8_t x104 = UINT8_MAX;
	int32_t t24 = 801336;

    t24 = (x101|(x102+(x103>x104)));

    if (t24 != 66142856) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x106 = 0;
	volatile int32_t x107 = -130805;
	int64_t x108 = -166LL;
	static volatile uint64_t t25 = 32104276159043230LLU;

    t25 = (x105|(x106+(x107>x108)));

    if (t25 != 1616631765056846071LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = -5;
	uint8_t x110 = UINT8_MAX;
	int32_t x111 = INT32_MAX;
	int32_t x112 = -1;

    t26 = (x109|(x110+(x111>x112)));

    if (t26 != -5) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x113 = 12U;
	uint64_t x114 = 25707404124LLU;
	int8_t x116 = -1;
	uint64_t t27 = 110LLU;

    t27 = (x113|(x114+(x115>x116)));

    if (t27 != 25707404124LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = 488731129;
	static int32_t x119 = 5788829;
	int16_t x120 = -9043;
	int32_t t28 = 313324;

    t28 = (x117|(x118+(x119>x120)));

    if (t28 != -3591) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = INT16_MIN;
	volatile uint8_t x123 = 0U;
	static volatile uint8_t x124 = 17U;
	static volatile uint64_t t29 = UINT64_MAX;

    t29 = (x121|(x122+(x123>x124)));

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x125 = UINT8_MAX;
	uint8_t x126 = 14U;
	volatile uint16_t x127 = 140U;

    t30 = (x125|(x126+(x127>x128)));

    if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x129 = 10580;
	int64_t x130 = INT64_MIN;
	uint64_t x132 = UINT64_MAX;

    t31 = (x129|(x130+(x131>x132)));

    if (t31 != -9223372036854765228LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x134 = 50U;
	int8_t x135 = 54;
	volatile int16_t x136 = -1;
	volatile uint32_t t32 = UINT32_MAX;

    t32 = (x133|(x134+(x135>x136)));

    if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = INT32_MIN;
	uint16_t x138 = 16U;
	static int32_t t33 = 286383161;

    t33 = (x137|(x138+(x139>x140)));

    if (t33 != -2147483632) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x141 = 8638U;
	int16_t x142 = INT16_MIN;
	volatile int32_t x144 = INT32_MIN;
	int32_t t34 = -522603;

    t34 = (x141|(x142+(x143>x144)));

    if (t34 != -24129) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x145 = INT64_MIN;
	int32_t x148 = INT32_MAX;
	static volatile int64_t t35 = 55544055078451832LL;

    t35 = (x145|(x146+(x147>x148)));

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x149 = -1;
	int64_t x150 = 415448332LL;
	int64_t x151 = -1LL;
	int16_t x152 = -7432;

    t36 = (x149|(x150+(x151>x152)));

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint32_t x153 = 173692U;
	int32_t x154 = -29458;
	int32_t x156 = -998830;
	volatile uint32_t t37 = 7132653U;

    t37 = (x153|(x154+(x155>x156)));

    if (t37 != 4294946559U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x157 = 28U;
	static uint8_t x158 = 0U;
	uint8_t x160 = 63U;
	volatile uint32_t t38 = 12282412U;

    t38 = (x157|(x158+(x159>x160)));

    if (t38 != 29U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x161 = UINT8_MAX;
	int32_t x162 = INT32_MIN;
	static int32_t x163 = -1;

    t39 = (x161|(x162+(x163>x164)));

    if (t39 != -2147483393) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = -8;
	int32_t x166 = INT32_MIN;
	int32_t t40 = -22074;

    t40 = (x165|(x166+(x167>x168)));

    if (t40 != -8) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x169 = UINT16_MAX;
	uint32_t x170 = 30180U;
	int8_t x172 = INT8_MIN;
	volatile uint32_t t41 = 111U;

    t41 = (x169|(x170+(x171>x172)));

    if (t41 != 65535U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = -1;
	volatile int8_t x176 = -29;
	int32_t t42 = -204;

    t42 = (x173|(x174+(x175>x176)));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x177 = INT8_MAX;
	int8_t x178 = INT8_MAX;
	uint32_t x179 = 47149U;
	uint8_t x180 = 42U;
	int32_t t43 = -12169;

    t43 = (x177|(x178+(x179>x180)));

    if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x181 = UINT8_MAX;
	uint32_t x182 = 446321U;
	uint16_t x184 = 16606U;
	static uint32_t t44 = 3646619U;

    t44 = (x181|(x182+(x183>x184)));

    if (t44 != 446463U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x185 = 9301LLU;
	volatile int64_t x186 = 152946392082411LL;
	uint8_t x187 = 13U;
	static uint8_t x188 = 5U;

    t45 = (x185|(x186+(x187>x188)));

    if (t45 != 152946392082429LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x189 = UINT16_MAX;
	int32_t x191 = INT32_MIN;
	int8_t x192 = INT8_MIN;
	int64_t t46 = INT64_MAX;

    t46 = (x189|(x190+(x191>x192)));

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x193 = -1592530LL;
	uint32_t x194 = 29599U;
	int64_t x195 = INT64_MAX;
	int8_t x196 = INT8_MIN;
	volatile int64_t t47 = 596389171800263LL;

    t47 = (x193|(x194+(x195>x196)));

    if (t47 != -1576018LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x197 = 41U;
	static uint64_t x198 = 3836432680366415LLU;
	int32_t x200 = INT32_MAX;

    t48 = (x197|(x198+(x199>x200)));

    if (t48 != 3836432680366447LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x202 = INT16_MIN;
	int8_t x203 = -1;
	int64_t x204 = -1LL;
	volatile int32_t t49 = -6894989;

    t49 = (x201|(x202+(x203>x204)));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x205 = INT16_MIN;
	int16_t x207 = 846;
	volatile uint32_t t50 = 52U;

    t50 = (x205|(x206+(x207>x208)));

    if (t50 != 4294934528U) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x209 = -1;
	int32_t x212 = -1;
	static int32_t t51 = -400824751;

    t51 = (x209|(x210+(x211>x212)));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x213 = INT16_MIN;
	volatile int32_t x214 = -19;
	uint16_t x216 = UINT16_MAX;

    t52 = (x213|(x214+(x215>x216)));

    if (t52 != -18) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x217 = INT64_MIN;
	int16_t x218 = INT16_MIN;
	volatile int16_t x219 = 5;
	int16_t x220 = INT16_MAX;
	volatile int64_t t53 = -204LL;

    t53 = (x217|(x218+(x219>x220)));

    if (t53 != -32768LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x221 = 6U;
	int32_t x222 = 700342154;
	static uint16_t x223 = UINT16_MAX;
	uint32_t x224 = 32014U;
	int32_t t54 = 661;

    t54 = (x221|(x222+(x223>x224)));

    if (t54 != 700342159) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x225 = INT16_MIN;
	uint16_t x226 = UINT16_MAX;
	int32_t x228 = -1;
	volatile int32_t t55 = -28497;

    t55 = (x225|(x226+(x227>x228)));

    if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x229 = 175U;
	int8_t x230 = 1;
	int64_t x231 = -3062691444779LL;
	int8_t x232 = INT8_MIN;
	static int32_t t56 = -668302762;

    t56 = (x229|(x230+(x231>x232)));

    if (t56 != 175) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x233 = INT16_MIN;
	int8_t x235 = INT8_MAX;
	int8_t x236 = 23;
	volatile int32_t t57 = 642924213;

    t57 = (x233|(x234+(x235>x236)));

    if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x237 = 3U;
	int16_t x238 = -1;
	int8_t x240 = 0;

    t58 = (x237|(x238+(x239>x240)));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x241 = INT32_MIN;
	static int16_t x242 = INT16_MAX;
	uint16_t x243 = 110U;
	volatile int32_t t59 = 0;

    t59 = (x241|(x242+(x243>x244)));

    if (t59 != -2147450880) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x245 = 959419262195LLU;
	uint64_t x246 = UINT64_MAX;
	static int16_t x247 = -1;
	volatile uint64_t t60 = 5402LLU;

    t60 = (x245|(x246+(x247>x248)));

    if (t60 != 959419262195LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x250 = INT32_MAX;
	static int8_t x251 = 57;
	volatile int32_t x252 = 55473167;
	int32_t t61 = INT32_MAX;

    t61 = (x249|(x250+(x251>x252)));

    if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x253 = -1LL;
	uint16_t x254 = 7251U;
	volatile int8_t x256 = 0;
	volatile int64_t t62 = 7860562393704LL;

    t62 = (x253|(x254+(x255>x256)));

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x257 = 2U;
	int8_t x259 = -1;
	uint64_t t63 = 4471LLU;

    t63 = (x257|(x258+(x259>x260)));

    if (t63 != 32115859648143LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x261 = INT16_MAX;
	volatile int8_t x262 = -7;
	static volatile int16_t x263 = -1;
	static uint64_t x264 = 25225LLU;
	volatile int32_t t64 = 159135881;

    t64 = (x261|(x262+(x263>x264)));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x265 = INT16_MIN;
	int64_t x266 = INT64_MIN;
	static int16_t x268 = INT16_MIN;
	int64_t t65 = -12992283266478202LL;

    t65 = (x265|(x266+(x267>x268)));

    if (t65 != -32767LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x269 = 3142U;
	int64_t x270 = INT64_MAX;
	volatile int32_t x271 = INT32_MIN;
	static volatile uint16_t x272 = 3U;
	int64_t t66 = INT64_MAX;

    t66 = (x269|(x270+(x271>x272)));

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x273 = 3U;
	uint8_t x274 = UINT8_MAX;
	uint16_t x275 = UINT16_MAX;
	static int32_t x276 = INT32_MIN;
	int32_t t67 = 1804413;

    t67 = (x273|(x274+(x275>x276)));

    if (t67 != 259) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x277 = INT16_MIN;
	int32_t x278 = -144;
	int8_t x280 = -1;
	int32_t t68 = -25;

    t68 = (x277|(x278+(x279>x280)));

    if (t68 != -144) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x281 = 407U;
	static uint8_t x283 = 0U;
	int8_t x284 = -1;
	volatile int32_t t69 = -16332035;

    t69 = (x281|(x282+(x283>x284)));

    if (t69 != -2147483241) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x285 = 3U;
	volatile int64_t x288 = 0LL;
	int64_t t70 = -198320967660942309LL;

    t70 = (x285|(x286+(x287>x288)));

    if (t70 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x289 = -11;
	volatile uint64_t x290 = 178LLU;
	int16_t x291 = -508;
	static uint64_t t71 = 2194455835821LLU;

    t71 = (x289|(x290+(x291>x292)));

    if (t71 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x293 = -1;
	uint16_t x295 = UINT16_MAX;
	int16_t x296 = 5095;
	int32_t t72 = 0;

    t72 = (x293|(x294+(x295>x296)));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x297 = UINT32_MAX;
	int8_t x299 = INT8_MIN;
	uint32_t t73 = UINT32_MAX;

    t73 = (x297|(x298+(x299>x300)));

    if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x301 = 141505358;
	static int64_t x302 = INT64_MIN;
	static int64_t x304 = INT64_MIN;
	static volatile int64_t t74 = -476LL;

    t74 = (x301|(x302+(x303>x304)));

    if (t74 != -9223372036713270449LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x305 = -939;
	volatile uint64_t x306 = UINT64_MAX;
	uint32_t x307 = 32579951U;
	uint32_t x308 = UINT32_MAX;
	volatile uint64_t t75 = UINT64_MAX;

    t75 = (x305|(x306+(x307>x308)));

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x309 = -1LL;
	static volatile int64_t x310 = INT64_MIN;
	uint32_t x311 = 22924U;
	int16_t x312 = INT16_MAX;
	volatile int64_t t76 = 740719955233943670LL;

    t76 = (x309|(x310+(x311>x312)));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x313 = INT32_MIN;
	int16_t x314 = 147;
	volatile int64_t x315 = -7948795924LL;
	uint64_t x316 = UINT64_MAX;
	int32_t t77 = 0;

    t77 = (x313|(x314+(x315>x316)));

    if (t77 != -2147483501) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x317 = 5813U;
	uint64_t x318 = UINT64_MAX;
	int64_t x319 = 4LL;
	uint16_t x320 = UINT16_MAX;
	volatile uint64_t t78 = UINT64_MAX;

    t78 = (x317|(x318+(x319>x320)));

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t x323 = INT32_MIN;
	int32_t x324 = INT32_MIN;
	static int64_t t79 = -979590LL;

    t79 = (x321|(x322+(x323>x324)));

    if (t79 != -9223372036854775580LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x325 = -14;
	volatile int8_t x326 = -18;
	int8_t x327 = INT8_MIN;
	volatile int8_t x328 = INT8_MIN;
	static int32_t t80 = -3500614;

    t80 = (x325|(x326+(x327>x328)));

    if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x330 = -91040;
	int64_t x331 = -1432LL;
	uint64_t x332 = 525561533432694947LLU;
	volatile int64_t t81 = 111143715093LL;

    t81 = (x329|(x330+(x331>x332)));

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x335 = 230975U;
	int32_t t82 = -29862562;

    t82 = (x333|(x334+(x335>x336)));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x337 = -1;
	uint16_t x339 = 275U;
	uint16_t x340 = 59U;
	int64_t t83 = -416911579LL;

    t83 = (x337|(x338+(x339>x340)));

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x341 = 27797958458111018LL;
	static int32_t x343 = INT32_MIN;
	uint64_t x344 = 1LLU;

    t84 = (x341|(x342+(x343>x344)));

    if (t84 != 27797958458111018LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x345 = 4238;
	static uint8_t x346 = 76U;
	static int16_t x347 = -261;
	static volatile int64_t x348 = INT64_MIN;

    t85 = (x345|(x346+(x347>x348)));

    if (t85 != 4303) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x349 = -1LL;
	int32_t x351 = INT32_MIN;
	int8_t x352 = 1;
	static volatile int64_t t86 = -226265830386311675LL;

    t86 = (x349|(x350+(x351>x352)));

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x353 = UINT64_MAX;
	int8_t x354 = INT8_MIN;
	int64_t x355 = -1041951006077854184LL;
	uint64_t t87 = UINT64_MAX;

    t87 = (x353|(x354+(x355>x356)));

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x357 = UINT8_MAX;
	int16_t x358 = -4628;
	uint32_t x359 = UINT32_MAX;
	volatile int32_t x360 = INT32_MIN;
	volatile int32_t t88 = -7584;

    t88 = (x357|(x358+(x359>x360)));

    if (t88 != -4609) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x361 = -1;
	uint16_t x362 = 49U;
	static uint8_t x363 = 23U;
	int32_t x364 = -1;
	volatile int32_t t89 = 58;

    t89 = (x361|(x362+(x363>x364)));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x365 = INT16_MIN;
	static int16_t x366 = -893;
	static int8_t x367 = INT8_MIN;
	uint64_t x368 = 52197281LLU;
	volatile int32_t t90 = 216821354;

    t90 = (x365|(x366+(x367>x368)));

    if (t90 != -892) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x369 = INT32_MIN;
	int64_t x370 = INT64_MIN;
	static uint32_t x372 = 278U;
	int64_t t91 = 681870221141085291LL;

    t91 = (x369|(x370+(x371>x372)));

    if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x374 = 1147LLU;
	int16_t x375 = INT16_MIN;
	volatile int64_t x376 = -178182475382952023LL;
	uint64_t t92 = 889LLU;

    t92 = (x373|(x374+(x375>x376)));

    if (t92 != 36223LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int16_t x377 = INT16_MIN;
	uint16_t x378 = UINT16_MAX;
	int64_t x380 = -1LL;
	static int32_t t93 = 13;

    t93 = (x377|(x378+(x379>x380)));

    if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x381 = UINT64_MAX;
	uint16_t x382 = UINT16_MAX;
	int64_t x383 = -1LL;
	static volatile int32_t x384 = -6;
	volatile uint64_t t94 = UINT64_MAX;

    t94 = (x381|(x382+(x383>x384)));

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x385 = 3U;
	int16_t x387 = INT16_MIN;
	int32_t x388 = INT32_MAX;
	volatile int32_t t95 = 50;

    t95 = (x385|(x386+(x387>x388)));

    if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x389 = 22406U;
	volatile int64_t x390 = -1LL;
	int32_t x391 = -13;
	uint64_t x392 = UINT64_MAX;
	volatile int64_t t96 = 130795508LL;

    t96 = (x389|(x390+(x391>x392)));

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x393 = INT8_MAX;
	int16_t x394 = INT16_MIN;
	int64_t x395 = INT64_MIN;
	int32_t t97 = -140926;

    t97 = (x393|(x394+(x395>x396)));

    if (t97 != -32641) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x397 = UINT16_MAX;
	int8_t x398 = INT8_MAX;
	static int64_t x399 = -1LL;
	uint64_t x400 = 0LLU;
	volatile int32_t t98 = -115345;

    t98 = (x397|(x398+(x399>x400)));

    if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x401 = 12U;
	uint32_t x402 = UINT32_MAX;
	static int32_t x403 = 0;
	int16_t x404 = -3;
	static volatile uint32_t t99 = 39161U;

    t99 = (x401|(x402+(x403>x404)));

    if (t99 != 12U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x406 = UINT16_MAX;
	static int8_t x407 = INT8_MAX;
	static int64_t x408 = INT64_MIN;
	int32_t t100 = -27;

    t100 = (x405|(x406+(x407>x408)));

    if (t100 != -55) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x409 = 2U;
	int32_t x410 = 2134853;
	int16_t x411 = INT16_MIN;
	volatile uint32_t t101 = 550336376U;

    t101 = (x409|(x410+(x411>x412)));

    if (t101 != 2134854U) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x413 = INT64_MIN;
	int16_t x414 = INT16_MAX;
	int8_t x416 = INT8_MIN;

    t102 = (x413|(x414+(x415>x416)));

    if (t102 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x417 = 122704622426192039LLU;
	static int64_t x418 = INT64_MAX;
	uint8_t x420 = UINT8_MAX;
	volatile uint64_t t103 = 10941639552LLU;

    t103 = (x417|(x418+(x419>x420)));

    if (t103 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x421 = -1;
	int16_t x422 = INT16_MIN;
	uint64_t x423 = 3598LLU;
	volatile int16_t x424 = INT16_MIN;
	int32_t t104 = -2872395;

    t104 = (x421|(x422+(x423>x424)));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x425 = 23418230592981LL;
	volatile int32_t x426 = -71;
	volatile uint16_t x427 = 4669U;
	static int16_t x428 = INT16_MAX;
	volatile int64_t t105 = -58053690086188556LL;

    t105 = (x425|(x426+(x427>x428)));

    if (t105 != -3LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x429 = -1;
	int16_t x430 = -28;
	int32_t x431 = INT32_MAX;
	int8_t x432 = 20;
	int32_t t106 = -16752;

    t106 = (x429|(x430+(x431>x432)));

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x433 = INT8_MIN;
	int8_t x435 = 1;
	volatile int16_t x436 = INT16_MIN;
	static uint64_t t107 = 20LLU;

    t107 = (x433|(x434+(x435>x436)));

    if (t107 != 18446744073709551513LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x437 = 3;
	int16_t x438 = INT16_MIN;
	uint8_t x440 = 110U;
	int32_t t108 = 115;

    t108 = (x437|(x438+(x439>x440)));

    if (t108 != -32765) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x441 = -102289;
	int8_t x442 = 1;
	int32_t x443 = -1;
	static volatile uint16_t x444 = 245U;
	static volatile int32_t t109 = -130882107;

    t109 = (x441|(x442+(x443>x444)));

    if (t109 != -102289) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x445 = -1;
	static int16_t x446 = INT16_MIN;
	volatile int8_t x448 = INT8_MAX;
	int32_t t110 = 0;

    t110 = (x445|(x446+(x447>x448)));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x449 = -55;
	static uint8_t x450 = 1U;
	uint16_t x451 = 165U;
	uint16_t x452 = 23U;
	volatile int32_t t111 = -211671;

    t111 = (x449|(x450+(x451>x452)));

    if (t111 != -53) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x453 = UINT8_MAX;
	int8_t x454 = INT8_MAX;
	int16_t x455 = -1;
	uint16_t x456 = 3U;
	volatile int32_t t112 = -272491858;

    t112 = (x453|(x454+(x455>x456)));

    if (t112 != 255) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x457 = INT16_MIN;
	int16_t x459 = INT16_MAX;
	volatile int16_t x460 = INT16_MIN;
	int32_t t113 = 26132392;

    t113 = (x457|(x458+(x459>x460)));

    if (t113 != -32767) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x461 = -1;
	volatile int64_t x462 = INT64_MIN;
	uint64_t x463 = 66662291477335LLU;
	volatile uint64_t x464 = 251075074LLU;
	static int64_t t114 = -503549811932072LL;

    t114 = (x461|(x462+(x463>x464)));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x465 = UINT32_MAX;
	static volatile uint64_t x466 = UINT64_MAX;
	int32_t x468 = 806921;
	static volatile uint64_t t115 = UINT64_MAX;

    t115 = (x465|(x466+(x467>x468)));

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x469 = -6444999LL;
	int64_t x471 = INT64_MIN;
	int64_t x472 = 1501LL;
	uint64_t t116 = 2808978195912485207LLU;

    t116 = (x469|(x470+(x471>x472)));

    if (t116 != 18446744073705340091LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int64_t x474 = -1LL;
	static uint16_t x476 = UINT16_MAX;
	int64_t t117 = -82492390273LL;

    t117 = (x473|(x474+(x475>x476)));

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x478 = 57U;
	uint32_t x479 = UINT32_MAX;
	volatile uint16_t x480 = 22U;
	volatile int32_t t118 = -14;

    t118 = (x477|(x478+(x479>x480)));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x481 = -1;
	uint16_t x482 = UINT16_MAX;
	int8_t x483 = -1;
	uint8_t x484 = 2U;
	int32_t t119 = 492669421;

    t119 = (x481|(x482+(x483>x484)));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x488 = 22601U;

    t120 = (x485|(x486+(x487>x488)));

    if (t120 != 32767U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x489 = UINT64_MAX;
	int64_t x491 = INT64_MAX;
	int16_t x492 = -1;
	volatile uint64_t t121 = UINT64_MAX;

    t121 = (x489|(x490+(x491>x492)));

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x493 = INT16_MIN;
	volatile int8_t x494 = -34;
	int32_t x495 = 24057265;
	static int8_t x496 = INT8_MAX;

    t122 = (x493|(x494+(x495>x496)));

    if (t122 != -33) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x497 = INT16_MIN;
	volatile int64_t x498 = 991LL;
	int32_t x499 = -1;
	static int64_t t123 = -33396971970LL;

    t123 = (x497|(x498+(x499>x500)));

    if (t123 != -31777LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x501 = INT16_MAX;
	static int16_t x502 = INT16_MIN;
	static uint8_t x504 = 3U;
	volatile int32_t t124 = 714;

    t124 = (x501|(x502+(x503>x504)));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x505 = 0U;
	int16_t x506 = -1;
	static int16_t x507 = 1100;
	int32_t t125 = -144513506;

    t125 = (x505|(x506+(x507>x508)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int64_t x510 = 10LL;
	volatile int64_t x511 = INT64_MAX;
	int8_t x512 = -1;
	volatile int64_t t126 = 80879777LL;

    t126 = (x509|(x510+(x511>x512)));

    if (t126 != -117LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x513 = -12;
	int16_t x514 = INT16_MIN;
	uint32_t x516 = 1469832U;

    t127 = (x513|(x514+(x515>x516)));

    if (t127 != -11) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x517 = INT8_MIN;
	int64_t x518 = -814454LL;
	int32_t x519 = -1;
	static volatile int64_t t128 = 9462306574779605LL;

    t128 = (x517|(x518+(x519>x520)));

    if (t128 != -118LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x521 = 149U;
	static int32_t x522 = INT32_MIN;
	uint8_t x523 = 65U;
	volatile uint8_t x524 = 3U;
	int32_t t129 = -8350804;

    t129 = (x521|(x522+(x523>x524)));

    if (t129 != -2147483499) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x525 = INT16_MAX;
	static int16_t x526 = 59;
	uint8_t x527 = UINT8_MAX;
	volatile int32_t t130 = 1;

    t130 = (x525|(x526+(x527>x528)));

    if (t130 != 32767) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x529 = UINT8_MAX;
	int32_t x530 = 8436310;
	int32_t x531 = INT32_MIN;
	int16_t x532 = 13;

    t131 = (x529|(x530+(x531>x532)));

    if (t131 != 8436479) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x537 = 19947LL;
	uint8_t x538 = 9U;
	static int8_t x539 = 1;
	uint64_t x540 = UINT64_MAX;
	volatile int64_t t132 = 1048829980483763014LL;

    t132 = (x537|(x538+(x539>x540)));

    if (t132 != 19947LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x541 = 8U;
	uint8_t x542 = 0U;
	int8_t x543 = -3;
	int32_t x544 = INT32_MIN;
	static volatile int32_t t133 = -110479;

    t133 = (x541|(x542+(x543>x544)));

    if (t133 != 9) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x545 = 6108;
	uint64_t x546 = 96062LLU;
	static int8_t x547 = 1;
	uint64_t t134 = 91LLU;

    t134 = (x545|(x546+(x547>x548)));

    if (t134 != 96255LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x550 = -1LL;
	static uint64_t x551 = 337664705104904396LLU;
	int8_t x552 = -1;
	volatile uint64_t t135 = UINT64_MAX;

    t135 = (x549|(x550+(x551>x552)));

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x555 = -18941993;
	static uint64_t t136 = 7100LLU;

    t136 = (x553|(x554+(x555>x556)));

    if (t136 != 117208LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x557 = INT32_MAX;
	uint32_t x558 = 3871U;
	int32_t x559 = INT32_MIN;
	static volatile uint32_t x560 = UINT32_MAX;
	volatile uint32_t t137 = 31U;

    t137 = (x557|(x558+(x559>x560)));

    if (t137 != 2147483647U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x561 = -1;
	int16_t x562 = 58;
	int8_t x563 = INT8_MIN;
	int16_t x564 = INT16_MIN;
	int32_t t138 = 2724;

    t138 = (x561|(x562+(x563>x564)));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x565 = 305331U;
	uint64_t x566 = UINT64_MAX;
	int16_t x567 = 6;
	uint64_t t139 = 468189587842780094LLU;

    t139 = (x565|(x566+(x567>x568)));

    if (t139 != 305331LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x570 = 288U;
	uint64_t x571 = 103514LLU;
	int16_t x572 = INT16_MIN;
	volatile int32_t t140 = -22080;

    t140 = (x569|(x570+(x571>x572)));

    if (t140 != -2147483360) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x574 = 26U;
	static int8_t x576 = INT8_MIN;
	volatile int32_t t141 = 24324;

    t141 = (x573|(x574+(x575>x576)));

    if (t141 != 27) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x577 = INT16_MIN;
	uint32_t x578 = UINT32_MAX;
	uint16_t x579 = UINT16_MAX;
	int16_t x580 = -474;
	volatile uint32_t t142 = 56281980U;

    t142 = (x577|(x578+(x579>x580)));

    if (t142 != 4294934528U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x582 = 106LLU;
	uint64_t x583 = 101493LLU;
	uint16_t x584 = 5U;
	static uint64_t t143 = 1368LLU;

    t143 = (x581|(x582+(x583>x584)));

    if (t143 != 107LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x585 = UINT16_MAX;
	uint64_t x586 = 88LLU;
	volatile uint64_t x588 = 39175482155677LLU;

    t144 = (x585|(x586+(x587>x588)));

    if (t144 != 65535LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x589 = INT8_MAX;
	int8_t x591 = INT8_MIN;
	int32_t x592 = -1;
	static int32_t t145 = INT32_MAX;

    t145 = (x589|(x590+(x591>x592)));

    if (t145 != INT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x593 = INT16_MIN;
	uint64_t x594 = 6188LLU;
	volatile int16_t x595 = 371;
	uint64_t t146 = 12004LLU;

    t146 = (x593|(x594+(x595>x596)));

    if (t146 != 18446744073709525037LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x597 = -14;
	volatile int16_t x598 = -1206;
	int32_t t147 = 31763;

    t147 = (x597|(x598+(x599>x600)));

    if (t147 != -5) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x601 = -1;
	int64_t x602 = INT64_MIN;
	static int16_t x604 = INT16_MIN;
	volatile int64_t t148 = 37LL;

    t148 = (x601|(x602+(x603>x604)));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x605 = 796U;
	int32_t x606 = INT32_MAX;
	uint64_t x607 = UINT64_MAX;
	int16_t x608 = -1;
	uint32_t t149 = 837059U;

    t149 = (x605|(x606+(x607>x608)));

    if (t149 != 2147483647U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x609 = 18U;
	static int64_t t150 = -7753824236627LL;

    t150 = (x609|(x610+(x611>x612)));

    if (t150 != 31LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x613 = INT64_MIN;
	volatile int32_t x615 = INT32_MIN;
	uint64_t x616 = 330LLU;
	volatile int64_t t151 = -39789790582LL;

    t151 = (x613|(x614+(x615>x616)));

    if (t151 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x619 = -6821546LL;
	volatile int16_t x620 = -16;
	volatile int64_t t152 = INT64_MAX;

    t152 = (x617|(x618+(x619>x620)));

    if (t152 != INT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x621 = 11U;
	uint32_t x623 = 454U;
	uint64_t x624 = UINT64_MAX;
	uint32_t t153 = 5561U;

    t153 = (x621|(x622+(x623>x624)));

    if (t153 != 55871U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x625 = INT32_MIN;
	uint32_t x626 = 282284U;
	static volatile int32_t x627 = -1;
	int16_t x628 = INT16_MAX;

    t154 = (x625|(x626+(x627>x628)));

    if (t154 != 2147765932U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x630 = INT64_MAX;
	uint32_t x631 = 20813083U;
	static int64_t x632 = 144323388698082LL;
	volatile int64_t t155 = INT64_MAX;

    t155 = (x629|(x630+(x631>x632)));

    if (t155 != INT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x634 = 6U;
	static uint64_t x635 = 87119LLU;
	uint8_t x636 = 7U;
	volatile int64_t t156 = 1756002509535399LL;

    t156 = (x633|(x634+(x635>x636)));

    if (t156 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x637 = -103441;
	static int64_t x638 = -1LL;
	int16_t x639 = 0;
	uint16_t x640 = 1767U;

    t157 = (x637|(x638+(x639>x640)));

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x641 = UINT8_MAX;
	int32_t x642 = INT32_MAX;
	static int64_t x643 = INT64_MIN;
	volatile uint16_t x644 = 15U;

    t158 = (x641|(x642+(x643>x644)));

    if (t158 != INT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x645 = -1;
	volatile int16_t x646 = -8956;
	int32_t x647 = -1;
	int64_t x648 = 1923829LL;
	volatile int32_t t159 = -15;

    t159 = (x645|(x646+(x647>x648)));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x649 = INT64_MIN;
	int8_t x650 = INT8_MAX;
	static int32_t x652 = INT32_MIN;
	int64_t t160 = 11LL;

    t160 = (x649|(x650+(x651>x652)));

    if (t160 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x654 = -1076297521173187LL;
	volatile int64_t x655 = -1LL;
	uint64_t x656 = 8297LLU;
	volatile int64_t t161 = -92LL;

    t161 = (x653|(x654+(x655>x656)));

    if (t161 != -1076297521168961LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x657 = 4361443635191819LLU;
	uint64_t x658 = 120502137869338LLU;
	int64_t x659 = INT64_MIN;
	static int8_t x660 = INT8_MAX;

    t162 = (x657|(x658+(x659>x660)));

    if (t162 != 4362577591104539LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x662 = -1LL;
	static volatile uint64_t x664 = 121764LLU;

    t163 = (x661|(x662+(x663>x664)));

    if (t163 != INT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x665 = UINT16_MAX;
	uint64_t x667 = 7238718298245LLU;

    t164 = (x665|(x666+(x667>x668)));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x670 = INT8_MIN;
	static int32_t x671 = INT32_MAX;
	int32_t x672 = INT32_MAX;
	volatile int32_t t165 = 1468;

    t165 = (x669|(x670+(x671>x672)));

    if (t165 != -128) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x673 = 48U;
	uint16_t x674 = 1U;
	uint16_t x675 = 79U;
	uint32_t x676 = 7U;
	int32_t t166 = -3;

    t166 = (x673|(x674+(x675>x676)));

    if (t166 != 50) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x677 = INT32_MAX;
	uint64_t x678 = 42273637239125964LLU;
	int16_t x679 = -12307;
	static uint8_t x680 = 26U;
	volatile uint64_t t167 = 305823LLU;

    t167 = (x677|(x678+(x679>x680)));

    if (t167 != 42273638665158655LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x685 = INT8_MIN;
	static int32_t x686 = INT32_MAX;
	int8_t x687 = -1;
	int32_t t168 = -5;

    t168 = (x685|(x686+(x687>x688)));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x689 = INT16_MIN;
	int16_t x690 = -247;
	int32_t t169 = -2;

    t169 = (x689|(x690+(x691>x692)));

    if (t169 != -246) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x693 = 2703U;
	int16_t x694 = -1;
	int16_t x695 = -1;
	uint64_t x696 = UINT64_MAX;
	volatile uint32_t t170 = UINT32_MAX;

    t170 = (x693|(x694+(x695>x696)));

    if (t170 != UINT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x697 = INT64_MIN;
	int32_t x698 = INT32_MIN;
	int32_t x700 = -1;
	int64_t t171 = 251521988LL;

    t171 = (x697|(x698+(x699>x700)));

    if (t171 != -2147483647LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x701 = 0U;
	volatile uint8_t x703 = 0U;
	static volatile int32_t t172 = -1912994;

    t172 = (x701|(x702+(x703>x704)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x705 = -85;
	static volatile uint64_t x706 = 38805860LLU;
	uint8_t x707 = UINT8_MAX;
	int16_t x708 = -228;
	volatile uint64_t t173 = 34665823023581488LLU;

    t173 = (x705|(x706+(x707>x708)));

    if (t173 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x709 = INT64_MIN;
	uint32_t x710 = 1365092990U;
	static uint8_t x711 = UINT8_MAX;
	int32_t x712 = -1;
	volatile int64_t t174 = -50520532361LL;

    t174 = (x709|(x710+(x711>x712)));

    if (t174 != -9223372035489682817LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x713 = INT64_MIN;
	int8_t x714 = 0;
	uint32_t x716 = 8404U;
	volatile int64_t t175 = INT64_MIN;

    t175 = (x713|(x714+(x715>x716)));

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x717 = UINT64_MAX;
	volatile int64_t x718 = INT64_MIN;
	uint32_t x719 = 12U;
	uint16_t x720 = 9841U;

    t176 = (x717|(x718+(x719>x720)));

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x721 = 64LLU;
	uint16_t x722 = 4777U;
	int32_t x723 = 2476;
	volatile int32_t x724 = 355354;
	volatile uint64_t t177 = 4055979019115374LLU;

    t177 = (x721|(x722+(x723>x724)));

    if (t177 != 4841LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x725 = -1;
	static uint64_t x726 = 123792023354323927LLU;
	static volatile int64_t x727 = -13702735589288884LL;
	int16_t x728 = -1;
	volatile uint64_t t178 = UINT64_MAX;

    t178 = (x725|(x726+(x727>x728)));

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int64_t x729 = -1281140933378LL;
	uint16_t x730 = UINT16_MAX;
	uint32_t x732 = 0U;

    t179 = (x729|(x730+(x731>x732)));

    if (t179 != -1281140916225LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x733 = UINT32_MAX;
	static int64_t x734 = INT64_MIN;
	static uint16_t x735 = UINT16_MAX;
	volatile int64_t x736 = INT64_MIN;

    t180 = (x733|(x734+(x735>x736)));

    if (t180 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x741 = 4;
	int64_t x742 = -1LL;
	int8_t x743 = -5;
	static volatile int8_t x744 = 1;
	volatile int64_t t181 = -52853LL;

    t181 = (x741|(x742+(x743>x744)));

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x746 = UINT16_MAX;
	static int32_t x747 = INT32_MIN;
	static uint32_t x748 = 12U;

    t182 = (x745|(x746+(x747>x748)));

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x749 = 1U;
	static volatile int8_t x750 = 1;
	int32_t x751 = INT32_MIN;
	volatile int8_t x752 = -14;
	volatile int32_t t183 = 4070281;

    t183 = (x749|(x750+(x751>x752)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x757 = UINT32_MAX;
	int8_t x758 = 15;
	volatile int8_t x759 = INT8_MIN;
	int16_t x760 = INT16_MIN;
	uint32_t t184 = UINT32_MAX;

    t184 = (x757|(x758+(x759>x760)));

    if (t184 != UINT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x761 = INT8_MIN;
	int16_t x762 = INT16_MAX;

    t185 = (x761|(x762+(x763>x764)));

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x765 = INT32_MAX;
	int16_t x766 = -114;
	uint16_t x767 = UINT16_MAX;
	int16_t x768 = INT16_MIN;

    t186 = (x765|(x766+(x767>x768)));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x769 = INT64_MIN;
	static int16_t x770 = 3768;
	int16_t x771 = -17;
	int32_t x772 = INT32_MIN;
	volatile int64_t t187 = 2812252LL;

    t187 = (x769|(x770+(x771>x772)));

    if (t187 != -9223372036854772039LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint32_t x773 = UINT32_MAX;
	int8_t x775 = INT8_MIN;
	static uint8_t x776 = 0U;
	volatile uint64_t t188 = UINT64_MAX;

    t188 = (x773|(x774+(x775>x776)));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x779 = -1;
	int32_t x780 = 13;
	static int32_t t189 = -707688;

    t189 = (x777|(x778+(x779>x780)));

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x781 = 212805544U;
	int32_t x782 = -1536213;
	int8_t x783 = INT8_MAX;
	volatile int32_t x784 = -1067531;
	volatile uint32_t t190 = 1989693664U;

    t190 = (x781|(x782+(x783>x784)));

    if (t190 != 4293898156U) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x785 = 59U;
	volatile int64_t x786 = INT64_MAX;
	uint32_t x787 = 4U;
	uint32_t x788 = UINT32_MAX;
	int64_t t191 = INT64_MAX;

    t191 = (x785|(x786+(x787>x788)));

    if (t191 != INT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x789 = 995;
	uint32_t x790 = 56U;
	int16_t x791 = INT16_MIN;
	volatile int16_t x792 = -1;
	uint32_t t192 = 2025911467U;

    t192 = (x789|(x790+(x791>x792)));

    if (t192 != 1019U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x794 = 5744558U;
	int32_t x795 = INT32_MIN;
	uint16_t x796 = 459U;
	uint32_t t193 = UINT32_MAX;

    t193 = (x793|(x794+(x795>x796)));

    if (t193 != UINT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x797 = INT64_MAX;
	volatile int64_t t194 = INT64_MAX;

    t194 = (x797|(x798+(x799>x800)));

    if (t194 != INT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x801 = INT16_MAX;
	int16_t x804 = INT16_MIN;
	int32_t t195 = -1720;

    t195 = (x801|(x802+(x803>x804)));

    if (t195 != 32767) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x805 = -510;
	volatile int16_t x806 = INT16_MIN;
	int8_t x807 = INT8_MIN;
	uint64_t x808 = UINT64_MAX;
	volatile int32_t t196 = 8774629;

    t196 = (x805|(x806+(x807>x808)));

    if (t196 != -510) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x809 = INT64_MAX;
	uint16_t x810 = 2470U;
	int16_t x811 = -1;
	volatile int32_t x812 = INT32_MIN;
	int64_t t197 = INT64_MAX;

    t197 = (x809|(x810+(x811>x812)));

    if (t197 != INT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x815 = UINT64_MAX;
	int32_t x816 = INT32_MAX;
	volatile int32_t t198 = 2;

    t198 = (x813|(x814+(x815>x816)));

    if (t198 != -125) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x817 = 1478U;
	uint64_t x818 = 1668547513235730530LLU;
	volatile int32_t x819 = 9210;
	int16_t x820 = 3315;

    t199 = (x817|(x818+(x819>x820)));

    if (t199 != 1668547513235731943LLU) { NG(); } else { ; }
	
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

