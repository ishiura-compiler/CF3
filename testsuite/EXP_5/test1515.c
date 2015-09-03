#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x88 = 50U;
int16_t x169 = INT16_MAX;
volatile int32_t t2 = -27123458;
int16_t x190 = -1;
static int8_t x299 = -2;
static volatile int32_t x426 = INT32_MIN;
volatile int8_t x444 = 0;
volatile uint64_t t9 = 975LLU;
int32_t x643 = INT32_MAX;
volatile uint64_t t10 = 1398844022654LLU;
int64_t x645 = 7LL;
int8_t x711 = -30;
int64_t x726 = INT64_MIN;
int16_t x727 = INT16_MAX;
uint32_t x774 = 0U;
int64_t x785 = 3240394113825LL;
int8_t x788 = 14;
static volatile int32_t t16 = -786082;
int16_t x848 = 9;
int16_t x996 = 1;
int64_t t18 = -2046966278167LL;
int32_t t19 = -242602824;
volatile uint32_t x1082 = 7226U;
int32_t x1107 = INT32_MIN;
static int32_t x1125 = INT32_MAX;
static uint8_t x1128 = 4U;
volatile uint8_t x1200 = 6U;
uint8_t x1244 = 9U;
static int16_t x1262 = -1;
int16_t x1264 = 1;
volatile uint32_t x1398 = UINT32_MAX;
volatile int8_t x1405 = 1;
volatile int32_t t29 = 82403646;
int64_t x1450 = -1LL;
static volatile int64_t x1515 = INT64_MIN;
static volatile int32_t t31 = 1891;
static uint8_t x1520 = 1U;
volatile int8_t x1530 = -1;
static uint16_t x1532 = 45U;
volatile int64_t t33 = -3349991618254246LL;
int32_t x1638 = INT32_MIN;
int32_t x1640 = 0;
uint32_t t38 = 61U;
int64_t x1925 = 1922LL;
int32_t x1927 = INT32_MIN;
uint64_t x1973 = 15223965296113810LLU;
volatile int32_t t41 = 28177187;
static volatile uint16_t x2225 = 256U;
int16_t x2227 = -1;
volatile int16_t x2235 = 45;
uint64_t x2236 = 30LLU;
volatile uint32_t t46 = 139880U;
int32_t t48 = 173727473;
uint64_t x2717 = 13554935LLU;
static uint16_t x2719 = 1U;
int32_t x2720 = 0;
volatile uint32_t x2742 = UINT32_MAX;
int16_t x2939 = INT16_MAX;
static int32_t t55 = -122;
uint32_t x3303 = 365U;
static volatile int8_t x3399 = INT8_MIN;
int32_t x3419 = -28579;
volatile uint64_t t61 = 270004LLU;
uint8_t x3638 = 7U;
uint64_t x3639 = UINT64_MAX;
volatile int16_t x3731 = INT16_MIN;
static int32_t t68 = -479561008;
int32_t t69 = -221972;
uint64_t x3959 = 1789408231782182464LLU;
uint32_t x3962 = UINT32_MAX;
uint16_t x3964 = 2U;
volatile int32_t t71 = 911135;
uint64_t x4049 = 10195474215LLU;
uint64_t x4050 = 5073715672109LLU;
static volatile uint16_t x4060 = 8U;
static volatile uint32_t x4065 = 1U;
uint64_t x4068 = 1LLU;
int8_t x4106 = -1;
static int64_t x4107 = -1481545355523598128LL;
uint8_t x4152 = 0U;
int8_t x4257 = 10;
uint16_t x4260 = 4U;
int32_t t79 = 506;
uint16_t x4287 = 2187U;
int8_t x4288 = 0;
int8_t x4308 = 0;
volatile uint32_t x4353 = 1U;
uint16_t x4367 = 15114U;
static int64_t x4418 = 42LL;
int8_t x4419 = 1;
int64_t x4441 = 11821LL;
int64_t x4442 = -1705117866270384LL;
uint32_t x4444 = 1U;
static int8_t x4554 = INT8_MIN;
static uint16_t x4555 = UINT16_MAX;
uint16_t x4641 = 11641U;
uint16_t x4644 = 6U;
int64_t x4721 = INT64_MAX;
int64_t t89 = 32977976518LL;
volatile int32_t x4926 = INT32_MIN;
uint32_t x4960 = 1U;
uint64_t x4977 = 12054207224742032LLU;
uint16_t x5093 = UINT16_MAX;
uint16_t x5095 = UINT16_MAX;
static volatile uint8_t x5096 = 7U;
int16_t x5166 = INT16_MAX;
static int64_t x5314 = INT64_MIN;
volatile uint8_t x5316 = 3U;
static uint8_t x5324 = 1U;
uint16_t x5337 = UINT16_MAX;
volatile int32_t t99 = 10;


