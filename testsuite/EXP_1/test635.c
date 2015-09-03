#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x12 = INT16_MAX;
uint16_t x16 = 4866U;
volatile int64_t x23 = -1LL;
int64_t x27 = INT64_MIN;
int32_t t6 = -258049384;
int64_t x31 = -5117LL;
volatile int64_t t8 = -931423172148LL;
static volatile int32_t t9 = -398;
volatile uint8_t x44 = 1U;
static uint16_t x45 = 149U;
uint32_t x46 = UINT32_MAX;
int8_t x49 = INT8_MIN;
int32_t x50 = -42875;
volatile uint32_t t13 = 1592U;
int16_t x58 = -1;
static uint32_t x60 = UINT32_MAX;
static volatile uint64_t t15 = 893701373155227LLU;
int64_t x67 = INT64_MIN;
static volatile uint32_t x69 = 7429U;
int8_t x70 = 63;
static volatile int64_t x78 = INT64_MIN;
int64_t x82 = -1LL;
int32_t x86 = INT32_MAX;
volatile uint8_t x87 = 123U;
static volatile int32_t t21 = -96;
int16_t x92 = -1;
int32_t t23 = 53047;
volatile uint32_t x97 = UINT32_MAX;
volatile uint8_t x98 = 14U;
int32_t t24 = -74;
volatile uint16_t x101 = 2U;
uint32_t x103 = 5U;
uint8_t x107 = 3U;
int32_t t26 = 61;
int8_t x109 = INT8_MIN;
int32_t t27 = -905817713;
int8_t x123 = INT8_MIN;
uint32_t x128 = 58420U;
static int64_t x134 = INT64_MAX;
int32_t x137 = INT32_MIN;
int16_t x139 = INT16_MIN;
int8_t x141 = 0;
volatile uint32_t t35 = 5551U;
static int64_t x145 = -186LL;
int32_t x147 = -1;
uint8_t x151 = 44U;
int64_t x157 = INT64_MIN;
static uint32_t x162 = 3145U;
volatile int8_t x163 = INT8_MAX;
uint16_t x166 = 87U;
volatile int32_t x167 = INT32_MIN;
volatile int8_t x172 = -1;
int64_t x176 = -13240352LL;
int32_t x177 = -25987;
static volatile int32_t x180 = INT32_MAX;
int32_t x183 = INT32_MIN;
volatile int64_t x184 = INT64_MIN;
int32_t x186 = INT32_MAX;
volatile int64_t x187 = INT64_MIN;
uint16_t x188 = UINT16_MAX;
uint8_t x190 = UINT8_MAX;
static int64_t x191 = INT64_MAX;
static int64_t x192 = 751563060487LL;
volatile int64_t t47 = -26462LL;
static volatile int32_t t50 = 3398938;
int32_t x222 = INT32_MIN;
int32_t t55 = 5378678;
int8_t x236 = -1;
int16_t x237 = INT16_MIN;
static int32_t x240 = -413426;
int16_t x242 = INT16_MIN;
static int8_t x246 = -1;
int64_t x247 = -255862833743944LL;
int32_t x248 = 1026401;
uint64_t x251 = UINT64_MAX;
int32_t t63 = 368;
volatile uint8_t x267 = 1U;
int64_t x269 = INT64_MIN;
int16_t x271 = 610;
int32_t t68 = 6743507;
static int8_t x288 = 7;
static int32_t x298 = INT32_MIN;
static int8_t x299 = -54;
int8_t x303 = INT8_MIN;
int64_t x312 = -11LL;
int64_t t74 = 2849982051671156LL;
int32_t t75 = 11;
static uint32_t x319 = 23U;
static int8_t x321 = 0;
int16_t x324 = -1;
int16_t x325 = INT16_MIN;
uint32_t x327 = UINT32_MAX;
volatile int16_t x328 = 3485;
int64_t x329 = INT64_MIN;
static uint8_t x330 = 89U;
int32_t t79 = 14393;
volatile int8_t x337 = INT8_MAX;
uint32_t x343 = UINT32_MAX;
static volatile int32_t x346 = 514895528;
uint16_t x347 = UINT16_MAX;
volatile int8_t x349 = INT8_MIN;
int16_t x352 = INT16_MIN;
volatile int32_t t84 = 9;
static int32_t x357 = 150133371;
int32_t x364 = INT32_MIN;
int16_t x365 = -22;
volatile uint64_t x371 = UINT64_MAX;
uint16_t x374 = UINT16_MAX;
uint32_t x380 = 1067129198U;
uint64_t x390 = 7866546743340331LLU;
uint32_t x398 = 245691577U;
int32_t t95 = 257410148;
int16_t x404 = 9;
uint8_t x407 = 0U;
uint8_t x408 = 0U;
int32_t x411 = -17688164;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	int8_t x2 = INT8_MIN;
	uint8_t x3 = 110U;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 8;

	t0 = (((x1/x2)<=x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int8_t x6 = INT8_MIN;
	uint8_t x7 = 0U;
	int64_t x8 = INT64_MIN;
	static int64_t t1 = -5LL;

	t1 = (((x5/x6)<=x7)&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -18;
	uint32_t x10 = 10360179U;
	int8_t x11 = INT8_MAX;
	volatile int32_t t2 = 1222404;

	t2 = (((x9/x10)<=x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	uint64_t x14 = 17958264635569541LLU;
	uint64_t x15 = UINT64_MAX;
	volatile int32_t t3 = 1;

	t3 = (((x13/x14)<=x15)&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	static int64_t x18 = -1LL;
	int16_t x19 = 14;
	int16_t x20 = -3319;
	volatile int32_t t4 = 41377;

	t4 = (((x17/x18)<=x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = 31976;
	int8_t x22 = INT8_MIN;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 164;

	t5 = (((x21/x22)<=x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 0;
	static int64_t x26 = -1LL;
	volatile int32_t x28 = -1;

	t6 = (((x25/x26)<=x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 3;
	static uint32_t x30 = 74079U;
	int8_t x32 = -1;
	static int32_t t7 = 267;

	t7 = (((x29/x30)<=x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	uint16_t x34 = 6480U;
	uint16_t x35 = UINT16_MAX;
	static int64_t x36 = INT64_MIN;

	t8 = (((x33/x34)<=x35)&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -15594LL;
	int8_t x38 = INT8_MAX;
	int64_t x39 = -1LL;
	static int32_t x40 = 833098;

	t9 = (((x37/x38)<=x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 95LLU;
	int64_t x42 = INT64_MIN;
	int64_t x43 = -1LL;
	volatile int32_t t10 = 7108577;

	t10 = (((x41/x42)<=x43)&x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x47 = 766600536574748511LLU;
	uint8_t x48 = 0U;
	volatile int32_t t11 = -1056;

	t11 = (((x45/x46)<=x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x51 = INT64_MIN;
	volatile int8_t x52 = -1;
	int32_t t12 = 401566662;

	t12 = (((x49/x50)<=x51)&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static int64_t x54 = -51889LL;
	int8_t x55 = INT8_MIN;
	uint32_t x56 = 981U;

	t13 = (((x53/x54)<=x55)&x56);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 0U;
	uint8_t x59 = 15U;
	volatile uint32_t t14 = 38300U;

	t14 = (((x57/x58)<=x59)&x60);

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 1;
	static int64_t x62 = INT64_MIN;
	volatile int32_t x63 = 524;
	uint64_t x64 = 35425588491LLU;

	t15 = (((x61/x62)<=x63)&x64);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -617;
	int8_t x66 = INT8_MIN;
	uint16_t x68 = 0U;
	static int32_t t16 = 915754470;

	t16 = (((x65/x66)<=x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x71 = -1;
	int32_t x72 = INT32_MAX;
	int32_t t17 = 476378;

	t17 = (((x69/x70)<=x71)&x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x73 = UINT64_MAX;
	uint64_t x74 = 272980636LLU;
	int16_t x75 = INT16_MIN;
	uint64_t x76 = UINT64_MAX;
	static uint64_t t18 = 4907398LLU;

	t18 = (((x73/x74)<=x75)&x76);

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 3;
	int8_t x79 = INT8_MIN;
	int32_t x80 = 2237609;
	volatile int32_t t19 = -20864;

	t19 = (((x77/x78)<=x79)&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	uint64_t x83 = 13578498432LLU;
	volatile uint64_t x84 = 7475LLU;
	uint64_t t20 = 56LLU;

	t20 = (((x81/x82)<=x83)&x84);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = 440U;
	int32_t x88 = 94048;

	t21 = (((x85/x86)<=x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MIN;
	volatile int64_t x90 = INT64_MAX;
	int8_t x91 = -9;
	static volatile int32_t t22 = -361641534;

	t22 = (((x89/x90)<=x91)&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MIN;
	volatile uint64_t x94 = 10881LLU;
	static volatile int64_t x95 = -1LL;
	static volatile int16_t x96 = INT16_MIN;

	t23 = (((x93/x94)<=x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x99 = INT32_MIN;
	static int32_t x100 = -11353532;

	t24 = (((x97/x98)<=x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x102 = UINT16_MAX;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 3752;

	t25 = (((x101/x102)<=x103)&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int32_t x106 = 4934;
	static int16_t x108 = INT16_MIN;

	t26 = (((x105/x106)<=x107)&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x110 = INT16_MIN;
	int64_t x111 = -1LL;
	volatile int8_t x112 = INT8_MIN;

	t27 = (((x109/x110)<=x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x113 = -1;
	int64_t x114 = 39163303498186LL;
	int16_t x115 = INT16_MIN;
	uint32_t x116 = 2U;
	uint32_t t28 = 9U;

	t28 = (((x113/x114)<=x115)&x116);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = -1;
	volatile uint32_t x118 = 18914956U;
	volatile int8_t x119 = 60;
	volatile int32_t x120 = INT32_MIN;
	int32_t t29 = 424;

	t29 = (((x117/x118)<=x119)&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MAX;
	uint8_t x122 = UINT8_MAX;
	int32_t x124 = -63220;
	int32_t t30 = 10211610;

	t30 = (((x121/x122)<=x123)&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = -1;
	int32_t x126 = INT32_MIN;
	int16_t x127 = INT16_MIN;
	static uint32_t t31 = 630U;

	t31 = (((x125/x126)<=x127)&x128);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = 28764815154LL;
	int16_t x130 = INT16_MAX;
	volatile int32_t x131 = 135477;
	uint32_t x132 = UINT32_MAX;
	uint32_t t32 = 241962395U;

	t32 = (((x129/x130)<=x131)&x132);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	int8_t x135 = INT8_MIN;
	int16_t x136 = INT16_MAX;
	int32_t t33 = 81675;

	t33 = (((x133/x134)<=x135)&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x138 = INT8_MIN;
	int64_t x140 = INT64_MIN;
	volatile int64_t t34 = 33200225430678627LL;

	t34 = (((x137/x138)<=x139)&x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x142 = INT8_MAX;
	volatile int64_t x143 = INT64_MAX;
	static uint32_t x144 = 213U;

	t35 = (((x141/x142)<=x143)&x144);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x146 = UINT64_MAX;
	volatile int32_t x148 = INT32_MAX;
	volatile int32_t t36 = 94;

	t36 = (((x145/x146)<=x147)&x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	uint16_t x150 = 3630U;
	static volatile uint64_t x152 = UINT64_MAX;
	uint64_t t37 = 2873LLU;

	t37 = (((x149/x150)<=x151)&x152);

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x153 = INT16_MIN;
	uint32_t x154 = 75497353U;
	int64_t x155 = 27379444979LL;
	static uint8_t x156 = 0U;
	volatile int32_t t38 = 22;

	t38 = (((x153/x154)<=x155)&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MIN;
	int16_t x159 = -1;
	int8_t x160 = INT8_MAX;
	volatile int32_t t39 = -102667;

	t39 = (((x157/x158)<=x159)&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int8_t x164 = INT8_MAX;
	volatile int32_t t40 = -161672;

	t40 = (((x161/x162)<=x163)&x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	uint16_t x168 = 29U;
	static volatile int32_t t41 = 7604453;

	t41 = (((x165/x166)<=x167)&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	volatile int16_t x170 = 62;
	volatile int16_t x171 = -1;
	static volatile int32_t t42 = 144808750;

	t42 = (((x169/x170)<=x171)&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	int64_t x174 = INT64_MIN;
	volatile int64_t x175 = -18159559338313922LL;
	volatile int64_t t43 = 9208158LL;

	t43 = (((x173/x174)<=x175)&x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x178 = INT64_MIN;
	int32_t x179 = INT32_MIN;
	static volatile int32_t t44 = 23865;

	t44 = (((x177/x178)<=x179)&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 19U;
	int16_t x182 = INT16_MAX;
	volatile int64_t t45 = -30817400619673LL;

	t45 = (((x181/x182)<=x183)&x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	volatile int32_t t46 = 5442;

	t46 = (((x185/x186)<=x187)&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x189 = -1LL;

	t47 = (((x189/x190)<=x191)&x192);

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -17;
	static int64_t x194 = -2179404LL;
	static volatile int64_t x195 = INT64_MAX;
	int16_t x196 = INT16_MIN;
	volatile int32_t t48 = -253;

	t48 = (((x193/x194)<=x195)&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MIN;
	uint32_t x202 = UINT32_MAX;
	int64_t x203 = INT64_MAX;
	volatile int16_t x204 = 111;
	static volatile int32_t t49 = 3081;

	t49 = (((x201/x202)<=x203)&x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = -1;
	static int32_t x206 = 271049;
	int64_t x207 = -1LL;
	int16_t x208 = INT16_MAX;

	t50 = (((x205/x206)<=x207)&x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = -63;
	uint16_t x210 = UINT16_MAX;
	volatile int8_t x211 = INT8_MIN;
	static uint16_t x212 = 12285U;
	volatile int32_t t51 = 172255;

	t51 = (((x209/x210)<=x211)&x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = -14;
	uint64_t x214 = UINT64_MAX;
	uint32_t x215 = 21U;
	volatile int16_t x216 = INT16_MIN;
	volatile int32_t t52 = 13;

	t52 = (((x213/x214)<=x215)&x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x217 = 636U;
	int32_t x218 = -1;
	int16_t x219 = -1;
	int16_t x220 = 11561;
	static int32_t t53 = -1295;

	t53 = (((x217/x218)<=x219)&x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MAX;
	int64_t x223 = -29315082LL;
	static int64_t x224 = 3057600010600367297LL;
	volatile int64_t t54 = 53724LL;

	t54 = (((x221/x222)<=x223)&x224);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x225 = 0;
	int64_t x226 = -320117930767LL;
	static volatile uint8_t x227 = UINT8_MAX;
	volatile uint16_t x228 = 1U;

	t55 = (((x225/x226)<=x227)&x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x229 = 1U;
	int8_t x230 = INT8_MIN;
	static int8_t x231 = -21;
	static int16_t x232 = INT16_MAX;
	int32_t t56 = 767;

	t56 = (((x229/x230)<=x231)&x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = -1;
	uint8_t x234 = 6U;
	static int32_t x235 = -54;
	static int32_t t57 = 119;

	t57 = (((x233/x234)<=x235)&x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x238 = INT64_MAX;
	int64_t x239 = INT64_MAX;
	static volatile int32_t t58 = 167596436;

	t58 = (((x237/x238)<=x239)&x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x241 = 2017322U;
	int64_t x243 = INT64_MAX;
	int32_t x244 = INT32_MAX;
	volatile int32_t t59 = -32985737;

	t59 = (((x241/x242)<=x243)&x244);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x245 = INT16_MIN;
	volatile int32_t t60 = -5;

	t60 = (((x245/x246)<=x247)&x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x249 = -1;
	volatile int16_t x250 = INT16_MIN;
	static int32_t x252 = INT32_MIN;
	volatile int32_t t61 = -36;

	t61 = (((x249/x250)<=x251)&x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x253 = INT8_MIN;
	static int16_t x254 = -86;
	int16_t x255 = 1;
	static int16_t x256 = INT16_MIN;
	volatile int32_t t62 = -40;

	t62 = (((x253/x254)<=x255)&x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x257 = 14076U;
	int32_t x258 = 1;
	uint32_t x259 = UINT32_MAX;
	int16_t x260 = -1378;

	t63 = (((x257/x258)<=x259)&x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = -1;
	volatile int64_t x262 = 8LL;
	int8_t x263 = INT8_MAX;
	int64_t x264 = INT64_MIN;
	volatile int64_t t64 = -21910133LL;

	t64 = (((x261/x262)<=x263)&x264);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x265 = 1117U;
	int8_t x266 = INT8_MAX;
	uint32_t x268 = UINT32_MAX;
	volatile uint32_t t65 = 1904473121U;

	t65 = (((x265/x266)<=x267)&x268);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x270 = INT8_MAX;
	int8_t x272 = -1;
	static volatile int32_t t66 = 18950;

	t66 = (((x269/x270)<=x271)&x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = 1;
	uint16_t x274 = 21096U;
	uint32_t x275 = 1966551U;
	static uint16_t x276 = 55U;
	int32_t t67 = 6333;

	t67 = (((x273/x274)<=x275)&x276);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = UINT32_MAX;
	uint16_t x282 = UINT16_MAX;
	static uint8_t x283 = 28U;
	int32_t x284 = -1;

	t68 = (((x281/x282)<=x283)&x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = -1LL;
	uint8_t x286 = 14U;
	uint8_t x287 = 12U;
	volatile int32_t t69 = 3;

	t69 = (((x285/x286)<=x287)&x288);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x293 = INT32_MIN;
	uint8_t x294 = UINT8_MAX;
	int8_t x295 = -1;
	int32_t x296 = INT32_MIN;
	volatile int32_t t70 = 30901854;

	t70 = (((x293/x294)<=x295)&x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x297 = 1189159855747574427LLU;
	int16_t x300 = -1;
	volatile int32_t t71 = 1;

	t71 = (((x297/x298)<=x299)&x300);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x301 = 14U;
	int64_t x302 = -12113LL;
	int8_t x304 = 2;
	volatile int32_t t72 = -611;

	t72 = (((x301/x302)<=x303)&x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x305 = UINT8_MAX;
	uint16_t x306 = UINT16_MAX;
	volatile uint64_t x307 = UINT64_MAX;
	uint16_t x308 = 23U;
	int32_t t73 = 75281581;

	t73 = (((x305/x306)<=x307)&x308);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x309 = -1;
	uint8_t x310 = 1U;
	static int8_t x311 = INT8_MAX;

	t74 = (((x309/x310)<=x311)&x312);

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = -1LL;
	int8_t x314 = INT8_MIN;
	int64_t x315 = -6321533LL;
	int8_t x316 = INT8_MAX;

	t75 = (((x313/x314)<=x315)&x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x317 = INT8_MAX;
	int32_t x318 = INT32_MIN;
	static int32_t x320 = 1;
	static int32_t t76 = 172084;

	t76 = (((x317/x318)<=x319)&x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x322 = INT32_MAX;
	static int64_t x323 = -1LL;
	volatile int32_t t77 = -295170;

	t77 = (((x321/x322)<=x323)&x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x326 = UINT64_MAX;
	volatile int32_t t78 = -119309433;

	t78 = (((x325/x326)<=x327)&x328);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x331 = INT32_MIN;
	static int16_t x332 = -1;

	t79 = (((x329/x330)<=x331)&x332);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = -32;
	uint32_t x334 = 6178U;
	volatile int16_t x335 = INT16_MAX;
	volatile int8_t x336 = INT8_MIN;
	static volatile int32_t t80 = 1;

	t80 = (((x333/x334)<=x335)&x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x338 = INT64_MAX;
	int16_t x339 = -1;
	volatile uint8_t x340 = 28U;
	volatile int32_t t81 = -55789;

	t81 = (((x337/x338)<=x339)&x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x341 = -1;
	uint64_t x342 = 136310758115381LLU;
	static uint64_t x344 = UINT64_MAX;
	uint64_t t82 = 832LLU;

	t82 = (((x341/x342)<=x343)&x344);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x345 = 13U;
	uint32_t x348 = 4633U;
	uint32_t t83 = 619875U;

	t83 = (((x345/x346)<=x347)&x348);

	if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x350 = INT8_MIN;
	static uint64_t x351 = UINT64_MAX;

	t84 = (((x349/x350)<=x351)&x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x358 = 5U;
	volatile int64_t x359 = -1LL;
	static volatile int64_t x360 = INT64_MIN;
	static volatile int64_t t85 = -290663356037LL;

	t85 = (((x357/x358)<=x359)&x360);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x361 = UINT16_MAX;
	static uint16_t x362 = UINT16_MAX;
	volatile uint32_t x363 = 153841U;
	static int32_t t86 = 12;

	t86 = (((x361/x362)<=x363)&x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x366 = UINT16_MAX;
	int32_t x367 = INT32_MIN;
	volatile int16_t x368 = INT16_MIN;
	volatile int32_t t87 = -462;

	t87 = (((x365/x366)<=x367)&x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MIN;
	int16_t x370 = INT16_MAX;
	static int16_t x372 = -1;
	int32_t t88 = 61;

	t88 = (((x369/x370)<=x371)&x372);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x373 = -41182934679014389LL;
	uint16_t x375 = 22U;
	int64_t x376 = 1826254LL;
	volatile int64_t t89 = 1453762886306946LL;

	t89 = (((x373/x374)<=x375)&x376);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = -348994193;
	uint32_t x378 = 386612U;
	static int32_t x379 = 6587029;
	uint32_t t90 = 1880097U;

	t90 = (((x377/x378)<=x379)&x380);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x381 = UINT8_MAX;
	int16_t x382 = INT16_MIN;
	static uint32_t x383 = UINT32_MAX;
	int32_t x384 = INT32_MIN;
	volatile int32_t t91 = -385;

	t91 = (((x381/x382)<=x383)&x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x385 = -1;
	uint8_t x386 = 8U;
	int32_t x387 = -10;
	volatile int8_t x388 = INT8_MIN;
	static volatile int32_t t92 = 23;

	t92 = (((x385/x386)<=x387)&x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = INT16_MIN;
	static uint64_t x391 = UINT64_MAX;
	uint64_t x392 = 5443015329LLU;
	volatile uint64_t t93 = 3452076968760923LLU;

	t93 = (((x389/x390)<=x391)&x392);

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = -162312LL;
	int32_t x394 = INT32_MIN;
	int64_t x395 = -904LL;
	int8_t x396 = INT8_MAX;
	int32_t t94 = -5;

	t94 = (((x393/x394)<=x395)&x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x397 = INT8_MAX;
	int32_t x399 = INT32_MAX;
	int8_t x400 = INT8_MIN;

	t95 = (((x397/x398)<=x399)&x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = -1;
	volatile uint16_t x402 = 15714U;
	static uint64_t x403 = 40235092377LLU;
	int32_t t96 = 118;

	t96 = (((x401/x402)<=x403)&x404);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x405 = -5;
	volatile uint32_t x406 = 13121U;
	int32_t t97 = 64555;

	t97 = (((x405/x406)<=x407)&x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x409 = 15665U;
	static int16_t x410 = INT16_MIN;
	int32_t x412 = -5;
	int32_t t98 = 709186;

	t98 = (((x409/x410)<=x411)&x412);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x413 = 3U;
	uint32_t x414 = 1U;
	int8_t x415 = 19;
	int16_t x416 = -1;
	int32_t t99 = 3;

	t99 = (((x413/x414)<=x415)&x416);

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

