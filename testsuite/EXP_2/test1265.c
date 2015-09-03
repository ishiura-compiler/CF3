#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x18 = INT8_MIN;
volatile uint32_t t1 = 209U;
int64_t x40 = 386922515081383427LL;
int8_t x48 = INT8_MAX;
volatile uint32_t t4 = 9808U;
uint64_t x58 = UINT64_MAX;
int32_t t6 = 361717794;
uint64_t x61 = 8226274LLU;
int8_t x63 = 1;
volatile int32_t x66 = -6;
volatile uint16_t x67 = 6U;
uint32_t x78 = 63213U;
static volatile uint32_t x80 = 1790967U;
static volatile uint32_t t9 = 4U;
volatile uint32_t x95 = 43716811U;
static int16_t x108 = INT16_MAX;
volatile int16_t x122 = -236;
uint16_t x124 = 6495U;
volatile int32_t x127 = INT32_MIN;
int16_t x148 = INT16_MIN;
int8_t x150 = INT8_MIN;
uint16_t x154 = 135U;
int8_t x158 = -1;
static uint16_t x160 = UINT16_MAX;
volatile int64_t t23 = 524012367577159053LL;
int32_t x175 = INT32_MAX;
int8_t x180 = 6;
volatile int64_t t27 = -248LL;
volatile int64_t x199 = -1LL;
int64_t x200 = INT64_MIN;
volatile uint8_t x214 = 51U;
int16_t x219 = -3;
uint32_t x239 = 500U;
uint32_t x240 = 7U;
int32_t x247 = -1;
int32_t x248 = INT32_MIN;
static volatile int32_t x258 = -13314;
uint32_t t42 = 1U;
int64_t x267 = -60952LL;
volatile int32_t t43 = -541157965;
volatile uint8_t x273 = 13U;
uint8_t x281 = UINT8_MAX;
uint32_t x284 = UINT32_MAX;
static uint32_t x286 = 109U;
uint32_t x289 = UINT32_MAX;
volatile int16_t x291 = -1878;
uint8_t x303 = 14U;
uint32_t t50 = 291059517U;
static uint8_t x305 = 0U;
uint32_t x308 = 50927U;
volatile uint32_t x311 = 260926691U;
int8_t x320 = 37;
volatile int64_t x323 = INT64_MIN;
static int64_t x328 = INT64_MIN;
static volatile uint64_t x331 = UINT64_MAX;
static volatile int32_t t57 = -10334607;
static uint64_t x336 = UINT64_MAX;
uint16_t x348 = 22478U;
uint8_t x352 = 15U;
int8_t x353 = 0;
static volatile int64_t x364 = INT64_MIN;
uint16_t x375 = UINT16_MAX;
volatile uint32_t t67 = 432999051U;
static uint16_t x400 = 80U;
volatile int32_t t68 = -13372;
volatile int32_t x407 = -45735;
static uint32_t t69 = 32U;
volatile uint16_t x411 = 24U;
int64_t t71 = 543615641937LL;
uint64_t t72 = 2993859LLU;
static int16_t x434 = -1;
int64_t x436 = INT64_MIN;
int32_t x445 = INT32_MAX;
uint64_t t76 = 8888524979522329LLU;
int64_t x449 = 948602072419125317LL;
int32_t x451 = -1;
int64_t x472 = INT64_MIN;
volatile int64_t t81 = -133172812498587901LL;
uint64_t t83 = 1545741LLU;
static int64_t x489 = INT64_MAX;
static int32_t x492 = INT32_MIN;
static int64_t t84 = 4569LL;
volatile int8_t x516 = INT8_MIN;
volatile int32_t x526 = INT32_MAX;
int16_t x533 = INT16_MAX;
static int8_t x534 = INT8_MIN;
int32_t x540 = -1;
uint16_t x561 = 1U;
uint8_t x565 = 27U;
int32_t x566 = -170035560;
int32_t x568 = -1;
int64_t x571 = -315859725946LL;
static volatile int32_t t95 = 276799296;
uint32_t x601 = 388U;
volatile int32_t x603 = INT32_MAX;
int16_t x608 = INT16_MIN;
static int32_t t97 = 61180470;
volatile int32_t x611 = INT32_MAX;
volatile int32_t t98 = -273815;
static int8_t x616 = -1;
static volatile int64_t t99 = 2904333059913313423LL;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	int32_t x2 = INT32_MIN;
	static int16_t x3 = INT16_MIN;
	static int16_t x4 = -15;
	volatile int32_t t0 = 318;

	t0 = ((x1>>(x2==x3))/x4);

	if (t0 != -143165576) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x17 = 214923447U;
	volatile int32_t x19 = INT32_MAX;
	static uint8_t x20 = UINT8_MAX;

	t1 = ((x17>>(x18==x19))/x20);

	if (t1 != 842837U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x25 = 0;
	uint16_t x26 = 5142U;
	int32_t x27 = INT32_MIN;
	int8_t x28 = -1;
	volatile int32_t t2 = 451;

	t2 = ((x25>>(x26==x27))/x28);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x37 = 48;
	int32_t x38 = INT32_MAX;
	int32_t x39 = INT32_MIN;
	volatile int64_t t3 = 1208179497683LL;

	t3 = ((x37>>(x38==x39))/x40);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x45 = 4U;
	static int8_t x46 = INT8_MIN;
	uint8_t x47 = UINT8_MAX;

	t4 = ((x45>>(x46==x47))/x48);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x53 = UINT64_MAX;
	static volatile int16_t x54 = -1;
	int64_t x55 = INT64_MIN;
	uint8_t x56 = 16U;
	volatile uint64_t t5 = 311695891LLU;

	t5 = ((x53>>(x54==x55))/x56);

	if (t5 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x57 = 6509U;
	volatile uint64_t x59 = 145581901311LLU;
	int8_t x60 = -1;

	t6 = ((x57>>(x58==x59))/x60);

	if (t6 != -6509) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x62 = INT8_MIN;
	static int8_t x64 = -1;
	uint64_t t7 = 306018737LLU;

	t7 = ((x61>>(x62==x63))/x64);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x65 = 32;
	int32_t x68 = INT32_MAX;
	volatile int32_t t8 = 4293;

	t8 = ((x65>>(x66==x67))/x68);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x77 = 1019;
	static uint64_t x79 = UINT64_MAX;

	t9 = ((x77>>(x78==x79))/x80);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x93 = UINT16_MAX;
	int32_t x94 = -119661224;
	volatile int16_t x96 = INT16_MIN;
	volatile int32_t t10 = -18321892;

	t10 = ((x93>>(x94==x95))/x96);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x105 = 215883777917724LLU;
	uint32_t x106 = 8766308U;
	uint64_t x107 = 68609841867865LLU;
	uint64_t t11 = 2079286239542LLU;

	t11 = ((x105>>(x106==x107))/x108);

	if (t11 != 6588451122LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x117 = UINT32_MAX;
	uint32_t x118 = 53U;
	int8_t x119 = INT8_MIN;
	static int32_t x120 = INT32_MIN;
	uint32_t t12 = 33584451U;

	t12 = ((x117>>(x118==x119))/x120);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x121 = 8032U;
	int64_t x123 = INT64_MIN;
	volatile uint32_t t13 = 0U;

	t13 = ((x121>>(x122==x123))/x124);

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x125 = 7U;
	int16_t x126 = INT16_MIN;
	static uint8_t x128 = UINT8_MAX;
	volatile int32_t t14 = -1;

	t14 = ((x125>>(x126==x127))/x128);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x129 = UINT16_MAX;
	int8_t x130 = -1;
	static uint32_t x131 = 595714U;
	uint32_t x132 = 9554475U;
	volatile uint32_t t15 = 35614648U;

	t15 = ((x129>>(x130==x131))/x132);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x133 = 12541232235488LLU;
	int8_t x134 = 4;
	int64_t x135 = -1LL;
	static uint32_t x136 = 8568450U;
	volatile uint64_t t16 = 4297006023LLU;

	t16 = ((x133>>(x134==x135))/x136);

	if (t16 != 1463652LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x141 = UINT16_MAX;
	int8_t x142 = INT8_MIN;
	volatile int16_t x143 = -12;
	static int32_t x144 = INT32_MAX;
	volatile int32_t t17 = -38364;

	t17 = ((x141>>(x142==x143))/x144);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x145 = 4U;
	int16_t x146 = INT16_MAX;
	uint32_t x147 = 409411173U;
	static volatile int32_t t18 = -58;

	t18 = ((x145>>(x146==x147))/x148);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x149 = 499U;
	uint8_t x151 = 47U;
	volatile int16_t x152 = INT16_MIN;
	int32_t t19 = -23722;

	t19 = ((x149>>(x150==x151))/x152);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x153 = INT64_MAX;
	static uint16_t x155 = UINT16_MAX;
	static uint8_t x156 = UINT8_MAX;
	volatile int64_t t20 = 1588LL;

	t20 = ((x153>>(x154==x155))/x156);

	if (t20 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x157 = UINT16_MAX;
	volatile int32_t x159 = -23489760;
	volatile int32_t t21 = 0;

	t21 = ((x157>>(x158==x159))/x160);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x161 = 7U;
	int16_t x162 = INT16_MAX;
	int16_t x163 = 3;
	volatile int64_t x164 = -1LL;
	static int64_t t22 = 1275927781LL;

	t22 = ((x161>>(x162==x163))/x164);

	if (t22 != -7LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x165 = UINT8_MAX;
	volatile int8_t x166 = 15;
	volatile int8_t x167 = INT8_MAX;
	int64_t x168 = INT64_MIN;

	t23 = ((x165>>(x166==x167))/x168);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x169 = INT64_MAX;
	int16_t x170 = -1;
	int64_t x171 = -30LL;
	volatile int8_t x172 = INT8_MIN;
	int64_t t24 = -4013000752664LL;

	t24 = ((x169>>(x170==x171))/x172);

	if (t24 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x173 = INT16_MAX;
	int16_t x174 = INT16_MIN;
	int16_t x176 = INT16_MIN;
	volatile int32_t t25 = 26928038;

	t25 = ((x173>>(x174==x175))/x176);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x177 = 1304890570LLU;
	volatile int8_t x178 = INT8_MAX;
	int16_t x179 = INT16_MIN;
	volatile uint64_t t26 = 8887604256204429572LLU;

	t26 = ((x177>>(x178==x179))/x180);

	if (t26 != 217481761LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x185 = 4U;
	uint64_t x186 = UINT64_MAX;
	int8_t x187 = -1;
	int64_t x188 = INT64_MIN;

	t27 = ((x185>>(x186==x187))/x188);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x189 = 35824U;
	static int32_t x190 = INT32_MIN;
	static uint64_t x191 = 6094150266486756578LLU;
	static int16_t x192 = INT16_MIN;
	static uint32_t t28 = 1735674U;

	t28 = ((x189>>(x190==x191))/x192);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x193 = INT8_MAX;
	uint32_t x194 = UINT32_MAX;
	static int32_t x195 = INT32_MIN;
	int16_t x196 = INT16_MIN;
	int32_t t29 = -3034;

	t29 = ((x193>>(x194==x195))/x196);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x197 = 76955179U;
	int64_t x198 = -1814567167965214LL;
	int64_t t30 = 54898436LL;

	t30 = ((x197>>(x198==x199))/x200);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x201 = 37925U;
	uint64_t x202 = 62109334182LLU;
	static volatile int8_t x203 = 3;
	int32_t x204 = 214459;
	static uint32_t t31 = 19738U;

	t31 = ((x201>>(x202==x203))/x204);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x205 = 83U;
	static volatile int8_t x206 = INT8_MIN;
	int8_t x207 = 0;
	static int64_t x208 = -1LL;
	int64_t t32 = -2101896333054426867LL;

	t32 = ((x205>>(x206==x207))/x208);

	if (t32 != -83LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x209 = 58;
	int32_t x210 = INT32_MIN;
	int32_t x211 = INT32_MIN;
	static int8_t x212 = INT8_MAX;
	int32_t t33 = 3340522;

	t33 = ((x209>>(x210==x211))/x212);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x213 = INT64_MAX;
	int16_t x215 = INT16_MIN;
	volatile uint8_t x216 = UINT8_MAX;
	volatile int64_t t34 = 506159LL;

	t34 = ((x213>>(x214==x215))/x216);

	if (t34 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x217 = 9042;
	int8_t x218 = -1;
	static int16_t x220 = INT16_MIN;
	int32_t t35 = 5008;

	t35 = ((x217>>(x218==x219))/x220);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x225 = 12465950;
	static uint32_t x226 = 344507U;
	uint32_t x227 = UINT32_MAX;
	int32_t x228 = 13;
	volatile int32_t t36 = -684;

	t36 = ((x225>>(x226==x227))/x228);

	if (t36 != 958919) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x237 = 0U;
	static int16_t x238 = -1;
	uint32_t t37 = 6U;

	t37 = ((x237>>(x238==x239))/x240);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x241 = 138134141272LL;
	int16_t x242 = INT16_MIN;
	int32_t x243 = -1;
	volatile uint32_t x244 = UINT32_MAX;
	static volatile int64_t t38 = -13286621422209684LL;

	t38 = ((x241>>(x242==x243))/x244);

	if (t38 != 32LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x245 = 46U;
	static int64_t x246 = -38724749LL;
	volatile int32_t t39 = 55558169;

	t39 = ((x245>>(x246==x247))/x248);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x249 = 276U;
	volatile int16_t x250 = 4327;
	uint8_t x251 = 3U;
	int16_t x252 = 2;
	static uint32_t t40 = 2136244U;

	t40 = ((x249>>(x250==x251))/x252);

	if (t40 != 138U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x253 = 12U;
	uint32_t x254 = UINT32_MAX;
	volatile int64_t x255 = INT64_MAX;
	int8_t x256 = INT8_MIN;
	static int32_t t41 = -25;

	t41 = ((x253>>(x254==x255))/x256);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x257 = UINT32_MAX;
	int32_t x259 = -719;
	uint16_t x260 = 3569U;

	t42 = ((x257>>(x258==x259))/x260);

	if (t42 != 1203409U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x265 = 1;
	uint32_t x266 = UINT32_MAX;
	volatile uint16_t x268 = UINT16_MAX;

	t43 = ((x265>>(x266==x267))/x268);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x269 = INT32_MAX;
	int64_t x270 = INT64_MIN;
	int8_t x271 = -15;
	int32_t x272 = 15;
	int32_t t44 = 60541;

	t44 = ((x269>>(x270==x271))/x272);

	if (t44 != 143165576) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x274 = 104LL;
	int32_t x275 = -1;
	int64_t x276 = INT64_MIN;
	volatile int64_t t45 = -874LL;

	t45 = ((x273>>(x274==x275))/x276);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x282 = UINT32_MAX;
	int32_t x283 = -1;
	static uint32_t t46 = 1254165272U;

	t46 = ((x281>>(x282==x283))/x284);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x285 = 19U;
	static volatile int32_t x287 = -13;
	uint32_t x288 = 25U;
	static volatile uint32_t t47 = 143U;

	t47 = ((x285>>(x286==x287))/x288);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x290 = 18679381840933LL;
	int16_t x292 = -6;
	uint32_t t48 = 1438U;

	t48 = ((x289>>(x290==x291))/x292);

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x293 = 21U;
	int16_t x294 = -145;
	uint8_t x295 = UINT8_MAX;
	int8_t x296 = INT8_MIN;
	volatile int32_t t49 = 213;

	t49 = ((x293>>(x294==x295))/x296);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x301 = 46655U;
	int32_t x302 = INT32_MAX;
	int16_t x304 = INT16_MIN;

	t50 = ((x301>>(x302==x303))/x304);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x306 = INT64_MIN;
	int64_t x307 = -316138476809881701LL;
	uint32_t t51 = 5250025U;

	t51 = ((x305>>(x306==x307))/x308);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x309 = 12U;
	int16_t x310 = 0;
	static int32_t x312 = INT32_MAX;
	volatile int32_t t52 = 10;

	t52 = ((x309>>(x310==x311))/x312);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x313 = UINT32_MAX;
	volatile int32_t x314 = INT32_MAX;
	int16_t x315 = -2;
	int32_t x316 = INT32_MAX;
	volatile uint32_t t53 = 64591U;

	t53 = ((x313>>(x314==x315))/x316);

	if (t53 != 2U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x317 = 40900LL;
	volatile int16_t x318 = INT16_MAX;
	volatile int16_t x319 = INT16_MAX;
	volatile int64_t t54 = 6141153LL;

	t54 = ((x317>>(x318==x319))/x320);

	if (t54 != 552LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x321 = 12753896210LL;
	int64_t x322 = -9907529055LL;
	int32_t x324 = INT32_MAX;
	int64_t t55 = 865248LL;

	t55 = ((x321>>(x322==x323))/x324);

	if (t55 != 5LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x325 = INT64_MAX;
	int32_t x326 = INT32_MAX;
	uint32_t x327 = UINT32_MAX;
	volatile int64_t t56 = 52123397LL;

	t56 = ((x325>>(x326==x327))/x328);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x329 = 3958;
	static volatile int32_t x330 = INT32_MIN;
	static volatile uint16_t x332 = 133U;

	t57 = ((x329>>(x330==x331))/x332);

	if (t57 != 29) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x333 = 44;
	int8_t x334 = -10;
	volatile int16_t x335 = -1;
	uint64_t t58 = 932730LLU;

	t58 = ((x333>>(x334==x335))/x336);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x341 = 1063;
	int8_t x342 = INT8_MIN;
	static uint8_t x343 = UINT8_MAX;
	int32_t x344 = INT32_MIN;
	volatile int32_t t59 = -6304;

	t59 = ((x341>>(x342==x343))/x344);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x345 = 544U;
	int64_t x346 = -3010LL;
	volatile int16_t x347 = -1;
	int32_t t60 = -5325665;

	t60 = ((x345>>(x346==x347))/x348);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x349 = 782U;
	int64_t x350 = 4419LL;
	uint32_t x351 = 1887895U;
	volatile uint32_t t61 = 790257U;

	t61 = ((x349>>(x350==x351))/x352);

	if (t61 != 52U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x354 = INT64_MIN;
	int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t62 = 726;

	t62 = ((x353>>(x354==x355))/x356);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x361 = 20466U;
	int8_t x362 = 1;
	uint16_t x363 = UINT16_MAX;
	int64_t t63 = -140358234558274613LL;

	t63 = ((x361>>(x362==x363))/x364);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x365 = INT8_MAX;
	int32_t x366 = INT32_MIN;
	static int8_t x367 = INT8_MAX;
	static int8_t x368 = INT8_MAX;
	int32_t t64 = -73426;

	t64 = ((x365>>(x366==x367))/x368);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x369 = 3U;
	int16_t x370 = INT16_MIN;
	int8_t x371 = INT8_MAX;
	uint32_t x372 = UINT32_MAX;
	volatile uint32_t t65 = 532229043U;

	t65 = ((x369>>(x370==x371))/x372);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x373 = INT32_MAX;
	int16_t x374 = INT16_MIN;
	uint32_t x376 = UINT32_MAX;
	static uint32_t t66 = 742U;

	t66 = ((x373>>(x374==x375))/x376);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x393 = 516731U;
	volatile int64_t x394 = -1LL;
	int16_t x395 = 1252;
	int8_t x396 = INT8_MIN;

	t67 = ((x393>>(x394==x395))/x396);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x397 = UINT16_MAX;
	int32_t x398 = INT32_MIN;
	uint64_t x399 = UINT64_MAX;

	t68 = ((x397>>(x398==x399))/x400);

	if (t68 != 819) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x405 = 6353052U;
	static int16_t x406 = INT16_MAX;
	int16_t x408 = -3864;

	t69 = ((x405>>(x406==x407))/x408);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x409 = INT64_MAX;
	int8_t x410 = -24;
	int8_t x412 = 5;
	int64_t t70 = 3839875415418152083LL;

	t70 = ((x409>>(x410==x411))/x412);

	if (t70 != 1844674407370955161LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x417 = 1;
	uint8_t x418 = 95U;
	int64_t x419 = 8395412491744LL;
	int64_t x420 = 291181812724175898LL;

	t71 = ((x417>>(x418==x419))/x420);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x425 = 16535452LLU;
	int32_t x426 = -1;
	int16_t x427 = INT16_MIN;
	static int8_t x428 = -23;

	t72 = ((x425>>(x426==x427))/x428);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x433 = 46490734663872LLU;
	int8_t x435 = 5;
	uint64_t t73 = 4061884971LLU;

	t73 = ((x433>>(x434==x435))/x436);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x437 = 406257512567169LLU;
	int16_t x438 = -567;
	int8_t x439 = INT8_MIN;
	static uint64_t x440 = 469LLU;
	static volatile uint64_t t74 = 30511126633204LLU;

	t74 = ((x437>>(x438==x439))/x440);

	if (t74 != 866220709098LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x441 = 0U;
	uint8_t x442 = UINT8_MAX;
	uint64_t x443 = UINT64_MAX;
	int16_t x444 = INT16_MAX;
	int32_t t75 = 178;

	t75 = ((x441>>(x442==x443))/x444);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x446 = 1;
	volatile int8_t x447 = -1;
	uint64_t x448 = 545LLU;

	t76 = ((x445>>(x446==x447))/x448);

	if (t76 != 3940336LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x450 = INT16_MAX;
	uint64_t x452 = 8322LLU;
	volatile uint64_t t77 = 462752648815789LLU;

	t77 = ((x449>>(x450==x451))/x452);

	if (t77 != 113987271379370LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x457 = UINT16_MAX;
	uint32_t x458 = 103759956U;
	volatile int8_t x459 = INT8_MAX;
	uint16_t x460 = 84U;
	volatile int32_t t78 = -488070;

	t78 = ((x457>>(x458==x459))/x460);

	if (t78 != 780) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x461 = 61U;
	static uint32_t x462 = 72426924U;
	uint32_t x463 = 262U;
	int16_t x464 = -1;
	volatile int32_t t79 = 788968691;

	t79 = ((x461>>(x462==x463))/x464);

	if (t79 != -61) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x465 = UINT8_MAX;
	static int8_t x466 = -1;
	static volatile int64_t x467 = INT64_MIN;
	int32_t x468 = INT32_MAX;
	int32_t t80 = -74;

	t80 = ((x465>>(x466==x467))/x468);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x469 = 14563U;
	uint16_t x470 = 44U;
	int8_t x471 = 0;

	t81 = ((x469>>(x470==x471))/x472);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x477 = 1U;
	int16_t x478 = 2;
	uint8_t x479 = 1U;
	int64_t x480 = 2207211LL;
	static int64_t t82 = 29607678LL;

	t82 = ((x477>>(x478==x479))/x480);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x485 = 6;
	volatile int64_t x486 = INT64_MIN;
	uint8_t x487 = UINT8_MAX;
	static uint64_t x488 = UINT64_MAX;

	t83 = ((x485>>(x486==x487))/x488);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x490 = INT32_MIN;
	uint64_t x491 = 6355578248305LLU;

	t84 = ((x489>>(x490==x491))/x492);

	if (t84 != -4294967295LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x513 = 1609LLU;
	int16_t x514 = -1;
	static int64_t x515 = INT64_MIN;
	uint64_t t85 = 28LLU;

	t85 = ((x513>>(x514==x515))/x516);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x525 = 4U;
	static int8_t x527 = 1;
	int32_t x528 = -1;
	int32_t t86 = 174429;

	t86 = ((x525>>(x526==x527))/x528);

	if (t86 != -4) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x535 = INT16_MAX;
	int64_t x536 = INT64_MAX;
	static volatile int64_t t87 = -189956521765395LL;

	t87 = ((x533>>(x534==x535))/x536);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x537 = INT8_MAX;
	volatile uint64_t x538 = UINT64_MAX;
	int8_t x539 = INT8_MIN;
	static int32_t t88 = -32777;

	t88 = ((x537>>(x538==x539))/x540);

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x541 = 14U;
	static volatile int32_t x542 = INT32_MIN;
	int8_t x543 = INT8_MAX;
	uint32_t x544 = UINT32_MAX;
	static volatile uint32_t t89 = 462848096U;

	t89 = ((x541>>(x542==x543))/x544);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x549 = 21U;
	int32_t x550 = INT32_MIN;
	uint64_t x551 = UINT64_MAX;
	int64_t x552 = INT64_MAX;
	static int64_t t90 = -456LL;

	t90 = ((x549>>(x550==x551))/x552);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x553 = INT8_MAX;
	volatile int16_t x554 = INT16_MIN;
	uint16_t x555 = 13U;
	int32_t x556 = INT32_MAX;
	int32_t t91 = 821;

	t91 = ((x553>>(x554==x555))/x556);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x557 = 12;
	int32_t x558 = 451633;
	static int32_t x559 = INT32_MAX;
	int64_t x560 = 2192902508522678026LL;
	int64_t t92 = 0LL;

	t92 = ((x557>>(x558==x559))/x560);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x562 = -1;
	int64_t x563 = INT64_MIN;
	static uint8_t x564 = 20U;
	volatile int32_t t93 = 1347;

	t93 = ((x561>>(x562==x563))/x564);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x567 = INT32_MIN;
	int32_t t94 = -1005708;

	t94 = ((x565>>(x566==x567))/x568);

	if (t94 != -27) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x569 = UINT8_MAX;
	static int64_t x570 = -1LL;
	static int32_t x572 = INT32_MIN;

	t95 = ((x569>>(x570==x571))/x572);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x602 = 15199U;
	uint16_t x604 = 2136U;
	static uint32_t t96 = 7655U;

	t96 = ((x601>>(x602==x603))/x604);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x605 = INT8_MAX;
	uint64_t x606 = 514071820807148627LLU;
	uint32_t x607 = UINT32_MAX;

	t97 = ((x605>>(x606==x607))/x608);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x609 = 4;
	int8_t x610 = -1;
	static int16_t x612 = INT16_MAX;

	t98 = ((x609>>(x610==x611))/x612);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x613 = 970543LL;
	volatile int64_t x614 = 3154LL;
	volatile int8_t x615 = INT8_MAX;

	t99 = ((x613>>(x614==x615))/x616);

	if (t99 != -970543LL) { NG(); } else { ; }
	
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

