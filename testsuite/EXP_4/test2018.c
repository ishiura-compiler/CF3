#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -212226914;
int64_t x8 = INT64_MIN;
int16_t x17 = -1;
static volatile int8_t x20 = INT8_MIN;
int8_t x22 = 5;
volatile int32_t x24 = 952851;
static int64_t x31 = INT64_MIN;
int8_t x33 = 0;
uint32_t t8 = 162U;
int8_t x53 = INT8_MIN;
static volatile int16_t x74 = -4044;
uint16_t x78 = 28U;
uint8_t x87 = UINT8_MAX;
volatile int32_t t16 = -958808132;
static uint32_t x92 = 14545910U;
volatile uint64_t x93 = UINT64_MAX;
volatile int32_t x97 = -1;
volatile int8_t x101 = INT8_MIN;
int64_t x103 = -394512418LL;
static uint8_t x113 = UINT8_MAX;
volatile int16_t x114 = INT16_MIN;
int16_t x123 = -1;
uint64_t t23 = 338953720070499LLU;
static int32_t x146 = -2846;
uint16_t x150 = UINT16_MAX;
static volatile int8_t x166 = INT8_MAX;
int16_t x175 = INT16_MAX;
int8_t x176 = INT8_MIN;
static volatile int16_t x177 = INT16_MAX;
uint64_t x178 = UINT64_MAX;
static int16_t x190 = -41;
uint64_t x193 = 10105341LLU;
static volatile int32_t x197 = -1;
int16_t x210 = INT16_MAX;
uint64_t x213 = UINT64_MAX;
static uint16_t x215 = 109U;
static int64_t x220 = INT64_MIN;
static uint64_t x233 = UINT64_MAX;
uint8_t x235 = 3U;
uint64_t t45 = 2400302LLU;
uint32_t x246 = 84533U;
uint32_t t47 = 7U;
int64_t x266 = -17142716464LL;
static volatile uint64_t t49 = 39666029LLU;
volatile int64_t t51 = -421779412932493LL;
uint32_t x282 = UINT32_MAX;
int8_t x285 = INT8_MIN;
int8_t x286 = 1;
static int32_t x306 = INT32_MAX;
uint32_t x308 = 0U;
volatile uint32_t t57 = 2086156160U;
uint32_t t58 = 110760834U;
volatile int64_t t59 = -468LL;
int64_t x320 = 30120141880LL;
int64_t x324 = INT64_MIN;
uint8_t x327 = 0U;
int8_t x328 = -7;
int64_t t62 = -4566047597606197LL;
uint16_t x330 = UINT16_MAX;
uint8_t x337 = 7U;
static volatile uint64_t x341 = 100172312LLU;
int64_t x342 = INT64_MAX;
uint8_t x346 = UINT8_MAX;
uint64_t x355 = 3314994449449LLU;
int16_t x357 = -1;
int8_t x360 = -1;
volatile uint8_t x364 = 6U;
static int8_t x371 = 21;
int8_t x383 = INT8_MIN;
int16_t x397 = INT16_MIN;
volatile int16_t x401 = -1;
uint64_t x415 = 14723LLU;
volatile int8_t x419 = INT8_MIN;
static volatile int64_t t82 = -217465420123586LL;
static uint32_t x424 = UINT32_MAX;
static int64_t x433 = -1LL;
int8_t x437 = INT8_MAX;
int8_t x438 = -2;
volatile uint16_t x439 = UINT16_MAX;
int32_t x441 = -1;
int64_t x446 = -269872166883LL;
static int16_t x452 = -1;
int8_t x454 = 1;
int8_t x456 = -1;
static int64_t x460 = -1LL;
volatile int64_t t92 = 7855LL;
volatile int32_t t93 = -9;
int16_t x490 = INT16_MAX;
int8_t x494 = INT8_MIN;
static volatile uint8_t x495 = 3U;
int32_t t98 = 49;


