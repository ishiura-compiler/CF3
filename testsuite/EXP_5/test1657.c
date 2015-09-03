#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 5U;
static uint16_t x9 = 354U;
int8_t x12 = 18;
volatile int32_t t2 = 724580;
int8_t x55 = INT8_MIN;
uint64_t x96 = UINT64_MAX;
static int32_t t9 = -948283658;
static uint8_t x101 = 0U;
int16_t x111 = -1;
int32_t x121 = INT32_MAX;
static volatile int32_t t13 = INT32_MAX;
int8_t x130 = -3;
int32_t x132 = 12982;
int16_t x135 = -3;
uint32_t t17 = UINT32_MAX;
volatile int64_t t18 = INT64_MAX;
int16_t x181 = 753;
int64_t x184 = -95525572776637832LL;
static uint16_t x185 = 125U;
uint64_t x187 = 5931131952243LLU;
static uint32_t x189 = 81753U;
volatile uint16_t x191 = 12U;
int8_t x192 = INT8_MIN;
uint8_t x196 = 114U;
static uint32_t x197 = UINT32_MAX;
uint16_t x199 = 22358U;
uint8_t x227 = UINT8_MAX;
int16_t x235 = INT16_MAX;
uint64_t x237 = 863LLU;
int8_t x248 = INT8_MAX;
static int32_t t29 = 3046256;
static uint32_t x257 = 250U;
int8_t x263 = INT8_MIN;
volatile int64_t x264 = INT64_MIN;
volatile uint8_t x275 = 13U;
uint32_t t33 = 678637U;
uint16_t x284 = 0U;
volatile int32_t t37 = 967869861;
volatile int32_t t38 = -240470683;
static uint16_t x336 = 7177U;
uint32_t t42 = 6003528U;
static int64_t x337 = INT64_MAX;
volatile int64_t t43 = INT64_MAX;
volatile uint8_t x344 = UINT8_MAX;
static volatile int32_t t44 = 2729;
int64_t x357 = 14577465734454812LL;
volatile uint8_t x360 = 0U;
int8_t x370 = -1;
static volatile int32_t t47 = -49086;
uint64_t x385 = 172667846935863144LLU;
uint32_t t51 = 1212U;
static uint16_t x401 = 22700U;
volatile int32_t t52 = -3540;
int16_t x418 = INT16_MIN;
int64_t x431 = 110480705926LL;
uint8_t x432 = UINT8_MAX;
volatile int16_t x434 = INT16_MIN;
int32_t t56 = -7123071;
static int8_t x442 = 0;
uint64_t t58 = 6758528774490LLU;
volatile uint8_t x453 = UINT8_MAX;
static int16_t x454 = INT16_MAX;
uint32_t x462 = UINT32_MAX;
static int32_t t61 = -12650727;
int32_t x467 = INT32_MAX;
static int8_t x472 = 3;
uint64_t x481 = 1575LLU;
uint64_t t65 = 229LLU;
uint8_t x494 = 15U;
static volatile int16_t x495 = INT16_MIN;
volatile int32_t t66 = 496312;
int64_t x521 = 25LL;
int64_t x535 = 209471LL;
int64_t x536 = -1LL;
int32_t t69 = 3;
static int32_t x545 = INT32_MAX;
uint8_t x547 = 5U;
uint64_t x549 = 5923857088841931061LLU;
uint64_t x553 = 39LLU;
int32_t x555 = INT32_MAX;
uint8_t x561 = 67U;
static volatile uint32_t x566 = UINT32_MAX;
volatile int64_t x579 = 22742623417295815LL;
int64_t x593 = 4498397990737016LL;
int32_t x594 = INT32_MIN;
volatile uint64_t x611 = UINT64_MAX;
static int8_t x616 = INT8_MIN;
int16_t x621 = 6;
int32_t t84 = 21017;
int8_t x628 = INT8_MIN;
uint8_t x632 = 2U;
static int32_t x655 = -44947;
volatile int32_t t88 = -10734518;
uint32_t x674 = UINT32_MAX;
uint8_t x685 = 10U;
int32_t t90 = 0;
volatile int8_t x693 = INT8_MAX;
uint8_t x708 = 3U;
uint8_t x711 = UINT8_MAX;
volatile uint32_t t93 = 10U;
int32_t x713 = INT32_MAX;
static uint8_t x756 = 34U;
int32_t t99 = -7485991;


