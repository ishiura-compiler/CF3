#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 884;
uint32_t x13 = 310881131U;
volatile int8_t x20 = INT8_MIN;
int16_t x23 = INT16_MIN;
static int32_t x26 = -30144860;
volatile int64_t x31 = 49779280LL;
uint32_t t7 = 8U;
uint64_t t9 = 2613062242271LLU;
int32_t x42 = INT32_MAX;
int64_t x43 = 4372742488203004LL;
int8_t x44 = INT8_MIN;
int32_t t10 = 1048409232;
static volatile uint64_t x58 = 42619499042852378LLU;
int8_t x65 = -2;
int32_t x71 = INT32_MAX;
int8_t x72 = -62;
uint32_t t14 = 167U;
uint32_t x82 = 1U;
int32_t t17 = 978986;
static int8_t x94 = INT8_MIN;
int8_t x105 = INT8_MIN;
volatile int32_t x107 = 382;
static uint64_t x130 = UINT64_MAX;
uint8_t x133 = 0U;
int32_t t25 = -3758;
uint8_t x149 = 1U;
int32_t x159 = INT32_MIN;
uint64_t x161 = 48LLU;
int8_t x162 = -1;
volatile uint64_t t30 = 19839733673438873LLU;
int16_t x167 = -1;
uint32_t x168 = 934021162U;
uint64_t x172 = 2096335237286LLU;
volatile int32_t t33 = 551;
uint64_t x181 = 96791122726612055LLU;
int64_t x182 = -50LL;
volatile uint16_t x183 = UINT16_MAX;
int64_t x193 = INT64_MIN;
uint64_t x195 = 4078472235801LLU;
int64_t x201 = -1LL;
int32_t x202 = -1;
int64_t t38 = 1300427727733432721LL;
uint32_t t39 = 1719342U;
int64_t x223 = INT64_MIN;
volatile uint8_t x235 = 0U;
int8_t x238 = 17;
int32_t t42 = INT32_MAX;
int64_t x241 = INT64_MIN;
static volatile int32_t x247 = INT32_MIN;
static uint32_t t45 = 1U;
int8_t x254 = INT8_MIN;
uint8_t x263 = 3U;
int16_t x267 = 3;
uint8_t x269 = UINT8_MAX;
int8_t x282 = -28;
uint16_t x289 = 4U;
uint64_t t55 = 3697830LLU;
volatile int8_t x304 = INT8_MAX;
int64_t x313 = -464LL;
uint64_t x315 = UINT64_MAX;
static uint8_t x341 = 32U;
static uint16_t x342 = 1U;
int64_t x344 = 3LL;
int8_t x346 = INT8_MIN;
uint8_t x351 = UINT8_MAX;
static int16_t x357 = INT16_MAX;
volatile uint16_t x361 = 67U;
int32_t x363 = -1;
int8_t x364 = -13;
int64_t x368 = 1LL;
volatile int8_t x369 = 48;
static int32_t t67 = -3227121;
volatile int32_t x377 = INT32_MIN;
int64_t x380 = -1LL;
int64_t t68 = -725185087617LL;
int16_t x381 = INT16_MAX;
static uint32_t x383 = UINT32_MAX;
volatile int8_t x385 = INT8_MIN;
int32_t t70 = 192288279;
int64_t x391 = INT64_MAX;
int8_t x392 = INT8_MIN;
uint8_t x394 = UINT8_MAX;
volatile int32_t x398 = INT32_MIN;
static int16_t x410 = 1;
static uint32_t t76 = 27U;
static volatile int32_t t78 = 5780;
uint64_t x445 = 169406773271576LLU;
int32_t x447 = INT32_MAX;
static volatile uint16_t x455 = UINT16_MAX;
int16_t x456 = -1;
int32_t t81 = -1;
volatile int16_t x467 = -1;
volatile int16_t x471 = INT16_MIN;
volatile uint64_t t86 = 264806723516LLU;
int32_t x484 = -150;
int32_t t87 = -162;
int32_t x497 = 24;
int8_t x499 = INT8_MAX;
volatile int64_t x512 = 194144954981995LL;
volatile int64_t t92 = 165626LL;
volatile uint8_t x514 = 32U;
int16_t x516 = 2;
volatile int8_t x521 = INT8_MIN;
int64_t x522 = 453306744589731LL;
static volatile int8_t x524 = INT8_MIN;
int64_t x539 = INT64_MIN;
uint64_t t98 = 181824568376131LLU;
volatile uint8_t x550 = 46U;
int64_t x551 = 11681670LL;
uint32_t x552 = UINT32_MAX;


