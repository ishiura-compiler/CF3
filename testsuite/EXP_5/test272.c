#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = INT32_MAX;
volatile int32_t t2 = -9;
uint32_t x14 = 203U;
int64_t x15 = -1LL;
int32_t t3 = 807;
int8_t x17 = -1;
static int8_t x20 = INT8_MAX;
volatile int32_t t4 = 5436410;
static uint16_t x21 = 13154U;
int16_t x27 = INT16_MIN;
int64_t x34 = INT64_MIN;
int64_t x37 = -1LL;
int8_t x38 = INT8_MIN;
volatile int8_t x43 = INT8_MIN;
static volatile int16_t x46 = -227;
int8_t x47 = 0;
static volatile int8_t x51 = 3;
static uint64_t x52 = 26LLU;
static volatile uint64_t t12 = 11LLU;
int8_t x54 = INT8_MIN;
int32_t x55 = INT32_MIN;
int64_t t13 = INT64_MIN;
int8_t x57 = -5;
int8_t x61 = INT8_MAX;
static int64_t x64 = -87951LL;
int32_t x71 = -1;
int32_t x81 = INT32_MIN;
volatile int32_t x83 = -2703586;
int64_t x87 = INT64_MIN;
volatile int64_t x88 = INT64_MIN;
static uint64_t x92 = UINT64_MAX;
volatile int8_t x97 = -1;
volatile int32_t x103 = INT32_MAX;
static int32_t x121 = 0;
int8_t x141 = 3;
volatile uint64_t x146 = 109544092599307949LLU;
static uint32_t t34 = UINT32_MAX;
uint32_t t35 = 5050980U;
uint16_t x164 = 56U;
int8_t x168 = INT8_MIN;
volatile int8_t x171 = INT8_MIN;
static int16_t x173 = -1;
int32_t x179 = 1;
static uint16_t x181 = 142U;
uint32_t x184 = 12079085U;
uint8_t x185 = 6U;
int32_t t44 = 565907;
volatile uint64_t x191 = UINT64_MAX;
volatile int16_t x199 = 2552;
uint64_t x209 = UINT64_MAX;
static int32_t t51 = 3782;
volatile int64_t x224 = 21420529565754LL;
volatile int32_t t53 = 16425361;
int16_t x229 = -8;
volatile int64_t x232 = 1134LL;
volatile int8_t x244 = 1;
int32_t t56 = -5488;
uint8_t x250 = 3U;
static volatile uint64_t x252 = 1LLU;
int16_t x253 = 5740;
int32_t t60 = 775;
volatile uint32_t x266 = UINT32_MAX;
int32_t t61 = -7;
static uint64_t x272 = 3583407731LLU;
uint16_t x273 = 3175U;
volatile uint32_t x276 = UINT32_MAX;
volatile int32_t t63 = 330957;
int16_t x277 = INT16_MAX;
int16_t x283 = INT16_MIN;
int32_t t67 = 5;
volatile int32_t t70 = -226850031;
int64_t t71 = 11387542306LL;
uint8_t x309 = 61U;
static int64_t x312 = -1LL;
volatile int32_t t72 = -1661897;
static volatile uint32_t x313 = 1U;
volatile int32_t t74 = INT32_MIN;
uint32_t x321 = UINT32_MAX;
int32_t t78 = 54373;
int64_t x337 = INT64_MIN;
static int32_t x345 = INT32_MIN;
volatile uint8_t x351 = 4U;
int64_t t82 = -239770333526744026LL;
volatile int32_t t85 = 0;
static volatile int32_t t86 = 1619460;
int64_t x374 = INT64_MAX;
int8_t x375 = 13;
volatile uint16_t x377 = 2U;
volatile int16_t x381 = INT16_MIN;
volatile uint64_t x387 = 25LLU;
uint32_t x390 = UINT32_MAX;
int32_t x416 = INT32_MIN;
int8_t x423 = INT8_MIN;
static volatile int32_t t99 = 13913360;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int32_t x2 = INT32_MIN;
	int64_t x3 = INT64_MIN;
	uint32_t x4 = 358051121U;
	int32_t t0 = 469990;

	t0 = (x1|((x2-x3)==x4));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	volatile int8_t x6 = INT8_MIN;
	static int32_t x7 = INT32_MIN;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -1;

	t1 = (x5|((x6-x7)==x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = 0;
	int8_t x11 = 29;
	static int8_t x12 = -13;

	t2 = (x9|((x10-x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int32_t x16 = 19;

	t3 = (x13|((x14-x15)==x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MAX;
	uint64_t x19 = 4979439445641609254LLU;

	t4 = (x17|((x18-x19)==x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -1;
	volatile int32_t x23 = INT32_MIN;
	int64_t x24 = -1LL;
	volatile int32_t t5 = 3350;

	t5 = (x21|((x22-x23)==x24));

	if (t5 != 13154) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	static volatile int64_t x26 = INT64_MIN;
	int32_t x28 = -10365788;
	volatile int64_t t6 = INT64_MAX;

	t6 = (x25|((x26-x27)==x28));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	uint8_t x30 = 1U;
	uint8_t x31 = 23U;
	static int8_t x32 = -1;
	static volatile int64_t t7 = INT64_MIN;

	t7 = (x29|((x30-x31)==x32));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	volatile int64_t x35 = INT64_MIN;
	uint64_t x36 = UINT64_MAX;
	volatile int64_t t8 = INT64_MIN;

	t8 = (x33|((x34-x35)==x36));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x39 = 76538;
	uint32_t x40 = 43563U;
	volatile int64_t t9 = 4706283LL;

	t9 = (x37|((x38-x39)==x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -10;
	int16_t x42 = INT16_MAX;
	volatile uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = -30478870;

	t10 = (x41|((x42-x43)==x44));

	if (t10 != -10) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	static int16_t x48 = -1;
	uint64_t t11 = UINT64_MAX;

	t11 = (x45|((x46-x47)==x48));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 6197035578LLU;
	int64_t x50 = -22427739690LL;

	t12 = (x49|((x50-x51)==x52));

	if (t12 != 6197035578LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint32_t x56 = 1911020534U;

	t13 = (x53|((x54-x55)==x56));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MIN;
	static volatile uint64_t x59 = 22751652126153LLU;
	uint16_t x60 = UINT16_MAX;
	int32_t t14 = -5;

	t14 = (x57|((x58-x59)==x60));

	if (t14 != -5) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x62 = 16679U;
	int8_t x63 = INT8_MIN;
	int32_t t15 = 533771011;

	t15 = (x61|((x62-x63)==x64));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int32_t x66 = INT32_MIN;
	volatile int8_t x67 = -26;
	static uint64_t x68 = UINT64_MAX;
	static int32_t t16 = -3560327;

	t16 = (x65|((x66-x67)==x68));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = 138528LLU;
	int8_t x70 = 20;
	volatile uint8_t x72 = UINT8_MAX;
	volatile uint64_t t17 = 1901LLU;

	t17 = (x69|((x70-x71)==x72));

	if (t17 != 138528LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	int16_t x74 = INT16_MAX;
	int64_t x75 = -1LL;
	volatile int16_t x76 = -1;
	volatile int32_t t18 = 532400013;

	t18 = (x73|((x74-x75)==x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MIN;
	uint8_t x78 = 1U;
	int16_t x79 = -3985;
	int64_t x80 = 462520LL;
	volatile int32_t t19 = -247793152;

	t19 = (x77|((x78-x79)==x80));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = 1LL;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t20 = INT32_MIN;

	t20 = (x81|((x82-x83)==x84));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = INT32_MAX;
	uint64_t x86 = UINT64_MAX;
	volatile int32_t t21 = INT32_MAX;

	t21 = (x85|((x86-x87)==x88));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	int8_t x90 = 11;
	uint16_t x91 = 7492U;
	volatile uint32_t t22 = UINT32_MAX;

	t22 = (x89|((x90-x91)==x92));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 2U;
	int32_t x94 = 12549363;
	int16_t x95 = 19;
	volatile int64_t x96 = INT64_MIN;
	volatile int32_t t23 = -1131789;

	t23 = (x93|((x94-x95)==x96));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x98 = 0U;
	int32_t x99 = -1;
	uint64_t x100 = UINT64_MAX;
	int32_t t24 = 11;

	t24 = (x97|((x98-x99)==x100));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	int64_t x102 = -160043561595809LL;
	volatile int64_t x104 = -6765318LL;
	static int64_t t25 = INT64_MAX;

	t25 = (x101|((x102-x103)==x104));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 42859552U;
	static volatile int32_t x106 = -1;
	int64_t x107 = 8530652LL;
	int32_t x108 = -1;
	volatile uint32_t t26 = 449147344U;

	t26 = (x105|((x106-x107)==x108));

	if (t26 != 42859552U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	uint32_t x114 = 67U;
	volatile uint64_t x115 = UINT64_MAX;
	static int32_t x116 = INT32_MIN;
	volatile int64_t t27 = INT64_MIN;

	t27 = (x113|((x114-x115)==x116));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x117 = -1;
	int8_t x118 = INT8_MIN;
	int16_t x119 = INT16_MAX;
	int32_t x120 = INT32_MIN;
	volatile int32_t t28 = -25;

	t28 = (x117|((x118-x119)==x120));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x122 = INT16_MAX;
	int16_t x123 = INT16_MIN;
	volatile int64_t x124 = -1LL;
	volatile int32_t t29 = 781795459;

	t29 = (x121|((x122-x123)==x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -63;
	int16_t x126 = INT16_MAX;
	volatile int8_t x127 = 1;
	uint32_t x128 = UINT32_MAX;
	static int32_t t30 = 117667941;

	t30 = (x125|((x126-x127)==x128));

	if (t30 != -63) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MAX;
	static int64_t x130 = INT64_MIN;
	int8_t x131 = INT8_MIN;
	int16_t x132 = -77;
	int32_t t31 = -125503345;

	t31 = (x129|((x130-x131)==x132));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x137 = 28U;
	uint16_t x138 = 669U;
	uint64_t x139 = 68611LLU;
	volatile int64_t x140 = -4255421LL;
	int32_t t32 = 680011;

	t32 = (x137|((x138-x139)==x140));

	if (t32 != 28) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x142 = UINT8_MAX;
	int64_t x143 = -1LL;
	static volatile int8_t x144 = INT8_MAX;
	volatile int32_t t33 = -586;

	t33 = (x141|((x142-x143)==x144));

	if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = UINT32_MAX;
	int16_t x147 = INT16_MIN;
	int16_t x148 = 665;

	t34 = (x145|((x146-x147)==x148));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = 1582U;
	uint64_t x150 = 2572768492002LLU;
	volatile int16_t x151 = -1;
	int32_t x152 = INT32_MIN;

	t35 = (x149|((x150-x151)==x152));

	if (t35 != 1582U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x153 = 518250119LLU;
	int16_t x154 = INT16_MIN;
	int16_t x155 = -535;
	int64_t x156 = 1281LL;
	uint64_t t36 = 706800LLU;

	t36 = (x153|((x154-x155)==x156));

	if (t36 != 518250119LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x157 = INT64_MIN;
	int16_t x158 = INT16_MIN;
	static volatile uint64_t x159 = 1776599LLU;
	volatile int8_t x160 = INT8_MIN;
	static volatile int64_t t37 = INT64_MIN;

	t37 = (x157|((x158-x159)==x160));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = 3;
	volatile int16_t x162 = INT16_MIN;
	volatile int64_t x163 = -67LL;
	int32_t t38 = -7425;

	t38 = (x161|((x162-x163)==x164));

	if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = 0U;
	uint64_t x166 = UINT64_MAX;
	int8_t x167 = 5;
	volatile int32_t t39 = 16;

	t39 = (x165|((x166-x167)==x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = INT32_MAX;
	int8_t x170 = INT8_MIN;
	int16_t x172 = INT16_MIN;
	int32_t t40 = INT32_MAX;

	t40 = (x169|((x170-x171)==x172));

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x174 = 901518316046LLU;
	int16_t x175 = INT16_MIN;
	static uint64_t x176 = 11440746LLU;
	static volatile int32_t t41 = 0;

	t41 = (x173|((x174-x175)==x176));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x177 = INT8_MIN;
	int64_t x178 = -1LL;
	uint64_t x180 = 1268579920LLU;
	int32_t t42 = -2;

	t42 = (x177|((x178-x179)==x180));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x182 = UINT8_MAX;
	uint64_t x183 = 1667674LLU;
	int32_t t43 = -228;

	t43 = (x181|((x182-x183)==x184));

	if (t43 != 142) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x186 = UINT16_MAX;
	volatile int32_t x187 = INT32_MAX;
	int16_t x188 = -41;

	t44 = (x185|((x186-x187)==x188));

	if (t44 != 6) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = 430193809;
	int16_t x190 = -40;
	volatile uint16_t x192 = 12U;
	static volatile int32_t t45 = 47370;

	t45 = (x189|((x190-x191)==x192));

	if (t45 != 430193809) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = INT16_MIN;
	static int32_t x198 = 82;
	int8_t x200 = -1;
	static int32_t t46 = -103827;

	t46 = (x197|((x198-x199)==x200));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x201 = INT32_MIN;
	uint16_t x202 = UINT16_MAX;
	int16_t x203 = -1;
	uint8_t x204 = 5U;
	volatile int32_t t47 = INT32_MIN;

	t47 = (x201|((x202-x203)==x204));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x205 = UINT64_MAX;
	int8_t x206 = 1;
	static uint8_t x207 = 4U;
	int16_t x208 = 403;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = (x205|((x206-x207)==x208));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x210 = INT8_MIN;
	uint16_t x211 = 235U;
	uint64_t x212 = 1663840199LLU;
	static uint64_t t49 = UINT64_MAX;

	t49 = (x209|((x210-x211)==x212));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = INT64_MIN;
	int32_t x214 = INT32_MIN;
	volatile int8_t x215 = -25;
	int64_t x216 = -1LL;
	volatile int64_t t50 = INT64_MIN;

	t50 = (x213|((x214-x215)==x216));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x217 = 5U;
	volatile int32_t x218 = 1667;
	static volatile uint32_t x219 = UINT32_MAX;
	volatile uint32_t x220 = UINT32_MAX;

	t51 = (x217|((x218-x219)==x220));

	if (t51 != 5) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x221 = 5U;
	uint16_t x222 = 5U;
	int64_t x223 = 2507495332329LL;
	static volatile int32_t t52 = -146358;

	t52 = (x221|((x222-x223)==x224));

	if (t52 != 5) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x225 = -1;
	uint32_t x226 = 197921932U;
	static int8_t x227 = -1;
	uint64_t x228 = 2LLU;

	t53 = (x225|((x226-x227)==x228));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x230 = INT64_MIN;
	int8_t x231 = INT8_MIN;
	int32_t t54 = -10864945;

	t54 = (x229|((x230-x231)==x232));

	if (t54 != -8) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = INT32_MIN;
	uint16_t x234 = 0U;
	volatile int8_t x235 = 0;
	volatile int16_t x236 = 2;
	volatile int32_t t55 = INT32_MIN;

	t55 = (x233|((x234-x235)==x236));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x241 = 3U;
	volatile int16_t x242 = -1;
	static uint8_t x243 = 21U;

	t56 = (x241|((x242-x243)==x244));

	if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x245 = 3652U;
	int8_t x246 = 1;
	int16_t x247 = INT16_MIN;
	uint64_t x248 = 1229LLU;
	volatile int32_t t57 = 493;

	t57 = (x245|((x246-x247)==x248));

	if (t57 != 3652) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x249 = UINT16_MAX;
	uint32_t x251 = 2U;
	static int32_t t58 = 6;

	t58 = (x249|((x250-x251)==x252));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x254 = -1LL;
	static int64_t x255 = -18125798032377743LL;
	static int32_t x256 = -767;
	volatile int32_t t59 = -426940;

	t59 = (x253|((x254-x255)==x256));

	if (t59 != 5740) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x261 = UINT8_MAX;
	uint8_t x262 = 46U;
	int16_t x263 = -47;
	volatile int64_t x264 = -1LL;

	t60 = (x261|((x262-x263)==x264));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x265 = INT8_MAX;
	static uint8_t x267 = UINT8_MAX;
	int8_t x268 = INT8_MIN;

	t61 = (x265|((x266-x267)==x268));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = 6706;
	int64_t x270 = -1LL;
	volatile int8_t x271 = INT8_MIN;
	volatile int32_t t62 = -1962125;

	t62 = (x269|((x270-x271)==x272));

	if (t62 != 6706) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x274 = 231010587U;
	uint64_t x275 = 95800335925LLU;

	t63 = (x273|((x274-x275)==x276));

	if (t63 != 3175) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x278 = INT8_MIN;
	volatile int16_t x279 = INT16_MIN;
	static int16_t x280 = -8031;
	int32_t t64 = 0;

	t64 = (x277|((x278-x279)==x280));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x281 = 6831U;
	static int32_t x282 = INT32_MIN;
	int32_t x284 = INT32_MIN;
	static volatile int32_t t65 = -2;

	t65 = (x281|((x282-x283)==x284));

	if (t65 != 6831) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = INT16_MIN;
	static int32_t x286 = INT32_MIN;
	uint64_t x287 = UINT64_MAX;
	int32_t x288 = INT32_MAX;
	volatile int32_t t66 = -4;

	t66 = (x285|((x286-x287)==x288));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = INT16_MIN;
	uint32_t x290 = 352U;
	uint64_t x291 = 3924943504898553339LLU;
	int8_t x292 = 9;

	t67 = (x289|((x290-x291)==x292));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x293 = 975U;
	static int64_t x294 = 2030599107508741LL;
	int64_t x295 = INT64_MAX;
	uint8_t x296 = 10U;
	volatile uint32_t t68 = 1368045U;

	t68 = (x293|((x294-x295)==x296));

	if (t68 != 975U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x297 = -1;
	static volatile uint16_t x298 = UINT16_MAX;
	int16_t x299 = INT16_MAX;
	int8_t x300 = 55;
	int32_t t69 = 235;

	t69 = (x297|((x298-x299)==x300));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = 4528755;
	static int8_t x302 = INT8_MAX;
	uint8_t x303 = 1U;
	uint8_t x304 = UINT8_MAX;

	t70 = (x301|((x302-x303)==x304));

	if (t70 != 4528755) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = -1565367057LL;
	static int32_t x306 = -1;
	volatile uint8_t x307 = UINT8_MAX;
	int32_t x308 = 157962;

	t71 = (x305|((x306-x307)==x308));

	if (t71 != -1565367057LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x310 = INT32_MIN;
	int32_t x311 = INT32_MIN;

	t72 = (x309|((x310-x311)==x312));

	if (t72 != 61) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x314 = 5677948865LLU;
	volatile uint16_t x315 = 532U;
	volatile int8_t x316 = 1;
	uint32_t t73 = 580153477U;

	t73 = (x313|((x314-x315)==x316));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x317 = INT32_MIN;
	int8_t x318 = -1;
	int32_t x319 = -2;
	uint32_t x320 = UINT32_MAX;

	t74 = (x317|((x318-x319)==x320));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x322 = 10587410877LLU;
	uint32_t x323 = 18581804U;
	uint32_t x324 = UINT32_MAX;
	static volatile uint32_t t75 = UINT32_MAX;

	t75 = (x321|((x322-x323)==x324));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = INT64_MAX;
	static int16_t x326 = -1;
	static int16_t x327 = INT16_MAX;
	uint64_t x328 = UINT64_MAX;
	volatile int64_t t76 = INT64_MAX;

	t76 = (x325|((x326-x327)==x328));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x329 = 869500094;
	static uint32_t x330 = UINT32_MAX;
	int16_t x331 = INT16_MIN;
	uint32_t x332 = 24063U;
	volatile int32_t t77 = 9;

	t77 = (x329|((x330-x331)==x332));

	if (t77 != 869500094) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = INT8_MIN;
	uint8_t x334 = 6U;
	static uint16_t x335 = 95U;
	volatile int32_t x336 = INT32_MIN;

	t78 = (x333|((x334-x335)==x336));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x338 = UINT8_MAX;
	int64_t x339 = 7608LL;
	uint64_t x340 = UINT64_MAX;
	int64_t t79 = INT64_MIN;

	t79 = (x337|((x338-x339)==x340));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x341 = 13U;
	volatile int32_t x342 = 8;
	int64_t x343 = 1342LL;
	int32_t x344 = INT32_MAX;
	volatile int32_t t80 = 504;

	t80 = (x341|((x342-x343)==x344));

	if (t80 != 13) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x346 = INT16_MIN;
	int64_t x347 = INT64_MIN;
	static int64_t x348 = -1LL;
	volatile int32_t t81 = INT32_MIN;

	t81 = (x345|((x346-x347)==x348));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x349 = 160LL;
	int16_t x350 = INT16_MAX;
	static volatile uint16_t x352 = UINT16_MAX;

	t82 = (x349|((x350-x351)==x352));

	if (t82 != 160LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x353 = 221LLU;
	static volatile uint32_t x354 = UINT32_MAX;
	int8_t x355 = 1;
	int8_t x356 = 0;
	uint64_t t83 = 256898738LLU;

	t83 = (x353|((x354-x355)==x356));

	if (t83 != 221LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x361 = 43LLU;
	int8_t x362 = 13;
	int32_t x363 = INT32_MAX;
	static int32_t x364 = INT32_MIN;
	uint64_t t84 = 4775333597832LLU;

	t84 = (x361|((x362-x363)==x364));

	if (t84 != 43LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x365 = -29;
	int64_t x366 = -1LL;
	static volatile int32_t x367 = -1;
	int32_t x368 = INT32_MIN;

	t85 = (x365|((x366-x367)==x368));

	if (t85 != -29) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = -1;
	int8_t x371 = -1;
	volatile uint16_t x372 = 1109U;

	t86 = (x369|((x370-x371)==x372));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x373 = 145U;
	int8_t x376 = INT8_MAX;
	uint32_t t87 = 9U;

	t87 = (x373|((x374-x375)==x376));

	if (t87 != 145U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x378 = 26U;
	int32_t x379 = INT32_MAX;
	int16_t x380 = INT16_MIN;
	volatile int32_t t88 = 1;

	t88 = (x377|((x378-x379)==x380));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x382 = -14;
	uint64_t x383 = UINT64_MAX;
	int32_t x384 = -33;
	int32_t t89 = 6043913;

	t89 = (x381|((x382-x383)==x384));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x385 = INT8_MIN;
	int8_t x386 = 5;
	static volatile uint32_t x388 = 410523U;
	volatile int32_t t90 = 732994;

	t90 = (x385|((x386-x387)==x388));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x389 = -1;
	int32_t x391 = INT32_MIN;
	volatile int32_t x392 = 583;
	static int32_t t91 = 59292;

	t91 = (x389|((x390-x391)==x392));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x393 = 37U;
	int32_t x394 = 75527;
	volatile uint32_t x395 = 734667U;
	static volatile int16_t x396 = 157;
	int32_t t92 = -142676;

	t92 = (x393|((x394-x395)==x396));

	if (t92 != 37) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x397 = 1651793;
	int64_t x398 = -1LL;
	int64_t x399 = -46477129726194LL;
	static int8_t x400 = -4;
	volatile int32_t t93 = -1;

	t93 = (x397|((x398-x399)==x400));

	if (t93 != 1651793) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x401 = INT8_MAX;
	uint16_t x402 = 153U;
	int8_t x403 = -12;
	int16_t x404 = INT16_MIN;
	int32_t t94 = -202701266;

	t94 = (x401|((x402-x403)==x404));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x405 = UINT64_MAX;
	static volatile int32_t x406 = -1;
	uint32_t x407 = 8U;
	int16_t x408 = 37;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (x405|((x406-x407)==x408));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x409 = -1LL;
	int8_t x410 = -60;
	uint8_t x411 = 48U;
	int16_t x412 = -1;
	int64_t t96 = 13511417723061660LL;

	t96 = (x409|((x410-x411)==x412));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x413 = UINT32_MAX;
	static uint64_t x414 = 28695800756LLU;
	int8_t x415 = INT8_MIN;
	uint32_t t97 = UINT32_MAX;

	t97 = (x413|((x414-x415)==x416));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x417 = INT16_MIN;
	static uint16_t x418 = 13U;
	int32_t x419 = -16;
	int8_t x420 = INT8_MIN;
	volatile int32_t t98 = 537;

	t98 = (x417|((x418-x419)==x420));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x421 = INT8_MIN;
	static int8_t x422 = INT8_MIN;
	int32_t x424 = INT32_MIN;

	t99 = (x421|((x422-x423)==x424));

	if (t99 != -128) { NG(); } else { ; }
	
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

