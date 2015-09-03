#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = -1;
static volatile uint16_t x8 = 78U;
int32_t x10 = 50127;
int8_t x12 = INT8_MIN;
volatile int32_t t3 = -1;
volatile int16_t x17 = -1;
uint8_t x24 = 11U;
static int16_t x26 = -1;
uint8_t x32 = 1U;
static int64_t x41 = 8088LL;
int16_t x44 = -1;
volatile int64_t x54 = INT64_MAX;
int64_t x64 = INT64_MIN;
uint32_t x65 = 426173959U;
volatile int32_t t18 = 1;
static int16_t x82 = INT16_MIN;
int64_t x92 = 32011226717085LL;
int32_t t21 = INT32_MAX;
uint64_t x99 = UINT64_MAX;
volatile int8_t x100 = 10;
volatile int16_t x107 = INT16_MIN;
volatile int32_t x108 = -1;
int64_t t24 = -8165LL;
int32_t t25 = 0;
int32_t x122 = INT32_MAX;
int32_t x124 = 2626;
volatile int32_t t28 = 16720205;
static volatile int64_t x133 = 1LL;
int16_t x134 = INT16_MIN;
uint32_t x139 = UINT32_MAX;
int32_t x145 = INT32_MIN;
uint64_t x146 = UINT64_MAX;
volatile int16_t x159 = INT16_MIN;
uint32_t x160 = 55621190U;
int16_t x162 = -3357;
uint8_t x170 = 1U;
static int16_t x171 = INT16_MIN;
int32_t x182 = 274564486;
volatile int32_t t41 = -748450741;
static int16_t x186 = INT16_MIN;
uint16_t x193 = UINT16_MAX;
int16_t x194 = INT16_MAX;
int32_t t44 = 29770203;
int8_t x208 = INT8_MIN;
volatile uint8_t x212 = UINT8_MAX;
volatile int32_t t49 = -2394;
uint64_t x221 = 61714907573273581LLU;
int8_t x224 = INT8_MIN;
static volatile uint64_t t50 = 23295851180560LLU;
volatile uint64_t t51 = 13102713228LLU;
static uint16_t x231 = UINT16_MAX;
uint8_t x232 = 42U;
int32_t t55 = 6766;
uint64_t x255 = UINT64_MAX;
int32_t t58 = 15029;
int32_t x277 = -44736660;
static int8_t x283 = INT8_MIN;
int8_t x284 = 7;
uint16_t x295 = 3207U;
uint64_t x296 = 21836898922LLU;
volatile int64_t t62 = -1053LL;
int16_t x298 = -1;
volatile int32_t t64 = 11;
int32_t x305 = INT32_MIN;
int32_t x313 = -1;
int32_t x314 = INT32_MIN;
static int64_t x315 = INT64_MIN;
int32_t x318 = -1;
static int32_t x320 = INT32_MAX;
int8_t x325 = INT8_MAX;
int16_t x329 = -164;
static int8_t x330 = 0;
volatile int8_t x334 = INT8_MIN;
static uint64_t x336 = UINT64_MAX;
uint8_t x337 = 100U;
int16_t x339 = -1;
int16_t x340 = -878;
int8_t x352 = 0;
static uint64_t x357 = UINT64_MAX;
uint16_t x373 = 182U;
int8_t x377 = -41;
uint64_t t82 = UINT64_MAX;
volatile int32_t x388 = -1;
static uint64_t x390 = 13444LLU;
uint32_t x393 = UINT32_MAX;
int8_t x396 = INT8_MIN;
int32_t x400 = INT32_MAX;
int64_t x405 = -1LL;
static uint16_t x415 = 1U;
volatile int64_t t90 = -103237LL;
int32_t x417 = INT32_MAX;
int32_t x420 = INT32_MIN;
int32_t t91 = INT32_MAX;
volatile int16_t x421 = INT16_MIN;
volatile uint32_t x427 = UINT32_MAX;
static int32_t x428 = INT32_MAX;
int64_t x429 = INT64_MIN;
int32_t x437 = INT32_MIN;
volatile int32_t x438 = INT32_MAX;
int8_t x448 = INT8_MIN;
static uint64_t x450 = 3222444823LLU;
static volatile int64_t t99 = 4183554708786322LL;


