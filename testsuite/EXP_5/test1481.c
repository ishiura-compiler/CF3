#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 33363;
static uint8_t x8 = 11U;
static int64_t t1 = 2613LL;
volatile int16_t x12 = -2091;
volatile int32_t t2 = 40790;
uint16_t x16 = 32611U;
int64_t x18 = -142717826183582771LL;
static volatile int16_t x22 = 1;
uint32_t x24 = 1465U;
int64_t x25 = INT64_MIN;
int32_t x28 = 7;
volatile int32_t t7 = 2607665;
int64_t x33 = 8130LL;
volatile uint64_t t10 = 391915333LLU;
static int16_t x45 = INT16_MIN;
static uint64_t x47 = 6LLU;
int8_t x51 = -16;
static uint8_t x61 = 28U;
int64_t x64 = INT64_MAX;
int32_t x67 = -1;
static volatile int8_t x70 = 52;
int64_t x72 = INT64_MIN;
volatile int16_t x76 = INT16_MIN;
static volatile int32_t t19 = -52;
int8_t x81 = 23;
int8_t x83 = INT8_MIN;
volatile int64_t x87 = INT64_MAX;
uint32_t x89 = 38413939U;
volatile int64_t x93 = 1LL;
static int16_t x95 = INT16_MIN;
int8_t x98 = INT8_MAX;
volatile int16_t x99 = INT16_MIN;
uint32_t x107 = UINT32_MAX;
volatile int32_t t26 = INT32_MIN;
uint8_t x115 = 2U;
uint32_t x119 = UINT32_MAX;
static volatile int64_t t29 = INT64_MAX;
volatile int64_t x123 = INT64_MIN;
static volatile int64_t t30 = INT64_MIN;
int16_t x128 = INT16_MIN;
int8_t x133 = -1;
uint16_t x135 = 3U;
static int8_t x137 = INT8_MIN;
int8_t x143 = 18;
int16_t x155 = -1;
uint8_t x166 = 55U;
static int32_t x167 = 261024;
uint32_t x170 = 126521U;
volatile uint64_t x171 = 3754145762LLU;
static uint16_t x175 = 238U;
uint64_t x183 = UINT64_MAX;
int32_t x184 = 954191625;
int32_t t45 = 3355181;
int64_t x187 = -1LL;
uint64_t x188 = UINT64_MAX;
int64_t x189 = 13709LL;
int32_t x193 = INT32_MIN;
volatile uint8_t x201 = 8U;
int64_t x202 = 1LL;
uint16_t x203 = UINT16_MAX;
uint32_t x204 = 28231U;
uint8_t x207 = UINT8_MAX;
int64_t x210 = -3907092929820060753LL;
int64_t x211 = -115345080682LL;
int64_t x212 = INT64_MIN;
int32_t x219 = INT32_MIN;
uint16_t x224 = 919U;
static int64_t t55 = INT64_MAX;
int64_t t56 = INT64_MIN;
static int32_t t57 = -722871;
volatile int16_t x236 = INT16_MIN;
int32_t t58 = 23;
static int64_t x249 = INT64_MAX;
uint16_t x253 = 491U;
static uint64_t x256 = UINT64_MAX;
uint64_t x257 = 1585LLU;
uint64_t t64 = 3752LLU;
int64_t x264 = 33400712LL;
volatile int32_t t65 = -1;
volatile uint32_t x266 = 2U;
int64_t x267 = -1LL;
volatile uint64_t x271 = UINT64_MAX;
int32_t x274 = -66758;
int32_t x276 = -4945;
uint64_t x279 = 1751479989LLU;
int32_t x282 = -1;
int16_t x284 = INT16_MIN;
int32_t t73 = INT32_MIN;
int8_t x297 = INT8_MIN;
int32_t x303 = INT32_MIN;
uint64_t x307 = 2444963482045LLU;
uint8_t x309 = 119U;
int32_t x310 = 168;
uint64_t x312 = UINT64_MAX;
volatile uint8_t x326 = UINT8_MAX;
volatile int32_t t81 = -1034;
static uint64_t x332 = 431941447039LLU;
int32_t t82 = 14259447;
volatile int64_t x340 = INT64_MIN;
int32_t t84 = 2638708;
static int8_t x348 = -25;
uint16_t x349 = 2U;
volatile int32_t t89 = -409;
static int64_t t90 = 34422138802LL;
int64_t x365 = -1LL;
static volatile int8_t x371 = 1;
int64_t x395 = -1LL;
int64_t x399 = INT64_MIN;
static volatile uint32_t t99 = 463105U;


