#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
static volatile uint8_t x4 = UINT8_MAX;
volatile int32_t x12 = -1;
int64_t x16 = -390LL;
volatile int8_t x25 = INT8_MIN;
int8_t x32 = INT8_MIN;
static int16_t x33 = -1;
uint64_t x34 = UINT64_MAX;
uint32_t x35 = 1001810U;
volatile int32_t x36 = INT32_MIN;
int16_t x37 = 7635;
static uint8_t x38 = 52U;
static int8_t x39 = -1;
static int32_t x55 = -96143;
uint32_t x60 = 1497809U;
int8_t x62 = 8;
volatile uint32_t x64 = 316347631U;
volatile uint64_t t13 = 67LLU;
volatile uint16_t x65 = UINT16_MAX;
int32_t x66 = -228;
int8_t x79 = -57;
uint8_t x85 = 75U;
volatile int16_t x87 = INT16_MIN;
int8_t x92 = INT8_MIN;
uint32_t t19 = 28919491U;
uint64_t x98 = 6235658495997431186LLU;
volatile int8_t x107 = INT8_MIN;
int8_t x111 = -18;
volatile int16_t x113 = INT16_MAX;
uint64_t t27 = 10LLU;
int8_t x128 = -1;
uint32_t t28 = 904750398U;
int16_t x133 = 26;
volatile int32_t x135 = 2;
static int32_t x145 = -1;
static int8_t x149 = -29;
int16_t x152 = INT16_MIN;
volatile int64_t t33 = 4590754109LL;
uint16_t x156 = 84U;
static volatile uint32_t t34 = 7172U;
volatile int64_t x159 = -1LL;
int64_t x162 = -706088LL;
int32_t x165 = -1;
volatile int8_t x167 = 0;
volatile int32_t t37 = 1;
uint8_t x170 = UINT8_MAX;
int16_t x172 = INT16_MIN;
volatile int64_t t38 = -3491780LL;
volatile int64_t x178 = INT64_MIN;
int16_t x179 = -1;
int64_t t40 = 2956313642096929LL;
volatile int64_t x196 = 4LL;
uint64_t t44 = 175412731444580802LLU;
static int8_t x215 = -1;
volatile uint64_t t48 = 9LLU;
volatile int8_t x234 = 0;
int16_t x235 = INT16_MIN;
volatile uint32_t t53 = 1667245778U;
volatile int32_t x253 = -1;
uint32_t x257 = 11674626U;
uint16_t x258 = 3205U;
volatile uint16_t x259 = 6710U;
volatile uint32_t t56 = 2085853U;
int8_t x263 = 38;
volatile uint64_t t57 = 4131318760141640662LLU;
int8_t x270 = -48;
static int8_t x273 = INT8_MAX;
volatile int8_t x274 = -1;
int64_t x282 = 112LL;
uint16_t x291 = 200U;
volatile uint16_t x294 = UINT16_MAX;
volatile int64_t x298 = -3383LL;
volatile int64_t x305 = -1LL;
uint32_t x307 = 5873U;
static volatile int64_t t67 = -2974897345562LL;
volatile int64_t t68 = 1415842157LL;
static volatile int64_t t69 = -5527LL;
uint16_t x338 = 1U;
uint16_t x339 = UINT16_MAX;
volatile uint64_t x340 = UINT64_MAX;
int64_t x347 = -7442878LL;
int16_t x354 = -1;
int32_t t77 = -332999216;
int64_t x362 = -24536049471391LL;
int8_t x365 = INT8_MAX;
volatile int32_t x366 = INT32_MIN;
uint8_t x373 = 13U;
int8_t x374 = -1;
volatile int32_t t82 = -1;
int8_t x379 = INT8_MIN;
int64_t t83 = -1LL;
volatile int64_t x383 = INT64_MIN;
int16_t x389 = INT16_MIN;
volatile int16_t x405 = 3;
uint32_t x408 = UINT32_MAX;
volatile int8_t x421 = INT8_MIN;
static volatile uint8_t x422 = UINT8_MAX;
volatile int32_t t92 = 7132;
uint32_t x431 = UINT32_MAX;
static uint32_t x433 = 253U;
int64_t x435 = INT64_MIN;
int8_t x441 = INT8_MIN;
int16_t x446 = INT16_MIN;
uint16_t x447 = 5U;
static int8_t x448 = -1;
int32_t x449 = INT32_MIN;
volatile uint64_t x451 = 800234054914LLU;


