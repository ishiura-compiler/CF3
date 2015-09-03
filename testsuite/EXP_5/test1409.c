#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x6 = 8337863528172LLU;
int64_t x13 = INT64_MAX;
int16_t x18 = INT16_MIN;
int32_t t3 = -114477792;
volatile int64_t x27 = 2785116927036519248LL;
static volatile int32_t t4 = 825221;
int32_t x42 = INT32_MAX;
int64_t x44 = INT64_MIN;
int64_t x73 = INT64_MIN;
int8_t x74 = INT8_MAX;
uint64_t x75 = 9175898290253548792LLU;
static int32_t t12 = -4316052;
int8_t x110 = 16;
int16_t x112 = INT16_MAX;
int16_t x115 = -16;
int64_t x117 = -202887989098LL;
int8_t x120 = 3;
static volatile int16_t x161 = 24;
uint16_t x163 = 1755U;
volatile uint32_t x184 = UINT32_MAX;
uint32_t x191 = UINT32_MAX;
uint8_t x208 = UINT8_MAX;
volatile uint32_t x216 = 59U;
volatile int8_t x217 = -1;
int64_t x220 = INT64_MIN;
int64_t t26 = -542LL;
static int32_t x239 = 50;
volatile int16_t x255 = INT16_MAX;
int64_t x257 = -1LL;
static int64_t t31 = -60122LL;
uint16_t x280 = 2U;
uint16_t x286 = UINT16_MAX;
static uint16_t x315 = 6914U;
int8_t x337 = INT8_MIN;
uint32_t x338 = 1U;
volatile int32_t x339 = 1047426;
static volatile uint64_t t37 = 5256463035LLU;
int64_t x353 = 555963509700009LL;
int8_t x355 = INT8_MIN;
int32_t x357 = -496680;
int64_t t39 = 1308581095527162510LL;
static volatile uint32_t x378 = UINT32_MAX;
int64_t x380 = INT64_MIN;
volatile int64_t x398 = INT64_MIN;
int16_t x409 = -1;
static volatile uint32_t x415 = UINT32_MAX;
volatile int32_t t44 = -949;
static volatile int16_t x425 = -1;
static uint8_t x433 = UINT8_MAX;
static int16_t x434 = INT16_MIN;
int64_t x456 = INT64_MIN;
static int64_t x460 = INT64_MIN;
int64_t t50 = 60969704247914977LL;
int64_t x492 = -217796483634743989LL;
static int16_t x503 = -1;
uint64_t t53 = 7519LLU;
static volatile int16_t x518 = INT16_MIN;
int8_t x531 = -1;
volatile uint64_t t55 = 19976592LLU;
static int16_t x548 = INT16_MIN;
int32_t x550 = INT32_MIN;
uint16_t x563 = UINT16_MAX;
static volatile int32_t t58 = -18753;
int64_t x565 = -1LL;
int16_t x567 = 7142;
static volatile uint32_t t64 = 1054336U;
uint64_t x645 = 8486182LLU;
volatile uint64_t t65 = 154485690492432275LLU;
volatile uint32_t x651 = UINT32_MAX;
static int32_t x652 = INT32_MIN;
uint8_t x664 = UINT8_MAX;
volatile uint32_t t67 = 28802697U;
int64_t x673 = INT64_MIN;
static int16_t x685 = -1;
int8_t x691 = 0;
static int64_t x695 = INT64_MAX;
uint16_t x698 = 0U;
uint32_t x710 = 142529057U;
uint64_t x711 = 439884658845LLU;
uint16_t x739 = 1U;
int32_t x740 = INT32_MAX;
int32_t t76 = -7165;
static uint8_t x745 = UINT8_MAX;
volatile int32_t x747 = -1;
volatile int32_t t78 = 124841333;
int8_t x761 = INT8_MAX;
int8_t x762 = 51;
static volatile int32_t t79 = 9215564;
int32_t x766 = INT32_MIN;
int8_t x767 = 4;
uint64_t t82 = 0LLU;
uint32_t t84 = 1997U;
volatile int32_t t85 = -818;
uint64_t x826 = 3LLU;
volatile uint32_t t86 = 1138U;
uint16_t x853 = UINT16_MAX;
uint16_t x860 = 779U;
static int32_t x888 = 10652;
uint8_t x905 = 0U;
static volatile int32_t t92 = 2461760;
int64_t x916 = 483735860892LL;
int16_t x923 = -91;
volatile int32_t t94 = -361391932;
int32_t t95 = 1926;
static int8_t x942 = INT8_MIN;
int8_t x943 = -1;
int16_t x944 = -102;
volatile uint64_t x957 = UINT64_MAX;
static uint16_t x966 = 5U;


