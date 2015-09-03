#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x261 = INT32_MAX;
int16_t x373 = -1;
uint16_t x376 = 44U;
uint8_t x384 = 3U;
static int8_t x674 = -1;
volatile int8_t x697 = 2;
static volatile uint16_t x784 = 3U;
int32_t x812 = 40;
static volatile uint64_t t13 = 893673839421401LLU;
static int32_t x843 = INT32_MIN;
static volatile uint64_t t15 = 139105314592074LLU;
int8_t x897 = INT8_MAX;
int64_t x900 = 5LL;
int32_t x1065 = INT32_MAX;
int64_t x1068 = 6LL;
int32_t t18 = -3039308;
int64_t t20 = 250711211045LL;
volatile uint16_t x1124 = 7U;
uint8_t x1156 = 42U;
int16_t x1201 = INT16_MIN;
int64_t x1202 = INT64_MAX;
uint16_t x1204 = 25U;
int32_t t26 = 7125;
volatile uint64_t x1357 = 45067906203997132LLU;
uint16_t x1358 = 982U;
int8_t x1359 = 1;
uint32_t x1363 = 200911U;
uint32_t t28 = 196180396U;
static int8_t x1446 = INT8_MIN;
int32_t x1447 = INT32_MIN;
int64_t x1477 = INT64_MAX;
static volatile int8_t x1478 = 1;
volatile int32_t x1541 = -117;
int16_t x1543 = -1;
int8_t x1657 = INT8_MAX;
volatile uint32_t x1703 = 2U;
int16_t x1704 = 23;
int32_t x1717 = INT32_MIN;
volatile uint64_t t38 = 896847337508003187LLU;
volatile uint8_t x1764 = 4U;
uint64_t x1918 = 4490100599327589LLU;
int8_t x1920 = 6;
uint64_t t41 = 3560LLU;
uint64_t x2237 = 342408LLU;
static int64_t x2238 = -1LL;
volatile uint8_t x2269 = UINT8_MAX;
static uint16_t x2270 = UINT16_MAX;
volatile uint8_t x2272 = 1U;
int64_t t46 = -106585709660438603LL;
uint8_t x2377 = 20U;
uint64_t x2443 = 1573569125907576381LLU;
uint16_t x2487 = UINT16_MAX;
uint32_t x2501 = 59383U;
uint8_t x2640 = 4U;
int32_t x2685 = INT32_MAX;
static uint8_t x2804 = 8U;
volatile int32_t t55 = -174221674;
int8_t x2807 = INT8_MIN;
int16_t x2861 = INT16_MAX;
volatile uint8_t x2863 = 1U;
uint32_t x2964 = 6U;
int16_t x3014 = 0;
volatile int32_t t61 = -945;
uint16_t x3018 = 3U;
int32_t x3055 = INT32_MIN;
volatile int64_t t63 = 5109239165115139LL;
static int16_t x3133 = INT16_MAX;
uint8_t x3188 = 11U;
int16_t x3209 = -1;
static uint64_t x3212 = 0LLU;
uint8_t x3217 = UINT8_MAX;
uint8_t x3220 = 2U;
int8_t x3271 = INT8_MIN;
uint32_t x3272 = 0U;
uint16_t x3277 = UINT16_MAX;
int32_t t73 = -1;
int64_t x3289 = -52632LL;
volatile int32_t x3291 = INT32_MAX;
int64_t t76 = 0LL;
volatile int8_t x3713 = 41;
int64_t t78 = 4366462300244328LL;
volatile int8_t x3771 = INT8_MIN;
static volatile uint64_t t79 = 12113265222103089LLU;
int64_t x3774 = INT64_MIN;
static int64_t t80 = 1013913141LL;
int32_t x3787 = 2;
static uint64_t x3993 = UINT64_MAX;
int8_t x3996 = 0;
int16_t x4103 = INT16_MIN;
int8_t x4104 = 1;
static int64_t x4174 = -13001667817383LL;
int64_t x4175 = INT64_MIN;
uint8_t x4176 = 60U;
volatile uint8_t x4360 = 24U;
int64_t x4485 = 1957289068716295LL;
int32_t t92 = 875;
uint64_t x4677 = UINT64_MAX;
int8_t x4680 = 25;
int8_t x4755 = INT8_MIN;
uint16_t x4756 = 3U;
uint64_t x4797 = 50150326LLU;
volatile int8_t x4832 = 0;
int8_t x4937 = 24;


