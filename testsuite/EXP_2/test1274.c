#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = INT8_MAX;
volatile int8_t x8 = INT8_MIN;
volatile int32_t t1 = -7895322;
uint16_t x23 = UINT16_MAX;
int32_t x39 = INT32_MAX;
int64_t t5 = 1981344052037136876LL;
int32_t x62 = 9119096;
static uint32_t t10 = 154150273U;
int64_t x79 = -1LL;
int8_t x80 = -1;
int8_t x99 = -1;
volatile int64_t t15 = 65457LL;
uint32_t x109 = 3U;
uint16_t x110 = 11U;
int16_t x111 = -16;
int8_t x114 = -1;
uint64_t x139 = UINT64_MAX;
static int64_t x140 = 0LL;
int8_t x141 = 12;
volatile int16_t x143 = INT16_MIN;
static uint32_t x144 = 7739652U;
int16_t x146 = 1;
int32_t x151 = 8762362;
volatile int64_t t25 = INT64_MIN;
int16_t x187 = INT16_MAX;
int16_t x191 = INT16_MAX;
uint32_t x194 = 17284986U;
int8_t x195 = -19;
volatile uint16_t x209 = UINT16_MAX;
int8_t x216 = 1;
static uint64_t t36 = 1897763LLU;
volatile int32_t t37 = 14746;
uint16_t x228 = 2409U;
static uint8_t x238 = UINT8_MAX;
static uint64_t x265 = UINT64_MAX;
int8_t x266 = -14;
uint64_t x267 = 39LLU;
int8_t x290 = INT8_MAX;
uint32_t x298 = 3U;
static int8_t x299 = 6;
int32_t x320 = INT32_MIN;
uint16_t x321 = 4181U;
volatile int32_t t49 = -47;
static uint64_t t50 = 93169330508630LLU;
uint8_t x335 = UINT8_MAX;
volatile int16_t x351 = INT16_MIN;
int32_t x352 = -13;
uint16_t x354 = 21191U;
int64_t x358 = -209751612535982LL;
static uint64_t x359 = UINT64_MAX;
int64_t x370 = -741174LL;
volatile int32_t x383 = -1;
uint16_t x386 = 189U;
uint16_t x400 = 0U;
static volatile uint64_t x404 = 5LLU;
int32_t x436 = -7;
static volatile int32_t x450 = INT32_MAX;
int8_t x451 = 1;
static uint8_t x493 = 1U;
volatile uint32_t t70 = 1261054U;
uint8_t x505 = UINT8_MAX;
static int32_t t73 = 4;
volatile uint32_t t74 = 17988065U;
volatile int64_t t75 = -1188224960157LL;
volatile uint64_t x537 = 714478753162925LLU;
uint64_t x543 = UINT64_MAX;
uint32_t x569 = UINT32_MAX;
uint8_t x579 = 14U;
int64_t x602 = INT64_MIN;
int64_t t85 = -406762338403314653LL;
int8_t x618 = INT8_MIN;
volatile int16_t x637 = INT16_MAX;
int64_t x639 = INT64_MIN;
int64_t x644 = INT64_MIN;
volatile int8_t x647 = INT8_MIN;
static uint64_t t93 = 36753LLU;
int64_t x656 = INT64_MIN;
static int32_t x673 = INT32_MAX;
volatile uint64_t x674 = 104LLU;
volatile int32_t t99 = INT32_MIN;


