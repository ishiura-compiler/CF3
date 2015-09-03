#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x57 = INT8_MAX;
static uint8_t x152 = 20U;
volatile uint8_t x188 = UINT8_MAX;
volatile int32_t t3 = 2;
uint8_t x195 = 0U;
int32_t t4 = -62048246;
int64_t x204 = INT64_MAX;
int64_t x253 = INT64_MIN;
int32_t x257 = INT32_MIN;
static int32_t t8 = -20;
volatile int16_t x306 = -101;
int32_t t11 = -700;
int32_t x586 = -1;
volatile uint16_t x634 = UINT16_MAX;
volatile int64_t x636 = INT64_MAX;
int32_t t14 = -1027967436;
int8_t x694 = 3;
static int16_t x709 = -1;
static int32_t t18 = 84;
volatile uint16_t x793 = 19U;
uint8_t x847 = 24U;
static int16_t x850 = INT16_MIN;
static uint64_t x854 = UINT64_MAX;
volatile int32_t t24 = -9;
volatile int8_t x920 = 21;
uint64_t x929 = 32495679050723065LLU;
static uint8_t x964 = 6U;
uint16_t x979 = 0U;
int8_t x1019 = 2;
uint64_t x1037 = UINT64_MAX;
volatile uint32_t x1040 = 361361U;
volatile int32_t t31 = 129992;
volatile int8_t x1077 = INT8_MAX;
static int16_t x1078 = 1812;
uint32_t x1178 = UINT32_MAX;
uint8_t x1247 = 0U;
volatile int32_t x1318 = INT32_MIN;
uint16_t x1360 = UINT16_MAX;
int8_t x1425 = INT8_MAX;
static uint8_t x1427 = 4U;
int64_t x1428 = -1LL;
static int16_t x1437 = -1;
int32_t x1446 = -7045103;
int8_t x1502 = -1;
static int32_t x1523 = 18;
int16_t x1539 = 12;
volatile uint32_t x1540 = 3624U;
static int32_t t52 = 51954;
static int8_t x1568 = INT8_MIN;
uint64_t x1573 = 1599207609108LLU;
uint16_t x1590 = UINT16_MAX;
uint8_t x1591 = 25U;
static int32_t x1593 = INT32_MAX;
int32_t t57 = -511014;
uint8_t x1619 = 23U;
uint8_t x1666 = UINT8_MAX;
uint8_t x1700 = UINT8_MAX;
volatile int32_t t61 = 4025408;
static uint32_t x1733 = 6426U;
uint64_t x1848 = 7LLU;
volatile int32_t t68 = -9313;
int64_t x1942 = -3245LL;
uint8_t x1955 = 1U;
int32_t t70 = 504177;
uint16_t x1965 = 27556U;
int32_t t72 = -2930;
static uint32_t x1984 = UINT32_MAX;
int64_t x2008 = INT64_MIN;
int64_t x2042 = INT64_MIN;
int16_t x2043 = 11;
volatile int32_t t76 = 177834;
int32_t x2077 = -192741;
int32_t x2078 = INT32_MIN;
uint16_t x2079 = 1U;
volatile uint16_t x2184 = UINT16_MAX;
int64_t x2230 = -226871086088687443LL;
uint8_t x2242 = UINT8_MAX;
static int8_t x2244 = 4;
uint64_t x2249 = UINT64_MAX;
int64_t x2276 = -1LL;
volatile int32_t t86 = -7151352;
volatile uint32_t x2323 = 14U;
volatile uint64_t x2344 = UINT64_MAX;
int32_t t90 = 4835707;
uint8_t x2391 = 15U;
int8_t x2407 = 11;
int32_t x2495 = 2;
volatile int32_t t96 = -1974;
volatile uint8_t x2639 = 0U;


