#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x11 = 379U;
volatile int64_t t1 = 4464LL;
static int8_t x28 = -1;
volatile int32_t t2 = 41270617;
volatile int32_t x29 = INT32_MIN;
uint8_t x41 = UINT8_MAX;
int8_t x44 = 62;
uint8_t x46 = 1U;
volatile uint8_t x48 = UINT8_MAX;
volatile int8_t x52 = INT8_MIN;
uint32_t x66 = 447578726U;
int8_t x70 = INT8_MAX;
volatile int8_t x78 = -1;
volatile uint32_t t11 = 7U;
uint64_t x82 = UINT64_MAX;
int32_t x85 = INT32_MAX;
int64_t x90 = 2LL;
int16_t x94 = INT16_MAX;
static volatile int8_t x110 = -61;
volatile int64_t t16 = -94981LL;
uint8_t x118 = 1U;
volatile uint8_t x120 = UINT8_MAX;
int16_t x128 = -1;
int64_t x136 = -19857430LL;
int16_t x141 = -43;
int64_t x145 = 284612729979LL;
int8_t x148 = INT8_MAX;
volatile int8_t x167 = -3;
int64_t x172 = -372194637648423LL;
static int16_t x174 = INT16_MIN;
int64_t t24 = 2445779345494LL;
static int8_t x187 = 9;
static int32_t x208 = INT32_MIN;
uint8_t x212 = 22U;
uint64_t x213 = 79799607LLU;
static uint16_t x214 = 1550U;
static uint64_t x216 = 13LLU;
int32_t x220 = INT32_MIN;
uint8_t x242 = UINT8_MAX;
uint16_t x243 = 47U;
uint32_t x244 = UINT32_MAX;
uint16_t x285 = 12U;
int32_t x293 = 59;
int16_t x296 = -1;
int64_t t41 = -85538189LL;
volatile int8_t x314 = INT8_MIN;
static int8_t x319 = INT8_MAX;
int32_t x328 = -1;
uint64_t x330 = UINT64_MAX;
static volatile int64_t t48 = -172LL;
uint8_t x339 = 10U;
uint64_t x346 = UINT64_MAX;
static volatile int64_t x363 = 2LL;
static uint32_t x398 = UINT32_MAX;
int32_t t59 = 22905;
int16_t x411 = -1;
volatile int32_t x413 = 25189;
volatile uint32_t t62 = 1077346U;
int64_t x439 = -482LL;
int64_t x444 = INT64_MAX;
int16_t x461 = INT16_MIN;
int32_t x464 = INT32_MIN;
static int64_t t68 = -992422060LL;
int32_t x467 = 3;
uint8_t x478 = 11U;
uint16_t x479 = 25U;
volatile uint64_t t70 = 1278903818130276978LLU;
static uint16_t x485 = 3U;
int8_t x490 = INT8_MIN;
static int64_t x501 = INT64_MIN;
uint8_t x507 = 10U;
volatile uint32_t t76 = 2U;
static int16_t x524 = 1650;
uint32_t x529 = 48199U;
volatile int16_t x530 = -69;
uint32_t x531 = UINT32_MAX;
uint32_t t78 = 33205176U;
uint16_t x538 = UINT16_MAX;
volatile int16_t x540 = INT16_MIN;
int32_t t80 = -29;
int32_t x544 = INT32_MIN;
int16_t x552 = -1088;
int16_t x564 = INT16_MIN;
int8_t x569 = -2;
int32_t t85 = 0;
int8_t x581 = INT8_MIN;
uint64_t t88 = 1361585216LLU;
static uint64_t x589 = UINT64_MAX;
int16_t x605 = INT16_MIN;
static volatile int32_t x609 = 0;
uint16_t x611 = UINT16_MAX;
volatile int32_t t91 = -151128;
uint32_t x614 = 54669903U;
int16_t x639 = -1336;
static uint32_t x643 = UINT32_MAX;
volatile uint16_t x645 = UINT16_MAX;
volatile uint16_t x646 = 12U;
int16_t x648 = -5214;
volatile int64_t x649 = -1LL;


