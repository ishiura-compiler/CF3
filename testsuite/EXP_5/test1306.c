#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x25 = INT16_MAX;
uint16_t x37 = 24069U;
int64_t x38 = -1LL;
volatile uint16_t x40 = 3507U;
uint16_t x50 = 40U;
int32_t t8 = 65;
static uint32_t x83 = 19U;
int64_t x91 = INT64_MIN;
int16_t x95 = INT16_MAX;
uint32_t x105 = 5069590U;
uint64_t x106 = UINT64_MAX;
volatile int32_t x124 = -1;
volatile uint64_t x125 = UINT64_MAX;
int8_t x134 = INT8_MIN;
int32_t x135 = INT32_MIN;
static int32_t x147 = INT32_MIN;
int64_t x148 = INT64_MAX;
int64_t x157 = 52826LL;
int16_t x158 = -1;
int64_t t19 = 2109769975570435503LL;
int16_t x178 = INT16_MAX;
int16_t x180 = INT16_MIN;
static uint32_t x193 = 26542638U;
int64_t x194 = INT64_MIN;
static volatile int32_t t27 = -3;
static uint32_t x242 = 45644743U;
static uint16_t x257 = 14U;
volatile int32_t t31 = -97488;
volatile int64_t x283 = 1901854449LL;
int8_t x284 = INT8_MIN;
int8_t x290 = -1;
static volatile int16_t x302 = -117;
volatile int16_t x303 = -3438;
static int16_t x306 = -13208;
int64_t x308 = -79680466153209LL;
uint64_t x309 = UINT64_MAX;
volatile uint8_t x312 = 2U;
uint64_t t40 = 295LLU;
uint16_t x352 = 4435U;
int32_t x353 = 2889241;
int16_t x356 = 33;
uint64_t x360 = UINT64_MAX;
volatile uint64_t t43 = 153937844539759LLU;
volatile uint64_t t45 = 2500622039169011285LLU;
volatile uint64_t t48 = 0LLU;
static int16_t x417 = 19;
volatile int64_t x418 = INT64_MAX;
static int16_t x420 = 16;
int32_t t50 = -5714708;
volatile uint16_t x429 = 2357U;
static volatile int32_t t51 = 13394756;
static int32_t x436 = INT32_MIN;
uint32_t t55 = 7U;
volatile int8_t x461 = 2;
int32_t t56 = -4;
static uint16_t x469 = UINT16_MAX;
uint16_t x471 = 17U;
int16_t x479 = INT16_MAX;
int8_t x486 = -3;
volatile uint64_t t60 = 1903061854194844LLU;
uint64_t x493 = 675LLU;
uint64_t t62 = UINT64_MAX;
int8_t x505 = 1;
volatile uint8_t x516 = 1U;
uint8_t x529 = UINT8_MAX;
volatile int64_t x541 = 1047362LL;
int8_t x542 = -1;
uint16_t x558 = 348U;
uint32_t x574 = 43381419U;
int8_t x576 = -1;
uint16_t x583 = 3U;
int64_t x584 = 1391LL;
static volatile uint32_t x587 = 7387222U;
static uint64_t t78 = 1196163515292LLU;
volatile int32_t x595 = INT32_MIN;
uint32_t x609 = 113689U;
volatile uint64_t x615 = 16586992136974208LLU;
uint8_t x628 = 0U;
int16_t x630 = -11015;
static int64_t x637 = 56479833519LL;
uint32_t x639 = UINT32_MAX;
static int8_t x640 = INT8_MAX;
volatile int64_t t86 = -32727718332862066LL;
uint32_t x641 = UINT32_MAX;
int32_t x657 = 340084927;
uint8_t x669 = 69U;
static volatile int16_t x675 = -4099;
int32_t t91 = -746078;
int64_t x680 = INT64_MAX;
static int32_t x683 = INT32_MIN;
int64_t x684 = INT64_MIN;
volatile int8_t x685 = INT8_MAX;
int8_t x686 = INT8_MIN;
int16_t x692 = -1;
uint8_t x697 = UINT8_MAX;
static uint64_t x698 = UINT64_MAX;
uint64_t x704 = 12525046349419LLU;
uint64_t t97 = 3817036544192LLU;
int32_t x705 = 16202;
uint16_t x718 = 9062U;
uint32_t x719 = 2U;
int32_t t99 = 955039;


