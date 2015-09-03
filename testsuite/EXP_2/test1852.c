#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x129 = -1;
volatile int32_t t0 = 1926305;
uint32_t x165 = 54591269U;
uint64_t x474 = UINT64_MAX;
volatile uint32_t x615 = 1034U;
int32_t x661 = INT32_MAX;
static volatile uint32_t t12 = 477945168U;
int8_t x692 = 47;
volatile uint64_t t13 = 3819428046945771LLU;
volatile uint32_t t14 = 85U;
int16_t x766 = INT16_MIN;
int32_t x777 = INT32_MIN;
int16_t x780 = 2;
volatile uint64_t x826 = 33LLU;
int16_t x920 = 1;
int64_t x1099 = 9603055901734LL;
uint8_t x1109 = 59U;
volatile int16_t x1112 = 0;
volatile uint32_t x1118 = 568407U;
volatile int16_t x1350 = 14781;
uint32_t x1373 = 4004U;
uint64_t x1535 = 2974287634393LLU;
uint64_t t27 = 160654LLU;
volatile int8_t x1582 = 0;
uint8_t x1584 = 32U;
uint32_t x1597 = 57478U;
uint8_t x1600 = 2U;
uint64_t t32 = 33338504675LLU;
int64_t x1882 = -1LL;
uint32_t x1932 = 4U;
int8_t x1984 = 1;
uint64_t x1993 = 105965844LLU;
int64_t t38 = 1LL;
int8_t x2073 = INT8_MAX;
static volatile uint64_t x2322 = 16525389LLU;
uint64_t x2323 = 579690646368LLU;
uint64_t t41 = 0LLU;
static volatile uint8_t x2356 = 1U;
volatile int8_t x2367 = -1;
int64_t x2444 = 14LL;
uint64_t x2459 = 6211349461803509LLU;
static volatile int32_t x2460 = 1;
uint8_t x2498 = UINT8_MAX;
volatile uint8_t x2512 = 0U;
int32_t t47 = -14;
volatile uint16_t x2563 = UINT16_MAX;
volatile uint8_t x2604 = 5U;
volatile uint64_t t50 = 64198198695030337LLU;
volatile int32_t t54 = 5711754;
static volatile uint8_t x2864 = 1U;
int32_t x2870 = -1;
static uint16_t x2983 = 100U;
static volatile uint64_t t61 = 6654702399974LLU;
uint32_t x3101 = 518635524U;
volatile int64_t x3102 = INT64_MIN;
static uint64_t x3318 = UINT64_MAX;
static uint8_t x3320 = 2U;
uint16_t x3381 = 1054U;
static uint64_t x3463 = UINT64_MAX;
uint8_t x3464 = 5U;
static volatile int16_t x3482 = -1;
uint64_t t69 = 1299799831233266LLU;
int32_t x3489 = -1;
int16_t x3498 = 0;
int8_t x3499 = -7;
int8_t x3500 = 19;
static uint8_t x3548 = 7U;
uint16_t x3590 = 2252U;
uint16_t x3592 = 8U;
int32_t t73 = -264047739;
uint64_t x3605 = 197816076448067LLU;
uint64_t x3607 = 64758913LLU;
uint8_t x3764 = 1U;
static int32_t x3775 = INT32_MIN;
volatile int32_t x3778 = -1;
static volatile uint64_t x3779 = 85970LLU;
uint16_t x3780 = 1U;
int16_t x3801 = -1041;
int16_t x3803 = -1;
int32_t x3930 = 47483067;
volatile int16_t x3932 = 0;
uint16_t x3971 = UINT16_MAX;
volatile uint64_t t83 = 75749LLU;
volatile int32_t x4018 = 1;
int16_t x4020 = 15;
volatile uint64_t t84 = 12LLU;
volatile uint32_t x4025 = 1344675U;
static volatile int64_t x4027 = INT64_MIN;
static uint64_t t85 = 1063242969691LLU;
static uint64_t x4031 = 971278588LLU;
uint32_t x4042 = 0U;
int16_t x4105 = INT16_MIN;
uint64_t x4106 = 197558944076578LLU;
volatile uint32_t t90 = 1191U;
int32_t x4135 = 1213010;
static volatile int32_t x4372 = 1;
uint32_t x4437 = UINT32_MAX;
volatile uint16_t x4440 = 14U;
int8_t x4441 = -1;
uint32_t x4442 = 181329096U;
int8_t x4443 = INT8_MAX;
uint64_t x4450 = 2791LLU;
volatile int8_t x4451 = -1;
volatile uint64_t t95 = 1363746776357595LLU;
uint32_t x4534 = 70728U;
static uint16_t x4545 = 1877U;
uint32_t x4549 = 3781U;
static int64_t x4550 = INT64_MIN;
uint16_t x4552 = 1U;
int16_t x4567 = INT16_MAX;


