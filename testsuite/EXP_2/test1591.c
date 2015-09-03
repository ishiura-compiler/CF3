#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = -1;
int64_t x13 = INT64_MAX;
uint16_t x16 = 14U;
volatile uint32_t t2 = 0U;
volatile int16_t x42 = 28;
int64_t x43 = -1LL;
uint16_t x65 = 1U;
int32_t t8 = 117;
uint32_t x75 = 0U;
volatile uint16_t x77 = UINT16_MAX;
int8_t x78 = INT8_MAX;
int8_t x88 = -30;
int32_t t11 = 119690;
volatile int8_t x92 = 27;
volatile uint16_t x98 = 1U;
volatile int64_t t14 = 191673LL;
uint8_t x108 = 96U;
int16_t x120 = INT16_MAX;
uint64_t x137 = 15700LLU;
uint8_t x139 = 15U;
static int8_t x145 = INT8_MAX;
volatile int32_t t19 = -409776506;
uint32_t t21 = 14306884U;
int32_t x174 = INT32_MIN;
int32_t x175 = -1;
static int16_t x191 = INT16_MAX;
int16_t x192 = 1;
volatile uint64_t t27 = 2973LLU;
int16_t x226 = INT16_MIN;
int32_t x233 = 27188;
static int64_t x234 = -1LL;
int32_t x255 = INT32_MIN;
uint16_t x257 = 0U;
static int32_t x258 = 13;
static int16_t x275 = 0;
int8_t x280 = -1;
uint16_t x325 = UINT16_MAX;
volatile uint16_t x326 = 2U;
int64_t x330 = INT64_MIN;
static volatile uint32_t x339 = UINT32_MAX;
static uint8_t x341 = 24U;
static int64_t x346 = INT64_MIN;
volatile uint16_t x368 = UINT16_MAX;
uint16_t x376 = UINT16_MAX;
static uint8_t x378 = 59U;
static int32_t x380 = INT32_MAX;
int16_t x389 = 114;
int32_t t49 = 3146029;
int8_t x393 = 10;
uint16_t x394 = 152U;
int64_t x418 = -1LL;
uint32_t x419 = 1U;
int64_t x420 = -1LL;
int16_t x427 = INT16_MIN;
static volatile int16_t x428 = -44;
volatile int32_t t52 = -267116950;
volatile int16_t x439 = -1;
int32_t x447 = INT32_MIN;
uint64_t x453 = 497126472LLU;
uint16_t x465 = 3U;
int8_t x466 = -8;
int32_t x490 = INT32_MIN;
volatile uint64_t x494 = 38287422304LLU;
static volatile uint64_t x526 = UINT64_MAX;
uint8_t x530 = 2U;
int32_t x531 = INT32_MIN;
uint32_t x535 = 1658706U;
static uint64_t t65 = 223351LLU;
uint32_t t66 = 137U;
uint64_t x573 = 3597463LLU;
static uint16_t x581 = UINT16_MAX;
int16_t x585 = 24;
uint32_t x586 = 1052369135U;
uint64_t x587 = 25LLU;
static int32_t x596 = -1;
int64_t t75 = -225LL;
uint32_t x629 = 1769U;
int16_t x631 = -1;
int32_t x654 = INT32_MAX;
int32_t x656 = INT32_MIN;
int32_t x663 = 94;
static int32_t t82 = -41798949;
uint8_t x697 = 84U;
static int32_t x704 = -28749766;
uint32_t t86 = 92U;
uint64_t x729 = 4848846596982462174LLU;
uint16_t x732 = 7U;
uint64_t t88 = 145997848418LLU;
int8_t x739 = -1;
int32_t x759 = INT32_MAX;
int16_t x766 = INT16_MIN;
static uint8_t x768 = UINT8_MAX;
static int32_t t92 = -2075371;
int32_t x778 = -37727;
uint64_t t93 = 560LLU;
static uint64_t t94 = 8LLU;
static volatile int32_t x840 = -9318;
int8_t x869 = 6;


