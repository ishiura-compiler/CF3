#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = INT8_MIN;
int16_t x8 = INT16_MIN;
int64_t x17 = -4LL;
static uint8_t x19 = 13U;
volatile int32_t t4 = 53427459;
static volatile int8_t x28 = INT8_MIN;
uint32_t x33 = UINT32_MAX;
uint64_t x36 = 13387259LLU;
int64_t x37 = INT64_MIN;
int64_t x47 = INT64_MIN;
volatile int32_t t12 = -1;
volatile int32_t x61 = INT32_MAX;
static int32_t t15 = 15168394;
int32_t x75 = -1;
int32_t x79 = -1;
volatile int32_t t17 = 1;
int8_t x82 = -1;
int32_t t18 = -508789;
volatile uint8_t x85 = 26U;
int16_t x86 = INT16_MAX;
static volatile int32_t x90 = INT32_MIN;
volatile uint8_t x92 = 14U;
static int16_t x93 = -6;
int64_t x95 = -1LL;
int32_t x96 = -1;
volatile int32_t t21 = -55;
static uint16_t x115 = 3253U;
uint8_t x116 = 4U;
int32_t x117 = 49;
int64_t x120 = INT64_MAX;
static uint8_t x131 = UINT8_MAX;
volatile uint16_t x137 = UINT16_MAX;
volatile uint16_t x141 = 15U;
int32_t t31 = 1;
int8_t x145 = INT8_MIN;
int32_t x150 = -1;
int64_t x158 = INT64_MIN;
volatile int32_t t34 = 611;
uint16_t x173 = 703U;
uint64_t x181 = 5613667749800019LLU;
int8_t x192 = INT8_MIN;
uint64_t x201 = 1104985738579902LLU;
int32_t x203 = INT32_MAX;
volatile int32_t t43 = -28102046;
static volatile int64_t x242 = -1LL;
volatile int64_t x250 = INT64_MAX;
uint16_t x251 = UINT16_MAX;
int32_t x254 = INT32_MIN;
uint64_t x259 = 378468LLU;
static int16_t x267 = 645;
int32_t x272 = 829;
int16_t x280 = INT16_MIN;
static volatile int32_t t57 = -3;
int8_t x289 = -1;
volatile uint32_t x290 = 1757U;
int16_t x292 = 610;
int16_t x301 = INT16_MAX;
volatile int32_t x302 = -1;
int32_t x303 = -1;
int16_t x311 = INT16_MIN;
volatile int16_t x312 = -1;
uint8_t x319 = 47U;
int16_t x321 = 105;
volatile uint32_t x322 = 6820U;
int8_t x323 = -1;
uint32_t x327 = 2789U;
static volatile uint8_t x332 = 7U;
int64_t x341 = 1007204891317LL;
static int64_t x366 = INT64_MAX;
static int32_t x368 = INT32_MAX;
uint32_t x373 = UINT32_MAX;
int64_t x382 = 0LL;
volatile int32_t x386 = -55;
int32_t t81 = 6999091;
int16_t x394 = -6301;
int8_t x400 = 7;
static volatile int8_t x408 = -1;
int64_t x410 = INT64_MAX;
uint64_t x413 = 103591047315327991LLU;
int8_t x418 = INT8_MAX;
int32_t t87 = 140374;
int32_t t88 = 37933;
static uint32_t x429 = UINT32_MAX;
int8_t x430 = -25;
int64_t x431 = 9706696442124LL;
int32_t t92 = -821823487;
uint8_t x441 = 31U;
static uint64_t x442 = 67795121097LLU;
int16_t x447 = 201;
volatile int8_t x448 = -24;
volatile uint32_t x452 = UINT32_MAX;
volatile int32_t t95 = -13;
static uint32_t x459 = UINT32_MAX;
int16_t x461 = INT16_MAX;
uint32_t x462 = 1U;
uint8_t x464 = UINT8_MAX;
int32_t t97 = -13536443;
uint32_t x465 = 72U;
static int64_t x468 = -304LL;
int32_t t98 = 250;


