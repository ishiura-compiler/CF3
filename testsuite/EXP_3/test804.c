#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x3 = UINT16_MAX;
volatile int8_t x4 = INT8_MIN;
int64_t t1 = 196886374107LL;
int16_t x18 = 333;
int16_t x23 = INT16_MIN;
volatile int32_t t7 = -109554049;
static uint16_t x33 = 677U;
int8_t x37 = INT8_MAX;
static int32_t x50 = 129462750;
uint64_t x54 = 1148218494LLU;
int64_t t15 = 92100893970831941LL;
int16_t x66 = INT16_MIN;
int16_t x81 = 66;
int64_t x88 = -1LL;
int64_t t21 = -88957955494LL;
volatile int8_t x98 = INT8_MIN;
volatile uint64_t t23 = 0LLU;
static volatile uint16_t x102 = 2866U;
int8_t x103 = 1;
static int8_t x106 = 22;
uint16_t x111 = UINT16_MAX;
int64_t x115 = -4024592315019LL;
int8_t x128 = INT8_MAX;
volatile int32_t t30 = -84;
volatile int16_t x132 = INT16_MIN;
volatile int32_t t31 = 6;
int32_t x157 = -677794167;
int16_t x168 = INT16_MIN;
int32_t x172 = -51737;
int16_t x173 = -1;
int32_t t42 = 204;
uint16_t x183 = 3452U;
int32_t x186 = 58303;
volatile int16_t x197 = INT16_MAX;
uint16_t x208 = 8011U;
uint64_t x214 = 243222932888326341LLU;
int32_t x215 = INT32_MIN;
volatile int16_t x217 = INT16_MAX;
int16_t x220 = INT16_MAX;
static int16_t x221 = -1;
static volatile uint64_t x226 = UINT64_MAX;
uint8_t x227 = 90U;
int32_t t54 = 1684611;
uint32_t x231 = 1U;
int8_t x235 = INT8_MIN;
int8_t x239 = -30;
volatile int32_t t57 = -3;
int8_t x246 = 24;
int16_t x247 = INT16_MIN;
int8_t x252 = INT8_MIN;
static int32_t x260 = -1;
int16_t x261 = INT16_MIN;
int64_t x262 = INT64_MIN;
uint32_t x275 = 48421U;
uint64_t x285 = UINT64_MAX;
int32_t x290 = INT32_MIN;
volatile uint8_t x292 = 24U;
volatile int8_t x293 = INT8_MIN;
static volatile uint32_t x295 = UINT32_MAX;
int64_t x296 = -1LL;
volatile int32_t t71 = -71;
int32_t x308 = INT32_MIN;
uint32_t x311 = UINT32_MAX;
uint32_t x315 = 66050348U;
int32_t x319 = INT32_MAX;
volatile int32_t t76 = -172;
uint32_t t77 = 503758U;
int8_t x330 = INT8_MIN;
int32_t x331 = INT32_MIN;
volatile int64_t x332 = 11927546190404LL;
volatile int32_t x334 = -22881046;
static int64_t x341 = INT64_MIN;
volatile uint32_t t83 = 162200U;
volatile uint32_t x352 = 22967U;
int64_t x354 = -1LL;
volatile int32_t t85 = -340;
volatile int32_t t86 = -245234;
int64_t x361 = -1LL;
int8_t x372 = -11;
int32_t x373 = INT32_MIN;
volatile uint16_t x375 = 637U;
volatile int16_t x376 = 1027;
static volatile int32_t x379 = 969861087;
int16_t x382 = INT16_MIN;
volatile uint32_t x387 = 497025070U;
uint64_t x389 = UINT64_MAX;
int32_t x390 = -1;
int8_t x400 = 3;
static int16_t x405 = -1329;
uint64_t x407 = 1599860LLU;
static uint32_t x409 = 4133074U;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int32_t x2 = 3064606;
	volatile int32_t t0 = -248488387;

	t0 = ((x1<=x2)&(x3%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 1375U;
	uint16_t x6 = 1082U;
	volatile int64_t x7 = 574613721391818LL;
	static uint8_t x8 = UINT8_MAX;

	t1 = ((x5<=x6)&(x7%x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int64_t x10 = 11279478765LL;
	int16_t x11 = INT16_MIN;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = 0;

	t2 = ((x9<=x10)&(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	volatile int8_t x14 = INT8_MAX;
	int8_t x15 = INT8_MIN;
	int64_t x16 = -1103722126095827LL;
	int64_t t3 = -449775693742553964LL;

	t3 = ((x13<=x14)&(x15%x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 8959696094573776LLU;
	int8_t x19 = INT8_MAX;
	volatile int16_t x20 = INT16_MIN;
	int32_t t4 = 16576;

	t4 = ((x17<=x18)&(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int32_t x22 = -1;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = 1901;

	t5 = ((x21<=x22)&(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	static uint32_t x26 = UINT32_MAX;
	int64_t x27 = INT64_MIN;
	int16_t x28 = INT16_MIN;
	int64_t t6 = -180112703889LL;

	t6 = ((x25<=x26)&(x27%x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 6874U;
	static int64_t x30 = -47747495793420LL;
	int32_t x31 = 14564;
	int8_t x32 = INT8_MAX;

	t7 = ((x29<=x30)&(x31%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = 0;
	uint32_t x35 = 15639U;
	static int8_t x36 = INT8_MIN;
	static volatile uint32_t t8 = 7U;

	t8 = ((x33<=x34)&(x35%x36));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MAX;
	static int16_t x39 = INT16_MAX;
	volatile uint16_t x40 = 1U;
	int32_t t9 = 14718086;

	t9 = ((x37<=x38)&(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MAX;
	static uint64_t x42 = 15130LLU;
	int8_t x43 = INT8_MIN;
	volatile uint8_t x44 = UINT8_MAX;
	int32_t t10 = 5072248;

	t10 = ((x41<=x42)&(x43%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 3445854LLU;
	volatile int8_t x46 = -33;
	static uint8_t x47 = UINT8_MAX;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 13861607;

	t11 = ((x45<=x46)&(x47%x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 7378312U;
	int16_t x51 = -5195;
	volatile int32_t x52 = INT32_MIN;
	static volatile int32_t t12 = -907791;

	t12 = ((x49<=x50)&(x51%x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 3U;
	int64_t x55 = 4488736410518255004LL;
	static uint64_t x56 = 3405LLU;
	volatile uint64_t t13 = 13352445527750834LLU;

	t13 = ((x53<=x54)&(x55%x56));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MIN;
	int64_t x58 = INT64_MIN;
	uint16_t x59 = 833U;
	static int8_t x60 = INT8_MAX;
	int32_t t14 = 475;

	t14 = ((x57<=x58)&(x59%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int32_t x62 = INT32_MAX;
	volatile int64_t x63 = INT64_MIN;
	int32_t x64 = INT32_MIN;

	t15 = ((x61<=x62)&(x63%x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = INT32_MIN;
	static uint32_t x67 = 881930019U;
	volatile int16_t x68 = 20;
	volatile uint32_t t16 = 14013U;

	t16 = ((x65<=x66)&(x67%x68));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	volatile uint64_t x70 = UINT64_MAX;
	static int64_t x71 = INT64_MAX;
	int64_t x72 = -27695125112LL;
	volatile int64_t t17 = 51LL;

	t17 = ((x69<=x70)&(x71%x72));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MAX;
	int64_t x74 = -2044888055802026686LL;
	volatile uint16_t x75 = 2U;
	int32_t x76 = -1;
	int32_t t18 = 141085;

	t18 = ((x73<=x74)&(x75%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 34U;
	volatile uint64_t x78 = UINT64_MAX;
	static int8_t x79 = -1;
	int32_t x80 = 521665;
	volatile int32_t t19 = -3387;

	t19 = ((x77<=x78)&(x79%x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MAX;
	uint64_t x83 = 5652LLU;
	static int16_t x84 = INT16_MAX;
	static volatile uint64_t t20 = 2641104LLU;

	t20 = ((x81<=x82)&(x83%x84));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = 325;
	int32_t x86 = INT32_MAX;
	int64_t x87 = -1LL;

	t21 = ((x85<=x86)&(x87%x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = INT16_MIN;
	volatile int8_t x94 = -1;
	uint8_t x95 = 1U;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t22 = -714103;

	t22 = ((x93<=x94)&(x95%x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = 0U;
	static volatile uint64_t x99 = 189903LLU;
	volatile int64_t x100 = 12882598957LL;

	t23 = ((x97<=x98)&(x99%x100));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MAX;
	static int32_t x104 = -24858;
	int32_t t24 = 34793;

	t24 = ((x101<=x102)&(x103%x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x105 = INT32_MIN;
	int64_t x107 = INT64_MAX;
	uint32_t x108 = 120095125U;
	int64_t t25 = -1158975782LL;

	t25 = ((x105<=x106)&(x107%x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x109 = 611538621637885LLU;
	static volatile int8_t x110 = INT8_MIN;
	volatile int64_t x112 = -1LL;
	int64_t t26 = 2LL;

	t26 = ((x109<=x110)&(x111%x112));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -1LL;
	int64_t x114 = 14090744LL;
	uint32_t x116 = 235U;
	volatile int64_t t27 = 197120432119LL;

	t27 = ((x113<=x114)&(x115%x116));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = -1;
	int64_t x118 = -1LL;
	static int8_t x119 = INT8_MAX;
	int64_t x120 = -1LL;
	volatile int64_t t28 = -1900216144LL;

	t28 = ((x117<=x118)&(x119%x120));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x121 = INT16_MIN;
	volatile int64_t x122 = INT64_MIN;
	int16_t x123 = 13054;
	static int64_t x124 = -1LL;
	volatile int64_t t29 = 16245375LL;

	t29 = ((x121<=x122)&(x123%x124));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x125 = -7;
	static uint8_t x126 = 71U;
	int8_t x127 = INT8_MAX;

	t30 = ((x125<=x126)&(x127%x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 14U;
	volatile uint32_t x130 = 756888931U;
	int32_t x131 = -1;

	t31 = ((x129<=x130)&(x131%x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = 122733LL;
	int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MIN;
	static int32_t x136 = INT32_MIN;
	volatile int32_t t32 = 2;

	t32 = ((x133<=x134)&(x135%x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = UINT32_MAX;
	int8_t x138 = 1;
	uint64_t x139 = 2443711394609306LLU;
	volatile int64_t x140 = INT64_MIN;
	static volatile uint64_t t33 = 15LLU;

	t33 = ((x137<=x138)&(x139%x140));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -123550;
	static int16_t x142 = INT16_MIN;
	int64_t x143 = INT64_MIN;
	volatile int32_t x144 = -1;
	volatile int64_t t34 = -1596LL;

	t34 = ((x141<=x142)&(x143%x144));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = -1008030562143LL;
	volatile int16_t x146 = 984;
	int8_t x147 = INT8_MAX;
	uint64_t x148 = 144506891259LLU;
	uint64_t t35 = 95251LLU;

	t35 = ((x145<=x146)&(x147%x148));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x149 = INT8_MIN;
	int8_t x150 = INT8_MIN;
	static int64_t x151 = INT64_MIN;
	static uint8_t x152 = 109U;
	int64_t t36 = 1082895067LL;

	t36 = ((x149<=x150)&(x151%x152));

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = UINT32_MAX;
	int64_t x154 = 10066187949LL;
	int64_t x155 = INT64_MIN;
	static volatile int64_t x156 = -1794LL;
	int64_t t37 = 460LL;

	t37 = ((x153<=x154)&(x155%x156));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x158 = -785845056886LL;
	volatile uint32_t x159 = 15732U;
	volatile uint64_t x160 = 4034598LLU;
	volatile uint64_t t38 = 24782399476034418LLU;

	t38 = ((x157<=x158)&(x159%x160));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = 1;
	int32_t x162 = -496738208;
	int16_t x163 = INT16_MIN;
	uint8_t x164 = 56U;
	int32_t t39 = 1392537;

	t39 = ((x161<=x162)&(x163%x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = 1;
	static int32_t x166 = INT32_MIN;
	int16_t x167 = -1;
	static int32_t t40 = 4785;

	t40 = ((x165<=x166)&(x167%x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	int64_t x170 = INT64_MAX;
	int32_t x171 = -1;
	volatile int32_t t41 = 15;

	t41 = ((x169<=x170)&(x171%x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x174 = INT64_MAX;
	int8_t x175 = -1;
	uint16_t x176 = 239U;

	t42 = ((x173<=x174)&(x175%x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MIN;
	int8_t x178 = 26;
	static uint64_t x179 = 454708LLU;
	static uint32_t x180 = 14803U;
	static uint64_t t43 = 95234567456027610LLU;

	t43 = ((x177<=x178)&(x179%x180));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MIN;
	uint16_t x182 = 2563U;
	static volatile uint32_t x184 = 19476U;
	volatile uint32_t t44 = 812693405U;

	t44 = ((x181<=x182)&(x183%x184));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MIN;
	uint16_t x187 = UINT16_MAX;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t45 = 18708;

	t45 = ((x185<=x186)&(x187%x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MIN;
	uint8_t x190 = UINT8_MAX;
	uint64_t x191 = 90920435521LLU;
	int64_t x192 = -4LL;
	static volatile uint64_t t46 = 2289491722227LLU;

	t46 = ((x189<=x190)&(x191%x192));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x198 = -1;
	volatile int8_t x199 = 3;
	int32_t x200 = -34957;
	volatile int32_t t47 = -109510;

	t47 = ((x197<=x198)&(x199%x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = -257227342LL;
	volatile int32_t x202 = 51371955;
	int16_t x203 = -8159;
	uint64_t x204 = UINT64_MAX;
	uint64_t t48 = 546810LLU;

	t48 = ((x201<=x202)&(x203%x204));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x205 = 9U;
	uint8_t x206 = 1U;
	int16_t x207 = INT16_MAX;
	volatile int32_t t49 = 12;

	t49 = ((x205<=x206)&(x207%x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x209 = -1;
	int32_t x210 = INT32_MIN;
	int8_t x211 = INT8_MAX;
	volatile int8_t x212 = INT8_MIN;
	volatile int32_t t50 = -15391;

	t50 = ((x209<=x210)&(x211%x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x213 = -1;
	static int32_t x216 = INT32_MIN;
	int32_t t51 = -689060;

	t51 = ((x213<=x214)&(x215%x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x218 = INT16_MIN;
	volatile uint8_t x219 = 63U;
	int32_t t52 = 0;

	t52 = ((x217<=x218)&(x219%x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x222 = INT16_MIN;
	static int32_t x223 = INT32_MIN;
	static uint16_t x224 = UINT16_MAX;
	volatile int32_t t53 = -75;

	t53 = ((x221<=x222)&(x223%x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x225 = 9842298193LLU;
	int16_t x228 = -1;

	t54 = ((x225<=x226)&(x227%x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MIN;
	uint32_t x230 = 3264139U;
	volatile int64_t x232 = -1LL;
	int64_t t55 = 1LL;

	t55 = ((x229<=x230)&(x231%x232));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = UINT64_MAX;
	int32_t x234 = -1;
	uint64_t x236 = 15035LLU;
	volatile uint64_t t56 = 12177978842105LLU;

	t56 = ((x233<=x234)&(x235%x236));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x237 = UINT64_MAX;
	static int32_t x238 = -7;
	uint8_t x240 = 2U;

	t57 = ((x237<=x238)&(x239%x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = INT16_MAX;
	uint16_t x242 = 322U;
	volatile int8_t x243 = -1;
	uint16_t x244 = 11114U;
	int32_t t58 = -1;

	t58 = ((x241<=x242)&(x243%x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x245 = 0LL;
	int64_t x248 = 4807515635580800LL;
	int64_t t59 = 38014497LL;

	t59 = ((x245<=x246)&(x247%x248));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x249 = 1U;
	uint32_t x250 = 21360897U;
	uint64_t x251 = 1724933439425LLU;
	volatile uint64_t t60 = 110094LLU;

	t60 = ((x249<=x250)&(x251%x252));

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x253 = UINT32_MAX;
	static volatile uint64_t x254 = 211855990772000375LLU;
	int32_t x255 = 1;
	int16_t x256 = 6;
	static int32_t t61 = -51166279;

	t61 = ((x253<=x254)&(x255%x256));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x257 = 18U;
	int64_t x258 = INT64_MAX;
	static volatile uint8_t x259 = 11U;
	int32_t t62 = 75642199;

	t62 = ((x257<=x258)&(x259%x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x263 = UINT32_MAX;
	int64_t x264 = -112356582386663465LL;
	int64_t t63 = -1643944289327661627LL;

	t63 = ((x261<=x262)&(x263%x264));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x265 = 1U;
	int16_t x266 = INT16_MAX;
	int32_t x267 = 52539510;
	uint16_t x268 = 1U;
	int32_t t64 = -23086;

	t64 = ((x265<=x266)&(x267%x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x269 = 0;
	volatile int8_t x270 = INT8_MAX;
	int8_t x271 = -1;
	static int16_t x272 = 180;
	volatile int32_t t65 = -86177;

	t65 = ((x269<=x270)&(x271%x272));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x273 = INT32_MIN;
	volatile uint64_t x274 = UINT64_MAX;
	int32_t x276 = INT32_MIN;
	static volatile uint32_t t66 = 261527U;

	t66 = ((x273<=x274)&(x275%x276));

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = -1;
	int32_t x282 = 257;
	int8_t x283 = -1;
	int16_t x284 = -1;
	volatile int32_t t67 = 21;

	t67 = ((x281<=x282)&(x283%x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x286 = 0;
	static int16_t x287 = -1;
	uint32_t x288 = 347931624U;
	volatile uint32_t t68 = 755756U;

	t68 = ((x285<=x286)&(x287%x288));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = INT16_MIN;
	static int64_t x291 = -6552419LL;
	volatile int64_t t69 = 7090499LL;

	t69 = ((x289<=x290)&(x291%x292));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x294 = UINT16_MAX;
	int64_t t70 = 2LL;

	t70 = ((x293<=x294)&(x295%x296));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x297 = 0U;
	volatile uint8_t x298 = 44U;
	static uint16_t x299 = 11U;
	static uint16_t x300 = UINT16_MAX;

	t71 = ((x297<=x298)&(x299%x300));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x301 = 34U;
	volatile uint32_t x302 = 1445776U;
	int16_t x303 = INT16_MIN;
	uint8_t x304 = UINT8_MAX;
	static int32_t t72 = -290432;

	t72 = ((x301<=x302)&(x303%x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x305 = INT8_MAX;
	uint16_t x306 = 1642U;
	uint64_t x307 = UINT64_MAX;
	uint64_t t73 = 333LLU;

	t73 = ((x305<=x306)&(x307%x308));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = INT32_MIN;
	uint8_t x310 = 26U;
	uint64_t x312 = 5871774348672641LLU;
	volatile uint64_t t74 = 4659435LLU;

	t74 = ((x309<=x310)&(x311%x312));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x313 = 17U;
	int64_t x314 = 4215455437162114LL;
	volatile uint8_t x316 = 123U;
	uint32_t t75 = 5514234U;

	t75 = ((x313<=x314)&(x315%x316));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = -874LL;
	static int64_t x318 = INT64_MIN;
	volatile int16_t x320 = -1;

	t76 = ((x317<=x318)&(x319%x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = INT8_MIN;
	int32_t x322 = INT32_MAX;
	int16_t x323 = -1;
	uint32_t x324 = 2384630U;

	t77 = ((x321<=x322)&(x323%x324));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = 30;
	uint8_t x326 = 7U;
	uint32_t x327 = 0U;
	static int16_t x328 = INT16_MAX;
	uint32_t t78 = 187795U;

	t78 = ((x325<=x326)&(x327%x328));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x329 = -1;
	int64_t t79 = -52545026438634559LL;

	t79 = ((x329<=x330)&(x331%x332));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x333 = INT32_MIN;
	int64_t x335 = -1LL;
	uint64_t x336 = 15458482LLU;
	uint64_t t80 = 505649898LLU;

	t80 = ((x333<=x334)&(x335%x336));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = INT8_MAX;
	int16_t x338 = -120;
	uint32_t x339 = 4623U;
	int8_t x340 = 3;
	uint32_t t81 = 97684U;

	t81 = ((x337<=x338)&(x339%x340));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x342 = 3815U;
	int8_t x343 = -1;
	int8_t x344 = -1;
	int32_t t82 = 496844;

	t82 = ((x341<=x342)&(x343%x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = -1LL;
	static volatile int16_t x346 = -1;
	int16_t x347 = -6;
	uint32_t x348 = 13U;

	t83 = ((x345<=x346)&(x347%x348));

	if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = 14524;
	int32_t x350 = INT32_MIN;
	int64_t x351 = -1LL;
	int64_t t84 = -1560527407446315LL;

	t84 = ((x349<=x350)&(x351%x352));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MIN;
	static int32_t x355 = -3655;
	int8_t x356 = -17;

	t85 = ((x353<=x354)&(x355%x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x357 = 7597;
	int64_t x358 = -3007751LL;
	static int32_t x359 = -1;
	int8_t x360 = INT8_MAX;

	t86 = ((x357<=x358)&(x359%x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x362 = INT8_MIN;
	uint8_t x363 = UINT8_MAX;
	static uint32_t x364 = UINT32_MAX;
	volatile uint32_t t87 = 14678U;

	t87 = ((x361<=x362)&(x363%x364));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x365 = UINT8_MAX;
	volatile int8_t x366 = -1;
	int32_t x367 = INT32_MAX;
	uint8_t x368 = 1U;
	int32_t t88 = -78;

	t88 = ((x365<=x366)&(x367%x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x369 = UINT64_MAX;
	volatile int32_t x370 = INT32_MIN;
	volatile int8_t x371 = INT8_MIN;
	volatile int32_t t89 = 88404;

	t89 = ((x369<=x370)&(x371%x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x374 = 2;
	int32_t t90 = -191140817;

	t90 = ((x373<=x374)&(x375%x376));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x377 = 152;
	int32_t x378 = INT32_MIN;
	int64_t x380 = -5340091044532LL;
	volatile int64_t t91 = -4379928148794650593LL;

	t91 = ((x377<=x378)&(x379%x380));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x381 = INT8_MIN;
	static uint16_t x383 = 26U;
	static int32_t x384 = INT32_MAX;
	volatile int32_t t92 = 2431900;

	t92 = ((x381<=x382)&(x383%x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x385 = INT64_MIN;
	int32_t x386 = -59939204;
	uint64_t x388 = 16774254LLU;
	uint64_t t93 = 70721LLU;

	t93 = ((x385<=x386)&(x387%x388));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x391 = 2964U;
	int16_t x392 = -404;
	int32_t t94 = 1044459264;

	t94 = ((x389<=x390)&(x391%x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x393 = UINT16_MAX;
	volatile int64_t x394 = 762268828396996LL;
	int8_t x395 = 29;
	static int32_t x396 = -17;
	int32_t t95 = -54;

	t95 = ((x393<=x394)&(x395%x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x397 = 8794;
	volatile int32_t x398 = -1;
	volatile int16_t x399 = INT16_MIN;
	volatile int32_t t96 = -25466;

	t96 = ((x397<=x398)&(x399%x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = INT8_MIN;
	static int64_t x402 = INT64_MIN;
	volatile int64_t x403 = -174493740613LL;
	static volatile uint8_t x404 = 27U;
	int64_t t97 = 6292091458LL;

	t97 = ((x401<=x402)&(x403%x404));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x406 = 816U;
	int64_t x408 = INT64_MAX;
	volatile uint64_t t98 = 202062LLU;

	t98 = ((x405<=x406)&(x407%x408));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x410 = INT32_MIN;
	int32_t x411 = INT32_MIN;
	int16_t x412 = 9005;
	int32_t t99 = 60359514;

	t99 = ((x409<=x410)&(x411%x412));

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

