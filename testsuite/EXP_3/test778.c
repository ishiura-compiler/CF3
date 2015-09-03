#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = UINT64_MAX;
uint16_t x11 = UINT16_MAX;
volatile int32_t t2 = 88;
static uint8_t x16 = 29U;
int64_t x27 = INT64_MIN;
static int64_t x29 = -246080753532LL;
volatile int32_t x46 = INT32_MAX;
int32_t t11 = 191644284;
int32_t x52 = INT32_MAX;
uint16_t x59 = 9904U;
uint32_t t14 = 2U;
int32_t x68 = 15791;
int32_t x71 = -1;
uint64_t x72 = 960832671LLU;
uint64_t t16 = 6433LLU;
static int16_t x78 = -2;
int8_t x81 = INT8_MIN;
int32_t x83 = INT32_MAX;
volatile uint32_t t18 = 16470U;
int64_t x87 = -1LL;
int16_t x89 = 2602;
volatile int8_t x92 = INT8_MIN;
int32_t t23 = 17;
int16_t x105 = INT16_MAX;
int16_t x117 = 6940;
static uint8_t x118 = UINT8_MAX;
int16_t x122 = INT16_MAX;
volatile int64_t t29 = -14448107970812609LL;
volatile int32_t t31 = -45304;
volatile int64_t x145 = INT64_MIN;
uint16_t x150 = 0U;
uint64_t x152 = 7502190232755LLU;
volatile uint64_t t35 = 3764LLU;
static volatile int64_t x158 = 17818974684495480LL;
uint8_t x160 = UINT8_MAX;
static volatile int64_t t37 = 860068591073138129LL;
volatile int8_t x161 = 2;
int32_t x163 = -1;
int64_t t38 = 17049784LL;
int8_t x167 = INT8_MIN;
int64_t x169 = -1LL;
uint16_t x171 = UINT16_MAX;
int8_t x175 = -1;
uint16_t x176 = UINT16_MAX;
volatile int64_t x179 = INT64_MIN;
volatile int64_t t42 = -94125548476LL;
volatile int64_t x182 = INT64_MIN;
int32_t x191 = -2;
volatile uint16_t x202 = 23U;
int64_t t48 = -1LL;
int8_t x207 = -1;
static volatile uint64_t t49 = 220624LLU;
uint64_t x211 = 14LLU;
int16_t x212 = 78;
int32_t x213 = 555;
static volatile uint64_t x218 = 130LLU;
int8_t x220 = -7;
static int16_t x226 = INT16_MIN;
int16_t x227 = -1318;
int64_t t53 = 1834LL;
int64_t x229 = INT64_MIN;
static volatile uint8_t x230 = 0U;
static uint32_t t61 = 8161U;
int64_t x266 = INT64_MIN;
int8_t x272 = -3;
volatile uint8_t x274 = 15U;
uint64_t t64 = 456LLU;
int16_t x277 = INT16_MIN;
int64_t x283 = INT64_MIN;
int32_t x286 = 555800706;
int32_t x288 = -1;
int8_t x290 = INT8_MAX;
int64_t x294 = 591307305296190LL;
int32_t x295 = INT32_MIN;
uint32_t t71 = 1426594U;
int32_t x305 = INT32_MIN;
static int8_t x314 = INT8_MAX;
static int32_t t74 = 1;
int16_t x320 = INT16_MIN;
static volatile int32_t t75 = 4;
int32_t x321 = 97747;
int32_t x325 = INT32_MAX;
volatile int64_t x326 = INT64_MAX;
uint64_t t77 = 30417932758219631LLU;
uint16_t x329 = UINT16_MAX;
volatile int32_t x330 = 1205;
uint8_t x335 = UINT8_MAX;
int64_t x345 = INT64_MAX;
uint64_t x346 = 6504164190375LLU;
int8_t x350 = 7;
int8_t x351 = INT8_MAX;
volatile int32_t t83 = -21;
int8_t x360 = 4;
static uint64_t x368 = UINT64_MAX;
volatile int16_t x379 = 1;
int64_t x390 = INT64_MAX;
int16_t x395 = -1;
uint16_t x396 = UINT16_MAX;
static int8_t x400 = INT8_MIN;
volatile int32_t x401 = INT32_MAX;
uint32_t x403 = 21474717U;
static volatile int32_t x406 = INT32_MAX;
int16_t x408 = INT16_MIN;
static int8_t x411 = INT8_MAX;
int64_t x412 = -320012LL;
volatile int32_t x415 = INT32_MAX;


