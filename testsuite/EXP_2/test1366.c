#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 122U;
uint32_t x8 = 204521U;
int32_t x10 = 7753997;
uint16_t x17 = UINT16_MAX;
static int64_t x19 = INT64_MIN;
int32_t x20 = INT32_MIN;
int64_t x22 = INT64_MIN;
uint32_t x25 = 29385652U;
int32_t x33 = -1;
int64_t x34 = INT64_MAX;
uint64_t t7 = 39510133LLU;
static uint8_t x47 = UINT8_MAX;
int32_t t11 = 95;
uint8_t x61 = 0U;
static volatile int8_t x65 = INT8_MIN;
volatile uint64_t t14 = 7351LLU;
uint8_t x73 = 8U;
static volatile uint64_t x85 = UINT64_MAX;
int32_t x92 = -1;
volatile int64_t x96 = INT64_MAX;
int64_t t19 = 8682636251449701LL;
int64_t x99 = INT64_MIN;
int64_t x106 = INT64_MIN;
static uint64_t x117 = 74318LLU;
static int16_t x121 = 8108;
int16_t x122 = -1;
int32_t t28 = -946385378;
int8_t x138 = 36;
volatile int8_t x140 = INT8_MIN;
static int32_t x145 = -1;
static uint64_t x147 = 26730962950LLU;
int32_t t31 = -1106;
static volatile int32_t t32 = -42647;
volatile int32_t t35 = 2081080;
uint32_t x190 = UINT32_MAX;
int32_t t38 = 336;
volatile int8_t x193 = INT8_MAX;
uint16_t x208 = 372U;
int8_t x217 = -1;
static int64_t x219 = INT64_MIN;
volatile int64_t t44 = -11221LL;
int32_t t45 = -1911;
uint8_t x229 = 12U;
volatile int16_t x231 = -1;
volatile int16_t x234 = 1;
int32_t t48 = 131103;
volatile int64_t x242 = INT64_MIN;
int32_t t49 = 1;
volatile int16_t x245 = -1;
uint16_t x252 = 3066U;
volatile int32_t t51 = 30789;
uint32_t x276 = 174997U;
static volatile int32_t t56 = 38;
int64_t x290 = INT64_MAX;
int64_t x304 = -9325283LL;
static volatile int64_t t60 = -359258170LL;
static uint8_t x306 = 32U;
int8_t x311 = -6;
volatile int16_t x323 = 2010;
volatile int8_t x329 = INT8_MIN;
static uint16_t x337 = 7141U;
int8_t x340 = 14;
static uint64_t x342 = UINT64_MAX;
uint8_t x347 = 74U;
int16_t x354 = -1;
static int32_t x355 = INT32_MAX;
static int16_t x356 = -13;
volatile uint8_t x361 = 5U;
int32_t x362 = -233727;
static volatile uint64_t t72 = 59LLU;
int32_t x367 = INT32_MIN;
volatile int32_t t73 = -319530463;
int64_t x375 = -1LL;
static volatile uint64_t t74 = 74318LLU;
int32_t x382 = -1;
uint16_t x386 = 156U;
uint8_t x387 = 95U;
volatile uint64_t x409 = 3370510695LLU;
volatile uint64_t t79 = 847115181782123LLU;
int32_t x414 = INT32_MIN;
volatile int32_t t80 = -184;
uint8_t x418 = 0U;
uint8_t x421 = 1U;
volatile int32_t x422 = INT32_MIN;
uint8_t x423 = 5U;
int16_t x424 = -1;
volatile int32_t t84 = 0;
int64_t x440 = 4566746896417769LL;
volatile int64_t t86 = -16175294875LL;
volatile int16_t x442 = INT16_MIN;
int8_t x446 = INT8_MAX;
int16_t x447 = -1;
int32_t x448 = INT32_MIN;
volatile int64_t x451 = INT64_MIN;
uint32_t x454 = 2234001U;
uint8_t x469 = 3U;
volatile int32_t t93 = 1;
volatile int32_t t95 = 2086448;
volatile int32_t t96 = 0;
uint16_t x489 = UINT16_MAX;
uint64_t t98 = 403497209508384274LLU;
int64_t x494 = -223513897281LL;


