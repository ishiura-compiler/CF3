
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

int16_t x1 = INT16_MIN;
uint32_t x3 = 72891387U;
volatile int16_t x4 = 1;
int64_t x6 = -2462LL;
static int32_t t1 = -1;
uint16_t x10 = UINT16_MAX;
volatile int64_t x16 = INT64_MAX;
int32_t t3 = 10047401;
int64_t x17 = 484600116LL;
int64_t x20 = 14312585LL;
int64_t t4 = -65083457LL;
static uint32_t x28 = 2227U;
uint64_t t7 = 1254820951568356LLU;
volatile int64_t x37 = INT64_MIN;
int64_t t8 = 2555203206LL;
static volatile int8_t x44 = -32;
volatile int32_t t9 = 118426511;
int32_t x46 = INT32_MIN;
int32_t t10 = -29149277;
static int8_t x50 = -30;
int8_t x53 = 63;
volatile uint16_t x69 = 25107U;
uint16_t x73 = 5463U;
static uint8_t x76 = 47U;
int32_t x77 = -254118915;
volatile int64_t x78 = -1LL;
int64_t x82 = -1LL;
int64_t x87 = INT64_MIN;
int64_t x93 = -991928130LL;
int64_t t21 = 9229084286544972LL;
static uint64_t x99 = UINT64_MAX;
volatile int64_t t22 = -25LL;
uint16_t x105 = UINT16_MAX;
int32_t t24 = 1;
uint64_t x119 = UINT64_MAX;
static volatile int16_t x124 = -1;
int32_t t28 = -216069330;
uint32_t x127 = 5U;
int8_t x132 = INT8_MIN;
int8_t x135 = 27;
volatile int64_t x141 = INT64_MIN;
uint16_t x142 = 3030U;
int32_t x150 = INT32_MIN;
uint16_t x158 = UINT16_MAX;
volatile int16_t x159 = INT16_MIN;
int16_t x165 = 929;
uint16_t x169 = UINT16_MAX;
int32_t x172 = INT32_MIN;
int16_t x174 = INT16_MAX;
int32_t x177 = INT32_MIN;
int16_t x185 = INT16_MAX;
static uint8_t x187 = UINT8_MAX;
int32_t t44 = -208855;
int32_t x189 = INT32_MIN;
volatile int16_t x191 = -3647;
static uint8_t x197 = 3U;
int32_t t47 = -3899790;
uint16_t x213 = 14U;
int32_t x218 = INT32_MIN;
int64_t x219 = INT64_MIN;
uint64_t x225 = UINT64_MAX;
volatile uint64_t t53 = 1185LLU;
uint16_t x237 = 3U;
volatile int32_t t56 = 2715;
uint8_t x245 = 0U;
uint8_t x248 = UINT8_MAX;
static int32_t x249 = INT32_MIN;
int64_t x250 = INT64_MAX;
uint32_t x254 = 49U;
volatile int32_t x256 = -1;
uint16_t x257 = 2U;
int8_t x260 = -1;
static volatile int32_t t61 = 3;
uint16_t x267 = 592U;
volatile uint64_t x269 = UINT64_MAX;
volatile int32_t x270 = INT32_MIN;
int64_t x271 = 523395683LL;
int64_t x274 = INT64_MAX;
volatile int32_t t64 = -13374;
static uint32_t x284 = UINT32_MAX;
volatile uint16_t x293 = UINT16_MAX;
int32_t x294 = INT32_MAX;
uint32_t x296 = 340U;
volatile int32_t t69 = 2499;
int32_t x305 = -5756;
int32_t t72 = -3990398;
uint32_t x312 = UINT32_MAX;
int32_t t75 = -45;
int8_t x327 = INT8_MAX;
uint32_t x331 = UINT32_MAX;
volatile int16_t x335 = INT16_MAX;
uint64_t x350 = 2007635140963224LLU;
static uint64_t x362 = 51LLU;
uint8_t x369 = 1U;
int64_t x372 = -1LL;
volatile int16_t x374 = INT16_MAX;
uint8_t x379 = 4U;
int64_t t90 = 2LL;
uint64_t x382 = 28LLU;
uint32_t x386 = 237U;
volatile int32_t x388 = INT32_MIN;
int16_t x390 = -4528;
volatile int32_t t95 = 455114;
volatile uint32_t t96 = 322U;
volatile int8_t x406 = INT8_MIN;
uint8_t x407 = UINT8_MAX;
int16_t x410 = 1;
int64_t x411 = -1LL;
volatile int64_t t99 = -482LL;
int16_t x419 = -1;
int32_t x427 = 62857429;
uint16_t x431 = 0U;
uint16_t x432 = UINT16_MAX;
volatile int32_t x434 = INT32_MIN;
volatile uint64_t x437 = 5874117330864LLU;
volatile int32_t t105 = 566353966;
volatile int32_t t106 = 1002006;
int8_t x450 = INT8_MAX;
volatile uint32_t t107 = 7856U;
uint16_t x456 = 12634U;
uint16_t x460 = 123U;
uint16_t x466 = 22U;
volatile int8_t x476 = INT8_MAX;
volatile uint32_t t112 = 51088939U;
volatile int32_t x480 = 18050586;
static int16_t x481 = 60;
static int32_t t114 = 1637;
int32_t x487 = INT32_MAX;
int32_t t115 = 8019;
static volatile int32_t t117 = -1356;
static uint16_t x497 = UINT16_MAX;
int32_t t118 = -188649;
int32_t x504 = INT32_MAX;
volatile int8_t x506 = -3;
static int16_t x508 = -1;
volatile int16_t x509 = 3616;
volatile int16_t x524 = 1;
uint32_t t125 = 14U;
int16_t x530 = INT16_MAX;
uint16_t x531 = UINT16_MAX;
int32_t t127 = -145768470;
int8_t x542 = INT8_MIN;
static volatile int32_t x551 = 20;
int32_t x552 = -1;
static volatile uint64_t t132 = 112628LLU;
volatile int16_t x560 = INT16_MIN;
uint8_t x565 = 4U;
uint32_t x566 = 23051474U;
int32_t x570 = -1;
int32_t t135 = 119410;
static uint64_t x580 = UINT64_MAX;
int32_t x581 = INT32_MIN;
static int16_t x583 = 2019;
volatile int32_t t140 = -200192498;
uint16_t x594 = 2U;
uint32_t t141 = 53976796U;
static int16_t x598 = INT16_MIN;
int8_t x600 = INT8_MAX;
static int64_t x601 = INT64_MIN;
int64_t x603 = INT64_MIN;
volatile int32_t x604 = INT32_MIN;
int32_t t144 = 1;
int8_t x614 = -1;
int64_t x617 = INT64_MIN;
uint32_t x624 = UINT32_MAX;
int32_t t148 = 15243371;
static volatile int16_t x626 = INT16_MIN;
int64_t x629 = 19833702414844119LL;
volatile int8_t x632 = 10;
int8_t x638 = INT8_MIN;
int32_t x639 = -1;
volatile int16_t x644 = INT16_MIN;
int16_t x649 = INT16_MIN;
static uint16_t x653 = 14772U;
uint32_t x654 = 162808541U;
int8_t x657 = 1;
static int32_t t157 = 127061645;
int32_t t158 = 139;
volatile int64_t t160 = -1905419LL;
int32_t x675 = -1;
uint64_t x679 = 459194534LLU;
volatile int32_t t163 = -397909361;
volatile int32_t x688 = 920;
int64_t t164 = 0LL;
uint32_t x703 = 877U;
int64_t x730 = INT64_MAX;
static volatile int16_t x732 = -12442;
int64_t x739 = INT64_MAX;
uint16_t x744 = UINT16_MAX;
volatile int8_t x745 = 0;
uint64_t x749 = 4542LLU;
uint16_t x751 = 897U;
volatile int8_t x758 = 11;
int32_t x759 = -1;
volatile int64_t x772 = INT64_MAX;
int16_t x774 = INT16_MIN;
int32_t x783 = INT32_MAX;
uint32_t x788 = 551U;
uint64_t x791 = 55788LLU;
static volatile int64_t t189 = -150151LL;
static uint8_t x805 = 1U;
static volatile int32_t x807 = INT32_MIN;
int64_t x816 = -1LL;
static volatile int64_t t192 = 7791557071452LL;
int8_t x829 = -1;
volatile int64_t x835 = 427486320LL;
volatile int64_t t195 = INT64_MIN;
volatile int32_t t197 = -227737609;
uint64_t x846 = UINT64_MAX;
int32_t x847 = INT32_MIN;
int8_t x852 = 21;


