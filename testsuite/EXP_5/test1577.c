#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x14 = 45592131LLU;
int64_t t0 = -1540LL;
static int16_t x25 = INT16_MIN;
static uint8_t x28 = UINT8_MAX;
int64_t x41 = 1173486116LL;
uint8_t x65 = 63U;
int32_t t5 = -5;
static volatile int8_t x70 = -1;
uint16_t x71 = UINT16_MAX;
int16_t x72 = INT16_MIN;
static int32_t x96 = 118885;
static volatile uint32_t t7 = UINT32_MAX;
uint64_t x102 = 1827LLU;
int64_t x104 = INT64_MIN;
uint16_t x113 = UINT16_MAX;
static uint64_t x116 = 48592085217LLU;
int32_t x130 = 392;
volatile int8_t x138 = -1;
int8_t x141 = INT8_MIN;
volatile uint32_t x142 = 1577U;
int16_t x150 = 7241;
uint32_t x192 = 874139353U;
static uint32_t x193 = UINT32_MAX;
uint32_t x194 = 822233U;
static int16_t x197 = -1;
int64_t x212 = 42509LL;
volatile int64_t x222 = INT64_MIN;
static uint64_t t20 = 96017066870300781LLU;
int16_t x226 = 29;
volatile int64_t x246 = -1LL;
uint64_t t25 = 80647567LLU;
static int32_t x268 = INT32_MIN;
static int64_t x274 = -1LL;
static uint8_t x275 = 1U;
int64_t x282 = -11773330777112LL;
int64_t x284 = -2LL;
int64_t x290 = INT64_MIN;
uint8_t x291 = 17U;
uint16_t x292 = UINT16_MAX;
static int8_t x296 = INT8_MAX;
volatile int64_t t34 = INT64_MIN;
static int32_t x327 = 95166;
int8_t x334 = -1;
volatile int64_t t37 = 7148475417974958LL;
static int16_t x344 = INT16_MIN;
int8_t x353 = -1;
static int16_t x358 = 1;
int32_t x366 = -54277936;
int64_t x372 = -22529LL;
uint8_t x374 = 5U;
int8_t x387 = -1;
static int32_t x392 = INT32_MAX;
int8_t x397 = INT8_MIN;
int32_t x399 = -1;
uint16_t x434 = UINT16_MAX;
volatile int16_t x439 = 1;
int8_t x440 = -2;
int8_t x443 = 14;
volatile int64_t x470 = INT64_MIN;
volatile uint64_t x472 = 401445057061699187LLU;
int64_t x484 = INT64_MIN;
int64_t x494 = INT64_MIN;
int8_t x496 = INT8_MIN;
uint8_t x499 = 59U;
uint16_t x500 = UINT16_MAX;
int32_t t59 = 116387220;
uint16_t x501 = UINT16_MAX;
int16_t x502 = INT16_MIN;
int64_t t61 = -211251LL;
static int8_t x558 = INT8_MIN;
volatile int8_t x571 = INT8_MIN;
int32_t x572 = INT32_MIN;
int64_t t64 = 757267923069LL;
uint16_t x580 = UINT16_MAX;
int32_t t66 = -18932975;
uint64_t x592 = 10835LLU;
static int8_t x595 = -1;
static uint8_t x596 = UINT8_MAX;
int32_t x598 = INT32_MIN;
volatile int32_t x603 = INT32_MAX;
int16_t x606 = INT16_MIN;
int8_t x629 = 7;
volatile int32_t x634 = INT32_MIN;
volatile int32_t t75 = -4979474;
uint16_t x657 = 4849U;
int16_t x658 = INT16_MIN;
volatile int8_t x665 = INT8_MIN;
uint32_t x671 = 610615U;
uint16_t x672 = 159U;
static int32_t t78 = INT32_MAX;
volatile int32_t t79 = 1802238;
int64_t x682 = INT64_MIN;
static volatile int8_t x717 = -1;
int32_t x737 = INT32_MIN;
static int32_t x762 = INT32_MIN;
static volatile uint32_t t84 = UINT32_MAX;
volatile int32_t x772 = INT32_MIN;
volatile uint32_t x773 = UINT32_MAX;
static int64_t x775 = -1LL;
int8_t x782 = INT8_MIN;
int16_t x785 = -1;
int8_t x787 = -1;
static int8_t x790 = INT8_MAX;
static int8_t x809 = INT8_MIN;
int32_t t90 = 103017624;
int64_t x817 = -76829305435808095LL;
int8_t x818 = -1;
static uint16_t x819 = 1418U;
volatile int16_t x822 = INT16_MIN;
static int64_t x823 = INT64_MAX;
static uint32_t x830 = 1981193U;
volatile uint64_t x841 = UINT64_MAX;
volatile int16_t x843 = -5726;
int16_t x862 = -1;
int64_t x882 = INT64_MIN;
volatile int32_t x884 = 668792364;