void f0(void) {
	uint64_t x9 = 402LLU;
	uint8_t x10 = UINT8_MAX;
	int32_t x12 = INT32_MIN;
	uint64_t t0 = 19870911LLU;

	t0 = (x9*((x10*x11)|x12));

	if (t0 != 18446743210459976410LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x13 = 0U;
	int16_t x14 = INT16_MIN;
	volatile int8_t x15 = 42;
	int64_t x16 = INT64_MIN;

	t1 = (x13*((x14*x15)|x16));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x25 = -1;
	uint8_t x26 = UINT8_MAX;
	uint16_t x27 = UINT16_MAX;

	t2 = (x25*((x26*x27)|x28));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x30 = 45U;
	volatile int16_t x31 = INT16_MIN;
	int64_t x32 = INT64_MIN;
	volatile int64_t t3 = -1LL;

	t3 = (x29*((x30*x31)|x32));

	if (t3 != 3166593487994880LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x37 = -32;
	int8_t x38 = INT8_MIN;
	volatile uint64_t x39 = UINT64_MAX;
	uint64_t x40 = 21065638207877941LLU;
	volatile uint64_t t4 = 1763402509005LLU;

	t4 = (x37*((x38*x39)|x40));

	if (t4 != 17772643651057453408LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x42 = -1;
	volatile uint32_t x43 = UINT32_MAX;
	uint32_t t5 = 188U;

	t5 = (x41*((x42*x43)|x44));

	if (t5 != 16065U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x45 = 1757673022302LLU;
	volatile int32_t x47 = INT32_MAX;
	static volatile uint64_t t6 = 1839212809955299271LLU;

	t6 = (x45*((x46*x47)|x48));

	if (t6 != 11438281129862765730LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x49 = -1;
	static uint64_t x50 = 16494998359LLU;
	int64_t x51 = INT64_MAX;
	uint64_t t7 = 503227259586LLU;

	t7 = (x49*((x50*x51)|x52));

	if (t7 != 87LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x61 = INT16_MIN;
	int32_t x62 = INT32_MIN;
	uint32_t x63 = UINT32_MAX;
	int8_t x64 = INT8_MAX;
	static volatile uint32_t t8 = 7U;

	t8 = (x61*((x62*x63)|x64));

	if (t8 != 4290805760U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x65 = INT8_MIN;
	int16_t x67 = INT16_MIN;
	uint16_t x68 = UINT16_MAX;
	uint32_t t9 = 226622U;

	t9 = (x65*((x66*x67)|x68));

	if (t9 != 2566914176U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x69 = 4U;
	uint16_t x71 = 21U;
	uint64_t x72 = 887350938LLU;
	uint64_t t10 = 273892LLU;

	t10 = (x69*((x70*x71)|x72));

	if (t10 != 3549412332LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x77 = INT8_MIN;
	static int16_t x79 = -1;
	uint32_t x80 = 417416U;

	t11 = (x77*((x78*x79)|x80));

	if (t11 != 4241537920U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x81 = 152359342;
	int32_t x83 = INT32_MIN;
	uint8_t x84 = 2U;
	static uint64_t t12 = 7228482LLU;

	t12 = (x81*((x82*x83)|x84));

	if (t12 != 327189195869758300LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x86 = 1;
	static uint64_t x87 = UINT64_MAX;
	static int32_t x88 = 15;
	volatile uint64_t t13 = 7836278477LLU;

	t13 = (x85*((x86*x87)|x88));

	if (t13 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x89 = UINT64_MAX;
	volatile int32_t x91 = INT32_MIN;
	int32_t x92 = -1669;
	volatile uint64_t t14 = 15720LLU;

	t14 = (x89*((x90*x91)|x92));

	if (t14 != 1669LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x93 = 6;
	int64_t x95 = 17LL;
	static uint16_t x96 = UINT16_MAX;
	int64_t t15 = -46993372744837LL;

	t15 = (x93*((x94*x95)|x96));

	if (t15 != 3538938LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x109 = -1;
	volatile int64_t x111 = -653837928LL;
	int8_t x112 = 1;

	t16 = (x109*((x110*x111)|x112));

	if (t16 != -39884113609LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x117 = 152954595210297LL;
	uint16_t x119 = 9966U;
	int64_t t17 = -787135LL;

	t17 = (x117*((x118*x119)|x120));

	if (t17 != 1526945723984394951LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x125 = 146492772392LLU;
	static int16_t x126 = INT16_MIN;
	uint64_t x127 = UINT64_MAX;
	uint64_t t18 = 112555452600830528LLU;

	t18 = (x125*((x126*x127)|x128));

	if (t18 != 18446743927216779224LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x133 = INT32_MAX;
	static volatile int32_t x134 = 1887;
	uint32_t x135 = 1544U;
	volatile int64_t t19 = -15792445298937435LL;

	t19 = (x133*((x134*x135)|x136));

	if (t19 != -36451022351958010LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x142 = INT32_MIN;
	int64_t x143 = -1LL;
	static volatile int8_t x144 = -1;
	int64_t t20 = -1LL;

	t20 = (x141*((x142*x143)|x144));

	if (t20 != 43LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x146 = -1;
	int64_t x147 = -1LL;
	volatile int64_t t21 = 1171292279048660LL;

	t21 = (x145*((x146*x147)|x148));

	if (t21 != 36145816707333LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x165 = INT16_MIN;
	uint64_t x166 = UINT64_MAX;
	int16_t x168 = INT16_MIN;
	volatile uint64_t t22 = 755LLU;

	t22 = (x165*((x166*x167)|x168));

	if (t22 != 1073643520LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x169 = INT16_MIN;
	static int32_t x170 = INT32_MIN;
	int64_t x171 = 10820055LL;
	volatile int64_t t23 = 60940848LL;

	t23 = (x169*((x170*x171)|x172));

	if (t23 != 18340494053703680LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x173 = 3U;
	int64_t x175 = -1LL;
	volatile int16_t x176 = INT16_MIN;

	t24 = (x173*((x174*x175)|x176));

	if (t24 != -98304LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x177 = 102U;
	int32_t x178 = -627790;
	static uint8_t x179 = 7U;
	uint8_t x180 = UINT8_MAX;
	static int32_t t25 = -291361;

	t25 = (x177*((x178*x179)|x180));

	if (t25 != -448238694) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x181 = 12287371LLU;
	uint64_t x182 = 1898864265709635LLU;
	static uint16_t x183 = UINT16_MAX;
	uint16_t x184 = 26304U;
	uint64_t t26 = 145288201LLU;

	t26 = (x181*((x182*x183)|x184));

	if (t26 != 6110570661609254751LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x185 = UINT8_MAX;
	volatile uint64_t x186 = UINT64_MAX;
	static volatile uint64_t x188 = UINT64_MAX;
	uint64_t t27 = 1LLU;

	t27 = (x185*((x186*x187)|x188));

	if (t27 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x197 = INT16_MIN;
	volatile uint64_t x198 = 60688LLU;
	static uint8_t x199 = UINT8_MAX;
	int8_t x200 = 0;
	volatile uint64_t t28 = 26860796888284LLU;

	t28 = (x197*((x198*x199)|x200));

	if (t28 != 18446743566610333696LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x205 = 51LLU;
	int64_t x206 = 1LL;
	volatile int32_t x207 = -1;
	volatile uint64_t t29 = 718651LLU;

	t29 = (x205*((x206*x207)|x208));

	if (t29 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x209 = INT32_MIN;
	uint32_t x210 = 954U;
	int16_t x211 = INT16_MAX;
	static uint32_t t30 = 15809541U;

	t30 = (x209*((x210*x211)|x212));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x215 = -1;
	uint64_t t31 = 258566830052LLU;

	t31 = (x213*((x214*x215)|x216));

	if (t31 != 18446743951057555657LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x217 = INT16_MAX;
	volatile uint64_t x218 = UINT64_MAX;
	static volatile int16_t x219 = INT16_MAX;
	uint64_t t32 = 21LLU;

	t32 = (x217*((x218*x219)|x220));

	if (t32 != 18446744072635875327LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x241 = -1LL;
	static volatile int64_t t33 = -21964039LL;

	t33 = (x241*((x242*x243)|x244));

	if (t33 != -4294967295LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x245 = INT16_MIN;
	int8_t x246 = 0;
	uint64_t x247 = 721285775450LLU;
	volatile uint16_t x248 = 43U;
	uint64_t t34 = 10625LLU;

	t34 = (x245*((x246*x247)|x248));

	if (t34 != 18446744073708142592LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x249 = -1;
	uint32_t x250 = UINT32_MAX;
	int32_t x251 = -1;
	volatile int64_t x252 = 65599859805168LL;
	int64_t t35 = 54008769LL;

	t35 = (x249*((x250*x251)|x252));

	if (t35 != -65599859805169LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x257 = UINT16_MAX;
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	int32_t t36 = 0;

	t36 = (x257*((x258*x259)|x260));

	if (t36 != -8388480) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x265 = 119U;
	static uint8_t x266 = 60U;
	int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MAX;
	int64_t t37 = 1665LL;

	t37 = (x265*((x266*x267)|x268));

	if (t37 != -119LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x286 = -1LL;
	int32_t x287 = INT32_MAX;
	int32_t x288 = INT32_MAX;
	int64_t t38 = -6099LL;

	t38 = (x285*((x286*x287)|x288));

	if (t38 != -12LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x294 = 1533U;
	uint8_t x295 = 0U;
	volatile int32_t t39 = 9361629;

	t39 = (x293*((x294*x295)|x296));

	if (t39 != -59) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x297 = INT8_MAX;
	int8_t x298 = INT8_MIN;
	int8_t x299 = INT8_MAX;
	volatile uint64_t x300 = 302628788878LLU;
	volatile uint64_t t40 = 7829419610661918LLU;

	t40 = (x297*((x298*x299)|x300));

	if (t40 != 18446744073708334194LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x301 = UINT8_MAX;
	static int16_t x302 = -1;
	int8_t x303 = INT8_MIN;
	int64_t x304 = 18548093536LL;

	t41 = (x301*((x302*x303)|x304));

	if (t41 != 4729763884320LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x309 = INT64_MIN;
	uint64_t x310 = 506LLU;
	int32_t x311 = INT32_MIN;
	static int16_t x312 = -13286;
	uint64_t t42 = 1658465LLU;

	t42 = (x309*((x310*x311)|x312));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x313 = UINT32_MAX;
	volatile uint64_t x315 = 4433234442561310LLU;
	static volatile int32_t x316 = 11761158;
	volatile uint64_t t43 = 8812829511000345LLU;

	t43 = (x313*((x314*x315)|x316));

	if (t43 != 17626938789794449658LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x317 = -1LL;
	int8_t x318 = INT8_MAX;
	int64_t x320 = -1LL;
	volatile int64_t t44 = -480915LL;

	t44 = (x317*((x318*x319)|x320));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x321 = INT8_MIN;
	static int64_t x322 = -1147410451LL;
	int32_t x323 = INT32_MIN;
	int64_t x324 = -241365125709LL;
	volatile int64_t t45 = 92LL;

	t45 = (x321*((x322*x323)|x324));

	if (t45 != 26496689579648LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x325 = INT64_MIN;
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = -1;
	uint64_t t46 = 3404886780562802LLU;

	t46 = (x325*((x326*x327)|x328));

	if (t46 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x329 = INT8_MAX;
	static volatile int64_t x331 = -1LL;
	uint8_t x332 = UINT8_MAX;
	volatile uint64_t t47 = 2545640614235451048LLU;

	t47 = (x329*((x330*x331)|x332));

	if (t47 != 32385LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x333 = INT16_MAX;
	int64_t x334 = -1372LL;
	int64_t x335 = -1LL;
	int8_t x336 = INT8_MIN;

	t48 = (x333*((x334*x335)|x336));

	if (t48 != -1179612LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x337 = INT8_MIN;
	static int16_t x338 = 1;
	int8_t x340 = 0;
	static int32_t t49 = -1845500;

	t49 = (x337*((x338*x339)|x340));

	if (t49 != -1280) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x341 = UINT32_MAX;
	uint8_t x342 = UINT8_MAX;
	volatile uint16_t x343 = 389U;
	uint16_t x344 = UINT16_MAX;
	static uint32_t t50 = 827199U;

	t50 = (x341*((x342*x343)|x344));

	if (t50 != 4294836225U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x345 = 21392325066LL;
	int16_t x347 = -1;
	uint16_t x348 = 501U;
	static uint64_t t51 = 14LLU;

	t51 = (x345*((x346*x347)|x348));

	if (t51 != 10717554858066LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x349 = 1U;
	int16_t x350 = INT16_MIN;
	int16_t x351 = 2070;
	volatile int64_t x352 = INT64_MAX;
	int64_t t52 = 371008675119LL;

	t52 = (x349*((x350*x351)|x352));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x357 = INT16_MAX;
	int8_t x358 = INT8_MAX;
	uint64_t x359 = UINT64_MAX;
	int16_t x360 = INT16_MIN;
	volatile uint64_t t53 = 119565905LLU;

	t53 = (x357*((x358*x359)|x360));

	if (t53 != 18446744073705390207LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x361 = -254021853LL;
	static uint32_t x362 = 187537U;
	static int16_t x364 = INT16_MAX;
	int64_t t54 = 3068374409650526226LL;

	t54 = (x361*((x362*x363)|x364));

	if (t54 != -99885202927395LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x369 = -54;
	int8_t x370 = -1;
	uint16_t x371 = UINT16_MAX;
	int8_t x372 = INT8_MAX;
	volatile int32_t t55 = -15354;

	t55 = (x369*((x370*x371)|x372));

	if (t55 != 3532086) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x377 = 6U;
	int8_t x378 = -1;
	uint32_t x379 = 13591U;
	uint64_t x380 = 78777LLU;
	uint64_t t56 = 180033LLU;

	t56 = (x377*((x378*x379)|x380));

	if (t56 != 25769797590LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x385 = INT8_MAX;
	int8_t x386 = INT8_MAX;
	int16_t x387 = 0;
	uint64_t x388 = 13LLU;
	uint64_t t57 = 212354567668LLU;

	t57 = (x385*((x386*x387)|x388));

	if (t57 != 1651LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x397 = UINT32_MAX;
	int64_t x399 = 14153828LL;
	static int32_t x400 = INT32_MIN;
	int64_t t58 = -31171174298174780LL;

	t58 = (x397*((x398*x399)|x400));

	if (t58 != -60790228359055260LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x401 = 2014U;
	int32_t x402 = -1;
	int8_t x403 = -7;
	uint16_t x404 = UINT16_MAX;

	t59 = (x401*((x402*x403)|x404));

	if (t59 != 131987490) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x409 = 4104;
	int64_t x410 = 114066LL;
	uint16_t x412 = 0U;
	volatile int64_t t60 = -26497823930031LL;

	t60 = (x409*((x410*x411)|x412));

	if (t60 != -468126864LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x414 = 6542U;
	volatile int8_t x415 = 1;
	int32_t x416 = -1;
	uint32_t t61 = 9464384U;

	t61 = (x413*((x414*x415)|x416));

	if (t61 != 4294942107U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x421 = INT32_MIN;
	int16_t x422 = INT16_MIN;
	uint32_t x423 = 2721893U;
	static int32_t x424 = -1;

	t62 = (x421*((x422*x423)|x424));

	if (t62 != 2147483648U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x425 = INT16_MIN;
	int64_t x426 = 57615LL;
	static int8_t x427 = INT8_MIN;
	int32_t x428 = 150339;
	volatile int64_t t63 = 263720918873320562LL;

	t63 = (x425*((x426*x427)|x428));

	if (t63 != 241627463680LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x437 = 22U;
	int64_t x438 = -556376356886611LL;
	int16_t x440 = 31;
	static int64_t t64 = -534391008801LL;

	t64 = (x437*((x438*x439)|x440));

	if (t64 != 5899814888425623594LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x441 = 0U;
	uint16_t x442 = 60U;
	static int64_t x443 = -451LL;
	volatile int64_t t65 = -11109LL;

	t65 = (x441*((x442*x443)|x444));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x449 = UINT32_MAX;
	int8_t x450 = -1;
	int32_t x451 = -1;
	int8_t x452 = -1;
	uint32_t t66 = 166539U;

	t66 = (x449*((x450*x451)|x452));

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x453 = 206;
	uint32_t x454 = 0U;
	int8_t x455 = 9;
	static uint8_t x456 = 9U;
	static uint32_t t67 = 26989U;

	t67 = (x453*((x454*x455)|x456));

	if (t67 != 1854U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x462 = -1LL;
	int32_t x463 = -206582;

	t68 = (x461*((x462*x463)|x464));

	if (t68 != 70361974898688LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x465 = 1U;
	int16_t x466 = INT16_MAX;
	int32_t x468 = -1;
	int32_t t69 = 109571222;

	t69 = (x465*((x466*x467)|x468));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x477 = 2044406106652LLU;
	int8_t x480 = -1;

	t70 = (x477*((x478*x479)|x480));

	if (t70 != 18446742029303444964LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x486 = INT8_MIN;
	volatile int64_t x487 = -1LL;
	int32_t x488 = -515523;
	int64_t t71 = 1790410255369426059LL;

	t71 = (x485*((x486*x487)|x488));

	if (t71 != -1546185LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x489 = UINT8_MAX;
	volatile int64_t x491 = -1LL;
	uint8_t x492 = UINT8_MAX;
	volatile int64_t t72 = 228838035LL;

	t72 = (x489*((x490*x491)|x492));

	if (t72 != 65025LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x497 = -1;
	static uint32_t x498 = 1704625196U;
	int8_t x499 = -1;
	volatile int8_t x500 = INT8_MIN;
	volatile uint32_t t73 = 733704272U;

	t73 = (x497*((x498*x499)|x500));

	if (t73 != 44U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x502 = UINT32_MAX;
	static uint64_t x503 = 115522670500529LLU;
	int8_t x504 = -1;
	uint64_t t74 = 39450776635257303LLU;

	t74 = (x501*((x502*x503)|x504));

	if (t74 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x505 = -1;
	int8_t x506 = INT8_MIN;
	volatile int32_t x508 = INT32_MIN;
	static int32_t t75 = -7453880;

	t75 = (x505*((x506*x507)|x508));

	if (t75 != 1280) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x517 = INT8_MAX;
	volatile uint32_t x518 = UINT32_MAX;
	static uint16_t x519 = 19836U;
	uint8_t x520 = UINT8_MAX;

	t76 = (x517*((x518*x519)|x520));

	if (t76 != 4292463745U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x521 = 0U;
	int8_t x522 = -33;
	uint16_t x523 = 26195U;
	int32_t t77 = -295;

	t77 = (x521*((x522*x523)|x524));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x532 = -1;

	t78 = (x529*((x530*x531)|x532));

	if (t78 != 4294919097U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x533 = INT16_MAX;
	static int64_t x534 = INT64_MAX;
	int8_t x535 = -1;
	uint64_t x536 = 5016783115801589152LLU;
	uint64_t t79 = 7028764610LLU;

	t79 = (x533*((x534*x535)|x536));

	if (t79 != 15219286681712101983LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x537 = INT8_MIN;
	int32_t x539 = -1;

	t80 = (x537*((x538*x539)|x540));

	if (t80 != 4194176) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x541 = -1;
	volatile int64_t x542 = -1LL;
	uint32_t x543 = 60995827U;
	static volatile int64_t t81 = 14880729358LL;

	t81 = (x541*((x542*x543)|x544));

	if (t81 != 60995827LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x549 = -46941774488449LL;
	volatile uint64_t x550 = UINT64_MAX;
	static int16_t x551 = -1;
	uint64_t t82 = 28377971973296618LLU;

	t82 = (x549*((x550*x551)|x552));

	if (t82 != 51025708868944063LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x557 = 8;
	uint16_t x558 = 0U;
	int8_t x559 = INT8_MIN;
	uint64_t x560 = UINT64_MAX;
	uint64_t t83 = 17084281525766LLU;

	t83 = (x557*((x558*x559)|x560));

	if (t83 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x561 = INT8_MIN;
	volatile int16_t x562 = INT16_MIN;
	volatile int8_t x563 = 21;
	volatile int32_t t84 = 319507821;

	t84 = (x561*((x562*x563)|x564));

	if (t84 != 4194304) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x570 = INT8_MIN;
	static volatile int8_t x571 = -1;
	volatile int8_t x572 = 4;

	t85 = (x569*((x570*x571)|x572));

	if (t85 != -264) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x573 = -28;
	int16_t x574 = 9;
	int8_t x575 = 0;
	int64_t x576 = -1LL;
	volatile int64_t t86 = -18395LL;

	t86 = (x573*((x574*x575)|x576));

	if (t86 != 28LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x582 = UINT16_MAX;
	volatile int16_t x583 = INT16_MIN;
	int64_t x584 = -1LL;
	volatile int64_t t87 = 56298048682898LL;

	t87 = (x581*((x582*x583)|x584));

	if (t87 != 128LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x585 = 21U;
	volatile int8_t x586 = -1;
	static int16_t x587 = -1;
	volatile uint64_t x588 = 60282LLU;

	t88 = (x585*((x586*x587)|x588));

	if (t88 != 1265943LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x590 = 452;
	static int8_t x591 = -1;
	volatile int16_t x592 = INT16_MIN;
	volatile uint64_t t89 = 65076675329426431LLU;

	t89 = (x589*((x590*x591)|x592));

	if (t89 != 452LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x606 = INT16_MIN;
	static uint64_t x607 = 135785206725652LLU;
	int16_t x608 = INT16_MIN;
	uint64_t t90 = 0LLU;

	t90 = (x605*((x606*x607)|x608));

	if (t90 != 1073741824LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x610 = -1;
	int16_t x612 = -1;

	t91 = (x609*((x610*x611)|x612));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x613 = UINT8_MAX;
	int8_t x615 = 2;
	uint32_t x616 = UINT32_MAX;
	uint32_t t92 = 1449262425U;

	t92 = (x613*((x614*x615)|x616));

	if (t92 != 4294967041U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x617 = 152932167360246429LL;
	int32_t x618 = -25628978;
	volatile int64_t x619 = -1101065835LL;
	int8_t x620 = INT8_MIN;
	int64_t t93 = -65467459LL;

	t93 = (x617*((x618*x619)|x620));

	if (t93 != -3976236351366407154LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x621 = 5;
	volatile int16_t x622 = INT16_MIN;
	uint8_t x623 = 7U;
	static int32_t x624 = -178;
	volatile int32_t t94 = 110020477;

	t94 = (x621*((x622*x623)|x624));

	if (t94 != -890) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x633 = INT16_MAX;
	int16_t x634 = 3;
	int8_t x635 = INT8_MIN;
	int32_t x636 = INT32_MIN;
	volatile int32_t t95 = 3;

	t95 = (x633*((x634*x635)|x636));

	if (t95 != -12582528) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x637 = -1;
	volatile uint16_t x638 = 7842U;
	uint64_t x640 = 347LLU;
	volatile uint64_t t96 = 30LLU;

	t96 = (x637*((x638*x639)|x640));

	if (t96 != 10476581LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x641 = INT32_MIN;
	uint64_t x642 = UINT64_MAX;
	int32_t x644 = INT32_MAX;
	volatile uint64_t t97 = 3055072639LLU;

	t97 = (x641*((x642*x643)|x644));

	if (t97 != 4611686020574871552LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x647 = INT8_MAX;
	int32_t t98 = 65355702;

	t98 = (x645*((x646*x647)|x648));

	if (t98 != -269086710) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x650 = 255957186163818LLU;
	static volatile int64_t x651 = 917940697406074337LL;
	static int32_t x652 = 59102019;
	uint64_t t99 = 16485760585LLU;

	t99 = (x649*((x650*x651)|x652));

	if (t99 != 3378971875079752853LLU) { NG(); } else { ; }
	
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

