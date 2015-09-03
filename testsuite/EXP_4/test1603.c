#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x26 = UINT8_MAX;
int8_t x27 = -1;
volatile int32_t t2 = 5581;
int8_t x40 = INT8_MAX;
int32_t x50 = 5326;
int32_t x51 = -14786;
uint8_t x57 = 1U;
int16_t x61 = 100;
int64_t x73 = INT64_MIN;
uint64_t x75 = 10152561941144LLU;
int8_t x84 = INT8_MIN;
int32_t t12 = -258737164;
static int64_t x100 = INT64_MIN;
uint16_t x102 = 31029U;
uint8_t x108 = UINT8_MAX;
static int64_t x119 = -1117925LL;
int64_t t18 = 3603200339755206LL;
static int32_t t19 = 233538;
static int8_t x132 = INT8_MIN;
volatile int64_t x141 = 8033942083587192LL;
int32_t x143 = -16;
static int32_t x144 = INT32_MIN;
static int64_t x150 = INT64_MAX;
int64_t t24 = 22940983503081LL;
volatile int32_t x167 = INT32_MIN;
static volatile int32_t x172 = INT32_MAX;
int32_t x174 = 5;
int16_t x175 = 4722;
int8_t x195 = -2;
uint8_t x208 = UINT8_MAX;
static int64_t x211 = -20386078641LL;
uint64_t x242 = UINT64_MAX;
uint32_t x244 = 75629282U;
volatile uint64_t t34 = 48065351LLU;
int64_t x247 = INT64_MIN;
static uint8_t x253 = 2U;
int16_t x254 = INT16_MAX;
int32_t x256 = -1;
static int32_t t36 = 42091;
int8_t x257 = -49;
int32_t t38 = -36618;
int16_t x269 = 6;
int8_t x270 = 2;
static uint32_t x271 = 391972U;
int32_t x277 = INT32_MIN;
static int8_t x297 = -1;
static int16_t x300 = INT16_MIN;
int8_t x316 = INT8_MIN;
uint32_t t45 = 220923U;
int8_t x343 = 0;
static int64_t x366 = 93771652LL;
int16_t x367 = INT16_MIN;
static int8_t x401 = -1;
uint8_t x402 = 21U;
uint32_t x404 = UINT32_MAX;
static int32_t x413 = INT32_MAX;
int64_t t55 = -63061582208927221LL;
static uint32_t x424 = 58720U;
static volatile int64_t t57 = -5816LL;
int8_t x433 = INT8_MIN;
static uint16_t x434 = 2520U;
static uint16_t x436 = 2578U;
uint64_t t60 = 13835109070LLU;
int8_t x452 = -1;
uint8_t x454 = UINT8_MAX;
volatile int8_t x463 = 13;
int32_t x464 = 32752371;
static int32_t t63 = 13;
int64_t x470 = 480651034131LL;
static volatile int64_t x471 = INT64_MAX;
volatile int64_t t64 = 43231810181LL;
uint64_t x478 = 3150532124844LLU;
static volatile int8_t x480 = INT8_MIN;
static int64_t x483 = 799576215110LL;
volatile int16_t x484 = INT16_MIN;
static int8_t x493 = INT8_MIN;
uint64_t t67 = 41633763706LLU;
int32_t x500 = 0;
volatile int32_t t69 = 259920507;
int32_t t70 = -1;
int16_t x535 = 0;
static int8_t x540 = -1;
uint16_t x555 = 21U;
uint32_t x556 = 4U;
uint8_t x558 = 2U;
int8_t x560 = INT8_MIN;
volatile int32_t t75 = -13405177;
static volatile uint16_t x570 = 183U;
volatile int32_t x571 = 59;
static int32_t t80 = -744613092;
int8_t x597 = 0;
int8_t x611 = INT8_MIN;
uint32_t t83 = 1U;
static uint64_t x616 = 8537375338LLU;
static volatile int32_t t84 = 7307572;
uint64_t x620 = UINT64_MAX;
volatile int64_t t85 = 846552048LL;
uint32_t x621 = UINT32_MAX;
static uint32_t t86 = 27005U;
int8_t x628 = INT8_MAX;
uint64_t x630 = 15416782LLU;
int8_t x649 = -26;
int16_t x652 = -1;
int16_t x673 = INT16_MIN;
volatile uint32_t x676 = UINT32_MAX;
int32_t t92 = 410634;
static int8_t x680 = 1;
volatile int32_t x681 = -1;
volatile int64_t x693 = INT64_MAX;
static uint8_t x694 = 3U;
volatile int64_t x695 = INT64_MAX;
static volatile int64_t t95 = 35972408056583LL;
volatile uint16_t x710 = 133U;


