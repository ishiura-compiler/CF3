#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x16 = UINT8_MAX;
int32_t x32 = INT32_MIN;
volatile int32_t t2 = -484;
volatile int32_t x54 = INT32_MAX;
uint8_t x58 = 28U;
volatile int8_t x68 = INT8_MAX;
uint16_t x81 = 17U;
int64_t x107 = INT64_MAX;
int64_t x108 = INT64_MAX;
int32_t t14 = -36045030;
int8_t x113 = 1;
int32_t t15 = -84341580;
uint16_t x121 = 64U;
int32_t x124 = INT32_MAX;
int32_t t17 = -25;
volatile int64_t t18 = 24688513426217LL;
int32_t t19 = -158802;
volatile uint16_t x146 = 228U;
volatile int64_t x152 = INT64_MIN;
int64_t x159 = INT64_MIN;
int16_t x190 = -1;
int16_t x191 = INT16_MAX;
uint32_t t25 = 1385275U;
static volatile int16_t x201 = INT16_MAX;
int8_t x203 = -1;
uint64_t x217 = 2124600250214260LLU;
uint8_t x220 = 30U;
static int8_t x224 = INT8_MIN;
uint16_t x228 = 8U;
uint8_t x231 = UINT8_MAX;
uint8_t x239 = 83U;
int64_t x240 = -1LL;
static uint32_t x252 = 1455861U;
volatile uint64_t x261 = 10480182837LLU;
volatile int64_t x273 = INT64_MAX;
int32_t t38 = -16;
int32_t x291 = INT32_MIN;
int64_t x292 = INT64_MIN;
uint16_t x306 = 13U;
uint32_t x307 = UINT32_MAX;
static uint64_t x309 = UINT64_MAX;
volatile int32_t x312 = INT32_MIN;
uint32_t x343 = 1U;
int32_t t48 = -2620;
int8_t x375 = 6;
static uint16_t x377 = UINT16_MAX;
int32_t t52 = 2381;
static uint8_t x381 = UINT8_MAX;
int32_t x383 = INT32_MAX;
int8_t x394 = -1;
volatile uint32_t x404 = 1U;
volatile int32_t t57 = -7444034;
volatile int32_t t59 = 784;
int32_t t60 = -18;
uint32_t x455 = 216817975U;
static int32_t x456 = INT32_MIN;
volatile int64_t t62 = -3438886LL;
uint64_t x465 = 3484790600LLU;
static int16_t x466 = INT16_MIN;
int16_t x474 = INT16_MIN;
static volatile int32_t t66 = 9427780;
static int32_t x478 = -32724;
int32_t x484 = INT32_MIN;
static uint64_t x512 = 213988652489591LLU;
uint16_t x526 = 133U;
int64_t t72 = INT64_MAX;
uint64_t x529 = 5050801LLU;
uint64_t x532 = 7549796707LLU;
int8_t x536 = 28;
int8_t x537 = 58;
uint16_t x539 = 2U;
int16_t x555 = INT16_MIN;
int8_t x556 = -1;
volatile int8_t x559 = -23;
volatile int32_t t80 = -861847292;
static int64_t x588 = 17715LL;
volatile int32_t t82 = 32293370;
static int32_t x602 = 3059625;
static volatile int8_t x613 = 3;
volatile int8_t x616 = INT8_MIN;
uint32_t x623 = 57150820U;
int32_t x647 = INT32_MIN;
int8_t x652 = INT8_MIN;
int8_t x662 = INT8_MAX;
uint32_t x664 = UINT32_MAX;
int16_t x670 = 35;
uint16_t x677 = 4U;
volatile uint32_t x689 = 36328U;
int32_t x691 = INT32_MIN;
static volatile uint32_t t96 = 3056U;
static uint64_t x701 = UINT64_MAX;
static uint16_t x713 = 6U;
uint32_t x715 = 31226U;


