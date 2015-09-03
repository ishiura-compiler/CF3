#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = UINT64_MAX;
int16_t x10 = INT16_MIN;
int8_t x11 = INT8_MAX;
int16_t x12 = INT16_MAX;
int8_t x13 = 6;
uint32_t x14 = UINT32_MAX;
int64_t x17 = INT64_MAX;
static uint16_t x19 = 3U;
static int64_t t4 = -97LL;
int16_t x27 = -1;
volatile uint64_t x35 = 2927201350531334959LLU;
uint64_t t8 = 3163481LLU;
int64_t x40 = 712212557637532LL;
int64_t x42 = -121023063LL;
volatile uint64_t t10 = 700273290338LLU;
int32_t x55 = -3105;
uint32_t x59 = 657784U;
static int16_t x60 = 1367;
int16_t x66 = -1;
volatile int64_t x71 = INT64_MIN;
volatile uint8_t x74 = UINT8_MAX;
uint64_t x79 = 915LLU;
static uint64_t x81 = 22874286907038LLU;
volatile int64_t t21 = -8442226778LL;
volatile uint64_t t22 = 982324996LLU;
int16_t x101 = INT16_MIN;
static volatile int8_t x104 = INT8_MAX;
int16_t x108 = INT16_MIN;
int8_t x123 = -1;
int8_t x124 = INT8_MAX;
volatile uint64_t t30 = 51877974LLU;
int16_t x132 = 1;
uint64_t x133 = UINT64_MAX;
static uint64_t t33 = 2LLU;
static int8_t x137 = 1;
static volatile int32_t x143 = -281509;
uint8_t x152 = UINT8_MAX;
static int16_t x155 = INT16_MAX;
int64_t t39 = 99LL;
uint16_t x161 = 2U;
int16_t x164 = -1;
static volatile int32_t t40 = -326103243;
volatile uint16_t x166 = 0U;
uint32_t x168 = UINT32_MAX;
volatile int64_t t41 = -3769356899564778LL;
int64_t x175 = INT64_MIN;
volatile int64_t t44 = 2197828921LL;
int64_t x185 = INT64_MAX;
int64_t t47 = 378813870878LL;
volatile int16_t x197 = INT16_MIN;
volatile int32_t x203 = INT32_MAX;
int64_t t52 = 538887459922097LL;
volatile int32_t x214 = INT32_MIN;
volatile int16_t x216 = 59;
int64_t x217 = INT64_MIN;
uint32_t x221 = UINT32_MAX;
uint32_t x222 = 13U;
uint64_t x224 = 158LLU;
uint64_t x267 = 122085344869454175LLU;
static volatile uint64_t x271 = UINT64_MAX;
uint64_t t66 = 25898535003LLU;
int64_t x276 = INT64_MAX;
volatile int16_t x278 = -1;
volatile uint16_t x281 = 51U;
int64_t x283 = 1226885147687794525LL;
int8_t x286 = INT8_MIN;
volatile uint32_t t70 = 86U;
static uint8_t x294 = 26U;
volatile int32_t x295 = INT32_MAX;
static volatile int64_t t73 = 27176463021604LL;
volatile int64_t t74 = -40451948LL;
volatile int16_t x305 = INT16_MIN;
uint32_t x311 = 9U;
volatile int32_t x317 = INT32_MAX;
int16_t x321 = -1904;
volatile int8_t x327 = INT8_MIN;
static uint64_t t80 = 60629317LLU;
uint64_t t81 = 25628344098542394LLU;
uint32_t x333 = UINT32_MAX;
volatile uint64_t t82 = 194472558LLU;
uint16_t x341 = 0U;
uint8_t x345 = 33U;
int8_t x348 = -4;
static int8_t x350 = INT8_MAX;
volatile int32_t t86 = 6655148;
int8_t x353 = -1;
volatile uint64_t t87 = 169144990583167LLU;
uint32_t x375 = 900U;
uint32_t t92 = 52293465U;
int16_t x379 = -1;
int64_t t94 = -2LL;
int16_t x385 = INT16_MIN;
int64_t x390 = 11035353466LL;
volatile int64_t x391 = INT64_MIN;
volatile uint8_t x397 = UINT8_MAX;
int32_t x400 = INT32_MAX;
static int64_t x403 = INT64_MAX;


