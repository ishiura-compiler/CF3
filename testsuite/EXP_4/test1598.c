#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x17 = -923;
uint32_t x19 = 41825307U;
static volatile uint64_t x21 = UINT64_MAX;
static int32_t x23 = 22;
volatile uint64_t t3 = UINT64_MAX;
volatile int8_t x28 = -59;
uint64_t x46 = 1144506LLU;
static uint64_t t6 = 8363LLU;
uint32_t t7 = UINT32_MAX;
int16_t x98 = INT16_MAX;
static int8_t x108 = -29;
volatile int32_t t12 = -1666;
int64_t x131 = -11330021068881LL;
static uint16_t x145 = 198U;
int64_t x150 = 1739401LL;
uint32_t x158 = 330779846U;
uint8_t x174 = 43U;
static int32_t x180 = INT32_MIN;
int16_t x196 = INT16_MAX;
uint64_t x198 = 1970511683LLU;
int16_t x199 = INT16_MIN;
volatile uint64_t t26 = 349923354799LLU;
uint16_t x210 = UINT16_MAX;
volatile int8_t x217 = INT8_MIN;
volatile int32_t x232 = -114;
static volatile int32_t t31 = 20;
int32_t x257 = -31353;
volatile int16_t x263 = INT16_MAX;
int16_t x282 = INT16_MAX;
int8_t x284 = INT8_MAX;
volatile int64_t x285 = -1LL;
uint64_t x316 = 83567LLU;
uint16_t x330 = UINT16_MAX;
int64_t x346 = 1771563568979656673LL;
int16_t x348 = INT16_MIN;
uint64_t x362 = 223247772LLU;
volatile uint64_t t44 = 10505786LLU;
volatile uint32_t x366 = 536571577U;
int32_t x367 = -32289;
volatile int64_t t45 = 4335173510057LL;
volatile int8_t x372 = INT8_MAX;
static uint8_t x373 = UINT8_MAX;
int8_t x377 = 6;
int32_t x379 = -1;
int8_t x380 = -30;
static int32_t t48 = INT32_MAX;
uint64_t x390 = UINT64_MAX;
int8_t x392 = INT8_MAX;
int16_t x400 = INT16_MIN;
uint64_t x410 = 2251146142920972176LLU;
static uint16_t x415 = 452U;
int16_t x433 = INT16_MAX;
int64_t x435 = INT64_MAX;
int16_t x472 = INT16_MIN;
int32_t t64 = 4;
uint16_t x491 = UINT16_MAX;
int8_t x497 = INT8_MIN;
volatile uint32_t x498 = UINT32_MAX;
int32_t x499 = 17395;
uint8_t x523 = UINT8_MAX;
static int64_t x529 = INT64_MAX;
uint16_t x545 = 0U;
uint32_t x546 = 125U;
volatile uint64_t x547 = 18400001988LLU;
volatile uint32_t t73 = 6583482U;
int8_t x564 = 13;
static uint32_t x574 = UINT32_MAX;
int64_t x575 = -1LL;
int16_t x576 = INT16_MIN;
int64_t x577 = INT64_MAX;
int64_t t77 = INT64_MAX;
volatile int16_t x581 = INT16_MIN;
static uint8_t x582 = UINT8_MAX;
static int8_t x589 = 0;
volatile int32_t t79 = -85;
uint64_t x599 = 87971181LLU;
int32_t x609 = -1;
volatile int8_t x611 = -27;
static uint64_t x612 = 38757LLU;
volatile uint8_t x617 = 14U;
uint8_t x618 = 3U;
int64_t x629 = INT64_MIN;
int32_t x630 = 8146;
volatile uint16_t x632 = 1U;
int16_t x634 = 7565;
uint8_t x637 = UINT8_MAX;
volatile int64_t t92 = -13285571694LL;
int8_t x661 = INT8_MIN;
volatile int8_t x662 = INT8_MAX;
int32_t t93 = 0;
uint8_t x694 = 16U;
int16_t x695 = 1;
volatile int32_t t96 = 30610;
int32_t x705 = 0;
int32_t t97 = 13;
int16_t x711 = 16;
uint32_t t99 = 51601U;