void f0(void) {
	volatile uint64_t x1 = 3867605913061865973LLU;
	int32_t x3 = INT32_MIN;
	uint8_t x4 = 40U;
	volatile uint64_t t0 = 105675471LLU;

	t0 = ((x1-(x2<x3))+x4);

	if (t0 != 3867605913061866013LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 3U;
	static int64_t x6 = -124113686877195LL;
	int8_t x7 = 12;
	uint32_t t1 = 7536U;

	t1 = ((x5-(x6<x7))+x8);

	if (t1 != 204523U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	uint64_t x11 = 5344LLU;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = -6;

	t2 = ((x9-(x10<x11))+x12);

	if (t2 != -32513) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x18 = 321986857U;
	int32_t t3 = -370;

	t3 = ((x17-(x18<x19))+x20);

	if (t3 != -2147418113) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x21 = 1582941LLU;
	volatile int32_t x23 = INT32_MIN;
	uint8_t x24 = 1U;
	volatile uint64_t t4 = 162472536LLU;

	t4 = ((x21-(x22<x23))+x24);

	if (t4 != 1582941LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x26 = UINT32_MAX;
	static volatile int8_t x27 = INT8_MIN;
	uint16_t x28 = UINT16_MAX;
	uint32_t t5 = 102571U;

	t5 = ((x25-(x26<x27))+x28);

	if (t5 != 29451187U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x35 = -1;
	int32_t x36 = INT32_MAX;
	int32_t t6 = 144094843;

	t6 = ((x33-(x34<x35))+x36);

	if (t6 != 2147483646) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 8203U;
	static int16_t x38 = INT16_MIN;
	int16_t x39 = -1;
	static volatile uint64_t x40 = 14440355903018769LLU;

	t7 = ((x37-(x38<x39))+x40);

	if (t7 != 14440355903026971LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = UINT32_MAX;
	static volatile int32_t x42 = 39674907;
	int64_t x43 = INT64_MIN;
	uint64_t x44 = UINT64_MAX;
	uint64_t t8 = 86LLU;

	t8 = ((x41-(x42<x43))+x44);

	if (t8 != 4294967294LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x45 = INT16_MIN;
	int8_t x46 = -46;
	int64_t x48 = INT64_MAX;
	static int64_t t9 = -28LL;

	t9 = ((x45-(x46<x47))+x48);

	if (t9 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x49 = 280842037U;
	uint64_t x50 = UINT64_MAX;
	volatile int64_t x51 = INT64_MIN;
	volatile uint16_t x52 = UINT16_MAX;
	static uint32_t t10 = 14987U;

	t10 = ((x49-(x50<x51))+x52);

	if (t10 != 280907572U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	uint32_t x54 = 11U;
	int32_t x55 = INT32_MAX;
	volatile uint8_t x56 = 0U;

	t11 = ((x53-(x54<x55))+x56);

	if (t11 != -32769) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x57 = 4;
	uint16_t x58 = 825U;
	static int16_t x59 = INT16_MIN;
	static volatile uint64_t x60 = UINT64_MAX;
	uint64_t t12 = 5900258LLU;

	t12 = ((x57-(x58<x59))+x60);

	if (t12 != 3LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x62 = -3181;
	uint8_t x63 = UINT8_MAX;
	int16_t x64 = INT16_MAX;
	volatile int32_t t13 = -28;

	t13 = ((x61-(x62<x63))+x64);

	if (t13 != 32766) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x66 = 1U;
	uint8_t x67 = 91U;
	uint64_t x68 = UINT64_MAX;

	t14 = ((x65-(x66<x67))+x68);

	if (t14 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MIN;
	static int64_t x70 = INT64_MIN;
	volatile int32_t x71 = INT32_MAX;
	volatile int16_t x72 = INT16_MAX;
	static int32_t t15 = 64;

	t15 = ((x69-(x70<x71))+x72);

	if (t15 != 32638) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x74 = 7U;
	int32_t x75 = 4876;
	int8_t x76 = 3;
	static volatile int32_t t16 = -265385841;

	t16 = ((x73-(x74<x75))+x76);

	if (t16 != 10) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x86 = INT8_MAX;
	int32_t x87 = INT32_MIN;
	static int8_t x88 = -1;
	uint64_t t17 = 16244953986576699LLU;

	t17 = ((x85-(x86<x87))+x88);

	if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x89 = 11U;
	int16_t x90 = -1;
	int16_t x91 = -1;
	static volatile uint32_t t18 = 101551482U;

	t18 = ((x89-(x90<x91))+x92);

	if (t18 != 10U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = -1;
	uint8_t x94 = 92U;
	static int16_t x95 = INT16_MAX;

	t19 = ((x93-(x94<x95))+x96);

	if (t19 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = -1;
	int32_t x98 = -4;
	int16_t x100 = INT16_MIN;
	static volatile int32_t t20 = 339201043;

	t20 = ((x97-(x98<x99))+x100);

	if (t20 != -32769) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x101 = UINT16_MAX;
	int32_t x102 = 11496;
	int32_t x103 = 4;
	static uint32_t x104 = UINT32_MAX;
	uint32_t t21 = 166854199U;

	t21 = ((x101-(x102<x103))+x104);

	if (t21 != 65534U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x105 = INT8_MIN;
	int32_t x107 = -1;
	uint16_t x108 = 0U;
	static int32_t t22 = 12999;

	t22 = ((x105-(x106<x107))+x108);

	if (t22 != -129) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x109 = 1U;
	volatile int8_t x110 = -1;
	int64_t x111 = -1LL;
	uint64_t x112 = 2718705915340LLU;
	volatile uint64_t t23 = 7043513439810052045LLU;

	t23 = ((x109-(x110<x111))+x112);

	if (t23 != 2718705915341LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x113 = 6U;
	int8_t x114 = -4;
	int64_t x115 = 27417601750LL;
	static volatile int32_t x116 = 169218017;
	int32_t t24 = 3551860;

	t24 = ((x113-(x114<x115))+x116);

	if (t24 != 169218022) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x118 = 29342187U;
	volatile uint16_t x119 = 1U;
	int16_t x120 = INT16_MIN;
	static volatile uint64_t t25 = 31247541305980395LLU;

	t25 = ((x117-(x118<x119))+x120);

	if (t25 != 41550LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x123 = INT32_MIN;
	int8_t x124 = 1;
	int32_t t26 = -16987;

	t26 = ((x121-(x122<x123))+x124);

	if (t26 != 8109) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MIN;
	static int32_t x130 = INT32_MIN;
	uint64_t x131 = UINT64_MAX;
	int64_t x132 = INT64_MAX;
	volatile int64_t t27 = 28277LL;

	t27 = ((x129-(x130<x131))+x132);

	if (t27 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x133 = UINT8_MAX;
	int64_t x134 = 303204945568136206LL;
	static int16_t x135 = 0;
	uint16_t x136 = 473U;

	t28 = ((x133-(x134<x135))+x136);

	if (t28 != 728) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x137 = INT64_MAX;
	static int8_t x139 = -28;
	volatile int64_t t29 = 2717LL;

	t29 = ((x137-(x138<x139))+x140);

	if (t29 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x141 = 3U;
	int8_t x142 = INT8_MAX;
	int32_t x143 = 410;
	static int8_t x144 = INT8_MIN;
	volatile int32_t t30 = 4190;

	t30 = ((x141-(x142<x143))+x144);

	if (t30 != -126) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x146 = UINT32_MAX;
	int16_t x148 = -1;

	t31 = ((x145-(x146<x147))+x148);

	if (t31 != -3) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = 77;
	volatile int32_t x150 = -216356343;
	uint64_t x151 = 15135LLU;
	static int32_t x152 = -1;

	t32 = ((x149-(x150<x151))+x152);

	if (t32 != 76) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x153 = UINT64_MAX;
	uint8_t x154 = 116U;
	int64_t x155 = INT64_MAX;
	static volatile int32_t x156 = 71480;
	volatile uint64_t t33 = 839727767460588546LLU;

	t33 = ((x153-(x154<x155))+x156);

	if (t33 != 71478LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x157 = 564149040U;
	int8_t x158 = INT8_MAX;
	static int64_t x159 = INT64_MIN;
	static uint32_t x160 = 85931U;
	volatile uint32_t t34 = 179453U;

	t34 = ((x157-(x158<x159))+x160);

	if (t34 != 564234971U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x165 = 4707U;
	int8_t x166 = -1;
	int64_t x167 = INT64_MIN;
	int32_t x168 = INT32_MIN;

	t35 = ((x165-(x166<x167))+x168);

	if (t35 != -2147478941) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = -1;
	int16_t x170 = -1;
	static int32_t x171 = 655838;
	int16_t x172 = -5051;
	int32_t t36 = -778229;

	t36 = ((x169-(x170<x171))+x172);

	if (t36 != -5053) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = 108;
	int64_t x174 = INT64_MIN;
	int16_t x175 = INT16_MAX;
	static uint64_t x176 = UINT64_MAX;
	volatile uint64_t t37 = 119LLU;

	t37 = ((x173-(x174<x175))+x176);

	if (t37 != 106LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x189 = UINT8_MAX;
	uint64_t x191 = 2549170LLU;
	int32_t x192 = INT32_MIN;

	t38 = ((x189-(x190<x191))+x192);

	if (t38 != -2147483393) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x194 = UINT16_MAX;
	int64_t x195 = INT64_MAX;
	int32_t x196 = -1;
	volatile int32_t t39 = 13;

	t39 = ((x193-(x194<x195))+x196);

	if (t39 != 125) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x197 = INT32_MAX;
	int8_t x198 = -1;
	uint16_t x199 = UINT16_MAX;
	volatile uint32_t x200 = 1U;
	uint32_t t40 = 126U;

	t40 = ((x197-(x198<x199))+x200);

	if (t40 != 2147483647U) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x205 = INT64_MIN;
	int64_t x206 = INT64_MAX;
	uint64_t x207 = 6LLU;
	volatile int64_t t41 = 594071438453LL;

	t41 = ((x205-(x206<x207))+x208);

	if (t41 != -9223372036854775436LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = INT8_MAX;
	static int64_t x210 = -119507642003606LL;
	static int8_t x211 = 19;
	int8_t x212 = 1;
	static volatile int32_t t42 = 529386674;

	t42 = ((x209-(x210<x211))+x212);

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x213 = UINT8_MAX;
	uint8_t x214 = 37U;
	int8_t x215 = INT8_MIN;
	volatile int32_t x216 = INT32_MIN;
	volatile int32_t t43 = -104652;

	t43 = ((x213-(x214<x215))+x216);

	if (t43 != -2147483393) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x218 = 46095;
	static int64_t x220 = -84LL;

	t44 = ((x217-(x218<x219))+x220);

	if (t44 != -85LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x221 = 11U;
	uint64_t x222 = UINT64_MAX;
	static uint8_t x223 = UINT8_MAX;
	int8_t x224 = -1;

	t45 = ((x221-(x222<x223))+x224);

	if (t45 != 10) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = INT32_MIN;
	int8_t x227 = INT8_MAX;
	int8_t x228 = INT8_MIN;
	static volatile int32_t t46 = 158377;

	t46 = ((x225-(x226<x227))+x228);

	if (t46 != -257) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x230 = 1U;
	int64_t x232 = INT64_MIN;
	int64_t t47 = 6731010904LL;

	t47 = ((x229-(x230<x231))+x232);

	if (t47 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x233 = -29374497;
	static int8_t x235 = 8;
	int16_t x236 = INT16_MIN;

	t48 = ((x233-(x234<x235))+x236);

	if (t48 != -29407266) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x241 = -1;
	static int8_t x243 = -62;
	int16_t x244 = -15;

	t49 = ((x241-(x242<x243))+x244);

	if (t49 != -17) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x246 = -1;
	static int16_t x247 = -1;
	volatile uint32_t x248 = UINT32_MAX;
	static volatile uint32_t t50 = 767104748U;

	t50 = ((x245-(x246<x247))+x248);

	if (t50 != 4294967294U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x249 = 1;
	int64_t x250 = -1LL;
	int16_t x251 = 511;

	t51 = ((x249-(x250<x251))+x252);

	if (t51 != 3066) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x253 = 127LL;
	int16_t x254 = 1;
	int16_t x255 = 943;
	int32_t x256 = 380881967;
	volatile int64_t t52 = -1413461545440559071LL;

	t52 = ((x253-(x254<x255))+x256);

	if (t52 != 380882093LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x257 = 500375349U;
	volatile uint32_t x258 = 400U;
	volatile uint32_t x259 = UINT32_MAX;
	static uint64_t x260 = UINT64_MAX;
	uint64_t t53 = 10322LLU;

	t53 = ((x257-(x258<x259))+x260);

	if (t53 != 500375347LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x269 = UINT64_MAX;
	int64_t x270 = -34018598LL;
	volatile uint32_t x271 = 1916U;
	int64_t x272 = INT64_MAX;
	uint64_t t54 = 6LLU;

	t54 = ((x269-(x270<x271))+x272);

	if (t54 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x273 = UINT16_MAX;
	volatile uint8_t x274 = UINT8_MAX;
	int8_t x275 = -1;
	volatile uint32_t t55 = 889026U;

	t55 = ((x273-(x274<x275))+x276);

	if (t55 != 240532U) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x277 = -64;
	int64_t x278 = INT64_MIN;
	int8_t x279 = -4;
	int8_t x280 = -1;

	t56 = ((x277-(x278<x279))+x280);

	if (t56 != -66) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x281 = -1;
	uint16_t x282 = UINT16_MAX;
	int64_t x283 = 46148532708986LL;
	int16_t x284 = INT16_MIN;
	static volatile int32_t t57 = -20975;

	t57 = ((x281-(x282<x283))+x284);

	if (t57 != -32770) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x289 = INT16_MIN;
	int32_t x291 = 403069290;
	volatile int16_t x292 = 4406;
	int32_t t58 = 3;

	t58 = ((x289-(x290<x291))+x292);

	if (t58 != -28362) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x293 = 81U;
	static int16_t x294 = INT16_MIN;
	uint64_t x295 = 403286558064413LLU;
	int8_t x296 = INT8_MIN;
	static uint32_t t59 = 5U;

	t59 = ((x293-(x294<x295))+x296);

	if (t59 != 4294967249U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x301 = UINT8_MAX;
	volatile uint64_t x302 = 433523367083060407LLU;
	static uint32_t x303 = 6134U;

	t60 = ((x301-(x302<x303))+x304);

	if (t60 != -9325028LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x305 = 355137U;
	int32_t x307 = 6;
	uint64_t x308 = UINT64_MAX;
	static uint64_t t61 = 1804819020LLU;

	t61 = ((x305-(x306<x307))+x308);

	if (t61 != 355136LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x309 = 1U;
	uint32_t x310 = UINT32_MAX;
	volatile uint64_t x312 = UINT64_MAX;
	volatile uint64_t t62 = 47819775058770LLU;

	t62 = ((x309-(x310<x311))+x312);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x321 = 5;
	static uint8_t x322 = UINT8_MAX;
	static volatile int16_t x324 = -620;
	volatile int32_t t63 = 26475357;

	t63 = ((x321-(x322<x323))+x324);

	if (t63 != -616) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x325 = INT8_MIN;
	static volatile int64_t x326 = INT64_MAX;
	volatile int8_t x327 = INT8_MAX;
	int8_t x328 = 0;
	volatile int32_t t64 = 238248;

	t64 = ((x325-(x326<x327))+x328);

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x330 = INT64_MAX;
	int32_t x331 = INT32_MIN;
	static int64_t x332 = -1LL;
	volatile int64_t t65 = 2294498236082317676LL;

	t65 = ((x329-(x330<x331))+x332);

	if (t65 != -129LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x333 = -1;
	uint32_t x334 = UINT32_MAX;
	int16_t x335 = 1801;
	uint8_t x336 = UINT8_MAX;
	int32_t t66 = 137375;

	t66 = ((x333-(x334<x335))+x336);

	if (t66 != 254) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x338 = UINT64_MAX;
	static int16_t x339 = INT16_MIN;
	volatile int32_t t67 = -261;

	t67 = ((x337-(x338<x339))+x340);

	if (t67 != 7155) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x341 = 0U;
	int16_t x343 = INT16_MIN;
	volatile uint32_t x344 = UINT32_MAX;
	static volatile uint32_t t68 = UINT32_MAX;

	t68 = ((x341-(x342<x343))+x344);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x345 = 23U;
	volatile int32_t x346 = 6687;
	int8_t x348 = INT8_MAX;
	int32_t t69 = 223;

	t69 = ((x345-(x346<x347))+x348);

	if (t69 != 150) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x353 = -1;
	int32_t t70 = -594;

	t70 = ((x353-(x354<x355))+x356);

	if (t70 != -15) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x357 = 1;
	static int32_t x358 = -1;
	volatile uint64_t x359 = 13107169844LLU;
	int32_t x360 = -1;
	static int32_t t71 = 112501;

	t71 = ((x357-(x358<x359))+x360);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x363 = 133U;
	uint64_t x364 = UINT64_MAX;

	t72 = ((x361-(x362<x363))+x364);

	if (t72 != 4LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x365 = -1;
	int16_t x366 = 1;
	volatile int8_t x368 = -1;

	t73 = ((x365-(x366<x367))+x368);

	if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x373 = 25U;
	volatile int16_t x374 = -1;
	uint64_t x376 = 17LLU;

	t74 = ((x373-(x374<x375))+x376);

	if (t74 != 42LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x381 = 0LLU;
	volatile int64_t x383 = INT64_MAX;
	int32_t x384 = -10;
	volatile uint64_t t75 = 11891LLU;

	t75 = ((x381-(x382<x383))+x384);

	if (t75 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x385 = INT32_MIN;
	static int64_t x388 = -1LL;
	int64_t t76 = 556536583927342874LL;

	t76 = ((x385-(x386<x387))+x388);

	if (t76 != -2147483649LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x389 = 1U;
	uint32_t x390 = 27496943U;
	int16_t x391 = INT16_MIN;
	static volatile int8_t x392 = INT8_MIN;
	volatile int32_t t77 = -945;

	t77 = ((x389-(x390<x391))+x392);

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x401 = INT32_MAX;
	volatile int32_t x402 = -782457943;
	static int64_t x403 = 314505LL;
	int8_t x404 = INT8_MIN;
	int32_t t78 = -41410;

	t78 = ((x401-(x402<x403))+x404);

	if (t78 != 2147483518) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x410 = 2891LLU;
	static volatile int16_t x411 = 1;
	int8_t x412 = 0;

	t79 = ((x409-(x410<x411))+x412);

	if (t79 != 3370510695LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x413 = 2394;
	int16_t x415 = 448;
	volatile int8_t x416 = -1;

	t80 = ((x413-(x414<x415))+x416);

	if (t80 != 2392) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x417 = 4148568U;
	int16_t x419 = INT16_MIN;
	uint16_t x420 = 14U;
	volatile uint32_t t81 = 4947U;

	t81 = ((x417-(x418<x419))+x420);

	if (t81 != 4148582U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t t82 = 11441396;

	t82 = ((x421-(x422<x423))+x424);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x425 = INT32_MIN;
	int32_t x426 = 444;
	static int32_t x427 = 32;
	int64_t x428 = 487987813LL;
	volatile int64_t t83 = 1939012295324123LL;

	t83 = ((x425-(x426<x427))+x428);

	if (t83 != -1659495835LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x429 = INT16_MIN;
	static volatile int16_t x430 = INT16_MIN;
	int8_t x431 = 0;
	volatile int8_t x432 = -1;

	t84 = ((x429-(x430<x431))+x432);

	if (t84 != -32770) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x433 = -1LL;
	uint8_t x434 = UINT8_MAX;
	static int32_t x435 = -12693967;
	int8_t x436 = 1;
	volatile int64_t t85 = -461171127413LL;

	t85 = ((x433-(x434<x435))+x436);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x437 = -1;
	volatile int32_t x438 = INT32_MAX;
	int8_t x439 = -7;

	t86 = ((x437-(x438<x439))+x440);

	if (t86 != 4566746896417768LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x441 = UINT16_MAX;
	static int32_t x443 = -1;
	int8_t x444 = INT8_MIN;
	volatile int32_t t87 = -511148;

	t87 = ((x441-(x442<x443))+x444);

	if (t87 != 65406) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x445 = 3884013279080773490LLU;
	static uint64_t t88 = 56716068912688809LLU;

	t88 = ((x445-(x446<x447))+x448);

	if (t88 != 3884013276933289842LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x449 = INT8_MIN;
	static int32_t x450 = 29721;
	int16_t x452 = -1;
	int32_t t89 = -1;

	t89 = ((x449-(x450<x451))+x452);

	if (t89 != -129) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x453 = 9644U;
	int8_t x455 = -1;
	int16_t x456 = INT16_MAX;
	static volatile int32_t t90 = 179790817;

	t90 = ((x453-(x454<x455))+x456);

	if (t90 != 42410) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x461 = UINT8_MAX;
	uint16_t x462 = UINT16_MAX;
	int8_t x463 = -7;
	static int16_t x464 = INT16_MIN;
	static int32_t t91 = 549967585;

	t91 = ((x461-(x462<x463))+x464);

	if (t91 != -32513) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x465 = 58374LL;
	uint8_t x466 = 86U;
	volatile uint32_t x467 = 216U;
	volatile uint8_t x468 = 4U;
	volatile int64_t t92 = 4959284LL;

	t92 = ((x465-(x466<x467))+x468);

	if (t92 != 58377LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x470 = 15U;
	static volatile int16_t x471 = -1;
	static uint16_t x472 = 678U;

	t93 = ((x469-(x470<x471))+x472);

	if (t93 != 681) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x473 = 53083567LLU;
	static uint32_t x474 = 1353232041U;
	static int16_t x475 = -1;
	volatile uint16_t x476 = 7U;
	uint64_t t94 = 1LLU;

	t94 = ((x473-(x474<x475))+x476);

	if (t94 != 53083573LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x477 = -113316596;
	int64_t x478 = -1LL;
	int8_t x479 = INT8_MIN;
	int16_t x480 = INT16_MIN;

	t95 = ((x477-(x478<x479))+x480);

	if (t95 != -113349364) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x481 = -5;
	int64_t x482 = -313552949LL;
	int8_t x483 = INT8_MIN;
	int32_t x484 = -1011;

	t96 = ((x481-(x482<x483))+x484);

	if (t96 != -1017) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x485 = 31459LLU;
	uint64_t x486 = UINT64_MAX;
	static int8_t x487 = -29;
	uint32_t x488 = 936091351U;
	uint64_t t97 = 1640657886277LLU;

	t97 = ((x485-(x486<x487))+x488);

	if (t97 != 936122810LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x490 = 2U;
	int32_t x491 = INT32_MAX;
	uint64_t x492 = 1958191969LLU;

	t98 = ((x489-(x490<x491))+x492);

	if (t98 != 1958257503LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x493 = -1;
	uint64_t x495 = 170869903763LLU;
	int64_t x496 = INT64_MAX;
	volatile int64_t t99 = 5303149009LL;

	t99 = ((x493-(x494<x495))+x496);

	if (t99 != 9223372036854775806LL) { NG(); } else { ; }
	
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

