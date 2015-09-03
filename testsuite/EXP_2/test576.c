#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x25 = 14U;
uint64_t x35 = 31258LLU;
int64_t x36 = -514510288978638437LL;
static int8_t x57 = 22;
int64_t x63 = -1LL;
int32_t t3 = -54360988;
uint32_t x84 = UINT32_MAX;
volatile uint64_t t5 = 3141797LLU;
uint8_t x132 = 1U;
uint32_t x141 = 183783U;
int32_t x143 = 1756;
int64_t x145 = 165236075LL;
uint32_t x149 = 122088U;
int32_t x172 = INT32_MIN;
uint32_t t14 = 2146U;
static volatile uint32_t x177 = 61886U;
volatile uint32_t t15 = 2118U;
int64_t x186 = INT64_MAX;
int64_t x198 = INT64_MIN;
static volatile int64_t x199 = INT64_MIN;
int64_t x214 = 1LL;
volatile uint64_t t19 = 6975691284LLU;
static uint8_t x235 = 9U;
volatile int32_t t21 = 503316354;
volatile int32_t t22 = -124;
int64_t t23 = 3767565595588969LL;
static int32_t x287 = INT32_MIN;
uint64_t x288 = UINT64_MAX;
volatile uint8_t x292 = 14U;
uint32_t x293 = 470U;
static int8_t x295 = -1;
volatile int64_t x315 = INT64_MIN;
int32_t t27 = 373803337;
static uint8_t x324 = UINT8_MAX;
int64_t x333 = INT64_MAX;
static uint8_t x336 = UINT8_MAX;
int64_t x343 = INT64_MIN;
volatile uint64_t t30 = 497679151104442416LLU;
static int16_t x350 = 119;
static volatile uint64_t t33 = 1058041043147LLU;
int64_t x459 = INT64_MIN;
volatile int32_t t37 = 109094;
uint16_t x461 = 1111U;
uint32_t x462 = 30831U;
int64_t x464 = -1LL;
volatile int64_t x465 = INT64_MAX;
uint32_t x466 = 126U;
int16_t x474 = INT16_MIN;
static int8_t x476 = INT8_MAX;
volatile uint64_t x477 = 3LLU;
uint64_t t41 = 5746LLU;
uint64_t x493 = UINT64_MAX;
volatile uint16_t x496 = 13U;
uint32_t x510 = UINT32_MAX;
volatile int32_t t46 = 1;
int16_t x528 = INT16_MIN;
static uint32_t x543 = 46848U;
static uint8_t x553 = 12U;
int16_t x555 = 113;
uint64_t x560 = UINT64_MAX;
uint8_t x593 = 4U;
volatile int32_t t52 = -211722165;
int8_t x601 = 0;
int32_t t53 = 4143224;
uint32_t x637 = 362U;
volatile int32_t x639 = -5645;
uint32_t t54 = 157245117U;
volatile int32_t x658 = INT32_MIN;
int16_t x666 = INT16_MIN;
static uint64_t x667 = 1609237270580363157LLU;
static uint64_t x701 = UINT64_MAX;
volatile uint8_t x702 = 5U;
uint64_t t58 = 2074915382LLU;
int32_t x726 = -1043103;
int16_t x727 = INT16_MIN;
int64_t x731 = INT64_MAX;
int64_t x745 = INT64_MAX;
static int64_t x747 = INT64_MIN;
int32_t x751 = INT32_MIN;
int16_t x753 = 105;
uint8_t x754 = 116U;
int64_t x768 = INT64_MIN;
int64_t t65 = -173557LL;
uint64_t x769 = UINT64_MAX;
volatile int32_t x771 = INT32_MIN;
uint8_t x784 = UINT8_MAX;
volatile int16_t x797 = INT16_MAX;
int64_t x799 = INT64_MIN;
int32_t x802 = -1;
uint64_t x817 = 27LLU;
static int64_t x819 = -3477270825111821LL;
volatile int32_t x820 = -1;
int32_t x833 = 37550894;
int8_t x838 = INT8_MAX;
int64_t t73 = -10803419735LL;
int8_t x878 = INT8_MAX;
int16_t x938 = INT16_MIN;
volatile uint64_t t78 = 1524912490733464259LLU;
volatile uint64_t x947 = UINT64_MAX;
int64_t x948 = INT64_MIN;
int8_t x1015 = INT8_MIN;
volatile uint16_t x1024 = 2U;
volatile int32_t t83 = 384105;
int16_t x1029 = 807;
uint8_t x1030 = 0U;
int16_t x1079 = -110;
int64_t x1119 = INT64_MIN;
int16_t x1142 = 940;
int64_t t90 = 1713765LL;
volatile int64_t t91 = 10268622865LL;
int32_t x1178 = -52;
int8_t x1186 = 55;
static uint8_t x1187 = 111U;
volatile int32_t t93 = 72;
uint8_t x1217 = UINT8_MAX;
volatile uint16_t x1220 = UINT16_MAX;
volatile int32_t x1251 = INT32_MIN;
uint32_t x1260 = 698287U;
static volatile uint32_t t97 = 187355U;