void f0(void) {
	volatile int16_t x1 = -1;
	int32_t x2 = -15545221;
	volatile uint64_t x3 = 3068053855LLU;
	uint32_t x4 = 5600U;
	volatile int32_t t0 = 90;

	t0 = (x1<=(x2<(x3-x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 499U;
	uint32_t x6 = 1624000940U;
	volatile int32_t t1 = -14;

	t1 = (x5<=(x6<(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 24727518U;
	uint16_t x10 = 1786U;
	int8_t x11 = INT8_MIN;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = -1678;

	t2 = (x9<=(x10<(x11-x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	uint16_t x14 = UINT16_MAX;
	volatile int16_t x15 = INT16_MAX;
	static int16_t x16 = 0;
	volatile int32_t t3 = 3296;

	t3 = (x13<=(x14<(x15-x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -1;
	uint32_t x20 = 1U;

	t4 = (x17<=(x18<(x19-x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 1;
	int8_t x22 = -1;
	volatile int16_t x23 = INT16_MIN;
	static uint8_t x24 = 7U;
	volatile int32_t t5 = -47564;

	t5 = (x21<=(x22<(x23-x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 1U;
	volatile uint32_t x26 = UINT32_MAX;
	volatile uint32_t x27 = 623U;
	static volatile int32_t t6 = -1;

	t6 = (x25<=(x26<(x27-x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = -1;
	int8_t x35 = -1;
	volatile int32_t t7 = -10;

	t7 = (x33<=(x34<(x35-x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x38 = 226;
	volatile uint16_t x39 = 26494U;
	int64_t x40 = INT64_MAX;
	static volatile int32_t t8 = -3236;

	t8 = (x37<=(x38<(x39-x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	uint16_t x42 = 434U;
	int16_t x43 = INT16_MIN;
	volatile int64_t x44 = INT64_MIN;
	volatile int32_t t9 = -517731834;

	t9 = (x41<=(x42<(x43-x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -89LL;
	volatile int32_t x46 = INT32_MIN;
	static volatile int64_t x48 = -1LL;
	volatile int32_t t10 = -58303005;

	t10 = (x45<=(x46<(x47-x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	int64_t x50 = INT64_MIN;
	int64_t x51 = -3500473588311LL;
	uint32_t x52 = 8381998U;
	volatile int32_t t11 = -122275919;

	t11 = (x49<=(x50<(x51-x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -1LL;
	static int8_t x58 = INT8_MAX;
	static int8_t x59 = INT8_MAX;
	volatile int16_t x60 = INT16_MIN;

	t12 = (x57<=(x58<(x59-x60)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x62 = -202;
	int8_t x63 = -1;
	int8_t x64 = -1;
	int32_t t13 = 81;

	t13 = (x61<=(x62<(x63-x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x65 = 2;
	int8_t x66 = 0;
	uint64_t x67 = 8051696790968260649LLU;
	static volatile int16_t x68 = 15;
	volatile int32_t t14 = -21;

	t14 = (x65<=(x66<(x67-x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x69 = -1;
	int32_t x70 = 36021263;
	int8_t x71 = INT8_MAX;
	uint64_t x72 = 144489901974914LLU;

	t15 = (x69<=(x70<(x71-x72)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = UINT64_MAX;
	uint32_t x74 = 261808U;
	int32_t x76 = -1;
	int32_t t16 = 331;

	t16 = (x73<=(x74<(x75-x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 264638187U;
	uint16_t x78 = UINT16_MAX;
	static volatile int64_t x80 = INT64_MIN;

	t17 = (x77<=(x78<(x79-x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = 12915017616510LLU;
	int64_t x83 = 407184166509007LL;
	int64_t x84 = -1LL;

	t18 = (x81<=(x82<(x83-x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x87 = UINT8_MAX;
	int8_t x88 = -1;
	volatile int32_t t19 = 56112;

	t19 = (x85<=(x86<(x87-x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = -1463;
	static uint16_t x91 = UINT16_MAX;
	volatile int32_t t20 = 114564;

	t20 = (x89<=(x90<(x91-x92)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x94 = -1;

	t21 = (x93<=(x94<(x95-x96)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = UINT64_MAX;
	uint32_t x102 = UINT32_MAX;
	int32_t x103 = -1;
	int64_t x104 = -2LL;
	int32_t t22 = 8636656;

	t22 = (x101<=(x102<(x103-x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x105 = 189614051525966LLU;
	static int8_t x106 = -8;
	uint64_t x107 = 1267830239365123791LLU;
	static volatile uint32_t x108 = UINT32_MAX;
	volatile int32_t t23 = 6065400;

	t23 = (x105<=(x106<(x107-x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = INT64_MAX;
	static volatile uint16_t x110 = 3273U;
	static uint64_t x111 = UINT64_MAX;
	static uint8_t x112 = UINT8_MAX;
	static int32_t t24 = 38;

	t24 = (x109<=(x110<(x111-x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = INT16_MIN;
	int8_t x114 = INT8_MAX;
	int32_t t25 = -381;

	t25 = (x113<=(x114<(x115-x116)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x118 = INT8_MAX;
	uint8_t x119 = UINT8_MAX;
	volatile int32_t t26 = 442055727;

	t26 = (x117<=(x118<(x119-x120)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = 18668U;
	volatile uint16_t x122 = 3U;
	uint32_t x123 = UINT32_MAX;
	static int32_t x124 = 51942;
	volatile int32_t t27 = 160121548;

	t27 = (x121<=(x122<(x123-x124)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = 1603;
	static int64_t x130 = INT64_MIN;
	int16_t x132 = -6;
	int32_t t28 = -4972;

	t28 = (x129<=(x130<(x131-x132)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = -1;
	static uint16_t x134 = 8432U;
	int8_t x135 = 32;
	int64_t x136 = INT64_MAX;
	int32_t t29 = -448978;

	t29 = (x133<=(x134<(x135-x136)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x138 = -27896;
	int16_t x139 = -1;
	static volatile uint64_t x140 = UINT64_MAX;
	int32_t t30 = -13430216;

	t30 = (x137<=(x138<(x139-x140)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x142 = 0U;
	uint8_t x143 = UINT8_MAX;
	volatile int8_t x144 = 1;

	t31 = (x141<=(x142<(x143-x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x146 = -1;
	int32_t x147 = 4409;
	int32_t x148 = -1;
	int32_t t32 = 59;

	t32 = (x145<=(x146<(x147-x148)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = -1;
	volatile int8_t x151 = -15;
	static int8_t x152 = 0;
	volatile int32_t t33 = 909544981;

	t33 = (x149<=(x150<(x151-x152)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x157 = 11608694278710LL;
	uint16_t x159 = UINT16_MAX;
	int64_t x160 = -25143924141LL;

	t34 = (x157<=(x158<(x159-x160)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = INT8_MIN;
	static uint64_t x166 = UINT64_MAX;
	int64_t x167 = INT64_MIN;
	int32_t x168 = INT32_MIN;
	static int32_t t35 = -6;

	t35 = (x165<=(x166<(x167-x168)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = 0;
	static int16_t x170 = 2;
	int16_t x171 = INT16_MIN;
	uint16_t x172 = UINT16_MAX;
	int32_t t36 = 1830;

	t36 = (x169<=(x170<(x171-x172)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x174 = INT64_MIN;
	int8_t x175 = INT8_MIN;
	uint8_t x176 = UINT8_MAX;
	static int32_t t37 = 3588;

	t37 = (x173<=(x174<(x175-x176)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x182 = INT8_MIN;
	uint32_t x183 = UINT32_MAX;
	uint32_t x184 = UINT32_MAX;
	static int32_t t38 = -3;

	t38 = (x181<=(x182<(x183-x184)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x185 = UINT8_MAX;
	int64_t x186 = INT64_MIN;
	static int32_t x187 = INT32_MAX;
	static int16_t x188 = 19;
	int32_t t39 = 6564;

	t39 = (x185<=(x186<(x187-x188)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x189 = -1;
	int64_t x190 = INT64_MAX;
	static int8_t x191 = INT8_MIN;
	volatile int32_t t40 = 1;

	t40 = (x189<=(x190<(x191-x192)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x202 = UINT32_MAX;
	static volatile int8_t x204 = 4;
	int32_t t41 = 540076;

	t41 = (x201<=(x202<(x203-x204)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x205 = INT64_MIN;
	int8_t x206 = INT8_MIN;
	uint16_t x207 = 1U;
	volatile uint16_t x208 = 9256U;
	int32_t t42 = 23878008;

	t42 = (x205<=(x206<(x207-x208)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x221 = UINT16_MAX;
	volatile int32_t x222 = -1;
	uint32_t x223 = 13983487U;
	uint8_t x224 = 0U;

	t43 = (x221<=(x222<(x223-x224)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x225 = -1;
	int16_t x226 = INT16_MIN;
	int32_t x227 = 17874;
	int16_t x228 = INT16_MAX;
	static volatile int32_t t44 = 127771;

	t44 = (x225<=(x226<(x227-x228)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x229 = 491;
	int64_t x230 = 105LL;
	uint64_t x231 = 19099LLU;
	int8_t x232 = INT8_MIN;
	static volatile int32_t t45 = -1;

	t45 = (x229<=(x230<(x231-x232)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x233 = INT8_MAX;
	int16_t x234 = INT16_MIN;
	static int16_t x235 = INT16_MAX;
	int32_t x236 = -1;
	int32_t t46 = 27532;

	t46 = (x233<=(x234<(x235-x236)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x237 = UINT64_MAX;
	int32_t x238 = INT32_MIN;
	int16_t x239 = 625;
	volatile int16_t x240 = -15988;
	volatile int32_t t47 = -3062;

	t47 = (x237<=(x238<(x239-x240)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x241 = 398U;
	volatile int16_t x243 = INT16_MIN;
	int8_t x244 = INT8_MAX;
	volatile int32_t t48 = 46297;

	t48 = (x241<=(x242<(x243-x244)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x245 = INT32_MIN;
	int8_t x246 = INT8_MAX;
	uint8_t x247 = 57U;
	uint32_t x248 = 31U;
	volatile int32_t t49 = -4089996;

	t49 = (x245<=(x246<(x247-x248)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x249 = 10;
	static uint8_t x252 = UINT8_MAX;
	int32_t t50 = -1730;

	t50 = (x249<=(x250<(x251-x252)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x253 = -50260271;
	int16_t x255 = 4147;
	static int8_t x256 = INT8_MAX;
	int32_t t51 = 7794532;

	t51 = (x253<=(x254<(x255-x256)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x257 = INT32_MIN;
	volatile int64_t x258 = INT64_MIN;
	volatile int16_t x260 = -1;
	int32_t t52 = -179;

	t52 = (x257<=(x258<(x259-x260)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x261 = INT16_MAX;
	volatile int16_t x262 = -106;
	static volatile int16_t x263 = 0;
	static int64_t x264 = INT64_MAX;
	int32_t t53 = 4161634;

	t53 = (x261<=(x262<(x263-x264)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x265 = -1;
	static uint16_t x266 = UINT16_MAX;
	int8_t x268 = INT8_MIN;
	static volatile int32_t t54 = 80160032;

	t54 = (x265<=(x266<(x267-x268)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x269 = INT64_MIN;
	static int8_t x270 = 11;
	volatile uint16_t x271 = UINT16_MAX;
	volatile int32_t t55 = -414;

	t55 = (x269<=(x270<(x271-x272)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x273 = 14164877739LLU;
	uint32_t x274 = 7657U;
	int32_t x275 = -201571;
	uint8_t x276 = 0U;
	volatile int32_t t56 = 0;

	t56 = (x273<=(x274<(x275-x276)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x277 = INT8_MIN;
	int16_t x278 = 0;
	uint32_t x279 = 11789792U;

	t57 = (x277<=(x278<(x279-x280)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x281 = UINT64_MAX;
	int8_t x282 = 7;
	volatile uint8_t x283 = UINT8_MAX;
	uint32_t x284 = 44442315U;
	int32_t t58 = -195527;

	t58 = (x281<=(x282<(x283-x284)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x291 = -1;
	volatile int32_t t59 = -84589;

	t59 = (x289<=(x290<(x291-x292)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x297 = UINT8_MAX;
	int32_t x298 = INT32_MAX;
	int16_t x299 = -1;
	static int64_t x300 = -1LL;
	volatile int32_t t60 = -1999;

	t60 = (x297<=(x298<(x299-x300)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x304 = -1;
	volatile int32_t t61 = 78;

	t61 = (x301<=(x302<(x303-x304)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x305 = 127LL;
	int8_t x306 = INT8_MAX;
	static uint32_t x307 = 194U;
	uint16_t x308 = 997U;
	volatile int32_t t62 = 0;

	t62 = (x305<=(x306<(x307-x308)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x309 = UINT8_MAX;
	volatile int64_t x310 = -1771679172038955LL;
	static volatile int32_t t63 = 258356;

	t63 = (x309<=(x310<(x311-x312)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x313 = -4LL;
	static int16_t x314 = -1;
	int32_t x315 = -608280521;
	volatile uint64_t x316 = UINT64_MAX;
	static volatile int32_t t64 = -58042498;

	t64 = (x313<=(x314<(x315-x316)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x317 = -1;
	uint64_t x318 = 16457047LLU;
	volatile uint16_t x320 = 26U;
	int32_t t65 = 73996611;

	t65 = (x317<=(x318<(x319-x320)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x324 = INT16_MIN;
	volatile int32_t t66 = 0;

	t66 = (x321<=(x322<(x323-x324)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x325 = 335U;
	static int16_t x326 = INT16_MIN;
	uint64_t x328 = 121830348387LLU;
	volatile int32_t t67 = 7126;

	t67 = (x325<=(x326<(x327-x328)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x329 = INT32_MIN;
	int16_t x330 = INT16_MAX;
	int16_t x331 = -1;
	static volatile int32_t t68 = 3;

	t68 = (x329<=(x330<(x331-x332)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x337 = 720LLU;
	static int32_t x338 = INT32_MIN;
	static int32_t x339 = INT32_MAX;
	uint32_t x340 = 851U;
	int32_t t69 = 15360522;

	t69 = (x337<=(x338<(x339-x340)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x342 = 62U;
	int64_t x343 = -15815220304LL;
	int64_t x344 = -1LL;
	int32_t t70 = -736137555;

	t70 = (x341<=(x342<(x343-x344)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x345 = -1;
	int32_t x346 = 0;
	uint16_t x347 = 97U;
	static int64_t x348 = 52LL;
	int32_t t71 = 69271177;

	t71 = (x345<=(x346<(x347-x348)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x349 = 136LL;
	volatile uint64_t x350 = 13344433438LLU;
	volatile int32_t x351 = -5360419;
	volatile int32_t x352 = -1;
	volatile int32_t t72 = -1;

	t72 = (x349<=(x350<(x351-x352)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x353 = 61163U;
	int8_t x354 = 51;
	static uint32_t x355 = 0U;
	int32_t x356 = -1;
	int32_t t73 = 898;

	t73 = (x353<=(x354<(x355-x356)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x361 = 7450509U;
	volatile uint64_t x362 = UINT64_MAX;
	uint8_t x363 = UINT8_MAX;
	uint8_t x364 = 67U;
	int32_t t74 = 43;

	t74 = (x361<=(x362<(x363-x364)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x365 = INT8_MIN;
	int8_t x367 = 0;
	static volatile int32_t t75 = 588502997;

	t75 = (x365<=(x366<(x367-x368)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x369 = INT64_MIN;
	static int8_t x370 = 3;
	int16_t x371 = INT16_MIN;
	int32_t x372 = 28479;
	volatile int32_t t76 = -19;

	t76 = (x369<=(x370<(x371-x372)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x374 = -1;
	static volatile int8_t x375 = 1;
	int8_t x376 = INT8_MIN;
	int32_t t77 = 39;

	t77 = (x373<=(x374<(x375-x376)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x377 = 0U;
	int16_t x378 = -1;
	uint16_t x379 = 13434U;
	int8_t x380 = 3;
	volatile int32_t t78 = -10136;

	t78 = (x377<=(x378<(x379-x380)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x381 = 47U;
	static uint32_t x383 = UINT32_MAX;
	uint16_t x384 = 85U;
	volatile int32_t t79 = 4603172;

	t79 = (x381<=(x382<(x383-x384)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x385 = INT64_MIN;
	int64_t x387 = -1LL;
	uint8_t x388 = 3U;
	int32_t t80 = 123051;

	t80 = (x385<=(x386<(x387-x388)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x389 = INT8_MIN;
	static int16_t x390 = INT16_MIN;
	volatile int8_t x391 = INT8_MIN;
	volatile int64_t x392 = INT64_MIN;

	t81 = (x389<=(x390<(x391-x392)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x393 = INT64_MIN;
	int64_t x395 = INT64_MAX;
	uint32_t x396 = 63U;
	static volatile int32_t t82 = 58260207;

	t82 = (x393<=(x394<(x395-x396)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x397 = 3LLU;
	int32_t x398 = INT32_MIN;
	int16_t x399 = 12;
	int32_t t83 = -1910561;

	t83 = (x397<=(x398<(x399-x400)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x405 = INT64_MIN;
	int64_t x406 = -1LL;
	int16_t x407 = -1;
	int32_t t84 = -40471;

	t84 = (x405<=(x406<(x407-x408)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x409 = 1351304U;
	int8_t x411 = 1;
	int8_t x412 = INT8_MIN;
	static volatile int32_t t85 = 591374650;

	t85 = (x409<=(x410<(x411-x412)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x414 = 2048619549LLU;
	int16_t x415 = INT16_MIN;
	int64_t x416 = -93271LL;
	volatile int32_t t86 = 501801;

	t86 = (x413<=(x414<(x415-x416)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x417 = 197U;
	int16_t x419 = 1;
	int64_t x420 = 5395069258128LL;

	t87 = (x417<=(x418<(x419-x420)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x421 = 4U;
	uint64_t x422 = 14747359266LLU;
	volatile uint32_t x423 = UINT32_MAX;
	volatile uint64_t x424 = UINT64_MAX;

	t88 = (x421<=(x422<(x423-x424)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x425 = -34;
	static int16_t x426 = 5;
	int8_t x427 = 1;
	uint16_t x428 = 4U;
	static volatile int32_t t89 = 7;

	t89 = (x425<=(x426<(x427-x428)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x432 = -13538278574LL;
	int32_t t90 = -242455;

	t90 = (x429<=(x430<(x431-x432)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x433 = 42791093893679152LLU;
	uint32_t x434 = UINT32_MAX;
	uint64_t x435 = 19149555599LLU;
	uint16_t x436 = 5U;
	static volatile int32_t t91 = 1583;

	t91 = (x433<=(x434<(x435-x436)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x437 = 4865LLU;
	volatile int64_t x438 = INT64_MIN;
	uint8_t x439 = 13U;
	int16_t x440 = INT16_MIN;

	t92 = (x437<=(x438<(x439-x440)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x443 = 42;
	int16_t x444 = INT16_MIN;
	static volatile int32_t t93 = 4489;

	t93 = (x441<=(x442<(x443-x444)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x445 = INT64_MIN;
	volatile uint64_t x446 = 98700468891481LLU;
	int32_t t94 = -777;

	t94 = (x445<=(x446<(x447-x448)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x449 = 2796863880LLU;
	uint32_t x450 = UINT32_MAX;
	volatile int8_t x451 = -26;

	t95 = (x449<=(x450<(x451-x452)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x457 = -338;
	int64_t x458 = INT64_MAX;
	static uint32_t x460 = UINT32_MAX;
	static int32_t t96 = 15;

	t96 = (x457<=(x458<(x459-x460)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x463 = INT64_MAX;

	t97 = (x461<=(x462<(x463-x464)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x466 = 5U;
	uint8_t x467 = 91U;

	t98 = (x465<=(x466<(x467-x468)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x469 = UINT64_MAX;
	uint8_t x470 = UINT8_MAX;
	static int32_t x471 = 3069;
	int64_t x472 = -8511041524350LL;
	volatile int32_t t99 = 2452734;

	t99 = (x469<=(x470<(x471-x472)));

	if (t99 != 0) { NG(); } else { ; }
	
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

