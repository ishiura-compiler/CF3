#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = UINT32_MAX;
int8_t x15 = INT8_MIN;
static volatile int16_t x16 = -1;
int16_t x17 = -1;
int32_t t4 = 10467;
int16_t x39 = -1;
volatile uint32_t t9 = 17563U;
int32_t t10 = 37653;
uint32_t x50 = UINT32_MAX;
uint64_t x55 = 7461534839LLU;
static int16_t x56 = -1;
volatile int32_t t13 = -30;
volatile int32_t t15 = 127286;
volatile int32_t t16 = 9223;
static int32_t x70 = -1;
static int16_t x72 = -709;
static int8_t x81 = 23;
static int16_t x90 = INT16_MIN;
static int32_t x92 = INT32_MAX;
static int32_t t22 = 239406;
int64_t x101 = -31088LL;
int8_t x103 = INT8_MAX;
volatile int32_t x104 = -6892590;
int64_t t24 = -99902520LL;
int32_t x105 = INT32_MIN;
uint32_t x108 = UINT32_MAX;
int64_t x115 = -1LL;
volatile int64_t t28 = 21LL;
int32_t t29 = -791833222;
int32_t x129 = INT32_MIN;
volatile int64_t x135 = INT64_MIN;
static int16_t x136 = INT16_MIN;
uint64_t t31 = 360753LLU;
volatile int64_t x137 = INT64_MIN;
uint64_t x138 = 2206298661720611LLU;
uint8_t x139 = UINT8_MAX;
uint64_t t32 = 9LLU;
int16_t x141 = INT16_MIN;
int32_t x143 = 36033227;
static int16_t x153 = 13866;
int64_t x158 = -1478934918802678652LL;
int64_t x160 = INT64_MIN;
uint32_t x168 = 18481U;
int8_t x169 = INT8_MIN;
int64_t x170 = INT64_MAX;
int32_t x174 = 35;
static int32_t x181 = INT32_MIN;
int8_t x183 = INT8_MAX;
int64_t x184 = INT64_MIN;
volatile int64_t t43 = -237333970860LL;
static volatile int16_t x192 = -1;
int64_t t44 = 24014509672LL;
static int32_t x196 = -1;
static int32_t x200 = INT32_MAX;
int16_t x207 = INT16_MAX;
uint8_t x215 = 3U;
int64_t x216 = INT64_MAX;
int64_t x222 = INT64_MAX;
int64_t x227 = 56308569529LL;
uint64_t t53 = 20764680291LLU;
int16_t x241 = INT16_MIN;
volatile int32_t x242 = -1;
uint32_t t57 = 4200U;
static int8_t x253 = -32;
int16_t x255 = -1;
uint16_t x258 = UINT16_MAX;
int64_t t60 = 1LL;
uint32_t x262 = UINT32_MAX;
static uint16_t x263 = 5356U;
static int16_t x269 = INT16_MAX;
int8_t x273 = INT8_MIN;
volatile int8_t x278 = INT8_MIN;
volatile int8_t x283 = INT8_MIN;
uint32_t x284 = 411U;
uint32_t t66 = 67496477U;
int32_t x286 = 2931;
uint8_t x290 = UINT8_MAX;
volatile int32_t t68 = 1699218;
int16_t x299 = INT16_MIN;
int8_t x300 = INT8_MIN;
static int8_t x304 = -1;
int64_t t72 = -152LL;
int64_t x312 = INT64_MIN;
int32_t x313 = 1;
int8_t x320 = -1;
int16_t x323 = -1;
static int8_t x325 = INT8_MIN;
int64_t x332 = -31LL;
volatile int32_t t79 = 11979299;
uint64_t x338 = UINT64_MAX;
uint8_t x340 = 2U;
volatile int8_t x342 = -15;
static int16_t x344 = INT16_MIN;
int32_t x347 = -481;
int16_t x352 = -13;
static volatile int32_t t83 = 159;
uint32_t x358 = UINT32_MAX;
uint8_t x364 = 1U;
int32_t x365 = INT32_MIN;
int64_t x366 = INT64_MIN;
static uint8_t x367 = 120U;
int64_t x369 = INT64_MIN;
volatile int16_t x373 = INT16_MIN;
static volatile int32_t t89 = -1681991;
int64_t x389 = INT64_MIN;
volatile uint64_t x391 = 7203505LLU;
int64_t t93 = -18275845LL;
int8_t x398 = INT8_MIN;
volatile int64_t x400 = -1LL;
int8_t x404 = INT8_MIN;
int32_t t95 = -12309;
int16_t x407 = -79;
static uint32_t x411 = 8U;
int16_t x412 = 2617;
int32_t x415 = INT32_MAX;
volatile uint64_t x417 = 34765420627350172LLU;
static volatile uint64_t t99 = 19137731188373LLU;


