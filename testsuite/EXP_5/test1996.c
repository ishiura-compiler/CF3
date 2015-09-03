#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x26 = 1837743LLU;
static int8_t x30 = -1;
int8_t x48 = 31;
static volatile uint32_t t3 = 334226U;
uint32_t x135 = UINT32_MAX;
volatile int64_t t4 = 3076LL;
int16_t x198 = -1;
static int64_t x204 = INT64_MIN;
int32_t t6 = 103;
static int16_t x283 = INT16_MIN;
uint16_t x284 = 3U;
volatile uint64_t t7 = 12LLU;
volatile uint8_t x381 = 23U;
static int32_t t10 = -29;
static volatile int64_t t13 = 267LL;
int8_t x618 = -1;
uint64_t x740 = 2LLU;
static int16_t x742 = -1;
int16_t x759 = INT16_MAX;
static int8_t x771 = 0;
int16_t x805 = 1001;
uint8_t x807 = 29U;
uint16_t x808 = 2U;
int16_t x815 = INT16_MAX;
static int8_t x889 = 5;
int32_t t26 = 1;
int32_t x904 = 5;
volatile int8_t x910 = INT8_MIN;
int8_t x912 = 0;
uint64_t x933 = 3535945856LLU;
volatile int64_t x936 = 189LL;
static int16_t x1196 = 1;
uint16_t x1224 = 4U;
int64_t x1241 = 23288172988LL;
int64_t x1243 = INT64_MIN;
volatile int64_t t38 = 5138562645152402LL;
int32_t x1288 = 7;
uint64_t t39 = 14717468950LLU;
volatile uint32_t x1327 = 2U;
int32_t t40 = 2354;
volatile uint64_t x1371 = 921LLU;
int32_t x1401 = 1;
static volatile int16_t x1403 = -1;
uint8_t x1404 = 0U;
static int8_t x1421 = 61;
int8_t x1423 = INT8_MAX;
int64_t x1437 = 59138615330359LL;
static int8_t x1439 = INT8_MIN;
int32_t x1445 = 10;
int32_t x1446 = 844;
int8_t x1448 = 17;
volatile int32_t t46 = 198357246;
volatile int32_t x1459 = INT32_MAX;
int8_t x1460 = 2;
uint32_t x1479 = UINT32_MAX;
int16_t x1480 = 1;
uint32_t x1540 = 2U;
int32_t t52 = 1058778;
static volatile int64_t t55 = 550745268124645LL;
static uint32_t x1761 = 654U;
int64_t x1762 = INT64_MAX;
static uint16_t x1764 = 13U;
uint32_t x1862 = UINT32_MAX;
volatile int32_t t61 = 120;
uint32_t x1903 = 957445U;
static int64_t x1935 = INT64_MIN;
volatile int16_t x2225 = 0;
volatile uint32_t x2249 = UINT32_MAX;
uint8_t x2277 = 1U;
uint8_t x2330 = 1U;
int8_t x2331 = 9;
volatile int32_t t77 = -105184;
volatile uint64_t x2358 = 7789128334358286693LLU;
int64_t t79 = 55026052548LL;
uint16_t x2372 = 6905U;
static int32_t t80 = 852761;
volatile int16_t x2447 = 4;
int8_t x2505 = INT8_MAX;
int16_t x2542 = INT16_MAX;
int32_t t85 = -534986464;
int64_t x2563 = INT64_MAX;
static int8_t x2582 = -1;
int32_t x2618 = -259514453;
static uint16_t x2619 = 2U;
volatile int32_t t92 = 13928;
volatile int32_t x2768 = INT32_MAX;
int64_t x2778 = INT64_MIN;
int32_t x2779 = 19;
volatile uint64_t t96 = 1621LLU;
uint8_t x2796 = 3U;
volatile int32_t t97 = 1719233;
uint64_t x2821 = UINT64_MAX;
static int32_t x2822 = -1;


