#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x7 = 942U;
int32_t x20 = INT32_MIN;
static int64_t x24 = INT64_MIN;
volatile int64_t t5 = -256826118774LL;
uint8_t x27 = 10U;
uint16_t x28 = UINT16_MAX;
uint64_t x29 = UINT64_MAX;
static uint8_t x34 = 13U;
int16_t x50 = INT16_MIN;
uint64_t t15 = 128598753878LLU;
volatile uint64_t x73 = UINT64_MAX;
int8_t x75 = -40;
volatile uint16_t x85 = 3716U;
uint8_t x88 = UINT8_MAX;
uint32_t x90 = UINT32_MAX;
uint32_t x95 = 1683132U;
int64_t x99 = INT64_MIN;
volatile int64_t t22 = -21236LL;
int32_t t23 = -14879;
int8_t x105 = INT8_MIN;
uint64_t t25 = 2LLU;
int64_t x123 = INT64_MAX;
uint32_t x125 = 21450U;
uint32_t x133 = 37672506U;
int16_t x134 = INT16_MAX;
static uint16_t x135 = UINT16_MAX;
volatile int32_t x136 = 119635;
int8_t x143 = 0;
int32_t x146 = -1;
volatile int64_t t34 = 722835877498LL;
uint64_t x158 = 106595097LLU;
int64_t x159 = INT64_MIN;
uint8_t x163 = UINT8_MAX;
uint64_t x169 = 27774195962337LLU;
int64_t x172 = INT64_MAX;
uint8_t x176 = UINT8_MAX;
int64_t x177 = INT64_MIN;
static int64_t x179 = INT64_MIN;
uint16_t x182 = 7442U;
int64_t t41 = -982394949317972023LL;
volatile int32_t x185 = 389;
int16_t x187 = 1;
int32_t x193 = -1;
uint64_t t44 = 3322001328279260LLU;
int8_t x201 = -4;
int64_t x204 = -8971517870596LL;
int16_t x205 = INT16_MIN;
static int64_t x217 = -1LL;
int8_t x221 = 31;
int8_t x222 = INT8_MIN;
int16_t x223 = INT16_MAX;
static volatile int16_t x226 = -1;
int32_t x227 = 464;
static int32_t x246 = INT32_MIN;
volatile int16_t x258 = INT16_MIN;
volatile uint64_t t55 = 14406136LLU;
int16_t x261 = 10;
int16_t x263 = INT16_MAX;
volatile int64_t x264 = -3332417532LL;
static volatile uint64_t t56 = 23225024006293872LLU;
int8_t x266 = -1;
uint16_t x271 = 20U;
int32_t t58 = -24271;
int32_t x288 = INT32_MIN;
int8_t x290 = 7;
static int16_t x292 = INT16_MIN;
volatile uint16_t x304 = 45U;
static int8_t x305 = INT8_MIN;
uint16_t x308 = 601U;
volatile int64_t t68 = -39LL;
uint64_t x319 = UINT64_MAX;
int8_t x323 = INT8_MIN;
int64_t x335 = 46955828LL;
static volatile int64_t t72 = 951596158668LL;
int64_t x341 = 52248788080571687LL;
uint32_t x349 = 11812U;
int8_t x351 = INT8_MAX;
int32_t x352 = -1;
uint16_t x353 = UINT16_MAX;
uint32_t x358 = 874U;
int32_t x360 = -1;
volatile int32_t x364 = -16;
int32_t x370 = INT32_MIN;
static volatile int64_t t80 = 3269LL;
static int64_t x378 = 27694016736060LL;
volatile int8_t x380 = 4;
int64_t t83 = 9537LL;
uint64_t x396 = 1LLU;
static int32_t t85 = 0;
uint64_t t86 = 8889691471830979131LLU;
int8_t x407 = -1;
uint8_t x412 = UINT8_MAX;
int8_t x417 = INT8_MIN;
static int8_t x418 = INT8_MIN;
int8_t x419 = -1;
int8_t x421 = INT8_MAX;
static int8_t x424 = INT8_MIN;
int64_t t90 = -31507522533230LL;
int64_t x429 = -1LL;
int16_t x431 = -3624;
int64_t t92 = -513586456009LL;
volatile int32_t x434 = -1;
int32_t x435 = -17780500;
uint32_t x437 = 1U;
int32_t x440 = -201969456;
static volatile int64_t x444 = INT64_MIN;
int64_t x449 = -308LL;
int64_t x452 = -1LL;
uint32_t x453 = UINT32_MAX;
uint8_t x454 = 121U;
int64_t t98 = 22744879LL;
uint64_t t99 = 85481LLU;


