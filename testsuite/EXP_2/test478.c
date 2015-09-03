#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x9 = UINT64_MAX;
volatile int16_t x10 = INT16_MAX;
int16_t x13 = INT16_MIN;
int32_t t3 = 5578;
int64_t x17 = INT64_MIN;
int16_t x19 = -221;
volatile int32_t t4 = 3;
uint64_t x21 = 9658LLU;
int64_t x26 = -1836439545631LL;
int32_t x28 = 1834;
int64_t x37 = INT64_MAX;
uint64_t x40 = UINT64_MAX;
volatile int32_t t8 = -25;
uint32_t x43 = 117587571U;
int32_t x44 = 3370034;
volatile uint8_t x51 = UINT8_MAX;
static uint64_t x54 = 54999889LLU;
volatile int8_t x63 = 0;
static volatile int32_t t14 = 27793;
static int8_t x67 = INT8_MAX;
static int32_t x73 = INT32_MIN;
int64_t x76 = 2245032534LL;
uint8_t x83 = 0U;
int64_t x84 = INT64_MIN;
int8_t x94 = 3;
static uint16_t x98 = UINT16_MAX;
volatile int32_t x103 = -1;
int8_t x104 = INT8_MAX;
volatile int32_t t23 = -169374953;
volatile int32_t x109 = INT32_MIN;
volatile int32_t t25 = -374055370;
int32_t x123 = 1;
static uint64_t x125 = 8156303LLU;
uint16_t x126 = 22488U;
static uint64_t x128 = 860812LLU;
static volatile int16_t x129 = INT16_MIN;
uint64_t x134 = 3919695947LLU;
int32_t t31 = 14946;
static uint64_t x154 = UINT64_MAX;
static volatile int32_t t35 = 144;
static volatile uint8_t x165 = 51U;
uint16_t x167 = 52U;
static int16_t x173 = INT16_MIN;
uint64_t x182 = 95703286LLU;
static uint16_t x185 = 650U;
static int8_t x186 = 2;
uint32_t x193 = 44U;
int32_t t44 = -196403;
static uint16_t x203 = 18804U;
int32_t t45 = -1365643;
static int8_t x210 = INT8_MIN;
int32_t x211 = 0;
int32_t x212 = INT32_MIN;
uint32_t x215 = 12U;
volatile int32_t t47 = -59937343;
volatile int32_t t48 = 1453051;
static int32_t t50 = -6620;
int32_t x244 = -1719;
int8_t x259 = -17;
volatile int32_t t55 = 244279913;
volatile int32_t t57 = 1;
int8_t x273 = 2;
static uint64_t x275 = 2660LLU;
int8_t x280 = INT8_MIN;
int32_t x282 = INT32_MIN;
int16_t x286 = INT16_MIN;
volatile uint8_t x291 = UINT8_MAX;
static int8_t x297 = 0;
int16_t x299 = -56;
volatile int32_t t64 = 30351;
static volatile int16_t x306 = -365;
static int8_t x311 = INT8_MAX;
static int32_t x341 = -1;
volatile int32_t t70 = 26;
uint32_t x351 = 107U;
int32_t t71 = 332;
int64_t x364 = INT64_MIN;
static int8_t x365 = 0;
volatile int16_t x367 = 1;
volatile int32_t t75 = -23129;
int16_t x398 = INT16_MIN;
static volatile int32_t t80 = 173989429;
volatile int32_t t81 = 16;
uint8_t x412 = 0U;
volatile int32_t x423 = 201398364;
static int64_t x424 = INT64_MIN;
volatile int32_t x425 = INT32_MIN;
int64_t x428 = INT64_MIN;
int64_t x431 = 16421358LL;
volatile int32_t x444 = 47151;
int8_t x448 = -4;
volatile int32_t t89 = -855;
int32_t t90 = 213550762;
int16_t x459 = INT16_MAX;
uint8_t x467 = 83U;
int64_t x469 = INT64_MIN;
static int16_t x473 = INT16_MAX;
static volatile int32_t t96 = 4906949;
int32_t x481 = INT32_MAX;
static volatile uint64_t x486 = 747125563362310316LLU;
uint64_t x487 = 3286913869460LLU;


