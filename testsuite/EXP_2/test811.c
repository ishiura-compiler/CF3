#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t t0 = 1662LLU;
int64_t x9 = -1LL;
int32_t x11 = 12888640;
static volatile uint8_t x15 = 56U;
uint8_t x23 = 60U;
static volatile uint32_t t7 = 5122U;
int16_t x37 = -15;
int8_t x39 = -1;
int64_t x41 = -1LL;
uint8_t x42 = 5U;
volatile int16_t x45 = INT16_MIN;
int32_t x47 = INT32_MIN;
int16_t x58 = INT16_MIN;
static uint32_t x59 = 3334681U;
int64_t x62 = INT64_MIN;
int16_t x63 = INT16_MIN;
int64_t t14 = 1732766072147LL;
uint8_t x66 = 3U;
int32_t x67 = -1;
int64_t t15 = -1625086035LL;
volatile int64_t x71 = INT64_MIN;
int64_t x78 = -1980324LL;
static volatile uint64_t t19 = 31073665018958163LLU;
volatile int8_t x87 = INT8_MIN;
int64_t t20 = -35521LL;
int8_t x91 = INT8_MAX;
int16_t x93 = -1;
int32_t x98 = INT32_MAX;
volatile int32_t t23 = 30675062;
volatile int64_t x101 = -1LL;
int64_t t25 = 153637740549426LL;
static volatile int64_t t28 = -3724410252818192805LL;
int64_t x135 = INT64_MIN;
int32_t x139 = INT32_MAX;
static int16_t x140 = INT16_MAX;
int8_t x143 = -1;
int64_t t34 = -2008575680369LL;
uint8_t x149 = UINT8_MAX;
volatile uint8_t x151 = 1U;
uint8_t x152 = 21U;
int8_t x165 = INT8_MAX;
volatile int8_t x167 = -4;
int8_t x168 = INT8_MAX;
uint32_t t38 = 12U;
uint16_t x176 = 9U;
static int32_t t40 = 15199;
int16_t x179 = INT16_MIN;
uint64_t x180 = UINT64_MAX;
static volatile int32_t t42 = 3;
int64_t t43 = -49248996260080LL;
int64_t x192 = INT64_MIN;
uint8_t x195 = UINT8_MAX;
volatile int64_t t48 = -30962LL;
volatile uint64_t x212 = 63630781760LLU;
volatile uint64_t t49 = 47187908023LLU;
volatile int32_t x217 = INT32_MIN;
volatile uint64_t x220 = UINT64_MAX;
int64_t x223 = 998970LL;
volatile int64_t t54 = 10945LL;
static int16_t x234 = INT16_MIN;
volatile uint16_t x237 = 59U;
volatile int64_t t56 = 499LL;
uint16_t x244 = 12U;
int32_t x249 = -23910;
static int16_t x252 = INT16_MIN;
volatile int64_t t60 = 1LL;
static int16_t x261 = 0;
uint64_t x263 = 5120040326100162164LLU;
static uint32_t x269 = 11676240U;
uint32_t t64 = 81364U;
static int32_t x278 = INT32_MIN;
int32_t x281 = INT32_MIN;
uint64_t x300 = UINT64_MAX;
static int64_t x301 = -1LL;
int16_t x304 = -24;
uint8_t x306 = UINT8_MAX;
static volatile int64_t t73 = 268032266533538LL;
int64_t x313 = -1057LL;
int16_t x318 = 1782;
volatile uint16_t x320 = 213U;
int16_t x326 = INT16_MIN;
static int16_t x339 = -1;
uint32_t x340 = 174165569U;
int32_t x343 = -1;
static int64_t x344 = INT64_MIN;
uint32_t x345 = UINT32_MAX;
static uint32_t t81 = 29458U;
static int8_t x355 = -1;
int64_t x362 = 1418278878305LL;
volatile int32_t t86 = 16511130;
int64_t x369 = -1LL;
volatile uint64_t x371 = 443321242520954LLU;
uint64_t x374 = 1046053104LLU;
static volatile int32_t x383 = INT32_MAX;
int8_t x385 = 1;
uint16_t x386 = UINT16_MAX;
volatile int64_t t91 = 1LL;
static int8_t x391 = INT8_MAX;
volatile int64_t t92 = 37128346551406430LL;
int32_t x397 = -2;
int8_t x403 = 18;
static int32_t x407 = INT32_MIN;
int32_t x412 = INT32_MAX;
uint32_t x413 = 58693U;
volatile int32_t x416 = -3203;
static volatile int16_t x417 = -1;