void f0(void) {
    	uint8_t x2 = 100U;
	int32_t t0 = -20788;

    t0 = (x1+(x2!=(x3!=x4)));

    if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 483U;
	uint32_t x7 = 17U;
	uint8_t x8 = 0U;

    t1 = (x5+(x6!=(x7!=x8)));

    if (t1 != 484) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = UINT8_MAX;
	static int32_t x11 = INT32_MIN;
	volatile uint8_t x12 = 98U;
	int32_t t2 = -1143;

    t2 = (x9+(x10!=(x11!=x12)));

    if (t2 != 256) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = -1;
	volatile int16_t x14 = 1;
	int64_t x15 = INT64_MIN;

    t3 = (x13+(x14!=(x15!=x16)));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = INT8_MIN;
	static uint32_t x19 = 2462895U;

    t4 = (x17+(x18!=(x19!=x20)));

    if (t4 != 484600117LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = 56LLU;
	int32_t x22 = -1;
	int8_t x23 = INT8_MIN;
	uint16_t x24 = 1693U;
	uint64_t t5 = 23774607LLU;

    t5 = (x21+(x22!=(x23!=x24)));

    if (t5 != 57LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	volatile int64_t x26 = INT64_MAX;
	volatile uint32_t x27 = UINT32_MAX;
	volatile int32_t t6 = -278199557;

    t6 = (x25+(x26!=(x27!=x28)));

    if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x29 = 45343110362316322LLU;
	int64_t x30 = -1LL;
	static volatile int32_t x31 = -1;
	volatile int8_t x32 = INT8_MIN;

    t7 = (x29+(x30!=(x31!=x32)));

    if (t7 != 45343110362316323LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x38 = 2532U;
	uint16_t x39 = 79U;
	int32_t x40 = INT32_MAX;

    t8 = (x37+(x38!=(x39!=x40)));

    if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x41 = INT8_MIN;
	int32_t x42 = -137;
	static int64_t x43 = INT64_MIN;

    t9 = (x41+(x42!=(x43!=x44)));

    if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = -45;
	int32_t x47 = 54723;
	int64_t x48 = INT64_MIN;

    t10 = (x45+(x46!=(x47!=x48)));

    if (t10 != -44) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x49 = UINT64_MAX;
	int8_t x51 = -3;
	int32_t x52 = -26179252;
	uint64_t t11 = 488LLU;

    t11 = (x49+(x50!=(x51!=x52)));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x54 = -1;
	static volatile int64_t x55 = INT64_MIN;
	uint16_t x56 = 0U;
	volatile int32_t t12 = -6625349;

    t12 = (x53+(x54!=(x55!=x56)));

    if (t12 != 64) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x61 = 342174893LLU;
	static int16_t x62 = 2;
	static int32_t x63 = -49;
	static int8_t x64 = INT8_MAX;
	volatile uint64_t t13 = 5LLU;

    t13 = (x61+(x62!=(x63!=x64)));

    if (t13 != 342174894LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = INT8_MAX;
	uint16_t x66 = 4U;
	int16_t x67 = INT16_MIN;
	static volatile int64_t x68 = INT64_MIN;
	int32_t t14 = 288200;

    t14 = (x65+(x66!=(x67!=x68)));

    if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x70 = INT64_MIN;
	volatile uint8_t x71 = 0U;
	uint32_t x72 = 922324U;
	int32_t t15 = 14;

    t15 = (x69+(x70!=(x71!=x72)));

    if (t15 != 25108) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x74 = INT64_MAX;
	static int64_t x75 = -10360140284302LL;
	int32_t t16 = 28;

    t16 = (x73+(x74!=(x75!=x76)));

    if (t16 != 5464) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x79 = -1;
	int32_t x80 = -3;
	int32_t t17 = -4;

    t17 = (x77+(x78!=(x79!=x80)));

    if (t17 != -254118914) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x81 = -1;
	int32_t x83 = INT32_MIN;
	int64_t x84 = -1LL;
	volatile int32_t t18 = -228392449;

    t18 = (x81+(x82!=(x83!=x84)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = 78186;
	int8_t x86 = -1;
	int16_t x88 = INT16_MAX;
	volatile int32_t t19 = 125228990;

    t19 = (x85+(x86!=(x87!=x88)));

    if (t19 != 78187) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x89 = 2795U;
	static volatile int32_t x90 = 1;
	int16_t x91 = -1;
	static uint8_t x92 = UINT8_MAX;
	int32_t t20 = 2630118;

    t20 = (x89+(x90!=(x91!=x92)));

    if (t20 != 2795) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x94 = INT8_MAX;
	static int16_t x95 = INT16_MAX;
	int16_t x96 = -1;

    t21 = (x93+(x94!=(x95!=x96)));

    if (t21 != -991928129LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = 233902380947LL;
	int64_t x98 = INT64_MIN;
	int64_t x100 = -15262560LL;

    t22 = (x97+(x98!=(x99!=x100)));

    if (t22 != 233902380948LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = INT16_MIN;
	int16_t x102 = 11564;
	volatile int8_t x103 = INT8_MIN;
	int32_t x104 = INT32_MAX;
	volatile int32_t t23 = 700;

    t23 = (x101+(x102!=(x103!=x104)));

    if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x106 = UINT32_MAX;
	static int16_t x107 = INT16_MIN;
	uint8_t x108 = 4U;

    t24 = (x105+(x106!=(x107!=x108)));

    if (t24 != 65536) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x109 = 57U;
	volatile int64_t x110 = INT64_MAX;
	static int16_t x111 = INT16_MIN;
	static volatile int8_t x112 = 0;
	volatile int32_t t25 = 328484;

    t25 = (x109+(x110!=(x111!=x112)));

    if (t25 != 58) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x113 = INT16_MIN;
	int16_t x114 = 854;
	int64_t x115 = INT64_MAX;
	static volatile int16_t x116 = 31;
	int32_t t26 = 139;

    t26 = (x113+(x114!=(x115!=x116)));

    if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x117 = 2598322039LL;
	volatile int32_t x118 = -5099;
	int64_t x120 = 143706384912LL;
	volatile int64_t t27 = 11844234577854LL;

    t27 = (x117+(x118!=(x119!=x120)));

    if (t27 != 2598322040LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = INT8_MIN;
	volatile int16_t x122 = -3;
	uint32_t x123 = UINT32_MAX;

    t28 = (x121+(x122!=(x123!=x124)));

    if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x125 = 1;
	int64_t x126 = -4459087LL;
	int8_t x128 = INT8_MIN;
	static int32_t t29 = 13589487;

    t29 = (x125+(x126!=(x127!=x128)));

    if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x129 = 8LLU;
	int16_t x130 = INT16_MAX;
	uint16_t x131 = 5795U;
	volatile uint64_t t30 = 1890411994984041LLU;

    t30 = (x129+(x130!=(x131!=x132)));

    if (t30 != 9LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x133 = 53U;
	int8_t x134 = 28;
	static uint8_t x136 = 40U;
	volatile int32_t t31 = 3411;

    t31 = (x133+(x134!=(x135!=x136)));

    if (t31 != 54) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x137 = INT64_MIN;
	volatile int64_t x138 = -346697LL;
	uint32_t x139 = UINT32_MAX;
	int64_t x140 = INT64_MIN;
	volatile int64_t t32 = 20865166473405LL;

    t32 = (x137+(x138!=(x139!=x140)));

    if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x143 = INT32_MAX;
	uint16_t x144 = UINT16_MAX;
	int64_t t33 = 3913388103LL;

    t33 = (x141+(x142!=(x143!=x144)));

    if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = INT8_MIN;
	static int32_t x146 = -1;
	int16_t x147 = -1;
	volatile int16_t x148 = INT16_MIN;
	int32_t t34 = 230173;

    t34 = (x145+(x146!=(x147!=x148)));

    if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x149 = 11U;
	static uint16_t x151 = 147U;
	int16_t x152 = -1;
	volatile int32_t t35 = -341132;

    t35 = (x149+(x150!=(x151!=x152)));

    if (t35 != 12) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x153 = 242;
	uint16_t x154 = 368U;
	int64_t x155 = -12158LL;
	volatile int32_t x156 = INT32_MAX;
	volatile int32_t t36 = -4943;

    t36 = (x153+(x154!=(x155!=x156)));

    if (t36 != 243) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x157 = 0U;
	volatile int64_t x160 = INT64_MIN;
	int32_t t37 = -3875;

    t37 = (x157+(x158!=(x159!=x160)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x161 = 30349037;
	static uint16_t x162 = 201U;
	uint64_t x163 = 54LLU;
	volatile uint16_t x164 = UINT16_MAX;
	int32_t t38 = -59826;

    t38 = (x161+(x162!=(x163!=x164)));

    if (t38 != 30349038) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint32_t x166 = 231U;
	volatile int16_t x167 = INT16_MIN;
	int8_t x168 = -1;
	static volatile int32_t t39 = -45;

    t39 = (x165+(x166!=(x167!=x168)));

    if (t39 != 930) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x170 = 765607733524LL;
	volatile int32_t x171 = INT32_MIN;
	volatile int32_t t40 = 257;

    t40 = (x169+(x170!=(x171!=x172)));

    if (t40 != 65536) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x173 = UINT8_MAX;
	int32_t x175 = INT32_MAX;
	uint32_t x176 = 2410U;
	int32_t t41 = -344617;

    t41 = (x173+(x174!=(x175!=x176)));

    if (t41 != 256) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x178 = INT64_MIN;
	int32_t x179 = -1;
	static int64_t x180 = 55990785LL;
	int32_t t42 = 613939;

    t42 = (x177+(x178!=(x179!=x180)));

    if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x181 = INT32_MIN;
	uint64_t x182 = UINT64_MAX;
	int16_t x183 = -1;
	int64_t x184 = INT64_MIN;
	volatile int32_t t43 = -2043235;

    t43 = (x181+(x182!=(x183!=x184)));

    if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x186 = -1;
	uint8_t x188 = 8U;

    t44 = (x185+(x186!=(x187!=x188)));

    if (t44 != 32768) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x190 = UINT16_MAX;
	uint16_t x192 = UINT16_MAX;
	int32_t t45 = 939636;

    t45 = (x189+(x190!=(x191!=x192)));

    if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x193 = INT64_MIN;
	int32_t x194 = -1;
	volatile uint8_t x195 = 18U;
	volatile int8_t x196 = INT8_MAX;
	static int64_t t46 = -1044557036LL;

    t46 = (x193+(x194!=(x195!=x196)));

    if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x198 = -91295263;
	static volatile int32_t x199 = -23;
	int64_t x200 = 98567165174218LL;

    t47 = (x197+(x198!=(x199!=x200)));

    if (t47 != 4) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x201 = -53;
	uint8_t x202 = UINT8_MAX;
	static uint16_t x203 = 467U;
	uint64_t x204 = 3288113573LLU;
	int32_t t48 = -73;

    t48 = (x201+(x202!=(x203!=x204)));

    if (t48 != -52) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int16_t x209 = -1;
	int64_t x210 = INT64_MIN;
	uint32_t x211 = 687U;
	static int8_t x212 = INT8_MAX;
	int32_t t49 = 49042;

    t49 = (x209+(x210!=(x211!=x212)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x214 = -1;
	int16_t x215 = INT16_MAX;
	int32_t x216 = -20;
	int32_t t50 = 32049060;

    t50 = (x213+(x214!=(x215!=x216)));

    if (t50 != 15) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x217 = INT64_MIN;
	volatile int16_t x220 = 116;
	int64_t t51 = -16275LL;

    t51 = (x217+(x218!=(x219!=x220)));

    if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x221 = INT64_MIN;
	static int32_t x222 = INT32_MIN;
	static int16_t x223 = -1;
	uint64_t x224 = 7LLU;
	int64_t t52 = -1407619018898LL;

    t52 = (x221+(x222!=(x223!=x224)));

    if (t52 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x226 = INT16_MIN;
	int64_t x227 = -1LL;
	int32_t x228 = INT32_MAX;

    t53 = (x225+(x226!=(x227!=x228)));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x229 = 4023860569LLU;
	int32_t x230 = INT32_MAX;
	int32_t x231 = -1;
	int32_t x232 = INT32_MIN;
	volatile uint64_t t54 = 227LLU;

    t54 = (x229+(x230!=(x231!=x232)));

    if (t54 != 4023860570LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x233 = 3929;
	static int8_t x234 = INT8_MAX;
	static uint16_t x235 = 7736U;
	static int32_t x236 = 355;
	volatile int32_t t55 = 222032;

    t55 = (x233+(x234!=(x235!=x236)));

    if (t55 != 3930) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x238 = 17LL;
	int8_t x239 = INT8_MIN;
	int16_t x240 = INT16_MAX;

    t56 = (x237+(x238!=(x239!=x240)));

    if (t56 != 4) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x246 = 0U;
	static uint64_t x247 = UINT64_MAX;
	int32_t t57 = -768;

    t57 = (x245+(x246!=(x247!=x248)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x251 = UINT16_MAX;
	static volatile int16_t x252 = -1;
	volatile int32_t t58 = -433864649;

    t58 = (x249+(x250!=(x251!=x252)));

    if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x253 = INT16_MIN;
	int16_t x255 = 1;
	int32_t t59 = -6101977;

    t59 = (x253+(x254!=(x255!=x256)));

    if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x258 = 1743U;
	static volatile int32_t x259 = 93846950;
	int32_t t60 = 32743643;

    t60 = (x257+(x258!=(x259!=x260)));

    if (t60 != 3) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x261 = -6;
	volatile uint32_t x262 = 3249824U;
	volatile int16_t x263 = 28;
	int16_t x264 = 11;

    t61 = (x261+(x262!=(x263!=x264)));

    if (t61 != -5) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x265 = 1U;
	static int16_t x266 = INT16_MIN;
	static int32_t x268 = -41469694;
	int32_t t62 = -54833466;

    t62 = (x265+(x266!=(x267!=x268)));

    if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x272 = -339656710497462LL;
	uint64_t t63 = 3416007001316120LLU;

    t63 = (x269+(x270!=(x271!=x272)));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x273 = 11U;
	static uint8_t x275 = 5U;
	int16_t x276 = -2229;

    t64 = (x273+(x274!=(x275!=x276)));

    if (t64 != 12) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x277 = INT32_MIN;
	int8_t x278 = 3;
	int64_t x279 = INT64_MAX;
	static int32_t x280 = -1;
	volatile int32_t t65 = -52237784;

    t65 = (x277+(x278!=(x279!=x280)));

    if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x281 = INT32_MIN;
	int8_t x282 = INT8_MIN;
	volatile int64_t x283 = 13222193LL;
	int32_t t66 = 204754535;

    t66 = (x281+(x282!=(x283!=x284)));

    if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x285 = -1;
	static int64_t x286 = INT64_MAX;
	int8_t x287 = -1;
	volatile int64_t x288 = -1LL;
	volatile int32_t t67 = 1186211;

    t67 = (x285+(x286!=(x287!=x288)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x289 = -1;
	int8_t x290 = -9;
	int32_t x291 = INT32_MIN;
	int8_t x292 = -1;
	volatile int32_t t68 = -1;

    t68 = (x289+(x290!=(x291!=x292)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x295 = INT32_MIN;

    t69 = (x293+(x294!=(x295!=x296)));

    if (t69 != 65536) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x297 = -31;
	uint16_t x298 = 32324U;
	int32_t x299 = INT32_MAX;
	static int8_t x300 = INT8_MIN;
	int32_t t70 = 115760;

    t70 = (x297+(x298!=(x299!=x300)));

    if (t70 != -30) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x301 = UINT64_MAX;
	int16_t x302 = -1;
	volatile int16_t x303 = 2403;
	int32_t x304 = INT32_MAX;
	uint64_t t71 = 5575339233518680LLU;

    t71 = (x301+(x302!=(x303!=x304)));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x306 = INT8_MAX;
	static int8_t x307 = -39;
	int8_t x308 = INT8_MIN;

    t72 = (x305+(x306!=(x307!=x308)));

    if (t72 != -5755) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x309 = INT16_MAX;
	int64_t x310 = -351673182942LL;
	volatile uint8_t x311 = 0U;
	static int32_t t73 = 126;

    t73 = (x309+(x310!=(x311!=x312)));

    if (t73 != 32768) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x313 = INT32_MIN;
	static uint16_t x314 = 27U;
	int8_t x315 = -1;
	int32_t x316 = -982687;
	int32_t t74 = 1;

    t74 = (x313+(x314!=(x315!=x316)));

    if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x317 = INT16_MIN;
	int8_t x318 = -1;
	int32_t x319 = -4921;
	uint8_t x320 = 0U;

    t75 = (x317+(x318!=(x319!=x320)));

    if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x321 = INT64_MIN;
	int32_t x322 = -1;
	int32_t x323 = -5830;
	int16_t x324 = INT16_MAX;
	volatile int64_t t76 = -264268082409335603LL;

    t76 = (x321+(x322!=(x323!=x324)));

    if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x325 = INT16_MIN;
	static int32_t x326 = 1590529;
	int8_t x328 = 0;
	static int32_t t77 = 806;

    t77 = (x325+(x326!=(x327!=x328)));

    if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x329 = 7183055533687LLU;
	int64_t x330 = INT64_MAX;
	int8_t x332 = INT8_MIN;
	uint64_t t78 = 1774018870LLU;

    t78 = (x329+(x330!=(x331!=x332)));

    if (t78 != 7183055533688LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x333 = -1;
	int8_t x334 = INT8_MIN;
	int64_t x336 = -173833666570711LL;
	int32_t t79 = 12;

    t79 = (x333+(x334!=(x335!=x336)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x337 = -3236;
	int32_t x338 = INT32_MIN;
	volatile int32_t x339 = 17612867;
	static int16_t x340 = 1839;
	int32_t t80 = -1030;

    t80 = (x337+(x338!=(x339!=x340)));

    if (t80 != -3235) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x341 = 4892581U;
	static int8_t x342 = INT8_MIN;
	uint64_t x343 = 211516LLU;
	int16_t x344 = 1972;
	volatile uint32_t t81 = 96903U;

    t81 = (x341+(x342!=(x343!=x344)));

    if (t81 != 4892582U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x345 = -1LL;
	volatile uint32_t x346 = 50446U;
	int16_t x347 = INT16_MAX;
	int16_t x348 = INT16_MIN;
	volatile int64_t t82 = 1953181LL;

    t82 = (x345+(x346!=(x347!=x348)));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x349 = -102805357723LL;
	static int8_t x351 = INT8_MIN;
	int16_t x352 = 3521;
	volatile int64_t t83 = -64701934637097034LL;

    t83 = (x349+(x350!=(x351!=x352)));

    if (t83 != -102805357722LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x353 = INT32_MIN;
	int64_t x354 = INT64_MIN;
	static volatile int64_t x355 = -1LL;
	int8_t x356 = INT8_MIN;
	static int32_t t84 = -10;

    t84 = (x353+(x354!=(x355!=x356)));

    if (t84 != -2147483647) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x357 = 46;
	int32_t x358 = 394842438;
	int8_t x359 = -1;
	int16_t x360 = -1;
	volatile int32_t t85 = -57212;

    t85 = (x357+(x358!=(x359!=x360)));

    if (t85 != 47) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x361 = 1;
	int64_t x363 = -97170741LL;
	volatile uint32_t x364 = 1034412956U;
	static volatile int32_t t86 = 16549;

    t86 = (x361+(x362!=(x363!=x364)));

    if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x365 = 1U;
	uint64_t x366 = 891519606008875LLU;
	uint16_t x367 = 19935U;
	volatile int8_t x368 = -47;
	static uint32_t t87 = 259026U;

    t87 = (x365+(x366!=(x367!=x368)));

    if (t87 != 2U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x370 = INT64_MAX;
	int64_t x371 = INT64_MIN;
	static int32_t t88 = 1;

    t88 = (x369+(x370!=(x371!=x372)));

    if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x373 = 57U;
	uint16_t x375 = UINT16_MAX;
	int16_t x376 = INT16_MAX;
	int32_t t89 = 1;

    t89 = (x373+(x374!=(x375!=x376)));

    if (t89 != 58) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x377 = 6998750LL;
	uint64_t x378 = UINT64_MAX;
	uint16_t x380 = 7657U;

    t90 = (x377+(x378!=(x379!=x380)));

    if (t90 != 6998751LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x381 = INT8_MIN;
	uint16_t x383 = 233U;
	static volatile uint8_t x384 = 67U;
	static int32_t t91 = -13572;

    t91 = (x381+(x382!=(x383!=x384)));

    if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x385 = -1;
	uint16_t x387 = 2560U;
	int32_t t92 = 73;

    t92 = (x385+(x386!=(x387!=x388)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x389 = 713U;
	volatile int8_t x391 = INT8_MIN;
	uint32_t x392 = 8U;
	volatile uint32_t t93 = 2605U;

    t93 = (x389+(x390!=(x391!=x392)));

    if (t93 != 714U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x393 = -2;
	int16_t x394 = -13170;
	uint16_t x395 = 898U;
	volatile int64_t x396 = 863644LL;
	volatile int32_t t94 = 7253;

    t94 = (x393+(x394!=(x395!=x396)));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x397 = INT32_MIN;
	static volatile uint16_t x398 = UINT16_MAX;
	uint64_t x399 = 16379928LLU;
	static volatile int8_t x400 = -1;

    t95 = (x397+(x398!=(x399!=x400)));

    if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x401 = 53931010U;
	int64_t x402 = INT64_MIN;
	static int16_t x403 = INT16_MAX;
	int64_t x404 = INT64_MAX;

    t96 = (x401+(x402!=(x403!=x404)));

    if (t96 != 53931011U) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x405 = 5U;
	int8_t x408 = -7;
	volatile int32_t t97 = 47744932;

    t97 = (x405+(x406!=(x407!=x408)));

    if (t97 != 6) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x409 = INT16_MIN;
	int32_t x412 = -1;
	static volatile int32_t t98 = 98;

    t98 = (x409+(x410!=(x411!=x412)));

    if (t98 != -32767) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x413 = INT64_MIN;
	static int32_t x414 = INT32_MIN;
	int32_t x415 = INT32_MIN;
	static int8_t x416 = INT8_MIN;

    t99 = (x413+(x414!=(x415!=x416)));

    if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x417 = INT8_MAX;
	uint16_t x418 = UINT16_MAX;
	volatile int32_t x420 = -4529624;
	static int32_t t100 = 0;

    t100 = (x417+(x418!=(x419!=x420)));

    if (t100 != 128) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x425 = UINT32_MAX;
	static uint32_t x426 = 1088678U;
	uint8_t x428 = UINT8_MAX;
	uint32_t t101 = 999U;

    t101 = (x425+(x426!=(x427!=x428)));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x429 = 7901U;
	int64_t x430 = -145066929322897971LL;
	int32_t t102 = 105350117;

    t102 = (x429+(x430!=(x431!=x432)));

    if (t102 != 7902) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x433 = INT32_MIN;
	uint32_t x435 = UINT32_MAX;
	int64_t x436 = INT64_MAX;
	volatile int32_t t103 = 1292362;

    t103 = (x433+(x434!=(x435!=x436)));

    if (t103 != -2147483647) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x438 = 5209345U;
	int16_t x439 = INT16_MAX;
	int32_t x440 = -1;
	uint64_t t104 = 3LLU;

    t104 = (x437+(x438!=(x439!=x440)));

    if (t104 != 5874117330865LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x441 = -1;
	int64_t x442 = 36563845LL;
	int32_t x443 = -1;
	int16_t x444 = -237;

    t105 = (x441+(x442!=(x443!=x444)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x445 = -62;
	uint16_t x446 = UINT16_MAX;
	static volatile int64_t x447 = -1LL;
	static volatile uint64_t x448 = UINT64_MAX;

    t106 = (x445+(x446!=(x447!=x448)));

    if (t106 != -61) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x449 = 7U;
	volatile uint8_t x451 = 46U;
	int8_t x452 = -12;

    t107 = (x449+(x450!=(x451!=x452)));

    if (t107 != 8U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x453 = INT8_MAX;
	static int32_t x454 = 125343;
	int32_t x455 = -15460892;
	int32_t t108 = -2115;

    t108 = (x453+(x454!=(x455!=x456)));

    if (t108 != 128) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x457 = INT64_MIN;
	volatile uint32_t x458 = 1980385595U;
	volatile uint64_t x459 = 93740157136LLU;
	int64_t t109 = 280288480782072139LL;

    t109 = (x457+(x458!=(x459!=x460)));

    if (t109 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x461 = -1LL;
	static int64_t x462 = -1529172702353LL;
	static int64_t x463 = INT64_MIN;
	static int16_t x464 = INT16_MIN;
	volatile int64_t t110 = 590957LL;

    t110 = (x461+(x462!=(x463!=x464)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x465 = UINT64_MAX;
	int8_t x467 = 0;
	int32_t x468 = 2324996;
	uint64_t t111 = 60545432214LLU;

    t111 = (x465+(x466!=(x467!=x468)));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x473 = 1U;
	int8_t x474 = INT8_MIN;
	int32_t x475 = INT32_MIN;

    t112 = (x473+(x474!=(x475!=x476)));

    if (t112 != 2U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x477 = INT32_MIN;
	volatile int8_t x478 = -1;
	volatile int16_t x479 = INT16_MIN;
	static volatile int32_t t113 = 119676821;

    t113 = (x477+(x478!=(x479!=x480)));

    if (t113 != -2147483647) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x482 = 6U;
	static int64_t x483 = -1LL;
	int8_t x484 = INT8_MIN;

    t114 = (x481+(x482!=(x483!=x484)));

    if (t114 != 61) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x485 = UINT16_MAX;
	int32_t x486 = INT32_MIN;
	static uint64_t x488 = UINT64_MAX;

    t115 = (x485+(x486!=(x487!=x488)));

    if (t115 != 65536) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x489 = 68U;
	volatile int32_t x490 = 790;
	int8_t x491 = -1;
	volatile int64_t x492 = INT64_MIN;
	int32_t t116 = 9910602;

    t116 = (x489+(x490!=(x491!=x492)));

    if (t116 != 69) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x493 = INT16_MAX;
	static int64_t x494 = -1LL;
	int32_t x495 = 16;
	int8_t x496 = -1;

    t117 = (x493+(x494!=(x495!=x496)));

    if (t117 != 32768) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x498 = 20599295;
	static int16_t x499 = INT16_MIN;
	volatile uint16_t x500 = 9U;

    t118 = (x497+(x498!=(x499!=x500)));

    if (t118 != 65536) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x501 = INT8_MIN;
	static volatile uint64_t x502 = 63528LLU;
	int16_t x503 = 2781;
	int32_t t119 = -1559586;

    t119 = (x501+(x502!=(x503!=x504)));

    if (t119 != -127) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x505 = INT64_MIN;
	int32_t x507 = INT32_MIN;
	int64_t t120 = -4922096944348LL;

    t120 = (x505+(x506!=(x507!=x508)));

    if (t120 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x510 = INT8_MIN;
	int64_t x511 = -14324110719542LL;
	uint8_t x512 = UINT8_MAX;
	volatile int32_t t121 = 12;

    t121 = (x509+(x510!=(x511!=x512)));

    if (t121 != 3617) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x513 = -1;
	static int32_t x514 = -886474;
	uint32_t x515 = 22791009U;
	volatile int64_t x516 = INT64_MAX;
	int32_t t122 = -3691;

    t122 = (x513+(x514!=(x515!=x516)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x517 = 1;
	int32_t x518 = INT32_MIN;
	volatile int16_t x519 = INT16_MAX;
	static volatile int8_t x520 = -6;
	static int32_t t123 = 7;

    t123 = (x517+(x518!=(x519!=x520)));

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x521 = INT64_MIN;
	int64_t x522 = -1LL;
	int16_t x523 = INT16_MAX;
	static volatile int64_t t124 = -894LL;

    t124 = (x521+(x522!=(x523!=x524)));

    if (t124 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x525 = UINT32_MAX;
	int8_t x526 = 0;
	volatile int64_t x527 = -1LL;
	volatile int32_t x528 = INT32_MIN;

    t125 = (x525+(x526!=(x527!=x528)));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x529 = 6106U;
	static int32_t x532 = -490;
	static int32_t t126 = -3;

    t126 = (x529+(x530!=(x531!=x532)));

    if (t126 != 6107) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x533 = 0U;
	static uint8_t x534 = 7U;
	int32_t x535 = -1;
	uint8_t x536 = 24U;

    t127 = (x533+(x534!=(x535!=x536)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x537 = INT64_MIN;
	int8_t x538 = 1;
	int8_t x539 = INT8_MIN;
	int8_t x540 = INT8_MIN;
	int64_t t128 = -1280640902905880LL;

    t128 = (x537+(x538!=(x539!=x540)));

    if (t128 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x541 = 17349U;
	int16_t x543 = INT16_MIN;
	volatile int16_t x544 = INT16_MIN;
	static uint32_t t129 = 1000130646U;

    t129 = (x541+(x542!=(x543!=x544)));

    if (t129 != 17350U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x545 = 253252U;
	int8_t x546 = 1;
	volatile uint16_t x547 = UINT16_MAX;
	static int32_t x548 = 1;
	static uint32_t t130 = 98U;

    t130 = (x545+(x546!=(x547!=x548)));

    if (t130 != 253252U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x549 = -1;
	volatile int64_t x550 = INT64_MIN;
	volatile int32_t t131 = 449127;

    t131 = (x549+(x550!=(x551!=x552)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x553 = 17918650345LLU;
	int16_t x554 = 5677;
	int8_t x555 = INT8_MAX;
	uint64_t x556 = UINT64_MAX;

    t132 = (x553+(x554!=(x555!=x556)));

    if (t132 != 17918650346LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x557 = 4;
	volatile int8_t x558 = INT8_MIN;
	volatile int8_t x559 = INT8_MIN;
	volatile int32_t t133 = -4;

    t133 = (x557+(x558!=(x559!=x560)));

    if (t133 != 5) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x567 = INT64_MAX;
	uint32_t x568 = UINT32_MAX;
	static int32_t t134 = -4275827;

    t134 = (x565+(x566!=(x567!=x568)));

    if (t134 != 5) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x569 = -3;
	static volatile uint32_t x571 = 353U;
	int32_t x572 = INT32_MAX;

    t135 = (x569+(x570!=(x571!=x572)));

    if (t135 != -2) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x573 = -604LL;
	static uint16_t x574 = 2974U;
	uint64_t x575 = 112212705119362268LLU;
	int16_t x576 = INT16_MAX;
	volatile int64_t t136 = -82418324LL;

    t136 = (x573+(x574!=(x575!=x576)));

    if (t136 != -603LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x577 = INT8_MAX;
	static volatile uint8_t x578 = UINT8_MAX;
	static volatile int8_t x579 = INT8_MIN;
	volatile int32_t t137 = 124;

    t137 = (x577+(x578!=(x579!=x580)));

    if (t137 != 128) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x582 = INT64_MAX;
	int64_t x584 = -6012570LL;
	static int32_t t138 = 699167;

    t138 = (x581+(x582!=(x583!=x584)));

    if (t138 != -2147483647) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x585 = 5417U;
	uint8_t x586 = UINT8_MAX;
	static int64_t x587 = INT64_MIN;
	int8_t x588 = INT8_MIN;
	int32_t t139 = 12;

    t139 = (x585+(x586!=(x587!=x588)));

    if (t139 != 5418) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x589 = INT8_MIN;
	int8_t x590 = INT8_MIN;
	int64_t x591 = INT64_MAX;
	volatile int64_t x592 = -51852LL;

    t140 = (x589+(x590!=(x591!=x592)));

    if (t140 != -127) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x593 = 2863U;
	volatile int16_t x595 = INT16_MIN;
	int64_t x596 = -56813095339LL;

    t141 = (x593+(x594!=(x595!=x596)));

    if (t141 != 2864U) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x597 = 372627;
	static int8_t x599 = -1;
	volatile int32_t t142 = 203588;

    t142 = (x597+(x598!=(x599!=x600)));

    if (t142 != 372628) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x602 = -2;
	int64_t t143 = 218668694817680473LL;

    t143 = (x601+(x602!=(x603!=x604)));

    if (t143 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x605 = -1;
	static int64_t x606 = -1LL;
	int64_t x607 = 6163809351279616LL;
	uint32_t x608 = UINT32_MAX;

    t144 = (x605+(x606!=(x607!=x608)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x609 = -1;
	volatile int8_t x610 = INT8_MIN;
	static volatile uint64_t x611 = UINT64_MAX;
	static int16_t x612 = INT16_MIN;
	int32_t t145 = 55146;

    t145 = (x609+(x610!=(x611!=x612)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x613 = INT8_MIN;
	uint32_t x615 = 6U;
	volatile int8_t x616 = INT8_MIN;
	volatile int32_t t146 = -125551;

    t146 = (x613+(x614!=(x615!=x616)));

    if (t146 != -127) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x618 = 16689437444687LLU;
	uint16_t x619 = 56U;
	uint32_t x620 = 3U;
	int64_t t147 = -29671LL;

    t147 = (x617+(x618!=(x619!=x620)));

    if (t147 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x621 = 1U;
	uint32_t x622 = UINT32_MAX;
	static int32_t x623 = -223;

    t148 = (x621+(x622!=(x623!=x624)));

    if (t148 != 2) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x625 = UINT16_MAX;
	uint8_t x627 = 26U;
	int64_t x628 = 855775LL;
	static volatile int32_t t149 = -895667;

    t149 = (x625+(x626!=(x627!=x628)));

    if (t149 != 65536) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x630 = INT64_MIN;
	int16_t x631 = INT16_MAX;
	volatile int64_t t150 = -3LL;

    t150 = (x629+(x630!=(x631!=x632)));

    if (t150 != 19833702414844120LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x633 = UINT32_MAX;
	uint8_t x634 = 35U;
	int64_t x635 = INT64_MAX;
	volatile int8_t x636 = 0;
	volatile uint32_t t151 = 60U;

    t151 = (x633+(x634!=(x635!=x636)));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x637 = INT32_MIN;
	int8_t x640 = 3;
	int32_t t152 = -142558869;

    t152 = (x637+(x638!=(x639!=x640)));

    if (t152 != -2147483647) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x641 = UINT32_MAX;
	int64_t x642 = -1LL;
	static int16_t x643 = -1;
	uint32_t t153 = 6U;

    t153 = (x641+(x642!=(x643!=x644)));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x645 = -1;
	int16_t x646 = 7;
	static volatile int32_t x647 = -1;
	uint16_t x648 = UINT16_MAX;
	int32_t t154 = -117790051;

    t154 = (x645+(x646!=(x647!=x648)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x650 = INT32_MIN;
	int64_t x651 = -1LL;
	int16_t x652 = -1;
	volatile int32_t t155 = 8206805;

    t155 = (x649+(x650!=(x651!=x652)));

    if (t155 != -32767) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x655 = 5U;
	int64_t x656 = INT64_MAX;
	volatile int32_t t156 = -850102;

    t156 = (x653+(x654!=(x655!=x656)));

    if (t156 != 14773) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x658 = INT16_MAX;
	int32_t x659 = INT32_MIN;
	int16_t x660 = 1018;

    t157 = (x657+(x658!=(x659!=x660)));

    if (t157 != 2) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x661 = 0U;
	uint64_t x662 = UINT64_MAX;
	volatile int32_t x663 = INT32_MIN;
	int8_t x664 = 0;

    t158 = (x661+(x662!=(x663!=x664)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x665 = INT16_MIN;
	volatile uint16_t x666 = 1U;
	int32_t x667 = INT32_MAX;
	uint32_t x668 = UINT32_MAX;
	volatile int32_t t159 = -27040;

    t159 = (x665+(x666!=(x667!=x668)));

    if (t159 != -32768) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x669 = -463818489LL;
	uint16_t x670 = UINT16_MAX;
	int16_t x671 = -1;
	int64_t x672 = INT64_MIN;

    t160 = (x669+(x670!=(x671!=x672)));

    if (t160 != -463818488LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x673 = -19;
	volatile uint64_t x674 = 1539LLU;
	static int64_t x676 = -176217LL;
	int32_t t161 = -23;

    t161 = (x673+(x674!=(x675!=x676)));

    if (t161 != -18) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x677 = INT8_MAX;
	static volatile int32_t x678 = INT32_MAX;
	uint32_t x680 = 28404U;
	volatile int32_t t162 = 1;

    t162 = (x677+(x678!=(x679!=x680)));

    if (t162 != 128) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x681 = 58U;
	static int16_t x682 = -11255;
	int8_t x683 = -55;
	static uint32_t x684 = 8U;

    t163 = (x681+(x682!=(x683!=x684)));

    if (t163 != 59) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x685 = -5761909089LL;
	int8_t x686 = 0;
	static volatile int8_t x687 = -1;

    t164 = (x685+(x686!=(x687!=x688)));

    if (t164 != -5761909088LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x689 = 28;
	int16_t x690 = 219;
	volatile uint64_t x691 = 7730579085566LLU;
	int16_t x692 = 187;
	static int32_t t165 = -458127;

    t165 = (x689+(x690!=(x691!=x692)));

    if (t165 != 29) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x693 = INT64_MIN;
	int32_t x694 = -16;
	volatile int64_t x695 = -1LL;
	int8_t x696 = 1;
	volatile int64_t t166 = 15718901LL;

    t166 = (x693+(x694!=(x695!=x696)));

    if (t166 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x697 = INT64_MIN;
	int16_t x698 = 6;
	int8_t x699 = -1;
	int64_t x700 = INT64_MIN;
	volatile int64_t t167 = -4704063516LL;

    t167 = (x697+(x698!=(x699!=x700)));

    if (t167 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x701 = UINT8_MAX;
	volatile int8_t x702 = 0;
	int64_t x704 = INT64_MAX;
	static volatile int32_t t168 = -828695;

    t168 = (x701+(x702!=(x703!=x704)));

    if (t168 != 256) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x705 = 1231724LLU;
	volatile int32_t x706 = INT32_MIN;
	int16_t x707 = INT16_MIN;
	uint16_t x708 = 463U;
	volatile uint64_t t169 = 564098246526LLU;

    t169 = (x705+(x706!=(x707!=x708)));

    if (t169 != 1231725LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x709 = 13U;
	int8_t x710 = 29;
	int64_t x711 = INT64_MIN;
	int64_t x712 = 148LL;
	static volatile int32_t t170 = 86316613;

    t170 = (x709+(x710!=(x711!=x712)));

    if (t170 != 14) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x717 = -1;
	volatile int64_t x718 = -1443612519LL;
	int32_t x719 = -243341;
	int64_t x720 = -1LL;
	volatile int32_t t171 = -8144;

    t171 = (x717+(x718!=(x719!=x720)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x725 = -37;
	uint8_t x726 = 2U;
	int32_t x727 = INT32_MAX;
	static uint32_t x728 = UINT32_MAX;
	volatile int32_t t172 = 1636;

    t172 = (x725+(x726!=(x727!=x728)));

    if (t172 != -36) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x729 = 182U;
	uint16_t x731 = UINT16_MAX;
	int32_t t173 = 273936810;

    t173 = (x729+(x730!=(x731!=x732)));

    if (t173 != 183) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x733 = 3423847129609LLU;
	int8_t x734 = INT8_MIN;
	int64_t x735 = -9545622600398LL;
	int64_t x736 = INT64_MAX;
	uint64_t t174 = 1LLU;

    t174 = (x733+(x734!=(x735!=x736)));

    if (t174 != 3423847129610LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x737 = 2;
	int8_t x738 = -14;
	uint32_t x740 = UINT32_MAX;
	volatile int32_t t175 = -1440946;

    t175 = (x737+(x738!=(x739!=x740)));

    if (t175 != 3) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x741 = 15;
	int64_t x742 = INT64_MIN;
	uint16_t x743 = 9U;
	int32_t t176 = -592;

    t176 = (x741+(x742!=(x743!=x744)));

    if (t176 != 16) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x746 = UINT64_MAX;
	int64_t x747 = INT64_MIN;
	int32_t x748 = 22735;
	volatile int32_t t177 = 18175;

    t177 = (x745+(x746!=(x747!=x748)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x750 = INT8_MIN;
	volatile uint8_t x752 = UINT8_MAX;
	uint64_t t178 = 417009LLU;

    t178 = (x749+(x750!=(x751!=x752)));

    if (t178 != 4543LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x753 = -51;
	int8_t x754 = 0;
	uint16_t x755 = UINT16_MAX;
	volatile int16_t x756 = INT16_MIN;
	volatile int32_t t179 = -43549;

    t179 = (x753+(x754!=(x755!=x756)));

    if (t179 != -50) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x757 = INT32_MIN;
	uint32_t x760 = UINT32_MAX;
	int32_t t180 = 1;

    t180 = (x757+(x758!=(x759!=x760)));

    if (t180 != -2147483647) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x761 = INT16_MIN;
	static int32_t x762 = -208;
	int32_t x763 = INT32_MIN;
	int16_t x764 = INT16_MIN;
	volatile int32_t t181 = 116;

    t181 = (x761+(x762!=(x763!=x764)));

    if (t181 != -32767) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x765 = 86U;
	volatile uint8_t x766 = 11U;
	int64_t x767 = -186982327714LL;
	int16_t x768 = -1;
	volatile uint32_t t182 = 133870116U;

    t182 = (x765+(x766!=(x767!=x768)));

    if (t182 != 87U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x769 = UINT16_MAX;
	int64_t x770 = 336039LL;
	uint8_t x771 = 27U;
	volatile int32_t t183 = -232293;

    t183 = (x769+(x770!=(x771!=x772)));

    if (t183 != 65536) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x773 = 136U;
	int8_t x775 = INT8_MAX;
	static volatile int16_t x776 = -1;
	volatile uint32_t t184 = 6183056U;

    t184 = (x773+(x774!=(x775!=x776)));

    if (t184 != 137U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x781 = INT8_MIN;
	static uint16_t x782 = 13939U;
	int64_t x784 = 72166591491027980LL;
	int32_t t185 = -13318;

    t185 = (x781+(x782!=(x783!=x784)));

    if (t185 != -127) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x785 = 5112335397812997LL;
	int64_t x786 = 187527287630LL;
	int8_t x787 = INT8_MIN;
	int64_t t186 = 196870315235760051LL;

    t186 = (x785+(x786!=(x787!=x788)));

    if (t186 != 5112335397812998LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x789 = 56U;
	static int8_t x790 = INT8_MIN;
	static int16_t x792 = 1;
	volatile uint32_t t187 = 20U;

    t187 = (x789+(x790!=(x791!=x792)));

    if (t187 != 57U) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x793 = 17735LL;
	int32_t x794 = INT32_MIN;
	static int16_t x795 = 0;
	static uint8_t x796 = UINT8_MAX;
	int64_t t188 = 46938616LL;

    t188 = (x793+(x794!=(x795!=x796)));

    if (t188 != 17736LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x801 = -1LL;
	static uint64_t x802 = 6845LLU;
	static int8_t x803 = INT8_MIN;
	uint32_t x804 = 20762U;

    t189 = (x801+(x802!=(x803!=x804)));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x806 = 6512U;
	int32_t x808 = 953657;
	static volatile int32_t t190 = -6;

    t190 = (x805+(x806!=(x807!=x808)));

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x809 = INT8_MIN;
	int32_t x810 = INT32_MAX;
	volatile int32_t x811 = INT32_MIN;
	volatile int64_t x812 = INT64_MIN;
	int32_t t191 = 155301;

    t191 = (x809+(x810!=(x811!=x812)));

    if (t191 != -127) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x813 = -215334398679058644LL;
	int32_t x814 = INT32_MIN;
	int16_t x815 = INT16_MAX;

    t192 = (x813+(x814!=(x815!=x816)));

    if (t192 != -215334398679058643LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x817 = UINT32_MAX;
	int8_t x818 = INT8_MIN;
	static volatile int16_t x819 = INT16_MAX;
	volatile uint32_t x820 = 2263U;
	uint32_t t193 = 506U;

    t193 = (x817+(x818!=(x819!=x820)));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x830 = INT64_MIN;
	volatile int32_t x831 = INT32_MIN;
	uint8_t x832 = UINT8_MAX;
	int32_t t194 = -27;

    t194 = (x829+(x830!=(x831!=x832)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x833 = INT64_MIN;
	volatile uint8_t x834 = 1U;
	int32_t x836 = -1;

    t195 = (x833+(x834!=(x835!=x836)));

    if (t195 != INT64_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x837 = -309;
	int16_t x838 = INT16_MIN;
	int8_t x839 = INT8_MAX;
	volatile uint16_t x840 = UINT16_MAX;
	int32_t t196 = -129453;

    t196 = (x837+(x838!=(x839!=x840)));

    if (t196 != -308) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x841 = INT32_MIN;
	static int64_t x842 = -23097LL;
	uint64_t x843 = UINT64_MAX;
	uint64_t x844 = UINT64_MAX;

    t197 = (x841+(x842!=(x843!=x844)));

    if (t197 != -2147483647) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x845 = INT8_MAX;
	volatile int8_t x848 = -1;
	volatile int32_t t198 = 31583503;

    t198 = (x845+(x846!=(x847!=x848)));

    if (t198 != 128) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x849 = -3410;
	volatile uint8_t x850 = 5U;
	int16_t x851 = INT16_MIN;
	static volatile int32_t t199 = -56755591;

    t199 = (x849+(x850!=(x851!=x852)));

    if (t199 != -3409) { NG(); } else { ; }
	
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

