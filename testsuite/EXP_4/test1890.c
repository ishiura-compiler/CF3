#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 133619611LLU;
static volatile int32_t x9 = INT32_MIN;
int64_t x30 = INT64_MAX;
uint64_t x38 = 1750763848LLU;
uint64_t t8 = 232LLU;
uint64_t x60 = UINT64_MAX;
static uint8_t x68 = 4U;
int64_t x74 = -1LL;
static uint16_t x75 = 11828U;
uint32_t x82 = 297130U;
int64_t x85 = -1740847825462053LL;
volatile int64_t t15 = -891013051442639155LL;
static int32_t x99 = INT32_MIN;
int32_t x102 = INT32_MIN;
static volatile uint64_t x110 = 1LLU;
int8_t x111 = INT8_MIN;
int64_t x119 = -1LL;
volatile int64_t t21 = -17119879431994LL;
uint32_t x121 = 7304U;
int64_t t23 = 3394044LL;
static int32_t x131 = INT32_MIN;
static uint64_t x135 = UINT64_MAX;
uint64_t t25 = 112LLU;
int32_t x137 = INT32_MAX;
uint8_t x143 = 1U;
static int8_t x150 = 48;
static int16_t x151 = INT16_MIN;
static int32_t x152 = 1;
int64_t x153 = INT64_MIN;
int8_t x169 = -1;
int8_t x180 = -1;
static uint16_t x183 = 1837U;
uint16_t x184 = 56U;
int32_t t34 = -24493;
static int16_t x189 = 551;
uint8_t x190 = 111U;
volatile int64_t x197 = 3584247918762LL;
int16_t x199 = INT16_MIN;
int32_t x203 = INT32_MIN;
int32_t x204 = 357307;
int16_t x218 = INT16_MAX;
uint32_t x224 = 16837U;
static uint32_t x225 = 1854U;
volatile uint64_t t43 = 859579LLU;
int32_t x238 = INT32_MIN;
uint8_t x243 = 38U;
int8_t x244 = INT8_MAX;
int32_t x245 = -171;
int16_t x248 = INT16_MAX;
volatile uint8_t x258 = 1U;
int8_t x259 = INT8_MIN;
int32_t t49 = 2;
uint8_t x282 = UINT8_MAX;
int64_t x285 = -13888402186311LL;
static uint64_t x292 = 1919659844789LLU;
int16_t x295 = INT16_MIN;
static uint32_t x296 = 18912737U;
volatile int32_t x316 = -1;
volatile int32_t t60 = 296404150;
volatile uint32_t x319 = UINT32_MAX;
int16_t x331 = INT16_MIN;
volatile int64_t t63 = -391901LL;
int32_t x334 = INT32_MAX;
volatile uint64_t t64 = 29386227283LLU;
int32_t x337 = 23;
uint8_t x339 = 3U;
volatile uint64_t x343 = 11664LLU;
int64_t x347 = INT64_MIN;
uint8_t x358 = UINT8_MAX;
int64_t t69 = 16000263982LL;
volatile int32_t x365 = INT32_MIN;
int16_t x369 = INT16_MIN;
uint32_t x375 = 31U;
static uint32_t t73 = 6062U;
int16_t x384 = INT16_MIN;
volatile uint64_t t74 = 214021LLU;
static int8_t x386 = INT8_MAX;
int64_t x387 = INT64_MAX;
int16_t x388 = INT16_MIN;
int8_t x395 = -9;
volatile uint8_t x399 = 5U;
static int16_t x405 = INT16_MIN;
uint8_t x409 = UINT8_MAX;
static int16_t x412 = -1;
int64_t x419 = -3372639734071552892LL;
static volatile int16_t x422 = INT16_MIN;
int8_t x430 = INT8_MIN;
uint32_t x431 = 136075U;
uint32_t x441 = UINT32_MAX;
volatile uint8_t x447 = UINT8_MAX;
static uint16_t x448 = UINT16_MAX;
int64_t t87 = 35982904LL;
volatile uint32_t x452 = UINT32_MAX;
volatile int8_t x462 = INT8_MIN;
int8_t x464 = -1;
int64_t x466 = -1LL;
uint8_t x474 = UINT8_MAX;
uint8_t x475 = 37U;
volatile int64_t t93 = 643LL;
int16_t x477 = INT16_MIN;
int64_t x478 = INT64_MIN;
static int64_t x481 = -2165446LL;
int64_t x486 = -1LL;
static uint64_t x488 = 27374972785526LLU;
int16_t x495 = -1;
volatile int16_t x503 = INT16_MIN;