void f0(void) {
	static uint8_t x13 = 3U;
	int64_t x15 = INT64_MIN;
	volatile int64_t x16 = INT64_MIN;

	t0 = (x13/((x14<=x15)%x16));

	if (t0 != 3LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x26 = INT8_MIN;
	int32_t x27 = -1;
	static volatile int32_t t1 = -183;

	t1 = (x25/((x26<=x27)%x28));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x29 = 3U;
	volatile uint16_t x30 = UINT16_MAX;
	static volatile uint64_t x31 = 909526871659419LLU;
	static volatile uint64_t x32 = 73872868LLU;
	uint64_t t2 = 3509961194485LLU;

	t2 = (x29/((x30<=x31)%x32));

	if (t2 != 3LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x37 = INT32_MIN;
	int16_t x38 = INT16_MIN;
	volatile int32_t x39 = -1;
	int32_t x40 = INT32_MIN;
	static volatile int32_t t3 = INT32_MIN;

	t3 = (x37/((x38<=x39)%x40));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x42 = 2850463LLU;
	int32_t x43 = INT32_MIN;
	static int32_t x44 = INT32_MIN;
	int64_t t4 = -2040844828LL;

	t4 = (x41/((x42<=x43)%x44));

	if (t4 != 1173486116LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x66 = 24984273U;
	volatile int32_t x67 = INT32_MAX;
	uint8_t x68 = 12U;

	t5 = (x65/((x66<=x67)%x68));

	if (t5 != 63) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x69 = INT16_MIN;
	volatile int32_t t6 = -298;

	t6 = (x69/((x70<=x71)%x72));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x93 = UINT32_MAX;
	uint8_t x94 = 22U;
	volatile uint64_t x95 = UINT64_MAX;

	t7 = (x93/((x94<=x95)%x96));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x101 = INT16_MIN;
	volatile int16_t x103 = INT16_MIN;
	static volatile int64_t t8 = 116168729LL;

	t8 = (x101/((x102<=x103)%x104));

	if (t8 != -32768LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x114 = INT64_MAX;
	int64_t x115 = INT64_MAX;
	static uint64_t t9 = 1236199426447198LLU;

	t9 = (x113/((x114<=x115)%x116));

	if (t9 != 65535LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x129 = -568;
	uint64_t x131 = 2135324882331159033LLU;
	int32_t x132 = INT32_MAX;
	int32_t t10 = 288271813;

	t10 = (x129/((x130<=x131)%x132));

	if (t10 != -568) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x137 = -261;
	static volatile uint16_t x139 = UINT16_MAX;
	uint16_t x140 = UINT16_MAX;
	int32_t t11 = 0;

	t11 = (x137/((x138<=x139)%x140));

	if (t11 != -261) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x143 = 3659960911812128688LLU;
	uint64_t x144 = UINT64_MAX;
	static uint64_t t12 = 38LLU;

	t12 = (x141/((x142<=x143)%x144));

	if (t12 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x149 = INT64_MIN;
	static int64_t x151 = INT64_MAX;
	static int16_t x152 = -3;
	volatile int64_t t13 = INT64_MIN;

	t13 = (x149/((x150<=x151)%x152));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x157 = 2U;
	static uint64_t x158 = 115LLU;
	int8_t x159 = INT8_MIN;
	int32_t x160 = INT32_MIN;
	static volatile int32_t t14 = 61151;

	t14 = (x157/((x158<=x159)%x160));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x185 = -1;
	int64_t x186 = -1LL;
	static int32_t x187 = INT32_MAX;
	int64_t x188 = INT64_MIN;
	volatile int64_t t15 = -31LL;

	t15 = (x185/((x186<=x187)%x188));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x189 = 62;
	static int64_t x190 = -701868228LL;
	int16_t x191 = INT16_MAX;
	volatile uint32_t t16 = 114U;

	t16 = (x189/((x190<=x191)%x192));

	if (t16 != 62U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x195 = -1;
	int16_t x196 = -6519;
	uint32_t t17 = UINT32_MAX;

	t17 = (x193/((x194<=x195)%x196));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x198 = INT16_MIN;
	volatile int16_t x199 = -174;
	uint32_t x200 = UINT32_MAX;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = (x197/((x198<=x199)%x200));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x209 = 17;
	int16_t x210 = INT16_MAX;
	uint32_t x211 = 23188540U;
	int64_t t19 = 24139LL;

	t19 = (x209/((x210<=x211)%x212));

	if (t19 != 17LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x221 = 130006U;
	int8_t x223 = INT8_MAX;
	volatile uint64_t x224 = 21160723224LLU;

	t20 = (x221/((x222<=x223)%x224));

	if (t20 != 130006LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x225 = -53;
	volatile uint64_t x227 = 1510779646030LLU;
	static uint8_t x228 = UINT8_MAX;
	volatile int32_t t21 = -1;

	t21 = (x225/((x226<=x227)%x228));

	if (t21 != -53) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x229 = UINT8_MAX;
	uint32_t x230 = 13685U;
	int16_t x231 = INT16_MIN;
	int32_t x232 = -3270874;
	int32_t t22 = 396;

	t22 = (x229/((x230<=x231)%x232));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x233 = INT16_MAX;
	uint64_t x234 = 19427431LLU;
	uint64_t x235 = 150580644357566981LLU;
	volatile int64_t x236 = INT64_MIN;
	int64_t t23 = -291LL;

	t23 = (x233/((x234<=x235)%x236));

	if (t23 != 32767LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x237 = INT16_MIN;
	static int64_t x238 = -3306591643LL;
	int32_t x239 = INT32_MIN;
	uint16_t x240 = 12811U;
	int32_t t24 = 10080730;

	t24 = (x237/((x238<=x239)%x240));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x245 = 68256388847496LLU;
	int16_t x247 = -1;
	int16_t x248 = INT16_MIN;

	t25 = (x245/((x246<=x247)%x248));

	if (t25 != 68256388847496LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x265 = INT8_MIN;
	uint64_t x266 = 141561957391494638LLU;
	int16_t x267 = INT16_MIN;
	int32_t t26 = 0;

	t26 = (x265/((x266<=x267)%x268));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x273 = UINT32_MAX;
	int64_t x276 = INT64_MIN;
	volatile int64_t t27 = -451302073LL;

	t27 = (x273/((x274<=x275)%x276));

	if (t27 != 4294967295LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x281 = INT16_MIN;
	int16_t x283 = -1;
	volatile int64_t t28 = -224LL;

	t28 = (x281/((x282<=x283)%x284));

	if (t28 != -32768LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x285 = 9U;
	volatile int32_t x286 = INT32_MIN;
	static uint8_t x287 = 1U;
	int8_t x288 = INT8_MIN;
	int32_t t29 = -7;

	t29 = (x285/((x286<=x287)%x288));

	if (t29 != 9) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x289 = 4345031425279LL;
	volatile int64_t t30 = 777872924LL;

	t30 = (x289/((x290<=x291)%x292));

	if (t30 != 4345031425279LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x293 = INT16_MAX;
	static uint64_t x294 = 37LLU;
	int32_t x295 = INT32_MAX;
	volatile int32_t t31 = -512804;

	t31 = (x293/((x294<=x295)%x296));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x297 = 3;
	uint16_t x298 = 4855U;
	static uint32_t x299 = UINT32_MAX;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t32 = -12949468;

	t32 = (x297/((x298<=x299)%x300));

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x317 = -1LL;
	int32_t x318 = -3;
	volatile int64_t x319 = 1794083105921LL;
	int16_t x320 = INT16_MIN;
	int64_t t33 = 2867724LL;

	t33 = (x317/((x318<=x319)%x320));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x321 = INT64_MIN;
	int16_t x322 = -4994;
	static int64_t x323 = -1LL;
	int16_t x324 = INT16_MIN;

	t34 = (x321/((x322<=x323)%x324));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x325 = INT32_MIN;
	int64_t x326 = INT64_MIN;
	int64_t x328 = 318023236843LL;
	int64_t t35 = -59707711458217662LL;

	t35 = (x325/((x326<=x327)%x328));

	if (t35 != -2147483648LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x333 = UINT16_MAX;
	volatile int8_t x335 = INT8_MAX;
	volatile uint32_t x336 = 633U;
	uint32_t t36 = 5760837U;

	t36 = (x333/((x334<=x335)%x336));

	if (t36 != 65535U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x337 = UINT8_MAX;
	volatile int16_t x338 = -3;
	int8_t x339 = INT8_MAX;
	int64_t x340 = INT64_MIN;

	t37 = (x337/((x338<=x339)%x340));

	if (t37 != 255LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x341 = INT64_MAX;
	int8_t x342 = 3;
	volatile int16_t x343 = 26;
	static int64_t t38 = INT64_MAX;

	t38 = (x341/((x342<=x343)%x344));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x354 = 3U;
	uint8_t x355 = 68U;
	volatile uint64_t x356 = UINT64_MAX;
	uint64_t t39 = UINT64_MAX;

	t39 = (x353/((x354<=x355)%x356));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x357 = INT16_MIN;
	volatile uint8_t x359 = 32U;
	volatile uint16_t x360 = UINT16_MAX;
	int32_t t40 = -2509714;

	t40 = (x357/((x358<=x359)%x360));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x361 = -1;
	int16_t x362 = INT16_MIN;
	int8_t x363 = 58;
	static int8_t x364 = INT8_MIN;
	volatile int32_t t41 = -2;

	t41 = (x361/((x362<=x363)%x364));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x365 = -26493727262963398LL;
	static uint16_t x367 = 22371U;
	int32_t x368 = -5033605;
	static int64_t t42 = -1867164LL;

	t42 = (x365/((x366<=x367)%x368));

	if (t42 != -26493727262963398LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x369 = INT64_MAX;
	int32_t x370 = 327;
	uint64_t x371 = UINT64_MAX;
	int64_t t43 = INT64_MAX;

	t43 = (x369/((x370<=x371)%x372));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x373 = 2827;
	static uint32_t x375 = 307746468U;
	uint64_t x376 = 32508032468060308LLU;
	volatile uint64_t t44 = 2344LLU;

	t44 = (x373/((x374<=x375)%x376));

	if (t44 != 2827LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x377 = INT64_MIN;
	int32_t x378 = -2;
	int8_t x379 = 28;
	uint64_t x380 = 4LLU;
	volatile uint64_t t45 = 5582473LLU;

	t45 = (x377/((x378<=x379)%x380));

	if (t45 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x381 = INT64_MIN;
	int16_t x382 = INT16_MIN;
	int32_t x383 = 4771314;
	volatile uint64_t x384 = 3011119800289356LLU;
	uint64_t t46 = 23377542LLU;

	t46 = (x381/((x382<=x383)%x384));

	if (t46 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x385 = UINT32_MAX;
	uint32_t x386 = 827U;
	static int32_t x388 = INT32_MIN;
	uint32_t t47 = UINT32_MAX;

	t47 = (x385/((x386<=x387)%x388));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x389 = UINT64_MAX;
	int8_t x390 = 2;
	int32_t x391 = 10506383;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = (x389/((x390<=x391)%x392));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x398 = -1;
	int64_t x400 = INT64_MIN;
	int64_t t49 = 1LL;

	t49 = (x397/((x398<=x399)%x400));

	if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x429 = 30U;
	uint64_t x430 = 68401100009862LLU;
	int32_t x431 = INT32_MIN;
	volatile int64_t x432 = INT64_MIN;
	int64_t t50 = 497321148792LL;

	t50 = (x429/((x430<=x431)%x432));

	if (t50 != 30LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x433 = 42LL;
	int64_t x435 = INT64_MAX;
	static int16_t x436 = INT16_MAX;
	int64_t t51 = 138860LL;

	t51 = (x433/((x434<=x435)%x436));

	if (t51 != 42LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x437 = -1LL;
	static volatile int32_t x438 = -3;
	volatile int64_t t52 = 140585299994576LL;

	t52 = (x437/((x438<=x439)%x440));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x441 = INT32_MIN;
	int8_t x442 = INT8_MIN;
	int8_t x444 = 3;
	static int32_t t53 = INT32_MIN;

	t53 = (x441/((x442<=x443)%x444));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x453 = INT32_MAX;
	volatile uint64_t x454 = 211764LLU;
	volatile int32_t x455 = INT32_MIN;
	int32_t x456 = INT32_MIN;
	int32_t t54 = INT32_MAX;

	t54 = (x453/((x454<=x455)%x456));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x457 = INT16_MAX;
	static uint8_t x458 = 44U;
	uint64_t x459 = UINT64_MAX;
	uint32_t x460 = 103385674U;
	static volatile uint32_t t55 = 523770329U;

	t55 = (x457/((x458<=x459)%x460));

	if (t55 != 32767U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x469 = INT32_MIN;
	int8_t x471 = INT8_MAX;
	uint64_t t56 = 11512LLU;

	t56 = (x469/((x470<=x471)%x472));

	if (t56 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x481 = 450U;
	static int64_t x482 = -185311LL;
	int16_t x483 = INT16_MAX;
	int64_t t57 = -841LL;

	t57 = (x481/((x482<=x483)%x484));

	if (t57 != 450LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x493 = INT8_MAX;
	static int16_t x495 = -1;
	int32_t t58 = -5;

	t58 = (x493/((x494<=x495)%x496));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x497 = INT8_MIN;
	static int8_t x498 = -14;

	t59 = (x497/((x498<=x499)%x500));

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x503 = INT16_MIN;
	int64_t x504 = INT64_MAX;
	static volatile int64_t t60 = 127195LL;

	t60 = (x501/((x502<=x503)%x504));

	if (t60 != 65535LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x517 = -1373118LL;
	static volatile int8_t x518 = 5;
	static int32_t x519 = 5940;
	uint8_t x520 = 41U;

	t61 = (x517/((x518<=x519)%x520));

	if (t61 != -1373118LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x529 = -1;
	int32_t x530 = 29;
	uint32_t x531 = UINT32_MAX;
	uint8_t x532 = 44U;
	volatile int32_t t62 = 105029;

	t62 = (x529/((x530<=x531)%x532));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x557 = 100;
	int8_t x559 = 8;
	static int64_t x560 = INT64_MIN;
	int64_t t63 = -419154577LL;

	t63 = (x557/((x558<=x559)%x560));

	if (t63 != 100LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x569 = 22822311185701LL;
	int8_t x570 = INT8_MIN;

	t64 = (x569/((x570<=x571)%x572));

	if (t64 != 22822311185701LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x573 = 0U;
	int16_t x574 = INT16_MAX;
	static uint16_t x575 = UINT16_MAX;
	static int8_t x576 = INT8_MIN;
	int32_t t65 = 51;

	t65 = (x573/((x574<=x575)%x576));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x577 = UINT16_MAX;
	volatile int16_t x578 = 22;
	volatile uint64_t x579 = 1143LLU;

	t66 = (x577/((x578<=x579)%x580));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x589 = -1;
	int8_t x590 = -56;
	int32_t x591 = INT32_MAX;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (x589/((x590<=x591)%x592));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x593 = 66534721406LLU;
	volatile uint64_t x594 = UINT64_MAX;
	volatile uint64_t t68 = 90194833604930LLU;

	t68 = (x593/((x594<=x595)%x596));

	if (t68 != 66534721406LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x597 = INT32_MIN;
	uint8_t x599 = UINT8_MAX;
	static int8_t x600 = INT8_MAX;
	volatile int32_t t69 = INT32_MIN;

	t69 = (x597/((x598<=x599)%x600));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x601 = INT8_MAX;
	volatile uint32_t x602 = 2691895U;
	volatile int16_t x604 = INT16_MIN;
	int32_t t70 = 744719;

	t70 = (x601/((x602<=x603)%x604));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x605 = INT16_MIN;
	volatile int8_t x607 = INT8_MAX;
	uint32_t x608 = 117U;
	static volatile uint32_t t71 = 9438U;

	t71 = (x605/((x606<=x607)%x608));

	if (t71 != 4294934528U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x613 = -1LL;
	int8_t x614 = -1;
	uint16_t x615 = 1U;
	int16_t x616 = INT16_MIN;
	int64_t t72 = 675567471513LL;

	t72 = (x613/((x614<=x615)%x616));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x617 = -1;
	int32_t x618 = INT32_MIN;
	int8_t x619 = INT8_MAX;
	static uint8_t x620 = 8U;
	static int32_t t73 = -1;

	t73 = (x617/((x618<=x619)%x620));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x630 = 11012583LL;
	volatile uint32_t x631 = UINT32_MAX;
	int32_t x632 = INT32_MIN;
	static int32_t t74 = -565;

	t74 = (x629/((x630<=x631)%x632));

	if (t74 != 7) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x633 = 17;
	int16_t x635 = -1;
	int32_t x636 = INT32_MAX;

	t75 = (x633/((x634<=x635)%x636));

	if (t75 != 17) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x659 = UINT64_MAX;
	int16_t x660 = INT16_MIN;
	static volatile int32_t t76 = -100;

	t76 = (x657/((x658<=x659)%x660));

	if (t76 != 4849) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x666 = -1;
	volatile uint16_t x667 = UINT16_MAX;
	int8_t x668 = INT8_MIN;
	volatile int32_t t77 = 10658;

	t77 = (x665/((x666<=x667)%x668));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x669 = INT32_MAX;
	int64_t x670 = -32774321717045842LL;

	t78 = (x669/((x670<=x671)%x672));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x673 = 2;
	int32_t x674 = INT32_MIN;
	int8_t x675 = INT8_MIN;
	uint16_t x676 = 45U;

	t79 = (x673/((x674<=x675)%x676));

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x681 = UINT16_MAX;
	int64_t x683 = -507840LL;
	uint16_t x684 = 3U;
	volatile int32_t t80 = -19401030;

	t80 = (x681/((x682<=x683)%x684));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x709 = -1;
	int8_t x710 = INT8_MIN;
	volatile uint16_t x711 = 1943U;
	static int64_t x712 = INT64_MIN;
	int64_t t81 = -498232LL;

	t81 = (x709/((x710<=x711)%x712));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x718 = -1LL;
	static uint32_t x719 = 398101U;
	static uint16_t x720 = 143U;
	static int32_t t82 = 13799998;

	t82 = (x717/((x718<=x719)%x720));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x738 = INT32_MIN;
	int32_t x739 = -1;
	int16_t x740 = INT16_MAX;
	volatile int32_t t83 = INT32_MIN;

	t83 = (x737/((x738<=x739)%x740));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x761 = -1;
	static int32_t x763 = INT32_MAX;
	uint32_t x764 = UINT32_MAX;

	t84 = (x761/((x762<=x763)%x764));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x769 = 22U;
	int32_t x770 = 405;
	int64_t x771 = 728140311439640LL;
	static volatile int32_t t85 = -100;

	t85 = (x769/((x770<=x771)%x772));

	if (t85 != 22) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x774 = -1LL;
	int64_t x776 = 935148581LL;
	volatile int64_t t86 = -352774539636LL;

	t86 = (x773/((x774<=x775)%x776));

	if (t86 != 4294967295LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x781 = -8966LL;
	static uint16_t x783 = 273U;
	static int16_t x784 = INT16_MAX;
	int64_t t87 = 45362LL;

	t87 = (x781/((x782<=x783)%x784));

	if (t87 != -8966LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x786 = 64446LLU;
	volatile int16_t x788 = INT16_MIN;
	int32_t t88 = 1838197;

	t88 = (x785/((x786<=x787)%x788));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x789 = INT32_MIN;
	uint64_t x791 = 17222100160LLU;
	static int8_t x792 = INT8_MIN;
	volatile int32_t t89 = INT32_MIN;

	t89 = (x789/((x790<=x791)%x792));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x810 = 14753091615588781LL;
	uint64_t x811 = 771083163779875957LLU;
	static int32_t x812 = INT32_MAX;

	t90 = (x809/((x810<=x811)%x812));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x813 = -3966;
	uint8_t x814 = 6U;
	int32_t x815 = INT32_MAX;
	uint64_t x816 = 220253638908LLU;
	volatile uint64_t t91 = 1LLU;

	t91 = (x813/((x814<=x815)%x816));

	if (t91 != 18446744073709547650LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x820 = -65163288377699LL;
	int64_t t92 = 3282392838835960433LL;

	t92 = (x817/((x818<=x819)%x820));

	if (t92 != -76829305435808095LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x821 = UINT64_MAX;
	volatile uint8_t x824 = UINT8_MAX;
	uint64_t t93 = UINT64_MAX;

	t93 = (x821/((x822<=x823)%x824));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x829 = INT64_MAX;
	volatile int8_t x831 = INT8_MIN;
	volatile uint16_t x832 = UINT16_MAX;
	static volatile int64_t t94 = INT64_MAX;

	t94 = (x829/((x830<=x831)%x832));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x842 = INT16_MIN;
	volatile uint64_t x844 = 1897987541800LLU;
	static uint64_t t95 = UINT64_MAX;

	t95 = (x841/((x842<=x843)%x844));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x853 = -45153356869255LL;
	int8_t x854 = -59;
	int64_t x855 = 13LL;
	volatile uint64_t x856 = UINT64_MAX;
	uint64_t t96 = 243900290LLU;

	t96 = (x853/((x854<=x855)%x856));

	if (t96 != 18446698920352682361LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x861 = -6;
	volatile uint16_t x863 = 3824U;
	int32_t x864 = INT32_MIN;
	volatile int32_t t97 = 184340;

	t97 = (x861/((x862<=x863)%x864));

	if (t97 != -6) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x881 = INT32_MIN;
	int16_t x883 = INT16_MIN;
	volatile int32_t t98 = INT32_MIN;

	t98 = (x881/((x882<=x883)%x884));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x885 = 6;
	int32_t x886 = INT32_MIN;
	int16_t x887 = 1;
	volatile int16_t x888 = INT16_MIN;
	static int32_t t99 = 132429758;

	t99 = (x885/((x886<=x887)%x888));

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

