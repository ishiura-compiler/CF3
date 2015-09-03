#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x16 = 486845244575088LL;
uint16_t x30 = UINT16_MAX;
volatile int64_t t2 = -175LL;
int64_t x64 = 4851821LL;
int8_t x81 = 1;
int64_t x82 = INT64_MAX;
volatile int32_t t8 = 1;
static int32_t x110 = INT32_MAX;
volatile uint32_t t9 = 111626485U;
int16_t x113 = INT16_MIN;
volatile int32_t t10 = -674370756;
static uint64_t x118 = 24099LLU;
int8_t x120 = -1;
volatile int8_t x123 = INT8_MAX;
volatile int64_t x127 = 0LL;
uint8_t x129 = 5U;
int64_t x131 = INT64_MIN;
uint64_t t17 = 5404476838LLU;
volatile uint32_t x154 = UINT32_MAX;
static volatile int16_t x156 = INT16_MIN;
int64_t x165 = INT64_MAX;
uint64_t x167 = 1103290427210LLU;
int64_t x172 = -253259744590182056LL;
static uint16_t x173 = 1243U;
int64_t x176 = 94780964336518LL;
int64_t x185 = -1LL;
uint16_t x188 = 3U;
int32_t x201 = INT32_MAX;
int64_t x210 = 1115616127184362LL;
int16_t x216 = INT16_MIN;
uint8_t x222 = 2U;
int16_t x223 = INT16_MIN;
uint16_t x230 = 0U;
uint16_t x234 = 59U;
static int16_t x235 = -1;
uint8_t x248 = 32U;
int64_t x252 = INT64_MIN;
volatile int32_t x262 = 1;
volatile uint8_t x270 = 11U;
int8_t x271 = INT8_MIN;
volatile int64_t x277 = INT64_MAX;
int8_t x281 = INT8_MIN;
int32_t x284 = -5928;
static uint16_t x303 = 16328U;
uint8_t x308 = 15U;
volatile uint64_t t38 = 2726942263486LLU;
volatile uint64_t t39 = 66454186784338973LLU;
int32_t x326 = 601;
volatile uint32_t x332 = 604U;
volatile int32_t t41 = -3;
int64_t x339 = -8LL;
int32_t x340 = 7146;
int32_t x342 = 56488;
int16_t x344 = 1978;
int16_t x352 = -3732;
volatile int8_t x361 = INT8_MIN;
int32_t x371 = INT32_MIN;
static volatile int64_t x373 = -201046107LL;
volatile int64_t x376 = -57LL;
static volatile uint64_t t48 = 724393810006204428LLU;
int8_t x377 = INT8_MIN;
int16_t x385 = INT16_MIN;
volatile int32_t t52 = -1;
static volatile int32_t t53 = -78177;
static int16_t x405 = -1;
volatile int64_t t54 = 99452703732532LL;
volatile uint16_t x427 = 3787U;
volatile int64_t x429 = 115753853956LL;
static volatile int32_t x434 = 203;
uint32_t x435 = 89U;
int16_t x438 = 175;
volatile int32_t t62 = -23357889;
uint64_t x470 = UINT64_MAX;
static int32_t x472 = 892;
volatile uint16_t x473 = 23U;
int64_t x475 = 4143522316708LL;
uint64_t x476 = 245185LLU;
static volatile int8_t x479 = INT8_MIN;
volatile uint64_t x496 = 30LLU;
int32_t x500 = INT32_MIN;
static int16_t x511 = 50;
static volatile uint8_t x528 = UINT8_MAX;
static volatile uint64_t t70 = 617199177468217LLU;
volatile uint8_t x551 = UINT8_MAX;
volatile int8_t x552 = -1;
int8_t x559 = -1;
volatile int32_t x568 = INT32_MIN;
volatile uint16_t x574 = UINT16_MAX;
static int32_t t77 = -87;
uint64_t t78 = 785409617431893096LLU;
uint64_t x587 = 2211655787096LLU;
uint64_t x589 = 1LLU;
uint8_t x613 = UINT8_MAX;
static int32_t x617 = INT32_MAX;
int16_t x620 = -4021;
static volatile int32_t t83 = -56;
int64_t x624 = INT64_MAX;
uint64_t t84 = 953110448540519LLU;
int16_t x631 = INT16_MIN;
uint32_t x634 = 53U;
static volatile uint32_t t87 = 1640495536U;
volatile uint64_t x645 = 344LLU;
static uint32_t x646 = 361U;
volatile uint64_t t88 = 31805480699667LLU;
int32_t t90 = -1;
int16_t x704 = INT16_MIN;
static int64_t x713 = 768492179286622LL;
int8_t x715 = -22;
static uint32_t x738 = UINT32_MAX;
int64_t x747 = INT64_MIN;


