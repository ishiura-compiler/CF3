#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x80 = 8U;
volatile uint64_t t5 = 33LLU;
static volatile uint32_t t6 = 273931U;
int16_t x477 = INT16_MIN;
uint32_t x478 = 36929205U;
uint64_t t8 = 1015973449LLU;
uint16_t x527 = 3U;
uint32_t x551 = UINT32_MAX;
int32_t x766 = -180404525;
uint64_t x1050 = 14308085687LLU;
int8_t x1209 = INT8_MAX;
uint64_t t16 = 3368247628497LLU;
static uint8_t x1276 = 8U;
uint32_t t18 = 502757U;
uint16_t x1395 = 241U;
uint8_t x1520 = 2U;
static uint64_t x1609 = UINT64_MAX;
uint64_t t23 = 199756605433LLU;
volatile uint64_t t26 = 40604604LLU;
int64_t x1693 = INT64_MIN;
uint64_t x1695 = 394LLU;
uint8_t x1696 = 7U;
static int64_t x1777 = INT64_MAX;
int16_t x1779 = -1;
uint32_t x1911 = 2U;
int32_t x1966 = -1;
uint32_t x2005 = UINT32_MAX;
int32_t x2007 = -4;
static int8_t x2008 = 2;
uint64_t t32 = 122910837486241389LLU;
uint8_t x2393 = 3U;
int32_t x2395 = INT32_MIN;
uint16_t x2396 = 6U;
static uint64_t t36 = 934321909660861604LLU;
volatile int64_t t37 = 11LL;
volatile int16_t x2483 = 113;
uint64_t t38 = 21429397LLU;
uint64_t x2487 = 8393669296LLU;
uint64_t t39 = 1046013158LLU;
uint16_t x2645 = UINT16_MAX;
int8_t x2879 = -1;
int64_t t42 = -84819410477LL;
static uint64_t x2918 = UINT64_MAX;
uint8_t x2920 = 0U;
uint64_t x3095 = UINT64_MAX;
uint64_t x3713 = 19935LLU;
uint64_t t55 = 4LLU;
int8_t x3893 = INT8_MAX;
uint8_t x3896 = 0U;
static int64_t t56 = 1LL;
uint64_t x3951 = UINT64_MAX;
static volatile uint64_t t57 = 4039212605LLU;
volatile uint16_t x4145 = 1246U;
int8_t x4146 = 0;
int16_t x4147 = INT16_MIN;
static volatile int32_t x4165 = INT32_MIN;
int64_t x4177 = 21209505764282LL;
int8_t x4185 = INT8_MIN;
uint64_t x4187 = UINT64_MAX;
uint64_t x4317 = 94198LLU;
int32_t x4319 = INT32_MIN;
uint8_t x4378 = UINT8_MAX;
volatile uint8_t x4404 = 3U;
static volatile int8_t x4440 = 5;
int32_t x4473 = INT32_MIN;
volatile uint32_t t68 = 15U;
static uint64_t x4629 = 0LLU;
volatile uint32_t x4630 = 85074297U;
uint32_t x4697 = 4393U;
static uint8_t x4698 = 2U;
int64_t x4717 = INT64_MIN;
static int64_t x4718 = INT64_MIN;
int16_t x4846 = INT16_MIN;
int16_t x4849 = -1;
volatile uint64_t t76 = 23233519245LLU;
static uint64_t x4934 = 1249297LLU;
static int32_t x4945 = INT32_MAX;
int16_t x4948 = 0;
static volatile uint8_t x5130 = UINT8_MAX;
uint16_t x5132 = 16U;
int64_t x5239 = INT64_MIN;
uint64_t x5301 = 163596653LLU;
uint16_t x5348 = 27U;
uint16_t x5419 = 6326U;
static int32_t x5431 = -45958;
int32_t t87 = 0;
static volatile int8_t x5505 = INT8_MIN;
int32_t x5611 = -1;
static uint32_t t91 = 1480681U;
volatile uint32_t t93 = 27495U;
volatile uint8_t x5885 = 15U;
uint32_t t95 = 3U;
int16_t x6062 = -7031;
int8_t x6241 = INT8_MAX;
int32_t t99 = -8876231;


