#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x23 = 3U;
int8_t x68 = 12;
uint16_t x181 = 0U;
int8_t x184 = 28;
int32_t t4 = -2;
static int32_t x326 = -28825;
static uint8_t x469 = UINT8_MAX;
int16_t x472 = 1;
volatile int16_t x618 = -1098;
static int16_t x620 = 0;
uint64_t x634 = 53364497554LLU;
uint8_t x636 = 12U;
int32_t x757 = INT32_MAX;
int32_t x769 = INT32_MIN;
volatile uint64_t x770 = 589748LLU;
static volatile int16_t x779 = INT16_MIN;
int16_t x793 = INT16_MIN;
static volatile uint32_t x874 = 1U;
volatile int16_t x875 = INT16_MAX;
int32_t t21 = 0;
uint8_t x932 = 1U;
uint16_t x975 = UINT16_MAX;
volatile uint64_t x1094 = 328484050553322328LLU;
int32_t t26 = -4497817;
int64_t x1127 = INT64_MIN;
uint32_t x1180 = 0U;
int32_t t30 = 213331;
static volatile int8_t x1204 = 2;
uint16_t x1229 = 1205U;
static volatile int32_t t34 = -14505;
static int32_t t35 = -907396256;
int32_t x1308 = 0;
static uint32_t x1365 = 1870U;
int16_t x1446 = INT16_MAX;
static int64_t x1485 = -62438618673LL;
volatile int32_t t42 = 0;
int16_t x1524 = 26;
volatile int32_t t43 = -823268553;
static uint64_t x1583 = UINT64_MAX;
static volatile uint16_t x1601 = UINT16_MAX;
int64_t x1602 = 1238855330967LL;
volatile uint8_t x1604 = 4U;
volatile int32_t t46 = -232693132;
static uint8_t x1662 = 1U;
uint64_t x1663 = 386LLU;
static int32_t x1705 = -1;
int8_t x1717 = INT8_MIN;
static volatile int32_t t50 = 1069649138;
static int32_t t51 = 28484;
int32_t t52 = 351;
volatile int32_t t55 = 23;
int32_t x1949 = -1;
static uint64_t x1952 = 1LLU;
int16_t x1971 = 0;
volatile int32_t t58 = -500254834;
static int16_t x1987 = -1;
static volatile int32_t t59 = -15962;
static int8_t x2017 = -1;
int32_t t62 = -3;
volatile int8_t x2129 = -1;
volatile int32_t t63 = -3;
int32_t x2137 = 448;
static uint16_t x2140 = 0U;
uint16_t x2184 = 5U;
int64_t x2222 = INT64_MIN;
static int8_t x2308 = 4;
int32_t t68 = 212889604;
int8_t x2352 = 0;
int32_t t70 = -86;
int64_t x2399 = INT64_MIN;
int8_t x2441 = INT8_MIN;
int16_t x2453 = -224;
volatile int8_t x2454 = INT8_MIN;
int8_t x2456 = 1;
volatile int32_t t73 = 5;
uint16_t x2505 = UINT16_MAX;
int64_t x2526 = INT64_MIN;
int32_t t75 = 3706;
uint8_t x2585 = 57U;
int64_t x2662 = INT64_MIN;
int32_t x2679 = INT32_MIN;
int16_t x2680 = 7;
int32_t x2693 = -148;
int16_t x2779 = 11663;
int8_t x2860 = 1;
uint32_t x2953 = 373815U;
int8_t x3020 = 24;
int32_t t88 = 17957;
uint64_t x3077 = 486771631856437LLU;
volatile int32_t t91 = 3553;
static uint32_t x3200 = 1U;
uint16_t x3220 = 6U;
volatile int32_t t94 = 347673;
volatile uint64_t x3271 = UINT64_MAX;
int64_t x3330 = INT64_MAX;
uint8_t x3372 = 6U;


