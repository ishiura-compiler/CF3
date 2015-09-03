#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -13330LL;
volatile uint32_t x14 = 1123864721U;
int32_t x17 = INT32_MIN;
static volatile int64_t t4 = 851020833816163135LL;
int64_t x22 = INT64_MIN;
int16_t x26 = -1;
int8_t x29 = -1;
int64_t x45 = 1530990LL;
volatile uint16_t x46 = UINT16_MAX;
uint64_t x48 = 105990388747540LLU;
int8_t x53 = 0;
uint64_t t12 = 7534243631110014432LLU;
static uint64_t x57 = UINT64_MAX;
volatile int32_t x60 = INT32_MIN;
int16_t x62 = INT16_MIN;
int32_t x65 = INT32_MIN;
volatile int32_t x74 = 373805;
uint8_t x79 = UINT8_MAX;
volatile int64_t t17 = 501324LL;
int16_t x82 = INT16_MIN;
int64_t x84 = -1LL;
int32_t x94 = 131353319;
uint64_t x96 = 1026431647LLU;
int32_t x99 = -1;
int16_t x109 = -1;
int32_t x112 = INT32_MAX;
uint64_t t25 = 1180282617LLU;
int32_t x119 = INT32_MIN;
volatile int64_t t27 = -2145793988LL;
int8_t x128 = INT8_MIN;
volatile int32_t t28 = -319124;
volatile uint16_t x150 = 39U;
volatile uint16_t x153 = 12233U;
int32_t t33 = 1860578;
int64_t x162 = -1LL;
volatile int8_t x169 = INT8_MIN;
uint8_t x170 = UINT8_MAX;
volatile int8_t x172 = INT8_MIN;
int32_t x183 = -1;
volatile int32_t t39 = INT32_MAX;
uint32_t x192 = UINT32_MAX;
volatile int8_t x194 = INT8_MAX;
volatile int16_t x201 = -3;
int16_t x202 = -16;
volatile uint8_t x205 = UINT8_MAX;
int32_t x215 = -25423;
int16_t x216 = INT16_MAX;
uint64_t x222 = 3262115354498LLU;
int32_t x224 = -1;
int64_t t49 = -1LL;
uint32_t x230 = 11880925U;
static uint32_t x236 = UINT32_MAX;
volatile uint64_t t51 = 59910665093008LLU;
uint32_t x238 = UINT32_MAX;
int8_t x240 = 10;
int8_t x243 = INT8_MAX;
int8_t x247 = -1;
static volatile int64_t t54 = 189630752307LL;
uint16_t x260 = 3943U;
volatile int64_t x262 = INT64_MIN;
static uint16_t x263 = 2802U;
static volatile uint64_t t57 = UINT64_MAX;
int32_t x265 = 214066;
volatile uint8_t x272 = UINT8_MAX;
int64_t x278 = -50057164LL;
volatile uint64_t x282 = 16565611570403551LLU;
uint8_t x283 = 10U;
int8_t x284 = INT8_MIN;
int64_t x290 = INT64_MIN;
int64_t x292 = -221412LL;
volatile uint64_t t65 = UINT64_MAX;
int64_t x299 = 54719640260LL;
volatile int8_t x300 = INT8_MIN;
uint16_t x303 = UINT16_MAX;
volatile int8_t x313 = -1;
static uint32_t t69 = UINT32_MAX;
volatile uint32_t x317 = UINT32_MAX;
static int32_t x318 = INT32_MIN;
int32_t x321 = -1162473;
int16_t x326 = -1;
int32_t t72 = -21684557;
uint64_t x332 = 555535437408757LLU;
static int16_t x333 = 45;
int8_t x334 = INT8_MAX;
int8_t x336 = -1;
int16_t x337 = -3;
int64_t x345 = 91644022618LL;
uint64_t x346 = 475LLU;
volatile uint32_t x347 = 0U;
static volatile int8_t x349 = -7;
volatile uint64_t t77 = 7554827791023300947LLU;
static int64_t x357 = INT64_MAX;
uint8_t x364 = UINT8_MAX;
uint64_t x365 = 3869891106632LLU;
int16_t x366 = INT16_MIN;
static int16_t x381 = INT16_MAX;
volatile int32_t t84 = -6714;
volatile int32_t t85 = 8154;
static int64_t x398 = INT64_MAX;
static int16_t x400 = INT16_MIN;
uint32_t x401 = 87635U;
volatile int16_t x402 = 53;
int16_t x407 = INT16_MAX;
int8_t x408 = 0;
int16_t x417 = INT16_MAX;
int32_t x420 = INT32_MIN;
int16_t x423 = -597;
static int64_t x424 = INT64_MIN;
volatile int64_t t91 = 8433920467LL;
int64_t x432 = -1LL;
volatile uint32_t t94 = UINT32_MAX;
int16_t x462 = -1;


