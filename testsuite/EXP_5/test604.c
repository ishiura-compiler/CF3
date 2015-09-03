#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t t1 = 0LLU;
static volatile int32_t x33 = 4011;
static int32_t x39 = -1;
int32_t x44 = 54135599;
int16_t x59 = 12;
volatile uint32_t t7 = 0U;
int32_t t8 = 199;
int8_t x75 = -1;
volatile uint64_t x101 = UINT64_MAX;
uint64_t x103 = UINT64_MAX;
int32_t x105 = 4133782;
uint8_t x113 = 8U;
static int64_t x122 = 440923594682642LL;
int64_t x130 = INT64_MIN;
int16_t x174 = -15;
uint64_t x177 = 38631LLU;
uint64_t x178 = 910918712776049LLU;
int64_t x179 = INT64_MAX;
uint64_t t22 = 108130781490534221LLU;
volatile uint64_t x185 = 577442061269336LLU;
uint64_t t23 = 3860750LLU;
uint32_t x206 = UINT32_MAX;
int8_t x220 = -3;
int16_t x223 = -7139;
int8_t x224 = INT8_MIN;
volatile int32_t t27 = 944695710;
int64_t x225 = INT64_MAX;
volatile int32_t x235 = 9577433;
int32_t x251 = 223626936;
uint32_t x252 = 39093411U;
int32_t x257 = INT32_MAX;
uint64_t x269 = 13552307LLU;
volatile uint64_t x273 = 8737732936432610789LLU;
volatile int32_t x283 = INT32_MIN;
uint8_t x294 = 59U;
uint64_t x298 = UINT64_MAX;
uint32_t x327 = 5915U;
uint64_t t45 = 4850266432521860LLU;
int8_t x351 = INT8_MIN;
int32_t x356 = INT32_MAX;
uint64_t t48 = 0LLU;
uint32_t x357 = 8477U;
static int16_t x360 = INT16_MAX;
volatile uint32_t t49 = 283850U;
uint16_t x364 = 56U;
int32_t x365 = 196076;
int8_t x368 = INT8_MIN;
uint16_t x397 = UINT16_MAX;
uint32_t x398 = 44436U;
static volatile int64_t x402 = -1LL;
volatile uint32_t t56 = 2U;
uint64_t x406 = 849414519269LLU;
uint64_t t57 = UINT64_MAX;
static int8_t x417 = 30;
uint64_t x418 = 19LLU;
volatile int32_t t59 = -58;
int32_t x432 = 7;
int16_t x437 = INT16_MAX;
uint64_t x440 = 359126682653091202LLU;
uint8_t x441 = 98U;
volatile int64_t x444 = INT64_MAX;
int16_t x458 = INT16_MIN;
int32_t t65 = 7;
volatile int8_t x467 = INT8_MAX;
uint8_t x468 = UINT8_MAX;
uint32_t x481 = UINT32_MAX;
static int32_t x482 = INT32_MIN;
uint32_t x501 = 6327108U;
int16_t x502 = 1238;
uint16_t x514 = 1233U;
static volatile int32_t x523 = INT32_MIN;
static volatile int32_t x535 = INT32_MIN;
int32_t t76 = -501337046;
static volatile int32_t t78 = -495692;
uint32_t x561 = 786U;
int32_t x562 = -1218;
uint16_t x563 = UINT16_MAX;
uint16_t x572 = 1984U;
int32_t t80 = -2293;
uint64_t x589 = 3387110913LLU;
static uint32_t x591 = 32820U;
static volatile int16_t x596 = INT16_MIN;
volatile int32_t t82 = 54;
int8_t x606 = INT8_MIN;
uint32_t x617 = 72889U;
uint32_t x619 = UINT32_MAX;
uint32_t t87 = 175U;
uint32_t x621 = 3883492U;
int8_t x622 = INT8_MIN;
static int16_t x623 = -1;
volatile int32_t x629 = 14;
int8_t x638 = 5;
uint64_t x650 = UINT64_MAX;
int16_t x659 = 3;
volatile uint16_t x662 = UINT16_MAX;
uint32_t x673 = UINT32_MAX;
uint32_t x676 = UINT32_MAX;
static uint32_t t94 = UINT32_MAX;
int64_t t95 = -1621483646330LL;
volatile int16_t x687 = INT16_MIN;
static uint64_t x688 = 7240667829163LLU;
uint8_t x714 = 1U;


