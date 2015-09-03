#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x13 = INT8_MAX;
volatile int16_t x14 = -3;
static uint32_t x15 = UINT32_MAX;
volatile uint64_t t3 = 0LLU;
volatile int16_t x123 = INT16_MAX;
volatile int8_t x124 = 2;
static uint8_t x191 = UINT8_MAX;
int8_t x222 = 12;
uint8_t x287 = 47U;
static int32_t x297 = 1;
int16_t x298 = -1;
static int32_t t9 = 11658;
int32_t x314 = INT32_MIN;
int16_t x316 = -1;
static uint64_t t11 = 100503325697LLU;
static int8_t x433 = INT8_MAX;
int32_t x435 = -1;
int8_t x496 = -1;
static int16_t x514 = INT16_MAX;
int8_t x516 = -1;
uint8_t x529 = 6U;
static int32_t t16 = 94311215;
volatile uint32_t x622 = 3U;
int8_t x658 = INT8_MAX;
int32_t x660 = -1;
int8_t x754 = INT8_MIN;
volatile int64_t x756 = -1LL;
static volatile int32_t t22 = 503400826;
volatile uint32_t x805 = 205489746U;
static volatile uint32_t t23 = 174U;
int16_t x886 = -1;
int32_t t27 = 57;
static int32_t x979 = INT32_MIN;
uint8_t x1105 = UINT8_MAX;
int64_t x1110 = 53447264157172673LL;
uint8_t x1111 = 46U;
volatile int64_t t32 = INT64_MAX;
static int8_t x1134 = INT8_MIN;
int16_t x1135 = INT16_MAX;
uint8_t x1150 = 7U;
uint64_t t34 = 507490LLU;
uint16_t x1222 = UINT16_MAX;
int64_t x1223 = 666957042063604LL;
volatile int8_t x1281 = 3;
uint8_t x1282 = 3U;
volatile int32_t t40 = -954628906;
static volatile uint8_t x1401 = UINT8_MAX;
volatile uint16_t x1403 = UINT16_MAX;
uint32_t t44 = 1979505U;
volatile int32_t t46 = -6;
uint32_t x1507 = 15U;
uint64_t x1567 = 11572434927445929LLU;
volatile uint8_t x1568 = 1U;
static int32_t x1579 = INT32_MAX;
int16_t x1713 = 38;
uint16_t x1715 = 5U;
int64_t x1787 = 1LL;
static int16_t x1792 = -1;
uint64_t x1845 = 43438081082002635LLU;
static int8_t x1847 = -1;
volatile uint64_t x1848 = 210LLU;
volatile uint64_t x1881 = 10664LLU;
uint32_t t59 = 5548U;
uint8_t x1934 = 5U;
int16_t x1935 = -1;
int8_t x1936 = INT8_MAX;
static uint32_t x1970 = 105025U;
uint8_t x1971 = UINT8_MAX;
static uint8_t x1972 = 47U;
int32_t x1990 = 1;
int32_t x1992 = -1;
static int16_t x2017 = 43;
volatile int64_t t67 = -15762LL;
uint16_t x2050 = 12U;
static uint16_t x2173 = 10772U;
int32_t x2178 = INT32_MIN;
static int8_t x2206 = -1;
uint8_t x2412 = 45U;
int8_t x2550 = 0;
static volatile int64_t t80 = -533082552675644LL;
int32_t x2653 = 12016400;
uint64_t x2709 = 1LLU;
int32_t x2727 = INT32_MIN;
int16_t x2728 = -1;
static int64_t t84 = INT64_MAX;
static int8_t x2739 = 3;
uint16_t x2838 = 13U;
static uint16_t x2839 = 0U;
static int64_t x2840 = -18082218688LL;
volatile int32_t x2885 = 0;
volatile int32_t x2963 = -19599;
int16_t x3076 = -1;
static uint16_t x3114 = UINT16_MAX;
volatile int32_t t96 = -65024;
static int16_t x3121 = 2551;
int8_t x3123 = INT8_MIN;
volatile int8_t x3142 = INT8_MIN;
uint16_t x3145 = 0U;
static volatile int32_t t99 = -15;