void f0(void) {
	static volatile uint8_t x9 = 105U;
	uint64_t x10 = 252694429383LLU;
	int32_t x11 = 458;
	int8_t x12 = 5;
	volatile int32_t t0 = 1;

	t0 = (x9>>((x10|x11)&x12));

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x25 = 2LLU;
	int8_t x27 = 2;
	uint8_t x28 = 26U;
	uint64_t t1 = 225975808LLU;

	t1 = (x25>>((x26|x27)&x28));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x29 = INT32_MAX;
	int64_t x31 = INT64_MIN;
	uint8_t x32 = 13U;
	int32_t t2 = -1;

	t2 = (x29>>((x30|x31)&x32));

	if (t2 != 262143) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x45 = 24569U;
	volatile uint32_t x46 = 1577550776U;
	static uint64_t x47 = 145442234LLU;

	t3 = (x45>>((x46|x47)&x48));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x133 = 1LL;
	volatile int32_t x134 = INT32_MIN;
	int16_t x136 = 27;

	t4 = (x133>>((x134|x135)&x136));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x197 = INT8_MAX;
	int32_t x199 = INT32_MIN;
	static volatile int8_t x200 = 3;
	int32_t t5 = -412806;

	t5 = (x197>>((x198|x199)&x200));

	if (t5 != 15) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x201 = 3U;
	uint32_t x202 = 147967417U;
	int8_t x203 = INT8_MAX;

	t6 = (x201>>((x202|x203)&x204));

	if (t6 != 3) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x281 = 322016574647183LLU;
	static int8_t x282 = 0;

	t7 = (x281>>((x282|x283)&x284));

	if (t7 != 322016574647183LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x365 = INT16_MAX;
	uint8_t x366 = 6U;
	int8_t x367 = 1;
	int32_t x368 = -1;
	int32_t t8 = 463623564;

	t8 = (x365>>((x366|x367)&x368));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x382 = INT32_MAX;
	int8_t x383 = INT8_MIN;
	int8_t x384 = 1;
	volatile int32_t t9 = -5145195;

	t9 = (x381>>((x382|x383)&x384));

	if (t9 != 11) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x533 = 30;
	uint64_t x534 = 58386509LLU;
	int32_t x535 = -1;
	volatile int16_t x536 = 0;

	t10 = (x533>>((x534|x535)&x536));

	if (t10 != 30) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x537 = INT16_MAX;
	int8_t x538 = 1;
	int32_t x539 = INT32_MIN;
	uint8_t x540 = UINT8_MAX;
	int32_t t11 = -900107022;

	t11 = (x537>>((x538|x539)&x540));

	if (t11 != 16383) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x561 = UINT8_MAX;
	uint16_t x562 = 1363U;
	int16_t x563 = 36;
	volatile int16_t x564 = INT16_MIN;
	volatile int32_t t12 = 10926;

	t12 = (x561>>((x562|x563)&x564));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x565 = 40LL;
	uint8_t x566 = 93U;
	uint16_t x567 = 31324U;
	int64_t x568 = INT64_MIN;

	t13 = (x565>>((x566|x567)&x568));

	if (t13 != 40LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x617 = 58;
	int32_t x619 = 17;
	uint16_t x620 = 0U;
	volatile int32_t t14 = -14193;

	t14 = (x617>>((x618|x619)&x620));

	if (t14 != 58) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x629 = 81;
	static volatile int8_t x630 = 1;
	int8_t x631 = INT8_MIN;
	volatile int8_t x632 = INT8_MAX;
	volatile int32_t t15 = -92960743;

	t15 = (x629>>((x630|x631)&x632));

	if (t15 != 40) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x645 = 8;
	int16_t x646 = INT16_MIN;
	uint16_t x647 = 1U;
	volatile int16_t x648 = 2048;
	volatile int32_t t16 = 3225;

	t16 = (x645>>((x646|x647)&x648));

	if (t16 != 8) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x737 = 140012850;
	static volatile uint32_t x738 = 141893U;
	volatile int8_t x739 = INT8_MAX;
	volatile int32_t t17 = 0;

	t17 = (x737>>((x738|x739)&x740));

	if (t17 != 35003212) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x741 = 132916990300613279LLU;
	int16_t x743 = INT16_MIN;
	int32_t x744 = 1;
	volatile uint64_t t18 = 322917095708519LLU;

	t18 = (x741>>((x742|x743)&x744));

	if (t18 != 66458495150306639LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x757 = 376U;
	static uint8_t x758 = 105U;
	int16_t x760 = INT16_MIN;
	volatile uint32_t t19 = 13590440U;

	t19 = (x757>>((x758|x759)&x760));

	if (t19 != 376U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x769 = UINT8_MAX;
	volatile int8_t x770 = 35;
	uint8_t x772 = 29U;
	volatile int32_t t20 = -10791089;

	t20 = (x769>>((x770|x771)&x772));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x785 = 43536030825684LLU;
	volatile int32_t x786 = INT32_MIN;
	uint8_t x787 = 2U;
	volatile uint8_t x788 = UINT8_MAX;
	uint64_t t21 = 10LLU;

	t21 = (x785>>((x786|x787)&x788));

	if (t21 != 10884007706421LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x789 = 6U;
	static uint16_t x790 = UINT16_MAX;
	int8_t x791 = 1;
	static volatile uint32_t x792 = 0U;
	volatile int32_t t22 = -101071;

	t22 = (x789>>((x790|x791)&x792));

	if (t22 != 6) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x793 = 1197461145LLU;
	int32_t x794 = INT32_MIN;
	uint32_t x795 = 0U;
	uint8_t x796 = 0U;
	volatile uint64_t t23 = 28320779089LLU;

	t23 = (x793>>((x794|x795)&x796));

	if (t23 != 1197461145LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x806 = -1;
	int32_t t24 = -956;

	t24 = (x805>>((x806|x807)&x808));

	if (t24 != 250) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x813 = 2U;
	static uint8_t x814 = 1U;
	int64_t x816 = INT64_MIN;
	static volatile int32_t t25 = -12770;

	t25 = (x813>>((x814|x815)&x816));

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x890 = INT32_MAX;
	uint32_t x891 = 1523868365U;
	int8_t x892 = 7;

	t26 = (x889>>((x890|x891)&x892));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x901 = INT8_MAX;
	volatile uint8_t x902 = UINT8_MAX;
	volatile int64_t x903 = INT64_MIN;
	volatile int32_t t27 = 392995979;

	t27 = (x901>>((x902|x903)&x904));

	if (t27 != 3) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x909 = 1U;
	int64_t x911 = 22262LL;
	volatile int32_t t28 = -12;

	t28 = (x909>>((x910|x911)&x912));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x934 = 4U;
	static uint64_t x935 = 1412726803LLU;
	volatile uint64_t t29 = 1771164LLU;

	t29 = (x933>>((x934|x935)&x936));

	if (t29 != 1686LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x981 = 1617LL;
	volatile int32_t x982 = -8068;
	int16_t x983 = INT16_MIN;
	uint64_t x984 = 1LLU;
	int64_t t30 = 16620169713175LL;

	t30 = (x981>>((x982|x983)&x984));

	if (t30 != 1617LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1001 = 251545376300LLU;
	int8_t x1002 = -10;
	volatile uint32_t x1003 = UINT32_MAX;
	uint16_t x1004 = 60U;
	volatile uint64_t t31 = 2187826663353507336LLU;

	t31 = (x1001>>((x1002|x1003)&x1004));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1121 = INT64_MAX;
	static int16_t x1122 = INT16_MIN;
	static int64_t x1123 = INT64_MIN;
	uint16_t x1124 = 1U;
	int64_t t32 = INT64_MAX;

	t32 = (x1121>>((x1122|x1123)&x1124));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x1157 = 38;
	uint16_t x1158 = 998U;
	volatile int64_t x1159 = -146646869LL;
	volatile int16_t x1160 = 1;
	volatile int32_t t33 = 1;

	t33 = (x1157>>((x1158|x1159)&x1160));

	if (t33 != 19) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x1193 = 334539U;
	int8_t x1194 = INT8_MIN;
	int64_t x1195 = -120040021728372203LL;
	uint32_t t34 = 3322U;

	t34 = (x1193>>((x1194|x1195)&x1196));

	if (t34 != 167269U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x1201 = 1078;
	int8_t x1202 = -1;
	int8_t x1203 = INT8_MAX;
	int8_t x1204 = 0;
	static volatile int32_t t35 = -988770806;

	t35 = (x1201>>((x1202|x1203)&x1204));

	if (t35 != 1078) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1205 = 2;
	uint8_t x1206 = UINT8_MAX;
	uint8_t x1207 = UINT8_MAX;
	volatile uint16_t x1208 = 7707U;
	int32_t t36 = -871618606;

	t36 = (x1205>>((x1206|x1207)&x1208));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1221 = 15200863LL;
	uint64_t x1222 = UINT64_MAX;
	int32_t x1223 = INT32_MIN;
	int64_t t37 = 126484888649688949LL;

	t37 = (x1221>>((x1222|x1223)&x1224));

	if (t37 != 950053LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x1242 = 24979U;
	uint8_t x1244 = 5U;

	t38 = (x1241>>((x1242|x1243)&x1244));

	if (t38 != 11644086494LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1285 = 167337083266LLU;
	volatile int64_t x1286 = INT64_MIN;
	int16_t x1287 = INT16_MIN;

	t39 = (x1285>>((x1286|x1287)&x1288));

	if (t39 != 167337083266LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1325 = 26;
	uint32_t x1326 = UINT32_MAX;
	int8_t x1328 = 2;

	t40 = (x1325>>((x1326|x1327)&x1328));

	if (t40 != 6) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1369 = 929;
	static int16_t x1370 = INT16_MIN;
	volatile int16_t x1372 = 0;
	int32_t t41 = -1;

	t41 = (x1369>>((x1370|x1371)&x1372));

	if (t41 != 929) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1389 = INT8_MAX;
	uint8_t x1390 = UINT8_MAX;
	static uint8_t x1391 = UINT8_MAX;
	static volatile int16_t x1392 = INT16_MIN;
	int32_t t42 = -5007108;

	t42 = (x1389>>((x1390|x1391)&x1392));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1402 = INT64_MAX;
	static int32_t t43 = -58349;

	t43 = (x1401>>((x1402|x1403)&x1404));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x1422 = 98;
	int64_t x1424 = INT64_MIN;
	volatile int32_t t44 = 9;

	t44 = (x1421>>((x1422|x1423)&x1424));

	if (t44 != 61) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1438 = INT8_MIN;
	static uint8_t x1440 = 0U;
	volatile int64_t t45 = -1638165407LL;

	t45 = (x1437>>((x1438|x1439)&x1440));

	if (t45 != 59138615330359LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x1447 = UINT64_MAX;

	t46 = (x1445>>((x1446|x1447)&x1448));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x1453 = 28086LL;
	static uint64_t x1454 = 1LLU;
	int8_t x1455 = 1;
	uint64_t x1456 = 0LLU;
	static volatile int64_t t47 = 300035LL;

	t47 = (x1453>>((x1454|x1455)&x1456));

	if (t47 != 28086LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x1457 = INT64_MAX;
	int16_t x1458 = INT16_MIN;
	int64_t t48 = 1304683485550LL;

	t48 = (x1457>>((x1458|x1459)&x1460));

	if (t48 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x1477 = 66586409216299LL;
	int64_t x1478 = INT64_MAX;
	static int64_t t49 = 31956389967747600LL;

	t49 = (x1477>>((x1478|x1479)&x1480));

	if (t49 != 33293204608149LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1509 = 3U;
	uint8_t x1510 = UINT8_MAX;
	static int8_t x1511 = 6;
	uint8_t x1512 = 3U;
	static int32_t t50 = -91607;

	t50 = (x1509>>((x1510|x1511)&x1512));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x1533 = 18U;
	volatile int8_t x1534 = -1;
	int32_t x1535 = -1;
	static uint16_t x1536 = 22U;
	int32_t t51 = -115914;

	t51 = (x1533>>((x1534|x1535)&x1536));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x1537 = UINT8_MAX;
	int64_t x1538 = 6359707511LL;
	static int8_t x1539 = INT8_MIN;

	t52 = (x1537>>((x1538|x1539)&x1540));

	if (t52 != 63) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1545 = INT16_MAX;
	int64_t x1546 = 19235LL;
	volatile int16_t x1547 = INT16_MAX;
	static int32_t x1548 = INT32_MIN;
	int32_t t53 = 29;

	t53 = (x1545>>((x1546|x1547)&x1548));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1573 = 54U;
	uint32_t x1574 = 39578222U;
	int16_t x1575 = 180;
	int64_t x1576 = INT64_MIN;
	int32_t t54 = -6;

	t54 = (x1573>>((x1574|x1575)&x1576));

	if (t54 != 54) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1633 = 25786LL;
	int16_t x1634 = 2;
	volatile uint16_t x1635 = 14U;
	static int32_t x1636 = INT32_MAX;

	t55 = (x1633>>((x1634|x1635)&x1636));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x1733 = UINT8_MAX;
	int64_t x1734 = 800147111LL;
	int64_t x1735 = INT64_MIN;
	int64_t x1736 = 19LL;
	volatile int32_t t56 = -1;

	t56 = (x1733>>((x1734|x1735)&x1736));

	if (t56 != 31) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1753 = UINT16_MAX;
	static int8_t x1754 = INT8_MIN;
	int64_t x1755 = 300278938891548079LL;
	static uint8_t x1756 = 0U;
	int32_t t57 = 5;

	t57 = (x1753>>((x1754|x1755)&x1756));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1763 = INT8_MAX;
	uint32_t t58 = 6292U;

	t58 = (x1761>>((x1762|x1763)&x1764));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1801 = 1U;
	int16_t x1802 = INT16_MAX;
	int8_t x1803 = INT8_MIN;
	uint8_t x1804 = 8U;
	int32_t t59 = 83833112;

	t59 = (x1801>>((x1802|x1803)&x1804));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1809 = 9207U;
	int32_t x1810 = INT32_MIN;
	static int16_t x1811 = -1;
	uint8_t x1812 = 10U;
	volatile int32_t t60 = 124;

	t60 = (x1809>>((x1810|x1811)&x1812));

	if (t60 != 8) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x1861 = UINT8_MAX;
	volatile uint8_t x1863 = UINT8_MAX;
	int64_t x1864 = INT64_MIN;

	t61 = (x1861>>((x1862|x1863)&x1864));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x1901 = 1U;
	int32_t x1902 = -1;
	int8_t x1904 = 1;
	static volatile int32_t t62 = -6;

	t62 = (x1901>>((x1902|x1903)&x1904));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x1905 = 7U;
	static int64_t x1906 = 7485LL;
	int16_t x1907 = INT16_MIN;
	volatile uint16_t x1908 = 86U;
	uint32_t t63 = 176U;

	t63 = (x1905>>((x1906|x1907)&x1908));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1929 = INT64_MAX;
	int8_t x1930 = -12;
	uint16_t x1931 = 150U;
	uint16_t x1932 = 1U;
	int64_t t64 = INT64_MAX;

	t64 = (x1929>>((x1930|x1931)&x1932));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x1933 = 199599687LLU;
	uint64_t x1934 = 50342221136475288LLU;
	uint8_t x1936 = 14U;
	uint64_t t65 = 20LLU;

	t65 = (x1933>>((x1934|x1935)&x1936));

	if (t65 != 779686LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x1993 = 56755U;
	volatile uint16_t x1994 = 22027U;
	int64_t x1995 = INT64_MIN;
	uint16_t x1996 = 0U;
	volatile uint32_t t66 = 33382U;

	t66 = (x1993>>((x1994|x1995)&x1996));

	if (t66 != 56755U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2017 = 21874808123501713LLU;
	uint32_t x2018 = 0U;
	static uint64_t x2019 = 43614314LLU;
	int32_t x2020 = 172;
	volatile uint64_t t67 = 1071687427LLU;

	t67 = (x2017>>((x2018|x2019)&x2020));

	if (t67 != 19895LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x2033 = UINT32_MAX;
	static int32_t x2034 = INT32_MIN;
	int32_t x2035 = INT32_MIN;
	int32_t x2036 = 698;
	uint32_t t68 = UINT32_MAX;

	t68 = (x2033>>((x2034|x2035)&x2036));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2145 = INT8_MAX;
	volatile int32_t x2146 = INT32_MAX;
	int16_t x2147 = INT16_MIN;
	uint64_t x2148 = 31LLU;
	static int32_t t69 = -61703649;

	t69 = (x2145>>((x2146|x2147)&x2148));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x2149 = INT16_MAX;
	int8_t x2150 = -1;
	uint64_t x2151 = 0LLU;
	static uint8_t x2152 = 13U;
	int32_t t70 = 1111;

	t70 = (x2149>>((x2150|x2151)&x2152));

	if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2213 = 16U;
	static uint16_t x2214 = 1311U;
	int16_t x2215 = INT16_MIN;
	static uint16_t x2216 = 2U;
	int32_t t71 = -128868904;

	t71 = (x2213>>((x2214|x2215)&x2216));

	if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x2226 = INT16_MIN;
	int8_t x2227 = -4;
	static uint8_t x2228 = 0U;
	int32_t t72 = 6;

	t72 = (x2225>>((x2226|x2227)&x2228));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x2250 = INT8_MIN;
	uint64_t x2251 = 282858110330654596LLU;
	uint16_t x2252 = 11U;
	uint32_t t73 = UINT32_MAX;

	t73 = (x2249>>((x2250|x2251)&x2252));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2273 = INT32_MAX;
	volatile uint16_t x2274 = 3933U;
	static int8_t x2275 = 61;
	int16_t x2276 = INT16_MIN;
	volatile int32_t t74 = INT32_MAX;

	t74 = (x2273>>((x2274|x2275)&x2276));

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2278 = -14;
	int8_t x2279 = INT8_MIN;
	int8_t x2280 = 1;
	volatile int32_t t75 = -1874;

	t75 = (x2277>>((x2278|x2279)&x2280));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2289 = 4529;
	uint16_t x2290 = UINT16_MAX;
	int32_t x2291 = INT32_MIN;
	int8_t x2292 = 0;
	int32_t t76 = -201;

	t76 = (x2289>>((x2290|x2291)&x2292));

	if (t76 != 4529) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2329 = INT8_MAX;
	volatile int64_t x2332 = -209665457LL;

	t77 = (x2329>>((x2330|x2331)&x2332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2333 = 114022LLU;
	uint16_t x2334 = 24U;
	int64_t x2335 = INT64_MIN;
	int64_t x2336 = 186595855177LL;
	uint64_t t78 = 878630140LLU;

	t78 = (x2333>>((x2334|x2335)&x2336));

	if (t78 != 445LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x2357 = INT64_MAX;
	int32_t x2359 = 7;
	uint16_t x2360 = 7U;

	t79 = (x2357>>((x2358|x2359)&x2360));

	if (t79 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2369 = 214;
	uint8_t x2370 = 0U;
	uint16_t x2371 = 3U;

	t80 = (x2369>>((x2370|x2371)&x2372));

	if (t80 != 107) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2389 = INT64_MAX;
	static uint64_t x2390 = 4063467LLU;
	int16_t x2391 = INT16_MIN;
	static uint16_t x2392 = 21U;
	volatile int64_t t81 = 232LL;

	t81 = (x2389>>((x2390|x2391)&x2392));

	if (t81 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2445 = INT64_MAX;
	static volatile int16_t x2446 = INT16_MIN;
	uint8_t x2448 = 1U;
	static int64_t t82 = INT64_MAX;

	t82 = (x2445>>((x2446|x2447)&x2448));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x2453 = 2U;
	int32_t x2454 = -926;
	uint32_t x2455 = 280386U;
	int16_t x2456 = 0;
	int32_t t83 = 20873;

	t83 = (x2453>>((x2454|x2455)&x2456));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x2506 = INT64_MIN;
	static int64_t x2507 = INT64_MIN;
	int32_t x2508 = 0;
	volatile int32_t t84 = 234465598;

	t84 = (x2505>>((x2506|x2507)&x2508));

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2541 = UINT16_MAX;
	static int64_t x2543 = -48640924819LL;
	int8_t x2544 = 2;

	t85 = (x2541>>((x2542|x2543)&x2544));

	if (t85 != 16383) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2561 = 497682155;
	uint16_t x2562 = UINT16_MAX;
	int64_t x2564 = INT64_MIN;
	volatile int32_t t86 = 1910815;

	t86 = (x2561>>((x2562|x2563)&x2564));

	if (t86 != 497682155) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x2581 = UINT8_MAX;
	uint8_t x2583 = 32U;
	static volatile int8_t x2584 = 3;
	int32_t t87 = 55273122;

	t87 = (x2581>>((x2582|x2583)&x2584));

	if (t87 != 31) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2585 = INT64_MAX;
	volatile int8_t x2586 = INT8_MIN;
	int64_t x2587 = -1LL;
	static int16_t x2588 = 2;
	int64_t t88 = 159903111LL;

	t88 = (x2585>>((x2586|x2587)&x2588));

	if (t88 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x2613 = 13U;
	static int32_t x2614 = INT32_MAX;
	int64_t x2615 = INT64_MIN;
	static uint8_t x2616 = 0U;
	static volatile int32_t t89 = -70708;

	t89 = (x2613>>((x2614|x2615)&x2616));

	if (t89 != 13) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2617 = 3552;
	static uint16_t x2620 = 5U;
	volatile int32_t t90 = 1;

	t90 = (x2617>>((x2618|x2619)&x2620));

	if (t90 != 1776) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x2625 = 31690683482466519LLU;
	int64_t x2626 = -1LL;
	int8_t x2627 = 52;
	uint32_t x2628 = 35U;
	uint64_t t91 = 21017343415LLU;

	t91 = (x2625>>((x2626|x2627)&x2628));

	if (t91 != 922320LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x2657 = 23U;
	volatile int8_t x2658 = INT8_MAX;
	uint16_t x2659 = 81U;
	volatile int64_t x2660 = 29194LL;

	t92 = (x2657>>((x2658|x2659)&x2660));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x2717 = INT64_MAX;
	static int8_t x2718 = 3;
	int32_t x2719 = INT32_MIN;
	int16_t x2720 = INT16_MAX;
	static int64_t t93 = 122176845LL;

	t93 = (x2717>>((x2718|x2719)&x2720));

	if (t93 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x2765 = 175508;
	uint16_t x2766 = 1U;
	int32_t x2767 = INT32_MIN;
	volatile int32_t t94 = 3;

	t94 = (x2765>>((x2766|x2767)&x2768));

	if (t94 != 87754) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x2773 = 283;
	volatile int32_t x2774 = INT32_MIN;
	int16_t x2775 = -1;
	uint8_t x2776 = 2U;
	int32_t t95 = 40228928;

	t95 = (x2773>>((x2774|x2775)&x2776));

	if (t95 != 70) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x2777 = 66559146052619149LLU;
	uint32_t x2780 = UINT32_MAX;

	t96 = (x2777>>((x2778|x2779)&x2780));

	if (t96 != 126951496224LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2793 = 4;
	int8_t x2794 = 2;
	static int16_t x2795 = INT16_MIN;

	t97 = (x2793>>((x2794|x2795)&x2796));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x2801 = 199327288923879357LLU;
	int16_t x2802 = 1510;
	static int32_t x2803 = 7477;
	static int32_t x2804 = INT32_MIN;
	uint64_t t98 = 8912LLU;

	t98 = (x2801>>((x2802|x2803)&x2804));

	if (t98 != 199327288923879357LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x2823 = UINT16_MAX;
	uint32_t x2824 = 0U;
	uint64_t t99 = UINT64_MAX;

	t99 = (x2821>>((x2822|x2823)&x2824));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