void f0(void) {
	int8_t x21 = -1;
	volatile uint32_t x22 = 1130789U;
	int8_t x23 = 2;
	int8_t x24 = INT8_MIN;
	volatile uint32_t t0 = 6844U;

	t0 = (x21/(x22>>(x23<=x24)));

	if (t0 != 3798U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x25 = 22U;
	static int16_t x28 = 0;
	int32_t t1 = 1039893;

	t1 = (x25/(x26>>(x27<=x28)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x29 = -1;
	int32_t x30 = 21878;
	int64_t x31 = -4195499LL;
	int64_t x32 = -904775LL;

	t2 = (x29/(x30>>(x31<=x32)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x37 = INT16_MIN;
	volatile uint8_t x38 = UINT8_MAX;
	static int16_t x39 = 6721;
	static int32_t t3 = -3079;

	t3 = (x37/(x38>>(x39<=x40)));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x41 = 442U;
	uint32_t x42 = UINT32_MAX;
	static int16_t x43 = INT16_MIN;
	volatile int8_t x44 = -1;
	uint32_t t4 = 1043U;

	t4 = (x41/(x42>>(x43<=x44)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x49 = UINT16_MAX;
	volatile int8_t x52 = INT8_MIN;
	int32_t t5 = 114;

	t5 = (x49/(x50>>(x51<=x52)));

	if (t5 != 24) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x53 = INT64_MAX;
	uint32_t x54 = UINT32_MAX;
	int16_t x55 = INT16_MIN;
	static int8_t x56 = INT8_MIN;
	int64_t t6 = -1220LL;

	t6 = (x53/(x54>>(x55<=x56)));

	if (t6 != 4294967298LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x58 = UINT8_MAX;
	int8_t x59 = INT8_MAX;
	uint16_t x60 = 1U;
	static volatile int32_t t7 = 471120843;

	t7 = (x57/(x58>>(x59<=x60)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x62 = 1U;
	volatile uint8_t x63 = 19U;
	volatile uint16_t x64 = 9U;
	static int32_t t8 = -222498627;

	t8 = (x61/(x62>>(x63<=x64)));

	if (t8 != 100) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x65 = INT8_MAX;
	static uint64_t x66 = 2LLU;
	static volatile int32_t x67 = INT32_MIN;
	volatile int16_t x68 = 569;
	uint64_t t9 = 7874LLU;

	t9 = (x65/(x66>>(x67<=x68)));

	if (t9 != 127LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x69 = INT16_MIN;
	volatile int64_t x70 = INT64_MAX;
	static volatile int16_t x71 = INT16_MAX;
	static uint32_t x72 = 19514U;
	volatile int64_t t10 = -466795169659LL;

	t10 = (x69/(x70>>(x71<=x72)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x74 = 499577U;
	int32_t x76 = -16693359;
	int64_t t11 = -60456069888LL;

	t11 = (x73/(x74>>(x75<=x76)));

	if (t11 != -36924800378139LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x81 = INT32_MIN;
	int16_t x82 = 12;
	int16_t x83 = INT16_MIN;

	t12 = (x81/(x82>>(x83<=x84)));

	if (t12 != -357913941) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x97 = 0;
	int16_t x98 = INT16_MAX;
	uint32_t x99 = UINT32_MAX;
	int32_t t13 = 6772;

	t13 = (x97/(x98>>(x99<=x100)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x101 = -1;
	volatile int64_t x103 = -1LL;
	static uint32_t x104 = 74204U;
	static volatile int32_t t14 = 2;

	t14 = (x101/(x102>>(x103<=x104)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x105 = UINT16_MAX;
	volatile uint16_t x106 = UINT16_MAX;
	static volatile int8_t x107 = 3;
	int32_t t15 = -301;

	t15 = (x105/(x106>>(x107<=x108)));

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x109 = INT8_MIN;
	volatile uint8_t x110 = UINT8_MAX;
	uint32_t x111 = 30103U;
	uint8_t x112 = 3U;
	int32_t t16 = 0;

	t16 = (x109/(x110>>(x111<=x112)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x117 = 14;
	int32_t x118 = INT32_MAX;
	int8_t x120 = 4;
	volatile int32_t t17 = 3593;

	t17 = (x117/(x118>>(x119<=x120)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x121 = -1LL;
	uint16_t x122 = UINT16_MAX;
	static int64_t x123 = -36307218LL;
	volatile int64_t x124 = INT64_MIN;

	t18 = (x121/(x122>>(x123<=x124)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x125 = 12683;
	int8_t x126 = 20;
	int8_t x127 = INT8_MIN;
	uint16_t x128 = 546U;

	t19 = (x125/(x126>>(x127<=x128)));

	if (t19 != 1268) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x129 = 45;
	uint32_t x130 = 12880141U;
	volatile uint64_t x131 = UINT64_MAX;
	static volatile uint32_t t20 = 5545454U;

	t20 = (x129/(x130>>(x131<=x132)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x137 = INT16_MIN;
	uint32_t x138 = 92U;
	int64_t x139 = INT64_MIN;
	uint32_t x140 = UINT32_MAX;
	uint32_t t21 = 71U;

	t21 = (x137/(x138>>(x139<=x140)));

	if (t21 != 93368141U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x142 = 6U;
	int64_t t22 = -29064595LL;

	t22 = (x141/(x142>>(x143<=x144)));

	if (t22 != 1338990347264532LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x145 = -1;
	int64_t x146 = INT64_MAX;
	static uint32_t x147 = 2931U;
	int64_t x148 = INT64_MIN;
	int64_t t23 = 65326482LL;

	t23 = (x145/(x146>>(x147<=x148)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x149 = 0U;
	int64_t x151 = -17249337907121LL;
	volatile int8_t x152 = INT8_MIN;

	t24 = (x149/(x150>>(x151<=x152)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x165 = -24;
	uint8_t x166 = UINT8_MAX;
	static volatile int8_t x168 = -1;
	volatile int32_t t25 = 4;

	t25 = (x165/(x166>>(x167<=x168)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x169 = UINT32_MAX;
	uint64_t x170 = UINT64_MAX;
	uint8_t x171 = 0U;
	volatile uint64_t t26 = 8135615603LLU;

	t26 = (x169/(x170>>(x171<=x172)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x173 = 7745;
	volatile uint8_t x176 = UINT8_MAX;
	volatile int32_t t27 = -8;

	t27 = (x173/(x174>>(x175<=x176)));

	if (t27 != 1549) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x177 = 252U;
	static uint8_t x178 = UINT8_MAX;
	static int16_t x179 = -1;
	int8_t x180 = INT8_MIN;
	int32_t t28 = -8506845;

	t28 = (x177/(x178>>(x179<=x180)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x193 = 0;
	static volatile int8_t x194 = INT8_MAX;
	static int8_t x196 = INT8_MIN;
	volatile int32_t t29 = 15736;

	t29 = (x193/(x194>>(x195<=x196)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x201 = INT16_MIN;
	uint32_t x202 = 163U;
	static int16_t x203 = INT16_MIN;
	int16_t x204 = -15097;
	volatile uint32_t t30 = 23812301U;

	t30 = (x201/(x202>>(x203<=x204)));

	if (t30 != 53023883U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x205 = -1LL;
	volatile uint8_t x206 = 14U;
	volatile int64_t x207 = -1LL;
	int64_t t31 = 1LL;

	t31 = (x205/(x206>>(x207<=x208)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x209 = INT8_MAX;
	volatile uint16_t x210 = UINT16_MAX;
	int8_t x212 = INT8_MIN;
	static volatile int32_t t32 = 0;

	t32 = (x209/(x210>>(x211<=x212)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x217 = 10126U;
	volatile int32_t x218 = INT32_MAX;
	volatile int16_t x219 = -1;
	static int64_t x220 = -1LL;
	volatile uint32_t t33 = 117748165U;

	t33 = (x217/(x218>>(x219<=x220)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x241 = -1;
	volatile int16_t x243 = 3026;

	t34 = (x241/(x242>>(x243<=x244)));

	if (t34 != 2LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x245 = 7612321251443767LLU;
	uint64_t x246 = 241263862313LLU;
	volatile int16_t x248 = INT16_MIN;
	volatile uint64_t t35 = 5LLU;

	t35 = (x245/(x246>>(x247<=x248)));

	if (t35 != 63103LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x255 = 14;

	t36 = (x253/(x254>>(x255<=x256)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x258 = 3U;
	int16_t x259 = INT16_MIN;
	volatile int64_t x260 = INT64_MIN;
	int32_t t37 = -2414;

	t37 = (x257/(x258>>(x259<=x260)));

	if (t37 != -16) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x261 = INT32_MAX;
	uint8_t x262 = 7U;
	static int16_t x263 = INT16_MAX;
	int64_t x264 = 391970LL;

	t38 = (x261/(x262>>(x263<=x264)));

	if (t38 != 715827882) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x265 = INT64_MAX;
	uint64_t x266 = 368LLU;
	int64_t x267 = 221LL;
	int8_t x268 = -1;
	static volatile uint64_t t39 = 868844368552752LLU;

	t39 = (x265/(x266>>(x267<=x268)));

	if (t39 != 25063510969714064LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x272 = 16484458698LLU;
	int32_t t40 = 136182577;

	t40 = (x269/(x270>>(x271<=x272)));

	if (t40 != 6) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x278 = UINT16_MAX;
	static int64_t x279 = 33953629687471LL;
	int8_t x280 = -1;
	static volatile int32_t t41 = 0;

	t41 = (x277/(x278>>(x279<=x280)));

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x298 = UINT64_MAX;
	uint8_t x299 = 97U;
	uint64_t t42 = 237498814829457LLU;

	t42 = (x297/(x298>>(x299<=x300)));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x313 = 16U;
	uint16_t x314 = UINT16_MAX;
	int32_t x315 = INT32_MIN;
	volatile int32_t t43 = -317510997;

	t43 = (x313/(x314>>(x315<=x316)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x317 = INT64_MAX;
	uint8_t x318 = UINT8_MAX;
	static int16_t x319 = INT16_MIN;
	int64_t x320 = INT64_MAX;
	volatile int64_t t44 = 65LL;

	t44 = (x317/(x318>>(x319<=x320)));

	if (t44 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x325 = 83062U;
	uint32_t x326 = 9601793U;
	uint16_t x327 = 4U;
	int16_t x328 = INT16_MAX;

	t45 = (x325/(x326>>(x327<=x328)));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x329 = 16177LLU;
	int16_t x330 = INT16_MAX;
	volatile int16_t x331 = INT16_MIN;
	volatile uint16_t x332 = 8800U;
	volatile uint64_t t46 = 5728794227648403LLU;

	t46 = (x329/(x330>>(x331<=x332)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x333 = 871863;
	static int64_t x334 = INT64_MAX;
	int16_t x335 = 1;
	static int32_t x336 = INT32_MIN;
	int64_t t47 = 63LL;

	t47 = (x333/(x334>>(x335<=x336)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x341 = -98;
	uint16_t x342 = 1992U;
	static int8_t x344 = 0;
	static int32_t t48 = 245466874;

	t48 = (x341/(x342>>(x343<=x344)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x349 = UINT8_MAX;
	uint16_t x350 = 363U;
	int64_t x351 = -1131727557829882260LL;
	static uint64_t x352 = 2812LLU;
	static volatile int32_t t49 = -127516044;

	t49 = (x349/(x350>>(x351<=x352)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x365 = -97;
	static uint32_t x368 = 2U;
	volatile int64_t t50 = 5431667919LL;

	t50 = (x365/(x366>>(x367<=x368)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x389 = UINT64_MAX;
	int64_t x390 = 83689882LL;
	static int32_t x391 = INT32_MIN;
	uint32_t x392 = UINT32_MAX;
	uint64_t t51 = 2067526005LLU;

	t51 = (x389/(x390>>(x391<=x392)));

	if (t51 != 440835705174LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x403 = -1;
	volatile int32_t t52 = -15309;

	t52 = (x401/(x402>>(x403<=x404)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x405 = INT8_MIN;
	static uint32_t x406 = 114690872U;
	int64_t x407 = -410632061LL;
	int64_t x408 = INT64_MIN;
	volatile uint32_t t53 = 201335U;

	t53 = (x405/(x406>>(x407<=x408)));

	if (t53 != 37U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x409 = -2;
	int64_t x410 = INT64_MAX;
	int32_t x411 = INT32_MAX;
	int8_t x412 = INT8_MIN;
	volatile int64_t t54 = 31LL;

	t54 = (x409/(x410>>(x411<=x412)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x414 = 1669481661855261027LL;
	int8_t x415 = -1;
	static volatile int8_t x416 = INT8_MIN;

	t55 = (x413/(x414>>(x415<=x416)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x417 = -1;
	volatile uint32_t x418 = 1297279627U;
	volatile int8_t x419 = -1;
	int16_t x420 = INT16_MIN;
	uint32_t t56 = 13U;

	t56 = (x417/(x418>>(x419<=x420)));

	if (t56 != 3U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x421 = 0U;
	int64_t x422 = 53383LL;
	uint8_t x423 = 0U;

	t57 = (x421/(x422>>(x423<=x424)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x435 = INT16_MAX;
	static volatile int32_t t58 = -8;

	t58 = (x433/(x434>>(x435<=x436)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x437 = 0U;
	static uint8_t x438 = UINT8_MAX;
	int32_t x439 = 1;
	int64_t x440 = -1LL;
	static volatile int32_t t59 = 7;

	t59 = (x437/(x438>>(x439<=x440)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x445 = UINT64_MAX;
	uint32_t x446 = 5U;
	volatile int16_t x447 = 1808;
	static int16_t x448 = INT16_MIN;

	t60 = (x445/(x446>>(x447<=x448)));

	if (t60 != 3689348814741910323LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x449 = 1U;
	int64_t x450 = INT64_MAX;
	uint16_t x451 = 421U;
	volatile int64_t t61 = 6924365872480LL;

	t61 = (x449/(x450>>(x451<=x452)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x453 = 12796466543LLU;
	int8_t x455 = -3;
	int16_t x456 = INT16_MAX;
	volatile uint64_t t62 = 3340037115LLU;

	t62 = (x453/(x454>>(x455<=x456)));

	if (t62 != 100759579LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x461 = INT32_MIN;
	volatile int16_t x462 = INT16_MAX;

	t63 = (x461/(x462>>(x463<=x464)));

	if (t63 != -131080) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x469 = -1;
	uint16_t x472 = UINT16_MAX;

	t64 = (x469/(x470>>(x471<=x472)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x477 = INT32_MAX;
	int16_t x479 = -1293;
	uint64_t t65 = 8357048024LLU;

	t65 = (x477/(x478>>(x479<=x480)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x481 = -4LL;
	static uint32_t x482 = 6U;
	static int64_t t66 = 288115LL;

	t66 = (x481/(x482>>(x483<=x484)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x494 = 9769LLU;
	uint8_t x495 = 14U;
	int32_t x496 = INT32_MIN;

	t67 = (x493/(x494>>(x495<=x496)));

	if (t67 != 1888293998741892LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x497 = -1650;
	uint8_t x498 = 4U;
	int64_t x499 = -1LL;
	volatile int32_t t68 = 74;

	t68 = (x497/(x498>>(x499<=x500)));

	if (t68 != -825) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x517 = -117;
	int32_t x518 = 27562179;
	uint16_t x519 = 8199U;
	int64_t x520 = -3870502284LL;

	t69 = (x517/(x518>>(x519<=x520)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x529 = UINT16_MAX;
	uint8_t x530 = UINT8_MAX;
	uint32_t x531 = UINT32_MAX;
	volatile uint16_t x532 = 487U;

	t70 = (x529/(x530>>(x531<=x532)));

	if (t70 != 257) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x533 = INT32_MAX;
	static int8_t x534 = 2;
	int16_t x536 = INT16_MIN;
	int32_t t71 = 0;

	t71 = (x533/(x534>>(x535<=x536)));

	if (t71 != 1073741823) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x537 = UINT8_MAX;
	uint8_t x538 = UINT8_MAX;
	int8_t x539 = -1;
	volatile int32_t t72 = -15228;

	t72 = (x537/(x538>>(x539<=x540)));

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x541 = INT8_MAX;
	uint32_t x542 = 513916U;
	static int8_t x543 = INT8_MIN;
	static volatile int8_t x544 = INT8_MIN;
	volatile uint32_t t73 = 5090185U;

	t73 = (x541/(x542>>(x543<=x544)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x553 = INT16_MIN;
	uint16_t x554 = 17315U;
	volatile int32_t t74 = 21970;

	t74 = (x553/(x554>>(x555<=x556)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x557 = UINT8_MAX;
	static int16_t x559 = INT16_MAX;

	t75 = (x557/(x558>>(x559<=x560)));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x561 = UINT32_MAX;
	volatile int64_t x562 = 2LL;
	uint32_t x563 = UINT32_MAX;
	static int32_t x564 = 2;
	int64_t t76 = -6LL;

	t76 = (x561/(x562>>(x563<=x564)));

	if (t76 != 2147483647LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x569 = INT32_MAX;
	int8_t x572 = -1;
	volatile int32_t t77 = 1105;

	t77 = (x569/(x570>>(x571<=x572)));

	if (t77 != 11734883) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x573 = INT64_MAX;
	uint16_t x574 = 3298U;
	uint32_t x575 = 594U;
	uint32_t x576 = 60625168U;
	volatile int64_t t78 = 5589697400LL;

	t78 = (x573/(x574>>(x575<=x576)));

	if (t78 != 5593312332840979LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x581 = 9U;
	volatile int16_t x582 = INT16_MAX;
	uint64_t x583 = UINT64_MAX;
	volatile uint32_t x584 = 1380901U;
	int32_t t79 = 66216536;

	t79 = (x581/(x582>>(x583<=x584)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x593 = UINT8_MAX;
	int32_t x594 = 27881135;
	int8_t x595 = -3;
	int32_t x596 = INT32_MIN;

	t80 = (x593/(x594>>(x595<=x596)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x598 = 3896U;
	volatile int16_t x599 = INT16_MAX;
	volatile int8_t x600 = -1;
	static volatile int32_t t81 = 402485843;

	t81 = (x597/(x598>>(x599<=x600)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x605 = INT64_MAX;
	int32_t x606 = 1040;
	int8_t x607 = -1;
	int32_t x608 = -1;
	static int64_t t82 = 67549826606LL;

	t82 = (x605/(x606>>(x607<=x608)));

	if (t82 != 17737253917028415LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x609 = 6281;
	volatile uint32_t x610 = UINT32_MAX;
	static int16_t x612 = -642;

	t83 = (x609/(x610>>(x611<=x612)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x613 = INT8_MAX;
	uint16_t x614 = 12U;
	int16_t x615 = INT16_MAX;

	t84 = (x613/(x614>>(x615<=x616)));

	if (t84 != 21) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x617 = INT64_MAX;
	static uint32_t x618 = UINT32_MAX;
	int64_t x619 = INT64_MAX;

	t85 = (x617/(x618>>(x619<=x620)));

	if (t85 != 4294967298LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x622 = INT8_MAX;
	int8_t x623 = -1;
	static int8_t x624 = -1;

	t86 = (x621/(x622>>(x623<=x624)));

	if (t86 != 68174084U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x625 = UINT64_MAX;
	static uint64_t x626 = UINT64_MAX;
	int64_t x627 = 674061544LL;
	uint64_t t87 = 704304128LLU;

	t87 = (x625/(x626>>(x627<=x628)));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x629 = -1;
	uint64_t x631 = 9812LLU;
	static int32_t x632 = -1;
	volatile uint64_t t88 = 351LLU;

	t88 = (x629/(x630>>(x631<=x632)));

	if (t88 != 2393073220301LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x633 = -57358;
	uint64_t x634 = 42771140512587742LLU;
	int8_t x635 = -1;
	uint16_t x636 = 1093U;
	uint64_t t89 = 937482027197LLU;

	t89 = (x633/(x634>>(x635<=x636)));

	if (t89 != 862LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x650 = INT64_MAX;
	int64_t x651 = -3638560LL;
	volatile int64_t t90 = -67146662525LL;

	t90 = (x649/(x650>>(x651<=x652)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x661 = INT32_MAX;
	static uint32_t x662 = UINT32_MAX;
	int8_t x663 = INT8_MIN;
	volatile int64_t x664 = INT64_MIN;
	volatile uint32_t t91 = 1328U;

	t91 = (x661/(x662>>(x663<=x664)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x674 = INT16_MAX;
	uint32_t x675 = 978339U;

	t92 = (x673/(x674>>(x675<=x676)));

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x677 = INT8_MIN;
	volatile int8_t x678 = INT8_MAX;
	uint64_t x679 = 132025438727037LLU;
	static int32_t t93 = 1;

	t93 = (x677/(x678>>(x679<=x680)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x682 = 2;
	static int64_t x683 = INT64_MIN;
	uint64_t x684 = UINT64_MAX;
	volatile int32_t t94 = -164095;

	t94 = (x681/(x682>>(x683<=x684)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x696 = 5637;

	t95 = (x693/(x694>>(x695<=x696)));

	if (t95 != 3074457345618258602LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x701 = 396U;
	uint16_t x702 = 117U;
	uint64_t x703 = 58LLU;
	static uint16_t x704 = 5U;
	static uint32_t t96 = 2U;

	t96 = (x701/(x702>>(x703<=x704)));

	if (t96 != 3U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x709 = INT32_MAX;
	int64_t x711 = INT64_MIN;
	int16_t x712 = -1;
	volatile int32_t t97 = 748;

	t97 = (x709/(x710>>(x711<=x712)));

	if (t97 != 32537631) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x729 = -1LL;
	volatile int32_t x730 = INT32_MAX;
	int64_t x731 = INT64_MIN;
	uint32_t x732 = 0U;
	int64_t t98 = -166015LL;

	t98 = (x729/(x730>>(x731<=x732)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x733 = INT16_MAX;
	uint64_t x734 = 254LLU;
	static uint8_t x735 = 1U;
	static volatile int64_t x736 = INT64_MIN;
	uint64_t t99 = 3LLU;

	t99 = (x733/(x734>>(x735<=x736)));

	if (t99 != 129LLU) { NG(); } else { ; }
	
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

