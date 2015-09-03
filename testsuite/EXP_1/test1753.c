#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x5 = -1LL;
int64_t x6 = INT64_MIN;
int64_t x7 = INT64_MAX;
int8_t x10 = INT8_MIN;
volatile int64_t x17 = INT64_MIN;
int8_t x21 = INT8_MAX;
static uint8_t x24 = 15U;
int64_t t7 = 190527880LL;
int64_t t8 = 246561955663LL;
int8_t x49 = 1;
uint32_t x51 = 109687090U;
uint8_t x55 = 12U;
volatile int64_t t12 = 74473628855LL;
static int8_t x57 = INT8_MAX;
volatile int64_t x59 = INT64_MIN;
uint8_t x64 = UINT8_MAX;
uint64_t x67 = 114LLU;
int8_t x70 = INT8_MAX;
int16_t x71 = 11;
volatile uint8_t x73 = UINT8_MAX;
static int64_t x75 = 78974698048LL;
uint8_t x76 = 1U;
int64_t t17 = 21458940132LL;
int8_t x80 = INT8_MAX;
int32_t x83 = -1;
uint64_t x93 = 547282932LLU;
int32_t x95 = 4141017;
volatile uint64_t t22 = 58596289838LLU;
uint8_t x99 = 4U;
uint64_t t26 = 1303096576548LLU;
int64_t x116 = INT64_MAX;
int16_t x133 = INT16_MAX;
uint64_t t33 = 1747063077LLU;
volatile int64_t x147 = INT64_MIN;
volatile int8_t x148 = -1;
uint32_t x151 = 282872087U;
uint32_t t36 = 2458U;
int32_t t37 = 1145312;
int16_t x159 = INT16_MAX;
volatile int32_t x160 = 9413450;
uint8_t x172 = 102U;
int64_t x182 = INT64_MIN;
int32_t x185 = -48074;
volatile int32_t t44 = 108727934;
int32_t x197 = INT32_MIN;
uint8_t x200 = UINT8_MAX;
int32_t t47 = 8;
int64_t x206 = -18956LL;
int64_t x211 = INT64_MIN;
static uint64_t t51 = 12688047809LLU;
static int64_t x220 = INT64_MIN;
static volatile int32_t x227 = -1;
static int8_t x237 = 0;
int32_t x241 = INT32_MAX;
uint16_t x242 = 13929U;
int32_t x243 = INT32_MIN;
volatile int64_t t58 = -68496646763970LL;
int32_t t59 = 26483;
uint32_t x253 = 1984U;
int16_t x275 = 881;
volatile int64_t t68 = -57211272239LL;
static int16_t x292 = 0;
int32_t x293 = 30664631;
uint16_t x296 = UINT16_MAX;
static int64_t t73 = 3902158619LL;
int64_t t75 = 54984LL;
volatile int32_t x314 = INT32_MAX;
int32_t x323 = INT32_MIN;
volatile int32_t t79 = -1;
static uint32_t x336 = 47023U;
int64_t x337 = INT64_MIN;
uint8_t x338 = 3U;
int32_t x339 = INT32_MAX;
int32_t x345 = INT32_MAX;
int32_t x348 = -292493;
uint64_t x349 = 147472604LLU;
int32_t x353 = 55;
volatile uint16_t x358 = UINT16_MAX;
int16_t x361 = -4;
int32_t x368 = INT32_MIN;
int64_t x375 = 409LL;
volatile uint16_t x376 = UINT16_MAX;
volatile int64_t t91 = -3086951044344154290LL;
uint8_t x379 = 1U;
int64_t x382 = -1LL;
int64_t x397 = INT64_MIN;
static uint32_t x398 = 1850U;
volatile int64_t t98 = -57LL;
int64_t x405 = -164703852328123LL;
volatile int32_t x407 = -1;