void f0(void) {
	int16_t x1 = -1;
	int16_t x2 = -1;
	volatile int8_t x3 = 1;
	int8_t x4 = -2;

	t0 = (x1*(x2^(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 63U;
	int16_t x6 = -1;
	volatile int64_t x7 = -3LL;
	static int64_t t1 = -5142716438095135LL;

	t1 = (x5*(x6^(x7|x8)));

	if (t1 != 126LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint16_t x10 = UINT16_MAX;
	int8_t x11 = -1;
	uint64_t x12 = 69738466132LLU;
	volatile uint64_t t2 = 899LLU;

	t2 = (x9*(x10^(x11|x12)));

	if (t2 != 8388608LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int8_t x14 = -1;
	static volatile int32_t x15 = INT32_MIN;
	uint32_t x16 = 31061940U;
	volatile uint32_t t3 = 10U;

	t3 = (x13*(x14^(x15|x16)));

	if (t3 != 2816623285U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MAX;
	uint8_t x19 = 27U;
	volatile int32_t t4 = 0;

	t4 = (x17*(x18^(x19|x20)));

	if (t4 != 2147483548) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = UINT32_MAX;
	volatile int8_t x23 = 0;
	volatile uint32_t t5 = 3227387U;

	t5 = (x21*(x22^(x23|x24)));

	if (t5 != 4294014442U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	volatile int8_t x30 = 9;
	int16_t x32 = -1;
	static volatile int64_t t6 = -6LL;

	t6 = (x29*(x30^(x31|x32)));

	if (t6 != 10LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x34 = UINT32_MAX;
	int64_t x35 = 7679409381555216LL;
	uint32_t x36 = UINT32_MAX;
	volatile int64_t t7 = -1487948LL;

	t7 = (x33*(x34^(x35|x36)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = INT32_MIN;
	volatile int32_t x46 = INT32_MAX;
	static volatile uint32_t x47 = UINT32_MAX;
	int32_t x48 = -1;

	t8 = (x45*(x46^(x47|x48)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x49 = 12U;
	volatile int32_t x50 = -1;
	static int16_t x51 = INT16_MIN;
	int8_t x52 = INT8_MAX;
	int32_t t9 = 34;

	t9 = (x49*(x50^(x51|x52)));

	if (t9 != 391680) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x54 = -1;
	uint32_t x55 = 303851737U;
	int16_t x56 = INT16_MIN;
	volatile uint32_t t10 = 121127U;

	t10 = (x53*(x54^(x55|x56)));

	if (t10 != 4294208768U) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x61 = -1;
	static volatile int32_t x62 = INT32_MIN;
	uint8_t x63 = 13U;
	int16_t x64 = 1033;
	volatile int32_t t11 = 3561;

	t11 = (x61*(x62^(x63|x64)));

	if (t11 != 2147482611) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x69 = -7421;
	volatile int32_t x70 = INT32_MIN;
	uint16_t x71 = UINT16_MAX;
	static volatile int64_t x72 = -1LL;
	static volatile int64_t t12 = 60LL;

	t12 = (x69*(x70^(x71|x72)));

	if (t12 != -15936476144387LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x73 = 0;
	static int8_t x75 = INT8_MIN;
	volatile uint16_t x76 = 1U;
	int32_t t13 = -63209;

	t13 = (x73*(x74^(x75|x76)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = INT32_MIN;
	static uint32_t x79 = UINT32_MAX;
	int32_t x80 = -1;
	uint32_t t14 = 1034447455U;

	t14 = (x77*(x78^(x79|x80)));

	if (t14 != 2147483648U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x81 = 23U;
	int32_t x82 = 47568055;
	uint8_t x83 = 7U;
	static int8_t x84 = INT8_MIN;
	static volatile int32_t t15 = 7;

	t15 = (x81*(x82^(x83|x84)));

	if (t15 != -1094065840) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = 11641;
	volatile int8_t x86 = INT8_MIN;
	volatile int16_t x88 = INT16_MIN;

	t16 = (x85*(x86^(x87|x88)));

	if (t16 != 379950599) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = 19;
	volatile int32_t x90 = -1;
	static int16_t x91 = 1611;
	uint32_t t17 = 367044U;

	t17 = (x89*(x90^(x91|x92)));

	if (t17 != 4018575360U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x94 = INT8_MIN;
	int64_t x95 = -1LL;
	int16_t x96 = -1;
	static volatile uint64_t t18 = 46909397LLU;

	t18 = (x93*(x94^(x95|x96)));

	if (t18 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x98 = -10170;
	int64_t x99 = 0LL;
	uint32_t x100 = 4778U;
	int64_t t19 = -1274195907997LL;

	t19 = (x97*(x98^(x99|x100)));

	if (t19 != 13588LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x102 = -1;
	int16_t x104 = -1;
	int64_t t20 = 5LL;

	t20 = (x101*(x102^(x103|x104)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x109 = 6218LLU;
	int16_t x110 = 4;
	int64_t x111 = INT64_MAX;
	int8_t x112 = -1;
	volatile uint64_t t21 = 7304879920832LLU;

	t21 = (x109*(x110^(x111|x112)));

	if (t21 != 18446744073709520526LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x115 = 29971U;
	int8_t x116 = 29;
	int32_t t22 = -241;

	t22 = (x113*(x114^(x115|x116)));

	if (t22 != -710175) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x121 = UINT64_MAX;
	int64_t x122 = INT64_MAX;
	int32_t x124 = -1;

	t23 = (x121*(x122^(x123|x124)));

	if (t23 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x129 = 186527515U;
	static int32_t x130 = -1;
	static uint32_t x131 = UINT32_MAX;
	static int8_t x132 = INT8_MIN;
	uint32_t t24 = 6413728U;

	t24 = (x129*(x130^(x131|x132)));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x133 = INT8_MAX;
	uint64_t x134 = 847890717558241970LLU;
	volatile int64_t x135 = 87623480LL;
	volatile int8_t x136 = INT8_MIN;
	uint64_t t25 = 1058090414001191LLU;

	t25 = (x133*(x134^(x135|x136)));

	if (t25 != 2998343312360570870LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x145 = UINT8_MAX;
	int64_t x147 = -35086569394370LL;
	int64_t x148 = 3676105084397338LL;
	int64_t t26 = 624968239LL;

	t26 = (x145*(x146^(x147|x148)));

	if (t26 != 4635033933103140LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x149 = 308U;
	static int8_t x151 = -1;
	static int16_t x152 = -12;
	volatile uint32_t t27 = 29350U;

	t27 = (x149*(x150^(x151|x152)));

	if (t27 != 4274782208U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x153 = 631LLU;
	int64_t x154 = -11779537990694620LL;
	static int32_t x155 = INT32_MAX;
	int64_t x156 = INT64_MAX;
	volatile uint64_t t28 = 998LLU;

	t28 = (x153*(x154^(x155|x156)));

	if (t28 != 16656260508983080397LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x161 = INT32_MAX;
	uint16_t x162 = 1222U;
	volatile uint64_t x163 = 237569517LLU;
	static int32_t x164 = -1;
	uint64_t t29 = 10LLU;

	t29 = (x161*(x162^(x163|x164)));

	if (t29 != 18446741447337051335LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x165 = INT32_MIN;
	uint64_t x167 = UINT64_MAX;
	int8_t x168 = 45;
	uint64_t t30 = 6081LLU;

	t30 = (x165*(x166^(x167|x168)));

	if (t30 != 274877906944LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x169 = INT32_MAX;
	int8_t x170 = INT8_MIN;
	int8_t x171 = 2;
	uint32_t x172 = UINT32_MAX;
	uint32_t t31 = 1355599U;

	t31 = (x169*(x170^(x171|x172)));

	if (t31 != 2147483521U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x173 = 45;
	static uint32_t x174 = 1351U;
	volatile uint32_t t32 = 670836354U;

	t32 = (x173*(x174^(x175|x176)));

	if (t32 != 4294906456U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x179 = INT8_MIN;
	int16_t x180 = INT16_MIN;
	uint64_t t33 = 426695401398242LLU;

	t33 = (x177*(x178^(x179|x180)));

	if (t33 != 4161409LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x181 = -182LL;
	static volatile int64_t x182 = -1LL;
	static volatile uint32_t x183 = 136912527U;
	int32_t x184 = INT32_MAX;
	int64_t t34 = -6751644LL;

	t34 = (x181*(x182^(x183|x184)));

	if (t34 != 390842023936LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x185 = -100568;
	uint32_t x186 = 369U;
	int64_t x187 = INT64_MAX;
	int32_t x188 = INT32_MIN;
	int64_t t35 = 98655815647LL;

	t35 = (x185*(x186^(x187|x188)));

	if (t35 != 37210160LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x189 = -1;
	uint16_t x191 = 19U;
	static int64_t x192 = -12701617346LL;
	volatile int64_t t36 = 47128029LL;

	t36 = (x189*(x190^(x191|x192)));

	if (t36 != -12701617384LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x194 = 20;
	uint64_t x195 = UINT64_MAX;
	volatile int16_t x196 = -3;
	uint64_t t37 = 1326240761611287001LLU;

	t37 = (x193*(x194^(x195|x196)));

	if (t37 != 18446744073497339455LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x198 = INT64_MIN;
	volatile int8_t x199 = 17;
	static uint16_t x200 = 16128U;
	static int64_t t38 = 1304LL;

	t38 = (x197*(x198^(x199|x200)));

	if (t38 != 9223372036854759663LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x201 = INT32_MIN;
	int16_t x202 = INT16_MIN;
	static uint32_t x203 = UINT32_MAX;
	uint16_t x204 = 23U;
	volatile uint32_t t39 = 28U;

	t39 = (x201*(x202^(x203|x204)));

	if (t39 != 2147483648U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x205 = INT64_MIN;
	int32_t x206 = 4448626;
	static uint32_t x207 = 0U;
	uint64_t x208 = 12LLU;
	volatile uint64_t t40 = 18657623961761LLU;

	t40 = (x205*(x206^(x207|x208)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x209 = UINT32_MAX;
	volatile int64_t x211 = -1281358694LL;
	volatile int8_t x212 = INT8_MIN;
	volatile int64_t t41 = -468465471934983LL;

	t41 = (x209*(x210^(x211|x212)));

	if (t41 != -140303696625765LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x214 = 0U;
	int32_t x216 = INT32_MIN;
	uint64_t t42 = 12110584LLU;

	t42 = (x213*(x214^(x215|x216)));

	if (t42 != 2147483539LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x217 = -1;
	int8_t x218 = -1;
	int8_t x219 = INT8_MIN;
	volatile int64_t t43 = 597589724316LL;

	t43 = (x217*(x218^(x219|x220)));

	if (t43 != -127LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x225 = INT64_MAX;
	int16_t x226 = -1;
	int32_t x227 = 1;
	int16_t x228 = -1;
	int64_t t44 = 992555072128LL;

	t44 = (x225*(x226^(x227|x228)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x234 = 114U;
	int64_t x236 = -252754740519937701LL;

	t45 = (x233*(x234^(x235|x236)));

	if (t45 != 252754740519937751LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x237 = -232;
	int32_t x238 = INT32_MIN;
	uint64_t x239 = 34460637269052180LLU;
	int16_t x240 = INT16_MAX;
	uint64_t t46 = 2704109LLU;

	t46 = (x237*(x238^(x239|x240)));

	if (t46 != 7994867635021938920LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x245 = INT8_MAX;
	static int8_t x247 = INT8_MIN;
	int16_t x248 = INT16_MIN;

	t47 = (x245*(x246^(x247|x248)));

	if (t47 != 4284228811U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x265 = INT16_MIN;
	int64_t x267 = -1LL;
	uint16_t x268 = 240U;
	volatile int64_t t48 = -1520LL;

	t48 = (x265*(x266^(x267|x268)));

	if (t48 != -561732533059584LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x269 = -1;
	uint64_t x270 = UINT64_MAX;
	volatile uint64_t x271 = UINT64_MAX;
	volatile int64_t x272 = -1LL;

	t49 = (x269*(x270^(x271|x272)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x273 = INT16_MAX;
	volatile int8_t x274 = INT8_MIN;
	int64_t x275 = INT64_MIN;
	static int64_t x276 = INT64_MAX;
	volatile int64_t t50 = -3086670486LL;

	t50 = (x273*(x274^(x275|x276)));

	if (t50 != 4161409LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x277 = 0U;
	static volatile uint8_t x278 = UINT8_MAX;
	int8_t x279 = INT8_MIN;
	volatile int64_t x280 = -1LL;

	t51 = (x277*(x278^(x279|x280)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x281 = 331222904642745770LLU;
	int32_t x283 = -193218;
	int16_t x284 = 0;
	uint64_t t52 = 15271LLU;

	t52 = (x281*(x282^(x283|x284)));

	if (t52 != 6140774658974886186LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x287 = -1;
	static volatile int16_t x288 = INT16_MIN;
	int32_t t53 = -384524996;

	t53 = (x285*(x286^(x287|x288)));

	if (t53 != 256) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x289 = INT16_MIN;
	volatile int8_t x290 = INT8_MIN;
	uint64_t x291 = 496553007423780495LLU;
	int32_t x292 = 94070393;
	static volatile uint64_t t54 = 624116689295LLU;

	t54 = (x289*(x290^(x291|x292)));

	if (t54 != 1020676505472106496LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x297 = 1U;
	uint32_t x298 = UINT32_MAX;
	int64_t x299 = -1LL;
	volatile uint64_t x300 = 104522798230773872LLU;
	volatile uint64_t t55 = 16117LLU;

	t55 = (x297*(x298^(x299|x300)));

	if (t55 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x301 = 3U;
	volatile int32_t x302 = -703349755;
	static int16_t x303 = -1;
	static uint8_t x304 = 22U;
	int32_t t56 = 1;

	t56 = (x301*(x302^(x303|x304)));

	if (t56 != 2110049262) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x305 = -1;
	int8_t x307 = 10;

	t57 = (x305*(x306^(x307|x308)));

	if (t57 != 2147483659U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x309 = 16;
	static uint32_t x310 = 1243927U;
	uint8_t x311 = UINT8_MAX;
	int16_t x312 = INT16_MAX;

	t58 = (x309*(x310^(x311|x312)));

	if (t58 != 19418752U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x313 = 49U;
	int64_t x314 = -15559500679851LL;
	uint8_t x315 = 2U;
	int64_t x316 = -1LL;

	t59 = (x313*(x314^(x315|x316)));

	if (t59 != 762415533312650LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x317 = 31157LLU;
	int64_t x318 = -29520869468582655LL;
	int8_t x319 = 0;
	volatile uint64_t t60 = 904LLU;

	t60 = (x317*(x318^(x319|x320)));

	if (t60 != 2555340202830239309LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x321 = INT32_MAX;
	static int8_t x322 = INT8_MIN;
	int8_t x323 = -1;
	static volatile int64_t t61 = 11922353740806LL;

	t61 = (x321*(x322^(x323|x324)));

	if (t61 != 272730423169LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x325 = 5U;
	int64_t x326 = 99347525362679LL;

	t62 = (x325*(x326^(x327|x328)));

	if (t62 != -496737626813370LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x329 = UINT8_MAX;
	uint64_t x331 = UINT64_MAX;
	uint64_t x332 = 46801707076LLU;
	volatile uint64_t t63 = 3680672803273597LLU;

	t63 = (x329*(x330^(x331|x332)));

	if (t63 != 18446744073692839936LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x333 = UINT32_MAX;
	static int8_t x334 = INT8_MIN;
	uint16_t x335 = UINT16_MAX;
	volatile uint16_t x336 = UINT16_MAX;
	static volatile uint32_t t64 = 146334U;

	t64 = (x333*(x334^(x335|x336)));

	if (t64 != 65409U) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x338 = -164;
	static uint16_t x339 = UINT16_MAX;
	int64_t x340 = 34530619186582LL;
	volatile int64_t t65 = -136808LL;

	t65 = (x337*(x338^(x339|x340)));

	if (t65 != -241714334595979LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x343 = -1;
	int64_t x344 = -1LL;
	static volatile uint64_t t66 = 20914768LLU;

	t66 = (x341*(x342^(x343|x344)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x345 = -1;
	int16_t x347 = 1;
	static volatile uint32_t x348 = UINT32_MAX;
	volatile uint32_t t67 = 103990388U;

	t67 = (x345*(x346^(x347|x348)));

	if (t67 != 256U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x349 = 6U;
	int8_t x350 = INT8_MAX;
	static int16_t x351 = -1;
	volatile int16_t x352 = 1474;
	static volatile int32_t t68 = 3701;

	t68 = (x349*(x350^(x351|x352)));

	if (t68 != -768) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x353 = INT32_MAX;
	int32_t x354 = INT32_MIN;
	static uint16_t x356 = 384U;
	static volatile uint64_t t69 = 125132LLU;

	t69 = (x353*(x354^(x355|x356)));

	if (t69 != 3064851107951866455LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x358 = INT16_MIN;
	int64_t x359 = 778517717LL;
	volatile int64_t t70 = -56014LL;

	t70 = (x357*(x358^(x359|x360)));

	if (t70 != -32767LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x361 = 78988874LLU;
	volatile int8_t x362 = INT8_MIN;
	int16_t x363 = -1;
	volatile uint64_t t71 = 511942LLU;

	t71 = (x361*(x362^(x363|x364)));

	if (t71 != 10031586998LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x365 = UINT8_MAX;
	int8_t x366 = -1;
	uint32_t x367 = 138148U;
	int16_t x368 = 1330;
	static volatile uint32_t t72 = 2U;

	t72 = (x365*(x366^(x367|x368)));

	if (t72 != 4259473591U) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x369 = -1LL;
	static int8_t x370 = INT8_MIN;
	int8_t x372 = INT8_MIN;
	int64_t t73 = 720764153LL;

	t73 = (x369*(x370^(x371|x372)));

	if (t73 != -21LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x377 = 258834LLU;
	volatile int8_t x378 = -11;
	static volatile int16_t x379 = 0;
	static int32_t x380 = -1;
	static volatile uint64_t t74 = 5768666678406LLU;

	t74 = (x377*(x378^(x379|x380)));

	if (t74 != 2588340LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x381 = 1300610988850LLU;
	volatile int32_t x382 = INT32_MIN;
	int64_t x384 = INT64_MIN;
	uint64_t t75 = 192LLU;

	t75 = (x381*(x382^(x383|x384)));

	if (t75 != 7582309356136457984LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x385 = -1;
	volatile int16_t x386 = INT16_MIN;
	volatile int8_t x387 = INT8_MIN;
	int32_t x388 = -29522;
	volatile int32_t t76 = -3472827;

	t76 = (x385*(x386^(x387|x388)));

	if (t76 != -32686) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x398 = -1;
	int32_t x399 = INT32_MIN;
	static uint64_t x400 = UINT64_MAX;
	static uint64_t t77 = 414173890700LLU;

	t77 = (x397*(x398^(x399|x400)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x402 = 2394506002793667805LL;
	volatile uint64_t x403 = 536476472880LLU;
	int64_t x404 = INT64_MIN;
	static uint64_t t78 = 60699717LLU;

	t78 = (x401*(x402^(x403|x404)));

	if (t78 != 6828865538656843027LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x405 = 782644U;
	int32_t x406 = 1;
	static uint32_t x407 = 23976851U;
	int32_t x408 = -97675;
	static uint32_t t79 = 6U;

	t79 = (x405*(x406^(x407|x408)));

	if (t79 != 1369261048U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x409 = INT16_MAX;
	int32_t x410 = INT32_MAX;
	int16_t x411 = INT16_MIN;
	static int64_t x412 = INT64_MIN;
	volatile int64_t t80 = 1456962474985590LL;

	t80 = (x409*(x410^(x411|x412)));

	if (t80 != -70365523017727LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x413 = INT32_MAX;
	static volatile uint8_t x414 = 41U;
	static volatile int8_t x416 = INT8_MIN;
	volatile uint64_t t81 = 742763175221LLU;

	t81 = (x413*(x414^(x415|x416)));

	if (t81 != 18446743889025957974LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x417 = -1LL;
	int64_t x418 = INT64_MAX;
	int16_t x420 = 0;

	t82 = (x417*(x418^(x419|x420)));

	if (t82 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x421 = 0;
	static int64_t x422 = 9780828LL;
	int32_t x423 = 2602534;
	int64_t t83 = 3460307LL;

	t83 = (x421*(x422^(x423|x424)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x425 = -1;
	int32_t x426 = INT32_MIN;
	int8_t x427 = INT8_MAX;
	int16_t x428 = INT16_MIN;
	int32_t t84 = -50700437;

	t84 = (x425*(x426^(x427|x428)));

	if (t84 != -2147451007) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x429 = -1;
	static volatile int32_t x430 = -1;
	int64_t x431 = 322765015LL;
	int8_t x432 = INT8_MAX;
	static volatile int64_t t85 = 445LL;

	t85 = (x429*(x430^(x431|x432)));

	if (t85 != 322765056LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x434 = 3;
	int64_t x435 = 10LL;
	volatile int8_t x436 = INT8_MIN;
	int64_t t86 = 15LL;

	t86 = (x433*(x434^(x435|x436)));

	if (t86 != 119LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x440 = 207;
	int32_t t87 = 46126;

	t87 = (x437*(x438^(x439|x440)));

	if (t87 != -8322945) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x442 = INT16_MAX;
	uint32_t x443 = 221U;
	static int32_t x444 = 7262;
	static uint32_t t88 = 3020U;

	t88 = (x441*(x442^(x443|x444)));

	if (t88 != 4294941920U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x445 = 1LLU;
	volatile int8_t x447 = -1;
	int32_t x448 = INT32_MIN;
	static uint64_t t89 = 55153791051LLU;

	t89 = (x445*(x446^(x447|x448)));

	if (t89 != 269872166882LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x449 = -1;
	int8_t x450 = -1;
	uint16_t x451 = 18U;
	volatile int32_t t90 = -11819;

	t90 = (x449*(x450^(x451|x452)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x453 = 1;
	int16_t x455 = 1;
	volatile int32_t t91 = -255;

	t91 = (x453*(x454^(x455|x456)));

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x457 = INT16_MAX;
	int64_t x458 = -1LL;
	static uint16_t x459 = 10U;

	t92 = (x457*(x458^(x459|x460)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x461 = INT16_MAX;
	static int8_t x462 = INT8_MAX;
	uint8_t x463 = 55U;
	int8_t x464 = INT8_MIN;

	t93 = (x461*(x462^(x463|x464)));

	if (t93 != -1834952) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x473 = UINT64_MAX;
	int64_t x474 = INT64_MIN;
	volatile int16_t x475 = INT16_MIN;
	int64_t x476 = 326113LL;
	uint64_t t94 = 37759638LLU;

	t94 = (x473*(x474^(x475|x476)));

	if (t94 != 9223372036854777375LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x477 = UINT8_MAX;
	int8_t x478 = INT8_MAX;
	volatile uint8_t x479 = UINT8_MAX;
	static uint16_t x480 = UINT16_MAX;
	int32_t t95 = -203783;

	t95 = (x477*(x478^(x479|x480)));

	if (t95 != 16679040) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x481 = UINT16_MAX;
	uint8_t x482 = 38U;
	static int32_t x483 = INT32_MIN;
	int64_t x484 = -1LL;
	int64_t t96 = -42469868786LL;

	t96 = (x481*(x482^(x483|x484)));

	if (t96 != -2555865LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x489 = 2426;
	uint32_t x491 = 172147U;
	int64_t x492 = 0LL;
	volatile int64_t t97 = -15094LL;

	t97 = (x489*(x490^(x491|x492)));

	if (t97 != 456815800LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x493 = -1;
	int16_t x496 = 13965;

	t98 = (x493*(x494^(x495|x496)));

	if (t98 != 14065) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x501 = INT8_MIN;
	volatile int8_t x502 = -4;
	int8_t x503 = INT8_MIN;
	volatile int16_t x504 = INT16_MAX;
	volatile int32_t t99 = -992834981;

	t99 = (x501*(x502^(x503|x504)));

	if (t99 != -384) { NG(); } else { ; }
	
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