void f0(void) {
	int64_t x13 = -29666536832LL;
	static volatile int16_t x14 = 1641;
	int16_t x15 = INT16_MAX;
	int64_t t0 = 1999053876LL;

	t0 = (x13&(x14>>(x15==x16)));

	if (t0 != 512LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x25 = 109085U;
	uint64_t x26 = 414706166382203405LLU;
	int32_t x27 = INT32_MIN;
	volatile int32_t x28 = 86;
	volatile uint64_t t1 = 418408660LLU;

	t1 = (x25&(x26>>(x27==x28)));

	if (t1 != 525LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x29 = 105431425717LL;
	int8_t x31 = 0;
	int32_t x32 = INT32_MAX;

	t2 = (x29&(x30>>(x31==x32)));

	if (t2 != 58037LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x61 = -1LL;
	uint64_t x62 = 5716813264143690711LLU;
	int64_t x63 = INT64_MIN;
	volatile uint64_t t3 = 8206627724233LLU;

	t3 = (x61&(x62>>(x63==x64)));

	if (t3 != 5716813264143690711LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x65 = 120890U;
	uint32_t x66 = UINT32_MAX;
	uint16_t x67 = 21936U;
	static int8_t x68 = INT8_MIN;
	uint32_t t4 = 6U;

	t4 = (x65&(x66>>(x67==x68)));

	if (t4 != 120890U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x69 = INT64_MAX;
	uint64_t x70 = UINT64_MAX;
	uint8_t x71 = 1U;
	int8_t x72 = INT8_MIN;
	volatile uint64_t t5 = 10321LLU;

	t5 = (x69&(x70>>(x71==x72)));

	if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x77 = INT32_MIN;
	uint8_t x78 = UINT8_MAX;
	int64_t x79 = INT64_MIN;
	uint8_t x80 = 41U;
	volatile int32_t t6 = 34395;

	t6 = (x77&(x78>>(x79==x80)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x83 = 1956;
	uint32_t x84 = 10776287U;
	int64_t t7 = -57650627753309LL;

	t7 = (x81&(x82>>(x83==x84)));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x89 = 19U;
	volatile int8_t x90 = INT8_MAX;
	volatile int64_t x91 = INT64_MIN;
	int32_t x92 = -83;

	t8 = (x89&(x90>>(x91==x92)));

	if (t8 != 19) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x109 = 35389U;
	volatile uint8_t x111 = 0U;
	int8_t x112 = INT8_MAX;

	t9 = (x109&(x110>>(x111==x112)));

	if (t9 != 35389U) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x114 = 0;
	volatile uint64_t x115 = 12068420632988964LLU;
	int32_t x116 = 306;

	t10 = (x113&(x114>>(x115==x116)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x117 = INT8_MIN;
	int64_t x119 = INT64_MIN;
	volatile uint64_t t11 = 2225870631031245951LLU;

	t11 = (x117&(x118>>(x119==x120)));

	if (t11 != 24064LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x121 = INT64_MIN;
	int32_t x122 = 11152;
	int32_t x124 = INT32_MIN;
	int64_t t12 = 135563610LL;

	t12 = (x121&(x122>>(x123==x124)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x125 = 196;
	uint8_t x126 = 54U;
	volatile uint16_t x128 = 26203U;
	int32_t t13 = -2257598;

	t13 = (x125&(x126>>(x127==x128)));

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x130 = 13U;
	int8_t x132 = INT8_MIN;
	int32_t t14 = -1250140;

	t14 = (x129&(x130>>(x131==x132)));

	if (t14 != 5) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x133 = 13;
	static int64_t x134 = 9168264LL;
	volatile int8_t x135 = INT8_MAX;
	int16_t x136 = INT16_MIN;
	int64_t t15 = 52112288680660LL;

	t15 = (x133&(x134>>(x135==x136)));

	if (t15 != 8LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x137 = UINT64_MAX;
	int16_t x138 = 5371;
	int32_t x139 = -1;
	int32_t x140 = -1;
	uint64_t t16 = 176892374445065LLU;

	t16 = (x137&(x138>>(x139==x140)));

	if (t16 != 2685LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x141 = 747639406905LLU;
	uint16_t x142 = UINT16_MAX;
	int16_t x143 = -1;
	uint8_t x144 = 45U;

	t17 = (x141&(x142>>(x143==x144)));

	if (t17 != 313LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x153 = 47U;
	volatile uint8_t x155 = 2U;
	uint32_t t18 = 6937U;

	t18 = (x153&(x154>>(x155==x156)));

	if (t18 != 47U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x166 = 18U;
	int64_t x168 = -2698922954350358197LL;
	int64_t t19 = -48349338LL;

	t19 = (x165&(x166>>(x167==x168)));

	if (t19 != 18LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x170 = 479143623U;
	uint64_t x171 = 39845585814979763LLU;
	volatile uint32_t t20 = 348536U;

	t20 = (x169&(x170>>(x171==x172)));

	if (t20 != 479133696U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x174 = 1750288303188431239LL;
	static uint16_t x175 = 2U;
	volatile int64_t t21 = -65LL;

	t21 = (x173&(x174>>(x175==x176)));

	if (t21 != 131LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x186 = INT64_MAX;
	uint64_t x187 = UINT64_MAX;
	int64_t t22 = INT64_MAX;

	t22 = (x185&(x186>>(x187==x188)));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x202 = 226U;
	static uint64_t x203 = 1LLU;
	uint64_t x204 = 4918752186208828LLU;
	volatile uint32_t t23 = 2U;

	t23 = (x201&(x202>>(x203==x204)));

	if (t23 != 226U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x209 = UINT64_MAX;
	int8_t x211 = -1;
	int16_t x212 = INT16_MIN;
	static uint64_t t24 = 15077211203487LLU;

	t24 = (x209&(x210>>(x211==x212)));

	if (t24 != 1115616127184362LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x213 = -3LL;
	uint32_t x214 = UINT32_MAX;
	static int16_t x215 = -1071;
	int64_t t25 = 2501372665259LL;

	t25 = (x213&(x214>>(x215==x216)));

	if (t25 != 4294967293LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x221 = INT64_MIN;
	static uint16_t x224 = UINT16_MAX;
	volatile int64_t t26 = -346471503LL;

	t26 = (x221&(x222>>(x223==x224)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x229 = INT64_MAX;
	int8_t x231 = -1;
	int8_t x232 = -1;
	int64_t t27 = -29677880937802526LL;

	t27 = (x229&(x230>>(x231==x232)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x233 = 6609;
	volatile int16_t x236 = INT16_MIN;
	int32_t t28 = 208;

	t28 = (x233&(x234>>(x235==x236)));

	if (t28 != 17) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x245 = 274U;
	uint16_t x246 = 1U;
	int16_t x247 = -801;
	static volatile int32_t t29 = -441192;

	t29 = (x245&(x246>>(x247==x248)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x249 = INT16_MIN;
	uint8_t x250 = 10U;
	int32_t x251 = INT32_MIN;
	volatile int32_t t30 = -170;

	t30 = (x249&(x250>>(x251==x252)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x253 = INT64_MAX;
	static uint32_t x254 = UINT32_MAX;
	int16_t x255 = INT16_MIN;
	int16_t x256 = -1;
	int64_t t31 = 8107707156887LL;

	t31 = (x253&(x254>>(x255==x256)));

	if (t31 != 4294967295LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x257 = INT8_MIN;
	static int64_t x258 = INT64_MAX;
	volatile uint16_t x259 = 2U;
	int64_t x260 = -1LL;
	volatile int64_t t32 = 1749127LL;

	t32 = (x257&(x258>>(x259==x260)));

	if (t32 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x261 = 0U;
	static uint8_t x263 = 1U;
	int16_t x264 = INT16_MAX;
	static volatile int32_t t33 = 15;

	t33 = (x261&(x262>>(x263==x264)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x269 = 8;
	uint8_t x272 = 77U;
	int32_t t34 = 4781;

	t34 = (x269&(x270>>(x271==x272)));

	if (t34 != 8) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x278 = UINT64_MAX;
	static int64_t x279 = INT64_MIN;
	static int8_t x280 = INT8_MAX;
	volatile uint64_t t35 = 5472268LLU;

	t35 = (x277&(x278>>(x279==x280)));

	if (t35 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x282 = 12LL;
	volatile int8_t x283 = -4;
	volatile int64_t t36 = 5248134232LL;

	t36 = (x281&(x282>>(x283==x284)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x301 = INT16_MAX;
	volatile int32_t x302 = INT32_MAX;
	int16_t x304 = INT16_MAX;
	volatile int32_t t37 = -224;

	t37 = (x301&(x302>>(x303==x304)));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x305 = -18463973014LL;
	uint64_t x306 = UINT64_MAX;
	uint32_t x307 = 205U;

	t38 = (x305&(x306>>(x307==x308)));

	if (t38 != 18446744055245578602LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x309 = UINT8_MAX;
	uint64_t x310 = 674168924LLU;
	int8_t x311 = INT8_MAX;
	static int8_t x312 = INT8_MAX;

	t39 = (x309&(x310>>(x311==x312)));

	if (t39 != 46LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x325 = 25792086853LLU;
	static uint64_t x327 = UINT64_MAX;
	int8_t x328 = INT8_MAX;
	uint64_t t40 = 10245LLU;

	t40 = (x325&(x326>>(x327==x328)));

	if (t40 != 577LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x329 = INT32_MIN;
	uint16_t x330 = 2U;
	volatile uint8_t x331 = 19U;

	t41 = (x329&(x330>>(x331==x332)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x337 = -1;
	uint64_t x338 = UINT64_MAX;
	uint64_t t42 = UINT64_MAX;

	t42 = (x337&(x338>>(x339==x340)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x341 = INT16_MIN;
	static int64_t x343 = 274338891954288LL;
	static volatile int32_t t43 = -1051041;

	t43 = (x341&(x342>>(x343==x344)));

	if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x349 = 0;
	volatile uint8_t x350 = 5U;
	int16_t x351 = INT16_MIN;
	static int32_t t44 = 1858;

	t44 = (x349&(x350>>(x351==x352)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x362 = 90U;
	uint8_t x363 = UINT8_MAX;
	int64_t x364 = INT64_MAX;
	volatile int32_t t45 = 2441;

	t45 = (x361&(x362>>(x363==x364)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x365 = -1LL;
	uint64_t x366 = UINT64_MAX;
	int64_t x367 = -39214742629LL;
	int64_t x368 = 18965954008LL;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (x365&(x366>>(x367==x368)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x369 = 0;
	int32_t x370 = INT32_MAX;
	static uint32_t x372 = 148778U;
	int32_t t47 = 838102;

	t47 = (x369&(x370>>(x371==x372)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x374 = UINT64_MAX;
	int16_t x375 = -1;

	t48 = (x373&(x374>>(x375==x376)));

	if (t48 != 18446744073508505509LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x378 = INT16_MAX;
	static int8_t x379 = -1;
	uint16_t x380 = 127U;
	volatile int32_t t49 = -241343;

	t49 = (x377&(x378>>(x379==x380)));

	if (t49 != 32640) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x381 = 13925;
	int8_t x382 = INT8_MAX;
	uint32_t x383 = 40U;
	int64_t x384 = 32930452898264001LL;
	static volatile int32_t t50 = 102870;

	t50 = (x381&(x382>>(x383==x384)));

	if (t50 != 101) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x386 = 11377086;
	uint32_t x387 = UINT32_MAX;
	int64_t x388 = INT64_MIN;
	volatile int32_t t51 = 3646808;

	t51 = (x385&(x386>>(x387==x388)));

	if (t51 != 11370496) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x389 = 5U;
	volatile int8_t x390 = 7;
	volatile int64_t x391 = 6670252463076LL;
	int32_t x392 = INT32_MIN;

	t52 = (x389&(x390>>(x391==x392)));

	if (t52 != 5) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MAX;
	volatile int8_t x395 = INT8_MIN;
	uint32_t x396 = UINT32_MAX;

	t53 = (x393&(x394>>(x395==x396)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x406 = 1LL;
	volatile int8_t x407 = INT8_MIN;
	int64_t x408 = INT64_MAX;

	t54 = (x405&(x406>>(x407==x408)));

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x417 = 15693662500LLU;
	uint64_t x418 = 120670538601LLU;
	static volatile int16_t x419 = -1;
	int8_t x420 = INT8_MIN;
	volatile uint64_t t55 = 10240061332702780LLU;

	t55 = (x417&(x418>>(x419==x420)));

	if (t55 != 149792LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x425 = -21087785;
	uint64_t x426 = UINT64_MAX;
	uint32_t x428 = 1587665520U;
	uint64_t t56 = 1795LLU;

	t56 = (x425&(x426>>(x427==x428)));

	if (t56 != 18446744073688463831LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x430 = 5880513977122041LL;
	int64_t x431 = -1LL;
	uint64_t x432 = 3LLU;
	int64_t t57 = -60224574907844444LL;

	t57 = (x429&(x430>>(x431==x432)));

	if (t57 != 46476272640LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x433 = 0;
	int64_t x436 = INT64_MIN;
	volatile int32_t t58 = 869;

	t58 = (x433&(x434>>(x435==x436)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x437 = INT8_MIN;
	int64_t x439 = -1LL;
	volatile int8_t x440 = -37;
	volatile int32_t t59 = -4953;

	t59 = (x437&(x438>>(x439==x440)));

	if (t59 != 128) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x441 = INT64_MIN;
	int8_t x442 = INT8_MAX;
	static int16_t x443 = INT16_MAX;
	uint32_t x444 = 97U;
	int64_t t60 = 110020846181LL;

	t60 = (x441&(x442>>(x443==x444)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x445 = INT64_MIN;
	int64_t x446 = INT64_MAX;
	uint64_t x447 = 825929039474781LLU;
	int64_t x448 = INT64_MIN;
	volatile int64_t t61 = -8956568452695507LL;

	t61 = (x445&(x446>>(x447==x448)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x465 = INT8_MIN;
	volatile uint16_t x466 = 1329U;
	int16_t x467 = INT16_MIN;
	volatile int16_t x468 = INT16_MAX;

	t62 = (x465&(x466>>(x467==x468)));

	if (t62 != 1280) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x469 = 43514905752LLU;
	int32_t x471 = INT32_MIN;
	static volatile uint64_t t63 = 6898701612968051LLU;

	t63 = (x469&(x470>>(x471==x472)));

	if (t63 != 43514905752LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x474 = INT8_MAX;
	static int32_t t64 = -717615;

	t64 = (x473&(x474>>(x475==x476)));

	if (t64 != 23) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x477 = 26U;
	int64_t x478 = 84553155319356LL;
	int32_t x480 = INT32_MIN;
	int64_t t65 = 946282787828129068LL;

	t65 = (x477&(x478>>(x479==x480)));

	if (t65 != 24LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x493 = 1100U;
	int32_t x494 = INT32_MAX;
	int16_t x495 = -89;
	static volatile int32_t t66 = -950271181;

	t66 = (x493&(x494>>(x495==x496)));

	if (t66 != 1100) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x497 = 1034201850LL;
	int32_t x498 = INT32_MAX;
	int64_t x499 = INT64_MAX;
	int64_t t67 = 29826042569421499LL;

	t67 = (x497&(x498>>(x499==x500)));

	if (t67 != 1034201850LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x509 = 8900;
	uint16_t x510 = 31U;
	int16_t x512 = INT16_MIN;
	static volatile int32_t t68 = -156156356;

	t68 = (x509&(x510>>(x511==x512)));

	if (t68 != 4) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x525 = 6357;
	static uint8_t x526 = UINT8_MAX;
	int8_t x527 = 0;
	int32_t t69 = -3885;

	t69 = (x525&(x526>>(x527==x528)));

	if (t69 != 213) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x537 = INT64_MIN;
	uint64_t x538 = UINT64_MAX;
	volatile uint8_t x539 = 63U;
	uint16_t x540 = 7468U;

	t70 = (x537&(x538>>(x539==x540)));

	if (t70 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x541 = 1U;
	uint32_t x542 = 22670365U;
	static uint8_t x543 = 0U;
	uint16_t x544 = 0U;
	volatile uint32_t t71 = 6921377U;

	t71 = (x541&(x542>>(x543==x544)));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x545 = 181343LLU;
	uint32_t x546 = 302643004U;
	int8_t x547 = -1;
	int64_t x548 = INT64_MIN;
	volatile uint64_t t72 = 2LLU;

	t72 = (x545&(x546>>(x547==x548)));

	if (t72 != 50204LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x549 = 1358U;
	static int64_t x550 = INT64_MAX;
	static volatile int64_t t73 = 5838883170019LL;

	t73 = (x549&(x550>>(x551==x552)));

	if (t73 != 1358LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x553 = -5358;
	uint32_t x554 = UINT32_MAX;
	int16_t x555 = INT16_MAX;
	static int64_t x556 = INT64_MIN;
	uint32_t t74 = 532053U;

	t74 = (x553&(x554>>(x555==x556)));

	if (t74 != 4294961938U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x557 = -273021441912131LL;
	static uint16_t x558 = 0U;
	volatile int64_t x560 = 1790946903553284LL;
	int64_t t75 = -12235445158108LL;

	t75 = (x557&(x558>>(x559==x560)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x565 = -1;
	volatile int16_t x566 = 108;
	static uint8_t x567 = 9U;
	volatile int32_t t76 = -1;

	t76 = (x565&(x566>>(x567==x568)));

	if (t76 != 108) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x573 = INT8_MIN;
	volatile uint32_t x575 = 0U;
	int16_t x576 = -1632;

	t77 = (x573&(x574>>(x575==x576)));

	if (t77 != 65408) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x577 = 3939674LLU;
	uint8_t x578 = 7U;
	int16_t x579 = INT16_MIN;
	int8_t x580 = INT8_MIN;

	t78 = (x577&(x578>>(x579==x580)));

	if (t78 != 2LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x585 = 88U;
	uint64_t x586 = 3850883LLU;
	volatile uint32_t x588 = 3481130U;
	static volatile uint64_t t79 = 984783168LLU;

	t79 = (x585&(x586>>(x587==x588)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x590 = 1861300406890803LLU;
	int8_t x591 = INT8_MIN;
	static int8_t x592 = 0;
	volatile uint64_t t80 = 249155392LLU;

	t80 = (x589&(x590>>(x591==x592)));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x609 = INT8_MIN;
	int8_t x610 = INT8_MAX;
	volatile int64_t x611 = -1LL;
	static volatile int32_t x612 = INT32_MIN;
	int32_t t81 = 3210;

	t81 = (x609&(x610>>(x611==x612)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x614 = 10811U;
	static int64_t x615 = INT64_MIN;
	static int8_t x616 = 50;
	volatile uint32_t t82 = 175874U;

	t82 = (x613&(x614>>(x615==x616)));

	if (t82 != 59U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x618 = 7144U;
	int8_t x619 = 1;

	t83 = (x617&(x618>>(x619==x620)));

	if (t83 != 7144) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x621 = 3709U;
	static volatile uint64_t x622 = UINT64_MAX;
	static int64_t x623 = -137535704509667682LL;

	t84 = (x621&(x622>>(x623==x624)));

	if (t84 != 3709LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x625 = INT16_MIN;
	static uint64_t x626 = 118560345LLU;
	volatile uint8_t x627 = 1U;
	uint64_t x628 = 61515314283285LLU;
	static uint64_t t85 = 14877431LLU;

	t85 = (x625&(x626>>(x627==x628)));

	if (t85 != 118554624LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x629 = INT64_MIN;
	int32_t x630 = 1256968;
	int8_t x632 = 0;
	volatile int64_t t86 = -708LL;

	t86 = (x629&(x630>>(x631==x632)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x633 = 60923U;
	int64_t x635 = -1LL;
	int8_t x636 = INT8_MAX;

	t87 = (x633&(x634>>(x635==x636)));

	if (t87 != 49U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x647 = -18279;
	volatile uint16_t x648 = 35U;

	t88 = (x645&(x646>>(x647==x648)));

	if (t88 != 328LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x677 = INT16_MIN;
	uint32_t x678 = 27527U;
	static uint8_t x679 = UINT8_MAX;
	uint8_t x680 = 14U;
	static volatile uint32_t t89 = 637U;

	t89 = (x677&(x678>>(x679==x680)));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x693 = 8279U;
	static uint16_t x694 = UINT16_MAX;
	uint8_t x695 = 0U;
	int64_t x696 = INT64_MAX;

	t90 = (x693&(x694>>(x695==x696)));

	if (t90 != 8279) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x701 = -1;
	volatile uint32_t x702 = 0U;
	static int32_t x703 = INT32_MIN;
	uint32_t t91 = 199U;

	t91 = (x701&(x702>>(x703==x704)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x705 = UINT64_MAX;
	int32_t x706 = INT32_MAX;
	static int8_t x707 = 1;
	int8_t x708 = INT8_MIN;
	uint64_t t92 = 19139358652714LLU;

	t92 = (x705&(x706>>(x707==x708)));

	if (t92 != 2147483647LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x709 = INT64_MIN;
	volatile uint32_t x710 = UINT32_MAX;
	uint16_t x711 = 12442U;
	uint32_t x712 = 3U;
	int64_t t93 = -12791377131LL;

	t93 = (x709&(x710>>(x711==x712)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x714 = INT16_MAX;
	int16_t x716 = INT16_MIN;
	int64_t t94 = 3LL;

	t94 = (x713&(x714>>(x715==x716)));

	if (t94 != 27230LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x721 = 6981298113363LLU;
	int64_t x722 = 264214068089LL;
	uint8_t x723 = UINT8_MAX;
	static volatile uint32_t x724 = UINT32_MAX;
	static volatile uint64_t t95 = 2453641LLU;

	t95 = (x721&(x722>>(x723==x724)));

	if (t95 != 107445619537LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x725 = UINT8_MAX;
	uint32_t x726 = 0U;
	static uint8_t x727 = 82U;
	static int64_t x728 = INT64_MAX;
	uint32_t t96 = 1U;

	t96 = (x725&(x726>>(x727==x728)));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x729 = 6202871U;
	volatile int32_t x730 = 813212579;
	int16_t x731 = INT16_MIN;
	volatile int32_t x732 = INT32_MIN;
	uint32_t t97 = 1976U;

	t97 = (x729&(x730>>(x731==x732)));

	if (t97 != 5808547U) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x737 = -16129744539LL;
	static int16_t x739 = -1;
	int64_t x740 = INT64_MAX;
	volatile int64_t t98 = -1LL;

	t98 = (x737&(x738>>(x739==x740)));

	if (t98 != 1050124645LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x745 = 13659;
	uint32_t x746 = 6653U;
	int8_t x748 = -1;
	volatile uint32_t t99 = 1U;

	t99 = (x745&(x746>>(x747==x748)));

	if (t99 != 4441U) { NG(); } else { ; }
	
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