void f0(void) {
	int64_t x16 = -1LL;
	int32_t t0 = -9;

	t0 = (x13<<((x14+x15)%x16));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x33 = 22U;
	int64_t x34 = INT64_MAX;
	uint8_t x35 = 0U;
	int8_t x36 = INT8_MAX;
	int32_t t1 = 46;

	t1 = (x33<<((x34+x35)%x36));

	if (t1 != 22) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x37 = 0U;
	int8_t x38 = INT8_MIN;
	int32_t x39 = INT32_MAX;
	int16_t x40 = 10;
	int32_t t2 = -25;

	t2 = (x37<<((x38+x39)%x40));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x69 = 5340895992638LLU;
	int8_t x70 = INT8_MAX;
	int32_t x71 = 532684;
	static int16_t x72 = -1;

	t3 = (x69<<((x70+x71)%x72));

	if (t3 != 5340895992638LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x121 = INT32_MAX;
	int8_t x122 = INT8_MAX;
	volatile int32_t t4 = INT32_MAX;

	t4 = (x121<<((x122+x123)%x124));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x137 = 3725574U;
	static int32_t x138 = INT32_MAX;
	int16_t x139 = INT16_MIN;
	volatile uint8_t x140 = 3U;
	uint32_t t5 = 0U;

	t5 = (x137<<((x138+x139)%x140));

	if (t5 != 14902296U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x189 = 25U;
	volatile int8_t x190 = 0;
	volatile uint8_t x192 = UINT8_MAX;
	int32_t t6 = -11591;

	t6 = (x189<<((x190+x191)%x192));

	if (t6 != 25) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x221 = 0;
	uint64_t x223 = UINT64_MAX;
	uint8_t x224 = 2U;
	int32_t t7 = -53862;

	t7 = (x221<<((x222+x223)%x224));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x285 = UINT8_MAX;
	int32_t x286 = -1;
	int8_t x288 = -1;
	int32_t t8 = 0;

	t8 = (x285<<((x286+x287)%x288));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x299 = 6U;
	uint64_t x300 = 844895631LLU;

	t9 = (x297<<((x298+x299)%x300));

	if (t9 != 32) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x313 = UINT32_MAX;
	int64_t x315 = INT64_MAX;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = (x313<<((x314+x315)%x316));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x389 = 100454316235052LLU;
	uint8_t x390 = 12U;
	volatile int32_t x391 = -1;
	volatile int64_t x392 = -10692LL;

	t11 = (x389<<((x390+x391)%x392));

	if (t11 != 205730439649386496LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x397 = 8;
	volatile int16_t x398 = INT16_MIN;
	int8_t x399 = INT8_MIN;
	int16_t x400 = -1;
	volatile int32_t t12 = 2556369;

	t12 = (x397<<((x398+x399)%x400));

	if (t12 != 8) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x434 = UINT8_MAX;
	int64_t x436 = -1LL;
	volatile int32_t t13 = -1695336;

	t13 = (x433<<((x434+x435)%x436));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x493 = UINT64_MAX;
	int8_t x494 = INT8_MAX;
	volatile int8_t x495 = INT8_MIN;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x493<<((x494+x495)%x496));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x513 = UINT64_MAX;
	static int32_t x515 = -1;
	uint64_t t15 = UINT64_MAX;

	t15 = (x513<<((x514+x515)%x516));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x530 = INT32_MAX;
	static uint64_t x531 = 9661034LLU;
	volatile uint16_t x532 = 1U;

	t16 = (x529<<((x530+x531)%x532));

	if (t16 != 6) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x557 = 8073495;
	uint64_t x558 = UINT64_MAX;
	volatile int16_t x559 = INT16_MAX;
	volatile uint32_t x560 = 30U;
	int32_t t17 = -316000808;

	t17 = (x557<<((x558+x559)%x560));

	if (t17 != 516703680) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x621 = INT16_MAX;
	int32_t x623 = -1;
	static int64_t x624 = INT64_MIN;
	int32_t t18 = -706011993;

	t18 = (x621<<((x622+x623)%x624));

	if (t18 != 131068) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x645 = UINT8_MAX;
	static int8_t x646 = -7;
	volatile int32_t x647 = INT32_MAX;
	int16_t x648 = -1;
	static int32_t t19 = -67029802;

	t19 = (x645<<((x646+x647)%x648));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x657 = UINT32_MAX;
	int8_t x659 = 0;
	uint32_t t20 = UINT32_MAX;

	t20 = (x657<<((x658+x659)%x660));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x677 = INT8_MAX;
	int8_t x678 = -1;
	uint8_t x679 = 29U;
	int8_t x680 = -3;
	static int32_t t21 = 1;

	t21 = (x677<<((x678+x679)%x680));

	if (t21 != 254) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x753 = 73U;
	uint8_t x755 = UINT8_MAX;

	t22 = (x753<<((x754+x755)%x756));

	if (t22 != 73) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x806 = 185U;
	volatile uint8_t x807 = UINT8_MAX;
	uint8_t x808 = 4U;

	t23 = (x805<<((x806+x807)%x808));

	if (t23 != 205489746U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x825 = INT8_MAX;
	static uint32_t x826 = 9087U;
	int64_t x827 = -39LL;
	uint64_t x828 = 28LLU;
	volatile int32_t t24 = -32413388;

	t24 = (x825<<((x826+x827)%x828));

	if (t24 != 2032) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x885 = 676U;
	static volatile int16_t x887 = INT16_MAX;
	static volatile int8_t x888 = INT8_MAX;
	int32_t t25 = -21;

	t25 = (x885<<((x886+x887)%x888));

	if (t25 != 676) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x901 = 7U;
	int8_t x902 = 1;
	int64_t x903 = 1407385322953LL;
	int16_t x904 = -1;
	uint32_t t26 = 11405932U;

	t26 = (x901<<((x902+x903)%x904));

	if (t26 != 7U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x973 = 0;
	volatile int8_t x974 = INT8_MIN;
	uint64_t x975 = UINT64_MAX;
	uint8_t x976 = 15U;

	t27 = (x973<<((x974+x975)%x976));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x977 = 15401U;
	uint64_t x978 = 8299729066LLU;
	uint16_t x980 = 2U;
	uint32_t t28 = 13869U;

	t28 = (x977<<((x978+x979)%x980));

	if (t28 != 15401U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x985 = 44249386;
	int8_t x986 = INT8_MIN;
	uint64_t x987 = 372LLU;
	volatile int8_t x988 = 12;
	int32_t t29 = -9;

	t29 = (x985<<((x986+x987)%x988));

	if (t29 != 707990176) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x1009 = UINT32_MAX;
	int8_t x1010 = INT8_MAX;
	int16_t x1011 = INT16_MIN;
	int32_t x1012 = -1;
	volatile uint32_t t30 = UINT32_MAX;

	t30 = (x1009<<((x1010+x1011)%x1012));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1106 = 558U;
	int32_t x1107 = INT32_MIN;
	static int16_t x1108 = -1;
	static int32_t t31 = 947;

	t31 = (x1105<<((x1106+x1107)%x1108));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x1109 = INT64_MAX;
	int32_t x1112 = -1;

	t32 = (x1109<<((x1110+x1111)%x1112));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x1133 = 585217281U;
	static int8_t x1136 = -1;
	volatile uint32_t t33 = 1257U;

	t33 = (x1133<<((x1134+x1135)%x1136));

	if (t33 != 585217281U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1149 = 686372870LLU;
	static int16_t x1151 = 208;
	uint32_t x1152 = 10U;

	t34 = (x1149<<((x1150+x1151)%x1152));

	if (t34 != 21963931840LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1157 = 70U;
	int32_t x1158 = INT32_MAX;
	int64_t x1159 = 1086382LL;
	int64_t x1160 = -1LL;
	volatile int32_t t35 = 0;

	t35 = (x1157<<((x1158+x1159)%x1160));

	if (t35 != 70) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1221 = 9U;
	uint8_t x1224 = 125U;
	volatile int32_t t36 = 179;

	t36 = (x1221<<((x1222+x1223)%x1224));

	if (t36 != 147456) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1283 = UINT32_MAX;
	int32_t x1284 = INT32_MIN;
	volatile int32_t t37 = 101746151;

	t37 = (x1281<<((x1282+x1283)%x1284));

	if (t37 != 12) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x1285 = 116563999U;
	static int32_t x1286 = INT32_MIN;
	uint32_t x1287 = 7U;
	int16_t x1288 = 12;
	volatile uint32_t t38 = 86227U;

	t38 = (x1285<<((x1286+x1287)%x1288));

	if (t38 != 932511992U) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1325 = 428075358104872310LL;
	volatile int8_t x1326 = -1;
	uint32_t x1327 = 5U;
	volatile int32_t x1328 = INT32_MIN;
	int64_t t39 = -335LL;

	t39 = (x1325<<((x1326+x1327)%x1328));

	if (t39 != 6849205729677956960LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1373 = UINT8_MAX;
	int64_t x1374 = INT64_MAX;
	int16_t x1375 = -19;
	int8_t x1376 = -1;

	t40 = (x1373<<((x1374+x1375)%x1376));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x1397 = INT16_MAX;
	uint16_t x1398 = 227U;
	uint32_t x1399 = 80883351U;
	int64_t x1400 = -1LL;
	volatile int32_t t41 = 0;

	t41 = (x1397<<((x1398+x1399)%x1400));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1402 = INT32_MIN;
	volatile int8_t x1404 = -1;
	static int32_t t42 = -9794;

	t42 = (x1401<<((x1402+x1403)%x1404));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x1405 = 86538697745LLU;
	static int32_t x1406 = INT32_MIN;
	int64_t x1407 = -2LL;
	int32_t x1408 = -1;
	uint64_t t43 = 412686352065975LLU;

	t43 = (x1405<<((x1406+x1407)%x1408));

	if (t43 != 86538697745LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x1421 = 458U;
	int8_t x1422 = INT8_MAX;
	int16_t x1423 = INT16_MIN;
	int16_t x1424 = -1;

	t44 = (x1421<<((x1422+x1423)%x1424));

	if (t44 != 458U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x1465 = 0U;
	static uint32_t x1466 = UINT32_MAX;
	uint16_t x1467 = 62U;
	int8_t x1468 = 21;
	static volatile int32_t t45 = 424;

	t45 = (x1465<<((x1466+x1467)%x1468));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1489 = UINT16_MAX;
	int8_t x1490 = INT8_MIN;
	int64_t x1491 = 33199553301859LL;
	int16_t x1492 = -1;

	t46 = (x1489<<((x1490+x1491)%x1492));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1505 = 2U;
	static int16_t x1506 = -1;
	int16_t x1508 = INT16_MAX;
	volatile int32_t t47 = 23;

	t47 = (x1505<<((x1506+x1507)%x1508));

	if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1561 = INT8_MAX;
	int8_t x1562 = INT8_MIN;
	static int64_t x1563 = 3763831638613148222LL;
	int16_t x1564 = -1;
	volatile int32_t t48 = -1;

	t48 = (x1561<<((x1562+x1563)%x1564));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1565 = INT16_MAX;
	int16_t x1566 = INT16_MAX;
	int32_t t49 = 29;

	t49 = (x1565<<((x1566+x1567)%x1568));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1577 = INT32_MAX;
	static volatile int8_t x1578 = -62;
	int64_t x1580 = -1LL;
	volatile int32_t t50 = INT32_MAX;

	t50 = (x1577<<((x1578+x1579)%x1580));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1637 = 2380462820LLU;
	static uint64_t x1638 = 1LLU;
	int16_t x1639 = INT16_MAX;
	static volatile int8_t x1640 = INT8_MAX;
	volatile uint64_t t51 = 21195070994104LLU;

	t51 = (x1637<<((x1638+x1639)%x1640));

	if (t51 != 9521851280LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1661 = INT32_MAX;
	uint32_t x1662 = 1U;
	int64_t x1663 = INT64_MIN;
	volatile int16_t x1664 = -1;
	volatile int32_t t52 = INT32_MAX;

	t52 = (x1661<<((x1662+x1663)%x1664));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1677 = INT8_MAX;
	volatile int64_t x1678 = -1LL;
	uint32_t x1679 = 354448U;
	static volatile int8_t x1680 = -4;
	static int32_t t53 = -4047244;

	t53 = (x1677<<((x1678+x1679)%x1680));

	if (t53 != 1016) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x1714 = 0U;
	static uint32_t x1716 = 3056U;
	static volatile int32_t t54 = 424;

	t54 = (x1713<<((x1714+x1715)%x1716));

	if (t54 != 1216) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1785 = 0;
	int32_t x1786 = INT32_MAX;
	static int32_t x1788 = INT32_MIN;
	volatile int32_t t55 = 125530267;

	t55 = (x1785<<((x1786+x1787)%x1788));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x1789 = 1U;
	static volatile int64_t x1790 = -1LL;
	int32_t x1791 = INT32_MAX;
	int32_t t56 = 172;

	t56 = (x1789<<((x1790+x1791)%x1792));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x1846 = UINT8_MAX;
	volatile uint64_t t57 = 56149830773275LLU;

	t57 = (x1845<<((x1846+x1847)%x1848));

	if (t57 != 16198515473791320064LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1882 = -1;
	int64_t x1883 = INT64_MAX;
	int16_t x1884 = -9;
	uint64_t t58 = 2012421065704LLU;

	t58 = (x1881<<((x1882+x1883)%x1884));

	if (t58 != 682496LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x1893 = 1U;
	uint8_t x1894 = 2U;
	static volatile uint16_t x1895 = UINT16_MAX;
	int16_t x1896 = INT16_MIN;

	t59 = (x1893<<((x1894+x1895)%x1896));

	if (t59 != 2U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x1905 = 529345U;
	int32_t x1906 = 6;
	static int64_t x1907 = -153LL;
	static uint64_t x1908 = 31LLU;
	static volatile uint32_t t60 = 238U;

	t60 = (x1905<<((x1906+x1907)%x1908));

	if (t60 != 3238002688U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x1929 = 39U;
	static int8_t x1930 = INT8_MIN;
	int16_t x1931 = INT16_MAX;
	int8_t x1932 = INT8_MAX;
	volatile int32_t t61 = 202223;

	t61 = (x1929<<((x1930+x1931)%x1932));

	if (t61 != 39) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1933 = 3051U;
	int32_t t62 = -28;

	t62 = (x1933<<((x1934+x1935)%x1936));

	if (t62 != 48816) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x1957 = UINT32_MAX;
	uint64_t x1958 = UINT64_MAX;
	volatile uint64_t x1959 = UINT64_MAX;
	uint8_t x1960 = 9U;
	uint32_t t63 = 27354274U;

	t63 = (x1957<<((x1958+x1959)%x1960));

	if (t63 != 4294967264U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x1969 = 1U;
	static volatile int32_t t64 = -11316525;

	t64 = (x1969<<((x1970+x1971)%x1972));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x1989 = UINT32_MAX;
	static volatile int16_t x1991 = -1;
	volatile uint32_t t65 = UINT32_MAX;

	t65 = (x1989<<((x1990+x1991)%x1992));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x2018 = INT64_MIN;
	uint64_t x2019 = 15LLU;
	int64_t x2020 = INT64_MAX;
	static volatile int32_t t66 = 691553;

	t66 = (x2017<<((x2018+x2019)%x2020));

	if (t66 != 2818048) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2033 = 137652633927216801LL;
	volatile int32_t x2034 = -95;
	uint16_t x2035 = 5U;
	int8_t x2036 = -5;

	t67 = (x2033<<((x2034+x2035)%x2036));

	if (t67 != 137652633927216801LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2049 = 1U;
	volatile uint64_t x2051 = 6276929LLU;
	volatile uint8_t x2052 = 110U;
	volatile int32_t t68 = 111071;

	t68 = (x2049<<((x2050+x2051)%x2052));

	if (t68 != 2048) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x2174 = 4U;
	int8_t x2175 = 1;
	static int8_t x2176 = INT8_MAX;
	volatile int32_t t69 = -16013;

	t69 = (x2173<<((x2174+x2175)%x2176));

	if (t69 != 344704) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2177 = 113U;
	uint64_t x2179 = 302887842676073627LLU;
	uint8_t x2180 = UINT8_MAX;
	static volatile uint32_t t70 = 7U;

	t70 = (x2177<<((x2178+x2179)%x2180));

	if (t70 != 57856U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2205 = UINT32_MAX;
	int8_t x2207 = INT8_MIN;
	int16_t x2208 = -1;
	uint32_t t71 = UINT32_MAX;

	t71 = (x2205<<((x2206+x2207)%x2208));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2229 = 1LL;
	int8_t x2230 = INT8_MIN;
	int32_t x2231 = -1;
	uint16_t x2232 = 1U;
	int64_t t72 = -240625667324LL;

	t72 = (x2229<<((x2230+x2231)%x2232));

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x2253 = 0U;
	int32_t x2254 = INT32_MIN;
	static uint16_t x2255 = UINT16_MAX;
	int8_t x2256 = -1;
	int32_t t73 = 218391;

	t73 = (x2253<<((x2254+x2255)%x2256));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2265 = 5U;
	int16_t x2266 = -2;
	uint16_t x2267 = 11U;
	int32_t x2268 = 24139027;
	uint32_t t74 = 2063837638U;

	t74 = (x2265<<((x2266+x2267)%x2268));

	if (t74 != 2560U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x2317 = UINT8_MAX;
	int8_t x2318 = -8;
	volatile uint8_t x2319 = UINT8_MAX;
	volatile int32_t x2320 = 6;
	static int32_t t75 = 8294;

	t75 = (x2317<<((x2318+x2319)%x2320));

	if (t75 != 510) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2321 = UINT32_MAX;
	static int16_t x2322 = 1;
	int8_t x2323 = 1;
	volatile int32_t x2324 = INT32_MIN;
	volatile uint32_t t76 = 5607601U;

	t76 = (x2321<<((x2322+x2323)%x2324));

	if (t76 != 4294967292U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2389 = 13;
	static int16_t x2390 = 26;
	static uint16_t x2391 = 0U;
	static int8_t x2392 = INT8_MAX;
	volatile int32_t t77 = -35441478;

	t77 = (x2389<<((x2390+x2391)%x2392));

	if (t77 != 872415232) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2409 = 61U;
	int8_t x2410 = INT8_MAX;
	int8_t x2411 = 17;
	volatile int32_t t78 = -1104354;

	t78 = (x2409<<((x2410+x2411)%x2412));

	if (t78 != 31232) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2549 = UINT32_MAX;
	static int32_t x2551 = INT32_MIN;
	static int16_t x2552 = INT16_MIN;
	uint32_t t79 = UINT32_MAX;

	t79 = (x2549<<((x2550+x2551)%x2552));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2585 = 4LL;
	int8_t x2586 = INT8_MIN;
	volatile int64_t x2587 = INT64_MAX;
	static uint64_t x2588 = 1LLU;

	t80 = (x2585<<((x2586+x2587)%x2588));

	if (t80 != 4LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2654 = -1;
	static int16_t x2655 = INT16_MIN;
	int16_t x2656 = -1;
	static int32_t t81 = -322512217;

	t81 = (x2653<<((x2654+x2655)%x2656));

	if (t81 != 12016400) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x2693 = 10003LLU;
	volatile int8_t x2694 = INT8_MIN;
	uint8_t x2695 = UINT8_MAX;
	volatile int8_t x2696 = -22;
	static volatile uint64_t t82 = 2006202737LLU;

	t82 = (x2693<<((x2694+x2695)%x2696));

	if (t82 != 1311113216LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2710 = -1;
	static volatile int64_t x2711 = 12634938724489LL;
	uint8_t x2712 = 34U;
	volatile uint64_t t83 = 4248LLU;

	t83 = (x2709<<((x2710+x2711)%x2712));

	if (t83 != 1073741824LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2725 = INT64_MAX;
	uint16_t x2726 = UINT16_MAX;

	t84 = (x2725<<((x2726+x2727)%x2728));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2737 = 38U;
	int16_t x2738 = -1;
	static uint64_t x2740 = UINT64_MAX;
	volatile int32_t t85 = -5;

	t85 = (x2737<<((x2738+x2739)%x2740));

	if (t85 != 152) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x2757 = 16U;
	uint8_t x2758 = 9U;
	int8_t x2759 = -1;
	static int16_t x2760 = -36;
	static volatile int32_t t86 = -189;

	t86 = (x2757<<((x2758+x2759)%x2760));

	if (t86 != 4096) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x2797 = 7932014LLU;
	uint64_t x2798 = 60141742LLU;
	int64_t x2799 = INT64_MIN;
	int8_t x2800 = INT8_MAX;
	volatile uint64_t t87 = 358903324084082816LLU;

	t87 = (x2797<<((x2798+x2799)%x2800));

	if (t87 != 126912224LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x2813 = 775641LLU;
	uint16_t x2814 = UINT16_MAX;
	volatile int32_t x2815 = INT32_MIN;
	static int32_t x2816 = -1;
	volatile uint64_t t88 = 7605921581LLU;

	t88 = (x2813<<((x2814+x2815)%x2816));

	if (t88 != 775641LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x2817 = 7U;
	uint8_t x2818 = 12U;
	int32_t x2819 = 1;
	uint64_t x2820 = 56LLU;
	volatile int32_t t89 = 14;

	t89 = (x2817<<((x2818+x2819)%x2820));

	if (t89 != 57344) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2837 = UINT32_MAX;
	uint32_t t90 = 1U;

	t90 = (x2837<<((x2838+x2839)%x2840));

	if (t90 != 4294959104U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x2886 = 8818698U;
	int64_t x2887 = -1LL;
	int64_t x2888 = -1LL;
	volatile int32_t t91 = 7388;

	t91 = (x2885<<((x2886+x2887)%x2888));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x2909 = INT8_MAX;
	volatile int16_t x2910 = 0;
	static uint32_t x2911 = UINT32_MAX;
	uint32_t x2912 = UINT32_MAX;
	static int32_t t92 = -3;

	t92 = (x2909<<((x2910+x2911)%x2912));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x2957 = 1073U;
	int8_t x2958 = -15;
	int32_t x2959 = INT32_MAX;
	static volatile int64_t x2960 = -1LL;
	int32_t t93 = -17;

	t93 = (x2957<<((x2958+x2959)%x2960));

	if (t93 != 1073) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x2961 = UINT8_MAX;
	int32_t x2962 = INT32_MAX;
	int16_t x2964 = -1;
	volatile int32_t t94 = 26465625;

	t94 = (x2961<<((x2962+x2963)%x2964));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3073 = INT64_MAX;
	volatile int8_t x3074 = INT8_MAX;
	int16_t x3075 = -6;
	static int64_t t95 = INT64_MAX;

	t95 = (x3073<<((x3074+x3075)%x3076));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3113 = 11;
	int8_t x3115 = 12;
	volatile int8_t x3116 = 14;

	t96 = (x3113<<((x3114+x3115)%x3116));

	if (t96 != 90112) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x3122 = INT64_MAX;
	uint8_t x3124 = 54U;
	int32_t t97 = 1;

	t97 = (x3121<<((x3122+x3123)%x3124));

	if (t97 != 81632) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x3141 = 3U;
	int16_t x3143 = -1;
	int32_t x3144 = -1;
	volatile int32_t t98 = -343132;

	t98 = (x3141<<((x3142+x3143)%x3144));

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3146 = INT8_MIN;
	static int64_t x3147 = INT64_MAX;
	int8_t x3148 = -61;

	t99 = (x3145<<((x3146+x3147)%x3148));

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