void f0(void) {
	uint32_t x1 = 1921964U;
	volatile int64_t x2 = -1LL;
	static int64_t x3 = 0LL;
	volatile uint32_t x4 = 59U;
	volatile int64_t t0 = -1LL;

	t0 = (x1*((x2|x3)|x4));

	if (t0 != -1921964LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = -5;
	static int32_t x8 = INT32_MIN;
	int32_t t1 = -25024715;

	t1 = (x5*((x6|x7)|x8));

	if (t1 != 128) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MIN;
	uint8_t x10 = 24U;
	static int8_t x11 = 0;
	int32_t x12 = -1;
	volatile int32_t t2 = -1;

	t2 = (x9*((x10|x11)|x12));

	if (t2 != 128) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = UINT32_MAX;
	int8_t x14 = INT8_MAX;
	int8_t x15 = INT8_MIN;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 8238081568986LLU;

	t3 = (x13*((x14|x15)|x16));

	if (t3 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = UINT64_MAX;
	uint64_t x18 = UINT64_MAX;
	static volatile uint8_t x19 = 0U;
	volatile uint64_t t4 = 1010500484504LLU;

	t4 = (x17*((x18|x19)|x20));

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = -220976637LL;
	uint16_t x23 = 0U;

	t5 = (x21*((x22|x23)|x24));

	if (t5 != 7240962441216LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	uint16_t x26 = UINT16_MAX;
	int32_t t6 = 541031;

	t6 = (x25*((x26|x27)|x28));

	if (t6 != -8388480) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = 124;
	volatile int16_t x31 = INT16_MIN;
	int8_t x32 = -1;
	volatile uint64_t t7 = 2396297337666245289LLU;

	t7 = (x29*((x30|x31)|x32));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	volatile int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MAX;
	int32_t t8 = -2846;

	t8 = (x33*((x34|x35)|x36));

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MAX;
	volatile uint8_t x39 = 107U;
	uint64_t x40 = 9494LLU;
	uint64_t t9 = 3LLU;

	t9 = (x37*((x38|x39)|x40));

	if (t9 != 18446744073708322944LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 0U;
	int32_t x46 = -1;
	int8_t x47 = -1;
	int32_t x48 = -44174;
	static int32_t t10 = -1018889;

	t10 = (x45*((x46|x47)|x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = 24LL;
	int64_t x51 = INT64_MIN;
	int64_t x52 = -1LL;
	int64_t t11 = -3435887725173LL;

	t11 = (x49*((x50|x51)|x52));

	if (t11 != -24LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -1;
	uint32_t x54 = 0U;
	volatile int16_t x55 = -1;
	int16_t x56 = -1;
	uint32_t t12 = 1640737U;

	t12 = (x53*((x54|x55)|x56));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = INT32_MAX;
	uint32_t x58 = UINT32_MAX;
	int16_t x59 = -3119;
	static volatile int32_t x60 = INT32_MIN;
	static uint32_t t13 = 42U;

	t13 = (x57*((x58|x59)|x60));

	if (t13 != 2147483649U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = UINT64_MAX;
	volatile int32_t x66 = INT32_MAX;
	int32_t x67 = 18;
	uint8_t x68 = 71U;
	uint64_t t14 = 12LLU;

	t14 = (x65*((x66|x67)|x68));

	if (t14 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 10441615787984741LLU;
	int32_t x70 = INT32_MAX;
	static uint8_t x71 = 30U;
	static int64_t x72 = -1LL;

	t15 = (x69*((x70|x71)|x72));

	if (t15 != 18436302457921566875LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x74 = INT16_MIN;
	int8_t x76 = INT8_MIN;
	volatile uint64_t t16 = 565327761212787306LLU;

	t16 = (x73*((x74|x75)|x76));

	if (t16 != 40LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x77 = 6933U;
	volatile uint32_t x78 = 13U;
	uint16_t x79 = UINT16_MAX;
	volatile uint64_t x80 = UINT64_MAX;
	uint64_t t17 = 4784LLU;

	t17 = (x77*((x78|x79)|x80));

	if (t17 != 18446744073709544683LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = UINT32_MAX;
	uint64_t x82 = 1050800866795LLU;
	int64_t x83 = -1LL;
	int32_t x84 = -1;
	volatile uint64_t t18 = 134369697930LLU;

	t18 = (x81*((x82|x83)|x84));

	if (t18 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x86 = 15953158852658713LLU;
	int8_t x87 = -1;
	uint64_t t19 = 2200727LLU;

	t19 = (x85*((x86|x87)|x88));

	if (t19 != 18446744073709547900LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = -1;
	int64_t x91 = -2LL;
	uint8_t x92 = 1U;
	volatile int64_t t20 = -1400647938400926LL;

	t20 = (x89*((x90|x91)|x92));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = -796;
	uint64_t x94 = 380LLU;
	static volatile int64_t x96 = INT64_MIN;
	volatile uint64_t t21 = 232013600LLU;

	t21 = (x93*((x94|x95)|x96));

	if (t21 != 18446744072369523824LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = UINT16_MAX;
	int64_t x98 = -1LL;
	int8_t x100 = 1;

	t22 = (x97*((x98|x99)|x100));

	if (t22 != -65535LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = -1;
	int32_t x102 = INT32_MIN;
	volatile int16_t x103 = -3636;
	static int8_t x104 = 2;

	t23 = (x101*((x102|x103)|x104));

	if (t23 != 3634) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x106 = INT64_MIN;
	static volatile int32_t x107 = 18;
	static int16_t x108 = -1708;
	volatile int64_t t24 = -172259850179754LL;

	t24 = (x105*((x106|x107)|x108));

	if (t24 != 218368LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x109 = 0U;
	int8_t x110 = INT8_MIN;
	int64_t x111 = INT64_MIN;
	static uint64_t x112 = UINT64_MAX;

	t25 = (x109*((x110|x111)|x112));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x121 = 611241040100LLU;
	int8_t x122 = 0;
	uint8_t x124 = 1U;
	volatile uint64_t t26 = 1137012925717066113LLU;

	t26 = (x121*((x122|x123)|x124));

	if (t26 != 18446743462468511516LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x126 = 1712714010600LLU;
	uint64_t x127 = 1705942941691135221LLU;
	int64_t x128 = -1LL;
	uint64_t t27 = 87789947LLU;

	t27 = (x125*((x126|x127)|x128));

	if (t27 != 18446744073709530166LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x129 = 0LLU;
	int32_t x130 = INT32_MAX;
	int32_t x131 = 406576236;
	uint32_t x132 = 23525U;
	volatile uint64_t t28 = 11LLU;

	t28 = (x129*((x130|x131)|x132));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t t29 = 58976U;

	t29 = (x133*((x134|x135)|x136));

	if (t29 != 2855610822U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = 11;
	int8_t x138 = -3;
	uint8_t x139 = 5U;
	int16_t x140 = INT16_MIN;
	int32_t t30 = -13819154;

	t30 = (x137*((x138|x139)|x140));

	if (t30 != -33) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = 21U;
	uint8_t x142 = 86U;
	uint16_t x144 = UINT16_MAX;
	volatile uint32_t t31 = 0U;

	t31 = (x141*((x142|x143)|x144));

	if (t31 != 1376235U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = 25954LL;
	int64_t x147 = INT64_MIN;
	int64_t x148 = INT64_MIN;
	volatile int64_t t32 = 412356737402306LL;

	t32 = (x145*((x146|x147)|x148));

	if (t32 != -25954LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = INT16_MIN;
	int64_t x150 = 91498924967226611LL;
	static int64_t x151 = -1LL;
	int32_t x152 = INT32_MIN;
	int64_t t33 = 2487028018722429366LL;

	t33 = (x149*((x150|x151)|x152));

	if (t33 != 32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x153 = 8;
	int16_t x154 = -1;
	int64_t x155 = INT64_MIN;
	uint16_t x156 = UINT16_MAX;

	t34 = (x153*((x154|x155)|x156));

	if (t34 != -8LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x157 = INT16_MAX;
	int32_t x160 = INT32_MIN;
	volatile uint64_t t35 = 169093566LLU;

	t35 = (x157*((x158|x159)|x160));

	if (t35 != 18446677199914400999LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = -4083736;
	volatile int16_t x162 = -1;
	static volatile uint16_t x164 = UINT16_MAX;
	int32_t t36 = -339286;

	t36 = (x161*((x162|x163)|x164));

	if (t36 != 4083736) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = -73LL;
	uint32_t x166 = 3134U;
	int16_t x167 = INT16_MAX;
	static int32_t x168 = INT32_MAX;
	volatile int64_t t37 = -7LL;

	t37 = (x165*((x166|x167)|x168));

	if (t37 != -156766306231LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x170 = 32484358;
	volatile int32_t x171 = INT32_MAX;
	volatile uint64_t t38 = 114100919606LLU;

	t38 = (x169*((x170|x171)|x172));

	if (t38 != 9223344262658813471LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x173 = UINT16_MAX;
	int8_t x174 = INT8_MIN;
	int64_t x175 = -3918202913LL;
	int64_t t39 = 216537LL;

	t39 = (x173*((x174|x175)|x176));

	if (t39 != -65535LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x178 = 110LLU;
	uint8_t x180 = 2U;
	volatile uint64_t t40 = 50200403LLU;

	t40 = (x177*((x178|x179)|x180));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x181 = 31633206187342967LL;
	int32_t x183 = -1;
	uint8_t x184 = 61U;

	t41 = (x181*((x182|x183)|x184));

	if (t41 != -31633206187342967LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x186 = INT32_MIN;
	static int8_t x188 = -1;
	volatile int32_t t42 = -2;

	t42 = (x185*((x186|x187)|x188));

	if (t42 != -389) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x194 = 11LLU;
	static int16_t x195 = 1170;
	int64_t x196 = INT64_MIN;
	static uint64_t t43 = 15530228453LLU;

	t43 = (x193*((x194|x195)|x196));

	if (t43 != 9223372036854774629LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = -1LL;
	uint64_t x198 = 17508399413318129LLU;
	volatile int32_t x199 = INT32_MIN;
	static volatile int16_t x200 = 22;

	t44 = (x197*((x198|x199)|x200));

	if (t44 != 409087497LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x202 = INT64_MIN;
	int64_t x203 = -1LL;
	int64_t t45 = 56LL;

	t45 = (x201*((x202|x203)|x204));

	if (t45 != 4LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x206 = -6965LL;
	static int32_t x207 = INT32_MIN;
	int8_t x208 = -1;
	int64_t t46 = 12980937LL;

	t46 = (x205*((x206|x207)|x208));

	if (t46 != 32768LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x213 = INT8_MIN;
	static volatile uint8_t x214 = 3U;
	int32_t x215 = -6;
	int64_t x216 = INT64_MAX;
	volatile int64_t t47 = 18621393638LL;

	t47 = (x213*((x214|x215)|x216));

	if (t47 != 128LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x218 = 2063519834U;
	uint64_t x219 = 718707340218223985LLU;
	int32_t x220 = -1;
	uint64_t t48 = 23943LLU;

	t48 = (x217*((x218|x219)|x220));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x224 = INT32_MIN;
	int32_t t49 = 1;

	t49 = (x221*((x222|x223)|x224));

	if (t49 != -31) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x225 = 4U;
	volatile uint64_t x228 = 25LLU;
	volatile uint64_t t50 = 13752406LLU;

	t50 = (x225*((x226|x227)|x228));

	if (t50 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x229 = -1LL;
	uint8_t x230 = 121U;
	int8_t x231 = INT8_MIN;
	int32_t x232 = INT32_MAX;
	int64_t t51 = 72660202471LL;

	t51 = (x229*((x230|x231)|x232));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x237 = UINT64_MAX;
	int32_t x238 = -1;
	int64_t x239 = 12516690593051LL;
	static int32_t x240 = -1;
	volatile uint64_t t52 = 1102469956782LLU;

	t52 = (x237*((x238|x239)|x240));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = 244;
	int16_t x247 = INT16_MAX;
	uint64_t x248 = UINT64_MAX;
	static uint64_t t53 = 30847903784536LLU;

	t53 = (x245*((x246|x247)|x248));

	if (t53 != 18446744073709551372LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x253 = INT16_MAX;
	static uint64_t x254 = 2563020LLU;
	int16_t x255 = INT16_MAX;
	volatile uint32_t x256 = 303U;
	uint64_t t54 = 19LLU;

	t54 = (x253*((x254|x255)|x256));

	if (t54 != 84822982657LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x257 = 1727751355522572LLU;
	static volatile int16_t x259 = INT16_MIN;
	uint32_t x260 = 863596U;

	t55 = (x257*((x258|x259)|x260));

	if (t55 != 8857650244944513296LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x262 = UINT64_MAX;

	t56 = (x261*((x262|x263)|x264));

	if (t56 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x265 = 3822668;
	uint8_t x267 = 3U;
	volatile uint16_t x268 = 42U;
	int32_t t57 = 63;

	t57 = (x265*((x266|x267)|x268));

	if (t57 != -3822668) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x269 = INT16_MIN;
	volatile uint8_t x270 = 24U;
	int16_t x272 = INT16_MIN;

	t58 = (x269*((x270|x271)|x272));

	if (t58 != 1072824320) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = -1;
	uint16_t x274 = 2012U;
	volatile int8_t x275 = INT8_MAX;
	int64_t x276 = -1LL;
	volatile int64_t t59 = 611484933917911982LL;

	t59 = (x273*((x274|x275)|x276));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x277 = INT8_MAX;
	int32_t x278 = INT32_MIN;
	uint8_t x279 = 30U;
	uint64_t x280 = 51007LLU;
	volatile uint64_t t60 = 1762831163339LLU;

	t60 = (x277*((x278|x279)|x280));

	if (t60 != 18446743800985606209LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x281 = -40;
	int16_t x282 = -1624;
	uint8_t x283 = 1U;
	int16_t x284 = INT16_MIN;
	static volatile int32_t t61 = 442366;

	t61 = (x281*((x282|x283)|x284));

	if (t61 != 64920) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x285 = INT8_MIN;
	uint64_t x286 = 3807675140129927LLU;
	static volatile int16_t x287 = -1;
	volatile uint64_t t62 = 21862961229591157LLU;

	t62 = (x285*((x286|x287)|x288));

	if (t62 != 128LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x289 = 48050009;
	int16_t x291 = -1;
	static volatile int32_t t63 = -2042003;

	t63 = (x289*((x290|x291)|x292));

	if (t63 != -48050009) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x293 = 1U;
	volatile int64_t x294 = INT64_MIN;
	int32_t x295 = INT32_MIN;
	static volatile int16_t x296 = INT16_MAX;
	volatile int64_t t64 = -4821198073789LL;

	t64 = (x293*((x294|x295)|x296));

	if (t64 != -2147450881LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x297 = INT32_MIN;
	int64_t x298 = -14753728614LL;
	uint16_t x299 = 52U;
	int8_t x300 = INT8_MIN;
	static volatile int64_t t65 = 450181623702623LL;

	t65 = (x297*((x298|x299)|x300));

	if (t65 != 141733920768LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x301 = INT16_MIN;
	volatile int64_t x302 = INT64_MAX;
	static int8_t x303 = INT8_MIN;
	volatile int64_t t66 = 33220LL;

	t66 = (x301*((x302|x303)|x304));

	if (t66 != 32768LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x306 = 1406126039264LLU;
	int16_t x307 = INT16_MAX;
	static volatile uint64_t t67 = 147025098749LLU;

	t67 = (x305*((x306|x307)|x308));

	if (t67 != 18446564089573408896LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x309 = -1;
	uint16_t x310 = UINT16_MAX;
	static uint32_t x311 = UINT32_MAX;
	static int64_t x312 = INT64_MAX;

	t68 = (x309*((x310|x311)|x312));

	if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x317 = INT32_MAX;
	int8_t x318 = INT8_MAX;
	int32_t x320 = -1;
	volatile uint64_t t69 = 12834902357827478LLU;

	t69 = (x317*((x318|x319)|x320));

	if (t69 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x321 = -1;
	static int32_t x322 = -12;
	volatile int16_t x324 = INT16_MIN;
	volatile int32_t t70 = 9364559;

	t70 = (x321*((x322|x323)|x324));

	if (t70 != 12) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x325 = INT32_MIN;
	int16_t x326 = -1;
	int64_t x327 = 487501LL;
	int32_t x328 = INT32_MIN;
	int64_t t71 = -1388777280598925215LL;

	t71 = (x325*((x326|x327)|x328));

	if (t71 != 2147483648LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x333 = INT32_MIN;
	int64_t x334 = INT64_MAX;
	int16_t x336 = INT16_MIN;

	t72 = (x333*((x334|x335)|x336));

	if (t72 != 2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x342 = INT8_MIN;
	int32_t x343 = INT32_MIN;
	int8_t x344 = -1;
	int64_t t73 = -10LL;

	t73 = (x341*((x342|x343)|x344));

	if (t73 != -52248788080571687LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x345 = 20U;
	int32_t x346 = 300338;
	int8_t x347 = -1;
	int32_t x348 = -1;
	int32_t t74 = 103996100;

	t74 = (x345*((x346|x347)|x348));

	if (t74 != -20) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x350 = -1;
	volatile uint32_t t75 = 102U;

	t75 = (x349*((x350|x351)|x352));

	if (t75 != 4294955484U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x354 = INT8_MIN;
	uint16_t x355 = 21U;
	uint32_t x356 = 355040U;
	volatile uint32_t t76 = 12U;

	t76 = (x353*((x354|x355)|x356));

	if (t76 != 4294246411U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x357 = UINT64_MAX;
	uint8_t x359 = UINT8_MAX;
	uint64_t t77 = 64LLU;

	t77 = (x357*((x358|x359)|x360));

	if (t77 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x361 = UINT16_MAX;
	int16_t x362 = INT16_MAX;
	int16_t x363 = INT16_MIN;
	volatile int32_t t78 = -610045878;

	t78 = (x361*((x362|x363)|x364));

	if (t78 != -65535) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x369 = 6347;
	uint8_t x371 = UINT8_MAX;
	int64_t x372 = INT64_MIN;
	int64_t t79 = 16206LL;

	t79 = (x369*((x370|x371)|x372));

	if (t79 != -13630077095371LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x373 = INT64_MAX;
	uint8_t x374 = 21U;
	int8_t x375 = INT8_MIN;
	uint16_t x376 = UINT16_MAX;

	t80 = (x373*((x374|x375)|x376));

	if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x377 = UINT8_MAX;
	volatile uint8_t x379 = 12U;
	static volatile int64_t t81 = 0LL;

	t81 = (x377*((x378|x379)|x380));

	if (t81 != 7061974267695300LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x381 = INT32_MAX;
	int64_t x382 = -677LL;
	int16_t x383 = INT16_MIN;
	int8_t x384 = INT8_MAX;
	volatile int64_t t82 = -651129188796356568LL;

	t82 = (x381*((x382|x383)|x384));

	if (t82 != -1376537017727LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x389 = INT8_MIN;
	int32_t x390 = -359;
	int64_t x391 = -1LL;
	int64_t x392 = -67489959LL;

	t83 = (x389*((x390|x391)|x392));

	if (t83 != 128LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x393 = INT8_MAX;
	int8_t x394 = INT8_MIN;
	int16_t x395 = -1;
	static volatile uint64_t t84 = 4424LLU;

	t84 = (x393*((x394|x395)|x396));

	if (t84 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = INT32_MIN;
	int8_t x399 = INT8_MIN;
	uint8_t x400 = 4U;

	t85 = (x397*((x398|x399)|x400));

	if (t85 != 15872) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x401 = 5643904446362912LL;
	int32_t x402 = -1;
	uint16_t x403 = 62U;
	volatile uint64_t x404 = 855198LLU;

	t86 = (x401*((x402|x403)|x404));

	if (t86 != 18441100169263188704LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x405 = 2U;
	int32_t x406 = -45241;
	static int32_t x408 = INT32_MIN;
	int32_t t87 = 49281;

	t87 = (x405*((x406|x407)|x408));

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = -2;
	int32_t x410 = INT32_MIN;
	uint64_t x411 = UINT64_MAX;
	static uint64_t t88 = 1451171755LLU;

	t88 = (x409*((x410|x411)|x412));

	if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x420 = INT64_MIN;
	static int64_t t89 = -12432813915LL;

	t89 = (x417*((x418|x419)|x420));

	if (t89 != 128LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x422 = 14U;
	volatile int64_t x423 = -1LL;

	t90 = (x421*((x422|x423)|x424));

	if (t90 != -127LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x425 = 1869907861595LLU;
	int32_t x426 = INT32_MIN;
	int64_t x427 = 121LL;
	uint8_t x428 = UINT8_MAX;
	volatile uint64_t t91 = 168LLU;

	t91 = (x425*((x426|x427)|x428));

	if (t91 != 5794128853277260453LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x430 = -1;
	int16_t x432 = INT16_MIN;

	t92 = (x429*((x430|x431)|x432));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x433 = INT32_MIN;
	uint32_t x436 = 1486854U;
	uint32_t t93 = 62188U;

	t93 = (x433*((x434|x435)|x436));

	if (t93 != 2147483648U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x438 = INT8_MAX;
	uint64_t x439 = 108790488588LLU;
	volatile uint64_t t94 = 6042876348833LLU;

	t94 = (x437*((x438|x439)|x440));

	if (t94 != 18446744073575284479LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x441 = UINT8_MAX;
	uint8_t x442 = 0U;
	int16_t x443 = -4456;
	volatile int64_t t95 = -210480LL;

	t95 = (x441*((x442|x443)|x444));

	if (t95 != -1136280LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x445 = 181755281447LL;
	int8_t x446 = INT8_MIN;
	volatile uint64_t x447 = 492580373115LLU;
	volatile uint64_t x448 = 3640LLU;
	volatile uint64_t t96 = 1LLU;

	t96 = (x445*((x446|x447)|x448));

	if (t96 != 18446743164933144381LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x450 = 4053936LL;
	int16_t x451 = -566;
	static volatile int64_t t97 = -15811563052LL;

	t97 = (x449*((x450|x451)|x452));

	if (t97 != 308LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x455 = 13U;
	int64_t x456 = -42805148LL;

	t98 = (x453*((x454|x455)|x456));

	if (t98 != -183846603343452285LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x457 = 9;
	static int32_t x458 = INT32_MAX;
	uint64_t x459 = 1363260LLU;
	uint16_t x460 = 505U;

	t99 = (x457*((x458|x459)|x460));

	if (t99 != 19327352823LLU) { NG(); } else { ; }
	
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