void f0(void) {
	volatile uint32_t x21 = 3141375U;
	int64_t x22 = -1LL;
	uint8_t x24 = 9U;
	int32_t t0 = -81992;

	t0 = (((x21<=x22)<=x23)>>x24);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x65 = INT64_MIN;
	int8_t x66 = INT8_MAX;
	uint32_t x67 = UINT32_MAX;
	int32_t t1 = 3186897;

	t1 = (((x65<=x66)<=x67)>>x68);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x153 = -8;
	uint16_t x154 = 2944U;
	int32_t x155 = -6928;
	int32_t x156 = 19;
	int32_t t2 = -3735840;

	t2 = (((x153<=x154)<=x155)>>x156);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x182 = UINT32_MAX;
	volatile uint8_t x183 = 61U;
	int32_t t3 = -104476657;

	t3 = (((x181<=x182)<=x183)>>x184);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x237 = 1990048234670LLU;
	uint8_t x238 = 1U;
	int64_t x239 = 707583LL;
	uint16_t x240 = 0U;

	t4 = (((x237<=x238)<=x239)>>x240);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x261 = INT8_MIN;
	volatile int8_t x262 = INT8_MIN;
	int32_t x263 = INT32_MAX;
	uint8_t x264 = 13U;
	int32_t t5 = -2150;

	t5 = (((x261<=x262)<=x263)>>x264);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x293 = INT16_MAX;
	uint8_t x294 = 5U;
	int32_t x295 = -1;
	int16_t x296 = 0;
	volatile int32_t t6 = 4485432;

	t6 = (((x293<=x294)<=x295)>>x296);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x325 = INT32_MAX;
	int8_t x327 = -1;
	int8_t x328 = 4;
	volatile int32_t t7 = -117886;

	t7 = (((x325<=x326)<=x327)>>x328);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x337 = INT64_MIN;
	static uint64_t x338 = 230236797914LLU;
	volatile int64_t x339 = 563811LL;
	uint8_t x340 = 10U;
	int32_t t8 = -1468895;

	t8 = (((x337<=x338)<=x339)>>x340);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x470 = -1;
	volatile int32_t x471 = INT32_MIN;
	volatile int32_t t9 = -56462684;

	t9 = (((x469<=x470)<=x471)>>x472);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x505 = INT32_MAX;
	static uint8_t x506 = 1U;
	static volatile uint16_t x507 = 1U;
	static uint8_t x508 = 16U;
	volatile int32_t t10 = -9;

	t10 = (((x505<=x506)<=x507)>>x508);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x581 = INT16_MIN;
	volatile int64_t x582 = 396778355890963LL;
	int32_t x583 = 0;
	volatile uint16_t x584 = 0U;
	volatile int32_t t11 = -119;

	t11 = (((x581<=x582)<=x583)>>x584);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x617 = UINT64_MAX;
	uint16_t x619 = UINT16_MAX;
	static int32_t t12 = 244962655;

	t12 = (((x617<=x618)<=x619)>>x620);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x633 = INT8_MIN;
	uint64_t x635 = UINT64_MAX;
	static int32_t t13 = -229340;

	t13 = (((x633<=x634)<=x635)>>x636);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x677 = 49LLU;
	volatile uint64_t x678 = UINT64_MAX;
	static uint8_t x679 = 3U;
	volatile int32_t x680 = 27;
	int32_t t14 = -21889681;

	t14 = (((x677<=x678)<=x679)>>x680);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x758 = 758U;
	int16_t x759 = 280;
	int16_t x760 = 0;
	volatile int32_t t15 = 8199;

	t15 = (((x757<=x758)<=x759)>>x760);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x771 = 11808671U;
	uint8_t x772 = 1U;
	volatile int32_t t16 = 406;

	t16 = (((x769<=x770)<=x771)>>x772);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x777 = -1;
	int8_t x778 = 10;
	uint32_t x780 = 1U;
	int32_t t17 = 368632;

	t17 = (((x777<=x778)<=x779)>>x780);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x794 = 123U;
	uint8_t x795 = 119U;
	uint16_t x796 = 21U;
	static volatile int32_t t18 = 58174;

	t18 = (((x793<=x794)<=x795)>>x796);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x845 = INT64_MIN;
	int32_t x846 = -1;
	int64_t x847 = 1810000023593605LL;
	static int32_t x848 = 0;
	int32_t t19 = -685;

	t19 = (((x845<=x846)<=x847)>>x848);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x873 = INT16_MIN;
	uint32_t x876 = 1U;
	static volatile int32_t t20 = -11957784;

	t20 = (((x873<=x874)<=x875)>>x876);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x917 = INT8_MIN;
	volatile int32_t x918 = -1;
	uint32_t x919 = 0U;
	int16_t x920 = 0;

	t21 = (((x917<=x918)<=x919)>>x920);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x921 = -1;
	volatile int32_t x922 = INT32_MIN;
	static int16_t x923 = -1;
	int8_t x924 = 3;
	int32_t t22 = -32177564;

	t22 = (((x921<=x922)<=x923)>>x924);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x929 = 6495U;
	uint32_t x930 = UINT32_MAX;
	int8_t x931 = 11;
	static volatile int32_t t23 = 1407675;

	t23 = (((x929<=x930)<=x931)>>x932);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x973 = -1;
	static int8_t x974 = INT8_MIN;
	int8_t x976 = 5;
	volatile int32_t t24 = -28999926;

	t24 = (((x973<=x974)<=x975)>>x976);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1061 = INT16_MAX;
	volatile uint8_t x1062 = UINT8_MAX;
	int8_t x1063 = -1;
	volatile uint16_t x1064 = 27U;
	volatile int32_t t25 = 154;

	t25 = (((x1061<=x1062)<=x1063)>>x1064);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1093 = -1;
	uint32_t x1095 = UINT32_MAX;
	static uint8_t x1096 = 3U;

	t26 = (((x1093<=x1094)<=x1095)>>x1096);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1125 = 2536U;
	uint16_t x1126 = 26U;
	volatile int8_t x1128 = 6;
	volatile int32_t t27 = 139178;

	t27 = (((x1125<=x1126)<=x1127)>>x1128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1145 = INT8_MAX;
	volatile int16_t x1146 = -201;
	static int8_t x1147 = INT8_MIN;
	static uint8_t x1148 = 8U;
	volatile int32_t t28 = 7;

	t28 = (((x1145<=x1146)<=x1147)>>x1148);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1165 = INT32_MIN;
	static int64_t x1166 = INT64_MIN;
	uint64_t x1167 = 2374LLU;
	uint16_t x1168 = 0U;
	volatile int32_t t29 = 12;

	t29 = (((x1165<=x1166)<=x1167)>>x1168);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1177 = -52833;
	uint8_t x1178 = 3U;
	static int16_t x1179 = INT16_MIN;

	t30 = (((x1177<=x1178)<=x1179)>>x1180);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1181 = 2562924U;
	static uint8_t x1182 = 110U;
	uint8_t x1183 = UINT8_MAX;
	static volatile uint8_t x1184 = 1U;
	volatile int32_t t31 = -3;

	t31 = (((x1181<=x1182)<=x1183)>>x1184);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1201 = -1;
	int64_t x1202 = -213985LL;
	int32_t x1203 = INT32_MIN;
	int32_t t32 = -1;

	t32 = (((x1201<=x1202)<=x1203)>>x1204);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1205 = 17U;
	int16_t x1206 = -161;
	int8_t x1207 = 9;
	int64_t x1208 = 15LL;
	volatile int32_t t33 = -8096;

	t33 = (((x1205<=x1206)<=x1207)>>x1208);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1230 = UINT8_MAX;
	volatile uint16_t x1231 = UINT16_MAX;
	int16_t x1232 = 1;

	t34 = (((x1229<=x1230)<=x1231)>>x1232);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x1277 = INT64_MIN;
	static int64_t x1278 = INT64_MAX;
	int8_t x1279 = INT8_MIN;
	static volatile int8_t x1280 = 4;

	t35 = (((x1277<=x1278)<=x1279)>>x1280);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1305 = -1;
	static volatile uint8_t x1306 = 0U;
	volatile int8_t x1307 = INT8_MIN;
	int32_t t36 = 68;

	t36 = (((x1305<=x1306)<=x1307)>>x1308);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1309 = 375389849474LL;
	static uint32_t x1310 = 3U;
	int32_t x1311 = INT32_MIN;
	uint8_t x1312 = 22U;
	static int32_t t37 = -1151;

	t37 = (((x1309<=x1310)<=x1311)>>x1312);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1345 = 610U;
	volatile uint16_t x1346 = 28U;
	int8_t x1347 = INT8_MIN;
	uint32_t x1348 = 0U;
	volatile int32_t t38 = 110753524;

	t38 = (((x1345<=x1346)<=x1347)>>x1348);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1366 = 32LL;
	int64_t x1367 = -1LL;
	volatile uint8_t x1368 = 4U;
	int32_t t39 = 1635;

	t39 = (((x1365<=x1366)<=x1367)>>x1368);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x1397 = UINT64_MAX;
	int32_t x1398 = 17127775;
	volatile uint64_t x1399 = UINT64_MAX;
	static int8_t x1400 = 0;
	volatile int32_t t40 = -12285;

	t40 = (((x1397<=x1398)<=x1399)>>x1400);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x1445 = 1;
	static volatile uint16_t x1447 = 28487U;
	static uint8_t x1448 = 3U;
	int32_t t41 = 2;

	t41 = (((x1445<=x1446)<=x1447)>>x1448);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x1486 = INT32_MIN;
	int16_t x1487 = 3;
	uint64_t x1488 = 3LLU;

	t42 = (((x1485<=x1486)<=x1487)>>x1488);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1521 = INT64_MAX;
	int8_t x1522 = 1;
	int64_t x1523 = -1LL;

	t43 = (((x1521<=x1522)<=x1523)>>x1524);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1581 = 6U;
	volatile int16_t x1582 = 624;
	uint16_t x1584 = 5U;
	volatile int32_t t44 = -9334;

	t44 = (((x1581<=x1582)<=x1583)>>x1584);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1597 = -1;
	volatile uint64_t x1598 = 409165LLU;
	int8_t x1599 = INT8_MIN;
	volatile int8_t x1600 = 3;
	int32_t t45 = -29002373;

	t45 = (((x1597<=x1598)<=x1599)>>x1600);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x1603 = -14;

	t46 = (((x1601<=x1602)<=x1603)>>x1604);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1625 = INT8_MIN;
	int8_t x1626 = -1;
	int16_t x1627 = -1;
	uint8_t x1628 = 23U;
	int32_t t47 = -14269092;

	t47 = (((x1625<=x1626)<=x1627)>>x1628);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1661 = 1598229620545LLU;
	static uint8_t x1664 = 0U;
	volatile int32_t t48 = 12558833;

	t48 = (((x1661<=x1662)<=x1663)>>x1664);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1706 = 15LLU;
	int32_t x1707 = 28;
	static int32_t x1708 = 1;
	int32_t t49 = 54553484;

	t49 = (((x1705<=x1706)<=x1707)>>x1708);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x1718 = UINT64_MAX;
	int8_t x1719 = 8;
	static uint8_t x1720 = 1U;

	t50 = (((x1717<=x1718)<=x1719)>>x1720);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x1745 = -297LL;
	static int64_t x1746 = -1LL;
	volatile int16_t x1747 = 1274;
	uint16_t x1748 = 11U;

	t51 = (((x1745<=x1746)<=x1747)>>x1748);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1757 = INT32_MIN;
	int32_t x1758 = -1;
	int16_t x1759 = INT16_MAX;
	volatile uint8_t x1760 = 12U;

	t52 = (((x1757<=x1758)<=x1759)>>x1760);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1869 = INT8_MIN;
	static volatile int32_t x1870 = -534674716;
	volatile uint16_t x1871 = 2431U;
	uint16_t x1872 = 0U;
	volatile int32_t t53 = -5580;

	t53 = (((x1869<=x1870)<=x1871)>>x1872);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x1897 = 4U;
	int32_t x1898 = INT32_MAX;
	int8_t x1899 = INT8_MIN;
	int16_t x1900 = 0;
	volatile int32_t t54 = 730;

	t54 = (((x1897<=x1898)<=x1899)>>x1900);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x1913 = INT64_MIN;
	int32_t x1914 = INT32_MAX;
	int32_t x1915 = -6717;
	volatile uint8_t x1916 = 0U;

	t55 = (((x1913<=x1914)<=x1915)>>x1916);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1950 = INT16_MIN;
	int64_t x1951 = 3LL;
	volatile int32_t t56 = 943;

	t56 = (((x1949<=x1950)<=x1951)>>x1952);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1957 = -3;
	int8_t x1958 = -3;
	volatile uint16_t x1959 = 1U;
	static uint8_t x1960 = 28U;
	int32_t t57 = -454515;

	t57 = (((x1957<=x1958)<=x1959)>>x1960);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1969 = 4;
	static uint32_t x1970 = UINT32_MAX;
	uint8_t x1972 = 3U;

	t58 = (((x1969<=x1970)<=x1971)>>x1972);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1985 = 0;
	static int64_t x1986 = INT64_MIN;
	int16_t x1988 = 0;

	t59 = (((x1985<=x1986)<=x1987)>>x1988);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x2018 = INT16_MAX;
	volatile int8_t x2019 = -40;
	uint64_t x2020 = 3LLU;
	volatile int32_t t60 = -123;

	t60 = (((x2017<=x2018)<=x2019)>>x2020);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x2037 = 5131318602984LLU;
	static volatile uint32_t x2038 = UINT32_MAX;
	static int64_t x2039 = -192340751629600LL;
	uint8_t x2040 = 1U;
	int32_t t61 = -1;

	t61 = (((x2037<=x2038)<=x2039)>>x2040);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x2109 = -6149867980162LL;
	int8_t x2110 = -1;
	uint8_t x2111 = 61U;
	static volatile int32_t x2112 = 20;

	t62 = (((x2109<=x2110)<=x2111)>>x2112);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2130 = UINT32_MAX;
	int8_t x2131 = INT8_MAX;
	int8_t x2132 = 14;

	t63 = (((x2129<=x2130)<=x2131)>>x2132);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2138 = 3278494LLU;
	volatile int64_t x2139 = -1LL;
	static volatile int32_t t64 = -27937;

	t64 = (((x2137<=x2138)<=x2139)>>x2140);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x2181 = 174;
	int8_t x2182 = -1;
	int8_t x2183 = 54;
	int32_t t65 = 393110663;

	t65 = (((x2181<=x2182)<=x2183)>>x2184);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2221 = 15U;
	int64_t x2223 = 128711895261LL;
	int64_t x2224 = 3LL;
	volatile int32_t t66 = 3871;

	t66 = (((x2221<=x2222)<=x2223)>>x2224);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2229 = UINT8_MAX;
	int16_t x2230 = -112;
	uint8_t x2231 = UINT8_MAX;
	uint16_t x2232 = 15U;
	volatile int32_t t67 = 86054;

	t67 = (((x2229<=x2230)<=x2231)>>x2232);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2305 = INT64_MIN;
	uint32_t x2306 = 28077388U;
	volatile int16_t x2307 = -1;

	t68 = (((x2305<=x2306)<=x2307)>>x2308);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x2329 = -1;
	int16_t x2330 = -389;
	uint64_t x2331 = UINT64_MAX;
	volatile int32_t x2332 = 1;
	int32_t t69 = 3426;

	t69 = (((x2329<=x2330)<=x2331)>>x2332);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x2349 = UINT64_MAX;
	uint16_t x2350 = 1288U;
	volatile int32_t x2351 = INT32_MIN;

	t70 = (((x2349<=x2350)<=x2351)>>x2352);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2397 = UINT64_MAX;
	uint16_t x2398 = 142U;
	int32_t x2400 = 1;
	volatile int32_t t71 = 41;

	t71 = (((x2397<=x2398)<=x2399)>>x2400);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x2442 = INT64_MAX;
	static int32_t x2443 = INT32_MAX;
	static uint32_t x2444 = 0U;
	static volatile int32_t t72 = -3922;

	t72 = (((x2441<=x2442)<=x2443)>>x2444);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x2455 = UINT32_MAX;

	t73 = (((x2453<=x2454)<=x2455)>>x2456);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2506 = INT8_MIN;
	static int16_t x2507 = -1;
	uint16_t x2508 = 6U;
	int32_t t74 = 0;

	t74 = (((x2505<=x2506)<=x2507)>>x2508);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x2525 = UINT16_MAX;
	volatile uint8_t x2527 = 6U;
	int16_t x2528 = 0;

	t75 = (((x2525<=x2526)<=x2527)>>x2528);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2537 = INT32_MAX;
	int32_t x2538 = 0;
	volatile uint32_t x2539 = 58817445U;
	int8_t x2540 = 1;
	int32_t t76 = -2;

	t76 = (((x2537<=x2538)<=x2539)>>x2540);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2545 = 1;
	volatile uint8_t x2546 = 12U;
	static volatile int8_t x2547 = INT8_MIN;
	uint8_t x2548 = 13U;
	volatile int32_t t77 = 14321;

	t77 = (((x2545<=x2546)<=x2547)>>x2548);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x2573 = UINT32_MAX;
	volatile uint64_t x2574 = 1LLU;
	int8_t x2575 = 1;
	int64_t x2576 = 4LL;
	volatile int32_t t78 = -6467953;

	t78 = (((x2573<=x2574)<=x2575)>>x2576);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x2586 = INT16_MIN;
	uint32_t x2587 = 468U;
	uint8_t x2588 = 1U;
	int32_t t79 = 241981;

	t79 = (((x2585<=x2586)<=x2587)>>x2588);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x2597 = 3U;
	int16_t x2598 = -1;
	static int16_t x2599 = INT16_MIN;
	static uint8_t x2600 = 6U;
	volatile int32_t t80 = 6291;

	t80 = (((x2597<=x2598)<=x2599)>>x2600);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x2661 = -4;
	volatile uint8_t x2663 = 1U;
	volatile uint8_t x2664 = 0U;
	int32_t t81 = -548756;

	t81 = (((x2661<=x2662)<=x2663)>>x2664);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x2677 = UINT64_MAX;
	uint64_t x2678 = UINT64_MAX;
	static volatile int32_t t82 = 1;

	t82 = (((x2677<=x2678)<=x2679)>>x2680);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2694 = INT16_MIN;
	volatile uint32_t x2695 = 116007U;
	int8_t x2696 = 10;
	int32_t t83 = 13343882;

	t83 = (((x2693<=x2694)<=x2695)>>x2696);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x2777 = 115U;
	int8_t x2778 = -1;
	int8_t x2780 = 13;
	int32_t t84 = -1;

	t84 = (((x2777<=x2778)<=x2779)>>x2780);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x2857 = 47613U;
	static uint16_t x2858 = UINT16_MAX;
	uint16_t x2859 = 45U;
	static volatile int32_t t85 = -4;

	t85 = (((x2857<=x2858)<=x2859)>>x2860);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2954 = INT16_MIN;
	static int64_t x2955 = INT64_MIN;
	static uint8_t x2956 = 6U;
	int32_t t86 = -93;

	t86 = (((x2953<=x2954)<=x2955)>>x2956);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3017 = INT16_MAX;
	static uint64_t x3018 = 614774LLU;
	int16_t x3019 = 86;
	int32_t t87 = -11565017;

	t87 = (((x3017<=x3018)<=x3019)>>x3020);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3021 = INT8_MIN;
	int16_t x3022 = INT16_MIN;
	int16_t x3023 = INT16_MIN;
	static int64_t x3024 = 9LL;

	t88 = (((x3021<=x3022)<=x3023)>>x3024);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3061 = 31;
	int64_t x3062 = INT64_MIN;
	int16_t x3063 = INT16_MAX;
	uint8_t x3064 = 3U;
	static volatile int32_t t89 = 277460540;

	t89 = (((x3061<=x3062)<=x3063)>>x3064);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x3078 = UINT32_MAX;
	static int8_t x3079 = -1;
	int32_t x3080 = 27;
	static int32_t t90 = -1;

	t90 = (((x3077<=x3078)<=x3079)>>x3080);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x3093 = UINT64_MAX;
	static int64_t x3094 = -121992088101329488LL;
	static uint16_t x3095 = UINT16_MAX;
	uint8_t x3096 = 25U;

	t91 = (((x3093<=x3094)<=x3095)>>x3096);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x3097 = 988U;
	int32_t x3098 = INT32_MIN;
	int64_t x3099 = INT64_MIN;
	uint64_t x3100 = 1LLU;
	volatile int32_t t92 = -1;

	t92 = (((x3097<=x3098)<=x3099)>>x3100);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x3197 = 114U;
	volatile uint32_t x3198 = 68U;
	static int32_t x3199 = -7125799;
	volatile int32_t t93 = 88;

	t93 = (((x3197<=x3198)<=x3199)>>x3200);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x3217 = 2U;
	static int16_t x3218 = 9301;
	volatile uint32_t x3219 = 286U;

	t94 = (((x3217<=x3218)<=x3219)>>x3220);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3269 = -1LL;
	int16_t x3270 = -1;
	uint16_t x3272 = 5U;
	int32_t t95 = -120;

	t95 = (((x3269<=x3270)<=x3271)>>x3272);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3329 = INT64_MIN;
	int32_t x3331 = INT32_MAX;
	volatile uint32_t x3332 = 28U;
	static int32_t t96 = 188608;

	t96 = (((x3329<=x3330)<=x3331)>>x3332);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3333 = INT64_MAX;
	uint64_t x3334 = 3073729571466557193LLU;
	uint32_t x3335 = 6625402U;
	uint8_t x3336 = 19U;
	int32_t t97 = 5;

	t97 = (((x3333<=x3334)<=x3335)>>x3336);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3361 = INT16_MIN;
	uint32_t x3362 = 2U;
	int8_t x3363 = INT8_MAX;
	static uint64_t x3364 = 14LLU;
	static volatile int32_t t98 = -2;

	t98 = (((x3361<=x3362)<=x3363)>>x3364);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3369 = -1LL;
	volatile int64_t x3370 = -90969423059LL;
	volatile uint8_t x3371 = UINT8_MAX;
	int32_t t99 = -1209;

	t99 = (((x3369<=x3370)<=x3371)>>x3372);

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

