#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t t0 = 427782922381LLU;
static int64_t t1 = 9737848244LL;
int16_t x112 = 0;
int64_t x190 = INT64_MAX;
int32_t x205 = 112162;
uint32_t x208 = 2U;
static int8_t x368 = 0;
static int32_t t7 = -1;
uint64_t x438 = 17LLU;
uint8_t x474 = UINT8_MAX;
uint16_t x545 = 9U;
volatile int32_t t13 = -23690812;
volatile uint64_t t14 = 8303823905167890735LLU;
int32_t x638 = -366181;
uint64_t x639 = 246757109LLU;
int8_t x782 = INT8_MIN;
uint16_t x835 = 11U;
uint8_t x997 = UINT8_MAX;
int8_t x1000 = 1;
static int32_t t20 = -68;
uint32_t t21 = 3U;
uint16_t x1024 = 18U;
int8_t x1129 = 24;
volatile int16_t x1213 = INT16_MIN;
volatile uint64_t x1227 = 28043726LLU;
uint32_t x1246 = UINT32_MAX;
static uint16_t x1305 = UINT16_MAX;
uint64_t t29 = 174547611LLU;
uint64_t t33 = 177333633844016LLU;
int16_t x1497 = 5;
int8_t x1500 = 0;
volatile int8_t x1553 = -1;
int64_t x1555 = -1LL;
int32_t x1650 = INT32_MAX;
static int8_t x1651 = 5;
int32_t x1795 = -430966;
static volatile int16_t x1805 = -1;
int64_t x1977 = 16126727239LL;
static volatile uint8_t x1980 = 1U;
volatile int64_t t45 = -496LL;
uint8_t x2028 = 4U;
static volatile uint32_t t50 = UINT32_MAX;
int8_t x2294 = -1;
static volatile int64_t t52 = -1LL;
static int8_t x2405 = INT8_MIN;
volatile uint32_t t54 = 136U;
uint32_t x2471 = 40182746U;
int8_t x2503 = INT8_MIN;
static uint32_t x2504 = 16U;
uint32_t x2523 = 126867U;
static volatile uint32_t t59 = 26287U;
int8_t x2565 = INT8_MIN;
int8_t x2566 = 27;
int8_t x2568 = 0;
uint32_t x2614 = UINT32_MAX;
int32_t x2615 = INT32_MAX;
volatile uint32_t t61 = 6U;
int16_t x2747 = -1810;
uint8_t x2748 = 15U;
int16_t x2793 = INT16_MAX;
int8_t x2795 = -1;
uint32_t x2796 = 18U;
uint16_t x2827 = 0U;
uint32_t t67 = 181817204U;
int64_t x2861 = INT64_MIN;
int64_t t68 = -425LL;
int16_t x2942 = -1;
int16_t x3027 = 3;
static int64_t x3053 = -1LL;
uint8_t x3056 = 0U;
volatile int64_t t76 = -84251954701278657LL;
static uint32_t x3081 = UINT32_MAX;
volatile int64_t x3150 = INT64_MIN;
uint64_t x3151 = 881354970924485347LLU;
volatile uint32_t x3152 = 21U;
uint16_t x3217 = UINT16_MAX;
int32_t x3230 = INT32_MIN;
uint32_t x3233 = 0U;
uint16_t x3234 = UINT16_MAX;
uint64_t t83 = 147744LLU;
uint64_t t84 = UINT64_MAX;
int8_t x3379 = INT8_MIN;
uint64_t x3412 = 2LLU;
uint8_t x3421 = 5U;
int64_t x3422 = 10357371943285273LL;
static int8_t x3423 = INT8_MIN;
static int8_t x3477 = 0;
static int64_t t91 = -37LL;
static int8_t x3481 = INT8_MIN;
int16_t x3483 = 1396;
int64_t x3585 = INT64_MIN;
volatile int64_t t94 = 3688900LL;
uint8_t x3698 = UINT8_MAX;
volatile uint32_t x3751 = 143U;
int32_t x3752 = 1;
static uint64_t t97 = 2091742515LLU;
uint64_t t98 = 1031025600507LLU;
static int32_t x3773 = -1;
uint32_t x3776 = 41U;
uint64_t t99 = 133996788225203871LLU;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int64_t x2 = INT64_MAX;
	volatile uint64_t x3 = 113LLU;
	int16_t x4 = 0;

	t0 = (x1^((x2-x3)>>x4));

	if (t0 != 9223372036854775665LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x105 = 71U;
	int64_t x106 = INT64_MAX;
	int8_t x107 = INT8_MAX;
	static int8_t x108 = 2;

	t1 = (x105^((x106-x107)>>x108));

	if (t1 != 2305843009213693863LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x109 = -1;
	volatile int32_t x110 = -1;
	static int8_t x111 = INT8_MIN;
	volatile int32_t t2 = 1;

	t2 = (x109^((x110-x111)>>x112));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x189 = UINT16_MAX;
	int32_t x191 = 52;
	static volatile int32_t x192 = 0;
	volatile int64_t t3 = 20259919448692LL;

	t3 = (x189^((x190-x191)>>x192));

	if (t3 != 9223372036854710324LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x206 = UINT64_MAX;
	volatile uint8_t x207 = UINT8_MAX;
	volatile uint64_t t4 = 2LLU;

	t4 = (x205^((x206-x207)>>x208));

	if (t4 != 4611686018427275746LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x325 = UINT32_MAX;
	volatile uint32_t x326 = 1557868U;
	uint64_t x327 = UINT64_MAX;
	static volatile int16_t x328 = 1;
	static uint64_t t5 = 283131453063375589LLU;

	t5 = (x325^((x326-x327)>>x328));

	if (t5 != 4294188361LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x349 = UINT64_MAX;
	static uint8_t x350 = 0U;
	uint64_t x351 = 4319LLU;
	int32_t x352 = 41;
	static uint64_t t6 = 121LLU;

	t6 = (x349^((x350-x351)>>x352));

	if (t6 != 18446744073701163008LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x365 = 4;
	int32_t x366 = 0;
	volatile int8_t x367 = -4;

	t7 = (x365^((x366-x367)>>x368));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x409 = INT16_MAX;
	int32_t x410 = -3111075;
	static int32_t x411 = INT32_MIN;
	volatile int8_t x412 = 0;
	int32_t t8 = 335;

	t8 = (x409^((x410-x411)>>x412));

	if (t8 != 2144401570) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x437 = INT16_MIN;
	uint16_t x439 = 267U;
	int8_t x440 = 1;
	volatile uint64_t t9 = 1466424627111LLU;

	t9 = (x437^((x438-x439)>>x440));

	if (t9 != 9223372036854808451LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x457 = INT16_MAX;
	volatile uint64_t x458 = UINT64_MAX;
	int16_t x459 = INT16_MIN;
	static uint16_t x460 = 1U;
	uint64_t t10 = 1168782821LLU;

	t10 = (x457^((x458-x459)>>x460));

	if (t10 != 16384LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x473 = INT8_MAX;
	static int32_t x475 = -229495;
	uint16_t x476 = 9U;
	static volatile int32_t t11 = 14798289;

	t11 = (x473^((x474-x475)>>x476));

	if (t11 != 447) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x541 = INT64_MIN;
	uint8_t x542 = UINT8_MAX;
	uint64_t x543 = UINT64_MAX;
	uint64_t x544 = 2LLU;
	volatile uint64_t t12 = 211491059LLU;

	t12 = (x541^((x542-x543)>>x544));

	if (t12 != 9223372036854775872LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x546 = 105U;
	static int8_t x547 = -1;
	static volatile int8_t x548 = 0;

	t13 = (x545^((x546-x547)>>x548));

	if (t13 != 99) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x609 = 503097365U;
	uint64_t x610 = 1117501725211619LLU;
	volatile uint8_t x611 = UINT8_MAX;
	static uint32_t x612 = 37U;

	t14 = (x609^((x610-x611)>>x612));

	if (t14 != 503101399LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x629 = -190589837447780LL;
	volatile uint64_t x630 = 172703777141839451LLU;
	volatile int64_t x631 = -6046975176512LL;
	static uint32_t x632 = 0U;
	volatile uint64_t t15 = 474065239388760LLU;

	t15 = (x629^((x630-x631)>>x632));

	if (t15 != 18274133956712982535LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x637 = 2U;
	volatile int16_t x640 = 0;
	volatile uint64_t t16 = 30045LLU;

	t16 = (x637^((x638-x639)>>x640));

	if (t16 != 18446744073462428324LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x701 = 6U;
	static int64_t x702 = 1621271500LL;
	int16_t x703 = INT16_MIN;
	int64_t x704 = 11LL;
	volatile int64_t t17 = 1814816569762159163LL;

	t17 = (x701^((x702-x703)>>x704));

	if (t17 != 791650LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x781 = 106;
	volatile int64_t x783 = INT64_MIN;
	static uint8_t x784 = 2U;
	int64_t t18 = 3552276917LL;

	t18 = (x781^((x782-x783)>>x784));

	if (t18 != 2305843009213693834LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x833 = 8;
	static int64_t x834 = INT64_MAX;
	int8_t x836 = 0;
	static int64_t t19 = -381679923214LL;

	t19 = (x833^((x834-x835)>>x836));

	if (t19 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x998 = INT8_MAX;
	volatile int32_t x999 = -29154;

	t20 = (x997^((x998-x999)>>x1000));

	if (t20 != 14799) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1005 = 21;
	volatile uint32_t x1006 = UINT32_MAX;
	static volatile int8_t x1007 = INT8_MIN;
	volatile uint32_t x1008 = 0U;

	t21 = (x1005^((x1006-x1007)>>x1008));

	if (t21 != 106U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1021 = -15;
	uint32_t x1022 = 125U;
	uint32_t x1023 = 10062387U;
	static uint32_t t22 = 800412U;

	t22 = (x1021^((x1022-x1023)>>x1024));

	if (t22 != 4294950952U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1073 = INT16_MIN;
	uint16_t x1074 = 6286U;
	static uint64_t x1075 = 3LLU;
	volatile int8_t x1076 = 0;
	static uint64_t t23 = 30951410003LLU;

	t23 = (x1073^((x1074-x1075)>>x1076));

	if (t23 != 18446744073709525131LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x1130 = 43U;
	uint32_t x1131 = 6095691U;
	static uint8_t x1132 = 6U;
	volatile uint32_t t24 = 4099U;

	t24 = (x1129^((x1130-x1131)>>x1132));

	if (t24 != 67013611U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1149 = INT8_MAX;
	int8_t x1150 = INT8_MAX;
	static uint8_t x1151 = 13U;
	volatile int8_t x1152 = 1;
	static volatile int32_t t25 = 701;

	t25 = (x1149^((x1150-x1151)>>x1152));

	if (t25 != 70) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1214 = 65414334LLU;
	int8_t x1215 = INT8_MAX;
	uint16_t x1216 = 16U;
	uint64_t t26 = 565831958882031LLU;

	t26 = (x1213^((x1214-x1215)>>x1216));

	if (t26 != 18446744073709519846LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x1225 = INT16_MIN;
	volatile int64_t x1226 = 3787069134LL;
	static uint32_t x1228 = 18U;
	uint64_t t27 = 3670778242277204LLU;

	t27 = (x1225^((x1226-x1227)>>x1228));

	if (t27 != 18446744073709533187LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1245 = INT32_MAX;
	static int8_t x1247 = INT8_MIN;
	volatile uint16_t x1248 = 6U;
	volatile uint32_t t28 = 392U;

	t28 = (x1245^((x1246-x1247)>>x1248));

	if (t28 != 2147483646U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x1306 = INT16_MAX;
	uint64_t x1307 = UINT64_MAX;
	int8_t x1308 = 1;

	t29 = (x1305^((x1306-x1307)>>x1308));

	if (t29 != 49151LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1349 = -10;
	volatile int16_t x1350 = INT16_MAX;
	int8_t x1351 = INT8_MAX;
	volatile uint16_t x1352 = 6U;
	volatile int32_t t30 = 952617285;

	t30 = (x1349^((x1350-x1351)>>x1352));

	if (t30 != -504) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1373 = -1;
	int64_t x1374 = -1LL;
	static int16_t x1375 = INT16_MIN;
	uint8_t x1376 = 1U;
	static int64_t t31 = 44917995537864LL;

	t31 = (x1373^((x1374-x1375)>>x1376));

	if (t31 != -16384LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1473 = INT16_MIN;
	volatile uint64_t x1474 = 1139LLU;
	int32_t x1475 = INT32_MIN;
	static uint8_t x1476 = 21U;
	static volatile uint64_t t32 = 971778090990923253LLU;

	t32 = (x1473^((x1474-x1475)>>x1476));

	if (t32 != 18446744073709519872LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1493 = INT32_MAX;
	uint64_t x1494 = 0LLU;
	int8_t x1495 = -1;
	uint16_t x1496 = 1U;

	t33 = (x1493^((x1494-x1495)>>x1496));

	if (t33 != 2147483647LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x1498 = -1006111;
	uint32_t x1499 = 3438U;
	uint32_t t34 = 64131956U;

	t34 = (x1497^((x1498-x1499)>>x1500));

	if (t34 != 4293957750U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x1509 = 1422044935U;
	int64_t x1510 = 7115LL;
	volatile int16_t x1511 = 1;
	uint8_t x1512 = 36U;
	volatile int64_t t35 = 0LL;

	t35 = (x1509^((x1510-x1511)>>x1512));

	if (t35 != 1422044935LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x1554 = INT16_MAX;
	volatile uint8_t x1556 = 28U;
	static int64_t t36 = -59269LL;

	t36 = (x1553^((x1554-x1555)>>x1556));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x1581 = 7328869509766LLU;
	static uint16_t x1582 = 58U;
	volatile int8_t x1583 = -1;
	uint8_t x1584 = 3U;
	uint64_t t37 = 10190610012136LLU;

	t37 = (x1581^((x1582-x1583)>>x1584));

	if (t37 != 7328869509761LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1629 = 1U;
	int64_t x1630 = -1LL;
	int16_t x1631 = -13654;
	int64_t x1632 = 0LL;
	volatile int64_t t38 = -35387763026591755LL;

	t38 = (x1629^((x1630-x1631)>>x1632));

	if (t38 != 13652LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1649 = INT32_MIN;
	uint32_t x1652 = 0U;
	int32_t t39 = 16755282;

	t39 = (x1649^((x1650-x1651)>>x1652));

	if (t39 != -6) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1741 = 17793560336992559LLU;
	int64_t x1742 = 18950322809LL;
	int16_t x1743 = 20;
	static uint8_t x1744 = 1U;
	volatile uint64_t t40 = 203LLU;

	t40 = (x1741^((x1742-x1743)>>x1744));

	if (t40 != 17793552095278109LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1793 = UINT32_MAX;
	int8_t x1794 = INT8_MAX;
	int16_t x1796 = 9;
	uint32_t t41 = 2789097U;

	t41 = (x1793^((x1794-x1795)>>x1796));

	if (t41 != 4294966454U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1806 = -1;
	uint32_t x1807 = 413552U;
	volatile uint16_t x1808 = 1U;
	volatile uint32_t t42 = 7572676U;

	t42 = (x1805^((x1806-x1807)>>x1808));

	if (t42 != 2147690424U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x1841 = 689218833LL;
	uint32_t x1842 = 3828U;
	uint64_t x1843 = UINT64_MAX;
	volatile uint8_t x1844 = 10U;
	uint64_t t43 = 197414237464906610LLU;

	t43 = (x1841^((x1842-x1843)>>x1844));

	if (t43 != 689218834LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x1969 = 11;
	int32_t x1970 = -1;
	int64_t x1971 = INT64_MIN;
	uint32_t x1972 = 35U;
	static int64_t t44 = 79203LL;

	t44 = (x1969^((x1970-x1971)>>x1972));

	if (t44 != 268435444LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x1978 = 163300082LL;
	int8_t x1979 = INT8_MAX;

	t45 = (x1977^((x1978-x1979)>>x1980));

	if (t45 != 16205198718LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1985 = INT16_MIN;
	int32_t x1986 = -1;
	int64_t x1987 = -1LL;
	int8_t x1988 = 1;
	int64_t t46 = -246LL;

	t46 = (x1985^((x1986-x1987)>>x1988));

	if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2025 = -1;
	uint64_t x2026 = UINT64_MAX;
	int16_t x2027 = INT16_MIN;
	uint64_t t47 = 1059LLU;

	t47 = (x2025^((x2026-x2027)>>x2028));

	if (t47 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x2069 = 13;
	int16_t x2070 = 7491;
	uint64_t x2071 = UINT64_MAX;
	int8_t x2072 = 55;
	uint64_t t48 = 45187018536572LLU;

	t48 = (x2069^((x2070-x2071)>>x2072));

	if (t48 != 13LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2185 = -15;
	volatile int16_t x2186 = 1;
	volatile int16_t x2187 = INT16_MIN;
	volatile uint16_t x2188 = 31U;
	static int32_t t49 = -40579;

	t49 = (x2185^((x2186-x2187)>>x2188));

	if (t49 != -15) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2237 = -1;
	volatile int32_t x2238 = -1;
	uint32_t x2239 = UINT32_MAX;
	volatile uint8_t x2240 = 7U;

	t50 = (x2237^((x2238-x2239)>>x2240));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2249 = 1U;
	uint8_t x2250 = 0U;
	static int16_t x2251 = -209;
	uint64_t x2252 = 3LLU;
	volatile int32_t t51 = -1509;

	t51 = (x2249^((x2250-x2251)>>x2252));

	if (t51 != 27) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2293 = 769798U;
	int64_t x2295 = -1LL;
	uint8_t x2296 = 7U;

	t52 = (x2293^((x2294-x2295)>>x2296));

	if (t52 != 769798LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2377 = -1;
	int16_t x2378 = -69;
	int32_t x2379 = INT32_MIN;
	static int8_t x2380 = 0;
	static volatile int32_t t53 = -12282;

	t53 = (x2377^((x2378-x2379)>>x2380));

	if (t53 != -2147483580) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2406 = 16716273U;
	int16_t x2407 = INT16_MIN;
	uint16_t x2408 = 14U;

	t54 = (x2405^((x2406-x2407)>>x2408));

	if (t54 != 4294966398U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x2469 = INT64_MIN;
	uint32_t x2470 = UINT32_MAX;
	volatile uint8_t x2472 = 2U;
	volatile int64_t t55 = -883636LL;

	t55 = (x2469^((x2470-x2471)>>x2472));

	if (t55 != -9223372035791079671LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2493 = 10825U;
	uint32_t x2494 = UINT32_MAX;
	volatile int64_t x2495 = -2LL;
	int8_t x2496 = 33;
	int64_t t56 = 0LL;

	t56 = (x2493^((x2494-x2495)>>x2496));

	if (t56 != 10825LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x2501 = -1;
	int8_t x2502 = -1;
	volatile int32_t t57 = 9159106;

	t57 = (x2501^((x2502-x2503)>>x2504));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2505 = -1;
	int8_t x2506 = -1;
	uint32_t x2507 = 9511818U;
	static uint8_t x2508 = 6U;
	uint32_t t58 = 13108U;

	t58 = (x2505^((x2506-x2507)>>x2508));

	if (t58 != 4228007054U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x2521 = -1;
	int8_t x2522 = 1;
	int32_t x2524 = 14;

	t59 = (x2521^((x2522-x2523)>>x2524));

	if (t59 != 4294705159U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2567 = -1;
	volatile int32_t t60 = -1097;

	t60 = (x2565^((x2566-x2567)>>x2568));

	if (t60 != -100) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2613 = -6;
	int64_t x2616 = 0LL;

	t61 = (x2613^((x2614-x2615)>>x2616));

	if (t61 != 2147483642U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2741 = INT32_MIN;
	volatile uint64_t x2742 = UINT64_MAX;
	int64_t x2743 = -1LL;
	uint8_t x2744 = 1U;
	volatile uint64_t t62 = 11434713LLU;

	t62 = (x2741^((x2742-x2743)>>x2744));

	if (t62 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2745 = INT64_MIN;
	int32_t x2746 = -1;
	int64_t t63 = INT64_MIN;

	t63 = (x2745^((x2746-x2747)>>x2748));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2794 = -1;
	int32_t t64 = -1;

	t64 = (x2793^((x2794-x2795)>>x2796));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2817 = -1LL;
	volatile uint32_t x2818 = 46916U;
	volatile int16_t x2819 = -425;
	uint8_t x2820 = 7U;
	volatile int64_t t65 = 2086750893586LL;

	t65 = (x2817^((x2818-x2819)>>x2820));

	if (t65 != -370LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2825 = INT64_MIN;
	volatile uint64_t x2826 = 3166077LLU;
	int8_t x2828 = 29;
	uint64_t t66 = 18996247521325765LLU;

	t66 = (x2825^((x2826-x2827)>>x2828));

	if (t66 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x2849 = 1069677090U;
	int8_t x2850 = INT8_MIN;
	volatile int8_t x2851 = INT8_MIN;
	static uint8_t x2852 = 0U;

	t67 = (x2849^((x2850-x2851)>>x2852));

	if (t67 != 1069677090U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2862 = 0U;
	volatile int16_t x2863 = INT16_MIN;
	int32_t x2864 = 1;

	t68 = (x2861^((x2862-x2863)>>x2864));

	if (t68 != -9223372036854759424LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2877 = -1;
	volatile uint32_t x2878 = 7U;
	static uint16_t x2879 = UINT16_MAX;
	uint8_t x2880 = 0U;
	static uint32_t t69 = 9U;

	t69 = (x2877^((x2878-x2879)>>x2880));

	if (t69 != 65527U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2885 = UINT32_MAX;
	int64_t x2886 = INT64_MAX;
	int8_t x2887 = INT8_MAX;
	int32_t x2888 = 0;
	static int64_t t70 = 403898789915LL;

	t70 = (x2885^((x2886-x2887)>>x2888));

	if (t70 != 9223372032559808639LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2929 = 26;
	uint64_t x2930 = 7319566388597724LLU;
	uint16_t x2931 = UINT16_MAX;
	static volatile int32_t x2932 = 2;
	uint64_t t71 = 61872955LLU;

	t71 = (x2929^((x2930-x2931)>>x2932));

	if (t71 != 1829891597133037LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x2941 = INT64_MAX;
	volatile uint64_t x2943 = 98222078091038276LLU;
	int8_t x2944 = 44;
	volatile uint64_t t72 = 4391207660279LLU;

	t72 = (x2941^((x2942-x2943)>>x2944));

	if (t72 != 9223372036853732815LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2985 = INT32_MIN;
	static int32_t x2986 = 25359886;
	static int16_t x2987 = -314;
	uint64_t x2988 = 0LLU;
	static int32_t t73 = -17;

	t73 = (x2985^((x2986-x2987)>>x2988));

	if (t73 != -2122123448) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x3025 = UINT8_MAX;
	uint16_t x3026 = 17837U;
	static uint8_t x3028 = 5U;
	volatile int32_t t74 = 54;

	t74 = (x3025^((x3026-x3027)>>x3028));

	if (t74 != 722) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3033 = INT64_MAX;
	int8_t x3034 = INT8_MAX;
	volatile int64_t x3035 = 114LL;
	uint8_t x3036 = 0U;
	volatile int64_t t75 = -908617079833LL;

	t75 = (x3033^((x3034-x3035)>>x3036));

	if (t75 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3054 = 15218U;
	uint16_t x3055 = 47U;

	t76 = (x3053^((x3054-x3055)>>x3056));

	if (t76 != -15172LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3082 = -86;
	volatile int64_t x3083 = INT64_MIN;
	uint8_t x3084 = 2U;
	volatile int64_t t77 = 4293845124099348LL;

	t77 = (x3081^((x3082-x3083)>>x3084));

	if (t77 != 2305843004918726677LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3149 = 721U;
	static volatile uint64_t t78 = 4242313208LLU;

	t78 = (x3149^((x3150-x3151)>>x3152));

	if (t78 != 3977783710841LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x3185 = 1;
	uint32_t x3186 = 265012458U;
	int16_t x3187 = INT16_MAX;
	int16_t x3188 = 0;
	uint32_t t79 = 2635U;

	t79 = (x3185^((x3186-x3187)>>x3188));

	if (t79 != 264979690U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x3218 = 74LLU;
	int32_t x3219 = INT32_MIN;
	uint8_t x3220 = 20U;
	static volatile uint64_t t80 = 10250850872846LLU;

	t80 = (x3217^((x3218-x3219)>>x3220));

	if (t80 != 63487LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x3229 = 124U;
	int64_t x3231 = -852961288265LL;
	uint8_t x3232 = 17U;
	int64_t t81 = -8315868465LL;

	t81 = (x3229^((x3230-x3231)>>x3232));

	if (t81 != 6491206LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3235 = -1LL;
	int32_t x3236 = 1;
	int64_t t82 = 6571623462880836LL;

	t82 = (x3233^((x3234-x3235)>>x3236));

	if (t82 != 32768LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x3305 = 58727140361LLU;
	int64_t x3306 = 355639100001941LL;
	uint16_t x3307 = 26926U;
	volatile uint16_t x3308 = 41U;

	t83 = (x3305^((x3306-x3307)>>x3308));

	if (t83 != 58727140520LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3321 = -1LL;
	uint16_t x3322 = 453U;
	uint64_t x3323 = UINT64_MAX;
	static volatile uint8_t x3324 = 29U;

	t84 = (x3321^((x3322-x3323)>>x3324));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x3365 = INT16_MIN;
	uint32_t x3366 = 37862U;
	int16_t x3367 = 1076;
	uint64_t x3368 = 1LLU;
	volatile uint32_t t85 = 0U;

	t85 = (x3365^((x3366-x3367)>>x3368));

	if (t85 != 4294952921U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x3377 = 41U;
	int64_t x3378 = -1LL;
	static uint8_t x3380 = 1U;
	volatile int64_t t86 = 29686110390642517LL;

	t86 = (x3377^((x3378-x3379)>>x3380));

	if (t86 != 22LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x3385 = INT8_MIN;
	static uint64_t x3386 = 360186066999293LLU;
	int64_t x3387 = INT64_MIN;
	volatile uint32_t x3388 = 6U;
	volatile uint64_t t87 = 184203106096450LLU;

	t87 = (x3385^((x3386-x3387)>>x3388));

	if (t87 != 18302623257726398943LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3401 = INT32_MAX;
	volatile int64_t x3402 = INT64_MAX;
	uint32_t x3403 = UINT32_MAX;
	uint16_t x3404 = 44U;
	volatile int64_t t88 = 154904545146931375LL;

	t88 = (x3401^((x3402-x3403)>>x3404));

	if (t88 != 2146959360LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x3409 = UINT16_MAX;
	static int64_t x3410 = 6431854440LL;
	int32_t x3411 = INT32_MIN;
	volatile int64_t t89 = -235579686346626LL;

	t89 = (x3409^((x3410-x3411)>>x3412));

	if (t89 != 2144824357LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x3424 = 6U;
	volatile int64_t t90 = 12LL;

	t90 = (x3421^((x3422-x3423)>>x3424));

	if (t90 != 161833936613839LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3478 = -1;
	int64_t x3479 = INT64_MIN;
	int16_t x3480 = 1;

	t91 = (x3477^((x3478-x3479)>>x3480));

	if (t91 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3482 = 14981;
	static int16_t x3484 = 5;
	volatile int32_t t92 = 0;

	t92 = (x3481^((x3482-x3483)>>x3484));

	if (t92 != -472) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x3537 = UINT64_MAX;
	static int64_t x3538 = 516109163404815410LL;
	static int8_t x3539 = -29;
	uint16_t x3540 = 29U;
	uint64_t t93 = 185886LLU;

	t93 = (x3537^((x3538-x3539)>>x3540));

	if (t93 != 18446744072748223386LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x3586 = 7U;
	int8_t x3587 = INT8_MIN;
	int8_t x3588 = 1;

	t94 = (x3585^((x3586-x3587)>>x3588));

	if (t94 != -9223372036854775741LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3649 = 42U;
	uint64_t x3650 = 91LLU;
	int8_t x3651 = -1;
	volatile int16_t x3652 = 26;
	uint64_t t95 = 526201346LLU;

	t95 = (x3649^((x3650-x3651)>>x3652));

	if (t95 != 42LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3697 = -1901952173LL;
	uint32_t x3699 = UINT32_MAX;
	uint32_t x3700 = 15U;
	int64_t t96 = -300492815305970280LL;

	t96 = (x3697^((x3698-x3699)>>x3700));

	if (t96 != -1901952173LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3749 = UINT64_MAX;
	int16_t x3750 = INT16_MAX;

	t97 = (x3749^((x3750-x3751)>>x3752));

	if (t97 != 18446744073709535303LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x3765 = INT8_MIN;
	volatile uint64_t x3766 = 74561922213244962LLU;
	static int64_t x3767 = 9LL;
	volatile uint16_t x3768 = 0U;

	t98 = (x3765^((x3766-x3767)>>x3768));

	if (t98 != 18372182151496306585LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x3774 = 121409171U;
	uint64_t x3775 = 205428153894326839LLU;

	t99 = (x3773^((x3774-x3775)>>x3776));

	if (t99 != 18446744073701256425LLU) { NG(); } else { ; }
	
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