void f0(void) {
	volatile int64_t x1 = -1LL;
	uint16_t x2 = 24U;
	static int32_t x3 = -6991434;
	int8_t x4 = -1;
	int32_t t0 = 3199;

	t0 = ((x1==x2)&(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static volatile int64_t x7 = -1LL;
	uint16_t x8 = UINT16_MAX;
	static int64_t t1 = 23885790097LL;

	t1 = ((x5==x6)&(x7%x8));

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	int64_t x10 = -1LL;
	uint8_t x12 = UINT8_MAX;

	t2 = ((x9==x10)&(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int32_t x14 = INT32_MIN;
	volatile uint16_t x15 = UINT16_MAX;
	int32_t t3 = 1548;

	t3 = ((x13==x14)&(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static int8_t x18 = -1;
	static int16_t x19 = -127;
	volatile int16_t x20 = INT16_MIN;
	int32_t t4 = 45494757;

	t4 = ((x17==x18)&(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	uint16_t x22 = 6U;
	static int16_t x23 = -1;
	int32_t x24 = INT32_MAX;
	static int32_t t5 = -39;

	t5 = ((x21==x22)&(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 0;
	int32_t x26 = 11;
	volatile uint8_t x28 = UINT8_MAX;
	int64_t t6 = -134829509657145LL;

	t6 = ((x25==x26)&(x27%x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x30 = INT8_MAX;
	volatile int64_t x31 = INT64_MIN;
	static int8_t x32 = INT8_MAX;
	int64_t t7 = 84216098899971624LL;

	t7 = ((x29==x30)&(x31%x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int8_t x34 = INT8_MAX;
	static int64_t x35 = -75326LL;
	int8_t x36 = -7;
	volatile int64_t t8 = 64385396LL;

	t8 = ((x33==x34)&(x35%x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	int8_t x38 = INT8_MIN;
	int16_t x39 = 39;
	int32_t x40 = INT32_MIN;
	static volatile int32_t t9 = -33;

	t9 = ((x37==x38)&(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 1501285541209713LLU;
	uint16_t x42 = UINT16_MAX;
	static int16_t x43 = INT16_MAX;
	int16_t x44 = 9164;
	volatile int32_t t10 = 2303;

	t10 = ((x41==x42)&(x43%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -1;
	static int16_t x47 = 0;
	int16_t x48 = 36;

	t11 = ((x45==x46)&(x47%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	volatile int16_t x50 = INT16_MIN;
	int8_t x51 = 20;
	int32_t t12 = 123919564;

	t12 = ((x49==x50)&(x51%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = INT64_MIN;
	int8_t x58 = -1;
	static int64_t x60 = 2645892611LL;
	volatile int64_t t13 = -62129LL;

	t13 = ((x57==x58)&(x59%x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = INT64_MAX;
	uint32_t x62 = UINT32_MAX;
	uint16_t x63 = 0U;
	uint32_t x64 = 113373719U;

	t14 = ((x61==x62)&(x63%x64));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 12678013U;
	int64_t x66 = INT64_MAX;
	int32_t x67 = 217747;
	volatile int32_t t15 = -1918582;

	t15 = ((x65==x66)&(x67%x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -1;
	int64_t x70 = -407977294700516016LL;

	t16 = ((x69==x70)&(x71%x72));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = -1;
	uint64_t x79 = 239836LLU;
	volatile int8_t x80 = 4;
	uint64_t t17 = 26140381388220LLU;

	t17 = ((x77==x78)&(x79%x80));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x82 = UINT8_MAX;
	volatile uint32_t x84 = UINT32_MAX;

	t18 = ((x81==x82)&(x83%x84));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = 0U;
	int16_t x86 = 2226;
	volatile int64_t x88 = -506679332862408LL;
	int64_t t19 = 204418LL;

	t19 = ((x85==x86)&(x87%x88));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x90 = INT64_MIN;
	int8_t x91 = -1;
	static volatile int32_t t20 = 42;

	t20 = ((x89==x90)&(x91%x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 0U;
	int8_t x94 = INT8_MAX;
	int64_t x95 = INT64_MIN;
	static uint32_t x96 = 12319U;
	int64_t t21 = 3780334376036735LL;

	t21 = ((x93==x94)&(x95%x96));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x97 = 69202028943453LLU;
	int8_t x98 = INT8_MAX;
	uint32_t x99 = UINT32_MAX;
	uint32_t x100 = 597U;
	volatile uint32_t t22 = 1649420906U;

	t22 = ((x97==x98)&(x99%x100));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = -46;
	int32_t x102 = INT32_MAX;
	int16_t x103 = INT16_MIN;
	int16_t x104 = -1;

	t23 = ((x101==x102)&(x103%x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x106 = INT8_MIN;
	volatile uint32_t x107 = 14645U;
	static int64_t x108 = 534LL;
	static volatile int64_t t24 = 112490LL;

	t24 = ((x105==x106)&(x107%x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MAX;
	int32_t x111 = -4;
	int8_t x112 = INT8_MIN;
	volatile int32_t t25 = 44;

	t25 = ((x109==x110)&(x111%x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MIN;
	int64_t x114 = -1LL;
	static uint8_t x115 = 2U;
	int32_t x116 = -15;
	volatile int32_t t26 = 131059450;

	t26 = ((x113==x114)&(x115%x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x119 = INT16_MAX;
	volatile uint32_t x120 = UINT32_MAX;
	static volatile uint32_t t27 = 23U;

	t27 = ((x117==x118)&(x119%x120));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x121 = INT32_MIN;
	volatile uint32_t x123 = 15072U;
	volatile int8_t x124 = -1;
	uint32_t t28 = 3887U;

	t28 = ((x121==x122)&(x123%x124));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MAX;
	volatile int64_t x126 = 87863639LL;
	static int8_t x127 = INT8_MIN;
	int64_t x128 = 54668098LL;

	t29 = ((x125==x126)&(x127%x128));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MAX;
	static volatile int8_t x130 = INT8_MAX;
	int8_t x131 = INT8_MIN;
	int32_t x132 = 46730;
	static volatile int32_t t30 = -547;

	t30 = ((x129==x130)&(x131%x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MIN;
	uint64_t x134 = UINT64_MAX;
	int32_t x135 = INT32_MAX;
	uint8_t x136 = UINT8_MAX;

	t31 = ((x133==x134)&(x135%x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x137 = 19U;
	int32_t x138 = INT32_MIN;
	int16_t x139 = -11;
	static int64_t x140 = INT64_MIN;
	int64_t t32 = -1804922469LL;

	t32 = ((x137==x138)&(x139%x140));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = INT8_MIN;
	volatile int16_t x142 = -1;
	int32_t x143 = -205665205;
	volatile uint32_t x144 = UINT32_MAX;
	uint32_t t33 = 622141U;

	t33 = ((x141==x142)&(x143%x144));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x146 = UINT8_MAX;
	int8_t x147 = INT8_MIN;
	static int64_t x148 = INT64_MIN;
	volatile int64_t t34 = -62338521296966508LL;

	t34 = ((x145==x146)&(x147%x148));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x149 = INT16_MAX;
	int32_t x151 = INT32_MIN;

	t35 = ((x149==x150)&(x151%x152));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x153 = -1LL;
	static uint16_t x154 = 14149U;
	static int16_t x155 = -1;
	uint16_t x156 = UINT16_MAX;
	static volatile int32_t t36 = -416217;

	t36 = ((x153==x154)&(x155%x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = 7460;
	int64_t x159 = INT64_MAX;

	t37 = ((x157==x158)&(x159%x160));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x162 = -1;
	int64_t x164 = -1LL;

	t38 = ((x161==x162)&(x163%x164));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x165 = -2674;
	static int16_t x166 = INT16_MIN;
	uint8_t x168 = 14U;
	int32_t t39 = -3;

	t39 = ((x165==x166)&(x167%x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x170 = INT16_MAX;
	int8_t x172 = INT8_MIN;
	volatile int32_t t40 = -31842536;

	t40 = ((x169==x170)&(x171%x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x173 = 8U;
	uint32_t x174 = UINT32_MAX;
	static int32_t t41 = 15470406;

	t41 = ((x173==x174)&(x175%x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = INT64_MIN;
	static int8_t x178 = INT8_MIN;
	int16_t x180 = INT16_MAX;

	t42 = ((x177==x178)&(x179%x180));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = 11;
	static uint32_t x183 = 353U;
	uint32_t x184 = UINT32_MAX;
	volatile uint32_t t43 = 119878343U;

	t43 = ((x181==x182)&(x183%x184));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x185 = 6522U;
	uint16_t x186 = UINT16_MAX;
	uint8_t x187 = 122U;
	uint32_t x188 = UINT32_MAX;
	uint32_t t44 = 6087U;

	t44 = ((x185==x186)&(x187%x188));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = UINT16_MAX;
	static volatile int64_t x190 = INT64_MAX;
	static volatile int32_t x192 = -4;
	volatile int32_t t45 = 48080914;

	t45 = ((x189==x190)&(x191%x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x193 = INT32_MIN;
	static volatile int64_t x194 = INT64_MAX;
	static uint16_t x195 = 554U;
	int16_t x196 = INT16_MAX;
	volatile int32_t t46 = 137000535;

	t46 = ((x193==x194)&(x195%x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x197 = 2174LLU;
	uint32_t x198 = UINT32_MAX;
	uint64_t x199 = 150LLU;
	int32_t x200 = INT32_MAX;
	volatile uint64_t t47 = 9353569120717786LLU;

	t47 = ((x197==x198)&(x199%x200));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = -1;
	volatile int64_t x203 = -1LL;
	int8_t x204 = -1;

	t48 = ((x201==x202)&(x203%x204));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x205 = 71987349U;
	uint16_t x206 = 1U;
	uint64_t x208 = 2LLU;

	t49 = ((x205==x206)&(x207%x208));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = INT16_MIN;
	volatile int32_t x210 = -200;
	static uint64_t t50 = 188808746773482LLU;

	t50 = ((x209==x210)&(x211%x212));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x214 = 11;
	int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MAX;
	int64_t t51 = 37949112622574704LL;

	t51 = ((x213==x214)&(x215%x216));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = INT8_MIN;
	int64_t x219 = INT64_MAX;
	int64_t t52 = 15793696239834LL;

	t52 = ((x217==x218)&(x219%x220));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x225 = 107U;
	volatile int64_t x228 = -1LL;

	t53 = ((x225==x226)&(x227%x228));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x231 = INT8_MIN;
	static int8_t x232 = INT8_MAX;
	int32_t t54 = -272528;

	t54 = ((x229==x230)&(x231%x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x237 = UINT8_MAX;
	int8_t x238 = 1;
	volatile int16_t x239 = 12;
	int32_t x240 = INT32_MAX;
	int32_t t55 = -253710;

	t55 = ((x237==x238)&(x239%x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x241 = UINT16_MAX;
	static volatile int16_t x242 = 5744;
	uint32_t x243 = 15483013U;
	uint8_t x244 = 1U;
	uint32_t t56 = 103U;

	t56 = ((x241==x242)&(x243%x244));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MIN;
	static int64_t x247 = -1LL;
	int64_t x248 = -1LL;
	int64_t t57 = -769786LL;

	t57 = ((x245==x246)&(x247%x248));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = 264557230206090403LLU;
	int64_t x250 = -1LL;
	volatile int32_t x251 = -31;
	volatile uint16_t x252 = 10U;
	volatile int32_t t58 = -1;

	t58 = ((x249==x250)&(x251%x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x253 = 846459440U;
	int8_t x254 = INT8_MAX;
	int64_t x255 = -1LL;
	volatile int64_t x256 = -1LL;
	volatile int64_t t59 = -8979681371LL;

	t59 = ((x253==x254)&(x255%x256));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x257 = INT8_MIN;
	static uint8_t x258 = 87U;
	static volatile int32_t x259 = -16382992;
	volatile int8_t x260 = INT8_MAX;
	static int32_t t60 = 245;

	t60 = ((x257==x258)&(x259%x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x261 = 2045059;
	uint32_t x262 = UINT32_MAX;
	int32_t x263 = -6;
	volatile uint32_t x264 = UINT32_MAX;

	t61 = ((x261==x262)&(x263%x264));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x265 = 0U;
	int16_t x267 = -3480;
	int64_t x268 = INT64_MIN;
	static int64_t t62 = -232191583857688LL;

	t62 = ((x265==x266)&(x267%x268));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x269 = UINT64_MAX;
	int32_t x270 = INT32_MIN;
	static uint64_t x271 = 276470LLU;
	uint64_t t63 = 3807019091725656687LLU;

	t63 = ((x269==x270)&(x271%x272));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = INT8_MIN;
	volatile int8_t x275 = INT8_MIN;
	uint64_t x276 = 37LLU;

	t64 = ((x273==x274)&(x275%x276));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x278 = INT64_MIN;
	volatile int64_t x279 = INT64_MAX;
	int16_t x280 = INT16_MIN;
	int64_t t65 = 27748433LL;

	t65 = ((x277==x278)&(x279%x280));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x281 = INT8_MAX;
	uint8_t x282 = UINT8_MAX;
	uint16_t x284 = UINT16_MAX;
	static int64_t t66 = -127782269893658LL;

	t66 = ((x281==x282)&(x283%x284));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x285 = UINT8_MAX;
	int8_t x287 = INT8_MAX;
	static int32_t t67 = 492223;

	t67 = ((x285==x286)&(x287%x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = INT16_MAX;
	uint8_t x291 = UINT8_MAX;
	int8_t x292 = INT8_MAX;
	int32_t t68 = -101;

	t68 = ((x289==x290)&(x291%x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x293 = 1227892949565844LLU;
	int32_t x296 = -13839;
	volatile int32_t t69 = 28081956;

	t69 = ((x293==x294)&(x295%x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x297 = UINT16_MAX;
	int64_t x298 = -2LL;
	volatile int32_t x299 = -45965;
	volatile uint32_t x300 = 2071118935U;
	uint32_t t70 = 33U;

	t70 = ((x297==x298)&(x299%x300));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x301 = 1747923LLU;
	volatile int32_t x302 = INT32_MAX;
	volatile uint8_t x303 = 11U;
	volatile uint32_t x304 = 1U;

	t71 = ((x301==x302)&(x303%x304));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x306 = INT8_MAX;
	volatile int32_t x307 = INT32_MAX;
	uint64_t x308 = UINT64_MAX;
	static uint64_t t72 = 4011325LLU;

	t72 = ((x305==x306)&(x307%x308));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = INT32_MIN;
	static volatile int8_t x310 = -1;
	static int32_t x311 = INT32_MAX;
	static volatile int16_t x312 = INT16_MAX;
	volatile int32_t t73 = -4882690;

	t73 = ((x309==x310)&(x311%x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x313 = UINT32_MAX;
	uint8_t x315 = UINT8_MAX;
	static uint8_t x316 = UINT8_MAX;

	t74 = ((x313==x314)&(x315%x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x317 = INT8_MIN;
	uint8_t x318 = 1U;
	int16_t x319 = INT16_MAX;

	t75 = ((x317==x318)&(x319%x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x322 = 12;
	static volatile int64_t x323 = 8156LL;
	volatile int16_t x324 = INT16_MIN;
	int64_t t76 = -56343779534LL;

	t76 = ((x321==x322)&(x323%x324));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x327 = -1LL;
	uint64_t x328 = 54667841148LLU;

	t77 = ((x325==x326)&(x327%x328));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x331 = UINT32_MAX;
	static int32_t x332 = INT32_MIN;
	static volatile uint32_t t78 = 0U;

	t78 = ((x329==x330)&(x331%x332));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = -113;
	volatile int16_t x334 = -46;
	int8_t x336 = 33;
	static int32_t t79 = -898;

	t79 = ((x333==x334)&(x335%x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = -2987;
	static uint16_t x338 = 1U;
	int32_t x339 = -1;
	static int32_t x340 = -33199709;
	static int32_t t80 = 3236;

	t80 = ((x337==x338)&(x339%x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x341 = -1;
	static volatile int32_t x342 = -1;
	static volatile int64_t x343 = 278339109452183LL;
	int16_t x344 = INT16_MIN;
	int64_t t81 = -88987194252LL;

	t81 = ((x341==x342)&(x343%x344));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x347 = 2;
	int32_t x348 = 683729;
	int32_t t82 = 0;

	t82 = ((x345==x346)&(x347%x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x349 = INT64_MIN;
	uint8_t x352 = UINT8_MAX;

	t83 = ((x349==x350)&(x351%x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x353 = UINT64_MAX;
	uint8_t x354 = UINT8_MAX;
	static int16_t x355 = -1;
	int32_t x356 = INT32_MIN;
	int32_t t84 = -5;

	t84 = ((x353==x354)&(x355%x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x357 = 1141286078U;
	int32_t x358 = -1;
	int16_t x359 = 2;
	static int32_t t85 = 176;

	t85 = ((x357==x358)&(x359%x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x361 = INT16_MIN;
	int16_t x362 = -1;
	uint32_t x363 = 1180034031U;
	volatile uint64_t x364 = UINT64_MAX;
	volatile uint64_t t86 = 510205741498882207LLU;

	t86 = ((x361==x362)&(x363%x364));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x365 = 97;
	int16_t x366 = -31;
	static int32_t x367 = 71912;
	volatile uint64_t t87 = 1680075044905516LLU;

	t87 = ((x365==x366)&(x367%x368));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x369 = INT64_MIN;
	int32_t x370 = -444038;
	int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MIN;
	volatile int64_t t88 = 8491452651967LL;

	t88 = ((x369==x370)&(x371%x372));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x373 = INT16_MAX;
	int16_t x374 = -1234;
	static int16_t x375 = INT16_MAX;
	volatile int8_t x376 = INT8_MIN;
	static volatile int32_t t89 = -103;

	t89 = ((x373==x374)&(x375%x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = INT64_MIN;
	uint8_t x378 = 8U;
	int32_t x380 = INT32_MIN;
	int32_t t90 = 136;

	t90 = ((x377==x378)&(x379%x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x381 = UINT8_MAX;
	volatile uint8_t x382 = 21U;
	static int8_t x383 = -20;
	static volatile int64_t x384 = -1LL;
	volatile int64_t t91 = 82867501257918408LL;

	t91 = ((x381==x382)&(x383%x384));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = -1;
	int8_t x386 = INT8_MIN;
	int64_t x387 = -1LL;
	int64_t x388 = INT64_MIN;
	int64_t t92 = 2188547271631LL;

	t92 = ((x385==x386)&(x387%x388));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x389 = INT8_MIN;
	int16_t x391 = -1;
	static int32_t x392 = INT32_MAX;
	volatile int32_t t93 = 60;

	t93 = ((x389==x390)&(x391%x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x393 = 0;
	uint32_t x394 = 7U;
	static int32_t t94 = 0;

	t94 = ((x393==x394)&(x395%x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x397 = UINT64_MAX;
	int32_t x398 = -1;
	static volatile uint16_t x399 = 1U;
	volatile int32_t t95 = -933;

	t95 = ((x397==x398)&(x399%x400));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x402 = INT64_MAX;
	static uint32_t x404 = 35660U;
	uint32_t t96 = 15U;

	t96 = ((x401==x402)&(x403%x404));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x405 = 1890384110LLU;
	int64_t x407 = -1LL;
	int64_t t97 = -3LL;

	t97 = ((x405==x406)&(x407%x408));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x409 = 16172763U;
	int8_t x410 = -1;
	volatile int64_t t98 = 1LL;

	t98 = ((x409==x410)&(x411%x412));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x413 = 1U;
	static uint8_t x414 = 8U;
	volatile int8_t x416 = 3;
	int32_t t99 = 35725787;

	t99 = ((x413==x414)&(x415%x416));

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