void f0(void) {
	int32_t x1 = -1;
	static uint16_t x2 = 1U;
	static int8_t x3 = 12;
	static volatile uint64_t t0 = 93966376LLU;

	t0 = (x1%(x2|(x3&x4)));

	if (t0 != 2LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int16_t x6 = -13986;
	static int32_t x7 = INT32_MAX;
	static int64_t x8 = INT64_MIN;
	int64_t t1 = 26397532LL;

	t1 = (x5%(x6|(x7&x8)));

	if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int64_t t2 = 1865064722613484232LL;

	t2 = (x9%(x10|(x11&x12)));

	if (t2 != -32250LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x15 = 489U;
	uint32_t x16 = 849164U;
	volatile uint32_t t3 = 32160U;

	t3 = (x13%(x14|(x15&x16)));

	if (t3 != 6U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = UINT16_MAX;
	volatile int64_t x20 = -3942759LL;

	t4 = (x17%(x18|(x19&x20)));

	if (t4 != 32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -5330894LL;
	int32_t x22 = 79158;
	volatile int8_t x23 = INT8_MAX;
	int8_t x24 = 1;
	int64_t t5 = 0LL;

	t5 = (x21%(x22|(x23&x24)));

	if (t5 != -27241LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	static uint8_t x26 = 20U;
	volatile int8_t x28 = INT8_MIN;
	int32_t t6 = -19;

	t6 = (x25%(x26|(x27&x28)));

	if (t6 != -44) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -29223471LL;
	int16_t x30 = 5780;
	static volatile int8_t x31 = INT8_MIN;
	uint16_t x32 = 3U;
	static int64_t t7 = 2001921LL;

	t7 = (x29%(x30|(x31&x32)));

	if (t7 != -5571LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = -3169;
	int8_t x34 = INT8_MIN;
	uint64_t x36 = 500676917911LLU;

	t8 = (x33%(x34|(x35&x36)));

	if (t8 != 18446744073709548447LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	uint8_t x38 = 0U;
	int8_t x39 = INT8_MAX;
	volatile int64_t t9 = -25831LL;

	t9 = (x37%(x38|(x39&x40)));

	if (t9 != 15LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int32_t x43 = 2664307;
	volatile uint64_t x44 = UINT64_MAX;

	t10 = (x41%(x42|(x43&x44)));

	if (t10 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int8_t x46 = INT8_MIN;
	static uint64_t x47 = UINT64_MAX;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t11 = 20329LLU;

	t11 = (x45%(x46|(x47&x48)));

	if (t11 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 5757111LL;
	static int32_t x50 = -2;
	int16_t x51 = INT16_MAX;
	uint16_t x52 = 0U;
	volatile int64_t t12 = 3877236420398478251LL;

	t12 = (x49%(x50|(x51&x52)));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x53 = INT16_MIN;
	int8_t x54 = INT8_MIN;
	uint8_t x56 = 59U;
	int32_t t13 = -431;

	t13 = (x53%(x54|(x55&x56)));

	if (t13 != -44) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = 4;
	int32_t x58 = INT32_MAX;
	static volatile uint32_t t14 = 119U;

	t14 = (x57%(x58|(x59&x60)));

	if (t14 != 4U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 59860208852LLU;
	uint8_t x62 = 0U;
	int64_t x63 = 7249LL;
	int16_t x64 = INT16_MAX;
	static uint64_t t15 = 5278239443975469LLU;

	t15 = (x61%(x62|(x63&x64)));

	if (t15 != 3821LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = -1LL;
	volatile int64_t x67 = 2096317508618199670LL;
	volatile uint32_t x68 = 2439913U;
	int64_t t16 = -244LL;

	t16 = (x65%(x66|(x67&x68)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 46U;
	static volatile uint8_t x70 = 1U;
	uint16_t x72 = 277U;
	volatile int64_t t17 = 29524395LL;

	t17 = (x69%(x70|(x71&x72)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 1U;
	int8_t x75 = INT8_MIN;
	int8_t x76 = -54;
	static int32_t t18 = 3;

	t18 = (x73%(x74|(x75&x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int64_t x78 = -39352LL;
	int8_t x80 = INT8_MIN;
	static uint64_t t19 = 6284172279574038206LLU;

	t19 = (x77%(x78|(x79&x80)));

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x82 = 4U;
	int8_t x83 = INT8_MAX;
	static uint8_t x84 = 0U;
	uint64_t t20 = 22551673964131018LLU;

	t20 = (x81%(x82|(x83&x84)));

	if (t20 != 2LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MIN;
	int64_t x86 = INT64_MAX;
	uint8_t x87 = 20U;
	static volatile int64_t x88 = 2484689LL;

	t21 = (x85%(x86|(x87&x88)));

	if (t21 != -128LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	volatile int32_t x90 = INT32_MIN;
	int16_t x91 = -1;
	int64_t x92 = INT64_MIN;

	t22 = (x89%(x90|(x91&x92)));

	if (t22 != 2147483647LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MIN;
	volatile int16_t x95 = INT16_MAX;
	uint32_t x96 = 1194186599U;
	volatile uint32_t t23 = 569209693U;

	t23 = (x93%(x94|(x95&x96)));

	if (t23 != 4294934528U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	volatile uint8_t x98 = 0U;
	int32_t x99 = 11233370;
	int16_t x100 = INT16_MIN;
	int32_t t24 = -5949;

	t24 = (x97%(x98|(x99&x100)));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x102 = 1213U;
	static int64_t x103 = -43543521301206971LL;
	int64_t t25 = 6LL;

	t25 = (x101%(x102|(x103&x104)));

	if (t25 != -843LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 1;
	volatile uint32_t x106 = 231U;
	static uint32_t x107 = 5U;
	volatile uint32_t t26 = 2425U;

	t26 = (x105%(x106|(x107&x108)));

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	volatile uint32_t x110 = 194915486U;
	uint16_t x111 = UINT16_MAX;
	static volatile int32_t x112 = -1;
	uint32_t t27 = 236420U;

	t27 = (x109%(x110|(x111&x112)));

	if (t27 != 2818059U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -7674121;
	int16_t x114 = INT16_MIN;
	static volatile int16_t x115 = -1;
	volatile uint8_t x116 = 39U;
	volatile int32_t t28 = -27121;

	t28 = (x113%(x114|(x115&x116)));

	if (t28 != -15535) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -440;
	int8_t x118 = -1;
	uint16_t x119 = UINT16_MAX;
	volatile int8_t x120 = INT8_MAX;
	int32_t t29 = 26324;

	t29 = (x117%(x118|(x119&x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	int8_t x122 = -1;

	t30 = (x121%(x122|(x123&x124)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	int64_t x126 = INT64_MIN;
	uint8_t x127 = 0U;
	int64_t x128 = INT64_MAX;
	int64_t t31 = -13240461658151LL;

	t31 = (x125%(x126|(x127&x128)));

	if (t31 != -32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 4783679LL;
	static int16_t x130 = INT16_MAX;
	int32_t x131 = INT32_MIN;
	int64_t t32 = -311175282717073398LL;

	t32 = (x129%(x130|(x131&x132)));

	if (t32 != 32464LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x134 = 67273268382695774LL;
	int32_t x135 = -1;
	int8_t x136 = INT8_MAX;

	t33 = (x133%(x134|(x135&x136)));

	if (t33 != 13868536850900497LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x138 = 4418717575316892670LLU;
	int64_t x139 = INT64_MIN;
	static int32_t x140 = INT32_MIN;
	volatile uint64_t t34 = 62LLU;

	t34 = (x137%(x138|(x139&x140)));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	uint8_t x142 = 55U;
	int8_t x144 = 1;
	int32_t t35 = -326;

	t35 = (x141%(x142|(x143&x144)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	int32_t x146 = INT32_MIN;
	static int64_t x147 = INT64_MIN;
	volatile int64_t x148 = -1LL;
	volatile int64_t t36 = -29550807726LL;

	t36 = (x145%(x146|(x147&x148)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = -1;
	volatile int16_t x150 = INT16_MIN;
	int16_t x151 = -3916;
	volatile int32_t t37 = -1;

	t37 = (x149%(x150|(x151&x152)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 52035614LL;
	uint8_t x154 = 1U;
	int64_t x156 = 126124554502995LL;
	static volatile int64_t t38 = -352720991559408LL;

	t38 = (x153%(x154|(x155&x156)));

	if (t38 != 3149LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	int8_t x158 = -17;
	volatile int16_t x159 = INT16_MIN;
	static volatile int32_t x160 = INT32_MAX;

	t39 = (x157%(x158|(x159&x160)));

	if (t39 != -9LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x162 = INT32_MIN;
	int32_t x163 = INT32_MAX;

	t40 = (x161%(x162|(x163&x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 1U;
	int64_t x167 = 21995226LL;

	t41 = (x165%(x166|(x167&x168)));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	static int16_t x170 = -1;
	uint16_t x171 = 0U;
	int64_t x172 = INT64_MIN;
	static int64_t t42 = 741303201993533937LL;

	t42 = (x169%(x170|(x171&x172)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x173 = 13929U;
	int32_t x174 = INT32_MIN;
	uint16_t x176 = 118U;
	volatile int64_t t43 = 189871030708793LL;

	t43 = (x173%(x174|(x175&x176)));

	if (t43 != 13929LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	int32_t x178 = -4673;
	int32_t x179 = -2559329;
	int8_t x180 = INT8_MIN;

	t44 = (x177%(x178|(x179&x180)));

	if (t44 != 7LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = INT16_MIN;
	uint16_t x182 = 844U;
	int16_t x183 = INT16_MAX;
	int16_t x184 = -1;
	int32_t t45 = 23;

	t45 = (x181%(x182|(x183&x184)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x186 = -12831449LL;
	static uint8_t x187 = UINT8_MAX;
	uint16_t x188 = 12865U;
	volatile int64_t t46 = 142365LL;

	t46 = (x185%(x186|(x187&x188)));

	if (t46 != 2214457LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	static int16_t x190 = -1;
	int16_t x191 = -1;
	int64_t x192 = INT64_MIN;

	t47 = (x189%(x190|(x191&x192)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = 23;
	volatile int16_t x194 = 3;
	uint16_t x195 = 25U;
	int8_t x196 = -1;
	int32_t t48 = 2;

	t48 = (x193%(x194|(x195&x196)));

	if (t48 != 23) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x198 = 6803590LLU;
	volatile uint8_t x199 = 13U;
	volatile uint32_t x200 = 28265505U;
	uint64_t t49 = 788203LLU;

	t49 = (x197%(x198|(x199&x200)));

	if (t49 != 2708187LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	int64_t x202 = 925936707423LL;
	uint64_t x204 = 93083941182LLU;
	volatile uint64_t t50 = 2873236397597571LLU;

	t50 = (x201%(x202|(x203&x204)));

	if (t50 != 127LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = INT16_MIN;
	int16_t x206 = INT16_MIN;
	static int8_t x207 = 1;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t51 = 278071804365303LLU;

	t51 = (x205%(x206|(x207&x208)));

	if (t51 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	static volatile int32_t x210 = INT32_MIN;
	int64_t x211 = INT64_MIN;
	int64_t x212 = INT64_MAX;

	t52 = (x209%(x210|(x211&x212)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = 269447871;
	int64_t x215 = INT64_MIN;
	static int64_t t53 = 4119709948LL;

	t53 = (x213%(x214|(x215&x216)));

	if (t53 != 269447871LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x218 = INT16_MAX;
	int16_t x219 = 0;
	static int32_t x220 = INT32_MIN;
	int64_t t54 = -4714322343862252LL;

	t54 = (x217%(x218|(x219&x220)));

	if (t54 != -8LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x223 = 0;
	volatile uint64_t t55 = 37801779416489LLU;

	t55 = (x221%(x222|(x223&x224)));

	if (t55 != 8LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x225 = 33046373U;
	int16_t x226 = INT16_MIN;
	volatile int32_t x227 = 0;
	int16_t x228 = INT16_MIN;
	uint32_t t56 = 11U;

	t56 = (x225%(x226|(x227&x228)));

	if (t56 != 33046373U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = 50LL;
	uint8_t x230 = UINT8_MAX;
	int32_t x231 = INT32_MIN;
	int32_t x232 = INT32_MIN;
	int64_t t57 = 244612940956973LL;

	t57 = (x229%(x230|(x231&x232)));

	if (t57 != 50LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 96U;
	static uint32_t x234 = 7U;
	int32_t x235 = -1;
	int8_t x236 = INT8_MIN;
	static volatile uint32_t t58 = 467216U;

	t58 = (x233%(x234|(x235&x236)));

	if (t58 != 96U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -1LL;
	int16_t x238 = INT16_MIN;
	volatile int32_t x239 = INT32_MIN;
	static volatile uint8_t x240 = 1U;
	static volatile int64_t t59 = -16LL;

	t59 = (x237%(x238|(x239&x240)));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 8877;
	volatile int16_t x242 = 99;
	int8_t x243 = INT8_MIN;
	static volatile int32_t x244 = 1;
	int32_t t60 = -121;

	t60 = (x241%(x242|(x243&x244)));

	if (t60 != 66) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MIN;
	int16_t x246 = INT16_MIN;
	uint32_t x247 = 110870U;
	int64_t x248 = -1LL;
	int64_t t61 = 28864202047939803LL;

	t61 = (x245%(x246|(x247&x248)));

	if (t61 != -15842LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = 1700900941LLU;
	static uint32_t x250 = UINT32_MAX;
	static volatile uint16_t x251 = 1U;
	int16_t x252 = 0;
	volatile uint64_t t62 = 10297099LLU;

	t62 = (x249%(x250|(x251&x252)));

	if (t62 != 1700900941LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 1LLU;
	volatile int32_t x254 = 187;
	static int8_t x255 = 0;
	volatile int16_t x256 = -1;
	volatile uint64_t t63 = 6366LLU;

	t63 = (x253%(x254|(x255&x256)));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x261 = 6U;
	volatile int16_t x262 = 105;
	uint8_t x263 = 0U;
	uint8_t x264 = 5U;
	volatile int32_t t64 = -1404;

	t64 = (x261%(x262|(x263&x264)));

	if (t64 != 6) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = INT16_MIN;
	uint8_t x266 = UINT8_MAX;
	uint32_t x268 = 166219389U;
	uint64_t t65 = 15LLU;

	t65 = (x265%(x266|(x267&x268)));

	if (t65 != 46433503LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x269 = INT16_MIN;
	int64_t x270 = -14478163390471LL;
	volatile int8_t x272 = INT8_MIN;

	t66 = (x269%(x270|(x271&x272)));

	if (t66 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x273 = 31;
	static uint16_t x274 = UINT16_MAX;
	static int32_t x275 = -879;
	static volatile int64_t t67 = 112635593706994381LL;

	t67 = (x273%(x274|(x275&x276)));

	if (t67 != 31LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x277 = INT32_MIN;
	volatile uint8_t x279 = UINT8_MAX;
	int64_t x280 = -1LL;
	static volatile int64_t t68 = 2841LL;

	t68 = (x277%(x278|(x279&x280)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x282 = INT8_MIN;
	int8_t x284 = 4;
	static volatile int64_t t69 = -233LL;

	t69 = (x281%(x282|(x283&x284)));

	if (t69 != 51LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x285 = 81U;
	uint32_t x287 = UINT32_MAX;
	int16_t x288 = INT16_MIN;

	t70 = (x285%(x286|(x287&x288)));

	if (t70 != 81U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = 2378;
	uint8_t x290 = 51U;
	uint64_t x291 = 72LLU;
	int64_t x292 = -1LL;
	uint64_t t71 = 45677517917381LLU;

	t71 = (x289%(x290|(x291&x292)));

	if (t71 != 41LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = INT8_MIN;
	int32_t x296 = -36;
	volatile int32_t t72 = 197092;

	t72 = (x293%(x294|(x295&x296)));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = INT16_MIN;
	int64_t x298 = INT64_MIN;
	int16_t x299 = 0;
	int16_t x300 = -32;

	t73 = (x297%(x298|(x299&x300)));

	if (t73 != -32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = -104426759082943176LL;
	uint32_t x302 = 110U;
	uint8_t x303 = 6U;
	volatile int32_t x304 = INT32_MIN;

	t74 = (x301%(x302|(x303&x304)));

	if (t74 != -66LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x306 = 42U;
	volatile uint32_t x307 = UINT32_MAX;
	static int16_t x308 = -1;
	volatile uint32_t t75 = 5368404U;

	t75 = (x305%(x306|(x307&x308)));

	if (t75 != 4294934528U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MAX;
	static int16_t x312 = INT16_MIN;
	volatile int64_t t76 = 1090LL;

	t76 = (x309%(x310|(x311&x312)));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x313 = INT64_MIN;
	volatile uint32_t x314 = 216U;
	uint64_t x315 = 31LLU;
	int64_t x316 = -838560525160578LL;
	uint64_t t77 = 84873LLU;

	t77 = (x313%(x314|(x315&x316)));

	if (t77 != 80LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x318 = UINT32_MAX;
	volatile uint32_t x319 = 37U;
	static int32_t x320 = 178953009;
	uint32_t t78 = 0U;

	t78 = (x317%(x318|(x319&x320)));

	if (t78 != 2147483647U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x322 = -1;
	int16_t x323 = -1;
	uint16_t x324 = 167U;
	volatile int32_t t79 = 5601987;

	t79 = (x321%(x322|(x323&x324)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = 273047881LLU;
	int32_t x326 = -127314;
	uint16_t x328 = UINT16_MAX;

	t80 = (x325%(x326|(x327&x328)));

	if (t80 != 273047881LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x329 = 622303843U;
	uint64_t x330 = 3846703076973125704LLU;
	int16_t x331 = -15;
	uint16_t x332 = 6142U;

	t81 = (x329%(x330|(x331&x332)));

	if (t81 != 622303843LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x334 = 2052883157LLU;
	int32_t x335 = 130556;
	int16_t x336 = INT16_MAX;

	t82 = (x333%(x334|(x335&x336)));

	if (t82 != 189136901LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = 350058260;
	int64_t x338 = -1LL;
	static int64_t x339 = -32LL;
	uint32_t x340 = UINT32_MAX;
	int64_t t83 = 444182336191LL;

	t83 = (x337%(x338|(x339&x340)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x342 = 3562U;
	volatile int8_t x343 = 29;
	static uint64_t x344 = UINT64_MAX;
	volatile uint64_t t84 = 6LLU;

	t84 = (x341%(x342|(x343&x344)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x346 = INT16_MAX;
	uint32_t x347 = 361951U;
	static uint32_t t85 = 5345U;

	t85 = (x345%(x346|(x347&x348)));

	if (t85 != 33U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x349 = INT8_MAX;
	int16_t x351 = -1;
	uint16_t x352 = UINT16_MAX;

	t86 = (x349%(x350|(x351&x352)));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x354 = 0;
	static uint64_t x355 = 819292LLU;
	int32_t x356 = -1;

	t87 = (x353%(x354|(x355&x356)));

	if (t87 != 340963LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x357 = UINT8_MAX;
	static int16_t x358 = INT16_MIN;
	volatile int64_t x359 = INT64_MIN;
	static int32_t x360 = -1;
	volatile int64_t t88 = -1490924724462588533LL;

	t88 = (x357%(x358|(x359&x360)));

	if (t88 != 255LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x361 = -1LL;
	int64_t x362 = INT64_MAX;
	volatile int8_t x363 = INT8_MIN;
	int8_t x364 = INT8_MIN;
	volatile int64_t t89 = 390LL;

	t89 = (x361%(x362|(x363&x364)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x365 = 870U;
	int64_t x366 = -1LL;
	int32_t x367 = 1244066;
	int32_t x368 = -7753685;
	static volatile int64_t t90 = -1LL;

	t90 = (x365%(x366|(x367&x368)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x369 = 2992549157835029LL;
	uint64_t x370 = 7243739LLU;
	int64_t x371 = INT64_MIN;
	int8_t x372 = INT8_MAX;
	uint64_t t91 = 6767794920LLU;

	t91 = (x369%(x370|(x371&x372)));

	if (t91 != 4972616LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = 41;
	static volatile uint8_t x374 = 0U;
	int16_t x376 = INT16_MAX;

	t92 = (x373%(x374|(x375&x376)));

	if (t92 != 41U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x377 = 4303345205690058LLU;
	volatile int16_t x378 = -1;
	uint32_t x380 = UINT32_MAX;
	uint64_t t93 = 306LLU;

	t93 = (x377%(x378|(x379&x380)));

	if (t93 != 2724464808LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x381 = INT16_MIN;
	int8_t x382 = INT8_MIN;
	int64_t x383 = INT64_MIN;
	volatile int16_t x384 = -1;

	t94 = (x381%(x382|(x383&x384)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x386 = INT32_MIN;
	volatile int32_t x387 = INT32_MAX;
	int64_t x388 = INT64_MAX;
	int64_t t95 = -20800337LL;

	t95 = (x385%(x386|(x387&x388)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x389 = -1;
	static uint64_t x392 = 223802871338LLU;
	volatile uint64_t t96 = 4306946152711151LLU;

	t96 = (x389%(x390|(x391&x392)));

	if (t96 != 10701824067LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x393 = UINT32_MAX;
	static int32_t x394 = -1;
	static int64_t x395 = -4164316227124LL;
	uint64_t x396 = 53555674038998522LLU;
	static uint64_t t97 = 8567LLU;

	t97 = (x393%(x394|(x395&x396)));

	if (t97 != 4294967295LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x398 = 1177U;
	int8_t x399 = INT8_MAX;
	volatile uint32_t t98 = 1069245444U;

	t98 = (x397%(x398|(x399&x400)));

	if (t98 != 255U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = 51309700579LL;
	uint8_t x402 = 8U;
	int16_t x404 = -29;
	int64_t t99 = -2LL;

	t99 = (x401%(x402|(x403&x404)));

	if (t99 != 51309700579LL) { NG(); } else { ; }
	
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

