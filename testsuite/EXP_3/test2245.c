
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

int8_t x1 = -3;
int16_t x5 = INT16_MIN;
int16_t x6 = -1;
static volatile int32_t t1 = -2558;
static uint32_t x14 = 10849488U;
volatile int16_t x15 = 753;
int64_t x17 = INT64_MAX;
int64_t x26 = 2141000683777LL;
uint16_t x28 = 10107U;
int32_t x30 = INT32_MIN;
int8_t x39 = -1;
int32_t x43 = INT32_MAX;
int8_t x52 = 48;
uint32_t t11 = 73U;
volatile int32_t t12 = 3;
int8_t x60 = INT8_MIN;
int16_t x65 = -6067;
int16_t x70 = INT16_MIN;
static uint32_t x84 = UINT32_MAX;
static volatile int16_t x86 = INT16_MIN;
int8_t x91 = 17;
uint64_t x94 = 318624252939LLU;
int8_t x96 = INT8_MIN;
volatile uint32_t x107 = UINT32_MAX;
uint32_t t23 = 45U;
int64_t x113 = -398330184LL;
volatile int8_t x114 = 6;
uint8_t x124 = UINT8_MAX;
int8_t x125 = -1;
static volatile int64_t t28 = 20810477623917806LL;
static int8_t x136 = INT8_MAX;
volatile int32_t t30 = 105453;
int8_t x145 = INT8_MAX;
int64_t x164 = INT64_MAX;
int64_t t34 = 3LL;
int16_t x173 = INT16_MIN;
int16_t x174 = 7;
uint64_t x206 = 8LLU;
int8_t x209 = -1;
int32_t x218 = INT32_MAX;
static int32_t x220 = -1;
int64_t x221 = INT64_MAX;
static int64_t x224 = 52LL;
static int64_t t45 = 2LL;
volatile int32_t x246 = INT32_MIN;
uint32_t x248 = UINT32_MAX;
static int32_t x249 = -1;
static int32_t t50 = 2837;
static volatile int32_t x254 = INT32_MIN;
int8_t x267 = INT8_MIN;
int64_t x281 = -1LL;
int32_t x282 = 44913;
volatile int32_t t56 = 7;
int64_t x286 = INT64_MAX;
static uint32_t x287 = 3U;
uint16_t x288 = UINT16_MAX;
uint32_t t57 = 1587198951U;
volatile int64_t t58 = -1234856070418686561LL;
uint32_t x294 = UINT32_MAX;
static int8_t x303 = -1;
uint16_t x304 = UINT16_MAX;
volatile int8_t x310 = -1;
uint64_t t62 = 1773256170LLU;
uint64_t x318 = 219LLU;
uint32_t x324 = UINT32_MAX;
int16_t x343 = -2982;
int64_t x361 = -1LL;
int8_t x362 = INT8_MIN;
volatile uint32_t t72 = 41321479U;
int16_t x381 = 58;
static uint8_t x384 = UINT8_MAX;
int32_t x392 = 104902;
volatile int32_t t75 = 1;
volatile int8_t x397 = -15;
uint8_t x400 = UINT8_MAX;
int64_t t76 = -128831008131959517LL;
volatile int32_t x405 = INT32_MIN;
uint64_t t78 = 183210708234265LLU;
int8_t x432 = -1;
int16_t x436 = INT16_MIN;
uint64_t x438 = UINT64_MAX;
int8_t x442 = -1;
uint16_t x455 = 51U;
volatile int8_t x478 = -1;
volatile uint8_t x493 = 18U;
volatile uint32_t x494 = 92302092U;
volatile uint64_t t92 = 821023744285LLU;
static int64_t x503 = INT64_MIN;
int16_t x517 = -3519;
uint16_t x520 = 26098U;
static int16_t x523 = 14095;
int32_t t100 = -431;
int64_t x529 = INT64_MIN;
volatile int32_t t103 = 6930;
uint16_t x550 = 513U;
volatile int64_t x555 = 59623147967647919LL;
static int64_t t105 = -14838871093LL;
int8_t x557 = INT8_MIN;
int32_t x559 = INT32_MIN;
int64_t x561 = INT64_MIN;
int8_t x572 = -1;
int32_t x583 = -1;
int32_t t112 = 92732;
static uint8_t x586 = UINT8_MAX;
uint32_t x623 = 1226842369U;
uint64_t x624 = UINT64_MAX;
uint16_t x629 = 4720U;
volatile int64_t t122 = -1418402664LL;
int64_t x638 = 1632522705LL;
volatile uint16_t x641 = 33U;
int16_t x647 = INT16_MIN;
int64_t x648 = INT64_MIN;
int64_t t125 = 134291683184829885LL;
int16_t x653 = INT16_MIN;
volatile uint32_t x662 = 3U;
int8_t x675 = -1;
uint8_t x677 = 23U;
uint64_t x679 = 100630452649154476LLU;
uint64_t t131 = 3202245330650LLU;
int8_t x684 = INT8_MIN;
volatile int16_t x689 = INT16_MIN;
static volatile int64_t t134 = -6716184840LL;
int16_t x704 = INT16_MIN;
uint32_t x705 = 7223U;
uint16_t x708 = 20396U;
int16_t x720 = -10;
int32_t t142 = 10;
uint64_t x735 = 284720956LLU;
volatile int16_t x736 = -1;
static volatile int32_t x743 = INT32_MAX;
volatile int64_t t147 = 6978550LL;
int16_t x770 = INT16_MIN;
int16_t x792 = INT16_MAX;
int64_t t159 = 119484494236LL;
volatile uint8_t x827 = 2U;
static int64_t x829 = 234497050032LL;
int64_t x832 = 7530440051LL;
volatile int64_t x839 = -1LL;
int32_t x845 = 727803931;
int64_t x847 = -1LL;
uint16_t x848 = 1U;
volatile int64_t t165 = -22188439178LL;
static uint32_t x853 = 1487U;
volatile int64_t x857 = -1LL;
static volatile int32_t t168 = 3;
int8_t x879 = 3;
volatile int8_t x880 = 1;
static int16_t x882 = 5;
uint32_t x891 = 3432260U;
uint16_t x904 = UINT16_MAX;
volatile uint32_t t174 = 1357497416U;
static volatile int32_t t175 = -27310;
volatile uint16_t x919 = UINT16_MAX;
volatile uint32_t t177 = 20043U;
volatile int32_t t180 = 21;
uint32_t x936 = 5U;
int64_t t181 = -230640561925LL;
static volatile int64_t x950 = INT64_MIN;
int16_t x966 = -873;
static uint64_t x967 = 130206479LLU;
volatile uint64_t x974 = 1154LLU;
volatile int32_t x975 = -1;
volatile int32_t t188 = 10211;
volatile int64_t t192 = -55282885LL;
uint32_t x995 = 43U;
uint32_t x1000 = UINT32_MAX;
static int8_t x1004 = -1;
volatile int8_t x1008 = INT8_MIN;
int8_t x1009 = INT8_MIN;
uint16_t x1013 = UINT16_MAX;
static int64_t t199 = 6902LL;


