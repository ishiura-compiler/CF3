#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x9 = INT8_MIN;
uint16_t x13 = UINT16_MAX;
int8_t x20 = 0;
int64_t x21 = INT64_MIN;
static volatile uint64_t x23 = 747313215LLU;
volatile int16_t x25 = 45;
static int16_t x28 = -12780;
int32_t x33 = -189;
uint8_t x43 = 28U;
static int64_t x50 = INT64_MIN;
uint32_t x57 = UINT32_MAX;
int8_t x63 = -38;
uint64_t x65 = 1769788923LLU;
int64_t x68 = -1LL;
int32_t t17 = -4869387;
uint32_t x76 = 11160U;
int32_t x77 = -1;
uint32_t x80 = UINT32_MAX;
static int64_t x81 = INT64_MIN;
int64_t t20 = INT64_MIN;
static int32_t x85 = -1;
volatile uint64_t x92 = 4764794LLU;
static int16_t x100 = -1;
int32_t x101 = INT32_MAX;
int32_t x102 = 50;
int16_t x107 = INT16_MIN;
int16_t x114 = -1;
uint8_t x121 = 5U;
uint8_t x134 = UINT8_MAX;
int16_t x146 = -1;
static int16_t x156 = -1;
int16_t x158 = -1;
int16_t x164 = INT16_MAX;
int32_t x173 = -3050;
static uint16_t x177 = UINT16_MAX;
int16_t x178 = INT16_MIN;
int8_t x182 = 1;
uint32_t x186 = 14U;
static uint32_t t45 = 1427U;
static volatile int32_t x191 = -1;
uint8_t x193 = 2U;
volatile uint64_t x196 = 646768867303LLU;
int32_t x198 = -340885;
int32_t x202 = 15468;
int16_t x203 = INT16_MAX;
int32_t t51 = 3023268;
volatile int64_t t52 = 111889074192280117LL;
volatile int16_t x217 = INT16_MAX;
volatile int32_t t53 = 123;
uint16_t x223 = UINT16_MAX;
int32_t t54 = 684267860;
int16_t x248 = -1;
int32_t t59 = 7665;
int64_t x256 = -11895247341916LL;
volatile int32_t t61 = 28937400;
int16_t x260 = INT16_MIN;
int8_t x267 = INT8_MAX;
static int64_t x269 = 457619265363322LL;
int8_t x275 = INT8_MAX;
uint8_t x277 = UINT8_MAX;
static volatile int32_t t67 = 160;
int64_t x291 = -60160198077427LL;
uint64_t t70 = UINT64_MAX;
volatile uint8_t x293 = 1U;
int64_t x298 = INT64_MIN;
static volatile int16_t x300 = 9880;
volatile uint64_t x301 = 6791LLU;
uint32_t x302 = UINT32_MAX;
uint32_t x303 = 42U;
volatile int32_t x323 = INT32_MIN;
int8_t x337 = -1;
int16_t x343 = -1;
int32_t t83 = INT32_MIN;
static int64_t x345 = INT64_MAX;
volatile int32_t x348 = 5607;
volatile uint16_t x350 = 5834U;
uint16_t x351 = UINT16_MAX;
static int32_t x357 = INT32_MIN;
static int32_t t87 = 200560295;
uint64_t x366 = UINT64_MAX;
int64_t x370 = 3568942313012LL;
int64_t x371 = 15950LL;
int64_t x379 = -5LL;
uint16_t x380 = 913U;
uint16_t x385 = 8U;
volatile int32_t t94 = 693037131;
int16_t x394 = -1;
int16_t x399 = -1;
volatile uint32_t t97 = UINT32_MAX;
int64_t x402 = 2735776LL;
volatile int64_t x403 = INT64_MAX;
static uint16_t x404 = UINT16_MAX;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int16_t x2 = -4683;
	static int16_t x3 = INT16_MIN;
	volatile uint8_t x4 = 29U;
	int32_t t0 = INT32_MAX;

	t0 = (x1*((x2%x3)<=x4));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -250365;
	int8_t x6 = -1;
	static int64_t x7 = -7735925106525047LL;
	int64_t x8 = -52976853472911LL;
	int32_t t1 = -43983;

	t1 = (x5*((x6%x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = -1;
	int32_t x11 = INT32_MIN;
	volatile uint16_t x12 = 831U;
	int32_t t2 = -214839221;

	t2 = (x9*((x10%x11)<=x12));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = -252036;
	int64_t x15 = INT64_MIN;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 0;

	t3 = (x13*((x14%x15)<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 9U;
	static volatile int16_t x18 = 2;
	int64_t x19 = INT64_MIN;
	volatile int32_t t4 = 3;

	t4 = (x17*((x18%x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = UINT32_MAX;
	int8_t x24 = INT8_MIN;
	volatile int64_t t5 = INT64_MIN;

	t5 = (x21*((x22%x23)<=x24));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -6874644584261LL;
	int16_t x27 = INT16_MIN;
	volatile int32_t t6 = 375911;

	t6 = (x25*((x26%x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int16_t x30 = 0;
	uint8_t x31 = 6U;
	volatile uint32_t x32 = 35573U;
	volatile int32_t t7 = -55823;

	t7 = (x29*((x30%x31)<=x32));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x34 = 9U;
	int8_t x35 = INT8_MAX;
	uint32_t x36 = 28250042U;
	volatile int32_t t8 = 169992;

	t8 = (x33*((x34%x35)<=x36));

	if (t8 != -189) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = 31U;
	int64_t x38 = INT64_MAX;
	volatile uint64_t x39 = UINT64_MAX;
	uint32_t x40 = 5501744U;
	volatile int32_t t9 = -4734;

	t9 = (x37*((x38%x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -59;
	int32_t x42 = -1491452;
	volatile int16_t x44 = 51;
	int32_t t10 = 63478;

	t10 = (x41*((x42%x43)<=x44));

	if (t10 != -59) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MIN;
	volatile int32_t x46 = INT32_MAX;
	int32_t x47 = INT32_MIN;
	uint8_t x48 = UINT8_MAX;
	int32_t t11 = 308657907;

	t11 = (x45*((x46%x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	volatile uint64_t x51 = UINT64_MAX;
	static int16_t x52 = INT16_MIN;
	int32_t t12 = INT32_MIN;

	t12 = (x49*((x50%x51)<=x52));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	volatile int16_t x54 = INT16_MAX;
	uint8_t x55 = 3U;
	static volatile uint16_t x56 = 0U;
	static volatile int32_t t13 = -700;

	t13 = (x53*((x54%x55)<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = -122100397;
	static int64_t x59 = INT64_MAX;
	uint64_t x60 = UINT64_MAX;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = (x57*((x58%x59)<=x60));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x61 = 42LLU;
	int32_t x62 = INT32_MIN;
	static volatile int32_t x64 = 1389863;
	volatile uint64_t t15 = 12101389738981677LLU;

	t15 = (x61*((x62%x63)<=x64));

	if (t15 != 42LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x66 = -40LL;
	volatile int16_t x67 = -1;
	uint64_t t16 = 7643LLU;

	t16 = (x65*((x66%x67)<=x68));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	volatile int32_t x70 = -405066812;
	uint32_t x71 = UINT32_MAX;
	int8_t x72 = -1;

	t17 = (x69*((x70%x71)<=x72));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = INT64_MIN;
	static uint8_t x74 = 0U;
	uint32_t x75 = 495U;
	int64_t t18 = INT64_MIN;

	t18 = (x73*((x74%x75)<=x76));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x78 = UINT8_MAX;
	uint16_t x79 = 6906U;
	volatile int32_t t19 = 5011;

	t19 = (x77*((x78%x79)<=x80));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = INT8_MIN;
	int8_t x83 = INT8_MIN;
	int8_t x84 = INT8_MAX;

	t20 = (x81*((x82%x83)<=x84));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x86 = 1497523U;
	uint32_t x87 = 4173103U;
	int8_t x88 = INT8_MIN;
	int32_t t21 = 170420844;

	t21 = (x85*((x86%x87)<=x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 60U;
	int16_t x90 = INT16_MAX;
	static int16_t x91 = -7666;
	static volatile int32_t t22 = -59008183;

	t22 = (x89*((x90%x91)<=x92));

	if (t22 != 60) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 4200633574139874212LL;
	uint32_t x94 = 1744U;
	static int32_t x95 = 5333;
	int32_t x96 = -12;
	volatile int64_t t23 = -13258431920LL;

	t23 = (x93*((x94%x95)<=x96));

	if (t23 != 4200633574139874212LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	static uint8_t x98 = 86U;
	static int32_t x99 = -1;
	int64_t t24 = -220LL;

	t24 = (x97*((x98%x99)<=x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x103 = 13163LLU;
	static volatile int8_t x104 = INT8_MIN;
	volatile int32_t t25 = INT32_MAX;

	t25 = (x101*((x102%x103)<=x104));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	volatile uint64_t x106 = 15164755608003LLU;
	static int16_t x108 = -1;
	volatile int32_t t26 = 14435;

	t26 = (x105*((x106%x107)<=x108));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = 6748048722LLU;
	int64_t x110 = INT64_MAX;
	static volatile int32_t x111 = INT32_MIN;
	int16_t x112 = INT16_MIN;
	static volatile uint64_t t27 = 2157056753834350891LLU;

	t27 = (x109*((x110%x111)<=x112));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = UINT64_MAX;
	uint8_t x115 = 1U;
	int64_t x116 = INT64_MAX;
	uint64_t t28 = UINT64_MAX;

	t28 = (x113*((x114%x115)<=x116));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	static volatile uint32_t x118 = 14959211U;
	int8_t x119 = INT8_MAX;
	int8_t x120 = -1;
	static int32_t t29 = 11017;

	t29 = (x117*((x118%x119)<=x120));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x122 = 10163U;
	static int32_t x123 = INT32_MIN;
	int32_t x124 = 13414;
	static int32_t t30 = -2081737;

	t30 = (x121*((x122%x123)<=x124));

	if (t30 != 5) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	uint32_t x126 = 18994090U;
	uint8_t x127 = 42U;
	volatile int16_t x128 = INT16_MAX;
	static volatile int64_t t31 = -144118535789LL;

	t31 = (x125*((x126%x127)<=x128));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -3897576;
	uint16_t x130 = 13613U;
	int32_t x131 = INT32_MIN;
	int8_t x132 = -1;
	int32_t t32 = -509521;

	t32 = (x129*((x130%x131)<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 13028895;
	static volatile int64_t x135 = -1LL;
	uint32_t x136 = 20452276U;
	volatile int32_t t33 = 42;

	t33 = (x133*((x134%x135)<=x136));

	if (t33 != 13028895) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 0;
	int64_t x138 = INT64_MIN;
	uint16_t x139 = 14089U;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t34 = -91;

	t34 = (x137*((x138%x139)<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = -1LL;
	volatile int64_t x142 = -15083592437LL;
	int16_t x143 = INT16_MIN;
	volatile uint32_t x144 = 8386750U;
	static int64_t t35 = 4363861LL;

	t35 = (x141*((x142%x143)<=x144));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = INT32_MIN;
	uint16_t x147 = UINT16_MAX;
	uint16_t x148 = 17U;
	int32_t t36 = INT32_MIN;

	t36 = (x145*((x146%x147)<=x148));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MIN;
	static uint16_t x150 = 6985U;
	int8_t x151 = INT8_MIN;
	static volatile uint16_t x152 = UINT16_MAX;
	int64_t t37 = INT64_MIN;

	t37 = (x149*((x150%x151)<=x152));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	int64_t x154 = 75426565LL;
	static int8_t x155 = -1;
	volatile uint32_t t38 = 123479409U;

	t38 = (x153*((x154%x155)<=x156));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x157 = UINT64_MAX;
	int32_t x159 = -1;
	uint32_t x160 = 415U;
	uint64_t t39 = UINT64_MAX;

	t39 = (x157*((x158%x159)<=x160));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 0LLU;
	volatile int64_t x162 = INT64_MIN;
	static int16_t x163 = INT16_MAX;
	uint64_t t40 = 13107970628752773LLU;

	t40 = (x161*((x162%x163)<=x164));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	int32_t x166 = INT32_MIN;
	uint32_t x167 = UINT32_MAX;
	int64_t x168 = INT64_MAX;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = (x165*((x166%x167)<=x168));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x174 = -1;
	int64_t x175 = -1LL;
	uint16_t x176 = 40U;
	volatile int32_t t42 = 214378;

	t42 = (x173*((x174%x175)<=x176));

	if (t42 != -3050) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x179 = INT32_MIN;
	int8_t x180 = INT8_MIN;
	volatile int32_t t43 = 1;

	t43 = (x177*((x178%x179)<=x180));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MIN;
	int64_t x183 = -1LL;
	int32_t x184 = INT32_MAX;
	int32_t t44 = INT32_MIN;

	t44 = (x181*((x182%x183)<=x184));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x185 = 14592188U;
	volatile int32_t x187 = -4010;
	int8_t x188 = -1;

	t45 = (x185*((x186%x187)<=x188));

	if (t45 != 14592188U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x189 = 1;
	volatile int32_t x190 = INT32_MIN;
	volatile uint8_t x192 = UINT8_MAX;
	int32_t t46 = 32106;

	t46 = (x189*((x190%x191)<=x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x194 = 37U;
	int8_t x195 = INT8_MIN;
	static volatile int32_t t47 = -13252;

	t47 = (x193*((x194%x195)<=x196));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = -48171070531189LL;
	static int32_t x199 = INT32_MIN;
	int32_t x200 = INT32_MIN;
	volatile int64_t t48 = 28819675510537704LL;

	t48 = (x197*((x198%x199)<=x200));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MAX;
	volatile int64_t x204 = -29810727497LL;
	int32_t t49 = 6;

	t49 = (x201*((x202%x203)<=x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x205 = UINT64_MAX;
	int8_t x206 = INT8_MIN;
	uint64_t x207 = 35250699839121009LLU;
	uint32_t x208 = 20585U;
	volatile uint64_t t50 = 503469278LLU;

	t50 = (x205*((x206%x207)<=x208));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MAX;
	volatile uint64_t x210 = 495571333865LLU;
	uint8_t x211 = 6U;
	int32_t x212 = INT32_MAX;

	t51 = (x209*((x210%x211)<=x212));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = INT64_MIN;
	int64_t x214 = INT64_MIN;
	int32_t x215 = INT32_MIN;
	int8_t x216 = -1;

	t52 = (x213*((x214%x215)<=x216));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x218 = UINT16_MAX;
	uint16_t x219 = 148U;
	static volatile int32_t x220 = INT32_MAX;

	t53 = (x217*((x218%x219)<=x220));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MAX;
	int16_t x222 = -1;
	uint8_t x224 = UINT8_MAX;

	t54 = (x221*((x222%x223)<=x224));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MIN;
	static volatile int64_t x226 = 9LL;
	volatile int8_t x227 = -3;
	int16_t x228 = INT16_MIN;
	int32_t t55 = -30074;

	t55 = (x225*((x226%x227)<=x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x229 = 1018183LLU;
	int16_t x230 = INT16_MAX;
	int16_t x231 = 3613;
	uint32_t x232 = 0U;
	volatile uint64_t t56 = 1353487823628755970LLU;

	t56 = (x229*((x230%x231)<=x232));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = -1;
	volatile uint64_t x238 = 7259LLU;
	volatile uint32_t x239 = 18U;
	int16_t x240 = -1;
	int32_t t57 = 1065203145;

	t57 = (x237*((x238%x239)<=x240));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x241 = INT64_MAX;
	int32_t x242 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	volatile int32_t x244 = -252938;
	volatile int64_t t58 = -9537061425LL;

	t58 = (x241*((x242%x243)<=x244));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = 41;
	volatile int32_t x246 = INT32_MAX;
	uint32_t x247 = 42401U;

	t59 = (x245*((x246%x247)<=x248));

	if (t59 != 41) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = INT64_MIN;
	int16_t x250 = INT16_MIN;
	int32_t x251 = INT32_MIN;
	static volatile uint8_t x252 = 14U;
	volatile int64_t t60 = INT64_MIN;

	t60 = (x249*((x250%x251)<=x252));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x253 = -22;
	int16_t x254 = -1;
	int8_t x255 = -58;

	t61 = (x253*((x254%x255)<=x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x257 = 26371926514625LLU;
	static uint32_t x258 = UINT32_MAX;
	static int64_t x259 = INT64_MAX;
	static uint64_t t62 = 45LLU;

	t62 = (x257*((x258%x259)<=x260));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = 3421188;
	volatile uint64_t x262 = UINT64_MAX;
	int32_t x263 = INT32_MAX;
	uint32_t x264 = 1553U;
	int32_t t63 = -1601;

	t63 = (x261*((x262%x263)<=x264));

	if (t63 != 3421188) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x265 = 917U;
	int16_t x266 = -3846;
	int64_t x268 = -1LL;
	volatile uint32_t t64 = 7U;

	t64 = (x265*((x266%x267)<=x268));

	if (t64 != 917U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x270 = 24198U;
	int32_t x271 = INT32_MIN;
	uint64_t x272 = 5LLU;
	int64_t t65 = 0LL;

	t65 = (x269*((x270%x271)<=x272));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = INT16_MAX;
	static uint64_t x274 = UINT64_MAX;
	static int8_t x276 = INT8_MIN;
	volatile int32_t t66 = -15758509;

	t66 = (x273*((x274%x275)<=x276));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x278 = INT64_MIN;
	uint16_t x279 = UINT16_MAX;
	int32_t x280 = 1685152;

	t67 = (x277*((x278%x279)<=x280));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x281 = INT16_MAX;
	uint32_t x282 = 104U;
	static uint16_t x283 = 84U;
	static int16_t x284 = INT16_MAX;
	volatile int32_t t68 = 2521;

	t68 = (x281*((x282%x283)<=x284));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x285 = 1338U;
	volatile uint32_t x286 = 739859U;
	static int64_t x287 = 1490473369LL;
	volatile int64_t x288 = INT64_MIN;
	volatile int32_t t69 = -13358051;

	t69 = (x285*((x286%x287)<=x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x289 = UINT64_MAX;
	int32_t x290 = INT32_MIN;
	int32_t x292 = INT32_MIN;

	t70 = (x289*((x290%x291)<=x292));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x294 = INT32_MIN;
	volatile int16_t x295 = 116;
	volatile uint32_t x296 = 38U;
	int32_t t71 = -2;

	t71 = (x293*((x294%x295)<=x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = INT16_MAX;
	int8_t x299 = -31;
	int32_t t72 = 0;

	t72 = (x297*((x298%x299)<=x300));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x304 = 6129LLU;
	static uint64_t t73 = 124910405003LLU;

	t73 = (x301*((x302%x303)<=x304));

	if (t73 != 6791LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x305 = 11U;
	volatile int64_t x306 = INT64_MIN;
	int64_t x307 = INT64_MIN;
	volatile int8_t x308 = 25;
	volatile int32_t t74 = 385;

	t74 = (x305*((x306%x307)<=x308));

	if (t74 != 11) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = INT64_MIN;
	int16_t x311 = 103;
	int64_t x312 = INT64_MIN;
	volatile int32_t t75 = -5;

	t75 = (x309*((x310%x311)<=x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x313 = INT64_MIN;
	volatile int16_t x314 = INT16_MAX;
	volatile int8_t x315 = INT8_MAX;
	volatile int8_t x316 = -1;
	static volatile int64_t t76 = -27203286LL;

	t76 = (x313*((x314%x315)<=x316));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = -1;
	static uint32_t x318 = UINT32_MAX;
	int8_t x319 = INT8_MAX;
	volatile int64_t x320 = -1LL;
	int32_t t77 = 6445;

	t77 = (x317*((x318%x319)<=x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = -1;
	int16_t x322 = INT16_MIN;
	static uint64_t x324 = 3820531602796113795LLU;
	volatile int32_t t78 = 1;

	t78 = (x321*((x322%x323)<=x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = 219105;
	int32_t x326 = -7303;
	volatile int64_t x327 = INT64_MAX;
	uint64_t x328 = 5764068672LLU;
	int32_t t79 = -534386031;

	t79 = (x325*((x326%x327)<=x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x329 = INT16_MIN;
	volatile int16_t x330 = INT16_MAX;
	volatile uint64_t x331 = UINT64_MAX;
	int16_t x332 = INT16_MIN;
	static volatile int32_t t80 = -14;

	t80 = (x329*((x330%x331)<=x332));

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x333 = 26;
	static int16_t x334 = INT16_MAX;
	int64_t x335 = INT64_MIN;
	volatile int8_t x336 = INT8_MIN;
	int32_t t81 = -89138643;

	t81 = (x333*((x334%x335)<=x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x338 = INT16_MIN;
	int16_t x339 = 11779;
	uint8_t x340 = UINT8_MAX;
	int32_t t82 = -968125;

	t82 = (x337*((x338%x339)<=x340));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = INT32_MIN;
	int8_t x342 = INT8_MIN;
	uint64_t x344 = 39LLU;

	t83 = (x341*((x342%x343)<=x344));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x346 = 4U;
	static int32_t x347 = INT32_MAX;
	volatile int64_t t84 = INT64_MAX;

	t84 = (x345*((x346%x347)<=x348));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x349 = UINT8_MAX;
	static uint8_t x352 = 8U;
	int32_t t85 = -3979;

	t85 = (x349*((x350%x351)<=x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x353 = -1LL;
	int64_t x354 = INT64_MAX;
	uint64_t x355 = 12677879167LLU;
	int8_t x356 = -1;
	volatile int64_t t86 = 68427706476255LL;

	t86 = (x353*((x354%x355)<=x356));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x358 = 7;
	uint16_t x359 = UINT16_MAX;
	int8_t x360 = -7;

	t87 = (x357*((x358%x359)<=x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x361 = UINT16_MAX;
	volatile int64_t x362 = 84191LL;
	int16_t x363 = 13107;
	int16_t x364 = -1;
	static int32_t t88 = -620552308;

	t88 = (x361*((x362%x363)<=x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x365 = INT16_MIN;
	int16_t x367 = INT16_MAX;
	int8_t x368 = -1;
	int32_t t89 = -171;

	t89 = (x365*((x366%x367)<=x368));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = INT16_MIN;
	static int16_t x372 = -298;
	int32_t t90 = -2;

	t90 = (x369*((x370%x371)<=x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x373 = -1LL;
	int16_t x374 = INT16_MIN;
	int8_t x375 = INT8_MIN;
	int32_t x376 = 2;
	int64_t t91 = -123LL;

	t91 = (x373*((x374%x375)<=x376));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x377 = 36U;
	static uint16_t x378 = UINT16_MAX;
	volatile int32_t t92 = -1;

	t92 = (x377*((x378%x379)<=x380));

	if (t92 != 36) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x381 = 103U;
	uint16_t x382 = 1305U;
	static int16_t x383 = INT16_MIN;
	static volatile int8_t x384 = INT8_MIN;
	int32_t t93 = -1;

	t93 = (x381*((x382%x383)<=x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x386 = INT8_MIN;
	uint64_t x387 = UINT64_MAX;
	int64_t x388 = -1LL;

	t94 = (x385*((x386%x387)<=x388));

	if (t94 != 8) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x389 = 5838353321818832LL;
	int8_t x390 = INT8_MAX;
	uint16_t x391 = 53U;
	uint32_t x392 = UINT32_MAX;
	volatile int64_t t95 = -802461906LL;

	t95 = (x389*((x390%x391)<=x392));

	if (t95 != 5838353321818832LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x393 = 10878U;
	volatile uint64_t x395 = 2914098304683543957LLU;
	volatile int16_t x396 = -33;
	volatile int32_t t96 = -12;

	t96 = (x393*((x394%x395)<=x396));

	if (t96 != 10878) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x397 = UINT32_MAX;
	int32_t x398 = 46;
	uint32_t x400 = 479U;

	t97 = (x397*((x398%x399)<=x400));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x401 = UINT8_MAX;
	volatile int32_t t98 = 1022872;

	t98 = (x401*((x402%x403)<=x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = -1;
	volatile int8_t x406 = INT8_MIN;
	volatile int8_t x407 = INT8_MIN;
	int32_t x408 = -1;
	static volatile int32_t t99 = -1;

	t99 = (x405*((x406%x407)<=x408));

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

