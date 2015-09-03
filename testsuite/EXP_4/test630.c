#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
int16_t x4 = -9896;
int64_t x10 = -568213786117LL;
uint64_t x15 = 138LLU;
uint64_t x23 = 24670667LLU;
volatile int32_t t6 = 1;
volatile uint64_t x61 = 0LLU;
static int8_t x63 = 11;
int16_t x72 = INT16_MAX;
static volatile int8_t x80 = 5;
static volatile int32_t x81 = INT32_MAX;
int32_t x94 = -1;
uint16_t x95 = 14787U;
uint32_t t15 = 45U;
volatile int32_t t17 = 49;
int16_t x146 = INT16_MIN;
uint64_t x147 = UINT64_MAX;
int64_t x148 = -1LL;
int64_t x153 = 78LL;
static volatile uint8_t x154 = 1U;
int8_t x173 = 17;
static int32_t x174 = INT32_MAX;
uint16_t x193 = 5U;
int64_t x219 = INT64_MIN;
int32_t t29 = 0;
uint32_t x239 = 4U;
uint16_t x240 = 14U;
static int32_t x242 = 475354849;
volatile uint32_t x246 = 103U;
int64_t x262 = INT64_MIN;
volatile int16_t x263 = INT16_MAX;
volatile int64_t x265 = INT64_MAX;
static volatile int32_t x266 = -1;
int32_t x270 = INT32_MIN;
static uint8_t x276 = UINT8_MAX;
uint16_t x291 = UINT16_MAX;
uint8_t x301 = 3U;
int64_t x304 = 9140629LL;
volatile uint64_t t42 = 7942247656398233912LLU;
int8_t x327 = 4;
volatile uint32_t x336 = 438465251U;
int8_t x355 = -1;
int32_t t46 = -2;
int16_t x380 = INT16_MIN;
int8_t x383 = -1;
int32_t x387 = -695;
volatile uint64_t t50 = 1007701645960091LLU;
int8_t x391 = 0;
uint32_t x402 = UINT32_MAX;
uint32_t x403 = UINT32_MAX;
uint8_t x412 = 11U;
uint8_t x413 = 50U;
int64_t x415 = INT64_MIN;
static volatile int8_t x416 = 3;
volatile int32_t t56 = 496437300;
uint8_t x425 = 3U;
volatile int64_t x427 = 89834476854041LL;
int8_t x428 = INT8_MIN;
static volatile int32_t t57 = -4;
uint32_t x434 = 61144U;
static uint8_t x436 = 6U;
int16_t x437 = 0;
volatile int32_t t60 = 68;
int8_t x459 = INT8_MAX;
uint8_t x466 = 8U;
volatile uint64_t t63 = 242116879072649984LLU;
static int64_t x483 = INT64_MIN;
uint8_t x489 = 6U;
volatile int16_t x491 = 1345;
uint16_t x505 = UINT16_MAX;
volatile int32_t t68 = -1981505;
static volatile int16_t x525 = INT16_MAX;
int32_t x533 = 1033390;
int32_t x534 = -290812494;
volatile int32_t t70 = -255;
uint8_t x537 = 5U;
volatile int32_t x539 = INT32_MIN;
int16_t x540 = INT16_MIN;
volatile int32_t t72 = 28;
int16_t x562 = INT16_MIN;
int64_t x563 = INT64_MIN;
int32_t t75 = -9;
volatile int32_t x584 = INT32_MAX;
volatile uint16_t x591 = 3047U;
int8_t x601 = 5;
uint32_t x604 = UINT32_MAX;
int32_t x621 = 1;
uint32_t x622 = 3U;
int64_t t81 = 8218562LL;
int64_t x638 = -4018590109343LL;
int64_t x639 = INT64_MAX;
static volatile int32_t x644 = INT32_MIN;
uint8_t x645 = 0U;
uint16_t x648 = 155U;
int32_t t84 = 29;
int64_t x655 = -952854136036587LL;
static int8_t x657 = INT8_MAX;
int8_t x660 = INT8_MIN;
int8_t x663 = -1;
int32_t x667 = INT32_MAX;
int64_t x668 = INT64_MIN;
volatile uint64_t t90 = 17LLU;
int64_t x675 = INT64_MIN;
uint8_t x695 = 4U;
int8_t x718 = -1;
int8_t x719 = INT8_MIN;
int32_t t97 = 86892614;
volatile int32_t x722 = -168636;
int64_t x724 = INT64_MAX;


