#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x9 = -1;
int8_t x10 = -36;
volatile uint64_t t2 = 242LLU;
uint32_t x15 = 6317170U;
int32_t x23 = INT32_MIN;
static volatile int32_t x33 = -1;
static uint8_t x42 = 1U;
uint8_t x43 = UINT8_MAX;
int8_t x54 = INT8_MIN;
int64_t x64 = 1583LL;
volatile int64_t t10 = -789LL;
static uint16_t x68 = UINT16_MAX;
int32_t x80 = INT32_MAX;
volatile uint16_t x86 = UINT16_MAX;
int64_t t15 = 933LL;
uint32_t x95 = 90843962U;
int8_t x115 = INT8_MIN;
int32_t t19 = -5089;
int16_t x122 = -4;
static volatile int8_t x123 = INT8_MIN;
volatile int32_t t20 = 13;
static int8_t x126 = 4;
uint16_t x129 = UINT16_MAX;
static volatile uint64_t t22 = 49272271059170LLU;
volatile int64_t x143 = -1LL;
int64_t x145 = INT64_MAX;
int16_t x156 = -3;
static volatile uint64_t t27 = 383920358558329LLU;
int8_t x200 = INT8_MIN;
int64_t t33 = -3859943LL;
int16_t x201 = INT16_MIN;
int16_t x202 = -1;
volatile uint32_t x210 = UINT32_MAX;
int64_t x212 = INT64_MAX;
int16_t x213 = INT16_MAX;
int16_t x246 = INT16_MIN;
int8_t x270 = -24;
volatile int64_t t40 = -62082965LL;
static volatile int64_t x275 = INT64_MIN;
int16_t x291 = INT16_MIN;
volatile int32_t x302 = INT32_MAX;
volatile int64_t t45 = 365498LL;
static int16_t x308 = INT16_MIN;
int8_t x317 = INT8_MAX;
int32_t x318 = -1;
int8_t x319 = INT8_MAX;
volatile uint64_t t49 = 253326794639LLU;
uint16_t x333 = 15740U;
static uint64_t x335 = 6053LLU;
volatile uint32_t x338 = 63U;
static uint16_t x339 = 41U;
volatile int16_t x348 = -1;
int8_t x371 = 0;
uint64_t x372 = 27970675LLU;
int8_t x385 = INT8_MIN;
static uint32_t x386 = UINT32_MAX;
uint16_t x390 = UINT16_MAX;
int32_t x394 = -1;
uint64_t x402 = UINT64_MAX;
volatile int64_t x403 = INT64_MIN;
int32_t t69 = 63475834;
int8_t x438 = -1;
int16_t x439 = -11;
static volatile int16_t x448 = INT16_MAX;
uint64_t x452 = 138100343225538100LLU;
int64_t x455 = -76557050135000263LL;
volatile uint64_t t74 = 1715158233799LLU;
int32_t x468 = INT32_MIN;
int64_t x469 = -1LL;
static volatile int8_t x472 = 0;
int16_t x475 = INT16_MAX;
volatile int8_t x489 = INT8_MAX;
uint32_t x491 = 1507805313U;
int64_t t80 = 1996751736894LL;
uint64_t x503 = 22LLU;
uint32_t x521 = 4489329U;
int64_t x524 = -1LL;
static uint64_t x529 = 42304511928LLU;
int16_t x545 = -7051;
static volatile int64_t t89 = -49357260446LL;
int64_t t90 = -4930883529873LL;
static volatile uint32_t x577 = 41288U;
static uint32_t x578 = 4743U;
static volatile int16_t x586 = INT16_MAX;
int16_t x587 = -1;
static uint64_t t98 = 16760330LLU;
uint16_t x610 = 9U;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	int32_t x2 = 1;
	uint64_t x3 = 6LLU;
	uint16_t x4 = UINT16_MAX;
	static uint64_t t0 = 23522890LLU;

	t0 = (x1/(x2*(x3+x4)));

	if (t0 != 32765LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	int8_t x6 = INT8_MIN;
	static volatile uint64_t x7 = 4LLU;
	int64_t x8 = 1442078904LL;
	uint64_t t1 = 0LLU;

	t1 = (x5/(x6*(x7+x8)));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x11 = 13839149LLU;
	int64_t x12 = INT64_MIN;

	t2 = (x9/(x10*(x11+x12)));

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 20895U;
	uint64_t x14 = 864972897LLU;
	uint64_t x16 = 1487124666614704LLU;
	uint64_t t3 = 2186047816145671499LLU;

	t3 = (x13/(x14*(x15+x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x21 = UINT8_MAX;
	uint32_t x22 = UINT32_MAX;
	static uint8_t x24 = 1U;
	volatile uint32_t t4 = 84004U;

	t4 = (x21/(x22*(x23+x24)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 14U;
	uint32_t x26 = UINT32_MAX;
	uint64_t x27 = UINT64_MAX;
	int16_t x28 = INT16_MAX;
	static volatile uint64_t t5 = 5175LLU;

	t5 = (x25/(x26*(x27+x28)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x29 = 26651456U;
	int16_t x30 = INT16_MAX;
	uint16_t x31 = 3306U;
	volatile uint64_t x32 = 185787187LLU;
	volatile uint64_t t6 = 858052LLU;

	t6 = (x29/(x30*(x31+x32)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MIN;
	uint8_t x36 = 92U;
	int32_t t7 = 199792;

	t7 = (x33/(x34*(x35+x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -1;
	static uint16_t x44 = 2U;
	int32_t t8 = -5234;

	t8 = (x41/(x42*(x43+x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = 7843951953496LL;
	int8_t x55 = INT8_MIN;
	int8_t x56 = INT8_MIN;
	int64_t t9 = 288365LL;

	t9 = (x53/(x54*(x55+x56)));

	if (t9 != 239378416LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x61 = -787980;
	static volatile int16_t x62 = -927;
	int16_t x63 = INT16_MAX;

	t10 = (x61/(x62*(x63+x64)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x65 = 799U;
	static uint64_t x66 = 13291019298866811LLU;
	uint8_t x67 = UINT8_MAX;
	volatile uint64_t t11 = 293208839237783097LLU;

	t11 = (x65/(x66*(x67+x68)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = INT8_MIN;
	static int8_t x74 = INT8_MAX;
	int64_t x75 = -1LL;
	int32_t x76 = INT32_MIN;
	static volatile int64_t t12 = -2022225611646LL;

	t12 = (x73/(x74*(x75+x76)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x77 = INT64_MAX;
	uint64_t x78 = UINT64_MAX;
	int32_t x79 = -48506148;
	volatile uint64_t t13 = 471715131859LLU;

	t13 = (x77/(x78*(x79+x80)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x85 = 72U;
	int64_t x87 = 5342185913852LL;
	uint8_t x88 = UINT8_MAX;
	static int64_t t14 = -185928727610LL;

	t14 = (x85/(x86*(x87+x88)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x89 = INT64_MIN;
	int8_t x90 = -1;
	static uint8_t x91 = UINT8_MAX;
	int8_t x92 = INT8_MAX;

	t15 = (x89/(x90*(x91+x92)));

	if (t15 != 24144952976059622LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x93 = INT32_MAX;
	int8_t x94 = INT8_MAX;
	uint64_t x96 = 915670112698LLU;
	volatile uint64_t t16 = 8337053635974848274LLU;

	t16 = (x93/(x94*(x95+x96)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x97 = INT32_MIN;
	static uint16_t x98 = UINT16_MAX;
	static int32_t x99 = -27330;
	static uint8_t x100 = UINT8_MAX;
	volatile int32_t t17 = -1;

	t17 = (x97/(x98*(x99+x100)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x113 = -1LL;
	volatile int8_t x114 = INT8_MIN;
	int8_t x116 = -1;
	volatile int64_t t18 = -15LL;

	t18 = (x113/(x114*(x115+x116)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x117 = -3;
	int32_t x118 = -12;
	int16_t x119 = -5335;
	uint8_t x120 = 1U;

	t19 = (x117/(x118*(x119+x120)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x121 = INT32_MAX;
	static uint16_t x124 = 4370U;

	t20 = (x121/(x122*(x123+x124)));

	if (t20 != -126560) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x125 = -1;
	uint16_t x127 = 189U;
	uint32_t x128 = 2211U;
	static uint32_t t21 = 2320U;

	t21 = (x125/(x126*(x127+x128)));

	if (t21 != 447392U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x130 = UINT8_MAX;
	int16_t x131 = -1;
	uint64_t x132 = 526174082192985298LLU;

	t22 = (x129/(x130*(x131+x132)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x133 = -1;
	uint16_t x134 = 617U;
	volatile uint8_t x135 = UINT8_MAX;
	int64_t x136 = -75LL;
	int64_t t23 = 2281010532527729LL;

	t23 = (x133/(x134*(x135+x136)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x141 = 7674651;
	uint16_t x142 = UINT16_MAX;
	uint64_t x144 = UINT64_MAX;
	uint64_t t24 = 467349585881426095LLU;

	t24 = (x141/(x142*(x143+x144)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x146 = INT16_MIN;
	uint16_t x147 = 7U;
	uint8_t x148 = UINT8_MAX;
	static volatile int64_t t25 = -504105112737072LL;

	t25 = (x145/(x146*(x147+x148)));

	if (t25 != -1074331972178LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x153 = 8121U;
	static uint32_t x154 = UINT32_MAX;
	int8_t x155 = -2;
	uint32_t t26 = 120U;

	t26 = (x153/(x154*(x155+x156)));

	if (t26 != 1624U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x157 = 4U;
	int16_t x158 = -1;
	int64_t x159 = 82144420837LL;
	uint64_t x160 = 1607LLU;

	t27 = (x157/(x158*(x159+x160)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x165 = UINT32_MAX;
	int8_t x166 = INT8_MAX;
	uint64_t x167 = 24229LLU;
	volatile int8_t x168 = -5;
	static uint64_t t28 = 3326866067889322200LLU;

	t28 = (x165/(x166*(x167+x168)));

	if (t28 != 1396LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x169 = -1;
	int64_t x170 = -1LL;
	int16_t x171 = INT16_MAX;
	uint16_t x172 = 523U;
	int64_t t29 = -186648550241175959LL;

	t29 = (x169/(x170*(x171+x172)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x173 = -2979;
	int8_t x174 = INT8_MIN;
	int64_t x175 = -1LL;
	static int8_t x176 = INT8_MIN;
	static int64_t t30 = -1455191795376465581LL;

	t30 = (x173/(x174*(x175+x176)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x177 = UINT16_MAX;
	int64_t x178 = INT64_MAX;
	static uint64_t x179 = 124LLU;
	int8_t x180 = INT8_MIN;
	volatile uint64_t t31 = 765075257960974932LLU;

	t31 = (x177/(x178*(x179+x180)));

	if (t31 != 16383LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x193 = 2368LLU;
	volatile uint16_t x194 = 30U;
	uint16_t x195 = UINT16_MAX;
	uint32_t x196 = 729U;
	uint64_t t32 = 2113229524776563LLU;

	t32 = (x193/(x194*(x195+x196)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x197 = -42206899307273LL;
	int64_t x198 = -170LL;
	int8_t x199 = INT8_MIN;

	t33 = (x197/(x198*(x199+x200)));

	if (t33 != -969827649LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x203 = 1264303618LLU;
	int16_t x204 = -1;
	volatile uint64_t t34 = 121481611822091LLU;

	t34 = (x201/(x202*(x203+x204)));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x209 = INT8_MIN;
	uint64_t x211 = UINT64_MAX;
	volatile uint64_t t35 = 1763760952564230049LLU;

	t35 = (x209/(x210*(x211+x212)));

	if (t35 != 2LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x214 = -283293LL;
	uint8_t x215 = 5U;
	volatile int32_t x216 = INT32_MIN;
	volatile int64_t t36 = 16034166239LL;

	t36 = (x213/(x214*(x215+x216)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x245 = INT8_MIN;
	int8_t x247 = INT8_MAX;
	uint32_t x248 = UINT32_MAX;
	volatile uint32_t t37 = 34677U;

	t37 = (x245/(x246*(x247+x248)));

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x257 = INT64_MIN;
	static uint8_t x258 = 25U;
	uint32_t x259 = 1236626U;
	int32_t x260 = INT32_MAX;
	volatile int64_t t38 = -48288625LL;

	t38 = (x257/(x258*(x259+x260)));

	if (t38 != -4234013548LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x265 = INT8_MIN;
	int16_t x266 = -1;
	uint16_t x267 = 106U;
	uint8_t x268 = 3U;
	int32_t t39 = 14121;

	t39 = (x265/(x266*(x267+x268)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x269 = INT16_MIN;
	int64_t x271 = -1107911576092LL;
	int16_t x272 = INT16_MIN;

	t40 = (x269/(x270*(x271+x272)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x273 = INT32_MIN;
	uint32_t x274 = 627U;
	uint64_t x276 = UINT64_MAX;
	uint64_t t41 = 144596464926413LLU;

	t41 = (x273/(x274*(x275+x276)));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x281 = 166787695502841242LL;
	int32_t x282 = 6657;
	int8_t x283 = INT8_MIN;
	int16_t x284 = INT16_MIN;
	int64_t t42 = 16262927LL;

	t42 = (x281/(x282*(x283+x284)));

	if (t42 != -761627046LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x289 = -1;
	int16_t x290 = INT16_MIN;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t43 = 1142928;

	t43 = (x289/(x290*(x291+x292)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x297 = INT8_MIN;
	int8_t x298 = -2;
	uint8_t x299 = 17U;
	int16_t x300 = INT16_MIN;
	volatile int32_t t44 = -322976;

	t44 = (x297/(x298*(x299+x300)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x301 = INT64_MAX;
	int32_t x303 = INT32_MAX;
	uint32_t x304 = 315U;

	t45 = (x301/(x302*(x303+x304)));

	if (t45 != 4294967924LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x305 = INT16_MAX;
	uint16_t x306 = 65U;
	int8_t x307 = INT8_MIN;
	volatile int32_t t46 = 1614001;

	t46 = (x305/(x306*(x307+x308)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x309 = -1LL;
	static uint16_t x310 = 5421U;
	int8_t x311 = -6;
	uint16_t x312 = 1078U;
	static volatile int64_t t47 = -1386721044916193362LL;

	t47 = (x309/(x310*(x311+x312)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x313 = -49937590395126LL;
	int16_t x314 = INT16_MIN;
	int16_t x315 = 7;
	uint64_t x316 = UINT64_MAX;
	uint64_t t48 = 319555731LLU;

	t48 = (x313/(x314*(x315+x316)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x320 = 3142521448LLU;

	t49 = (x317/(x318*(x319+x320)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x329 = INT64_MIN;
	uint16_t x330 = 5U;
	int8_t x331 = -1;
	volatile int64_t x332 = 111008863800LL;
	volatile int64_t t50 = 64301LL;

	t50 = (x329/(x330*(x331+x332)));

	if (t50 != -16617361LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x334 = INT8_MAX;
	static int64_t x336 = -1LL;
	uint64_t t51 = 224548940LLU;

	t51 = (x333/(x334*(x335+x336)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x337 = -1;
	int32_t x340 = -1;
	static volatile uint32_t t52 = 2077419U;

	t52 = (x337/(x338*(x339+x340)));

	if (t52 != 1704352U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x341 = INT32_MIN;
	static int64_t x342 = -1LL;
	int64_t x343 = -1LL;
	static uint64_t x344 = 236LLU;
	uint64_t t53 = 1129199LLU;

	t53 = (x341/(x342*(x343+x344)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x345 = -1;
	uint32_t x346 = UINT32_MAX;
	int8_t x347 = -1;
	volatile uint32_t t54 = 2125586U;

	t54 = (x345/(x346*(x347+x348)));

	if (t54 != 2147483647U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x349 = 54457789163656LLU;
	int8_t x350 = INT8_MIN;
	int64_t x351 = -54LL;
	volatile uint64_t x352 = 6LLU;
	uint64_t t55 = 996832LLU;

	t55 = (x349/(x350*(x351+x352)));

	if (t55 != 8863572455LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x353 = INT32_MAX;
	volatile int64_t x354 = INT64_MIN;
	uint64_t x355 = UINT64_MAX;
	static int16_t x356 = -1800;
	uint64_t t56 = 11385900965861LLU;

	t56 = (x353/(x354*(x355+x356)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x361 = 23407081650LL;
	volatile int64_t x362 = -1LL;
	int32_t x363 = INT32_MIN;
	static int8_t x364 = 1;
	static volatile int64_t t57 = -19003700541LL;

	t57 = (x361/(x362*(x363+x364)));

	if (t57 != 10LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x365 = -1;
	uint8_t x366 = 89U;
	static int64_t x367 = 62370550LL;
	int16_t x368 = INT16_MIN;
	volatile int64_t t58 = 2825300LL;

	t58 = (x365/(x366*(x367+x368)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x369 = INT16_MIN;
	uint32_t x370 = UINT32_MAX;
	static volatile uint64_t t59 = 148240057LLU;

	t59 = (x369/(x370*(x371+x372)));

	if (t59 != 153LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x377 = INT64_MAX;
	static int16_t x378 = INT16_MIN;
	volatile uint32_t x379 = 2504354U;
	int8_t x380 = -1;
	volatile int64_t t60 = 84313226953868LL;

	t60 = (x377/(x378*(x379+x380)));

	if (t60 != 2403981455LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x387 = INT16_MIN;
	uint8_t x388 = 1U;
	uint32_t t61 = 3U;

	t61 = (x385/(x386*(x387+x388)));

	if (t61 != 131075U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x389 = UINT32_MAX;
	uint32_t x391 = UINT32_MAX;
	int16_t x392 = 30;
	static uint32_t t62 = 118329651U;

	t62 = (x389/(x390*(x391+x392)));

	if (t62 != 2259U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x393 = -266157940LL;
	static volatile int32_t x395 = -1;
	uint8_t x396 = 2U;
	volatile int64_t t63 = 1067403103LL;

	t63 = (x393/(x394*(x395+x396)));

	if (t63 != 266157940LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x397 = -22115;
	int16_t x398 = INT16_MAX;
	int16_t x399 = INT16_MAX;
	uint32_t x400 = 268U;
	static volatile uint32_t t64 = 3480823U;

	t64 = (x397/(x398*(x399+x400)));

	if (t64 != 3U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x401 = -2;
	static uint64_t x404 = 22LLU;
	volatile uint64_t t65 = 650721LLU;

	t65 = (x401/(x402*(x403+x404)));

	if (t65 != 2LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x405 = 27U;
	int16_t x406 = 848;
	int16_t x407 = -6;
	volatile uint8_t x408 = 12U;
	int32_t t66 = -74734;

	t66 = (x405/(x406*(x407+x408)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x409 = 58U;
	static uint64_t x410 = UINT64_MAX;
	static int32_t x411 = INT32_MIN;
	uint16_t x412 = UINT16_MAX;
	volatile uint64_t t67 = 47378539368858LLU;

	t67 = (x409/(x410*(x411+x412)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x421 = -110144675685359894LL;
	int16_t x422 = 175;
	static int8_t x423 = 15;
	static int64_t x424 = 2645574923419202LL;
	int64_t t68 = 298974215LL;

	t68 = (x421/(x422*(x423+x424)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x425 = INT16_MIN;
	int32_t x426 = -40;
	int16_t x427 = 371;
	int8_t x428 = INT8_MIN;

	t69 = (x425/(x426*(x427+x428)));

	if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x437 = INT64_MIN;
	static volatile int32_t x440 = 126;
	int64_t t70 = -21812372LL;

	t70 = (x437/(x438*(x439+x440)));

	if (t70 != 80203235103085007LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x445 = -1;
	static uint64_t x446 = UINT64_MAX;
	int8_t x447 = -1;
	uint64_t t71 = 36576581LLU;

	t71 = (x445/(x446*(x447+x448)));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x449 = -1LL;
	volatile int32_t x450 = INT32_MAX;
	static uint32_t x451 = UINT32_MAX;
	uint64_t t72 = 214235787088110650LLU;

	t72 = (x449/(x450*(x451+x452)));

	if (t72 != 2LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x453 = INT32_MIN;
	uint8_t x454 = 14U;
	static volatile int32_t x456 = -1;
	static volatile int64_t t73 = 1969787173230805LL;

	t73 = (x453/(x454*(x455+x456)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x457 = 195LLU;
	int64_t x458 = 4460035601LL;
	int8_t x459 = -1;
	uint64_t x460 = 34865447178068473LLU;

	t74 = (x457/(x458*(x459+x460)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x465 = 25U;
	volatile int16_t x466 = -1;
	uint32_t x467 = 3U;
	uint32_t t75 = 5279U;

	t75 = (x465/(x466*(x467+x468)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x470 = 15196530U;
	int16_t x471 = INT16_MIN;
	volatile int64_t t76 = 265LL;

	t76 = (x469/(x470*(x471+x472)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x473 = INT32_MAX;
	volatile uint8_t x474 = 9U;
	volatile uint64_t x476 = 52587130676854868LLU;
	uint64_t t77 = 4493004445935LLU;

	t77 = (x473/(x474*(x475+x476)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x481 = INT16_MIN;
	int64_t x482 = 11949127868253659LL;
	static int8_t x483 = -42;
	volatile uint8_t x484 = UINT8_MAX;
	volatile int64_t t78 = -11LL;

	t78 = (x481/(x482*(x483+x484)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x485 = INT32_MAX;
	uint64_t x486 = 3609195LLU;
	uint16_t x487 = UINT16_MAX;
	int16_t x488 = INT16_MAX;
	uint64_t t79 = 4609357076LLU;

	t79 = (x485/(x486*(x487+x488)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x490 = -1LL;
	static int8_t x492 = INT8_MIN;

	t80 = (x489/(x490*(x491+x492)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x497 = -7;
	int8_t x498 = INT8_MIN;
	int16_t x499 = INT16_MAX;
	int64_t x500 = -14236183530LL;
	int64_t t81 = 23609618483496LL;

	t81 = (x497/(x498*(x499+x500)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x501 = INT32_MIN;
	volatile int64_t x502 = INT64_MAX;
	volatile uint32_t x504 = 2027928U;
	static uint64_t t82 = 49943870619LLU;

	t82 = (x501/(x502*(x503+x504)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x509 = 57U;
	int8_t x510 = INT8_MIN;
	int32_t x511 = INT32_MAX;
	int32_t x512 = INT32_MIN;
	uint32_t t83 = 117964587U;

	t83 = (x509/(x510*(x511+x512)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x517 = -16;
	uint64_t x518 = 976132767133504LLU;
	uint64_t x519 = 522348139312LLU;
	int64_t x520 = INT64_MIN;
	uint64_t t84 = 21255433743222847LLU;

	t84 = (x517/(x518*(x519+x520)));

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x522 = 3024U;
	uint16_t x523 = UINT16_MAX;
	int64_t t85 = -3LL;

	t85 = (x521/(x522*(x523+x524)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x530 = UINT8_MAX;
	static uint32_t x531 = UINT32_MAX;
	static volatile int32_t x532 = INT32_MAX;
	uint64_t t86 = 1LLU;

	t86 = (x529/(x530*(x531+x532)));

	if (t86 != 19LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x533 = UINT8_MAX;
	uint16_t x534 = 99U;
	uint16_t x535 = 3U;
	int16_t x536 = 151;
	int32_t t87 = 108053;

	t87 = (x533/(x534*(x535+x536)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x541 = INT8_MIN;
	uint8_t x542 = 9U;
	volatile uint8_t x543 = UINT8_MAX;
	static uint8_t x544 = UINT8_MAX;
	static int32_t t88 = -796;

	t88 = (x541/(x542*(x543+x544)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x546 = 178;
	volatile uint8_t x547 = 6U;
	int64_t x548 = 4523425680219447LL;

	t89 = (x545/(x546*(x547+x548)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x549 = -38LL;
	int8_t x550 = INT8_MIN;
	volatile uint32_t x551 = 580U;
	uint8_t x552 = UINT8_MAX;

	t90 = (x549/(x550*(x551+x552)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x557 = -11051732216219LL;
	int64_t x558 = -1LL;
	int32_t x559 = -22;
	static int64_t x560 = -1LL;
	static volatile int64_t t91 = 1676815408242346902LL;

	t91 = (x557/(x558*(x559+x560)));

	if (t91 != -480510096357LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x561 = INT32_MIN;
	static int32_t x562 = INT32_MIN;
	uint16_t x563 = UINT16_MAX;
	uint64_t x564 = 808LLU;
	volatile uint64_t t92 = 13171772079LLU;

	t92 = (x561/(x562*(x563+x564)));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x579 = INT32_MIN;
	uint64_t x580 = 31737LLU;
	volatile uint64_t t93 = 17411082288464978LLU;

	t93 = (x577/(x578*(x579+x580)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x581 = INT8_MIN;
	static int32_t x582 = INT32_MAX;
	int32_t x583 = 70;
	uint32_t x584 = 15417U;
	uint32_t t94 = 62818U;

	t94 = (x581/(x582*(x583+x584)));

	if (t94 != 2U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x585 = INT32_MIN;
	static volatile int8_t x588 = -1;
	volatile int32_t t95 = 655;

	t95 = (x585/(x586*(x587+x588)));

	if (t95 != 32769) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x597 = 107U;
	static uint32_t x598 = 137673666U;
	int32_t x599 = -1;
	volatile int8_t x600 = INT8_MAX;
	volatile uint32_t t96 = 3414349U;

	t96 = (x597/(x598*(x599+x600)));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x601 = 3994U;
	uint32_t x602 = 46065057U;
	int8_t x603 = -47;
	int8_t x604 = INT8_MAX;
	uint32_t t97 = 70382208U;

	t97 = (x601/(x602*(x603+x604)));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x605 = -62799142LL;
	uint64_t x606 = UINT64_MAX;
	uint16_t x607 = 404U;
	static int16_t x608 = -1;

	t98 = (x605/(x606*(x607+x608)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x609 = INT32_MIN;
	uint8_t x611 = 27U;
	int8_t x612 = INT8_MIN;
	volatile int32_t t99 = 0;

	t99 = (x609/(x610*(x611+x612)));

	if (t99 != 2362468) { NG(); } else { ; }
	
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

