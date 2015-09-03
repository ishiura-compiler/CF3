#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int8_t x2 = 50;
static uint16_t x13 = UINT16_MAX;
static int16_t x31 = INT16_MAX;
static int8_t x32 = -1;
uint32_t t3 = 1172U;
volatile uint32_t x45 = UINT32_MAX;
static volatile int64_t x46 = INT64_MAX;
int64_t t4 = 1743068657000LL;
static uint64_t x54 = 13019LLU;
int8_t x56 = INT8_MIN;
int16_t x60 = INT16_MIN;
static int64_t t6 = 131844744483822LL;
volatile int64_t t7 = -85851668754LL;
uint8_t x65 = 0U;
int64_t x71 = INT64_MAX;
int16_t x85 = 1;
static int64_t x88 = INT64_MIN;
static volatile int8_t x98 = INT8_MIN;
int16_t x99 = 2460;
uint64_t x108 = 199LLU;
int16_t x121 = -1;
static int16_t x122 = INT16_MIN;
int64_t x149 = 128626295421534LL;
volatile int16_t x152 = INT16_MAX;
uint8_t x157 = 0U;
uint64_t x160 = 2386732418LLU;
static int32_t x161 = INT32_MAX;
volatile int64_t t24 = 729938607297930306LL;
int8_t x178 = INT8_MAX;
int32_t x179 = INT32_MAX;
volatile int64_t t26 = -435413399725LL;
int16_t x192 = -28;
int32_t t29 = -207;
static int8_t x221 = 11;
int32_t x222 = INT32_MAX;
int8_t x229 = INT8_MIN;
volatile int16_t x235 = -1;
int32_t x236 = INT32_MAX;
uint16_t x241 = 587U;
uint32_t x244 = 442U;
volatile int64_t x246 = -16349987022399677LL;
int8_t x248 = -18;
static int8_t x249 = 50;
static int8_t x254 = -1;
int64_t t40 = 446920103239908388LL;
int8_t x271 = INT8_MIN;
int64_t t42 = 10289LL;
static uint64_t x273 = 313LLU;
int64_t x286 = 6856LL;
uint32_t x290 = UINT32_MAX;
int16_t x295 = 1941;
int32_t x296 = 3823779;
int8_t x305 = INT8_MIN;
int16_t x306 = 1614;
volatile int32_t t50 = -128747230;
uint32_t x309 = 1401U;
volatile uint64_t x318 = 116969104918LLU;
volatile uint8_t x319 = 2U;
volatile int8_t x320 = -1;
int8_t x321 = 0;
uint32_t x337 = 1U;
uint8_t x339 = 2U;
int8_t x342 = INT8_MIN;
uint64_t x360 = 18LLU;
volatile uint64_t t60 = 1855729823775068LLU;
static int32_t x363 = 1;
static int16_t x365 = -4;
volatile int32_t t62 = 0;
static volatile uint16_t x370 = 46U;
uint32_t x389 = 352756U;
static int32_t x391 = INT32_MAX;
uint64_t x392 = UINT64_MAX;
static int8_t x405 = 20;
static int32_t x410 = INT32_MIN;
static volatile int64_t t69 = -6908979280LL;
int8_t x415 = INT8_MIN;
static int32_t x418 = 6;
int16_t x423 = 798;
int32_t x427 = INT32_MAX;
volatile uint64_t t75 = 77303667510990633LLU;
uint32_t x453 = 71639228U;
static uint8_t x458 = 1U;
static uint32_t x476 = UINT32_MAX;
static int32_t x489 = 423760699;
static volatile int32_t t82 = -128818;
uint16_t x497 = UINT16_MAX;
static int32_t t83 = -8378348;
uint64_t x505 = UINT64_MAX;
int32_t x507 = 1278735;
int8_t x519 = INT8_MIN;
int8_t x520 = -1;
uint64_t t86 = 11496503714LLU;
int8_t x526 = INT8_MIN;
int32_t x531 = 51;
uint64_t x548 = 25177383LLU;
volatile uint8_t x551 = 26U;
uint32_t t92 = 57U;
uint8_t x562 = UINT8_MAX;
volatile int64_t x573 = -1LL;
int8_t x582 = -1;
int8_t x583 = 22;
int16_t x585 = -378;