void f0(void) {
	int8_t x58 = -1;
	uint32_t x59 = 26U;
	int64_t x60 = 769662439675514LL;
	int32_t t0 = -5;

	t0 = (((x57<=x58)>>x59)<=x60);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x125 = -1LL;
	uint16_t x126 = 905U;
	int8_t x127 = 1;
	volatile uint8_t x128 = 0U;
	volatile int32_t t1 = -29658;

	t1 = (((x125<=x126)>>x127)<=x128);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x149 = 140390LLU;
	static volatile int32_t x150 = INT32_MAX;
	uint16_t x151 = 6U;
	int32_t t2 = -1;

	t2 = (((x149<=x150)>>x151)<=x152);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x185 = INT32_MIN;
	uint8_t x186 = UINT8_MAX;
	uint16_t x187 = 19U;

	t3 = (((x185<=x186)>>x187)<=x188);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x193 = -52;
	uint8_t x194 = 42U;
	static volatile int64_t x196 = INT64_MAX;

	t4 = (((x193<=x194)>>x195)<=x196);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x201 = 11144966LLU;
	uint8_t x202 = 36U;
	int8_t x203 = 0;
	volatile int32_t t5 = -1393;

	t5 = (((x201<=x202)>>x203)<=x204);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x254 = INT32_MIN;
	uint16_t x255 = 14U;
	uint16_t x256 = 24U;
	volatile int32_t t6 = -2;

	t6 = (((x253<=x254)>>x255)<=x256);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x258 = 2034253996U;
	volatile int8_t x259 = 1;
	int64_t x260 = INT64_MIN;
	static volatile int32_t t7 = 1;

	t7 = (((x257<=x258)>>x259)<=x260);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x265 = 5369U;
	volatile uint32_t x266 = 78U;
	uint8_t x267 = 1U;
	static int16_t x268 = INT16_MAX;

	t8 = (((x265<=x266)>>x267)<=x268);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x305 = 7U;
	uint16_t x307 = 31U;
	static int32_t x308 = -7912;
	volatile int32_t t9 = -7915;

	t9 = (((x305<=x306)>>x307)<=x308);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x413 = 15330LLU;
	int64_t x414 = -1LL;
	uint64_t x415 = 13LLU;
	volatile int64_t x416 = INT64_MIN;
	volatile int32_t t10 = -40;

	t10 = (((x413<=x414)>>x415)<=x416);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x505 = UINT8_MAX;
	static int16_t x506 = -1;
	volatile uint8_t x507 = 1U;
	int16_t x508 = -1;

	t11 = (((x505<=x506)>>x507)<=x508);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x537 = 111U;
	int8_t x538 = INT8_MIN;
	static volatile int8_t x539 = 15;
	uint32_t x540 = UINT32_MAX;
	volatile int32_t t12 = -715;

	t12 = (((x537<=x538)>>x539)<=x540);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x585 = -1;
	volatile uint16_t x587 = 0U;
	uint32_t x588 = 1618363U;
	volatile int32_t t13 = -509400706;

	t13 = (((x585<=x586)>>x587)<=x588);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x633 = -4;
	uint8_t x635 = 16U;

	t14 = (((x633<=x634)>>x635)<=x636);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x673 = INT8_MIN;
	uint32_t x674 = 493U;
	uint8_t x675 = 14U;
	int8_t x676 = 0;
	int32_t t15 = 0;

	t15 = (((x673<=x674)>>x675)<=x676);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x693 = -402;
	int16_t x695 = 5;
	int16_t x696 = INT16_MIN;
	int32_t t16 = 1;

	t16 = (((x693<=x694)>>x695)<=x696);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x710 = INT64_MIN;
	volatile uint8_t x711 = 7U;
	int64_t x712 = INT64_MIN;
	static int32_t t17 = 35;

	t17 = (((x709<=x710)>>x711)<=x712);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x733 = INT16_MIN;
	int64_t x734 = INT64_MAX;
	uint16_t x735 = 0U;
	int8_t x736 = -54;

	t18 = (((x733<=x734)>>x735)<=x736);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x769 = -9052LL;
	uint64_t x770 = 8073064LLU;
	volatile int64_t x771 = 0LL;
	uint32_t x772 = UINT32_MAX;
	volatile int32_t t19 = -24216484;

	t19 = (((x769<=x770)>>x771)<=x772);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x794 = INT32_MIN;
	int8_t x795 = 1;
	static volatile uint8_t x796 = 90U;
	volatile int32_t t20 = -7239395;

	t20 = (((x793<=x794)>>x795)<=x796);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x805 = 81U;
	int32_t x806 = -6744300;
	volatile int16_t x807 = 1;
	int32_t x808 = -1;
	volatile int32_t t21 = 312;

	t21 = (((x805<=x806)>>x807)<=x808);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x845 = -1;
	volatile int64_t x846 = INT64_MAX;
	int16_t x848 = INT16_MIN;
	int32_t t22 = -8;

	t22 = (((x845<=x846)>>x847)<=x848);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x849 = 946239LL;
	uint8_t x851 = 3U;
	int64_t x852 = INT64_MIN;
	volatile int32_t t23 = -279;

	t23 = (((x849<=x850)>>x851)<=x852);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x853 = INT16_MIN;
	uint64_t x855 = 10LLU;
	volatile uint8_t x856 = 4U;

	t24 = (((x853<=x854)>>x855)<=x856);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x917 = -1;
	uint64_t x918 = UINT64_MAX;
	uint16_t x919 = 19U;
	volatile int32_t t25 = -572207994;

	t25 = (((x917<=x918)>>x919)<=x920);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x930 = INT32_MIN;
	uint16_t x931 = 5U;
	uint16_t x932 = UINT16_MAX;
	int32_t t26 = 0;

	t26 = (((x929<=x930)>>x931)<=x932);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x961 = -1;
	uint8_t x962 = 77U;
	static uint16_t x963 = 2U;
	static volatile int32_t t27 = -885915;

	t27 = (((x961<=x962)>>x963)<=x964);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x977 = 1;
	int16_t x978 = INT16_MIN;
	volatile int16_t x980 = INT16_MIN;
	static volatile int32_t t28 = -652;

	t28 = (((x977<=x978)>>x979)<=x980);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x993 = INT64_MIN;
	int16_t x994 = INT16_MIN;
	int64_t x995 = 6LL;
	static int64_t x996 = -1LL;
	static int32_t t29 = -1569;

	t29 = (((x993<=x994)>>x995)<=x996);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1017 = INT32_MIN;
	static int8_t x1018 = -1;
	int16_t x1020 = INT16_MIN;
	volatile int32_t t30 = -4070790;

	t30 = (((x1017<=x1018)>>x1019)<=x1020);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x1038 = -6901;
	static uint32_t x1039 = 4U;

	t31 = (((x1037<=x1038)>>x1039)<=x1040);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1079 = 8U;
	static uint16_t x1080 = 0U;
	volatile int32_t t32 = 6;

	t32 = (((x1077<=x1078)>>x1079)<=x1080);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1141 = UINT32_MAX;
	uint8_t x1142 = UINT8_MAX;
	volatile int64_t x1143 = 11LL;
	volatile int32_t x1144 = INT32_MIN;
	static volatile int32_t t33 = -67;

	t33 = (((x1141<=x1142)>>x1143)<=x1144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1149 = INT32_MIN;
	volatile uint8_t x1150 = 3U;
	uint16_t x1151 = 14U;
	uint8_t x1152 = 15U;
	static int32_t t34 = 1057824;

	t34 = (((x1149<=x1150)>>x1151)<=x1152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x1177 = INT64_MIN;
	uint8_t x1179 = 2U;
	volatile uint16_t x1180 = 46U;
	volatile int32_t t35 = -92314;

	t35 = (((x1177<=x1178)>>x1179)<=x1180);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1185 = 2U;
	int32_t x1186 = INT32_MIN;
	static int8_t x1187 = 0;
	int32_t x1188 = INT32_MAX;
	volatile int32_t t36 = 1299793;

	t36 = (((x1185<=x1186)>>x1187)<=x1188);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1189 = INT32_MIN;
	uint32_t x1190 = UINT32_MAX;
	int8_t x1191 = 1;
	int32_t x1192 = INT32_MIN;
	int32_t t37 = -1653223;

	t37 = (((x1189<=x1190)>>x1191)<=x1192);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x1245 = UINT64_MAX;
	static int64_t x1246 = -1LL;
	uint16_t x1248 = 315U;
	volatile int32_t t38 = 373520;

	t38 = (((x1245<=x1246)>>x1247)<=x1248);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1281 = 126U;
	int64_t x1282 = INT64_MIN;
	static volatile uint8_t x1283 = 16U;
	int32_t x1284 = 1471143;
	volatile int32_t t39 = -4;

	t39 = (((x1281<=x1282)>>x1283)<=x1284);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x1297 = -1;
	static volatile uint32_t x1298 = 1434903660U;
	uint8_t x1299 = 6U;
	uint64_t x1300 = UINT64_MAX;
	volatile int32_t t40 = 1255679;

	t40 = (((x1297<=x1298)>>x1299)<=x1300);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x1317 = UINT64_MAX;
	uint64_t x1319 = 2LLU;
	static int8_t x1320 = -1;
	volatile int32_t t41 = -297042920;

	t41 = (((x1317<=x1318)>>x1319)<=x1320);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x1321 = -1LL;
	static volatile int32_t x1322 = INT32_MIN;
	volatile int64_t x1323 = 5LL;
	int64_t x1324 = 787296269693664407LL;
	int32_t t42 = -3;

	t42 = (((x1321<=x1322)>>x1323)<=x1324);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1357 = 1602255;
	volatile int64_t x1358 = INT64_MIN;
	uint8_t x1359 = 7U;
	int32_t t43 = 2;

	t43 = (((x1357<=x1358)>>x1359)<=x1360);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x1365 = UINT32_MAX;
	int8_t x1366 = INT8_MAX;
	uint8_t x1367 = 5U;
	volatile int64_t x1368 = 1562290109349LL;
	volatile int32_t t44 = 30;

	t44 = (((x1365<=x1366)>>x1367)<=x1368);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1426 = 288708U;
	volatile int32_t t45 = -201066577;

	t45 = (((x1425<=x1426)>>x1427)<=x1428);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1438 = 9U;
	uint16_t x1439 = 10U;
	static int32_t x1440 = -109302;
	volatile int32_t t46 = -11;

	t46 = (((x1437<=x1438)>>x1439)<=x1440);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1441 = 16260U;
	volatile int16_t x1442 = INT16_MIN;
	uint8_t x1443 = 4U;
	uint16_t x1444 = UINT16_MAX;
	int32_t t47 = -9;

	t47 = (((x1441<=x1442)>>x1443)<=x1444);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x1445 = -1;
	uint8_t x1447 = 0U;
	int8_t x1448 = 34;
	volatile int32_t t48 = 24213686;

	t48 = (((x1445<=x1446)>>x1447)<=x1448);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1501 = 28U;
	int8_t x1503 = 2;
	volatile int32_t x1504 = -1;
	int32_t t49 = -112;

	t49 = (((x1501<=x1502)>>x1503)<=x1504);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1521 = UINT16_MAX;
	static volatile int32_t x1522 = -122512;
	static volatile int64_t x1524 = -35406599LL;
	static int32_t t50 = -98867106;

	t50 = (((x1521<=x1522)>>x1523)<=x1524);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x1537 = 1;
	uint16_t x1538 = 349U;
	volatile int32_t t51 = 0;

	t51 = (((x1537<=x1538)>>x1539)<=x1540);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1545 = 4U;
	int64_t x1546 = -597070897987963236LL;
	static volatile int8_t x1547 = 14;
	volatile int64_t x1548 = INT64_MIN;

	t52 = (((x1545<=x1546)>>x1547)<=x1548);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1565 = -1LL;
	static int16_t x1566 = INT16_MIN;
	volatile uint16_t x1567 = 2U;
	int32_t t53 = 655;

	t53 = (((x1565<=x1566)>>x1567)<=x1568);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x1569 = -2116341118646LL;
	int8_t x1570 = 0;
	volatile uint64_t x1571 = 21LLU;
	static int16_t x1572 = INT16_MAX;
	int32_t t54 = 4138451;

	t54 = (((x1569<=x1570)>>x1571)<=x1572);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1574 = INT64_MIN;
	static uint16_t x1575 = 4U;
	uint8_t x1576 = UINT8_MAX;
	volatile int32_t t55 = -22;

	t55 = (((x1573<=x1574)>>x1575)<=x1576);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1589 = -229;
	int32_t x1592 = INT32_MIN;
	volatile int32_t t56 = 311489645;

	t56 = (((x1589<=x1590)>>x1591)<=x1592);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1594 = UINT16_MAX;
	uint8_t x1595 = 7U;
	int16_t x1596 = INT16_MAX;

	t57 = (((x1593<=x1594)>>x1595)<=x1596);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x1613 = 218359233674LL;
	int64_t x1614 = -41803515749LL;
	static uint32_t x1615 = 4U;
	uint32_t x1616 = 1293427939U;
	int32_t t58 = -6612;

	t58 = (((x1613<=x1614)>>x1615)<=x1616);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1617 = INT32_MIN;
	volatile int8_t x1618 = INT8_MIN;
	int64_t x1620 = -1LL;
	static volatile int32_t t59 = -1;

	t59 = (((x1617<=x1618)>>x1619)<=x1620);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1665 = UINT64_MAX;
	uint8_t x1667 = 4U;
	int8_t x1668 = 0;
	int32_t t60 = -4981;

	t60 = (((x1665<=x1666)>>x1667)<=x1668);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1697 = 3131106100071142828LLU;
	int16_t x1698 = INT16_MIN;
	volatile uint8_t x1699 = 13U;

	t61 = (((x1697<=x1698)>>x1699)<=x1700);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1705 = -1LL;
	uint16_t x1706 = 9602U;
	uint32_t x1707 = 6U;
	int16_t x1708 = -1;
	volatile int32_t t62 = -61;

	t62 = (((x1705<=x1706)>>x1707)<=x1708);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x1734 = INT64_MIN;
	int8_t x1735 = 1;
	volatile int16_t x1736 = -1;
	int32_t t63 = 18674482;

	t63 = (((x1733<=x1734)>>x1735)<=x1736);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1761 = INT8_MIN;
	int16_t x1762 = INT16_MAX;
	uint8_t x1763 = 8U;
	uint16_t x1764 = 6578U;
	static int32_t t64 = -6143408;

	t64 = (((x1761<=x1762)>>x1763)<=x1764);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x1765 = 0LLU;
	int64_t x1766 = 799693LL;
	static uint16_t x1767 = 22U;
	volatile int8_t x1768 = INT8_MIN;
	static int32_t t65 = 29;

	t65 = (((x1765<=x1766)>>x1767)<=x1768);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x1809 = -25;
	uint64_t x1810 = 1108538976753468786LLU;
	volatile uint8_t x1811 = 17U;
	volatile int16_t x1812 = -3936;
	volatile int32_t t66 = -1333630;

	t66 = (((x1809<=x1810)>>x1811)<=x1812);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x1845 = UINT8_MAX;
	uint32_t x1846 = UINT32_MAX;
	static int64_t x1847 = 3LL;
	volatile int32_t t67 = -1909058;

	t67 = (((x1845<=x1846)>>x1847)<=x1848);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x1865 = INT64_MIN;
	int16_t x1866 = INT16_MIN;
	uint16_t x1867 = 3U;
	static int32_t x1868 = INT32_MAX;

	t68 = (((x1865<=x1866)>>x1867)<=x1868);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x1941 = 146067136905105LLU;
	static int8_t x1943 = 0;
	int32_t x1944 = -1;
	volatile int32_t t69 = 110540187;

	t69 = (((x1941<=x1942)>>x1943)<=x1944);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x1953 = -363;
	static int64_t x1954 = INT64_MIN;
	int32_t x1956 = INT32_MAX;

	t70 = (((x1953<=x1954)>>x1955)<=x1956);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x1966 = UINT64_MAX;
	int8_t x1967 = 2;
	int32_t x1968 = 305;
	volatile int32_t t71 = -22867204;

	t71 = (((x1965<=x1966)>>x1967)<=x1968);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x1969 = INT32_MIN;
	volatile uint32_t x1970 = 1U;
	uint8_t x1971 = 1U;
	uint8_t x1972 = 59U;

	t72 = (((x1969<=x1970)>>x1971)<=x1972);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x1981 = 0;
	int64_t x1982 = INT64_MAX;
	uint32_t x1983 = 2U;
	int32_t t73 = -3111739;

	t73 = (((x1981<=x1982)>>x1983)<=x1984);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x2005 = INT8_MIN;
	int32_t x2006 = INT32_MIN;
	uint16_t x2007 = 20U;
	volatile int32_t t74 = -7637;

	t74 = (((x2005<=x2006)>>x2007)<=x2008);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2025 = INT32_MIN;
	static int64_t x2026 = INT64_MAX;
	uint8_t x2027 = 21U;
	int64_t x2028 = -19077LL;
	volatile int32_t t75 = 8900;

	t75 = (((x2025<=x2026)>>x2027)<=x2028);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x2041 = INT8_MIN;
	int64_t x2044 = -1LL;

	t76 = (((x2041<=x2042)>>x2043)<=x2044);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2065 = 24U;
	uint16_t x2066 = 29346U;
	static uint16_t x2067 = 3U;
	uint32_t x2068 = UINT32_MAX;
	static volatile int32_t t77 = 42542193;

	t77 = (((x2065<=x2066)>>x2067)<=x2068);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x2080 = 145U;
	volatile int32_t t78 = 1262398;

	t78 = (((x2077<=x2078)>>x2079)<=x2080);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x2085 = INT64_MIN;
	static int32_t x2086 = 11;
	volatile uint8_t x2087 = 10U;
	int32_t x2088 = INT32_MAX;
	volatile int32_t t79 = -1;

	t79 = (((x2085<=x2086)>>x2087)<=x2088);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x2133 = 19U;
	int16_t x2134 = INT16_MIN;
	int8_t x2135 = 16;
	uint8_t x2136 = UINT8_MAX;
	static volatile int32_t t80 = 314420;

	t80 = (((x2133<=x2134)>>x2135)<=x2136);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2181 = 3;
	int16_t x2182 = INT16_MAX;
	volatile uint8_t x2183 = 9U;
	int32_t t81 = 25;

	t81 = (((x2181<=x2182)>>x2183)<=x2184);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x2201 = -205462564086840855LL;
	uint8_t x2202 = 3U;
	static uint8_t x2203 = 21U;
	int32_t x2204 = INT32_MIN;
	int32_t t82 = -233;

	t82 = (((x2201<=x2202)>>x2203)<=x2204);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2229 = 2;
	volatile int8_t x2231 = 1;
	int16_t x2232 = -7289;
	volatile int32_t t83 = -998781897;

	t83 = (((x2229<=x2230)>>x2231)<=x2232);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2241 = INT32_MIN;
	uint8_t x2243 = 14U;
	volatile int32_t t84 = -4;

	t84 = (((x2241<=x2242)>>x2243)<=x2244);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2250 = INT16_MAX;
	static int16_t x2251 = 7;
	int64_t x2252 = INT64_MIN;
	int32_t t85 = -1;

	t85 = (((x2249<=x2250)>>x2251)<=x2252);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2273 = INT32_MIN;
	volatile int32_t x2274 = INT32_MIN;
	uint16_t x2275 = 1U;

	t86 = (((x2273<=x2274)>>x2275)<=x2276);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x2321 = 505U;
	int32_t x2322 = INT32_MAX;
	static volatile uint32_t x2324 = UINT32_MAX;
	int32_t t87 = -199359;

	t87 = (((x2321<=x2322)>>x2323)<=x2324);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x2341 = 9U;
	uint16_t x2342 = 50U;
	int64_t x2343 = 1LL;
	volatile int32_t t88 = 27285673;

	t88 = (((x2341<=x2342)>>x2343)<=x2344);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x2345 = -1;
	uint8_t x2346 = 9U;
	int16_t x2347 = 1;
	int64_t x2348 = -1LL;
	int32_t t89 = -183;

	t89 = (((x2345<=x2346)>>x2347)<=x2348);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x2377 = 25U;
	static int32_t x2378 = 129881;
	volatile int8_t x2379 = 6;
	volatile int32_t x2380 = -1;

	t90 = (((x2377<=x2378)>>x2379)<=x2380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x2389 = 1U;
	static int16_t x2390 = -1;
	int32_t x2392 = -1;
	static int32_t t91 = -181729737;

	t91 = (((x2389<=x2390)>>x2391)<=x2392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x2405 = 383487477U;
	uint16_t x2406 = 143U;
	int32_t x2408 = 4296673;
	static int32_t t92 = 44;

	t92 = (((x2405<=x2406)>>x2407)<=x2408);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x2457 = 14805U;
	int16_t x2458 = INT16_MIN;
	uint8_t x2459 = 24U;
	int16_t x2460 = 5671;
	int32_t t93 = 258397690;

	t93 = (((x2457<=x2458)>>x2459)<=x2460);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x2473 = 74971964U;
	static int64_t x2474 = -1LL;
	uint8_t x2475 = 0U;
	int16_t x2476 = -1;
	volatile int32_t t94 = -1016047;

	t94 = (((x2473<=x2474)>>x2475)<=x2476);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x2493 = INT32_MIN;
	int8_t x2494 = -1;
	volatile int16_t x2496 = -1;
	static volatile int32_t t95 = 3917761;

	t95 = (((x2493<=x2494)>>x2495)<=x2496);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x2517 = 154247473;
	uint64_t x2518 = 122607990LLU;
	volatile uint8_t x2519 = 10U;
	int64_t x2520 = INT64_MAX;

	t96 = (((x2517<=x2518)>>x2519)<=x2520);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2593 = -1LL;
	volatile int32_t x2594 = INT32_MIN;
	volatile uint16_t x2595 = 2U;
	int16_t x2596 = -1;
	int32_t t97 = -23746054;

	t97 = (((x2593<=x2594)>>x2595)<=x2596);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x2629 = 6;
	int16_t x2630 = INT16_MAX;
	int16_t x2631 = 1;
	volatile int16_t x2632 = INT16_MIN;
	int32_t t98 = 1228141;

	t98 = (((x2629<=x2630)>>x2631)<=x2632);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x2637 = INT8_MIN;
	static int64_t x2638 = INT64_MIN;
	static int64_t x2640 = -1LL;
	int32_t t99 = -20488836;

	t99 = (((x2637<=x2638)>>x2639)<=x2640);

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