void f0(void) {
	uint64_t x25 = 59839633LLU;
	uint8_t x26 = UINT8_MAX;
	int64_t x27 = -1LL;
	static uint8_t x28 = 0U;
	volatile uint64_t t0 = 1935365LLU;

	t0 = ((x25|(x26-x27))<<x28);

	if (t0 != 59839889LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x57 = 11U;
	int16_t x58 = 11329;
	static volatile uint32_t x59 = 1863426192U;
	uint8_t x60 = 2U;
	static volatile uint32_t t1 = 96150U;

	t1 = ((x57|(x58-x59))<<x60);

	if (t1 != 1136275180U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x77 = 4495264344123628LLU;
	uint32_t x78 = 1069966197U;
	uint32_t x79 = UINT32_MAX;
	uint64_t t2 = 447091665LLU;

	t2 = ((x77|(x78-x79))<<x80);

	if (t2 != 1150787901880794624LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x89 = UINT8_MAX;
	int32_t x90 = 2;
	int16_t x91 = -1;
	volatile uint8_t x92 = 12U;
	int32_t t3 = -5713;

	t3 = ((x89|(x90-x91))<<x92);

	if (t3 != 1044480) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x181 = 36057556LLU;
	int16_t x182 = -1;
	static volatile int16_t x183 = INT16_MIN;
	static uint8_t x184 = 38U;
	uint64_t t4 = 86LLU;

	t4 = ((x181|(x182-x183))<<x184);

	if (t4 != 9916926104591925248LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x209 = INT16_MIN;
	uint8_t x210 = 13U;
	uint64_t x211 = 1738697LLU;
	uint8_t x212 = 15U;

	t5 = ((x209|(x210-x211))<<x212);

	if (t5 != 18446744073644670976LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x357 = 5U;
	int16_t x358 = INT16_MIN;
	uint32_t x359 = UINT32_MAX;
	uint8_t x360 = 5U;

	t6 = ((x357|(x358-x359))<<x360);

	if (t6 != 4293918880U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x413 = 95584U;
	int32_t x414 = INT32_MAX;
	int32_t x415 = INT32_MAX;
	uint16_t x416 = 3U;
	volatile uint32_t t7 = 1217948938U;

	t7 = ((x413|(x414-x415))<<x416);

	if (t7 != 764672U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x479 = UINT64_MAX;
	uint8_t x480 = 2U;

	t8 = ((x477|(x478-x479))<<x480);

	if (t8 != 18446744073709550296LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x525 = UINT32_MAX;
	uint8_t x526 = 28U;
	volatile uint8_t x528 = 5U;
	volatile uint32_t t9 = 1296380U;

	t9 = ((x525|(x526-x527))<<x528);

	if (t9 != 4294967264U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x549 = 128187U;
	uint32_t x550 = 0U;
	uint8_t x552 = 15U;
	uint32_t t10 = 62614U;

	t10 = ((x549|(x550-x551))<<x552);

	if (t10 != 4200431616U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x653 = INT8_MIN;
	volatile int32_t x654 = 2976011;
	volatile uint32_t x655 = UINT32_MAX;
	uint8_t x656 = 6U;
	static uint32_t t11 = 2177962U;

	t11 = ((x653|(x654-x655))<<x656);

	if (t11 != 4294959872U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x765 = 14248LL;
	volatile uint64_t x767 = 1440486772611LLU;
	uint32_t x768 = 23U;
	uint64_t t12 = 0LLU;

	t12 = ((x765|(x766-x767))<<x768);

	if (t12 != 6361551902018109440LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x905 = 441U;
	int8_t x906 = INT8_MIN;
	uint64_t x907 = 31232LLU;
	uint32_t x908 = 30U;
	volatile uint64_t t13 = 1360381011604LLU;

	t13 = ((x905|(x906-x907))<<x908);

	if (t13 != 18446710462369234944LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1049 = UINT16_MAX;
	int8_t x1051 = INT8_MAX;
	uint16_t x1052 = 5U;
	volatile uint64_t t14 = 3426417467597081250LLU;

	t14 = ((x1049|(x1050-x1051))<<x1052);

	if (t14 != 457860710368LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1165 = 2038U;
	int64_t x1166 = INT64_MIN;
	int64_t x1167 = INT64_MIN;
	static uint32_t x1168 = 16U;
	volatile int64_t t15 = 90LL;

	t15 = ((x1165|(x1166-x1167))<<x1168);

	if (t15 != 133562368LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x1210 = UINT64_MAX;
	int16_t x1211 = 15;
	static uint64_t x1212 = 1LLU;

	t16 = ((x1209|(x1210-x1211))<<x1212);

	if (t16 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1233 = 1672;
	int8_t x1234 = -1;
	uint64_t x1235 = 597402477LLU;
	uint8_t x1236 = 1U;
	volatile uint64_t t17 = 10221LLU;

	t17 = ((x1233|(x1234-x1235))<<x1236);

	if (t17 != 18446744072514747700LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1273 = INT16_MIN;
	uint32_t x1274 = UINT32_MAX;
	int16_t x1275 = INT16_MAX;

	t18 = ((x1273|(x1274-x1275))<<x1276);

	if (t18 != 4286578688U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1333 = 0U;
	static int8_t x1334 = INT8_MIN;
	static int16_t x1335 = -1856;
	volatile uint8_t x1336 = 0U;
	int32_t t19 = -8;

	t19 = ((x1333|(x1334-x1335))<<x1336);

	if (t19 != 1728) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x1393 = 2194LLU;
	volatile int32_t x1394 = 7;
	static uint16_t x1396 = 38U;
	volatile uint64_t t20 = 23269790351358LLU;

	t20 = ((x1393|(x1394-x1395))<<x1396);

	if (t20 != 18446714936651415552LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x1417 = UINT16_MAX;
	static int64_t x1418 = 7464260LL;
	static int8_t x1419 = INT8_MIN;
	int16_t x1420 = 26;
	int64_t t21 = 1793LL;

	t21 = ((x1417|(x1418-x1419))<<x1420);

	if (t21 != 501377235156992LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1517 = 0LL;
	static int32_t x1518 = INT32_MAX;
	static int8_t x1519 = 34;
	volatile int64_t t22 = 0LL;

	t22 = ((x1517|(x1518-x1519))<<x1520);

	if (t22 != 8589934452LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1610 = 268898760444923LL;
	static uint64_t x1611 = UINT64_MAX;
	volatile uint16_t x1612 = 30U;

	t23 = ((x1609|(x1610-x1611))<<x1612);

	if (t23 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x1633 = 3U;
	uint16_t x1634 = 6003U;
	static int64_t x1635 = -2306LL;
	static volatile uint8_t x1636 = 4U;
	volatile int64_t t24 = -846472170LL;

	t24 = ((x1633|(x1634-x1635))<<x1636);

	if (t24 != 132976LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1641 = INT16_MIN;
	uint64_t x1642 = UINT64_MAX;
	int16_t x1643 = -3;
	volatile uint16_t x1644 = 1U;
	uint64_t t25 = 7LLU;

	t25 = ((x1641|(x1642-x1643))<<x1644);

	if (t25 != 18446744073709486084LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1657 = -685682206373915294LL;
	uint64_t x1658 = UINT64_MAX;
	uint16_t x1659 = UINT16_MAX;
	volatile int8_t x1660 = 1;

	t26 = ((x1657|(x1658-x1659))<<x1660);

	if (t26 != 18446744073709529796LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x1694 = UINT64_MAX;
	volatile uint64_t t27 = 89050801450LLU;

	t27 = ((x1693|(x1694-x1695))<<x1696);

	if (t27 != 18446744073709501056LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1778 = 1U;
	volatile uint16_t x1780 = 0U;
	static int64_t t28 = INT64_MAX;

	t28 = ((x1777|(x1778-x1779))<<x1780);

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1853 = 6906U;
	volatile uint16_t x1854 = UINT16_MAX;
	volatile int8_t x1855 = INT8_MAX;
	uint16_t x1856 = 8U;
	volatile int32_t t29 = 1;

	t29 = ((x1853|(x1854-x1855))<<x1856);

	if (t29 != 16775680) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1909 = -2631;
	static volatile int8_t x1910 = 4;
	uint32_t x1912 = 2U;
	volatile uint32_t t30 = 278U;

	t30 = ((x1909|(x1910-x1911))<<x1912);

	if (t30 != 4294956780U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1965 = 18032U;
	uint32_t x1967 = UINT32_MAX;
	volatile uint16_t x1968 = 2U;
	uint32_t t31 = 1103689U;

	t31 = ((x1965|(x1966-x1967))<<x1968);

	if (t31 != 72128U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2006 = 673954732983834LLU;

	t32 = ((x2005|(x2006-x2007))<<x2008);

	if (t32 != 2695830712614908LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2201 = 19831;
	static int8_t x2202 = INT8_MAX;
	volatile uint64_t x2203 = UINT64_MAX;
	uint8_t x2204 = 2U;
	volatile uint64_t t33 = 536231481590211LLU;

	t33 = ((x2201|(x2202-x2203))<<x2204);

	if (t33 != 79836LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2233 = INT32_MAX;
	int8_t x2234 = INT8_MAX;
	static uint64_t x2235 = UINT64_MAX;
	uint8_t x2236 = 10U;
	uint64_t t34 = 2LLU;

	t34 = ((x2233|(x2234-x2235))<<x2236);

	if (t34 != 2199023254528LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2301 = INT32_MIN;
	uint32_t x2302 = UINT32_MAX;
	int8_t x2303 = 3;
	uint16_t x2304 = 19U;
	uint32_t t35 = 30U;

	t35 = ((x2301|(x2302-x2303))<<x2304);

	if (t35 != 4292870144U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x2394 = 17698374676796216LLU;

	t36 = ((x2393|(x2394-x2395))<<x2396);

	if (t36 != 1132696116753911488LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2413 = 13274493LL;
	uint8_t x2414 = 0U;
	uint8_t x2415 = 0U;
	uint32_t x2416 = 2U;

	t37 = ((x2413|(x2414-x2415))<<x2416);

	if (t37 != 53097972LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2481 = 8U;
	uint64_t x2482 = 4263942516227603868LLU;
	volatile int32_t x2484 = 3;

	t38 = ((x2481|(x2482-x2483))<<x2484);

	if (t38 != 15664796056111278424LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2485 = INT64_MIN;
	int8_t x2486 = 0;
	volatile int32_t x2488 = 0;

	t39 = ((x2485|(x2486-x2487))<<x2488);

	if (t39 != 18446744065315882320LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2646 = 83U;
	int32_t x2647 = INT32_MIN;
	volatile uint16_t x2648 = 0U;
	volatile uint32_t t40 = 21881U;

	t40 = ((x2645|(x2646-x2647))<<x2648);

	if (t40 != 2147549183U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2877 = 1529U;
	static uint64_t x2878 = 3LLU;
	uint16_t x2880 = 11U;
	uint64_t t41 = 682606968254LLU;

	t41 = ((x2877|(x2878-x2879))<<x2880);

	if (t41 != 3139584LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x2885 = INT8_MAX;
	volatile int8_t x2886 = INT8_MAX;
	int64_t x2887 = -5057686LL;
	int8_t x2888 = 7;

	t42 = ((x2885|(x2886-x2887))<<x2888);

	if (t42 != 647413632LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x2893 = 333494LL;
	int16_t x2894 = -1;
	static int32_t x2895 = -1;
	static uint32_t x2896 = 4U;
	volatile int64_t t43 = -13583433LL;

	t43 = ((x2893|(x2894-x2895))<<x2896);

	if (t43 != 5335904LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x2917 = 11;
	uint32_t x2919 = UINT32_MAX;
	volatile uint64_t t44 = 177222LLU;

	t44 = ((x2917|(x2918-x2919))<<x2920);

	if (t44 != 18446744069414584331LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x2965 = -1;
	volatile int16_t x2966 = INT16_MIN;
	volatile uint64_t x2967 = 19LLU;
	int64_t x2968 = 0LL;
	uint64_t t45 = UINT64_MAX;

	t45 = ((x2965|(x2966-x2967))<<x2968);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x3093 = 97U;
	int16_t x3094 = INT16_MIN;
	int32_t x3096 = 1;
	volatile uint64_t t46 = 1LLU;

	t46 = ((x3093|(x3094-x3095))<<x3096);

	if (t46 != 18446744073709486274LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x3105 = UINT8_MAX;
	static uint64_t x3106 = 4282169411017094LLU;
	volatile uint16_t x3107 = 3568U;
	uint32_t x3108 = 4U;
	uint64_t t47 = 67472224388517LLU;

	t47 = ((x3105|(x3106-x3107))<<x3108);

	if (t47 != 68514710576218096LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3165 = INT32_MIN;
	int32_t x3166 = INT32_MIN;
	uint64_t x3167 = 1LLU;
	uint64_t x3168 = 39LLU;
	uint64_t t48 = 9219075299168LLU;

	t48 = ((x3165|(x3166-x3167))<<x3168);

	if (t48 != 18446743523953737728LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3381 = UINT64_MAX;
	static int32_t x3382 = INT32_MIN;
	static int16_t x3383 = INT16_MIN;
	volatile uint32_t x3384 = 51U;
	uint64_t t49 = 63958551478752680LLU;

	t49 = ((x3381|(x3382-x3383))<<x3384);

	if (t49 != 18444492273895866368LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3485 = 16LLU;
	int8_t x3486 = INT8_MAX;
	int32_t x3487 = -385;
	uint8_t x3488 = 39U;
	uint64_t t50 = 137338387210899066LLU;

	t50 = ((x3485|(x3486-x3487))<<x3488);

	if (t50 != 290271069732864LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3517 = INT32_MIN;
	static uint64_t x3518 = UINT64_MAX;
	uint64_t x3519 = 4LLU;
	int16_t x3520 = 57;
	uint64_t t51 = 1287475LLU;

	t51 = ((x3517|(x3518-x3519))<<x3520);

	if (t51 != 17726168133330272256LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3569 = 3U;
	static uint32_t x3570 = 2U;
	int8_t x3571 = -18;
	volatile uint8_t x3572 = 4U;
	static volatile uint32_t t52 = 411110498U;

	t52 = ((x3569|(x3570-x3571))<<x3572);

	if (t52 != 368U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3714 = INT32_MIN;
	int64_t x3715 = INT64_MIN;
	uint16_t x3716 = 20U;
	volatile uint64_t t53 = 1379247709LLU;

	t53 = ((x3713|(x3714-x3715))<<x3716);

	if (t53 != 18444492294799228928LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3853 = 85;
	uint32_t x3854 = 291695U;
	int8_t x3855 = INT8_MIN;
	volatile int32_t x3856 = 1;
	uint32_t t54 = 54U;

	t54 = ((x3853|(x3854-x3855))<<x3856);

	if (t54 != 583678U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3889 = 77399004221LLU;
	uint16_t x3890 = 2928U;
	static uint64_t x3891 = 63300262870LLU;
	volatile int8_t x3892 = 0;

	t55 = ((x3889|(x3890-x3891))<<x3892);

	if (t55 != 18446744019071909823LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3894 = -1529273LL;
	static volatile int32_t x3895 = INT32_MIN;

	t56 = ((x3893|(x3894-x3895))<<x3896);

	if (t56 != 2145954431LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3949 = 424897LLU;
	int64_t x3950 = INT64_MIN;
	uint32_t x3952 = 21U;

	t57 = ((x3949|(x3950-x3951))<<x3952);

	if (t57 != 891073593344LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x4148 = 0U;
	volatile int32_t t58 = -1758522;

	t58 = ((x4145|(x4146-x4147))<<x4148);

	if (t58 != 34014) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x4166 = INT8_MIN;
	uint64_t x4167 = 22150957887LLU;
	uint16_t x4168 = 26U;
	volatile uint64_t t59 = 482992LLU;

	t59 = ((x4165|(x4166-x4167))<<x4168);

	if (t59 != 18401370325569765376LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4178 = 21437615U;
	static int16_t x4179 = -1;
	uint8_t x4180 = 0U;
	volatile int64_t t60 = -1LL;

	t60 = ((x4177|(x4178-x4179))<<x4180);

	if (t60 != 21209510027194LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x4186 = INT64_MIN;
	static volatile uint32_t x4188 = 1U;
	uint64_t t61 = 312273LLU;

	t61 = ((x4185|(x4186-x4187))<<x4188);

	if (t61 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x4189 = INT8_MAX;
	volatile uint64_t x4190 = UINT64_MAX;
	int8_t x4191 = INT8_MIN;
	uint16_t x4192 = 12U;
	volatile uint64_t t62 = 145255322070710LLU;

	t62 = ((x4189|(x4190-x4191))<<x4192);

	if (t62 != 520192LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4318 = INT32_MIN;
	uint8_t x4320 = 9U;
	volatile uint64_t t63 = 241787052485244LLU;

	t63 = ((x4317|(x4318-x4319))<<x4320);

	if (t63 != 48229376LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4377 = INT16_MAX;
	uint64_t x4379 = UINT64_MAX;
	int8_t x4380 = 4;
	uint64_t t64 = 430LLU;

	t64 = ((x4377|(x4378-x4379))<<x4380);

	if (t64 != 524272LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x4401 = 99731;
	uint64_t x4402 = 256LLU;
	uint64_t x4403 = 3912LLU;
	volatile uint64_t t65 = 3689474LLU;

	t65 = ((x4401|(x4402-x4403))<<x4404);

	if (t65 != 18446744073709530584LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x4437 = 1417U;
	uint64_t x4438 = UINT64_MAX;
	static int64_t x4439 = INT64_MAX;
	volatile uint64_t t66 = 6841047LLU;

	t66 = ((x4437|(x4438-x4439))<<x4440);

	if (t66 != 45344LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x4469 = 1;
	volatile uint16_t x4470 = 155U;
	int32_t x4471 = -1;
	uint8_t x4472 = 0U;
	int32_t t67 = 330256682;

	t67 = ((x4469|(x4470-x4471))<<x4472);

	if (t67 != 157) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4474 = INT32_MIN;
	uint32_t x4475 = 283585U;
	uint16_t x4476 = 4U;

	t68 = ((x4473|(x4474-x4475))<<x4476);

	if (t68 != 4290429936U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x4553 = 1;
	volatile uint64_t x4554 = 2006986LLU;
	int32_t x4555 = -801154230;
	volatile int8_t x4556 = 31;
	uint64_t t69 = 8347672136724LLU;

	t69 = ((x4553|(x4554-x4555))<<x4556);

	if (t69 != 1724775580215279616LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x4631 = 1U;
	uint16_t x4632 = 1U;
	volatile uint64_t t70 = 1563865324377LLU;

	t70 = ((x4629|(x4630-x4631))<<x4632);

	if (t70 != 170148592LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4699 = 344LLU;
	int8_t x4700 = 2;
	volatile uint64_t t71 = 2225317768725861LLU;

	t71 = ((x4697|(x4698-x4699))<<x4700);

	if (t71 != 18446744073709551276LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x4719 = 288955595346503LLU;
	uint16_t x4720 = 4U;
	uint64_t t72 = 755778LLU;

	t72 = ((x4717|(x4718-x4719))<<x4720);

	if (t72 != 18442120784184007568LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4721 = INT8_MAX;
	static int16_t x4722 = 11;
	int64_t x4723 = -1LL;
	uint8_t x4724 = 2U;
	volatile int64_t t73 = -269LL;

	t73 = ((x4721|(x4722-x4723))<<x4724);

	if (t73 != 508LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4821 = 133577260223LLU;
	int16_t x4822 = -1;
	int32_t x4823 = INT32_MAX;
	volatile uint8_t x4824 = 17U;
	static volatile uint64_t t74 = 1802163195711902LLU;

	t74 = ((x4821|(x4822-x4823))<<x4824);

	if (t74 != 18446519388828729344LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x4845 = UINT32_MAX;
	static uint8_t x4847 = UINT8_MAX;
	int32_t x4848 = 1;
	uint32_t t75 = 882408761U;

	t75 = ((x4845|(x4846-x4847))<<x4848);

	if (t75 != 4294967294U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x4850 = INT32_MAX;
	uint64_t x4851 = 1058802LLU;
	uint8_t x4852 = 9U;

	t76 = ((x4849|(x4850-x4851))<<x4852);

	if (t76 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4885 = -1;
	uint64_t x4886 = 4LLU;
	volatile int64_t x4887 = INT64_MIN;
	volatile uint32_t x4888 = 13U;
	volatile uint64_t t77 = 36512LLU;

	t77 = ((x4885|(x4886-x4887))<<x4888);

	if (t77 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4933 = INT8_MAX;
	static int32_t x4935 = -554;
	int8_t x4936 = 34;
	uint64_t t78 = 66110LLU;

	t78 = ((x4933|(x4934-x4935))<<x4936);

	if (t78 != 21473444910596096LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x4946 = UINT16_MAX;
	int32_t x4947 = -10153261;
	volatile int32_t t79 = INT32_MAX;

	t79 = ((x4945|(x4946-x4947))<<x4948);

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5129 = UINT64_MAX;
	static uint8_t x5131 = UINT8_MAX;
	volatile uint64_t t80 = 2LLU;

	t80 = ((x5129|(x5130-x5131))<<x5132);

	if (t80 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x5169 = 19;
	int64_t x5170 = -1LL;
	uint64_t x5171 = UINT64_MAX;
	static int16_t x5172 = 15;
	volatile uint64_t t81 = 34272357938854637LLU;

	t81 = ((x5169|(x5170-x5171))<<x5172);

	if (t81 != 622592LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x5237 = 14U;
	int64_t x5238 = INT64_MIN;
	volatile uint8_t x5240 = 1U;
	volatile int64_t t82 = 1138264648338263176LL;

	t82 = ((x5237|(x5238-x5239))<<x5240);

	if (t82 != 28LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5302 = 1U;
	uint32_t x5303 = UINT32_MAX;
	int8_t x5304 = 63;
	volatile uint64_t t83 = 63029218864LLU;

	t83 = ((x5301|(x5302-x5303))<<x5304);

	if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5345 = INT16_MIN;
	uint64_t x5346 = 3529000LLU;
	uint32_t x5347 = UINT32_MAX;
	uint64_t t84 = 1140750458686217LLU;

	t84 = ((x5345|(x5346-x5347))<<x5348);

	if (t84 != 18446742739182682112LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5397 = INT8_MIN;
	uint32_t x5398 = UINT32_MAX;
	volatile int16_t x5399 = INT16_MAX;
	int16_t x5400 = 4;
	uint32_t t85 = 1U;

	t85 = ((x5397|(x5398-x5399))<<x5400);

	if (t85 != 4294965248U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x5417 = -6025045LL;
	uint64_t x5418 = UINT64_MAX;
	volatile int8_t x5420 = 1;
	uint64_t t86 = 1626880331469890305LLU;

	t86 = ((x5417|(x5418-x5419))<<x5420);

	if (t86 != 18446744073709547478LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5429 = 7U;
	volatile uint16_t x5430 = 2908U;
	static int16_t x5432 = 0;

	t87 = ((x5429|(x5430-x5431))<<x5432);

	if (t87 != 48871) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5485 = 9012U;
	int8_t x5486 = INT8_MAX;
	int16_t x5487 = INT16_MIN;
	uint16_t x5488 = 1U;
	volatile uint32_t t88 = 663582695U;

	t88 = ((x5485|(x5486-x5487))<<x5488);

	if (t88 != 83710U) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x5506 = INT32_MIN;
	uint32_t x5507 = 6702872U;
	int64_t x5508 = 0LL;
	static uint32_t t89 = 22893020U;

	t89 = ((x5505|(x5506-x5507))<<x5508);

	if (t89 != 4294967272U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x5537 = INT32_MAX;
	uint64_t x5538 = UINT64_MAX;
	int16_t x5539 = INT16_MAX;
	uint16_t x5540 = 17U;
	static uint64_t t90 = 2721953877082279925LLU;

	t90 = ((x5537|(x5538-x5539))<<x5540);

	if (t90 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5609 = UINT32_MAX;
	int32_t x5610 = INT32_MIN;
	volatile uint16_t x5612 = 11U;

	t91 = ((x5609|(x5610-x5611))<<x5612);

	if (t91 != 4294965248U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5785 = INT32_MIN;
	uint64_t x5786 = UINT64_MAX;
	int64_t x5787 = INT64_MIN;
	volatile uint8_t x5788 = 12U;
	uint64_t t92 = 1031645452719365387LLU;

	t92 = ((x5785|(x5786-x5787))<<x5788);

	if (t92 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x5829 = 502234592U;
	static int8_t x5830 = 6;
	int8_t x5831 = INT8_MIN;
	static int8_t x5832 = 28;

	t93 = ((x5829|(x5830-x5831))<<x5832);

	if (t93 != 1610612736U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x5886 = 217LLU;
	volatile int64_t x5887 = -243772201533719LL;
	static int16_t x5888 = 9;
	uint64_t t94 = 1LLU;

	t94 = ((x5885|(x5886-x5887))<<x5888);

	if (t94 != 124811367185382912LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x5961 = UINT16_MAX;
	uint8_t x5962 = 14U;
	volatile uint32_t x5963 = 318865U;
	int32_t x5964 = 1;

	t95 = ((x5961|(x5962-x5963))<<x5964);

	if (t95 != 4294443006U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x6009 = -1;
	volatile uint64_t x6010 = 3501450LLU;
	int32_t x6011 = INT32_MAX;
	uint16_t x6012 = 24U;
	volatile uint64_t t96 = 140437280074805455LLU;

	t96 = ((x6009|(x6010-x6011))<<x6012);

	if (t96 != 18446744073692774400LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x6061 = 1U;
	int16_t x6063 = -1;
	static volatile uint8_t x6064 = 0U;
	volatile uint32_t t97 = 2596U;

	t97 = ((x6061|(x6062-x6063))<<x6064);

	if (t97 != 4294960267U) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x6105 = -2;
	uint32_t x6106 = 1824897U;
	int16_t x6107 = INT16_MIN;
	static int8_t x6108 = 13;
	volatile uint32_t t98 = 63846746U;

	t98 = ((x6105|(x6106-x6107))<<x6108);

	if (t98 != 4294959104U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x6242 = 2U;
	int8_t x6243 = -26;
	uint32_t x6244 = 7U;

	t99 = ((x6241|(x6242-x6243))<<x6244);

	if (t99 != 16256) { NG(); } else { ; }
	
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