void f0(void) {
	int16_t x3 = -1;
	int16_t x4 = INT16_MAX;
	static int32_t t0 = 3928177;

	t0 = ((x1/(x2&x3))*x4);

	if (t0 != -21462385) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x14 = 2866566209490LL;
	uint32_t x15 = 1860U;
	volatile int32_t x16 = INT32_MIN;
	volatile int64_t t1 = -613990027519486LL;

	t1 = ((x13/(x14&x15))*x16);

	if (t1 != -75161927680LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x29 = INT16_MIN;
	int32_t x30 = 2830515;
	static int32_t t2 = -205760;

	t2 = ((x29/(x30&x31))*x32);

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x37 = -1;
	int8_t x38 = INT8_MIN;
	static int8_t x39 = INT8_MIN;
	uint32_t x40 = UINT32_MAX;

	t3 = ((x37/(x38&x39))*x40);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x47 = -1;
	volatile int16_t x48 = 456;

	t4 = ((x45/(x46&x47))*x48);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x53 = 434U;
	volatile uint16_t x55 = UINT16_MAX;
	uint64_t t5 = 820LLU;

	t5 = ((x53/(x54&x55))*x56);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x57 = 1U;
	int64_t x58 = -1LL;
	int8_t x59 = INT8_MAX;

	t6 = ((x57/(x58&x59))*x60);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x61 = 26;
	int64_t x62 = INT64_MIN;
	volatile int64_t x63 = INT64_MIN;
	int16_t x64 = -1;

	t7 = ((x61/(x62&x63))*x64);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x66 = UINT64_MAX;
	static int16_t x67 = 1;
	int64_t x68 = -131930849986758LL;
	volatile uint64_t t8 = 1890065576LLU;

	t8 = ((x65/(x66&x67))*x68);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x69 = UINT32_MAX;
	int8_t x70 = INT8_MIN;
	static int64_t x72 = INT64_MAX;
	volatile int64_t t9 = 5188446544LL;

	t9 = ((x69/(x70&x71))*x72);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x73 = 0U;
	int8_t x74 = -1;
	uint64_t x75 = UINT64_MAX;
	uint8_t x76 = 66U;
	volatile uint64_t t10 = 34342628894112871LLU;

	t10 = ((x73/(x74&x75))*x76);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x86 = UINT8_MAX;
	int16_t x87 = -24;
	volatile int64_t t11 = -16174361051931292LL;

	t11 = ((x85/(x86&x87))*x88);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x89 = INT64_MIN;
	volatile int8_t x90 = -1;
	int32_t x91 = -234192362;
	static volatile uint64_t x92 = UINT64_MAX;
	volatile uint64_t t12 = 3278424313764168LLU;

	t12 = ((x89/(x90&x91))*x92);

	if (t12 != 18446744034325807595LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x93 = -8369;
	static uint64_t x94 = UINT64_MAX;
	int64_t x95 = 6374215041177LL;
	uint16_t x96 = UINT16_MAX;
	uint64_t t13 = 17962812841300282LLU;

	t13 = ((x93/(x94&x95))*x96);

	if (t13 != 189655865205LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x97 = 140LLU;
	static int16_t x100 = INT16_MAX;
	volatile uint64_t t14 = 148715946828372LLU;

	t14 = ((x97/(x98&x99))*x100);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x105 = -20;
	int16_t x106 = INT16_MIN;
	volatile uint64_t x107 = UINT64_MAX;
	uint64_t t15 = 42745LLU;

	t15 = ((x105/(x106&x107))*x108);

	if (t15 != 199LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x113 = 5400LLU;
	int16_t x114 = -1;
	int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MIN;
	volatile uint64_t t16 = 25321831764508213LLU;

	t16 = ((x113/(x114&x115))*x116);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x117 = 2U;
	static volatile uint16_t x118 = UINT16_MAX;
	uint64_t x119 = UINT64_MAX;
	uint64_t x120 = UINT64_MAX;
	uint64_t t17 = 2937448169254LLU;

	t17 = ((x117/(x118&x119))*x120);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x123 = INT32_MIN;
	static int32_t x124 = -1;
	static volatile int32_t t18 = 2713102;

	t18 = ((x121/(x122&x123))*x124);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x129 = -2LL;
	int32_t x130 = -1;
	uint32_t x131 = 1268U;
	int32_t x132 = INT32_MIN;
	int64_t t19 = 6332196918LL;

	t19 = ((x129/(x130&x131))*x132);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = 4044673;
	int16_t x143 = -28;
	volatile int16_t x144 = INT16_MIN;
	volatile int32_t t20 = -185976;

	t20 = ((x141/(x142&x143))*x144);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x145 = -1;
	int8_t x146 = 29;
	int16_t x147 = -1;
	int64_t x148 = INT64_MIN;
	volatile int64_t t21 = -49340986133511947LL;

	t21 = ((x145/(x146&x147))*x148);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x150 = -1LL;
	int32_t x151 = INT32_MIN;
	int64_t t22 = 333365473643337186LL;

	t22 = ((x149/(x150&x151))*x152);

	if (t22 != -1962612232LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x158 = INT16_MIN;
	uint32_t x159 = UINT32_MAX;
	volatile uint64_t t23 = 201955351054044LLU;

	t23 = ((x157/(x158&x159))*x160);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x162 = INT8_MIN;
	static int64_t x163 = -1LL;
	int8_t x164 = -12;

	t24 = ((x161/(x162&x163))*x164);

	if (t24 != 201326580LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x177 = -1LL;
	int32_t x180 = 1738;
	volatile int64_t t25 = 1LL;

	t25 = ((x177/(x178&x179))*x180);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x181 = INT16_MIN;
	int8_t x182 = -1;
	static int64_t x183 = INT64_MAX;
	uint16_t x184 = 154U;

	t26 = ((x181/(x182&x183))*x184);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x185 = 6;
	int8_t x186 = -1;
	static int16_t x187 = -1;
	int64_t x188 = -1LL;
	static volatile int64_t t27 = -25598537LL;

	t27 = ((x185/(x186&x187))*x188);

	if (t27 != 6LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x189 = 33439;
	int32_t x190 = -1;
	uint16_t x191 = 9338U;
	int32_t t28 = -514685651;

	t28 = ((x189/(x190&x191))*x192);

	if (t28 != -84) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x193 = 1339U;
	int8_t x194 = -2;
	int32_t x195 = INT32_MAX;
	static uint8_t x196 = UINT8_MAX;

	t29 = ((x193/(x194&x195))*x196);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x197 = 7460993LL;
	volatile int32_t x198 = INT32_MIN;
	uint32_t x199 = UINT32_MAX;
	int16_t x200 = -1;
	volatile int64_t t30 = -7233697LL;

	t30 = ((x197/(x198&x199))*x200);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x209 = INT64_MIN;
	int32_t x210 = -1123;
	uint64_t x211 = 2246326394510269042LLU;
	static uint16_t x212 = 1U;
	uint64_t t31 = 523001318917728LLU;

	t31 = ((x209/(x210&x211))*x212);

	if (t31 != 4LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x223 = INT8_MIN;
	int16_t x224 = 12421;
	int32_t t32 = -2038235;

	t32 = ((x221/(x222&x223))*x224);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x230 = INT16_MAX;
	int8_t x231 = INT8_MAX;
	volatile uint32_t x232 = 108569870U;
	volatile uint32_t t33 = 32208U;

	t33 = ((x229/(x230&x231))*x232);

	if (t33 != 4186397426U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x233 = 7278U;
	volatile int64_t x234 = -828776866240456165LL;
	volatile int64_t t34 = -24658813LL;

	t34 = ((x233/(x234&x235))*x236);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x242 = -3;
	int16_t x243 = -1;
	uint32_t t35 = 17090241U;

	t35 = ((x241/(x242&x243))*x244);

	if (t35 != 4294881106U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x245 = 739851LLU;
	int64_t x247 = INT64_MIN;
	volatile uint64_t t36 = 83368838895LLU;

	t36 = ((x245/(x246&x247))*x248);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x250 = -691073443870332LL;
	static int64_t x251 = INT64_MAX;
	int32_t x252 = -1;
	volatile int64_t t37 = 551514890LL;

	t37 = ((x249/(x250&x251))*x252);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x253 = INT16_MAX;
	volatile int64_t x255 = 1942585LL;
	int16_t x256 = INT16_MIN;
	volatile int64_t t38 = 19262614794659172LL;

	t38 = ((x253/(x254&x255))*x256);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x257 = INT32_MIN;
	int16_t x258 = 3;
	int32_t x259 = -235481478;
	uint64_t x260 = UINT64_MAX;
	volatile uint64_t t39 = 5915888125840881LLU;

	t39 = ((x257/(x258&x259))*x260);

	if (t39 != 1073741824LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x261 = UINT32_MAX;
	int64_t x262 = 65563893914984LL;
	volatile int32_t x263 = INT32_MIN;
	static uint16_t x264 = UINT16_MAX;

	t40 = ((x261/(x262&x263))*x264);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x265 = 103U;
	int8_t x266 = -1;
	uint16_t x267 = 3U;
	volatile int16_t x268 = -170;
	volatile int32_t t41 = 10;

	t41 = ((x265/(x266&x267))*x268);

	if (t41 != -5780) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x269 = INT64_MIN;
	volatile int64_t x270 = INT64_MIN;
	volatile int16_t x272 = -378;

	t42 = ((x269/(x270&x271))*x272);

	if (t42 != -378LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x274 = UINT8_MAX;
	static uint64_t x275 = 117813953812522790LLU;
	static volatile uint16_t x276 = 1U;
	uint64_t t43 = 19275800274450880LLU;

	t43 = ((x273/(x274&x275))*x276);

	if (t43 != 8LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x277 = INT8_MIN;
	uint64_t x278 = UINT64_MAX;
	int8_t x279 = -21;
	int8_t x280 = INT8_MIN;
	volatile uint64_t t44 = 14747LLU;

	t44 = ((x277/(x278&x279))*x280);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x285 = 1661U;
	int64_t x287 = 2809964559576LL;
	int8_t x288 = -11;
	int64_t t45 = 94099461LL;

	t45 = ((x285/(x286&x287))*x288);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x289 = -1;
	static int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MIN;
	uint32_t t46 = 201330088U;

	t46 = ((x289/(x290&x291))*x292);

	if (t46 != 4294967168U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x293 = 79452123811017959LL;
	static uint64_t x294 = 460312LLU;
	volatile uint64_t t47 = 252678728056352LLU;

	t47 = ((x293/(x294&x295))*x296);

	if (t47 != 11284725844068700988LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x297 = -1;
	int16_t x298 = INT16_MIN;
	static int16_t x299 = INT16_MIN;
	int32_t x300 = 55;
	volatile int32_t t48 = -5134;

	t48 = ((x297/(x298&x299))*x300);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x301 = -1;
	volatile int64_t x302 = INT64_MIN;
	volatile int64_t x303 = INT64_MIN;
	uint32_t x304 = 21318U;
	int64_t t49 = 876009463832344LL;

	t49 = ((x301/(x302&x303))*x304);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x307 = 5U;
	int32_t x308 = -1;

	t50 = ((x305/(x306&x307))*x308);

	if (t50 != 32) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x310 = 701765073LL;
	int64_t x311 = -1LL;
	static int64_t x312 = INT64_MAX;
	volatile int64_t t51 = -2LL;

	t51 = ((x309/(x310&x311))*x312);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x317 = -4844;
	volatile uint64_t t52 = 2032435411LLU;

	t52 = ((x317/(x318&x319))*x320);

	if (t52 != 9223372036854778230LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x322 = -1;
	uint64_t x323 = 83910886420605LLU;
	static int32_t x324 = INT32_MIN;
	uint64_t t53 = 55588136493001LLU;

	t53 = ((x321/(x322&x323))*x324);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x325 = 2U;
	uint8_t x326 = 7U;
	uint64_t x327 = UINT64_MAX;
	volatile int32_t x328 = INT32_MIN;
	static uint64_t t54 = 781905LLU;

	t54 = ((x325/(x326&x327))*x328);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x338 = UINT8_MAX;
	int8_t x340 = INT8_MIN;
	static uint32_t t55 = 25355799U;

	t55 = ((x337/(x338&x339))*x340);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x341 = INT8_MIN;
	int64_t x343 = -1LL;
	int16_t x344 = -1;
	int64_t t56 = -6054LL;

	t56 = ((x341/(x342&x343))*x344);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x345 = -1;
	uint32_t x346 = 1U;
	uint64_t x347 = 5883LLU;
	static volatile int32_t x348 = -20617343;
	volatile uint64_t t57 = 486LLU;

	t57 = ((x345/(x346&x347))*x348);

	if (t57 != 20617343LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x349 = UINT64_MAX;
	uint64_t x350 = 14741954580LLU;
	uint64_t x351 = UINT64_MAX;
	int16_t x352 = INT16_MIN;
	uint64_t t58 = 1735654247LLU;

	t58 = ((x349/(x350&x351))*x352);

	if (t58 != 18446703070808178688LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x353 = INT16_MAX;
	uint64_t x354 = 425151632538LLU;
	int64_t x355 = 988808983638457LL;
	static int32_t x356 = INT32_MIN;
	static uint64_t t59 = 2LLU;

	t59 = ((x353/(x354&x355))*x356);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x357 = INT16_MIN;
	static volatile int32_t x358 = INT32_MIN;
	int16_t x359 = -1;

	t60 = ((x357/(x358&x359))*x360);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x361 = -1;
	static uint16_t x362 = UINT16_MAX;
	int16_t x364 = 0;
	volatile int32_t t61 = 125858;

	t61 = ((x361/(x362&x363))*x364);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x366 = -1;
	int8_t x367 = INT8_MIN;
	uint8_t x368 = UINT8_MAX;

	t62 = ((x365/(x366&x367))*x368);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x369 = -1;
	uint64_t x371 = UINT64_MAX;
	static int8_t x372 = INT8_MIN;
	volatile uint64_t t63 = 1840000834402422344LLU;

	t63 = ((x369/(x370&x371))*x372);

	if (t63 != 4010161755154250368LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x390 = 4U;
	uint64_t t64 = 6LLU;

	t64 = ((x389/(x390&x391))*x392);

	if (t64 != 18446744073709463427LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x393 = -194461470931LL;
	volatile uint32_t x394 = 51815U;
	uint32_t x395 = 770922U;
	static uint32_t x396 = 1U;
	int64_t t65 = 918736214373894LL;

	t65 = ((x393/(x394&x395))*x396);

	if (t65 != -3907830LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x397 = -1;
	int8_t x398 = 6;
	volatile int32_t x399 = INT32_MAX;
	static int8_t x400 = INT8_MIN;
	volatile int32_t t66 = -33;

	t66 = ((x397/(x398&x399))*x400);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x401 = INT8_MAX;
	volatile int8_t x402 = -1;
	static int16_t x403 = INT16_MIN;
	static uint16_t x404 = 8U;
	static volatile int32_t t67 = 4517;

	t67 = ((x401/(x402&x403))*x404);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x406 = 24331U;
	int8_t x407 = 1;
	int16_t x408 = INT16_MAX;
	int32_t t68 = -368988602;

	t68 = ((x405/(x406&x407))*x408);

	if (t68 != 655340) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x409 = 57U;
	int64_t x411 = INT64_MIN;
	uint8_t x412 = 7U;

	t69 = ((x409/(x410&x411))*x412);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x413 = -1;
	static uint64_t x414 = 978701009664376482LLU;
	static int8_t x416 = -1;
	volatile uint64_t t70 = 6650808LLU;

	t70 = ((x413/(x414&x415))*x416);

	if (t70 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x417 = -1;
	int16_t x419 = INT16_MAX;
	volatile uint32_t x420 = UINT32_MAX;
	static uint32_t t71 = 143638047U;

	t71 = ((x417/(x418&x419))*x420);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x421 = 6U;
	int64_t x422 = -1LL;
	uint8_t x424 = 11U;
	int64_t t72 = 1280LL;

	t72 = ((x421/(x422&x423))*x424);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x425 = 48LLU;
	static int32_t x426 = INT32_MAX;
	uint8_t x428 = UINT8_MAX;
	static volatile uint64_t t73 = 53538791LLU;

	t73 = ((x425/(x426&x427))*x428);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x429 = 9837LL;
	int16_t x430 = INT16_MAX;
	static int8_t x431 = 1;
	int32_t x432 = 95;
	volatile int64_t t74 = 968400788814LL;

	t74 = ((x429/(x430&x431))*x432);

	if (t74 != 934515LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x437 = INT64_MAX;
	uint64_t x438 = UINT64_MAX;
	uint8_t x439 = 1U;
	int64_t x440 = INT64_MIN;

	t75 = ((x437/(x438&x439))*x440);

	if (t75 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x441 = 177LLU;
	static uint64_t x442 = UINT64_MAX;
	uint64_t x443 = UINT64_MAX;
	volatile int8_t x444 = INT8_MIN;
	uint64_t t76 = 816433020LLU;

	t76 = ((x441/(x442&x443))*x444);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x454 = -30;
	int8_t x455 = 14;
	uint8_t x456 = 5U;
	volatile uint32_t t77 = 507088U;

	t77 = ((x453/(x454&x455))*x456);

	if (t77 != 179098070U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x457 = 45LLU;
	static int32_t x459 = -1;
	int8_t x460 = INT8_MIN;
	volatile uint64_t t78 = 102295129150845LLU;

	t78 = ((x457/(x458&x459))*x460);

	if (t78 != 18446744073709545856LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x465 = -1;
	static int64_t x466 = -1LL;
	uint32_t x467 = UINT32_MAX;
	uint32_t x468 = 0U;
	static int64_t t79 = 14997553LL;

	t79 = ((x465/(x466&x467))*x468);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x473 = 35;
	uint8_t x474 = UINT8_MAX;
	uint64_t x475 = 2970LLU;
	volatile uint64_t t80 = 9102608643196520LLU;

	t80 = ((x473/(x474&x475))*x476);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x490 = 13U;
	static volatile uint32_t x491 = 11U;
	uint32_t x492 = 2487209U;
	static volatile uint32_t t81 = 428838U;

	t81 = ((x489/(x490&x491))*x492);

	if (t81 != 2468586362U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x493 = INT16_MAX;
	static int16_t x494 = -1;
	static int32_t x495 = 36;
	uint8_t x496 = 28U;

	t82 = ((x493/(x494&x495))*x496);

	if (t82 != 25480) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x498 = -377;
	int16_t x499 = 7555;
	static uint8_t x500 = 5U;

	t83 = ((x497/(x498&x499))*x500);

	if (t83 != 40) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x506 = 4734325324395LLU;
	static uint8_t x508 = 34U;
	volatile uint64_t t84 = 136322118580135LLU;

	t84 = ((x505/(x506&x507))*x508);

	if (t84 != 3181586348702762LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x513 = 6;
	int64_t x514 = INT64_MAX;
	int16_t x515 = INT16_MIN;
	int16_t x516 = 148;
	int64_t t85 = 803LL;

	t85 = ((x513/(x514&x515))*x516);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint64_t x517 = 0LLU;
	int8_t x518 = -1;

	t86 = ((x517/(x518&x519))*x520);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x525 = INT16_MAX;
	uint8_t x527 = UINT8_MAX;
	uint64_t x528 = 425877LLU;
	uint64_t t87 = 101205549932764970LLU;

	t87 = ((x525/(x526&x527))*x528);

	if (t87 != 108598635LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x529 = UINT64_MAX;
	uint8_t x530 = UINT8_MAX;
	volatile uint64_t x532 = UINT64_MAX;
	uint64_t t88 = 1244LLU;

	t88 = ((x529/(x530&x531))*x532);

	if (t88 != 18085043209519168251LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x533 = 0U;
	int8_t x534 = -1;
	int64_t x535 = -348195591761406173LL;
	int64_t x536 = INT64_MIN;
	volatile int64_t t89 = -88600LL;

	t89 = ((x533/(x534&x535))*x536);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x537 = 1LLU;
	uint64_t x538 = UINT64_MAX;
	int64_t x539 = INT64_MAX;
	int16_t x540 = INT16_MIN;
	uint64_t t90 = 138548729944108717LLU;

	t90 = ((x537/(x538&x539))*x540);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x545 = INT8_MIN;
	volatile uint16_t x546 = UINT16_MAX;
	static int64_t x547 = -992173628423619674LL;
	volatile uint64_t t91 = 835215LLU;

	t91 = ((x545/(x546&x547))*x548);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x549 = INT8_MIN;
	int16_t x550 = -1;
	volatile uint32_t x552 = UINT32_MAX;

	t92 = ((x549/(x550&x551))*x552);

	if (t92 != 4U) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x553 = 5;
	int32_t x554 = -1731688;
	int32_t x555 = INT32_MIN;
	uint32_t x556 = UINT32_MAX;
	volatile uint32_t t93 = 1467251381U;

	t93 = ((x553/(x554&x555))*x556);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x557 = -1;
	static int32_t x558 = -1;
	static volatile int16_t x559 = 476;
	volatile int16_t x560 = -1;
	int32_t t94 = -4111169;

	t94 = ((x557/(x558&x559))*x560);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x561 = 210418U;
	volatile int16_t x563 = -1;
	static int64_t x564 = -1LL;
	static volatile int64_t t95 = -6722LL;

	t95 = ((x561/(x562&x563))*x564);

	if (t95 != -825LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x574 = INT64_MAX;
	volatile uint16_t x575 = UINT16_MAX;
	int16_t x576 = -1;
	int64_t t96 = 8415041459LL;

	t96 = ((x573/(x574&x575))*x576);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x577 = -6;
	uint16_t x578 = UINT16_MAX;
	volatile uint8_t x579 = UINT8_MAX;
	uint32_t x580 = 13U;
	volatile uint32_t t97 = 83U;

	t97 = ((x577/(x578&x579))*x580);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x581 = 3924463973445429LLU;
	int16_t x584 = INT16_MIN;
	uint64_t t98 = 9175372474691LLU;

	t98 = ((x581/(x582&x583))*x584);

	if (t98 != 12601433369988661248LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x586 = UINT8_MAX;
	uint64_t x587 = UINT64_MAX;
	static int32_t x588 = INT32_MIN;
	static uint64_t t99 = 51LLU;

	t99 = ((x585/(x586&x587))*x588);

	if (t99 != 9187201954739126272LLU) { NG(); } else { ; }
	
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

