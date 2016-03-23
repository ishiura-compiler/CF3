
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

int64_t x5 = INT64_MIN;
static int16_t x10 = -956;
uint8_t x15 = 0U;
int16_t x17 = 0;
static int16_t x21 = INT16_MIN;
static uint64_t x24 = UINT64_MAX;
int16_t x25 = INT16_MAX;
int16_t x34 = -1;
volatile int16_t x37 = INT16_MIN;
int8_t x41 = INT8_MIN;
volatile int8_t x42 = INT8_MIN;
int64_t x43 = INT64_MAX;
static int32_t t11 = 43;
uint64_t x50 = 7837857254002277656LLU;
volatile uint64_t t13 = 3738496288916353206LLU;
uint32_t x65 = UINT32_MAX;
int64_t t16 = INT64_MAX;
int16_t x75 = INT16_MAX;
static uint64_t x76 = 216LLU;
static uint64_t x80 = 138072LLU;
uint64_t x83 = 267096389520828LLU;
int8_t x88 = -3;
int16_t x90 = INT16_MIN;
int8_t x96 = 1;
static volatile int64_t x101 = -49463LL;
static int16_t x115 = 7772;
uint32_t t27 = 1025U;
int8_t x118 = -1;
int32_t t29 = -2022351;
int8_t x135 = INT8_MAX;
int32_t x136 = INT32_MIN;
uint16_t x137 = 13507U;
int32_t t33 = INT32_MIN;
int32_t x149 = INT32_MIN;
uint32_t x151 = UINT32_MAX;
volatile int32_t t34 = 25;
static uint64_t t35 = 29299051403802420LLU;
uint8_t x173 = UINT8_MAX;
uint16_t x174 = 1U;
volatile uint64_t t41 = 2067006153306138463LLU;
static uint32_t x185 = 9062020U;
volatile uint64_t t45 = 1367755845569925995LLU;
static volatile int8_t x198 = -1;
int8_t x201 = -1;
int64_t x202 = INT64_MAX;
volatile int64_t t47 = INT64_MAX;
static int32_t x205 = INT32_MAX;
static int8_t x207 = -1;
uint8_t x210 = 2U;
int64_t x211 = 463407LL;
int64_t x218 = INT64_MAX;
volatile int64_t x220 = -1LL;
uint16_t x225 = 78U;
volatile int64_t t53 = -4861952077LL;
int32_t x236 = INT32_MAX;
uint16_t x245 = UINT16_MAX;
volatile int64_t x248 = -1118LL;
static int32_t t57 = 866;
int32_t x254 = INT32_MIN;
int64_t x258 = -1LL;
int32_t x269 = -1;
volatile int16_t x270 = INT16_MIN;
volatile int32_t t64 = -15;
uint16_t x278 = 2727U;
uint16_t x282 = 1U;
int64_t x284 = INT64_MIN;
volatile int32_t t66 = -91;
int64_t x286 = -8780333616105LL;
int8_t x288 = INT8_MIN;
int64_t t67 = -1409022LL;
int32_t x293 = -2;
int32_t x295 = INT32_MIN;
int64_t x297 = INT64_MAX;
int64_t x299 = 9550894877732575LL;
static int8_t x301 = -1;
uint16_t x304 = UINT16_MAX;
volatile int64_t x307 = 15284164069LL;
static uint16_t x309 = 24353U;
int64_t x311 = INT64_MIN;
uint8_t x318 = 4U;
int32_t x320 = INT32_MAX;
uint64_t x325 = UINT64_MAX;
uint64_t t77 = 232738LLU;
uint64_t x334 = 3297LLU;
int16_t x337 = INT16_MIN;
int16_t x349 = -1;
int32_t x350 = 384404859;
int8_t x353 = -23;
int16_t x356 = -24;
static int8_t x363 = 0;
int64_t x366 = INT64_MIN;
int16_t x370 = INT16_MAX;
uint32_t x375 = 3315283U;
static int32_t x376 = 1;
volatile int16_t x377 = INT16_MAX;
uint32_t x378 = 922929U;
int64_t x381 = -1LL;
uint64_t x387 = 29729366448LLU;
volatile int64_t x388 = -60901275LL;
volatile int64_t x409 = 4645063187LL;
uint32_t x413 = 3392761U;
int64_t x425 = -1LL;
int32_t x428 = -1020;
int32_t x433 = INT32_MIN;
int16_t x437 = INT16_MAX;
volatile int32_t x440 = -1;
volatile int32_t t104 = 65078507;
int64_t x442 = INT64_MAX;
int8_t x446 = INT8_MIN;
int16_t x455 = -700;
int8_t x458 = -1;
static int64_t x465 = INT64_MAX;
volatile uint16_t x478 = 56U;
static uint16_t x484 = UINT16_MAX;
int16_t x493 = INT16_MIN;
static int8_t x496 = 0;
int8_t x497 = 10;
uint16_t x499 = 823U;
int32_t x503 = INT32_MAX;
int32_t x508 = INT32_MAX;
volatile int16_t x511 = INT16_MAX;
int64_t t122 = -16048987272LL;
int8_t x534 = INT8_MAX;
int64_t x536 = -443300308LL;
volatile int64_t x541 = -381216487191LL;
int32_t t132 = 3152664;
int8_t x556 = 31;
int16_t x559 = -3743;
int64_t x560 = -1LL;
uint64_t t134 = 1LLU;
int16_t x561 = 3;
uint32_t x564 = 702U;
int64_t x585 = -14LL;
volatile int64_t t141 = 189537LL;
int32_t x590 = INT32_MAX;
static int8_t x600 = INT8_MIN;
int8_t x605 = INT8_MIN;
int32_t t148 = -19842;
static int32_t t149 = 107378;
int32_t x625 = 4638011;
uint8_t x626 = 1U;
volatile int32_t t150 = 695828;
int64_t x629 = INT64_MAX;
static volatile int64_t x651 = -182423070LL;
volatile int64_t x654 = 10475507LL;
int64_t t157 = 3LL;
uint64_t x657 = 7LLU;
int16_t x661 = -1;
volatile int64_t t160 = 327055918496808209LL;
uint8_t x670 = 25U;
static int32_t x671 = 194;
volatile int32_t t161 = 61817;
volatile int32_t t162 = 3866165;
static volatile int64_t t163 = -1169047217626LL;
int8_t x683 = INT8_MAX;
volatile int32_t x686 = -139;
int32_t x688 = INT32_MIN;
static int8_t x690 = INT8_MIN;
uint8_t x697 = UINT8_MAX;
static uint16_t x704 = 12U;
uint8_t x706 = 22U;
uint32_t x715 = 1582380624U;
static uint32_t x724 = UINT32_MAX;
static int8_t x726 = -2;
int64_t x727 = -1LL;
static volatile int8_t x731 = INT8_MAX;
int32_t x738 = 455691387;
int16_t x740 = -1;
int32_t t178 = -348017;
int8_t x742 = INT8_MIN;
int8_t x750 = INT8_MIN;
int8_t x753 = INT8_MAX;
uint64_t t185 = 152185301145345LLU;
static uint8_t x770 = 1U;
int32_t x777 = INT32_MIN;
volatile uint64_t x779 = UINT64_MAX;
int32_t x780 = -2672;
int64_t x786 = INT64_MAX;
int8_t x789 = -1;
int8_t x797 = INT8_MIN;
uint16_t x805 = UINT16_MAX;
uint8_t x816 = 8U;
volatile uint64_t t198 = 33633137531348LLU;
volatile int32_t t199 = 251632585;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	volatile int16_t x2 = 1107;
	int32_t x3 = 3548458;
	uint64_t x4 = 750LLU;
	int32_t t0 = -116945;

    t0 = (x1&(x2-(x3>x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MIN;
	uint8_t x7 = 3U;
	volatile int16_t x8 = -1;
	volatile int64_t t1 = INT64_MIN;

    t1 = (x5&(x6-(x7>x8)));

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	int32_t x11 = 137;
	int16_t x12 = INT16_MIN;
	int64_t t2 = 198656170LL;

    t2 = (x9&(x10-(x11>x12)));

    if (t2 != -957LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = -146150;
	volatile int64_t x14 = INT64_MAX;
	int64_t x16 = INT64_MIN;
	int64_t t3 = 440028221LL;

    t3 = (x13&(x14-(x15>x16)));

    if (t3 != 9223372036854629658LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x18 = 135U;
	uint32_t x19 = 1060509U;
	int32_t x20 = INT32_MIN;
	static volatile int32_t t4 = 1;

    t4 = (x17&(x18-(x19>x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = 2;
	volatile uint8_t x23 = UINT8_MAX;
	volatile int32_t t5 = 227695;

    t5 = (x21&(x22-(x23>x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x26 = UINT64_MAX;
	int64_t x27 = INT64_MIN;
	int16_t x28 = -1;
	static volatile uint64_t t6 = 997LLU;

    t6 = (x25&(x26-(x27>x28)));

    if (t6 != 32767LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = INT64_MAX;
	uint32_t x30 = UINT32_MAX;
	static uint16_t x31 = 10U;
	volatile int16_t x32 = 2;
	int64_t t7 = -1654560797063278989LL;

    t7 = (x29&(x30-(x31>x32)));

    if (t7 != 4294967294LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1LL;
	int32_t x35 = -1;
	int8_t x36 = -1;
	int64_t t8 = 2025LL;

    t8 = (x33&(x34-(x35>x36)));

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x38 = UINT8_MAX;
	int16_t x39 = INT16_MAX;
	int32_t x40 = -1;
	volatile int32_t t9 = -106206060;

    t9 = (x37&(x38-(x39>x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x44 = 158LLU;
	volatile int32_t t10 = 4871126;

    t10 = (x41&(x42-(x43>x44)));

    if (t10 != -256) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MAX;
	int8_t x46 = 0;
	uint8_t x47 = UINT8_MAX;
	uint64_t x48 = UINT64_MAX;

    t11 = (x45&(x46-(x47>x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	int32_t x51 = INT32_MIN;
	int16_t x52 = -1;
	static volatile uint64_t t12 = 30453860LLU;

    t12 = (x49&(x50-(x51>x52)));

    if (t12 != 7837857254002262016LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x57 = 2LLU;
	uint8_t x58 = UINT8_MAX;
	uint16_t x59 = UINT16_MAX;
	volatile int8_t x60 = 0;

    t13 = (x57&(x58-(x59>x60)));

    if (t13 != 2LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x61 = INT16_MAX;
	int8_t x62 = -1;
	int32_t x63 = INT32_MIN;
	static volatile uint64_t x64 = 0LLU;
	volatile int32_t t14 = -6972853;

    t14 = (x61&(x62-(x63>x64)));

    if (t14 != 32766) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x66 = INT8_MIN;
	uint32_t x67 = 36609084U;
	int8_t x68 = -1;
	static volatile uint32_t t15 = 8506913U;

    t15 = (x65&(x66-(x67>x68)));

    if (t15 != 4294967168U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MAX;
	static int8_t x70 = -1;
	volatile int8_t x71 = -1;
	uint32_t x72 = UINT32_MAX;

    t16 = (x69&(x70-(x71>x72)));

    if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x73 = 74009LL;
	int32_t x74 = INT32_MAX;
	int64_t t17 = 68564728578LL;

    t17 = (x73&(x74-(x75>x76)));

    if (t17 != 74008LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x77 = -1LL;
	uint32_t x78 = UINT32_MAX;
	int64_t x79 = INT64_MIN;
	static volatile int64_t t18 = -5128091862LL;

    t18 = (x77&(x78-(x79>x80)));

    if (t18 != 4294967294LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MIN;
	uint64_t x84 = UINT64_MAX;
	int32_t t19 = 6755104;

    t19 = (x81&(x82-(x83>x84)));

    if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = -3;
	volatile int32_t x86 = 130180;
	int16_t x87 = -21;
	int32_t t20 = -2930978;

    t20 = (x85&(x86-(x87>x88)));

    if (t20 != 130180) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x89 = UINT16_MAX;
	int32_t x91 = -1;
	volatile int16_t x92 = -1;
	volatile int32_t t21 = 25;

    t21 = (x89&(x90-(x91>x92)));

    if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x93 = INT16_MAX;
	uint32_t x94 = 0U;
	int64_t x95 = INT64_MIN;
	static volatile uint32_t t22 = 11360U;

    t22 = (x93&(x94-(x95>x96)));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = INT64_MIN;
	int64_t x98 = INT64_MIN;
	static int16_t x99 = -5261;
	volatile int16_t x100 = INT16_MAX;
	static int64_t t23 = INT64_MIN;

    t23 = (x97&(x98-(x99>x100)));

    if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x102 = -1;
	static int8_t x103 = -2;
	static volatile int32_t x104 = 3978130;
	volatile int64_t t24 = -2005020LL;

    t24 = (x101&(x102-(x103>x104)));

    if (t24 != -49463LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x105 = 3203735381654267551LLU;
	volatile int8_t x106 = 19;
	volatile uint8_t x107 = 1U;
	static uint8_t x108 = 62U;
	uint64_t t25 = 49820541012706LLU;

    t25 = (x105&(x106-(x107>x108)));

    if (t25 != 19LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x109 = 6U;
	static uint64_t x110 = 16LLU;
	static volatile uint16_t x111 = UINT16_MAX;
	uint8_t x112 = 2U;
	static uint64_t t26 = 0LLU;

    t26 = (x109&(x110-(x111>x112)));

    if (t26 != 6LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x113 = UINT32_MAX;
	int16_t x114 = 1541;
	uint32_t x116 = 483U;

    t27 = (x113&(x114-(x115>x116)));

    if (t27 != 1540U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = -1;
	int8_t x119 = 0;
	int32_t x120 = INT32_MIN;
	volatile int32_t t28 = 3;

    t28 = (x117&(x118-(x119>x120)));

    if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = 32;
	volatile int32_t x122 = -4;
	int64_t x123 = INT64_MIN;
	int16_t x124 = -1;

    t29 = (x121&(x122-(x123>x124)));

    if (t29 != 32) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x129 = INT64_MIN;
	int8_t x130 = INT8_MIN;
	volatile int16_t x131 = INT16_MIN;
	uint8_t x132 = 6U;
	volatile int64_t t30 = INT64_MIN;

    t30 = (x129&(x130-(x131>x132)));

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x133 = INT16_MIN;
	volatile uint16_t x134 = UINT16_MAX;
	int32_t t31 = 196433278;

    t31 = (x133&(x134-(x135>x136)));

    if (t31 != 32768) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x138 = 63U;
	uint16_t x139 = UINT16_MAX;
	volatile uint8_t x140 = 1U;
	volatile int32_t t32 = 10;

    t32 = (x137&(x138-(x139>x140)));

    if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x145 = INT32_MIN;
	int32_t x146 = INT32_MIN;
	int16_t x147 = -6974;
	int8_t x148 = -1;

    t33 = (x145&(x146-(x147>x148)));

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x150 = 27U;
	static int16_t x152 = -1;

    t34 = (x149&(x150-(x151>x152)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x153 = UINT64_MAX;
	int32_t x154 = 161;
	int32_t x155 = 12800;
	int8_t x156 = -1;

    t35 = (x153&(x154-(x155>x156)));

    if (t35 != 160LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x157 = INT8_MIN;
	int32_t x158 = -1;
	int32_t x159 = INT32_MIN;
	uint64_t x160 = UINT64_MAX;
	static volatile int32_t t36 = -385;

    t36 = (x157&(x158-(x159>x160)));

    if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x161 = 36U;
	int16_t x162 = -1;
	int16_t x163 = -1811;
	volatile uint32_t x164 = 2585U;
	volatile int32_t t37 = 23;

    t37 = (x161&(x162-(x163>x164)));

    if (t37 != 36) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x165 = 1U;
	static uint16_t x166 = 23U;
	uint8_t x167 = 31U;
	int64_t x168 = INT64_MIN;
	volatile int32_t t38 = 416;

    t38 = (x165&(x166-(x167>x168)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x169 = INT32_MAX;
	int64_t x170 = 281LL;
	int16_t x171 = -1;
	volatile int32_t x172 = -1;
	static volatile int64_t t39 = 42952LL;

    t39 = (x169&(x170-(x171>x172)));

    if (t39 != 281LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x175 = INT32_MIN;
	int8_t x176 = INT8_MIN;
	int32_t t40 = -28913;

    t40 = (x173&(x174-(x175>x176)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x177 = INT32_MIN;
	volatile uint64_t x178 = UINT64_MAX;
	static int16_t x179 = 1;
	static int8_t x180 = INT8_MAX;

    t41 = (x177&(x178-(x179>x180)));

    if (t41 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = -13;
	int16_t x182 = INT16_MAX;
	int16_t x183 = -33;
	static uint16_t x184 = UINT16_MAX;
	volatile int32_t t42 = 0;

    t42 = (x181&(x182-(x183>x184)));

    if (t42 != 32755) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x186 = -3503;
	int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MIN;
	static volatile uint32_t t43 = 1883597466U;

    t43 = (x185&(x186-(x187>x188)));

    if (t43 != 9060864U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x189 = -56430;
	static volatile int64_t x190 = -1741827892619LL;
	int16_t x191 = INT16_MAX;
	volatile uint8_t x192 = UINT8_MAX;
	int64_t t44 = -4594LL;

    t44 = (x189&(x190-(x191>x192)));

    if (t44 != -1741827931632LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x193 = 1479LL;
	volatile uint64_t x194 = 62388337LLU;
	uint8_t x195 = UINT8_MAX;
	int16_t x196 = -3;

    t45 = (x193&(x194-(x195>x196)));

    if (t45 != 64LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x197 = 459407;
	uint64_t x199 = UINT64_MAX;
	int8_t x200 = INT8_MIN;
	volatile int32_t t46 = 423584310;

    t46 = (x197&(x198-(x199>x200)));

    if (t46 != 459406) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x203 = 66LLU;
	volatile int64_t x204 = -1LL;

    t47 = (x201&(x202-(x203>x204)));

    if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x206 = 1;
	uint32_t x208 = 8206300U;
	volatile int32_t t48 = -31222;

    t48 = (x205&(x206-(x207>x208)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x209 = -4093;
	int8_t x212 = INT8_MIN;
	int32_t t49 = 1604611;

    t49 = (x209&(x210-(x211>x212)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x213 = 32944099LL;
	uint8_t x214 = 28U;
	uint64_t x215 = 15LLU;
	uint32_t x216 = UINT32_MAX;
	int64_t t50 = -199112946LL;

    t50 = (x213&(x214-(x215>x216)));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x217 = 8U;
	volatile uint8_t x219 = UINT8_MAX;
	static volatile int64_t t51 = -2018681497LL;

    t51 = (x217&(x218-(x219>x220)));

    if (t51 != 8LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x221 = 1426254631342969266LLU;
	static volatile int16_t x222 = -852;
	int8_t x223 = INT8_MIN;
	int64_t x224 = -1LL;
	uint64_t t52 = 1LLU;

    t52 = (x221&(x222-(x223>x224)));

    if (t52 != 1426254631342968992LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x226 = INT64_MAX;
	uint8_t x227 = 11U;
	int16_t x228 = INT16_MAX;

    t53 = (x225&(x226-(x227>x228)));

    if (t53 != 78LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x229 = INT32_MIN;
	static int32_t x230 = INT32_MAX;
	static volatile int64_t x231 = INT64_MIN;
	uint16_t x232 = 1U;
	static int32_t t54 = -1;

    t54 = (x229&(x230-(x231>x232)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x233 = 11240611275LLU;
	volatile int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	volatile uint64_t t55 = 29305693LLU;

    t55 = (x233&(x234-(x235>x236)));

    if (t55 != 11240611200LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x237 = INT8_MAX;
	int8_t x238 = 1;
	uint32_t x239 = 168910150U;
	static int32_t x240 = INT32_MAX;
	int32_t t56 = -7;

    t56 = (x237&(x238-(x239>x240)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x246 = INT8_MIN;
	uint32_t x247 = 165146430U;

    t57 = (x245&(x246-(x247>x248)));

    if (t57 != 65407) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x249 = INT8_MAX;
	uint32_t x250 = UINT32_MAX;
	int16_t x251 = -1;
	int64_t x252 = INT64_MAX;
	uint32_t t58 = 55471U;

    t58 = (x249&(x250-(x251>x252)));

    if (t58 != 127U) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x253 = -1;
	uint16_t x255 = UINT16_MAX;
	int64_t x256 = INT64_MAX;
	static volatile int32_t t59 = INT32_MIN;

    t59 = (x253&(x254-(x255>x256)));

    if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x257 = 20U;
	uint16_t x259 = 478U;
	int64_t x260 = -1LL;
	int64_t t60 = 118071887497025579LL;

    t60 = (x257&(x258-(x259>x260)));

    if (t60 != 20LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x261 = UINT64_MAX;
	volatile int16_t x262 = INT16_MIN;
	int64_t x263 = -76597363LL;
	static int32_t x264 = -1;
	static uint64_t t61 = 42397281LLU;

    t61 = (x261&(x262-(x263>x264)));

    if (t61 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x265 = INT8_MAX;
	volatile int32_t x266 = 158027;
	int8_t x267 = -1;
	int8_t x268 = 22;
	static int32_t t62 = -1383483;

    t62 = (x265&(x266-(x267>x268)));

    if (t62 != 75) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x271 = 13810;
	uint8_t x272 = UINT8_MAX;
	int32_t t63 = 1401466;

    t63 = (x269&(x270-(x271>x272)));

    if (t63 != -32769) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x273 = 1U;
	volatile int8_t x274 = 1;
	uint32_t x275 = UINT32_MAX;
	static volatile uint16_t x276 = 250U;

    t64 = (x273&(x274-(x275>x276)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x277 = 431U;
	static uint8_t x279 = 16U;
	uint16_t x280 = 2728U;
	int32_t t65 = -560;

    t65 = (x277&(x278-(x279>x280)));

    if (t65 != 167) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x281 = INT8_MIN;
	static uint16_t x283 = UINT16_MAX;

    t66 = (x281&(x282-(x283>x284)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x285 = -1;
	int64_t x287 = 12904LL;

    t67 = (x285&(x286-(x287>x288)));

    if (t67 != -8780333616106LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x289 = UINT16_MAX;
	static uint64_t x290 = 4934534156969024806LLU;
	uint32_t x291 = 51846086U;
	static uint16_t x292 = UINT16_MAX;
	volatile uint64_t t68 = 103355LLU;

    t68 = (x289&(x290-(x291>x292)));

    if (t68 != 40229LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x294 = INT32_MIN;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t69 = INT32_MIN;

    t69 = (x293&(x294-(x295>x296)));

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x298 = -1LL;
	uint16_t x300 = UINT16_MAX;
	volatile int64_t t70 = -60052725398375LL;

    t70 = (x297&(x298-(x299>x300)));

    if (t70 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x302 = INT64_MIN;
	int8_t x303 = INT8_MAX;
	volatile int64_t t71 = INT64_MIN;

    t71 = (x301&(x302-(x303>x304)));

    if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x305 = INT64_MAX;
	int32_t x306 = 26669342;
	uint16_t x308 = 60U;
	volatile int64_t t72 = -1355339027974LL;

    t72 = (x305&(x306-(x307>x308)));

    if (t72 != 26669341LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x310 = INT16_MAX;
	int8_t x312 = -1;
	volatile int32_t t73 = 122;

    t73 = (x309&(x310-(x311>x312)));

    if (t73 != 24353) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x313 = 0;
	int8_t x314 = 24;
	uint8_t x315 = 5U;
	volatile int32_t x316 = INT32_MIN;
	static volatile int32_t t74 = -996342076;

    t74 = (x313&(x314-(x315>x316)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x317 = -1;
	static int64_t x319 = -49819824LL;
	static int32_t t75 = 178504279;

    t75 = (x317&(x318-(x319>x320)));

    if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x321 = INT16_MIN;
	uint8_t x322 = UINT8_MAX;
	uint16_t x323 = 2004U;
	static volatile int64_t x324 = -124LL;
	volatile int32_t t76 = -6880;

    t76 = (x321&(x322-(x323>x324)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x326 = UINT8_MAX;
	uint16_t x327 = 27918U;
	int16_t x328 = INT16_MAX;

    t77 = (x325&(x326-(x327>x328)));

    if (t77 != 255LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x329 = 1U;
	static int8_t x330 = -1;
	int32_t x331 = -1;
	int32_t x332 = 2490;
	static int32_t t78 = -1;

    t78 = (x329&(x330-(x331>x332)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x333 = UINT64_MAX;
	static int8_t x335 = -1;
	int8_t x336 = INT8_MAX;
	volatile uint64_t t79 = 2836082156LLU;

    t79 = (x333&(x334-(x335>x336)));

    if (t79 != 3297LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x338 = -1;
	int32_t x339 = 11614970;
	volatile uint8_t x340 = UINT8_MAX;
	static volatile int32_t t80 = 3633;

    t80 = (x337&(x338-(x339>x340)));

    if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x341 = -1;
	static uint16_t x342 = 16U;
	int8_t x343 = INT8_MAX;
	static int8_t x344 = 23;
	static volatile int32_t t81 = 9;

    t81 = (x341&(x342-(x343>x344)));

    if (t81 != 15) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x345 = 30924405LL;
	uint8_t x346 = 50U;
	int16_t x347 = 47;
	volatile int8_t x348 = INT8_MAX;
	volatile int64_t t82 = -4096940LL;

    t82 = (x345&(x346-(x347>x348)));

    if (t82 != 48LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x351 = 89873334452872049LLU;
	uint16_t x352 = 33U;
	int32_t t83 = 4058;

    t83 = (x349&(x350-(x351>x352)));

    if (t83 != 384404858) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x354 = INT64_MIN;
	static volatile int16_t x355 = INT16_MIN;
	static volatile int64_t t84 = INT64_MIN;

    t84 = (x353&(x354-(x355>x356)));

    if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x357 = 1;
	volatile int16_t x358 = -1;
	int16_t x359 = INT16_MIN;
	uint64_t x360 = 180654LLU;
	volatile int32_t t85 = 2951;

    t85 = (x357&(x358-(x359>x360)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x361 = -1;
	uint8_t x362 = 0U;
	uint16_t x364 = UINT16_MAX;
	int32_t t86 = 8028942;

    t86 = (x361&(x362-(x363>x364)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x365 = 110;
	int64_t x367 = -1LL;
	static uint64_t x368 = UINT64_MAX;
	static volatile int64_t t87 = -48848156LL;

    t87 = (x365&(x366-(x367>x368)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x369 = INT16_MIN;
	volatile int64_t x371 = 10LL;
	uint32_t x372 = 810746U;
	int32_t t88 = -3669802;

    t88 = (x369&(x370-(x371>x372)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x373 = UINT8_MAX;
	int16_t x374 = INT16_MIN;
	int32_t t89 = 5;

    t89 = (x373&(x374-(x375>x376)));

    if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x379 = INT16_MIN;
	int32_t x380 = -1;
	volatile uint32_t t90 = 184U;

    t90 = (x377&(x378-(x379>x380)));

    if (t90 != 5425U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x382 = -13378540120636LL;
	int16_t x383 = 4;
	uint16_t x384 = 161U;
	volatile int64_t t91 = 1288828565500LL;

    t91 = (x381&(x382-(x383>x384)));

    if (t91 != -13378540120636LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x385 = INT8_MAX;
	uint64_t x386 = UINT64_MAX;
	uint64_t t92 = 99LLU;

    t92 = (x385&(x386-(x387>x388)));

    if (t92 != 127LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x389 = INT32_MIN;
	int64_t x390 = -93907106047465LL;
	uint32_t x391 = 4940U;
	int64_t x392 = 1901987688LL;
	volatile int64_t t93 = -993519LL;

    t93 = (x389&(x390-(x391>x392)));

    if (t93 != -93907312443392LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x393 = INT16_MAX;
	static uint16_t x394 = 5U;
	int64_t x395 = INT64_MIN;
	int64_t x396 = INT64_MIN;
	static volatile int32_t t94 = -21862;

    t94 = (x393&(x394-(x395>x396)));

    if (t94 != 5) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x397 = -2054249936175596LL;
	int64_t x398 = INT64_MAX;
	int16_t x399 = INT16_MIN;
	int16_t x400 = -1;
	volatile int64_t t95 = -6LL;

    t95 = (x397&(x398-(x399>x400)));

    if (t95 != 9221317786918600212LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x401 = -537;
	static volatile uint64_t x402 = UINT64_MAX;
	int32_t x403 = INT32_MAX;
	static int16_t x404 = -7266;
	static volatile uint64_t t96 = 2824488946269310LLU;

    t96 = (x401&(x402-(x403>x404)));

    if (t96 != 18446744073709551078LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x405 = INT8_MIN;
	int32_t x406 = -54712;
	volatile int32_t x407 = -1;
	int64_t x408 = INT64_MIN;
	int32_t t97 = -12;

    t97 = (x405&(x406-(x407>x408)));

    if (t97 != -54784) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x410 = 22U;
	volatile int64_t x411 = INT64_MIN;
	int16_t x412 = -1;
	static int64_t t98 = 270606113222LL;

    t98 = (x409&(x410-(x411>x412)));

    if (t98 != 18LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x414 = INT64_MAX;
	static int32_t x415 = 19911;
	int8_t x416 = -49;
	int64_t t99 = -11711276201LL;

    t99 = (x413&(x414-(x415>x416)));

    if (t99 != 3392760LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x417 = -26;
	int8_t x418 = INT8_MIN;
	int64_t x419 = -1LL;
	int8_t x420 = INT8_MAX;
	volatile int32_t t100 = -1684267;

    t100 = (x417&(x418-(x419>x420)));

    if (t100 != -128) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x421 = INT32_MIN;
	volatile int8_t x422 = -1;
	uint8_t x423 = 56U;
	volatile int8_t x424 = INT8_MIN;
	volatile int32_t t101 = INT32_MIN;

    t101 = (x421&(x422-(x423>x424)));

    if (t101 != INT32_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x426 = -25;
	int8_t x427 = -1;
	int64_t t102 = 5741261320371806LL;

    t102 = (x425&(x426-(x427>x428)));

    if (t102 != -26LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x434 = UINT8_MAX;
	int64_t x435 = INT64_MIN;
	int64_t x436 = -127876035LL;
	volatile int32_t t103 = 10718;

    t103 = (x433&(x434-(x435>x436)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x438 = INT32_MIN;
	int32_t x439 = INT32_MIN;

    t104 = (x437&(x438-(x439>x440)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x441 = -1179;
	uint64_t x443 = 808295876455052LLU;
	int16_t x444 = INT16_MAX;
	volatile int64_t t105 = 851066446LL;

    t105 = (x441&(x442-(x443>x444)));

    if (t105 != 9223372036854774628LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x445 = 3;
	int8_t x447 = INT8_MIN;
	int16_t x448 = -12;
	volatile int32_t t106 = -942441;

    t106 = (x445&(x446-(x447>x448)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x449 = 6U;
	int32_t x450 = INT32_MAX;
	int8_t x451 = INT8_MIN;
	static uint16_t x452 = 4685U;
	volatile int32_t t107 = 1336229;

    t107 = (x449&(x450-(x451>x452)));

    if (t107 != 6) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x453 = 55932829U;
	uint8_t x454 = 1U;
	int8_t x456 = -1;
	volatile uint32_t t108 = 13U;

    t108 = (x453&(x454-(x455>x456)));

    if (t108 != 1U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x457 = INT64_MAX;
	uint8_t x459 = 12U;
	int16_t x460 = INT16_MIN;
	int64_t t109 = -2LL;

    t109 = (x457&(x458-(x459>x460)));

    if (t109 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x461 = 2690070LL;
	int64_t x462 = -1LL;
	uint16_t x463 = UINT16_MAX;
	static int32_t x464 = INT32_MIN;
	volatile int64_t t110 = 4970088200944LL;

    t110 = (x461&(x462-(x463>x464)));

    if (t110 != 2690070LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x466 = INT16_MIN;
	uint64_t x467 = 48683370732637LLU;
	int16_t x468 = INT16_MAX;
	int64_t t111 = 2404783LL;

    t111 = (x465&(x466-(x467>x468)));

    if (t111 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x469 = UINT8_MAX;
	uint8_t x470 = 3U;
	uint64_t x471 = 126323328352752LLU;
	int64_t x472 = INT64_MIN;
	int32_t t112 = 13;

    t112 = (x469&(x470-(x471>x472)));

    if (t112 != 3) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x473 = 78889LL;
	int64_t x474 = -1LL;
	uint16_t x475 = 504U;
	int16_t x476 = 10;
	int64_t t113 = 209312275LL;

    t113 = (x473&(x474-(x475>x476)));

    if (t113 != 78888LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x477 = -1;
	uint16_t x479 = 3U;
	volatile uint64_t x480 = 20142087538LLU;
	int32_t t114 = -46092;

    t114 = (x477&(x478-(x479>x480)));

    if (t114 != 56) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x481 = 2U;
	static uint8_t x482 = 1U;
	int16_t x483 = 477;
	int32_t t115 = 192;

    t115 = (x481&(x482-(x483>x484)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x485 = INT16_MAX;
	static volatile uint64_t x486 = 1LLU;
	int32_t x487 = -1063617740;
	int16_t x488 = INT16_MIN;
	volatile uint64_t t116 = 236315808LLU;

    t116 = (x485&(x486-(x487>x488)));

    if (t116 != 1LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x489 = -9;
	volatile int32_t x490 = -1;
	static int8_t x491 = INT8_MIN;
	static int16_t x492 = -16;
	volatile int32_t t117 = -6589352;

    t117 = (x489&(x490-(x491>x492)));

    if (t117 != -9) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x494 = -581216127;
	uint16_t x495 = UINT16_MAX;
	volatile int32_t t118 = -547;

    t118 = (x493&(x494-(x495>x496)));

    if (t118 != -581238784) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x498 = INT64_MAX;
	uint32_t x500 = UINT32_MAX;
	static volatile int64_t t119 = -3126695390LL;

    t119 = (x497&(x498-(x499>x500)));

    if (t119 != 10LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x501 = INT16_MIN;
	int64_t x502 = INT64_MAX;
	uint16_t x504 = 0U;
	static volatile int64_t t120 = 1506432825402032624LL;

    t120 = (x501&(x502-(x503>x504)));

    if (t120 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x505 = INT16_MIN;
	int16_t x506 = -77;
	int64_t x507 = INT64_MIN;
	int32_t t121 = 1799;

    t121 = (x505&(x506-(x507>x508)));

    if (t121 != -32768) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x509 = -54LL;
	int8_t x510 = -1;
	static volatile uint32_t x512 = 1330948U;

    t122 = (x509&(x510-(x511>x512)));

    if (t122 != -54LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x513 = 6;
	uint64_t x514 = 24107200LLU;
	volatile uint64_t x515 = UINT64_MAX;
	static int16_t x516 = INT16_MIN;
	volatile uint64_t t123 = 394615233466628LLU;

    t123 = (x513&(x514-(x515>x516)));

    if (t123 != 6LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x517 = INT32_MAX;
	int32_t x518 = INT32_MAX;
	static int16_t x519 = -1;
	int16_t x520 = -1;
	volatile int32_t t124 = INT32_MAX;

    t124 = (x517&(x518-(x519>x520)));

    if (t124 != INT32_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x521 = 12723918LLU;
	uint32_t x522 = 451918520U;
	volatile int32_t x523 = -1;
	volatile int16_t x524 = INT16_MIN;
	static uint64_t t125 = 7LLU;

    t125 = (x521&(x522-(x523>x524)));

    if (t125 != 12722822LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x525 = INT32_MIN;
	uint32_t x526 = 10933744U;
	int8_t x527 = -51;
	int16_t x528 = -1;
	volatile uint32_t t126 = 36354632U;

    t126 = (x525&(x526-(x527>x528)));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x529 = -1;
	uint64_t x530 = 1592829884881122948LLU;
	volatile int16_t x531 = INT16_MIN;
	uint32_t x532 = 4035U;
	volatile uint64_t t127 = 467344056704456212LLU;

    t127 = (x529&(x530-(x531>x532)));

    if (t127 != 1592829884881122947LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x533 = 31U;
	int16_t x535 = -573;
	static int32_t t128 = 75537;

    t128 = (x533&(x534-(x535>x536)));

    if (t128 != 30) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x537 = 121132367729LLU;
	uint64_t x538 = UINT64_MAX;
	int64_t x539 = INT64_MIN;
	volatile int32_t x540 = 842737305;
	volatile uint64_t t129 = 6004230235LLU;

    t129 = (x537&(x538-(x539>x540)));

    if (t129 != 121132367729LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x542 = 3251052U;
	uint32_t x543 = 61U;
	volatile int16_t x544 = 0;
	volatile int64_t t130 = 1972LL;

    t130 = (x541&(x542-(x543>x544)));

    if (t130 != 3147881LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x545 = 6501460;
	uint32_t x546 = 29625396U;
	volatile uint16_t x547 = 4U;
	uint64_t x548 = 183511994LLU;
	uint32_t t131 = 296658265U;

    t131 = (x545&(x546-(x547>x548)));

    if (t131 != 4195348U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x549 = INT32_MIN;
	uint8_t x550 = 52U;
	int32_t x551 = -1;
	volatile int32_t x552 = INT32_MIN;

    t132 = (x549&(x550-(x551>x552)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x553 = -1;
	int32_t x554 = INT32_MIN;
	static int32_t x555 = -21940564;
	static int32_t t133 = INT32_MIN;

    t133 = (x553&(x554-(x555>x556)));

    if (t133 != INT32_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x557 = 1006638923939LLU;
	volatile int32_t x558 = -1;

    t134 = (x557&(x558-(x559>x560)));

    if (t134 != 1006638923939LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x562 = INT32_MIN;
	int8_t x563 = INT8_MAX;
	volatile int32_t t135 = 266305531;

    t135 = (x561&(x562-(x563>x564)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x565 = INT8_MIN;
	int8_t x566 = INT8_MIN;
	volatile uint32_t x567 = 4157972U;
	int8_t x568 = 3;
	volatile int32_t t136 = -1;

    t136 = (x565&(x566-(x567>x568)));

    if (t136 != -256) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x569 = -9202;
	int16_t x570 = INT16_MIN;
	static uint8_t x571 = 0U;
	static uint16_t x572 = UINT16_MAX;
	static volatile int32_t t137 = -681987;

    t137 = (x569&(x570-(x571>x572)));

    if (t137 != -32768) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x573 = 0;
	uint32_t x574 = 1257491261U;
	int8_t x575 = INT8_MIN;
	uint32_t x576 = 26U;
	volatile uint32_t t138 = 9U;

    t138 = (x573&(x574-(x575>x576)));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x577 = INT8_MIN;
	int64_t x578 = INT64_MIN;
	uint64_t x579 = 274877LLU;
	int8_t x580 = -13;
	static volatile int64_t t139 = INT64_MIN;

    t139 = (x577&(x578-(x579>x580)));

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x581 = 79U;
	static uint8_t x582 = 43U;
	int16_t x583 = INT16_MIN;
	volatile int32_t x584 = INT32_MIN;
	static uint32_t t140 = 1474416U;

    t140 = (x581&(x582-(x583>x584)));

    if (t140 != 10U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x586 = INT32_MIN;
	int32_t x587 = -1;
	int32_t x588 = INT32_MAX;

    t141 = (x585&(x586-(x587>x588)));

    if (t141 != -2147483648LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x589 = 1;
	int64_t x591 = -3398516171LL;
	uint32_t x592 = 389907504U;
	volatile int32_t t142 = -4044084;

    t142 = (x589&(x590-(x591>x592)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x597 = INT64_MIN;
	int8_t x598 = -1;
	volatile int8_t x599 = -1;
	volatile int64_t t143 = INT64_MIN;

    t143 = (x597&(x598-(x599>x600)));

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x601 = UINT32_MAX;
	int64_t x602 = INT64_MAX;
	static int32_t x603 = 1630848;
	uint64_t x604 = 4298261342LLU;
	int64_t t144 = -126652477365312660LL;

    t144 = (x601&(x602-(x603>x604)));

    if (t144 != 4294967295LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x606 = 2U;
	uint16_t x607 = 1U;
	volatile int8_t x608 = -1;
	volatile uint32_t t145 = 7U;

    t145 = (x605&(x606-(x607>x608)));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x609 = -509800;
	int8_t x610 = INT8_MAX;
	int64_t x611 = INT64_MIN;
	static int64_t x612 = INT64_MIN;
	volatile int32_t t146 = 1;

    t146 = (x609&(x610-(x611>x612)));

    if (t146 != 24) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x613 = UINT64_MAX;
	int16_t x614 = 4825;
	static int8_t x615 = INT8_MIN;
	int8_t x616 = -1;
	uint64_t t147 = 15436LLU;

    t147 = (x613&(x614-(x615>x616)));

    if (t147 != 4825LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x617 = 4;
	uint16_t x618 = 11U;
	volatile uint16_t x619 = UINT16_MAX;
	int64_t x620 = -1LL;

    t148 = (x617&(x618-(x619>x620)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x621 = -1;
	uint8_t x622 = 11U;
	uint8_t x623 = 6U;
	static uint8_t x624 = 26U;

    t149 = (x621&(x622-(x623>x624)));

    if (t149 != 11) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x627 = -1;
	volatile int64_t x628 = INT64_MIN;

    t150 = (x625&(x626-(x627>x628)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x630 = INT16_MIN;
	static uint32_t x631 = UINT32_MAX;
	int16_t x632 = INT16_MIN;
	int64_t t151 = -1LL;

    t151 = (x629&(x630-(x631>x632)));

    if (t151 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x633 = 471;
	static volatile uint64_t x634 = 22191373305LLU;
	volatile int32_t x635 = 744082820;
	static uint8_t x636 = 2U;
	volatile uint64_t t152 = 423099009833383LLU;

    t152 = (x633&(x634-(x635>x636)));

    if (t152 != 464LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x637 = INT8_MIN;
	static uint64_t x638 = UINT64_MAX;
	int64_t x639 = 12744864767918565LL;
	volatile uint64_t x640 = 94190LLU;
	volatile uint64_t t153 = 3050LLU;

    t153 = (x637&(x638-(x639>x640)));

    if (t153 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x641 = INT64_MAX;
	uint8_t x642 = 2U;
	volatile uint64_t x643 = 26362428LLU;
	static volatile uint8_t x644 = 6U;
	int64_t t154 = -94853728069LL;

    t154 = (x641&(x642-(x643>x644)));

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x645 = -8;
	int32_t x646 = -1370959;
	int16_t x647 = -3;
	int32_t x648 = INT32_MIN;
	static volatile int32_t t155 = 44667;

    t155 = (x645&(x646-(x647>x648)));

    if (t155 != -1370960) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x649 = INT64_MAX;
	int16_t x650 = -1;
	int64_t x652 = -1LL;
	int64_t t156 = INT64_MAX;

    t156 = (x649&(x650-(x651>x652)));

    if (t156 != INT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x653 = INT8_MIN;
	int16_t x655 = INT16_MAX;
	static volatile uint8_t x656 = 5U;

    t157 = (x653&(x654-(x655>x656)));

    if (t157 != 10475392LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x658 = INT16_MIN;
	int32_t x659 = INT32_MIN;
	int16_t x660 = 40;
	volatile uint64_t t158 = 1885924944805LLU;

    t158 = (x657&(x658-(x659>x660)));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x662 = INT8_MIN;
	uint64_t x663 = UINT64_MAX;
	uint8_t x664 = 30U;
	static int32_t t159 = 3356704;

    t159 = (x661&(x662-(x663>x664)));

    if (t159 != -129) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x665 = INT64_MIN;
	uint16_t x666 = 21171U;
	uint8_t x667 = 0U;
	static volatile uint32_t x668 = UINT32_MAX;

    t160 = (x665&(x666-(x667>x668)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x669 = -1;
	int64_t x672 = -17962384915306LL;

    t161 = (x669&(x670-(x671>x672)));

    if (t161 != 24) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x673 = INT16_MIN;
	int16_t x674 = INT16_MAX;
	uint64_t x675 = 264580737LLU;
	int64_t x676 = INT64_MIN;

    t162 = (x673&(x674-(x675>x676)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x677 = INT64_MAX;
	uint32_t x678 = UINT32_MAX;
	int32_t x679 = -208;
	static int64_t x680 = INT64_MIN;

    t163 = (x677&(x678-(x679>x680)));

    if (t163 != 4294967294LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x681 = -1;
	uint8_t x682 = 1U;
	volatile int8_t x684 = -1;
	int32_t t164 = -360;

    t164 = (x681&(x682-(x683>x684)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x685 = UINT32_MAX;
	static int32_t x687 = INT32_MIN;
	volatile uint32_t t165 = 37U;

    t165 = (x685&(x686-(x687>x688)));

    if (t165 != 4294967157U) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x689 = UINT16_MAX;
	int32_t x691 = -1;
	static uint64_t x692 = 132394881659LLU;
	static volatile int32_t t166 = -741;

    t166 = (x689&(x690-(x691>x692)));

    if (t166 != 65407) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x693 = UINT64_MAX;
	int16_t x694 = -1;
	int16_t x695 = INT16_MIN;
	static volatile int64_t x696 = -15857654396LL;
	volatile uint64_t t167 = 2933437523643LLU;

    t167 = (x693&(x694-(x695>x696)));

    if (t167 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x698 = -13;
	volatile int32_t x699 = INT32_MAX;
	volatile uint8_t x700 = 9U;
	volatile int32_t t168 = 23142;

    t168 = (x697&(x698-(x699>x700)));

    if (t168 != 242) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x701 = -1569;
	uint8_t x702 = 58U;
	int8_t x703 = 49;
	static int32_t t169 = -51;

    t169 = (x701&(x702-(x703>x704)));

    if (t169 != 25) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x705 = 21U;
	uint16_t x707 = 0U;
	volatile int32_t x708 = INT32_MAX;
	volatile int32_t t170 = 27;

    t170 = (x705&(x706-(x707>x708)));

    if (t170 != 20) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x709 = INT8_MIN;
	static int64_t x710 = -1LL;
	int64_t x711 = 9LL;
	static uint32_t x712 = UINT32_MAX;
	static int64_t t171 = 1748743LL;

    t171 = (x709&(x710-(x711>x712)));

    if (t171 != -128LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x713 = -1;
	int16_t x714 = 468;
	int16_t x716 = -1;
	volatile int32_t t172 = 112035175;

    t172 = (x713&(x714-(x715>x716)));

    if (t172 != 468) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x717 = -32;
	uint8_t x718 = UINT8_MAX;
	int8_t x719 = -1;
	volatile uint32_t x720 = UINT32_MAX;
	int32_t t173 = -15146;

    t173 = (x717&(x718-(x719>x720)));

    if (t173 != 224) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x721 = INT32_MAX;
	volatile int16_t x722 = -1288;
	int16_t x723 = -1842;
	int32_t t174 = -16300;

    t174 = (x721&(x722-(x723>x724)));

    if (t174 != 2147482360) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x725 = -1;
	volatile int16_t x728 = 4342;
	volatile int32_t t175 = -313;

    t175 = (x725&(x726-(x727>x728)));

    if (t175 != -2) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x729 = 2LLU;
	int16_t x730 = -1;
	static volatile uint16_t x732 = 26U;
	static volatile uint64_t t176 = 2253864443426886LLU;

    t176 = (x729&(x730-(x731>x732)));

    if (t176 != 2LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x733 = 95LL;
	static int32_t x734 = INT32_MAX;
	int64_t x735 = INT64_MAX;
	uint32_t x736 = 5U;
	volatile int64_t t177 = 27300686399LL;

    t177 = (x733&(x734-(x735>x736)));

    if (t177 != 94LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x737 = 21U;
	int64_t x739 = INT64_MAX;

    t178 = (x737&(x738-(x739>x740)));

    if (t178 != 16) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x741 = INT16_MAX;
	uint8_t x743 = UINT8_MAX;
	uint64_t x744 = 16090755133LLU;
	int32_t t179 = 231;

    t179 = (x741&(x742-(x743>x744)));

    if (t179 != 32640) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x745 = UINT32_MAX;
	static int16_t x746 = 105;
	int32_t x747 = 1;
	volatile int16_t x748 = 4;
	volatile uint32_t t180 = 3018U;

    t180 = (x745&(x746-(x747>x748)));

    if (t180 != 105U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x749 = UINT64_MAX;
	uint32_t x751 = 82198U;
	int8_t x752 = INT8_MIN;
	volatile uint64_t t181 = 26277939029LLU;

    t181 = (x749&(x750-(x751>x752)));

    if (t181 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x754 = -1;
	uint8_t x755 = 46U;
	int8_t x756 = -1;
	volatile int32_t t182 = -93441863;

    t182 = (x753&(x754-(x755>x756)));

    if (t182 != 126) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int16_t x757 = INT16_MIN;
	static int8_t x758 = -1;
	static int8_t x759 = 7;
	uint64_t x760 = 119003131945736921LLU;
	static volatile int32_t t183 = -23;

    t183 = (x757&(x758-(x759>x760)));

    if (t183 != -32768) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x761 = 898943006U;
	volatile int8_t x762 = INT8_MIN;
	static int16_t x763 = 4310;
	static int8_t x764 = 5;
	volatile uint32_t t184 = 355965U;

    t184 = (x761&(x762-(x763>x764)));

    if (t184 != 898943006U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x765 = 634770829042740LLU;
	uint32_t x766 = UINT32_MAX;
	uint16_t x767 = 1560U;
	volatile uint8_t x768 = UINT8_MAX;

    t185 = (x765&(x766-(x767>x768)));

    if (t185 != 432497716LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x769 = 20;
	volatile int8_t x771 = -1;
	uint64_t x772 = 53438433096350LLU;
	static volatile int32_t t186 = 159;

    t186 = (x769&(x770-(x771>x772)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x773 = -1;
	uint16_t x774 = 16U;
	uint64_t x775 = UINT64_MAX;
	uint64_t x776 = 86371609944LLU;
	int32_t t187 = 218016;

    t187 = (x773&(x774-(x775>x776)));

    if (t187 != 15) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x778 = 51106015786009824LL;
	static volatile int64_t t188 = -356145287036864LL;

    t188 = (x777&(x778-(x779>x780)));

    if (t188 != 51106015571083264LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x781 = INT32_MAX;
	int64_t x782 = 7963771LL;
	static uint8_t x783 = UINT8_MAX;
	volatile int64_t x784 = 161559957665LL;
	volatile int64_t t189 = -71524291154007299LL;

    t189 = (x781&(x782-(x783>x784)));

    if (t189 != 7963771LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x785 = UINT8_MAX;
	volatile int32_t x787 = INT32_MAX;
	int8_t x788 = 27;
	int64_t t190 = -3808555LL;

    t190 = (x785&(x786-(x787>x788)));

    if (t190 != 254LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x790 = INT8_MIN;
	int8_t x791 = -60;
	static uint16_t x792 = 5U;
	int32_t t191 = -27;

    t191 = (x789&(x790-(x791>x792)));

    if (t191 != -128) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x793 = 7636359764981LL;
	int16_t x794 = INT16_MAX;
	static uint32_t x795 = 1U;
	static int64_t x796 = -1LL;
	volatile int64_t t192 = 526276916031LL;

    t192 = (x793&(x794-(x795>x796)));

    if (t192 != 23540LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x798 = 9731U;
	int64_t x799 = -1LL;
	int16_t x800 = INT16_MAX;
	static uint32_t t193 = 281760U;

    t193 = (x797&(x798-(x799>x800)));

    if (t193 != 9728U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x801 = 3475U;
	volatile int16_t x802 = 49;
	int16_t x803 = 173;
	int8_t x804 = INT8_MIN;
	uint32_t t194 = 189855U;

    t194 = (x801&(x802-(x803>x804)));

    if (t194 != 16U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x806 = 112554523;
	int32_t x807 = INT32_MIN;
	volatile uint32_t x808 = UINT32_MAX;
	int32_t t195 = -273139;

    t195 = (x805&(x806-(x807>x808)));

    if (t195 != 29211) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x809 = -146;
	int32_t x810 = INT32_MAX;
	int16_t x811 = INT16_MIN;
	int16_t x812 = INT16_MAX;
	static int32_t t196 = 15;

    t196 = (x809&(x810-(x811>x812)));

    if (t196 != 2147483502) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x813 = 4490646LL;
	volatile int64_t x814 = INT64_MAX;
	volatile int64_t x815 = -1LL;
	int64_t t197 = 202663939237LL;

    t197 = (x813&(x814-(x815>x816)));

    if (t197 != 4490646LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x817 = UINT64_MAX;
	volatile int16_t x818 = INT16_MIN;
	int8_t x819 = INT8_MAX;
	uint32_t x820 = 20420086U;

    t198 = (x817&(x818-(x819>x820)));

    if (t198 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x821 = -1;
	static int16_t x822 = -14;
	int16_t x823 = INT16_MIN;
	uint64_t x824 = 2969997523710LLU;

    t199 = (x821&(x822-(x823>x824)));

    if (t199 != -15) { NG(); } else { ; }
	
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

