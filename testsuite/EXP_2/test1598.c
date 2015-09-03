#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = UINT32_MAX;
int16_t x33 = INT16_MAX;
uint32_t x47 = UINT32_MAX;
int16_t x50 = INT16_MAX;
int32_t t5 = 31387;
uint64_t x60 = 2922228973193696LLU;
uint64_t x73 = 2231931029109987LLU;
static uint32_t x75 = UINT32_MAX;
volatile uint8_t x81 = UINT8_MAX;
volatile int32_t x84 = INT32_MIN;
int8_t x87 = 1;
volatile int32_t x94 = -1;
static int32_t t11 = -5860;
uint16_t x101 = UINT16_MAX;
static uint64_t x106 = UINT64_MAX;
int16_t x116 = INT16_MIN;
int16_t x119 = -14;
int32_t x120 = INT32_MIN;
int32_t x136 = INT32_MIN;
uint64_t x141 = 5360752790LLU;
volatile uint64_t t20 = 2053LLU;
static int64_t x156 = INT64_MIN;
static uint16_t x165 = UINT16_MAX;
static int64_t x168 = INT64_MIN;
volatile int16_t x185 = 15566;
int64_t x188 = -164370536430LL;
static uint8_t x225 = 12U;
int64_t x228 = INT64_MIN;
static int32_t x236 = -1;
int64_t x246 = INT64_MIN;
int8_t x248 = -1;
int32_t x261 = INT32_MAX;
uint32_t x263 = 271943626U;
int32_t t36 = -178;
int32_t x279 = 14;
int32_t x280 = INT32_MAX;
int64_t x284 = 402260734LL;
uint8_t x311 = 7U;
int8_t x329 = 0;
volatile int16_t x342 = -5352;
static volatile uint32_t x349 = UINT32_MAX;
int64_t x352 = -555935613LL;
int32_t x356 = -1;
uint64_t t47 = UINT64_MAX;
volatile int16_t x366 = -1;
int64_t x368 = INT64_MIN;
static int16_t x388 = INT16_MIN;
volatile int64_t x391 = -249004976LL;
static int32_t x442 = -778965432;
volatile int64_t t57 = -11662676LL;
static int32_t t58 = -28;
static uint16_t x449 = 121U;
int32_t x467 = -3862;
static volatile uint32_t t65 = 2064991U;
volatile int64_t x509 = INT64_MAX;
int16_t x510 = INT16_MIN;
volatile uint64_t t67 = UINT64_MAX;
uint8_t x521 = UINT8_MAX;
int8_t x525 = 50;
int16_t x527 = -1;
int32_t x528 = INT32_MAX;
int32_t t70 = 35;
uint8_t x565 = 0U;
uint64_t x566 = 11257LLU;
static uint64_t x591 = 17066147LLU;
int32_t x599 = INT32_MAX;
static int16_t x600 = -1;
volatile int64_t t78 = 43088663456200LL;
int16_t x629 = INT16_MAX;
volatile int32_t x634 = -12684;
uint16_t x657 = 19586U;
uint32_t x660 = UINT32_MAX;
static volatile uint32_t x671 = UINT32_MAX;
int16_t x688 = -1;
uint64_t t85 = UINT64_MAX;
int8_t x697 = 8;
volatile int16_t x698 = -1;
int32_t t87 = 112094939;
int64_t x711 = INT64_MIN;
int16_t x722 = INT16_MAX;
static int32_t x723 = INT32_MIN;
int64_t x763 = 29184367799406LL;
int64_t t94 = -36500178795343389LL;
static int16_t x770 = INT16_MIN;
int32_t t96 = -1;
static uint8_t x785 = 1U;
int32_t t99 = INT32_MAX;


