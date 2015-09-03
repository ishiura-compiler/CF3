#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x89 = INT8_MAX;
volatile int32_t x90 = INT32_MAX;
static uint8_t x91 = 100U;
int8_t x92 = 3;
int32_t x163 = 1583577;
uint8_t x262 = UINT8_MAX;
volatile int32_t t6 = 78;
volatile int64_t x325 = INT64_MIN;
int8_t x333 = INT8_MAX;
int8_t x334 = INT8_MIN;
volatile int32_t t9 = 71346;
volatile int8_t x341 = -6;
static int8_t x390 = INT8_MIN;
volatile int32_t t11 = -308813954;
uint8_t x480 = 2U;
volatile int32_t t15 = 122536561;
static volatile int32_t t17 = -1;
static volatile int64_t x802 = -1LL;
uint16_t x817 = UINT16_MAX;
int8_t x834 = INT8_MIN;
uint16_t x836 = 1U;
volatile int32_t t20 = -20921696;
uint32_t x846 = 126238783U;
static int8_t x847 = 13;
int8_t x848 = 7;
int64_t x957 = INT64_MAX;
static uint16_t x972 = 11U;
volatile uint8_t x1004 = 0U;
volatile int32_t t27 = 1;
uint32_t x1039 = 131760004U;
uint8_t x1040 = 2U;
volatile int32_t t30 = 317;
static uint8_t x1126 = UINT8_MAX;
volatile int8_t x1128 = 1;
volatile int32_t t34 = 188;
int64_t x1269 = INT64_MIN;
uint8_t x1272 = 3U;
static int16_t x1299 = -15402;
int8_t x1306 = -1;
int8_t x1308 = 0;
int8_t x1326 = -1;
int32_t x1345 = INT32_MIN;
int8_t x1346 = INT8_MIN;
static uint16_t x1347 = 964U;
uint64_t x1461 = 6622LLU;
int16_t x1464 = 29;
int16_t x1483 = INT16_MIN;
int32_t x1505 = -1;
volatile int32_t t49 = 681008825;
volatile int16_t x1604 = 7;
int64_t x1605 = INT64_MIN;
int64_t x1607 = -2366LL;
volatile int32_t x1686 = 1626;
volatile uint64_t x1738 = UINT64_MAX;
int64_t x1743 = INT64_MIN;
volatile uint32_t x1807 = 399773381U;
int32_t t56 = -778272;
volatile uint64_t x1857 = UINT64_MAX;
int64_t x1859 = 716168868LL;
volatile int16_t x1951 = 1;
int8_t x1954 = INT8_MIN;
volatile int64_t x1981 = -1LL;
int32_t x1982 = 16743;
static uint8_t x2024 = 2U;
int64_t x2099 = INT64_MIN;
int16_t x2100 = 0;
volatile int16_t x2135 = INT16_MIN;
volatile uint32_t x2305 = 7070U;
volatile int32_t t69 = -12857326;
static volatile int64_t x2315 = INT64_MIN;
volatile int32_t t70 = -26;
int64_t x2387 = INT64_MAX;
int32_t x2394 = -1;
static uint64_t x2425 = 3LLU;
int32_t x2427 = -1;
uint16_t x2436 = 11U;
volatile int32_t t79 = -18159;
uint32_t x2513 = UINT32_MAX;
uint32_t x2542 = 1724389271U;
int32_t x2572 = 1;
int32_t x2678 = INT32_MIN;
uint64_t x2679 = 106421162819108815LLU;
int16_t x2746 = INT16_MIN;
static int8_t x2748 = 1;
static uint8_t x2812 = 0U;
uint8_t x2840 = 6U;
static int32_t t90 = 219662;
static int64_t x2918 = -1LL;
uint16_t x2920 = 6U;
int32_t t93 = -7869;
int32_t t94 = -963587;
int32_t t95 = 39;
int8_t x2957 = 18;
int8_t x2984 = 7;
static int32_t t97 = 2;
static int32_t x2986 = INT32_MIN;
int32_t x3013 = 3;
volatile int32_t x3014 = -1;
int32_t t99 = -98559;