void f0(void) {
	volatile uint32_t x1 = UINT32_MAX;
	int16_t x2 = 3867;
	int16_t x3 = -243;
	volatile int16_t x4 = -1;
	volatile uint32_t t0 = 148866U;

	t0 = (((x1&x2)%x3)&x4);

	if (t0 != 3867U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x8 = INT16_MIN;
	int64_t t1 = -146380975932LL;

	t1 = (((x5&x6)%x7)&x8);

	if (t1 != -32768LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	int16_t x11 = INT16_MIN;
	uint16_t x12 = 0U;
	static volatile int64_t t2 = 1600465052LL;

	t2 = (((x9&x10)%x11)&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 0;
	uint64_t x14 = 59606LLU;
	volatile uint16_t x15 = UINT16_MAX;
	volatile uint16_t x16 = UINT16_MAX;
	uint64_t t3 = 3385146408237488305LLU;

	t3 = (((x13&x14)%x15)&x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x18 = INT32_MAX;
	int32_t x19 = INT32_MIN;
	volatile uint16_t x20 = 120U;
	int64_t t4 = -1LL;

	t4 = (((x17&x18)%x19)&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = 0;
	volatile uint32_t x23 = 14866U;
	volatile uint32_t t5 = 1U;

	t5 = (((x21&x22)%x23)&x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1287444LL;
	static uint8_t x26 = 1U;
	volatile int64_t x27 = -1LL;
	volatile uint64_t x28 = 81LLU;
	uint64_t t6 = 122486LLU;

	t6 = (((x25&x26)%x27)&x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	volatile uint8_t x30 = 1U;
	int64_t x31 = INT64_MIN;
	static int16_t x32 = 7727;

	t7 = (((x29&x30)%x31)&x32);

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x33 = UINT32_MAX;
	volatile int8_t x34 = INT8_MIN;
	static int16_t x35 = INT16_MIN;
	volatile int64_t x36 = INT64_MIN;

	t8 = (((x33&x34)%x35)&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	uint16_t x42 = UINT16_MAX;
	uint16_t x43 = 25U;
	volatile int16_t x44 = INT16_MIN;
	static int32_t t9 = 3181916;

	t9 = (((x41&x42)%x43)&x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	volatile int32_t x46 = 0;
	int64_t x47 = INT64_MIN;
	static int8_t x48 = 34;
	int64_t t10 = 3289025LL;

	t10 = (((x45&x46)%x47)&x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x50 = -22239689096949403LL;
	uint8_t x52 = 8U;
	static volatile int64_t t11 = 8LL;

	t11 = (((x49&x50)%x51)&x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	static volatile uint8_t x54 = UINT8_MAX;
	static volatile int16_t x56 = 12648;

	t12 = (((x53&x54)%x55)&x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x58 = UINT8_MAX;
	volatile int8_t x60 = -5;
	volatile int64_t t13 = 287623266529LL;

	t13 = (((x57&x58)%x59)&x60);

	if (t13 != 123LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	int16_t x62 = INT16_MAX;
	uint32_t x63 = 22U;
	uint32_t t14 = 1668U;

	t14 = (((x61&x62)%x63)&x64);

	if (t14 != 14U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -1;
	int8_t x66 = -29;
	int8_t x68 = INT8_MAX;
	volatile uint64_t t15 = 1492863346151712LLU;

	t15 = (((x65&x66)%x67)&x68);

	if (t15 != 83LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -1LL;
	uint8_t x72 = 12U;
	int64_t t16 = 0LL;

	t16 = (((x69&x70)%x71)&x72);

	if (t16 != 4LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x74 = INT64_MIN;

	t17 = (((x73&x74)%x75)&x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	uint32_t x78 = 4U;
	int32_t x79 = INT32_MIN;
	uint32_t t18 = 69U;

	t18 = (((x77&x78)%x79)&x80);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = 566321381LL;
	uint16_t x82 = 30U;
	static int32_t x84 = -1;
	static int64_t t19 = 581970079419LL;

	t19 = (((x81&x82)%x83)&x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	volatile uint16_t x86 = 3271U;
	int8_t x87 = INT8_MAX;
	int64_t x88 = INT64_MIN;
	static int64_t t20 = 27676761876LL;

	t20 = (((x85&x86)%x87)&x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 4206865285012583947LLU;
	static int16_t x90 = 0;
	int64_t x91 = 18845LL;
	static int64_t x92 = -14474LL;
	static volatile uint64_t t21 = 4176077LLU;

	t21 = (((x89&x90)%x91)&x92);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x94 = INT64_MIN;
	int64_t x96 = -1LL;

	t22 = (((x93&x94)%x95)&x96);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MAX;
	uint8_t x98 = 4U;
	uint64_t x100 = UINT64_MAX;
	uint64_t t23 = 174873960933201LLU;

	t23 = (((x97&x98)%x99)&x100);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	uint16_t x102 = UINT16_MAX;
	uint16_t x103 = 5107U;
	uint32_t x104 = UINT32_MAX;
	uint32_t t24 = 51073498U;

	t24 = (((x101&x102)%x103)&x104);

	if (t24 != 4124U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = UINT8_MAX;
	uint16_t x106 = 7122U;
	int64_t x107 = 10828576318LL;
	volatile int64_t x108 = INT64_MIN;
	volatile int64_t t25 = 57691413LL;

	t25 = (((x105&x106)%x107)&x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = UINT32_MAX;
	int8_t x110 = INT8_MAX;
	static uint64_t x111 = 3LLU;
	uint32_t x112 = 107724U;

	t26 = (((x109&x110)%x111)&x112);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x113 = 1U;
	volatile int8_t x114 = 21;
	int8_t x115 = -1;
	volatile int64_t t27 = -195929335LL;

	t27 = (((x113&x114)%x115)&x116);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = -1;
	uint32_t x118 = 1121131U;
	int8_t x119 = INT8_MIN;
	int32_t x120 = -1;
	volatile uint32_t t28 = 835404262U;

	t28 = (((x117&x118)%x119)&x120);

	if (t28 != 1121131U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MAX;
	static int8_t x122 = INT8_MIN;
	static uint16_t x123 = 5U;
	int64_t x124 = -242563182LL;
	volatile int64_t t29 = 1431992083LL;

	t29 = (((x121&x122)%x123)&x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = 11121604386597LLU;
	int8_t x126 = INT8_MAX;
	int8_t x127 = INT8_MIN;
	int64_t x128 = INT64_MAX;
	uint64_t t30 = 168864LLU;

	t30 = (((x125&x126)%x127)&x128);

	if (t30 != 37LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = INT64_MIN;
	uint8_t x130 = UINT8_MAX;
	volatile int64_t x131 = 624017295174195LL;
	static int8_t x132 = INT8_MAX;
	static volatile int64_t t31 = -2203956664867190LL;

	t31 = (((x129&x130)%x131)&x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x134 = -6LL;
	uint16_t x135 = UINT16_MAX;
	static uint32_t x136 = 454734674U;
	int64_t t32 = -86726957774183LL;

	t32 = (((x133&x134)%x135)&x136);

	if (t32 != 13138LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = 85813U;
	int32_t x138 = INT32_MIN;
	uint64_t x139 = 236043684472210LLU;
	static int8_t x140 = INT8_MIN;

	t33 = (((x137&x138)%x139)&x140);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x141 = 23;
	volatile uint8_t x142 = 26U;
	int32_t x143 = INT32_MAX;
	int8_t x144 = INT8_MIN;
	int32_t t34 = -52;

	t34 = (((x141&x142)%x143)&x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MIN;
	int32_t x146 = INT32_MIN;
	int64_t t35 = 971612646716101LL;

	t35 = (((x145&x146)%x147)&x148);

	if (t35 != -2147483648LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MIN;
	int16_t x150 = -1;
	static int16_t x152 = INT16_MIN;

	t36 = (((x149&x150)%x151)&x152);

	if (t36 != 167378944U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MIN;
	int32_t x154 = INT32_MIN;
	int16_t x155 = -1;
	static volatile int8_t x156 = -1;

	t37 = (((x153&x154)%x155)&x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = 1;
	int16_t x158 = INT16_MAX;
	volatile int32_t t38 = -1005;

	t38 = (((x157&x158)%x159)&x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = -12439;
	int64_t x162 = INT64_MIN;
	int32_t x163 = -1;
	int8_t x164 = -1;
	int64_t t39 = 0LL;

	t39 = (((x161&x162)%x163)&x164);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = -1LL;
	uint8_t x170 = UINT8_MAX;
	int32_t x171 = 6;
	volatile int64_t t40 = 189904299008116LL;

	t40 = (((x169&x170)%x171)&x172);

	if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = INT32_MAX;
	int64_t x174 = INT64_MIN;
	uint16_t x175 = 9245U;
	uint64_t x176 = 92LLU;
	uint64_t t41 = 33579943LLU;

	t41 = (((x173&x174)%x175)&x176);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = 1144U;
	int16_t x178 = INT16_MAX;
	static volatile int16_t x179 = INT16_MIN;
	static uint64_t x180 = UINT64_MAX;
	uint64_t t42 = 473755191LLU;

	t42 = (((x177&x178)%x179)&x180);

	if (t42 != 1144LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x181 = -7375214707LL;
	int64_t x183 = INT64_MAX;
	uint32_t x184 = 1210849528U;
	static volatile int64_t t43 = -593191400960LL;

	t43 = (((x181&x182)%x183)&x184);

	if (t43 != 1210849528LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x186 = 0U;
	static uint8_t x187 = 20U;
	int32_t x188 = INT32_MIN;

	t44 = (((x185&x186)%x187)&x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = INT32_MIN;
	static volatile int16_t x190 = -27;
	uint16_t x191 = 7U;
	volatile int32_t x192 = 118614100;
	int32_t t45 = -33;

	t45 = (((x189&x190)%x191)&x192);

	if (t45 != 118614100) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x193 = 291U;
	uint32_t x194 = 1937305471U;
	int16_t x195 = 1;
	int64_t x196 = 957706532LL;
	int64_t t46 = 790218596LL;

	t46 = (((x193&x194)%x195)&x196);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x198 = 13;
	static int8_t x199 = -1;

	t47 = (((x197&x198)%x199)&x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x201 = UINT64_MAX;
	volatile int64_t x202 = INT64_MIN;
	int16_t x203 = -4;
	int8_t x204 = -29;
	static uint64_t t48 = 166052386656411LLU;

	t48 = (((x201&x202)%x203)&x204);

	if (t48 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x205 = -1;
	volatile int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MIN;
	volatile int64_t t49 = 460847188363LL;

	t49 = (((x205&x206)%x207)&x208);

	if (t49 != -32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x209 = 38U;
	int8_t x210 = INT8_MAX;
	static volatile uint64_t x212 = 2973474858879190481LLU;
	static uint64_t t50 = 7LLU;

	t50 = (((x209&x210)%x211)&x212);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = -1LL;
	int64_t x214 = INT64_MIN;
	int64_t x215 = -2092322116231LL;
	uint64_t x216 = 13726LLU;

	t51 = (((x213&x214)%x215)&x216);

	if (t51 != 1418LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = -1;
	static volatile int16_t x218 = INT16_MIN;
	static uint64_t x219 = 1670587206531791LLU;
	volatile uint64_t t52 = 497506161929LLU;

	t52 = (((x217&x218)%x219)&x220);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x221 = 1LLU;
	uint32_t x222 = UINT32_MAX;
	volatile int64_t x223 = INT64_MAX;
	uint64_t x224 = 23175713104973872LLU;
	uint64_t t53 = 9051LLU;

	t53 = (((x221&x222)%x223)&x224);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x225 = 1626494528LLU;
	uint16_t x226 = UINT16_MAX;
	static int32_t x228 = INT32_MAX;
	static uint64_t t54 = 122722587375LLU;

	t54 = (((x225&x226)%x227)&x228);

	if (t54 != 22080LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x229 = INT8_MAX;
	int16_t x230 = -22;
	static int16_t x231 = INT16_MAX;
	int64_t x232 = -134801335LL;
	int64_t t55 = 2632880032129LL;

	t55 = (((x229&x230)%x231)&x232);

	if (t55 != 72LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x233 = -1601;
	uint32_t x234 = 43180064U;
	static int8_t x235 = INT8_MIN;
	int64_t x236 = INT64_MIN;
	int64_t t56 = -969019922344453113LL;

	t56 = (((x233&x234)%x235)&x236);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x238 = UINT16_MAX;
	volatile int8_t x239 = INT8_MAX;
	uint16_t x240 = 1631U;
	int32_t t57 = -389;

	t57 = (((x237&x238)%x239)&x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x244 = INT64_MIN;

	t58 = (((x241&x242)%x243)&x244);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x245 = INT32_MIN;
	int16_t x246 = INT16_MIN;
	uint16_t x247 = 27U;
	volatile uint16_t x248 = UINT16_MAX;

	t59 = (((x245&x246)%x247)&x248);

	if (t59 != 65525) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = -1LL;
	volatile int64_t x250 = 39129738587544878LL;
	volatile int16_t x251 = -1;
	int32_t x252 = -1;
	static volatile int64_t t60 = -337090LL;

	t60 = (((x249&x250)%x251)&x252);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x254 = 93U;
	uint32_t x255 = UINT32_MAX;
	uint8_t x256 = 5U;
	volatile uint32_t t61 = 1U;

	t61 = (((x253&x254)%x255)&x256);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = INT8_MIN;
	uint16_t x258 = 10U;
	int16_t x259 = -1;
	volatile int64_t x260 = 250994995154LL;
	int64_t t62 = 2117600954095LL;

	t62 = (((x257&x258)%x259)&x260);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x261 = 21U;
	int32_t x262 = -1;
	volatile int8_t x263 = 5;
	uint16_t x264 = 1U;
	int32_t t63 = 194852;

	t63 = (((x261&x262)%x263)&x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = INT8_MAX;
	uint8_t x266 = UINT8_MAX;
	volatile int16_t x267 = INT16_MAX;
	int32_t x268 = -95;
	volatile int32_t t64 = 1221;

	t64 = (((x265&x266)%x267)&x268);

	if (t64 != 33) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = INT64_MIN;
	volatile int16_t x270 = INT16_MIN;
	uint16_t x271 = 1U;
	uint16_t x272 = UINT16_MAX;
	static int64_t t65 = -3920943307LL;

	t65 = (((x269&x270)%x271)&x272);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x273 = INT64_MIN;
	int8_t x274 = INT8_MAX;
	int16_t x276 = INT16_MIN;
	static int64_t t66 = -86962073348914135LL;

	t66 = (((x273&x274)%x275)&x276);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x277 = -1;
	uint32_t x278 = 201U;
	int8_t x279 = -15;
	static volatile uint64_t x280 = 27949LLU;
	uint64_t t67 = 20874LLU;

	t67 = (((x277&x278)%x279)&x280);

	if (t67 != 9LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = -1LL;
	int64_t x282 = INT64_MAX;
	int32_t x283 = INT32_MIN;
	int16_t x284 = INT16_MIN;

	t68 = (((x281&x282)%x283)&x284);

	if (t68 != 2147450880LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = -1LL;
	uint16_t x286 = 1U;
	uint16_t x287 = UINT16_MAX;
	static int64_t x288 = INT64_MIN;
	volatile int64_t t69 = 6475LL;

	t69 = (((x285&x286)%x287)&x288);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x289 = UINT32_MAX;
	static int16_t x290 = INT16_MIN;
	static int16_t x291 = INT16_MIN;
	volatile uint32_t t70 = 1648968U;

	t70 = (((x289&x290)%x291)&x292);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x294 = 2U;
	int64_t x295 = INT64_MIN;
	int64_t t71 = 98567393LL;

	t71 = (((x293&x294)%x295)&x296);

	if (t71 != 2LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = -1LL;
	int16_t x298 = INT16_MIN;
	uint16_t x299 = 6U;
	int16_t x300 = INT16_MAX;
	int64_t t72 = 1098158498118088LL;

	t72 = (((x297&x298)%x299)&x300);

	if (t72 != 32766LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = 2;
	int64_t x303 = -17LL;
	volatile int32_t x304 = INT32_MAX;

	t73 = (((x301&x302)%x303)&x304);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x305 = UINT32_MAX;
	static volatile int32_t x306 = 14907061;
	volatile uint32_t x307 = UINT32_MAX;
	uint16_t x308 = 3U;
	uint32_t t74 = 298U;

	t74 = (((x305&x306)%x307)&x308);

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = INT32_MAX;
	int32_t x310 = INT32_MIN;
	int16_t x311 = -1;
	int64_t x312 = INT64_MIN;

	t75 = (((x309&x310)%x311)&x312);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = INT8_MIN;
	int64_t x315 = INT64_MIN;
	static volatile uint64_t x316 = UINT64_MAX;
	volatile uint64_t t76 = 3868281262LLU;

	t76 = (((x313&x314)%x315)&x316);

	if (t76 != 2147483520LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x317 = INT64_MIN;
	volatile int64_t x318 = 21924271LL;
	int16_t x319 = INT16_MIN;
	volatile int16_t x320 = INT16_MIN;
	volatile int64_t t77 = 20916796349LL;

	t77 = (((x317&x318)%x319)&x320);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x321 = 20327475502935115LL;
	volatile int16_t x322 = -1;
	static volatile int8_t x324 = 1;
	volatile int64_t t78 = -450561074148283LL;

	t78 = (((x321&x322)%x323)&x324);

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = INT8_MAX;
	int16_t x326 = INT16_MIN;
	int32_t x327 = 225;
	int32_t x328 = INT32_MIN;

	t79 = (((x325&x326)%x327)&x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = 13LL;
	int32_t x330 = -1;
	static int8_t x331 = -30;
	uint16_t x332 = 0U;
	static int64_t t80 = -1LL;

	t80 = (((x329&x330)%x331)&x332);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x333 = 2U;
	int32_t x334 = INT32_MIN;
	int32_t x335 = INT32_MIN;
	uint32_t t81 = 26400311U;

	t81 = (((x333&x334)%x335)&x336);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t82 = 2201455437206838LLU;

	t82 = (((x337&x338)%x339)&x340);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = INT32_MAX;
	volatile int8_t x342 = INT8_MAX;
	int32_t x343 = INT32_MIN;
	int64_t x344 = 411712LL;
	volatile int64_t t83 = -136656968269LL;

	t83 = (((x341&x342)%x343)&x344);

	if (t83 != 64LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x346 = -13776224;
	static int32_t x347 = 10;
	int32_t t84 = 182;

	t84 = (((x345&x346)%x347)&x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x350 = 1LLU;
	uint16_t x351 = UINT16_MAX;
	int64_t x352 = INT64_MAX;
	static uint64_t t85 = 2079LLU;

	t85 = (((x349&x350)%x351)&x352);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x354 = 25;
	uint8_t x355 = 1U;
	int64_t x356 = INT64_MIN;
	int64_t t86 = 140005322086947LL;

	t86 = (((x353&x354)%x355)&x356);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = -81049366843579LL;
	uint64_t x359 = 6724101385384424LLU;
	static int8_t x360 = INT8_MAX;
	volatile uint64_t t87 = 1093212074506724145LLU;

	t87 = (((x357&x358)%x359)&x360);

	if (t87 != 69LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x362 = UINT32_MAX;
	static int16_t x363 = INT16_MIN;
	static int8_t x364 = -1;
	volatile uint32_t t88 = 630U;

	t88 = (((x361&x362)%x363)&x364);

	if (t88 != 32764U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x365 = INT32_MAX;
	volatile uint64_t x366 = UINT64_MAX;
	int16_t x367 = INT16_MAX;
	static uint64_t t89 = 12176613266766LLU;

	t89 = (((x365&x366)%x367)&x368);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x369 = UINT16_MAX;
	volatile int32_t x370 = INT32_MIN;
	static volatile int16_t x371 = INT16_MIN;
	uint32_t x372 = UINT32_MAX;
	uint32_t t90 = 2U;

	t90 = (((x369&x370)%x371)&x372);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x373 = -236905392LL;
	static volatile uint16_t x374 = 254U;

	t91 = (((x373&x374)%x375)&x376);

	if (t91 != 80LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x377 = 197;
	int8_t x378 = INT8_MIN;
	int32_t x380 = INT32_MIN;
	static volatile int32_t t92 = -7;

	t92 = (((x377&x378)%x379)&x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x381 = 30336LLU;
	int32_t x383 = 4;
	static uint8_t x384 = 13U;
	volatile uint64_t t93 = 0LLU;

	t93 = (((x381&x382)%x383)&x384);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x385 = 7093115930417251LLU;
	int8_t x386 = INT8_MIN;
	uint64_t x387 = 3978458600982899355LLU;
	static uint32_t x388 = 115241904U;
	uint64_t t94 = 3478LLU;

	t94 = (((x385&x386)%x387)&x388);

	if (t94 != 104992768LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = -1;
	volatile int64_t x390 = 116006LL;
	uint32_t x391 = 294529735U;
	uint16_t x392 = 534U;
	int64_t t95 = 15098111602058LL;

	t95 = (((x389&x390)%x391)&x392);

	if (t95 != 6LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x393 = INT32_MIN;
	int64_t x394 = INT64_MIN;
	uint32_t x395 = 2U;
	uint16_t x396 = UINT16_MAX;
	volatile int64_t t96 = 142296366897865198LL;

	t96 = (((x393&x394)%x395)&x396);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x399 = INT16_MIN;
	static uint16_t x400 = 206U;
	int64_t t97 = -33497LL;

	t97 = (((x397&x398)%x399)&x400);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x401 = INT8_MIN;
	static int64_t x402 = -1605097067150LL;
	static volatile int64_t x403 = INT64_MIN;
	uint8_t x404 = UINT8_MAX;

	t98 = (((x401&x402)%x403)&x404);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x406 = INT8_MIN;
	volatile int16_t x408 = -48;
	int64_t t99 = -498862284171625951LL;

	t99 = (((x405&x406)%x407)&x408);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