void f0(void) {
	uint8_t x262 = 56U;
	static volatile int32_t x263 = -22813519;
	uint8_t x264 = 1U;
	int32_t t0 = 212717920;

	t0 = ((x261+(x262^x263))>>x264);

	if (t0 != 1062335044) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x325 = 46480LLU;
	volatile int16_t x326 = INT16_MAX;
	int16_t x327 = 0;
	int16_t x328 = 11;
	volatile uint64_t t1 = 241734507LLU;

	t1 = ((x325+(x326^x327))>>x328);

	if (t1 != 38LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x374 = UINT64_MAX;
	volatile int8_t x375 = INT8_MIN;
	volatile uint64_t t2 = 196336678932LLU;

	t2 = ((x373+(x374^x375))>>x376);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x381 = INT16_MIN;
	uint64_t x382 = 252222931LLU;
	int16_t x383 = -13921;
	uint64_t t3 = 51282274833LLU;

	t3 = ((x381+(x382^x383))>>x384);

	if (t3 != 2305843009182161545LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x413 = -1;
	static uint64_t x414 = 10604127893702891LLU;
	uint64_t x415 = 1LLU;
	volatile int16_t x416 = 10;
	volatile uint64_t t4 = 1462LLU;

	t4 = ((x413+(x414^x415))>>x416);

	if (t4 != 10355593646194LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x473 = 6570262U;
	volatile uint64_t x474 = 1LLU;
	int32_t x475 = INT32_MIN;
	volatile int8_t x476 = 0;
	volatile uint64_t t5 = 3101072LLU;

	t5 = ((x473+(x474^x475))>>x476);

	if (t5 != 18446744071568638231LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x505 = 0U;
	uint64_t x506 = 1107454157029823LLU;
	int64_t x507 = INT64_MIN;
	uint8_t x508 = 51U;
	uint64_t t6 = 58352512073LLU;

	t6 = ((x505+(x506^x507))>>x508);

	if (t6 != 4096LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x517 = -1;
	static uint16_t x518 = 1762U;
	int8_t x519 = 0;
	int8_t x520 = 12;
	int32_t t7 = -1018207345;

	t7 = ((x517+(x518^x519))>>x520);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x557 = 115712156406LLU;
	uint32_t x558 = 2U;
	uint64_t x559 = UINT64_MAX;
	static int16_t x560 = 0;
	static uint64_t t8 = 5737LLU;

	t8 = ((x557+(x558^x559))>>x560);

	if (t8 != 115712156403LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x613 = INT64_MAX;
	uint8_t x614 = 49U;
	int16_t x615 = -1;
	int32_t x616 = 31;
	int64_t t9 = 1877551LL;

	t9 = ((x613+(x614^x615))>>x616);

	if (t9 != 4294967295LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x673 = UINT64_MAX;
	int64_t x675 = INT64_MIN;
	int8_t x676 = 3;
	static volatile uint64_t t10 = 151321747078571898LLU;

	t10 = ((x673+(x674^x675))>>x676);

	if (t10 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x698 = UINT32_MAX;
	static uint32_t x699 = 33U;
	static int8_t x700 = 30;
	uint32_t t11 = 226043019U;

	t11 = ((x697+(x698^x699))>>x700);

	if (t11 != 3U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x781 = INT32_MAX;
	volatile int32_t x782 = INT32_MAX;
	int64_t x783 = 48LL;
	int64_t t12 = -30078798LL;

	t12 = ((x781+(x782^x783))>>x784);

	if (t12 != 536870905LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x809 = UINT64_MAX;
	static int64_t x810 = -4LL;
	uint64_t x811 = 735LLU;

	t13 = ((x809+(x810^x811))>>x812);

	if (t13 != 16777215LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x813 = INT16_MIN;
	int64_t x814 = -24772888046426LL;
	int8_t x815 = -2;
	uint8_t x816 = 28U;
	volatile int64_t t14 = 29488LL;

	t14 = ((x813+(x814^x815))>>x816);

	if (t14 != 92286LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x841 = 5000LLU;
	volatile int8_t x842 = INT8_MIN;
	int16_t x844 = 1;

	t15 = ((x841+(x842^x843))>>x844);

	if (t15 != 1073744260LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x865 = 2401000844LLU;
	int16_t x866 = INT16_MAX;
	int8_t x867 = -1;
	volatile int16_t x868 = 1;
	volatile uint64_t t16 = 3887337LLU;

	t16 = ((x865+(x866^x867))>>x868);

	if (t16 != 1200484038LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x898 = -2679647612330883480LL;
	volatile int16_t x899 = -109;
	volatile int64_t t17 = -5272574543311LL;

	t17 = ((x897+(x898^x899))>>x900);

	if (t17 != 83738987885340115LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1066 = INT16_MIN;
	int8_t x1067 = INT8_MAX;

	t18 = ((x1065+(x1066^x1067))>>x1068);

	if (t18 != 33553921) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x1085 = 52;
	int64_t x1086 = 7061LL;
	static uint8_t x1087 = 5U;
	volatile uint8_t x1088 = 0U;
	volatile int64_t t19 = 999627LL;

	t19 = ((x1085+(x1086^x1087))>>x1088);

	if (t19 != 7108LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1097 = INT32_MIN;
	volatile uint16_t x1098 = 2U;
	static int64_t x1099 = INT64_MAX;
	static int64_t x1100 = 0LL;

	t20 = ((x1097+(x1098^x1099))>>x1100);

	if (t20 != 9223372034707292157LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1121 = UINT16_MAX;
	uint8_t x1122 = 7U;
	volatile uint32_t x1123 = 2583U;
	uint32_t t21 = 188357U;

	t21 = ((x1121+(x1122^x1123))>>x1124);

	if (t21 != 532U) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x1153 = INT64_MAX;
	int8_t x1154 = -1;
	int16_t x1155 = INT16_MAX;
	volatile int64_t t22 = -7377053858971LL;

	t22 = ((x1153+(x1154^x1155))>>x1156);

	if (t22 != 2097151LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x1157 = UINT8_MAX;
	uint64_t x1158 = 279LLU;
	int64_t x1159 = INT64_MIN;
	uint8_t x1160 = 18U;
	volatile uint64_t t23 = 946745997692756743LLU;

	t23 = ((x1157+(x1158^x1159))>>x1160);

	if (t23 != 35184372088832LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x1203 = 61755517U;
	volatile int64_t t24 = 2521406950411509579LL;

	t24 = ((x1201+(x1202^x1203))>>x1204);

	if (t24 != 274877906942LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x1241 = UINT64_MAX;
	static int32_t x1242 = -1;
	int64_t x1243 = -1LL;
	static uint8_t x1244 = 1U;
	uint64_t t25 = 47329LLU;

	t25 = ((x1241+(x1242^x1243))>>x1244);

	if (t25 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x1349 = 9040U;
	volatile int32_t x1350 = INT32_MIN;
	int16_t x1351 = INT16_MIN;
	volatile uint8_t x1352 = 23U;

	t26 = ((x1349+(x1350^x1351))>>x1352);

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1360 = 0LLU;
	static uint64_t t27 = 2854LLU;

	t27 = ((x1357+(x1358^x1359))>>x1360);

	if (t27 != 45067906203998115LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1361 = 12;
	volatile uint8_t x1362 = 1U;
	uint8_t x1364 = 11U;

	t28 = ((x1361+(x1362^x1363))>>x1364);

	if (t28 != 98U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1377 = INT32_MAX;
	uint32_t x1378 = 104U;
	int8_t x1379 = 4;
	volatile uint16_t x1380 = 6U;
	uint32_t t29 = 1946444269U;

	t29 = ((x1377+(x1378^x1379))>>x1380);

	if (t29 != 33554433U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1421 = -1LL;
	int8_t x1422 = 1;
	uint64_t x1423 = 2386885105423536LLU;
	uint16_t x1424 = 3U;
	uint64_t t30 = 17LLU;

	t30 = ((x1421+(x1422^x1423))>>x1424);

	if (t30 != 298360638177942LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1445 = 3U;
	int64_t x1448 = 12LL;
	volatile int32_t t31 = 0;

	t31 = ((x1445+(x1446^x1447))>>x1448);

	if (t31 != 524287) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1479 = -31071607954583LL;
	uint8_t x1480 = 3U;
	static volatile int64_t t32 = 66257912926747127LL;

	t32 = ((x1477+(x1478^x1479))>>x1480);

	if (t32 != 1152917620655852652LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1489 = 4U;
	static int32_t x1490 = 56044810;
	int8_t x1491 = INT8_MIN;
	uint32_t x1492 = 3U;
	volatile uint32_t t33 = 234385U;

	t33 = ((x1489+(x1490^x1491))>>x1492);

	if (t33 != 529865297U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1542 = 805957820686803109LLU;
	int8_t x1544 = 1;
	uint64_t t34 = 26754LLU;

	t34 = ((x1541+(x1542^x1543))>>x1544);

	if (t34 != 8820393126511374194LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1609 = INT32_MIN;
	int8_t x1610 = 40;
	uint64_t x1611 = UINT64_MAX;
	static uint32_t x1612 = 1U;
	volatile uint64_t t35 = 42501147LLU;

	t35 = ((x1609+(x1610^x1611))>>x1612);

	if (t35 != 9223372035781033963LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1658 = 37229078524LLU;
	int64_t x1659 = INT64_MIN;
	uint8_t x1660 = 7U;
	volatile uint64_t t36 = 10275486280LLU;

	t36 = ((x1657+(x1658^x1659))>>x1660);

	if (t36 != 72057594328780112LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1701 = 1;
	static int32_t x1702 = INT32_MIN;
	uint32_t t37 = 3U;

	t37 = ((x1701+(x1702^x1703))>>x1704);

	if (t37 != 256U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x1718 = 52300660LLU;
	int64_t x1719 = INT64_MAX;
	volatile uint16_t x1720 = 0U;

	t38 = ((x1717+(x1718^x1719))>>x1720);

	if (t38 != 9223372034654991499LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1761 = UINT32_MAX;
	static int8_t x1762 = INT8_MIN;
	int8_t x1763 = 47;
	volatile uint32_t t39 = 1870U;

	t39 = ((x1761+(x1762^x1763))>>x1764);

	if (t39 != 268435450U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1917 = -1;
	volatile int64_t x1919 = INT64_MAX;
	uint64_t t40 = 15779405489187LLU;

	t40 = ((x1917+(x1918^x1919))>>x1920);

	if (t40 != 144045030253991378LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1953 = 37401U;
	volatile uint8_t x1954 = UINT8_MAX;
	static uint64_t x1955 = 29812LLU;
	volatile uint8_t x1956 = 9U;

	t41 = ((x1953+(x1954^x1955))>>x1956);

	if (t41 != 131LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x2081 = UINT64_MAX;
	uint8_t x2082 = 3U;
	uint64_t x2083 = 6834342038LLU;
	static int16_t x2084 = 0;
	volatile uint64_t t42 = 1440400747843819319LLU;

	t42 = ((x2081+(x2082^x2083))>>x2084);

	if (t42 != 6834342036LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x2201 = 7179LLU;
	int64_t x2202 = INT64_MAX;
	int8_t x2203 = -43;
	int8_t x2204 = 47;
	uint64_t t43 = 726099157938010953LLU;

	t43 = ((x2201+(x2202^x2203))>>x2204);

	if (t43 != 65536LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x2239 = INT64_MIN;
	volatile uint64_t x2240 = 4LLU;
	uint64_t t44 = 1824459682864LLU;

	t44 = ((x2237+(x2238^x2239))>>x2240);

	if (t44 != 576460752303444888LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2271 = INT32_MAX;
	int32_t t45 = 299150442;

	t45 = ((x2269+(x2270^x2271))>>x2272);

	if (t45 != 1073709183) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2373 = -1LL;
	int16_t x2374 = -1;
	int16_t x2375 = INT16_MIN;
	int8_t x2376 = 11;

	t46 = ((x2373+(x2374^x2375))>>x2376);

	if (t46 != 15LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x2378 = -1LL;
	int64_t x2379 = -1LL;
	int8_t x2380 = 12;
	volatile int64_t t47 = 3140344806LL;

	t47 = ((x2377+(x2378^x2379))>>x2380);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2441 = UINT16_MAX;
	uint8_t x2442 = 46U;
	int8_t x2444 = 17;
	volatile uint64_t t48 = 1994634000LLU;

	t48 = ((x2441+(x2442^x2443))>>x2444);

	if (t48 != 12005379683743LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x2485 = 86LL;
	int64_t x2486 = 6LL;
	static int32_t x2488 = 0;
	int64_t t49 = -53007LL;

	t49 = ((x2485+(x2486^x2487))>>x2488);

	if (t49 != 65615LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2502 = 2;
	int32_t x2503 = INT32_MAX;
	uint16_t x2504 = 6U;
	uint32_t t50 = 1021630U;

	t50 = ((x2501+(x2502^x2503))>>x2504);

	if (t50 != 33555359U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2509 = -12767719;
	volatile int64_t x2510 = INT64_MIN;
	uint64_t x2511 = 1LLU;
	uint16_t x2512 = 7U;
	uint64_t t51 = 133799808208LLU;

	t51 = ((x2509+(x2510^x2511))>>x2512);

	if (t51 != 72057594037828188LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x2637 = 125U;
	uint8_t x2638 = 1U;
	volatile int8_t x2639 = -1;
	uint32_t t52 = 96U;

	t52 = ((x2637+(x2638^x2639))>>x2640);

	if (t52 != 7U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2649 = -1;
	uint32_t x2650 = 2465U;
	int64_t x2651 = INT64_MAX;
	uint16_t x2652 = 43U;
	volatile int64_t t53 = -2654LL;

	t53 = ((x2649+(x2650^x2651))>>x2652);

	if (t53 != 1048575LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2686 = INT32_MIN;
	int16_t x2687 = 26;
	int16_t x2688 = 8;
	volatile int32_t t54 = -1934193;

	t54 = ((x2685+(x2686^x2687))>>x2688);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2801 = -19;
	static int8_t x2802 = -1;
	static volatile int16_t x2803 = INT16_MIN;

	t55 = ((x2801+(x2802^x2803))>>x2804);

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2805 = 8U;
	volatile uint64_t x2806 = UINT64_MAX;
	static uint16_t x2808 = 1U;
	uint64_t t56 = 4360465270412LLU;

	t56 = ((x2805+(x2806^x2807))>>x2808);

	if (t56 != 67LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2862 = -1433;
	static uint16_t x2864 = 1U;
	static int32_t t57 = 119;

	t57 = ((x2861+(x2862^x2863))>>x2864);

	if (t57 != 15666) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2957 = -1LL;
	int32_t x2958 = INT32_MIN;
	volatile int32_t x2959 = -118931;
	int8_t x2960 = 14;
	int64_t t58 = -17LL;

	t58 = ((x2957+(x2958^x2959))>>x2960);

	if (t58 != 131064LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x2961 = UINT32_MAX;
	int32_t x2962 = 161967;
	uint32_t x2963 = 6U;
	static uint32_t t59 = 38238029U;

	t59 = ((x2961+(x2962^x2963))>>x2964);

	if (t59 != 2530U) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x2989 = 0;
	int64_t x2990 = INT64_MAX;
	uint16_t x2991 = 26U;
	static volatile int16_t x2992 = 29;
	volatile int64_t t60 = 2684465869LL;

	t60 = ((x2989+(x2990^x2991))>>x2992);

	if (t60 != 17179869183LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x3013 = -1;
	uint16_t x3015 = UINT16_MAX;
	uint8_t x3016 = 1U;

	t61 = ((x3013+(x3014^x3015))>>x3016);

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3017 = INT32_MIN;
	int64_t x3019 = INT64_MAX;
	int64_t x3020 = 2LL;
	int64_t t62 = 229946387874854715LL;

	t62 = ((x3017+(x3018^x3019))>>x3020);

	if (t62 != 2305843008676823039LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3053 = 349185192234LL;
	int8_t x3054 = INT8_MIN;
	uint8_t x3056 = 13U;

	t63 = ((x3053+(x3054^x3055))>>x3056);

	if (t63 != 42887289LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x3134 = INT16_MIN;
	uint16_t x3135 = 3U;
	volatile int8_t x3136 = 3;
	volatile int32_t t64 = 1;

	t64 = ((x3133+(x3134^x3135))>>x3136);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3157 = UINT64_MAX;
	int32_t x3158 = INT32_MAX;
	volatile uint64_t x3159 = UINT64_MAX;
	static uint8_t x3160 = 7U;
	uint64_t t65 = 0LLU;

	t65 = ((x3157+(x3158^x3159))>>x3160);

	if (t65 != 144115188059078655LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x3173 = 0U;
	int32_t x3174 = INT32_MIN;
	uint64_t x3175 = 13893203LLU;
	uint8_t x3176 = 5U;
	static volatile uint64_t t66 = 299LLU;

	t66 = ((x3173+(x3174^x3175))>>x3176);

	if (t66 != 576460752236748786LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3185 = INT8_MAX;
	static uint64_t x3186 = 33393586LLU;
	uint16_t x3187 = 3U;
	volatile uint64_t t67 = 1096806475LLU;

	t67 = ((x3185+(x3186^x3187))>>x3188);

	if (t67 != 16305LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3189 = INT8_MAX;
	volatile int8_t x3190 = -2;
	uint32_t x3191 = 10779U;
	int8_t x3192 = 7;
	volatile uint32_t t68 = 787390971U;

	t68 = ((x3189+(x3190^x3191))>>x3192);

	if (t68 != 33554348U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3210 = 1636773812471631LLU;
	int64_t x3211 = INT64_MIN;
	volatile uint64_t t69 = 119726991193018304LLU;

	t69 = ((x3209+(x3210^x3211))>>x3212);

	if (t69 != 9225008810667247438LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x3218 = UINT64_MAX;
	volatile uint8_t x3219 = UINT8_MAX;
	static uint64_t t70 = 442654LLU;

	t70 = ((x3217+(x3218^x3219))>>x3220);

	if (t70 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3253 = 4558;
	volatile uint8_t x3254 = 0U;
	static uint64_t x3255 = 3131783039056105317LLU;
	int8_t x3256 = 1;
	uint64_t t71 = 130995999LLU;

	t71 = ((x3253+(x3254^x3255))>>x3256);

	if (t71 != 1565891519528054937LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3269 = INT16_MAX;
	uint8_t x3270 = UINT8_MAX;
	volatile int32_t t72 = -3;

	t72 = ((x3269+(x3270^x3271))>>x3272);

	if (t72 != 32638) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3278 = INT16_MIN;
	static int32_t x3279 = -1;
	static int16_t x3280 = 27;

	t73 = ((x3277+(x3278^x3279))>>x3280);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x3290 = 3;
	uint8_t x3292 = 0U;
	volatile int64_t t74 = -1549LL;

	t74 = ((x3289+(x3290^x3291))>>x3292);

	if (t74 != 2147431012LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3557 = -1;
	volatile int8_t x3558 = 1;
	uint64_t x3559 = UINT64_MAX;
	int8_t x3560 = 4;
	uint64_t t75 = 45LLU;

	t75 = ((x3557+(x3558^x3559))>>x3560);

	if (t75 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3665 = INT64_MAX;
	int16_t x3666 = INT16_MIN;
	volatile uint16_t x3667 = 12U;
	uint32_t x3668 = 0U;

	t76 = ((x3665+(x3666^x3667))>>x3668);

	if (t76 != 9223372036854743051LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x3701 = UINT32_MAX;
	volatile int16_t x3702 = -4610;
	static int8_t x3703 = INT8_MIN;
	uint64_t x3704 = 6LLU;
	volatile uint32_t t77 = 446464U;

	t77 = ((x3701+(x3702^x3703))>>x3704);

	if (t77 != 73U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3714 = -10535941LL;
	int8_t x3715 = INT8_MIN;
	uint8_t x3716 = 8U;

	t78 = ((x3713+(x3714^x3715))>>x3716);

	if (t78 != 41156LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3769 = 1U;
	static uint64_t x3770 = 1835LLU;
	static uint8_t x3772 = 12U;

	t79 = ((x3769+(x3770^x3771))>>x3772);

	if (t79 != 4503599627370495LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x3773 = 80200362U;
	int64_t x3775 = INT64_MAX;
	static int16_t x3776 = 25;

	t80 = ((x3773+(x3774^x3775))>>x3776);

	if (t80 != 2LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3785 = 1LL;
	uint8_t x3786 = UINT8_MAX;
	static int64_t x3788 = 0LL;
	int64_t t81 = 3943930LL;

	t81 = ((x3785+(x3786^x3787))>>x3788);

	if (t81 != 254LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3805 = -1;
	static int8_t x3806 = INT8_MAX;
	uint64_t x3807 = 121LLU;
	volatile uint32_t x3808 = 55U;
	static uint64_t t82 = 15LLU;

	t82 = ((x3805+(x3806^x3807))>>x3808);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3809 = UINT64_MAX;
	int32_t x3810 = -1;
	static uint64_t x3811 = 1021LLU;
	uint16_t x3812 = 0U;
	volatile uint64_t t83 = 1607010429204LLU;

	t83 = ((x3809+(x3810^x3811))>>x3812);

	if (t83 != 18446744073709550593LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x3877 = -1;
	int64_t x3878 = INT64_MIN;
	int16_t x3879 = -1;
	int16_t x3880 = 4;
	static volatile int64_t t84 = 55160876754515LL;

	t84 = ((x3877+(x3878^x3879))>>x3880);

	if (t84 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x3994 = -1905LL;
	int64_t x3995 = INT64_MIN;
	uint64_t t85 = 16842LLU;

	t85 = ((x3993+(x3994^x3995))>>x3996);

	if (t85 != 9223372036854773902LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x4101 = 1U;
	int8_t x4102 = -1;
	volatile int32_t t86 = 360;

	t86 = ((x4101+(x4102^x4103))>>x4104);

	if (t86 != 16384) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4173 = UINT64_MAX;
	uint64_t t87 = 2192507258888665LLU;

	t87 = ((x4173+(x4174^x4175))>>x4176);

	if (t87 != 7LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4217 = INT64_MIN;
	volatile uint64_t x4218 = 1268861LLU;
	uint64_t x4219 = 100892834277385LLU;
	uint8_t x4220 = 34U;
	uint64_t t88 = 202790395439537599LLU;

	t88 = ((x4217+(x4218^x4219))>>x4220);

	if (t88 != 536876784LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4357 = UINT64_MAX;
	int8_t x4358 = -1;
	int16_t x4359 = INT16_MIN;
	static uint64_t t89 = 3495922122682408LLU;

	t89 = ((x4357+(x4358^x4359))>>x4360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4486 = INT8_MIN;
	uint64_t x4487 = 485134552784452061LLU;
	int8_t x4488 = 1;
	uint64_t t90 = 1333755LLU;

	t90 = ((x4485+(x4486^x4487))>>x4488);

	if (t90 != 8981783404996907954LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x4553 = UINT32_MAX;
	static int16_t x4554 = -1;
	uint32_t x4555 = 66809038U;
	static int8_t x4556 = 16;
	uint32_t t91 = 5106013U;

	t91 = ((x4553+(x4554^x4555))>>x4556);

	if (t91 != 64516U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4569 = INT32_MAX;
	volatile uint8_t x4570 = UINT8_MAX;
	int8_t x4571 = -1;
	volatile int8_t x4572 = 4;

	t92 = ((x4569+(x4570^x4571))>>x4572);

	if (t92 != 134217711) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x4669 = 27788U;
	volatile int32_t x4670 = -1;
	uint32_t x4671 = 62U;
	uint8_t x4672 = 1U;
	volatile uint32_t t93 = 14871U;

	t93 = ((x4669+(x4670^x4671))>>x4672);

	if (t93 != 13862U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4678 = 7U;
	int64_t x4679 = INT64_MAX;
	static uint64_t t94 = 825619418846810LLU;

	t94 = ((x4677+(x4678^x4679))>>x4680);

	if (t94 != 274877906943LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x4689 = 123U;
	static int16_t x4690 = INT16_MIN;
	uint64_t x4691 = 2157118LLU;
	int32_t x4692 = 3;
	static uint64_t t95 = 5488405064LLU;

	t95 = ((x4689+(x4690^x4691))>>x4692);

	if (t95 != 2305843009213427031LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4753 = INT16_MAX;
	int32_t x4754 = -1021696197;
	int32_t t96 = -712253646;

	t96 = ((x4753+(x4754^x4755))>>x4756);

	if (t96 != 127716119) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x4798 = UINT16_MAX;
	static uint16_t x4799 = UINT16_MAX;
	volatile uint8_t x4800 = 10U;
	volatile uint64_t t97 = 113627042882266484LLU;

	t97 = ((x4797+(x4798^x4799))>>x4800);

	if (t97 != 48974LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x4829 = 31303LLU;
	volatile uint64_t x4830 = UINT64_MAX;
	int32_t x4831 = INT32_MIN;
	uint64_t t98 = 33977LLU;

	t98 = ((x4829+(x4830^x4831))>>x4832);

	if (t98 != 2147514950LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x4938 = 1032U;
	static uint16_t x4939 = 85U;
	uint16_t x4940 = 1U;
	static int32_t t99 = 7421;

	t99 = ((x4937+(x4938^x4939))>>x4940);

	if (t99 != 570) { NG(); } else { ; }
	
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

