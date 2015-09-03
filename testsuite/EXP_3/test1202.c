#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x3 = UINT16_MAX;
static uint32_t x4 = 165481280U;
uint16_t x9 = 471U;
uint32_t x21 = UINT32_MAX;
static volatile int64_t x23 = -1LL;
int32_t x30 = 1;
int16_t x32 = INT16_MIN;
static volatile uint32_t t5 = 34039570U;
uint16_t x35 = 26U;
static volatile uint32_t t6 = 1292118717U;
volatile uint8_t x53 = 73U;
int16_t x55 = 1;
volatile int16_t x60 = -9;
int32_t t13 = -583653017;
int16_t x94 = 88;
int64_t x96 = -1LL;
int32_t t15 = -25;
int32_t x109 = INT32_MAX;
volatile int8_t x118 = INT8_MIN;
int32_t x131 = -1;
int32_t x133 = -1;
int16_t x150 = 1;
uint64_t x158 = UINT64_MAX;
int8_t x173 = -1;
int64_t x174 = INT64_MIN;
static uint32_t x176 = UINT32_MAX;
volatile uint64_t x177 = UINT64_MAX;
volatile uint64_t t25 = 1073063296317LLU;
uint32_t x204 = 4U;
int32_t t26 = 2808;
volatile uint32_t x205 = 170181U;
int32_t x207 = -1;
volatile uint64_t t28 = 12766140328LLU;
static volatile int32_t x215 = -207071497;
int32_t x216 = INT32_MIN;
volatile uint64_t t29 = 123003639LLU;
int16_t x230 = INT16_MIN;
int64_t x233 = INT64_MAX;
int16_t x254 = INT16_MIN;
volatile uint64_t t33 = 130078673785159409LLU;
uint8_t x264 = 1U;
volatile uint16_t x274 = 3U;
int64_t t35 = -70557622LL;
uint64_t t36 = 8423030356979LLU;
volatile int64_t t37 = -8366357465533097LL;
uint32_t x299 = 31071325U;
int32_t x300 = -1;
volatile uint64_t t43 = 5250919LLU;
int32_t x350 = INT32_MIN;
uint64_t x353 = 7409091898741502543LLU;
uint64_t t45 = 2056914514485LLU;
int16_t x359 = INT16_MIN;
int32_t t46 = -810179394;
static uint8_t x375 = 1U;
volatile int64_t x384 = INT64_MIN;
volatile int32_t x392 = -208;
static int32_t x394 = INT32_MIN;
uint32_t x398 = UINT32_MAX;
volatile int32_t x400 = 88062471;
uint32_t x410 = 0U;
int32_t x420 = 126;
static uint64_t t55 = 90095LLU;
uint64_t x434 = 1LLU;
volatile int8_t x437 = INT8_MIN;
static volatile int32_t x440 = -243795861;
int16_t x448 = INT16_MIN;
int64_t x480 = INT64_MIN;
int32_t x488 = INT32_MAX;
int64_t t66 = INT64_MAX;
uint32_t x490 = UINT32_MAX;
int16_t x495 = INT16_MAX;
int8_t x496 = INT8_MIN;
int64_t x498 = INT64_MAX;
int16_t x500 = INT16_MIN;
uint16_t x501 = 0U;
int64_t t71 = -118480LL;
static int32_t x509 = INT32_MIN;
int8_t x513 = INT8_MAX;
static int8_t x514 = INT8_MIN;
uint32_t x520 = 2U;
static int16_t x523 = 5401;
int64_t x525 = 1984428746954LL;
static int64_t x526 = -4LL;
int32_t x534 = INT32_MIN;
int32_t x535 = INT32_MIN;
uint64_t t77 = 178080LLU;
int64_t x539 = -32359956693LL;
int64_t x540 = INT64_MAX;
volatile int64_t x541 = -1LL;
volatile int32_t x543 = INT32_MAX;
uint64_t t79 = 234197571579501LLU;
int32_t x547 = INT32_MIN;
volatile int32_t x556 = INT32_MIN;
uint16_t x561 = UINT16_MAX;
uint32_t x566 = UINT32_MAX;
static uint16_t x573 = 3638U;
int8_t x574 = -3;
uint32_t x590 = 981U;
int32_t x598 = INT32_MIN;
volatile uint8_t x613 = UINT8_MAX;
static uint64_t x615 = 2939673825086354LLU;
volatile uint32_t t91 = 1393U;
int64_t x624 = -1LL;
static uint64_t x625 = 504LLU;
int64_t x636 = 203199LL;
static volatile int64_t t94 = 3828828747333168096LL;
int64_t t95 = 109583238LL;
static int32_t x641 = 117;
int32_t x644 = INT32_MAX;
uint64_t x653 = 92LLU;
uint32_t x662 = UINT32_MAX;
int32_t x663 = INT32_MIN;
uint8_t x666 = UINT8_MAX;
volatile int8_t x667 = INT8_MAX;