void f0(void) {
	uint64_t x85 = UINT64_MAX;
	int8_t x86 = INT8_MIN;
	int32_t x87 = INT32_MIN;
	volatile uint64_t t0 = 4501561104162235LLU;

	t0 = (x85>>((x86<x87)^x88));

	if (t0 != 16383LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x125 = INT32_MAX;
	uint16_t x126 = 1U;
	static int16_t x127 = INT16_MIN;
	int8_t x128 = 0;
	int32_t t1 = INT32_MAX;

	t1 = (x125>>((x126<x127)^x128));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x170 = 0U;
	int8_t x171 = INT8_MIN;
	uint16_t x172 = 7U;

	t2 = (x169>>((x170<x171)^x172));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x189 = 554495U;
	volatile uint16_t x191 = UINT16_MAX;
	int8_t x192 = 1;
	static volatile uint32_t t3 = 16610484U;

	t3 = (x189>>((x190<x191)^x192));

	if (t3 != 554495U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x297 = 17432U;
	volatile int32_t x298 = INT32_MIN;
	static volatile uint16_t x300 = 3U;
	static volatile uint32_t t4 = 530785942U;

	t4 = (x297>>((x298<x299)^x300));

	if (t4 != 4358U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x313 = 1598LL;
	int8_t x314 = INT8_MIN;
	int64_t x315 = INT64_MIN;
	uint32_t x316 = 9U;
	static volatile int64_t t5 = -1801391997LL;

	t5 = (x313>>((x314<x315)^x316));

	if (t5 != 3LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x425 = 14777U;
	uint8_t x427 = 10U;
	static uint8_t x428 = 8U;
	uint32_t t6 = 55U;

	t6 = (x425>>((x426<x427)^x428));

	if (t6 != 28U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x433 = 9;
	int32_t x434 = INT32_MIN;
	int8_t x435 = INT8_MIN;
	uint8_t x436 = 0U;
	int32_t t7 = -1436;

	t7 = (x433>>((x434<x435)^x436));

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x441 = 75;
	uint32_t x442 = 1804970U;
	int32_t x443 = INT32_MIN;
	int32_t t8 = -274014;

	t8 = (x441>>((x442<x443)^x444));

	if (t8 != 37) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x521 = 9371492219329LLU;
	int64_t x522 = 12829728LL;
	int32_t x523 = INT32_MAX;
	uint8_t x524 = 39U;

	t9 = (x521>>((x522<x523)^x524));

	if (t9 != 34LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x641 = 64176170775LLU;
	int16_t x642 = 31;
	uint32_t x644 = 25U;

	t10 = (x641>>((x642<x643)^x644));

	if (t10 != 3825LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x646 = INT64_MIN;
	static uint64_t x647 = 5933411789865646LLU;
	uint64_t x648 = 9LLU;
	volatile int64_t t11 = 236686974602056LL;

	t11 = (x645>>((x646<x647)^x648));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x709 = 26;
	uint32_t x710 = UINT32_MAX;
	int8_t x712 = 1;
	int32_t t12 = -3364571;

	t12 = (x709>>((x710<x711)^x712));

	if (t12 != 13) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x725 = UINT32_MAX;
	int64_t x728 = 0LL;
	uint32_t t13 = 7U;

	t13 = (x725>>((x726<x727)^x728));

	if (t13 != 2147483647U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x773 = UINT32_MAX;
	static int32_t x775 = -1;
	int8_t x776 = 1;
	uint32_t t14 = UINT32_MAX;

	t14 = (x773>>((x774<x775)^x776));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x786 = 4U;
	int64_t x787 = -1LL;
	int64_t t15 = 2252855745LL;

	t15 = (x785>>((x786<x787)^x788));

	if (t15 != 197777961LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x801 = 8U;
	uint16_t x802 = UINT16_MAX;
	static uint8_t x803 = 5U;
	int8_t x804 = 8;

	t16 = (x801>>((x802<x803)^x804));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x845 = UINT8_MAX;
	volatile int8_t x846 = -6;
	static int16_t x847 = -1;
	static volatile int32_t t17 = -55590;

	t17 = (x845>>((x846<x847)^x848));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x993 = 114024564221LL;
	volatile int16_t x994 = INT16_MAX;
	int16_t x995 = INT16_MAX;

	t18 = (x993>>((x994<x995)^x996));

	if (t18 != 57012282110LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1009 = 0;
	static int64_t x1010 = 9753581LL;
	int16_t x1011 = INT16_MAX;
	int8_t x1012 = 15;

	t19 = (x1009>>((x1010<x1011)^x1012));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1081 = 0U;
	int32_t x1083 = -20;
	uint8_t x1084 = 9U;
	volatile int32_t t20 = -936618;

	t20 = (x1081>>((x1082<x1083)^x1084));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1105 = INT64_MAX;
	uint32_t x1106 = UINT32_MAX;
	uint8_t x1108 = 9U;
	volatile int64_t t21 = 1211740672630LL;

	t21 = (x1105>>((x1106<x1107)^x1108));

	if (t21 != 18014398509481983LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1126 = -1;
	int16_t x1127 = INT16_MAX;
	int32_t t22 = 23295;

	t22 = (x1125>>((x1126<x1127)^x1128));

	if (t22 != 67108863) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1197 = UINT32_MAX;
	static volatile int16_t x1198 = INT16_MIN;
	int64_t x1199 = 15889892147LL;
	uint32_t t23 = 2038U;

	t23 = (x1197>>((x1198<x1199)^x1200));

	if (t23 != 33554431U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1241 = 5298LL;
	volatile int8_t x1242 = INT8_MAX;
	static uint8_t x1243 = UINT8_MAX;
	int64_t t24 = 2521128356410068843LL;

	t24 = (x1241>>((x1242<x1243)^x1244));

	if (t24 != 20LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1245 = UINT8_MAX;
	int8_t x1246 = -1;
	volatile int8_t x1247 = INT8_MIN;
	int32_t x1248 = 4;
	volatile int32_t t25 = -1639;

	t25 = (x1245>>((x1246<x1247)^x1248));

	if (t25 != 15) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1261 = 13;
	int16_t x1263 = 2716;
	int32_t t26 = -10615;

	t26 = (x1261>>((x1262<x1263)^x1264));

	if (t26 != 13) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x1321 = UINT64_MAX;
	static volatile int16_t x1322 = INT16_MIN;
	int64_t x1323 = -107566LL;
	static int8_t x1324 = 1;
	volatile uint64_t t27 = 29697LLU;

	t27 = (x1321>>((x1322<x1323)^x1324));

	if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1397 = INT16_MAX;
	int32_t x1399 = -1;
	static uint16_t x1400 = 4U;
	int32_t t28 = -1;

	t28 = (x1397>>((x1398<x1399)^x1400));

	if (t28 != 2047) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1406 = -1;
	volatile uint16_t x1407 = 3U;
	static int8_t x1408 = 2;

	t29 = (x1405>>((x1406<x1407)^x1408));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x1449 = UINT32_MAX;
	volatile int32_t x1451 = -1;
	volatile uint16_t x1452 = 1U;
	uint32_t t30 = 3U;

	t30 = (x1449>>((x1450<x1451)^x1452));

	if (t30 != 2147483647U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1513 = 3;
	uint8_t x1514 = 3U;
	uint16_t x1516 = 29U;

	t31 = (x1513>>((x1514<x1515)^x1516));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1517 = 0;
	uint8_t x1518 = UINT8_MAX;
	int64_t x1519 = INT64_MIN;
	int32_t t32 = 4489;

	t32 = (x1517>>((x1518<x1519)^x1520));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1529 = 54714669LL;
	volatile int32_t x1531 = -1;

	t33 = (x1529>>((x1530<x1531)^x1532));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1625 = 5;
	int16_t x1626 = -1;
	uint64_t x1627 = UINT64_MAX;
	volatile int64_t x1628 = 2LL;
	static int32_t t34 = 186017;

	t34 = (x1625>>((x1626<x1627)^x1628));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x1637 = 2U;
	volatile uint8_t x1639 = UINT8_MAX;
	static int32_t t35 = -2908513;

	t35 = (x1637>>((x1638<x1639)^x1640));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1645 = 1930LLU;
	int32_t x1646 = -1;
	uint16_t x1647 = UINT16_MAX;
	int8_t x1648 = 1;
	volatile uint64_t t36 = 24063227909264790LLU;

	t36 = (x1645>>((x1646<x1647)^x1648));

	if (t36 != 1930LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x1753 = UINT8_MAX;
	volatile int32_t x1754 = -3493;
	int64_t x1755 = -3073166065518457349LL;
	int16_t x1756 = 0;
	int32_t t37 = 1;

	t37 = (x1753>>((x1754<x1755)^x1756));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1861 = 799479U;
	volatile int32_t x1862 = INT32_MIN;
	uint32_t x1863 = UINT32_MAX;
	static int32_t x1864 = 1;

	t38 = (x1861>>((x1862<x1863)^x1864));

	if (t38 != 799479U) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1926 = -3899502982704757521LL;
	uint8_t x1928 = 17U;
	static volatile int64_t t39 = 15407069LL;

	t39 = (x1925>>((x1926<x1927)^x1928));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x1974 = INT32_MIN;
	uint64_t x1975 = 1859914LLU;
	int8_t x1976 = 1;
	static volatile uint64_t t40 = 92316LLU;

	t40 = (x1973>>((x1974<x1975)^x1976));

	if (t40 != 7611982648056905LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1981 = INT32_MAX;
	static uint32_t x1982 = UINT32_MAX;
	int32_t x1983 = -1;
	uint8_t x1984 = 3U;

	t41 = (x1981>>((x1982<x1983)^x1984));

	if (t41 != 268435455) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2021 = 14;
	volatile int32_t x2022 = INT32_MAX;
	int8_t x2023 = INT8_MAX;
	volatile int8_t x2024 = 9;
	static int32_t t42 = 34979118;

	t42 = (x2021>>((x2022<x2023)^x2024));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2149 = 12U;
	static int32_t x2150 = 1803942;
	int32_t x2151 = INT32_MAX;
	uint8_t x2152 = 25U;
	static volatile int32_t t43 = 1;

	t43 = (x2149>>((x2150<x2151)^x2152));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2226 = 29U;
	uint8_t x2228 = 2U;
	int32_t t44 = -1872511;

	t44 = (x2225>>((x2226<x2227)^x2228));

	if (t44 != 64) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x2233 = 6115U;
	uint64_t x2234 = UINT64_MAX;
	static volatile uint32_t t45 = 7033847U;

	t45 = (x2233>>((x2234<x2235)^x2236));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2357 = UINT32_MAX;
	volatile int16_t x2358 = 733;
	int32_t x2359 = INT32_MIN;
	uint16_t x2360 = 1U;

	t46 = (x2357>>((x2358<x2359)^x2360));

	if (t46 != 2147483647U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2637 = 1U;
	uint64_t x2638 = UINT64_MAX;
	int64_t x2639 = INT64_MIN;
	static int8_t x2640 = 1;
	int32_t t47 = 1;

	t47 = (x2637>>((x2638<x2639)^x2640));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2641 = 12;
	volatile uint16_t x2642 = UINT16_MAX;
	static uint8_t x2643 = UINT8_MAX;
	int8_t x2644 = 0;

	t48 = (x2641>>((x2642<x2643)^x2644));

	if (t48 != 12) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2718 = -62;
	volatile uint64_t t49 = 8429231618556LLU;

	t49 = (x2717>>((x2718<x2719)^x2720));

	if (t49 != 6777467LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2741 = 50;
	uint32_t x2743 = 306847U;
	volatile uint64_t x2744 = 1LLU;
	int32_t t50 = 1;

	t50 = (x2741>>((x2742<x2743)^x2744));

	if (t50 != 25) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2913 = INT64_MAX;
	volatile int8_t x2914 = -1;
	uint32_t x2915 = 1744647U;
	uint8_t x2916 = 1U;
	static int64_t t51 = -243161174545LL;

	t51 = (x2913>>((x2914<x2915)^x2916));

	if (t51 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2937 = 13671U;
	int64_t x2938 = INT64_MAX;
	int64_t x2940 = 1LL;
	volatile int32_t t52 = -101;

	t52 = (x2937>>((x2938<x2939)^x2940));

	if (t52 != 6835) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3113 = UINT16_MAX;
	int64_t x3114 = INT64_MIN;
	uint8_t x3115 = 49U;
	int8_t x3116 = 0;
	volatile int32_t t53 = -3;

	t53 = (x3113>>((x3114<x3115)^x3116));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3125 = 451327367306027LL;
	int16_t x3126 = INT16_MIN;
	uint64_t x3127 = UINT64_MAX;
	uint16_t x3128 = 33U;
	int64_t t54 = -1826873245682LL;

	t54 = (x3125>>((x3126<x3127)^x3128));

	if (t54 != 105082LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3289 = 4161;
	int8_t x3290 = -1;
	volatile uint32_t x3291 = 53681855U;
	uint8_t x3292 = 3U;

	t55 = (x3289>>((x3290<x3291)^x3292));

	if (t55 != 520) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3301 = INT16_MAX;
	int64_t x3302 = INT64_MAX;
	uint32_t x3304 = 0U;
	int32_t t56 = 60724848;

	t56 = (x3301>>((x3302<x3303)^x3304));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3397 = 813604U;
	uint64_t x3398 = UINT64_MAX;
	uint8_t x3400 = 7U;
	uint32_t t57 = 12858594U;

	t57 = (x3397>>((x3398<x3399)^x3400));

	if (t57 != 6356U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3405 = 23452LLU;
	int16_t x3406 = INT16_MIN;
	int8_t x3407 = INT8_MIN;
	int16_t x3408 = 1;
	volatile uint64_t t58 = 4093017784862188LLU;

	t58 = (x3405>>((x3406<x3407)^x3408));

	if (t58 != 23452LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3417 = 3575;
	static int8_t x3418 = INT8_MAX;
	volatile int16_t x3420 = 0;
	static int32_t t59 = 172299;

	t59 = (x3417>>((x3418<x3419)^x3420));

	if (t59 != 3575) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3477 = UINT32_MAX;
	static volatile uint16_t x3478 = UINT16_MAX;
	int8_t x3479 = INT8_MIN;
	volatile int16_t x3480 = 0;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = (x3477>>((x3478<x3479)^x3480));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x3529 = UINT64_MAX;
	uint16_t x3530 = 16U;
	int64_t x3531 = 771LL;
	static int16_t x3532 = 7;

	t61 = (x3529>>((x3530<x3531)^x3532));

	if (t61 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3537 = UINT8_MAX;
	int8_t x3538 = 6;
	int16_t x3539 = INT16_MIN;
	uint16_t x3540 = 5U;
	int32_t t62 = 30972;

	t62 = (x3537>>((x3538<x3539)^x3540));

	if (t62 != 7) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3629 = UINT8_MAX;
	int16_t x3630 = INT16_MIN;
	volatile int32_t x3631 = INT32_MIN;
	int8_t x3632 = 2;
	volatile int32_t t63 = -12;

	t63 = (x3629>>((x3630<x3631)^x3632));

	if (t63 != 63) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3637 = INT16_MAX;
	volatile uint8_t x3640 = 7U;
	volatile int32_t t64 = 29834311;

	t64 = (x3637>>((x3638<x3639)^x3640));

	if (t64 != 511) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x3665 = UINT8_MAX;
	uint8_t x3666 = UINT8_MAX;
	int32_t x3667 = INT32_MIN;
	int32_t x3668 = 2;
	volatile int32_t t65 = 6;

	t65 = (x3665>>((x3666<x3667)^x3668));

	if (t65 != 63) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x3701 = 154U;
	int64_t x3702 = INT64_MAX;
	int8_t x3703 = 6;
	static int8_t x3704 = 1;
	volatile int32_t t66 = 196491;

	t66 = (x3701>>((x3702<x3703)^x3704));

	if (t66 != 77) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3729 = INT64_MAX;
	volatile uint64_t x3730 = 407923LLU;
	uint16_t x3732 = 30U;
	int64_t t67 = 0LL;

	t67 = (x3729>>((x3730<x3731)^x3732));

	if (t67 != 4294967295LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3873 = INT8_MAX;
	int32_t x3874 = -1;
	int32_t x3875 = INT32_MIN;
	int8_t x3876 = 2;

	t68 = (x3873>>((x3874<x3875)^x3876));

	if (t68 != 31) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3909 = INT32_MAX;
	static uint64_t x3910 = 789121109993351717LLU;
	uint64_t x3911 = UINT64_MAX;
	int8_t x3912 = 11;

	t69 = (x3909>>((x3910<x3911)^x3912));

	if (t69 != 2097151) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x3957 = INT8_MAX;
	int32_t x3958 = INT32_MIN;
	int16_t x3960 = 1;
	static int32_t t70 = -57724133;

	t70 = (x3957>>((x3958<x3959)^x3960));

	if (t70 != 63) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3961 = UINT16_MAX;
	static uint64_t x3963 = 61162190261881202LLU;

	t71 = (x3961>>((x3962<x3963)^x3964));

	if (t71 != 8191) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x4045 = 1U;
	static uint32_t x4046 = UINT32_MAX;
	static int16_t x4047 = 29;
	int8_t x4048 = 0;
	volatile int32_t t72 = -40286;

	t72 = (x4045>>((x4046<x4047)^x4048));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4051 = INT8_MAX;
	static volatile uint8_t x4052 = 4U;
	volatile uint64_t t73 = 4494898474LLU;

	t73 = (x4049>>((x4050<x4051)^x4052));

	if (t73 != 637217138LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4057 = UINT64_MAX;
	static uint8_t x4058 = 4U;
	int64_t x4059 = INT64_MIN;
	uint64_t t74 = 3206807855876LLU;

	t74 = (x4057>>((x4058<x4059)^x4060));

	if (t74 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x4066 = 2796U;
	int8_t x4067 = INT8_MIN;
	static uint32_t t75 = 211217780U;

	t75 = (x4065>>((x4066<x4067)^x4068));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x4105 = 22;
	static uint16_t x4108 = 1U;
	int32_t t76 = 119185306;

	t76 = (x4105>>((x4106<x4107)^x4108));

	if (t76 != 11) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x4149 = 12025U;
	volatile int32_t x4150 = -1;
	uint16_t x4151 = UINT16_MAX;
	volatile int32_t t77 = 775429;

	t77 = (x4149>>((x4150<x4151)^x4152));

	if (t77 != 6012) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x4193 = 499451552LL;
	volatile int16_t x4194 = INT16_MAX;
	volatile int32_t x4195 = INT32_MIN;
	uint32_t x4196 = 1U;
	int64_t t78 = -20128967163610124LL;

	t78 = (x4193>>((x4194<x4195)^x4196));

	if (t78 != 249725776LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x4258 = 4151802685832741LLU;
	int64_t x4259 = 13227434LL;

	t79 = (x4257>>((x4258<x4259)^x4260));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x4285 = UINT32_MAX;
	static int16_t x4286 = INT16_MAX;
	uint32_t t80 = UINT32_MAX;

	t80 = (x4285>>((x4286<x4287)^x4288));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4305 = INT8_MAX;
	static int8_t x4306 = -57;
	int32_t x4307 = INT32_MIN;
	volatile int32_t t81 = -109;

	t81 = (x4305>>((x4306<x4307)^x4308));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x4354 = 125U;
	static uint16_t x4355 = 11U;
	uint8_t x4356 = 4U;
	uint32_t t82 = 83438U;

	t82 = (x4353>>((x4354<x4355)^x4356));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4365 = UINT8_MAX;
	volatile int16_t x4366 = INT16_MIN;
	volatile uint32_t x4368 = 2U;
	volatile int32_t t83 = 15;

	t83 = (x4365>>((x4366<x4367)^x4368));

	if (t83 != 31) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4417 = 114955LLU;
	volatile uint16_t x4420 = 0U;
	static uint64_t t84 = 4034LLU;

	t84 = (x4417>>((x4418<x4419)^x4420));

	if (t84 != 114955LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x4443 = 106U;
	volatile int64_t t85 = 187LL;

	t85 = (x4441>>((x4442<x4443)^x4444));

	if (t85 != 11821LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4553 = UINT64_MAX;
	static uint8_t x4556 = 0U;
	static volatile uint64_t t86 = 4002431342LLU;

	t86 = (x4553>>((x4554<x4555)^x4556));

	if (t86 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4642 = 13U;
	volatile uint64_t x4643 = 240928617851771331LLU;
	int32_t t87 = -1162;

	t87 = (x4641>>((x4642<x4643)^x4644));

	if (t87 != 90) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4722 = -1LL;
	static uint16_t x4723 = 18040U;
	uint8_t x4724 = 1U;
	static int64_t t88 = INT64_MAX;

	t88 = (x4721>>((x4722<x4723)^x4724));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4833 = 7782LL;
	int32_t x4834 = INT32_MAX;
	uint64_t x4835 = 6712965849LLU;
	static uint32_t x4836 = 12U;

	t89 = (x4833>>((x4834<x4835)^x4836));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x4925 = 7U;
	uint32_t x4927 = 1004391U;
	static int64_t x4928 = 1LL;
	volatile uint32_t t90 = 3963910U;

	t90 = (x4925>>((x4926<x4927)^x4928));

	if (t90 != 3U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4957 = INT64_MAX;
	static volatile uint16_t x4958 = 2113U;
	volatile int16_t x4959 = -1;
	int64_t t91 = -1290LL;

	t91 = (x4957>>((x4958<x4959)^x4960));

	if (t91 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x4978 = INT8_MAX;
	volatile int16_t x4979 = INT16_MIN;
	uint8_t x4980 = 0U;
	uint64_t t92 = 176735852LLU;

	t92 = (x4977>>((x4978<x4979)^x4980));

	if (t92 != 12054207224742032LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4997 = 0;
	volatile int32_t x4998 = INT32_MAX;
	volatile int32_t x4999 = INT32_MAX;
	uint16_t x5000 = 22U;
	static int32_t t93 = -730;

	t93 = (x4997>>((x4998<x4999)^x5000));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x5094 = INT16_MIN;
	int32_t t94 = 0;

	t94 = (x5093>>((x5094<x5095)^x5096));

	if (t94 != 1023) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5165 = UINT8_MAX;
	volatile uint32_t x5167 = 21170120U;
	uint32_t x5168 = 8U;
	volatile int32_t t95 = 901348568;

	t95 = (x5165>>((x5166<x5167)^x5168));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5313 = 114U;
	static uint64_t x5315 = 46761183217776LLU;
	volatile int32_t t96 = 16707881;

	t96 = (x5313>>((x5314<x5315)^x5316));

	if (t96 != 14) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5321 = 2;
	volatile uint8_t x5322 = 6U;
	int16_t x5323 = INT16_MAX;
	static int32_t t97 = 122578;

	t97 = (x5321>>((x5322<x5323)^x5324));

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x5338 = UINT8_MAX;
	volatile int32_t x5339 = 476716;
	int32_t x5340 = 25;
	volatile int32_t t98 = -643915;

	t98 = (x5337>>((x5338<x5339)^x5340));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5425 = INT32_MAX;
	volatile int8_t x5426 = INT8_MIN;
	static uint32_t x5427 = UINT32_MAX;
	uint64_t x5428 = 31LLU;

	t99 = (x5425>>((x5426<x5427)^x5428));

	if (t99 != 1) { NG(); } else { ; }
	
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

