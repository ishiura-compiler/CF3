#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x20 = 640U;
static volatile int8_t x27 = 14;
volatile uint32_t t2 = 170U;
volatile int64_t t3 = -734669381LL;
static int16_t x68 = INT16_MAX;
volatile uint64_t x78 = UINT64_MAX;
int32_t t6 = 204723599;
volatile int8_t x89 = 0;
volatile uint64_t x131 = 3LLU;
static int16_t x133 = INT16_MAX;
uint8_t x143 = 10U;
volatile uint32_t t12 = UINT32_MAX;
volatile int8_t x156 = INT8_MIN;
static int32_t x157 = 1968595;
int32_t x159 = INT32_MAX;
uint64_t x160 = UINT64_MAX;
int64_t x178 = 66536193LL;
volatile uint8_t x216 = UINT8_MAX;
volatile int32_t t18 = -28;
int16_t x235 = INT16_MIN;
volatile uint32_t x254 = UINT32_MAX;
int64_t x273 = INT64_MAX;
int16_t x275 = 10276;
int32_t x278 = INT32_MIN;
int64_t x283 = -61LL;
int16_t x284 = -1;
volatile int64_t t25 = -7LL;
static uint64_t x285 = 56578050944521482LLU;
uint16_t x289 = 3190U;
int8_t x294 = 2;
int32_t x295 = INT32_MIN;
volatile uint32_t t28 = 226876271U;
int16_t x316 = -1;
uint16_t x321 = 31U;
uint64_t x337 = UINT64_MAX;
uint32_t x339 = UINT32_MAX;
int16_t x340 = -1;
static uint32_t x377 = 2140002792U;
static volatile int8_t x379 = INT8_MAX;
uint32_t t40 = 391957957U;
uint64_t x401 = 5725336665495LLU;
static int64_t x403 = -1LL;
volatile int64_t x415 = INT64_MAX;
uint64_t t45 = 137137LLU;
uint8_t x430 = UINT8_MAX;
static int16_t x464 = INT16_MAX;
int16_t x468 = -1;
int8_t x488 = INT8_MIN;
uint32_t t51 = 60475U;
volatile uint16_t x496 = 740U;
int32_t x515 = -1;
uint32_t x518 = UINT32_MAX;
uint16_t x519 = 113U;
static uint64_t t57 = 4819079275LLU;
int32_t t58 = -776487044;
int16_t x571 = INT16_MAX;
uint32_t t61 = UINT32_MAX;
int8_t x583 = 13;
uint16_t x596 = 16959U;
uint16_t x597 = UINT16_MAX;
volatile uint8_t x599 = 2U;
volatile int32_t t64 = 374;
int32_t t65 = -105460894;
int32_t x623 = INT32_MIN;
uint32_t t66 = 31895U;
uint8_t x625 = UINT8_MAX;
volatile int32_t x627 = -942;
int16_t x646 = INT16_MAX;
uint32_t x648 = UINT32_MAX;
int64_t x651 = -3801LL;
int32_t t70 = -1;
static volatile uint64_t t71 = 987632242LLU;
int16_t x695 = -1;
int8_t x704 = INT8_MIN;
uint16_t x709 = 2U;
int64_t x710 = INT64_MIN;
static int64_t x719 = INT64_MAX;
static int16_t x732 = INT16_MIN;
static uint64_t t78 = UINT64_MAX;
static int16_t x758 = INT16_MIN;
uint32_t x778 = 3674U;
volatile uint64_t x780 = 4198771185915LLU;
uint32_t x784 = UINT32_MAX;
int32_t x788 = INT32_MIN;
int8_t x814 = -1;
static volatile uint64_t t87 = 7LLU;
volatile int32_t x834 = INT32_MAX;
int16_t x841 = 28;
int32_t t89 = 108;
static int32_t x849 = 95742;
static int16_t x852 = INT16_MIN;
volatile uint8_t x855 = UINT8_MAX;
uint64_t x869 = UINT64_MAX;
int32_t x870 = -1;
volatile int32_t x872 = INT32_MIN;
int32_t x892 = 1;
uint32_t x911 = 243U;
volatile uint64_t t97 = UINT64_MAX;
int64_t t98 = INT64_MAX;
volatile uint32_t x929 = 53073227U;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	volatile int8_t x2 = -1;
	int16_t x3 = -2;
	int16_t x4 = -1828;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = (x1<<(x2&(x3/x4)));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x17 = INT8_MAX;
	volatile uint16_t x18 = UINT16_MAX;
	int8_t x19 = -1;
	static volatile int32_t t1 = -251;

	t1 = (x17<<(x18&(x19/x20)));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x25 = 449108458U;
	int32_t x26 = 63;
	int8_t x28 = INT8_MIN;

	t2 = (x25<<(x26&(x27/x28)));

	if (t2 != 449108458U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x37 = 1LL;
	uint32_t x38 = 2022U;
	volatile uint64_t x39 = 105629262LLU;
	uint64_t x40 = UINT64_MAX;

	t3 = (x37<<(x38&(x39/x40)));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x65 = 1U;
	int8_t x66 = -2;
	uint8_t x67 = 6U;
	int32_t t4 = 15920;

	t4 = (x65<<(x66&(x67/x68)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x69 = INT16_MAX;
	int64_t x70 = INT64_MIN;
	uint64_t x71 = 10964842014LLU;
	int32_t x72 = INT32_MIN;
	volatile int32_t t5 = -30583;

	t5 = (x69<<(x70&(x71/x72)));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x77 = 68U;
	volatile uint32_t x79 = 29U;
	volatile int32_t x80 = -959169524;

	t6 = (x77<<(x78&(x79/x80)));

	if (t6 != 68) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x85 = 1246195U;
	uint32_t x86 = 25026U;
	static int8_t x87 = -46;
	int64_t x88 = INT64_MIN;
	uint32_t t7 = 2U;

	t7 = (x85<<(x86&(x87/x88)));

	if (t7 != 1246195U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x90 = -1;
	static uint8_t x91 = 7U;
	static volatile int16_t x92 = INT16_MIN;
	volatile int32_t t8 = 0;

	t8 = (x89<<(x90&(x91/x92)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x109 = 1070345LL;
	int8_t x110 = INT8_MAX;
	int8_t x111 = INT8_MIN;
	volatile int32_t x112 = INT32_MAX;
	int64_t t9 = 26796399271124845LL;

	t9 = (x109<<(x110&(x111/x112)));

	if (t9 != 1070345LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x129 = 63LLU;
	static uint64_t x130 = UINT64_MAX;
	static int32_t x132 = INT32_MAX;
	volatile uint64_t t10 = 338353044647LLU;

	t10 = (x129<<(x130&(x131/x132)));

	if (t10 != 63LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x134 = INT64_MIN;
	static int16_t x135 = -6796;
	static int8_t x136 = INT8_MIN;
	static volatile int32_t t11 = -1201652;

	t11 = (x133<<(x134&(x135/x136)));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x141 = UINT32_MAX;
	int64_t x142 = -148640128882510843LL;
	int16_t x144 = INT16_MAX;

	t12 = (x141<<(x142&(x143/x144)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x153 = 5;
	int8_t x154 = -2;
	uint8_t x155 = 13U;
	volatile int32_t t13 = 1840;

	t13 = (x153<<(x154&(x155/x156)));

	if (t13 != 5) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x158 = INT8_MAX;
	volatile int32_t t14 = 3;

	t14 = (x157<<(x158&(x159/x160)));

	if (t14 != 1968595) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x161 = 16541490833120LLU;
	uint16_t x162 = 31U;
	int8_t x163 = -1;
	int8_t x164 = INT8_MIN;
	uint64_t t15 = 381917361225619LLU;

	t15 = (x161<<(x162&(x163/x164)));

	if (t15 != 16541490833120LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x177 = 499718U;
	int16_t x179 = -1;
	static int64_t x180 = -26865598495241616LL;
	volatile uint32_t t16 = 29069U;

	t16 = (x177<<(x178&(x179/x180)));

	if (t16 != 499718U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x205 = 133929927319LLU;
	int32_t x206 = INT32_MIN;
	uint64_t x207 = UINT64_MAX;
	static int16_t x208 = INT16_MIN;
	static volatile uint64_t t17 = 3LLU;

	t17 = (x205<<(x206&(x207/x208)));

	if (t17 != 133929927319LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x213 = 562;
	static int64_t x214 = -3906LL;
	static int32_t x215 = -1;

	t18 = (x213<<(x214&(x215/x216)));

	if (t18 != 562) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x229 = 76U;
	static uint32_t x230 = 352901664U;
	int32_t x231 = INT32_MAX;
	int8_t x232 = -2;
	uint32_t t19 = 549114U;

	t19 = (x229<<(x230&(x231/x232)));

	if (t19 != 76U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x233 = 13;
	int8_t x234 = -2;
	volatile uint32_t x236 = UINT32_MAX;
	int32_t t20 = 50131;

	t20 = (x233<<(x234&(x235/x236)));

	if (t20 != 13) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x253 = 1;
	static volatile uint8_t x255 = UINT8_MAX;
	volatile int16_t x256 = 68;
	static int32_t t21 = 3741610;

	t21 = (x253<<(x254&(x255/x256)));

	if (t21 != 8) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x265 = UINT8_MAX;
	uint8_t x266 = 22U;
	int64_t x267 = -1LL;
	volatile uint64_t x268 = 1741826278254805376LLU;
	volatile int32_t t22 = 6;

	t22 = (x265<<(x266&(x267/x268)));

	if (t22 != 1020) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x274 = UINT8_MAX;
	static int32_t x276 = INT32_MIN;
	int64_t t23 = INT64_MAX;

	t23 = (x273<<(x274&(x275/x276)));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x277 = INT32_MAX;
	int8_t x279 = 21;
	uint8_t x280 = UINT8_MAX;
	volatile int32_t t24 = INT32_MAX;

	t24 = (x277<<(x278&(x279/x280)));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x281 = 6978LL;
	int16_t x282 = INT16_MIN;

	t25 = (x281<<(x282&(x283/x284)));

	if (t25 != 6978LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x286 = UINT16_MAX;
	int16_t x287 = INT16_MAX;
	static volatile uint16_t x288 = 15435U;
	uint64_t t26 = 7245LLU;

	t26 = (x285<<(x286&(x287/x288)));

	if (t26 != 226312203778085928LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x290 = -1;
	uint32_t x291 = 367469815U;
	int16_t x292 = INT16_MIN;
	volatile int32_t t27 = -85854421;

	t27 = (x289<<(x290&(x291/x292)));

	if (t27 != 3190) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x293 = 18U;
	volatile int64_t x296 = -137023LL;

	t28 = (x293<<(x294&(x295/x296)));

	if (t28 != 18U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x297 = INT64_MAX;
	int64_t x298 = -1LL;
	int64_t x299 = -1LL;
	uint32_t x300 = 122U;
	int64_t t29 = INT64_MAX;

	t29 = (x297<<(x298&(x299/x300)));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x301 = 1U;
	uint16_t x302 = 17078U;
	int32_t x303 = -1;
	uint8_t x304 = 12U;
	volatile int32_t t30 = -99246352;

	t30 = (x301<<(x302&(x303/x304)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x305 = 8499794531696578850LLU;
	int16_t x306 = 7945;
	static int8_t x307 = -1;
	static volatile int32_t x308 = INT32_MAX;
	volatile uint64_t t31 = 216LLU;

	t31 = (x305<<(x306&(x307/x308)));

	if (t31 != 8499794531696578850LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x313 = 8;
	uint16_t x314 = UINT16_MAX;
	int64_t x315 = INT64_MAX;
	int32_t t32 = -23938629;

	t32 = (x313<<(x314&(x315/x316)));

	if (t32 != 16) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x322 = -42152066035679305LL;
	volatile uint16_t x323 = 606U;
	int64_t x324 = INT64_MAX;
	int32_t t33 = 23643522;

	t33 = (x321<<(x322&(x323/x324)));

	if (t33 != 31) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x333 = 0;
	volatile int32_t x334 = INT32_MIN;
	int32_t x335 = 34;
	static uint32_t x336 = 1U;
	int32_t t34 = 134746096;

	t34 = (x333<<(x334&(x335/x336)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x338 = INT16_MIN;
	static volatile uint64_t t35 = UINT64_MAX;

	t35 = (x337<<(x338&(x339/x340)));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x345 = 3U;
	uint32_t x346 = UINT32_MAX;
	uint8_t x347 = 1U;
	int64_t x348 = 432207384436561LL;
	static volatile int32_t t36 = 14542540;

	t36 = (x345<<(x346&(x347/x348)));

	if (t36 != 3) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x361 = 17U;
	volatile uint32_t x362 = UINT32_MAX;
	uint8_t x363 = 0U;
	int16_t x364 = -1;
	static int32_t t37 = 0;

	t37 = (x361<<(x362&(x363/x364)));

	if (t37 != 17) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x365 = INT64_MAX;
	int32_t x366 = -1;
	volatile int8_t x367 = 0;
	volatile uint32_t x368 = 30U;
	int64_t t38 = INT64_MAX;

	t38 = (x365<<(x366&(x367/x368)));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x369 = INT64_MAX;
	static uint16_t x370 = 4U;
	uint16_t x371 = 17668U;
	static volatile int32_t x372 = INT32_MAX;
	int64_t t39 = INT64_MAX;

	t39 = (x369<<(x370&(x371/x372)));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x378 = INT32_MAX;
	static int8_t x380 = INT8_MAX;

	t40 = (x377<<(x378&(x379/x380)));

	if (t40 != 4280005584U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x402 = INT32_MIN;
	volatile int64_t x404 = INT64_MIN;
	volatile uint64_t t41 = 2260907377339680LLU;

	t41 = (x401<<(x402&(x403/x404)));

	if (t41 != 5725336665495LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x409 = INT32_MAX;
	volatile uint64_t x410 = 9LLU;
	uint16_t x411 = UINT16_MAX;
	volatile int64_t x412 = INT64_MIN;
	volatile int32_t t42 = INT32_MAX;

	t42 = (x409<<(x410&(x411/x412)));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x413 = UINT8_MAX;
	int64_t x414 = INT64_MIN;
	int16_t x416 = INT16_MAX;
	static int32_t t43 = 14465649;

	t43 = (x413<<(x414&(x415/x416)));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x417 = UINT32_MAX;
	int32_t x418 = INT32_MAX;
	volatile int64_t x419 = 8197LL;
	int64_t x420 = 204831623738856LL;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = (x417<<(x418&(x419/x420)));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x421 = 180349863LLU;
	static uint16_t x422 = UINT16_MAX;
	uint64_t x423 = UINT64_MAX;
	volatile uint32_t x424 = UINT32_MAX;

	t45 = (x421<<(x422&(x423/x424)));

	if (t45 != 360699726LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x429 = 7U;
	int16_t x431 = INT16_MIN;
	static int64_t x432 = -18035025253890LL;
	int32_t t46 = -3877;

	t46 = (x429<<(x430&(x431/x432)));

	if (t46 != 7) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x461 = UINT8_MAX;
	static uint8_t x462 = UINT8_MAX;
	volatile uint8_t x463 = 0U;
	volatile int32_t t47 = 297631;

	t47 = (x461<<(x462&(x463/x464)));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x465 = 6;
	uint32_t x466 = 104023U;
	uint32_t x467 = UINT32_MAX;
	static int32_t t48 = -233459874;

	t48 = (x465<<(x466&(x467/x468)));

	if (t48 != 12) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x469 = UINT32_MAX;
	int8_t x470 = INT8_MIN;
	volatile uint64_t x471 = 562LLU;
	int32_t x472 = -1;
	volatile uint32_t t49 = UINT32_MAX;

	t49 = (x469<<(x470&(x471/x472)));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x473 = UINT8_MAX;
	uint32_t x474 = 243U;
	int8_t x475 = -1;
	int16_t x476 = INT16_MIN;
	int32_t t50 = -29;

	t50 = (x473<<(x474&(x475/x476)));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x485 = 306U;
	int64_t x486 = -1LL;
	uint8_t x487 = 2U;

	t51 = (x485<<(x486&(x487/x488)));

	if (t51 != 306U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x489 = UINT64_MAX;
	int32_t x490 = INT32_MAX;
	volatile uint8_t x491 = 124U;
	int32_t x492 = 13;
	volatile uint64_t t52 = 1719178773LLU;

	t52 = (x489<<(x490&(x491/x492)));

	if (t52 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x493 = UINT32_MAX;
	uint8_t x494 = 13U;
	int32_t x495 = INT32_MIN;
	uint32_t t53 = 205536485U;

	t53 = (x493<<(x494&(x495/x496)));

	if (t53 != 4294963200U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x501 = INT64_MAX;
	int32_t x502 = INT32_MIN;
	int64_t x503 = -1LL;
	uint8_t x504 = UINT8_MAX;
	volatile int64_t t54 = INT64_MAX;

	t54 = (x501<<(x502&(x503/x504)));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x513 = 84U;
	volatile uint8_t x514 = 105U;
	uint8_t x516 = 36U;
	int32_t t55 = 0;

	t55 = (x513<<(x514&(x515/x516)));

	if (t55 != 84) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x517 = UINT32_MAX;
	volatile uint32_t x520 = 602U;
	uint32_t t56 = UINT32_MAX;

	t56 = (x517<<(x518&(x519/x520)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x533 = 1584689739454LLU;
	int32_t x534 = 16950;
	uint64_t x535 = 7LLU;
	uint8_t x536 = 26U;

	t57 = (x533<<(x534&(x535/x536)));

	if (t57 != 1584689739454LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x541 = 7U;
	uint16_t x542 = UINT16_MAX;
	static int32_t x543 = -1;
	int8_t x544 = INT8_MIN;

	t58 = (x541<<(x542&(x543/x544)));

	if (t58 != 7) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x545 = 0;
	int64_t x546 = -1LL;
	int64_t x547 = INT64_MIN;
	int64_t x548 = INT64_MIN;
	static int32_t t59 = 0;

	t59 = (x545<<(x546&(x547/x548)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x557 = 309825;
	static uint64_t x558 = 92233659265922LLU;
	int16_t x559 = -1;
	uint8_t x560 = 30U;
	int32_t t60 = 1020;

	t60 = (x557<<(x558&(x559/x560)));

	if (t60 != 309825) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x569 = UINT32_MAX;
	uint16_t x570 = 0U;
	int64_t x572 = 35486533LL;

	t61 = (x569<<(x570&(x571/x572)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x581 = 24856876287098438LLU;
	uint16_t x582 = 0U;
	static int16_t x584 = INT16_MIN;
	volatile uint64_t t62 = 124LLU;

	t62 = (x581<<(x582&(x583/x584)));

	if (t62 != 24856876287098438LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x593 = 94U;
	uint64_t x594 = UINT64_MAX;
	static volatile uint8_t x595 = 4U;
	volatile int32_t t63 = 0;

	t63 = (x593<<(x594&(x595/x596)));

	if (t63 != 94) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x598 = INT8_MIN;
	int32_t x600 = INT32_MIN;

	t64 = (x597<<(x598&(x599/x600)));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x601 = 0;
	static uint16_t x602 = UINT16_MAX;
	int32_t x603 = INT32_MAX;
	int32_t x604 = -1;

	t65 = (x601<<(x602&(x603/x604)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x621 = 110937889U;
	int64_t x622 = INT64_MIN;
	static int8_t x624 = INT8_MIN;

	t66 = (x621<<(x622&(x623/x624)));

	if (t66 != 110937889U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x626 = INT32_MAX;
	int16_t x628 = INT16_MIN;
	static int32_t t67 = -3492;

	t67 = (x625<<(x626&(x627/x628)));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x641 = UINT32_MAX;
	uint64_t x642 = 5LLU;
	int64_t x643 = INT64_MIN;
	int32_t x644 = INT32_MIN;
	volatile uint32_t t68 = UINT32_MAX;

	t68 = (x641<<(x642&(x643/x644)));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x645 = 207547589410LL;
	uint32_t x647 = 1442358330U;
	static int64_t t69 = -20701793844LL;

	t69 = (x645<<(x646&(x647/x648)));

	if (t69 != 207547589410LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x649 = 0;
	volatile uint32_t x650 = UINT32_MAX;
	static int8_t x652 = INT8_MIN;

	t70 = (x649<<(x650&(x651/x652)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x661 = 15229982773LLU;
	uint64_t x662 = 46482096LLU;
	int32_t x663 = 3;
	int8_t x664 = INT8_MAX;

	t71 = (x661<<(x662&(x663/x664)));

	if (t71 != 15229982773LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x665 = 74U;
	volatile int64_t x666 = -1LL;
	uint16_t x667 = 7U;
	int32_t x668 = INT32_MIN;
	volatile int32_t t72 = -251;

	t72 = (x665<<(x666&(x667/x668)));

	if (t72 != 74) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x693 = 358U;
	static volatile int8_t x694 = INT8_MAX;
	uint16_t x696 = 114U;
	volatile int32_t t73 = 606669;

	t73 = (x693<<(x694&(x695/x696)));

	if (t73 != 358) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x701 = 10U;
	volatile uint16_t x702 = 2U;
	int32_t x703 = -2235894;
	int32_t t74 = -259;

	t74 = (x701<<(x702&(x703/x704)));

	if (t74 != 40) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x711 = 838584313U;
	uint8_t x712 = 1U;
	volatile int32_t t75 = 7208907;

	t75 = (x709<<(x710&(x711/x712)));

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x717 = UINT64_MAX;
	uint8_t x718 = 0U;
	int64_t x720 = -1LL;
	uint64_t t76 = UINT64_MAX;

	t76 = (x717<<(x718&(x719/x720)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x729 = 108350LLU;
	int16_t x730 = 722;
	uint8_t x731 = 56U;
	static uint64_t t77 = 27630753LLU;

	t77 = (x729<<(x730&(x731/x732)));

	if (t77 != 108350LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x737 = UINT64_MAX;
	uint64_t x738 = 42LLU;
	int64_t x739 = INT64_MIN;
	static int16_t x740 = INT16_MIN;

	t78 = (x737<<(x738&(x739/x740)));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x757 = 43118773U;
	uint16_t x759 = UINT16_MAX;
	volatile int64_t x760 = INT64_MIN;
	volatile uint32_t t79 = 1608U;

	t79 = (x757<<(x758&(x759/x760)));

	if (t79 != 43118773U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x761 = UINT32_MAX;
	static volatile int32_t x762 = 3673138;
	int8_t x763 = INT8_MIN;
	uint32_t x764 = UINT32_MAX;
	volatile uint32_t t80 = UINT32_MAX;

	t80 = (x761<<(x762&(x763/x764)));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x777 = 45283LLU;
	volatile uint8_t x779 = 15U;
	volatile uint64_t t81 = 914684085318LLU;

	t81 = (x777<<(x778&(x779/x780)));

	if (t81 != 45283LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x781 = INT8_MAX;
	static uint8_t x782 = UINT8_MAX;
	uint16_t x783 = 3U;
	int32_t t82 = 51645170;

	t82 = (x781<<(x782&(x783/x784)));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x785 = UINT8_MAX;
	static uint64_t x786 = 3595629520160592435LLU;
	uint32_t x787 = 354618U;
	volatile int32_t t83 = 785;

	t83 = (x785<<(x786&(x787/x788)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x797 = 877164U;
	uint16_t x798 = 2U;
	uint64_t x799 = 434487229114887LLU;
	volatile int32_t x800 = -203735271;
	uint32_t t84 = 6550924U;

	t84 = (x797<<(x798&(x799/x800)));

	if (t84 != 877164U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x805 = 102U;
	static int32_t x806 = -1;
	uint32_t x807 = UINT32_MAX;
	volatile int32_t x808 = 183815084;
	volatile int32_t t85 = -36;

	t85 = (x805<<(x806&(x807/x808)));

	if (t85 != 855638016) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x809 = 1104233761U;
	volatile int64_t x810 = 30485991LL;
	uint32_t x811 = UINT32_MAX;
	int32_t x812 = -82;
	static volatile uint32_t t86 = 3U;

	t86 = (x809<<(x810&(x811/x812)));

	if (t86 != 2208467522U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x813 = 75093866201651LLU;
	int16_t x815 = 2643;
	uint16_t x816 = UINT16_MAX;

	t87 = (x813<<(x814&(x815/x816)));

	if (t87 != 75093866201651LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x833 = 0;
	static int16_t x835 = -1;
	volatile int16_t x836 = INT16_MIN;
	volatile int32_t t88 = 5157395;

	t88 = (x833<<(x834&(x835/x836)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x842 = -1LL;
	volatile int16_t x843 = -1;
	int32_t x844 = -67;

	t89 = (x841<<(x842&(x843/x844)));

	if (t89 != 28) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x850 = 2U;
	int16_t x851 = -1;
	volatile int32_t t90 = 1785174;

	t90 = (x849<<(x850&(x851/x852)));

	if (t90 != 95742) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x853 = 516500LLU;
	int16_t x854 = INT16_MIN;
	volatile int16_t x856 = INT16_MAX;
	volatile uint64_t t91 = 6417049LLU;

	t91 = (x853<<(x854&(x855/x856)));

	if (t91 != 516500LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x857 = UINT8_MAX;
	int16_t x858 = -1;
	static uint16_t x859 = 38U;
	uint16_t x860 = UINT16_MAX;
	int32_t t92 = 252;

	t92 = (x857<<(x858&(x859/x860)));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x871 = 7U;
	uint64_t t93 = UINT64_MAX;

	t93 = (x869<<(x870&(x871/x872)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x873 = 236288080293LLU;
	static volatile uint16_t x874 = 1282U;
	int32_t x875 = 14749;
	int64_t x876 = INT64_MIN;
	uint64_t t94 = 4693139LLU;

	t94 = (x873<<(x874&(x875/x876)));

	if (t94 != 236288080293LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x889 = 0;
	static int16_t x890 = -622;
	static volatile int8_t x891 = INT8_MAX;
	volatile int32_t t95 = -1053986;

	t95 = (x889<<(x890&(x891/x892)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x909 = INT8_MAX;
	int64_t x910 = -1LL;
	int8_t x912 = INT8_MIN;
	volatile int32_t t96 = -4026;

	t96 = (x909<<(x910&(x911/x912)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x921 = UINT64_MAX;
	uint32_t x922 = UINT32_MAX;
	uint16_t x923 = 865U;
	int64_t x924 = INT64_MIN;

	t97 = (x921<<(x922&(x923/x924)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x925 = INT64_MAX;
	static int8_t x926 = INT8_MAX;
	int16_t x927 = -1;
	int32_t x928 = INT32_MIN;

	t98 = (x925<<(x926&(x927/x928)));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x930 = 27883467;
	int16_t x931 = INT16_MIN;
	volatile int32_t x932 = INT32_MIN;
	uint32_t t99 = 41383U;

	t99 = (x929<<(x930&(x931/x932)));

	if (t99 != 53073227U) { NG(); } else { ; }
	
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