void f0(void) {
	uint64_t x1 = 35097660100302LLU;
	static int8_t x2 = 0;
	int8_t x3 = -1;
	static int16_t x4 = 1326;

	t0 = ((x1&(x2%x3))%x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	int64_t x6 = INT64_MIN;
	int16_t x7 = INT16_MIN;
	int16_t x8 = 1;
	int64_t t1 = 789741LL;

	t1 = ((x5&(x6%x7))%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = 13U;
	uint8_t x12 = UINT8_MAX;
	int64_t t2 = 17940611101487LL;

	t2 = ((x9&(x10%x11))%x12);

	if (t2 != 13LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -2111710469769305LL;
	int32_t x14 = INT32_MAX;
	static uint8_t x16 = 1U;
	int64_t t3 = 446209388LL;

	t3 = ((x13&(x14%x15))%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 12246;
	int32_t x18 = INT32_MAX;
	static uint32_t x19 = 732467336U;
	int32_t x20 = INT32_MIN;
	uint32_t t4 = 4962334U;

	t4 = ((x17&(x18%x19))%x20);

	if (t4 != 3782U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -1;
	int16_t x22 = 77;
	volatile int64_t x24 = INT64_MAX;
	int64_t t5 = 2002061362094343LL;

	t5 = ((x21&(x22%x23))%x24);

	if (t5 != 17LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 132627862068LL;
	int8_t x26 = -3;
	uint16_t x27 = 22U;
	int64_t x28 = INT64_MAX;
	int64_t t6 = 305567668LL;

	t6 = ((x25&(x26%x27))%x28);

	if (t6 != 132627862068LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	static int32_t x30 = INT32_MIN;
	static uint8_t x31 = UINT8_MAX;
	static uint32_t x32 = 198U;

	t7 = ((x29&(x30%x31))%x32);

	if (t7 != 74U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 5;
	int16_t x34 = -1;
	int8_t x35 = INT8_MAX;
	static int64_t x36 = -1LL;
	int64_t t8 = 24507664267728202LL;

	t8 = ((x33&(x34%x35))%x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = -1;
	volatile int64_t x40 = INT64_MAX;
	volatile int64_t t9 = 22759522709LL;

	t9 = ((x37&(x38%x39))%x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x43 = -1LL;
	int16_t x44 = INT16_MIN;
	static int64_t t10 = 955213392621LL;

	t10 = ((x41&(x42%x43))%x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = 353983961162636349LL;
	volatile int8_t x48 = 10;
	int64_t t11 = 0LL;

	t11 = ((x45&(x46%x47))%x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int8_t x50 = INT8_MIN;
	volatile uint8_t x51 = 6U;
	int64_t x52 = 16311060LL;
	int64_t t12 = -21780429849595LL;

	t12 = ((x49&(x50%x51))%x52);

	if (t12 != -16286408LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MAX;
	uint16_t x60 = 49U;
	uint32_t t13 = 118U;

	t13 = ((x57&(x58%x59))%x60);

	if (t13 != 32U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = UINT8_MAX;
	int32_t x64 = INT32_MIN;

	t14 = ((x61&(x62%x63))%x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	static int64_t x68 = INT64_MAX;

	t15 = ((x65&(x66%x67))%x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MAX;
	uint16_t x70 = UINT16_MAX;
	uint8_t x72 = UINT8_MAX;
	volatile int64_t t16 = 29LL;

	t16 = ((x69&(x70%x71))%x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x73 = 128718U;
	int64_t x74 = -113308900LL;
	volatile uint16_t x75 = UINT16_MAX;
	int8_t x76 = -1;
	static int64_t t17 = -540274164971705624LL;

	t17 = ((x73&(x74%x75))%x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -1;
	volatile int64_t x79 = 13882394203LL;
	int32_t x80 = -1;
	volatile int64_t t18 = -1LL;

	t18 = ((x77&(x78%x79))%x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 6730502064018954065LLU;
	static int8_t x82 = -1;
	static uint16_t x83 = UINT16_MAX;
	int32_t x84 = INT32_MIN;

	t19 = ((x81&(x82%x83))%x84);

	if (t19 != 6730502064018954065LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = INT16_MAX;
	int64_t x86 = -7LL;
	int64_t x88 = INT64_MIN;

	t20 = ((x85&(x86%x87))%x88);

	if (t20 != 32761LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	int64_t x90 = INT64_MAX;
	int8_t x92 = INT8_MAX;
	volatile int64_t t21 = -392827114LL;

	t21 = ((x89&(x90%x91))%x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x94 = 1740434102LL;
	int32_t x95 = -1;
	static uint16_t x96 = 493U;
	static int64_t t22 = -5089219LL;

	t22 = ((x93&(x94%x95))%x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = INT16_MAX;
	volatile int32_t x99 = -4;
	volatile uint16_t x100 = UINT16_MAX;

	t23 = ((x97&(x98%x99))%x100);

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x102 = 1;
	uint64_t x103 = 839925379439LLU;
	int16_t x104 = INT16_MIN;
	volatile uint64_t t24 = 225LLU;

	t24 = ((x101&(x102%x103))%x104);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 621U;
	uint16_t x106 = 4830U;
	volatile int64_t x107 = -1LL;
	uint8_t x108 = 36U;

	t25 = ((x105&(x106%x107))%x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 1459646349121688273LLU;
	uint8_t x110 = 0U;
	uint8_t x111 = UINT8_MAX;
	int16_t x112 = -1;
	uint64_t t26 = 31010109832738LLU;

	t26 = ((x109&(x110%x111))%x112);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MAX;
	static int32_t x114 = INT32_MIN;
	volatile uint64_t x115 = 6LLU;
	volatile int8_t x116 = INT8_MAX;
	static volatile uint64_t t27 = 2842735571394950LLU;

	t27 = ((x113&(x114%x115))%x116);

	if (t27 != 2LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MAX;
	uint16_t x118 = UINT16_MAX;
	volatile int8_t x119 = -1;
	static int8_t x120 = INT8_MAX;

	t28 = ((x117&(x118%x119))%x120);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MAX;
	uint32_t x122 = UINT32_MAX;
	uint32_t x123 = 75799U;
	static uint32_t x124 = UINT32_MAX;
	static volatile int64_t t29 = -1981257803LL;

	t29 = ((x121&(x122%x123))%x124);

	if (t29 != 44357LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = 1465969053048185LLU;
	volatile int8_t x130 = 11;
	uint64_t x131 = UINT64_MAX;
	uint16_t x132 = 5U;
	uint64_t t30 = 480649010502678759LLU;

	t30 = ((x129&(x130%x131))%x132);

	if (t30 != 4LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MIN;
	int8_t x134 = 10;
	uint64_t x136 = 4499342LLU;
	volatile uint64_t t31 = 2833LLU;

	t31 = ((x133&(x134%x135))%x136);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = INT64_MIN;
	int16_t x138 = 2;
	static volatile int64_t t32 = 134405312LL;

	t32 = ((x137&(x138%x139))%x140);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = 44;
	int64_t x142 = -1LL;
	uint16_t x144 = 203U;
	int64_t t33 = 239337986246LL;

	t33 = ((x141&(x142%x143))%x144);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x145 = 258565500U;
	int64_t x146 = -1LL;
	int8_t x147 = -16;
	static uint16_t x148 = 268U;

	t34 = ((x145&(x146%x147))%x148);

	if (t34 != 172LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x150 = -1;
	int32_t t35 = 246093;

	t35 = ((x149&(x150%x151))%x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x153 = INT16_MIN;
	int32_t x154 = -5;
	static volatile uint64_t x155 = UINT64_MAX;
	int32_t x156 = -1;
	static volatile uint64_t t36 = 564680942190LLU;

	t36 = ((x153&(x154%x155))%x156);

	if (t36 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = UINT32_MAX;
	volatile uint32_t x162 = 2U;
	int8_t x163 = -1;
	static uint8_t x164 = 50U;
	uint32_t t37 = 10U;

	t37 = ((x161&(x162%x163))%x164);

	if (t37 != 2U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x166 = 0U;

	t38 = ((x165&(x166%x167))%x168);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x169 = UINT8_MAX;
	int32_t x170 = 137496130;
	int8_t x171 = 1;
	static uint64_t x172 = 1271LLU;
	uint64_t t39 = 734571560922924LLU;

	t39 = ((x169&(x170%x171))%x172);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x173 = UINT16_MAX;
	int32_t x174 = INT32_MIN;
	volatile uint8_t x175 = 1U;

	t40 = ((x173&(x174%x175))%x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = 15U;
	int64_t x178 = -1LL;
	uint64_t t41 = 15628439520LLU;

	t41 = ((x177&(x178%x179))%x180);

	if (t41 != 15LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = INT8_MIN;
	static uint16_t x182 = 15193U;
	static int8_t x183 = INT8_MIN;
	int32_t x184 = INT32_MIN;

	t42 = ((x181&(x182%x183))%x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = -69037156095672681LL;
	static uint8_t x186 = UINT8_MAX;
	volatile int32_t x187 = INT32_MIN;
	volatile uint8_t x188 = UINT8_MAX;

	t43 = ((x185&(x186%x187))%x188);

	if (t43 != 151LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = 1532;
	uint8_t x190 = 81U;
	static volatile int16_t x191 = INT16_MIN;
	static int64_t t44 = -1LL;

	t44 = ((x189&(x190%x191))%x192);

	if (t44 != 80LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x193 = UINT8_MAX;
	int16_t x194 = 1;
	static uint8_t x196 = UINT8_MAX;
	static volatile int32_t t45 = -1;

	t45 = ((x193&(x194%x195))%x196);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = INT16_MIN;
	volatile uint8_t x198 = 31U;
	uint64_t x199 = UINT64_MAX;
	int32_t x200 = INT32_MIN;
	volatile uint64_t t46 = 13LLU;

	t46 = ((x197&(x198%x199))%x200);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = 5900U;
	int64_t x202 = 21LL;
	volatile uint16_t x203 = UINT16_MAX;
	static int32_t x204 = -1;
	volatile int64_t t47 = -6LL;

	t47 = ((x201&(x202%x203))%x204);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x205 = UINT8_MAX;
	int64_t x206 = INT64_MAX;
	int16_t x207 = INT16_MIN;
	int32_t x208 = -14;

	t48 = ((x205&(x206%x207))%x208);

	if (t48 != 3LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x209 = 1964858276362LLU;
	uint64_t x210 = UINT64_MAX;
	volatile uint8_t x211 = UINT8_MAX;

	t49 = ((x209&(x210%x211))%x212);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x213 = INT64_MIN;
	volatile int32_t x214 = INT32_MIN;
	static uint16_t x215 = 2U;
	static int32_t x216 = -399881;
	int64_t t50 = 1874280LL;

	t50 = ((x213&(x214%x215))%x216);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x218 = INT32_MIN;
	volatile int32_t x219 = -1;
	volatile uint64_t t51 = 7363691132LLU;

	t51 = ((x217&(x218%x219))%x220);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = INT64_MIN;
	volatile uint64_t x222 = UINT64_MAX;
	static uint32_t x224 = 108124U;
	volatile uint64_t t52 = 56652215335472403LLU;

	t52 = ((x221&(x222%x223))%x224);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = 181801253;
	int64_t x226 = INT64_MAX;
	int8_t x227 = -1;
	static int8_t x228 = INT8_MAX;
	static volatile int64_t t53 = 39LL;

	t53 = ((x225&(x226%x227))%x228);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = 18;
	volatile int32_t x230 = INT32_MIN;
	uint16_t x231 = 35U;
	volatile int64_t x232 = 3LL;

	t54 = ((x229&(x230%x231))%x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x233 = UINT32_MAX;
	uint16_t x235 = 18455U;
	int8_t x236 = -1;
	volatile uint32_t t55 = 31558114U;

	t55 = ((x233&(x234%x235))%x236);

	if (t55 != 4294952983U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x238 = INT64_MIN;
	static int64_t x239 = -3LL;
	int8_t x240 = INT8_MIN;

	t56 = ((x237&(x238%x239))%x240);

	if (t56 != 58LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = 2U;
	uint64_t x242 = 30674842767LLU;
	uint8_t x243 = 4U;
	volatile uint64_t t57 = 333856523127329LLU;

	t57 = ((x241&(x242%x243))%x244);

	if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = -1;
	int32_t x246 = -11645397;
	static uint8_t x247 = UINT8_MAX;
	int16_t x248 = INT16_MIN;
	volatile int32_t t58 = -8;

	t58 = ((x245&(x246%x247))%x248);

	if (t58 != -57) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x250 = -1;
	int16_t x251 = -1;
	int32_t t59 = -40317926;

	t59 = ((x249&(x250%x251))%x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x253 = INT32_MIN;
	static uint16_t x254 = UINT16_MAX;
	volatile int32_t x255 = INT32_MIN;
	int64_t x256 = -93763400830LL;

	t60 = ((x253&(x254%x255))%x256);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x257 = UINT16_MAX;
	int16_t x258 = INT16_MIN;
	int32_t x259 = -1019199286;
	volatile int16_t x260 = -1;
	static int32_t t61 = 59468;

	t61 = ((x257&(x258%x259))%x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x262 = INT64_MIN;
	volatile int64_t x264 = INT64_MIN;
	volatile uint64_t t62 = 518986957LLU;

	t62 = ((x261&(x262%x263))%x264);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = -1LL;
	int16_t x266 = INT16_MIN;
	static int32_t x267 = INT32_MIN;
	volatile uint8_t x268 = 2U;
	int64_t t63 = 1571254401LL;

	t63 = ((x265&(x266%x267))%x268);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x270 = 45;
	int32_t x271 = INT32_MAX;
	uint16_t x272 = UINT16_MAX;

	t64 = ((x269&(x270%x271))%x272);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x273 = -52516075763LL;
	uint8_t x274 = UINT8_MAX;
	static uint8_t x275 = 6U;
	int64_t x276 = INT64_MAX;
	int64_t t65 = 23876688LL;

	t65 = ((x273&(x274%x275))%x276);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = INT8_MAX;
	uint16_t x279 = 33U;
	static int16_t x280 = INT16_MIN;
	volatile int32_t t66 = 450326;

	t66 = ((x277&(x278%x279))%x280);

	if (t66 != 126) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x282 = 21U;
	int16_t x283 = -144;
	volatile int32_t x284 = INT32_MIN;
	static int32_t t67 = -28;

	t67 = ((x281&(x282%x283))%x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x285 = -15;
	int64_t x286 = -1LL;
	int8_t x287 = INT8_MAX;
	volatile int32_t x288 = 1841;
	volatile int64_t t68 = 302730712077LL;

	t68 = ((x285&(x286%x287))%x288);

	if (t68 != -15LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = -1;
	static int64_t x294 = -1LL;
	uint64_t x295 = 10360273967213LLU;
	int64_t x296 = INT64_MAX;
	volatile uint64_t t69 = 205248344834LLU;

	t69 = ((x293&(x294%x295))%x296);

	if (t69 != 6907963657577LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x297 = INT8_MIN;
	int32_t x298 = INT32_MAX;
	static uint32_t x299 = 1965U;
	volatile uint64_t t70 = 5667655254444LLU;

	t70 = ((x297&(x298%x299))%x300);

	if (t70 != 1920LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x302 = 61;
	volatile int64_t x303 = INT64_MIN;
	volatile int64_t t71 = -10249732623LL;

	t71 = ((x301&(x302%x303))%x304);

	if (t71 != 13LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x305 = UINT64_MAX;
	uint16_t x307 = UINT16_MAX;
	static int64_t x308 = INT64_MIN;
	static volatile uint64_t t72 = 15076855322883LLU;

	t72 = ((x305&(x306%x307))%x308);

	if (t72 != 255LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x309 = 8987U;
	volatile int16_t x310 = 0;
	int64_t x311 = -1LL;
	int16_t x312 = -1;

	t73 = ((x309&(x310%x311))%x312);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x314 = 28U;
	static uint8_t x315 = 65U;
	static int64_t x316 = INT64_MAX;
	int64_t t74 = 29618038646932796LL;

	t74 = ((x313&(x314%x315))%x316);

	if (t74 != 28LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x317 = -3;
	volatile int32_t x319 = 8237569;
	volatile int32_t t75 = -5239;

	t75 = ((x317&(x318%x319))%x320);

	if (t75 != 76) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x325 = 1U;
	uint16_t x327 = 5U;
	int32_t x328 = INT32_MAX;
	volatile int32_t t76 = 11;

	t76 = ((x325&(x326%x327))%x328);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x329 = INT32_MIN;
	int16_t x330 = -1;
	int8_t x331 = INT8_MIN;
	int32_t x332 = INT32_MIN;
	volatile int32_t t77 = -52624360;

	t77 = ((x329&(x330%x331))%x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x333 = UINT32_MAX;
	uint32_t x334 = UINT32_MAX;
	static volatile uint8_t x335 = 31U;
	int64_t x336 = 15LL;
	volatile int64_t t78 = -85210219LL;

	t78 = ((x333&(x334%x335))%x336);

	if (t78 != 3LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x337 = 15632022;
	volatile int8_t x338 = -1;
	uint32_t t79 = 13215839U;

	t79 = ((x337&(x338%x339))%x340);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x341 = 0;
	int16_t x342 = 0;
	volatile int64_t t80 = 84LL;

	t80 = ((x341&(x342%x343))%x344);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x346 = 6U;
	int8_t x347 = INT8_MIN;
	uint16_t x348 = 4011U;

	t81 = ((x345&(x346%x347))%x348);

	if (t81 != 6U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x349 = UINT64_MAX;
	int8_t x350 = INT8_MAX;
	volatile int64_t x351 = 178LL;
	static volatile uint16_t x352 = 3834U;
	uint64_t t82 = 0LLU;

	t82 = ((x349&(x350%x351))%x352);

	if (t82 != 127LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x353 = -937LL;
	int8_t x354 = INT8_MAX;
	volatile int8_t x356 = 14;
	volatile int64_t t83 = -265124196093522LL;

	t83 = ((x353&(x354%x355))%x356);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x357 = 15067736322LL;
	int32_t x358 = 3922;
	static int32_t x359 = -133;
	static uint8_t x360 = UINT8_MAX;
	static volatile int64_t t84 = -559895062144LL;

	t84 = ((x357&(x358%x359))%x360);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x361 = -245427;
	int64_t x363 = INT64_MAX;
	volatile int16_t x364 = INT16_MIN;
	int64_t t85 = -5234861LL;

	t85 = ((x361&(x362%x363))%x364);

	if (t85 != 65LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x365 = INT32_MAX;
	int8_t x366 = INT8_MIN;
	int32_t x367 = INT32_MAX;
	uint16_t x368 = 6U;

	t86 = ((x365&(x366%x367))%x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x370 = 133839760U;
	uint32_t x372 = 13591U;
	volatile uint64_t t87 = 3644867LLU;

	t87 = ((x369&(x370%x371))%x372);

	if (t87 != 9183LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x373 = 6U;
	int8_t x375 = INT8_MIN;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t88 = 8822117632LLU;

	t88 = ((x373&(x374%x375))%x376);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x377 = 1U;
	int8_t x378 = 54;
	int32_t x379 = 8287299;
	static uint32_t x380 = 287589U;
	static volatile uint32_t t89 = 87286U;

	t89 = ((x377&(x378%x379))%x380);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x381 = 1282097581716507LL;
	int16_t x382 = 114;
	uint32_t x384 = UINT32_MAX;
	static volatile int64_t t90 = -98429958751005982LL;

	t90 = ((x381&(x382%x383))%x384);

	if (t90 != 18LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x387 = 56U;
	int64_t x388 = INT64_MIN;

	t91 = ((x385&(x386%x387))%x388);

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x389 = 1775417LL;
	uint32_t x390 = 57002U;
	int64_t x392 = INT64_MIN;

	t92 = ((x389&(x390%x391))%x392);

	if (t92 != 40LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x393 = UINT16_MAX;
	static int32_t x394 = INT32_MIN;
	volatile int32_t x395 = INT32_MIN;
	static volatile int8_t x396 = 4;
	volatile int32_t t93 = -1;

	t93 = ((x393&(x394%x395))%x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x398 = 3U;
	volatile uint64_t x399 = UINT64_MAX;
	int16_t x400 = INT16_MIN;
	volatile uint64_t t94 = 7090843775673075LLU;

	t94 = ((x397&(x398%x399))%x400);

	if (t94 != 2LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x401 = INT64_MIN;
	uint16_t x402 = 58U;
	int16_t x404 = INT16_MIN;
	static int64_t t95 = -58LL;

	t95 = ((x401&(x402%x403))%x404);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x405 = 230927689U;
	static uint8_t x406 = 6U;
	int16_t x408 = INT16_MIN;
	volatile uint32_t t96 = 0U;

	t96 = ((x405&(x406%x407))%x408);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = INT64_MAX;
	uint64_t x410 = 32968936657LLU;
	int16_t x411 = INT16_MAX;
	volatile uint64_t t97 = 1332026863565036011LLU;

	t97 = ((x409&(x410%x411))%x412);

	if (t97 != 26403LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x414 = INT16_MIN;
	static int16_t x415 = INT16_MIN;
	uint32_t t98 = 41218U;

	t98 = ((x413&(x414%x415))%x416);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x418 = 423U;
	static int16_t x419 = INT16_MIN;
	volatile uint32_t x420 = 3480U;
	volatile uint32_t t99 = 72U;

	t99 = ((x417&(x418%x419))%x420);

	if (t99 != 423U) { NG(); } else { ; }
	
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