void f0(void) {
	uint32_t x25 = UINT32_MAX;
	uint64_t x26 = 349945839770174LLU;
	int32_t x27 = INT32_MAX;
	int8_t x28 = INT8_MAX;

	t0 = ((x25<<(x26<=x27))|x28);

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x29 = INT32_MAX;
	int64_t x30 = 29551814954805394LL;
	static uint8_t x31 = 0U;
	uint32_t x32 = 3041U;
	static volatile uint32_t t1 = 30U;

	t1 = ((x29<<(x30<=x31))|x32);

	if (t1 != 2147483647U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x34 = -1LL;
	static int32_t x35 = -1;
	uint8_t x36 = 12U;
	int32_t t2 = 671660525;

	t2 = ((x33<<(x34<=x35))|x36);

	if (t2 != 65534) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x45 = 2858646693384544618LL;
	static int8_t x46 = INT8_MIN;
	int32_t x48 = -27796575;
	int64_t t3 = -123911963813238LL;

	t3 = ((x45<<(x46<=x47))|x48);

	if (t3 != -10494987LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x49 = 1180;
	uint32_t x51 = 10740U;
	uint64_t x52 = 6532690294846889LLU;
	uint64_t t4 = 11LLU;

	t4 = ((x49<<(x50<=x51))|x52);

	if (t4 != 6532690294846909LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x53 = INT8_MAX;
	static int32_t x54 = -1;
	int16_t x55 = INT16_MAX;
	volatile uint16_t x56 = 11U;

	t5 = ((x53<<(x54<=x55))|x56);

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x57 = 173U;
	int16_t x58 = -1;
	int8_t x59 = INT8_MIN;
	uint64_t t6 = 3LLU;

	t6 = ((x57<<(x58<=x59))|x60);

	if (t6 != 2922228973193709LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x69 = UINT64_MAX;
	static volatile uint32_t x70 = 3U;
	uint16_t x71 = 12U;
	uint8_t x72 = UINT8_MAX;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = ((x69<<(x70<=x71))|x72);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x74 = -10;
	int32_t x76 = 7690;
	volatile uint64_t t8 = 20041575674LLU;

	t8 = ((x73<<(x74<=x75))|x76);

	if (t8 != 4463862058221518LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x82 = 1U;
	volatile int8_t x83 = -1;
	static int32_t t9 = 1918;

	t9 = ((x81<<(x82<=x83))|x84);

	if (t9 != -2147483393) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x85 = UINT64_MAX;
	int8_t x86 = INT8_MAX;
	uint32_t x88 = 518431U;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x85<<(x86<=x87))|x88);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x93 = INT8_MAX;
	volatile int64_t x95 = INT64_MIN;
	int16_t x96 = INT16_MAX;

	t11 = ((x93<<(x94<=x95))|x96);

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x102 = 19526U;
	int64_t x103 = INT64_MAX;
	uint64_t x104 = 77217892LLU;
	volatile uint64_t t12 = 128091LLU;

	t12 = ((x101<<(x102<=x103))|x104);

	if (t12 != 77332478LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x105 = 42;
	int32_t x107 = 116;
	int8_t x108 = -20;
	volatile int32_t t13 = 309;

	t13 = ((x105<<(x106<=x107))|x108);

	if (t13 != -18) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x109 = 129583301216014LL;
	uint32_t x110 = UINT32_MAX;
	int16_t x111 = INT16_MIN;
	int8_t x112 = -1;
	int64_t t14 = 905LL;

	t14 = ((x109<<(x110<=x111))|x112);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x113 = UINT64_MAX;
	uint32_t x114 = 3928808U;
	int64_t x115 = INT64_MAX;
	static volatile uint64_t t15 = 1LLU;

	t15 = ((x113<<(x114<=x115))|x116);

	if (t15 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x117 = 105694383;
	uint8_t x118 = UINT8_MAX;
	static int32_t t16 = -11517170;

	t16 = ((x117<<(x118<=x119))|x120);

	if (t16 != -2041789265) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x121 = 468857396U;
	static uint8_t x122 = UINT8_MAX;
	int16_t x123 = INT16_MIN;
	int16_t x124 = INT16_MIN;
	uint32_t t17 = 8U;

	t17 = ((x121<<(x122<=x123))|x124);

	if (t17 != 4294947380U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x129 = UINT16_MAX;
	static volatile uint64_t x130 = UINT64_MAX;
	uint8_t x131 = 5U;
	static int32_t x132 = 1;
	static int32_t t18 = 1871160;

	t18 = ((x129<<(x130<=x131))|x132);

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x133 = INT64_MAX;
	volatile uint16_t x134 = UINT16_MAX;
	int16_t x135 = INT16_MAX;
	int64_t t19 = 3995950LL;

	t19 = ((x133<<(x134<=x135))|x136);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x142 = -1;
	static int8_t x143 = INT8_MIN;
	static volatile uint32_t x144 = 156U;

	t20 = ((x141<<(x142<=x143))|x144);

	if (t20 != 5360752798LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x153 = INT64_MAX;
	static uint16_t x154 = 56U;
	int16_t x155 = 0;
	int64_t t21 = -11046982LL;

	t21 = ((x153<<(x154<=x155))|x156);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x157 = 111367033275284LLU;
	int64_t x158 = -1LL;
	static int16_t x159 = INT16_MAX;
	int8_t x160 = INT8_MAX;
	volatile uint64_t t22 = 61671224554LLU;

	t22 = ((x157<<(x158<=x159))|x160);

	if (t22 != 222734066550655LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x166 = INT32_MIN;
	static int8_t x167 = INT8_MIN;
	volatile int64_t t23 = 440LL;

	t23 = ((x165<<(x166<=x167))|x168);

	if (t23 != -9223372036854644738LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x177 = 706295949LLU;
	volatile uint64_t x178 = 46556875142717226LLU;
	volatile int16_t x179 = -1;
	uint8_t x180 = UINT8_MAX;
	static uint64_t t24 = 985312571330986611LLU;

	t24 = ((x177<<(x178<=x179))|x180);

	if (t24 != 1412592127LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MIN;
	int64_t t25 = 2587681LL;

	t25 = ((x185<<(x186<=x187))|x188);

	if (t25 != -164370515554LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x197 = 20964U;
	uint16_t x198 = UINT16_MAX;
	static uint64_t x199 = UINT64_MAX;
	int16_t x200 = INT16_MAX;
	int32_t t26 = -1;

	t26 = ((x197<<(x198<=x199))|x200);

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x201 = 3144;
	uint16_t x202 = UINT16_MAX;
	uint8_t x203 = 3U;
	static uint16_t x204 = 215U;
	int32_t t27 = 31;

	t27 = ((x201<<(x202<=x203))|x204);

	if (t27 != 3295) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x221 = 62;
	uint64_t x222 = 24LLU;
	volatile int16_t x223 = -1;
	volatile int32_t x224 = INT32_MIN;
	int32_t t28 = 116;

	t28 = ((x221<<(x222<=x223))|x224);

	if (t28 != -2147483524) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x226 = 12013U;
	int8_t x227 = INT8_MAX;
	int64_t t29 = 317214552LL;

	t29 = ((x225<<(x226<=x227))|x228);

	if (t29 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x233 = 381488507204251490LLU;
	int32_t x234 = -1;
	int64_t x235 = INT64_MAX;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = ((x233<<(x234<=x235))|x236);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x245 = UINT8_MAX;
	int32_t x247 = INT32_MIN;
	volatile int32_t t31 = -392556973;

	t31 = ((x245<<(x246<=x247))|x248);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x249 = 6U;
	int64_t x250 = -271486246LL;
	int16_t x251 = -1;
	uint64_t x252 = 882755LLU;
	volatile uint64_t t32 = 26580LLU;

	t32 = ((x249<<(x250<=x251))|x252);

	if (t32 != 882767LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x257 = UINT16_MAX;
	static volatile int8_t x258 = -1;
	int16_t x259 = -1;
	int32_t x260 = 988972416;
	int32_t t33 = 1370;

	t33 = ((x257<<(x258<=x259))|x260);

	if (t33 != 989069310) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x262 = INT8_MIN;
	static int64_t x264 = INT64_MIN;
	volatile int64_t t34 = 1423174996260472615LL;

	t34 = ((x261<<(x262<=x263))|x264);

	if (t34 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x265 = 50600U;
	volatile int32_t x266 = INT32_MIN;
	int8_t x267 = INT8_MAX;
	uint32_t x268 = UINT32_MAX;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = ((x265<<(x266<=x267))|x268);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x269 = INT16_MAX;
	int64_t x270 = INT64_MAX;
	int8_t x271 = INT8_MIN;
	int16_t x272 = INT16_MIN;

	t36 = ((x269<<(x270<=x271))|x272);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x273 = 20728662634100LL;
	static volatile uint64_t x274 = 58792506256109LLU;
	int64_t x275 = -3669LL;
	int64_t x276 = INT64_MIN;
	int64_t t37 = -941131792040425889LL;

	t37 = ((x273<<(x274<=x275))|x276);

	if (t37 != -9223330579529507608LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x277 = 7101;
	uint8_t x278 = 3U;
	volatile int32_t t38 = INT32_MAX;

	t38 = ((x277<<(x278<=x279))|x280);

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x281 = 0U;
	int32_t x282 = 164454190;
	uint64_t x283 = UINT64_MAX;
	volatile int64_t t39 = -248219586LL;

	t39 = ((x281<<(x282<=x283))|x284);

	if (t39 != 402260734LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x297 = 70LL;
	int8_t x298 = INT8_MAX;
	int16_t x299 = -15759;
	int16_t x300 = INT16_MIN;
	static int64_t t40 = 2760461468486247LL;

	t40 = ((x297<<(x298<=x299))|x300);

	if (t40 != -32698LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x309 = UINT64_MAX;
	volatile int32_t x310 = INT32_MAX;
	uint64_t x312 = 275613050LLU;
	uint64_t t41 = UINT64_MAX;

	t41 = ((x309<<(x310<=x311))|x312);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x317 = 879434155;
	volatile uint8_t x318 = UINT8_MAX;
	int32_t x319 = INT32_MIN;
	uint64_t x320 = 1LLU;
	uint64_t t42 = 595LLU;

	t42 = ((x317<<(x318<=x319))|x320);

	if (t42 != 879434155LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x330 = 1U;
	volatile int32_t x331 = INT32_MIN;
	int8_t x332 = 60;
	volatile int32_t t43 = 5642;

	t43 = ((x329<<(x330<=x331))|x332);

	if (t43 != 60) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x333 = INT16_MAX;
	uint32_t x334 = UINT32_MAX;
	int16_t x335 = INT16_MAX;
	uint16_t x336 = UINT16_MAX;
	int32_t t44 = -128;

	t44 = ((x333<<(x334<=x335))|x336);

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x341 = UINT64_MAX;
	int16_t x343 = 6405;
	int16_t x344 = 507;
	uint64_t t45 = UINT64_MAX;

	t45 = ((x341<<(x342<=x343))|x344);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x350 = INT8_MIN;
	uint8_t x351 = UINT8_MAX;
	int64_t t46 = 3493118257926823LL;

	t46 = ((x349<<(x350<=x351))|x352);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x353 = 5448LLU;
	int16_t x354 = INT16_MAX;
	volatile int64_t x355 = INT64_MIN;

	t47 = ((x353<<(x354<=x355))|x356);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x357 = INT16_MAX;
	int32_t x358 = -570870;
	static int16_t x359 = INT16_MIN;
	int32_t x360 = INT32_MIN;
	static int32_t t48 = 367832487;

	t48 = ((x357<<(x358<=x359))|x360);

	if (t48 != -2147418114) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x365 = 5U;
	int32_t x367 = INT32_MIN;
	volatile int64_t t49 = -24928035LL;

	t49 = ((x365<<(x366<=x367))|x368);

	if (t49 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x373 = 52246141U;
	static uint8_t x374 = 1U;
	uint64_t x375 = UINT64_MAX;
	volatile int64_t x376 = -1LL;
	volatile int64_t t50 = 467178996LL;

	t50 = ((x373<<(x374<=x375))|x376);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x385 = 30318077926347275LLU;
	volatile int32_t x386 = INT32_MIN;
	static int16_t x387 = -902;
	static uint64_t t51 = 231189620581614859LLU;

	t51 = ((x385<<(x386<=x387))|x388);

	if (t51 != 18446744073709528086LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x389 = 3769847385LL;
	int64_t x390 = INT64_MIN;
	int32_t x392 = -1;
	volatile int64_t t52 = -2012115999579806280LL;

	t52 = ((x389<<(x390<=x391))|x392);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x409 = 55668U;
	uint64_t x410 = 10486621820359LLU;
	uint8_t x411 = 0U;
	volatile int64_t x412 = -1LL;
	volatile int64_t t53 = 102677830LL;

	t53 = ((x409<<(x410<=x411))|x412);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x429 = INT16_MAX;
	volatile int64_t x430 = 111LL;
	uint64_t x431 = 1685178632866135LLU;
	uint64_t x432 = 302757411LLU;
	uint64_t t54 = 1563371505524LLU;

	t54 = ((x429<<(x430<=x431))|x432);

	if (t54 != 302776319LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x433 = 13947565936893050LLU;
	uint16_t x434 = UINT16_MAX;
	static int8_t x435 = -2;
	static int32_t x436 = INT32_MIN;
	uint64_t t55 = 15853305203094647LLU;

	t55 = ((x433<<(x434<=x435))|x436);

	if (t55 != 18446744072655101050LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x437 = 24854916683223172LL;
	int64_t x438 = -1LL;
	int8_t x439 = INT8_MIN;
	static volatile int16_t x440 = -1;
	int64_t t56 = -70074643026183LL;

	t56 = ((x437<<(x438<=x439))|x440);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x441 = 3615;
	volatile uint16_t x443 = 10551U;
	int64_t x444 = INT64_MIN;

	t57 = ((x441<<(x442<=x443))|x444);

	if (t57 != -9223372036854768578LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x445 = INT32_MAX;
	uint16_t x446 = 457U;
	static int64_t x447 = -114953822LL;
	int32_t x448 = -1;

	t58 = ((x445<<(x446<=x447))|x448);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x450 = 0U;
	int8_t x451 = 24;
	static uint8_t x452 = 0U;
	volatile int32_t t59 = 45929;

	t59 = ((x449<<(x450<=x451))|x452);

	if (t59 != 242) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x465 = 2U;
	static int64_t x466 = INT64_MIN;
	int32_t x468 = -251;
	volatile uint32_t t60 = 5U;

	t60 = ((x465<<(x466<=x467))|x468);

	if (t60 != 4294967045U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x469 = 1;
	uint16_t x470 = 22429U;
	int8_t x471 = INT8_MIN;
	int32_t x472 = INT32_MIN;
	int32_t t61 = 38904474;

	t61 = ((x469<<(x470<=x471))|x472);

	if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x485 = UINT8_MAX;
	volatile int32_t x486 = -3933209;
	int16_t x487 = INT16_MIN;
	static volatile uint8_t x488 = 127U;
	volatile int32_t t62 = -29618;

	t62 = ((x485<<(x486<=x487))|x488);

	if (t62 != 511) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x497 = INT32_MAX;
	volatile int8_t x498 = -1;
	int64_t x499 = INT64_MIN;
	int32_t x500 = INT32_MAX;
	volatile int32_t t63 = INT32_MAX;

	t63 = ((x497<<(x498<=x499))|x500);

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x501 = 89547LL;
	int8_t x502 = INT8_MIN;
	static int8_t x503 = 0;
	int64_t x504 = INT64_MAX;
	volatile int64_t t64 = INT64_MAX;

	t64 = ((x501<<(x502<=x503))|x504);

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x505 = 1U;
	int32_t x506 = INT32_MAX;
	int8_t x507 = INT8_MIN;
	int32_t x508 = INT32_MIN;

	t65 = ((x505<<(x506<=x507))|x508);

	if (t65 != 2147483649U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x511 = 10507208U;
	uint8_t x512 = UINT8_MAX;
	volatile int64_t t66 = INT64_MAX;

	t66 = ((x509<<(x510<=x511))|x512);

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x517 = UINT64_MAX;
	static int32_t x518 = -1;
	int32_t x519 = -1;
	static volatile int16_t x520 = 1;

	t67 = ((x517<<(x518<=x519))|x520);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x522 = UINT64_MAX;
	volatile int16_t x523 = -11;
	int8_t x524 = 1;
	int32_t t68 = -4;

	t68 = ((x521<<(x522<=x523))|x524);

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x526 = UINT16_MAX;
	static int32_t t69 = INT32_MAX;

	t69 = ((x525<<(x526<=x527))|x528);

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x541 = INT16_MAX;
	uint16_t x542 = UINT16_MAX;
	static uint32_t x543 = 250664U;
	int16_t x544 = -1;

	t70 = ((x541<<(x542<=x543))|x544);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x545 = 135634698478049LLU;
	static int16_t x546 = 13;
	static int64_t x547 = -1LL;
	int32_t x548 = -1;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = ((x545<<(x546<=x547))|x548);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x561 = UINT16_MAX;
	uint32_t x562 = UINT32_MAX;
	int32_t x563 = 291301;
	static volatile int8_t x564 = -36;
	int32_t t72 = -3391744;

	t72 = ((x561<<(x562<=x563))|x564);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x567 = -1;
	int32_t x568 = INT32_MIN;
	int32_t t73 = INT32_MIN;

	t73 = ((x565<<(x566<=x567))|x568);

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x577 = 3420U;
	int16_t x578 = -1575;
	uint8_t x579 = 7U;
	static volatile uint16_t x580 = 6U;
	volatile uint32_t t74 = 0U;

	t74 = ((x577<<(x578<=x579))|x580);

	if (t74 != 6846U) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x581 = INT32_MAX;
	uint64_t x582 = UINT64_MAX;
	uint8_t x583 = 3U;
	int8_t x584 = INT8_MIN;
	static int32_t t75 = 2217625;

	t75 = ((x581<<(x582<=x583))|x584);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x589 = 1637LLU;
	int16_t x590 = 186;
	int8_t x592 = INT8_MIN;
	uint64_t t76 = 1LLU;

	t76 = ((x589<<(x590<=x591))|x592);

	if (t76 != 18446744073709551562LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x597 = 14752672U;
	int16_t x598 = INT16_MAX;
	static uint32_t t77 = UINT32_MAX;

	t77 = ((x597<<(x598<=x599))|x600);

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x613 = UINT32_MAX;
	static uint64_t x614 = 107989601751LLU;
	int8_t x615 = 0;
	int64_t x616 = INT64_MIN;

	t78 = ((x613<<(x614<=x615))|x616);

	if (t78 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x630 = INT64_MAX;
	uint64_t x631 = 2144650007181LLU;
	int32_t x632 = -1236117;
	static volatile int32_t t79 = 3525;

	t79 = ((x629<<(x630<=x631))|x632);

	if (t79 != -1212417) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x633 = 0U;
	int32_t x635 = INT32_MIN;
	int16_t x636 = INT16_MAX;
	static int32_t t80 = 2;

	t80 = ((x633<<(x634<=x635))|x636);

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x645 = UINT32_MAX;
	int8_t x646 = INT8_MAX;
	int8_t x647 = 1;
	int64_t x648 = INT64_MAX;
	volatile int64_t t81 = INT64_MAX;

	t81 = ((x645<<(x646<=x647))|x648);

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x658 = -1;
	uint8_t x659 = UINT8_MAX;
	uint32_t t82 = UINT32_MAX;

	t82 = ((x657<<(x658<=x659))|x660);

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x665 = INT32_MAX;
	volatile uint64_t x666 = UINT64_MAX;
	volatile int32_t x667 = -174840793;
	int16_t x668 = INT16_MIN;
	int32_t t83 = 632999173;

	t83 = ((x665<<(x666<=x667))|x668);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x669 = 254295U;
	int32_t x670 = INT32_MIN;
	int8_t x672 = -5;
	uint32_t t84 = UINT32_MAX;

	t84 = ((x669<<(x670<=x671))|x672);

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x685 = 38860943993LLU;
	uint32_t x686 = UINT32_MAX;
	static int8_t x687 = 2;

	t85 = ((x685<<(x686<=x687))|x688);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x689 = 104787805;
	static int32_t x690 = INT32_MAX;
	int32_t x691 = -1;
	int32_t x692 = INT32_MIN;
	int32_t t86 = -183421231;

	t86 = ((x689<<(x690<=x691))|x692);

	if (t86 != -2042695843) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x699 = INT32_MAX;
	int32_t x700 = -1;

	t87 = ((x697<<(x698<=x699))|x700);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x709 = 2U;
	int8_t x710 = INT8_MAX;
	static int16_t x712 = -1482;
	volatile int32_t t88 = -3;

	t88 = ((x709<<(x710<=x711))|x712);

	if (t88 != -1482) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x721 = 0;
	int8_t x724 = INT8_MIN;
	int32_t t89 = 432686;

	t89 = ((x721<<(x722<=x723))|x724);

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x729 = 5;
	static uint32_t x730 = 2040791U;
	volatile int16_t x731 = INT16_MAX;
	int16_t x732 = 1;
	volatile int32_t t90 = 9008;

	t90 = ((x729<<(x730<=x731))|x732);

	if (t90 != 5) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x733 = UINT32_MAX;
	static uint8_t x734 = 0U;
	uint16_t x735 = UINT16_MAX;
	int64_t x736 = INT64_MIN;
	static volatile int64_t t91 = 4767885133LL;

	t91 = ((x733<<(x734<=x735))|x736);

	if (t91 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x749 = 1;
	uint8_t x750 = 31U;
	int64_t x751 = INT64_MIN;
	uint8_t x752 = 0U;
	static volatile int32_t t92 = 376550429;

	t92 = ((x749<<(x750<=x751))|x752);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x757 = 2326U;
	static volatile int64_t x758 = INT64_MIN;
	int16_t x759 = INT16_MIN;
	uint64_t x760 = UINT64_MAX;
	uint64_t t93 = UINT64_MAX;

	t93 = ((x757<<(x758<=x759))|x760);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x761 = 1676461364354873LL;
	volatile int32_t x762 = INT32_MIN;
	uint32_t x764 = 41U;

	t94 = ((x761<<(x762<=x763))|x764);

	if (t94 != 3352922728709755LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x769 = 1U;
	static int32_t x771 = INT32_MIN;
	uint64_t x772 = 868697819109161000LLU;
	volatile uint64_t t95 = 982531726LLU;

	t95 = ((x769<<(x770<=x771))|x772);

	if (t95 != 868697819109161001LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x773 = UINT8_MAX;
	int8_t x774 = INT8_MAX;
	volatile int16_t x775 = -1;
	int8_t x776 = 9;

	t96 = ((x773<<(x774<=x775))|x776);

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x777 = 50U;
	int32_t x778 = INT32_MAX;
	static uint16_t x779 = 700U;
	uint64_t x780 = 13738712136831442LLU;
	uint64_t t97 = 103110430286591423LLU;

	t97 = ((x777<<(x778<=x779))|x780);

	if (t97 != 13738712136831474LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x781 = UINT8_MAX;
	int16_t x782 = -16026;
	int64_t x783 = -111529333724843LL;
	int64_t x784 = 45LL;
	volatile int64_t t98 = -77902915364LL;

	t98 = ((x781<<(x782<=x783))|x784);

	if (t98 != 255LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x786 = INT8_MIN;
	int16_t x787 = -356;
	static int32_t x788 = INT32_MAX;

	t99 = ((x785<<(x786<=x787))|x788);

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

