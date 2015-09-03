#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x16 = 1U;
int16_t x18 = INT16_MAX;
static volatile int32_t x20 = -1162;
int64_t t9 = 1038537LL;
uint64_t x54 = 3064165LLU;
int64_t x56 = INT64_MAX;
uint64_t t14 = UINT64_MAX;
int8_t x62 = INT8_MIN;
int32_t t15 = 11943;
static int16_t x67 = INT16_MAX;
volatile uint64_t t18 = 1LLU;
volatile int32_t x81 = INT32_MIN;
int16_t x84 = 1524;
static int64_t t24 = -2LL;
int64_t x104 = -1LL;
int8_t x105 = INT8_MIN;
uint32_t x111 = UINT32_MAX;
volatile uint32_t t27 = 82U;
static volatile int8_t x113 = -1;
volatile int16_t x114 = -103;
uint64_t t29 = 3LLU;
uint64_t x124 = UINT64_MAX;
volatile int64_t x128 = INT64_MAX;
volatile int16_t x130 = INT16_MIN;
int32_t t32 = -4941944;
static int64_t x134 = INT64_MAX;
int64_t x159 = INT64_MAX;
int8_t x171 = -1;
uint8_t x174 = 3U;
volatile int64_t t41 = -157900LL;
uint64_t x189 = 1015LLU;
static int16_t x191 = INT16_MIN;
static volatile uint64_t t45 = 4928784589782LLU;
int32_t x194 = INT32_MIN;
volatile int64_t t48 = -74LL;
int16_t x210 = -1;
uint64_t x221 = UINT64_MAX;
uint8_t x225 = 5U;
int32_t x226 = INT32_MIN;
int64_t t55 = -105847LL;
int32_t x242 = -1;
int8_t x246 = 9;
static int64_t x253 = INT64_MIN;
volatile int32_t x254 = 1;
int16_t x255 = INT16_MAX;
volatile int32_t t60 = -640042172;
uint8_t x270 = 21U;
static uint64_t x281 = 500671293926645LLU;
static uint64_t t62 = UINT64_MAX;
int64_t x289 = INT64_MAX;
uint64_t x290 = 370967496677LLU;
volatile int8_t x291 = INT8_MAX;
int32_t x296 = 190926445;
int16_t x297 = -1288;
int32_t t65 = -522523;
uint32_t x304 = 417128099U;
static volatile int32_t x310 = INT32_MIN;
volatile int32_t t67 = -218296742;
static volatile int64_t t68 = 1513LL;
int32_t x317 = INT32_MIN;
uint32_t x332 = 6U;
uint64_t t77 = 44776796LLU;
uint64_t x370 = UINT64_MAX;
int8_t x371 = INT8_MAX;
uint64_t x374 = 25406064748LLU;
int32_t x381 = 131929;
volatile uint32_t x382 = UINT32_MAX;
uint64_t x384 = UINT64_MAX;
uint32_t t83 = UINT32_MAX;
static volatile int64_t x389 = INT64_MAX;
int16_t x390 = -1;
static volatile int32_t t86 = 209;
int8_t x401 = INT8_MIN;
uint32_t x404 = 217967138U;
volatile uint32_t t87 = 11241U;
volatile uint32_t t89 = 0U;
int64_t x413 = INT64_MIN;
static int8_t x416 = 13;
volatile uint32_t x422 = UINT32_MAX;
uint32_t x423 = 6U;
volatile uint32_t t92 = UINT32_MAX;
static uint16_t x427 = UINT16_MAX;
int8_t x429 = -1;
static int64_t x438 = INT64_MAX;
volatile int32_t x441 = INT32_MIN;
static int32_t x444 = 5;