void f0(void) {
	uint16_t x5 = 66U;
	int32_t x6 = 46104133;
	static int32_t x7 = INT32_MAX;
	static int8_t x8 = 24;
	volatile int32_t t0 = 7;

	t0 = (x5|(x6<<(x7<=x8)));

	if (t0 != 46104135) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = 15;
	uint8_t x14 = UINT8_MAX;
	uint8_t x15 = 0U;
	int32_t x16 = -879;
	static volatile int32_t t1 = 1870916;

	t1 = (x13|(x14<<(x15<=x16)));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x18 = INT64_MAX;
	uint16_t x20 = 0U;
	volatile int64_t t2 = -411261LL;

	t2 = (x17|(x18<<(x19<=x20)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x22 = 1U;
	static int64_t x24 = -723LL;

	t3 = (x21|(x22<<(x23<=x24)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x25 = -58;
	uint8_t x26 = 0U;
	int16_t x27 = INT16_MIN;
	static volatile int32_t t4 = -3319;

	t4 = (x25|(x26<<(x27<=x28)));

	if (t4 != -58) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x29 = INT16_MIN;
	uint8_t x30 = 0U;
	static uint32_t x31 = 497U;
	uint64_t x32 = UINT64_MAX;
	volatile int32_t t5 = -16151;

	t5 = (x29|(x30<<(x31<=x32)));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x45 = INT64_MAX;
	static int32_t x47 = 1;
	int32_t x48 = INT32_MIN;

	t6 = (x45|(x46<<(x47<=x48)));

	if (t6 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x57 = -1;
	uint32_t x58 = 9450U;
	int8_t x59 = -17;
	uint16_t x60 = UINT16_MAX;

	t7 = (x57|(x58<<(x59<=x60)));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x73 = -55774;
	int64_t x74 = 97356172364590338LL;
	uint16_t x75 = 109U;
	int64_t x76 = INT64_MAX;
	volatile int64_t t8 = 3831139833604078LL;

	t8 = (x73|(x74<<(x75<=x76)));

	if (t8 != -33242LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x77 = 872611306167636LLU;
	uint16_t x78 = UINT16_MAX;
	volatile uint64_t x79 = 180964410916651063LLU;
	uint32_t x80 = 14U;
	static volatile uint64_t t9 = 65291LLU;

	t9 = (x77|(x78<<(x79<=x80)));

	if (t9 != 872611306209279LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x85 = -159254LL;
	int32_t x86 = 213;
	static volatile uint16_t x87 = 15U;
	uint16_t x88 = 638U;
	volatile int64_t t10 = -339319134224410835LL;

	t10 = (x85|(x86<<(x87<=x88)));

	if (t10 != -159254LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x97 = -6656;
	int64_t x99 = -360LL;
	int64_t x100 = -1201550470109283LL;
	volatile int32_t t11 = -217;

	t11 = (x97|(x98<<(x99<=x100)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x105 = INT8_MAX;
	volatile uint16_t x106 = UINT16_MAX;
	volatile uint32_t x107 = 1U;

	t12 = (x105|(x106<<(x107<=x108)));

	if (t12 != 131071) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x109 = -4706629727130352LL;
	int8_t x110 = INT8_MAX;
	int16_t x111 = -1;
	volatile int64_t x112 = 13LL;
	int64_t t13 = -390790LL;

	t13 = (x109|(x110<<(x111<=x112)));

	if (t13 != -4706629727130114LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x113 = 44U;
	volatile uint64_t x114 = 12LLU;
	volatile uint32_t x115 = 15181U;
	uint64_t x116 = UINT64_MAX;
	volatile uint64_t t14 = 449LLU;

	t14 = (x113|(x114<<(x115<=x116)));

	if (t14 != 60LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x121 = INT64_MIN;
	static uint16_t x122 = 7477U;
	uint32_t x123 = UINT32_MAX;
	uint8_t x124 = 1U;
	volatile int64_t t15 = 948757LL;

	t15 = (x121|(x122<<(x123<=x124)));

	if (t15 != -9223372036854768331LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x129 = INT32_MIN;
	uint16_t x130 = UINT16_MAX;
	static volatile int64_t x132 = INT64_MIN;
	volatile int32_t t16 = 1105811;

	t16 = (x129|(x130<<(x131<=x132)));

	if (t16 != -2147418113) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x146 = INT8_MAX;
	uint64_t x147 = 946861634862485LLU;
	int64_t x148 = 121462719841009823LL;
	static int32_t t17 = 23;

	t17 = (x145|(x146<<(x147<=x148)));

	if (t17 != 254) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x149 = 1;
	static uint8_t x151 = UINT8_MAX;
	int16_t x152 = -63;
	volatile int64_t t18 = 21488LL;

	t18 = (x149|(x150<<(x151<=x152)));

	if (t18 != 1739401LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x157 = -83453157811651LL;
	static int64_t x159 = -850034566LL;
	static uint64_t x160 = 2627516971654097461LLU;
	int64_t t19 = -2186599733321LL;

	t19 = (x157|(x158<<(x159<=x160)));

	if (t19 != -83452829409537LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x161 = -1;
	uint32_t x162 = UINT32_MAX;
	uint16_t x163 = 7134U;
	int64_t x164 = -1LL;
	static volatile uint32_t t20 = UINT32_MAX;

	t20 = (x161|(x162<<(x163<=x164)));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x173 = 16LLU;
	uint32_t x175 = 381297U;
	int32_t x176 = INT32_MIN;
	volatile uint64_t t21 = 25167285LLU;

	t21 = (x173|(x174<<(x175<=x176)));

	if (t21 != 86LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x177 = INT64_MAX;
	static int8_t x178 = INT8_MAX;
	static int64_t x179 = -7308931285503368LL;
	int64_t t22 = INT64_MAX;

	t22 = (x177|(x178<<(x179<=x180)));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x181 = UINT8_MAX;
	uint8_t x182 = 14U;
	uint64_t x183 = UINT64_MAX;
	int16_t x184 = INT16_MAX;
	volatile int32_t t23 = -4136;

	t23 = (x181|(x182<<(x183<=x184)));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x185 = INT32_MIN;
	volatile uint64_t x186 = 71443458LLU;
	uint64_t x187 = UINT64_MAX;
	uint8_t x188 = 17U;
	volatile uint64_t t24 = 199410274385760194LLU;

	t24 = (x185|(x186<<(x187<=x188)));

	if (t24 != 18446744071633511426LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x193 = UINT32_MAX;
	uint16_t x194 = 12U;
	int16_t x195 = 17;
	volatile uint32_t t25 = UINT32_MAX;

	t25 = (x193|(x194<<(x195<=x196)));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x197 = INT16_MIN;
	static volatile int32_t x200 = INT32_MIN;

	t26 = (x197|(x198<<(x199<=x200)));

	if (t26 != 18446744073709526851LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x209 = 8LLU;
	volatile int16_t x211 = 1;
	int8_t x212 = -1;
	uint64_t t27 = 87472425LLU;

	t27 = (x209|(x210<<(x211<=x212)));

	if (t27 != 65535LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x218 = UINT32_MAX;
	int32_t x219 = 719190;
	static int32_t x220 = 1;
	volatile uint32_t t28 = UINT32_MAX;

	t28 = (x217|(x218<<(x219<=x220)));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x225 = 143372;
	int8_t x226 = INT8_MAX;
	int64_t x227 = INT64_MAX;
	volatile uint64_t x228 = 17174798LLU;
	int32_t t29 = 0;

	t29 = (x225|(x226<<(x227<=x228)));

	if (t29 != 143487) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x229 = -1;
	uint32_t x230 = 107249182U;
	static int8_t x231 = -1;
	volatile uint32_t t30 = UINT32_MAX;

	t30 = (x229|(x230<<(x231<=x232)));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x233 = 1;
	volatile uint8_t x234 = 0U;
	int64_t x235 = INT64_MAX;
	int32_t x236 = INT32_MAX;

	t31 = (x233|(x234<<(x235<=x236)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x241 = 136U;
	static volatile int32_t x242 = 69;
	int16_t x243 = INT16_MIN;
	int8_t x244 = INT8_MAX;
	volatile int32_t t32 = -642032264;

	t32 = (x241|(x242<<(x243<=x244)));

	if (t32 != 138) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x245 = INT16_MAX;
	static uint32_t x246 = UINT32_MAX;
	int64_t x247 = -132LL;
	static int32_t x248 = -1;
	volatile uint32_t t33 = UINT32_MAX;

	t33 = (x245|(x246<<(x247<=x248)));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x258 = 82U;
	int16_t x259 = INT16_MIN;
	static uint8_t x260 = 5U;
	uint32_t t34 = 494006U;

	t34 = (x257|(x258<<(x259<=x260)));

	if (t34 != 4294935975U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x261 = UINT64_MAX;
	static int32_t x262 = 48;
	volatile uint32_t x264 = 803073411U;
	static volatile uint64_t t35 = UINT64_MAX;

	t35 = (x261|(x262<<(x263<=x264)));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x273 = 12LLU;
	uint32_t x274 = UINT32_MAX;
	int16_t x275 = INT16_MIN;
	static volatile int8_t x276 = INT8_MAX;
	uint64_t t36 = 249258051206LLU;

	t36 = (x273|(x274<<(x275<=x276)));

	if (t36 != 4294967294LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x281 = INT16_MIN;
	int64_t x283 = -231LL;
	int32_t t37 = 233286;

	t37 = (x281|(x282<<(x283<=x284)));

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x286 = UINT64_MAX;
	int32_t x287 = -1;
	int16_t x288 = -1;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (x285|(x286<<(x287<=x288)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x289 = -1;
	int64_t x290 = 58116206LL;
	uint16_t x291 = 17466U;
	int32_t x292 = INT32_MIN;
	volatile int64_t t39 = -1070463101LL;

	t39 = (x289|(x290<<(x291<=x292)));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x301 = INT32_MAX;
	volatile uint64_t x302 = 63LLU;
	uint16_t x303 = 24U;
	int64_t x304 = 19671LL;
	volatile uint64_t t40 = 23572LLU;

	t40 = (x301|(x302<<(x303<=x304)));

	if (t40 != 2147483647LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x313 = UINT16_MAX;
	int8_t x314 = INT8_MAX;
	int8_t x315 = 0;
	int32_t t41 = -3566174;

	t41 = (x313|(x314<<(x315<=x316)));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x329 = 359;
	static int32_t x331 = INT32_MAX;
	uint64_t x332 = UINT64_MAX;
	static volatile int32_t t42 = 1;

	t42 = (x329|(x330<<(x331<=x332)));

	if (t42 != 131071) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x345 = INT32_MAX;
	static volatile uint64_t x347 = 15445358LLU;
	volatile int64_t t43 = -777465459971LL;

	t43 = (x345|(x346<<(x347<=x348)));

	if (t43 != 3543127139769384959LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x361 = 159121LLU;
	static int8_t x363 = -1;
	int8_t x364 = -2;

	t44 = (x361|(x362<<(x363<=x364)));

	if (t44 != 223247773LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x365 = INT64_MIN;
	static int32_t x368 = -382;

	t45 = (x365|(x366<<(x367<=x368)));

	if (t45 != -9223372035781632654LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x369 = INT16_MIN;
	volatile int8_t x370 = 0;
	uint64_t x371 = 67923541LLU;
	volatile int32_t t46 = 1;

	t46 = (x369|(x370<<(x371<=x372)));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x374 = INT8_MAX;
	int8_t x375 = 16;
	static int8_t x376 = INT8_MAX;
	static int32_t t47 = -12816031;

	t47 = (x373|(x374<<(x375<=x376)));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x378 = INT32_MAX;

	t48 = (x377|(x378<<(x379<=x380)));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x381 = UINT16_MAX;
	int16_t x382 = INT16_MAX;
	volatile uint32_t x383 = UINT32_MAX;
	int32_t x384 = INT32_MAX;
	int32_t t49 = 53047;

	t49 = (x381|(x382<<(x383<=x384)));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x385 = -69;
	static int32_t x386 = 0;
	static int16_t x387 = -1;
	static int64_t x388 = -1LL;
	int32_t t50 = 130143;

	t50 = (x385|(x386<<(x387<=x388)));

	if (t50 != -69) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x389 = -34;
	static int64_t x391 = -1LL;
	volatile uint64_t t51 = 4LLU;

	t51 = (x389|(x390<<(x391<=x392)));

	if (t51 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x397 = -1LL;
	int32_t x398 = 798884544;
	static int16_t x399 = INT16_MAX;
	volatile int64_t t52 = -6610932654990064LL;

	t52 = (x397|(x398<<(x399<=x400)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x401 = -1;
	volatile int16_t x402 = INT16_MAX;
	static uint16_t x403 = UINT16_MAX;
	int64_t x404 = INT64_MIN;
	int32_t t53 = 3201682;

	t53 = (x401|(x402<<(x403<=x404)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x405 = 41U;
	static uint16_t x406 = 3U;
	int16_t x407 = INT16_MIN;
	static int16_t x408 = -6;
	volatile uint32_t t54 = 10045794U;

	t54 = (x405|(x406<<(x407<=x408)));

	if (t54 != 47U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x409 = 14691266115087947LLU;
	static int64_t x411 = INT64_MIN;
	volatile int32_t x412 = 33830;
	static volatile uint64_t t55 = 613952093062413830LLU;

	t55 = (x409|(x410<<(x411<=x412)));

	if (t55 != 4503454470202929003LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x413 = UINT8_MAX;
	uint16_t x414 = 119U;
	int64_t x416 = -1LL;
	int32_t t56 = -43582;

	t56 = (x413|(x414<<(x415<=x416)));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x417 = 4903381997886LL;
	uint16_t x418 = 26U;
	uint64_t x419 = UINT64_MAX;
	int64_t x420 = -509LL;
	volatile int64_t t57 = 81878917LL;

	t57 = (x417|(x418<<(x419<=x420)));

	if (t57 != 4903381997886LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x429 = INT16_MAX;
	uint16_t x430 = 0U;
	uint8_t x431 = 0U;
	int8_t x432 = 13;
	volatile int32_t t58 = 33862;

	t58 = (x429|(x430<<(x431<=x432)));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x434 = 30U;
	int64_t x436 = INT64_MAX;
	int32_t t59 = -6898036;

	t59 = (x433|(x434<<(x435<=x436)));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x449 = 22U;
	uint32_t x450 = 7539U;
	int8_t x451 = INT8_MIN;
	int64_t x452 = 1LL;
	uint32_t t60 = 1U;

	t60 = (x449|(x450<<(x451<=x452)));

	if (t60 != 15094U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x457 = UINT8_MAX;
	static int16_t x458 = INT16_MAX;
	static int32_t x459 = -1;
	static int16_t x460 = INT16_MIN;
	volatile int32_t t61 = -27;

	t61 = (x457|(x458<<(x459<=x460)));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x465 = INT64_MAX;
	uint16_t x466 = 260U;
	int32_t x467 = INT32_MAX;
	volatile int64_t x468 = INT64_MIN;
	static volatile int64_t t62 = INT64_MAX;

	t62 = (x465|(x466<<(x467<=x468)));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x469 = INT32_MIN;
	int64_t x470 = 2043774072650553LL;
	volatile int8_t x471 = -57;
	volatile int64_t t63 = 2320LL;

	t63 = (x469|(x470<<(x471<=x472)));

	if (t63 != -1147536583LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x477 = INT16_MAX;
	int16_t x478 = INT16_MAX;
	int16_t x479 = INT16_MAX;
	uint64_t x480 = 16296975LLU;

	t64 = (x477|(x478<<(x479<=x480)));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x481 = INT64_MIN;
	uint8_t x482 = UINT8_MAX;
	int8_t x483 = -1;
	volatile uint16_t x484 = 9U;
	static int64_t t65 = 640986LL;

	t65 = (x481|(x482<<(x483<=x484)));

	if (t65 != -9223372036854775298LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x485 = 51673LL;
	uint64_t x486 = 657219LLU;
	int64_t x487 = INT64_MIN;
	volatile int64_t x488 = -253630763LL;
	uint64_t t66 = 5648314LLU;

	t66 = (x485|(x486<<(x487<=x488)));

	if (t66 != 1363935LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x489 = 1U;
	uint16_t x490 = 765U;
	uint16_t x492 = 243U;
	static int32_t t67 = -880183;

	t67 = (x489|(x490<<(x491<=x492)));

	if (t67 != 765) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x500 = INT32_MIN;
	static uint32_t t68 = UINT32_MAX;

	t68 = (x497|(x498<<(x499<=x500)));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x513 = UINT32_MAX;
	uint64_t x514 = 1502LLU;
	int8_t x515 = INT8_MAX;
	int8_t x516 = 54;
	uint64_t t69 = 222049LLU;

	t69 = (x513|(x514<<(x515<=x516)));

	if (t69 != 4294967295LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x521 = 3LL;
	uint16_t x522 = 111U;
	int64_t x524 = -456029LL;
	volatile int64_t t70 = 25471516LL;

	t70 = (x521|(x522<<(x523<=x524)));

	if (t70 != 111LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x530 = 233LL;
	uint8_t x531 = 4U;
	static int32_t x532 = 48120;
	int64_t t71 = INT64_MAX;

	t71 = (x529|(x530<<(x531<=x532)));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x537 = 9U;
	volatile int32_t x538 = INT32_MAX;
	int32_t x539 = INT32_MAX;
	int16_t x540 = 0;
	int32_t t72 = INT32_MAX;

	t72 = (x537|(x538<<(x539<=x540)));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x548 = -1;

	t73 = (x545|(x546<<(x547<=x548)));

	if (t73 != 250U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x553 = 375031495LL;
	uint8_t x554 = 24U;
	int16_t x555 = -1;
	static int16_t x556 = -1;
	int64_t t74 = -178155098187196216LL;

	t74 = (x553|(x554<<(x555<=x556)));

	if (t74 != 375031543LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x561 = -1;
	static uint64_t x562 = 26155175828093LLU;
	int16_t x563 = -13;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = (x561|(x562<<(x563<=x564)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x573 = 2U;
	uint32_t t76 = UINT32_MAX;

	t76 = (x573|(x574<<(x575<=x576)));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x578 = 0U;
	uint32_t x579 = 7996635U;
	int8_t x580 = INT8_MAX;

	t77 = (x577|(x578<<(x579<=x580)));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x583 = -1LL;
	int32_t x584 = -53;
	volatile int32_t t78 = -19941483;

	t78 = (x581|(x582<<(x583<=x584)));

	if (t78 != -32513) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x590 = INT16_MAX;
	volatile int64_t x591 = -7797LL;
	int64_t x592 = -135115578518948739LL;

	t79 = (x589|(x590<<(x591<=x592)));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x597 = 3U;
	int16_t x598 = INT16_MAX;
	int16_t x600 = 0;
	volatile int32_t t80 = 6156882;

	t80 = (x597|(x598<<(x599<=x600)));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x601 = INT8_MIN;
	uint8_t x602 = 59U;
	volatile uint64_t x603 = 8627392596853606049LLU;
	uint32_t x604 = 133127488U;
	int32_t t81 = -45956930;

	t81 = (x601|(x602<<(x603<=x604)));

	if (t81 != -69) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x605 = INT8_MIN;
	uint16_t x606 = 201U;
	static int16_t x607 = INT16_MIN;
	int16_t x608 = INT16_MIN;
	volatile int32_t t82 = 4523;

	t82 = (x605|(x606<<(x607<=x608)));

	if (t82 != -110) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x610 = 9462553507LLU;
	static volatile uint64_t t83 = UINT64_MAX;

	t83 = (x609|(x610<<(x611<=x612)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x619 = INT64_MIN;
	volatile int32_t x620 = INT32_MIN;
	volatile int32_t t84 = 3;

	t84 = (x617|(x618<<(x619<=x620)));

	if (t84 != 14) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x621 = INT32_MIN;
	int32_t x622 = 7;
	int32_t x623 = INT32_MIN;
	static int64_t x624 = -1LL;
	static volatile int32_t t85 = -80404;

	t85 = (x621|(x622<<(x623<=x624)));

	if (t85 != -2147483634) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x625 = 6072U;
	uint64_t x626 = 113710568529LLU;
	volatile int16_t x627 = INT16_MIN;
	uint8_t x628 = 2U;
	uint64_t t86 = 59246903138681LLU;

	t86 = (x625|(x626<<(x627<=x628)));

	if (t86 != 227421142970LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x631 = -31;
	static int64_t t87 = 185049688118191LL;

	t87 = (x629|(x630<<(x631<=x632)));

	if (t87 != -9223372036854759516LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x633 = -2263;
	static int32_t x635 = -4153;
	static int8_t x636 = INT8_MIN;
	int32_t t88 = -109;

	t88 = (x633|(x634<<(x635<=x636)));

	if (t88 != -197) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x638 = 60;
	int8_t x639 = -1;
	int8_t x640 = 1;
	int32_t t89 = -57148;

	t89 = (x637|(x638<<(x639<=x640)));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x641 = UINT64_MAX;
	static volatile int32_t x642 = 1212;
	uint8_t x643 = 55U;
	uint8_t x644 = 6U;
	static uint64_t t90 = UINT64_MAX;

	t90 = (x641|(x642<<(x643<=x644)));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x645 = 34224183465415894LL;
	int32_t x646 = INT32_MAX;
	uint64_t x647 = 12511566394LLU;
	int32_t x648 = INT32_MAX;
	int64_t t91 = -18023LL;

	t91 = (x645|(x646<<(x647<=x648)));

	if (t91 != 34224184905170943LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x657 = INT64_MIN;
	int16_t x658 = 1286;
	volatile uint64_t x659 = UINT64_MAX;
	volatile int64_t x660 = -1LL;

	t92 = (x657|(x658<<(x659<=x660)));

	if (t92 != -9223372036854773236LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x663 = UINT32_MAX;
	uint32_t x664 = 8099U;

	t93 = (x661|(x662<<(x663<=x664)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x669 = 25511U;
	static uint8_t x670 = UINT8_MAX;
	static uint32_t x671 = 0U;
	volatile uint32_t x672 = 7U;
	volatile uint32_t t94 = 499855U;

	t94 = (x669|(x670<<(x671<=x672)));

	if (t94 != 25599U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x689 = UINT64_MAX;
	int8_t x690 = 1;
	int8_t x691 = INT8_MIN;
	static int16_t x692 = 51;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (x689|(x690<<(x691<=x692)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x693 = -1;
	int32_t x696 = -872;

	t96 = (x693|(x694<<(x695<=x696)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x706 = 1;
	int8_t x707 = -1;
	int64_t x708 = -166743981LL;

	t97 = (x705|(x706<<(x707<=x708)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x709 = 6U;
	uint16_t x710 = 5920U;
	int64_t x712 = -764639809385689809LL;
	int32_t t98 = -32192;

	t98 = (x709|(x710<<(x711<=x712)));

	if (t98 != 5926) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x729 = 0U;
	static uint32_t x730 = 0U;
	static uint8_t x731 = UINT8_MAX;
	int16_t x732 = INT16_MIN;

	t99 = (x729|(x730<<(x731<=x732)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