void f0(void) {
	uint8_t x1 = 0U;
	uint16_t x3 = UINT16_MAX;
	volatile int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 33357027621LL;

	t0 = (x1|(x2&(x3-x4)));

	if (t0 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 144LLU;
	static int64_t x6 = -1LL;
	static uint32_t x7 = 26U;
	int32_t x8 = -1;
	uint64_t t1 = 127559720LLU;

	t1 = (x5|(x6&(x7-x8)));

	if (t1 != 155LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int64_t x10 = -1LL;
	int32_t x11 = INT32_MAX;
	uint8_t x12 = 30U;
	int64_t t2 = -897205349503LL;

	t2 = (x9|(x10&(x11-x12)));

	if (t2 != -31LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int8_t x15 = INT8_MAX;
	int16_t x16 = INT16_MIN;
	volatile uint32_t t3 = 221855U;

	t3 = (x13|(x14&(x15-x16)));

	if (t3 != 2147516433U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	int64_t x19 = -1LL;
	static volatile int32_t x20 = INT32_MIN;

	t4 = (x17|(x18&(x19-x20)));

	if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MAX;
	volatile int32_t x23 = INT32_MIN;
	int64_t x24 = -135810LL;
	volatile int64_t t5 = -2111915237LL;

	t5 = (x21|(x22&(x23-x24)));

	if (t5 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	volatile uint8_t x27 = 6U;
	int16_t x28 = -5975;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (x25|(x26&(x27-x28)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = 5798923598937LL;
	volatile int16_t x31 = INT16_MIN;
	static uint32_t x32 = 134450U;
	int64_t t7 = -180485LL;

	t7 = (x29|(x30&(x31-x32)));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x37 = UINT32_MAX;
	static uint8_t x38 = UINT8_MAX;
	int32_t x39 = 20342;
	int8_t x40 = 0;
	uint32_t t8 = UINT32_MAX;

	t8 = (x37|(x38&(x39-x40)));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	uint64_t x42 = UINT64_MAX;
	static uint16_t x43 = UINT16_MAX;
	int16_t x44 = -1;
	volatile uint64_t t9 = 987770LLU;

	t9 = (x41|(x42&(x43-x44)));

	if (t9 != 2147483647LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x47 = INT16_MAX;
	uint64_t t10 = 1037778LLU;

	t10 = (x45|(x46&(x47-x48)));

	if (t10 != 1572591LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = 2370489;
	static int32_t x50 = 14157;
	int16_t x51 = -1;
	int8_t x52 = -1;
	int32_t t11 = 4811;

	t11 = (x49|(x50&(x51-x52)));

	if (t11 != 2370489) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x54 = 0U;
	uint64_t x55 = UINT64_MAX;
	int16_t x56 = INT16_MIN;

	t12 = (x53|(x54&(x55-x56)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x58 = UINT64_MAX;
	static uint32_t x59 = UINT32_MAX;
	uint64_t t13 = UINT64_MAX;

	t13 = (x57|(x58&(x59-x60)));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = 13;
	static int16_t x63 = -15;
	uint16_t x64 = 27775U;
	int32_t t14 = 17;

	t14 = (x61|(x62&(x63-x64)));

	if (t14 != -32755) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x66 = 132514660U;
	int32_t x67 = INT32_MIN;
	int16_t x68 = INT16_MIN;
	uint32_t t15 = 42277U;

	t15 = (x65|(x66&(x67-x68)));

	if (t15 != 2147483648U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x73 = INT8_MIN;
	static int32_t x75 = -1;
	uint64_t x76 = 27673583LLU;
	static volatile uint64_t t16 = 193507034LLU;

	t16 = (x73|(x74&(x75-x76)));

	if (t16 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x77 = INT32_MIN;
	volatile int64_t x78 = 3240LL;
	uint16_t x80 = 1U;

	t17 = (x77|(x78&(x79-x80)));

	if (t17 != -2147483480LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	int64_t x83 = INT64_MIN;
	volatile int64_t t18 = -6569LL;

	t18 = (x81|(x82&(x83-x84)));

	if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = 673626686363LL;
	volatile uint16_t x86 = UINT16_MAX;
	uint16_t x87 = UINT16_MAX;
	int8_t x88 = 49;
	volatile int64_t t19 = -31LL;

	t19 = (x85|(x86&(x87-x88)));

	if (t19 != 673626718175LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = 85;
	uint16_t x90 = 3016U;
	static int16_t x91 = INT16_MIN;
	int8_t x92 = INT8_MIN;
	volatile int32_t t20 = 924199814;

	t20 = (x89|(x90&(x91-x92)));

	if (t20 != 213) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = 7616968;
	int64_t x95 = INT64_MAX;
	uint64_t t21 = 532764011249802443LLU;

	t21 = (x93|(x94&(x95-x96)));

	if (t21 != 49576424LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MIN;
	int16_t x98 = -1;
	uint64_t x100 = 64LLU;
	uint64_t t22 = 414733LLU;

	t22 = (x97|(x98&(x99-x100)));

	if (t22 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 2535LLU;
	volatile int16_t x102 = 837;
	int8_t x103 = INT8_MIN;
	uint16_t x104 = 9U;
	uint64_t t23 = 12494182187LLU;

	t23 = (x101|(x102&(x103-x104)));

	if (t23 != 3047LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x110 = 190470532;
	static int32_t x111 = -1;
	int32_t t24 = -529192402;

	t24 = (x109|(x110&(x111-x112)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = INT16_MIN;
	uint16_t x114 = 210U;
	uint64_t x115 = 429509403224790LLU;
	static uint8_t x116 = UINT8_MAX;

	t25 = (x113|(x114&(x115-x116)));

	if (t25 != 18446744073709519058LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = 5360;
	volatile int16_t x118 = 1678;
	int16_t x120 = INT16_MIN;
	static volatile int32_t t26 = 955806568;

	t26 = (x117|(x118&(x119-x120)));

	if (t26 != 5360) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x121 = -1;
	int8_t x122 = 1;
	int64_t x123 = -1LL;
	uint8_t x124 = 3U;

	t27 = (x121|(x122&(x123-x124)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x125 = INT8_MIN;
	int8_t x126 = INT8_MIN;
	int32_t x127 = -48;

	t28 = (x125|(x126&(x127-x128)));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x137 = -1819392LL;
	int64_t x138 = 1182170LL;
	static volatile int16_t x139 = INT16_MAX;
	static volatile int8_t x140 = -1;
	static int64_t t29 = 642940368819LL;

	t29 = (x137|(x138&(x139-x140)));

	if (t29 != -1819392LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = -1;
	static volatile int8_t x142 = -1;
	uint16_t x143 = UINT16_MAX;
	volatile uint64_t x144 = 30576883LLU;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = (x141|(x142&(x143-x144)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x145 = INT32_MAX;
	uint32_t x146 = 1553076500U;
	int32_t x147 = INT32_MIN;
	uint32_t x148 = 864U;
	uint32_t t31 = 2597U;

	t31 = (x145|(x146&(x147-x148)));

	if (t31 != 2147483647U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = -1;
	volatile int8_t x151 = INT8_MIN;
	uint64_t x152 = UINT64_MAX;
	uint64_t t32 = UINT64_MAX;

	t32 = (x149|(x150&(x151-x152)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x154 = 2U;
	uint16_t x155 = 24263U;
	int16_t x156 = 207;

	t33 = (x153|(x154&(x155-x156)));

	if (t33 != 12233) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = -9;
	volatile int32_t x158 = -807118;
	int64_t x159 = -1LL;
	static uint32_t x160 = UINT32_MAX;
	volatile int64_t t34 = -948LL;

	t34 = (x157|(x158&(x159-x160)));

	if (t34 != -9LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = -11;
	int8_t x163 = INT8_MAX;
	static int16_t x164 = -1;
	int64_t t35 = -218920556LL;

	t35 = (x161|(x162&(x163-x164)));

	if (t35 != -11LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x171 = -9652;
	int32_t t36 = -1;

	t36 = (x169|(x170&(x171-x172)));

	if (t36 != -52) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = INT8_MIN;
	int64_t x174 = INT64_MIN;
	int32_t x175 = INT32_MIN;
	uint64_t x176 = 20LLU;
	static uint64_t t37 = 131859758318LLU;

	t37 = (x173|(x174&(x175-x176)));

	if (t37 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x177 = INT32_MIN;
	static uint16_t x178 = UINT16_MAX;
	uint32_t x179 = 1455955U;
	int64_t x180 = -1LL;
	static volatile int64_t t38 = 2777354829510814LL;

	t38 = (x177|(x178&(x179-x180)));

	if (t38 != -2147469484LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = INT32_MAX;
	int16_t x182 = INT16_MAX;
	uint8_t x184 = 0U;

	t39 = (x181|(x182&(x183-x184)));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x185 = 99718943LLU;
	uint64_t x186 = 2468025289643159LLU;
	static int16_t x187 = INT16_MIN;
	int16_t x188 = INT16_MIN;
	uint64_t t40 = 27388LLU;

	t40 = (x185|(x186&(x187-x188)));

	if (t40 != 99718943LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x189 = 97288LLU;
	volatile uint64_t x190 = 640740138LLU;
	uint32_t x191 = UINT32_MAX;
	volatile uint64_t t41 = 10844LLU;

	t41 = (x189|(x190&(x191-x192)));

	if (t41 != 97288LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = -7;
	uint64_t x195 = 676344919118445LLU;
	static volatile int32_t x196 = INT32_MAX;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = (x193|(x194&(x195-x196)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = INT64_MIN;
	volatile uint32_t x198 = 2677U;
	uint32_t x199 = 10810440U;
	int16_t x200 = -7411;
	volatile int64_t t43 = 1578485012LL;

	t43 = (x197|(x198&(x199-x200)));

	if (t43 != -9223372036854775759LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x203 = INT32_MAX;
	uint16_t x204 = UINT16_MAX;
	static int32_t t44 = 3729945;

	t44 = (x201|(x202&(x203-x204)));

	if (t44 != -3) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x206 = INT8_MIN;
	int8_t x207 = -5;
	volatile int64_t x208 = 147LL;
	static int64_t t45 = -213288979468LL;

	t45 = (x205|(x206&(x207-x208)));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x213 = INT32_MIN;
	volatile int64_t x214 = INT64_MAX;
	int64_t t46 = 30825LL;

	t46 = (x213|(x214&(x215-x216)));

	if (t46 != -58190LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = INT32_MIN;
	int64_t x218 = 373842709598602LL;
	int16_t x219 = -1;
	volatile int8_t x220 = INT8_MAX;
	volatile int64_t t47 = -475934754547LL;

	t47 = (x217|(x218&(x219-x220)));

	if (t47 != -1981263488LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x221 = INT32_MIN;
	int16_t x223 = INT16_MAX;
	volatile uint64_t t48 = 1167830095LLU;

	t48 = (x221|(x222&(x223-x224)));

	if (t48 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x225 = -1;
	static int64_t x226 = INT64_MIN;
	int64_t x227 = 61258479LL;
	int8_t x228 = 0;

	t49 = (x225|(x226&(x227-x228)));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x229 = 1739772U;
	uint64_t x231 = 20068008LLU;
	uint16_t x232 = UINT16_MAX;
	uint64_t t50 = 120LLU;

	t50 = (x229|(x230&(x231-x232)));

	if (t50 != 3902461LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x233 = 420U;
	uint8_t x234 = 71U;
	volatile uint64_t x235 = UINT64_MAX;

	t51 = (x233|(x234&(x235-x236)));

	if (t51 != 420LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x237 = 60U;
	volatile uint8_t x239 = 1U;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = (x237|(x238&(x239-x240)));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x241 = UINT32_MAX;
	static int32_t x242 = -7;
	int64_t x244 = 31374360371063LL;
	volatile int64_t t53 = -32947076007283569LL;

	t53 = (x241|(x242&(x243-x244)));

	if (t53 != -31370441129985LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = INT64_MAX;
	int32_t x246 = INT32_MIN;
	int16_t x248 = 41;

	t54 = (x245|(x246&(x247-x248)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x249 = INT32_MIN;
	static int8_t x250 = -12;
	int8_t x251 = 0;
	uint64_t x252 = 249442610187140086LLU;
	volatile uint64_t t55 = 5248919188098511423LLU;

	t55 = (x249|(x250&(x251-x252)));

	if (t55 != 18446744071628325888LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = INT64_MIN;
	int64_t x258 = -1LL;
	volatile uint8_t x259 = 1U;
	static int64_t t56 = -41LL;

	t56 = (x257|(x258&(x259-x260)));

	if (t56 != -3942LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x261 = UINT64_MAX;
	int16_t x264 = INT16_MAX;

	t57 = (x261|(x262&(x263-x264)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x266 = 452U;
	int32_t x267 = INT32_MIN;
	int16_t x268 = -1;
	volatile uint32_t t58 = 3377U;

	t58 = (x265|(x266&(x267-x268)));

	if (t58 != 214066U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x269 = 18U;
	uint8_t x270 = 16U;
	uint64_t x271 = 60606LLU;
	uint64_t t59 = 7791530678681LLU;

	t59 = (x269|(x270&(x271-x272)));

	if (t59 != 18LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x273 = 23U;
	int8_t x274 = INT8_MAX;
	static volatile int64_t x275 = -1LL;
	volatile int64_t x276 = INT64_MAX;
	volatile int64_t t60 = -7LL;

	t60 = (x273|(x274&(x275-x276)));

	if (t60 != 23LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x277 = 637;
	uint32_t x279 = UINT32_MAX;
	volatile uint8_t x280 = 1U;
	volatile int64_t t61 = 51788LL;

	t61 = (x277|(x278&(x279-x280)));

	if (t61 != 4244910717LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x281 = 369U;
	static volatile uint64_t t62 = 234865762025LLU;

	t62 = (x281|(x282&(x283-x284)));

	if (t62 != 507LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x285 = UINT64_MAX;
	int64_t x286 = INT64_MIN;
	int8_t x287 = INT8_MAX;
	volatile int16_t x288 = -1;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = (x285|(x286&(x287-x288)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x289 = 13495106U;
	int64_t x291 = -1LL;
	volatile int64_t t64 = -129578449306635254LL;

	t64 = (x289|(x290&(x291-x292)));

	if (t64 != 13495106LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x293 = -1;
	uint64_t x294 = UINT64_MAX;
	static uint8_t x295 = 2U;
	static int32_t x296 = -1;

	t65 = (x293|(x294&(x295-x296)));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x297 = UINT16_MAX;
	static int32_t x298 = -537857;
	volatile int64_t t66 = 528265549240LL;

	t66 = (x297|(x298&(x299-x300)));

	if (t66 != 54719152127LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x301 = -1;
	uint32_t x302 = 49330657U;
	volatile int32_t x304 = INT32_MAX;
	uint32_t t67 = UINT32_MAX;

	t67 = (x301|(x302&(x303-x304)));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x309 = 80U;
	volatile int32_t x310 = 233273468;
	volatile uint16_t x311 = UINT16_MAX;
	uint8_t x312 = UINT8_MAX;
	int32_t t68 = -13556;

	t68 = (x309|(x310&(x311-x312)));

	if (t68 != 30800) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x314 = 832U;
	int32_t x315 = -141569164;
	int8_t x316 = -1;

	t69 = (x313|(x314&(x315-x316)));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x319 = 3827U;
	int16_t x320 = -1;
	volatile uint32_t t70 = UINT32_MAX;

	t70 = (x317|(x318&(x319-x320)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x322 = INT32_MIN;
	int16_t x323 = INT16_MIN;
	uint8_t x324 = 2U;
	volatile int32_t t71 = 236641419;

	t71 = (x321|(x322&(x323-x324)));

	if (t71 != -1162473) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = 0;
	volatile int32_t x327 = INT32_MAX;
	static volatile int8_t x328 = INT8_MAX;

	t72 = (x325|(x326&(x327-x328)));

	if (t72 != 2147483520) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x329 = 20046774LLU;
	uint8_t x330 = 5U;
	uint8_t x331 = 90U;
	volatile uint64_t t73 = 578347LLU;

	t73 = (x329|(x330&(x331-x332)));

	if (t73 != 20046775LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x335 = 215;
	int32_t t74 = 104554;

	t74 = (x333|(x334&(x335-x336)));

	if (t74 != 125) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x338 = 102163744095653LL;
	volatile uint32_t x339 = 464655U;
	uint32_t x340 = UINT32_MAX;
	volatile int64_t t75 = 262442LL;

	t75 = (x337|(x338&(x339-x340)));

	if (t75 != -3LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x348 = -8672538;
	volatile uint64_t t76 = 10254422260LLU;

	t76 = (x345|(x346&(x347-x348)));

	if (t76 != 91644022618LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x350 = INT32_MAX;
	int16_t x351 = 13449;
	uint64_t x352 = 3545708730427926889LLU;

	t77 = (x349|(x350&(x351-x352)));

	if (t77 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x353 = 117;
	int64_t x354 = -1LL;
	int16_t x355 = -1744;
	static int16_t x356 = INT16_MIN;
	int64_t t78 = -24774556305647276LL;

	t78 = (x353|(x354&(x355-x356)));

	if (t78 != 31093LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x358 = INT16_MIN;
	int32_t x359 = INT32_MAX;
	int16_t x360 = INT16_MAX;
	int64_t t79 = INT64_MAX;

	t79 = (x357|(x358&(x359-x360)));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x361 = INT8_MIN;
	int64_t x362 = -489879088018645LL;
	int8_t x363 = 3;
	volatile int64_t t80 = -793927149LL;

	t80 = (x361|(x362&(x363-x364)));

	if (t80 != -128LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x367 = INT32_MIN;
	static int32_t x368 = INT32_MIN;
	volatile uint64_t t81 = 15LLU;

	t81 = (x365|(x366&(x367-x368)));

	if (t81 != 3869891106632LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = INT8_MAX;
	volatile uint64_t x371 = 8201791270946755LLU;
	uint64_t x372 = 3808568LLU;
	uint64_t t82 = 1447391159221LLU;

	t82 = (x369|(x370&(x371-x372)));

	if (t82 != 18446744073709551499LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x373 = 57278;
	int64_t x374 = -4023871410LL;
	uint8_t x375 = UINT8_MAX;
	volatile int16_t x376 = INT16_MAX;
	int64_t t83 = 13598718154416LL;

	t83 = (x373|(x374&(x375-x376)));

	if (t83 != -4023853122LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x382 = -6;
	volatile int16_t x383 = INT16_MIN;
	volatile uint8_t x384 = 86U;

	t84 = (x381|(x382&(x383-x384)));

	if (t84 != -32769) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x389 = 62U;
	int32_t x390 = INT32_MAX;
	int16_t x391 = INT16_MAX;
	uint8_t x392 = UINT8_MAX;

	t85 = (x389|(x390&(x391-x392)));

	if (t85 != 32574) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x397 = INT16_MIN;
	static uint32_t x399 = 12U;
	int64_t t86 = 26886896LL;

	t86 = (x397|(x398&(x399-x400)));

	if (t86 != -32756LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x403 = 0U;
	volatile int16_t x404 = -1;
	static volatile uint32_t t87 = 241422102U;

	t87 = (x401|(x402&(x403-x404)));

	if (t87 != 87635U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x405 = UINT16_MAX;
	static int16_t x406 = INT16_MIN;
	static volatile int32_t t88 = 56517;

	t88 = (x405|(x406&(x407-x408)));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x409 = -1;
	int32_t x410 = INT32_MIN;
	volatile uint16_t x411 = 9U;
	volatile int32_t x412 = 3029;
	volatile int32_t t89 = 25094;

	t89 = (x409|(x410&(x411-x412)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x418 = INT64_MIN;
	static int32_t x419 = -1;
	int64_t t90 = -149315157055LL;

	t90 = (x417|(x418&(x419-x420)));

	if (t90 != 32767LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x421 = -681420519738548251LL;
	int16_t x422 = -1;

	t91 = (x421|(x422&(x423-x424)));

	if (t91 != -17LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x429 = 27818208LLU;
	static int32_t x430 = INT32_MAX;
	int8_t x431 = 0;
	volatile uint64_t t92 = 760239558375637627LLU;

	t92 = (x429|(x430&(x431-x432)));

	if (t92 != 27818209LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x437 = INT16_MIN;
	int64_t x438 = -1LL;
	int8_t x439 = INT8_MIN;
	uint32_t x440 = 967152U;
	int64_t t93 = 9148246503753LL;

	t93 = (x437|(x438&(x439-x440)));

	if (t93 != -17008LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x441 = UINT32_MAX;
	int32_t x442 = INT32_MIN;
	uint32_t x443 = 3171U;
	uint16_t x444 = 17U;

	t94 = (x441|(x442&(x443-x444)));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x445 = INT16_MAX;
	uint64_t x446 = UINT64_MAX;
	int16_t x447 = -1;
	int64_t x448 = INT64_MAX;
	uint64_t t95 = 5681996187837679LLU;

	t95 = (x445|(x446&(x447-x448)));

	if (t95 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x453 = -5;
	static int64_t x454 = 58772582LL;
	uint32_t x455 = 16469980U;
	volatile uint8_t x456 = 77U;
	volatile int64_t t96 = 42022181LL;

	t96 = (x453|(x454&(x455-x456)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x457 = INT16_MIN;
	static volatile int8_t x458 = INT8_MIN;
	uint64_t x459 = UINT64_MAX;
	uint16_t x460 = UINT16_MAX;
	static uint64_t t97 = 110670022216LLU;

	t97 = (x457|(x458&(x459-x460)));

	if (t97 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x461 = 7035508656LLU;
	uint32_t x463 = 63673660U;
	static volatile int16_t x464 = 7;
	volatile uint64_t t98 = 32438594987174929LLU;

	t98 = (x461|(x462&(x463-x464)));

	if (t98 != 7044061109LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x465 = INT8_MIN;
	int32_t x466 = INT32_MIN;
	static int64_t x467 = -1LL;
	static uint64_t x468 = 24LLU;
	uint64_t t99 = 942069936LLU;

	t99 = (x465|(x466&(x467-x468)));

	if (t99 != 18446744073709551488LLU) { NG(); } else { ; }
	
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