void f0(void) {
	int16_t x1 = -9532;
	int32_t x2 = INT32_MIN;
	int8_t x3 = -3;
	volatile int16_t x4 = -120;
	volatile int32_t t0 = 118117921;

	t0 = (x1|(x2<(x3-x4)));

	if (t0 != -9531) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	static uint32_t x6 = UINT32_MAX;
	int64_t t1 = INT64_MIN;

	t1 = (x5|(x6<(x7-x8)));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	volatile int8_t x11 = INT8_MIN;
	volatile int32_t t2 = -431126;

	t2 = (x9|(x10<(x11-x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 2;
	int16_t x14 = INT16_MIN;
	static int8_t x15 = INT8_MIN;
	uint16_t x16 = UINT16_MAX;

	t3 = (x13|(x14<(x15-x16)));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = -1;
	int64_t x19 = INT64_MIN;
	static int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = -369;

	t4 = (x17|(x18<(x19-x20)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 154283752U;
	int8_t x22 = INT8_MAX;
	int8_t x23 = INT8_MIN;
	uint32_t t5 = 383U;

	t5 = (x21|(x22<(x23-x24)));

	if (t5 != 154283752U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -188991466326668LL;
	int64_t x27 = -1LL;
	uint16_t x28 = UINT16_MAX;
	int64_t t6 = -12345LL;

	t6 = (x25|(x26<(x27-x28)));

	if (t6 != -188991466326668LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MAX;
	volatile int32_t t7 = 3;

	t7 = (x29|(x30<(x31-x32)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	int8_t x34 = INT8_MAX;
	static uint32_t x35 = UINT32_MAX;
	int16_t x36 = INT16_MIN;
	static int64_t t8 = -2039500638LL;

	t8 = (x33|(x34<(x35-x36)));

	if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = -7627313;
	static volatile uint16_t x43 = 3U;
	static int64_t t9 = 0LL;

	t9 = (x41|(x42<(x43-x44)));

	if (t9 != 8089LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	int32_t x46 = INT32_MAX;
	static int64_t x47 = -1LL;
	int64_t x48 = INT64_MIN;
	static int32_t t10 = -1;

	t10 = (x45|(x46<(x47-x48)));

	if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	uint32_t x50 = 569534U;
	int64_t x51 = -3LL;
	volatile int8_t x52 = INT8_MAX;
	int32_t t11 = 1009802027;

	t11 = (x49|(x50<(x51-x52)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 1660465085U;
	uint8_t x55 = 1U;
	int64_t x56 = -1LL;
	volatile uint32_t t12 = 4U;

	t12 = (x53|(x54<(x55-x56)));

	if (t12 != 1660465085U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -1;
	int16_t x58 = INT16_MIN;
	uint16_t x59 = 151U;
	static uint32_t x60 = 130862U;
	static int32_t t13 = -50485511;

	t13 = (x57|(x58<(x59-x60)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = 29;
	int16_t x62 = INT16_MIN;
	uint64_t x63 = 18611LLU;
	static volatile int32_t t14 = 3;

	t14 = (x61|(x62<(x63-x64)));

	if (t14 != 29) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x66 = -1;
	int8_t x67 = INT8_MAX;
	uint64_t x68 = 1429354221LLU;
	uint32_t t15 = 60U;

	t15 = (x65|(x66<(x67-x68)));

	if (t15 != 426173959U) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x69 = INT16_MAX;
	int32_t x70 = -5959;
	uint16_t x71 = 35U;
	static volatile int8_t x72 = INT8_MAX;
	volatile int32_t t16 = 2704137;

	t16 = (x69|(x70<(x71-x72)));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MIN;
	volatile int8_t x74 = INT8_MIN;
	volatile uint16_t x75 = UINT16_MAX;
	static int16_t x76 = 1;
	int32_t t17 = 94234;

	t17 = (x73|(x74<(x75-x76)));

	if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MAX;
	int32_t x78 = INT32_MIN;
	uint8_t x79 = UINT8_MAX;
	int64_t x80 = INT64_MAX;

	t18 = (x77|(x78<(x79-x80)));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x81 = INT8_MIN;
	uint16_t x83 = 178U;
	uint8_t x84 = 7U;
	volatile int32_t t19 = 535;

	t19 = (x81|(x82<(x83-x84)));

	if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -1;
	volatile int16_t x86 = 0;
	int64_t x87 = INT64_MAX;
	volatile uint32_t x88 = 5639923U;
	static int32_t t20 = 103294;

	t20 = (x85|(x86<(x87-x88)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = INT32_MAX;
	int64_t x90 = 1LL;
	uint32_t x91 = 4U;

	t21 = (x89|(x90<(x91-x92)));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -1;
	volatile uint32_t x94 = 13649583U;
	int64_t x95 = -1LL;
	int16_t x96 = 17;
	volatile int32_t t22 = 24035107;

	t22 = (x93|(x94<(x95-x96)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MAX;
	uint32_t x98 = 975798432U;
	volatile int64_t t23 = INT64_MAX;

	t23 = (x97|(x98<(x99-x100)));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x105 = -51LL;
	int64_t x106 = 443641871496LL;

	t24 = (x105|(x106<(x107-x108)));

	if (t24 != -51LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MIN;
	static volatile int64_t x110 = 641447217951938LL;
	int64_t x111 = INT64_MIN;
	int8_t x112 = -5;

	t25 = (x109|(x110<(x111-x112)));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = UINT8_MAX;
	static int32_t x114 = 0;
	uint16_t x115 = UINT16_MAX;
	uint8_t x116 = UINT8_MAX;
	int32_t t26 = 56871;

	t26 = (x113|(x114<(x115-x116)));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x117 = INT64_MAX;
	volatile int32_t x118 = INT32_MIN;
	int8_t x119 = INT8_MIN;
	uint16_t x120 = 5U;
	int64_t t27 = INT64_MAX;

	t27 = (x117|(x118<(x119-x120)));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = UINT8_MAX;
	int16_t x123 = -1;

	t28 = (x121|(x122<(x123-x124)));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x125 = 80019U;
	uint8_t x126 = 3U;
	volatile int64_t x127 = -1LL;
	uint32_t x128 = UINT32_MAX;
	static volatile uint32_t t29 = 235345U;

	t29 = (x125|(x126<(x127-x128)));

	if (t29 != 80019U) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x129 = INT16_MIN;
	static int64_t x130 = -68667047740917LL;
	int64_t x131 = 40831840LL;
	volatile uint8_t x132 = UINT8_MAX;
	volatile int32_t t30 = 2392;

	t30 = (x129|(x130<(x131-x132)));

	if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x135 = 0;
	static uint64_t x136 = 184654584686LLU;
	int64_t t31 = -6902633647636LL;

	t31 = (x133|(x134<(x135-x136)));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = -1;
	static volatile int32_t x138 = INT32_MIN;
	int16_t x140 = 1984;
	volatile int32_t t32 = 0;

	t32 = (x137|(x138<(x139-x140)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x147 = -1LL;
	int8_t x148 = -1;
	int32_t t33 = INT32_MIN;

	t33 = (x145|(x146<(x147-x148)));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = 144858064641866LLU;
	volatile int32_t x154 = 165126;
	int16_t x155 = INT16_MIN;
	int16_t x156 = INT16_MIN;
	volatile uint64_t t34 = 4266254047278846406LLU;

	t34 = (x153|(x154<(x155-x156)));

	if (t34 != 144858064641866LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = 59U;
	uint16_t x158 = 9210U;
	volatile int32_t t35 = -169110026;

	t35 = (x157|(x158<(x159-x160)));

	if (t35 != 59) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = -1424869;
	volatile uint8_t x163 = 0U;
	static int16_t x164 = INT16_MIN;
	volatile int32_t t36 = 1901;

	t36 = (x161|(x162<(x163-x164)));

	if (t36 != -1424869) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x165 = 4U;
	static int16_t x166 = -1;
	int8_t x167 = -5;
	uint16_t x168 = 1758U;
	volatile uint32_t t37 = 565239U;

	t37 = (x165|(x166<(x167-x168)));

	if (t37 != 4U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x169 = 1U;
	static uint16_t x172 = UINT16_MAX;
	volatile int32_t t38 = 820533;

	t38 = (x169|(x170<(x171-x172)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x173 = INT32_MAX;
	int16_t x174 = INT16_MIN;
	int64_t x175 = INT64_MIN;
	int8_t x176 = -1;
	int32_t t39 = INT32_MAX;

	t39 = (x173|(x174<(x175-x176)));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = INT32_MIN;
	volatile int32_t x178 = INT32_MIN;
	int8_t x179 = INT8_MAX;
	int16_t x180 = INT16_MIN;
	int32_t t40 = -709269167;

	t40 = (x177|(x178<(x179-x180)));

	if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x181 = 6U;
	int32_t x183 = -1;
	volatile int16_t x184 = -1;

	t41 = (x181|(x182<(x183-x184)));

	if (t41 != 6) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x185 = 18023463LLU;
	int64_t x187 = -1LL;
	int8_t x188 = -6;
	uint64_t t42 = 3639345482814LLU;

	t42 = (x185|(x186<(x187-x188)));

	if (t42 != 18023463LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = INT32_MIN;
	uint8_t x190 = UINT8_MAX;
	static volatile uint64_t x191 = 711466305LLU;
	int64_t x192 = INT64_MIN;
	int32_t t43 = -404;

	t43 = (x189|(x190<(x191-x192)));

	if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x195 = INT32_MIN;
	uint32_t x196 = 1756998604U;

	t44 = (x193|(x194<(x195-x196)));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x197 = UINT64_MAX;
	uint64_t x198 = 29400433701206027LLU;
	int64_t x199 = -1LL;
	static int16_t x200 = 1;
	volatile uint64_t t45 = UINT64_MAX;

	t45 = (x197|(x198<(x199-x200)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = INT16_MIN;
	static volatile int16_t x206 = -3;
	static int64_t x207 = INT64_MIN;
	volatile int32_t t46 = -223710729;

	t46 = (x205|(x206<(x207-x208)));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = INT64_MAX;
	static int32_t x210 = 30879949;
	static int8_t x211 = INT8_MIN;
	static int64_t t47 = INT64_MAX;

	t47 = (x209|(x210<(x211-x212)));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = 36;
	static int16_t x214 = 664;
	static int16_t x215 = -15;
	static uint8_t x216 = 103U;
	static int32_t t48 = -15289;

	t48 = (x213|(x214<(x215-x216)));

	if (t48 != 36) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x217 = -1;
	static int8_t x218 = -1;
	int8_t x219 = -2;
	int8_t x220 = -1;

	t49 = (x217|(x218<(x219-x220)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x222 = 0;
	static int32_t x223 = INT32_MIN;

	t50 = (x221|(x222<(x223-x224)));

	if (t50 != 61714907573273581LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x225 = 58824040LLU;
	uint16_t x226 = 1851U;
	volatile uint8_t x227 = 3U;
	int8_t x228 = INT8_MIN;

	t51 = (x225|(x226<(x227-x228)));

	if (t51 != 58824040LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = -427485134LL;
	int16_t x230 = INT16_MIN;
	int64_t t52 = -2250302390LL;

	t52 = (x229|(x230<(x231-x232)));

	if (t52 != -427485133LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = UINT32_MAX;
	uint32_t x234 = 11914U;
	uint64_t x235 = 47026962LLU;
	static uint16_t x236 = 5U;
	uint32_t t53 = UINT32_MAX;

	t53 = (x233|(x234<(x235-x236)));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = INT16_MIN;
	static volatile int16_t x238 = INT16_MIN;
	int32_t x239 = 990;
	uint16_t x240 = 19U;
	int32_t t54 = 343214367;

	t54 = (x237|(x238<(x239-x240)));

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x241 = UINT16_MAX;
	volatile uint16_t x242 = 30U;
	int8_t x243 = 1;
	int16_t x244 = INT16_MAX;

	t55 = (x241|(x242<(x243-x244)));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x253 = 50;
	uint64_t x254 = 5655LLU;
	int64_t x256 = -6640LL;
	volatile int32_t t56 = -180714;

	t56 = (x253|(x254<(x255-x256)));

	if (t56 != 51) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x265 = -1;
	uint64_t x266 = 4259788570191055075LLU;
	uint64_t x267 = 621419LLU;
	static volatile int32_t x268 = INT32_MAX;
	static int32_t t57 = 2065;

	t57 = (x265|(x266<(x267-x268)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x269 = -63;
	int64_t x270 = -3LL;
	uint32_t x271 = 521011U;
	uint32_t x272 = 227U;

	t58 = (x269|(x270<(x271-x272)));

	if (t58 != -63) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x273 = -1;
	int64_t x274 = -1LL;
	int16_t x275 = 24;
	int16_t x276 = -1;
	volatile int32_t t59 = -28;

	t59 = (x273|(x274<(x275-x276)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x278 = 489034355LLU;
	int8_t x279 = 46;
	int16_t x280 = INT16_MIN;
	int32_t t60 = -5;

	t60 = (x277|(x278<(x279-x280)));

	if (t60 != -44736660) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = INT16_MIN;
	int32_t x282 = INT32_MAX;
	volatile int32_t t61 = 8625;

	t61 = (x281|(x282<(x283-x284)));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x293 = -1LL;
	int32_t x294 = INT32_MIN;

	t62 = (x293|(x294<(x295-x296)));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x297 = INT64_MIN;
	static uint64_t x299 = 4811172415125LLU;
	int32_t x300 = -1;
	int64_t t63 = INT64_MIN;

	t63 = (x297|(x298<(x299-x300)));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x301 = 22U;
	int8_t x302 = 10;
	static uint32_t x303 = 2299174U;
	static uint64_t x304 = 13LLU;

	t64 = (x301|(x302<(x303-x304)));

	if (t64 != 23) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x306 = -16351;
	uint16_t x307 = 14U;
	static volatile uint64_t x308 = 71033928LLU;
	volatile int32_t t65 = INT32_MIN;

	t65 = (x305|(x306<(x307-x308)));

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x309 = INT32_MIN;
	uint8_t x310 = UINT8_MAX;
	static int16_t x311 = INT16_MAX;
	static int64_t x312 = 727437305196708892LL;
	int32_t t66 = INT32_MIN;

	t66 = (x309|(x310<(x311-x312)));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x316 = -1;
	int32_t t67 = 3117;

	t67 = (x313|(x314<(x315-x316)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x317 = 438U;
	static int8_t x319 = 0;
	int32_t t68 = -66;

	t68 = (x317|(x318<(x319-x320)));

	if (t68 != 438) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x321 = INT32_MAX;
	int16_t x322 = 112;
	static volatile int8_t x323 = -1;
	uint8_t x324 = 111U;
	volatile int32_t t69 = INT32_MAX;

	t69 = (x321|(x322<(x323-x324)));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x326 = INT64_MIN;
	uint64_t x327 = UINT64_MAX;
	static uint16_t x328 = UINT16_MAX;
	int32_t t70 = 1;

	t70 = (x325|(x326<(x327-x328)));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x331 = INT16_MIN;
	uint32_t x332 = 25983753U;
	int32_t t71 = -1009;

	t71 = (x329|(x330<(x331-x332)));

	if (t71 != -163) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x333 = INT8_MIN;
	uint64_t x335 = UINT64_MAX;
	volatile int32_t t72 = -37581411;

	t72 = (x333|(x334<(x335-x336)));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x338 = 3U;
	volatile int32_t t73 = 126670;

	t73 = (x337|(x338<(x339-x340)));

	if (t73 != 101) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x341 = INT16_MAX;
	uint8_t x342 = 1U;
	volatile int32_t x343 = -1;
	int32_t x344 = INT32_MIN;
	int32_t t74 = 25039032;

	t74 = (x341|(x342<(x343-x344)));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x349 = 2U;
	volatile int64_t x350 = INT64_MAX;
	static uint8_t x351 = UINT8_MAX;
	int32_t t75 = 81;

	t75 = (x349|(x350<(x351-x352)));

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x353 = INT8_MIN;
	uint16_t x354 = 7442U;
	static int32_t x355 = -1;
	static uint32_t x356 = UINT32_MAX;
	volatile int32_t t76 = -331456598;

	t76 = (x353|(x354<(x355-x356)));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x358 = -2634;
	uint32_t x359 = 1003U;
	int16_t x360 = -13;
	uint64_t t77 = UINT64_MAX;

	t77 = (x357|(x358<(x359-x360)));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x365 = INT16_MIN;
	int32_t x366 = -1;
	int32_t x367 = INT32_MIN;
	volatile uint64_t x368 = UINT64_MAX;
	int32_t t78 = 16496;

	t78 = (x365|(x366<(x367-x368)));

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x369 = UINT32_MAX;
	int32_t x370 = -1;
	static uint32_t x371 = 210192137U;
	static int16_t x372 = INT16_MIN;
	uint32_t t79 = UINT32_MAX;

	t79 = (x369|(x370<(x371-x372)));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x374 = INT8_MIN;
	volatile int16_t x375 = -1;
	int8_t x376 = 0;
	int32_t t80 = 29766190;

	t80 = (x373|(x374<(x375-x376)));

	if (t80 != 183) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x378 = 3U;
	uint8_t x379 = 26U;
	static uint16_t x380 = 7974U;
	int32_t t81 = 27954007;

	t81 = (x377|(x378<(x379-x380)));

	if (t81 != -41) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x381 = UINT64_MAX;
	static uint16_t x382 = UINT16_MAX;
	volatile int8_t x383 = 55;
	int8_t x384 = -1;

	t82 = (x381|(x382<(x383-x384)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x385 = INT64_MIN;
	static volatile int8_t x386 = INT8_MIN;
	int32_t x387 = 15029811;
	volatile int64_t t83 = 1079LL;

	t83 = (x385|(x386<(x387-x388)));

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x389 = INT16_MAX;
	static int16_t x391 = INT16_MIN;
	volatile int8_t x392 = -1;
	volatile int32_t t84 = -113103;

	t84 = (x389|(x390<(x391-x392)));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x394 = 2057621;
	int32_t x395 = 3719;
	static volatile uint32_t t85 = UINT32_MAX;

	t85 = (x393|(x394<(x395-x396)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x397 = 684325745611843LLU;
	uint32_t x398 = 363178615U;
	int64_t x399 = 31866535LL;
	uint64_t t86 = 10938303253600LLU;

	t86 = (x397|(x398<(x399-x400)));

	if (t86 != 684325745611843LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x401 = -1602058828967LL;
	int16_t x402 = -311;
	int16_t x403 = 1;
	uint16_t x404 = 380U;
	volatile int64_t t87 = -7965LL;

	t87 = (x401|(x402<(x403-x404)));

	if (t87 != -1602058828967LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x406 = 7;
	int64_t x407 = -24744862092211930LL;
	volatile uint32_t x408 = 29850U;
	int64_t t88 = -221077745LL;

	t88 = (x405|(x406<(x407-x408)));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x409 = 0U;
	uint64_t x410 = 76086696411086LLU;
	static uint8_t x411 = UINT8_MAX;
	volatile int16_t x412 = -425;
	int32_t t89 = 11978564;

	t89 = (x409|(x410<(x411-x412)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x413 = INT64_MIN;
	int64_t x414 = INT64_MIN;
	uint64_t x416 = 66245LLU;

	t90 = (x413|(x414<(x415-x416)));

	if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x418 = INT64_MAX;
	int32_t x419 = INT32_MIN;

	t91 = (x417|(x418<(x419-x420)));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x422 = -1;
	static int64_t x423 = -1LL;
	static int32_t x424 = -1;
	static volatile int32_t t92 = -996819146;

	t92 = (x421|(x422<(x423-x424)));

	if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x425 = -44278853028151764LL;
	static volatile int32_t x426 = INT32_MAX;
	int64_t t93 = 45LL;

	t93 = (x425|(x426<(x427-x428)));

	if (t93 != -44278853028151763LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x430 = 22425711323232LLU;
	int16_t x431 = -1;
	int16_t x432 = INT16_MAX;
	int64_t t94 = 105755LL;

	t94 = (x429|(x430<(x431-x432)));

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x433 = 24738224U;
	int32_t x434 = INT32_MAX;
	int8_t x435 = -15;
	uint64_t x436 = UINT64_MAX;
	volatile uint32_t t95 = 12088U;

	t95 = (x433|(x434<(x435-x436)));

	if (t95 != 24738225U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x439 = INT32_MAX;
	uint16_t x440 = 20161U;
	volatile int32_t t96 = INT32_MIN;

	t96 = (x437|(x438<(x439-x440)));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x441 = -1;
	uint32_t x442 = 10780U;
	uint64_t x443 = 50LLU;
	uint8_t x444 = UINT8_MAX;
	static int32_t t97 = -9;

	t97 = (x441|(x442<(x443-x444)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x445 = 815;
	int16_t x446 = INT16_MIN;
	uint8_t x447 = UINT8_MAX;
	volatile int32_t t98 = 12264;

	t98 = (x445|(x446<(x447-x448)));

	if (t98 != 815) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x449 = 0LL;
	volatile uint64_t x451 = 512652574032LLU;
	uint8_t x452 = 1U;

	t99 = (x449|(x450<(x451-x452)));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

