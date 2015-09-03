#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = 3847670616LL;
volatile uint8_t x9 = 2U;
int64_t x10 = INT64_MAX;
int32_t x17 = INT32_MAX;
volatile uint64_t x21 = 1LLU;
static int8_t x24 = INT8_MIN;
int16_t x28 = -36;
int32_t x29 = 961013889;
int64_t x30 = -10482449283717LL;
static uint32_t x31 = 508819U;
uint8_t x34 = 0U;
int8_t x36 = INT8_MIN;
int8_t x38 = -1;
uint64_t t8 = 3757945446LLU;
int16_t x42 = INT16_MIN;
volatile int64_t t9 = -8135523118791LL;
int32_t t11 = 485704457;
int32_t x68 = INT32_MIN;
int32_t t12 = 9679;
int32_t x77 = INT32_MAX;
uint8_t x79 = 29U;
volatile uint32_t x81 = 472629815U;
int8_t x100 = INT8_MIN;
uint32_t x101 = 105933000U;
uint32_t t18 = 3702U;
uint32_t x108 = 18417796U;
static volatile int32_t x114 = INT32_MIN;
static volatile uint64_t t21 = 1020388LLU;
volatile int64_t x122 = INT64_MIN;
static int64_t x130 = 55530177411337LL;
uint32_t x132 = 315505U;
int32_t x134 = -1;
int32_t t26 = -11977875;
static uint32_t x187 = 102133088U;
int64_t x188 = -5LL;
int64_t t31 = INT64_MAX;
volatile int32_t t32 = 3585;
static uint32_t x197 = UINT32_MAX;
volatile uint64_t x199 = 1622564024LLU;
uint8_t x200 = 1U;
int64_t x213 = 4331807643003568LL;
int8_t x217 = 2;
static int8_t x219 = INT8_MIN;
static int32_t x225 = INT32_MAX;
static uint32_t x226 = UINT32_MAX;
int32_t x228 = -57364;
volatile int32_t t38 = INT32_MAX;
int8_t x235 = 1;
volatile int8_t x237 = INT8_MAX;
uint32_t x238 = 1414U;
static int32_t x260 = -1;
int16_t x274 = 1;
static volatile uint16_t x317 = 0U;
volatile uint16_t x318 = UINT16_MAX;
int64_t x327 = INT64_MAX;
uint16_t x349 = 2196U;
volatile int16_t x350 = -1077;
static volatile int8_t x352 = 1;
int8_t x357 = INT8_MAX;
int8_t x376 = 4;
volatile int32_t t54 = -30560;
int8_t x381 = INT8_MAX;
static uint64_t x405 = 5520748067LLU;
static int64_t x406 = INT64_MAX;
static int32_t x411 = 143;
int64_t x414 = -1LL;
int16_t x423 = 12001;
static int8_t x426 = 58;
static int8_t x427 = INT8_MAX;
uint32_t t63 = 249547941U;
int16_t x433 = INT16_MAX;
int32_t t64 = 163;
volatile int64_t x447 = INT64_MAX;
uint16_t x454 = 7417U;
int64_t x455 = INT64_MIN;
int32_t x465 = 451154759;
static int8_t x470 = 0;
int8_t x471 = INT8_MAX;
int16_t x478 = -1;
static int16_t x482 = -1;
static uint64_t t73 = 1LLU;
int16_t x494 = -12574;
int64_t x508 = -728803492188LL;
static int16_t x513 = INT16_MAX;
static uint32_t x516 = 0U;
int32_t t79 = -1;
int32_t x530 = INT32_MIN;
uint8_t x539 = 100U;
static uint16_t x546 = UINT16_MAX;
static volatile int32_t t83 = 0;
int16_t x550 = INT16_MIN;
uint16_t x553 = 167U;
volatile int32_t x571 = INT32_MAX;
int32_t t87 = 3088;
volatile uint32_t x573 = 29415016U;
int16_t x580 = INT16_MIN;
int32_t x584 = -1035;
int16_t x587 = -1;
uint32_t x590 = 111U;
int16_t x599 = INT16_MIN;
int16_t x607 = -2900;
int16_t x619 = -381;
static uint32_t x620 = 643U;
int32_t x627 = INT32_MAX;
uint64_t x635 = 339965356LLU;
volatile uint32_t x636 = 379889U;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static uint64_t x2 = 3933800219LLU;
	static volatile int64_t x3 = INT64_MAX;
	volatile uint32_t t0 = 1U;

	t0 = (x1<<((x2<=x3)<=x4));

	if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int32_t x6 = INT32_MAX;
	uint32_t x7 = UINT32_MAX;
	static volatile int16_t x8 = -3;
	static int32_t t1 = 11027;

	t1 = (x5<<((x6<=x7)<=x8));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x11 = INT8_MIN;
	uint32_t x12 = 13880U;
	volatile int32_t t2 = 2;

	t2 = (x9<<((x10<=x11)<=x12));

	if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x18 = 1U;
	int8_t x19 = INT8_MIN;
	int32_t x20 = -7027915;
	int32_t t3 = INT32_MAX;

	t3 = (x17<<((x18<=x19)<=x20));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = INT16_MIN;
	static volatile uint64_t x23 = UINT64_MAX;
	volatile uint64_t t4 = 116954313842LLU;

	t4 = (x21<<((x22<=x23)<=x24));

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = UINT64_MAX;
	volatile int64_t x26 = INT64_MIN;
	uint16_t x27 = UINT16_MAX;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = (x25<<((x26<=x27)<=x28));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x32 = INT16_MAX;
	static int32_t t6 = 132086755;

	t6 = (x29<<((x30<=x31)<=x32));

	if (t6 != 1922027778) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = 24468;
	volatile int8_t x35 = INT8_MIN;
	static int32_t t7 = -254;

	t7 = (x33<<((x34<=x35)<=x36));

	if (t7 != 24468) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 6052LLU;
	int16_t x39 = INT16_MIN;
	int64_t x40 = INT64_MIN;

	t8 = (x37<<((x38<=x39)<=x40));

	if (t8 != 6052LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = 187385128LL;
	int16_t x43 = 0;
	int8_t x44 = INT8_MIN;

	t9 = (x41<<((x42<=x43)<=x44));

	if (t9 != 187385128LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x53 = 98U;
	int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MIN;
	volatile uint16_t x56 = 571U;
	int32_t t10 = 200845;

	t10 = (x53<<((x54<=x55)<=x56));

	if (t10 != 196) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x61 = 2309U;
	int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MIN;
	int64_t x64 = -1LL;

	t11 = (x61<<((x62<=x63)<=x64));

	if (t11 != 2309) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x65 = 49U;
	int32_t x66 = -1;
	int32_t x67 = INT32_MAX;

	t12 = (x65<<((x66<=x67)<=x68));

	if (t12 != 49) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x78 = UINT16_MAX;
	int16_t x80 = INT16_MIN;
	volatile int32_t t13 = INT32_MAX;

	t13 = (x77<<((x78<=x79)<=x80));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x82 = INT64_MAX;
	int32_t x83 = -1;
	int32_t x84 = 214;
	volatile uint32_t t14 = 10540844U;

	t14 = (x81<<((x82<=x83)<=x84));

	if (t14 != 945259630U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x85 = INT16_MAX;
	int16_t x86 = -1;
	volatile uint32_t x87 = UINT32_MAX;
	int64_t x88 = INT64_MAX;
	volatile int32_t t15 = -877;

	t15 = (x85<<((x86<=x87)<=x88));

	if (t15 != 65534) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x89 = 48U;
	int16_t x90 = INT16_MAX;
	int32_t x91 = -1;
	uint32_t x92 = 129524180U;
	volatile int32_t t16 = 143571;

	t16 = (x89<<((x90<=x91)<=x92));

	if (t16 != 96) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = INT64_MAX;
	int64_t x98 = INT64_MIN;
	int32_t x99 = -58851;
	int64_t t17 = INT64_MAX;

	t17 = (x97<<((x98<=x99)<=x100));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x102 = INT8_MAX;
	volatile int16_t x103 = 0;
	volatile int8_t x104 = INT8_MIN;

	t18 = (x101<<((x102<=x103)<=x104));

	if (t18 != 105933000U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x105 = 0U;
	uint16_t x106 = 1997U;
	int32_t x107 = INT32_MAX;
	int32_t t19 = 0;

	t19 = (x105<<((x106<=x107)<=x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x109 = 80829LL;
	static int64_t x110 = INT64_MIN;
	volatile uint64_t x111 = UINT64_MAX;
	int16_t x112 = INT16_MIN;
	volatile int64_t t20 = -1LL;

	t20 = (x109<<((x110<=x111)<=x112));

	if (t20 != 80829LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x113 = 203678319877878513LLU;
	static uint16_t x115 = 115U;
	volatile uint32_t x116 = 91U;

	t21 = (x113<<((x114<=x115)<=x116));

	if (t21 != 407356639755757026LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x117 = 4U;
	int16_t x118 = INT16_MIN;
	static int16_t x119 = INT16_MAX;
	int16_t x120 = -1191;
	uint32_t t22 = 21U;

	t22 = (x117<<((x118<=x119)<=x120));

	if (t22 != 4U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x121 = UINT8_MAX;
	uint8_t x123 = 88U;
	int16_t x124 = INT16_MIN;
	static int32_t t23 = -1;

	t23 = (x121<<((x122<=x123)<=x124));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x129 = 40310093841524LLU;
	static int64_t x131 = 32906811LL;
	uint64_t t24 = 793129868335186271LLU;

	t24 = (x129<<((x130<=x131)<=x132));

	if (t24 != 80620187683048LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x133 = INT64_MAX;
	uint16_t x135 = 616U;
	int16_t x136 = -12976;
	volatile int64_t t25 = INT64_MAX;

	t25 = (x133<<((x134<=x135)<=x136));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x137 = 114753385;
	volatile int64_t x138 = INT64_MIN;
	uint64_t x139 = 8159133957406383631LLU;
	int8_t x140 = INT8_MIN;

	t26 = (x137<<((x138<=x139)<=x140));

	if (t26 != 114753385) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x145 = 3611020872973LL;
	int64_t x146 = -52667LL;
	uint8_t x147 = 3U;
	int16_t x148 = INT16_MIN;
	volatile int64_t t27 = 664613LL;

	t27 = (x145<<((x146<=x147)<=x148));

	if (t27 != 3611020872973LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x149 = UINT32_MAX;
	uint64_t x150 = 918LLU;
	uint64_t x151 = 4236705837LLU;
	int16_t x152 = 946;
	volatile uint32_t t28 = 2U;

	t28 = (x149<<((x150<=x151)<=x152));

	if (t28 != 4294967294U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x153 = 2U;
	int64_t x154 = INT64_MAX;
	int64_t x155 = -236933LL;
	volatile int32_t x156 = INT32_MIN;
	int32_t t29 = -39395;

	t29 = (x153<<((x154<=x155)<=x156));

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x177 = 31U;
	static int64_t x178 = INT64_MIN;
	int64_t x179 = INT64_MIN;
	uint64_t x180 = UINT64_MAX;
	int32_t t30 = 254;

	t30 = (x177<<((x178<=x179)<=x180));

	if (t30 != 62) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x185 = INT64_MAX;
	int32_t x186 = 13;

	t31 = (x185<<((x186<=x187)<=x188));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x193 = UINT8_MAX;
	int8_t x194 = 13;
	uint32_t x195 = UINT32_MAX;
	uint8_t x196 = 4U;

	t32 = (x193<<((x194<=x195)<=x196));

	if (t32 != 510) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x198 = INT16_MIN;
	uint32_t t33 = 448U;

	t33 = (x197<<((x198<=x199)<=x200));

	if (t33 != 4294967294U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x201 = UINT32_MAX;
	uint64_t x202 = UINT64_MAX;
	int8_t x203 = INT8_MAX;
	int16_t x204 = -6;
	static uint32_t t34 = UINT32_MAX;

	t34 = (x201<<((x202<=x203)<=x204));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x205 = 6U;
	static int8_t x206 = INT8_MIN;
	int16_t x207 = 268;
	static int8_t x208 = 1;
	int32_t t35 = -88393263;

	t35 = (x205<<((x206<=x207)<=x208));

	if (t35 != 12) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x214 = UINT16_MAX;
	int64_t x215 = 267486159156LL;
	int8_t x216 = INT8_MAX;
	int64_t t36 = -6291775LL;

	t36 = (x213<<((x214<=x215)<=x216));

	if (t36 != 8663615286007136LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x218 = 1U;
	uint64_t x220 = 193292251665LLU;
	int32_t t37 = 480144;

	t37 = (x217<<((x218<=x219)<=x220));

	if (t37 != 4) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x227 = 93198040897729630LL;

	t38 = (x225<<((x226<=x227)<=x228));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x233 = 5;
	uint32_t x234 = UINT32_MAX;
	volatile int8_t x236 = 8;
	int32_t t39 = 11;

	t39 = (x233<<((x234<=x235)<=x236));

	if (t39 != 10) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x239 = INT16_MAX;
	volatile int64_t x240 = 1229221LL;
	int32_t t40 = 412;

	t40 = (x237<<((x238<=x239)<=x240));

	if (t40 != 254) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x253 = UINT64_MAX;
	volatile int64_t x254 = INT64_MIN;
	int64_t x255 = -128391451LL;
	int64_t x256 = INT64_MIN;
	uint64_t t41 = UINT64_MAX;

	t41 = (x253<<((x254<=x255)<=x256));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x257 = 1;
	int8_t x258 = -1;
	volatile int8_t x259 = INT8_MIN;
	static volatile int32_t t42 = -3735;

	t42 = (x257<<((x258<=x259)<=x260));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x261 = 34289599819760LLU;
	int64_t x262 = -48899004222LL;
	static volatile int8_t x263 = -1;
	static int64_t x264 = INT64_MIN;
	volatile uint64_t t43 = 1457472585855960731LLU;

	t43 = (x261<<((x262<=x263)<=x264));

	if (t43 != 34289599819760LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x273 = UINT32_MAX;
	int16_t x275 = 190;
	volatile uint8_t x276 = 15U;
	uint32_t t44 = 171276U;

	t44 = (x273<<((x274<=x275)<=x276));

	if (t44 != 4294967294U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x277 = 5U;
	static int32_t x278 = INT32_MAX;
	static int16_t x279 = -193;
	int8_t x280 = 9;
	volatile int32_t t45 = 64;

	t45 = (x277<<((x278<=x279)<=x280));

	if (t45 != 10) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x281 = INT16_MAX;
	static uint8_t x282 = 1U;
	volatile uint64_t x283 = 29206102462582885LLU;
	int32_t x284 = INT32_MAX;
	static int32_t t46 = 371205873;

	t46 = (x281<<((x282<=x283)<=x284));

	if (t46 != 65534) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x305 = UINT32_MAX;
	volatile uint16_t x306 = 21U;
	int16_t x307 = INT16_MIN;
	int32_t x308 = -61090;
	uint32_t t47 = UINT32_MAX;

	t47 = (x305<<((x306<=x307)<=x308));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x319 = 16217U;
	static uint8_t x320 = UINT8_MAX;
	volatile int32_t t48 = 6634707;

	t48 = (x317<<((x318<=x319)<=x320));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x325 = INT16_MAX;
	static int32_t x326 = -1;
	uint64_t x328 = UINT64_MAX;
	volatile int32_t t49 = -1;

	t49 = (x325<<((x326<=x327)<=x328));

	if (t49 != 65534) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x329 = 13U;
	int8_t x330 = -1;
	int16_t x331 = -14;
	static int64_t x332 = INT64_MAX;
	int32_t t50 = -123111;

	t50 = (x329<<((x330<=x331)<=x332));

	if (t50 != 26) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x351 = 132U;
	volatile int32_t t51 = -114;

	t51 = (x349<<((x350<=x351)<=x352));

	if (t51 != 4392) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x353 = 27751;
	uint16_t x354 = UINT16_MAX;
	static volatile int16_t x355 = -1;
	static int32_t x356 = -1;
	static volatile int32_t t52 = 777899123;

	t52 = (x353<<((x354<=x355)<=x356));

	if (t52 != 27751) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x358 = -1;
	volatile int32_t x359 = 10741;
	volatile int64_t x360 = INT64_MAX;
	volatile int32_t t53 = -229365283;

	t53 = (x357<<((x358<=x359)<=x360));

	if (t53 != 254) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x373 = 74U;
	static int64_t x374 = 962697647356901LL;
	static int8_t x375 = -15;

	t54 = (x373<<((x374<=x375)<=x376));

	if (t54 != 148) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x377 = 59U;
	static int8_t x378 = INT8_MIN;
	int16_t x379 = 45;
	volatile int8_t x380 = 0;
	volatile int32_t t55 = -917;

	t55 = (x377<<((x378<=x379)<=x380));

	if (t55 != 59) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x382 = INT32_MIN;
	volatile int64_t x383 = INT64_MIN;
	uint8_t x384 = 61U;
	volatile int32_t t56 = -934054;

	t56 = (x381<<((x382<=x383)<=x384));

	if (t56 != 254) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x385 = 380549966LLU;
	int8_t x386 = INT8_MAX;
	int8_t x387 = -1;
	static uint8_t x388 = 0U;
	static uint64_t t57 = 160659100079223LLU;

	t57 = (x385<<((x386<=x387)<=x388));

	if (t57 != 761099932LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x401 = 179865422LLU;
	static int16_t x402 = INT16_MIN;
	uint32_t x403 = UINT32_MAX;
	int64_t x404 = INT64_MIN;
	volatile uint64_t t58 = 583213LLU;

	t58 = (x401<<((x402<=x403)<=x404));

	if (t58 != 179865422LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x407 = -1;
	volatile int8_t x408 = -1;
	static volatile uint64_t t59 = 780586572486354308LLU;

	t59 = (x405<<((x406<=x407)<=x408));

	if (t59 != 5520748067LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x409 = INT64_MAX;
	int8_t x410 = 1;
	int16_t x412 = 0;
	volatile int64_t t60 = INT64_MAX;

	t60 = (x409<<((x410<=x411)<=x412));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x413 = INT16_MAX;
	volatile uint64_t x415 = UINT64_MAX;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t61 = -16;

	t61 = (x413<<((x414<=x415)<=x416));

	if (t61 != 65534) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x421 = INT32_MAX;
	int8_t x422 = -1;
	int16_t x424 = -1;
	static int32_t t62 = INT32_MAX;

	t62 = (x421<<((x422<=x423)<=x424));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x425 = UINT32_MAX;
	volatile int64_t x428 = INT64_MAX;

	t63 = (x425<<((x426<=x427)<=x428));

	if (t63 != 4294967294U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x434 = UINT8_MAX;
	int64_t x435 = INT64_MAX;
	volatile int64_t x436 = INT64_MIN;

	t64 = (x433<<((x434<=x435)<=x436));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x437 = 0U;
	static volatile uint8_t x438 = UINT8_MAX;
	uint16_t x439 = UINT16_MAX;
	static int16_t x440 = INT16_MIN;
	int32_t t65 = -1456725;

	t65 = (x437<<((x438<=x439)<=x440));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x441 = 9U;
	static int16_t x442 = -6;
	int32_t x443 = INT32_MIN;
	static int8_t x444 = -1;
	int32_t t66 = 31261;

	t66 = (x441<<((x442<=x443)<=x444));

	if (t66 != 9) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x445 = 19;
	int16_t x446 = INT16_MIN;
	int16_t x448 = INT16_MIN;
	volatile int32_t t67 = -1;

	t67 = (x445<<((x446<=x447)<=x448));

	if (t67 != 19) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x453 = 49650U;
	int16_t x456 = 768;
	uint32_t t68 = 11127U;

	t68 = (x453<<((x454<=x455)<=x456));

	if (t68 != 99300U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x466 = INT8_MAX;
	static int8_t x467 = INT8_MIN;
	int16_t x468 = -1;
	volatile int32_t t69 = 171317208;

	t69 = (x465<<((x466<=x467)<=x468));

	if (t69 != 451154759) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x469 = 3162U;
	static int32_t x472 = INT32_MAX;
	volatile int32_t t70 = -713508;

	t70 = (x469<<((x470<=x471)<=x472));

	if (t70 != 6324) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x473 = 8192157362923LLU;
	volatile int16_t x474 = -1;
	int64_t x475 = INT64_MIN;
	int16_t x476 = -1;
	static volatile uint64_t t71 = 5246500324LLU;

	t71 = (x473<<((x474<=x475)<=x476));

	if (t71 != 8192157362923LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x477 = UINT64_MAX;
	uint16_t x479 = 400U;
	volatile uint64_t x480 = 1480033415699LLU;
	uint64_t t72 = 128921225377974001LLU;

	t72 = (x477<<((x478<=x479)<=x480));

	if (t72 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x481 = UINT64_MAX;
	int16_t x483 = -54;
	int8_t x484 = INT8_MAX;

	t73 = (x481<<((x482<=x483)<=x484));

	if (t73 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x493 = 15U;
	static int32_t x495 = -2702;
	int16_t x496 = -1;
	static uint32_t t74 = 1U;

	t74 = (x493<<((x494<=x495)<=x496));

	if (t74 != 15U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x497 = INT16_MAX;
	int32_t x498 = -55471;
	uint32_t x499 = UINT32_MAX;
	int64_t x500 = -503958LL;
	volatile int32_t t75 = 64350;

	t75 = (x497<<((x498<=x499)<=x500));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x501 = 28;
	volatile int64_t x502 = INT64_MIN;
	int8_t x503 = INT8_MIN;
	int8_t x504 = 1;
	static volatile int32_t t76 = 17333;

	t76 = (x501<<((x502<=x503)<=x504));

	if (t76 != 56) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x505 = 23U;
	volatile uint16_t x506 = 591U;
	volatile int8_t x507 = INT8_MIN;
	static int32_t t77 = -8755;

	t77 = (x505<<((x506<=x507)<=x508));

	if (t77 != 23) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x509 = UINT16_MAX;
	static int8_t x510 = 1;
	int8_t x511 = 1;
	int16_t x512 = INT16_MIN;
	static int32_t t78 = 244;

	t78 = (x509<<((x510<=x511)<=x512));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x514 = -35;
	int64_t x515 = -1LL;

	t79 = (x513<<((x514<=x515)<=x516));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x529 = UINT16_MAX;
	static int32_t x531 = INT32_MAX;
	int32_t x532 = INT32_MAX;
	volatile int32_t t80 = 13406854;

	t80 = (x529<<((x530<=x531)<=x532));

	if (t80 != 131070) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x533 = 0U;
	int64_t x534 = INT64_MIN;
	int64_t x535 = INT64_MIN;
	uint16_t x536 = UINT16_MAX;
	volatile int32_t t81 = -410;

	t81 = (x533<<((x534<=x535)<=x536));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x537 = INT64_MAX;
	int16_t x538 = -1;
	volatile int32_t x540 = -1;
	volatile int64_t t82 = INT64_MAX;

	t82 = (x537<<((x538<=x539)<=x540));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x545 = 0;
	uint16_t x547 = UINT16_MAX;
	uint64_t x548 = 276033418842351539LLU;

	t83 = (x545<<((x546<=x547)<=x548));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x549 = INT8_MAX;
	int8_t x551 = 0;
	uint32_t x552 = 3U;
	volatile int32_t t84 = -161067;

	t84 = (x549<<((x550<=x551)<=x552));

	if (t84 != 254) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x554 = 3499U;
	uint32_t x555 = 339420U;
	static uint16_t x556 = 0U;
	volatile int32_t t85 = 14452;

	t85 = (x553<<((x554<=x555)<=x556));

	if (t85 != 167) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x565 = 19U;
	int64_t x566 = -2016638LL;
	int16_t x567 = INT16_MIN;
	uint8_t x568 = 1U;
	volatile int32_t t86 = 10798;

	t86 = (x565<<((x566<=x567)<=x568));

	if (t86 != 38) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x569 = UINT8_MAX;
	uint64_t x570 = 181079LLU;
	uint8_t x572 = 0U;

	t87 = (x569<<((x570<=x571)<=x572));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x574 = 2474908254961317LLU;
	int16_t x575 = -1;
	int8_t x576 = -1;
	volatile uint32_t t88 = 2724U;

	t88 = (x573<<((x574<=x575)<=x576));

	if (t88 != 29415016U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x577 = UINT8_MAX;
	int64_t x578 = 1074175LL;
	int8_t x579 = -1;
	int32_t t89 = -181;

	t89 = (x577<<((x578<=x579)<=x580));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x581 = 148760LL;
	int16_t x582 = INT16_MIN;
	static uint16_t x583 = UINT16_MAX;
	volatile int64_t t90 = 0LL;

	t90 = (x581<<((x582<=x583)<=x584));

	if (t90 != 148760LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x585 = 1;
	uint8_t x586 = UINT8_MAX;
	int16_t x588 = INT16_MAX;
	int32_t t91 = 12;

	t91 = (x585<<((x586<=x587)<=x588));

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x589 = INT32_MAX;
	static volatile uint8_t x591 = 50U;
	int16_t x592 = -1;
	int32_t t92 = INT32_MAX;

	t92 = (x589<<((x590<=x591)<=x592));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x597 = UINT64_MAX;
	uint8_t x598 = 0U;
	static uint16_t x600 = UINT16_MAX;
	volatile uint64_t t93 = 1LLU;

	t93 = (x597<<((x598<=x599)<=x600));

	if (t93 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x605 = UINT64_MAX;
	int16_t x606 = INT16_MAX;
	volatile int8_t x608 = -23;
	uint64_t t94 = UINT64_MAX;

	t94 = (x605<<((x606<=x607)<=x608));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x613 = 6996;
	static uint8_t x614 = 4U;
	uint8_t x615 = UINT8_MAX;
	volatile uint8_t x616 = 12U;
	static int32_t t95 = -13051752;

	t95 = (x613<<((x614<=x615)<=x616));

	if (t95 != 13992) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x617 = INT16_MAX;
	int64_t x618 = -6250703534111594LL;
	volatile int32_t t96 = -1317;

	t96 = (x617<<((x618<=x619)<=x620));

	if (t96 != 65534) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x625 = INT16_MAX;
	int32_t x626 = -1;
	static uint64_t x628 = 301827413LLU;
	int32_t t97 = -675344;

	t97 = (x625<<((x626<=x627)<=x628));

	if (t97 != 65534) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x629 = 0U;
	int8_t x630 = INT8_MAX;
	uint64_t x631 = UINT64_MAX;
	static int8_t x632 = -1;
	int32_t t98 = 15570;

	t98 = (x629<<((x630<=x631)<=x632));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x633 = 14181985LL;
	int64_t x634 = INT64_MIN;
	volatile int64_t t99 = 14LL;

	t99 = (x633<<((x634<=x635)<=x636));

	if (t99 != 28363970LL) { NG(); } else { ; }
	
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

