#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 23516289609374LLU;
int64_t x4 = 435934349617LL;
volatile uint16_t x12 = 5525U;
uint64_t x13 = UINT64_MAX;
static int64_t x17 = -15446039126650LL;
int64_t x19 = INT64_MIN;
uint32_t x22 = UINT32_MAX;
static volatile uint16_t x34 = 31U;
static volatile uint64_t t8 = 1163098950395LLU;
uint16_t x37 = 65U;
int64_t x40 = INT64_MAX;
int64_t t9 = 980073522LL;
uint32_t t11 = 36U;
uint64_t t12 = 1759716836683413315LLU;
int8_t x53 = INT8_MIN;
static int8_t x64 = 25;
int64_t t17 = 21671LL;
int16_t x74 = -1;
uint16_t x75 = 3881U;
volatile int32_t t18 = 4;
volatile uint32_t x79 = 48896361U;
uint8_t x80 = 1U;
int16_t x81 = INT16_MIN;
static volatile int32_t x86 = 1;
volatile int32_t t21 = 0;
volatile int8_t x103 = INT8_MIN;
int8_t x104 = INT8_MIN;
int64_t x107 = INT64_MAX;
volatile int64_t t25 = 533456906574500831LL;
volatile uint64_t x126 = 6206335683326989LLU;
volatile uint64_t t30 = 12458983224932047LLU;
int64_t x130 = -1LL;
int8_t x145 = 29;
uint32_t x146 = 47U;
uint32_t x151 = UINT32_MAX;
volatile int32_t x154 = -84322024;
static uint8_t x157 = 1U;
static volatile uint32_t t37 = 57357U;
volatile uint8_t x161 = UINT8_MAX;
static volatile uint64_t t39 = 1600082LLU;
uint32_t x171 = 1113U;
int8_t x178 = INT8_MIN;
int16_t x180 = INT16_MIN;
int64_t t42 = 47816001989396LL;
volatile int8_t x185 = INT8_MIN;
static int64_t t43 = -29169182LL;
int64_t x192 = -1LL;
static volatile int32_t x201 = INT32_MAX;
int32_t x210 = INT32_MIN;
int64_t x212 = INT64_MAX;
volatile int64_t t48 = -105669514832LL;
static uint32_t x213 = UINT32_MAX;
volatile int64_t x214 = INT64_MIN;
uint64_t x216 = UINT64_MAX;
volatile uint32_t x219 = UINT32_MAX;
int16_t x220 = 1;
uint64_t x222 = 50LLU;
volatile int16_t x224 = INT16_MIN;
volatile uint64_t t51 = 1711437927137730LLU;
static uint32_t x227 = 26094U;
volatile int16_t x231 = INT16_MIN;
static int32_t x235 = 61;
int32_t x236 = 0;
int8_t x241 = INT8_MAX;
uint64_t x247 = 119LLU;
volatile uint64_t t57 = 1759LLU;
static int16_t x255 = -228;
volatile int32_t x267 = INT32_MIN;
uint32_t x268 = 469136965U;
volatile int64_t t61 = 225720LL;
static int64_t x274 = INT64_MIN;
volatile uint64_t t64 = 27939603LLU;
uint8_t x284 = 20U;
uint8_t x285 = UINT8_MAX;
static int16_t x288 = -1;
static volatile int32_t t66 = -62358435;
int8_t x293 = 0;
volatile int32_t t68 = 532;
int8_t x308 = -3;
int32_t x310 = INT32_MAX;
int32_t x312 = 914;
int8_t x318 = -1;
static int64_t t74 = 17LL;
static int32_t x324 = -1;
int64_t t75 = -16977LL;
static uint32_t x329 = 15580735U;
static int64_t x336 = -20801LL;
static int8_t x338 = -11;
int8_t x342 = -1;
static int64_t x346 = -1LL;
volatile int16_t x350 = -6;
int32_t x358 = -105540;
uint64_t x360 = 15011388321623288LLU;
static int64_t x362 = 17086130536LL;
static int64_t t85 = -31LL;
static uint8_t x365 = 44U;
int64_t x366 = -1LL;
static volatile int8_t x370 = INT8_MIN;
uint64_t x371 = 350427LLU;
int16_t x380 = -11741;
uint16_t x384 = 16960U;
uint16_t x385 = 1000U;
volatile uint8_t x387 = UINT8_MAX;
volatile int64_t t91 = -18LL;
static volatile int16_t x402 = -1;
uint8_t x406 = 89U;
int64_t x413 = INT64_MIN;
int8_t x416 = 31;
static uint64_t x420 = 119822169990848LLU;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static int8_t x3 = INT8_MAX;
	volatile uint64_t t0 = 685612366362LLU;

	t0 = ((x1/x2)%(x3|x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 10734094745186LL;
	int32_t x6 = INT32_MIN;
	volatile uint64_t x7 = 662911LLU;
	static int16_t x8 = INT16_MAX;
	volatile uint64_t t1 = 25LLU;

	t1 = ((x5/x6)%(x7|x8));

	if (t1 != 113796LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 3;
	int64_t x10 = -466LL;
	int32_t x11 = 12513;
	int64_t t2 = 444LL;

	t2 = ((x9/x10)%(x11|x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x14 = 79346LLU;
	int8_t x15 = INT8_MAX;
	uint16_t x16 = 1558U;
	uint64_t t3 = 33LLU;

	t3 = ((x13/x14)%(x15|x16));

	if (t3 != 231LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x18 = -1;
	uint16_t x20 = UINT16_MAX;
	int64_t t4 = 329194677518044LL;

	t4 = ((x17/x18)%(x19|x20));

	if (t4 != 15446039126650LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1375653LL;
	volatile int8_t x23 = INT8_MAX;
	int16_t x24 = -1;
	static volatile int64_t t5 = -294880913993090LL;

	t5 = ((x21/x22)%(x23|x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = UINT32_MAX;
	int32_t x26 = -14253095;
	static volatile uint32_t x27 = 4109U;
	int64_t x28 = INT64_MIN;
	volatile int64_t t6 = -44115138585860LL;

	t6 = ((x25/x26)%(x27|x28));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int32_t x30 = INT32_MIN;
	static int16_t x31 = 0;
	int8_t x32 = INT8_MIN;
	static volatile int32_t t7 = 538;

	t7 = ((x29/x30)%(x31|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 868065232LLU;
	static int32_t x35 = INT32_MIN;
	static int32_t x36 = INT32_MAX;

	t8 = ((x33/x34)%(x35|x36));

	if (t8 != 28002104LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = 19U;
	volatile int8_t x39 = 2;

	t9 = ((x37/x38)%(x39|x40));

	if (t9 != 3LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int32_t x42 = 733217;
	volatile uint64_t x43 = UINT64_MAX;
	volatile int32_t x44 = -20110830;
	volatile uint64_t t10 = 212793653077787287LLU;

	t10 = ((x41/x42)%(x43|x44));

	if (t10 != 18446744073709548688LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = -1;
	static int8_t x46 = -23;
	uint32_t x47 = UINT32_MAX;
	uint32_t x48 = 29U;

	t11 = ((x45/x46)%(x47|x48));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint64_t x50 = 11422234145LLU;
	uint64_t x51 = 3712LLU;
	uint64_t x52 = 45464725669LLU;

	t12 = ((x49/x50)%(x51|x52));

	if (t12 != 807492817LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = 522;
	volatile int32_t x55 = -1;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 227020;

	t13 = ((x53/x54)%(x55|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	int8_t x58 = -1;
	volatile uint32_t x59 = 232U;
	static int32_t x60 = -198;
	volatile int64_t t14 = -3758671LL;

	t14 = ((x57/x58)%(x59|x60));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = -1;
	volatile uint64_t x62 = 1498LLU;
	int64_t x63 = INT64_MIN;
	uint64_t t15 = 241704907LLU;

	t15 = ((x61/x62)%(x63|x64));

	if (t15 != 12314248380313452LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int8_t x66 = INT8_MAX;
	int64_t x67 = -146882347443LL;
	static int16_t x68 = -189;
	volatile int64_t t16 = -3103768150481877LL;

	t16 = ((x65/x66)%(x67|x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	uint32_t x70 = UINT32_MAX;
	int64_t x71 = 7955241LL;
	int8_t x72 = -1;

	t17 = ((x69/x70)%(x71|x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MIN;
	int8_t x76 = -1;

	t18 = ((x73/x74)%(x75|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	volatile int16_t x78 = -1;
	uint32_t t19 = 0U;

	t19 = ((x77/x78)%(x79|x80));

	if (t19 != 40983634U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x82 = 1U;
	static volatile int64_t x83 = INT64_MIN;
	int16_t x84 = -1;
	int64_t t20 = -26297275404514LL;

	t20 = ((x81/x82)%(x83|x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MIN;
	static int32_t x87 = -4274240;
	int32_t x88 = INT32_MIN;

	t21 = ((x85/x86)%(x87|x88));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 2U;
	int16_t x94 = INT16_MIN;
	int32_t x95 = -1;
	uint64_t x96 = 82356270925389LLU;
	volatile uint64_t t22 = 69LLU;

	t22 = ((x93/x94)%(x95|x96));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = UINT32_MAX;
	int16_t x98 = -1;
	static uint16_t x99 = 1544U;
	volatile uint8_t x100 = UINT8_MAX;
	uint32_t t23 = 5U;

	t23 = ((x97/x98)%(x99|x100));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -1089519281148LL;
	int8_t x102 = -1;
	int64_t t24 = -1LL;

	t24 = ((x101/x102)%(x103|x104));

	if (t24 != 124LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x105 = 15;
	static int8_t x106 = -1;
	static int16_t x108 = -1;

	t25 = ((x105/x106)%(x107|x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = 12U;
	uint8_t x110 = 77U;
	uint64_t x111 = UINT64_MAX;
	volatile uint16_t x112 = UINT16_MAX;
	uint64_t t26 = 6526972LLU;

	t26 = ((x109/x110)%(x111|x112));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MIN;
	int64_t x114 = 246387995LL;
	int64_t x115 = -1LL;
	int8_t x116 = INT8_MIN;
	static int64_t t27 = -6LL;

	t27 = ((x113/x114)%(x115|x116));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = -1;
	int32_t x118 = INT32_MAX;
	int8_t x119 = INT8_MIN;
	uint8_t x120 = 6U;
	volatile int32_t t28 = -3513;

	t28 = ((x117/x118)%(x119|x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = 75576722111LL;
	uint64_t x122 = 34915830LLU;
	static uint16_t x123 = 0U;
	uint8_t x124 = UINT8_MAX;
	volatile uint64_t t29 = 24985155296335734LLU;

	t29 = ((x121/x122)%(x123|x124));

	if (t29 != 124LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 1U;
	int8_t x127 = INT8_MIN;
	uint64_t x128 = 6936LLU;

	t30 = ((x125/x126)%(x127|x128));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = 1;
	uint8_t x131 = 9U;
	int16_t x132 = -870;
	volatile int64_t t31 = -11636444114502LL;

	t31 = ((x129/x130)%(x131|x132));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = 9393160U;
	int64_t x134 = -1LL;
	uint64_t x135 = 1982819LLU;
	int8_t x136 = INT8_MIN;
	uint64_t t32 = 3904679040554731281LLU;

	t32 = ((x133/x134)%(x135|x136));

	if (t32 != 18446744073700158456LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -1;
	int32_t x138 = -1;
	int64_t x139 = -7574LL;
	int8_t x140 = -1;
	int64_t t33 = 2923LL;

	t33 = ((x137/x138)%(x139|x140));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x147 = -15;
	static uint64_t x148 = 102356854540342LLU;
	volatile uint64_t t34 = 2LLU;

	t34 = ((x145/x146)%(x147|x148));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = -1LL;
	int64_t x150 = 526239111365811319LL;
	int32_t x152 = 132750;
	int64_t t35 = 280957081659454764LL;

	t35 = ((x149/x150)%(x151|x152));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = -627;
	int16_t x155 = INT16_MIN;
	volatile int64_t x156 = -1078183464227LL;
	volatile int64_t t36 = 205LL;

	t36 = ((x153/x154)%(x155|x156));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x158 = INT8_MIN;
	uint32_t x159 = 147303U;
	int32_t x160 = INT32_MIN;

	t37 = ((x157/x158)%(x159|x160));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x162 = 1584438102341LL;
	int64_t x163 = INT64_MIN;
	int8_t x164 = -1;
	int64_t t38 = -995464047715422LL;

	t38 = ((x161/x162)%(x163|x164));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x165 = 2;
	static volatile uint32_t x166 = UINT32_MAX;
	uint64_t x167 = 155365LLU;
	volatile int8_t x168 = INT8_MAX;

	t39 = ((x165/x166)%(x167|x168));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x169 = 515939U;
	static uint16_t x170 = 2663U;
	int8_t x172 = -1;
	uint32_t t40 = 855U;

	t40 = ((x169/x170)%(x171|x172));

	if (t40 != 193U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x177 = 5529U;
	int16_t x179 = -1;
	volatile int32_t t41 = -106;

	t41 = ((x177/x178)%(x179|x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x181 = UINT8_MAX;
	int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MAX;
	int64_t x184 = INT64_MIN;

	t42 = ((x181/x182)%(x183|x184));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x186 = -156836413864315LL;
	volatile uint16_t x187 = UINT16_MAX;
	int16_t x188 = INT16_MAX;

	t43 = ((x185/x186)%(x187|x188));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x189 = INT16_MIN;
	uint64_t x190 = 453275575588LLU;
	uint16_t x191 = 17219U;
	volatile uint64_t t44 = 879416LLU;

	t44 = ((x189/x190)%(x191|x192));

	if (t44 != 40696532LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x197 = 3066091965LLU;
	volatile int64_t x198 = INT64_MIN;
	static uint16_t x199 = UINT16_MAX;
	uint16_t x200 = 5U;
	uint64_t t45 = 86526739740805LLU;

	t45 = ((x197/x198)%(x199|x200));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x202 = -1;
	uint32_t x203 = 54117U;
	uint64_t x204 = 25701960LLU;
	uint64_t t46 = 833162348798LLU;

	t46 = ((x201/x202)%(x203|x204));

	if (t46 != 11651421LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = INT16_MAX;
	volatile uint32_t x206 = 1U;
	volatile int64_t x207 = -96LL;
	int16_t x208 = 1456;
	volatile int64_t t47 = -16252046107773918LL;

	t47 = ((x205/x206)%(x207|x208));

	if (t47 != 47LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = INT16_MAX;
	volatile int16_t x211 = 9;

	t48 = ((x209/x210)%(x211|x212));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x215 = UINT32_MAX;
	static volatile uint64_t t49 = 1476LLU;

	t49 = ((x213/x214)%(x215|x216));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x217 = 3U;
	int16_t x218 = INT16_MAX;
	uint32_t t50 = 3416231U;

	t50 = ((x217/x218)%(x219|x220));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x221 = 3487936U;
	static volatile uint32_t x223 = 3855502U;

	t51 = ((x221/x222)%(x223|x224));

	if (t51 != 69758LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = 381;
	int8_t x226 = -3;
	uint16_t x228 = UINT16_MAX;
	volatile uint32_t t52 = 3U;

	t52 = ((x225/x226)%(x227|x228));

	if (t52 != 65409U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = INT32_MIN;
	static uint16_t x230 = 2761U;
	uint32_t x232 = UINT32_MAX;
	static volatile uint32_t t53 = 0U;

	t53 = ((x229/x230)%(x231|x232));

	if (t53 != 4294189505U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = -1LL;
	volatile int8_t x234 = INT8_MAX;
	int64_t t54 = 17653028LL;

	t54 = ((x233/x234)%(x235|x236));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x242 = -967635336LL;
	uint32_t x243 = 36U;
	int16_t x244 = 0;
	volatile int64_t t55 = 5063337LL;

	t55 = ((x241/x242)%(x243|x244));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x245 = 7U;
	static uint64_t x246 = UINT64_MAX;
	int8_t x248 = -1;
	static uint64_t t56 = 3770435LLU;

	t56 = ((x245/x246)%(x247|x248));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = INT32_MIN;
	int32_t x250 = INT32_MAX;
	uint64_t x251 = UINT64_MAX;
	int64_t x252 = INT64_MIN;

	t57 = ((x249/x250)%(x251|x252));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x253 = 346874U;
	static uint64_t x254 = 12049839059392LLU;
	int8_t x256 = 3;
	volatile uint64_t t58 = 3959LLU;

	t58 = ((x253/x254)%(x255|x256));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x257 = 43U;
	uint32_t x258 = UINT32_MAX;
	uint32_t x259 = 107U;
	static volatile uint32_t x260 = UINT32_MAX;
	uint32_t t59 = 843042U;

	t59 = ((x257/x258)%(x259|x260));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x261 = INT32_MAX;
	volatile uint64_t x262 = UINT64_MAX;
	uint64_t x263 = 509801959192993LLU;
	uint32_t x264 = 2U;
	uint64_t t60 = 9455910912089LLU;

	t60 = ((x261/x262)%(x263|x264));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x265 = INT64_MIN;
	int8_t x266 = INT8_MIN;

	t61 = ((x265/x266)%(x267|x268));

	if (t61 != 1849717702LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x269 = 12U;
	static int8_t x270 = -1;
	int64_t x271 = INT64_MAX;
	volatile uint64_t x272 = UINT64_MAX;
	uint64_t t62 = 36476828597374LLU;

	t62 = ((x269/x270)%(x271|x272));

	if (t62 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = INT8_MIN;
	int16_t x275 = INT16_MIN;
	uint32_t x276 = 992U;
	static volatile int64_t t63 = -4777198632087LL;

	t63 = ((x273/x274)%(x275|x276));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x277 = UINT64_MAX;
	volatile int8_t x278 = INT8_MIN;
	static int8_t x279 = INT8_MIN;
	static int32_t x280 = 1816103;

	t64 = ((x277/x278)%(x279|x280));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x281 = 2720652889185362LLU;
	static int32_t x282 = INT32_MIN;
	int16_t x283 = INT16_MAX;
	volatile uint64_t t65 = 665LLU;

	t65 = ((x281/x282)%(x283|x284));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x286 = INT8_MAX;
	static int16_t x287 = INT16_MIN;

	t66 = ((x285/x286)%(x287|x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x289 = UINT8_MAX;
	int32_t x290 = INT32_MAX;
	static int64_t x291 = INT64_MIN;
	int8_t x292 = -1;
	volatile int64_t t67 = 5200329778LL;

	t67 = ((x289/x290)%(x291|x292));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x294 = INT32_MAX;
	int16_t x295 = -5;
	int32_t x296 = INT32_MAX;

	t68 = ((x293/x294)%(x295|x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x297 = -1;
	static int32_t x298 = -2044;
	static int32_t x299 = -1;
	int16_t x300 = INT16_MIN;
	int32_t t69 = -340421277;

	t69 = ((x297/x298)%(x299|x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x301 = UINT16_MAX;
	volatile uint32_t x302 = 951U;
	int8_t x303 = INT8_MIN;
	int32_t x304 = INT32_MIN;
	static uint32_t t70 = 825160079U;

	t70 = ((x301/x302)%(x303|x304));

	if (t70 != 68U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = -28939439359159340LL;
	int16_t x306 = -143;
	int8_t x307 = -3;
	int64_t t71 = 948304LL;

	t71 = ((x305/x306)%(x307|x308));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = INT8_MIN;
	static int8_t x311 = INT8_MIN;
	volatile int32_t t72 = 164;

	t72 = ((x309/x310)%(x311|x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = 14430LL;
	int32_t x314 = -1;
	uint8_t x315 = UINT8_MAX;
	int16_t x316 = INT16_MIN;
	volatile int64_t t73 = 1LL;

	t73 = ((x313/x314)%(x315|x316));

	if (t73 != -14430LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x317 = -1LL;
	uint16_t x319 = 219U;
	int8_t x320 = -1;

	t74 = ((x317/x318)%(x319|x320));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = INT8_MIN;
	int64_t x322 = INT64_MAX;
	uint32_t x323 = UINT32_MAX;

	t75 = ((x321/x322)%(x323|x324));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x325 = 0;
	int8_t x326 = INT8_MIN;
	int32_t x327 = -358049201;
	static uint64_t x328 = 11171245832423LLU;
	volatile uint64_t t76 = 98830032196848LLU;

	t76 = ((x325/x326)%(x327|x328));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x330 = -358;
	int32_t x331 = 64459;
	int32_t x332 = 225089;
	uint32_t t77 = 126459708U;

	t77 = ((x329/x330)%(x331|x332));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = INT8_MAX;
	int8_t x334 = 1;
	static int32_t x335 = INT32_MIN;
	volatile int64_t t78 = 21LL;

	t78 = ((x333/x334)%(x335|x336));

	if (t78 != 127LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = INT16_MIN;
	int32_t x339 = INT32_MIN;
	uint16_t x340 = UINT16_MAX;
	int32_t t79 = 12;

	t79 = ((x337/x338)%(x339|x340));

	if (t79 != 2978) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x341 = 460365265821971LLU;
	uint32_t x343 = 67U;
	volatile int64_t x344 = 609240LL;
	volatile uint64_t t80 = 2085603513352LLU;

	t80 = ((x341/x342)%(x343|x344));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x345 = -4205;
	int32_t x347 = 9186;
	uint16_t x348 = UINT16_MAX;
	volatile int64_t t81 = -737723754231534LL;

	t81 = ((x345/x346)%(x347|x348));

	if (t81 != 4205LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = INT32_MIN;
	volatile uint8_t x351 = 5U;
	static uint32_t x352 = UINT32_MAX;
	uint32_t t82 = 609048U;

	t82 = ((x349/x350)%(x351|x352));

	if (t82 != 357913941U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x353 = UINT16_MAX;
	uint32_t x354 = 2285U;
	static uint64_t x355 = 0LLU;
	int8_t x356 = -1;
	uint64_t t83 = 3645765748058LLU;

	t83 = ((x353/x354)%(x355|x356));

	if (t83 != 28LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x357 = -3;
	static int32_t x359 = INT32_MIN;
	uint64_t t84 = 88586172LLU;

	t84 = ((x357/x358)%(x359|x360));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x361 = -1;
	static uint32_t x363 = 33571547U;
	static int8_t x364 = 0;

	t85 = ((x361/x362)%(x363|x364));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x367 = UINT64_MAX;
	int32_t x368 = 1145;
	volatile uint64_t t86 = 79890LLU;

	t86 = ((x365/x366)%(x367|x368));

	if (t86 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x369 = INT16_MIN;
	int32_t x372 = 120;
	volatile uint64_t t87 = 1208LLU;

	t87 = ((x369/x370)%(x371|x372));

	if (t87 != 256LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x373 = UINT32_MAX;
	uint64_t x374 = 33LLU;
	int8_t x375 = INT8_MIN;
	static int8_t x376 = -1;
	uint64_t t88 = 5790456951192685LLU;

	t88 = ((x373/x374)%(x375|x376));

	if (t88 != 130150524LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = 47087901LL;
	uint8_t x378 = UINT8_MAX;
	volatile uint32_t x379 = 52541916U;
	volatile int64_t t89 = -112138371830LL;

	t89 = ((x377/x378)%(x379|x380));

	if (t89 != 184658LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x381 = 11;
	int8_t x382 = 15;
	int8_t x383 = 35;
	int32_t t90 = 0;

	t90 = ((x381/x382)%(x383|x384));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x386 = INT64_MIN;
	static int64_t x388 = INT64_MIN;

	t91 = ((x385/x386)%(x387|x388));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x389 = UINT32_MAX;
	int32_t x390 = 115732622;
	uint32_t x391 = 254U;
	static uint32_t x392 = 44885U;
	static uint32_t t92 = 2U;

	t92 = ((x389/x390)%(x391|x392));

	if (t92 != 37U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x393 = 0U;
	static uint16_t x394 = 7218U;
	static int32_t x395 = -1;
	uint8_t x396 = 0U;
	int32_t t93 = -27034514;

	t93 = ((x393/x394)%(x395|x396));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x397 = -1134LL;
	int32_t x398 = INT32_MIN;
	int32_t x399 = -1;
	volatile uint16_t x400 = UINT16_MAX;
	volatile int64_t t94 = -13434135894828LL;

	t94 = ((x397/x398)%(x399|x400));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x401 = 20076313933LLU;
	static int32_t x403 = -1;
	static int16_t x404 = INT16_MIN;
	volatile uint64_t t95 = 1263456899353013971LLU;

	t95 = ((x401/x402)%(x403|x404));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x405 = -1LL;
	int8_t x407 = 36;
	static int64_t x408 = -1LL;
	volatile int64_t t96 = -947513828605399499LL;

	t96 = ((x405/x406)%(x407|x408));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = INT64_MIN;
	uint32_t x410 = 1911U;
	static volatile uint8_t x411 = 0U;
	static int64_t x412 = -77733137889837LL;
	static int64_t t97 = -3LL;

	t97 = ((x409/x410)%(x411|x412));

	if (t97 != -7009101722191LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x414 = 249U;
	int32_t x415 = -1;
	volatile int64_t t98 = 1087144261874297LL;

	t98 = ((x413/x414)%(x415|x416));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x417 = 5152649351672LLU;
	static int32_t x418 = INT32_MIN;
	uint32_t x419 = 809U;
	static volatile uint64_t t99 = 254LLU;

	t99 = ((x417/x418)%(x419|x420));

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

