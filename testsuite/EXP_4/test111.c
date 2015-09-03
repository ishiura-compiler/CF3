#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x6 = -1;
int16_t x8 = -568;
static volatile uint32_t x17 = 13945727U;
uint32_t x19 = UINT32_MAX;
uint64_t x36 = UINT64_MAX;
int32_t t4 = 1321549;
uint16_t x62 = UINT16_MAX;
uint16_t x69 = UINT16_MAX;
uint64_t x76 = 1088342859569LLU;
static int8_t x93 = 7;
int32_t x100 = -1;
int32_t t11 = 0;
static int8_t x110 = INT8_MIN;
volatile uint64_t x115 = 527047927LLU;
volatile uint8_t x118 = UINT8_MAX;
static uint32_t t18 = 32U;
static uint16_t x159 = 19U;
uint8_t x175 = 0U;
int16_t x191 = 108;
int64_t x192 = INT64_MIN;
uint64_t t23 = 1494LLU;
volatile int64_t x210 = INT64_MAX;
int8_t x211 = INT8_MIN;
static uint8_t x233 = 1U;
int8_t x234 = INT8_MIN;
int64_t x254 = 267164LL;
static int8_t x256 = INT8_MAX;
volatile uint64_t t30 = 176768067320LLU;
static int16_t x270 = 6127;
volatile int8_t x271 = INT8_MAX;
uint64_t x279 = UINT64_MAX;
uint32_t x286 = UINT32_MAX;
int32_t t34 = 29661024;
uint16_t x310 = 3U;
static volatile uint64_t t37 = 601061952177285582LLU;
volatile uint64_t t38 = 69329140235LLU;
static int16_t x346 = -1;
int32_t x355 = 0;
int16_t x356 = INT16_MIN;
int32_t x362 = -6;
int32_t x363 = INT32_MIN;
volatile int32_t t41 = INT32_MAX;
volatile uint8_t x365 = UINT8_MAX;
static uint32_t x368 = 13U;
int32_t t44 = 0;
volatile uint32_t x381 = 310266205U;
uint16_t x384 = 10U;
uint16_t x396 = 3360U;
uint32_t x438 = UINT32_MAX;
volatile int64_t x439 = -4120223651853887LL;
volatile int16_t x452 = INT16_MIN;
int16_t x491 = INT16_MIN;
int8_t x495 = -1;
uint8_t x509 = UINT8_MAX;
int16_t x523 = 1;
uint32_t x542 = 73981665U;
uint64_t x544 = 2666991307932213491LLU;
static volatile int32_t t64 = 248929689;
int64_t x563 = INT64_MIN;
volatile uint64_t t67 = 26703784LLU;
static int32_t x608 = -1;
int32_t x609 = INT32_MAX;
volatile int32_t t73 = -15;
int64_t x624 = -1LL;
uint64_t x625 = 26655LLU;
static int8_t x626 = -3;
uint64_t x635 = 2790354LLU;
volatile uint64_t x640 = UINT64_MAX;
uint32_t x645 = UINT32_MAX;
int32_t x651 = INT32_MIN;
static uint64_t t81 = 1735196LLU;
uint64_t x665 = 7541LLU;
int64_t x666 = -1LL;
int8_t x667 = -7;
int32_t x670 = -1;
volatile int32_t t85 = 10;
volatile int8_t x685 = 1;
volatile int32_t t86 = 1206;
int8_t x701 = INT8_MAX;
uint64_t x704 = UINT64_MAX;
int32_t x710 = -16364;
static uint32_t x746 = 13U;
static int64_t x748 = INT64_MAX;
uint64_t t92 = 8LLU;
int64_t x750 = -23017176768LL;
volatile int16_t x785 = 57;
int32_t t96 = 38445;
uint32_t x810 = UINT32_MAX;
int8_t x811 = -1;


