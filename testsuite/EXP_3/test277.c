#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x2 = INT32_MIN;
uint32_t t0 = 6U;
volatile int16_t x7 = INT16_MIN;
int8_t x27 = INT8_MIN;
int64_t x28 = -102467596270LL;
uint8_t x32 = 112U;
volatile uint32_t x41 = 238U;
uint64_t t7 = 1171878LLU;
volatile int32_t x56 = INT32_MIN;
int64_t x62 = INT64_MIN;
int8_t x63 = -1;
int16_t x66 = -444;
static int8_t x70 = INT8_MAX;
uint64_t t12 = 690044LLU;
static int64_t x80 = INT64_MAX;
static int32_t x85 = 7;
int32_t t16 = 953;
volatile int8_t x98 = INT8_MIN;
int64_t x100 = INT64_MAX;
static int64_t t18 = -13962LL;
static volatile int8_t x107 = INT8_MAX;
int64_t x108 = -239744694LL;
volatile int32_t t21 = -1400;
int8_t x118 = -1;
uint32_t t24 = 3727631U;
int32_t x130 = 0;
static uint16_t x132 = UINT16_MAX;
int64_t x134 = -1LL;
static int32_t t26 = 101325063;
volatile int64_t x137 = 0LL;
static uint32_t t29 = 37U;
int32_t x162 = INT32_MAX;
uint64_t x167 = 5517761512059675169LLU;
static int32_t x169 = INT32_MIN;
uint64_t x177 = 55753880147964LLU;
volatile int64_t x178 = INT64_MAX;
int16_t x185 = INT16_MIN;
int16_t x193 = INT16_MIN;
uint8_t x201 = 11U;
static volatile int64_t t41 = 2LL;
static int32_t x205 = INT32_MIN;
volatile uint32_t x209 = 35U;
static int64_t x210 = INT64_MIN;
volatile uint64_t t44 = 888895759724LLU;
int32_t x219 = 29;
int8_t x220 = INT8_MAX;
static uint8_t x222 = UINT8_MAX;
int64_t x223 = INT64_MAX;
int64_t t46 = -55669264687280235LL;
int16_t x237 = INT16_MIN;
uint8_t x257 = UINT8_MAX;
static volatile int32_t x259 = -55;
int16_t x260 = INT16_MIN;
uint16_t x263 = 10U;
int16_t x269 = -1;
int8_t x280 = INT8_MIN;
uint16_t x304 = 4957U;
int32_t x308 = INT32_MAX;
static volatile uint32_t x315 = UINT32_MAX;
int8_t x316 = INT8_MAX;
volatile int32_t x318 = -791;
static volatile int16_t x334 = INT16_MIN;
volatile uint64_t x336 = 43181752951LLU;
uint64_t t67 = 1032658011705567LLU;
static volatile int16_t x344 = -8299;
uint32_t x349 = UINT32_MAX;
volatile int64_t x350 = INT64_MIN;
int16_t x354 = -12;
int8_t x363 = INT8_MIN;
uint32_t t74 = 218083U;
uint64_t t75 = 470046768282LLU;
int8_t x379 = INT8_MAX;
uint16_t x395 = 1028U;
int64_t x396 = -1LL;
int16_t x404 = INT16_MIN;
uint8_t x406 = 14U;
volatile int16_t x409 = INT16_MIN;
uint64_t x411 = UINT64_MAX;
volatile uint16_t x414 = 1U;
uint32_t x416 = 1U;
int16_t x423 = -10083;
int64_t x427 = 292406LL;
int64_t t87 = 42335183017697964LL;
uint16_t x434 = UINT16_MAX;
static uint32_t x436 = 35675U;
int16_t x439 = INT16_MIN;
int32_t t90 = -31;
static uint64_t x443 = UINT64_MAX;
int8_t x460 = INT8_MIN;
int16_t x463 = -1;
volatile int64_t x469 = -1LL;
volatile uint64_t t97 = 6432554LLU;
int64_t x477 = -3047LL;


