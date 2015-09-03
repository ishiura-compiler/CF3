#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = -2331;
int32_t t1 = 5786;
int16_t x11 = INT16_MIN;
volatile uint32_t t3 = 493080U;
uint8_t x29 = UINT8_MAX;
volatile int32_t t4 = 0;
int16_t x39 = 6;
volatile int16_t x40 = 987;
int32_t t7 = -7900;
int16_t x57 = -1;
int32_t x90 = -1;
int32_t x91 = -1;
uint32_t t14 = 2229846U;
volatile int32_t t15 = -163977399;
uint8_t x104 = 54U;
static int16_t x107 = INT16_MIN;
int32_t x114 = INT32_MIN;
volatile int8_t x125 = -1;
uint16_t x146 = 3141U;
int8_t x150 = INT8_MIN;
int16_t x173 = INT16_MIN;
int64_t x186 = INT64_MAX;
volatile int8_t x188 = 49;
int16_t x189 = INT16_MAX;
volatile int64_t x209 = -1LL;
int32_t x212 = 37;
int64_t x215 = -120LL;
volatile uint64_t x216 = UINT64_MAX;
volatile int64_t x266 = -485235LL;
uint16_t x267 = 7U;
int8_t x277 = INT8_MIN;
uint32_t x296 = 0U;
int8_t x299 = INT8_MIN;
int8_t x328 = -1;
volatile int64_t x334 = -6369LL;
int8_t x340 = -1;
uint32_t t43 = 456089993U;
static int64_t x361 = INT64_MIN;
volatile int64_t t44 = 6547190LL;
static uint8_t x383 = 26U;
uint32_t t48 = 502057U;
volatile int64_t x397 = INT64_MAX;
uint16_t x404 = 1016U;
uint32_t t51 = 2066533637U;
uint16_t x411 = UINT16_MAX;
int16_t x413 = 254;
static uint8_t x423 = 1U;
uint64_t x427 = UINT64_MAX;
uint64_t x436 = 2076503134LLU;
int16_t x438 = -431;
int32_t x440 = INT32_MIN;
int32_t x448 = INT32_MAX;
uint64_t t58 = 186038411518861243LLU;
uint32_t x480 = 1819U;
int32_t x482 = 6;
int64_t x484 = INT64_MAX;
volatile int8_t x497 = -1;
volatile int32_t t63 = 209;
int16_t x506 = INT16_MIN;
volatile uint64_t t66 = 109624597982851LLU;
volatile int64_t x535 = INT64_MIN;
uint8_t x537 = UINT8_MAX;
uint16_t x555 = 0U;
int32_t x573 = -1;
int32_t x574 = INT32_MIN;
int64_t t76 = -7057LL;
uint64_t x582 = UINT64_MAX;
int32_t x583 = INT32_MAX;
static int8_t x601 = -1;
uint64_t x609 = 5235268619427854711LLU;
volatile uint64_t t79 = 25LLU;
volatile int64_t t81 = -94100089673LL;
static int64_t x632 = 10180247LL;
int8_t x638 = INT8_MIN;
static volatile int64_t x647 = INT64_MIN;
uint16_t x657 = UINT16_MAX;
int16_t x667 = -1;
int64_t x689 = INT64_MIN;
uint32_t x690 = 116607U;
int64_t t89 = 53149790396607033LL;
int64_t x700 = 14953659856285LL;
volatile uint32_t x706 = UINT32_MAX;
volatile uint32_t x712 = UINT32_MAX;
static volatile int64_t t92 = -2LL;
static uint16_t x723 = 20U;
int16_t x762 = INT16_MIN;
uint32_t x773 = 2U;
static volatile uint32_t t99 = 851326U;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	static uint16_t x2 = UINT16_MAX;
	static int8_t x3 = INT8_MIN;
	static volatile int16_t x4 = INT16_MAX;
	volatile uint64_t t0 = 1064LLU;

	t0 = ((x1/x2)/(x3<=x4));

	if (t0 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = UINT16_MAX;
	static volatile int8_t x7 = INT8_MIN;
	uint16_t x8 = 0U;

	t1 = ((x5/x6)/(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -7105257449885176LL;
	volatile int16_t x10 = 1400;
	volatile int8_t x12 = INT8_MIN;
	volatile int64_t t2 = 54923917982932840LL;

	t2 = ((x9/x10)/(x11<=x12));

	if (t2 != -5075183892775LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x25 = -1;
	uint32_t x26 = UINT32_MAX;
	int8_t x27 = 5;
	uint32_t x28 = UINT32_MAX;

	t3 = ((x25/x26)/(x27<=x28));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x30 = INT16_MAX;
	int16_t x31 = -1;
	int8_t x32 = INT8_MAX;

	t4 = ((x29/x30)/(x31<=x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x37 = 2945U;
	int16_t x38 = -1;
	volatile int32_t t5 = -4543211;

	t5 = ((x37/x38)/(x39<=x40));

	if (t5 != -2945) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x45 = INT16_MIN;
	int16_t x46 = -1;
	int16_t x47 = 440;
	uint64_t x48 = 812LLU;
	int32_t t6 = 5;

	t6 = ((x45/x46)/(x47<=x48));

	if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x53 = 0;
	int16_t x54 = 2550;
	int8_t x55 = INT8_MAX;
	static volatile uint64_t x56 = 298697231LLU;

	t7 = ((x53/x54)/(x55<=x56));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x58 = INT8_MAX;
	int64_t x59 = INT64_MAX;
	static int64_t x60 = INT64_MAX;
	int32_t t8 = 446759;

	t8 = ((x57/x58)/(x59<=x60));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x61 = -1;
	uint32_t x62 = 173691748U;
	volatile uint32_t x63 = 908U;
	uint64_t x64 = 3558534985547972973LLU;
	volatile uint32_t t9 = 485U;

	t9 = ((x61/x62)/(x63<=x64));

	if (t9 != 24U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x65 = INT32_MAX;
	volatile uint8_t x66 = 1U;
	volatile uint8_t x67 = 0U;
	static uint16_t x68 = 6U;
	static int32_t t10 = INT32_MAX;

	t10 = ((x65/x66)/(x67<=x68));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x69 = INT16_MIN;
	volatile uint64_t x70 = 27LLU;
	static int8_t x71 = INT8_MIN;
	int8_t x72 = 1;
	static volatile uint64_t t11 = 12069540LLU;

	t11 = ((x69/x70)/(x71<=x72));

	if (t11 != 683212743470722920LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x81 = INT8_MAX;
	uint8_t x82 = 14U;
	int32_t x83 = INT32_MIN;
	int16_t x84 = INT16_MIN;
	int32_t t12 = -253071;

	t12 = ((x81/x82)/(x83<=x84));

	if (t12 != 9) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x85 = INT64_MIN;
	int8_t x86 = 6;
	int8_t x87 = INT8_MAX;
	volatile uint16_t x88 = 32736U;
	int64_t t13 = -5965242LL;

	t13 = ((x85/x86)/(x87<=x88));

	if (t13 != -1537228672809129301LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x89 = 14419U;
	int8_t x92 = INT8_MAX;

	t14 = ((x89/x90)/(x91<=x92));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x93 = INT16_MAX;
	int8_t x94 = -1;
	volatile int32_t x95 = -1023090;
	static int64_t x96 = -1LL;

	t15 = ((x93/x94)/(x95<=x96));

	if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x101 = INT64_MAX;
	int8_t x102 = INT8_MIN;
	int8_t x103 = INT8_MIN;
	int64_t t16 = -493501101968582959LL;

	t16 = ((x101/x102)/(x103<=x104));

	if (t16 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x105 = 7;
	int32_t x106 = 150567722;
	int16_t x108 = 56;
	static volatile int32_t t17 = 221782665;

	t17 = ((x105/x106)/(x107<=x108));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x113 = INT8_MIN;
	static int32_t x115 = -27;
	volatile int8_t x116 = 0;
	volatile int32_t t18 = -892;

	t18 = ((x113/x114)/(x115<=x116));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x126 = UINT32_MAX;
	static uint16_t x127 = 1U;
	int32_t x128 = 340249843;
	uint32_t t19 = 0U;

	t19 = ((x125/x126)/(x127<=x128));

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x133 = INT64_MIN;
	uint16_t x134 = UINT16_MAX;
	uint8_t x135 = 3U;
	volatile uint16_t x136 = 4829U;
	int64_t t20 = -759LL;

	t20 = ((x133/x134)/(x135<=x136));

	if (t20 != -140739635871744LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x145 = -170;
	volatile uint16_t x147 = 1U;
	int8_t x148 = INT8_MAX;
	volatile int32_t t21 = 1;

	t21 = ((x145/x146)/(x147<=x148));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x149 = -1;
	uint64_t x151 = 181760440947LLU;
	int64_t x152 = -1LL;
	volatile int32_t t22 = -504520096;

	t22 = ((x149/x150)/(x151<=x152));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x169 = INT8_MIN;
	int16_t x170 = -1;
	int64_t x171 = -1626889188847835LL;
	int16_t x172 = 0;
	volatile int32_t t23 = 95766;

	t23 = ((x169/x170)/(x171<=x172));

	if (t23 != 128) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x174 = 4826375575023LLU;
	uint32_t x175 = 3294386U;
	int32_t x176 = -15161070;
	uint64_t t24 = 3982260150693691LLU;

	t24 = ((x173/x174)/(x175<=x176));

	if (t24 != 3822069LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x181 = -1;
	int16_t x182 = -1;
	int32_t x183 = -2;
	uint8_t x184 = 1U;
	static int32_t t25 = -13270709;

	t25 = ((x181/x182)/(x183<=x184));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x185 = INT16_MAX;
	volatile int64_t x187 = -15356907609LL;
	volatile int64_t t26 = 25956041LL;

	t26 = ((x185/x186)/(x187<=x188));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x190 = INT64_MIN;
	int8_t x191 = -6;
	int16_t x192 = INT16_MAX;
	int64_t t27 = 74088LL;

	t27 = ((x189/x190)/(x191<=x192));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x193 = -12;
	int64_t x194 = INT64_MAX;
	uint8_t x195 = UINT8_MAX;
	int16_t x196 = INT16_MAX;
	volatile int64_t t28 = 1227321524618151LL;

	t28 = ((x193/x194)/(x195<=x196));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x210 = UINT32_MAX;
	int32_t x211 = -454;
	volatile int64_t t29 = -1030295LL;

	t29 = ((x209/x210)/(x211<=x212));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x213 = INT8_MAX;
	int32_t x214 = INT32_MAX;
	volatile int32_t t30 = 51890;

	t30 = ((x213/x214)/(x215<=x216));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x221 = INT64_MIN;
	static volatile int16_t x222 = INT16_MIN;
	uint32_t x223 = 7541969U;
	int8_t x224 = INT8_MIN;
	int64_t t31 = 12155LL;

	t31 = ((x221/x222)/(x223<=x224));

	if (t31 != 281474976710656LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x265 = 2;
	uint32_t x268 = 1640835U;
	volatile int64_t t32 = -4111037008950638LL;

	t32 = ((x265/x266)/(x267<=x268));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x269 = 3970742LLU;
	uint16_t x270 = UINT16_MAX;
	int16_t x271 = 0;
	int8_t x272 = INT8_MAX;
	static volatile uint64_t t33 = 169600LLU;

	t33 = ((x269/x270)/(x271<=x272));

	if (t33 != 60LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x278 = 3U;
	volatile int32_t x279 = INT32_MIN;
	int8_t x280 = INT8_MIN;
	static volatile int32_t t34 = 485;

	t34 = ((x277/x278)/(x279<=x280));

	if (t34 != -42) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x289 = INT8_MAX;
	int16_t x290 = 1;
	static int16_t x291 = INT16_MIN;
	static int32_t x292 = 258;
	static volatile int32_t t35 = -3;

	t35 = ((x289/x290)/(x291<=x292));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x293 = INT64_MIN;
	static int8_t x294 = INT8_MIN;
	static volatile int64_t x295 = -3756321740996LL;
	static int64_t t36 = 2278LL;

	t36 = ((x293/x294)/(x295<=x296));

	if (t36 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x297 = 7LLU;
	int8_t x298 = INT8_MIN;
	int8_t x300 = INT8_MIN;
	static uint64_t t37 = 48908408972974LLU;

	t37 = ((x297/x298)/(x299<=x300));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x305 = INT32_MAX;
	volatile uint64_t x306 = 2LLU;
	uint8_t x307 = 2U;
	volatile int64_t x308 = INT64_MAX;
	static uint64_t t38 = 1042568158284396LLU;

	t38 = ((x305/x306)/(x307<=x308));

	if (t38 != 1073741823LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x325 = UINT64_MAX;
	int32_t x326 = INT32_MAX;
	int16_t x327 = INT16_MIN;
	uint64_t t39 = 106LLU;

	t39 = ((x325/x326)/(x327<=x328));

	if (t39 != 8589934596LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x329 = -62636;
	int16_t x330 = INT16_MIN;
	int8_t x331 = INT8_MIN;
	int64_t x332 = INT64_MAX;
	int32_t t40 = 4718;

	t40 = ((x329/x330)/(x331<=x332));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x333 = INT64_MAX;
	uint32_t x335 = 1845U;
	volatile int32_t x336 = INT32_MIN;
	int64_t t41 = -80302214660708157LL;

	t41 = ((x333/x334)/(x335<=x336));

	if (t41 != -1448166436937474LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x337 = 1370U;
	static int32_t x338 = -2880;
	uint32_t x339 = 2U;
	int32_t t42 = -13761324;

	t42 = ((x337/x338)/(x339<=x340));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x345 = INT16_MAX;
	static uint32_t x346 = 49229U;
	int32_t x347 = -1;
	static int64_t x348 = INT64_MAX;

	t43 = ((x345/x346)/(x347<=x348));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x362 = INT32_MIN;
	static int16_t x363 = -1;
	int16_t x364 = -1;

	t44 = ((x361/x362)/(x363<=x364));

	if (t44 != 4294967296LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x373 = -1;
	int64_t x374 = -1LL;
	uint32_t x375 = 3U;
	uint8_t x376 = UINT8_MAX;
	int64_t t45 = 11924307945132LL;

	t45 = ((x373/x374)/(x375<=x376));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x377 = -112;
	int64_t x378 = INT64_MAX;
	uint32_t x379 = 3819320U;
	int16_t x380 = INT16_MIN;
	static int64_t t46 = -15204041987888388LL;

	t46 = ((x377/x378)/(x379<=x380));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x381 = 28971LL;
	int64_t x382 = -1LL;
	static volatile int64_t x384 = 2928917660514569622LL;
	int64_t t47 = -4111588697LL;

	t47 = ((x381/x382)/(x383<=x384));

	if (t47 != -28971LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x385 = 3U;
	int32_t x386 = INT32_MIN;
	static uint8_t x387 = 3U;
	int64_t x388 = 188859799LL;

	t48 = ((x385/x386)/(x387<=x388));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x398 = INT64_MIN;
	int64_t x399 = -1LL;
	uint16_t x400 = 112U;
	volatile int64_t t49 = -95LL;

	t49 = ((x397/x398)/(x399<=x400));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x401 = -1LL;
	int8_t x402 = 25;
	static int32_t x403 = INT32_MIN;
	static int64_t t50 = -630502519869454053LL;

	t50 = ((x401/x402)/(x403<=x404));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x405 = INT16_MIN;
	static uint32_t x406 = 124899853U;
	volatile uint8_t x407 = 7U;
	static int64_t x408 = INT64_MAX;

	t51 = ((x405/x406)/(x407<=x408));

	if (t51 != 34U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x409 = -1;
	int32_t x410 = INT32_MIN;
	uint32_t x412 = UINT32_MAX;
	int32_t t52 = -73840249;

	t52 = ((x409/x410)/(x411<=x412));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x414 = -1;
	volatile int16_t x415 = INT16_MIN;
	int16_t x416 = -1;
	volatile int32_t t53 = -5335795;

	t53 = ((x413/x414)/(x415<=x416));

	if (t53 != -254) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x421 = INT16_MIN;
	uint16_t x422 = 11122U;
	int8_t x424 = INT8_MAX;
	volatile int32_t t54 = -813;

	t54 = ((x421/x422)/(x423<=x424));

	if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x425 = 137119631924956696LLU;
	int8_t x426 = 6;
	int32_t x428 = -1;
	volatile uint64_t t55 = 3456840457053LLU;

	t55 = ((x425/x426)/(x427<=x428));

	if (t55 != 22853271987492782LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x433 = 1;
	int8_t x434 = 10;
	uint8_t x435 = 21U;
	int32_t t56 = -46908286;

	t56 = ((x433/x434)/(x435<=x436));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x437 = 2LL;
	int32_t x439 = INT32_MIN;
	volatile int64_t t57 = -3134713038232LL;

	t57 = ((x437/x438)/(x439<=x440));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x445 = 50935134447812249LLU;
	volatile int8_t x446 = INT8_MIN;
	int32_t x447 = INT32_MIN;

	t58 = ((x445/x446)/(x447<=x448));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x465 = 1;
	uint64_t x466 = 61482607LLU;
	uint32_t x467 = 193659U;
	volatile int8_t x468 = INT8_MIN;
	volatile uint64_t t59 = 0LLU;

	t59 = ((x465/x466)/(x467<=x468));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x477 = 41500414U;
	volatile uint32_t x478 = UINT32_MAX;
	volatile uint16_t x479 = 15U;
	volatile uint32_t t60 = 4063U;

	t60 = ((x477/x478)/(x479<=x480));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x481 = 1861168286628801442LLU;
	int16_t x483 = -1;
	volatile uint64_t t61 = 201675669881666LLU;

	t61 = ((x481/x482)/(x483<=x484));

	if (t61 != 310194714438133573LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x493 = 41U;
	volatile uint64_t x494 = 9821692LLU;
	static int32_t x495 = INT32_MIN;
	uint8_t x496 = UINT8_MAX;
	uint64_t t62 = 17831308857720LLU;

	t62 = ((x493/x494)/(x495<=x496));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x498 = -1634;
	static volatile int8_t x499 = -1;
	int16_t x500 = INT16_MAX;

	t63 = ((x497/x498)/(x499<=x500));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x505 = 3;
	int16_t x507 = 0;
	uint64_t x508 = 7LLU;
	int32_t t64 = -136817891;

	t64 = ((x505/x506)/(x507<=x508));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x509 = 1231690;
	int8_t x510 = INT8_MIN;
	int8_t x511 = -1;
	static volatile uint64_t x512 = UINT64_MAX;
	volatile int32_t t65 = 234509743;

	t65 = ((x509/x510)/(x511<=x512));

	if (t65 != -9622) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x517 = 1529648LLU;
	static uint8_t x518 = UINT8_MAX;
	int8_t x519 = INT8_MIN;
	int8_t x520 = -4;

	t66 = ((x517/x518)/(x519<=x520));

	if (t66 != 5998LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x521 = -1;
	int8_t x522 = 3;
	static int64_t x523 = INT64_MIN;
	volatile int8_t x524 = INT8_MIN;
	volatile int32_t t67 = -620991;

	t67 = ((x521/x522)/(x523<=x524));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x525 = 11525655LL;
	volatile int8_t x526 = INT8_MIN;
	int8_t x527 = INT8_MIN;
	int32_t x528 = INT32_MAX;
	volatile int64_t t68 = -14834505105286LL;

	t68 = ((x525/x526)/(x527<=x528));

	if (t68 != -90044LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x533 = -1;
	volatile int16_t x534 = -1;
	uint8_t x536 = UINT8_MAX;
	volatile int32_t t69 = -13;

	t69 = ((x533/x534)/(x535<=x536));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x538 = -1;
	volatile int32_t x539 = -1;
	volatile uint16_t x540 = 10348U;
	static int32_t t70 = -448891;

	t70 = ((x537/x538)/(x539<=x540));

	if (t70 != -255) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x545 = -1;
	int32_t x546 = -1365;
	uint32_t x547 = 21531U;
	int8_t x548 = -1;
	int32_t t71 = -9330;

	t71 = ((x545/x546)/(x547<=x548));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x553 = -39;
	int16_t x554 = INT16_MAX;
	int64_t x556 = 264316552865460435LL;
	static volatile int32_t t72 = 0;

	t72 = ((x553/x554)/(x555<=x556));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x561 = UINT64_MAX;
	volatile int8_t x562 = 1;
	volatile int32_t x563 = INT32_MIN;
	uint16_t x564 = 0U;
	uint64_t t73 = UINT64_MAX;

	t73 = ((x561/x562)/(x563<=x564));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x565 = INT64_MIN;
	int32_t x566 = INT32_MIN;
	int16_t x567 = -6270;
	volatile uint16_t x568 = 2U;
	int64_t t74 = 14387109LL;

	t74 = ((x565/x566)/(x567<=x568));

	if (t74 != 4294967296LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x575 = -1LL;
	uint16_t x576 = 2925U;
	static volatile int32_t t75 = -475174;

	t75 = ((x573/x574)/(x575<=x576));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x577 = 51697678U;
	int64_t x578 = INT64_MIN;
	static int64_t x579 = INT64_MIN;
	int32_t x580 = INT32_MAX;

	t76 = ((x577/x578)/(x579<=x580));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x581 = -1;
	int32_t x584 = INT32_MAX;
	volatile uint64_t t77 = 14919LLU;

	t77 = ((x581/x582)/(x583<=x584));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x602 = 7;
	int64_t x603 = -1LL;
	int16_t x604 = 0;
	int32_t t78 = 2;

	t78 = ((x601/x602)/(x603<=x604));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x610 = 1U;
	int8_t x611 = INT8_MAX;
	uint16_t x612 = 599U;

	t79 = ((x609/x610)/(x611<=x612));

	if (t79 != 5235268619427854711LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x613 = INT8_MAX;
	int16_t x614 = INT16_MIN;
	int64_t x615 = INT64_MIN;
	volatile int16_t x616 = -63;
	volatile int32_t t80 = -925;

	t80 = ((x613/x614)/(x615<=x616));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x617 = -1LL;
	uint16_t x618 = UINT16_MAX;
	volatile int16_t x619 = INT16_MIN;
	int64_t x620 = 6937413LL;

	t81 = ((x617/x618)/(x619<=x620));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x629 = 2109;
	int64_t x630 = INT64_MIN;
	volatile int8_t x631 = INT8_MAX;
	static volatile int64_t t82 = 1LL;

	t82 = ((x629/x630)/(x631<=x632));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x637 = -1;
	int32_t x639 = INT32_MIN;
	static int16_t x640 = INT16_MIN;
	int32_t t83 = 12375276;

	t83 = ((x637/x638)/(x639<=x640));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x645 = UINT32_MAX;
	volatile int32_t x646 = -342;
	uint16_t x648 = 4U;
	static volatile uint32_t t84 = 111U;

	t84 = ((x645/x646)/(x647<=x648));

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x658 = 2236138706262042337LLU;
	uint8_t x659 = 14U;
	int64_t x660 = 49455LL;
	volatile uint64_t t85 = 11LLU;

	t85 = ((x657/x658)/(x659<=x660));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x661 = UINT64_MAX;
	int32_t x662 = INT32_MIN;
	volatile int16_t x663 = -1;
	static int8_t x664 = -1;
	uint64_t t86 = 2LLU;

	t86 = ((x661/x662)/(x663<=x664));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x665 = -1;
	static volatile int8_t x666 = 1;
	static int64_t x668 = 17678945LL;
	int32_t t87 = 7;

	t87 = ((x665/x666)/(x667<=x668));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x691 = 1LLU;
	uint64_t x692 = UINT64_MAX;
	volatile int64_t t88 = 328519LL;

	t88 = ((x689/x690)/(x691<=x692));

	if (t88 != -79097927541697LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x693 = INT64_MAX;
	int16_t x694 = -1;
	static volatile int8_t x695 = INT8_MIN;
	uint16_t x696 = UINT16_MAX;

	t89 = ((x693/x694)/(x695<=x696));

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x697 = -1;
	int8_t x698 = INT8_MIN;
	uint64_t x699 = 1024278780LLU;
	int32_t t90 = 9516020;

	t90 = ((x697/x698)/(x699<=x700));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x705 = INT8_MIN;
	uint32_t x707 = 1208U;
	uint32_t x708 = UINT32_MAX;
	volatile uint32_t t91 = 136634U;

	t91 = ((x705/x706)/(x707<=x708));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x709 = INT64_MAX;
	volatile int32_t x710 = 622032147;
	uint8_t x711 = UINT8_MAX;

	t92 = ((x709/x710)/(x711<=x712));

	if (t92 != 14827806056LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x713 = 454786100342545799LLU;
	static int32_t x714 = INT32_MIN;
	int64_t x715 = -1090770786523LL;
	volatile int32_t x716 = 62665287;
	volatile uint64_t t93 = 18798LLU;

	t93 = ((x713/x714)/(x715<=x716));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x721 = 51993122U;
	static uint16_t x722 = UINT16_MAX;
	uint64_t x724 = 5030477739367LLU;
	volatile uint32_t t94 = 10165074U;

	t94 = ((x721/x722)/(x723<=x724));

	if (t94 != 793U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x733 = -2;
	volatile int32_t x734 = 111741;
	int8_t x735 = INT8_MIN;
	int64_t x736 = -1LL;
	int32_t t95 = 17;

	t95 = ((x733/x734)/(x735<=x736));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x737 = -1;
	volatile int8_t x738 = -2;
	uint16_t x739 = 13U;
	volatile int64_t x740 = INT64_MAX;
	int32_t t96 = 0;

	t96 = ((x737/x738)/(x739<=x740));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x749 = 57U;
	volatile int8_t x750 = -44;
	int16_t x751 = -1;
	int16_t x752 = 1;
	volatile int32_t t97 = -690439;

	t97 = ((x749/x750)/(x751<=x752));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x761 = UINT8_MAX;
	int32_t x763 = -1;
	int8_t x764 = -1;
	volatile int32_t t98 = -543;

	t98 = ((x761/x762)/(x763<=x764));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x774 = INT16_MAX;
	static uint32_t x775 = 1U;
	int32_t x776 = -512553;

	t99 = ((x773/x774)/(x775<=x776));

	if (t99 != 0U) { NG(); } else { ; }
	
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