void f0(void) {
	volatile int8_t x26 = INT8_MAX;
	int16_t x27 = -1;
	int64_t x28 = INT64_MIN;
	int32_t t0 = -583752;

	t0 = (x25<<((x26==x27)<=x28));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x29 = INT16_MAX;
	int8_t x30 = 0;
	int32_t x31 = INT32_MIN;
	int64_t x32 = -54633716629064523LL;
	volatile int32_t t1 = 10455063;

	t1 = (x29<<((x30==x31)<=x32));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x33 = 409LLU;
	volatile int16_t x34 = INT16_MIN;
	static uint32_t x35 = UINT32_MAX;
	int32_t x36 = INT32_MIN;
	static uint64_t t2 = 7340330045901LLU;

	t2 = (x33<<((x34==x35)<=x36));

	if (t2 != 409LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x39 = 6;
	volatile int32_t t3 = -381669;

	t3 = (x37<<((x38==x39)<=x40));

	if (t3 != 48138) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x49 = 28883758010152192LL;
	uint32_t x51 = 0U;
	volatile uint64_t x52 = 267195763941LLU;
	int64_t t4 = -59397634039LL;

	t4 = (x49<<((x50==x51)<=x52));

	if (t4 != 57767516020304384LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x53 = 893U;
	static volatile uint8_t x54 = UINT8_MAX;
	int8_t x55 = INT8_MIN;
	int16_t x56 = -2640;
	uint32_t t5 = 1U;

	t5 = (x53<<((x54==x55)<=x56));

	if (t5 != 893U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x69 = INT8_MAX;
	int32_t x70 = 836;
	static uint16_t x71 = UINT16_MAX;
	int64_t x72 = INT64_MIN;
	static int32_t t6 = -607;

	t6 = (x69<<((x70==x71)<=x72));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x73 = 5528300570LL;
	uint16_t x74 = 438U;
	static int64_t x75 = -1LL;
	uint32_t x76 = UINT32_MAX;
	static volatile int64_t t7 = -3594479010LL;

	t7 = (x73<<((x74==x75)<=x76));

	if (t7 != 11056601140LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x77 = 302;
	uint16_t x78 = UINT16_MAX;
	int32_t x79 = INT32_MAX;
	static uint16_t x80 = 256U;

	t8 = (x77<<((x78==x79)<=x80));

	if (t8 != 604) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x81 = UINT8_MAX;
	int64_t x82 = -1LL;
	static int32_t x84 = INT32_MIN;
	int32_t t9 = -31827803;

	t9 = (x81<<((x82==x83)<=x84));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x89 = 13666209400LL;
	int16_t x90 = INT16_MIN;
	uint32_t x92 = UINT32_MAX;
	static volatile int64_t t10 = 1355993026028475LL;

	t10 = (x89<<((x90==x91)<=x92));

	if (t10 != 27332418800LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x93 = INT16_MAX;
	static int32_t x94 = INT32_MIN;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t11 = 441;

	t11 = (x93<<((x94==x95)<=x96));

	if (t11 != 65534) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x107 = INT8_MAX;
	uint8_t x108 = 2U;
	static volatile uint32_t t12 = 4565U;

	t12 = (x105<<((x106==x107)<=x108));

	if (t12 != 10139180U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x121 = UINT32_MAX;
	int64_t x122 = INT64_MIN;
	int64_t x123 = 43512081201226195LL;
	static uint32_t t13 = UINT32_MAX;

	t13 = (x121<<((x122==x123)<=x124));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x126 = 0U;
	volatile int32_t x127 = -1;
	uint16_t x128 = UINT16_MAX;
	static uint64_t t14 = 583910241567LLU;

	t14 = (x125<<((x126==x127)<=x128));

	if (t14 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x129 = 78LLU;
	static int32_t x130 = INT32_MIN;
	volatile int8_t x131 = -7;
	int32_t x132 = INT32_MIN;
	volatile uint64_t t15 = 250997LLU;

	t15 = (x129<<((x130==x131)<=x132));

	if (t15 != 78LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x133 = UINT64_MAX;
	int64_t x136 = 1899512531911LL;
	volatile uint64_t t16 = 3937303889217141351LLU;

	t16 = (x133<<((x134==x135)<=x136));

	if (t16 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x141 = UINT32_MAX;
	volatile int32_t x142 = -1;
	uint64_t x143 = 6708207681LLU;
	int8_t x144 = INT8_MAX;
	uint32_t t17 = 279595561U;

	t17 = (x141<<((x142==x143)<=x144));

	if (t17 != 4294967294U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x145 = 192;
	uint8_t x146 = 99U;
	int32_t t18 = -2804;

	t18 = (x145<<((x146==x147)<=x148));

	if (t18 != 384) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x159 = INT16_MIN;
	int32_t x160 = 38467;

	t19 = (x157<<((x158==x159)<=x160));

	if (t19 != 105652LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x165 = UINT64_MAX;
	int8_t x166 = -1;
	int32_t x167 = INT32_MIN;
	volatile uint32_t x168 = 32970737U;
	volatile uint64_t t20 = 1343738302088LLU;

	t20 = (x165<<((x166==x167)<=x168));

	if (t20 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x169 = 12104;
	volatile int32_t x170 = INT32_MAX;
	static int16_t x171 = 550;
	uint16_t x172 = 195U;
	int32_t t21 = 24034739;

	t21 = (x169<<((x170==x171)<=x172));

	if (t21 != 24208) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x173 = 1804637U;
	uint64_t x174 = 90855842899LLU;
	int8_t x175 = INT8_MAX;
	int32_t x176 = INT32_MIN;
	volatile uint32_t t22 = 260581459U;

	t22 = (x173<<((x174==x175)<=x176));

	if (t22 != 1804637U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x177 = 11U;
	volatile int8_t x179 = -1;
	int32_t t23 = 857004110;

	t23 = (x177<<((x178==x179)<=x180));

	if (t23 != 11) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x195 = INT16_MIN;
	static int16_t x196 = INT16_MIN;
	volatile uint32_t t24 = 13U;

	t24 = (x193<<((x194==x195)<=x196));

	if (t24 != 26542638U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x205 = 1U;
	uint32_t x206 = 2482430U;
	int8_t x207 = INT8_MIN;
	int64_t x208 = INT64_MIN;
	int32_t t25 = -3;

	t25 = (x205<<((x206==x207)<=x208));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x209 = 30280U;
	int16_t x210 = -272;
	volatile int16_t x211 = 5981;
	int8_t x212 = INT8_MIN;
	volatile uint32_t t26 = 49U;

	t26 = (x209<<((x210==x211)<=x212));

	if (t26 != 30280U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x225 = 0U;
	int16_t x226 = INT16_MIN;
	uint32_t x227 = 482276U;
	int16_t x228 = INT16_MIN;

	t27 = (x225<<((x226==x227)<=x228));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x233 = 9U;
	volatile int64_t x234 = INT64_MIN;
	volatile int32_t x235 = INT32_MIN;
	static int32_t x236 = INT32_MIN;
	int32_t t28 = -1088;

	t28 = (x233<<((x234==x235)<=x236));

	if (t28 != 9) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x241 = UINT32_MAX;
	int32_t x243 = -1;
	static int8_t x244 = 1;
	volatile uint32_t t29 = 46289584U;

	t29 = (x241<<((x242==x243)<=x244));

	if (t29 != 4294967294U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x258 = UINT32_MAX;
	int16_t x259 = -1;
	volatile int32_t x260 = INT32_MIN;
	int32_t t30 = 222013;

	t30 = (x257<<((x258==x259)<=x260));

	if (t30 != 14) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x261 = INT8_MAX;
	int32_t x262 = INT32_MIN;
	int8_t x263 = INT8_MIN;
	int8_t x264 = INT8_MAX;

	t31 = (x261<<((x262==x263)<=x264));

	if (t31 != 254) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x269 = 2U;
	int8_t x270 = -1;
	static uint8_t x271 = 2U;
	uint16_t x272 = 1U;
	static int32_t t32 = 0;

	t32 = (x269<<((x270==x271)<=x272));

	if (t32 != 4) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x277 = INT64_MAX;
	int64_t x278 = -1LL;
	uint16_t x279 = 467U;
	int8_t x280 = INT8_MIN;
	volatile int64_t t33 = INT64_MAX;

	t33 = (x277<<((x278==x279)<=x280));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x281 = 2365U;
	uint16_t x282 = 26U;
	volatile int32_t t34 = 4207;

	t34 = (x281<<((x282==x283)<=x284));

	if (t34 != 2365) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x289 = INT64_MAX;
	int16_t x291 = INT16_MAX;
	static int16_t x292 = -3136;
	int64_t t35 = INT64_MAX;

	t35 = (x289<<((x290==x291)<=x292));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x301 = 748U;
	static uint32_t x304 = 20130597U;
	int32_t t36 = 8;

	t36 = (x301<<((x302==x303)<=x304));

	if (t36 != 1496) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x305 = 34101072655700LL;
	uint64_t x307 = 7LLU;
	static int64_t t37 = 9510799LL;

	t37 = (x305<<((x306==x307)<=x308));

	if (t37 != 34101072655700LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x310 = INT8_MAX;
	static int16_t x311 = -1;
	uint64_t t38 = 45LLU;

	t38 = (x309<<((x310==x311)<=x312));

	if (t38 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x313 = UINT16_MAX;
	uint8_t x314 = 78U;
	uint32_t x315 = 1528527U;
	int32_t x316 = -1;
	volatile int32_t t39 = -216;

	t39 = (x313<<((x314==x315)<=x316));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x321 = 3LLU;
	volatile int64_t x322 = INT64_MIN;
	volatile uint8_t x323 = UINT8_MAX;
	static int64_t x324 = -1LL;

	t40 = (x321<<((x322==x323)<=x324));

	if (t40 != 3LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x349 = UINT16_MAX;
	static uint64_t x350 = 3354944LLU;
	uint16_t x351 = UINT16_MAX;
	int32_t t41 = -2930868;

	t41 = (x349<<((x350==x351)<=x352));

	if (t41 != 131070) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x354 = INT16_MIN;
	int64_t x355 = -1LL;
	int32_t t42 = 14;

	t42 = (x353<<((x354==x355)<=x356));

	if (t42 != 5778482) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x357 = UINT64_MAX;
	volatile int64_t x358 = 101763LL;
	volatile int64_t x359 = INT64_MIN;

	t43 = (x357<<((x358==x359)<=x360));

	if (t43 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x361 = 28U;
	static int8_t x362 = -1;
	uint8_t x363 = 0U;
	static int8_t x364 = -8;
	volatile int32_t t44 = 9197;

	t44 = (x361<<((x362==x363)<=x364));

	if (t44 != 28) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x369 = 183379LLU;
	int8_t x370 = INT8_MAX;
	uint16_t x371 = 5U;
	int8_t x372 = INT8_MIN;

	t45 = (x369<<((x370==x371)<=x372));

	if (t45 != 183379LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x385 = INT16_MAX;
	uint8_t x386 = UINT8_MAX;
	int16_t x387 = INT16_MIN;
	int8_t x388 = -1;
	int32_t t46 = -186456;

	t46 = (x385<<((x386==x387)<=x388));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x397 = UINT8_MAX;
	int32_t x398 = -1;
	int64_t x399 = -1LL;
	static int32_t x400 = INT32_MAX;
	volatile int32_t t47 = -2969704;

	t47 = (x397<<((x398==x399)<=x400));

	if (t47 != 510) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x409 = 6714853958766LLU;
	static volatile int64_t x410 = INT64_MIN;
	int16_t x411 = INT16_MIN;
	volatile int64_t x412 = -97961895786046875LL;

	t48 = (x409<<((x410==x411)<=x412));

	if (t48 != 6714853958766LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x413 = 13;
	int16_t x414 = 136;
	static int8_t x415 = INT8_MIN;
	static int32_t x416 = -890;
	volatile int32_t t49 = 6979;

	t49 = (x413<<((x414==x415)<=x416));

	if (t49 != 13) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x419 = -2;

	t50 = (x417<<((x418==x419)<=x420));

	if (t50 != 38) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x430 = 23U;
	int32_t x431 = INT32_MIN;
	int16_t x432 = INT16_MIN;

	t51 = (x429<<((x430==x431)<=x432));

	if (t51 != 2357) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x433 = UINT16_MAX;
	int32_t x434 = INT32_MAX;
	static int64_t x435 = INT64_MAX;
	volatile int32_t t52 = -86977;

	t52 = (x433<<((x434==x435)<=x436));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x437 = 102959545968LLU;
	int8_t x438 = INT8_MIN;
	int32_t x439 = INT32_MAX;
	int64_t x440 = INT64_MIN;
	static volatile uint64_t t53 = 4814178159298LLU;

	t53 = (x437<<((x438==x439)<=x440));

	if (t53 != 102959545968LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x441 = UINT32_MAX;
	volatile int32_t x442 = -3;
	int8_t x443 = INT8_MAX;
	volatile int64_t x444 = INT64_MAX;
	volatile uint32_t t54 = 62096527U;

	t54 = (x441<<((x442==x443)<=x444));

	if (t54 != 4294967294U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x457 = UINT32_MAX;
	uint16_t x458 = 8416U;
	int8_t x459 = INT8_MAX;
	int64_t x460 = INT64_MAX;

	t55 = (x457<<((x458==x459)<=x460));

	if (t55 != 4294967294U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x462 = INT16_MIN;
	int64_t x463 = INT64_MIN;
	int16_t x464 = INT16_MIN;

	t56 = (x461<<((x462==x463)<=x464));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x470 = 1877046U;
	uint16_t x472 = 0U;
	static int32_t t57 = -8771082;

	t57 = (x469<<((x470==x471)<=x472));

	if (t57 != 131070) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x477 = UINT32_MAX;
	uint32_t x478 = 5583384U;
	int16_t x480 = 70;
	uint32_t t58 = 993U;

	t58 = (x477<<((x478==x479)<=x480));

	if (t58 != 4294967294U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x481 = 2;
	uint8_t x482 = UINT8_MAX;
	volatile int8_t x483 = 1;
	volatile int64_t x484 = INT64_MIN;
	static int32_t t59 = -1960;

	t59 = (x481<<((x482==x483)<=x484));

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x485 = 8725929732165018982LLU;
	int64_t x487 = 2854085137LL;
	int64_t x488 = INT64_MIN;

	t60 = (x485<<((x486==x487)<=x488));

	if (t60 != 8725929732165018982LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x494 = UINT32_MAX;
	int64_t x495 = INT64_MIN;
	int32_t x496 = -41;
	volatile uint64_t t61 = 7369008LLU;

	t61 = (x493<<((x494==x495)<=x496));

	if (t61 != 675LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x497 = UINT64_MAX;
	static volatile int64_t x498 = INT64_MIN;
	static int32_t x499 = -1;
	int32_t x500 = INT32_MIN;

	t62 = (x497<<((x498==x499)<=x500));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x501 = UINT16_MAX;
	static uint64_t x502 = 15841533605902LLU;
	static int32_t x503 = INT32_MIN;
	int16_t x504 = INT16_MIN;
	volatile int32_t t63 = -2609581;

	t63 = (x501<<((x502==x503)<=x504));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x506 = -1;
	volatile int8_t x507 = INT8_MIN;
	volatile int8_t x508 = INT8_MIN;
	int32_t t64 = 1626543;

	t64 = (x505<<((x506==x507)<=x508));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x509 = INT16_MAX;
	volatile uint32_t x510 = UINT32_MAX;
	static volatile int16_t x511 = -207;
	uint64_t x512 = 840LLU;
	volatile int32_t t65 = 1;

	t65 = (x509<<((x510==x511)<=x512));

	if (t65 != 65534) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x513 = 3259;
	uint32_t x514 = 230437U;
	int16_t x515 = INT16_MAX;
	int32_t t66 = -153;

	t66 = (x513<<((x514==x515)<=x516));

	if (t66 != 6518) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x517 = 2607353;
	volatile int8_t x518 = INT8_MIN;
	volatile uint16_t x519 = UINT16_MAX;
	int8_t x520 = INT8_MAX;
	static int32_t t67 = -4509;

	t67 = (x517<<((x518==x519)<=x520));

	if (t67 != 5214706) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x525 = 1;
	int16_t x526 = INT16_MIN;
	int8_t x527 = INT8_MAX;
	int32_t x528 = 224859021;
	static volatile int32_t t68 = 65993778;

	t68 = (x525<<((x526==x527)<=x528));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x530 = -1;
	int16_t x531 = -2;
	int64_t x532 = -1LL;
	int32_t t69 = -393164940;

	t69 = (x529<<((x530==x531)<=x532));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x533 = 30624U;
	int64_t x534 = INT64_MIN;
	int64_t x535 = 26821248048654LL;
	int32_t x536 = INT32_MIN;
	int32_t t70 = 4028;

	t70 = (x533<<((x534==x535)<=x536));

	if (t70 != 30624) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x543 = 682;
	uint8_t x544 = UINT8_MAX;
	volatile int64_t t71 = -12477075LL;

	t71 = (x541<<((x542==x543)<=x544));

	if (t71 != 2094724LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x545 = 123U;
	uint8_t x546 = UINT8_MAX;
	static uint8_t x547 = 25U;
	volatile int32_t x548 = INT32_MIN;
	volatile int32_t t72 = -809;

	t72 = (x545<<((x546==x547)<=x548));

	if (t72 != 123) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x553 = 8;
	uint16_t x554 = 0U;
	int16_t x555 = INT16_MIN;
	uint16_t x556 = UINT16_MAX;
	volatile int32_t t73 = -218;

	t73 = (x553<<((x554==x555)<=x556));

	if (t73 != 16) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x557 = 137U;
	int64_t x559 = INT64_MAX;
	volatile int64_t x560 = -1LL;
	static volatile int32_t t74 = 0;

	t74 = (x557<<((x558==x559)<=x560));

	if (t74 != 137) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x573 = INT64_MAX;
	static uint32_t x575 = UINT32_MAX;
	volatile int64_t t75 = INT64_MAX;

	t75 = (x573<<((x574==x575)<=x576));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x581 = UINT64_MAX;
	int8_t x582 = 46;
	uint64_t t76 = 12290856LLU;

	t76 = (x581<<((x582==x583)<=x584));

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x585 = 272701293LL;
	int16_t x586 = 4;
	int8_t x588 = INT8_MIN;
	int64_t t77 = 35889074063LL;

	t77 = (x585<<((x586==x587)<=x588));

	if (t77 != 272701293LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x589 = 8259015409654197370LLU;
	int64_t x590 = -5LL;
	volatile int32_t x591 = -1;
	uint64_t x592 = 132651071LLU;

	t78 = (x589<<((x590==x591)<=x592));

	if (t78 != 16518030819308394740LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x593 = INT16_MAX;
	static int32_t x594 = INT32_MAX;
	uint8_t x596 = 67U;
	int32_t t79 = 68;

	t79 = (x593<<((x594==x595)<=x596));

	if (t79 != 65534) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x610 = INT32_MAX;
	int64_t x611 = 164617498441LL;
	volatile int64_t x612 = -139393010840LL;
	uint32_t t80 = 199517476U;

	t80 = (x609<<((x610==x611)<=x612));

	if (t80 != 113689U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x613 = 307U;
	uint32_t x614 = 3U;
	static volatile uint8_t x616 = 116U;
	uint32_t t81 = 5863U;

	t81 = (x613<<((x614==x615)<=x616));

	if (t81 != 614U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x617 = INT16_MAX;
	int8_t x618 = INT8_MAX;
	uint32_t x619 = 186816020U;
	uint8_t x620 = UINT8_MAX;
	volatile int32_t t82 = -684643479;

	t82 = (x617<<((x618==x619)<=x620));

	if (t82 != 65534) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x621 = INT8_MAX;
	static volatile int32_t x622 = 2560;
	uint16_t x623 = 341U;
	int32_t x624 = INT32_MAX;
	int32_t t83 = -224754;

	t83 = (x621<<((x622==x623)<=x624));

	if (t83 != 254) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x625 = UINT16_MAX;
	static volatile uint32_t x626 = 496138U;
	static int16_t x627 = 1133;
	int32_t t84 = -590;

	t84 = (x625<<((x626==x627)<=x628));

	if (t84 != 131070) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x629 = UINT32_MAX;
	int64_t x631 = INT64_MIN;
	int8_t x632 = -24;
	volatile uint32_t t85 = UINT32_MAX;

	t85 = (x629<<((x630==x631)<=x632));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x638 = -1LL;

	t86 = (x637<<((x638==x639)<=x640));

	if (t86 != 112959667038LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x642 = INT8_MIN;
	int16_t x643 = INT16_MIN;
	int8_t x644 = -1;
	uint32_t t87 = UINT32_MAX;

	t87 = (x641<<((x642==x643)<=x644));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x658 = 233U;
	int8_t x659 = INT8_MIN;
	static uint16_t x660 = UINT16_MAX;
	int32_t t88 = 55941987;

	t88 = (x657<<((x658==x659)<=x660));

	if (t88 != 680169854) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x665 = 41546;
	static volatile int8_t x666 = INT8_MIN;
	int32_t x667 = INT32_MIN;
	int16_t x668 = INT16_MAX;
	int32_t t89 = -93127;

	t89 = (x665<<((x666==x667)<=x668));

	if (t89 != 83092) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x670 = 7U;
	int32_t x671 = -1;
	uint16_t x672 = 31U;
	int32_t t90 = -121660726;

	t90 = (x669<<((x670==x671)<=x672));

	if (t90 != 138) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x673 = INT8_MAX;
	uint16_t x674 = 14835U;
	int32_t x676 = INT32_MIN;

	t91 = (x673<<((x674==x675)<=x676));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x677 = INT8_MAX;
	static int32_t x678 = INT32_MAX;
	volatile int32_t x679 = 56330;
	volatile int32_t t92 = -1;

	t92 = (x677<<((x678==x679)<=x680));

	if (t92 != 254) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x681 = 138514301797293459LL;
	uint32_t x682 = 11U;
	int64_t t93 = -60791017LL;

	t93 = (x681<<((x682==x683)<=x684));

	if (t93 != 138514301797293459LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x687 = UINT64_MAX;
	int8_t x688 = INT8_MIN;
	static volatile int32_t t94 = 4197;

	t94 = (x685<<((x686==x687)<=x688));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x689 = UINT64_MAX;
	volatile int16_t x690 = -1;
	int8_t x691 = INT8_MIN;
	uint64_t t95 = UINT64_MAX;

	t95 = (x689<<((x690==x691)<=x692));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x699 = 1;
	int64_t x700 = -1LL;
	static volatile int32_t t96 = -482586;

	t96 = (x697<<((x698==x699)<=x700));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x701 = UINT64_MAX;
	volatile int16_t x702 = INT16_MIN;
	int8_t x703 = 11;

	t97 = (x701<<((x702==x703)<=x704));

	if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x706 = 0U;
	static int64_t x707 = INT64_MIN;
	int64_t x708 = INT64_MIN;
	int32_t t98 = 3569;

	t98 = (x705<<((x706==x707)<=x708));

	if (t98 != 16202) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x717 = INT8_MAX;
	int32_t x720 = INT32_MIN;

	t99 = (x717<<((x718==x719)<=x720));

	if (t99 != 127) { NG(); } else { ; }
	
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

