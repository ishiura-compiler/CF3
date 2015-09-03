#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x30 = 54416U;
int32_t x32 = -6169;
volatile uint32_t x73 = 148198427U;
uint8_t x77 = 3U;
int16_t x90 = INT16_MIN;
int8_t x91 = 17;
int8_t x97 = INT8_MAX;
int8_t x98 = INT8_MIN;
int8_t x108 = INT8_MIN;
uint8_t x113 = 46U;
static int64_t x145 = 2729248404916LL;
uint64_t x150 = UINT64_MAX;
volatile int64_t t14 = 529679384417751LL;
uint8_t x177 = 2U;
volatile int8_t x178 = -13;
int16_t x182 = 62;
int32_t x183 = -27855311;
int8_t x223 = -1;
uint64_t x243 = UINT64_MAX;
int16_t x246 = INT16_MAX;
static int32_t x251 = INT32_MAX;
static uint64_t x265 = 45LLU;
uint16_t x268 = 3606U;
static int8_t x277 = INT8_MAX;
uint32_t x306 = 212U;
static volatile int64_t x315 = -2103616493504262155LL;
static volatile int32_t t33 = -270548;
volatile uint8_t x327 = 10U;
int8_t x328 = INT8_MIN;
uint16_t x329 = UINT16_MAX;
uint8_t x337 = UINT8_MAX;
volatile int8_t x349 = 15;
volatile uint64_t t40 = 804223357593183079LLU;
static volatile uint8_t x377 = 24U;
int8_t x378 = INT8_MIN;
static int8_t x380 = -1;
int16_t x381 = INT16_MAX;
uint16_t x384 = 493U;
int8_t x399 = -15;
int8_t x412 = -16;
static volatile int32_t x413 = 2;
int16_t x423 = 1;
volatile uint32_t x428 = UINT32_MAX;
uint32_t x434 = UINT32_MAX;
static int16_t x448 = INT16_MAX;
int64_t x451 = INT64_MIN;
int32_t x452 = 416387;
volatile int32_t t54 = 608;
static int16_t x460 = 7;
uint32_t t57 = 233U;
static int32_t x482 = -1;
int32_t x491 = 534204151;
volatile uint64_t t60 = 165LLU;
int32_t x521 = INT32_MAX;
uint32_t x527 = 1027304083U;
int32_t x554 = -1482;
int32_t t67 = 25;
volatile uint64_t x571 = 86648LLU;
int32_t x572 = INT32_MIN;
volatile int32_t t68 = 124053;
volatile int32_t x595 = INT32_MAX;
int64_t x596 = -3298824LL;
volatile int64_t x610 = -3816188549980527471LL;
int8_t x614 = -3;
volatile uint32_t x626 = 75165768U;
static uint64_t x627 = UINT64_MAX;
uint64_t x633 = 0LLU;
int32_t x634 = -1;
int8_t x636 = -2;
uint64_t t74 = 20LLU;
int64_t x639 = INT64_MIN;
uint64_t t76 = 8946454260LLU;
int32_t x681 = 375452;
uint8_t x687 = 25U;
static volatile uint32_t x705 = 6U;
int64_t t83 = 238730828701682594LL;
int8_t x719 = INT8_MAX;
int32_t t84 = 2749;
uint64_t x722 = UINT64_MAX;
static int16_t x723 = INT16_MIN;
static volatile int16_t x732 = 1;
int32_t x746 = INT32_MAX;
uint32_t t87 = 4006311U;
int32_t x766 = INT32_MIN;
volatile int32_t t88 = -1658;
uint16_t x769 = 2U;
int8_t x789 = INT8_MAX;
volatile uint8_t x795 = 14U;
int32_t x805 = 3;
static volatile int64_t x806 = -1LL;
int64_t x807 = -1121LL;
uint16_t x815 = 2U;
int16_t x843 = INT16_MIN;
static uint32_t t98 = 1U;


