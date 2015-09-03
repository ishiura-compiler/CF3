#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -1;
int16_t x9 = INT16_MIN;
static volatile uint8_t x10 = UINT8_MAX;
uint8_t x11 = 6U;
int16_t x14 = INT16_MAX;
volatile int8_t x18 = INT8_MAX;
volatile int16_t x29 = INT16_MAX;
volatile int32_t x41 = INT32_MAX;
static uint8_t x42 = 90U;
int16_t x47 = -162;
static int64_t t9 = -114475LL;
uint64_t t10 = 531829580780LLU;
static int32_t t12 = 80680484;
int32_t x66 = 1707;
int8_t x68 = INT8_MAX;
uint16_t x71 = UINT16_MAX;
volatile uint32_t t14 = 249U;
uint8_t x83 = 64U;
int64_t t16 = 507518234LL;
uint32_t x96 = 555366453U;
volatile int16_t x98 = INT16_MIN;
volatile int64_t t19 = -2378625766LL;
static int64_t x107 = 0LL;
int8_t x125 = INT8_MIN;
int32_t x129 = -2384995;
int64_t t26 = -639836425LL;
volatile int64_t t28 = -6041797976033785LL;
uint64_t x142 = 6425463322620034LLU;
uint8_t x144 = 26U;
volatile int32_t x164 = INT32_MAX;
volatile int64_t t34 = 61118778193958854LL;
static uint32_t x170 = UINT32_MAX;
int32_t x178 = INT32_MIN;
static volatile uint16_t x195 = 15890U;
int32_t x199 = -160;
volatile int64_t t41 = -45373348LL;
int16_t x201 = -1;
int32_t x204 = INT32_MIN;
uint16_t x205 = 669U;
static uint8_t x207 = 120U;
int16_t x208 = INT16_MAX;
static int8_t x218 = -34;
static int64_t t48 = 1514664827LL;
int32_t x231 = INT32_MIN;
static int16_t x236 = INT16_MIN;
int8_t x244 = -1;
int64_t t52 = 1006602791929LL;
uint32_t x251 = 118U;
int32_t x256 = INT32_MIN;
int32_t t55 = 730573994;
volatile int64_t t57 = -54LL;
uint32_t x272 = UINT32_MAX;
volatile uint32_t t59 = 237U;
uint16_t x275 = 1U;
volatile int16_t x280 = -1;
static int64_t t61 = -1726366573510LL;
int16_t x288 = 2638;
static volatile uint8_t x297 = 0U;
uint64_t x299 = UINT64_MAX;
volatile uint64_t t65 = 113633409713LLU;
uint16_t x306 = UINT16_MAX;
uint32_t t67 = 1U;
int64_t x324 = INT64_MAX;
volatile int8_t x325 = 7;
uint16_t x326 = 629U;
int8_t x333 = -1;
volatile uint32_t x336 = 42U;
volatile uint32_t t70 = 71972811U;
static uint8_t x340 = UINT8_MAX;
static int32_t t71 = -307;
static uint32_t x346 = 537927U;
volatile int32_t x349 = INT32_MAX;
int8_t x352 = INT8_MIN;
uint32_t x354 = 2U;
int8_t x361 = -1;
volatile int32_t x363 = 11;
int16_t x364 = INT16_MAX;
uint64_t t77 = 3LLU;
uint16_t x374 = 10393U;
int64_t x383 = -107296921345090LL;
volatile int16_t x387 = -1;
uint32_t x389 = UINT32_MAX;
int32_t x396 = INT32_MAX;
volatile uint64_t t83 = 5012181894560133LLU;
int32_t x398 = INT32_MIN;
uint64_t x400 = UINT64_MAX;
uint64_t t87 = 292300661031074779LLU;
static uint16_t x417 = 0U;
int64_t x419 = INT64_MIN;
int64_t x422 = -144LL;
volatile int64_t x423 = INT64_MIN;
volatile int64_t t90 = 1695315620316331LL;
volatile int64_t x429 = INT64_MIN;
static uint32_t x430 = UINT32_MAX;
int16_t x436 = INT16_MAX;
int16_t x437 = -189;
uint8_t x439 = UINT8_MAX;
uint32_t x441 = 146U;
int8_t x445 = INT8_MIN;
int8_t x453 = 3;
uint64_t x456 = 450908LLU;
int8_t x457 = 8;
int8_t x466 = 16;