void f0(void) {
	static uint32_t x1 = 24259U;
	int64_t x3 = INT64_MAX;
	uint32_t t0 = 85274U;

	t0 = (x1<<(x2<=(x3/x4)));

	if (t0 != 24259U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MAX;
	int64_t x11 = INT64_MIN;
	uint32_t x12 = 42053017U;
	volatile int32_t t1 = 1666389;

	t1 = (x9<<(x10<=(x11/x12)));

	if (t1 != 65534) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 509035U;
	static volatile int32_t x14 = -41429126;
	int32_t x16 = INT32_MIN;
	uint32_t t2 = 1133493279U;

	t2 = (x13<<(x14<=(x15/x16)));

	if (t2 != 509035U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x17 = 1377777892U;
	int8_t x18 = -1;
	static int32_t x19 = INT32_MAX;
	static volatile int64_t x20 = 286968325407251784LL;
	volatile uint32_t t3 = 12U;

	t3 = (x17<<(x18<=(x19/x20)));

	if (t3 != 2755555784U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = 1;
	static uint64_t x22 = 3262138792LLU;
	static int32_t x24 = -1;
	static volatile int32_t t4 = -1282036;

	t4 = (x21<<(x22<=(x23/x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x49 = UINT64_MAX;
	static uint8_t x50 = UINT8_MAX;
	int8_t x51 = -1;
	uint64_t x52 = 2343LLU;
	uint64_t t5 = 27LLU;

	t5 = (x49<<(x50<=(x51/x52)));

	if (t5 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x53 = 812;
	int32_t x54 = INT32_MAX;
	static int8_t x55 = -1;
	uint8_t x56 = 67U;

	t6 = (x53<<(x54<=(x55/x56)));

	if (t6 != 812) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x62 = 75U;
	uint64_t x64 = 3229LLU;
	volatile uint64_t t7 = 8556962253523086538LLU;

	t7 = (x61<<(x62<=(x63/x64)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x65 = UINT16_MAX;
	static volatile int16_t x66 = INT16_MIN;
	static int32_t x67 = -3;
	volatile int8_t x68 = -1;
	static volatile int32_t t8 = -607;

	t8 = (x65<<(x66<=(x67/x68)));

	if (t8 != 131070) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x69 = 2;
	uint64_t x70 = 15970503LLU;
	uint64_t x71 = 125052206913LLU;
	volatile int32_t t9 = -9978;

	t9 = (x69<<(x70<=(x71/x72)));

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x73 = INT64_MAX;
	int16_t x74 = INT16_MIN;
	static volatile uint16_t x75 = UINT16_MAX;
	static uint64_t x76 = 11153380761LLU;
	int64_t t10 = INT64_MAX;

	t10 = (x73<<(x74<=(x75/x76)));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x77 = 27709U;
	int16_t x78 = INT16_MIN;
	int16_t x79 = 11078;
	int32_t t11 = -46;

	t11 = (x77<<(x78<=(x79/x80)));

	if (t11 != 55418) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x82 = 15U;
	int32_t x83 = -1;
	uint64_t x84 = UINT64_MAX;
	int32_t t12 = INT32_MAX;

	t12 = (x81<<(x82<=(x83/x84)));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x85 = 40656225U;
	volatile uint16_t x86 = 13641U;
	static volatile int16_t x87 = 391;
	int32_t x88 = -97160;
	volatile uint32_t t13 = 1132419U;

	t13 = (x85<<(x86<=(x87/x88)));

	if (t13 != 40656225U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x93 = UINT8_MAX;
	static int16_t x96 = INT16_MIN;
	volatile int32_t t14 = 24170;

	t14 = (x93<<(x94<=(x95/x96)));

	if (t14 != 510) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x109 = 910791U;
	uint64_t x110 = 16111268865LLU;
	int64_t x111 = -18LL;
	uint64_t x112 = 180317119090946479LLU;

	t15 = (x109<<(x110<=(x111/x112)));

	if (t15 != 910791U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x113 = 21U;
	int32_t x114 = -1;
	int64_t x115 = INT64_MIN;
	volatile uint8_t x116 = 2U;
	int32_t t16 = 370621;

	t16 = (x113<<(x114<=(x115/x116)));

	if (t16 != 21) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x117 = 2U;
	uint8_t x118 = UINT8_MAX;
	volatile int16_t x119 = -1;
	int32_t x120 = INT32_MIN;

	t17 = (x117<<(x118<=(x119/x120)));

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x133 = INT64_MAX;
	uint32_t x134 = 1U;
	int16_t x135 = 27;
	uint32_t x136 = 6987U;
	static volatile int64_t t18 = INT64_MAX;

	t18 = (x133<<(x134<=(x135/x136)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x145 = 12622;
	int32_t t19 = 156334;

	t19 = (x145<<(x146<=(x147/x148)));

	if (t19 != 12622) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x155 = 2U;
	uint16_t x156 = 2690U;
	static volatile int64_t t20 = -2041961297078770129LL;

	t20 = (x153<<(x154<=(x155/x156)));

	if (t20 != 78LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x161 = 597LLU;
	static int8_t x162 = INT8_MAX;
	int8_t x163 = INT8_MAX;
	uint16_t x164 = 4U;
	uint64_t t21 = 2350548226127325LLU;

	t21 = (x161<<(x162<=(x163/x164)));

	if (t21 != 597LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x175 = 1814471292243LLU;
	uint8_t x176 = 1U;
	int32_t t22 = -2318;

	t22 = (x173<<(x174<=(x175/x176)));

	if (t22 != 34) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x177 = 31213U;
	volatile int64_t x178 = -1LL;
	uint8_t x179 = 6U;
	volatile int8_t x180 = INT8_MIN;
	static int32_t t23 = 15616525;

	t23 = (x177<<(x178<=(x179/x180)));

	if (t23 != 62426) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x189 = UINT8_MAX;
	volatile uint64_t x190 = 25LLU;
	int8_t x191 = INT8_MIN;
	int8_t x192 = INT8_MAX;
	volatile int32_t t24 = -7;

	t24 = (x189<<(x190<=(x191/x192)));

	if (t24 != 510) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x194 = -1LL;
	uint8_t x195 = 74U;
	int64_t x196 = INT64_MAX;
	int32_t t25 = -5241744;

	t25 = (x193<<(x194<=(x195/x196)));

	if (t25 != 10) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x205 = 110U;
	uint32_t x206 = 172673954U;
	int64_t x207 = 2LL;
	static int32_t x208 = INT32_MIN;
	volatile int32_t t26 = -246043;

	t26 = (x205<<(x206<=(x207/x208)));

	if (t26 != 110) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x209 = 10U;
	volatile int64_t x210 = -1LL;
	int64_t x211 = -2585211LL;
	static int64_t x212 = -66LL;
	uint32_t t27 = 80U;

	t27 = (x209<<(x210<=(x211/x212)));

	if (t27 != 20U) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x217 = INT8_MAX;
	int64_t x218 = INT64_MIN;
	uint64_t x220 = UINT64_MAX;
	static volatile int32_t t28 = 14202032;

	t28 = (x217<<(x218<=(x219/x220)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x233 = 1U;
	uint32_t x234 = UINT32_MAX;
	int16_t x235 = -2826;
	uint64_t x236 = UINT64_MAX;

	t29 = (x233<<(x234<=(x235/x236)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x237 = 3U;
	int32_t x238 = INT32_MAX;
	volatile int32_t t30 = 257746;

	t30 = (x237<<(x238<=(x239/x240)));

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x241 = UINT16_MAX;
	uint64_t x243 = UINT64_MAX;
	int16_t x244 = -119;
	int32_t t31 = -22292732;

	t31 = (x241<<(x242<=(x243/x244)));

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x245 = 6;
	static int8_t x247 = INT8_MAX;
	int16_t x248 = 153;
	int32_t t32 = -15666;

	t32 = (x245<<(x246<=(x247/x248)));

	if (t32 != 6) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x261 = 952788LLU;
	int32_t x264 = INT32_MIN;
	uint64_t t33 = 2634LLU;

	t33 = (x261<<(x262<=(x263/x264)));

	if (t33 != 1905576LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x267 = 71U;
	volatile uint64_t x268 = 1747850759543LLU;
	volatile int64_t t34 = INT64_MAX;

	t34 = (x265<<(x266<=(x267/x268)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x269 = INT32_MAX;
	volatile int8_t x271 = 1;
	uint32_t x272 = UINT32_MAX;
	int32_t t35 = INT32_MAX;

	t35 = (x269<<(x270<=(x271/x272)));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x273 = 1;
	int64_t x274 = -125079462LL;
	uint64_t x275 = UINT64_MAX;
	int32_t t36 = 5710;

	t36 = (x273<<(x274<=(x275/x276)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x285 = UINT32_MAX;
	int8_t x286 = 13;
	int64_t x287 = 132038666LL;
	static int32_t x288 = INT32_MIN;
	volatile uint32_t t37 = UINT32_MAX;

	t37 = (x285<<(x286<=(x287/x288)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x289 = 980;
	volatile uint64_t x290 = 516744291921748LLU;
	int16_t x292 = 664;
	volatile int32_t t38 = -87;

	t38 = (x289<<(x290<=(x291/x292)));

	if (t38 != 980) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x293 = 1;
	uint8_t x294 = 1U;
	int64_t x295 = 103336647718463LL;
	uint8_t x296 = 34U;
	volatile int32_t t39 = -623104;

	t39 = (x293<<(x294<=(x295/x296)));

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x302 = 5664748U;
	uint32_t x303 = UINT32_MAX;
	volatile int32_t t40 = -199825;

	t40 = (x301<<(x302<=(x303/x304)));

	if (t40 != 3) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x305 = 7U;
	int32_t x306 = INT32_MIN;
	uint8_t x307 = 3U;
	static uint32_t x308 = 629U;
	static int32_t t41 = 657;

	t41 = (x305<<(x306<=(x307/x308)));

	if (t41 != 7) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x317 = 285149LLU;
	uint32_t x318 = 1U;
	int16_t x319 = INT16_MIN;
	uint64_t x320 = UINT64_MAX;

	t42 = (x317<<(x318<=(x319/x320)));

	if (t42 != 285149LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x325 = INT16_MAX;
	static int64_t x326 = INT64_MAX;
	int32_t x328 = INT32_MAX;
	volatile int32_t t43 = 7777;

	t43 = (x325<<(x326<=(x327/x328)));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x333 = 22;
	int8_t x334 = -1;
	volatile uint32_t x335 = 8013U;
	volatile int32_t t44 = 42784;

	t44 = (x333<<(x334<=(x335/x336)));

	if (t44 != 22) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x349 = 2;
	volatile uint8_t x350 = 1U;
	int32_t x351 = -1;
	uint32_t x352 = 334582U;
	static volatile int32_t t45 = 1;

	t45 = (x349<<(x350<=(x351/x352)));

	if (t45 != 4) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x353 = 0U;
	uint32_t x354 = 0U;
	volatile int8_t x356 = INT8_MAX;

	t46 = (x353<<(x354<=(x355/x356)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x357 = 1;
	uint64_t x358 = 56940691LLU;
	uint32_t x359 = 1260344U;
	int32_t x360 = 8179491;
	volatile int32_t t47 = -1581;

	t47 = (x357<<(x358<=(x359/x360)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x377 = 3U;
	int16_t x378 = -1;
	int64_t x379 = INT64_MIN;
	int32_t t48 = -174;

	t48 = (x377<<(x378<=(x379/x380)));

	if (t48 != 6) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x381 = 522644956075LLU;
	static int32_t x382 = INT32_MAX;
	uint64_t x384 = UINT64_MAX;
	uint64_t t49 = 5342688331017700156LLU;

	t49 = (x381<<(x382<=(x383/x384)));

	if (t49 != 522644956075LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x385 = 9861240993829LLU;
	int64_t x386 = INT64_MIN;
	int16_t x388 = INT16_MIN;

	t50 = (x385<<(x386<=(x387/x388)));

	if (t50 != 19722481987658LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x389 = 1298U;
	static int16_t x390 = INT16_MIN;
	int8_t x392 = -1;
	volatile int32_t t51 = 358235;

	t51 = (x389<<(x390<=(x391/x392)));

	if (t51 != 2596) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x397 = 1;
	static int64_t x398 = 633556048LL;
	uint32_t x399 = 39U;
	int32_t x400 = INT32_MIN;
	volatile int32_t t52 = 998850416;

	t52 = (x397<<(x398<=(x399/x400)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x401 = UINT8_MAX;
	int16_t x404 = INT16_MIN;
	volatile int32_t t53 = 4029131;

	t53 = (x401<<(x402<=(x403/x404)));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x409 = 1U;
	static int64_t x410 = 7574072360541LL;
	int8_t x411 = -1;
	volatile int32_t t54 = 778665;

	t54 = (x409<<(x410<=(x411/x412)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x414 = 708U;
	int32_t t55 = -340751158;

	t55 = (x413<<(x414<=(x415/x416)));

	if (t55 != 50) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x417 = UINT8_MAX;
	static uint16_t x418 = 15U;
	int32_t x419 = INT32_MIN;
	uint32_t x420 = 39U;

	t56 = (x417<<(x418<=(x419/x420)));

	if (t56 != 510) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x426 = UINT32_MAX;

	t57 = (x425<<(x426<=(x427/x428)));

	if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x433 = 2162;
	uint64_t x435 = 110LLU;
	int32_t t58 = 3632634;

	t58 = (x433<<(x434<=(x435/x436)));

	if (t58 != 2162) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x438 = UINT8_MAX;
	volatile int32_t x439 = INT32_MIN;
	static uint16_t x440 = UINT16_MAX;
	int32_t t59 = 0;

	t59 = (x437<<(x438<=(x439/x440)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x441 = 2U;
	int16_t x442 = -239;
	int64_t x443 = INT64_MAX;
	static uint32_t x444 = 1939038348U;

	t60 = (x441<<(x442<=(x443/x444)));

	if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x449 = 114;
	int64_t x450 = -1862LL;
	int8_t x451 = INT8_MIN;
	static int64_t x452 = INT64_MIN;
	static int32_t t61 = 1285;

	t61 = (x449<<(x450<=(x451/x452)));

	if (t61 != 228) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x457 = 1837U;
	static int64_t x458 = 159874207348921948LL;
	int32_t x460 = INT32_MAX;
	int32_t t62 = -2285296;

	t62 = (x457<<(x458<=(x459/x460)));

	if (t62 != 1837) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x465 = 0LLU;
	volatile uint64_t x467 = UINT64_MAX;
	volatile int64_t x468 = INT64_MIN;

	t63 = (x465<<(x466<=(x467/x468)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x481 = 124U;
	static volatile int32_t x482 = 1;
	int64_t x484 = 965078575826870308LL;
	int32_t t64 = -1075395;

	t64 = (x481<<(x482<=(x483/x484)));

	if (t64 != 124) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x490 = 384727325606354151LLU;
	volatile int64_t x492 = -1LL;
	int32_t t65 = 2036866;

	t65 = (x489<<(x490<=(x491/x492)));

	if (t65 != 12) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x497 = 13637U;
	int64_t x498 = INT64_MIN;
	int8_t x499 = 4;
	static uint8_t x500 = 48U;
	int32_t t66 = 475;

	t66 = (x497<<(x498<=(x499/x500)));

	if (t66 != 27274) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x501 = 5025;
	volatile uint64_t x502 = 208469663616019LLU;
	int32_t x503 = INT32_MIN;
	int64_t x504 = INT64_MIN;
	volatile int32_t t67 = -403281957;

	t67 = (x501<<(x502<=(x503/x504)));

	if (t67 != 5025) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x506 = INT16_MAX;
	int16_t x507 = INT16_MAX;
	int32_t x508 = -22474;

	t68 = (x505<<(x506<=(x507/x508)));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x526 = 965;
	int16_t x527 = -371;
	int16_t x528 = INT16_MIN;
	int32_t t69 = -89084641;

	t69 = (x525<<(x526<=(x527/x528)));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x535 = 1;
	int32_t x536 = -1;

	t70 = (x533<<(x534<=(x535/x536)));

	if (t70 != 2066780) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x538 = INT64_MAX;
	int32_t t71 = -301680;

	t71 = (x537<<(x538<=(x539/x540)));

	if (t71 != 5) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x545 = 117U;
	uint32_t x546 = 42021042U;
	static int64_t x547 = INT64_MIN;
	static int16_t x548 = INT16_MIN;

	t72 = (x545<<(x546<=(x547/x548)));

	if (t72 != 234) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x561 = 3;
	static volatile int8_t x564 = -3;
	volatile int32_t t73 = -1;

	t73 = (x561<<(x562<=(x563/x564)));

	if (t73 != 6) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x573 = 192415803257LL;
	int16_t x574 = -1;
	uint64_t x575 = 25LLU;
	int16_t x576 = INT16_MIN;
	int64_t t74 = -179490LL;

	t74 = (x573<<(x574<=(x575/x576)));

	if (t74 != 192415803257LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x577 = INT16_MAX;
	int64_t x578 = INT64_MAX;
	uint32_t x579 = UINT32_MAX;
	int16_t x580 = INT16_MIN;

	t75 = (x577<<(x578<=(x579/x580)));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x581 = 20LL;
	int8_t x582 = -1;
	int8_t x583 = INT8_MIN;
	volatile int64_t t76 = 426LL;

	t76 = (x581<<(x582<=(x583/x584)));

	if (t76 != 40LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x589 = 16539415U;
	volatile int64_t x590 = 584515LL;
	int16_t x592 = 616;
	static volatile uint32_t t77 = 159986780U;

	t77 = (x589<<(x590<=(x591/x592)));

	if (t77 != 16539415U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x602 = -1;
	int64_t x603 = -2956652702189149761LL;
	volatile int32_t t78 = -111;

	t78 = (x601<<(x602<=(x603/x604)));

	if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x609 = 4182U;
	volatile int32_t x610 = -8997042;
	uint64_t x611 = UINT64_MAX;
	static int8_t x612 = 6;
	static uint32_t t79 = 399317U;

	t79 = (x609<<(x610<=(x611/x612)));

	if (t79 != 4182U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x623 = INT64_MIN;
	uint64_t x624 = UINT64_MAX;
	int32_t t80 = 926279705;

	t80 = (x621<<(x622<=(x623/x624)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x629 = 349LL;
	static uint32_t x630 = 2517U;
	int8_t x631 = 2;
	int8_t x632 = INT8_MIN;

	t81 = (x629<<(x630<=(x631/x632)));

	if (t81 != 349LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x637 = 28427U;
	int64_t x640 = -1LL;
	uint32_t t82 = 24283U;

	t82 = (x637<<(x638<=(x639/x640)));

	if (t82 != 28427U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x641 = UINT16_MAX;
	uint64_t x642 = 507369159516283583LLU;
	volatile int64_t x643 = -73951984357751LL;
	volatile int32_t t83 = 839452;

	t83 = (x641<<(x642<=(x643/x644)));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x646 = 13470;
	int32_t x647 = INT32_MIN;

	t84 = (x645<<(x646<=(x647/x648)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x649 = 1U;
	volatile int16_t x650 = INT16_MIN;
	volatile int32_t x651 = -1;
	static int8_t x652 = -1;
	static int32_t t85 = -107607;

	t85 = (x649<<(x650<=(x651/x652)));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x653 = 29U;
	uint8_t x654 = 118U;
	int8_t x656 = -1;
	int32_t t86 = -30946474;

	t86 = (x653<<(x654<=(x655/x656)));

	if (t86 != 58) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x658 = UINT16_MAX;
	uint64_t x659 = 6269129787LLU;
	volatile int32_t t87 = -2697;

	t87 = (x657<<(x658<=(x659/x660)));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x661 = 0;
	int64_t x662 = INT64_MIN;
	int64_t x664 = -1LL;
	volatile int32_t t88 = -211;

	t88 = (x661<<(x662<=(x663/x664)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x665 = 358;
	int64_t x666 = INT64_MIN;
	int32_t t89 = -10029204;

	t89 = (x665<<(x666<=(x667/x668)));

	if (t89 != 716) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x669 = 0LLU;
	int16_t x670 = -1;
	int32_t x671 = 4;
	int8_t x672 = INT8_MIN;

	t90 = (x669<<(x670<=(x671/x672)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x673 = 98898871881863553LLU;
	volatile int16_t x674 = INT16_MIN;
	int32_t x676 = INT32_MAX;
	uint64_t t91 = 14556129682607628LLU;

	t91 = (x673<<(x674<=(x675/x676)));

	if (t91 != 98898871881863553LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x685 = 31U;
	volatile int8_t x686 = -1;
	int64_t x687 = INT64_MAX;
	int32_t x688 = INT32_MAX;
	int32_t t92 = -63411;

	t92 = (x685<<(x686<=(x687/x688)));

	if (t92 != 62) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x693 = 479328U;
	int32_t x694 = INT32_MIN;
	int16_t x696 = INT16_MAX;
	static uint32_t t93 = 214U;

	t93 = (x693<<(x694<=(x695/x696)));

	if (t93 != 958656U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x697 = 40894U;
	uint32_t x698 = UINT32_MAX;
	int8_t x699 = INT8_MIN;
	int8_t x700 = -1;
	volatile uint32_t t94 = 7U;

	t94 = (x697<<(x698<=(x699/x700)));

	if (t94 != 40894U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x705 = INT16_MAX;
	int8_t x706 = INT8_MIN;
	int32_t x707 = INT32_MAX;
	uint8_t x708 = UINT8_MAX;
	volatile int32_t t95 = -22410;

	t95 = (x705<<(x706<=(x707/x708)));

	if (t95 != 65534) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x713 = 9U;
	int32_t x714 = -1;
	int32_t x715 = -42492;
	uint32_t x716 = UINT32_MAX;
	int32_t t96 = 57674713;

	t96 = (x713<<(x714<=(x715/x716)));

	if (t96 != 9) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x717 = 0U;
	int32_t x720 = -59669136;

	t97 = (x717<<(x718<=(x719/x720)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x721 = UINT64_MAX;
	int16_t x723 = 3718;
	volatile uint64_t t98 = 143129508287275LLU;

	t98 = (x721<<(x722<=(x723/x724)));

	if (t98 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x737 = 9;
	uint16_t x738 = 28U;
	int16_t x739 = INT16_MAX;
	uint32_t x740 = UINT32_MAX;
	int32_t t99 = 1;

	t99 = (x737<<(x738<=(x739/x740)));

	if (t99 != 9) { NG(); } else { ; }
	
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

