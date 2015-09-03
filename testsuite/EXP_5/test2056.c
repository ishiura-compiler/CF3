#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = INT8_MAX;
volatile int64_t t1 = 9899078LL;
int8_t x12 = -1;
volatile int16_t x13 = -2;
static int32_t t4 = -22464928;
uint8_t x30 = 69U;
uint64_t t6 = 1604LLU;
uint32_t x33 = 1U;
volatile uint64_t x38 = 7622119357LLU;
int8_t x50 = -29;
volatile uint64_t t10 = 533456462LLU;
volatile int64_t t17 = 226149LL;
static uint32_t x93 = UINT32_MAX;
uint32_t x107 = UINT32_MAX;
int16_t x112 = -1;
static volatile int8_t x115 = 1;
uint64_t t23 = 44LLU;
static int32_t x129 = INT32_MIN;
static volatile uint32_t x146 = 18059913U;
volatile uint32_t x168 = UINT32_MAX;
static uint64_t x180 = UINT64_MAX;
uint64_t x186 = 118534522LLU;
uint8_t x202 = UINT8_MAX;
static uint64_t x208 = 4431253289752668LLU;
int32_t x211 = INT32_MAX;
uint32_t x217 = 1321388U;
uint8_t x218 = 6U;
uint8_t x222 = 5U;
uint64_t x224 = 329414448825366LLU;
int8_t x254 = -1;
int32_t t42 = 63685271;
uint32_t x260 = 191406U;
int8_t x261 = INT8_MIN;
int8_t x263 = INT8_MIN;
int32_t x264 = -1;
static int16_t x268 = INT16_MIN;
volatile int16_t x270 = INT16_MIN;
static int16_t x272 = -1;
volatile int64_t x275 = 5434988397LL;
int64_t x278 = INT64_MIN;
volatile uint16_t x280 = 0U;
int32_t x301 = -1;
uint32_t x308 = 194221U;
int8_t x320 = INT8_MAX;
static volatile int64_t t57 = -22223213785LL;
int8_t x324 = -1;
uint64_t x330 = 153701061LLU;
uint16_t x331 = UINT16_MAX;
int64_t x342 = -29843326914269LL;
volatile int64_t t61 = -1946LL;
static int64_t x367 = -1LL;
int16_t x369 = INT16_MIN;
uint16_t x374 = 38U;
int64_t x375 = 10045872755050583LL;
uint32_t x379 = 9U;
int16_t x380 = -15;
volatile uint64_t t69 = 1200154080942LLU;
uint8_t x385 = 2U;
volatile int64_t t70 = -308493LL;
static volatile uint64_t x400 = 12LLU;
volatile int32_t t72 = 27721494;
static uint64_t x406 = 7069086765673554LLU;
uint32_t x407 = UINT32_MAX;
int32_t x410 = -4;
int32_t x415 = INT32_MIN;
int16_t x416 = INT16_MIN;
volatile uint16_t x427 = 0U;
int8_t x433 = 1;
int8_t x434 = INT8_MAX;
volatile int32_t t79 = -10;
int16_t x451 = -1;
static volatile uint32_t x455 = UINT32_MAX;
int16_t x463 = INT16_MIN;
volatile uint8_t x466 = 31U;
int64_t x469 = INT64_MAX;
uint64_t x470 = 131194715028621059LLU;
volatile int8_t x472 = INT8_MIN;
static uint64_t t86 = 61LLU;
uint8_t x494 = 0U;
uint16_t x496 = 28U;
int16_t x501 = 1012;
int64_t t91 = -8815595031LL;
int32_t x512 = INT32_MIN;
volatile uint32_t t92 = 62344161U;
volatile int16_t x513 = INT16_MIN;
int64_t x516 = 10422319049699197LL;
uint64_t x518 = UINT64_MAX;
int16_t x519 = -1;
volatile int16_t x527 = -1;
static int16_t x529 = -1;
volatile uint16_t x532 = 4945U;
int64_t t96 = -2955097LL;
static uint8_t x535 = UINT8_MAX;
int64_t t97 = 423869LL;
static int16_t x538 = INT16_MIN;
int64_t x544 = 3848726LL;