void f0(void) {
	int8_t x5 = INT8_MIN;
	uint8_t x6 = 7U;
	static uint64_t x7 = UINT64_MAX;
	static int8_t x8 = INT8_MIN;

	t0 = (x5%(x6*(x7|x8)));

	if (t0 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x10 = INT64_MAX;
	int16_t x11 = INT16_MIN;
	uint64_t x12 = 100394LLU;
	volatile uint64_t t1 = 4165589683LLU;

	t1 = (x9%(x10*(x11|x12)));

	if (t1 != 1598LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	volatile uint64_t x14 = UINT64_MAX;
	volatile int64_t x15 = -1LL;
	static int64_t x16 = 99682167LL;
	uint64_t t2 = 8424689650433594599LLU;

	t2 = (x13%(x14*(x15|x16)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -1;
	int64_t x18 = 30258LL;
	static int16_t x19 = INT16_MIN;
	volatile uint8_t x20 = UINT8_MAX;
	volatile int64_t t3 = 1328658326172LL;

	t3 = (x17%(x18*(x19|x20)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	int8_t x22 = -18;
	int8_t x23 = INT8_MAX;
	uint16_t x24 = 25U;
	volatile int32_t t4 = 95;

	t4 = (x21%(x22*(x23|x24)));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = -293693264;
	uint8_t x31 = UINT8_MAX;
	volatile int8_t x32 = -1;
	static volatile int64_t t5 = 0LL;

	t5 = (x29%(x30*(x31|x32)));

	if (t5 != -293693264LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x37 = UINT64_MAX;
	int32_t x39 = INT32_MAX;
	uint64_t x40 = 467250LLU;
	static uint64_t t6 = 31086516601LLU;

	t6 = (x37%(x38*(x39|x40)));

	if (t6 != 3407797140354376991LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x45 = 1U;
	uint32_t x46 = 34U;
	int64_t x47 = -12044461LL;
	int32_t x48 = -1;
	static volatile int64_t t7 = 66969059LL;

	t7 = (x45%(x46*(x47|x48)));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x49 = UINT64_MAX;
	volatile int16_t x50 = -3;
	int16_t x51 = 0;
	uint64_t x52 = UINT64_MAX;

	t8 = (x49%(x50*(x51|x52)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x57 = UINT8_MAX;
	static volatile uint16_t x58 = UINT16_MAX;
	uint8_t x59 = UINT8_MAX;
	uint64_t t9 = 289102792853LLU;

	t9 = (x57%(x58*(x59|x60)));

	if (t9 != 255LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x65 = 40U;
	uint32_t x66 = 61052027U;
	int32_t x67 = INT32_MAX;
	static volatile uint32_t t10 = 818396U;

	t10 = (x65%(x66*(x67|x68)));

	if (t10 != 40U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = -1;
	int16_t x70 = INT16_MAX;
	static int8_t x71 = -1;
	int64_t x72 = 9523437463584638LL;
	int64_t t11 = 77449215623877293LL;

	t11 = (x69%(x70*(x71|x72)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x73 = INT64_MIN;
	int8_t x76 = INT8_MAX;
	int64_t t12 = -1LL;

	t12 = (x73%(x74*(x75|x76)));

	if (t12 != -7041LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x77 = -1LL;
	volatile int32_t x78 = INT32_MIN;
	int64_t x79 = -226804LL;
	volatile int32_t x80 = 3448078;
	volatile int64_t t13 = 1LL;

	t13 = (x77%(x78*(x79|x80)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x81 = INT8_MIN;
	int32_t x83 = -175029294;
	int64_t x84 = INT64_MIN;
	int64_t t14 = -17817814309337LL;

	t14 = (x81%(x82*(x83|x84)));

	if (t14 != -128LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x86 = 38U;
	int16_t x87 = INT16_MIN;
	int64_t x88 = INT64_MIN;

	t15 = (x85%(x86*(x87|x88)));

	if (t15 != -172837LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x97 = UINT64_MAX;
	uint32_t x98 = 162753U;
	int8_t x100 = -51;
	volatile uint64_t t16 = 1258698822268889LLU;

	t16 = (x97%(x98*(x99|x100)));

	if (t16 != 1379658112LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x101 = INT16_MAX;
	int32_t x103 = -5529;
	uint32_t x104 = 5U;
	static uint32_t t17 = 13U;

	t17 = (x101%(x102*(x103|x104)));

	if (t17 != 32767U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x105 = INT32_MIN;
	int16_t x106 = 145;
	volatile int16_t x107 = INT16_MAX;
	static volatile int8_t x108 = INT8_MIN;
	int32_t t18 = -163;

	t18 = (x105%(x106*(x107|x108)));

	if (t18 != -8) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = -1;
	static uint64_t x112 = UINT64_MAX;
	uint64_t t19 = 3840LLU;

	t19 = (x109%(x110*(x111|x112)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x113 = 1U;
	int32_t x114 = INT32_MAX;
	int16_t x115 = INT16_MIN;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t20 = 154613934;

	t20 = (x113%(x114*(x115|x116)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x117 = 2031U;
	int16_t x118 = 3741;
	int64_t x120 = INT64_MAX;

	t21 = (x117%(x118*(x119|x120)));

	if (t21 != 2031LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x122 = INT32_MIN;
	int32_t x123 = -78;
	volatile uint64_t x124 = UINT64_MAX;
	volatile uint64_t t22 = 6212392LLU;

	t22 = (x121%(x122*(x123|x124)));

	if (t22 != 7304LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x125 = 45U;
	static uint16_t x126 = 336U;
	int64_t x127 = -54LL;
	volatile uint8_t x128 = 0U;

	t23 = (x125%(x126*(x127|x128)));

	if (t23 != 45LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x129 = -1LL;
	uint16_t x130 = UINT16_MAX;
	int64_t x132 = INT64_MAX;
	static volatile int64_t t24 = -96082140LL;

	t24 = (x129%(x130*(x131|x132)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x133 = -1LL;
	volatile int32_t x134 = -5087606;
	static int64_t x136 = -1LL;

	t25 = (x133%(x134*(x135|x136)));

	if (t25 != 2321929LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x138 = -1;
	int16_t x139 = INT16_MAX;
	uint16_t x140 = 9374U;
	static volatile int32_t t26 = 229189335;

	t26 = (x137%(x138*(x139|x140)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x141 = 701945594U;
	uint32_t x142 = 927579U;
	static int8_t x144 = 1;
	static volatile uint32_t t27 = 110626U;

	t27 = (x141%(x142*(x143|x144)));

	if (t27 != 695870U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x145 = 100U;
	static int16_t x146 = INT16_MIN;
	static int16_t x147 = INT16_MAX;
	static int16_t x148 = 7;
	static volatile int32_t t28 = -220;

	t28 = (x145%(x146*(x147|x148)));

	if (t28 != 100) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x149 = 1411;
	static volatile int32_t t29 = -624137328;

	t29 = (x149%(x150*(x151|x152)));

	if (t29 != 1411) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x154 = -3;
	int32_t x155 = 0;
	int16_t x156 = INT16_MAX;
	volatile int64_t t30 = -2128472412612LL;

	t30 = (x153%(x154*(x155|x156)));

	if (t30 != -8LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x161 = -1;
	volatile uint32_t x162 = UINT32_MAX;
	int16_t x163 = -1;
	uint8_t x164 = 6U;
	uint32_t t31 = 7687657U;

	t31 = (x161%(x162*(x163|x164)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x170 = -12682;
	static uint32_t x171 = UINT32_MAX;
	static uint32_t x172 = UINT32_MAX;
	volatile uint32_t t32 = 421659198U;

	t32 = (x169%(x170*(x171|x172)));

	if (t32 != 5083U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x177 = INT64_MAX;
	int32_t x178 = 164;
	int8_t x179 = 1;
	volatile int64_t t33 = -1128374LL;

	t33 = (x177%(x178*(x179|x180)));

	if (t33 != 7LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x181 = 73U;
	int8_t x182 = INT8_MIN;

	t34 = (x181%(x182*(x183|x184)));

	if (t34 != 73) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x185 = INT16_MIN;
	int32_t x186 = INT32_MIN;
	uint8_t x187 = 95U;
	uint64_t x188 = 2344386LLU;
	uint64_t t35 = 1LLU;

	t35 = (x185%(x186*(x187|x188)));

	if (t35 != 5034592876593152LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x191 = 38U;
	static int16_t x192 = INT16_MAX;
	volatile int32_t t36 = 103;

	t36 = (x189%(x190*(x191|x192)));

	if (t36 != 551) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x193 = INT8_MIN;
	uint32_t x194 = 2599306U;
	volatile uint64_t x195 = UINT64_MAX;
	volatile int8_t x196 = 33;
	uint64_t t37 = 128513503426053243LLU;

	t37 = (x193%(x194*(x195|x196)));

	if (t37 != 2599178LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x198 = -11;
	int32_t x200 = INT32_MIN;
	volatile int64_t t38 = -59531LL;

	t38 = (x197%(x198*(x199|x200)));

	if (t38 != 225450LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x201 = 1U;
	int32_t x202 = -1;
	static volatile uint32_t t39 = 113U;

	t39 = (x201%(x202*(x203|x204)));

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x205 = 44U;
	volatile uint32_t x206 = 1520U;
	int16_t x207 = INT16_MIN;
	int16_t x208 = -1;
	static volatile uint32_t t40 = 195U;

	t40 = (x205%(x206*(x207|x208)));

	if (t40 != 44U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x217 = -1LL;
	int32_t x219 = 8294;
	int64_t x220 = -3LL;
	int64_t t41 = 1847LL;

	t41 = (x217%(x218*(x219|x220)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x221 = 3U;
	static uint8_t x222 = UINT8_MAX;
	uint16_t x223 = UINT16_MAX;
	volatile uint32_t t42 = 456U;

	t42 = (x221%(x222*(x223|x224)));

	if (t42 != 3U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x226 = 1U;
	int32_t x227 = -1;
	uint64_t x228 = 4837601350LLU;

	t43 = (x225%(x226*(x227|x228)));

	if (t43 != 1854LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x233 = 1U;
	int8_t x234 = INT8_MIN;
	uint32_t x235 = 0U;
	int32_t x236 = INT32_MAX;
	uint32_t t44 = 14U;

	t44 = (x233%(x234*(x235|x236)));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x237 = -1;
	static uint64_t x239 = 134907451550583LLU;
	int64_t x240 = 66865550LL;
	static uint64_t t45 = 2LLU;

	t45 = (x237%(x238*(x239|x240)));

	if (t45 != 5476155043386228735LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x241 = 3176LLU;
	volatile uint32_t x242 = UINT32_MAX;
	uint64_t t46 = 1902218698336LLU;

	t46 = (x241%(x242*(x243|x244)));

	if (t46 != 3176LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x246 = UINT64_MAX;
	uint8_t x247 = 4U;
	volatile uint64_t t47 = 496152592664324360LLU;

	t47 = (x245%(x246*(x247|x248)));

	if (t47 != 32596LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x249 = UINT16_MAX;
	int64_t x250 = -1LL;
	volatile int16_t x251 = INT16_MAX;
	int16_t x252 = INT16_MAX;
	static int64_t t48 = -8165363294512LL;

	t48 = (x249%(x250*(x251|x252)));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x257 = INT32_MIN;
	static int8_t x260 = -1;

	t49 = (x257%(x258*(x259|x260)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x261 = 10U;
	volatile int32_t x262 = -1;
	uint16_t x263 = 1U;
	int64_t x264 = INT64_MAX;
	int64_t t50 = 174207653812LL;

	t50 = (x261%(x262*(x263|x264)));

	if (t50 != 10LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x265 = 3075;
	int8_t x266 = INT8_MIN;
	int16_t x267 = -1;
	volatile int32_t x268 = -2;
	volatile int32_t t51 = -54;

	t51 = (x265%(x266*(x267|x268)));

	if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x273 = INT8_MIN;
	static int32_t x274 = -6;
	uint64_t x275 = 355240LLU;
	uint32_t x276 = 338U;
	uint64_t t52 = 4959477548641663LLU;

	t52 = (x273%(x274*(x275|x276)));

	if (t52 != 2131804LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x277 = 80312184U;
	uint8_t x278 = UINT8_MAX;
	volatile int8_t x279 = INT8_MIN;
	static int64_t x280 = INT64_MIN;
	static volatile int64_t t53 = -6206643425816LL;

	t53 = (x277%(x278*(x279|x280)));

	if (t53 != 17784LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x281 = -3974954024LL;
	uint8_t x283 = 2U;
	volatile int8_t x284 = INT8_MIN;
	static int64_t t54 = 20114527LL;

	t54 = (x281%(x282*(x283|x284)));

	if (t54 != -23204LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x286 = -1;
	int64_t x287 = INT64_MIN;
	int8_t x288 = INT8_MAX;
	int64_t t55 = 1486047264082362LL;

	t55 = (x285%(x286*(x287|x288)));

	if (t55 != -13888402186311LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x289 = INT8_MAX;
	int64_t x290 = -114LL;
	volatile uint32_t x291 = 353533363U;
	volatile uint64_t t56 = 65824816689686LLU;

	t56 = (x289%(x290*(x291|x292)));

	if (t56 != 127LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x293 = UINT32_MAX;
	uint64_t x294 = UINT64_MAX;
	volatile uint64_t t57 = 345359623062LLU;

	t57 = (x293%(x294*(x295|x296)));

	if (t57 != 4294967295LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x301 = INT64_MIN;
	volatile int64_t x302 = 583963409830231LL;
	int16_t x303 = INT16_MIN;
	int32_t x304 = -1;
	volatile int64_t t58 = 7297LL;

	t58 = (x301%(x302*(x303|x304)));

	if (t58 != -253941996107394LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x305 = INT16_MIN;
	uint64_t x306 = 2855LLU;
	static uint8_t x307 = 7U;
	int16_t x308 = -1;
	static volatile uint64_t t59 = 1519899LLU;

	t59 = (x305%(x306*(x307|x308)));

	if (t59 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x313 = 22U;
	int16_t x314 = -471;
	static volatile int32_t x315 = -13612707;

	t60 = (x313%(x314*(x315|x316)));

	if (t60 != 22) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x317 = INT16_MIN;
	int32_t x318 = INT32_MIN;
	int32_t x320 = -1;
	static volatile uint32_t t61 = 6U;

	t61 = (x317%(x318*(x319|x320)));

	if (t61 != 2147450880U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x325 = INT64_MIN;
	uint32_t x326 = 341762U;
	static int64_t x327 = -3990LL;
	uint16_t x328 = 31142U;
	volatile int64_t t62 = -142583467411LL;

	t62 = (x325%(x326*(x327|x328)));

	if (t62 != -169726628LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x329 = -1;
	int64_t x330 = 360504701LL;
	int16_t x332 = -2841;

	t63 = (x329%(x330*(x331|x332)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x333 = 230;
	int16_t x335 = -206;
	uint64_t x336 = 45472702383161LLU;

	t64 = (x333%(x334*(x335|x336)));

	if (t64 != 230LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x338 = INT64_MAX;
	uint64_t x340 = 14166092424LLU;
	uint64_t t65 = 68396006353LLU;

	t65 = (x337%(x338*(x339|x340)));

	if (t65 != 23LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x341 = -1;
	static uint32_t x342 = 204U;
	volatile int16_t x344 = -1;
	static uint64_t t66 = 214714054LLU;

	t66 = (x341%(x342*(x343|x344)));

	if (t66 != 203LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x345 = 2U;
	int8_t x346 = INT8_MIN;
	int32_t x348 = INT32_MIN;
	volatile int64_t t67 = -2545391LL;

	t67 = (x345%(x346*(x347|x348)));

	if (t67 != 2LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x349 = INT32_MIN;
	volatile uint64_t x350 = 1626694771LLU;
	int8_t x351 = -1;
	uint32_t x352 = 127391U;
	volatile uint64_t t68 = 300718829LLU;

	t68 = (x349%(x350*(x351|x352)));

	if (t68 != 4473542390777039078LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x357 = INT64_MIN;
	int32_t x359 = INT32_MIN;
	int16_t x360 = -1;

	t69 = (x357%(x358*(x359|x360)));

	if (t69 != -128LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x361 = 94U;
	uint32_t x362 = UINT32_MAX;
	uint16_t x363 = 103U;
	static int32_t x364 = -1;
	uint32_t t70 = 3111239U;

	t70 = (x361%(x362*(x363|x364)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x366 = -1;
	static int16_t x367 = INT16_MIN;
	int16_t x368 = -1;
	volatile int32_t t71 = 111;

	t71 = (x365%(x366*(x367|x368)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x370 = -1;
	uint64_t x371 = UINT64_MAX;
	int8_t x372 = -1;
	volatile uint64_t t72 = 3650711LLU;

	t72 = (x369%(x370*(x371|x372)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x373 = 11U;
	static int16_t x374 = -1;
	uint32_t x376 = 8163U;

	t73 = (x373%(x374*(x375|x376)));

	if (t73 != 11U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x381 = UINT64_MAX;
	volatile uint64_t x382 = UINT64_MAX;
	uint64_t x383 = 65248231862286297LLU;

	t74 = (x381%(x382*(x383|x384)));

	if (t74 != 588LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x385 = -2;
	static int64_t t75 = 1117161083564940LL;

	t75 = (x385%(x386*(x387|x388)));

	if (t75 != -2LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x389 = 41970121U;
	uint8_t x390 = 24U;
	int64_t x391 = -1LL;
	static volatile int32_t x392 = INT32_MAX;
	int64_t t76 = 19108021365LL;

	t76 = (x389%(x390*(x391|x392)));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x393 = 22U;
	int64_t x394 = -1LL;
	int8_t x396 = -1;
	volatile int64_t t77 = -44030882018585393LL;

	t77 = (x393%(x394*(x395|x396)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x397 = 52U;
	uint64_t x398 = 22306LLU;
	volatile uint64_t x400 = 450545552LLU;
	uint64_t t78 = 80233443LLU;

	t78 = (x397%(x398*(x399|x400)));

	if (t78 != 52LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x406 = 1;
	uint64_t x407 = 133077020417LLU;
	static int32_t x408 = -1;
	static volatile uint64_t t79 = 1559349122923518LLU;

	t79 = (x405%(x406*(x407|x408)));

	if (t79 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x410 = UINT64_MAX;
	int8_t x411 = -11;
	uint64_t t80 = 38323LLU;

	t80 = (x409%(x410*(x411|x412)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x413 = -5;
	static uint16_t x414 = 6374U;
	volatile int64_t x415 = 19246975665041663LL;
	uint64_t x416 = 39337LLU;
	uint64_t t81 = 26LLU;

	t81 = (x413%(x414*(x415|x416)));

	if (t81 != 6446985626976615649LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x417 = 77U;
	uint64_t x418 = UINT64_MAX;
	uint8_t x420 = 15U;
	volatile uint64_t t82 = 21322057447LLU;

	t82 = (x417%(x418*(x419|x420)));

	if (t82 != 77LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x421 = UINT64_MAX;
	uint8_t x423 = 15U;
	int8_t x424 = 3;
	volatile uint64_t t83 = 8079288844414241348LLU;

	t83 = (x421%(x422*(x423|x424)));

	if (t83 != 491519LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x429 = 860U;
	static volatile int32_t x432 = INT32_MAX;
	uint32_t t84 = 2100437076U;

	t84 = (x429%(x430*(x431|x432)));

	if (t84 != 92U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x437 = -30;
	static int32_t x438 = -5996220;
	int32_t x439 = 386401573;
	uint64_t x440 = 2808781LLU;
	static uint64_t t85 = 2066979169266435822LLU;

	t85 = (x437%(x438*(x439|x440)));

	if (t85 != 2330645597657070LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x442 = UINT32_MAX;
	uint64_t x443 = 110239LLU;
	int64_t x444 = INT64_MIN;
	uint64_t t86 = 30LLU;

	t86 = (x441%(x442*(x443|x444)));

	if (t86 != 4294967295LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x445 = INT64_MIN;
	int8_t x446 = -1;

	t87 = (x445%(x446*(x447|x448)));

	if (t87 != -32768LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x449 = -1LL;
	uint16_t x450 = 64U;
	int16_t x451 = INT16_MIN;
	int64_t t88 = 2950117528749LL;

	t88 = (x449%(x450*(x451|x452)));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x453 = INT64_MIN;
	int16_t x454 = 178;
	int8_t x455 = INT8_MIN;
	uint8_t x456 = UINT8_MAX;
	volatile int64_t t89 = -48563171047LL;

	t89 = (x453%(x454*(x455|x456)));

	if (t89 != -78LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x461 = 3851U;
	volatile int16_t x463 = 1;
	int32_t t90 = -110;

	t90 = (x461%(x462*(x463|x464)));

	if (t90 != 11) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x465 = -566119023950098LL;
	int16_t x467 = 7;
	volatile int16_t x468 = INT16_MIN;
	int64_t t91 = 38LL;

	t91 = (x465%(x466*(x467|x468)));

	if (t91 != -532LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x469 = 6U;
	int16_t x470 = -1;
	int16_t x471 = -1;
	uint32_t x472 = UINT32_MAX;
	volatile uint32_t t92 = 1951U;

	t92 = (x469%(x470*(x471|x472)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x473 = -24402252618875544LL;
	int16_t x476 = INT16_MAX;

	t93 = (x473%(x474*(x475|x476)));

	if (t93 != -6220179LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x479 = -14619710415522883LL;
	uint64_t x480 = 1634LLU;
	volatile uint64_t t94 = 18LLU;

	t94 = (x477%(x478*(x479|x480)));

	if (t94 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x482 = INT8_MIN;
	static volatile int8_t x483 = INT8_MIN;
	int16_t x484 = 5817;
	volatile int64_t t95 = -170LL;

	t95 = (x481%(x482*(x483|x484)));

	if (t95 != -2502LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x485 = 1U;
	uint32_t x487 = UINT32_MAX;
	static volatile uint64_t t96 = 306418944057892254LLU;

	t96 = (x485%(x486*(x487|x488)));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x493 = 2135550LLU;
	uint8_t x494 = 90U;
	int64_t x496 = 3800205172973LL;
	volatile uint64_t t97 = 19796540627208959LLU;

	t97 = (x493%(x494*(x495|x496)));

	if (t97 != 2135550LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x497 = -8;
	int64_t x498 = -1LL;
	volatile int32_t x499 = 6302;
	volatile int16_t x500 = INT16_MIN;
	volatile int64_t t98 = -3080042780740782104LL;

	t98 = (x497%(x498*(x499|x500)));

	if (t98 != -8LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x501 = 11U;
	int64_t x502 = -1LL;
	volatile uint32_t x504 = UINT32_MAX;
	volatile int64_t t99 = -1283LL;

	t99 = (x501%(x502*(x503|x504)));

	if (t99 != 11LL) { NG(); } else { ; }
	
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