void f0(void) {
	int16_t x1 = -1;
	int32_t x2 = -1;
	int64_t x3 = -18704899144287LL;
	int8_t x4 = -1;
	static volatile int32_t t0 = -519767;

	t0 = ((x1&(x2*x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	static uint8_t x6 = UINT8_MAX;
	int16_t x7 = -1;
	int16_t x8 = 14238;
	static int32_t t1 = -58;

	t1 = ((x5&(x6*x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x11 = -1;
	uint8_t x12 = 1U;
	volatile int32_t t2 = -53;

	t2 = ((x9&(x10*x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	uint64_t x15 = UINT64_MAX;
	uint16_t x16 = 95U;

	t3 = ((x13&(x14*x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x18 = INT16_MIN;
	int16_t x20 = -346;

	t4 = ((x17&(x18*x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MAX;
	int8_t x23 = INT8_MIN;
	volatile uint64_t x24 = UINT64_MAX;
	int32_t t5 = 396;

	t5 = ((x21&(x22*x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 253580185U;
	int8_t x27 = INT8_MIN;
	volatile int32_t t6 = -960707830;

	t6 = ((x25&(x26*x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	uint16_t x30 = 0U;
	volatile int8_t x31 = INT8_MAX;
	uint8_t x32 = UINT8_MAX;
	volatile int32_t t7 = 800436;

	t7 = ((x29&(x30*x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = -1LL;
	uint8_t x39 = 0U;

	t8 = ((x37&(x38*x39))<=x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x41 = 0U;
	int16_t x42 = INT16_MIN;
	static int32_t t9 = -1456872;

	t9 = ((x41&(x42*x43))<=x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 8300LL;
	int8_t x46 = -1;
	int32_t x47 = -1;
	int64_t x48 = -3LL;
	volatile int32_t t10 = -182263043;

	t10 = ((x45&(x46*x47))<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 43U;
	volatile int8_t x50 = INT8_MIN;
	static uint32_t x52 = 119U;
	volatile int32_t t11 = -12601;

	t11 = ((x49&(x50*x51))<=x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = INT8_MIN;
	int32_t x55 = INT32_MIN;
	uint32_t x56 = UINT32_MAX;
	volatile int32_t t12 = -91993;

	t12 = ((x53&(x54*x55))<=x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	uint16_t x58 = UINT16_MAX;
	static uint16_t x59 = 15725U;
	static uint64_t x60 = UINT64_MAX;
	volatile int32_t t13 = 280;

	t13 = ((x57&(x58*x59))<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 77U;
	uint64_t x62 = 17439696LLU;
	uint64_t x64 = 15LLU;

	t14 = ((x61&(x62*x63))<=x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x65 = 21880U;
	int16_t x66 = -159;
	static int8_t x68 = 51;
	static int32_t t15 = -115620;

	t15 = ((x65&(x66*x67))<=x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x69 = INT8_MAX;
	uint64_t x70 = 0LLU;
	volatile uint8_t x71 = 62U;
	int8_t x72 = INT8_MIN;
	volatile int32_t t16 = 962809150;

	t16 = ((x69&(x70*x71))<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = -3728633235LL;
	volatile int8_t x75 = INT8_MAX;
	int32_t t17 = 22863;

	t17 = ((x73&(x74*x75))<=x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 3331307U;
	uint16_t x78 = UINT16_MAX;
	uint64_t x79 = 284LLU;
	uint8_t x80 = UINT8_MAX;
	int32_t t18 = 6001;

	t18 = ((x77&(x78*x79))<=x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 19U;
	int16_t x82 = -61;
	int32_t t19 = -480711;

	t19 = ((x81&(x82*x83))<=x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = -1;
	volatile int32_t x90 = 12;
	int16_t x91 = INT16_MAX;
	static int8_t x92 = -37;
	volatile int32_t t20 = 18;

	t20 = ((x89&(x90*x91))<=x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x93 = INT64_MAX;
	uint16_t x95 = 4756U;
	uint8_t x96 = 1U;
	int32_t t21 = 20900;

	t21 = ((x93&(x94*x95))<=x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = INT64_MIN;
	uint64_t x99 = 582928127455259587LLU;
	static int16_t x100 = INT16_MIN;
	int32_t t22 = 90;

	t22 = ((x97&(x98*x99))<=x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -157;
	int64_t x102 = -1LL;

	t23 = ((x101&(x102*x103))<=x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = UINT64_MAX;
	uint16_t x106 = 113U;
	uint64_t x107 = 2450521LLU;
	volatile int16_t x108 = INT16_MIN;
	volatile int32_t t24 = 13577116;

	t24 = ((x105&(x106*x107))<=x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x110 = 1374U;
	static volatile int32_t x111 = INT32_MAX;
	static int32_t x112 = INT32_MAX;

	t25 = ((x109&(x110*x111))<=x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = 6U;
	volatile uint32_t x114 = 5952U;
	volatile int16_t x115 = INT16_MIN;
	int8_t x116 = INT8_MIN;
	int32_t t26 = -9532;

	t26 = ((x113&(x114*x115))<=x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x117 = INT64_MIN;
	static int64_t x118 = INT64_MAX;
	static uint8_t x119 = 0U;
	uint8_t x120 = 1U;
	volatile int32_t t27 = -20215;

	t27 = ((x117&(x118*x119))<=x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x121 = 1U;
	static int32_t x122 = INT32_MIN;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t28 = -603;

	t28 = ((x121&(x122*x123))<=x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x127 = -254389006828130LL;
	int32_t t29 = 11919;

	t29 = ((x125&(x126*x127))<=x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x130 = 15U;
	volatile int64_t x131 = -1LL;
	int8_t x132 = INT8_MAX;
	volatile int32_t t30 = 25;

	t30 = ((x129&(x130*x131))<=x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 17573U;
	int16_t x135 = INT16_MIN;
	static volatile int8_t x136 = INT8_MIN;

	t31 = ((x133&(x134*x135))<=x136);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x137 = INT32_MAX;
	int8_t x138 = 18;
	uint8_t x139 = UINT8_MAX;
	volatile uint8_t x140 = 7U;
	int32_t t32 = 125835139;

	t32 = ((x137&(x138*x139))<=x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MIN;
	uint64_t x143 = 1158314838119079261LLU;
	static int8_t x144 = INT8_MIN;
	volatile int32_t t33 = 22;

	t33 = ((x141&(x142*x143))<=x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x145 = INT8_MIN;
	int32_t x146 = -1;
	uint64_t x147 = UINT64_MAX;
	static uint32_t x148 = 7664072U;
	int32_t t34 = -123;

	t34 = ((x145&(x146*x147))<=x148);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = UINT8_MAX;
	static int16_t x155 = INT16_MIN;
	int64_t x156 = -1LL;

	t35 = ((x153&(x154*x155))<=x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = 4150037LL;
	volatile int8_t x158 = 1;
	int32_t x159 = INT32_MIN;
	int32_t x160 = -4495;
	static volatile int32_t t36 = -9854;

	t36 = ((x157&(x158*x159))<=x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x166 = -1;
	static int16_t x168 = INT16_MAX;
	volatile int32_t t37 = 5757;

	t37 = ((x165&(x166*x167))<=x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = UINT16_MAX;
	int8_t x170 = INT8_MIN;
	volatile int16_t x171 = 2060;
	uint8_t x172 = UINT8_MAX;
	static int32_t t38 = -734;

	t38 = ((x169&(x170*x171))<=x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x174 = -1;
	volatile int8_t x175 = -10;
	static int16_t x176 = 12479;
	int32_t t39 = -18895;

	t39 = ((x173&(x174*x175))<=x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = INT16_MIN;
	volatile int16_t x178 = INT16_MAX;
	int8_t x179 = INT8_MIN;
	int8_t x180 = -2;
	volatile int32_t t40 = 6;

	t40 = ((x177&(x178*x179))<=x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MIN;
	int32_t x183 = INT32_MIN;
	uint16_t x184 = 8500U;
	int32_t t41 = 230;

	t41 = ((x181&(x182*x183))<=x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x187 = INT8_MAX;
	volatile int16_t x188 = 1;
	int32_t t42 = -3;

	t42 = ((x185&(x186*x187))<=x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x194 = 0;
	int8_t x195 = INT8_MIN;
	uint8_t x196 = UINT8_MAX;
	volatile int32_t t43 = -109361;

	t43 = ((x193&(x194*x195))<=x196);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x197 = 2U;
	volatile uint64_t x198 = 23463626LLU;
	static int16_t x199 = 1;
	int32_t x200 = -1;

	t44 = ((x197&(x198*x199))<=x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x201 = 39LLU;
	static int16_t x202 = INT16_MAX;
	int8_t x204 = INT8_MAX;

	t45 = ((x201&(x202*x203))<=x204);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x209 = INT64_MIN;
	volatile int32_t t46 = -69;

	t46 = ((x209&(x210*x211))<=x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x213 = INT16_MIN;
	uint16_t x214 = UINT16_MAX;
	volatile int64_t x216 = INT64_MIN;

	t47 = ((x213&(x214*x215))<=x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x225 = UINT8_MAX;
	uint32_t x226 = UINT32_MAX;
	uint64_t x227 = UINT64_MAX;
	static int32_t x228 = 8044;

	t48 = ((x225&(x226*x227))<=x228);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x229 = INT64_MIN;
	volatile uint8_t x230 = 3U;
	volatile uint16_t x231 = UINT16_MAX;
	int64_t x232 = INT64_MIN;
	volatile int32_t t49 = 2831;

	t49 = ((x229&(x230*x231))<=x232);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = INT8_MIN;
	volatile int16_t x234 = -1708;
	static int8_t x235 = INT8_MIN;
	uint8_t x236 = 102U;

	t50 = ((x233&(x234*x235))<=x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x237 = -381;
	static volatile uint8_t x238 = UINT8_MAX;
	volatile uint32_t x239 = 3U;
	volatile uint8_t x240 = UINT8_MAX;
	volatile int32_t t51 = 548008782;

	t51 = ((x237&(x238*x239))<=x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x241 = INT8_MIN;
	int16_t x242 = 1;
	int8_t x243 = INT8_MIN;
	volatile int32_t t52 = -2;

	t52 = ((x241&(x242*x243))<=x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = -2054075077290391151LL;
	int64_t x246 = 3201LL;
	int8_t x247 = INT8_MIN;
	volatile uint16_t x248 = 156U;
	volatile int32_t t53 = 3045;

	t53 = ((x245&(x246*x247))<=x248);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x257 = 12160316LLU;
	int64_t x258 = -422897947859LL;
	uint64_t x260 = UINT64_MAX;
	volatile int32_t t54 = -21;

	t54 = ((x257&(x258*x259))<=x260);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x261 = 0;
	int64_t x262 = INT64_MAX;
	uint64_t x263 = UINT64_MAX;
	int8_t x264 = INT8_MIN;

	t55 = ((x261&(x262*x263))<=x264);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x265 = INT8_MIN;
	static int32_t x266 = 0;
	volatile int16_t x267 = 4;
	int16_t x268 = -1;
	int32_t t56 = -42665;

	t56 = ((x265&(x266*x267))<=x268);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x269 = INT32_MIN;
	int16_t x270 = INT16_MAX;
	int16_t x271 = 0;
	int8_t x272 = 13;

	t57 = ((x269&(x270*x271))<=x272);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x274 = 1911LLU;
	int64_t x276 = -1LL;
	int32_t t58 = 4;

	t58 = ((x273&(x274*x275))<=x276);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x277 = INT16_MIN;
	int64_t x278 = 11997635501716570LL;
	uint64_t x279 = 7231LLU;
	int32_t t59 = 4;

	t59 = ((x277&(x278*x279))<=x280);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x281 = INT8_MIN;
	volatile uint32_t x283 = 787U;
	uint8_t x284 = UINT8_MAX;
	int32_t t60 = 127549;

	t60 = ((x281&(x282*x283))<=x284);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x285 = INT32_MAX;
	uint16_t x287 = 10598U;
	int32_t x288 = 1;
	static volatile int32_t t61 = 278349461;

	t61 = ((x285&(x286*x287))<=x288);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = INT64_MIN;
	static int16_t x290 = INT16_MIN;
	static uint32_t x292 = 15364139U;
	volatile int32_t t62 = 39;

	t62 = ((x289&(x290*x291))<=x292);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x298 = UINT16_MAX;
	int16_t x300 = -15250;
	int32_t t63 = 944;

	t63 = ((x297&(x298*x299))<=x300);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x301 = 246U;
	static int16_t x302 = INT16_MAX;
	int32_t x303 = -60835;
	int64_t x304 = INT64_MAX;

	t64 = ((x301&(x302*x303))<=x304);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x305 = 20;
	int8_t x307 = -52;
	int16_t x308 = INT16_MIN;
	volatile int32_t t65 = 7;

	t65 = ((x305&(x306*x307))<=x308);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x309 = -1;
	int32_t x310 = -1371285;
	int8_t x312 = INT8_MAX;
	int32_t t66 = 1;

	t66 = ((x309&(x310*x311))<=x312);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x317 = INT16_MIN;
	uint8_t x318 = 48U;
	static uint64_t x319 = UINT64_MAX;
	static int64_t x320 = INT64_MIN;
	int32_t t67 = 1;

	t67 = ((x317&(x318*x319))<=x320);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x321 = 10898145755877073LLU;
	uint64_t x322 = UINT64_MAX;
	volatile int16_t x323 = -1;
	volatile int64_t x324 = -1LL;
	int32_t t68 = 0;

	t68 = ((x321&(x322*x323))<=x324);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x325 = -1;
	int64_t x326 = -1LL;
	volatile uint32_t x327 = 38025307U;
	volatile int8_t x328 = 0;
	int32_t t69 = -33691;

	t69 = ((x325&(x326*x327))<=x328);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x342 = 923U;
	volatile int16_t x343 = INT16_MAX;
	int32_t x344 = INT32_MAX;

	t70 = ((x341&(x342*x343))<=x344);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x349 = -1;
	int32_t x350 = -1;
	static uint64_t x352 = 54673391777612490LLU;

	t71 = ((x349&(x350*x351))<=x352);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x357 = INT32_MAX;
	int16_t x358 = -2;
	int32_t x359 = -1;
	static uint16_t x360 = 15U;
	int32_t t72 = -57668585;

	t72 = ((x357&(x358*x359))<=x360);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x361 = INT8_MIN;
	int32_t x362 = -1;
	int8_t x363 = -1;
	int32_t t73 = -6181;

	t73 = ((x361&(x362*x363))<=x364);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x366 = 1350073U;
	volatile int64_t x368 = INT64_MAX;
	volatile int32_t t74 = 0;

	t74 = ((x365&(x366*x367))<=x368);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x369 = -329299011928LL;
	uint8_t x370 = 23U;
	uint16_t x371 = 27204U;
	int8_t x372 = INT8_MAX;

	t75 = ((x369&(x370*x371))<=x372);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x377 = 21;
	int16_t x378 = 12786;
	int8_t x379 = INT8_MIN;
	static uint32_t x380 = UINT32_MAX;
	int32_t t76 = -1;

	t76 = ((x377&(x378*x379))<=x380);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x385 = -80;
	int16_t x386 = -1;
	int8_t x387 = INT8_MIN;
	static int32_t x388 = 88;
	static int32_t t77 = 108;

	t77 = ((x385&(x386*x387))<=x388);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x393 = INT32_MAX;
	int16_t x394 = -1;
	uint32_t x395 = 7645U;
	int16_t x396 = -11966;
	int32_t t78 = 36403626;

	t78 = ((x393&(x394*x395))<=x396);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x397 = UINT32_MAX;
	static uint8_t x399 = 23U;
	int64_t x400 = INT64_MIN;
	volatile int32_t t79 = 41;

	t79 = ((x397&(x398*x399))<=x400);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x401 = -1;
	volatile int32_t x402 = -3;
	uint32_t x403 = 9826691U;
	int16_t x404 = -1;

	t80 = ((x401&(x402*x403))<=x404);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x405 = INT32_MAX;
	int8_t x406 = INT8_MIN;
	static uint16_t x407 = UINT16_MAX;
	uint16_t x408 = 0U;

	t81 = ((x405&(x406*x407))<=x408);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x409 = 2U;
	int32_t x410 = -1;
	static int32_t x411 = 22;
	int32_t t82 = 121106688;

	t82 = ((x409&(x410*x411))<=x412);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x417 = INT32_MIN;
	int64_t x418 = -102768577LL;
	int64_t x419 = -915416189LL;
	uint64_t x420 = 17383742LLU;
	int32_t t83 = -51;

	t83 = ((x417&(x418*x419))<=x420);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x421 = 18001835353233015LLU;
	uint32_t x422 = 122U;
	volatile int32_t t84 = -81427625;

	t84 = ((x421&(x422*x423))<=x424);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x426 = 1;
	volatile int64_t x427 = -1LL;
	volatile int32_t t85 = 18;

	t85 = ((x425&(x426*x427))<=x428);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x429 = INT8_MAX;
	volatile uint16_t x430 = 117U;
	uint64_t x432 = 22892242545LLU;
	volatile int32_t t86 = -1;

	t86 = ((x429&(x430*x431))<=x432);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x437 = INT32_MIN;
	int32_t x438 = -1;
	uint16_t x439 = 4U;
	int32_t x440 = -1;
	static volatile int32_t t87 = 1892961;

	t87 = ((x437&(x438*x439))<=x440);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x441 = 29057U;
	int32_t x442 = -3207;
	int8_t x443 = 23;
	volatile int32_t t88 = -38039512;

	t88 = ((x441&(x442*x443))<=x444);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x445 = INT64_MAX;
	static volatile uint32_t x446 = 1004802435U;
	volatile int16_t x447 = INT16_MAX;

	t89 = ((x445&(x446*x447))<=x448);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x449 = 1U;
	int16_t x450 = 56;
	volatile int8_t x451 = -5;
	volatile int16_t x452 = INT16_MIN;

	t90 = ((x449&(x450*x451))<=x452);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x453 = 15087297U;
	static uint64_t x454 = UINT64_MAX;
	uint64_t x455 = UINT64_MAX;
	volatile int32_t x456 = INT32_MIN;
	volatile int32_t t91 = 249;

	t91 = ((x453&(x454*x455))<=x456);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x457 = -1;
	volatile int32_t x458 = -240;
	uint32_t x460 = 7U;
	static volatile int32_t t92 = 2049;

	t92 = ((x457&(x458*x459))<=x460);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x461 = -16;
	int32_t x462 = INT32_MIN;
	volatile uint32_t x463 = UINT32_MAX;
	static int32_t x464 = 1;
	volatile int32_t t93 = -30;

	t93 = ((x461&(x462*x463))<=x464);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x465 = -1;
	int64_t x466 = -5LL;
	int8_t x468 = 3;
	static volatile int32_t t94 = -8270457;

	t94 = ((x465&(x466*x467))<=x468);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x470 = -1LL;
	int32_t x471 = INT32_MIN;
	int64_t x472 = INT64_MAX;
	volatile int32_t t95 = -1;

	t95 = ((x469&(x470*x471))<=x472);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x474 = -3395;
	int16_t x475 = INT16_MIN;
	static int64_t x476 = -1LL;

	t96 = ((x473&(x474*x475))<=x476);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x482 = INT8_MAX;
	int16_t x483 = INT16_MIN;
	static int64_t x484 = INT64_MIN;
	volatile int32_t t97 = -105048474;

	t97 = ((x481&(x482*x483))<=x484);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x485 = 1;
	uint8_t x488 = 14U;
	int32_t t98 = 122;

	t98 = ((x485&(x486*x487))<=x488);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x493 = INT64_MAX;
	volatile int64_t x494 = -1LL;
	volatile uint8_t x495 = 1U;
	int64_t x496 = INT64_MAX;
	int32_t t99 = 99655;

	t99 = ((x493&(x494*x495))<=x496);

	if (t99 != 1) { NG(); } else { ; }
	
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

