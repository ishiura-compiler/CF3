#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = -156374568LL;
static uint32_t x29 = UINT32_MAX;
volatile uint16_t x31 = 5U;
static volatile uint16_t x32 = 6U;
int16_t x49 = INT16_MAX;
int8_t x101 = INT8_MIN;
int32_t x131 = INT32_MIN;
volatile int8_t x153 = INT8_MIN;
uint8_t x157 = 15U;
volatile int16_t x159 = 1;
volatile int32_t t7 = 62;
int16_t x180 = 5;
static uint16_t x273 = UINT16_MAX;
static int8_t x326 = -56;
volatile uint8_t x328 = 25U;
volatile int64_t t13 = -406764LL;
int16_t x433 = INT16_MAX;
uint64_t x435 = 25995LLU;
uint8_t x436 = 3U;
static uint64_t t17 = 48250588075LLU;
static volatile uint16_t x445 = 692U;
int16_t x446 = 768;
static int8_t x485 = INT8_MIN;
volatile int8_t x487 = INT8_MIN;
uint16_t x522 = 22U;
uint64_t t22 = 81879172599013LLU;
int32_t x586 = INT32_MIN;
int16_t x773 = 2;
static int16_t x781 = -1;
volatile uint32_t t27 = 26152U;
int16_t x814 = INT16_MIN;
int64_t x816 = 0LL;
volatile uint64_t t32 = 23740LLU;
int32_t x885 = 811033;
int32_t x915 = INT32_MIN;
int64_t x949 = -1LL;
static uint8_t x952 = 3U;
int64_t t36 = 3269117157LL;
int8_t x970 = INT8_MAX;
int8_t x972 = 1;
volatile int32_t t38 = -3;
static uint8_t x1048 = 0U;
uint16_t x1076 = 7U;
static int32_t x1090 = INT32_MIN;
int32_t x1157 = INT32_MAX;
static int64_t x1158 = -1LL;
int8_t x1194 = INT8_MAX;
static int64_t x1199 = INT64_MAX;
int64_t t45 = -1828451446205995LL;
uint8_t x1284 = 7U;
uint32_t t47 = 12U;
uint16_t x1304 = 19U;
static int8_t x1311 = INT8_MAX;
volatile int64_t t49 = -1022517323LL;
int16_t x1326 = 1484;
volatile uint8_t x1328 = 0U;
int8_t x1346 = 31;
uint64_t x1348 = 6LLU;
static uint64_t x1362 = UINT64_MAX;
int16_t x1363 = -1;
int32_t x1419 = INT32_MAX;
volatile int64_t x1425 = -555706410765946017LL;
int16_t x1427 = INT16_MAX;
int64_t x1435 = -419007982LL;
uint8_t x1436 = 0U;
int8_t x1455 = INT8_MIN;
uint8_t x1456 = 0U;
static volatile int16_t x1498 = -4786;
static uint64_t x1594 = UINT64_MAX;
volatile uint64_t t59 = 13729505157LLU;
uint64_t x1597 = 14178336LLU;
volatile int64_t x1599 = 42759111803423150LL;
volatile uint32_t x1600 = 27U;
uint64_t t60 = 7299509238246LLU;
volatile int32_t t63 = 2644897;
static uint8_t x1668 = 58U;
volatile int64_t t65 = 203LL;
int64_t x1979 = INT64_MAX;
static int64_t t75 = 23457648987LL;
uint32_t x2021 = 554099268U;
static volatile int8_t x2022 = INT8_MIN;
volatile int64_t x2035 = -1LL;
uint8_t x2036 = 6U;
static int64_t t78 = 137350390613275561LL;
int64_t x2055 = INT64_MAX;
uint8_t x2056 = 8U;
volatile int8_t x2088 = 0;
uint16_t x2096 = 0U;
volatile uint64_t x2138 = UINT64_MAX;
int8_t x2139 = INT8_MAX;
int32_t x2140 = 0;
int8_t x2156 = 27;
static uint32_t t86 = 2127U;
static uint8_t x2188 = 11U;
int32_t x2203 = INT32_MIN;
uint8_t x2228 = 2U;
static int16_t x2241 = -1;
static uint8_t x2304 = 40U;
uint64_t x2357 = 20639LLU;
volatile int32_t x2395 = 20516;
uint32_t t93 = 13U;
volatile uint64_t t97 = 695356655LLU;
uint64_t x2601 = UINT64_MAX;
int32_t x2604 = 0;
uint64_t t99 = 517068LLU;


