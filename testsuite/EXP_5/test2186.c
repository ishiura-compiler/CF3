#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MIN;
static volatile int64_t t0 = 59140016LL;
int64_t x7 = INT64_MAX;
uint16_t x8 = 27008U;
volatile int32_t x17 = -341143;
static int16_t x19 = 2;
int32_t x30 = INT32_MIN;
int32_t x36 = INT32_MAX;
uint64_t x41 = 10629756671LLU;
volatile int8_t x49 = -1;
int64_t x57 = -1LL;
int32_t x60 = INT32_MIN;
int16_t x61 = 12;
int16_t x62 = INT16_MIN;
uint64_t t14 = 3825489162LLU;
uint16_t x83 = 2U;
static volatile int32_t x86 = -1;
volatile uint64_t x87 = 4403539129040260LLU;
uint64_t t19 = 30211811372972LLU;
int8_t x90 = -3;
int64_t t21 = 36676941756600LL;
uint64_t x125 = UINT64_MAX;
int64_t x126 = 28783514665176357LL;
uint64_t t28 = 518790581371LLU;
int64_t x130 = -1LL;
uint64_t t29 = 449572LLU;
volatile int32_t x138 = INT32_MIN;
uint64_t t32 = 8471955310467731567LLU;
uint8_t x149 = UINT8_MAX;
uint32_t t33 = 1117116258U;
int8_t x154 = INT8_MIN;
int16_t x156 = INT16_MAX;
int8_t x157 = INT8_MIN;
int32_t t35 = -82144805;
int16_t x165 = INT16_MIN;
volatile int8_t x171 = 1;
int32_t x175 = INT32_MAX;
volatile int64_t t39 = 1507074529LL;
int8_t x182 = 1;
int64_t t42 = -939438LL;
static int8_t x190 = INT8_MAX;
int8_t x191 = INT8_MIN;
int16_t x193 = -1;
static volatile uint32_t x195 = UINT32_MAX;
volatile uint64_t x196 = 2858439LLU;
static volatile int64_t x198 = INT64_MIN;
int8_t x201 = INT8_MIN;
uint8_t x205 = UINT8_MAX;
static int16_t x207 = INT16_MAX;
int8_t x215 = -1;
volatile uint64_t t49 = 255646LLU;
volatile int64_t x217 = INT64_MIN;
static int64_t t50 = INT64_MIN;
static int64_t x221 = -1LL;
int8_t x230 = -1;
volatile int64_t t53 = -6134642LL;
int16_t x233 = -3;
int16_t x235 = 7148;
int8_t x236 = INT8_MAX;
int64_t x239 = 1338032177163LL;
int32_t x241 = INT32_MIN;
static uint64_t x244 = UINT64_MAX;
static uint64_t t56 = 580764561578207LLU;
uint64_t x260 = 5327642LLU;
static volatile uint64_t t59 = 1874693571207458LLU;
volatile uint16_t x263 = UINT16_MAX;
static uint64_t x267 = UINT64_MAX;
int32_t x268 = INT32_MIN;
int32_t t62 = -4144106;
uint8_t x277 = UINT8_MAX;
int64_t t64 = 150048389LL;
int16_t x286 = INT16_MAX;
int64_t x295 = INT64_MIN;
int32_t x296 = -1;
volatile uint16_t x297 = UINT16_MAX;
int64_t x300 = -1LL;
int8_t x313 = INT8_MIN;
int32_t x317 = -194115291;
volatile int8_t x327 = INT8_MIN;
int32_t x329 = INT32_MIN;
volatile int64_t x345 = INT64_MAX;
int64_t t80 = -99063704734810108LL;
int8_t x375 = INT8_MIN;
int16_t x382 = INT16_MIN;
static volatile uint8_t x384 = 1U;
volatile int64_t t85 = -1678888963LL;
int64_t x386 = -407165202931LL;
int16_t x395 = 477;
static int32_t x396 = INT32_MIN;
uint32_t x398 = UINT32_MAX;
uint32_t x403 = UINT32_MAX;
volatile int64_t x410 = 1LL;
int8_t x411 = 1;
static volatile int64_t t92 = 58798766892675LL;
int8_t x419 = INT8_MAX;
static volatile uint64_t t95 = 224190444525732964LLU;
uint16_t x428 = 2873U;
uint64_t t97 = 3277099591947LLU;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	static int64_t x2 = INT64_MIN;
	int32_t x3 = INT32_MIN;

	t0 = (x1-((x2^x3)^x4));

	if (t0 != 2147450880LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	int32_t x6 = -1;
	int64_t t1 = -222LL;

	t1 = (x5-((x6^x7)^x8));

	if (t1 != 9223372034707265152LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 11950895778178582LLU;
	uint32_t x14 = UINT32_MAX;
	uint8_t x15 = 1U;
	int32_t x16 = -12039;
	static uint64_t t2 = 174722LLU;

	t2 = (x13-((x14^x15)^x16));

	if (t2 != 11950895778166543LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = -2378;
	uint32_t x20 = 142139624U;
	uint32_t t3 = 9167532U;

	t3 = (x17-((x18^x19)^x20));

	if (t3 != 141800717U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = UINT8_MAX;
	uint8_t x26 = UINT8_MAX;
	volatile uint32_t x27 = 4U;
	static int64_t x28 = -1LL;
	volatile int64_t t4 = 740LL;

	t4 = (x25-((x26^x27)^x28));

	if (t4 != 507LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = -1;
	static volatile int32_t x31 = -1;
	int64_t x32 = INT64_MIN;
	int64_t t5 = 432187237LL;

	t5 = (x29-((x30^x31)^x32));

	if (t5 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x33 = 7U;
	static int32_t x34 = -1;
	uint64_t x35 = 291191237494LLU;
	uint64_t t6 = 96LLU;

	t6 = (x33-((x34^x35)^x36));

	if (t6 != 290776831121LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = -59;
	static int32_t x38 = 0;
	uint32_t x39 = 261696753U;
	uint64_t x40 = 16275193LLU;
	static volatile uint64_t t7 = 503918LLU;

	t7 = (x37-((x38^x39)^x40));

	if (t7 != 18446744073451505085LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x42 = UINT8_MAX;
	volatile int16_t x43 = INT16_MAX;
	volatile int8_t x44 = INT8_MIN;
	static volatile uint64_t t8 = 1162LLU;

	t8 = (x41-((x42^x43)^x44));

	if (t8 != 10629789311LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x45 = 255812442189LL;
	int64_t x46 = 7112221092938LL;
	uint32_t x47 = UINT32_MAX;
	volatile int16_t x48 = -1;
	static volatile int64_t t9 = -1LL;

	t9 = (x45-((x46^x47)^x48));

	if (t9 != 7364228066307LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x50 = INT32_MIN;
	static uint8_t x51 = 1U;
	int64_t x52 = INT64_MAX;
	int64_t t10 = -259581559202779LL;

	t10 = (x49-((x50^x51)^x52));

	if (t10 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x53 = 29;
	int8_t x54 = INT8_MIN;
	int32_t x55 = INT32_MAX;
	int32_t x56 = -1;
	static int32_t t11 = 129;

	t11 = (x53-((x54^x55)^x56));

	if (t11 != -2147483491) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x58 = UINT64_MAX;
	int32_t x59 = 2340;
	uint64_t t12 = 252311659895956LLU;

	t12 = (x57-((x58^x59)^x60));

	if (t12 != 18446744071562070308LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x63 = 1049;
	int32_t x64 = -1;
	int32_t t13 = -414416;

	t13 = (x61-((x62^x63)^x64));

	if (t13 != -31706) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x65 = 0LL;
	uint64_t x66 = 4465471259LLU;
	int64_t x67 = INT64_MIN;
	int16_t x68 = INT16_MIN;

	t14 = (x65-((x66^x67)^x68));

	if (t14 != 9223372041320255717LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x69 = -1LL;
	int64_t x70 = INT64_MIN;
	volatile int16_t x71 = -129;
	uint32_t x72 = 109698227U;
	static int64_t t15 = 40352158014122424LL;

	t15 = (x69-((x70^x71)^x72));

	if (t15 != -9223372036745077709LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = UINT8_MAX;
	static volatile int16_t x74 = 0;
	volatile uint64_t x75 = 30116525LLU;
	uint64_t x76 = UINT64_MAX;
	uint64_t t16 = 126678372LLU;

	t16 = (x73-((x74^x75)^x76));

	if (t16 != 30116781LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -1LL;
	int8_t x78 = INT8_MAX;
	int8_t x79 = -1;
	int8_t x80 = INT8_MIN;
	volatile int64_t t17 = -64936810343793221LL;

	t17 = (x77-((x78^x79)^x80));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x81 = INT16_MIN;
	int8_t x82 = -7;
	int32_t x84 = -460349708;
	int32_t t18 = 84;

	t18 = (x81-((x82^x83)^x84));

	if (t18 != -460382479) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x85 = 6;
	int32_t x88 = -1;

	t19 = (x85-((x86^x87)^x88));

	if (t19 != 18442340534580511362LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x89 = INT16_MIN;
	uint64_t x91 = 6352455063217LLU;
	static int8_t x92 = INT8_MIN;
	volatile uint64_t t20 = 5845124714LLU;

	t20 = (x89-((x90^x91)^x92));

	if (t20 != 18446737721254455604LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = 1U;
	int64_t x94 = -3082315780401302LL;
	int16_t x95 = INT16_MIN;
	volatile int32_t x96 = -1;

	t21 = (x93-((x94^x95)^x96));

	if (t21 != 3082315780413292LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = -1;
	uint64_t x102 = UINT64_MAX;
	static int16_t x103 = INT16_MIN;
	int64_t x104 = 37599255717973LL;
	static volatile uint64_t t22 = 4468218362568983LLU;

	t22 = (x101-((x102^x103)^x104));

	if (t22 != 18446706474453854293LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = -1LL;
	int64_t x106 = -526773165741LL;
	int8_t x107 = 1;
	int8_t x108 = INT8_MAX;
	static int64_t t23 = -143223LL;

	t23 = (x105-((x106^x107)^x108));

	if (t23 != 526773165778LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MAX;
	int32_t x111 = INT32_MIN;
	uint64_t x112 = UINT64_MAX;
	uint64_t t24 = 10332526644LLU;

	t24 = (x109-((x110^x111)^x112));

	if (t24 != 18446744069414617088LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 6U;
	int16_t x114 = INT16_MAX;
	int64_t x115 = INT64_MIN;
	static uint16_t x116 = 25U;
	volatile int64_t t25 = 8144LL;

	t25 = (x113-((x114^x115)^x116));

	if (t25 != 9223372036854743072LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = UINT32_MAX;
	int16_t x118 = -1;
	uint8_t x119 = 26U;
	int32_t x120 = 32;
	volatile uint32_t t26 = 180940880U;

	t26 = (x117-((x118^x119)^x120));

	if (t26 != 58U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x121 = -1LL;
	volatile int32_t x122 = -1;
	static volatile int32_t x123 = INT32_MIN;
	volatile uint32_t x124 = 227239U;
	volatile int64_t t27 = 122567908604LL;

	t27 = (x121-((x122^x123)^x124));

	if (t27 != -2147256409LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x127 = INT64_MIN;
	int32_t x128 = -12;

	t28 = (x125-((x126^x127)^x128));

	if (t28 != 9252155551519952174LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x129 = UINT16_MAX;
	volatile uint64_t x131 = UINT64_MAX;
	uint64_t x132 = 4039778022LLU;

	t29 = (x129-((x130^x131)^x132));

	if (t29 != 18446744069669839129LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = -1;
	uint64_t x134 = 1124737172126407083LLU;
	uint8_t x135 = 1U;
	uint64_t x136 = UINT64_MAX;
	static volatile uint64_t t30 = 1982147787LLU;

	t30 = (x133-((x134^x135)^x136));

	if (t30 != 1124737172126407082LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x137 = 656U;
	int16_t x139 = -1;
	volatile int8_t x140 = INT8_MAX;
	uint32_t t31 = 1U;

	t31 = (x137-((x138^x139)^x140));

	if (t31 != 2147484432U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = 488452LLU;
	static int32_t x146 = -1;
	int8_t x147 = INT8_MIN;
	static int8_t x148 = INT8_MIN;

	t32 = (x145-((x146^x147)^x148));

	if (t32 != 488453LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x150 = INT16_MAX;
	uint32_t x151 = UINT32_MAX;
	static volatile uint32_t x152 = 103931U;

	t33 = (x149-((x150^x151)^x152));

	if (t33 != 125700U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x153 = 6U;
	uint16_t x155 = UINT16_MAX;
	volatile int32_t t34 = -185;

	t34 = (x153-((x154^x155)^x156));

	if (t34 != 32902) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x158 = INT8_MAX;
	uint8_t x159 = 22U;
	volatile int16_t x160 = -1;

	t35 = (x157-((x158^x159)^x160));

	if (t35 != -22) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = 444U;
	volatile int32_t x162 = -1;
	uint16_t x163 = 78U;
	int32_t x164 = -1;
	volatile uint32_t t36 = 23149U;

	t36 = (x161-((x162^x163)^x164));

	if (t36 != 366U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x166 = INT64_MAX;
	uint16_t x167 = 5U;
	volatile int8_t x168 = INT8_MIN;
	int64_t t37 = -104951LL;

	t37 = (x165-((x166^x167)^x168));

	if (t37 != 9223372036854742918LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = 18LL;
	int8_t x170 = INT8_MIN;
	uint8_t x172 = 0U;
	volatile int64_t t38 = -1LL;

	t38 = (x169-((x170^x171)^x172));

	if (t38 != 145LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = -32546LL;
	int16_t x174 = -1;
	static int8_t x176 = -3;

	t39 = (x173-((x174^x175)^x176));

	if (t39 != -2147516191LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x177 = 186U;
	uint64_t x178 = UINT64_MAX;
	uint8_t x179 = 2U;
	int8_t x180 = INT8_MIN;
	static volatile uint64_t t40 = 0LLU;

	t40 = (x177-((x178^x179)^x180));

	if (t40 != 61LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x181 = 547535U;
	int8_t x183 = INT8_MIN;
	uint64_t x184 = UINT64_MAX;
	static volatile uint64_t t41 = 256LLU;

	t41 = (x181-((x182^x183)^x184));

	if (t41 != 547409LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x185 = 62068U;
	static volatile int16_t x186 = 0;
	uint16_t x187 = 18U;
	volatile int64_t x188 = 9296837393434073LL;

	t42 = (x185-((x186^x187)^x188));

	if (t42 != -9296837393371991LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = 22;
	int16_t x192 = INT16_MAX;
	int32_t t43 = 441;

	t43 = (x189-((x190^x191)^x192));

	if (t43 != 32790) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x194 = -1;
	static volatile uint64_t t44 = 703590LLU;

	t44 = (x193-((x194^x195)^x196));

	if (t44 != 18446744073706693176LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = 33;
	volatile int32_t x199 = INT32_MIN;
	static uint32_t x200 = 21U;
	volatile int64_t t45 = 33410619891LL;

	t45 = (x197-((x198^x199)^x200));

	if (t45 != -9223372034707292148LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x202 = INT64_MAX;
	int8_t x203 = -1;
	int8_t x204 = 6;
	volatile int64_t t46 = 7486501162644348LL;

	t46 = (x201-((x202^x203)^x204));

	if (t46 != 9223372036854775674LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x206 = 516;
	int8_t x208 = INT8_MIN;
	int32_t t47 = 31858;

	t47 = (x205-((x206^x207)^x208));

	if (t47 != 32388) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = -1;
	int16_t x210 = -1;
	int32_t x211 = INT32_MIN;
	uint64_t x212 = 8601395338961684LLU;
	volatile uint64_t t48 = 15321236897LLU;

	t48 = (x209-((x210^x211)^x212));

	if (t48 != 18438142679771538196LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x213 = 2863521420150060676LLU;
	static int16_t x214 = -1;
	volatile int32_t x216 = 2;

	t49 = (x213-((x214^x215)^x216));

	if (t49 != 2863521420150060674LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x218 = -1;
	int32_t x219 = INT32_MIN;
	int32_t x220 = INT32_MAX;

	t50 = (x217-((x218^x219)^x220));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x222 = 3U;
	volatile int8_t x223 = INT8_MIN;
	static int16_t x224 = INT16_MIN;
	static int64_t t51 = -12LL;

	t51 = (x221-((x222^x223)^x224));

	if (t51 != -32644LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x225 = INT16_MIN;
	static uint16_t x226 = 1U;
	volatile uint32_t x227 = UINT32_MAX;
	int8_t x228 = -8;
	uint32_t t52 = 58729252U;

	t52 = (x225-((x226^x227)^x228));

	if (t52 != 4294934522U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = INT16_MAX;
	volatile uint16_t x231 = 15U;
	int64_t x232 = -1LL;

	t53 = (x229-((x230^x231)^x232));

	if (t53 != 32752LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x234 = -1;
	int32_t t54 = 5439663;

	t54 = (x233-((x234^x235)^x236));

	if (t54 != 7057) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = -251790341;
	static uint64_t x238 = 16LLU;
	uint32_t x240 = 0U;
	volatile uint64_t t55 = 4095275984582370846LLU;

	t55 = (x237-((x238^x239)^x240));

	if (t55 != 18446742735425584096LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x242 = -7312;
	int16_t x243 = INT16_MAX;

	t56 = (x241-((x242^x243)^x244));

	if (t56 != 18446744071562042512LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = -1;
	static int32_t x246 = -1;
	int16_t x247 = -1;
	int32_t x248 = -56;
	volatile int32_t t57 = -6;

	t57 = (x245-((x246^x247)^x248));

	if (t57 != 55) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x249 = 4U;
	volatile int32_t x250 = -1;
	int64_t x251 = INT64_MIN;
	int16_t x252 = 4077;
	int64_t t58 = 6872826LL;

	t58 = (x249-((x250^x251)^x252));

	if (t58 != -9223372036854771726LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = -452725;
	uint8_t x258 = 29U;
	volatile uint16_t x259 = UINT16_MAX;

	t59 = (x257-((x258^x259)^x260));

	if (t59 != 18446744073703744147LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x261 = -6;
	int64_t x262 = 57LL;
	static volatile uint32_t x264 = UINT32_MAX;
	static volatile int64_t t60 = 0LL;

	t60 = (x261-((x262^x263)^x264));

	if (t60 != -4294901823LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x265 = 58U;
	int8_t x266 = INT8_MAX;
	volatile uint64_t t61 = 1596030169825LLU;

	t61 = (x265-((x266^x267)^x268));

	if (t61 != 18446744071562068154LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = INT16_MAX;
	int32_t x270 = -1;
	static uint8_t x271 = UINT8_MAX;
	volatile uint16_t x272 = 1U;

	t62 = (x269-((x270^x271)^x272));

	if (t62 != 33022) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x273 = INT64_MIN;
	uint64_t x274 = UINT64_MAX;
	int16_t x275 = -119;
	int8_t x276 = INT8_MIN;
	volatile uint64_t t63 = 203313272657436LLU;

	t63 = (x273-((x274^x275)^x276));

	if (t63 != 9223372036854775818LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x278 = INT64_MIN;
	uint32_t x279 = 21733U;
	volatile int8_t x280 = -1;

	t64 = (x277-((x278^x279)^x280));

	if (t64 != -9223372036854753819LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x281 = UINT8_MAX;
	static int8_t x282 = INT8_MIN;
	uint64_t x283 = 682484388694LLU;
	volatile int32_t x284 = 218;
	volatile uint64_t t65 = 66251LLU;

	t65 = (x281-((x282^x283)^x284));

	if (t65 != 682484389107LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = 1;
	int32_t x287 = -2;
	int8_t x288 = INT8_MIN;
	int32_t t66 = 52;

	t66 = (x285-((x286^x287)^x288));

	if (t66 != -32640) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x293 = UINT64_MAX;
	int32_t x294 = 10972914;
	volatile uint64_t t67 = 378638842521127LLU;

	t67 = (x293-((x294^x295)^x296));

	if (t67 != 9223372036865748722LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x298 = 11925504324LLU;
	int32_t x299 = -1;
	uint64_t t68 = 44398220LLU;

	t68 = (x297-((x298^x299)^x300));

	if (t68 != 18446744061784112827LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = INT8_MAX;
	uint8_t x302 = UINT8_MAX;
	int16_t x303 = INT16_MAX;
	volatile int32_t x304 = INT32_MIN;
	static int32_t t69 = 56350412;

	t69 = (x301-((x302^x303)^x304));

	if (t69 != 2147451263) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x305 = 16U;
	static int32_t x306 = INT32_MIN;
	volatile uint32_t x307 = 2042298003U;
	int8_t x308 = INT8_MIN;
	volatile uint32_t t70 = 72U;

	t70 = (x305-((x306^x307)^x308));

	if (t70 != 4189781757U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x314 = 3;
	static uint32_t x315 = UINT32_MAX;
	uint8_t x316 = 106U;
	static volatile uint32_t t71 = 627U;

	t71 = (x313-((x314^x315)^x316));

	if (t71 != 4294967274U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x318 = UINT16_MAX;
	volatile uint16_t x319 = UINT16_MAX;
	uint64_t x320 = UINT64_MAX;
	uint64_t t72 = 5292047013733LLU;

	t72 = (x317-((x318^x319)^x320));

	if (t72 != 18446744073515436326LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x325 = -1LL;
	int64_t x326 = INT64_MIN;
	int16_t x328 = -1;
	int64_t t73 = 328LL;

	t73 = (x325-((x326^x327)^x328));

	if (t73 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x330 = INT32_MAX;
	int16_t x331 = INT16_MIN;
	static int8_t x332 = INT8_MAX;
	int32_t t74 = -95921264;

	t74 = (x329-((x330^x331)^x332));

	if (t74 != -32640) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x333 = INT8_MIN;
	int16_t x334 = INT16_MAX;
	int64_t x335 = INT64_MAX;
	volatile int8_t x336 = 1;
	int64_t t75 = -1LL;

	t75 = (x333-((x334^x335)^x336));

	if (t75 != -9223372036854743169LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x341 = -1;
	volatile int32_t x342 = INT32_MIN;
	int16_t x343 = 0;
	int32_t x344 = INT32_MIN;
	int32_t t76 = -160;

	t76 = (x341-((x342^x343)^x344));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x346 = UINT8_MAX;
	volatile int8_t x347 = 5;
	int8_t x348 = INT8_MAX;
	volatile int64_t t77 = -139341651251LL;

	t77 = (x345-((x346^x347)^x348));

	if (t77 != 9223372036854775674LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x353 = INT8_MIN;
	int8_t x354 = INT8_MAX;
	volatile int8_t x355 = -1;
	int16_t x356 = 4929;
	int32_t t78 = 4414;

	t78 = (x353-((x354^x355)^x356));

	if (t78 != 4799) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x357 = INT16_MIN;
	uint8_t x358 = UINT8_MAX;
	static uint64_t x359 = 17882563LLU;
	static int16_t x360 = -1;
	uint64_t t79 = 943402LLU;

	t79 = (x357-((x358^x359)^x360));

	if (t79 != 17849661LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = 2792528LL;
	uint16_t x362 = 6692U;
	int16_t x363 = 979;
	int8_t x364 = -28;

	t80 = (x361-((x362^x363)^x364));

	if (t80 != 2799165LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x365 = UINT16_MAX;
	volatile uint8_t x366 = 24U;
	static int64_t x367 = INT64_MIN;
	int16_t x368 = -1;
	int64_t t81 = 2354561289LL;

	t81 = (x365-((x366^x367)^x368));

	if (t81 != -9223372036854710248LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x369 = 6LLU;
	volatile int64_t x370 = INT64_MIN;
	static volatile int16_t x371 = INT16_MIN;
	int16_t x372 = -2;
	uint64_t t82 = 5256389213285129LLU;

	t82 = (x369-((x370^x371)^x372));

	if (t82 != 9223372036854743048LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x373 = INT16_MIN;
	volatile uint64_t x374 = 868622105025633935LLU;
	int8_t x376 = INT8_MIN;
	volatile uint64_t t83 = 2118178798822791731LLU;

	t83 = (x373-((x374^x375)^x376));

	if (t83 != 17578121968683884913LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x377 = UINT16_MAX;
	int32_t x378 = -159252412;
	volatile int16_t x379 = INT16_MIN;
	static int8_t x380 = INT8_MIN;
	static volatile int32_t t84 = 290;

	t84 = (x377-((x378^x379)^x380));

	if (t84 != 159285307) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x381 = INT64_MIN;
	int16_t x383 = INT16_MAX;

	t85 = (x381-((x382^x383)^x384));

	if (t85 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x385 = INT16_MIN;
	static volatile uint16_t x387 = UINT16_MAX;
	int64_t x388 = -1LL;
	static int64_t t86 = -98544720101906LL;

	t86 = (x385-((x386^x387)^x388));

	if (t86 != -407165177357LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x389 = INT16_MIN;
	int8_t x390 = 9;
	int64_t x391 = INT64_MIN;
	int8_t x392 = INT8_MAX;
	volatile int64_t t87 = -829972295093LL;

	t87 = (x389-((x390^x391)^x392));

	if (t87 != 9223372036854742922LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x393 = INT8_MIN;
	static volatile int64_t x394 = INT64_MIN;
	int64_t t88 = 91LL;

	t88 = (x393-((x394^x395)^x396));

	if (t88 != -9223372034707292765LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x397 = 50518352U;
	static int64_t x399 = -1LL;
	uint16_t x400 = 1U;
	volatile int64_t t89 = -30705216776801077LL;

	t89 = (x397-((x398^x399)^x400));

	if (t89 != 4345485647LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x401 = -1;
	volatile int32_t x402 = -4839;
	int8_t x404 = -1;
	volatile uint32_t t90 = 4281U;

	t90 = (x401-((x402^x403)^x404));

	if (t90 != 4838U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x405 = INT16_MIN;
	uint16_t x406 = UINT16_MAX;
	volatile int8_t x407 = INT8_MIN;
	static int16_t x408 = INT16_MIN;
	volatile int32_t t91 = 45525;

	t91 = (x405-((x406^x407)^x408));

	if (t91 != -65663) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x409 = 32;
	int32_t x412 = 9;

	t92 = (x409-((x410^x411)^x412));

	if (t92 != 23LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x413 = 0;
	uint16_t x414 = UINT16_MAX;
	int64_t x415 = INT64_MIN;
	int16_t x416 = INT16_MIN;
	static int64_t t93 = -50145803136044LL;

	t93 = (x413-((x414^x415)^x416));

	if (t93 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x417 = -20;
	int16_t x418 = INT16_MAX;
	uint64_t x420 = 8350659294159392LLU;
	uint64_t t94 = 1786LLU;

	t94 = (x417-((x418^x419)^x420));

	if (t94 != 18438393414415409740LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x421 = UINT32_MAX;
	uint64_t x422 = 19LLU;
	int64_t x423 = INT64_MIN;
	uint32_t x424 = 3267563U;

	t95 = (x421-((x422^x423)^x424));

	if (t95 != 9223372041146475527LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x425 = UINT16_MAX;
	uint8_t x426 = 112U;
	volatile uint8_t x427 = UINT8_MAX;
	volatile int32_t t96 = -306;

	t96 = (x425-((x426^x427)^x428));

	if (t96 != 62537) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x429 = 73451812LLU;
	int32_t x430 = 1844249;
	static volatile int64_t x431 = 2969LL;
	uint16_t x432 = 607U;

	t97 = (x429-((x430^x431)^x432));

	if (t97 != 71605061LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x437 = 245773810155670LLU;
	uint16_t x438 = 2655U;
	static volatile int64_t x439 = INT64_MAX;
	uint8_t x440 = UINT8_MAX;
	volatile uint64_t t98 = 118LLU;

	t98 = (x437-((x438^x439)^x440));

	if (t98 != 9223617810664934199LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x441 = 0;
	static int16_t x442 = INT16_MIN;
	static uint64_t x443 = 7302LLU;
	int16_t x444 = -1;
	uint64_t t99 = 1877851403LLU;

	t99 = (x441-((x442^x443)^x444));

	if (t99 != 18446744073709526151LLU) { NG(); } else { ; }
	
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

