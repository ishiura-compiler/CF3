#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MIN;
volatile int32_t t0 = -34;
int64_t t1 = 998905748131817833LL;
static int16_t x16 = -1;
int32_t t2 = -25;
int16_t x39 = 57;
int32_t t4 = 59;
uint8_t x74 = UINT8_MAX;
int16_t x75 = 6;
int64_t x111 = 2199925693785LL;
int32_t x119 = -1;
uint32_t x120 = 75U;
static uint8_t x133 = UINT8_MAX;
int8_t x135 = INT8_MIN;
static uint32_t x137 = UINT32_MAX;
int8_t x233 = 0;
static volatile int16_t x235 = INT16_MIN;
int16_t x236 = -4;
int16_t x239 = 78;
volatile int16_t x248 = -1;
static int64_t x249 = 144821351378LL;
uint8_t x250 = UINT8_MAX;
volatile int32_t t18 = -734680;
uint16_t x294 = UINT16_MAX;
volatile int32_t t19 = 63603;
int64_t x303 = INT64_MAX;
static uint64_t x330 = 161LLU;
int64_t x331 = 499069808095LL;
volatile int16_t x341 = -1;
static volatile uint32_t t24 = 7580676U;
int32_t x364 = -1;
int32_t t26 = 39723;
volatile int64_t t27 = 239684837LL;
volatile int64_t x398 = INT64_MIN;
int8_t x433 = 1;
uint8_t x466 = UINT8_MAX;
static int8_t x491 = 1;
uint8_t x492 = 36U;
static int32_t x509 = INT32_MAX;
uint8_t x519 = 7U;
static volatile int8_t x542 = INT8_MIN;
int32_t x547 = INT32_MIN;
volatile uint32_t x560 = 17159471U;
int32_t x599 = INT32_MIN;
static volatile int32_t t41 = 3299;
int64_t x606 = -1LL;
int64_t t42 = -737872414629913LL;
volatile int32_t x662 = INT32_MIN;
static int64_t t43 = -196974867546880319LL;
int8_t x685 = 44;
volatile int32_t t45 = -206558;
volatile int64_t x694 = -1571785LL;
static int16_t x697 = INT16_MAX;
static volatile int8_t x699 = 1;
volatile int32_t t49 = 1018077871;
int16_t x744 = 322;
int64_t x774 = INT64_MIN;
uint16_t x775 = 6223U;
int8_t x776 = 30;
int64_t t51 = 1LL;
int16_t x799 = INT16_MIN;
static volatile uint64_t t53 = 25109321LLU;
uint8_t x840 = 1U;
int64_t x869 = INT64_MAX;
int64_t x891 = -13725LL;
int16_t x892 = -1;
static int16_t x957 = -1;
volatile uint8_t x959 = UINT8_MAX;
volatile uint32_t t60 = 3U;
int64_t x1008 = -1LL;
int8_t x1021 = -1;
int8_t x1022 = -1;
int32_t t65 = 211;
int8_t x1084 = -2;
volatile uint64_t x1117 = 58577566LLU;
int64_t x1178 = -1LL;
int32_t x1191 = INT32_MIN;
volatile int32_t x1192 = -1;
int32_t t72 = 22145598;
static int16_t x1212 = -1;
uint32_t x1220 = UINT32_MAX;
uint8_t x1241 = 1U;
uint16_t x1242 = 811U;
int8_t x1270 = INT8_MIN;
int8_t x1272 = -1;
uint32_t x1310 = 130329476U;
uint32_t x1334 = UINT32_MAX;
int8_t x1339 = INT8_MIN;
uint8_t x1351 = 1U;
int16_t x1359 = 1900;
uint64_t x1381 = UINT64_MAX;
uint16_t x1382 = UINT16_MAX;
uint8_t x1393 = UINT8_MAX;
uint8_t x1395 = 0U;
static uint32_t t85 = 9U;
uint32_t x1401 = 217U;
int32_t x1430 = -6945558;
uint64_t x1498 = 216072838420698LLU;
uint64_t x1533 = 207739313270007645LLU;
int32_t x1597 = INT32_MAX;
int16_t x1601 = -1;
static uint64_t x1602 = UINT64_MAX;
volatile int8_t x1604 = INT8_MIN;
static uint64_t x1618 = UINT64_MAX;
uint16_t x1643 = 1U;
static int16_t x1658 = -106;


