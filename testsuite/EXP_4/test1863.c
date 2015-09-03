#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x11 = 6U;
int32_t x14 = INT32_MAX;
uint16_t x16 = 208U;
uint64_t x23 = 18005828875578LLU;
int64_t t6 = -1LL;
int16_t x32 = -1;
uint32_t x36 = 15U;
static volatile int64_t t8 = 6570LL;
int16_t x46 = 0;
uint64_t x47 = 4LLU;
volatile uint64_t t10 = 4991779245LLU;
uint32_t x49 = 73772U;
int16_t x50 = INT16_MAX;
uint16_t x61 = 383U;
static int64_t x66 = -1LL;
uint16_t x67 = UINT16_MAX;
static volatile uint64_t x68 = 1411339915237LLU;
static volatile int8_t x70 = 2;
volatile uint64_t x75 = 57LLU;
int32_t x80 = INT32_MIN;
int64_t x81 = INT64_MIN;
volatile int64_t t19 = -78298188809448LL;
int16_t x89 = 0;
static volatile uint16_t x96 = 15U;
int32_t x100 = 1644;
int64_t x104 = -1LL;
static volatile int64_t t24 = -632LL;
volatile int64_t t26 = -13519LL;
uint16_t x115 = UINT16_MAX;
int64_t t27 = -7286262LL;
int64_t t28 = -174323218LL;
uint32_t x125 = 2653U;
uint64_t t30 = 1810194009998708LLU;
static int32_t x139 = INT32_MIN;
int16_t x144 = INT16_MIN;
static int64_t x150 = -1LL;
uint64_t x155 = UINT64_MAX;
uint32_t x161 = UINT32_MAX;
volatile uint32_t t38 = 423345U;
int32_t x166 = INT32_MIN;
int32_t x171 = INT32_MIN;
static volatile int32_t x174 = -1;
int64_t x176 = 5308298222LL;
static uint32_t x181 = 60U;
uint32_t x193 = 7U;
int64_t x194 = -703LL;
int32_t x196 = INT32_MAX;
volatile int64_t t46 = -26533426898822636LL;
int32_t x203 = INT32_MAX;
volatile int16_t x204 = -6;
uint16_t x205 = 93U;
int64_t x208 = -1LL;
volatile int16_t x210 = INT16_MIN;
int32_t x219 = -66452084;
static int32_t x224 = INT32_MIN;
int64_t t53 = -32865181731528394LL;
int64_t x226 = -1LL;
uint32_t x228 = 32017U;
volatile int64_t t54 = -238LL;
static int32_t x232 = 22697513;
int16_t x234 = -1;
int8_t x235 = INT8_MAX;
volatile int32_t t56 = 0;
int32_t x237 = 0;
uint64_t x238 = 138895095LLU;
uint32_t x245 = 40U;
static int64_t x251 = -8848224078LL;
volatile int64_t t60 = 24135916754887LL;
int32_t t62 = 692;
int16_t x263 = INT16_MAX;
volatile int64_t x265 = INT64_MIN;
static uint32_t x268 = 121001475U;
uint32_t t65 = 9U;
int32_t x276 = -51;
uint8_t x278 = 26U;
volatile uint8_t x285 = 7U;
int64_t x288 = -1LL;
volatile int64_t t68 = -11938947LL;
volatile int16_t x313 = -1;
uint16_t x315 = 3U;
int64_t x325 = -2951049850LL;
static int64_t t77 = -31731839451348LL;
static int32_t x331 = INT32_MIN;
int64_t t78 = -8163477347201873LL;
uint64_t x333 = UINT64_MAX;
static int16_t x336 = 101;
uint64_t t79 = 338164026510514LLU;
uint32_t t80 = 35U;
uint64_t x348 = UINT64_MAX;
int8_t x351 = 0;
uint8_t x356 = 58U;
int8_t x357 = INT8_MAX;
static volatile int8_t x358 = INT8_MIN;
int64_t t84 = 28LL;
uint64_t t85 = 105864389501764LLU;
volatile uint16_t x369 = 3U;
static int8_t x373 = INT8_MAX;
uint64_t x376 = 1660466247253LLU;
int8_t x378 = INT8_MIN;
int32_t t90 = 67;
volatile uint64_t t92 = 48LLU;
uint8_t x416 = 38U;
static volatile int32_t t98 = 10471;