void f0(void) {
	int64_t x1 = 16039934094494966LL;
	volatile int8_t x3 = INT8_MAX;
	uint32_t x4 = UINT32_MAX;

	t0 = ((x1<x2)/(x3-x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 0;
	static volatile int16_t x6 = -1;
	static volatile int64_t x8 = INT64_MIN;
	volatile int64_t t1 = 235411LL;

	t1 = ((x5<x6)/(x7-x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	static uint16_t x14 = UINT16_MAX;
	int16_t x15 = 7153;
	int64_t x16 = INT64_MAX;
	int64_t t2 = 5868856LL;

	t2 = ((x13<x14)/(x15-x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = -1;
	int16_t x22 = INT16_MIN;
	static int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MAX;
	static int32_t t3 = -4166826;

	t3 = ((x21<x22)/(x23-x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x25 = INT16_MAX;
	static uint32_t x26 = 1U;
	int64_t t4 = -1LL;

	t4 = ((x25<x26)/(x27-x28));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = 14316;
	int16_t x30 = INT16_MIN;
	int32_t x31 = -1;
	static int32_t t5 = 38;

	t5 = ((x29<x30)/(x31-x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MIN;
	volatile int8_t x34 = INT8_MAX;
	volatile uint32_t x35 = 12943341U;
	static uint8_t x36 = 49U;
	volatile uint32_t t6 = 9278U;

	t6 = ((x33<x34)/(x35-x36));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x42 = -744;
	int64_t x43 = 2036LL;
	uint64_t x44 = 47709852LLU;

	t7 = ((x41<x42)/(x43-x44));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = -1;
	static uint64_t x54 = 190109084222130LLU;
	int16_t x55 = -1;
	static volatile int32_t t8 = 1;

	t8 = ((x53<x54)/(x55-x56));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x57 = INT32_MAX;
	static volatile int8_t x58 = INT8_MAX;
	uint16_t x59 = 9U;
	volatile int8_t x60 = -1;
	static int32_t t9 = -14;

	t9 = ((x57<x58)/(x59-x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x61 = -54;
	int32_t x64 = INT32_MIN;
	int32_t t10 = 205908010;

	t10 = ((x61<x62)/(x63-x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x65 = 63748049672742454LLU;
	uint16_t x67 = 5U;
	volatile uint16_t x68 = 323U;
	static int32_t t11 = -3421;

	t11 = ((x65<x66)/(x67-x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x69 = INT32_MAX;
	volatile uint64_t x71 = 6707LLU;
	volatile int8_t x72 = INT8_MIN;

	t12 = ((x69<x70)/(x71-x72));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = 7048;
	static volatile uint8_t x74 = 22U;
	uint8_t x75 = 7U;
	volatile int16_t x76 = -3020;
	volatile int32_t t13 = 0;

	t13 = ((x73<x74)/(x75-x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x77 = 21U;
	uint32_t x78 = UINT32_MAX;
	int8_t x79 = -1;
	volatile int64_t t14 = 3182134480473533LL;

	t14 = ((x77<x78)/(x79-x80));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = -6;
	static int64_t x82 = INT64_MIN;
	static volatile int16_t x83 = INT16_MIN;
	int64_t x84 = INT64_MIN;
	volatile int64_t t15 = 129LL;

	t15 = ((x81<x82)/(x83-x84));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x86 = -13398;
	int16_t x87 = -1;
	int16_t x88 = -8;

	t16 = ((x85<x86)/(x87-x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x93 = 2803902;
	int8_t x94 = INT8_MIN;
	int32_t x95 = 79;
	uint32_t x96 = UINT32_MAX;
	uint32_t t17 = 32U;

	t17 = ((x93<x94)/(x95-x96));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = 2;
	static int8_t x99 = INT8_MAX;

	t18 = ((x97<x98)/(x99-x100));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x101 = 6U;
	volatile int16_t x102 = 5839;
	int64_t x103 = INT64_MAX;
	uint16_t x104 = UINT16_MAX;
	static volatile int64_t t19 = 2184713425LL;

	t19 = ((x101<x102)/(x103-x104));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x105 = INT32_MIN;
	int64_t x106 = INT64_MAX;
	int64_t t20 = -60474304512950LL;

	t20 = ((x105<x106)/(x107-x108));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x109 = -1LL;
	volatile int8_t x110 = INT8_MIN;
	uint8_t x111 = 0U;
	uint8_t x112 = 1U;

	t21 = ((x109<x110)/(x111-x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x113 = UINT64_MAX;
	volatile int8_t x114 = INT8_MIN;
	volatile int16_t x115 = INT16_MAX;
	volatile uint16_t x116 = 28U;
	volatile int32_t t22 = -545;

	t22 = ((x113<x114)/(x115-x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x117 = INT64_MAX;
	int16_t x119 = 47;
	static uint64_t x120 = 14218585LLU;
	volatile uint64_t t23 = 742456455528948255LLU;

	t23 = ((x117<x118)/(x119-x120));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x121 = 4U;
	volatile int8_t x122 = INT8_MIN;
	volatile uint32_t x123 = 1655971U;
	uint16_t x124 = 358U;

	t24 = ((x121<x122)/(x123-x124));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x129 = UINT64_MAX;
	int8_t x131 = INT8_MIN;
	int32_t t25 = -3;

	t25 = ((x129<x130)/(x131-x132));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x133 = 3;
	volatile int16_t x135 = -151;
	volatile uint16_t x136 = UINT16_MAX;

	t26 = ((x133<x134)/(x135-x136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x138 = 4U;
	int16_t x139 = INT16_MIN;
	int16_t x140 = 20;
	volatile int32_t t27 = 31123136;

	t27 = ((x137<x138)/(x139-x140));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x141 = INT32_MIN;
	volatile int32_t x142 = INT32_MIN;
	uint64_t x143 = 9166365088986LLU;
	int32_t x144 = 117875285;
	static volatile uint64_t t28 = 1832728102089397LLU;

	t28 = ((x141<x142)/(x143-x144));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x145 = 4634742U;
	static int64_t x146 = -1LL;
	uint32_t x147 = 30U;
	int32_t x148 = INT32_MIN;

	t29 = ((x145<x146)/(x147-x148));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x149 = -1LL;
	int64_t x150 = INT64_MIN;
	volatile int64_t x151 = INT64_MIN;
	static uint64_t x152 = 8336263LLU;
	volatile uint64_t t30 = 152324240522693751LLU;

	t30 = ((x149<x150)/(x151-x152));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x161 = 3261294U;
	uint64_t x163 = 27576291LLU;
	static uint16_t x164 = UINT16_MAX;
	uint64_t t31 = 20435802861881401LLU;

	t31 = ((x161<x162)/(x163-x164));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x165 = INT64_MIN;
	uint32_t x166 = UINT32_MAX;
	int16_t x168 = INT16_MIN;
	volatile uint64_t t32 = 533319957995LLU;

	t32 = ((x165<x166)/(x167-x168));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x170 = 3933;
	int64_t x171 = 0LL;
	int16_t x172 = -1;
	volatile int64_t t33 = 1995658710166876773LL;

	t33 = ((x169<x170)/(x171-x172));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x173 = UINT32_MAX;
	static int8_t x174 = INT8_MIN;
	uint8_t x175 = 54U;
	static uint32_t x176 = 1528289365U;
	static uint32_t t34 = 1034584272U;

	t34 = ((x173<x174)/(x175-x176));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x179 = INT64_MIN;
	uint64_t x180 = 62LLU;
	volatile uint64_t t35 = 3597LLU;

	t35 = ((x177<x178)/(x179-x180));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = -3;
	int32_t x182 = -1;
	static int64_t x183 = INT64_MIN;
	int64_t x184 = -517988420LL;
	int64_t t36 = -15494356LL;

	t36 = ((x181<x182)/(x183-x184));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x186 = 28;
	static int64_t x187 = 25LL;
	int16_t x188 = -1;
	volatile int64_t t37 = 0LL;

	t37 = ((x185<x186)/(x187-x188));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x189 = -1LL;
	static uint16_t x190 = UINT16_MAX;
	static uint64_t x191 = 283LLU;
	static volatile uint32_t x192 = UINT32_MAX;
	static uint64_t t38 = 27881197221865770LLU;

	t38 = ((x189<x190)/(x191-x192));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x194 = -2;
	volatile int8_t x195 = INT8_MIN;
	uint32_t x196 = UINT32_MAX;
	volatile uint32_t t39 = 1467681139U;

	t39 = ((x193<x194)/(x195-x196));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x197 = -28;
	int64_t x198 = INT64_MAX;
	uint64_t x199 = UINT64_MAX;
	volatile uint8_t x200 = 2U;
	uint64_t t40 = 57275277262830080LLU;

	t40 = ((x197<x198)/(x199-x200));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x202 = UINT16_MAX;
	int64_t x203 = INT64_MAX;
	int16_t x204 = INT16_MAX;

	t41 = ((x201<x202)/(x203-x204));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x206 = 2LLU;
	static volatile int64_t x207 = 45LL;
	static uint32_t x208 = UINT32_MAX;
	volatile int64_t t42 = 221LL;

	t42 = ((x205<x206)/(x207-x208));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x211 = INT64_MIN;
	int32_t x212 = INT32_MIN;
	static volatile int64_t t43 = -1LL;

	t43 = ((x209<x210)/(x211-x212));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x213 = INT16_MIN;
	static int64_t x214 = INT64_MIN;
	uint64_t x215 = 27953219059941LLU;
	int16_t x216 = -1;

	t44 = ((x213<x214)/(x215-x216));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x217 = 235;
	uint8_t x218 = UINT8_MAX;
	volatile int32_t t45 = 341701;

	t45 = ((x217<x218)/(x219-x220));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x221 = -105;
	int8_t x224 = 1;

	t46 = ((x221<x222)/(x223-x224));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x229 = 1885U;
	int32_t x230 = -1;
	static int64_t x231 = -1LL;
	int32_t x232 = INT32_MIN;
	int64_t t47 = -3LL;

	t47 = ((x229<x230)/(x231-x232));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x238 = -1LL;
	int64_t x239 = INT64_MIN;
	volatile int16_t x240 = INT16_MIN;
	static volatile int64_t t48 = 12650028189LL;

	t48 = ((x237<x238)/(x239-x240));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x241 = -538;
	int64_t x242 = INT64_MAX;
	int16_t x243 = -1;
	static int16_t x244 = INT16_MIN;
	static int32_t t49 = 17;

	t49 = ((x241<x242)/(x243-x244));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x249 = UINT16_MAX;
	int64_t x250 = 117891LL;
	volatile int8_t x251 = -1;
	int16_t x252 = -943;
	static volatile int32_t t50 = 54;

	t50 = ((x249<x250)/(x251-x252));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x253 = INT64_MAX;
	int32_t x254 = -10119105;
	int16_t x255 = 495;
	int32_t x256 = -1;
	int32_t t51 = 1;

	t51 = ((x253<x254)/(x255-x256));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x258 = INT64_MIN;
	static int32_t t52 = -599576709;

	t52 = ((x257<x258)/(x259-x260));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x261 = UINT32_MAX;
	static int32_t x262 = -1;
	int16_t x264 = INT16_MIN;
	volatile int32_t t53 = -3818;

	t53 = ((x261<x262)/(x263-x264));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x270 = 5U;
	volatile int8_t x271 = 1;
	static int32_t x272 = -1;
	static int32_t t54 = 392;

	t54 = ((x269<x270)/(x271-x272));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x273 = -1;
	static volatile uint8_t x274 = UINT8_MAX;
	uint32_t x275 = 20038504U;
	int64_t x276 = -8537492677217369LL;
	volatile int64_t t55 = 624LL;

	t55 = ((x273<x274)/(x275-x276));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x277 = INT64_MAX;
	static uint8_t x278 = 29U;
	uint32_t x279 = 29704U;
	uint32_t t56 = 127U;

	t56 = ((x277<x278)/(x279-x280));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x281 = -1;
	uint32_t x282 = 763U;
	volatile uint16_t x283 = 0U;
	int64_t x284 = INT64_MAX;
	volatile int64_t t57 = -1020061470139619551LL;

	t57 = ((x281<x282)/(x283-x284));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x289 = UINT16_MAX;
	int16_t x290 = -1135;
	int64_t x291 = INT64_MAX;
	int16_t x292 = 3;
	volatile int64_t t58 = -71486898LL;

	t58 = ((x289<x290)/(x291-x292));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x293 = -1;
	volatile uint64_t x294 = 12409428842022381LLU;
	uint16_t x295 = UINT16_MAX;
	static uint16_t x296 = 632U;
	volatile int32_t t59 = 335603388;

	t59 = ((x293<x294)/(x295-x296));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x301 = INT8_MAX;
	int64_t x302 = 3531324588620871LL;
	volatile int8_t x303 = -1;
	int32_t t60 = 3601;

	t60 = ((x301<x302)/(x303-x304));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x305 = 6932266U;
	int8_t x306 = INT8_MIN;
	volatile uint32_t x307 = 4571U;
	uint32_t t61 = 1311U;

	t61 = ((x305<x306)/(x307-x308));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x313 = UINT16_MAX;
	uint8_t x314 = UINT8_MAX;
	uint32_t t62 = 3833950U;

	t62 = ((x313<x314)/(x315-x316));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x317 = -1;
	volatile int16_t x319 = -45;
	int8_t x320 = -26;
	volatile int32_t t63 = 226825945;

	t63 = ((x317<x318)/(x319-x320));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x321 = -1LL;
	int64_t x322 = -124540LL;
	static volatile uint64_t x323 = UINT64_MAX;
	int64_t x324 = -326040967LL;
	static volatile uint64_t t64 = 599LLU;

	t64 = ((x321<x322)/(x323-x324));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x325 = -1;
	static uint32_t x326 = UINT32_MAX;
	uint16_t x327 = 47U;
	int16_t x328 = INT16_MIN;
	int32_t t65 = -2;

	t65 = ((x325<x326)/(x327-x328));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x329 = 2770129183195589345LL;
	int8_t x330 = INT8_MIN;
	volatile uint64_t x331 = 56577043LLU;
	int8_t x332 = INT8_MIN;
	uint64_t t66 = 254765940LLU;

	t66 = ((x329<x330)/(x331-x332));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x333 = 14;
	int16_t x335 = -1;

	t67 = ((x333<x334)/(x335-x336));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x337 = INT64_MIN;
	static int64_t x338 = -1LL;
	int16_t x339 = INT16_MAX;
	uint32_t x340 = UINT32_MAX;
	volatile uint32_t t68 = 0U;

	t68 = ((x337<x338)/(x339-x340));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x341 = UINT16_MAX;
	int64_t x342 = 16284LL;
	int8_t x343 = -1;
	int32_t t69 = 893841513;

	t69 = ((x341<x342)/(x343-x344));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x351 = INT8_MIN;
	int8_t x352 = 0;
	int32_t t70 = -37;

	t70 = ((x349<x350)/(x351-x352));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x353 = 1007U;
	volatile int8_t x355 = 1;
	volatile uint32_t x356 = UINT32_MAX;
	uint32_t t71 = 109U;

	t71 = ((x353<x354)/(x355-x356));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x357 = -287LL;
	int64_t x358 = INT64_MIN;
	uint32_t x359 = 77299291U;
	int32_t x360 = 23266;
	uint32_t t72 = 789658735U;

	t72 = ((x357<x358)/(x359-x360));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x361 = UINT8_MAX;
	int16_t x362 = INT16_MIN;
	int16_t x364 = -5218;
	volatile int32_t t73 = 6;

	t73 = ((x361<x362)/(x363-x364));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x365 = -17703;
	int16_t x366 = -1;
	int16_t x367 = INT16_MIN;
	uint32_t x368 = 3641654U;

	t74 = ((x365<x366)/(x367-x368));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x369 = 543LLU;
	uint32_t x370 = UINT32_MAX;
	int32_t x371 = INT32_MIN;
	uint64_t x372 = 9LLU;

	t75 = ((x369<x370)/(x371-x372));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x373 = UINT32_MAX;
	uint16_t x374 = UINT16_MAX;
	uint16_t x375 = 9666U;
	uint64_t x376 = 979734457078769LLU;
	volatile uint64_t t76 = 360898LLU;

	t76 = ((x373<x374)/(x375-x376));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x377 = -194001251907691LL;
	int64_t x378 = INT64_MIN;
	uint8_t x380 = 4U;
	int32_t t77 = 76094;

	t77 = ((x377<x378)/(x379-x380));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x381 = UINT16_MAX;
	static int64_t x382 = -9849946LL;
	static int64_t x383 = INT64_MAX;
	static uint8_t x384 = UINT8_MAX;
	int64_t t78 = -1LL;

	t78 = ((x381<x382)/(x383-x384));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x385 = -1;
	static uint8_t x386 = UINT8_MAX;
	int16_t x387 = -46;
	uint32_t x388 = 0U;
	uint32_t t79 = 2024876U;

	t79 = ((x385<x386)/(x387-x388));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x393 = 1222016U;
	volatile int64_t x394 = 18LL;
	volatile int64_t t80 = 1210863483435187748LL;

	t80 = ((x393<x394)/(x395-x396));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x401 = -1;
	int32_t x402 = INT32_MIN;
	int64_t x403 = INT64_MIN;
	int64_t t81 = 345326089520164908LL;

	t81 = ((x401<x402)/(x403-x404));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x405 = 960000270;
	volatile uint64_t x407 = UINT64_MAX;
	uint16_t x408 = 3460U;
	uint64_t t82 = 1414593031574458LLU;

	t82 = ((x405<x406)/(x407-x408));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x410 = 4148;
	int16_t x412 = INT16_MIN;
	uint64_t t83 = 3321909818478LLU;

	t83 = ((x409<x410)/(x411-x412));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x413 = 4601568359LLU;
	volatile uint32_t x415 = UINT32_MAX;
	uint32_t t84 = 904U;

	t84 = ((x413<x414)/(x415-x416));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x417 = UINT8_MAX;
	uint8_t x418 = 85U;
	volatile uint32_t x419 = UINT32_MAX;
	static volatile uint64_t x420 = 1838053988LLU;
	volatile uint64_t t85 = 90232846389LLU;

	t85 = ((x417<x418)/(x419-x420));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x421 = -1;
	volatile int8_t x422 = INT8_MAX;
	int16_t x424 = INT16_MAX;
	int32_t t86 = -43949;

	t86 = ((x421<x422)/(x423-x424));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x425 = -1;
	int32_t x426 = -119;
	static int8_t x428 = -1;

	t87 = ((x425<x426)/(x427-x428));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x429 = 12U;
	int8_t x430 = 14;
	int8_t x431 = 0;
	int16_t x432 = -1;
	int32_t t88 = 1;

	t88 = ((x429<x430)/(x431-x432));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x433 = 1;
	int32_t x435 = -1;
	static uint32_t t89 = 668574U;

	t89 = ((x433<x434)/(x435-x436));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x437 = 0U;
	volatile int16_t x438 = INT16_MIN;
	int8_t x440 = -15;

	t90 = ((x437<x438)/(x439-x440));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x441 = INT32_MAX;
	int32_t x442 = INT32_MIN;
	int8_t x444 = INT8_MIN;
	static uint64_t t91 = 62LLU;

	t91 = ((x441<x442)/(x443-x444));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x449 = -1;
	static int64_t x450 = -7322LL;
	int64_t x451 = -1LL;
	static int64_t x452 = INT64_MAX;
	int64_t t92 = -93886LL;

	t92 = ((x449<x450)/(x451-x452));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x453 = 17323334487374396LL;
	int32_t x454 = -806679871;
	int8_t x455 = INT8_MAX;
	static uint32_t x456 = UINT32_MAX;
	uint32_t t93 = 8091U;

	t93 = ((x453<x454)/(x455-x456));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x457 = INT16_MIN;
	volatile uint64_t x458 = UINT64_MAX;
	int64_t x459 = INT64_MIN;
	volatile int64_t t94 = -1813840618716LL;

	t94 = ((x457<x458)/(x459-x460));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x461 = UINT8_MAX;
	int32_t x462 = -6;
	static int32_t x464 = 642;
	int32_t t95 = -11190;

	t95 = ((x461<x462)/(x463-x464));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x465 = 32760U;
	int16_t x466 = 116;
	uint8_t x467 = 2U;
	int16_t x468 = -1;
	int32_t t96 = -112;

	t96 = ((x465<x466)/(x467-x468));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x470 = INT64_MAX;
	int16_t x471 = INT16_MIN;
	uint64_t x472 = 24289462041395700LLU;

	t97 = ((x469<x470)/(x471-x472));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x473 = -1LL;
	volatile uint64_t x474 = 26715656904214LLU;
	static int8_t x475 = INT8_MIN;
	int32_t x476 = -1;
	volatile int32_t t98 = 434688406;

	t98 = ((x473<x474)/(x475-x476));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x478 = -14530;
	volatile uint16_t x479 = UINT16_MAX;
	volatile int32_t x480 = 319;
	static int32_t t99 = -6000;

	t99 = ((x477<x478)/(x479-x480));

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