void f0(void) {
	int32_t x13 = 92306;
	int64_t x14 = INT64_MIN;
	uint16_t x15 = 393U;
	int8_t x16 = -15;
	volatile int32_t t0 = 917992;

	t0 = ((x13<<(x14<x15))+x16);

	if (t0 != 184597) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x29 = 6;
	volatile uint16_t x31 = UINT16_MAX;
	volatile int32_t t1 = -109302066;

	t1 = ((x29<<(x30<x31))+x32);

	if (t1 != -6157) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x61 = 14U;
	int64_t x62 = -1LL;
	static uint64_t x63 = UINT64_MAX;
	int16_t x64 = 482;
	int32_t t2 = -50803374;

	t2 = ((x61<<(x62<x63))+x64);

	if (t2 != 496) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x74 = INT64_MIN;
	static int32_t x75 = -4794;
	int64_t x76 = -1LL;
	volatile int64_t t3 = -1486892749341846LL;

	t3 = ((x73<<(x74<x75))+x76);

	if (t3 != 296396853LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x78 = UINT16_MAX;
	int32_t x79 = -1;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t4 = 3;

	t4 = ((x77<<(x78<x79))+x80);

	if (t4 != 258) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x89 = UINT8_MAX;
	static int32_t x92 = INT32_MIN;
	volatile int32_t t5 = 2;

	t5 = ((x89<<(x90<x91))+x92);

	if (t5 != -2147483138) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x99 = UINT8_MAX;
	volatile uint32_t x100 = 1919537593U;
	volatile uint32_t t6 = 67U;

	t6 = ((x97<<(x98<x99))+x100);

	if (t6 != 1919537847U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x101 = 61930LLU;
	static uint8_t x102 = 31U;
	static volatile int8_t x103 = 6;
	int64_t x104 = 263531730LL;
	volatile uint64_t t7 = 51686233297478341LLU;

	t7 = ((x101<<(x102<x103))+x104);

	if (t7 != 263593660LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x105 = 0;
	uint16_t x106 = UINT16_MAX;
	uint16_t x107 = UINT16_MAX;
	int32_t t8 = -7;

	t8 = ((x105<<(x106<x107))+x108);

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x114 = -8;
	volatile int32_t x115 = INT32_MAX;
	uint16_t x116 = 0U;
	int32_t t9 = -15;

	t9 = ((x113<<(x114<x115))+x116);

	if (t9 != 92) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x125 = UINT8_MAX;
	int32_t x126 = INT32_MIN;
	uint16_t x127 = UINT16_MAX;
	int8_t x128 = -1;
	static volatile int32_t t10 = -20694004;

	t10 = ((x125<<(x126<x127))+x128);

	if (t10 != 509) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x133 = 1U;
	volatile uint8_t x134 = UINT8_MAX;
	int8_t x135 = -1;
	int16_t x136 = INT16_MIN;
	int32_t t11 = -2257;

	t11 = ((x133<<(x134<x135))+x136);

	if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x141 = 228U;
	int8_t x142 = 4;
	uint16_t x143 = UINT16_MAX;
	volatile int32_t x144 = 3773545;
	static volatile int32_t t12 = -47420;

	t12 = ((x141<<(x142<x143))+x144);

	if (t12 != 3774001) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x146 = UINT64_MAX;
	uint32_t x147 = UINT32_MAX;
	int64_t x148 = 114500769986464562LL;
	static volatile int64_t t13 = -1095912954036988031LL;

	t13 = ((x145<<(x146<x147))+x148);

	if (t13 != 114503499234869478LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x149 = INT64_MAX;
	uint32_t x151 = 201037U;
	static volatile int64_t x152 = INT64_MIN;

	t14 = ((x149<<(x150<x151))+x152);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x153 = INT16_MAX;
	volatile uint64_t x154 = 20836932LLU;
	uint8_t x155 = 53U;
	volatile int16_t x156 = INT16_MAX;
	int32_t t15 = 3;

	t15 = ((x153<<(x154<x155))+x156);

	if (t15 != 65534) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x165 = 3334U;
	int16_t x166 = -1;
	int64_t x167 = -1LL;
	volatile int32_t x168 = 3777;
	static volatile int32_t t16 = 787;

	t16 = ((x165<<(x166<x167))+x168);

	if (t16 != 7111) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x169 = 2;
	int64_t x170 = INT64_MAX;
	volatile uint64_t x171 = 3058LLU;
	uint32_t x172 = 6609U;
	uint32_t t17 = 184U;

	t17 = ((x169<<(x170<x171))+x172);

	if (t17 != 6611U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x179 = INT32_MIN;
	uint8_t x180 = 1U;
	static volatile int32_t t18 = -997255954;

	t18 = ((x177<<(x178<x179))+x180);

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x181 = 7353U;
	int16_t x184 = 1723;
	uint32_t t19 = 70U;

	t19 = ((x181<<(x182<x183))+x184);

	if (t19 != 9076U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x197 = 1228811725312095929LLU;
	int64_t x198 = -132351156331790LL;
	uint32_t x199 = 1224874989U;
	int16_t x200 = 0;
	uint64_t t20 = 711183405220541LLU;

	t20 = ((x197<<(x198<x199))+x200);

	if (t20 != 2457623450624191858LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x221 = UINT8_MAX;
	int16_t x222 = -61;
	int64_t x224 = -453555LL;
	static volatile int64_t t21 = -447853LL;

	t21 = ((x221<<(x222<x223))+x224);

	if (t21 != -453045LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x225 = 53331747632133839LL;
	static volatile int8_t x226 = 3;
	volatile uint16_t x227 = 1862U;
	uint16_t x228 = 16U;
	int64_t t22 = -508613573LL;

	t22 = ((x225<<(x226<x227))+x228);

	if (t22 != 106663495264267694LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x241 = 0LLU;
	int16_t x242 = INT16_MAX;
	int32_t x244 = INT32_MIN;
	volatile uint64_t t23 = 58LLU;

	t23 = ((x241<<(x242<x243))+x244);

	if (t23 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x245 = 9U;
	int16_t x247 = INT16_MIN;
	int64_t x248 = INT64_MIN;
	volatile int64_t t24 = 925198585240LL;

	t24 = ((x245<<(x246<x247))+x248);

	if (t24 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x249 = 2U;
	int8_t x250 = 34;
	int32_t x252 = INT32_MIN;
	volatile uint32_t t25 = 1603722U;

	t25 = ((x249<<(x250<x251))+x252);

	if (t25 != 2147483652U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x266 = INT32_MIN;
	static uint32_t x267 = 2033U;
	uint64_t t26 = 57482628LLU;

	t26 = ((x265<<(x266<x267))+x268);

	if (t26 != 3651LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x273 = 70U;
	int64_t x274 = INT64_MIN;
	volatile int32_t x275 = 12;
	int32_t x276 = -116;
	int32_t t27 = 647116;

	t27 = ((x273<<(x274<x275))+x276);

	if (t27 != 24) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x278 = INT64_MIN;
	uint32_t x279 = 6115442U;
	volatile int64_t x280 = 38682LL;
	static int64_t t28 = -590823030107LL;

	t28 = ((x277<<(x278<x279))+x280);

	if (t28 != 38936LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x281 = UINT16_MAX;
	static int8_t x282 = INT8_MIN;
	static int32_t x283 = -166290;
	volatile uint16_t x284 = 17098U;
	int32_t t29 = -14754;

	t29 = ((x281<<(x282<x283))+x284);

	if (t29 != 82633) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x285 = 63LL;
	int64_t x286 = INT64_MIN;
	int64_t x287 = -3727LL;
	int32_t x288 = INT32_MIN;
	int64_t t30 = -1914919874431LL;

	t30 = ((x285<<(x286<x287))+x288);

	if (t30 != -2147483522LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x293 = 102363U;
	static int16_t x294 = -1;
	static volatile int32_t x295 = INT32_MAX;
	int8_t x296 = INT8_MIN;
	volatile uint32_t t31 = 180938630U;

	t31 = ((x293<<(x294<x295))+x296);

	if (t31 != 204598U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x305 = UINT16_MAX;
	int64_t x307 = INT64_MIN;
	uint64_t x308 = 1838413792504159LLU;
	volatile uint64_t t32 = 256660357019LLU;

	t32 = ((x305<<(x306<x307))+x308);

	if (t32 != 1838413792569694LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x313 = UINT16_MAX;
	volatile uint8_t x314 = 26U;
	uint16_t x316 = 15708U;

	t33 = ((x313<<(x314<x315))+x316);

	if (t33 != 81243) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x325 = 0;
	volatile int64_t x326 = INT64_MIN;
	volatile int32_t t34 = -34186089;

	t34 = ((x325<<(x326<x327))+x328);

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x330 = INT16_MIN;
	int32_t x331 = 15935;
	volatile int8_t x332 = 1;
	static int32_t t35 = 584008786;

	t35 = ((x329<<(x330<x331))+x332);

	if (t35 != 131071) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x338 = 11LLU;
	volatile int32_t x339 = -1;
	static uint8_t x340 = UINT8_MAX;
	static volatile int32_t t36 = 25909747;

	t36 = ((x337<<(x338<x339))+x340);

	if (t36 != 765) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x345 = 504LLU;
	static int64_t x346 = -837720600759135107LL;
	int32_t x347 = INT32_MIN;
	int64_t x348 = -479844144LL;
	volatile uint64_t t37 = 10619222285187LLU;

	t37 = ((x345<<(x346<x347))+x348);

	if (t37 != 18446744073229708480LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x350 = INT16_MAX;
	int32_t x351 = INT32_MIN;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t38 = -2;

	t38 = ((x349<<(x350<x351))+x352);

	if (t38 != 270) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x357 = UINT8_MAX;
	uint8_t x358 = 19U;
	uint8_t x359 = 1U;
	static int16_t x360 = -1690;
	int32_t t39 = 31;

	t39 = ((x357<<(x358<x359))+x360);

	if (t39 != -1435) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x361 = 96U;
	uint16_t x362 = 13U;
	int8_t x363 = INT8_MIN;
	uint64_t x364 = 327322084853258LLU;

	t40 = ((x361<<(x362<x363))+x364);

	if (t40 != 327322084853354LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x379 = 4U;
	volatile int32_t t41 = -410692992;

	t41 = ((x377<<(x378<x379))+x380);

	if (t41 != 47) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x382 = -1;
	volatile int16_t x383 = 206;
	int32_t t42 = -998;

	t42 = ((x381<<(x382<x383))+x384);

	if (t42 != 66027) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x385 = 5U;
	uint16_t x386 = 12U;
	volatile uint8_t x387 = 6U;
	int16_t x388 = INT16_MAX;
	int32_t t43 = -558430434;

	t43 = ((x385<<(x386<x387))+x388);

	if (t43 != 32772) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x389 = 11U;
	uint8_t x390 = 126U;
	int16_t x391 = INT16_MAX;
	volatile int8_t x392 = INT8_MAX;
	volatile int32_t t44 = -887165536;

	t44 = ((x389<<(x390<x391))+x392);

	if (t44 != 149) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x397 = 1U;
	static uint32_t x398 = 7U;
	volatile int64_t x400 = 1316272LL;
	int64_t t45 = 3LL;

	t45 = ((x397<<(x398<x399))+x400);

	if (t45 != 1316274LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x409 = 138U;
	volatile uint64_t x410 = 48LLU;
	uint32_t x411 = 7117572U;
	int32_t t46 = 1312;

	t46 = ((x409<<(x410<x411))+x412);

	if (t46 != 260) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x414 = 1;
	int64_t x415 = INT64_MIN;
	int16_t x416 = INT16_MAX;
	volatile int32_t t47 = -3702104;

	t47 = ((x413<<(x414<x415))+x416);

	if (t47 != 32769) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x417 = 19;
	int64_t x418 = -1LL;
	int16_t x419 = INT16_MIN;
	int8_t x420 = INT8_MIN;
	int32_t t48 = 0;

	t48 = ((x417<<(x418<x419))+x420);

	if (t48 != -109) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x421 = 1U;
	static int8_t x422 = -39;
	uint8_t x424 = 1U;
	int32_t t49 = 969793;

	t49 = ((x421<<(x422<x423))+x424);

	if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x425 = INT16_MAX;
	int64_t x426 = -130168488837043904LL;
	uint16_t x427 = UINT16_MAX;
	volatile uint32_t t50 = 9U;

	t50 = ((x425<<(x426<x427))+x428);

	if (t50 != 65533U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x429 = INT64_MAX;
	uint64_t x430 = UINT64_MAX;
	int16_t x431 = INT16_MAX;
	int32_t x432 = -130769;
	int64_t t51 = -65LL;

	t51 = ((x429<<(x430<x431))+x432);

	if (t51 != 9223372036854645038LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x433 = UINT16_MAX;
	int32_t x435 = -76718;
	int8_t x436 = INT8_MAX;
	volatile int32_t t52 = 57;

	t52 = ((x433<<(x434<x435))+x436);

	if (t52 != 65662) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x445 = 10693U;
	int16_t x446 = INT16_MIN;
	int8_t x447 = INT8_MIN;
	int32_t t53 = 345217;

	t53 = ((x445<<(x446<x447))+x448);

	if (t53 != 54153) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x449 = INT16_MAX;
	int8_t x450 = -1;

	t54 = ((x449<<(x450<x451))+x452);

	if (t54 != 449154) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x457 = 38U;
	int32_t x458 = INT32_MIN;
	int64_t x459 = INT64_MIN;
	volatile int32_t t55 = -455722;

	t55 = ((x457<<(x458<x459))+x460);

	if (t55 != 45) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x465 = 2U;
	uint8_t x466 = UINT8_MAX;
	uint8_t x467 = UINT8_MAX;
	int16_t x468 = INT16_MAX;
	volatile int32_t t56 = 1;

	t56 = ((x465<<(x466<x467))+x468);

	if (t56 != 32769) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x473 = 1;
	volatile uint16_t x474 = 1660U;
	uint64_t x475 = 382023905LLU;
	static uint32_t x476 = 3073819U;

	t57 = ((x473<<(x474<x475))+x476);

	if (t57 != 3073821U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x481 = UINT32_MAX;
	int64_t x483 = -9LL;
	int16_t x484 = INT16_MIN;
	uint32_t t58 = 531129005U;

	t58 = ((x481<<(x482<x483))+x484);

	if (t58 != 4294934527U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x489 = UINT8_MAX;
	int64_t x490 = 191LL;
	volatile int16_t x492 = INT16_MAX;
	volatile int32_t t59 = 582638;

	t59 = ((x489<<(x490<x491))+x492);

	if (t59 != 33277) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x501 = 21015866667547LLU;
	int32_t x502 = -18;
	int8_t x503 = INT8_MIN;
	int64_t x504 = INT64_MIN;

	t60 = ((x501<<(x502<x503))+x504);

	if (t60 != 9223393052721443355LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x505 = 119U;
	int8_t x506 = INT8_MIN;
	uint64_t x507 = UINT64_MAX;
	static int32_t x508 = INT32_MIN;
	uint32_t t61 = 22380U;

	t61 = ((x505<<(x506<x507))+x508);

	if (t61 != 2147483886U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x522 = 78U;
	static int32_t x523 = -1;
	int8_t x524 = -1;
	int32_t t62 = -18213126;

	t62 = ((x521<<(x522<x523))+x524);

	if (t62 != 2147483646) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x525 = 15360LLU;
	static uint64_t x526 = 5681LLU;
	static volatile uint64_t x528 = 26038311724117LLU;
	uint64_t t63 = 391490286280644LLU;

	t63 = ((x525<<(x526<x527))+x528);

	if (t63 != 26038311754837LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x529 = 1115973705U;
	static uint64_t x530 = 1113LLU;
	volatile int64_t x531 = INT64_MAX;
	uint16_t x532 = 14801U;
	uint32_t t64 = 1115760U;

	t64 = ((x529<<(x530<x531))+x532);

	if (t64 != 2231962211U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x545 = 14U;
	uint16_t x546 = 6650U;
	int8_t x547 = INT8_MAX;
	static uint16_t x548 = 110U;
	int32_t t65 = 777882;

	t65 = ((x545<<(x546<x547))+x548);

	if (t65 != 124) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x553 = UINT16_MAX;
	static uint8_t x555 = 79U;
	int8_t x556 = INT8_MIN;
	static volatile int32_t t66 = -11;

	t66 = ((x553<<(x554<x555))+x556);

	if (t66 != 130942) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x561 = 3950;
	int64_t x562 = -1LL;
	static uint8_t x563 = UINT8_MAX;
	volatile int8_t x564 = INT8_MIN;

	t67 = ((x561<<(x562<x563))+x564);

	if (t67 != 7772) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x569 = INT16_MAX;
	volatile int64_t x570 = 62534097LL;

	t68 = ((x569<<(x570<x571))+x572);

	if (t68 != -2147450881) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x593 = 3636;
	volatile int64_t x594 = -179528447LL;
	int64_t t69 = 240019760021808LL;

	t69 = ((x593<<(x594<x595))+x596);

	if (t69 != -3291552LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x601 = UINT32_MAX;
	volatile int32_t x602 = -289;
	uint64_t x603 = UINT64_MAX;
	volatile int32_t x604 = INT32_MIN;
	volatile uint32_t t70 = 1423U;

	t70 = ((x601<<(x602<x603))+x604);

	if (t70 != 2147483646U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x609 = 2646;
	volatile int16_t x611 = -1;
	volatile uint16_t x612 = 49U;
	volatile int32_t t71 = -628032;

	t71 = ((x609<<(x610<x611))+x612);

	if (t71 != 5341) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x613 = UINT64_MAX;
	int64_t x615 = INT64_MIN;
	volatile int8_t x616 = INT8_MAX;
	volatile uint64_t t72 = 44935255100LLU;

	t72 = ((x613<<(x614<x615))+x616);

	if (t72 != 126LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x625 = 19525U;
	volatile int8_t x628 = -1;
	int32_t t73 = -193;

	t73 = ((x625<<(x626<x627))+x628);

	if (t73 != 39049) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x635 = INT64_MAX;

	t74 = ((x633<<(x634<x635))+x636);

	if (t74 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x637 = UINT64_MAX;
	uint16_t x638 = 0U;
	int16_t x640 = INT16_MIN;
	volatile uint64_t t75 = 325521LLU;

	t75 = ((x637<<(x638<x639))+x640);

	if (t75 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x653 = UINT64_MAX;
	int32_t x654 = INT32_MAX;
	volatile int64_t x655 = -53069125884578274LL;
	static volatile uint64_t x656 = 86156831777934841LLU;

	t76 = ((x653<<(x654<x655))+x656);

	if (t76 != 86156831777934840LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x661 = UINT64_MAX;
	int16_t x662 = -604;
	uint64_t x663 = 12469058LLU;
	static int32_t x664 = -1;
	uint64_t t77 = 99145864776470317LLU;

	t77 = ((x661<<(x662<x663))+x664);

	if (t77 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x669 = INT16_MAX;
	static int64_t x670 = -54271413268524LL;
	int8_t x671 = INT8_MIN;
	volatile int8_t x672 = INT8_MIN;
	int32_t t78 = 493298270;

	t78 = ((x669<<(x670<x671))+x672);

	if (t78 != 65406) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x682 = -1;
	int8_t x683 = INT8_MIN;
	int8_t x684 = INT8_MIN;
	volatile int32_t t79 = -2;

	t79 = ((x681<<(x682<x683))+x684);

	if (t79 != 375324) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x685 = 0;
	static int16_t x686 = INT16_MIN;
	volatile int8_t x688 = 14;
	volatile int32_t t80 = 20829172;

	t80 = ((x685<<(x686<x687))+x688);

	if (t80 != 14) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x689 = 130925LL;
	uint64_t x690 = 610971087LLU;
	int64_t x691 = -1LL;
	uint32_t x692 = 27501U;
	volatile int64_t t81 = 32412911LL;

	t81 = ((x689<<(x690<x691))+x692);

	if (t81 != 289351LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x701 = UINT64_MAX;
	int8_t x702 = -1;
	volatile uint8_t x703 = UINT8_MAX;
	int64_t x704 = -1LL;
	volatile uint64_t t82 = 15200197971134407LLU;

	t82 = ((x701<<(x702<x703))+x704);

	if (t82 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x706 = 1257U;
	static int32_t x707 = INT32_MIN;
	int64_t x708 = INT64_MIN;

	t83 = ((x705<<(x706<x707))+x708);

	if (t83 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x717 = 10U;
	uint32_t x718 = 124034386U;
	uint16_t x720 = UINT16_MAX;

	t84 = ((x717<<(x718<x719))+x720);

	if (t84 != 65545) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x721 = 38861450985329LLU;
	volatile int8_t x724 = INT8_MAX;
	volatile uint64_t t85 = 1LLU;

	t85 = ((x721<<(x722<x723))+x724);

	if (t85 != 38861450985456LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x729 = UINT32_MAX;
	int32_t x730 = -1;
	int64_t x731 = -16168249492750913LL;
	volatile uint32_t t86 = 45U;

	t86 = ((x729<<(x730<x731))+x732);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x745 = 2424U;
	uint64_t x747 = 3066898209925729533LLU;
	int32_t x748 = -1;

	t87 = ((x745<<(x746<x747))+x748);

	if (t87 != 4847U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x765 = UINT16_MAX;
	int32_t x767 = INT32_MAX;
	uint8_t x768 = UINT8_MAX;

	t88 = ((x765<<(x766<x767))+x768);

	if (t88 != 131325) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x770 = 805;
	volatile uint8_t x771 = 46U;
	volatile int8_t x772 = INT8_MIN;
	static int32_t t89 = -94509762;

	t89 = ((x769<<(x770<x771))+x772);

	if (t89 != -126) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x773 = 27;
	uint32_t x774 = UINT32_MAX;
	int16_t x775 = INT16_MIN;
	static int16_t x776 = 379;
	static int32_t t90 = -455560496;

	t90 = ((x773<<(x774<x775))+x776);

	if (t90 != 406) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x785 = 16U;
	uint16_t x786 = UINT16_MAX;
	int64_t x787 = INT64_MIN;
	volatile uint32_t x788 = 6600360U;
	static volatile uint32_t t91 = 7U;

	t91 = ((x785<<(x786<x787))+x788);

	if (t91 != 6600376U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x790 = INT32_MIN;
	uint16_t x791 = 0U;
	volatile int16_t x792 = INT16_MIN;
	volatile int32_t t92 = 14832166;

	t92 = ((x789<<(x790<x791))+x792);

	if (t92 != -32514) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x793 = UINT32_MAX;
	int16_t x794 = 18;
	static uint32_t x796 = UINT32_MAX;
	uint32_t t93 = 8U;

	t93 = ((x793<<(x794<x795))+x796);

	if (t93 != 4294967294U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x797 = INT16_MAX;
	uint32_t x798 = 4947958U;
	volatile uint16_t x799 = UINT16_MAX;
	int16_t x800 = 2083;
	volatile int32_t t94 = -1712966;

	t94 = ((x797<<(x798<x799))+x800);

	if (t94 != 34850) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x808 = INT64_MIN;
	volatile int64_t t95 = 13238308922450LL;

	t95 = ((x805<<(x806<x807))+x808);

	if (t95 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x813 = UINT32_MAX;
	int64_t x814 = INT64_MIN;
	static int8_t x816 = INT8_MIN;
	uint32_t t96 = 4939979U;

	t96 = ((x813<<(x814<x815))+x816);

	if (t96 != 4294967166U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x837 = 5698400065865LL;
	int64_t x838 = INT64_MIN;
	static uint32_t x839 = UINT32_MAX;
	uint16_t x840 = UINT16_MAX;
	static int64_t t97 = -640LL;

	t97 = ((x837<<(x838<x839))+x840);

	if (t97 != 11396800197265LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x841 = 174U;
	uint8_t x842 = UINT8_MAX;
	int8_t x844 = -1;

	t98 = ((x841<<(x842<x843))+x844);

	if (t98 != 173U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x849 = 1917078833LLU;
	uint32_t x850 = 1469654976U;
	uint64_t x851 = 5309LLU;
	uint64_t x852 = 28LLU;
	static volatile uint64_t t99 = 605995810473LLU;

	t99 = ((x849<<(x850<x851))+x852);

	if (t99 != 1917078861LLU) { NG(); } else { ; }
	
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

