#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 122U;
int16_t x17 = INT16_MIN;
int64_t t3 = 188875343591232434LL;
volatile int16_t x27 = INT16_MIN;
int64_t x31 = INT64_MIN;
static volatile int64_t t6 = -251258835LL;
uint16_t x36 = 21U;
volatile int16_t x43 = 2;
int64_t x53 = -1LL;
volatile int64_t t12 = 86389959LL;
int32_t x57 = INT32_MIN;
volatile int8_t x70 = 2;
volatile int8_t x71 = -1;
int64_t x73 = INT64_MAX;
int32_t x80 = -41;
int16_t x83 = 0;
volatile uint64_t t19 = 46290628LLU;
uint32_t x90 = 77U;
int32_t x94 = INT32_MAX;
int8_t x95 = INT8_MAX;
uint32_t x96 = 509U;
uint8_t x98 = 4U;
int16_t x101 = -1;
static int32_t x113 = INT32_MIN;
int32_t x116 = -1749895;
uint8_t x119 = 23U;
int8_t x121 = -1;
uint32_t x122 = UINT32_MAX;
uint64_t t29 = 996163625LLU;
static int64_t x126 = INT64_MAX;
volatile int64_t x127 = INT64_MIN;
uint64_t x136 = 66052918786468329LLU;
uint64_t t31 = 2114066108LLU;
static volatile uint16_t x145 = 365U;
volatile uint8_t x163 = UINT8_MAX;
volatile int32_t t37 = -8684459;
uint16_t x166 = 1614U;
int64_t x169 = INT64_MIN;
int32_t x172 = INT32_MAX;
volatile int64_t t39 = -68487047593LL;
volatile int8_t x176 = INT8_MAX;
volatile int8_t x177 = 0;
int32_t x179 = INT32_MIN;
static int64_t x190 = 208264757855LL;
volatile int64_t x195 = INT64_MIN;
int8_t x196 = -1;
volatile int64_t t44 = -140999300042LL;
static volatile int8_t x199 = INT8_MIN;
int64_t t45 = -2509511571535888LL;
volatile uint8_t x207 = UINT8_MAX;
volatile int32_t t47 = 2;
int8_t x213 = INT8_MIN;
int32_t x214 = INT32_MAX;
volatile uint32_t t49 = 8299041U;
int8_t x225 = -28;
volatile int32_t x236 = INT32_MIN;
static uint64_t x238 = 80LLU;
volatile uint64_t t55 = 166497LLU;
int8_t x247 = INT8_MIN;
volatile int64_t x251 = 0LL;
int32_t x254 = INT32_MAX;
int8_t x260 = INT8_MAX;
uint8_t x262 = UINT8_MAX;
int32_t x264 = INT32_MIN;
volatile int8_t x271 = 1;
int8_t x274 = INT8_MAX;
static volatile int64_t x276 = INT64_MAX;
int32_t x284 = INT32_MIN;
int64_t x285 = 47277304948LL;
static int64_t x292 = -1LL;
int64_t t68 = 6LL;
static int32_t t69 = 2;
static uint8_t x299 = 5U;
static volatile int64_t t71 = -61LL;
int8_t x310 = INT8_MAX;
int32_t x314 = 0;
uint64_t x320 = UINT64_MAX;
int8_t x324 = -1;
static int64_t x330 = INT64_MAX;
int32_t x332 = -63832024;
int16_t x335 = INT16_MIN;
int64_t x339 = INT64_MAX;
static volatile int32_t t81 = 369337758;
int32_t x345 = -209878794;
int8_t x349 = -1;
static uint16_t x352 = 266U;
volatile uint64_t t83 = 49417634LLU;
int8_t x360 = INT8_MIN;
int8_t x364 = INT8_MIN;
static uint8_t x365 = UINT8_MAX;
volatile int32_t t87 = 0;
int8_t x369 = INT8_MAX;
uint8_t x372 = 102U;
static volatile int32_t t88 = 992047;
int8_t x373 = INT8_MAX;
uint64_t x377 = 505907417LLU;
static uint16_t x378 = 15555U;
uint64_t x379 = 33876685579460LLU;
uint64_t t90 = 63785LLU;
int64_t x385 = -9097770038LL;
int64_t x387 = -39660832632LL;
volatile uint64_t t92 = 386LLU;
static int32_t x389 = INT32_MIN;
int64_t x392 = -879618LL;
uint64_t x404 = 5516820994LLU;
volatile int16_t x406 = -1;
static int8_t x412 = INT8_MIN;
uint64_t t99 = 3306LLU;


