#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = INT8_MIN;
static volatile uint8_t x35 = 1U;
volatile int32_t t2 = -651559;
int16_t x86 = INT16_MIN;
static int16_t x88 = 1394;
volatile uint8_t x89 = 75U;
volatile int16_t x92 = -1;
static volatile int32_t t6 = 1413;
int64_t x161 = INT64_MIN;
uint64_t x209 = 12845637002459946LLU;
volatile uint64_t x210 = UINT64_MAX;
int32_t x212 = -1;
volatile uint64_t x214 = 231334573302733686LLU;
int32_t x256 = 9948051;
int8_t x260 = -1;
int32_t x304 = 163211;
volatile int32_t t15 = -3908;
int64_t x305 = -174955947316062LL;
int8_t x306 = INT8_MIN;
int32_t x310 = -2797497;
int32_t x312 = 5308347;
static uint8_t x402 = 58U;
int32_t t19 = -170;
int8_t x630 = -1;
static uint32_t x631 = 3U;
volatile uint16_t x642 = 6315U;
volatile int32_t t22 = 229464;
uint16_t x663 = 24U;
uint8_t x697 = 108U;
uint32_t x759 = 0U;
volatile int32_t x773 = -1;
static volatile int32_t x854 = -73;
static int8_t x856 = 52;
int64_t x898 = -1LL;
int8_t x899 = 7;
int32_t t31 = -36550;
int32_t t32 = -12297431;
int64_t x1082 = -1LL;
static int8_t x1083 = 0;
int32_t t35 = 9;
volatile uint16_t x1146 = 2594U;
volatile int32_t x1179 = 1;
uint8_t x1247 = 0U;
static volatile int32_t x1327 = 0;
int8_t x1328 = INT8_MIN;
uint32_t x1397 = 7U;
volatile int16_t x1398 = -2446;
uint8_t x1399 = 0U;
static int32_t t44 = -506928823;
int32_t t45 = -122;
int8_t x1479 = 20;
static uint64_t x1515 = 3LLU;
static volatile int32_t t49 = 7808;
int64_t x1853 = INT64_MAX;
int64_t x1854 = INT64_MIN;
int32_t x1858 = 1673227;
int16_t x1860 = -1;
int64_t x2057 = INT64_MIN;
int8_t x2059 = 0;
uint32_t x2060 = UINT32_MAX;
volatile int64_t x2073 = INT64_MAX;
static volatile int8_t x2075 = 1;
int64_t x2128 = INT64_MAX;
int8_t x2140 = -1;
volatile int32_t t67 = -50303101;
int32_t x2366 = INT32_MIN;
int64_t x2641 = INT64_MAX;
int64_t x2643 = 1LL;
static uint16_t x2644 = UINT16_MAX;
uint8_t x2715 = 1U;
int8_t x2716 = INT8_MIN;
int32_t t76 = -1;
uint8_t x2719 = 11U;
static volatile int64_t x2790 = -1LL;
static volatile int32_t t78 = 242698;
int16_t x2842 = -30;
static int32_t t79 = -120471962;
volatile int32_t x2884 = 117;
volatile int32_t x2908 = -64151584;
int16_t x2920 = -1;
int16_t x2963 = 0;
uint32_t x2980 = 48126U;
int64_t x3044 = INT64_MIN;
int16_t x3050 = INT16_MIN;
int64_t x3057 = INT64_MIN;
volatile int32_t t89 = -26828361;
static int8_t x3210 = INT8_MAX;
int8_t x3212 = -1;
static int8_t x3226 = 1;
int32_t t92 = 4;
uint8_t x3286 = UINT8_MAX;
int32_t t94 = -99352;
static uint16_t x3346 = UINT16_MAX;
static volatile uint32_t x3350 = 3527U;
uint16_t x3351 = 6U;
uint32_t x3352 = 333U;
int32_t x3435 = 0;