void f0(void) {
	int8_t x1 = 43;
	static int8_t x2 = INT8_MIN;
	int32_t t0 = -6434745;

	t0 = ((x1-x2)<<(x3==x4));

	if (t0 != 171) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = -1;
	int64_t x11 = INT64_MIN;
	uint8_t x12 = 1U;
	volatile int32_t t1 = 21;

	t1 = ((x9-x10)<<(x11==x12));

	if (t1 != 472) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x13 = 497372U;
	int8_t x14 = -1;
	int32_t x15 = -1;
	static int8_t x16 = -1;
	static uint32_t t2 = 56605U;

	t2 = ((x13-x14)<<(x15==x16));

	if (t2 != 994746U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x22 = INT8_MAX;
	int16_t x24 = INT16_MAX;
	volatile uint32_t t3 = 3922920U;

	t3 = ((x21-x22)<<(x23==x24));

	if (t3 != 4294967168U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = -1;
	int64_t x26 = INT64_MIN;
	int64_t x27 = -259408826610LL;
	static volatile int16_t x28 = INT16_MAX;
	static volatile int64_t t4 = INT64_MAX;

	t4 = ((x25-x26)<<(x27==x28));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = UINT32_MAX;
	int8_t x31 = -12;

	t5 = ((x29-x30)<<(x31==x32));

	if (t5 != 4294967294U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x33 = UINT32_MAX;
	int32_t x34 = INT32_MIN;
	int32_t x36 = INT32_MIN;

	t6 = ((x33-x34)<<(x35==x36));

	if (t6 != 2147483647U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = 37592259;
	int32_t x46 = -7856;
	volatile int64_t x47 = INT64_MAX;
	static uint8_t x48 = 76U;
	volatile int32_t t7 = -2044217;

	t7 = ((x45-x46)<<(x47==x48));

	if (t7 != 37600115) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x49 = 4607916366471415LL;
	uint16_t x50 = UINT16_MAX;
	volatile uint16_t x51 = 3U;
	uint32_t x52 = UINT32_MAX;
	static int64_t t8 = 59LL;

	t8 = ((x49-x50)<<(x51==x52));

	if (t8 != 4607916366405880LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x54 = -194937592929LL;
	static int16_t x56 = INT16_MAX;
	volatile int64_t t9 = -30124LL;

	t9 = ((x53-x54)<<(x55==x56));

	if (t9 != 194937593002LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x57 = INT64_MAX;
	int32_t x58 = 14580;
	int8_t x59 = INT8_MIN;
	int64_t t10 = 56166984LL;

	t10 = ((x57-x58)<<(x59==x60));

	if (t10 != 9223372036854761227LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x65 = 12490368U;
	static int32_t x66 = INT32_MIN;
	int32_t x67 = -1;
	int8_t x68 = 5;
	uint32_t t11 = 0U;

	t11 = ((x65-x66)<<(x67==x68));

	if (t11 != 2159974016U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x69 = UINT64_MAX;
	int32_t x70 = INT32_MIN;
	int8_t x71 = INT8_MAX;
	int64_t x72 = 50748LL;
	uint64_t t12 = 7731LLU;

	t12 = ((x69-x70)<<(x71==x72));

	if (t12 != 2147483647LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x77 = INT32_MAX;
	volatile uint8_t x78 = 125U;
	int32_t x79 = INT32_MIN;
	volatile int64_t x80 = -648617493707LL;

	t13 = ((x77-x78)<<(x79==x80));

	if (t13 != 2147483522) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x93 = 5788664766LLU;
	int32_t x95 = INT32_MAX;
	uint64_t t14 = 28386LLU;

	t14 = ((x93-x94)<<(x95==x96));

	if (t14 != 5788664678LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x97 = 136U;
	volatile int32_t x98 = -1;
	volatile uint8_t x99 = 5U;
	volatile int64_t x100 = -980842LL;

	t15 = ((x97-x98)<<(x99==x100));

	if (t15 != 137) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x105 = -1LL;
	volatile int8_t x106 = INT8_MIN;
	uint32_t x107 = 41132872U;
	static uint8_t x108 = 5U;
	volatile int64_t t16 = 295126910972303403LL;

	t16 = ((x105-x106)<<(x107==x108));

	if (t16 != 127LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x110 = 0;
	int16_t x111 = INT16_MAX;
	int64_t x112 = -1LL;
	int32_t t17 = INT32_MAX;

	t17 = ((x109-x110)<<(x111==x112));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x117 = 4U;
	uint32_t x119 = UINT32_MAX;
	int32_t x120 = INT32_MIN;
	volatile uint32_t t18 = 463U;

	t18 = ((x117-x118)<<(x119==x120));

	if (t18 != 132U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x129 = -1;
	int64_t x130 = -10146797327459LL;
	int8_t x132 = INT8_MIN;
	volatile int64_t t19 = 167306864603951880LL;

	t19 = ((x129-x130)<<(x131==x132));

	if (t19 != 10146797327458LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x134 = 139536610LLU;
	int32_t x135 = -1;
	volatile uint32_t x136 = 14384967U;
	uint64_t t20 = 10278248022582168LLU;

	t20 = ((x133-x134)<<(x135==x136));

	if (t20 != 18446744073570015005LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x149 = INT64_MAX;
	uint8_t x151 = 85U;
	static uint16_t x152 = 699U;
	int64_t t21 = -5767401LL;

	t21 = ((x149-x150)<<(x151==x152));

	if (t21 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x157 = 19;
	uint64_t x159 = 1LLU;
	int64_t x160 = -1LL;
	volatile uint64_t t22 = 3057916LLU;

	t22 = ((x157-x158)<<(x159==x160));

	if (t22 != 20LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x165 = 796430U;
	uint32_t x166 = 2540U;
	int64_t x167 = -23021848917033874LL;
	static uint16_t x168 = 59U;
	uint32_t t23 = 591100U;

	t23 = ((x165-x166)<<(x167==x168));

	if (t23 != 793890U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x175 = UINT8_MAX;
	int64_t t24 = INT64_MAX;

	t24 = ((x173-x174)<<(x175==x176));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x178 = UINT8_MAX;
	uint16_t x179 = 110U;
	int8_t x180 = INT8_MIN;

	t25 = ((x177-x178)<<(x179==x180));

	if (t25 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x201 = INT16_MAX;
	int16_t x202 = INT16_MIN;
	uint64_t x203 = 6320663532757873635LLU;

	t26 = ((x201-x202)<<(x203==x204));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x206 = 1316269;
	static volatile int8_t x208 = INT8_MIN;
	volatile uint32_t t27 = 6702U;

	t27 = ((x205-x206)<<(x207==x208));

	if (t27 != 4293821208U) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x209 = -1;
	volatile uint64_t x210 = 1200780419LLU;
	uint8_t x211 = 0U;
	int64_t x212 = INT64_MIN;

	t28 = ((x209-x210)<<(x211==x212));

	if (t28 != 18446744072508771196LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x213 = UINT64_MAX;
	int64_t x214 = -1421510145LL;

	t29 = ((x213-x214)<<(x215==x216));

	if (t29 != 1421510144LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x229 = 0;
	int16_t x231 = -1;
	int32_t x232 = INT32_MIN;
	volatile int32_t t30 = -123;

	t30 = ((x229-x230)<<(x231==x232));

	if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x234 = INT32_MAX;
	static int8_t x235 = -11;
	int64_t x236 = -2LL;
	int64_t t31 = -53LL;

	t31 = ((x233-x234)<<(x235==x236));

	if (t31 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x237 = 1841;
	volatile uint8_t x238 = 1U;
	int16_t x239 = -1;
	uint8_t x240 = 3U;
	volatile int32_t t32 = -13507644;

	t32 = ((x237-x238)<<(x239==x240));

	if (t32 != 1840) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x253 = 119467700273354LLU;
	volatile int8_t x255 = -1;
	volatile int32_t x256 = INT32_MAX;

	t33 = ((x253-x254)<<(x255==x256));

	if (t33 != 119467700306122LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x261 = -51;
	volatile uint32_t x262 = UINT32_MAX;
	volatile int64_t x263 = INT64_MIN;
	static uint32_t t34 = 29U;

	t34 = ((x261-x262)<<(x263==x264));

	if (t34 != 4294967246U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x273 = INT64_MAX;
	int64_t x275 = -1LL;
	int16_t x276 = 7046;

	t35 = ((x273-x274)<<(x275==x276));

	if (t35 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x277 = INT32_MIN;
	uint64_t x278 = 911023279326466824LLU;
	uint8_t x279 = 3U;
	uint64_t x280 = UINT64_MAX;

	t36 = ((x277-x278)<<(x279==x280));

	if (t36 != 17535720792235601144LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x281 = -1LL;
	static int8_t x282 = -24;
	int8_t x283 = INT8_MIN;
	uint32_t x284 = 0U;

	t37 = ((x281-x282)<<(x283==x284));

	if (t37 != 23LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x293 = 0U;
	static int8_t x294 = INT8_MIN;
	static uint8_t x295 = 1U;
	int8_t x296 = 4;
	int32_t t38 = 507;

	t38 = ((x293-x294)<<(x295==x296));

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x297 = INT8_MAX;
	int32_t x298 = -951;
	int32_t t39 = -352208;

	t39 = ((x297-x298)<<(x299==x300));

	if (t39 != 1078) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x309 = UINT64_MAX;
	int64_t x310 = INT64_MIN;
	volatile uint16_t x311 = 431U;
	uint8_t x312 = UINT8_MAX;
	uint64_t t40 = 1118766LLU;

	t40 = ((x309-x310)<<(x311==x312));

	if (t40 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x321 = -1;
	int64_t x322 = INT64_MIN;
	int8_t x323 = -1;
	uint8_t x324 = 3U;
	volatile int64_t t41 = INT64_MAX;

	t41 = ((x321-x322)<<(x323==x324));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x329 = 368909957;
	int32_t x330 = -1;
	int32_t x331 = -1;
	int16_t x332 = -1;
	volatile int32_t t42 = -174585;

	t42 = ((x329-x330)<<(x331==x332));

	if (t42 != 737819916) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x337 = 334459871LLU;
	static int64_t x338 = INT64_MAX;
	uint16_t x339 = 1U;
	int32_t x340 = 3;

	t43 = ((x337-x338)<<(x339==x340));

	if (t43 != 9223372037189235680LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x349 = INT8_MIN;
	int64_t x351 = INT64_MIN;
	int64_t x352 = -1LL;
	int32_t t44 = -170;

	t44 = ((x349-x350)<<(x351==x352));

	if (t44 != 2147483520) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x354 = INT32_MIN;
	int8_t x355 = -13;
	static uint16_t x356 = 3715U;

	t45 = ((x353-x354)<<(x355==x356));

	if (t45 != 7409091900888986191LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x357 = INT8_MAX;
	int8_t x358 = -1;
	static int16_t x360 = INT16_MAX;

	t46 = ((x357-x358)<<(x359==x360));

	if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x373 = -4646;
	uint64_t x374 = 945188268199LLU;
	volatile int16_t x376 = -1;
	static uint64_t t47 = 7070066842LLU;

	t47 = ((x373-x374)<<(x375==x376));

	if (t47 != 18446743128521278771LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x381 = -1LL;
	int8_t x382 = -1;
	static int64_t x383 = -1LL;
	volatile int64_t t48 = 85821209986092LL;

	t48 = ((x381-x382)<<(x383==x384));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x389 = UINT8_MAX;
	static volatile uint64_t x390 = UINT64_MAX;
	uint64_t x391 = 4884503403078582536LLU;
	uint64_t t49 = 2752655LLU;

	t49 = ((x389-x390)<<(x391==x392));

	if (t49 != 256LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x393 = INT8_MIN;
	volatile int32_t x395 = 176384409;
	int16_t x396 = INT16_MAX;
	int32_t t50 = -38;

	t50 = ((x393-x394)<<(x395==x396));

	if (t50 != 2147483520) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x397 = 813U;
	uint16_t x399 = 22429U;
	uint32_t t51 = 3151825U;

	t51 = ((x397-x398)<<(x399==x400));

	if (t51 != 814U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x401 = -1;
	static int32_t x402 = INT32_MIN;
	volatile int32_t x403 = INT32_MIN;
	uint16_t x404 = 368U;
	volatile int32_t t52 = INT32_MAX;

	t52 = ((x401-x402)<<(x403==x404));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x405 = UINT16_MAX;
	static int16_t x406 = -1;
	volatile int64_t x407 = -1LL;
	uint16_t x408 = UINT16_MAX;
	static int32_t t53 = 529;

	t53 = ((x405-x406)<<(x407==x408));

	if (t53 != 65536) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x409 = UINT64_MAX;
	int32_t x411 = INT32_MIN;
	uint16_t x412 = 2649U;
	uint64_t t54 = UINT64_MAX;

	t54 = ((x409-x410)<<(x411==x412));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x417 = 29705916LLU;
	int16_t x418 = 7034;
	int16_t x419 = -1;

	t55 = ((x417-x418)<<(x419==x420));

	if (t55 != 29698882LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x425 = 114U;
	uint64_t x426 = 31624530473LLU;
	uint64_t x427 = UINT64_MAX;
	int8_t x428 = INT8_MAX;
	uint64_t t56 = 4LLU;

	t56 = ((x425-x426)<<(x427==x428));

	if (t56 != 18446744042085021257LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x429 = 1253390U;
	uint32_t x430 = 22U;
	int16_t x431 = 11;
	int32_t x432 = 64448;
	uint32_t t57 = 0U;

	t57 = ((x429-x430)<<(x431==x432));

	if (t57 != 1253368U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x433 = 1844U;
	volatile uint64_t x435 = 14690731499LLU;
	static int64_t x436 = INT64_MIN;
	volatile uint64_t t58 = 443LLU;

	t58 = ((x433-x434)<<(x435==x436));

	if (t58 != 1843LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x438 = INT8_MIN;
	uint8_t x439 = 22U;
	int32_t t59 = 486;

	t59 = ((x437-x438)<<(x439==x440));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x445 = 1138U;
	static int64_t x446 = -1LL;
	int16_t x447 = 13;
	static int64_t t60 = -20119744LL;

	t60 = ((x445-x446)<<(x447==x448));

	if (t60 != 1139LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x449 = 1963;
	static volatile int32_t x450 = 1;
	int8_t x451 = INT8_MAX;
	int64_t x452 = INT64_MIN;
	int32_t t61 = 189634347;

	t61 = ((x449-x450)<<(x451==x452));

	if (t61 != 1962) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x453 = INT32_MIN;
	uint64_t x454 = 657LLU;
	int64_t x455 = 134285976480792160LL;
	volatile uint32_t x456 = 1191244837U;
	static uint64_t t62 = 2604LLU;

	t62 = ((x453-x454)<<(x455==x456));

	if (t62 != 18446744071562067311LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x469 = 14436U;
	int8_t x470 = INT8_MAX;
	int32_t x471 = INT32_MAX;
	uint8_t x472 = 0U;
	volatile int32_t t63 = -342764494;

	t63 = ((x469-x470)<<(x471==x472));

	if (t63 != 14309) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x477 = 91U;
	uint8_t x478 = 3U;
	int16_t x479 = 34;
	volatile int32_t t64 = 4;

	t64 = ((x477-x478)<<(x479==x480));

	if (t64 != 88) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x481 = 9401578783523564LLU;
	volatile uint8_t x482 = 18U;
	int64_t x483 = -1LL;
	static int32_t x484 = -784;
	static uint64_t t65 = 863113469072421LLU;

	t65 = ((x481-x482)<<(x483==x484));

	if (t65 != 9401578783523546LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x485 = INT64_MAX;
	static int64_t x486 = 0LL;
	static int64_t x487 = -6755846830372211LL;

	t66 = ((x485-x486)<<(x487==x488));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x489 = 457U;
	static int8_t x491 = -1;
	int64_t x492 = INT64_MIN;
	volatile uint32_t t67 = 56490U;

	t67 = ((x489-x490)<<(x491==x492));

	if (t67 != 458U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x493 = 4U;
	static int16_t x494 = -930;
	int32_t t68 = -129;

	t68 = ((x493-x494)<<(x495==x496));

	if (t68 != 934) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x497 = UINT64_MAX;
	static volatile int8_t x499 = -1;
	volatile uint64_t t69 = 4612627607667LLU;

	t69 = ((x497-x498)<<(x499==x500));

	if (t69 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x502 = -51;
	int32_t x503 = INT32_MIN;
	uint8_t x504 = 55U;
	volatile int32_t t70 = -3875;

	t70 = ((x501-x502)<<(x503==x504));

	if (t70 != 51) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x505 = 368601175LL;
	uint8_t x506 = UINT8_MAX;
	static uint64_t x507 = 273371906659LLU;
	int64_t x508 = INT64_MAX;

	t71 = ((x505-x506)<<(x507==x508));

	if (t71 != 368600920LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x510 = 783119761U;
	int32_t x511 = 0;
	static int16_t x512 = 50;
	uint32_t t72 = 894593155U;

	t72 = ((x509-x510)<<(x511==x512));

	if (t72 != 1364363887U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x515 = 3U;
	int32_t x516 = INT32_MAX;
	int32_t t73 = -243644;

	t73 = ((x513-x514)<<(x515==x516));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x517 = 866682110821107LLU;
	int16_t x518 = 583;
	int8_t x519 = -1;
	static uint64_t t74 = 8LLU;

	t74 = ((x517-x518)<<(x519==x520));

	if (t74 != 866682110820524LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x521 = INT16_MAX;
	uint32_t x522 = 63119868U;
	volatile int16_t x524 = INT16_MIN;
	static uint32_t t75 = 684U;

	t75 = ((x521-x522)<<(x523==x524));

	if (t75 != 4231880195U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x527 = 48901887082279LL;
	volatile int64_t x528 = INT64_MIN;
	volatile int64_t t76 = -238618975LL;

	t76 = ((x525-x526)<<(x527==x528));

	if (t76 != 1984428746958LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x533 = 3163455LLU;
	int8_t x536 = INT8_MIN;

	t77 = ((x533-x534)<<(x535==x536));

	if (t77 != 2150647103LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x537 = 106224666849361768LLU;
	uint8_t x538 = 60U;
	uint64_t t78 = 2338987191LLU;

	t78 = ((x537-x538)<<(x539==x540));

	if (t78 != 106224666849361708LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x542 = UINT64_MAX;
	int64_t x544 = INT64_MIN;

	t79 = ((x541-x542)<<(x543==x544));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x545 = 2382188U;
	int16_t x546 = INT16_MIN;
	uint32_t x548 = 929U;
	volatile uint32_t t80 = 52142826U;

	t80 = ((x545-x546)<<(x547==x548));

	if (t80 != 2414956U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x549 = 2151410;
	static int8_t x550 = INT8_MIN;
	uint32_t x551 = 13120102U;
	static int64_t x552 = -1LL;
	volatile int32_t t81 = 2022451;

	t81 = ((x549-x550)<<(x551==x552));

	if (t81 != 2151538) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x553 = 5641LLU;
	static int64_t x554 = -133243851LL;
	uint64_t x555 = UINT64_MAX;
	static volatile uint64_t t82 = 6272093071287LLU;

	t82 = ((x553-x554)<<(x555==x556));

	if (t82 != 133249492LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x557 = -1;
	int64_t x558 = -1LL;
	int64_t x559 = INT64_MIN;
	uint16_t x560 = 73U;
	volatile int64_t t83 = 114144716LL;

	t83 = ((x557-x558)<<(x559==x560));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x562 = 3395;
	uint32_t x563 = UINT32_MAX;
	int64_t x564 = INT64_MAX;
	volatile int32_t t84 = -17724924;

	t84 = ((x561-x562)<<(x563==x564));

	if (t84 != 62140) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x565 = INT32_MIN;
	int16_t x567 = INT16_MAX;
	int64_t x568 = INT64_MIN;
	volatile uint32_t t85 = 1012061U;

	t85 = ((x565-x566)<<(x567==x568));

	if (t85 != 2147483649U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x575 = 97U;
	int64_t x576 = 23190LL;
	int32_t t86 = -92;

	t86 = ((x573-x574)<<(x575==x576));

	if (t86 != 3641) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x589 = 1U;
	int8_t x591 = INT8_MIN;
	int8_t x592 = -4;
	volatile uint32_t t87 = 1706678U;

	t87 = ((x589-x590)<<(x591==x592));

	if (t87 != 4294966316U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x593 = 1;
	static uint32_t x594 = 31911U;
	static int64_t x595 = -8246189360729148LL;
	static int32_t x596 = INT32_MAX;
	static volatile uint32_t t88 = 349U;

	t88 = ((x593-x594)<<(x595==x596));

	if (t88 != 4294935386U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x597 = 6468LLU;
	int32_t x599 = INT32_MAX;
	uint64_t x600 = UINT64_MAX;
	uint64_t t89 = 1606287317886252LLU;

	t89 = ((x597-x598)<<(x599==x600));

	if (t89 != 2147490116LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x609 = UINT64_MAX;
	volatile int32_t x610 = INT32_MAX;
	int8_t x611 = INT8_MAX;
	int8_t x612 = -1;
	uint64_t t90 = 122788652LLU;

	t90 = ((x609-x610)<<(x611==x612));

	if (t90 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x614 = UINT32_MAX;
	int32_t x616 = -239239047;

	t91 = ((x613-x614)<<(x615==x616));

	if (t91 != 256U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x621 = 9;
	volatile uint64_t x622 = 40381LLU;
	int8_t x623 = 1;
	static volatile uint64_t t92 = 407020061805471656LLU;

	t92 = ((x621-x622)<<(x623==x624));

	if (t92 != 18446744073709511244LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x626 = INT16_MAX;
	static volatile int64_t x627 = 262LL;
	uint8_t x628 = 29U;
	uint64_t t93 = 5380207361LLU;

	t93 = ((x625-x626)<<(x627==x628));

	if (t93 != 18446744073709519353LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x633 = 1238239325LL;
	static int16_t x634 = -1;
	static volatile int64_t x635 = 6378467099LL;

	t94 = ((x633-x634)<<(x635==x636));

	if (t94 != 1238239326LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x637 = INT16_MIN;
	int64_t x638 = INT64_MIN;
	int16_t x639 = INT16_MAX;
	uint64_t x640 = UINT64_MAX;

	t95 = ((x637-x638)<<(x639==x640));

	if (t95 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x642 = -1LL;
	volatile int8_t x643 = 9;
	volatile int64_t t96 = -1LL;

	t96 = ((x641-x642)<<(x643==x644));

	if (t96 != 118LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x654 = -1;
	uint8_t x655 = 9U;
	int64_t x656 = INT64_MIN;
	volatile uint64_t t97 = 6926289530LLU;

	t97 = ((x653-x654)<<(x655==x656));

	if (t97 != 93LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x661 = -1;
	uint8_t x664 = UINT8_MAX;
	static uint32_t t98 = 244904U;

	t98 = ((x661-x662)<<(x663==x664));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x665 = UINT16_MAX;
	volatile uint64_t x668 = 407006LLU;
	volatile int32_t t99 = -3575913;

	t99 = ((x665-x666)<<(x667==x668));

	if (t99 != 65280) { NG(); } else { ; }
	
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

