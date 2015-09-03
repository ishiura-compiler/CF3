#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -2392205194255349LL;
int16_t x5 = 3062;
uint8_t x7 = 3U;
static int32_t x8 = INT32_MAX;
static volatile uint32_t x12 = 0U;
int8_t x18 = -11;
int32_t x23 = -1;
int16_t x40 = -6570;
static volatile uint64_t x41 = UINT64_MAX;
int64_t x42 = -1617495681501LL;
int64_t t10 = 6001788683LL;
static volatile int64_t t12 = 4660382921LL;
int16_t x64 = INT16_MIN;
int8_t x68 = 8;
static int8_t x70 = INT8_MIN;
int8_t x73 = INT8_MAX;
uint8_t x80 = 5U;
int8_t x88 = -1;
int8_t x95 = 2;
int16_t x108 = INT16_MIN;
int8_t x120 = INT8_MAX;
uint16_t x124 = UINT16_MAX;
uint16_t x137 = UINT16_MAX;
volatile int8_t x139 = 53;
uint16_t x143 = UINT16_MAX;
static uint16_t x149 = UINT16_MAX;
int64_t x152 = INT64_MIN;
int64_t t33 = -3858849LL;
int64_t x165 = 27LL;
uint64_t x167 = UINT64_MAX;
uint64_t x169 = 5741371785LLU;
uint16_t x170 = 29U;
int16_t x175 = INT16_MIN;
int16_t x176 = INT16_MIN;
int8_t x184 = -1;
int64_t x187 = INT64_MIN;
uint32_t x190 = 93528U;
uint16_t x191 = UINT16_MAX;
uint64_t x194 = 52LLU;
int8_t x195 = INT8_MIN;
int16_t x198 = INT16_MIN;
uint64_t x200 = 22250LLU;
int8_t x202 = INT8_MAX;
uint64_t t45 = 334LLU;
uint8_t x205 = UINT8_MAX;
uint8_t x208 = UINT8_MAX;
int16_t x220 = 11;
volatile uint64_t x224 = 535646LLU;
int16_t x227 = -1;
int16_t x232 = INT16_MIN;
int8_t x233 = -1;
static int64_t x234 = INT64_MIN;
uint8_t x240 = 1U;
int32_t x243 = -1;
int32_t x246 = 3;
int64_t x247 = 5064086067LL;
int8_t x248 = INT8_MAX;
uint16_t x253 = 3U;
int32_t x257 = 1068084793;
volatile int8_t x265 = INT8_MIN;
int32_t x266 = INT32_MIN;
int64_t x269 = INT64_MIN;
int16_t x271 = INT16_MIN;
int16_t x272 = -1;
int16_t x288 = INT16_MAX;
int16_t x300 = 8299;
static int32_t x306 = INT32_MAX;
uint16_t x314 = 5U;
static volatile int32_t t71 = -7;
volatile int8_t x320 = -1;
int64_t x321 = 2368579334373557880LL;
volatile int64_t t73 = 3722609978LL;
int32_t x332 = -1;
static volatile int32_t x336 = -1;
int32_t x339 = 6883742;
int8_t x345 = 11;
uint32_t x355 = UINT32_MAX;
volatile uint32_t t79 = 4779432U;
int32_t x359 = -62;
static int8_t x360 = 4;
volatile int32_t t80 = 31;
uint8_t x362 = 10U;
uint8_t x364 = 3U;
static volatile int16_t x365 = INT16_MAX;
static int32_t x367 = INT32_MAX;
int8_t x368 = INT8_MIN;
volatile int32_t t83 = -237853;
uint8_t x376 = 7U;
volatile uint32_t x377 = 102117U;
int32_t x381 = INT32_MIN;
volatile int16_t x382 = -51;
int32_t t86 = -62;
int32_t x387 = INT32_MIN;
volatile int64_t t87 = 1LL;
int32_t t88 = -211565;
volatile uint32_t x395 = 69730498U;
int8_t x396 = 0;
volatile uint64_t x403 = UINT64_MAX;
int32_t x404 = INT32_MAX;
static int16_t x412 = -1;
int32_t x413 = -76111;
volatile int64_t t93 = 958843540LL;
int16_t x417 = -434;
static uint32_t x422 = 7U;
int16_t x426 = 1;
int16_t x430 = INT16_MAX;
uint32_t x437 = 209004569U;
uint8_t x438 = 39U;
uint32_t t99 = 2554U;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int32_t x2 = INT32_MIN;
	int16_t x4 = -1;
	volatile int32_t t0 = 7;

	t0 = ((x1*(x2<=x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x6 = 5U;
	int32_t t1 = -120;

	t1 = ((x5*(x6<=x7))*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = 1736;
	static uint16_t x10 = 5720U;
	static int32_t x11 = 6;
	volatile uint32_t t2 = 655U;

	t2 = ((x9*(x10<=x11))*x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	static int16_t x14 = INT16_MIN;
	int32_t x15 = -2002154;
	uint64_t x16 = 844316286LLU;
	volatile uint64_t t3 = 2884624707LLU;

	t3 = ((x13*(x14<=x15))*x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int8_t x19 = -1;
	int16_t x20 = 33;
	static volatile int32_t t4 = -18836;

	t4 = ((x17*(x18<=x19))*x20);

	if (t4 != -4224) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -1LL;
	volatile int64_t x22 = INT64_MAX;
	uint8_t x24 = 5U;
	volatile int64_t t5 = -1478066LL;

	t5 = ((x21*(x22<=x23))*x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = 1449;
	int16_t x26 = INT16_MIN;
	uint64_t x27 = UINT64_MAX;
	int8_t x28 = 1;
	int32_t t6 = -1786253;

	t6 = ((x25*(x26<=x27))*x28);

	if (t6 != 1449) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = INT16_MAX;
	uint64_t x34 = 6156752953424088LLU;
	static int8_t x35 = INT8_MAX;
	int64_t x36 = 13287191599931LL;
	int64_t t7 = -467594944LL;

	t7 = ((x33*(x34<=x35))*x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	uint8_t x38 = 109U;
	static uint8_t x39 = 0U;
	uint64_t t8 = 345308866LLU;

	t8 = ((x37*(x38<=x39))*x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x43 = 3706634515175LLU;
	static volatile uint64_t x44 = 2LLU;
	static uint64_t t9 = 477141123LLU;

	t9 = ((x41*(x42<=x43))*x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = -1LL;
	static int16_t x46 = -1;
	uint64_t x47 = 26607LLU;
	uint8_t x48 = 1U;

	t10 = ((x45*(x46<=x47))*x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MIN;
	int64_t x51 = INT64_MIN;
	int64_t x52 = 2LL;
	int64_t t11 = -4061704212030LL;

	t11 = ((x49*(x50<=x51))*x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x53 = -3424;
	int64_t x54 = 144056708568178782LL;
	int8_t x55 = -1;
	int64_t x56 = -1LL;

	t12 = ((x53*(x54<=x55))*x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MAX;
	int8_t x58 = INT8_MAX;
	uint8_t x59 = 13U;
	static uint32_t x60 = 1463009U;
	static int64_t t13 = 2142794005LL;

	t13 = ((x57*(x58<=x59))*x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	int8_t x62 = INT8_MAX;
	static int8_t x63 = -1;
	volatile int32_t t14 = 1732;

	t14 = ((x61*(x62<=x63))*x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1406;
	uint64_t x66 = 165LLU;
	static uint32_t x67 = UINT32_MAX;
	volatile int32_t t15 = -248601;

	t15 = ((x65*(x66<=x67))*x68);

	if (t15 != -11248) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x69 = 3368;
	static int32_t x71 = INT32_MAX;
	volatile int64_t x72 = 96720407716509LL;
	volatile int64_t t16 = 239540196LL;

	t16 = ((x69*(x70<=x71))*x72);

	if (t16 != 325754333189202312LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x74 = UINT8_MAX;
	int16_t x75 = INT16_MIN;
	static int64_t x76 = INT64_MIN;
	volatile int64_t t17 = 8565337785LL;

	t17 = ((x73*(x74<=x75))*x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = INT16_MIN;
	static volatile uint32_t x78 = 107U;
	static int16_t x79 = INT16_MIN;
	int32_t t18 = 0;

	t18 = ((x77*(x78<=x79))*x80);

	if (t18 != -163840) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = UINT32_MAX;
	static int8_t x82 = INT8_MAX;
	volatile int8_t x83 = INT8_MAX;
	uint8_t x84 = 0U;
	uint32_t t19 = 57U;

	t19 = ((x81*(x82<=x83))*x84);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	static uint16_t x86 = 211U;
	int64_t x87 = INT64_MAX;
	volatile int32_t t20 = -1259;

	t20 = ((x85*(x86<=x87))*x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 85U;
	static uint64_t x94 = 5858LLU;
	volatile int8_t x96 = -1;
	int32_t t21 = 32206914;

	t21 = ((x93*(x94<=x95))*x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = 95;
	volatile int8_t x98 = INT8_MIN;
	uint64_t x99 = UINT64_MAX;
	int32_t x100 = -1;
	volatile int32_t t22 = -7921416;

	t22 = ((x97*(x98<=x99))*x100);

	if (t22 != -95) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = 1028U;
	static volatile int32_t x102 = INT32_MAX;
	static uint8_t x103 = 36U;
	int16_t x104 = 101;
	int32_t t23 = -47717499;

	t23 = ((x101*(x102<=x103))*x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = 618383899;
	int64_t x106 = INT64_MAX;
	int16_t x107 = INT16_MIN;
	volatile int32_t t24 = 313328983;

	t24 = ((x105*(x106<=x107))*x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MIN;
	int64_t x110 = -115273388901978LL;
	volatile int32_t x111 = 3;
	static int16_t x112 = 0;
	static volatile int64_t t25 = 58851582LL;

	t25 = ((x109*(x110<=x111))*x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x113 = INT32_MIN;
	int16_t x114 = INT16_MAX;
	int64_t x115 = INT64_MIN;
	static uint8_t x116 = 7U;
	int32_t t26 = 26478848;

	t26 = ((x113*(x114<=x115))*x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = 217U;
	static int8_t x118 = INT8_MIN;
	int16_t x119 = 87;
	int32_t t27 = 25;

	t27 = ((x117*(x118<=x119))*x120);

	if (t27 != 27559) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MIN;
	uint16_t x122 = UINT16_MAX;
	static volatile uint64_t x123 = 69944160LLU;
	volatile int32_t t28 = 400396179;

	t28 = ((x121*(x122<=x123))*x124);

	if (t28 != -2147450880) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = 15U;
	static int64_t x126 = INT64_MAX;
	volatile int16_t x127 = 1;
	int16_t x128 = -1;
	volatile int32_t t29 = -384;

	t29 = ((x125*(x126<=x127))*x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x133 = 31LLU;
	int32_t x134 = -1;
	static int32_t x135 = -1;
	int16_t x136 = INT16_MIN;
	uint64_t t30 = 17LLU;

	t30 = ((x133*(x134<=x135))*x136);

	if (t30 != 18446744073708535808LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x138 = -1LL;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t31 = 109286243;

	t31 = ((x137*(x138<=x139))*x140);

	if (t31 != 16711425) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x141 = 4;
	int8_t x142 = 14;
	int16_t x144 = INT16_MIN;
	volatile int32_t t32 = 1193303;

	t32 = ((x141*(x142<=x143))*x144);

	if (t32 != -131072) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x150 = 3028;
	int8_t x151 = INT8_MIN;

	t33 = ((x149*(x150<=x151))*x152);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x153 = INT32_MIN;
	uint64_t x154 = UINT64_MAX;
	volatile int64_t x155 = INT64_MIN;
	int16_t x156 = -1;
	int32_t t34 = -25120;

	t34 = ((x153*(x154<=x155))*x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x157 = 15U;
	uint8_t x158 = 2U;
	int16_t x159 = INT16_MIN;
	volatile int64_t x160 = INT64_MAX;
	volatile int64_t t35 = 444017889LL;

	t35 = ((x157*(x158<=x159))*x160);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = UINT8_MAX;
	int32_t x162 = INT32_MIN;
	int64_t x163 = INT64_MIN;
	static int64_t x164 = -16211501429LL;
	int64_t t36 = 267732LL;

	t36 = ((x161*(x162<=x163))*x164);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x166 = -34;
	static int8_t x168 = INT8_MAX;
	int64_t t37 = 43LL;

	t37 = ((x165*(x166<=x167))*x168);

	if (t37 != 3429LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x171 = 8875;
	int64_t x172 = INT64_MAX;
	static uint64_t t38 = 25754581578575LLU;

	t38 = ((x169*(x170<=x171))*x172);

	if (t38 != 9223372031113404023LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = INT8_MIN;
	volatile int8_t x174 = -1;
	volatile int32_t t39 = 4358555;

	t39 = ((x173*(x174<=x175))*x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x181 = INT32_MAX;
	int32_t x182 = -1;
	int8_t x183 = INT8_MAX;
	int32_t t40 = -1;

	t40 = ((x181*(x182<=x183))*x184);

	if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x185 = 21U;
	int8_t x186 = INT8_MAX;
	int16_t x188 = -42;
	volatile int32_t t41 = 1740;

	t41 = ((x185*(x186<=x187))*x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x189 = 4831U;
	int16_t x192 = INT16_MIN;
	static volatile int32_t t42 = -50437906;

	t42 = ((x189*(x190<=x191))*x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = INT32_MIN;
	int64_t x196 = -1LL;
	static volatile int64_t t43 = -229626267028LL;

	t43 = ((x193*(x194<=x195))*x196);

	if (t43 != 2147483648LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x197 = UINT64_MAX;
	int32_t x199 = INT32_MIN;
	volatile uint64_t t44 = 584946102LLU;

	t44 = ((x197*(x198<=x199))*x200);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x201 = 160859062793LLU;
	int32_t x203 = 6;
	int8_t x204 = INT8_MIN;

	t45 = ((x201*(x202<=x203))*x204);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x206 = 400U;
	int32_t x207 = INT32_MIN;
	int32_t t46 = 323347340;

	t46 = ((x205*(x206<=x207))*x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x213 = INT32_MIN;
	static int32_t x214 = -1;
	uint32_t x215 = 605556639U;
	int16_t x216 = -1;
	volatile int32_t t47 = 1;

	t47 = ((x213*(x214<=x215))*x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = -1;
	int8_t x218 = INT8_MIN;
	volatile uint8_t x219 = 12U;
	int32_t t48 = 1;

	t48 = ((x217*(x218<=x219))*x220);

	if (t48 != -11) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x221 = 0;
	int32_t x222 = -1;
	volatile uint8_t x223 = 26U;
	volatile uint64_t t49 = 66LLU;

	t49 = ((x221*(x222<=x223))*x224);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = INT8_MIN;
	int8_t x226 = INT8_MAX;
	int16_t x228 = INT16_MIN;
	static int32_t t50 = -2611;

	t50 = ((x225*(x226<=x227))*x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x229 = INT8_MIN;
	int64_t x230 = INT64_MAX;
	int8_t x231 = -1;
	int32_t t51 = 37103;

	t51 = ((x229*(x230<=x231))*x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x235 = INT8_MIN;
	static volatile int32_t x236 = 2;
	volatile int32_t t52 = 6985522;

	t52 = ((x233*(x234<=x235))*x236);

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x237 = INT16_MIN;
	uint32_t x238 = 14U;
	static int16_t x239 = -1;
	static volatile int32_t t53 = 44;

	t53 = ((x237*(x238<=x239))*x240);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = INT64_MIN;
	static int32_t x242 = 1840981;
	int8_t x244 = -1;
	volatile int64_t t54 = -1275433376476260LL;

	t54 = ((x241*(x242<=x243))*x244);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = 20908;
	static int32_t t55 = -221;

	t55 = ((x245*(x246<=x247))*x248);

	if (t55 != 2655316) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x249 = -1LL;
	volatile uint32_t x250 = 2567509U;
	static int32_t x251 = -336;
	uint16_t x252 = UINT16_MAX;
	int64_t t56 = 11493812LL;

	t56 = ((x249*(x250<=x251))*x252);

	if (t56 != -65535LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x254 = 26U;
	static uint16_t x255 = UINT16_MAX;
	uint16_t x256 = UINT16_MAX;
	int32_t t57 = -1895329;

	t57 = ((x253*(x254<=x255))*x256);

	if (t57 != 196605) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x258 = 1;
	int8_t x259 = INT8_MAX;
	int8_t x260 = -1;
	int32_t t58 = 646;

	t58 = ((x257*(x258<=x259))*x260);

	if (t58 != -1068084793) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x261 = -4969;
	static int16_t x262 = -1;
	int16_t x263 = INT16_MIN;
	int32_t x264 = INT32_MIN;
	volatile int32_t t59 = 102;

	t59 = ((x261*(x262<=x263))*x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x267 = -23;
	int16_t x268 = -1;
	volatile int32_t t60 = 86;

	t60 = ((x265*(x266<=x267))*x268);

	if (t60 != 128) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x270 = 1U;
	static int64_t t61 = -499LL;

	t61 = ((x269*(x270<=x271))*x272);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x273 = INT16_MIN;
	volatile uint64_t x274 = UINT64_MAX;
	uint8_t x275 = 0U;
	uint64_t x276 = 85474046803535613LLU;
	volatile uint64_t t62 = 5192049504789LLU;

	t62 = ((x273*(x274<=x275))*x276);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x277 = 4164092062789113LL;
	int8_t x278 = INT8_MAX;
	int64_t x279 = -4032207509LL;
	static uint32_t x280 = UINT32_MAX;
	int64_t t63 = -1865067086155444911LL;

	t63 = ((x277*(x278<=x279))*x280);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x281 = 2599286U;
	int32_t x282 = INT32_MAX;
	static int16_t x283 = -1;
	static uint8_t x284 = UINT8_MAX;
	uint32_t t64 = 12368599U;

	t64 = ((x281*(x282<=x283))*x284);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x285 = 1118U;
	int8_t x286 = -1;
	int8_t x287 = -15;
	int32_t t65 = 2;

	t65 = ((x285*(x286<=x287))*x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x289 = UINT64_MAX;
	volatile uint16_t x290 = 0U;
	int32_t x291 = -413;
	uint8_t x292 = UINT8_MAX;
	volatile uint64_t t66 = 521048100310378864LLU;

	t66 = ((x289*(x290<=x291))*x292);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = -22;
	uint8_t x298 = UINT8_MAX;
	static volatile uint64_t x299 = UINT64_MAX;
	static int32_t t67 = 214984891;

	t67 = ((x297*(x298<=x299))*x300);

	if (t67 != -182578) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = -1;
	uint64_t x302 = 0LLU;
	int16_t x303 = 0;
	int64_t x304 = -1LL;
	int64_t t68 = -1056123907373704661LL;

	t68 = ((x301*(x302<=x303))*x304);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x305 = 0;
	volatile uint16_t x307 = 43U;
	int8_t x308 = INT8_MIN;
	volatile int32_t t69 = 176;

	t69 = ((x305*(x306<=x307))*x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = -3;
	uint64_t x310 = 70311288235175324LLU;
	int8_t x311 = INT8_MAX;
	uint32_t x312 = 2499U;
	uint32_t t70 = 734229440U;

	t70 = ((x309*(x310<=x311))*x312);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x313 = INT8_MAX;
	uint16_t x315 = 10028U;
	int16_t x316 = -1;

	t71 = ((x313*(x314<=x315))*x316);

	if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x317 = 15480688941LLU;
	int32_t x318 = -69;
	uint32_t x319 = 360726U;
	uint64_t t72 = 31262LLU;

	t72 = ((x317*(x318<=x319))*x320);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x322 = 39U;
	uint16_t x323 = 1U;
	static int8_t x324 = INT8_MIN;

	t73 = ((x321*(x322<=x323))*x324);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = 72;
	volatile int16_t x330 = INT16_MIN;
	uint8_t x331 = UINT8_MAX;
	static volatile int32_t t74 = 1059535;

	t74 = ((x329*(x330<=x331))*x332);

	if (t74 != -72) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x333 = -1LL;
	static int32_t x334 = 49203;
	int16_t x335 = -3;
	int64_t t75 = 104LL;

	t75 = ((x333*(x334<=x335))*x336);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x337 = 63;
	int64_t x338 = INT64_MIN;
	volatile int64_t x340 = -1643512131691LL;
	int64_t t76 = 952LL;

	t76 = ((x337*(x338<=x339))*x340);

	if (t76 != -103541264296533LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x341 = 14380U;
	int64_t x342 = -1LL;
	int32_t x343 = INT32_MIN;
	static int16_t x344 = INT16_MIN;
	static volatile int32_t t77 = -945429476;

	t77 = ((x341*(x342<=x343))*x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x346 = 21017451229338911LL;
	uint64_t x347 = UINT64_MAX;
	uint16_t x348 = 13647U;
	static int32_t t78 = 81845437;

	t78 = ((x345*(x346<=x347))*x348);

	if (t78 != 150117) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x353 = INT8_MIN;
	uint64_t x354 = 8978355803899LLU;
	uint32_t x356 = UINT32_MAX;

	t79 = ((x353*(x354<=x355))*x356);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x357 = UINT16_MAX;
	int16_t x358 = INT16_MIN;

	t80 = ((x357*(x358<=x359))*x360);

	if (t80 != 262140) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x361 = 8U;
	uint16_t x363 = UINT16_MAX;
	static volatile int32_t t81 = -547946516;

	t81 = ((x361*(x362<=x363))*x364);

	if (t81 != 24) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x366 = 268499;
	static volatile int32_t t82 = 15447;

	t82 = ((x365*(x366<=x367))*x368);

	if (t82 != -4194176) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x369 = 626188108;
	int8_t x370 = -1;
	uint64_t x371 = 562652LLU;
	volatile int16_t x372 = 1;

	t83 = ((x369*(x370<=x371))*x372);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x373 = -1LL;
	int16_t x374 = -1;
	int16_t x375 = 4698;
	int64_t t84 = 49363340LL;

	t84 = ((x373*(x374<=x375))*x376);

	if (t84 != -7LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x378 = -1LL;
	int8_t x379 = -28;
	int32_t x380 = -20564;
	volatile uint32_t t85 = 124101U;

	t85 = ((x377*(x378<=x379))*x380);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x383 = 2832U;
	volatile uint16_t x384 = UINT16_MAX;

	t86 = ((x381*(x382<=x383))*x384);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x385 = -1658LL;
	int8_t x386 = 5;
	volatile int32_t x388 = INT32_MAX;

	t87 = ((x385*(x386<=x387))*x388);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x389 = INT16_MAX;
	int64_t x390 = INT64_MIN;
	volatile int8_t x391 = -8;
	int32_t x392 = 3;

	t88 = ((x389*(x390<=x391))*x392);

	if (t88 != 98301) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x393 = 13574U;
	int32_t x394 = -6945;
	volatile int32_t t89 = 406371;

	t89 = ((x393*(x394<=x395))*x396);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x397 = 18;
	static int64_t x398 = -1LL;
	int8_t x399 = INT8_MAX;
	static uint8_t x400 = UINT8_MAX;
	volatile int32_t t90 = -5;

	t90 = ((x397*(x398<=x399))*x400);

	if (t90 != 4590) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x401 = -1;
	int8_t x402 = -1;
	int32_t t91 = 3953;

	t91 = ((x401*(x402<=x403))*x404);

	if (t91 != -2147483647) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x409 = INT16_MAX;
	static int32_t x410 = INT32_MAX;
	int32_t x411 = INT32_MIN;
	volatile int32_t t92 = -122;

	t92 = ((x409*(x410<=x411))*x412);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x414 = 12550178967989LL;
	volatile int64_t x415 = -50943463933029355LL;
	int64_t x416 = 54180164481144254LL;

	t93 = ((x413*(x414<=x415))*x416);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x418 = -98;
	int8_t x419 = INT8_MIN;
	volatile int32_t x420 = INT32_MAX;
	static volatile int32_t t94 = 165436;

	t94 = ((x417*(x418<=x419))*x420);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x421 = INT32_MIN;
	volatile int64_t x423 = INT64_MIN;
	volatile uint16_t x424 = 3U;
	int32_t t95 = -248873;

	t95 = ((x421*(x422<=x423))*x424);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x425 = INT32_MIN;
	int8_t x427 = -3;
	int16_t x428 = INT16_MIN;
	volatile int32_t t96 = 19;

	t96 = ((x425*(x426<=x427))*x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x429 = -24;
	volatile uint64_t x431 = UINT64_MAX;
	uint16_t x432 = 11U;
	int32_t t97 = 67378747;

	t97 = ((x429*(x430<=x431))*x432);

	if (t97 != -264) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x433 = UINT8_MAX;
	volatile uint32_t x434 = 200U;
	int32_t x435 = 9761;
	uint32_t x436 = 61580U;
	uint32_t t98 = 68638U;

	t98 = ((x433*(x434<=x435))*x436);

	if (t98 != 15702900U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x439 = INT64_MIN;
	int8_t x440 = -2;

	t99 = ((x437*(x438<=x439))*x440);

	if (t99 != 0U) { NG(); } else { ; }
	
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

