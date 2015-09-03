#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x9 = 0;
int16_t x10 = INT16_MIN;
uint32_t x18 = 4159153U;
volatile uint32_t x19 = 112745U;
static uint8_t x20 = 4U;
uint8_t x24 = UINT8_MAX;
int32_t x34 = 487;
uint16_t x46 = 10U;
uint8_t x47 = 0U;
int64_t x50 = INT64_MIN;
int32_t x56 = -115623;
uint64_t x62 = 141486387613081LLU;
int64_t t15 = -110820222LL;
volatile int64_t t17 = -346784349292LL;
int16_t x89 = -1;
uint8_t x93 = 6U;
static int32_t x94 = 302609461;
static int32_t x95 = -7564;
static uint32_t x96 = UINT32_MAX;
uint32_t x98 = 17U;
static volatile int64_t t23 = 8689247151422LL;
int8_t x113 = -1;
uint32_t x115 = UINT32_MAX;
static int64_t x117 = -1LL;
int8_t x126 = INT8_MIN;
uint16_t x127 = 2U;
uint32_t t29 = 21090079U;
volatile int16_t x134 = -1;
int32_t x136 = -1;
int16_t x156 = INT16_MIN;
volatile int32_t t32 = -202;
static volatile uint8_t x162 = UINT8_MAX;
int16_t x164 = INT16_MAX;
uint64_t t34 = 4095532LLU;
int64_t x174 = -1LL;
uint8_t x176 = UINT8_MAX;
uint64_t t36 = 253697194947415LLU;
int16_t x177 = -5;
uint16_t x178 = 5065U;
int64_t x181 = INT64_MIN;
uint64_t x196 = 4044196207396558658LLU;
uint32_t x212 = 45469415U;
static volatile int64_t x214 = 8381610LL;
uint64_t t43 = 3964699121890167LLU;
static volatile int8_t x226 = INT8_MIN;
static int8_t x227 = 0;
volatile int64_t x228 = 89178890742LL;
volatile int16_t x240 = -1;
uint16_t x254 = 47U;
static int8_t x258 = INT8_MAX;
int64_t x265 = INT64_MIN;
int64_t x277 = INT64_MIN;
static int16_t x282 = -1;
uint32_t x288 = 1144619U;
static int32_t x300 = INT32_MAX;
int16_t x302 = INT16_MIN;
volatile uint8_t x315 = 2U;
volatile uint64_t x321 = 22810779930256LLU;
static int32_t x337 = 1;
int32_t x341 = INT32_MIN;
uint64_t x342 = 270399738LLU;
int32_t x344 = -1;
int64_t x356 = 6LL;
int8_t x360 = INT8_MIN;
volatile int64_t t66 = 72338920108LL;
uint32_t x368 = UINT32_MAX;
uint32_t x369 = 6992U;
int8_t x370 = INT8_MIN;
int64_t x371 = 178782673441667324LL;
int64_t x374 = INT64_MIN;
volatile uint32_t x375 = 202U;
uint8_t x387 = UINT8_MAX;
static int8_t x390 = -1;
volatile int32_t t72 = -98832573;
uint8_t x393 = 55U;
int32_t x397 = INT32_MIN;
int32_t t74 = -17379321;
int8_t x405 = -1;
static volatile int8_t x406 = 2;
volatile int64_t t77 = -932LL;
int8_t x417 = -1;
int64_t x421 = INT64_MIN;
uint8_t x432 = 2U;
int16_t x435 = INT16_MIN;
int64_t x436 = -1LL;
uint8_t x437 = 1U;
int64_t t85 = 133LL;
static int32_t t87 = -50882558;
int8_t x469 = -22;
int32_t x472 = -1;
int64_t x477 = -1LL;
static int32_t x486 = INT32_MAX;
int16_t x488 = INT16_MIN;
int16_t x501 = -1;
volatile int32_t t94 = -30970864;
int32_t x520 = -1;
uint32_t t97 = 178300U;
volatile uint32_t x521 = UINT32_MAX;
volatile uint16_t x522 = 28U;
static volatile int16_t x524 = -1;
volatile uint32_t t98 = 0U;
int32_t x527 = INT32_MAX;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	uint64_t x2 = UINT64_MAX;
	static int64_t x3 = INT64_MIN;
	uint8_t x4 = UINT8_MAX;
	volatile uint64_t t0 = 1965LLU;

	t0 = (x1/((x2|x3)*x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 49U;
	uint16_t x6 = 2085U;
	static int64_t x7 = INT64_MIN;
	int16_t x8 = 1;
	int64_t t1 = 0LL;

	t1 = (x5/((x6|x7)*x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x11 = -2;
	int64_t x12 = -93948683261870LL;
	static int64_t t2 = -124910440340158212LL;

	t2 = (x9/((x10|x11)*x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = UINT64_MAX;
	volatile int64_t x14 = 1521680913050142LL;
	int8_t x15 = INT8_MIN;
	static int16_t x16 = INT16_MIN;
	volatile uint64_t t3 = 98996LLU;

	t3 = (x13/((x14|x15)*x16));

	if (t3 != 5744387279809LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	uint32_t t4 = 10471U;

	t4 = (x17/((x18|x19)*x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	uint64_t x22 = 1285900196538LLU;
	int8_t x23 = INT8_MIN;
	static volatile uint64_t t5 = 1197866LLU;

	t5 = (x21/((x22|x23)*x24));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -116544;
	volatile int32_t x30 = INT32_MAX;
	uint32_t x31 = 26397643U;
	uint64_t x32 = 8869056LLU;
	uint64_t t6 = 4LLU;

	t6 = (x29/((x30|x31)*x32));

	if (t6 != 968LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x33 = 9LLU;
	uint64_t x35 = 146189LLU;
	uint8_t x36 = UINT8_MAX;
	static uint64_t t7 = 182LLU;

	t7 = (x33/((x34|x35)*x36));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = INT16_MAX;
	int16_t x38 = -1;
	volatile uint8_t x39 = 11U;
	int8_t x40 = 13;
	static int32_t t8 = -77794;

	t8 = (x37/((x38|x39)*x40));

	if (t8 != -2520) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x41 = UINT16_MAX;
	int32_t x42 = INT32_MIN;
	int8_t x43 = INT8_MIN;
	uint16_t x44 = 83U;
	static int32_t t9 = -2057;

	t9 = (x41/((x42|x43)*x44));

	if (t9 != -6) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	int16_t x48 = -1;
	volatile int32_t t10 = 1779086;

	t10 = (x45/((x46|x47)*x48));

	if (t10 != 3276) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	uint32_t x51 = 39064U;
	uint64_t x52 = 12940653030994LLU;
	volatile uint64_t t11 = 359LLU;

	t11 = (x49/((x50|x51)*x52));

	if (t11 != 18LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = 13874;
	int32_t x54 = 275;
	int8_t x55 = -23;
	volatile int32_t t12 = 35548564;

	t12 = (x53/((x54|x55)*x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = 51;
	static int64_t x58 = -4137936177458815LL;
	uint32_t x59 = 118U;
	int16_t x60 = 937;
	static int64_t t13 = -9943270410259094LL;

	t13 = (x57/((x58|x59)*x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 1U;
	int64_t x63 = INT64_MIN;
	volatile uint32_t x64 = 3146U;
	volatile uint64_t t14 = 4179092057094308057LLU;

	t14 = (x61/((x62|x63)*x64));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x69 = 101034363LL;
	static int8_t x70 = -1;
	uint8_t x71 = UINT8_MAX;
	static int16_t x72 = -1;

	t15 = (x69/((x70|x71)*x72));

	if (t15 != 101034363LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x73 = 299290254578LLU;
	int8_t x74 = INT8_MIN;
	int16_t x75 = -15;
	uint32_t x76 = UINT32_MAX;
	static uint64_t t16 = 31207782584597LLU;

	t16 = (x73/((x74|x75)*x76));

	if (t16 != 19952683638LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MAX;
	volatile int64_t x78 = INT64_MAX;
	static int16_t x79 = INT16_MIN;
	uint32_t x80 = UINT32_MAX;

	t17 = (x77/((x78|x79)*x80));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x81 = 46333U;
	int64_t x82 = INT64_MIN;
	static volatile uint8_t x83 = 4U;
	static int16_t x84 = -1;
	volatile int64_t t18 = -125213989193LL;

	t18 = (x81/((x82|x83)*x84));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MIN;
	static int32_t x86 = -1007739207;
	uint64_t x87 = 18072623895LLU;
	uint32_t x88 = UINT32_MAX;
	volatile uint64_t t19 = 22278414449628980LLU;

	t19 = (x85/((x86|x87)*x88));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x90 = INT8_MIN;
	volatile int16_t x91 = INT16_MIN;
	static int8_t x92 = INT8_MIN;
	static int32_t t20 = -24;

	t20 = (x89/((x90|x91)*x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t t21 = 1U;

	t21 = (x93/((x94|x95)*x96));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MAX;
	volatile uint32_t x99 = 2U;
	int16_t x100 = INT16_MIN;
	volatile uint32_t t22 = 0U;

	t22 = (x97/((x98|x99)*x100));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x101 = 31U;
	static volatile int64_t x102 = INT64_MAX;
	int16_t x103 = INT16_MIN;
	uint8_t x104 = UINT8_MAX;

	t23 = (x101/((x102|x103)*x104));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x105 = 9U;
	uint64_t x106 = UINT64_MAX;
	int64_t x107 = INT64_MIN;
	uint8_t x108 = UINT8_MAX;
	volatile uint64_t t24 = 16020793189442LLU;

	t24 = (x105/((x106|x107)*x108));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x109 = INT32_MIN;
	int64_t x110 = -1LL;
	int32_t x111 = INT32_MIN;
	int64_t x112 = -1LL;
	volatile int64_t t25 = -1173393000LL;

	t25 = (x109/((x110|x111)*x112));

	if (t25 != -2147483648LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x114 = 26LL;
	volatile int32_t x116 = INT32_MAX;
	volatile int64_t t26 = -660LL;

	t26 = (x113/((x114|x115)*x116));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x118 = 14U;
	int64_t x119 = -1006565264LL;
	int8_t x120 = INT8_MIN;
	int64_t t27 = -2777305852939LL;

	t27 = (x117/((x118|x119)*x120));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x125 = UINT16_MAX;
	volatile uint16_t x128 = UINT16_MAX;
	int32_t t28 = 16979275;

	t28 = (x125/((x126|x127)*x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	uint32_t x130 = UINT32_MAX;
	volatile int8_t x131 = 0;
	volatile uint16_t x132 = UINT16_MAX;

	t29 = (x129/((x130|x131)*x132));

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = -1;
	int32_t x135 = INT32_MIN;
	volatile int32_t t30 = 147216389;

	t30 = (x133/((x134|x135)*x136));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x137 = INT8_MAX;
	static int32_t x138 = -1;
	int8_t x139 = -1;
	static int16_t x140 = INT16_MAX;
	int32_t t31 = -176947;

	t31 = (x137/((x138|x139)*x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x153 = 1U;
	int16_t x154 = INT16_MIN;
	volatile int32_t x155 = -1;

	t32 = (x153/((x154|x155)*x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x157 = UINT32_MAX;
	volatile int8_t x158 = INT8_MIN;
	uint32_t x159 = UINT32_MAX;
	int32_t x160 = 9312761;
	static uint32_t t33 = 416638U;

	t33 = (x157/((x158|x159)*x160));

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x161 = 838423298LLU;
	int8_t x163 = 2;

	t34 = (x161/((x162|x163)*x164));

	if (t34 != 100LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x165 = UINT32_MAX;
	volatile uint8_t x166 = 0U;
	int32_t x167 = -9;
	static uint16_t x168 = 17035U;
	volatile uint32_t t35 = 1408U;

	t35 = (x165/((x166|x167)*x168));

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x173 = UINT64_MAX;
	volatile int32_t x175 = -12;

	t36 = (x173/((x174|x175)*x176));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x179 = INT8_MIN;
	uint32_t x180 = UINT32_MAX;
	uint32_t t37 = 3U;

	t37 = (x177/((x178|x179)*x180));

	if (t37 != 78090314U) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x182 = INT64_MAX;
	uint64_t x183 = 8570620126034769271LLU;
	int32_t x184 = INT32_MIN;
	volatile uint64_t t38 = 540591823LLU;

	t38 = (x181/((x182|x183)*x184));

	if (t38 != 4294967296LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x189 = 400;
	int64_t x190 = INT64_MIN;
	int16_t x191 = -96;
	int16_t x192 = -1;
	static int64_t t39 = 869437738437515034LL;

	t39 = (x189/((x190|x191)*x192));

	if (t39 != 4LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x193 = 32706668U;
	static uint8_t x194 = 61U;
	static int64_t x195 = -1LL;
	uint64_t t40 = 85LLU;

	t40 = (x193/((x194|x195)*x196));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x205 = INT64_MIN;
	int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MIN;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t41 = 37879299310997LLU;

	t41 = (x205/((x206|x207)*x208));

	if (t41 != 281474976710656LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x209 = 7496;
	int8_t x210 = -1;
	int64_t x211 = 394734258459405332LL;
	int64_t t42 = -2864730535960431LL;

	t42 = (x209/((x210|x211)*x212));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x213 = 5LLU;
	uint16_t x215 = 20U;
	uint8_t x216 = 44U;

	t43 = (x213/((x214|x215)*x216));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MAX;
	static int8_t x219 = INT8_MAX;
	static int16_t x220 = INT16_MIN;
	int32_t t44 = 15167;

	t44 = (x217/((x218|x219)*x220));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x225 = INT8_MAX;
	volatile int64_t t45 = 5172LL;

	t45 = (x225/((x226|x227)*x228));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x233 = INT32_MIN;
	volatile int16_t x234 = -1;
	int16_t x235 = INT16_MAX;
	int16_t x236 = -2157;
	int32_t t46 = -6288;

	t46 = (x233/((x234|x235)*x236));

	if (t46 != -995588) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x237 = -37;
	volatile uint16_t x238 = 6848U;
	uint16_t x239 = 2323U;
	volatile int32_t t47 = 1;

	t47 = (x237/((x238|x239)*x240));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x241 = 1400;
	uint64_t x242 = 484980LLU;
	int32_t x243 = INT32_MIN;
	static volatile int32_t x244 = 1;
	uint64_t t48 = 35165404803428LLU;

	t48 = (x241/((x242|x243)*x244));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x253 = 0;
	int32_t x255 = -122743;
	volatile int64_t x256 = 184084370LL;
	int64_t t49 = 28342147616669LL;

	t49 = (x253/((x254|x255)*x256));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x257 = INT8_MIN;
	volatile int16_t x259 = INT16_MIN;
	uint16_t x260 = UINT16_MAX;
	int32_t t50 = -942;

	t50 = (x257/((x258|x259)*x260));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x266 = INT16_MIN;
	volatile int16_t x267 = INT16_MAX;
	volatile int8_t x268 = INT8_MIN;
	int64_t t51 = 18LL;

	t51 = (x265/((x266|x267)*x268));

	if (t51 != -72057594037927936LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x269 = 23510LLU;
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	uint8_t x272 = 1U;
	volatile uint64_t t52 = 50728787543017701LLU;

	t52 = (x269/((x270|x271)*x272));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x273 = 7928U;
	int64_t x274 = -1LL;
	static int32_t x275 = -889741562;
	volatile int64_t x276 = -2091634LL;
	int64_t t53 = 135461224LL;

	t53 = (x273/((x274|x275)*x276));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x278 = 19213305871LLU;
	static int16_t x279 = INT16_MIN;
	uint64_t x280 = UINT64_MAX;
	volatile uint64_t t54 = 7266055503851952062LLU;

	t54 = (x277/((x278|x279)*x280));

	if (t54 != 644045250810332LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x281 = -1;
	int64_t x283 = 4608789LL;
	uint32_t x284 = 908896U;
	static int64_t t55 = -11158LL;

	t55 = (x281/((x282|x283)*x284));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x285 = 1U;
	int8_t x286 = -1;
	volatile int32_t x287 = INT32_MAX;
	uint32_t t56 = 27904U;

	t56 = (x285/((x286|x287)*x288));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x289 = INT8_MIN;
	int16_t x290 = INT16_MIN;
	int16_t x291 = INT16_MIN;
	int16_t x292 = INT16_MIN;
	volatile int32_t t57 = -121;

	t57 = (x289/((x290|x291)*x292));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x297 = INT16_MAX;
	volatile uint8_t x298 = 2U;
	uint64_t x299 = 458298344094962LLU;
	volatile uint64_t t58 = 206358592918LLU;

	t58 = (x297/((x298|x299)*x300));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x301 = INT16_MAX;
	int8_t x303 = -8;
	volatile int16_t x304 = -106;
	volatile int32_t t59 = -3769;

	t59 = (x301/((x302|x303)*x304));

	if (t59 != 38) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x313 = INT64_MIN;
	int32_t x314 = -2479;
	uint64_t x316 = 17LLU;
	static uint64_t t60 = 1483441850LLU;

	t60 = (x313/((x314|x315)*x316));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x322 = UINT64_MAX;
	static int8_t x323 = 1;
	int8_t x324 = INT8_MIN;
	uint64_t t61 = 416599451880411LLU;

	t61 = (x321/((x322|x323)*x324));

	if (t61 != 178209218205LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x338 = 37753374097LLU;
	static int8_t x339 = INT8_MIN;
	int8_t x340 = -1;
	uint64_t t62 = 5194303LLU;

	t62 = (x337/((x338|x339)*x340));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x343 = 28237U;
	uint64_t t63 = 5113717202845305LLU;

	t63 = (x341/((x342|x343)*x344));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x349 = INT64_MIN;
	static int8_t x350 = INT8_MIN;
	int8_t x351 = -1;
	int32_t x352 = INT32_MAX;
	int64_t t64 = -758543962054550LL;

	t64 = (x349/((x350|x351)*x352));

	if (t64 != 4294967298LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x353 = -1;
	int8_t x354 = -1;
	static int8_t x355 = INT8_MAX;
	int64_t t65 = -12LL;

	t65 = (x353/((x354|x355)*x356));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x357 = -1;
	int64_t x358 = INT64_MIN;
	volatile int32_t x359 = INT32_MIN;

	t66 = (x357/((x358|x359)*x360));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x361 = -1;
	int16_t x362 = -1;
	int8_t x363 = INT8_MIN;
	int8_t x364 = 6;
	int32_t t67 = -7414369;

	t67 = (x361/((x362|x363)*x364));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x365 = -1;
	volatile uint32_t x366 = 247U;
	int16_t x367 = -2;
	volatile uint32_t t68 = UINT32_MAX;

	t68 = (x365/((x366|x367)*x368));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x372 = INT32_MIN;
	int64_t t69 = -81LL;

	t69 = (x369/((x370|x371)*x372));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x373 = INT64_MIN;
	static uint64_t x376 = UINT64_MAX;
	volatile uint64_t t70 = 29220482179LLU;

	t70 = (x373/((x374|x375)*x376));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x385 = INT8_MIN;
	int64_t x386 = -1540LL;
	int16_t x388 = INT16_MIN;
	volatile int64_t t71 = -97084568149126699LL;

	t71 = (x385/((x386|x387)*x388));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x389 = INT16_MIN;
	int16_t x391 = 1;
	int16_t x392 = INT16_MIN;

	t72 = (x389/((x390|x391)*x392));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x394 = 1;
	uint8_t x395 = 15U;
	volatile uint32_t x396 = UINT32_MAX;
	volatile uint32_t t73 = 1U;

	t73 = (x393/((x394|x395)*x396));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x398 = 1966;
	int32_t x399 = -1;
	static int16_t x400 = INT16_MAX;

	t74 = (x397/((x398|x399)*x400));

	if (t74 != 65538) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x407 = UINT64_MAX;
	int16_t x408 = INT16_MAX;
	volatile uint64_t t75 = 534342397612LLU;

	t75 = (x405/((x406|x407)*x408));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x409 = 0U;
	static volatile int16_t x410 = 416;
	static int32_t x411 = -1;
	int64_t x412 = -179143341980060339LL;
	static int64_t t76 = -1993661261948263319LL;

	t76 = (x409/((x410|x411)*x412));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x413 = 1371627LL;
	volatile uint32_t x414 = 32926U;
	static volatile int32_t x415 = -1;
	volatile int16_t x416 = -1737;

	t77 = (x413/((x414|x415)*x416));

	if (t77 != 789LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x418 = INT64_MIN;
	volatile int16_t x419 = INT16_MIN;
	int32_t x420 = INT32_MIN;
	int64_t t78 = 18474937056767397LL;

	t78 = (x417/((x418|x419)*x420));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x422 = -1LL;
	volatile uint16_t x423 = 1924U;
	uint32_t x424 = 98982U;
	static int64_t t79 = -1LL;

	t79 = (x421/((x422|x423)*x424));

	if (t79 != 93182316348980LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x429 = 255740139U;
	volatile uint32_t x430 = 19057U;
	int32_t x431 = INT32_MIN;
	volatile uint32_t t80 = 9822U;

	t80 = (x429/((x430|x431)*x432));

	if (t80 != 6709U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x433 = 3;
	int32_t x434 = INT32_MIN;
	static volatile int64_t t81 = -107LL;

	t81 = (x433/((x434|x435)*x436));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x438 = UINT64_MAX;
	int32_t x439 = 938634;
	int16_t x440 = 21;
	uint64_t t82 = 211346708573LLU;

	t82 = (x437/((x438|x439)*x440));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x441 = 0U;
	int32_t x442 = INT32_MAX;
	uint16_t x443 = 4U;
	int64_t x444 = -1465915LL;
	volatile int64_t t83 = 50580825242LL;

	t83 = (x441/((x442|x443)*x444));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x449 = 52U;
	int32_t x450 = 3;
	static int8_t x451 = 18;
	uint64_t x452 = 28029507910534915LLU;
	volatile uint64_t t84 = 4LLU;

	t84 = (x449/((x450|x451)*x452));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x457 = 66U;
	int8_t x458 = -1;
	volatile int64_t x459 = INT64_MIN;
	int16_t x460 = -9;

	t85 = (x457/((x458|x459)*x460));

	if (t85 != 7LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x461 = INT16_MAX;
	int16_t x462 = -1;
	static int64_t x463 = -185LL;
	uint64_t x464 = 2LLU;
	static volatile uint64_t t86 = 2259072743648LLU;

	t86 = (x461/((x462|x463)*x464));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x465 = 10127U;
	volatile int16_t x466 = INT16_MIN;
	int8_t x467 = INT8_MAX;
	uint8_t x468 = 1U;

	t87 = (x465/((x466|x467)*x468));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x470 = -1;
	static int64_t x471 = -1024487LL;
	int64_t t88 = -21701592296662LL;

	t88 = (x469/((x470|x471)*x472));

	if (t88 != -22LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x473 = UINT16_MAX;
	uint64_t x474 = 46664043LLU;
	int32_t x475 = INT32_MIN;
	volatile int64_t x476 = INT64_MIN;
	uint64_t t89 = 1985472584119LLU;

	t89 = (x473/((x474|x475)*x476));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x478 = 1652;
	uint16_t x479 = 110U;
	static int8_t x480 = 1;
	int64_t t90 = 688509674623LL;

	t90 = (x477/((x478|x479)*x480));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x481 = INT32_MIN;
	volatile uint32_t x482 = 2025U;
	uint64_t x483 = UINT64_MAX;
	int64_t x484 = INT64_MAX;
	static volatile uint64_t t91 = 6861035LLU;

	t91 = (x481/((x482|x483)*x484));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x485 = UINT16_MAX;
	static uint32_t x487 = UINT32_MAX;
	uint32_t t92 = 2482U;

	t92 = (x485/((x486|x487)*x488));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x502 = -48;
	uint64_t x503 = 96834445961608LLU;
	static int8_t x504 = INT8_MAX;
	volatile uint64_t t93 = 11969549047LLU;

	t93 = (x501/((x502|x503)*x504));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x505 = 23U;
	volatile int32_t x506 = INT32_MIN;
	int32_t x507 = INT32_MAX;
	volatile int8_t x508 = INT8_MIN;

	t94 = (x505/((x506|x507)*x508));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x509 = 0U;
	int64_t x510 = -13628856LL;
	uint8_t x511 = 1U;
	static uint64_t x512 = 15539LLU;
	volatile uint64_t t95 = 154085LLU;

	t95 = (x509/((x510|x511)*x512));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x513 = INT32_MAX;
	static volatile int16_t x514 = INT16_MIN;
	int64_t x515 = INT64_MIN;
	uint32_t x516 = 61283954U;
	volatile int64_t t96 = 1LL;

	t96 = (x513/((x514|x515)*x516));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x517 = UINT32_MAX;
	static volatile uint8_t x518 = 6U;
	uint16_t x519 = 0U;

	t97 = (x517/((x518|x519)*x520));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x523 = 4633U;

	t98 = (x521/((x522|x523)*x524));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x525 = UINT8_MAX;
	static int32_t x526 = INT32_MIN;
	int8_t x528 = -1;
	int32_t t99 = -92;

	t99 = (x525/((x526|x527)*x528));

	if (t99 != 255) { NG(); } else { ; }
	
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