void f0(void) {
	int64_t x2 = INT64_MIN;
	int16_t x3 = INT16_MIN;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -3737;

	t0 = (x1<<((x2<=x3)&x4));

	if (t0 != 10) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x10 = UINT64_MAX;
	uint8_t x11 = 11U;
	volatile int32_t t1 = 46;

	t1 = (x9<<((x10<=x11)&x12));

	if (t1 != 354) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = 11238;
	int8_t x14 = 1;
	uint32_t x15 = UINT32_MAX;
	int32_t x16 = -3;

	t2 = (x13<<((x14<=x15)&x16));

	if (t2 != 22476) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x33 = UINT8_MAX;
	int16_t x34 = -1;
	int32_t x35 = 5613442;
	int32_t x36 = 3989;
	volatile int32_t t3 = -15;

	t3 = (x33<<((x34<=x35)&x36));

	if (t3 != 510) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x45 = INT16_MAX;
	static int8_t x46 = INT8_MAX;
	static int16_t x47 = INT16_MIN;
	volatile int8_t x48 = INT8_MIN;
	static int32_t t4 = 2;

	t4 = (x45<<((x46<=x47)&x48));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x49 = 258788U;
	int8_t x50 = INT8_MAX;
	int16_t x51 = INT16_MIN;
	uint32_t x52 = 196942U;
	volatile uint32_t t5 = 41U;

	t5 = (x49<<((x50<=x51)&x52));

	if (t5 != 258788U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x53 = 120507LL;
	int8_t x54 = 31;
	uint8_t x56 = 43U;
	int64_t t6 = 12101895269380LL;

	t6 = (x53<<((x54<=x55)&x56));

	if (t6 != 120507LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x69 = 318;
	uint16_t x70 = 15062U;
	int64_t x71 = INT64_MIN;
	volatile int64_t x72 = -3686930763020018767LL;
	volatile int32_t t7 = 9170946;

	t7 = (x69<<((x70<=x71)&x72));

	if (t7 != 318) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x85 = 54U;
	uint32_t x86 = 7877763U;
	int64_t x87 = -24344710898922LL;
	int32_t x88 = INT32_MIN;
	uint32_t t8 = 354U;

	t8 = (x85<<((x86<=x87)&x88));

	if (t8 != 54U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x93 = 14;
	uint16_t x94 = 30U;
	volatile uint8_t x95 = UINT8_MAX;

	t9 = (x93<<((x94<=x95)&x96));

	if (t9 != 28) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x102 = -10769LL;
	uint16_t x103 = 1166U;
	int64_t x104 = INT64_MAX;
	volatile int32_t t10 = -14;

	t10 = (x101<<((x102<=x103)&x104));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x105 = 164894874761492LLU;
	volatile uint8_t x106 = 6U;
	int64_t x107 = 35647994016559476LL;
	int16_t x108 = -1636;
	static volatile uint64_t t11 = 149477LLU;

	t11 = (x105<<((x106<=x107)&x108));

	if (t11 != 164894874761492LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x109 = 84U;
	volatile int16_t x110 = 94;
	int8_t x112 = INT8_MAX;
	uint32_t t12 = 2859366U;

	t12 = (x109<<((x110<=x111)&x112));

	if (t12 != 84U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x122 = INT32_MIN;
	int16_t x123 = 6;
	int16_t x124 = INT16_MIN;

	t13 = (x121<<((x122<=x123)&x124));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x129 = 29U;
	int16_t x131 = INT16_MIN;
	int32_t t14 = 4054163;

	t14 = (x129<<((x130<=x131)&x132));

	if (t14 != 29) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x133 = 7754U;
	int16_t x134 = INT16_MAX;
	int16_t x136 = INT16_MIN;
	volatile int32_t t15 = 93299733;

	t15 = (x133<<((x134<=x135)&x136));

	if (t15 != 7754) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x141 = INT32_MAX;
	int8_t x142 = INT8_MAX;
	volatile int8_t x143 = -15;
	uint32_t x144 = 3973614U;
	volatile int32_t t16 = INT32_MAX;

	t16 = (x141<<((x142<=x143)&x144));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x145 = UINT32_MAX;
	int8_t x146 = -1;
	int8_t x147 = INT8_MAX;
	int32_t x148 = INT32_MIN;

	t17 = (x145<<((x146<=x147)&x148));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x173 = INT64_MAX;
	static volatile int16_t x174 = INT16_MIN;
	static int32_t x175 = INT32_MIN;
	static int16_t x176 = -1;

	t18 = (x173<<((x174<=x175)&x176));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x182 = 7122U;
	int16_t x183 = -1;
	volatile int32_t t19 = -320;

	t19 = (x181<<((x182<=x183)&x184));

	if (t19 != 753) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x186 = INT16_MAX;
	volatile int16_t x188 = INT16_MAX;
	static volatile int32_t t20 = 5452378;

	t20 = (x185<<((x186<=x187)&x188));

	if (t20 != 250) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x190 = -1;
	uint32_t t21 = 402U;

	t21 = (x189<<((x190<=x191)&x192));

	if (t21 != 81753U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x193 = INT32_MAX;
	int16_t x194 = INT16_MIN;
	uint64_t x195 = 186779553LLU;
	volatile int32_t t22 = INT32_MAX;

	t22 = (x193<<((x194<=x195)&x196));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x198 = 93446LLU;
	int16_t x200 = INT16_MAX;
	volatile uint32_t t23 = UINT32_MAX;

	t23 = (x197<<((x198<=x199)&x200));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x213 = INT64_MAX;
	volatile int8_t x214 = INT8_MIN;
	static int64_t x215 = INT64_MIN;
	static uint64_t x216 = UINT64_MAX;
	volatile int64_t t24 = INT64_MAX;

	t24 = (x213<<((x214<=x215)&x216));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x225 = 116U;
	int64_t x226 = INT64_MIN;
	int8_t x228 = INT8_MIN;
	int32_t t25 = 14640285;

	t25 = (x225<<((x226<=x227)&x228));

	if (t25 != 116) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x233 = UINT16_MAX;
	int8_t x234 = -1;
	int8_t x236 = INT8_MIN;
	int32_t t26 = -941;

	t26 = (x233<<((x234<=x235)&x236));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x238 = 1U;
	static volatile int64_t x239 = INT64_MIN;
	int64_t x240 = INT64_MIN;
	static volatile uint64_t t27 = 1472424088718398180LLU;

	t27 = (x237<<((x238<=x239)&x240));

	if (t27 != 863LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x245 = 14477989413LLU;
	int64_t x246 = -1LL;
	volatile int64_t x247 = -1492796333LL;
	uint64_t t28 = 248027046059889983LLU;

	t28 = (x245<<((x246<=x247)&x248));

	if (t28 != 14477989413LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x249 = 5223U;
	int64_t x250 = INT64_MIN;
	uint64_t x251 = 636476777320LLU;
	uint16_t x252 = 2U;

	t29 = (x249<<((x250<=x251)&x252));

	if (t29 != 5223) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x258 = UINT16_MAX;
	int16_t x259 = -1;
	int16_t x260 = -6;
	static volatile uint32_t t30 = 158U;

	t30 = (x257<<((x258<=x259)&x260));

	if (t30 != 250U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x261 = 621LLU;
	int32_t x262 = INT32_MIN;
	volatile uint64_t t31 = 3225411317595503487LLU;

	t31 = (x261<<((x262<=x263)&x264));

	if (t31 != 621LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x273 = 1U;
	int64_t x274 = INT64_MIN;
	int16_t x276 = INT16_MIN;
	static int32_t t32 = 96;

	t32 = (x273<<((x274<=x275)&x276));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x277 = 21696U;
	uint8_t x278 = UINT8_MAX;
	uint64_t x279 = UINT64_MAX;
	volatile uint32_t x280 = UINT32_MAX;

	t33 = (x277<<((x278<=x279)&x280));

	if (t33 != 43392U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x281 = 127365U;
	static int64_t x282 = INT64_MIN;
	int16_t x283 = INT16_MIN;
	static volatile uint32_t t34 = 393748U;

	t34 = (x281<<((x282<=x283)&x284));

	if (t34 != 127365U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x285 = UINT8_MAX;
	volatile int32_t x286 = 722889;
	static int64_t x287 = INT64_MIN;
	int8_t x288 = INT8_MIN;
	int32_t t35 = -60132;

	t35 = (x285<<((x286<=x287)&x288));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x297 = 0;
	volatile int16_t x298 = 539;
	int8_t x299 = 19;
	uint32_t x300 = UINT32_MAX;
	volatile int32_t t36 = -85734;

	t36 = (x297<<((x298<=x299)&x300));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x309 = UINT8_MAX;
	volatile int32_t x310 = -1;
	int16_t x311 = -1;
	int16_t x312 = INT16_MIN;

	t37 = (x309<<((x310<=x311)&x312));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x313 = UINT8_MAX;
	int32_t x314 = 24585776;
	int64_t x315 = INT64_MAX;
	uint32_t x316 = 908490492U;

	t38 = (x313<<((x314<=x315)&x316));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x317 = 785U;
	int8_t x318 = INT8_MAX;
	uint16_t x319 = 205U;
	int16_t x320 = INT16_MIN;
	volatile int32_t t39 = 431534;

	t39 = (x317<<((x318<=x319)&x320));

	if (t39 != 785) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x325 = 185U;
	static uint64_t x326 = UINT64_MAX;
	static uint32_t x327 = 2926113U;
	static int8_t x328 = INT8_MAX;
	static volatile int32_t t40 = 1;

	t40 = (x325<<((x326<=x327)&x328));

	if (t40 != 185) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x329 = 50;
	int64_t x330 = INT64_MAX;
	uint32_t x331 = 4U;
	uint64_t x332 = 210798921633LLU;
	volatile int32_t t41 = 696764532;

	t41 = (x329<<((x330<=x331)&x332));

	if (t41 != 50) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x333 = 8186U;
	int16_t x334 = INT16_MAX;
	volatile int32_t x335 = 49877913;

	t42 = (x333<<((x334<=x335)&x336));

	if (t42 != 16372U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x338 = -6322LL;
	uint64_t x339 = 104LLU;
	int8_t x340 = 0;

	t43 = (x337<<((x338<=x339)&x340));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x341 = 1U;
	int16_t x342 = INT16_MIN;
	int64_t x343 = -1LL;

	t44 = (x341<<((x342<=x343)&x344));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x358 = -107;
	static int32_t x359 = 295;
	volatile int64_t t45 = 6205LL;

	t45 = (x357<<((x358<=x359)&x360));

	if (t45 != 14577465734454812LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x365 = 265231923482LL;
	uint8_t x366 = 29U;
	int8_t x367 = INT8_MAX;
	int64_t x368 = -14528904604722696LL;
	int64_t t46 = -395191924617890LL;

	t46 = (x365<<((x366<=x367)&x368));

	if (t46 != 265231923482LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x369 = 3;
	uint16_t x371 = 0U;
	int8_t x372 = 15;

	t47 = (x369<<((x370<=x371)&x372));

	if (t47 != 6) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x373 = 418;
	int64_t x374 = -59906497977LL;
	int8_t x375 = 1;
	int16_t x376 = INT16_MIN;
	int32_t t48 = 277142;

	t48 = (x373<<((x374<=x375)&x376));

	if (t48 != 418) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x386 = INT8_MIN;
	int8_t x387 = INT8_MIN;
	int8_t x388 = -1;
	volatile uint64_t t49 = 6028179LLU;

	t49 = (x385<<((x386<=x387)&x388));

	if (t49 != 345335693871726288LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x389 = INT64_MAX;
	uint32_t x390 = 73080178U;
	static int16_t x391 = INT16_MIN;
	uint8_t x392 = 18U;
	int64_t t50 = INT64_MAX;

	t50 = (x389<<((x390<=x391)&x392));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x397 = 12694579U;
	uint16_t x398 = UINT16_MAX;
	uint16_t x399 = 382U;
	int32_t x400 = -55;

	t51 = (x397<<((x398<=x399)&x400));

	if (t51 != 12694579U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x402 = INT64_MIN;
	int64_t x403 = INT64_MAX;
	static int8_t x404 = 0;

	t52 = (x401<<((x402<=x403)&x404));

	if (t52 != 22700) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x417 = 423;
	static uint64_t x419 = 55LLU;
	int64_t x420 = 18719114149873LL;
	volatile int32_t t53 = 95121635;

	t53 = (x417<<((x418<=x419)&x420));

	if (t53 != 423) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x429 = 0U;
	volatile uint16_t x430 = 6514U;
	volatile int32_t t54 = -138;

	t54 = (x429<<((x430<=x431)&x432));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x433 = UINT8_MAX;
	volatile int64_t x435 = -2302570572151066514LL;
	int64_t x436 = 1020LL;
	int32_t t55 = 29676;

	t55 = (x433<<((x434<=x435)&x436));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x437 = 10;
	int16_t x438 = 2;
	volatile int32_t x439 = -1;
	int32_t x440 = 21;

	t56 = (x437<<((x438<=x439)&x440));

	if (t56 != 10) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x441 = 192;
	static int8_t x443 = 10;
	static int32_t x444 = INT32_MIN;
	volatile int32_t t57 = -2342426;

	t57 = (x441<<((x442<=x443)&x444));

	if (t57 != 192) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x449 = 353470626372LLU;
	static int8_t x450 = INT8_MIN;
	int16_t x451 = -7;
	volatile int64_t x452 = 305LL;

	t58 = (x449<<((x450<=x451)&x452));

	if (t58 != 706941252744LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x455 = INT16_MAX;
	int8_t x456 = INT8_MIN;
	int32_t t59 = 33;

	t59 = (x453<<((x454<=x455)&x456));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x457 = 2095;
	int64_t x458 = -46430519352959297LL;
	uint32_t x459 = UINT32_MAX;
	uint8_t x460 = UINT8_MAX;
	int32_t t60 = -1906931;

	t60 = (x457<<((x458<=x459)&x460));

	if (t60 != 4190) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x461 = 9;
	uint32_t x463 = 30U;
	int16_t x464 = -1;

	t61 = (x461<<((x462<=x463)&x464));

	if (t61 != 9) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x465 = 364;
	static int32_t x466 = INT32_MIN;
	static uint64_t x468 = UINT64_MAX;
	volatile int32_t t62 = -2487061;

	t62 = (x465<<((x466<=x467)&x468));

	if (t62 != 728) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x469 = UINT32_MAX;
	int16_t x470 = INT16_MIN;
	int64_t x471 = INT64_MAX;
	uint32_t t63 = 8169U;

	t63 = (x469<<((x470<=x471)&x472));

	if (t63 != 4294967294U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x477 = UINT64_MAX;
	int64_t x478 = -44205406LL;
	int32_t x479 = -1;
	static int8_t x480 = INT8_MAX;
	uint64_t t64 = 3LLU;

	t64 = (x477<<((x478<=x479)&x480));

	if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x482 = INT64_MIN;
	static uint64_t x483 = 9860448648LLU;
	int64_t x484 = INT64_MIN;

	t65 = (x481<<((x482<=x483)&x484));

	if (t65 != 1575LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x493 = 78U;
	volatile int32_t x496 = INT32_MIN;

	t66 = (x493<<((x494<=x495)&x496));

	if (t66 != 78) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x497 = 2;
	uint16_t x498 = UINT16_MAX;
	volatile int32_t x499 = 509753713;
	int8_t x500 = INT8_MIN;
	volatile int32_t t67 = 57;

	t67 = (x497<<((x498<=x499)&x500));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x522 = 3434;
	static uint32_t x523 = 3485U;
	static int16_t x524 = 72;
	volatile int64_t t68 = 196329406LL;

	t68 = (x521<<((x522<=x523)&x524));

	if (t68 != 25LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x533 = UINT16_MAX;
	int64_t x534 = INT64_MIN;

	t69 = (x533<<((x534<=x535)&x536));

	if (t69 != 131070) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x537 = UINT32_MAX;
	uint8_t x538 = 2U;
	int16_t x539 = INT16_MIN;
	volatile uint8_t x540 = 52U;
	static volatile uint32_t t70 = UINT32_MAX;

	t70 = (x537<<((x538<=x539)&x540));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x541 = 31249488LLU;
	static uint8_t x542 = UINT8_MAX;
	int32_t x543 = INT32_MAX;
	int8_t x544 = INT8_MIN;
	volatile uint64_t t71 = 372214714968765LLU;

	t71 = (x541<<((x542<=x543)&x544));

	if (t71 != 31249488LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x546 = -528488463;
	int16_t x548 = INT16_MIN;
	volatile int32_t t72 = INT32_MAX;

	t72 = (x545<<((x546<=x547)&x548));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x550 = INT32_MIN;
	static uint8_t x551 = 3U;
	uint8_t x552 = 0U;
	volatile uint64_t t73 = 0LLU;

	t73 = (x549<<((x550<=x551)&x552));

	if (t73 != 5923857088841931061LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x554 = INT32_MIN;
	volatile uint8_t x556 = 1U;
	static uint64_t t74 = 79543299193130563LLU;

	t74 = (x553<<((x554<=x555)&x556));

	if (t74 != 78LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x562 = INT64_MIN;
	int64_t x563 = INT64_MAX;
	int8_t x564 = -6;
	volatile int32_t t75 = -2246908;

	t75 = (x561<<((x562<=x563)&x564));

	if (t75 != 67) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x565 = 5617350;
	static int32_t x567 = -960722249;
	uint32_t x568 = UINT32_MAX;
	int32_t t76 = 176213233;

	t76 = (x565<<((x566<=x567)&x568));

	if (t76 != 5617350) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x577 = 575U;
	int32_t x578 = INT32_MIN;
	int16_t x580 = -1418;
	int32_t t77 = -80930704;

	t77 = (x577<<((x578<=x579)&x580));

	if (t77 != 575) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x581 = 1577LLU;
	static int32_t x582 = 4293;
	int64_t x583 = INT64_MAX;
	volatile int8_t x584 = 0;
	volatile uint64_t t78 = 92682LLU;

	t78 = (x581<<((x582<=x583)&x584));

	if (t78 != 1577LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x595 = 24;
	int8_t x596 = INT8_MAX;
	int64_t t79 = -710506614LL;

	t79 = (x593<<((x594<=x595)&x596));

	if (t79 != 8996795981474032LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x597 = 242U;
	int32_t x598 = 73;
	volatile int8_t x599 = INT8_MIN;
	volatile int8_t x600 = 0;
	int32_t t80 = -103;

	t80 = (x597<<((x598<=x599)&x600));

	if (t80 != 242) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x609 = 749979198LLU;
	int32_t x610 = -1;
	uint8_t x612 = 19U;
	volatile uint64_t t81 = 2049628984793119612LLU;

	t81 = (x609<<((x610<=x611)&x612));

	if (t81 != 1499958396LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x613 = UINT32_MAX;
	int32_t x614 = INT32_MIN;
	volatile int16_t x615 = INT16_MIN;
	volatile uint32_t t82 = UINT32_MAX;

	t82 = (x613<<((x614<=x615)&x616));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x617 = INT64_MAX;
	static int16_t x618 = INT16_MIN;
	int32_t x619 = INT32_MIN;
	int16_t x620 = INT16_MAX;
	static volatile int64_t t83 = INT64_MAX;

	t83 = (x617<<((x618<=x619)&x620));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x622 = 5U;
	static int64_t x623 = INT64_MIN;
	int16_t x624 = INT16_MAX;

	t84 = (x621<<((x622<=x623)&x624));

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x625 = 875U;
	static uint32_t x626 = 362136U;
	static uint32_t x627 = UINT32_MAX;
	int32_t t85 = 289345354;

	t85 = (x625<<((x626<=x627)&x628));

	if (t85 != 875) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x629 = 117787057U;
	int32_t x630 = -178708971;
	int8_t x631 = 31;
	volatile uint32_t t86 = 584151921U;

	t86 = (x629<<((x630<=x631)&x632));

	if (t86 != 117787057U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x649 = UINT64_MAX;
	int64_t x650 = -1LL;
	int8_t x651 = INT8_MAX;
	static int8_t x652 = 19;
	volatile uint64_t t87 = 396637779944LLU;

	t87 = (x649<<((x650<=x651)&x652));

	if (t87 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x653 = UINT8_MAX;
	int32_t x654 = INT32_MAX;
	volatile int16_t x656 = -3;

	t88 = (x653<<((x654<=x655)&x656));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x673 = UINT16_MAX;
	int64_t x675 = INT64_MAX;
	int8_t x676 = -1;
	volatile int32_t t89 = 5;

	t89 = (x673<<((x674<=x675)&x676));

	if (t89 != 131070) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x686 = 84U;
	int16_t x687 = INT16_MIN;
	int8_t x688 = INT8_MAX;

	t90 = (x685<<((x686<=x687)&x688));

	if (t90 != 10) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x694 = 1U;
	static volatile int8_t x695 = INT8_MIN;
	volatile int16_t x696 = INT16_MIN;
	int32_t t91 = 130251926;

	t91 = (x693<<((x694<=x695)&x696));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x705 = 880U;
	uint32_t x706 = 74450307U;
	static uint8_t x707 = 29U;
	static volatile uint32_t t92 = 35084720U;

	t92 = (x705<<((x706<=x707)&x708));

	if (t92 != 880U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x709 = 7U;
	volatile int32_t x710 = 465267;
	uint16_t x712 = UINT16_MAX;

	t93 = (x709<<((x710<=x711)&x712));

	if (t93 != 7U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x714 = -1LL;
	int8_t x715 = INT8_MIN;
	int32_t x716 = 524737217;
	int32_t t94 = INT32_MAX;

	t94 = (x713<<((x714<=x715)&x716));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x717 = 2U;
	int32_t x718 = -62899116;
	int16_t x719 = INT16_MAX;
	uint16_t x720 = 57U;
	static int32_t t95 = 170555721;

	t95 = (x717<<((x718<=x719)&x720));

	if (t95 != 4) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x729 = INT64_MAX;
	volatile uint8_t x730 = 29U;
	uint8_t x731 = UINT8_MAX;
	int8_t x732 = -6;
	int64_t t96 = INT64_MAX;

	t96 = (x729<<((x730<=x731)&x732));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x741 = UINT64_MAX;
	static uint8_t x742 = UINT8_MAX;
	volatile int32_t x743 = 517;
	uint16_t x744 = 3010U;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x741<<((x742<=x743)&x744));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x749 = UINT32_MAX;
	volatile int64_t x750 = INT64_MAX;
	volatile int64_t x751 = 13140118LL;
	static int64_t x752 = 37598437452LL;
	static volatile uint32_t t98 = UINT32_MAX;

	t98 = (x749<<((x750<=x751)&x752));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x753 = 0;
	static int64_t x754 = -1LL;
	volatile uint32_t x755 = 821640U;

	t99 = (x753<<((x754<=x755)&x756));

	if (t99 != 0) { NG(); } else { ; }
	
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