void f0(void) {
	uint64_t x1 = 106007LLU;
	uint64_t x2 = 13931753997165LLU;
	int32_t x3 = -36396;
	int32_t x4 = 0;
	uint64_t t0 = 57424380106LLU;

	t0 = (x1>>(x2<(x3+x4)));

	if (t0 != 53003LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = UINT8_MAX;
	int16_t x7 = -1;
	int32_t t1 = -1;

	t1 = (x5>>(x6<(x7+x8)));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x18 = 5;
	int32_t x20 = 1;
	uint32_t t2 = 1446180U;

	t2 = (x17>>(x18<(x19+x20)));

	if (t2 != 13945727U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x33 = 5U;
	int32_t x34 = -1;
	volatile uint8_t x35 = UINT8_MAX;
	volatile int32_t t3 = 297173719;

	t3 = (x33>>(x34<(x35+x36)));

	if (t3 != 5) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x45 = 3U;
	int64_t x46 = INT64_MIN;
	uint32_t x47 = 20684776U;
	uint32_t x48 = 29U;

	t4 = (x45>>(x46<(x47+x48)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x61 = UINT8_MAX;
	volatile uint32_t x63 = 2025509007U;
	static int32_t x64 = 6922;
	static volatile int32_t t5 = -1;

	t5 = (x61>>(x62<(x63+x64)));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x70 = UINT8_MAX;
	uint64_t x71 = 227LLU;
	uint32_t x72 = UINT32_MAX;
	int32_t t6 = -60887;

	t6 = (x69>>(x70<(x71+x72)));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x73 = 6U;
	static int8_t x74 = INT8_MIN;
	uint8_t x75 = 38U;
	volatile int32_t t7 = 4720;

	t7 = (x73>>(x74<(x75+x76)));

	if (t7 != 6) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x81 = 29940028232364796LL;
	uint16_t x82 = 1U;
	int64_t x83 = INT64_MIN;
	uint64_t x84 = 2417LLU;
	volatile int64_t t8 = 559160907005518LL;

	t8 = (x81>>(x82<(x83+x84)));

	if (t8 != 14970014116182398LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x94 = UINT16_MAX;
	uint32_t x95 = UINT32_MAX;
	int64_t x96 = 4LL;
	static volatile int32_t t9 = -1;

	t9 = (x93>>(x94<(x95+x96)));

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x97 = INT8_MAX;
	volatile int64_t x98 = 993223334LL;
	volatile uint8_t x99 = 74U;
	int32_t t10 = -210;

	t10 = (x97>>(x98<(x99+x100)));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x101 = 56;
	static int32_t x102 = -29033;
	uint8_t x103 = 3U;
	static int8_t x104 = INT8_MIN;

	t11 = (x101>>(x102<(x103+x104)));

	if (t11 != 28) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x109 = 9;
	int16_t x111 = 0;
	static volatile int16_t x112 = -1;
	volatile int32_t t12 = -3028;

	t12 = (x109>>(x110<(x111+x112)));

	if (t12 != 4) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x113 = 2;
	volatile int16_t x114 = INT16_MIN;
	uint16_t x116 = 17U;
	int32_t t13 = -538;

	t13 = (x113>>(x114<(x115+x116)));

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x117 = 47;
	volatile int8_t x119 = 3;
	int32_t x120 = INT32_MIN;
	static int32_t t14 = -644917472;

	t14 = (x117>>(x118<(x119+x120)));

	if (t14 != 47) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x133 = 3462U;
	int64_t x134 = -4788LL;
	static int8_t x135 = -1;
	uint16_t x136 = 7503U;
	int32_t t15 = 209843297;

	t15 = (x133>>(x134<(x135+x136)));

	if (t15 != 1731) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x137 = 0U;
	int64_t x138 = INT64_MIN;
	int16_t x139 = 0;
	int8_t x140 = 0;
	static volatile int32_t t16 = 562113337;

	t16 = (x137>>(x138<(x139+x140)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x141 = 949982709U;
	volatile int64_t x142 = -1LL;
	int16_t x143 = INT16_MIN;
	static int8_t x144 = INT8_MIN;
	uint32_t t17 = 557579258U;

	t17 = (x141>>(x142<(x143+x144)));

	if (t17 != 949982709U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x145 = 3903U;
	uint64_t x146 = 1823882415829LLU;
	int64_t x147 = -12085071264132623LL;
	static int16_t x148 = INT16_MIN;

	t18 = (x145>>(x146<(x147+x148)));

	if (t18 != 1951U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x157 = UINT8_MAX;
	static volatile int16_t x158 = -1;
	uint64_t x160 = 106602103765LLU;
	int32_t t19 = 6280;

	t19 = (x157>>(x158<(x159+x160)));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x161 = INT8_MAX;
	static uint64_t x162 = 326769416549201LLU;
	uint16_t x163 = 11556U;
	int32_t x164 = 1617270;
	volatile int32_t t20 = -200060114;

	t20 = (x161>>(x162<(x163+x164)));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x173 = UINT8_MAX;
	uint64_t x174 = 247663327LLU;
	int8_t x176 = INT8_MAX;
	int32_t t21 = -156;

	t21 = (x173>>(x174<(x175+x176)));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x189 = 85016890LL;
	uint8_t x190 = UINT8_MAX;
	volatile int64_t t22 = 1LL;

	t22 = (x189>>(x190<(x191+x192)));

	if (t22 != 85016890LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x197 = 153878262886537045LLU;
	uint32_t x198 = 11235927U;
	int8_t x199 = INT8_MIN;
	volatile int8_t x200 = -8;

	t23 = (x197>>(x198<(x199+x200)));

	if (t23 != 76939131443268522LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x209 = UINT64_MAX;
	static int8_t x212 = 0;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = (x209>>(x210<(x211+x212)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x235 = INT32_MIN;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t25 = 1;

	t25 = (x233>>(x234<(x235+x236)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x241 = 0;
	static uint16_t x242 = UINT16_MAX;
	volatile uint8_t x243 = 0U;
	int32_t x244 = 2;
	int32_t t26 = -10951511;

	t26 = (x241>>(x242<(x243+x244)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x249 = 96U;
	static volatile uint64_t x250 = 13416721LLU;
	int8_t x251 = INT8_MIN;
	static uint16_t x252 = 3U;
	static volatile int32_t t27 = 25;

	t27 = (x249>>(x250<(x251+x252)));

	if (t27 != 48) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x253 = UINT64_MAX;
	static volatile uint64_t x255 = UINT64_MAX;
	uint64_t t28 = UINT64_MAX;

	t28 = (x253>>(x254<(x255+x256)));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x257 = 177377;
	static int64_t x258 = 73433762363954745LL;
	int8_t x259 = 24;
	int32_t x260 = INT32_MIN;
	static volatile int32_t t29 = 0;

	t29 = (x257>>(x258<(x259+x260)));

	if (t29 != 177377) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x261 = 1231918566LLU;
	uint64_t x262 = 3054968030388270059LLU;
	volatile int64_t x263 = 62LL;
	volatile uint32_t x264 = UINT32_MAX;

	t30 = (x261>>(x262<(x263+x264)));

	if (t30 != 1231918566LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x269 = 689U;
	volatile int8_t x272 = INT8_MAX;
	volatile int32_t t31 = -30;

	t31 = (x269>>(x270<(x271+x272)));

	if (t31 != 689) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x277 = 4886;
	uint32_t x278 = 25940183U;
	int64_t x280 = INT64_MIN;
	volatile int32_t t32 = -22;

	t32 = (x277>>(x278<(x279+x280)));

	if (t32 != 2443) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x285 = 3U;
	int16_t x287 = -213;
	volatile uint64_t x288 = UINT64_MAX;
	static int32_t t33 = -50;

	t33 = (x285>>(x286<(x287+x288)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x289 = 5U;
	uint64_t x290 = 44LLU;
	static int32_t x291 = -1;
	int16_t x292 = INT16_MIN;

	t34 = (x289>>(x290<(x291+x292)));

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x293 = INT32_MAX;
	uint16_t x294 = UINT16_MAX;
	static int64_t x295 = 7614156997LL;
	volatile int8_t x296 = 1;
	volatile int32_t t35 = 2542310;

	t35 = (x293>>(x294<(x295+x296)));

	if (t35 != 1073741823) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x309 = INT32_MAX;
	volatile int64_t x311 = -419LL;
	int32_t x312 = INT32_MIN;
	volatile int32_t t36 = INT32_MAX;

	t36 = (x309>>(x310<(x311+x312)));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x317 = 11LLU;
	uint32_t x318 = 100429U;
	uint64_t x319 = 2324360LLU;
	uint8_t x320 = UINT8_MAX;

	t37 = (x317>>(x318<(x319+x320)));

	if (t37 != 5LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x329 = 19756282LLU;
	volatile int64_t x330 = INT64_MAX;
	static int16_t x331 = -1;
	static volatile uint64_t x332 = 1161020332LLU;

	t38 = (x329>>(x330<(x331+x332)));

	if (t38 != 19756282LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x345 = 2263U;
	int8_t x347 = 47;
	int16_t x348 = INT16_MIN;
	volatile int32_t t39 = -189912313;

	t39 = (x345>>(x346<(x347+x348)));

	if (t39 != 2263) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x353 = 1477559951974LLU;
	volatile int32_t x354 = -1;
	uint64_t t40 = 1051LLU;

	t40 = (x353>>(x354<(x355+x356)));

	if (t40 != 1477559951974LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x361 = INT32_MAX;
	uint8_t x364 = 46U;

	t41 = (x361>>(x362<(x363+x364)));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x366 = -4;
	uint16_t x367 = UINT16_MAX;
	int32_t t42 = -12;

	t42 = (x365>>(x366<(x367+x368)));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x369 = 10U;
	volatile int64_t x370 = 1360895LL;
	static int8_t x371 = INT8_MAX;
	volatile int16_t x372 = -1;
	volatile int32_t t43 = -1;

	t43 = (x369>>(x370<(x371+x372)));

	if (t43 != 10) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x373 = 55U;
	int16_t x374 = -310;
	int16_t x375 = INT16_MIN;
	uint64_t x376 = 344448LLU;

	t44 = (x373>>(x374<(x375+x376)));

	if (t44 != 55) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x382 = INT16_MAX;
	uint32_t x383 = UINT32_MAX;
	static uint32_t t45 = 21605871U;

	t45 = (x381>>(x382<(x383+x384)));

	if (t45 != 310266205U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x393 = UINT64_MAX;
	int16_t x394 = INT16_MAX;
	int16_t x395 = INT16_MIN;
	static uint64_t t46 = UINT64_MAX;

	t46 = (x393>>(x394<(x395+x396)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x401 = UINT8_MAX;
	int16_t x402 = INT16_MIN;
	uint8_t x403 = 4U;
	volatile int8_t x404 = 17;
	volatile int32_t t47 = 3;

	t47 = (x401>>(x402<(x403+x404)));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x409 = INT32_MAX;
	int64_t x410 = INT64_MAX;
	int16_t x411 = 631;
	int64_t x412 = 176391176029639622LL;
	volatile int32_t t48 = INT32_MAX;

	t48 = (x409>>(x410<(x411+x412)));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x425 = 18667745043085184LLU;
	uint16_t x426 = 18845U;
	uint64_t x427 = 3742LLU;
	int16_t x428 = INT16_MAX;
	static uint64_t t49 = 23995033354LLU;

	t49 = (x425>>(x426<(x427+x428)));

	if (t49 != 9333872521542592LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x437 = INT8_MAX;
	int64_t x440 = -190350639901805LL;
	volatile int32_t t50 = -3871;

	t50 = (x437>>(x438<(x439+x440)));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x441 = 0U;
	volatile int8_t x442 = -1;
	static uint32_t x443 = UINT32_MAX;
	int8_t x444 = -1;
	volatile int32_t t51 = -245889;

	t51 = (x441>>(x442<(x443+x444)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x449 = 216;
	volatile int64_t x450 = INT64_MAX;
	int8_t x451 = INT8_MIN;
	static volatile int32_t t52 = 362298637;

	t52 = (x449>>(x450<(x451+x452)));

	if (t52 != 216) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x465 = 31U;
	static int32_t x466 = -2;
	int16_t x467 = INT16_MIN;
	int16_t x468 = INT16_MIN;
	int32_t t53 = 6747902;

	t53 = (x465>>(x466<(x467+x468)));

	if (t53 != 31) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x469 = 13;
	int32_t x470 = INT32_MAX;
	int64_t x471 = -1LL;
	uint64_t x472 = 14947750777476LLU;
	int32_t t54 = -1;

	t54 = (x469>>(x470<(x471+x472)));

	if (t54 != 6) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x473 = UINT32_MAX;
	static int16_t x474 = INT16_MIN;
	uint8_t x475 = 18U;
	uint64_t x476 = 3900109633LLU;
	uint32_t t55 = UINT32_MAX;

	t55 = (x473>>(x474<(x475+x476)));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x489 = 45811263235LLU;
	int64_t x490 = -1LL;
	static uint32_t x492 = 204U;
	static uint64_t t56 = 554379655LLU;

	t56 = (x489>>(x490<(x491+x492)));

	if (t56 != 22905631617LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x493 = UINT32_MAX;
	int32_t x494 = INT32_MIN;
	int16_t x496 = 116;
	static volatile uint32_t t57 = 22539U;

	t57 = (x493>>(x494<(x495+x496)));

	if (t57 != 2147483647U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x497 = UINT8_MAX;
	int64_t x498 = INT64_MAX;
	int32_t x499 = INT32_MIN;
	int16_t x500 = 54;
	int32_t t58 = -39343;

	t58 = (x497>>(x498<(x499+x500)));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x510 = -9;
	static uint32_t x511 = UINT32_MAX;
	int64_t x512 = -6671685LL;
	volatile int32_t t59 = 1;

	t59 = (x509>>(x510<(x511+x512)));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x517 = 532LL;
	uint16_t x518 = 389U;
	uint64_t x519 = UINT64_MAX;
	static int8_t x520 = INT8_MIN;
	int64_t t60 = -1839145LL;

	t60 = (x517>>(x518<(x519+x520)));

	if (t60 != 266LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x521 = 1U;
	int16_t x522 = -9957;
	static volatile int16_t x524 = INT16_MIN;
	uint32_t t61 = 996U;

	t61 = (x521>>(x522<(x523+x524)));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x537 = UINT64_MAX;
	int32_t x538 = INT32_MIN;
	int8_t x539 = -1;
	volatile int8_t x540 = INT8_MIN;
	volatile uint64_t t62 = 5152639343738126091LLU;

	t62 = (x537>>(x538<(x539+x540)));

	if (t62 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x541 = INT32_MAX;
	int8_t x543 = -2;
	volatile int32_t t63 = -1;

	t63 = (x541>>(x542<(x543+x544)));

	if (t63 != 1073741823) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x545 = UINT8_MAX;
	volatile int8_t x546 = -1;
	volatile int8_t x547 = -3;
	uint8_t x548 = 1U;

	t64 = (x545>>(x546<(x547+x548)));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x549 = 2420LL;
	int16_t x550 = INT16_MAX;
	int64_t x551 = INT64_MIN;
	uint16_t x552 = UINT16_MAX;
	int64_t t65 = 53694LL;

	t65 = (x549>>(x550<(x551+x552)));

	if (t65 != 2420LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x561 = 1492;
	static int64_t x562 = -982168028581LL;
	uint64_t x564 = UINT64_MAX;
	volatile int32_t t66 = -351187;

	t66 = (x561>>(x562<(x563+x564)));

	if (t66 != 1492) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x585 = UINT64_MAX;
	int8_t x586 = 1;
	volatile int64_t x587 = 2140224747LL;
	int16_t x588 = INT16_MIN;

	t67 = (x585>>(x586<(x587+x588)));

	if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x589 = 4;
	static uint8_t x590 = 0U;
	int32_t x591 = 50;
	int8_t x592 = -24;
	static volatile int32_t t68 = 2;

	t68 = (x589>>(x590<(x591+x592)));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x593 = INT32_MAX;
	int64_t x594 = INT64_MIN;
	static int16_t x595 = -1045;
	int8_t x596 = -1;
	volatile int32_t t69 = -4849010;

	t69 = (x593>>(x594<(x595+x596)));

	if (t69 != 1073741823) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x601 = 48;
	int16_t x602 = INT16_MAX;
	volatile uint8_t x603 = UINT8_MAX;
	int64_t x604 = INT64_MIN;
	volatile int32_t t70 = 17802;

	t70 = (x601>>(x602<(x603+x604)));

	if (t70 != 48) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x605 = 21U;
	int8_t x606 = 5;
	static int8_t x607 = -23;
	static int32_t t71 = 451203217;

	t71 = (x605>>(x606<(x607+x608)));

	if (t71 != 21) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x610 = 1;
	int16_t x611 = INT16_MAX;
	uint64_t x612 = UINT64_MAX;
	int32_t t72 = 5;

	t72 = (x609>>(x610<(x611+x612)));

	if (t72 != 1073741823) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x613 = INT16_MAX;
	uint32_t x614 = 202816968U;
	uint16_t x615 = UINT16_MAX;
	volatile uint8_t x616 = 0U;

	t73 = (x613>>(x614<(x615+x616)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x621 = 2U;
	static int64_t x622 = 318LL;
	int32_t x623 = INT32_MAX;
	volatile int32_t t74 = 13;

	t74 = (x621>>(x622<(x623+x624)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x627 = 14442932LLU;
	volatile int32_t x628 = INT32_MAX;
	volatile uint64_t t75 = 3053130391456803LLU;

	t75 = (x625>>(x626<(x627+x628)));

	if (t75 != 26655LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x629 = INT16_MAX;
	uint64_t x630 = UINT64_MAX;
	int16_t x631 = 61;
	static int8_t x632 = INT8_MIN;
	static volatile int32_t t76 = -143;

	t76 = (x629>>(x630<(x631+x632)));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x633 = UINT8_MAX;
	static volatile uint32_t x634 = 735U;
	int32_t x636 = INT32_MIN;
	int32_t t77 = 179231746;

	t77 = (x633>>(x634<(x635+x636)));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x637 = 1;
	uint8_t x638 = UINT8_MAX;
	uint64_t x639 = 18832524886LLU;
	int32_t t78 = 51182;

	t78 = (x637>>(x638<(x639+x640)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x641 = INT8_MAX;
	uint64_t x642 = 90749LLU;
	int8_t x643 = INT8_MIN;
	int32_t x644 = -213;
	static int32_t t79 = 10627;

	t79 = (x641>>(x642<(x643+x644)));

	if (t79 != 63) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x646 = -12796LL;
	volatile int8_t x647 = INT8_MIN;
	uint8_t x648 = 7U;
	volatile uint32_t t80 = 7U;

	t80 = (x645>>(x646<(x647+x648)));

	if (t80 != 2147483647U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x649 = 879424761LLU;
	int8_t x650 = INT8_MIN;
	volatile int16_t x652 = 45;

	t81 = (x649>>(x650<(x651+x652)));

	if (t81 != 879424761LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x653 = 13740U;
	uint16_t x654 = UINT16_MAX;
	uint64_t x655 = 41820598663089579LLU;
	static int32_t x656 = -406936165;
	static volatile int32_t t82 = -25468;

	t82 = (x653>>(x654<(x655+x656)));

	if (t82 != 6870) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x657 = UINT16_MAX;
	uint8_t x658 = 2U;
	uint16_t x659 = UINT16_MAX;
	int64_t x660 = INT64_MIN;
	int32_t t83 = 8;

	t83 = (x657>>(x658<(x659+x660)));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x668 = -1LL;
	static uint64_t t84 = 13LLU;

	t84 = (x665>>(x666<(x667+x668)));

	if (t84 != 7541LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x669 = 6U;
	int8_t x671 = INT8_MIN;
	int16_t x672 = -3;

	t85 = (x669>>(x670<(x671+x672)));

	if (t85 != 6) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x686 = -332;
	volatile uint8_t x687 = 60U;
	int16_t x688 = 0;

	t86 = (x685>>(x686<(x687+x688)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x697 = 350;
	static int8_t x698 = -1;
	static volatile uint8_t x699 = 15U;
	int32_t x700 = INT32_MIN;
	int32_t t87 = -231;

	t87 = (x697>>(x698<(x699+x700)));

	if (t87 != 350) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x702 = UINT16_MAX;
	int64_t x703 = INT64_MIN;
	volatile int32_t t88 = -1578270;

	t88 = (x701>>(x702<(x703+x704)));

	if (t88 != 63) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x709 = INT16_MAX;
	int32_t x711 = INT32_MIN;
	static uint16_t x712 = 3U;
	static volatile int32_t t89 = -17;

	t89 = (x709>>(x710<(x711+x712)));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x713 = 0;
	static int64_t x714 = INT64_MIN;
	static uint64_t x715 = 0LLU;
	int16_t x716 = INT16_MIN;
	static volatile int32_t t90 = 20919944;

	t90 = (x713>>(x714<(x715+x716)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x733 = UINT8_MAX;
	static uint8_t x734 = 1U;
	static int64_t x735 = 231366LL;
	int32_t x736 = INT32_MAX;
	int32_t t91 = -865885;

	t91 = (x733>>(x734<(x735+x736)));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x745 = 2078719339112775LLU;
	int64_t x747 = -342699LL;

	t92 = (x745>>(x746<(x747+x748)));

	if (t92 != 1039359669556387LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x749 = INT16_MAX;
	uint8_t x751 = UINT8_MAX;
	int64_t x752 = -1LL;
	static volatile int32_t t93 = -898576122;

	t93 = (x749>>(x750<(x751+x752)));

	if (t93 != 16383) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x757 = 45539U;
	static uint64_t x758 = 560388680598348LLU;
	volatile int16_t x759 = -1;
	static int32_t x760 = -1;
	volatile uint32_t t94 = 163958U;

	t94 = (x757>>(x758<(x759+x760)));

	if (t94 != 22769U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x777 = 3U;
	uint32_t x778 = UINT32_MAX;
	int64_t x779 = INT64_MIN;
	static volatile int32_t x780 = INT32_MAX;
	static int32_t t95 = 5791;

	t95 = (x777>>(x778<(x779+x780)));

	if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x786 = 253397348;
	static uint64_t x787 = 24768663855043475LLU;
	static uint16_t x788 = 1U;

	t96 = (x785>>(x786<(x787+x788)));

	if (t96 != 28) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x793 = UINT32_MAX;
	static int64_t x794 = -690069947789LL;
	int64_t x795 = INT64_MAX;
	uint64_t x796 = 58629267249000507LLU;
	uint32_t t97 = UINT32_MAX;

	t97 = (x793>>(x794<(x795+x796)));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x805 = INT64_MAX;
	static uint64_t x806 = 1934797LLU;
	int64_t x807 = INT64_MIN;
	uint8_t x808 = 28U;
	volatile int64_t t98 = 1592115LL;

	t98 = (x805>>(x806<(x807+x808)));

	if (t98 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x809 = UINT64_MAX;
	int8_t x812 = 1;
	uint64_t t99 = UINT64_MAX;

	t99 = (x809>>(x810<(x811+x812)));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