void f0(void) {
	static uint32_t x5 = UINT32_MAX;
	int16_t x6 = INT16_MIN;
	int32_t x7 = INT32_MAX;
	volatile uint32_t t0 = 257707081U;

	t0 = ((x5<<(x6<=x7))%x8);

	if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x14 = 10;
	int16_t x15 = INT16_MIN;
	static volatile int64_t t1 = 830758LL;

	t1 = ((x13<<(x14<=x15))%x16);

	if (t1 != 7LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x21 = 3569U;
	volatile int8_t x22 = 2;
	uint32_t x23 = UINT32_MAX;
	volatile int8_t x24 = 32;

	t2 = ((x21<<(x22<=x23))%x24);

	if (t2 != 2U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x29 = 13U;
	volatile int8_t x30 = -1;
	static int8_t x31 = INT8_MAX;
	static uint8_t x32 = UINT8_MAX;
	int32_t t3 = -6125;

	t3 = ((x29<<(x30<=x31))%x32);

	if (t3 != 26) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x33 = 1;
	int8_t x34 = INT8_MIN;
	uint64_t x35 = 967187747980120953LLU;
	uint16_t x36 = UINT16_MAX;
	static int32_t t4 = 75593253;

	t4 = ((x33<<(x34<=x35))%x36);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x41 = INT8_MAX;
	int8_t x44 = -7;
	volatile int32_t t5 = -851640;

	t5 = ((x41<<(x42<=x43))%x44);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x49 = INT8_MAX;
	int64_t x50 = -1LL;
	volatile int64_t x51 = INT64_MAX;
	int64_t x52 = INT64_MAX;
	volatile int64_t t6 = -1LL;

	t6 = ((x49<<(x50<=x51))%x52);

	if (t6 != 254LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x53 = 0;
	int8_t x54 = 0;
	uint64_t x55 = 4020244LLU;
	static uint8_t x56 = 2U;
	int32_t t7 = -67;

	t7 = ((x53<<(x54<=x55))%x56);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x66 = 135343609228923LLU;
	uint64_t x67 = 231874216LLU;
	uint16_t x68 = 14U;

	t8 = ((x65<<(x66<=x67))%x68);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x73 = 57228706148LL;
	int16_t x74 = -1;
	uint16_t x76 = 11431U;
	int64_t t9 = -577655975590LL;

	t9 = ((x73<<(x74<=x75))%x76);

	if (t9 != 10491LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x79 = UINT32_MAX;
	int32_t x80 = 211467;
	volatile int32_t t10 = 57601;

	t10 = ((x77<<(x78<=x79))%x80);

	if (t10 != 131070) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x85 = UINT16_MAX;
	static uint32_t x86 = UINT32_MAX;
	static uint32_t x87 = 929488U;

	t11 = ((x85<<(x86<=x87))%x88);

	if (t11 != 15) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x89 = INT64_MAX;
	static uint64_t x90 = UINT64_MAX;
	int8_t x91 = 1;
	volatile int64_t t12 = -21LL;

	t12 = ((x89<<(x90<=x91))%x92);

	if (t12 != 25LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x97 = 0;
	int64_t x99 = INT64_MAX;
	volatile int8_t x100 = INT8_MIN;
	int32_t t13 = -729;

	t13 = ((x97<<(x98<=x99))%x100);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x101 = UINT8_MAX;
	int64_t x102 = 199291661LL;
	int64_t x103 = INT64_MAX;
	volatile int64_t x104 = -70107458270185018LL;

	t14 = ((x101<<(x102<=x103))%x104);

	if (t14 != 510LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x105 = 425;
	uint16_t x106 = 477U;
	int16_t x107 = -1;
	volatile int32_t t15 = -48921152;

	t15 = ((x105<<(x106<=x107))%x108);

	if (t15 != 41) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x117 = 1;
	int8_t x118 = 50;
	static uint32_t x119 = UINT32_MAX;
	volatile int32_t t16 = -23844752;

	t16 = ((x117<<(x118<=x119))%x120);

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x121 = UINT32_MAX;
	int32_t x122 = 367603;
	int16_t x123 = -1;
	int16_t x124 = INT16_MIN;
	uint32_t t17 = 1632U;

	t17 = ((x121<<(x122<=x123))%x124);

	if (t17 != 32767U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x138 = INT8_MAX;
	volatile int8_t x140 = INT8_MIN;
	volatile uint64_t t18 = 3800863LLU;

	t18 = ((x137<<(x138<=x139))%x140);

	if (t18 != 15700LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x146 = 163403U;
	int16_t x147 = INT16_MIN;
	static uint8_t x148 = 24U;

	t19 = ((x145<<(x146<=x147))%x148);

	if (t19 != 14) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x157 = 3U;
	int16_t x158 = -1;
	static int8_t x159 = INT8_MIN;
	uint64_t x160 = 37773071937227LLU;
	uint64_t t20 = 831LLU;

	t20 = ((x157<<(x158<=x159))%x160);

	if (t20 != 3LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x169 = 1482795805U;
	uint64_t x170 = UINT64_MAX;
	int8_t x171 = -1;
	uint32_t x172 = UINT32_MAX;

	t21 = ((x169<<(x170<=x171))%x172);

	if (t21 != 2965591610U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x173 = 1889731376384954LLU;
	uint16_t x176 = 12065U;
	static uint64_t t22 = 96011473163480LLU;

	t22 = ((x173<<(x174<=x175))%x176);

	if (t22 != 9363LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x181 = 56U;
	uint16_t x182 = 33U;
	int16_t x183 = INT16_MIN;
	volatile uint16_t x184 = UINT16_MAX;
	volatile int32_t t23 = 972876;

	t23 = ((x181<<(x182<=x183))%x184);

	if (t23 != 56) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x185 = INT16_MAX;
	int32_t x186 = 13708842;
	int32_t x187 = INT32_MIN;
	uint32_t x188 = UINT32_MAX;
	uint32_t t24 = 46U;

	t24 = ((x185<<(x186<=x187))%x188);

	if (t24 != 32767U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x189 = 25;
	int16_t x190 = INT16_MAX;
	volatile int32_t t25 = -366519;

	t25 = ((x189<<(x190<=x191))%x192);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x213 = 16087U;
	uint64_t x214 = 981009273920213LLU;
	static uint16_t x215 = 5U;
	int64_t x216 = INT64_MIN;
	volatile int64_t t26 = -256981LL;

	t26 = ((x213<<(x214<=x215))%x216);

	if (t26 != 16087LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x221 = 98205385LLU;
	volatile int32_t x222 = INT32_MIN;
	int64_t x223 = 50LL;
	int64_t x224 = 30887LL;

	t27 = ((x221<<(x222<=x223))%x224);

	if (t27 != 337LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x225 = 74U;
	int32_t x227 = -35;
	static volatile uint64_t x228 = UINT64_MAX;
	static uint64_t t28 = 4627411211LLU;

	t28 = ((x225<<(x226<=x227))%x228);

	if (t28 != 148LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x235 = UINT8_MAX;
	int32_t x236 = -33;
	volatile int32_t t29 = 140172440;

	t29 = ((x233<<(x234<=x235))%x236);

	if (t29 != 25) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x237 = 117;
	int64_t x238 = -2LL;
	int16_t x239 = -16317;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t30 = 223;

	t30 = ((x237<<(x238<=x239))%x240);

	if (t30 != 117) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x245 = 1U;
	int8_t x246 = 0;
	uint16_t x247 = UINT16_MAX;
	static uint32_t x248 = 2983083U;
	uint32_t t31 = 73U;

	t31 = ((x245<<(x246<=x247))%x248);

	if (t31 != 2U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x253 = UINT64_MAX;
	volatile int64_t x254 = -1LL;
	uint32_t x256 = 6U;
	uint64_t t32 = 7687568661331015LLU;

	t32 = ((x253<<(x254<=x255))%x256);

	if (t32 != 3LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x259 = INT8_MAX;
	volatile int32_t x260 = -1;
	static volatile int32_t t33 = 0;

	t33 = ((x257<<(x258<=x259))%x260);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x273 = 3;
	uint16_t x274 = 157U;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t34 = 175800;

	t34 = ((x273<<(x274<=x275))%x276);

	if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x277 = 2986817762546746498LLU;
	static int32_t x278 = 30173577;
	int8_t x279 = INT8_MIN;
	volatile uint64_t t35 = 765LLU;

	t35 = ((x277<<(x278<=x279))%x280);

	if (t35 != 2986817762546746498LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x293 = UINT16_MAX;
	volatile int16_t x294 = INT16_MAX;
	int64_t x295 = INT64_MIN;
	volatile int32_t x296 = -1891;
	int32_t t36 = -2013341;

	t36 = ((x293<<(x294<=x295))%x296);

	if (t36 != 1241) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x327 = 21851U;
	int32_t x328 = -1;
	volatile int32_t t37 = 691;

	t37 = ((x325<<(x326<=x327))%x328);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x329 = 2LLU;
	static int32_t x331 = -1;
	int64_t x332 = 4878LL;
	uint64_t t38 = 2890110737077168850LLU;

	t38 = ((x329<<(x330<=x331))%x332);

	if (t38 != 4LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x333 = UINT8_MAX;
	int64_t x334 = -1LL;
	int32_t x335 = INT32_MIN;
	uint16_t x336 = 5U;
	volatile int32_t t39 = 22;

	t39 = ((x333<<(x334<=x335))%x336);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x337 = 12107LLU;
	static int64_t x338 = 272939594156292LL;
	int8_t x340 = INT8_MIN;
	uint64_t t40 = 7LLU;

	t40 = ((x337<<(x338<=x339))%x340);

	if (t40 != 12107LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x342 = INT16_MIN;
	static int32_t x343 = 0;
	int8_t x344 = INT8_MIN;
	volatile int32_t t41 = 6;

	t41 = ((x341<<(x342<=x343))%x344);

	if (t41 != 48) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x345 = 34237U;
	uint32_t x347 = 1964094U;
	static uint8_t x348 = 105U;
	uint32_t t42 = 62740175U;

	t42 = ((x345<<(x346<=x347))%x348);

	if (t42 != 14U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x365 = INT32_MAX;
	volatile int64_t x366 = INT64_MAX;
	static volatile int16_t x367 = 9;
	volatile int32_t t43 = -1630836;

	t43 = ((x365<<(x366<=x367))%x368);

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x369 = 2U;
	int64_t x370 = -1LL;
	static volatile int64_t x371 = 20046666LL;
	int32_t x372 = -1;
	uint32_t t44 = 3886U;

	t44 = ((x369<<(x370<=x371))%x372);

	if (t44 != 4U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x373 = UINT8_MAX;
	int64_t x374 = -1LL;
	int64_t x375 = 20779422605397084LL;
	volatile int32_t t45 = -4895;

	t45 = ((x373<<(x374<=x375))%x376);

	if (t45 != 510) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x377 = 379U;
	uint64_t x379 = UINT64_MAX;
	volatile int32_t t46 = 454370;

	t46 = ((x377<<(x378<=x379))%x380);

	if (t46 != 758) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x381 = 10U;
	int32_t x382 = -694812653;
	int8_t x383 = -7;
	int16_t x384 = 91;
	volatile uint32_t t47 = 10U;

	t47 = ((x381<<(x382<=x383))%x384);

	if (t47 != 20U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x385 = 230398307466370LLU;
	uint32_t x386 = 30060453U;
	volatile int16_t x387 = INT16_MAX;
	int32_t x388 = -45754;
	uint64_t t48 = 573617204LLU;

	t48 = ((x385<<(x386<=x387))%x388);

	if (t48 != 230398307466370LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x390 = 794000960560281396LLU;
	int8_t x391 = INT8_MIN;
	int16_t x392 = INT16_MIN;

	t49 = ((x389<<(x390<=x391))%x392);

	if (t49 != 228) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x395 = INT8_MIN;
	static volatile int32_t x396 = 1;
	volatile int32_t t50 = -6146936;

	t50 = ((x393<<(x394<=x395))%x396);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x417 = 812U;
	int64_t t51 = -72929LL;

	t51 = ((x417<<(x418<=x419))%x420);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x425 = 0;
	int64_t x426 = -1LL;

	t52 = ((x425<<(x426<=x427))%x428);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x437 = 7U;
	volatile uint32_t x438 = 3U;
	volatile uint32_t x440 = UINT32_MAX;
	volatile uint32_t t53 = 248445980U;

	t53 = ((x437<<(x438<=x439))%x440);

	if (t53 != 14U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x445 = 7U;
	int64_t x446 = INT64_MIN;
	static int16_t x448 = -1;
	volatile uint32_t t54 = 671U;

	t54 = ((x445<<(x446<=x447))%x448);

	if (t54 != 14U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x449 = 1;
	int64_t x450 = 25874895561913073LL;
	int64_t x451 = INT64_MAX;
	int32_t x452 = INT32_MIN;
	volatile int32_t t55 = 1;

	t55 = ((x449<<(x450<=x451))%x452);

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x454 = 11U;
	uint16_t x455 = 990U;
	uint64_t x456 = 6LLU;
	uint64_t t56 = 599670LLU;

	t56 = ((x453<<(x454<=x455))%x456);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x461 = UINT16_MAX;
	int16_t x462 = 1;
	static int16_t x463 = -1;
	volatile uint16_t x464 = 8U;
	int32_t t57 = -788718080;

	t57 = ((x461<<(x462<=x463))%x464);

	if (t57 != 7) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x467 = 115U;
	uint64_t x468 = 94653862866886LLU;
	uint64_t t58 = 493490160548647408LLU;

	t58 = ((x465<<(x466<=x467))%x468);

	if (t58 != 6LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x489 = INT8_MAX;
	int32_t x491 = 6951;
	uint64_t x492 = UINT64_MAX;
	static uint64_t t59 = 5LLU;

	t59 = ((x489<<(x490<=x491))%x492);

	if (t59 != 254LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x493 = UINT16_MAX;
	static volatile uint8_t x495 = 0U;
	int8_t x496 = INT8_MIN;
	volatile int32_t t60 = 8665;

	t60 = ((x493<<(x494<=x495))%x496);

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x501 = 1;
	uint64_t x502 = UINT64_MAX;
	int64_t x503 = INT64_MIN;
	static uint64_t x504 = 5131LLU;
	volatile uint64_t t61 = 6315343357LLU;

	t61 = ((x501<<(x502<=x503))%x504);

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x517 = 98U;
	uint8_t x518 = 79U;
	int16_t x519 = -1;
	volatile uint64_t x520 = UINT64_MAX;
	uint64_t t62 = 19689014574468LLU;

	t62 = ((x517<<(x518<=x519))%x520);

	if (t62 != 98LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x525 = 4U;
	int8_t x527 = -1;
	int64_t x528 = -27LL;
	int64_t t63 = 862524455989LL;

	t63 = ((x525<<(x526<=x527))%x528);

	if (t63 != 8LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x529 = 4U;
	int32_t x532 = 1661;
	volatile int32_t t64 = -454796759;

	t64 = ((x529<<(x530<=x531))%x532);

	if (t64 != 4) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x533 = 60LLU;
	int32_t x534 = INT32_MIN;
	uint64_t x536 = 121159LLU;

	t65 = ((x533<<(x534<=x535))%x536);

	if (t65 != 60LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x537 = 4291U;
	static int64_t x538 = INT64_MIN;
	int8_t x539 = INT8_MIN;
	static uint32_t x540 = 31504U;

	t66 = ((x537<<(x538<=x539))%x540);

	if (t66 != 8582U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x574 = -451255;
	uint8_t x575 = 7U;
	int16_t x576 = INT16_MAX;
	uint64_t t67 = 7839308557LLU;

	t67 = ((x573<<(x574<=x575))%x576);

	if (t67 != 18953LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x577 = 3;
	static volatile uint32_t x578 = UINT32_MAX;
	int16_t x579 = -7;
	int32_t x580 = INT32_MAX;
	volatile int32_t t68 = -1;

	t68 = ((x577<<(x578<=x579))%x580);

	if (t68 != 3) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x582 = -2;
	static volatile int8_t x583 = -1;
	int64_t x584 = 13LL;
	static volatile int64_t t69 = 343826041377LL;

	t69 = ((x581<<(x582<=x583))%x584);

	if (t69 != 4LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x588 = 1U;
	int32_t t70 = 1;

	t70 = ((x585<<(x586<=x587))%x588);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x589 = 4357808882745072351LL;
	static uint32_t x590 = UINT32_MAX;
	int8_t x591 = INT8_MIN;
	int16_t x592 = -1;
	static volatile int64_t t71 = -7143LL;

	t71 = ((x589<<(x590<=x591))%x592);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x593 = 33LL;
	static int8_t x594 = INT8_MIN;
	int32_t x595 = -1;
	int64_t t72 = 10040243961824806LL;

	t72 = ((x593<<(x594<=x595))%x596);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x601 = UINT64_MAX;
	int8_t x602 = -2;
	uint8_t x603 = UINT8_MAX;
	volatile int64_t x604 = -72LL;
	static volatile uint64_t t73 = 7188LLU;

	t73 = ((x601<<(x602<=x603))%x604);

	if (t73 != 70LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x609 = INT16_MAX;
	int32_t x610 = -1;
	int64_t x611 = -1LL;
	static volatile int16_t x612 = -60;
	int32_t t74 = -938389;

	t74 = ((x609<<(x610<=x611))%x612);

	if (t74 != 14) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x621 = 12184U;
	int32_t x622 = INT32_MIN;
	volatile int8_t x623 = 42;
	int64_t x624 = -691837LL;

	t75 = ((x621<<(x622<=x623))%x624);

	if (t75 != 24368LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x625 = 9812;
	static int64_t x626 = 34238886365879324LL;
	int64_t x627 = INT64_MIN;
	int32_t x628 = 179735;
	static volatile int32_t t76 = 198;

	t76 = ((x625<<(x626<=x627))%x628);

	if (t76 != 9812) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x630 = UINT16_MAX;
	int64_t x632 = INT64_MIN;
	int64_t t77 = -916LL;

	t77 = ((x629<<(x630<=x631))%x632);

	if (t77 != 1769LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x637 = 1513669;
	int16_t x638 = 6;
	static int8_t x639 = INT8_MIN;
	int8_t x640 = INT8_MIN;
	int32_t t78 = -1768280;

	t78 = ((x637<<(x638<=x639))%x640);

	if (t78 != 69) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x641 = 1315;
	uint16_t x642 = UINT16_MAX;
	int32_t x643 = INT32_MIN;
	int64_t x644 = -1LL;
	static volatile int64_t t79 = 1138945982811206LL;

	t79 = ((x641<<(x642<=x643))%x644);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x645 = 1U;
	int16_t x646 = INT16_MAX;
	volatile int32_t x647 = INT32_MAX;
	uint32_t x648 = 24153239U;
	volatile uint32_t t80 = 75824967U;

	t80 = ((x645<<(x646<=x647))%x648);

	if (t80 != 2U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x653 = INT8_MAX;
	static int16_t x655 = INT16_MIN;
	int32_t t81 = -54246548;

	t81 = ((x653<<(x654<=x655))%x656);

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x661 = 2U;
	int32_t x662 = INT32_MIN;
	static uint16_t x664 = UINT16_MAX;

	t82 = ((x661<<(x662<=x663))%x664);

	if (t82 != 4) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x677 = UINT16_MAX;
	uint16_t x678 = 25731U;
	uint16_t x679 = 8U;
	int16_t x680 = -462;
	volatile int32_t t83 = 715;

	t83 = ((x677<<(x678<=x679))%x680);

	if (t83 != 393) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x698 = -127750LL;
	static int64_t x699 = INT64_MAX;
	volatile uint32_t x700 = 6536661U;
	uint32_t t84 = 30063U;

	t84 = ((x697<<(x698<=x699))%x700);

	if (t84 != 168U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x701 = UINT8_MAX;
	volatile uint64_t x702 = UINT64_MAX;
	int8_t x703 = 1;
	volatile int32_t t85 = 3338;

	t85 = ((x701<<(x702<=x703))%x704);

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x705 = 6U;
	int16_t x706 = -1421;
	int32_t x707 = INT32_MIN;
	volatile uint16_t x708 = 3922U;

	t86 = ((x705<<(x706<=x707))%x708);

	if (t86 != 6U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x713 = INT16_MAX;
	int32_t x714 = INT32_MIN;
	int32_t x715 = 22608750;
	static int32_t x716 = -1;
	volatile int32_t t87 = 644;

	t87 = ((x713<<(x714<=x715))%x716);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x730 = INT8_MIN;
	uint16_t x731 = 187U;

	t88 = ((x729<<(x730<=x731))%x732);

	if (t88 != 4LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x737 = 8314239U;
	int32_t x738 = -37;
	int32_t x740 = -1;
	static volatile uint32_t t89 = 2730U;

	t89 = ((x737<<(x738<=x739))%x740);

	if (t89 != 16628478U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x741 = UINT32_MAX;
	int16_t x742 = INT16_MIN;
	static int8_t x743 = -3;
	uint16_t x744 = 26662U;
	static uint32_t t90 = 827963U;

	t90 = ((x741<<(x742<=x743))%x744);

	if (t90 != 12376U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x757 = 151;
	volatile int32_t x758 = -22377317;
	int16_t x760 = -911;
	volatile int32_t t91 = 393777;

	t91 = ((x757<<(x758<=x759))%x760);

	if (t91 != 302) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x765 = 121U;
	volatile int64_t x767 = INT64_MIN;

	t92 = ((x765<<(x766<=x767))%x768);

	if (t92 != 121) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x777 = UINT64_MAX;
	volatile int16_t x779 = -1;
	uint8_t x780 = 5U;

	t93 = ((x777<<(x778<=x779))%x780);

	if (t93 != 4LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x797 = 2531587616038LLU;
	uint16_t x798 = UINT16_MAX;
	uint64_t x799 = 0LLU;
	int32_t x800 = INT32_MIN;

	t94 = ((x797<<(x798<=x799))%x800);

	if (t94 != 2531587616038LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x801 = UINT32_MAX;
	int8_t x802 = INT8_MAX;
	static uint16_t x803 = 2321U;
	int16_t x804 = -1;
	volatile uint32_t t95 = 20U;

	t95 = ((x801<<(x802<=x803))%x804);

	if (t95 != 4294967294U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x821 = 31195U;
	static int16_t x822 = -176;
	static uint16_t x823 = 0U;
	volatile int8_t x824 = -13;
	volatile int32_t t96 = -4081602;

	t96 = ((x821<<(x822<=x823))%x824);

	if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x837 = 218480917U;
	int64_t x838 = -4402989053947572LL;
	uint8_t x839 = 13U;
	uint32_t t97 = 210168U;

	t97 = ((x837<<(x838<=x839))%x840);

	if (t97 != 436961834U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x841 = 0;
	uint16_t x842 = 24U;
	uint16_t x843 = 16U;
	volatile int8_t x844 = INT8_MAX;
	volatile int32_t t98 = 20081;

	t98 = ((x841<<(x842<=x843))%x844);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x870 = -1953650LL;
	uint8_t x871 = 5U;
	static int16_t x872 = -3387;
	int32_t t99 = -130349;

	t99 = ((x869<<(x870<=x871))%x872);

	if (t99 != 12) { NG(); } else { ; }
	
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

