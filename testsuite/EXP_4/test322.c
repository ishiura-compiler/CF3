#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = -1;
int16_t x5 = INT16_MIN;
static volatile int16_t x7 = INT16_MAX;
static int64_t x11 = INT64_MIN;
static volatile int32_t t3 = -644870713;
uint8_t x24 = 5U;
int32_t x29 = INT32_MIN;
int32_t t7 = 55;
int32_t x34 = 100814;
int8_t x35 = -2;
int64_t x37 = INT64_MIN;
uint32_t x45 = 1969986U;
static volatile int32_t t11 = -952;
int64_t x57 = INT64_MIN;
uint64_t x60 = 109652418552630LLU;
uint16_t x61 = 1119U;
int8_t x63 = -1;
uint8_t x72 = UINT8_MAX;
volatile uint16_t x76 = UINT16_MAX;
volatile uint32_t x82 = 2198U;
int16_t x84 = 51;
static uint8_t x87 = 0U;
int32_t x95 = -1;
int32_t t21 = 1025401;
int8_t x97 = -1;
volatile int32_t t23 = 65384;
int64_t x107 = -33720631929368LL;
volatile int32_t x108 = -1;
int8_t x119 = INT8_MIN;
int8_t x125 = -11;
uint8_t x127 = 7U;
int16_t x128 = -5;
int32_t t28 = 165143465;
volatile int32_t x130 = INT32_MAX;
static volatile int32_t t29 = -12527018;
volatile int32_t t30 = 1720802;
int8_t x142 = INT8_MIN;
volatile int32_t x143 = -4069067;
volatile int32_t t31 = 14;
int8_t x145 = INT8_MIN;
static int16_t x149 = -1;
int8_t x150 = -1;
int64_t x160 = -1LL;
uint64_t x165 = 402249700LLU;
static int32_t t37 = -5981388;
int64_t x173 = -612LL;
int8_t x175 = 1;
uint8_t x176 = 1U;
int16_t x179 = 1;
int32_t x180 = 19742176;
uint64_t x186 = 54490LLU;
int32_t t40 = -18944761;
volatile int8_t x193 = 1;
int32_t x196 = -1;
volatile int32_t t42 = -4511855;
volatile uint8_t x199 = 2U;
int32_t t43 = -12310502;
uint8_t x203 = UINT8_MAX;
uint64_t x212 = 9032616488276547691LLU;
int16_t x213 = 44;
volatile int8_t x216 = INT8_MIN;
static int32_t t46 = 4;
volatile int32_t t49 = -81;
static volatile int16_t x235 = INT16_MIN;
int16_t x244 = 720;
volatile int32_t t52 = -2845123;
int8_t x274 = INT8_MIN;
static int32_t x276 = INT32_MIN;
int16_t x278 = INT16_MIN;
int16_t x280 = 9;
int32_t t61 = -3149;
int32_t x281 = -1;
static int64_t x282 = INT64_MIN;
uint32_t x284 = UINT32_MAX;
static int64_t x290 = INT64_MAX;
int64_t x297 = 0LL;
int8_t x298 = INT8_MIN;
int64_t x309 = INT64_MIN;
uint8_t x314 = 7U;
int16_t x316 = 53;
int16_t x320 = -1;
int32_t x323 = INT32_MIN;
int64_t x324 = INT64_MIN;
int8_t x337 = 0;
int32_t x338 = INT32_MIN;
uint64_t x346 = 5460681993686606889LLU;
uint32_t x347 = 1674411U;
int16_t x359 = 176;
uint32_t x366 = 856064229U;
volatile int64_t x370 = 6000LL;
static int32_t x376 = -1;
volatile int32_t t82 = -190;
volatile int32_t x388 = INT32_MIN;
int16_t x398 = INT16_MIN;
static int32_t t91 = -137;
int32_t x423 = INT32_MAX;
uint8_t x426 = 1U;
uint64_t x431 = UINT64_MAX;
int32_t x444 = -1;
int32_t x449 = INT32_MIN;
int32_t t99 = -170;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int8_t x3 = INT8_MIN;
	uint64_t x4 = 6334201236LLU;
	int32_t t0 = -249;

	t0 = (x1<=(x2|(x3-x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	int64_t x8 = INT64_MAX;
	int32_t t1 = 0;

	t1 = (x5<=(x6|(x7-x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 15U;
	static uint64_t x10 = 4015898035075009028LLU;
	int32_t x12 = -1;
	volatile int32_t t2 = -477;

	t2 = (x9<=(x10|(x11-x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 868712521762401LL;
	volatile int16_t x14 = INT16_MIN;
	static int8_t x15 = -1;
	static uint64_t x16 = 68LLU;

	t3 = (x13<=(x14|(x15-x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 20U;
	volatile int64_t x18 = 1672LL;
	volatile int64_t x19 = INT64_MIN;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 104960;

	t4 = (x17<=(x18|(x19-x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 23U;
	int8_t x22 = -29;
	uint16_t x23 = 417U;
	int32_t t5 = -71;

	t5 = (x21<=(x22|(x23-x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	volatile int8_t x26 = INT8_MIN;
	uint8_t x27 = 4U;
	uint16_t x28 = 1123U;
	int32_t t6 = -21;

	t6 = (x25<=(x26|(x27-x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = UINT32_MAX;
	static uint8_t x31 = 2U;
	volatile int16_t x32 = INT16_MIN;

	t7 = (x29<=(x30|(x31-x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	static volatile uint64_t x36 = 781703474424208LLU;
	volatile int32_t t8 = -107034;

	t8 = (x33<=(x34|(x35-x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = UINT32_MAX;
	int16_t x39 = -11;
	static int16_t x40 = INT16_MAX;
	int32_t t9 = -16195;

	t9 = (x37<=(x38|(x39-x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -1;
	static int16_t x42 = INT16_MIN;
	uint8_t x43 = UINT8_MAX;
	int32_t x44 = -1;
	volatile int32_t t10 = -1;

	t10 = (x41<=(x42|(x43-x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MAX;
	int16_t x47 = INT16_MIN;
	uint32_t x48 = 1U;

	t11 = (x45<=(x46|(x47-x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x53 = INT64_MIN;
	volatile int64_t x54 = INT64_MIN;
	volatile uint32_t x55 = 330822055U;
	volatile int8_t x56 = -1;
	volatile int32_t t12 = 14981916;

	t12 = (x53<=(x54|(x55-x56)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x58 = INT8_MAX;
	static int32_t x59 = -1;
	int32_t t13 = 3717;

	t13 = (x57<=(x58|(x59-x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x62 = 11U;
	volatile uint8_t x64 = 25U;
	int32_t t14 = 3;

	t14 = (x61<=(x62|(x63-x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x69 = 244026LLU;
	uint16_t x70 = UINT16_MAX;
	static int8_t x71 = INT8_MAX;
	volatile int32_t t15 = 1684;

	t15 = (x69<=(x70|(x71-x72)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = INT16_MIN;
	uint32_t x74 = 5523U;
	uint32_t x75 = UINT32_MAX;
	volatile int32_t t16 = 9;

	t16 = (x73<=(x74|(x75-x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MAX;
	int64_t x78 = INT64_MIN;
	static uint8_t x79 = UINT8_MAX;
	int8_t x80 = INT8_MAX;
	volatile int32_t t17 = -97075130;

	t17 = (x77<=(x78|(x79-x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MAX;
	uint16_t x83 = 2305U;
	volatile int32_t t18 = -356470;

	t18 = (x81<=(x82|(x83-x84)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MAX;
	uint16_t x86 = UINT16_MAX;
	static int32_t x88 = -80988;
	static int32_t t19 = -139762185;

	t19 = (x85<=(x86|(x87-x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	int32_t x90 = INT32_MIN;
	volatile int64_t x91 = -1LL;
	int32_t x92 = INT32_MIN;
	int32_t t20 = 541;

	t20 = (x89<=(x90|(x91-x92)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = 30336058LLU;
	int16_t x94 = -1;
	static int8_t x96 = INT8_MIN;

	t21 = (x93<=(x94|(x95-x96)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x98 = 479;
	volatile int32_t x99 = 1289934;
	volatile uint64_t x100 = 989426392913114158LLU;
	int32_t t22 = -11320;

	t22 = (x97<=(x98|(x99-x100)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 11U;
	static volatile uint8_t x102 = 1U;
	int8_t x103 = 21;
	uint32_t x104 = UINT32_MAX;

	t23 = (x101<=(x102|(x103-x104)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 391U;
	static volatile int8_t x106 = -1;
	volatile int32_t t24 = 493558;

	t24 = (x105<=(x106|(x107-x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x109 = 1356400182U;
	int8_t x110 = 1;
	static uint16_t x111 = 348U;
	volatile uint8_t x112 = 38U;
	static int32_t t25 = 677205921;

	t25 = (x109<=(x110|(x111-x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x117 = INT16_MAX;
	uint64_t x118 = UINT64_MAX;
	int16_t x120 = INT16_MAX;
	volatile int32_t t26 = 1;

	t26 = (x117<=(x118|(x119-x120)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x121 = INT8_MAX;
	uint8_t x122 = 0U;
	int8_t x123 = -24;
	int8_t x124 = INT8_MIN;
	static int32_t t27 = 12906324;

	t27 = (x121<=(x122|(x123-x124)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x126 = INT64_MIN;

	t28 = (x125<=(x126|(x127-x128)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x129 = INT32_MIN;
	int32_t x131 = -23393;
	static uint8_t x132 = 2U;

	t29 = (x129<=(x130|(x131-x132)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MIN;
	volatile int64_t x134 = INT64_MAX;
	volatile int32_t x135 = 154768556;
	uint16_t x136 = 31U;

	t30 = (x133<=(x134|(x135-x136)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = UINT32_MAX;
	int32_t x144 = INT32_MIN;

	t31 = (x141<=(x142|(x143-x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x146 = INT32_MAX;
	uint64_t x147 = 22737LLU;
	static int64_t x148 = INT64_MAX;
	int32_t t32 = -11816;

	t32 = (x145<=(x146|(x147-x148)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x151 = -59;
	int16_t x152 = -89;
	volatile int32_t t33 = 6;

	t33 = (x149<=(x150|(x151-x152)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = 5U;
	uint64_t x154 = UINT64_MAX;
	int32_t x155 = INT32_MIN;
	int16_t x156 = -2537;
	volatile int32_t t34 = 868024;

	t34 = (x153<=(x154|(x155-x156)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x157 = 0U;
	uint64_t x158 = 338214932734LLU;
	static int32_t x159 = INT32_MAX;
	volatile int32_t t35 = -5629;

	t35 = (x157<=(x158|(x159-x160)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x166 = 2;
	volatile int8_t x167 = INT8_MIN;
	uint16_t x168 = 18585U;
	volatile int32_t t36 = -58;

	t36 = (x165<=(x166|(x167-x168)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x169 = INT8_MAX;
	uint64_t x170 = 39LLU;
	uint64_t x171 = 78LLU;
	uint8_t x172 = UINT8_MAX;

	t37 = (x169<=(x170|(x171-x172)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x174 = INT8_MIN;
	int32_t t38 = -250050;

	t38 = (x173<=(x174|(x175-x176)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x177 = UINT64_MAX;
	volatile int8_t x178 = -40;
	volatile int32_t t39 = -573248956;

	t39 = (x177<=(x178|(x179-x180)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x185 = 1384U;
	volatile uint8_t x187 = 1U;
	uint8_t x188 = 0U;

	t40 = (x185<=(x186|(x187-x188)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = 41LL;
	int8_t x190 = INT8_MIN;
	uint16_t x191 = UINT16_MAX;
	int64_t x192 = 186398404809755198LL;
	volatile int32_t t41 = 39914;

	t41 = (x189<=(x190|(x191-x192)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x194 = INT64_MIN;
	volatile int8_t x195 = INT8_MIN;

	t42 = (x193<=(x194|(x195-x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = -200;
	volatile int8_t x198 = 18;
	uint16_t x200 = 242U;

	t43 = (x197<=(x198|(x199-x200)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = 15435614692LL;
	int16_t x202 = 5353;
	volatile int64_t x204 = -21521867500LL;
	int32_t t44 = -905128;

	t44 = (x201<=(x202|(x203-x204)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x209 = 0U;
	int32_t x210 = 198114759;
	volatile int8_t x211 = INT8_MIN;
	volatile int32_t t45 = 520214715;

	t45 = (x209<=(x210|(x211-x212)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x214 = INT32_MIN;
	static int16_t x215 = -8;

	t46 = (x213<=(x214|(x215-x216)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = -10558843LL;
	uint16_t x218 = UINT16_MAX;
	uint32_t x219 = 1379541U;
	int32_t x220 = INT32_MIN;
	static int32_t t47 = 355231681;

	t47 = (x217<=(x218|(x219-x220)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x221 = 1055251LLU;
	volatile int8_t x222 = -1;
	uint32_t x223 = 1445U;
	static uint64_t x224 = UINT64_MAX;
	volatile int32_t t48 = 3;

	t48 = (x221<=(x222|(x223-x224)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x225 = 12;
	uint8_t x226 = UINT8_MAX;
	static int64_t x227 = -41425461064LL;
	uint64_t x228 = 89LLU;

	t49 = (x225<=(x226|(x227-x228)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x233 = 5158U;
	uint16_t x234 = UINT16_MAX;
	int64_t x236 = INT64_MIN;
	int32_t t50 = -1724705;

	t50 = (x233<=(x234|(x235-x236)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x237 = 977400516735LLU;
	int32_t x238 = -1;
	uint16_t x239 = UINT16_MAX;
	uint64_t x240 = UINT64_MAX;
	int32_t t51 = 1664680;

	t51 = (x237<=(x238|(x239-x240)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x241 = 6U;
	volatile int8_t x242 = 20;
	static int8_t x243 = -54;

	t52 = (x241<=(x242|(x243-x244)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x245 = UINT64_MAX;
	int8_t x246 = -1;
	int16_t x247 = -1;
	int64_t x248 = INT64_MIN;
	int32_t t53 = -26174;

	t53 = (x245<=(x246|(x247-x248)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x249 = -1;
	int8_t x250 = -2;
	uint64_t x251 = 29492478330763LLU;
	static int16_t x252 = -5;
	int32_t t54 = -47293330;

	t54 = (x249<=(x250|(x251-x252)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x253 = 8404;
	int64_t x254 = 2860734LL;
	int64_t x255 = -1LL;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t55 = 749239424;

	t55 = (x253<=(x254|(x255-x256)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x257 = 343U;
	int16_t x258 = INT16_MIN;
	int64_t x259 = -1LL;
	int16_t x260 = -11133;
	volatile int32_t t56 = 10710167;

	t56 = (x257<=(x258|(x259-x260)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x261 = -1;
	int8_t x262 = 1;
	int8_t x263 = -17;
	uint32_t x264 = 32411U;
	volatile int32_t t57 = 0;

	t57 = (x261<=(x262|(x263-x264)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x265 = INT8_MAX;
	uint64_t x266 = UINT64_MAX;
	int8_t x267 = -2;
	static uint32_t x268 = 40728U;
	int32_t t58 = 38;

	t58 = (x265<=(x266|(x267-x268)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x269 = INT8_MIN;
	uint16_t x270 = UINT16_MAX;
	uint8_t x271 = UINT8_MAX;
	int16_t x272 = INT16_MIN;
	static int32_t t59 = -114;

	t59 = (x269<=(x270|(x271-x272)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = INT16_MAX;
	int64_t x275 = -1LL;
	volatile int32_t t60 = 38724030;

	t60 = (x273<=(x274|(x275-x276)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x277 = 1;
	static int32_t x279 = -152020124;

	t61 = (x277<=(x278|(x279-x280)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x283 = UINT32_MAX;
	int32_t t62 = 2;

	t62 = (x281<=(x282|(x283-x284)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x285 = 17389907274784367LLU;
	static uint8_t x286 = 0U;
	int64_t x287 = 1071569209458084672LL;
	uint32_t x288 = 4203102U;
	static int32_t t63 = -2615988;

	t63 = (x285<=(x286|(x287-x288)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x289 = 1543203220499LLU;
	uint16_t x291 = 289U;
	int64_t x292 = -1LL;
	volatile int32_t t64 = 1210;

	t64 = (x289<=(x290|(x291-x292)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x293 = -1;
	static uint32_t x294 = 338U;
	static int64_t x295 = INT64_MIN;
	int64_t x296 = -29244255960375859LL;
	volatile int32_t t65 = -7;

	t65 = (x293<=(x294|(x295-x296)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x299 = 14U;
	static int8_t x300 = -13;
	volatile int32_t t66 = 1463;

	t66 = (x297<=(x298|(x299-x300)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = INT64_MIN;
	int64_t x302 = 0LL;
	int16_t x303 = INT16_MIN;
	static int64_t x304 = -1LL;
	static volatile int32_t t67 = 14979;

	t67 = (x301<=(x302|(x303-x304)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x310 = INT32_MIN;
	uint16_t x311 = 8U;
	static int16_t x312 = INT16_MIN;
	static volatile int32_t t68 = 25973;

	t68 = (x309<=(x310|(x311-x312)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x313 = UINT8_MAX;
	int8_t x315 = INT8_MIN;
	int32_t t69 = -53049261;

	t69 = (x313<=(x314|(x315-x316)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x317 = INT32_MIN;
	uint32_t x318 = 16475853U;
	volatile int8_t x319 = INT8_MIN;
	volatile int32_t t70 = 7896;

	t70 = (x317<=(x318|(x319-x320)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x321 = 1998215138973442LL;
	uint64_t x322 = 1020277LLU;
	volatile int32_t t71 = 19272184;

	t71 = (x321<=(x322|(x323-x324)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x325 = -683;
	volatile int16_t x326 = INT16_MAX;
	uint8_t x327 = 15U;
	int64_t x328 = -1293448473186LL;
	int32_t t72 = -65879;

	t72 = (x325<=(x326|(x327-x328)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = -1;
	int32_t x330 = INT32_MIN;
	volatile uint16_t x331 = UINT16_MAX;
	static volatile uint8_t x332 = 5U;
	volatile int32_t t73 = 124835247;

	t73 = (x329<=(x330|(x331-x332)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x339 = INT16_MAX;
	int16_t x340 = INT16_MAX;
	int32_t t74 = 0;

	t74 = (x337<=(x338|(x339-x340)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x341 = 180LLU;
	uint64_t x342 = 0LLU;
	static int32_t x343 = INT32_MAX;
	static volatile uint8_t x344 = UINT8_MAX;
	int32_t t75 = 18324566;

	t75 = (x341<=(x342|(x343-x344)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = INT16_MIN;
	uint8_t x348 = UINT8_MAX;
	int32_t t76 = 50810;

	t76 = (x345<=(x346|(x347-x348)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x349 = 24981092U;
	static int64_t x350 = INT64_MIN;
	static volatile int32_t x351 = -1;
	static uint32_t x352 = 41087U;
	volatile int32_t t77 = 25234057;

	t77 = (x349<=(x350|(x351-x352)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x353 = 350998841U;
	int32_t x354 = INT32_MAX;
	volatile int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MIN;
	int32_t t78 = 428789506;

	t78 = (x353<=(x354|(x355-x356)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x357 = INT8_MIN;
	int64_t x358 = -153064666083LL;
	volatile int16_t x360 = 1;
	volatile int32_t t79 = 231224705;

	t79 = (x357<=(x358|(x359-x360)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x365 = -1;
	static int16_t x367 = -1;
	int8_t x368 = -1;
	volatile int32_t t80 = 45678779;

	t80 = (x365<=(x366|(x367-x368)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x369 = INT8_MIN;
	int32_t x371 = -1;
	int16_t x372 = INT16_MIN;
	volatile int32_t t81 = -1;

	t81 = (x369<=(x370|(x371-x372)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x373 = UINT16_MAX;
	volatile uint64_t x374 = 16444037101514950LLU;
	uint8_t x375 = 17U;

	t82 = (x373<=(x374|(x375-x376)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x377 = -1;
	uint32_t x378 = 3358509U;
	int64_t x379 = -1LL;
	int32_t x380 = INT32_MIN;
	int32_t t83 = -124098330;

	t83 = (x377<=(x378|(x379-x380)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x381 = UINT8_MAX;
	int32_t x382 = -1;
	volatile uint16_t x383 = 3916U;
	static int16_t x384 = 1;
	volatile int32_t t84 = 862478640;

	t84 = (x381<=(x382|(x383-x384)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x385 = INT64_MIN;
	int16_t x386 = -4;
	int8_t x387 = INT8_MIN;
	int32_t t85 = 13;

	t85 = (x385<=(x386|(x387-x388)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x393 = INT8_MIN;
	volatile uint8_t x394 = UINT8_MAX;
	volatile int32_t x395 = -5076;
	static uint16_t x396 = 126U;
	static int32_t t86 = 16638;

	t86 = (x393<=(x394|(x395-x396)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x397 = -1;
	static uint32_t x399 = 767U;
	static int32_t x400 = INT32_MIN;
	static int32_t t87 = -548;

	t87 = (x397<=(x398|(x399-x400)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x401 = -23;
	static int16_t x402 = INT16_MIN;
	volatile int64_t x403 = -1LL;
	uint32_t x404 = 250U;
	volatile int32_t t88 = 11098;

	t88 = (x401<=(x402|(x403-x404)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = INT64_MIN;
	volatile int32_t x406 = 2840515;
	static int32_t x407 = INT32_MIN;
	int8_t x408 = INT8_MIN;
	int32_t t89 = -28;

	t89 = (x405<=(x406|(x407-x408)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x409 = INT8_MIN;
	static int32_t x410 = INT32_MIN;
	int32_t x411 = 2656119;
	int8_t x412 = INT8_MIN;
	int32_t t90 = -20810202;

	t90 = (x409<=(x410|(x411-x412)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x417 = -1;
	int32_t x418 = -1;
	static int16_t x419 = 1;
	uint32_t x420 = 84131691U;

	t91 = (x417<=(x418|(x419-x420)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x421 = INT64_MIN;
	uint8_t x422 = 115U;
	int64_t x424 = -101LL;
	volatile int32_t t92 = -581413;

	t92 = (x421<=(x422|(x423-x424)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x425 = 189U;
	int64_t x427 = -192028136712LL;
	int16_t x428 = 72;
	int32_t t93 = 251778;

	t93 = (x425<=(x426|(x427-x428)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x429 = 9;
	int8_t x430 = INT8_MIN;
	int16_t x432 = INT16_MAX;
	volatile int32_t t94 = -187258680;

	t94 = (x429<=(x430|(x431-x432)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x433 = INT32_MAX;
	int64_t x434 = 1466541355527LL;
	int16_t x435 = INT16_MIN;
	uint8_t x436 = 74U;
	static int32_t t95 = 0;

	t95 = (x433<=(x434|(x435-x436)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x437 = UINT64_MAX;
	volatile int16_t x438 = 1164;
	int32_t x439 = -1;
	uint8_t x440 = UINT8_MAX;
	int32_t t96 = 219;

	t96 = (x437<=(x438|(x439-x440)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x441 = INT64_MAX;
	int32_t x442 = 1;
	volatile int8_t x443 = -13;
	static volatile int32_t t97 = -101777122;

	t97 = (x441<=(x442|(x443-x444)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x450 = -1;
	static volatile int8_t x451 = INT8_MIN;
	uint32_t x452 = UINT32_MAX;
	volatile int32_t t98 = -411238;

	t98 = (x449<=(x450|(x451-x452)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x453 = -1555428878042LL;
	static uint8_t x454 = UINT8_MAX;
	int8_t x455 = 20;
	int64_t x456 = -59040223591LL;

	t99 = (x453<=(x454|(x455-x456)));

	if (t99 != 1) { NG(); } else { ; }
	
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