void f0(void) {
	volatile int32_t t0 = 767924948;

	t0 = ((x89<(x90&x91))>>x92);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x105 = UINT16_MAX;
	uint64_t x106 = 27314716063381033LLU;
	static uint64_t x107 = UINT64_MAX;
	volatile uint16_t x108 = 7U;
	static int32_t t1 = 1012915981;

	t1 = ((x105<(x106&x107))>>x108);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x161 = 16517756LLU;
	uint8_t x162 = 55U;
	int8_t x164 = 20;
	int32_t t2 = 82286;

	t2 = ((x161<(x162&x163))>>x164);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x197 = UINT16_MAX;
	volatile int8_t x198 = INT8_MIN;
	int32_t x199 = -1;
	volatile uint8_t x200 = 7U;
	int32_t t3 = 4507;

	t3 = ((x197<(x198&x199))>>x200);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x233 = 50;
	int32_t x234 = INT32_MAX;
	int16_t x235 = 6270;
	uint32_t x236 = 1U;
	int32_t t4 = 515632;

	t4 = ((x233<(x234&x235))>>x236);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x253 = -1;
	int32_t x254 = 381574156;
	int16_t x255 = 0;
	int8_t x256 = 11;
	volatile int32_t t5 = 3358408;

	t5 = ((x253<(x254&x255))>>x256);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x261 = -1;
	int64_t x263 = INT64_MAX;
	volatile int8_t x264 = 0;

	t6 = ((x261<(x262&x263))>>x264);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x289 = 10246U;
	uint8_t x290 = 100U;
	static int16_t x291 = INT16_MIN;
	uint32_t x292 = 1U;
	static volatile int32_t t7 = -1154505;

	t7 = ((x289<(x290&x291))>>x292);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x326 = INT16_MIN;
	int32_t x327 = -1;
	uint32_t x328 = 2U;
	volatile int32_t t8 = 123;

	t8 = ((x325<(x326&x327))>>x328);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x335 = UINT16_MAX;
	uint8_t x336 = 30U;

	t9 = ((x333<(x334&x335))>>x336);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x342 = 612923U;
	uint8_t x343 = 59U;
	static uint8_t x344 = 31U;
	int32_t t10 = 1;

	t10 = ((x341<(x342&x343))>>x344);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x389 = UINT32_MAX;
	int16_t x391 = INT16_MIN;
	uint16_t x392 = 2U;

	t11 = ((x389<(x390&x391))>>x392);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x477 = -802563;
	uint8_t x478 = 14U;
	static int64_t x479 = INT64_MIN;
	static volatile int32_t t12 = 7;

	t12 = ((x477<(x478&x479))>>x480);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x481 = 0U;
	static int16_t x482 = -1841;
	int16_t x483 = INT16_MAX;
	volatile uint8_t x484 = 5U;
	volatile int32_t t13 = -25;

	t13 = ((x481<(x482&x483))>>x484);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x557 = INT16_MIN;
	int8_t x558 = 2;
	volatile uint64_t x559 = 1005111870132603953LLU;
	uint8_t x560 = 5U;
	int32_t t14 = -34;

	t14 = ((x557<(x558&x559))>>x560);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x569 = -1;
	uint16_t x570 = 198U;
	static volatile int32_t x571 = -212660;
	volatile int16_t x572 = 21;

	t15 = ((x569<(x570&x571))>>x572);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x573 = 126U;
	static uint8_t x574 = UINT8_MAX;
	static uint16_t x575 = 78U;
	volatile int16_t x576 = 0;
	volatile int32_t t16 = -865;

	t16 = ((x573<(x574&x575))>>x576);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x733 = 1118358LLU;
	int32_t x734 = INT32_MAX;
	static uint16_t x735 = 8U;
	uint8_t x736 = 0U;

	t17 = ((x733<(x734&x735))>>x736);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x801 = -1;
	int16_t x803 = 153;
	uint32_t x804 = 3U;
	static int32_t t18 = -29;

	t18 = ((x801<(x802&x803))>>x804);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x818 = 61564421991LLU;
	int8_t x819 = INT8_MIN;
	volatile uint8_t x820 = 5U;
	int32_t t19 = 2293;

	t19 = ((x817<(x818&x819))>>x820);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x833 = -1;
	int8_t x835 = 59;

	t20 = ((x833<(x834&x835))>>x836);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x845 = 245030;
	volatile int32_t t21 = 3641;

	t21 = ((x845<(x846&x847))>>x848);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x897 = 1445796U;
	int8_t x898 = INT8_MAX;
	int16_t x899 = INT16_MIN;
	int8_t x900 = 2;
	int32_t t22 = 17775269;

	t22 = ((x897<(x898&x899))>>x900);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x958 = 12LL;
	static int16_t x959 = INT16_MIN;
	uint8_t x960 = 21U;
	volatile int32_t t23 = -3907;

	t23 = ((x957<(x958&x959))>>x960);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x969 = -1;
	int32_t x970 = -1;
	static int64_t x971 = -3LL;
	int32_t t24 = 7;

	t24 = ((x969<(x970&x971))>>x972);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x993 = INT64_MIN;
	static volatile int64_t x994 = INT64_MIN;
	int64_t x995 = 1885LL;
	int8_t x996 = 3;
	static int32_t t25 = -246648;

	t25 = ((x993<(x994&x995))>>x996);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x997 = 30025U;
	int64_t x998 = -4886833LL;
	int32_t x999 = -252290;
	static uint8_t x1000 = 18U;
	int32_t t26 = -1;

	t26 = ((x997<(x998&x999))>>x1000);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1001 = UINT32_MAX;
	static int32_t x1002 = INT32_MIN;
	int64_t x1003 = -26739817521487LL;

	t27 = ((x1001<(x1002&x1003))>>x1004);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1021 = -43;
	volatile int16_t x1022 = INT16_MIN;
	static int64_t x1023 = INT64_MAX;
	static uint64_t x1024 = 13LLU;
	int32_t t28 = 99971;

	t28 = ((x1021<(x1022&x1023))>>x1024);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1025 = INT8_MAX;
	int8_t x1026 = INT8_MIN;
	static int8_t x1027 = INT8_MAX;
	int64_t x1028 = 2LL;
	volatile int32_t t29 = -15114;

	t29 = ((x1025<(x1026&x1027))>>x1028);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x1037 = 53;
	int32_t x1038 = INT32_MAX;

	t30 = ((x1037<(x1038&x1039))>>x1040);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1069 = UINT64_MAX;
	static int8_t x1070 = INT8_MIN;
	volatile int32_t x1071 = INT32_MIN;
	uint16_t x1072 = 1U;
	static int32_t t31 = -5938;

	t31 = ((x1069<(x1070&x1071))>>x1072);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1125 = INT16_MAX;
	int32_t x1127 = 560033;
	int32_t t32 = -56170905;

	t32 = ((x1125<(x1126&x1127))>>x1128);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1185 = -1;
	int16_t x1186 = INT16_MIN;
	int32_t x1187 = -7968451;
	uint8_t x1188 = 24U;
	volatile int32_t t33 = -55201980;

	t33 = ((x1185<(x1186&x1187))>>x1188);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1253 = 312082U;
	volatile int32_t x1254 = 250329069;
	int64_t x1255 = INT64_MIN;
	static uint8_t x1256 = 3U;

	t34 = ((x1253<(x1254&x1255))>>x1256);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1270 = INT32_MIN;
	int64_t x1271 = INT64_MIN;
	int32_t t35 = 313;

	t35 = ((x1269<(x1270&x1271))>>x1272);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x1277 = -12867LL;
	uint8_t x1278 = UINT8_MAX;
	int16_t x1279 = INT16_MIN;
	uint8_t x1280 = 7U;
	volatile int32_t t36 = 11181717;

	t36 = ((x1277<(x1278&x1279))>>x1280);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x1297 = INT8_MIN;
	volatile uint32_t x1298 = UINT32_MAX;
	static int8_t x1300 = 22;
	static int32_t t37 = -1098;

	t37 = ((x1297<(x1298&x1299))>>x1300);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x1305 = UINT16_MAX;
	int16_t x1307 = INT16_MAX;
	volatile int32_t t38 = 174713652;

	t38 = ((x1305<(x1306&x1307))>>x1308);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1325 = -1656;
	volatile int64_t x1327 = -62476LL;
	int8_t x1328 = 1;
	volatile int32_t t39 = -137515890;

	t39 = ((x1325<(x1326&x1327))>>x1328);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x1348 = 11LLU;
	static volatile int32_t t40 = 838;

	t40 = ((x1345<(x1346&x1347))>>x1348);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1373 = -105;
	int16_t x1374 = INT16_MIN;
	volatile uint16_t x1375 = UINT16_MAX;
	static uint16_t x1376 = 5U;
	volatile int32_t t41 = -187909;

	t41 = ((x1373<(x1374&x1375))>>x1376);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1389 = -15659259;
	int32_t x1390 = INT32_MIN;
	static volatile uint32_t x1391 = 17771U;
	static volatile uint8_t x1392 = 1U;
	static volatile int32_t t42 = 3627528;

	t42 = ((x1389<(x1390&x1391))>>x1392);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1445 = 51472U;
	int16_t x1446 = INT16_MAX;
	volatile uint16_t x1447 = 48U;
	uint16_t x1448 = 23U;
	static int32_t t43 = -22027;

	t43 = ((x1445<(x1446&x1447))>>x1448);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x1462 = INT16_MAX;
	int8_t x1463 = 0;
	volatile int32_t t44 = -964152;

	t44 = ((x1461<(x1462&x1463))>>x1464);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1481 = 7;
	uint8_t x1482 = 8U;
	int8_t x1484 = 1;
	static volatile int32_t t45 = 13720;

	t45 = ((x1481<(x1482&x1483))>>x1484);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x1506 = 171U;
	static uint64_t x1507 = 4132LLU;
	static uint16_t x1508 = 1U;
	volatile int32_t t46 = -351525;

	t46 = ((x1505<(x1506&x1507))>>x1508);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x1541 = INT32_MAX;
	int8_t x1542 = -1;
	uint64_t x1543 = 2091008359LLU;
	static int8_t x1544 = 1;
	volatile int32_t t47 = 16101177;

	t47 = ((x1541<(x1542&x1543))>>x1544);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x1565 = UINT32_MAX;
	uint8_t x1566 = 6U;
	uint64_t x1567 = UINT64_MAX;
	uint8_t x1568 = 1U;
	static int32_t t48 = 16;

	t48 = ((x1565<(x1566&x1567))>>x1568);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1581 = -1LL;
	int32_t x1582 = -8629;
	volatile int16_t x1583 = -1;
	volatile uint8_t x1584 = 14U;

	t49 = ((x1581<(x1582&x1583))>>x1584);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1601 = 39675127826810LLU;
	int64_t x1602 = INT64_MIN;
	uint16_t x1603 = 6050U;
	static int32_t t50 = -123;

	t50 = ((x1601<(x1602&x1603))>>x1604);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1606 = INT8_MIN;
	int8_t x1608 = 0;
	int32_t t51 = -103;

	t51 = ((x1605<(x1606&x1607))>>x1608);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1685 = INT8_MAX;
	int64_t x1687 = INT64_MIN;
	uint16_t x1688 = 9U;
	int32_t t52 = 963;

	t52 = ((x1685<(x1686&x1687))>>x1688);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x1737 = INT64_MAX;
	int64_t x1739 = INT64_MIN;
	uint16_t x1740 = 0U;
	int32_t t53 = 135;

	t53 = ((x1737<(x1738&x1739))>>x1740);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1741 = 68U;
	int64_t x1742 = -1LL;
	static volatile uint16_t x1744 = 20U;
	static volatile int32_t t54 = 81;

	t54 = ((x1741<(x1742&x1743))>>x1744);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1805 = INT8_MIN;
	int8_t x1806 = 1;
	int32_t x1808 = 1;
	volatile int32_t t55 = -53;

	t55 = ((x1805<(x1806&x1807))>>x1808);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1845 = -45;
	int8_t x1846 = INT8_MIN;
	volatile uint32_t x1847 = 119U;
	volatile int8_t x1848 = 0;

	t56 = ((x1845<(x1846&x1847))>>x1848);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1858 = 91U;
	int32_t x1860 = 0;
	int32_t t57 = -7793380;

	t57 = ((x1857<(x1858&x1859))>>x1860);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1917 = 1609LL;
	int32_t x1918 = INT32_MIN;
	volatile uint8_t x1919 = 0U;
	uint16_t x1920 = 16U;
	volatile int32_t t58 = 14;

	t58 = ((x1917<(x1918&x1919))>>x1920);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1937 = INT32_MIN;
	int16_t x1938 = INT16_MAX;
	int64_t x1939 = -1LL;
	int64_t x1940 = 0LL;
	int32_t t59 = 0;

	t59 = ((x1937<(x1938&x1939))>>x1940);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x1949 = 21973942U;
	uint8_t x1950 = 107U;
	int16_t x1952 = 6;
	volatile int32_t t60 = 10;

	t60 = ((x1949<(x1950&x1951))>>x1952);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x1953 = INT32_MIN;
	static int32_t x1955 = INT32_MIN;
	uint8_t x1956 = 3U;
	volatile int32_t t61 = -23;

	t61 = ((x1953<(x1954&x1955))>>x1956);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1983 = -2;
	int8_t x1984 = 5;
	int32_t t62 = -1663692;

	t62 = ((x1981<(x1982&x1983))>>x1984);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2017 = -1;
	int8_t x2018 = -7;
	int8_t x2019 = -2;
	uint64_t x2020 = 24LLU;
	volatile int32_t t63 = -75328;

	t63 = ((x2017<(x2018&x2019))>>x2020);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x2021 = UINT64_MAX;
	uint64_t x2022 = UINT64_MAX;
	int16_t x2023 = -240;
	volatile int32_t t64 = -16150;

	t64 = ((x2021<(x2022&x2023))>>x2024);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x2049 = -1;
	int16_t x2050 = INT16_MIN;
	volatile int64_t x2051 = INT64_MAX;
	uint16_t x2052 = 11U;
	int32_t t65 = 676;

	t65 = ((x2049<(x2050&x2051))>>x2052);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2097 = 140U;
	int32_t x2098 = -1;
	int32_t t66 = 6;

	t66 = ((x2097<(x2098&x2099))>>x2100);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2133 = 2U;
	volatile int64_t x2134 = -1LL;
	int8_t x2136 = 1;
	volatile int32_t t67 = 5973385;

	t67 = ((x2133<(x2134&x2135))>>x2136);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x2289 = 0U;
	static int8_t x2290 = 1;
	volatile int8_t x2291 = INT8_MIN;
	int16_t x2292 = 1;
	volatile int32_t t68 = 14;

	t68 = ((x2289<(x2290&x2291))>>x2292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2306 = -1;
	static int32_t x2307 = INT32_MAX;
	int8_t x2308 = 0;

	t69 = ((x2305<(x2306&x2307))>>x2308);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x2313 = INT8_MIN;
	volatile uint16_t x2314 = 1508U;
	uint8_t x2316 = 6U;

	t70 = ((x2313<(x2314&x2315))>>x2316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x2317 = INT32_MIN;
	int32_t x2318 = INT32_MIN;
	int8_t x2319 = -1;
	int8_t x2320 = 0;
	volatile int32_t t71 = 316380;

	t71 = ((x2317<(x2318&x2319))>>x2320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2373 = UINT16_MAX;
	int64_t x2374 = -345LL;
	int32_t x2375 = 10;
	volatile uint64_t x2376 = 15LLU;
	volatile int32_t t72 = -6015;

	t72 = ((x2373<(x2374&x2375))>>x2376);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2385 = 2154562996883LLU;
	int8_t x2386 = 11;
	uint8_t x2388 = 3U;
	volatile int32_t t73 = 6068;

	t73 = ((x2385<(x2386&x2387))>>x2388);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2393 = 2;
	int32_t x2395 = -1;
	volatile uint8_t x2396 = 0U;
	volatile int32_t t74 = -199639;

	t74 = ((x2393<(x2394&x2395))>>x2396);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2397 = INT64_MIN;
	int16_t x2398 = INT16_MAX;
	volatile uint32_t x2399 = 978778U;
	uint8_t x2400 = 0U;
	volatile int32_t t75 = 708556769;

	t75 = ((x2397<(x2398&x2399))>>x2400);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2426 = 54;
	uint8_t x2428 = 21U;
	int32_t t76 = -3;

	t76 = ((x2425<(x2426&x2427))>>x2428);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2433 = INT64_MAX;
	volatile int16_t x2434 = -2509;
	static uint32_t x2435 = 509494U;
	int32_t t77 = -6;

	t77 = ((x2433<(x2434&x2435))>>x2436);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2441 = INT32_MIN;
	int16_t x2442 = INT16_MIN;
	static int32_t x2443 = INT32_MAX;
	int32_t x2444 = 3;
	int32_t t78 = 122;

	t78 = ((x2441<(x2442&x2443))>>x2444);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x2465 = 2U;
	volatile uint32_t x2466 = 158822U;
	int32_t x2467 = -1;
	volatile uint8_t x2468 = 3U;

	t79 = ((x2465<(x2466&x2467))>>x2468);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x2514 = INT32_MIN;
	int32_t x2515 = 1;
	int8_t x2516 = 7;
	int32_t t80 = -194346082;

	t80 = ((x2513<(x2514&x2515))>>x2516);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2541 = INT16_MAX;
	uint16_t x2543 = UINT16_MAX;
	static uint16_t x2544 = 3U;
	volatile int32_t t81 = 11878123;

	t81 = ((x2541<(x2542&x2543))>>x2544);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x2569 = 720U;
	int8_t x2570 = INT8_MIN;
	static volatile int8_t x2571 = -1;
	int32_t t82 = -403;

	t82 = ((x2569<(x2570&x2571))>>x2572);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2637 = -1;
	uint32_t x2638 = 787855316U;
	int16_t x2639 = INT16_MAX;
	volatile uint8_t x2640 = 3U;
	volatile int32_t t83 = -15413;

	t83 = ((x2637<(x2638&x2639))>>x2640);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2677 = INT16_MAX;
	volatile uint64_t x2680 = 2LLU;
	int32_t t84 = 39;

	t84 = ((x2677<(x2678&x2679))>>x2680);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x2745 = -6444349255072LL;
	uint16_t x2747 = 12U;
	volatile int32_t t85 = -24395957;

	t85 = ((x2745<(x2746&x2747))>>x2748);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2761 = 3485U;
	int64_t x2762 = INT64_MIN;
	uint16_t x2763 = 713U;
	int8_t x2764 = 2;
	volatile int32_t t86 = -433336;

	t86 = ((x2761<(x2762&x2763))>>x2764);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x2797 = INT32_MIN;
	volatile int16_t x2798 = 275;
	int64_t x2799 = -1LL;
	int16_t x2800 = 0;
	int32_t t87 = 1410;

	t87 = ((x2797<(x2798&x2799))>>x2800);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2809 = 1;
	int32_t x2810 = INT32_MIN;
	int16_t x2811 = INT16_MIN;
	static int32_t t88 = 2658256;

	t88 = ((x2809<(x2810&x2811))>>x2812);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x2837 = 0;
	int8_t x2838 = INT8_MAX;
	int8_t x2839 = INT8_MAX;
	int32_t t89 = 8564;

	t89 = ((x2837<(x2838&x2839))>>x2840);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x2877 = UINT32_MAX;
	uint32_t x2878 = UINT32_MAX;
	static int64_t x2879 = 1LL;
	volatile int32_t x2880 = 1;

	t90 = ((x2877<(x2878&x2879))>>x2880);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2881 = -35471;
	static uint16_t x2882 = 48U;
	volatile int16_t x2883 = INT16_MIN;
	static uint16_t x2884 = 26U;
	static int32_t t91 = 37267237;

	t91 = ((x2881<(x2882&x2883))>>x2884);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2917 = UINT64_MAX;
	static uint32_t x2919 = UINT32_MAX;
	volatile int32_t t92 = -166459540;

	t92 = ((x2917<(x2918&x2919))>>x2920);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x2925 = -1;
	volatile int32_t x2926 = INT32_MIN;
	int8_t x2927 = 15;
	volatile uint16_t x2928 = 0U;

	t93 = ((x2925<(x2926&x2927))>>x2928);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x2929 = -1LL;
	int64_t x2930 = INT64_MAX;
	uint64_t x2931 = 1035352437075561LLU;
	uint16_t x2932 = 0U;

	t94 = ((x2929<(x2930&x2931))>>x2932);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x2945 = 17;
	static int32_t x2946 = 5036861;
	int8_t x2947 = 6;
	volatile int16_t x2948 = 29;

	t95 = ((x2945<(x2946&x2947))>>x2948);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x2958 = 31LLU;
	uint8_t x2959 = UINT8_MAX;
	int8_t x2960 = 14;
	int32_t t96 = 1852;

	t96 = ((x2957<(x2958&x2959))>>x2960);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x2981 = 73U;
	volatile int16_t x2982 = -1;
	int16_t x2983 = INT16_MAX;

	t97 = ((x2981<(x2982&x2983))>>x2984);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x2985 = 15560U;
	uint32_t x2987 = 10816U;
	int8_t x2988 = 28;
	int32_t t98 = -2;

	t98 = ((x2985<(x2986&x2987))>>x2988);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x3015 = 265LLU;
	uint64_t x3016 = 7LLU;

	t99 = ((x3013<(x3014&x3015))>>x3016);

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