void f0(void) {
	int8_t x9 = 1;
	int32_t x10 = 1350808;
	int32_t x11 = -1;
	int16_t x12 = -1;
	int32_t t0 = -8915;

	t0 = (x9<<((x10%x11)<=x12));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x13 = 98U;
	int16_t x14 = -1;
	static uint64_t x15 = UINT64_MAX;
	int32_t t1 = 633950357;

	t1 = (x13<<((x14%x15)<=x16));

	if (t1 != 196) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x29 = 13428;
	int16_t x30 = -1;
	int32_t x31 = 131779112;

	t2 = (x29<<((x30%x31)<=x32));

	if (t2 != 13428) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x37 = INT16_MAX;
	uint32_t x38 = 3349U;
	int64_t x39 = -1LL;
	int16_t x40 = -1;
	volatile int32_t t3 = -134137;

	t3 = (x37<<((x38%x39)<=x40));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x41 = 54U;
	int8_t x42 = INT8_MAX;
	int8_t x43 = INT8_MAX;
	static int16_t x44 = INT16_MAX;
	int32_t t4 = -6500;

	t4 = (x41<<((x42%x43)<=x44));

	if (t4 != 108) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x53 = 8331821379370LL;
	int32_t x55 = INT32_MAX;
	int8_t x56 = -1;
	volatile int64_t t5 = -1LL;

	t5 = (x53<<((x54%x55)<=x56));

	if (t5 != 8331821379370LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x57 = 59442269154LL;
	uint64_t x59 = 77542747994416601LLU;
	uint16_t x60 = 11166U;
	volatile int64_t t6 = 181LL;

	t6 = (x57<<((x58%x59)<=x60));

	if (t6 != 118884538308LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x61 = 58LLU;
	int64_t x62 = INT64_MIN;
	uint16_t x63 = UINT16_MAX;
	uint16_t x64 = 3610U;
	uint64_t t7 = 68329649990LLU;

	t7 = (x61<<((x62%x63)<=x64));

	if (t7 != 116LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x65 = 5U;
	uint8_t x66 = 92U;
	uint64_t x67 = 399456898839378LLU;
	int32_t t8 = 41385636;

	t8 = (x65<<((x66%x67)<=x68));

	if (t8 != 10) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x69 = 5096566U;
	uint8_t x70 = UINT8_MAX;
	int64_t x71 = INT64_MAX;
	volatile int64_t x72 = INT64_MIN;
	uint32_t t9 = 24319U;

	t9 = (x69<<((x70%x71)<=x72));

	if (t9 != 5096566U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x77 = 773156796U;
	uint32_t x78 = 80277U;
	int16_t x79 = -1;
	static volatile uint16_t x80 = UINT16_MAX;
	uint32_t t10 = 72623U;

	t10 = (x77<<((x78%x79)<=x80));

	if (t10 != 773156796U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x82 = 1958791962604776LLU;
	int8_t x83 = INT8_MAX;
	uint16_t x84 = 5U;
	int32_t t11 = 7;

	t11 = (x81<<((x82%x83)<=x84));

	if (t11 != 17) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x85 = UINT32_MAX;
	uint8_t x86 = 27U;
	static int64_t x87 = -11LL;
	static volatile int64_t x88 = -1LL;
	uint32_t t12 = UINT32_MAX;

	t12 = (x85<<((x86%x87)<=x88));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x105 = 10;
	uint16_t x106 = 48U;
	volatile int32_t t13 = -14625;

	t13 = (x105<<((x106%x107)<=x108));

	if (t13 != 20) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x109 = 0U;
	static volatile int8_t x110 = 29;
	uint16_t x111 = 3463U;
	int64_t x112 = -716LL;

	t14 = (x109<<((x110%x111)<=x112));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x114 = -1;
	int32_t x115 = INT32_MAX;
	volatile int16_t x116 = INT16_MAX;

	t15 = (x113<<((x114%x115)<=x116));

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x117 = 2U;
	static int16_t x118 = INT16_MIN;
	int32_t x119 = 1;
	static uint8_t x120 = 3U;
	int32_t t16 = 92056;

	t16 = (x117<<((x118%x119)<=x120));

	if (t16 != 4) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x122 = 3192U;
	volatile int32_t x123 = INT32_MAX;

	t17 = (x121<<((x122%x123)<=x124));

	if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x133 = 54807275807LL;
	int64_t x134 = INT64_MIN;
	static volatile int16_t x135 = 1;
	int8_t x136 = INT8_MIN;

	t18 = (x133<<((x134%x135)<=x136));

	if (t18 != 54807275807LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x137 = UINT16_MAX;
	volatile int64_t x138 = INT64_MIN;
	int8_t x139 = -1;
	static int32_t x140 = INT32_MAX;

	t19 = (x137<<((x138%x139)<=x140));

	if (t19 != 131070) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x145 = 13311U;
	uint8_t x147 = UINT8_MAX;
	int8_t x148 = INT8_MAX;
	int32_t t20 = -3312;

	t20 = (x145<<((x146%x147)<=x148));

	if (t20 != 13311) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x149 = UINT32_MAX;
	int16_t x150 = INT16_MAX;
	int16_t x151 = INT16_MIN;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = (x149<<((x150%x151)<=x152));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x157 = 117251249285LLU;
	int32_t x158 = 1;
	int16_t x160 = -1;
	volatile uint64_t t22 = 6679279034LLU;

	t22 = (x157<<((x158%x159)<=x160));

	if (t22 != 117251249285LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x165 = UINT8_MAX;
	volatile int64_t x166 = 988LL;
	static volatile uint32_t x167 = UINT32_MAX;
	volatile int8_t x168 = INT8_MIN;
	int32_t t23 = 67200085;

	t23 = (x165<<((x166%x167)<=x168));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x181 = UINT8_MAX;
	static int32_t x182 = INT32_MAX;
	uint64_t x183 = UINT64_MAX;
	static int32_t x184 = -354407;
	volatile int32_t t24 = 4690697;

	t24 = (x181<<((x182%x183)<=x184));

	if (t24 != 510) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x189 = 14047684U;
	int32_t x192 = -1;

	t25 = (x189<<((x190%x191)<=x192));

	if (t25 != 28095368U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x202 = 19271U;
	int8_t x204 = -7;
	volatile int32_t t26 = -43;

	t26 = (x201<<((x202%x203)<=x204));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x205 = 75602376U;
	int64_t x206 = -87827857LL;
	static int32_t x207 = -1;
	int64_t x208 = -557894316829982LL;
	volatile uint32_t t27 = 116325975U;

	t27 = (x205<<((x206%x207)<=x208));

	if (t27 != 75602376U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x218 = 1653U;
	int64_t x219 = 59095802035888LL;
	volatile uint64_t t28 = 2761LLU;

	t28 = (x217<<((x218%x219)<=x220));

	if (t28 != 2124600250214260LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x221 = INT16_MAX;
	uint32_t x222 = 880479U;
	volatile int64_t x223 = INT64_MIN;
	volatile int32_t t29 = 6524;

	t29 = (x221<<((x222%x223)<=x224));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x225 = 12639067281349407LLU;
	volatile int8_t x226 = INT8_MIN;
	int32_t x227 = 2299665;
	static volatile uint64_t t30 = 201266319476LLU;

	t30 = (x225<<((x226%x227)<=x228));

	if (t30 != 25278134562698814LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x229 = 86;
	static int8_t x230 = -2;
	static uint8_t x232 = 9U;
	static int32_t t31 = -770997;

	t31 = (x229<<((x230%x231)<=x232));

	if (t31 != 172) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x237 = 3;
	uint32_t x238 = 0U;
	volatile int32_t t32 = -1844;

	t32 = (x237<<((x238%x239)<=x240));

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x241 = 3U;
	volatile uint8_t x242 = 124U;
	uint16_t x243 = 308U;
	int32_t x244 = -5;
	int32_t t33 = 18995420;

	t33 = (x241<<((x242%x243)<=x244));

	if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x249 = 0;
	uint16_t x250 = 14282U;
	static int8_t x251 = INT8_MIN;
	int32_t t34 = -50;

	t34 = (x249<<((x250%x251)<=x252));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x257 = 7;
	static volatile int16_t x258 = INT16_MAX;
	uint16_t x259 = UINT16_MAX;
	uint64_t x260 = UINT64_MAX;
	int32_t t35 = 178863251;

	t35 = (x257<<((x258%x259)<=x260));

	if (t35 != 14) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x262 = 990517601LLU;
	int8_t x263 = 4;
	static int64_t x264 = INT64_MIN;
	volatile uint64_t t36 = 447893LLU;

	t36 = (x261<<((x262%x263)<=x264));

	if (t36 != 20960365674LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x274 = 2103092230292476467LLU;
	int64_t x275 = -1LL;
	volatile int64_t x276 = 44532922432LL;
	volatile int64_t t37 = INT64_MAX;

	t37 = (x273<<((x274%x275)<=x276));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x285 = UINT8_MAX;
	int64_t x286 = -1LL;
	int32_t x287 = -1;
	uint64_t x288 = 285495167215718LLU;

	t38 = (x285<<((x286%x287)<=x288));

	if (t38 != 510) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x289 = 0U;
	int8_t x290 = INT8_MIN;
	static volatile int32_t t39 = 1524;

	t39 = (x289<<((x290%x291)<=x292));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x297 = 25U;
	static uint64_t x298 = UINT64_MAX;
	uint32_t x299 = 4U;
	static int16_t x300 = -1;
	volatile int32_t t40 = 226344;

	t40 = (x297<<((x298%x299)<=x300));

	if (t40 != 50) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x305 = 3457695996158473LLU;
	int16_t x308 = INT16_MAX;
	uint64_t t41 = 1243LLU;

	t41 = (x305<<((x306%x307)<=x308));

	if (t41 != 6915391992316946LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x310 = INT16_MAX;
	uint64_t x311 = UINT64_MAX;
	static volatile uint64_t t42 = 28159098828LLU;

	t42 = (x309<<((x310%x311)<=x312));

	if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x313 = 4522514579531LL;
	volatile uint32_t x314 = 465U;
	int32_t x315 = INT32_MIN;
	int64_t x316 = INT64_MAX;
	volatile int64_t t43 = -6494954269LL;

	t43 = (x313<<((x314%x315)<=x316));

	if (t43 != 9045029159062LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x317 = 7;
	static volatile int8_t x318 = INT8_MAX;
	int64_t x319 = INT64_MIN;
	int16_t x320 = INT16_MIN;
	static volatile int32_t t44 = -2755938;

	t44 = (x317<<((x318%x319)<=x320));

	if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x321 = 7114847;
	static int16_t x322 = INT16_MIN;
	int32_t x323 = -635775;
	uint64_t x324 = UINT64_MAX;
	int32_t t45 = -11611;

	t45 = (x321<<((x322%x323)<=x324));

	if (t45 != 14229694) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x337 = 125U;
	static volatile uint8_t x338 = 24U;
	int32_t x339 = INT32_MIN;
	uint32_t x340 = 7536916U;
	static int32_t t46 = -3896;

	t46 = (x337<<((x338%x339)<=x340));

	if (t46 != 250) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x341 = 18835407819LLU;
	uint32_t x342 = 0U;
	uint8_t x344 = 1U;
	volatile uint64_t t47 = 103284706LLU;

	t47 = (x341<<((x342%x343)<=x344));

	if (t47 != 37670815638LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x345 = INT8_MAX;
	uint8_t x346 = 0U;
	int32_t x347 = -1;
	int64_t x348 = INT64_MIN;

	t48 = (x345<<((x346%x347)<=x348));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x353 = UINT8_MAX;
	int16_t x354 = INT16_MIN;
	static uint8_t x355 = UINT8_MAX;
	uint64_t x356 = 310409558LLU;
	static volatile int32_t t49 = -218;

	t49 = (x353<<((x354%x355)<=x356));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x365 = 4480051117302416261LLU;
	static uint64_t x366 = 486255015912743302LLU;
	volatile int16_t x367 = INT16_MIN;
	uint8_t x368 = 0U;
	uint64_t t50 = 13353486429134LLU;

	t50 = (x365<<((x366%x367)<=x368));

	if (t50 != 4480051117302416261LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x373 = 50560115862LLU;
	static volatile int32_t x374 = 14112032;
	uint16_t x376 = 3251U;
	uint64_t t51 = 406366696LLU;

	t51 = (x373<<((x374%x375)<=x376));

	if (t51 != 101120231724LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x378 = 4U;
	volatile int64_t x379 = INT64_MIN;
	uint64_t x380 = 11601045LLU;

	t52 = (x377<<((x378%x379)<=x380));

	if (t52 != 131070) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x382 = INT32_MIN;
	volatile int16_t x384 = INT16_MAX;
	int32_t t53 = 3;

	t53 = (x381<<((x382%x383)<=x384));

	if (t53 != 510) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x385 = 29329LL;
	uint32_t x386 = UINT32_MAX;
	int16_t x387 = INT16_MIN;
	volatile int32_t x388 = INT32_MIN;
	volatile int64_t t54 = 224911396863LL;

	t54 = (x385<<((x386%x387)<=x388));

	if (t54 != 58658LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x393 = 18U;
	int64_t x395 = -258560767451969764LL;
	int32_t x396 = 20793043;
	static uint32_t t55 = 0U;

	t55 = (x393<<((x394%x395)<=x396));

	if (t55 != 36U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x401 = 1U;
	volatile int32_t x402 = -3766;
	int16_t x403 = -6;
	int32_t t56 = -3424;

	t56 = (x401<<((x402%x403)<=x404));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x405 = 3U;
	int64_t x406 = -1LL;
	int8_t x407 = -60;
	int32_t x408 = INT32_MIN;

	t57 = (x405<<((x406%x407)<=x408));

	if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x429 = INT8_MAX;
	static int8_t x430 = INT8_MIN;
	volatile int64_t x431 = 7885843687400LL;
	int8_t x432 = -53;
	volatile int32_t t58 = -150;

	t58 = (x429<<((x430%x431)<=x432));

	if (t58 != 254) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x441 = UINT16_MAX;
	int32_t x442 = 2873;
	uint16_t x443 = 30480U;
	uint64_t x444 = 1295207220737391LLU;

	t59 = (x441<<((x442%x443)<=x444));

	if (t59 != 131070) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x449 = 20U;
	int16_t x450 = -15444;
	uint32_t x451 = 56605040U;
	int8_t x452 = 0;

	t60 = (x449<<((x450%x451)<=x452));

	if (t60 != 20) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x453 = 2LLU;
	int8_t x454 = INT8_MAX;
	volatile uint64_t t61 = 720842886870LLU;

	t61 = (x453<<((x454%x455)<=x456));

	if (t61 != 4LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x457 = 193522857120893706LL;
	uint64_t x458 = UINT64_MAX;
	static volatile int16_t x459 = -1;
	uint16_t x460 = UINT16_MAX;

	t62 = (x457<<((x458%x459)<=x460));

	if (t62 != 387045714241787412LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x461 = UINT32_MAX;
	uint8_t x462 = 1U;
	int64_t x463 = INT64_MAX;
	uint16_t x464 = UINT16_MAX;
	uint32_t t63 = 781230U;

	t63 = (x461<<((x462%x463)<=x464));

	if (t63 != 4294967294U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x467 = INT8_MIN;
	int16_t x468 = INT16_MIN;
	uint64_t t64 = 5422136087178070LLU;

	t64 = (x465<<((x466%x467)<=x468));

	if (t64 != 3484790600LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x469 = UINT16_MAX;
	int8_t x470 = -11;
	volatile int32_t x471 = -1;
	volatile uint8_t x472 = UINT8_MAX;
	int32_t t65 = 5050716;

	t65 = (x469<<((x470%x471)<=x472));

	if (t65 != 131070) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x473 = UINT16_MAX;
	int16_t x475 = INT16_MIN;
	static int32_t x476 = -1;

	t66 = (x473<<((x474%x475)<=x476));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x477 = 1850065599019412096LLU;
	int32_t x479 = INT32_MIN;
	uint16_t x480 = 365U;
	uint64_t t67 = 18275LLU;

	t67 = (x477<<((x478%x479)<=x480));

	if (t67 != 3700131198038824192LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x481 = UINT32_MAX;
	int16_t x482 = -33;
	uint16_t x483 = 26U;
	volatile uint32_t t68 = UINT32_MAX;

	t68 = (x481<<((x482%x483)<=x484));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x497 = 128179U;
	static uint64_t x498 = 2450465900428056LLU;
	int64_t x499 = 3170LL;
	int8_t x500 = -1;
	uint32_t t69 = 1803254820U;

	t69 = (x497<<((x498%x499)<=x500));

	if (t69 != 256358U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x501 = INT8_MAX;
	int32_t x502 = INT32_MAX;
	uint16_t x503 = 2358U;
	uint64_t x504 = 96131088LLU;
	int32_t t70 = 116535;

	t70 = (x501<<((x502%x503)<=x504));

	if (t70 != 254) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x509 = 0;
	volatile uint32_t x510 = 0U;
	volatile uint64_t x511 = UINT64_MAX;
	int32_t t71 = 239835;

	t71 = (x509<<((x510%x511)<=x512));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x525 = INT64_MAX;
	static uint8_t x527 = 8U;
	int32_t x528 = 1;

	t72 = (x525<<((x526%x527)<=x528));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x530 = 1371921080425508975LL;
	uint32_t x531 = 125522U;
	volatile uint64_t t73 = 3896806332644467097LLU;

	t73 = (x529<<((x530%x531)<=x532));

	if (t73 != 10101602LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x533 = UINT8_MAX;
	static int32_t x534 = INT32_MIN;
	volatile uint8_t x535 = UINT8_MAX;
	volatile int32_t t74 = 51745259;

	t74 = (x533<<((x534%x535)<=x536));

	if (t74 != 510) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x538 = 1823;
	int32_t x540 = -2080457;
	int32_t t75 = 466;

	t75 = (x537<<((x538%x539)<=x540));

	if (t75 != 58) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x541 = 2271;
	uint16_t x542 = 29174U;
	int32_t x543 = 718;
	int64_t x544 = -1LL;
	static volatile int32_t t76 = -1486410;

	t76 = (x541<<((x542%x543)<=x544));

	if (t76 != 2271) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x553 = 468LLU;
	int8_t x554 = INT8_MIN;
	uint64_t t77 = 197207255LLU;

	t77 = (x553<<((x554%x555)<=x556));

	if (t77 != 936LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x557 = UINT64_MAX;
	uint64_t x558 = 7994839941428730LLU;
	int64_t x560 = INT64_MIN;
	volatile uint64_t t78 = 1LLU;

	t78 = (x557<<((x558%x559)<=x560));

	if (t78 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x561 = 193586;
	static volatile int16_t x562 = INT16_MIN;
	volatile uint32_t x563 = 106U;
	static volatile int64_t x564 = -24213842637LL;
	volatile int32_t t79 = 42987;

	t79 = (x561<<((x562%x563)<=x564));

	if (t79 != 193586) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x573 = 108U;
	uint32_t x574 = UINT32_MAX;
	int16_t x575 = -1;
	int8_t x576 = INT8_MIN;

	t80 = (x573<<((x574%x575)<=x576));

	if (t80 != 216) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x585 = INT16_MAX;
	static int16_t x586 = INT16_MAX;
	int64_t x587 = INT64_MAX;
	int32_t t81 = -60028404;

	t81 = (x585<<((x586%x587)<=x588));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x589 = 51U;
	uint8_t x590 = 0U;
	int64_t x591 = INT64_MIN;
	int16_t x592 = INT16_MAX;

	t82 = (x589<<((x590%x591)<=x592));

	if (t82 != 102) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x597 = 352068599LLU;
	static uint32_t x598 = 21U;
	int16_t x599 = INT16_MAX;
	int32_t x600 = INT32_MIN;
	uint64_t t83 = 260468090378LLU;

	t83 = (x597<<((x598%x599)<=x600));

	if (t83 != 704137198LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x601 = 43741;
	static volatile int8_t x603 = INT8_MIN;
	uint8_t x604 = UINT8_MAX;
	int32_t t84 = -300412;

	t84 = (x601<<((x602%x603)<=x604));

	if (t84 != 87482) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x605 = 0;
	uint8_t x606 = 1U;
	volatile uint32_t x607 = 27971U;
	int64_t x608 = INT64_MIN;
	int32_t t85 = 17;

	t85 = (x605<<((x606%x607)<=x608));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x614 = 50347950LLU;
	uint64_t x615 = UINT64_MAX;
	int32_t t86 = 464678273;

	t86 = (x613<<((x614%x615)<=x616));

	if (t86 != 6) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x621 = 110U;
	volatile int64_t x622 = INT64_MAX;
	int8_t x624 = INT8_MAX;
	int32_t t87 = 6466081;

	t87 = (x621<<((x622%x623)<=x624));

	if (t87 != 110) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x629 = 24327U;
	int64_t x630 = INT64_MAX;
	int16_t x631 = -1;
	int16_t x632 = -186;
	volatile int32_t t88 = -12057;

	t88 = (x629<<((x630%x631)<=x632));

	if (t88 != 24327) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x633 = INT32_MAX;
	static uint32_t x634 = UINT32_MAX;
	int16_t x635 = 44;
	static int64_t x636 = -1LL;
	volatile int32_t t89 = INT32_MAX;

	t89 = (x633<<((x634%x635)<=x636));

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x637 = 3;
	int8_t x638 = INT8_MIN;
	int8_t x639 = INT8_MAX;
	volatile int32_t x640 = -1;
	volatile int32_t t90 = 0;

	t90 = (x637<<((x638%x639)<=x640));

	if (t90 != 6) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x645 = UINT8_MAX;
	uint64_t x646 = 22346LLU;
	static volatile int8_t x648 = -1;
	static volatile int32_t t91 = 113487181;

	t91 = (x645<<((x646%x647)<=x648));

	if (t91 != 510) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x649 = 3364340;
	uint8_t x650 = 0U;
	volatile int16_t x651 = -22;
	static volatile int32_t t92 = -87038957;

	t92 = (x649<<((x650%x651)<=x652));

	if (t92 != 3364340) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x661 = 6416U;
	static int32_t x663 = -7;
	int32_t t93 = -2;

	t93 = (x661<<((x662%x663)<=x664));

	if (t93 != 12832) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x669 = INT8_MAX;
	int8_t x671 = INT8_MIN;
	volatile uint8_t x672 = 21U;
	volatile int32_t t94 = 2174;

	t94 = (x669<<((x670%x671)<=x672));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x678 = INT16_MIN;
	uint16_t x679 = UINT16_MAX;
	int64_t x680 = INT64_MIN;
	int32_t t95 = 1868477;

	t95 = (x677<<((x678%x679)<=x680));

	if (t95 != 4) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x690 = 1020711426U;
	int8_t x692 = INT8_MIN;

	t96 = (x689<<((x690%x691)<=x692));

	if (t96 != 72656U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x702 = INT8_MAX;
	int32_t x703 = 3;
	int32_t x704 = -1;
	static uint64_t t97 = UINT64_MAX;

	t97 = (x701<<((x702%x703)<=x704));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x709 = UINT16_MAX;
	uint32_t x710 = 1689U;
	int32_t x711 = -452;
	int16_t x712 = INT16_MIN;
	int32_t t98 = 459;

	t98 = (x709<<((x710%x711)<=x712));

	if (t98 != 131070) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x714 = -10;
	int64_t x716 = -1957136397547569LL;
	int32_t t99 = -21853183;

	t99 = (x713<<((x714%x715)<=x716));

	if (t99 != 6) { NG(); } else { ; }
	
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