void f0(void) {
	volatile uint32_t x1 = 10138U;
	int64_t x2 = INT64_MIN;
	static int64_t x3 = -1LL;
	static int8_t x4 = -1;
	int64_t t0 = -14700999824LL;

	t0 = (x1&((x2^x3)%x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	int8_t x7 = -1;
	volatile int16_t x8 = INT16_MIN;
	int32_t t1 = 26;

	t1 = (x5&((x6^x7)%x8));

	if (t1 != 122) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 0;
	int32_t x14 = INT32_MAX;
	uint8_t x15 = 0U;
	static uint8_t x16 = 5U;
	volatile int32_t t2 = -27;

	t2 = (x13&((x14^x15)%x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x18 = UINT32_MAX;
	uint8_t x19 = 88U;
	int64_t x20 = INT64_MIN;

	t3 = (x17&((x18^x19)%x20));

	if (t3 != 4294934528LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 67827074;
	static volatile uint32_t x22 = 2311248U;
	int64_t x23 = INT64_MIN;
	static int16_t x24 = -1;
	int64_t t4 = 2221LL;

	t4 = (x21&((x22^x23)%x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	int16_t x26 = INT16_MIN;
	int64_t x28 = INT64_MIN;
	static int64_t t5 = 2114474591930067626LL;

	t5 = (x25&((x26^x27)%x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 55;
	static int64_t x30 = 10760475962319754LL;
	uint16_t x32 = UINT16_MAX;

	t6 = (x29&((x30^x31)%x32));

	if (t6 != 34LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x33 = -24;
	volatile int8_t x34 = 5;
	int8_t x35 = -1;
	volatile int32_t t7 = -7980;

	t7 = (x33&((x34^x35)%x36));

	if (t7 != -24) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = 6;
	int64_t x38 = 2LL;
	volatile int16_t x39 = -1;
	int64_t x40 = INT64_MIN;
	int64_t t8 = 162156441LL;

	t8 = (x37&((x38^x39)%x40));

	if (t8 != 4LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MAX;
	int8_t x42 = INT8_MIN;
	int64_t x44 = INT64_MIN;
	volatile int64_t t9 = 187178412LL;

	t9 = (x41&((x42^x43)%x44));

	if (t9 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	int8_t x46 = -1;
	int64_t x47 = -174853949236554564LL;
	volatile int16_t x48 = -1;
	volatile int64_t t10 = -131LL;

	t10 = (x45&((x46^x47)%x48));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x49 = 235U;
	uint64_t x50 = UINT64_MAX;
	uint32_t x51 = 9154400U;
	volatile int64_t x52 = INT64_MIN;
	uint64_t t11 = 1646882445174599132LLU;

	t11 = (x49&((x50^x51)%x52));

	if (t11 != 139LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x54 = INT64_MIN;
	int8_t x55 = -1;
	int32_t x56 = -1300517;

	t12 = (x53&((x54^x55)%x56));

	if (t12 != 107703LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x58 = 2942U;
	uint8_t x59 = 91U;
	volatile uint16_t x60 = 881U;
	static int32_t t13 = -9967107;

	t13 = (x57&((x58^x59)%x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 50U;
	volatile uint32_t x62 = 301673831U;
	static int16_t x63 = -113;
	int32_t x64 = -1;
	uint32_t t14 = 9122U;

	t14 = (x61&((x62^x63)%x64));

	if (t14 != 32U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = 50316050466LL;
	int32_t x66 = 5;
	int32_t x67 = 2;
	int16_t x68 = INT16_MIN;
	int64_t t15 = -186042177579679LL;

	t15 = (x65&((x66^x67)%x68));

	if (t15 != 2LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -13;
	int64_t x72 = INT64_MIN;
	volatile int64_t t16 = -6012LL;

	t16 = (x69&((x70^x71)%x72));

	if (t16 != -15LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = -1LL;
	int8_t x75 = INT8_MIN;
	int64_t x76 = -1LL;
	static int64_t t17 = -134399893165623521LL;

	t17 = (x73&((x74^x75)%x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x77 = INT8_MAX;
	int16_t x78 = 15507;
	volatile uint32_t x79 = UINT32_MAX;
	static volatile uint32_t t18 = 27377U;

	t18 = (x77&((x78^x79)%x80));

	if (t18 != 108U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = 35;
	volatile uint64_t x82 = 74727368146LLU;
	int32_t x84 = INT32_MAX;

	t19 = (x81&((x82^x83)%x84));

	if (t19 != 32LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	int64_t x86 = INT64_MIN;
	int16_t x87 = -41;
	static int16_t x88 = -1;
	int64_t t20 = -224578313LL;

	t20 = (x85&((x86^x87)%x88));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x89 = 126;
	uint8_t x91 = UINT8_MAX;
	int16_t x92 = INT16_MIN;
	volatile uint32_t t21 = 516369U;

	t21 = (x89&((x90^x91)%x92));

	if (t21 != 50U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x93 = 30;
	uint32_t t22 = 2U;

	t22 = (x93&((x94^x95)%x96));

	if (t22 != 16U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MIN;
	int16_t x99 = -1;
	int16_t x100 = INT16_MIN;
	static volatile int64_t t23 = INT64_MIN;

	t23 = (x97&((x98^x99)%x100));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x102 = 84658LLU;
	volatile uint32_t x103 = 1692203571U;
	int8_t x104 = INT8_MIN;
	uint64_t t24 = 9085550009438411445LLU;

	t24 = (x101&((x102^x103)%x104));

	if (t24 != 1692250241LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 0U;
	volatile uint16_t x106 = 13312U;
	int64_t x107 = 1498216565187410LL;
	static volatile uint8_t x108 = UINT8_MAX;
	volatile int64_t t25 = -1885742LL;

	t25 = (x105&((x106^x107)%x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MAX;
	volatile uint8_t x110 = UINT8_MAX;
	volatile int8_t x111 = INT8_MIN;
	int16_t x112 = INT16_MIN;
	int32_t t26 = 874;

	t26 = (x109&((x110^x111)%x112));

	if (t26 != 32639) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x114 = -1;
	int8_t x115 = -1;
	int32_t t27 = 39902002;

	t27 = (x113&((x114^x115)%x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x117 = UINT16_MAX;
	uint16_t x118 = UINT16_MAX;
	int8_t x120 = 29;
	volatile int32_t t28 = -59182812;

	t28 = (x117&((x118^x119)%x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x123 = UINT16_MAX;
	static uint64_t x124 = 134948LLU;

	t29 = (x121&((x122^x123)%x124));

	if (t29 != 46712LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MIN;
	int32_t x128 = -1;
	static volatile int64_t t30 = 52573LL;

	t30 = (x125&((x126^x127)%x128));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MIN;
	volatile int8_t x135 = 62;

	t31 = (x133&((x134^x135)%x136));

	if (t31 != 17979731680952320LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = UINT32_MAX;
	int8_t x138 = -12;
	static volatile int16_t x139 = INT16_MIN;
	uint8_t x140 = UINT8_MAX;
	uint32_t t32 = 10559U;

	t32 = (x137&((x138^x139)%x140));

	if (t32 != 116U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = 178;
	int32_t x142 = 46326098;
	uint32_t x143 = 433U;
	int16_t x144 = 61;
	volatile uint32_t t33 = 0U;

	t33 = (x141&((x142^x143)%x144));

	if (t33 != 16U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x146 = UINT8_MAX;
	static volatile uint64_t x147 = 1LLU;
	static int64_t x148 = -1LL;
	volatile uint64_t t34 = 461521694001LLU;

	t34 = (x145&((x146^x147)%x148));

	if (t34 != 108LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x153 = 26;
	int16_t x154 = INT16_MIN;
	uint8_t x155 = 51U;
	int16_t x156 = INT16_MAX;
	int32_t t35 = 257922;

	t35 = (x153&((x154^x155)%x156));

	if (t35 != 18) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = 23U;
	volatile int32_t x158 = INT32_MAX;
	static uint8_t x159 = UINT8_MAX;
	int8_t x160 = 5;
	volatile int32_t t36 = -477789;

	t36 = (x157&((x158^x159)%x160));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x161 = 1;
	static int16_t x162 = 0;
	int32_t x164 = INT32_MIN;

	t37 = (x161&((x162^x163)%x164));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = -1;
	static uint16_t x167 = 1U;
	static volatile int8_t x168 = INT8_MIN;
	int32_t t38 = 26641280;

	t38 = (x165&((x166^x167)%x168));

	if (t38 != 79) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x170 = INT8_MIN;
	int16_t x171 = INT16_MIN;

	t39 = (x169&((x170^x171)%x172));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = INT32_MIN;
	int16_t x174 = INT16_MIN;
	volatile uint64_t x175 = 61LLU;
	volatile uint64_t t40 = 3368559992424765705LLU;

	t40 = (x173&((x174^x175)%x176));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x178 = -1;
	static int16_t x180 = INT16_MIN;
	static volatile int32_t t41 = -93286;

	t41 = (x177&((x178^x179)%x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x185 = 3LLU;
	static int8_t x186 = INT8_MIN;
	int16_t x187 = -1;
	int32_t x188 = INT32_MAX;
	volatile uint64_t t42 = 422387745LLU;

	t42 = (x185&((x186^x187)%x188));

	if (t42 != 3LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x189 = UINT64_MAX;
	uint8_t x191 = 23U;
	int8_t x192 = 5;
	static uint64_t t43 = 1179648989926LLU;

	t43 = (x189&((x190^x191)%x192));

	if (t43 != 2LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = 745514916;
	int64_t x194 = INT64_MAX;

	t44 = (x193&((x194^x195)%x196));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = 11966185733427LL;
	volatile int64_t x198 = 12LL;
	int8_t x200 = 2;

	t45 = (x197&((x198^x199)%x200));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = INT32_MAX;
	int16_t x202 = 12;
	int16_t x203 = INT16_MIN;
	volatile int16_t x204 = -1;
	static int32_t t46 = -399;

	t46 = (x201&((x202^x203)%x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x205 = UINT16_MAX;
	static volatile int8_t x206 = -1;
	int32_t x208 = INT32_MIN;

	t47 = (x205&((x206^x207)%x208));

	if (t47 != 65280) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x209 = INT16_MIN;
	uint32_t x210 = UINT32_MAX;
	int8_t x211 = INT8_MIN;
	volatile uint32_t x212 = 1988U;
	uint32_t t48 = 18U;

	t48 = (x209&((x210^x211)%x212));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x215 = 15U;
	static int32_t x216 = 9893;

	t49 = (x213&((x214^x215)%x216));

	if (t49 != 128U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x217 = 13LLU;
	static int32_t x218 = INT32_MAX;
	static uint32_t x219 = UINT32_MAX;
	uint32_t x220 = UINT32_MAX;
	volatile uint64_t t50 = 1LLU;

	t50 = (x217&((x218^x219)%x220));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = INT8_MIN;
	int8_t x222 = 0;
	static uint8_t x223 = UINT8_MAX;
	volatile int32_t x224 = INT32_MIN;
	volatile int32_t t51 = 209057006;

	t51 = (x221&((x222^x223)%x224));

	if (t51 != 128) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x226 = UINT32_MAX;
	volatile int32_t x227 = 0;
	volatile uint16_t x228 = UINT16_MAX;
	uint32_t t52 = 29787672U;

	t52 = (x225&((x226^x227)%x228));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x229 = UINT64_MAX;
	static volatile uint8_t x230 = UINT8_MAX;
	volatile uint64_t x231 = 3LLU;
	int8_t x232 = INT8_MIN;
	uint64_t t53 = 2709212544915780238LLU;

	t53 = (x229&((x230^x231)%x232));

	if (t53 != 252LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = -1;
	int32_t x234 = -1;
	int16_t x235 = -13;
	int32_t t54 = -20;

	t54 = (x233&((x234^x235)%x236));

	if (t54 != 12) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = 84724625521650603LL;
	uint32_t x239 = UINT32_MAX;
	uint8_t x240 = UINT8_MAX;

	t55 = (x237&((x238^x239)%x240));

	if (t55 != 171LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = UINT32_MAX;
	int8_t x242 = INT8_MAX;
	int32_t x243 = -1;
	volatile int16_t x244 = INT16_MAX;
	uint32_t t56 = 15450U;

	t56 = (x241&((x242^x243)%x244));

	if (t56 != 4294967168U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = -1;
	uint8_t x246 = 1U;
	volatile int32_t x248 = INT32_MIN;
	int32_t t57 = -96439967;

	t57 = (x245&((x246^x247)%x248));

	if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = -78858;
	uint8_t x250 = UINT8_MAX;
	uint64_t x252 = 1465190LLU;
	volatile uint64_t t58 = 4047098525604984910LLU;

	t58 = (x249&((x250^x251)%x252));

	if (t58 != 246LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = INT8_MIN;
	int8_t x255 = INT8_MIN;
	int16_t x256 = 5909;
	volatile int32_t t59 = 12;

	t59 = (x253&((x254^x255)%x256));

	if (t59 != -5248) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x257 = 705635121U;
	uint8_t x258 = 0U;
	volatile uint64_t x259 = UINT64_MAX;
	uint64_t t60 = 209741694LLU;

	t60 = (x257&((x258^x259)%x260));

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = INT8_MAX;
	uint16_t x263 = UINT16_MAX;
	volatile int32_t t61 = 4156556;

	t61 = (x261&((x262^x263)%x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = 342248303LL;
	int8_t x266 = INT8_MIN;
	volatile uint8_t x267 = UINT8_MAX;
	uint32_t x268 = UINT32_MAX;
	volatile int64_t t62 = 1LL;

	t62 = (x265&((x266^x267)%x268));

	if (t62 != 342248303LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x269 = 7U;
	int8_t x270 = -50;
	static uint64_t x272 = UINT64_MAX;
	uint64_t t63 = 468770LLU;

	t63 = (x269&((x270^x271)%x272));

	if (t63 != 7LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = INT64_MAX;
	int64_t x275 = INT64_MIN;
	int64_t t64 = -189LL;

	t64 = (x273&((x274^x275)%x276));

	if (t64 != 127LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x277 = 61U;
	static int8_t x278 = -1;
	int16_t x279 = -1;
	static int64_t x280 = -1LL;
	volatile int64_t t65 = -66294495LL;

	t65 = (x277&((x278^x279)%x280));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x281 = 5078326467467297LLU;
	volatile int16_t x282 = -1;
	int16_t x283 = -7979;
	volatile uint64_t t66 = 1752483945523001LLU;

	t66 = (x281&((x282^x283)%x284));

	if (t66 != 6176LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x286 = 0U;
	uint32_t x287 = UINT32_MAX;
	uint32_t x288 = UINT32_MAX;
	int64_t t67 = -27984LL;

	t67 = (x285&((x286^x287)%x288));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = INT32_MIN;
	int32_t x290 = INT32_MIN;
	uint32_t x291 = 12616U;

	t68 = (x289&((x290^x291)%x292));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x293 = INT32_MIN;
	int16_t x294 = INT16_MAX;
	static uint8_t x295 = 1U;
	uint8_t x296 = UINT8_MAX;

	t69 = (x293&((x294^x295)%x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x297 = INT8_MIN;
	uint16_t x298 = 0U;
	volatile int64_t x300 = 55422725853492705LL;
	int64_t t70 = 6917707254937070LL;

	t70 = (x297&((x298^x299)%x300));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x301 = 2;
	static uint16_t x302 = 0U;
	static int64_t x303 = -1LL;
	static int8_t x304 = -3;

	t71 = (x301&((x302^x303)%x304));

	if (t71 != 2LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x305 = INT64_MAX;
	int64_t x306 = INT64_MIN;
	uint32_t x307 = 4U;
	volatile int32_t x308 = -23;
	volatile int64_t t72 = 708LL;

	t72 = (x305&((x306^x307)%x308));

	if (t72 != 9223372036854775786LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x309 = 19498751841540LLU;
	volatile uint32_t x311 = 122797U;
	static int32_t x312 = INT32_MIN;
	volatile uint64_t t73 = 126LLU;

	t73 = (x309&((x310^x311)%x312));

	if (t73 != 87296LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = INT16_MIN;
	int16_t x315 = 1858;
	uint64_t x316 = 84473524198828LLU;
	volatile uint64_t t74 = 14369028322376892LLU;

	t74 = (x313&((x314^x315)%x316));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x317 = 11720U;
	int32_t x318 = -53608952;
	int16_t x319 = INT16_MAX;
	static uint64_t t75 = 59LLU;

	t75 = (x317&((x318^x319)%x320));

	if (t75 != 448LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x321 = 183570532252LLU;
	static int32_t x322 = INT32_MAX;
	volatile uint16_t x323 = 2017U;
	volatile uint64_t t76 = 88596607577LLU;

	t76 = (x321&((x322^x323)%x324));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x325 = INT32_MAX;
	int16_t x326 = INT16_MIN;
	volatile int16_t x327 = -1;
	uint64_t x328 = 14211LLU;
	volatile uint64_t t77 = 1624516426332183LLU;

	t77 = (x325&((x326^x327)%x328));

	if (t77 != 4345LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x329 = INT64_MIN;
	int64_t x331 = -16131821LL;
	static volatile int64_t t78 = INT64_MIN;

	t78 = (x329&((x330^x331)%x332));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = INT32_MAX;
	uint16_t x334 = 0U;
	uint16_t x336 = 429U;
	volatile int32_t t79 = -3;

	t79 = (x333&((x334^x335)%x336));

	if (t79 != 2147483484) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x337 = 263U;
	uint32_t x338 = 225085075U;
	int8_t x340 = INT8_MIN;
	volatile int64_t t80 = 2632914573216478127LL;

	t80 = (x337&((x338^x339)%x340));

	if (t80 != 4LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x341 = 7U;
	int8_t x342 = INT8_MAX;
	int16_t x343 = INT16_MAX;
	static int16_t x344 = -11272;

	t81 = (x341&((x342^x343)%x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x346 = INT8_MAX;
	int16_t x347 = INT16_MAX;
	volatile uint64_t x348 = 33940366LLU;
	volatile uint64_t t82 = 902284468864LLU;

	t82 = (x345&((x346^x347)%x348));

	if (t82 != 128LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x350 = 308981406627710LLU;
	int32_t x351 = INT32_MAX;

	t83 = (x349&((x350^x351)%x352));

	if (t83 != 221LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = -1;
	static int64_t x354 = -1LL;
	static uint16_t x355 = 21471U;
	int32_t x356 = -1;
	int64_t t84 = 5621957LL;

	t84 = (x353&((x354^x355)%x356));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = INT64_MIN;
	static uint8_t x358 = 12U;
	int8_t x359 = -1;
	volatile int64_t t85 = INT64_MIN;

	t85 = (x357&((x358^x359)%x360));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x361 = 513431LLU;
	int32_t x362 = INT32_MIN;
	int8_t x363 = 5;
	volatile uint64_t t86 = 33951LLU;

	t86 = (x361&((x362^x363)%x364));

	if (t86 != 513413LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x366 = -1;
	volatile int8_t x367 = -1;
	int16_t x368 = INT16_MIN;

	t87 = (x365&((x366^x367)%x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x370 = INT8_MIN;
	uint16_t x371 = UINT16_MAX;

	t88 = (x369&((x370^x371)%x372));

	if (t88 != 101) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x374 = UINT64_MAX;
	int64_t x375 = 788599LL;
	static uint64_t x376 = 22369693900418LLU;
	uint64_t t89 = 3770881997LLU;

	t89 = (x373&((x374^x375)%x376));

	if (t89 != 26LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x380 = INT8_MAX;

	t90 = (x377&((x378^x379)%x380));

	if (t90 != 9LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = INT64_MAX;
	volatile int32_t x382 = INT32_MIN;
	int16_t x383 = -1;
	volatile int64_t x384 = -879622211225767841LL;
	int64_t t91 = -22450162216522LL;

	t91 = (x381&((x382^x383)%x384));

	if (t91 != 2147483647LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x386 = 1127634675571052LLU;
	uint64_t x388 = UINT64_MAX;

	t92 = (x385&((x386^x387)%x388));

	if (t92 != 18445616409108087232LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x390 = INT8_MIN;
	uint64_t x391 = 112101564723LLU;
	static uint64_t t93 = 155782370LLU;

	t93 = (x389&((x390^x391)%x392));

	if (t93 != 18446743959892918272LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = 1;
	int64_t x394 = INT64_MIN;
	int16_t x395 = -10;
	static uint16_t x396 = 6U;
	volatile int64_t t94 = -45455826504520407LL;

	t94 = (x393&((x394^x395)%x396));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x397 = UINT32_MAX;
	volatile uint64_t x398 = UINT64_MAX;
	static int64_t x399 = 3330LL;
	int32_t x400 = INT32_MIN;
	uint64_t t95 = 5271559248555944532LLU;

	t95 = (x397&((x398^x399)%x400));

	if (t95 != 2147480317LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x401 = 1222107U;
	int16_t x402 = -3;
	uint64_t x403 = 407656549LLU;
	static uint64_t t96 = 1986356553LLU;

	t96 = (x401&((x402^x403)%x404));

	if (t96 != 1090896LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = -2;
	volatile uint64_t x407 = UINT64_MAX;
	static volatile int8_t x408 = 19;
	static uint64_t t97 = 307134096LLU;

	t97 = (x405&((x406^x407)%x408));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x409 = -3714LL;
	volatile uint8_t x410 = UINT8_MAX;
	volatile uint8_t x411 = UINT8_MAX;
	volatile int64_t t98 = -5006LL;

	t98 = (x409&((x410^x411)%x412));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x413 = INT32_MIN;
	uint8_t x414 = 5U;
	uint64_t x415 = 1254405930440LLU;
	int8_t x416 = 1;

	t99 = (x413&((x414^x415)%x416));

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