void f0(void) {
	int8_t x1 = 1;
	int16_t x2 = -23;
	static int32_t x3 = 28;

	t0 = ((x1%x2)>>(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile int64_t x6 = INT64_MIN;
	volatile uint8_t x7 = 12U;
	uint64_t x8 = 3315LLU;

	t1 = ((x5%x6)>>(x7%x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 1U;
	int8_t x14 = INT8_MAX;
	volatile int16_t x15 = INT16_MAX;

	t2 = ((x13%x14)>>(x15%x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x37 = 491;
	uint64_t x38 = UINT64_MAX;
	volatile uint16_t x40 = 2U;
	volatile uint64_t t3 = 1LLU;

	t3 = ((x37%x38)>>(x39%x40));

	if (t3 != 245LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x45 = INT8_MAX;
	uint16_t x46 = UINT16_MAX;
	int64_t x47 = INT64_MIN;
	static int8_t x48 = -1;

	t4 = ((x45%x46)>>(x47%x48));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x73 = INT8_MAX;
	volatile uint16_t x76 = 15326U;
	static int32_t t5 = -10745772;

	t5 = ((x73%x74)>>(x75%x76));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x89 = -1;
	static int32_t x90 = -1;
	int32_t x91 = -1;
	int8_t x92 = -1;
	int32_t t6 = -143848438;

	t6 = ((x89%x90)>>(x91%x92));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x97 = 81U;
	uint64_t x98 = 7371549554801142313LLU;
	volatile uint32_t x99 = UINT32_MAX;
	uint32_t x100 = UINT32_MAX;
	volatile uint64_t t7 = 1LLU;

	t7 = ((x97%x98)>>(x99%x100));

	if (t7 != 81LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x109 = 1222405LLU;
	static int16_t x110 = 11;
	volatile uint8_t x112 = 94U;
	volatile uint64_t t8 = 1120507400940404258LLU;

	t8 = ((x109%x110)>>(x111%x112));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x113 = 0U;
	uint32_t x114 = 542U;
	static int64_t x115 = INT64_MIN;
	int8_t x116 = INT8_MIN;
	volatile uint32_t t9 = 41576U;

	t9 = ((x113%x114)>>(x115%x116));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x117 = -210870523646LL;
	volatile uint8_t x118 = 1U;
	int64_t t10 = 1786085LL;

	t10 = ((x117%x118)>>(x119%x120));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x134 = INT64_MAX;
	int32_t x136 = -1;
	static int64_t t11 = -822300250636LL;

	t11 = ((x133%x134)>>(x135%x136));

	if (t11 != 255LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x138 = -18671348830598117LL;
	int16_t x139 = INT16_MAX;
	int32_t x140 = 2;
	static volatile int64_t t12 = 9524085703LL;

	t12 = ((x137%x138)>>(x139%x140));

	if (t12 != 2147483647LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x169 = INT8_MAX;
	uint8_t x170 = 10U;
	int8_t x171 = 7;
	int64_t x172 = -14076871674398LL;
	volatile int32_t t13 = 1;

	t13 = ((x169%x170)>>(x171%x172));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x234 = -68012;
	static int32_t t14 = 7247;

	t14 = ((x233%x234)>>(x235%x236));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x237 = 534U;
	static uint64_t x238 = UINT64_MAX;
	uint32_t x240 = 32U;
	static volatile uint64_t t15 = 4978LLU;

	t15 = ((x237%x238)>>(x239%x240));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x245 = INT16_MIN;
	int16_t x246 = INT16_MIN;
	int32_t x247 = 3057964;
	int32_t t16 = -1;

	t16 = ((x245%x246)>>(x247%x248));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x251 = 14032;
	static volatile int8_t x252 = -1;
	static int64_t t17 = -13LL;

	t17 = ((x249%x250)>>(x251%x252));

	if (t17 != 38LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x273 = 10860;
	int32_t x274 = INT32_MAX;
	int16_t x275 = -1;
	volatile int8_t x276 = 1;

	t18 = ((x273%x274)>>(x275%x276));

	if (t18 != 10860) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x293 = 3U;
	static uint8_t x295 = 3U;
	static int16_t x296 = INT16_MIN;

	t19 = ((x293%x294)>>(x295%x296));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x301 = 42U;
	int32_t x302 = -216342430;
	volatile int64_t x304 = -1LL;
	int32_t t20 = -191566;

	t20 = ((x301%x302)>>(x303%x304));

	if (t20 != 42) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x305 = -12;
	volatile uint32_t x306 = UINT32_MAX;
	uint8_t x307 = 17U;
	uint8_t x308 = 3U;
	uint32_t t21 = 29U;

	t21 = ((x305%x306)>>(x307%x308));

	if (t21 != 1073741821U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x309 = 2;
	volatile int64_t x310 = INT64_MIN;
	uint16_t x311 = UINT16_MAX;
	static int16_t x312 = 1;
	static volatile int64_t t22 = -2476384LL;

	t22 = ((x309%x310)>>(x311%x312));

	if (t22 != 2LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x329 = -1;
	volatile uint8_t x332 = 5U;
	uint64_t t23 = 12627120701634LLU;

	t23 = ((x329%x330)>>(x331%x332));

	if (t23 != 120LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x342 = UINT32_MAX;
	int32_t x343 = INT32_MIN;
	int8_t x344 = 1;

	t24 = ((x341%x342)>>(x343%x344));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x357 = 116151U;
	volatile int16_t x358 = -2;
	volatile uint32_t x359 = 1U;
	uint8_t x360 = UINT8_MAX;
	volatile uint32_t t25 = 58985U;

	t25 = ((x357%x358)>>(x359%x360));

	if (t25 != 58075U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x361 = 3U;
	int16_t x362 = INT16_MIN;
	int64_t x363 = INT64_MIN;

	t26 = ((x361%x362)>>(x363%x364));

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x385 = 13432U;
	static int64_t x386 = -1LL;
	int64_t x387 = -130374260LL;
	int64_t x388 = -1LL;

	t27 = ((x385%x386)>>(x387%x388));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x397 = 19;
	static uint64_t x399 = 27LLU;
	int8_t x400 = INT8_MIN;
	volatile int64_t t28 = 24564279954314751LL;

	t28 = ((x397%x398)>>(x399%x400));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x409 = INT64_MIN;
	static int32_t x410 = INT32_MIN;
	uint16_t x411 = 25767U;
	uint16_t x412 = 10U;
	int64_t t29 = 18503LL;

	t29 = ((x409%x410)>>(x411%x412));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x421 = -888;
	static uint8_t x422 = 3U;
	uint8_t x423 = 6U;
	int8_t x424 = INT8_MAX;
	static int32_t t30 = 150067;

	t30 = ((x421%x422)>>(x423%x424));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x429 = 126U;
	uint16_t x430 = 7512U;
	uint16_t x431 = 0U;
	int8_t x432 = INT8_MIN;
	int32_t t31 = -5;

	t31 = ((x429%x430)>>(x431%x432));

	if (t31 != 126) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x434 = INT32_MIN;
	int8_t x435 = 4;
	uint64_t x436 = UINT64_MAX;
	static volatile int32_t t32 = 63;

	t32 = ((x433%x434)>>(x435%x436));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x465 = 4U;
	int64_t x467 = INT64_MIN;
	uint64_t x468 = 3LLU;
	int32_t t33 = 5097;

	t33 = ((x465%x466)>>(x467%x468));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x489 = 13;
	static volatile int64_t x490 = 1870401LL;
	volatile int64_t t34 = -8053997580084LL;

	t34 = ((x489%x490)>>(x491%x492));

	if (t34 != 6LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x510 = 31U;
	static volatile uint32_t x511 = 1U;
	volatile int8_t x512 = INT8_MIN;
	volatile int32_t t35 = 1989040;

	t35 = ((x509%x510)>>(x511%x512));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x517 = -7;
	volatile int8_t x518 = -1;
	volatile int16_t x520 = 3;
	static int32_t t36 = -31;

	t36 = ((x517%x518)>>(x519%x520));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x541 = INT64_MIN;
	int64_t x543 = 71676273LL;
	static uint8_t x544 = 44U;
	int64_t t37 = 1022025366240LL;

	t37 = ((x541%x542)>>(x543%x544));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x545 = 1216021U;
	uint16_t x546 = 335U;
	int8_t x548 = INT8_MIN;
	volatile uint32_t t38 = 824900U;

	t38 = ((x545%x546)>>(x547%x548));

	if (t38 != 306U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x557 = 51;
	static uint64_t x558 = 397636219333LLU;
	uint16_t x559 = 1U;
	uint64_t t39 = 1456568038402LLU;

	t39 = ((x557%x558)>>(x559%x560));

	if (t39 != 25LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x589 = UINT64_MAX;
	volatile int64_t x590 = -1LL;
	static uint32_t x591 = UINT32_MAX;
	static uint16_t x592 = UINT16_MAX;
	uint64_t t40 = 9331548LLU;

	t40 = ((x589%x590)>>(x591%x592));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x597 = INT16_MAX;
	volatile int32_t x598 = -1;
	int8_t x600 = INT8_MIN;

	t41 = ((x597%x598)>>(x599%x600));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x605 = -48645598356LL;
	uint8_t x607 = 35U;
	uint32_t x608 = UINT32_MAX;

	t42 = ((x605%x606)>>(x607%x608));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x661 = 495256258LL;
	int64_t x663 = INT64_MIN;
	int16_t x664 = INT16_MIN;

	t43 = ((x661%x662)>>(x663%x664));

	if (t43 != 495256258LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x673 = 1U;
	int8_t x674 = -33;
	uint8_t x675 = UINT8_MAX;
	static uint8_t x676 = UINT8_MAX;
	static volatile int32_t t44 = -33762971;

	t44 = ((x673%x674)>>(x675%x676));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x686 = 14U;
	int32_t x687 = INT32_MIN;
	volatile int16_t x688 = INT16_MIN;

	t45 = ((x685%x686)>>(x687%x688));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x693 = INT16_MAX;
	static int16_t x695 = -9386;
	int16_t x696 = -1;
	volatile int64_t t46 = -10645056360919LL;

	t46 = ((x693%x694)>>(x695%x696));

	if (t46 != 32767LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x698 = 9;
	static uint16_t x700 = 125U;
	int32_t t47 = -41;

	t47 = ((x697%x698)>>(x699%x700));

	if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x725 = INT16_MIN;
	static int64_t x726 = -1LL;
	int64_t x727 = 24658LL;
	int64_t x728 = -1LL;
	int64_t t48 = -20LL;

	t48 = ((x725%x726)>>(x727%x728));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x733 = 117U;
	volatile int16_t x734 = -413;
	static int16_t x735 = 820;
	int8_t x736 = -1;

	t49 = ((x733%x734)>>(x735%x736));

	if (t49 != 117) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x741 = 108U;
	static uint8_t x742 = 85U;
	int8_t x743 = 0;
	int32_t t50 = 349938610;

	t50 = ((x741%x742)>>(x743%x744));

	if (t50 != 23) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x773 = 305;

	t51 = ((x773%x774)>>(x775%x776));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x797 = UINT16_MAX;
	static int8_t x798 = 50;
	volatile int8_t x800 = INT8_MIN;
	int32_t t52 = 1238;

	t52 = ((x797%x798)>>(x799%x800));

	if (t52 != 35) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x813 = INT32_MIN;
	volatile uint64_t x814 = 16688LLU;
	volatile uint16_t x815 = 0U;
	int32_t x816 = -160475;

	t53 = ((x813%x814)>>(x815%x816));

	if (t53 != 112LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x837 = INT32_MIN;
	static volatile int16_t x838 = INT16_MIN;
	static int8_t x839 = INT8_MIN;
	volatile int32_t t54 = 364377910;

	t54 = ((x837%x838)>>(x839%x840));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x865 = INT8_MAX;
	int8_t x866 = INT8_MAX;
	static uint64_t x867 = UINT64_MAX;
	int8_t x868 = 6;
	volatile int32_t t55 = 95906787;

	t55 = ((x865%x866)>>(x867%x868));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x870 = 63954583704LLU;
	int16_t x871 = -1;
	static uint64_t x872 = UINT64_MAX;
	uint64_t t56 = 42140601071504LLU;

	t56 = ((x869%x870)>>(x871%x872));

	if (t56 != 6840228391LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x889 = 251190620556LLU;
	uint16_t x890 = 4697U;
	volatile uint64_t t57 = 6389632926324383LLU;

	t57 = ((x889%x890)>>(x891%x892));

	if (t57 != 1800LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x929 = 2786344U;
	int64_t x930 = -1LL;
	int64_t x931 = -13725LL;
	uint8_t x932 = 1U;
	int64_t t58 = -60780LL;

	t58 = ((x929%x930)>>(x931%x932));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x945 = 9996360U;
	static int32_t x946 = INT32_MIN;
	uint64_t x947 = 34815240400923LLU;
	uint8_t x948 = 3U;
	static volatile uint32_t t59 = 79U;

	t59 = ((x945%x946)>>(x947%x948));

	if (t59 != 9996360U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x958 = 625U;
	int8_t x960 = -1;

	t60 = ((x957%x958)>>(x959%x960));

	if (t60 != 420U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x969 = UINT64_MAX;
	int32_t x970 = 239484;
	int64_t x971 = INT64_MAX;
	static int32_t x972 = -1;
	static uint64_t t61 = 158585889LLU;

	t61 = ((x969%x970)>>(x971%x972));

	if (t61 != 18159LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1005 = INT32_MAX;
	uint64_t x1006 = 48208820LLU;
	uint16_t x1007 = 0U;
	static volatile uint64_t t62 = 10186331493668904LLU;

	t62 = ((x1005%x1006)>>(x1007%x1008));

	if (t62 != 26295567LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x1023 = INT16_MIN;
	static int16_t x1024 = INT16_MIN;
	int32_t t63 = -1664142;

	t63 = ((x1021%x1022)>>(x1023%x1024));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1049 = -215619;
	uint64_t x1050 = 14LLU;
	static int64_t x1051 = INT64_MIN;
	volatile int16_t x1052 = INT16_MIN;
	volatile uint64_t t64 = 452142625047132623LLU;

	t64 = ((x1049%x1050)>>(x1051%x1052));

	if (t64 != 11LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x1057 = 2U;
	volatile uint16_t x1058 = 43U;
	int8_t x1059 = 1;
	volatile uint8_t x1060 = UINT8_MAX;

	t65 = ((x1057%x1058)>>(x1059%x1060));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x1081 = 82U;
	static int32_t x1082 = 1;
	static int32_t x1083 = 49058854;
	int32_t t66 = 295039516;

	t66 = ((x1081%x1082)>>(x1083%x1084));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x1093 = -2;
	static uint64_t x1094 = 479LLU;
	volatile int8_t x1095 = INT8_MAX;
	static int16_t x1096 = -1;
	uint64_t t67 = 158127895866LLU;

	t67 = ((x1093%x1094)>>(x1095%x1096));

	if (t67 != 401LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x1109 = 2752833820LL;
	uint8_t x1110 = 10U;
	uint32_t x1111 = 364760794U;
	volatile int64_t x1112 = -1LL;
	volatile int64_t t68 = 38LL;

	t68 = ((x1109%x1110)>>(x1111%x1112));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x1118 = -95;
	volatile int32_t x1119 = 0;
	volatile uint8_t x1120 = 85U;
	uint64_t t69 = 46993985625LLU;

	t69 = ((x1117%x1118)>>(x1119%x1120));

	if (t69 != 58577566LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x1173 = 6345U;
	uint16_t x1174 = UINT16_MAX;
	uint16_t x1175 = UINT16_MAX;
	volatile int8_t x1176 = INT8_MAX;
	volatile int32_t t70 = 19;

	t70 = ((x1173%x1174)>>(x1175%x1176));

	if (t70 != 793) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x1177 = 4U;
	static int32_t x1179 = INT32_MIN;
	static int32_t x1180 = INT32_MIN;
	static int64_t t71 = -469088730939324247LL;

	t71 = ((x1177%x1178)>>(x1179%x1180));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x1189 = 488U;
	int32_t x1190 = INT32_MIN;

	t72 = ((x1189%x1190)>>(x1191%x1192));

	if (t72 != 488) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x1209 = 226385U;
	static uint8_t x1210 = 20U;
	int64_t x1211 = INT64_MAX;
	static volatile uint32_t t73 = 278430U;

	t73 = ((x1209%x1210)>>(x1211%x1212));

	if (t73 != 5U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x1217 = 5663438U;
	int64_t x1218 = INT64_MAX;
	int32_t x1219 = -1;
	volatile int64_t t74 = 3929299210467707LL;

	t74 = ((x1217%x1218)>>(x1219%x1220));

	if (t74 != 5663438LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x1243 = 16U;
	static int32_t x1244 = 905;
	volatile int32_t t75 = -74;

	t75 = ((x1241%x1242)>>(x1243%x1244));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x1269 = INT16_MIN;
	volatile int32_t x1271 = -63926808;
	static int32_t t76 = 79277427;

	t76 = ((x1269%x1270)>>(x1271%x1272));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x1273 = INT32_MAX;
	int64_t x1274 = INT64_MIN;
	int16_t x1275 = 0;
	int16_t x1276 = INT16_MIN;
	static int64_t t77 = 9637494081520778LL;

	t77 = ((x1273%x1274)>>(x1275%x1276));

	if (t77 != 2147483647LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x1309 = 1673273830U;
	static int16_t x1311 = INT16_MIN;
	int8_t x1312 = INT8_MIN;
	volatile uint32_t t78 = 196U;

	t78 = ((x1309%x1310)>>(x1311%x1312));

	if (t78 != 109320118U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x1325 = INT16_MAX;
	static uint8_t x1326 = UINT8_MAX;
	int8_t x1327 = 0;
	static volatile int32_t x1328 = -1;
	volatile int32_t t79 = 12787936;

	t79 = ((x1325%x1326)>>(x1327%x1328));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x1333 = INT16_MIN;
	uint16_t x1335 = 0U;
	volatile uint16_t x1336 = UINT16_MAX;
	uint32_t t80 = 1475U;

	t80 = ((x1333%x1334)>>(x1335%x1336));

	if (t80 != 4294934528U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x1337 = 13U;
	int64_t x1338 = 2042LL;
	int8_t x1340 = -1;
	int64_t t81 = -4524LL;

	t81 = ((x1337%x1338)>>(x1339%x1340));

	if (t81 != 13LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x1349 = -774010958730632631LL;
	volatile uint64_t x1350 = 967668079719050323LLU;
	uint16_t x1352 = 40U;
	volatile uint64_t t82 = 4870954550201147LLU;

	t82 = ((x1349%x1350)>>(x1351%x1352));

	if (t82 != 127353840018006585LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x1357 = INT32_MIN;
	int32_t x1358 = INT32_MIN;
	int32_t x1360 = -1;
	volatile int32_t t83 = -177720776;

	t83 = ((x1357%x1358)>>(x1359%x1360));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x1383 = -6501;
	int16_t x1384 = -1;
	static volatile uint64_t t84 = 292353877640961LLU;

	t84 = ((x1381%x1382)>>(x1383%x1384));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1394 = 41026442U;
	static volatile int16_t x1396 = -1;

	t85 = ((x1393%x1394)>>(x1395%x1396));

	if (t85 != 255U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x1402 = -6;
	int16_t x1403 = INT16_MIN;
	volatile int64_t x1404 = -1LL;
	uint32_t t86 = 3550U;

	t86 = ((x1401%x1402)>>(x1403%x1404));

	if (t86 != 217U) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x1429 = INT32_MAX;
	uint16_t x1431 = UINT16_MAX;
	uint8_t x1432 = 15U;
	static volatile int32_t t87 = 14789;

	t87 = ((x1429%x1430)>>(x1431%x1432));

	if (t87 != 1306225) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x1481 = 305;
	int64_t x1482 = -19364LL;
	int8_t x1483 = INT8_MIN;
	static int32_t x1484 = -1;
	static volatile int64_t t88 = 9259211LL;

	t88 = ((x1481%x1482)>>(x1483%x1484));

	if (t88 != 305LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x1497 = INT16_MIN;
	uint8_t x1499 = 2U;
	static int16_t x1500 = -17;
	uint64_t t89 = 61056LLU;

	t89 = ((x1497%x1498)>>(x1499%x1500));

	if (t89 != 43428014422298LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x1509 = 22493;
	int16_t x1510 = INT16_MIN;
	volatile int64_t x1511 = INT64_MIN;
	static int16_t x1512 = INT16_MIN;
	int32_t t90 = -101;

	t90 = ((x1509%x1510)>>(x1511%x1512));

	if (t90 != 22493) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x1521 = INT64_MIN;
	static uint64_t x1522 = 196474920323LLU;
	volatile int64_t x1523 = INT64_MIN;
	volatile int8_t x1524 = -1;
	volatile uint64_t t91 = 90047825LLU;

	t91 = ((x1521%x1522)>>(x1523%x1524));

	if (t91 != 132508456275LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x1534 = 14435902LLU;
	int64_t x1535 = INT64_MIN;
	int16_t x1536 = INT16_MIN;
	uint64_t t92 = 5528791592LLU;

	t92 = ((x1533%x1534)>>(x1535%x1536));

	if (t92 != 13843293LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x1565 = 0U;
	int16_t x1566 = INT16_MIN;
	static volatile int8_t x1567 = INT8_MAX;
	static int8_t x1568 = INT8_MAX;
	int32_t t93 = -75875;

	t93 = ((x1565%x1566)>>(x1567%x1568));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x1598 = INT64_MAX;
	uint8_t x1599 = 15U;
	static int32_t x1600 = -1;
	volatile int64_t t94 = 170407102084135588LL;

	t94 = ((x1597%x1598)>>(x1599%x1600));

	if (t94 != 2147483647LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x1603 = INT64_MIN;
	volatile uint64_t t95 = 3859586338037124329LLU;

	t95 = ((x1601%x1602)>>(x1603%x1604));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1613 = INT8_MAX;
	int32_t x1614 = 230480624;
	static uint8_t x1615 = 4U;
	int8_t x1616 = INT8_MAX;
	static volatile int32_t t96 = 5011130;

	t96 = ((x1613%x1614)>>(x1615%x1616));

	if (t96 != 7) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x1617 = 0;
	static uint32_t x1619 = 1U;
	volatile int8_t x1620 = INT8_MIN;
	static uint64_t t97 = 2719485355562LLU;

	t97 = ((x1617%x1618)>>(x1619%x1620));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x1641 = 8053013U;
	int64_t x1642 = INT64_MAX;
	uint32_t x1644 = 2490421U;
	static volatile int64_t t98 = 1997983489100463965LL;

	t98 = ((x1641%x1642)>>(x1643%x1644));

	if (t98 != 4026506LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x1657 = 81U;
	static int32_t x1659 = INT32_MIN;
	uint64_t x1660 = 232LLU;
	volatile int32_t t99 = 93;

	t99 = ((x1657%x1658)>>(x1659%x1660));

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

