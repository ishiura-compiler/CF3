#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x7 = INT32_MIN;
uint16_t x45 = UINT16_MAX;
static int32_t x66 = 92;
uint64_t t4 = 6242232574803LLU;
uint64_t x129 = 15739LLU;
int16_t x156 = -1;
int16_t x166 = 7297;
volatile int32_t x167 = -156166186;
volatile int32_t x168 = -15938;
int32_t t7 = 4;
static volatile int64_t x170 = -1LL;
uint16_t x189 = 182U;
volatile int32_t x192 = -20064;
int16_t x225 = 1738;
static int64_t x275 = -8980681621434558LL;
int32_t x279 = -6917706;
int32_t x301 = 122;
int64_t x303 = INT64_MAX;
uint8_t x304 = 62U;
volatile int32_t t15 = -375999;
int64_t x311 = INT64_MIN;
static int64_t x312 = 16494319023833LL;
static volatile uint64_t x329 = 4216LLU;
volatile uint64_t t17 = 19920461629LLU;
uint64_t x336 = 664439LLU;
volatile int64_t x344 = 8872250681973LL;
uint32_t x347 = UINT32_MAX;
uint8_t x356 = 2U;
int8_t x358 = INT8_MIN;
static volatile uint64_t t23 = 5910691LLU;
int16_t x374 = 7;
uint8_t x376 = UINT8_MAX;
uint16_t x400 = UINT16_MAX;
static int32_t t26 = 17;
int64_t x412 = 726522LL;
int64_t t30 = -87895LL;
volatile uint64_t t35 = 1LLU;
volatile int16_t x489 = INT16_MAX;
uint16_t x492 = 750U;
volatile int32_t x494 = -1;
static int64_t x513 = 2718515554839294LL;
int8_t x524 = INT8_MAX;
volatile int32_t t39 = 1;
volatile uint64_t t41 = 17910433313708695LLU;
int8_t x612 = 49;
int8_t x618 = 1;
int16_t x646 = INT16_MIN;
static volatile int64_t x647 = -2864068601623448LL;
volatile uint32_t t45 = 6234U;
uint16_t x673 = 9U;
volatile int32_t t51 = 4937095;
static int16_t x786 = -110;
int8_t x787 = INT8_MIN;
static uint32_t t53 = 502U;
int16_t x816 = INT16_MIN;
int8_t x817 = INT8_MAX;
static volatile int16_t x857 = INT16_MAX;
static volatile int64_t t57 = 7883241144017517LL;
volatile int32_t t58 = 1;
int8_t x926 = 1;
int16_t x937 = INT16_MAX;
volatile int32_t t62 = -70129043;
volatile int8_t x982 = -52;
int16_t x983 = -1;
volatile uint8_t x1001 = UINT8_MAX;
int32_t x1036 = -1;
volatile uint16_t x1053 = UINT16_MAX;
uint32_t x1059 = UINT32_MAX;
static int8_t x1079 = INT8_MAX;
volatile int32_t t69 = -21239;
static uint32_t t71 = 226U;
uint32_t x1131 = 223680056U;
int64_t t73 = -2666263096571264735LL;
volatile int8_t x1135 = -1;
volatile uint64_t x1157 = UINT64_MAX;
int16_t x1176 = INT16_MIN;
volatile uint32_t x1221 = 90U;
volatile int64_t x1223 = INT64_MIN;
volatile int8_t x1229 = INT8_MAX;
int64_t x1232 = 1340301228896LL;
int64_t x1235 = INT64_MIN;
uint64_t x1263 = UINT64_MAX;
static int16_t x1275 = -4;
uint32_t x1276 = 761467U;
static uint32_t t87 = 62036285U;
static int16_t x1326 = INT16_MIN;
int16_t x1391 = INT16_MIN;
volatile int32_t t93 = -73;
int16_t x1410 = -1;
volatile int16_t x1412 = -1;
static int32_t t97 = -10392;
int32_t t98 = -129066;
int8_t x1466 = INT8_MAX;
uint32_t x1467 = UINT32_MAX;
volatile uint16_t x1468 = 10U;
int32_t t99 = -3172724;