void f0(void) {
	int16_t x2 = INT16_MIN;
	static int64_t x3 = INT64_MIN;
	volatile int16_t x4 = -1;
	volatile int32_t t0 = -258334;

	t0 = ((x1>>(x2==x3))^x4);

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 0;
	volatile uint16_t x6 = 189U;
	int32_t x7 = 5;

	t1 = ((x5>>(x6==x7))^x8);

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = UINT32_MAX;
	uint32_t x10 = 25U;
	int32_t x11 = INT32_MIN;
	static int32_t x12 = 445924;
	uint32_t t2 = 97185943U;

	t2 = ((x9>>(x10==x11))^x12);

	if (t2 != 4294521371U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 2059274U;
	uint64_t x18 = 1945087026451716LLU;
	volatile int16_t x19 = -4870;
	int16_t x20 = INT16_MIN;
	uint32_t t3 = 5U;

	t3 = ((x17>>(x18==x19))^x20);

	if (t3 != 4292930570U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = UINT8_MAX;
	int8_t x22 = -1;
	uint32_t x24 = UINT32_MAX;
	uint32_t t4 = 1521559U;

	t4 = ((x21>>(x22==x23))^x24);

	if (t4 != 4294967040U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x37 = 560752U;
	int8_t x38 = -1;
	int64_t x40 = 5590LL;

	t5 = ((x37>>(x38==x39))^x40);

	if (t5 != 564134LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x45 = 10U;
	static int8_t x46 = -33;
	static volatile uint8_t x47 = 3U;
	volatile int16_t x48 = INT16_MIN;
	int32_t t6 = -21139146;

	t6 = ((x45>>(x46==x47))^x48);

	if (t6 != -32758) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x49 = 328U;
	uint16_t x50 = 26375U;
	volatile int16_t x51 = -1;
	uint32_t x52 = UINT32_MAX;
	volatile uint32_t t7 = 18118913U;

	t7 = ((x49>>(x50==x51))^x52);

	if (t7 != 4294966967U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x53 = UINT16_MAX;
	uint16_t x54 = 1991U;
	volatile int32_t x55 = INT32_MAX;
	volatile uint64_t x56 = UINT64_MAX;
	static uint64_t t8 = 126361282LLU;

	t8 = ((x53>>(x54==x55))^x56);

	if (t8 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x57 = UINT8_MAX;
	int8_t x58 = INT8_MIN;
	uint8_t x59 = 0U;
	volatile uint8_t x60 = 105U;
	int32_t t9 = -1;

	t9 = ((x57>>(x58==x59))^x60);

	if (t9 != 150) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x61 = UINT32_MAX;
	static int16_t x63 = 11;
	volatile int8_t x64 = 3;

	t10 = ((x61>>(x62==x63))^x64);

	if (t10 != 4294967292U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x77 = 13U;
	int32_t x78 = -409023153;
	volatile int32_t t11 = -1;

	t11 = ((x77>>(x78==x79))^x80);

	if (t11 != -14) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x89 = 221548437LL;
	int64_t x90 = -1LL;
	uint64_t x91 = UINT64_MAX;
	int32_t x92 = INT32_MIN;
	static int64_t t12 = 1723367302LL;

	t12 = ((x89>>(x90==x91))^x92);

	if (t12 != -2036709430LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x93 = INT32_MAX;
	static int64_t x94 = 207863942785LL;
	volatile int8_t x95 = INT8_MIN;
	static int16_t x96 = -104;
	int32_t t13 = 47390;

	t13 = ((x93>>(x94==x95))^x96);

	if (t13 != -2147483545) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x97 = INT32_MAX;
	uint16_t x98 = 1U;
	static uint32_t x100 = 56U;
	static volatile uint32_t t14 = 2036U;

	t14 = ((x97>>(x98==x99))^x100);

	if (t14 != 2147483591U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x101 = INT64_MAX;
	static uint32_t x102 = 949369U;
	int8_t x103 = INT8_MAX;
	int16_t x104 = INT16_MAX;

	t15 = ((x101>>(x102==x103))^x104);

	if (t15 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x105 = 172U;
	static uint8_t x106 = 45U;
	static int8_t x107 = INT8_MIN;
	volatile int64_t x108 = 4LL;
	int64_t t16 = -2309255976977863046LL;

	t16 = ((x105>>(x106==x107))^x108);

	if (t16 != 168LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x112 = -2504844803LL;
	volatile int64_t t17 = 1LL;

	t17 = ((x109>>(x110==x111))^x112);

	if (t17 != -2504844802LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x113 = 1396016444LLU;
	volatile int16_t x115 = INT16_MAX;
	int32_t x116 = 88;
	volatile uint64_t t18 = 247533099493LLU;

	t18 = ((x113>>(x114==x115))^x116);

	if (t18 != 1396016484LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x117 = 4U;
	static uint16_t x118 = 466U;
	uint8_t x119 = UINT8_MAX;
	volatile int32_t x120 = -1;
	static volatile int32_t t19 = 7;

	t19 = ((x117>>(x118==x119))^x120);

	if (t19 != -5) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x125 = 2705U;
	uint64_t x126 = 0LLU;
	static volatile uint32_t x127 = 1040898U;
	uint16_t x128 = 2U;
	int32_t t20 = -922;

	t20 = ((x125>>(x126==x127))^x128);

	if (t20 != 2707) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x137 = 0;
	int8_t x138 = INT8_MAX;
	volatile int64_t t21 = 167255096316024LL;

	t21 = ((x137>>(x138==x139))^x140);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x142 = -1;
	static volatile uint32_t t22 = 28932919U;

	t22 = ((x141>>(x142==x143))^x144);

	if (t22 != 7739656U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x145 = 10U;
	volatile uint8_t x147 = UINT8_MAX;
	int64_t x148 = INT64_MAX;
	static int64_t t23 = -5805325LL;

	t23 = ((x145>>(x146==x147))^x148);

	if (t23 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x149 = 4U;
	static int8_t x150 = INT8_MIN;
	volatile uint64_t x152 = UINT64_MAX;
	uint64_t t24 = 140687LLU;

	t24 = ((x149>>(x150==x151))^x152);

	if (t24 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x153 = 0;
	int64_t x154 = INT64_MIN;
	uint16_t x155 = 195U;
	volatile int64_t x156 = INT64_MIN;

	t25 = ((x153>>(x154==x155))^x156);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x161 = 9111557056LL;
	uint8_t x162 = UINT8_MAX;
	uint16_t x163 = 1311U;
	uint16_t x164 = UINT16_MAX;
	int64_t t26 = -11122373367LL;

	t26 = ((x161>>(x162==x163))^x164);

	if (t26 != 9111579711LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x169 = INT16_MAX;
	uint32_t x170 = 181546073U;
	static uint64_t x171 = UINT64_MAX;
	uint16_t x172 = 21588U;
	volatile int32_t t27 = 0;

	t27 = ((x169>>(x170==x171))^x172);

	if (t27 != 11179) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x173 = 3667264878752126LL;
	static uint16_t x174 = 121U;
	static int32_t x175 = INT32_MAX;
	uint16_t x176 = 2576U;
	int64_t t28 = -128973612LL;

	t28 = ((x173>>(x174==x175))^x176);

	if (t28 != 3667264878754670LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x181 = 211739461LLU;
	uint64_t x182 = 3611619803039763LLU;
	int8_t x183 = INT8_MIN;
	uint8_t x184 = UINT8_MAX;
	static uint64_t t29 = 4534LLU;

	t29 = ((x181>>(x182==x183))^x184);

	if (t29 != 211739578LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x185 = INT32_MAX;
	int8_t x186 = INT8_MIN;
	volatile uint64_t x188 = UINT64_MAX;
	volatile uint64_t t30 = 1528443693319669592LLU;

	t30 = ((x185>>(x186==x187))^x188);

	if (t30 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x189 = 12800753845825LLU;
	uint8_t x190 = 3U;
	int64_t x192 = -697371773LL;
	uint64_t t31 = 9LLU;

	t31 = ((x189>>(x190==x191))^x192);

	if (t31 != 18446731273600513474LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x193 = 34689272U;
	int8_t x196 = 62;
	uint32_t t32 = 218U;

	t32 = ((x193>>(x194==x195))^x196);

	if (t32 != 34689222U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x197 = INT16_MAX;
	static uint64_t x198 = UINT64_MAX;
	int32_t x199 = -1;
	int16_t x200 = INT16_MIN;
	volatile int32_t t33 = -97004711;

	t33 = ((x197>>(x198==x199))^x200);

	if (t33 != -16385) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x210 = UINT16_MAX;
	volatile int16_t x211 = INT16_MIN;
	static uint16_t x212 = 13504U;
	volatile int32_t t34 = 0;

	t34 = ((x209>>(x210==x211))^x212);

	if (t34 != 52031) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x213 = 73U;
	int16_t x214 = -1;
	uint64_t x215 = 300246LLU;
	volatile int32_t t35 = 508;

	t35 = ((x213>>(x214==x215))^x216);

	if (t35 != 72) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x217 = 17524981;
	static uint32_t x218 = 3949655U;
	int16_t x219 = INT16_MAX;
	volatile uint64_t x220 = 83979786572996LLU;

	t36 = ((x217>>(x218==x219))^x220);

	if (t36 != 83979769461809LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x221 = UINT8_MAX;
	uint32_t x222 = 0U;
	int32_t x223 = INT32_MIN;
	int16_t x224 = INT16_MIN;

	t37 = ((x221>>(x222==x223))^x224);

	if (t37 != -32513) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x225 = 1;
	static uint8_t x226 = 28U;
	uint8_t x227 = 1U;
	int32_t t38 = -49600;

	t38 = ((x225>>(x226==x227))^x228);

	if (t38 != 2408) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x233 = 588001;
	volatile uint64_t x234 = UINT64_MAX;
	volatile uint32_t x235 = 56830U;
	int32_t x236 = 1;
	int32_t t39 = -191626;

	t39 = ((x233>>(x234==x235))^x236);

	if (t39 != 588000) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x237 = UINT32_MAX;
	uint16_t x239 = 16340U;
	int64_t x240 = INT64_MAX;
	static int64_t t40 = 4642165813LL;

	t40 = ((x237>>(x238==x239))^x240);

	if (t40 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x241 = 21745U;
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = INT8_MIN;
	uint64_t x244 = 38729LLU;
	volatile uint64_t t41 = 96701LLU;

	t41 = ((x241>>(x242==x243))^x244);

	if (t41 != 50104LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x261 = 732951321416LLU;
	static volatile int32_t x262 = INT32_MAX;
	static volatile int8_t x263 = INT8_MIN;
	uint8_t x264 = 0U;
	volatile uint64_t t42 = 1047415027980LLU;

	t42 = ((x261>>(x262==x263))^x264);

	if (t42 != 732951321416LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x268 = 51U;
	static uint64_t t43 = 5900836493903322LLU;

	t43 = ((x265>>(x266==x267))^x268);

	if (t43 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x289 = 21;
	static int64_t x291 = INT64_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t44 = -252669106;

	t44 = ((x289>>(x290==x291))^x292);

	if (t44 != -107) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x297 = 1323;
	uint64_t x300 = 215844987354543LLU;
	volatile uint64_t t45 = 196841LLU;

	t45 = ((x297>>(x298==x299))^x300);

	if (t45 != 215844987353220LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x309 = 20U;
	volatile int16_t x310 = 718;
	int64_t x311 = INT64_MAX;
	static int32_t x312 = -3917;
	static volatile int32_t t46 = 25;

	t46 = ((x309>>(x310==x311))^x312);

	if (t46 != -3929) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x313 = 301925U;
	int64_t x314 = -200032233458345543LL;
	uint16_t x315 = 3038U;
	int32_t x316 = INT32_MAX;
	uint32_t t47 = 714797876U;

	t47 = ((x313>>(x314==x315))^x316);

	if (t47 != 2147181722U) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x317 = INT32_MAX;
	int16_t x318 = INT16_MIN;
	int32_t x319 = -31835;
	volatile int32_t t48 = -2;

	t48 = ((x317>>(x318==x319))^x320);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x322 = INT16_MIN;
	int32_t x323 = INT32_MAX;
	uint8_t x324 = 7U;

	t49 = ((x321>>(x322==x323))^x324);

	if (t49 != 4178) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x329 = 157131708LLU;
	static uint16_t x330 = 2887U;
	int8_t x331 = -15;
	int16_t x332 = -146;

	t50 = ((x329>>(x330==x331))^x332);

	if (t50 != 18446744073552420050LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x333 = 0;
	uint16_t x334 = 50U;
	int64_t x336 = -770262685183470LL;
	volatile int64_t t51 = 42683LL;

	t51 = ((x333>>(x334==x335))^x336);

	if (t51 != -770262685183470LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x337 = 2585U;
	volatile int16_t x338 = -6816;
	int32_t x339 = 1727;
	int32_t x340 = 5304;
	volatile int32_t t52 = -9467;

	t52 = ((x337>>(x338==x339))^x340);

	if (t52 != 7841) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x341 = UINT32_MAX;
	volatile int32_t x342 = INT32_MIN;
	uint64_t x343 = 3422LLU;
	static int8_t x344 = INT8_MAX;
	static volatile uint32_t t53 = 68970639U;

	t53 = ((x341>>(x342==x343))^x344);

	if (t53 != 4294967168U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x345 = 69U;
	int8_t x346 = 3;
	static uint16_t x347 = UINT16_MAX;
	int32_t x348 = INT32_MIN;
	static int32_t t54 = 454985715;

	t54 = ((x345>>(x346==x347))^x348);

	if (t54 != -2147483579) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x349 = INT32_MAX;
	int64_t x350 = -1LL;
	volatile int32_t t55 = -6;

	t55 = ((x349>>(x350==x351))^x352);

	if (t55 != -2147483636) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x353 = INT16_MAX;
	int32_t x355 = INT32_MAX;
	volatile int16_t x356 = 525;
	static volatile int32_t t56 = -6;

	t56 = ((x353>>(x354==x355))^x356);

	if (t56 != 32242) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x357 = UINT32_MAX;
	int8_t x360 = INT8_MIN;
	static uint32_t t57 = 229725616U;

	t57 = ((x357>>(x358==x359))^x360);

	if (t57 != 127U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x365 = UINT32_MAX;
	int32_t x366 = INT32_MIN;
	int64_t x367 = -1LL;
	int64_t x368 = 1344908736973LL;
	volatile int64_t t58 = 77LL;

	t58 = ((x365>>(x366==x367))^x368);

	if (t58 != 1348035757618LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x369 = UINT64_MAX;
	int32_t x371 = INT32_MAX;
	int32_t x372 = -1;
	uint64_t t59 = 15691980361136LLU;

	t59 = ((x369>>(x370==x371))^x372);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x381 = INT16_MAX;
	uint16_t x382 = 1619U;
	int8_t x384 = 18;
	volatile int32_t t60 = -1345848;

	t60 = ((x381>>(x382==x383))^x384);

	if (t60 != 32749) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x385 = 50995290U;
	volatile int16_t x387 = INT16_MAX;
	static int64_t x388 = 1859848770304452LL;
	volatile int64_t t61 = -28726317323180LL;

	t61 = ((x385>>(x386==x387))^x388);

	if (t61 != 1859848786418078LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x393 = INT64_MAX;
	volatile int8_t x394 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	int8_t x396 = INT8_MIN;
	static int64_t t62 = -3515724120LL;

	t62 = ((x393>>(x394==x395))^x396);

	if (t62 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x397 = UINT8_MAX;
	static int16_t x398 = -1;
	volatile uint64_t x399 = 10949704LLU;
	int32_t t63 = -62;

	t63 = ((x397>>(x398==x399))^x400);

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x401 = 2;
	volatile int64_t x402 = INT64_MIN;
	static int64_t x403 = -1LL;
	uint64_t t64 = 5861952885979LLU;

	t64 = ((x401>>(x402==x403))^x404);

	if (t64 != 7LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x409 = 49;
	volatile uint64_t x410 = UINT64_MAX;
	int32_t x411 = INT32_MAX;
	int32_t x412 = -112;
	volatile int32_t t65 = -306055915;

	t65 = ((x409>>(x410==x411))^x412);

	if (t65 != -95) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x421 = INT16_MAX;
	int64_t x422 = 158997477983661LL;
	int16_t x423 = INT16_MIN;
	int32_t x424 = INT32_MIN;
	int32_t t66 = 15343;

	t66 = ((x421>>(x422==x423))^x424);

	if (t66 != -2147450881) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x433 = 17217U;
	uint64_t x434 = 253024716LLU;
	int32_t x435 = INT32_MIN;
	static int32_t t67 = 474;

	t67 = ((x433>>(x434==x435))^x436);

	if (t67 != -17224) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x449 = 612696723004LLU;
	int64_t x452 = INT64_MAX;
	static volatile uint64_t t68 = 2403796LLU;

	t68 = ((x449>>(x450==x451))^x452);

	if (t68 != 9223371424158052803LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x481 = UINT64_MAX;
	int8_t x482 = INT8_MIN;
	static uint8_t x483 = UINT8_MAX;
	int16_t x484 = -81;
	volatile uint64_t t69 = 288137936562138LLU;

	t69 = ((x481>>(x482==x483))^x484);

	if (t69 != 80LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x494 = INT32_MIN;
	int8_t x495 = INT8_MAX;
	static uint32_t x496 = 1579315863U;

	t70 = ((x493>>(x494==x495))^x496);

	if (t70 != 1579315862U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x497 = UINT64_MAX;
	static uint64_t x498 = 1LLU;
	uint32_t x499 = 50567724U;
	static uint64_t x500 = UINT64_MAX;
	static volatile uint64_t t71 = 2391773LLU;

	t71 = ((x497>>(x498==x499))^x500);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x506 = INT64_MAX;
	volatile uint8_t x507 = 1U;
	int32_t x508 = -1;
	volatile int32_t t72 = 792;

	t72 = ((x505>>(x506==x507))^x508);

	if (t72 != -256) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x521 = UINT8_MAX;
	uint16_t x522 = 27782U;
	volatile int16_t x523 = INT16_MIN;
	int32_t x524 = INT32_MIN;

	t73 = ((x521>>(x522==x523))^x524);

	if (t73 != -2147483393) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x525 = UINT32_MAX;
	int32_t x526 = -222652504;
	int16_t x527 = -1;
	volatile int16_t x528 = 71;

	t74 = ((x525>>(x526==x527))^x528);

	if (t74 != 4294967224U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x533 = 6861;
	uint32_t x534 = 1222059U;
	uint16_t x535 = 5U;
	int64_t x536 = 1LL;

	t75 = ((x533>>(x534==x535))^x536);

	if (t75 != 6860LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x538 = INT64_MIN;
	int64_t x539 = INT64_MIN;
	uint16_t x540 = 14608U;
	uint64_t t76 = 567LLU;

	t76 = ((x537>>(x538==x539))^x540);

	if (t76 != 357239376587334LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x541 = 9458U;
	int64_t x542 = -238335572639501678LL;
	uint8_t x544 = UINT8_MAX;
	volatile int32_t t77 = -199598;

	t77 = ((x541>>(x542==x543))^x544);

	if (t77 != 9229) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x549 = UINT64_MAX;
	int32_t x550 = INT32_MIN;
	static uint8_t x551 = UINT8_MAX;
	int16_t x552 = INT16_MAX;
	static volatile uint64_t t78 = 35409890LLU;

	t78 = ((x549>>(x550==x551))^x552);

	if (t78 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x553 = 0U;
	uint8_t x554 = UINT8_MAX;
	int32_t x555 = 26;
	static uint32_t x556 = 0U;
	volatile uint32_t t79 = 29U;

	t79 = ((x553>>(x554==x555))^x556);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x561 = UINT8_MAX;
	int32_t x562 = INT32_MIN;
	static int32_t x563 = INT32_MAX;
	static int8_t x564 = 1;
	int32_t t80 = 4;

	t80 = ((x561>>(x562==x563))^x564);

	if (t80 != 254) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x565 = INT64_MAX;
	int64_t x566 = -1LL;
	int8_t x567 = INT8_MAX;
	int8_t x568 = INT8_MAX;
	volatile int64_t t81 = 22LL;

	t81 = ((x565>>(x566==x567))^x568);

	if (t81 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x570 = -1;
	uint64_t x571 = 14181973067LLU;
	int32_t x572 = INT32_MAX;
	uint32_t t82 = 1817U;

	t82 = ((x569>>(x570==x571))^x572);

	if (t82 != 2147483648U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x577 = 29538U;
	int32_t x578 = -1;
	static int16_t x580 = -15713;
	volatile int32_t t83 = -44;

	t83 = ((x577>>(x578==x579))^x580);

	if (t83 != -19971) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x593 = INT16_MAX;
	uint16_t x594 = UINT16_MAX;
	uint64_t x595 = 0LLU;
	uint16_t x596 = UINT16_MAX;
	volatile int32_t t84 = -1281112;

	t84 = ((x593>>(x594==x595))^x596);

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x601 = 490249502LL;
	uint32_t x603 = UINT32_MAX;
	int16_t x604 = INT16_MAX;

	t85 = ((x601>>(x602==x603))^x604);

	if (t85 != 490267361LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x605 = INT8_MAX;
	int32_t x606 = INT32_MIN;
	int8_t x607 = INT8_MIN;
	uint64_t x608 = 24513619LLU;
	static uint64_t t86 = 5LLU;

	t86 = ((x605>>(x606==x607))^x608);

	if (t86 != 24513580LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x617 = 14512388LLU;
	uint64_t x619 = 864302312146LLU;
	int8_t x620 = 55;
	uint64_t t87 = 5096LLU;

	t87 = ((x617>>(x618==x619))^x620);

	if (t87 != 14512435LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x629 = 25427674;
	int32_t x630 = 250367367;
	uint16_t x631 = 740U;
	uint32_t x632 = 85U;
	uint32_t t88 = 6199U;

	t88 = ((x629>>(x630==x631))^x632);

	if (t88 != 25427599U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x633 = 1496U;
	volatile int8_t x634 = -1;
	int32_t x635 = -1;
	static int8_t x636 = -2;
	uint32_t t89 = 52U;

	t89 = ((x633>>(x634==x635))^x636);

	if (t89 != 4294966546U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x638 = INT8_MIN;
	volatile uint32_t x640 = 7050U;
	volatile uint32_t t90 = 986484464U;

	t90 = ((x637>>(x638==x639))^x640);

	if (t90 != 25717U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x641 = UINT32_MAX;
	static uint32_t x642 = 179915292U;
	uint16_t x643 = 137U;
	volatile int64_t t91 = -32109586465LL;

	t91 = ((x641>>(x642==x643))^x644);

	if (t91 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x645 = INT32_MAX;
	int64_t x646 = -1LL;
	int16_t x648 = INT16_MIN;
	int32_t t92 = -261144493;

	t92 = ((x645>>(x646==x647))^x648);

	if (t92 != -2147450881) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x649 = 3;
	static uint8_t x650 = 14U;
	uint64_t x651 = 6465593778917LLU;
	uint64_t x652 = 1276033LLU;

	t93 = ((x649>>(x650==x651))^x652);

	if (t93 != 1276034LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x653 = UINT8_MAX;
	int8_t x654 = 1;
	int64_t x655 = -1LL;
	int64_t t94 = -339LL;

	t94 = ((x653>>(x654==x655))^x656);

	if (t94 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x657 = 10;
	volatile int16_t x658 = -1;
	volatile uint8_t x659 = 6U;
	static int64_t x660 = -1LL;
	int64_t t95 = 1270530315084101509LL;

	t95 = ((x657>>(x658==x659))^x660);

	if (t95 != -11LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x661 = UINT8_MAX;
	uint64_t x662 = 53482LLU;
	int32_t x663 = 0;
	int64_t x664 = -65013387208766426LL;
	int64_t t96 = -21198292LL;

	t96 = ((x661>>(x662==x663))^x664);

	if (t96 != -65013387208766247LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x675 = 96U;
	int8_t x676 = 1;
	int32_t t97 = 124120;

	t97 = ((x673>>(x674==x675))^x676);

	if (t97 != 2147483646) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x689 = 395;
	uint16_t x690 = 3U;
	volatile int16_t x691 = -2;
	uint16_t x692 = 120U;
	int32_t t98 = -855561524;

	t98 = ((x689>>(x690==x691))^x692);

	if (t98 != 499) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x697 = INT32_MAX;
	static uint16_t x698 = 64U;
	int8_t x699 = 2;
	int8_t x700 = -1;

	t99 = ((x697>>(x698==x699))^x700);

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

