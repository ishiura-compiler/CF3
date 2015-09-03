#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x12 = 11270532LLU;
int32_t x14 = -1;
int64_t x15 = 32064LL;
int32_t x21 = 5;
uint32_t x24 = 86U;
int32_t t4 = -12511;
uint64_t x42 = 1891648664218845LLU;
static uint8_t x45 = 0U;
volatile int32_t x75 = INT32_MIN;
int16_t x82 = -1;
static int64_t x85 = 774949133012508LL;
int32_t x96 = -1;
volatile uint32_t x113 = UINT32_MAX;
int16_t x115 = -1;
int32_t x124 = INT32_MIN;
int32_t x130 = -1;
uint64_t x141 = UINT64_MAX;
int16_t x143 = -1;
volatile uint64_t t19 = 827157LLU;
int16_t x149 = INT16_MAX;
volatile int32_t t20 = 48393827;
int16_t x157 = INT16_MAX;
static int32_t x159 = -46;
static volatile int64_t x160 = INT64_MIN;
int64_t x172 = -7451006635044LL;
int32_t t23 = INT32_MAX;
static volatile uint64_t x176 = 209582715387864839LLU;
int32_t t24 = 144827506;
int32_t x182 = INT32_MIN;
uint64_t x184 = 3542124752477209516LLU;
volatile int32_t t26 = -807109211;
int16_t x207 = 168;
volatile uint64_t t28 = UINT64_MAX;
int8_t x218 = INT8_MIN;
int16_t x220 = INT16_MIN;
static int64_t x243 = INT64_MAX;
uint8_t x267 = UINT8_MAX;
volatile uint16_t x273 = UINT16_MAX;
static uint64_t x276 = 3583351LLU;
uint32_t x277 = 32374U;
volatile uint32_t t38 = 501779U;
int16_t x291 = 0;
int8_t x303 = 2;
int8_t x309 = INT8_MAX;
static volatile int32_t t42 = -55858;
uint64_t x321 = 61697LLU;
uint64_t x323 = 79LLU;
int16_t x335 = INT16_MAX;
uint64_t t46 = 109511619LLU;
volatile uint16_t x372 = 4887U;
int32_t x383 = 41387;
static int16_t x392 = -18;
uint64_t t54 = 295LLU;
uint8_t x409 = 119U;
static uint32_t x414 = 452740371U;
uint32_t x417 = UINT32_MAX;
static int16_t x418 = -1;
static int8_t x420 = INT8_MIN;
uint32_t x438 = 8U;
volatile int32_t t61 = -1;
volatile uint8_t x447 = 15U;
int8_t x473 = 3;
int64_t x475 = -1LL;
uint8_t x480 = 2U;
volatile int32_t t67 = -332494;
uint32_t t69 = UINT32_MAX;
int32_t x518 = INT32_MIN;
int16_t x523 = -1;
static uint16_t x526 = 1U;
uint32_t x527 = 29568U;
volatile uint8_t x528 = UINT8_MAX;
static uint32_t x537 = 3U;
volatile uint32_t t74 = 3U;
int16_t x563 = INT16_MIN;
uint8_t x566 = 112U;
uint16_t x567 = UINT16_MAX;
int16_t x568 = INT16_MAX;
static int16_t x577 = INT16_MAX;
static uint64_t x578 = 2711813331575803575LLU;
static uint32_t x597 = UINT32_MAX;
int8_t x598 = -1;
static int64_t x612 = INT64_MIN;
volatile uint8_t x619 = 2U;
volatile int16_t x628 = -11;
uint32_t t88 = UINT32_MAX;
static uint64_t x663 = 49LLU;
int64_t x691 = 63LL;
static volatile uint64_t x696 = UINT64_MAX;
volatile int32_t t94 = 5949;
volatile uint64_t t96 = 166898211596909544LLU;
int8_t x733 = 37;
static int32_t t98 = 4133;