void f0(void) {
	int8_t x5 = 0;
	volatile int64_t x7 = -2918LL;
	static uint64_t x8 = 4182035315025252141LLU;
	volatile uint64_t t0 = 12LLU;

	t0 = (x5%((x6<x7)%x8));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x14 = 1000LLU;
	int64_t x15 = -1LL;
	int32_t x16 = INT32_MIN;
	int64_t t1 = 2304099563LL;

	t1 = (x13%((x14<x15)%x16));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x17 = -1;
	int8_t x19 = INT8_MIN;
	int16_t x20 = 3;
	volatile int32_t t2 = 345;

	t2 = (x17%((x18<x19)%x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = -1;
	int8_t x22 = INT8_MIN;
	int32_t x23 = 3228;
	uint16_t x24 = UINT16_MAX;

	t3 = (x21%((x22<x23)%x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x25 = UINT8_MAX;
	int32_t x26 = -28267925;
	int32_t x28 = INT32_MAX;

	t4 = (x25%((x26<x27)%x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x29 = 3333196LLU;
	volatile uint64_t x30 = 3LLU;
	int64_t x31 = -12180899760200LL;
	uint64_t x32 = 6LLU;
	uint64_t t5 = 2344LLU;

	t5 = (x29%((x30<x31)%x32));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x41 = UINT32_MAX;
	uint64_t x43 = UINT64_MAX;
	volatile int64_t t6 = -2507042LL;

	t6 = (x41%((x42<x43)%x44));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x61 = -1;
	int32_t x62 = -379;
	int8_t x63 = -1;
	uint8_t x64 = 2U;
	static volatile int32_t t7 = -39663314;

	t7 = (x61%((x62<x63)%x64));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x65 = 2074851;
	static int32_t x66 = 347;
	uint64_t x67 = 7521449984LLU;
	int32_t x68 = INT32_MIN;
	static int32_t t8 = -457059597;

	t8 = (x65%((x66<x67)%x68));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x76 = INT16_MIN;
	static volatile int64_t t9 = -16122750589194290LL;

	t9 = (x73%((x74<x75)%x76));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x77 = 1LLU;
	volatile int32_t x78 = -1;
	uint8_t x79 = UINT8_MAX;
	int32_t x80 = INT32_MIN;
	volatile uint64_t t10 = 1LLU;

	t10 = (x77%((x78<x79)%x80));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x93 = 1790;
	volatile int32_t x94 = -68241718;
	uint16_t x95 = 1487U;
	uint32_t x96 = 493U;
	uint32_t t11 = 109U;

	t11 = (x93%((x94<x95)%x96));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x101 = 3U;
	static int32_t x102 = -1;
	uint16_t x103 = UINT16_MAX;
	static int8_t x104 = -48;

	t12 = (x101%((x102<x103)%x104));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x109 = 0U;
	uint32_t x111 = 239U;
	volatile int32_t t13 = 530688;

	t13 = (x109%((x110<x111)%x112));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x113 = UINT16_MAX;
	static int32_t x114 = INT32_MIN;
	int16_t x116 = INT16_MAX;
	int32_t t14 = 685288477;

	t14 = (x113%((x114<x115)%x116));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x118 = INT64_MIN;
	volatile int8_t x119 = INT8_MIN;
	volatile int64_t t15 = -133837230LL;

	t15 = (x117%((x118<x119)%x120));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x129 = UINT64_MAX;
	int64_t x130 = -81833105288713LL;
	int16_t x131 = INT16_MIN;
	volatile uint16_t x132 = 216U;
	volatile uint64_t t16 = 1356979352689LLU;

	t16 = (x129%((x130<x131)%x132));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x145 = INT8_MIN;
	uint32_t x146 = 39U;
	uint64_t x147 = 11147504916LLU;
	static volatile uint8_t x148 = 106U;
	static int32_t t17 = -6674584;

	t17 = (x145%((x146<x147)%x148));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x153 = UINT8_MAX;
	uint32_t x154 = 2031349169U;
	static volatile int8_t x155 = -1;
	static uint16_t x156 = UINT16_MAX;
	int32_t t18 = -1631069;

	t18 = (x153%((x154<x155)%x156));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x162 = UINT8_MAX;
	static volatile int8_t x164 = -6;
	int32_t t19 = 271156099;

	t19 = (x161%((x162<x163)%x164));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x181 = 0U;
	int64_t x182 = INT64_MIN;
	uint32_t x183 = 3U;
	volatile uint32_t t20 = 4404U;

	t20 = (x181%((x182<x183)%x184));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x189 = -1LL;
	int16_t x190 = INT16_MAX;
	int32_t x192 = INT32_MAX;
	volatile int64_t t21 = -248025203LL;

	t21 = (x189%((x190<x191)%x192));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x205 = 86;
	volatile int64_t x206 = INT64_MIN;
	volatile int16_t x207 = 1;
	static volatile int32_t t22 = 1;

	t22 = (x205%((x206<x207)%x208));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x209 = -9;
	volatile int16_t x210 = INT16_MIN;
	static int8_t x211 = INT8_MAX;
	static int64_t x212 = INT64_MIN;
	int64_t t23 = -3591LL;

	t23 = (x209%((x210<x211)%x212));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x213 = 0;
	static volatile uint32_t x214 = 267164367U;
	volatile int8_t x215 = INT8_MIN;
	static volatile uint32_t t24 = 4090U;

	t24 = (x213%((x214<x215)%x216));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x218 = -3;
	static int16_t x219 = -1;
	static volatile int64_t t25 = -511LL;

	t25 = (x217%((x218<x219)%x220));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x221 = INT64_MIN;
	volatile int32_t x222 = INT32_MIN;
	static uint16_t x223 = UINT16_MAX;
	int32_t x224 = INT32_MAX;

	t26 = (x221%((x222<x223)%x224));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x237 = INT32_MIN;
	int16_t x238 = INT16_MIN;
	volatile int16_t x240 = INT16_MIN;
	int32_t t27 = -215892;

	t27 = (x237%((x238<x239)%x240));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x241 = 14534U;
	int32_t x242 = -506319462;
	static uint8_t x243 = 61U;
	static volatile int64_t x244 = INT64_MIN;
	static int64_t t28 = 236LL;

	t28 = (x241%((x242<x243)%x244));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x245 = INT64_MIN;
	volatile uint32_t x246 = 0U;
	int64_t x247 = 2141LL;
	int16_t x248 = 7;
	volatile int64_t t29 = 8838366414311134LL;

	t29 = (x245%((x246<x247)%x248));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x253 = UINT16_MAX;
	int16_t x254 = -362;
	int32_t x256 = INT32_MAX;
	int32_t t30 = 10747;

	t30 = (x253%((x254<x255)%x256));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x258 = 43U;
	static uint16_t x259 = 1991U;
	volatile int8_t x260 = INT8_MAX;

	t31 = (x257%((x258<x259)%x260));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x273 = 17U;
	uint32_t x274 = 120U;
	int64_t x275 = INT64_MAX;
	volatile int64_t x276 = INT64_MIN;
	volatile int64_t t32 = -21LL;

	t32 = (x273%((x274<x275)%x276));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x277 = 203111464U;
	static int16_t x278 = -1;
	uint8_t x279 = 87U;
	uint32_t t33 = 96976583U;

	t33 = (x277%((x278<x279)%x280));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x285 = -206LL;
	uint64_t x287 = UINT64_MAX;
	int16_t x288 = INT16_MIN;
	volatile int64_t t34 = 7195256LL;

	t34 = (x285%((x286<x287)%x288));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x313 = INT8_MIN;
	static int64_t x314 = INT64_MIN;
	uint32_t x316 = 5259U;
	uint32_t t35 = 153309U;

	t35 = (x313%((x314<x315)%x316));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x329 = -1;
	int64_t x330 = 15LL;
	uint16_t x331 = 615U;
	static uint32_t x332 = UINT32_MAX;
	volatile uint32_t t36 = 3484033U;

	t36 = (x329%((x330<x331)%x332));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x340 = 325LLU;

	t37 = (x337%((x338<x339)%x340));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x354 = -12901;
	static volatile int64_t x356 = INT64_MIN;
	int64_t t38 = -1817321554440273513LL;

	t38 = (x353%((x354<x355)%x356));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x358 = 2131689283937954LLU;
	int16_t x359 = INT16_MIN;
	int64_t x360 = INT64_MIN;

	t39 = (x357%((x358<x359)%x360));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x373 = INT16_MIN;
	static uint8_t x374 = 21U;
	int64_t x375 = INT64_MAX;
	uint64_t x376 = 124160286724761LLU;
	volatile uint64_t t40 = 31189026078933669LLU;

	t40 = (x373%((x374<x375)%x376));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x377 = INT16_MIN;
	uint64_t x379 = UINT64_MAX;
	volatile int64_t t41 = 562062632002993LL;

	t41 = (x377%((x378<x379)%x380));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x397 = -1;
	int8_t x399 = INT8_MIN;
	volatile int64_t x400 = 1450597846LL;
	int64_t t42 = 2709258083107LL;

	t42 = (x397%((x398<x399)%x400));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x410 = -142;
	volatile int8_t x411 = INT8_MAX;
	static uint64_t x412 = UINT64_MAX;
	uint64_t t43 = 1954543036393277459LLU;

	t43 = (x409%((x410<x411)%x412));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x413 = 3325U;
	static int16_t x414 = INT16_MIN;
	int32_t x416 = INT32_MIN;

	t44 = (x413%((x414<x415)%x416));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x417 = INT8_MAX;
	int16_t x418 = INT16_MAX;
	static volatile uint16_t x419 = UINT16_MAX;
	uint64_t x420 = 5676453744019LLU;
	static volatile uint64_t t45 = 484245866243507LLU;

	t45 = (x417%((x418<x419)%x420));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x426 = INT64_MIN;
	uint8_t x427 = 1U;
	static int8_t x428 = -27;
	volatile int32_t t46 = 3602;

	t46 = (x425%((x426<x427)%x428));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x435 = UINT16_MAX;
	uint64_t x436 = 448703LLU;
	volatile uint64_t t47 = 411355LLU;

	t47 = (x433%((x434<x435)%x436));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x453 = INT16_MIN;
	int8_t x454 = INT8_MIN;
	volatile uint8_t x455 = 47U;
	volatile int64_t t48 = -96843176911992391LL;

	t48 = (x453%((x454<x455)%x456));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x457 = 1998270462LL;
	int16_t x458 = INT16_MIN;
	int64_t x459 = INT64_MAX;
	volatile int64_t t49 = -3110411LL;

	t49 = (x457%((x458<x459)%x460));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x461 = 309457295LL;
	uint32_t x462 = 813406124U;
	static int8_t x463 = -30;
	int8_t x464 = INT8_MIN;

	t50 = (x461%((x462<x463)%x464));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x489 = -1;
	volatile int64_t x490 = INT64_MAX;
	uint64_t x491 = UINT64_MAX;
	int64_t t51 = -817064072632LL;

	t51 = (x489%((x490<x491)%x492));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x501 = 37637463LLU;
	int64_t x502 = INT64_MIN;
	int32_t x504 = INT32_MAX;
	volatile uint64_t t52 = 11309533LLU;

	t52 = (x501%((x502<x503)%x504));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x505 = -1;
	volatile int8_t x506 = -1;
	static int64_t x507 = 10948855981612379LL;
	uint64_t x508 = 3641980424554278111LLU;

	t53 = (x505%((x506<x507)%x508));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x517 = INT32_MAX;
	int64_t x519 = 133LL;
	int32_t x520 = -55;
	volatile int32_t t54 = -125130;

	t54 = (x517%((x518<x519)%x520));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x529 = INT8_MIN;
	static int8_t x530 = INT8_MIN;
	static uint64_t x532 = 992317923862137LLU;

	t55 = (x529%((x530<x531)%x532));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x545 = UINT8_MAX;
	int16_t x546 = INT16_MIN;
	static uint32_t x547 = UINT32_MAX;
	volatile int32_t t56 = -6862887;

	t56 = (x545%((x546<x547)%x548));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x549 = 1848U;
	int64_t x551 = 202206638LL;
	volatile int16_t x552 = INT16_MIN;
	uint32_t t57 = 76436U;

	t57 = (x549%((x550<x551)%x552));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x561 = -595;
	static int8_t x562 = INT8_MIN;
	volatile int16_t x564 = -15780;

	t58 = (x561%((x562<x563)%x564));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x566 = INT64_MIN;
	uint8_t x568 = UINT8_MAX;
	volatile int64_t t59 = -739251778663LL;

	t59 = (x565%((x566<x567)%x568));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x585 = -94248711;
	int32_t x586 = INT32_MIN;
	static volatile int16_t x587 = 1;
	int8_t x588 = INT8_MIN;
	volatile int32_t t60 = -4099790;

	t60 = (x585%((x586<x587)%x588));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x593 = 1049U;
	int16_t x594 = INT16_MIN;
	int16_t x595 = -22;
	int8_t x596 = INT8_MIN;
	uint32_t t61 = 8U;

	t61 = (x593%((x594<x595)%x596));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x613 = INT64_MIN;
	int8_t x614 = INT8_MIN;
	int64_t x615 = -1LL;
	int16_t x616 = -182;
	volatile int64_t t62 = 219956469766643481LL;

	t62 = (x613%((x614<x615)%x616));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x625 = 0;
	int64_t x626 = -1LL;
	int8_t x627 = INT8_MAX;
	uint8_t x628 = UINT8_MAX;
	int32_t t63 = -1365718;

	t63 = (x625%((x626<x627)%x628));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x633 = INT8_MIN;
	uint64_t x634 = 87646701316694LLU;
	int16_t x635 = -1;
	uint32_t x636 = 348963U;

	t64 = (x633%((x634<x635)%x636));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x646 = 18078U;
	static int32_t x647 = INT32_MAX;
	uint8_t x648 = UINT8_MAX;

	t65 = (x645%((x646<x647)%x648));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x649 = INT64_MIN;
	int64_t x650 = -1LL;
	volatile int64_t t66 = -13418747LL;

	t66 = (x649%((x650<x651)%x652));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x661 = 181U;
	int32_t x662 = -206442;
	uint16_t x663 = 330U;

	t67 = (x661%((x662<x663)%x664));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x674 = -1LL;
	volatile int64_t x675 = 60548977964328LL;
	uint16_t x676 = UINT16_MAX;
	int64_t t68 = 974841194472LL;

	t68 = (x673%((x674<x675)%x676));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x686 = 0LLU;
	volatile uint8_t x687 = UINT8_MAX;
	int64_t x688 = INT64_MAX;
	static int64_t t69 = 1086045LL;

	t69 = (x685%((x686<x687)%x688));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x689 = 126497733870466096LLU;
	int8_t x690 = -13;
	static uint8_t x692 = UINT8_MAX;
	volatile uint64_t t70 = 515134048655243LLU;

	t70 = (x689%((x690<x691)%x692));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x693 = INT8_MIN;
	int8_t x694 = INT8_MIN;
	uint16_t x696 = 141U;
	static volatile int32_t t71 = 37583;

	t71 = (x693%((x694<x695)%x696));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x697 = -1;
	static uint16_t x699 = 437U;
	int8_t x700 = -4;
	volatile int32_t t72 = 1837;

	t72 = (x697%((x698<x699)%x700));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x709 = 1;
	int16_t x712 = -5305;
	static volatile int32_t t73 = 235962203;

	t73 = (x709%((x710<x711)%x712));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x713 = UINT16_MAX;
	volatile int8_t x714 = INT8_MIN;
	uint8_t x715 = UINT8_MAX;
	int16_t x716 = INT16_MAX;
	int32_t t74 = 1;

	t74 = (x713%((x714<x715)%x716));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x721 = UINT64_MAX;
	static uint16_t x722 = 25314U;
	uint16_t x723 = UINT16_MAX;
	volatile int16_t x724 = 401;
	uint64_t t75 = 1LLU;

	t75 = (x721%((x722<x723)%x724));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x737 = 24U;
	static int8_t x738 = INT8_MIN;

	t76 = (x737%((x738<x739)%x740));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x746 = 44224705758682LLU;
	volatile uint16_t x748 = 42U;
	static int32_t t77 = 6692;

	t77 = (x745%((x746<x747)%x748));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x757 = INT8_MIN;
	uint16_t x758 = 6U;
	uint16_t x759 = 19316U;
	int16_t x760 = 199;

	t78 = (x757%((x758<x759)%x760));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x763 = 128233LLU;
	volatile uint16_t x764 = UINT16_MAX;

	t79 = (x761%((x762<x763)%x764));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x765 = 30648U;
	volatile uint8_t x768 = 110U;
	volatile int32_t t80 = -581366187;

	t80 = (x765%((x766<x767)%x768));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x777 = -11537986;
	uint32_t x778 = 143569U;
	int8_t x779 = INT8_MIN;
	int16_t x780 = -114;
	volatile int32_t t81 = 87765;

	t81 = (x777%((x778<x779)%x780));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x785 = 2U;
	volatile int8_t x786 = 17;
	int32_t x787 = 34024077;
	uint64_t x788 = 8236958LLU;

	t82 = (x785%((x786<x787)%x788));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x789 = -61;
	uint8_t x790 = 5U;
	int64_t x791 = 310LL;
	static uint64_t x792 = 24246302805995102LLU;
	volatile uint64_t t83 = 1120190661935LLU;

	t83 = (x789%((x790<x791)%x792));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x801 = -1;
	uint16_t x802 = UINT16_MAX;
	uint64_t x803 = 59180750LLU;
	uint32_t x804 = UINT32_MAX;

	t84 = (x801%((x802<x803)%x804));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x805 = -2010;
	volatile int32_t x806 = -6941;
	int8_t x807 = 7;
	int8_t x808 = INT8_MAX;

	t85 = (x805%((x806<x807)%x808));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x825 = 104U;
	int64_t x827 = INT64_MIN;
	int16_t x828 = INT16_MIN;

	t86 = (x825%((x826<x827)%x828));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x829 = -1;
	static int8_t x830 = 11;
	uint8_t x831 = UINT8_MAX;
	static uint32_t x832 = 2344U;
	volatile uint32_t t87 = 1U;

	t87 = (x829%((x830<x831)%x832));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x854 = -234176606;
	uint8_t x855 = UINT8_MAX;
	uint32_t x856 = 46U;
	volatile uint32_t t88 = 192077U;

	t88 = (x853%((x854<x855)%x856));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x857 = -34;
	uint32_t x858 = 3U;
	int8_t x859 = INT8_MAX;
	volatile int32_t t89 = -240640134;

	t89 = (x857%((x858<x859)%x860));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x877 = INT8_MIN;
	int16_t x878 = -1;
	static volatile uint8_t x879 = 30U;
	uint16_t x880 = 14U;
	static int32_t t90 = 1;

	t90 = (x877%((x878<x879)%x880));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x885 = 702;
	int64_t x886 = INT64_MIN;
	static volatile int8_t x887 = INT8_MIN;
	int32_t t91 = 7349791;

	t91 = (x885%((x886<x887)%x888));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x906 = -1;
	int16_t x907 = 56;
	int16_t x908 = INT16_MIN;

	t92 = (x905%((x906<x907)%x908));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x913 = INT8_MIN;
	volatile int16_t x914 = 0;
	int16_t x915 = INT16_MAX;
	int64_t t93 = 7LL;

	t93 = (x913%((x914<x915)%x916));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x921 = INT32_MIN;
	static int16_t x922 = INT16_MIN;
	int16_t x924 = 28;

	t94 = (x921%((x922<x923)%x924));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x925 = 0;
	static volatile uint8_t x926 = 1U;
	static uint8_t x927 = 8U;
	static uint16_t x928 = 14U;

	t95 = (x925%((x926<x927)%x928));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x941 = 1;
	int32_t t96 = -63655;

	t96 = (x941%((x942<x943)%x944));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x945 = INT8_MAX;
	uint64_t x946 = 130377067496LLU;
	int16_t x947 = INT16_MIN;
	int64_t x948 = INT64_MAX;
	volatile int64_t t97 = -3LL;

	t97 = (x945%((x946<x947)%x948));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x958 = INT16_MIN;
	static int16_t x959 = 0;
	int64_t x960 = INT64_MIN;
	volatile uint64_t t98 = 23557456928LLU;

	t98 = (x957%((x958<x959)%x960));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x965 = 3U;
	static int32_t x967 = 219303;
	static uint64_t x968 = 763187285848114033LLU;
	volatile uint64_t t99 = 548960LLU;

	t99 = (x965%((x966<x967)%x968));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