void f0(void) {
	volatile int16_t x1 = -1;
	uint32_t x2 = UINT32_MAX;
	static uint64_t x3 = 51034742LLU;
	volatile uint16_t x4 = 3556U;
	volatile uint64_t t0 = 7897354483698103LLU;

	t0 = (x1/(x2+(x3|x4)));

	if (t0 != 4244530476LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = -1361;
	int8_t x6 = INT8_MIN;
	uint16_t x7 = 2U;
	static uint16_t x8 = 324U;
	volatile int32_t t1 = -36775;

	t1 = (x5/(x6+(x7|x8)));

	if (t1 != -6) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	static int32_t x10 = INT32_MAX;
	uint8_t x12 = 0U;
	uint32_t t2 = 2906258U;

	t2 = (x9/(x10+(x11|x12)));

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	uint64_t x15 = UINT64_MAX;
	uint64_t t3 = 116LLU;

	t3 = (x13/(x14+(x15|x16)));

	if (t3 != 8589934599LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 9U;
	static uint32_t x18 = UINT32_MAX;
	volatile int32_t x19 = -758949718;
	int64_t x20 = -1LL;
	volatile int64_t t4 = -34606712870831LL;

	t4 = (x17/(x18+(x19|x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x21 = 65U;
	volatile uint64_t x22 = UINT64_MAX;
	static int64_t x24 = INT64_MAX;
	volatile uint64_t t5 = 22LLU;

	t5 = (x21/(x22+(x23|x24)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MAX;
	int32_t x26 = INT32_MIN;
	uint16_t x27 = 12U;
	int64_t x28 = 60304LL;

	t6 = (x25/(x26+(x27|x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	static int8_t x30 = INT8_MIN;
	uint64_t x31 = UINT64_MAX;
	static volatile uint64_t t7 = 517876LLU;

	t7 = (x29/(x30+(x31|x32)));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 60131813725699LL;
	int32_t x34 = INT32_MIN;
	int8_t x35 = INT8_MAX;

	t8 = (x33/(x34+(x35|x36)));

	if (t8 != 28001LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 162948403657216804LL;
	int16_t x42 = 176;
	volatile int8_t x43 = INT8_MIN;
	int32_t x44 = INT32_MIN;
	int64_t t9 = -40954915886911964LL;

	t9 = (x41/(x42+(x43|x44)));

	if (t9 != 3394758409525350LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	static int16_t x48 = INT16_MAX;

	t10 = (x45/(x46+(x47|x48)));

	if (t10 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x51 = UINT64_MAX;
	static volatile int32_t x52 = INT32_MAX;
	static volatile uint64_t t11 = 484927170761875LLU;

	t11 = (x49/(x50+(x51|x52)));

	if (t11 != 2LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = 193598329LL;
	uint8_t x54 = UINT8_MAX;
	int32_t x55 = -358908812;
	uint8_t x56 = UINT8_MAX;
	int64_t t12 = -111780LL;

	t12 = (x53/(x54+(x55|x56)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x57 = INT64_MIN;
	uint16_t x58 = 3U;
	int64_t x59 = -1237358LL;
	static int64_t x60 = INT64_MIN;
	volatile int64_t t13 = 101312LL;

	t13 = (x57/(x58+(x59|x60)));

	if (t13 != 7454103338859LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x62 = INT16_MIN;
	uint8_t x63 = UINT8_MAX;
	int16_t x64 = -1;
	volatile int32_t t14 = -5;

	t14 = (x61/(x62+(x63|x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	volatile uint64_t t15 = 1753544756403735LLU;

	t15 = (x65/(x66+(x67|x68)));

	if (t15 != 13070375LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	uint16_t x71 = UINT16_MAX;
	uint16_t x72 = 3U;
	int32_t t16 = -244;

	t16 = (x69/(x70+(x71|x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 102U;
	int16_t x74 = -1;
	static volatile uint32_t x76 = 81713U;
	static volatile uint64_t t17 = 33259795323LLU;

	t17 = (x73/(x74+(x75|x76)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x77 = UINT32_MAX;
	uint32_t x78 = UINT32_MAX;
	int8_t x79 = INT8_MIN;
	volatile uint32_t t18 = 4033U;

	t18 = (x77/(x78+(x79|x80)));

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x82 = 0;
	volatile int64_t x83 = -626901325878730821LL;
	volatile uint32_t x84 = 18724U;

	t19 = (x81/(x82+(x83|x84)));

	if (t19 != 14LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x85 = INT64_MIN;
	int64_t x86 = -486720350541205026LL;
	int16_t x87 = -1;
	int32_t x88 = 21038682;
	static volatile int64_t t20 = -12142180865184471LL;

	t20 = (x85/(x86+(x87|x88)));

	if (t20 != 18LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x90 = 40U;
	uint8_t x91 = 4U;
	volatile int8_t x92 = INT8_MAX;
	volatile uint32_t t21 = 45U;

	t21 = (x89/(x90+(x91|x92)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -1LL;
	int64_t x94 = 44024964268078LL;
	int64_t x95 = -170886927957935728LL;
	int64_t t22 = 78580752302989005LL;

	t22 = (x93/(x94+(x95|x96)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = INT16_MAX;
	volatile uint64_t x98 = 2LLU;
	int8_t x99 = 0;
	static volatile uint64_t t23 = 361849887243022LLU;

	t23 = (x97/(x98+(x99|x100)));

	if (t23 != 19LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 854U;
	uint32_t x102 = 8049U;
	static int8_t x103 = 1;

	t24 = (x101/(x102+(x103|x104)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = 489696012389066055LL;
	int64_t x106 = INT64_MIN;
	volatile uint64_t x107 = 886555874159177871LLU;
	int8_t x108 = INT8_MIN;
	volatile uint64_t t25 = 1675300375608916800LLU;

	t25 = (x105/(x106+(x107|x108)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	volatile int32_t x110 = 298009336;
	volatile int64_t x111 = -1LL;
	int64_t x112 = INT64_MIN;

	t26 = (x109/(x110+(x111|x112)));

	if (t26 != -7LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = 14018;
	static int64_t x114 = -1LL;
	int16_t x116 = -1;

	t27 = (x113/(x114+(x115|x116)));

	if (t27 != -7009LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MAX;
	int16_t x118 = -1;
	static int64_t x119 = -1LL;
	volatile int32_t x120 = INT32_MAX;

	t28 = (x117/(x118+(x119|x120)));

	if (t28 != -63LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x121 = 3515U;
	volatile int16_t x122 = INT16_MAX;
	uint32_t x123 = 3205U;
	volatile int64_t x124 = -210854289813083LL;
	volatile int64_t t29 = 271906770943850889LL;

	t29 = (x121/(x122+(x123|x124)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x126 = 107409008LLU;
	int32_t x127 = INT32_MAX;
	static uint64_t x128 = UINT64_MAX;

	t30 = (x125/(x126+(x127|x128)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = -1;
	int16_t x134 = INT16_MIN;
	int16_t x135 = -1;
	uint64_t x136 = UINT64_MAX;
	uint64_t t31 = 91540960498253696LLU;

	t31 = (x133/(x134+(x135|x136)));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x137 = -1;
	uint64_t x138 = UINT64_MAX;
	int8_t x140 = INT8_MAX;
	uint64_t t32 = 253933LLU;

	t32 = (x137/(x138+(x139|x140)));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MIN;
	uint64_t x142 = 3735871681LLU;
	int32_t x143 = INT32_MIN;
	volatile uint64_t t33 = 2324116916270LLU;

	t33 = (x141/(x142+(x143|x144)));

	if (t33 != 2468889117LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = 4657154871451195LL;
	int8_t x146 = INT8_MIN;
	int32_t x147 = INT32_MAX;
	static int8_t x148 = INT8_MIN;
	int64_t t34 = 14579851122683420LL;

	t34 = (x145/(x146+(x147|x148)));

	if (t34 != -36101975747683LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x149 = 520020U;
	static int16_t x151 = INT16_MAX;
	uint32_t x152 = 1676U;
	volatile int64_t t35 = 1270LL;

	t35 = (x149/(x150+(x151|x152)));

	if (t35 != 15LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x153 = INT32_MAX;
	int64_t x154 = 312571695LL;
	volatile int32_t x156 = INT32_MAX;
	static uint64_t t36 = 23796504258839364LLU;

	t36 = (x153/(x154+(x155|x156)));

	if (t36 != 6LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = 4;
	uint64_t x158 = UINT64_MAX;
	int16_t x159 = INT16_MIN;
	static int64_t x160 = INT64_MAX;
	volatile uint64_t t37 = 56499643857LLU;

	t37 = (x157/(x158+(x159|x160)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x162 = -2;
	volatile int8_t x163 = -10;
	uint8_t x164 = UINT8_MAX;

	t38 = (x161/(x162+(x163|x164)));

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x165 = UINT64_MAX;
	int64_t x167 = INT64_MIN;
	static int8_t x168 = -1;
	uint64_t t39 = 440091353038LLU;

	t39 = (x165/(x166+(x167|x168)));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = -1186;
	int8_t x170 = -2;
	int16_t x172 = INT16_MIN;
	int32_t t40 = -40;

	t40 = (x169/(x170+(x171|x172)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = -1;
	uint8_t x175 = 40U;
	int64_t t41 = -46187387087LL;

	t41 = (x173/(x174+(x175|x176)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x177 = 57418188806761646LLU;
	uint8_t x178 = UINT8_MAX;
	int32_t x179 = 3439625;
	static int8_t x180 = -1;
	uint64_t t42 = 23LLU;

	t42 = (x177/(x178+(x179|x180)));

	if (t42 != 226055861443943LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x182 = UINT16_MAX;
	int8_t x183 = INT8_MIN;
	volatile int64_t x184 = INT64_MIN;
	volatile int64_t t43 = -874542565682065LL;

	t43 = (x181/(x182+(x183|x184)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x185 = 0LLU;
	uint32_t x186 = UINT32_MAX;
	int64_t x187 = INT64_MAX;
	int16_t x188 = -196;
	volatile uint64_t t44 = 1055241158LLU;

	t44 = (x185/(x186+(x187|x188)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = UINT16_MAX;
	static int64_t x190 = -1LL;
	uint8_t x191 = UINT8_MAX;
	int64_t x192 = INT64_MIN;
	volatile int64_t t45 = 325133891610844LL;

	t45 = (x189/(x190+(x191|x192)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x195 = INT64_MIN;

	t46 = (x193/(x194+(x195|x196)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = -15;
	uint16_t x198 = 458U;
	int32_t x199 = 3;
	int16_t x200 = 4444;
	static int32_t t47 = 0;

	t47 = (x197/(x198+(x199|x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x201 = UINT16_MAX;
	uint16_t x202 = 5U;
	int32_t t48 = 164006;

	t48 = (x201/(x202+(x203|x204)));

	if (t48 != 16383) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x206 = INT8_MIN;
	int32_t x207 = -1;
	volatile int64_t t49 = -24302820435LL;

	t49 = (x205/(x206+(x207|x208)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = -22674453;
	int64_t x211 = 6207872LL;
	int32_t x212 = -1;
	volatile int64_t t50 = -32561772769599LL;

	t50 = (x209/(x210+(x211|x212)));

	if (t50 != 691LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MIN;
	uint8_t x215 = UINT8_MAX;
	uint16_t x216 = UINT16_MAX;
	static volatile int64_t t51 = 57370414489931408LL;

	t51 = (x213/(x214+(x215|x216)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x217 = 29893233LLU;
	uint32_t x218 = UINT32_MAX;
	int64_t x220 = -1LL;
	volatile uint64_t t52 = 2452129280751844LLU;

	t52 = (x217/(x218+(x219|x220)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x221 = INT64_MIN;
	int8_t x222 = INT8_MIN;
	int32_t x223 = INT32_MAX;

	t53 = (x221/(x222+(x223|x224)));

	if (t53 != 71499008037633920LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x225 = INT64_MAX;
	static uint32_t x227 = UINT32_MAX;

	t54 = (x225/(x226+(x227|x228)));

	if (t54 != 2147483649LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = INT8_MIN;
	int8_t x230 = -1;
	int16_t x231 = INT16_MIN;
	volatile int32_t t55 = 245937;

	t55 = (x229/(x230+(x231|x232)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = INT32_MAX;
	int32_t x236 = INT32_MAX;

	t56 = (x233/(x234+(x235|x236)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x239 = INT32_MAX;
	static int16_t x240 = INT16_MIN;
	uint64_t t57 = 4477LLU;

	t57 = (x237/(x238+(x239|x240)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x241 = -1;
	int32_t x242 = INT32_MIN;
	volatile uint32_t x243 = 11602024U;
	int32_t x244 = INT32_MAX;
	static uint32_t t58 = 8160783U;

	t58 = (x241/(x242+(x243|x244)));

	if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x246 = INT32_MIN;
	uint8_t x247 = 17U;
	int64_t x248 = INT64_MAX;
	volatile int64_t t59 = -16980999381LL;

	t59 = (x245/(x246+(x247|x248)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = -1;
	int16_t x250 = INT16_MIN;
	uint8_t x252 = UINT8_MAX;

	t60 = (x249/(x250+(x251|x252)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = INT16_MIN;
	static int16_t x254 = 2785;
	static int16_t x255 = -28;
	volatile uint16_t x256 = 452U;
	static int32_t t61 = -31111212;

	t61 = (x253/(x254+(x255|x256)));

	if (t61 != -11) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = INT32_MIN;
	int32_t x258 = INT32_MAX;
	int8_t x259 = INT8_MIN;
	int16_t x260 = INT16_MIN;

	t62 = (x257/(x258+(x259|x260)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x261 = UINT32_MAX;
	uint8_t x262 = 13U;
	int8_t x264 = 1;
	volatile uint32_t t63 = 953852U;

	t63 = (x261/(x262+(x263|x264)));

	if (t63 != 131024U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x266 = 9;
	uint64_t x267 = 2096600641557LLU;
	volatile uint64_t t64 = 227442LLU;

	t64 = (x265/(x266+(x267|x268)));

	if (t64 != 4399200LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = 10U;
	volatile int16_t x270 = 1;
	uint16_t x271 = UINT16_MAX;
	int32_t x272 = INT32_MIN;

	t65 = (x269/(x270+(x271|x272)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x273 = -12371LL;
	static uint32_t x274 = 27793571U;
	int8_t x275 = -1;
	volatile int64_t t66 = -1739334429486LL;

	t66 = (x273/(x274+(x275|x276)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x277 = 7;
	int32_t x279 = 207470172;
	static int64_t x280 = INT64_MIN;
	static int64_t t67 = -195975827711861LL;

	t67 = (x277/(x278+(x279|x280)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x286 = 71U;
	volatile uint16_t x287 = 14583U;

	t68 = (x285/(x286+(x287|x288)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x289 = 2523;
	uint32_t x290 = 9644892U;
	uint8_t x291 = UINT8_MAX;
	int16_t x292 = INT16_MIN;
	static volatile uint32_t t69 = 533611233U;

	t69 = (x289/(x290+(x291|x292)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x293 = INT32_MIN;
	int64_t x294 = INT64_MAX;
	volatile uint16_t x295 = 162U;
	uint64_t x296 = 6LLU;
	static uint64_t t70 = 806167914372869LLU;

	t70 = (x293/(x294+(x295|x296)));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x297 = -1;
	volatile int16_t x298 = -1;
	static uint32_t x299 = UINT32_MAX;
	volatile int64_t x300 = INT64_MIN;
	int64_t t71 = 2444188271637026LL;

	t71 = (x297/(x298+(x299|x300)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x301 = INT32_MAX;
	volatile uint8_t x302 = 1U;
	uint8_t x303 = 122U;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t72 = -18326278;

	t72 = (x301/(x302+(x303|x304)));

	if (t72 != 8388607) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x305 = -1;
	int16_t x306 = -1;
	uint64_t x307 = UINT64_MAX;
	uint32_t x308 = UINT32_MAX;
	volatile uint64_t t73 = 5337615079356221489LLU;

	t73 = (x305/(x306+(x307|x308)));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x314 = 0;
	static volatile uint64_t x316 = 488710073822551LLU;
	volatile uint64_t t74 = 72LLU;

	t74 = (x313/(x314+(x315|x316)));

	if (t74 != 37745LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = 0;
	int32_t x318 = INT32_MAX;
	static int16_t x319 = -980;
	int8_t x320 = -20;
	int32_t t75 = -17;

	t75 = (x317/(x318+(x319|x320)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x321 = -1;
	static int32_t x322 = INT32_MIN;
	volatile uint32_t x323 = 1U;
	int64_t x324 = 63514843013LL;
	volatile int64_t t76 = -8257762415003LL;

	t76 = (x321/(x322+(x323|x324)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x326 = 374U;
	int64_t x327 = -47LL;
	int8_t x328 = 0;

	t77 = (x325/(x326+(x327|x328)));

	if (t77 != -9024617LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = INT8_MAX;
	volatile int16_t x330 = -1;
	int64_t x332 = INT64_MIN;

	t78 = (x329/(x330+(x331|x332)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x334 = 818LL;
	uint64_t x335 = 4451176LLU;

	t79 = (x333/(x334+(x335|x336)));

	if (t79 != 4143474442314LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x341 = 22830193U;
	uint16_t x342 = 104U;
	static volatile int16_t x343 = 34;
	int16_t x344 = INT16_MIN;

	t80 = (x341/(x342+(x343|x344)));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x345 = INT32_MIN;
	volatile int8_t x346 = 33;
	volatile int16_t x347 = INT16_MIN;
	volatile uint64_t t81 = 1879058LLU;

	t81 = (x345/(x346+(x347|x348)));

	if (t81 != 576460752236314624LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x349 = INT32_MAX;
	uint32_t x350 = UINT32_MAX;
	volatile uint16_t x352 = 4U;
	volatile uint32_t t82 = 1463925884U;

	t82 = (x349/(x350+(x351|x352)));

	if (t82 != 715827882U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = -2887495;
	static volatile uint64_t x354 = 113602119LLU;
	uint16_t x355 = 16011U;
	volatile uint64_t t83 = 84073LLU;

	t83 = (x353/(x354+(x355|x356)));

	if (t83 != 162357330476LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x359 = INT32_MIN;
	static volatile int64_t x360 = INT64_MIN;

	t84 = (x357/(x358+(x359|x360)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x361 = INT16_MIN;
	static int32_t x362 = INT32_MIN;
	int32_t x363 = -21;
	uint64_t x364 = 1043911923077557886LLU;

	t85 = (x361/(x362+(x363|x364)));

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x370 = 126659836177LLU;
	uint16_t x371 = UINT16_MAX;
	int64_t x372 = -41LL;
	static volatile uint64_t t86 = 7606LLU;

	t86 = (x369/(x370+(x371|x372)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x374 = INT8_MIN;
	uint16_t x375 = 81U;
	uint64_t t87 = 2785535269911313680LLU;

	t87 = (x373/(x374+(x375|x376)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x377 = INT32_MAX;
	static int16_t x379 = -82;
	int16_t x380 = INT16_MAX;
	volatile int32_t t88 = -47134;

	t88 = (x377/(x378+(x379|x380)));

	if (t88 != -16647160) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x381 = -1;
	volatile int64_t x382 = -1LL;
	int16_t x383 = INT16_MAX;
	int32_t x384 = INT32_MIN;
	int64_t t89 = 2132441618LL;

	t89 = (x381/(x382+(x383|x384)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x385 = 1U;
	volatile int32_t x386 = 241764;
	static int8_t x387 = -1;
	int16_t x388 = INT16_MIN;

	t90 = (x385/(x386+(x387|x388)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = 7;
	int32_t x390 = INT32_MAX;
	int8_t x391 = INT8_MAX;
	int32_t x392 = -1535;
	volatile int32_t t91 = -9;

	t91 = (x389/(x390+(x391|x392)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x393 = 282;
	uint64_t x394 = 182471119575LLU;
	volatile int16_t x395 = INT16_MIN;
	volatile int16_t x396 = -1;

	t92 = (x393/(x394+(x395|x396)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x397 = INT64_MIN;
	int16_t x398 = 4;
	uint16_t x399 = 1851U;
	static uint64_t x400 = UINT64_MAX;
	uint64_t t93 = 251948197LLU;

	t93 = (x397/(x398+(x399|x400)));

	if (t93 != 3074457345618258602LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x401 = INT64_MAX;
	uint16_t x402 = UINT16_MAX;
	int8_t x403 = INT8_MAX;
	int32_t x404 = -1;
	int64_t t94 = 1LL;

	t94 = (x401/(x402+(x403|x404)));

	if (t94 != 140741783453700LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x405 = INT64_MIN;
	static volatile uint16_t x406 = 1U;
	uint16_t x407 = UINT16_MAX;
	int8_t x408 = 1;
	int64_t t95 = -3LL;

	t95 = (x405/(x406+(x407|x408)));

	if (t95 != -140737488355328LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x413 = UINT32_MAX;
	uint16_t x414 = 93U;
	static int8_t x415 = INT8_MIN;
	uint32_t t96 = 8997U;

	t96 = (x413/(x414+(x415|x416)));

	if (t96 != 1431655765U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x417 = 6U;
	uint64_t x418 = 0LLU;
	int64_t x419 = INT64_MAX;
	int32_t x420 = INT32_MIN;
	volatile uint64_t t97 = 5LLU;

	t97 = (x417/(x418+(x419|x420)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x421 = 3U;
	int16_t x422 = -1;
	int32_t x423 = INT32_MAX;
	uint16_t x424 = UINT16_MAX;

	t98 = (x421/(x422+(x423|x424)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x425 = INT32_MIN;
	static uint64_t x426 = UINT64_MAX;
	static volatile int64_t x427 = -43957944LL;
	uint16_t x428 = 3286U;
	uint64_t t99 = 69074053799112LLU;

	t99 = (x425/(x426+(x427|x428)));

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