void f0(void) {
	static int8_t x2 = INT8_MAX;
	int16_t x3 = INT16_MAX;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = -311527;

	t0 = (x1*((x2<x3)+x4));

	if (t0 != 28966912) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 9373064LLU;
	uint32_t x6 = UINT32_MAX;
	uint16_t x7 = UINT16_MAX;
	int32_t x8 = INT32_MAX;
	uint64_t t1 = 1LLU;

	t1 = (x5*((x6<x7)+x8));

	if (t1 != 20128501662284408LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int32_t x10 = INT32_MAX;
	int64_t x11 = -1LL;
	static int64_t x12 = -1LL;
	volatile int64_t t2 = -65155938LL;

	t2 = (x9*((x10<x11)+x12));

	if (t2 != 2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	volatile int16_t x15 = INT16_MIN;
	int8_t x16 = INT8_MAX;
	static volatile uint32_t t3 = 48U;

	t3 = (x13*((x14<x15)+x16));

	if (t3 != 827197973U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 59U;
	volatile int64_t x18 = INT64_MAX;
	volatile int16_t x19 = INT16_MAX;
	volatile int32_t t4 = -349;

	t4 = (x17*((x18<x19)+x20));

	if (t4 != -7552) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = 1633;
	volatile uint32_t x22 = 1U;
	volatile int16_t x24 = INT16_MIN;
	int32_t t5 = -45;

	t5 = (x21*((x22<x23)+x24));

	if (t5 != -53508511) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int64_t x27 = -1LL;
	static int8_t x28 = 15;
	int32_t t6 = 5;

	t6 = (x25*((x26<x27)+x28));

	if (t6 != -524288) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	static int16_t x30 = -10;
	int16_t x32 = -1;

	t7 = (x29*((x30<x31)+x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	uint64_t x34 = UINT64_MAX;
	int8_t x35 = -1;
	uint32_t x36 = 449U;
	static volatile uint32_t t8 = 123129603U;

	t8 = (x33*((x34<x35)+x36));

	if (t8 != 4294966847U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 2LLU;
	int16_t x38 = 14;
	int8_t x39 = INT8_MIN;
	uint64_t x40 = 1800LLU;

	t9 = (x37*((x38<x39)+x40));

	if (t9 != 3600LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;

	t10 = (x41*((x42<x43)+x44));

	if (t10 != -8322945) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x57 = INT64_MAX;
	static int8_t x59 = -46;
	volatile int64_t x60 = -1LL;
	volatile int64_t t11 = -227828LL;

	t11 = (x57*((x58<x59)+x60));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x66 = INT32_MAX;
	uint8_t x67 = 1U;
	volatile int8_t x68 = INT8_MIN;
	volatile int32_t t12 = -1;

	t12 = (x65*((x66<x67)+x68));

	if (t12 != 256) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x69 = 27425699U;
	int32_t x70 = INT32_MAX;
	static volatile uint32_t t13 = 971884U;

	t13 = (x69*((x70<x71)+x72));

	if (t13 != 2594573958U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x77 = UINT32_MAX;
	uint64_t x78 = 2879426473234003LLU;
	int64_t x79 = 354435374838619218LL;
	int8_t x80 = INT8_MAX;

	t14 = (x77*((x78<x79)+x80));

	if (t14 != 4294967168U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x81 = UINT16_MAX;
	static int8_t x83 = INT8_MIN;
	int32_t x84 = -1;
	volatile int32_t t15 = -790;

	t15 = (x81*((x82<x83)+x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x85 = UINT32_MAX;
	static int16_t x86 = INT16_MIN;
	static int16_t x87 = INT16_MIN;
	static uint64_t x88 = UINT64_MAX;
	uint64_t t16 = 10665627LLU;

	t16 = (x85*((x86<x87)+x88));

	if (t16 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x89 = 2388;
	int16_t x90 = INT16_MIN;
	volatile int32_t x91 = INT32_MIN;
	volatile uint8_t x92 = 21U;

	t17 = (x89*((x90<x91)+x92));

	if (t17 != 50148) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x93 = -62;
	int32_t x95 = INT32_MAX;
	static uint64_t x96 = UINT64_MAX;
	uint64_t t18 = 18768539103361433LLU;

	t18 = (x93*((x94<x95)+x96));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x97 = 121U;
	int64_t x98 = INT64_MAX;
	int64_t x99 = INT64_MAX;
	uint64_t x100 = UINT64_MAX;
	static volatile uint64_t t19 = 19352818677LLU;

	t19 = (x97*((x98<x99)+x100));

	if (t19 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x106 = INT32_MAX;
	int16_t x108 = INT16_MAX;
	volatile int32_t t20 = 10191058;

	t20 = (x105*((x106<x107)+x108));

	if (t20 != -4194176) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x117 = -3;
	static uint16_t x118 = 3U;
	static volatile uint16_t x119 = UINT16_MAX;
	int32_t x120 = -1;
	volatile int32_t t21 = 7746197;

	t21 = (x117*((x118<x119)+x120));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x125 = INT16_MIN;
	int32_t x126 = 1;
	int8_t x127 = INT8_MIN;
	static int8_t x128 = INT8_MIN;
	int32_t t22 = 787479;

	t22 = (x125*((x126<x127)+x128));

	if (t22 != 4194304) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x129 = UINT16_MAX;
	int64_t x131 = INT64_MIN;
	int64_t x132 = -1LL;
	static int64_t t23 = -18104944221920090LL;

	t23 = (x129*((x130<x131)+x132));

	if (t23 != -65535LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x134 = -14;
	volatile uint64_t x135 = 13092974LLU;
	int8_t x136 = 23;
	volatile int32_t t24 = 38515;

	t24 = (x133*((x134<x135)+x136));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x137 = INT8_MIN;
	uint8_t x138 = 10U;
	int32_t x139 = INT32_MIN;
	static volatile int16_t x140 = -1;

	t25 = (x137*((x138<x139)+x140));

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = INT32_MAX;
	int32_t x147 = -1;
	int32_t x148 = -1;
	int32_t t26 = -53274255;

	t26 = (x145*((x146<x147)+x148));

	if (t26 != 32768) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x150 = UINT64_MAX;
	volatile int16_t x151 = INT16_MAX;
	static volatile uint8_t x152 = UINT8_MAX;
	int32_t t27 = -248451;

	t27 = (x149*((x150<x151)+x152));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x153 = UINT32_MAX;
	volatile uint8_t x154 = UINT8_MAX;
	static uint32_t x155 = 9622170U;
	volatile int16_t x156 = -1;
	uint32_t t28 = 486U;

	t28 = (x153*((x154<x155)+x156));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x157 = INT8_MIN;
	int8_t x158 = INT8_MIN;
	uint64_t x160 = 592660716274880262LLU;
	uint64_t t29 = 71320352LLU;

	t29 = (x157*((x158<x159)+x160));

	if (t29 != 16373148685363084544LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x163 = -1;
	uint8_t x164 = 0U;

	t30 = (x161*((x162<x163)+x164));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x165 = 204LLU;
	int32_t x166 = INT32_MAX;
	uint64_t t31 = 101713772LLU;

	t31 = (x165*((x166<x167)+x168));

	if (t31 != 190540317048LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x169 = -17110500426804LL;
	static uint32_t x170 = UINT32_MAX;
	int8_t x171 = INT8_MAX;
	volatile uint64_t t32 = 199526891683LLU;

	t32 = (x169*((x170<x171)+x172));

	if (t32 != 16837628528730768968LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x173 = 19U;
	volatile int8_t x174 = INT8_MIN;
	int8_t x175 = 44;
	volatile int32_t x176 = -1;

	t33 = (x173*((x174<x175)+x176));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x184 = INT8_MIN;
	uint64_t t34 = 422239145499985808LLU;

	t34 = (x181*((x182<x183)+x184));

	if (t34 != 6154271487429820631LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x194 = 740U;
	int64_t x196 = -1LL;
	volatile int64_t t35 = 0LL;

	t35 = (x193*((x194<x195)+x196));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x203 = UINT64_MAX;
	int8_t x204 = INT8_MAX;
	int64_t t36 = -1417011786LL;

	t36 = (x201*((x202<x203)+x204));

	if (t36 != -127LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x205 = 28U;
	int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MIN;
	volatile int8_t x208 = INT8_MIN;
	volatile uint32_t t37 = 2566U;

	t37 = (x205*((x206<x207)+x208));

	if (t37 != 4294963712U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x209 = 75LL;
	static int8_t x210 = INT8_MIN;
	int16_t x211 = INT16_MIN;
	static volatile uint32_t x212 = 452U;

	t38 = (x209*((x210<x211)+x212));

	if (t38 != 33900LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x213 = INT32_MIN;
	int64_t x214 = -955708156883995809LL;
	uint8_t x215 = UINT8_MAX;
	uint32_t x216 = 273U;

	t39 = (x213*((x214<x215)+x216));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x221 = INT16_MIN;
	int32_t x222 = -13;
	volatile uint8_t x224 = 3U;
	static int32_t t40 = 0;

	t40 = (x221*((x222<x223)+x224));

	if (t40 != -98304) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x233 = 11472U;
	volatile int8_t x234 = -1;
	int16_t x236 = -91;
	volatile int32_t t41 = -108;

	t41 = (x233*((x234<x235)+x236));

	if (t41 != -1032480) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x237 = -1;
	volatile int32_t x239 = INT32_MAX;
	volatile int32_t x240 = INT32_MIN;

	t42 = (x237*((x238<x239)+x240));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x242 = 210922U;
	static int32_t x243 = INT32_MIN;
	static int8_t x244 = -1;
	volatile int64_t t43 = 10483469990208656LL;

	t43 = (x241*((x242<x243)+x244));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x245 = INT16_MIN;
	int8_t x246 = -1;
	volatile uint8_t x248 = UINT8_MAX;
	volatile int32_t t44 = 1521529;

	t44 = (x245*((x246<x247)+x248));

	if (t44 != -8355840) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x249 = 2U;
	volatile int32_t x250 = -1;
	int32_t x251 = INT32_MIN;
	static uint16_t x252 = 30648U;

	t45 = (x249*((x250<x251)+x252));

	if (t45 != 61296U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x253 = INT64_MIN;
	static int64_t x255 = INT64_MAX;
	static uint32_t x256 = UINT32_MAX;
	volatile int64_t t46 = 35465489731783LL;

	t46 = (x253*((x254<x255)+x256));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x261 = INT16_MIN;
	volatile int32_t x262 = 252183;
	static int64_t x264 = -1LL;
	volatile int64_t t47 = -921LL;

	t47 = (x261*((x262<x263)+x264));

	if (t47 != 32768LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x265 = INT8_MIN;
	static uint8_t x266 = 0U;
	int16_t x268 = -1;
	int32_t t48 = -630;

	t48 = (x265*((x266<x267)+x268));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x270 = -1;
	static int8_t x271 = INT8_MIN;
	uint64_t x272 = 1LLU;
	volatile uint64_t t49 = 5044LLU;

	t49 = (x269*((x270<x271)+x272));

	if (t49 != 255LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x273 = 12781U;
	volatile uint8_t x274 = 1U;
	static int32_t x275 = INT32_MAX;
	uint64_t x276 = UINT64_MAX;
	volatile uint64_t t50 = 4479021LLU;

	t50 = (x273*((x274<x275)+x276));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x277 = UINT64_MAX;
	int64_t x278 = -12485184804LL;
	volatile int32_t x279 = 18003;
	int64_t x280 = 10171LL;
	static uint64_t t51 = 61315758LLU;

	t51 = (x277*((x278<x279)+x280));

	if (t51 != 18446744073709541444LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x281 = 16648;
	int16_t x283 = -1;
	int32_t x284 = -49;
	int32_t t52 = -59;

	t52 = (x281*((x282<x283)+x284));

	if (t52 != -799104) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x285 = INT8_MIN;
	static int16_t x286 = -104;
	static uint16_t x287 = 42U;
	int16_t x288 = 2212;
	volatile int32_t t53 = 21;

	t53 = (x285*((x286<x287)+x288));

	if (t53 != -283264) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x290 = 418924923;
	volatile int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t54 = 234948;

	t54 = (x289*((x290<x291)+x292));

	if (t54 != -512) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x297 = UINT16_MAX;
	uint64_t x298 = UINT64_MAX;
	int32_t x299 = 1;
	uint64_t x300 = UINT64_MAX;

	t55 = (x297*((x298<x299)+x300));

	if (t55 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x301 = INT8_MIN;
	int32_t x302 = -869;
	uint16_t x303 = UINT16_MAX;
	static volatile int32_t t56 = -33053;

	t56 = (x301*((x302<x303)+x304));

	if (t56 != -16384) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x314 = 252496700LLU;
	int16_t x316 = -2046;
	static volatile int64_t t57 = 3177936732376552LL;

	t57 = (x313*((x314<x315)+x316));

	if (t57 != 948880LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x317 = UINT64_MAX;
	uint8_t x318 = 2U;
	static volatile int32_t x319 = 1;
	int64_t x320 = -1LL;
	volatile uint64_t t58 = 15841161428681LLU;

	t58 = (x317*((x318<x319)+x320));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x333 = 1U;
	static int64_t x334 = INT64_MAX;
	int16_t x335 = -1;
	int32_t x336 = -1;
	volatile int32_t t59 = -122731;

	t59 = (x333*((x334<x335)+x336));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x343 = -3;
	int64_t t60 = -17388355LL;

	t60 = (x341*((x342<x343)+x344));

	if (t60 != 96LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x345 = 1;
	volatile int64_t x347 = INT64_MAX;
	static uint32_t x348 = 1871U;
	uint32_t t61 = 40457U;

	t61 = (x345*((x346<x347)+x348));

	if (t61 != 1872U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x349 = INT16_MAX;
	uint64_t x350 = UINT64_MAX;
	uint64_t x352 = 77209654702LLU;
	volatile uint64_t t62 = 13701986241867725LLU;

	t62 = (x349*((x350<x351)+x352));

	if (t62 != 2529928755620434LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x353 = -10;
	uint64_t x354 = UINT64_MAX;
	static int8_t x355 = INT8_MAX;
	int16_t x356 = INT16_MIN;
	int32_t t63 = -125835095;

	t63 = (x353*((x354<x355)+x356));

	if (t63 != 327680) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x358 = INT32_MIN;
	uint8_t x359 = UINT8_MAX;
	uint16_t x360 = 6925U;
	int32_t t64 = 649364;

	t64 = (x357*((x358<x359)+x360));

	if (t64 != 226944242) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x362 = 422689874LLU;
	int32_t t65 = -149307;

	t65 = (x361*((x362<x363)+x364));

	if (t65 != -804) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x365 = -173228;
	int16_t x366 = -1;
	int8_t x367 = INT8_MIN;
	volatile int64_t t66 = 147214LL;

	t66 = (x365*((x366<x367)+x368));

	if (t66 != -173228LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x370 = -1;
	static int16_t x371 = 12957;
	int32_t x372 = 18;

	t67 = (x369*((x370<x371)+x372));

	if (t67 != 912) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x378 = -1;
	uint64_t x379 = UINT64_MAX;

	t68 = (x377*((x378<x379)+x380));

	if (t68 != 2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x382 = INT8_MIN;
	int8_t x384 = INT8_MIN;
	static int32_t t69 = -48001376;

	t69 = (x381*((x382<x383)+x384));

	if (t69 != -4161409) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x386 = INT64_MIN;
	static int8_t x387 = -1;
	static int32_t x388 = -1;

	t70 = (x385*((x386<x387)+x388));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x389 = 1;
	int32_t x390 = INT32_MIN;
	static volatile int32_t t71 = 8;

	t71 = (x389*((x390<x391)+x392));

	if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x393 = -1;
	int16_t x395 = -4;
	int32_t x396 = INT32_MAX;
	static int32_t t72 = 2;

	t72 = (x393*((x394<x395)+x396));

	if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x397 = UINT32_MAX;
	static volatile int64_t x399 = 132938157485312691LL;
	static int16_t x400 = -10;
	volatile uint32_t t73 = 574402891U;

	t73 = (x397*((x398<x399)+x400));

	if (t73 != 9U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x405 = 24U;
	int32_t x406 = -470775;
	int32_t x407 = INT32_MAX;
	volatile int16_t x408 = INT16_MAX;
	int32_t t74 = 110410521;

	t74 = (x405*((x406<x407)+x408));

	if (t74 != 786432) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x409 = INT32_MAX;
	int32_t x411 = INT32_MAX;
	uint64_t x412 = UINT64_MAX;
	volatile uint64_t t75 = 252081898873714200LLU;

	t75 = (x409*((x410<x411)+x412));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x413 = -1;
	volatile int64_t x414 = INT64_MIN;
	volatile int64_t x415 = INT64_MIN;
	volatile uint32_t x416 = 1096252U;

	t76 = (x413*((x414<x415)+x416));

	if (t76 != 4293871044U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x417 = 209;
	uint64_t x418 = UINT64_MAX;
	volatile int64_t x419 = -1LL;
	int32_t x420 = -7;
	volatile int32_t t77 = 30981;

	t77 = (x417*((x418<x419)+x420));

	if (t77 != -1463) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x425 = -7;
	uint8_t x426 = 28U;
	static volatile int16_t x427 = -11152;
	int16_t x428 = -1;

	t78 = (x425*((x426<x427)+x428));

	if (t78 != 7) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x437 = UINT32_MAX;
	int64_t x438 = -32369027269LL;
	uint32_t x439 = 199802U;
	volatile int32_t x440 = -13044821;
	volatile uint32_t t79 = 355976028U;

	t79 = (x437*((x438<x439)+x440));

	if (t79 != 13044820U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x446 = INT16_MIN;
	int16_t x448 = -117;
	volatile uint64_t t80 = 20364348377LLU;

	t80 = (x445*((x446<x447)+x448));

	if (t80 != 18427092888010048800LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x453 = INT16_MIN;
	int16_t x454 = -1;

	t81 = (x453*((x454<x455)+x456));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x457 = -8;
	static uint32_t x458 = UINT32_MAX;
	int64_t x459 = 8896548219LL;
	static int32_t x460 = -1;
	volatile int32_t t82 = 165054;

	t82 = (x457*((x458<x459)+x460));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x461 = 5LL;
	uint8_t x462 = 2U;
	static int64_t x463 = INT64_MAX;
	uint32_t x464 = 4629362U;
	int64_t t83 = 4319146182210LL;

	t83 = (x461*((x462<x463)+x464));

	if (t83 != 23146815LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x465 = -1LL;
	static uint32_t x466 = 485495U;
	volatile int16_t x468 = -2277;
	static int64_t t84 = -8626LL;

	t84 = (x465*((x466<x467)+x468));

	if (t84 != 2276LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x469 = -1;
	int8_t x470 = INT8_MIN;
	int64_t x472 = INT64_MAX;
	int64_t t85 = 6958353884624517LL;

	t85 = (x469*((x470<x471)+x472));

	if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x477 = INT16_MAX;
	static int8_t x478 = -3;
	int8_t x479 = INT8_MIN;
	uint64_t x480 = 1202895LLU;

	t86 = (x477*((x478<x479)+x480));

	if (t86 != 39415260465LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x481 = INT16_MIN;
	volatile int16_t x482 = 1143;
	int32_t x483 = -1;

	t87 = (x481*((x482<x483)+x484));

	if (t87 != 4915200) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x493 = -1;
	static int16_t x494 = -1;
	static volatile int8_t x495 = INT8_MAX;
	uint8_t x496 = 35U;
	volatile int32_t t88 = 1039336;

	t88 = (x493*((x494<x495)+x496));

	if (t88 != -36) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x498 = UINT32_MAX;
	int8_t x500 = 1;
	volatile int32_t t89 = -5678179;

	t89 = (x497*((x498<x499)+x500));

	if (t89 != 24) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x501 = 1912LLU;
	volatile int32_t x502 = -1;
	int32_t x503 = INT32_MIN;
	uint16_t x504 = UINT16_MAX;
	uint64_t t90 = 15LLU;

	t90 = (x501*((x502<x503)+x504));

	if (t90 != 125302920LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x505 = 37U;
	int8_t x506 = INT8_MAX;
	static uint8_t x507 = 6U;
	uint64_t x508 = 866393991755787078LLU;
	volatile uint64_t t91 = 21LLU;

	t91 = (x505*((x506<x507)+x508));

	if (t91 != 13609833621254570270LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x509 = INT8_MAX;
	static uint32_t x510 = UINT32_MAX;
	int64_t x511 = INT64_MAX;

	t92 = (x509*((x510<x511)+x512));

	if (t92 != 24656409282713492LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x513 = 2112149132709982445LLU;
	uint64_t x515 = UINT64_MAX;
	uint64_t t93 = 95LLU;

	t93 = (x513*((x514<x515)+x516));

	if (t93 != 6336447398129947335LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x517 = 95U;
	static uint16_t x518 = 27326U;
	int32_t x519 = 19031;
	int32_t x520 = -1;
	volatile int32_t t94 = -12532;

	t94 = (x517*((x518<x519)+x520));

	if (t94 != -95) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x523 = INT32_MIN;
	int32_t t95 = 5861519;

	t95 = (x521*((x522<x523)+x524));

	if (t95 != 16384) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x529 = UINT64_MAX;
	int32_t x530 = INT32_MAX;
	int16_t x531 = -6048;
	static uint64_t x532 = 138912416LLU;
	static volatile uint64_t t96 = 3522LLU;

	t96 = (x529*((x530<x531)+x532));

	if (t96 != 18446744073570639200LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x533 = -37;
	int16_t x534 = INT16_MIN;
	uint8_t x535 = 11U;
	static volatile int32_t x536 = -1;
	volatile int32_t t97 = 7;

	t97 = (x533*((x534<x535)+x536));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x537 = UINT32_MAX;
	int8_t x538 = 7;
	uint64_t x540 = 54625LLU;

	t98 = (x537*((x538<x539)+x540));

	if (t98 != 234612588489375LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x549 = INT16_MIN;
	uint32_t t99 = 94165751U;

	t99 = (x549*((x550<x551)+x552));

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