void f0(void) {
	volatile uint8_t x5 = UINT8_MAX;
	uint32_t x6 = 761579207U;
	int32_t x8 = 7233709;
	volatile int32_t t0 = 79;

	t0 = ((x5<<(x6/x7))-x8);

	if (t0 != -7233454) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x21 = UINT16_MAX;
	uint32_t x22 = 27346U;
	int32_t x23 = INT32_MAX;
	int64_t x24 = -1LL;
	volatile int64_t t1 = 1029LL;

	t1 = ((x21<<(x22/x23))-x24);

	if (t1 != 65536LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x46 = INT16_MAX;
	volatile int32_t x47 = INT32_MIN;
	volatile uint64_t x48 = 50192924621LLU;
	volatile uint64_t t2 = 26LLU;

	t2 = ((x45<<(x46/x47))-x48);

	if (t2 != 18446744023516692530LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x65 = 1;
	int32_t x67 = INT32_MIN;
	uint32_t x68 = UINT32_MAX;
	static volatile uint32_t t3 = 301U;

	t3 = ((x65<<(x66/x67))-x68);

	if (t3 != 2U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x77 = 239245441932709LLU;
	static int32_t x78 = INT32_MAX;
	uint32_t x79 = 1218698515U;
	int8_t x80 = INT8_MAX;

	t4 = ((x77<<(x78/x79))-x80);

	if (t4 != 478490883865291LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x130 = 25;
	int8_t x131 = INT8_MAX;
	int16_t x132 = INT16_MIN;
	uint64_t t5 = 201LLU;

	t5 = ((x129<<(x130/x131))-x132);

	if (t5 != 48507LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x153 = 1U;
	static uint64_t x154 = 3562232737591313454LLU;
	int64_t x155 = INT64_MIN;
	volatile int32_t t6 = 26512573;

	t6 = ((x153<<(x154/x155))-x156);

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x165 = UINT16_MAX;

	t7 = ((x165<<(x166/x167))-x168);

	if (t7 != 81473) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x169 = UINT64_MAX;
	int8_t x171 = INT8_MIN;
	static int32_t x172 = -952120174;
	static uint64_t t8 = 9063929996910528942LLU;

	t8 = ((x169<<(x170/x171))-x172);

	if (t8 != 952120173LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x190 = -1;
	volatile uint32_t x191 = UINT32_MAX;
	volatile int32_t t9 = -6;

	t9 = ((x189<<(x190/x191))-x192);

	if (t9 != 20428) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x209 = INT32_MAX;
	int64_t x210 = -1LL;
	volatile int16_t x211 = INT16_MIN;
	volatile uint64_t x212 = 39574028LLU;
	uint64_t t10 = 59693530787610783LLU;

	t10 = ((x209<<(x210/x211))-x212);

	if (t10 != 2107909619LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x226 = -11;
	uint8_t x227 = UINT8_MAX;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t11 = 19880795;

	t11 = ((x225<<(x226/x227))-x228);

	if (t11 != -63797) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x269 = UINT32_MAX;
	int8_t x270 = -1;
	uint8_t x271 = 2U;
	int8_t x272 = -1;
	volatile uint32_t t12 = 1U;

	t12 = ((x269<<(x270/x271))-x272);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x273 = 13U;
	int64_t x274 = -18143LL;
	static uint32_t x276 = 16374U;
	static volatile uint32_t t13 = 6821U;

	t13 = ((x273<<(x274/x275))-x276);

	if (t13 != 4294950935U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x277 = INT16_MAX;
	int32_t x278 = 3361;
	int16_t x280 = INT16_MAX;
	int32_t t14 = -448312834;

	t14 = ((x277<<(x278/x279))-x280);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x302 = -1;

	t15 = ((x301<<(x302/x303))-x304);

	if (t15 != 60) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x309 = UINT16_MAX;
	int16_t x310 = INT16_MIN;
	static int64_t t16 = -1386140077051LL;

	t16 = ((x309<<(x310/x311))-x312);

	if (t16 != -16494318958298LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x330 = 6U;
	static int32_t x331 = INT32_MAX;
	int8_t x332 = INT8_MAX;

	t17 = ((x329<<(x330/x331))-x332);

	if (t17 != 4089LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x333 = 0;
	int16_t x334 = INT16_MAX;
	int64_t x335 = 12745LL;
	uint64_t t18 = 17173095255745951LLU;

	t18 = ((x333<<(x334/x335))-x336);

	if (t18 != 18446744073708887177LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x341 = INT32_MAX;
	int32_t x342 = -3872266;
	volatile uint64_t x343 = UINT64_MAX;
	int64_t t19 = 1078764442036698742LL;

	t19 = ((x341<<(x342/x343))-x344);

	if (t19 != -8870103198326LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x345 = 16638257U;
	int16_t x346 = -1900;
	static int16_t x348 = INT16_MAX;
	volatile uint32_t t20 = 1337U;

	t20 = ((x345<<(x346/x347))-x348);

	if (t20 != 16605490U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x353 = 718371;
	static uint64_t x354 = 29462LLU;
	static int8_t x355 = INT8_MIN;
	int32_t t21 = 22;

	t21 = ((x353<<(x354/x355))-x356);

	if (t21 != 718369) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int32_t x359 = 494;
	int32_t x360 = INT32_MAX;
	volatile int32_t t22 = -1068;

	t22 = ((x357<<(x358/x359))-x360);

	if (t22 != -2147418112) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x365 = UINT64_MAX;
	static int16_t x366 = 1;
	static volatile uint16_t x367 = 551U;
	int64_t x368 = 3013594387LL;

	t23 = ((x365<<(x366/x367))-x368);

	if (t23 != 18446744070695957228LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x373 = UINT8_MAX;
	int32_t x375 = INT32_MAX;
	static volatile int32_t t24 = -52584;

	t24 = ((x373<<(x374/x375))-x376);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x397 = INT16_MAX;
	uint32_t x398 = 0U;
	volatile int32_t x399 = INT32_MIN;
	volatile int32_t t25 = -128238006;

	t25 = ((x397<<(x398/x399))-x400);

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x401 = 49;
	int16_t x402 = 0;
	static int32_t x403 = INT32_MIN;
	int8_t x404 = -1;

	t26 = ((x401<<(x402/x403))-x404);

	if (t26 != 50) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x409 = INT32_MAX;
	uint32_t x410 = 522322290U;
	volatile uint64_t x411 = 12579026865755LLU;
	volatile int64_t t27 = 710049448LL;

	t27 = ((x409<<(x410/x411))-x412);

	if (t27 != 2146757125LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x417 = 65U;
	int16_t x418 = INT16_MIN;
	static volatile int64_t x419 = 487729213495LL;
	int64_t x420 = INT64_MAX;
	volatile int64_t t28 = 2LL;

	t28 = ((x417<<(x418/x419))-x420);

	if (t28 != -9223372036854775742LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x421 = UINT8_MAX;
	static int16_t x422 = -1;
	volatile int64_t x423 = 64918852LL;
	volatile int32_t x424 = 49536839;
	int32_t t29 = -3043410;

	t29 = ((x421<<(x422/x423))-x424);

	if (t29 != -49536584) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x425 = 9918;
	int8_t x426 = -5;
	uint8_t x427 = UINT8_MAX;
	static volatile int64_t x428 = -781040274LL;

	t30 = ((x425<<(x426/x427))-x428);

	if (t30 != 781050192LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x437 = UINT64_MAX;
	static uint32_t x438 = 7U;
	uint64_t x439 = UINT64_MAX;
	int64_t x440 = INT64_MIN;
	uint64_t t31 = 174LLU;

	t31 = ((x437<<(x438/x439))-x440);

	if (t31 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x465 = 0U;
	int16_t x466 = -1;
	int8_t x467 = -1;
	volatile int16_t x468 = INT16_MIN;
	uint32_t t32 = 252799U;

	t32 = ((x465<<(x466/x467))-x468);

	if (t32 != 32768U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x469 = 14U;
	int16_t x470 = -1;
	int32_t x471 = INT32_MIN;
	int16_t x472 = -58;
	int32_t t33 = 131000297;

	t33 = ((x469<<(x470/x471))-x472);

	if (t33 != 72) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x473 = 1487969319U;
	volatile uint16_t x474 = UINT16_MAX;
	uint16_t x475 = UINT16_MAX;
	int32_t x476 = INT32_MAX;
	uint32_t t34 = 12U;

	t34 = ((x473<<(x474/x475))-x476);

	if (t34 != 828454991U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x481 = UINT64_MAX;
	volatile int64_t x482 = 24654LL;
	static uint32_t x483 = UINT32_MAX;
	uint8_t x484 = UINT8_MAX;

	t35 = ((x481<<(x482/x483))-x484);

	if (t35 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x490 = 3U;
	volatile uint32_t x491 = UINT32_MAX;
	volatile int32_t t36 = -113150592;

	t36 = ((x489<<(x490/x491))-x492);

	if (t36 != 32017) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x493 = UINT8_MAX;
	uint8_t x495 = 19U;
	int8_t x496 = INT8_MIN;
	volatile int32_t t37 = -206;

	t37 = ((x493<<(x494/x495))-x496);

	if (t37 != 383) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x514 = -1;
	static int64_t x515 = -14753379LL;
	static uint16_t x516 = UINT16_MAX;
	volatile int64_t t38 = 24665879325317LL;

	t38 = ((x513<<(x514/x515))-x516);

	if (t38 != 2718515554773759LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x521 = INT32_MAX;
	int32_t x522 = -1;
	int64_t x523 = INT64_MIN;

	t39 = ((x521<<(x522/x523))-x524);

	if (t39 != 2147483520) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x533 = 57648LLU;
	uint32_t x534 = UINT32_MAX;
	int64_t x535 = INT64_MIN;
	int8_t x536 = INT8_MIN;
	volatile uint64_t t40 = 1949140141489749086LLU;

	t40 = ((x533<<(x534/x535))-x536);

	if (t40 != 57776LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x537 = 374124237954LLU;
	int32_t x538 = -1;
	int8_t x539 = -41;
	int16_t x540 = 6;

	t41 = ((x537<<(x538/x539))-x540);

	if (t41 != 374124237948LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x609 = UINT64_MAX;
	int32_t x610 = INT32_MIN;
	volatile int32_t x611 = -36132984;
	uint64_t t42 = 15LLU;

	t42 = ((x609<<(x610/x611))-x612);

	if (t42 != 17870283321406128079LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x617 = 113U;
	int64_t x619 = 24746LL;
	int32_t x620 = -1;
	volatile int32_t t43 = 42;

	t43 = ((x617<<(x618/x619))-x620);

	if (t43 != 114) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x629 = 92;
	uint64_t x630 = 1130609218694LLU;
	volatile int64_t x631 = INT64_MAX;
	int16_t x632 = -1;
	int32_t t44 = -62722378;

	t44 = ((x629<<(x630/x631))-x632);

	if (t44 != 93) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x645 = 1U;
	int8_t x648 = -1;

	t45 = ((x645<<(x646/x647))-x648);

	if (t45 != 2U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x653 = UINT8_MAX;
	static int32_t x654 = INT32_MIN;
	int64_t x655 = INT64_MAX;
	static uint32_t x656 = UINT32_MAX;
	volatile uint32_t t46 = 162U;

	t46 = ((x653<<(x654/x655))-x656);

	if (t46 != 256U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x674 = 412U;
	uint8_t x675 = UINT8_MAX;
	int16_t x676 = 0;
	volatile int32_t t47 = 430;

	t47 = ((x673<<(x674/x675))-x676);

	if (t47 != 18) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x677 = 360067723LL;
	static int64_t x678 = -1LL;
	int64_t x679 = INT64_MIN;
	int16_t x680 = -1;
	int64_t t48 = -139LL;

	t48 = ((x677<<(x678/x679))-x680);

	if (t48 != 360067724LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x761 = 1;
	static int16_t x762 = -1;
	volatile int8_t x763 = INT8_MIN;
	volatile int32_t x764 = -12710690;
	volatile int32_t t49 = 371225713;

	t49 = ((x761<<(x762/x763))-x764);

	if (t49 != 12710691) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x769 = 121U;
	static int16_t x770 = 1;
	int32_t x771 = INT32_MIN;
	int8_t x772 = 5;
	uint32_t t50 = 63110U;

	t50 = ((x769<<(x770/x771))-x772);

	if (t50 != 116U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x773 = UINT16_MAX;
	volatile int32_t x774 = -1;
	int64_t x775 = INT64_MIN;
	int16_t x776 = -1;

	t51 = ((x773<<(x774/x775))-x776);

	if (t51 != 65536) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x785 = UINT8_MAX;
	volatile int16_t x788 = -7656;
	int32_t t52 = -2428;

	t52 = ((x785<<(x786/x787))-x788);

	if (t52 != 7911) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x789 = 0U;
	volatile int16_t x790 = 0;
	static int8_t x791 = 22;
	int8_t x792 = -1;

	t53 = ((x789<<(x790/x791))-x792);

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x813 = INT16_MAX;
	volatile int16_t x814 = -1;
	int16_t x815 = INT16_MAX;
	static int32_t t54 = -3327;

	t54 = ((x813<<(x814/x815))-x816);

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x818 = 76828816611LLU;
	int64_t x819 = INT64_MAX;
	int16_t x820 = INT16_MIN;
	static volatile int32_t t55 = 767;

	t55 = ((x817<<(x818/x819))-x820);

	if (t55 != 32895) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x853 = 1U;
	uint16_t x854 = UINT16_MAX;
	static int32_t x855 = 453187960;
	static int64_t x856 = -66344519224721118LL;
	int64_t t56 = -1932856470LL;

	t56 = ((x853<<(x854/x855))-x856);

	if (t56 != 66344519224721119LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x858 = 1875U;
	uint16_t x859 = UINT16_MAX;
	int64_t x860 = -1189487LL;

	t57 = ((x857<<(x858/x859))-x860);

	if (t57 != 1222254LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x865 = UINT16_MAX;
	volatile int64_t x866 = -1LL;
	uint16_t x867 = 17U;
	volatile uint16_t x868 = 2323U;

	t58 = ((x865<<(x866/x867))-x868);

	if (t58 != 63212) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x881 = 1;
	int16_t x882 = INT16_MIN;
	int16_t x883 = INT16_MIN;
	int32_t x884 = -1;
	volatile int32_t t59 = 3720;

	t59 = ((x881<<(x882/x883))-x884);

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x893 = 90063165847278525LLU;
	int64_t x894 = -1LL;
	static volatile uint32_t x895 = 17390U;
	int32_t x896 = INT32_MAX;
	volatile uint64_t t60 = 1760670062451687LLU;

	t60 = ((x893<<(x894/x895))-x896);

	if (t60 != 90063163699794878LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x925 = UINT8_MAX;
	int64_t x927 = INT64_MIN;
	volatile int64_t x928 = INT64_MAX;
	int64_t t61 = -2LL;

	t61 = ((x925<<(x926/x927))-x928);

	if (t61 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x938 = -1;
	int8_t x939 = -42;
	int32_t x940 = INT32_MAX;

	t62 = ((x937<<(x938/x939))-x940);

	if (t62 != -2147450880) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x981 = UINT64_MAX;
	int64_t x984 = -1974499695311LL;
	volatile uint64_t t63 = 2809064150414422LLU;

	t63 = ((x981<<(x982/x983))-x984);

	if (t63 != 18442242448581876431LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x1002 = 49;
	uint32_t x1003 = 3664U;
	int64_t x1004 = 92037344988636777LL;
	int64_t t64 = -316355347601074LL;

	t64 = ((x1001<<(x1002/x1003))-x1004);

	if (t64 != -92037344988636522LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1009 = 0;
	uint16_t x1010 = 1U;
	uint64_t x1011 = 135211389LLU;
	int32_t x1012 = INT32_MAX;
	volatile int32_t t65 = 813;

	t65 = ((x1009<<(x1010/x1011))-x1012);

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x1033 = 1185485LL;
	uint8_t x1034 = 1U;
	int64_t x1035 = INT64_MAX;
	volatile int64_t t66 = -740993846569251LL;

	t66 = ((x1033<<(x1034/x1035))-x1036);

	if (t66 != 1185486LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x1054 = 11U;
	static int16_t x1055 = INT16_MAX;
	int32_t x1056 = -1;
	int32_t t67 = -139831374;

	t67 = ((x1053<<(x1054/x1055))-x1056);

	if (t67 != 65536) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x1057 = 13U;
	int32_t x1058 = -433641;
	volatile int32_t x1060 = INT32_MAX;
	int32_t t68 = 2772;

	t68 = ((x1057<<(x1058/x1059))-x1060);

	if (t68 != -2147483634) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x1077 = 536U;
	int8_t x1078 = INT8_MAX;
	int8_t x1080 = 7;

	t69 = ((x1077<<(x1078/x1079))-x1080);

	if (t69 != 1065) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x1089 = 4359LLU;
	int16_t x1090 = 31;
	int64_t x1091 = 2LL;
	uint16_t x1092 = UINT16_MAX;
	uint64_t t70 = 27153900443LLU;

	t70 = ((x1089<<(x1090/x1091))-x1092);

	if (t70 != 142770177LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x1097 = 28U;
	int32_t x1098 = -1;
	volatile int64_t x1099 = -1LL;
	int32_t x1100 = INT32_MIN;

	t71 = ((x1097<<(x1098/x1099))-x1100);

	if (t71 != 2147483704U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1105 = UINT32_MAX;
	static uint64_t x1106 = 0LLU;
	uint16_t x1107 = 19129U;
	int32_t x1108 = INT32_MAX;
	static volatile uint32_t t72 = 508985758U;

	t72 = ((x1105<<(x1106/x1107))-x1108);

	if (t72 != 2147483648U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x1129 = 32372U;
	int16_t x1130 = INT16_MAX;
	volatile int64_t x1132 = -1LL;

	t73 = ((x1129<<(x1130/x1131))-x1132);

	if (t73 != 32373LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x1133 = UINT64_MAX;
	uint32_t x1134 = UINT32_MAX;
	int8_t x1136 = -34;
	uint64_t t74 = 19LLU;

	t74 = ((x1133<<(x1134/x1135))-x1136);

	if (t74 != 32LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1145 = 1029U;
	int32_t x1146 = 0;
	int8_t x1147 = 1;
	uint32_t x1148 = UINT32_MAX;
	uint32_t t75 = 48467U;

	t75 = ((x1145<<(x1146/x1147))-x1148);

	if (t75 != 1030U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x1158 = 3U;
	uint16_t x1159 = 14U;
	int64_t x1160 = INT64_MAX;
	volatile uint64_t t76 = 13574513999662857LLU;

	t76 = ((x1157<<(x1158/x1159))-x1160);

	if (t76 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x1173 = 6948LLU;
	int16_t x1174 = INT16_MIN;
	uint64_t x1175 = UINT64_MAX;
	uint64_t t77 = 0LLU;

	t77 = ((x1173<<(x1174/x1175))-x1176);

	if (t77 != 39716LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x1201 = 1U;
	uint8_t x1202 = 2U;
	volatile uint16_t x1203 = 1U;
	int64_t x1204 = -1LL;
	volatile int64_t t78 = 134238360288LL;

	t78 = ((x1201<<(x1202/x1203))-x1204);

	if (t78 != 5LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x1209 = 1691;
	volatile int8_t x1210 = 0;
	static int64_t x1211 = INT64_MIN;
	volatile uint32_t x1212 = 3U;
	uint32_t t79 = 3536474U;

	t79 = ((x1209<<(x1210/x1211))-x1212);

	if (t79 != 1688U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x1213 = INT16_MAX;
	uint8_t x1214 = 40U;
	volatile int64_t x1215 = 400633886387181010LL;
	volatile int16_t x1216 = 6761;
	int32_t t80 = -2006606;

	t80 = ((x1213<<(x1214/x1215))-x1216);

	if (t80 != 26006) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x1222 = -14908;
	static int8_t x1224 = INT8_MAX;
	uint32_t t81 = 120131U;

	t81 = ((x1221<<(x1222/x1223))-x1224);

	if (t81 != 4294967259U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x1230 = INT32_MIN;
	uint64_t x1231 = UINT64_MAX;
	volatile int64_t t82 = -1407571184LL;

	t82 = ((x1229<<(x1230/x1231))-x1232);

	if (t82 != -1340301228769LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x1233 = 26;
	uint16_t x1234 = UINT16_MAX;
	uint16_t x1236 = 5167U;
	int32_t t83 = 1913067;

	t83 = ((x1233<<(x1234/x1235))-x1236);

	if (t83 != -5141) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x1261 = UINT64_MAX;
	uint16_t x1262 = UINT16_MAX;
	int16_t x1264 = INT16_MIN;
	static uint64_t t84 = 793904485386LLU;

	t84 = ((x1261<<(x1262/x1263))-x1264);

	if (t84 != 32767LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x1265 = 5;
	uint64_t x1266 = UINT64_MAX;
	int16_t x1267 = -43;
	static uint8_t x1268 = 29U;
	int32_t t85 = -4;

	t85 = ((x1265<<(x1266/x1267))-x1268);

	if (t85 != -19) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x1273 = INT32_MAX;
	int16_t x1274 = -1;
	uint32_t t86 = 115U;

	t86 = ((x1273<<(x1274/x1275))-x1276);

	if (t86 != 2146722180U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x1281 = UINT32_MAX;
	int32_t x1282 = 70;
	int16_t x1283 = INT16_MAX;
	volatile int32_t x1284 = INT32_MAX;

	t87 = ((x1281<<(x1282/x1283))-x1284);

	if (t87 != 2147483648U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1285 = 248813U;
	volatile int8_t x1286 = -1;
	volatile int32_t x1287 = -81564;
	static int8_t x1288 = 15;
	uint32_t t88 = 461250U;

	t88 = ((x1285<<(x1286/x1287))-x1288);

	if (t88 != 248798U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x1325 = 4194542;
	int64_t x1327 = INT64_MIN;
	uint64_t x1328 = 4032117937299621023LLU;
	volatile uint64_t t89 = 4067991804177706LLU;

	t89 = ((x1325<<(x1326/x1327))-x1328);

	if (t89 != 14414626136414125135LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x1329 = 38886U;
	uint16_t x1330 = 10849U;
	uint16_t x1331 = 837U;
	int16_t x1332 = 27;
	volatile uint32_t t90 = 1658385U;

	t90 = ((x1329<<(x1330/x1331))-x1332);

	if (t90 != 159277029U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x1333 = 6U;
	static uint64_t x1334 = UINT64_MAX;
	int8_t x1335 = INT8_MIN;
	static uint8_t x1336 = UINT8_MAX;
	static volatile int32_t t91 = 14567817;

	t91 = ((x1333<<(x1334/x1335))-x1336);

	if (t91 != -243) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x1365 = UINT64_MAX;
	int8_t x1366 = INT8_MAX;
	static uint16_t x1367 = UINT16_MAX;
	int16_t x1368 = -1;
	volatile uint64_t t92 = 6243298151496064LLU;

	t92 = ((x1365<<(x1366/x1367))-x1368);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x1389 = 66;
	int16_t x1390 = INT16_MIN;
	static int16_t x1392 = -399;

	t93 = ((x1389<<(x1390/x1391))-x1392);

	if (t93 != 531) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x1397 = UINT8_MAX;
	int64_t x1398 = -1LL;
	int16_t x1399 = -4;
	volatile uint32_t x1400 = 63403U;
	uint32_t t94 = 40846U;

	t94 = ((x1397<<(x1398/x1399))-x1400);

	if (t94 != 4294904148U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x1409 = UINT32_MAX;
	int16_t x1411 = INT16_MIN;
	static uint32_t t95 = 1843673723U;

	t95 = ((x1409<<(x1410/x1411))-x1412);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x1421 = 683331LLU;
	static int64_t x1422 = -1LL;
	volatile uint32_t x1423 = UINT32_MAX;
	uint16_t x1424 = UINT16_MAX;
	uint64_t t96 = 123706789055LLU;

	t96 = ((x1421<<(x1422/x1423))-x1424);

	if (t96 != 617796LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x1429 = UINT16_MAX;
	int16_t x1430 = 2809;
	static int64_t x1431 = INT64_MAX;
	static int16_t x1432 = 1828;

	t97 = ((x1429<<(x1430/x1431))-x1432);

	if (t97 != 63707) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x1453 = 14U;
	int32_t x1454 = 15047;
	uint64_t x1455 = UINT64_MAX;
	int32_t x1456 = 925;

	t98 = ((x1453<<(x1454/x1455))-x1456);

	if (t98 != -911) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1465 = INT16_MAX;

	t99 = ((x1465<<(x1466/x1467))-x1468);

	if (t99 != 32757) { NG(); } else { ; }
	
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