void f0(void) {
	static int8_t x130 = -1;
	volatile int16_t x131 = INT16_MIN;
	uint8_t x132 = 3U;

	t0 = ((x129^(x130&x131))<<x132);

	if (t0 != 262136) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x141 = INT32_MAX;
	uint8_t x142 = 33U;
	volatile int64_t x143 = INT64_MAX;
	uint8_t x144 = 11U;
	int64_t t1 = 819890LL;

	t1 = ((x141^(x142&x143))<<x144);

	if (t1 != 4398046441472LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x166 = 0U;
	uint32_t x167 = UINT32_MAX;
	uint8_t x168 = 14U;
	uint32_t t2 = 260046U;

	t2 = ((x165^(x166&x167))<<x168);

	if (t2 != 1070153728U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x201 = 12;
	uint32_t x202 = UINT32_MAX;
	uint64_t x203 = UINT64_MAX;
	volatile uint64_t x204 = 4LLU;
	uint64_t t3 = 3459813906737339754LLU;

	t3 = ((x201^(x202&x203))<<x204);

	if (t3 != 68719476528LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x213 = UINT64_MAX;
	int64_t x214 = -7623624842753441LL;
	static int8_t x215 = -1;
	uint32_t x216 = 23U;
	static uint64_t t4 = 3403575773259297LLU;

	t4 = ((x213^(x214&x215))<<x216);

	if (t4 != 15185385442942910464LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x305 = INT32_MAX;
	static uint32_t x306 = UINT32_MAX;
	static int8_t x307 = -1;
	uint8_t x308 = 6U;
	volatile uint32_t t5 = 724166U;

	t5 = ((x305^(x306&x307))<<x308);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x373 = 5U;
	volatile uint32_t x374 = 6247U;
	int16_t x375 = INT16_MIN;
	static volatile uint8_t x376 = 0U;
	uint32_t t6 = 114U;

	t6 = ((x373^(x374&x375))<<x376);

	if (t6 != 5U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x409 = -1LL;
	int32_t x410 = -170;
	int64_t x411 = -1LL;
	uint8_t x412 = 0U;
	volatile int64_t t7 = -711099660LL;

	t7 = ((x409^(x410&x411))<<x412);

	if (t7 != 169LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x441 = 0U;
	uint64_t x442 = 61209LLU;
	int32_t x443 = -116342741;
	volatile int8_t x444 = 1;
	volatile uint64_t t8 = 2980LLU;

	t8 = ((x441^(x442&x443))<<x444);

	if (t8 != 98322LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x449 = -1;
	volatile int32_t x450 = INT32_MAX;
	static uint64_t x451 = 204592316LLU;
	uint16_t x452 = 10U;
	volatile uint64_t t9 = 871359902049792200LLU;

	t9 = ((x449^(x450&x451))<<x452);

	if (t9 != 18446743864207019008LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x473 = INT8_MIN;
	static int16_t x475 = INT16_MAX;
	uint16_t x476 = 1U;
	uint64_t t10 = 267643449LLU;

	t10 = ((x473^(x474&x475))<<x476);

	if (t10 != 18446744073709486334LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x613 = UINT32_MAX;
	volatile uint16_t x614 = 709U;
	uint8_t x616 = 0U;
	uint32_t t11 = UINT32_MAX;

	t11 = ((x613^(x614&x615))<<x616);

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x662 = UINT32_MAX;
	int8_t x663 = INT8_MIN;
	uint16_t x664 = 1U;

	t12 = ((x661^(x662&x663))<<x664);

	if (t12 != 254U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x689 = 52759064996832557LLU;
	int64_t x690 = INT64_MIN;
	static int8_t x691 = INT8_MAX;

	t13 = ((x689^(x690&x691))<<x692);

	if (t13 != 12868613722746126336LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x697 = INT16_MIN;
	uint32_t x698 = 10U;
	int32_t x699 = INT32_MAX;
	uint32_t x700 = 5U;

	t14 = ((x697^(x698&x699))<<x700);

	if (t14 != 4293919040U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x765 = UINT64_MAX;
	volatile uint16_t x767 = 394U;
	int8_t x768 = 2;
	uint64_t t15 = 5829LLU;

	t15 = ((x765^(x766&x767))<<x768);

	if (t15 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x778 = -1;
	uint32_t x779 = 2U;
	volatile uint32_t t16 = 1281300U;

	t16 = ((x777^(x778&x779))<<x780);

	if (t16 != 8U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x825 = UINT8_MAX;
	uint8_t x827 = UINT8_MAX;
	int8_t x828 = 6;
	uint64_t t17 = 293LLU;

	t17 = ((x825^(x826&x827))<<x828);

	if (t17 != 14208LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x917 = 20LLU;
	volatile int32_t x918 = 40324;
	uint64_t x919 = 112027988733LLU;
	volatile uint64_t t18 = 1LLU;

	t18 = ((x917^(x918&x919))<<x920);

	if (t18 != 8480LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x997 = 1623886422707839982LLU;
	int8_t x998 = -1;
	int16_t x999 = 8801;
	uint8_t x1000 = 21U;
	volatile uint64_t t19 = 296493333173183LLU;

	t19 = ((x997^(x998&x999))<<x1000);

	if (t19 != 9448730758419054592LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1097 = INT32_MAX;
	static volatile int16_t x1098 = -1;
	uint8_t x1100 = 1U;
	int64_t t20 = 1604651617142004321LL;

	t20 = ((x1097^(x1098&x1099))<<x1100);

	if (t20 != 19203780724658LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x1110 = UINT8_MAX;
	static uint32_t x1111 = 11386U;
	uint32_t t21 = 1113048902U;

	t21 = ((x1109^(x1110&x1111))<<x1112);

	if (t21 != 65U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1117 = UINT32_MAX;
	int8_t x1119 = 2;
	static int8_t x1120 = 0;
	volatile uint32_t t22 = 87400U;

	t22 = ((x1117^(x1118&x1119))<<x1120);

	if (t22 != 4294967293U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1189 = 5U;
	uint16_t x1190 = 340U;
	int16_t x1191 = -1;
	int16_t x1192 = 1;
	uint32_t t23 = 112U;

	t23 = ((x1189^(x1190&x1191))<<x1192);

	if (t23 != 674U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x1349 = 100;
	static int8_t x1351 = INT8_MIN;
	volatile uint8_t x1352 = 3U;
	int32_t t24 = -26206;

	t24 = ((x1349^(x1350&x1351))<<x1352);

	if (t24 != 118560) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1374 = 93U;
	uint16_t x1375 = UINT16_MAX;
	uint8_t x1376 = 6U;
	volatile uint32_t t25 = 47341U;

	t25 = ((x1373^(x1374&x1375))<<x1376);

	if (t25 != 261696U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1413 = 16949LL;
	volatile uint16_t x1414 = 267U;
	uint32_t x1415 = UINT32_MAX;
	uint8_t x1416 = 41U;
	int64_t t26 = -2158044266765LL;

	t26 = ((x1413^(x1414&x1415))<<x1416);

	if (t26 != 37853986321072128LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1533 = 8042563747643240LLU;
	int64_t x1534 = INT64_MIN;
	static uint8_t x1536 = 1U;

	t27 = ((x1533^(x1534&x1535))<<x1536);

	if (t27 != 16085127495286480LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1581 = UINT16_MAX;
	uint64_t x1583 = 30LLU;
	static volatile uint64_t t28 = 40LLU;

	t28 = ((x1581^(x1582&x1583))<<x1584);

	if (t28 != 281470681743360LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1598 = -5796;
	int32_t x1599 = 19327;
	uint32_t t29 = 44U;

	t29 = ((x1597^(x1598&x1599))<<x1600);

	if (t29 != 173928U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1629 = 30U;
	int64_t x1630 = -46518363LL;
	int64_t x1631 = 1390LL;
	uint16_t x1632 = 29U;
	volatile int64_t t30 = 236567600LL;

	t30 = ((x1629^(x1630&x1631))<<x1632);

	if (t30 != 718333280256LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1709 = 182;
	uint16_t x1710 = 55U;
	static int64_t x1711 = 114806815979973LL;
	int8_t x1712 = 25;
	static int64_t t31 = -983056592LL;

	t31 = ((x1709^(x1710&x1711))<<x1712);

	if (t31 != 6006243328LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x1869 = INT64_MIN;
	int64_t x1870 = 16852284586035476LL;
	uint64_t x1871 = 80LLU;
	static uint32_t x1872 = 30U;

	t32 = ((x1869^(x1870&x1871))<<x1872);

	if (t32 != 17179869184LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1881 = UINT8_MAX;
	volatile uint32_t x1883 = 224U;
	static uint8_t x1884 = 11U;
	static int64_t t33 = 41917LL;

	t33 = ((x1881^(x1882&x1883))<<x1884);

	if (t33 != 63488LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x1929 = INT16_MAX;
	uint64_t x1930 = 802887671329075996LLU;
	static int64_t x1931 = 0LL;
	volatile uint64_t t34 = 5602922016324082805LLU;

	t34 = ((x1929^(x1930&x1931))<<x1932);

	if (t34 != 524272LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1957 = 1;
	uint32_t x1958 = UINT32_MAX;
	static int8_t x1959 = INT8_MIN;
	volatile int8_t x1960 = 7;
	uint32_t t35 = 879343U;

	t35 = ((x1957^(x1958&x1959))<<x1960);

	if (t35 != 4294951040U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x1981 = INT32_MIN;
	uint32_t x1982 = 991949649U;
	static uint32_t x1983 = UINT32_MAX;
	volatile uint32_t t36 = 100541U;

	t36 = ((x1981^(x1982&x1983))<<x1984);

	if (t36 != 1983899298U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1994 = INT16_MIN;
	int8_t x1995 = INT8_MAX;
	uint8_t x1996 = 0U;
	volatile uint64_t t37 = 996985LLU;

	t37 = ((x1993^(x1994&x1995))<<x1996);

	if (t37 != 105965844LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2045 = 524720389LL;
	int64_t x2046 = INT64_MIN;
	uint8_t x2047 = UINT8_MAX;
	uint8_t x2048 = 14U;

	t38 = ((x2045^(x2046&x2047))<<x2048);

	if (t38 != 8597018853376LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2074 = 961157LLU;
	uint32_t x2075 = 83276U;
	volatile uint8_t x2076 = 3U;
	uint64_t t39 = 7141723774LLU;

	t39 = ((x2073^(x2074&x2075))<<x2076);

	if (t39 != 984LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2081 = 0U;
	static int32_t x2082 = INT32_MAX;
	uint32_t x2083 = UINT32_MAX;
	static volatile int32_t x2084 = 7;
	volatile uint32_t t40 = 43565U;

	t40 = ((x2081^(x2082&x2083))<<x2084);

	if (t40 != 4294967168U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x2321 = UINT8_MAX;
	uint64_t x2324 = 15LLU;

	t41 = ((x2321^(x2322&x2323))<<x2324);

	if (t41 != 137512321024LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2353 = UINT16_MAX;
	uint8_t x2354 = UINT8_MAX;
	int16_t x2355 = 1;
	volatile int32_t t42 = 496496670;

	t42 = ((x2353^(x2354&x2355))<<x2356);

	if (t42 != 131068) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x2365 = INT32_MIN;
	static volatile uint32_t x2366 = 19311U;
	uint16_t x2368 = 14U;
	uint32_t t43 = 102U;

	t43 = ((x2365^(x2366&x2367))<<x2368);

	if (t43 != 316391424U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x2441 = 7U;
	volatile uint16_t x2442 = 1872U;
	static int8_t x2443 = -1;
	int32_t t44 = 250680;

	t44 = ((x2441^(x2442&x2443))<<x2444);

	if (t44 != 30785536) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2457 = INT64_MIN;
	int64_t x2458 = -1LL;
	uint64_t t45 = 236777610488LLU;

	t45 = ((x2457^(x2458&x2459))<<x2460);

	if (t45 != 12422698923607018LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x2497 = UINT16_MAX;
	uint16_t x2499 = 20U;
	uint32_t x2500 = 6U;
	int32_t t46 = -10136758;

	t46 = ((x2497^(x2498&x2499))<<x2500);

	if (t46 != 4192960) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x2509 = -1;
	int32_t x2510 = -749;
	int8_t x2511 = -1;

	t47 = ((x2509^(x2510&x2511))<<x2512);

	if (t47 != 748) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2545 = 55974;
	static uint8_t x2546 = UINT8_MAX;
	int16_t x2547 = 602;
	int8_t x2548 = 0;
	int32_t t48 = 26149;

	t48 = ((x2545^(x2546&x2547))<<x2548);

	if (t48 != 56060) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2561 = 71212868U;
	static int32_t x2562 = 190905175;
	static uint8_t x2564 = 12U;
	volatile uint32_t t49 = 27239U;

	t49 = ((x2561^(x2562&x2563))<<x2564);

	if (t49 != 3863031808U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2601 = 314U;
	static uint8_t x2602 = UINT8_MAX;
	uint64_t x2603 = 132599331LLU;

	t50 = ((x2601^(x2602&x2603))<<x2604);

	if (t50 != 8992LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2673 = 6148937LLU;
	uint16_t x2674 = 801U;
	volatile int16_t x2675 = INT16_MAX;
	volatile int8_t x2676 = 1;
	uint64_t t51 = 476845010589717LLU;

	t51 = ((x2673^(x2674&x2675))<<x2676);

	if (t51 != 12296400LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2741 = UINT64_MAX;
	uint16_t x2742 = UINT16_MAX;
	uint64_t x2743 = UINT64_MAX;
	uint32_t x2744 = 1U;
	volatile uint64_t t52 = 1264315LLU;

	t52 = ((x2741^(x2742&x2743))<<x2744);

	if (t52 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2801 = INT16_MIN;
	volatile int64_t x2802 = INT64_MIN;
	static int8_t x2803 = -1;
	static uint8_t x2804 = 0U;
	int64_t t53 = -3LL;

	t53 = ((x2801^(x2802&x2803))<<x2804);

	if (t53 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2837 = UINT8_MAX;
	int16_t x2838 = -1;
	static uint16_t x2839 = 199U;
	uint32_t x2840 = 1U;

	t54 = ((x2837^(x2838&x2839))<<x2840);

	if (t54 != 112) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x2861 = UINT64_MAX;
	int8_t x2862 = 1;
	int16_t x2863 = INT16_MAX;
	volatile uint64_t t55 = 3LLU;

	t55 = ((x2861^(x2862&x2863))<<x2864);

	if (t55 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x2869 = 0U;
	int32_t x2871 = INT32_MAX;
	uint8_t x2872 = 0U;
	int32_t t56 = INT32_MAX;

	t56 = ((x2869^(x2870&x2871))<<x2872);

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2897 = -1;
	volatile int16_t x2898 = -8344;
	volatile uint64_t x2899 = 119973032370705363LLU;
	static int16_t x2900 = 1;
	static uint64_t t57 = 4344685662514522971LLU;

	t57 = ((x2897^(x2898&x2899))<<x2900);

	if (t57 != 18206798008968141182LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x2941 = 11LL;
	int32_t x2942 = 1;
	int64_t x2943 = INT64_MIN;
	int32_t x2944 = 0;
	static volatile int64_t t58 = -136606155680LL;

	t58 = ((x2941^(x2942&x2943))<<x2944);

	if (t58 != 11LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2981 = -15;
	uint64_t x2982 = 267648LLU;
	uint64_t x2984 = 0LLU;
	uint64_t t59 = 1017845424925799LLU;

	t59 = ((x2981^(x2982&x2983))<<x2984);

	if (t59 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x3009 = 1020U;
	int32_t x3010 = -4;
	int32_t x3011 = 5102595;
	volatile uint32_t x3012 = 1U;
	volatile int32_t t60 = -58;

	t60 = ((x3009^(x3010&x3011))<<x3012);

	if (t60 != 10207224) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x3045 = UINT64_MAX;
	static uint16_t x3046 = UINT16_MAX;
	int8_t x3047 = 60;
	int8_t x3048 = 0;

	t61 = ((x3045^(x3046&x3047))<<x3048);

	if (t61 != 18446744073709551555LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x3103 = 10U;
	int32_t x3104 = 3;
	int64_t t62 = -777135255LL;

	t62 = ((x3101^(x3102&x3103))<<x3104);

	if (t62 != 4149084192LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x3277 = 1735703933U;
	uint64_t x3278 = 17688268690596LLU;
	int32_t x3279 = -433455;
	int32_t x3280 = 0;
	uint64_t t63 = 93680LLU;

	t63 = ((x3277^(x3278&x3279))<<x3280);

	if (t63 != 17687640866301LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3317 = INT32_MAX;
	uint8_t x3319 = 27U;
	uint64_t t64 = 254048217718547550LLU;

	t64 = ((x3317^(x3318&x3319))<<x3320);

	if (t64 != 8589934480LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3382 = UINT64_MAX;
	int64_t x3383 = INT64_MAX;
	int8_t x3384 = 0;
	volatile uint64_t t65 = 3188351LLU;

	t65 = ((x3381^(x3382&x3383))<<x3384);

	if (t65 != 9223372036854774753LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x3453 = 2030LLU;
	int32_t x3454 = 16242;
	int32_t x3455 = INT32_MIN;
	int8_t x3456 = 1;
	volatile uint64_t t66 = 195776LLU;

	t66 = ((x3453^(x3454&x3455))<<x3456);

	if (t66 != 4060LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x3461 = INT64_MIN;
	int8_t x3462 = 13;
	uint64_t t67 = 1966129912133569LLU;

	t67 = ((x3461^(x3462&x3463))<<x3464);

	if (t67 != 416LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x3477 = INT16_MIN;
	uint64_t x3478 = UINT64_MAX;
	int32_t x3479 = 617016;
	volatile int8_t x3480 = 20;
	volatile uint64_t t68 = 14294LLU;

	t68 = ((x3477^(x3478&x3479))<<x3480);

	if (t68 != 18446743449387401216LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3481 = 184LLU;
	int64_t x3483 = -133693648685LL;
	static uint16_t x3484 = 0U;

	t69 = ((x3481^(x3482&x3483))<<x3484);

	if (t69 != 18446743940015902827LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x3490 = -1;
	int8_t x3491 = INT8_MIN;
	uint8_t x3492 = 0U;
	volatile int32_t t70 = 496679;

	t70 = ((x3489^(x3490&x3491))<<x3492);

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x3497 = 979072LL;
	volatile int64_t t71 = 2039217LL;

	t71 = ((x3497^(x3498&x3499))<<x3500);

	if (t71 != 513315700736LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3545 = 2635U;
	volatile int32_t x3546 = INT32_MIN;
	uint32_t x3547 = UINT32_MAX;
	volatile uint32_t t72 = 122000U;

	t72 = ((x3545^(x3546&x3547))<<x3548);

	if (t72 != 337280U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x3589 = 1U;
	static int8_t x3591 = INT8_MIN;

	t73 = ((x3589^(x3590&x3591))<<x3592);

	if (t73 != 557312) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3606 = 314918884301LLU;
	uint8_t x3608 = 41U;
	static volatile uint64_t t74 = 902922381869LLU;

	t74 = ((x3605^(x3606&x3607))<<x3608);

	if (t74 != 17249776133293998080LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x3761 = UINT16_MAX;
	uint64_t x3762 = 149634LLU;
	uint64_t x3763 = UINT64_MAX;
	volatile uint64_t t75 = 414249158834460359LLU;

	t75 = ((x3761^(x3762&x3763))<<x3764);

	if (t75 != 356090LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x3769 = 247U;
	volatile int16_t x3770 = 1;
	volatile int16_t x3771 = -1;
	int8_t x3772 = 3;
	int32_t t76 = -110;

	t76 = ((x3769^(x3770&x3771))<<x3772);

	if (t76 != 1968) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3773 = 2U;
	uint16_t x3774 = 819U;
	int8_t x3776 = 0;
	int32_t t77 = -1216;

	t77 = ((x3773^(x3774&x3775))<<x3776);

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3777 = INT64_MIN;
	volatile uint64_t t78 = 18033337496LLU;

	t78 = ((x3777^(x3778&x3779))<<x3780);

	if (t78 != 171940LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3802 = -1LL;
	static int8_t x3804 = 8;
	int64_t t79 = -22281861146495785LL;

	t79 = ((x3801^(x3802&x3803))<<x3804);

	if (t79 != 266240LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x3897 = 1739692678906556LL;
	int64_t x3898 = -1466741261LL;
	int16_t x3899 = INT16_MAX;
	uint8_t x3900 = 11U;
	volatile int64_t t80 = 429LL;

	t80 = ((x3897^(x3898&x3899))<<x3900);

	if (t80 != 3562890606440773632LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x3929 = 2U;
	uint32_t x3931 = 333636114U;
	static volatile uint32_t t81 = 11U;

	t81 = ((x3929^(x3930&x3931))<<x3932);

	if (t81 != 46170128U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x3957 = UINT64_MAX;
	int32_t x3958 = INT32_MAX;
	static volatile int64_t x3959 = INT64_MAX;
	static int8_t x3960 = 17;
	uint64_t t82 = 103157121LLU;

	t82 = ((x3957^(x3958&x3959))<<x3960);

	if (t82 != 18446462598732840960LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3969 = 34LLU;
	int32_t x3970 = INT32_MAX;
	volatile uint8_t x3972 = 22U;

	t83 = ((x3969^(x3970&x3971))<<x3972);

	if (t83 != 274731106304LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4017 = 242543732408908007LLU;
	static uint8_t x4019 = 1U;

	t84 = ((x4017^(x4018&x4019))<<x4020);

	if (t84 != 15573071879990345728LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4026 = UINT64_MAX;
	static int8_t x4028 = 1;

	t85 = ((x4025^(x4026&x4027))<<x4028);

	if (t85 != 2689350LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4029 = 195887334U;
	int32_t x4030 = -1;
	uint16_t x4032 = 1U;
	volatile uint64_t t86 = 2189063553052107066LLU;

	t86 = ((x4029^(x4030&x4031))<<x4032);

	if (t86 != 1687359540LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x4041 = 352137043730LLU;
	static uint16_t x4043 = 1766U;
	uint8_t x4044 = 2U;
	uint64_t t87 = 19896LLU;

	t87 = ((x4041^(x4042&x4043))<<x4044);

	if (t87 != 1408548174920LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4073 = INT32_MAX;
	int64_t x4074 = -31061936216271600LL;
	static uint8_t x4075 = 3U;
	uint8_t x4076 = 19U;
	volatile int64_t t88 = -132LL;

	t88 = ((x4073^(x4074&x4075))<<x4076);

	if (t88 != 1125899906318336LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4107 = INT32_MAX;
	static uint8_t x4108 = 26U;
	volatile uint64_t t89 = 193132079LLU;

	t89 = ((x4105^(x4106&x4107))<<x4108);

	if (t89 != 18367159551767085056LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4129 = INT32_MIN;
	uint32_t x4130 = 350U;
	volatile int32_t x4131 = INT32_MIN;
	uint8_t x4132 = 1U;

	t90 = ((x4129^(x4130&x4131))<<x4132);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x4133 = 47U;
	int32_t x4134 = INT32_MIN;
	uint8_t x4136 = 0U;
	int32_t t91 = -5639481;

	t91 = ((x4133^(x4134&x4135))<<x4136);

	if (t91 != 47) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x4369 = -28;
	volatile uint32_t x4370 = 12123605U;
	volatile int16_t x4371 = INT16_MIN;
	static uint32_t t92 = 1U;

	t92 = ((x4369^(x4370&x4371))<<x4372);

	if (t92 != 4270784456U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4438 = 6700243025LLU;
	static volatile int8_t x4439 = INT8_MIN;
	static volatile uint64_t t93 = 1683150911348678LLU;

	t93 = ((x4437^(x4438&x4439))<<x4440);

	if (t93 != 101329452122112LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x4444 = 11U;
	static uint32_t t94 = 2638958U;

	t94 = ((x4441^(x4442&x4443))<<x4444);

	if (t94 != 4294817792U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x4449 = 1626U;
	static uint8_t x4452 = 1U;

	t95 = ((x4449^(x4450&x4451))<<x4452);

	if (t95 != 6522LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4533 = INT8_MAX;
	volatile int16_t x4535 = 0;
	volatile uint8_t x4536 = 3U;
	volatile uint32_t t96 = 44479U;

	t96 = ((x4533^(x4534&x4535))<<x4536);

	if (t96 != 1016U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x4546 = INT8_MAX;
	uint64_t x4547 = 343138582858104365LLU;
	volatile uint16_t x4548 = 1U;
	static volatile uint64_t t97 = 3LLU;

	t97 = ((x4545^(x4546&x4547))<<x4548);

	if (t97 != 3824LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x4551 = INT16_MAX;
	volatile int64_t t98 = -44LL;

	t98 = ((x4549^(x4550&x4551))<<x4552);

	if (t98 != 7562LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4565 = UINT32_MAX;
	uint32_t x4566 = UINT32_MAX;
	uint16_t x4568 = 30U;
	static uint32_t t99 = 802U;

	t99 = ((x4565^(x4566&x4567))<<x4568);

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