void f0(void) {
    	volatile uint16_t x2 = 3U;
	static volatile int32_t x3 = 13607;
	int16_t x4 = -1;
	static int32_t t0 = -4782226;

    t0 = ((x1!=x2)%(x3&x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x7 = -1;
	static uint16_t x8 = 32U;

    t1 = ((x5!=x6)%(x7&x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 3183U;
	static volatile uint8_t x10 = UINT8_MAX;
	volatile int32_t x11 = INT32_MIN;
	static volatile int64_t x12 = INT64_MAX;
	static int64_t t2 = 144LL;

    t2 = ((x9!=x10)%(x11&x12));

    if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 729147;
	static int8_t x16 = INT8_MAX;
	volatile int32_t t3 = 589;

    t3 = ((x13!=x14)%(x15&x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x18 = -13638;
	volatile int32_t x19 = INT32_MIN;
	static int32_t x20 = -5955;
	int32_t t4 = -5060646;

    t4 = ((x17!=x18)%(x19&x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 8989U;
	volatile int32_t x22 = -4;
	static int64_t x23 = -1LL;
	uint16_t x24 = 18U;
	int64_t t5 = -613771497935LL;

    t5 = ((x21!=x22)%(x23&x24));

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = INT32_MIN;
	static volatile uint32_t x27 = 1U;
	volatile uint32_t t6 = 69890U;

    t6 = ((x25!=x26)%(x27&x28));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	volatile int32_t x31 = INT32_MIN;
	int8_t x32 = INT8_MIN;
	static volatile int32_t t7 = -76;

    t7 = ((x29!=x30)%(x31&x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = INT32_MAX;
	int32_t x34 = INT32_MIN;
	int32_t x35 = INT32_MIN;
	static volatile int16_t x36 = -920;
	static volatile int32_t t8 = 3;

    t8 = ((x33!=x34)%(x35&x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x37 = 101U;
	uint64_t x38 = 335504LLU;
	int32_t x40 = -1;
	volatile int32_t t9 = 18904;

    t9 = ((x37!=x38)%(x39&x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = -9LL;
	int64_t x42 = INT64_MIN;
	volatile int32_t x44 = INT32_MAX;
	int32_t t10 = -50;

    t10 = ((x41!=x42)%(x43&x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = 3828000LL;
	uint16_t x50 = UINT16_MAX;
	uint32_t x51 = UINT32_MAX;

    t11 = ((x49!=x50)%(x51&x52));

    if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = UINT64_MAX;
	int64_t x54 = INT64_MIN;
	int32_t x55 = -140520966;
	int16_t x56 = 174;

    t12 = ((x53!=x54)%(x55&x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x57 = 192354;
	volatile uint16_t x58 = UINT16_MAX;
	int64_t x59 = -4992LL;
	volatile int64_t t13 = -49LL;

    t13 = ((x57!=x58)%(x59&x60));

    if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = -1LL;
	int64_t x62 = INT64_MAX;
	volatile int16_t x63 = INT16_MIN;
	int8_t x64 = -1;
	volatile int32_t t14 = -3852;

    t14 = ((x61!=x62)%(x63&x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x66 = -1582507LL;
	int16_t x67 = -231;
	uint16_t x68 = 633U;
	volatile int32_t t15 = -894199492;

    t15 = ((x65!=x66)%(x67&x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = INT32_MAX;
	int32_t x71 = INT32_MIN;
	int8_t x72 = INT8_MIN;
	int32_t t16 = -13099;

    t16 = ((x69!=x70)%(x71&x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MIN;
	volatile int64_t x74 = INT64_MAX;
	int8_t x75 = INT8_MAX;
	static uint64_t x76 = 29392063LLU;
	uint64_t t17 = 23990LLU;

    t17 = ((x73!=x74)%(x75&x76));

    if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = -8882695002LL;
	static int8_t x82 = 1;
	int64_t x83 = -1LL;
	int64_t t18 = 15755LL;

    t18 = ((x81!=x82)%(x83&x84));

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = INT16_MIN;
	uint16_t x87 = UINT16_MAX;
	int64_t x88 = -1LL;
	static int64_t t19 = -3577771LL;

    t19 = ((x85!=x86)%(x87&x88));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x89 = 0U;
	static volatile int16_t x90 = INT16_MIN;
	static int32_t x92 = INT32_MAX;
	volatile int32_t t20 = 20966594;

    t20 = ((x89!=x90)%(x91&x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x93 = 11U;
	int16_t x95 = INT16_MIN;
	volatile int32_t t21 = -1;

    t21 = ((x93!=x94)%(x95&x96));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x101 = INT32_MAX;
	uint32_t x102 = 1157367U;
	uint16_t x103 = 6116U;
	int8_t x104 = INT8_MAX;
	volatile int32_t t22 = 5692803;

    t22 = ((x101!=x102)%(x103&x104));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x105 = INT8_MIN;
	uint32_t x106 = 111189994U;
	volatile uint32_t x108 = 1638764600U;

    t23 = ((x105!=x106)%(x107&x108));

    if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = -15;
	int32_t x110 = -1;
	static int8_t x111 = INT8_MIN;
	static volatile int8_t x112 = INT8_MIN;
	volatile int32_t t24 = 398277;

    t24 = ((x109!=x110)%(x111&x112));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x115 = -474523LL;
	volatile int16_t x116 = 43;
	volatile int64_t t25 = 186LL;

    t25 = ((x113!=x114)%(x115&x116));

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x117 = INT8_MIN;
	volatile int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MAX;
	int8_t x120 = -3;
	volatile int32_t t26 = 27711268;

    t26 = ((x117!=x118)%(x119&x120));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x121 = 89LLU;
	int64_t x122 = INT64_MAX;
	static int32_t x123 = 43;
	int32_t t27 = 44;

    t27 = ((x121!=x122)%(x123&x124));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x126 = INT16_MAX;
	int32_t x127 = INT32_MAX;
	static volatile int64_t x128 = INT64_MAX;

    t28 = ((x125!=x126)%(x127&x128));

    if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x133 = 1U;
	uint32_t x134 = 49U;
	int64_t x135 = 1LL;
	static volatile int64_t t29 = 1450LL;

    t29 = ((x133!=x134)%(x135&x136));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x137 = INT8_MIN;
	int16_t x138 = INT16_MAX;
	int16_t x139 = -1;
	volatile int8_t x140 = INT8_MIN;

    t30 = ((x137!=x138)%(x139&x140));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x141 = INT8_MAX;
	static uint32_t x142 = 2898U;
	uint32_t x143 = 494U;
	int8_t x144 = INT8_MAX;
	uint32_t t31 = 2106U;

    t31 = ((x141!=x142)%(x143&x144));

    if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x146 = 499U;
	volatile int32_t x147 = INT32_MIN;
	volatile int64_t x148 = INT64_MIN;
	volatile int64_t t32 = -8588361LL;

    t32 = ((x145!=x146)%(x147&x148));

    if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x157 = UINT32_MAX;
	uint16_t x158 = UINT16_MAX;
	int64_t x159 = -1LL;
	static int32_t x160 = 14390;
	int64_t t33 = -264219379699LL;

    t33 = ((x157!=x158)%(x159&x160));

    if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x161 = INT32_MIN;
	volatile int64_t x162 = -319399LL;
	static int32_t x163 = INT32_MIN;

    t34 = ((x161!=x162)%(x163&x164));

    if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x165 = -1627LL;
	static int16_t x166 = -1;
	static int8_t x167 = -1;
	volatile int32_t x168 = -127;
	volatile int32_t t35 = -4;

    t35 = ((x165!=x166)%(x167&x168));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x169 = INT16_MIN;
	static uint8_t x170 = 6U;
	static uint8_t x171 = UINT8_MAX;
	static int32_t x172 = INT32_MAX;
	volatile int32_t t36 = 3023;

    t36 = ((x169!=x170)%(x171&x172));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x175 = 142U;
	static int8_t x176 = -1;
	int32_t t37 = -315545819;

    t37 = ((x173!=x174)%(x175&x176));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x177 = -1;
	int16_t x178 = INT16_MIN;
	volatile int64_t x179 = INT64_MAX;
	int16_t x180 = INT16_MIN;
	static volatile int64_t t38 = 6LL;

    t38 = ((x177!=x178)%(x179&x180));

    if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x185 = 48;
	int32_t x186 = -1;
	static int8_t x187 = INT8_MIN;
	int64_t x188 = -1LL;
	volatile int64_t t39 = 1119952995LL;

    t39 = ((x185!=x186)%(x187&x188));

    if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x193 = INT16_MAX;
	int64_t x194 = 1306LL;
	volatile int16_t x195 = INT16_MIN;
	int8_t x196 = INT8_MIN;
	int32_t t40 = 202732;

    t40 = ((x193!=x194)%(x195&x196));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x201 = INT16_MAX;
	static int32_t x202 = INT32_MIN;
	int8_t x203 = INT8_MIN;
	static int8_t x204 = -1;
	volatile int32_t t41 = 3015341;

    t41 = ((x201!=x202)%(x203&x204));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x205 = -2;
	static volatile int8_t x207 = -2;
	int32_t x208 = INT32_MIN;
	int32_t t42 = -3;

    t42 = ((x205!=x206)%(x207&x208));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x210 = 1U;
	static int64_t x211 = INT64_MIN;
	volatile int32_t x212 = -12288;
	int64_t t43 = -35976584002491512LL;

    t43 = ((x209!=x210)%(x211&x212));

    if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x217 = UINT32_MAX;
	int8_t x219 = INT8_MAX;
	int32_t t44 = 3;

    t44 = ((x217!=x218)%(x219&x220));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x222 = INT16_MIN;
	int64_t x223 = -246954LL;

    t45 = ((x221!=x222)%(x223&x224));

    if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x229 = 838711U;
	static int32_t x230 = INT32_MAX;
	int32_t x231 = -1;
	int64_t x232 = -2974790109LL;
	int64_t t46 = 943467451LL;

    t46 = ((x229!=x230)%(x231&x232));

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x237 = UINT32_MAX;
	static int64_t x238 = 2027183906463078950LL;
	int32_t x239 = INT32_MAX;
	static int8_t x240 = -1;
	volatile int32_t t47 = 53792061;

    t47 = ((x237!=x238)%(x239&x240));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x241 = 1805U;
	uint64_t x242 = 168502010868737LLU;
	int16_t x243 = INT16_MAX;
	static uint32_t x244 = 17568U;
	volatile uint32_t t48 = 243889U;

    t48 = ((x241!=x242)%(x243&x244));

    if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x245 = -1;
	int8_t x247 = -1;
	uint32_t t49 = 318737078U;

    t49 = ((x245!=x246)%(x247&x248));

    if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x250 = -1LL;
	static int32_t x251 = 1891;
	volatile int32_t x252 = -49778554;

    t50 = ((x249!=x250)%(x251&x252));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x253 = 7U;
	static int32_t x255 = INT32_MAX;
	uint8_t x256 = UINT8_MAX;
	int32_t t51 = 358151;

    t51 = ((x253!=x254)%(x255&x256));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x257 = INT16_MIN;
	uint16_t x258 = 13U;
	int16_t x259 = -1;
	static int16_t x260 = -9237;
	int32_t t52 = 28920991;

    t52 = ((x257!=x258)%(x259&x260));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x265 = INT8_MIN;
	uint8_t x266 = UINT8_MAX;
	uint16_t x268 = 1038U;
	volatile int32_t t53 = -253;

    t53 = ((x265!=x266)%(x267&x268));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x269 = UINT8_MAX;
	volatile int16_t x270 = INT16_MAX;
	int32_t x271 = 3;
	uint32_t x272 = 36675U;
	uint32_t t54 = 11375U;

    t54 = ((x269!=x270)%(x271&x272));

    if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x273 = UINT32_MAX;
	static uint16_t x274 = 1684U;
	int8_t x275 = INT8_MIN;
	uint64_t x276 = 454636247LLU;
	static volatile uint64_t t55 = 839358LLU;

    t55 = ((x273!=x274)%(x275&x276));

    if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x283 = INT8_MIN;
	int8_t x284 = INT8_MIN;

    t56 = ((x281!=x282)%(x283&x284));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x285 = UINT32_MAX;

    t57 = ((x285!=x286)%(x287&x288));

    if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x289 = 1349U;
	int8_t x290 = -1;
	volatile int64_t x291 = -1LL;
	int8_t x292 = -15;

    t58 = ((x289!=x290)%(x291&x292));

    if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x293 = 0;
	int64_t x295 = INT64_MAX;
	int64_t x296 = -1LL;
	int64_t t59 = 1959411892528916411LL;

    t59 = ((x293!=x294)%(x295&x296));

    if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x301 = UINT16_MAX;
	uint16_t x302 = 30U;
	volatile int32_t t60 = 81696;

    t60 = ((x301!=x302)%(x303&x304));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x309 = -1;
	volatile int8_t x311 = INT8_MIN;
	static int16_t x312 = INT16_MIN;
	static volatile int32_t t61 = -236077;

    t61 = ((x309!=x310)%(x311&x312));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x313 = UINT32_MAX;
	int32_t x314 = INT32_MIN;
	int8_t x315 = 50;
	static uint64_t x316 = 34229051316LLU;

    t62 = ((x313!=x314)%(x315&x316));

    if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x317 = 4;
	int64_t x319 = 4198952LL;
	static uint8_t x320 = UINT8_MAX;
	volatile int64_t t63 = -61505653481LL;

    t63 = ((x317!=x318)%(x319&x320));

    if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x321 = INT16_MAX;
	int8_t x322 = 0;
	volatile int64_t x323 = -1LL;
	static int64_t t64 = -325869LL;

    t64 = ((x321!=x322)%(x323&x324));

    if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x325 = 1643;
	volatile int8_t x326 = -31;
	static int8_t x327 = INT8_MAX;
	int16_t x328 = -4;
	int32_t t65 = 16;

    t65 = ((x325!=x326)%(x327&x328));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x329 = UINT16_MAX;
	int16_t x330 = INT16_MIN;
	volatile int64_t x331 = -1LL;
	uint16_t x332 = UINT16_MAX;
	volatile int64_t t66 = -2LL;

    t66 = ((x329!=x330)%(x331&x332));

    if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x337 = INT16_MAX;
	int32_t x338 = -105855;
	uint32_t x339 = UINT32_MAX;
	uint8_t x340 = 24U;
	uint32_t t67 = 1210194076U;

    t67 = ((x337!=x338)%(x339&x340));

    if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x341 = INT32_MIN;
	uint64_t x342 = 14831779877980054LLU;
	int64_t x344 = INT64_MIN;
	volatile int64_t t68 = 744686863406533LL;

    t68 = ((x341!=x342)%(x343&x344));

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x349 = 1114605LLU;
	uint64_t x350 = 29748329799LLU;
	int64_t x351 = INT64_MIN;
	int8_t x352 = INT8_MIN;
	volatile int64_t t69 = 47LL;

    t69 = ((x349!=x350)%(x351&x352));

    if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x357 = 10;
	int16_t x358 = -11;
	volatile int64_t x359 = -1LL;
	int64_t x360 = INT64_MIN;
	int64_t t70 = -98129091005053880LL;

    t70 = ((x357!=x358)%(x359&x360));

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x363 = 1LLU;
	int32_t x364 = INT32_MAX;
	static volatile uint64_t t71 = 1259832LLU;

    t71 = ((x361!=x362)%(x363&x364));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x365 = UINT32_MAX;
	volatile uint8_t x366 = UINT8_MAX;
	static uint8_t x367 = 14U;
	uint32_t x368 = 459U;

    t72 = ((x365!=x366)%(x367&x368));

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x377 = -1LL;
	static int16_t x378 = INT16_MIN;
	int8_t x379 = 2;
	static int32_t x380 = -37;
	volatile int32_t t73 = 439364881;

    t73 = ((x377!=x378)%(x379&x380));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x382 = 21;
	int16_t x383 = -1;
	volatile int32_t t74 = -2364;

    t74 = ((x381!=x382)%(x383&x384));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x389 = INT32_MIN;
	volatile int64_t x390 = 39LL;
	static uint16_t x391 = 26339U;

    t75 = ((x389!=x390)%(x391&x392));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x398 = 10LLU;
	int64_t x399 = -1LL;

    t76 = ((x397!=x398)%(x399&x400));

    if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x401 = 1U;
	static uint32_t x402 = UINT32_MAX;
	volatile uint16_t x403 = 3001U;
	uint32_t x404 = UINT32_MAX;
	volatile uint32_t t77 = 41823U;

    t77 = ((x401!=x402)%(x403&x404));

    if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x406 = -125;
	uint64_t x407 = 1420LLU;
	volatile int8_t x408 = INT8_MAX;

    t78 = ((x405!=x406)%(x407&x408));

    if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x409 = 10;
	int8_t x410 = INT8_MIN;
	volatile uint8_t x411 = UINT8_MAX;
	int16_t x412 = -6;
	volatile int32_t t79 = 5919448;

    t79 = ((x409!=x410)%(x411&x412));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x413 = UINT16_MAX;
	uint64_t x414 = 1328LLU;
	int64_t x415 = INT64_MAX;
	static int8_t x416 = INT8_MIN;
	static int64_t t80 = 1719LL;

    t80 = ((x413!=x414)%(x415&x416));

    if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x429 = -1;
	volatile int16_t x430 = INT16_MIN;
	int64_t x431 = -34979814061265LL;
	volatile int64_t t81 = 0LL;

    t81 = ((x429!=x430)%(x431&x432));

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x433 = INT16_MIN;
	uint64_t x434 = UINT64_MAX;
	int16_t x435 = -15;
	int32_t t82 = -110306320;

    t82 = ((x433!=x434)%(x435&x436));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x437 = INT64_MIN;
	static int16_t x439 = -1;
	volatile uint64_t x440 = 117405LLU;
	uint64_t t83 = 612680715615910566LLU;

    t83 = ((x437!=x438)%(x439&x440));

    if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x441 = -1LL;
	volatile int8_t x443 = -32;
	int16_t x444 = INT16_MIN;
	volatile int32_t t84 = -5;

    t84 = ((x441!=x442)%(x443&x444));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x453 = INT64_MIN;
	int8_t x454 = 1;
	uint16_t x456 = 1U;
	static volatile int32_t t85 = -1541;

    t85 = ((x453!=x454)%(x455&x456));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x461 = INT32_MIN;
	int16_t x462 = INT16_MIN;
	int64_t x463 = INT64_MAX;
	volatile int16_t x464 = 6635;
	volatile int64_t t86 = -23156228445LL;

    t86 = ((x461!=x462)%(x463&x464));

    if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x465 = 128U;
	int32_t x466 = INT32_MAX;
	int64_t x467 = INT64_MIN;
	int16_t x468 = INT16_MIN;
	static int64_t t87 = -1251737061597LL;

    t87 = ((x465!=x466)%(x467&x468));

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x469 = INT8_MAX;
	static int8_t x470 = -1;
	volatile int32_t x471 = INT32_MIN;
	int32_t x472 = INT32_MIN;
	int32_t t88 = 86788137;

    t88 = ((x469!=x470)%(x471&x472));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x477 = 1;
	static uint16_t x479 = 1U;
	int8_t x480 = 13;
	int32_t t89 = 1;

    t89 = ((x477!=x478)%(x479&x480));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x485 = -1LL;
	volatile uint64_t x486 = 1LLU;
	int8_t x487 = INT8_MIN;
	int64_t x488 = 30421LL;
	int64_t t90 = 341510927491LL;

    t90 = ((x485!=x486)%(x487&x488));

    if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x489 = 1842131168U;
	int16_t x490 = -80;
	int8_t x491 = -20;
	uint8_t x492 = 119U;
	int32_t t91 = 19;

    t91 = ((x489!=x490)%(x491&x492));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x495 = -1;
	static uint64_t x496 = 794LLU;

    t92 = ((x493!=x494)%(x495&x496));

    if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x497 = -1;
	int16_t x498 = -5;
	volatile int8_t x499 = INT8_MIN;
	static int16_t x500 = 880;
	int32_t t93 = -83582;

    t93 = ((x497!=x498)%(x499&x500));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x501 = UINT8_MAX;
	uint64_t x502 = 51861LLU;
	static int8_t x504 = -1;
	int64_t t94 = 59780331913701370LL;

    t94 = ((x501!=x502)%(x503&x504));

    if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x505 = 17297U;
	int16_t x506 = -1;
	int8_t x507 = INT8_MIN;
	static int8_t x508 = INT8_MIN;
	volatile int32_t t95 = -356842;

    t95 = ((x505!=x506)%(x507&x508));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x509 = INT32_MIN;
	int32_t x510 = INT32_MIN;
	static int8_t x511 = -1;
	volatile int16_t x512 = INT16_MIN;
	int32_t t96 = -4058;

    t96 = ((x509!=x510)%(x511&x512));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x513 = -1LL;
	int32_t x514 = -1;
	static volatile uint8_t x515 = UINT8_MAX;
	int64_t x516 = -495661330379622LL;
	int64_t t97 = -125854LL;

    t97 = ((x513!=x514)%(x515&x516));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x518 = 1;
	int64_t x519 = -1127247087074957075LL;
	volatile int64_t t98 = -52794LL;

    t98 = ((x517!=x518)%(x519&x520));

    if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x521 = 137307586226LLU;
	uint64_t x522 = UINT64_MAX;
	uint64_t x524 = UINT64_MAX;
	static uint64_t t99 = 245055LLU;

    t99 = ((x521!=x522)%(x523&x524));

    if (t99 != 1LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x525 = INT8_MAX;
	volatile uint64_t x526 = 360853490035487LLU;
	uint16_t x527 = UINT16_MAX;
	int16_t x528 = INT16_MIN;

    t100 = ((x525!=x526)%(x527&x528));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint8_t x530 = 8U;
	uint16_t x531 = 679U;
	static int16_t x532 = INT16_MAX;
	static volatile int32_t t101 = 111105;

    t101 = ((x529!=x530)%(x531&x532));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x537 = 3586189;
	static int8_t x538 = INT8_MIN;
	uint32_t x539 = 60U;
	volatile uint16_t x540 = 12U;
	volatile uint32_t t102 = 4874U;

    t102 = ((x537!=x538)%(x539&x540));

    if (t102 != 1U) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x541 = INT32_MAX;
	int32_t x542 = INT32_MIN;
	uint16_t x543 = 4380U;
	volatile int8_t x544 = INT8_MIN;

    t103 = ((x541!=x542)%(x543&x544));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x549 = UINT32_MAX;
	static uint16_t x551 = 1U;
	int32_t x552 = -1;
	volatile int32_t t104 = 2;

    t104 = ((x549!=x550)%(x551&x552));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x553 = 18U;
	int16_t x554 = 391;
	uint8_t x556 = 29U;

    t105 = ((x553!=x554)%(x555&x556));

    if (t105 != 1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x558 = -5;
	int32_t x560 = INT32_MIN;
	int32_t t106 = -91;

    t106 = ((x557!=x558)%(x559&x560));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x562 = 2914464437LLU;
	int8_t x563 = -59;
	static int32_t x564 = 46087;
	volatile int32_t t107 = 471;

    t107 = ((x561!=x562)%(x563&x564));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x565 = -1LL;
	int16_t x566 = INT16_MAX;
	volatile int8_t x567 = 1;
	int8_t x568 = -1;
	static int32_t t108 = -56297642;

    t108 = ((x565!=x566)%(x567&x568));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x569 = -1;
	static int32_t x570 = INT32_MIN;
	volatile int64_t x571 = 205194948LL;
	volatile int64_t t109 = 19275290528LL;

    t109 = ((x569!=x570)%(x571&x572));

    if (t109 != 1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x573 = INT8_MIN;
	static volatile uint8_t x574 = 3U;
	int64_t x575 = INT64_MIN;
	static int32_t x576 = -1;
	volatile int64_t t110 = 5392537LL;

    t110 = ((x573!=x574)%(x575&x576));

    if (t110 != 1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x577 = 4912LLU;
	int32_t x578 = -1;
	volatile int8_t x579 = -7;
	volatile int32_t x580 = INT32_MIN;
	volatile int32_t t111 = 185927;

    t111 = ((x577!=x578)%(x579&x580));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x581 = INT8_MIN;
	volatile int64_t x582 = 9961482289789728LL;
	int8_t x584 = -1;

    t112 = ((x581!=x582)%(x583&x584));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x585 = -1;
	int16_t x587 = 101;
	volatile int8_t x588 = INT8_MAX;
	volatile int32_t t113 = -1;

    t113 = ((x585!=x586)%(x587&x588));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x589 = UINT16_MAX;
	volatile int32_t x590 = INT32_MAX;
	int16_t x591 = -1;
	int32_t x592 = INT32_MAX;
	volatile int32_t t114 = 23;

    t114 = ((x589!=x590)%(x591&x592));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x601 = INT64_MIN;
	uint8_t x602 = 1U;
	volatile uint32_t x603 = UINT32_MAX;
	static uint32_t x604 = UINT32_MAX;
	uint32_t t115 = 600253017U;

    t115 = ((x601!=x602)%(x603&x604));

    if (t115 != 1U) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x605 = INT8_MAX;
	volatile int64_t x606 = 9729184941524LL;
	int8_t x607 = INT8_MIN;
	static int64_t x608 = 247220799LL;
	static int64_t t116 = -3113860455788259573LL;

    t116 = ((x605!=x606)%(x607&x608));

    if (t116 != 1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x613 = INT16_MIN;
	static int16_t x614 = INT16_MAX;
	int8_t x615 = -1;
	volatile int16_t x616 = 1;
	int32_t t117 = 1736722;

    t117 = ((x613!=x614)%(x615&x616));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x617 = -1;
	uint64_t x618 = 12326524571745700LLU;
	int64_t x619 = INT64_MAX;
	int64_t x620 = 121198057447897LL;
	int64_t t118 = -2293414212898124335LL;

    t118 = ((x617!=x618)%(x619&x620));

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x621 = INT64_MIN;
	int8_t x622 = 1;
	volatile uint64_t t119 = 16643717LLU;

    t119 = ((x621!=x622)%(x623&x624));

    if (t119 != 1LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x625 = INT32_MAX;
	uint16_t x626 = 29U;
	volatile int32_t x627 = INT32_MAX;
	uint32_t x628 = 14571U;
	volatile uint32_t t120 = 2645789U;

    t120 = ((x625!=x626)%(x627&x628));

    if (t120 != 1U) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x630 = INT16_MIN;
	static int8_t x631 = INT8_MAX;
	static int32_t x632 = INT32_MAX;
	volatile int32_t t121 = 504;

    t121 = ((x629!=x630)%(x631&x632));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x633 = -1LL;
	volatile int32_t x634 = -1;
	int64_t x635 = -1LL;
	static int8_t x636 = -1;

    t122 = ((x633!=x634)%(x635&x636));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x637 = 7835LLU;
	volatile int16_t x639 = INT16_MAX;
	int32_t x640 = -50;
	volatile int32_t t123 = 15;

    t123 = ((x637!=x638)%(x639&x640));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x642 = INT64_MAX;
	uint16_t x643 = 14824U;
	uint64_t x644 = UINT64_MAX;
	uint64_t t124 = 1352LLU;

    t124 = ((x641!=x642)%(x643&x644));

    if (t124 != 1LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x645 = INT16_MIN;
	uint16_t x646 = 155U;

    t125 = ((x645!=x646)%(x647&x648));

    if (t125 != 1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x649 = 0U;
	uint16_t x650 = 25940U;
	uint32_t x651 = UINT32_MAX;
	int32_t x652 = -1;
	static uint32_t t126 = 2929333U;

    t126 = ((x649!=x650)%(x651&x652));

    if (t126 != 1U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x654 = -1;
	int32_t x655 = 250178;
	int32_t x656 = -34941;
	static volatile int32_t t127 = 22996;

    t127 = ((x653!=x654)%(x655&x656));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x661 = INT64_MAX;
	int8_t x663 = -1;
	uint8_t x664 = UINT8_MAX;
	static volatile int32_t t128 = 105348;

    t128 = ((x661!=x662)%(x663&x664));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x669 = INT64_MIN;
	int8_t x670 = 1;
	int32_t x671 = 21;
	uint16_t x672 = 3674U;
	int32_t t129 = 666;

    t129 = ((x669!=x670)%(x671&x672));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x673 = 3709472LL;
	uint64_t x674 = UINT64_MAX;
	int64_t x676 = -1LL;
	volatile int64_t t130 = 441243LL;

    t130 = ((x673!=x674)%(x675&x676));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x678 = INT64_MIN;
	int32_t x680 = INT32_MIN;

    t131 = ((x677!=x678)%(x679&x680));

    if (t131 != 1LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x681 = 48U;
	uint8_t x682 = 0U;
	int64_t x683 = INT64_MIN;
	int64_t t132 = 3214389876369069LL;

    t132 = ((x681!=x682)%(x683&x684));

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x685 = INT32_MIN;
	static int32_t x686 = 156861;
	uint32_t x687 = UINT32_MAX;
	static int32_t x688 = 1;
	volatile uint32_t t133 = 27452018U;

    t133 = ((x685!=x686)%(x687&x688));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x690 = INT64_MIN;
	int64_t x691 = 7754057956280LL;
	int16_t x692 = INT16_MAX;

    t134 = ((x689!=x690)%(x691&x692));

    if (t134 != 1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x697 = UINT16_MAX;
	int32_t x698 = INT32_MIN;
	int64_t x699 = -1LL;
	volatile int8_t x700 = INT8_MIN;
	volatile int64_t t135 = -1LL;

    t135 = ((x697!=x698)%(x699&x700));

    if (t135 != 1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x701 = 1U;
	volatile int32_t x702 = 7261;
	int16_t x703 = -1;
	volatile int32_t t136 = -1;

    t136 = ((x701!=x702)%(x703&x704));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x706 = INT8_MIN;
	volatile uint32_t x707 = UINT32_MAX;
	uint32_t t137 = 322439U;

    t137 = ((x705!=x706)%(x707&x708));

    if (t137 != 1U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x709 = 210U;
	int64_t x710 = INT64_MIN;
	int8_t x711 = INT8_MIN;
	int8_t x712 = INT8_MIN;
	volatile int32_t t138 = 9728858;

    t138 = ((x709!=x710)%(x711&x712));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x713 = -4953;
	int16_t x714 = INT16_MAX;
	int64_t x715 = -2904101608LL;
	int8_t x716 = INT8_MIN;
	volatile int64_t t139 = -337352977250108245LL;

    t139 = ((x713!=x714)%(x715&x716));

    if (t139 != 1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x717 = 680378574LLU;
	static uint64_t x718 = 14132305837LLU;
	volatile uint32_t x719 = 120019U;
	volatile uint32_t t140 = 36857441U;

    t140 = ((x717!=x718)%(x719&x720));

    if (t140 != 1U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x721 = -1;
	int64_t x722 = INT64_MAX;
	static int32_t x723 = 33778790;
	static uint32_t x724 = UINT32_MAX;
	uint32_t t141 = 16U;

    t141 = ((x721!=x722)%(x723&x724));

    if (t141 != 1U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x725 = UINT32_MAX;
	volatile uint32_t x726 = 13U;
	int16_t x727 = -1;
	volatile uint16_t x728 = 12588U;

    t142 = ((x725!=x726)%(x727&x728));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x729 = INT64_MIN;
	static int16_t x730 = -7;
	int64_t x731 = -1LL;
	uint16_t x732 = UINT16_MAX;
	volatile int64_t t143 = 90590522LL;

    t143 = ((x729!=x730)%(x731&x732));

    if (t143 != 1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x733 = -1;
	uint64_t x734 = 277460217928888290LLU;
	static uint64_t t144 = 224700430962LLU;

    t144 = ((x733!=x734)%(x735&x736));

    if (t144 != 1LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x737 = 554;
	static int64_t x738 = -1LL;
	static int64_t x739 = -83746809805LL;
	volatile int16_t x740 = -1;
	static int64_t t145 = 239114LL;

    t145 = ((x737!=x738)%(x739&x740));

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x741 = -1;
	static uint8_t x742 = UINT8_MAX;
	static uint64_t x744 = 214850219083972LLU;
	uint64_t t146 = 802LLU;

    t146 = ((x741!=x742)%(x743&x744));

    if (t146 != 1LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x749 = 0U;
	int8_t x750 = INT8_MIN;
	int64_t x751 = INT64_MIN;
	int32_t x752 = INT32_MIN;

    t147 = ((x749!=x750)%(x751&x752));

    if (t147 != 1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x753 = INT16_MAX;
	volatile int8_t x754 = -34;
	static int8_t x755 = INT8_MIN;
	int64_t x756 = INT64_MIN;
	volatile int64_t t148 = 1LL;

    t148 = ((x753!=x754)%(x755&x756));

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x757 = 0LL;
	volatile uint8_t x758 = UINT8_MAX;
	int64_t x759 = INT64_MIN;
	int16_t x760 = INT16_MIN;
	volatile int64_t t149 = 35607201066LL;

    t149 = ((x757!=x758)%(x759&x760));

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x765 = -4138;
	uint64_t x766 = 40LLU;
	int64_t x767 = INT64_MIN;
	int32_t x768 = -945374167;
	volatile int64_t t150 = 1574664LL;

    t150 = ((x765!=x766)%(x767&x768));

    if (t150 != 1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x769 = INT8_MIN;
	static int8_t x771 = INT8_MIN;
	static int64_t x772 = -2580530768829055943LL;
	int64_t t151 = -66297043633LL;

    t151 = ((x769!=x770)%(x771&x772));

    if (t151 != 1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x773 = UINT64_MAX;
	static uint16_t x774 = 0U;
	int64_t x775 = -1LL;
	int64_t x776 = INT64_MIN;
	static int64_t t152 = -2077831LL;

    t152 = ((x773!=x774)%(x775&x776));

    if (t152 != 1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x777 = -48;
	volatile uint64_t x778 = 255275LLU;
	int8_t x779 = INT8_MIN;
	int16_t x780 = -125;
	int32_t t153 = -166235;

    t153 = ((x777!=x778)%(x779&x780));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x781 = -1;
	uint8_t x782 = 18U;
	int8_t x783 = 11;
	int32_t x784 = 26277;
	volatile int32_t t154 = 5857;

    t154 = ((x781!=x782)%(x783&x784));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x789 = INT64_MAX;
	uint8_t x790 = 3U;
	int16_t x791 = 1;
	volatile int32_t t155 = 0;

    t155 = ((x789!=x790)%(x791&x792));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x793 = 3U;
	static int64_t x794 = INT64_MAX;
	static volatile int8_t x795 = INT8_MIN;
	volatile int8_t x796 = -53;
	int32_t t156 = 0;

    t156 = ((x793!=x794)%(x795&x796));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x797 = -1;
	int32_t x798 = INT32_MAX;
	static int8_t x799 = -1;
	int8_t x800 = INT8_MIN;
	static volatile int32_t t157 = 209871;

    t157 = ((x797!=x798)%(x799&x800));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x801 = -1LL;
	int16_t x802 = INT16_MIN;
	static int8_t x803 = -1;
	static int16_t x804 = -1;
	volatile int32_t t158 = -216442;

    t158 = ((x801!=x802)%(x803&x804));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x805 = 7367U;
	int8_t x806 = 23;
	uint16_t x807 = UINT16_MAX;
	int64_t x808 = INT64_MAX;

    t159 = ((x805!=x806)%(x807&x808));

    if (t159 != 1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x813 = UINT32_MAX;
	volatile uint16_t x814 = 109U;
	volatile int32_t x815 = INT32_MAX;
	uint64_t x816 = 22762LLU;
	volatile uint64_t t160 = 11057663704LLU;

    t160 = ((x813!=x814)%(x815&x816));

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x817 = 1492LLU;
	volatile uint32_t x818 = UINT32_MAX;
	int64_t x819 = INT64_MAX;
	volatile uint32_t x820 = 21168645U;
	int64_t t161 = 4089573110LL;

    t161 = ((x817!=x818)%(x819&x820));

    if (t161 != 1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint64_t x825 = 103849LLU;
	uint64_t x826 = UINT64_MAX;
	volatile uint8_t x828 = 3U;
	int32_t t162 = -172109;

    t162 = ((x825!=x826)%(x827&x828));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x830 = INT8_MIN;
	int16_t x831 = INT16_MIN;
	volatile int64_t t163 = 5108022970LL;

    t163 = ((x829!=x830)%(x831&x832));

    if (t163 != 1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x837 = 12U;
	int64_t x838 = -1LL;
	volatile int32_t x840 = -1;
	volatile int64_t t164 = 123495816763153749LL;

    t164 = ((x837!=x838)%(x839&x840));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x846 = INT16_MIN;

    t165 = ((x845!=x846)%(x847&x848));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x849 = 89U;
	static int64_t x850 = -168351LL;
	int64_t x851 = INT64_MAX;
	uint16_t x852 = 1603U;
	volatile int64_t t166 = -1483736081LL;

    t166 = ((x849!=x850)%(x851&x852));

    if (t166 != 1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x854 = INT8_MIN;
	static volatile int32_t x855 = -1;
	int8_t x856 = 1;
	int32_t t167 = -371;

    t167 = ((x853!=x854)%(x855&x856));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x858 = UINT64_MAX;
	static int16_t x859 = -24;
	int16_t x860 = INT16_MIN;

    t168 = ((x857!=x858)%(x859&x860));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x865 = 3826LL;
	int32_t x866 = 441399419;
	int16_t x867 = 465;
	int32_t x868 = -1;
	volatile int32_t t169 = 4773818;

    t169 = ((x865!=x866)%(x867&x868));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x877 = -1LL;
	int32_t x878 = INT32_MIN;
	int32_t t170 = -18;

    t170 = ((x877!=x878)%(x879&x880));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x881 = 103425243262084LLU;
	volatile int32_t x883 = -1;
	static int8_t x884 = 9;
	int32_t t171 = 11;

    t171 = ((x881!=x882)%(x883&x884));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x885 = -1;
	volatile int16_t x886 = INT16_MIN;
	volatile uint64_t x887 = 6851367740LLU;
	volatile int32_t x888 = INT32_MAX;
	volatile uint64_t t172 = 44209LLU;

    t172 = ((x885!=x886)%(x887&x888));

    if (t172 != 1LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x889 = UINT16_MAX;
	int32_t x890 = -10658133;
	int32_t x892 = 122230;
	volatile uint32_t t173 = 15885U;

    t173 = ((x889!=x890)%(x891&x892));

    if (t173 != 1U) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x901 = INT16_MIN;
	volatile int16_t x902 = INT16_MIN;
	uint32_t x903 = 144588652U;

    t174 = ((x901!=x902)%(x903&x904));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x905 = 13;
	volatile int16_t x906 = -12153;
	uint16_t x907 = 33U;
	static uint8_t x908 = 81U;

    t175 = ((x905!=x906)%(x907&x908));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x913 = INT64_MIN;
	int8_t x914 = -1;
	uint16_t x915 = 7U;
	int8_t x916 = -1;
	int32_t t176 = 1340;

    t176 = ((x913!=x914)%(x915&x916));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x917 = 74U;
	int32_t x918 = INT32_MIN;
	uint32_t x920 = 6133U;

    t177 = ((x917!=x918)%(x919&x920));

    if (t177 != 1U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x921 = 862664873U;
	int16_t x922 = -1;
	int8_t x923 = -1;
	static volatile int64_t x924 = -1LL;
	volatile int64_t t178 = -3005999342932694LL;

    t178 = ((x921!=x922)%(x923&x924));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x925 = UINT16_MAX;
	uint64_t x926 = 67459741157LLU;
	uint32_t x927 = 134083916U;
	int32_t x928 = 15634;
	volatile uint32_t t179 = 105362U;

    t179 = ((x925!=x926)%(x927&x928));

    if (t179 != 1U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x929 = INT64_MIN;
	uint8_t x930 = 2U;
	static int16_t x931 = INT16_MAX;
	static volatile int16_t x932 = -60;

    t180 = ((x929!=x930)%(x931&x932));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x933 = 67U;
	static volatile uint8_t x934 = UINT8_MAX;
	int64_t x935 = INT64_MAX;

    t181 = ((x933!=x934)%(x935&x936));

    if (t181 != 1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x937 = UINT16_MAX;
	int8_t x938 = -1;
	static int8_t x939 = 13;
	uint16_t x940 = UINT16_MAX;
	int32_t t182 = 0;

    t182 = ((x937!=x938)%(x939&x940));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x941 = -1;
	uint8_t x942 = 2U;
	int16_t x943 = INT16_MIN;
	volatile uint16_t x944 = UINT16_MAX;
	int32_t t183 = 52;

    t183 = ((x941!=x942)%(x943&x944));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x949 = INT64_MIN;
	uint16_t x951 = 3253U;
	static int64_t x952 = INT64_MAX;
	int64_t t184 = 213795012LL;

    t184 = ((x949!=x950)%(x951&x952));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x957 = INT16_MIN;
	volatile int16_t x958 = INT16_MIN;
	uint8_t x959 = UINT8_MAX;
	int16_t x960 = -352;
	volatile int32_t t185 = -6328580;

    t185 = ((x957!=x958)%(x959&x960));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x961 = INT8_MIN;
	uint16_t x962 = 6U;
	int16_t x963 = -1;
	volatile uint8_t x964 = UINT8_MAX;
	volatile int32_t t186 = -13919;

    t186 = ((x961!=x962)%(x963&x964));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x965 = INT16_MAX;
	int16_t x968 = INT16_MAX;
	volatile uint64_t t187 = 7293LLU;

    t187 = ((x965!=x966)%(x967&x968));

    if (t187 != 1LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x973 = 3647767LLU;
	volatile int8_t x976 = INT8_MIN;

    t188 = ((x973!=x974)%(x975&x976));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x977 = INT8_MAX;
	int16_t x978 = 11866;
	int32_t x979 = -1;
	static int64_t x980 = -1LL;
	volatile int64_t t189 = 506031679LL;

    t189 = ((x977!=x978)%(x979&x980));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x981 = INT64_MAX;
	static int8_t x982 = INT8_MAX;
	uint8_t x983 = 60U;
	int8_t x984 = INT8_MAX;
	int32_t t190 = 5742136;

    t190 = ((x981!=x982)%(x983&x984));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x985 = 0;
	int32_t x986 = -1;
	static volatile int32_t x987 = 4080661;
	int32_t x988 = -27;
	int32_t t191 = 0;

    t191 = ((x985!=x986)%(x987&x988));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x989 = INT8_MIN;
	volatile uint16_t x990 = 0U;
	static volatile int64_t x991 = INT64_MAX;
	int8_t x992 = INT8_MIN;

    t192 = ((x989!=x990)%(x991&x992));

    if (t192 != 1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x993 = 2022542676228016745LLU;
	static volatile int8_t x994 = INT8_MIN;
	volatile int32_t x996 = -7367;
	uint32_t t193 = 55U;

    t193 = ((x993!=x994)%(x995&x996));

    if (t193 != 1U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x997 = 1U;
	int32_t x998 = INT32_MIN;
	int16_t x999 = 2180;
	uint32_t t194 = 1577U;

    t194 = ((x997!=x998)%(x999&x1000));

    if (t194 != 1U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x1001 = UINT32_MAX;
	int32_t x1002 = -66899;
	uint64_t x1003 = UINT64_MAX;
	uint64_t t195 = 384834871325828950LLU;

    t195 = ((x1001!=x1002)%(x1003&x1004));

    if (t195 != 1LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1005 = -1;
	uint16_t x1006 = 19U;
	uint32_t x1007 = UINT32_MAX;
	volatile uint32_t t196 = 96976U;

    t196 = ((x1005!=x1006)%(x1007&x1008));

    if (t196 != 1U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x1010 = INT16_MIN;
	volatile int16_t x1011 = -2009;
	int64_t x1012 = INT64_MIN;
	volatile int64_t t197 = 370844415315LL;

    t197 = ((x1009!=x1010)%(x1011&x1012));

    if (t197 != 1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1014 = -1;
	static int8_t x1015 = -43;
	static int64_t x1016 = -53768LL;
	volatile int64_t t198 = -4101557277580429LL;

    t198 = ((x1013!=x1014)%(x1015&x1016));

    if (t198 != 1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1017 = INT16_MIN;
	uint32_t x1018 = UINT32_MAX;
	int16_t x1019 = -1;
	int64_t x1020 = INT64_MAX;

    t199 = ((x1017!=x1018)%(x1019&x1020));

    if (t199 != 1LL) { NG(); } else { ; }
	
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