void f0(void) {
	static int8_t x26 = INT8_MIN;
	int64_t x27 = INT64_MIN;
	int64_t x28 = INT64_MAX;
	int64_t t0 = -449LL;

	t0 = ((x25<<(x26/x27))/x28);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x33 = UINT16_MAX;
	uint8_t x34 = UINT8_MAX;
	volatile int64_t t1 = 50507014LL;

	t1 = ((x33<<(x34/x35))/x36);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x58 = 28U;
	int32_t x59 = -49;
	uint32_t x60 = 25150U;
	uint32_t t2 = 581455U;

	t2 = ((x57<<(x58/x59))/x60);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x61 = 828945;
	int8_t x62 = 0;
	int8_t x64 = 2;

	t3 = ((x61<<(x62/x63))/x64);

	if (t3 != 414472) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x77 = INT32_MAX;
	int8_t x78 = -7;
	int16_t x79 = INT16_MIN;
	uint64_t x80 = UINT64_MAX;
	volatile uint64_t t4 = 534683846LLU;

	t4 = ((x77<<(x78/x79))/x80);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x81 = 36647783257862942LLU;
	static int64_t x82 = -1LL;
	int16_t x83 = INT16_MAX;

	t5 = ((x81<<(x82/x83))/x84);

	if (t5 != 8532726LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x93 = UINT64_MAX;
	int16_t x94 = INT16_MIN;
	int64_t x95 = INT64_MIN;
	volatile uint32_t x96 = UINT32_MAX;
	uint64_t t6 = 4582852763686456326LLU;

	t6 = ((x93<<(x94/x95))/x96);

	if (t6 != 4294967297LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x105 = 6U;
	int32_t x106 = -1;
	volatile int8_t x107 = INT8_MAX;
	static int32_t x108 = -480;
	int32_t t7 = -17;

	t7 = ((x105<<(x106/x107))/x108);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x113 = INT64_MAX;
	volatile int8_t x114 = 0;
	static int8_t x115 = -1;
	int8_t x116 = -8;
	volatile int64_t t8 = 1131113852123149693LL;

	t8 = ((x113<<(x114/x115))/x116);

	if (t8 != -1152921504606846975LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x129 = UINT64_MAX;
	uint16_t x130 = 402U;
	uint8_t x131 = 100U;
	volatile uint64_t t9 = 369710912LLU;

	t9 = ((x129<<(x130/x131))/x132);

	if (t9 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x142 = 24U;
	volatile int16_t x144 = -1;
	static volatile uint32_t t10 = 23U;

	t10 = ((x141<<(x142/x143))/x144);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x146 = -1;
	static int64_t x147 = -385644183406648822LL;
	int16_t x148 = -4;
	volatile int64_t t11 = -302712299718879LL;

	t11 = ((x145<<(x146/x147))/x148);

	if (t11 != -41309018LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x150 = -3;
	uint8_t x151 = 10U;
	int16_t x152 = -8;
	uint32_t t12 = 25358U;

	t12 = ((x149<<(x150/x151))/x152);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x169 = 112358930U;
	static int8_t x170 = -2;
	int8_t x171 = -16;
	uint32_t t13 = 15135830U;

	t13 = ((x169<<(x170/x171))/x172);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x173 = 718U;
	int8_t x174 = 1;
	uint64_t x175 = 195235891998LLU;
	uint32_t x176 = 1949U;

	t14 = ((x173<<(x174/x175))/x176);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x178 = 0;
	static int16_t x179 = INT16_MIN;
	int32_t x180 = -1;

	t15 = ((x177<<(x178/x179))/x180);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x185 = INT64_MAX;
	int64_t x187 = INT64_MIN;
	static int64_t x188 = -774LL;
	int64_t t16 = 105087519327LL;

	t16 = ((x185<<(x186/x187))/x188);

	if (t16 != -11916501339605653LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x197 = 14;
	volatile int64_t x200 = INT64_MIN;
	int64_t t17 = -2068879LL;

	t17 = ((x197<<(x198/x199))/x200);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x213 = 2125188239903382596LLU;
	uint8_t x215 = 6U;
	static int64_t x216 = INT64_MAX;
	uint64_t t18 = 90LLU;

	t18 = ((x213<<(x214/x215))/x216);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x217 = UINT64_MAX;
	volatile int16_t x218 = INT16_MIN;
	static int32_t x219 = INT32_MAX;
	int8_t x220 = INT8_MIN;

	t19 = ((x217<<(x218/x219))/x220);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x233 = 17022394LLU;
	int64_t x234 = -1LL;
	volatile int32_t x236 = INT32_MIN;
	uint64_t t20 = 1196563095526461444LLU;

	t20 = ((x233<<(x234/x235))/x236);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x265 = INT16_MAX;
	int8_t x266 = -1;
	int16_t x267 = -8933;
	int16_t x268 = INT16_MAX;

	t21 = ((x265<<(x266/x267))/x268);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x269 = 7985;
	int16_t x270 = INT16_MIN;
	static int16_t x271 = -3545;
	int8_t x272 = INT8_MIN;

	t22 = ((x269<<(x270/x271))/x272);

	if (t22 != -31940) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x281 = INT64_MAX;
	volatile int32_t x282 = 1;
	uint8_t x283 = 5U;
	uint32_t x284 = 433U;

	t23 = ((x281<<(x282/x283))/x284);

	if (t23 != 21301090154399020LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x285 = UINT16_MAX;
	uint8_t x286 = UINT8_MAX;
	volatile uint64_t t24 = 19838491710781119LLU;

	t24 = ((x285<<(x286/x287))/x288);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x289 = INT16_MAX;
	int16_t x290 = -6;
	int16_t x291 = -1;
	static volatile int32_t t25 = 0;

	t25 = ((x289<<(x290/x291))/x292);

	if (t25 != 149792) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x294 = 0;
	static int32_t x296 = -1;
	volatile uint32_t t26 = 901U;

	t26 = ((x293<<(x294/x295))/x296);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x313 = 1199;
	static int16_t x314 = 0;
	uint8_t x316 = 2U;

	t27 = ((x313<<(x314/x315))/x316);

	if (t27 != 599) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x321 = INT32_MAX;
	volatile int8_t x322 = -1;
	volatile int64_t x323 = INT64_MIN;
	int32_t t28 = -83542535;

	t28 = ((x321<<(x322/x323))/x324);

	if (t28 != 8421504) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x334 = -36;
	int64_t x335 = INT64_MIN;
	int64_t t29 = 7999731LL;

	t29 = ((x333<<(x334/x335))/x336);

	if (t29 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x341 = INT32_MAX;
	uint8_t x342 = UINT8_MAX;
	uint64_t x344 = 32869132LLU;

	t30 = ((x341<<(x342/x343))/x344);

	if (t30 != 65LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x349 = UINT8_MAX;
	static int32_t x351 = -207946;
	uint8_t x352 = UINT8_MAX;
	int32_t t31 = 17;

	t31 = ((x349<<(x350/x351))/x352);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x361 = 98U;
	int8_t x362 = -1;
	static int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MIN;
	volatile int64_t t32 = -26909759LL;

	t32 = ((x361<<(x362/x363))/x364);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x381 = 33749290768348LLU;
	int32_t x382 = 487624512;
	int64_t x383 = INT64_MIN;
	uint64_t x384 = 4095534LLU;

	t33 = ((x381<<(x382/x383))/x384);

	if (t33 != 8240510LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x401 = 646U;
	int64_t x402 = 7LL;
	int32_t x403 = INT32_MIN;
	int16_t x404 = 20;
	uint32_t t34 = 1272405U;

	t34 = ((x401<<(x402/x403))/x404);

	if (t34 != 32U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x425 = UINT8_MAX;
	volatile int16_t x426 = 68;
	uint64_t x427 = UINT64_MAX;
	int32_t x428 = -1;
	int32_t t35 = 7886;

	t35 = ((x425<<(x426/x427))/x428);

	if (t35 != -255) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x437 = 955905429LLU;
	volatile uint8_t x438 = 0U;
	uint16_t x439 = UINT16_MAX;
	volatile int64_t x440 = 57055123LL;
	static volatile uint64_t t36 = 86286706LLU;

	t36 = ((x437<<(x438/x439))/x440);

	if (t36 != 16LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x457 = UINT16_MAX;
	int64_t x458 = INT64_MAX;
	int8_t x460 = -51;

	t37 = ((x457<<(x458/x459))/x460);

	if (t37 != -1285) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x463 = INT16_MIN;
	int64_t t38 = 68441605634463LL;

	t38 = ((x461<<(x462/x463))/x464);

	if (t38 != -1111LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x467 = INT16_MAX;
	uint32_t x468 = UINT32_MAX;
	volatile int64_t t39 = 1500302955467400LL;

	t39 = ((x465<<(x466/x467))/x468);

	if (t39 != 2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x473 = INT8_MAX;
	int32_t x475 = INT32_MIN;
	int32_t t40 = 418321973;

	t40 = ((x473<<(x474/x475))/x476);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x478 = 0;
	uint8_t x479 = 86U;
	static uint64_t x480 = 15193549249206865LLU;

	t41 = ((x477<<(x478/x479))/x480);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x489 = 59LLU;
	static int16_t x490 = -1;
	int64_t x491 = INT64_MAX;
	static int8_t x492 = -1;
	volatile uint64_t t42 = 6700688804739619901LLU;

	t42 = ((x489<<(x490/x491))/x492);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x494 = 70U;
	int64_t x495 = INT64_MIN;
	static volatile uint64_t t43 = 327LLU;

	t43 = ((x493<<(x494/x495))/x496);

	if (t43 != 1418980313362273201LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x501 = UINT16_MAX;
	int16_t x502 = INT16_MIN;
	int32_t x503 = INT32_MIN;
	uint32_t x504 = 596368U;
	volatile uint32_t t44 = 145U;

	t44 = ((x501<<(x502/x503))/x504);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x509 = UINT8_MAX;
	uint32_t x511 = 369573525U;
	static int8_t x512 = 1;
	volatile int32_t t45 = -7427;

	t45 = ((x509<<(x510/x511))/x512);

	if (t45 != 522240) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x517 = 12U;
	static int32_t x518 = INT32_MAX;
	int32_t x519 = INT32_MAX;
	int16_t x520 = -10750;

	t46 = ((x517<<(x518/x519))/x520);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x525 = 117U;
	uint32_t x526 = 0U;
	uint8_t x527 = UINT8_MAX;
	int32_t t47 = 6;

	t47 = ((x525<<(x526/x527))/x528);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x541 = 0;
	int8_t x542 = 0;
	int64_t x544 = -1LL;
	static int64_t t48 = -7963883LL;

	t48 = ((x541<<(x542/x543))/x544);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x554 = -1;
	int16_t x556 = INT16_MIN;
	static int32_t t49 = 88;

	t49 = ((x553<<(x554/x555))/x556);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x557 = UINT8_MAX;
	volatile int16_t x558 = INT16_MIN;
	volatile int64_t x559 = INT64_MIN;
	volatile uint64_t t50 = 7949885934467LLU;

	t50 = ((x557<<(x558/x559))/x560);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x581 = 1;
	volatile uint16_t x582 = 20267U;
	uint64_t x583 = 1243735LLU;
	static int16_t x584 = -1;
	int32_t t51 = -1;

	t51 = ((x581<<(x582/x583))/x584);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x594 = 1U;
	uint32_t x595 = 50537012U;
	int16_t x596 = INT16_MIN;

	t52 = ((x593<<(x594/x595))/x596);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x602 = -6;
	static int8_t x603 = INT8_MIN;
	int16_t x604 = INT16_MIN;

	t53 = ((x601<<(x602/x603))/x604);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x638 = INT8_MIN;
	int8_t x640 = INT8_MIN;

	t54 = ((x637<<(x638/x639))/x640);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x645 = 11304897LLU;
	int16_t x646 = -679;
	uint64_t x647 = UINT64_MAX;
	uint64_t x648 = UINT64_MAX;
	volatile uint64_t t55 = 930584715067640LLU;

	t55 = ((x645<<(x646/x647))/x648);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x657 = INT8_MAX;
	int32_t x659 = INT32_MIN;
	volatile uint8_t x660 = 1U;
	volatile int32_t t56 = 98;

	t56 = ((x657<<(x658/x659))/x660);

	if (t56 != 254) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x665 = 149U;
	static int32_t x668 = INT32_MIN;
	uint32_t t57 = 206500250U;

	t57 = ((x665<<(x666/x667))/x668);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x703 = 1020212017493LLU;
	int16_t x704 = INT16_MAX;

	t58 = ((x701<<(x702/x703))/x704);

	if (t58 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x725 = 47U;
	int32_t x728 = INT32_MIN;
	uint32_t t59 = 1U;

	t59 = ((x725<<(x726/x727))/x728);

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x729 = 187U;
	uint32_t x730 = 24764U;
	int32_t x732 = 16062;
	static volatile int32_t t60 = 1402;

	t60 = ((x729<<(x730/x731))/x732);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x737 = 45333U;
	int16_t x738 = -1;
	int8_t x739 = 62;
	int32_t x740 = INT32_MAX;
	uint32_t t61 = 783U;

	t61 = ((x737<<(x738/x739))/x740);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x746 = INT32_MIN;
	int64_t x748 = -1LL;
	volatile int64_t t62 = 23539202254638359LL;

	t62 = ((x745<<(x746/x747))/x748);

	if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x749 = 1U;
	int16_t x750 = 2;
	int64_t x752 = INT64_MAX;
	int64_t t63 = 3LL;

	t63 = ((x749<<(x750/x751))/x752);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x755 = INT64_MIN;
	static int16_t x756 = INT16_MIN;
	volatile int32_t t64 = 966391557;

	t64 = ((x753<<(x754/x755))/x756);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x765 = 5U;
	int64_t x766 = INT64_MIN;
	static volatile uint64_t x767 = UINT64_MAX;

	t65 = ((x765<<(x766/x767))/x768);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x770 = INT16_MIN;
	volatile int32_t x772 = -1;
	uint64_t t66 = 3102908972361938534LLU;

	t66 = ((x769<<(x770/x771))/x772);

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x781 = 6409U;
	uint32_t x782 = 58U;
	volatile uint64_t x783 = 19712423596359210LLU;
	static int32_t t67 = -6526;

	t67 = ((x781<<(x782/x783))/x784);

	if (t67 != 25) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x793 = 34;
	uint16_t x794 = UINT16_MAX;
	static uint16_t x795 = UINT16_MAX;
	uint32_t x796 = 2970678U;
	uint32_t t68 = 18929442U;

	t68 = ((x793<<(x794/x795))/x796);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x798 = 302712;
	static int64_t x800 = 556231715102813160LL;
	static int64_t t69 = -698683LL;

	t69 = ((x797<<(x798/x799))/x800);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x801 = UINT32_MAX;
	uint8_t x803 = 27U;
	int8_t x804 = INT8_MIN;
	static uint32_t t70 = 6843U;

	t70 = ((x801<<(x802/x803))/x804);

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x818 = INT32_MAX;
	volatile uint64_t t71 = 4955LLU;

	t71 = ((x817<<(x818/x819))/x820);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x834 = 69020014LLU;
	int8_t x835 = INT8_MIN;
	uint64_t x836 = UINT64_MAX;
	static uint64_t t72 = 77698274131204141LLU;

	t72 = ((x833<<(x834/x835))/x836);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x837 = 2859340LL;
	int32_t x839 = -95702627;
	int64_t x840 = INT64_MAX;

	t73 = ((x837<<(x838/x839))/x840);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x857 = 0;
	uint8_t x858 = 20U;
	uint16_t x859 = 11U;
	int16_t x860 = INT16_MIN;
	int32_t t74 = -25758;

	t74 = ((x857<<(x858/x859))/x860);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x877 = 16629316;
	int8_t x879 = INT8_MIN;
	static int16_t x880 = -133;
	volatile int32_t t75 = 6;

	t75 = ((x877<<(x878/x879))/x880);

	if (t75 != -125032) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x921 = INT16_MAX;
	int64_t x922 = -1LL;
	int64_t x923 = 1248724240227869LL;
	int8_t x924 = -27;
	volatile int32_t t76 = 2;

	t76 = ((x921<<(x922/x923))/x924);

	if (t76 != -1213) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x933 = UINT16_MAX;
	int64_t x934 = INT64_MIN;
	int64_t x935 = INT64_MIN;
	int16_t x936 = INT16_MIN;
	int32_t t77 = -2063188;

	t77 = ((x933<<(x934/x935))/x936);

	if (t77 != -3) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x937 = 5;
	int16_t x939 = -3867;
	uint64_t x940 = UINT64_MAX;

	t78 = ((x937<<(x938/x939))/x940);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x945 = 1U;
	uint32_t x946 = 188703850U;
	static volatile int64_t t79 = 7872287617775275LL;

	t79 = ((x945<<(x946/x947))/x948);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x969 = INT32_MAX;
	int32_t x970 = INT32_MAX;
	int32_t x971 = INT32_MIN;
	int8_t x972 = INT8_MIN;
	volatile int32_t t80 = -121;

	t80 = ((x969<<(x970/x971))/x972);

	if (t80 != -16777215) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x1009 = UINT16_MAX;
	uint16_t x1010 = 4038U;
	int64_t x1011 = INT64_MAX;
	static int16_t x1012 = -1607;
	int32_t t81 = 3376;

	t81 = ((x1009<<(x1010/x1011))/x1012);

	if (t81 != -40) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x1013 = 790983002U;
	static int8_t x1014 = 1;
	int32_t x1016 = -42678912;
	static volatile uint32_t t82 = 4U;

	t82 = ((x1013<<(x1014/x1015))/x1016);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x1021 = 2U;
	static int64_t x1022 = -44LL;
	int64_t x1023 = INT64_MIN;

	t83 = ((x1021<<(x1022/x1023))/x1024);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x1031 = 1440895183070LL;
	int32_t x1032 = 263096;
	int32_t t84 = -503371;

	t84 = ((x1029<<(x1030/x1031))/x1032);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1033 = 50959462LLU;
	static int16_t x1034 = -61;
	uint8_t x1035 = UINT8_MAX;
	int64_t x1036 = -2284121743759728955LL;
	static uint64_t t85 = 287145LLU;

	t85 = ((x1033<<(x1034/x1035))/x1036);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x1077 = UINT8_MAX;
	uint64_t x1078 = 6640915920460848LLU;
	uint64_t x1080 = 857382814978LLU;
	static volatile uint64_t t86 = 4530LLU;

	t86 = ((x1077<<(x1078/x1079))/x1080);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x1117 = 2055039;
	uint64_t x1118 = UINT64_MAX;
	volatile uint8_t x1120 = 1U;
	int32_t t87 = -249891;

	t87 = ((x1117<<(x1118/x1119))/x1120);

	if (t87 != 4110078) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1141 = INT8_MAX;
	static int32_t x1143 = 142353729;
	volatile uint64_t x1144 = 790761LLU;
	uint64_t t88 = 1154152181761LLU;

	t88 = ((x1141<<(x1142/x1143))/x1144);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x1145 = 27941268LLU;
	uint64_t x1146 = UINT64_MAX;
	int32_t x1147 = INT32_MIN;
	static uint8_t x1148 = 117U;
	volatile uint64_t t89 = 57LLU;

	t89 = ((x1145<<(x1146/x1147))/x1148);

	if (t89 != 477628LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x1157 = INT16_MAX;
	int8_t x1158 = INT8_MIN;
	static int64_t x1159 = INT64_MIN;
	static volatile int64_t x1160 = -1LL;

	t90 = ((x1157<<(x1158/x1159))/x1160);

	if (t90 != -32767LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x1161 = 15;
	int32_t x1162 = -1;
	uint16_t x1163 = UINT16_MAX;
	static int64_t x1164 = INT64_MIN;

	t91 = ((x1161<<(x1162/x1163))/x1164);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1177 = 0;
	static int8_t x1179 = INT8_MIN;
	static uint8_t x1180 = UINT8_MAX;
	volatile int32_t t92 = 0;

	t92 = ((x1177<<(x1178/x1179))/x1180);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x1185 = INT16_MAX;
	static int32_t x1188 = -1;

	t93 = ((x1185<<(x1186/x1187))/x1188);

	if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x1218 = 3U;
	int64_t x1219 = -95457371724LL;
	static volatile int32_t t94 = 21937092;

	t94 = ((x1217<<(x1218/x1219))/x1220);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x1221 = 10;
	static int8_t x1222 = -1;
	uint16_t x1223 = UINT16_MAX;
	int16_t x1224 = -1;
	volatile int32_t t95 = -184423488;

	t95 = ((x1221<<(x1222/x1223))/x1224);

	if (t95 != -10) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x1249 = 31914U;
	int32_t x1250 = 1373;
	uint32_t x1252 = 2735206U;
	uint32_t t96 = 2719957U;

	t96 = ((x1249<<(x1250/x1251))/x1252);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x1257 = UINT32_MAX;
	uint8_t x1258 = 8U;
	int32_t x1259 = INT32_MAX;

	t97 = ((x1257<<(x1258/x1259))/x1260);

	if (t97 != 6150U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x1261 = INT64_MAX;
	static uint32_t x1262 = 6U;
	static int16_t x1263 = -9;
	int8_t x1264 = INT8_MAX;
	int64_t t98 = -503003LL;

	t98 = ((x1261<<(x1262/x1263))/x1264);

	if (t98 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x1281 = 11838676U;
	uint8_t x1282 = 0U;
	int32_t x1283 = INT32_MIN;
	uint16_t x1284 = 38U;
	volatile uint32_t t99 = 7U;

	t99 = ((x1281<<(x1282/x1283))/x1284);

	if (t99 != 311544U) { NG(); } else { ; }
	
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