void f0(void) {
	int16_t x1 = 838;
	static int16_t x3 = INT16_MIN;
	int32_t t0 = 1264;

	t0 = (x1^(x2|(x3-x4)));

	if (t0 != -33721) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static int32_t x6 = INT32_MIN;
	static int64_t x7 = 236347469624431298LL;
	static int16_t x8 = -14;
	volatile int64_t t1 = 59318901LL;

	t1 = (x5^(x6|(x7-x8)));

	if (t1 != 91827536LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int32_t x10 = INT32_MAX;
	static uint32_t x11 = 3952U;
	uint32_t t2 = 1U;

	t2 = (x9^(x10|(x11-x12)));

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	int8_t x14 = -19;
	int32_t x15 = -126922651;
	int64_t t3 = -3257356015468791LL;

	t3 = (x13^(x14|(x15-x16)));

	if (t3 != 111LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = 222319736497155LL;
	uint32_t x18 = UINT32_MAX;
	int8_t x19 = -1;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 58618614LL;

	t4 = (x17^(x18|(x19-x20)));

	if (t4 != 9223149717118278652LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = 1;
	int8_t x27 = -4;
	volatile int8_t x28 = -1;
	volatile int32_t t5 = -36261;

	t5 = (x25^(x26|(x27-x28)));

	if (t5 != 125) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = UINT64_MAX;
	int16_t x30 = INT16_MIN;
	static int16_t x31 = -1;
	uint64_t t6 = 45846624LLU;

	t6 = (x29^(x30|(x31-x32)));

	if (t6 != 32640LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t t7 = 63112LLU;

	t7 = (x33^(x34|(x35-x36)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x40 = INT16_MIN;
	volatile int32_t t8 = -186;

	t8 = (x37^(x38|(x39-x40)));

	if (t8 != 25132) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = UINT32_MAX;
	volatile int64_t x42 = INT64_MIN;
	volatile uint64_t x43 = UINT64_MAX;
	static int16_t x44 = -6278;
	static uint64_t t9 = 224434605178867LLU;

	t9 = (x41^(x42|(x43-x44)));

	if (t9 != 9223372041149736826LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -111;
	static int8_t x50 = INT8_MIN;
	int16_t x51 = INT16_MIN;
	uint8_t x52 = 5U;
	volatile int32_t t10 = -10710;

	t10 = (x49^(x50|(x51-x52)));

	if (t10 != 106) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MIN;
	static int16_t x54 = INT16_MAX;
	uint16_t x56 = 5U;
	int32_t t11 = 360974852;

	t11 = (x53^(x54|(x55-x56)));

	if (t11 != 2147418111) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = 0;
	int16_t x58 = INT16_MIN;
	static uint16_t x59 = 3U;
	static uint32_t t12 = 110329U;

	t12 = (x57^(x58|(x59-x60)));

	if (t12 != 4294944050U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = 267662379930451LL;
	static uint64_t x63 = 128384660118489750LLU;

	t13 = (x61^(x62|(x63-x64)));

	if (t13 != 128614663906584316LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x67 = 1261U;
	static uint32_t x68 = UINT32_MAX;
	uint32_t t14 = 186385614U;

	t14 = (x65^(x66|(x67-x68)));

	if (t14 != 4294901761U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = UINT8_MAX;
	uint32_t x70 = 6930609U;
	int64_t x71 = INT64_MIN;
	uint64_t x72 = UINT64_MAX;
	uint64_t t15 = 577412142554644220LLU;

	t15 = (x69^(x70|(x71-x72)));

	if (t15 != 9223372036861706318LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MIN;
	uint32_t x78 = UINT32_MAX;
	int16_t x80 = INT16_MIN;
	uint32_t t16 = 3U;

	t16 = (x77^(x78|(x79-x80)));

	if (t16 != 127U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = 0;
	volatile int64_t x82 = 452662828009708LL;
	int16_t x83 = 119;
	int16_t x84 = -1;
	int64_t t17 = 186LL;

	t17 = (x81^(x82|(x83-x84)));

	if (t17 != 452662828009724LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x86 = 51;
	static uint8_t x88 = 0U;
	volatile int32_t t18 = -35811565;

	t18 = (x85^(x86|(x87-x88)));

	if (t18 != -32648) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = 405U;
	volatile int8_t x90 = -1;
	int16_t x91 = 0;

	t19 = (x89^(x90|(x91-x92)));

	if (t19 != 4294966890U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x93 = -1;
	static int16_t x94 = -1;
	int16_t x95 = INT16_MIN;
	static int64_t x96 = INT64_MIN;
	int64_t t20 = -3711527487LL;

	t20 = (x93^(x94|(x95-x96)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = 27;
	uint16_t x99 = 7U;
	static int16_t x100 = 77;
	static uint64_t t21 = 35807558013LLU;

	t21 = (x97^(x98|(x99-x100)));

	if (t21 != 18446744073709551521LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MIN;
	volatile int8_t x102 = INT8_MIN;
	volatile int16_t x103 = INT16_MIN;
	uint16_t x104 = 75U;
	static int64_t t22 = 226080612LL;

	t22 = (x101^(x102|(x103-x104)));

	if (t22 != 9223372036854775733LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MIN;
	volatile int8_t x106 = -3;
	int64_t x108 = -1LL;
	int64_t t23 = 8329333889202388LL;

	t23 = (x105^(x106|(x107-x108)));

	if (t23 != 125LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = UINT32_MAX;
	volatile uint64_t x110 = UINT64_MAX;
	uint64_t x112 = UINT64_MAX;
	uint64_t t24 = 27908903842LLU;

	t24 = (x109^(x110|(x111-x112)));

	if (t24 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x114 = INT8_MAX;
	static volatile int32_t x115 = -183400472;
	int16_t x116 = INT16_MIN;
	static int32_t t25 = -6758;

	t25 = (x113^(x114|(x115-x116)));

	if (t25 != -183339008) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = INT32_MIN;
	volatile int64_t x118 = INT64_MIN;
	static int8_t x119 = 0;
	uint32_t x120 = UINT32_MAX;
	static volatile int64_t t26 = -818LL;

	t26 = (x117^(x118|(x119-x120)));

	if (t26 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = INT8_MIN;
	int32_t x122 = INT32_MAX;
	uint64_t x123 = 893280702863202677LLU;
	uint32_t x124 = UINT32_MAX;

	t27 = (x121^(x122|(x123-x124)));

	if (t27 != 17553463373042024575LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = 0U;
	static uint32_t x126 = 443432U;
	int32_t x127 = INT32_MIN;

	t28 = (x125^(x126|(x127-x128)));

	if (t28 != 2147927081U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x129 = INT64_MIN;
	int8_t x130 = INT8_MIN;
	uint64_t x131 = UINT64_MAX;
	int64_t x132 = INT64_MIN;
	static volatile uint64_t t29 = 26676130486LLU;

	t29 = (x129^(x130|(x131-x132)));

	if (t29 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x134 = INT16_MAX;
	int64_t x136 = INT64_MAX;
	static int64_t t30 = 13289000402220472LL;

	t30 = (x133^(x134|(x135-x136)));

	if (t30 != -9223372036854743067LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x141 = 20551829U;
	volatile int32_t x142 = -499577;
	static uint64_t x143 = 226873189705560442LLU;
	static int32_t x144 = INT32_MIN;
	volatile uint64_t t31 = 1123314907780377LLU;

	t31 = (x141^(x142|(x143-x144)));

	if (t31 != 18446744073688869226LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x146 = 114639U;
	static uint8_t x147 = 45U;
	volatile uint32_t x148 = 2043718U;
	uint32_t t32 = 244243519U;

	t32 = (x145^(x146|(x147-x148)));

	if (t32 != 1966096U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x150 = INT64_MIN;
	int8_t x151 = -1;

	t33 = (x149^(x150|(x151-x152)));

	if (t33 != 9223372036854743068LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = INT8_MAX;
	int16_t x154 = INT16_MIN;
	uint32_t x155 = 26U;

	t34 = (x153^(x154|(x155-x156)));

	if (t34 != 4294967225U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x157 = UINT32_MAX;
	uint32_t x158 = UINT32_MAX;
	int8_t x160 = 4;
	int64_t t35 = -56022LL;

	t35 = (x157^(x158|(x159-x160)));

	if (t35 != -4294967296LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = -1;
	uint64_t x163 = 43327596LLU;
	int8_t x164 = INT8_MIN;
	static uint64_t t36 = 12599LLU;

	t36 = (x161^(x162|(x163-x164)));

	if (t36 != 706051LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x166 = 53U;
	int8_t x168 = 1;

	t37 = (x165^(x166|(x167-x168)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = INT64_MAX;
	static int32_t x171 = INT32_MIN;

	t38 = (x169^(x170|(x171-x172)));

	if (t38 != -9223372034707325184LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = INT8_MIN;
	uint32_t x174 = 543U;
	int16_t x175 = INT16_MAX;
	int64_t x176 = INT64_MAX;
	int64_t t39 = 1LL;

	t39 = (x173^(x174|(x175-x176)));

	if (t39 != 9223372036854742431LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = -4584;
	int64_t x180 = -1LL;

	t40 = (x177^(x178|(x179-x180)));

	if (t40 != 9223372036854771224LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MAX;
	volatile uint64_t x182 = 188245938930LLU;
	volatile int16_t x183 = -1208;
	int16_t x184 = -1;
	static uint64_t t41 = 392LLU;

	t41 = (x181^(x182|(x183-x184)));

	if (t41 != 18446744071562068996LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x185 = UINT64_MAX;
	static int16_t x186 = INT16_MIN;
	int8_t x187 = 5;
	int16_t x188 = INT16_MIN;
	static uint64_t t42 = 7222305660LLU;

	t42 = (x185^(x186|(x187-x188)));

	if (t42 != 32762LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = INT8_MIN;
	int64_t x190 = -15060280887599688LL;
	int64_t x191 = -1LL;
	volatile int64_t x192 = -1LL;
	int64_t t43 = 3853750LL;

	t43 = (x189^(x190|(x191-x192)));

	if (t43 != 15060280887599672LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x193 = 29U;
	uint64_t x194 = UINT64_MAX;
	int32_t x195 = INT32_MIN;

	t44 = (x193^(x194|(x195-x196)));

	if (t44 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = UINT32_MAX;
	int16_t x198 = 1;
	int8_t x199 = INT8_MIN;
	int16_t x200 = INT16_MIN;
	volatile uint32_t t45 = 17624U;

	t45 = (x197^(x198|(x199-x200)));

	if (t45 != 4294934654U) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x205 = INT64_MIN;
	uint32_t x206 = 235U;
	static volatile uint8_t x207 = 106U;
	uint16_t x208 = UINT16_MAX;
	int64_t t46 = 1565493859264467LL;

	t46 = (x205^(x206|(x207-x208)));

	if (t46 != -9223372032559873813LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x209 = 14861U;
	uint8_t x210 = UINT8_MAX;
	int32_t x211 = -1;
	int16_t x212 = -181;
	volatile int32_t t47 = 3427;

	t47 = (x209^(x210|(x211-x212)));

	if (t47 != 15090) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = INT16_MAX;
	volatile uint64_t x214 = UINT64_MAX;
	volatile uint64_t x216 = UINT64_MAX;

	t48 = (x213^(x214|(x215-x216)));

	if (t48 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = -1;
	uint16_t x218 = UINT16_MAX;
	int16_t x219 = INT16_MAX;
	uint64_t x220 = 993820008693LLU;
	uint64_t t49 = 246765LLU;

	t49 = (x217^(x218|(x219-x220)));

	if (t49 != 993819951104LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x229 = 38675099U;
	int16_t x230 = -589;
	static int64_t x231 = INT64_MAX;
	uint8_t x232 = UINT8_MAX;
	int64_t t50 = 49LL;

	t50 = (x229^(x230|(x231-x232)));

	if (t50 != -38675160LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x233 = 22572835561520772LL;
	volatile uint8_t x236 = 54U;
	volatile int64_t t51 = 13502447762543185LL;

	t51 = (x233^(x234|(x235-x236)));

	if (t51 != -22572835561488050LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x237 = 10U;
	int8_t x238 = INT8_MIN;
	volatile int32_t x239 = INT32_MIN;
	static int64_t x240 = 972094304183LL;
	static int64_t t52 = -545735000981LL;

	t52 = (x237^(x238|(x239-x240)));

	if (t52 != -61LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x241 = 242779U;
	uint32_t x242 = 15871U;
	uint32_t x243 = UINT32_MAX;
	static uint16_t x244 = 740U;

	t53 = (x241^(x242|(x243-x244)));

	if (t53 != 4294724004U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = -226199868;
	volatile int8_t x246 = INT8_MIN;
	static int64_t x247 = 3947666763627436LL;
	uint32_t x248 = 5708871U;
	int64_t t54 = -5628126648265249LL;

	t54 = (x245^(x246|(x247-x248)));

	if (t54 != 226199841LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x254 = INT64_MIN;
	static int64_t x255 = INT64_MIN;
	int64_t x256 = INT64_MIN;
	volatile int64_t t55 = INT64_MAX;

	t55 = (x253^(x254|(x255-x256)));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x260 = INT8_MIN;

	t56 = (x257^(x258|(x259-x260)));

	if (t56 != 11680437U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x261 = INT64_MAX;
	static volatile uint64_t x262 = 0LLU;
	static uint64_t x264 = UINT64_MAX;

	t57 = (x261^(x262|(x263-x264)));

	if (t57 != 9223372036854775768LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x265 = 11U;
	static int16_t x266 = 2480;
	uint64_t x267 = UINT64_MAX;
	uint8_t x268 = UINT8_MAX;
	uint64_t t58 = 113054731526721969LLU;

	t58 = (x265^(x266|(x267-x268)));

	if (t58 != 18446744073709551547LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x269 = 27;
	int8_t x271 = -1;
	volatile int32_t x272 = INT32_MIN;
	int32_t t59 = 106;

	t59 = (x269^(x270|(x271-x272)));

	if (t59 != -28) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x275 = 3;
	volatile int32_t x276 = -1;
	volatile int32_t t60 = -1;

	t60 = (x273^(x274|(x275-x276)));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = INT16_MIN;
	volatile uint32_t x278 = 193U;
	int8_t x279 = INT8_MIN;
	int8_t x280 = -1;
	volatile uint32_t t61 = 3472U;

	t61 = (x277^(x278|(x279-x280)));

	if (t61 != 32705U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x281 = INT16_MIN;
	int64_t x283 = -1LL;
	static uint8_t x284 = 16U;
	int64_t t62 = -1500917615627056601LL;

	t62 = (x281^(x282|(x283-x284)));

	if (t62 != 32767LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x285 = -15;
	static int32_t x286 = -1;
	volatile int32_t x287 = -144462;
	volatile uint16_t x288 = 3U;
	static int32_t t63 = 66157630;

	t63 = (x285^(x286|(x287-x288)));

	if (t63 != 14) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x289 = INT8_MAX;
	static uint8_t x290 = 23U;
	int8_t x292 = INT8_MIN;
	static int32_t t64 = 347199;

	t64 = (x289^(x290|(x291-x292)));

	if (t64 != 288) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x293 = 2008;
	int64_t x295 = -1LL;
	int8_t x296 = -23;
	volatile int64_t t65 = 113743143980088576LL;

	t65 = (x293^(x294|(x295-x296)));

	if (t65 != 63527LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x297 = INT16_MIN;
	uint16_t x299 = UINT16_MAX;
	static volatile int16_t x300 = INT16_MAX;
	int64_t t66 = -225LL;

	t66 = (x297^(x298|(x299-x300)));

	if (t66 != 29385LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x306 = 2U;
	int8_t x308 = -31;

	t67 = (x305^(x306|(x307-x308)));

	if (t67 != -5907LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x309 = -8375919391LL;
	volatile int8_t x310 = INT8_MAX;
	uint8_t x311 = 31U;
	int16_t x312 = -1;

	t68 = (x309^(x310|(x311-x312)));

	if (t68 != -8375919458LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x313 = 27U;
	static int16_t x314 = INT16_MIN;
	volatile int64_t x315 = -33LL;
	static uint16_t x316 = UINT16_MAX;

	t69 = (x313^(x314|(x315-x316)));

	if (t69 != -5LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x317 = INT16_MIN;
	int64_t x318 = INT64_MIN;
	int64_t x319 = INT64_MIN;
	int16_t x320 = INT16_MIN;
	volatile int64_t t70 = 25667232590106078LL;

	t70 = (x317^(x318|(x319-x320)));

	if (t70 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x321 = -1;
	int32_t x322 = INT32_MIN;
	volatile int32_t x323 = 463;
	int8_t x324 = INT8_MIN;
	volatile int32_t t71 = -99;

	t71 = (x321^(x322|(x323-x324)));

	if (t71 != 2147483056) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x325 = UINT32_MAX;
	static uint64_t x326 = 485119LLU;
	static int32_t x327 = -1;
	uint32_t x328 = 211U;
	volatile uint64_t t72 = 9680136220LLU;

	t72 = (x325^(x326|(x327-x328)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x329 = UINT64_MAX;
	int32_t x330 = INT32_MAX;
	int32_t x331 = 11251;
	volatile uint16_t x332 = UINT16_MAX;
	uint64_t t73 = 15811545593841813LLU;

	t73 = (x329^(x330|(x331-x332)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x337 = INT16_MAX;
	static uint64_t t74 = 170LLU;

	t74 = (x337^(x338|(x339-x340)));

	if (t74 != 98302LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x345 = -6550;
	int8_t x346 = INT8_MIN;
	uint8_t x348 = 10U;
	int64_t t75 = 5719173049LL;

	t75 = (x345^(x346|(x347-x348)));

	if (t75 != 6610LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x349 = -1149342978645356176LL;
	int8_t x350 = 0;
	volatile int8_t x351 = INT8_MIN;
	static int16_t x352 = INT16_MIN;
	volatile int64_t t76 = 1369914435275426LL;

	t76 = (x349^(x350|(x351-x352)));

	if (t76 != -1149342978645332240LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x353 = -1;
	int16_t x355 = 1;
	uint16_t x356 = UINT16_MAX;

	t77 = (x353^(x354|(x355-x356)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x357 = INT16_MIN;
	int32_t x358 = INT32_MIN;
	int64_t x359 = -9LL;
	int16_t x360 = INT16_MAX;
	volatile int64_t t78 = -4138465405LL;

	t78 = (x357^(x358|(x359-x360)));

	if (t78 != 65528LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x361 = 3LL;
	int8_t x363 = -12;
	int8_t x364 = INT8_MIN;
	int64_t t79 = -23LL;

	t79 = (x361^(x362|(x363-x364)));

	if (t79 != -24536049471370LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x367 = INT16_MAX;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t80 = 1971009;

	t80 = (x365^(x366|(x367-x368)));

	if (t80 != -2147451009) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x369 = INT32_MIN;
	int64_t x370 = -610537101LL;
	int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MIN;
	int64_t t81 = -387996703LL;

	t81 = (x369^(x370|(x371-x372)));

	if (t81 != 1536946547LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x375 = -8620;
	static int8_t x376 = 4;

	t82 = (x373^(x374|(x375-x376)));

	if (t82 != -14) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x377 = -1;
	int64_t x378 = 4089LL;
	int16_t x380 = -1;

	t83 = (x377^(x378|(x379-x380)));

	if (t83 != 6LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x381 = INT8_MAX;
	volatile int8_t x382 = -1;
	int16_t x384 = INT16_MIN;
	int64_t t84 = 452372275LL;

	t84 = (x381^(x382|(x383-x384)));

	if (t84 != -128LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x385 = INT64_MIN;
	static int8_t x386 = INT8_MIN;
	static int32_t x387 = -1;
	uint32_t x388 = 40U;
	volatile int64_t t85 = -27350314642374LL;

	t85 = (x385^(x386|(x387-x388)));

	if (t85 != -9223372032559808553LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x390 = INT64_MAX;
	uint8_t x391 = UINT8_MAX;
	uint16_t x392 = UINT16_MAX;
	volatile int64_t t86 = 7996772295LL;

	t86 = (x389^(x390|(x391-x392)));

	if (t86 != 32767LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x393 = INT32_MAX;
	int64_t x394 = INT64_MIN;
	int32_t x395 = INT32_MIN;
	int16_t x396 = -1;
	int64_t t87 = -30974449102709743LL;

	t87 = (x393^(x394|(x395-x396)));

	if (t87 != -2LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x397 = INT64_MIN;
	uint16_t x398 = 414U;
	int16_t x399 = -1;
	int32_t x400 = INT32_MIN;
	int64_t t88 = -552538731LL;

	t88 = (x397^(x398|(x399-x400)));

	if (t88 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x401 = INT8_MIN;
	int8_t x402 = INT8_MIN;
	uint8_t x403 = UINT8_MAX;
	static uint32_t x404 = UINT32_MAX;
	uint32_t t89 = 609U;

	t89 = (x401^(x402|(x403-x404)));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x406 = -1LL;
	uint32_t x407 = 10U;
	static volatile int64_t t90 = 55710939013659LL;

	t90 = (x405^(x406|(x407-x408)));

	if (t90 != -4LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x409 = INT8_MIN;
	int32_t x410 = -1;
	uint8_t x411 = UINT8_MAX;
	static int64_t x412 = INT64_MAX;
	volatile int64_t t91 = 801865585488LL;

	t91 = (x409^(x410|(x411-x412)));

	if (t91 != 127LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x423 = INT8_MAX;
	volatile uint8_t x424 = 1U;

	t92 = (x421^(x422|(x423-x424)));

	if (t92 != -129) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x425 = UINT64_MAX;
	int64_t x426 = INT64_MAX;
	int64_t x427 = INT64_MIN;
	int8_t x428 = -1;
	static uint64_t t93 = 14664LLU;

	t93 = (x425^(x426|(x427-x428)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x429 = INT32_MIN;
	uint16_t x430 = UINT16_MAX;
	int8_t x432 = INT8_MIN;
	uint32_t t94 = 47442U;

	t94 = (x429^(x430|(x431-x432)));

	if (t94 != 2147549183U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x434 = -1;
	static int32_t x436 = -100244365;
	int64_t t95 = -65444304591283997LL;

	t95 = (x433^(x434|(x435-x436)));

	if (t95 != -254LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x437 = -1;
	int32_t x438 = INT32_MIN;
	uint8_t x439 = UINT8_MAX;
	int64_t x440 = 421061672519LL;
	volatile int64_t t96 = -338LL;

	t96 = (x437^(x438|(x439-x440)));

	if (t96 != 154877255LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x442 = 1743699597951723675LLU;
	uint64_t x443 = 48926608428975LLU;
	int16_t x444 = -748;
	static volatile uint64_t t97 = 1LLU;

	t97 = (x441^(x442|(x443-x444)));

	if (t97 != 16703008793084036379LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x445 = 3U;
	volatile int32_t t98 = 7145697;

	t98 = (x445^(x446|(x447-x448)));

	if (t98 != -32763) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x450 = 837;
	int64_t x452 = -1LL;
	uint64_t t99 = 16256590LLU;

	t99 = (x449^(x450|(x451-x452)));

	if (t99 != 18446743274068289351LLU) { NG(); } else { ; }
	
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

