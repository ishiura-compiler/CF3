#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = INT64_MIN;
int32_t x9 = 200055;
uint64_t x18 = 22275894557570114LLU;
int16_t x21 = INT16_MIN;
static volatile uint16_t x36 = 1048U;
int16_t x41 = 6;
volatile int8_t x43 = -11;
int16_t x47 = INT16_MIN;
int8_t x54 = INT8_MIN;
uint16_t x55 = UINT16_MAX;
uint64_t x59 = 1684076LLU;
int8_t x63 = -1;
uint16_t x64 = 202U;
volatile uint16_t x67 = UINT16_MAX;
int32_t x71 = -1;
int32_t t16 = 6584789;
int64_t x76 = -1LL;
uint8_t x89 = 0U;
volatile int8_t x96 = -1;
int64_t x97 = -1LL;
int16_t x107 = INT16_MAX;
volatile int32_t t25 = 141190;
int64_t x121 = INT64_MAX;
uint8_t x126 = 97U;
volatile int16_t x129 = -1;
uint64_t x133 = 11056177444745534LLU;
int32_t x135 = INT32_MIN;
volatile int32_t t33 = -58;
static uint8_t x152 = 2U;
static uint8_t x156 = 10U;
int16_t x160 = 113;
int64_t x162 = INT64_MAX;
int8_t x163 = INT8_MIN;
uint32_t x165 = UINT32_MAX;
volatile int8_t x166 = INT8_MAX;
uint64_t x175 = 10070737422570LLU;
int8_t x176 = INT8_MAX;
int8_t x180 = 4;
int32_t t45 = -1;
int16_t x189 = INT16_MIN;
volatile int8_t x190 = -1;
static int16_t x191 = 13;
int16_t x194 = 9;
int16_t x197 = INT16_MIN;
volatile int32_t x201 = -3;
volatile uint8_t x216 = 17U;
int32_t t51 = 21918428;
int64_t x218 = 1316LL;
static int32_t t53 = 2;
int32_t x228 = INT32_MIN;
uint16_t x243 = 27U;
volatile int16_t x249 = INT16_MAX;
static int64_t x254 = INT64_MIN;
uint8_t x255 = 0U;
uint16_t x259 = 15U;
uint64_t x265 = 231LLU;
int64_t x267 = -1LL;
uint8_t x270 = 126U;
volatile uint64_t x275 = 1423196436796340745LLU;
static uint64_t x277 = UINT64_MAX;
int32_t x282 = 1177;
int16_t x289 = INT16_MIN;
static volatile int16_t x292 = -1;
int64_t x301 = INT64_MAX;
int16_t x302 = -1;
int8_t x303 = INT8_MIN;
static volatile uint8_t x307 = UINT8_MAX;
int64_t x308 = -244263729537LL;
uint32_t x310 = UINT32_MAX;
int32_t x320 = INT32_MIN;
int32_t x326 = INT32_MIN;
volatile int64_t x329 = INT64_MIN;
static int32_t x331 = -447;
uint8_t x333 = 32U;
int32_t x335 = INT32_MIN;
volatile int16_t x336 = INT16_MIN;
uint8_t x344 = 5U;
uint32_t x345 = 94929751U;
uint16_t x346 = UINT16_MAX;
int32_t t83 = -59364;
int16_t x349 = INT16_MIN;
uint16_t x350 = 1U;
static int32_t t85 = 23464193;
int32_t t87 = 1;
int16_t x373 = -1;
int16_t x378 = INT16_MIN;
static int64_t x382 = -1LL;
int32_t x384 = INT32_MIN;
int64_t x385 = 0LL;
static int32_t t93 = -123;
static uint64_t x390 = 206049LLU;
int32_t t94 = 3482280;
uint32_t x394 = 491U;
volatile int32_t x395 = 24520;
uint16_t x400 = 11557U;
int32_t x401 = INT32_MIN;
static volatile uint16_t x402 = 10513U;
static volatile uint64_t x406 = UINT64_MAX;
int64_t x411 = INT64_MIN;
volatile int16_t x412 = -3;
int32_t t99 = 2441894;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MIN;
	int32_t t0 = -89777896;

	t0 = (((x1%x2)&x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	static uint8_t x6 = 32U;
	int8_t x7 = INT8_MIN;
	int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = -18;

	t1 = (((x5%x6)&x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x10 = 1U;
	uint8_t x11 = 60U;
	int64_t x12 = INT64_MIN;
	int32_t t2 = -52;

	t2 = (((x9%x10)&x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static int8_t x14 = 5;
	uint8_t x15 = UINT8_MAX;
	static int64_t x16 = INT64_MAX;
	static int32_t t3 = -167626411;

	t3 = (((x13%x14)&x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 4U;
	uint16_t x19 = 590U;
	static uint64_t x20 = 2739246072504288234LLU;
	static int32_t t4 = 654946919;

	t4 = (((x17%x18)&x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x22 = 1;
	uint16_t x23 = UINT16_MAX;
	uint8_t x24 = 2U;
	volatile int32_t t5 = -19376;

	t5 = (((x21%x22)&x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	static volatile int32_t x26 = 418133;
	volatile uint8_t x27 = UINT8_MAX;
	static int16_t x28 = INT16_MIN;
	static volatile int32_t t6 = 89008;

	t6 = (((x25%x26)&x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	volatile uint64_t x34 = 43LLU;
	int16_t x35 = INT16_MIN;
	int32_t t7 = 64036062;

	t7 = (((x33%x34)&x35)<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = -1LL;
	uint16_t x38 = 1U;
	int32_t x39 = -1687;
	volatile int8_t x40 = 5;
	static volatile int32_t t8 = 9;

	t8 = (((x37%x38)&x39)<=x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x42 = INT16_MIN;
	uint16_t x44 = 4008U;
	volatile int32_t t9 = -695;

	t9 = (((x41%x42)&x43)<=x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	int32_t x46 = -1;
	int8_t x48 = -1;
	int32_t t10 = 1372196;

	t10 = (((x45%x46)&x47)<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	static uint16_t x50 = UINT16_MAX;
	int16_t x51 = 188;
	int16_t x52 = -1;
	int32_t t11 = 799458837;

	t11 = (((x49%x50)&x51)<=x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -12709;
	uint8_t x56 = UINT8_MAX;
	int32_t t12 = 315467485;

	t12 = (((x53%x54)&x55)<=x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x57 = 0U;
	uint8_t x58 = UINT8_MAX;
	volatile int32_t x60 = -14188507;
	int32_t t13 = -20382;

	t13 = (((x57%x58)&x59)<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -14267;
	uint32_t x62 = UINT32_MAX;
	static volatile int32_t t14 = 1;

	t14 = (((x61%x62)&x63)<=x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x65 = -1;
	int32_t x66 = -37;
	uint32_t x68 = 5477U;
	int32_t t15 = 197;

	t15 = (((x65%x66)&x67)<=x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 1989U;
	int32_t x70 = INT32_MIN;
	volatile int8_t x72 = INT8_MIN;

	t16 = (((x69%x70)&x71)<=x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x73 = UINT64_MAX;
	int16_t x74 = -118;
	uint16_t x75 = 460U;
	volatile int32_t t17 = -3896945;

	t17 = (((x73%x74)&x75)<=x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 4527597856593760LLU;
	int32_t x78 = INT32_MIN;
	uint64_t x79 = 317191279090LLU;
	int32_t x80 = INT32_MIN;
	int32_t t18 = 256264838;

	t18 = (((x77%x78)&x79)<=x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = 1LL;
	uint32_t x82 = UINT32_MAX;
	int16_t x83 = -1;
	int32_t x84 = INT32_MIN;
	static volatile int32_t t19 = -40979700;

	t19 = (((x81%x82)&x83)<=x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	int32_t x86 = -1;
	int64_t x87 = -48497887071364LL;
	int8_t x88 = INT8_MAX;
	volatile int32_t t20 = -49;

	t20 = (((x85%x86)&x87)<=x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x90 = 9U;
	volatile int64_t x91 = INT64_MIN;
	int16_t x92 = INT16_MIN;
	volatile int32_t t21 = 1;

	t21 = (((x89%x90)&x91)<=x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x93 = INT64_MIN;
	static int16_t x94 = -1;
	static int32_t x95 = INT32_MIN;
	volatile int32_t t22 = -3096;

	t22 = (((x93%x94)&x95)<=x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x98 = INT16_MIN;
	int8_t x99 = 0;
	uint8_t x100 = 0U;
	int32_t t23 = 811;

	t23 = (((x97%x98)&x99)<=x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = UINT8_MAX;
	int32_t x102 = -1;
	static int32_t x103 = INT32_MAX;
	int64_t x104 = -1LL;
	static int32_t t24 = -1;

	t24 = (((x101%x102)&x103)<=x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 1U;
	uint8_t x106 = 76U;
	volatile int64_t x108 = INT64_MIN;

	t25 = (((x105%x106)&x107)<=x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x109 = 2;
	static volatile int16_t x110 = INT16_MIN;
	volatile uint16_t x111 = UINT16_MAX;
	static int64_t x112 = INT64_MAX;
	static int32_t t26 = -1;

	t26 = (((x109%x110)&x111)<=x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x113 = UINT32_MAX;
	int8_t x114 = INT8_MIN;
	int16_t x115 = INT16_MIN;
	uint16_t x116 = UINT16_MAX;
	int32_t t27 = 344;

	t27 = (((x113%x114)&x115)<=x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	int8_t x118 = -3;
	static int8_t x119 = -1;
	uint8_t x120 = 3U;
	static int32_t t28 = -43403;

	t28 = (((x117%x118)&x119)<=x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x122 = 77785U;
	int32_t x123 = INT32_MIN;
	static uint32_t x124 = 6U;
	static int32_t t29 = 10;

	t29 = (((x121%x122)&x123)<=x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = 60355;
	int64_t x127 = INT64_MAX;
	volatile uint64_t x128 = 1022589202136990632LLU;
	volatile int32_t t30 = -84616337;

	t30 = (((x125%x126)&x127)<=x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x130 = INT16_MAX;
	volatile uint16_t x131 = UINT16_MAX;
	uint64_t x132 = UINT64_MAX;
	volatile int32_t t31 = 1040757;

	t31 = (((x129%x130)&x131)<=x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x134 = 18971219973915LL;
	int8_t x136 = INT8_MIN;
	static int32_t t32 = 254576416;

	t32 = (((x133%x134)&x135)<=x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x137 = 72LL;
	static int8_t x138 = INT8_MAX;
	uint64_t x139 = UINT64_MAX;
	int8_t x140 = INT8_MAX;

	t33 = (((x137%x138)&x139)<=x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x141 = 322536551U;
	static uint32_t x142 = 7U;
	volatile int64_t x143 = INT64_MIN;
	int32_t x144 = INT32_MIN;
	volatile int32_t t34 = 0;

	t34 = (((x141%x142)&x143)<=x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = INT64_MIN;
	int16_t x146 = INT16_MIN;
	int8_t x147 = INT8_MAX;
	static uint64_t x148 = 869762256495952LLU;
	int32_t t35 = -10290;

	t35 = (((x145%x146)&x147)<=x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = 20476620LLU;
	int16_t x150 = 16;
	int8_t x151 = 1;
	volatile int32_t t36 = -229;

	t36 = (((x149%x150)&x151)<=x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -16755849;
	static volatile int32_t x154 = 1770631;
	int64_t x155 = INT64_MIN;
	volatile int32_t t37 = 390295;

	t37 = (((x153%x154)&x155)<=x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x157 = UINT64_MAX;
	int16_t x158 = -10;
	static int8_t x159 = INT8_MIN;
	int32_t t38 = 18;

	t38 = (((x157%x158)&x159)<=x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MIN;
	uint32_t x164 = UINT32_MAX;
	int32_t t39 = -1;

	t39 = (((x161%x162)&x163)<=x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x167 = UINT16_MAX;
	int64_t x168 = -1LL;
	static volatile int32_t t40 = -6;

	t40 = (((x165%x166)&x167)<=x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = -1;
	static int64_t x170 = INT64_MIN;
	int32_t x171 = INT32_MIN;
	volatile int16_t x172 = 327;
	volatile int32_t t41 = 1;

	t41 = (((x169%x170)&x171)<=x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -1;
	int64_t x174 = INT64_MIN;
	int32_t t42 = -3610579;

	t42 = (((x173%x174)&x175)<=x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MIN;
	int16_t x178 = 1;
	int64_t x179 = -1LL;
	int32_t t43 = -2580;

	t43 = (((x177%x178)&x179)<=x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MAX;
	static volatile int64_t x182 = INT64_MAX;
	static int64_t x183 = -1LL;
	uint32_t x184 = UINT32_MAX;
	volatile int32_t t44 = 12312;

	t44 = (((x181%x182)&x183)<=x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = 2015;
	static uint64_t x186 = 12241124125LLU;
	int16_t x187 = INT16_MIN;
	int16_t x188 = -62;

	t45 = (((x185%x186)&x187)<=x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x192 = -1;
	int32_t t46 = 0;

	t46 = (((x189%x190)&x191)<=x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x193 = 51U;
	int16_t x195 = -1;
	int32_t x196 = INT32_MIN;
	static int32_t t47 = 1179139;

	t47 = (((x193%x194)&x195)<=x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x198 = 25U;
	int8_t x199 = INT8_MIN;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t48 = 64293;

	t48 = (((x197%x198)&x199)<=x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x202 = UINT8_MAX;
	int64_t x203 = 394LL;
	int16_t x204 = INT16_MAX;
	volatile int32_t t49 = 0;

	t49 = (((x201%x202)&x203)<=x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = -1;
	int16_t x210 = INT16_MIN;
	int8_t x211 = INT8_MIN;
	int32_t x212 = 0;
	volatile int32_t t50 = -1069810974;

	t50 = (((x209%x210)&x211)<=x212);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MIN;
	int32_t x214 = INT32_MAX;
	int16_t x215 = INT16_MIN;

	t51 = (((x213%x214)&x215)<=x216);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = -402LL;
	static int8_t x219 = -1;
	int64_t x220 = -1LL;
	int32_t t52 = -4;

	t52 = (((x217%x218)&x219)<=x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = -2788LL;
	volatile int16_t x222 = -1;
	uint16_t x223 = 0U;
	static uint8_t x224 = UINT8_MAX;

	t53 = (((x221%x222)&x223)<=x224);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = UINT32_MAX;
	static volatile int32_t x226 = INT32_MIN;
	int64_t x227 = INT64_MIN;
	volatile int32_t t54 = 807648852;

	t54 = (((x225%x226)&x227)<=x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x229 = INT32_MIN;
	volatile int16_t x230 = -1;
	int32_t x231 = -882873;
	uint32_t x232 = 5640697U;
	int32_t t55 = -1300928;

	t55 = (((x229%x230)&x231)<=x232);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = 186158725U;
	static int16_t x234 = 3;
	volatile int8_t x235 = INT8_MAX;
	volatile int16_t x236 = 12;
	int32_t t56 = 29543417;

	t56 = (((x233%x234)&x235)<=x236);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = -1;
	uint8_t x238 = 16U;
	int8_t x239 = INT8_MIN;
	uint8_t x240 = 35U;
	int32_t t57 = 0;

	t57 = (((x237%x238)&x239)<=x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x241 = 11U;
	static uint16_t x242 = 868U;
	int32_t x244 = INT32_MAX;
	volatile int32_t t58 = 1;

	t58 = (((x241%x242)&x243)<=x244);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x245 = 4993337U;
	int64_t x246 = INT64_MAX;
	volatile int16_t x247 = 0;
	uint8_t x248 = 11U;
	int32_t t59 = 567031;

	t59 = (((x245%x246)&x247)<=x248);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x250 = -1LL;
	int64_t x251 = -1LL;
	volatile int16_t x252 = INT16_MIN;
	static int32_t t60 = -95;

	t60 = (((x249%x250)&x251)<=x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x253 = INT64_MAX;
	int32_t x256 = -1;
	int32_t t61 = -30237877;

	t61 = (((x253%x254)&x255)<=x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x257 = UINT16_MAX;
	volatile int32_t x258 = INT32_MIN;
	volatile int64_t x260 = -6154728565LL;
	static volatile int32_t t62 = 528;

	t62 = (((x257%x258)&x259)<=x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x261 = 416477U;
	static uint32_t x262 = 12928922U;
	static volatile uint8_t x263 = 15U;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t63 = -88058328;

	t63 = (((x261%x262)&x263)<=x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x266 = 54;
	int64_t x268 = INT64_MIN;
	volatile int32_t t64 = 6088489;

	t64 = (((x265%x266)&x267)<=x268);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x269 = UINT64_MAX;
	uint32_t x271 = 2775U;
	static int64_t x272 = 112LL;
	volatile int32_t t65 = -229974539;

	t65 = (((x269%x270)&x271)<=x272);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = -1;
	uint64_t x274 = 2143435037827702376LLU;
	uint32_t x276 = UINT32_MAX;
	int32_t t66 = 8102;

	t66 = (((x273%x274)&x275)<=x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x278 = -1;
	uint64_t x279 = UINT64_MAX;
	uint64_t x280 = 543461280151544380LLU;
	int32_t t67 = 2;

	t67 = (((x277%x278)&x279)<=x280);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = 0;
	static volatile int8_t x283 = 4;
	int64_t x284 = INT64_MAX;
	volatile int32_t t68 = 13048;

	t68 = (((x281%x282)&x283)<=x284);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = INT32_MIN;
	uint32_t x286 = 1253829U;
	static uint64_t x287 = UINT64_MAX;
	uint32_t x288 = 0U;
	int32_t t69 = -3;

	t69 = (((x285%x286)&x287)<=x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x290 = -1;
	int64_t x291 = INT64_MIN;
	int32_t t70 = -709858;

	t70 = (((x289%x290)&x291)<=x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x293 = -1;
	int64_t x294 = -1LL;
	int64_t x295 = INT64_MAX;
	uint32_t x296 = 3467207U;
	int32_t t71 = 58;

	t71 = (((x293%x294)&x295)<=x296);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x297 = -22;
	int32_t x298 = INT32_MIN;
	static int16_t x299 = INT16_MIN;
	static int16_t x300 = INT16_MAX;
	int32_t t72 = -173700;

	t72 = (((x297%x298)&x299)<=x300);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x304 = -1;
	int32_t t73 = -280;

	t73 = (((x301%x302)&x303)<=x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = INT16_MIN;
	int32_t x306 = INT32_MIN;
	volatile int32_t t74 = 2;

	t74 = (((x305%x306)&x307)<=x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = INT32_MIN;
	static int32_t x311 = INT32_MIN;
	static int16_t x312 = INT16_MIN;
	volatile int32_t t75 = 16461771;

	t75 = (((x309%x310)&x311)<=x312);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x317 = 1U;
	int16_t x318 = 35;
	int64_t x319 = 480772941LL;
	static int32_t t76 = -79274;

	t76 = (((x317%x318)&x319)<=x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x321 = 315852824484086973LLU;
	int16_t x322 = INT16_MIN;
	volatile int16_t x323 = 37;
	int8_t x324 = -1;
	volatile int32_t t77 = 1054383;

	t77 = (((x321%x322)&x323)<=x324);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MAX;
	int32_t x327 = -1;
	int64_t x328 = INT64_MIN;
	int32_t t78 = 111;

	t78 = (((x325%x326)&x327)<=x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x330 = INT32_MIN;
	int64_t x332 = 1178409632648781LL;
	volatile int32_t t79 = -20011;

	t79 = (((x329%x330)&x331)<=x332);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x334 = UINT8_MAX;
	static int32_t t80 = 3501;

	t80 = (((x333%x334)&x335)<=x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = INT8_MAX;
	int64_t x338 = INT64_MAX;
	uint16_t x339 = 1160U;
	volatile int8_t x340 = -1;
	static volatile int32_t t81 = 22;

	t81 = (((x337%x338)&x339)<=x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x341 = -764;
	int64_t x342 = -204907126208143LL;
	int32_t x343 = 11694;
	int32_t t82 = -308;

	t82 = (((x341%x342)&x343)<=x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x347 = 16139827LL;
	int32_t x348 = -1;

	t83 = (((x345%x346)&x347)<=x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x351 = INT8_MIN;
	static int16_t x352 = INT16_MAX;
	volatile int32_t t84 = -3540;

	t84 = (((x349%x350)&x351)<=x352);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x353 = INT32_MIN;
	volatile int64_t x354 = -1040783934004097LL;
	uint32_t x355 = UINT32_MAX;
	uint16_t x356 = UINT16_MAX;

	t85 = (((x353%x354)&x355)<=x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x357 = INT32_MIN;
	int8_t x358 = INT8_MAX;
	int64_t x359 = -274865821114422530LL;
	int32_t x360 = 7;
	static int32_t t86 = -2016147;

	t86 = (((x357%x358)&x359)<=x360);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x361 = UINT16_MAX;
	int64_t x362 = -398744145LL;
	uint32_t x363 = 50179U;
	int32_t x364 = INT32_MAX;

	t87 = (((x361%x362)&x363)<=x364);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x365 = INT8_MIN;
	volatile int8_t x366 = -2;
	int32_t x367 = -1;
	static uint16_t x368 = 30U;
	static volatile int32_t t88 = 109;

	t88 = (((x365%x366)&x367)<=x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x369 = UINT32_MAX;
	volatile int8_t x370 = -1;
	static int8_t x371 = -1;
	int32_t x372 = 3897359;
	int32_t t89 = 2689678;

	t89 = (((x369%x370)&x371)<=x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x374 = 5U;
	static volatile uint64_t x375 = UINT64_MAX;
	uint32_t x376 = UINT32_MAX;
	int32_t t90 = 15454017;

	t90 = (((x373%x374)&x375)<=x376);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = INT8_MAX;
	uint32_t x379 = 32959062U;
	volatile int64_t x380 = 30820755862LL;
	volatile int32_t t91 = -294102463;

	t91 = (((x377%x378)&x379)<=x380);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = 1;
	static uint64_t x383 = UINT64_MAX;
	int32_t t92 = 677;

	t92 = (((x381%x382)&x383)<=x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x386 = -1;
	int32_t x387 = INT32_MAX;
	uint8_t x388 = UINT8_MAX;

	t93 = (((x385%x386)&x387)<=x388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x389 = 325;
	int8_t x391 = -1;
	volatile uint32_t x392 = 7U;

	t94 = (((x389%x390)&x391)<=x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x393 = 14U;
	uint8_t x396 = 0U;
	volatile int32_t t95 = -59;

	t95 = (((x393%x394)&x395)<=x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = INT32_MIN;
	int64_t x398 = INT64_MAX;
	int16_t x399 = INT16_MIN;
	volatile int32_t t96 = 61655160;

	t96 = (((x397%x398)&x399)<=x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x403 = INT64_MIN;
	static uint32_t x404 = UINT32_MAX;
	volatile int32_t t97 = 111488669;

	t97 = (((x401%x402)&x403)<=x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x405 = 1;
	uint32_t x407 = 3U;
	volatile int32_t x408 = INT32_MIN;
	static int32_t t98 = 22341557;

	t98 = (((x405%x406)&x407)<=x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = INT8_MAX;
	int64_t x410 = -1LL;

	t99 = (((x409%x410)&x411)<=x412);

	if (t99 != 0) { NG(); } else { ; }
	
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


    return 0;
}

