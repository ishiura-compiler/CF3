#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x6 = INT8_MIN;
static int32_t x7 = -443148;
volatile int32_t t1 = -105949712;
int8_t x9 = INT8_MIN;
int32_t t2 = 352;
int8_t x28 = INT8_MIN;
uint32_t x37 = UINT32_MAX;
int16_t x39 = -1;
int64_t t9 = -1108543363496123216LL;
static int16_t x46 = -1;
int16_t x48 = INT16_MIN;
volatile uint32_t t10 = 11997U;
static uint16_t x60 = 2727U;
int16_t x69 = 35;
int16_t x70 = 18;
static uint32_t x82 = 6315249U;
uint8_t x84 = 2U;
int16_t x87 = INT16_MAX;
uint8_t x88 = UINT8_MAX;
int16_t x93 = INT16_MAX;
uint16_t x96 = 1U;
static int32_t t18 = 1;
int64_t x116 = INT64_MIN;
int8_t x121 = INT8_MAX;
int8_t x123 = -2;
static volatile int8_t x132 = INT8_MIN;
static volatile uint64_t x142 = 62LLU;
int32_t x148 = INT32_MIN;
int32_t t30 = 521581289;
volatile uint64_t t31 = 10480238360800897LLU;
volatile uint64_t t33 = 4828480144769LLU;
uint16_t x181 = 8428U;
int32_t x186 = -1;
volatile int64_t t38 = 8558123891LL;
int16_t x215 = 23;
volatile int64_t t41 = 49174197LL;
uint32_t x223 = UINT32_MAX;
int8_t x227 = INT8_MIN;
int64_t x228 = -1LL;
int16_t x239 = -1;
volatile int32_t x244 = 6929169;
int64_t x247 = 39740LL;
int32_t t47 = 43334;
int8_t x253 = INT8_MAX;
static uint64_t t48 = 8169486728LLU;
int8_t x259 = -1;
uint16_t x278 = 5486U;
int16_t x279 = INT16_MAX;
int16_t x280 = 13;
uint64_t x291 = 1066LLU;
volatile uint8_t x293 = 1U;
static uint16_t x297 = 10U;
uint64_t x306 = 70910572031796LLU;
int64_t x313 = 1LL;
static uint8_t x320 = 56U;
volatile int32_t x322 = INT32_MAX;
uint32_t x338 = 763978559U;
uint8_t x347 = 5U;
int32_t x351 = INT32_MIN;
uint64_t x356 = UINT64_MAX;
volatile int8_t x361 = -1;
volatile int64_t x363 = -1LL;
uint64_t x367 = UINT64_MAX;
static volatile int16_t x376 = -1;
volatile int32_t x377 = -96478;
int16_t x380 = -1;
int64_t x384 = -55246360014LL;
static int64_t x388 = INT64_MIN;
volatile int8_t x391 = INT8_MAX;
uint64_t t77 = 120LLU;
int8_t x411 = INT8_MIN;
volatile int32_t t78 = 1728714;
static volatile int32_t t79 = -63156336;
int32_t t81 = 14;
int8_t x444 = INT8_MIN;
volatile uint64_t t83 = 435021LLU;
volatile int64_t x447 = -1LL;
int64_t x462 = -1LL;
int64_t x480 = INT64_MIN;
uint32_t x486 = UINT32_MAX;
static uint32_t x489 = 272528U;
volatile uint32_t t90 = 62032853U;
static uint16_t x501 = 86U;
uint32_t x507 = UINT32_MAX;
int32_t t92 = -83044;
volatile uint16_t x513 = 8133U;
volatile uint32_t x514 = 104718453U;
uint8_t x521 = UINT8_MAX;
volatile int8_t x523 = -2;
int16_t x525 = 105;
static volatile uint8_t x526 = 26U;
uint16_t x540 = 9U;
int8_t x541 = -1;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int16_t x2 = INT16_MIN;
	static int32_t x3 = INT32_MIN;
	int64_t x4 = INT64_MAX;
	int32_t t0 = 1;

	t0 = ((x1*x2)&(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -55;
	int16_t x8 = INT16_MAX;

	t1 = ((x5*x6)&(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x10 = -1;
	uint8_t x11 = 31U;
	static int64_t x12 = INT64_MAX;

	t2 = ((x9*x10)&(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 103U;
	int16_t x14 = INT16_MIN;
	volatile int8_t x15 = -37;
	int64_t x16 = INT64_MAX;
	volatile int32_t t3 = -52959570;

	t3 = ((x13*x14)&(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 6232U;
	int64_t x18 = 631391LL;
	int8_t x19 = INT8_MAX;
	int16_t x20 = 1788;
	volatile int64_t t4 = -23617LL;

	t4 = ((x17*x18)&(x19<=x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 24U;
	int8_t x22 = -1;
	uint32_t x23 = UINT32_MAX;
	int64_t x24 = -134LL;
	volatile uint32_t t5 = 169U;

	t5 = ((x21*x22)&(x23<=x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = INT16_MIN;
	uint64_t x26 = 14014748LLU;
	int8_t x27 = -1;
	volatile uint64_t t6 = 294488175284LLU;

	t6 = ((x25*x26)&(x27<=x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -16254539;
	volatile int8_t x30 = INT8_MIN;
	int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MIN;
	static int32_t t7 = 3;

	t7 = ((x29*x30)&(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	static int16_t x34 = INT16_MIN;
	int8_t x35 = INT8_MIN;
	static uint8_t x36 = 4U;
	int32_t t8 = -13842099;

	t8 = ((x33*x34)&(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = -1LL;
	uint64_t x40 = 109398274767702LLU;

	t9 = ((x37*x38)&(x39<=x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 14U;
	uint8_t x47 = 0U;

	t10 = ((x45*x46)&(x47<=x48));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	static int64_t x54 = 106511345LL;
	int8_t x55 = INT8_MIN;
	volatile int8_t x56 = INT8_MIN;
	int64_t t11 = -1174811395LL;

	t11 = ((x53*x54)&(x55<=x56));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = 2U;
	static int16_t x58 = INT16_MIN;
	uint64_t x59 = UINT64_MAX;
	int32_t t12 = 1;

	t12 = ((x57*x58)&(x59<=x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = UINT16_MAX;
	int32_t x62 = -1;
	static uint32_t x63 = 30752412U;
	int16_t x64 = INT16_MIN;
	static int32_t t13 = -1;

	t13 = ((x61*x62)&(x63<=x64));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x71 = 6;
	volatile uint32_t x72 = 25510U;
	int32_t t14 = 100;

	t14 = ((x69*x70)&(x71<=x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x81 = 6838U;
	static int32_t x83 = -1;
	uint32_t t15 = 3983U;

	t15 = ((x81*x82)&(x83<=x84));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = 743;
	uint8_t x86 = UINT8_MAX;
	volatile int32_t t16 = 107;

	t16 = ((x85*x86)&(x87<=x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = -1;
	int8_t x90 = -2;
	int8_t x91 = -25;
	uint8_t x92 = 1U;
	volatile int32_t t17 = -29304788;

	t17 = ((x89*x90)&(x91<=x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x94 = -7108;
	uint16_t x95 = UINT16_MAX;

	t18 = ((x93*x94)&(x95<=x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x97 = 71697159U;
	static int32_t x98 = 56210229;
	int32_t x99 = INT32_MIN;
	volatile uint32_t x100 = 1U;
	uint32_t t19 = 472548658U;

	t19 = ((x97*x98)&(x99<=x100));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x101 = -1LL;
	uint32_t x102 = UINT32_MAX;
	volatile int8_t x103 = INT8_MIN;
	int32_t x104 = -205408;
	int64_t t20 = 18912266301LL;

	t20 = ((x101*x102)&(x103<=x104));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = INT8_MAX;
	int8_t x106 = INT8_MIN;
	int64_t x107 = INT64_MIN;
	volatile int16_t x108 = -1;
	volatile int32_t t21 = 10680;

	t21 = ((x105*x106)&(x107<=x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x113 = UINT32_MAX;
	uint32_t x114 = UINT32_MAX;
	volatile uint8_t x115 = 107U;
	static uint32_t t22 = 481U;

	t22 = ((x113*x114)&(x115<=x116));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x117 = 318989659869634LLU;
	int64_t x118 = INT64_MIN;
	uint64_t x119 = 24LLU;
	static uint8_t x120 = 7U;
	uint64_t t23 = 3LLU;

	t23 = ((x117*x118)&(x119<=x120));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x122 = 3335688LL;
	int64_t x124 = -1LL;
	int64_t t24 = 3579125257946720LL;

	t24 = ((x121*x122)&(x123<=x124));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x125 = 2U;
	uint8_t x126 = 5U;
	uint32_t x127 = 350U;
	int8_t x128 = INT8_MIN;
	volatile uint32_t t25 = 428U;

	t25 = ((x125*x126)&(x127<=x128));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x129 = UINT64_MAX;
	uint16_t x130 = UINT16_MAX;
	int64_t x131 = INT64_MAX;
	static volatile uint64_t t26 = 9373366LLU;

	t26 = ((x129*x130)&(x131<=x132));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = -1;
	volatile int64_t x134 = -14327931099591LL;
	int32_t x135 = INT32_MAX;
	static int64_t x136 = INT64_MIN;
	int64_t t27 = -6LL;

	t27 = ((x133*x134)&(x135<=x136));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x137 = -1;
	int16_t x138 = INT16_MIN;
	static volatile int64_t x139 = INT64_MIN;
	static int64_t x140 = INT64_MIN;
	int32_t t28 = -1168086;

	t28 = ((x137*x138)&(x139<=x140));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x141 = INT32_MIN;
	static volatile uint32_t x143 = 439612113U;
	uint32_t x144 = 120890011U;
	volatile uint64_t t29 = 7531579045997145460LLU;

	t29 = ((x141*x142)&(x143<=x144));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x145 = 29U;
	volatile int8_t x146 = INT8_MIN;
	uint16_t x147 = 562U;

	t30 = ((x145*x146)&(x147<=x148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x149 = UINT64_MAX;
	volatile int32_t x150 = -1;
	uint64_t x151 = 155866854LLU;
	int16_t x152 = INT16_MIN;

	t31 = ((x149*x150)&(x151<=x152));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x161 = 2;
	static int64_t x162 = -3627736007453291LL;
	int8_t x163 = -1;
	int16_t x164 = 0;
	volatile int64_t t32 = 89LL;

	t32 = ((x161*x162)&(x163<=x164));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x169 = INT8_MAX;
	volatile uint64_t x170 = 1647LLU;
	static int16_t x171 = 1129;
	uint64_t x172 = 5000LLU;

	t33 = ((x169*x170)&(x171<=x172));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x173 = UINT64_MAX;
	int8_t x174 = INT8_MIN;
	int8_t x175 = -1;
	int16_t x176 = -2207;
	uint64_t t34 = 21LLU;

	t34 = ((x173*x174)&(x175<=x176));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x182 = 0U;
	volatile int16_t x183 = INT16_MAX;
	int64_t x184 = INT64_MIN;
	volatile int32_t t35 = -47395261;

	t35 = ((x181*x182)&(x183<=x184));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x185 = -1;
	int64_t x187 = -1LL;
	int8_t x188 = -1;
	volatile int32_t t36 = -801;

	t36 = ((x185*x186)&(x187<=x188));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x193 = -16;
	volatile int16_t x194 = INT16_MIN;
	static volatile uint8_t x195 = 2U;
	static volatile int8_t x196 = INT8_MIN;
	int32_t t37 = 8421565;

	t37 = ((x193*x194)&(x195<=x196));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x201 = 19993621814523044LL;
	int8_t x202 = INT8_MIN;
	uint32_t x203 = 1U;
	int8_t x204 = INT8_MIN;

	t38 = ((x201*x202)&(x203<=x204));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x209 = INT8_MIN;
	int64_t x210 = 6578LL;
	volatile uint64_t x211 = 380241275892846650LLU;
	int8_t x212 = INT8_MAX;
	static int64_t t39 = 1LL;

	t39 = ((x209*x210)&(x211<=x212));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x213 = UINT8_MAX;
	int16_t x214 = INT16_MIN;
	volatile uint32_t x216 = 40226U;
	static int32_t t40 = -490832;

	t40 = ((x213*x214)&(x215<=x216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x217 = 27783LL;
	int32_t x218 = INT32_MIN;
	volatile int8_t x219 = 7;
	uint32_t x220 = UINT32_MAX;

	t41 = ((x217*x218)&(x219<=x220));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x221 = -1;
	static uint64_t x222 = 51792LLU;
	int32_t x224 = INT32_MIN;
	static volatile uint64_t t42 = 492506289LLU;

	t42 = ((x221*x222)&(x223<=x224));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x225 = UINT16_MAX;
	int32_t x226 = -1;
	volatile int32_t t43 = 445291;

	t43 = ((x225*x226)&(x227<=x228));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x237 = 10811635988LLU;
	uint32_t x238 = 1054783U;
	int64_t x240 = 1802985627715LL;
	uint64_t t44 = 8240775947525042LLU;

	t44 = ((x237*x238)&(x239<=x240));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x241 = 15;
	int8_t x242 = INT8_MIN;
	static volatile int64_t x243 = INT64_MAX;
	int32_t t45 = -1;

	t45 = ((x241*x242)&(x243<=x244));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x245 = INT64_MAX;
	volatile int32_t x246 = -1;
	int64_t x248 = INT64_MAX;
	volatile int64_t t46 = 521647054LL;

	t46 = ((x245*x246)&(x247<=x248));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x249 = 0U;
	volatile uint8_t x250 = UINT8_MAX;
	uint64_t x251 = UINT64_MAX;
	uint8_t x252 = 2U;

	t47 = ((x249*x250)&(x251<=x252));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x254 = 3370393197LLU;
	static uint16_t x255 = 3U;
	uint32_t x256 = 248690136U;

	t48 = ((x253*x254)&(x255<=x256));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x257 = 25U;
	int8_t x258 = -4;
	volatile int64_t x260 = -800420339792LL;
	volatile int32_t t49 = -9517;

	t49 = ((x257*x258)&(x259<=x260));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x261 = 1167U;
	volatile int8_t x262 = INT8_MIN;
	static volatile uint32_t x263 = 1010258284U;
	static int64_t x264 = INT64_MAX;
	volatile int32_t t50 = 26679010;

	t50 = ((x261*x262)&(x263<=x264));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x269 = 13445;
	volatile int8_t x270 = 53;
	uint64_t x271 = UINT64_MAX;
	static int16_t x272 = INT16_MAX;
	volatile int32_t t51 = -1899;

	t51 = ((x269*x270)&(x271<=x272));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x273 = -1LL;
	uint16_t x274 = UINT16_MAX;
	int64_t x275 = -191716922LL;
	volatile uint8_t x276 = 5U;
	volatile int64_t t52 = 4068426LL;

	t52 = ((x273*x274)&(x275<=x276));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x277 = 4227LL;
	int64_t t53 = -34784LL;

	t53 = ((x277*x278)&(x279<=x280));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x289 = -1;
	volatile uint32_t x290 = UINT32_MAX;
	volatile int8_t x292 = INT8_MIN;
	uint32_t t54 = 1U;

	t54 = ((x289*x290)&(x291<=x292));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x294 = INT8_MIN;
	volatile uint16_t x295 = 127U;
	int8_t x296 = INT8_MAX;
	volatile int32_t t55 = -11;

	t55 = ((x293*x294)&(x295<=x296));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x298 = UINT32_MAX;
	volatile uint32_t x299 = UINT32_MAX;
	volatile int8_t x300 = -1;
	uint32_t t56 = 70552504U;

	t56 = ((x297*x298)&(x299<=x300));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x305 = 4794;
	int8_t x307 = INT8_MAX;
	static volatile uint32_t x308 = 1199823590U;
	volatile uint64_t t57 = 7136479859446146LLU;

	t57 = ((x305*x306)&(x307<=x308));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x309 = -1;
	volatile uint64_t x310 = UINT64_MAX;
	uint16_t x311 = 19827U;
	int16_t x312 = INT16_MAX;
	uint64_t t58 = 34522316685564010LLU;

	t58 = ((x309*x310)&(x311<=x312));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x314 = UINT8_MAX;
	uint64_t x315 = 64262934LLU;
	uint8_t x316 = 2U;
	volatile int64_t t59 = 9810155860928334LL;

	t59 = ((x313*x314)&(x315<=x316));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x317 = 245LLU;
	static uint16_t x318 = 99U;
	int64_t x319 = -4833LL;
	static uint64_t t60 = 125124LLU;

	t60 = ((x317*x318)&(x319<=x320));

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x321 = 1;
	uint32_t x323 = UINT32_MAX;
	volatile int32_t x324 = INT32_MAX;
	int32_t t61 = 3394;

	t61 = ((x321*x322)&(x323<=x324));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x325 = UINT64_MAX;
	static volatile uint8_t x326 = 0U;
	int64_t x327 = INT64_MIN;
	static int8_t x328 = INT8_MIN;
	volatile uint64_t t62 = 145408757242640454LLU;

	t62 = ((x325*x326)&(x327<=x328));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x329 = UINT32_MAX;
	static int16_t x330 = INT16_MAX;
	int64_t x331 = 114815366972LL;
	static uint32_t x332 = UINT32_MAX;
	uint32_t t63 = 2U;

	t63 = ((x329*x330)&(x331<=x332));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x337 = -1LL;
	static int64_t x339 = INT64_MIN;
	int32_t x340 = INT32_MAX;
	volatile int64_t t64 = 0LL;

	t64 = ((x337*x338)&(x339<=x340));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x345 = INT8_MIN;
	volatile int64_t x346 = -1LL;
	volatile int8_t x348 = INT8_MAX;
	int64_t t65 = -1LL;

	t65 = ((x345*x346)&(x347<=x348));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x349 = UINT32_MAX;
	int16_t x350 = -964;
	static int64_t x352 = INT64_MIN;
	static uint32_t t66 = 2U;

	t66 = ((x349*x350)&(x351<=x352));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x353 = INT16_MIN;
	static uint16_t x354 = 23026U;
	volatile int32_t x355 = -1;
	int32_t t67 = 48094;

	t67 = ((x353*x354)&(x355<=x356));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x357 = -1;
	int32_t x358 = -129044174;
	uint8_t x359 = UINT8_MAX;
	int8_t x360 = 3;
	int32_t t68 = 18651191;

	t68 = ((x357*x358)&(x359<=x360));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x362 = 2U;
	int8_t x364 = INT8_MAX;
	volatile int32_t t69 = 22389027;

	t69 = ((x361*x362)&(x363<=x364));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x365 = 30;
	uint64_t x366 = 11LLU;
	int8_t x368 = -1;
	volatile uint64_t t70 = 2159442LLU;

	t70 = ((x365*x366)&(x367<=x368));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x373 = 84420474313498LLU;
	int64_t x374 = 26830093599LL;
	static uint16_t x375 = 3U;
	uint64_t t71 = 46687982172LLU;

	t71 = ((x373*x374)&(x375<=x376));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x378 = -1;
	volatile int8_t x379 = INT8_MAX;
	int32_t t72 = 321;

	t72 = ((x377*x378)&(x379<=x380));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x381 = UINT64_MAX;
	int32_t x382 = INT32_MIN;
	int8_t x383 = 0;
	uint64_t t73 = 1451LLU;

	t73 = ((x381*x382)&(x383<=x384));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x385 = 85U;
	uint64_t x386 = UINT64_MAX;
	volatile uint8_t x387 = 0U;
	volatile uint64_t t74 = 53422569485LLU;

	t74 = ((x385*x386)&(x387<=x388));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x389 = -108;
	int8_t x390 = INT8_MIN;
	volatile int8_t x392 = -1;
	volatile int32_t t75 = -3;

	t75 = ((x389*x390)&(x391<=x392));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x393 = INT8_MIN;
	static uint64_t x394 = 7047111653060307765LLU;
	int64_t x395 = -17897635015987LL;
	volatile int16_t x396 = INT16_MIN;
	uint64_t t76 = 18962471296LLU;

	t76 = ((x393*x394)&(x395<=x396));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x397 = UINT64_MAX;
	uint64_t x398 = 10401062961735LLU;
	static int32_t x399 = -1;
	int16_t x400 = INT16_MIN;

	t77 = ((x397*x398)&(x399<=x400));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x409 = UINT16_MAX;
	int8_t x410 = INT8_MIN;
	volatile int16_t x412 = -1;

	t78 = ((x409*x410)&(x411<=x412));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x413 = 19310U;
	int8_t x414 = INT8_MIN;
	uint8_t x415 = 59U;
	static int32_t x416 = INT32_MIN;

	t79 = ((x413*x414)&(x415<=x416));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x417 = INT8_MIN;
	uint16_t x418 = 8022U;
	static int8_t x419 = INT8_MIN;
	static int32_t x420 = -17394583;
	static volatile int32_t t80 = 2221;

	t80 = ((x417*x418)&(x419<=x420));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x425 = 583;
	static int16_t x426 = -1;
	volatile int16_t x427 = INT16_MAX;
	int8_t x428 = INT8_MAX;

	t81 = ((x425*x426)&(x427<=x428));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x437 = 71U;
	uint32_t x438 = 21U;
	volatile uint8_t x439 = 1U;
	uint32_t x440 = 49U;
	static volatile uint32_t t82 = 6378352U;

	t82 = ((x437*x438)&(x439<=x440));

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x441 = 170265116LLU;
	uint64_t x442 = 4104321242274347LLU;
	int8_t x443 = 1;

	t83 = ((x441*x442)&(x443<=x444));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x445 = 2120;
	uint32_t x446 = 1991308U;
	volatile int64_t x448 = -300868939LL;
	static volatile uint32_t t84 = 122409U;

	t84 = ((x445*x446)&(x447<=x448));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x449 = -1LL;
	uint16_t x450 = 726U;
	uint32_t x451 = 20948U;
	volatile uint32_t x452 = UINT32_MAX;
	int64_t t85 = -169321211033310LL;

	t85 = ((x449*x450)&(x451<=x452));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x457 = 202U;
	int64_t x458 = -1LL;
	uint16_t x459 = 7131U;
	volatile int32_t x460 = 1;
	int64_t t86 = -268266032LL;

	t86 = ((x457*x458)&(x459<=x460));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x461 = INT8_MIN;
	int64_t x463 = INT64_MAX;
	int8_t x464 = 0;
	volatile int64_t t87 = 4727500809101LL;

	t87 = ((x461*x462)&(x463<=x464));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x477 = 2647463LL;
	uint32_t x478 = UINT32_MAX;
	static int64_t x479 = INT64_MIN;
	int64_t t88 = -1344LL;

	t88 = ((x477*x478)&(x479<=x480));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x485 = 597U;
	static int64_t x487 = 398898281158LL;
	volatile int64_t x488 = -522637LL;
	static uint32_t t89 = 45573270U;

	t89 = ((x485*x486)&(x487<=x488));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x490 = INT16_MAX;
	static volatile uint16_t x491 = 6378U;
	static volatile int64_t x492 = 5618482800008133LL;

	t90 = ((x489*x490)&(x491<=x492));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x502 = 12;
	uint8_t x503 = 16U;
	int8_t x504 = INT8_MAX;
	int32_t t91 = 28808;

	t91 = ((x501*x502)&(x503<=x504));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x505 = INT8_MAX;
	volatile int16_t x506 = -1;
	uint64_t x508 = 7233481332LLU;

	t92 = ((x505*x506)&(x507<=x508));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x515 = 340;
	int8_t x516 = INT8_MIN;
	uint32_t t93 = 412U;

	t93 = ((x513*x514)&(x515<=x516));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x517 = UINT32_MAX;
	uint8_t x518 = 15U;
	static volatile int16_t x519 = INT16_MAX;
	int16_t x520 = -1;
	uint32_t t94 = 2U;

	t94 = ((x517*x518)&(x519<=x520));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x522 = 405420U;
	int8_t x524 = 33;
	volatile uint32_t t95 = 523769400U;

	t95 = ((x521*x522)&(x523<=x524));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x527 = UINT16_MAX;
	int16_t x528 = 10631;
	volatile int32_t t96 = 4873402;

	t96 = ((x525*x526)&(x527<=x528));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x529 = -40462031;
	static uint8_t x530 = 23U;
	static int64_t x531 = -1LL;
	uint64_t x532 = 27734582LLU;
	static int32_t t97 = 6967814;

	t97 = ((x529*x530)&(x531<=x532));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x537 = -1;
	uint32_t x538 = 1904201U;
	volatile int8_t x539 = INT8_MAX;
	uint32_t t98 = 1U;

	t98 = ((x537*x538)&(x539<=x540));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x542 = INT16_MIN;
	static int8_t x543 = -1;
	static uint32_t x544 = 1286U;
	volatile int32_t t99 = -66;

	t99 = ((x541*x542)&(x543<=x544));

	if (t99 != 0) { NG(); } else { ; }
	
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