void f0(void) {
	volatile int8_t x21 = INT8_MAX;
	volatile int64_t x22 = -281104960LL;
	int16_t x23 = INT16_MIN;
	uint32_t x24 = 1U;

	t0 = (((x21%x22)/x23)>>x24);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x25 = INT32_MIN;
	static int8_t x26 = -2;
	uint32_t x27 = 87147U;
	uint16_t x28 = 31U;
	volatile uint32_t t1 = 2921542U;

	t1 = (((x25%x26)/x27)>>x28);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x30 = INT64_MIN;
	static volatile int64_t t2 = -17LL;

	t2 = (((x29%x30)/x31)>>x32);

	if (t2 != 13421772LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x50 = INT16_MIN;
	uint16_t x51 = 5U;
	int8_t x52 = 1;
	static int32_t t3 = 105314811;

	t3 = (((x49%x50)/x51)>>x52);

	if (t3 != 3276) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x102 = -1;
	uint8_t x103 = 69U;
	static int8_t x104 = 1;
	int32_t t4 = 434426;

	t4 = (((x101%x102)/x103)>>x104);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x129 = INT32_MAX;
	volatile int64_t x130 = INT64_MIN;
	uint8_t x132 = 1U;
	volatile int64_t t5 = -270459582915LL;

	t5 = (((x129%x130)/x131)>>x132);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x154 = 14931530;
	int64_t x155 = 4279468778552LL;
	int16_t x156 = 31;
	int64_t t6 = -212LL;

	t6 = (((x153%x154)/x155)>>x156);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x158 = -1;
	volatile uint8_t x160 = 4U;

	t7 = (((x157%x158)/x159)>>x160);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x177 = INT32_MIN;
	static int64_t x178 = INT64_MIN;
	static volatile uint32_t x179 = UINT32_MAX;
	volatile int64_t t8 = 935LL;

	t8 = (((x177%x178)/x179)>>x180);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x274 = -1LL;
	volatile int8_t x275 = INT8_MIN;
	static uint8_t x276 = 9U;
	int64_t t9 = 19569544LL;

	t9 = (((x273%x274)/x275)>>x276);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x301 = -21132211649LL;
	static uint16_t x302 = 19678U;
	static int64_t x303 = 1029674982387LL;
	uint16_t x304 = 3U;
	int64_t t10 = 23918LL;

	t10 = (((x301%x302)/x303)>>x304);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x321 = -12362;
	static int64_t x322 = INT64_MIN;
	int64_t x323 = -2514525079857982LL;
	uint16_t x324 = 12U;
	volatile int64_t t11 = -145LL;

	t11 = (((x321%x322)/x323)>>x324);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x325 = INT16_MIN;
	uint16_t x327 = UINT16_MAX;
	int32_t t12 = 8;

	t12 = (((x325%x326)/x327)>>x328);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x337 = 12U;
	static uint16_t x338 = 589U;
	int64_t x339 = INT64_MIN;
	volatile int8_t x340 = 3;

	t13 = (((x337%x338)/x339)>>x340);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x357 = 9;
	static int16_t x358 = INT16_MIN;
	volatile uint64_t x359 = UINT64_MAX;
	volatile int64_t x360 = 4LL;
	volatile uint64_t t14 = 561895113238016LLU;

	t14 = (((x357%x358)/x359)>>x360);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x361 = INT64_MIN;
	int8_t x362 = 30;
	volatile int8_t x363 = INT8_MIN;
	uint16_t x364 = 2U;
	volatile int64_t t15 = 1792751LL;

	t15 = (((x361%x362)/x363)>>x364);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x425 = -182;
	static int8_t x426 = INT8_MAX;
	static volatile uint8_t x427 = UINT8_MAX;
	int32_t x428 = 6;
	volatile int32_t t16 = 99617;

	t16 = (((x425%x426)/x427)>>x428);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x434 = INT16_MIN;

	t17 = (((x433%x434)/x435)>>x436);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x447 = INT64_MIN;
	volatile uint32_t x448 = 27U;
	volatile int64_t t18 = 174455439727LL;

	t18 = (((x445%x446)/x447)>>x448);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x486 = 1323;
	volatile uint8_t x488 = 15U;
	volatile int32_t t19 = -246199;

	t19 = (((x485%x486)/x487)>>x488);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x505 = INT16_MIN;
	static uint8_t x506 = 6U;
	int32_t x507 = INT32_MIN;
	uint8_t x508 = 16U;
	int32_t t20 = 13400525;

	t20 = (((x505%x506)/x507)>>x508);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x521 = INT32_MIN;
	int8_t x523 = INT8_MAX;
	int32_t x524 = 0;
	int32_t t21 = -50730;

	t21 = (((x521%x522)/x523)>>x524);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x577 = INT32_MIN;
	uint32_t x578 = 4664U;
	uint64_t x579 = 553302215LLU;
	uint32_t x580 = 1U;

	t22 = (((x577%x578)/x579)>>x580);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x585 = INT32_MAX;
	uint8_t x587 = 1U;
	int8_t x588 = 1;
	int32_t t23 = 295642178;

	t23 = (((x585%x586)/x587)>>x588);

	if (t23 != 1073741823) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x589 = -1;
	volatile uint8_t x590 = 20U;
	int16_t x591 = -1;
	int8_t x592 = 5;
	volatile int32_t t24 = -5486;

	t24 = (((x589%x590)/x591)>>x592);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x717 = INT16_MAX;
	int64_t x718 = INT64_MAX;
	static uint64_t x719 = UINT64_MAX;
	int8_t x720 = 0;
	volatile uint64_t t25 = 3801739475501LLU;

	t25 = (((x717%x718)/x719)>>x720);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x774 = 121623U;
	uint8_t x775 = UINT8_MAX;
	int8_t x776 = 3;
	uint32_t t26 = 89045U;

	t26 = (((x773%x774)/x775)>>x776);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x782 = 412867U;
	volatile int32_t x783 = 91869;
	uint64_t x784 = 0LLU;

	t27 = (((x781%x782)/x783)>>x784);

	if (t27 != 3U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x793 = -384009LL;
	static uint32_t x794 = UINT32_MAX;
	int32_t x795 = INT32_MIN;
	uint32_t x796 = 14U;
	int64_t t28 = -1203707598LL;

	t28 = (((x793%x794)/x795)>>x796);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x813 = UINT32_MAX;
	static int8_t x815 = INT8_MIN;
	uint32_t t29 = 64708U;

	t29 = (((x813%x814)/x815)>>x816);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x825 = 13899352839883LLU;
	uint32_t x826 = 1339216060U;
	int8_t x827 = -1;
	int32_t x828 = 15;
	volatile uint64_t t30 = 90256661484738772LLU;

	t30 = (((x825%x826)/x827)>>x828);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x829 = INT8_MIN;
	volatile uint64_t x830 = 20701990611165LLU;
	int16_t x831 = INT16_MIN;
	uint8_t x832 = 0U;
	uint64_t t31 = 23929671398LLU;

	t31 = (((x829%x830)/x831)>>x832);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x881 = INT64_MIN;
	uint64_t x882 = 1LLU;
	int16_t x883 = -1;
	static uint16_t x884 = 2U;

	t32 = (((x881%x882)/x883)>>x884);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x886 = UINT16_MAX;
	volatile uint64_t x887 = 2552069161254809LLU;
	int8_t x888 = 31;
	volatile uint64_t t33 = 813950745656606475LLU;

	t33 = (((x885%x886)/x887)>>x888);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x901 = INT8_MAX;
	uint32_t x902 = 8019U;
	int16_t x903 = 2858;
	static uint8_t x904 = 6U;
	volatile uint32_t t34 = 0U;

	t34 = (((x901%x902)/x903)>>x904);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x913 = 0U;
	volatile int16_t x914 = -32;
	uint16_t x916 = 3U;
	volatile int32_t t35 = 1094452;

	t35 = (((x913%x914)/x915)>>x916);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x950 = UINT8_MAX;
	int8_t x951 = -1;

	t36 = (((x949%x950)/x951)>>x952);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x953 = INT16_MAX;
	int16_t x954 = INT16_MIN;
	volatile uint32_t x955 = 49U;
	int16_t x956 = 1;
	static volatile uint32_t t37 = 1U;

	t37 = (((x953%x954)/x955)>>x956);

	if (t37 != 334U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x969 = INT16_MIN;
	int32_t x971 = INT32_MIN;

	t38 = (((x969%x970)/x971)>>x972);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1045 = -1;
	int16_t x1046 = INT16_MIN;
	int32_t x1047 = INT32_MIN;
	volatile int32_t t39 = -156118;

	t39 = (((x1045%x1046)/x1047)>>x1048);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1073 = 187344843607319225LLU;
	static int16_t x1074 = 9811;
	int32_t x1075 = 36355373;
	static volatile uint64_t t40 = 3353135LLU;

	t40 = (((x1073%x1074)/x1075)>>x1076);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1089 = -1LL;
	static int8_t x1091 = INT8_MIN;
	uint8_t x1092 = 3U;
	static volatile int64_t t41 = -1LL;

	t41 = (((x1089%x1090)/x1091)>>x1092);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1153 = -1;
	uint16_t x1154 = 31657U;
	static int16_t x1155 = INT16_MIN;
	static uint16_t x1156 = 3U;
	int32_t t42 = -98952;

	t42 = (((x1153%x1154)/x1155)>>x1156);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1159 = INT32_MIN;
	uint8_t x1160 = 11U;
	volatile int64_t t43 = -121LL;

	t43 = (((x1157%x1158)/x1159)>>x1160);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1193 = INT16_MIN;
	volatile int16_t x1195 = INT16_MIN;
	int16_t x1196 = 6;
	volatile int32_t t44 = -769;

	t44 = (((x1193%x1194)/x1195)>>x1196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1197 = -1;
	int64_t x1198 = -185073120974301LL;
	int8_t x1200 = 1;

	t45 = (((x1197%x1198)/x1199)>>x1200);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1249 = INT16_MIN;
	uint64_t x1250 = 672LLU;
	static int64_t x1251 = 380158LL;
	static int8_t x1252 = 47;
	static volatile uint64_t t46 = 2891LLU;

	t46 = (((x1249%x1250)/x1251)>>x1252);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1281 = UINT32_MAX;
	volatile int8_t x1282 = 5;
	int16_t x1283 = -1;

	t47 = (((x1281%x1282)/x1283)>>x1284);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x1301 = UINT8_MAX;
	int32_t x1302 = -1;
	int32_t x1303 = -15;
	int32_t t48 = 494784;

	t48 = (((x1301%x1302)/x1303)>>x1304);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1309 = UINT32_MAX;
	volatile int64_t x1310 = INT64_MIN;
	uint16_t x1312 = 4U;

	t49 = (((x1309%x1310)/x1311)>>x1312);

	if (t49 != 2113665LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1325 = 3U;
	int64_t x1327 = 6472987471546639LL;
	volatile int64_t t50 = -21979961937210LL;

	t50 = (((x1325%x1326)/x1327)>>x1328);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x1345 = -1;
	int16_t x1347 = INT16_MIN;
	volatile int32_t t51 = -6;

	t51 = (((x1345%x1346)/x1347)>>x1348);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1361 = 1403;
	int32_t x1364 = 0;
	volatile uint64_t t52 = 2951LLU;

	t52 = (((x1361%x1362)/x1363)>>x1364);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1417 = INT16_MIN;
	int8_t x1418 = 41;
	static int16_t x1420 = 28;
	volatile int32_t t53 = 1044147;

	t53 = (((x1417%x1418)/x1419)>>x1420);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x1426 = UINT8_MAX;
	static volatile int8_t x1428 = 0;
	volatile int64_t t54 = -1853382LL;

	t54 = (((x1425%x1426)/x1427)>>x1428);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1433 = INT64_MIN;
	volatile int64_t x1434 = 6960897019637722LL;
	static volatile int64_t t55 = 102893189954LL;

	t55 = (((x1433%x1434)/x1435)>>x1436);

	if (t55 != 437905LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1453 = -1;
	static volatile int16_t x1454 = INT16_MAX;
	static int32_t t56 = -2400493;

	t56 = (((x1453%x1454)/x1455)>>x1456);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint32_t x1497 = 25U;
	volatile int16_t x1499 = INT16_MAX;
	int8_t x1500 = 12;
	uint32_t t57 = 48625U;

	t57 = (((x1497%x1498)/x1499)>>x1500);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1537 = -1;
	static int8_t x1538 = INT8_MIN;
	uint16_t x1539 = 932U;
	static uint8_t x1540 = 22U;
	int32_t t58 = 71298502;

	t58 = (((x1537%x1538)/x1539)>>x1540);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x1593 = 0U;
	volatile uint8_t x1595 = UINT8_MAX;
	uint16_t x1596 = 1U;

	t59 = (((x1593%x1594)/x1595)>>x1596);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x1598 = -32940564;

	t60 = (((x1597%x1598)/x1599)>>x1600);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x1617 = INT16_MAX;
	int64_t x1618 = -293093946255LL;
	static uint64_t x1619 = UINT64_MAX;
	int16_t x1620 = 11;
	static volatile uint64_t t61 = 1812590497707LLU;

	t61 = (((x1617%x1618)/x1619)>>x1620);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1649 = 915;
	int8_t x1650 = -23;
	static uint8_t x1651 = 1U;
	uint16_t x1652 = 30U;
	int32_t t62 = 1;

	t62 = (((x1649%x1650)/x1651)>>x1652);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x1657 = INT32_MIN;
	int32_t x1658 = 103579694;
	static volatile int8_t x1659 = -1;
	int8_t x1660 = 7;

	t63 = (((x1657%x1658)/x1659)>>x1660);

	if (t63 != 592888) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x1665 = -1635846180557LL;
	uint64_t x1666 = UINT64_MAX;
	static volatile uint16_t x1667 = 1265U;
	uint64_t t64 = 4LLU;

	t64 = (((x1665%x1666)/x1667)>>x1668);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1677 = 3297438945211842861LL;
	int8_t x1678 = INT8_MIN;
	static uint32_t x1679 = 248540U;
	uint16_t x1680 = 11U;

	t65 = (((x1677%x1678)/x1679)>>x1680);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x1697 = 5270594375358338626LLU;
	int64_t x1698 = -1LL;
	int64_t x1699 = 107484563539858LL;
	volatile int16_t x1700 = 6;
	uint64_t t66 = 3LLU;

	t66 = (((x1697%x1698)/x1699)>>x1700);

	if (t66 != 766LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x1705 = INT8_MAX;
	int16_t x1706 = -1;
	int32_t x1707 = INT32_MIN;
	uint8_t x1708 = 2U;
	volatile int32_t t67 = -1071;

	t67 = (((x1705%x1706)/x1707)>>x1708);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x1721 = UINT8_MAX;
	static uint64_t x1722 = 17366279719686LLU;
	int32_t x1723 = INT32_MAX;
	volatile int32_t x1724 = 10;
	volatile uint64_t t68 = 2821696249722LLU;

	t68 = (((x1721%x1722)/x1723)>>x1724);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x1757 = INT32_MIN;
	static int64_t x1758 = -6209703029063502LL;
	int8_t x1759 = INT8_MIN;
	uint16_t x1760 = 0U;
	static volatile int64_t t69 = -29292LL;

	t69 = (((x1757%x1758)/x1759)>>x1760);

	if (t69 != 16777216LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x1765 = UINT64_MAX;
	static int32_t x1766 = INT32_MAX;
	uint8_t x1767 = 3U;
	uint16_t x1768 = 0U;
	volatile uint64_t t70 = 124012889654LLU;

	t70 = (((x1765%x1766)/x1767)>>x1768);

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x1809 = UINT64_MAX;
	uint64_t x1810 = 63946111592861552LLU;
	volatile int32_t x1811 = -34;
	uint8_t x1812 = 24U;
	uint64_t t71 = 3623226374744LLU;

	t71 = (((x1809%x1810)/x1811)>>x1812);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x1825 = INT16_MAX;
	uint64_t x1826 = 4690163LLU;
	int32_t x1827 = INT32_MAX;
	static uint8_t x1828 = 27U;
	volatile uint64_t t72 = 965361501LLU;

	t72 = (((x1825%x1826)/x1827)>>x1828);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x1833 = 0U;
	int8_t x1834 = INT8_MIN;
	int64_t x1835 = INT64_MIN;
	volatile uint8_t x1836 = 1U;
	int64_t t73 = 619117578LL;

	t73 = (((x1833%x1834)/x1835)>>x1836);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x1877 = INT64_MIN;
	int64_t x1878 = INT64_MIN;
	uint32_t x1879 = UINT32_MAX;
	int64_t x1880 = 1LL;
	int64_t t74 = 6999LL;

	t74 = (((x1877%x1878)/x1879)>>x1880);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x1977 = -3683924;
	int8_t x1978 = -1;
	static volatile int8_t x1980 = 0;

	t75 = (((x1977%x1978)/x1979)>>x1980);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x1993 = INT8_MIN;
	uint32_t x1994 = 143640U;
	static int64_t x1995 = INT64_MIN;
	static volatile int8_t x1996 = 1;
	volatile int64_t t76 = -41285117429LL;

	t76 = (((x1993%x1994)/x1995)>>x1996);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2023 = -368124661;
	int32_t x2024 = 16;
	uint32_t t77 = 2342U;

	t77 = (((x2021%x2022)/x2023)>>x2024);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2033 = INT16_MIN;
	int8_t x2034 = -1;

	t78 = (((x2033%x2034)/x2035)>>x2036);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2041 = UINT32_MAX;
	static int8_t x2042 = -1;
	uint64_t x2043 = UINT64_MAX;
	uint32_t x2044 = 3U;
	uint64_t t79 = 892654233114149LLU;

	t79 = (((x2041%x2042)/x2043)>>x2044);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2053 = -861;
	int16_t x2054 = INT16_MIN;
	volatile int64_t t80 = -191LL;

	t80 = (((x2053%x2054)/x2055)>>x2056);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2085 = INT64_MIN;
	int8_t x2086 = -1;
	volatile uint64_t x2087 = 25LLU;
	uint64_t t81 = 176650667182LLU;

	t81 = (((x2085%x2086)/x2087)>>x2088);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2093 = INT16_MIN;
	volatile int64_t x2094 = -1093267471LL;
	uint64_t x2095 = 1039487LLU;
	volatile uint64_t t82 = 6639335LLU;

	t82 = (((x2093%x2094)/x2095)>>x2096);

	if (t82 != 17746007476485LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x2133 = INT8_MIN;
	volatile uint8_t x2134 = UINT8_MAX;
	int64_t x2135 = INT64_MIN;
	uint8_t x2136 = 29U;
	volatile int64_t t83 = 402210598525114LL;

	t83 = (((x2133%x2134)/x2135)>>x2136);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2137 = INT64_MIN;
	static volatile uint64_t t84 = 765200983LLU;

	t84 = (((x2137%x2138)/x2139)>>x2140);

	if (t84 != 72624976668147841LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2153 = -1;
	uint16_t x2154 = 11U;
	int16_t x2155 = INT16_MAX;
	static volatile int32_t t85 = 534438;

	t85 = (((x2153%x2154)/x2155)>>x2156);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x2173 = 18917U;
	int32_t x2174 = INT32_MAX;
	int32_t x2175 = INT32_MAX;
	int8_t x2176 = 1;

	t86 = (((x2173%x2174)/x2175)>>x2176);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2185 = -1LL;
	int16_t x2186 = -1;
	int8_t x2187 = -19;
	static volatile int64_t t87 = 10579040629823LL;

	t87 = (((x2185%x2186)/x2187)>>x2188);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x2201 = 3848U;
	static uint8_t x2202 = 23U;
	uint32_t x2204 = 12U;
	volatile uint32_t t88 = 32967004U;

	t88 = (((x2201%x2202)/x2203)>>x2204);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x2225 = 41U;
	int32_t x2226 = INT32_MIN;
	int16_t x2227 = -1;
	volatile uint32_t t89 = 7U;

	t89 = (((x2225%x2226)/x2227)>>x2228);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2242 = 9;
	int16_t x2243 = INT16_MIN;
	int32_t x2244 = 12;
	volatile int32_t t90 = 327960974;

	t90 = (((x2241%x2242)/x2243)>>x2244);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x2301 = -4;
	int64_t x2302 = 75135LL;
	uint64_t x2303 = 908830663LLU;
	uint64_t t91 = 122225440977LLU;

	t91 = (((x2301%x2302)/x2303)>>x2304);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x2358 = INT8_MIN;
	static int8_t x2359 = INT8_MIN;
	int8_t x2360 = 21;
	uint64_t t92 = 233LLU;

	t92 = (((x2357%x2358)/x2359)>>x2360);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x2393 = 1221993922U;
	volatile uint16_t x2394 = 4U;
	uint8_t x2396 = 22U;

	t93 = (((x2393%x2394)/x2395)>>x2396);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x2401 = -1LL;
	int32_t x2402 = -1830;
	int8_t x2403 = INT8_MAX;
	static int8_t x2404 = 0;
	static int64_t t94 = 133886060196791LL;

	t94 = (((x2401%x2402)/x2403)>>x2404);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x2437 = 1U;
	int32_t x2438 = -1;
	int16_t x2439 = INT16_MAX;
	static uint8_t x2440 = 13U;
	volatile uint32_t t95 = 0U;

	t95 = (((x2437%x2438)/x2439)>>x2440);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x2449 = -1;
	volatile uint32_t x2450 = 29U;
	uint32_t x2451 = 12391612U;
	int16_t x2452 = 12;
	volatile uint32_t t96 = 4046U;

	t96 = (((x2449%x2450)/x2451)>>x2452);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x2493 = 739301039567136LLU;
	uint32_t x2494 = 12U;
	int64_t x2495 = INT64_MIN;
	volatile uint16_t x2496 = 2U;

	t97 = (((x2493%x2494)/x2495)>>x2496);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x2513 = 2LLU;
	volatile int8_t x2514 = -3;
	uint64_t x2515 = 696030419LLU;
	int8_t x2516 = 0;
	volatile uint64_t t98 = 32369808794162LLU;

	t98 = (((x2513%x2514)/x2515)>>x2516);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x2602 = 2U;
	int16_t x2603 = 129;

	t99 = (((x2601%x2602)/x2603)>>x2604);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