void f0(void) {
	int32_t x1 = 16373473;
	int16_t x3 = 24;
	int64_t x4 = -1LL;
	int32_t t0 = -5397230;

	t0 = (((x1==x2)<<x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x33 = UINT8_MAX;
	static volatile int64_t x34 = INT64_MIN;
	int64_t x36 = 12287836LL;
	int32_t t1 = 103;

	t1 = (((x33==x34)<<x35)<=x36);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x37 = -4203384127641841608LL;
	uint16_t x38 = 3226U;
	int8_t x39 = 1;
	static int32_t x40 = 247;

	t2 = (((x37==x38)<<x39)<=x40);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x49 = 13710;
	static int32_t x50 = -1;
	uint16_t x51 = 31U;
	static volatile uint16_t x52 = 29903U;
	volatile int32_t t3 = 51948;

	t3 = (((x49==x50)<<x51)<=x52);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x65 = 0LLU;
	int64_t x66 = -1LL;
	uint8_t x67 = 1U;
	int16_t x68 = -7251;
	volatile int32_t t4 = -1;

	t4 = (((x65==x66)<<x67)<=x68);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x85 = INT16_MIN;
	int64_t x87 = 12LL;
	volatile int32_t t5 = 232;

	t5 = (((x85==x86)<<x87)<=x88);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x90 = -1;
	int8_t x91 = 1;

	t6 = (((x89==x90)<<x91)<=x92);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x93 = UINT32_MAX;
	uint16_t x94 = 18U;
	static uint16_t x95 = 1U;
	volatile int32_t x96 = INT32_MIN;
	static int32_t t7 = -411569962;

	t7 = (((x93==x94)<<x95)<=x96);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x105 = -1;
	int16_t x106 = INT16_MIN;
	int16_t x107 = 0;
	int16_t x108 = 2918;
	volatile int32_t t8 = -16505;

	t8 = (((x105==x106)<<x107)<=x108);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x162 = 2571U;
	volatile uint8_t x163 = 2U;
	int32_t x164 = -1;
	volatile int32_t t9 = -2664;

	t9 = (((x161==x162)<<x163)<=x164);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x211 = 0U;
	volatile int32_t t10 = 330621;

	t10 = (((x209==x210)<<x211)<=x212);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x213 = UINT16_MAX;
	static uint8_t x215 = 0U;
	static int16_t x216 = -1;
	int32_t t11 = 0;

	t11 = (((x213==x214)<<x215)<=x216);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x229 = 2216U;
	uint32_t x230 = UINT32_MAX;
	int16_t x231 = 11;
	int32_t x232 = -1;
	static volatile int32_t t12 = 464;

	t12 = (((x229==x230)<<x231)<=x232);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x253 = 58U;
	volatile int64_t x254 = -1LL;
	uint8_t x255 = 4U;
	volatile int32_t t13 = 3335773;

	t13 = (((x253==x254)<<x255)<=x256);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x257 = 40LLU;
	static int64_t x258 = 5773549805563LL;
	int32_t x259 = 0;
	volatile int32_t t14 = -745993;

	t14 = (((x257==x258)<<x259)<=x260);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x301 = 387177327507783LL;
	uint32_t x302 = 63317U;
	static volatile uint64_t x303 = 10LLU;

	t15 = (((x301==x302)<<x303)<=x304);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x307 = 23;
	int8_t x308 = -10;
	int32_t t16 = -363918769;

	t16 = (((x305==x306)<<x307)<=x308);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x309 = -1LL;
	int8_t x311 = 2;
	int32_t t17 = -447;

	t17 = (((x309==x310)<<x311)<=x312);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x401 = 1LLU;
	uint32_t x403 = 4U;
	int64_t x404 = -1LL;
	int32_t t18 = -301642964;

	t18 = (((x401==x402)<<x403)<=x404);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x573 = -17386402;
	static uint32_t x574 = 11U;
	uint32_t x575 = 0U;
	static int16_t x576 = 1;

	t19 = (((x573==x574)<<x575)<=x576);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x577 = 7533LLU;
	uint32_t x578 = 776U;
	uint8_t x579 = 3U;
	static int64_t x580 = INT64_MIN;
	int32_t t20 = 31174;

	t20 = (((x577==x578)<<x579)<=x580);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x629 = -1LL;
	volatile int16_t x632 = -1116;
	volatile int32_t t21 = 443022;

	t21 = (((x629==x630)<<x631)<=x632);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x641 = UINT8_MAX;
	int8_t x643 = 0;
	int8_t x644 = -7;

	t22 = (((x641==x642)<<x643)<=x644);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x661 = INT64_MAX;
	int16_t x662 = -5;
	static volatile uint8_t x664 = 12U;
	static int32_t t23 = 262263022;

	t23 = (((x661==x662)<<x663)<=x664);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x677 = -1;
	volatile uint8_t x678 = 15U;
	uint8_t x679 = 1U;
	int16_t x680 = INT16_MIN;
	static int32_t t24 = 39;

	t24 = (((x677==x678)<<x679)<=x680);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x698 = UINT8_MAX;
	uint8_t x699 = 8U;
	int32_t x700 = INT32_MIN;
	int32_t t25 = 4155;

	t25 = (((x697==x698)<<x699)<=x700);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x701 = 12;
	uint64_t x702 = 226770005186963293LLU;
	volatile uint32_t x703 = 1U;
	uint8_t x704 = 6U;
	volatile int32_t t26 = 805;

	t26 = (((x701==x702)<<x703)<=x704);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x757 = 533;
	static int16_t x758 = -1;
	static volatile int16_t x760 = 5622;
	volatile int32_t t27 = 783;

	t27 = (((x757==x758)<<x759)<=x760);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x774 = -1;
	int32_t x775 = 0;
	uint16_t x776 = UINT16_MAX;
	static int32_t t28 = -2;

	t28 = (((x773==x774)<<x775)<=x776);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x853 = -7;
	volatile uint16_t x855 = 9U;
	volatile int32_t t29 = -50934;

	t29 = (((x853==x854)<<x855)<=x856);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x897 = 285;
	uint32_t x900 = 2892U;
	static volatile int32_t t30 = 1379;

	t30 = (((x897==x898)<<x899)<=x900);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x909 = UINT32_MAX;
	uint8_t x910 = UINT8_MAX;
	int8_t x911 = 5;
	uint16_t x912 = 2738U;

	t31 = (((x909==x910)<<x911)<=x912);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x929 = -1LL;
	uint8_t x930 = UINT8_MAX;
	static int16_t x931 = 0;
	uint8_t x932 = UINT8_MAX;

	t32 = (((x929==x930)<<x931)<=x932);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x941 = INT16_MIN;
	static volatile int32_t x942 = INT32_MAX;
	static uint32_t x943 = 1U;
	int64_t x944 = -1LL;
	int32_t t33 = 452;

	t33 = (((x941==x942)<<x943)<=x944);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1025 = INT16_MIN;
	uint32_t x1026 = UINT32_MAX;
	uint8_t x1027 = 0U;
	static volatile int16_t x1028 = INT16_MIN;
	static int32_t t34 = -290;

	t34 = (((x1025==x1026)<<x1027)<=x1028);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1081 = INT16_MIN;
	static uint8_t x1084 = UINT8_MAX;

	t35 = (((x1081==x1082)<<x1083)<=x1084);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x1109 = 46095044LLU;
	uint32_t x1110 = 62935U;
	int8_t x1111 = 3;
	uint8_t x1112 = UINT8_MAX;
	volatile int32_t t36 = 1007066;

	t36 = (((x1109==x1110)<<x1111)<=x1112);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1145 = INT64_MIN;
	int16_t x1147 = 27;
	int8_t x1148 = -1;
	volatile int32_t t37 = 19;

	t37 = (((x1145==x1146)<<x1147)<=x1148);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1177 = UINT64_MAX;
	int8_t x1178 = -3;
	uint32_t x1180 = 3U;
	volatile int32_t t38 = -97723334;

	t38 = (((x1177==x1178)<<x1179)<=x1180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x1241 = UINT8_MAX;
	int16_t x1242 = -1;
	int8_t x1243 = 22;
	uint8_t x1244 = UINT8_MAX;
	int32_t t39 = 107;

	t39 = (((x1241==x1242)<<x1243)<=x1244);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1245 = 42;
	uint16_t x1246 = UINT16_MAX;
	volatile uint16_t x1248 = 3638U;
	int32_t t40 = 1;

	t40 = (((x1245==x1246)<<x1247)<=x1248);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1249 = UINT32_MAX;
	int8_t x1250 = INT8_MIN;
	volatile int16_t x1251 = 1;
	volatile int8_t x1252 = 0;
	int32_t t41 = 554179;

	t41 = (((x1249==x1250)<<x1251)<=x1252);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1325 = INT64_MAX;
	uint32_t x1326 = 192U;
	volatile int32_t t42 = -22133201;

	t42 = (((x1325==x1326)<<x1327)<=x1328);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1353 = -1;
	volatile uint32_t x1354 = 204650841U;
	uint8_t x1355 = 1U;
	volatile uint8_t x1356 = 92U;
	volatile int32_t t43 = -148807;

	t43 = (((x1353==x1354)<<x1355)<=x1356);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1400 = 334365825110888758LLU;

	t44 = (((x1397==x1398)<<x1399)<=x1400);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x1433 = 19U;
	int16_t x1434 = -47;
	int8_t x1435 = 0;
	int32_t x1436 = INT32_MAX;

	t45 = (((x1433==x1434)<<x1435)<=x1436);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1469 = 16;
	int32_t x1470 = INT32_MIN;
	static volatile uint8_t x1471 = 0U;
	int32_t x1472 = 12;
	int32_t t46 = 204030;

	t46 = (((x1469==x1470)<<x1471)<=x1472);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x1477 = 3059U;
	volatile uint32_t x1478 = 83276U;
	static uint8_t x1480 = 43U;
	int32_t t47 = -20458;

	t47 = (((x1477==x1478)<<x1479)<=x1480);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x1513 = -1;
	int8_t x1514 = INT8_MAX;
	uint64_t x1516 = 54025739LLU;
	int32_t t48 = 1;

	t48 = (((x1513==x1514)<<x1515)<=x1516);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x1521 = INT16_MIN;
	uint16_t x1522 = UINT16_MAX;
	uint64_t x1523 = 0LLU;
	uint16_t x1524 = UINT16_MAX;

	t49 = (((x1521==x1522)<<x1523)<=x1524);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1569 = 12800309379562216LL;
	volatile int32_t x1570 = 0;
	int8_t x1571 = 3;
	uint8_t x1572 = 0U;
	static int32_t t50 = -2912272;

	t50 = (((x1569==x1570)<<x1571)<=x1572);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x1601 = INT64_MIN;
	uint64_t x1602 = UINT64_MAX;
	static uint32_t x1603 = 14U;
	volatile uint16_t x1604 = 25195U;
	volatile int32_t t51 = -21877;

	t51 = (((x1601==x1602)<<x1603)<=x1604);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1653 = 7688U;
	uint32_t x1654 = 8791U;
	volatile uint16_t x1655 = 0U;
	uint16_t x1656 = 80U;
	static volatile int32_t t52 = -2;

	t52 = (((x1653==x1654)<<x1655)<=x1656);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1669 = -1;
	uint16_t x1670 = UINT16_MAX;
	static volatile int8_t x1671 = 7;
	uint8_t x1672 = UINT8_MAX;
	volatile int32_t t53 = -280169;

	t53 = (((x1669==x1670)<<x1671)<=x1672);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x1673 = UINT16_MAX;
	volatile int32_t x1674 = INT32_MAX;
	uint8_t x1675 = 25U;
	int16_t x1676 = INT16_MIN;
	volatile int32_t t54 = -154479;

	t54 = (((x1673==x1674)<<x1675)<=x1676);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1681 = UINT16_MAX;
	static volatile uint64_t x1682 = UINT64_MAX;
	uint64_t x1683 = 28LLU;
	int16_t x1684 = INT16_MAX;
	volatile int32_t t55 = 86503246;

	t55 = (((x1681==x1682)<<x1683)<=x1684);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1805 = -1;
	int16_t x1806 = 1003;
	uint8_t x1807 = 17U;
	int64_t x1808 = INT64_MIN;
	static volatile int32_t t56 = 3065;

	t56 = (((x1805==x1806)<<x1807)<=x1808);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1829 = 1U;
	int8_t x1830 = 1;
	int8_t x1831 = 6;
	int8_t x1832 = -1;
	int32_t t57 = 7750582;

	t57 = (((x1829==x1830)<<x1831)<=x1832);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1855 = 3U;
	uint8_t x1856 = 15U;
	volatile int32_t t58 = 993;

	t58 = (((x1853==x1854)<<x1855)<=x1856);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x1857 = 25;
	int16_t x1859 = 0;
	int32_t t59 = 939723;

	t59 = (((x1857==x1858)<<x1859)<=x1860);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1913 = INT16_MIN;
	int8_t x1914 = INT8_MIN;
	uint16_t x1915 = 7U;
	volatile int32_t x1916 = -10;
	volatile int32_t t60 = -2381689;

	t60 = (((x1913==x1914)<<x1915)<=x1916);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1961 = UINT64_MAX;
	volatile int8_t x1962 = INT8_MIN;
	int16_t x1963 = 12;
	static uint32_t x1964 = UINT32_MAX;
	volatile int32_t t61 = 162360;

	t61 = (((x1961==x1962)<<x1963)<=x1964);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2021 = INT16_MAX;
	uint64_t x2022 = 4023760LLU;
	uint32_t x2023 = 3U;
	int8_t x2024 = INT8_MIN;
	volatile int32_t t62 = 31907;

	t62 = (((x2021==x2022)<<x2023)<=x2024);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2058 = UINT64_MAX;
	int32_t t63 = -1;

	t63 = (((x2057==x2058)<<x2059)<=x2060);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2074 = 1U;
	static int64_t x2076 = INT64_MAX;
	int32_t t64 = 110;

	t64 = (((x2073==x2074)<<x2075)<=x2076);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2097 = -1LL;
	uint64_t x2098 = 6588LLU;
	uint8_t x2099 = 0U;
	int8_t x2100 = INT8_MIN;
	volatile int32_t t65 = 3335900;

	t65 = (((x2097==x2098)<<x2099)<=x2100);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x2125 = UINT16_MAX;
	uint8_t x2126 = 0U;
	uint16_t x2127 = 1U;
	int32_t t66 = -3;

	t66 = (((x2125==x2126)<<x2127)<=x2128);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x2137 = -1;
	static uint8_t x2138 = 13U;
	volatile int8_t x2139 = 0;

	t67 = (((x2137==x2138)<<x2139)<=x2140);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2153 = 8;
	volatile int64_t x2154 = -1LL;
	uint16_t x2155 = 3U;
	uint8_t x2156 = UINT8_MAX;
	int32_t t68 = 52055;

	t68 = (((x2153==x2154)<<x2155)<=x2156);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2189 = -3;
	int16_t x2190 = INT16_MAX;
	int8_t x2191 = 2;
	uint8_t x2192 = UINT8_MAX;
	static int32_t t69 = 11;

	t69 = (((x2189==x2190)<<x2191)<=x2192);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2197 = INT64_MAX;
	uint8_t x2198 = 4U;
	int8_t x2199 = 0;
	int64_t x2200 = 11176LL;
	int32_t t70 = 0;

	t70 = (((x2197==x2198)<<x2199)<=x2200);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2269 = INT64_MAX;
	volatile uint64_t x2270 = UINT64_MAX;
	volatile uint8_t x2271 = 1U;
	uint8_t x2272 = 0U;
	int32_t t71 = -333143688;

	t71 = (((x2269==x2270)<<x2271)<=x2272);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x2365 = 0U;
	int64_t x2367 = 16LL;
	static int8_t x2368 = 0;
	volatile int32_t t72 = -1;

	t72 = (((x2365==x2366)<<x2367)<=x2368);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2421 = -3;
	volatile int64_t x2422 = 575441LL;
	int16_t x2423 = 1;
	static int16_t x2424 = INT16_MAX;
	int32_t t73 = -1678;

	t73 = (((x2421==x2422)<<x2423)<=x2424);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x2481 = 1U;
	static uint32_t x2482 = UINT32_MAX;
	uint8_t x2483 = 5U;
	uint32_t x2484 = 2055821596U;
	volatile int32_t t74 = 73;

	t74 = (((x2481==x2482)<<x2483)<=x2484);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2642 = INT32_MIN;
	volatile int32_t t75 = 86;

	t75 = (((x2641==x2642)<<x2643)<=x2644);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2713 = 6066;
	volatile int32_t x2714 = -1;

	t76 = (((x2713==x2714)<<x2715)<=x2716);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x2717 = UINT64_MAX;
	int8_t x2718 = 0;
	int8_t x2720 = INT8_MAX;
	int32_t t77 = 33331395;

	t77 = (((x2717==x2718)<<x2719)<=x2720);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x2789 = -1;
	uint32_t x2791 = 9U;
	int32_t x2792 = -1;

	t78 = (((x2789==x2790)<<x2791)<=x2792);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x2841 = UINT64_MAX;
	uint8_t x2843 = 14U;
	int32_t x2844 = -1;

	t79 = (((x2841==x2842)<<x2843)<=x2844);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2881 = 201;
	uint16_t x2882 = UINT16_MAX;
	uint8_t x2883 = 0U;
	int32_t t80 = -6;

	t80 = (((x2881==x2882)<<x2883)<=x2884);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2905 = UINT16_MAX;
	int32_t x2906 = INT32_MAX;
	volatile int64_t x2907 = 1LL;
	volatile int32_t t81 = 28258161;

	t81 = (((x2905==x2906)<<x2907)<=x2908);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x2917 = -1;
	volatile int32_t x2918 = INT32_MIN;
	volatile int8_t x2919 = 8;
	int32_t t82 = -3938;

	t82 = (((x2917==x2918)<<x2919)<=x2920);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x2961 = 531U;
	int8_t x2962 = INT8_MAX;
	int64_t x2964 = -649765888703LL;
	static int32_t t83 = 5;

	t83 = (((x2961==x2962)<<x2963)<=x2964);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2977 = -1;
	uint64_t x2978 = UINT64_MAX;
	volatile uint8_t x2979 = 6U;
	volatile int32_t t84 = -65975;

	t84 = (((x2977==x2978)<<x2979)<=x2980);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x3021 = 260U;
	uint16_t x3022 = 1577U;
	int16_t x3023 = 2;
	int16_t x3024 = 10943;
	static volatile int32_t t85 = 0;

	t85 = (((x3021==x3022)<<x3023)<=x3024);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x3041 = INT8_MIN;
	volatile int64_t x3042 = INT64_MIN;
	int8_t x3043 = 0;
	volatile int32_t t86 = -5;

	t86 = (((x3041==x3042)<<x3043)<=x3044);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3049 = INT64_MIN;
	int8_t x3051 = 5;
	int64_t x3052 = INT64_MAX;
	static volatile int32_t t87 = 7768;

	t87 = (((x3049==x3050)<<x3051)<=x3052);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3058 = 606U;
	uint16_t x3059 = 4U;
	int8_t x3060 = INT8_MIN;
	volatile int32_t t88 = 1326390;

	t88 = (((x3057==x3058)<<x3059)<=x3060);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3125 = UINT16_MAX;
	uint64_t x3126 = 1085912159775039791LLU;
	uint16_t x3127 = 26U;
	uint64_t x3128 = 3036457LLU;

	t89 = (((x3125==x3126)<<x3127)<=x3128);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x3209 = UINT64_MAX;
	static int8_t x3211 = 0;
	int32_t t90 = -13;

	t90 = (((x3209==x3210)<<x3211)<=x3212);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x3225 = -1;
	volatile int16_t x3227 = 0;
	volatile uint8_t x3228 = 6U;
	volatile int32_t t91 = -35242937;

	t91 = (((x3225==x3226)<<x3227)<=x3228);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3229 = INT32_MIN;
	int16_t x3230 = -7;
	uint8_t x3231 = 21U;
	uint16_t x3232 = 1218U;

	t92 = (((x3229==x3230)<<x3231)<=x3232);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x3285 = 1567141895554162LLU;
	int8_t x3287 = 28;
	int16_t x3288 = -780;
	volatile int32_t t93 = -1312959;

	t93 = (((x3285==x3286)<<x3287)<=x3288);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x3289 = 7570;
	volatile uint16_t x3290 = 2U;
	volatile uint8_t x3291 = 1U;
	int16_t x3292 = -1;

	t94 = (((x3289==x3290)<<x3291)<=x3292);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3305 = UINT16_MAX;
	uint64_t x3306 = 3693463643LLU;
	int64_t x3307 = 24LL;
	volatile int32_t x3308 = INT32_MIN;
	volatile int32_t t95 = -3;

	t95 = (((x3305==x3306)<<x3307)<=x3308);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x3345 = 6238306991LLU;
	int8_t x3347 = 0;
	static volatile int8_t x3348 = INT8_MAX;
	static volatile int32_t t96 = -37814693;

	t96 = (((x3345==x3346)<<x3347)<=x3348);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x3349 = 1U;
	static volatile int32_t t97 = -18926;

	t97 = (((x3349==x3350)<<x3351)<=x3352);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3357 = 1432745LLU;
	int16_t x3358 = -158;
	uint64_t x3359 = 3LLU;
	int64_t x3360 = -1LL;
	static volatile int32_t t98 = -1954;

	t98 = (((x3357==x3358)<<x3359)<=x3360);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3433 = INT64_MAX;
	static uint32_t x3434 = 13477033U;
	static int32_t x3436 = -1;
	static volatile int32_t t99 = -3712;

	t99 = (((x3433==x3434)<<x3435)<=x3436);

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