void f0(void) {
	int32_t x1 = -38542;
	int64_t x3 = -324LL;
	int32_t x4 = INT32_MAX;
	volatile int64_t t0 = -2LL;

	t0 = ((x1%(x2-x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x12 = -3;
	volatile int32_t t1 = 18157529;

	t1 = ((x9%(x10-x11))/x12);

	if (t1 != 49) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	volatile int16_t x15 = 241;
	static int32_t x16 = INT32_MIN;
	volatile int32_t t2 = 396023;

	t2 = ((x13%(x14-x15))/x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -2;
	uint16_t x19 = 12U;
	volatile int32_t x20 = INT32_MAX;
	static int32_t t3 = 31302;

	t3 = ((x17%(x18-x19))/x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	uint8_t x22 = 25U;
	uint8_t x23 = 4U;
	uint16_t x24 = 1U;
	int64_t t4 = -85825LL;

	t4 = ((x21%(x22-x23))/x24);

	if (t4 != -8LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x30 = UINT64_MAX;
	int64_t x31 = 28571LL;
	uint64_t x32 = 2095648458427LLU;
	volatile uint64_t t5 = 60659946884LLU;

	t5 = ((x29%(x30-x31))/x32);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x37 = UINT32_MAX;
	int8_t x38 = -30;
	int16_t x39 = INT16_MIN;
	volatile int32_t x40 = INT32_MAX;
	volatile uint32_t t6 = 54243U;

	t6 = ((x37%(x38-x39))/x40);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x43 = INT64_MAX;
	int8_t x44 = -1;
	volatile int64_t t7 = -549053943LL;

	t7 = ((x41%(x42-x43))/x44);

	if (t7 != -2147483647LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x45 = UINT32_MAX;
	int8_t x46 = -6;
	int16_t x48 = -1;
	uint32_t t8 = 56525U;

	t8 = ((x45%(x46-x47))/x48);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = INT32_MAX;
	volatile uint16_t x50 = UINT16_MAX;
	volatile int64_t x51 = -275759048190499LL;
	int64_t x52 = INT64_MAX;

	t9 = ((x49%(x50-x51))/x52);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = UINT64_MAX;
	uint32_t x54 = 38583769U;
	int16_t x55 = INT16_MIN;
	volatile int32_t x56 = 86;

	t10 = ((x53%(x54-x55))/x56);

	if (t10 != 190768LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = 27317U;
	uint32_t x58 = 1U;
	static int8_t x59 = INT8_MAX;
	static int32_t x60 = INT32_MIN;
	uint32_t t11 = 655U;

	t11 = ((x57%(x58-x59))/x60);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x61 = INT16_MIN;
	int16_t x62 = 3725;
	int8_t x63 = 1;
	int32_t x64 = INT32_MAX;

	t12 = ((x61%(x62-x63))/x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MAX;
	static int32_t x67 = 3;
	static volatile int32_t t13 = 958;

	t13 = ((x65%(x66-x67))/x68);

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x69 = 1740U;
	volatile uint32_t x70 = 3245U;
	int8_t x72 = INT8_MIN;

	t14 = ((x69%(x70-x71))/x72);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = -1;
	uint64_t x78 = UINT64_MAX;
	static volatile uint8_t x79 = 3U;
	volatile int16_t x80 = INT16_MIN;
	uint64_t t15 = 300928477LLU;

	t15 = ((x77%(x78-x79))/x80);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x81 = UINT16_MAX;
	int16_t x82 = -2;
	static int64_t x84 = INT64_MIN;

	t16 = ((x81%(x82-x83))/x84);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x85 = 14415324229LLU;
	int32_t x86 = 0;
	int64_t x87 = INT64_MAX;
	uint32_t x88 = UINT32_MAX;
	volatile uint64_t t17 = 22377607444LLU;

	t17 = ((x85%(x86-x87))/x88);

	if (t17 != 3LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x93 = 502000709364LLU;
	int8_t x94 = INT8_MAX;
	int16_t x95 = 1437;
	volatile uint64_t t18 = 804LLU;

	t18 = ((x93%(x94-x95))/x96);

	if (t18 != 903LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x97 = INT8_MAX;
	int64_t x99 = -70173899981391LL;
	uint32_t x100 = 1011U;

	t19 = ((x97%(x98-x99))/x100);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x101 = 17U;
	int64_t x102 = INT64_MAX;
	uint64_t x103 = UINT64_MAX;
	uint32_t x104 = 3U;
	volatile uint64_t t20 = 1LLU;

	t20 = ((x101%(x102-x103))/x104);

	if (t20 != 5LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = -1;
	int64_t x106 = INT64_MAX;
	int32_t x108 = -1;
	int64_t t21 = 0LL;

	t21 = ((x105%(x106-x107))/x108);

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = 651779LLU;
	uint64_t x110 = UINT64_MAX;
	int64_t x111 = -356106460575044727LL;
	static int8_t x112 = INT8_MAX;
	uint64_t t22 = 35523068973348808LLU;

	t22 = ((x109%(x110-x111))/x112);

	if (t22 != 5132LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x117 = 0U;
	int32_t x118 = -80;
	int8_t x119 = INT8_MIN;
	int16_t x120 = INT16_MAX;
	volatile int32_t t23 = -1337;

	t23 = ((x117%(x118-x119))/x120);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x121 = 8497321195173LLU;
	uint8_t x122 = 4U;
	int64_t x123 = 2LL;
	static uint8_t x124 = UINT8_MAX;
	volatile uint64_t t24 = 2060085627LLU;

	t24 = ((x121%(x122-x123))/x124);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x126 = UINT64_MAX;
	int32_t x127 = INT32_MIN;
	uint16_t x128 = UINT16_MAX;
	static uint64_t t25 = 1519724LLU;

	t25 = ((x125%(x126-x127))/x128);

	if (t25 != 32768LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x130 = INT64_MAX;
	static uint8_t x131 = 28U;
	int64_t x132 = 8256283LL;

	t26 = ((x129%(x130-x131))/x132);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = 443;
	uint8_t x134 = 54U;
	volatile uint32_t x135 = UINT32_MAX;
	uint64_t x136 = 5434442880349874LLU;
	volatile uint64_t t27 = 257LLU;

	t27 = ((x133%(x134-x135))/x136);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = 4082920231551897768LL;
	static volatile int8_t x138 = INT8_MAX;
	int32_t x139 = 1622093;
	static volatile int16_t x140 = INT16_MIN;

	t28 = ((x137%(x138-x139))/x140);

	if (t28 != -23LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x141 = -56180;
	static volatile int64_t x143 = -554375LL;
	static volatile uint64_t t29 = 1131581465556LLU;

	t29 = ((x141%(x142-x143))/x144);

	if (t29 != 217859084574677LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x145 = 3;
	uint8_t x146 = 29U;
	uint16_t x147 = UINT16_MAX;
	uint32_t x148 = 250U;
	uint32_t t30 = 14047U;

	t30 = ((x145%(x146-x147))/x148);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = INT64_MIN;
	uint32_t x150 = 81U;
	static int8_t x151 = -1;
	int16_t x152 = -1;
	static int64_t t31 = 1587066035069694LL;

	t31 = ((x149%(x150-x151))/x152);

	if (t31 != 8LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x153 = UINT32_MAX;
	volatile int16_t x154 = INT16_MAX;
	static uint32_t x155 = UINT32_MAX;
	uint64_t x156 = 221674922122792481LLU;
	uint64_t t32 = 1782LLU;

	t32 = ((x153%(x154-x155))/x156);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x157 = 0U;
	int8_t x158 = INT8_MIN;
	uint32_t x159 = UINT32_MAX;
	static int16_t x160 = 2223;
	volatile uint32_t t33 = 9922638U;

	t33 = ((x157%(x158-x159))/x160);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x161 = -1LL;
	int32_t x162 = -11207;
	int16_t x163 = -592;

	t34 = ((x161%(x162-x163))/x164);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = -75;
	uint16_t x166 = 0U;
	int64_t x167 = -1LL;
	static uint64_t x168 = UINT64_MAX;
	uint64_t t35 = 286555492LLU;

	t35 = ((x165%(x166-x167))/x168);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x169 = 19U;
	int8_t x171 = INT8_MIN;
	int16_t x172 = INT16_MAX;
	volatile uint32_t t36 = 250842547U;

	t36 = ((x169%(x170-x171))/x172);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = INT8_MAX;
	int16_t x174 = INT16_MAX;
	volatile int16_t x175 = -1;
	int8_t x176 = -1;
	int32_t t37 = 158197324;

	t37 = ((x173%(x174-x175))/x176);

	if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = INT16_MIN;
	static int64_t x179 = 1337644482365645435LL;
	int32_t x180 = INT32_MIN;
	volatile int64_t t38 = -3171595001424986LL;

	t38 = ((x177%(x178-x179))/x180);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x185 = INT64_MIN;
	static int64_t x186 = 518799811849429927LL;
	int64_t x187 = -1LL;
	int64_t x188 = -1LL;
	int64_t t39 = 1355820LL;

	t39 = ((x185%(x186-x187))/x188);

	if (t39 != 403775235414467032LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x193 = 13184873LL;
	static uint8_t x194 = 102U;
	int16_t x196 = -79;
	volatile int64_t t40 = -3LL;

	t40 = ((x193%(x194-x195))/x196);

	if (t40 != -23LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = -1;
	int8_t x198 = INT8_MIN;
	volatile int64_t x200 = INT64_MAX;

	t41 = ((x197%(x198-x199))/x200);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x202 = UINT32_MAX;
	static int8_t x203 = 3;
	uint32_t t42 = 40780U;

	t42 = ((x201%(x202-x203))/x204);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x206 = INT8_MIN;
	int32_t t43 = 4;

	t43 = ((x205%(x206-x207))/x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x209 = UINT16_MAX;
	uint16_t x210 = 192U;
	int16_t x211 = INT16_MAX;
	uint16_t x212 = UINT16_MAX;
	static int32_t t44 = -287428;

	t44 = ((x209%(x210-x211))/x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = 19856;
	uint16_t x214 = 32431U;
	volatile int32_t x215 = -1;
	int64_t x216 = INT64_MIN;
	volatile int64_t t45 = 26491LL;

	t45 = ((x213%(x214-x215))/x216);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x217 = 1U;
	uint8_t x219 = 11U;
	uint8_t x220 = 1U;
	static int32_t t46 = 1930471;

	t46 = ((x217%(x218-x219))/x220);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x221 = INT16_MAX;
	volatile int8_t x222 = INT8_MAX;
	static volatile uint8_t x223 = 12U;
	int64_t x224 = 3LL;
	int64_t t47 = -610219251771LL;

	t47 = ((x221%(x222-x223))/x224);

	if (t47 != 35LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x225 = 371U;
	static int8_t x226 = INT8_MAX;
	int64_t x227 = INT64_MAX;
	uint32_t x228 = 16586U;

	t48 = ((x225%(x226-x227))/x228);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = INT32_MIN;
	int64_t x230 = -2115981810688102304LL;
	uint32_t x232 = UINT32_MAX;
	static int64_t t49 = -137280576LL;

	t49 = ((x229%(x230-x231))/x232);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x233 = 739942U;
	int8_t x234 = INT8_MIN;
	volatile int32_t x235 = INT32_MIN;
	uint32_t t50 = 87374891U;

	t50 = ((x233%(x234-x235))/x236);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x237 = INT16_MIN;
	volatile int32_t x238 = -4;
	int16_t x239 = -2945;
	int32_t x240 = -762;
	volatile int32_t t51 = -27680137;

	t51 = ((x237%(x238-x239))/x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x241 = 22;
	int8_t x242 = INT8_MIN;
	int64_t x243 = INT64_MIN;

	t52 = ((x241%(x242-x243))/x244);

	if (t52 != -22LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = INT16_MAX;
	int16_t x246 = 0;
	int16_t x247 = 2;
	int32_t x248 = -114312542;
	static int32_t t53 = -1;

	t53 = ((x245%(x246-x247))/x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x249 = 4U;
	static int32_t x250 = -112;
	uint16_t x252 = UINT16_MAX;
	uint32_t t54 = 465281734U;

	t54 = ((x249%(x250-x251))/x252);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x253 = INT32_MIN;
	uint8_t x254 = 1U;
	static int32_t x255 = 248067446;

	t55 = ((x253%(x254-x255))/x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x257 = 52810LLU;
	int32_t x258 = -41832778;
	int64_t x259 = INT64_MIN;
	static int16_t x260 = INT16_MIN;
	volatile uint64_t t56 = 10514LLU;

	t56 = ((x257%(x258-x259))/x260);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x261 = 3U;
	volatile int32_t x262 = -8192048;
	volatile int64_t x263 = INT64_MIN;
	uint32_t x264 = 14719682U;

	t57 = ((x261%(x262-x263))/x264);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x265 = INT16_MIN;
	uint64_t x266 = 961680006746510LLU;
	volatile int8_t x267 = -42;
	int32_t x268 = -1654;
	uint64_t t58 = 46841LLU;

	t58 = ((x265%(x266-x267))/x268);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x269 = 1;
	int8_t x270 = INT8_MIN;
	int16_t x271 = -1;

	t59 = ((x269%(x270-x271))/x272);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x273 = -134090LL;
	int16_t x274 = INT16_MIN;
	volatile int32_t x276 = INT32_MIN;
	volatile int64_t t60 = 1085835860634126LL;

	t60 = ((x273%(x274-x275))/x276);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x277 = INT64_MIN;
	volatile int16_t x278 = INT16_MAX;
	volatile uint8_t x279 = UINT8_MAX;

	t61 = ((x277%(x278-x279))/x280);

	if (t61 != 16384LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x285 = 1152142629LLU;
	int8_t x286 = INT8_MIN;
	int64_t x287 = INT64_MIN;
	volatile uint64_t t62 = 1440739LLU;

	t62 = ((x285%(x286-x287))/x288);

	if (t62 != 436748LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x293 = -1;
	int32_t x294 = INT32_MAX;
	int64_t x295 = 217584LL;
	int16_t x296 = 11;
	volatile int64_t t63 = 42806321246887LL;

	t63 = ((x293%(x294-x295))/x296);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x298 = 404360642U;
	static int16_t x300 = INT16_MIN;
	volatile uint64_t t64 = 182593904837LLU;

	t64 = ((x297%(x298-x299))/x300);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x301 = 393U;
	uint64_t x302 = 734112086149002182LLU;
	volatile int32_t x303 = -1;
	uint8_t x304 = 7U;

	t65 = ((x301%(x302-x303))/x304);

	if (t65 != 56LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x305 = INT8_MAX;
	volatile int32_t x307 = -1;
	int64_t x308 = -999424415LL;
	int64_t t66 = 14697281075LL;

	t66 = ((x305%(x306-x307))/x308);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x309 = 1983U;
	volatile int8_t x310 = 60;
	volatile int16_t x311 = -1;
	uint32_t x312 = UINT32_MAX;

	t67 = ((x309%(x310-x311))/x312);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x321 = INT64_MIN;
	volatile uint32_t x322 = 1434726U;
	uint32_t x323 = 58299U;
	int64_t t68 = -60421964437693LL;

	t68 = ((x321%(x322-x323))/x324);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x327 = 3U;
	volatile int8_t x328 = -1;
	volatile int32_t t69 = 195913;

	t69 = ((x325%(x326-x327))/x328);

	if (t69 != -7) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x334 = INT8_MIN;
	static uint16_t x335 = 115U;

	t70 = ((x333%(x334-x335))/x336);

	if (t70 != 102261126U) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x337 = INT32_MIN;
	uint16_t x338 = UINT16_MAX;
	static uint16_t x339 = 1061U;

	t71 = ((x337%(x338-x339))/x340);

	if (t71 != -188) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x341 = 29U;
	uint64_t x342 = UINT64_MAX;
	int16_t x343 = 12100;
	int8_t x344 = -1;
	static volatile uint64_t t72 = 4356720927LLU;

	t72 = ((x341%(x342-x343))/x344);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x345 = 10986133LLU;
	int16_t x347 = INT16_MIN;
	uint32_t x348 = UINT32_MAX;
	volatile uint64_t t73 = 231099015357LLU;

	t73 = ((x345%(x346-x347))/x348);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x350 = 8285U;
	static int8_t x351 = INT8_MIN;
	uint32_t t74 = 6U;

	t74 = ((x349%(x350-x351))/x352);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x353 = -45;
	int32_t x355 = INT32_MIN;
	uint64_t x356 = 148799173609LLU;
	static uint64_t t75 = 8300LLU;

	t75 = ((x353%(x354-x355))/x356);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x362 = 408;
	int32_t t76 = 64;

	t76 = ((x361%(x362-x363))/x364);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x369 = 2830949828787286LLU;
	static volatile int16_t x370 = INT16_MIN;
	int32_t x371 = 0;
	int8_t x372 = -10;

	t77 = ((x369%(x370-x371))/x372);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x373 = 20;
	uint16_t x375 = 4U;
	int64_t x376 = 3LL;
	int64_t t78 = -539554066233313782LL;

	t78 = ((x373%(x374-x375))/x376);

	if (t78 != 6LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x377 = 23798U;
	int16_t x378 = INT16_MIN;
	int8_t x379 = INT8_MAX;
	int64_t x380 = -11397219566LL;
	int64_t t79 = -13376LL;

	t79 = ((x377%(x378-x379))/x380);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x381 = 52LLU;
	volatile int64_t x382 = INT64_MIN;
	uint64_t x384 = 315166LLU;
	static volatile uint64_t t80 = 1755LLU;

	t80 = ((x381%(x382-x383))/x384);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x385 = -37499;
	uint32_t x386 = 59546043U;
	volatile int16_t x388 = -13;
	uint32_t t81 = 697237U;

	t81 = ((x385%(x386-x387))/x388);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x390 = -10;
	uint8_t x391 = 6U;
	int16_t x392 = -1;
	uint32_t t82 = 4389U;

	t82 = ((x389%(x390-x391))/x392);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x393 = 9;
	static uint16_t x394 = 5755U;
	uint64_t x395 = 313LLU;

	t83 = ((x393%(x394-x395))/x396);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x397 = INT16_MIN;
	uint32_t x399 = UINT32_MAX;
	uint64_t t84 = 1461801LLU;

	t84 = ((x397%(x398-x399))/x400);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x401 = UINT32_MAX;
	int32_t x402 = -1;
	static uint16_t x403 = 3U;
	uint64_t x404 = 70801074506766477LLU;
	uint64_t t85 = 2167314515829207369LLU;

	t85 = ((x401%(x402-x403))/x404);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x405 = 1U;
	uint8_t x406 = UINT8_MAX;
	static uint16_t x407 = UINT16_MAX;
	static int8_t x408 = INT8_MIN;
	int32_t t86 = -22010859;

	t86 = ((x405%(x406-x407))/x408);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x409 = INT8_MIN;
	int8_t x410 = INT8_MAX;
	uint64_t x411 = 120LLU;
	static int16_t x412 = INT16_MIN;

	t87 = ((x409%(x410-x411))/x412);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x413 = 13U;
	uint32_t x414 = 8503883U;
	volatile uint16_t x415 = 14584U;
	int16_t x416 = INT16_MIN;
	uint32_t t88 = 5U;

	t88 = ((x413%(x414-x415))/x416);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x418 = UINT64_MAX;
	int8_t x420 = INT8_MIN;
	uint64_t t89 = 127044994732821LLU;

	t89 = ((x417%(x418-x419))/x420);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x421 = INT64_MIN;
	int64_t x424 = -1LL;

	t90 = ((x421%(x422-x423))/x424);

	if (t90 != 144LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x431 = 31U;
	int64_t x432 = 110397890560LL;
	int64_t t91 = -38522364272LL;

	t91 = ((x429%(x430-x431))/x432);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x433 = 1426981U;
	int16_t x434 = -1;
	int64_t x435 = -3LL;
	int64_t t92 = 4145LL;

	t92 = ((x433%(x434-x435))/x436);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x438 = INT16_MIN;
	static int32_t x440 = 7464;
	int32_t t93 = -11454519;

	t93 = ((x437%(x438-x439))/x440);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x442 = INT8_MAX;
	static volatile int8_t x443 = -55;
	int32_t x444 = 16;
	uint32_t t94 = 17774239U;

	t94 = ((x441%(x442-x443))/x444);

	if (t94 != 9U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x446 = 1;
	uint8_t x447 = UINT8_MAX;
	int16_t x448 = -2454;
	volatile int32_t t95 = -530701;

	t95 = ((x445%(x446-x447))/x448);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x454 = 9219U;
	volatile int32_t x455 = INT32_MAX;
	volatile uint64_t t96 = 10LLU;

	t96 = ((x453%(x454-x455))/x456);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x458 = INT32_MAX;
	static volatile uint16_t x459 = 409U;
	volatile uint64_t x460 = 114126635292849LLU;
	volatile uint64_t t97 = 4038982069947LLU;

	t97 = ((x457%(x458-x459))/x460);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x461 = INT32_MIN;
	volatile int8_t x462 = INT8_MAX;
	static int16_t x463 = -1;
	int64_t x464 = INT64_MIN;
	static int64_t t98 = -350824164LL;

	t98 = ((x461%(x462-x463))/x464);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x465 = INT64_MAX;
	volatile int32_t x467 = 1;
	uint64_t x468 = UINT64_MAX;
	volatile uint64_t t99 = 284119817075LLU;

	t99 = ((x465%(x466-x467))/x468);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