void f0(void) {
	static uint16_t x5 = 5U;
	uint32_t x6 = 28924U;
	static int8_t x7 = -1;
	int32_t x8 = -1;
	volatile int32_t t0 = 59763933;

	t0 = (x5<<(x6<=(x7%x8)));

	if (t0 != 5) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	int32_t x10 = 27;
	int16_t x11 = INT16_MIN;
	int32_t t1 = 2755;

	t1 = (x9<<(x10<=(x11%x12)));

	if (t1 != 254) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = 1U;
	int32_t x16 = -77070897;
	int32_t t2 = -4461;

	t2 = (x13<<(x14<=(x15%x16)));

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x22 = INT32_MIN;
	int8_t x23 = 1;
	volatile int32_t t3 = -6;

	t3 = (x21<<(x22<=(x23%x24)));

	if (t3 != 5) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x25 = 0;
	uint16_t x26 = 218U;
	int8_t x27 = 35;
	static volatile uint16_t x28 = UINT16_MAX;

	t4 = (x25<<(x26<=(x27%x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x41 = 1;
	static int64_t x43 = INT64_MIN;
	int64_t x44 = -1523642LL;
	int32_t t5 = -4333265;

	t5 = (x41<<(x42<=(x43%x44)));

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x46 = 363U;
	int16_t x47 = INT16_MAX;
	uint32_t x48 = 3172558U;
	int32_t t6 = -1014005;

	t6 = (x45<<(x46<=(x47%x48)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x49 = 65U;
	uint8_t x50 = 19U;
	uint32_t x51 = 548381807U;
	volatile int64_t x52 = INT64_MIN;
	volatile int32_t t7 = 37988505;

	t7 = (x49<<(x50<=(x51%x52)));

	if (t7 != 130) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x73 = 3U;
	int8_t x74 = INT8_MIN;
	int32_t x76 = -1;
	volatile int32_t t8 = -1;

	t8 = (x73<<(x74<=(x75%x76)));

	if (t8 != 6) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x81 = UINT64_MAX;
	int16_t x83 = 18;
	int64_t x84 = INT64_MAX;
	static volatile uint64_t t9 = 928LLU;

	t9 = (x81<<(x82<=(x83%x84)));

	if (t9 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x86 = 70887300LL;
	volatile int32_t x87 = INT32_MIN;
	int16_t x88 = -1;
	static volatile int64_t t10 = 339550043906233134LL;

	t10 = (x85<<(x86<=(x87%x88)));

	if (t10 != 774949133012508LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x93 = 2043440LLU;
	static int16_t x94 = INT16_MIN;
	uint64_t x95 = UINT64_MAX;
	volatile uint64_t t11 = 25412860482LLU;

	t11 = (x93<<(x94<=(x95%x96)));

	if (t11 != 2043440LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x105 = UINT32_MAX;
	int8_t x106 = 0;
	volatile uint8_t x107 = 2U;
	int32_t x108 = INT32_MIN;
	volatile uint32_t t12 = 53U;

	t12 = (x105<<(x106<=(x107%x108)));

	if (t12 != 4294967294U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x109 = 6U;
	static uint8_t x110 = UINT8_MAX;
	volatile uint32_t x111 = 2096498U;
	int32_t x112 = INT32_MIN;
	static volatile int32_t t13 = 395881;

	t13 = (x109<<(x110<=(x111%x112)));

	if (t13 != 12) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x114 = 25;
	int8_t x116 = 1;
	static volatile uint32_t t14 = UINT32_MAX;

	t14 = (x113<<(x114<=(x115%x116)));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x117 = 3907789085510355957LLU;
	int8_t x118 = INT8_MIN;
	uint32_t x119 = UINT32_MAX;
	static int16_t x120 = -1;
	static uint64_t t15 = 3125615166292964LLU;

	t15 = (x117<<(x118<=(x119%x120)));

	if (t15 != 3907789085510355957LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x121 = INT32_MAX;
	int32_t x122 = -1;
	uint32_t x123 = UINT32_MAX;
	volatile int32_t t16 = INT32_MAX;

	t16 = (x121<<(x122<=(x123%x124)));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x129 = 4U;
	uint64_t x131 = UINT64_MAX;
	uint64_t x132 = 129555842LLU;
	volatile int32_t t17 = 19426;

	t17 = (x129<<(x130<=(x131%x132)));

	if (t17 != 4) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x137 = UINT16_MAX;
	volatile int64_t x138 = -1LL;
	static volatile int8_t x139 = INT8_MIN;
	uint8_t x140 = 16U;
	volatile int32_t t18 = -8783349;

	t18 = (x137<<(x138<=(x139%x140)));

	if (t18 != 131070) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x142 = -1;
	int16_t x144 = INT16_MIN;

	t19 = (x141<<(x142<=(x143%x144)));

	if (t19 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x150 = INT32_MAX;
	int32_t x151 = INT32_MAX;
	int32_t x152 = INT32_MAX;

	t20 = (x149<<(x150<=(x151%x152)));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x158 = 30250U;
	volatile int32_t t21 = -64;

	t21 = (x157<<(x158<=(x159%x160)));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x165 = 21546388105791920LL;
	static uint32_t x166 = UINT32_MAX;
	static int8_t x167 = -1;
	static int16_t x168 = -1;
	int64_t t22 = 2422LL;

	t22 = (x165<<(x166<=(x167%x168)));

	if (t22 != 21546388105791920LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x169 = INT32_MAX;
	int8_t x170 = INT8_MIN;
	int32_t x171 = INT32_MIN;

	t23 = (x169<<(x170<=(x171%x172)));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x173 = INT8_MAX;
	uint8_t x174 = UINT8_MAX;
	int16_t x175 = INT16_MIN;

	t24 = (x173<<(x174<=(x175%x176)));

	if (t24 != 254) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x181 = INT16_MAX;
	int64_t x183 = INT64_MAX;
	volatile int32_t t25 = 49041;

	t25 = (x181<<(x182<=(x183%x184)));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x193 = 113U;
	int32_t x194 = INT32_MIN;
	int8_t x195 = -1;
	uint64_t x196 = UINT64_MAX;

	t26 = (x193<<(x194<=(x195%x196)));

	if (t26 != 113) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x205 = 313LLU;
	int16_t x206 = -2;
	static int16_t x208 = INT16_MIN;
	static uint64_t t27 = 64697LLU;

	t27 = (x205<<(x206<=(x207%x208)));

	if (t27 != 626LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x209 = UINT64_MAX;
	volatile uint64_t x210 = UINT64_MAX;
	static uint32_t x211 = UINT32_MAX;
	int64_t x212 = -1LL;

	t28 = (x209<<(x210<=(x211%x212)));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x213 = UINT32_MAX;
	int8_t x214 = INT8_MAX;
	static int32_t x215 = INT32_MAX;
	int64_t x216 = 460383047802951LL;
	static uint32_t t29 = 2770505U;

	t29 = (x213<<(x214<=(x215%x216)));

	if (t29 != 4294967294U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x217 = 464U;
	uint8_t x219 = UINT8_MAX;
	int32_t t30 = 642;

	t30 = (x217<<(x218<=(x219%x220)));

	if (t30 != 928) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x225 = UINT16_MAX;
	int8_t x226 = INT8_MAX;
	static int64_t x227 = -6695LL;
	volatile int32_t x228 = INT32_MAX;
	static volatile int32_t t31 = 0;

	t31 = (x225<<(x226<=(x227%x228)));

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x233 = UINT64_MAX;
	static int64_t x234 = 3150625209014123398LL;
	int16_t x235 = 1;
	int8_t x236 = -1;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (x233<<(x234<=(x235%x236)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x241 = 20328527962LL;
	static int64_t x242 = 111121692143795252LL;
	int64_t x244 = -1LL;
	int64_t t33 = 18122162353213LL;

	t33 = (x241<<(x242<=(x243%x244)));

	if (t33 != 20328527962LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x257 = UINT32_MAX;
	volatile int64_t x258 = 574269972LL;
	int8_t x259 = INT8_MIN;
	static volatile int64_t x260 = INT64_MIN;
	volatile uint32_t t34 = UINT32_MAX;

	t34 = (x257<<(x258<=(x259%x260)));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x261 = 19497419U;
	int32_t x262 = 57557;
	uint32_t x263 = 28444486U;
	int32_t x264 = INT32_MAX;
	volatile uint32_t t35 = 2614U;

	t35 = (x261<<(x262<=(x263%x264)));

	if (t35 != 38994838U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x265 = 1369LL;
	uint64_t x266 = UINT64_MAX;
	int32_t x268 = -109668376;
	static int64_t t36 = 349319047LL;

	t36 = (x265<<(x266<=(x267%x268)));

	if (t36 != 1369LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x274 = INT8_MAX;
	volatile int16_t x275 = INT16_MAX;
	int32_t t37 = -470;

	t37 = (x273<<(x274<=(x275%x276)));

	if (t37 != 131070) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x278 = INT64_MIN;
	volatile uint64_t x279 = 53LLU;
	volatile uint16_t x280 = 1U;

	t38 = (x277<<(x278<=(x279%x280)));

	if (t38 != 32374U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x281 = 23607230U;
	int32_t x282 = -11;
	static int32_t x283 = INT32_MIN;
	int8_t x284 = INT8_MIN;
	uint32_t t39 = 238495290U;

	t39 = (x281<<(x282<=(x283%x284)));

	if (t39 != 47214460U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x289 = 3895U;
	uint64_t x290 = 160946391LLU;
	int64_t x292 = INT64_MIN;
	int32_t t40 = -52113593;

	t40 = (x289<<(x290<=(x291%x292)));

	if (t40 != 3895) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x301 = 1813340859LLU;
	int8_t x302 = 0;
	static int8_t x304 = 14;
	volatile uint64_t t41 = 26LLU;

	t41 = (x301<<(x302<=(x303%x304)));

	if (t41 != 3626681718LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x310 = 34U;
	static volatile int8_t x311 = INT8_MAX;
	int8_t x312 = INT8_MIN;

	t42 = (x309<<(x310<=(x311%x312)));

	if (t42 != 254) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x322 = -139054230210659LL;
	int32_t x324 = -1;
	volatile uint64_t t43 = 537489017LLU;

	t43 = (x321<<(x322<=(x323%x324)));

	if (t43 != 61697LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x325 = INT8_MAX;
	uint16_t x326 = 1U;
	static volatile uint64_t x327 = 8576322185750130328LLU;
	static int32_t x328 = INT32_MAX;
	volatile int32_t t44 = 0;

	t44 = (x325<<(x326<=(x327%x328)));

	if (t44 != 254) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x333 = UINT32_MAX;
	static int16_t x334 = -1;
	volatile uint32_t x336 = 594U;
	uint32_t t45 = UINT32_MAX;

	t45 = (x333<<(x334<=(x335%x336)));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x341 = 97749184LLU;
	uint16_t x342 = 1U;
	static uint16_t x343 = 3U;
	int64_t x344 = INT64_MAX;

	t46 = (x341<<(x342<=(x343%x344)));

	if (t46 != 195498368LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x345 = 9;
	int16_t x346 = 125;
	volatile int8_t x347 = INT8_MIN;
	static uint16_t x348 = UINT16_MAX;
	volatile int32_t t47 = 4205;

	t47 = (x345<<(x346<=(x347%x348)));

	if (t47 != 9) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x353 = 18U;
	volatile int16_t x354 = -1;
	static volatile int16_t x355 = INT16_MIN;
	int64_t x356 = INT64_MIN;
	int32_t t48 = 129650;

	t48 = (x353<<(x354<=(x355%x356)));

	if (t48 != 18) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x361 = UINT32_MAX;
	int32_t x362 = 1;
	uint8_t x363 = 17U;
	uint8_t x364 = UINT8_MAX;
	volatile uint32_t t49 = 1122965270U;

	t49 = (x361<<(x362<=(x363%x364)));

	if (t49 != 4294967294U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x369 = 710405445LLU;
	uint16_t x370 = 23U;
	static uint16_t x371 = UINT16_MAX;
	static uint64_t t50 = 97800LLU;

	t50 = (x369<<(x370<=(x371%x372)));

	if (t50 != 1420810890LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x377 = UINT16_MAX;
	int16_t x378 = INT16_MIN;
	static uint16_t x379 = 186U;
	int8_t x380 = 1;
	static int32_t t51 = 3622398;

	t51 = (x377<<(x378<=(x379%x380)));

	if (t51 != 131070) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x381 = 39928437217356LLU;
	int16_t x382 = -1;
	int8_t x384 = INT8_MIN;
	volatile uint64_t t52 = 8634180441LLU;

	t52 = (x381<<(x382<=(x383%x384)));

	if (t52 != 79856874434712LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x385 = UINT8_MAX;
	volatile int64_t x386 = 15469043715825454LL;
	static volatile uint16_t x387 = UINT16_MAX;
	uint8_t x388 = 5U;
	volatile int32_t t53 = 2119708;

	t53 = (x385<<(x386<=(x387%x388)));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x389 = 3361LLU;
	int16_t x390 = -7;
	uint16_t x391 = UINT16_MAX;

	t54 = (x389<<(x390<=(x391%x392)));

	if (t54 != 6722LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x393 = INT16_MAX;
	static int16_t x394 = INT16_MAX;
	uint64_t x395 = 3042772018347LLU;
	uint64_t x396 = 1929LLU;
	static volatile int32_t t55 = -2060167;

	t55 = (x393<<(x394<=(x395%x396)));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x410 = INT8_MIN;
	int32_t x411 = -12;
	int8_t x412 = -54;
	volatile int32_t t56 = 1906678;

	t56 = (x409<<(x410<=(x411%x412)));

	if (t56 != 238) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x413 = INT16_MAX;
	static int32_t x415 = 60586;
	static volatile uint16_t x416 = 166U;
	volatile int32_t t57 = -87585227;

	t57 = (x413<<(x414<=(x415%x416)));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x419 = 8348U;
	static uint32_t t58 = 410104297U;

	t58 = (x417<<(x418<=(x419%x420)));

	if (t58 != 4294967294U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x425 = 5U;
	volatile uint64_t x426 = UINT64_MAX;
	static int16_t x427 = -1;
	volatile int16_t x428 = -1;
	int32_t t59 = 309326575;

	t59 = (x425<<(x426<=(x427%x428)));

	if (t59 != 5) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x429 = 175U;
	volatile int16_t x430 = INT16_MIN;
	uint8_t x431 = UINT8_MAX;
	volatile int32_t x432 = INT32_MAX;
	static volatile int32_t t60 = -6234215;

	t60 = (x429<<(x430<=(x431%x432)));

	if (t60 != 350) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x437 = 4U;
	int32_t x439 = INT32_MAX;
	static int16_t x440 = 15869;

	t61 = (x437<<(x438<=(x439%x440)));

	if (t61 != 8) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x445 = INT16_MAX;
	uint32_t x446 = 5U;
	int16_t x448 = INT16_MIN;
	volatile int32_t t62 = -7;

	t62 = (x445<<(x446<=(x447%x448)));

	if (t62 != 65534) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x469 = 17LLU;
	int64_t x470 = INT64_MIN;
	int8_t x471 = INT8_MIN;
	volatile int8_t x472 = INT8_MAX;
	static uint64_t t63 = 1158LLU;

	t63 = (x469<<(x470<=(x471%x472)));

	if (t63 != 34LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x474 = UINT16_MAX;
	static volatile uint64_t x476 = 1866912856428042056LLU;
	int32_t t64 = 5762829;

	t64 = (x473<<(x474<=(x475%x476)));

	if (t64 != 6) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x477 = UINT32_MAX;
	uint16_t x478 = UINT16_MAX;
	int16_t x479 = INT16_MIN;
	uint32_t t65 = UINT32_MAX;

	t65 = (x477<<(x478<=(x479%x480)));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x481 = 5U;
	int64_t x482 = INT64_MIN;
	volatile uint16_t x483 = 1U;
	static int64_t x484 = INT64_MIN;
	static volatile int32_t t66 = 22;

	t66 = (x481<<(x482<=(x483%x484)));

	if (t66 != 10) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x497 = UINT16_MAX;
	int8_t x498 = -1;
	volatile int16_t x499 = 321;
	static uint16_t x500 = 63U;

	t67 = (x497<<(x498<=(x499%x500)));

	if (t67 != 131070) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x501 = 10U;
	uint16_t x502 = 925U;
	static int16_t x503 = INT16_MAX;
	volatile int64_t x504 = -1LL;
	int32_t t68 = -345;

	t68 = (x501<<(x502<=(x503%x504)));

	if (t68 != 10) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x509 = UINT32_MAX;
	uint32_t x510 = 23308U;
	uint64_t x511 = UINT64_MAX;
	int16_t x512 = 9239;

	t69 = (x509<<(x510<=(x511%x512)));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x517 = 3127400U;
	int64_t x519 = INT64_MAX;
	static int8_t x520 = INT8_MAX;
	volatile uint32_t t70 = 156549781U;

	t70 = (x517<<(x518<=(x519%x520)));

	if (t70 != 6254800U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x521 = 13U;
	uint16_t x522 = 1U;
	int32_t x524 = -29882;
	int32_t t71 = -22757;

	t71 = (x521<<(x522<=(x523%x524)));

	if (t71 != 13) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x525 = 288;
	int32_t t72 = -44;

	t72 = (x525<<(x526<=(x527%x528)));

	if (t72 != 576) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x529 = INT64_MAX;
	int16_t x530 = INT16_MAX;
	volatile int32_t x531 = INT32_MIN;
	int32_t x532 = INT32_MAX;
	static int64_t t73 = INT64_MAX;

	t73 = (x529<<(x530<=(x531%x532)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x538 = INT64_MIN;
	int16_t x539 = 3;
	uint32_t x540 = 961293630U;

	t74 = (x537<<(x538<=(x539%x540)));

	if (t74 != 6U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x545 = UINT8_MAX;
	int16_t x546 = -14;
	uint32_t x547 = UINT32_MAX;
	uint64_t x548 = 847227797663012LLU;
	int32_t t75 = -1;

	t75 = (x545<<(x546<=(x547%x548)));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x561 = 2969U;
	uint16_t x562 = UINT16_MAX;
	uint16_t x564 = UINT16_MAX;
	int32_t t76 = 8;

	t76 = (x561<<(x562<=(x563%x564)));

	if (t76 != 2969) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x565 = 811373389708855534LLU;
	volatile uint64_t t77 = 604444284944490708LLU;

	t77 = (x565<<(x566<=(x567%x568)));

	if (t77 != 811373389708855534LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x573 = 100815461097LL;
	uint64_t x574 = 331966LLU;
	volatile int32_t x575 = -1;
	int16_t x576 = INT16_MIN;
	volatile int64_t t78 = -3176970193LL;

	t78 = (x573<<(x574<=(x575%x576)));

	if (t78 != 201630922194LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x579 = INT16_MAX;
	volatile uint16_t x580 = 10U;
	volatile int32_t t79 = -368687;

	t79 = (x577<<(x578<=(x579%x580)));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x585 = 76U;
	volatile uint8_t x586 = 11U;
	int64_t x587 = INT64_MIN;
	int32_t x588 = 522769;
	int32_t t80 = -483587;

	t80 = (x585<<(x586<=(x587%x588)));

	if (t80 != 76) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x599 = INT64_MAX;
	static uint16_t x600 = UINT16_MAX;
	volatile uint32_t t81 = 1792U;

	t81 = (x597<<(x598<=(x599%x600)));

	if (t81 != 4294967294U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x605 = 7U;
	int16_t x606 = -1;
	volatile int64_t x607 = 98022451317LL;
	int16_t x608 = INT16_MIN;
	volatile int32_t t82 = 0;

	t82 = (x605<<(x606<=(x607%x608)));

	if (t82 != 14) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x609 = 6U;
	int64_t x610 = -1LL;
	uint8_t x611 = 3U;
	int32_t t83 = -1;

	t83 = (x609<<(x610<=(x611%x612)));

	if (t83 != 12) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x617 = 1U;
	int16_t x618 = INT16_MIN;
	int32_t x620 = INT32_MIN;
	uint32_t t84 = 4173U;

	t84 = (x617<<(x618<=(x619%x620)));

	if (t84 != 2U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x621 = 532088780341613137LLU;
	int32_t x622 = INT32_MAX;
	int16_t x623 = -1;
	volatile int32_t x624 = -1;
	uint64_t t85 = 11LLU;

	t85 = (x621<<(x622<=(x623%x624)));

	if (t85 != 532088780341613137LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x625 = 3U;
	uint64_t x626 = 660LLU;
	uint8_t x627 = 0U;
	int32_t t86 = -689;

	t86 = (x625<<(x626<=(x627%x628)));

	if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x645 = 4410011099528148LLU;
	int8_t x646 = INT8_MIN;
	int16_t x647 = INT16_MIN;
	uint8_t x648 = 2U;
	volatile uint64_t t87 = 20168657048551LLU;

	t87 = (x645<<(x646<=(x647%x648)));

	if (t87 != 8820022199056296LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x649 = UINT32_MAX;
	static int8_t x650 = INT8_MAX;
	uint16_t x651 = 56U;
	int32_t x652 = INT32_MIN;

	t88 = (x649<<(x650<=(x651%x652)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x653 = 2230U;
	uint32_t x654 = 263433234U;
	int32_t x655 = INT32_MIN;
	volatile int32_t x656 = INT32_MIN;
	uint32_t t89 = 156U;

	t89 = (x653<<(x654<=(x655%x656)));

	if (t89 != 2230U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x661 = 425;
	int16_t x662 = -26;
	static uint16_t x664 = 3101U;
	int32_t t90 = 65581636;

	t90 = (x661<<(x662<=(x663%x664)));

	if (t90 != 425) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x669 = 30360979891469LLU;
	int8_t x670 = INT8_MAX;
	uint64_t x671 = 22204LLU;
	int16_t x672 = INT16_MIN;
	static volatile uint64_t t91 = 1305308LLU;

	t91 = (x669<<(x670<=(x671%x672)));

	if (t91 != 60721959782938LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x685 = 0;
	int16_t x686 = -2;
	int8_t x687 = INT8_MIN;
	static volatile int64_t x688 = -3482880051038694201LL;
	static int32_t t92 = -1;

	t92 = (x685<<(x686<=(x687%x688)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x689 = 1081927966490239LL;
	volatile int64_t x690 = -1LL;
	volatile int8_t x692 = -1;
	int64_t t93 = 17368905135208530LL;

	t93 = (x689<<(x690<=(x691%x692)));

	if (t93 != 2163855932980478LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x693 = 9U;
	int8_t x694 = INT8_MAX;
	uint8_t x695 = 7U;

	t94 = (x693<<(x694<=(x695%x696)));

	if (t94 != 9) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x701 = 2983337057LLU;
	int16_t x702 = 4;
	int64_t x703 = INT64_MIN;
	int16_t x704 = 5;
	static volatile uint64_t t95 = 133511172940972LLU;

	t95 = (x701<<(x702<=(x703%x704)));

	if (t95 != 2983337057LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x709 = 4LLU;
	int64_t x710 = -1LL;
	int32_t x711 = INT32_MIN;
	static int32_t x712 = INT32_MIN;

	t96 = (x709<<(x710<=(x711%x712)));

	if (t96 != 8LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x717 = 989;
	int64_t x718 = 377429271053LL;
	static volatile uint16_t x719 = 228U;
	int64_t x720 = INT64_MIN;
	volatile int32_t t97 = 5;

	t97 = (x717<<(x718<=(x719%x720)));

	if (t97 != 989) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x734 = 59990U;
	volatile int8_t x735 = INT8_MIN;
	int8_t x736 = -23;

	t98 = (x733<<(x734<=(x735%x736)));

	if (t98 != 74) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x741 = INT8_MAX;
	int8_t x742 = -1;
	uint16_t x743 = 30615U;
	static uint8_t x744 = 6U;
	volatile int32_t t99 = -248;

	t99 = (x741<<(x742<=(x743%x744)));

	if (t99 != 254) { NG(); } else { ; }
	
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

