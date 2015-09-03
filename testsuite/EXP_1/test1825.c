#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MAX;
int8_t x15 = INT8_MIN;
int32_t x17 = INT32_MIN;
int64_t x21 = -1LL;
int64_t t6 = 805LL;
uint8_t x32 = 115U;
int32_t t8 = 20451863;
static uint16_t x40 = UINT16_MAX;
int32_t t9 = 43;
int32_t x44 = -1357;
int64_t t10 = -567747LL;
int8_t x53 = INT8_MAX;
int32_t x55 = INT32_MIN;
int16_t x60 = 14795;
uint8_t x67 = 26U;
volatile int32_t t16 = 1;
int32_t t17 = 70;
int64_t x73 = 30534064453103LL;
int64_t x80 = INT64_MIN;
uint16_t x90 = 182U;
int8_t x91 = -11;
volatile uint64_t x95 = UINT64_MAX;
int16_t x97 = -10341;
static uint8_t x106 = 4U;
int16_t x107 = 1615;
int8_t x116 = -1;
volatile uint64_t t27 = 209427297LLU;
volatile int64_t x120 = 1820276037335LL;
int8_t x124 = -1;
int16_t x131 = INT16_MAX;
int8_t x137 = -1;
volatile int16_t x138 = INT16_MAX;
static uint32_t x143 = UINT32_MAX;
static volatile uint8_t x148 = 14U;
static uint64_t x150 = UINT64_MAX;
int8_t x154 = -1;
uint64_t t37 = 5330LLU;
int32_t x172 = INT32_MAX;
volatile uint64_t x173 = 289571LLU;
uint8_t x174 = UINT8_MAX;
volatile int8_t x178 = -30;
volatile uint32_t x182 = 1460U;
volatile uint32_t x184 = 240959539U;
int8_t x190 = INT8_MIN;
volatile int64_t t46 = 1LL;
int64_t x196 = INT64_MIN;
uint32_t x206 = 522445U;
uint16_t x209 = 42U;
int64_t x210 = INT64_MAX;
volatile int64_t t51 = -32494822913476LL;
volatile int32_t t54 = 254;
static volatile int8_t x232 = INT8_MIN;
volatile int64_t t55 = -239LL;
static volatile int8_t x234 = 44;
static int32_t x239 = INT32_MIN;
static int32_t x242 = INT32_MAX;
int16_t x250 = INT16_MAX;
volatile uint64_t x255 = UINT64_MAX;
volatile int8_t x265 = 30;
volatile uint32_t x274 = 47U;
int8_t x277 = 4;
static volatile int32_t x279 = INT32_MIN;
int16_t x288 = -2;
volatile int32_t t68 = 447492;
static int32_t x294 = -5904;
uint32_t t71 = 2490622U;
static int16_t x305 = INT16_MIN;
int64_t x311 = INT64_MIN;
uint32_t x312 = 105U;
volatile int8_t x317 = -1;
uint64_t t76 = 18602527495023LLU;
static uint32_t x328 = 24992U;
uint16_t x329 = 655U;
static uint32_t t80 = 2387685U;
int8_t x344 = INT8_MAX;
volatile int16_t x347 = -1;
int8_t x354 = 6;
uint32_t x358 = UINT32_MAX;
int64_t x359 = -1LL;
int64_t x363 = INT64_MAX;
int64_t t86 = 63725770328597LL;
uint16_t x367 = UINT16_MAX;
volatile int8_t x371 = INT8_MIN;
int64_t x376 = 230327476374007100LL;
int64_t t89 = 543364695LL;
int16_t x377 = -1;
int16_t x383 = -1;
static uint32_t t91 = 9854U;
volatile int64_t t92 = -6767648LL;
int32_t x389 = -1;
volatile int64_t x416 = INT64_MAX;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	int8_t x2 = -23;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -12;

	t0 = (((x1&x2)&x3)%x4);

	if (t0 != 32640) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	static int32_t x6 = INT32_MAX;
	int64_t x7 = INT64_MIN;
	uint64_t x8 = UINT64_MAX;
	static volatile uint64_t t1 = 6972376048292LLU;

	t1 = (((x5&x6)&x7)%x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int8_t x10 = 6;
	static int32_t x11 = 24074;
	int32_t x12 = -53452;
	int32_t t2 = 167930865;

	t2 = (((x9&x10)&x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static volatile int64_t x14 = 14343967225LL;
	static uint64_t x16 = 562181LLU;
	uint64_t t3 = 9357434LLU;

	t3 = (((x13&x14)&x15)%x16);

	if (t3 != 481070LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 1U;
	int16_t x19 = 902;
	uint32_t x20 = UINT32_MAX;
	uint32_t t4 = 672529U;

	t4 = (((x17&x18)&x19)%x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x22 = -19521;
	uint8_t x23 = 27U;
	static uint64_t x24 = 232071212067LLU;
	volatile uint64_t t5 = 7567014120218027LLU;

	t5 = (((x21&x22)&x23)%x24);

	if (t5 != 27LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -918057542644578935LL;
	static uint16_t x26 = 292U;
	volatile int16_t x27 = -7836;
	volatile int32_t x28 = 5;

	t6 = (((x25&x26)&x27)%x28);

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint64_t x30 = 131925170683633718LLU;
	uint32_t x31 = 1990563U;
	uint64_t t7 = 150LLU;

	t7 = (((x29&x30)&x31)%x32);

	if (t7 != 85LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 39U;
	int16_t x34 = INT16_MAX;
	uint8_t x35 = 12U;
	int32_t x36 = INT32_MAX;

	t8 = (((x33&x34)&x35)%x36);

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 39U;
	int32_t x38 = 7;
	volatile int32_t x39 = 898;

	t9 = (((x37&x38)&x39)%x40);

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -597295959;
	int16_t x42 = INT16_MIN;
	int64_t x43 = INT64_MAX;

	t10 = (((x41&x42)&x43)%x44);

	if (t10 != 255LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	volatile int32_t x46 = INT32_MIN;
	uint64_t x47 = 13775LLU;
	int64_t x48 = -1LL;
	uint64_t t11 = 21784LLU;

	t11 = (((x45&x46)&x47)%x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = 13;
	uint16_t x50 = 56U;
	int8_t x51 = INT8_MIN;
	int32_t x52 = -2;
	int32_t t12 = 113;

	t12 = (((x49&x50)&x51)%x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = 10444U;
	int8_t x56 = -5;
	volatile int32_t t13 = 0;

	t13 = (((x53&x54)&x55)%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x57 = 101734U;
	static int32_t x58 = INT32_MAX;
	static uint32_t x59 = 11635U;
	uint32_t t14 = 2671U;

	t14 = (((x57&x58)&x59)%x60);

	if (t14 != 3426U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	uint64_t x62 = 3494073063320513LLU;
	int8_t x63 = INT8_MAX;
	volatile int16_t x64 = -1;
	static uint64_t t15 = 6009229821LLU;

	t15 = (((x61&x62)&x63)%x64);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	uint8_t x66 = 4U;
	int8_t x68 = INT8_MIN;

	t16 = (((x65&x66)&x67)%x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	int8_t x70 = -9;
	int16_t x71 = -1;
	volatile int8_t x72 = INT8_MAX;

	t17 = (((x69&x70)&x71)%x72);

	if (t17 != 120) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = UINT16_MAX;
	int32_t x75 = INT32_MIN;
	uint64_t x76 = UINT64_MAX;
	uint64_t t18 = 646763194653268274LLU;

	t18 = (((x73&x74)&x75)%x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 7U;
	static int32_t x78 = INT32_MIN;
	volatile int8_t x79 = -2;
	static volatile int64_t t19 = 5LL;

	t19 = (((x77&x78)&x79)%x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 10380U;
	volatile int64_t x82 = INT64_MIN;
	int16_t x83 = INT16_MIN;
	int64_t x84 = INT64_MAX;
	volatile int64_t t20 = -1719756883548412LL;

	t20 = (((x81&x82)&x83)%x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MAX;
	uint32_t x92 = UINT32_MAX;
	volatile uint32_t t21 = 16U;

	t21 = (((x89&x90)&x91)%x92);

	if (t21 != 52U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	static volatile int32_t x94 = -26542365;
	static int64_t x96 = 190569670463382LL;
	uint64_t t22 = 4568916434LLU;

	t22 = (((x93&x94)&x95)%x96);

	if (t22 != 171681839021698LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x98 = 33U;
	static volatile int32_t x99 = INT32_MIN;
	int8_t x100 = 4;
	int32_t t23 = -10052961;

	t23 = (((x97&x98)&x99)%x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = -30273;
	int8_t x102 = 45;
	int8_t x103 = INT8_MAX;
	static uint64_t x104 = 167599083343LLU;
	volatile uint64_t t24 = 12008606LLU;

	t24 = (((x101&x102)&x103)%x104);

	if (t24 != 45LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = UINT16_MAX;
	volatile int32_t x108 = 68665;
	volatile int32_t t25 = 421745;

	t25 = (((x105&x106)&x107)%x108);

	if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MAX;
	int32_t x110 = INT32_MAX;
	static volatile int64_t x111 = INT64_MIN;
	int32_t x112 = INT32_MIN;
	int64_t t26 = -8496088702394LL;

	t26 = (((x109&x110)&x111)%x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MIN;
	uint64_t x115 = 4243811525737661594LLU;

	t27 = (((x113&x114)&x115)%x116);

	if (t27 != 4243811525380276224LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = -414;
	static int8_t x118 = INT8_MIN;
	static uint8_t x119 = UINT8_MAX;
	volatile int64_t t28 = 266166992375LL;

	t28 = (((x117&x118)&x119)%x120);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x121 = 6U;
	static uint16_t x122 = UINT16_MAX;
	static uint16_t x123 = UINT16_MAX;
	volatile int32_t t29 = 1;

	t29 = (((x121&x122)&x123)%x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MAX;
	uint16_t x126 = 156U;
	static int64_t x127 = INT64_MAX;
	uint32_t x128 = UINT32_MAX;
	volatile int64_t t30 = -214656152621LL;

	t30 = (((x125&x126)&x127)%x128);

	if (t30 != 156LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x129 = INT16_MIN;
	uint64_t x130 = 0LLU;
	uint64_t x132 = 3531991838559814556LLU;
	volatile uint64_t t31 = 14760LLU;

	t31 = (((x129&x130)&x131)%x132);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -1;
	uint16_t x134 = 311U;
	uint8_t x135 = UINT8_MAX;
	volatile int64_t x136 = 268763384LL;
	int64_t t32 = 6876LL;

	t32 = (((x133&x134)&x135)%x136);

	if (t32 != 55LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x139 = 0U;
	static uint8_t x140 = 114U;
	volatile int32_t t33 = 53;

	t33 = (((x137&x138)&x139)%x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MAX;
	int16_t x142 = INT16_MIN;
	int8_t x144 = 59;
	static volatile uint32_t t34 = 1503094492U;

	t34 = (((x141&x142)&x143)%x144);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MIN;
	uint8_t x146 = 12U;
	volatile int8_t x147 = INT8_MAX;
	int32_t t35 = 7269;

	t35 = (((x145&x146)&x147)%x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = UINT16_MAX;
	int64_t x151 = -1LL;
	uint16_t x152 = UINT16_MAX;
	volatile uint64_t t36 = 1966849669LLU;

	t36 = (((x149&x150)&x151)%x152);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = UINT8_MAX;
	int32_t x155 = -1;
	uint64_t x156 = UINT64_MAX;

	t37 = (((x153&x154)&x155)%x156);

	if (t37 != 255LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = -1;
	static int8_t x158 = 10;
	volatile int64_t x159 = 16973114586LL;
	int64_t x160 = -1LL;
	volatile int64_t t38 = 7657532LL;

	t38 = (((x157&x158)&x159)%x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x161 = UINT64_MAX;
	int8_t x162 = INT8_MAX;
	uint32_t x163 = UINT32_MAX;
	static volatile int32_t x164 = INT32_MIN;
	uint64_t t39 = 532478897579191615LLU;

	t39 = (((x161&x162)&x163)%x164);

	if (t39 != 127LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x165 = -18;
	volatile uint8_t x166 = 96U;
	static int64_t x167 = 1179LL;
	int16_t x168 = -1;
	int64_t t40 = 199157LL;

	t40 = (((x165&x166)&x167)%x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MIN;
	int8_t x170 = 43;
	static int16_t x171 = 5653;
	static volatile int32_t t41 = 1;

	t41 = (((x169&x170)&x171)%x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x175 = INT8_MIN;
	uint64_t x176 = 100036301337653501LLU;
	uint64_t t42 = 5LLU;

	t42 = (((x173&x174)&x175)%x176);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x177 = 15414LL;
	int16_t x179 = INT16_MAX;
	int8_t x180 = -2;
	static volatile int64_t t43 = 2172053310724908786LL;

	t43 = (((x177&x178)&x179)%x180);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = -318657943260258LL;
	uint16_t x183 = UINT16_MAX;
	volatile int64_t t44 = 1667LL;

	t44 = (((x181&x182)&x183)%x184);

	if (t44 != 404LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MIN;
	int8_t x186 = INT8_MIN;
	volatile uint16_t x187 = UINT16_MAX;
	static int64_t x188 = -8966455402415932LL;
	volatile int64_t t45 = 88245LL;

	t45 = (((x185&x186)&x187)%x188);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = INT64_MAX;
	int16_t x191 = INT16_MAX;
	int16_t x192 = 3;

	t46 = (((x189&x190)&x191)%x192);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MIN;
	static int8_t x194 = 0;
	volatile int32_t x195 = -41552;
	volatile int64_t t47 = 42298574738LL;

	t47 = (((x193&x194)&x195)%x196);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x197 = 89U;
	static uint8_t x198 = 67U;
	int64_t x199 = INT64_MIN;
	volatile int16_t x200 = INT16_MAX;
	volatile int64_t t48 = 9749373260981810LL;

	t48 = (((x197&x198)&x199)%x200);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = -139;
	uint16_t x202 = 250U;
	static int64_t x203 = 3512827910LL;
	uint16_t x204 = 905U;
	volatile int64_t t49 = -3861914208547LL;

	t49 = (((x201&x202)&x203)%x204);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = INT8_MAX;
	int8_t x207 = 1;
	static uint32_t x208 = UINT32_MAX;
	uint32_t t50 = 16424747U;

	t50 = (((x205&x206)&x207)%x208);

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x211 = INT8_MIN;
	static uint16_t x212 = 16U;

	t51 = (((x209&x210)&x211)%x212);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = -1;
	static int8_t x214 = 28;
	static uint64_t x215 = UINT64_MAX;
	uint16_t x216 = UINT16_MAX;
	volatile uint64_t t52 = 0LLU;

	t52 = (((x213&x214)&x215)%x216);

	if (t52 != 28LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x217 = INT16_MAX;
	static int64_t x218 = -2786968002967LL;
	volatile int8_t x219 = INT8_MIN;
	uint64_t x220 = 850394022956444LLU;
	uint64_t t53 = 116120971LLU;

	t53 = (((x217&x218)&x219)%x220);

	if (t53 != 7680LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = INT32_MIN;
	static int32_t x222 = 3;
	int32_t x223 = INT32_MAX;
	uint16_t x224 = 6U;

	t54 = (((x221&x222)&x223)%x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = INT64_MIN;
	int64_t x230 = INT64_MIN;
	static int64_t x231 = INT64_MIN;

	t55 = (((x229&x230)&x231)%x232);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x233 = 25646U;
	uint32_t x235 = UINT32_MAX;
	int16_t x236 = INT16_MIN;
	uint32_t t56 = 295062326U;

	t56 = (((x233&x234)&x235)%x236);

	if (t56 != 44U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x237 = 971003296LLU;
	int64_t x238 = 177529LL;
	static volatile int32_t x240 = -7326117;
	uint64_t t57 = 96LLU;

	t57 = (((x237&x238)&x239)%x240);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = -1;
	int32_t x243 = INT32_MAX;
	uint64_t x244 = 64428341267988LLU;
	volatile uint64_t t58 = 7651900792115363LLU;

	t58 = (((x241&x242)&x243)%x244);

	if (t58 != 2147483647LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MIN;
	volatile int8_t x246 = -1;
	uint16_t x247 = 6U;
	uint32_t x248 = UINT32_MAX;
	uint32_t t59 = 116556726U;

	t59 = (((x245&x246)&x247)%x248);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x249 = -2;
	static int8_t x251 = -1;
	int32_t x252 = -1;
	int32_t t60 = -132438113;

	t60 = (((x249&x250)&x251)%x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x253 = INT16_MIN;
	int8_t x254 = INT8_MIN;
	int64_t x256 = 994284855473135LL;
	uint64_t t61 = 210023460262LLU;

	t61 = (((x253&x254)&x255)%x256);

	if (t61 != 771434971918328LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = -1;
	int8_t x258 = INT8_MIN;
	uint8_t x259 = UINT8_MAX;
	int64_t x260 = INT64_MIN;
	int64_t t62 = -1022447487370624LL;

	t62 = (((x257&x258)&x259)%x260);

	if (t62 != 128LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x266 = INT8_MIN;
	uint32_t x267 = 2U;
	static int16_t x268 = 452;
	static volatile uint32_t t63 = 13893797U;

	t63 = (((x265&x266)&x267)%x268);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = INT32_MIN;
	int8_t x270 = 1;
	int32_t x271 = INT32_MAX;
	uint32_t x272 = 994519U;
	static volatile uint32_t t64 = 271067901U;

	t64 = (((x269&x270)&x271)%x272);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = INT32_MIN;
	static volatile uint16_t x275 = 8620U;
	int16_t x276 = -1;
	uint32_t t65 = 103U;

	t65 = (((x273&x274)&x275)%x276);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x278 = 64894158397868531LLU;
	int64_t x280 = -1LL;
	volatile uint64_t t66 = 2163211290286784534LLU;

	t66 = (((x277&x278)&x279)%x280);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = INT8_MIN;
	int64_t x282 = INT64_MAX;
	volatile int64_t x283 = INT64_MIN;
	static int8_t x284 = 1;
	volatile int64_t t67 = -23302522797868LL;

	t67 = (((x281&x282)&x283)%x284);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = -54;
	static int32_t x286 = -1;
	int16_t x287 = 1315;

	t68 = (((x285&x286)&x287)%x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = -1;
	static int8_t x290 = 3;
	volatile uint8_t x291 = 3U;
	static volatile uint32_t x292 = 50851U;
	uint32_t t69 = 4036851U;

	t69 = (((x289&x290)&x291)%x292);

	if (t69 != 3U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = INT16_MAX;
	static int32_t x295 = INT32_MAX;
	static int64_t x296 = -1LL;
	volatile int64_t t70 = -1214500570015147LL;

	t70 = (((x293&x294)&x295)%x296);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = 1U;
	int8_t x298 = -39;
	volatile uint32_t x299 = UINT32_MAX;
	uint32_t x300 = 8019U;

	t71 = (((x297&x298)&x299)%x300);

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x301 = UINT8_MAX;
	int64_t x302 = -1LL;
	uint8_t x303 = UINT8_MAX;
	volatile int16_t x304 = INT16_MIN;
	volatile int64_t t72 = -2LL;

	t72 = (((x301&x302)&x303)%x304);

	if (t72 != 255LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x306 = 91U;
	uint16_t x307 = UINT16_MAX;
	volatile int32_t x308 = INT32_MIN;
	int32_t t73 = 27;

	t73 = (((x305&x306)&x307)%x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x309 = 286U;
	int16_t x310 = -232;
	volatile int64_t t74 = -259040LL;

	t74 = (((x309&x310)&x311)%x312);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x318 = UINT64_MAX;
	int16_t x319 = -36;
	uint32_t x320 = 119581583U;
	volatile uint64_t t75 = 476321LLU;

	t75 = (((x317&x318)&x319)%x320);

	if (t75 != 101345807LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x321 = UINT64_MAX;
	int16_t x322 = -1;
	int32_t x323 = 184990848;
	volatile int8_t x324 = INT8_MIN;

	t76 = (((x321&x322)&x323)%x324);

	if (t76 != 184990848LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = INT64_MAX;
	int32_t x326 = 1;
	int64_t x327 = -1LL;
	volatile int64_t t77 = 5309389545226320LL;

	t77 = (((x325&x326)&x327)%x328);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x330 = 9;
	static volatile int64_t x331 = INT64_MIN;
	int8_t x332 = -1;
	int64_t t78 = -15LL;

	t78 = (((x329&x330)&x331)%x332);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = INT8_MIN;
	static int8_t x334 = INT8_MIN;
	static int32_t x335 = 504577;
	static int64_t x336 = INT64_MAX;
	volatile int64_t t79 = 3328915614LL;

	t79 = (((x333&x334)&x335)%x336);

	if (t79 != 504576LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x337 = 1454U;
	uint16_t x338 = UINT16_MAX;
	int32_t x339 = INT32_MAX;
	int32_t x340 = INT32_MIN;

	t80 = (((x337&x338)&x339)%x340);

	if (t80 != 1454U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x341 = 91;
	int32_t x342 = -1;
	volatile uint16_t x343 = 15U;
	int32_t t81 = -8721040;

	t81 = (((x341&x342)&x343)%x344);

	if (t81 != 11) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x345 = -1;
	int32_t x346 = -1357677;
	int64_t x348 = INT64_MIN;
	int64_t t82 = -5791269684LL;

	t82 = (((x345&x346)&x347)%x348);

	if (t82 != -1357677LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = 503U;
	uint8_t x350 = 55U;
	uint8_t x351 = 63U;
	static int64_t x352 = -27843LL;
	static int64_t t83 = 233202746621529LL;

	t83 = (((x349&x350)&x351)%x352);

	if (t83 != 55LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x353 = -3;
	int32_t x355 = INT32_MAX;
	int16_t x356 = -1;
	int32_t t84 = 15829;

	t84 = (((x353&x354)&x355)%x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = INT64_MIN;
	int16_t x360 = -1;
	int64_t t85 = 1414077238022LL;

	t85 = (((x357&x358)&x359)%x360);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = INT16_MIN;
	int64_t x362 = -1LL;
	int64_t x364 = -457LL;

	t86 = (((x361&x362)&x363)%x364);

	if (t86 != 15LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x365 = -129527117;
	int8_t x366 = INT8_MAX;
	volatile int8_t x368 = 2;
	int32_t t87 = 92751806;

	t87 = (((x365&x366)&x367)%x368);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x369 = 58U;
	int8_t x370 = INT8_MIN;
	int64_t x372 = INT64_MIN;
	int64_t t88 = -4383604904216LL;

	t88 = (((x369&x370)&x371)%x372);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x373 = -1LL;
	int32_t x374 = INT32_MIN;
	static int16_t x375 = INT16_MAX;

	t89 = (((x373&x374)&x375)%x376);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x378 = INT32_MIN;
	volatile int16_t x379 = INT16_MIN;
	volatile uint16_t x380 = UINT16_MAX;
	int32_t t90 = 96959655;

	t90 = (((x377&x378)&x379)%x380);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x381 = 12;
	volatile int16_t x382 = INT16_MIN;
	uint32_t x384 = 76U;

	t91 = (((x381&x382)&x383)%x384);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = INT64_MIN;
	int16_t x386 = -1003;
	volatile int8_t x387 = 6;
	static int8_t x388 = INT8_MAX;

	t92 = (((x385&x386)&x387)%x388);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x390 = 399U;
	int32_t x391 = INT32_MIN;
	volatile int32_t x392 = INT32_MIN;
	int32_t t93 = -481;

	t93 = (((x389&x390)&x391)%x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = -1LL;
	int16_t x394 = INT16_MIN;
	int8_t x395 = 47;
	int16_t x396 = INT16_MIN;
	int64_t t94 = 14449839499LL;

	t94 = (((x393&x394)&x395)%x396);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = INT64_MAX;
	int16_t x398 = -1;
	uint16_t x399 = 0U;
	int16_t x400 = INT16_MAX;
	int64_t t95 = -28567682013LL;

	t95 = (((x397&x398)&x399)%x400);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x401 = -357;
	volatile uint32_t x402 = 15354U;
	int64_t x403 = 107468928LL;
	static uint16_t x404 = 1U;
	volatile int64_t t96 = -610935226711188947LL;

	t96 = (((x401&x402)&x403)%x404);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x409 = 44110415000873LLU;
	uint16_t x410 = UINT16_MAX;
	volatile int16_t x411 = INT16_MAX;
	int16_t x412 = INT16_MIN;
	uint64_t t97 = 3001005674543882798LLU;

	t97 = (((x409&x410)&x411)%x412);

	if (t97 != 29993LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x413 = INT8_MIN;
	static uint32_t x414 = UINT32_MAX;
	int64_t x415 = INT64_MAX;
	int64_t t98 = 93797762LL;

	t98 = (((x413&x414)&x415)%x416);

	if (t98 != 4294967168LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x417 = 1805096150167564LLU;
	uint16_t x418 = 1055U;
	static uint8_t x419 = 22U;
	volatile int32_t x420 = 205435210;
	uint64_t t99 = 435444LLU;

	t99 = (((x417&x418)&x419)%x420);

	if (t99 != 4LLU) { NG(); } else { ; }
	
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