void f0(void) {
	int16_t x1 = -38;
	uint16_t x2 = UINT16_MAX;
	int32_t x4 = -29576350;
	volatile int32_t t0 = 10;

	t0 = (x1|((x2<x3)<=x4));

	if (t0 != -38) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	uint16_t x6 = UINT16_MAX;
	uint32_t x7 = 92096048U;

	t1 = (x5|((x6<x7)<=x8));

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 774U;
	volatile int16_t x10 = INT16_MIN;
	int16_t x11 = 5;

	t2 = (x9|((x10<x11)<=x12));

	if (t2 != 774) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int8_t x14 = 43;
	volatile int64_t x15 = -828754LL;
	volatile int64_t t3 = INT64_MAX;

	t3 = (x13|((x14<x15)<=x16));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint16_t x19 = 93U;
	int32_t x20 = -1799039;
	int32_t t4 = 498;

	t4 = (x17|((x18<x19)<=x20));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -40;
	int32_t x23 = -206;
	volatile int32_t t5 = 2;

	t5 = (x21|((x22<x23)<=x24));

	if (t5 != -39) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x26 = INT32_MIN;
	static int64_t x27 = INT64_MAX;
	int64_t t6 = 865470LL;

	t6 = (x25|((x26<x27)<=x28));

	if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x29 = INT8_MIN;
	int16_t x30 = -1;
	int8_t x31 = INT8_MIN;
	int64_t x32 = -131007LL;

	t7 = (x29|((x30<x31)<=x32));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x34 = 563513;
	int8_t x35 = INT8_MAX;
	static int8_t x36 = INT8_MAX;
	volatile int64_t t8 = 43063113770356988LL;

	t8 = (x33|((x34<x35)<=x36));

	if (t8 != 8131LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	static int32_t x38 = INT32_MIN;
	int16_t x39 = -67;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = 466;

	t9 = (x37|((x38<x39)<=x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 10416372LLU;
	int64_t x42 = INT64_MAX;
	uint8_t x43 = 51U;
	int8_t x44 = INT8_MIN;

	t10 = (x41|((x42<x43)<=x44));

	if (t10 != 10416372LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -10;
	int64_t x48 = INT64_MIN;
	static int32_t t11 = 10788410;

	t11 = (x45|((x46<x47)<=x48));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	uint64_t x50 = 21LLU;
	int64_t x52 = INT64_MIN;
	volatile int32_t t12 = -1051;

	t12 = (x49|((x50<x51)<=x52));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	int16_t x54 = INT16_MAX;
	uint64_t x55 = UINT64_MAX;
	uint8_t x56 = 36U;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (x53|((x54<x55)<=x56));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MIN;
	static volatile int16_t x58 = -1;
	uint64_t x59 = UINT64_MAX;
	static volatile uint16_t x60 = 4946U;
	int64_t t14 = 6648LL;

	t14 = (x57|((x58<x59)<=x60));

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x62 = INT32_MIN;
	int64_t x63 = 47610571121488LL;
	volatile int32_t t15 = -26;

	t15 = (x61|((x62<x63)<=x64));

	if (t15 != 29) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int32_t x66 = -1;
	uint32_t x68 = UINT32_MAX;
	volatile int64_t t16 = -3719064385363990357LL;

	t16 = (x65|((x66<x67)<=x68));

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	int32_t x71 = 20196448;
	volatile int32_t t17 = -1989156;

	t17 = (x69|((x70<x71)<=x72));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int32_t x74 = 43721;
	volatile uint8_t x75 = UINT8_MAX;
	static int32_t t18 = INT32_MIN;

	t18 = (x73|((x74<x75)<=x76));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = 0;
	int32_t x78 = 5866;
	int32_t x79 = 1865;
	static int32_t x80 = INT32_MIN;

	t19 = (x77|((x78<x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = -1LL;
	volatile int64_t x84 = -715566639682647588LL;
	volatile int32_t t20 = -2778885;

	t20 = (x81|((x82<x83)<=x84));

	if (t20 != 23) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = -1LL;
	int8_t x86 = -17;
	uint64_t x88 = 7829358843104370LLU;
	volatile int64_t t21 = -13LL;

	t21 = (x85|((x86<x87)<=x88));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x90 = 1U;
	volatile int64_t x91 = -1121LL;
	int16_t x92 = INT16_MIN;
	uint32_t t22 = 3U;

	t22 = (x89|((x90<x91)<=x92));

	if (t22 != 38413939U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = INT8_MIN;
	int32_t x96 = INT32_MIN;
	volatile int64_t t23 = 5471LL;

	t23 = (x93|((x94<x95)<=x96));

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = -2143292;
	int16_t x100 = -1;
	volatile int32_t t24 = -69;

	t24 = (x97|((x98<x99)<=x100));

	if (t24 != -2143292) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	uint32_t x102 = 1353U;
	uint16_t x103 = 76U;
	uint8_t x104 = 11U;
	static uint32_t t25 = UINT32_MAX;

	t25 = (x101|((x102<x103)<=x104));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x105 = INT32_MIN;
	volatile int64_t x106 = -1509422804132LL;
	int32_t x108 = INT32_MIN;

	t26 = (x105|((x106<x107)<=x108));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x109 = 426022809LLU;
	volatile uint8_t x110 = 7U;
	volatile int8_t x111 = 4;
	int64_t x112 = INT64_MIN;
	volatile uint64_t t27 = 471432318706286LLU;

	t27 = (x109|((x110<x111)<=x112));

	if (t27 != 426022809LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	uint64_t x114 = 57485602LLU;
	static int16_t x116 = INT16_MIN;
	int32_t t28 = 67939;

	t28 = (x113|((x114<x115)<=x116));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MAX;
	uint16_t x118 = 55U;
	int64_t x120 = -24784803LL;

	t29 = (x117|((x118<x119)<=x120));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	static volatile int32_t x122 = INT32_MIN;
	int32_t x124 = INT32_MIN;

	t30 = (x121|((x122<x123)<=x124));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -22;
	static int32_t x126 = INT32_MIN;
	int64_t x127 = INT64_MIN;
	int32_t t31 = -401;

	t31 = (x125|((x126<x127)<=x128));

	if (t31 != -22) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 63U;
	int32_t x130 = INT32_MIN;
	uint64_t x131 = 214501389LLU;
	int64_t x132 = INT64_MAX;
	int32_t t32 = -251749356;

	t32 = (x129|((x130<x131)<=x132));

	if (t32 != 63) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x134 = 7U;
	int8_t x136 = 15;
	int32_t t33 = -312402111;

	t33 = (x133|((x134<x135)<=x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x138 = INT16_MAX;
	int64_t x139 = INT64_MIN;
	static uint16_t x140 = 1U;
	volatile int32_t t34 = -3899;

	t34 = (x137|((x138<x139)<=x140));

	if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 305;
	volatile int8_t x142 = INT8_MAX;
	static int8_t x144 = INT8_MAX;
	static volatile int32_t t35 = 231695;

	t35 = (x141|((x142<x143)<=x144));

	if (t35 != 305) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 807527817750841809LLU;
	volatile uint8_t x146 = 4U;
	volatile int8_t x147 = -1;
	int16_t x148 = INT16_MIN;
	uint64_t t36 = 12428650598372LLU;

	t36 = (x145|((x146<x147)<=x148));

	if (t36 != 807527817750841809LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = -1;
	uint8_t x150 = UINT8_MAX;
	int32_t x151 = -791299673;
	int32_t x152 = -1;
	volatile int32_t t37 = -1;

	t37 = (x149|((x150<x151)<=x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int16_t x154 = -9987;
	int64_t x156 = -6083LL;
	volatile int32_t t38 = INT32_MIN;

	t38 = (x153|((x154<x155)<=x156));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	static uint16_t x158 = 1250U;
	volatile uint64_t x159 = UINT64_MAX;
	int32_t x160 = INT32_MAX;
	int64_t t39 = 32836LL;

	t39 = (x157|((x158<x159)<=x160));

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = INT32_MIN;
	volatile int8_t x162 = -62;
	uint64_t x163 = UINT64_MAX;
	int16_t x164 = INT16_MIN;
	volatile int32_t t40 = INT32_MIN;

	t40 = (x161|((x162<x163)<=x164));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	int32_t x168 = 122;
	volatile int32_t t41 = -1;

	t41 = (x165|((x166<x167)<=x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = INT16_MIN;
	uint64_t x172 = UINT64_MAX;
	int32_t t42 = 30783;

	t42 = (x169|((x170<x171)<=x172));

	if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = -1;
	int8_t x174 = INT8_MAX;
	uint64_t x176 = 14904459870LLU;
	volatile int32_t t43 = -3;

	t43 = (x173|((x174<x175)<=x176));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = INT8_MIN;
	static int16_t x178 = INT16_MIN;
	static volatile uint64_t x179 = 58780964893LLU;
	volatile int64_t x180 = -52082071LL;
	int32_t t44 = -206456236;

	t44 = (x177|((x178<x179)<=x180));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 55871;
	volatile uint8_t x182 = UINT8_MAX;

	t45 = (x181|((x182<x183)<=x184));

	if (t45 != 55871) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	int32_t x186 = INT32_MIN;
	volatile int32_t t46 = 261024;

	t46 = (x185|((x186<x187)<=x188));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = -3838004261LL;
	static uint16_t x191 = UINT16_MAX;
	int16_t x192 = INT16_MAX;
	volatile int64_t t47 = -769312LL;

	t47 = (x189|((x190<x191)<=x192));

	if (t47 != 13709LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x194 = INT8_MAX;
	int8_t x195 = INT8_MIN;
	static volatile int64_t x196 = INT64_MIN;
	int32_t t48 = INT32_MIN;

	t48 = (x193|((x194<x195)<=x196));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 1;
	uint32_t x198 = 0U;
	static int16_t x199 = INT16_MIN;
	uint32_t x200 = UINT32_MAX;
	volatile int32_t t49 = -236358106;

	t49 = (x197|((x198<x199)<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t t50 = -2835563;

	t50 = (x201|((x202<x203)<=x204));

	if (t50 != 9) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 124U;
	static int64_t x206 = INT64_MAX;
	int8_t x208 = 11;
	volatile int32_t t51 = 1;

	t51 = (x205|((x206<x207)<=x208));

	if (t51 != 125) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 0U;
	volatile int32_t t52 = 29971037;

	t52 = (x209|((x210<x211)<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = INT32_MIN;
	int32_t x214 = -1;
	volatile int64_t x215 = -1LL;
	static uint8_t x216 = 0U;
	volatile int32_t t53 = -57544012;

	t53 = (x213|((x214<x215)<=x216));

	if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int32_t x218 = -595797;
	static int16_t x220 = INT16_MAX;
	static int32_t t54 = 2;

	t54 = (x217|((x218<x219)<=x220));

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MAX;
	int64_t x222 = INT64_MIN;
	int8_t x223 = 15;

	t55 = (x221|((x222<x223)<=x224));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MIN;
	int32_t x226 = -990;
	volatile int64_t x227 = 236LL;
	int16_t x228 = -1;

	t56 = (x225|((x226<x227)<=x228));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	volatile int8_t x230 = -5;
	static volatile uint8_t x231 = 1U;
	int8_t x232 = INT8_MIN;

	t57 = (x229|((x230<x231)<=x232));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 12U;
	int64_t x234 = -12912943793290LL;
	int32_t x235 = INT32_MIN;

	t58 = (x233|((x234<x235)<=x236));

	if (t58 != 12) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = 1823067270LL;
	uint16_t x238 = UINT16_MAX;
	int32_t x239 = INT32_MAX;
	volatile int32_t x240 = INT32_MAX;
	int64_t t59 = -26003124685936957LL;

	t59 = (x237|((x238<x239)<=x240));

	if (t59 != 1823067271LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = INT32_MIN;
	int64_t x242 = INT64_MIN;
	int32_t x243 = -1;
	int32_t x244 = 433;
	int32_t t60 = -106711298;

	t60 = (x241|((x242<x243)<=x244));

	if (t60 != -2147483647) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x245 = -1LL;
	static uint16_t x246 = 771U;
	uint64_t x247 = UINT64_MAX;
	int16_t x248 = 219;
	static volatile int64_t t61 = 196898LL;

	t61 = (x245|((x246<x247)<=x248));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x250 = -2018;
	uint32_t x251 = 284U;
	int64_t x252 = INT64_MIN;
	int64_t t62 = INT64_MAX;

	t62 = (x249|((x250<x251)<=x252));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x254 = 0;
	volatile int32_t x255 = -1;
	volatile int32_t t63 = 45853;

	t63 = (x253|((x254<x255)<=x256));

	if (t63 != 491) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x258 = UINT64_MAX;
	int64_t x259 = INT64_MIN;
	int16_t x260 = INT16_MAX;

	t64 = (x257|((x258<x259)<=x260));

	if (t64 != 1585LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 0;
	volatile uint32_t x262 = 4867U;
	int64_t x263 = INT64_MIN;

	t65 = (x261|((x262<x263)<=x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 552303101U;
	int64_t x268 = -1LL;
	uint32_t t66 = 33U;

	t66 = (x265|((x266<x267)<=x268));

	if (t66 != 552303101U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 41983;
	int64_t x270 = INT64_MIN;
	int16_t x272 = INT16_MIN;
	int32_t t67 = 60;

	t67 = (x269|((x270<x271)<=x272));

	if (t67 != 41983) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x273 = -1LL;
	uint8_t x275 = 5U;
	int64_t t68 = -47LL;

	t68 = (x273|((x274<x275)<=x276));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x277 = INT32_MIN;
	int8_t x278 = -1;
	uint32_t x280 = UINT32_MAX;
	volatile int32_t t69 = 14026;

	t69 = (x277|((x278<x279)<=x280));

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = 105U;
	volatile int64_t x283 = INT64_MIN;
	int32_t t70 = 619635543;

	t70 = (x281|((x282<x283)<=x284));

	if (t70 != 105) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	static volatile int32_t x286 = INT32_MIN;
	static int32_t x287 = -1;
	int16_t x288 = 3;
	int32_t t71 = 8308974;

	t71 = (x285|((x286<x287)<=x288));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x289 = 524073U;
	static uint64_t x290 = 227LLU;
	uint8_t x291 = UINT8_MAX;
	uint8_t x292 = 11U;
	volatile uint32_t t72 = 19161207U;

	t72 = (x289|((x290<x291)<=x292));

	if (t72 != 524073U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = INT32_MIN;
	int16_t x294 = 3;
	uint8_t x295 = 1U;
	int8_t x296 = -1;

	t73 = (x293|((x294<x295)<=x296));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = INT64_MIN;
	volatile int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MAX;
	static int32_t t74 = -45568;

	t74 = (x297|((x298<x299)<=x300));

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -10LL;
	static int64_t x302 = -1LL;
	int8_t x304 = -1;
	static volatile int64_t t75 = -23711LL;

	t75 = (x301|((x302<x303)<=x304));

	if (t75 != -10LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 0U;
	static volatile int32_t x306 = INT32_MIN;
	int8_t x308 = -1;
	volatile int32_t t76 = -116754189;

	t76 = (x305|((x306<x307)<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x311 = INT16_MIN;
	int32_t t77 = 4;

	t77 = (x309|((x310<x311)<=x312));

	if (t77 != 119) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -626513510867575583LL;
	int64_t x314 = INT64_MIN;
	uint16_t x315 = 28752U;
	int32_t x316 = -3702245;
	static int64_t t78 = 822729LL;

	t78 = (x313|((x314<x315)<=x316));

	if (t78 != -626513510867575583LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 757U;
	int16_t x318 = 750;
	uint64_t x319 = UINT64_MAX;
	int16_t x320 = -3;
	int32_t t79 = -99;

	t79 = (x317|((x318<x319)<=x320));

	if (t79 != 757) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	uint64_t x322 = 1843641LLU;
	uint8_t x323 = 25U;
	int16_t x324 = 10;
	volatile int64_t t80 = 2208342LL;

	t80 = (x321|((x322<x323)<=x324));

	if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = INT32_MIN;
	int16_t x327 = INT16_MAX;
	volatile int32_t x328 = INT32_MAX;

	t81 = (x325|((x326<x327)<=x328));

	if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = 1260217;
	uint16_t x330 = 3941U;
	int16_t x331 = INT16_MIN;

	t82 = (x329|((x330<x331)<=x332));

	if (t82 != 1260217) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 74;
	uint32_t x334 = 17537021U;
	int8_t x335 = -1;
	uint64_t x336 = 947LLU;
	int32_t t83 = 987307;

	t83 = (x333|((x334<x335)<=x336));

	if (t83 != 75) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 6U;
	int64_t x338 = INT64_MIN;
	int64_t x339 = 3382572070474897LL;

	t84 = (x337|((x338<x339)<=x340));

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 0U;
	int16_t x342 = 696;
	uint64_t x343 = UINT64_MAX;
	int32_t x344 = -1;
	int32_t t85 = 7361;

	t85 = (x341|((x342<x343)<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 111496582462126510LL;
	int64_t x346 = -1682591LL;
	int8_t x347 = INT8_MIN;
	volatile int64_t t86 = 976776384616690602LL;

	t86 = (x345|((x346<x347)<=x348));

	if (t86 != 111496582462126510LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x350 = -1LL;
	static volatile uint64_t x351 = 3498304312372863LLU;
	volatile int64_t x352 = INT64_MIN;
	int32_t t87 = 28080;

	t87 = (x349|((x350<x351)<=x352));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 72953667U;
	int8_t x354 = INT8_MIN;
	volatile uint32_t x355 = 54U;
	int64_t x356 = -532591201LL;
	volatile uint32_t t88 = 1U;

	t88 = (x353|((x354<x355)<=x356));

	if (t88 != 72953667U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	static int64_t x358 = INT64_MAX;
	int16_t x359 = INT16_MIN;
	static int8_t x360 = INT8_MIN;

	t89 = (x357|((x358<x359)<=x360));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	int8_t x362 = INT8_MAX;
	int32_t x363 = INT32_MAX;
	int32_t x364 = -1;

	t90 = (x361|((x362<x363)<=x364));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = 204179634176345584LL;
	uint64_t x367 = UINT64_MAX;
	int32_t x368 = -49133670;
	int64_t t91 = -91889LL;

	t91 = (x365|((x366<x367)<=x368));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 422605LLU;
	uint8_t x370 = 24U;
	static uint8_t x372 = 3U;
	volatile uint64_t t92 = 8829012817748LLU;

	t92 = (x369|((x370<x371)<=x372));

	if (t92 != 422605LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 1849;
	int32_t x374 = INT32_MIN;
	volatile int8_t x375 = INT8_MIN;
	int32_t x376 = -3608;
	volatile int32_t t93 = 118143180;

	t93 = (x373|((x374<x375)<=x376));

	if (t93 != 1849) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x377 = -1;
	int32_t x378 = INT32_MAX;
	int32_t x379 = -370654;
	int8_t x380 = -14;
	volatile int32_t t94 = -1;

	t94 = (x377|((x378<x379)<=x380));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	uint8_t x382 = 11U;
	int32_t x383 = 35;
	uint8_t x384 = UINT8_MAX;
	volatile int64_t t95 = -8670910475426LL;

	t95 = (x381|((x382<x383)<=x384));

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 1;
	uint16_t x386 = 172U;
	int16_t x387 = 163;
	uint8_t x388 = UINT8_MAX;
	int32_t t96 = -62023536;

	t96 = (x385|((x386<x387)<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = -1LL;
	int32_t x390 = -1;
	int16_t x391 = INT16_MAX;
	uint16_t x392 = 15572U;
	static int64_t t97 = 280LL;

	t97 = (x389|((x390<x391)<=x392));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	uint32_t x394 = 2021U;
	uint16_t x396 = UINT16_MAX;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x393|((x394<x395)<=x396));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x397 = 12U;
	volatile uint64_t x398 = 20721279888LLU;
	static volatile int32_t x400 = INT32_MAX;

	t99 = (x397|((x398<x399)<=x400));

	if (t99 != 13U) { NG(); } else { ; }
	
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