void f0(void) {
	volatile uint64_t x1 = 66546996160LLU;
	int32_t x2 = INT32_MIN;
	uint16_t x3 = 7857U;
	int16_t x4 = INT16_MIN;
	uint64_t t0 = 3886181923413880LLU;

	t0 = (x1<<((x2/x3)==x4));

	if (t0 != 66546996160LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 414LLU;
	uint16_t x6 = 0U;
	int16_t x7 = INT16_MIN;
	int16_t x8 = -1;

	t1 = (x5<<((x6/x7)==x8));

	if (t1 != 414LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x25 = 12LLU;
	uint64_t x26 = UINT64_MAX;
	uint32_t x27 = 1051U;
	static volatile uint32_t x28 = UINT32_MAX;
	uint64_t t2 = 6LLU;

	t2 = (x25<<((x26/x27)==x28));

	if (t2 != 12LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x29 = 63U;
	uint32_t x30 = UINT32_MAX;
	static int64_t x31 = INT64_MIN;
	int32_t x32 = INT32_MIN;
	uint32_t t3 = 1685208U;

	t3 = (x29<<((x30/x31)==x32));

	if (t3 != 63U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x34 = 0;
	static volatile int8_t x35 = INT8_MIN;
	volatile int64_t x36 = -88LL;
	int32_t t4 = -1759357;

	t4 = (x33<<((x34/x35)==x36));

	if (t4 != 4011) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = INT16_MAX;
	static uint16_t x38 = 58U;
	uint8_t x40 = 51U;
	int32_t t5 = -70578325;

	t5 = (x37<<((x38/x39)==x40));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x41 = 7883854U;
	static int16_t x42 = -1;
	uint16_t x43 = 343U;
	uint32_t t6 = 15956189U;

	t6 = (x41<<((x42/x43)==x44));

	if (t6 != 7883854U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x57 = 3945U;
	volatile int16_t x58 = INT16_MIN;
	static int8_t x60 = INT8_MAX;

	t7 = (x57<<((x58/x59)==x60));

	if (t7 != 3945U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x65 = UINT8_MAX;
	int32_t x66 = INT32_MAX;
	int32_t x67 = -1;
	int32_t x68 = 10703;

	t8 = (x65<<((x66/x67)==x68));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x73 = 6338;
	int8_t x74 = INT8_MIN;
	volatile int8_t x76 = -11;
	int32_t t9 = -1250520;

	t9 = (x73<<((x74/x75)==x76));

	if (t9 != 6338) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x81 = UINT32_MAX;
	volatile int32_t x82 = INT32_MIN;
	static uint16_t x83 = 415U;
	static volatile int32_t x84 = -1;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = (x81<<((x82/x83)==x84));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x93 = INT32_MAX;
	int32_t x94 = -1486;
	static int32_t x95 = INT32_MIN;
	static uint8_t x96 = 6U;
	volatile int32_t t11 = INT32_MAX;

	t11 = (x93<<((x94/x95)==x96));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x102 = -131904022492LL;
	volatile uint8_t x104 = 1U;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (x101<<((x102/x103)==x104));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x106 = INT32_MIN;
	int16_t x107 = 916;
	uint8_t x108 = 18U;
	volatile int32_t t13 = -648215713;

	t13 = (x105<<((x106/x107)==x108));

	if (t13 != 4133782) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x114 = 38;
	int16_t x115 = INT16_MIN;
	int8_t x116 = INT8_MIN;
	volatile int32_t t14 = 36134;

	t14 = (x113<<((x114/x115)==x116));

	if (t14 != 8) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x121 = UINT8_MAX;
	uint16_t x123 = UINT16_MAX;
	uint16_t x124 = 5U;
	volatile int32_t t15 = 517110;

	t15 = (x121<<((x122/x123)==x124));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x129 = 30405U;
	static uint32_t x131 = 1249U;
	int8_t x132 = INT8_MAX;
	static volatile int32_t t16 = -51617137;

	t16 = (x129<<((x130/x131)==x132));

	if (t16 != 30405) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x133 = 0U;
	static uint32_t x134 = 1283965U;
	int16_t x135 = INT16_MIN;
	static uint64_t x136 = 1LLU;
	volatile uint32_t t17 = 686745U;

	t17 = (x133<<((x134/x135)==x136));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x153 = INT64_MAX;
	int64_t x154 = INT64_MAX;
	int8_t x155 = INT8_MAX;
	volatile uint32_t x156 = UINT32_MAX;
	volatile int64_t t18 = INT64_MAX;

	t18 = (x153<<((x154/x155)==x156));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x157 = 840534456854620966LLU;
	uint8_t x158 = UINT8_MAX;
	static int64_t x159 = INT64_MIN;
	static int16_t x160 = -1;
	static volatile uint64_t t19 = 40653745564LLU;

	t19 = (x157<<((x158/x159)==x160));

	if (t19 != 840534456854620966LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x165 = INT32_MAX;
	static volatile int64_t x166 = -92680382LL;
	volatile uint16_t x167 = 14619U;
	int8_t x168 = INT8_MIN;
	volatile int32_t t20 = INT32_MAX;

	t20 = (x165<<((x166/x167)==x168));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x173 = UINT16_MAX;
	int64_t x175 = -279700067777771560LL;
	int16_t x176 = INT16_MIN;
	volatile int32_t t21 = -7849581;

	t21 = (x173<<((x174/x175)==x176));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x180 = INT64_MAX;

	t22 = (x177<<((x178/x179)==x180));

	if (t22 != 38631LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x186 = -1;
	volatile uint16_t x187 = UINT16_MAX;
	volatile uint32_t x188 = 35U;

	t23 = (x185<<((x186/x187)==x188));

	if (t23 != 577442061269336LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x205 = INT64_MAX;
	int64_t x207 = INT64_MIN;
	int64_t x208 = INT64_MAX;
	int64_t t24 = INT64_MAX;

	t24 = (x205<<((x206/x207)==x208));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x209 = UINT16_MAX;
	uint32_t x210 = 3U;
	static volatile int32_t x211 = -1;
	volatile int8_t x212 = INT8_MAX;
	volatile int32_t t25 = 272707;

	t25 = (x209<<((x210/x211)==x212));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x217 = INT32_MAX;
	volatile int8_t x218 = INT8_MAX;
	uint16_t x219 = 3U;
	volatile int32_t t26 = INT32_MAX;

	t26 = (x217<<((x218/x219)==x220));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x221 = UINT8_MAX;
	volatile int16_t x222 = 5170;

	t27 = (x221<<((x222/x223)==x224));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x226 = 64619426U;
	int16_t x227 = INT16_MIN;
	static int64_t x228 = INT64_MIN;
	volatile int64_t t28 = INT64_MAX;

	t28 = (x225<<((x226/x227)==x228));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x229 = INT16_MAX;
	static volatile int32_t x230 = INT32_MAX;
	int64_t x231 = 39170999771487214LL;
	int16_t x232 = INT16_MIN;
	int32_t t29 = -77183709;

	t29 = (x229<<((x230/x231)==x232));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x233 = UINT32_MAX;
	uint64_t x234 = 46950003778678LLU;
	int16_t x236 = 2;
	uint32_t t30 = UINT32_MAX;

	t30 = (x233<<((x234/x235)==x236));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x241 = 7178;
	int64_t x242 = 52LL;
	volatile int8_t x243 = -1;
	uint16_t x244 = UINT16_MAX;
	int32_t t31 = -18729;

	t31 = (x241<<((x242/x243)==x244));

	if (t31 != 7178) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x245 = UINT8_MAX;
	uint8_t x246 = UINT8_MAX;
	volatile int32_t x247 = -180859484;
	int8_t x248 = -1;
	static volatile int32_t t32 = 11820;

	t32 = (x245<<((x246/x247)==x248));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x249 = INT16_MAX;
	static uint32_t x250 = 10U;
	volatile int32_t t33 = 195;

	t33 = (x249<<((x250/x251)==x252));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x253 = 1786924U;
	volatile int8_t x254 = INT8_MIN;
	int16_t x255 = -1;
	volatile uint64_t x256 = 24LLU;
	static uint32_t t34 = 16U;

	t34 = (x253<<((x254/x255)==x256));

	if (t34 != 1786924U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x258 = 2U;
	static volatile uint8_t x259 = 1U;
	uint64_t x260 = 55LLU;
	volatile int32_t t35 = INT32_MAX;

	t35 = (x257<<((x258/x259)==x260));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x261 = INT64_MAX;
	int32_t x262 = -97560;
	int8_t x263 = 1;
	int16_t x264 = INT16_MIN;
	int64_t t36 = INT64_MAX;

	t36 = (x261<<((x262/x263)==x264));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x270 = INT32_MIN;
	int8_t x271 = INT8_MIN;
	volatile int32_t x272 = 6321;
	volatile uint64_t t37 = 1LLU;

	t37 = (x269<<((x270/x271)==x272));

	if (t37 != 13552307LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x274 = -1;
	int32_t x275 = INT32_MIN;
	volatile uint16_t x276 = 298U;
	static uint64_t t38 = 531436062721596LLU;

	t38 = (x273<<((x274/x275)==x276));

	if (t38 != 8737732936432610789LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x281 = 10662398U;
	int32_t x282 = INT32_MIN;
	int32_t x284 = INT32_MIN;
	uint32_t t39 = 90039U;

	t39 = (x281<<((x282/x283)==x284));

	if (t39 != 10662398U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x293 = INT64_MAX;
	uint32_t x295 = 2019503129U;
	int8_t x296 = -3;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x293<<((x294/x295)==x296));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x297 = 51U;
	int16_t x299 = INT16_MIN;
	int64_t x300 = INT64_MAX;
	static int32_t t41 = 1;

	t41 = (x297<<((x298/x299)==x300));

	if (t41 != 51) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x305 = 53U;
	int16_t x306 = INT16_MIN;
	static volatile int8_t x307 = INT8_MIN;
	uint16_t x308 = 403U;
	static int32_t t42 = 0;

	t42 = (x305<<((x306/x307)==x308));

	if (t42 != 53) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x313 = 922282081;
	int32_t x314 = 64707282;
	int32_t x315 = INT32_MIN;
	int32_t x316 = INT32_MAX;
	static int32_t t43 = -724;

	t43 = (x313<<((x314/x315)==x316));

	if (t43 != 922282081) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x321 = 2U;
	int16_t x322 = -1;
	uint64_t x323 = 12011LLU;
	uint32_t x324 = 1U;
	static int32_t t44 = 1060;

	t44 = (x321<<((x322/x323)==x324));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x325 = 132233279LLU;
	int16_t x326 = INT16_MAX;
	static int16_t x328 = INT16_MIN;

	t45 = (x325<<((x326/x327)==x328));

	if (t45 != 132233279LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x337 = 1711U;
	volatile int16_t x338 = INT16_MIN;
	static uint64_t x339 = 1076833910847LLU;
	static int16_t x340 = 977;
	static int32_t t46 = -5904;

	t46 = (x337<<((x338/x339)==x340));

	if (t46 != 1711) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x349 = 3556;
	int64_t x350 = -1LL;
	int64_t x352 = INT64_MAX;
	volatile int32_t t47 = -5392625;

	t47 = (x349<<((x350/x351)==x352));

	if (t47 != 3556) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x353 = 232LLU;
	volatile uint16_t x354 = 2U;
	int64_t x355 = INT64_MIN;

	t48 = (x353<<((x354/x355)==x356));

	if (t48 != 232LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x358 = 16449U;
	static uint16_t x359 = 136U;

	t49 = (x357<<((x358/x359)==x360));

	if (t49 != 8477U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x361 = UINT8_MAX;
	uint32_t x362 = UINT32_MAX;
	int32_t x363 = 273569229;
	static int32_t t50 = 801654380;

	t50 = (x361<<((x362/x363)==x364));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x366 = UINT8_MAX;
	volatile int64_t x367 = -1LL;
	static int32_t t51 = 15254;

	t51 = (x365<<((x366/x367)==x368));

	if (t51 != 196076) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x369 = 10612326343266LLU;
	int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MIN;
	uint16_t x372 = 7U;
	volatile uint64_t t52 = 4900237811211LLU;

	t52 = (x369<<((x370/x371)==x372));

	if (t52 != 10612326343266LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x377 = 65U;
	int8_t x378 = INT8_MAX;
	int32_t x379 = INT32_MIN;
	volatile uint64_t x380 = 599354937898LLU;
	volatile int32_t t53 = -300573333;

	t53 = (x377<<((x378/x379)==x380));

	if (t53 != 65) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x385 = 428338LLU;
	static uint8_t x386 = UINT8_MAX;
	volatile int8_t x387 = INT8_MIN;
	int64_t x388 = -63909492122811400LL;
	uint64_t t54 = 441861962233647103LLU;

	t54 = (x385<<((x386/x387)==x388));

	if (t54 != 428338LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x399 = 795;
	int16_t x400 = INT16_MAX;
	volatile int32_t t55 = 471;

	t55 = (x397<<((x398/x399)==x400));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x401 = 3U;
	static uint32_t x403 = 1042903746U;
	int32_t x404 = 9182;

	t56 = (x401<<((x402/x403)==x404));

	if (t56 != 3U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x405 = UINT64_MAX;
	int8_t x407 = INT8_MIN;
	uint16_t x408 = UINT16_MAX;

	t57 = (x405<<((x406/x407)==x408));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x413 = INT8_MAX;
	volatile uint32_t x414 = UINT32_MAX;
	int64_t x415 = 39593114409278LL;
	uint8_t x416 = 97U;
	static int32_t t58 = -30;

	t58 = (x413<<((x414/x415)==x416));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x419 = 1050728908LL;
	uint32_t x420 = UINT32_MAX;

	t59 = (x417<<((x418/x419)==x420));

	if (t59 != 30) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x429 = 0LL;
	uint16_t x430 = 1U;
	int32_t x431 = 217;
	volatile int64_t t60 = 43867LL;

	t60 = (x429<<((x430/x431)==x432));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x433 = INT64_MAX;
	static uint32_t x434 = UINT32_MAX;
	int64_t x435 = INT64_MIN;
	int64_t x436 = INT64_MIN;
	volatile int64_t t61 = INT64_MAX;

	t61 = (x433<<((x434/x435)==x436));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x438 = INT64_MIN;
	uint64_t x439 = UINT64_MAX;
	volatile int32_t t62 = -6284;

	t62 = (x437<<((x438/x439)==x440));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x442 = UINT64_MAX;
	volatile uint32_t x443 = 62727517U;
	int32_t t63 = 578226593;

	t63 = (x441<<((x442/x443)==x444));

	if (t63 != 98) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x445 = 33U;
	volatile int16_t x446 = INT16_MAX;
	static int8_t x447 = -3;
	volatile int8_t x448 = -26;
	uint32_t t64 = 30U;

	t64 = (x445<<((x446/x447)==x448));

	if (t64 != 33U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x457 = 1;
	uint16_t x459 = UINT16_MAX;
	int8_t x460 = -2;

	t65 = (x457<<((x458/x459)==x460));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x461 = 8U;
	static int16_t x462 = 29;
	static uint8_t x463 = UINT8_MAX;
	int16_t x464 = -1;
	volatile int32_t t66 = 470924;

	t66 = (x461<<((x462/x463)==x464));

	if (t66 != 8) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x465 = INT8_MAX;
	volatile int64_t x466 = 921160LL;
	int32_t t67 = 31137;

	t67 = (x465<<((x466/x467)==x468));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x473 = 21U;
	uint16_t x474 = UINT16_MAX;
	int16_t x475 = INT16_MIN;
	uint32_t x476 = 33555U;
	volatile int32_t t68 = 2396;

	t68 = (x473<<((x474/x475)==x476));

	if (t68 != 21) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x483 = INT8_MAX;
	static int16_t x484 = INT16_MAX;
	uint32_t t69 = UINT32_MAX;

	t69 = (x481<<((x482/x483)==x484));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x503 = INT32_MIN;
	int32_t x504 = -1;
	volatile uint32_t t70 = 874180U;

	t70 = (x501<<((x502/x503)==x504));

	if (t70 != 6327108U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x505 = INT16_MAX;
	static int16_t x506 = -342;
	uint16_t x507 = 24U;
	int32_t x508 = -1;
	volatile int32_t t71 = 14865172;

	t71 = (x505<<((x506/x507)==x508));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x513 = UINT8_MAX;
	int64_t x515 = -1LL;
	int16_t x516 = INT16_MIN;
	static volatile int32_t t72 = 98;

	t72 = (x513<<((x514/x515)==x516));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x517 = INT32_MAX;
	static int32_t x518 = INT32_MAX;
	uint64_t x519 = UINT64_MAX;
	int8_t x520 = -1;
	static int32_t t73 = INT32_MAX;

	t73 = (x517<<((x518/x519)==x520));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x521 = INT8_MAX;
	static volatile int8_t x522 = INT8_MIN;
	int64_t x524 = -3667410248090183LL;
	int32_t t74 = 20631;

	t74 = (x521<<((x522/x523)==x524));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x529 = 18U;
	uint64_t x530 = 1295025675LLU;
	uint8_t x531 = UINT8_MAX;
	volatile int8_t x532 = INT8_MAX;
	int32_t t75 = -611499070;

	t75 = (x529<<((x530/x531)==x532));

	if (t75 != 18) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x533 = UINT16_MAX;
	int64_t x534 = -1LL;
	int32_t x536 = INT32_MAX;

	t76 = (x533<<((x534/x535)==x536));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x541 = 2LLU;
	volatile int8_t x542 = INT8_MAX;
	uint32_t x543 = UINT32_MAX;
	uint32_t x544 = 5156U;
	volatile uint64_t t77 = 1LLU;

	t77 = (x541<<((x542/x543)==x544));

	if (t77 != 2LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x545 = 5;
	int32_t x546 = -1;
	static int32_t x547 = INT32_MAX;
	static uint64_t x548 = UINT64_MAX;

	t78 = (x545<<((x546/x547)==x548));

	if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x564 = -1;
	volatile uint32_t t79 = 16187774U;

	t79 = (x561<<((x562/x563)==x564));

	if (t79 != 786U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x569 = 0;
	uint64_t x570 = UINT64_MAX;
	int16_t x571 = -1;

	t80 = (x569<<((x570/x571)==x572));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x590 = -28;
	uint8_t x592 = UINT8_MAX;
	static uint64_t t81 = 111771749758623LLU;

	t81 = (x589<<((x590/x591)==x592));

	if (t81 != 3387110913LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x593 = 29279U;
	uint8_t x594 = 23U;
	int16_t x595 = INT16_MAX;

	t82 = (x593<<((x594/x595)==x596));

	if (t82 != 29279) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x597 = 11U;
	int16_t x598 = 967;
	int16_t x599 = -1;
	int64_t x600 = INT64_MIN;
	volatile int32_t t83 = 52186784;

	t83 = (x597<<((x598/x599)==x600));

	if (t83 != 11) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x601 = INT64_MAX;
	static int16_t x602 = INT16_MIN;
	int64_t x603 = -1LL;
	int64_t x604 = INT64_MAX;
	static volatile int64_t t84 = INT64_MAX;

	t84 = (x601<<((x602/x603)==x604));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x605 = INT8_MAX;
	int8_t x607 = INT8_MIN;
	int32_t x608 = INT32_MAX;
	volatile int32_t t85 = 29;

	t85 = (x605<<((x606/x607)==x608));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x609 = 2206U;
	uint8_t x610 = UINT8_MAX;
	volatile int32_t x611 = INT32_MAX;
	static int32_t x612 = INT32_MAX;
	int32_t t86 = 2506572;

	t86 = (x609<<((x610/x611)==x612));

	if (t86 != 2206) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x618 = -1;
	static int16_t x620 = INT16_MIN;

	t87 = (x617<<((x618/x619)==x620));

	if (t87 != 72889U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x624 = INT16_MIN;
	uint32_t t88 = 189605819U;

	t88 = (x621<<((x622/x623)==x624));

	if (t88 != 3883492U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x630 = -1LL;
	int16_t x631 = -1;
	volatile int32_t x632 = INT32_MIN;
	volatile int32_t t89 = 772628509;

	t89 = (x629<<((x630/x631)==x632));

	if (t89 != 14) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x637 = 55U;
	static volatile uint64_t x639 = UINT64_MAX;
	int64_t x640 = -1LL;
	uint32_t t90 = 1U;

	t90 = (x637<<((x638/x639)==x640));

	if (t90 != 55U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x649 = 0;
	static uint64_t x651 = UINT64_MAX;
	uint8_t x652 = 0U;
	volatile int32_t t91 = 0;

	t91 = (x649<<((x650/x651)==x652));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x657 = 6337U;
	static uint8_t x658 = 11U;
	static int8_t x660 = INT8_MAX;
	int32_t t92 = 132177;

	t92 = (x657<<((x658/x659)==x660));

	if (t92 != 6337) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x661 = 7139940584372606LLU;
	uint32_t x663 = 5104397U;
	static volatile int16_t x664 = -1;
	volatile uint64_t t93 = 2282LLU;

	t93 = (x661<<((x662/x663)==x664));

	if (t93 != 7139940584372606LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x674 = INT64_MAX;
	uint32_t x675 = 9585910U;

	t94 = (x673<<((x674/x675)==x676));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x681 = 7LL;
	uint32_t x682 = UINT32_MAX;
	int8_t x683 = -56;
	int16_t x684 = 11246;

	t95 = (x681<<((x682/x683)==x684));

	if (t95 != 7LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x685 = INT32_MAX;
	int16_t x686 = INT16_MIN;
	volatile int32_t t96 = INT32_MAX;

	t96 = (x685<<((x686/x687)==x688));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x701 = 43U;
	int8_t x702 = INT8_MIN;
	int32_t x703 = -1;
	uint32_t x704 = 542626778U;
	volatile uint32_t t97 = 86451U;

	t97 = (x701<<((x702/x703)==x704));

	if (t97 != 43U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x709 = 265932LL;
	uint16_t x710 = UINT16_MAX;
	volatile int64_t x711 = -17090285367968140LL;
	int32_t x712 = INT32_MAX;
	volatile int64_t t98 = 1231054349LL;

	t98 = (x709<<((x710/x711)==x712));

	if (t98 != 265932LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x713 = 48;
	volatile int8_t x715 = INT8_MIN;
	int32_t x716 = INT32_MIN;
	volatile int32_t t99 = 235748837;

	t99 = (x713<<((x714/x715)==x716));

	if (t99 != 48) { NG(); } else { ; }
	
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