void f0(void) {
	int64_t x2 = INT64_MAX;
	int16_t x3 = INT16_MAX;
	int16_t x4 = INT16_MIN;
	volatile uint32_t t0 = 23U;

	t0 = ((x1&(x2<=x3))/x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 3945U;
	int32_t x6 = INT32_MAX;
	uint64_t x7 = 807438LLU;
	uint64_t x8 = 423028LLU;
	uint64_t t1 = 900797431349LLU;

	t1 = ((x5&(x6<=x7))/x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MAX;
	uint16_t x10 = 24U;
	uint32_t x11 = 31953U;
	static uint64_t x12 = 10325156002284940LLU;
	uint64_t t2 = 57888470912526474LLU;

	t2 = ((x9&(x10<=x11))/x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 111U;
	volatile int64_t x14 = INT64_MAX;
	volatile int32_t t3 = 3433968;

	t3 = ((x13&(x14<=x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x18 = 1;
	volatile int16_t x19 = -1;
	int8_t x20 = -8;

	t4 = ((x17&(x18<=x19))/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int32_t x22 = 54;
	uint8_t x23 = 20U;
	int32_t x24 = INT32_MIN;
	int32_t t5 = 5;

	t5 = ((x21&(x22<=x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	volatile int16_t x26 = 0;
	int8_t x27 = -1;
	volatile int16_t x28 = INT16_MAX;
	volatile int32_t t6 = 35742;

	t6 = ((x25&(x26<=x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 7784;
	static uint8_t x30 = 15U;
	int8_t x31 = INT8_MAX;
	volatile uint32_t x32 = 1256U;
	volatile uint32_t t7 = 907231U;

	t7 = ((x29&(x30<=x31))/x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -32LL;
	uint16_t x34 = 364U;
	static uint32_t x35 = UINT32_MAX;
	int64_t x36 = INT64_MIN;
	int64_t t8 = -1935481LL;

	t8 = ((x33&(x34<=x35))/x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	uint32_t x38 = 55229886U;
	int8_t x40 = 7;

	t9 = ((x37&(x38<=x39))/x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	volatile uint32_t x42 = 17199037U;
	static int16_t x43 = -1;
	int32_t x44 = INT32_MAX;

	t10 = ((x41&(x42<=x43))/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 28135U;
	volatile int32_t x46 = INT32_MAX;
	uint16_t x47 = 309U;
	int16_t x48 = INT16_MAX;
	int32_t t11 = -9491;

	t11 = ((x45&(x46<=x47))/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 5609133335155LLU;
	volatile uint8_t x51 = UINT8_MAX;
	uint8_t x52 = 24U;
	static uint64_t t12 = 12LLU;

	t12 = ((x49&(x50<=x51))/x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -63;
	int16_t x54 = INT16_MIN;

	t13 = ((x53&(x54<=x55))/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x57 = 3U;
	volatile uint64_t x58 = UINT64_MAX;
	int32_t x59 = INT32_MIN;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = 19435;

	t14 = ((x57&(x58<=x59))/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	static volatile int32_t x62 = INT32_MIN;
	int64_t x63 = INT64_MIN;
	volatile uint8_t x64 = UINT8_MAX;

	t15 = ((x61&(x62<=x63))/x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 958525794;
	uint8_t x66 = 3U;
	static uint64_t x67 = UINT64_MAX;
	int32_t x68 = INT32_MIN;

	t16 = ((x65&(x66<=x67))/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x69 = 61595U;
	uint16_t x71 = 23U;
	uint32_t t17 = 97U;

	t17 = ((x69&(x70<=x71))/x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int64_t x74 = INT64_MIN;
	static uint16_t x75 = 119U;
	uint16_t x76 = UINT16_MAX;
	int32_t t18 = 107;

	t18 = ((x73&(x74<=x75))/x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 30U;
	uint8_t x78 = 9U;
	volatile int64_t x79 = -16506764895748LL;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 1;

	t19 = ((x77&(x78<=x79))/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 187075797U;
	volatile int8_t x83 = INT8_MAX;
	int64_t x84 = 1LL;
	volatile int64_t t20 = -99830LL;

	t20 = ((x81&(x82<=x83))/x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = UINT64_MAX;
	int32_t x86 = 299;
	int64_t x87 = -1LL;
	int32_t x88 = INT32_MIN;
	static uint64_t t21 = 115LLU;

	t21 = ((x85&(x86<=x87))/x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int16_t x91 = -1;

	t22 = ((x89&(x90<=x91))/x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	volatile int8_t x94 = 1;
	int8_t x95 = INT8_MAX;
	int8_t x96 = INT8_MIN;
	static volatile int64_t t23 = 390736158414LL;

	t23 = ((x93&(x94<=x95))/x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x102 = INT32_MAX;

	t24 = ((x101&(x102<=x103))/x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x106 = 5483816LL;
	int16_t x107 = INT16_MAX;
	volatile uint32_t t25 = 2017U;

	t25 = ((x105&(x106<=x107))/x108);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MAX;
	static uint64_t x110 = 21765716943358602LLU;
	int32_t x111 = INT32_MIN;
	volatile int32_t x112 = INT32_MAX;
	int64_t t26 = -107500478LL;

	t26 = ((x109&(x110<=x111))/x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = UINT16_MAX;
	volatile uint64_t x114 = 4692LLU;
	int32_t x116 = 1730031;
	int32_t t27 = -11680067;

	t27 = ((x113&(x114<=x115))/x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = 112U;
	int32_t x118 = INT32_MAX;
	int64_t x119 = 29LL;
	int64_t x120 = INT64_MIN;

	t28 = ((x117&(x118<=x119))/x120);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = -1;
	volatile int8_t x122 = INT8_MIN;
	uint16_t x123 = 34U;
	int16_t x124 = -8;

	t29 = ((x121&(x122<=x123))/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x130 = 3910171246389LLU;
	volatile uint8_t x131 = 28U;
	static volatile int8_t x132 = INT8_MIN;
	volatile int32_t t30 = 1408343;

	t30 = ((x129&(x130<=x131))/x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x133 = 3016073920LLU;
	int32_t x134 = -23;

	t31 = ((x133&(x134<=x135))/x136);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x140 = 9971451510500579LLU;

	t32 = ((x137&(x138<=x139))/x140);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x142 = -1;
	int64_t x144 = INT64_MIN;
	int64_t t33 = 7595539961LL;

	t33 = ((x141&(x142<=x143))/x144);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MIN;
	int32_t x146 = INT32_MAX;
	static int8_t x147 = 2;
	static int8_t x148 = 1;
	int32_t t34 = 118998;

	t34 = ((x145&(x146<=x147))/x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = -12LL;
	int8_t x150 = INT8_MIN;
	static int32_t x151 = -1;
	volatile int16_t x152 = INT16_MAX;
	static volatile int64_t t35 = -87100641628667LL;

	t35 = ((x149&(x150<=x151))/x152);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x154 = INT8_MIN;
	int8_t x155 = -1;
	uint8_t x156 = 7U;
	volatile int32_t t36 = 6;

	t36 = ((x153&(x154<=x155))/x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = -692334110;
	int16_t x159 = -1;
	volatile int64_t t37 = -544521720893494344LL;

	t37 = ((x157&(x158<=x159))/x160);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = 0U;
	int16_t x162 = INT16_MIN;
	static int32_t x163 = INT32_MAX;
	int32_t x164 = -2;
	int32_t t38 = -35;

	t38 = ((x161&(x162<=x163))/x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MIN;
	int64_t x166 = INT64_MAX;
	volatile int32_t x167 = INT32_MAX;
	int64_t t39 = -1707827LL;

	t39 = ((x165&(x166<=x167))/x168);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x171 = UINT16_MAX;
	static int32_t x172 = INT32_MIN;
	volatile int32_t t40 = -229;

	t40 = ((x169&(x170<=x171))/x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = -3530385;
	uint64_t x175 = UINT64_MAX;
	int8_t x176 = 28;
	int32_t t41 = 24055;

	t41 = ((x173&(x174<=x175))/x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x177 = 8985870LLU;
	int32_t x178 = -1;
	static int8_t x179 = INT8_MAX;
	int32_t x180 = INT32_MAX;
	uint64_t t42 = 6102LLU;

	t42 = ((x177&(x178<=x179))/x180);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x182 = -1;

	t43 = ((x181&(x182<=x183))/x184);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x189 = -1LL;
	int16_t x190 = -2457;
	int32_t x191 = -1;

	t44 = ((x189&(x190<=x191))/x192);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x193 = UINT32_MAX;
	static volatile int32_t x194 = 1;
	int8_t x195 = INT8_MAX;
	uint32_t t45 = 3522523U;

	t45 = ((x193&(x194<=x195))/x196);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x197 = 1U;
	int32_t x198 = INT32_MAX;
	int32_t x199 = 820;
	int32_t t46 = -288;

	t46 = ((x197&(x198<=x199))/x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x201 = 5U;
	static uint8_t x202 = 126U;
	int64_t x203 = INT64_MAX;
	uint16_t x204 = 27461U;
	static int32_t t47 = 93445;

	t47 = ((x201&(x202<=x203))/x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x205 = INT64_MIN;
	uint32_t x206 = UINT32_MAX;
	int32_t x208 = -318704;
	int64_t t48 = 1LL;

	t48 = ((x205&(x206<=x207))/x208);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = -1;
	volatile uint64_t x210 = 1140926LLU;
	int16_t x211 = INT16_MIN;
	static int16_t x212 = 13740;
	int32_t t49 = 2346536;

	t49 = ((x209&(x210<=x211))/x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x213 = 219914431861568494LLU;
	int32_t x214 = 1;
	static uint64_t t50 = 2148342002947660649LLU;

	t50 = ((x213&(x214<=x215))/x216);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x217 = INT16_MAX;
	volatile int16_t x218 = -127;
	uint16_t x219 = 7318U;
	int32_t x220 = -1;
	int32_t t51 = 5;

	t51 = ((x217&(x218<=x219))/x220);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = 3906162482004587634LLU;
	int16_t x223 = 703;
	static int64_t x224 = -6652LL;
	uint64_t t52 = 20423130870473401LLU;

	t52 = ((x221&(x222<=x223))/x224);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = -3;
	uint8_t x226 = UINT8_MAX;
	uint64_t x228 = 31551LLU;

	t53 = ((x225&(x226<=x227))/x228);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x229 = -773;
	int8_t x230 = -1;
	uint8_t x231 = 54U;
	static int32_t x232 = INT32_MIN;
	static int32_t t54 = -86324964;

	t54 = ((x229&(x230<=x231))/x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x237 = 4U;
	int16_t x238 = INT16_MIN;
	int64_t x239 = -4130346360818586LL;
	static volatile uint64_t x240 = 100772966747803LLU;
	volatile uint64_t t55 = 0LLU;

	t55 = ((x237&(x238<=x239))/x240);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x243 = INT16_MIN;
	int64_t x244 = INT64_MAX;
	static volatile int64_t t56 = -2984LL;

	t56 = ((x241&(x242<=x243))/x244);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x245 = 109U;
	static uint8_t x246 = 5U;
	static volatile int8_t x247 = INT8_MIN;
	int8_t x248 = -1;

	t57 = ((x245&(x246<=x247))/x248);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x249 = 58U;
	int32_t x250 = INT32_MIN;
	uint32_t x251 = UINT32_MAX;
	uint8_t x252 = 1U;
	int32_t t58 = -30596982;

	t58 = ((x249&(x250<=x251))/x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x254 = INT16_MIN;
	int64_t x256 = INT64_MAX;
	static int64_t t59 = 53439LL;

	t59 = ((x253&(x254<=x255))/x256);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x257 = INT64_MIN;
	static int8_t x259 = INT8_MIN;
	int32_t x260 = INT32_MIN;

	t60 = ((x257&(x258<=x259))/x260);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x261 = INT32_MIN;
	int16_t x264 = INT16_MIN;
	int32_t t61 = -1019721741;

	t61 = ((x261&(x262<=x263))/x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x265 = INT64_MIN;
	int32_t x266 = INT32_MAX;
	uint16_t x267 = 57U;
	int32_t x268 = INT32_MIN;
	int64_t t62 = 314LL;

	t62 = ((x265&(x266<=x267))/x268);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x270 = -1LL;
	int64_t x271 = INT64_MAX;
	uint32_t x272 = 1644967978U;
	uint32_t t63 = 665212U;

	t63 = ((x269&(x270<=x271))/x272);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x274 = -12074283;
	static volatile int16_t x275 = 0;
	volatile int16_t x276 = -7999;
	static volatile int32_t t64 = 1;

	t64 = ((x273&(x274<=x275))/x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x277 = 2U;
	int64_t x279 = -1LL;
	uint16_t x280 = 2U;
	int32_t t65 = 16;

	t65 = ((x277&(x278<=x279))/x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = INT16_MIN;
	static int64_t x282 = INT64_MAX;

	t66 = ((x281&(x282<=x283))/x284);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x285 = INT16_MAX;
	int8_t x287 = INT8_MAX;
	static int16_t x288 = 307;
	static volatile int32_t t67 = -1;

	t67 = ((x285&(x286<=x287))/x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x289 = 1625U;
	int8_t x291 = -40;
	volatile int32_t x292 = -41289557;

	t68 = ((x289&(x290<=x291))/x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = -1LL;
	int8_t x294 = -1;
	int32_t x295 = INT32_MIN;
	int64_t x296 = -5038621LL;
	int64_t t69 = -12354LL;

	t69 = ((x293&(x294<=x295))/x296);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = INT32_MIN;
	int64_t x298 = -1LL;
	static volatile int32_t t70 = 3940272;

	t70 = ((x297&(x298<=x299))/x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = -1;
	uint8_t x302 = 44U;
	int32_t x303 = INT32_MIN;
	int32_t t71 = 4305;

	t71 = ((x301&(x302<=x303))/x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x305 = -1LL;
	volatile int8_t x306 = 16;
	int64_t x307 = INT64_MIN;
	int8_t x308 = INT8_MIN;

	t72 = ((x305&(x306<=x307))/x308);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x309 = 27LLU;
	volatile int16_t x310 = INT16_MIN;
	int16_t x311 = INT16_MIN;
	volatile uint64_t t73 = 51534LLU;

	t73 = ((x309&(x310<=x311))/x312);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x314 = 45584LLU;
	int8_t x315 = INT8_MAX;
	volatile int8_t x316 = INT8_MAX;
	int32_t t74 = -14658;

	t74 = ((x313&(x314<=x315))/x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = INT8_MIN;
	int32_t x318 = 3198585;
	static int64_t x319 = INT64_MIN;
	int32_t t75 = -7260430;

	t75 = ((x317&(x318<=x319))/x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = 685;
	static int16_t x322 = -2;
	uint64_t x324 = 1218994549LLU;
	static volatile uint64_t t76 = 834484LLU;

	t76 = ((x321&(x322<=x323))/x324);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x326 = INT64_MAX;
	int64_t x327 = INT64_MAX;
	static volatile uint32_t x328 = 1005806U;
	uint32_t t77 = 19390U;

	t77 = ((x325&(x326<=x327))/x328);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x329 = UINT32_MAX;
	volatile uint32_t x330 = 4U;
	uint64_t x331 = UINT64_MAX;
	int64_t t78 = -5272069661431LL;

	t78 = ((x329&(x330<=x331))/x332);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x333 = INT32_MIN;
	static int16_t x334 = INT16_MAX;
	int64_t x335 = INT64_MIN;
	volatile int8_t x336 = 1;

	t79 = ((x333&(x334<=x335))/x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = 44;
	int64_t x339 = -1018232337LL;
	static volatile int32_t t80 = 5209;

	t80 = ((x337&(x338<=x339))/x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = INT8_MIN;
	int32_t x343 = INT32_MIN;
	int32_t t81 = 5249080;

	t81 = ((x341&(x342<=x343))/x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x345 = 3U;
	int16_t x346 = -1;
	int8_t x348 = -1;
	int32_t t82 = -946;

	t82 = ((x345&(x346<=x347))/x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = -5;
	uint32_t x350 = 139007U;
	int64_t x351 = INT64_MIN;

	t83 = ((x349&(x350<=x351))/x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = -1LL;
	uint8_t x354 = 19U;
	uint8_t x355 = UINT8_MAX;
	static volatile uint16_t x356 = 1545U;
	static volatile int64_t t84 = 22077310063335049LL;

	t84 = ((x353&(x354<=x355))/x356);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = -1;
	int8_t x359 = INT8_MIN;
	volatile int64_t x360 = INT64_MAX;
	int64_t t85 = 0LL;

	t85 = ((x357&(x358<=x359))/x360);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x361 = UINT8_MAX;
	int8_t x362 = INT8_MIN;
	int64_t x363 = INT64_MIN;
	volatile int32_t t86 = -2;

	t86 = ((x361&(x362<=x363))/x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x368 = 500U;
	uint32_t t87 = 6U;

	t87 = ((x365&(x366<=x367))/x368);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x370 = UINT64_MAX;
	uint16_t x371 = 562U;
	int64_t x372 = -313185092889LL;
	static int64_t t88 = 5635LL;

	t88 = ((x369&(x370<=x371))/x372);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x374 = 9847895U;
	int16_t x375 = INT16_MAX;
	volatile int8_t x376 = INT8_MIN;

	t89 = ((x373&(x374<=x375))/x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = INT16_MIN;
	uint64_t x378 = 2331932412197LLU;
	int16_t x379 = INT16_MIN;
	static uint16_t x380 = 7414U;
	volatile int32_t t90 = -671078464;

	t90 = ((x377&(x378<=x379))/x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x381 = UINT32_MAX;
	int16_t x382 = 0;
	int32_t x383 = INT32_MIN;
	volatile int8_t x384 = -1;
	uint32_t t91 = 7128016U;

	t91 = ((x381&(x382<=x383))/x384);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x385 = 28156086U;
	int16_t x386 = INT16_MAX;
	volatile uint16_t x387 = UINT16_MAX;
	int8_t x388 = -25;
	uint32_t t92 = 615344892U;

	t92 = ((x385&(x386<=x387))/x388);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x390 = -1;
	int64_t x392 = -1LL;

	t93 = ((x389&(x390<=x391))/x392);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x397 = 41U;
	uint64_t x399 = UINT64_MAX;
	volatile int64_t t94 = -509LL;

	t94 = ((x397&(x398<=x399))/x400);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x401 = -1;
	int16_t x402 = -1;
	uint32_t x403 = 188U;

	t95 = ((x401&(x402<=x403))/x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x405 = INT32_MAX;
	static int32_t x406 = -60;
	static int64_t x408 = INT64_MIN;
	static int64_t t96 = 845LL;

	t96 = ((x405&(x406<=x407))/x408);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x409 = INT16_MAX;
	int64_t x410 = -407209666712905373LL;
	volatile int32_t t97 = -14593665;

	t97 = ((x409&(x410<=x411))/x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = -1;
	int32_t x414 = INT32_MIN;
	static int16_t x416 = -1;
	volatile int32_t t98 = -4024;

	t98 = ((x413&(x414<=x415))/x416);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x418 = 6;
	int8_t x419 = -1;
	volatile int32_t x420 = INT32_MAX;

	t99 = ((x417&(x418<=x419))/x420);

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