void f0(void) {
	uint8_t x1 = 12U;
	uint64_t x2 = 3881964300831582992LLU;
	int32_t x3 = INT32_MIN;
	volatile int8_t x4 = INT8_MIN;
	uint64_t t0 = 7242224744441040LLU;

	t0 = (x1|((x2-x3)|x4));

	if (t0 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 339U;
	uint64_t x6 = 37314805242532LLU;
	int16_t x7 = INT16_MIN;
	int32_t x8 = INT32_MAX;
	volatile uint64_t t1 = 6680323593246218464LLU;

	t1 = (x5|((x6-x7)|x8));

	if (t1 != 37316823351295LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1;
	int32_t x10 = INT32_MAX;
	uint64_t x11 = UINT64_MAX;
	int16_t x12 = INT16_MIN;
	uint64_t t2 = UINT64_MAX;

	t2 = (x9|((x10-x11)|x12));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	int8_t x14 = -7;
	int8_t x15 = 27;
	volatile int32_t t3 = 1;

	t3 = (x13|((x14-x15)|x16));

	if (t3 != -33) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -60;
	volatile int32_t x19 = INT32_MAX;
	int32_t t4 = 4879;

	t4 = (x17|((x18-x19)|x20));

	if (t4 != -10) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 7U;
	uint8_t x22 = 46U;
	static volatile int8_t x23 = INT8_MIN;
	int64_t x24 = INT64_MIN;
	static volatile int64_t t5 = -16980481496646LL;

	t5 = (x21|((x22-x23)|x24));

	if (t5 != -9223372036854775633LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int64_t x26 = -1LL;
	static volatile uint64_t x27 = UINT64_MAX;
	int32_t x28 = INT32_MIN;
	volatile uint64_t t6 = 381435224LLU;

	t6 = (x25|((x26-x27)|x28));

	if (t6 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 925;
	int64_t x30 = -65553952521LL;
	int16_t x31 = -1;
	int16_t x32 = -1;
	int64_t t7 = 4302LL;

	t7 = (x29|((x30-x31)|x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 265084480850354880LLU;
	uint32_t x34 = UINT32_MAX;
	int8_t x35 = -1;
	uint64_t x36 = 247148030124LLU;
	uint64_t t8 = 470248505528696975LLU;

	t8 = (x33|((x34-x35)|x36));

	if (t8 != 265084556064844524LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	static int8_t x38 = 0;
	int16_t x39 = INT16_MIN;
	int64_t x40 = 1027149431269291952LL;

	t9 = (x37|((x38-x39)|x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int32_t x42 = -1;
	static int16_t x43 = INT16_MAX;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = -14;

	t10 = (x41|((x42-x43)|x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint16_t x46 = 14054U;
	static uint32_t x47 = UINT32_MAX;
	int64_t x48 = -110701LL;
	volatile int64_t t11 = 1090417378645LL;

	t11 = (x45|((x46-x47)|x48));

	if (t11 != -9LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 124027105U;
	static int32_t x50 = 96895797;
	volatile int8_t x51 = 16;
	int16_t x52 = INT16_MAX;
	volatile uint32_t t12 = 500562U;

	t12 = (x49|((x50-x51)|x52));

	if (t12 != 132579327U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = UINT32_MAX;
	static int8_t x55 = INT8_MIN;
	uint64_t t13 = 199LLU;

	t13 = (x53|((x54-x55)|x56));

	if (t13 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	volatile int32_t x58 = INT32_MAX;
	uint16_t x59 = 19U;
	int64_t x60 = -1LL;

	t14 = (x57|((x58-x59)|x60));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = -3258233;
	int32_t x63 = INT32_MIN;
	volatile int16_t x64 = INT16_MAX;

	t15 = (x61|((x62-x63)|x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	static int8_t x66 = INT8_MIN;
	uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = -2495116;

	t16 = (x65|((x66-x67)|x68));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = 131732912U;
	int8_t x70 = INT8_MIN;
	volatile int8_t x71 = -1;
	int32_t x72 = INT32_MIN;
	volatile uint32_t t17 = 239473U;

	t17 = (x69|((x70-x71)|x72));

	if (t17 != 4294967217U) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	volatile uint64_t x74 = 2337913175506626846LLU;
	int16_t x75 = 3859;
	uint32_t x76 = 2U;

	t18 = (x73|((x74-x75)|x76));

	if (t18 != 18446744073538050571LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	int8_t x78 = INT8_MAX;
	int16_t x79 = INT16_MAX;
	uint8_t x80 = UINT8_MAX;
	int64_t t19 = 2103821468LL;

	t19 = (x77|((x78-x79)|x80));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = -2248;
	int64_t x83 = INT64_MIN;
	volatile int64_t t20 = -3512352207LL;

	t20 = (x81|((x82-x83)|x84));

	if (t20 != -2052LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	static int16_t x86 = INT16_MIN;
	uint64_t x87 = 2365545452217809759LLU;
	volatile uint32_t x88 = 3731U;
	static volatile uint64_t t21 = 108841631257LLU;

	t21 = (x85|((x86-x87)|x88));

	if (t21 != 18446744073709538995LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	uint64_t x90 = 2171165294915987LLU;
	int32_t x91 = INT32_MIN;
	volatile uint8_t x92 = UINT8_MAX;
	volatile uint64_t t22 = 1715930168LLU;

	t22 = (x89|((x90-x91)|x92));

	if (t22 != 2171167442399743LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 53U;
	int64_t x94 = 3173775583LL;
	int32_t x95 = 232;
	int32_t x96 = INT32_MAX;
	static int64_t t23 = 17196683011685801LL;

	t23 = (x93|((x94-x95)|x96));

	if (t23 != 4294967295LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = -1;
	int64_t x98 = -1LL;
	int32_t x99 = INT32_MIN;
	static int8_t x100 = INT8_MIN;

	t24 = (x97|((x98-x99)|x100));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MIN;
	uint32_t x102 = 201U;
	uint64_t x103 = UINT64_MAX;
	static volatile uint64_t t25 = UINT64_MAX;

	t25 = (x101|((x102-x103)|x104));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x106 = 2510LLU;
	volatile int64_t x107 = INT64_MIN;
	uint32_t x108 = 6U;
	uint64_t t26 = 60618LLU;

	t26 = (x105|((x106-x107)|x108));

	if (t26 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MAX;
	int16_t x110 = 935;
	volatile int16_t x112 = INT16_MAX;

	t27 = (x109|((x110-x111)|x112));

	if (t27 != 32767U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x115 = INT64_MIN;
	int16_t x116 = INT16_MIN;
	int64_t t28 = -28009968181344LL;

	t28 = (x113|((x114-x115)|x116));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 43293;
	static int32_t x118 = 1605384;
	uint64_t x119 = 1492LLU;
	uint32_t x120 = 13732389U;

	t29 = (x117|((x118-x119)|x120));

	if (t29 != 14285629LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = UINT32_MAX;
	volatile uint32_t x122 = 101332U;
	uint64_t x123 = 34647LLU;
	uint64_t t30 = UINT64_MAX;

	t30 = (x121|((x122-x123)|x124));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = -203154910309984993LL;
	static uint64_t x126 = 15012648LLU;
	int32_t x127 = INT32_MIN;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = (x125|((x126-x127)|x128));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	uint16_t x131 = UINT16_MAX;
	static volatile int8_t x132 = INT8_MIN;

	t32 = (x129|((x130-x131)|x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	static uint8_t x135 = 6U;
	int8_t x136 = -1;
	int64_t t33 = -154744LL;

	t33 = (x133|((x134-x135)|x136));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 286563;
	int8_t x138 = INT8_MIN;
	volatile int8_t x139 = 6;
	static int32_t x140 = INT32_MIN;
	int32_t t34 = 1;

	t34 = (x137|((x138-x139)|x140));

	if (t34 != -133) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x145 = INT8_MAX;
	int8_t x146 = INT8_MIN;
	volatile int16_t x147 = INT16_MIN;
	volatile int16_t x148 = INT16_MAX;
	volatile int32_t t35 = 286924;

	t35 = (x145|((x146-x147)|x148));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = -1LL;
	volatile uint32_t x150 = 49026U;
	uint8_t x151 = 1U;
	int16_t x152 = 14228;
	static volatile int64_t t36 = 26637177097406LL;

	t36 = (x149|((x150-x151)|x152));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x153 = 82547019LLU;
	uint16_t x154 = 22U;
	static uint64_t x155 = 74087812936548605LLU;
	uint16_t x156 = UINT16_MAX;
	uint64_t t37 = 0LLU;

	t37 = (x153|((x154-x155)|x156));

	if (t37 != 18372656260844355583LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = 1;
	uint16_t x158 = UINT16_MAX;
	uint64_t x160 = UINT64_MAX;
	uint64_t t38 = UINT64_MAX;

	t38 = (x157|((x158-x159)|x160));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = -3256681530LL;
	uint64_t x166 = UINT64_MAX;
	int32_t x167 = INT32_MIN;
	static uint64_t x168 = UINT64_MAX;
	uint64_t t39 = UINT64_MAX;

	t39 = (x165|((x166-x167)|x168));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = 20135;
	int64_t x170 = INT64_MIN;
	int64_t x172 = 183371162580947237LL;
	int64_t t40 = 12005385545LL;

	t40 = (x169|((x170-x171)|x172));

	if (t40 != -9040000874273808473LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x173 = UINT16_MAX;
	uint8_t x175 = 0U;
	int64_t x176 = 468609LL;

	t41 = (x173|((x174-x175)|x176));

	if (t41 != 524287LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = -1;
	static int16_t x178 = INT16_MIN;
	static uint32_t x179 = 401U;
	int16_t x180 = 518;
	uint32_t t42 = UINT32_MAX;

	t42 = (x177|((x178-x179)|x180));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x181 = 103357070U;
	int64_t x182 = -500354332LL;
	static int32_t x183 = INT32_MIN;
	static uint32_t x184 = 1427836U;
	static volatile int64_t t43 = 61866561571695898LL;

	t43 = (x181|((x182-x183)|x184));

	if (t43 != 1715338238LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = INT64_MIN;
	uint64_t x186 = 198LLU;
	static uint8_t x187 = UINT8_MAX;
	static volatile int64_t x188 = -1LL;
	uint64_t t44 = UINT64_MAX;

	t44 = (x185|((x186-x187)|x188));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x190 = 33U;
	volatile int64_t x192 = INT64_MIN;

	t45 = (x189|((x190-x191)|x192));

	if (t45 != 9223372036854809591LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MAX;
	int64_t x195 = -1LL;
	volatile uint32_t x196 = 2U;
	int64_t t46 = 900346392LL;

	t46 = (x193|((x194-x195)|x196));

	if (t46 != -2147450881LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MAX;
	static int32_t x198 = -1;
	volatile int8_t x199 = INT8_MAX;
	uint32_t x200 = UINT32_MAX;
	static volatile uint32_t t47 = UINT32_MAX;

	t47 = (x197|((x198-x199)|x200));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = INT32_MAX;
	uint32_t x206 = 70U;
	int64_t x207 = -482606016LL;
	int16_t x208 = 80;

	t48 = (x205|((x206-x207)|x208));

	if (t48 != 2147483647LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = INT64_MAX;
	int16_t x211 = INT16_MIN;
	int8_t x212 = INT8_MIN;
	volatile int64_t t49 = -165LL;

	t49 = (x209|((x210-x211)|x212));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x213 = 722U;
	uint32_t x214 = UINT32_MAX;
	static int16_t x215 = -14;
	int16_t x216 = -1;
	static uint32_t t50 = UINT32_MAX;

	t50 = (x213|((x214-x215)|x216));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x217 = 381440803836LLU;
	volatile int8_t x218 = INT8_MIN;
	uint16_t x219 = 2U;
	static int32_t x220 = -486456287;
	uint64_t t51 = UINT64_MAX;

	t51 = (x217|((x218-x219)|x220));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x222 = 15;
	volatile int8_t x223 = 3;
	static uint32_t x224 = 17U;
	uint64_t t52 = UINT64_MAX;

	t52 = (x221|((x222-x223)|x224));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x227 = -1LL;
	static int16_t x228 = INT16_MAX;
	int64_t t53 = -336932425560943228LL;

	t53 = (x225|((x226-x227)|x228));

	if (t53 != -2147450881LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x233 = 25940U;
	static int32_t x234 = INT32_MAX;
	uint32_t x235 = 1120718U;
	static int32_t x236 = INT32_MIN;
	volatile uint32_t t54 = 2266U;

	t54 = (x233|((x234-x235)|x236));

	if (t54 != 4293846901U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x237 = INT16_MIN;
	uint8_t x238 = UINT8_MAX;
	int8_t x239 = INT8_MIN;
	int64_t x240 = INT64_MIN;

	t55 = (x237|((x238-x239)|x240));

	if (t55 != -32385LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = UINT32_MAX;
	static int32_t x243 = -7389;
	static uint64_t x244 = 91526540979044LLU;
	uint64_t t56 = 18435000LLU;

	t56 = (x241|((x242-x243)|x244));

	if (t56 != 91530048045055LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = INT16_MIN;
	static uint64_t x247 = UINT64_MAX;
	uint64_t x248 = 8081807LLU;
	uint64_t t57 = 694101LLU;

	t57 = (x245|((x246-x247)|x248));

	if (t57 != 18446744073709539727LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = UINT64_MAX;
	volatile int32_t x250 = -1;
	int32_t x251 = 352;
	volatile uint32_t x252 = UINT32_MAX;
	static volatile uint64_t t58 = UINT64_MAX;

	t58 = (x249|((x250-x251)|x252));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x256 = -1;
	int64_t t59 = 0LL;

	t59 = (x253|((x254-x255)|x256));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = INT16_MIN;
	int16_t x266 = 1;
	int8_t x267 = INT8_MIN;
	int16_t x268 = 17;

	t60 = (x265|((x266-x267)|x268));

	if (t60 != -32623) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x269 = 1U;
	static volatile int8_t x271 = -22;
	int8_t x272 = -1;
	volatile uint32_t t61 = UINT32_MAX;

	t61 = (x269|((x270-x271)|x272));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x282 = UINT64_MAX;
	uint16_t x283 = 195U;
	uint16_t x284 = 11U;

	t62 = (x281|((x282-x283)|x284));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x292 = INT32_MIN;
	static uint64_t t63 = UINT64_MAX;

	t63 = (x289|((x290-x291)|x292));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x293 = -1;
	int16_t x294 = -1;
	uint8_t x295 = 1U;
	int32_t t64 = -235;

	t64 = (x293|((x294-x295)|x296));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x298 = -1;
	static volatile int8_t x299 = -1;
	int32_t x300 = -1;

	t65 = (x297|((x298-x299)|x300));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x301 = -1LL;
	static uint16_t x302 = UINT16_MAX;
	int8_t x303 = -1;
	static int64_t t66 = 12066809713301LL;

	t66 = (x301|((x302-x303)|x304));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x309 = 15U;
	int8_t x311 = INT8_MIN;
	int32_t x312 = -1;

	t67 = (x309|((x310-x311)|x312));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x313 = INT64_MIN;
	static volatile int8_t x314 = INT8_MIN;
	volatile uint16_t x315 = 91U;
	int32_t x316 = INT32_MIN;

	t68 = (x313|((x314-x315)|x316));

	if (t68 != -219LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x318 = INT64_MIN;
	uint64_t x319 = 3078999646619450LLU;
	uint32_t x320 = 1619170U;
	uint64_t t69 = 163357597LLU;

	t69 = (x317|((x318-x319)|x320));

	if (t69 != 18446744071693974758LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x321 = INT8_MAX;
	static int32_t x322 = INT32_MAX;
	uint16_t x323 = UINT16_MAX;
	int64_t x324 = 3361626343118LL;
	int64_t t70 = -190619160LL;

	t70 = (x321|((x322-x323)|x324));

	if (t70 != 3362959345407LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x325 = INT16_MIN;
	int32_t x326 = -1;
	static int64_t x327 = INT64_MIN;
	int8_t x328 = INT8_MIN;
	int64_t t71 = 16443776340827270LL;

	t71 = (x325|((x326-x327)|x328));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x329 = INT16_MIN;
	int64_t x330 = -27626041472509LL;
	uint64_t x331 = UINT64_MAX;
	uint64_t t72 = 8259810072LLU;

	t72 = (x329|((x330-x331)|x332));

	if (t72 != 18446744073709521414LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x341 = INT8_MIN;
	int32_t x342 = INT32_MIN;
	volatile uint32_t x343 = 348896204U;
	volatile uint32_t x344 = 10U;
	volatile uint32_t t73 = 2171805U;

	t73 = (x341|((x342-x343)|x344));

	if (t73 != 4294967230U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x345 = -1;
	static volatile int16_t x346 = INT16_MIN;
	static int32_t x347 = INT32_MIN;
	volatile uint32_t x348 = UINT32_MAX;
	uint32_t t74 = UINT32_MAX;

	t74 = (x345|((x346-x347)|x348));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x349 = INT16_MIN;
	static volatile int32_t x350 = INT32_MIN;
	static volatile int64_t x351 = -144754691LL;
	uint8_t x352 = 1U;
	volatile int64_t t75 = 90623103434LL;

	t75 = (x349|((x350-x351)|x352));

	if (t75 != -14333LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x353 = INT8_MAX;
	static int64_t x354 = -1LL;
	volatile uint64_t x355 = 17537073556717242LLU;
	volatile int16_t x356 = INT16_MIN;
	static volatile uint64_t t76 = 14349987LLU;

	t76 = (x353|((x354-x355)|x356));

	if (t76 != 18446744073709519231LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x357 = INT16_MIN;
	uint32_t x358 = 43U;
	uint64_t x359 = 111040202081880LLU;
	uint64_t x360 = 164227040LLU;

	t77 = (x357|((x358-x359)|x360));

	if (t77 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = -166;
	static uint16_t x362 = 3U;
	int8_t x363 = -2;
	static int32_t x364 = INT32_MIN;
	volatile int32_t t78 = -3218;

	t78 = (x361|((x362-x363)|x364));

	if (t78 != -161) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x365 = 83U;
	uint16_t x366 = 294U;
	int32_t x367 = 106130;
	int64_t x368 = INT64_MIN;
	static int64_t t79 = -59154247LL;

	t79 = (x365|((x366-x367)|x368));

	if (t79 != -105769LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x369 = 34U;
	int64_t x372 = 5164511159578LL;
	uint64_t t80 = 67265958569LLU;

	t80 = (x369|((x370-x371)|x372));

	if (t80 != 18446744073709551546LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x373 = 1U;
	int8_t x375 = INT8_MIN;
	volatile int16_t x376 = INT16_MIN;
	uint64_t t81 = 6183892713708LLU;

	t81 = (x373|((x374-x375)|x376));

	if (t81 != 18446744073709537517LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x383 = INT16_MIN;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = (x381|((x382-x383)|x384));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x385 = INT32_MIN;
	static uint32_t x386 = UINT32_MAX;
	int8_t x387 = 8;
	int16_t x388 = INT16_MAX;

	t83 = (x385|((x386-x387)|x388));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x391 = UINT16_MAX;
	uint32_t x392 = 7U;
	volatile int64_t t84 = INT64_MAX;

	t84 = (x389|((x390-x391)|x392));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x393 = UINT16_MAX;
	int64_t x394 = INT64_MIN;
	int8_t x395 = INT8_MIN;
	volatile uint64_t x396 = UINT64_MAX;
	uint64_t t85 = UINT64_MAX;

	t85 = (x393|((x394-x395)|x396));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x397 = INT8_MAX;
	static volatile int32_t x398 = -57314;
	int32_t x399 = -1;
	int16_t x400 = -4247;

	t86 = (x397|((x398-x399)|x400));

	if (t86 != -4225) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x402 = 5233051U;
	volatile int8_t x403 = -1;

	t87 = (x401|((x402-x403)|x404));

	if (t87 != 4294967230U) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x405 = 2015041740199185183LL;
	int64_t x406 = 37999178978112LL;
	static int64_t x407 = -1062807319206637814LL;
	static uint32_t x408 = UINT32_MAX;
	volatile int64_t t88 = -11469130958756146LL;

	t88 = (x405|((x406-x407)|x408));

	if (t88 != 2305840741470961663LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x409 = INT32_MIN;
	int8_t x410 = INT8_MIN;
	uint32_t x411 = 77512357U;
	uint16_t x412 = 11U;

	t89 = (x409|((x410-x411)|x412));

	if (t89 != 4217454811U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x414 = -1;
	volatile uint32_t x415 = 212U;
	volatile int64_t t90 = 1LL;

	t90 = (x413|((x414-x415)|x416));

	if (t90 != -9223372032559808721LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x417 = -1;
	volatile int64_t x418 = -1LL;
	int32_t x419 = INT32_MIN;
	volatile int8_t x420 = -1;
	volatile int64_t t91 = 5133448838LL;

	t91 = (x417|((x418-x419)|x420));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x421 = UINT16_MAX;
	uint16_t x424 = 3U;

	t92 = (x421|((x422-x423)|x424));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x425 = UINT32_MAX;
	int32_t x426 = -1;
	int32_t x428 = -1;
	volatile uint32_t t93 = UINT32_MAX;

	t93 = (x425|((x426-x427)|x428));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x430 = UINT64_MAX;
	int32_t x431 = INT32_MAX;
	uint32_t x432 = 94177693U;
	uint64_t t94 = UINT64_MAX;

	t94 = (x429|((x430-x431)|x432));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x433 = INT16_MIN;
	static uint32_t x434 = UINT32_MAX;
	static volatile uint8_t x435 = 5U;
	volatile uint16_t x436 = 2U;
	volatile uint32_t t95 = 1717U;

	t95 = (x433|((x434-x435)|x436));

	if (t95 != 4294967290U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x437 = -26175LL;
	uint16_t x439 = UINT16_MAX;
	static volatile int8_t x440 = INT8_MIN;
	volatile int64_t t96 = 0LL;

	t96 = (x437|((x438-x439)|x440));

	if (t96 != -63LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x442 = -1;
	static int32_t x443 = -940593;
	volatile int32_t t97 = 681861;

	t97 = (x441|((x442-x443)|x444));

	if (t97 != -2146543051) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x445 = -1;
	int8_t x446 = INT8_MIN;
	uint32_t x447 = UINT32_MAX;
	uint64_t x448 = 16218583116602LLU;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x445|((x446-x447)|x448));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x449 = 858;
	volatile int8_t x450 = INT8_MIN;
	volatile int8_t x451 = -1;
	static int8_t x452 = INT8_MIN;
	int32_t t99 = -3594859;

	t99 = (x449|((x450-x451)|x452));

	if (t99 != -37) { NG(); } else { ; }
	
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