void f0(void) {
	volatile int64_t x1 = -1LL;
	volatile int32_t x2 = -1;
	static int64_t x3 = -3744LL;
	uint16_t x4 = 44U;
	int64_t t0 = -4LL;

	t0 = (x1-((x2^x3)*x4));

	if (t0 != -164693LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 6;
	int16_t x6 = -1;
	volatile int64_t x8 = 2414404181984LL;

	t1 = (x5-((x6^x7)*x8));

	if (t1 != 309043735293958LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 0;
	static volatile int32_t x10 = -1;
	volatile int8_t x11 = INT8_MIN;
	int32_t t2 = -15;

	t2 = (x9-((x10^x11)*x12));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x14 = -1LL;
	static uint64_t x15 = UINT64_MAX;
	volatile int64_t x16 = -1LL;
	uint64_t t3 = 4437322995037820786LLU;

	t3 = (x13-((x14^x15)*x16));

	if (t3 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	volatile uint16_t x18 = UINT16_MAX;
	int8_t x19 = -1;
	int8_t x20 = -1;

	t4 = (x17-((x18^x19)*x20));

	if (t4 != -65281) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int8_t x22 = -27;
	uint32_t x23 = UINT32_MAX;
	uint64_t x24 = 10010035LLU;
	uint64_t t5 = 201991267810135697LLU;

	t5 = (x21-((x22^x23)*x24));

	if (t5 != 18446744073449290961LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	static uint64_t x31 = UINT64_MAX;
	int64_t x32 = -1LL;

	t6 = (x29-((x30^x31)*x32));

	if (t6 != 18446744073709551545LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x34 = 14624U;
	int8_t x35 = -1;
	volatile uint64_t x36 = 1482613247193307353LLU;
	volatile uint64_t t7 = 79573LLU;

	t7 = (x33-((x34^x35)*x36));

	if (t7 != 8294453593396888826LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x37 = -10;
	static int32_t x39 = INT32_MIN;
	volatile uint32_t x40 = 124U;
	uint64_t t8 = 389351408939603LLU;

	t8 = (x37-((x38^x39)*x40));

	if (t8 != 918873006186LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = 18228U;
	int8_t x51 = INT8_MIN;
	volatile int8_t x52 = 1;
	uint32_t t9 = 2305U;

	t9 = (x49-((x50^x51)*x52));

	if (t9 != 18129U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x57 = INT16_MIN;
	uint8_t x58 = 1U;
	uint64_t x59 = 7762131969949LLU;
	uint8_t x60 = 22U;

	t10 = (x57-((x58^x59)*x60));

	if (t10 != 18446573306806179992LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x61 = UINT16_MAX;
	int32_t x62 = INT32_MIN;
	uint32_t x63 = UINT32_MAX;
	uint64_t x64 = UINT64_MAX;
	static volatile uint64_t t11 = 0LLU;

	t11 = (x61-((x62^x63)*x64));

	if (t11 != 2147549182LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = -1;
	volatile int32_t x70 = 346931;
	uint8_t x71 = UINT8_MAX;
	int32_t x72 = 4009;
	int32_t t12 = -88237;

	t12 = (x69-((x70^x71)*x72));

	if (t12 != -1391459757) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x73 = INT16_MIN;
	uint64_t x74 = UINT64_MAX;
	int64_t x75 = INT64_MAX;
	uint32_t x76 = UINT32_MAX;
	volatile uint64_t t13 = 2LLU;

	t13 = (x73-((x74^x75)*x76));

	if (t13 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x77 = 0LLU;
	int8_t x78 = INT8_MIN;
	static int16_t x79 = -1;
	volatile uint32_t x80 = 1556934107U;
	uint64_t t14 = 1614724588719361LLU;

	t14 = (x77-((x78^x79)*x80));

	if (t14 != 18446744073547415643LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = INT32_MIN;
	int8_t x82 = -4;
	static int64_t x83 = -1LL;
	volatile uint16_t x84 = UINT16_MAX;
	volatile int64_t t15 = 32LL;

	t15 = (x81-((x82^x83)*x84));

	if (t15 != -2147680253LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x85 = 177;
	uint8_t x86 = 4U;
	int64_t x87 = -1LL;
	volatile int8_t x88 = -6;
	int64_t t16 = -194471824449147LL;

	t16 = (x85-((x86^x87)*x88));

	if (t16 != 147LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x89 = 185910LL;
	int16_t x90 = INT16_MIN;
	int16_t x91 = -1;
	int32_t x92 = -1;

	t17 = (x89-((x90^x91)*x92));

	if (t17 != 218677LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x94 = INT8_MAX;
	int16_t x95 = -6;
	int8_t x96 = -1;
	static volatile uint32_t t18 = 0U;

	t18 = (x93-((x94^x95)*x96));

	if (t18 != 4294967172U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x101 = -654845;
	int16_t x102 = INT16_MIN;
	static uint32_t x103 = 125754U;
	static volatile uint8_t x104 = UINT8_MAX;
	volatile uint32_t t19 = 1191U;

	t19 = (x101-((x102^x103)*x104));

	if (t19 != 25768765U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x105 = INT8_MAX;
	int32_t x106 = -1;
	int16_t x108 = INT16_MIN;
	volatile uint32_t t20 = 674628U;

	t20 = (x105-((x106^x107)*x108));

	if (t20 != 127U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x109 = 49926824951982LLU;
	int32_t x110 = INT32_MAX;
	int64_t x111 = -53989601703263LL;
	uint64_t t21 = 6269936948523LLU;

	t21 = (x109-((x110^x111)*x112));

	if (t21 != 18446740012510901772LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x113 = 581495032U;
	static int16_t x114 = -1;
	int32_t x116 = -1;
	static volatile uint32_t t22 = 7226129U;

	t22 = (x113-((x114^x115)*x116));

	if (t22 != 581495030U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x117 = UINT16_MAX;
	volatile int64_t x118 = -1159834715355887LL;
	static volatile uint64_t x119 = 508642888LLU;
	int32_t x120 = INT32_MAX;

	t23 = (x117-((x118^x119)*x120));

	if (t23 != 9740933559482008408LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x130 = 36U;
	int32_t x131 = -1;
	uint32_t x132 = 1444U;
	static volatile uint32_t t24 = 1U;

	t24 = (x129-((x130^x131)*x132));

	if (t24 != 2147537076U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x141 = INT16_MAX;
	volatile int8_t x142 = INT8_MIN;
	static int32_t x143 = INT32_MAX;
	uint32_t x144 = 130U;
	uint32_t t25 = 71U;

	t25 = (x141-((x142^x143)*x144));

	if (t25 != 16257U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x145 = 17477663906635641LLU;
	uint64_t x147 = 0LLU;
	volatile int16_t x148 = INT16_MIN;
	uint64_t t26 = 337652524LLU;

	t26 = (x145-((x146^x147)*x148));

	if (t26 != 17478255693864825LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x157 = 1;
	volatile int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MIN;
	int16_t x160 = INT16_MIN;
	volatile int32_t t27 = 0;

	t27 = (x157-((x158^x159)*x160));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x165 = INT16_MIN;
	static int16_t x166 = INT16_MAX;
	uint64_t x167 = 126643283LLU;
	static uint64_t t28 = 8880759406923810LLU;

	t28 = (x165-((x166^x167)*x168));

	if (t28 != 17902912789375849388LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x173 = INT64_MAX;
	static uint64_t x174 = 904LLU;
	int16_t x175 = -1;
	int32_t x176 = -8172;
	static uint64_t t29 = 3027080792941573339LLU;

	t29 = (x173-((x174^x175)*x176));

	if (t29 != 9223372036847380147LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x177 = 123U;
	uint16_t x178 = UINT16_MAX;
	volatile int8_t x179 = 30;
	static uint64_t t30 = 20LLU;

	t30 = (x177-((x178^x179)*x180));

	if (t30 != 65628LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x185 = INT16_MIN;
	int64_t x187 = INT64_MIN;
	int8_t x188 = INT8_MIN;
	uint64_t t31 = 5565596244LLU;

	t31 = (x185-((x186^x187)*x188));

	if (t31 != 15172386048LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x193 = 115296U;
	static uint16_t x194 = 1U;
	static uint64_t x195 = 1865LLU;
	static volatile uint64_t x196 = 924LLU;
	volatile uint64_t t32 = 22657LLU;

	t32 = (x193-((x194^x195)*x196));

	if (t32 != 18446744073707944576LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x201 = 40U;
	int8_t x203 = INT8_MIN;
	int16_t x204 = 5635;
	uint32_t t33 = 815824088U;

	t33 = (x201-((x202^x203)*x204));

	if (t33 != 726955U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x205 = -1;
	uint32_t x206 = 49908U;
	int32_t x207 = INT32_MAX;
	volatile uint64_t t34 = 4214992117LLU;

	t34 = (x205-((x206^x207)*x208));

	if (t34 != 3896929744810854411LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x209 = 5U;
	int64_t x210 = INT64_MAX;
	int64_t x212 = -1LL;
	volatile int64_t t35 = -668LL;

	t35 = (x209-((x210^x211)*x212));

	if (t35 != 9223372034707292165LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x219 = -278907881;
	uint32_t x220 = 56745U;
	uint32_t t36 = 957943U;

	t36 = (x217-((x218^x219)*x220));

	if (t36 != 3969850739U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x221 = INT32_MIN;
	static int8_t x223 = 1;
	volatile uint64_t t37 = 28249LLU;

	t37 = (x221-((x222^x223)*x224));

	if (t37 != 18445426413766766504LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x225 = UINT16_MAX;
	volatile int32_t x226 = INT32_MIN;
	static volatile int64_t x227 = INT64_MAX;
	int32_t x228 = -1;
	volatile int64_t t38 = 1103967561274023LL;

	t38 = (x225-((x226^x227)*x228));

	if (t38 != -9223372034707226626LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x233 = -888;
	static int32_t x234 = INT32_MAX;
	uint64_t x235 = 4761778698319238LLU;
	int32_t x236 = INT32_MIN;
	uint64_t t39 = 2LLU;

	t39 = (x233-((x234^x235)*x236));

	if (t39 != 13841819212126878856LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x237 = -1LL;
	int16_t x238 = -1;
	int8_t x239 = INT8_MIN;
	int16_t x240 = INT16_MIN;
	volatile int64_t t40 = -4753LL;

	t40 = (x237-((x238^x239)*x240));

	if (t40 != 4161535LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x249 = -3;
	uint8_t x250 = 30U;
	volatile int32_t x251 = INT32_MIN;
	uint64_t x252 = 35036935439332949LLU;
	volatile uint64_t t41 = 1125765181386307LLU;

	t41 = (x249-((x250^x251)*x252));

	if (t41 != 1070257968149930503LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x253 = -4;
	volatile int32_t x255 = 11164570;
	int16_t x256 = -1;

	t42 = (x253-((x254^x255)*x256));

	if (t42 != -11164575) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x257 = 6361134;
	uint8_t x258 = 55U;
	static int64_t x259 = -1LL;
	int64_t t43 = 10LL;

	t43 = (x257-((x258^x259)*x260));

	if (t43 != 17079870LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x262 = 1U;
	int32_t t44 = 15520632;

	t44 = (x261-((x262^x263)*x264));

	if (t44 != -255) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x265 = INT64_MIN;
	volatile uint64_t x266 = 507675651LLU;
	uint8_t x267 = 2U;
	uint64_t t45 = 10LLU;

	t45 = (x265-((x266^x267)*x268));

	if (t45 != 9223388672370442240LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x269 = -1;
	uint16_t x271 = UINT16_MAX;
	int32_t t46 = -1;

	t46 = (x269-((x270^x271)*x272));

	if (t46 != -32770) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x273 = 9746U;
	uint16_t x274 = 34U;
	int16_t x276 = INT16_MIN;
	volatile int64_t t47 = -116000LL;

	t47 = (x273-((x274^x275)*x276));

	if (t47 != 178093698819602LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x277 = INT8_MIN;
	int64_t x279 = -37950101959933LL;
	int64_t t48 = 0LL;

	t48 = (x277-((x278^x279)*x280));

	if (t48 != -128LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x281 = 65320U;
	int8_t x282 = INT8_MIN;
	static int8_t x283 = -1;
	int64_t x284 = 4429055610012240LL;
	static int64_t t49 = 8905461611478LL;

	t49 = (x281-((x282^x283)*x284));

	if (t49 != -562490062471489160LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x285 = -1;
	uint8_t x286 = UINT8_MAX;
	uint16_t x287 = 642U;
	volatile int16_t x288 = INT16_MIN;
	int32_t t50 = 496537883;

	t50 = (x285-((x286^x287)*x288));

	if (t50 != 20873215) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x289 = UINT64_MAX;
	volatile uint64_t x290 = UINT64_MAX;
	int32_t x291 = INT32_MIN;
	int32_t x292 = INT32_MIN;
	volatile uint64_t t51 = 0LLU;

	t51 = (x289-((x290^x291)*x292));

	if (t51 != 4611686016279904255LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x293 = 33U;
	uint32_t x294 = 832U;
	int16_t x295 = -1;
	int8_t x296 = -1;
	uint32_t t52 = 4U;

	t52 = (x293-((x294^x295)*x296));

	if (t52 != 4294966496U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x297 = INT8_MIN;
	int8_t x298 = INT8_MIN;
	uint64_t x299 = UINT64_MAX;
	int32_t x300 = INT32_MIN;
	volatile uint64_t t53 = 473292117345049540LLU;

	t53 = (x297-((x298^x299)*x300));

	if (t53 != 272730423168LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x302 = 36U;
	uint16_t x303 = 13414U;
	volatile uint32_t x304 = UINT32_MAX;
	volatile uint32_t t54 = 62591346U;

	t54 = (x301-((x302^x303)*x304));

	if (t54 != 13377U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x305 = 329U;
	int8_t x306 = INT8_MIN;
	int16_t x307 = -7908;
	uint32_t t55 = 11031891U;

	t55 = (x305-((x306^x307)*x308));

	if (t55 != 2773051869U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = -1;
	int16_t x315 = -106;
	int16_t x316 = -105;
	volatile int64_t t56 = -1453764653714745200LL;

	t56 = (x313-((x314^x315)*x316));

	if (t56 != -9223372036854764783LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x317 = INT8_MIN;
	static volatile int64_t x318 = -59585804082884244LL;
	uint8_t x319 = UINT8_MAX;

	t57 = (x317-((x318^x319)*x320));

	if (t57 != 7567397118526293907LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x321 = INT32_MIN;
	int16_t x322 = INT16_MIN;
	static uint64_t x323 = 11688777LLU;
	uint64_t t58 = 144921535964LLU;

	t58 = (x321-((x322^x323)*x324));

	if (t58 != 18446744071550393161LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x325 = INT16_MIN;
	int64_t x326 = -69666948885LL;
	int16_t x327 = 1213;
	volatile int32_t x328 = -1;
	int64_t t59 = -442298790348LL;

	t59 = (x325-((x326^x327)*x328));

	if (t59 != -69666980778LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x329 = 505188856LL;
	int8_t x332 = INT8_MIN;
	volatile uint64_t t60 = 22782733582885093LLU;

	t60 = (x329-((x330^x331)*x332));

	if (t60 != 20182413048LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x341 = INT32_MAX;
	int8_t x343 = INT8_MIN;
	static int8_t x344 = INT8_MIN;

	t61 = (x341-((x342^x343)*x344));

	if (t61 != 3819947992502655LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x349 = INT16_MAX;
	static volatile int16_t x350 = INT16_MIN;
	uint16_t x351 = UINT16_MAX;
	static uint32_t x352 = 32274U;
	uint32_t t62 = 144007467U;

	t62 = (x349-((x350^x351)*x352));

	if (t62 != 1057619473U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x353 = 327896059;
	int64_t x354 = 818919811203LL;
	uint8_t x355 = UINT8_MAX;
	static uint16_t x356 = UINT16_MAX;
	volatile int64_t t63 = 54116541LL;

	t63 = (x353-((x354^x355)*x356));

	if (t63 != -53667909498833801LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x361 = 1;
	uint8_t x362 = 0U;
	static int32_t x363 = -17;
	int32_t x364 = -48;
	int32_t t64 = -234418949;

	t64 = (x361-((x362^x363)*x364));

	if (t64 != -815) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x365 = INT16_MAX;
	static volatile int16_t x366 = -1;
	int8_t x368 = INT8_MIN;
	volatile int64_t t65 = 2055078266298103601LL;

	t65 = (x365-((x366^x367)*x368));

	if (t65 != 32767LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x370 = INT64_MIN;
	int32_t x371 = INT32_MAX;
	int8_t x372 = -1;
	int64_t t66 = -1969020025788LL;

	t66 = (x369-((x370^x371)*x372));

	if (t66 != -9223372034707324929LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x373 = 18U;
	uint16_t x376 = 460U;
	volatile int64_t t67 = 7113959775479LL;

	t67 = (x373-((x374^x375)*x376));

	if (t67 != -4621101467323280122LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x377 = 1961100948019045541LL;
	uint8_t x378 = UINT8_MAX;
	volatile int64_t t68 = -2623281737758LL;

	t68 = (x377-((x378^x379)*x380));

	if (t68 != 1961100943724081935LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x381 = 252235232LLU;
	uint8_t x382 = 3U;
	int8_t x383 = 39;
	int8_t x384 = -11;

	t69 = (x381-((x382^x383)*x384));

	if (t69 != 252235628LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x386 = 57170128LL;
	volatile uint8_t x387 = 15U;
	uint8_t x388 = 2U;

	t70 = (x385-((x386^x387)*x388));

	if (t70 != -114340284LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x397 = 994U;
	int32_t x398 = -1;
	int8_t x399 = INT8_MAX;
	uint64_t t71 = 7477292979258LLU;

	t71 = (x397-((x398^x399)*x400));

	if (t71 != 2530LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x401 = INT16_MIN;
	int16_t x402 = -464;
	uint8_t x403 = 2U;
	int16_t x404 = INT16_MIN;

	t72 = (x401-((x402^x403)*x404));

	if (t72 != -15171584) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x405 = UINT16_MAX;
	int32_t x408 = INT32_MAX;
	volatile uint64_t t73 = 5791LLU;

	t73 = (x405-((x406^x407)*x408));

	if (t73 != 9430559019295249324LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x409 = UINT64_MAX;
	static uint64_t x411 = 481LLU;
	int16_t x412 = INT16_MIN;
	uint64_t t74 = 335021842212610629LLU;

	t74 = (x409-((x410^x411)*x412));

	if (t74 != 18446744073693724671LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x413 = INT64_MIN;
	static volatile int32_t x414 = INT32_MIN;
	int64_t t75 = INT64_MIN;

	t75 = (x413-((x414^x415)*x416));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x417 = INT64_MIN;
	static int32_t x418 = -12;
	volatile uint64_t x419 = 16358LLU;
	int8_t x420 = INT8_MAX;
	static volatile uint64_t t76 = 6362508479LLU;

	t76 = (x417-((x418^x419)*x420));

	if (t76 != 9223372036856854290LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x421 = 31030LLU;
	static int8_t x422 = -1;
	uint32_t x423 = 2546U;
	static int32_t x424 = 4021472;
	static volatile uint64_t t77 = 129376508241388LLU;

	t77 = (x421-((x422^x423)*x424));

	if (t77 != 18446744071067369942LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x425 = UINT8_MAX;
	int32_t x426 = -1;
	static int16_t x428 = INT16_MIN;
	int32_t t78 = -8607;

	t78 = (x425-((x426^x427)*x428));

	if (t78 != -32513) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x435 = INT8_MAX;
	int8_t x436 = -22;

	t79 = (x433-((x434^x435)*x436));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x437 = INT64_MIN;
	static uint64_t x438 = 463523918481971300LLU;
	int32_t x439 = INT32_MIN;
	int8_t x440 = INT8_MIN;
	uint64_t t80 = 36520LLU;

	t80 = (x437-((x438^x439)*x440));

	if (t80 != 5232542735305290240LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x441 = INT16_MAX;
	static int16_t x442 = 9339;
	uint32_t x443 = UINT32_MAX;
	static uint8_t x444 = UINT8_MAX;
	volatile uint32_t t81 = 38646U;

	t81 = (x441-((x442^x443)*x444));

	if (t81 != 2414467U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x449 = UINT32_MAX;
	int16_t x450 = -1;
	static uint32_t x452 = UINT32_MAX;
	static uint32_t t82 = UINT32_MAX;

	t82 = (x449-((x450^x451)*x452));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x453 = -1;
	uint8_t x454 = UINT8_MAX;
	int16_t x456 = 2297;
	volatile uint32_t t83 = 1325020U;

	t83 = (x453-((x454^x455)*x456));

	if (t83 != 588031U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x461 = -1;
	int16_t x462 = -735;
	static int32_t x464 = -7078;
	int32_t t84 = -207;

	t84 = (x461-((x462^x463)*x464));

	if (t84 != 226729573) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x465 = -181;
	volatile int8_t x467 = INT8_MAX;
	static int32_t x468 = 331662;
	static int32_t t85 = 3031411;

	t85 = (x465-((x466^x467)*x468));

	if (t85 != -31839733) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x471 = UINT16_MAX;

	t86 = (x469-((x470^x471)*x472));

	if (t86 != 7569551486808260095LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x473 = -1;
	uint64_t x474 = 8622298561225918930LLU;
	static int16_t x475 = 490;
	static volatile int8_t x476 = INT8_MIN;
	static volatile uint64_t t87 = 57464LLU;

	t87 = (x473-((x474^x475)*x476));

	if (t87 != 15296315488054025215LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x477 = 37433U;
	int32_t x478 = INT32_MIN;
	int64_t x479 = -1LL;
	int32_t x480 = -1;
	volatile int64_t t88 = 1009309250692122LL;

	t88 = (x477-((x478^x479)*x480));

	if (t88 != 2147521080LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x489 = INT8_MIN;
	uint8_t x490 = 2U;
	uint64_t x491 = 0LLU;
	static int32_t x492 = INT32_MIN;
	volatile uint64_t t89 = 62217528112647184LLU;

	t89 = (x489-((x490^x491)*x492));

	if (t89 != 4294967168LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x493 = UINT8_MAX;
	static uint8_t x495 = 5U;
	volatile int32_t t90 = -108;

	t90 = (x493-((x494^x495)*x496));

	if (t90 != 115) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x502 = -1;
	int64_t x503 = -1LL;
	uint32_t x504 = UINT32_MAX;

	t91 = (x501-((x502^x503)*x504));

	if (t91 != 1012LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x509 = INT16_MAX;
	int16_t x510 = INT16_MIN;
	uint32_t x511 = 12U;

	t92 = (x509-((x510^x511)*x512));

	if (t92 != 32767U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x514 = INT8_MAX;
	int16_t x515 = -1;
	volatile int64_t t93 = -3911694231032LL;

	t93 = (x513-((x514^x515)*x516));

	if (t93 != 1334056838361464448LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x517 = 0U;
	uint16_t x520 = 989U;
	volatile uint64_t t94 = 2648725490229151LLU;

	t94 = (x517-((x518^x519)*x520));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x525 = 11661U;
	int32_t x526 = -166;
	uint16_t x528 = 14U;
	int32_t t95 = -6434186;

	t95 = (x525-((x526^x527)*x528));

	if (t95 != 9351) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x530 = -2999975117LL;
	uint8_t x531 = UINT8_MAX;

	t96 = (x529-((x530^x531)*x532));

	if (t96 != 14834876196979LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x533 = UINT16_MAX;
	uint8_t x534 = 107U;
	static int64_t x536 = -24597842LL;

	t97 = (x533-((x534^x535)*x536));

	if (t97 != 3640546151LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x537 = 1;
	uint32_t x539 = 1986U;
	int64_t x540 = -6782459LL;
	volatile int64_t t98 = -1989649401254LL;

	t98 = (x537-((x538^x539)*x540));

	if (t98 != 29130230813807927LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x541 = INT16_MIN;
	uint64_t x542 = 207572065842667LLU;
	uint8_t x543 = 119U;
	uint64_t t99 = 989LLU;

	t99 = (x541-((x542^x543)*x544));

	if (t99 != 12768732561139895448LLU) { NG(); } else { ; }
	
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

